// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.

// Namespace: async::bhttp
// Full Name: async::bhttp::http_client
// Package: async; catalog tag: t_async__bhttp__http_client_CF06E100758A72B7
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9884; kind=si
// Base RTTI record 10018 of 9884; flags=0x02; nonvirtual object offset=0; access=public
class http_client :
    public async::net::tcp_connect_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9884; offset-to-top=0; slots=27; truncated=0
};

// Namespace: async::bhttp
// Full Name: async::bhttp::https_client
// Package: async; catalog tag: t_async__bhttp__https_client_BFB670138CAF6CE2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9885; kind=si
// Base RTTI record 10021 of 9885; flags=0x02; nonvirtual object offset=0; access=public
class https_client :
    public async::net::tcp_ssl_connect_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9885; offset-to-top=0; slots=31; truncated=0
};

// Namespace: async::bhttp
// Full Name: async::bhttp::noused
// Package: async; catalog tag: t_async__bhttp__noused_11D0560A1651D529
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9886; kind=class
class noused
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::common
// Full Name: async::common::destory_guard
// Package: async; catalog tag: t_async__common__destory_guard_3701BB05F68AE6BC
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9887; kind=class
class destory_guard
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9887; offset-to-top=0; slots=3; truncated=0
};

// Namespace: async::common::uioservice
// Full Name: async::common::uioservice::userdata
// Package: async; catalog tag: t_async__common__uioservice__userdata_C540152B5FC9AEBF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9888; kind=class
class userdata
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::compress
// Full Name: async::compress::base_compressor
// Package: async; catalog tag: t_async__compress__base_compressor_76871622628B5B06
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9889; kind=class
class base_compressor
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::compress
// Full Name: async::compress::zlib_compressor
// Package: async; catalog tag: t_async__compress__zlib_compressor_EE8BD5B5CDF083FA
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9890; kind=si
// Base RTTI record 9889 of 9890; flags=0x02; nonvirtual object offset=0; access=public
class zlib_compressor :
    public base_compressor
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9890; offset-to-top=0; slots=6; truncated=0
};

// Namespace: async::compress
// Full Name: async::compress::zstd_compressor
// Package: async; catalog tag: t_async__compress__zstd_compressor_D09F1EC4527D3D6C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9891; kind=si
// Base RTTI record 9889 of 9891; flags=0x02; nonvirtual object offset=0; access=public
class zstd_compressor :
    public base_compressor
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9891; offset-to-top=0; slots=6; truncated=0
};

// Namespace: async::crypter
// Full Name: async::crypter::aes_crypter
// Package: async; catalog tag: t_async__crypter__aes_crypter_196693286D7B2AD9
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9892; kind=si
// Base RTTI record 9897 of 9892; flags=0x02; nonvirtual object offset=0; access=public
class aes_crypter :
    public base_crypter
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9892; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::crypter
// Full Name: async::crypter::algorithm_aes
// Package: async; catalog tag: t_async__crypter__algorithm_aes_6774AA64E772495B
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9893; kind=si
// Base RTTI record 9898 of 9893; flags=0x02; nonvirtual object offset=0; access=public
class algorithm_aes :
    public base_encrypt_algorithm
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9893; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::crypter
// Full Name: async::crypter::algorithm_arc4
// Package: async; catalog tag: t_async__crypter__algorithm_arc4_9BB8B5757C3E2C34
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9894; kind=si
// Base RTTI record 9898 of 9894; flags=0x02; nonvirtual object offset=0; access=public
class algorithm_arc4 :
    public base_encrypt_algorithm
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9894; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::crypter
// Full Name: async::crypter::algorithm_rsa
// Package: async; catalog tag: t_async__crypter__algorithm_rsa_FBB84D653BB5F472
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9895; kind=si
// Base RTTI record 9898 of 9895; flags=0x02; nonvirtual object offset=0; access=public
class algorithm_rsa :
    public base_encrypt_algorithm
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9895; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::crypter
// Full Name: async::crypter::arc4_crypter
// Package: async; catalog tag: t_async__crypter__arc4_crypter_F6C04691F15AA9F2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9896; kind=si
// Base RTTI record 9897 of 9896; flags=0x02; nonvirtual object offset=0; access=public
class arc4_crypter :
    public base_crypter
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9896; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::crypter
// Full Name: async::crypter::base_crypter
// Package: async; catalog tag: t_async__crypter__base_crypter_F53C3ECBDE6271FB
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9897; kind=class
class base_crypter
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9897; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::crypter
// Full Name: async::crypter::base_encrypt_algorithm
// Package: async; catalog tag: t_async__crypter__base_encrypt_algorithm_0A01D6CBC2E12C87
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9898; kind=class
class base_encrypt_algorithm
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::crypter
// Full Name: async::crypter::login_key_encrypter
// Package: async; catalog tag: t_async__crypter__login_key_encrypter_47139E633FC7CCD2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9899; kind=si
// Base RTTI record 9897 of 9899; flags=0x02; nonvirtual object offset=0; access=public
class login_key_encrypter :
    public base_crypter
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9899; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::http
// Full Name: async::http::http_client
// Package: async; catalog tag: t_async__http__http_client_393464C11BA83CBF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9900; kind=si
// Base RTTI record 10018 of 9900; flags=0x02; nonvirtual object offset=0; access=public
class http_client :
    public async::net::tcp_connect_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9900; offset-to-top=0; slots=27; truncated=0
};

// Namespace: async::http
// Full Name: async::http::http_client_manager
// Package: async; catalog tag: t_async__http__http_client_manager_0BA0B84A8937D5DF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9901; kind=vmi
// Base RTTI record 10341 of 9901; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class http_client_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9901; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::http
// Full Name: async::http::https_client
// Package: async; catalog tag: t_async__http__https_client_4621C15E97E1B0DA
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9902; kind=si
// Base RTTI record 10021 of 9902; flags=0x02; nonvirtual object offset=0; access=public
class https_client :
    public async::net::tcp_ssl_connect_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9902; offset-to-top=0; slots=31; truncated=0
};

