#pragma once
#include <cstdint>
#include <cstddef>
namespace msdk {
constexpr char kBuildId[] = "ac027ff823a6f358af1a7c5ddf123946069cd23e";
constexpr char kSha256[] = "59bfec08df2e79dbc158ad59941a3fb8b20b5ef815e3774675599758290bfd65";
struct RttiSeed { uintptr_t rva; const char *name; const char *kind; size_t base_start, base_count; };
struct BaseSeed { uintptr_t rtti; int64_t offset; unsigned flags; };
struct VtableSeed { uintptr_t address_point, rtti; int64_t top; size_t slot_start, count; bool truncated; };
struct MethodSeed { const char *module; const char *name; uintptr_t rva; int flags; };
}