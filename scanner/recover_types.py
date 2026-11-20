#!/usr/bin/env python3
"""Recover Itanium class RTTI, base relationships and vtable prefixes from a local ELF."""

import argparse
from collections import Counter
import hashlib
import json
import os
from pathlib import Path
import struct
import subprocess
import tempfile


BUILD_ID = "ac027ff823a6f358af1a7c5ddf123946069cd23e"
ELF_SHA256 = "59bfec08df2e79dbc158ad59941a3fb8b20b5ef815e3774675599758290bfd65"
RTTI_KINDS = {0x5A34228: "class", 0x5A34278: "si", 0x5A342E0: "vmi"}
NAME_REGION_DESCRIPTOR = 0x682E020
MAX_SLOTS = 4096
PROGRAM_HEADER = struct.Struct("<IIQQQQQQ")
SECTION_HEADER = struct.Struct("<IIQQQQIIQQ")
SYMBOL = struct.Struct("<IBBHQQ")
RELOCATION = struct.Struct("<QQq")


class Elf:
    def __init__(self, path):
        self.data = path.read_bytes()
        if hashlib.sha256(self.data).hexdigest() != ELF_SHA256:
            raise ValueError("ELF SHA-256 differs from the supported build")

        ph_offset, sh_offset = struct.unpack_from("<QQ", self.data, 32)
        ph_size, ph_count, sh_size, sh_count = struct.unpack_from("<HHHH", self.data, 54)
        self.segments = [PROGRAM_HEADER.unpack_from(self.data, ph_offset + i * ph_size)
                         for i in range(ph_count)]
        sections = [SECTION_HEADER.unpack_from(self.data, sh_offset + i * sh_size)
                    for i in range(sh_count)]
        self.executable_ranges = [(s[3], s[3] + s[5]) for s in sections if s[2] & 4 and s[5]]
        self.relocations = self.read_relocations(sections)

        start, size = struct.unpack("<QQ", self.raw(NAME_REGION_DESCRIPTOR, 16))
        self.names_start = start
        table = bytes(((((byte << 3) | (byte >> 5)) & 255) ^ 0x37) for byte in range(256))
        self.names = self.raw(start, size).translate(table)

    def read_relocations(self, sections):
        symbols = next(s for s in sections if s[1] == 11)  # SHT_DYNSYM
        symbol_data = self.data[symbols[4]:symbols[4] + symbols[5]]
        entries = list(SYMBOL.iter_unpack(symbol_data))
        relocations = {}
        for section in sections:
            if section[1] != 4:  # SHT_RELA
                continue
            offset, size = section[4:6]
            for address, info, addend in RELOCATION.iter_unpack(self.data[offset:offset + size]):
                kind = info & 0xFFFFFFFF
                symbol = info >> 32
                if kind == 1027:  # R_AARCH64_RELATIVE
                    relocations[address] = addend
                elif kind in (257, 1025, 1026) and symbol < len(entries) and entries[symbol][3]:
                    relocations[address] = entries[symbol][4] + addend
        return relocations

    def file_offset(self, address, size):
        for kind, _, offset, start, _, file_size, _, _ in self.segments:
            if kind == 1 and start <= address and address + size <= start + file_size:
                return offset + address - start
        return None

    def raw(self, address, size):
        offset = self.file_offset(address, size)
        return b"" if offset is None else self.data[offset:offset + size]

    def pointer(self, address):
        if address in self.relocations:
            return self.relocations[address]
        raw = self.raw(address, 8)
        return int.from_bytes(raw, "little") if len(raw) == 8 else None

    def name(self, address):
        if address is None:
            raise ValueError("missing RTTI name pointer")
        if self.names_start <= address < self.names_start + len(self.names):
            data, offset = self.names, address - self.names_start
        else:
            data, offset = self.data, self.file_offset(address, 1)
        if offset is None:
            raise ValueError("unmapped RTTI name")
        end = data.find(b"\0", offset, offset + 4096)
        if end <= offset:
            raise ValueError("unreadable RTTI name")
        return data[offset:end].decode("ascii")

    def is_code(self, value):
        return (value is not None and value % 4 == 0
                and any(start <= value < end for start, end in self.executable_ranges))