// Namespace: async::http
// Full Name: async::http::noused
// Package: async; catalog tag: t_async__http__noused_F236AB9269137191
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9903; kind=class
class noused
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_aoi_guid
// Package: async; catalog tag: t_async__logic__area_aoi_guid_80A9AC2572EDFCFE
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9904; kind=si
// Base RTTI record 9940 of 9904; flags=0x02; nonvirtual object offset=0; access=public
class area_aoi_guid :
    public area_message
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9904; offset-to-top=0; slots=5; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_aoi_props
// Package: async; catalog tag: t_async__logic__area_aoi_props_7DEDC73A2013FC5F
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9905; kind=si
// Base RTTI record 9940 of 9905; flags=0x02; nonvirtual object offset=0; access=public
class area_aoi_props :
    public area_message
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9905; offset-to-top=0; slots=5; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_entity_method
// Package: async; catalog tag: t_async__logic__area_entity_method_BBD31EF3C1D84A6C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9906; kind=si
// Base RTTI record 9940 of 9906; flags=0x02; nonvirtual object offset=0; access=public
class area_entity_method :
    public area_message
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9906; offset-to-top=0; slots=5; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_impl
// Package: async; catalog tag: t_async__logic__area_impl_9426753A7FF14195
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9907; kind=vmi
// Base RTTI record 16354 of 9907; flags=0x02; nonvirtual object offset=8; access=public
class area_impl :
    public std::__ndk1::enable_shared_from_this<async::logic::area_impl>
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9907; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic::area_impl::ar_leave_spectate(bool)
// Full Name: async::logic::area_impl::ar_leave_spectate(bool)::$_3
// Package: async; catalog tag: t_async__logic__area_impl__ar_leave_spectate_bool_____3_6148A222886A60C3
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9908; kind=class
class $_3
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::ar_play_spectator_finished(char const*)
// Full Name: async::logic::area_impl::ar_play_spectator_finished(char const*)::$_8
// Package: async; catalog tag: t_async__logic__area_impl__ar_play_spectator_finished_char_398D488C4DD151AF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9909; kind=class
class $_8
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::ar_stop_spectator_record(bool)
// Full Name: async::logic::area_impl::ar_stop_spectator_record(bool)::$_7
// Package: async; catalog tag: t_async__logic__area_impl__ar_stop_spectator_record_bool___AC3BE674A3C068F6
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9910; kind=class
class $_7
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::fetch_props_getattr(int)
// Full Name: async::logic::area_impl::fetch_props_getattr(int)::{lambda(_object*, double&)#1}
// Package: async; catalog tag: t_async__logic__area_impl__fetch_props_getattr_int____lamb_99A1B33B5BEBF40F
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9911; kind=class
class analysis_t_async__logic__area_impl__fetch_props_getattr_int____lamb_99A1B33B5BEBF40F
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::fetch_props_getattr(int)
// Full Name: async::logic::area_impl::fetch_props_getattr(int)::{lambda(_object*, long&)#1}
// Package: async; catalog tag: t_async__logic__area_impl__fetch_props_getattr_int____lamb_8FED7A59C009FC62
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9912; kind=class
class analysis_t_async__logic__area_impl__fetch_props_getattr_int____lamb_8FED7A59C009FC62
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::fetch_props_getattr(int)
// Full Name: async::logic::area_impl::fetch_props_getattr(int)::{lambda(_object*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__
// Full Name+: ndk1::allocator<char> >&)#1}
// Package: async; catalog tag: t_async__logic__area_impl__fetch_props_getattr_int____lamb_911BFD2A8B80B7FA
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9913; kind=class
class analysis_t_async__logic__area_impl__fetch_props_getattr_int____lamb_911BFD2A8B80B7FA
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::fetch_props_getattr(int)
// Full Name: async::logic::area_impl::fetch_props_getattr(int)::{lambda(_object*, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__
// Full Name+: ndk1::allocator<char> >&)#2}
// Package: async; catalog tag: t_async__logic__area_impl__fetch_props_getattr_int____lamb_911FFD2A8B84A0D1
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9914; kind=class
class analysis_t_async__logic__area_impl__fetch_props_getattr_int____lamb_911FFD2A8B84A0D1
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::get_send_position_callback()
// Full Name: async::logic::area_impl::get_send_position_callback()::{lambda(unsigned long long, double, double, double, float, std::__ndk1::basic_string<
// Full Name+: char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&)#1}
// Package: async; catalog tag: t_async__logic__area_impl__get_send_position_callback______019CEA0167F2ED5C
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9915; kind=class
class analysis_t_async__logic__area_impl__get_send_position_callback______019CEA0167F2ED5C
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_impl::get_send_position_callback_incar()
// Full Name: async::logic::area_impl::get_send_position_callback_incar()::{lambda(unsigned long long, float, float, float, float, float, float, std::__nd
// Full Name+: k1::vector<float, std::__ndk1::allocator<float> >*)#1}
// Package: async; catalog tag: t_async__logic__area_impl__get_send_position_callback_inca_5437D27C9173C1E8
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9916; kind=class
class analysis_t_async__logic__area_impl__get_send_position_callback_inca_5437D27C9173C1E8
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_list_custom
// Package: async; catalog tag: t_async__logic__area_list_custom_80EDDC59D212E0F7
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9917; kind=class
class area_list_custom
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_list_custom_float
// Package: async; catalog tag: t_async__logic__area_list_custom_float_DCE5ADD80B406882
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9918; kind=si
// Base RTTI record 9917 of 9918; flags=0x02; nonvirtual object offset=0; access=public
class area_list_custom_float :
    public area_list_custom
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9918; offset-to-top=0; slots=37; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_list_custom_int
// Package: async; catalog tag: t_async__logic__area_list_custom_int_FDFA0AC4D22559B9
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9919; kind=si
// Base RTTI record 9917 of 9919; flags=0x02; nonvirtual object offset=0; access=public
class area_list_custom_int :
    public area_list_custom
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9919; offset-to-top=0; slots=37; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_list_custom_simple
// Package: async; catalog tag: t_async__logic__area_list_custom_simple_D86BDC3127081652
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9920; kind=si
// Base RTTI record 9917 of 9920; flags=0x02; nonvirtual object offset=0; access=public
class area_list_custom_simple :
    public area_list_custom
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9920; offset-to-top=0; slots=37; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_list_custom_str
// Package: async; catalog tag: t_async__logic__area_list_custom_str_CB6926C4B5E70757
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9921; kind=si
// Base RTTI record 9917 of 9921; flags=0x02; nonvirtual object offset=0; access=public
class area_list_custom_str :
    public area_list_custom
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9921; offset-to-top=0; slots=37; truncated=0
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::area_manager_impl::create_entity(async::logic::async_handler*, std::__ndk1::shared_ptr<async::logic::async_service_helper>&, m
// Full Name+: obile::server::AreaCreateEntityMsg const*)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__create_entity_async__lo_4C06204D8388D3EC
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9922; kind=class
class analysis_t_async__logic__area_manager_impl__create_entity_async__lo_4C06204D8388D3EC
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_manager_impl::entity_method(mobile::server::AreaMessage const*, bool)
// Full Name: async::logic::area_manager_impl::entity_method(mobile::server::AreaMessage const*, bool)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__entity_method_mobile__s_F5CD33F6A13D02A7
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9923; kind=class
class analysis_t_async__logic__area_manager_impl__entity_method_mobile__s_F5CD33F6A13D02A7
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_manager_impl::filter_entity_method(mobile::server::AreaMessage const*)
// Full Name: async::logic::area_manager_impl::filter_entity_method(mobile::server::AreaMessage const*)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__filter_entity_method_mo_ABC100DD02A89A80
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9924; kind=class
class analysis_t_async__logic__area_manager_impl__filter_entity_method_mo_ABC100DD02A89A80
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_manager_impl::set_space_data(mobile::server::SpaceData const*)
// Full Name: async::logic::area_manager_impl::set_space_data(mobile::server::SpaceData const*)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__set_space_data_mobile___3808925FDB256BF8
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9925; kind=class
class analysis_t_async__logic__area_manager_impl__set_space_data_mobile___3808925FDB256BF8
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_manager_impl::spectate_message(mobile::server::SpectateMessage const*)
// Full Name: async::logic::area_manager_impl::spectate_message(mobile::server::SpectateMessage const*)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__spectate_message_mobile_E57A1C6F033438DD
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9926; kind=class
class analysis_t_async__logic__area_manager_impl__spectate_message_mobile_E57A1C6F033438DD
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_manager_impl::update_aoi_guid(mobile::server::AoiGuid const*, bool)
// Full Name: async::logic::area_manager_impl::update_aoi_guid(mobile::server::AoiGuid const*, bool)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__update_aoi_guid_mobile__7A3DFAB0B5C26753
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9927; kind=class
class analysis_t_async__logic__area_manager_impl__update_aoi_guid_mobile__7A3DFAB0B5C26753
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_manager_impl::update_aoi_info(mobile::server::AoiInfo const*, bool)
// Full Name: async::logic::area_manager_impl::update_aoi_info(mobile::server::AoiInfo const*, bool)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__update_aoi_info_mobile__BCCB0F65E1F3CA8F
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9928; kind=class
class analysis_t_async__logic__area_manager_impl__update_aoi_info_mobile__BCCB0F65E1F3CA8F
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::area_manager_impl::update_aoi_props(mobile::server::AoiProp const*, bool)
// Full Name: async::logic::area_manager_impl::update_aoi_props(mobile::server::AoiProp const*, bool)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__area_manager_impl__update_aoi_props_mobile_339BA3D5698E6306
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9929; kind=class
class analysis_t_async__logic__area_manager_impl__update_aoi_props_mobile_339BA3D5698E6306
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_fix_props
// Package: async; catalog tag: t_async__logic__area_map_custom_fix_props_CF052672321BC8D2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9930; kind=class
class area_map_custom_fix_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_fix_props_float
// Package: async; catalog tag: t_async__logic__area_map_custom_fix_props_float_241B400109072813
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9931; kind=si
// Base RTTI record 9930 of 9931; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_fix_props_float :
    public area_map_custom_fix_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9931; offset-to-top=0; slots=31; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_fix_props_int
// Package: async; catalog tag: t_async__logic__area_map_custom_fix_props_int_8251FE04A690F838
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9932; kind=si
// Base RTTI record 9930 of 9932; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_fix_props_int :
    public area_map_custom_fix_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9932; offset-to-top=0; slots=31; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_fix_props_simple
// Package: async; catalog tag: t_async__logic__area_map_custom_fix_props_simple_15415DD68BA86A8D
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9933; kind=si
// Base RTTI record 9930 of 9933; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_fix_props_simple :
    public area_map_custom_fix_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9933; offset-to-top=0; slots=31; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_fix_props_str
// Package: async; catalog tag: t_async__logic__area_map_custom_fix_props_str_9ECBD204250A1C0E
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9934; kind=si
// Base RTTI record 9930 of 9934; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_fix_props_str :
    public area_map_custom_fix_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9934; offset-to-top=0; slots=31; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_props
// Package: async; catalog tag: t_async__logic__area_map_custom_props_6CFAA25984296576
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9935; kind=class
class area_map_custom_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_props_float
// Package: async; catalog tag: t_async__logic__area_map_custom_props_float_DC49D9827BE0677F
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9936; kind=si
// Base RTTI record 9935 of 9936; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_props_float :
    public area_map_custom_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9936; offset-to-top=0; slots=34; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_props_int
// Package: async; catalog tag: t_async__logic__area_map_custom_props_int_721818986A732A44
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9937; kind=si
// Base RTTI record 9935 of 9937; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_props_int :
    public area_map_custom_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9937; offset-to-top=0; slots=34; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_props_simple
// Package: async; catalog tag: t_async__logic__area_map_custom_props_simple_7B8C1241C3E41549
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9938; kind=si
// Base RTTI record 9935 of 9938; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_props_simple :
    public area_map_custom_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9938; offset-to-top=0; slots=34; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_map_custom_props_str
// Package: async; catalog tag: t_async__logic__area_map_custom_props_str_31BF9498D7503972
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9939; kind=si
// Base RTTI record 9935 of 9939; flags=0x02; nonvirtual object offset=0; access=public
class area_map_custom_props_str :
    public area_map_custom_props
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9939; offset-to-top=0; slots=34; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_message
// Package: async; catalog tag: t_async__logic__area_message_540281712DAF374A
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9940; kind=vmi
// Base RTTI record 10341 of 9940; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class area_message :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_path
// Package: async; catalog tag: t_async__logic__area_path_0DA733820CC0B604
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9941; kind=class
class area_path
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::area_path_cstr_key
// Package: async; catalog tag: t_async__logic__area_path_cstr_key_5357278DBBCC3A09
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9942; kind=si
// Base RTTI record 9941 of 9942; flags=0x02; nonvirtual object offset=0; access=public
class area_path_cstr_key :
    public area_path
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9942; offset-to-top=0; slots=13; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_path_int
// Package: async; catalog tag: t_async__logic__area_path_int_AB840B07D0DEA9C2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9943; kind=si
// Base RTTI record 9941 of 9943; flags=0x02; nonvirtual object offset=0; access=public
class area_path_int :
    public area_path
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9943; offset-to-top=0; slots=13; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_path_int_key
// Package: async; catalog tag: t_async__logic__area_path_int_key_63933CCC2952071E
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9944; kind=si
// Base RTTI record 9943 of 9944; flags=0x02; nonvirtual object offset=0; access=public
class area_path_int_key :
    public area_path_int
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9944; offset-to-top=0; slots=13; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_path_str
// Package: async; catalog tag: t_async__logic__area_path_str_01E5A70801BA995C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9945; kind=si
// Base RTTI record 9941 of 9945; flags=0x02; nonvirtual object offset=0; access=public
class area_path_str :
    public area_path
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9945; offset-to-top=0; slots=13; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_pos_info
// Package: async; catalog tag: t_async__logic__area_pos_info_C239FA95C97729F8
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9946; kind=si
// Base RTTI record 9940 of 9946; flags=0x02; nonvirtual object offset=0; access=public
class area_pos_info :
    public area_message
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9946; offset-to-top=0; slots=5; truncated=0
};

