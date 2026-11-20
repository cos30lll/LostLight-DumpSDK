// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.

// Namespace: Account
// Full Name: Account::OrderInfo
// Package: Account; catalog tag: t_Account__OrderInfo_D74BAF9FED0D15CC
// Reflected Size: 0x0090; Alignment: 8
// Reflection Alias: Account.OrderInfo; qualified name source: reflection namespace/type alias
class OrderInfo
{
public:
    // Native fields - partial layout
    Messiah::String ProductId;                       // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String OrderId;                         // 0x0018 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String Desc;                            // 0x0030 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String Etc;                             // 0x0048 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String Currency;                        // 0x0060 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String PayChannel;                      // 0x0078 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Account
// Full Name: Account::ProductInfo
// Package: Account; catalog tag: t_Account__ProductInfo_BDBF398147DEE283
// Reflected Size: 0x0068; Alignment: 8
// Reflection Alias: Account.ProductInfo; qualified name source: reflection namespace/type alias
class ProductInfo
{
public:
    // Native fields - partial layout
    Messiah::String Id;                              // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String Name;                            // 0x0018 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Price;                                     // 0x0030 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t Ratio;                                   // 0x0034 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Map<String,String> SdkPids;          // 0x0038 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String Bid;                             // 0x0050 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};