def read_type(elf, address, kind):
    mangled = elf.name(elf.pointer(address + 8))
    bases = []
    vmi_flags = 0
    if kind == "si":
        bases.append(dict(rtti_rva=elf.pointer(address + 16), offset=0,
                          flags=2, offset_kind="nonvirtual"))
    elif kind == "vmi":
        vmi_flags, count = struct.unpack("<II", elf.raw(address + 16, 8))
        if not 0 < count <= 4096:
            raise ValueError("invalid base count")
        for index in range(count):
            base = address + 24 + 16 * index
            packed, = struct.unpack("<q", elf.raw(base + 8, 8))
            flags = packed & 255
            bases.append(dict(rtti_rva=elf.pointer(base), offset=packed >> 8, flags=flags,
                              offset_kind="vtable_offset_entry" if flags & 1 else "nonvirtual"))
    return dict(rva=address, mangled=mangled, kind=kind, vmi_flags=vmi_flags, bases=bases)


def demangle(records):
    names = "".join(record["mangled"] + "\n" for record in records)
    completed = subprocess.run(["c++filt", "--format=gnu-v3", "--types"], input=names,
                               capture_output=True, encoding="utf-8", check=True)
    decoded = completed.stdout.splitlines()
    if len(decoded) != len(records):
        raise ValueError("c++filt returned an unexpected number of names")
    for record, display_name in zip(records, decoded):
        record["name"] = display_name


def recover(elf):
    rel = sorted(elf.relocations.items())
    records = [read_type(elf, address, RTTI_KINDS[value])
               for address, value in rel if value in RTTI_KINDS]
    known = {record["rva"] for record in records}
    if any(base["rtti_rva"] not in known for record in records for base in record["bases"]):
        raise ValueError("base RTTI record missing")
    demangle(records)
    tables = []
    for address, type_rva in rel:
        if type_rva not in known:
            continue
        header = elf.raw(address - 8, 8)
        if len(header) != 8:
            continue
        top, = struct.unpack("<q", header)
        if not -0x100000 <= top <= 0x100000:
            continue
        slots = []
        stop = "slot_limit"
        for index in range(MAX_SLOTS):
            value = elf.pointer(address + 8 + index * 8)
            if not elf.is_code(value):
                stop = "unmapped" if value is None else "null_or_non_code"
                break
            slots.append(value)
        if slots:
            tables.append(dict(rtti_rva=type_rva, address_point_rva=address + 8,
                               top=top, slots=slots, truncated=stop == "slot_limit",
                               termination=stop))
    counts = dict(rtti_records=len(records), unique_rtti_names=len({r["name"] for r in records}),
                  rtti_kinds=dict(Counter(r["kind"] for r in records)),
                  base_relations=sum(len(r["bases"]) for r in records),
                  virtual_base_relations=sum(bool(b["flags"] & 1) for r in records for b in r["bases"]),
                  vtable_groups=len(tables), virtual_slots=sum(len(t["slots"]) for t in tables))
    return dict(schema="lostlight-rtti-scan-v1", fixed_elf_sha256=ELF_SHA256, build_id=BUILD_ID,
                counts=counts, rtti=records, vtables=tables)


def write_report(path, report):
    path.parent.mkdir(parents=True, exist_ok=True)
    temporary_path = None
    try:
        with tempfile.NamedTemporaryFile(mode="w", encoding="utf-8", newline="\n",
                                         dir=path.parent, delete=False) as out:
            temporary_path = Path(out.name)
            json.dump(report, out, ensure_ascii=False, indent=2)
            out.write("\n")
        os.replace(temporary_path, path)
    finally:
        if temporary_path is not None:
            temporary_path.unlink(missing_ok=True)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("elf", type=Path, help="local library matching the documented SHA-256")
    parser.add_argument("output", type=Path, help="destination JSON file")
    args = parser.parse_args()
    try:
        if args.elf.resolve() == args.output.resolve():
            raise ValueError("input and output paths must differ")
        report = recover(Elf(args.elf))
        write_report(args.output, report)
    except (OSError, ValueError, struct.error, subprocess.CalledProcessError) as error:
        parser.exit(1, f"{parser.prog}: {error}\n")
    print(json.dumps(report["counts"]))


if __name__ == "__main__":
    main()