// Namespace: async::logic::area_prop_index_obj
// Full Name: async::logic::area_prop_index_obj::props_type
// Package: async; catalog tag: t_async__logic__area_prop_index_obj__props_type_9A8883F3D06257BC
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9947; kind=si
// Base RTTI record 9861 of 9947; flags=0x02; nonvirtual object offset=0; access=public
class props_type :
    public ::area_pykey_map<async::logic::area_prop_index_node*>
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9947; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_prop_sort_exception
// Package: async; catalog tag: t_async__logic__area_prop_sort_exception_BFFA4BC14681DF3D
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9948; kind=si
// Base RTTI record 16433 of 9948; flags=0x02; nonvirtual object offset=0; access=public
class area_prop_sort_exception :
    public std::exception
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9948; offset-to-top=0; slots=3; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_space_data
// Package: async; catalog tag: t_async__logic__area_space_data_D2E16C52718C7938
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9949; kind=si
// Base RTTI record 9940 of 9949; flags=0x02; nonvirtual object offset=0; access=public
class area_space_data :
    public area_message
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9949; offset-to-top=0; slots=5; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::area_spectate_message
// Package: async; catalog tag: t_async__logic__area_spectate_message_714DD6C859DDFF0C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9950; kind=si
// Base RTTI record 9940 of 9950; flags=0x02; nonvirtual object offset=0; access=public
class area_spectate_message :
    public area_message
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9950; offset-to-top=0; slots=5; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::async_bhttp_client_impl
// Package: async; catalog tag: t_async__logic__async_bhttp_client_impl_DDE39E24BF36E981
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9951; kind=vmi
// Base RTTI record 16355 of 9951; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 9951; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class async_bhttp_client_impl :
    public std::__ndk1::enable_shared_from_this<async::logic::async_bhttp_client_impl>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9951; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic::async_bhttp_client_impl::start()
