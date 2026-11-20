"""Render the public declaration views from the frozen Lost Light 1.0.580 handoff."""
import argparse
from collections import defaultdict
import hashlib
from pathlib import Path
import re
from zipfile import ZipFile


SOURCE = "MessiahNativeSDK-github-handoff/analysis/completion-work/generated/dump.h"
SOURCE_SHA256 = "4a5b97b8812d0bd323701568ef2688bdc94fa19e2937acd2ba96adb5b1531a58"
DIVIDER = "// " + "=" * 76
HEADER = """// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.
"""
PRESERVED = (
    "// Namespace:", "// Full Name:", "// Full Name+:", "// Package:",
    "// Reflection Alias:", "// Primitive registration:", "// Declaration label",
    "// Size/Alignment:", "// Storage relation:", "// Storage proven", "// No field offset",
    "// Native fields", "// Native methods", "// Known member signatures only",
    "// Events -", "// Native reflection enum", "// Original C++ scoped-ness",
    "// No reflected/native members",
)


def read_snapshot(archive_path):
    with ZipFile(archive_path) as archive:
        entry = archive.getinfo(SOURCE)
        if entry.file_size != 26029060:
            raise ValueError("The archive contains a different source dump")
        data = archive.read(entry)
    if hashlib.sha256(data).hexdigest() != SOURCE_SHA256:
        raise ValueError("Source dump SHA-256 differs from the fixed 1.0.580 snapshot")
    return data.decode("utf-8").split(DIVIDER + "\n// Supplemental Native read-ABI", 1)[0]


def joined_comment(lines, pos):
    """A wrapped note extends to the next blank line or declaration."""
    parts = []
    while pos < len(lines) and lines[pos].lstrip().startswith("//"):
        parts.append(lines[pos].strip()[3:])
        pos += 1
    return " ".join(parts)


def render_block(block, rtti):
    lines = block.strip().splitlines()
    output = []
    for index, line in enumerate(lines):
        s = line.strip()
        if not s:
            if output and output[-1]:
                output.append("")
        elif not s.startswith("//"):
            # Enum declarations also record the original label and width.
            output.append(line.partition("; descriptor:")[0] if "// label:" in line else line)
        elif s.startswith("// t_") and index and lines[index - 1].endswith("catalog tag:"):
            output[-1] += " " + s[3:]
        elif s.startswith(PRESERVED) or "; // Storage " in s:
            output.append(line)
        elif s.startswith("// RTTI RVA:"):
            address, kind, _ = s[13:].split("; ")
            output.append(f"// RTTI record {rtti[address]}; {kind}")
        elif s.startswith("// Base RTTI:"):
            base, parent, flags = s[14:].split("; ", 2)
            parent = parent.removeprefix("parent RTTI=")
            output.append(f"// Base RTTI record {rtti[base]} of {rtti[parent]}; {flags}")
        elif s.startswith("// VTable:"):
            record, details = s.split("; RTTI=", 1)[1].split("; ", 1)
            output.append(f"    // VTable for RTTI record {rtti[record]}; {details}")
        elif s.startswith("// Reflected Size:"):
            output.append(line.partition("; Type Descriptor:")[0])
        elif s.startswith("// Reflection base:"):
            output.append(line.partition("; getter=")[0])
        elif s.startswith("// Property:"):
            output.append(line.partition("; descriptor=")[0])
        elif s.startswith("// Evidence:") and "name=" in s:
            source = s.split("name=", 1)[1].rstrip(".")
            evidence = s.split()[2]
            output.append(f"    // name_status={source}; storage_evidence={evidence}")
        elif s.startswith("// RVA:"):
            slot = re.search(r" Slot: (\d+)", s)
            evidence = f"virtual slot {slot[1]}" if slot else "direct entry"
            output.append(f"    // Method evidence: {evidence}.")
        elif s.startswith("// NO MEMBER RVA."):
            output.append("    // Method evidence: signature only.")
        elif s.startswith("// Parameter metadata"):
            output.append("    // " + joined_comment(lines, index))
        elif s.startswith("// Subscription signature evidence:"):
            note = joined_comment(lines, index)
            signature = note.split(": ", 1)[1].split(" [", 1)[0]
            output.append("    // Subscription signature evidence: " + signature)
    return "\n".join(line.rstrip() for line in output).rstrip() + "\n"


def store_text(path, data):
    path.write_bytes(data.encode("utf-8"))


def export_views(archive_path, folder):
    core = read_snapshot(archive_path)
    addresses = re.findall(r"^// RTTI RVA: (0x[0-9A-F]+);", core, re.MULTILINE)
    rtti = {address: index for index, address in enumerate(addresses, 1)}
    packages = defaultdict(list)
    blocks = []
    for block in core.split(DIVIDER + "\n")[1:]:
        package = re.search(r"^// Package: (.+?); catalog tag:", block, re.MULTILINE)[1]
        view = render_block(block, rtti)
        packages[package].append(view)
        blocks.append(view)
    if len(blocks) != 17032 or len(rtti) != 16466 or len(packages) != 87:
        raise ValueError("Incomplete type or package catalog")
    package_dir = folder / "packages"
    package_dir.mkdir(parents=True, exist_ok=True)
    store_text(folder / "dump.h", HEADER + "\n" + "\n".join(blocks))
    index = ["# 按包查阅", "", "分包与总表包含相同的类型声明。编号区分大小写不同的包名。",
             "", "| 包名 | 类型／别名阅读块 |", "| --- | ---: |"]
    for number, (package, views) in enumerate(sorted(packages.items()), 1):
        slug = re.sub(r"[^A-Za-z0-9_-]", "_", package)
        filename = f"{number:02d}-{slug}.h"
        store_text(package_dir / filename, HEADER + "\n" + "\n".join(views))
        index.append(f"| [{package}]({filename}) | {len(views):,} |")
    store_text(package_dir / "README.md", "\n".join(index) + "\n")


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("archive", type=Path, help="MessiahNativeSDK-github-handoff.zip")
    parser.add_argument("--output", type=Path, default=Path(__file__).resolve().parents[1] / "dump")
    args = parser.parse_args()
    export_views(args.archive, args.output)
