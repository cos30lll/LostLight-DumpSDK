// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.

// Namespace: Physics
// Full Name: Physics::ChainMapping
// Package: Physics; catalog tag: t_Physics__ChainMapping_E4BF935C13BC89E7
// Reflected Size: 0x0068; Alignment: 4
// Reflection Alias: Physics.ChainMapping; qualified name source: reflection namespace/type alias
class ChainMapping
{
public:
    // Native fields - partial layout
    int16_t StartBoneSrc;                            // 0x0000 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    int16_t EndBoneSrc;                              // 0x0002 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    int16_t StartBoneDst;                            // 0x0004 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    int16_t EndBoneDst;                              // 0x0006 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Matrix4x3 StartDstToSrcTrans;           // 0x0008 (0x30)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Matrix4x3 EndDstToSrcTrans;             // 0x0038 (0x30)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::ConstraintDataBase
// Package: Physics; catalog tag: t_Physics__ConstraintDataBase_E31D18D6268ED6C0
// Reflected Size: 0x007C; Alignment: 4
// Reflection Alias: Physics.ConstraintDataBase; qualified name source: reflection namespace/type alias
class ConstraintDataBase
{
public:
    // Native fields - partial layout
    EConstraintDataType DataType;                    // 0x0000 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Matrix4x3 Trans0;                       // 0x0004 (0x30)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Matrix4x3 Trans1;                       // 0x0034 (0x30)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool EnableProjection;                           // 0x0064 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    float ProjectionLinearTolerance;                 // 0x0068 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float ProjectionAngularTolerance;                // 0x006C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float BreakForceThreshold;                       // 0x0070 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float BreakTorqueThreshold;                      // 0x0074 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool IsBreakable;                                // 0x0078 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::ECCTSimLevel
// Package: Physics; catalog tag: t_Physics__ECCTSimLevel_3B95C172A3B789AE
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Physics.ECCTSimLevel; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum ECCTSimLevel
{
    Highest = 0x00000000, // label: "Highest"; bytes: 1
    RaycastMove = 0x00000001, // label: "RaycastMove"; bytes: 1
    NavigateTest = 0x00000002, // label: "NavigateTest"; bytes: 1
    DropTest = 0x00000003, // label: "DropTest"; bytes: 1
    None = 0x00000004, // label: "None"; bytes: 1
};

// Namespace: Physics
// Full Name: Physics::ECenterSource
// Package: Physics; catalog tag: t_Physics__ECenterSource_B2338D38E6AB5CDD
// Reflected Size: 0x0004; Alignment: 4
// Reflection Alias: Physics.ECenterSource; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum ECenterSource
{
    Default = 0x00000000, // label: "Default"; bytes: 4
    Player = 0x00000001, // label: "Player"; bytes: 4
    Camera = 0x00000002, // label: "Camera"; bytes: 4
};

// Namespace: Physics
// Full Name: Physics::EConstraintDataType
// Package: Physics; catalog tag: t_Physics__EConstraintDataType_40E3BC2EE23E07B6
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Physics.EConstraintDataType; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum EConstraintDataType
{
    Ragdoll = 0x00000001, // label: "Ragdoll"; bytes: 1
    Invalid = 0x000000FF, // label: "Invalid"; bytes: 1
};

// Namespace: Physics
// Full Name: Physics::EConstraintMotion
// Package: Physics; catalog tag: t_Physics__EConstraintMotion_B29849CE8D15E424
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Physics.EConstraintMotion; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum EConstraintMotion
{
    LOCKED = 0x00000000, // label: "LOCKED"; bytes: 1
    LIMITED = 0x00000001, // label: "LIMITED"; bytes: 1
    FREE = 0x00000002, // label: "FREE"; bytes: 1
};

// Namespace: Physics
// Full Name: Physics::EConstraintType
// Package: Physics; catalog tag: t_Physics__EConstraintType_10B7D503A37646D6
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Physics.EConstraintType; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum EConstraintType
{
    Fixed = 0x00000000, // label: "Fixed"; bytes: 1
    Spherical = 0x00000001, // label: "Spherical"; bytes: 1
    Ragdoll = 0x00000002, // label: "Ragdoll"; bytes: 1
    Revolute = 0x00000003, // label: "Revolute"; bytes: 1
    Invalid = 0x000000FF, // label: "Invalid"; bytes: 1
};

// Namespace: Physics
// Full Name: Physics::EGroundPosStatus
// Package: Physics; catalog tag: t_Physics__EGroundPosStatus_CB018F4DCFE02772
// Reflected Size: 0x0004; Alignment: 4
// Reflection Alias: Physics.EGroundPosStatus; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum EGroundPosStatus
{
    Valid = 0x00000000, // label: "Valid"; bytes: 4
    NaviMapPosNotFound = 0x00000001, // label: "NaviMapPosNotFound"; bytes: 4
    PhysicsSpaceNotReady = 0x00000002, // label: "PhysicsSpaceNotReady"; bytes: 4
    PhysicsGroundNotFound = 0x00000003, // label: "PhysicsGroundNotFound"; bytes: 4
};

// Namespace: Physics
// Full Name: Physics::EPhysicsShapeType
// Package: Physics; catalog tag: t_Physics__EPhysicsShapeType_9E242E959880FD73
// Reflected Size: 0x0002; Alignment: 2
// Reflection Alias: Physics.EPhysicsShapeType; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum EPhysicsShapeType
{
    None = 0x00000000, // label: "None"; bytes: 2
    SPHERE = 0x00000001, // label: "SPHERE"; bytes: 2
    BOX = 0x00000002, // label: "BOX"; bytes: 2
    CAPSULE = 0x00000003, // label: "CAPSULE"; bytes: 2
    CONVEX = 0x00000004, // label: "CONVEX"; bytes: 2
    MESH = 0x00000005, // label: "MESH"; bytes: 2
    HEIGHTFIELD = 0x00000006, // label: "HEIGHTFIELD"; bytes: 2
};

// Namespace: Physics
// Full Name: Physics::ESkeletonMappingType
// Package: Physics; catalog tag: t_Physics__ESkeletonMappingType_B1B9D12B5AAD955C
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Physics.ESkeletonMappingType; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum ESkeletonMappingType
{
    ESMType_Ragdoll = 0x00000000, // label: "ESMType_Ragdoll"; bytes: 1
};

// Namespace: Physics
// Full Name: Physics::EVehicleDifferentialType
// Package: Physics; catalog tag: t_Physics__EVehicleDifferentialType_0937A5984166CE72
// Reflected Size: 0x0001; Alignment: 1
// Reflection Alias: Physics.EVehicleDifferentialType; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum EVehicleDifferentialType
{
    LS_4WD = 0x00000000, // label: "LS_4WD"; bytes: 1
    LS_FRONTWD = 0x00000001, // label: "LS_FRONTWD"; bytes: 1
    LS_REARWD = 0x00000002, // label: "LS_REARWD"; bytes: 1
    OPEN_4WD = 0x00000003, // label: "OPEN_4WD"; bytes: 1
    OPEN_FRONTWD = 0x00000004, // label: "OPEN_FRONTWD"; bytes: 1
    OPEN_REARWD = 0x00000005, // label: "OPEN_REARWD"; bytes: 1
};

// Namespace: Physics
// Full Name: Physics::GroundPosRes
// Package: Physics; catalog tag: t_Physics__GroundPosRes_987D3B3834286621
// Reflected Size: 0x001C; Alignment: 4
// Reflection Alias: Physics.GroundPosRes; qualified name source: reflection namespace/type alias
class GroundPosRes
{
public:
    // Native fields - partial layout
    Messiah::Vector3 InPos;                          // 0x0000 (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Vector3 GroundPos;                      // 0x000C (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    EGroundPosStatus Status;                         // 0x0018 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::PhysicsEngineSettings
// Package: Physics; catalog tag: t_Physics__PhysicsEngineSettings_5D46EAFDF5A6897C
// Reflected Size: 0x0020; Alignment: 4
// Reflection Alias: Physics.PhysicsEngineSettings; qualified name source: reflection namespace/type alias
class PhysicsEngineSettings
{
public:
    // Native fields - partial layout
    uint8_t CPUThreadNumber;                         // 0x0000 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool UseMessiahDispatcher;                       // 0x0001 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint32_t ScratchBufferSize;                      // 0x0004 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float DHardness;                                 // 0x0008 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float DMinDamageThreshold;                       // 0x000C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float DMaxDamageThreshold;                       // 0x0010 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float StaticFriction;                            // 0x0014 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float DynamicFriction;                           // 0x0018 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Restitution;                               // 0x001C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::RagdollBone
// Package: Physics; catalog tag: t_Physics__RagdollBone_BB4D4EF2C6D8CBBB
// Reflected Size: 0x0020; Alignment: 8
// Reflection Alias: Physics.RagdollBone; qualified name source: reflection namespace/type alias
class RagdollBone
{
public:
    // Native fields - partial layout
    Messiah::String BoneName;                        // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool LockTranslation;                            // 0x0018 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::RagdollData
// Package: Physics; catalog tag: t_Physics__RagdollData_AD8ECD0469985239
// Reflected Size: 0x0198; Alignment: 8
// Reflection Alias: Physics.RagdollData; qualified name source: reflection namespace/type alias
class RagdollData
{
public:
    // Native fields - partial layout
    uint16_t DataVersion;                            // 0x0000 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<RagdollRBData> RBs;           // 0x0008 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<int8> Parents;                // 0x0020 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<RagdollConstraintData> Constraints; // 0x0038 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<int16> RBToBone;              // 0x0050 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<Matrix4x3> RBToBoneTrans;     // 0x0068 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<SubSysIdPair> DisableCollisionPairs; // 0x0080 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    SkeletonMapperData LowToHighMapper;              // 0x0098 (0x70)
    // name_status=native_reflection; storage_evidence=reflected_address
    SkeletonMapperData HighToLowMapper;              // 0x0108 (0x70)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::RagdollRBData
// Package: Physics; catalog tag: t_Physics__RagdollRBData_BCA18F853E4B6589
// Reflected Size: 0x00C8; Alignment: 8
// Reflection Alias: Physics.RagdollRBData; qualified name source: reflection namespace/type alias
class RagdollRBData
{
public:
    // Native fields - partial layout
    Messiah::PhysicsMaterialData Material;           // 0x0000 (0x14)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::RigidBodyMassProperties MassProp;       // 0x0014 (0x2C)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::RigidBodyCollisionProperties ColProp;   // 0x0040 (0x24)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::RigidBodyDynamicProperties DynProp;     // 0x0064 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Matrix4x3 InitPose;                     // 0x007C (0x30)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::EPhysicsMotionType MotionType;          // 0x00AC (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<RagdollRBShapeData> Shapes;   // 0x00B0 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::RagdollRBShapeData
// Package: Physics; catalog tag: t_Physics__RagdollRBShapeData_6C4A205732CACCBA
// Reflected Size: 0x0030; Alignment: 8
// Reflection Alias: Physics.RagdollRBShapeData; qualified name source: reflection namespace/type alias
class RagdollRBShapeData
{
public:
    // Native fields - partial layout
    Messiah::Quat Rot;                               // 0x0010 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Vector3 Pos;                            // 0x0020 (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::RagdollSkeleton
// Package: Physics; catalog tag: t_Physics__RagdollSkeleton_A5D03997961A5552
// Reflected Size: 0x0048; Alignment: 8
// Reflection Alias: Physics.RagdollSkeleton; qualified name source: reflection namespace/type alias
class RagdollSkeleton
{
public:
    // Native fields - partial layout
    Collection::Vector<int16> ParentIndices;         // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<RagdollBone> Bones;           // 0x0018 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<Matrix4x3> ReferencePose;     // 0x0030 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::SimpleMapping
// Package: Physics; catalog tag: t_Physics__SimpleMapping_36AA1ED9E744534A
// Reflected Size: 0x0034; Alignment: 4
// Reflection Alias: Physics.SimpleMapping; qualified name source: reflection namespace/type alias
class SimpleMapping
{
public:
    // Native fields - partial layout
    int16_t BoneSrc;                                 // 0x0000 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    int16_t BoneDst;                                 // 0x0002 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Matrix4x3 DstToSrcTrans;                // 0x0004 (0x30)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::SkeletonMapperData
// Package: Physics; catalog tag: t_Physics__SkeletonMapperData_FC5916D7966876A8
// Reflected Size: 0x0070; Alignment: 8
// Reflection Alias: Physics.SkeletonMapperData; qualified name source: reflection namespace/type alias
class SkeletonMapperData
{
public:
    // Native fields - partial layout
    Collection::Vector<SimpleMapping> SimpleMappings; // 0x0020 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<ChainMapping> ChainMappings;  // 0x0038 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<int16> UnmappedBones;         // 0x0050 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool KeepUnmappedLocal;                          // 0x0068 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    ESkeletonMappingType MappingType;                // 0x0069 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: Physics
// Full Name: Physics::VehicleSystemDebugDrawComponent
// Package: Physics; catalog tag: t_Physics__VehicleSystemDebugDrawComponent_BD7F0956399A1FF3
// Reflected Size: 0x0100; Alignment: 8
// Reflection Alias: Physics.VehicleSystemDebugDrawComponent; qualified name source: reflection namespace/type alias
// Reflection base: Messiah::IComponent; total=16; inherited=6; own=10
class VehicleSystemDebugDrawComponent
{
public:
    // Native fields - partial layout
    Messiah::Vector4 VehicleRBColor;                 // 0x0050 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Vector4 SuspensionsColor;               // 0x0060 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address
    float FrameScale;                                // 0x0070 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float CMLocalFrameScale;                         // 0x0074 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool ShowVehicleRB;                              // 0x0078 (0x01)
    // name_status=native_reflection; storage_evidence=native_property_copy
    bool ShowVehicleRBInterpolatedPose;              // 0x0079 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool ShowSuspensions;                            // 0x007A (0x01)
    // name_status=native_reflection; storage_evidence=native_property_copy
    bool ShowSuspOrigData;                           // 0x007B (0x01)
    // name_status=native_reflection; storage_evidence=native_property_copy
    bool ShowFrame;                                  // 0x007C (0x01)
    // name_status=native_reflection; storage_evidence=native_property_copy
    bool ShowCMLocalFrame;                           // 0x007D (0x01)
    // name_status=native_reflection; storage_evidence=native_property_copy

    // Property: bool ShowCMLocalFrame; flags=0x00010200
    // Storage proven at +0x007D; see field/bit observation above.

    // Property: bool ShowFrame; flags=0x00010200
    // Storage proven at +0x007C; see field/bit observation above.

    // Property: bool ShowSuspOrigData; flags=0x00010200
    // Storage proven at +0x007B; see field/bit observation above.

    // Property: bool ShowSuspensions; flags=0x00010200
    // Storage proven at +0x007A; see field/bit observation above.

    // Property: bool ShowVehicleRB; flags=0x00010200
    // Storage proven at +0x0078; see field/bit observation above.

};