// Full Name: async::logic::async_bhttp_client_impl::start()::$_0
// Package: async; catalog tag: t_async__logic__async_bhttp_client_impl__start______0_1EA8C3D812645057
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9952; kind=class
class $_0
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::async_bhttps_client_impl
// Package: async; catalog tag: t_async__logic__async_bhttps_client_impl_1B70E40DC3487274
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9953; kind=vmi
// Base RTTI record 16356 of 9953; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 9953; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class async_bhttps_client_impl :
    public std::__ndk1::enable_shared_from_this<async::logic::async_bhttps_client_impl>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9953; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic::async_bhttps_client_impl::start()
// Full Name: async::logic::async_bhttps_client_impl::start()::$_0
// Package: async; catalog tag: t_async__logic__async_bhttps_client_impl__start______0_2808E9E5E99EFA7E
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9954; kind=class
class $_0
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::async_connection_impl
// Package: async; catalog tag: t_async__logic__async_connection_impl_41D59FB5E6F6E611
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9955; kind=si
// Base RTTI record 10019 of 9955; flags=0x02; nonvirtual object offset=0; access=public
class async_connection_impl :
    public async::net::tcp_listen_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9955; offset-to-top=0; slots=22; truncated=0
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::async_connection_impl::cleanup(int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocato
// Full Name+: r<char> > const&)::$_6
// Package: async; catalog tag: t_async__logic__async_connection_impl__cleanup_int__int__s_EDE944800B7D4BEC
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9956; kind=class
class $_6
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::async_connection_impl::on_connected()
// Full Name: async::logic::async_connection_impl::on_connected()::$_7
// Package: async; catalog tag: t_async__logic__async_connection_impl__on_connected______7_1C55F7275026C5DF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9957; kind=class
class $_7
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::async_http_client_impl
// Package: async; catalog tag: t_async__logic__async_http_client_impl_200CFBB1FBBBFFDB
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9958; kind=vmi
// Base RTTI record 16357 of 9958; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 9958; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class async_http_client_impl :
    public std::__ndk1::enable_shared_from_this<async::logic::async_http_client_impl>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9958; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic::async_http_client_impl::start()
// Full Name: async::logic::async_http_client_impl::start()::$_0
// Package: async; catalog tag: t_async__logic__async_http_client_impl__start______0_BE965AED1ABD0215
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9959; kind=class
class $_0
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::async_http_client_impl::start()
// Full Name: async::logic::async_http_client_impl::start()::$_1
// Package: async; catalog tag: t_async__logic__async_http_client_impl__start______1_BE9659ED1ABD0062
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9960; kind=class
class $_1
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::async_http_client_impl::start()
// Full Name: async::logic::async_http_client_impl::start()::$_2
// Package: async; catalog tag: t_async__logic__async_http_client_impl__start______2_BE9658ED1ABCFEAF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9961; kind=class
class $_2
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::async_http_client_impl::start()
// Full Name: async::logic::async_http_client_impl::start()::$_3
// Package: async; catalog tag: t_async__logic__async_http_client_impl__start______3_BE9657ED1ABCFCFC
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9962; kind=class
class $_3
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::async_kcp_connection_impl
// Package: async; catalog tag: t_async__logic__async_kcp_connection_impl_A9B58A51B66A9F7C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9963; kind=si
// Base RTTI record 10014 of 9963; flags=0x02; nonvirtual object offset=0; access=public
class async_kcp_connection_impl :
    public async::net::kcp_listen_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9963; offset-to-top=0; slots=22; truncated=0
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::async_kcp_connection_impl::cleanup(int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allo
// Full Name+: cator<char> > const&)::$_10
// Package: async; catalog tag: t_async__logic__async_kcp_connection_impl__cleanup_int__in_1DB3591983B553BA
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9964; kind=class
class $_10
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::async_kcp_connection_impl::on_connected()
// Full Name: async::logic::async_kcp_connection_impl::on_connected()::$_9
// Package: async; catalog tag: t_async__logic__async_kcp_connection_impl__on_connected____9B5129C0AE91D68A
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9965; kind=class
class $_9
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::async_server_impl
// Package: async; catalog tag: t_async__logic__async_server_impl_44773C2F6C03EB00
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9966; kind=si
// Base RTTI record 10020 of 9966; flags=0x02; nonvirtual object offset=0; access=public
class async_server_impl :
    public async::net::tcp_server
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9966; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::logic::async_server_impl::handle_connection()
// Full Name: async::logic::async_server_impl::handle_connection()::{lambda()#1}
// Package: async; catalog tag: t_async__logic__async_server_impl__handle_connection_____l_073986D6D74F59E8
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9967; kind=class
class analysis_t_async__logic__async_server_impl__handle_connection_____l_073986D6D74F59E8
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>
// Package: async; catalog tag: t_async__logic__async_service_mobile__server__IGateClient__D1266B4F67426D5D
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9968; kind=si
// Base RTTI record 10032 of 9968; flags=0x02; nonvirtual object offset=0; access=public
class async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client> :
    public async::rpc::rpc_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9968; offset-to-top=0; slots=22; truncated=0
    // VTable for RTTI record 9968; offset-to-top=-144; slots=25; truncated=0
};

// Namespace: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>
// Full Name: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>::async_stat
// Package: async; catalog tag: t_async__logic__async_service_mobile__server__IGateClient__0206300BB5E730BA
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9969; kind=si
// Base RTTI record 10036 of 9969; flags=0x02; nonvirtual object offset=0; access=public
class async_stat :
    public async::rpc::service::stat
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9969; offset-to-top=0; slots=6; truncated=0
};

