// Lost Light 1.0.580 | Android ARM64 | Messiah native type declarations
// Reading view. Full Name+ continues the preceding exact type name.
// name_status describes the field name. Storage evidence is recorded independently.
// A catalog tag is a generated identifier. RTTI record numbers are local cross-references.
// A virtual-table slot count describes the observed contiguous prefix.
// Duplicate and overlapping observations can describe the same storage.
// Event storage names use a generated _event_storage suffix. Parameter_n denotes order.
// The synthetic public: grouping aids reading. Original C++ access is generally unknown.

// Namespace: HLOD
// Full Name: HLOD::HLODCondition
// Package: HLOD; catalog tag: t_HLOD__HLODCondition_D14DBF1B1AE47752
// Reflected Size: 0x0048; Alignment: 8
// Reflection Alias: HLOD.HLODCondition; qualified name source: reflection namespace/type alias
class HLODCondition
{
public:
    // Native fields - partial layout
    Messiah::String FilterType;                      // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::String RegexStr;                        // 0x0018 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::HLODPVSCube
// Package: HLOD; catalog tag: t_HLOD__HLODPVSCube_8F9D6D84D3F2FFB9
// Reflected Size: 0x0070; Alignment: 8
// Reflection Alias: HLOD.HLODPVSCube; qualified name source: reflection namespace/type alias
class HLODPVSCube
{
public:
    // Native fields - partial layout
    Messiah::Box WorldBB;                            // 0x0008 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Guid Resource;                          // 0x0050 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::HLODRenderQualitySection
// Package: HLOD; catalog tag: t_HLOD__HLODRenderQualitySection_D204B2344CD5F8A5
// Reflected Size: 0x0050; Alignment: 8
// Reflection Alias: HLOD.HLODRenderQualitySection; qualified name source: reflection namespace/type alias
class HLODRenderQualitySection
{
public:
    // Native fields - partial layout
    HLODCondition Condition;                         // 0x0000 (0x48)
    // name_status=native_reflection; storage_evidence=reflected_address
    LODAction Action;                                // 0x0048 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::HLODRenderQualitySetting
// Package: HLOD; catalog tag: t_HLOD__HLODRenderQualitySetting_81FE318283E8FA86
// Reflected Size: 0x0038; Alignment: 8
// Reflection Alias: HLOD.HLODRenderQualitySetting; qualified name source: reflection namespace/type alias
class HLODRenderQualitySetting
{
public:
    // Native fields - partial layout
    int8_t OverrideLodMinLevel;                      // 0x0000 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    int8_t OverrideLodMaxLevel;                      // 0x0001 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<HLODRenderQualitySection> LODSections; // 0x0008 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<HLODCondition> UnLoadableLevels; // 0x0020 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::HLODSettings
// Package: HLOD; catalog tag: t_HLOD__HLODSettings_686E80F85A06D04C
// Reflected Size: 0x0040; Alignment: 8
// Reflection Alias: HLOD.HLODSettings; qualified name source: reflection namespace/type alias
class HLODSettings
{
public:
    // Native fields - partial layout
    Collection::Vector<HLODWorldSettings> SceneSettings; // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::HLODVisibilityData
// Package: HLOD; catalog tag: t_HLOD__HLODVisibilityData_F7BB1C32B4FD4799
// Reflected Size: 0x0048; Alignment: 8
// Reflection Alias: HLOD.HLODVisibilityData; qualified name source: reflection namespace/type alias
class HLODVisibilityData
{
public:
    // Native fields - partial layout
    Messiah::Box WorldBB;                            // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint8_t XSize;                                   // 0x0018 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint8_t ZSize;                                   // 0x0019 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<HLODPVSCube> PVSCubes;        // 0x0020 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::HLODWorldSettings
// Package: HLOD; catalog tag: t_HLOD__HLODWorldSettings_F78C8F6378B45C6A
// Reflected Size: 0x0068; Alignment: 8
// Reflection Alias: HLOD.HLODWorldSettings; qualified name source: reflection namespace/type alias
class HLODWorldSettings
{
public:
    // Native fields - partial layout
    Messiah::String SceneName;                       // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    float CameraFov;                                 // 0x0018 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<HLODRenderQualitySetting> RenderQualitySettings; // 0x0020 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<HLODCondition> IgnoredEntities; // 0x0038 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<HLODCondition> IgnoredLevels; // 0x0050 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::LODAction
// Package: HLOD; catalog tag: t_HLOD__LODAction_E8C2E298A60C6D97
// Reflected Size: 0x0002; Alignment: 1
// Reflection Alias: HLOD.LODAction; qualified name source: reflection namespace/type alias
class LODAction
{
public:
    // Native fields - partial layout
    int8_t OverrideLodMinLevel;                      // 0x0000 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address
    int8_t OverrideLodMaxLevel;                      // 0x0001 (0x01)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODInstanceBuffer
// Package: HLOD; catalog tag: t_HLOD__StaticHLODInstanceBuffer_BAC81C555EA53182
// Reflected Size: 0x0080; Alignment: 16
// Reflection Alias: HLOD.StaticHLODInstanceBuffer; qualified name source: reflection namespace/type alias
class StaticHLODInstanceBuffer
{
public:
    // Native fields - partial layout
    Messiah::Matrix4x3 Transform;                    // 0x0000 (0x30)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Vector4 LightmapScale;                  // 0x0060 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Vector4 LightmapTransform;              // 0x0070 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODMaterialData
// Package: HLOD; catalog tag: t_HLOD__StaticHLODMaterialData_F01A9D84336292B2
// Reflected Size: 0x0058; Alignment: 8
// Reflection Alias: HLOD.StaticHLODMaterialData; qualified name source: reflection namespace/type alias
class StaticHLODMaterialData
{
public:
    // Native fields - partial layout
    Messiah::Name Shader;                            // 0x0000 (0x08)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint32_t MaterialFlags;                          // 0x0008 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<uint32> Uniforms;             // 0x0010 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<Guid> Textures;               // 0x0028 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODRenderCluster
// Package: HLOD; catalog tag: t_HLOD__StaticHLODRenderCluster_BA0148BB8C8C55FF
// Reflected Size: 0x00E0; Alignment: 16
// Reflection Alias: HLOD.StaticHLODRenderCluster; qualified name source: reflection namespace/type alias
class StaticHLODRenderCluster
{
public:
    // Native fields - partial layout
    Messiah::Box WorldBound;                         // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<StaticHLODInstanceBuffer> Instances; // 0x0018 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<uint64> Resources;            // 0x0030 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<uint32> ClusterData;          // 0x0048 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint32_t ClusterLodState;                        // 0x00CC (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    // bool IsVisible; // Storage 0x00D0, bit 0, width 1, mask 0x0001
    // name_status=native_reflection; storage_evidence=native_property_copy
    // bool IsCastDynamicShadow; // Storage 0x00D0, bit 1, width 1, mask 0x0002
    // name_status=native_reflection; storage_evidence=native_property_copy
    // bool IsReceiveDynamicShadow; // Storage 0x00D0, bit 2, width 1, mask 0x0004
    // name_status=native_reflection; storage_evidence=native_property_copy
    // bool IsReflectionVisible; // Storage 0x00D0, bit 3, width 1, mask 0x0008
    // name_status=native_reflection; storage_evidence=native_property_copy

