// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.

// Namespace: Navigate
// Full Name: Navigate::ENaviObShapeType
// Package: Navigate; catalog tag: t_Navigate__ENaviObShapeType_F8B579FFBFDC0F9D
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Navigate.ENaviObShapeType; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum ENaviObShapeType
{
    Invalid = 0x00000000, // label: "Invalid"; bytes: 1
    Box = 0x00000001, // label: "Box"; bytes: 1
    Cylinder = 0x00000002, // label: "Cylinder"; bytes: 1
};

// Namespace: Navigate
// Full Name: Navigate::NaviObShapeBase
// Package: Navigate; catalog tag: t_Navigate__NaviObShapeBase_02FFFA04480D15F9
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Navigate.NaviObShapeBase; qualified name source: reflection namespace/type alias
class NaviObShapeBase
{
public:
    // Native fields - partial layout
    ENaviObShapeType ShapeType;                      // 0x0000 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Navigate
// Full Name: Navigate::NaviObShapeBox
// Package: Navigate; catalog tag: t_Navigate__NaviObShapeBox_6C0227359048F305
// Reflected Size: 0x0010; Alignment: 4
// Reflection Alias: Navigate.NaviObShapeBox; qualified name source: reflection namespace/type alias
// Reflection base: Navigate::NaviObShapeBase; total=4; inherited=1; own=3
class NaviObShapeBox
{
public:
    // Native fields - partial layout
    float Width;                                     // 0x0004 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Height;                                    // 0x0008 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Length;                                    // 0x000C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Navigate
// Full Name: Navigate::NaviObShapeCylinder
// Package: Navigate; catalog tag: t_Navigate__NaviObShapeCylinder_CA39EF3AEE3DA07A
// Reflected Size: 0x000C; Alignment: 4
// Reflection Alias: Navigate.NaviObShapeCylinder; qualified name source: reflection namespace/type alias
// Reflection base: Navigate::NaviObShapeBase; total=3; inherited=1; own=2
class NaviObShapeCylinder
{
public:
    // Native fields - partial layout
    float Radius;                                    // 0x0004 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Height;                                    // 0x0008 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Navigate
// Full Name: Navigate::NavigateJpsMapInfo
// Package: Navigate; catalog tag: t_Navigate__NavigateJpsMapInfo_CB18612DB551EFE6
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Navigate.NavigateJpsMapInfo; qualified name source: reflection namespace/type alias
class NavigateJpsMapInfo
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: Navigate
// Full Name: Navigate::NavigateMapInfo
// Package: Navigate; catalog tag: t_Navigate__NavigateMapInfo_51A8C975082B606D
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Navigate.NavigateMapInfo; qualified name source: reflection namespace/type alias
class NavigateMapInfo
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};