// Namespace: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>::clear_handler()
// Full Name: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>::clear_handler()::
// Full Name+: {lambda()#1}
// Package: async; catalog tag: t_async__logic__async_service_mobile__server__IGateClient__E58FB5D2FC4E56A6
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9970; kind=class
class analysis_t_async__logic__async_service_mobile__server__IGateClient__E58FB5D2FC4E56A6
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>::on_connected()
// Full Name: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>::on_connected()::{
// Full Name+: lambda()#1}
// Package: async; catalog tag: t_async__logic__async_service_mobile__server__IGateClient__3CD04A74CB0EC9F7
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9971; kind=class
class analysis_t_async__logic__async_service_mobile__server__IGateClient__3CD04A74CB0EC9F7
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>::on_guard_destory_
// Full Name+: ex(std::__ndk1::shared_ptr<async::net::connection> const&, bool)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__async_service_mobile__server__IGateClient__B9D75F13DCECE1D7
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9972; kind=class
class analysis_t_async__logic__async_service_mobile__server__IGateClient__B9D75F13DCECE1D7
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>::py_guard_destory_
// Full Name+: ex(bool)::{lambda()#1}
// Package: async; catalog tag: t_async__logic__async_service_mobile__server__IGateClient__4CD7E97430F4F38A
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9973; kind=class
class analysis_t_async__logic__async_service_mobile__server__IGateClient__4CD7E97430F4F38A
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::async_service_helper
// Package: async; catalog tag: t_async__logic__async_service_helper_E20B4369E9825E2A
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9974; kind=vmi
// Base RTTI record 16358 of 9974; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 9974; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class async_service_helper :
    public std::__ndk1::enable_shared_from_this<async::logic::async_service_helper>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9974; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::async_udp_pinger
// Package: async; catalog tag: t_async__logic__async_udp_pinger_2E97FA6EF90329C9
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9975; kind=si
// Base RTTI record 10027 of 9975; flags=0x02; nonvirtual object offset=0; access=public
class async_udp_pinger :
    public async::net::udp_pinger
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9975; offset-to-top=0; slots=3; truncated=0
};

