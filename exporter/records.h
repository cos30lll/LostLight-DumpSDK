#pragma once
#include <cstdint>
#include <string>
#include <vector>
namespace msdk {
// All exported addresses below are ELF RVAs. identity is only a binding-object key.
struct Method {
    std::string module, name, origin;
    uint64_t function_rva=0;
    int flags=0;
    bool observed=false;
};
struct Member { std::string name; int kind=0,flags=0; int64_t offset=0; };
struct Property { std::string name; uint64_t getter_rva=0,setter_rva=0; };
struct Type {
    std::string name,origin;
    uint64_t rva=0,identity=0,base_rva=0,flags=0;
    int64_t size=0,itemsize=0,dict_offset=0;
    std::vector<Method> methods;
    std::vector<Member> members;
    std::vector<Property> properties;
};
struct Base { uint64_t rtti_rva=0; int64_t offset=0; unsigned flags=0; };
struct Rtti {
    std::string name,mangled,kind;
    uint64_t rva=0;
    bool observed=false;
    std::vector<Base> bases;
};
struct Vtable {
    uint64_t rtti_rva=0,address_point_rva=0;
    int64_t top=0;
    bool observed=false,truncated=false;
    std::vector<uint64_t> slots;
};
struct Snapshot {
    std::string source,hook_status;
    uint64_t generation=0,load_bias=0;
    int pid=0;
    std::vector<Rtti> rtti;
    std::vector<Vtable> vtables;
    std::vector<Type> types;
    std::vector<Method> methods;
};
std::string snapshot_json(const Snapshot &snapshot);
}
