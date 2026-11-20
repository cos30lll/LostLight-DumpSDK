#include "records.h"
#include "profile.h"
#include <iomanip>
#include <sstream>

namespace msdk {
namespace {
std::string json_string(const std::string &s) {
    std::ostringstream o;o<<'"';
    for(unsigned char c:s) {
        if(c=='"'||c=='\\')o<<'\\'<<char(c);
        else if(c<32)o<<"\\u00"<<std::hex<<std::setw(2)<<std::setfill('0')<<unsigned(c)<<std::dec;
        else o<<char(c);
    }
    o<<'"';return o.str();
}
void method_json(std::ostream &o,const Method &m) {
    o<<"{\"module\":"<<json_string(m.module)<<",\"name\":"<<json_string(m.name)<<",\"origin\":"<<json_string(m.origin)
     <<",\"function_rva\":"<<m.function_rva<<",\"flags\":"<<m.flags<<",\"observed\":"<<(m.observed?"true":"false")<<"}";
}
}

std::string snapshot_json(const Snapshot &s) {
    std::ostringstream o;
    o<<"{\n\"schema\":2,\"source\":"<<json_string(s.source)<<",\"hook_status\":"<<json_string(s.hook_status)<<",\"build_id\":"<<json_string(kBuildId)
     <<",\"generation\":"<<s.generation<<",\"load_bias\":"<<s.load_bias<<",\"pid\":"<<s.pid<<",\n\"rtti\":[\n";
    bool first=true;
    for(const auto &t:s.rtti) {
        if(!first)o<<",\n";first=false;
        o<<"{\"name\":"<<json_string(t.name)<<",\"mangled\":"<<json_string(t.mangled)<<",\"kind\":"<<json_string(t.kind)<<",\"rva\":"<<t.rva
         <<",\"observed\":"<<(t.observed?"true":"false")<<",\"bases\":[";
        bool bfirst=true;for(const auto &b:t.bases){if(!bfirst)o<<',';bfirst=false;o<<"{\"rtti_rva\":"<<b.rtti_rva<<",\"offset\":"<<b.offset<<",\"flags\":"<<b.flags<<"}";}o<<"]}";
    }
    o<<"\n],\n\"vtables\":[\n";first=true;
    for(const auto &v:s.vtables) {
        if(!first)o<<",\n";first=false;
        o<<"{\"rtti_rva\":"<<v.rtti_rva<<",\"address_point_rva\":"<<v.address_point_rva<<",\"top\":"<<v.top<<",\"observed\":"<<(v.observed?"true":"false")
         <<",\"truncated\":"<<(v.truncated?"true":"false")<<",\"slots\":[";
        for(size_t i=0;i<v.slots.size();i++){if(i)o<<',';o<<v.slots[i];}o<<"]}";
    }
    o<<"\n],\n\"types\":[\n";first=true;
    for(const auto &t:s.types) {
        if(!first)o<<",\n";first=false;
        o<<"{\"name\":"<<json_string(t.name)<<",\"origin\":"<<json_string(t.origin)<<",\"rva\":"<<t.rva<<",\"identity\":"<<t.identity
         <<",\"base_rva\":"<<t.base_rva<<",\"flags\":"<<t.flags<<",\"size\":"<<t.size<<",\"itemsize\":"<<t.itemsize<<",\"dict_offset\":"<<t.dict_offset<<",\"methods\":[";
        for(size_t i=0;i<t.methods.size();i++){if(i)o<<',';method_json(o,t.methods[i]);}
        o<<"],\"members\":[";
        for(size_t i=0;i<t.members.size();i++){if(i)o<<',';const auto &m=t.members[i];o<<"{\"name\":"<<json_string(m.name)<<",\"kind\":"<<m.kind<<",\"flags\":"<<m.flags<<",\"offset\":"<<m.offset<<"}";}
        o<<"],\"properties\":[";
        for(size_t i=0;i<t.properties.size();i++){if(i)o<<',';const auto &p=t.properties[i];o<<"{\"name\":"<<json_string(p.name)<<",\"getter_rva\":"<<p.getter_rva<<",\"setter_rva\":"<<p.setter_rva<<"}";}
        o<<"]}";
    }
    o<<"\n],\n\"methods\":[\n";first=true;
    for(const auto &m:s.methods){if(!first)o<<",\n";first=false;method_json(o,m);}
    o<<"\n]\n}\n";return o.str();
}
} // namespace msdk