// Namespace: async::logic::async_udp_pinger::on_finished(char const*)
// Full Name: async::logic::async_udp_pinger::on_finished(char const*)::$_0
// Package: async; catalog tag: t_async__logic__async_udp_pinger__on_finished_char_const___F121CB87852831EA
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9976; kind=class
class $_0
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::io_manager
// Package: async; catalog tag: t_async__logic__io_manager_C60107819C21F8EB
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9977; kind=vmi
// Base RTTI record 10341 of 9977; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class io_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9977; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::mb_gate_client
// Package: async; catalog tag: t_async__logic__mb_gate_client_6AA62D624C19A238
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9978; kind=si
// Base RTTI record 9968 of 9978; flags=0x02; nonvirtual object offset=0; access=public
class mb_gate_client :
    public async_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9978; offset-to-top=0; slots=41; truncated=0
    // VTable for RTTI record 9978; offset-to-top=-144; slots=25; truncated=0
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::mb_gate_client::ping(google::protobuf::RpcController*, mobile::server::Ping const*, mobile::server::Void*, google::protobuf::C
// Full Name+: losure*)::$_0
// Package: async; catalog tag: t_async__logic__mb_gate_client__ping_google__protobuf__Rpc_59C955804383AE43
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9979; kind=class
class $_0
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::mb_gate_client::simple_message(google::protobuf::RpcController*, mobile::server::SimpleMessage const*, mobile::server::Void*,
// Full Name+: google::protobuf::Closure*)::$_2
// Package: async; catalog tag: t_async__logic__mb_gate_client__simple_message_google__pro_B812C65666D42D5A
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9980; kind=class
class $_2
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: <see exact Full Name>
// Full Name: async::logic::mb_gate_client::traceroute(google::protobuf::RpcController*, mobile::server::TraceRoute const*, mobile::server::Void*, google:
// Full Name+: :protobuf::Closure*)::$_1
// Package: async; catalog tag: t_async__logic__mb_gate_client__traceroute_google__protobu_AECE22B0F86A37D0
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9981; kind=class
class $_1
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::module_manager
// Package: async; catalog tag: t_async__logic__module_manager_29B1DEBEAEC852EF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9982; kind=vmi
// Base RTTI record 10341 of 9982; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class module_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9982; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_callback
// Package: async; catalog tag: t_async__logic__py_callback_14E81689D62922CE
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9983; kind=class
class py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9983; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_handler_callback<std::__ndk1::__bind<void (&)(std::__ndk1::shared_ptr<async::net::connection>), std::__ndk1::shared_ptr<asy
// Full Name+: nc::net::connection>&> >
// Package: async; catalog tag: t_async__logic__py_handler_callback_std____ndk1____bind_vo_BDC2CEB921BE25F5
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9984; kind=si
// Base RTTI record 9983 of 9984; flags=0x02; nonvirtual object offset=0; access=public
class analysis_t_async__logic__py_handler_callback_std____ndk1____bind_vo_BDC2CEB921BE25F5 :
    public py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9984; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_handler_callback<std::__ndk1::__bind<void (&)(std::__ndk1::shared_ptr<async::net::connection>, async::net::telnet_task*), s
// Full Name+: td::__ndk1::shared_ptr<async::net::connection>&, async::net::telnet_task*&> >
// Package: async; catalog tag: t_async__logic__py_handler_callback_std____ndk1____bind_vo_743D70315DDFA147
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9985; kind=si
// Base RTTI record 9983 of 9985; flags=0x02; nonvirtual object offset=0; access=public
class analysis_t_async__logic__py_handler_callback_std____ndk1____bind_vo_743D70315DDFA147 :
    public py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9985; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_handler_callback<std::__ndk1::__bind<void (async::logic::async_bhttp_client_impl::*)(async::bhttp::bhttp_error_types, std::
// Full Name+: __ndk1::shared_ptr<boost::beast::http::message<false, boost::beast::http::basic_string_body<char, std::__ndk1::char_traits<char>, std::__ndk
// Full Name+: 1::allocator<char> >, boost::beast::http::basic_fields<std::__ndk1::allocator<char> > > > const&), std::__ndk1::shared_ptr<async::logic::asy
// Full Name+: nc_bhttp_client_impl>, async::bhttp::bhttp_error_types&, std::__ndk1::shared_ptr<boost::beast::http::message<false, boost::beast::http::basi
// Full Name+: c_string_body<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, boost::beast::http::basic_fields<std::__ndk1::allocator<
// Full Name+: char> > > > const&> >
// Package: async; catalog tag: t_async__logic__py_handler_callback_std____ndk1____bind_vo_535CFA005CEBA53E
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9986; kind=si
// Base RTTI record 9983 of 9986; flags=0x02; nonvirtual object offset=0; access=public
class analysis_t_async__logic__py_handler_callback_std____ndk1____bind_vo_535CFA005CEBA53E :
    public py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9986; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_handler_callback<std::__ndk1::__bind<void (async::logic::async_bhttps_client_impl::*)(async::bhttp::bhttp_error_types, std:
// Full Name+: :__ndk1::shared_ptr<boost::beast::http::message<false, boost::beast::http::basic_string_body<char, std::__ndk1::char_traits<char>, std::__nd
// Full Name+: k1::allocator<char> >, boost::beast::http::basic_fields<std::__ndk1::allocator<char> > > > const&), std::__ndk1::shared_ptr<async::logic::as
// Full Name+: ync_bhttps_client_impl>, async::bhttp::bhttp_error_types&, std::__ndk1::shared_ptr<boost::beast::http::message<false, boost::beast::http::ba
// Full Name+: sic_string_body<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >, boost::beast::http::basic_fields<std::__ndk1::allocato
// Full Name+: r<char> > > > const&> >
// Package: async; catalog tag: t_async__logic__py_handler_callback_std____ndk1____bind_vo_F4D1BBA443F71892
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9987; kind=si
// Base RTTI record 9983 of 9987; flags=0x02; nonvirtual object offset=0; access=public
class analysis_t_async__logic__py_handler_callback_std____ndk1____bind_vo_F4D1BBA443F71892 :
    public py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9987; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_handler_callback<std::__ndk1::__bind<void (async::logic::async_http_client_impl::*)(async::http::http_error_types, std::__n
// Full Name+: dk1::shared_ptr<async::http::http_reply> const&), std::__ndk1::shared_ptr<async::logic::async_http_client_impl>, async::http::http_error_typ
// Full Name+: es&, std::__ndk1::shared_ptr<async::http::http_reply> const&> >
// Package: async; catalog tag: t_async__logic__py_handler_callback_std____ndk1____bind_vo_1F87835387ED0CE4
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9988; kind=si
// Base RTTI record 9983 of 9988; flags=0x02; nonvirtual object offset=0; access=public
class analysis_t_async__logic__py_handler_callback_std____ndk1____bind_vo_1F87835387ED0CE4 :
    public py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9988; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_handler_callback<std::__ndk1::__bind<void (async::logic::timer::*)(), std::__ndk1::shared_ptr<async::logic::timer> > >
// Package: async; catalog tag: t_async__logic__py_handler_callback_std____ndk1____bind_vo_E4B8F9A3C27DC768
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9989; kind=si
// Base RTTI record 9983 of 9989; flags=0x02; nonvirtual object offset=0; access=public
class analysis_t_async__logic__py_handler_callback_std____ndk1____bind_vo_E4B8F9A3C27DC768 :
    public py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9989; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_handler_callback<std::__ndk1::function<void ()> >
// Package: async; catalog tag: t_async__logic__py_handler_callback_std____ndk1__function__3BFAB299E14787F9
// Declaration label is analysis-generated; not an original C++ identifier.
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9990; kind=si
// Base RTTI record 9983 of 9990; flags=0x02; nonvirtual object offset=0; access=public
class analysis_t_async__logic__py_handler_callback_std____ndk1__function__3BFAB299E14787F9 :
    public py_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9990; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_timer_callback
// Package: async; catalog tag: t_async__logic__py_timer_callback_5AE933D50D06DC78
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9991; kind=vmi
// Base RTTI record 10010 of 9991; flags=0x02; nonvirtual object offset=0; access=public
// Base RTTI record 10341 of 9991; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class py_timer_callback :
    public timer_callback,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9991; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::py_timer_callback_with_dt
// Package: async; catalog tag: t_async__logic__py_timer_callback_with_dt_5EB29F1EE0EA6DB2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9992; kind=si
// Base RTTI record 9991 of 9992; flags=0x02; nonvirtual object offset=0; access=public
class py_timer_callback_with_dt :
    public py_timer_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9992; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg
// Package: async; catalog tag: t_async__logic__rpc_arg_4034E088D2C61571
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9993; kind=class
class rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9993; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_any
// Package: async; catalog tag: t_async__logic__rpc_arg_any_B013BDD951411A3C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9994; kind=si
// Base RTTI record 9993 of 9994; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_any :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9994; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_bin
// Package: async; catalog tag: t_async__logic__rpc_arg_bin_96A931D94304DE77
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9995; kind=si
// Base RTTI record 9993 of 9995; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_bin :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9995; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_bool
// Package: async; catalog tag: t_async__logic__rpc_arg_bool_396CA32CFDEEE426
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9996; kind=si
// Base RTTI record 9993 of 9996; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_bool :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9996; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_customtype
// Package: async; catalog tag: t_async__logic__rpc_arg_customtype_9191E6FE35F5D859
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9997; kind=si
// Base RTTI record 9993 of 9997; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_customtype :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9997; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_dict
// Package: async; catalog tag: t_async__logic__rpc_arg_dict_1BB649615B26042E
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9998; kind=si
// Base RTTI record 9993 of 9998; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_dict :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9998; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_entityid
// Package: async; catalog tag: t_async__logic__rpc_arg_entityid_E3030BEA16E9F53C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 9999; kind=si
// Base RTTI record 9993 of 9999; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_entityid :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 9999; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_float
// Package: async; catalog tag: t_async__logic__rpc_arg_float_C8A1225DC9E44518
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10000; kind=si
// Base RTTI record 9993 of 10000; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_float :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10000; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_int
// Package: async; catalog tag: t_async__logic__rpc_arg_int_6B6A6AD92A8AB533
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10001; kind=si
// Base RTTI record 9993 of 10001; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_int :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10001; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_list
// Package: async; catalog tag: t_async__logic__rpc_arg_list_25E0591B48B6B806
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10002; kind=si
// Base RTTI record 9993 of 10002; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_list :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10002; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_long
// Package: async; catalog tag: t_async__logic__rpc_arg_long_37D9AA1B5313E724
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10003; kind=si
// Base RTTI record 9993 of 10003; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_long :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10003; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_str
// Package: async; catalog tag: t_async__logic__rpc_arg_str_2AB306D99717663D
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10004; kind=si
// Base RTTI record 9993 of 10004; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_str :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10004; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::rpc_arg_tuple
// Package: async; catalog tag: t_async__logic__rpc_arg_tuple_F69866DE7D83402C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10005; kind=si
// Base RTTI record 9993 of 10005; flags=0x02; nonvirtual object offset=0; access=public
class rpc_arg_tuple :
    public rpc_arg
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10005; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::service_manager
// Package: async; catalog tag: t_async__logic__service_manager_299BCC05895B25BA
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10006; kind=vmi
// Base RTTI record 10341 of 10006; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class service_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10006; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::service_proxy
// Package: async; catalog tag: t_async__logic__service_proxy_39677A7CCD696E55
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10007; kind=class
class service_proxy
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10007; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::service_proxy_manager
// Package: async; catalog tag: t_async__logic__service_proxy_manager_A3AAC1D02E5BB18D
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10008; kind=vmi
// Base RTTI record 10341 of 10008; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class service_proxy_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10008; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::timer
// Package: async; catalog tag: t_async__logic__timer_A9C3415E858ABE58
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10009; kind=vmi
// Base RTTI record 16359 of 10009; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 10009; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class timer :
    public std::__ndk1::enable_shared_from_this<async::logic::timer>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10009; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::logic
// Full Name: async::logic::timer_callback
// Package: async; catalog tag: t_async__logic__timer_callback_2803B6DDA5E076C6
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10010; kind=class
class timer_callback
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::logic
// Full Name: async::logic::timer_manager
// Package: async; catalog tag: t_async__logic__timer_manager_E6D35DE60B4C59CC
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10011; kind=vmi
// Base RTTI record 10341 of 10011; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class timer_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10011; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::net
// Full Name: async::net::connection
// Package: async; catalog tag: t_async__net__connection_7FD6BBBD0ABCD652
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10012; kind=vmi
// Base RTTI record 16360 of 10012; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 10012; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class connection :
    public std::__ndk1::enable_shared_from_this<async::net::connection>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10012; offset-to-top=0; slots=16; truncated=0
};

// Namespace: async::net
// Full Name: async::net::connection_manager
// Package: async; catalog tag: t_async__net__connection_manager_FA9665F28CD7443E
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10013; kind=vmi
// Base RTTI record 10341 of 10013; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class connection_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10013; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::net
// Full Name: async::net::kcp_listen_connection
// Package: async; catalog tag: t_async__net__kcp_listen_connection_65512DD4C8A2E10F
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10014; kind=si
// Base RTTI record 10012 of 10014; flags=0x02; nonvirtual object offset=0; access=public
class kcp_listen_connection :
    public connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10014; offset-to-top=0; slots=21; truncated=0
};

// Namespace: async::net::kcp_strand_pool
// Full Name: async::net::kcp_strand_pool::service_user
// Package: async; catalog tag: t_async__net__kcp_strand_pool__service_user_C45F0C27F47492DF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10015; kind=si
// Base RTTI record 9888 of 10015; flags=0x02; nonvirtual object offset=0; access=public
class service_user :
    public async::common::uioservice::userdata
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10015; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::net
// Full Name: async::net::server
// Package: async; catalog tag: t_async__net__server_45FDFBD8F17C1231
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10016; kind=vmi
// Base RTTI record 10221 of 10016; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 10016; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class server :
    public boost::enable_shared_from_this<async::net::server>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10016; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::net
// Full Name: async::net::server_manager
// Package: async; catalog tag: t_async__net__server_manager_550D976B05D6A131
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10017; kind=vmi
// Base RTTI record 10341 of 10017; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class server_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10017; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::net
// Full Name: async::net::tcp_connect_connection
// Package: async; catalog tag: t_async__net__tcp_connect_connection_A99E51AE9DF3C1CD
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10018; kind=si
// Base RTTI record 10019 of 10018; flags=0x02; nonvirtual object offset=0; access=public
class tcp_connect_connection :
    public tcp_listen_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10018; offset-to-top=0; slots=26; truncated=0
};

// Namespace: async::net
// Full Name: async::net::tcp_listen_connection
// Package: async; catalog tag: t_async__net__tcp_listen_connection_8C10AF7A330AD37E
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10019; kind=si
// Base RTTI record 10012 of 10019; flags=0x02; nonvirtual object offset=0; access=public
class tcp_listen_connection :
    public connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10019; offset-to-top=0; slots=21; truncated=0
};

// Namespace: async::net
// Full Name: async::net::tcp_server
// Package: async; catalog tag: t_async__net__tcp_server_84031FB98B640C81
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10020; kind=si
// Base RTTI record 10016 of 10020; flags=0x02; nonvirtual object offset=0; access=public
class tcp_server :
    public server
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10020; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::net
// Full Name: async::net::tcp_ssl_connect_connection
// Package: async; catalog tag: t_async__net__tcp_ssl_connect_connection_02F47504C6652306
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10021; kind=si
// Base RTTI record 10022 of 10021; flags=0x02; nonvirtual object offset=0; access=public
class tcp_ssl_connect_connection :
    public tcp_ssl_listen_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10021; offset-to-top=0; slots=2; truncated=0
    // VTable for RTTI record 10021; offset-to-top=0; slots=31; truncated=0
};