    // Property: bool IsCastDynamicShadow; flags=0x00100301
    // Storage proven at +0x00D0; see field/bit observation above.

    // Property: bool IsReceiveDynamicShadow; flags=0x00100301
    // Storage proven at +0x00D0; see field/bit observation above.

    // Property: bool IsReflectionVisible; flags=0x00100301
    // Storage proven at +0x00D0; see field/bit observation above.

    // Property: bool IsVisible; flags=0x00100001
    // Storage proven at +0x00D0; see field/bit observation above.

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODRenderClusterData
// Package: HLOD; catalog tag: t_HLOD__StaticHLODRenderClusterData_C8EDFB239964FD47
// Reflected Size: 0x0070; Alignment: 16
// Reflection Alias: HLOD.StaticHLODRenderClusterData; qualified name source: reflection namespace/type alias
class StaticHLODRenderClusterData
{
public:
    // Native fields - partial layout
    Messiah::Box WorldBound;                         // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<StaticHLODInstanceBuffer> Instances; // 0x0018 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<StaticHLODRenderQualityClusterData> RenderQualityData; // 0x0030 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<uint32> ClusterData;          // 0x0048 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    // bool IsVisible; // Storage 0x0060, bit 0, width 1, mask 0x0001
    // name_status=native_reflection; storage_evidence=native_property_copy
    // bool IsCastDynamicShadow; // Storage 0x0060, bit 1, width 1, mask 0x0002
    // name_status=native_reflection; storage_evidence=native_property_copy
    // bool IsReceiveDynamicShadow; // Storage 0x0060, bit 2, width 1, mask 0x0004
    // name_status=native_reflection; storage_evidence=native_property_copy
    // bool IsReflectionVisible; // Storage 0x0060, bit 3, width 1, mask 0x0008
    // name_status=native_reflection; storage_evidence=native_property_copy

