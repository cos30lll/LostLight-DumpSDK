// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.

// Namespace: hex::http
// Full Name: hex::http::http_client
// Package: hex; catalog tag: t_hex__http__http_client_96698366494A6598
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11181; kind=si
// Base RTTI record 11186 of 11181; flags=0x02; nonvirtual object offset=0; access=public
class http_client :
    public hex::net::tcp_connect_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11181; offset-to-top=0; slots=24; truncated=0
};

// Namespace: hex::http
// Full Name: hex::http::http_client_manager
// Package: hex; catalog tag: t_hex__http__http_client_manager_49C69C52BB60FA0C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11182; kind=vmi
// Base RTTI record 10341 of 11182; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class http_client_manager :
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11182; offset-to-top=0; slots=2; truncated=0
};

// Namespace: hex::http
// Full Name: hex::http::https_client
// Package: hex; catalog tag: t_hex__http__https_client_1948B10D9B8EDB33
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11183; kind=si
// Base RTTI record 11188 of 11183; flags=0x02; nonvirtual object offset=0; access=public
class https_client :
    public hex::net::tcp_ssl_connect_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11183; offset-to-top=0; slots=29; truncated=0
};

// Namespace: hex::http
// Full Name: hex::http::noused
// Package: hex; catalog tag: t_hex__http__noused_AA227CEA2C78662C
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11184; kind=class
class noused
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: hex::net
// Full Name: hex::net::connection
// Package: hex; catalog tag: t_hex__net__connection_5752D4FF91B500FD
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11185; kind=vmi
// Base RTTI record 16366 of 11185; flags=0x02; nonvirtual object offset=8; access=public
// Base RTTI record 10341 of 11185; flags=0x00; nonvirtual object offset=0; access=nonpublic (private/protected unresolved)
class connection :
    public std::__ndk1::enable_shared_from_this<hex::net::connection>,
    /* nonpublic */ boost::noncopyable_::noncopyable
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11185; offset-to-top=0; slots=14; truncated=0
};

// Namespace: hex::net
// Full Name: hex::net::tcp_connect_connection
// Package: hex; catalog tag: t_hex__net__tcp_connect_connection_607152FFC0AF8A72
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11186; kind=si
// Base RTTI record 11187 of 11186; flags=0x02; nonvirtual object offset=0; access=public
class tcp_connect_connection :
    public tcp_listen_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11186; offset-to-top=0; slots=23; truncated=0
};

// Namespace: hex::net
// Full Name: hex::net::tcp_listen_connection
// Package: hex; catalog tag: t_hex__net__tcp_listen_connection_45C6A37840D609A7
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11187; kind=si
// Base RTTI record 11185 of 11187; flags=0x02; nonvirtual object offset=0; access=public
class tcp_listen_connection :
    public connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11187; offset-to-top=0; slots=19; truncated=0
};

// Namespace: hex::net
// Full Name: hex::net::tcp_ssl_connect_connection
// Package: hex; catalog tag: t_hex__net__tcp_ssl_connect_connection_122A14C8AF333619
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11188; kind=si
// Base RTTI record 11189 of 11188; flags=0x02; nonvirtual object offset=0; access=public
class tcp_ssl_connect_connection :
    public tcp_ssl_listen_connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11188; offset-to-top=0; slots=2; truncated=0
    // VTable for RTTI record 11188; offset-to-top=0; slots=29; truncated=0
};

// Namespace: hex::net
// Full Name: hex::net::tcp_ssl_listen_connection
// Package: hex; catalog tag: t_hex__net__tcp_ssl_listen_connection_2890B6C74C59F1EA
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11189; kind=si
// Base RTTI record 11185 of 11189; flags=0x02; nonvirtual object offset=0; access=public
class tcp_ssl_listen_connection :
    public connection
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11189; offset-to-top=0; slots=22; truncated=0
};

// Namespace: hex::net
// Full Name: hex::net::write_buf
// Package: hex; catalog tag: t_hex__net__write_buf_914D8D8F29912EB2
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11190; kind=class
class write_buf
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: hex::net
// Full Name: hex::net::write_buf_ptr
// Package: hex; catalog tag: t_hex__net__write_buf_ptr_112CCAD7CDC1E423
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11191; kind=si
// Base RTTI record 11190 of 11191; flags=0x02; nonvirtual object offset=0; access=public
class write_buf_ptr :
    public write_buf
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11191; offset-to-top=0; slots=4; truncated=0
};

// Namespace: hex::net
// Full Name: hex::net::write_buf_sptr
// Package: hex; catalog tag: t_hex__net__write_buf_sptr_5DA1DD9AEB12D3F6
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11192; kind=si
// Base RTTI record 11190 of 11192; flags=0x02; nonvirtual object offset=0; access=public
class write_buf_sptr :
    public write_buf
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11192; offset-to-top=0; slots=4; truncated=0
};

// Namespace: hex::rpc
// Full Name: hex::rpc::rpc_stream
// Package: hex; catalog tag: t_hex__rpc__rpc_stream_6747F540903784A1
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11193; kind=class
class rpc_stream
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11193; offset-to-top=0; slots=2; truncated=0
};

// Namespace: hex::rpc
// Full Name: hex::rpc::rpc_streambuf
// Package: hex; catalog tag: t_hex__rpc__rpc_streambuf_1AD5826342420046
// Size/Alignment: UNKNOWN; RTTI contains no complete instance layout.
// RTTI record 11194; kind=si
// Base RTTI record 10072 of 11194; flags=0x02; nonvirtual object offset=0; access=public
class rpc_streambuf :
    public boost::asio::basic_streambuf<std::__ndk1::allocator<char> >
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
    // VTable for RTTI record 11194; offset-to-top=0; slots=14; truncated=0
};