// Namespace: async::net
// Full Name: async::net::tcp_ssl_listen_connection
// Package: async; catalog tag: t_async__net__tcp_ssl_listen_connection_C67AAA66002DD05B
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10022; kind=si
// Base RTTI record 10012 of 10022; flags=0x02; nonvirtual object offset=0; access=public
class tcp_ssl_listen_connection :
    public connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10022; offset-to-top=0; slots=24; truncated=0
};

// Namespace: async::net
// Full Name: async::net::telnet_connection
// Package: async; catalog tag: t_async__net__telnet_connection_33E22627EE4F555F
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10023; kind=si
// Base RTTI record 10019 of 10023; flags=0x02; nonvirtual object offset=0; access=public
class telnet_connection :
    public tcp_listen_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10023; offset-to-top=0; slots=21; truncated=0
};

// Namespace: <see exact Full Name>
// Full Name: async::net::telnet_connection::cleanup(int, int, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>, std::__ndk1::allocator<char
// Full Name+: > > const&)::$_1
// Package: async; catalog tag: t_async__net__telnet_connection__cleanup_int__int__std_____BEB0BE65DF432A4F
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10024; kind=class
class $_1
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::net::telnet_connection::handle_connected_read(boost::system::error_code const&, unsigned long)
// Full Name: async::net::telnet_connection::handle_connected_read(boost::system::error_code const&, unsigned long)::$_4
// Package: async; catalog tag: t_async__net__telnet_connection__handle_connected_read_boo_D707CB844EF68BB2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10025; kind=class
class $_4
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::net
// Full Name: async::net::telnet_server
// Package: async; catalog tag: t_async__net__telnet_server_6B2CC35CD060C3DC
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10026; kind=si
// Base RTTI record 10020 of 10026; flags=0x02; nonvirtual object offset=0; access=public
class telnet_server :
    public tcp_server
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10026; offset-to-top=0; slots=7; truncated=0
};

