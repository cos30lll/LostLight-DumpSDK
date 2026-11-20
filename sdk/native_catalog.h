#pragma once
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
/* Catalog records, NOT native instances. rtti_count may exceed one for local names.
   Unknown size is zero with size_known=0. Reflection size is not full-member coverage.
   vtable slots are contiguous executable prefixes; signatures/extents can be unknown. */
typedef struct {
 const char *name,*package,*catalog_tag;
 uint64_t reflected_size,alignment,descriptor_rva;
 size_t rtti_start,rtti_count,vtable_start,vtable_count;
 size_t method_count,signature_only_count,field_count,property_count,event_count,enum_value_count;
 unsigned size_known;
} msdk_catalog_type;
typedef struct { size_t type_index; uint64_t rtti_rva; const char *mangled,*kind; } msdk_catalog_rtti;
typedef struct { size_t type_index; uint64_t rtti_rva,address_point_rva; int64_t offset_to_top; size_t first_slot,slot_count; unsigned truncated; } msdk_catalog_vtable;
extern const msdk_catalog_type msdk_catalog_types[];
extern const msdk_catalog_rtti msdk_catalog_rtti_records[];
extern const msdk_catalog_vtable msdk_catalog_vtables[];
extern const uint64_t msdk_catalog_vtable_slots[];
extern const size_t msdk_catalog_type_count,msdk_catalog_rtti_count,msdk_catalog_vtable_count,msdk_catalog_vtable_slot_count;
#ifdef __cplusplus
}
#endif
