/* Messiah Native SDK: ac027ff823a6f358af1a7c5ddf123946069cd23e; static_elf_profile; generation 0.
Recovered metadata, not original source. Unknown native fields/signatures remain unknown. */
#pragma once
#include <stdint.h>
#include <stddef.h>
#if defined(__cplusplus)
#define MSDK_ASSERT(c,m) static_assert(c,m)
extern "C" {
#else
#define MSDK_ASSERT(c,m) _Static_assert(c,m)
#endif
typedef struct { const char *name; uint64_t function_rva; int32_t flags; uint32_t observed; const char *origin; } msdk_method;
typedef struct { const char *name; uint64_t rtti_rva; const char *kind; uint32_t observed; } msdk_native_type;
typedef struct { uint64_t child_rtti_rva,base_rtti_rva; int64_t offset; uint32_t flags,offset_is_vtable_entry; } msdk_base;
typedef struct { uint64_t rtti_rva,address_point_rva; int64_t offset_to_top; uint32_t slot; uint64_t function_rva; uint32_t observed; } msdk_virtual;
typedef struct { const char *name; uint64_t type_rva,base_rva; int64_t basicsize,itemsize,dict_offset; } msdk_binding_type;
typedef struct { const char *type_name,*member_name; int64_t offset; int32_t kind,flags; } msdk_member;
typedef struct { const char *type_name,*property_name; uint64_t getter_rva,setter_rva; } msdk_property;
extern const msdk_method msdk_methods[];
extern const size_t msdk_method_count;
extern const msdk_native_type msdk_types[];
extern const size_t msdk_type_count;
extern const msdk_base msdk_bases[];
extern const size_t msdk_base_count;
extern const msdk_virtual msdk_virtuals[];
extern const size_t msdk_virtual_count;
extern const msdk_binding_type msdk_binding_types[];
extern const size_t msdk_binding_type_count;
extern const msdk_member msdk_members[];
extern const size_t msdk_member_count;
extern const msdk_property msdk_properties[];
extern const size_t msdk_property_count;
#if defined(__cplusplus)
}
#endif