// Namespace: async::net
// Full Name: async::net::udp_pinger
// Package: async; catalog tag: t_async__net__udp_pinger_588D08588DA21B41
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10027; kind=vmi
// Base RTTI record 16361 of 10027; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 10027; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class udp_pinger :
    public std::__ndk1::enable_shared_from_this<async::net::udp_pinger>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10027; offset-to-top=0; slots=3; truncated=0
};

// Namespace: async::net
// Full Name: async::net::write_buf
// Package: async; catalog tag: t_async__net__write_buf_7AD6950BC7794823
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10028; kind=class
class write_buf
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: async::net
// Full Name: async::net::write_buf_ptr
// Package: async; catalog tag: t_async__net__write_buf_ptr_0B0E1A7F065059AE
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10029; kind=si
// Base RTTI record 10028 of 10029; flags=0x02; nonvirtual object offset=0; access=public
class write_buf_ptr :
    public write_buf
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10029; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::net
// Full Name: async::net::write_buf_sptr
// Package: async; catalog tag: t_async__net__write_buf_sptr_F17331EF96B810C9
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10030; kind=si
// Base RTTI record 10028 of 10030; flags=0x02; nonvirtual object offset=0; access=public
class write_buf_sptr :
    public write_buf
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10030; offset-to-top=0; slots=4; truncated=0
};

// Namespace: async::rpc
// Full Name: async::rpc::rpc_channel
// Package: async; catalog tag: t_async__rpc__rpc_channel_EF903BFA1B943CA9
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10031; kind=si
// Base RTTI record 11149 of 10031; flags=0x02; nonvirtual object offset=0; access=public
class rpc_channel :
    public google::protobuf::RpcChannel
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10031; offset-to-top=0; slots=3; truncated=0
};

// Namespace: async::rpc
// Full Name: async::rpc::rpc_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client>
// Package: async; catalog tag: t_async__rpc__rpc_service_mobile__server__IGateClient__mob_DCF0206D27ED1DCD
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10032; kind=vmi
// Base RTTI record 10035 of 10032; flags=0x02; nonvirtual object offset=0; access=public
// Base RTTI record 11445 of 10032; flags=0x02; nonvirtual object offset=144; access=public
class rpc_service<mobile::server::IGateClient, mobile::server::IGateService_Stub, async::logic::mb_gate_client> :
    public service,
    public mobile::server::IGateClient
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10032; offset-to-top=0; slots=21; truncated=0
    // VTable for RTTI record 10032; offset-to-top=-144; slots=25; truncated=0
};

// Namespace: async::rpc
// Full Name: async::rpc::rpc_stream
// Package: async; catalog tag: t_async__rpc__rpc_stream_D21FECA4898CF9DE
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10033; kind=class
class rpc_stream
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10033; offset-to-top=0; slots=2; truncated=0
};

// Namespace: async::rpc
// Full Name: async::rpc::rpc_streambuf
// Package: async; catalog tag: t_async__rpc__rpc_streambuf_9A4F487E084B86EF
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10034; kind=si
// Base RTTI record 10072 of 10034; flags=0x02; nonvirtual object offset=0; access=public
class rpc_streambuf :
    public boost::asio::basic_streambuf<std::__ndk1::allocator<char> >
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10034; offset-to-top=0; slots=14; truncated=0
};

// Namespace: async::rpc
// Full Name: async::rpc::service
// Package: async; catalog tag: t_async__rpc__service_1A8D7AECC381D8CD
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10035; kind=vmi
// Base RTTI record 10341 of 10035; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
// Base RTTI record 9887 of 10035; flags=0x02; nonvirtual object offset=0; access=public
// Base RTTI record 16362 of 10035; flags=0x02; nonvirtual object offset=24; access=public
class service :
    /* nonpublic */ boost::noncopyable_::noncopyable,
    public async::common::destory_guard,
    public std::__ndk1::enable_shared_from_this<async::rpc::service>
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10035; offset-to-top=0; slots=20; truncated=0
};

// Namespace: async::rpc::service
// Full Name: async::rpc::service::stat
// Package: async; catalog tag: t_async__rpc__service__stat_E54C2359AAEF450F
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 10036; kind=class
class stat
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 10036; offset-to-top=0; slots=6; truncated=0
};