    // Property: bool IsCastDynamicShadow; flags=0x00100301
    // Storage proven at +0x0060; see field/bit observation above.

    // Property: bool IsReceiveDynamicShadow; flags=0x00100301
    // Storage proven at +0x0060; see field/bit observation above.

    // Property: bool IsReflectionVisible; flags=0x00100301
    // Storage proven at +0x0060; see field/bit observation above.

    // Property: bool IsVisible; flags=0x00100001
    // Storage proven at +0x0060; see field/bit observation above.

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODRenderClusterSet
// Package: HLOD; catalog tag: t_HLOD__StaticHLODRenderClusterSet_6FB2B4B21C8D6205
// Reflected Size: 0x0018; Alignment: 8
// Reflection Alias: HLOD.StaticHLODRenderClusterSet; qualified name source: reflection namespace/type alias
class StaticHLODRenderClusterSet
{
public:
    // Native fields - partial layout
    Collection::Vector<StaticHLODRenderCluster> Clusters; // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODRenderQualityClusterData
// Package: HLOD; catalog tag: t_HLOD__StaticHLODRenderQualityClusterData_BD4BD9840D8FBD0E
// Reflected Size: 0x0030; Alignment: 16
// Reflection Alias: HLOD.StaticHLODRenderQualityClusterData; qualified name source: reflection namespace/type alias
class StaticHLODRenderQualityClusterData
{
public:
    // Native fields - partial layout
    Collection::Vector<uint64> Resources;            // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<uint32> LoadResourceExtendSq; // 0x0018 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODResource
// Package: HLOD; catalog tag: t_HLOD__StaticHLODResource_887931D032BB57B7
// Reflected Size: 0x0098; Alignment: 8
// Reflection Alias: HLOD.StaticHLODResource; qualified name source: reflection namespace/type alias
class StaticHLODResource
{
public:
    // Native fields - partial layout
    Messiah::String Model;                           // 0x0000 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Guid MeshGuid;                          // 0x0018 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address
    Messiah::Guid MaterialGuid;                      // 0x0028 (0x10)
    // name_status=native_reflection; storage_evidence=reflected_address
    Collection::Vector<StaticHLODMaterialData> Materials; // 0x0048 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint16_t SwitchNearThreshold;                    // 0x0060 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint16_t SwitchFarThreshold;                     // 0x0062 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint32_t NearResourceIndex;                      // 0x0064 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint32_t FarResourceIndex;                       // 0x0068 (0x04)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint16_t SwitchNearScreenSizeThreshold;          // 0x006C (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint16_t SwitchFarScreenSizeThreshold;           // 0x006E (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint16_t NeedLoadScreenSizeThreshold;            // 0x0070 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    uint16_t NeedLoadDistanceThreshold;              // 0x0072 (0x02)
    // name_status=native_reflection; storage_evidence=reflected_address
    // bool IsBillboard; // Storage 0x0074, bit 0, width 1, mask 0x0001
    // name_status=native_reflection; storage_evidence=native_property_copy
    // bool IsPointCloudLighting; // Storage 0x0074, bit 1, width 1, mask 0x0002
    // name_status=native_reflection; storage_evidence=native_property_copy

    // Property: bool IsBillboard; flags=0x00100001
    // Storage proven at +0x0074; see field/bit observation above.

    // Property: bool IsPointCloudLighting; flags=0x00100301
    // Storage proven at +0x0074; see field/bit observation above.

    // Property: Messiah::Guid Mesh; flags=0x00000200
    // No field offset asserted: computed, indirect or not yet resolved.

};

// Namespace: HLOD
// Full Name: HLOD::StaticHLODResourceCache
// Package: HLOD; catalog tag: t_HLOD__StaticHLODResourceCache_EAFE2F763D5BB50B
// Reflected Size: 0x0050; Alignment: 8
// Reflection Alias: HLOD.StaticHLODResourceCache; qualified name source: reflection namespace/type alias
class StaticHLODResourceCache
{
public:
    // Native fields - partial layout
    Collection::Vector<Guid> Resources;              // 0x0038 (0x18)
    // name_status=native_reflection; storage_evidence=reflected_address

};
