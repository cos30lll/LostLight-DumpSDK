// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.

// Namespace: CameraManager
// Full Name: CameraManager::BezierCurveKey
// Package: CameraManager; catalog tag: t_CameraManager__BezierCurveKey_6CB9D649C5BCB918
// Reflected Size: 0x0030; Alignment: 8
// Reflection Alias: CameraManager.BezierCurveKey; qualified name source: reflection namespace/type alias
class BezierCurveKey
{
public:
    // Native fields - partial layout
    float cord_x;                                    // 0x0000 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float cord_y;                                    // 0x0004 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String key_id;                          // 0x0008 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    float arrive_tan;                                // 0x0020 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float leave_tan;                                 // 0x0024 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t left_tangent_mode;                       // 0x0028 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t right_tangent_mode;                      // 0x002C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: CameraManager
// Full Name: CameraManager::CameraCollisionNear
// Package: CameraManager; catalog tag: t_CameraManager__CameraCollisionNear_2479F0B1E5AFE620
// Reflected Size: 0x00A0; Alignment: 8
// Reflection Alias: CameraManager.CameraCollisionNear; qualified name source: reflection namespace/type alias
// Reflection base: Messiah::CameraSensor; total=20; inherited=20; own=0
class CameraCollisionNear
{
public:
    // No reflected/native members recovered; this is a type declaration, NOT a complete class layout.
};

// Namespace: CameraManager
// Full Name: CameraManager::CameraFrame
// Package: CameraManager; catalog tag: t_CameraManager__CameraFrame_98FF1912918D13F7
// Reflected Size: 0x0024; Alignment: 4
// Reflection Alias: CameraManager.CameraFrame; qualified name source: reflection namespace/type alias
class CameraFrame
{
public:
    // Native fields - partial layout
    Messiah::Vector3 Position;                       // 0x0000 (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Pitch;                                     // 0x000C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Yaw;                                       // 0x0010 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Roll;                                      // 0x0014 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Fov;                                       // 0x0018 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t InterpolateMode;                         // 0x001C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t Time;                                    // 0x0020 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: CameraManager
// Full Name: CameraManager::CameraKeyFrame
// Package: CameraManager; catalog tag: t_CameraManager__CameraKeyFrame_31ECC1B03F2330BE
// Reflected Size: 0x0028; Alignment: 4
// Reflection Alias: CameraManager.CameraKeyFrame; qualified name source: reflection namespace/type alias
class CameraKeyFrame
{
public:
    // Native fields - partial layout
    Messiah::Vector3 PositionOrOffset;               // 0x0000 (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Vector3 DirectionOrPitchYawRoll;        // 0x000C (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Roll;                                      // 0x0018 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Fov;                                       // 0x001C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t LerpType;                                // 0x0020 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t Time;                                    // 0x0024 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: CameraManager
// Full Name: CameraManager::CameraRuntimeInfo
// Package: CameraManager; catalog tag: t_CameraManager__CameraRuntimeInfo_80D79E2EAD4B408E
// Reflected Size: 0x0028; Alignment: 8
// Reflection Alias: CameraManager.CameraRuntimeInfo; qualified name source: reflection namespace/type alias
class CameraRuntimeInfo
{
public:
    // Native fields - partial layout
    Messiah::Vector3 target;                         // 0x0000 (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Vector3 direction;                      // 0x000C (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    float roll;                                      // 0x0018 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float fov;                                       // 0x001C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::CameraController* controller;           // 0x0020 (0x08)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: CameraManager
// Full Name: CameraManager::CameraTask
// Package: CameraManager; catalog tag: t_CameraManager__CameraTask_73927360CFF3CE1B
// Reflected Size: 0x0048; Alignment: 8
// Reflection Alias: CameraManager.CameraTask; qualified name source: reflection namespace/type alias
class CameraTask
{
public:
    // Native fields - partial layout
    Messiah::Vector3 PosOffset;                      // 0x0000 (0x0C)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Pitch;                                     // 0x000C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Yaw;                                       // 0x0010 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Len;                                       // 0x0014 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Fov;                                       // 0x0018 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float UseTime;                                   // 0x001C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float EscapedTime;                               // 0x0020 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    bool Active;                                     // 0x0024 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t RotateMode;                              // 0x0028 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    CameraTaskTransitMode TransitionMode;            // 0x002C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String CurveName;                       // 0x0030 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: CameraManager
// Full Name: CameraManager::CameraTaskTransitMode
// Package: CameraManager; catalog tag: t_CameraManager__CameraTaskTransitMode_2041CEA931D96241
// Reflected Size: 0x0004; Alignment: 4
// Reflection Alias: CameraManager.CameraTaskTransitMode; qualified name source: reflection namespace/type alias
// Native reflection enum reading view; values are raw storage bits.
// Original C++ scoped-ness and signedness are not asserted.
enum CameraTaskTransitMode
{
    Default = 0x00000000, // label: "Default"; bytes: 4
    BezierCurve = 0x00000001, // label: "BezierCurve"; bytes: 4
    RecoilRestore = 0x00000002, // label: "RecoilRestore"; bytes: 4
};

// Namespace: CameraManager
// Full Name: CameraManager::CameraTrackKeyFrame
// Package: CameraManager; catalog tag: t_CameraManager__CameraTrackKeyFrame_11EFD38338BD9959
// Reflected Size: 0x0014; Alignment: 4
// Reflection Alias: CameraManager.CameraTrackKeyFrame; qualified name source: reflection namespace/type alias
class CameraTrackKeyFrame
{
public:
    // Native fields - partial layout
    float Value;                                     // 0x0000 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Dx;                                        // 0x0004 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    float Dy;                                        // 0x0008 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t Type;                                    // 0x000C (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    int32_t Time;                                    // 0x0010 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address

};
