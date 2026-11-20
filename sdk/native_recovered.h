/* Fixed-build partial Native SDK; build ac027ff823a6f358af1a7c5ddf123946069cd23e; generation 0. No complete SDK/layout claim. */
#pragma once
#include <stdint.h>
#include <stddef.h>
#ifdef __cplusplus
extern "C" {
#endif
typedef struct { const char *owner,*name,*return_type,*argument_types,*qualifiers,*source; uint64_t function_rva; int64_t virtual_offset,this_adjust; uint64_t signature_rtti,evidence_rva; } msdk_recovered_method;
typedef struct { const char *owner,*name,*type,*reader_kind,*name_status; uint64_t offset,size,accessor_rva,descriptor_rva; int bit_offset,bit_width; } msdk_recovered_field;
typedef struct { const char *owner,*name,*parameter_metadata; uint64_t offset,size,descriptor_rva,address_getter_rva,subscriber_predicate_rva; int parameter_count; } msdk_recovered_event;
typedef struct { const char *owner,*reflection_namespace,*alias,*name_source; uint64_t size,alignment,descriptor_rva,slot_rva; } msdk_recovered_type;
typedef struct { const char *owner,*name; uint64_t value,size,descriptor_rva,reader_rva; } msdk_recovered_enum;
typedef struct { const char *owner,*name,*type; uint64_t flags,descriptor_rva,address_getter,getter,setter,copy_getter,copy_setter; int64_t storage_offset; int bit_offset,bit_width; } msdk_recovered_property;
extern const msdk_recovered_enum msdk_native_enum_values[];
extern const msdk_recovered_property msdk_native_properties[];
extern const size_t msdk_native_enum_value_count,msdk_native_property_count;
extern const msdk_recovered_method msdk_native_methods[],msdk_native_signature_only[];
extern const msdk_recovered_field msdk_native_fields[];
extern const msdk_recovered_event msdk_native_events[];
extern const msdk_recovered_type msdk_native_type_info[];
extern const size_t msdk_native_method_count,msdk_native_signature_only_count,msdk_native_field_count,msdk_native_event_count,msdk_native_type_count;
#ifdef __cplusplus
}
#endif
