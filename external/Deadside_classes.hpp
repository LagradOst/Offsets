namespace off {
	constexpr auto GNames = 0x48bd000;
	constexpr auto GObjects = 0x48f95b0;
	constexpr auto GWorld = 0x4a3f080;

	namespace n_UMaterialExpressionCrossProduct {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UOnsetNRT {
		constexpr auto Settings = 0x78; // UOnsetNRTSettings*
	}

	namespace n_USlateBrushAsset {
		constexpr auto Brush = 0x28; // FSlateBrush
	}

	namespace n_UBlueprintCore {
		constexpr auto SkeletonGeneratedClass = 0x28; // UObject*
		constexpr auto GeneratedClass = 0x30; // UObject*
		constexpr auto bLegacyNeedToPurgeSkelRefs = 0x38; // bool
		constexpr auto BlueprintGuid = 0x3c; // FGuid
	}

	namespace n_USFPSAI_TSetStateTime {
		constexpr auto MinTime = 0x70; // float
		constexpr auto MaxTime = 0x74; // float
	}

	namespace n_UAISenseConfig {
		constexpr auto DebugColor = 0x28; // FColor
		constexpr auto MaxAge = 0x2c; // float
		constexpr auto bStartsEnabled = 0x30; // char : 1
	}

	namespace n_UInterpTrackInstDirector {
		constexpr auto OldViewTarget = 0x28; // AActor*
	}

	namespace n_UBoneMaskFilter {
		constexpr auto BlendPoses = 0x28; // TArray<FInputBlendPose>
	}

	namespace n_UVideoCaptureProtocol {
		constexpr auto bUseCompression = 0x68; // bool
		constexpr auto CompressionQuality = 0x6c; // float
	}

	namespace n_UHierarchicalInstancedStaticMeshComponent {
		constexpr auto SortedInstances = 0x598; // TArray<int32_t>
		constexpr auto NumBuiltInstances = 0x5a8; // int32_t
		constexpr auto BuiltInstanceBounds = 0x5b0; // FBox
		constexpr auto UnbuiltInstanceBounds = 0x5cc; // FBox
		constexpr auto UnbuiltInstanceBoundsList = 0x5e8; // TArray<FBox>
		constexpr auto bEnableDensityScaling = 0x5f8; // char : 1
		constexpr auto OcclusionLayerNumNodes = 0x600; // int32_t
		constexpr auto CacheMeshExtendedBounds = 0x604; // FBoxSphereBounds
		constexpr auto bDisableCollision = 0x620; // bool
		constexpr auto InstanceCountToRender = 0x624; // int32_t
	}

	namespace n_USoundfieldSubmix {
		constexpr auto SoundfieldEncodingFormat = 0x40; // FName
		constexpr auto EncodingSettings = 0x48; // USoundfieldEncodingSettingsBase*
		constexpr auto SoundfieldEffectChain = 0x50; // TArray<USoundfieldEffectBase*>
		constexpr auto EncodingSettingsClass = 0x60; // USoundfieldEncodingSettingsBase*
	}

	namespace n_UInterpFilter {
		constexpr auto Caption = 0x28; // FString
	}

	namespace n_USkeletalBodySetup {
		constexpr auto bSkipScaleFromAnimation = 0x2a0; // bool
		constexpr auto PhysicalAnimationData = 0x2a8; // TArray<FPhysicalAnimationProfile>
	}

	namespace n_UMotoSynthSource {
		constexpr auto bConvertTo8Bit = 0x28; // bool
		constexpr auto DownSampleFactor = 0x2c; // float
		constexpr auto RPMCurve = 0x30; // FRuntimeFloatCurve
		constexpr auto SourceData = 0xb8; // TArray<float>
		constexpr auto SourceDataPCM = 0xc8; // TArray<int16_t>
		constexpr auto SourceSampleRate = 0xd8; // int32_t
		constexpr auto GrainTable = 0xe0; // TArray<FGrainTableEntry>
	}

	namespace n_USFPSACBaseInventory {
		constexpr auto FJacket = 0xb8; // ASFPSBaseItem*
		constexpr auto FTrous = 0xc0; // ASFPSBaseItem*
		constexpr auto FVest = 0xc8; // ASFPSBaseItem*
		constexpr auto FBackPack = 0xd0; // ASFPSBaseItem*
		constexpr auto FWeapon0 = 0xd8; // ASFPSWeapon*
		constexpr auto FWeapon1 = 0xe0; // ASFPSWeapon*
		constexpr auto FWeapon2 = 0xe8; // ASFPSWeapon*
		constexpr auto FHelmet = 0xf0; // ASFPSBaseItem*
		constexpr auto FMask = 0xf8; // ASFPSBaseItem*
		constexpr auto FGlasses = 0x100; // ASFPSBaseItem*
		constexpr auto FGloves = 0x108; // ASFPSBaseItem*
		constexpr auto FGadget0 = 0x110; // ASFPSBaseItem*
		constexpr auto FGadget1 = 0x118; // ASFPSBaseItem*
		constexpr auto FGadget2 = 0x120; // ASFPSBaseItem*
		constexpr auto FGadget3 = 0x128; // ASFPSBaseItem*
		constexpr auto QuickSlots = 0x130; // TArray<FSFPSQuickSlotParams>
		constexpr auto ActiveQuickSlot = 0x140; // int32_t
		constexpr auto LastActiveWeaponQuickSlot = 0x144; // int32_t
		constexpr auto bHoodOnHead = 0x148; // bool
	}

	namespace n_UParticleModuleColorOverLife {
		constexpr auto ColorOverLife = 0x30; // FRawDistributionVector
		constexpr auto AlphaOverLife = 0x78; // FRawDistributionFloat
		constexpr auto bClampAlpha = 0xa8; // char : 1
	}

	namespace n_UParticleModuleRotationRateMultiplyLife {
		constexpr auto LifeMultiplier = 0x30; // FRawDistributionFloat
	}

	namespace n_USubmixEffectFlexiverbPreset {
		constexpr auto Settings = 0xa0; // FSubmixEffectFlexiverbSettings
	}

	namespace n_UMaterialExpressionTangent {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Period = 0x54; // float
	}

	namespace n_UMovieSceneComponentMaterialTrack {
		constexpr auto MaterialIndex = 0xa8; // int32_t
	}

	namespace n_ASFPSGameplayArea {
		constexpr auto Encounters = 0x220; // TArray<USFPSACEncounter*>
		constexpr auto Missions = 0x230; // TArray<USFPSACMission*>
		constexpr auto Root = 0x250; // USceneComponent*
		constexpr auto ActiveMissions = 0x258; // TArray<USFPSACMission*>
		constexpr auto ReadyMissions = 0x268; // TArray<USFPSACMission*>
		constexpr auto ActiveEncounters = 0x278; // TArray<USFPSACEncounter*>
		constexpr auto MaxActiveEncounters = 0x288; // int32_t
		constexpr auto ActivationDelay = 0x28c; // int32_t
	}

	namespace n_UAISenseConfig_Damage {
		constexpr auto Implementation = 0x48; // UAISense_Damage*
	}

	namespace n_UMaterialExpressionPower {
		constexpr auto Base = 0x40; // FExpressionInput
		constexpr auto Exponent = 0x54; // FExpressionInput
		constexpr auto ConstExponent = 0x68; // float
	}

	namespace n_UConnectionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_ASFPSLocality {
		constexpr auto LocalityComponent = 0x220; // USFPSACLocality*
	}

	namespace n_UForceFeedbackEffect {
		constexpr auto ChannelDetails = 0x28; // TArray<FForceFeedbackChannelDetails>
		constexpr auto Duration = 0x38; // float
	}

	namespace n_UConstantQNRT {
		constexpr auto Settings = 0x78; // UConstantQNRTSettings*
	}

	namespace n_USFPSUserWidget_EquipItem {
		constexpr auto TagObject = 0x130; // TWeakObjectPtr<ASFPSBaseItem>
		constexpr auto FItemSlotType = 0x138; // ESFPSItemSlotType
		constexpr auto SpriteView = 0x140; // UObject*
	}

	namespace n_UMaterialExpressionSpeedTree {
		constexpr auto GeometryInput = 0x40; // FExpressionInput
		constexpr auto WindInput = 0x54; // FExpressionInput
		constexpr auto LODInput = 0x68; // FExpressionInput
		constexpr auto ExtraBendWS = 0x7c; // FExpressionInput
		constexpr auto GeometryType = 0x90; // ESpeedTreeGeometryType
		constexpr auto WindType = 0x91; // ESpeedTreeWindType
		constexpr auto LODType = 0x92; // ESpeedTreeLODType
		constexpr auto BillboardThreshold = 0x94; // float
		constexpr auto bAccurateWindVelocities = 0x98; // bool
	}

	namespace n_UVectorFieldStatic {
		constexpr auto SizeX = 0x48; // int32_t
		constexpr auto SizeY = 0x4c; // int32_t
		constexpr auto SizeZ = 0x50; // int32_t
		constexpr auto bAllowCPUAccess = 0x54; // bool
	}

	namespace n_ASkeletalMeshActor {
		constexpr auto bShouldDoAnimNotifies = 0x228; // char : 1
		constexpr auto bWakeOnLevelStart = 0x228; // char : 1
		constexpr auto SkeletalMeshComponent = 0x230; // USkeletalMeshComponent*
		constexpr auto ReplicatedMesh = 0x238; // USkeletalMesh*
		constexpr auto ReplicatedPhysAsset = 0x240; // UPhysicsAsset*
		constexpr auto ReplicatedMaterial0 = 0x248; // UMaterialInterface*
		constexpr auto ReplicatedMaterial1 = 0x250; // UMaterialInterface*
	}

	namespace n_UTimeSynchronizationSource {
		constexpr auto bUseForSynchronization = 0x28; // bool
		constexpr auto FrameOffset = 0x2c; // int32_t
	}

	namespace n_UARPlaneComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARPlaneUpdatePayload
	}

	namespace n_UMaterialFunction {
		constexpr auto Description = 0x40; // FString
		constexpr auto bExposeToLibrary = 0x50; // char : 1
		constexpr auto bPrefixParameterNames = 0x50; // char : 1
	}

	namespace n_AGeometryCacheActor {
		constexpr auto GeometryCacheComponent = 0x220; // UGeometryCacheComponent*
	}

	namespace n_ASFPSWheeledVehicle {
		constexpr auto PassengerExitPoints = 0x2d8; // FVector [0x4]
		constexpr auto PassengerAttachPoints = 0x308; // FVector [0x4]
		constexpr auto VehicleName = 0x3e0; // FText
		constexpr auto CollisionSweepDistance = 0x3f8; // float
		constexpr auto CollisionSweepTime = 0x3fc; // float
		constexpr auto GreenArea = 0x400; // AActor*
		constexpr auto LastDriver = 0x408; // ASFPSBaseCharacter*
		constexpr auto Passengers = 0x410; // ASFPSBaseCharacter* [0x4]
		constexpr auto InventorySize = 0x430; // int32_t
		constexpr auto Inventory = 0x438; // TArray<ASFPSBaseItem*>
		constexpr auto VehicleSoundSystem = 0x448; // USFPSACVehicleSoundSystem*
		constexpr auto MaxDurability = 0x450; // int32_t
		constexpr auto Params = 0x454; // FSFPSVehicleParams
		constexpr auto bIsDying = 0x458; // bool
		constexpr auto SightPoints = 0x460; // TArray<FVector>
		constexpr auto CameraAttachPoint = 0x474; // FVector
		constexpr auto CameraDistance = 0x480; // float
	}

	namespace n_USoundNodeRandom {
		constexpr auto Weights = 0x48; // TArray<float>
		constexpr auto HasBeenUsed = 0x58; // TArray<bool>
		constexpr auto NumRandomUsed = 0x68; // int32_t
		constexpr auto PreselectAtLevelLoad = 0x6c; // int32_t
		constexpr auto bShouldExcludeFromBranchCulling = 0x70; // char : 1
		constexpr auto bSoundCueExcludedFromBranchCulling = 0x70; // char : 1
		constexpr auto bRandomizeWithoutReplacement = 0x70; // char : 1
	}

	namespace n_ABM_Stairs_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UParticleModuleLocationEmitterDirect {
		constexpr auto EmitterName = 0x30; // FName
	}

	namespace n_UBlackboardKeyType_Object {
		constexpr auto BaseClass = 0x30; // UObject*
	}

	namespace n_UParticleModuleKillBox {
		constexpr auto LowerLeftCorner = 0x30; // FRawDistributionVector
		constexpr auto UpperRightCorner = 0x78; // FRawDistributionVector
		constexpr auto bAbsolute = 0xc0; // char : 1
		constexpr auto bKillInside = 0xc0; // char : 1
		constexpr auto bAxisAlignedAndFixedSize = 0xc0; // char : 1
	}

	namespace n_UParticleLODLevel {
		constexpr auto Level = 0x28; // int32_t
		constexpr auto bEnabled = 0x2c; // char : 1
		constexpr auto RequiredModule = 0x30; // UParticleModuleRequired*
		constexpr auto Modules = 0x38; // TArray<UParticleModule*>
		constexpr auto TypeDataModule = 0x48; // UParticleModuleTypeDataBase*
		constexpr auto SpawnModule = 0x50; // UParticleModuleSpawn*
		constexpr auto EventGenerator = 0x58; // UParticleModuleEventGenerator*
		constexpr auto SpawningModules = 0x60; // TArray<UParticleModuleSpawnBase*>
		constexpr auto SpawnModules = 0x70; // TArray<UParticleModule*>
		constexpr auto UpdateModules = 0x80; // TArray<UParticleModule*>
		constexpr auto OrbitModules = 0x90; // TArray<UParticleModuleOrbit*>
		constexpr auto EventReceiverModules = 0xa0; // TArray<UParticleModuleEventReceiverBase*>
		constexpr auto ConvertedModules = 0xb0; // char : 1
		constexpr auto PeakActiveParticles = 0xb4; // int32_t
	}

	namespace n_UMaterialExpressionDistanceFieldsRenderingSwitch {
		constexpr auto No = 0x40; // FExpressionInput
		constexpr auto Yes = 0x54; // FExpressionInput
	}

	namespace n_UCompositeCurveTable {
		constexpr auto ParentTables = 0xa0; // TArray<UCurveTable*>
		constexpr auto OldParentTables = 0xb0; // TArray<UCurveTable*>
	}

	namespace n_USFPSACCraftKit {
		constexpr auto LocationCraftItem = 0xb0; // ASFPSBaseLocationCraftItem*
	}

	namespace n_USFPSAI_TSetSightResolution {
		constexpr auto Resolution = 0x70; // float
	}

	namespace n_USoundNodeGroupControl {
		constexpr auto GroupSizes = 0x48; // TArray<int32_t>
	}

	namespace n_UBuildPatchManifest {
		constexpr auto ManifestFileVersion = 0x28; // char
		constexpr auto bIsFileData = 0x29; // bool
		constexpr auto AppID = 0x2c; // uint32_t
		constexpr auto AppName = 0x30; // FString
		constexpr auto BuildVersion = 0x40; // FString
		constexpr auto LaunchExe = 0x50; // FString
		constexpr auto LaunchCommand = 0x60; // FString
		constexpr auto PrereqIds = 0x70; // TSet<FString>
		constexpr auto PrereqName = 0xc0; // FString
		constexpr auto PrereqPath = 0xd0; // FString
		constexpr auto PrereqArgs = 0xe0; // FString
		constexpr auto FileManifestList = 0xf0; // TArray<FFileManifestData>
		constexpr auto ChunkList = 0x100; // TArray<FChunkInfoData>
		constexpr auto CustomFields = 0x110; // TArray<FCustomFieldData>
	}

	namespace n_USpectatorPawnMovement {
		constexpr auto bIgnoreTimeDilation = 0x150; // char : 1
	}

	namespace n_UDcxVehicleNoDriveComponent {
		constexpr auto bUseRawInput = 0x240; // bool
		constexpr auto MaxDriveTorque = 0x244; // float
	}

	namespace n_UBookMark {
		constexpr auto Location = 0x28; // FVector
		constexpr auto Rotation = 0x34; // FRotator
		constexpr auto HiddenLevels = 0x40; // TArray<FString>
	}

	namespace n_USFPSUserWidget_SpriteViewInv {
		constexpr auto DblClickTimer = 0x2e4; // float
	}

	namespace n_UMaterialExpressionShadingModel {
		constexpr auto ShadingModel = 0x40; // EMaterialShadingModel
	}

	namespace n_UMovieScene3DAttachSection {
		constexpr auto AttachSocketName = 0x118; // FName
		constexpr auto AttachComponentName = 0x120; // FName
		constexpr auto AttachmentLocationRule = 0x128; // EAttachmentRule
		constexpr auto AttachmentRotationRule = 0x129; // EAttachmentRule
		constexpr auto AttachmentScaleRule = 0x12a; // EAttachmentRule
		constexpr auto DetachmentLocationRule = 0x12b; // EDetachmentRule
		constexpr auto DetachmentRotationRule = 0x12c; // EDetachmentRule
		constexpr auto DetachmentScaleRule = 0x12d; // EDetachmentRule
	}

	namespace n_At_FireArm_C {
		constexpr auto Trace = 0x7d0; // UBoxComponent*
		constexpr auto Mesh = 0x7d8; // USkeletalMeshComponent*
	}

	namespace n_UActorComponent {
		constexpr auto PrimaryComponentTick = 0x30; // FActorComponentTickFunction
		constexpr auto ComponentTags = 0x60; // TArray<FName>
		constexpr auto AssetUserData = 0x70; // TArray<UAssetUserData*>
		constexpr auto UCSSerializationIndex = 0x84; // int32_t
		constexpr auto bNetAddressable = 0x88; // char : 1
		constexpr auto bReplicates = 0x88; // char : 1
		constexpr auto bAutoActivate = 0x89; // char : 1
		constexpr auto bIsActive = 0x8a; // char : 1
		constexpr auto bEditableWhenInherited = 0x8a; // char : 1
		constexpr auto bCanEverAffectNavigation = 0x8a; // char : 1
		constexpr auto bIsEditorOnly = 0x8a; // char : 1
		constexpr auto CreationMethod = 0x8c; // EComponentCreationMethod
		constexpr auto OnComponentActivated = 0x8d; // FMulticastSparseDelegate
		constexpr auto OnComponentDeactivated = 0x8e; // FMulticastSparseDelegate
		constexpr auto UCSModifiedProperties = 0x90; // TArray<FSimpleMemberReference>
	}

	namespace n_UMovieSceneByteSection {
		constexpr auto ByteCurve = 0xf0; // FMovieSceneByteChannel
	}

	namespace n_UInAppPurchaseCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleSpawnPerUnit {
		constexpr auto UnitScalar = 0x38; // float
		constexpr auto MovementTolerance = 0x3c; // float
		constexpr auto SpawnPerUnit = 0x40; // FRawDistributionFloat
		constexpr auto MaxFrameDistance = 0x70; // float
		constexpr auto bIgnoreSpawnRateWhenMoving = 0x74; // char : 1
		constexpr auto bIgnoreMovementAlongX = 0x74; // char : 1
		constexpr auto bIgnoreMovementAlongY = 0x74; // char : 1
		constexpr auto bIgnoreMovementAlongZ = 0x74; // char : 1
	}

	namespace n_UParticleModuleOrientationAxisLock {
		constexpr auto LockAxisFlags = 0x30; // EParticleAxisLock
	}

	namespace n_USoundNode {
		constexpr auto ChildNodes = 0x28; // TArray<USoundNode*>
	}

	namespace n_ULevelStreaming {
		constexpr auto WorldAsset = 0x28; // TSoftObjectPtr<UWorld>
		constexpr auto PackageNameToLoad = 0x50; // FName
		constexpr auto LODPackageNames = 0x58; // TArray<FName>
		constexpr auto LevelTransform = 0x80; // FTransform
		constexpr auto LevelLODIndex = 0xb0; // int32_t
		constexpr auto StreamingPriority = 0xb4; // int32_t
		constexpr auto bShouldBeVisible = 0xba; // char : 1
		constexpr auto bShouldBeLoaded = 0xba; // char : 1
		constexpr auto bLocked = 0xba; // char : 1
		constexpr auto bIsStatic = 0xba; // char : 1
		constexpr auto bShouldBlockOnLoad = 0xba; // char : 1
		constexpr auto bShouldBlockOnUnload = 0xbb; // char : 1
		constexpr auto bDisableDistanceStreaming = 0xbb; // char : 1
		constexpr auto bDrawOnLevelStatusMap = 0xbb; // char : 1
		constexpr auto LevelColor = 0xbc; // FLinearColor
		constexpr auto EditorStreamingVolumes = 0xd0; // TArray<ALevelStreamingVolume*>
		constexpr auto MinTimeBetweenVolumeUnloadRequests = 0xe0; // float
		constexpr auto OnLevelLoaded = 0xe8; // FMulticastInlineDelegate
		constexpr auto OnLevelUnloaded = 0xf8; // FMulticastInlineDelegate
		constexpr auto OnLevelShown = 0x108; // FMulticastInlineDelegate
		constexpr auto OnLevelHidden = 0x118; // FMulticastInlineDelegate
		constexpr auto LoadedLevel = 0x128; // ULevel*
		constexpr auto PendingUnloadLevel = 0x130; // ULevel*
	}

	namespace n_UPhysicsConstraintTemplate {
		constexpr auto DefaultInstance = 0x28; // FConstraintInstance
		constexpr auto ProfileHandles = 0x1f0; // TArray<FPhysicsConstraintProfileHandle>
		constexpr auto DefaultProfile = 0x200; // FConstraintProfileProperties
	}

	namespace n_UReplaySubsystem {
		constexpr auto bLoadDefaultMapOnStop = 0x30; // bool
	}

	namespace n_UBlackboardComponent {
		constexpr auto BrainComp = 0xb0; // UBrainComponent*
		constexpr auto DefaultBlackboardAsset = 0xb8; // UBlackboardData*
		constexpr auto BlackboardAsset = 0xc0; // UBlackboardData*
		constexpr auto KeyInstances = 0xe8; // TArray<UBlackboardKeyType*>
	}

	namespace n_UBTTask_MoveDirectlyToward {
		constexpr auto bDisablePathUpdateOnGoalLocationChange = 0xb0; // char : 1
		constexpr auto bProjectVectorGoalToNavigation = 0xb0; // char : 1
		constexpr auto bUpdatedDeprecatedProperties = 0xb0; // char : 1
	}

	namespace n_Ascope_opt_hamr_4x_empty_C {
		constexpr auto hamr_4x_reticles = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UFontFace {
		constexpr auto SourceFilename = 0x30; // FString
		constexpr auto Hinting = 0x40; // EFontHinting
		constexpr auto LoadingPolicy = 0x41; // EFontLoadingPolicy
		constexpr auto LayoutMethod = 0x42; // EFontLayoutMethod
	}

	namespace n_UMaterialExpressionReroute {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_USFPSLootLibrary {
		constexpr auto LootSpawners = 0x28; // TArray<FSFPSLootList>
		constexpr auto BoxSpawners = 0x38; // TArray<FSFPSLootList>
		constexpr auto Missions = 0x48; // TArray<FSFPSLootList>
		constexpr auto Mobs = 0x58; // TArray<FSFPSLootList>
	}

	namespace n_UInstancedStaticMeshComponent {
		constexpr auto PerInstanceSMData = 0x4e0; // TArray<FInstancedStaticMeshInstanceData>
		constexpr auto NumCustomDataFloats = 0x4f0; // int32_t
		constexpr auto PerInstanceSMCustomData = 0x4f8; // TArray<float>
		constexpr auto InstancingRandomSeed = 0x508; // int32_t
		constexpr auto InstanceStartCullDistance = 0x50c; // int32_t
		constexpr auto InstanceEndCullDistance = 0x510; // int32_t
		constexpr auto InstanceReorderTable = 0x518; // TArray<int32_t>
		constexpr auto NumPendingLightmaps = 0x570; // int32_t
		constexpr auto CachedMappings = 0x578; // TArray<FInstancedStaticMeshMappingInfo>
	}

	namespace n_USourceEffectMidSideSpreaderPreset {
		constexpr auto Settings = 0x98; // FSourceEffectMidSideSpreaderSettings
	}

	namespace n_UBoxFalloff {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto MinRange = 0xb4; // float
		constexpr auto MaxRange = 0xb8; // float
		constexpr auto Default = 0xbc; // float
		constexpr auto Transform = 0xc0; // FTransform
		constexpr auto Falloff = 0xf0; // EFieldFalloffType
	}

	namespace n_USoundNodeBranch {
		constexpr auto BoolParameterName = 0x48; // FName
	}

	namespace n_UMovieSceneEnumSection {
		constexpr auto EnumCurve = 0xf0; // FMovieSceneByteChannel
	}

	namespace n_UAnimCompress_PerTrackCompression {
		constexpr auto MaxZeroingThreshold = 0x60; // float
		constexpr auto MaxPosDiffBitwise = 0x64; // float
		constexpr auto MaxAngleDiffBitwise = 0x68; // float
		constexpr auto MaxScaleDiffBitwise = 0x6c; // float
		constexpr auto AllowedRotationFormats = 0x70; // TArray<AnimationCompressionFormat>
		constexpr auto AllowedTranslationFormats = 0x80; // TArray<AnimationCompressionFormat>
		constexpr auto AllowedScaleFormats = 0x90; // TArray<AnimationCompressionFormat>
		constexpr auto bResampleAnimation = 0xa0; // char : 1
		constexpr auto ResampledFramerate = 0xa4; // float
		constexpr auto MinKeysForResampling = 0xa8; // int32_t
		constexpr auto bUseAdaptiveError = 0xac; // char : 1
		constexpr auto bUseOverrideForEndEffectors = 0xac; // char : 1
		constexpr auto TrackHeightBias = 0xb0; // int32_t
		constexpr auto ParentingDivisor = 0xb4; // float
		constexpr auto ParentingDivisorExponent = 0xb8; // float
		constexpr auto bUseAdaptiveError2 = 0xbc; // char : 1
		constexpr auto RotationErrorSourceRatio = 0xc0; // float
		constexpr auto TranslationErrorSourceRatio = 0xc4; // float
		constexpr auto ScaleErrorSourceRatio = 0xc8; // float
		constexpr auto MaxErrorPerTrackRatio = 0xcc; // float
		constexpr auto PerturbationProbeSize = 0xd0; // float
	}

	namespace n_USFPSACItemInventory {
		constexpr auto FInventorySize = 0xb0; // int32_t
		constexpr auto BackPack_WeaponTransferCount = 0xb4; // int32_t
		constexpr auto FInventory = 0xb8; // TArray<AActor*>
	}

	namespace n_UInputAxisDelegateBinding {
		constexpr auto InputAxisDelegateBindings = 0x28; // TArray<FBlueprintInputAxisDelegateBinding>
	}

	namespace n_UMovieSceneCameraShakeTrack {
		constexpr auto CameraShakeSections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_UGizmoArrowComponent {
		constexpr auto Direction = 0x470; // FVector
		constexpr auto Gap = 0x47c; // float
		constexpr auto Length = 0x480; // float
		constexpr auto Thickness = 0x484; // float
	}

	namespace n_UPaperSprite {
		constexpr auto AdditionalSourceTextures = 0x38; // TArray<UTexture*>
		constexpr auto BakedSourceUV = 0x48; // FVector2D
		constexpr auto BakedSourceDimension = 0x50; // FVector2D
		constexpr auto BakedSourceTexture = 0x58; // UTexture2D*
		constexpr auto DefaultMaterial = 0x60; // UMaterialInterface*
		constexpr auto AlternateMaterial = 0x68; // UMaterialInterface*
		constexpr auto Sockets = 0x70; // TArray<FPaperSpriteSocket>
		constexpr auto SpriteCollisionDomain = 0x80; // ESpriteCollisionMode
		constexpr auto PixelsPerUnrealUnit = 0x84; // float
		constexpr auto BodySetup = 0x88; // UBodySetup*
		constexpr auto AlternateMaterialSplitIndex = 0x90; // int32_t
		constexpr auto BakedRenderData = 0x98; // TArray<FVector4>
	}

	namespace n_UAnimSet {
		constexpr auto bAnimRotationOnly = 0x28; // char : 1
		constexpr auto TrackBoneNames = 0x30; // TArray<FName>
		constexpr auto LinkupCache = 0x40; // TArray<FAnimSetMeshLinkup>
		constexpr auto BoneUseAnimTranslation = 0x50; // TArray<char>
		constexpr auto ForceUseMeshTranslation = 0x60; // TArray<char>
		constexpr auto UseTranslationBoneNames = 0x70; // TArray<FName>
		constexpr auto ForceMeshTranslationBoneNames = 0x80; // TArray<FName>
		constexpr auto PreviewSkelMeshName = 0x90; // FName
		constexpr auto BestRatioSkelMeshName = 0x98; // FName
	}

	namespace n_USoundNodeDoppler {
		constexpr auto DopplerIntensity = 0x48; // float
		constexpr auto bUseSmoothing = 0x4c; // bool
		constexpr auto SmoothingInterpSpeed = 0x50; // float
	}

	namespace n_UNetAnalyticsAggregatorConfig {
		constexpr auto NetAnalyticsData = 0x28; // TArray<FNetAnalyticsDataConfig>
	}

	namespace n_UDragDropOperation {
		constexpr auto Tag = 0x28; // FString
		constexpr auto Payload = 0x38; // UObject*
		constexpr auto DefaultDragVisual = 0x40; // UWidget*
		constexpr auto Pivot = 0x48; // EDragPivot
		constexpr auto Offset = 0x4c; // FVector2D
		constexpr auto OnDrop = 0x58; // FMulticastInlineDelegate
		constexpr auto OnDragCancelled = 0x68; // FMulticastInlineDelegate
		constexpr auto OnDragged = 0x78; // FMulticastInlineDelegate
	}

	namespace n_USkeletalMeshSocket {
		constexpr auto SocketName = 0x28; // FName
		constexpr auto BoneName = 0x30; // FName
		constexpr auto RelativeLocation = 0x38; // FVector
		constexpr auto RelativeRotation = 0x44; // FRotator
		constexpr auto RelativeScale = 0x50; // FVector
		constexpr auto bForceAlwaysAnimated = 0x5c; // bool
	}

	namespace n_ALevelVariantSetsActor {
		constexpr auto LevelVariantSets = 0x220; // FSoftObjectPath
		constexpr auto DirectorInstances = 0x238; // TMap<UObject*, ULevelVariantSetsFunctionDirector*>
	}

	namespace n_UTextureRenderTargetCube {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto ClearColor = 0x184; // FLinearColor
		constexpr auto OverrideFormat = 0x194; // EPixelFormat
		constexpr auto bHDR = 0x195; // char : 1
		constexpr auto bForceLinearGamma = 0x195; // char : 1
	}

	namespace n_USoundSimple {
		constexpr auto Variations = 0x170; // TArray<FSoundVariation>
		constexpr auto SoundWave = 0x180; // USoundWave*
	}

	namespace n_URestrictedGameplayTagsList {
		constexpr auto ConfigFileName = 0x28; // FString
		constexpr auto RestrictedGameplayTagList = 0x38; // TArray<FRestrictedGameplayTagTableRow>
	}

	namespace n_Aweapon_firearms_rifle_groza_C {
		constexpr auto SightClose = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f0; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7f8; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x800; // UStaticMeshComponent*
	}

	namespace n_UMovieSceneSequenceTickManager {
		constexpr auto SequenceActors = 0x28; // TArray<FMovieSceneSequenceActorPointers>
		constexpr auto Linker = 0x38; // UMovieSceneEntitySystemLinker*
	}

	namespace n_UMovieSceneCameraShakeSourceTriggerTrack {
		constexpr auto Sections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_UUserInterfaceSettings {
		constexpr auto RenderFocusRule = 0x38; // ERenderFocusRule
		constexpr auto HardwareCursors = 0x40; // TMap<EMouseCursor, FHardwareCursorReference>
		constexpr auto SoftwareCursors = 0x90; // TMap<EMouseCursor, FSoftClassPath>
		constexpr auto DefaultCursor = 0xe0; // FSoftClassPath
		constexpr auto TextEditBeamCursor = 0xf8; // FSoftClassPath
		constexpr auto CrosshairsCursor = 0x110; // FSoftClassPath
		constexpr auto HandCursor = 0x128; // FSoftClassPath
		constexpr auto GrabHandCursor = 0x140; // FSoftClassPath
		constexpr auto GrabHandClosedCursor = 0x158; // FSoftClassPath
		constexpr auto SlashedCircleCursor = 0x170; // FSoftClassPath
		constexpr auto ApplicationScale = 0x188; // float
		constexpr auto UIScaleRule = 0x18c; // EUIScalingRule
		constexpr auto CustomScalingRuleClass = 0x190; // FSoftClassPath
		constexpr auto UIScaleCurve = 0x1a8; // FRuntimeFloatCurve
		constexpr auto bAllowHighDPIInGameMode = 0x230; // bool
		constexpr auto DesignScreenSize = 0x234; // FIntPoint
		constexpr auto bLoadWidgetsOnDedicatedServer = 0x23c; // bool
		constexpr auto CursorClasses = 0x240; // TArray<UObject*>
		constexpr auto CustomScalingRuleClassInstance = 0x250; // UObject*
		constexpr auto CustomScalingRule = 0x258; // UDPICustomScalingRule*
	}

	namespace n_UInputRouter {
		constexpr auto bAutoInvalidateOnHover = 0x28; // bool
		constexpr auto bAutoInvalidateOnCapture = 0x29; // bool
		constexpr auto ActiveInputBehaviors = 0x38; // UInputBehaviorSet*
	}

	namespace n_APlayerState {
		constexpr auto Score = 0x220; // float
		constexpr auto PlayerId = 0x224; // int32_t
		constexpr auto Ping = 0x228; // char
		constexpr auto bShouldUpdateReplicatedPing = 0x22a; // char : 1
		constexpr auto bIsSpectator = 0x22a; // char : 1
		constexpr auto bOnlySpectator = 0x22a; // char : 1
		constexpr auto bIsABot = 0x22a; // char : 1
		constexpr auto bIsInactive = 0x22a; // char : 1
		constexpr auto bFromPreviousLevel = 0x22a; // char : 1
		constexpr auto StartTime = 0x22c; // int32_t
		constexpr auto EngineMessageClass = 0x230; // ULocalMessage*
		constexpr auto SavedNetworkAddress = 0x240; // FString
		constexpr auto UniqueId = 0x250; // FUniqueNetIdRepl
		constexpr auto PawnPrivate = 0x280; // APawn*
		constexpr auto PlayerNamePrivate = 0x300; // FString
	}

	namespace n_UParticleModuleLocationSkelVertSurface {
		constexpr auto SourceType = 0x30; // ELocationSkelVertSurfaceSource
		constexpr auto UniversalOffset = 0x34; // FVector
		constexpr auto bUpdatePositionEachFrame = 0x40; // char : 1
		constexpr auto bOrientMeshEmitters = 0x40; // char : 1
		constexpr auto bInheritBoneVelocity = 0x40; // char : 1
		constexpr auto InheritVelocityScale = 0x44; // float
		constexpr auto SkelMeshActorParamName = 0x48; // FName
		constexpr auto ValidAssociatedBones = 0x50; // TArray<FName>
		constexpr auto bEnforceNormalCheck = 0x60; // char : 1
		constexpr auto NormalToCompare = 0x64; // FVector
		constexpr auto NormalCheckToleranceDegrees = 0x70; // float
		constexpr auto NormalCheckTolerance = 0x74; // float
		constexpr auto ValidMaterialIndices = 0x78; // TArray<int32_t>
		constexpr auto bInheritVertexColor = 0x88; // char : 1
		constexpr auto bInheritUV = 0x88; // char : 1
		constexpr auto InheritUVChannel = 0x8c; // uint32_t
	}

	namespace n_USFPSAI_TChangePose {
		constexpr auto Pose = 0x70; // ESFPSCharacterPose
	}

	namespace n_URadialIntMask {
		constexpr auto Radius = 0xb0; // float
		constexpr auto Position = 0xb4; // FVector
		constexpr auto InteriorValue = 0xc0; // int32_t
		constexpr auto ExteriorValue = 0xc4; // int32_t
		constexpr auto SetMaskCondition = 0xc8; // ESetMaskConditionType
	}

	namespace n_UHapticFeedbackEffect_SoundWave {
		constexpr auto SoundWave = 0x28; // USoundWave*
	}

	namespace n_AExponentialHeightFog {
		constexpr auto Component = 0x220; // UExponentialHeightFogComponent*
		constexpr auto bEnabled = 0x228; // char : 1
	}

	namespace n_USFPSACTrader {
		constexpr auto TradeList = 0xb0; // USFPSTradeList*
		constexpr auto TradeListRef = 0xb8; // USFPSTradeList*
	}

	namespace n_UChaosGameplayEventDispatcher {
		constexpr auto CollisionEventRegistrations = 0x1c8; // TMap<UPrimitiveComponent*, FChaosHandlerSet>
		constexpr auto BreakEventRegistrations = 0x218; // TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper>
	}

	namespace n_UBrushBuilder {
		constexpr auto BitmapFilename = 0x28; // FString
		constexpr auto ToolTip = 0x38; // FString
		constexpr auto NotifyBadParams = 0x48; // char : 1
		constexpr auto Vertices = 0x50; // TArray<FVector>
		constexpr auto Polys = 0x60; // TArray<FBuilderPoly>
		constexpr auto Layer = 0x70; // FName
		constexpr auto MergeCoplanars = 0x78; // char : 1
	}

	namespace n_UCurveLinearColorAtlas {
		constexpr auto TextureSize = 0x1a0; // uint32_t
		constexpr auto bSquareResolution = 0x1a4; // char : 1
		constexpr auto TextureHeight = 0x1a8; // uint32_t
		constexpr auto GradientCurves = 0x1b0; // TArray<UCurveLinearColor*>
	}

	namespace n_UTextLayoutWidget {
		constexpr auto ShapedTextOptions = 0x108; // FShapedTextOptions
		constexpr auto Justification = 0x10b; // ETextJustify
		constexpr auto WrappingPolicy = 0x10c; // ETextWrappingPolicy
		constexpr auto AutoWrapText = 0x10d; // char : 1
		constexpr auto WrapTextAt = 0x110; // float
		constexpr auto Margin = 0x114; // FMargin
		constexpr auto LineHeightPercentage = 0x124; // float
	}

	namespace n_UMovieSceneSignedObject {
		constexpr auto Signature = 0x28; // FGuid
	}

	namespace n_URandomVector {
		constexpr auto Magnitude = 0xb0; // float
	}

	namespace n_UShadowMapTexture2D {
		constexpr auto ShadowmapFlags = 0x1a0; // EShadowMapFlags
	}

	namespace n_ALandscapeProxy {
		constexpr auto SplineComponent = 0x220; // ULandscapeSplinesComponent*
		constexpr auto LandscapeGuid = 0x228; // FGuid
		constexpr auto LandscapeSectionOffset = 0x238; // FIntPoint
		constexpr auto MaxLODLevel = 0x240; // int32_t
		constexpr auto LODDistanceFactor = 0x244; // float
		constexpr auto LODFalloff = 0x248; // ELandscapeLODFalloff
		constexpr auto ComponentScreenSizeToUseSubSections = 0x24c; // float
		constexpr auto LOD0ScreenSize = 0x250; // float
		constexpr auto LOD0DistributionSetting = 0x254; // float
		constexpr auto LODDistributionSetting = 0x258; // float
		constexpr auto TessellationComponentScreenSize = 0x25c; // float
		constexpr auto UseTessellationComponentScreenSizeFalloff = 0x260; // bool
		constexpr auto TessellationComponentScreenSizeFalloff = 0x264; // float
		constexpr auto OccluderGeometryLOD = 0x268; // int32_t
		constexpr auto StaticLightingLOD = 0x26c; // int32_t
		constexpr auto DefaultPhysMaterial = 0x270; // UPhysicalMaterial*
		constexpr auto StreamingDistanceMultiplier = 0x278; // float
		constexpr auto LandscapeMaterial = 0x280; // UMaterialInterface*
		constexpr auto LandscapeHoleMaterial = 0x2a8; // UMaterialInterface*
		constexpr auto LandscapeMaterialsOverride = 0x2b0; // TArray<FLandscapeProxyMaterialOverride>
		constexpr auto bMeshHoles = 0x2c0; // bool
		constexpr auto MeshHolesMaxLod = 0x2c1; // char
		constexpr auto RuntimeVirtualTextures = 0x2c8; // TArray<URuntimeVirtualTexture*>
		constexpr auto VirtualTextureNumLods = 0x2d8; // int32_t
		constexpr auto VirtualTextureLodBias = 0x2dc; // int32_t
		constexpr auto VirtualTextureRenderPassType = 0x2e0; // ERuntimeVirtualTextureMainPassType
		constexpr auto NegativeZBoundsExtension = 0x2e4; // float
		constexpr auto PositiveZBoundsExtension = 0x2e8; // float
		constexpr auto LandscapeComponents = 0x2f0; // TArray<ULandscapeComponent*>
		constexpr auto CollisionComponents = 0x300; // TArray<ULandscapeHeightfieldCollisionComponent*>
		constexpr auto FoliageComponents = 0x310; // TArray<UHierarchicalInstancedStaticMeshComponent*>
		constexpr auto bHasLandscapeGrass = 0x384; // bool
		constexpr auto StaticLightingResolution = 0x388; // float
		constexpr auto CastShadow = 0x38c; // char : 1
		constexpr auto bCastDynamicShadow = 0x38c; // char : 1
		constexpr auto bCastStaticShadow = 0x38c; // char : 1
		constexpr auto bCastFarShadow = 0x390; // char : 1
		constexpr auto bCastHiddenShadow = 0x394; // char : 1
		constexpr auto bCastShadowAsTwoSided = 0x398; // char : 1
		constexpr auto bAffectDistanceFieldLighting = 0x39c; // char : 1
		constexpr auto LightingChannels = 0x39d; // FLightingChannels
		constexpr auto bUseMaterialPositionOffsetInStaticLighting = 0x3a0; // char : 1
		constexpr auto bRenderCustomDepth = 0x3a0; // char : 1
		constexpr auto CustomDepthStencilWriteMask = 0x3a4; // ERendererStencilMask
		constexpr auto CustomDepthStencilValue = 0x3a8; // int32_t
		constexpr auto LDMaxDrawDistance = 0x3ac; // float
		constexpr auto LightmassSettings = 0x3b0; // FLightmassPrimitiveSettings
		constexpr auto CollisionMipLevel = 0x3c8; // int32_t
		constexpr auto SimpleCollisionMipLevel = 0x3cc; // int32_t
		constexpr auto CollisionThickness = 0x3d0; // float
		constexpr auto BodyInstance = 0x3d8; // FBodyInstance
		constexpr auto bGenerateOverlapEvents = 0x530; // char : 1
		constexpr auto bBakeMaterialPositionOffsetIntoCollision = 0x530; // char : 1
		constexpr auto ComponentSizeQuads = 0x534; // int32_t
		constexpr auto SubsectionSizeQuads = 0x538; // int32_t
		constexpr auto NumSubsections = 0x53c; // int32_t
		constexpr auto bUsedForNavigation = 0x540; // char : 1
		constexpr auto bFillCollisionUnderLandscapeForNavmesh = 0x540; // char : 1
		constexpr auto bUseDynamicMaterialInstance = 0x544; // bool
		constexpr auto NavigationGeometryGatheringMode = 0x545; // ENavDataGatheringMode
		constexpr auto bUseLandscapeForCullingInvisibleHLODVertices = 0x546; // bool
		constexpr auto bHasLayersContent = 0x547; // bool
		constexpr auto WeightmapUsageMap = 0x548; // TMap<UTexture2D*, ULandscapeWeightmapUsage*>
	}

	namespace n_UInputSettings {
		constexpr auto AxisConfig = 0x28; // TArray<FInputAxisConfigEntry>
		constexpr auto bAltEnterTogglesFullscreen = 0x38; // char : 1
		constexpr auto bF11TogglesFullscreen = 0x38; // char : 1
		constexpr auto bUseMouseForTouch = 0x38; // char : 1
		constexpr auto bEnableMouseSmoothing = 0x38; // char : 1
		constexpr auto bEnableFOVScaling = 0x38; // char : 1
		constexpr auto bCaptureMouseOnLaunch = 0x38; // char : 1
		constexpr auto bDefaultViewportMouseLock = 0x38; // char : 1
		constexpr auto bAlwaysShowTouchInterface = 0x38; // char : 1
		constexpr auto bShowConsoleOnFourFingerTap = 0x39; // char : 1
		constexpr auto bEnableGestureRecognizer = 0x39; // char : 1
		constexpr auto bUseAutocorrect = 0x3a; // bool
		constexpr auto ExcludedAutocorrectOS = 0x40; // TArray<FString>
		constexpr auto ExcludedAutocorrectCultures = 0x50; // TArray<FString>
		constexpr auto ExcludedAutocorrectDeviceModels = 0x60; // TArray<FString>
		constexpr auto DefaultViewportMouseCaptureMode = 0x70; // EMouseCaptureMode
		constexpr auto DefaultViewportMouseLockMode = 0x71; // EMouseLockMode
		constexpr auto FOVScale = 0x74; // float
		constexpr auto DoubleClickTime = 0x78; // float
		constexpr auto ActionMappings = 0x80; // TArray<FInputActionKeyMapping>
		constexpr auto AxisMappings = 0x90; // TArray<FInputAxisKeyMapping>
		constexpr auto SpeechMappings = 0xa0; // TArray<FInputActionSpeechMapping>
		constexpr auto DefaultPlayerInputClass = 0xb0; // TSoftClassPtr<UObject>
		constexpr auto DefaultInputComponentClass = 0xd8; // TSoftClassPtr<UObject>
		constexpr auto DefaultTouchInterface = 0x100; // FSoftObjectPath
		constexpr auto ConsoleKey = 0x118; // FKey
		constexpr auto ConsoleKeys = 0x130; // TArray<FKey>
	}

	namespace n_AM_TripwireTrap_01_C {
		constexpr auto Interaction = 0x358; // UBoxComponent*
		constexpr auto GrenadeCollision = 0x360; // UBoxComponent*
		constexpr auto ExplosionCollision = 0x368; // UBoxComponent*
		constexpr auto ACTripwireTrap = 0x370; // USFPSACTripwireTrap*
		constexpr auto SFPSACBaseCollision1 = 0x378; // USFPSACBaseCollision*
	}

	namespace n_UEditableGameplayTagQueryExpression_AllTagsMatch {
		constexpr auto Tags = 0x28; // FGameplayTagContainer
	}

	namespace n_USFPSSoundHandler {
		constexpr auto AmbientSoundManager = 0x28; // USFPSAmbientSoundManager*
	}

	namespace n_UMovieSceneSkeletalAnimationTrack {
		constexpr auto AnimationSections = 0x98; // TArray<UMovieSceneSection*>
		constexpr auto bUseLegacySectionIndexBlend = 0xa8; // bool
		constexpr auto RootMotionParams = 0xb0; // FMovieSceneSkeletalAnimRootMotionTrackParams
		constexpr auto bBlendFirstChildOfRoot = 0xe0; // bool
	}

	namespace n_UPanelSlot {
		constexpr auto Parent = 0x28; // UPanelWidget*
		constexpr auto Content = 0x30; // UWidget*
	}

	namespace n_UCameraShakeSourceComponent {
		constexpr auto Attenuation = 0x1f8; // ECameraShakeAttenuation
		constexpr auto InnerAttenuationRadius = 0x1fc; // float
		constexpr auto OuterAttenuationRadius = 0x200; // float
		constexpr auto CameraShake = 0x208; // UCameraShakeBase*
		constexpr auto bAutoStart = 0x210; // bool
	}

	namespace n_UDistributionVectorParameterBase {
		constexpr auto ParameterName = 0x50; // FName
		constexpr auto MinInput = 0x58; // FVector
		constexpr auto MaxInput = 0x64; // FVector
		constexpr auto MinOutput = 0x70; // FVector
		constexpr auto MaxOutput = 0x7c; // FVector
		constexpr auto ParamModes = 0x88; // DistributionParamMode [0x3]
	}

	namespace n_UObjectLibrary {
		constexpr auto ObjectBaseClass = 0x28; // UObject*
		constexpr auto bHasBlueprintClasses = 0x30; // bool
		constexpr auto Objects = 0x38; // TArray<UObject*>
		constexpr auto WeakObjects = 0x48; // TArray<TWeakObjectPtr<UObject>>
		constexpr auto bUseWeakReferences = 0x58; // bool
		constexpr auto bIsFullyLoaded = 0x59; // bool
	}

	namespace n_UMaterial {
		constexpr auto PhysMaterial = 0x88; // UPhysicalMaterial*
		constexpr auto PhysMaterialMask = 0x90; // UPhysicalMaterialMask*
		constexpr auto PhysicalMaterialMap = 0x98; // UPhysicalMaterial* [0x8]
		constexpr auto Metallic = 0xd8; // FScalarMaterialInput
		constexpr auto Specular = 0xec; // FScalarMaterialInput
		constexpr auto Anisotropy = 0x100; // FScalarMaterialInput
		constexpr auto Normal = 0x114; // FVectorMaterialInput
		constexpr auto Tangent = 0x128; // FVectorMaterialInput
		constexpr auto EmissiveColor = 0x13c; // FColorMaterialInput
		constexpr auto MaterialDomain = 0x150; // EMaterialDomain
		constexpr auto BlendMode = 0x151; // EBlendMode
		constexpr auto DecalBlendMode = 0x152; // EDecalBlendMode
		constexpr auto MaterialDecalResponse = 0x153; // EMaterialDecalResponse
		constexpr auto ShadingModel = 0x154; // EMaterialShadingModel
		constexpr auto bCastDynamicShadowAsMasked = 0x155; // char : 1
		constexpr auto ShadingModels = 0x156; // FMaterialShadingModelField
		constexpr auto OpacityMaskClipValue = 0x158; // float
		constexpr auto WorldPositionOffset = 0x15c; // FVectorMaterialInput
		constexpr auto Refraction = 0x170; // FScalarMaterialInput
		constexpr auto MaterialAttributes = 0x184; // FMaterialAttributesInput
		constexpr auto PixelDepthOffset = 0x19c; // FScalarMaterialInput
		constexpr auto ShadingModelFromMaterialExpression = 0x1b0; // FShadingModelMaterialInput
		constexpr auto bEnableSeparateTranslucency = 0x1c4; // char : 1
		constexpr auto bEnableResponsiveAA = 0x1c4; // char : 1
		constexpr auto bScreenSpaceReflections = 0x1c4; // char : 1
		constexpr auto bContactShadows = 0x1c4; // char : 1
		constexpr auto TwoSided = 0x1c4; // char : 1
		constexpr auto DitheredLODTransition = 0x1c4; // char : 1
		constexpr auto DitherOpacityMask = 0x1c4; // char : 1
		constexpr auto bAllowNegativeEmissiveColor = 0x1c4; // char : 1
		constexpr auto TranslucencyLightingMode = 0x1c5; // ETranslucencyLightingMode
		constexpr auto bEnableMobileSeparateTranslucency = 0x1c6; // char : 1
		constexpr auto NumCustomizedUVs = 0x1c8; // int32_t
		constexpr auto TranslucencyDirectionalLightingIntensity = 0x1cc; // float
		constexpr auto TranslucentShadowDensityScale = 0x1d0; // float
		constexpr auto TranslucentSelfShadowDensityScale = 0x1d4; // float
		constexpr auto TranslucentSelfShadowSecondDensityScale = 0x1d8; // float
		constexpr auto TranslucentSelfShadowSecondOpacity = 0x1dc; // float
		constexpr auto TranslucentBackscatteringExponent = 0x1e0; // float
		constexpr auto TranslucentMultipleScatteringExtinction = 0x1e4; // FLinearColor
		constexpr auto TranslucentShadowStartOffset = 0x1f4; // float
		constexpr auto bDisableDepthTest = 0x1f8; // char : 1
		constexpr auto bWriteOnlyAlpha = 0x1f8; // char : 1
		constexpr auto bGenerateSphericalParticleNormals = 0x1f8; // char : 1
		constexpr auto bTangentSpaceNormal = 0x1f8; // char : 1
		constexpr auto bUseEmissiveForDynamicAreaLighting = 0x1f8; // char : 1
		constexpr auto bBlockGI = 0x1f8; // char : 1
		constexpr auto bUsedAsSpecialEngineMaterial = 0x1f8; // char : 1
		constexpr auto bUsedWithSkeletalMesh = 0x1f8; // char : 1
		constexpr auto bUsedWithEditorCompositing = 0x1f9; // char : 1
		constexpr auto bUsedWithParticleSprites = 0x1f9; // char : 1
		constexpr auto bUsedWithBeamTrails = 0x1f9; // char : 1
		constexpr auto bUsedWithMeshParticles = 0x1f9; // char : 1
		constexpr auto bUsedWithNiagaraSprites = 0x1f9; // char : 1
		constexpr auto bUsedWithNiagaraRibbons = 0x1f9; // char : 1
		constexpr auto bUsedWithNiagaraMeshParticles = 0x1f9; // char : 1
		constexpr auto bUsedWithGeometryCache = 0x1f9; // char : 1
		constexpr auto bUsedWithStaticLighting = 0x1fa; // char : 1
		constexpr auto bUsedWithMorphTargets = 0x1fa; // char : 1
		constexpr auto bUsedWithSplineMeshes = 0x1fa; // char : 1
		constexpr auto bUsedWithInstancedStaticMeshes = 0x1fa; // char : 1
		constexpr auto bUsedWithGeometryCollections = 0x1fa; // char : 1
		constexpr auto bUsesDistortion = 0x1fa; // char : 1
		constexpr auto bUsedWithClothing = 0x1fa; // char : 1
		constexpr auto bUsedWithWater = 0x1fc; // char : 1
		constexpr auto bUsedWithHairStrands = 0x1fc; // char : 1
		constexpr auto bUsedWithLidarPointCloud = 0x1fc; // char : 1
		constexpr auto bUsedWithVirtualHeightfieldMesh = 0x1fc; // char : 1
		constexpr auto bUsedWithUI = 0x200; // char : 1
		constexpr auto bAutomaticallySetUsageInEditor = 0x200; // char : 1
		constexpr auto bFullyRough = 0x200; // char : 1
		constexpr auto bUseFullPrecision = 0x200; // char : 1
		constexpr auto bUseLightmapDirectionality = 0x200; // char : 1
		constexpr auto bUseAlphaToCoverage = 0x200; // char : 1
		constexpr auto bForwardRenderUsePreintegratedGFForSimpleIBL = 0x204; // char : 1
		constexpr auto bUseHQForwardReflections = 0x208; // char : 1
		constexpr auto bForwardBlendsSkyLightCubemaps = 0x208; // char : 1
		constexpr auto bUsePlanarForwardReflections = 0x208; // char : 1
		constexpr auto bNormalCurvatureToRoughness = 0x208; // char : 1
		constexpr auto D3D11TessellationMode = 0x209; // EMaterialTessellationMode
		constexpr auto bEnableCrackFreeDisplacement = 0x20a; // char : 1
		constexpr auto bEnableAdaptiveTessellation = 0x20a; // char : 1
		constexpr auto AllowTranslucentCustomDepthWrites = 0x20a; // char : 1
		constexpr auto Wireframe = 0x20a; // char : 1
		constexpr auto WriteDepthToTranslucentMaterial = 0x20a; // char : 1
		constexpr auto ShadingRate = 0x20b; // EMaterialShadingRate
		constexpr auto bCanMaskedBeAssumedOpaque = 0x20c; // char : 1
		constexpr auto bIsMasked = 0x20c; // char : 1
		constexpr auto bIsPreviewMaterial = 0x20c; // char : 1
		constexpr auto bIsFunctionPreviewMaterial = 0x20c; // char : 1
		constexpr auto bUseMaterialAttributes = 0x20c; // char : 1
		constexpr auto bCastRayTracedShadows = 0x20c; // char : 1
		constexpr auto bUseTranslucencyVertexFog = 0x20c; // char : 1
		constexpr auto bApplyCloudFogging = 0x20c; // char : 1
		constexpr auto bIsSky = 0x20d; // char : 1
		constexpr auto bComputeFogPerPixel = 0x20d; // char : 1
		constexpr auto bOutputTranslucentVelocity = 0x20d; // char : 1
		constexpr auto bAllowDevelopmentShaderCompile = 0x20d; // char : 1
		constexpr auto bIsMaterialEditorStatsMaterial = 0x20d; // char : 1
		constexpr auto BlendableLocation = 0x20e; // EBlendableLocation
		constexpr auto BlendableOutputAlpha = 0x20f; // char : 1
		constexpr auto bEnableStencilTest = 0x20f; // char : 1
		constexpr auto StencilCompare = 0x210; // EMaterialStencilCompare
		constexpr auto StencilRefValue = 0x211; // char
		constexpr auto RefractionMode = 0x212; // ERefractionMode
		constexpr auto BlendablePriority = 0x214; // int32_t
		constexpr auto bIsBlendable = 0x218; // char : 1
		constexpr auto UsageFlagWarnings = 0x21c; // uint32_t
		constexpr auto RefractionDepthBias = 0x220; // float
		constexpr auto StateId = 0x224; // FGuid
		constexpr auto MaxDisplacement = 0x234; // float
		constexpr auto CachedExpressionData = 0x268; // FMaterialCachedExpressionData
	}

	namespace n_ABMF_Fence_01_C {
		constexpr auto SFPSACSnap1 = 0x358; // USFPSACSnapComponent*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
		constexpr auto SFPSACBaseCollision = 0x368; // USFPSACBaseCollision*
	}

	namespace n_UParticleModuleLocationPrimitiveSphere {
		constexpr auto StartRadius = 0xb0; // FRawDistributionFloat
	}

	namespace n_UAISense {
		constexpr auto DefaultExpirationAge = 0x28; // float
		constexpr auto NotifyType = 0x2c; // EAISenseNotifyType
		constexpr auto bWantsNewPawnNotification = 0x30; // char : 1
		constexpr auto bAutoRegisterAllPawnsAsSources = 0x30; // char : 1
		constexpr auto PerceptionSystemInstance = 0x38; // UAIPerceptionSystem*
	}

	namespace n_USynthKnob {
		constexpr auto Value = 0x108; // float
		constexpr auto StepSize = 0x10c; // float
		constexpr auto MouseSpeed = 0x110; // float
		constexpr auto MouseFineTuneSpeed = 0x114; // float
		constexpr auto ShowTooltipInfo = 0x118; // char : 1
		constexpr auto ParameterName = 0x120; // FText
		constexpr auto ParameterUnits = 0x138; // FText
		constexpr auto ValueDelegate = 0x150; // FDelegate
		constexpr auto WidgetStyle = 0x160; // FSynthKnobStyle
		constexpr auto Locked = 0x398; // bool
		constexpr auto IsFocusable = 0x399; // bool
		constexpr auto OnMouseCaptureBegin = 0x3a0; // FMulticastInlineDelegate
		constexpr auto OnMouseCaptureEnd = 0x3b0; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureBegin = 0x3c0; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureEnd = 0x3d0; // FMulticastInlineDelegate
		constexpr auto OnValueChanged = 0x3e0; // FMulticastInlineDelegate
	}

	namespace n_ABMF_Storage_01_C {
		constexpr auto SFPSACLootBoxInventory = 0x3b8; // USFPSACLootBoxInventory*
		constexpr auto SFPSACBaseCollision = 0x3c0; // USFPSACBaseCollision*
		constexpr auto StaticMesh = 0x3c8; // UStaticMeshComponent*
	}

	namespace n_UMaterialExpressionLandscapeLayerBlend {
		constexpr auto Layers = 0x40; // TArray<FLayerBlendInput>
		constexpr auto ExpressionGUID = 0x50; // FGuid
	}

	namespace n_UBTCompositeNode {
		constexpr auto Children = 0x58; // TArray<FBTCompositeChild>
		constexpr auto Services = 0x68; // TArray<UBTService*>
		constexpr auto bApplyDecoratorScope = 0x88; // char : 1
	}

	namespace n_ALandscapeStreamingProxy {
		constexpr auto LandscapeActor = 0x598; // LazyObjectProperty
	}

	namespace n_UMaterialExpressionComment {
		constexpr auto SizeX = 0x40; // int32_t
		constexpr auto SizeY = 0x44; // int32_t
		constexpr auto Text = 0x48; // FString
		constexpr auto CommentColor = 0x58; // FLinearColor
		constexpr auto FontSize = 0x68; // int32_t
	}

	namespace n_UMaterialExpressionAdd {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UParticleModuleSizeScaleBySpeed {
		constexpr auto SpeedScale = 0x30; // FVector2D
		constexpr auto MaxScale = 0x38; // FVector2D
	}

	namespace n_USoundWave {
		constexpr auto CompressionQuality = 0x170; // int32_t
		constexpr auto StreamingPriority = 0x174; // int32_t
		constexpr auto SampleRateQuality = 0x178; // ESoundwaveSampleRateSettings
		constexpr auto SoundGroup = 0x17a; // ESoundGroup
		constexpr auto bLooping = 0x17b; // char : 1
		constexpr auto bStreaming = 0x17b; // char : 1
		constexpr auto bSeekableStreaming = 0x17b; // char : 1
		constexpr auto LoadingBehavior = 0x17c; // ESoundWaveLoadingBehavior
		constexpr auto bMature = 0x17d; // char : 1
		constexpr auto bManualWordWrap = 0x17d; // char : 1
		constexpr auto bSingleLine = 0x17e; // char : 1
		constexpr auto bIsAmbisonics = 0x17e; // char : 1
		constexpr auto ModulationSettings = 0x180; // FSoundModulationDefaultRoutingSettings
		constexpr auto FrequenciesToAnalyze = 0x1c8; // TArray<float>
		constexpr auto CookedSpectralTimeData = 0x1d8; // TArray<FSoundWaveSpectralTimeData>
		constexpr auto CookedEnvelopeTimeData = 0x1e8; // TArray<FSoundWaveEnvelopeTimeData>
		constexpr auto InitialChunkSize = 0x1f8; // int32_t
		constexpr auto SpokenText = 0x240; // FString
		constexpr auto SubtitlePriority = 0x250; // float
		constexpr auto Volume = 0x254; // float
		constexpr auto Pitch = 0x258; // float
		constexpr auto NumChannels = 0x25c; // int32_t
		constexpr auto SampleRate = 0x260; // int32_t
		constexpr auto Subtitles = 0x270; // TArray<FSubtitleCue>
		constexpr auto Curves = 0x280; // UCurveTable*
		constexpr auto InternalCurves = 0x288; // UCurveTable*
	}

	namespace n_UFloatingPawnMovement {
		constexpr auto MaxSpeed = 0x138; // float
		constexpr auto Acceleration = 0x13c; // float
		constexpr auto Deceleration = 0x140; // float
		constexpr auto TurningBoost = 0x144; // float
		constexpr auto bPositionCorrected = 0x148; // char : 1
	}

	namespace n_UCheckBox {
		constexpr auto CheckedState = 0x120; // ECheckBoxState
		constexpr auto CheckedStateDelegate = 0x124; // FDelegate
		constexpr auto WidgetStyle = 0x138; // FCheckBoxStyle
		constexpr auto Style = 0x6b8; // USlateWidgetStyleAsset*
		constexpr auto UncheckedImage = 0x6c0; // USlateBrushAsset*
		constexpr auto UncheckedHoveredImage = 0x6c8; // USlateBrushAsset*
		constexpr auto UncheckedPressedImage = 0x6d0; // USlateBrushAsset*
		constexpr auto CheckedImage = 0x6d8; // USlateBrushAsset*
		constexpr auto CheckedHoveredImage = 0x6e0; // USlateBrushAsset*
		constexpr auto CheckedPressedImage = 0x6e8; // USlateBrushAsset*
		constexpr auto UndeterminedImage = 0x6f0; // USlateBrushAsset*
		constexpr auto UndeterminedHoveredImage = 0x6f8; // USlateBrushAsset*
		constexpr auto UndeterminedPressedImage = 0x700; // USlateBrushAsset*
		constexpr auto HorizontalAlignment = 0x708; // EHorizontalAlignment
		constexpr auto Padding = 0x70c; // FMargin
		constexpr auto BorderBackgroundColor = 0x720; // FSlateColor
		constexpr auto ClickMethod = 0x748; // EButtonClickMethod
		constexpr auto TouchMethod = 0x749; // EButtonTouchMethod
		constexpr auto PressMethod = 0x74a; // EButtonPressMethod
		constexpr auto IsFocusable = 0x74b; // bool
		constexpr auto OnCheckStateChanged = 0x750; // FMulticastInlineDelegate
	}

	namespace n_UBTDecorator_SetTagCooldown {
		constexpr auto CooldownTag = 0x68; // FGameplayTag
		constexpr auto CooldownDuration = 0x70; // float
		constexpr auto bAddToExistingDuration = 0x74; // bool
	}

	namespace n_UGameSessionSettings {
		constexpr auto MaxSpectators = 0x28; // int32_t
		constexpr auto MaxPlayers = 0x2c; // int32_t
		constexpr auto bRequiresPushToTalk = 0x30; // char : 1
	}

	namespace n_UQuitMatchCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_USoundNodeEnveloper {
		constexpr auto LoopStart = 0x48; // float
		constexpr auto LoopEnd = 0x4c; // float
		constexpr auto DurationAfterLoop = 0x50; // float
		constexpr auto LoopCount = 0x54; // int32_t
		constexpr auto bLoopIndefinitely = 0x58; // char : 1
		constexpr auto bLoop = 0x58; // char : 1
		constexpr auto VolumeInterpCurve = 0x60; // UDistributionFloatConstantCurve*
		constexpr auto PitchInterpCurve = 0x68; // UDistributionFloatConstantCurve*
		constexpr auto VolumeCurve = 0x70; // FRuntimeFloatCurve
		constexpr auto PitchCurve = 0xf8; // FRuntimeFloatCurve
		constexpr auto PitchMin = 0x180; // float
		constexpr auto PitchMax = 0x184; // float
		constexpr auto VolumeMin = 0x188; // float
		constexpr auto VolumeMax = 0x18c; // float
	}

	namespace n_UBTDecorator_CheckGameplayTagsOnActor {
		constexpr auto ActorToCheck = 0x68; // FBlackboardKeySelector
		constexpr auto TagsToMatch = 0x90; // EGameplayContainerMatchType
		constexpr auto GameplayTags = 0x98; // FGameplayTagContainer
		constexpr auto CachedDescription = 0xb8; // FString
	}

	namespace n_UMaterialExpressionArctangent2 {
		constexpr auto Y = 0x40; // FExpressionInput
		constexpr auto X = 0x54; // FExpressionInput
	}

	namespace n_UInvalidationBox {
		constexpr auto bCanCache = 0x120; // bool
		constexpr auto CacheRelativeTransforms = 0x121; // bool
	}

	namespace n_UMaterialExpressionNamedRerouteDeclaration {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Name = 0x54; // FName
		constexpr auto VariableGuid = 0x5c; // FGuid
	}

	namespace n_Aweapon_firearms_gun_M9_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7f0; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f8; // UStaticMeshComponent*
	}

	namespace n_ASFPSRoute {
		constexpr auto Root = 0x220; // USFPSACRoute*
	}

	namespace n_AShell_AR0_C {
		constexpr auto Mesh = 0x250; // UStaticMeshComponent*
	}

	namespace n_UTimeSynchronizableMediaSource {
		constexpr auto bUseTimeSynchronization = 0x88; // bool
		constexpr auto FrameDelay = 0x8c; // int32_t
		constexpr auto TimeDelay = 0x90; // double
	}

	namespace n_UInteractiveToolsContext {
		constexpr auto InputRouter = 0x58; // UInputRouter*
		constexpr auto ToolManager = 0x60; // UInteractiveToolManager*
		constexpr auto GizmoManager = 0x68; // UInteractiveGizmoManager*
		constexpr auto ToolManagerClass = 0x70; // TSoftClassPtr<UObject>
	}

	namespace n_UMaterialExpressionDecalMipmapLevel {
		constexpr auto TextureSize = 0x40; // FExpressionInput
		constexpr auto ConstWidth = 0x54; // float
		constexpr auto ConstHeight = 0x58; // float
	}

	namespace n_UDistributionFloatUniform {
		constexpr auto Min = 0x38; // float
		constexpr auto Max = 0x3c; // float
	}

	namespace n_UDistributionVectorUniform {
		constexpr auto Max = 0x38; // FVector
		constexpr auto Min = 0x44; // FVector
		constexpr auto bLockAxes = 0x50; // char : 1
		constexpr auto LockedAxes = 0x54; // EDistributionVectorLockFlags
		constexpr auto MirrorFlags = 0x55; // EDistributionVectorMirrorFlags [0x3]
		constexpr auto bUseExtremes = 0x58; // char : 1
	}

	namespace n_UPawnNoiseEmitterComponent {
		constexpr auto bAIPerceptionSystemCompatibilityMode = 0xb0; // char : 1
		constexpr auto LastRemoteNoisePosition = 0xb4; // FVector
		constexpr auto NoiseLifetime = 0xc0; // float
		constexpr auto LastRemoteNoiseVolume = 0xc4; // float
		constexpr auto LastRemoteNoiseTime = 0xc8; // float
		constexpr auto LastLocalNoiseVolume = 0xcc; // float
		constexpr auto LastLocalNoiseTime = 0xd0; // float
	}

	namespace n_UActorChannel {
		constexpr auto Actor = 0x68; // AActor*
		constexpr auto CreateSubObjects = 0x158; // TArray<UObject*>
	}

	namespace n_Aweapmf_DTK_556x45_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_Arecoveryitem_medikit_rag_C {
		constexpr auto Timer = 0x420; // float
	}

	namespace n_UAIPerceptionStimuliSourceComponent {
		constexpr auto bAutoRegisterAsSource = 0xb0; // char : 1
		constexpr auto RegisterAsSourceForSenses = 0xb8; // TArray<UAISense*>
	}

	namespace n_UAnimSequenceBase {
		constexpr auto Notifies = 0x80; // TArray<FAnimNotifyEvent>
		constexpr auto SequenceLength = 0x90; // float
		constexpr auto RateScale = 0x94; // float
		constexpr auto RawCurveData = 0x98; // FRawCurveTracks
	}

	namespace n_Ascope_opt_hunting_C {
		constexpr auto hunting_reticles = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UDestroySessionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UABP_weapon_firearms_smg_mp5_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x318; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x398; // FAnimNode_Slot
	}

	namespace n_UCapsuleComponent {
		constexpr auto CapsuleHalfHeight = 0x468; // float
		constexpr auto CapsuleRadius = 0x46c; // float
	}

	namespace n_UMovementComponent {
		constexpr auto UpdatedComponent = 0xb0; // USceneComponent*
		constexpr auto UpdatedPrimitive = 0xb8; // UPrimitiveComponent*
		constexpr auto Velocity = 0xc4; // FVector
		constexpr auto PlaneConstraintNormal = 0xd0; // FVector
		constexpr auto PlaneConstraintOrigin = 0xdc; // FVector
		constexpr auto bUpdateOnlyIfRendered = 0xe8; // char : 1
		constexpr auto bAutoUpdateTickRegistration = 0xe8; // char : 1
		constexpr auto bTickBeforeOwner = 0xe8; // char : 1
		constexpr auto bAutoRegisterUpdatedComponent = 0xe8; // char : 1
		constexpr auto bConstrainToPlane = 0xe8; // char : 1
		constexpr auto bSnapToPlaneAtStart = 0xe8; // char : 1
		constexpr auto bAutoRegisterPhysicsVolumeUpdates = 0xe8; // char : 1
		constexpr auto bComponentShouldUpdatePhysicsVolume = 0xe8; // char : 1
		constexpr auto PlaneConstraintAxisSetting = 0xeb; // EPlaneConstraintAxisSetting
	}

	namespace n_UMaterialExpressionLandscapeLayerCoords {
		constexpr auto MappingType = 0x40; // ETerrainCoordMappingType
		constexpr auto CustomUVType = 0x41; // ELandscapeCustomizedCoordType
		constexpr auto MappingScale = 0x44; // float
		constexpr auto MappingRotation = 0x48; // float
		constexpr auto MappingPanU = 0x4c; // float
		constexpr auto MappingPanV = 0x50; // float
	}

	namespace n_UARTrackedObject {
		constexpr auto DetectedObject = 0xf8; // UARCandidateObject*
	}

	namespace n_UInteractiveTool {
		constexpr auto InputBehaviors = 0x48; // UInputBehaviorSet*
		constexpr auto ToolPropertyObjects = 0x50; // TArray<UObject*>
	}

	namespace n_USFPSAnimEvent_PlaySound {
		constexpr auto bOnlyLocalPlayerPlay = 0x58; // bool
		constexpr auto bCMobCanPlay = 0x59; // bool
		constexpr auto bUseMaxSoundDistance = 0x5a; // bool
	}

	namespace n_UClothPhysicalMeshDataBase_Legacy {
		constexpr auto Vertices = 0x28; // TArray<FVector>
		constexpr auto Normals = 0x38; // TArray<FVector>
		constexpr auto Indices = 0x48; // TArray<uint32_t>
		constexpr auto InverseMasses = 0x58; // TArray<float>
		constexpr auto BoneData = 0x68; // TArray<FClothVertBoneData>
		constexpr auto NumFixedVerts = 0x78; // int32_t
		constexpr auto MaxBoneWeights = 0x7c; // int32_t
		constexpr auto SelfCollisionIndices = 0x80; // TArray<uint32_t>
	}

	namespace n_UMaterialExpressionLinearInterpolate {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto Alpha = 0x68; // FExpressionInput
		constexpr auto ConstA = 0x7c; // float
		constexpr auto ConstB = 0x80; // float
		constexpr auto ConstAlpha = 0x84; // float
	}

	namespace n_UMagicLeapARPinComponent {
		constexpr auto ObjectUID = 0x1f8; // FString
		constexpr auto UserIndex = 0x208; // int32_t
		constexpr auto AutoPinType = 0x20c; // EMagicLeapAutoPinType
		constexpr auto bShouldPinActor = 0x20d; // bool
		constexpr auto PinDataClass = 0x210; // UMagicLeapARPinSaveGame*
		constexpr auto SearchPinTypes = 0x218; // TSet<EMagicLeapARPinType>
		constexpr auto SearchVolume = 0x268; // USphereComponent*
		constexpr auto OnPersistentEntityPinned = 0x270; // FMulticastInlineDelegate
		constexpr auto OnPersistentEntityPinLost = 0x280; // FMulticastInlineDelegate
		constexpr auto OnPinDataLoadAttemptCompleted = 0x290; // FMulticastInlineDelegate
		constexpr auto PinnedCFUID = 0x2a0; // FGuid
		constexpr auto PinnedSceneComponent = 0x2b0; // USceneComponent*
		constexpr auto PinData = 0x2b8; // UMagicLeapARPinSaveGame*
	}

	namespace n_Aweapon_firearms_smg_hkump_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f0; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7f8; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x800; // UStaticMeshComponent*
	}

	namespace n_UCircularThrobber {
		constexpr auto NumberOfPieces = 0x108; // int32_t
		constexpr auto Period = 0x10c; // float
		constexpr auto Radius = 0x110; // float
		constexpr auto PieceImage = 0x118; // USlateBrushAsset*
		constexpr auto Image = 0x120; // FSlateBrush
		constexpr auto bEnableRadius = 0x1a8; // bool
	}

	namespace n_UEditableGameplayTagQueryExpression_AnyTagsMatch {
		constexpr auto Tags = 0x28; // FGameplayTagContainer
	}

	namespace n_UUserWidget {
		constexpr auto ColorAndOpacity = 0x110; // FLinearColor
		constexpr auto ColorAndOpacityDelegate = 0x120; // FDelegate
		constexpr auto ForegroundColor = 0x130; // FSlateColor
		constexpr auto ForegroundColorDelegate = 0x158; // FDelegate
		constexpr auto OnVisibilityChanged = 0x168; // FMulticastInlineDelegate
		constexpr auto Padding = 0x190; // FMargin
		constexpr auto ActiveSequencePlayers = 0x1a0; // TArray<UUMGSequencePlayer*>
		constexpr auto AnimationTickManager = 0x1b0; // UUMGSequenceTickManager*
		constexpr auto StoppedSequencePlayers = 0x1b8; // TArray<UUMGSequencePlayer*>
		constexpr auto NamedSlotBindings = 0x1c8; // TArray<FNamedSlotBinding>
		constexpr auto WidgetTree = 0x1d8; // UWidgetTree*
		constexpr auto Priority = 0x1e0; // int32_t
		constexpr auto bSupportsKeyboardFocus = 0x1e4; // char : 1
		constexpr auto bIsFocusable = 0x1e4; // char : 1
		constexpr auto bStopAction = 0x1e4; // char : 1
		constexpr auto bHasScriptImplementedTick = 0x1e4; // char : 1
		constexpr auto bHasScriptImplementedPaint = 0x1e4; // char : 1
		constexpr auto TickFrequency = 0x1f0; // EWidgetTickFrequency
		constexpr auto InputComponent = 0x1f8; // UInputComponent*
		constexpr auto AnimationCallbacks = 0x200; // TArray<FAnimationEventBinding>
	}

	namespace n_UMaterialExpressionArctangent2Fast {
		constexpr auto Y = 0x40; // FExpressionInput
		constexpr auto X = 0x54; // FExpressionInput
	}

	namespace n_UVehicleAnimInstance {
		constexpr auto WheeledVehicleMovementComponent = 0xa50; // UWheeledVehicleMovementComponent*
	}

	namespace n_APaperGroupedSpriteActor {
		constexpr auto RenderComponent = 0x220; // UPaperGroupedSpriteComponent*
	}

	namespace n_AVolumetricLightmapDensityVolume {
		constexpr auto AllowedMipLevelRange = 0x258; // FInt32Interval
	}

	namespace n_ASFPSSteelArms {
		constexpr auto DamagePoint0Ref = 0x4f0; // USceneComponent*
		constexpr auto DamagePoint1Ref = 0x4f8; // USceneComponent*
		constexpr auto DamagePoint2Ref = 0x500; // USceneComponent*
		constexpr auto CharacterShotAnimLeftStand = 0x5e0; // UAnimMontage*
		constexpr auto CharacterShotAnimRightStand = 0x5e8; // UAnimMontage*
		constexpr auto CharacterShotAnimLeftRun = 0x5f0; // UAnimMontage*
		constexpr auto CharacterShotAnimRightRun = 0x5f8; // UAnimMontage*
		constexpr auto DamageShake = 0x600; // USFPSCameraShake*
		constexpr auto BaseDamage = 0x608; // float
		constexpr auto bAddDebugInfoToLog = 0x60c; // bool
	}

	namespace n_UMaterialExpressionScalarParameter {
		constexpr auto DefaultValue = 0x58; // float
		constexpr auto bUseCustomPrimitiveData = 0x5c; // bool
		constexpr auto PrimitiveDataIndex = 0x5d; // char
	}

	namespace n_UEnvQueryGenerator_SimpleGrid {
		constexpr auto GridSize = 0x80; // FAIDataProviderFloatValue
		constexpr auto SpaceBetween = 0xb8; // FAIDataProviderFloatValue
		constexpr auto GenerateAround = 0xf0; // UEnvQueryContext*
	}

	namespace n_UAudioComponent {
		constexpr auto Sound = 0x1f8; // USoundBase*
		constexpr auto InstanceParameters = 0x200; // TArray<FAudioComponentParam>
		constexpr auto SoundClassOverride = 0x210; // USoundClass*
		constexpr auto bAutoDestroy = 0x218; // char : 1
		constexpr auto bStopWhenOwnerDestroyed = 0x218; // char : 1
		constexpr auto bShouldRemainActiveIfDropped = 0x218; // char : 1
		constexpr auto bAllowSpatialization = 0x218; // char : 1
		constexpr auto bOverrideAttenuation = 0x218; // char : 1
		constexpr auto bOverrideSubtitlePriority = 0x218; // char : 1
		constexpr auto bIsUISound = 0x218; // char : 1
		constexpr auto bEnableLowPassFilter = 0x218; // char : 1
		constexpr auto bOverridePriority = 0x219; // char : 1
		constexpr auto bSuppressSubtitles = 0x219; // char : 1
		constexpr auto bAutoManageAttachment = 0x21a; // char : 1
		constexpr auto AudioComponentUserID = 0x220; // FName
		constexpr auto PitchModulationMin = 0x228; // float
		constexpr auto PitchModulationMax = 0x22c; // float
		constexpr auto VolumeModulationMin = 0x230; // float
		constexpr auto VolumeModulationMax = 0x234; // float
		constexpr auto VolumeMultiplier = 0x238; // float
		constexpr auto EnvelopeFollowerAttackTime = 0x23c; // int32_t
		constexpr auto EnvelopeFollowerReleaseTime = 0x240; // int32_t
		constexpr auto Priority = 0x244; // float
		constexpr auto SubtitlePriority = 0x248; // float
		constexpr auto SourceEffectChain = 0x250; // USoundEffectSourcePresetChain*
		constexpr auto PitchMultiplier = 0x258; // float
		constexpr auto LowPassFilterFrequency = 0x25c; // float
		constexpr auto AttenuationSettings = 0x268; // USoundAttenuation*
		constexpr auto AttenuationOverrides = 0x270; // FSoundAttenuationSettings
		constexpr auto ConcurrencySettings = 0x610; // USoundConcurrency*
		constexpr auto ConcurrencySet = 0x618; // TSet<USoundConcurrency*>
		constexpr auto AutoAttachLocationRule = 0x674; // EAttachmentRule
		constexpr auto AutoAttachRotationRule = 0x675; // EAttachmentRule
		constexpr auto AutoAttachScaleRule = 0x676; // EAttachmentRule
		constexpr auto ModulationRouting = 0x678; // FSoundModulationDefaultRoutingSettings
		constexpr auto OnAudioPlayStateChanged = 0x6c0; // FMulticastInlineDelegate
		constexpr auto OnAudioVirtualizationChanged = 0x6e8; // FMulticastInlineDelegate
		constexpr auto OnAudioFinished = 0x710; // FMulticastInlineDelegate
		constexpr auto OnAudioPlaybackPercent = 0x738; // FMulticastInlineDelegate
		constexpr auto OnAudioSingleEnvelopeValue = 0x760; // FMulticastInlineDelegate
		constexpr auto OnAudioMultiEnvelopeValue = 0x788; // FMulticastInlineDelegate
		constexpr auto OnQueueSubtitles = 0x7b0; // FDelegate
		constexpr auto AutoAttachParent = 0x7c0; // TWeakObjectPtr<USceneComponent>
		constexpr auto AutoAttachSocketName = 0x7c8; // FName
	}

	namespace n_USkeletalMeshSimplificationSettings {
		constexpr auto SkeletalMeshReductionModuleName = 0x38; // FName
	}

	namespace n_UParticleSystemReplay {
		constexpr auto ClipIDNumber = 0x28; // int32_t
	}

	namespace n_UEndpointSubmix {
		constexpr auto EndpointType = 0x38; // FName
		constexpr auto EndpointSettingsClass = 0x40; // UAudioEndpointSettingsBase*
		constexpr auto EndpointSettings = 0x48; // UAudioEndpointSettingsBase*
	}

	namespace n_UMovieSceneSubTrack {
		constexpr auto Sections = 0x90; // TArray<UMovieSceneSection*>
	}

	namespace n_ABMF_Workbench_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
	}

	namespace n_UEnvQueryGenerator_ProjectedPoints {
		constexpr auto ProjectionData = 0x50; // FEnvTraceData
	}

	namespace n_UGeometryCacheCodecRaw {
		constexpr auto DummyProperty = 0x38; // int32_t
	}

	namespace n_UInterpTrackInstVectorMaterialParam {
		constexpr auto MaterialInstances = 0x28; // TArray<UMaterialInstanceDynamic*>
		constexpr auto ResetVectors = 0x38; // TArray<FVector>
		constexpr auto PrimitiveMaterialRefs = 0x48; // TArray<FPrimitiveMaterialRef>
		constexpr auto InstancedTrack = 0x58; // UInterpTrackVectorMaterialParam*
	}

	namespace n_UMaterialExpressionMax {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UMaterialExpressionSamplePhysicsIntegerField {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
		constexpr auto FieldTarget = 0x54; // EFieldIntegerType
	}

	namespace n_UInputKeySelector {
		constexpr auto WidgetStyle = 0x108; // FButtonStyle
		constexpr auto TextStyle = 0x380; // FTextBlockStyle
		constexpr auto SelectedKey = 0x5f0; // FInputChord
		constexpr auto Font = 0x610; // FSlateFontInfo
		constexpr auto Margin = 0x668; // FMargin
		constexpr auto ColorAndOpacity = 0x678; // FLinearColor
		constexpr auto KeySelectionText = 0x688; // FText
		constexpr auto NoKeySpecifiedText = 0x6a0; // FText
		constexpr auto bAllowModifierKeys = 0x6b8; // bool
		constexpr auto bAllowGamepadKeys = 0x6b9; // bool
		constexpr auto EscapeKeys = 0x6c0; // TArray<FKey>
		constexpr auto OnKeySelected = 0x6d0; // FMulticastInlineDelegate
		constexpr auto OnIsSelectingKeyChanged = 0x6e0; // FMulticastInlineDelegate
	}

	namespace n_URadialFalloff {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto MinRange = 0xb4; // float
		constexpr auto MaxRange = 0xb8; // float
		constexpr auto Default = 0xbc; // float
		constexpr auto Radius = 0xc0; // float
		constexpr auto Position = 0xc4; // FVector
		constexpr auto Falloff = 0xd0; // EFieldFalloffType
	}

	namespace n_USplineComponent {
		constexpr auto SplineCurves = 0x450; // FSplineCurves
		constexpr auto SplineInfo = 0x4c0; // FInterpCurveVector
		constexpr auto SplineRotInfo = 0x4d8; // FInterpCurveQuat
		constexpr auto SplineScaleInfo = 0x4f0; // FInterpCurveVector
		constexpr auto SplineReparamTable = 0x508; // FInterpCurveFloat
		constexpr auto bAllowSplineEditingPerInstance = 0x520; // bool
		constexpr auto ReparamStepsPerSegment = 0x524; // int32_t
		constexpr auto Duration = 0x528; // float
		constexpr auto bStationaryEndpoints = 0x52c; // bool
		constexpr auto bSplineHasBeenEdited = 0x52d; // bool
		constexpr auto bModifiedByConstructionScript = 0x52e; // bool
		constexpr auto bInputSplinePointsToConstructionScript = 0x52f; // bool
		constexpr auto bDrawDebug = 0x530; // bool
		constexpr auto bClosedLoop = 0x531; // bool
		constexpr auto bLoopPositionOverride = 0x532; // bool
		constexpr auto LoopPosition = 0x534; // float
		constexpr auto DefaultUpVector = 0x538; // FVector
	}

	namespace n_USoundConcurrency {
		constexpr auto Concurrency = 0x28; // FSoundConcurrencySettings
	}

	namespace n_UGameplayTask {
		constexpr auto InstanceName = 0x30; // FName
		constexpr auto ResourceOverlapPolicy = 0x3a; // ETaskResourceOverlapPolicy
		constexpr auto ChildTask = 0x60; // UGameplayTask*
	}

	namespace n_UMaterialExpressionVertexInterpolator {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UUMGSequencePlayer {
		constexpr auto Animation = 0x260; // UWidgetAnimation*
		constexpr auto RootTemplateInstance = 0x270; // FMovieSceneRootEvaluationTemplateInstance
	}

	namespace n_AARSkyLight {
		constexpr auto CaptureProbe = 0x230; // UAREnvironmentCaptureProbe*
	}

	namespace n_UParticleModuleBeamModifier {
		constexpr auto ModifierType = 0x30; // BeamModifierType
		constexpr auto PositionOptions = 0x34; // FBeamModifierOptions
		constexpr auto Position = 0x38; // FRawDistributionVector
		constexpr auto TangentOptions = 0x80; // FBeamModifierOptions
		constexpr auto Tangent = 0x88; // FRawDistributionVector
		constexpr auto bAbsoluteTangent = 0xd0; // char : 1
		constexpr auto StrengthOptions = 0xd4; // FBeamModifierOptions
		constexpr auto Strength = 0xd8; // FRawDistributionFloat
	}

	namespace n_UFormMap_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnExit = 0x268; // UButton*
		constexpr auto btnLocation = 0x270; // UCheckBox*
		constexpr auto btnMain = 0x278; // UButton*
		constexpr auto btnRandom = 0x280; // UCheckBox*
		constexpr auto btnRespawn = 0x288; // UButton*
		constexpr auto imgRespawn = 0x290; // UImage*
		constexpr auto lbExit = 0x298; // UTextBlock*
		constexpr auto nsHint = 0x2a0; // UNamedSlot*
		constexpr auto SelectedMapElement = 0x2a8; // USFPSUserWidget_MapElement*
		constexpr auto WheelUp = 0x2b0; // bool
	}

	namespace n_ABM_WallTriaWindow_02_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UGizmoLocalFloatParameterSource {
		constexpr auto Value = 0x48; // float
		constexpr auto LastChange = 0x4c; // FGizmoFloatParameterChange
	}

	namespace n_UComboBoxString {
		constexpr auto DefaultOptions = 0x108; // TArray<FString>
		constexpr auto SelectedOption = 0x118; // FString
		constexpr auto WidgetStyle = 0x128; // FComboBoxStyle
		constexpr auto ItemStyle = 0x518; // FTableRowStyle
		constexpr auto ContentPadding = 0xce0; // FMargin
		constexpr auto MaxListHeight = 0xcf0; // float
		constexpr auto HasDownArrow = 0xcf4; // bool
		constexpr auto EnableGamepadNavigationMode = 0xcf5; // bool
		constexpr auto Font = 0xcf8; // FSlateFontInfo
		constexpr auto ForegroundColor = 0xd50; // FSlateColor
		constexpr auto bIsFocusable = 0xd78; // bool
		constexpr auto OnGenerateWidgetEvent = 0xd7c; // FDelegate
		constexpr auto OnSelectionChanged = 0xd90; // FMulticastInlineDelegate
		constexpr auto OnOpening = 0xda0; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleSubUV {
		constexpr auto Animation = 0x30; // USubUVAnimation*
		constexpr auto SubImageIndex = 0x38; // FRawDistributionFloat
		constexpr auto bUseRealTime = 0x68; // char : 1
	}

	namespace n_UMovieSceneByteTrack {
		constexpr auto Enum = 0xc0; // UEnum*
	}

	namespace n_UMatineeCameraShake {
		constexpr auto OscillationDuration = 0xa8; // float
		constexpr auto OscillationBlendInTime = 0xac; // float
		constexpr auto OscillationBlendOutTime = 0xb0; // float
		constexpr auto RotOscillation = 0xb4; // FROscillator
		constexpr auto LocOscillation = 0xd8; // FVOscillator
		constexpr auto FOVOscillation = 0xfc; // FFOscillator
		constexpr auto AnimPlayRate = 0x108; // float
		constexpr auto AnimScale = 0x10c; // float
		constexpr auto AnimBlendInTime = 0x110; // float
		constexpr auto AnimBlendOutTime = 0x114; // float
		constexpr auto RandomAnimSegmentDuration = 0x118; // float
		constexpr auto Anim = 0x120; // UCameraAnim*
		constexpr auto AnimSequence = 0x128; // UCameraAnimationSequence*
		constexpr auto bRandomAnimSegment = 0x130; // char : 1
		constexpr auto OscillatorTimeRemaining = 0x134; // float
		constexpr auto AnimInst = 0x138; // UCameraAnimInst*
		constexpr auto SequenceShakePattern = 0x180; // USequenceCameraShakePattern*
	}

	namespace n_USoundNodeParamCrossFade {
		constexpr auto ParamName = 0x58; // FName
	}

	namespace n_UClothingAssetBase {
		constexpr auto ImportedFilePath = 0x28; // FString
		constexpr auto AssetGuid = 0x38; // FGuid
	}

	namespace n_AProjectile_C {
		constexpr auto DefaultSceneRoot = 0x310; // USceneComponent*
	}

	namespace n_UABP_weapon_firearms_supp_rgm40_C {
		constexpr auto UberGraphFrame = 0x2f0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2f8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x328; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x370; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x398; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x3c0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x440; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x470; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x4f0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x520; // FAnimNode_StateMachine
	}

	namespace n_USoundBase {
		constexpr auto SoundClassObject = 0x30; // USoundClass*
		constexpr auto bDebug = 0x38; // char : 1
		constexpr auto bOverrideConcurrency = 0x38; // char : 1
		constexpr auto bEnableBusSends = 0x38; // char : 1
		constexpr auto bEnableBaseSubmix = 0x38; // char : 1
		constexpr auto bEnableSubmixSends = 0x38; // char : 1
		constexpr auto bHasDelayNode = 0x38; // char : 1
		constexpr auto bHasConcatenatorNode = 0x38; // char : 1
		constexpr auto bBypassVolumeScaleForPriority = 0x38; // char : 1
		constexpr auto VirtualizationMode = 0x39; // EVirtualizationMode
		constexpr auto ConcurrencySet = 0x90; // TSet<USoundConcurrency*>
		constexpr auto ConcurrencyOverrides = 0xe0; // FSoundConcurrencySettings
		constexpr auto Duration = 0x108; // float
		constexpr auto MaxDistance = 0x10c; // float
		constexpr auto TotalSamples = 0x110; // float
		constexpr auto Priority = 0x114; // float
		constexpr auto AttenuationSettings = 0x118; // USoundAttenuation*
		constexpr auto SoundSubmixObject = 0x120; // USoundSubmixBase*
		constexpr auto SoundSubmixSends = 0x128; // TArray<FSoundSubmixSendInfo>
		constexpr auto SourceEffectChain = 0x138; // USoundEffectSourcePresetChain*
		constexpr auto BusSends = 0x140; // TArray<FSoundSourceBusSendInfo>
		constexpr auto PreEffectBusSends = 0x150; // TArray<FSoundSourceBusSendInfo>
		constexpr auto AssetUserData = 0x160; // TArray<UAssetUserData*>
	}

	namespace n_UInGameAdManager {
		constexpr auto bShouldPauseWhileAdOpen = 0x38; // char : 1
		constexpr auto ClickedBannerDelegates = 0x40; // TArray<FDelegate>
		constexpr auto ClosedAdDelegates = 0x50; // TArray<FDelegate>
	}

	namespace n_UPaperFlipbook {
		constexpr auto FramesPerSecond = 0x28; // float
		constexpr auto KeyFrames = 0x30; // TArray<FPaperFlipbookKeyFrame>
		constexpr auto DefaultMaterial = 0x40; // UMaterialInterface*
		constexpr auto CollisionSource = 0x48; // EFlipbookCollisionMode
	}

	namespace n_ULandscapeLayerInfoObject {
		constexpr auto LayerName = 0x28; // FName
		constexpr auto PhysMaterial = 0x30; // UPhysicalMaterial*
		constexpr auto Hardness = 0x38; // float
		constexpr auto LayerUsageDebugColor = 0x3c; // FLinearColor
	}

	namespace n_UARSaveWorldAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_UMaterialInterface {
		constexpr auto SubsurfaceProfile = 0x38; // USubsurfaceProfile*
		constexpr auto LightmassSettings = 0x50; // FLightmassMaterialInterfaceSettings
		constexpr auto TextureStreamingData = 0x60; // TArray<FMaterialTextureInfo>
		constexpr auto AssetUserData = 0x70; // TArray<UAssetUserData*>
	}

	namespace n_UDistributionFloatConstantCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveFloat
	}

	namespace n_UParticleModuleAttractorLine {
		constexpr auto EndPoint0 = 0x30; // FVector
		constexpr auto EndPoint1 = 0x3c; // FVector
		constexpr auto Range = 0x48; // FRawDistributionFloat
		constexpr auto Strength = 0x78; // FRawDistributionFloat
	}

	namespace n_AEmitterCameraLensEffectBase {
		constexpr auto PS_CameraEffect = 0x270; // UParticleSystem*
		constexpr auto PS_CameraEffectNonExtremeContent = 0x278; // UParticleSystem*
		constexpr auto BaseCamera = 0x280; // APlayerCameraManager*
		constexpr auto RelativeTransform = 0x290; // FTransform
		constexpr auto BaseFOV = 0x2c0; // float
		constexpr auto bAllowMultipleInstances = 0x2c4; // char : 1
		constexpr auto bResetWhenRetriggered = 0x2c4; // char : 1
		constexpr auto EmittersToTreatAsSame = 0x2c8; // TArray<AEmitterCameraLensEffectBase*>
		constexpr auto DistFromCamera = 0x2d8; // float
	}

	namespace n_UWidgetSwitcherSlot {
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto HorizontalAlignment = 0x50; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x51; // EVerticalAlignment
	}

	namespace n_UABP_weapon_firearms_rifle_scar_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x3b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x430; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x460; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x4e0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x510; // FAnimNode_StateMachine
	}

	namespace n_UBlueprint {
		constexpr auto ParentClass = 0x50; // UObject*
		constexpr auto BlueprintType = 0x58; // EBlueprintType
		constexpr auto bRecompileOnLoad = 0x59; // char : 1
		constexpr auto bHasBeenRegenerated = 0x59; // char : 1
		constexpr auto bIsRegeneratingOnLoad = 0x59; // char : 1
		constexpr auto BlueprintSystemVersion = 0x5c; // int32_t
		constexpr auto SimpleConstructionScript = 0x60; // USimpleConstructionScript*
		constexpr auto ComponentTemplates = 0x68; // TArray<UActorComponent*>
		constexpr auto Timelines = 0x78; // TArray<UTimelineTemplate*>
		constexpr auto ComponentClassOverrides = 0x88; // TArray<FBPComponentClassOverride>
		constexpr auto InheritableComponentHandler = 0x98; // UInheritableComponentHandler*
	}

	namespace n_Aweapon_firearms_gun_pm_C {
		constexpr auto SFPSACWeaponMFInventory = 0x7e0; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7e8; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f0; // UStaticMeshComponent*
	}

	namespace n_UAITask {
		constexpr auto OwnerController = 0x68; // AAIController*
	}

	namespace n_UfrmAAdminPanelGroup_C {
		constexpr auto UberGraphFrame = 0x2b0; // FPointerToUberGraphFrame
		constexpr auto btnOpen = 0x2b8; // UCheckBox*
		constexpr auto imgBackground0 = 0x2c0; // UImage*
		constexpr auto imgIcon = 0x2c8; // UImage*
		constexpr auto sbMain = 0x2d0; // UScrollBox*
	}

	namespace n_ASFPSBaseCharacter {
		constexpr auto Accuracy = 0x5b0; // float
		constexpr auto GreenArea = 0x5b8; // AActor*
		constexpr auto ObatacleAnimations = 0x788; // FSFPSCharacterObstacleAnimations
		constexpr auto StairAnimations = 0x8f0; // FSFPSCharacterStairAnimations
		constexpr auto MovementComponent = 0x910; // USFPSCharacterMovementComponent*
		constexpr auto MetabolismParams = 0x918; // FSFPSMetabolismParams
		constexpr auto StopSprintAngle = 0x924; // float
		constexpr auto DefaultMeshType = 0x938; // ESFPSCharacterDefaultMeshesType
		constexpr auto PantsType = 0x939; // ESFPSCharacterPantsType
		constexpr auto Pose = 0x93a; // ESFPSCharacterPose
		constexpr auto PoseChanging = 0x93c; // bool
		constexpr auto CharacterCapsuleHalfHeightChangeTimes = 0x940; // FSFPSCharacterCapsuleHalfHeightChangeTimes
		constexpr auto bIsDying = 0x960; // bool
		constexpr auto bBusy = 0x9d0; // bool
		constexpr auto ACInventory = 0x9d8; // USFPSACBaseInventory*
		constexpr auto TeleportState = 0x9e0; // ESFPSCharacterTeleportState
		constexpr auto ShotRandomParamsIndex = 0x9e2; // uint16_t
		constexpr auto JumpOverObstacleAction = 0x9ec; // FVector
		constexpr auto bCanJumpOverObstacle = 0x9f8; // bool
		constexpr auto JumpOverObstacleState = 0x9f9; // ESFPSJumpOverObstacleState
		constexpr auto JumpDuckCurve = 0xa00; // UCurveFloat*
		constexpr auto JumpDuckCoeff = 0xa08; // UCurveFloat*
		constexpr auto JumpOverWindowAction = 0xa10; // FVector
		constexpr auto StairActorName = 0xa40; // FName
		constexpr auto Car = 0xa60; // AActor*
		constexpr auto LastDriverCar = 0xa68; // AActor*
		constexpr auto SoundSystem = 0xa78; // USFPSACSoundSystem*
		constexpr auto CharacterSpeeds = 0xa88; // FSFPSCharacterSpeeds
		constexpr auto IsOnStair = 0xade; // bool
		constexpr auto IsSprint = 0xadf; // bool
		constexpr auto IsWalk = 0xae0; // bool
		constexpr auto Pitch = 0xae4; // float
		constexpr auto bAiming = 0xb20; // bool
		constexpr auto WeaponBarrier = 0xb2c; // float
		constexpr auto MotionList = 0xb50; // TArray<UAnimMontage*>
		constexpr auto TeamID = 0xb60; // FGenericTeamId
		constexpr auto TLRP_Angle = 0xb80; // float
		constexpr auto TLRP_Speed_StartMove = 0xb84; // float
		constexpr auto TLRP_Speed_MaxAngle = 0xb88; // float
		constexpr auto TLRP_Speed_Timer = 0xb8c; // float
		constexpr auto TLRP_Time = 0xb90; // float
		constexpr auto TLRP_Delay_Max = 0xb94; // float
		constexpr auto TLRP_Delay_Speed = 0xb98; // float
	}

	namespace n_UInterpTrackInstColorProp {
		constexpr auto ResetColor = 0x58; // FColor
	}

	namespace n_ASFPSHUD {
		constexpr auto ParametersCollection = 0x4f0; // UMaterialParameterCollection*
		constexpr auto DamageSplashTime = 0x4f8; // float
	}

	namespace n_UReverbEffect {
		constexpr auto bBypassEarlyReflections = 0x28; // bool
		constexpr auto ReflectionsDelay = 0x2c; // float
		constexpr auto GainHF = 0x30; // float
		constexpr auto ReflectionsGain = 0x34; // float
		constexpr auto bBypassLateReflections = 0x38; // bool
		constexpr auto LateDelay = 0x3c; // float
		constexpr auto DecayTime = 0x40; // float
		constexpr auto Density = 0x44; // float
		constexpr auto Diffusion = 0x48; // float
		constexpr auto AirAbsorptionGainHF = 0x4c; // float
		constexpr auto DecayHFRatio = 0x50; // float
		constexpr auto LateGain = 0x54; // float
		constexpr auto Gain = 0x58; // float
		constexpr auto RoomRolloffFactor = 0x5c; // float
	}

	namespace n_UMaterialExpressionStaticBool {
		constexpr auto Value = 0x40; // char : 1
	}

	namespace n_UPaperFlipbookComponent {
		constexpr auto SourceFlipbook = 0x478; // UPaperFlipbook*
		constexpr auto Material = 0x480; // UMaterialInterface*
		constexpr auto PlayRate = 0x488; // float
		constexpr auto bLooping = 0x48c; // char : 1
		constexpr auto bReversePlayback = 0x48c; // char : 1
		constexpr auto bPlaying = 0x48c; // char : 1
		constexpr auto AccumulatedTime = 0x490; // float
		constexpr auto CachedFrameIndex = 0x494; // int32_t
		constexpr auto SpriteColor = 0x498; // FLinearColor
		constexpr auto CachedBodySetup = 0x4a8; // UBodySetup*
		constexpr auto OnFinishedPlaying = 0x4b0; // FMulticastInlineDelegate
	}

	namespace n_USFPSUserWidget_ServerListItem {
		constexpr auto OnSelectEvent = 0x2f8; // FDelegate
		constexpr auto OnDblClickedEvent = 0x308; // FDelegate
		constexpr auto OnAddFavoriteEvent = 0x318; // FDelegate
	}

	namespace n_UDebugCameraControllerSettings {
		constexpr auto CycleViewModes = 0x38; // TArray<FDebugCameraControllerSettingsViewModeIndex>
	}

	namespace n_UMovieScene2DTransformSection {
		constexpr auto TransformMask = 0xf0; // FMovieScene2DTransformMask
		constexpr auto Translation = 0xf8; // FMovieSceneFloatChannel [0x2]
		constexpr auto Rotation = 0x238; // FMovieSceneFloatChannel
		constexpr auto Scale = 0x2d8; // FMovieSceneFloatChannel [0x2]
		constexpr auto Shear = 0x418; // FMovieSceneFloatChannel [0x2]
	}

	namespace n_UAIDataProvider_QueryParams {
		constexpr auto ParamName = 0x28; // FName
		constexpr auto FloatValue = 0x30; // float
		constexpr auto IntValue = 0x34; // int32_t
		constexpr auto BoolValue = 0x38; // bool
	}

	namespace n_UMediaComponent {
		constexpr auto MediaTexture = 0xb0; // UMediaTexture*
		constexpr auto MediaPlayer = 0xb8; // UMediaPlayer*
	}

	namespace n_UDatasmithStaticMeshTemplate {
		constexpr auto SectionInfoMap = 0x30; // FDatasmithMeshSectionInfoMapTemplate
		constexpr auto LightMapCoordinateIndex = 0x80; // int32_t
		constexpr auto LightMapResolution = 0x84; // int32_t
		constexpr auto BuildSettings = 0x88; // TArray<FDatasmithMeshBuildSettingsTemplate>
		constexpr auto StaticMaterials = 0x98; // TArray<FDatasmithStaticMaterialTemplate>
	}

	namespace n_USFPSAnimEvent_InverseKinematics {
		constexpr auto bKinematicsDisabled = 0x38; // bool
	}

	namespace n_UMovieScenePropertyTrack {
		constexpr auto SectionToKey = 0x90; // UMovieSceneSection*
		constexpr auto PropertyBinding = 0x98; // FMovieScenePropertyBinding
		constexpr auto Sections = 0xb0; // TArray<UMovieSceneSection*>
	}

	namespace n_UEditableGameplayTagQueryExpression_NoExprMatch {
		constexpr auto Expressions = 0x28; // TArray<UEditableGameplayTagQueryExpression*>
	}

	namespace n_UMaterialExpressionTangentOutput {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UClothConfigNv {
		constexpr auto ClothingWindMethod = 0x28; // EClothingWindMethodNv
		constexpr auto VerticalConstraint = 0x2c; // FClothConstraintSetupNv
		constexpr auto HorizontalConstraint = 0x3c; // FClothConstraintSetupNv
		constexpr auto BendConstraint = 0x4c; // FClothConstraintSetupNv
		constexpr auto ShearConstraint = 0x5c; // FClothConstraintSetupNv
		constexpr auto SelfCollisionRadius = 0x6c; // float
		constexpr auto SelfCollisionStiffness = 0x70; // float
		constexpr auto SelfCollisionCullScale = 0x74; // float
		constexpr auto Damping = 0x78; // FVector
		constexpr auto Friction = 0x84; // float
		constexpr auto WindDragCoefficient = 0x88; // float
		constexpr auto WindLiftCoefficient = 0x8c; // float
		constexpr auto LinearDrag = 0x90; // FVector
		constexpr auto AngularDrag = 0x9c; // FVector
		constexpr auto LinearInertiaScale = 0xa8; // FVector
		constexpr auto AngularInertiaScale = 0xb4; // FVector
		constexpr auto CentrifugalInertiaScale = 0xc0; // FVector
		constexpr auto SolverFrequency = 0xcc; // float
		constexpr auto StiffnessFrequency = 0xd0; // float
		constexpr auto GravityScale = 0xd4; // float
		constexpr auto GravityOverride = 0xd8; // FVector
		constexpr auto bUseGravityOverride = 0xe4; // bool
		constexpr auto TetherStiffness = 0xe8; // float
		constexpr auto TetherLimit = 0xec; // float
		constexpr auto CollisionThickness = 0xf0; // float
		constexpr auto AnimDriveSpringStiffness = 0xf4; // float
		constexpr auto AnimDriveDamperStiffness = 0xf8; // float
		constexpr auto WindMethod = 0xfc; // EClothingWindMethod_Legacy
		constexpr auto VerticalConstraintConfig = 0x100; // FClothConstraintSetup_Legacy
		constexpr auto HorizontalConstraintConfig = 0x110; // FClothConstraintSetup_Legacy
		constexpr auto BendConstraintConfig = 0x120; // FClothConstraintSetup_Legacy
		constexpr auto ShearConstraintConfig = 0x130; // FClothConstraintSetup_Legacy
	}

	namespace n_Aweapon_firearms_rifle_famas_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7e8; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7f0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_UEdGraphNode {
		constexpr auto DeprecatedPins = 0x38; // TArray<UEdGraphPin_Deprecated*>
		constexpr auto NodePosX = 0x48; // int32_t
		constexpr auto NodePosY = 0x4c; // int32_t
		constexpr auto NodeWidth = 0x50; // int32_t
		constexpr auto NodeHeight = 0x54; // int32_t
		constexpr auto AdvancedPinDisplay = 0x58; // ENodeAdvancedPins
		constexpr auto EnabledState = 0x59; // ENodeEnabledState
		constexpr auto bDisplayAsDisabled = 0x5b; // char : 1
		constexpr auto bUserSetEnabledState = 0x5b; // char : 1
		constexpr auto bIsNodeEnabled = 0x5b; // char : 1
		constexpr auto bHasCompilerMessage = 0x5b; // char : 1
		constexpr auto NodeComment = 0x60; // FString
		constexpr auto ErrorType = 0x70; // int32_t
		constexpr auto ErrorMsg = 0x78; // FString
		constexpr auto NodeGuid = 0x88; // FGuid
	}

	namespace n_ASpotLight {
		constexpr auto SpotLightComponent = 0x230; // USpotLightComponent*
	}

	namespace n_UMaterialExpressionSceneDepthWithoutWater {
		constexpr auto InputMode = 0x40; // EMaterialSceneAttributeInputMode
		constexpr auto Input = 0x44; // FExpressionInput
		constexpr auto ConstInput = 0x58; // FVector2D
		constexpr auto FallbackDepth = 0x60; // float
	}

	namespace n_UMovieScenePrimitiveMaterialSection {
		constexpr auto MaterialChannel = 0xe8; // FMovieSceneObjectPathChannel
	}

	namespace n_UDeviceProfile {
		constexpr auto DeviceType = 0x38; // FString
		constexpr auto BaseProfileName = 0x48; // FString
		constexpr auto Parent = 0x58; // UObject*
		constexpr auto CVars = 0x88; // TArray<FString>
	}

	namespace n_UEnvQueryGenerator_Donut {
		constexpr auto InnerRadius = 0x80; // FAIDataProviderFloatValue
		constexpr auto OuterRadius = 0xb8; // FAIDataProviderFloatValue
		constexpr auto NumberOfRings = 0xf0; // FAIDataProviderIntValue
		constexpr auto PointsPerRing = 0x128; // FAIDataProviderIntValue
		constexpr auto ArcDirection = 0x160; // FEnvDirection
		constexpr auto ArcAngle = 0x180; // FAIDataProviderFloatValue
		constexpr auto bUseSpiralPattern = 0x1b8; // bool
		constexpr auto Center = 0x1c0; // UEnvQueryContext*
		constexpr auto bDefineArc = 0x1c8; // char : 1
	}

	namespace n_UARTrackableNotifyComponent {
		constexpr auto OnAddTrackedGeometry = 0xb0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedGeometry = 0xc0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedGeometry = 0xd0; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedPlane = 0xe0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedPlane = 0xf0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedPlane = 0x100; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedPoint = 0x110; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedPoint = 0x120; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedPoint = 0x130; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedImage = 0x140; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedImage = 0x150; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedImage = 0x160; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedFace = 0x170; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedFace = 0x180; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedFace = 0x190; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedEnvProbe = 0x1a0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedEnvProbe = 0x1b0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedEnvProbe = 0x1c0; // FMulticastInlineDelegate
		constexpr auto OnAddTrackedObject = 0x1d0; // FMulticastInlineDelegate
		constexpr auto OnUpdateTrackedObject = 0x1e0; // FMulticastInlineDelegate
		constexpr auto OnRemoveTrackedObject = 0x1f0; // FMulticastInlineDelegate
	}

	namespace n_UPlaneFalloff {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto MinRange = 0xb4; // float
		constexpr auto MaxRange = 0xb8; // float
		constexpr auto Default = 0xbc; // float
		constexpr auto Distance = 0xc0; // float
		constexpr auto Position = 0xc4; // FVector
		constexpr auto Normal = 0xd0; // FVector
		constexpr auto Falloff = 0xdc; // EFieldFalloffType
	}

	namespace n_AEmitter {
		constexpr auto ParticleSystemComponent = 0x220; // UParticleSystemComponent*
		constexpr auto bDestroyOnSystemFinish = 0x228; // char : 1
		constexpr auto bPostUpdateTickGroup = 0x228; // char : 1
		constexpr auto bCurrentlyActive = 0x228; // char : 1
		constexpr auto OnParticleSpawn = 0x230; // FMulticastInlineDelegate
		constexpr auto OnParticleBurst = 0x240; // FMulticastInlineDelegate
		constexpr auto OnParticleDeath = 0x250; // FMulticastInlineDelegate
		constexpr auto OnParticleCollide = 0x260; // FMulticastInlineDelegate
	}

	namespace n_UReflectionCaptureComponent {
		constexpr auto CaptureOffsetComponent = 0x1f8; // UBillboardComponent*
		constexpr auto ReflectionSourceType = 0x200; // EReflectionSourceType
		constexpr auto MobileReflectionCompression = 0x201; // EMobileReflectionCompression
		constexpr auto Cubemap = 0x208; // UTextureCube*
		constexpr auto SourceCubemapAngle = 0x210; // float
		constexpr auto Brightness = 0x214; // float
		constexpr auto bModifyMaxValueRGBM = 0x218; // bool
		constexpr auto MaxValueRGBM = 0x21c; // float
		constexpr auto CaptureOffset = 0x220; // FVector
		constexpr auto MapBuildDataId = 0x22c; // FGuid
		constexpr auto CachedEncodedHDRCubemap = 0x250; // UTextureCube*
	}

	namespace n_UCrowdFollowingComponent {
		constexpr auto CrowdAgentMoveDirection = 0x268; // FVector
	}

	namespace n_ULandscapeSettings {
		constexpr auto MaxNumberOfLayers = 0x38; // int32_t
	}

	namespace n_USFPSPhysicalMaterial {
		constexpr auto EnergyDrain = 0x80; // float
		constexpr auto bDropWoodLogs = 0x84; // bool
		constexpr auto WoodLogsRef = 0x88; // ASFPSBaseItem*
		constexpr auto WoodLogsCount = 0x90; // int32_t
		constexpr auto NeedAttackCountForWoodLogsDrop = 0x94; // int32_t
		constexpr auto PhysMaterialProp = 0x98; // USFPSPhysMatSoundTable*
		constexpr auto bWaterMaterial = 0xa0; // bool
		constexpr auto VehicleResists = 0xa4; // float [0x7]
		constexpr auto VehicleDamage = 0xc0; // float [0x7]
	}

	namespace n_AMagicLeapARPinInfoActor_C {
		constexpr auto UberGraphFrame = 0x238; // FPointerToUberGraphFrame
		constexpr auto Right = 0x240; // UStaticMeshComponent*
		constexpr auto Forward = 0x248; // UStaticMeshComponent*
		constexpr auto Up = 0x250; // UStaticMeshComponent*
		constexpr auto ValidRadiusVisualizer = 0x258; // USphereComponent*
		constexpr auto AxisRoot = 0x260; // USceneComponent*
		constexpr auto VisualizerRoot = 0x268; // USceneComponent*
		constexpr auto TypeValue = 0x270; // UTextRenderComponent*
		constexpr auto TransErrValue = 0x278; // UTextRenderComponent*
		constexpr auto RotErrValue = 0x280; // UTextRenderComponent*
		constexpr auto ConfidenceValue = 0x288; // UTextRenderComponent*
		constexpr auto TransErrLabel = 0x290; // UTextRenderComponent*
		constexpr auto RotErrLabel = 0x298; // UTextRenderComponent*
		constexpr auto ConfidenceLabel = 0x2a0; // UTextRenderComponent*
		constexpr auto PinIDValue = 0x2a8; // UTextRenderComponent*
		constexpr auto InfoRoot = 0x2b0; // USceneComponent*
		constexpr auto Root = 0x2b8; // USceneComponent*
		constexpr auto RotationSmoothSpeed = 0x2c0; // float
	}

	namespace n_UProxyLODMeshSimplificationSettings {
		constexpr auto ProxyLODMeshReductionModuleName = 0x38; // FName
	}

	namespace n_UPaperTileSet {
		constexpr auto TileSize = 0x28; // FIntPoint
		constexpr auto TileSheet = 0x30; // UTexture2D*
		constexpr auto AdditionalSourceTextures = 0x38; // TArray<UTexture*>
		constexpr auto BorderMargin = 0x48; // FIntMargin
		constexpr auto PerTileSpacing = 0x58; // FIntPoint
		constexpr auto DrawingOffset = 0x60; // FIntPoint
		constexpr auto WidthInTiles = 0x68; // int32_t
		constexpr auto HeightInTiles = 0x6c; // int32_t
		constexpr auto AllocatedWidth = 0x70; // int32_t
		constexpr auto AllocatedHeight = 0x74; // int32_t
		constexpr auto PerTileData = 0x78; // TArray<FPaperTileMetadata>
		constexpr auto Terrains = 0x88; // TArray<FPaperTileSetTerrain>
		constexpr auto TileWidth = 0x98; // int32_t
		constexpr auto TileHeight = 0x9c; // int32_t
		constexpr auto Margin = 0xa0; // int32_t
		constexpr auto Spacing = 0xa4; // int32_t
	}

	namespace n_UAsyncTaskDownloadImage {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFail = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UAnimNotify_PlayMontageNotifyWindow {
		constexpr auto NotifyName = 0x30; // FName
	}

	namespace n_UMaterialExpressionTextureBase {
		constexpr auto Texture = 0x40; // UTexture*
	}

	namespace n_UGizmoWorldAxisSource {
		constexpr auto Origin = 0x30; // FVector
		constexpr auto AxisIndex = 0x3c; // int32_t
	}

	namespace n_UPlayerInput {
		constexpr auto DebugExecBindings = 0x120; // TArray<FKeyBind>
		constexpr auto InvertedAxis = 0x160; // TArray<FName>
	}

	namespace n_ASFPSGameplayEventPoint {
		constexpr auto RewardPointLocations = 0x238; // TArray<FVector>
		constexpr auto Radius = 0x248; // float
	}

	namespace n_UAppleImageUtilsBaseAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
		constexpr auto ConversionResult = 0x60; // FAppleImageUtilsImageConversionResult
	}

	namespace n_USkeletalMeshSimulationComponent {
		constexpr auto PhysicalMaterial = 0xb8; // UChaosPhysicalMaterial*
		constexpr auto ChaosSolverActor = 0xc0; // AChaosSolverActor*
		constexpr auto OverridePhysicsAsset = 0xc8; // UPhysicsAsset*
		constexpr auto bSimulating = 0xd0; // bool
		constexpr auto bNotifyCollisions = 0xd1; // bool
		constexpr auto ObjectType = 0xd2; // EObjectStateTypeEnum
		constexpr auto Density = 0xd4; // float
		constexpr auto MinMass = 0xd8; // float
		constexpr auto MaxMass = 0xdc; // float
		constexpr auto CollisionType = 0xe0; // ECollisionTypeEnum
		constexpr auto ImplicitShapeParticlesPerUnitArea = 0xe4; // float
		constexpr auto ImplicitShapeMinNumParticles = 0xe8; // int32_t
		constexpr auto ImplicitShapeMaxNumParticles = 0xec; // int32_t
		constexpr auto MinLevelSetResolution = 0xf0; // int32_t
		constexpr auto MaxLevelSetResolution = 0xf4; // int32_t
		constexpr auto CollisionGroup = 0xf8; // int32_t
		constexpr auto InitialVelocityType = 0xfc; // EInitialVelocityTypeEnum
		constexpr auto InitialLinearVelocity = 0x100; // FVector
		constexpr auto InitialAngularVelocity = 0x10c; // FVector
		constexpr auto OnChaosPhysicsCollision = 0x118; // FMulticastInlineDelegate
	}

	namespace n_UARPoseComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARPoseUpdatePayload
	}

	namespace n_AControlPointMeshActor {
		constexpr auto ControlPointMeshComponent = 0x220; // UControlPointMeshComponent*
	}

	namespace n_UEnvQuery {
		constexpr auto QueryName = 0x30; // FName
		constexpr auto Options = 0x38; // TArray<UEnvQueryOption*>
	}

	namespace n_UBlackboardKeyType_Class {
		constexpr auto BaseClass = 0x30; // UObject*
	}

	namespace n_UPacketHandlerProfileConfig {
		constexpr auto Components = 0x28; // TArray<FString>
	}

	namespace n_USoundAttenuation {
		constexpr auto Attenuation = 0x28; // FSoundAttenuationSettings
	}

	namespace n_UDatasmithPointLightComponentTemplate {
		constexpr auto IntensityUnits = 0x30; // ELightUnits
		constexpr auto SourceRadius = 0x34; // float
		constexpr auto SourceLength = 0x38; // float
		constexpr auto AttenuationRadius = 0x3c; // float
	}

	namespace n_UDatasmithLandscapeTemplate {
		constexpr auto LandscapeMaterial = 0x30; // UMaterialInterface*
		constexpr auto StaticLightingLOD = 0x38; // int32_t
	}

	namespace n_UEnvQueryGenerator_Cone {
		constexpr auto AlignedPointsDistance = 0x80; // FAIDataProviderFloatValue
		constexpr auto ConeDegrees = 0xb8; // FAIDataProviderFloatValue
		constexpr auto AngleStep = 0xf0; // FAIDataProviderFloatValue
		constexpr auto Range = 0x128; // FAIDataProviderFloatValue
		constexpr auto CenterActor = 0x160; // UEnvQueryContext*
		constexpr auto bIncludeContextLocation = 0x168; // char : 1
	}

	namespace n_UMovieSceneCameraShakeSourceShakeSection {
		constexpr auto ShakeData = 0xe8; // FMovieSceneCameraShakeSectionData
	}

	namespace n_UTestMovieSceneTrack {
		constexpr auto bHighPassFilter = 0x98; // bool
		constexpr auto SectionArray = 0xa0; // TArray<UMovieSceneSection*>
	}

	namespace n_ACharacter_man_01_C {
		constexpr auto frmPVE = 0x1170; // UWidgetComponent*
		constexpr auto weapon_barrier_sg1 = 0x1178; // USceneComponent*
		constexpr auto weapon_barrier_gun0 = 0x1180; // USceneComponent*
		constexpr auto weapon_barrier_sg0 = 0x1188; // USceneComponent*
		constexpr auto weapon_barrier_ar0 = 0x1190; // USceneComponent*
	}

	namespace n_USoundNodeOscillator {
		constexpr auto bModulateVolume = 0x48; // char : 1
		constexpr auto bModulatePitch = 0x48; // char : 1
		constexpr auto AmplitudeMin = 0x4c; // float
		constexpr auto AmplitudeMax = 0x50; // float
		constexpr auto FrequencyMin = 0x54; // float
		constexpr auto FrequencyMax = 0x58; // float
		constexpr auto OffsetMin = 0x5c; // float
		constexpr auto OffsetMax = 0x60; // float
		constexpr auto CenterMin = 0x64; // float
		constexpr auto CenterMax = 0x68; // float
	}

	namespace n_UAnimCurveCompressionSettings {
		constexpr auto Codec = 0x28; // UAnimCurveCompressionCodec*
	}

	namespace n_UParticleModuleTrailSource {
		constexpr auto SourceMethod = 0x30; // ETrail2SourceMethod
		constexpr auto SourceName = 0x34; // FName
		constexpr auto SourceStrength = 0x40; // FRawDistributionFloat
		constexpr auto bLockSourceStength = 0x70; // char : 1
		constexpr auto SourceOffsetCount = 0x74; // int32_t
		constexpr auto SourceOffsetDefaults = 0x78; // TArray<FVector>
		constexpr auto SelectionMethod = 0x88; // EParticleSourceSelectionMethod
		constexpr auto bInheritRotation = 0x8c; // char : 1
	}

	namespace n_ASFPSAirDropPlane {
		constexpr auto Velocity = 0x224; // FVector
		constexpr auto MovementComponent = 0x238; // UProjectileMovementComponent*
	}

	namespace n_UAudioImpulseResponse {
		constexpr auto ImpulseResponse = 0x28; // TArray<float>
		constexpr auto NumChannels = 0x38; // int32_t
		constexpr auto SampleRate = 0x3c; // int32_t
		constexpr auto NormalizationVolumeDb = 0x40; // float
		constexpr auto bTrueStereo = 0x44; // bool
		constexpr auto IRData = 0x48; // TArray<float>
	}

	namespace n_UBTTask_WaitBlackboardTime {
		constexpr auto BlackboardKey = 0x78; // FBlackboardKeySelector
	}

	namespace n_UEnvQueryInstanceBlueprintWrapper {
		constexpr auto QueryID = 0x30; // int32_t
		constexpr auto ItemType = 0x58; // UEnvQueryItemType*
		constexpr auto OptionIndex = 0x60; // int32_t
		constexpr auto OnQueryFinishedEvent = 0x68; // FMulticastInlineDelegate
	}

	namespace n_UPaperGroupedSpriteComponent {
		constexpr auto InstanceMaterials = 0x478; // TArray<UMaterialInterface*>
		constexpr auto PerInstanceSpriteData = 0x488; // TArray<FSpriteInstanceData>
	}

	namespace n_UTextPropertyTestObject {
		constexpr auto DefaultedText = 0x28; // FText
		constexpr auto UndefaultedText = 0x40; // FText
		constexpr auto TransientText = 0x58; // FText
	}

	namespace n_UAnimNotify_PlayParticleEffect {
		constexpr auto PSTemplate = 0x38; // UParticleSystem*
		constexpr auto LocationOffset = 0x40; // FVector
		constexpr auto RotationOffset = 0x4c; // FRotator
		constexpr auto Scale = 0x58; // FVector
		constexpr auto Attached = 0x80; // char : 1
		constexpr auto SocketName = 0x84; // FName
	}

	namespace n_APaperTileMapActor {
		constexpr auto RenderComponent = 0x220; // UPaperTileMapComponent*
	}

	namespace n_UMediaTimeStampInfo {
		constexpr auto Time = 0x28; // FTimespan
		constexpr auto SequenceIndex = 0x30; // int64_t
	}

	namespace n_Aweapon_steelarms_axe_01_C {
		constexpr auto DamagePoint2 = 0x620; // USceneComponent*
		constexpr auto DamagePoint1 = 0x628; // USceneComponent*
		constexpr auto DamagePoint0 = 0x630; // USceneComponent*
	}

	namespace n_UNavigationGraphNodeComponent {
		constexpr auto Node = 0x1f8; // FNavGraphNode
		constexpr auto NextNodeComponent = 0x210; // UNavigationGraphNodeComponent*
		constexpr auto PrevNodeComponent = 0x218; // UNavigationGraphNodeComponent*
	}

	namespace n_UDialogueWave {
		constexpr auto bMature = 0x28; // char : 1
		constexpr auto bOverride_SubtitleOverride = 0x28; // char : 1
		constexpr auto SpokenText = 0x30; // FString
		constexpr auto SubtitleOverride = 0x40; // FString
		constexpr auto ContextMappings = 0x50; // TArray<FDialogueContextMapping>
		constexpr auto LocalizationGUID = 0x60; // FGuid
	}

	namespace n_UStaticMeshComponent {
		constexpr auto ForcedLodModel = 0x478; // int32_t
		constexpr auto PreviousLODLevel = 0x47c; // int32_t
		constexpr auto MinLOD = 0x480; // int32_t
		constexpr auto SubDivisionStepSize = 0x484; // int32_t
		constexpr auto StaticMesh = 0x488; // UStaticMesh*
		constexpr auto WireframeColorOverride = 0x490; // FColor
		constexpr auto bEvaluateWorldPositionOffset = 0x494; // char : 1
		constexpr auto bOverrideWireframeColor = 0x494; // char : 1
		constexpr auto bOverrideMinLod = 0x494; // char : 1
		constexpr auto bOverrideNavigationExport = 0x494; // char : 1
		constexpr auto bForceNavigationObstacle = 0x494; // char : 1
		constexpr auto bDisallowMeshPaintPerInstance = 0x494; // char : 1
		constexpr auto bIgnoreInstanceForTextureStreaming = 0x494; // char : 1
		constexpr auto bOverrideLightMapRes = 0x494; // char : 1
		constexpr auto bCastDistanceFieldIndirectShadow = 0x495; // char : 1
		constexpr auto bOverrideDistanceFieldSelfShadowBias = 0x495; // char : 1
		constexpr auto bUseSubDivisions = 0x495; // char : 1
		constexpr auto bUseDefaultCollision = 0x495; // char : 1
		constexpr auto bReverseCulling = 0x495; // char : 1
		constexpr auto OverriddenLightMapRes = 0x498; // int32_t
		constexpr auto DistanceFieldIndirectShadowMinVisibility = 0x49c; // float
		constexpr auto DistanceFieldSelfShadowBias = 0x4a0; // float
		constexpr auto StreamingDistanceMultiplier = 0x4a4; // float
		constexpr auto LODData = 0x4a8; // TArray<FStaticMeshComponentLODInfo>
		constexpr auto StreamingTextureData = 0x4b8; // TArray<FStreamingTextureBuildInfo>
		constexpr auto LightmassSettings = 0x4c8; // FLightmassPrimitiveSettings
	}

	namespace n_UGarbageCollectionSettings {
		constexpr auto TimeBetweenPurgingPendingKillObjects = 0x38; // float
		constexpr auto FlushStreamingOnGC = 0x3c; // char : 1
		constexpr auto AllowParallelGC = 0x3c; // char : 1
		constexpr auto IncrementalBeginDestroyEnabled = 0x3c; // char : 1
		constexpr auto MultithreadedDestructionEnabled = 0x3c; // char : 1
		constexpr auto CreateGCClusters = 0x3c; // char : 1
		constexpr auto AssetClusteringEnabled = 0x3c; // char : 1
		constexpr auto ActorClusteringEnabled = 0x3c; // char : 1
		constexpr auto BlueprintClusteringEnabled = 0x3c; // char : 1
		constexpr auto UseDisregardForGCOnDedicatedServers = 0x3d; // char : 1
		constexpr auto MinGCClusterSize = 0x40; // int32_t
		constexpr auto NumRetriesBeforeForcingGC = 0x44; // int32_t
		constexpr auto MaxObjectsNotConsideredByGC = 0x48; // int32_t
		constexpr auto SizeOfPermanentObjectPool = 0x4c; // int32_t
		constexpr auto MaxObjectsInGame = 0x50; // int32_t
		constexpr auto MaxObjectsInEditor = 0x54; // int32_t
	}

	namespace n_AMagicLeapSharedWorldGameMode {
		constexpr auto SharedWorldData = 0x308; // FMagicLeapSharedWorldSharedData
		constexpr auto OnNewLocalDataFromClients = 0x318; // FMulticastInlineDelegate
		constexpr auto PinSelectionConfidenceThreshold = 0x328; // float
		constexpr auto ChosenOne = 0x3d0; // AMagicLeapSharedWorldPlayerController*
	}

	namespace n_UBlackboardKeyType_Enum {
		constexpr auto EnumType = 0x30; // UEnum*
		constexpr auto EnumName = 0x38; // FString
		constexpr auto bIsEnumNameValid = 0x48; // char : 1
	}

	namespace n_ASFPSPlayerController {
		constexpr auto SteamDLCExistCallback = 0x574; // FDelegate
	}

	namespace n_UBTDecorator_DoesPathExist {
		constexpr auto BlackboardKeyA = 0x68; // FBlackboardKeySelector
		constexpr auto BlackboardKeyB = 0x90; // FBlackboardKeySelector
		constexpr auto bUseSelf = 0xb8; // char : 1
		constexpr auto PathQueryType = 0xbc; // EPathExistanceQueryType
		constexpr auto FilterClass = 0xc0; // UNavigationQueryFilter*
	}

	namespace n_UMaterialExpressionTruncate {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UVirtualTexturePoolConfig {
		constexpr auto DefaultSizeInMegabyte = 0x28; // int32_t
		constexpr auto Pools = 0x30; // TArray<FVirtualTextureSpacePoolConfig>
	}

	namespace n_ULoudnessNRT {
		constexpr auto Settings = 0x78; // ULoudnessNRTSettings*
	}

	namespace n_UAnimClassData {
		constexpr auto BakedStateMachines = 0x30; // TArray<FBakedAnimationStateMachine>
		constexpr auto TargetSkeleton = 0x40; // USkeleton*
		constexpr auto AnimNotifies = 0x48; // TArray<FAnimNotifyEvent>
		constexpr auto OrderedSavedPoseIndicesMap = 0x58; // TMap<FName, FCachedPoseIndices>
		constexpr auto AnimBlueprintFunctions = 0xa8; // TArray<FAnimBlueprintFunction>
		constexpr auto AnimBlueprintFunctionData = 0xb8; // TArray<FAnimBlueprintFunctionData>
		constexpr auto AnimNodeProperties = 0xc8; // TArray<TFieldPath<FStructProperty>>
		constexpr auto LinkedAnimGraphNodeProperties = 0xe8; // TArray<TFieldPath<FStructProperty>>
		constexpr auto LinkedAnimLayerNodeProperties = 0x108; // TArray<TFieldPath<FStructProperty>>
		constexpr auto PreUpdateNodeProperties = 0x128; // TArray<TFieldPath<FStructProperty>>
		constexpr auto DynamicResetNodeProperties = 0x148; // TArray<TFieldPath<FStructProperty>>
		constexpr auto StateMachineNodeProperties = 0x168; // TArray<TFieldPath<FStructProperty>>
		constexpr auto InitializationNodeProperties = 0x188; // TArray<TFieldPath<FStructProperty>>
		constexpr auto GraphNameAssetPlayers = 0x1a8; // TMap<FName, FGraphAssetPlayerInformation>
		constexpr auto SyncGroupNames = 0x1f8; // TArray<FName>
		constexpr auto EvaluateGraphExposedInputs = 0x208; // TArray<FExposedValueHandler>
		constexpr auto GraphBlendOptions = 0x218; // TMap<FName, FAnimGraphBlendOptions>
		constexpr auto PropertyAccessLibrary = 0x268; // FPropertyAccessLibrary
	}

	namespace n_USourceEffectChorusPreset {
		constexpr auto Settings = 0x108; // FSourceEffectChorusSettings
	}

	namespace n_ADefaultPawn {
		constexpr auto BaseTurnRate = 0x280; // float
		constexpr auto BaseLookUpRate = 0x284; // float
		constexpr auto MovementComponent = 0x288; // UPawnMovementComponent*
		constexpr auto CollisionComponent = 0x290; // USphereComponent*
		constexpr auto MeshComponent = 0x298; // UStaticMeshComponent*
		constexpr auto bAddDefaultMovementBindings = 0x2a0; // char : 1
	}

	namespace n_USFPSACSteamInventory {
		constexpr auto ClientInventory = 0xd8; // TArray<TWeakObjectPtr<ASFPSBaseItem>>
	}

	namespace n_UNavCollision {
		constexpr auto CylinderCollision = 0x80; // TArray<FNavCollisionCylinder>
		constexpr auto BoxCollision = 0x90; // TArray<FNavCollisionBox>
		constexpr auto AreaClass = 0xa0; // UNavArea*
		constexpr auto bGatherConvexGeometry = 0xa8; // char : 1
		constexpr auto bCreateOnClient = 0xa8; // char : 1
	}

	namespace n_USubsurfaceProfile {
		constexpr auto Settings = 0x28; // FSubsurfaceProfileStruct
	}

	namespace n_UDistributionFloatParameterBase {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto MinInput = 0x48; // float
		constexpr auto MaxInput = 0x4c; // float
		constexpr auto MinOutput = 0x50; // float
		constexpr auto MaxOutput = 0x54; // float
		constexpr auto ParamMode = 0x58; // DistributionParamMode
	}

	namespace n_UDatasmithStaticMeshGLTFImportData {
		constexpr auto SourceMeshName = 0x28; // FString
	}

	namespace n_UGameMapsSettings {
		constexpr auto LocalMapOptions = 0x28; // FString
		constexpr auto TransitionMap = 0x38; // FSoftObjectPath
		constexpr auto bUseSplitscreen = 0x50; // bool
		constexpr auto TwoPlayerSplitscreenLayout = 0x51; // ETwoPlayerSplitScreenType
		constexpr auto ThreePlayerSplitscreenLayout = 0x52; // EThreePlayerSplitScreenType
		constexpr auto FourPlayerSplitscreenLayout = 0x53; // EFourPlayerSplitScreenType
		constexpr auto bOffsetPlayerGamepadIds = 0x54; // bool
		constexpr auto GameInstanceClass = 0x58; // FSoftClassPath
		constexpr auto GameDefaultMap = 0x70; // FSoftObjectPath
		constexpr auto ServerDefaultMap = 0x88; // FSoftObjectPath
		constexpr auto GlobalDefaultGameMode = 0xa0; // FSoftClassPath
		constexpr auto GlobalDefaultServerGameMode = 0xb8; // FSoftClassPath
		constexpr auto GameModeMapPrefixes = 0xd0; // TArray<FGameModeName>
		constexpr auto GameModeClassAliases = 0xe0; // TArray<FGameModeName>
	}

	namespace n_APhysicsVolume {
		constexpr auto TerminalVelocity = 0x258; // float
		constexpr auto Priority = 0x25c; // int32_t
		constexpr auto FluidFriction = 0x260; // float
		constexpr auto bWaterVolume = 0x264; // char : 1
		constexpr auto bPhysicsOnContact = 0x264; // char : 1
	}

	namespace n_UARQRCodeComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARQRCodeUpdatePayload
	}

	namespace n_UUserDefinedStruct {
		constexpr auto Status = 0xc0; // EUserDefinedStructureStatus
		constexpr auto Guid = 0xc4; // FGuid
	}

	namespace n_UDistributionVectorConstant {
		constexpr auto Constant = 0x38; // FVector
		constexpr auto bLockAxes = 0x44; // char : 1
		constexpr auto LockedAxes = 0x48; // EDistributionVectorLockFlags
	}

	namespace n_UParticleModuleSpawn {
		constexpr auto Rate = 0x38; // FRawDistributionFloat
		constexpr auto RateScale = 0x68; // FRawDistributionFloat
		constexpr auto ParticleBurstMethod = 0x98; // EParticleBurstMethod
		constexpr auto BurstList = 0xa0; // TArray<FParticleBurst>
		constexpr auto BurstScale = 0xb0; // FRawDistributionFloat
		constexpr auto bApplyGlobalSpawnRateScale = 0xe0; // char : 1
	}

	namespace n_USFPSHiddenStash {
		constexpr auto LootBoxSpawner = 0x30; // ASFPSLootBoxSpawner*
	}

	namespace n_ASFPSSmallArms {
		constexpr auto CharacterReloadAnim = 0x500; // UAnimMontage*
		constexpr auto CharacterReloadAnimWithLastRoundStopper = 0x508; // UAnimMontage*
		constexpr auto CharacterReloadAnimOnlyMagazine = 0x510; // UAnimMontage*
		constexpr auto CharacterReloadAnimOneAmmo = 0x518; // UAnimMontage*
		constexpr auto CharacterReloadAnimWithLastRoundStopperOneAmmo = 0x520; // UAnimMontage*
		constexpr auto CharacterReloadAnimProne = 0x528; // UAnimMontage*
		constexpr auto CharacterReloadAnimWithLastRoundStopperProne = 0x530; // UAnimMontage*
		constexpr auto CharacterReloadAnimOnlyMagazineProne = 0x538; // UAnimMontage*
		constexpr auto CharacterReloadAnimOneAmmoProne = 0x540; // UAnimMontage*
		constexpr auto CharacterReloadAnimWithLastRoundStopperOneAmmoProne = 0x548; // UAnimMontage*
		constexpr auto ReloadAnim = 0x550; // UAnimMontage*
		constexpr auto ReloadAnimWithLastRoundStopper = 0x558; // UAnimMontage*
		constexpr auto ReloadAnimOnlyMagazine = 0x560; // UAnimMontage*
		constexpr auto ReloadAnimOneAmmo = 0x568; // UAnimMontage*
		constexpr auto ReloadAnimWithLastRoundStopperOneAmmo = 0x570; // UAnimMontage*
		constexpr auto ReloadAnimProne = 0x578; // UAnimMontage*
		constexpr auto ReloadAnimWithLastRoundStopperProne = 0x580; // UAnimMontage*
		constexpr auto ReloadAnimOnlyMagazineProne = 0x588; // UAnimMontage*
		constexpr auto ReloadAnimOneAmmoProne = 0x590; // UAnimMontage*
		constexpr auto ReloadAnimWithLastRoundStopperOneAmmoProne = 0x598; // UAnimMontage*
		constexpr auto SocketMuzzle = 0x5a0; // FTransform
		constexpr auto SocketCartridge = 0x5d0; // FTransform
		constexpr auto SocketDeviceBottom = 0x600; // FTransform
		constexpr auto SocketDeviceLeft = 0x630; // FTransform
		constexpr auto SocketDeviceLeftOverride = 0x660; // FName
		constexpr auto SocketSight = 0x670; // FTransform
		constexpr auto SocketCamera = 0x6a0; // FTransform
		constexpr auto AmmoClass = 0x6f0; // ASFPSAmmo*
		constexpr auto ShellType = 0x701; // ESFPSShellType
		constexpr auto bAddShellImpulse = 0x702; // bool
		constexpr auto FatigueType = 0x703; // ESFPSWeaponFatigueType
		constexpr auto AmmoParams = 0x704; // FSFPSAmmoParameters
		constexpr auto StartVelocity = 0x718; // float
		constexpr auto SightOpenRef = 0x720; // UStaticMeshComponent*
		constexpr auto SightCloseRef = 0x728; // UStaticMeshComponent*
		constexpr auto DeviceLeftMountRef = 0x730; // UStaticMeshComponent*
		constexpr auto DefaultDTKRef = 0x738; // UStaticMeshComponent*
		constexpr auto MagazineEmptyDefault = 0x740; // UStaticMesh*
		constexpr auto MagazineFullDefault = 0x748; // UStaticMesh*
		constexpr auto AmmoCount = 0x750; // int32_t
		constexpr auto MaxAmmo = 0x754; // int32_t
		constexpr auto DamageMult = 0x758; // float
		constexpr auto bUseLastRoundStopper = 0x75c; // bool
		constexpr auto bIgnoreLastRoundStopperIfExistOnlyOneAmmo = 0x75d; // bool
		constexpr auto bLastRoundStopper = 0x75e; // bool
		constexpr auto bHammerCocked = 0x75f; // bool
		constexpr auto bReloadByOneAmmo = 0x760; // bool
		constexpr auto CharacterShotAnim = 0x768; // UAnimMontage*
		constexpr auto ShotAnim = 0x770; // UAnimMontage*
		constexpr auto ShotAnimForLastRoundStopper = 0x778; // UAnimMontage*
		constexpr auto HammerCockingAnim = 0x780; // UAnimMontage*
		constexpr auto ShotParticle = 0x788; // UParticleSystem*
		constexpr auto RecoilVerticalMin = 0x790; // float
		constexpr auto RecoilVerticalMax = 0x794; // float
		constexpr auto RecoilHorizontalLeft = 0x798; // float
		constexpr auto RecoilHorizontalRight = 0x79c; // float
		constexpr auto RollbackLRMax = 0x7a8; // float
		constexpr auto RollbackCurve = 0x7b0; // UCurveFloat*
		constexpr auto IronSightSwitchSpeed = 0x7b8; // float
		constexpr auto IronSightZoom = 0x7bc; // float
		constexpr auto ProjectileClass = 0x7c0; // ASFPSProjectile*
		constexpr auto SpreadAngle = 0x7c8; // float
		constexpr auto DropShellArterShot = 0x7cc; // bool
	}

	namespace n_ADebugCameraController {
		constexpr auto bShowSelectedInfo = 0x570; // char : 1
		constexpr auto bIsFrozenRendering = 0x570; // char : 1
		constexpr auto bIsOrbitingSelectedActor = 0x570; // char : 1
		constexpr auto bOrbitPivotUseCenter = 0x570; // char : 1
		constexpr auto bEnableBufferVisualization = 0x570; // char : 1
		constexpr auto bEnableBufferVisualizationFullMode = 0x570; // char : 1
		constexpr auto bIsBufferVisualizationInputSetup = 0x570; // char : 1
		constexpr auto bLastDisplayEnabled = 0x570; // char : 1
		constexpr auto DrawFrustum = 0x578; // UDrawFrustumComponent*
		constexpr auto SelectedActor = 0x580; // AActor*
		constexpr auto SelectedComponent = 0x588; // UPrimitiveComponent*
		constexpr auto SelectedHitPoint = 0x590; // FHitResult
		constexpr auto OriginalControllerRef = 0x618; // APlayerController*
		constexpr auto OriginalPlayer = 0x620; // UPlayer*
		constexpr auto SpeedScale = 0x628; // float
		constexpr auto InitialMaxSpeed = 0x62c; // float
		constexpr auto InitialAccel = 0x630; // float
		constexpr auto InitialDecel = 0x634; // float
	}

	namespace n_ASFPSWeaponMF_AdditionalCartridge {
		constexpr auto AmmoCount = 0x334; // int32_t
		constexpr auto CartridgeType = 0x338; // ESFPSWeaponMFAdditionalCartrigeType
		constexpr auto MagazineFull = 0x340; // UStaticMesh*
		constexpr auto OverrideCharacterReloadAnim = 0x348; // UAnimMontage*
		constexpr auto OverrideCharacterReloadAnimWithLastRoundStopper = 0x350; // UAnimMontage*
		constexpr auto OverrideCharacterReloadAnimOnlyMagazine = 0x358; // UAnimMontage*
		constexpr auto OverrideCharacterReloadAnimOneAmmo = 0x360; // UAnimMontage*
		constexpr auto OverrideCharacterReloadAnimWithLastRoundStopperOneAmmo = 0x368; // UAnimMontage*
		constexpr auto OverrideWeaponReloadAnim = 0x370; // UAnimMontage*
		constexpr auto OverrideWeaponReloadAnimWithLastRoundStopper = 0x378; // UAnimMontage*
		constexpr auto OverrideWeaponReloadAnimOnlyMagazine = 0x380; // UAnimMontage*
		constexpr auto OverrideWeaponReloadAnimOneAmmo = 0x388; // UAnimMontage*
		constexpr auto OverrideWeaponReloadAnimWithLastRoundStopperOneAmmo = 0x390; // UAnimMontage*
	}

	namespace n_UABP_weapon_firearms_smg_scorpion_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x3b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x430; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x460; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x4e0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x510; // FAnimNode_StateMachine
	}

	namespace n_UVariantObjectBinding {
		constexpr auto CachedActorLabel = 0x28; // FString
		constexpr auto ObjectPtr = 0x38; // FSoftObjectPath
		constexpr auto LazyObjectPtr = 0x50; // LazyObjectProperty
		constexpr auto CapturedProperties = 0x70; // TArray<UPropertyValue*>
		constexpr auto FunctionCallers = 0x80; // TArray<FFunctionCaller>
	}

	namespace n_UAnimationSettings {
		constexpr auto CompressCommandletVersion = 0x38; // int32_t
		constexpr auto KeyEndEffectorsMatchNameArray = 0x40; // TArray<FString>
		constexpr auto ForceRecompression = 0x50; // bool
		constexpr auto bForceBelowThreshold = 0x51; // bool
		constexpr auto bFirstRecompressUsingCurrentOrDefault = 0x52; // bool
		constexpr auto bRaiseMaxErrorToExisting = 0x53; // bool
		constexpr auto bEnablePerformanceLog = 0x54; // bool
		constexpr auto bStripAnimationDataOnDedicatedServer = 0x55; // bool
		constexpr auto bTickAnimationOnSkeletalMeshInit = 0x56; // bool
		constexpr auto BoneCustomAttributesNames = 0x58; // TArray<FCustomAttributeSetting>
		constexpr auto BoneNamesWithCustomAttributes = 0x68; // TArray<FString>
		constexpr auto AttributeBlendModes = 0x78; // TMap<FName, ECustomAttributeBlendType>
		constexpr auto DefaultAttributeBlendMode = 0xc8; // ECustomAttributeBlendType
	}

	namespace n_UNavAreaMeta_SwitchByAgent {
		constexpr auto Agent0Area = 0x48; // UNavArea*
		constexpr auto Agent1Area = 0x50; // UNavArea*
		constexpr auto Agent2Area = 0x58; // UNavArea*
		constexpr auto Agent3Area = 0x60; // UNavArea*
		constexpr auto Agent4Area = 0x68; // UNavArea*
		constexpr auto Agent5Area = 0x70; // UNavArea*
		constexpr auto Agent6Area = 0x78; // UNavArea*
		constexpr auto Agent7Area = 0x80; // UNavArea*
		constexpr auto Agent8Area = 0x88; // UNavArea*
		constexpr auto Agent9Area = 0x90; // UNavArea*
		constexpr auto Agent10Area = 0x98; // UNavArea*
		constexpr auto Agent11Area = 0xa0; // UNavArea*
		constexpr auto Agent12Area = 0xa8; // UNavArea*
		constexpr auto Agent13Area = 0xb0; // UNavArea*
		constexpr auto Agent14Area = 0xb8; // UNavArea*
		constexpr auto Agent15Area = 0xc0; // UNavArea*
	}

	namespace n_UEditableGameplayTagQueryExpression_NoTagsMatch {
		constexpr auto Tags = 0x28; // FGameplayTagContainer
	}

	namespace n_UGameUserSettings {
		constexpr auto bUseVSync = 0x28; // bool
		constexpr auto bUseDynamicResolution = 0x29; // bool
		constexpr auto ResolutionSizeX = 0x80; // uint32_t
		constexpr auto ResolutionSizeY = 0x84; // uint32_t
		constexpr auto LastUserConfirmedResolutionSizeX = 0x88; // uint32_t
		constexpr auto LastUserConfirmedResolutionSizeY = 0x8c; // uint32_t
		constexpr auto WindowPosX = 0x90; // int32_t
		constexpr auto WindowPosY = 0x94; // int32_t
		constexpr auto FullscreenMode = 0x98; // int32_t
		constexpr auto LastConfirmedFullscreenMode = 0x9c; // int32_t
		constexpr auto PreferredFullscreenMode = 0xa0; // int32_t
		constexpr auto Version = 0xa4; // uint32_t
		constexpr auto AudioQualityLevel = 0xa8; // int32_t
		constexpr auto LastConfirmedAudioQualityLevel = 0xac; // int32_t
		constexpr auto FrameRateLimit = 0xb0; // float
		constexpr auto DesiredScreenWidth = 0xb8; // int32_t
		constexpr auto bUseDesiredScreenHeight = 0xbc; // bool
		constexpr auto DesiredScreenHeight = 0xc0; // int32_t
		constexpr auto LastUserConfirmedDesiredScreenWidth = 0xc4; // int32_t
		constexpr auto LastUserConfirmedDesiredScreenHeight = 0xc8; // int32_t
		constexpr auto LastRecommendedScreenWidth = 0xcc; // float
		constexpr auto LastRecommendedScreenHeight = 0xd0; // float
		constexpr auto LastCPUBenchmarkResult = 0xd4; // float
		constexpr auto LastGPUBenchmarkResult = 0xd8; // float
		constexpr auto LastCPUBenchmarkSteps = 0xe0; // TArray<float>
		constexpr auto LastGPUBenchmarkSteps = 0xf0; // TArray<float>
		constexpr auto LastGPUBenchmarkMultiplier = 0x100; // float
		constexpr auto bUseHDRDisplayOutput = 0x104; // bool
		constexpr auto HDRDisplayOutputNits = 0x108; // int32_t
		constexpr auto OnGameUserSettingsUINeedsUpdate = 0x110; // FMulticastInlineDelegate
	}

	namespace n_UStaticMeshSimulationComponent {
		constexpr auto Simulating = 0xb8; // bool
		constexpr auto bNotifyCollisions = 0xb9; // bool
		constexpr auto ObjectType = 0xba; // EObjectStateTypeEnum
		constexpr auto Mass = 0xbc; // float
		constexpr auto CollisionType = 0xc0; // ECollisionTypeEnum
		constexpr auto ImplicitType = 0xc1; // EImplicitTypeEnum
		constexpr auto MinLevelSetResolution = 0xc4; // int32_t
		constexpr auto MaxLevelSetResolution = 0xc8; // int32_t
		constexpr auto InitialVelocityType = 0xcc; // EInitialVelocityTypeEnum
		constexpr auto InitialLinearVelocity = 0xd0; // FVector
		constexpr auto InitialAngularVelocity = 0xdc; // FVector
		constexpr auto DamageThreshold = 0xe8; // float
		constexpr auto PhysicalMaterial = 0xf0; // UChaosPhysicalMaterial*
		constexpr auto ChaosSolverActor = 0xf8; // AChaosSolverActor*
		constexpr auto OnChaosPhysicsCollision = 0x100; // FMulticastInlineDelegate
		constexpr auto SimulatedComponents = 0x120; // TArray<UPrimitiveComponent*>
	}

	namespace n_UMyPluginObject {
		constexpr auto MyStruct = 0x28; // FMyPluginStruct
	}

	namespace n_UCharacterMovementComponent {
		constexpr auto CharacterOwner = 0x148; // ACharacter*
		constexpr auto GravityScale = 0x150; // float
		constexpr auto MaxStepHeight = 0x154; // float
		constexpr auto JumpZVelocity = 0x158; // float
		constexpr auto JumpOffJumpZFactor = 0x15c; // float
		constexpr auto WalkableFloorAngle = 0x160; // float
		constexpr auto WalkableFloorZ = 0x164; // float
		constexpr auto MovementMode = 0x168; // EMovementMode
		constexpr auto CustomMovementMode = 0x169; // char
		constexpr auto NetworkSmoothingMode = 0x16a; // ENetworkSmoothingMode
		constexpr auto GroundFriction = 0x16c; // float
		constexpr auto MaxWalkSpeed = 0x18c; // float
		constexpr auto MaxWalkSpeedCrouched = 0x190; // float
		constexpr auto MaxSwimSpeed = 0x194; // float
		constexpr auto MaxFlySpeed = 0x198; // float
		constexpr auto MaxCustomMovementSpeed = 0x19c; // float
		constexpr auto MaxAcceleration = 0x1a0; // float
		constexpr auto MinAnalogWalkSpeed = 0x1a4; // float
		constexpr auto BrakingFrictionFactor = 0x1a8; // float
		constexpr auto BrakingFriction = 0x1ac; // float
		constexpr auto BrakingSubStepTime = 0x1b0; // float
		constexpr auto BrakingDecelerationWalking = 0x1b4; // float
		constexpr auto BrakingDecelerationFalling = 0x1b8; // float
		constexpr auto BrakingDecelerationSwimming = 0x1bc; // float
		constexpr auto BrakingDecelerationFlying = 0x1c0; // float
		constexpr auto AirControl = 0x1c4; // float
		constexpr auto AirControlBoostMultiplier = 0x1c8; // float
		constexpr auto AirControlBoostVelocityThreshold = 0x1cc; // float
		constexpr auto FallingLateralFriction = 0x1d0; // float
		constexpr auto CrouchedHalfHeight = 0x1d4; // float
		constexpr auto Buoyancy = 0x1d8; // float
		constexpr auto PerchRadiusThreshold = 0x1dc; // float
		constexpr auto PerchAdditionalHeight = 0x1e0; // float
		constexpr auto RotationRate = 0x1e4; // FRotator
		constexpr auto bUseSeparateBrakingFriction = 0x1f0; // char : 1
		constexpr auto bApplyGravityWhileJumping = 0x1f0; // char : 1
		constexpr auto bUseControllerDesiredRotation = 0x1f0; // char : 1
		constexpr auto bOrientRotationToMovement = 0x1f0; // char : 1
		constexpr auto bSweepWhileNavWalking = 0x1f0; // char : 1
		constexpr auto bMovementInProgress = 0x1f0; // char : 1
		constexpr auto bEnableScopedMovementUpdates = 0x1f0; // char : 1
		constexpr auto bEnableServerDualMoveScopedMovementUpdates = 0x1f1; // char : 1
		constexpr auto bForceMaxAccel = 0x1f1; // char : 1
		constexpr auto bRunPhysicsWithNoController = 0x1f1; // char : 1
		constexpr auto bForceNextFloorCheck = 0x1f1; // char : 1
		constexpr auto bShrinkProxyCapsule = 0x1f1; // char : 1
		constexpr auto bCanWalkOffLedges = 0x1f1; // char : 1
		constexpr auto bCanWalkOffLedgesWhenCrouching = 0x1f1; // char : 1
		constexpr auto bNetworkSkipProxyPredictionOnNetUpdate = 0x1f2; // char : 1
		constexpr auto bNetworkAlwaysReplicateTransformUpdateTimestamp = 0x1f2; // char : 1
		constexpr auto bDeferUpdateMoveComponent = 0x1f2; // char : 1
		constexpr auto bEnablePhysicsInteraction = 0x1f2; // char : 1
		constexpr auto bTouchForceScaledToMass = 0x1f2; // char : 1
		constexpr auto bPushForceScaledToMass = 0x1f2; // char : 1
		constexpr auto bPushForceUsingZOffset = 0x1f2; // char : 1
		constexpr auto bScalePushForceToVelocity = 0x1f3; // char : 1
		constexpr auto DeferredUpdatedMoveComponent = 0x1f8; // USceneComponent*
		constexpr auto MaxOutOfWaterStepHeight = 0x200; // float
		constexpr auto OutofWaterZ = 0x204; // float
		constexpr auto Mass = 0x208; // float
		constexpr auto StandingDownwardForceScale = 0x20c; // float
		constexpr auto InitialPushForceFactor = 0x210; // float
		constexpr auto PushForceFactor = 0x214; // float
		constexpr auto PushForcePointZOffsetFactor = 0x218; // float
		constexpr auto TouchForceFactor = 0x21c; // float
		constexpr auto MinTouchForce = 0x220; // float
		constexpr auto MaxTouchForce = 0x224; // float
		constexpr auto RepulsionForce = 0x228; // float
		constexpr auto Acceleration = 0x22c; // FVector
		constexpr auto LastUpdateRotation = 0x240; // FQuat
		constexpr auto LastUpdateLocation = 0x250; // FVector
		constexpr auto LastUpdateVelocity = 0x25c; // FVector
		constexpr auto ServerLastTransformUpdateTimeStamp = 0x268; // float
		constexpr auto ServerLastClientGoodMoveAckTime = 0x26c; // float
		constexpr auto ServerLastClientAdjustmentTime = 0x270; // float
		constexpr auto PendingImpulseToApply = 0x274; // FVector
		constexpr auto PendingForceToApply = 0x280; // FVector
		constexpr auto AnalogInputModifier = 0x28c; // float
		constexpr auto MaxSimulationTimeStep = 0x29c; // float
		constexpr auto MaxSimulationIterations = 0x2a0; // int32_t
		constexpr auto MaxJumpApexAttemptsPerSimulation = 0x2a4; // int32_t
		constexpr auto MaxDepenetrationWithGeometry = 0x2a8; // float
		constexpr auto MaxDepenetrationWithGeometryAsProxy = 0x2ac; // float
		constexpr auto MaxDepenetrationWithPawn = 0x2b0; // float
		constexpr auto MaxDepenetrationWithPawnAsProxy = 0x2b4; // float
		constexpr auto NetworkSimulatedSmoothLocationTime = 0x2b8; // float
		constexpr auto NetworkSimulatedSmoothRotationTime = 0x2bc; // float
		constexpr auto ListenServerNetworkSimulatedSmoothLocationTime = 0x2c0; // float
		constexpr auto ListenServerNetworkSimulatedSmoothRotationTime = 0x2c4; // float
		constexpr auto NetProxyShrinkRadius = 0x2c8; // float
		constexpr auto NetProxyShrinkHalfHeight = 0x2cc; // float
		constexpr auto NetworkMaxSmoothUpdateDistance = 0x2d0; // float
		constexpr auto NetworkNoSmoothUpdateDistance = 0x2d4; // float
		constexpr auto NetworkMinTimeBetweenClientAckGoodMoves = 0x2d8; // float
		constexpr auto NetworkMinTimeBetweenClientAdjustments = 0x2dc; // float
		constexpr auto NetworkMinTimeBetweenClientAdjustmentsLargeCorrection = 0x2e0; // float
		constexpr auto NetworkLargeClientCorrectionDistance = 0x2e4; // float
		constexpr auto LedgeCheckThreshold = 0x2e8; // float
		constexpr auto JumpOutOfWaterPitch = 0x2ec; // float
		constexpr auto CurrentFloor = 0x2f0; // FFindFloorResult
		constexpr auto DefaultLandMovementMode = 0x384; // EMovementMode
		constexpr auto DefaultWaterMovementMode = 0x385; // EMovementMode
		constexpr auto GroundMovementMode = 0x386; // EMovementMode
		constexpr auto bMaintainHorizontalGroundVelocity = 0x387; // char : 1
		constexpr auto bImpartBaseVelocityX = 0x387; // char : 1
		constexpr auto bImpartBaseVelocityY = 0x387; // char : 1
		constexpr auto bImpartBaseVelocityZ = 0x387; // char : 1
		constexpr auto bImpartBaseAngularVelocity = 0x387; // char : 1
		constexpr auto bJustTeleported = 0x387; // char : 1
		constexpr auto bNetworkUpdateReceived = 0x387; // char : 1
		constexpr auto bNetworkMovementModeChanged = 0x387; // char : 1
		constexpr auto bIgnoreClientMovementErrorChecksAndCorrection = 0x388; // char : 1
		constexpr auto bServerAcceptClientAuthoritativePosition = 0x388; // char : 1
		constexpr auto bNotifyApex = 0x388; // char : 1
		constexpr auto bCheatFlying = 0x388; // char : 1
		constexpr auto bWantsToCrouch = 0x388; // char : 1
		constexpr auto bCrouchMaintainsBaseLocation = 0x388; // char : 1
		constexpr auto bIgnoreBaseRotation = 0x388; // char : 1
		constexpr auto bFastAttachedMove = 0x388; // char : 1
		constexpr auto bAlwaysCheckFloor = 0x389; // char : 1
		constexpr auto bUseFlatBaseForFloorChecks = 0x389; // char : 1
		constexpr auto bPerformingJumpOff = 0x389; // char : 1
		constexpr auto bWantsToLeaveNavWalking = 0x389; // char : 1
		constexpr auto bUseRVOAvoidance = 0x389; // char : 1
		constexpr auto bRequestedMoveUseAcceleration = 0x389; // char : 1
		constexpr auto bWasSimulatingRootMotion = 0x389; // char : 1
		constexpr auto bAllowPhysicsRotationDuringAnimRootMotion = 0x38a; // char : 1
		constexpr auto bHasRequestedVelocity = 0x38a; // char : 1
		constexpr auto bRequestedMoveWithMaxSpeed = 0x38a; // char : 1
		constexpr auto bWasAvoidanceUpdated = 0x38a; // char : 1
		constexpr auto bProjectNavMeshWalking = 0x38a; // char : 1
		constexpr auto bProjectNavMeshOnBothWorldChannels = 0x38a; // char : 1
		constexpr auto AvoidanceConsiderationRadius = 0x39c; // float
		constexpr auto RequestedVelocity = 0x3a0; // FVector
		constexpr auto AvoidanceUID = 0x3ac; // int32_t
		constexpr auto AvoidanceGroup = 0x3b0; // FNavAvoidanceMask
		constexpr auto GroupsToAvoid = 0x3b4; // FNavAvoidanceMask
		constexpr auto GroupsToIgnore = 0x3b8; // FNavAvoidanceMask
		constexpr auto AvoidanceWeight = 0x3bc; // float
		constexpr auto PendingLaunchVelocity = 0x3c0; // FVector
		constexpr auto NavMeshProjectionInterval = 0x470; // float
		constexpr auto NavMeshProjectionTimer = 0x474; // float
		constexpr auto NavMeshProjectionInterpSpeed = 0x478; // float
		constexpr auto NavMeshProjectionHeightScaleUp = 0x47c; // float
		constexpr auto NavMeshProjectionHeightScaleDown = 0x480; // float
		constexpr auto NavWalkingFloorDistTolerance = 0x484; // float
		constexpr auto PostPhysicsTickFunction = 0x488; // FCharacterMovementComponentPostPhysicsTickFunction
		constexpr auto MinTimeBetweenTimeStampResets = 0x4d0; // float
		constexpr auto CurrentRootMotion = 0x980; // FRootMotionSourceGroup
		constexpr auto ServerCorrectionRootMotion = 0x9b8; // FRootMotionSourceGroup
		constexpr auto RootMotionParams = 0xa80; // FRootMotionMovementParams
		constexpr auto AnimRootMotionVelocity = 0xac0; // FVector
	}

	namespace n_UAvoidanceManager {
		constexpr auto DefaultTimeToLive = 0x30; // float
		constexpr auto LockTimeAfterAvoid = 0x34; // float
		constexpr auto LockTimeAfterClean = 0x38; // float
		constexpr auto DeltaTimeToPredict = 0x3c; // float
		constexpr auto ArtificialRadiusExpansion = 0x40; // float
		constexpr auto TestHeightDifference = 0x44; // float
		constexpr auto HeightCheckMargin = 0x48; // float
	}

	namespace n_UMaterialExpressionSobol {
		constexpr auto Cell = 0x40; // FExpressionInput
		constexpr auto Index = 0x54; // FExpressionInput
		constexpr auto Seed = 0x68; // FExpressionInput
		constexpr auto ConstIndex = 0x7c; // uint32_t
		constexpr auto ConstSeed = 0x80; // FVector2D
	}

	namespace n_UEnvQueryTest_Overlap {
		constexpr auto OverlapData = 0x1f8; // FEnvOverlapData
	}

	namespace n_UMaterialExpressionParameter {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto ExpressionGUID = 0x48; // FGuid
	}

	namespace n_UIpNetDriver {
		constexpr auto LogPortUnreach = 0x760; // char : 1
		constexpr auto AllowPlayerPortUnreach = 0x760; // char : 1
		constexpr auto MaxPortCountToTry = 0x764; // uint32_t
		constexpr auto ServerDesiredSocketReceiveBufferBytes = 0x774; // uint32_t
		constexpr auto ServerDesiredSocketSendBufferBytes = 0x778; // uint32_t
		constexpr auto ClientDesiredSocketReceiveBufferBytes = 0x77c; // uint32_t
		constexpr auto ClientDesiredSocketSendBufferBytes = 0x780; // uint32_t
		constexpr auto MaxSecondsInReceive = 0x788; // double
		constexpr auto NbPacketsBetweenReceiveTimeTest = 0x790; // int32_t
		constexpr auto ResolutionConnectionTimeout = 0x794; // float
	}

	namespace n_UBTService_BlueprintBase {
		constexpr auto AIOwner = 0x70; // AAIController*
		constexpr auto ActorOwner = 0x78; // AActor*
		constexpr auto bShowPropertyDetails = 0x90; // char : 1
		constexpr auto bShowEventDetails = 0x90; // char : 1
	}

	namespace n_UfrmCraftGroup_C {
		constexpr auto UberGraphFrame = 0x2b0; // FPointerToUberGraphFrame
		constexpr auto btnOpen = 0x2b8; // UCheckBox*
		constexpr auto imgBackground0 = 0x2c0; // UImage*
		constexpr auto imgIcon = 0x2c8; // UImage*
		constexpr auto sbMain = 0x2d0; // UScrollBox*
	}

	namespace n_UFont {
		constexpr auto FontCacheType = 0x30; // EFontCacheType
		constexpr auto Characters = 0x38; // TArray<FFontCharacter>
		constexpr auto Textures = 0x48; // TArray<UTexture2D*>
		constexpr auto IsRemapped = 0x58; // int32_t
		constexpr auto EmScale = 0x5c; // float
		constexpr auto Ascent = 0x60; // float
		constexpr auto Descent = 0x64; // float
		constexpr auto Leading = 0x68; // float
		constexpr auto Kerning = 0x6c; // int32_t
		constexpr auto ImportOptions = 0x70; // FFontImportOptionsData
		constexpr auto NumCharacters = 0x120; // int32_t
		constexpr auto MaxCharHeight = 0x128; // TArray<int32_t>
		constexpr auto ScalingFactor = 0x138; // float
		constexpr auto LegacyFontSize = 0x13c; // int32_t
		constexpr auto LegacyFontName = 0x140; // FName
		constexpr auto CompositeFont = 0x148; // FCompositeFont
	}

	namespace n_AIntervalGizmoActor {
		constexpr auto UpIntervalComponent = 0x220; // UGizmoLineHandleComponent*
		constexpr auto DownIntervalComponent = 0x228; // UGizmoLineHandleComponent*
		constexpr auto ForwardIntervalComponent = 0x230; // UGizmoLineHandleComponent*
	}

	namespace n_UTexture2DArray {
		constexpr auto AddressX = 0x1d0; // TextureAddress
		constexpr auto AddressY = 0x1d1; // TextureAddress
		constexpr auto AddressZ = 0x1d2; // TextureAddress
	}

	namespace n_USubmixEffectDynamicsProcessorPreset {
		constexpr auto Settings = 0xf0; // FSubmixEffectDynamicsProcessorSettings
	}

	namespace n_UMaterialExpressionTransformPosition {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto TransformSourceType = 0x54; // EMaterialPositionTransformSource
		constexpr auto TransformType = 0x55; // EMaterialPositionTransformSource
	}

	namespace n_USoundNodeModulator {
		constexpr auto PitchMin = 0x48; // float
		constexpr auto PitchMax = 0x4c; // float
		constexpr auto VolumeMin = 0x50; // float
		constexpr auto VolumeMax = 0x54; // float
	}

	namespace n_ACameraActor {
		constexpr auto AutoActivateForPlayer = 0x220; // EAutoReceiveInput
		constexpr auto CameraComponent = 0x228; // UCameraComponent*
		constexpr auto SceneComponent = 0x230; // USceneComponent*
		constexpr auto bConstrainAspectRatio = 0x240; // char : 1
		constexpr auto AspectRatio = 0x244; // float
		constexpr auto FOVAngle = 0x248; // float
		constexpr auto PostProcessBlendWeight = 0x24c; // float
		constexpr auto PostProcessSettings = 0x250; // FPostProcessSettings
	}

	namespace n_UMovieSceneEventRepeaterSection {
		constexpr auto Event = 0xf0; // FMovieSceneEvent
	}

	namespace n_UGizmoRectangleComponent {
		constexpr auto DirectionX = 0x470; // FVector
		constexpr auto DirectionY = 0x47c; // FVector
		constexpr auto OffsetX = 0x488; // float
		constexpr auto OffsetY = 0x48c; // float
		constexpr auto LengthX = 0x490; // float
		constexpr auto LengthY = 0x494; // float
		constexpr auto Thickness = 0x498; // float
		constexpr auto SegmentFlags = 0x49c; // char
	}

	namespace n_ABMF_Claim_C {
		constexpr auto Sphere = 0x358; // USphereComponent*
	}

	namespace n_UBlackboardData {
		constexpr auto Parent = 0x30; // UBlackboardData*
		constexpr auto Keys = 0x38; // TArray<FBlackboardEntry>
		constexpr auto bHasSynchronizedKeys = 0x48; // char : 1
	}

	namespace n_UBackgroundBlur {
		constexpr auto Padding = 0x120; // FMargin
		constexpr auto HorizontalAlignment = 0x130; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x131; // EVerticalAlignment
		constexpr auto bApplyAlphaToBlur = 0x132; // bool
		constexpr auto BlurStrength = 0x134; // float
		constexpr auto bOverrideAutoRadiusCalculation = 0x138; // bool
		constexpr auto BlurRadius = 0x13c; // int32_t
		constexpr auto LowQualityFallbackBrush = 0x140; // FSlateBrush
	}

	namespace n_USimpleFTPClientBPLibrary {
		constexpr auto onFTPClientConnectionEventDelegate = 0x28; // FMulticastInlineDelegate
		constexpr auto onFTPClientStatusEventDelegate = 0x38; // FMulticastInlineDelegate
		constexpr auto onFTPClientGoToDirectoryEventDelegate = 0x48; // FMulticastInlineDelegate
		constexpr auto onFTPClient_ListCurrentDirectoryDelegate = 0x58; // FMulticastInlineDelegate
		constexpr auto onFTPClient_FileInfoDelegate = 0x68; // FMulticastInlineDelegate
		constexpr auto onFTPClient_DownloadDelegate = 0x78; // FMulticastInlineDelegate
		constexpr auto onFTPClient_UploadDelegate = 0x88; // FMulticastInlineDelegate
		constexpr auto onFTPClientDeleteEventDelegate = 0x98; // FMulticastInlineDelegate
		constexpr auto onFTPClientCreateDirEventDelegate = 0xa8; // FMulticastInlineDelegate
		constexpr auto onFTPClientRenameEventDelegate = 0xb8; // FMulticastInlineDelegate
	}

	namespace n_ASFPSBaseItem {
		constexpr auto AfterDropLifeTime = 0x238; // float
		constexpr auto StaticParams = 0x250; // FSFPSStaticItemParams
		constexpr auto Count = 0x2b0; // int32_t
		constexpr auto bItemInCell = 0x2b4; // bool
		constexpr auto bDeleteAfterDrop = 0x2b5; // bool
		constexpr auto LootRarity = 0x2b6; // ESFPSLootRarity
		constexpr auto Components = 0x2b8; // TArray<FSFPSBaseItemComponent>
		constexpr auto DisassembleText = 0x2c8; // ESFPSBaseItemDisassembleText
		constexpr auto OwnerLootSpawner = 0x2d0; // AActor*
		constexpr auto MeshRef = 0x2d8; // UMeshComponent*
		constexpr auto TraceRef = 0x2e0; // UBoxComponent*
		constexpr auto bDeleteAfterUseInInventory = 0x2e8; // bool
		constexpr auto ItemMoveType = 0x2e9; // ESFPSItemMoveType
		constexpr auto LootTraces = 0x300; // TArray<FVector>
	}

	namespace n_UMainMenu_C {
		constexpr auto btnContinue_Steam = 0x260; // UButton*
		constexpr auto btnDiscord = 0x268; // UButton*
		constexpr auto btnExit = 0x270; // UButton*
		constexpr auto btnFacebook = 0x278; // UButton*
		constexpr auto btnJoinServer_LoginPassword = 0x280; // UButton*
		constexpr auto btnJoinServer_Steam = 0x288; // UButton*
		constexpr auto btnSettings = 0x290; // UButton*
		constexpr auto btnSteam = 0x298; // UButton*
		constexpr auto btnTwitch = 0x2a0; // UButton*
		constexpr auto btnTwitter = 0x2a8; // UButton*
		constexpr auto btnVK = 0x2b0; // UButton*
	}

	namespace n_USFPSACRoute {
		constexpr auto Waypoints = 0x1f8; // TArray<FVector>
	}

	namespace n_UDialogueVoice {
		constexpr auto Gender = 0x28; // EGrammaticalGender
		constexpr auto Plurality = 0x29; // EGrammaticalNumber
		constexpr auto LocalizationGUID = 0x2c; // FGuid
	}

	namespace n_UGeometryCacheCodecBase {
		constexpr auto TopologyRanges = 0x28; // TArray<int32_t>
	}

	namespace n_USafeZoneSlot {
		constexpr auto bIsTitleSafe = 0x38; // bool
		constexpr auto SafeAreaScale = 0x3c; // FMargin
		constexpr auto HAlign = 0x4c; // EHorizontalAlignment
		constexpr auto VAlign = 0x4d; // EVerticalAlignment
		constexpr auto Padding = 0x50; // FMargin
	}

	namespace n_UBTDecorator_BlueprintBase {
		constexpr auto AIOwner = 0x68; // AAIController*
		constexpr auto ActorOwner = 0x70; // AActor*
		constexpr auto ObservedKeyNames = 0x78; // TArray<FName>
		constexpr auto bShowPropertyDetails = 0x98; // char : 1
		constexpr auto bCheckConditionOnlyBlackBoardChanges = 0x98; // char : 1
		constexpr auto bIsObservingBB = 0x98; // char : 1
	}

	namespace n_USequenceCameraShakeCameraStandIn {
		constexpr auto FieldOfView = 0x30; // float
		constexpr auto bConstrainAspectRatio = 0x34; // char : 1
		constexpr auto AspectRatio = 0x38; // float
		constexpr auto PostProcessSettings = 0x40; // FPostProcessSettings
		constexpr auto PostProcessBlendWeight = 0x5a0; // float
		constexpr auto Filmback = 0x5a4; // FCameraFilmbackSettings
		constexpr auto LensSettings = 0x5b0; // FCameraLensSettings
		constexpr auto FocusSettings = 0x5c8; // FCameraFocusSettings
		constexpr auto CurrentFocalLength = 0x620; // float
		constexpr auto CurrentAperture = 0x624; // float
		constexpr auto CurrentFocusDistance = 0x628; // float
	}

	namespace n_USceneCaptureComponentCube {
		constexpr auto TextureTarget = 0x2b0; // UTextureRenderTargetCube*
		constexpr auto bCaptureRotation = 0x2b8; // bool
		constexpr auto TextureTargetLeft = 0x2c0; // UTextureRenderTargetCube*
		constexpr auto TextureTargetRight = 0x2c8; // UTextureRenderTargetCube*
		constexpr auto TextureTargetODS = 0x2d0; // UTextureRenderTarget2D*
		constexpr auto IPD = 0x2d8; // float
	}

	namespace n_AShell_SG0_C {
		constexpr auto Mesh = 0x250; // UStaticMeshComponent*
	}

	namespace n_UMediaPlayer {
		constexpr auto OnEndReached = 0x28; // FMulticastInlineDelegate
		constexpr auto OnMediaClosed = 0x38; // FMulticastInlineDelegate
		constexpr auto OnMediaOpened = 0x48; // FMulticastInlineDelegate
		constexpr auto OnMediaOpenFailed = 0x58; // FMulticastInlineDelegate
		constexpr auto OnPlaybackResumed = 0x68; // FMulticastInlineDelegate
		constexpr auto OnPlaybackSuspended = 0x78; // FMulticastInlineDelegate
		constexpr auto OnSeekCompleted = 0x88; // FMulticastInlineDelegate
		constexpr auto OnTracksChanged = 0x98; // FMulticastInlineDelegate
		constexpr auto CacheAhead = 0xa8; // FTimespan
		constexpr auto CacheBehind = 0xb0; // FTimespan
		constexpr auto CacheBehindGame = 0xb8; // FTimespan
		constexpr auto NativeAudioOut = 0xc0; // bool
		constexpr auto PlayOnOpen = 0xc1; // bool
		constexpr auto Shuffle = 0xc4; // char : 1
		constexpr auto Loop = 0xc4; // char : 1
		constexpr auto Playlist = 0xc8; // UMediaPlaylist*
		constexpr auto PlaylistIndex = 0xd0; // int32_t
		constexpr auto TimeDelay = 0xd8; // FTimespan
		constexpr auto HorizontalFieldOfView = 0xe0; // float
		constexpr auto VerticalFieldOfView = 0xe4; // float
		constexpr auto ViewRotation = 0xe8; // FRotator
		constexpr auto PlayerGuid = 0x120; // FGuid
	}

	namespace n_UMagicLeapARPinContentBindings {
		constexpr auto AllContentBindings = 0x28; // TMap<FGuid, FMagicLeapARPinObjectIdList>
	}

	namespace n_UAsyncActionLoadPrimaryAsset {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UInteractiveGizmoManager {
		constexpr auto ActiveGizmos = 0x30; // TArray<FActiveGizmo>
		constexpr auto GizmoBuilders = 0x58; // TMap<FString, UInteractiveGizmoBuilder*>
	}

	namespace n_UGenlockedTimecodeProvider {
		constexpr auto bUseGenlockToCount = 0x30; // bool
	}

	namespace n_UPaperTileMap {
		constexpr auto MapWidth = 0x28; // int32_t
		constexpr auto MapHeight = 0x2c; // int32_t
		constexpr auto TileWidth = 0x30; // int32_t
		constexpr auto TileHeight = 0x34; // int32_t
		constexpr auto PixelsPerUnrealUnit = 0x38; // float
		constexpr auto SeparationPerTileX = 0x3c; // float
		constexpr auto SeparationPerTileY = 0x40; // float
		constexpr auto SeparationPerLayer = 0x44; // float
		constexpr auto SelectedTileSet = 0x48; // TSoftObjectPtr<UPaperTileSet>
		constexpr auto Material = 0x70; // UMaterialInterface*
		constexpr auto TileLayers = 0x78; // TArray<UPaperTileLayer*>
		constexpr auto CollisionThickness = 0x88; // float
		constexpr auto SpriteCollisionDomain = 0x8c; // ESpriteCollisionMode
		constexpr auto ProjectionMode = 0x8d; // ETileMapProjectionMode
		constexpr auto HexSideLength = 0x90; // int32_t
		constexpr auto BodySetup = 0x98; // UBodySetup*
		constexpr auto LayerNameIndex = 0xa0; // int32_t
	}

	namespace n_Aweapon_firearms_rifle_steyraug_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f0; // UStaticMeshComponent*
		constexpr auto SightOpen = 0x7f8; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x800; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x808; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x810; // UStaticMeshComponent*
	}

	namespace n_UTileView {
		constexpr auto EntryHeight = 0x368; // float
		constexpr auto EntryWidth = 0x36c; // float
		constexpr auto TileAlignment = 0x370; // EListItemAlignment
		constexpr auto bWrapHorizontalNavigation = 0x371; // bool
	}

	namespace n_ULeaderboardQueryCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UHapticFeedbackEffect_Buffer {
		constexpr auto Amplitudes = 0x28; // TArray<char>
		constexpr auto SampleRate = 0x38; // int32_t
	}

	namespace n_UInterpTrackFade {
		constexpr auto bPersistFade = 0x90; // char : 1
		constexpr auto bFadeAudio = 0x90; // char : 1
		constexpr auto FadeColor = 0x94; // FLinearColor
	}

	namespace n_UMediaPlaylist {
		constexpr auto Items = 0x28; // TArray<UMediaSource*>
	}

	namespace n_UGameNetworkManagerSettings {
		constexpr auto MinDynamicBandwidth = 0x28; // int32_t
		constexpr auto MaxDynamicBandwidth = 0x2c; // int32_t
		constexpr auto TotalNetBandwidth = 0x30; // int32_t
		constexpr auto BadPingThreshold = 0x34; // int32_t
		constexpr auto bIsStandbyCheckingEnabled = 0x38; // char : 1
		constexpr auto StandbyRxCheatTime = 0x3c; // float
		constexpr auto StandbyTxCheatTime = 0x40; // float
		constexpr auto PercentMissingForRxStandby = 0x44; // float
		constexpr auto PercentMissingForTxStandby = 0x48; // float
		constexpr auto PercentForBadPing = 0x4c; // float
		constexpr auto JoinInProgressStandbyWaitTime = 0x50; // float
	}

	namespace n_UToFloatField {
		constexpr auto IntField = 0xb0; // UFieldNodeInt*
	}

	namespace n_UAISenseConfig_Blueprint {
		constexpr auto Implementation = 0x48; // UAISense_Blueprint*
	}

	namespace n_UAutoDestroySubsystem {
		constexpr auto ActorsToPoll = 0x40; // TArray<AActor*>
	}

	namespace n_USFPSACDoor {
		constexpr auto OpenCloseTime = 0x118; // float
		constexpr auto DirectionVector = 0x11c; // FVector
		constexpr auto bIgnoreCharacterPosition = 0x128; // bool
		constexpr auto bInvertForvardIfIgnoreCharacterPosition = 0x129; // bool
		constexpr auto DoorParams = 0x12a; // FSFPSACDoorParams
		constexpr auto DoorCreakCue = 0x130; // USoundCue*
		constexpr auto DoorLockCue = 0x138; // USoundCue*
		constexpr auto DoorSlamCue = 0x140; // USoundCue*
		constexpr auto HandleCue = 0x148; // USoundCue*
	}

	namespace n_UGeometryCacheTrackStreamable {
		constexpr auto Codec = 0x58; // UGeometryCacheCodecBase*
		constexpr auto StartSampleTime = 0xc8; // float
	}

	namespace n_UParticleModuleRequired {
		constexpr auto Material = 0x30; // UMaterialInterface*
		constexpr auto MinFacingCameraBlendDistance = 0x38; // float
		constexpr auto MaxFacingCameraBlendDistance = 0x3c; // float
		constexpr auto EmitterOrigin = 0x40; // FVector
		constexpr auto EmitterRotation = 0x4c; // FRotator
		constexpr auto ScreenAlignment = 0x58; // EParticleScreenAlignment
		constexpr auto bUseLocalSpace = 0x59; // char : 1
		constexpr auto bKillOnDeactivate = 0x59; // char : 1
		constexpr auto bKillOnCompleted = 0x59; // char : 1
		constexpr auto SortMode = 0x5a; // EParticleSortMode
		constexpr auto bUseLegacyEmitterTime = 0x5b; // char : 1
		constexpr auto bRemoveHMDRoll = 0x5b; // char : 1
		constexpr auto bEmitterDurationUseRange = 0x5b; // char : 1
		constexpr auto EmitterDuration = 0x5c; // float
		constexpr auto SpawnRate = 0x60; // FRawDistributionFloat
		constexpr auto BurstList = 0x90; // TArray<FParticleBurst>
		constexpr auto EmitterDelay = 0xa0; // float
		constexpr auto EmitterDelayLow = 0xa4; // float
		constexpr auto bDelayFirstLoopOnly = 0xa8; // char : 1
		constexpr auto InterpolationMethod = 0xa9; // EParticleSubUVInterpMethod
		constexpr auto bScaleUV = 0xaa; // char : 1
		constexpr auto bEmitterDelayUseRange = 0xaa; // char : 1
		constexpr auto ParticleBurstMethod = 0xab; // EParticleBurstMethod
		constexpr auto bOverrideSystemMacroUV = 0xac; // char : 1
		constexpr auto bUseMaxDrawCount = 0xac; // char : 1
		constexpr auto OpacitySourceMode = 0xad; // EOpacitySourceMode
		constexpr auto EmitterNormalsMode = 0xae; // EEmitterNormalsMode
		constexpr auto bOrbitModuleAffectsVelocityAlignment = 0xaf; // char : 1
		constexpr auto SubImages_Horizontal = 0xb0; // int32_t
		constexpr auto SubImages_Vertical = 0xb4; // int32_t
		constexpr auto RandomImageTime = 0xb8; // float
		constexpr auto RandomImageChanges = 0xbc; // int32_t
		constexpr auto MacroUVPosition = 0xc0; // FVector
		constexpr auto MacroUVRadius = 0xcc; // float
		constexpr auto UVFlippingMode = 0xd0; // EParticleUVFlipMode
		constexpr auto BoundingMode = 0xd1; // ESubUVBoundingVertexCount
		constexpr auto bDurationRecalcEachLoop = 0xd2; // char : 1
		constexpr auto NormalsSphereCenter = 0xd4; // FVector
		constexpr auto AlphaThreshold = 0xe0; // float
		constexpr auto EmitterLoops = 0xe4; // int32_t
		constexpr auto CutoutTexture = 0xe8; // UTexture2D*
		constexpr auto MaxDrawCount = 0xf0; // int32_t
		constexpr auto EmitterDurationLow = 0xf4; // float
		constexpr auto NormalsCylinderDirection = 0xf8; // FVector
		constexpr auto NamedMaterialOverrides = 0x108; // TArray<FName>
	}

	namespace n_UInterpTrackFloatAnimBPParam {
		constexpr auto AnimBlueprintClass = 0x90; // UObject*
		constexpr auto AnimClass = 0x98; // UAnimInstance*
		constexpr auto ParamName = 0xa0; // FName
	}

	namespace n_UWidgetBlueprintGeneratedClass {
		constexpr auto WidgetTree = 0x328; // UWidgetTree*
		constexpr auto bClassRequiresNativeTick = 0x330; // char : 1
		constexpr auto Bindings = 0x338; // TArray<FDelegateRuntimeBinding>
		constexpr auto Animations = 0x348; // TArray<UWidgetAnimation*>
		constexpr auto NamedSlots = 0x358; // TArray<FName>
	}

	namespace n_UGeometryCacheComponent {
		constexpr auto GeometryCache = 0x478; // UGeometryCache*
		constexpr auto bRunning = 0x480; // bool
		constexpr auto bLooping = 0x481; // bool
		constexpr auto bExtrapolateFrames = 0x482; // bool
		constexpr auto StartTimeOffset = 0x484; // float
		constexpr auto PlaybackSpeed = 0x488; // float
		constexpr auto MotionVectorScale = 0x48c; // float
		constexpr auto NumTracks = 0x490; // int32_t
		constexpr auto ElapsedTime = 0x494; // float
		constexpr auto Duration = 0x4cc; // float
		constexpr auto bManualTick = 0x4d0; // bool
	}

	namespace n_UClothingAssetCommon {
		constexpr auto PhysicsAsset = 0x48; // UPhysicsAsset*
		constexpr auto ClothConfigs = 0x50; // TMap<FName, UClothConfigBase*>
		constexpr auto LODData = 0xa0; // TArray<FClothLODDataCommon>
		constexpr auto LodMap = 0xb0; // TArray<int32_t>
		constexpr auto UsedBoneNames = 0xc0; // TArray<FName>
		constexpr auto UsedBoneIndices = 0xd0; // TArray<int32_t>
		constexpr auto ReferenceBoneIndex = 0xe0; // int32_t
		constexpr auto CustomData = 0xe8; // UClothingAssetCustomData*
	}

	namespace n_UParticleModuleRotationRate_Seeded {
		constexpr auto RandomSeedInfo = 0x60; // FParticleRandomSeedInfo
	}

	namespace n_AMainMenu_C {
		constexpr auto UberGraphFrame = 0x228; // FPointerToUberGraphFrame
		constexpr auto CameraActor_1_ExecuteUbergraph_MainMenu_RefProperty = 0x230; // ACameraActor*
	}

	namespace n_USFPSGameplayManager {
		constexpr auto GameplayAreas = 0x28; // TArray<ASFPSGameplayArea*>
		constexpr auto LootSpawners = 0x40; // TArray<ASFPSBaseLootSpawner*>
		constexpr auto GameplayEventManagerClasses = 0x58; // TArray<USFPSGameplayEventManager*>
		constexpr auto GameplayEventManagers = 0x68; // TArray<USFPSGameplayEventManager*>
		constexpr auto AirDropManager = 0x88; // USFPSAirDropManager*
		constexpr auto AirDropManagerClass = 0x90; // USFPSAirDropManager*
		constexpr auto HiddenStashManager = 0x98; // USFPSHiddenStashManager*
		constexpr auto HiddenStashManagerClass = 0xa0; // USFPSHiddenStashManager*
		constexpr auto PatrolManager = 0xa8; // USFPSPatrolManager*
		constexpr auto PatrolManagerClass = 0xb0; // USFPSPatrolManager*
	}

	namespace n_UParticleModuleColor_Seeded {
		constexpr auto RandomSeedInfo = 0xb0; // FParticleRandomSeedInfo
	}

	namespace n_ABM_WallBig_lock_01_C {
		constexpr auto Base_lock_02 = 0x388; // UStaticMeshComponent*
		constexpr auto Base_lock_01 = 0x390; // UStaticMeshComponent*
	}

	namespace n_UBoxComponent {
		constexpr auto BoxExtent = 0x468; // FVector
		constexpr auto LineThickness = 0x474; // float
	}

	namespace n_ULevelCapture {
		constexpr auto bAutoStartCapture = 0x220; // bool
		constexpr auto PrerequisiteActorId = 0x22c; // FGuid
	}

	namespace n_UMockDataMeshTrackerComponent {
		constexpr auto OnMeshTrackerUpdated = 0x1f8; // FMulticastInlineDelegate
		constexpr auto ScanWorld = 0x208; // bool
		constexpr auto RequestNormals = 0x209; // bool
		constexpr auto RequestVertexConfidence = 0x20a; // bool
		constexpr auto VertexColorMode = 0x20b; // EMeshTrackerVertexColorMode
		constexpr auto BlockVertexColors = 0x210; // TArray<FColor>
		constexpr auto VertexColorFromConfidenceZero = 0x220; // FLinearColor
		constexpr auto VertexColorFromConfidenceOne = 0x230; // FLinearColor
		constexpr auto UpdateInterval = 0x240; // float
		constexpr auto MRMesh = 0x248; // UMRMeshComponent*
	}

	namespace n_USynthComponentMoto {
		constexpr auto MotoSynthPreset = 0x6c0; // UMotoSynthPreset*
		constexpr auto RPM = 0x6c8; // float
	}

	namespace n_UMovieSceneActorReferenceSection {
		constexpr auto ActorReferenceData = 0xe8; // FMovieSceneActorReferenceData
		constexpr auto ActorGuidIndexCurve = 0x198; // FIntegralCurve
		constexpr auto ActorGuidStrings = 0x218; // TArray<FString>
	}

	namespace n_ABMF_Sandbags_03_C {
		constexpr auto SFPSACBaseCollision1 = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACBaseCollision = 0x360; // USFPSACBaseCollision*
	}

	namespace n_USFPSUserWidget_RadialMenu {
		constexpr auto SelectedIndex = 0x268; // int32_t
	}

	namespace n_UFormInGameMenu_C {
		constexpr auto btnDiscord = 0x260; // UButton*
		constexpr auto btnFacebook = 0x268; // UButton*
		constexpr auto btnGreenAreaTeleport = 0x270; // UButton*
		constexpr auto btnLeaveServer = 0x278; // UButton*
		constexpr auto btnQuitGame = 0x280; // UButton*
		constexpr auto btnResume = 0x288; // UButton*
		constexpr auto btnSettings = 0x290; // UButton*
		constexpr auto btnSteam = 0x298; // UButton*
		constexpr auto btnSuicide = 0x2a0; // UButton*
		constexpr auto btnTwitch = 0x2a8; // UButton*
		constexpr auto btnTwitter = 0x2b0; // UButton*
		constexpr auto btnVK = 0x2b8; // UButton*
	}

	namespace n_UEditableGameplayTagQuery {
		constexpr auto UserDescription = 0x28; // FString
		constexpr auto RootExpression = 0x48; // UEditableGameplayTagQueryExpression*
		constexpr auto TagQueryExportText_Helper = 0x50; // FGameplayTagQuery
	}

	namespace n_Aweapon_firearms_sg_mp133_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
		constexpr auto Shell = 0x7f0; // UStaticMeshComponent*
	}

	namespace n_UParticleModuleColorScaleOverLife {
		constexpr auto ColorScaleOverLife = 0x30; // FRawDistributionVector
		constexpr auto AlphaScaleOverLife = 0x78; // FRawDistributionFloat
		constexpr auto bEmitterTime = 0xa8; // char : 1
	}

	namespace n_UActorSequence {
		constexpr auto MovieScene = 0x60; // UMovieScene*
		constexpr auto ObjectReferences = 0x68; // FActorSequenceObjectReferenceMap
	}

	namespace n_ASFPSAmmo {
		constexpr auto AmmoType = 0x310; // ESFPSAmmoType
		constexpr auto DamageType = 0x311; // ESFPSDamageType
		constexpr auto Params = 0x314; // FSFPSAmmoParameters
	}

	namespace n_UMRMeshComponent {
		constexpr auto Material = 0x460; // UMaterialInterface*
		constexpr auto WireframeMaterial = 0x468; // UMaterialInterface*
		constexpr auto bCreateMeshProxySections = 0x470; // bool
		constexpr auto bUpdateNavMeshOnMeshUpdate = 0x471; // bool
		constexpr auto bNeverCreateCollisionMesh = 0x472; // bool
		constexpr auto CachedBodySetup = 0x478; // UBodySetup*
		constexpr auto BodySetups = 0x480; // TArray<UBodySetup*>
	}

	namespace n_USubmixEffectFilterPreset {
		constexpr auto Settings = 0x9c; // FSubmixEffectFilterSettings
	}

	namespace n_ACharacter {
		constexpr auto Mesh = 0x280; // USkeletalMeshComponent*
		constexpr auto CharacterMovement = 0x288; // UCharacterMovementComponent*
		constexpr auto CapsuleComponent = 0x290; // UCapsuleComponent*
		constexpr auto BasedMovement = 0x298; // FBasedMovementInfo
		constexpr auto ReplicatedBasedMovement = 0x2c8; // FBasedMovementInfo
		constexpr auto AnimRootMotionTranslationScale = 0x2f8; // float
		constexpr auto BaseTranslationOffset = 0x2fc; // FVector
		constexpr auto BaseRotationOffset = 0x310; // FQuat
		constexpr auto ReplicatedServerLastTransformUpdateTimeStamp = 0x320; // float
		constexpr auto ReplayLastTransformUpdateTimeStamp = 0x324; // float
		constexpr auto ReplicatedMovementMode = 0x328; // char
		constexpr auto bInBaseReplication = 0x329; // bool
		constexpr auto CrouchedEyeHeight = 0x32c; // float
		constexpr auto bIsCrouched = 0x330; // char : 1
		constexpr auto bProxyIsJumpForceApplied = 0x330; // char : 1
		constexpr auto bPressedJump = 0x330; // char : 1
		constexpr auto bClientUpdating = 0x330; // char : 1
		constexpr auto bClientWasFalling = 0x330; // char : 1
		constexpr auto bClientResimulateRootMotion = 0x330; // char : 1
		constexpr auto bClientResimulateRootMotionSources = 0x330; // char : 1
		constexpr auto bSimGravityDisabled = 0x330; // char : 1
		constexpr auto bClientCheckEncroachmentOnNetUpdate = 0x331; // char : 1
		constexpr auto bServerMoveIgnoreRootMotion = 0x331; // char : 1
		constexpr auto bWasJumping = 0x331; // char : 1
		constexpr auto JumpKeyHoldTime = 0x334; // float
		constexpr auto JumpForceTimeRemaining = 0x338; // float
		constexpr auto ProxyJumpForceStartedTime = 0x33c; // float
		constexpr auto JumpMaxHoldTime = 0x340; // float
		constexpr auto JumpMaxCount = 0x344; // int32_t
		constexpr auto JumpCurrentCount = 0x348; // int32_t
		constexpr auto JumpCurrentCountPreJump = 0x34c; // int32_t
		constexpr auto OnReachedJumpApex = 0x358; // FMulticastInlineDelegate
		constexpr auto MovementModeChangedDelegate = 0x378; // FMulticastInlineDelegate
		constexpr auto OnCharacterMovementUpdated = 0x388; // FMulticastInlineDelegate
		constexpr auto SavedRootMotion = 0x398; // FRootMotionSourceGroup
		constexpr auto ClientRootMotionParams = 0x3d0; // FRootMotionMovementParams
		constexpr auto RootMotionRepMoves = 0x410; // TArray<FSimulatedRootMotionReplicatedMove>
		constexpr auto RepRootMotion = 0x420; // FRepRootMotionMontage
	}

	namespace n_UCanvasRenderTarget2D {
		constexpr auto OnCanvasRenderTargetUpdate = 0x1a8; // FMulticastInlineDelegate
		constexpr auto World = 0x1b8; // TWeakObjectPtr<UWorld>
		constexpr auto bShouldClearRenderTargetOnReceiveUpdate = 0x1c0; // bool
	}

	namespace n_UMaterialExpressionTemporalSobol {
		constexpr auto Index = 0x40; // FExpressionInput
		constexpr auto Seed = 0x54; // FExpressionInput
		constexpr auto ConstIndex = 0x68; // uint32_t
		constexpr auto ConstSeed = 0x6c; // FVector2D
	}

	namespace n_UAREnvironmentCaptureProbeTexture {
		constexpr auto TextureType = 0x1d0; // EARTextureType
		constexpr auto Timestamp = 0x1d4; // float
		constexpr auto ExternalTextureGuid = 0x1d8; // FGuid
		constexpr auto Size = 0x1e8; // FVector2D
	}

	namespace n_AWorldSettings {
		constexpr auto VisibilityCellSize = 0x228; // int32_t
		constexpr auto VisibilityAggressiveness = 0x22c; // EVisibilityAggressiveness
		constexpr auto bPrecomputeVisibility = 0x22d; // char : 1
		constexpr auto bPlaceCellsOnlyAlongCameraTracks = 0x22d; // char : 1
		constexpr auto bEnableWorldBoundsChecks = 0x22d; // char : 1
		constexpr auto bEnableNavigationSystem = 0x22d; // char : 1
		constexpr auto bEnableAISystem = 0x22d; // char : 1
		constexpr auto bEnableWorldComposition = 0x22d; // char : 1
		constexpr auto bUseClientSideLevelStreamingVolumes = 0x22d; // char : 1
		constexpr auto bEnableWorldOriginRebasing = 0x22d; // char : 1
		constexpr auto bWorldGravitySet = 0x22e; // char : 1
		constexpr auto bGlobalGravitySet = 0x22e; // char : 1
		constexpr auto bMinimizeBSPSections = 0x22e; // char : 1
		constexpr auto bForceNoPrecomputedLighting = 0x22e; // char : 1
		constexpr auto bHighPriorityLoading = 0x22e; // char : 1
		constexpr auto bHighPriorityLoadingLocal = 0x22e; // char : 1
		constexpr auto bOverrideDefaultBroadphaseSettings = 0x22e; // char : 1
		constexpr auto NavigationSystemConfig = 0x230; // UNavigationSystemConfig*
		constexpr auto NavigationSystemConfigOverride = 0x238; // UNavigationSystemConfig*
		constexpr auto WorldToMeters = 0x240; // float
		constexpr auto KillZ = 0x244; // float
		constexpr auto KillZDamageType = 0x248; // UDamageType*
		constexpr auto WorldGravityZ = 0x250; // float
		constexpr auto GlobalGravityZ = 0x254; // float
		constexpr auto DefaultPhysicsVolumeClass = 0x258; // ADefaultPhysicsVolume*
		constexpr auto PhysicsCollisionHandlerClass = 0x260; // UPhysicsCollisionHandler*
		constexpr auto DefaultGameMode = 0x268; // AGameModeBase*
		constexpr auto GameNetworkManagerClass = 0x270; // AGameNetworkManager*
		constexpr auto PackedLightAndShadowMapTextureSize = 0x278; // int32_t
		constexpr auto DefaultColorScale = 0x27c; // FVector
		constexpr auto DefaultMaxDistanceFieldOcclusionDistance = 0x288; // float
		constexpr auto GlobalDistanceFieldViewDistance = 0x28c; // float
		constexpr auto DynamicIndirectShadowsSelfShadowingIntensity = 0x290; // float
		constexpr auto DefaultReverbSettings = 0x298; // FReverbSettings
		constexpr auto DefaultAmbientZoneSettings = 0x2b8; // FInteriorSettings
		constexpr auto DefaultBaseSoundMix = 0x2e0; // USoundMix*
		constexpr auto TimeDilation = 0x2e8; // float
		constexpr auto MatineeTimeDilation = 0x2ec; // float
		constexpr auto DemoPlayTimeDilation = 0x2f0; // float
		constexpr auto MinGlobalTimeDilation = 0x2f4; // float
		constexpr auto MaxGlobalTimeDilation = 0x2f8; // float
		constexpr auto MinUndilatedFrameTime = 0x2fc; // float
		constexpr auto MaxUndilatedFrameTime = 0x300; // float
		constexpr auto BroadphaseSettings = 0x304; // FBroadphaseSettings
		constexpr auto Pauser = 0x348; // APlayerState*
		constexpr auto ReplicationViewers = 0x350; // TArray<FNetViewer>
		constexpr auto AssetUserData = 0x360; // TArray<UAssetUserData*>
		constexpr auto PauserPlayerState = 0x370; // APlayerState*
		constexpr auto MaxNumberOfBookmarks = 0x378; // int32_t
		constexpr auto DefaultBookmarkClass = 0x380; // UBookmarkBase*
		constexpr auto BookmarkArray = 0x388; // TArray<UBookmarkBase*>
		constexpr auto LastBookmarkClass = 0x398; // UBookmarkBase*
	}

	namespace n_USFPSPhysMatSoundTable {
		constexpr auto StepCue = 0x28; // USoundCue*
		constexpr auto StepCueAdd = 0x30; // USoundCue*
		constexpr auto bWaterPM = 0x38; // bool
		constexpr auto CarTiresCue = 0x40; // USoundCue*
		constexpr auto AXHit = 0x48; // USoundCue*
		constexpr auto CrowbarHit = 0x50; // USoundCue*
		constexpr auto GunHit = 0x58; // USoundCue*
		constexpr auto HandHit = 0x60; // USoundCue*
		constexpr auto KnifeHit = 0x68; // USoundCue*
		constexpr auto BatHit = 0x70; // USoundCue*
		constexpr auto ButtHit = 0x78; // USoundCue*
		constexpr auto bPlayHitAdd = 0x80; // bool
		constexpr auto bPlayHitAddOnMove = 0x81; // bool
		constexpr auto AddHit = 0x88; // USoundCue*
		constexpr auto ExplHit = 0x90; // USoundCue*
		constexpr auto VehicleHit = 0x98; // USoundCue*
		constexpr auto HitParticle = 0xa0; // UParticleSystem*
		constexpr auto HitSteelArmParticle = 0xa8; // UParticleSystem*
		constexpr auto HitArmorParticle = 0xb0; // UParticleSystem*
		constexpr auto HitArmorSteelArmParticle = 0xb8; // UParticleSystem*
		constexpr auto HitChrFallParticle = 0xc0; // UParticleSystem*
		constexpr auto bAlwaysPlayHitChrStepParticle = 0xc8; // bool
		constexpr auto HitChrStepParticle = 0xd0; // UParticleSystem*
		constexpr auto HitVehicleParticle = 0xd8; // UParticleSystem*
		constexpr auto DecalImpactGun = 0xe0; // FSFPSDecalData
		constexpr auto DecalImpactKnife = 0xf8; // FSFPSDecalData
		constexpr auto DecalImpactExpl = 0x110; // FSFPSDecalData
		constexpr auto SlideCue = 0x128; // USoundCue*
		constexpr auto BodyFall = 0x130; // USoundCue*
	}

	namespace n_USFPSItemSet {
		constexpr auto Elements = 0x28; // TArray<FSFPSItemSetElement>
		constexpr auto DataTable = 0x38; // UDataTable*
	}

	namespace n_UFieldSystemMetaDataFilter {
		constexpr auto FilterType = 0xb0; // EFieldFilterType
	}

	namespace n_ULevel {
		constexpr auto OwningWorld = 0xb8; // UWorld*
		constexpr auto Model = 0xc0; // UModel*
		constexpr auto ModelComponents = 0xc8; // TArray<UModelComponent*>
		constexpr auto ActorCluster = 0xd8; // ULevelActorContainer*
		constexpr auto NumTextureStreamingUnbuiltComponents = 0xe0; // int32_t
		constexpr auto NumTextureStreamingDirtyResources = 0xe4; // int32_t
		constexpr auto LevelScriptActor = 0xe8; // ALevelScriptActor*
		constexpr auto NavListStart = 0xf0; // ANavigationObjectBase*
		constexpr auto NavListEnd = 0xf8; // ANavigationObjectBase*
		constexpr auto NavDataChunks = 0x100; // TArray<UNavigationDataChunk*>
		constexpr auto LightmapTotalSize = 0x110; // float
		constexpr auto ShadowmapTotalSize = 0x114; // float
		constexpr auto StaticNavigableGeometry = 0x118; // TArray<FVector>
		constexpr auto StreamingTextureGuids = 0x128; // TArray<FGuid>
		constexpr auto LevelBuildDataId = 0x1d0; // FGuid
		constexpr auto MapBuildData = 0x1e0; // UMapBuildDataRegistry*
		constexpr auto LightBuildLevelOffset = 0x1e8; // FIntVector
		constexpr auto bIsLightingScenario = 0x1f4; // char : 1
		constexpr auto bTextureStreamingRotationChanged = 0x1f4; // char : 1
		constexpr auto bStaticComponentsRegisteredInStreamingManager = 0x1f4; // char : 1
		constexpr auto bIsVisible = 0x1f4; // char : 1
		constexpr auto WorldSettings = 0x258; // AWorldSettings*
		constexpr auto AssetUserData = 0x268; // TArray<UAssetUserData*>
		constexpr auto DestroyedReplicatedStaticActors = 0x288; // TArray<FReplicatedStaticActorDestructionInfo>
	}

	namespace n_USphereReflectionCaptureComponent {
		constexpr auto InfluenceRadius = 0x270; // float
		constexpr auto CaptureDistanceScale = 0x274; // float
		constexpr auto PreviewInfluenceRadius = 0x278; // UDrawSphereComponent*
	}

	namespace n_ALightmassPortal {
		constexpr auto PortalComponent = 0x220; // ULightmassPortalComponent*
	}

	namespace n_USFPSSaver {
		constexpr auto CharacterCache = 0x98; // TArray<FSFPSSaverCache>
		constexpr auto Storages0Cache = 0xa8; // TArray<FSFPSSaverCache>
		constexpr auto Storages1Cache = 0xb8; // TArray<FSFPSSaverCache>
		constexpr auto DeathLog = 0xc8; // TArray<FString>
	}

	namespace n_URendererOverrideSettings {
		constexpr auto bSupportAllShaderPermutations = 0x38; // char : 1
		constexpr auto bForceRecomputeTangents = 0x38; // char : 1
	}

	namespace n_UChildConnection {
		constexpr auto Parent = 0x1ba8; // UNetConnection*
	}

	namespace n_UMaterialExpressionShadingPathSwitch {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Inputs = 0x54; // FExpressionInput [0x3]
	}

	namespace n_UMovieSceneMarginSection {
		constexpr auto TopCurve = 0xf0; // FMovieSceneFloatChannel
		constexpr auto LeftCurve = 0x190; // FMovieSceneFloatChannel
		constexpr auto RightCurve = 0x230; // FMovieSceneFloatChannel
		constexpr auto BottomCurve = 0x2d0; // FMovieSceneFloatChannel
	}

	namespace n_UParticleModuleSize_Seeded {
		constexpr auto RandomSeedInfo = 0x78; // FParticleRandomSeedInfo
	}

	namespace n_ASFPSWearableItem {
		constexpr auto MaterialsOverride = 0x310; // TArray<UMaterialInstance*>
		constexpr auto HoodMesh_Shown_MaterialsOverride = 0x320; // TArray<UMaterialInstance*>
		constexpr auto HoodMesh_Hidden_MaterialsOverride = 0x330; // TArray<UMaterialInstance*>
		constexpr auto LinkedSetItem = 0x340; // ASFPSWearableItem*
		constexpr auto ItemMesh = 0x348; // USkeletalMesh*
		constexpr auto HoodMesh_Shown = 0x350; // USkeletalMesh*
		constexpr auto HoodMesh_Hidden = 0x358; // USkeletalMesh*
		constexpr auto ProtectedBones = 0x360; // TArray<ESFPSBone>
		constexpr auto Resists = 0x370; // float [0x7]
		constexpr auto bUseHood = 0x38c; // bool
		constexpr auto bHoodShownBlocker = 0x38d; // bool
		constexpr auto bHoodHiddenBlocker = 0x38e; // bool
		constexpr auto bRustles = 0x38f; // bool
		constexpr auto SkinID = 0x390; // char
		constexpr auto Skins = 0x398; // TArray<FSFPSSkinData_Wearable>
	}

	namespace n_ULoudnessNRTSettings {
		constexpr auto AnalysisPeriod = 0x28; // float
		constexpr auto MinimumFrequency = 0x2c; // float
		constexpr auto MaximumFrequency = 0x30; // float
		constexpr auto CurveType = 0x34; // ELoudnessNRTCurveTypeEnum
		constexpr auto NoiseFloorDb = 0x38; // float
	}

	namespace n_UInterpTrackVisibility {
		constexpr auto VisibilityTrack = 0x70; // TArray<FVisibilityTrackKey>
		constexpr auto bFireEventsWhenForwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenJumpingForwards = 0x80; // char : 1
	}

	namespace n_USFPSAI_TClearTargetAndFocus {
		constexpr auto bClearTarget = 0x70; // bool
		constexpr auto bClearFocus = 0x71; // bool
	}

	namespace n_USFPSLockBreakingHandler {
		constexpr auto FormLockBreaking = 0x48; // UUserWidget*
	}

	namespace n_UCheatManager {
		constexpr auto DebugCameraControllerRef = 0x28; // ADebugCameraController*
		constexpr auto DebugCameraControllerClass = 0x30; // ADebugCameraController*
		constexpr auto CheatManagerExtensions = 0x78; // TArray<UCheatManagerExtension*>
	}

	namespace n_ASFPSOnlineBeaconClient {
		constexpr auto SteamAuthCallback = 0x2bc; // FDelegate
	}

	namespace n_UDatasmithCommonTessellationOptions {
		constexpr auto Options = 0x28; // FDatasmithTessellationOptions
	}

	namespace n_UMaterialExpressionSamplePhysicsVectorField {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
		constexpr auto FieldTarget = 0x54; // EFieldVectorType
	}

	namespace n_UAsyncActionLoadPrimaryAssetClass {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_AEQSTestingPawn {
		constexpr auto QueryTemplate = 0x4c0; // UEnvQuery*
		constexpr auto QueryParams = 0x4c8; // TArray<FEnvNamedValue>
		constexpr auto QueryConfig = 0x4d8; // TArray<FAIDynamicParam>
		constexpr auto TimeLimitPerStep = 0x4e8; // float
		constexpr auto StepToDebugDraw = 0x4ec; // int32_t
		constexpr auto HighlightMode = 0x4f0; // EEnvQueryHightlightMode
		constexpr auto bDrawLabels = 0x4f4; // char : 1
		constexpr auto bDrawFailedItems = 0x4f4; // char : 1
		constexpr auto bReRunQueryOnlyOnFinishedMove = 0x4f4; // char : 1
		constexpr auto bShouldBeVisibleInGame = 0x4f4; // char : 1
		constexpr auto bTickDuringGame = 0x4f4; // char : 1
		constexpr auto QueryingMode = 0x4f8; // EEnvQueryRunMode
		constexpr auto NavAgentProperties = 0x500; // FNavAgentProperties
	}

	namespace n_UAREnvironmentProbeComponent {
		constexpr auto ReplicatedPayload = 0x280; // FAREnvironmentProbeUpdatePayload
	}

	namespace n_UMaterialExpressionMaterialFunctionCall {
		constexpr auto MaterialFunction = 0x40; // UMaterialFunctionInterface*
		constexpr auto FunctionParameterInfo = 0x48; // FMaterialParameterInfo
	}

	namespace n_UMovieSceneParticleTrack {
		constexpr auto ParticleSections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_UFindSessionsCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UMovieSceneCameraShakeSection {
		constexpr auto ShakeData = 0xe8; // FMovieSceneCameraShakeSectionData
		constexpr auto ShakeClass = 0x108; // UCameraShakeBase*
		constexpr auto PlayScale = 0x110; // float
		constexpr auto PlaySpace = 0x114; // ECameraShakePlaySpace
		constexpr auto UserDefinedPlaySpace = 0x118; // FRotator
	}

	namespace n_UEdGraphNode_Documentation {
		constexpr auto Link = 0x98; // FString
		constexpr auto Excerpt = 0xa8; // FString
	}

	namespace n_UClothingSimulationInteractor {
		constexpr auto ClothingInteractors = 0x28; // TMap<FName, UClothingInteractor*>
	}

	namespace n_USFPSAmbientSoundManager {
		constexpr auto ASList_BaseAmbSounds = 0x28; // TArray<ASFPSAmbientSound*>
		constexpr auto ASList_AmbSounds = 0x38; // TArray<ASFPSAmbientSound*>
		constexpr auto ACList_OtherSoundsSounds = 0x48; // TArray<UAudioComponent*>
		constexpr auto WindScale = 0x5c; // float
		constexpr auto WindSpeed = 0x68; // float
	}

	namespace n_USFPSAI_TGenerateRandomPoint {
		constexpr auto bUseCharacterValue = 0x70; // bool
		constexpr auto WanderRadius = 0x74; // float
		constexpr auto bCenteredInFront = 0x78; // bool
	}

	namespace n_AUAZ_01_Static_C {
		constexpr auto CharacterOverlap = 0x488; // UBoxComponent*
		constexpr auto CharacterBlock1 = 0x490; // UBoxComponent*
		constexpr auto CharacterBlock0 = 0x498; // UBoxComponent*
		constexpr auto WheelBR = 0x4a0; // UStaticMeshComponent*
		constexpr auto WheelBL = 0x4a8; // UStaticMeshComponent*
		constexpr auto WheelFR = 0x4b0; // UStaticMeshComponent*
		constexpr auto WheelFL = 0x4b8; // UStaticMeshComponent*
		constexpr auto RearRight = 0x4c0; // USceneComponent*
		constexpr auto RearLeft = 0x4c8; // USceneComponent*
		constexpr auto FrontRight = 0x4d0; // USceneComponent*
		constexpr auto FrontLeft = 0x4d8; // USceneComponent*
		constexpr auto Exit_FR = 0x4e0; // USceneComponent*
		constexpr auto Exit_BR = 0x4e8; // USceneComponent*
		constexpr auto Exit_BL = 0x4f0; // USceneComponent*
		constexpr auto Exit_FL = 0x4f8; // USceneComponent*
		constexpr auto Enter_BR = 0x500; // UBoxComponent*
		constexpr auto Enter_BL = 0x508; // UBoxComponent*
		constexpr auto Enter_FR = 0x510; // UBoxComponent*
		constexpr auto Enter_FL = 0x518; // UBoxComponent*
	}

	namespace n_UBlendProfile {
		constexpr auto OwningSkeleton = 0x30; // USkeleton*
		constexpr auto ProfileEntries = 0x38; // TArray<FBlendProfileBoneEntry>
	}

	namespace n_UMaterialExpressionLandscapeLayerSample {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto PreviewWeight = 0x48; // float
		constexpr auto ExpressionGUID = 0x4c; // FGuid
	}

	namespace n_USlateVectorArtData {
		constexpr auto VertexData = 0x28; // TArray<FSlateMeshVertex>
		constexpr auto IndexData = 0x38; // TArray<uint32_t>
		constexpr auto Material = 0x48; // UMaterialInterface*
		constexpr auto ExtentMin = 0x50; // FVector2D
		constexpr auto ExtentMax = 0x58; // FVector2D
	}

	namespace n_UInterpTrackMove {
		constexpr auto PosTrack = 0x70; // FInterpCurveVector
		constexpr auto EulerTrack = 0x88; // FInterpCurveVector
		constexpr auto LookupTrack = 0xa0; // FInterpLookupTrack
		constexpr auto LookAtGroupName = 0xb0; // FName
		constexpr auto LinCurveTension = 0xb8; // float
		constexpr auto AngCurveTension = 0xbc; // float
		constexpr auto bUseQuatInterpolation = 0xc0; // char : 1
		constexpr auto bShowArrowAtKeys = 0xc0; // char : 1
		constexpr auto bDisableMovement = 0xc0; // char : 1
		constexpr auto bShowTranslationOnCurveEd = 0xc0; // char : 1
		constexpr auto bShowRotationOnCurveEd = 0xc0; // char : 1
		constexpr auto bHide3DTrack = 0xc0; // char : 1
		constexpr auto RotMode = 0xc4; // EInterpTrackMoveRotMode
	}

	namespace n_UStreamingSettings {
		constexpr auto AsyncLoadingThreadEnabled = 0x38; // char : 1
		constexpr auto WarnIfTimeLimitExceeded = 0x38; // char : 1
		constexpr auto TimeLimitExceededMultiplier = 0x3c; // float
		constexpr auto TimeLimitExceededMinTime = 0x40; // float
		constexpr auto MinBulkDataSizeForAsyncLoading = 0x44; // int32_t
		constexpr auto UseBackgroundLevelStreaming = 0x48; // char : 1
		constexpr auto AsyncLoadingUseFullTimeLimit = 0x48; // char : 1
		constexpr auto AsyncLoadingTimeLimit = 0x4c; // float
		constexpr auto PriorityAsyncLoadingExtraTime = 0x50; // float
		constexpr auto LevelStreamingActorsUpdateTimeLimit = 0x54; // float
		constexpr auto PriorityLevelStreamingActorsUpdateExtraTime = 0x58; // float
		constexpr auto LevelStreamingComponentsRegistrationGranularity = 0x5c; // int32_t
		constexpr auto LevelStreamingUnregisterComponentsTimeLimit = 0x60; // float
		constexpr auto LevelStreamingComponentsUnregistrationGranularity = 0x64; // int32_t
		constexpr auto FlushStreamingOnExit = 0x68; // char : 1
		constexpr auto EventDrivenLoaderEnabled = 0x68; // char : 1
	}

	namespace n_UMovieSceneBuiltInEasingFunction {
		constexpr auto Type = 0x30; // EMovieSceneBuiltInEasing
	}

	namespace n_UMaterialExpressionSkyAtmosphereLightIlluminance {
		constexpr auto LightIndex = 0x40; // int32_t
		constexpr auto WorldPosition = 0x44; // FExpressionInput
	}

	namespace n_USourceEffectSimpleDelayPreset {
		constexpr auto Settings = 0xa8; // FSourceEffectSimpleDelaySettings
	}

	namespace n_UAnimCompress {
		constexpr auto bNeedsSkeleton = 0x38; // char : 1
		constexpr auto TranslationCompressionFormat = 0x3c; // AnimationCompressionFormat
		constexpr auto RotationCompressionFormat = 0x3d; // AnimationCompressionFormat
		constexpr auto ScaleCompressionFormat = 0x3e; // AnimationCompressionFormat
	}

	namespace n_UAnimSharingAdditiveInstance {
		constexpr auto BaseComponent = 0x2b8; // TWeakObjectPtr<USkeletalMeshComponent>
		constexpr auto AdditiveAnimation = 0x2c0; // TWeakObjectPtr<UAnimSequence>
		constexpr auto Alpha = 0x2c8; // float
		constexpr auto bStateBool = 0x2cc; // bool
	}

	namespace n_UFormDlg_ItemList_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnOk = 0x268; // UButton*
		constexpr auto lbOk = 0x270; // UTextBlock*
		constexpr auto sv0 = 0x278; // UfrmSpriteViewInv_C*
		constexpr auto sv1 = 0x280; // UfrmSpriteViewInv_C*
		constexpr auto sv2 = 0x288; // UfrmSpriteViewInv_C*
		constexpr auto sv3 = 0x290; // UfrmSpriteViewInv_C*
		constexpr auto sv4 = 0x298; // UfrmSpriteViewInv_C*
		constexpr auto sv5 = 0x2a0; // UfrmSpriteViewInv_C*
		constexpr auto sv6 = 0x2a8; // UfrmSpriteViewInv_C*
	}

	namespace n_USFPSBaseHandler {
		constexpr auto Registration_PlayerList = 0xb8; // TArray<FSFPSLoginData>
		constexpr auto Registration_FilteredPlayerList = 0xc8; // TArray<FSFPSLoginData>
		constexpr auto Registration_PlayerListAdded = 0xe0; // TArray<FSFPSLoginData>
		constexpr auto Registration_FilteredPlayerListAdded = 0xf0; // TArray<FSFPSLoginData>
		constexpr auto FormAdminBase = 0x118; // UUserWidget*
		constexpr auto frmPlayer = 0x120; // USFPSUserWidget_AdminPanel_Player*
		constexpr auto bVisible = 0x128; // bool
	}

	namespace n_UFormDlg_Timer_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnCancel = 0x268; // UButton*
		constexpr auto imgProrgess = 0x270; // UImage*
		constexpr auto Progress = 0x278; // UMaterialInstanceDynamic*
	}

	namespace n_UVectorField {
		constexpr auto Bounds = 0x28; // FBox
		constexpr auto Intensity = 0x44; // float
	}

	namespace n_UABP_weapon_firearms_gun_c1911_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_6 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_5 = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_4 = 0x3b0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_3 = 0x3d8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x400; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x428; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_3 = 0x450; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_3 = 0x4d0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x500; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x580; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x5b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x630; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x660; // FAnimNode_StateMachine
	}

	namespace n_At_AdditionalCartridge_C {
		constexpr auto Trace = 0x398; // UBoxComponent*
		constexpr auto Mesh = 0x3a0; // UStaticMeshComponent*
	}

	namespace n_UPlatformInterfaceBase {
		constexpr auto AllDelegates = 0x28; // TArray<FDelegateArray>
	}

	namespace n_UBTDecorator_Cooldown {
		constexpr auto CooldownTime = 0x68; // float
	}

	namespace n_UMaterialFunctionInstance {
		constexpr auto Parent = 0x40; // UMaterialFunctionInterface*
		constexpr auto Base = 0x48; // UMaterialFunctionInterface*
		constexpr auto ScalarParameterValues = 0x50; // TArray<FScalarParameterValue>
		constexpr auto VectorParameterValues = 0x60; // TArray<FVectorParameterValue>
		constexpr auto TextureParameterValues = 0x70; // TArray<FTextureParameterValue>
		constexpr auto FontParameterValues = 0x80; // TArray<FFontParameterValue>
		constexpr auto StaticSwitchParameterValues = 0x90; // TArray<FStaticSwitchParameter>
		constexpr auto StaticComponentMaskParameterValues = 0xa0; // TArray<FStaticComponentMaskParameter>
		constexpr auto RuntimeVirtualTextureParameterValues = 0xb0; // TArray<FRuntimeVirtualTextureParameterValue>
	}

	namespace n_UParticleModuleOrbit {
		constexpr auto ChainMode = 0x38; // EOrbitChainMode
		constexpr auto OffsetAmount = 0x40; // FRawDistributionVector
		constexpr auto OffsetOptions = 0x88; // FOrbitOptions
		constexpr auto RotationAmount = 0x90; // FRawDistributionVector
		constexpr auto RotationOptions = 0xd8; // FOrbitOptions
		constexpr auto RotationRateAmount = 0xe0; // FRawDistributionVector
		constexpr auto RotationRateOptions = 0x128; // FOrbitOptions
	}

	namespace n_UDistributionVector {
		constexpr auto bCanBeBaked = 0x30; // char : 1
		constexpr auto bIsDirty = 0x30; // char : 1
		constexpr auto bBakedDataSuccesfully = 0x30; // char : 1
	}

	namespace n_UPhysicalAnimationComponent {
		constexpr auto StrengthMultiplyer = 0xb0; // float
		constexpr auto SkeletalMeshComponent = 0xb8; // USkeletalMeshComponent*
	}

	namespace n_USoundNodeSwitch {
		constexpr auto IntParameterName = 0x48; // FName
	}

	namespace n_UParticleModuleVectorFieldRotationRate {
		constexpr auto RotationRate = 0x30; // FVector
	}

	namespace n_UVectorFieldAnimated {
		constexpr auto Texture = 0x48; // UTexture2D*
		constexpr auto ConstructionOp = 0x50; // EVectorFieldConstructionOp
		constexpr auto VolumeSizeX = 0x54; // int32_t
		constexpr auto VolumeSizeY = 0x58; // int32_t
		constexpr auto VolumeSizeZ = 0x5c; // int32_t
		constexpr auto SubImagesX = 0x60; // int32_t
		constexpr auto SubImagesY = 0x64; // int32_t
		constexpr auto FrameCount = 0x68; // int32_t
		constexpr auto FramesPerSecond = 0x6c; // float
		constexpr auto bLoop = 0x70; // char : 1
		constexpr auto NoiseField = 0x78; // UVectorFieldStatic*
		constexpr auto NoiseScale = 0x80; // float
		constexpr auto NoiseMax = 0x84; // float
	}

	namespace n_UFindTurnBasedMatchCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_USynth2DSlider {
		constexpr auto ValueX = 0x108; // float
		constexpr auto ValueY = 0x10c; // float
		constexpr auto ValueXDelegate = 0x110; // FDelegate
		constexpr auto ValueYDelegate = 0x120; // FDelegate
		constexpr auto WidgetStyle = 0x130; // FSynth2DSliderStyle
		constexpr auto SliderHandleColor = 0x3e8; // FLinearColor
		constexpr auto IndentHandle = 0x3f8; // bool
		constexpr auto Locked = 0x3f9; // bool
		constexpr auto StepSize = 0x3fc; // float
		constexpr auto IsFocusable = 0x400; // bool
		constexpr auto OnMouseCaptureBegin = 0x408; // FMulticastInlineDelegate
		constexpr auto OnMouseCaptureEnd = 0x418; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureBegin = 0x428; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureEnd = 0x438; // FMulticastInlineDelegate
		constexpr auto OnValueChangedX = 0x448; // FMulticastInlineDelegate
		constexpr auto OnValueChangedY = 0x458; // FMulticastInlineDelegate
	}

	namespace n_UFormLockBreaking_C {
		constexpr auto Image_85 = 0x260; // UImage*
	}

	namespace n_ULandscapeComponent {
		constexpr auto SectionBaseX = 0x450; // int32_t
		constexpr auto SectionBaseY = 0x454; // int32_t
		constexpr auto ComponentSizeQuads = 0x458; // int32_t
		constexpr auto SubsectionSizeQuads = 0x45c; // int32_t
		constexpr auto NumSubsections = 0x460; // int32_t
		constexpr auto OverrideMaterial = 0x468; // UMaterialInterface*
		constexpr auto OverrideHoleMaterial = 0x470; // UMaterialInterface*
		constexpr auto OverrideMaterials = 0x478; // TArray<FLandscapeComponentMaterialOverride>
		constexpr auto MaterialInstances = 0x488; // TArray<UMaterialInstanceConstant*>
		constexpr auto MaterialInstancesDynamic = 0x498; // TArray<UMaterialInstanceDynamic*>
		constexpr auto LODIndexToMaterialIndex = 0x4a8; // TArray<int8_t>
		constexpr auto MaterialIndexToDisabledTessellationMaterial = 0x4b8; // TArray<int8_t>
		constexpr auto XYOffsetmapTexture = 0x4c8; // UTexture2D*
		constexpr auto WeightmapScaleBias = 0x4d0; // FVector4
		constexpr auto WeightmapSubsectionOffset = 0x4e0; // float
		constexpr auto HeightmapScaleBias = 0x4f0; // FVector4
		constexpr auto CachedLocalBox = 0x500; // FBox
		constexpr auto CollisionComponent = 0x51c; // LazyObjectProperty
		constexpr auto HeightmapTexture = 0x538; // UTexture2D*
		constexpr auto WeightmapLayerAllocations = 0x540; // TArray<FWeightmapLayerAllocationInfo>
		constexpr auto WeightmapTextures = 0x550; // TArray<UTexture2D*>
		constexpr auto LODStreamingProxy = 0x560; // ULandscapeLODStreamingProxy*
		constexpr auto MapBuildDataId = 0x568; // FGuid
		constexpr auto IrrelevantLights = 0x578; // TArray<FGuid>
		constexpr auto CollisionMipLevel = 0x588; // int32_t
		constexpr auto SimpleCollisionMipLevel = 0x58c; // int32_t
		constexpr auto NegativeZBoundsExtension = 0x590; // float
		constexpr auto PositiveZBoundsExtension = 0x594; // float
		constexpr auto StaticLightingResolution = 0x598; // float
		constexpr auto ForcedLOD = 0x59c; // int32_t
		constexpr auto LODBias = 0x5a0; // int32_t
		constexpr auto StateId = 0x5a4; // FGuid
		constexpr auto BakedTextureMaterialGuid = 0x5b4; // FGuid
		constexpr auto GIBakedBaseColorTexture = 0x5c8; // UTexture2D*
		constexpr auto MobileBlendableLayerMask = 0x5d0; // char
		constexpr auto MobileMaterialInterface = 0x5d8; // UMaterialInterface*
		constexpr auto MobileMaterialInterfaces = 0x5e0; // TArray<UMaterialInterface*>
		constexpr auto MobileWeightmapTextures = 0x5f0; // TArray<UTexture2D*>
	}

	namespace n_UWrapBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto bFillEmptySpace = 0x48; // bool
		constexpr auto FillSpanWhenLessThan = 0x4c; // float
		constexpr auto HorizontalAlignment = 0x50; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x51; // EVerticalAlignment
	}

	namespace n_UABP_weapon_firearms_rifle_steyraug_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x3b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x430; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x460; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x4e0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x510; // FAnimNode_StateMachine
	}

	namespace n_UEnvQueryTest_Project {
		constexpr auto ProjectionData = 0x1f8; // FEnvTraceData
	}

	namespace n_UfrmSpriteViewInv_C {
		constexpr auto UberGraphFrame = 0x2e8; // FPointerToUberGraphFrame
		constexpr auto btnMain = 0x2f0; // UButton*
		constexpr auto pnMain = 0x2f8; // USFPSUserWidget_EquipItem*
	}

	namespace n_ASFPSHandheldItem {
		constexpr auto ItemAudioComponent = 0x310; // TWeakObjectPtr<UAudioComponent>
		constexpr auto IsHeld = 0x328; // bool
		constexpr auto bUsed = 0x329; // bool
		constexpr auto HoldSocketName = 0x32c; // FName
		constexpr auto AnimType = 0x334; // ESFPSItemAnimTypes
		constexpr auto TimeOfUse = 0x338; // float
		constexpr auto bUsedLoopedAnimation = 0x33c; // bool
		constexpr auto AttachHand = 0x33d; // ESFPSHandheldItemAttachHand
		constexpr auto HideAnimLeft = 0x340; // UAnimMontage*
		constexpr auto ShowAnimLeft = 0x348; // UAnimMontage*
		constexpr auto HideAnimRight = 0x350; // UAnimMontage*
		constexpr auto ShowAnimRight = 0x358; // UAnimMontage*
		constexpr auto HideAnimHolster = 0x360; // UAnimMontage*
		constexpr auto ShowAnimHolster = 0x368; // UAnimMontage*
		constexpr auto ShowAnimHolster_HammerCocking = 0x370; // UAnimMontage*
		constexpr auto UseAnim = 0x378; // UAnimMontage*
		constexpr auto UseAnimRun = 0x380; // UAnimMontage*
		constexpr auto UseAnimCrouch = 0x388; // UAnimMontage*
		constexpr auto HideAnimLeftProne = 0x390; // UAnimMontage*
		constexpr auto ShowAnimLeftProne = 0x398; // UAnimMontage*
		constexpr auto HideAnimRightProne = 0x3a0; // UAnimMontage*
		constexpr auto ShowAnimRightProne = 0x3a8; // UAnimMontage*
		constexpr auto HideAnimHolsterProne = 0x3b0; // UAnimMontage*
		constexpr auto ShowAnimHolsterProne = 0x3b8; // UAnimMontage*
		constexpr auto ShowAnimHolsterProne_HammerCocking = 0x3c0; // UAnimMontage*
		constexpr auto UseAnimProne = 0x3c8; // UAnimMontage*
		constexpr auto TurnMomentum_Spring = 0x3d0; // float
		constexpr auto TurnMomentum_Damping = 0x3d4; // float
		constexpr auto MissileProjectile = 0x3d8; // ASFPSBaseMissileProjectile*
		constexpr auto UseItemCue = 0x3e0; // USoundCue*
		constexpr auto MovementCue = 0x3e8; // USoundCue*
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureReplace {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto VirtualTextureOutput = 0x54; // FExpressionInput
	}

	namespace n_APartyBeaconClient {
		constexpr auto DestSessionId = 0x2e0; // FString
		constexpr auto PendingReservation = 0x2f0; // FPartyReservation
		constexpr auto RequestType = 0x340; // EClientRequestType
		constexpr auto bPendingReservationSent = 0x341; // bool
		constexpr auto bCancelReservation = 0x342; // bool
	}

	namespace n_UAISense_Hearing {
		constexpr auto NoiseEvents = 0x80; // TArray<FAINoiseEvent>
		constexpr auto SpeedOfSoundSq = 0x90; // float
	}

	namespace n_UBTTask_PushPawnAction {
		constexpr auto Action = 0x70; // UPawnAction*
	}

	namespace n_UGizmoAxisRotationParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto Angle = 0xb0; // float
		constexpr auto LastChange = 0xb4; // FGizmoFloatParameterChange
		constexpr auto CurRotationAxis = 0xbc; // FVector
		constexpr auto CurRotationOrigin = 0xc8; // FVector
		constexpr auto InitialTransform = 0xe0; // FTransform
	}

	namespace n_UAnimCompress_RemoveTrivialKeys {
		constexpr auto MaxPosDiff = 0x40; // float
		constexpr auto MaxAngleDiff = 0x44; // float
		constexpr auto MaxScaleDiff = 0x48; // float
	}

	namespace n_ASFPSLootBox {
		constexpr auto Characters = 0x350; // TArray<TWeakObjectPtr<ASFPSCharacter>>
		constexpr auto Inventory = 0x360; // USFPSACLootBoxInventory*
		constexpr auto State = 0x368; // ESFPSLootBoxState
		constexpr auto bBaseStorm = 0x369; // bool
		constexpr auto bClientReady = 0x36a; // bool
		constexpr auto LootBoxSpawner = 0x370; // ASFPSLootBoxSpawner*
		constexpr auto KeyClass = 0x378; // ASFPSBaseItem*
		constexpr auto bAcceptsItemsFromCharacters = 0x380; // bool
		constexpr auto ContainerCue = 0x388; // USoundCue*
		constexpr auto LockCue = 0x390; // USoundCue*
		constexpr auto LootTraces = 0x3a8; // TArray<FVector>
	}

	namespace n_Aweapon_firearms_rifle_m4a1_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f0; // UStaticMeshComponent*
		constexpr auto SightOpen = 0x7f8; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x800; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x808; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x810; // UStaticMeshComponent*
	}

	namespace n_UMaterialExpressionDotProduct {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UMovieSceneSubSection {
		constexpr auto Parameters = 0xe8; // FMovieSceneSectionParameters
		constexpr auto StartOffset = 0x10c; // float
		constexpr auto TimeScale = 0x110; // float
		constexpr auto PrerollTime = 0x114; // float
		constexpr auto NetworkMask = 0x118; // char
		constexpr auto SubSequence = 0x120; // UMovieSceneSequence*
		constexpr auto ActorToRecord = 0x128; // LazyObjectProperty
		constexpr auto TargetSequenceName = 0x148; // FString
		constexpr auto TargetPathToRecordTo = 0x158; // FDirectoryPath
	}

	namespace n_USFPSCameraShake {
		constexpr auto FirstPersonScale = 0x1b0; // float
		constexpr auto ThirdPersonScale = 0x1b4; // float
	}

	namespace n_ULandscapeSplineControlPoint {
		constexpr auto Location = 0x28; // FVector
		constexpr auto Rotation = 0x34; // FRotator
		constexpr auto Width = 0x40; // float
		constexpr auto LayerWidthRatio = 0x44; // float
		constexpr auto SideFalloff = 0x48; // float
		constexpr auto LeftSideFalloffFactor = 0x4c; // float
		constexpr auto RightSideFalloffFactor = 0x50; // float
		constexpr auto LeftSideLayerFalloffFactor = 0x54; // float
		constexpr auto RightSideLayerFalloffFactor = 0x58; // float
		constexpr auto EndFalloff = 0x5c; // float
		constexpr auto ConnectedSegments = 0x60; // TArray<FLandscapeSplineConnection>
		constexpr auto Points = 0x70; // TArray<FLandscapeSplineInterpPoint>
		constexpr auto Bounds = 0x80; // FBox
		constexpr auto LocalMeshComponent = 0xa0; // UControlPointMeshComponent*
	}

	namespace n_UAnimationDataSourceRegistry {
		constexpr auto DataSources = 0x28; // TMap<FName, TWeakObjectPtr<UObject>>
	}

	namespace n_UARPin {
		constexpr auto TrackedGeometry = 0x28; // UARTrackedGeometry*
		constexpr auto PinnedComponent = 0x30; // USceneComponent*
		constexpr auto LocalToTrackingTransform = 0x40; // FTransform
		constexpr auto LocalToAlignedTrackingTransform = 0x70; // FTransform
		constexpr auto TrackingState = 0xa0; // EARTrackingState
		constexpr auto OnARTrackingStateChanged = 0xc0; // FMulticastInlineDelegate
		constexpr auto OnARTransformUpdated = 0xd0; // FMulticastInlineDelegate
	}

	namespace n_UDatasmithPostProcessVolumeTemplate {
		constexpr auto Settings = 0x30; // FDatasmithPostProcessSettingsTemplate
		constexpr auto bEnabled = 0x70; // char : 1
		constexpr auto bUnbound = 0x70; // char : 1
	}

	namespace n_UMaterialExpressionPreviousFrameSwitch {
		constexpr auto CurrentFrame = 0x40; // FExpressionInput
		constexpr auto PreviousFrame = 0x54; // FExpressionInput
	}

	namespace n_UABP_weapon_firearms_rifle_hunter85_C {
		constexpr auto UberGraphFrame = 0x300; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x308; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x338; // FAnimNode_Slot
		constexpr auto AnimGraphNode_SequencePlayer = 0x380; // FAnimNode_SequencePlayer
	}

	namespace n_Ascope_opt_elcan_4x_C {
		constexpr auto hamr_4x_reticles = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UABP_weapon_firearms_rifle_famas_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x318; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x398; // FAnimNode_Slot
	}

	namespace n_USoundCue {
		constexpr auto bPrimeOnLoad = 0x170; // char : 1
		constexpr auto FirstNode = 0x178; // USoundNode*
		constexpr auto VolumeMultiplier = 0x180; // float
		constexpr auto PitchMultiplier = 0x184; // float
		constexpr auto AttenuationOverrides = 0x188; // FSoundAttenuationSettings
		constexpr auto SubtitlePriority = 0x528; // float
		constexpr auto bOverrideAttenuation = 0x530; // char : 1
		constexpr auto bExcludeFromRandomNodeBranchCulling = 0x530; // char : 1
		constexpr auto CookedQualityIndex = 0x534; // int32_t
		constexpr auto bHasPlayWhenSilent = 0x538; // char : 1
	}

	namespace n_ASkyAtmosphere {
		constexpr auto SkyAtmosphereComponent = 0x220; // USkyAtmosphereComponent*
	}

	namespace n_ASFPSWeatherMan {
		constexpr auto Wind_ForceMin = 0x22c; // float
		constexpr auto Wind_ForceMax = 0x230; // float
		constexpr auto Wind_SpeedMax = 0x234; // float
		constexpr auto Wind_TimeActiveMin = 0x238; // float
		constexpr auto Wind_TimeActiveMax = 0x23c; // float
		constexpr auto Wind_TimeInactiveMin = 0x240; // float
		constexpr auto Wind_TimeInactiveMax = 0x244; // float
		constexpr auto Wind_DragConst = 0x248; // float
		constexpr auto Wind_DragLinear = 0x24c; // float
		constexpr auto Wind_DragSq = 0x250; // float
		constexpr auto ParametersCollection = 0x280; // UMaterialParameterCollection*
	}

	namespace n_APaperTerrainActor {
		constexpr auto DummyRoot = 0x220; // USceneComponent*
		constexpr auto SplineComponent = 0x228; // UPaperTerrainSplineComponent*
		constexpr auto RenderComponent = 0x230; // UPaperTerrainComponent*
	}

	namespace n_UMaterialExpressionLandscapeVisibilityMask {
		constexpr auto ExpressionGUID = 0x40; // FGuid
	}

	namespace n_UFieldSystemMetaDataIteration {
		constexpr auto Iterations = 0xb0; // int32_t
	}

	namespace n_UEditableGameplayTagQueryExpression_AllExprMatch {
		constexpr auto Expressions = 0x28; // TArray<UEditableGameplayTagQueryExpression*>
	}

	namespace n_UAIAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFail = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UNamedInterfaces {
		constexpr auto NamedInterfaces = 0x28; // TArray<FNamedInterface>
		constexpr auto NamedInterfaceDefs = 0x38; // TArray<FNamedInterfaceDef>
	}

	namespace n_UAnimCompress_RemoveLinearKeys {
		constexpr auto MaxPosDiff = 0x40; // float
		constexpr auto MaxAngleDiff = 0x44; // float
		constexpr auto MaxScaleDiff = 0x48; // float
		constexpr auto MaxEffectorDiff = 0x4c; // float
		constexpr auto MinEffectorDiff = 0x50; // float
		constexpr auto EffectorDiffSocket = 0x54; // float
		constexpr auto ParentKeyScale = 0x58; // float
		constexpr auto bRetarget = 0x5c; // char : 1
		constexpr auto bActuallyFilterLinearKeys = 0x5c; // char : 1
	}

	namespace n_UBreakpoint {
		constexpr auto bEnabled = 0x28; // char : 1
		constexpr auto Node = 0x30; // UEdGraphNode*
		constexpr auto bStepOnce = 0x38; // char : 1
		constexpr auto bStepOnce_WasPreviouslyDisabled = 0x38; // char : 1
		constexpr auto bStepOnce_RemoveAfterHit = 0x38; // char : 1
	}

	namespace n_At_MuzzleAttachement_C {
		constexpr auto Trace = 0x380; // UBoxComponent*
		constexpr auto Mesh = 0x388; // UStaticMeshComponent*
	}

	namespace n_UHierarchicalLODSetup {
		constexpr auto HierarchicalLODSetup = 0x28; // TArray<FHierarchicalSimplification>
		constexpr auto OverrideBaseMaterial = 0x38; // TSoftObjectPtr<UMaterialInterface>
	}

	namespace n_UMaterialExpressionArccosineFast {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPostProcessComponent {
		constexpr auto Settings = 0x200; // FPostProcessSettings
		constexpr auto Priority = 0x760; // float
		constexpr auto BlendRadius = 0x764; // float
		constexpr auto BlendWeight = 0x768; // float
		constexpr auto bEnabled = 0x76c; // char : 1
		constexpr auto bUnbound = 0x76c; // char : 1
	}

	namespace n_ASFPSWeaponMF_Sight {
		constexpr auto FullMesh = 0x348; // UStaticMesh*
		constexpr auto PartialMesh = 0x350; // UStaticMesh*
		constexpr auto bDoNotShowWeaponSight = 0x358; // bool
		constexpr auto CameraOrigin = 0x35c; // FVector
		constexpr auto CameraOriginSecondary = 0x368; // FVector
		constexpr auto CollimatorTransform = 0x380; // FTransform
		constexpr auto Zooms = 0x3b0; // TArray<float>
	}

	namespace n_UViewport {
		constexpr auto BackgroundColor = 0x120; // FLinearColor
	}

	namespace n_ULightMapVirtualTexture2D {
		constexpr auto TypeToLayer = 0x1a0; // TArray<int8_t>
	}

	namespace n_UParticleModuleKillHeight {
		constexpr auto Height = 0x30; // FRawDistributionFloat
		constexpr auto bAbsolute = 0x60; // char : 1
		constexpr auto bFloor = 0x60; // char : 1
		constexpr auto bApplyPSysScale = 0x60; // char : 1
	}

	namespace n_UBackgroundBlurSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_UImage {
		constexpr auto Brush = 0x108; // FSlateBrush
		constexpr auto BrushDelegate = 0x190; // FDelegate
		constexpr auto ColorAndOpacity = 0x1a0; // FLinearColor
		constexpr auto ColorAndOpacityDelegate = 0x1b0; // FDelegate
		constexpr auto bFlipForRightToLeftFlowDirection = 0x1c0; // bool
		constexpr auto OnMouseButtonDownEvent = 0x1c4; // FDelegate
	}

	namespace n_UMovieSceneObjectPropertySection {
		constexpr auto ObjectChannel = 0xe8; // FMovieSceneObjectPathChannel
	}

	namespace n_APointLight {
		constexpr auto PointLightComponent = 0x230; // UPointLightComponent*
	}

	namespace n_UMagicLeapARPinSettings {
		constexpr auto UpdateCheckFrequency = 0x28; // float
		constexpr auto OnUpdatedEventTriggerDelta = 0x2c; // FMagicLeapARPinState
	}

	namespace n_USFPSACZoneManager {
		constexpr auto Zones = 0xb0; // TArray<FSFPSZone>
		constexpr auto ZoneColor = 0xc0; // FColor
	}

	namespace n_UParticleSystem {
		constexpr auto UpdateTime_FPS = 0x30; // float
		constexpr auto UpdateTime_Delta = 0x34; // float
		constexpr auto WarmupTime = 0x38; // float
		constexpr auto WarmupTickRate = 0x3c; // float
		constexpr auto Emitters = 0x40; // TArray<UParticleEmitter*>
		constexpr auto PreviewComponent = 0x50; // UParticleSystemComponent*
		constexpr auto CurveEdSetup = 0x58; // UInterpCurveEdSetup*
		constexpr auto LODDistanceCheckTime = 0x60; // float
		constexpr auto MacroUVRadius = 0x64; // float
		constexpr auto LODDistances = 0x68; // TArray<float>
		constexpr auto LODSettings = 0x78; // TArray<FParticleSystemLOD>
		constexpr auto FixedRelativeBoundingBox = 0x88; // FBox
		constexpr auto SecondsBeforeInactive = 0xa4; // float
		constexpr auto Delay = 0xa8; // float
		constexpr auto DelayLow = 0xac; // float
		constexpr auto bOrientZAxisTowardCamera = 0xb0; // char : 1
		constexpr auto bUseFixedRelativeBoundingBox = 0xb0; // char : 1
		constexpr auto bShouldResetPeakCounts = 0xb0; // char : 1
		constexpr auto bHasPhysics = 0xb0; // char : 1
		constexpr auto bUseRealtimeThumbnail = 0xb0; // char : 1
		constexpr auto ThumbnailImageOutOfDate = 0xb0; // char : 1
		constexpr auto bUseDelayRange = 0xb1; // char : 1
		constexpr auto bAllowManagedTicking = 0xb1; // char : 1
		constexpr auto bAutoDeactivate = 0xb1; // char : 1
		constexpr auto bRegenerateLODDuplicate = 0xb1; // char : 1
		constexpr auto SystemUpdateMode = 0xb2; // EParticleSystemUpdateMode
		constexpr auto LODMethod = 0xb3; // ParticleSystemLODMethod
		constexpr auto InsignificantReaction = 0xb4; // EParticleSystemInsignificanceReaction
		constexpr auto OcclusionBoundsMethod = 0xb5; // EParticleSystemOcclusionBoundsMethod
		constexpr auto MaxSignificanceLevel = 0xb7; // EParticleSignificanceLevel
		constexpr auto MinTimeBetweenTicks = 0xb8; // uint32_t
		constexpr auto InsignificanceDelay = 0xbc; // float
		constexpr auto MacroUVPosition = 0xc0; // FVector
		constexpr auto CustomOcclusionBounds = 0xcc; // FBox
		constexpr auto SoloTracking = 0xe8; // TArray<FLODSoloTrack>
		constexpr auto NamedMaterialSlots = 0xf8; // TArray<FNamedEmitterMaterial>
	}

	namespace n_UToIntegerField {
		constexpr auto FloatField = 0xb0; // UFieldNodeFloat*
	}

	namespace n_UCharacter_man_01_C {
		constexpr auto UberGraphFrame = 0x3b0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_162 = 0x3b8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_251 = 0x548; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_290 = 0x5e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_289 = 0x610; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_288 = 0x638; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SaveCachedPose_9 = 0x660; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_BlendListByEnum_13 = 0x7b8; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_UseCachedPose_287 = 0x868; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_286 = 0x890; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_285 = 0x8b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_161 = 0x8e0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_250 = 0xa70; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_66 = 0xb10; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_58 = 0xb30; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_66 = 0xcc0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_284 = 0xce0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_249 = 0xd08; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_283 = 0xda8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_282 = 0xdd0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_281 = 0xdf8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_280 = 0xe20; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_160 = 0xe48; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_Slot_6 = 0xfd8; // FAnimNode_Slot
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_159 = 0x1020; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_65 = 0x11b0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_57 = 0x11d0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_65 = 0x1360; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_64 = 0x1380; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_56 = 0x13a0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_64 = 0x1530; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_279 = 0x1550; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_158 = 0x1578; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_248 = 0x1708; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_247 = 0x17a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_246 = 0x1848; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_157 = 0x18e8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_245 = 0x1a78; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_156 = 0x1b18; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_244 = 0x1ca8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_243 = 0x1d48; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_155 = 0x1de8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_278 = 0x1f78; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_277 = 0x1fa0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_154 = 0x1fc8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_TwoWayBlend_96 = 0x2158; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendListByBool_242 = 0x2220; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_276 = 0x22c0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_275 = 0x22e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_274 = 0x2310; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_63 = 0x2338; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_63 = 0x2358; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Fabrik_55 = 0x2380; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_BlendListByBool_241 = 0x2510; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_273 = 0x25b0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_240 = 0x25d8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_239 = 0x2678; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_238 = 0x2718; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_272 = 0x27b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_237 = 0x27e0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_62 = 0x2880; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_62 = 0x28a0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_271 = 0x28c0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_270 = 0x28e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_236 = 0x2910; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_269 = 0x29b0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_Fabrik_54 = 0x29e0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_SaveCachedPose_8 = 0x2b70; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_268 = 0x2cc8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_Slot_5 = 0x2cf0; // FAnimNode_Slot
		constexpr auto AnimGraphNode_SaveCachedPose_7 = 0x2d38; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_267 = 0x2e90; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_295 = 0x2eb8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_294 = 0x2f38; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_293 = 0x2fb8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_292 = 0x3038; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_291 = 0x30b8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_15 = 0x3138; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_14 = 0x3208; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_UseCachedPose_266 = 0x32d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_13 = 0x3300; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_UseCachedPose_265 = 0x33d0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_12 = 0x33f8; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_UseCachedPose_264 = 0x34c8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_11 = 0x34f0; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_UseCachedPose_263 = 0x35c0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_95 = 0x35e8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_94 = 0x36b0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_93 = 0x3778; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_92 = 0x3840; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_91 = 0x3908; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_262 = 0x39d0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_153 = 0x39f8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_152 = 0x3b88; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_SaveCachedPose_6 = 0x3d18; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_261 = 0x3e70; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_260 = 0x3e98; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_259 = 0x3ec0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_235 = 0x3ee8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_234 = 0x3f88; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_258 = 0x4028; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_257 = 0x4050; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_151 = 0x4078; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_150 = 0x4208; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_149 = 0x4398; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_148 = 0x4528; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_147 = 0x46b8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_256 = 0x4848; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_146 = 0x4870; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_233 = 0x4a00; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_232 = 0x4aa0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_231 = 0x4b40; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_145 = 0x4be0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_255 = 0x4d70; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_144 = 0x4d98; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_143 = 0x4f28; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_142 = 0x50b8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_141 = 0x5248; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_140 = 0x53d8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_139 = 0x5568; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_138 = 0x56f8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_137 = 0x5888; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_136 = 0x5a18; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_135 = 0x5ba8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_230 = 0x5d38; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_254 = 0x5dd8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_229 = 0x5e00; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_228 = 0x5ea0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_253 = 0x5f40; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_252 = 0x5f68; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_290 = 0x5f90; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_289 = 0x6010; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_90 = 0x6090; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_89 = 0x6158; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_251 = 0x6220; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_88 = 0x6248; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_288 = 0x6310; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_287 = 0x6390; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_87 = 0x6410; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_250 = 0x64d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_86 = 0x6500; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_286 = 0x65c8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_285 = 0x6648; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_284 = 0x66c8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_283 = 0x6748; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_85 = 0x67c8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_249 = 0x6890; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_84 = 0x68b8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_83 = 0x6980; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_248 = 0x6a48; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_82 = 0x6a70; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_81 = 0x6b38; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_247 = 0x6c00; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_80 = 0x6c28; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_282 = 0x6cf0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_281 = 0x6d70; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_280 = 0x6df0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_279 = 0x6e70; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_227 = 0x6ef0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_226 = 0x6f90; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_225 = 0x7030; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_224 = 0x70d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_223 = 0x7170; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_222 = 0x7210; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_221 = 0x72b0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_220 = 0x7350; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_219 = 0x73f0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_218 = 0x7490; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_217 = 0x7530; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_216 = 0x75d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_215 = 0x7670; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_214 = 0x7710; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_TwoWayBlend_79 = 0x77b0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_246 = 0x7878; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_78 = 0x78a0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_77 = 0x7968; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_245 = 0x7a30; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_76 = 0x7a58; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_278 = 0x7b20; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_277 = 0x7ba0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_276 = 0x7c20; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_275 = 0x7ca0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ModifyBone_51 = 0x7d20; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_LocalToComponentSpace_61 = 0x7e28; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_61 = 0x7e48; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ModifyBone_50 = 0x7e68; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_49 = 0x7f70; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_LocalToComponentSpace_60 = 0x8078; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_60 = 0x8098; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_244 = 0x80b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_134 = 0x80e0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_133 = 0x8270; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByEnum_12 = 0x8400; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_SequencePlayer_274 = 0x84b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_10 = 0x8530; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_SequencePlayer_273 = 0x8600; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_272 = 0x8680; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_9 = 0x8700; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_SequencePlayer_271 = 0x87d0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_8 = 0x8850; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_SequencePlayer_270 = 0x8920; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_7 = 0x89a0; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_UseCachedPose_243 = 0x8a70; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_242 = 0x8a98; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_59 = 0x8ac0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_53 = 0x8ae0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_59 = 0x8c70; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_241 = 0x8c90; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SaveCachedPose_5 = 0x8cb8; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_58 = 0x8e10; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_52 = 0x8e30; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_58 = 0x8fc0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_240 = 0x8fe0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_57 = 0x9008; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_51 = 0x9030; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_57 = 0x91c0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Slot_4 = 0x91e0; // FAnimNode_Slot
		constexpr auto AnimGraphNode_SequencePlayer_269 = 0x9228; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SaveCachedPose_4 = 0x92a8; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_239 = 0x9400; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_238 = 0x9428; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_237 = 0x9450; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_236 = 0x9478; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_132 = 0x94a0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_131 = 0x9630; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_130 = 0x97c0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_235 = 0x9950; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_234 = 0x9978; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_56 = 0x99a0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_56 = 0x99c0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_SequencePlayer_268 = 0x99e0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_233 = 0x9a60; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_232 = 0x9a88; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_55 = 0x9ab0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_50 = 0x9ad0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_55 = 0x9c60; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_BlendListByEnum_11 = 0x9c80; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_UseCachedPose_231 = 0x9d30; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_267 = 0x9d58; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_266 = 0x9dd8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_129 = 0x9e58; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_213 = 0x9fe8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_230 = 0xa088; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_265 = 0xa0b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_229 = 0xa130; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_212 = 0xa158; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_228 = 0xa1f8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_264 = 0xa220; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_211 = 0xa2a0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_6 = 0xa340; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_UseCachedPose_227 = 0xa410; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_210 = 0xa438; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_226 = 0xa4d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_209 = 0xa500; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_225 = 0xa5a0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_263 = 0xa5c8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_224 = 0xa648; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_208 = 0xa670; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_223 = 0xa710; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_128 = 0xa738; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_207 = 0xa8c8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_222 = 0xa968; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_Fabrik_49 = 0xa990; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ApplyAdditive_69 = 0xab20; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_262 = 0xabe8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Fabrik_48 = 0xac70; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_LocalToComponentSpace_54 = 0xae00; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_54 = 0xae20; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_221 = 0xae40; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_53 = 0xae68; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_47 = 0xae90; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_53 = 0xb020; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_BlendListByBool_206 = 0xb040; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_220 = 0xb0e0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_Fabrik_46 = 0xb110; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_LocalToComponentSpace_52 = 0xb2a0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_52 = 0xb2c0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ApplyAdditive_68 = 0xb2e0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_LocalToComponentSpace_51 = 0xb3a8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_45 = 0xb3d0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_51 = 0xb560; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ApplyAdditive_67 = 0xb580; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_LocalToComponentSpace_50 = 0xb648; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_44 = 0xb670; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_50 = 0xb800; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_49 = 0xb820; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_43 = 0xb840; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_49 = 0xb9d0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_219 = 0xb9f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_205 = 0xba18; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_48 = 0xbab8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_42 = 0xbae0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_48 = 0xbc70; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_218 = 0xbc90; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_204 = 0xbcb8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_203 = 0xbd58; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_261 = 0xbdf8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_66 = 0xbe78; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_217 = 0xbf40; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_47 = 0xbf68; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_41 = 0xbf90; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_47 = 0xc120; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_216 = 0xc140; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_202 = 0xc168; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_260 = 0xc208; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_215 = 0xc288; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_65 = 0xc2b0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_64 = 0xc378; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_214 = 0xc440; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_201 = 0xc468; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_213 = 0xc508; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_46 = 0xc530; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_40 = 0xc550; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_46 = 0xc6e0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_TwoWayBlend_75 = 0xc700; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_212 = 0xc7c8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_259 = 0xc7f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_258 = 0xc870; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_74 = 0xc8f0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_211 = 0xc9b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_200 = 0xc9e0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyAdditive_63 = 0xca80; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_210 = 0xcb48; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_257 = 0xcb70; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_62 = 0xcbf0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_209 = 0xccb8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_256 = 0xcce0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_61 = 0xcd60; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_208 = 0xce28; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_255 = 0xce50; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_LocalToComponentSpace_45 = 0xced0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_45 = 0xcef0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Fabrik_39 = 0xcf10; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_BlendListByBool_199 = 0xd0a0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_207 = 0xd140; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_254 = 0xd168; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_253 = 0xd1e8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_73 = 0xd268; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_206 = 0xd330; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_72 = 0xd358; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_71 = 0xd420; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_205 = 0xd4e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_70 = 0xd510; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_252 = 0xd5d8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_251 = 0xd658; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_204 = 0xd6d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_198 = 0xd700; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_203 = 0xd7a0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_60 = 0xd7c8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_250 = 0xd890; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_249 = 0xd910; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_59 = 0xd990; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_202 = 0xda58; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_127 = 0xda80; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_44 = 0xdc10; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_38 = 0xdc30; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_44 = 0xddc0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_201 = 0xdde0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_197 = 0xde08; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_43 = 0xdea8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_37 = 0xded0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_43 = 0xe060; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_200 = 0xe080; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_58 = 0xe0a8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_248 = 0xe170; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_247 = 0xe1f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_199 = 0xe270; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_42 = 0xe298; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_42 = 0xe2b8; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Fabrik_36 = 0xe2e0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_UseCachedPose_198 = 0xe470; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_196 = 0xe498; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_197 = 0xe538; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_57 = 0xe560; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_246 = 0xe628; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_56 = 0xe6a8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_126 = 0xe770; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_196 = 0xe900; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_41 = 0xe928; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_40 = 0xe948; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_35 = 0xe970; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_41 = 0xeb00; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_195 = 0xeb20; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_195 = 0xeb48; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_194 = 0xebe8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_194 = 0xec10; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_193 = 0xecb0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_55 = 0xecd8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_54 = 0xeda0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_245 = 0xee68; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_244 = 0xeee8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_LayeredBoneBlend_4 = 0xef68; // FAnimNode_LayeredBoneBlend
		constexpr auto AnimGraphNode_UseCachedPose_192 = 0xf028; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_53 = 0xf050; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_LocalToComponentSpace_39 = 0xf118; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_34 = 0xf140; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_40 = 0xf2d0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_SequencePlayer_243 = 0xf2f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_191 = 0xf370; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_193 = 0xf398; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyAdditive_52 = 0xf438; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_190 = 0xf500; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_192 = 0xf528; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyAdditive_51 = 0xf5c8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_189 = 0xf690; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_242 = 0xf6b8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_50 = 0xf738; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_188 = 0xf800; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_241 = 0xf828; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_240 = 0xf8a8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_49 = 0xf928; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_187 = 0xf9f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_48 = 0xfa18; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_186 = 0xfae0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_239 = 0xfb08; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_125 = 0xfb88; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_124 = 0xfd18; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_123 = 0xfea8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_122 = 0x10038; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_191 = 0x101c8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_38 = 0x10268; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_33 = 0x10290; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_39 = 0x10420; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_185 = 0x10440; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_190 = 0x10468; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_37 = 0x10508; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_32 = 0x10530; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_38 = 0x106c0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_184 = 0x106e0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_189 = 0x10708; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_36 = 0x107a8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_31 = 0x107d0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_37 = 0x10960; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_183 = 0x10980; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_188 = 0x109a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_35 = 0x10a48; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_30 = 0x10a70; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_36 = 0x10c00; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_182 = 0x10c20; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_187 = 0x10c48; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_34 = 0x10ce8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_29 = 0x10d10; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_35 = 0x10ea0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_181 = 0x10ec0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_186 = 0x10ee8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_180 = 0x10f88; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_33 = 0x10fb0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_28 = 0x10fd0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_34 = 0x11160; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_BlendListByBool_185 = 0x11180; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_32 = 0x11220; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_27 = 0x11240; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_33 = 0x113d0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_179 = 0x113f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_184 = 0x11418; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_178 = 0x114b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_31 = 0x114e0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_26 = 0x11500; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_32 = 0x11690; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ApplyAdditive_47 = 0x116b0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_238 = 0x11778; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_183 = 0x117f8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_177 = 0x11898; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_182 = 0x118c0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_237 = 0x11960; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_46 = 0x119e0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_176 = 0x11aa8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_30 = 0x11ad0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_31 = 0x11af0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Fabrik_25 = 0x11b10; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_BlendListByBool_181 = 0x11ca0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_175 = 0x11d40; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_121 = 0x11d68; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_120 = 0x11ef8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_119 = 0x12088; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_118 = 0x12218; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_117 = 0x123a8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_116 = 0x12538; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_115 = 0x126c8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_114 = 0x12858; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ApplyAdditive_45 = 0x129e8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_174 = 0x12ab0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_236 = 0x12ad8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ComponentToLocalSpace_30 = 0x12b58; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ModifyBone_48 = 0x12b78; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_47 = 0x12c80; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_46 = 0x12d88; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_45 = 0x12e90; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_44 = 0x12f98; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_43 = 0x130a0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_42 = 0x131a8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_113 = 0x132b0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ApplyAdditive_44 = 0x13440; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_235 = 0x13508; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_173 = 0x13588; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_172 = 0x135b0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_171 = 0x135d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_112 = 0x13600; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_170 = 0x13790; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_111 = 0x137b8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_169 = 0x13948; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_168 = 0x13970; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_167 = 0x13998; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_166 = 0x139c0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_165 = 0x139e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_164 = 0x13a10; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_163 = 0x13a38; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_162 = 0x13a60; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_161 = 0x13a88; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_160 = 0x13ab0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_159 = 0x13ad8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_158 = 0x13b00; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_157 = 0x13b28; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_156 = 0x13b50; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_155 = 0x13b78; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_154 = 0x13ba0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_153 = 0x13bc8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_152 = 0x13bf0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_151 = 0x13c18; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_110 = 0x13c40; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_109 = 0x13dd0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_108 = 0x13f60; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_TwoWayBlend_69 = 0x140f0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_150 = 0x141b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_68 = 0x141e0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_234 = 0x142a8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_233 = 0x14328; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_67 = 0x143a8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_149 = 0x14470; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_66 = 0x14498; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_232 = 0x14560; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_231 = 0x145e0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_65 = 0x14660; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_148 = 0x14728; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_64 = 0x14750; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_230 = 0x14818; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_229 = 0x14898; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_LocalToComponentSpace_29 = 0x14918; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_24 = 0x14940; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_29 = 0x14ad0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_107 = 0x14af0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_106 = 0x14c80; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_105 = 0x14e10; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_180 = 0x14fa0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_179 = 0x15040; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_178 = 0x150e0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_104 = 0x15180; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_103 = 0x15310; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_102 = 0x154a0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_147 = 0x15630; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_146 = 0x15658; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_145 = 0x15680; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_144 = 0x156a8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_43 = 0x156d0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_143 = 0x15798; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_101 = 0x157c0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_177 = 0x15950; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_142 = 0x159f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_228 = 0x15a18; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_100 = 0x15a98; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_99 = 0x15c28; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_98 = 0x15db8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_176 = 0x15f48; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_175 = 0x15fe8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_97 = 0x16088; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_96 = 0x16218; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_174 = 0x163a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_173 = 0x16448; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_95 = 0x164e8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_94 = 0x16678; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_93 = 0x16808; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_141 = 0x16998; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_140 = 0x169c0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_139 = 0x169e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_138 = 0x16a10; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_172 = 0x16a38; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_92 = 0x16ad8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_91 = 0x16c68; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_90 = 0x16df8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_171 = 0x16f88; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyAdditive_42 = 0x17028; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_137 = 0x170f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_227 = 0x17118; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_89 = 0x17198; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_88 = 0x17328; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_87 = 0x174b8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_86 = 0x17648; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_85 = 0x177d8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_84 = 0x17968; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_83 = 0x17af8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_82 = 0x17c88; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_SequencePlayer_226 = 0x17e18; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_81 = 0x17e98; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ApplyAdditive_41 = 0x18028; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_80 = 0x180f0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_79 = 0x18280; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_78 = 0x18410; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_77 = 0x185a0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ModifyBone_41 = 0x18730; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_76 = 0x18838; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_75 = 0x189c8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ModifyBone_40 = 0x18b58; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_74 = 0x18c60; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_73 = 0x18df0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ModifyBone_39 = 0x18f80; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_72 = 0x19088; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_136 = 0x19218; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_225 = 0x19240; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_40 = 0x192c0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_135 = 0x19388; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_Slot_3 = 0x193b0; // FAnimNode_Slot
		constexpr auto AnimGraphNode_LayeredBoneBlend_3 = 0x193f8; // FAnimNode_LayeredBoneBlend
		constexpr auto AnimGraphNode_UseCachedPose_134 = 0x194b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_133 = 0x194e0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LayeredBoneBlend_2 = 0x19508; // FAnimNode_LayeredBoneBlend
		constexpr auto AnimGraphNode_ModifyBone_38 = 0x195c8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_BlendListByBool_170 = 0x196d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_169 = 0x19770; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_168 = 0x19810; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_132 = 0x198b0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_131 = 0x198d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_130 = 0x19900; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_129 = 0x19928; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_128 = 0x19950; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_127 = 0x19978; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_126 = 0x199a0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_125 = 0x199c8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_124 = 0x199f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_123 = 0x19a18; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_122 = 0x19a40; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_121 = 0x19a68; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_120 = 0x19a90; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_119 = 0x19ab8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_118 = 0x19ae0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_117 = 0x19b08; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_116 = 0x19b30; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_115 = 0x19b58; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_114 = 0x19b80; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_167 = 0x19ba8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_71 = 0x19c48; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_70 = 0x19dd8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_69 = 0x19f68; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_68 = 0x1a0f8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_67 = 0x1a288; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_66 = 0x1a418; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_65 = 0x1a5a8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_64 = 0x1a738; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_63 = 0x1a8c8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_62 = 0x1aa58; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_61 = 0x1abe8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_60 = 0x1ad78; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_59 = 0x1af08; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_58 = 0x1b098; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_57 = 0x1b228; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_56 = 0x1b3b8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_55 = 0x1b548; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_54 = 0x1b6d8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_53 = 0x1b868; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ModifyBone_37 = 0x1b9f8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_36 = 0x1bb00; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ApplyAdditive_39 = 0x1bc08; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ModifyBone_35 = 0x1bcd0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_34 = 0x1bdd8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ApplyAdditive_38 = 0x1bee0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_BlendSpacePlayer_179 = 0x1bfa8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_37 = 0x1c090; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_BlendListByBool_166 = 0x1c158; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_178 = 0x1c1f8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_5 = 0x1c2e0; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_ModifyBone_33 = 0x1c3b0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_32 = 0x1c4b8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_31 = 0x1c5c0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_30 = 0x1c6c8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_29 = 0x1c7d0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_28 = 0x1c8d8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_27 = 0x1c9e0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ApplyAdditive_36 = 0x1cae8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_224 = 0x1cbb0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_52 = 0x1cc30; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ApplyAdditive_35 = 0x1cdc0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_223 = 0x1ce88; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_51 = 0x1cf08; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_50 = 0x1d098; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_165 = 0x1d228; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_49 = 0x1d2c8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_48 = 0x1d458; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_47 = 0x1d5e8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_113 = 0x1d778; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_34 = 0x1d7a0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_112 = 0x1d868; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_222 = 0x1d890; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ModifyBone_26 = 0x1d910; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_46 = 0x1da18; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_45 = 0x1dba8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_164 = 0x1dd38; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_44 = 0x1ddd8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_43 = 0x1df68; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_163 = 0x1e0f8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_42 = 0x1e198; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_41 = 0x1e328; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_111 = 0x1e4b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_110 = 0x1e4e0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_40 = 0x1e508; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_162 = 0x1e698; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_39 = 0x1e738; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_109 = 0x1e8c8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_108 = 0x1e8f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_38 = 0x1e918; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_37 = 0x1eaa8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_36 = 0x1ec38; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ModifyBone_25 = 0x1edc8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_24 = 0x1eed0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_LocalToComponentSpace_28 = 0x1efd8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_28 = 0x1eff8; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_BlendListByBool_161 = 0x1f018; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_107 = 0x1f0b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_106 = 0x1f0e0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_160 = 0x1f108; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_35 = 0x1f1a8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_34 = 0x1f338; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ApplyAdditive_33 = 0x1f4c8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_LocalToComponentSpace_27 = 0x1f590; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ModifyBone_23 = 0x1f5b0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_22 = 0x1f6b8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_21 = 0x1f7c0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_20 = 0x1f8c8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_19 = 0x1f9d0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_18 = 0x1fad8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_17 = 0x1fbe0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ComponentToLocalSpace_27 = 0x1fce8; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_BlendListByBool_159 = 0x1fd08; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_105 = 0x1fda8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendSpacePlayer_177 = 0x1fdd0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_ModifyBone_16 = 0x1feb8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_UseCachedPose_104 = 0x1ffc0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_103 = 0x1ffe8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SaveCachedPose_3 = 0x20010; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_BlendListByEnum_10 = 0x20168; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_SequencePlayer_221 = 0x20218; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_102 = 0x20298; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_32 = 0x202c0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_BlendListByBool_158 = 0x20388; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_101 = 0x20428; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_31 = 0x20450; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ModifyBone_15 = 0x20518; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_SequencePlayer_220 = 0x20620; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_100 = 0x206a0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_30 = 0x206c8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_219 = 0x20790; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_157 = 0x20810; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_99 = 0x208b0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_29 = 0x208d8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_218 = 0x209a0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_98 = 0x20a20; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_28 = 0x20a48; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_BlendListByBool_156 = 0x20b10; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_97 = 0x20bb0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_27 = 0x20bd8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_217 = 0x20ca0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_216 = 0x20d20; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot_2 = 0x20da0; // FAnimNode_Slot
		constexpr auto AnimGraphNode_LayeredBoneBlend = 0x20de8; // FAnimNode_LayeredBoneBlend
		constexpr auto AnimGraphNode_UseCachedPose_96 = 0x20ea8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_155 = 0x20ed0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_95 = 0x20f70; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_94 = 0x20f98; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_215 = 0x20fc0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_26 = 0x21040; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_93 = 0x21108; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_154 = 0x21130; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_214 = 0x211d0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_153 = 0x21250; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_92 = 0x212f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_25 = 0x21318; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_BlendListByBool_152 = 0x213e0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyAdditive_24 = 0x21480; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_91 = 0x21548; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_213 = 0x21570; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_176 = 0x215f0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_23 = 0x216d8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_22 = 0x217a0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_BlendSpacePlayer_175 = 0x21868; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_LocalToComponentSpace_26 = 0x21950; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_26 = 0x21970; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Fabrik_23 = 0x21990; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_SequencePlayer_212 = 0x21b20; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyAdditive_21 = 0x21ba0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SequencePlayer_211 = 0x21c68; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_151 = 0x21ce8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_33 = 0x21d88; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_32 = 0x21f18; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_ModifyBone_14 = 0x220a8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_13 = 0x221b0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_12 = 0x222b8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_11 = 0x223c0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_10 = 0x224c8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_9 = 0x225d0; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_8 = 0x226d8; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_LocalToComponentSpace_25 = 0x227e0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_25 = 0x22800; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ModifyBone_7 = 0x22820; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_6 = 0x22928; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_5 = 0x22a30; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_4 = 0x22b38; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_3 = 0x22c40; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone_2 = 0x22d48; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ModifyBone = 0x22e50; // FAnimNode_ModifyBone
		constexpr auto AnimGraphNode_ComponentToLocalSpace_24 = 0x22f58; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_24 = 0x22f78; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_31 = 0x22f98; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_90 = 0x23128; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_20 = 0x23150; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_19 = 0x23218; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_89 = 0x232e0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_150 = 0x23308; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_210 = 0x233a8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_209 = 0x23428; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_88 = 0x234a8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_23 = 0x234d0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_22 = 0x234f0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_23 = 0x23680; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_22 = 0x236a0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_21 = 0x236c0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_22 = 0x23850; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_87 = 0x23870; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_149 = 0x23898; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_148 = 0x23938; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_86 = 0x239d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_30 = 0x23a00; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_85 = 0x23b90; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_29 = 0x23bb8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_28 = 0x23d48; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_147 = 0x23ed8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyAdditive_18 = 0x23f78; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_84 = 0x24040; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_208 = 0x24068; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_LocalToComponentSpace_21 = 0x240e8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_20 = 0x24110; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_21 = 0x242a0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_SequencePlayer_207 = 0x242c0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_83 = 0x24340; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_17 = 0x24368; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_16 = 0x24430; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_82 = 0x244f8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_146 = 0x24520; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_27 = 0x245c0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_SequencePlayer_206 = 0x24750; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_145 = 0x247d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_ApplyAdditive_15 = 0x24870; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_81 = 0x24938; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_205 = 0x24960; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_26 = 0x249e0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_80 = 0x24b70; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_25 = 0x24b98; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_24 = 0x24d28; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_79 = 0x24eb8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_20 = 0x24ee0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_19 = 0x24f00; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_20 = 0x25090; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_19 = 0x250b0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_18 = 0x250d0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_19 = 0x25260; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_78 = 0x25280; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_144 = 0x252a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_143 = 0x25348; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_77 = 0x253e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_18 = 0x25410; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_17 = 0x25430; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_18 = 0x255c0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_76 = 0x255e0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_14 = 0x25608; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_13 = 0x256d0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_75 = 0x25798; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_142 = 0x257c0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_23 = 0x25860; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_SequencePlayer_204 = 0x259f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_22 = 0x25a70; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_74 = 0x25c00; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_21 = 0x25c28; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_73 = 0x25db8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_20 = 0x25de0; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_17 = 0x25f70; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_16 = 0x25f90; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_17 = 0x26120; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_16 = 0x26140; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_15 = 0x26160; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_16 = 0x262f0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_72 = 0x26310; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_141 = 0x26338; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_140 = 0x263d8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_71 = 0x26478; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_15 = 0x264a0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_14 = 0x264c0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_15 = 0x26650; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_SequencePlayer_203 = 0x26670; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_70 = 0x266f0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_12 = 0x26718; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_11 = 0x267e0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_69 = 0x268a8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_139 = 0x268d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_19 = 0x26970; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_68 = 0x26b00; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_18 = 0x26b28; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_17 = 0x26cb8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_67 = 0x26e48; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_16 = 0x26e70; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_14 = 0x27000; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_13 = 0x27020; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_14 = 0x271b0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_BlendListByBool_138 = 0x271d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_66 = 0x27270; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_13 = 0x27298; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_13 = 0x272b8; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_SequencePlayer_202 = 0x272d8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_201 = 0x27358; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Fabrik_12 = 0x273e0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_UseCachedPose_65 = 0x27570; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_10 = 0x27598; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_64 = 0x27660; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_137 = 0x27688; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_136 = 0x27728; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_200 = 0x277c8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_63 = 0x27848; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_9 = 0x27870; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_62 = 0x27938; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_135 = 0x27960; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_15 = 0x27a00; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_61 = 0x27b90; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_14 = 0x27bb8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_Fabrik_11 = 0x27d50; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_LocalToComponentSpace_12 = 0x27ee0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_12 = 0x27f00; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_SequencePlayer_199 = 0x27f20; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_60 = 0x27fa0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_59 = 0x27fc8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_11 = 0x27ff0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_10 = 0x28010; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_11 = 0x281a0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_BlendListByBool_134 = 0x281c0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_58 = 0x28260; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_133 = 0x28288; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_LocalToComponentSpace_10 = 0x28328; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_9 = 0x28350; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_10 = 0x284e0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_57 = 0x28500; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_56 = 0x28528; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_8 = 0x28550; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_SaveCachedPose_2 = 0x28618; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_Slot = 0x28770; // FAnimNode_Slot
		constexpr auto AnimGraphNode_UseCachedPose_55 = 0x287b8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TransitionResult_38 = 0x287e0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_37 = 0x28808; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_36 = 0x28830; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_35 = 0x28858; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_34 = 0x28880; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_33 = 0x288a8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_32 = 0x288d0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_31 = 0x288f8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_30 = 0x28920; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_29 = 0x28948; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_28 = 0x28970; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_27 = 0x28998; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_26 = 0x289c0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_25 = 0x289e8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_24 = 0x28a10; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_23 = 0x28a38; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_22 = 0x28a60; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_21 = 0x28a88; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_20 = 0x28ab0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_19 = 0x28ad8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_18 = 0x28b00; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_17 = 0x28b28; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_16 = 0x28b50; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_15 = 0x28b78; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_14 = 0x28ba0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_13 = 0x28bc8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_12 = 0x28bf0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_11 = 0x28c18; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_10 = 0x28c40; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_9 = 0x28c68; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_8 = 0x28c90; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_7 = 0x28cb8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_6 = 0x28ce0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_5 = 0x28d08; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_4 = 0x28d30; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_3 = 0x28d58; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x28d80; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x28da8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_BlendSpacePlayer_174 = 0x28dd0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_StateResult_15 = 0x28eb8; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_BlendListByEnum_9 = 0x28ee8; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_SequencePlayer_198 = 0x28f98; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_197 = 0x29018; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_14 = 0x29098; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_196 = 0x290c8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_13 = 0x29148; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_195 = 0x29178; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_12 = 0x291f8; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_194 = 0x29228; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_11 = 0x292a8; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_193 = 0x292d8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_10 = 0x29358; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_192 = 0x29388; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_9 = 0x29408; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_4 = 0x29438; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_BlendSpacePlayer_173 = 0x29508; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_172 = 0x295f0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_SequencePlayer_191 = 0x296d8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_190 = 0x29758; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_3 = 0x297d8; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_BlendSpacePlayer_171 = 0x298a8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive_2 = 0x29990; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_BlendSpacePlayer_170 = 0x29a60; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_169 = 0x29b48; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_168 = 0x29c30; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_167 = 0x29d18; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_166 = 0x29e00; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_165 = 0x29ee8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_SequencePlayer_189 = 0x29fd0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_ApplyMeshSpaceAdditive = 0x2a050; // FAnimNode_ApplyMeshSpaceAdditive
		constexpr auto AnimGraphNode_SequencePlayer_188 = 0x2a120; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByEnum_8 = 0x2a1a0; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_StateResult_8 = 0x2a250; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_TwoWayBlend_63 = 0x2a280; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_164 = 0x2a348; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_163 = 0x2a430; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_132 = 0x2a518; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_162 = 0x2a5b8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_62 = 0x2a6a0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_161 = 0x2a768; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_160 = 0x2a850; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_131 = 0x2a938; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_159 = 0x2a9d8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_61 = 0x2aac0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_158 = 0x2ab88; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_157 = 0x2ac70; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_130 = 0x2ad58; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_156 = 0x2adf8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_60 = 0x2aee0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_155 = 0x2afa8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_154 = 0x2b090; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_129 = 0x2b178; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_153 = 0x2b218; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_59 = 0x2b300; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_152 = 0x2b3c8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_151 = 0x2b4b0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_128 = 0x2b598; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_150 = 0x2b638; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_58 = 0x2b720; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_149 = 0x2b7e8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_148 = 0x2b8d0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_127 = 0x2b9b8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_147 = 0x2ba58; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_57 = 0x2bb40; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_146 = 0x2bc08; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_145 = 0x2bcf0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_126 = 0x2bdd8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_144 = 0x2be78; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_56 = 0x2bf60; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_143 = 0x2c028; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_142 = 0x2c110; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_125 = 0x2c1f8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_141 = 0x2c298; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_55 = 0x2c380; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_140 = 0x2c448; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_139 = 0x2c530; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_124 = 0x2c618; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_138 = 0x2c6b8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_54 = 0x2c7a0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_137 = 0x2c868; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_136 = 0x2c950; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_123 = 0x2ca38; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_135 = 0x2cad8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_53 = 0x2cbc0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_134 = 0x2cc88; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_133 = 0x2cd70; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_122 = 0x2ce58; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_132 = 0x2cef8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_52 = 0x2cfe0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_131 = 0x2d0a8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_130 = 0x2d190; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_121 = 0x2d278; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_129 = 0x2d318; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_51 = 0x2d400; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_128 = 0x2d4c8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_127 = 0x2d5b0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_120 = 0x2d698; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_126 = 0x2d738; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_50 = 0x2d820; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_125 = 0x2d8e8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_124 = 0x2d9d0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_119 = 0x2dab8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_123 = 0x2db58; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_49 = 0x2dc40; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_122 = 0x2dd08; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_121 = 0x2ddf0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_118 = 0x2ded8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_120 = 0x2df78; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_48 = 0x2e060; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_119 = 0x2e128; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_118 = 0x2e210; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_117 = 0x2e2f8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_117 = 0x2e398; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_47 = 0x2e480; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_116 = 0x2e548; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_115 = 0x2e630; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_116 = 0x2e718; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_114 = 0x2e7b8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_46 = 0x2e8a0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_113 = 0x2e968; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_112 = 0x2ea50; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_115 = 0x2eb38; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_111 = 0x2ebd8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_45 = 0x2ecc0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_110 = 0x2ed88; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_109 = 0x2ee70; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_114 = 0x2ef58; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_108 = 0x2eff8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_44 = 0x2f0e0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_107 = 0x2f1a8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_106 = 0x2f290; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_113 = 0x2f378; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_105 = 0x2f418; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_43 = 0x2f500; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_104 = 0x2f5c8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_103 = 0x2f6b0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_112 = 0x2f798; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_102 = 0x2f838; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByEnum_7 = 0x2f920; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_TwoWayBlend_42 = 0x2f9d0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_101 = 0x2fa98; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_100 = 0x2fb80; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_99 = 0x2fc68; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_111 = 0x2fd50; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_98 = 0x2fdf0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_110 = 0x2fed8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_97 = 0x2ff78; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_96 = 0x30060; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_109 = 0x30148; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_95 = 0x301e8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_41 = 0x302d0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_94 = 0x30398; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_93 = 0x30480; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_92 = 0x30568; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_91 = 0x30650; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_108 = 0x30738; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_107 = 0x307d8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_90 = 0x30878; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_89 = 0x30960; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_88 = 0x30a48; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_106 = 0x30b30; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_87 = 0x30bd0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_86 = 0x30cb8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_85 = 0x30da0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_105 = 0x30e88; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_StateResult_7 = 0x30f28; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_187 = 0x30f58; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_104 = 0x30fd8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_186 = 0x31078; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_185 = 0x310f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_103 = 0x31178; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_184 = 0x31218; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_183 = 0x31298; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_102 = 0x31318; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_182 = 0x313b8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_181 = 0x31438; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_101 = 0x314b8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_180 = 0x31558; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_179 = 0x315d8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_100 = 0x31658; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_178 = 0x316f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_177 = 0x31778; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_99 = 0x317f8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_176 = 0x31898; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_175 = 0x31918; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_98 = 0x31998; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_174 = 0x31a38; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_173 = 0x31ab8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_97 = 0x31b38; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_172 = 0x31bd8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_171 = 0x31c58; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_96 = 0x31cd8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_170 = 0x31d78; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_169 = 0x31df8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_95 = 0x31e78; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_168 = 0x31f18; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_167 = 0x31f98; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_94 = 0x32018; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_166 = 0x320b8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_165 = 0x32138; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_93 = 0x321b8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_164 = 0x32258; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_163 = 0x322d8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_92 = 0x32358; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_162 = 0x323f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_161 = 0x32478; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_91 = 0x324f8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_160 = 0x32598; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_159 = 0x32618; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_90 = 0x32698; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_158 = 0x32738; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_157 = 0x327b8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_89 = 0x32838; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_156 = 0x328d8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_155 = 0x32958; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_88 = 0x329d8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_154 = 0x32a78; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_153 = 0x32af8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_87 = 0x32b78; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_152 = 0x32c18; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_151 = 0x32c98; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_86 = 0x32d18; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_150 = 0x32db8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_149 = 0x32e38; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_85 = 0x32eb8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_148 = 0x32f58; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_147 = 0x32fd8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_84 = 0x33058; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_146 = 0x330f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByEnum_6 = 0x33178; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_SequencePlayer_145 = 0x33228; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_83 = 0x332a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_144 = 0x33348; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_143 = 0x333c8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_82 = 0x33448; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_142 = 0x334e8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_141 = 0x33568; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_140 = 0x335e8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_139 = 0x33668; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_81 = 0x336e8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_138 = 0x33788; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_137 = 0x33808; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_80 = 0x33888; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_136 = 0x33928; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_135 = 0x339a8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_79 = 0x33a28; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_StateResult_6 = 0x33ac8; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_134 = 0x33af8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_133 = 0x33b78; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_132 = 0x33bf8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_131 = 0x33c78; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_130 = 0x33cf8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_129 = 0x33d78; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_128 = 0x33df8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_127 = 0x33e78; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_126 = 0x33ef8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_125 = 0x33f78; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_124 = 0x33ff8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_123 = 0x34078; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_122 = 0x340f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_121 = 0x34178; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_120 = 0x341f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_119 = 0x34278; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_118 = 0x342f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_117 = 0x34378; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_116 = 0x343f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_115 = 0x34478; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_114 = 0x344f8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByEnum_5 = 0x34578; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_SequencePlayer_113 = 0x34628; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_112 = 0x346a8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_111 = 0x34728; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_78 = 0x347a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_110 = 0x34848; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_77 = 0x348c8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_109 = 0x34968; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_108 = 0x349e8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_107 = 0x34a68; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_5 = 0x34ae8; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_BlendSpacePlayer_84 = 0x34b18; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_StateResult_4 = 0x34c00; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_106 = 0x34c30; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_105 = 0x34cb0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_104 = 0x34d30; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_103 = 0x34db0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_102 = 0x34e30; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_101 = 0x34eb0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_100 = 0x34f30; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_99 = 0x34fb0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_98 = 0x35030; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_97 = 0x350b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_96 = 0x35130; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_95 = 0x351b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_94 = 0x35230; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_93 = 0x352b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_92 = 0x35330; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_91 = 0x353b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_90 = 0x35430; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_89 = 0x354b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_88 = 0x35530; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_87 = 0x355b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_86 = 0x35630; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByEnum_4 = 0x356b0; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_SequencePlayer_85 = 0x35760; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_84 = 0x357e0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_83 = 0x35860; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_76 = 0x358e0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_82 = 0x35980; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_75 = 0x35a00; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_81 = 0x35aa0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_80 = 0x35b20; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_79 = 0x35ba0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_3 = 0x35c20; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_78 = 0x35c50; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_74 = 0x35cd0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_77 = 0x35d70; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_76 = 0x35df0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_73 = 0x35e70; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_75 = 0x35f10; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_74 = 0x35f90; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_72 = 0x36010; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_73 = 0x360b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_72 = 0x36130; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_71 = 0x361b0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_71 = 0x36250; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_70 = 0x362d0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_70 = 0x36350; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_69 = 0x363f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_68 = 0x36470; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_69 = 0x364f0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_67 = 0x36590; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_66 = 0x36610; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_68 = 0x36690; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_65 = 0x36730; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_64 = 0x367b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_67 = 0x36830; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_63 = 0x368d0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_62 = 0x36950; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_66 = 0x369d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_61 = 0x36a70; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_60 = 0x36af0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_65 = 0x36b70; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_59 = 0x36c10; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_58 = 0x36c90; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_64 = 0x36d10; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_57 = 0x36db0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_56 = 0x36e30; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_63 = 0x36eb0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_55 = 0x36f50; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_54 = 0x36fd0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_62 = 0x37050; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_53 = 0x370f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_52 = 0x37170; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_61 = 0x371f0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_51 = 0x37290; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_50 = 0x37310; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_60 = 0x37390; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_49 = 0x37430; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_48 = 0x374b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_59 = 0x37530; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_47 = 0x375d0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_46 = 0x37650; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_58 = 0x376d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_45 = 0x37770; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_44 = 0x377f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_57 = 0x37870; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_43 = 0x37910; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_42 = 0x37990; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_56 = 0x37a10; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_41 = 0x37ab0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_40 = 0x37b30; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_55 = 0x37bb0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_39 = 0x37c50; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_38 = 0x37cd0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_54 = 0x37d50; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_37 = 0x37df0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_36 = 0x37e70; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_53 = 0x37ef0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_35 = 0x37f90; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_34 = 0x38010; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_52 = 0x38090; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_33 = 0x38130; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_51 = 0x381b0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_32 = 0x38250; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_31 = 0x382d0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_30 = 0x38350; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_29 = 0x383d0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_50 = 0x38450; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_28 = 0x384f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_49 = 0x38570; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_27 = 0x38610; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_26 = 0x38690; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByEnum_3 = 0x38710; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_StateResult_2 = 0x387c0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_BlendSpacePlayer_83 = 0x387f0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_40 = 0x388d8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_82 = 0x389a0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_81 = 0x38a88; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_48 = 0x38b70; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_80 = 0x38c10; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_39 = 0x38cf8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_79 = 0x38dc0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_78 = 0x38ea8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_47 = 0x38f90; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_77 = 0x39030; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_38 = 0x39118; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_76 = 0x391e0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_75 = 0x392c8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_46 = 0x393b0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_74 = 0x39450; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_37 = 0x39538; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_73 = 0x39600; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_72 = 0x396e8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_45 = 0x397d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_71 = 0x39870; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_36 = 0x39958; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_70 = 0x39a20; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_69 = 0x39b08; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_44 = 0x39bf0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_68 = 0x39c90; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_35 = 0x39d78; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_67 = 0x39e40; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_66 = 0x39f28; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_43 = 0x3a010; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_65 = 0x3a0b0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_34 = 0x3a198; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_64 = 0x3a260; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_63 = 0x3a348; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_42 = 0x3a430; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_62 = 0x3a4d0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_33 = 0x3a5b8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_61 = 0x3a680; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_60 = 0x3a768; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_41 = 0x3a850; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_59 = 0x3a8f0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_32 = 0x3a9d8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_58 = 0x3aaa0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_57 = 0x3ab88; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_40 = 0x3ac70; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_56 = 0x3ad10; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_31 = 0x3adf8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_55 = 0x3aec0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_54 = 0x3afa8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_39 = 0x3b090; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_53 = 0x3b130; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_30 = 0x3b218; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_52 = 0x3b2e0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_51 = 0x3b3c8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_38 = 0x3b4b0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_50 = 0x3b550; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_29 = 0x3b638; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_49 = 0x3b700; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_48 = 0x3b7e8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_37 = 0x3b8d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_47 = 0x3b970; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_28 = 0x3ba58; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_46 = 0x3bb20; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_45 = 0x3bc08; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_36 = 0x3bcf0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_44 = 0x3bd90; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_27 = 0x3be78; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_43 = 0x3bf40; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_42 = 0x3c028; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_35 = 0x3c110; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_41 = 0x3c1b0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_26 = 0x3c298; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_40 = 0x3c360; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_39 = 0x3c448; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_34 = 0x3c530; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_38 = 0x3c5d0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_25 = 0x3c6b8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_37 = 0x3c780; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_36 = 0x3c868; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_33 = 0x3c950; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_35 = 0x3c9f0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_24 = 0x3cad8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_34 = 0x3cba0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_33 = 0x3cc88; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_32 = 0x3cd70; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_32 = 0x3ce10; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_23 = 0x3cef8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_31 = 0x3cfc0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_30 = 0x3d0a8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_31 = 0x3d190; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_29 = 0x3d230; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_22 = 0x3d318; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_28 = 0x3d3e0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_27 = 0x3d4c8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_30 = 0x3d5b0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_26 = 0x3d650; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_21 = 0x3d738; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_25 = 0x3d800; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_24 = 0x3d8e8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_29 = 0x3d9d0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_23 = 0x3da70; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_20 = 0x3db58; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_22 = 0x3dc20; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_21 = 0x3dd08; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_28 = 0x3ddf0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_20 = 0x3de90; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_19 = 0x3df78; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_19 = 0x3e040; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_18 = 0x3e128; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_27 = 0x3e210; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_26 = 0x3e2b0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_17 = 0x3e350; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_16 = 0x3e438; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_25 = 0x3e520; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_15 = 0x3e5c0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_14 = 0x3e6a8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByEnum_2 = 0x3e790; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_BlendSpacePlayer_13 = 0x3e840; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_12 = 0x3e928; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_24 = 0x3ea10; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_23 = 0x3eab0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_11 = 0x3eb50; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_10 = 0x3ec38; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_22 = 0x3ed20; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_9 = 0x3edc0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_8 = 0x3eea8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_21 = 0x3ef90; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendSpacePlayer_7 = 0x3f030; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_18 = 0x3f118; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_6 = 0x3f1e0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_5 = 0x3f2c8; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_4 = 0x3f3b0; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer_3 = 0x3f498; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_17 = 0x3f580; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_BlendSpacePlayer_2 = 0x3f648; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendSpacePlayer = 0x3f730; // FAnimNode_BlendSpacePlayer
		constexpr auto AnimGraphNode_BlendListByBool_20 = 0x3f818; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_StateResult = 0x3f8b8; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x3f8e8; // FAnimNode_StateMachine
		constexpr auto AnimGraphNode_UseCachedPose_54 = 0x3f998; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_Root = 0x3f9c0; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer_25 = 0x3f9f0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_13 = 0x3fa70; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_53 = 0x3fc00; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_12 = 0x3fc28; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_52 = 0x3fdb8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_51 = 0x3fde0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_50 = 0x3fe08; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_9 = 0x3fe30; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_9 = 0x3fe50; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Fabrik_8 = 0x3fe70; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_SequencePlayer_24 = 0x40000; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_19 = 0x40080; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_49 = 0x40120; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_18 = 0x40148; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_48 = 0x401e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_7 = 0x40210; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_47 = 0x402d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_46 = 0x40300; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_23 = 0x40328; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_45 = 0x403a8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_6 = 0x403d0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_5 = 0x40498; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_44 = 0x40560; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_17 = 0x40588; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_16 = 0x40628; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_43 = 0x406c8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ApplyAdditive_4 = 0x406f0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_ApplyAdditive_3 = 0x407b8; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_42 = 0x40880; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_15 = 0x408a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_SequencePlayer_22 = 0x40948; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_21 = 0x409c8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_20 = 0x40a48; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_19 = 0x40ac8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_UseCachedPose_41 = 0x40b48; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_40 = 0x40b70; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_14 = 0x40b98; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_13 = 0x40c38; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_39 = 0x40cd8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_8 = 0x40d00; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_7 = 0x40d20; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_8 = 0x40eb0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_38 = 0x40ed0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_7 = 0x40ef8; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_6 = 0x40f20; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_7 = 0x410b0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_6 = 0x410d0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_5 = 0x410f0; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_6 = 0x41280; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_UseCachedPose_37 = 0x412a0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_BlendListByBool_12 = 0x412c8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_11 = 0x41368; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_UseCachedPose_36 = 0x41408; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_5 = 0x41430; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_4 = 0x41450; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_5 = 0x415e0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_11 = 0x41600; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_35 = 0x41790; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_10 = 0x417b8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_9 = 0x41948; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_8 = 0x41ad8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_34 = 0x41c68; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_7 = 0x41c90; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_UseCachedPose_33 = 0x41e20; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace_4 = 0x41e48; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik_3 = 0x41e70; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_4 = 0x42000; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_LocalToComponentSpace_3 = 0x42020; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_ComponentToLocalSpace_3 = 0x42040; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_Fabrik_2 = 0x42060; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_LocalToComponentSpace_2 = 0x421f0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_Fabrik = 0x42210; // FAnimNode_Fabrik
		constexpr auto AnimGraphNode_ComponentToLocalSpace_2 = 0x423a0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ApplyAdditive_2 = 0x423c0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_32 = 0x42488; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_ComponentToLocalSpace = 0x424b0; // FAnimNode_ConvertComponentToLocalSpace
		constexpr auto AnimGraphNode_ApplyAdditive = 0x424d0; // FAnimNode_ApplyAdditive
		constexpr auto AnimGraphNode_UseCachedPose_31 = 0x42598; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_LocalToComponentSpace = 0x425c0; // FAnimNode_ConvertLocalToComponentSpace
		constexpr auto AnimGraphNode_SequencePlayer_18 = 0x425e0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_17 = 0x42660; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_10 = 0x426e0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_9 = 0x42780; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_8 = 0x42820; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_7 = 0x428c0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_TwoWayBlend_16 = 0x42960; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_30 = 0x42a28; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_16 = 0x42a50; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_15 = 0x42ad0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_15 = 0x42b50; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_14 = 0x42c18; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_29 = 0x42ce0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_13 = 0x42d08; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_14 = 0x42dd0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_13 = 0x42e50; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_12 = 0x42ed0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_28 = 0x42f98; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_11 = 0x42fc0; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_12 = 0x43088; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_11 = 0x43108; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_10 = 0x43188; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_27 = 0x43250; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_9 = 0x43278; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_10 = 0x43340; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_9 = 0x433c0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByBool_6 = 0x43440; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_5 = 0x434e0; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_4 = 0x43580; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_TwoWayBlend_8 = 0x43620; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_26 = 0x436e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_SequencePlayer_8 = 0x43710; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_7 = 0x43790; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_7 = 0x43810; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_TwoWayBlend_6 = 0x438d8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_25 = 0x439a0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_5 = 0x439c8; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_6 = 0x43a90; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_5 = 0x43b10; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_4 = 0x43b90; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_24 = 0x43c58; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend_3 = 0x43c80; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_4 = 0x43d48; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer_3 = 0x43dc8; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_TwoWayBlend_2 = 0x43e48; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_UseCachedPose_23 = 0x43f10; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_TwoWayBlend = 0x43f38; // FAnimNode_TwoWayBlend
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x44000; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_SequencePlayer = 0x44080; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_BlendListByEnum = 0x44100; // FAnimNode_BlendListByEnum
		constexpr auto AnimGraphNode_SaveCachedPose = 0x441b0; // FAnimNode_SaveCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_22 = 0x44308; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_21 = 0x44330; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_20 = 0x44358; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_19 = 0x44380; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_18 = 0x443a8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_17 = 0x443d0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_16 = 0x443f8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_15 = 0x44420; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_14 = 0x44448; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_13 = 0x44470; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_12 = 0x44498; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_11 = 0x444c0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_10 = 0x444e8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_9 = 0x44510; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_8 = 0x44538; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_7 = 0x44560; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_6 = 0x44588; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_5 = 0x445b0; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_4 = 0x445d8; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_3 = 0x44600; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose_2 = 0x44628; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_UseCachedPose = 0x44650; // FAnimNode_UseCachedPose
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_6 = 0x44678; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_BlendListByBool_3 = 0x44808; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool_2 = 0x448a8; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_BlendListByBool = 0x44948; // FAnimNode_BlendListByBool
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_5 = 0x449e8; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_4 = 0x44b78; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_3 = 0x44d08; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace_2 = 0x44e98; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto AnimGraphNode_RotationOffsetBlendSpace = 0x45028; // FAnimNode_RotationOffsetBlendSpace
		constexpr auto Aiming_blend_true = 0x451b8; // float
		constexpr auto Aiming_blend_false = 0x451bc; // float
	}

	namespace n_UBTDecorator_TagCooldown {
		constexpr auto CooldownTag = 0x68; // FGameplayTag
		constexpr auto CooldownDuration = 0x70; // float
		constexpr auto bAddToExistingDuration = 0x74; // bool
		constexpr auto bActivatesCooldown = 0x75; // bool
	}

	namespace n_UARFaceComponent {
		constexpr auto TransformSetting = 0x278; // EARFaceTransformMixing
		constexpr auto bUpdateVertexNormal = 0x279; // bool
		constexpr auto bFaceOutOfScreen = 0x27a; // bool
		constexpr auto ReplicatedPayload = 0x280; // FARFaceUpdatePayload
	}

	namespace n_AARSharedWorldGameMode {
		constexpr auto BufferSizePerChunk = 0x308; // int32_t
	}

	namespace n_ASFPSAICharacter {
		constexpr auto BehaviorTree = 0xbe8; // UBehaviorTree*
		constexpr auto GenerateSetChance = 0xcc8; // int32_t
		constexpr auto WeaponSet0 = 0xcd0; // FSFPSItemSetStruct
		constexpr auto WeaponSet1 = 0xce8; // FSFPSItemSetStruct
		constexpr auto WeaponSet2 = 0xd00; // FSFPSItemSetStruct
		constexpr auto JacketSet = 0xd18; // FSFPSItemSetStruct
		constexpr auto TrousSet = 0xd30; // FSFPSItemSetStruct
		constexpr auto VestSet = 0xd48; // FSFPSItemSetStruct
		constexpr auto BackPackSet = 0xd60; // FSFPSItemSetStruct
		constexpr auto HelmetSet = 0xd78; // FSFPSItemSetStruct
		constexpr auto MaskSet = 0xd90; // FSFPSItemSetStruct
		constexpr auto GlassesSet = 0xda8; // FSFPSItemSetStruct
		constexpr auto GlovesSet = 0xdc0; // FSFPSItemSetStruct
		constexpr auto LootSets = 0xdd8; // TArray<FSFPSItemSetStruct>
		constexpr auto bGenerateAmmoForWeapons = 0xde8; // bool
		constexpr auto GenerateMFForWeaponsChance = 0xdec; // int32_t
		constexpr auto GenerateMFForWeaponsRarity = 0xdf0; // ESFPSLootRarity
		constexpr auto Weapon0 = 0xdf8; // ASFPSHandheldItem*
		constexpr auto Weapon1 = 0xe00; // ASFPSHandheldItem*
		constexpr auto Weapon2 = 0xe08; // ASFPSHandheldItem*
		constexpr auto Jacket = 0xe10; // ASFPSWearableItem*
		constexpr auto JacketSkinID = 0xe18; // char
		constexpr auto Trous = 0xe20; // ASFPSWearableItem*
		constexpr auto TrousSkinID = 0xe28; // char
		constexpr auto Vest = 0xe30; // ASFPSWearableItem*
		constexpr auto VestSkinID = 0xe38; // char
		constexpr auto BackPack = 0xe40; // ASFPSWearableItem*
		constexpr auto Helmet = 0xe48; // ASFPSWearableItem*
		constexpr auto HelmetSkinID = 0xe50; // char
		constexpr auto Mask = 0xe58; // ASFPSWearableItem*
		constexpr auto MaskSkinID = 0xe60; // char
		constexpr auto Glasses = 0xe68; // ASFPSWearableItem*
		constexpr auto Gloves = 0xe70; // ASFPSWearableItem*
		constexpr auto GlovesSkinID = 0xe78; // char
		constexpr auto SenseConfig_Sight = 0xe80; // USFPSAISenseConfig_Sight*
		constexpr auto SenseConfig_Hearing = 0xe88; // USFPSAISenseConfig_Hearing*
		constexpr auto OptimalAttackDist = 0xe90; // float
		constexpr auto FiringTimeMin = 0xe94; // float
		constexpr auto FiringTimeMax = 0xe98; // float
		constexpr auto FiringTimePauseMin = 0xe9c; // float
		constexpr auto FiringTimePauseMax = 0xea0; // float
		constexpr auto FiringDelayAtZero = 0xea4; // float
		constexpr auto FiringDelayAtOptimal = 0xea8; // float
		constexpr auto DamageMultiplier = 0xeac; // float
	}

	namespace n_UAISense_Sight {
		constexpr auto MaxTracesPerTick = 0x148; // int32_t
		constexpr auto MinQueriesPerTimeSliceCheck = 0x14c; // int32_t
		constexpr auto MaxTimeSlicePerTick = 0x150; // double
		constexpr auto HighImportanceQueryDistanceThreshold = 0x158; // float
		constexpr auto MaxQueryImportance = 0x160; // float
		constexpr auto SightLimitQueryImportance = 0x164; // float
	}

	namespace n_ASpectatorBeaconHost {
		constexpr auto State = 0x248; // USpectatorBeaconState*
		constexpr auto bLogoutOnSessionTimeout = 0x2b0; // bool
		constexpr auto SessionTimeoutSecs = 0x2b4; // float
		constexpr auto TravelSessionTimeoutSecs = 0x2b8; // float
	}

	namespace n_UGameplayTagsSettings {
		constexpr auto ImportTagsFromConfig = 0x48; // bool
		constexpr auto WarnOnInvalidTags = 0x49; // bool
		constexpr auto ClearInvalidTags = 0x4a; // bool
		constexpr auto FastReplication = 0x4b; // bool
		constexpr auto InvalidTagCharacters = 0x50; // FString
		constexpr auto CategoryRemapping = 0x60; // TArray<FGameplayTagCategoryRemap>
		constexpr auto GameplayTagTableList = 0x70; // TArray<FSoftObjectPath>
		constexpr auto GameplayTagRedirects = 0x80; // TArray<FGameplayTagRedirect>
		constexpr auto CommonlyReplicatedTags = 0x90; // TArray<FName>
		constexpr auto NumBitsForContainerSize = 0xa0; // int32_t
		constexpr auto NetIndexFirstBitSegment = 0xa4; // int32_t
		constexpr auto RestrictedConfigFiles = 0xa8; // TArray<FRestrictedConfigInfo>
	}

	namespace n_UMovieScene3DTransformSection {
		constexpr auto TransformMask = 0xf0; // FMovieSceneTransformMask
		constexpr auto Translation = 0xf8; // FMovieSceneFloatChannel [0x3]
		constexpr auto Rotation = 0x2d8; // FMovieSceneFloatChannel [0x3]
		constexpr auto Scale = 0x4b8; // FMovieSceneFloatChannel [0x3]
		constexpr auto ManualWeight = 0x698; // FMovieSceneFloatChannel
		constexpr auto bUseQuaternionInterpolation = 0x738; // bool
	}

	namespace n_USFPSUserWidget_TraderItem {
		constexpr auto ItemClass = 0x260; // ASFPSBaseItem*
		constexpr auto ActorGroupItemIndex = 0x26c; // int32_t
		constexpr auto ActorLibraryItemIndex = 0x270; // int32_t
		constexpr auto OnBuyEvent = 0x2d0; // FDelegate
		constexpr auto OnCreateEvent = 0x2e0; // FDelegate
		constexpr auto OnAddToStarterKitEvent = 0x2f0; // FDelegate
		constexpr auto OnDeleteFromStarterKitEvent = 0x300; // FDelegate
	}

	namespace n_APlayerController {
		constexpr auto Player = 0x298; // UPlayer*
		constexpr auto AcknowledgedPawn = 0x2a0; // APawn*
		constexpr auto ControllingDirTrackInst = 0x2a8; // UInterpTrackInstDirector*
		constexpr auto MyHUD = 0x2b0; // AHUD*
		constexpr auto PlayerCameraManager = 0x2b8; // APlayerCameraManager*
		constexpr auto PlayerCameraManagerClass = 0x2c0; // APlayerCameraManager*
		constexpr auto bAutoManageActiveCameraTarget = 0x2c8; // bool
		constexpr auto TargetViewRotation = 0x2cc; // FRotator
		constexpr auto SmoothTargetViewRotationSpeed = 0x2e4; // float
		constexpr auto HiddenActors = 0x2f0; // TArray<AActor*>
		constexpr auto HiddenPrimitiveComponents = 0x300; // TArray<TWeakObjectPtr<UPrimitiveComponent>>
		constexpr auto LastSpectatorStateSynchTime = 0x314; // float
		constexpr auto LastSpectatorSyncLocation = 0x318; // FVector
		constexpr auto LastSpectatorSyncRotation = 0x324; // FRotator
		constexpr auto ClientCap = 0x330; // int32_t
		constexpr auto CheatManager = 0x338; // UCheatManager*
		constexpr auto CheatClass = 0x340; // UCheatManager*
		constexpr auto PlayerInput = 0x348; // UPlayerInput*
		constexpr auto ActiveForceFeedbackEffects = 0x350; // TArray<FActiveForceFeedbackEffect>
		constexpr auto bPlayerIsWaiting = 0x3d0; // char : 1
		constexpr auto NetPlayerIndex = 0x3d4; // char
		constexpr auto PendingSwapConnection = 0x410; // UNetConnection*
		constexpr auto NetConnection = 0x418; // UNetConnection*
		constexpr auto InputYawScale = 0x42c; // float
		constexpr auto InputPitchScale = 0x430; // float
		constexpr auto InputRollScale = 0x434; // float
		constexpr auto bShowMouseCursor = 0x438; // char : 1
		constexpr auto bEnableClickEvents = 0x438; // char : 1
		constexpr auto bEnableTouchEvents = 0x438; // char : 1
		constexpr auto bEnableMouseOverEvents = 0x438; // char : 1
		constexpr auto bEnableTouchOverEvents = 0x438; // char : 1
		constexpr auto bForceFeedbackEnabled = 0x438; // char : 1
		constexpr auto ForceFeedbackScale = 0x43c; // float
		constexpr auto ClickEventKeys = 0x440; // TArray<FKey>
		constexpr auto DefaultMouseCursor = 0x450; // EMouseCursor
		constexpr auto CurrentMouseCursor = 0x451; // EMouseCursor
		constexpr auto DefaultClickTraceChannel = 0x452; // ECollisionChannel
		constexpr auto CurrentClickTraceChannel = 0x453; // ECollisionChannel
		constexpr auto HitResultTraceDistance = 0x454; // float
		constexpr auto SeamlessTravelCount = 0x458; // uint16_t
		constexpr auto LastCompletedSeamlessTravelCount = 0x45a; // uint16_t
		constexpr auto InactiveStateInputComponent = 0x4d0; // UInputComponent*
		constexpr auto bShouldPerformFullTickWhenPaused = 0x4d8; // char : 1
		constexpr auto CurrentTouchInterface = 0x4f0; // UTouchInterface*
		constexpr auto SpectatorPawn = 0x548; // ASpectatorPawn*
		constexpr auto bIsLocalPlayerController = 0x554; // bool
		constexpr auto SpawnLocation = 0x558; // FVector
	}

	namespace n_UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_UABP_weapon_firearms_snip_svd_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x3b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x430; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x460; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x4e0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x510; // FAnimNode_StateMachine
	}

	namespace n_UParticleModuleCollision {
		constexpr auto DampingFactor = 0x30; // FRawDistributionVector
		constexpr auto DampingFactorRotation = 0x78; // FRawDistributionVector
		constexpr auto MaxCollisions = 0xc0; // FRawDistributionFloat
		constexpr auto CollisionCompletionOption = 0xf0; // EParticleCollisionComplete
		constexpr auto CollisionTypes = 0xf8; // TArray<EObjectTypeQuery>
		constexpr auto bApplyPhysics = 0x110; // char : 1
		constexpr auto bIgnoreTriggerVolumes = 0x110; // char : 1
		constexpr auto ParticleMass = 0x118; // FRawDistributionFloat
		constexpr auto DirScalar = 0x148; // float
		constexpr auto bPawnsDoNotDecrementCount = 0x14c; // char : 1
		constexpr auto bOnlyVerticalNormalsDecrementCount = 0x14c; // char : 1
		constexpr auto VerticalFudgeFactor = 0x150; // float
		constexpr auto DelayAmount = 0x158; // FRawDistributionFloat
		constexpr auto bDropDetail = 0x188; // char : 1
		constexpr auto bCollideOnlyIfVisible = 0x188; // char : 1
		constexpr auto bIgnoreSourceActor = 0x188; // char : 1
		constexpr auto MaxCollisionDistance = 0x18c; // float
	}

	namespace n_UMovieSceneCompiledDataManager {
		constexpr auto Hierarchies = 0xd8; // TMap<int32_t, FMovieSceneSequenceHierarchy>
		constexpr auto TrackTemplates = 0x128; // TMap<int32_t, FMovieSceneEvaluationTemplate>
		constexpr auto TrackTemplateFields = 0x178; // TMap<int32_t, FMovieSceneEvaluationField>
		constexpr auto EntityComponentFields = 0x1c8; // TMap<int32_t, FMovieSceneEntityComponentField>
	}

	namespace n_UIpConnection {
		constexpr auto SocketErrorDisconnectDelay = 0x1bf8; // float
	}

	namespace n_UFormSettings_C {
		constexpr auto cbVideo_Mode = 0x260; // UComboBoxString*
		constexpr auto cbVideo_Resolution = 0x268; // UComboBoxString*
	}

	namespace n_UCurveFloat {
		constexpr auto FloatCurve = 0x30; // FRichCurve
		constexpr auto bIsEventCurve = 0xb0; // bool
	}

	namespace n_UPlatformEventsComponent {
		constexpr auto PlatformChangedToLaptopModeDelegate = 0xb0; // FMulticastInlineDelegate
		constexpr auto PlatformChangedToTabletModeDelegate = 0xc0; // FMulticastInlineDelegate
	}

	namespace n_UBTTask_SetTagCooldown {
		constexpr auto CooldownTag = 0x70; // FGameplayTag
		constexpr auto bAddToExistingDuration = 0x78; // bool
		constexpr auto CooldownDuration = 0x7c; // float
	}

	namespace n_UParticleEmitter {
		constexpr auto EmitterName = 0x28; // FName
		constexpr auto SubUVDataOffset = 0x30; // int32_t
		constexpr auto EmitterRenderMode = 0x34; // EEmitterRenderMode
		constexpr auto SignificanceLevel = 0x35; // EParticleSignificanceLevel
		constexpr auto bUseLegacySpawningBehavior = 0x37; // char : 1
		constexpr auto ConvertedModules = 0x37; // char : 1
		constexpr auto bIsSoloing = 0x37; // char : 1
		constexpr auto bCookedOut = 0x37; // char : 1
		constexpr auto bDisabledLODsKeepEmitterAlive = 0x37; // char : 1
		constexpr auto bDisableWhenInsignficant = 0x38; // char : 1
		constexpr auto LODLevels = 0x40; // TArray<UParticleLODLevel*>
		constexpr auto PeakActiveParticles = 0x50; // int32_t
		constexpr auto InitialAllocationCount = 0x54; // int32_t
		constexpr auto QualityLevelSpawnRateScale = 0x58; // float
		constexpr auto DetailModeBitmask = 0x5c; // uint32_t
	}

	namespace n_UEditableText {
		constexpr auto Text = 0x108; // FText
		constexpr auto TextDelegate = 0x120; // FDelegate
		constexpr auto HintText = 0x130; // FText
		constexpr auto HintTextDelegate = 0x148; // FDelegate
		constexpr auto WidgetStyle = 0x158; // FEditableTextStyle
		constexpr auto Style = 0x378; // USlateWidgetStyleAsset*
		constexpr auto BackgroundImageSelected = 0x380; // USlateBrushAsset*
		constexpr auto BackgroundImageComposing = 0x388; // USlateBrushAsset*
		constexpr auto CaretImage = 0x390; // USlateBrushAsset*
		constexpr auto Font = 0x398; // FSlateFontInfo
		constexpr auto ColorAndOpacity = 0x3f0; // FSlateColor
		constexpr auto IsReadOnly = 0x418; // bool
		constexpr auto IsPassword = 0x419; // bool
		constexpr auto MinimumDesiredWidth = 0x41c; // float
		constexpr auto IsCaretMovedWhenGainFocus = 0x420; // bool
		constexpr auto SelectAllTextWhenFocused = 0x421; // bool
		constexpr auto RevertTextOnEscape = 0x422; // bool
		constexpr auto ClearKeyboardFocusOnCommit = 0x423; // bool
		constexpr auto SelectAllTextOnCommit = 0x424; // bool
		constexpr auto AllowContextMenu = 0x425; // bool
		constexpr auto KeyboardType = 0x426; // EVirtualKeyboardType
		constexpr auto VirtualKeyboardOptions = 0x427; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardTrigger = 0x428; // EVirtualKeyboardTrigger
		constexpr auto VirtualKeyboardDismissAction = 0x429; // EVirtualKeyboardDismissAction
		constexpr auto Justification = 0x42a; // ETextJustify
		constexpr auto ShapedTextOptions = 0x42b; // FShapedTextOptions
		constexpr auto OnTextChanged = 0x430; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0x440; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionSquareRoot {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UAchievementWriteCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UMovieScenePropertySystem {
		constexpr auto InstantiatorSystem = 0x48; // UMovieScenePropertyInstantiatorSystem*
	}

	namespace n_UNavigationSystemConfig {
		constexpr auto NavigationSystemClass = 0x28; // FSoftClassPath
		constexpr auto SupportedAgentsMask = 0x40; // FNavAgentSelector
		constexpr auto DefaultAgentName = 0x44; // FName
		constexpr auto bIsOverriden = 0x4c; // char : 1
	}

	namespace n_UAISenseConfig_Hearing {
		constexpr auto Implementation = 0x48; // UAISense_Hearing*
		constexpr auto HearingRange = 0x50; // float
		constexpr auto LoSHearingRange = 0x54; // float
		constexpr auto bUseLoSHearing = 0x58; // char : 1
		constexpr auto DetectionByAffiliation = 0x5c; // FAISenseAffiliationFilter
	}

	namespace n_UMaterialExpressionLandscapeGrassOutput {
		constexpr auto GrassTypes = 0x40; // TArray<FGrassInput>
	}

	namespace n_UGizmoTransformChangeStateTarget {
		constexpr auto TransactionManager = 0x50; // TScriptInterface<IToolContextTransactionProvider>
	}

	namespace n_UMaterialExpressionSkyAtmosphereAerialPerspective {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
	}

	namespace n_AShell_SR1_C {
		constexpr auto Mesh = 0x250; // UStaticMeshComponent*
	}

	namespace n_AShell_Gun0_C {
		constexpr auto Mesh = 0x250; // UStaticMeshComponent*
	}

	namespace n_UMaterialExpressionViewProperty {
		constexpr auto Property = 0x40; // EMaterialExposedViewProperty
	}

	namespace n_UABP_weapon_firearms_rifle_aksu_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x318; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x398; // FAnimNode_Slot
	}

	namespace n_UBlackboardKeyType_NativeEnum {
		constexpr auto EnumName = 0x30; // FString
		constexpr auto EnumType = 0x40; // UEnum*
	}

	namespace n_UParticleModuleVelocityCone {
		constexpr auto Angle = 0x38; // FRawDistributionFloat
		constexpr auto Velocity = 0x68; // FRawDistributionFloat
		constexpr auto Direction = 0x98; // FVector
	}

	namespace n_URotatingMovementComponent {
		constexpr auto RotationRate = 0xf0; // FRotator
		constexpr auto PivotTranslation = 0xfc; // FVector
		constexpr auto bRotationInLocalSpace = 0x108; // char : 1
	}

	namespace n_USFPSAnimInstance {
		constexpr auto Character = 0x2b8; // ASFPSBaseCharacter*
		constexpr auto bAnimIsDying = 0x2c0; // bool
		constexpr auto bAnimIsDyingInWater = 0x2c1; // bool
		constexpr auto bAnimInverseKinematicsDisabled = 0x2c2; // bool
		constexpr auto AnimLegsYawDelta = 0x2c4; // float
		constexpr auto AnimLegsYawDeltaSign = 0x2c8; // float
		constexpr auto AnimLegsRotating = 0x2cc; // bool
		constexpr auto AnimPitch = 0x2d0; // float
		constexpr auto AnimRoll = 0x2d4; // float
		constexpr auto AnimSpeed = 0x2d8; // float
		constexpr auto AnimSpeedZ = 0x2dc; // float
		constexpr auto AnimJumpDuck = 0x2e0; // float
		constexpr auto AnimSpeedScale = 0x2e4; // float
		constexpr auto AnimDirectionForward = 0x2e8; // float
		constexpr auto AnimDirectionRight = 0x2ec; // float
		constexpr auto AnimAccelerationForward = 0x2f0; // float
		constexpr auto AnimAccelerationRight = 0x2f4; // float
		constexpr auto AnimFatigue = 0x2f8; // float
		constexpr auto AnimBreath = 0x2fc; // float
		constexpr auto AnimWeaponInertiaYaw = 0x300; // float
		constexpr auto AnimWeaponInertiaPitch = 0x304; // float
		constexpr auto AnimWeaponBarrier = 0x308; // float
		constexpr auto AnimWeaponRollbackForward = 0x30c; // float
		constexpr auto AnimWeaponRollbackRight = 0x310; // float
		constexpr auto AnimWeaponAnimType = 0x314; // ESFPSItemAnimTypes
		constexpr auto AnimIsJumping = 0x315; // bool
		constexpr auto AnimJumpEvent = 0x316; // bool
		constexpr auto AnimPose = 0x317; // ESFPSCharacterPose
		constexpr auto AnimPoseChanging = 0x318; // bool
		constexpr auto AnimIsAiming = 0x319; // bool
		constexpr auto AnimIsTeleporting = 0x31a; // bool
		constexpr auto AnimIsOnStair = 0x31b; // bool
		constexpr auto AnimSwimming = 0x31c; // bool
		constexpr auto AnimMovingType = 0x31d; // ESFPSCharacterMovingType
		constexpr auto AnimDamageImpactEffectHead = 0x320; // float
		constexpr auto AnimDamageImpactEffectTop = 0x324; // float
		constexpr auto AnimDamageImpactEffectBottom = 0x328; // float
		constexpr auto AnimDamageImpactEffectLeft = 0x32c; // float
		constexpr auto AnimDamageImpactEffectRight = 0x330; // float
		constexpr auto AnimStairPosition = 0x334; // float
		constexpr auto AnimWeaponChange_NewItem = 0x338; // ASFPSHandheldItem*
		constexpr auto AnimWeaponChange_OldItem = 0x340; // ASFPSHandheldItem*
		constexpr auto AnimWeaponChange_NewSlot = 0x348; // int32_t
		constexpr auto AnimWeaponChange_OldSlot = 0x34c; // int32_t
		constexpr auto AnimWeaponChange_SkipStartAnim = 0x350; // bool
		constexpr auto AnimWeaponChange_OldSocket = 0x354; // FName
		constexpr auto AnimWeaponChange_NewSocket = 0x35c; // FName
		constexpr auto AnimWeaponChange_bHideOldItem = 0x364; // bool
		constexpr auto AnimReload_Weapon = 0x368; // ASFPSSmallArms*
		constexpr auto AnimReload_AmmoCount = 0x370; // int32_t
		constexpr auto AnimReload_LoopCount = 0x374; // int32_t
		constexpr auto AnimReload_LoopCounter = 0x378; // int32_t
		constexpr auto AnimReload_BreakActive = 0x37c; // bool
		constexpr auto AnimReload_AmmoClass = 0x380; // ASFPSAmmo*
		constexpr auto AnimReload_Montage = 0x388; // UAnimMontage*
		constexpr auto AnimHandheldItemUse_Item = 0x390; // TWeakObjectPtr<ASFPSHandheldItem>
		constexpr auto AnimHandheldItemUse_Montage = 0x398; // UAnimMontage*
		constexpr auto AnimHandheldItemUse_Break = 0x3a0; // bool
		constexpr auto AnimHandheldItemUse_Time = 0x3a4; // float
		constexpr auto AnimHandheldItemUsed = 0x3a8; // bool
		constexpr auto AnimHandheldItemEnabled = 0x3a9; // bool
		constexpr auto WheelsSteerAngle = 0x3ac; // float
	}

	namespace n_UABP_weapon_firearms_snip_mosin_C {
		constexpr auto UberGraphFrame = 0x300; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x308; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x338; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x3b8; // FAnimNode_Slot
	}

	namespace n_UfrmFilterCombobox_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnFitlter = 0x268; // UButton*
		constexpr auto lbText = 0x270; // UTextBlock*
		constexpr auto FComboboxString = 0x278; // FString
		constexpr auto FParentCombobox = 0x288; // UComboBoxString*
	}

	namespace n_ASFPSCommonGameState {
		constexpr auto GameplayEventInfos = 0x290; // FSFPSGameplayEventInfoArray
		constexpr auto Debug_ServerDeltaT = 0x3a8; // float
		constexpr auto TimeDilationCurve = 0x3b0; // UCurveFloat*
		constexpr auto TimeOfDay = 0x3b8; // float
		constexpr auto TimeOfDayUndilated = 0x3bc; // float
		constexpr auto TimeOfDayReplicated = 0x3c0; // float
		constexpr auto DayLengthInSeconds = 0x3cc; // float
		constexpr auto GameplayDayStart = 0x3d0; // float
		constexpr auto GameplayDayEnd = 0x3d4; // float
	}

	namespace n_UParticleModuleTypeDataRibbon {
		constexpr auto MaxTessellationBetweenParticles = 0x30; // int32_t
		constexpr auto SheetsPerTrail = 0x34; // int32_t
		constexpr auto MaxTrailCount = 0x38; // int32_t
		constexpr auto MaxParticleInTrailCount = 0x3c; // int32_t
		constexpr auto bDeadTrailsOnDeactivate = 0x40; // char : 1
		constexpr auto bDeadTrailsOnSourceLoss = 0x40; // char : 1
		constexpr auto bClipSourceSegement = 0x40; // char : 1
		constexpr auto bEnablePreviousTangentRecalculation = 0x40; // char : 1
		constexpr auto bTangentRecalculationEveryFrame = 0x40; // char : 1
		constexpr auto bSpawnInitialParticle = 0x40; // char : 1
		constexpr auto RenderAxis = 0x44; // ETrailsRenderAxisOption
		constexpr auto TangentSpawningScalar = 0x48; // float
		constexpr auto bRenderGeometry = 0x4c; // char : 1
		constexpr auto bRenderSpawnPoints = 0x4c; // char : 1
		constexpr auto bRenderTangents = 0x4c; // char : 1
		constexpr auto bRenderTessellation = 0x4c; // char : 1
		constexpr auto TilingDistance = 0x50; // float
		constexpr auto DistanceTessellationStepSize = 0x54; // float
		constexpr auto bEnableTangentDiffInterpScale = 0x58; // char : 1
		constexpr auto TangentTessellationScalar = 0x5c; // float
	}

	namespace n_UPlatformGameInstance {
		constexpr auto ApplicationWillDeactivateDelegate = 0x1a8; // FMulticastInlineDelegate
		constexpr auto ApplicationHasReactivatedDelegate = 0x1b8; // FMulticastInlineDelegate
		constexpr auto ApplicationWillEnterBackgroundDelegate = 0x1c8; // FMulticastInlineDelegate
		constexpr auto ApplicationHasEnteredForegroundDelegate = 0x1d8; // FMulticastInlineDelegate
		constexpr auto ApplicationWillTerminateDelegate = 0x1e8; // FMulticastInlineDelegate
		constexpr auto ApplicationShouldUnloadResourcesDelegate = 0x1f8; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedStartupArgumentsDelegate = 0x208; // FMulticastInlineDelegate
		constexpr auto ApplicationRegisteredForRemoteNotificationsDelegate = 0x218; // FMulticastInlineDelegate
		constexpr auto ApplicationRegisteredForUserNotificationsDelegate = 0x228; // FMulticastInlineDelegate
		constexpr auto ApplicationFailedToRegisterForRemoteNotificationsDelegate = 0x238; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedRemoteNotificationDelegate = 0x248; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedLocalNotificationDelegate = 0x258; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedScreenOrientationChangedNotificationDelegate = 0x268; // FMulticastInlineDelegate
	}

	namespace n_UBrushStampIndicator {
		constexpr auto BrushRadius = 0x38; // float
		constexpr auto BrushFalloff = 0x3c; // float
		constexpr auto BrushPosition = 0x40; // FVector
		constexpr auto BrushNormal = 0x4c; // FVector
		constexpr auto bDrawIndicatorLines = 0x58; // bool
		constexpr auto bDrawRadiusCircle = 0x59; // bool
		constexpr auto SampleStepCount = 0x5c; // int32_t
		constexpr auto LineColor = 0x60; // FLinearColor
		constexpr auto LineThickness = 0x70; // float
		constexpr auto bDepthTested = 0x74; // bool
		constexpr auto bDrawSecondaryLines = 0x75; // bool
		constexpr auto SecondaryLineThickness = 0x78; // float
		constexpr auto SecondaryLineColor = 0x7c; // FLinearColor
		constexpr auto AttachedComponent = 0x90; // UPrimitiveComponent*
	}

	namespace n_UMaterialExpressionTime {
		constexpr auto bIgnorePause = 0x40; // char : 1
		constexpr auto bOverride_Period = 0x40; // char : 1
		constexpr auto Period = 0x44; // float
	}

	namespace n_Aweapmf_DTK_5-7x28_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UAnimationSharingStateProcessor {
		constexpr auto AnimationStateEnum = 0x28; // TSoftObjectPtr<UEnum>
	}

	namespace n_AShootingRangeTarget01_C {
		constexpr auto MeshClear = 0x2f0; // UStaticMeshComponent*
		constexpr auto MeshDamageServer = 0x2f8; // UStaticMeshComponent*
		constexpr auto MeshDamageClient = 0x300; // UStaticMeshComponent*
		constexpr auto MeshTarget = 0x308; // UStaticMeshComponent*
		constexpr auto InfoText = 0x310; // UTextRenderComponent*
		constexpr auto Mesh = 0x318; // UStaticMeshComponent*
	}

	namespace n_UGameplayTagsDeveloperSettings {
		constexpr auto DeveloperConfigName = 0x38; // FString
		constexpr auto FavoriteTagSource = 0x48; // FName
	}

	namespace n_Adevice_flashlight_02_C {
		constexpr auto Glow = 0x4a0; // UStaticMeshComponent*
		constexpr auto Light = 0x4a8; // USpotLightComponent*
	}

	namespace n_UParticleModuleLight {
		constexpr auto bUseInverseSquaredFalloff = 0x30; // bool
		constexpr auto bAffectsTranslucency = 0x31; // bool
		constexpr auto bPreviewLightRadius = 0x32; // bool
		constexpr auto SpawnFraction = 0x34; // float
		constexpr auto ColorScaleOverLife = 0x38; // FRawDistributionVector
		constexpr auto BrightnessOverLife = 0x80; // FRawDistributionFloat
		constexpr auto RadiusScale = 0xb0; // FRawDistributionFloat
		constexpr auto LightExponent = 0xe0; // FRawDistributionFloat
		constexpr auto LightingChannels = 0x110; // FLightingChannels
		constexpr auto VolumetricScatteringIntensity = 0x114; // float
		constexpr auto bHighQualityLights = 0x118; // bool
		constexpr auto bShadowCastingLights = 0x119; // bool
	}

	namespace n_ASFPSLootBoxSpawner {
		constexpr auto LootBox = 0x248; // ASFPSLootBox*
		constexpr auto LootBoxClass = 0x270; // ASFPSLootBox*
		constexpr auto ItemsToSpawn = 0x278; // TArray<FSFPSItemSetStruct>
	}

	namespace n_UCameraAnim {
		constexpr auto CameraInterpGroup = 0x28; // UInterpGroup*
		constexpr auto AnimLength = 0x30; // float
		constexpr auto BoundingBox = 0x34; // FBox
		constexpr auto bRelativeToInitialTransform = 0x50; // char : 1
		constexpr auto bRelativeToInitialFOV = 0x50; // char : 1
		constexpr auto BaseFOV = 0x54; // float
		constexpr auto BasePostProcessSettings = 0x60; // FPostProcessSettings
		constexpr auto BasePostProcessBlendWeight = 0x5c0; // float
	}

	namespace n_USFPSItemSetStructSet {
		constexpr auto ItemSetStructs = 0x28; // TArray<FSFPSItemSetStruct>
	}

	namespace n_UPaperSpriteComponent {
		constexpr auto SourceSprite = 0x478; // UPaperSprite*
		constexpr auto MaterialOverride = 0x480; // UMaterialInterface*
		constexpr auto SpriteColor = 0x488; // FLinearColor
	}

	namespace n_UWorld {
		constexpr auto PersistentLevel = 0x30; // ULevel*
		constexpr auto NetDriver = 0x38; // UNetDriver*
		constexpr auto LineBatcher = 0x40; // ULineBatchComponent*
		constexpr auto PersistentLineBatcher = 0x48; // ULineBatchComponent*
		constexpr auto ForegroundLineBatcher = 0x50; // ULineBatchComponent*
		constexpr auto NetworkManager = 0x58; // AGameNetworkManager*
		constexpr auto PhysicsCollisionHandler = 0x60; // UPhysicsCollisionHandler*
		constexpr auto ExtraReferencedObjects = 0x68; // TArray<UObject*>
		constexpr auto PerModuleDataObjects = 0x78; // TArray<UObject*>
		constexpr auto StreamingLevels = 0x88; // TArray<ULevelStreaming*>
		constexpr auto StreamingLevelsToConsider = 0x98; // FStreamingLevelsToConsider
		constexpr auto StreamingLevelsPrefix = 0xc0; // FString
		constexpr auto CurrentLevelPendingVisibility = 0xd0; // ULevel*
		constexpr auto CurrentLevelPendingInvisibility = 0xd8; // ULevel*
		constexpr auto DemoNetDriver = 0xe0; // UDemoNetDriver*
		constexpr auto MyParticleEventManager = 0xe8; // AParticleEventManager*
		constexpr auto DefaultPhysicsVolume = 0xf0; // APhysicsVolume*
		constexpr auto bAreConstraintsDirty = 0x10e; // char : 1
		constexpr auto NavigationSystem = 0x110; // UNavigationSystemBase*
		constexpr auto AuthorityGameMode = 0x118; // AGameModeBase*
		constexpr auto GameState = 0x120; // AGameStateBase*
		constexpr auto AISystem = 0x128; // UAISystemBase*
		constexpr auto AvoidanceManager = 0x130; // UAvoidanceManager*
		constexpr auto Levels = 0x138; // TArray<ULevel*>
		constexpr auto LevelCollections = 0x148; // TArray<FLevelCollection>
		constexpr auto OwningGameInstance = 0x180; // UGameInstance*
		constexpr auto ParameterCollectionInstances = 0x188; // TArray<UMaterialParameterCollectionInstance*>
		constexpr auto CanvasForRenderingToTarget = 0x198; // UCanvas*
		constexpr auto CanvasForDrawMaterialToRenderTarget = 0x1a0; // UCanvas*
		constexpr auto PhysicsField = 0x1f8; // UPhysicsFieldComponent*
		constexpr auto ComponentsThatNeedPreEndOfFrameSync = 0x200; // TSet<UActorComponent*>
		constexpr auto ComponentsThatNeedEndOfFrameUpdate = 0x250; // TArray<UActorComponent*>
		constexpr auto ComponentsThatNeedEndOfFrameUpdate_OnGameThread = 0x260; // TArray<UActorComponent*>
		constexpr auto WorldComposition = 0x5e0; // UWorldComposition*
		constexpr auto PSCPool = 0x678; // FWorldPSCPool
	}

	namespace n_UParticleSystemComponent {
		constexpr auto Template = 0x450; // UParticleSystem*
		constexpr auto EmitterMaterials = 0x458; // TArray<UMaterialInterface*>
		constexpr auto SkelMeshComponents = 0x468; // TArray<USkeletalMeshComponent*>
		constexpr auto bResetOnDetach = 0x479; // char : 1
		constexpr auto bUpdateOnDedicatedServer = 0x479; // char : 1
		constexpr auto bAllowRecycling = 0x479; // char : 1
		constexpr auto bAutoManageAttachment = 0x479; // char : 1
		constexpr auto bAutoAttachWeldSimulatedBodies = 0x479; // char : 1
		constexpr auto bWarmingUp = 0x47a; // char : 1
		constexpr auto bOverrideLODMethod = 0x47a; // char : 1
		constexpr auto bSkipUpdateDynamicDataDuringTick = 0x47a; // char : 1
		constexpr auto LODMethod = 0x485; // ParticleSystemLODMethod
		constexpr auto RequiredSignificance = 0x486; // EParticleSignificanceLevel
		constexpr auto InstanceParameters = 0x488; // TArray<FParticleSysParam>
		constexpr auto OnParticleSpawn = 0x498; // FMulticastInlineDelegate
		constexpr auto OnParticleBurst = 0x4a8; // FMulticastInlineDelegate
		constexpr auto OnParticleDeath = 0x4b8; // FMulticastInlineDelegate
		constexpr auto OnParticleCollide = 0x4c8; // FMulticastInlineDelegate
		constexpr auto bOldPositionValid = 0x4d8; // bool
		constexpr auto OldPosition = 0x4dc; // FVector
		constexpr auto PartSysVelocity = 0x4e8; // FVector
		constexpr auto WarmupTime = 0x4f4; // float
		constexpr auto WarmupTickRate = 0x4f8; // float
		constexpr auto SecondsBeforeInactive = 0x500; // float
		constexpr auto MaxTimeBeforeForceUpdateTransform = 0x508; // float
		constexpr auto ReplayClips = 0x528; // TArray<UParticleSystemReplay*>
		constexpr auto CustomTimeDilation = 0x540; // float
		constexpr auto AutoAttachParent = 0x598; // TWeakObjectPtr<USceneComponent>
		constexpr auto AutoAttachSocketName = 0x5a0; // FName
		constexpr auto AutoAttachLocationRule = 0x5a8; // EAttachmentRule
		constexpr auto AutoAttachRotationRule = 0x5a9; // EAttachmentRule
		constexpr auto AutoAttachScaleRule = 0x5aa; // EAttachmentRule
		constexpr auto OnSystemFinished = 0x5d8; // FMulticastInlineDelegate
	}

	namespace n_UImageSequenceProtocol_EXR {
		constexpr auto bCompressed = 0xd8; // bool
		constexpr auto CaptureGamut = 0xd9; // EHDRCaptureGamut
	}

	namespace n_UParticleModuleLocation {
		constexpr auto StartLocation = 0x30; // FRawDistributionVector
		constexpr auto DistributeOverNPoints = 0x78; // float
		constexpr auto DistributeThreshold = 0x7c; // float
	}

	namespace n_UfrmHUDChatBox_C {
		constexpr auto UberGraphFrame = 0x338; // FPointerToUberGraphFrame
	}

	namespace n_UInputComponent {
		constexpr auto CachedKeyToActionInfo = 0x120; // TArray<FCachedKeyToActionInfo>
	}

	namespace n_UAIDataProvider_Random {
		constexpr auto Min = 0x40; // float
		constexpr auto Max = 0x44; // float
		constexpr auto bInteger = 0x48; // char : 1
	}

	namespace n_UfrmQuickSlot_C {
		constexpr auto UberGraphFrame = 0x2c0; // FPointerToUberGraphFrame
		constexpr auto btnMain = 0x2c8; // UButton*
		constexpr auto pnMain = 0x2d0; // USFPSUserWidget_EquipItem*
	}

	namespace n_UMaterialExpressionGIReplace {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto StaticIndirect = 0x54; // FExpressionInput
		constexpr auto DynamicIndirect = 0x68; // FExpressionInput
	}

	namespace n_UForceFeedbackAttenuation {
		constexpr auto Attenuation = 0x28; // FForceFeedbackAttenuationSettings
	}

	namespace n_UMaterialExpressionArcsine {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UBTTask_RunBehaviorDynamic {
		constexpr auto InjectionTag = 0x70; // FGameplayTag
		constexpr auto DefaultBehaviorAsset = 0x78; // UBehaviorTree*
		constexpr auto BehaviorAsset = 0x80; // UBehaviorTree*
	}

	namespace n_UfrmAdminPanelDeathRecord_C {
		constexpr auto btnSelected = 0x2e0; // UButton*
	}

	namespace n_UAnimSharingStateInstance {
		constexpr auto AnimationToPlay = 0x2b8; // UAnimSequence*
		constexpr auto PermutationTimeOffset = 0x2c0; // float
		constexpr auto PlayRate = 0x2c4; // float
		constexpr auto bStateBool = 0x2c8; // bool
		constexpr auto Instance = 0x2d0; // UAnimSharingInstance*
	}

	namespace n_UNavMovementComponent {
		constexpr auto NavAgentProps = 0xf0; // FNavAgentProperties
		constexpr auto FixedPathBrakingDistance = 0x120; // float
		constexpr auto bUpdateNavAgentWithOwnersCollision = 0x124; // char : 1
		constexpr auto bUseAccelerationForPaths = 0x124; // char : 1
		constexpr auto bUseFixedBrakingDistanceForPaths = 0x124; // char : 1
		constexpr auto MovementState = 0x125; // FMovementProperties
		constexpr auto PathFollowingComp = 0x128; // UObject*
	}

	namespace n_AWheeledVehicle {
		constexpr auto Mesh = 0x280; // USkeletalMeshComponent*
		constexpr auto VehicleMovement = 0x288; // UWheeledVehicleMovementComponent*
	}

	namespace n_USFPSAICharacterSets {
		constexpr auto Elements = 0x28; // TArray<FSFPSAICharacterSetsElement>
	}

	namespace n_UParticleModuleRotation {
		constexpr auto StartRotation = 0x30; // FRawDistributionFloat
	}

	namespace n_UDynamicEntryBoxBase {
		constexpr auto EntryBoxType = 0x108; // EDynamicBoxType
		constexpr auto EntrySpacing = 0x10c; // FVector2D
		constexpr auto SpacingPattern = 0x118; // TArray<FVector2D>
		constexpr auto EntrySizeRule = 0x128; // FSlateChildSize
		constexpr auto EntryHorizontalAlignment = 0x130; // EHorizontalAlignment
		constexpr auto EntryVerticalAlignment = 0x131; // EVerticalAlignment
		constexpr auto MaxElementSize = 0x134; // int32_t
		constexpr auto RadialBoxSettings = 0x138; // FRadialBoxSettings
		constexpr auto EntryWidgetPool = 0x158; // FUserWidgetPool
	}

	namespace n_UMaterialExpressionVolumetricAdvancedMaterialOutput {
		constexpr auto PhaseG = 0x40; // FExpressionInput
		constexpr auto PhaseG2 = 0x54; // FExpressionInput
		constexpr auto PhaseBlend = 0x68; // FExpressionInput
		constexpr auto MultiScatteringContribution = 0x7c; // FExpressionInput
		constexpr auto MultiScatteringOcclusion = 0x90; // FExpressionInput
		constexpr auto MultiScatteringEccentricity = 0xa4; // FExpressionInput
		constexpr auto ConservativeDensity = 0xb8; // FExpressionInput
		constexpr auto ConstPhaseG = 0xcc; // float
		constexpr auto ConstPhaseG2 = 0xd0; // float
		constexpr auto ConstPhaseBlend = 0xd4; // float
		constexpr auto PerSamplePhaseEvaluation = 0xd8; // bool
		constexpr auto MultiScatteringApproximationOctaveCount = 0xdc; // uint32_t
		constexpr auto ConstMultiScatteringContribution = 0xe0; // float
		constexpr auto ConstMultiScatteringOcclusion = 0xe4; // float
		constexpr auto ConstMultiScatteringEccentricity = 0xe8; // float
		constexpr auto bGroundContribution = 0xec; // bool
		constexpr auto bGrayScaleMaterial = 0xed; // bool
		constexpr auto bRayMarchVolumeShadow = 0xee; // bool
	}

	namespace n_UHudSettings {
		constexpr auto bShowHUD = 0x28; // char : 1
		constexpr auto DebugDisplay = 0x30; // TArray<FName>
	}

	namespace n_UDataDrivenCVarEngineSubsystem {
		constexpr auto OnDataDrivenCVarDelegate = 0x30; // FMulticastInlineDelegate
	}

	namespace n_Aweapmf_DTK_762x25_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UMovieSceneSkeletalAnimationSection {
		constexpr auto Params = 0xe8; // FMovieSceneSkeletalAnimationParams
		constexpr auto AnimSequence = 0x1c0; // UAnimSequence*
		constexpr auto Animation = 0x1c8; // UAnimSequenceBase*
		constexpr auto StartOffset = 0x1d0; // float
		constexpr auto EndOffset = 0x1d4; // float
		constexpr auto PlayRate = 0x1d8; // float
		constexpr auto bReverse = 0x1dc; // char : 1
		constexpr auto SlotName = 0x1e0; // FName
		constexpr auto StartLocationOffset = 0x1e8; // FVector
		constexpr auto StartRotationOffset = 0x1f4; // FRotator
		constexpr auto bMatchWithPrevious = 0x200; // bool
		constexpr auto MatchedBoneName = 0x204; // FName
		constexpr auto MatchedLocationOffset = 0x20c; // FVector
		constexpr auto MatchedRotationOffset = 0x218; // FRotator
		constexpr auto bMatchTranslation = 0x224; // bool
		constexpr auto bMatchIncludeZHeight = 0x225; // bool
		constexpr auto bMatchRotationYaw = 0x226; // bool
		constexpr auto bMatchRotationPitch = 0x227; // bool
		constexpr auto bMatchRotationRoll = 0x228; // bool
	}

	namespace n_USFPSCraftLibrary {
		constexpr auto Items = 0x28; // TArray<FSFPSCraftGroup>
	}

	namespace n_UProceduralFoliageTile {
		constexpr auto FoliageSpawner = 0x28; // UProceduralFoliageSpawner*
		constexpr auto InstancesArray = 0xd0; // TArray<FProceduralFoliageInstance>
	}

	namespace n_UPhysicsSettingsCore {
		constexpr auto DefaultGravityZ = 0x38; // float
		constexpr auto DefaultTerminalVelocity = 0x3c; // float
		constexpr auto DefaultFluidFriction = 0x40; // float
		constexpr auto SimulateScratchMemorySize = 0x44; // int32_t
		constexpr auto RagdollAggregateThreshold = 0x48; // int32_t
		constexpr auto TriangleMeshTriangleMinAreaThreshold = 0x4c; // float
		constexpr auto bEnableShapeSharing = 0x50; // bool
		constexpr auto bEnablePCM = 0x51; // bool
		constexpr auto bEnableStabilization = 0x52; // bool
		constexpr auto bWarnMissingLocks = 0x53; // bool
		constexpr auto bEnable2DPhysics = 0x54; // bool
		constexpr auto bDefaultHasComplexCollision = 0x55; // bool
		constexpr auto BounceThresholdVelocity = 0x58; // float
		constexpr auto FrictionCombineMode = 0x5c; // EFrictionCombineMode
		constexpr auto RestitutionCombineMode = 0x5d; // EFrictionCombineMode
		constexpr auto MaxAngularVelocity = 0x60; // float
		constexpr auto MaxDepenetrationVelocity = 0x64; // float
		constexpr auto ContactOffsetMultiplier = 0x68; // float
		constexpr auto MinContactOffset = 0x6c; // float
		constexpr auto MaxContactOffset = 0x70; // float
		constexpr auto bSimulateSkeletalMeshOnDedicatedServer = 0x74; // bool
		constexpr auto DefaultShapeComplexity = 0x75; // ECollisionTraceFlag
		constexpr auto SolverOptions = 0x78; // FChaosSolverConfiguration
	}

	namespace n_UAudioCurveSourceComponent {
		constexpr auto CurveSourceBindingName = 0x868; // FName
		constexpr auto CurveSyncOffset = 0x870; // float
	}

	namespace n_UInterpGroupCamera {
		constexpr auto CameraAnimInst = 0x50; // UCameraAnim*
		constexpr auto CompressTolerance = 0x58; // float
	}

	namespace n_ALevelSequenceActor {
		constexpr auto PlaybackSettings = 0x238; // FMovieSceneSequencePlaybackSettings
		constexpr auto SequencePlayer = 0x250; // ULevelSequencePlayer*
		constexpr auto LevelSequence = 0x258; // FSoftObjectPath
		constexpr auto CameraSettings = 0x270; // FLevelSequenceCameraSettings
		constexpr auto BurnInOptions = 0x278; // ULevelSequenceBurnInOptions*
		constexpr auto BindingOverrides = 0x280; // UMovieSceneBindingOverrides*
		constexpr auto bAutoPlay = 0x288; // char : 1
		constexpr auto bOverrideInstanceData = 0x288; // char : 1
		constexpr auto bReplicatePlayback = 0x288; // char : 1
		constexpr auto DefaultInstanceData = 0x290; // UObject*
		constexpr auto BurnInInstance = 0x298; // ULevelSequenceBurnIn*
		constexpr auto bShowBurnin = 0x2a0; // bool
	}

	namespace n_UPendingNetGame {
		constexpr auto NetDriver = 0x30; // UNetDriver*
		constexpr auto DemoNetDriver = 0x38; // UDemoNetDriver*
	}

	namespace n_UWidget {
		constexpr auto Slot = 0x28; // UPanelSlot*
		constexpr auto bIsEnabledDelegate = 0x30; // FDelegate
		constexpr auto ToolTipText = 0x40; // FText
		constexpr auto ToolTipTextDelegate = 0x58; // FDelegate
		constexpr auto ToolTipWidget = 0x68; // UWidget*
		constexpr auto ToolTipWidgetDelegate = 0x70; // FDelegate
		constexpr auto VisibilityDelegate = 0x80; // FDelegate
		constexpr auto RenderTransform = 0x90; // FWidgetTransform
		constexpr auto RenderTransformPivot = 0xac; // FVector2D
		constexpr auto bIsVariable = 0xb4; // char : 1
		constexpr auto bCreatedByConstructionScript = 0xb4; // char : 1
		constexpr auto bIsEnabled = 0xb4; // char : 1
		constexpr auto bOverride_Cursor = 0xb4; // char : 1
		constexpr auto AccessibleWidgetData = 0xb8; // USlateAccessibleWidgetData*
		constexpr auto bIsVolatile = 0xc0; // char : 1
		constexpr auto Cursor = 0xc1; // EMouseCursor
		constexpr auto Clipping = 0xc2; // EWidgetClipping
		constexpr auto Visibility = 0xc3; // ESlateVisibility
		constexpr auto RenderOpacity = 0xc4; // float
		constexpr auto Navigation = 0xc8; // UWidgetNavigation*
		constexpr auto FlowDirectionPreference = 0xd0; // EFlowDirectionPreference
		constexpr auto NativeBindings = 0xf8; // TArray<UPropertyBinding*>
	}

	namespace n_UInAppPurchaseQueryCallbackProxy2 {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UPawnSensingComponent {
		constexpr auto HearingThreshold = 0xb0; // float
		constexpr auto LOSHearingThreshold = 0xb4; // float
		constexpr auto SightRadius = 0xb8; // float
		constexpr auto SensingInterval = 0xbc; // float
		constexpr auto HearingMaxSoundAge = 0xc0; // float
		constexpr auto bEnableSensingUpdates = 0xc4; // char : 1
		constexpr auto bOnlySensePlayers = 0xc4; // char : 1
		constexpr auto bSeePawns = 0xc4; // char : 1
		constexpr auto bHearNoises = 0xc4; // char : 1
		constexpr auto OnSeePawn = 0xd0; // FMulticastInlineDelegate
		constexpr auto OnHearNoise = 0xe0; // FMulticastInlineDelegate
		constexpr auto PeripheralVisionAngle = 0xf0; // float
		constexpr auto PeripheralVisionCosine = 0xf4; // float
	}

	namespace n_UGameInstance {
		constexpr auto LocalPlayers = 0x38; // TArray<ULocalPlayer*>
		constexpr auto OnlineSession = 0x48; // UOnlineSession*
		constexpr auto ReferencedObjects = 0x50; // TArray<UObject*>
		constexpr auto OnPawnControllerChangedDelegates = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleColor {
		constexpr auto StartColor = 0x30; // FRawDistributionVector
		constexpr auto StartAlpha = 0x78; // FRawDistributionFloat
		constexpr auto bClampAlpha = 0xa8; // char : 1
	}

	namespace n_USimpleConstructionScript {
		constexpr auto RootNodes = 0x28; // TArray<USCS_Node*>
		constexpr auto AllNodes = 0x38; // TArray<USCS_Node*>
		constexpr auto DefaultSceneRootNode = 0x48; // USCS_Node*
	}

	namespace n_UOnlineEngineInterfaceImpl {
		constexpr auto MappedUniqueNetIdTypes = 0x28; // TMap<FName, FName>
		constexpr auto CompatibleUniqueNetIdTypes = 0x78; // TArray<FName>
		constexpr auto VoiceSubsystemNameOverride = 0x88; // FName
	}

	namespace n_ALight {
		constexpr auto LightComponent = 0x220; // ULightComponent*
		constexpr auto bEnabled = 0x228; // char : 1
	}

	namespace n_USizeBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x58; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x59; // EVerticalAlignment
	}

	namespace n_UWindowTitleBarAreaSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_Aweapmf_DTK_545x39_02_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UMovieSceneCapture {
		constexpr auto ImageCaptureProtocolType = 0x38; // FSoftClassPath
		constexpr auto AudioCaptureProtocolType = 0x50; // FSoftClassPath
		constexpr auto ImageCaptureProtocol = 0x68; // UMovieSceneImageCaptureProtocolBase*
		constexpr auto AudioCaptureProtocol = 0x70; // UMovieSceneAudioCaptureProtocolBase*
		constexpr auto Settings = 0x78; // FMovieSceneCaptureSettings
		constexpr auto bUseSeparateProcess = 0xe8; // bool
		constexpr auto bCloseEditorWhenCaptureStarts = 0xe9; // bool
		constexpr auto AdditionalCommandLineArguments = 0xf0; // FString
		constexpr auto InheritedCommandLineArguments = 0x100; // FString
	}

	namespace n_USFPSACSpawner {
		constexpr auto RouteComponent = 0x1f8; // USFPSACRoute*
		constexpr auto bIsPlayerSpawner = 0x200; // bool
		constexpr auto CharacterGroups = 0x208; // TArray<FSFPSACSpawnerCharacterGroup>
		constexpr auto RouteActor = 0x218; // ASFPSRoute*
		constexpr auto RouteStartWaypoint = 0x220; // int32_t
		constexpr auto RouteDirection = 0x224; // int32_t
		constexpr auto bRouteChaotic = 0x228; // bool
		constexpr auto AIConfig = 0x230; // USFPSAIConfig*
		constexpr auto SenseConfig_Sight = 0x238; // USFPSAISenseConfig_Sight*
		constexpr auto SenseConfig_Hearing = 0x240; // USFPSAISenseConfig_Hearing*
		constexpr auto HearingVolume = 0x248; // ASFPSAIHearingVolume*
		constexpr auto LookAroundOrigin = 0x250; // FVector
		constexpr auto SpawnLocationOffset = 0x25c; // FVector
		constexpr auto OnSpawned = 0x268; // FMulticastInlineDelegate
	}

	namespace n_UGizmoBoxComponent {
		constexpr auto Origin = 0x470; // FVector
		constexpr auto Rotation = 0x480; // FQuat
		constexpr auto Dimensions = 0x490; // FVector
		constexpr auto LineThickness = 0x49c; // float
		constexpr auto bRemoveHiddenLines = 0x4a0; // bool
		constexpr auto bEnableAxisFlip = 0x4a1; // bool
	}

	namespace n_Ascope_opt_cod_4x_C {
		constexpr auto cod_4x_reticles = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_ABP_SFPSAIController_C {
		constexpr auto HomeLocation = 0x3d8; // FName
		constexpr auto State = 0x3e0; // FName
	}

	namespace n_UParticleModuleMeshRotationRateOverLife {
		constexpr auto RotRate = 0x30; // FRawDistributionVector
		constexpr auto bScaleRotRate = 0x78; // char : 1
	}

	namespace n_UJoinSessionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_Aweapon_firearms_rifle_aks74u_mod_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount1 = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightOpen = 0x7f0; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f8; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x800; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x808; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x810; // UStaticMeshComponent*
	}

	namespace n_UInterpTrackEvent {
		constexpr auto EventTrack = 0x70; // TArray<FEventTrackKey>
		constexpr auto bFireEventsWhenForwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenJumpingForwards = 0x80; // char : 1
		constexpr auto bUseCustomEventName = 0x80; // char : 1
	}

	namespace n_USFPSAISenseConfig_Sight {
		constexpr auto ResolutionDefault = 0x74; // float
		constexpr auto ResolutionDefaultNight = 0x78; // float
		constexpr auto ResolutionAggro = 0x7c; // float
		constexpr auto ResolutionAggroNight = 0x80; // float
	}

	namespace n_UDatasmithLightComponentTemplate {
		constexpr auto bVisible = 0x30; // char : 1
		constexpr auto CastShadows = 0x34; // char : 1
		constexpr auto bUseTemperature = 0x34; // char : 1
		constexpr auto bUseIESBrightness = 0x34; // char : 1
		constexpr auto Intensity = 0x38; // float
		constexpr auto Temperature = 0x3c; // float
		constexpr auto IESBrightnessScale = 0x40; // float
		constexpr auto LightColor = 0x44; // FLinearColor
		constexpr auto LightFunctionMaterial = 0x58; // UMaterialInterface*
		constexpr auto IESTexture = 0x60; // UTextureLightProfile*
	}

	namespace n_ALODActor {
		constexpr auto StaticMeshComponent = 0x220; // UStaticMeshComponent*
		constexpr auto InstancedStaticMeshComponents = 0x228; // TMap<FHLODInstancingKey, UInstancedStaticMeshComponent*>
		constexpr auto Proxy = 0x278; // UHLODProxy*
		constexpr auto Key = 0x280; // FName
		constexpr auto LODDrawDistance = 0x288; // float
		constexpr auto LODLevel = 0x28c; // int32_t
		constexpr auto SubActors = 0x290; // TArray<AActor*>
		constexpr auto CachedNumHLODLevels = 0x2a0; // char
	}

	namespace n_UGizmoScaledTransformSource {
		constexpr auto ChildTransformSource = 0x48; // TScriptInterface<IGizmoTransformSource>
	}

	namespace n_USFPSAdminItemList {
		constexpr auto Groups = 0x28; // TArray<FSFPSAdminItemsGroup>
	}

	namespace n_AVolumetricCloud {
		constexpr auto VolumetricCloudComponent = 0x220; // UVolumetricCloudComponent*
	}

	namespace n_ASFPSMovingAmbientSound {
		constexpr auto Speed = 0x230; // float
	}

	namespace n_UMaterialExpressionAntialiasedTextureMask {
		constexpr auto Threshold = 0x80; // float
		constexpr auto Channel = 0x84; // ETextureColorChannel
	}

	namespace n_UMeshComponent {
		constexpr auto OverrideMaterials = 0x450; // TArray<UMaterialInterface*>
		constexpr auto bEnableMaterialParameterCaching = 0x470; // char : 1
	}

	namespace n_UEndMatchCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleBeamNoise {
		constexpr auto bLowFreq_Enabled = 0x30; // char : 1
		constexpr auto Frequency = 0x34; // int32_t
		constexpr auto Frequency_LowRange = 0x38; // int32_t
		constexpr auto NoiseRange = 0x40; // FRawDistributionVector
		constexpr auto NoiseRangeScale = 0x88; // FRawDistributionFloat
		constexpr auto bNRScaleEmitterTime = 0xb8; // char : 1
		constexpr auto NoiseSpeed = 0xc0; // FRawDistributionVector
		constexpr auto bSmooth = 0x108; // char : 1
		constexpr auto NoiseLockRadius = 0x10c; // float
		constexpr auto bNoiseLock = 0x110; // char : 1
		constexpr auto bOscillate = 0x110; // char : 1
		constexpr auto NoiseLockTime = 0x114; // float
		constexpr auto NoiseTension = 0x118; // float
		constexpr auto bUseNoiseTangents = 0x11c; // char : 1
		constexpr auto NoiseTangentStrength = 0x120; // FRawDistributionFloat
		constexpr auto NoiseTessellation = 0x150; // int32_t
		constexpr auto bTargetNoise = 0x154; // char : 1
		constexpr auto FrequencyDistance = 0x158; // float
		constexpr auto bApplyNoiseScale = 0x15c; // char : 1
		constexpr auto NoiseScale = 0x160; // FRawDistributionFloat
	}

	namespace n_USFPSAirDropManager {
		constexpr auto Drops = 0x38; // TArray<USFPSAirDrop*>
		constexpr auto DropTimerMin = 0x58; // int32_t
		constexpr auto DropTimerMax = 0x5c; // int32_t
		constexpr auto MaxDrops = 0x60; // int32_t
		constexpr auto PlaneHeight = 0x64; // float
		constexpr auto PlaneSpeed = 0x68; // float
		constexpr auto PlaneOffset = 0x6c; // float
		constexpr auto LootBoxZOffset = 0x70; // float
		constexpr auto WaitTime = 0x74; // int32_t
		constexpr auto PlaneClass = 0x78; // ASFPSAirDropPlane*
		constexpr auto CargoClass = 0x80; // ASFPSAirDropCargo*
		constexpr auto LootBoxClass = 0x88; // ASFPSLootBox*
		constexpr auto RewardSet = 0x90; // USFPSItemSetStructSet*
	}

	namespace n_USourceEffectStereoDelayPreset {
		constexpr auto Settings = 0xb4; // FSourceEffectStereoDelaySettings
	}

	namespace n_UTextureLightProfile {
		constexpr auto Brightness = 0x1a0; // float
		constexpr auto TextureMultiplier = 0x1a4; // float
	}

	namespace n_UAnimationSharingManager {
		constexpr auto Skeletons = 0x28; // TArray<USkeleton*>
		constexpr auto PerSkeletonData = 0x38; // TArray<UAnimSharingInstance*>
	}

	namespace n_UMovieSceneTrackInstance {
		constexpr auto AnimatedObject = 0x28; // UObject*
		constexpr auto bIsMasterTrackInstance = 0x30; // bool
		constexpr auto Linker = 0x38; // UMovieSceneEntitySystemLinker*
		constexpr auto Inputs = 0x40; // TArray<FMovieSceneTrackInstanceInput>
	}

	namespace n_UStaticMeshSocket {
		constexpr auto SocketName = 0x28; // FName
		constexpr auto RelativeLocation = 0x30; // FVector
		constexpr auto RelativeRotation = 0x3c; // FRotator
		constexpr auto RelativeScale = 0x48; // FVector
		constexpr auto Tag = 0x58; // FString
	}

	namespace n_UMaterialExpressionConstant3Vector {
		constexpr auto Constant = 0x40; // FLinearColor
	}

	namespace n_UCreateSessionCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_ULODSyncComponent {
		constexpr auto NumLODs = 0xb0; // int32_t
		constexpr auto ForcedLOD = 0xb4; // int32_t
		constexpr auto ComponentsToSync = 0xb8; // TArray<FComponentSync>
		constexpr auto CustomLODMapping = 0xc8; // TMap<FName, FLODMappingData>
		constexpr auto CurrentLOD = 0x118; // int32_t
		constexpr auto CurrentNumLODs = 0x11c; // int32_t
		constexpr auto DriveComponents = 0x120; // TArray<UPrimitiveComponent*>
		constexpr auto SubComponents = 0x130; // TArray<UPrimitiveComponent*>
	}

	namespace n_UInterpTrackLinearColorBase {
		constexpr auto LinearColorTrack = 0x70; // FInterpCurveLinearColor
		constexpr auto CurveTension = 0x88; // float
	}

	namespace n_UTemplateSequenceSection {
		constexpr auto PropertyScales = 0x170; // TArray<FTemplateSectionPropertyScale>
	}

	namespace n_At_Equipment_C {
		constexpr auto Mesh = 0x3a8; // UStaticMeshComponent*
		constexpr auto Trace = 0x3b0; // UBoxComponent*
		constexpr auto SFPSACItemInventory = 0x3b8; // USFPSACItemInventory*
	}

	namespace n_UGeometryCollectionCache {
		constexpr auto RecordedData = 0x28; // FRecordedTransformTrack
		constexpr auto SupportedCollection = 0x38; // UGeometryCollection*
		constexpr auto CompatibleCollectionState = 0x40; // FGuid
	}

	namespace n_ABM_WallWindow_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UFormChat_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto frmPopupMenu = 0x268; // UfrmPopupMenu_C*
		constexpr auto nsPopupMenu = 0x270; // UNamedSlot*
		constexpr auto FSelectedChatItem = 0x278; // USFPSUserWidget_ChatItem*
		constexpr auto FMouseRightButtonIsDowned = 0x280; // bool
		constexpr auto FMouseLeftButtonIsDowned = 0x281; // bool
	}

	namespace n_UBTDecorator_TimeLimit {
		constexpr auto TimeLimit = 0x68; // float
	}

	namespace n_UParticleModuleOrbitBase {
		constexpr auto bUseEmitterTime = 0x30; // char : 1
	}

	namespace n_UfrmSpriteViewEquip_C {
		constexpr auto UberGraphFrame = 0x2e8; // FPointerToUberGraphFrame
		constexpr auto btnMain = 0x2f0; // UButton*
		constexpr auto pnMain = 0x2f8; // USFPSUserWidget_EquipItem*
	}

	namespace n_UMaterialExpressionArctangent {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UGeometryCache {
		constexpr auto Materials = 0x30; // TArray<UMaterialInterface*>
		constexpr auto Tracks = 0x40; // TArray<UGeometryCacheTrack*>
		constexpr auto StartFrame = 0x60; // int32_t
		constexpr auto EndFrame = 0x64; // int32_t
		constexpr auto Hash = 0x68; // uint64_t
	}

	namespace n_AMagicLeapARPinRenderer {
		constexpr auto bInfoActorsVisibilityOverride = 0x220; // bool
		constexpr auto AllInfoActors = 0x228; // TMap<FGuid, AMagicLeapARPinInfoActorBase*>
		constexpr auto ClassToSpawn = 0x280; // AMagicLeapARPinInfoActorBase*
	}

	namespace n_USFPSACTripwireTrap {
		constexpr auto ShooterLoginData = 0xc0; // FSFPSLoginData
		constexpr auto TrapType = 0xe8; // ESFPSTrapType
		constexpr auto MissileProjectile = 0xf0; // ASFPSBaseMissileProjectile*
		constexpr auto ExplosionMesh = 0xf8; // UStaticMesh*
		constexpr auto CutterGrenade = 0x100; // ASFPSBaseItem*
		constexpr auto ChainExplosionDistanceSquared = 0x10c; // float
	}

	namespace n_UInterpTrackInstLinearColorProp {
		constexpr auto ResetColor = 0x58; // FLinearColor
	}

	namespace n_UMovieSceneEvaluationHookSystem {
		constexpr auto PendingEventsByRootInstance = 0x40; // TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer>
	}

	namespace n_UDatasmithAreaLightActorTemplate {
		constexpr auto LightType = 0x30; // EDatasmithAreaLightActorType
		constexpr auto LightShape = 0x31; // EDatasmithAreaLightActorShape
		constexpr auto Dimensions = 0x34; // FVector2D
		constexpr auto Color = 0x3c; // FLinearColor
		constexpr auto Intensity = 0x4c; // float
		constexpr auto IntensityUnits = 0x50; // ELightUnits
		constexpr auto Temperature = 0x54; // float
		constexpr auto IESTexture = 0x58; // TSoftObjectPtr<UTextureLightProfile>
		constexpr auto bUseIESBrightness = 0x80; // bool
		constexpr auto IESBrightnessScale = 0x84; // float
		constexpr auto Rotation = 0x88; // FRotator
		constexpr auto SourceRadius = 0x94; // float
		constexpr auto SourceLength = 0x98; // float
		constexpr auto AttenuationRadius = 0x9c; // float
	}

	namespace n_UAISense_Team {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAITeamStimulusEvent>
	}

	namespace n_UUniformVector {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto Direction = 0xb4; // FVector
	}

	namespace n_UPaperTerrainMaterial {
		constexpr auto Rules = 0x30; // TArray<FPaperTerrainMaterialRule>
		constexpr auto InteriorFill = 0x40; // UPaperSprite*
	}

	namespace n_UGameEngine {
		constexpr auto MaxDeltaTime = 0xd20; // float
		constexpr auto ServerFlushLogInterval = 0xd24; // float
		constexpr auto GameInstance = 0xd28; // UGameInstance*
	}

	namespace n_UUniformGridPanel {
		constexpr auto SlotPadding = 0x120; // FMargin
		constexpr auto MinDesiredSlotWidth = 0x130; // float
		constexpr auto MinDesiredSlotHeight = 0x134; // float
	}

	namespace n_UListViewBase {
		constexpr auto EntryWidgetClass = 0x108; // UUserWidget*
		constexpr auto WheelScrollMultiplier = 0x110; // float
		constexpr auto bEnableScrollAnimation = 0x114; // bool
		constexpr auto bEnableFixedLineOffset = 0x115; // bool
		constexpr auto FixedLineScrollOffset = 0x118; // float
		constexpr auto BP_OnEntryGenerated = 0x120; // FMulticastInlineDelegate
		constexpr auto BP_OnEntryReleased = 0x130; // FMulticastInlineDelegate
		constexpr auto EntryWidgetPool = 0x140; // FUserWidgetPool
	}

	namespace n_UMaterialExpressionTextureSampleParameter {
		constexpr auto ParameterName = 0x60; // FName
		constexpr auto ExpressionGUID = 0x68; // FGuid
		constexpr auto group = 0x78; // FName
	}

	namespace n_AProceduralFoliageBlockingVolume {
		constexpr auto ProceduralFoliageVolume = 0x258; // AProceduralFoliageVolume*
	}

	namespace n_UHorizontalBoxSlot {
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto Size = 0x50; // FSlateChildSize
		constexpr auto HorizontalAlignment = 0x58; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x59; // EVerticalAlignment
	}

	namespace n_ASFPSGameplayItem {
		constexpr auto ClientInfoType = 0x310; // ESFPSGameplayEventInfoType
		constexpr auto LootSets = 0x350; // TArray<FSFPSItemSetStruct>
	}

	namespace n_UEnvQueryGenerator_ActorsOfClass {
		constexpr auto SearchedActorClass = 0x50; // AActor*
		constexpr auto GenerateOnlyActorsInRadius = 0x58; // FAIDataProviderBoolValue
		constexpr auto SearchRadius = 0x90; // FAIDataProviderFloatValue
		constexpr auto SearchCenter = 0xc8; // UEnvQueryContext*
	}

	namespace n_UMovieSceneIntegerSection {
		constexpr auto IntegerCurve = 0xf0; // FMovieSceneIntegerChannel
	}

	namespace n_USlateAccessibleWidgetData {
		constexpr auto bCanChildrenBeAccessible = 0x28; // bool
		constexpr auto AccessibleBehavior = 0x29; // ESlateAccessibleBehavior
		constexpr auto AccessibleSummaryBehavior = 0x2a; // ESlateAccessibleBehavior
		constexpr auto AccessibleText = 0x30; // FText
		constexpr auto AccessibleTextDelegate = 0x48; // FDelegate
		constexpr auto AccessibleSummaryText = 0x58; // FText
		constexpr auto AccessibleSummaryTextDelegate = 0x70; // FDelegate
	}

	namespace n_UWidgetAnimationDelegateBinding {
		constexpr auto WidgetAnimationDelegateBindings = 0x28; // TArray<FBlueprintWidgetAnimationDelegateBinding>
	}

	namespace n_APhysicsConstraintActor {
		constexpr auto ConstraintComp = 0x220; // UPhysicsConstraintComponent*
		constexpr auto ConstraintActor1 = 0x228; // AActor*
		constexpr auto ConstraintActor2 = 0x230; // AActor*
		constexpr auto bDisableCollision = 0x238; // char : 1
	}

	namespace n_UDcxVehicleWheelsRawInput {
		constexpr auto ThrottleIndex = 0x28; // int32_t
		constexpr auto RawAnalogControls = 0x30; // TArray<float>
	}

	namespace n_ULandscapeMeshCollisionComponent {
		constexpr auto MeshGuid = 0x530; // FGuid
	}

	namespace n_UAxisAngleGizmo {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto AngleSource = 0x58; // TScriptInterface<IGizmoFloatParameterSource>
		constexpr auto HitTarget = 0x68; // TScriptInterface<IGizmoClickTarget>
		constexpr auto StateTarget = 0x78; // TScriptInterface<IGizmoStateTarget>
		constexpr auto bInInteraction = 0x88; // bool
		constexpr auto RotationOrigin = 0x8c; // FVector
		constexpr auto RotationAxis = 0x98; // FVector
		constexpr auto RotationPlaneX = 0xa4; // FVector
		constexpr auto RotationPlaneY = 0xb0; // FVector
		constexpr auto InteractionStartPoint = 0xbc; // FVector
		constexpr auto InteractionCurPoint = 0xc8; // FVector
		constexpr auto InteractionStartAngle = 0xd4; // float
		constexpr auto InteractionCurAngle = 0xd8; // float
	}

	namespace n_UMaterialFunctionInterface {
		constexpr auto StateId = 0x28; // FGuid
		constexpr auto MaterialFunctionUsage = 0x38; // EMaterialFunctionUsage
	}

	namespace n_ACameraRig_Crane {
		constexpr auto CranePitch = 0x220; // float
		constexpr auto CraneYaw = 0x224; // float
		constexpr auto CraneArmLength = 0x228; // float
		constexpr auto bLockMountPitch = 0x22c; // bool
		constexpr auto bLockMountYaw = 0x22d; // bool
		constexpr auto TransformComponent = 0x230; // USceneComponent*
		constexpr auto CraneYawControl = 0x238; // USceneComponent*
		constexpr auto CranePitchControl = 0x240; // USceneComponent*
		constexpr auto CraneCameraMount = 0x248; // USceneComponent*
	}

	namespace n_UfrmTraderItem_C {
		constexpr auto btnAction0 = 0x310; // UButton*
	}

	namespace n_USpinBoxWidgetStyle {
		constexpr auto SpinBoxStyle = 0x30; // FSpinBoxStyle
	}

	namespace n_UProceduralFoliageSpawner {
		constexpr auto RandomSeed = 0x28; // int32_t
		constexpr auto TileSize = 0x2c; // float
		constexpr auto NumUniqueTiles = 0x30; // int32_t
		constexpr auto MinimumQuadTreeSize = 0x34; // float
		constexpr auto FoliageTypes = 0x40; // TArray<FFoliageTypeObject>
	}

	namespace n_UARTrackedGeometry {
		constexpr auto UniqueId = 0x28; // FGuid
		constexpr auto LocalToTrackingTransform = 0x40; // FTransform
		constexpr auto LocalToAlignedTrackingTransform = 0x70; // FTransform
		constexpr auto TrackingState = 0xa0; // EARTrackingState
		constexpr auto UnderlyingMesh = 0xb0; // UMRMeshComponent*
		constexpr auto ObjectClassification = 0xb8; // EARObjectClassification
		constexpr auto SpatialMeshUsageFlags = 0xb9; // EARSpatialMeshUsageFlags
		constexpr auto LastUpdateFrameNumber = 0xd0; // int32_t
		constexpr auto DebugName = 0xe0; // FName
	}

	namespace n_USFPSMainInterfaceHandler {
		constexpr auto HUD = 0x110; // ASFPSHUD*
		constexpr auto FormHUD = 0x118; // UUserWidget*
		constexpr auto FormNDA = 0x120; // UUserWidget*
		constexpr auto FormInGameMenu = 0x128; // UUserWidget*
	}

	namespace n_USoundNodeModulOuterParam {
		constexpr auto PitchModulationParams = 0x48; // UModulatorOuterParams*
		constexpr auto VolumeModulationParams = 0x50; // UModulatorOuterParams*
	}

	namespace n_UEnvQueryTest {
		constexpr auto TestOrder = 0x30; // int32_t
		constexpr auto TestPurpose = 0x34; // EEnvTestPurpose
		constexpr auto TestComment = 0x38; // FString
		constexpr auto MultipleContextFilterOp = 0x48; // EEnvTestFilterOperator
		constexpr auto MultipleContextScoreOp = 0x49; // EEnvTestScoreOperator
		constexpr auto FilterType = 0x4a; // EEnvTestFilterType
		constexpr auto BoolValue = 0x50; // FAIDataProviderBoolValue
		constexpr auto FloatValueMin = 0x88; // FAIDataProviderFloatValue
		constexpr auto FloatValueMax = 0xc0; // FAIDataProviderFloatValue
		constexpr auto ScoringEquation = 0xf9; // EEnvTestScoreEquation
		constexpr auto ClampMinType = 0xfa; // EEnvQueryTestClamping
		constexpr auto ClampMaxType = 0xfb; // EEnvQueryTestClamping
		constexpr auto NormalizationType = 0xfc; // EEQSNormalizationType
		constexpr auto ScoreClampMin = 0x100; // FAIDataProviderFloatValue
		constexpr auto ScoreClampMax = 0x138; // FAIDataProviderFloatValue
		constexpr auto ScoringFactor = 0x170; // FAIDataProviderFloatValue
		constexpr auto ReferenceValue = 0x1a8; // FAIDataProviderFloatValue
		constexpr auto bDefineReferenceValue = 0x1e0; // bool
		constexpr auto bWorkOnFloatValues = 0x1f0; // char : 1
	}

	namespace n_UPhysicsSpringComponent {
		constexpr auto SpringStiffness = 0x1f8; // float
		constexpr auto SpringDamping = 0x1fc; // float
		constexpr auto SpringLengthAtRest = 0x200; // float
		constexpr auto SpringRadius = 0x204; // float
		constexpr auto SpringChannel = 0x208; // ECollisionChannel
		constexpr auto bIgnoreSelf = 0x209; // bool
		constexpr auto SpringCompression = 0x20c; // float
	}

	namespace n_UTextBlock {
		constexpr auto Text = 0x128; // FText
		constexpr auto TextDelegate = 0x140; // FDelegate
		constexpr auto ColorAndOpacity = 0x150; // FSlateColor
		constexpr auto ColorAndOpacityDelegate = 0x178; // FDelegate
		constexpr auto Font = 0x188; // FSlateFontInfo
		constexpr auto StrikeBrush = 0x1e0; // FSlateBrush
		constexpr auto ShadowOffset = 0x268; // FVector2D
		constexpr auto ShadowColorAndOpacity = 0x270; // FLinearColor
		constexpr auto ShadowColorAndOpacityDelegate = 0x280; // FDelegate
		constexpr auto MinDesiredWidth = 0x290; // float
		constexpr auto bWrapWithInvalidationPanel = 0x294; // bool
		constexpr auto bAutoWrapText = 0x295; // bool
		constexpr auto TextTransformPolicy = 0x296; // ETextTransformPolicy
		constexpr auto bSimpleTextMode = 0x297; // bool
	}

	namespace n_UDataTable {
		constexpr auto RowStruct = 0x28; // UScriptStruct*
		constexpr auto bStripFromClientBuilds = 0x80; // char : 1
		constexpr auto bIgnoreExtraFields = 0x80; // char : 1
		constexpr auto bIgnoreMissingFields = 0x80; // char : 1
		constexpr auto ImportKeyField = 0x88; // FString
	}

	namespace n_UMovieSceneVectorSection {
		constexpr auto Curves = 0xf0; // FMovieSceneFloatChannel [0x4]
		constexpr auto ChannelsUsed = 0x370; // int32_t
	}

	namespace n_UParticleModuleAccelerationDrag {
		constexpr auto DragCoefficient = 0x38; // UDistributionFloat*
		constexpr auto DragCoefficientRaw = 0x40; // FRawDistributionFloat
	}

	namespace n_UMovieSceneLevelVisibilitySection {
		constexpr auto Visibility = 0xf0; // ELevelVisibility
		constexpr auto LevelNames = 0xf8; // TArray<FName>
	}

	namespace n_ULevelSequenceDirector {
		constexpr auto Player = 0x28; // ULevelSequencePlayer*
		constexpr auto SubSequenceID = 0x30; // int32_t
		constexpr auto MovieScenePlayerIndex = 0x34; // int32_t
	}

	namespace n_UAnimNotifyState_TimedParticleEffect {
		constexpr auto PSTemplate = 0x30; // UParticleSystem*
		constexpr auto SocketName = 0x38; // FName
		constexpr auto LocationOffset = 0x40; // FVector
		constexpr auto RotationOffset = 0x4c; // FRotator
		constexpr auto bDestroyAtEnd = 0x58; // bool
	}

	namespace n_UBTTask_RotateToFaceBBEntry {
		constexpr auto Precision = 0x98; // float
	}

	namespace n_UBehaviorTreeComponent {
		constexpr auto NodeInstances = 0x128; // TArray<UBTNode*>
		constexpr auto DefaultBehaviorTreeAsset = 0x278; // UBehaviorTree*
	}

	namespace n_UPaperTileLayer {
		constexpr auto LayerName = 0x28; // FText
		constexpr auto LayerWidth = 0x40; // int32_t
		constexpr auto LayerHeight = 0x44; // int32_t
		constexpr auto bHiddenInGame = 0x48; // char : 1
		constexpr auto bLayerCollides = 0x48; // char : 1
		constexpr auto bOverrideCollisionThickness = 0x48; // char : 1
		constexpr auto bOverrideCollisionOffset = 0x48; // char : 1
		constexpr auto CollisionThicknessOverride = 0x4c; // float
		constexpr auto CollisionOffsetOverride = 0x50; // float
		constexpr auto LayerColor = 0x54; // FLinearColor
		constexpr auto AllocatedWidth = 0x64; // int32_t
		constexpr auto AllocatedHeight = 0x68; // int32_t
		constexpr auto AllocatedCells = 0x70; // TArray<FPaperTileInfo>
		constexpr auto TileSet = 0x80; // UPaperTileSet*
		constexpr auto AllocatedGrid = 0x88; // TArray<int32_t>
	}

	namespace n_UGameplayTask_SpawnActor {
		constexpr auto success = 0x68; // FMulticastInlineDelegate
		constexpr auto DidNotSpawn = 0x78; // FMulticastInlineDelegate
		constexpr auto ClassToSpawn = 0xa0; // AActor*
	}

	namespace n_UMovieSceneCompiledData {
		constexpr auto EvaluationTemplate = 0x28; // FMovieSceneEvaluationTemplate
		constexpr auto Hierarchy = 0x188; // FMovieSceneSequenceHierarchy
		constexpr auto EntityComponentField = 0x2a0; // FMovieSceneEntityComponentField
		constexpr auto TrackTemplateField = 0x390; // FMovieSceneEvaluationField
		constexpr auto DeterminismFences = 0x3c0; // TArray<FFrameTime>
		constexpr auto CompiledSignature = 0x3d0; // FGuid
		constexpr auto CompilerVersion = 0x3e0; // FGuid
		constexpr auto AccumulatedMask = 0x3f0; // FMovieSceneSequenceCompilerMaskStruct
		constexpr auto AllocatedMask = 0x3f1; // FMovieSceneSequenceCompilerMaskStruct
		constexpr auto AccumulatedFlags = 0x3f2; // EMovieSceneSequenceFlags
	}

	namespace n_UInterpData {
		constexpr auto InterpLength = 0x28; // float
		constexpr auto PathBuildTime = 0x2c; // float
		constexpr auto InterpGroups = 0x30; // TArray<UInterpGroup*>
		constexpr auto CurveEdSetup = 0x40; // UInterpCurveEdSetup*
		constexpr auto EdSectionStart = 0x48; // float
		constexpr auto EdSectionEnd = 0x4c; // float
		constexpr auto bShouldBakeAndPrune = 0x50; // char : 1
		constexpr auto CachedDirectorGroup = 0x58; // UInterpGroupDirector*
		constexpr auto AllEventNames = 0x60; // TArray<FName>
	}

	namespace n_USFPSAI_TSwitchFromPeace {
		constexpr auto bForceSimpleCover = 0x70; // bool
	}

	namespace n_UAssetManagerSettings {
		constexpr auto PrimaryAssetTypesToScan = 0x38; // TArray<FPrimaryAssetTypeInfo>
		constexpr auto DirectoriesToExclude = 0x48; // TArray<FDirectoryPath>
		constexpr auto PrimaryAssetRules = 0x58; // TArray<FPrimaryAssetRulesOverride>
		constexpr auto CustomPrimaryAssetRules = 0x68; // TArray<FPrimaryAssetRulesCustomOverride>
		constexpr auto bOnlyCookProductionAssets = 0x78; // bool
		constexpr auto bShouldManagerDetermineTypeAndName = 0x79; // bool
		constexpr auto bShouldGuessTypeAndNameInEditor = 0x7a; // bool
		constexpr auto bShouldAcquireMissingChunksOnLoad = 0x7b; // bool
		constexpr auto PrimaryAssetIdRedirects = 0x80; // TArray<FAssetManagerRedirect>
		constexpr auto PrimaryAssetTypeRedirects = 0x90; // TArray<FAssetManagerRedirect>
		constexpr auto AssetPathRedirects = 0xa0; // TArray<FAssetManagerRedirect>
		constexpr auto MetaDataTagsForAssetRegistry = 0xb0; // TSet<FName>
	}

	namespace n_UNavLinkDefinition {
		constexpr auto Links = 0x28; // TArray<FNavigationLink>
		constexpr auto SegmentLinks = 0x38; // TArray<FNavigationSegmentLink>
	}

	namespace n_UEnvQueryGenerator_BlueprintBase {
		constexpr auto GeneratorsActionDescription = 0x50; // FText
		constexpr auto Context = 0x68; // UEnvQueryContext*
		constexpr auto GeneratedItemType = 0x70; // UEnvQueryItemType*
	}

	namespace n_UAISenseEvent_Hearing {
		constexpr auto Event = 0x28; // FAINoiseEvent
	}

	namespace n_UComboButtonWidgetStyle {
		constexpr auto ComboButtonStyle = 0x30; // FComboButtonStyle
	}

	namespace n_UMaterialExpressionMakeMaterialAttributes {
		constexpr auto BaseColor = 0x40; // FExpressionInput
		constexpr auto Metallic = 0x54; // FExpressionInput
		constexpr auto Specular = 0x68; // FExpressionInput
		constexpr auto Roughness = 0x7c; // FExpressionInput
		constexpr auto Anisotropy = 0x90; // FExpressionInput
		constexpr auto EmissiveColor = 0xa4; // FExpressionInput
		constexpr auto Opacity = 0xb8; // FExpressionInput
		constexpr auto OpacityMask = 0xcc; // FExpressionInput
		constexpr auto Normal = 0xe0; // FExpressionInput
		constexpr auto Tangent = 0xf4; // FExpressionInput
		constexpr auto WorldPositionOffset = 0x108; // FExpressionInput
		constexpr auto WorldDisplacement = 0x11c; // FExpressionInput
		constexpr auto TessellationMultiplier = 0x130; // FExpressionInput
		constexpr auto SubsurfaceColor = 0x144; // FExpressionInput
		constexpr auto ClearCoat = 0x158; // FExpressionInput
		constexpr auto ClearCoatRoughness = 0x16c; // FExpressionInput
		constexpr auto AmbientOcclusion = 0x180; // FExpressionInput
		constexpr auto Refraction = 0x194; // FExpressionInput
		constexpr auto CustomizedUVs = 0x1a8; // FExpressionInput [0x8]
		constexpr auto PixelDepthOffset = 0x248; // FExpressionInput
		constexpr auto ShadingModel = 0x25c; // FExpressionInput
	}

	namespace n_UTimelineTemplate {
		constexpr auto TimelineLength = 0x28; // float
		constexpr auto LengthMode = 0x2c; // ETimelineLengthMode
		constexpr auto bAutoPlay = 0x2d; // char : 1
		constexpr auto bLoop = 0x2d; // char : 1
		constexpr auto bReplicated = 0x2d; // char : 1
		constexpr auto bIgnoreTimeDilation = 0x2d; // char : 1
		constexpr auto EventTracks = 0x30; // TArray<FTTEventTrack>
		constexpr auto FloatTracks = 0x40; // TArray<FTTFloatTrack>
		constexpr auto VectorTracks = 0x50; // TArray<FTTVectorTrack>
		constexpr auto LinearColorTracks = 0x60; // TArray<FTTLinearColorTrack>
		constexpr auto MetaDataArray = 0x70; // TArray<FBPVariableMetaDataEntry>
		constexpr auto TimelineGuid = 0x80; // FGuid
		constexpr auto TimelineTickGroup = 0x90; // ETickingGroup
		constexpr auto VariableName = 0x94; // FName
		constexpr auto DirectionPropertyName = 0x9c; // FName
		constexpr auto UpdateFunctionName = 0xa4; // FName
		constexpr auto FinishedFunctionName = 0xac; // FName
	}

	namespace n_USoundGroups {
		constexpr auto SoundGroupProfiles = 0x28; // TArray<FSoundGroup>
	}

	namespace n_UAtmosphericFogComponent {
		constexpr auto SunMultiplier = 0x1f8; // float
		constexpr auto FogMultiplier = 0x1fc; // float
		constexpr auto DensityMultiplier = 0x200; // float
		constexpr auto DensityOffset = 0x204; // float
		constexpr auto DistanceScale = 0x208; // float
		constexpr auto AltitudeScale = 0x20c; // float
		constexpr auto DistanceOffset = 0x210; // float
		constexpr auto GroundOffset = 0x214; // float
		constexpr auto StartDistance = 0x218; // float
		constexpr auto SunDiscScale = 0x21c; // float
		constexpr auto DefaultBrightness = 0x220; // float
		constexpr auto DefaultLightColor = 0x224; // FColor
		constexpr auto bDisableSunDisk = 0x228; // char : 1
		constexpr auto bAtmosphereAffectsSunIlluminance = 0x228; // char : 1
		constexpr auto bDisableGroundScattering = 0x228; // char : 1
		constexpr auto PrecomputeParams = 0x22c; // FAtmospherePrecomputeParameters
		constexpr auto TransmittanceTexture = 0x258; // UTexture2D*
		constexpr auto IrradianceTexture = 0x260; // UTexture2D*
	}

	namespace n_UPhysicsSettings {
		constexpr auto PhysicErrorCorrection = 0xe0; // FRigidBodyErrorCorrection
		constexpr auto LockedAxis = 0x114; // ESettingsLockedAxis
		constexpr auto DefaultDegreesOfFreedom = 0x115; // ESettingsDOF
		constexpr auto bSuppressFaceRemapTable = 0x116; // bool
		constexpr auto bSupportUVFromHitResults = 0x117; // bool
		constexpr auto bDisableActiveActors = 0x118; // bool
		constexpr auto bDisableKinematicStaticPairs = 0x119; // bool
		constexpr auto bDisableKinematicKinematicPairs = 0x11a; // bool
		constexpr auto bDisableCCD = 0x11b; // bool
		constexpr auto bEnableEnhancedDeterminism = 0x11c; // bool
		constexpr auto AnimPhysicsMinDeltaTime = 0x120; // float
		constexpr auto bSimulateAnimPhysicsAfterReset = 0x124; // bool
		constexpr auto MaxPhysicsDeltaTime = 0x128; // float
		constexpr auto bSubstepping = 0x12c; // bool
		constexpr auto bSubsteppingAsync = 0x12d; // bool
		constexpr auto MaxSubstepDeltaTime = 0x130; // float
		constexpr auto MaxSubsteps = 0x134; // int32_t
		constexpr auto SyncSceneSmoothingFactor = 0x138; // float
		constexpr auto InitialAverageFrameRate = 0x13c; // float
		constexpr auto PhysXTreeRebuildRate = 0x140; // int32_t
		constexpr auto PhysicalSurfaces = 0x148; // TArray<FPhysicalSurfaceName>
		constexpr auto DefaultBroadphaseSettings = 0x158; // FBroadphaseSettings
		constexpr auto MinDeltaVelocityForHitEvents = 0x198; // float
		constexpr auto ChaosSettings = 0x19c; // FChaosPhysicsSettings
	}

	namespace n_UAISense_Prediction {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAIPredictionEvent>
	}

	namespace n_UParticleModuleSpawnBase {
		constexpr auto bProcessSpawnRate = 0x30; // char : 1
		constexpr auto bProcessBurstList = 0x30; // char : 1
	}

	namespace n_ASFPSPlayerState {
		constexpr auto LoginData = 0x320; // FSFPSLoginData
	}

	namespace n_UMaterialExpressionHairColor {
		constexpr auto Melanin = 0x40; // FExpressionInput
		constexpr auto Redness = 0x54; // FExpressionInput
		constexpr auto DyeColor = 0x68; // FExpressionInput
	}

	namespace n_ABM_FloorTria_02_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UMaterialExpressionReflectionCapturePassSwitch {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Reflection = 0x54; // FExpressionInput
	}

	namespace n_USizeBox {
		constexpr auto WidthOverride = 0x130; // float
		constexpr auto HeightOverride = 0x134; // float
		constexpr auto MinDesiredWidth = 0x138; // float
		constexpr auto MinDesiredHeight = 0x13c; // float
		constexpr auto MaxDesiredWidth = 0x140; // float
		constexpr auto MaxDesiredHeight = 0x144; // float
		constexpr auto MinAspectRatio = 0x148; // float
		constexpr auto MaxAspectRatio = 0x14c; // float
		constexpr auto bOverride_WidthOverride = 0x150; // char : 1
		constexpr auto bOverride_HeightOverride = 0x150; // char : 1
		constexpr auto bOverride_MinDesiredWidth = 0x150; // char : 1
		constexpr auto bOverride_MinDesiredHeight = 0x150; // char : 1
		constexpr auto bOverride_MaxDesiredWidth = 0x150; // char : 1
		constexpr auto bOverride_MaxDesiredHeight = 0x150; // char : 1
		constexpr auto bOverride_MinAspectRatio = 0x150; // char : 1
		constexpr auto bOverride_MaxAspectRatio = 0x150; // char : 1
	}

	namespace n_UMovieSceneEasingExternalCurve {
		constexpr auto Curve = 0x30; // UCurveFloat*
	}

	namespace n_UCheckBoxStyleAsset {
		constexpr auto CheckBoxStyle = 0x28; // FCheckBoxStyle
	}

	namespace n_AM_Campfire_01_C {
		constexpr auto ParticleSystem = 0x358; // UParticleSystemComponent*
		constexpr auto BigLight = 0x360; // UPointLightComponent*
		constexpr auto RedLight = 0x368; // UPointLightComponent*
		constexpr auto SFPSACBaseCollision1 = 0x370; // USFPSACBaseCollision*
	}

	namespace n_UMaterialExpressionTransform {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto TransformSourceType = 0x54; // EMaterialVectorCoordTransformSource
		constexpr auto TransformType = 0x55; // EMaterialVectorCoordTransform
	}

	namespace n_UDeviceProfileManager {
		constexpr auto Profiles = 0x28; // TArray<UObject*>
	}

	namespace n_USphereComponent {
		constexpr auto SphereRadius = 0x468; // float
	}

	namespace n_USoundSubmixBase {
		constexpr auto ChildSubmixes = 0x28; // TArray<USoundSubmixBase*>
	}

	namespace n_UfrmPopupMenu_C {
		constexpr auto imgBackgroun1 = 0x260; // UImage*
		constexpr auto imgBackgroun2 = 0x268; // UImage*
		constexpr auto imgBackgroun3 = 0x270; // UImage*
		constexpr auto imgBackgroun4 = 0x278; // UImage*
		constexpr auto imgBackgroun5 = 0x280; // UImage*
		constexpr auto imgBackgroun6 = 0x288; // UImage*
		constexpr auto imgBackgroun7 = 0x290; // UImage*
		constexpr auto imgBackgroun8 = 0x298; // UImage*
		constexpr auto pnBackGround = 0x2a0; // UCanvasPanel*
	}

	namespace n_ADecalActor {
		constexpr auto Decal = 0x220; // UDecalComponent*
	}

	namespace n_UParticleModuleEventReceiverKillParticles {
		constexpr auto bStopSpawning = 0x40; // char : 1
	}

	namespace n_UQuartzClockHandle {
		constexpr auto QuartzSubsystem = 0x168; // UQuartzSubsystem*
		constexpr auto WorldPtr = 0x188; // UWorld*
	}

	namespace n_AARSharedWorldGameState {
		constexpr auto PreviewImageData = 0x290; // TArray<char>
		constexpr auto ARWorldData = 0x2a0; // TArray<char>
		constexpr auto PreviewImageBytesTotal = 0x2b0; // int32_t
		constexpr auto ARWorldBytesTotal = 0x2b4; // int32_t
		constexpr auto PreviewImageBytesDelivered = 0x2b8; // int32_t
		constexpr auto ARWorldBytesDelivered = 0x2bc; // int32_t
	}

	namespace n_USceneCaptureComponent2D {
		constexpr auto ProjectionType = 0x2b0; // ECameraProjectionMode
		constexpr auto FOVAngle = 0x2b4; // float
		constexpr auto OrthoWidth = 0x2b8; // float
		constexpr auto TextureTarget = 0x2c0; // UTextureRenderTarget2D*
		constexpr auto CompositeMode = 0x2c8; // ESceneCaptureCompositeMode
		constexpr auto PostProcessSettings = 0x2d0; // FPostProcessSettings
		constexpr auto PostProcessBlendWeight = 0x830; // float
		constexpr auto bOverride_CustomNearClippingPlane = 0x834; // char : 1
		constexpr auto CustomNearClippingPlane = 0x838; // float
		constexpr auto bUseCustomProjectionMatrix = 0x83c; // bool
		constexpr auto CustomProjectionMatrix = 0x840; // FMatrix
		constexpr auto bEnableClipPlane = 0x880; // bool
		constexpr auto ClipPlaneBase = 0x884; // FVector
		constexpr auto ClipPlaneNormal = 0x890; // FVector
		constexpr auto bCameraCutThisFrame = 0x89c; // char : 1
		constexpr auto bConsiderUnrenderedOpaquePixelAsFullyTranslucent = 0x89c; // char : 1
		constexpr auto bDisableFlipCopyGLES = 0x8a0; // bool
	}

	namespace n_UVariantSet {
		constexpr auto DisplayText = 0x28; // FText
		constexpr auto bExpanded = 0x58; // bool
		constexpr auto Variants = 0x60; // TArray<UVariant*>
		constexpr auto Thumbnail = 0x70; // UTexture2D*
	}

	namespace n_UARTrackedImage {
		constexpr auto DetectedImage = 0xf8; // UARCandidateImage*
		constexpr auto EstimatedSize = 0x100; // FVector2D
	}

	namespace n_Arecoveryitem_medikit_painkillers_C {
		constexpr auto Timer = 0x420; // float
	}

	namespace n_UMovieSceneFloatSection {
		constexpr auto FloatCurve = 0xf0; // FMovieSceneFloatChannel
	}

	namespace n_URectLightComponent {
		constexpr auto SourceWidth = 0x340; // float
		constexpr auto SourceHeight = 0x344; // float
		constexpr auto BarnDoorAngle = 0x348; // float
		constexpr auto BarnDoorLength = 0x34c; // float
		constexpr auto SourceTexture = 0x350; // UTexture*
	}

	namespace n_UfrmAdminPanelItem_C {
		constexpr auto btnAction0 = 0x310; // UButton*
		constexpr auto btnAction1 = 0x318; // UButton*
	}

	namespace n_UMaterialExpressionCollectionParameter {
		constexpr auto Collection = 0x40; // UMaterialParameterCollection*
		constexpr auto ParameterName = 0x48; // FName
		constexpr auto ParameterId = 0x50; // FGuid
	}

	namespace n_UMapBuildDataRegistry {
		constexpr auto LevelLightingQuality = 0x28; // ELightingBuildQuality
	}

	namespace n_UNavRelevantComponent {
		constexpr auto bAttachToOwnersRoot = 0xd4; // char : 1
		constexpr auto CachedNavParent = 0xd8; // UObject*
	}

	namespace n_UButtonWidgetStyle {
		constexpr auto ButtonStyle = 0x30; // FButtonStyle
	}

	namespace n_UMovieSceneParticleSection {
		constexpr auto ParticleKeys = 0xe8; // FMovieSceneParticleChannel
	}

	namespace n_UStaticMesh {
		constexpr auto MinLOD = 0x80; // FPerPlatformInt
		constexpr auto LpvBiasMultiplier = 0x84; // float
		constexpr auto StaticMaterials = 0x88; // TArray<FStaticMaterial>
		constexpr auto LightmapUVDensity = 0x98; // float
		constexpr auto LightMapResolution = 0x9c; // int32_t
		constexpr auto LightMapCoordinateIndex = 0xa0; // int32_t
		constexpr auto DistanceFieldSelfShadowBias = 0xa4; // float
		constexpr auto BodySetup = 0xa8; // UBodySetup*
		constexpr auto LODForCollision = 0xb0; // int32_t
		constexpr auto bGenerateMeshDistanceField = 0xb4; // char : 1
		constexpr auto bStripComplexCollisionForConsole = 0xb4; // char : 1
		constexpr auto bHasNavigationData = 0xb4; // char : 1
		constexpr auto bSupportUniformlyDistributedSampling = 0xb4; // char : 1
		constexpr auto bSupportPhysicalMaterialMasks = 0xb4; // char : 1
		constexpr auto bSupportRayTracing = 0xb4; // char : 1
		constexpr auto bIsBuiltAtRuntime = 0xb4; // char : 1
		constexpr auto bAllowCPUAccess = 0xb5; // char : 1
		constexpr auto bSupportGpuUniformlyDistributedSampling = 0xb5; // char : 1
		constexpr auto Sockets = 0xd8; // TArray<UStaticMeshSocket*>
		constexpr auto PositiveBoundsExtension = 0xf8; // FVector
		constexpr auto NegativeBoundsExtension = 0x104; // FVector
		constexpr auto ExtendedBounds = 0x110; // FBoxSphereBounds
		constexpr auto ElementToIgnoreForTexFactor = 0x12c; // int32_t
		constexpr auto AssetUserData = 0x130; // TArray<UAssetUserData*>
		constexpr auto EditableMesh = 0x140; // UObject*
		constexpr auto NavCollision = 0x148; // UNavCollisionBase*
	}

	namespace n_UAISenseConfig_Sight {
		constexpr auto Implementation = 0x48; // UAISense_Sight*
		constexpr auto SightRadius = 0x50; // float
		constexpr auto LoseSightRadius = 0x54; // float
		constexpr auto PeripheralVisionAngleDegrees = 0x58; // float
		constexpr auto DetectionByAffiliation = 0x5c; // FAISenseAffiliationFilter
		constexpr auto AutoSuccessRangeFromLastSeenLocation = 0x60; // float
		constexpr auto PointOfViewBackwardOffset = 0x64; // float
		constexpr auto NearClippingRadius = 0x68; // float
	}

	namespace n_UTestMovieSceneSubTrack {
		constexpr auto SectionArray = 0xa0; // TArray<UMovieSceneSection*>
	}

	namespace n_USFPSACStair {
		constexpr auto Steps = 0xc8; // TArray<UArrowComponent*>
		constexpr auto bBusy = 0xd8; // bool
		constexpr auto StairPhysicalMaterial = 0xe0; // USFPSPhysicalMaterial*
	}

	namespace n_UEditableTextBoxWidgetStyle {
		constexpr auto EditableTextBoxStyle = 0x30; // FEditableTextBoxStyle
	}

	namespace n_UBTComposite_SimpleParallel {
		constexpr auto FinishMode = 0x90; // EBTParallelMode
	}

	namespace n_Aweapmf_DTK_556x45_03_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UParticleModuleRotationRate {
		constexpr auto StartRotationRate = 0x30; // FRawDistributionFloat
	}

	namespace n_USFPSAdminHandler {
		constexpr auto CurrentDeathLog = 0x620; // TArray<FString>
		constexpr auto FormAdmin = 0x660; // UUserWidget*
		constexpr auto frmPlayer = 0x668; // USFPSUserWidget_AdminPanel_Player*
		constexpr auto frmItemsGroup = 0x670; // USFPSUserWidget_CraftRolloutMan*
		constexpr auto frmItemsPanel = 0x678; // USFPSUserWidget_TraderItem*
		constexpr auto frmDeathLog = 0x680; // USFPSUserWidget_AdminPanel_DeathL*
		constexpr auto frmStartKitPanel = 0x688; // USFPSUserWidget_TraderItem*
		constexpr auto bVisible = 0x690; // bool
	}

	namespace n_UParticleModuleSizeScale {
		constexpr auto SizeScale = 0x30; // FRawDistributionVector
		constexpr auto EnableX = 0x78; // char : 1
		constexpr auto EnableY = 0x78; // char : 1
		constexpr auto EnableZ = 0x78; // char : 1
	}

	namespace n_UEditableMesh {
		constexpr auto Adapters = 0x3b8; // TArray<UEditableMeshAdapter*>
		constexpr auto TextureCoordinateCount = 0x3d0; // int32_t
		constexpr auto PendingCompactCounter = 0x51c; // int32_t
		constexpr auto SubdivisionCount = 0x520; // int32_t
	}

	namespace n_UFormDlg_OkCancel_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnCancel = 0x268; // UButton*
		constexpr auto btnOk = 0x270; // UButton*
		constexpr auto lbCancel = 0x278; // UTextBlock*
		constexpr auto lbOk = 0x280; // UTextBlock*
	}

	namespace n_UThrobber {
		constexpr auto NumberOfPieces = 0x108; // int32_t
		constexpr auto bAnimateHorizontally = 0x10c; // bool
		constexpr auto bAnimateVertically = 0x10d; // bool
		constexpr auto bAnimateOpacity = 0x10e; // bool
		constexpr auto PieceImage = 0x110; // USlateBrushAsset*
		constexpr auto Image = 0x118; // FSlateBrush
	}

	namespace n_UProceduralFoliageComponent {
		constexpr auto FoliageSpawner = 0xb0; // UProceduralFoliageSpawner*
		constexpr auto TileOverlap = 0xb8; // float
		constexpr auto SpawningVolume = 0xc0; // AVolume*
		constexpr auto ProceduralGuid = 0xc8; // FGuid
	}

	namespace n_USFPSBaseWeaponAnimInstance {
		constexpr auto Weapon = 0x2b8; // ASFPSWeapon*
		constexpr auto AnimInstanceType = 0x2c0; // ESFPSWeaponAnimInstanceType
		constexpr auto SmallArmsStateForAnim = 0x2c1; // ESFPSSmallArmsStateForAnim
		constexpr auto FireMode = 0x2c4; // int32_t
		constexpr auto AmmoCount = 0x2c8; // int32_t
		constexpr auto MaxAmmo = 0x2cc; // int32_t
		constexpr auto AmmoCountAfterLoad = 0x2d0; // int32_t
	}

	namespace n_UInterpTrackMoveAxis {
		constexpr auto MoveAxis = 0x90; // EInterpMoveAxis
		constexpr auto LookupTrack = 0x98; // FInterpLookupTrack
	}

	namespace n_UMaterialInstanceConstant {
		constexpr auto PhysMaterialMask = 0x310; // UPhysicalMaterialMask*
	}

	namespace n_UMovieSceneEnumTrack {
		constexpr auto Enum = 0xc0; // UEnum*
	}

	namespace n_UModulatorContOuterParams {
		constexpr auto ParameterName = 0x28; // FName
		constexpr auto Default = 0x30; // float
		constexpr auto MinInput = 0x34; // float
		constexpr auto MaxInput = 0x38; // float
		constexpr auto MinOutput = 0x3c; // float
		constexpr auto MaxOutput = 0x40; // float
		constexpr auto ParamMode = 0x44; // ModulationParamMode
	}

	namespace n_UVirtualTexture2D {
		constexpr auto Settings = 0x1a0; // FVirtualTextureBuildSettings
		constexpr auto bContinuousUpdate = 0x1ac; // bool
		constexpr auto bSinglePhysicalSpace = 0x1ad; // bool
	}

	namespace n_ABM_WallDoor_lock_01_C {
		constexpr auto Base_lock_02 = 0x380; // UStaticMeshComponent*
		constexpr auto Base_lock_01 = 0x388; // UStaticMeshComponent*
	}

	namespace n_UDatasmithSkyLightComponentTemplate {
		constexpr auto SourceType = 0x30; // ESkyLightSourceType
		constexpr auto CubemapResolution = 0x34; // int32_t
		constexpr auto Cubemap = 0x38; // UTextureCube*
	}

	namespace n_UUniformGridSlot {
		constexpr auto HorizontalAlignment = 0x38; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x39; // EVerticalAlignment
		constexpr auto Row = 0x3c; // int32_t
		constexpr auto Column = 0x40; // int32_t
	}

	namespace n_At_Equipment_WithoutInventory_C {
		constexpr auto Mesh = 0x3a8; // UStaticMeshComponent*
		constexpr auto Trace = 0x3b0; // UBoxComponent*
	}

	namespace n_UBTTask_BlueprintBase {
		constexpr auto AIOwner = 0x70; // AAIController*
		constexpr auto ActorOwner = 0x78; // AActor*
		constexpr auto TickInterval = 0x80; // FIntervalCountdown
		constexpr auto bShowPropertyDetails = 0xa0; // char : 1
	}

	namespace n_Aweapmf_DTK_556x45_02_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_ARespawnActor_C {
		constexpr auto DefaultSceneRoot = 0x220; // USceneComponent*
	}

	namespace n_UfrmPopupMenuItem_C {
		constexpr auto imgSeparator = 0x290; // UImage*
	}

	namespace n_UTireType {
		constexpr auto FrictionScale = 0x30; // float
	}

	namespace n_UMaterialParameterCollection {
		constexpr auto StateId = 0x28; // FGuid
		constexpr auto ScalarParameters = 0x38; // TArray<FCollectionScalarParameter>
		constexpr auto VectorParameters = 0x48; // TArray<FCollectionVectorParameter>
	}

	namespace n_UUniformInteger {
		constexpr auto Magnitude = 0xb0; // int32_t
	}

	namespace n_AVectorFieldVolume {
		constexpr auto VectorFieldComponent = 0x220; // UVectorFieldComponent*
	}

	namespace n_USynthComponentToneGenerator {
		constexpr auto Frequency = 0x6c0; // float
		constexpr auto Volume = 0x6c4; // float
	}

	namespace n_USFPSUserWidget_AdminPanel_Player {
		constexpr auto OnSelectEvent = 0x2a0; // FDelegate
	}

	namespace n_UPropertyBinding {
		constexpr auto SourceObject = 0x28; // TWeakObjectPtr<UObject>
		constexpr auto SourcePath = 0x30; // FDynamicPropertyPath
		constexpr auto DestinationProperty = 0x58; // FName
	}

	namespace n_UCurveLinearColor {
		constexpr auto FloatCurves = 0x30; // FRichCurve [0x4]
		constexpr auto AdjustHue = 0x230; // float
		constexpr auto AdjustSaturation = 0x234; // float
		constexpr auto AdjustBrightness = 0x238; // float
		constexpr auto AdjustBrightnessCurve = 0x23c; // float
		constexpr auto AdjustVibrance = 0x240; // float
		constexpr auto AdjustMinAlpha = 0x244; // float
		constexpr auto AdjustMaxAlpha = 0x248; // float
	}

	namespace n_UMaterialExpressionDistanceToNearestSurface {
		constexpr auto Position = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionArcsineFast {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UABP_weapon_firearms_gun_PM_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_6 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_5 = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_4 = 0x3b0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_3 = 0x3d8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x400; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x428; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_3 = 0x450; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_3 = 0x4d0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x500; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x580; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x5b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x630; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x660; // FAnimNode_StateMachine
	}

	namespace n_UfrmRadialMenu_C {
		constexpr auto UberGraphFrame = 0x270; // FPointerToUberGraphFrame
		constexpr auto rmMotions_Start = 0x278; // UUMG_RadialMenu_C*
	}

	namespace n_USFPSAI_SSetRandomFocusPoint {
		constexpr auto MaxAngle = 0x70; // float
	}

	namespace n_ASceneCapture2D {
		constexpr auto CaptureComponent2D = 0x230; // USceneCaptureComponent2D*
	}

	namespace n_UOverlaySlot {
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto HorizontalAlignment = 0x50; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x51; // EVerticalAlignment
	}

	namespace n_USynthComponentMonoWaveTable {
		constexpr auto OnTableAltered = 0x6c0; // FMulticastInlineDelegate
		constexpr auto OnNumTablesChanged = 0x6d0; // FMulticastInlineDelegate
		constexpr auto CurrentPreset = 0x6e0; // UMonoWaveTableSynthPreset*
	}

	namespace n_UInAppPurchaseRestoreCallbackProxy2 {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_ALevelScriptActor {
		constexpr auto bInputEnabled = 0x220; // char : 1
	}

	namespace n_URadialVector {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto Position = 0xb4; // FVector
	}

	namespace n_UModelComponent {
		constexpr auto ModelBodySetup = 0x468; // UBodySetup*
	}

	namespace n_UMovieSceneCinematicShotSection {
		constexpr auto ShotDisplayName = 0x168; // FString
		constexpr auto DisplayName = 0x178; // FText
	}

	namespace n_At_Device_C {
		constexpr auto Trace = 0x490; // UBoxComponent*
		constexpr auto Mesh = 0x498; // UStaticMeshComponent*
	}

	namespace n_UABP_weapon_firearms_rifle_groza_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_SequencePlayer = 0x360; // FAnimNode_SequencePlayer
	}

	namespace n_USoundMix {
		constexpr auto bApplyEQ = 0x28; // char : 1
		constexpr auto EQPriority = 0x2c; // float
		constexpr auto EQSettings = 0x30; // FAudioEQEffect
		constexpr auto SoundClassEffects = 0x70; // TArray<FSoundClassAdjuster>
		constexpr auto InitialDelay = 0x80; // float
		constexpr auto FadeInTime = 0x84; // float
		constexpr auto Duration = 0x88; // float
		constexpr auto FadeOutTime = 0x8c; // float
	}

	namespace n_UPawnActionsComponent {
		constexpr auto ControlledPawn = 0xb0; // APawn*
		constexpr auto ActionStacks = 0xb8; // TArray<FPawnActionStack>
		constexpr auto ActionEvents = 0xc8; // TArray<FPawnActionEvent>
		constexpr auto CurrentAction = 0xd8; // UPawnAction*
	}

	namespace n_USourceEffectDynamicsProcessorPreset {
		constexpr auto Settings = 0xb8; // FSourceEffectDynamicsProcessorSettings
	}

	namespace n_UTireConfig {
		constexpr auto FrictionScale = 0x30; // float
		constexpr auto TireFrictionScales = 0x38; // TArray<FTireConfigMaterialFriction>
	}

	namespace n_UScrollBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_UTreeView {
		constexpr auto BP_OnGetItemChildren = 0x378; // FDelegate
		constexpr auto BP_OnItemExpansionChanged = 0x388; // FMulticastInlineDelegate
	}

	namespace n_ASpectatorBeaconClient {
		constexpr auto DestSessionId = 0x2e0; // FString
		constexpr auto PendingReservation = 0x2f0; // FSpectatorReservation
		constexpr auto RequestType = 0x368; // ESpectatorClientRequestType
		constexpr auto bPendingReservationSent = 0x369; // bool
		constexpr auto bCancelReservation = 0x36a; // bool
	}

	namespace n_UBTService {
		constexpr auto Interval = 0x60; // float
		constexpr auto RandomDeviation = 0x64; // float
		constexpr auto bCallTickOnSearchStart = 0x68; // char : 1
		constexpr auto bRestartTimerOnEachActivation = 0x68; // char : 1
	}

	namespace n_UInterpTrackInstFloatProp {
		constexpr auto ResetFloat = 0x58; // float
	}

	namespace n_ABM_FloorSmall_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UFileMediaSource {
		constexpr auto FilePath = 0x88; // FString
		constexpr auto PrecacheFile = 0x98; // bool
	}

	namespace n_UBrushBaseProperties {
		constexpr auto BrushSize = 0x60; // float
		constexpr auto bSpecifyRadius = 0x64; // bool
		constexpr auto BrushRadius = 0x68; // float
		constexpr auto BrushStrength = 0x6c; // float
		constexpr auto BrushFalloffAmount = 0x70; // float
		constexpr auto bShowStrength = 0x74; // bool
		constexpr auto bShowFalloff = 0x75; // bool
	}

	namespace n_Aweapon_firearms_snip_mosin_long_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto ShellMagazine = 0x7e8; // UStaticMeshComponent*
		constexpr auto ShellBarrelEmpty = 0x7f0; // UStaticMeshComponent*
		constexpr auto ShellBarrelFull = 0x7f8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x800; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x808; // USFPSACWeaponMFInventory*
	}

	namespace n_UParticleModuleEventGenerator {
		constexpr auto Events = 0x30; // TArray<FParticleEvent_GenerateInfo>
	}

	namespace n_UFormDlg_TimerInf_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto imgBackground = 0x268; // UImage*
		constexpr auto imgProrgess = 0x270; // UImage*
		constexpr auto Progress = 0x278; // UMaterialInstanceDynamic*
	}

	namespace n_UMaterialExpressionOneMinus {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionCustom {
		constexpr auto code = 0x40; // FString
		constexpr auto OutputType = 0x50; // ECustomMaterialOutputType
		constexpr auto Description = 0x58; // FString
		constexpr auto Inputs = 0x68; // TArray<FCustomInput>
		constexpr auto AdditionalOutputs = 0x78; // TArray<FCustomOutput>
		constexpr auto AdditionalDefines = 0x88; // TArray<FCustomDefine>
		constexpr auto IncludeFilePaths = 0x98; // TArray<FString>
	}

	namespace n_UUdpMessagingSettings {
		constexpr auto EnabledByDefault = 0x28; // bool
		constexpr auto EnableTransport = 0x29; // bool
		constexpr auto bAutoRepair = 0x2a; // bool
		constexpr auto MaxSendRate = 0x2c; // float
		constexpr auto AutoRepairAttemptLimit = 0x30; // uint32_t
		constexpr auto bStopServiceWhenAppDeactivates = 0x34; // bool
		constexpr auto UnicastEndpoint = 0x38; // FString
		constexpr auto MulticastEndpoint = 0x48; // FString
		constexpr auto MessageFormat = 0x58; // EUdpMessageFormat
		constexpr auto MulticastTimeToLive = 0x59; // char
		constexpr auto StaticEndpoints = 0x60; // TArray<FString>
		constexpr auto EnableTunnel = 0x70; // bool
		constexpr auto TunnelUnicastEndpoint = 0x78; // FString
		constexpr auto TunnelMulticastEndpoint = 0x88; // FString
		constexpr auto RemoteTunnelEndpoints = 0x98; // TArray<FString>
	}

	namespace n_UABP_weapon_firearms_sg_mp133_C {
		constexpr auto UberGraphFrame = 0x310; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x318; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x348; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x3c8; // FAnimNode_Slot
	}

	namespace n_UParticleModuleAccelerationBase {
		constexpr auto bAlwaysInWorldSpace = 0x30; // char : 1
	}

	namespace n_UARObjectComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARObjectUpdatePayload
	}

	namespace n_UMovieSceneFolder {
		constexpr auto FolderName = 0x28; // FName
		constexpr auto ChildFolders = 0x30; // TArray<UMovieSceneFolder*>
		constexpr auto ChildMasterTracks = 0x40; // TArray<UMovieSceneTrack*>
		constexpr auto ChildObjectBindingStrings = 0x50; // TArray<FString>
	}

	namespace n_USlateWidgetStyleAsset {
		constexpr auto CustomStyle = 0x28; // USlateWidgetStyleContainerBase*
	}

	namespace n_UCableComponent {
		constexpr auto bAttachStart = 0x478; // bool
		constexpr auto bAttachEnd = 0x479; // bool
		constexpr auto AttachEndTo = 0x480; // FComponentReference
		constexpr auto AttachEndToSocketName = 0x4a8; // FName
		constexpr auto EndLocation = 0x4b0; // FVector
		constexpr auto CableLength = 0x4bc; // float
		constexpr auto NumSegments = 0x4c0; // int32_t
		constexpr auto SubstepTime = 0x4c4; // float
		constexpr auto SolverIterations = 0x4c8; // int32_t
		constexpr auto bEnableStiffness = 0x4cc; // bool
		constexpr auto bUseSubstepping = 0x4cd; // bool
		constexpr auto bSkipCableUpdateWhenNotVisible = 0x4ce; // bool
		constexpr auto bSkipCableUpdateWhenNotOwnerRecentlyRendered = 0x4cf; // bool
		constexpr auto bEnableCollision = 0x4d0; // bool
		constexpr auto CollisionFriction = 0x4d4; // float
		constexpr auto CableForce = 0x4d8; // FVector
		constexpr auto CableGravityScale = 0x4e4; // float
		constexpr auto CableWidth = 0x4e8; // float
		constexpr auto NumSides = 0x4ec; // int32_t
		constexpr auto TileMaterial = 0x4f0; // float
	}

	namespace n_UCameraAnimInst {
		constexpr auto CamAnim = 0x28; // UCameraAnim*
		constexpr auto InterpGroupInst = 0x30; // UInterpGroupInst*
		constexpr auto PlayRate = 0x50; // float
		constexpr auto MoveTrack = 0x68; // UInterpTrackMove*
		constexpr auto MoveInst = 0x70; // UInterpTrackInstMove*
		constexpr auto PlaySpace = 0x78; // ECameraShakePlaySpace
	}

	namespace n_UPathFollowingComponent {
		constexpr auto MovementComp = 0xe8; // UNavMovementComponent*
		constexpr auto MyNavData = 0xf8; // ANavigationData*
	}

	namespace n_ULandscapeWeightmapUsage {
		constexpr auto ChannelUsage = 0x28; // ULandscapeComponent* [0x4]
		constexpr auto LayerGuid = 0x48; // FGuid
	}

	namespace n_UIntervalGizmo {
		constexpr auto StateTarget = 0x38; // UGizmoTransformChangeStateTarget*
		constexpr auto TransformProxy = 0x50; // UTransformProxy*
		constexpr auto ActiveComponents = 0x58; // TArray<UPrimitiveComponent*>
		constexpr auto ActiveGizmos = 0x68; // TArray<UInteractiveGizmo*>
		constexpr auto AxisYSource = 0x90; // UGizmoComponentAxisSource*
		constexpr auto AxisZSource = 0x98; // UGizmoComponentAxisSource*
	}

	namespace n_UAxisPositionGizmo {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto ParameterSource = 0x58; // TScriptInterface<IGizmoFloatParameterSource>
		constexpr auto HitTarget = 0x68; // TScriptInterface<IGizmoClickTarget>
		constexpr auto StateTarget = 0x78; // TScriptInterface<IGizmoStateTarget>
		constexpr auto bEnableSignedAxis = 0x88; // bool
		constexpr auto bInInteraction = 0x89; // bool
		constexpr auto InteractionOrigin = 0x8c; // FVector
		constexpr auto InteractionAxis = 0x98; // FVector
		constexpr auto InteractionStartPoint = 0xa4; // FVector
		constexpr auto InteractionCurPoint = 0xb0; // FVector
		constexpr auto InteractionStartParameter = 0xbc; // float
		constexpr auto InteractionCurParameter = 0xc0; // float
		constexpr auto ParameterSign = 0xc4; // float
	}

	namespace n_UWheeledVehicleMovementComponent4W {
		constexpr auto EngineSetup = 0x290; // FVehicleEngineData
		constexpr auto DifferentialSetup = 0x330; // FVehicleDifferential4WData
		constexpr auto AckermannAccuracy = 0x34c; // float
		constexpr auto TransmissionSetup = 0x350; // FVehicleTransmissionData
		constexpr auto SteeringCurve = 0x380; // FRuntimeFloatCurve
	}

	namespace n_UBehaviorTree {
		constexpr auto RootNode = 0x30; // UBTCompositeNode*
		constexpr auto BlackboardAsset = 0x38; // UBlackboardData*
		constexpr auto RootDecorators = 0x40; // TArray<UBTDecorator*>
		constexpr auto RootDecoratorOps = 0x50; // TArray<FBTDecoratorLogic>
	}

	namespace n_UStereoLayerComponent {
		constexpr auto bLiveTexture = 0x1f8; // char : 1
		constexpr auto bSupportsDepth = 0x1f8; // char : 1
		constexpr auto bNoAlphaChannel = 0x1f8; // char : 1
		constexpr auto Texture = 0x200; // UTexture*
		constexpr auto LeftTexture = 0x208; // UTexture*
		constexpr auto bQuadPreserveTextureRatio = 0x210; // char : 1
		constexpr auto QuadSize = 0x214; // FVector2D
		constexpr auto UVRect = 0x21c; // FBox2D
		constexpr auto CylinderRadius = 0x230; // float
		constexpr auto CylinderOverlayArc = 0x234; // float
		constexpr auto CylinderHeight = 0x238; // int32_t
		constexpr auto EquirectProps = 0x23c; // FEquirectProps
		constexpr auto StereoLayerType = 0x284; // EStereoLayerType
		constexpr auto StereoLayerShape = 0x285; // EStereoLayerShape
		constexpr auto Shape = 0x288; // UStereoLayerShape*
		constexpr auto Priority = 0x290; // int32_t
	}

	namespace n_ASFPSGameMode {
		constexpr auto LeaveWaitCharacterList = 0x320; // TArray<TWeakObjectPtr<ASFPSCharacter>>
		constexpr auto LoggedWaitCharacterList = 0x330; // TArray<FSFPSLoggedCharacterRecord>
		constexpr auto AutomationTestPlayerController = 0x358; // ASFPSPlayerController*
		constexpr auto AutomationTestPlayerControllerMoving = 0x360; // ASFPSPlayerController*
		constexpr auto RespawnCharacter = 0x378; // ASFPSCharacter*
		constexpr auto UnresolvedDeadMarkers = 0x380; // TArray<FSFPSUnresolvedDeadMarkerInfo>
		constexpr auto BaseManager = 0x390; // USFPSBaseManager*
		constexpr auto Saver = 0x398; // USFPSSaver*
		constexpr auto SquadList = 0x3a0; // TArray<FSFPSServerSquadRecord>
		constexpr auto VehicleList = 0x3b0; // TArray<TWeakObjectPtr<ASFPSWheeledVehicle>>
		constexpr auto GameplayManager = 0x3d0; // USFPSGameplayManager*
		constexpr auto GameplayManagerClass = 0x3d8; // USFPSGameplayManager*
		constexpr auto MissionRespawnTimes = 0x3e0; // FIntPoint [0x4]
		constexpr auto DebugSpawnActorClass = 0x400; // UObject*
	}

	namespace n_USFPSUserWidget_CraftRollout {
		constexpr auto OnBeginCraftEvent = 0x2e0; // FDelegate
	}

	namespace n_USubmixEffectConvolutionReverbPreset {
		constexpr auto ImpulseResponse = 0x68; // UAudioImpulseResponse*
		constexpr auto Settings = 0x70; // FSubmixEffectConvolutionReverbSettings
		constexpr auto BlockSize = 0x98; // ESubmixEffectConvolutionReverbBlockSize
		constexpr auto bEnableHardwareAcceleration = 0x99; // bool
	}

	namespace n_UParticleModuleTypeDataAnimTrail {
		constexpr auto bDeadTrailsOnDeactivate = 0x30; // char : 1
		constexpr auto bEnablePreviousTangentRecalculation = 0x30; // char : 1
		constexpr auto bTangentRecalculationEveryFrame = 0x30; // char : 1
		constexpr auto TilingDistance = 0x34; // float
		constexpr auto DistanceTessellationStepSize = 0x38; // float
		constexpr auto TangentTessellationStepSize = 0x3c; // float
		constexpr auto WidthTessellationStepSize = 0x40; // float
	}

	namespace n_UWindowTitleBarArea {
		constexpr auto bWindowButtonsEnabled = 0x120; // bool
		constexpr auto bDoubleClickTogglesFullscreen = 0x121; // bool
	}

	namespace n_UMaterialExpressionSubtract {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UfrmAdminPanelPlayer_C {
		constexpr auto btnSelected = 0x2b0; // UButton*
	}

	namespace n_UAssetMappingTable {
		constexpr auto MappedAssets = 0x28; // TArray<FAssetMapping>
	}

	namespace n_UTransformProxy {
		constexpr auto bRotatePerObject = 0x70; // bool
		constexpr auto bSetPivotMode = 0x71; // bool
		constexpr auto SharedTransform = 0x90; // FTransform
		constexpr auto InitialSharedTransform = 0xc0; // FTransform
	}

	namespace n_UInterpTrackVectorProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_UMaterialExpressionClamp {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Min = 0x54; // FExpressionInput
		constexpr auto Max = 0x68; // FExpressionInput
		constexpr auto ClampMode = 0x7c; // EClampMode
		constexpr auto MinDefault = 0x80; // float
		constexpr auto MaxDefault = 0x84; // float
	}

	namespace n_UInterpTrackFloatParticleParam {
		constexpr auto ParamName = 0x90; // FName
	}

	namespace n_UParticleModuleLocationEmitter {
		constexpr auto EmitterName = 0x30; // FName
		constexpr auto SelectionMethod = 0x38; // ELocationEmitterSelectionMethod
		constexpr auto InheritSourceVelocity = 0x3c; // char : 1
		constexpr auto InheritSourceVelocityScale = 0x40; // float
		constexpr auto bInheritSourceRotation = 0x44; // char : 1
		constexpr auto InheritSourceRotationScale = 0x48; // float
	}

	namespace n_USubmixEffectStereoDelayPreset {
		constexpr auto Settings = 0xb4; // FSubmixEffectStereoDelaySettings
	}

	namespace n_USynthSamplePlayer {
		constexpr auto SoundWave = 0x6c0; // USoundWave*
		constexpr auto OnSampleLoaded = 0x6c8; // FMulticastInlineDelegate
		constexpr auto OnSamplePlaybackProgress = 0x6d8; // FMulticastInlineDelegate
	}

	namespace n_UHapticFeedbackEffect_Curve {
		constexpr auto HapticDetails = 0x28; // FHapticFeedbackDetails_Curve
	}

	namespace n_UMovieSceneColorSection {
		constexpr auto RedCurve = 0xf0; // FMovieSceneFloatChannel
		constexpr auto GreenCurve = 0x190; // FMovieSceneFloatChannel
		constexpr auto BlueCurve = 0x230; // FMovieSceneFloatChannel
		constexpr auto AlphaCurve = 0x2d0; // FMovieSceneFloatChannel
	}

	namespace n_UParticleModuleLocationPrimitiveBase {
		constexpr auto Positive_X = 0x30; // char : 1
		constexpr auto Positive_Y = 0x30; // char : 1
		constexpr auto Positive_Z = 0x30; // char : 1
		constexpr auto Negative_X = 0x30; // char : 1
		constexpr auto Negative_Y = 0x30; // char : 1
		constexpr auto Negative_Z = 0x30; // char : 1
		constexpr auto SurfaceOnly = 0x30; // char : 1
		constexpr auto Velocity = 0x30; // char : 1
		constexpr auto VelocityScale = 0x38; // FRawDistributionFloat
		constexpr auto StartLocation = 0x68; // FRawDistributionVector
	}

	namespace n_UEnvQueryOption {
		constexpr auto Generator = 0x28; // UEnvQueryGenerator*
		constexpr auto Tests = 0x30; // TArray<UEnvQueryTest*>
	}

	namespace n_UDatasmithCineCameraComponentTemplate {
		constexpr auto FilmbackSettings = 0x30; // FDatasmithCameraFilmbackSettingsTemplate
		constexpr auto LensSettings = 0x38; // FDatasmithCameraLensSettingsTemplate
		constexpr auto FocusSettings = 0x3c; // FDatasmithCameraFocusSettingsTemplate
		constexpr auto CurrentFocalLength = 0x44; // float
		constexpr auto CurrentAperture = 0x48; // float
		constexpr auto PostProcessSettings = 0x50; // FDatasmithPostProcessSettingsTemplate
	}

	namespace n_UMaterialExpressionParticleSubUV {
		constexpr auto bBlend = 0x60; // char : 1
	}

	namespace n_UBTTask_MakeNoise {
		constexpr auto Loudnes = 0x70; // float
	}

	namespace n_UInterpTrackInstFloatAnimBPParam {
		constexpr auto AnimScriptInstance = 0x28; // UAnimInstance*
		constexpr auto ResetFloat = 0x30; // float
	}

	namespace n_ULogoutCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UTextureRenderTarget {
		constexpr auto TargetGamma = 0x178; // float
	}

	namespace n_UBTTask_RunBehavior {
		constexpr auto BehaviorAsset = 0x70; // UBehaviorTree*
	}

	namespace n_UMovieSceneLevelVisibilityTrack {
		constexpr auto Sections = 0x90; // TArray<UMovieSceneSection*>
	}

	namespace n_USourceEffectFilterPreset {
		constexpr auto Settings = 0xb0; // FSourceEffectFilterSettings
	}

	namespace n_UMaterialExpressionBentNormalCustomOutput {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_Ascope_col_deltapoint_C {
		constexpr auto deltapoint_collimator = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UVOIPTalker {
		constexpr auto Settings = 0xb0; // FVoiceSettings
	}

	namespace n_AChaosSolverActor {
		constexpr auto Properties = 0x220; // FChaosSolverConfiguration
		constexpr auto TimeStepMultiplier = 0x288; // float
		constexpr auto CollisionIterations = 0x28c; // int32_t
		constexpr auto PushOutIterations = 0x290; // int32_t
		constexpr auto PushOutPairIterations = 0x294; // int32_t
		constexpr auto ClusterConnectionFactor = 0x298; // float
		constexpr auto ClusterUnionConnectionType = 0x29c; // EClusterConnectionTypeEnum
		constexpr auto DoGenerateCollisionData = 0x29d; // bool
		constexpr auto CollisionFilterSettings = 0x2a0; // FSolverCollisionFilterSettings
		constexpr auto DoGenerateBreakingData = 0x2b0; // bool
		constexpr auto BreakingFilterSettings = 0x2b4; // FSolverBreakingFilterSettings
		constexpr auto DoGenerateTrailingData = 0x2c4; // bool
		constexpr auto TrailingFilterSettings = 0x2c8; // FSolverTrailingFilterSettings
		constexpr auto MassScale = 0x2d8; // float
		constexpr auto bGenerateContactGraph = 0x2dc; // bool
		constexpr auto bHasFloor = 0x2dd; // bool
		constexpr auto FloorHeight = 0x2e0; // float
		constexpr auto ChaosDebugSubstepControl = 0x2e4; // FChaosDebugSubstepControl
		constexpr auto SpriteComponent = 0x2e8; // UBillboardComponent*
		constexpr auto GameplayEventDispatcherComponent = 0x308; // UChaosGameplayEventDispatcher*
	}

	namespace n_USFPSSoundTalkSet {
		constexpr auto Elements = 0x28; // TArray<FSFPSTalkSentenceElement>
		constexpr auto DataTable = 0x38; // UDataTable*
		constexpr auto TalkSetStateTable = 0x40; // TArray<FTalkSetStateTable>
		constexpr auto fSayDelay = 0x50; // float
		constexpr auto fPartingDelay = 0x54; // float
		constexpr auto ChanceToSay = 0x58; // float
	}

	namespace n_UTextBlockWidgetStyle {
		constexpr auto TextBlockStyle = 0x30; // FTextBlockStyle
	}

	namespace n_UDcxVehicleTire {
		constexpr auto LateralStiffnessX = 0x34; // float
		constexpr auto LateralStiffnessY = 0x38; // float
		constexpr auto LongitudinalStiffnessPerUnitGravity = 0x3c; // float
		constexpr auto CamberStiffnessPerUnitGravity = 0x40; // float
		constexpr auto FrictionVsSlipGraph = 0x48; // FRuntimeFloatCurve
		constexpr auto DrivableSurfaceToTireFrictionPairs = 0xd0; // TArray<FDcxDrivableSurfaceToTireFrictionPair>
	}

	namespace n_UBoundsCopyComponent {
		constexpr auto BoundsSourceActor = 0xb0; // TSoftObjectPtr<AActor>
		constexpr auto bUseCollidingComponentsForSourceBounds = 0xd8; // bool
		constexpr auto bKeepOwnBoundsScale = 0xd9; // bool
		constexpr auto bUseCollidingComponentsForOwnBounds = 0xda; // bool
		constexpr auto PostTransform = 0xe0; // FTransform
		constexpr auto bCopyXBounds = 0x110; // bool
		constexpr auto bCopyYBounds = 0x111; // bool
		constexpr auto bCopyZBounds = 0x112; // bool
	}

	namespace n_USFPSAnimEvent_Weap_Steel_Damage {
		constexpr auto bFirstEvent = 0x38; // bool
	}

	namespace n_UMaterialExpressionSphericalParticleOpacity {
		constexpr auto Density = 0x40; // FExpressionInput
		constexpr auto ConstantDensity = 0x54; // float
	}

	namespace n_UARPointComponent {
		constexpr auto ReplicatedPayload = 0x278; // FARPointUpdatePayload
	}

	namespace n_UFormDlg_Ok_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnOk = 0x268; // UButton*
		constexpr auto lbOk = 0x270; // UTextBlock*
	}

	namespace n_UStereoLayerShapeEquirect {
		constexpr auto LeftUVRect = 0x28; // FBox2D
		constexpr auto RightUVRect = 0x3c; // FBox2D
		constexpr auto LeftScale = 0x50; // FVector2D
		constexpr auto RightScale = 0x58; // FVector2D
		constexpr auto LeftBias = 0x60; // FVector2D
		constexpr auto RightBias = 0x68; // FVector2D
	}

	namespace n_Aweapmf_silencer_762x39_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_ASFPSBaseMissileProjectile {
		constexpr auto TeamID = 0x2b9; // FGenericTeamId
		constexpr auto BounceSoundCue = 0x2d0; // USoundCue*
		constexpr auto BounceParticles = 0x2d8; // UParticleSystem*
		constexpr auto BounceWaterParticles = 0x2e0; // UParticleSystem*
		constexpr auto Shooter = 0x2f0; // TWeakObjectPtr<ASFPSBaseCharacter>
		constexpr auto Weapon = 0x320; // AActor*
		constexpr auto bDrawClientDebugTrajectory = 0x328; // bool
		constexpr auto DrawClientDebugTrajectoryTimeLife = 0x32c; // float
	}

	namespace n_UMotoSynthPreset {
		constexpr auto Settings = 0x28; // FMotoSynthRuntimeSettings
	}

	namespace n_UMaterialBillboardComponent {
		constexpr auto Elements = 0x450; // TArray<FMaterialSpriteElement>
	}

	namespace n_ULandscapeInfo {
		constexpr auto LandscapeActor = 0x28; // LazyObjectProperty
		constexpr auto LandscapeGuid = 0x44; // FGuid
		constexpr auto ComponentSizeQuads = 0x54; // int32_t
		constexpr auto SubsectionSizeQuads = 0x58; // int32_t
		constexpr auto ComponentNumSubsections = 0x5c; // int32_t
		constexpr auto DrawScale = 0x60; // FVector
		constexpr auto Proxies = 0x110; // TArray<ALandscapeStreamingProxy*>
	}

	namespace n_ABMF_Gates_lock_01_C {
		constexpr auto Base_lock_02 = 0x388; // UStaticMeshComponent*
		constexpr auto Base_lock_01 = 0x390; // UStaticMeshComponent*
	}

	namespace n_UParticleModuleMeshRotation {
		constexpr auto StartRotation = 0x30; // FRawDistributionVector
		constexpr auto bInheritParent = 0x78; // char : 1
	}

	namespace n_USpotLightComponent {
		constexpr auto InnerConeAngle = 0x358; // float
		constexpr auto OuterConeAngle = 0x35c; // float
	}

	namespace n_UMaterialExpressionFunctionInput {
		constexpr auto Preview = 0x40; // FExpressionInput
		constexpr auto InputName = 0x54; // FName
		constexpr auto Description = 0x60; // FString
		constexpr auto ID = 0x70; // FGuid
		constexpr auto InputType = 0x80; // EFunctionInputType
		constexpr auto PreviewValue = 0x90; // FVector4
		constexpr auto bUsePreviewValueAsDefault = 0xa0; // char : 1
		constexpr auto SortPriority = 0xa4; // int32_t
		constexpr auto bCompilingFunctionPreview = 0xa8; // char : 1
	}

	namespace n_UParticleModuleEventReceiverBase {
		constexpr auto EventGeneratorType = 0x30; // EParticleEventType
		constexpr auto EventName = 0x34; // FName
	}

	namespace n_USignificanceManager {
		constexpr auto SignificanceManagerClassName = 0x108; // FSoftClassPath
	}

	namespace n_ULevelStreamingDynamic {
		constexpr auto bInitiallyLoaded = 0x148; // char : 1
		constexpr auto bInitiallyVisible = 0x148; // char : 1
	}

	namespace n_Aweapmf_flashlight_01_C {
		constexpr auto Glow = 0x358; // UStaticMeshComponent*
		constexpr auto Light = 0x360; // USpotLightComponent*
	}

	namespace n_USFPSSoundBoxCopm {
		constexpr auto NumSound = 0x478; // int32_t
		constexpr auto ChancePlay = 0x47c; // float
		constexpr auto MaxSCount = 0x480; // int32_t
	}

	namespace n_AMagicLeapARPinInfoActorBase {
		constexpr auto PinId = 0x220; // FGuid
		constexpr auto bVisibilityOverride = 0x230; // bool
	}

	namespace n_UBTTask_BlackboardBase {
		constexpr auto BlackboardKey = 0x70; // FBlackboardKeySelector
	}

	namespace n_UAnimationAsset {
		constexpr auto Skeleton = 0x38; // USkeleton*
		constexpr auto MetaData = 0x60; // TArray<UAnimMetaData*>
		constexpr auto AssetUserData = 0x70; // TArray<UAssetUserData*>
	}

	namespace n_UAnimStreamable {
		constexpr auto NumFrames = 0xa8; // int32_t
		constexpr auto Interpolation = 0xac; // EAnimInterpolationType
		constexpr auto RetargetSource = 0xb0; // FName
		constexpr auto BoneCompressionSettings = 0xc8; // UAnimBoneCompressionSettings*
		constexpr auto CurveCompressionSettings = 0xd0; // UAnimCurveCompressionSettings*
		constexpr auto bEnableRootMotion = 0xd8; // bool
		constexpr auto RootMotionRootLock = 0xd9; // ERootMotionRootLock
		constexpr auto bForceRootLock = 0xda; // bool
		constexpr auto bUseNormalizedRootMotionScale = 0xdb; // bool
	}

	namespace n_UVaRestRequestJSON {
		constexpr auto OnRequestComplete = 0x28; // FMulticastInlineDelegate
		constexpr auto OnRequestFail = 0x38; // FMulticastInlineDelegate
		constexpr auto ResponseSize = 0x88; // int32_t
		constexpr auto ResponseContent = 0x90; // FString
		constexpr auto bIsValidJsonResponse = 0xa0; // bool
		constexpr auto RequestJsonObj = 0xb0; // UVaRestJsonObject*
		constexpr auto ResponseJsonObj = 0xe8; // UVaRestJsonObject*
	}

	namespace n_UAISense_Touch {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAITouchEvent>
	}

	namespace n_UMaterialExpressionSamplePhysicsScalarField {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
		constexpr auto FieldTarget = 0x54; // EFieldScalarType
	}

	namespace n_UNetConnection {
		constexpr auto Children = 0x48; // TArray<UChildConnection*>
		constexpr auto Driver = 0x58; // UNetDriver*
		constexpr auto PackageMapClass = 0x60; // UPackageMap*
		constexpr auto PackageMap = 0x68; // UPackageMap*
		constexpr auto OpenChannels = 0x70; // TArray<UChannel*>
		constexpr auto SentTemporaries = 0x80; // TArray<AActor*>
		constexpr auto ViewTarget = 0x90; // AActor*
		constexpr auto OwningActor = 0x98; // AActor*
		constexpr auto MaxPacket = 0xa0; // int32_t
		constexpr auto InternalAck = 0xa4; // char : 1
		constexpr auto PlayerId = 0x160; // FUniqueNetIdRepl
		constexpr auto LastReceiveTime = 0x1d0; // double
		constexpr auto ChannelsToTick = 0x1510; // TArray<UChannel*>
	}

	namespace n_UApplicationLifecycleComponent {
		constexpr auto ApplicationWillDeactivateDelegate = 0xb0; // FMulticastInlineDelegate
		constexpr auto ApplicationHasReactivatedDelegate = 0xc0; // FMulticastInlineDelegate
		constexpr auto ApplicationWillEnterBackgroundDelegate = 0xd0; // FMulticastInlineDelegate
		constexpr auto ApplicationHasEnteredForegroundDelegate = 0xe0; // FMulticastInlineDelegate
		constexpr auto ApplicationWillTerminateDelegate = 0xf0; // FMulticastInlineDelegate
		constexpr auto ApplicationShouldUnloadResourcesDelegate = 0x100; // FMulticastInlineDelegate
		constexpr auto ApplicationReceivedStartupArgumentsDelegate = 0x110; // FMulticastInlineDelegate
		constexpr auto OnTemperatureChangeDelegate = 0x120; // FMulticastInlineDelegate
		constexpr auto OnLowPowerModeDelegate = 0x130; // FMulticastInlineDelegate
	}

	namespace n_USFPSAnimEvent_WC_ChangingFlag {
		constexpr auto bWeaponChanging = 0x38; // bool
		constexpr auto bForCursor = 0x39; // bool
	}

	namespace n_ABM_WallBig_01_C {
		constexpr auto SFPSACSnap = 0x358; // USFPSACSnapComponent*
		constexpr auto SFPSACDoor = 0x360; // USFPSACDoor*
		constexpr auto overlap1 = 0x368; // UBoxComponent*
		constexpr auto Door_02 = 0x370; // UStaticMeshComponent*
		constexpr auto Overlap = 0x378; // UBoxComponent*
		constexpr auto Door_01 = 0x380; // UStaticMeshComponent*
	}

	namespace n_UParticleModuleAccelerationDragScaleOverLife {
		constexpr auto DragScale = 0x38; // UDistributionFloat*
		constexpr auto DragScaleRaw = 0x40; // FRawDistributionFloat
	}

	namespace n_ASFPSWeaponMF_MuzzleAttachment {
		constexpr auto ShotParticle = 0x330; // UParticleSystem*
		constexpr auto MuzzleAttachmentType = 0x338; // ESFPSSmallArmsMuzzleAttachmentType
		constexpr auto SocketMuzzle = 0x340; // FTransform
		constexpr auto Length = 0x370; // float
		constexpr auto RecoilMul = 0x374; // float
	}

	namespace n_UUMGSequenceTickManager {
		constexpr auto WeakUserWidgets = 0x28; // TSet<TWeakObjectPtr<UUserWidget>>
		constexpr auto Linker = 0x78; // UMovieSceneEntitySystemLinker*
	}

	namespace n_UWaveOscillatorCameraShakePattern {
		constexpr auto LocationAmplitudeMultiplier = 0x38; // float
		constexpr auto LocationFrequencyMultiplier = 0x3c; // float
		constexpr auto X = 0x40; // FWaveOscillator
		constexpr auto Y = 0x4c; // FWaveOscillator
		constexpr auto Z = 0x58; // FWaveOscillator
		constexpr auto RotationAmplitudeMultiplier = 0x64; // float
		constexpr auto RotationFrequencyMultiplier = 0x68; // float
		constexpr auto Pitch = 0x6c; // FWaveOscillator
		constexpr auto Yaw = 0x78; // FWaveOscillator
		constexpr auto Roll = 0x84; // FWaveOscillator
		constexpr auto FOV = 0x90; // FWaveOscillator
	}

	namespace n_Aweapmf_DTK_762x39_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UScrollBarWidgetStyle {
		constexpr auto ScrollBarStyle = 0x30; // FScrollBarStyle
	}

	namespace n_UFXSystemAsset {
		constexpr auto MaxPoolSize = 0x28; // uint32_t
		constexpr auto PoolPrimeSize = 0x2c; // uint32_t
	}

	namespace n_USingleClickInputBehavior {
		constexpr auto HitTestOnRelease = 0xc0; // bool
	}

	namespace n_UEnvQueryTest_Pathfinding {
		constexpr auto TestMode = 0x1f8; // EEnvTestPathfinding
		constexpr auto Context = 0x200; // UEnvQueryContext*
		constexpr auto PathFromContext = 0x208; // FAIDataProviderBoolValue
		constexpr auto SkipUnreachable = 0x240; // FAIDataProviderBoolValue
		constexpr auto FilterClass = 0x278; // UNavigationQueryFilter*
	}

	namespace n_ANavigationObjectBase {
		constexpr auto CapsuleComponent = 0x228; // UCapsuleComponent*
		constexpr auto GoodSprite = 0x230; // UBillboardComponent*
		constexpr auto BadSprite = 0x238; // UBillboardComponent*
		constexpr auto bIsPIEPlayerStart = 0x240; // char : 1
	}

	namespace n_ULevelSequenceBurnInOptions {
		constexpr auto bUseBurnIn = 0x28; // bool
		constexpr auto BurnInClass = 0x30; // FSoftClassPath
		constexpr auto Settings = 0x48; // ULevelSequenceBurnInInitSettings*
	}

	namespace n_Aweapon_firearms_snip_svd_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto MagazineFull = 0x7e8; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f0; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f8; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x800; // USFPSACWeaponMFInventory*
	}

	namespace n_UVectorFieldComponent {
		constexpr auto VectorField = 0x450; // UVectorField*
		constexpr auto Intensity = 0x458; // float
		constexpr auto Tightness = 0x45c; // float
		constexpr auto bPreviewVectorField = 0x460; // char : 1
	}

	namespace n_UMaterialExpressionAppendVector {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UDatasmithFBXSceneImportData {
		constexpr auto bGenerateLightmapUVs = 0x28; // bool
		constexpr auto TexturesDir = 0x30; // FString
		constexpr auto IntermediateSerialization = 0x40; // char
		constexpr auto bColorizeMaterials = 0x41; // bool
	}

	namespace n_USCS_Node {
		constexpr auto ComponentClass = 0x28; // UObject*
		constexpr auto ComponentTemplate = 0x30; // UActorComponent*
		constexpr auto CookedComponentInstancingData = 0x38; // FBlueprintCookedComponentInstancingData
		constexpr auto AttachToName = 0x80; // FName
		constexpr auto ParentComponentOrVariableName = 0x88; // FName
		constexpr auto ParentComponentOwnerClassName = 0x90; // FName
		constexpr auto bIsParentComponentNative = 0x98; // bool
		constexpr auto ChildNodes = 0xa0; // TArray<USCS_Node*>
		constexpr auto MetaDataArray = 0xb0; // TArray<FBPVariableMetaDataEntry>
		constexpr auto VariableGuid = 0xc0; // FGuid
		constexpr auto InternalVariableName = 0xd0; // FName
	}

	namespace n_UBTTaskNode {
		constexpr auto Services = 0x58; // TArray<UBTService*>
		constexpr auto bIgnoreRestartSelf = 0x68; // char : 1
	}

	namespace n_USpectatorBeaconState {
		constexpr auto SessionName = 0x28; // FName
		constexpr auto NumConsumedReservations = 0x30; // int32_t
		constexpr auto MaxReservations = 0x34; // int32_t
		constexpr auto bRestrictCrossConsole = 0x38; // bool
		constexpr auto Reservations = 0x40; // TArray<FSpectatorReservation>
	}

	namespace n_UBTTask_MoveTo {
		constexpr auto AcceptableRadius = 0x98; // float
		constexpr auto FilterClass = 0xa0; // UNavigationQueryFilter*
		constexpr auto ObservedBlackboardValueTolerance = 0xa8; // float
		constexpr auto bObserveBlackboardValue = 0xac; // char : 1
		constexpr auto bAllowStrafe = 0xac; // char : 1
		constexpr auto bAllowPartialPath = 0xac; // char : 1
		constexpr auto bTrackMovingGoal = 0xac; // char : 1
		constexpr auto bProjectGoalLocation = 0xac; // char : 1
		constexpr auto bReachTestIncludesAgentRadius = 0xac; // char : 1
		constexpr auto bReachTestIncludesGoalRadius = 0xac; // char : 1
		constexpr auto bStopOnOverlap = 0xac; // char : 1
		constexpr auto bStopOnOverlapNeedsUpdate = 0xad; // char : 1
	}

	namespace n_ASceneCapture {
		constexpr auto MeshComp = 0x220; // UStaticMeshComponent*
		constexpr auto SceneComponent = 0x228; // USceneComponent*
	}

	namespace n_USFPSChatHandler {
		constexpr auto FormChat = 0x110; // UUserWidget*
		constexpr auto frmChatItem = 0x118; // USFPSUserWidget_ChatItem*
		constexpr auto frmPopupMenuItem = 0x120; // USFPSUserWidget_PopupMenuItem*
		constexpr auto Blacklist = 0x138; // TArray<FString>
	}

	namespace n_UCameraComponent {
		constexpr auto FieldOfView = 0x1f8; // float
		constexpr auto OrthoWidth = 0x1fc; // float
		constexpr auto OrthoNearClipPlane = 0x200; // float
		constexpr auto OrthoFarClipPlane = 0x204; // float
		constexpr auto AspectRatio = 0x208; // float
		constexpr auto bConstrainAspectRatio = 0x20c; // char : 1
		constexpr auto bUseFieldOfViewForLOD = 0x20c; // char : 1
		constexpr auto bLockToHmd = 0x20c; // char : 1
		constexpr auto bUsePawnControlRotation = 0x20c; // char : 1
		constexpr auto ProjectionMode = 0x20d; // ECameraProjectionMode
		constexpr auto PostProcessBlendWeight = 0x240; // float
		constexpr auto PostProcessSettings = 0x270; // FPostProcessSettings
	}

	namespace n_UActorSequenceComponent {
		constexpr auto PlaybackSettings = 0xb0; // FMovieSceneSequencePlaybackSettings
		constexpr auto Sequence = 0xc8; // UActorSequence*
		constexpr auto SequencePlayer = 0xd0; // UActorSequencePlayer*
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureSample {
		constexpr auto Coordinates = 0x40; // FExpressionInput
		constexpr auto WorldPosition = 0x54; // FExpressionInput
		constexpr auto MipValue = 0x68; // FExpressionInput
		constexpr auto VirtualTexture = 0x80; // URuntimeVirtualTexture*
		constexpr auto MaterialType = 0x88; // ERuntimeVirtualTextureMaterialType
		constexpr auto bSinglePhysicalSpace = 0x89; // bool
		constexpr auto bAdaptive = 0x8a; // bool
		constexpr auto MipValueMode = 0x8b; // ERuntimeVirtualTextureMipValueMode
		constexpr auto TextureAddressMode = 0x8c; // ERuntimeVirtualTextureTextureAddressMode
	}

	namespace n_UInteractiveToolPropertySet {
		constexpr auto CachedProperties = 0x38; // UInteractiveToolPropertySet*
		constexpr auto bIsPropertySetEnabled = 0x40; // bool
	}

	namespace n_UMaterialExpressionWorldPosition {
		constexpr auto WorldPositionShaderOffset = 0x40; // EWorldPositionIncludedOffsets
	}

	namespace n_UfrmItemHint_C {
		constexpr auto imgBackgroun1 = 0x260; // UImage*
		constexpr auto imgBackgroun2 = 0x268; // UImage*
		constexpr auto imgBackgroun3 = 0x270; // UImage*
		constexpr auto imgBackgroun4 = 0x278; // UImage*
		constexpr auto imgBackgroun5 = 0x280; // UImage*
		constexpr auto imgBackgroun6 = 0x288; // UImage*
		constexpr auto imgBackgroun7 = 0x290; // UImage*
		constexpr auto imgBackgroun8 = 0x298; // UImage*
	}

	namespace n_UBlendSpace {
		constexpr auto AxisToScaleAnimation = 0x148; // EBlendSpaceAxis
	}

	namespace n_ABMF_Sandbags_02_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
	}

	namespace n_USoundfieldEndpointSubmix {
		constexpr auto SoundfieldEndpointType = 0x38; // FName
		constexpr auto EndpointSettingsClass = 0x40; // UAudioEndpointSettingsBase*
		constexpr auto EndpointSettings = 0x48; // USoundfieldEndpointSettingsBase*
		constexpr auto EncodingSettingsClass = 0x50; // USoundfieldEncodingSettingsBase*
		constexpr auto EncodingSettings = 0x58; // USoundfieldEncodingSettingsBase*
		constexpr auto SoundfieldEffectChain = 0x60; // TArray<USoundfieldEffectBase*>
	}

	namespace n_ULandscapeMaterialInstanceConstant {
		constexpr auto TextureStreamingInfo = 0x318; // TArray<FLandscapeMaterialTextureStreamingInfo>
		constexpr auto bIsLayerThumbnail = 0x328; // char : 1
		constexpr auto bDisableTessellation = 0x328; // char : 1
		constexpr auto bMobile = 0x328; // char : 1
		constexpr auto bEditorToolUsage = 0x328; // char : 1
	}

	namespace n_UBorderSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_AAudioVolume {
		constexpr auto Priority = 0x258; // float
		constexpr auto bEnabled = 0x25c; // char : 1
		constexpr auto Settings = 0x260; // FReverbSettings
		constexpr auto AmbientZoneSettings = 0x280; // FInteriorSettings
		constexpr auto SubmixSendSettings = 0x2a8; // TArray<FAudioVolumeSubmixSendSettings>
		constexpr auto SubmixOverrideSettings = 0x2b8; // TArray<FAudioVolumeSubmixOverrideSettings>
	}

	namespace n_UARSessionConfig {
		constexpr auto bGenerateMeshDataFromTrackedGeometry = 0x30; // bool
		constexpr auto bGenerateCollisionForMeshData = 0x31; // bool
		constexpr auto bGenerateNavMeshForMeshData = 0x32; // bool
		constexpr auto bUseMeshDataForOcclusion = 0x33; // bool
		constexpr auto bRenderMeshDataInWireframe = 0x34; // bool
		constexpr auto bTrackSceneObjects = 0x35; // bool
		constexpr auto bUsePersonSegmentationForOcclusion = 0x36; // bool
		constexpr auto bUseSceneDepthForOcclusion = 0x37; // bool
		constexpr auto bUseAutomaticImageScaleEstimation = 0x38; // bool
		constexpr auto bUseStandardOnboardingUX = 0x39; // bool
		constexpr auto WorldAlignment = 0x3a; // EARWorldAlignment
		constexpr auto SessionType = 0x3b; // EARSessionType
		constexpr auto PlaneDetectionMode = 0x3c; // EARPlaneDetectionMode
		constexpr auto bHorizontalPlaneDetection = 0x3d; // bool
		constexpr auto bVerticalPlaneDetection = 0x3e; // bool
		constexpr auto bEnableAutoFocus = 0x3f; // bool
		constexpr auto LightEstimationMode = 0x40; // EARLightEstimationMode
		constexpr auto FrameSyncMode = 0x41; // EARFrameSyncMode
		constexpr auto bEnableAutomaticCameraOverlay = 0x42; // bool
		constexpr auto bEnableAutomaticCameraTracking = 0x43; // bool
		constexpr auto bResetCameraTracking = 0x44; // bool
		constexpr auto bResetTrackedObjects = 0x45; // bool
		constexpr auto CandidateImages = 0x48; // TArray<UARCandidateImage*>
		constexpr auto MaxNumSimultaneousImagesTracked = 0x58; // int32_t
		constexpr auto EnvironmentCaptureProbeType = 0x5c; // EAREnvironmentCaptureProbeType
		constexpr auto WorldMapData = 0x60; // TArray<char>
		constexpr auto CandidateObjects = 0x70; // TArray<UARCandidateObject*>
		constexpr auto DesiredVideoFormat = 0x80; // FARVideoFormat
		constexpr auto bUseOptimalVideoFormat = 0x8c; // bool
		constexpr auto FaceTrackingDirection = 0x8d; // EARFaceTrackingDirection
		constexpr auto FaceTrackingUpdate = 0x8e; // EARFaceTrackingUpdate
		constexpr auto MaxNumberOfTrackedFaces = 0x90; // int32_t
		constexpr auto SerializedARCandidateImageDatabase = 0x98; // TArray<char>
		constexpr auto EnabledSessionTrackingFeature = 0xa8; // EARSessionTrackingFeature
		constexpr auto SceneReconstructionMethod = 0xa9; // EARSceneReconstruction
		constexpr auto PlaneComponentClass = 0xb0; // UARPlaneComponent*
		constexpr auto PointComponentClass = 0xb8; // UARPointComponent*
		constexpr auto FaceComponentClass = 0xc0; // UARFaceComponent*
		constexpr auto ImageComponentClass = 0xc8; // UARImageComponent*
		constexpr auto QRCodeComponentClass = 0xd0; // UARQRCodeComponent*
		constexpr auto PoseComponentClass = 0xd8; // UARPoseComponent*
		constexpr auto EnvironmentProbeComponentClass = 0xe0; // UAREnvironmentProbeComponent*
		constexpr auto ObjectComponentClass = 0xe8; // UARObjectComponent*
		constexpr auto MeshComponentClass = 0xf0; // UARMeshComponent*
		constexpr auto GeoAnchorComponentClass = 0xf8; // UARGeoAnchorComponent*
		constexpr auto DefaultMeshMaterial = 0x100; // UMaterialInterface*
		constexpr auto DefaultWireframeMeshMaterial = 0x108; // UMaterialInterface*
	}

	namespace n_USFPSMessageHandler {
		constexpr auto MessageForm = 0x28; // UUserWidget*
		constexpr auto MessageMemoForm = 0x70; // UUserWidget*
		constexpr auto MessageItemForm = 0x90; // UUserWidget*
		constexpr auto FormDlg_Timer = 0x108; // UUserWidget*
		constexpr auto FormDlg_TimerInf = 0x138; // UUserWidget*
		constexpr auto FormDead = 0x158; // UUserWidget*
		constexpr auto SectorActivityForm = 0x198; // UUserWidget*
		constexpr auto FormDlg_OkCancel = 0x260; // UUserWidget*
		constexpr auto FormDlg_Ok = 0x280; // UUserWidget*
		constexpr auto FormDlg_InputBox = 0x290; // UUserWidget*
		constexpr auto FormDlg_CodeInputBox = 0x2b0; // USFPSUserWidget_CodeInputBox*
		constexpr auto FormDlg_ItemList = 0x2b8; // UUserWidget*
	}

	namespace n_UMaterialExpressionNormalize {
		constexpr auto VectorInput = 0x40; // FExpressionInput
	}

	namespace n_UPlanePositionGizmo {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto ParameterSource = 0x58; // TScriptInterface<IGizmoVec2ParameterSource>
		constexpr auto HitTarget = 0x68; // TScriptInterface<IGizmoClickTarget>
		constexpr auto StateTarget = 0x78; // TScriptInterface<IGizmoStateTarget>
		constexpr auto bEnableSignedAxis = 0x88; // bool
		constexpr auto bFlipX = 0x89; // bool
		constexpr auto bFlipY = 0x8a; // bool
		constexpr auto bInInteraction = 0x8b; // bool
		constexpr auto InteractionOrigin = 0x8c; // FVector
		constexpr auto InteractionNormal = 0x98; // FVector
		constexpr auto InteractionAxisX = 0xa4; // FVector
		constexpr auto InteractionAxisY = 0xb0; // FVector
		constexpr auto InteractionStartPoint = 0xbc; // FVector
		constexpr auto InteractionCurPoint = 0xc8; // FVector
		constexpr auto InteractionStartParameter = 0xd4; // FVector2D
		constexpr auto InteractionCurParameter = 0xdc; // FVector2D
		constexpr auto ParameterSigns = 0xe4; // FVector2D
	}

	namespace n_ULandscapeHeightfieldCollisionComponent {
		constexpr auto ComponentLayerInfos = 0x450; // TArray<ULandscapeLayerInfoObject*>
		constexpr auto SectionBaseX = 0x460; // int32_t
		constexpr auto SectionBaseY = 0x464; // int32_t
		constexpr auto CollisionSizeQuads = 0x468; // int32_t
		constexpr auto CollisionScale = 0x46c; // float
		constexpr auto SimpleCollisionSizeQuads = 0x470; // int32_t
		constexpr auto CollisionQuadFlags = 0x478; // TArray<char>
		constexpr auto HeightfieldGuid = 0x488; // FGuid
		constexpr auto CachedLocalBox = 0x498; // FBox
		constexpr auto RenderComponent = 0x4b4; // LazyObjectProperty
		constexpr auto CookedPhysicalMaterials = 0x4e0; // TArray<UPhysicalMaterial*>
	}

	namespace n_Amat_wood_logs_01_C {
		constexpr auto Scene1 = 0x320; // USceneComponent*
		constexpr auto Scene = 0x328; // USceneComponent*
	}

	namespace n_Aweapmf_DTK_762x39_02_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UParticleModuleVectorFieldRotation {
		constexpr auto MinInitialRotation = 0x30; // FVector
		constexpr auto MaxInitialRotation = 0x3c; // FVector
	}

	namespace n_USFPSActorLibrary {
		constexpr auto GroupsSortedByName = 0x28; // TArray<FSFPSActorLibraryGroupForSortedByName>
		constexpr auto Groups = 0x38; // TArray<FSFPSActorLibraryGroup>
	}

	namespace n_USFPSAI_TSwitchState {
		constexpr auto StateValue = 0x70; // ESFPSAIState
		constexpr auto Tag = 0x71; // ESFPSAIStateTag
	}

	namespace n_UARGeoAnchorComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARGeoAnchorUpdatePayload
	}

	namespace n_UParticleModuleLocationPrimitiveCylinder_Seeded {
		constexpr auto RandomSeedInfo = 0x120; // FParticleRandomSeedInfo
	}

	namespace n_UTextureRenderTargetVolume {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto SizeY = 0x184; // int32_t
		constexpr auto SizeZ = 0x188; // int32_t
		constexpr auto ClearColor = 0x18c; // FLinearColor
		constexpr auto OverrideFormat = 0x19c; // EPixelFormat
		constexpr auto bHDR = 0x19d; // char : 1
		constexpr auto bForceLinearGamma = 0x19d; // char : 1
	}

	namespace n_ASFPSGreenArea {
		constexpr auto OverlapCharacters = 0x220; // TArray<AActor*>
		constexpr auto Storages = 0x238; // TArray<UChildActorComponent*>
		constexpr auto CharacterCellNumber = 0x248; // int32_t
		constexpr auto IsServerArea = 0x24c; // bool
		constexpr auto Sphere = 0x250; // USphereComponent*
		constexpr auto TeleportPoints = 0x258; // TArray<FVector>
	}

	namespace n_UInterpTrackSound {
		constexpr auto Sounds = 0x90; // TArray<FSoundTrackKey>
		constexpr auto bPlayOnReverse = 0xa0; // char : 1
		constexpr auto bContinueSoundOnMatineeEnd = 0xa0; // char : 1
		constexpr auto bSuppressSubtitles = 0xa0; // char : 1
		constexpr auto bTreatAsDialogue = 0xa0; // char : 1
		constexpr auto bAttach = 0xa0; // char : 1
	}

	namespace n_UMaterialExpressionDepthFade {
		constexpr auto InOpacity = 0x40; // FExpressionInput
		constexpr auto FadeDistance = 0x54; // FExpressionInput
		constexpr auto OpacityDefault = 0x68; // float
		constexpr auto FadeDistanceDefault = 0x6c; // float
	}

	namespace n_UAnimBlueprint {
		constexpr auto TargetSkeleton = 0xa8; // USkeleton*
		constexpr auto Groups = 0xb0; // TArray<FAnimGroupInfo>
		constexpr auto bUseMultiThreadedAnimationUpdate = 0xc0; // bool
		constexpr auto bWarnAboutBlueprintUsage = 0xc1; // bool
	}

	namespace n_UGameplayTasksComponent {
		constexpr auto bIsNetDirty = 0xbc; // char : 1
		constexpr auto SimulatedTasks = 0xc0; // TArray<UGameplayTask*>
		constexpr auto TaskPriorityQueue = 0xd0; // TArray<UGameplayTask*>
		constexpr auto TickingTasks = 0xf0; // TArray<UGameplayTask*>
		constexpr auto KnownTasks = 0x100; // TArray<UGameplayTask*>
		constexpr auto OnClaimedResourcesChange = 0x110; // FMulticastInlineDelegate
	}

	namespace n_ACableActor {
		constexpr auto CableComponent = 0x220; // UCableComponent*
	}

	namespace n_UParticleModuleMeshRotation_Seeded {
		constexpr auto RandomSeedInfo = 0x80; // FParticleRandomSeedInfo
	}

	namespace n_ARectLight {
		constexpr auto RectLightComponent = 0x230; // URectLightComponent*
	}

	namespace n_USFPSAI_TLookAtTarget {
		constexpr auto Target = 0x70; // FBlackboardKeySelector
	}

	namespace n_UWidgetComponent {
		constexpr auto Space = 0x478; // EWidgetSpace
		constexpr auto TimingPolicy = 0x479; // EWidgetTimingPolicy
		constexpr auto WidgetClass = 0x480; // UUserWidget*
		constexpr auto DrawSize = 0x488; // FIntPoint
		constexpr auto bManuallyRedraw = 0x490; // bool
		constexpr auto bRedrawRequested = 0x491; // bool
		constexpr auto RedrawTime = 0x494; // float
		constexpr auto CurrentDrawSize = 0x4a0; // FIntPoint
		constexpr auto bDrawAtDesiredSize = 0x4a8; // bool
		constexpr auto Pivot = 0x4ac; // FVector2D
		constexpr auto bReceiveHardwareInput = 0x4b4; // bool
		constexpr auto bWindowFocusable = 0x4b5; // bool
		constexpr auto WindowVisibility = 0x4b6; // EWindowVisibility
		constexpr auto bApplyGammaCorrection = 0x4b7; // bool
		constexpr auto OwnerPlayer = 0x4b8; // ULocalPlayer*
		constexpr auto BackgroundColor = 0x4c0; // FLinearColor
		constexpr auto TintColorAndOpacity = 0x4d0; // FLinearColor
		constexpr auto OpacityFromTexture = 0x4e0; // float
		constexpr auto BlendMode = 0x4e4; // EWidgetBlendMode
		constexpr auto bIsTwoSided = 0x4e5; // bool
		constexpr auto TickWhenOffscreen = 0x4e6; // bool
		constexpr auto BodySetup = 0x4e8; // UBodySetup*
		constexpr auto TranslucentMaterial = 0x4f0; // UMaterialInterface*
		constexpr auto TranslucentMaterial_OneSided = 0x4f8; // UMaterialInterface*
		constexpr auto OpaqueMaterial = 0x500; // UMaterialInterface*
		constexpr auto OpaqueMaterial_OneSided = 0x508; // UMaterialInterface*
		constexpr auto MaskedMaterial = 0x510; // UMaterialInterface*
		constexpr auto MaskedMaterial_OneSided = 0x518; // UMaterialInterface*
		constexpr auto RenderTarget = 0x520; // UTextureRenderTarget2D*
		constexpr auto MaterialInstance = 0x528; // UMaterialInstanceDynamic*
		constexpr auto bAddedToScreen = 0x530; // bool
		constexpr auto bEditTimeUsable = 0x531; // bool
		constexpr auto SharedLayerName = 0x534; // FName
		constexpr auto LayerZOrder = 0x53c; // int32_t
		constexpr auto GeometryMode = 0x540; // EWidgetGeometryMode
		constexpr auto CylinderArcAngle = 0x544; // float
		constexpr auto TickMode = 0x548; // ETickMode
		constexpr auto Widget = 0x570; // UUserWidget*
	}

	namespace n_ASFPSPatrol {
		constexpr auto PatrolPoints = 0x238; // TArray<USFPSPatrolPoint*>
		constexpr auto CharacterSets = 0x248; // USFPSAICharacterSets*
		constexpr auto AIConfig = 0x250; // USFPSAIConfig*
		constexpr auto Route = 0x260; // USFPSACRoute*
		constexpr auto MaxPatrolPoints = 0x268; // int32_t
		constexpr auto TimeDeviation = 0x26c; // float
		constexpr auto DeadTimeMin = 0x270; // float
		constexpr auto DeadTimeMax = 0x274; // float
		constexpr auto bCanSpawnSpecialPatrolPoints = 0x278; // bool
	}

	namespace n_UAsyncActionLoadPrimaryAssetClassList {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionLogarithm10 {
		constexpr auto X = 0x40; // FExpressionInput
	}

	namespace n_UPlayer {
		constexpr auto PlayerController = 0x30; // APlayerController*
		constexpr auto CurrentNetSpeed = 0x38; // int32_t
		constexpr auto ConfiguredInternetSpeed = 0x3c; // int32_t
		constexpr auto ConfiguredLanSpeed = 0x40; // int32_t
	}

	namespace n_USpringArmComponent {
		constexpr auto TargetArmLength = 0x1f8; // float
		constexpr auto SocketOffset = 0x1fc; // FVector
		constexpr auto TargetOffset = 0x208; // FVector
		constexpr auto ProbeSize = 0x214; // float
		constexpr auto ProbeChannel = 0x218; // ECollisionChannel
		constexpr auto bDoCollisionTest = 0x21c; // char : 1
		constexpr auto bUsePawnControlRotation = 0x21c; // char : 1
		constexpr auto bInheritPitch = 0x21c; // char : 1
		constexpr auto bInheritYaw = 0x21c; // char : 1
		constexpr auto bInheritRoll = 0x21c; // char : 1
		constexpr auto bEnableCameraLag = 0x21c; // char : 1
		constexpr auto bEnableCameraRotationLag = 0x21c; // char : 1
		constexpr auto bUseCameraLagSubstepping = 0x21c; // char : 1
		constexpr auto bDrawDebugLagMarkers = 0x21d; // char : 1
		constexpr auto CameraLagSpeed = 0x220; // float
		constexpr auto CameraRotationLagSpeed = 0x224; // float
		constexpr auto CameraLagMaxTimeStep = 0x228; // float
		constexpr auto CameraLagMaxDistance = 0x22c; // float
	}

	namespace n_AResonanceAudioDirectivityVisualizer {
		constexpr auto Material = 0x290; // UMaterial*
		constexpr auto Settings = 0x298; // UResonanceAudioSpatializationSourceSettings*
	}

	namespace n_UProceduralMeshComponent {
		constexpr auto bUseComplexAsSimpleCollision = 0x480; // bool
		constexpr auto bUseAsyncCooking = 0x481; // bool
		constexpr auto ProcMeshBodySetup = 0x488; // UBodySetup*
		constexpr auto ProcMeshSections = 0x490; // TArray<FProcMeshSection>
		constexpr auto CollisionConvexElems = 0x4a0; // TArray<FKConvexElem>
		constexpr auto LocalBounds = 0x4b0; // FBoxSphereBounds
		constexpr auto AsyncBodySetupQueue = 0x4d0; // TArray<UBodySetup*>
	}

	namespace n_ADatasmithSceneActor {
		constexpr auto Scene = 0x220; // UDatasmithScene*
		constexpr auto RelatedActors = 0x228; // TMap<FName, TSoftObjectPtr<AActor>>
	}

	namespace n_UScaleBox {
		constexpr auto Stretch = 0x120; // EStretch
		constexpr auto StretchDirection = 0x121; // EStretchDirection
		constexpr auto UserSpecifiedScale = 0x124; // float
		constexpr auto IgnoreInheritedScale = 0x128; // bool
	}

	namespace n_ABMF_RespawnMarker_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
	}

	namespace n_UARLifeCycleComponent {
		constexpr auto OnARActorSpawnedDelegate = 0x1f8; // FMulticastInlineDelegate
		constexpr auto OnARActorToBeDestroyedDelegate = 0x208; // FMulticastInlineDelegate
	}

	namespace n_UGizmoComponentAxisSource {
		constexpr auto Component = 0x30; // USceneComponent*
		constexpr auto AxisIndex = 0x38; // int32_t
		constexpr auto bLocalAxes = 0x3c; // bool
	}

	namespace n_UInputTouchDelegateBinding {
		constexpr auto InputTouchDelegateBindings = 0x28; // TArray<FBlueprintInputTouchDelegateBinding>
	}

	namespace n_UMaterialExpressionSaturate {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_ASFPSAirDropCargo {
		constexpr auto MovementComponent = 0x240; // UProjectileMovementComponent*
		constexpr auto LandedSound = 0x248; // USoundCue*
	}

	namespace n_Arecoveryitem_medikit_bandage_C {
		constexpr auto Timer = 0x420; // float
	}

	namespace n_ABMF_Gates_01_C {
		constexpr auto Box1 = 0x358; // UBoxComponent*
		constexpr auto StaticMesh1 = 0x360; // UStaticMeshComponent*
		constexpr auto Box = 0x368; // UBoxComponent*
		constexpr auto StaticMesh = 0x370; // UStaticMeshComponent*
		constexpr auto SFPSACDoor = 0x378; // USFPSACDoor*
		constexpr auto SFPSACBaseCollision = 0x380; // USFPSACBaseCollision*
	}

	namespace n_At_RecoveryItem_C {
		constexpr auto Trace = 0x410; // UBoxComponent*
		constexpr auto Mesh = 0x418; // UStaticMeshComponent*
	}

	namespace n_UIntSerialization {
		constexpr auto UnsignedInt16Variable = 0x28; // uint16_t
		constexpr auto UnsignedInt32Variable = 0x2c; // uint32_t
		constexpr auto UnsignedInt64Variable = 0x30; // uint64_t
		constexpr auto SignedInt8Variable = 0x38; // int8_t
		constexpr auto SignedInt16Variable = 0x3a; // int16_t
		constexpr auto SignedInt64Variable = 0x40; // int64_t
		constexpr auto UnsignedInt8Variable = 0x48; // char
		constexpr auto SignedInt32Variable = 0x4c; // int32_t
	}

	namespace n_USFPSDebrisHandler {
		constexpr auto ShellManager = 0x28; // USFPSShellManager*
	}

	namespace n_UCollisionProfile {
		constexpr auto Profiles = 0x38; // TArray<FCollisionResponseTemplate>
		constexpr auto DefaultChannelResponses = 0x48; // TArray<FCustomChannelSetup>
		constexpr auto EditProfiles = 0x58; // TArray<FCustomProfile>
		constexpr auto ProfileRedirects = 0x68; // TArray<FRedirector>
		constexpr auto CollisionChannelRedirects = 0x78; // TArray<FRedirector>
	}

	namespace n_UParticleModule {
		constexpr auto bSpawnModule = 0x28; // char : 1
		constexpr auto bUpdateModule = 0x28; // char : 1
		constexpr auto bFinalUpdateModule = 0x28; // char : 1
		constexpr auto bUpdateForGPUEmitter = 0x28; // char : 1
		constexpr auto bCurvesAsColor = 0x28; // char : 1
		constexpr auto b3DDrawMode = 0x28; // char : 1
		constexpr auto bSupported3DDrawMode = 0x28; // char : 1
		constexpr auto bEnabled = 0x28; // char : 1
		constexpr auto bEditable = 0x29; // char : 1
		constexpr auto LODDuplicate = 0x29; // char : 1
		constexpr auto bSupportsRandomSeed = 0x29; // char : 1
		constexpr auto bRequiresLoopingNotification = 0x29; // char : 1
		constexpr auto LODValidity = 0x2a; // char
	}

	namespace n_ATransformGizmoActor {
		constexpr auto TranslateX = 0x220; // UPrimitiveComponent*
		constexpr auto TranslateY = 0x228; // UPrimitiveComponent*
		constexpr auto TranslateZ = 0x230; // UPrimitiveComponent*
		constexpr auto TranslateYZ = 0x238; // UPrimitiveComponent*
		constexpr auto TranslateXZ = 0x240; // UPrimitiveComponent*
		constexpr auto TranslateXY = 0x248; // UPrimitiveComponent*
		constexpr auto RotateX = 0x250; // UPrimitiveComponent*
		constexpr auto RotateY = 0x258; // UPrimitiveComponent*
		constexpr auto RotateZ = 0x260; // UPrimitiveComponent*
		constexpr auto UniformScale = 0x268; // UPrimitiveComponent*
		constexpr auto AxisScaleX = 0x270; // UPrimitiveComponent*
		constexpr auto AxisScaleY = 0x278; // UPrimitiveComponent*
		constexpr auto AxisScaleZ = 0x280; // UPrimitiveComponent*
		constexpr auto PlaneScaleYZ = 0x288; // UPrimitiveComponent*
		constexpr auto PlaneScaleXZ = 0x290; // UPrimitiveComponent*
		constexpr auto PlaneScaleXY = 0x298; // UPrimitiveComponent*
	}

	namespace n_USFPSGameInstance {
		constexpr auto VaRestCallback0 = 0x2ec; // FDelegate
		constexpr auto VaRestCallback1 = 0x2fc; // FDelegate
		constexpr auto VaRestCallback2 = 0x30c; // FDelegate
		constexpr auto VaRestCallback3 = 0x31c; // FDelegate
		constexpr auto VaRestCallback4 = 0x32c; // FDelegate
		constexpr auto RespawnActor = 0x448; // AActor*
		constexpr auto RespawnActorClass = 0x450; // AActor*
		constexpr auto FormMainMenu = 0x648; // UUserWidget*
		constexpr auto FormLoadingScreen = 0x650; // UUserWidget*
		constexpr auto KickMSGList = 0x6b0; // TArray<FText>
		constexpr auto bIsClientKick = 0x6c0; // bool
		constexpr auto BeaconHost = 0x6c8; // ASFPSOnlineBeaconHost*
		constexpr auto BeaconHostObject = 0x6d0; // ASFPSOnlineBeaconHostObject*
		constexpr auto InventoryHandler = 0x6d8; // USFPSInventoryHandler*
		constexpr auto MessageHandler = 0x6e0; // USFPSMessageHandler*
		constexpr auto FontHandler = 0x6e8; // USFPSFontHandler*
		constexpr auto UseObjectHandler = 0x6f0; // USFPSUseObjectHandler*
		constexpr auto SplitHandler = 0x6f8; // USFPSSplitHandler*
		constexpr auto MainInterfaceHandler = 0x700; // USFPSMainInterfaceHandler*
		constexpr auto SettingsHandler = 0x708; // USFPSSettingsHandler*
		constexpr auto LockBreakingHandler = 0x710; // USFPSLockBreakingHandler*
		constexpr auto DebrisHandler = 0x718; // USFPSDebrisHandler*
		constexpr auto MapHandler = 0x720; // USFPSMapHandler*
		constexpr auto CraftEditor = 0x728; // USFPSCraftEditor*
		constexpr auto SoundHandler = 0x730; // USFPSSoundHandler*
		constexpr auto ServerListHandler = 0x738; // USFPSServerListHandler*
		constexpr auto ChatHandler = 0x740; // USFPSChatHandler*
		constexpr auto CreatePlayerHandler = 0x748; // USFPSCreatePlayerHandler*
		constexpr auto AdminHandler = 0x750; // USFPSAdminHandler*
		constexpr auto BaseHandler = 0x758; // USFPSBaseHandler*
		constexpr auto b_dbg_BallisticsTracesEnabled = 0x760; // bool
		constexpr auto b_dbg_CraftDebugEnabled = 0x761; // bool
		constexpr auto ParametersCollection = 0x768; // UMaterialParameterCollection*
		constexpr auto BaseSphere = 0x770; // AActor*
		constexpr auto UISounds = 0x8c8; // USFPSUISoundTable*
		constexpr auto MusicAudioComponent = 0x8d0; // UAudioComponent*
		constexpr auto AfterDeathActorClass = 0x8d8; // UObject*
	}

	namespace n_AMagicLeapSharedWorldGameState {
		constexpr auto SharedWorldData = 0x290; // FMagicLeapSharedWorldSharedData
		constexpr auto AlignmentTransforms = 0x2a0; // FMagicLeapSharedWorldAlignmentTransforms
		constexpr auto OnSharedWorldDataUpdated = 0x2b0; // FMulticastInlineDelegate
		constexpr auto OnAlignmentTransformsUpdated = 0x2c0; // FMulticastInlineDelegate
	}

	namespace n_UMeshSelectionSet {
		constexpr auto Vertices = 0x40; // TArray<int32_t>
		constexpr auto Edges = 0x50; // TArray<int32_t>
		constexpr auto Faces = 0x60; // TArray<int32_t>
		constexpr auto Groups = 0x70; // TArray<int32_t>
	}

	namespace n_UStreamMediaSource {
		constexpr auto StreamUrl = 0x88; // FString
	}

	namespace n_UTimecodeProvider {
		constexpr auto FrameDelay = 0x28; // float
	}

	namespace n_UMaterialExpressionMaterialAttributeLayers {
		constexpr auto ParameterName = 0x40; // FName
		constexpr auto ExpressionGUID = 0x48; // FGuid
		constexpr auto Input = 0x58; // FMaterialAttributesInput
		constexpr auto DefaultLayers = 0x70; // FMaterialLayersFunctions
		constexpr auto LayerCallers = 0xb0; // TArray<UMaterialExpressionMaterialFunctionCall*>
		constexpr auto NumActiveLayerCallers = 0xc0; // int32_t
		constexpr auto BlendCallers = 0xc8; // TArray<UMaterialExpressionMaterialFunctionCall*>
		constexpr auto NumActiveBlendCallers = 0xd8; // int32_t
		constexpr auto bIsLayerGraphBuilt = 0xdc; // bool
	}

	namespace n_UMovieSceneHookSection {
		constexpr auto bRequiresRangedHook = 0xf8; // char : 1
		constexpr auto bRequiresTriggerHooks = 0xf8; // char : 1
	}

	namespace n_UInputBehaviorSet {
		constexpr auto Behaviors = 0x28; // TArray<FBehaviorInfo>
	}

	namespace n_USoundNodeLooping {
		constexpr auto LoopCount = 0x48; // int32_t
		constexpr auto bLoopIndefinitely = 0x4c; // char : 1
	}

	namespace n_ABMF_Tower_01_C {
		constexpr auto TopBuildBase = 0x358; // UBoxComponent*
		constexpr auto SFPSACBaseCollision2 = 0x360; // USFPSACBaseCollision*
		constexpr auto Stair_tower_wood_01 = 0x368; // UChildActorComponent*
	}

	namespace n_UDecalComponent {
		constexpr auto DecalMaterial = 0x1f8; // UMaterialInterface*
		constexpr auto SortOrder = 0x200; // int32_t
		constexpr auto FadeScreenSize = 0x204; // float
		constexpr auto FadeStartDelay = 0x208; // float
		constexpr auto FadeDuration = 0x20c; // float
		constexpr auto FadeInDuration = 0x210; // float
		constexpr auto FadeInStartDelay = 0x214; // float
		constexpr auto bDestroyOwnerAfterFade = 0x218; // char : 1
		constexpr auto DecalSize = 0x21c; // FVector
	}

	namespace n_UMovieSceneTrackInstanceSystem {
		constexpr auto Instantiator = 0x40; // UMovieSceneTrackInstanceInstantiator*
	}

	namespace n_UEnvQueryManager {
		constexpr auto InstanceCache = 0xa8; // TArray<FEnvQueryInstanceCache>
		constexpr auto LocalContexts = 0xb8; // TArray<UEnvQueryContext*>
		constexpr auto GCShieldedWrappers = 0xc8; // TArray<UEnvQueryInstanceBlueprintWrapper*>
		constexpr auto MaxAllowedTestingTime = 0x12c; // float
		constexpr auto bTestQueriesUsingBreadth = 0x130; // bool
		constexpr auto QueryCountWarningThreshold = 0x134; // int32_t
		constexpr auto QueryCountWarningInterval = 0x138; // double
	}

	namespace n_ASFPSShootingRangeTarget {
		constexpr auto MeshRef = 0x220; // UMeshComponent*
		constexpr auto lbInfo = 0x228; // UTextRenderComponent*
		constexpr auto Target = 0x230; // UStaticMeshComponent*
		constexpr auto DamageClient = 0x238; // UStaticMeshComponent*
		constexpr auto DamageServer = 0x240; // UStaticMeshComponent*
		constexpr auto ClearTrigger = 0x2e8; // UStaticMeshComponent*
	}

	namespace n_ABox_mil_03_C {
		constexpr auto Box_military_cap_01 = 0x220; // UStaticMeshComponent*
		constexpr auto Box_military_01 = 0x228; // UStaticMeshComponent*
	}

	namespace n_UMaterialExpressionConstant2Vector {
		constexpr auto R = 0x40; // float
		constexpr auto G = 0x44; // float
	}

	namespace n_UGizmoAxisIntervalParameterSource {
		constexpr auto FloatParameterSource = 0x48; // TScriptInterface<IGizmoFloatParameterSource>
		constexpr auto MinParameter = 0x58; // float
		constexpr auto MaxParameter = 0x5c; // float
	}

	namespace n_Ascope_opt_pso_C {
		constexpr auto cod_4x_reticles = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_Aweapmf_DTK_762x39_03_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UMaterialExpressionTextureSample {
		constexpr auto Coordinates = 0x48; // FExpressionInput
	}

	namespace n_UParticleModuleMeshMaterial {
		constexpr auto MeshMaterials = 0x30; // TArray<UMaterialInterface*>
	}

	namespace n_UPlaneReflectionCaptureComponent {
		constexpr auto InfluenceRadiusScale = 0x270; // float
		constexpr auto PreviewInfluenceRadius = 0x278; // UDrawSphereComponent*
		constexpr auto PreviewCaptureBox = 0x280; // UBoxComponent*
	}

	namespace n_APaperFlipbookActor {
		constexpr auto RenderComponent = 0x220; // UPaperFlipbookComponent*
	}

	namespace n_ABM_WallTriaWindow_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UAISense_Damage {
		constexpr auto RegisteredEvents = 0x80; // TArray<FAIDamageEvent>
	}

	namespace n_UCheckBoxWidgetStyle {
		constexpr auto CheckBoxStyle = 0x30; // FCheckBoxStyle
	}

	namespace n_AInteractiveFoliageActor {
		constexpr auto CapsuleComponent = 0x230; // UCapsuleComponent*
		constexpr auto TouchingActorEntryPosition = 0x238; // FVector
		constexpr auto FoliageVelocity = 0x244; // FVector
		constexpr auto FoliageForce = 0x250; // FVector
		constexpr auto FoliagePosition = 0x25c; // FVector
		constexpr auto FoliageDamageImpulseScale = 0x268; // float
		constexpr auto FoliageTouchImpulseScale = 0x26c; // float
		constexpr auto FoliageStiffness = 0x270; // float
		constexpr auto FoliageStiffnessQuadratic = 0x274; // float
		constexpr auto FoliageDamping = 0x278; // float
		constexpr auto MaxDamageImpulse = 0x27c; // float
		constexpr auto MaxTouchImpulse = 0x280; // float
		constexpr auto MaxForce = 0x284; // float
		constexpr auto Mass = 0x288; // float
	}

	namespace n_UTexture2DDynamic {
		constexpr auto Format = 0x180; // EPixelFormat
	}

	namespace n_UAnimSequenceLevelSequenceLink {
		constexpr auto SkelTrackGuid = 0x28; // FGuid
		constexpr auto PathToLevelSequence = 0x38; // FSoftObjectPath
	}

	namespace n_ULeaderboardFlushCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UFormDlg_InputCode_C {
		constexpr auto UberGraphFrame = 0x3a8; // FPointerToUberGraphFrame
		constexpr auto btn0 = 0x3b0; // UButton*
		constexpr auto btn1 = 0x3b8; // UButton*
		constexpr auto btn2 = 0x3c0; // UButton*
		constexpr auto btn3 = 0x3c8; // UButton*
		constexpr auto btn4 = 0x3d0; // UButton*
		constexpr auto btn5 = 0x3d8; // UButton*
		constexpr auto btn6 = 0x3e0; // UButton*
		constexpr auto btn7 = 0x3e8; // UButton*
		constexpr auto btn8 = 0x3f0; // UButton*
		constexpr auto btn9 = 0x3f8; // UButton*
		constexpr auto btnB = 0x400; // UButton*
		constexpr auto btnE = 0x408; // UButton*
	}

	namespace n_UParticleModuleLocationWorldOffset_Seeded {
		constexpr auto RandomSeedInfo = 0x80; // FParticleRandomSeedInfo
	}

	namespace n_UABP_weapon_firearms_gun_TT_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_6 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_5 = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_4 = 0x3b0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_3 = 0x3d8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x400; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x428; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_3 = 0x450; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_3 = 0x4d0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x500; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x580; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x5b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x630; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x660; // FAnimNode_StateMachine
	}

	namespace n_UMaterialExpressionMapARPassthroughCameraUV {
		constexpr auto Coordinates = 0x40; // FExpressionInput
	}

	namespace n_UTexture2D {
		constexpr auto LevelIndex = 0x178; // int32_t
		constexpr auto FirstResourceMemMip = 0x17c; // int32_t
		constexpr auto bTemporarilyDisableStreaming = 0x180; // char : 1
		constexpr auto AddressX = 0x181; // TextureAddress
		constexpr auto AddressY = 0x182; // TextureAddress
		constexpr auto ImportedSize = 0x184; // FIntPoint
	}

	namespace n_USoundSourceBus {
		constexpr auto SourceBusChannels = 0x370; // ESourceBusChannels
		constexpr auto SourceBusDuration = 0x374; // float
		constexpr auto AudioBus = 0x378; // UAudioBus*
		constexpr auto bAutoDeactivateWhenSilent = 0x380; // char : 1
	}

	namespace n_UTimelineComponent {
		constexpr auto TheTimeline = 0xb0; // FTimeline
		constexpr auto bIgnoreTimeDilation = 0x148; // char : 1
	}

	namespace n_UPawnMovementComponent {
		constexpr auto PawnOwner = 0x130; // APawn*
	}

	namespace n_UInterpTrackInstAnimControl {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_AMatineeActorCameraAnim {
		constexpr auto CameraAnim = 0x2c8; // UCameraAnim*
	}

	namespace n_UMovieSceneCameraCutSection {
		constexpr auto bLockPreviousCamera = 0xf0; // bool
		constexpr auto CameraGuid = 0xf4; // FGuid
		constexpr auto CameraBindingID = 0x104; // FMovieSceneObjectBindingID
		constexpr auto InitialCameraCutTransform = 0x120; // FTransform
		constexpr auto bHasInitialCameraCutTransform = 0x150; // bool
	}

	namespace n_UMaterialShaderQualitySettings {
		constexpr auto ForwardSettingMap = 0x28; // TMap<FName, UShaderPlatformQualitySettings*>
	}

	namespace n_UGridSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
		constexpr auto Row = 0x4c; // int32_t
		constexpr auto RowSpan = 0x50; // int32_t
		constexpr auto Column = 0x54; // int32_t
		constexpr auto ColumnSpan = 0x58; // int32_t
		constexpr auto Layer = 0x5c; // int32_t
		constexpr auto Nudge = 0x60; // FVector2D
	}

	namespace n_ULocalPlayer {
		constexpr auto ViewportClient = 0x70; // UGameViewportClient*
		constexpr auto AspectRatioAxisConstraint = 0x94; // EAspectRatioAxisConstraint
		constexpr auto PendingLevelPlayerControllerClass = 0x98; // APlayerController*
		constexpr auto bSentSplitJoin = 0xa0; // char : 1
		constexpr auto ControllerId = 0xb8; // int32_t
	}

	namespace n_UGeometryCacheTrack_FlipbookAnimation {
		constexpr auto NumMeshSamples = 0x58; // uint32_t
	}

	namespace n_UGameplayTask_WaitDelay {
		constexpr auto OnFinish = 0x68; // FMulticastInlineDelegate
	}

	namespace n_UBTDecorator_KeepInCone {
		constexpr auto ConeHalfAngle = 0x68; // float
		constexpr auto ConeOrigin = 0x70; // FBlackboardKeySelector
		constexpr auto Observed = 0x98; // FBlackboardKeySelector
		constexpr auto bUseSelfAsOrigin = 0xc0; // char : 1
		constexpr auto bUseSelfAsObserved = 0xc0; // char : 1
	}

	namespace n_UParticleModuleLocationDirect {
		constexpr auto Location = 0x30; // FRawDistributionVector
		constexpr auto LocationOffset = 0x78; // FRawDistributionVector
		constexpr auto ScaleFactor = 0xc0; // FRawDistributionVector
		constexpr auto Direction = 0x108; // FRawDistributionVector
	}

	namespace n_UParticleModuleSubUVMovie {
		constexpr auto bUseEmitterTime = 0x70; // char : 1
		constexpr auto FrameRate = 0x78; // FRawDistributionFloat
		constexpr auto StartingFrame = 0xa8; // int32_t
	}

	namespace n_UEnvelopeFollowerListener {
		constexpr auto OnEnvelopeFollowerUpdate = 0xb0; // FMulticastInlineDelegate
	}

	namespace n_UFormBase_C {
		constexpr auto btnClose = 0x260; // UButton*
		constexpr auto btnDelete = 0x268; // UButton*
		constexpr auto btnRegistration = 0x270; // UCheckBox*
		constexpr auto Registration_btnAdd = 0x278; // UButton*
		constexpr auto Registration_btnCopy = 0x280; // UButton*
		constexpr auto Registration_btnCopyAdded = 0x288; // UButton*
		constexpr auto Registration_btnDel = 0x290; // UButton*
		constexpr auto Registration_btnSteamProfile = 0x298; // UButton*
		constexpr auto Registration_btnSteamProfileAdded = 0x2a0; // UButton*
	}

	namespace n_UfrmAllSettingsComboboxes_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnMain = 0x268; // UButton*
		constexpr auto lbText = 0x270; // UTextBlock*
		constexpr auto FParentCombobox = 0x278; // UComboBoxString*
		constexpr auto FComboboxString = 0x280; // FString
	}

	namespace n_UModulatorOuterParams {
		constexpr auto ValueMin = 0x28; // float
		constexpr auto ValueMax = 0x2c; // float
	}

	namespace n_USFPSAnimEvent_Weap_ReloadingFlag {
		constexpr auto bReloading = 0x38; // bool
		constexpr auto bForCursor = 0x39; // bool
	}

	namespace n_UParticleModuleAcceleration {
		constexpr auto Acceleration = 0x38; // FRawDistributionVector
		constexpr auto bApplyOwnerScale = 0x80; // char : 1
	}

	namespace n_UFormNDA_C {
		constexpr auto btnAccept = 0x260; // UButton*
	}

	namespace n_Aweapmf_silencer_556x45_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UMovieSceneCameraCutTrack {
		constexpr auto bCanBlend = 0x90; // bool
		constexpr auto Sections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_UNavigationDataChunk {
		constexpr auto NavigationDataName = 0x28; // FName
	}

	namespace n_USFPSPatrolManager {
		constexpr auto AllPatrols = 0x28; // TArray<ASFPSPatrol*>
		constexpr auto SpecialPatrols = 0x38; // TArray<ASFPSPatrol*>
		constexpr auto SpecialPatrolPoints = 0x48; // TArray<USFPSPatrolPointSpecial*>
		constexpr auto ItemToSpawn = 0x60; // ASFPSGameplayItem*
		constexpr auto MaxSpecialPatrols = 0x68; // int32_t
		constexpr auto MinTimeToRemoveSpecialPatrol = 0x6c; // float
		constexpr auto MaxTimeToRemoveSpecialPatrol = 0x70; // float
		constexpr auto MinTimeToSpawnSpecialPatrol = 0x80; // float
		constexpr auto MaxTimeToSpawnSpecialPatrol = 0x84; // float
		constexpr auto SpecialMonstersInfo = 0x88; // TArray<FSFPSMonsterSpawnedInfo>
		constexpr auto ClientInfoType = 0x98; // ESFPSGameplayEventInfoType
	}

	namespace n_UAnimNotify_PlaySound {
		constexpr auto Sound = 0x38; // USoundBase*
		constexpr auto VolumeMultiplier = 0x40; // float
		constexpr auto PitchMultiplier = 0x44; // float
		constexpr auto bFollow = 0x48; // char : 1
		constexpr auto AttachName = 0x4c; // FName
	}

	namespace n_Aweapon_firearms_rifle_aks74u_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightOpen = 0x7f0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_ULevelVariantSets {
		constexpr auto DirectorClass = 0x28; // UObject*
		constexpr auto VariantSets = 0x30; // TArray<UVariantSet*>
	}

	namespace n_UPhysicalMaterialMask {
		constexpr auto UVChannelIndex = 0x28; // int32_t
		constexpr auto AddressX = 0x2c; // TextureAddress
		constexpr auto AddressY = 0x2d; // TextureAddress
	}

	namespace n_USequenceCameraShakePattern {
		constexpr auto Sequence = 0x28; // UCameraAnimationSequence*
		constexpr auto PlayRate = 0x30; // float
		constexpr auto Scale = 0x34; // float
		constexpr auto BlendInTime = 0x38; // float
		constexpr auto BlendOutTime = 0x3c; // float
		constexpr auto RandomSegmentDuration = 0x40; // float
		constexpr auto bRandomSegment = 0x44; // bool
		constexpr auto Player = 0x48; // USequenceCameraShakeSequencePlayer*
		constexpr auto CameraStandIn = 0x50; // USequenceCameraShakeCameraStandIn*
	}

	namespace n_At_SteelArm_C {
		constexpr auto Trace = 0x610; // UBoxComponent*
		constexpr auto Mesh = 0x618; // UStaticMeshComponent*
	}

	namespace n_ULandscapeSplineSegment {
		constexpr auto Connections = 0x28; // FLandscapeSplineSegmentConnection [0x2]
		constexpr auto SplineInfo = 0x58; // FInterpCurveVector
		constexpr auto Points = 0x70; // TArray<FLandscapeSplineInterpPoint>
		constexpr auto Bounds = 0x80; // FBox
		constexpr auto LocalMeshComponents = 0xa0; // TArray<USplineMeshComponent*>
	}

	namespace n_UBookMark2D {
		constexpr auto Zoom2D = 0x28; // float
		constexpr auto Location = 0x2c; // FIntPoint
	}

	namespace n_UGizmoTransformProxyTransformSource {
		constexpr auto Proxy = 0x48; // UTransformProxy*
	}

	namespace n_UShapeComponent {
		constexpr auto ShapeBodySetup = 0x450; // UBodySetup*
		constexpr auto AreaClass = 0x458; // UNavAreaBase*
		constexpr auto ShapeColor = 0x460; // FColor
		constexpr auto bDrawOnlyIfSelected = 0x464; // char : 1
		constexpr auto bShouldCollideWhenPlacing = 0x464; // char : 1
		constexpr auto bDynamicObstacle = 0x464; // char : 1
	}

	namespace n_UAREnvironmentCaptureProbe {
		constexpr auto Extent = 0xf8; // FVector
		constexpr auto EnvironmentCaptureTexture = 0x108; // UAREnvironmentCaptureProbeTexture*
	}

	namespace n_USFPSBaseManager {
		constexpr auto Bases = 0x28; // TArray<USFPSBase*>
	}

	namespace n_UParticleModuleVectorFieldLocal {
		constexpr auto VectorField = 0x30; // UVectorField*
		constexpr auto RelativeTranslation = 0x38; // FVector
		constexpr auto RelativeRotation = 0x44; // FRotator
		constexpr auto RelativeScale3D = 0x50; // FVector
		constexpr auto Intensity = 0x5c; // float
		constexpr auto Tightness = 0x60; // float
		constexpr auto bIgnoreComponentTransform = 0x64; // char : 1
		constexpr auto bTileX = 0x64; // char : 1
		constexpr auto bTileY = 0x64; // char : 1
		constexpr auto bTileZ = 0x64; // char : 1
		constexpr auto bUseFixDT = 0x64; // char : 1
	}

	namespace n_UParticleModuleAccelerationConstant {
		constexpr auto Acceleration = 0x38; // FVector
	}

	namespace n_UABP_weapon_firearms_sg_mp43_C {
		constexpr auto UberGraphFrame = 0x310; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x318; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x348; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x3c8; // FAnimNode_Slot
	}

	namespace n_USkyAtmosphereComponent {
		constexpr auto TransformMode = 0x1f8; // ESkyAtmosphereTransformMode
		constexpr auto BottomRadius = 0x1fc; // float
		constexpr auto GroundAlbedo = 0x200; // FColor
		constexpr auto AtmosphereHeight = 0x204; // float
		constexpr auto MultiScatteringFactor = 0x208; // float
		constexpr auto TraceSampleCountScale = 0x20c; // float
		constexpr auto RayleighScatteringScale = 0x210; // float
		constexpr auto RayleighScattering = 0x214; // FLinearColor
		constexpr auto RayleighExponentialDistribution = 0x224; // float
		constexpr auto MieScatteringScale = 0x228; // float
		constexpr auto MieScattering = 0x22c; // FLinearColor
		constexpr auto MieAbsorptionScale = 0x23c; // float
		constexpr auto MieAbsorption = 0x240; // FLinearColor
		constexpr auto MieAnisotropy = 0x250; // float
		constexpr auto MieExponentialDistribution = 0x254; // float
		constexpr auto OtherAbsorptionScale = 0x258; // float
		constexpr auto OtherAbsorption = 0x25c; // FLinearColor
		constexpr auto OtherTentDistribution = 0x26c; // FTentDistribution
		constexpr auto SkyLuminanceFactor = 0x278; // FLinearColor
		constexpr auto AerialPespectiveViewDistanceScale = 0x288; // float
		constexpr auto HeightFogContribution = 0x28c; // float
		constexpr auto TransmittanceMinLightElevationAngle = 0x290; // float
		constexpr auto AerialPerspectiveStartDepth = 0x294; // float
		constexpr auto bStaticLightingBuiltGUID = 0x2bc; // FGuid
	}

	namespace n_UInterpCurveEdSetup {
		constexpr auto Tabs = 0x28; // TArray<FCurveEdTab>
		constexpr auto ActiveTab = 0x38; // int32_t
	}

	namespace n_ASplineMeshActor {
		constexpr auto SplineMeshComponent = 0x220; // USplineMeshComponent*
	}

	namespace n_Aweapon_firearms_gun_tt_C {
		constexpr auto SFPSACWeaponMFInventory = 0x7e0; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7e8; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f0; // UStaticMeshComponent*
	}

	namespace n_UMovieSceneEventTriggerSection {
		constexpr auto EventChannel = 0xf0; // FMovieSceneEventChannel
	}

	namespace n_UMovieSceneGeometryCacheSection {
		constexpr auto Params = 0xe8; // FMovieSceneGeometryCacheParams
	}

	namespace n_UFoliageInstancedStaticMeshComponent {
		constexpr auto OnInstanceTakePointDamage = 0x678; // FMulticastInlineDelegate
		constexpr auto OnInstanceTakeRadialDamage = 0x688; // FMulticastInlineDelegate
		constexpr auto GenerationGuid = 0x698; // FGuid
	}

	namespace n_USubmixEffectMultibandCompressorPreset {
		constexpr auto Settings = 0xb0; // FSubmixEffectMultibandCompressorSettings
	}

	namespace n_UfrmChatItem_C {
		constexpr auto UberGraphFrame = 0x310; // FPointerToUberGraphFrame
		constexpr auto btnMain = 0x318; // UButton*
	}

	namespace n_UClickDragInputBehavior {
		constexpr auto bUpdateModifiersDuringDrag = 0x120; // bool
	}

	namespace n_USFPSAI_TRandomLookAt {
		constexpr auto bUseCharacterParams = 0x70; // bool
		constexpr auto Source = 0x71; // ESFPSAI_TRandomLookAtSource
		constexpr auto Params = 0x74; // FSFPSAIParamsLookAround
		constexpr auto bIgnoreLookAroundOrigin = 0x8c; // bool
	}

	namespace n_UClothPhysicalMeshDataNv_Legacy {
		constexpr auto MaxDistances = 0xe0; // TArray<float>
		constexpr auto BackstopDistances = 0xf0; // TArray<float>
		constexpr auto BackstopRadiuses = 0x100; // TArray<float>
		constexpr auto AnimDriveMultipliers = 0x110; // TArray<float>
	}

	namespace n_UUniformScalar {
		constexpr auto Magnitude = 0xb0; // float
	}

	namespace n_UMovieSceneMaterialTrack {
		constexpr auto Sections = 0x90; // TArray<UMovieSceneSection*>
	}

	namespace n_UResonanceAudioSettings {
		constexpr auto OutputSubmix = 0x28; // FSoftObjectPath
		constexpr auto QualityMode = 0x40; // ERaQualityMode
		constexpr auto GlobalReverbPreset = 0x48; // FSoftObjectPath
		constexpr auto GlobalSourcePreset = 0x60; // FSoftObjectPath
	}

	namespace n_Aweapon_firearms_rifle_akm_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SideBracket_base = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_UTextureRenderTarget2DArray {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto SizeY = 0x184; // int32_t
		constexpr auto Slices = 0x188; // int32_t
		constexpr auto ClearColor = 0x18c; // FLinearColor
		constexpr auto OverrideFormat = 0x19c; // EPixelFormat
		constexpr auto bHDR = 0x19d; // char : 1
		constexpr auto bForceLinearGamma = 0x19d; // char : 1
	}

	namespace n_At_Material_C {
		constexpr auto Trace = 0x310; // UBoxComponent*
		constexpr auto Mesh = 0x318; // UStaticMeshComponent*
	}

	namespace n_Aweapon_firearms_mg_rpk_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SideBracket_base = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_UCanvasPanelSlot {
		constexpr auto LayoutData = 0x38; // FAnchorData
		constexpr auto bAutoSize = 0x60; // bool
		constexpr auto ZOrder = 0x64; // int32_t
	}

	namespace n_UAnimSharingInstance {
		constexpr auto RegisteredActors = 0x28; // TArray<AActor*>
		constexpr auto StateProcessor = 0x88; // UAnimationSharingStateProcessor*
		constexpr auto UsedAnimationSequences = 0xc8; // TArray<UAnimSequence*>
		constexpr auto StateEnum = 0xe8; // UEnum*
		constexpr auto SharingActor = 0xf0; // AActor*
	}

	namespace n_UDatasmithImportOptions {
		constexpr auto SearchPackagePolicy = 0x28; // EDatasmithImportSearchPackagePolicy
		constexpr auto MaterialConflictPolicy = 0x29; // EDatasmithImportAssetConflictPolicy
		constexpr auto TextureConflictPolicy = 0x2a; // EDatasmithImportAssetConflictPolicy
		constexpr auto StaticMeshActorImportPolicy = 0x2b; // EDatasmithImportActorPolicy
		constexpr auto LightImportPolicy = 0x2c; // EDatasmithImportActorPolicy
		constexpr auto CameraImportPolicy = 0x2d; // EDatasmithImportActorPolicy
		constexpr auto OtherActorImportPolicy = 0x2e; // EDatasmithImportActorPolicy
		constexpr auto MaterialQuality = 0x2f; // EDatasmithImportMaterialQuality
		constexpr auto BaseOptions = 0x30; // FDatasmithImportBaseOptions
		constexpr auto ReimportOptions = 0x44; // FDatasmithReimportOptions
		constexpr auto Filename = 0x48; // FString
		constexpr auto FilePath = 0x58; // FString
	}

	namespace n_UParticleModuleTypeDataGpu {
		constexpr auto EmitterInfo = 0x30; // FGPUSpriteEmitterInfo
		constexpr auto ResourceData = 0x2b0; // FGPUSpriteResourceData
		constexpr auto CameraMotionBlurAmount = 0x410; // float
		constexpr auto bClearExistingParticlesOnInit = 0x414; // char : 1
	}

	namespace n_At_CraftKit_C {
		constexpr auto Trace = 0x310; // UBoxComponent*
		constexpr auto SFPSACCraftKit = 0x318; // USFPSACCraftKit*
		constexpr auto Mesh = 0x320; // UStaticMeshComponent*
	}

	namespace n_UAnimMontage {
		constexpr auto BlendIn = 0xa8; // FAlphaBlend
		constexpr auto BlendInTime = 0xd8; // float
		constexpr auto BlendOut = 0xe0; // FAlphaBlend
		constexpr auto BlendOutTime = 0x110; // float
		constexpr auto BlendOutTriggerTime = 0x114; // float
		constexpr auto SyncGroup = 0x118; // FName
		constexpr auto SyncSlotIndex = 0x120; // int32_t
		constexpr auto MarkerData = 0x128; // FMarkerSyncData
		constexpr auto CompositeSections = 0x148; // TArray<FCompositeSection>
		constexpr auto SlotAnimTracks = 0x158; // TArray<FSlotAnimationTrack>
		constexpr auto BranchingPoints = 0x168; // TArray<FBranchingPoint>
		constexpr auto bEnableRootMotionTranslation = 0x178; // bool
		constexpr auto bEnableRootMotionRotation = 0x179; // bool
		constexpr auto bEnableAutoBlendOut = 0x17a; // bool
		constexpr auto RootMotionRootLock = 0x17b; // ERootMotionRootLock
		constexpr auto BranchingPointMarkers = 0x180; // TArray<FBranchingPointMarker>
		constexpr auto BranchingPointStateNotifyIndices = 0x190; // TArray<int32_t>
		constexpr auto TimeStretchCurve = 0x1a0; // FTimeStretchCurve
		constexpr auto TimeStretchCurveName = 0x1c8; // FName
	}

	namespace n_UMaterialExpressionShadowReplace {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Shadow = 0x54; // FExpressionInput
	}

	namespace n_UMaterialExpressionStep {
		constexpr auto Y = 0x40; // FExpressionInput
		constexpr auto X = 0x54; // FExpressionInput
		constexpr auto ConstY = 0x68; // float
		constexpr auto ConstX = 0x6c; // float
	}

	namespace n_USFPSACBaseCollision {
		constexpr auto Collisions = 0x478; // char [0x16]
	}

	namespace n_AAIController {
		constexpr auto bStartAILogicOnPossess = 0x2d0; // char : 1
		constexpr auto bStopAILogicOnUnposses = 0x2d0; // char : 1
		constexpr auto bLOSflag = 0x2d0; // char : 1
		constexpr auto bSkipExtraLOSChecks = 0x2d0; // char : 1
		constexpr auto bAllowStrafe = 0x2d0; // char : 1
		constexpr auto bWantsPlayerState = 0x2d0; // char : 1
		constexpr auto bSetControlRotationFromPawnOrientation = 0x2d0; // char : 1
		constexpr auto PathFollowingComponent = 0x2d8; // UPathFollowingComponent*
		constexpr auto BrainComponent = 0x2e0; // UBrainComponent*
		constexpr auto PerceptionComponent = 0x2e8; // UAIPerceptionComponent*
		constexpr auto ActionsComp = 0x2f0; // UPawnActionsComponent*
		constexpr auto Blackboard = 0x2f8; // UBlackboardComponent*
		constexpr auto CachedGameplayTasksComponent = 0x300; // UGameplayTasksComponent*
		constexpr auto DefaultNavigationFilterClass = 0x308; // UNavigationQueryFilter*
		constexpr auto ReceiveMoveCompleted = 0x310; // FMulticastInlineDelegate
	}

	namespace n_USFPSACInventory {
		constexpr auto CraftItems = 0x170; // TArray<ASFPSBaseItem*>
		constexpr auto Cell0 = 0x180; // TArray<ASFPSBaseItem*>
		constexpr auto Cell1 = 0x190; // TArray<ASFPSBaseItem*>
		constexpr auto CellLoaded = 0x1a0; // TArray<bool>
		constexpr auto Server_MoveToSteamInventory_Callback = 0x1e0; // FDelegate
		constexpr auto Server_MoveToInventory_FromSteamInventory_Callback = 0x1f0; // FDelegate
		constexpr auto Server_MoveToEquip_FromSteamInventory_Callback = 0x200; // FDelegate
		constexpr auto Server_MoveToWeaponMFInventory_FromSteamInventory_Callback = 0x210; // FDelegate
		constexpr auto Server_MoveToGround_FromSteamInventory_Callback = 0x220; // FDelegate
	}

	namespace n_UChildActorComponent {
		constexpr auto ChildActorClass = 0x1f8; // AActor*
		constexpr auto ChildActor = 0x200; // AActor*
		constexpr auto ChildActorTemplate = 0x208; // AActor*
	}

	namespace n_AShell_SR0_C {
		constexpr auto Mesh = 0x250; // UStaticMeshComponent*
	}

	namespace n_UDcxVehicleDriveComponentTank {
		constexpr auto DriveModel = 0x3b8; // EDcxVehicleDriveControlModelTank
	}

	namespace n_At_Tool_C {
		constexpr auto Trace = 0x310; // UBoxComponent*
		constexpr auto Mesh = 0x318; // UStaticMeshComponent*
	}

	namespace n_UAsyncActionHandleSaveGame {
		constexpr auto Completed = 0x30; // FMulticastInlineDelegate
		constexpr auto SaveGameObject = 0x60; // USaveGame*
	}

	namespace n_UMorphTarget {
		constexpr auto BaseSkelMesh = 0x28; // USkeletalMesh*
	}

	namespace n_UMultiLineEditableText {
		constexpr auto Text = 0x128; // FText
		constexpr auto HintText = 0x140; // FText
		constexpr auto HintTextDelegate = 0x158; // FDelegate
		constexpr auto WidgetStyle = 0x168; // FTextBlockStyle
		constexpr auto bIsReadOnly = 0x3d8; // bool
		constexpr auto Font = 0x3e0; // FSlateFontInfo
		constexpr auto SelectAllTextWhenFocused = 0x438; // bool
		constexpr auto ClearTextSelectionOnFocusLoss = 0x439; // bool
		constexpr auto RevertTextOnEscape = 0x43a; // bool
		constexpr auto ClearKeyboardFocusOnCommit = 0x43b; // bool
		constexpr auto AllowContextMenu = 0x43c; // bool
		constexpr auto VirtualKeyboardOptions = 0x43d; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardDismissAction = 0x43e; // EVirtualKeyboardDismissAction
		constexpr auto OnTextChanged = 0x440; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0x450; // FMulticastInlineDelegate
	}

	namespace n_Aweapmf_DTK_dot45_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UInputKeyDelegateBinding {
		constexpr auto InputKeyDelegateBindings = 0x28; // TArray<FBlueprintInputKeyDelegateBinding>
	}

	namespace n_Adevice_lighter_02_C {
		constexpr auto Flame = 0x4a0; // UStaticMeshComponent*
		constexpr auto PointLight = 0x4a8; // UPointLightComponent*
	}

	namespace n_UDatasmithDeltaGenSceneImportData {
		constexpr auto bMergeNodes = 0x48; // bool
		constexpr auto bOptimizeDuplicatedNodes = 0x49; // bool
		constexpr auto bRemoveInvisibleNodes = 0x4a; // bool
		constexpr auto bSimplifyNodeHierarchy = 0x4b; // bool
		constexpr auto bImportVar = 0x4c; // bool
		constexpr auto VarPath = 0x50; // FString
		constexpr auto bImportPos = 0x60; // bool
		constexpr auto PosPath = 0x68; // FString
		constexpr auto bImportTml = 0x78; // bool
		constexpr auto TmlPath = 0x80; // FString
	}

	namespace n_UGameplayTask_TimeLimitedExecution {
		constexpr auto OnFinished = 0x68; // FMulticastInlineDelegate
		constexpr auto OnTimeExpired = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UShaderPlatformQualitySettings {
		constexpr auto QualityOverrides = 0x28; // FMaterialQualityOverrides [0x4]
	}

	namespace n_USpinBox {
		constexpr auto Value = 0x108; // float
		constexpr auto ValueDelegate = 0x10c; // FDelegate
		constexpr auto WidgetStyle = 0x120; // FSpinBoxStyle
		constexpr auto Style = 0x408; // USlateWidgetStyleAsset*
		constexpr auto MinFractionalDigits = 0x410; // int32_t
		constexpr auto MaxFractionalDigits = 0x414; // int32_t
		constexpr auto bAlwaysUsesDeltaSnap = 0x418; // bool
		constexpr auto Delta = 0x41c; // float
		constexpr auto SliderExponent = 0x420; // float
		constexpr auto Font = 0x428; // FSlateFontInfo
		constexpr auto Justification = 0x480; // ETextJustify
		constexpr auto MinDesiredWidth = 0x484; // float
		constexpr auto ClearKeyboardFocusOnCommit = 0x488; // bool
		constexpr auto SelectAllTextOnCommit = 0x489; // bool
		constexpr auto ForegroundColor = 0x490; // FSlateColor
		constexpr auto OnValueChanged = 0x4b8; // FMulticastInlineDelegate
		constexpr auto OnValueCommitted = 0x4c8; // FMulticastInlineDelegate
		constexpr auto OnBeginSliderMovement = 0x4d8; // FMulticastInlineDelegate
		constexpr auto OnEndSliderMovement = 0x4e8; // FMulticastInlineDelegate
		constexpr auto bOverride_MinValue = 0x4f8; // char : 1
		constexpr auto bOverride_MaxValue = 0x4f8; // char : 1
		constexpr auto bOverride_MinSliderValue = 0x4f8; // char : 1
		constexpr auto bOverride_MaxSliderValue = 0x4f8; // char : 1
		constexpr auto MinValue = 0x4fc; // float
		constexpr auto MaxValue = 0x500; // float
		constexpr auto MinSliderValue = 0x504; // float
		constexpr auto MaxSliderValue = 0x508; // float
	}

	namespace n_UTestMovieSceneSequence {
		constexpr auto MovieScene = 0x60; // UMovieScene*
	}

	namespace n_UAISystemBase {
		constexpr auto AISystemClassName = 0x28; // FSoftClassPath
		constexpr auto AISystemModuleName = 0x40; // FName
		constexpr auto bInstantiateAISystemOnClient = 0x50; // bool
	}

	namespace n_UBoxReflectionCaptureComponent {
		constexpr auto BoxTransitionDistance = 0x270; // float
		constexpr auto PreviewInfluenceBox = 0x278; // UBoxComponent*
		constexpr auto PreviewCaptureBox = 0x280; // UBoxComponent*
	}

	namespace n_USFPSServerListHandler {
		constexpr auto UnSortedFilteredServerList = 0x188; // TArray<FSFPSServerInfo>
		constexpr auto tmpUnSortedFilteredServerList = 0x198; // TArray<FSFPSServerInfo>
		constexpr auto SortedFilteredServerList = 0x1a8; // TArray<FSFPSServerInfo>
		constexpr auto SelectedServerInfo = 0x1b8; // FSFPSServerInfo
		constexpr auto VaRestCallback0 = 0x264; // FDelegate
		constexpr auto VaRestCallback1 = 0x274; // FDelegate
		constexpr auto VaRestCallback2 = 0x284; // FDelegate
		constexpr auto VaRestCallback3 = 0x294; // FDelegate
		constexpr auto VaRestCallback4 = 0x2a4; // FDelegate
		constexpr auto FormServerList = 0x420; // UUserWidget*
		constexpr auto frmServerListItem = 0x428; // USFPSUserWidget_ServerListItem*
		constexpr auto ServerList = 0x430; // TArray<FSFPSServerInfo>
	}

	namespace n_ADatasmithAreaLightActor {
		constexpr auto Mobility = 0x220; // EComponentMobility
		constexpr auto LightType = 0x221; // EDatasmithAreaLightActorType
		constexpr auto LightShape = 0x222; // EDatasmithAreaLightActorShape
		constexpr auto Dimensions = 0x224; // FVector2D
		constexpr auto Intensity = 0x22c; // float
		constexpr auto IntensityUnits = 0x230; // ELightUnits
		constexpr auto Color = 0x234; // FLinearColor
		constexpr auto Temperature = 0x244; // float
		constexpr auto IESTexture = 0x248; // UTextureLightProfile*
		constexpr auto bUseIESBrightness = 0x250; // bool
		constexpr auto IESBrightnessScale = 0x254; // float
		constexpr auto Rotation = 0x258; // FRotator
		constexpr auto SourceRadius = 0x264; // float
		constexpr auto SourceLength = 0x268; // float
		constexpr auto AttenuationRadius = 0x26c; // float
		constexpr auto SpotlightInnerAngle = 0x270; // float
		constexpr auto SpotlightOuterAngle = 0x274; // float
	}

	namespace n_AM_TripwireTrap_03_C {
		constexpr auto Interaction = 0x358; // UBoxComponent*
		constexpr auto GrenadeCollision = 0x360; // UBoxComponent*
		constexpr auto ExplosionCollision = 0x368; // UBoxComponent*
		constexpr auto ACTripwireTrap = 0x370; // USFPSACTripwireTrap*
		constexpr auto SFPSACBaseCollision1 = 0x378; // USFPSACBaseCollision*
	}

	namespace n_UParticleModuleLocationPrimitiveSphere_Seeded {
		constexpr auto RandomSeedInfo = 0xe0; // FParticleRandomSeedInfo
	}

	namespace n_USFPSMapHandler {
		constexpr auto bVisible = 0x298; // bool
		constexpr auto FormMap = 0x2a0; // UUserWidget*
		constexpr auto MapElement_Player = 0x2a8; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_Mission = 0x2b0; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_SaveScaleMission = 0x2b8; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_AllPlayersMarker = 0x2c0; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_AllBasesMarker = 0x2c8; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_AllBotsMarker = 0x2d0; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_TacticalMarker = 0x2d8; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_DeadMarker = 0x2e0; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_LootStash = 0x2e8; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_GreenArea = 0x2f0; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_RedArea = 0x2f8; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_Base = 0x300; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_Location = 0x308; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_SquadMarker = 0x310; // USFPSUserWidget_MapElement*
		constexpr auto MapElement_TripwireTrap = 0x318; // USFPSUserWidget_MapElement*
		constexpr auto TacticalMarkers = 0x320; // TArray<USFPSTacticalMarker*>
		constexpr auto DeadMarker = 0x330; // USFPSTacticalMarker*
		constexpr auto LootStashMarkers = 0x338; // TArray<USFPSLootStashMarker*>
		constexpr auto MissionMarkers = 0x348; // TArray<USFPSMissionMarker*>
		constexpr auto SaveScaleMissionMarkers = 0x358; // TArray<USFPSSaveScaleMissionMarker*>
		constexpr auto AllPlayersMarkers = 0x368; // TArray<USFPSAllPlayersMarker*>
		constexpr auto AllBasesMarkers = 0x378; // TArray<USFPSAllBasesMarker*>
		constexpr auto AllBotsMarkers = 0x388; // TArray<USFPSAllBotsMarker*>
		constexpr auto GreeenAreaMarkers = 0x398; // TArray<USFPSGreenAreaMarker*>
		constexpr auto RedAreaMarkers = 0x3a8; // TArray<USFPSRedAreaMarker*>
		constexpr auto BaseMarkers = 0x3b8; // TArray<USFPSBaseMarker*>
		constexpr auto LocalitiesMarkers = 0x3c8; // TArray<USFPSLocationMarker*>
		constexpr auto SquadMarkers = 0x3d8; // TArray<USFPSSquadMarker*>
		constexpr auto TripwireTrapMarkers = 0x3e8; // TArray<USFPSTripwireTrapMarker*>
	}

	namespace n_UCineCameraComponent {
		constexpr auto FilmbackSettings = 0x7d0; // FCameraFilmbackSettings
		constexpr auto Filmback = 0x7dc; // FCameraFilmbackSettings
		constexpr auto LensSettings = 0x7e8; // FCameraLensSettings
		constexpr auto FocusSettings = 0x800; // FCameraFocusSettings
		constexpr auto CurrentFocalLength = 0x858; // float
		constexpr auto CurrentAperture = 0x85c; // float
		constexpr auto CurrentFocusDistance = 0x860; // float
		constexpr auto FilmbackPresets = 0x870; // TArray<FNamedFilmbackPreset>
		constexpr auto LensPresets = 0x880; // TArray<FNamedLensPreset>
		constexpr auto DefaultFilmbackPresetName = 0x890; // FString
		constexpr auto DefaultFilmbackPreset = 0x8a0; // FString
		constexpr auto DefaultLensPresetName = 0x8b0; // FString
		constexpr auto DefaultLensFocalLength = 0x8c0; // float
		constexpr auto DefaultLensFStop = 0x8c4; // float
	}

	namespace n_ASwitchActor {
		constexpr auto SceneComponent = 0x238; // USceneComponent*
		constexpr auto LastSelectedOption = 0x240; // int32_t
	}

	namespace n_UChaosSolverSettings {
		constexpr auto DefaultChaosSolverActorClass = 0x40; // FSoftClassPath
	}

	namespace n_UMovieSceneCameraAnimTrack {
		constexpr auto CameraAnimSections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_AScope_col_Trijicon_C {
		constexpr auto deltapoint_collimator = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UDrawFrustumComponent {
		constexpr auto FrustumColor = 0x450; // FColor
		constexpr auto FrustumAngle = 0x454; // float
		constexpr auto FrustumAspectRatio = 0x458; // float
		constexpr auto FrustumStartDist = 0x45c; // float
		constexpr auto FrustumEndDist = 0x460; // float
		constexpr auto Texture = 0x468; // UTexture*
	}

	namespace n_AWindDirectionalSource {
		constexpr auto Component = 0x220; // UWindDirectionalSourceComponent*
	}

	namespace n_UPaperTerrainComponent {
		constexpr auto TerrainMaterial = 0x450; // UPaperTerrainMaterial*
		constexpr auto bClosedSpline = 0x458; // bool
		constexpr auto bFilledSpline = 0x459; // bool
		constexpr auto AssociatedSpline = 0x460; // UPaperTerrainSplineComponent*
		constexpr auto RandomSeed = 0x468; // int32_t
		constexpr auto SegmentOverlapAmount = 0x46c; // float
		constexpr auto TerrainColor = 0x470; // FLinearColor
		constexpr auto ReparamStepsPerSegment = 0x480; // int32_t
		constexpr auto SpriteCollisionDomain = 0x484; // ESpriteCollisionMode
		constexpr auto CollisionThickness = 0x488; // float
		constexpr auto CachedBodySetup = 0x490; // UBodySetup*
	}

	namespace n_UParticleModuleAccelerationOverLifetime {
		constexpr auto AccelOverLife = 0x38; // FRawDistributionVector
	}

	namespace n_UFoliageType {
		constexpr auto UpdateGuid = 0x28; // FGuid
		constexpr auto Density = 0x38; // float
		constexpr auto DensityAdjustmentFactor = 0x3c; // float
		constexpr auto Radius = 0x40; // float
		constexpr auto bSingleInstanceModeOverrideRadius = 0x44; // bool
		constexpr auto SingleInstanceModeRadius = 0x48; // float
		constexpr auto Scaling = 0x4c; // EFoliageScaling
		constexpr auto ScaleX = 0x50; // FFloatInterval
		constexpr auto ScaleY = 0x58; // FFloatInterval
		constexpr auto ScaleZ = 0x60; // FFloatInterval
		constexpr auto VertexColorMaskByChannel = 0x68; // FFoliageVertexColorChannelMask [0x4]
		constexpr auto VertexColorMask = 0x98; // FoliageVertexColorMask
		constexpr auto VertexColorMaskThreshold = 0x9c; // float
		constexpr auto VertexColorMaskInvert = 0xa0; // char : 1
		constexpr auto ZOffset = 0xa4; // FFloatInterval
		constexpr auto AlignToNormal = 0xac; // char : 1
		constexpr auto AlignMaxAngle = 0xb0; // float
		constexpr auto RandomYaw = 0xb4; // char : 1
		constexpr auto RandomPitchAngle = 0xb8; // float
		constexpr auto GroundSlopeAngle = 0xbc; // FFloatInterval
		constexpr auto Height = 0xc4; // FFloatInterval
		constexpr auto LandscapeLayers = 0xd0; // TArray<FName>
		constexpr auto MinimumLayerWeight = 0xe0; // float
		constexpr auto ExclusionLandscapeLayers = 0xe8; // TArray<FName>
		constexpr auto MinimumExclusionLayerWeight = 0xf8; // float
		constexpr auto LandscapeLayer = 0xfc; // FName
		constexpr auto CollisionWithWorld = 0x104; // char : 1
		constexpr auto CollisionScale = 0x108; // FVector
		constexpr auto MeshBounds = 0x114; // FBoxSphereBounds
		constexpr auto LowBoundOriginRadius = 0x130; // FVector
		constexpr auto Mobility = 0x13c; // EComponentMobility
		constexpr auto CullDistance = 0x140; // FInt32Interval
		constexpr auto bEnableStaticLighting = 0x148; // char : 1
		constexpr auto CastShadow = 0x148; // char : 1
		constexpr auto bAffectDynamicIndirectLighting = 0x148; // char : 1
		constexpr auto bAffectDistanceFieldLighting = 0x148; // char : 1
		constexpr auto bCastDynamicShadow = 0x148; // char : 1
		constexpr auto bCastStaticShadow = 0x148; // char : 1
		constexpr auto bCastShadowAsTwoSided = 0x148; // char : 1
		constexpr auto bReceivesDecals = 0x148; // char : 1
		constexpr auto bOverrideLightMapRes = 0x149; // char : 1
		constexpr auto OverriddenLightMapRes = 0x14c; // int32_t
		constexpr auto LightmapType = 0x150; // ELightmapType
		constexpr auto bUseAsOccluder = 0x154; // char : 1
		constexpr auto bVisibleInRayTracing = 0x158; // char : 1
		constexpr auto bEvaluateWorldPositionOffset = 0x158; // char : 1
		constexpr auto BodyInstance = 0x160; // FBodyInstance
		constexpr auto CustomNavigableGeometry = 0x2b8; // EHasCustomNavigableGeometry
		constexpr auto LightingChannels = 0x2b9; // FLightingChannels
		constexpr auto bRenderCustomDepth = 0x2bc; // char : 1
		constexpr auto CustomDepthStencilWriteMask = 0x2c0; // ERendererStencilMask
		constexpr auto CustomDepthStencilValue = 0x2c4; // int32_t
		constexpr auto TranslucencySortPriority = 0x2c8; // int32_t
		constexpr auto CollisionRadius = 0x2cc; // float
		constexpr auto ShadeRadius = 0x2d0; // float
		constexpr auto NumSteps = 0x2d4; // int32_t
		constexpr auto InitialSeedDensity = 0x2d8; // float
		constexpr auto AverageSpreadDistance = 0x2dc; // float
		constexpr auto SpreadVariance = 0x2e0; // float
		constexpr auto SeedsPerStep = 0x2e4; // int32_t
		constexpr auto DistributionSeed = 0x2e8; // int32_t
		constexpr auto MaxInitialSeedOffset = 0x2ec; // float
		constexpr auto bCanGrowInShade = 0x2f0; // bool
		constexpr auto bSpawnsInShade = 0x2f1; // bool
		constexpr auto MaxInitialAge = 0x2f4; // float
		constexpr auto MaxAge = 0x2f8; // float
		constexpr auto OverlapPriority = 0x2fc; // float
		constexpr auto ProceduralScale = 0x300; // FFloatInterval
		constexpr auto ScaleCurve = 0x308; // FRuntimeFloatCurve
		constexpr auto ChangeCount = 0x390; // int32_t
		constexpr auto ReapplyDensity = 0x394; // char : 1
		constexpr auto ReapplyRadius = 0x394; // char : 1
		constexpr auto ReapplyAlignToNormal = 0x394; // char : 1
		constexpr auto ReapplyRandomYaw = 0x394; // char : 1
		constexpr auto ReapplyScaling = 0x394; // char : 1
		constexpr auto ReapplyScaleX = 0x394; // char : 1
		constexpr auto ReapplyScaleY = 0x394; // char : 1
		constexpr auto ReapplyScaleZ = 0x394; // char : 1
		constexpr auto ReapplyRandomPitchAngle = 0x395; // char : 1
		constexpr auto ReapplyGroundSlope = 0x395; // char : 1
		constexpr auto ReapplyHeight = 0x395; // char : 1
		constexpr auto ReapplyLandscapeLayers = 0x395; // char : 1
		constexpr auto ReapplyZOffset = 0x395; // char : 1
		constexpr auto ReapplyCollisionWithWorld = 0x395; // char : 1
		constexpr auto ReapplyVertexColorMask = 0x395; // char : 1
		constexpr auto bEnableDensityScaling = 0x395; // char : 1
		constexpr auto bEnableDiscardOnLoad = 0x396; // char : 1
		constexpr auto RuntimeVirtualTextures = 0x398; // TArray<URuntimeVirtualTexture*>
		constexpr auto VirtualTextureCullMips = 0x3a8; // int32_t
		constexpr auto VirtualTextureRenderPassType = 0x3ac; // ERuntimeVirtualTextureMainPassType
	}

	namespace n_UListView {
		constexpr auto Orientation = 0x2d8; // EOrientation
		constexpr auto SelectionMode = 0x2d9; // ESelectionMode
		constexpr auto ConsumeMouseWheel = 0x2da; // EConsumeMouseWheel
		constexpr auto bClearSelectionOnClick = 0x2db; // bool
		constexpr auto bIsFocusable = 0x2dc; // bool
		constexpr auto EntrySpacing = 0x2e0; // float
		constexpr auto bReturnFocusToSelection = 0x2e4; // bool
		constexpr auto ListItems = 0x2e8; // TArray<UObject*>
		constexpr auto BP_OnEntryInitialized = 0x308; // FMulticastInlineDelegate
		constexpr auto BP_OnItemClicked = 0x318; // FMulticastInlineDelegate
		constexpr auto BP_OnItemDoubleClicked = 0x328; // FMulticastInlineDelegate
		constexpr auto BP_OnItemIsHoveredChanged = 0x338; // FMulticastInlineDelegate
		constexpr auto BP_OnItemSelectionChanged = 0x348; // FMulticastInlineDelegate
		constexpr auto BP_OnItemScrolledIntoView = 0x358; // FMulticastInlineDelegate
	}

	namespace n_AAmbientSound {
		constexpr auto AudioComponent = 0x220; // UAudioComponent*
	}

	namespace n_UParticleModuleLifetime_Seeded {
		constexpr auto RandomSeedInfo = 0x60; // FParticleRandomSeedInfo
	}

	namespace n_UGameplayTagsManager {
		constexpr auto TagSources = 0x160; // TMap<FName, FGameplayTagSource>
		constexpr auto GameplayTagTables = 0x230; // TArray<UDataTable*>
	}

	namespace n_AUltra_Dynamic_Sky_BP_C {
		constexpr auto UberGraphFrame = 0x220; // FPointerToUberGraphFrame
		constexpr auto moon_plane = 0x228; // UStaticMeshComponent*
		constexpr auto Arrow = 0x230; // UArrowComponent*
		constexpr auto Sun_Root = 0x238; // UArrowComponent*
		constexpr auto Ultra_Dynamic_Sky_Sphere = 0x240; // UStaticMeshComponent*
		constexpr auto DefaultSceneRoot = 0x248; // USceneComponent*
		constexpr auto Direction Light (Sun) = 0x250; // ADirectionalLight*
		constexpr auto UDM_mat = 0x258; // UMaterialInstanceDynamic*
		constexpr auto Refresh Settings = 0x260; // bool
		constexpr auto Cloud Speed = 0x264; // float
		constexpr auto Cloud Density = 0x268; // float
		constexpr auto Cloud Wisps Opacity = 0x26c; // float
		constexpr auto Horizon Base Color Curve = 0x270; // TArray<UCurveLinearColor*>
		constexpr auto Zenith Base Color Curve = 0x280; // TArray<UCurveLinearColor*>
		constexpr auto Cloud Light Color Curve = 0x290; // TArray<UCurveLinearColor*>
		constexpr auto Cloud Dark Color Curve = 0x2a0; // TArray<UCurveLinearColor*>
		constexpr auto Time of Day = 0x2b0; // float
		constexpr auto Sun Color Curve = 0x2b8; // TArray<UCurveLinearColor*>
		constexpr auto Shine Intensity Curve = 0x2c8; // UCurveFloat*
		constexpr auto Saturation = 0x2d0; // float
		constexpr auto Sun Cloudy Color Curve = 0x2d8; // UCurveLinearColor*
		constexpr auto Exponential Height Fog = 0x2e0; // AExponentialHeightFog*
		constexpr auto Stars Intensity Curve = 0x2e8; // UCurveFloat*
		constexpr auto Cloud Phase = 0x2f0; // float
		constexpr auto Moon Scale = 0x2f4; // float
		constexpr auto Moon Inclination = 0x2f8; // float
		constexpr auto Moon Phase = 0x2fc; // float
		constexpr auto Automatically Set Advanced Settings using Time of Day = 0x300; // bool
		constexpr auto Stars Visibility = 0x304; // float
		constexpr auto Moon Intensity = 0x308; // float
		constexpr auto Moon Position = 0x30c; // float
		constexpr auto Sun Angle = 0x310; // float
		constexpr auto Horizon Base Color = 0x314; // FLinearColor
		constexpr auto Zenith Base Color = 0x324; // FLinearColor
		constexpr auto Cloud Light Color = 0x334; // FLinearColor
		constexpr auto Cloud Dark Color = 0x344; // FLinearColor
		constexpr auto Sun Color = 0x354; // FLinearColor
		constexpr auto Cloud Shine Intensity = 0x364; // float
		constexpr auto Sun Light Color = 0x368; // FLinearColor
		constexpr auto Day Length = 0x378; // float
		constexpr auto Moon Position Curve = 0x380; // UCurveFloat*
		constexpr auto Night Cycle = 0x388; // bool
		constexpr auto Simulate Cloud Density Changes = 0x389; // bool
		constexpr auto Cloud Density Shift Frequency (min) = 0x38c; // float
		constexpr auto Cloud Density Shift Frequency (max) = 0x390; // float
		constexpr auto Cloud Density_target = 0x394; // float
		constexpr auto Cloud Density Change (Smoothing) = 0x398; // float
		constexpr auto Cloud Opacity = 0x39c; // float
		constexpr auto Overall Intensity = 0x3a0; // float
		constexpr auto Sun Brightness = 0x3a4; // float
		constexpr auto Moon Color = 0x3a8; // FLinearColor
		constexpr auto Shine Variation = 0x3b8; // float
		constexpr auto Sun Lighting Intensity = 0x3bc; // float
		constexpr auto Sun Highlight Radius_curve = 0x3c0; // UCurveFloat*
		constexpr auto Sun Highlight Radius = 0x3c8; // float
		constexpr auto First Day = 0x3cc; // bool
		constexpr auto Simulate Moon Phase Changes = 0x3cd; // bool
		constexpr auto Stars_Intensity = 0x3d0; // float
		constexpr auto Stars_Color = 0x3d4; // FLinearColor
		constexpr auto Moon Orbit Offset = 0x3e4; // float
		constexpr auto Sun Rotation = 0x3e8; // FRotator
		constexpr auto Sun Radius = 0x3f4; // float
		constexpr auto Cloud Shadows MID = 0x3f8; // UMaterialInstanceDynamic*
		constexpr auto Use Cloud Shadows = 0x400; // bool
		constexpr auto Cloud Shadows Scale = 0x404; // float
		constexpr auto Cloud Shadows Intensity = 0x408; // float
		constexpr auto Moon Light = 0x410; // ADirectionalLight*
		constexpr auto Manually Select Sun Color = 0x418; // bool
		constexpr auto Automatically Set Moon Light Rotation = 0x419; // bool
		constexpr auto Automatically Set Sun Light Rotation = 0x41a; // bool
		constexpr auto Moonlight Intensity = 0x41c; // float
		constexpr auto Stars Speed = 0x420; // float
		constexpr auto Sun Inclination = 0x424; // float
		constexpr auto Sun Yaw = 0x428; // float
		constexpr auto Moon Rotation = 0x42c; // float
		constexpr auto Custom Moon Texture = 0x430; // UTexture2D*
		constexpr auto Use Custom Moon Texture = 0x438; // bool
		constexpr auto SkyLight = 0x440; // ASkyLight*
		constexpr auto Recapture Sky light periodically = 0x448; // bool
		constexpr auto Sky Light recapture period = 0x44c; // float
		constexpr auto Night Filter Curve = 0x450; // UCurveFloat*
		constexpr auto Night brightness = 0x458; // float
		constexpr auto Moon Glow Intensity = 0x45c; // float
		constexpr auto Directional_Intensity_Curve = 0x460; // UCurveFloat*
		constexpr auto Sun_Light_Intensity = 0x468; // float
		constexpr auto Aurora Intensity = 0x46c; // float
		constexpr auto Aurora Speed = 0x470; // float
		constexpr auto Use Fast Skylight = 0x474; // bool
		constexpr auto Use Auroras = 0x475; // bool
		constexpr auto Clouds Base Texture = 0x478; // UTexture*
		constexpr auto Cloud Tiling = 0x480; // float
		constexpr auto Cloud Direction = 0x484; // float
		constexpr auto One cloud layer = 0x488; // bool
		constexpr auto Cloud Height 1 = 0x48c; // float
		constexpr auto Cloud Height 2 = 0x490; // float
		constexpr auto color_scheme = 0x494; // int32_t
		constexpr auto Moon mat = 0x498; // UMaterialInstanceDynamic*
		constexpr auto Moon Angle = 0x4a0; // float
		constexpr auto Postprocess Volume = 0x4a8; // APostProcessVolume*
		constexpr auto MIDFog = 0x4b0; // UMaterialInstanceDynamic*
		constexpr auto Fog Color Curve = 0x4b8; // UCurveLinearColor*
		constexpr auto UpdateTimeOfDay = 0x4c0; // bool
		constexpr auto SkyLightColorCurve = 0x4c8; // UCurveLinearColor*
	}

	namespace n_UMaterialExpressionPanner {
		constexpr auto Coordinate = 0x40; // FExpressionInput
		constexpr auto Time = 0x54; // FExpressionInput
		constexpr auto Speed = 0x68; // FExpressionInput
		constexpr auto SpeedX = 0x7c; // float
		constexpr auto SpeedY = 0x80; // float
		constexpr auto ConstCoordinate = 0x84; // uint32_t
		constexpr auto bFractionalPart = 0x88; // bool
	}

	namespace n_UMaterialExpressionSmoothStep {
		constexpr auto Min = 0x40; // FExpressionInput
		constexpr auto Max = 0x54; // FExpressionInput
		constexpr auto Value = 0x68; // FExpressionInput
		constexpr auto ConstMin = 0x7c; // float
		constexpr auto ConstMax = 0x80; // float
		constexpr auto ConstValue = 0x84; // float
	}

	namespace n_UVehicleWheel {
		constexpr auto CollisionMesh = 0x28; // UStaticMesh*
		constexpr auto bDontCreateShape = 0x30; // bool
		constexpr auto bAutoAdjustCollisionSize = 0x31; // bool
		constexpr auto Offset = 0x34; // FVector
		constexpr auto ShapeRadius = 0x40; // float
		constexpr auto ShapeWidth = 0x44; // float
		constexpr auto Mass = 0x48; // float
		constexpr auto DampingRate = 0x4c; // float
		constexpr auto SteerAngle = 0x50; // float
		constexpr auto bAffectedByHandbrake = 0x54; // bool
		constexpr auto TireType = 0x58; // UTireType*
		constexpr auto TireConfig = 0x60; // UTireConfig*
		constexpr auto LatStiffMaxLoad = 0x68; // float
		constexpr auto LatStiffValue = 0x6c; // float
		constexpr auto LongStiffValue = 0x70; // float
		constexpr auto SuspensionForceOffset = 0x74; // float
		constexpr auto SuspensionMaxRaise = 0x78; // float
		constexpr auto SuspensionMaxDrop = 0x7c; // float
		constexpr auto SuspensionNaturalFrequency = 0x80; // float
		constexpr auto SuspensionDampingRatio = 0x84; // float
		constexpr auto SweepType = 0x88; // EWheelSweepType
		constexpr auto MaxBrakeTorque = 0x8c; // float
		constexpr auto MaxHandBrakeTorque = 0x90; // float
		constexpr auto VehicleSim = 0x98; // UWheeledVehicleMovementComponent*
		constexpr auto WheelIndex = 0xa0; // int32_t
		constexpr auto DebugLongSlip = 0xa4; // float
		constexpr auto DebugLatSlip = 0xa8; // float
		constexpr auto DebugNormalizedTireLoad = 0xac; // float
		constexpr auto DebugWheelTorque = 0xb4; // float
		constexpr auto DebugLongForce = 0xb8; // float
		constexpr auto DebugLatForce = 0xbc; // float
		constexpr auto Location = 0xc0; // FVector
		constexpr auto OldLocation = 0xcc; // FVector
		constexpr auto Velocity = 0xd8; // FVector
	}

	namespace n_ACineCameraActor {
		constexpr auto LookatTrackingSettings = 0x7b0; // FCameraLookatTrackingSettings
	}

	namespace n_UGetGeoLocationAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_ABM_WallTriaLow_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UMaterialExpressionBumpOffset {
		constexpr auto Coordinate = 0x40; // FExpressionInput
		constexpr auto Height = 0x54; // FExpressionInput
		constexpr auto HeightRatioInput = 0x68; // FExpressionInput
		constexpr auto HeightRatio = 0x7c; // float
		constexpr auto ReferencePlane = 0x80; // float
		constexpr auto ConstCoordinate = 0x84; // uint32_t
	}

	namespace n_USkeletalMeshLODSettings {
		constexpr auto MinLOD = 0x30; // FPerPlatformInt
		constexpr auto DisableBelowMinLodStripping = 0x34; // FPerPlatformBool
		constexpr auto bOverrideLODStreamingSettings = 0x35; // bool
		constexpr auto bSupportLODStreaming = 0x36; // FPerPlatformBool
		constexpr auto MaxNumStreamedLODs = 0x38; // FPerPlatformInt
		constexpr auto MaxNumOptionalLODs = 0x3c; // FPerPlatformInt
		constexpr auto LODGroups = 0x40; // TArray<FSkeletalMeshLODGroupSettings>
	}

	namespace n_UInterpTrackInstFloatMaterialParam {
		constexpr auto MaterialInstances = 0x28; // TArray<UMaterialInstanceDynamic*>
		constexpr auto ResetFloats = 0x38; // TArray<float>
		constexpr auto PrimitiveMaterialRefs = 0x48; // TArray<FPrimitiveMaterialRef>
		constexpr auto InstancedTrack = 0x58; // UInterpTrackFloatMaterialParam*
	}

	namespace n_UDistributionFloatConstant {
		constexpr auto Constant = 0x38; // float
	}

	namespace n_UInterpTrackInstToggle {
		constexpr auto Action = 0x28; // ETrackToggleAction
		constexpr auto LastUpdatePosition = 0x2c; // float
		constexpr auto bSavedActiveState = 0x30; // char : 1
	}

	namespace n_UParticleModuleTypeDataMesh {
		constexpr auto Mesh = 0x30; // UStaticMesh*
		constexpr auto LODSizeScale = 0x40; // float
		constexpr auto bUseStaticMeshLODs = 0x44; // char : 1
		constexpr auto CastShadows = 0x44; // char : 1
		constexpr auto DoCollisions = 0x44; // char : 1
		constexpr auto MeshAlignment = 0x45; // EMeshScreenAlignment
		constexpr auto bOverrideMaterial = 0x46; // char : 1
		constexpr auto bOverrideDefaultMotionBlurSettings = 0x46; // char : 1
		constexpr auto bEnableMotionBlur = 0x46; // char : 1
		constexpr auto RollPitchYawRange = 0x48; // FRawDistributionVector
		constexpr auto AxisLockOption = 0x90; // EParticleAxisLock
		constexpr auto bCameraFacing = 0x91; // char : 1
		constexpr auto CameraFacingUpAxisOption = 0x92; // EMeshCameraFacingUpAxis
		constexpr auto CameraFacingOption = 0x93; // EMeshCameraFacingOptions
		constexpr auto bApplyParticleRotationAsSpin = 0x94; // char : 1
		constexpr auto bFaceCameraDirectionRatherThanPosition = 0x94; // char : 1
		constexpr auto bCollisionsConsiderPartilceSize = 0x94; // char : 1
	}

	namespace n_ASFPSInventoryDeviceItem {
		constexpr auto ID = 0x310; // int32_t
		constexpr auto Coords = 0x314; // FVector
		constexpr auto Time = 0x320; // int64_t
	}

	namespace n_UEnvQueryTest_Trace {
		constexpr auto TraceData = 0x1f8; // FEnvTraceData
		constexpr auto TraceFromContext = 0x228; // FAIDataProviderBoolValue
		constexpr auto ItemHeightOffset = 0x260; // FAIDataProviderFloatValue
		constexpr auto ContextHeightOffset = 0x298; // FAIDataProviderFloatValue
		constexpr auto Context = 0x2d0; // UEnvQueryContext*
	}

	namespace n_UMaterialExpressionArctangentFast {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_AProjectileGrenade_C {
		constexpr auto ProjectileMovement = 0x430; // UProjectileMovementComponent*
		constexpr auto Mesh = 0x438; // UStaticMeshComponent*
	}

	namespace n_UCompositeCameraShakePattern {
		constexpr auto ChildPatterns = 0x28; // TArray<UCameraShakePattern*>
	}

	namespace n_UMovieSceneParameterSection {
		constexpr auto BoolParameterNamesAndCurves = 0xe8; // TArray<FBoolParameterNameAndCurve>
		constexpr auto ScalarParameterNamesAndCurves = 0xf8; // TArray<FScalarParameterNameAndCurve>
		constexpr auto Vector2DParameterNamesAndCurves = 0x108; // TArray<FVector2DParameterNameAndCurves>
		constexpr auto VectorParameterNamesAndCurves = 0x118; // TArray<FVectorParameterNameAndCurves>
		constexpr auto ColorParameterNamesAndCurves = 0x128; // TArray<FColorParameterNameAndCurves>
		constexpr auto TransformParameterNamesAndCurves = 0x138; // TArray<FTransformParameterNameAndCurves>
	}

	namespace n_USourceEffectWaveShaperPreset {
		constexpr auto Settings = 0x98; // FSourceEffectWaveShaperSettings
	}

	namespace n_UMaterialExpressionShaderStageSwitch {
		constexpr auto PixelShader = 0x40; // FExpressionInput
		constexpr auto VertexShader = 0x54; // FExpressionInput
	}

	namespace n_UMaterialExpressionStaticComponentMaskParameter {
		constexpr auto DefaultR = 0x58; // char : 1
		constexpr auto DefaultG = 0x58; // char : 1
		constexpr auto DefaultB = 0x58; // char : 1
		constexpr auto DefaultA = 0x58; // char : 1
	}

	namespace n_UGizmoAxisTranslationParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto Parameter = 0xb0; // float
		constexpr auto LastChange = 0xb4; // FGizmoFloatParameterChange
		constexpr auto CurTranslationAxis = 0xbc; // FVector
		constexpr auto CurTranslationOrigin = 0xc8; // FVector
		constexpr auto InitialTransform = 0xe0; // FTransform
	}

	namespace n_UMaterialExpressionFloor {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UParticleModuleParameterDynamic {
		constexpr auto DynamicParams = 0x30; // TArray<FEmitterDynamicParameter>
		constexpr auto UpdateFlags = 0x40; // int32_t
		constexpr auto bUsesVelocity = 0x44; // char : 1
	}

	namespace n_UMaterialExpressionLandscapePhysicalMaterialOutput {
		constexpr auto Inputs = 0x40; // TArray<FPhysicalMaterialInput>
	}

	namespace n_ULightmappedSurfaceCollection {
		constexpr auto SourceModel = 0x28; // UModel*
		constexpr auto Surfaces = 0x30; // TArray<int32_t>
	}

	namespace n_UComboBox {
		constexpr auto Items = 0x108; // TArray<UObject*>
		constexpr auto OnGenerateWidgetEvent = 0x118; // FDelegate
		constexpr auto bIsFocusable = 0x128; // bool
	}

	namespace n_UGizmoBaseComponent {
		constexpr auto Color = 0x450; // FLinearColor
		constexpr auto HoverSizeMultiplier = 0x460; // float
		constexpr auto PixelHitDistanceThreshold = 0x464; // float
	}

	namespace n_UBTTask_PlaySound {
		constexpr auto SoundToPlay = 0x70; // USoundCue*
	}

	namespace n_UEnvQueryTest_Volume {
		constexpr auto VolumeContext = 0x1f8; // UEnvQueryContext*
		constexpr auto VolumeClass = 0x200; // AVolume*
		constexpr auto bDoComplexVolumeTest = 0x208; // char : 1
	}

	namespace n_UMeshSimplificationSettings {
		constexpr auto MeshReductionModuleName = 0x38; // FName
	}

	namespace n_UEnvQueryTest_GameplayTags {
		constexpr auto TagQueryToMatch = 0x1f8; // FGameplayTagQuery
		constexpr auto bUpdatedToUseQuery = 0x240; // bool
		constexpr auto TagsToMatch = 0x241; // EGameplayContainerMatchType
		constexpr auto GameplayTags = 0x248; // FGameplayTagContainer
	}

	namespace n_UGridPanel {
		constexpr auto ColumnFill = 0x120; // TArray<float>
		constexpr auto RowFill = 0x130; // TArray<float>
	}

	namespace n_UMaterialExpressionDDY {
		constexpr auto Value = 0x40; // FExpressionInput
	}

	namespace n_AOnlineBeacon {
		constexpr auto BeaconConnectionInitialTimeout = 0x228; // float
		constexpr auto BeaconConnectionTimeout = 0x22c; // float
		constexpr auto NetDriver = 0x230; // UNetDriver*
	}

	namespace n_ULevelSequenceAnimSequenceLink {
		constexpr auto AnimSequenceLinks = 0x28; // TArray<FLevelSequenceAnimSequenceLinkItem>
	}

	namespace n_Aweapmf_DTK_545x39_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UInterpTrackFloatProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_URadialForceComponent {
		constexpr auto Radius = 0x1f8; // float
		constexpr auto Falloff = 0x1fc; // ERadialImpulseFalloff
		constexpr auto ImpulseStrength = 0x200; // float
		constexpr auto bImpulseVelChange = 0x204; // char : 1
		constexpr auto bIgnoreOwningActor = 0x204; // char : 1
		constexpr auto ForceStrength = 0x208; // float
		constexpr auto DestructibleDamage = 0x20c; // float
		constexpr auto ObjectTypesToAffect = 0x210; // TArray<EObjectTypeQuery>
	}

	namespace n_USynthComponent {
		constexpr auto bAutoDestroy = 0x1f8; // char : 1
		constexpr auto bStopWhenOwnerDestroyed = 0x1f8; // char : 1
		constexpr auto bAllowSpatialization = 0x1f8; // char : 1
		constexpr auto bOverrideAttenuation = 0x1f8; // char : 1
		constexpr auto bEnableBusSends = 0x1fc; // char : 1
		constexpr auto bEnableBaseSubmix = 0x1fc; // char : 1
		constexpr auto bEnableSubmixSends = 0x1fc; // char : 1
		constexpr auto AttenuationSettings = 0x200; // USoundAttenuation*
		constexpr auto AttenuationOverrides = 0x208; // FSoundAttenuationSettings
		constexpr auto ConcurrencySettings = 0x5a8; // USoundConcurrency*
		constexpr auto ConcurrencySet = 0x5b0; // TSet<USoundConcurrency*>
		constexpr auto SoundClass = 0x600; // USoundClass*
		constexpr auto SourceEffectChain = 0x608; // USoundEffectSourcePresetChain*
		constexpr auto SoundSubmix = 0x610; // USoundSubmixBase*
		constexpr auto SoundSubmixSends = 0x618; // TArray<FSoundSubmixSendInfo>
		constexpr auto BusSends = 0x628; // TArray<FSoundSourceBusSendInfo>
		constexpr auto PreEffectBusSends = 0x638; // TArray<FSoundSourceBusSendInfo>
		constexpr auto bIsUISound = 0x648; // char : 1
		constexpr auto bIsPreviewSound = 0x648; // char : 1
		constexpr auto EnvelopeFollowerAttackTime = 0x64c; // int32_t
		constexpr auto EnvelopeFollowerReleaseTime = 0x650; // int32_t
		constexpr auto OnAudioEnvelopeValue = 0x658; // FMulticastInlineDelegate
		constexpr auto Synth = 0x688; // USynthSound*
		constexpr auto AudioComponent = 0x690; // UAudioComponent*
	}

	namespace n_UPlatformMediaSource {
		constexpr auto MediaSource = 0x80; // UMediaSource*
	}

	namespace n_UMovieSceneCameraAnimSection {
		constexpr auto AnimData = 0xe8; // FMovieSceneCameraAnimSectionData
		constexpr auto CameraAnim = 0x108; // UCameraAnim*
		constexpr auto PlayRate = 0x110; // float
		constexpr auto PlayScale = 0x114; // float
		constexpr auto BlendInTime = 0x118; // float
		constexpr auto BlendOutTime = 0x11c; // float
		constexpr auto bLooping = 0x120; // bool
	}

	namespace n_UMovieSceneCameraShakeSourceShakeTrack {
		constexpr auto CameraShakeSections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_ANavModifierVolume {
		constexpr auto AreaClass = 0x260; // UNavArea*
		constexpr auto bMaskFillCollisionUnderneathForNavmesh = 0x268; // bool
	}

	namespace n_AGameNetworkManager {
		constexpr auto BadPacketLossThreshold = 0x220; // float
		constexpr auto SeverePacketLossThreshold = 0x224; // float
		constexpr auto BadPingThreshold = 0x228; // int32_t
		constexpr auto SeverePingThreshold = 0x22c; // int32_t
		constexpr auto AdjustedNetSpeed = 0x230; // int32_t
		constexpr auto LastNetSpeedUpdateTime = 0x234; // float
		constexpr auto TotalNetBandwidth = 0x238; // int32_t
		constexpr auto MinDynamicBandwidth = 0x23c; // int32_t
		constexpr auto MaxDynamicBandwidth = 0x240; // int32_t
		constexpr auto bIsStandbyCheckingEnabled = 0x244; // char : 1
		constexpr auto bHasStandbyCheatTriggered = 0x244; // char : 1
		constexpr auto StandbyRxCheatTime = 0x248; // float
		constexpr auto StandbyTxCheatTime = 0x24c; // float
		constexpr auto PercentMissingForRxStandby = 0x250; // float
		constexpr auto PercentMissingForTxStandby = 0x254; // float
		constexpr auto PercentForBadPing = 0x258; // float
		constexpr auto JoinInProgressStandbyWaitTime = 0x25c; // float
		constexpr auto MoveRepSize = 0x260; // float
		constexpr auto MAXPOSITIONERRORSQUARED = 0x264; // float
		constexpr auto MAXNEARZEROVELOCITYSQUARED = 0x268; // float
		constexpr auto CLIENTADJUSTUPDATECOST = 0x26c; // float
		constexpr auto MAXCLIENTUPDATEINTERVAL = 0x270; // float
		constexpr auto MaxClientForcedUpdateDuration = 0x274; // float
		constexpr auto ServerForcedUpdateHitchThreshold = 0x278; // float
		constexpr auto ServerForcedUpdateHitchCooldown = 0x27c; // float
		constexpr auto MaxMoveDeltaTime = 0x280; // float
		constexpr auto MaxClientSmoothingDeltaTime = 0x284; // float
		constexpr auto ClientNetSendMoveDeltaTime = 0x288; // float
		constexpr auto ClientNetSendMoveDeltaTimeThrottled = 0x28c; // float
		constexpr auto ClientNetSendMoveDeltaTimeStationary = 0x290; // float
		constexpr auto ClientNetSendMoveThrottleAtNetSpeed = 0x294; // int32_t
		constexpr auto ClientNetSendMoveThrottleOverPlayerCount = 0x298; // int32_t
		constexpr auto ClientAuthorativePosition = 0x29c; // bool
		constexpr auto ClientErrorUpdateRateLimit = 0x2a0; // float
		constexpr auto ClientNetCamUpdateDeltaTime = 0x2a4; // float
		constexpr auto ClientNetCamUpdatePositionLimit = 0x2a8; // float
		constexpr auto bMovementTimeDiscrepancyDetection = 0x2ac; // bool
		constexpr auto bMovementTimeDiscrepancyResolution = 0x2ad; // bool
		constexpr auto MovementTimeDiscrepancyMaxTimeMargin = 0x2b0; // float
		constexpr auto MovementTimeDiscrepancyMinTimeMargin = 0x2b4; // float
		constexpr auto MovementTimeDiscrepancyResolutionRate = 0x2b8; // float
		constexpr auto MovementTimeDiscrepancyDriftAllowance = 0x2bc; // float
		constexpr auto bMovementTimeDiscrepancyForceCorrectionsDuringResolution = 0x2c0; // bool
		constexpr auto bUseDistanceBasedRelevancy = 0x2c1; // bool
	}

	namespace n_UCloudStorageBase {
		constexpr auto LocalCloudFiles = 0x38; // TArray<FString>
		constexpr auto bSuppressDelegateCalls = 0x48; // char : 1
	}

	namespace n_USFPSAIConfig {
		constexpr auto Params = 0x28; // FSFPSAIParams
	}

	namespace n_At_Sight_C {
		constexpr auto Trace = 0x3c0; // UBoxComponent*
		constexpr auto Mesh = 0x3c8; // UStaticMeshComponent*
	}

	namespace n_UButton {
		constexpr auto Style = 0x120; // USlateWidgetStyleAsset*
		constexpr auto WidgetStyle = 0x128; // FButtonStyle
		constexpr auto ColorAndOpacity = 0x3a0; // FLinearColor
		constexpr auto BackgroundColor = 0x3b0; // FLinearColor
		constexpr auto ClickMethod = 0x3c0; // EButtonClickMethod
		constexpr auto TouchMethod = 0x3c1; // EButtonTouchMethod
		constexpr auto PressMethod = 0x3c2; // EButtonPressMethod
		constexpr auto IsFocusable = 0x3c3; // bool
		constexpr auto OnClicked = 0x3c8; // FMulticastInlineDelegate
		constexpr auto OnPressed = 0x3d8; // FMulticastInlineDelegate
		constexpr auto OnReleased = 0x3e8; // FMulticastInlineDelegate
		constexpr auto OnHovered = 0x3f8; // FMulticastInlineDelegate
		constexpr auto OnUnHovered = 0x408; // FMulticastInlineDelegate
	}

	namespace n_UDemoNetDriver {
		constexpr auto RollbackNetStartupActors = 0x858; // TMap<FString, FRollbackNetStartupActorInfo>
		constexpr auto CheckpointSaveMaxMSPerFrame = 0xa04; // float
		constexpr auto MulticastRecordOptions = 0xa28; // TArray<FMulticastRecordOptions>
		constexpr auto bIsLocalReplay = 0xa38; // bool
		constexpr auto SpectatorControllers = 0xa40; // TArray<APlayerController*>
	}

	namespace n_UMultiLineEditableTextBox {
		constexpr auto Text = 0x128; // FText
		constexpr auto HintText = 0x140; // FText
		constexpr auto HintTextDelegate = 0x158; // FDelegate
		constexpr auto WidgetStyle = 0x168; // FEditableTextBoxStyle
		constexpr auto TextStyle = 0x960; // FTextBlockStyle
		constexpr auto bIsReadOnly = 0xbd0; // bool
		constexpr auto AllowContextMenu = 0xbd1; // bool
		constexpr auto VirtualKeyboardOptions = 0xbd2; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardDismissAction = 0xbd3; // EVirtualKeyboardDismissAction
		constexpr auto Style = 0xbd8; // USlateWidgetStyleAsset*
		constexpr auto Font = 0xbe0; // FSlateFontInfo
		constexpr auto ForegroundColor = 0xc38; // FLinearColor
		constexpr auto BackgroundColor = 0xc48; // FLinearColor
		constexpr auto ReadOnlyForegroundColor = 0xc58; // FLinearColor
		constexpr auto OnTextChanged = 0xc68; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0xc78; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionCeil {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UARPlaneGeometry {
		constexpr auto Orientation = 0xf8; // EARPlaneOrientation
		constexpr auto Center = 0xfc; // FVector
		constexpr auto Extent = 0x108; // FVector
		constexpr auto BoundaryPolygon = 0x118; // TArray<FVector>
		constexpr auto SubsumedBy = 0x128; // UARPlaneGeometry*
	}

	namespace n_UBlueprintGeneratedClass {
		constexpr auto NumReplicatedProperties = 0x230; // int32_t
		constexpr auto bHasNativizedParent = 0x234; // char : 1
		constexpr auto bHasCookedComponentInstancingData = 0x234; // char : 1
		constexpr auto DynamicBindingObjects = 0x238; // TArray<UDynamicBlueprintBinding*>
		constexpr auto ComponentTemplates = 0x248; // TArray<UActorComponent*>
		constexpr auto Timelines = 0x258; // TArray<UTimelineTemplate*>
		constexpr auto ComponentClassOverrides = 0x268; // TArray<FBPComponentClassOverride>
		constexpr auto SimpleConstructionScript = 0x278; // USimpleConstructionScript*
		constexpr auto InheritableComponentHandler = 0x280; // UInheritableComponentHandler*
		constexpr auto UberGraphFramePointerProperty = 0x288; // UStructProperty*
		constexpr auto UberGraphFunction = 0x298; // UFunction*
		constexpr auto CookedComponentInstancingData = 0x2a0; // TMap<FName, FBlueprintCookedComponentInstancingData>
	}

	namespace n_UARTextureCameraDepth {
		constexpr auto DepthQuality = 0x198; // EARDepthQuality
		constexpr auto DepthAccuracy = 0x199; // EARDepthAccuracy
		constexpr auto bIsTemporallySmoothed = 0x19a; // bool
	}

	namespace n_Adevice_flashlight_01_C {
		constexpr auto Glow = 0x4a0; // UStaticMeshComponent*
		constexpr auto Light = 0x4a8; // USpotLightComponent*
	}

	namespace n_UABP_weapon_firearms_smg_p90_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x318; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x398; // FAnimNode_Slot
	}

	namespace n_UParticleModuleVelocityOverLifetime {
		constexpr auto VelOverLife = 0x38; // FRawDistributionVector
		constexpr auto Absolute = 0x80; // char : 1
	}

	namespace n_UBTTask_RunEQSQuery {
		constexpr auto QueryTemplate = 0x98; // UEnvQuery*
		constexpr auto QueryParams = 0xa0; // TArray<FEnvNamedValue>
		constexpr auto QueryConfig = 0xb0; // TArray<FAIDynamicParam>
		constexpr auto RunMode = 0xc0; // EEnvQueryRunMode
		constexpr auto EQSQueryBlackboardKey = 0xc8; // FBlackboardKeySelector
		constexpr auto bUseBBKey = 0xf0; // bool
		constexpr auto EQSRequest = 0xf8; // FEQSParametrizedQueryExecutionRequest
	}

	namespace n_UChannel {
		constexpr auto Connection = 0x28; // UNetConnection*
	}

	namespace n_UMotionControllerComponent {
		constexpr auto PlayerIndex = 0x450; // int32_t
		constexpr auto Hand = 0x454; // EControllerHand
		constexpr auto MotionSource = 0x458; // FName
		constexpr auto bDisableLowLatencyUpdate = 0x460; // char : 1
		constexpr auto CurrentTrackingStatus = 0x464; // ETrackingStatus
		constexpr auto bDisplayDeviceModel = 0x465; // bool
		constexpr auto DisplayModelSource = 0x468; // FName
		constexpr auto CustomDisplayMesh = 0x470; // UStaticMesh*
		constexpr auto DisplayMeshMaterialOverrides = 0x478; // TArray<UMaterialInterface*>
		constexpr auto DisplayComponent = 0x4f0; // UPrimitiveComponent*
	}

	namespace n_UMaterialExpressionFeatureLevelSwitch {
		constexpr auto Default = 0x40; // FExpressionInput
	}

	namespace n_USFPSUserWidget_ChatItem {
		constexpr auto Info = 0x290; // FSFPSChatItemInfo
		constexpr auto OnDblClickedEvent = 0x300; // FDelegate
	}

	namespace n_UMovieSceneColorTrack {
		constexpr auto bIsSlateColor = 0xc0; // bool
	}

	namespace n_UEditableGeometryCollectionAdapter {
		constexpr auto GeometryCollection = 0x28; // UGeometryCollection*
		constexpr auto OriginalGeometryCollection = 0x30; // UGeometryCollection*
		constexpr auto GeometryCollectionLODIndex = 0x38; // int32_t
	}

	namespace n_ULevelSequencePlayer {
		constexpr auto OnCameraCut = 0x4e8; // FMulticastInlineDelegate
	}

	namespace n_UInAppPurchaseQueryCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_USlateSettings {
		constexpr auto bExplicitCanvasChildZOrder = 0x28; // bool
	}

	namespace n_USimpleCameraShakePattern {
		constexpr auto Duration = 0x28; // float
		constexpr auto BlendInTime = 0x2c; // float
		constexpr auto BlendOutTime = 0x30; // float
	}

	namespace n_ANavigationTestingActor {
		constexpr auto CapsuleComponent = 0x230; // UCapsuleComponent*
		constexpr auto InvokerComponent = 0x238; // UNavigationInvokerComponent*
		constexpr auto bActAsNavigationInvoker = 0x240; // char : 1
		constexpr auto NavAgentProps = 0x248; // FNavAgentProperties
		constexpr auto QueryingExtent = 0x278; // FVector
		constexpr auto MyNavData = 0x288; // ANavigationData*
		constexpr auto ProjectedLocation = 0x290; // FVector
		constexpr auto bProjectedLocationValid = 0x29c; // char : 1
		constexpr auto bSearchStart = 0x29c; // char : 1
		constexpr auto CostLimitFactor = 0x2a0; // float
		constexpr auto MinimumCostLimit = 0x2a4; // float
		constexpr auto bBacktracking = 0x2a8; // char : 1
		constexpr auto bUseHierarchicalPathfinding = 0x2a8; // char : 1
		constexpr auto bGatherDetailedInfo = 0x2a8; // char : 1
		constexpr auto bDrawDistanceToWall = 0x2a8; // char : 1
		constexpr auto bShowNodePool = 0x2a8; // char : 1
		constexpr auto bShowBestPath = 0x2a8; // char : 1
		constexpr auto bShowDiffWithPreviousStep = 0x2a8; // char : 1
		constexpr auto bShouldBeVisibleInGame = 0x2a8; // char : 1
		constexpr auto CostDisplayMode = 0x2ac; // ENavCostDisplay
		constexpr auto TextCanvasOffset = 0x2b0; // FVector2D
		constexpr auto bPathExist = 0x2b8; // char : 1
		constexpr auto bPathIsPartial = 0x2b8; // char : 1
		constexpr auto bPathSearchOutOfNodes = 0x2b8; // char : 1
		constexpr auto PathfindingTime = 0x2bc; // float
		constexpr auto PathCost = 0x2c0; // float
		constexpr auto PathfindingSteps = 0x2c4; // int32_t
		constexpr auto OtherActor = 0x2c8; // ANavigationTestingActor*
		constexpr auto FilterClass = 0x2d0; // UNavigationQueryFilter*
		constexpr auto ShowStepIndex = 0x2d8; // int32_t
		constexpr auto OffsetFromCornersDistance = 0x2dc; // float
	}

	namespace n_URetainerBox {
		constexpr auto bRetainRender = 0x120; // bool
		constexpr auto RenderOnInvalidation = 0x121; // bool
		constexpr auto RenderOnPhase = 0x122; // bool
		constexpr auto Phase = 0x124; // int32_t
		constexpr auto PhaseCount = 0x128; // int32_t
		constexpr auto EffectMaterial = 0x130; // UMaterialInterface*
		constexpr auto TextureParameter = 0x138; // FName
	}

	namespace n_ASFPSWeaponMF_HandguardDeviceLeft {
		constexpr auto bHasSpotLight = 0x340; // bool
		constexpr auto bUsedSpecialMount = 0x341; // bool
		constexpr auto bDeviceEnabled = 0x342; // bool
	}

	namespace n_ACullDistanceVolume {
		constexpr auto CullDistances = 0x258; // TArray<FCullDistanceSizePair>
		constexpr auto bEnabled = 0x268; // char : 1
	}

	namespace n_UMaterialExpressionDeriveNormalZ {
		constexpr auto InXY = 0x40; // FExpressionInput
	}

	namespace n_Ascope_col_walter_mrs_C {
		constexpr auto walter_mrs_collimator = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UParticleModuleVelocityInheritParent {
		constexpr auto Scale = 0x38; // FRawDistributionVector
	}

	namespace n_USkinnedMeshComponent {
		constexpr auto SkeletalMesh = 0x480; // USkeletalMesh*
		constexpr auto MasterPoseComponent = 0x488; // TWeakObjectPtr<USkinnedMeshComponent>
		constexpr auto SkinCacheUsage = 0x490; // TArray<ESkinCacheUsage>
		constexpr auto VertexOffsetUsage = 0x4a0; // TArray<FVertexOffsetUsage>
		constexpr auto PhysicsAssetOverride = 0x5a8; // UPhysicsAsset*
		constexpr auto ForcedLodModel = 0x5b0; // int32_t
		constexpr auto MinLodModel = 0x5b4; // int32_t
		constexpr auto StreamingDistanceMultiplier = 0x5c0; // float
		constexpr auto LODInfo = 0x5d0; // TArray<FSkelMeshComponentLODInfo>
		constexpr auto VisibilityBasedAnimTickOption = 0x604; // EVisibilityBasedAnimTickOption
		constexpr auto bOverrideMinLod = 0x606; // char : 1
		constexpr auto bUseBoundsFromMasterPoseComponent = 0x606; // char : 1
		constexpr auto bForceWireframe = 0x606; // char : 1
		constexpr auto bDisplayBones = 0x606; // char : 1
		constexpr auto bDisableMorphTarget = 0x606; // char : 1
		constexpr auto bHideSkin = 0x607; // char : 1
		constexpr auto bPerBoneMotionBlur = 0x607; // char : 1
		constexpr auto bComponentUseFixedSkelBounds = 0x607; // char : 1
		constexpr auto bConsiderAllBodiesForBounds = 0x607; // char : 1
		constexpr auto bSyncAttachParentLOD = 0x607; // char : 1
		constexpr auto bCanHighlightSelectedSections = 0x607; // char : 1
		constexpr auto bRecentlyRendered = 0x607; // char : 1
		constexpr auto bCastCapsuleDirectShadow = 0x607; // char : 1
		constexpr auto bCastCapsuleIndirectShadow = 0x608; // char : 1
		constexpr auto bCPUSkinning = 0x608; // char : 1
		constexpr auto bEnableUpdateRateOptimizations = 0x608; // char : 1
		constexpr auto bDisplayDebugUpdateRateOptimizations = 0x608; // char : 1
		constexpr auto bRenderStatic = 0x608; // char : 1
		constexpr auto bIgnoreMasterPoseComponentLOD = 0x608; // char : 1
		constexpr auto bCachedLocalBoundsUpToDate = 0x609; // char : 1
		constexpr auto bForceMeshObjectUpdate = 0x609; // char : 1
		constexpr auto CapsuleIndirectShadowMinVisibility = 0x60c; // float
		constexpr auto CachedWorldSpaceBounds = 0x620; // FBoxSphereBounds
		constexpr auto CachedWorldToLocalTransform = 0x640; // FMatrix
	}

	namespace n_UParticleModuleEventReceiverSpawn {
		constexpr auto SpawnCount = 0x40; // FRawDistributionFloat
		constexpr auto bUseParticleTime = 0x70; // char : 1
		constexpr auto bUsePSysLocation = 0x70; // char : 1
		constexpr auto bInheritVelocity = 0x70; // char : 1
		constexpr auto InheritVelocityScale = 0x78; // FRawDistributionVector
		constexpr auto PhysicalMaterials = 0xc0; // TArray<UPhysicalMaterial*>
		constexpr auto bBanPhysicalMaterials = 0xd0; // char : 1
	}

	namespace n_UParticleModuleVelocity {
		constexpr auto StartVelocity = 0x38; // FRawDistributionVector
		constexpr auto StartVelocityRadial = 0x80; // FRawDistributionFloat
	}

	namespace n_UAutomationTestSettings {
		constexpr auto EngineTestModules = 0x28; // TArray<FString>
		constexpr auto EditorTestModules = 0x38; // TArray<FString>
		constexpr auto AutomationTestmap = 0x48; // FSoftObjectPath
		constexpr auto EditorPerformanceTestMaps = 0x60; // TArray<FEditorMapPerformanceTestDefinition>
		constexpr auto AssetsToOpen = 0x70; // TArray<FSoftObjectPath>
		constexpr auto MapsToPIETest = 0x80; // TArray<FString>
		constexpr auto BuildPromotionTest = 0x90; // FBuildPromotionTestSettings
		constexpr auto MaterialEditorPromotionTest = 0x280; // FMaterialEditorPromotionSettings
		constexpr auto ParticleEditorPromotionTest = 0x2b0; // FParticleEditorPromotionSettings
		constexpr auto BlueprintEditorPromotionTest = 0x2c0; // FBlueprintEditorPromotionSettings
		constexpr auto TestLevelFolders = 0x2f0; // TArray<FString>
		constexpr auto ExternalTools = 0x300; // TArray<FExternalToolDefinition>
		constexpr auto ImportExportTestDefinitions = 0x310; // TArray<FEditorImportExportTestDefinition>
		constexpr auto LaunchOnSettings = 0x320; // TArray<FLaunchOnTestSettings>
		constexpr auto DefaultScreenshotResolution = 0x330; // FIntPoint
		constexpr auto PIETestDuration = 0x338; // float
	}

	namespace n_UHLODProxy {
		constexpr auto ProxyMeshes = 0x28; // TArray<FHLODProxyMesh>
		constexpr auto HLODActors = 0x38; // TMap<UHLODProxyDesc*, FHLODProxyMesh>
	}

	namespace n_UEnvQueryNode {
		constexpr auto VerNum = 0x28; // int32_t
	}

	namespace n_UGraphNodeContextMenuContext {
		constexpr auto Blueprint = 0x28; // UBlueprint*
		constexpr auto Graph = 0x30; // UEdGraph*
		constexpr auto Node = 0x38; // UEdGraphNode*
		constexpr auto bIsDebugging = 0x48; // bool
	}

	namespace n_UInterpTrackInstVectorProp {
		constexpr auto ResetVector = 0x58; // FVector
	}

	namespace n_UPoseAsset {
		constexpr auto PoseContainer = 0x80; // FPoseDataContainer
		constexpr auto bAdditivePose = 0x110; // bool
		constexpr auto BasePoseIndex = 0x114; // int32_t
		constexpr auto RetargetSource = 0x118; // FName
		constexpr auto RetargetSourceAssetReferencePose = 0x120; // TArray<FTransform>
	}

	namespace n_UWidgetNavigation {
		constexpr auto Up = 0x28; // FWidgetNavigationData
		constexpr auto Down = 0x4c; // FWidgetNavigationData
		constexpr auto Left = 0x70; // FWidgetNavigationData
		constexpr auto Right = 0x94; // FWidgetNavigationData
		constexpr auto Next = 0xb8; // FWidgetNavigationData
		constexpr auto Previous = 0xdc; // FWidgetNavigationData
	}

	namespace n_UMovieScene {
		constexpr auto Spawnables = 0x50; // TArray<FMovieSceneSpawnable>
		constexpr auto Possessables = 0x60; // TArray<FMovieScenePossessable>
		constexpr auto ObjectBindings = 0x70; // TArray<FMovieSceneBinding>
		constexpr auto BindingGroups = 0x80; // TMap<FName, FMovieSceneObjectBindingIDs>
		constexpr auto MasterTracks = 0xd0; // TArray<UMovieSceneTrack*>
		constexpr auto CameraCutTrack = 0xe0; // UMovieSceneTrack*
		constexpr auto SelectionRange = 0xe8; // FMovieSceneFrameRange
		constexpr auto PlaybackRange = 0xf8; // FMovieSceneFrameRange
		constexpr auto TickResolution = 0x108; // FFrameRate
		constexpr auto DisplayRate = 0x110; // FFrameRate
		constexpr auto EvaluationType = 0x118; // EMovieSceneEvaluationType
		constexpr auto ClockSource = 0x119; // EUpdateClockSource
		constexpr auto CustomClockSourcePath = 0x120; // FSoftObjectPath
		constexpr auto MarkedFrames = 0x138; // TArray<FMovieSceneMarkedFrame>
	}

	namespace n_UMaterialExpressionLandscapeLayerSwitch {
		constexpr auto LayerUsed = 0x40; // FExpressionInput
		constexpr auto LayerNotUsed = 0x54; // FExpressionInput
		constexpr auto ParameterName = 0x68; // FName
		constexpr auto PreviewUsed = 0x70; // char : 1
		constexpr auto ExpressionGUID = 0x74; // FGuid
	}

	namespace n_USoundNodeConcatenator {
		constexpr auto InputVolume = 0x48; // TArray<float>
	}

	namespace n_UTemplateSequence {
		constexpr auto MovieScene = 0x60; // UMovieScene*
		constexpr auto BoundActorClass = 0x68; // TSoftClassPtr<UObject>
		constexpr auto BoundPreviewActor = 0x90; // TSoftObjectPtr<AActor>
		constexpr auto BoundActorComponents = 0xb8; // TMap<FGuid, FName>
	}

	namespace n_UAsyncActionChangePrimaryAssetBundles {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_USFPSUserWidget_ChatBox {
		constexpr auto Font = 0x2a0; // FSlateFontInfo
		constexpr auto ViewportScale = 0x2f8; // float
		constexpr auto bUseCustomPanel = 0x2fc; // bool
	}

	namespace n_USFPSAI_DRandom {
		constexpr auto Chance = 0x68; // int32_t
	}

	namespace n_UNavLinkComponent {
		constexpr auto Links = 0x458; // TArray<FNavigationLink>
	}

	namespace n_UMaterialExpressionSingleLayerWaterMaterialOutput {
		constexpr auto ScatteringCoefficients = 0x40; // FExpressionInput
		constexpr auto AbsorptionCoefficients = 0x54; // FExpressionInput
		constexpr auto PhaseG = 0x68; // FExpressionInput
		constexpr auto ColorScaleBehindWater = 0x7c; // FExpressionInput
	}

	namespace n_Aweapon_firearms_smg_bizon_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_ASFPSAmbientSound {
		constexpr auto bAmbRegistered = 0x228; // bool
		constexpr auto bBaseNoise = 0x229; // bool
		constexpr auto bRainNoise = 0x22a; // bool
		constexpr auto bThisIsBusSend = 0x22b; // bool
		constexpr auto bIgnoreRoom = 0x22c; // bool
		constexpr auto bUnderwaterNoise = 0x22d; // bool
	}

	namespace n_ABM_WallTria_02_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_AOnlineBeaconHostObject {
		constexpr auto BeaconTypeName = 0x220; // FString
		constexpr auto ClientBeaconActorClass = 0x230; // AOnlineBeaconClient*
		constexpr auto ClientActors = 0x238; // TArray<AOnlineBeaconClient*>
	}

	namespace n_UFormAdmin_C {
		constexpr auto Base_btnCopyPlayer = 0x260; // UButton*
		constexpr auto Base_btnDelBase = 0x268; // UButton*
		constexpr auto Base_btnDelBoxes = 0x270; // UButton*
		constexpr auto Base_btnKeyChance = 0x278; // UButton*
		constexpr auto Base_btnSteamProfile = 0x280; // UButton*
		constexpr auto Base_btnStromTime = 0x288; // UButton*
		constexpr auto btnBase = 0x290; // UCheckBox*
		constexpr auto btnBattlePVEOnly = 0x298; // UCheckBox*
		constexpr auto btnBattlePVPPVE = 0x2a0; // UCheckBox*
		constexpr auto btnBuyServer = 0x2a8; // UButton*
		constexpr auto btnCameraFPS = 0x2b0; // UCheckBox*
		constexpr auto btnCameraFPSTPS = 0x2b8; // UCheckBox*
		constexpr auto btnCameraTPS = 0x2c0; // UCheckBox*
		constexpr auto btnDeathLog = 0x2c8; // UCheckBox*
		constexpr auto btnGameplay = 0x2d0; // UCheckBox*
		constexpr auto btnItems = 0x2d8; // UCheckBox*
		constexpr auto btnMessages = 0x2e0; // UCheckBox*
		constexpr auto btnPlayers = 0x2e8; // UCheckBox*
		constexpr auto btnServer = 0x2f0; // UCheckBox*
		constexpr auto btnServer_Teleport0 = 0x2f8; // UButton*
		constexpr auto btnServer_Teleport1 = 0x300; // UButton*
		constexpr auto btnServer_Teleport2 = 0x308; // UButton*
		constexpr auto btnServer_Teleport3 = 0x310; // UButton*
		constexpr auto btnServer_Teleport4 = 0x318; // UButton*
		constexpr auto btnServer_TeleportDead = 0x320; // UButton*
		constexpr auto btnVACNo = 0x328; // UCheckBox*
		constexpr auto btnVACYes = 0x330; // UCheckBox*
		constexpr auto DeathLog_btnCopy = 0x338; // UButton*
		constexpr auto DeathLog_btnDownload = 0x340; // UButton*
		constexpr auto frmAdminPanelDeathRecord = 0x348; // UfrmAdminPanelDeathRecord_C*
		constexpr auto frmAdminPanelDeathRecord_125 = 0x350; // UfrmAdminPanelDeathRecord_C*
		constexpr auto Gameplay_Background_2 = 0x358; // UImage*
		constexpr auto Gameplay_BackLine_2 = 0x360; // UImage*
		constexpr auto Gameplay_BackLine_3 = 0x368; // UImage*
		constexpr auto Gameplay_BackLine_4 = 0x370; // UImage*
		constexpr auto Gameplay_BackLine_5 = 0x378; // UImage*
		constexpr auto Gameplay_BackLine_6 = 0x380; // UImage*
		constexpr auto Gameplay_BackLine_7 = 0x388; // UImage*
		constexpr auto Gameplay_BackLine_8 = 0x390; // UImage*
		constexpr auto Gameplay_BackLine_9 = 0x398; // UImage*
		constexpr auto Gameplay_btnApplyAISettings = 0x3a0; // UButton*
		constexpr auto Gameplay_btnApplyEventsSettings = 0x3a8; // UButton*
		constexpr auto Gameplay_btnDynamicTimeScaleOff = 0x3b0; // UCheckBox*
		constexpr auto Gameplay_btnDynamicTimeScaleOn = 0x3b8; // UCheckBox*
		constexpr auto Gameplay_btnPatrolOff = 0x3c0; // UCheckBox*
		constexpr auto Gameplay_btnPatrolOn = 0x3c8; // UCheckBox*
		constexpr auto imgButtonsBackground = 0x3d0; // UImage*
		constexpr auto Messages_btnMsgTimer = 0x3d8; // UButton*
		constexpr auto Messages_btnSaveMOTD = 0x3e0; // UButton*
		constexpr auto Messages_btnSaveMsg = 0x3e8; // UButton*
		constexpr auto Messages_btnSendMOTD = 0x3f0; // UButton*
		constexpr auto Messages_btnSendMsg = 0x3f8; // UButton*
		constexpr auto Messages_mMOTD = 0x400; // UMultiLineEditableTextBox*
		constexpr auto Messages_mMsg = 0x408; // UMultiLineEditableTextBox*
		constexpr auto Players_btnAddToAdmins = 0x410; // UButton*
		constexpr auto Players_btnBan = 0x418; // UButton*
		constexpr auto Players_btnCopyBanned = 0x420; // UButton*
		constexpr auto Players_btnCopyPlayer = 0x428; // UButton*
		constexpr auto Players_btnDelFromAdmins = 0x430; // UButton*
		constexpr auto Players_btnHandBan = 0x438; // UButton*
		constexpr auto Players_btnSteamProfile = 0x440; // UButton*
		constexpr auto Players_btnSteamProfileAdmins = 0x448; // UButton*
		constexpr auto Players_btnSteamProfileBanned = 0x450; // UButton*
		constexpr auto Players_btnSteamProfileHandBan = 0x458; // UButton*
		constexpr auto Players_btnUnban = 0x460; // UButton*
		constexpr auto Server_btnAdminRespawnDeadMarkerDist = 0x468; // UButton*
		constexpr auto Server_btnAdminSlotReserv = 0x470; // UButton*
		constexpr auto Server_btnGameTime = 0x478; // UButton*
		constexpr auto Server_btnInactiveBaseLifeTime = 0x480; // UButton*
		constexpr auto Server_btnLootSpawnChance = 0x488; // UButton*
		constexpr auto Server_btnPassword = 0x490; // UButton*
		constexpr auto Server_btnPlayersMaxCount = 0x498; // UButton*
		constexpr auto Server_btnRestart0 = 0x4a0; // UCheckBox*
		constexpr auto Server_btnRestart1 = 0x4a8; // UCheckBox*
		constexpr auto Server_btnRestart10 = 0x4b0; // UCheckBox*
		constexpr auto Server_btnRestart11 = 0x4b8; // UCheckBox*
		constexpr auto Server_btnRestart12 = 0x4c0; // UCheckBox*
		constexpr auto Server_btnRestart13 = 0x4c8; // UCheckBox*
		constexpr auto Server_btnRestart14 = 0x4d0; // UCheckBox*
		constexpr auto Server_btnRestart15 = 0x4d8; // UCheckBox*
		constexpr auto Server_btnRestart16 = 0x4e0; // UCheckBox*
		constexpr auto Server_btnRestart17 = 0x4e8; // UCheckBox*
		constexpr auto Server_btnRestart18 = 0x4f0; // UCheckBox*
		constexpr auto Server_btnRestart19 = 0x4f8; // UCheckBox*
		constexpr auto Server_btnRestart2 = 0x500; // UCheckBox*
		constexpr auto Server_btnRestart20 = 0x508; // UCheckBox*
		constexpr auto Server_btnRestart21 = 0x510; // UCheckBox*
		constexpr auto Server_btnRestart22 = 0x518; // UCheckBox*
		constexpr auto Server_btnRestart23 = 0x520; // UCheckBox*
		constexpr auto Server_btnRestart3 = 0x528; // UCheckBox*
		constexpr auto Server_btnRestart4 = 0x530; // UCheckBox*
		constexpr auto Server_btnRestart5 = 0x538; // UCheckBox*
		constexpr auto Server_btnRestart6 = 0x540; // UCheckBox*
		constexpr auto Server_btnRestart7 = 0x548; // UCheckBox*
		constexpr auto Server_btnRestart8 = 0x550; // UCheckBox*
		constexpr auto Server_btnRestart9 = 0x558; // UCheckBox*
		constexpr auto Server_btnSquadSize = 0x560; // UButton*
	}

	namespace n_USFPSACLocality {
		constexpr auto Radius = 0x20c; // float
		constexpr auto bDrawLabel = 0x210; // bool
		constexpr auto MapLabel = 0x218; // FSFPSMapLabel
		constexpr auto bDrawSprite = 0x238; // bool
		constexpr auto bSafeArea = 0x239; // bool
		constexpr auto bCanBeSelectedForRespawn = 0x23a; // bool
		constexpr auto RespawnPoints = 0x23c; // int32_t
		constexpr auto bBase = 0x240; // bool
	}

	namespace n_ASFPSBaseLocationCraftItem {
		constexpr auto LocationItemAudioComponent = 0x22c; // TWeakObjectPtr<UAudioComponent>
		constexpr auto CraftKit = 0x270; // ASFPSBaseItem*
		constexpr auto ModuleType = 0x278; // ESFPSBaseModuleType
		constexpr auto bCanBeDestroyed = 0x279; // bool
		constexpr auto bDestroyObjectsOnTop = 0x27a; // bool
		constexpr auto bCanBeDestroyedByObject = 0x27b; // bool
		constexpr auto bNeedSave = 0x27c; // bool
		constexpr auto BaseCenter = 0x280; // FVector
		constexpr auto DefaultDist = 0x28c; // float
		constexpr auto DefaultAngle = 0x290; // float
		constexpr auto DefaultHeight = 0x294; // float
		constexpr auto bRequiresSnap = 0x298; // bool
		constexpr auto bRequiresAnchors = 0x299; // bool
		constexpr auto bRequiresBlock = 0x29a; // bool
		constexpr auto bRequiresBaseSphere = 0x29b; // bool
		constexpr auto bRequiresBaseBlockTest = 0x29c; // bool
		constexpr auto bRequiresPivotSnap = 0x29d; // bool
		constexpr auto bRequiresCapsuleTest = 0x29e; // bool
		constexpr auto bRequiresWaterTest = 0x29f; // bool
		constexpr auto BaseBlockTestTag = 0x2a0; // FName
		constexpr auto AnchorPoints = 0x2d8; // TArray<FVector>
		constexpr auto AnchorHeight = 0x2e8; // float
		constexpr auto AnchorsAboveGround = 0x2ec; // int32_t
		constexpr auto BaseSpherePoints = 0x2f0; // TArray<FVector>
		constexpr auto LOSPoints = 0x300; // TArray<FVector>
		constexpr auto LifeSpanOverride = 0x310; // float
		constexpr auto bCreateKraftKitAfterDelete = 0x314; // bool
		constexpr auto bUseLock = 0x315; // bool
		constexpr auto bLockPasswordValid = 0x338; // bool
		constexpr auto bHighlightByOwner = 0x339; // bool
		constexpr auto LocationCraftItemCue = 0x340; // USoundCue*
		constexpr auto RemoveTime = 0x349; // char
	}

	namespace n_UFormDead_C {
		constexpr auto imgBlackBackground = 0x260; // UImage*
	}

	namespace n_USFPSSettingsHandler {
		constexpr auto FormSettings = 0x7b0; // UUserWidget*
		constexpr auto FormHotKey = 0x7b8; // USFPSUserWidget_SettingsHotKey*
	}

	namespace n_USourceEffectPannerPreset {
		constexpr auto Settings = 0x98; // FSourceEffectPannerSettings
	}

	namespace n_USubmixEffectDelayPreset {
		constexpr auto Settings = 0x9c; // FSubmixEffectDelaySettings
		constexpr auto DynamicSettings = 0xa8; // FSubmixEffectDelaySettings
	}

	namespace n_URichTextBlock {
		constexpr auto Text = 0x128; // FText
		constexpr auto TextStyleSet = 0x140; // UDataTable*
		constexpr auto DecoratorClasses = 0x148; // TArray<URichTextBlockDecorator*>
		constexpr auto bOverrideDefaultStyle = 0x158; // bool
		constexpr auto DefaultTextStyleOverride = 0x160; // FTextBlockStyle
		constexpr auto MinDesiredWidth = 0x3d0; // float
		constexpr auto TextTransformPolicy = 0x3d4; // ETextTransformPolicy
		constexpr auto DefaultTextStyle = 0x3d8; // FTextBlockStyle
		constexpr auto InstanceDecorators = 0x648; // TArray<URichTextBlockDecorator*>
	}

	namespace n_UTcpMessagingSettings {
		constexpr auto EnableTransport = 0x28; // bool
		constexpr auto ListenEndpoint = 0x30; // FString
		constexpr auto ConnectToEndpoints = 0x40; // TArray<FString>
		constexpr auto ConnectionRetryDelay = 0x50; // int32_t
		constexpr auto bStopServiceWhenAppDeactivates = 0x54; // bool
	}

	namespace n_UMaterialExpressionFontSample {
		constexpr auto Font = 0x40; // UFont*
		constexpr auto FontTexturePage = 0x48; // int32_t
	}

	namespace n_ACameraRig_Rail {
		constexpr auto CurrentPositionOnRail = 0x220; // float
		constexpr auto bLockOrientationToRail = 0x224; // bool
		constexpr auto TransformComponent = 0x228; // USceneComponent*
		constexpr auto RailSplineComponent = 0x230; // USplineComponent*
		constexpr auto RailCameraMount = 0x238; // USceneComponent*
	}

	namespace n_UDatasmithVREDSceneImportData {
		constexpr auto bMergeNodes = 0x48; // bool
		constexpr auto bOptimizeDuplicatedNodes = 0x49; // bool
		constexpr auto bImportMats = 0x4a; // bool
		constexpr auto MatsPath = 0x50; // FString
		constexpr auto bImportVar = 0x60; // bool
		constexpr auto bCleanVar = 0x61; // bool
		constexpr auto VarPath = 0x68; // FString
		constexpr auto bImportLightInfo = 0x78; // bool
		constexpr auto LightInfoPath = 0x80; // FString
		constexpr auto bImportClipInfo = 0x90; // bool
		constexpr auto ClipInfoPath = 0x98; // FString
	}

	namespace n_UMovieSceneMaterialParameterCollectionTrack {
		constexpr auto MPC = 0xa8; // UMaterialParameterCollection*
	}

	namespace n_Aweapmf_flashlight_02_C {
		constexpr auto Glow = 0x358; // UStaticMeshComponent*
		constexpr auto Light = 0x360; // USpotLightComponent*
	}

	namespace n_UResonanceAudioReverbPluginPreset {
		constexpr auto Settings = 0xe0; // FResonanceAudioReverbPluginSettings
	}

	namespace n_USoundNodeDistanceCrossFade {
		constexpr auto CrossFadeInput = 0x48; // TArray<FDistanceDatum>
	}

	namespace n_Ascope_opt_hamr_4x_col_C {
		constexpr auto hamr_4x_reticles = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UEdGraph {
		constexpr auto Schema = 0x28; // UEdGraphSchema*
		constexpr auto Nodes = 0x30; // TArray<UEdGraphNode*>
		constexpr auto bEditable = 0x40; // char : 1
		constexpr auto bAllowDeletion = 0x40; // char : 1
		constexpr auto bAllowRenaming = 0x40; // char : 1
	}

	namespace n_UABP_weapon_firearms_mg_mg36_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_SequencePlayer = 0x360; // FAnimNode_SequencePlayer
	}

	namespace n_Aweapon_firearms_gun_fiveseven_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7f0; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f8; // UStaticMeshComponent*
	}

	namespace n_UParticleModulePivotOffset {
		constexpr auto PivotOffset = 0x30; // FVector2D
	}

	namespace n_UPrimaryAssetLabel {
		constexpr auto Rules = 0x30; // FPrimaryAssetRules
		constexpr auto bLabelAssetsInMyDirectory = 0x3c; // char : 1
		constexpr auto bIsRuntimeLabel = 0x3c; // char : 1
		constexpr auto ExplicitAssets = 0x40; // TArray<TSoftObjectPtr<UObject>>
		constexpr auto ExplicitBlueprints = 0x50; // TArray<TSoftClassPtr<UObject>>
		constexpr auto AssetCollection = 0x60; // FCollectionReference
	}

	namespace n_USoundNodeQualityLevel {
		constexpr auto CookedQualityLevelIndex = 0x48; // int32_t
	}

	namespace n_UPhysicsAsset {
		constexpr auto BoundsBodies = 0x30; // TArray<int32_t>
		constexpr auto SkeletalBodySetups = 0x40; // TArray<USkeletalBodySetup*>
		constexpr auto ConstraintSetup = 0x50; // TArray<UPhysicsConstraintTemplate*>
		constexpr auto SolverIterations = 0x60; // FSolverIterations
		constexpr auto SolverType = 0x7c; // EPhysicsAssetSolverType
		constexpr auto bNotForDedicatedServer = 0x7d; // char : 1
		constexpr auto ThumbnailInfo = 0x120; // UThumbnailInfo*
		constexpr auto BodySetup = 0x128; // TArray<UBodySetup*>
	}

	namespace n_UWidgetAnimation {
		constexpr auto MovieScene = 0x60; // UMovieScene*
		constexpr auto AnimationBindings = 0x68; // TArray<FWidgetAnimationBinding>
		constexpr auto bLegacyFinishOnStop = 0x78; // bool
		constexpr auto DisplayLabel = 0x80; // FString
	}

	namespace n_UAnimNotify_PlayMontageNotify {
		constexpr auto NotifyName = 0x38; // FName
	}

	namespace n_UMaterialExpressionTextureSampleParameterSubUV {
		constexpr auto bBlend = 0x80; // char : 1
	}

	namespace n_UMaterialExpressionArccosine {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UProjectileMovementComponent {
		constexpr auto InitialSpeed = 0xf0; // float
		constexpr auto MaxSpeed = 0xf4; // float
		constexpr auto bRotationFollowsVelocity = 0xf8; // char : 1
		constexpr auto bRotationRemainsVertical = 0xf8; // char : 1
		constexpr auto bShouldBounce = 0xf8; // char : 1
		constexpr auto bInitialVelocityInLocalSpace = 0xf8; // char : 1
		constexpr auto bForceSubStepping = 0xf8; // char : 1
		constexpr auto bSimulationEnabled = 0xf8; // char : 1
		constexpr auto bSweepCollision = 0xf8; // char : 1
		constexpr auto bIsHomingProjectile = 0xf8; // char : 1
		constexpr auto bBounceAngleAffectsFriction = 0xf9; // char : 1
		constexpr auto bIsSliding = 0xf9; // char : 1
		constexpr auto bInterpMovement = 0xf9; // char : 1
		constexpr auto bInterpRotation = 0xf9; // char : 1
		constexpr auto PreviousHitTime = 0xfc; // float
		constexpr auto PreviousHitNormal = 0x100; // FVector
		constexpr auto ProjectileGravityScale = 0x10c; // float
		constexpr auto Buoyancy = 0x110; // float
		constexpr auto Bounciness = 0x114; // float
		constexpr auto Friction = 0x118; // float
		constexpr auto BounceVelocityStopSimulatingThreshold = 0x11c; // float
		constexpr auto MinFrictionFraction = 0x120; // float
		constexpr auto OnProjectileBounce = 0x128; // FMulticastInlineDelegate
		constexpr auto OnProjectileStop = 0x138; // FMulticastInlineDelegate
		constexpr auto HomingAccelerationMagnitude = 0x148; // float
		constexpr auto HomingTargetComponent = 0x14c; // TWeakObjectPtr<USceneComponent>
		constexpr auto MaxSimulationTimeStep = 0x154; // float
		constexpr auto MaxSimulationIterations = 0x158; // int32_t
		constexpr auto BounceAdditionalIterations = 0x15c; // int32_t
		constexpr auto InterpLocationTime = 0x160; // float
		constexpr auto InterpRotationTime = 0x164; // float
		constexpr auto InterpLocationMaxLagDistance = 0x168; // float
		constexpr auto InterpLocationSnapToTargetDistance = 0x16c; // float
	}

	namespace n_Aweapon_firearms_sg_m4_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
		constexpr auto Shell = 0x7f0; // UStaticMeshComponent*
	}

	namespace n_UBodySetupCore {
		constexpr auto BoneName = 0x28; // FName
		constexpr auto PhysicsType = 0x30; // EPhysicsType
		constexpr auto CollisionTraceFlag = 0x31; // ECollisionTraceFlag
		constexpr auto CollisionReponse = 0x32; // EBodyCollisionResponse
	}

	namespace n_UMovieSceneTrack {
		constexpr auto EvalOptions = 0x50; // FMovieSceneTrackEvalOptions
		constexpr auto bIsEvalDisabled = 0x55; // bool
		constexpr auto RowsDisabled = 0x58; // TArray<int32_t>
		constexpr auto EvaluationFieldGuid = 0x6c; // FGuid
		constexpr auto EvaluationField = 0x80; // FMovieSceneTrackEvaluationField
	}

	namespace n_ANavMeshBoundsVolume {
		constexpr auto SupportedAgents = 0x258; // FNavAgentSelector
	}

	namespace n_UABP_weapon_firearms_rifle_m4a1_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x3b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x430; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x460; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x4e0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x510; // FAnimNode_StateMachine
	}

	namespace n_ASkyLight {
		constexpr auto LightComponent = 0x220; // USkyLightComponent*
		constexpr auto bEnabled = 0x228; // char : 1
	}

	namespace n_USFPSUISoundTable {
		constexpr auto UI_ClickWave = 0x28; // USoundBase*
		constexpr auto UI_UnClickWave = 0x30; // USoundBase*
		constexpr auto UI_HoverWave = 0x38; // USoundBase*
		constexpr auto UI_ErrorWave = 0x40; // USoundBase*
		constexpr auto MusicWave = 0x48; // USoundBase*
		constexpr auto BtnPressCue = 0x50; // USoundCue*
		constexpr auto BtnUnpressCue = 0x58; // USoundCue*
		constexpr auto BtnHoverCue = 0x60; // USoundCue*
		constexpr auto BtnOkCue = 0x68; // USoundCue*
		constexpr auto ImpossibleCue = 0x70; // USoundCue*
		constexpr auto CombinationLockCue = 0x78; // USoundCue*
		constexpr auto ItemPickUpCue = 0x80; // USoundCue*
		constexpr auto ItemMovementCue = 0x88; // USoundCue*
		constexpr auto ItemPutCue = 0x90; // USoundCue*
		constexpr auto ItemSplitCue = 0x98; // USoundCue*
		constexpr auto ItemGroupCue = 0xa0; // USoundCue*
		constexpr auto AmmoLoadCue = 0xa8; // USoundCue*
		constexpr auto CaseOpenCue = 0xb0; // USoundCue*
		constexpr auto NeedAmmoCue = 0xb8; // USoundCue*
		constexpr auto ItemSellCue = 0xc0; // USoundCue*
		constexpr auto ItemBuyCue = 0xc8; // USoundCue*
		constexpr auto ChatSendCue = 0xd0; // USoundCue*
		constexpr auto ChatCloseCue = 0xd8; // USoundCue*
		constexpr auto MapUseCue = 0xe0; // USoundCue*
		constexpr auto MapPinCue = 0xe8; // USoundCue*
		constexpr auto Msg_IncomingCue = 0xf0; // USoundCue*
		constexpr auto VoipRadioCue = 0xf8; // USoundCue*
		constexpr auto SquadInvCue = 0x100; // USoundCue*
		constexpr auto SquadNewMemberCue = 0x108; // USoundCue*
		constexpr auto CraftBeginCue = 0x110; // USoundCue*
		constexpr auto CraftCancelCue = 0x118; // USoundCue*
		constexpr auto CraftCompleteCue = 0x120; // USoundCue*
		constexpr auto CraftItemStartCue = 0x128; // USoundCue*
		constexpr auto CraftItemSetCue = 0x130; // USoundCue*
		constexpr auto CraftItemGetCue = 0x138; // USoundCue*
		constexpr auto EncRadioAlarmCue = 0x140; // USoundCue*
		constexpr auto LocalAttenuationSettings = 0x148; // USoundAttenuation*
		constexpr auto UnderwaterSoundMix = 0x150; // USoundMix*
	}

	namespace n_UUserDefinedEnum {
		constexpr auto DisplayNameMap = 0x60; // TMap<FName, FText>
	}

	namespace n_UMaterialExpressionComponentMask {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto R = 0x54; // char : 1
		constexpr auto G = 0x54; // char : 1
		constexpr auto B = 0x54; // char : 1
		constexpr auto A = 0x54; // char : 1
	}

	namespace n_UMaterialExpressionIf {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto AGreaterThanB = 0x68; // FExpressionInput
		constexpr auto AEqualsB = 0x7c; // FExpressionInput
		constexpr auto ALessThanB = 0x90; // FExpressionInput
		constexpr auto EqualsThreshold = 0xa4; // float
		constexpr auto ConstB = 0xa8; // float
		constexpr auto ConstAEqualsB = 0xac; // float
	}

	namespace n_UMaterialExpressionAbs {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UParticleModuleLight_Seeded {
		constexpr auto RandomSeedInfo = 0x120; // FParticleRandomSeedInfo
	}

	namespace n_UOnlineSessionClient {
		constexpr auto bIsFromInvite = 0x1c0; // bool
		constexpr auto bHandlingDisconnect = 0x1c1; // bool
	}

	namespace n_UEnvQueryGenerator {
		constexpr auto OptionName = 0x30; // FString
		constexpr auto ItemType = 0x40; // UEnvQueryItemType*
		constexpr auto bAutoSortTests = 0x48; // char : 1
	}

	namespace n_UVolumetricCloudComponent {
		constexpr auto LayerBottomAltitude = 0x1f8; // float
		constexpr auto LayerHeight = 0x1fc; // float
		constexpr auto TracingStartMaxDistance = 0x200; // float
		constexpr auto TracingMaxDistance = 0x204; // float
		constexpr auto PlanetRadius = 0x208; // float
		constexpr auto GroundAlbedo = 0x20c; // FColor
		constexpr auto Material = 0x210; // UMaterialInterface*
		constexpr auto bUsePerSampleAtmosphericLightTransmittance = 0x218; // char : 1
		constexpr auto SkyLightCloudBottomOcclusion = 0x21c; // float
		constexpr auto ViewSampleCountScale = 0x220; // float
		constexpr auto ReflectionSampleCountScale = 0x224; // float
		constexpr auto ShadowViewSampleCountScale = 0x228; // float
		constexpr auto ShadowReflectionSampleCountScale = 0x22c; // float
		constexpr auto ShadowTracingDistance = 0x230; // float
		constexpr auto StopTracingTransmittanceThreshold = 0x234; // float
	}

	namespace n_USFPSWeaponAnimInstance_SG {
		constexpr auto Shell = 0x2e0; // UStaticMeshComponent*
		constexpr auto LeftShellFull = 0x2e8; // UStaticMeshComponent*
		constexpr auto LeftShellEmpty = 0x2f0; // UStaticMeshComponent*
		constexpr auto RightShellFull = 0x2f8; // UStaticMeshComponent*
		constexpr auto RightShellEmpty = 0x300; // UStaticMeshComponent*
	}

	namespace n_UDynamicEntryBox {
		constexpr auto EntryWidgetClass = 0x1d8; // UUserWidget*
	}

	namespace n_UBTDecorator_IsBBEntryOfClass {
		constexpr auto TestClass = 0x90; // UObject*
	}

	namespace n_USFPSUserWidget_GroundItem {
		constexpr auto TagObject0 = 0x260; // TWeakObjectPtr<ASFPSBaseItem>
		constexpr auto TagObject1 = 0x268; // TWeakObjectPtr<ASFPSBaseItem>
		constexpr auto TagObject2 = 0x270; // TWeakObjectPtr<ASFPSBaseItem>
		constexpr auto bUsedObject0 = 0x278; // bool
		constexpr auto bUsedObject1 = 0x279; // bool
		constexpr auto bUsedObject2 = 0x27a; // bool
		constexpr auto ScrollBoxType = 0x27b; // ESFPSGroundScrollBoxType
		constexpr auto DblClickTimer = 0x27c; // float
	}

	namespace n_ANavSystemConfigOverride {
		constexpr auto NavigationSystemConfig = 0x220; // UNavigationSystemConfig*
		constexpr auto OverridePolicy = 0x228; // ENavSystemOverridePolicy
		constexpr auto bLoadOnClient = 0x229; // char : 1
	}

	namespace n_ALandscapeMeshProxyActor {
		constexpr auto LandscapeMeshProxyComponent = 0x220; // ULandscapeMeshProxyComponent*
	}

	namespace n_UInterpTrackFloatMaterialParam {
		constexpr auto TargetMaterials = 0x90; // TArray<UMaterialInterface*>
		constexpr auto ParamName = 0xa0; // FName
	}

	namespace n_UMaterialExpressionHairAttributes {
		constexpr auto bUseTangentSpace = 0x40; // char : 1
	}

	namespace n_USoundNodeDialoguePlayer {
		constexpr auto DialogueWaveParameter = 0x48; // FDialogueWaveParameter
		constexpr auto bLooping = 0x68; // char : 1
	}

	namespace n_USubmixEffectTapDelayPreset {
		constexpr auto Settings = 0xa8; // FSubmixEffectTapDelaySettings
	}

	namespace n_UForceFeedbackComponent {
		constexpr auto ForceFeedbackEffect = 0x1f8; // UForceFeedbackEffect*
		constexpr auto bAutoDestroy = 0x200; // char : 1
		constexpr auto bStopWhenOwnerDestroyed = 0x200; // char : 1
		constexpr auto bLooping = 0x200; // char : 1
		constexpr auto bIgnoreTimeDilation = 0x200; // char : 1
		constexpr auto bOverrideAttenuation = 0x200; // char : 1
		constexpr auto IntensityMultiplier = 0x204; // float
		constexpr auto AttenuationSettings = 0x208; // UForceFeedbackAttenuation*
		constexpr auto AttenuationOverrides = 0x210; // FForceFeedbackAttenuationSettings
		constexpr auto OnForceFeedbackFinished = 0x2c0; // FMulticastInlineDelegate
	}

	namespace n_Aweapon_steelarms_knife_01_C {
		constexpr auto DamagePoint2 = 0x620; // USceneComponent*
		constexpr auto DamagePoint1 = 0x628; // USceneComponent*
		constexpr auto DamagePoint0 = 0x630; // USceneComponent*
	}

	namespace n_USFPSACBoxCollisionComponent {
		constexpr auto PhysicalMaterial = 0x478; // USFPSPhysicalMaterial*
	}

	namespace n_AFlashGrenade_C {
		constexpr auto ProjectileMovement = 0x3e8; // UProjectileMovementComponent*
		constexpr auto Mesh = 0x3f0; // UStaticMeshComponent*
	}

	namespace n_ADatasmithImportedSequencesActor {
		constexpr auto ImportedSequences = 0x220; // TArray<ULevelSequence*>
	}

	namespace n_UInterpTrackInstSound {
		constexpr auto LastUpdatePosition = 0x28; // float
		constexpr auto PlayAudioComp = 0x30; // UAudioComponent*
	}

	namespace n_AGameState {
		constexpr auto MatchState = 0x270; // FName
		constexpr auto PreviousMatchState = 0x278; // FName
		constexpr auto ElapsedTime = 0x280; // int32_t
	}

	namespace n_UScaleBoxSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_UDatasmithDecalComponentTemplate {
		constexpr auto SortOrder = 0x30; // int32_t
		constexpr auto DecalSize = 0x34; // FVector
		constexpr auto Material = 0x40; // UMaterialInterface*
	}

	namespace n_Aweapon_firearms_sg_mp43_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
		constexpr auto RightShell = 0x7f0; // UStaticMeshComponent*
		constexpr auto LeftShellEmpty = 0x7f8; // UStaticMeshComponent*
		constexpr auto RightShellEmpty = 0x800; // UStaticMeshComponent*
		constexpr auto LeftShell = 0x808; // UStaticMeshComponent*
	}

	namespace n_UFormMessageMemo_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnOk = 0x268; // UButton*
		constexpr auto lbOk = 0x270; // UTextBlock*
	}

	namespace n_USoundNodeDelay {
		constexpr auto DelayMin = 0x48; // float
		constexpr auto DelayMax = 0x4c; // float
	}

	namespace n_UVerticalBoxSlot {
		constexpr auto Size = 0x38; // FSlateChildSize
		constexpr auto Padding = 0x40; // FMargin
		constexpr auto HorizontalAlignment = 0x58; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x59; // EVerticalAlignment
	}

	namespace n_At_Gameplay_C {
		constexpr auto Trace = 0x360; // UBoxComponent*
		constexpr auto Mesh = 0x368; // UStaticMeshComponent*
	}

	namespace n_UInterpTrackInstFloatParticleParam {
		constexpr auto ResetFloat = 0x28; // float
	}

	namespace n_USoundNodeLatencyByDistance {
		constexpr auto NonLatencyDist = 0x50; // float
		constexpr auto MinLatencyValue = 0x54; // float
		constexpr auto MaxLatencyValue = 0x58; // float
	}

	namespace n_USFPSVoiceList {
		constexpr auto SentenceSoundTable = 0x28; // TArray<USFPSSoundTalkSet*>
	}

	namespace n_UBTDecorator_BlackboardBase {
		constexpr auto BlackboardKey = 0x68; // FBlackboardKeySelector
	}

	namespace n_UMaterialExpressionConstantBiasScale {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Bias = 0x54; // float
		constexpr auto Scale = 0x58; // float
	}

	namespace n_Aweapon_firearms_snip_barrettm99_C {
		constexpr auto SightOpen = 0x7e0; // UStaticMeshComponent*
		constexpr auto ShellBarrelFull = 0x7e8; // UStaticMeshComponent*
		constexpr auto ShellBarrelEmpty = 0x7f0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7f8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x800; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x808; // USFPSACWeaponMFInventory*
	}

	namespace n_AController {
		constexpr auto PlayerState = 0x228; // APlayerState*
		constexpr auto OnInstigatedAnyDamage = 0x238; // FMulticastInlineDelegate
		constexpr auto StateName = 0x248; // FName
		constexpr auto Pawn = 0x250; // APawn*
		constexpr auto Character = 0x260; // ACharacter*
		constexpr auto TransformComponent = 0x268; // USceneComponent*
		constexpr auto ControlRotation = 0x288; // FRotator
		constexpr auto bAttachToPawn = 0x294; // char : 1
	}

	namespace n_AM_Stash_01_C {
		constexpr auto SFPSACBaseCollision1 = 0x3b8; // USFPSACBaseCollision*
		constexpr auto Loot_box_01_static = 0x3c0; // UStaticMeshComponent*
		constexpr auto SFPSACLootBoxInventory = 0x3c8; // USFPSACLootBoxInventory*
	}

	namespace n_UCameraModifier_CameraShake {
		constexpr auto ActiveShakes = 0x48; // TArray<FActiveCameraShakeInfo>
		constexpr auto ExpiredPooledShakesMap = 0x58; // TMap<UCameraShakeBase*, FPooledCameraShakes>
		constexpr auto SplitScreenShakeScale = 0xa8; // float
	}

	namespace n_UOperatorField {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto RightField = 0xb8; // UFieldNodeBase*
		constexpr auto LeftField = 0xc0; // UFieldNodeBase*
		constexpr auto Operation = 0xc8; // EFieldOperationType
	}

	namespace n_ABM_FloorTria_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_USoundNodeModulatorContinuous {
		constexpr auto PitchModulationParams = 0x48; // FModulatorContinuousParams
		constexpr auto VolumeModulationParams = 0x68; // FModulatorContinuousParams
	}

	namespace n_UBTDecorator_IsAtLocation {
		constexpr auto AcceptableRadius = 0x90; // float
		constexpr auto ParametrizedAcceptableRadius = 0x98; // FAIDataProviderFloatValue
		constexpr auto GeometricDistanceType = 0xd0; // FAIDistanceType
		constexpr auto bUseParametrizedRadius = 0xd4; // char : 1
		constexpr auto bUseNavAgentGoalLocation = 0xd4; // char : 1
		constexpr auto bPathFindingBasedTest = 0xd4; // char : 1
	}

	namespace n_UMaterialExpressionMaterialProxyReplace {
		constexpr auto Realtime = 0x40; // FExpressionInput
		constexpr auto MaterialProxy = 0x54; // FExpressionInput
	}

	namespace n_USFPSAI_TDebug {
		constexpr auto Text = 0x70; // FString
	}

	namespace n_UAudioAnalyzerNRT {
		constexpr auto Sound = 0x28; // USoundWave*
		constexpr auto DurationInSeconds = 0x30; // float
	}

	namespace n_UABP_weapon_firearms_gun_M9_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_6 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_5 = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_4 = 0x3b0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_3 = 0x3d8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x400; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x428; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_3 = 0x450; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_3 = 0x4d0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x500; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x580; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x5b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x630; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x660; // FAnimNode_StateMachine
	}

	namespace n_UParticleModuleLocationPrimitiveCylinder {
		constexpr auto RadialVelocity = 0xb0; // char : 1
		constexpr auto StartRadius = 0xb8; // FRawDistributionFloat
		constexpr auto StartHeight = 0xe8; // FRawDistributionFloat
		constexpr auto HeightAxis = 0x118; // CylinderHeightAxis
	}

	namespace n_UMaterialExpressionDivide {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UEnvQueryGenerator_PathingGrid {
		constexpr auto PathToItem = 0xf8; // FAIDataProviderBoolValue
		constexpr auto NavigationFilter = 0x130; // UNavigationQueryFilter*
		constexpr auto ScanRangeMultiplier = 0x138; // FAIDataProviderFloatValue
	}

	namespace n_USFPSTradeList {
		constexpr auto SellList = 0x28; // FSFPSTradeGroupList
		constexpr auto BuyList = 0x38; // FSFPSTradeGroupList
	}

	namespace n_USFPSUserWidget_HUDChatBox {
		constexpr auto LabelsCount = 0x2d4; // int32_t
		constexpr auto Font = 0x2d8; // FSlateFontInfo
		constexpr auto ViewportScale = 0x330; // float
	}

	namespace n_UOnsetNRTSettings {
		constexpr auto bDownmixToMono = 0x28; // bool
		constexpr auto GranularityInSeconds = 0x2c; // float
		constexpr auto Sensitivity = 0x30; // float
		constexpr auto MinimumFrequency = 0x34; // float
		constexpr auto MaximumFrequency = 0x38; // float
	}

	namespace n_UAnimInstance {
		constexpr auto CurrentSkeleton = 0x28; // USkeleton*
		constexpr auto RootMotionMode = 0x30; // ERootMotionMode
		constexpr auto bUseMultiThreadedAnimationUpdate = 0x31; // char : 1
		constexpr auto bUsingCopyPoseFromMesh = 0x31; // char : 1
		constexpr auto bReceiveNotifiesFromLinkedInstances = 0x31; // char : 1
		constexpr auto bPropagateNotifiesToLinkedInstances = 0x31; // char : 1
		constexpr auto bQueueMontageEvents = 0x31; // char : 1
		constexpr auto OnMontageBlendingOut = 0x38; // FMulticastInlineDelegate
		constexpr auto OnMontageStarted = 0x48; // FMulticastInlineDelegate
		constexpr auto OnMontageEnded = 0x58; // FMulticastInlineDelegate
		constexpr auto OnAllMontageInstancesEnded = 0x68; // FMulticastInlineDelegate
		constexpr auto NotifyQueue = 0x100; // FAnimNotifyQueue
		constexpr auto ActiveAnimNotifyState = 0x170; // TArray<FAnimNotifyEvent>
	}

	namespace n_UOnlinePIESettings {
		constexpr auto bOnlinePIEEnabled = 0x38; // bool
		constexpr auto Logins = 0x40; // TArray<FPIELoginSettingsInternal>
	}

	namespace n_UGizmoComponentWorldTransformSource {
		constexpr auto Component = 0x48; // USceneComponent*
		constexpr auto bModifyComponentOnTransform = 0x50; // bool
	}

	namespace n_UMovieSceneEventTrack {
		constexpr auto bFireEventsWhenForwards = 0xa0; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0xa0; // char : 1
		constexpr auto EventPosition = 0xa4; // EFireEventsAtPosition
		constexpr auto Sections = 0xa8; // TArray<UMovieSceneSection*>
	}

	namespace n_USFPSACVehicleSoundSystem {
		constexpr auto EngineCue = 0xb0; // USoundCue*
		constexpr auto SuspensCue = 0xb8; // USoundCue*
		constexpr auto ExtraStopCue = 0xc0; // USoundCue*
		constexpr auto HandBrakeCue = 0xc8; // USoundCue*
		constexpr auto CrashCue = 0xd0; // USoundCue*
		constexpr auto DoorCue = 0xd8; // USoundCue*
		constexpr auto BaseTiresCue = 0xe0; // USoundCue*
		constexpr auto UnderwaterTires = 0xe8; // USoundCue*
		constexpr auto CarDamageExplCue = 0xf0; // USoundCue*
		constexpr auto CarHornCue = 0xf8; // USoundCue*
		constexpr auto OwnerVehicleComp = 0x100; // UDcxVehicleDriveComponent*
		constexpr auto fEngineActive = 0x108; // float
		constexpr auto EngineAudioComponent = 0x110; // UAudioComponent*
		constexpr auto DamageAudioComponent = 0x118; // UAudioComponent*
		constexpr auto RoadTiresAudioComponent = 0x120; // UAudioComponent*
		constexpr auto SuspensAudioComponent = 0x128; // UAudioComponent*
		constexpr auto StopAudioComponent = 0x130; // UAudioComponent*
		constexpr auto HornAudioComponent = 0x138; // UAudioComponent*
		constexpr auto TiresParticleComponent = 0x140; // TWeakObjectPtr<UParticleSystemComponent>
		constexpr auto DamageParticleComponent = 0x148; // TWeakObjectPtr<UParticleSystemComponent>
		constexpr auto ExhaustPipeParticleComponent = 0x150; // TWeakObjectPtr<UParticleSystemComponent>
		constexpr auto tPhysMatSound = 0x158; // USoundCue*
		constexpr auto LastSusp = 0x160; // float
		constexpr auto CurDepth = 0x164; // float
		constexpr auto LastRPM = 0x178; // float
		constexpr auto bIsPressed = 0x17c; // bool
		constexpr auto bIsStopping = 0x17d; // bool
		constexpr auto LastCarLocation = 0x180; // FVector
		constexpr auto LastCarRotation = 0x18c; // FRotator
		constexpr auto LastForwSpeed = 0x198; // float
		constexpr auto bIsInAir = 0x19c; // bool
		constexpr auto bIsLanded = 0x19d; // bool
		constexpr auto bIsInWater = 0x19e; // bool
		constexpr auto HornPitch = 0x1a0; // float
		constexpr auto ComponentPositions = 0x1a4; // FComponentPos
		constexpr auto bInited = 0x1f8; // bool
		constexpr auto bEngineAct = 0x1f9; // bool
		constexpr auto bUnderwaterIsActive = 0x1fa; // bool
		constexpr auto IncRPMSpeed = 0x1fc; // float
		constexpr auto DecRPMSpeed = 0x200; // float
		constexpr auto MinAngleToBrakes = 0x204; // float
		constexpr auto MinForwSpeedToBrakes = 0x208; // float
		constexpr auto MinDetentToBrakes = 0x20c; // float
		constexpr auto MinRPMToBrakes = 0x210; // float
		constexpr auto HeightPlay = 0x214; // float
		constexpr auto ZShiftUp = 0x218; // float
		constexpr auto ZShiftDown = 0x21c; // float
		constexpr auto FlyTraceDistance = 0x220; // float
		constexpr auto TireFadeTime = 0x224; // float
		constexpr auto ActorMaxForwSpeed = 0x228; // float
		constexpr auto MinDifRotToAbruptStop = 0x22c; // float
		constexpr auto MinDifSpeedToAbruptStop = 0x230; // float
		constexpr auto LightBumpParticle = 0x238; // UParticleSystem*
		constexpr auto ExhaustParticle = 0x240; // UParticleSystem*
		constexpr auto LowWaterTiresParticle = 0x248; // UParticleSystem*
		constexpr auto DeepWaterTiresParticle = 0x250; // UParticleSystem*
		constexpr auto WaterDeepDistance = 0x258; // float
		constexpr auto LightDamageParticle = 0x260; // UParticleSystem*
		constexpr auto HeavyDamageParticle = 0x268; // UParticleSystem*
		constexpr auto VehicleDestroyedParticle = 0x270; // UParticleSystem*
		constexpr auto VehicleExplosionParticle = 0x278; // UParticleSystem*
		constexpr auto LightDamageStart = 0x280; // float
		constexpr auto HeavyDamageStart = 0x284; // float
	}

	namespace n_UWheeledVehicleMovementComponent {
		constexpr auto bDeprecatedSpringOffsetMode = 0x140; // char : 1
		constexpr auto bReverseAsBrake = 0x140; // char : 1
		constexpr auto bUseRVOAvoidance = 0x140; // char : 1
		constexpr auto bRawHandbrakeInput = 0x140; // char : 1
		constexpr auto bRawGearUpInput = 0x140; // char : 1
		constexpr auto bRawGearDownInput = 0x140; // char : 1
		constexpr auto bWasAvoidanceUpdated = 0x144; // char : 1
		constexpr auto Mass = 0x148; // float
		constexpr auto WheelSetups = 0x150; // TArray<FWheelSetup>
		constexpr auto DragCoefficient = 0x160; // float
		constexpr auto ChassisWidth = 0x164; // float
		constexpr auto ChassisHeight = 0x168; // float
		constexpr auto DragArea = 0x16c; // float
		constexpr auto EstimatedMaxEngineSpeed = 0x170; // float
		constexpr auto MaxEngineRPM = 0x174; // float
		constexpr auto DebugDragMagnitude = 0x178; // float
		constexpr auto InertiaTensorScale = 0x17c; // FVector
		constexpr auto MinNormalizedTireLoad = 0x188; // float
		constexpr auto MinNormalizedTireLoadFiltered = 0x18c; // float
		constexpr auto MaxNormalizedTireLoad = 0x190; // float
		constexpr auto MaxNormalizedTireLoadFiltered = 0x194; // float
		constexpr auto ThresholdLongitudinalSpeed = 0x198; // float
		constexpr auto LowForwardSpeedSubStepCount = 0x19c; // int32_t
		constexpr auto HighForwardSpeedSubStepCount = 0x1a0; // int32_t
		constexpr auto Wheels = 0x1a8; // TArray<UVehicleWheel*>
		constexpr auto RVOAvoidanceRadius = 0x1d0; // float
		constexpr auto RVOAvoidanceHeight = 0x1d4; // float
		constexpr auto AvoidanceConsiderationRadius = 0x1d8; // float
		constexpr auto RVOSteeringStep = 0x1dc; // float
		constexpr auto RVOThrottleStep = 0x1e0; // float
		constexpr auto AvoidanceUID = 0x1e4; // int32_t
		constexpr auto AvoidanceGroup = 0x1e8; // FNavAvoidanceMask
		constexpr auto GroupsToAvoid = 0x1ec; // FNavAvoidanceMask
		constexpr auto GroupsToIgnore = 0x1f0; // FNavAvoidanceMask
		constexpr auto AvoidanceWeight = 0x1f4; // float
		constexpr auto PendingLaunchVelocity = 0x1f8; // FVector
		constexpr auto ReplicatedState = 0x204; // FReplicatedVehicleState
		constexpr auto RawSteeringInput = 0x21c; // float
		constexpr auto RawThrottleInput = 0x220; // float
		constexpr auto RawBrakeInput = 0x224; // float
		constexpr auto SteeringInput = 0x228; // float
		constexpr auto ThrottleInput = 0x22c; // float
		constexpr auto BrakeInput = 0x230; // float
		constexpr auto HandbrakeInput = 0x234; // float
		constexpr auto IdleBrakeInput = 0x238; // float
		constexpr auto StopThreshold = 0x23c; // float
		constexpr auto WrongDirectionThreshold = 0x240; // float
		constexpr auto ThrottleInputRate = 0x244; // FVehicleInputRate
		constexpr auto BrakeInputRate = 0x24c; // FVehicleInputRate
		constexpr auto HandbrakeInputRate = 0x254; // FVehicleInputRate
		constexpr auto SteeringInputRate = 0x25c; // FVehicleInputRate
		constexpr auto OverrideController = 0x288; // AController*
	}

	namespace n_UAchievementQueryCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_Aweapon_firearms_mg_mg36_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto SightOpen = 0x7e8; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7f0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_UGizmoPlaneTranslationParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto Parameter = 0xb0; // FVector2D
		constexpr auto LastChange = 0xb8; // FGizmoVec2ParameterChange
		constexpr auto CurTranslationOrigin = 0xc8; // FVector
		constexpr auto CurTranslationNormal = 0xd4; // FVector
		constexpr auto CurTranslationAxisX = 0xe0; // FVector
		constexpr auto CurTranslationAxisY = 0xec; // FVector
		constexpr auto InitialTransform = 0x100; // FTransform
	}

	namespace n_UMaterialExpressionSine {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Period = 0x54; // float
	}

	namespace n_UParticleModuleBeamSource {
		constexpr auto SourceMethod = 0x30; // Beam2SourceTargetMethod
		constexpr auto SourceName = 0x34; // FName
		constexpr auto bSourceAbsolute = 0x3c; // char : 1
		constexpr auto Source = 0x40; // FRawDistributionVector
		constexpr auto bLockSource = 0x88; // char : 1
		constexpr auto SourceTangentMethod = 0x8c; // Beam2SourceTargetTangentMethod
		constexpr auto SourceTangent = 0x90; // FRawDistributionVector
		constexpr auto bLockSourceTangent = 0xd8; // char : 1
		constexpr auto SourceStrength = 0xe0; // FRawDistributionFloat
		constexpr auto bLockSourceStength = 0x110; // char : 1
	}

	namespace n_UInputAxisKeyDelegateBinding {
		constexpr auto InputAxisKeyDelegateBindings = 0x28; // TArray<FBlueprintInputAxisKeyDelegateBinding>
	}

	namespace n_UEnvQueryGenerator_OnCircle {
		constexpr auto CircleRadius = 0x80; // FAIDataProviderFloatValue
		constexpr auto SpaceBetween = 0xb8; // FAIDataProviderFloatValue
		constexpr auto NumberOfPoints = 0xf0; // FAIDataProviderIntValue
		constexpr auto PointOnCircleSpacingMethod = 0x128; // EPointOnCircleSpacingMethod
		constexpr auto ArcDirection = 0x130; // FEnvDirection
		constexpr auto ArcAngle = 0x150; // FAIDataProviderFloatValue
		constexpr auto AngleRadians = 0x188; // float
		constexpr auto CircleCenter = 0x190; // UEnvQueryContext*
		constexpr auto bIgnoreAnyContextActorsWhenGeneratingCircle = 0x198; // bool
		constexpr auto CircleCenterZOffset = 0x1a0; // FAIDataProviderFloatValue
		constexpr auto TraceData = 0x1d8; // FEnvTraceData
		constexpr auto bDefineArc = 0x208; // char : 1
	}

	namespace n_ULightComponent {
		constexpr auto Temperature = 0x228; // float
		constexpr auto MaxDrawDistance = 0x22c; // float
		constexpr auto MaxDistanceFadeRange = 0x230; // float
		constexpr auto bUseTemperature = 0x234; // char : 1
		constexpr auto ShadowMapChannel = 0x238; // int32_t
		constexpr auto MinRoughness = 0x240; // float
		constexpr auto SpecularScale = 0x244; // float
		constexpr auto ShadowResolutionScale = 0x248; // float
		constexpr auto ShadowBias = 0x24c; // float
		constexpr auto ShadowSlopeBias = 0x250; // float
		constexpr auto ShadowSharpen = 0x254; // float
		constexpr auto ContactShadowLength = 0x258; // float
		constexpr auto ContactShadowLengthInWS = 0x25c; // char : 1
		constexpr auto InverseSquaredFalloff = 0x25c; // char : 1
		constexpr auto CastTranslucentShadows = 0x25c; // char : 1
		constexpr auto bCastShadowsFromCinematicObjectsOnly = 0x25c; // char : 1
		constexpr auto bAffectDynamicIndirectLighting = 0x25c; // char : 1
		constexpr auto bForceCachedShadowsForMovablePrimitives = 0x25c; // char : 1
		constexpr auto LightingChannels = 0x260; // FLightingChannels
		constexpr auto LightFunctionMaterial = 0x268; // UMaterialInterface*
		constexpr auto LightFunctionScale = 0x270; // FVector
		constexpr auto IESTexture = 0x280; // UTextureLightProfile*
		constexpr auto bUseIESBrightness = 0x288; // char : 1
		constexpr auto IESBrightnessScale = 0x28c; // float
		constexpr auto LightFunctionFadeDistance = 0x290; // float
		constexpr auto DisabledBrightness = 0x294; // float
		constexpr auto bEnableLightShaftBloom = 0x298; // char : 1
		constexpr auto BloomScale = 0x29c; // float
		constexpr auto BloomThreshold = 0x2a0; // float
		constexpr auto BloomMaxBrightness = 0x2a4; // float
		constexpr auto BloomTint = 0x2a8; // FColor
		constexpr auto bUseRayTracedDistanceFieldShadows = 0x2ac; // bool
		constexpr auto RayStartOffsetDepthScale = 0x2b0; // float
	}

	namespace n_UEngineMessage {
		constexpr auto FailedPlaceMessage = 0x28; // FString
		constexpr auto MaxedOutMessage = 0x38; // FString
		constexpr auto EnteredMessage = 0x48; // FString
		constexpr auto LeftMessage = 0x58; // FString
		constexpr auto GlobalNameChange = 0x68; // FString
		constexpr auto SpecEnteredMessage = 0x78; // FString
		constexpr auto NewPlayerMessage = 0x88; // FString
		constexpr auto NewSpecMessage = 0x98; // FString
	}

	namespace n_UInterpTrackInstBoolProp {
		constexpr auto ResetBool = 0x60; // bool
	}

	namespace n_UMaterialExpressionCurveAtlasRowParameter {
		constexpr auto Curve = 0x60; // UCurveLinearColor*
		constexpr auto Atlas = 0x68; // UCurveLinearColorAtlas*
		constexpr auto InputTime = 0x70; // FExpressionInput
	}

	namespace n_UPaperRuntimeSettings {
		constexpr auto bEnableSpriteAtlasGroups = 0x28; // bool
		constexpr auto bEnableTerrainSplineEditing = 0x29; // bool
		constexpr auto bResizeSpriteDataToMatchTextures = 0x2a; // bool
	}

	namespace n_UConsoleSettings {
		constexpr auto MaxScrollbackSize = 0x28; // int32_t
		constexpr auto ManualAutoCompleteList = 0x30; // TArray<FAutoCompleteCommand>
		constexpr auto AutoCompleteMapPaths = 0x40; // TArray<FString>
		constexpr auto BackgroundOpacityPercentage = 0x50; // float
		constexpr auto bOrderTopToBottom = 0x54; // bool
		constexpr auto bDisplayHelpInAutoComplete = 0x55; // bool
		constexpr auto InputColor = 0x58; // FColor
		constexpr auto HistoryColor = 0x5c; // FColor
		constexpr auto AutoCompleteCommandColor = 0x60; // FColor
		constexpr auto AutoCompleteCVarColor = 0x64; // FColor
		constexpr auto AutoCompleteFadedColor = 0x68; // FColor
	}

	namespace n_UBTDecorator {
		constexpr auto bInverseCondition = 0x60; // char : 1
		constexpr auto FlowAbortMode = 0x64; // EBTFlowAbortMode
	}

	namespace n_UBlackboardKeyType_String {
		constexpr auto StringValue = 0x30; // FString
	}

	namespace n_ASFPSBaseGrenade {
		constexpr auto GrenadeType = 0x3a9; // ESFPSGrenadeType
		constexpr auto AbsoluteDamageRadius = 0x3ac; // float
		constexpr auto DecreasingDamageRadius = 0x3b0; // float
		constexpr auto ServerExplodedLoc = 0x3b4; // FVector
		constexpr auto DelayTimer = 0x3c0; // float
		constexpr auto ExplosionParticles = 0x3c8; // UParticleSystem*
		constexpr auto ExplosionWaterParticles = 0x3d0; // UParticleSystem*
		constexpr auto ExplosionSoundCue = 0x3d8; // USoundCue*
		constexpr auto bDrawDebugInfo = 0x3e0; // bool
		constexpr auto bAddDebugInfoToLog = 0x3e1; // bool
	}

	namespace n_UMaterialExpressionStaticBoolParameter {
		constexpr auto DefaultValue = 0x58; // char : 1
	}

	namespace n_UARGetCandidateObjectAsyncTaskBlueprintProxy {
		constexpr auto OnSuccess = 0x50; // FMulticastInlineDelegate
		constexpr auto OnFailed = 0x60; // FMulticastInlineDelegate
	}

	namespace n_UNavigationSystemV1 {
		constexpr auto MainNavData = 0x28; // ANavigationData*
		constexpr auto AbstractNavData = 0x30; // ANavigationData*
		constexpr auto DefaultAgentName = 0x38; // FName
		constexpr auto CrowdManagerClass = 0x40; // TSoftClassPtr<UObject>
		constexpr auto bAutoCreateNavigationData = 0x68; // char : 1
		constexpr auto bSpawnNavDataInNavBoundsLevel = 0x68; // char : 1
		constexpr auto bAllowClientSideNavigation = 0x68; // char : 1
		constexpr auto bShouldDiscardSubLevelNavData = 0x68; // char : 1
		constexpr auto bTickWhilePaused = 0x68; // char : 1
		constexpr auto bSupportRebuilding = 0x68; // char : 1
		constexpr auto bInitialBuildingLocked = 0x68; // char : 1
		constexpr auto bSkipAgentHeightCheckWhenPickingNavData = 0x69; // char : 1
		constexpr auto bGenerateNavigationOnlyAroundNavigationInvokers = 0x69; // char : 1
		constexpr auto ActiveTilesUpdateInterval = 0x6c; // float
		constexpr auto DataGatheringMode = 0x70; // ENavDataGatheringModeConfig
		constexpr auto DirtyAreaWarningSizeThreshold = 0x74; // float
		constexpr auto SupportedAgents = 0x78; // TArray<FNavDataConfig>
		constexpr auto SupportedAgentsMask = 0x88; // FNavAgentSelector
		constexpr auto NavDataSet = 0x90; // TArray<ANavigationData*>
		constexpr auto NavDataRegistrationQueue = 0xa0; // TArray<ANavigationData*>
		constexpr auto OnNavDataRegisteredEvent = 0xc0; // FMulticastInlineDelegate
		constexpr auto OnNavigationGenerationFinishedDelegate = 0xd0; // FMulticastInlineDelegate
		constexpr auto OperationMode = 0x1bc; // FNavigationSystemRunMode
		constexpr auto DirtyAreasUpdateFreq = 0x15bc; // float
	}

	namespace n_UFormSplit_C {
		constexpr auto btnCancel = 0x260; // UButton*
		constexpr auto btnDown = 0x268; // UButton*
		constexpr auto btnMax = 0x270; // UButton*
		constexpr auto btnMin = 0x278; // UButton*
		constexpr auto btnOk = 0x280; // UButton*
		constexpr auto btnUp = 0x288; // UButton*
		constexpr auto edText = 0x290; // UEditableTextBox*
		constexpr auto imgBackground0 = 0x298; // UImage*
		constexpr auto svItem = 0x2a0; // UfrmSpriteViewInv_C*
	}

	namespace n_UMaterialExpressionFresnel {
		constexpr auto ExponentIn = 0x40; // FExpressionInput
		constexpr auto Exponent = 0x54; // float
		constexpr auto BaseReflectFractionIn = 0x58; // FExpressionInput
		constexpr auto BaseReflectFraction = 0x6c; // float
		constexpr auto Normal = 0x70; // FExpressionInput
	}

	namespace n_UScrollBar {
		constexpr auto WidgetStyle = 0x108; // FScrollBarStyle
		constexpr auto Style = 0x5d8; // USlateWidgetStyleAsset*
		constexpr auto bAlwaysShowScrollbar = 0x5e0; // bool
		constexpr auto bAlwaysShowScrollbarTrack = 0x5e1; // bool
		constexpr auto Orientation = 0x5e2; // EOrientation
		constexpr auto Thickness = 0x5e4; // FVector2D
		constexpr auto Padding = 0x5ec; // FMargin
	}

	namespace n_UMaterialExpressionVectorNoise {
		constexpr auto Position = 0x40; // FExpressionInput
		constexpr auto NoiseFunction = 0x54; // EVectorNoiseFunction
		constexpr auto Quality = 0x58; // int32_t
		constexpr auto bTiling = 0x5c; // char : 1
		constexpr auto TileSize = 0x60; // uint32_t
	}

	namespace n_UDatasmithActorTemplate {
		constexpr auto Layers = 0x30; // TSet<FName>
		constexpr auto Tags = 0x80; // TSet<FName>
	}

	namespace n_AM_Campfire_02_C {
		constexpr auto ParticleSystem = 0x358; // UParticleSystemComponent*
		constexpr auto BigLight = 0x360; // UPointLightComponent*
		constexpr auto RedLight = 0x368; // UPointLightComponent*
		constexpr auto SFPSACBaseCollision1 = 0x370; // USFPSACBaseCollision*
	}

	namespace n_UGizmoUniformScaleParameterSource {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0x58; // TScriptInterface<IGizmoTransformSource>
		constexpr auto ScaleMultiplier = 0x68; // float
		constexpr auto Parameter = 0x6c; // FVector2D
		constexpr auto LastChange = 0x74; // FGizmoVec2ParameterChange
		constexpr auto CurScaleOrigin = 0x84; // FVector
		constexpr auto CurScaleNormal = 0x90; // FVector
		constexpr auto CurScaleAxisX = 0x9c; // FVector
		constexpr auto CurScaleAxisY = 0xa8; // FVector
		constexpr auto InitialTransform = 0xc0; // FTransform
	}

	namespace n_UARTrackedPose {
		constexpr auto TrackedPose = 0xf8; // FARPose3D
	}

	namespace n_UCreatePlayer_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnAfro01 = 0x268; // UCheckBox*
		constexpr auto btnArab01 = 0x270; // UCheckBox*
		constexpr auto btnArab02 = 0x278; // UCheckBox*
		constexpr auto btnCreate = 0x280; // UButton*
		constexpr auto btnEast01 = 0x288; // UCheckBox*
		constexpr auto btnEuro01 = 0x290; // UCheckBox*
		constexpr auto btnEuro02 = 0x298; // UCheckBox*
		constexpr auto btnEuro03 = 0x2a0; // UCheckBox*
		constexpr auto btnMenu = 0x2a8; // UButton*
		constexpr auto imgBackground = 0x2b0; // UImage*
		constexpr auto lbButtonLogin = 0x2b8; // UTextBlock*
		constexpr auto lbMenu = 0x2c0; // UTextBlock*
	}

	namespace n_UPawnAction_Repeat {
		constexpr auto ActionToRepeat = 0x90; // UPawnAction*
		constexpr auto RecentActionCopy = 0x98; // UPawnAction*
		constexpr auto ChildFailureHandlingMode = 0xa0; // EPawnActionFailHandling
	}

	namespace n_UMovieSceneObjectPropertyTrack {
		constexpr auto PropertyClass = 0xc8; // UObject*
	}

	namespace n_UParticleModuleMeshRotationRate {
		constexpr auto StartRotationRate = 0x30; // FRawDistributionVector
	}

	namespace n_USoundNodeWavePlayer {
		constexpr auto SoundWaveAssetPtr = 0x48; // TSoftObjectPtr<USoundWave>
		constexpr auto SoundWave = 0x70; // USoundWave*
		constexpr auto bLooping = 0x80; // char : 1
	}

	namespace n_UModularSynthComponent {
		constexpr auto VoiceCount = 0x6c0; // int32_t
	}

	namespace n_UGenlockedFixedRateCustomTimeStep {
		constexpr auto FrameRate = 0x28; // FFrameRate
	}

	namespace n_UStereoLayerShapeCylinder {
		constexpr auto Radius = 0x28; // float
		constexpr auto OverlayArc = 0x2c; // float
		constexpr auto Height = 0x30; // int32_t
	}

	namespace n_UVariant {
		constexpr auto Dependencies = 0x28; // TArray<FVariantDependency>
		constexpr auto DisplayText = 0x38; // FText
		constexpr auto ObjectBindings = 0x68; // TArray<UVariantObjectBinding*>
		constexpr auto Thumbnail = 0x78; // UTexture2D*
	}

	namespace n_UFieldSystemComponent {
		constexpr auto FieldSystem = 0x450; // UFieldSystem*
		constexpr auto bIsWorldField = 0x458; // bool
		constexpr auto bIsChaosField = 0x459; // bool
		constexpr auto SupportedSolvers = 0x460; // TArray<TSoftObjectPtr<AChaosSolverActor>>
		constexpr auto ConstructionCommands = 0x470; // FFieldObjectCommands
		constexpr auto BufferCommands = 0x4a0; // FFieldObjectCommands
	}

	namespace n_UButtonStyleAsset {
		constexpr auto ButtonStyle = 0x28; // FButtonStyle
	}

	namespace n_UCameraModifier {
		constexpr auto bDebug = 0x28; // char : 1
		constexpr auto bExclusive = 0x28; // char : 1
		constexpr auto Priority = 0x2c; // char
		constexpr auto CameraOwner = 0x30; // APlayerCameraManager*
		constexpr auto AlphaInTime = 0x38; // float
		constexpr auto AlphaOutTime = 0x3c; // float
		constexpr auto Alpha = 0x40; // float
	}

	namespace n_UMaterialExpressionQualitySwitch {
		constexpr auto Default = 0x40; // FExpressionInput
		constexpr auto Inputs = 0x54; // FExpressionInput [0x4]
	}

	namespace n_UExpandableArea {
		constexpr auto Style = 0x110; // FExpandableAreaStyle
		constexpr auto BorderBrush = 0x230; // FSlateBrush
		constexpr auto BorderColor = 0x2b8; // FSlateColor
		constexpr auto bIsExpanded = 0x2e0; // bool
		constexpr auto MaxHeight = 0x2e4; // float
		constexpr auto HeaderPadding = 0x2e8; // FMargin
		constexpr auto AreaPadding = 0x2f8; // FMargin
		constexpr auto OnExpansionChanged = 0x308; // FMulticastInlineDelegate
		constexpr auto HeaderContent = 0x318; // UWidget*
		constexpr auto BodyContent = 0x320; // UWidget*
	}

	namespace n_UCullingField {
		constexpr auto Culling = 0xb0; // UFieldNodeBase*
		constexpr auto Field = 0xb8; // UFieldNodeBase*
		constexpr auto Operation = 0xc0; // EFieldCullingOperationType
	}

	namespace n_UMaterialExpressionSceneDepth {
		constexpr auto InputMode = 0x40; // EMaterialSceneAttributeInputMode
		constexpr auto Input = 0x44; // FExpressionInput
		constexpr auto Coordinates = 0x58; // FExpressionInput
		constexpr auto ConstInput = 0x6c; // FVector2D
	}

	namespace n_UDatasmithMaterialInstanceTemplate {
		constexpr auto ParentMaterial = 0x30; // TSoftObjectPtr<UMaterialInterface>
		constexpr auto ScalarParameterValues = 0x58; // TMap<FName, float>
		constexpr auto VectorParameterValues = 0xa8; // TMap<FName, FLinearColor>
		constexpr auto TextureParameterValues = 0xf8; // TMap<FName, TSoftObjectPtr<UTexture>>
		constexpr auto StaticParameters = 0x148; // FDatasmithStaticParameterSetTemplate
	}

	namespace n_UTransformGizmo {
		constexpr auto ActiveTarget = 0x40; // UTransformProxy*
		constexpr auto bSnapToWorldGrid = 0x48; // bool
		constexpr auto bGridSizeIsExplicit = 0x49; // bool
		constexpr auto ExplicitGridSize = 0x4c; // FVector
		constexpr auto bRotationGridSizeIsExplicit = 0x58; // bool
		constexpr auto ExplicitRotationGridSize = 0x5c; // FRotator
		constexpr auto bSnapToWorldRotGrid = 0x68; // bool
		constexpr auto bUseContextCoordinateSystem = 0x69; // bool
		constexpr auto CurrentCoordinateSystem = 0x6c; // EToolContextCoordinateSystem
		constexpr auto ActiveComponents = 0x100; // TArray<UPrimitiveComponent*>
		constexpr auto NonuniformScaleComponents = 0x110; // TArray<UPrimitiveComponent*>
		constexpr auto ActiveGizmos = 0x120; // TArray<UInteractiveGizmo*>
		constexpr auto CameraAxisSource = 0x140; // UGizmoConstantFrameAxisSource*
		constexpr auto AxisXSource = 0x148; // UGizmoComponentAxisSource*
		constexpr auto AxisYSource = 0x150; // UGizmoComponentAxisSource*
		constexpr auto AxisZSource = 0x158; // UGizmoComponentAxisSource*
		constexpr auto UnitAxisXSource = 0x160; // UGizmoComponentAxisSource*
		constexpr auto UnitAxisYSource = 0x168; // UGizmoComponentAxisSource*
		constexpr auto UnitAxisZSource = 0x170; // UGizmoComponentAxisSource*
		constexpr auto StateTarget = 0x178; // UGizmoTransformChangeStateTarget*
		constexpr auto ScaledTransformSource = 0x180; // UGizmoScaledTransformSource*
	}

	namespace n_UCompositeDataTable {
		constexpr auto ParentTables = 0xb0; // TArray<UDataTable*>
		constexpr auto OldParentTables = 0xc0; // TArray<UDataTable*>
	}

	namespace n_AAfterDeathActor_C {
		constexpr auto UberGraphFrame = 0x220; // FPointerToUberGraphFrame
		constexpr auto Fx_fly_01 = 0x228; // UParticleSystemComponent*
		constexpr auto DefaultSceneRoot = 0x230; // USceneComponent*
		constexpr auto SoundCue = 0x238; // USoundBase*
	}

	namespace n_UAISystem {
		constexpr auto PerceptionSystemClassName = 0x58; // FSoftClassPath
		constexpr auto HotSpotManagerClassName = 0x70; // FSoftClassPath
		constexpr auto AcceptanceRadius = 0x88; // float
		constexpr auto PathfollowingRegularPathPointAcceptanceRadius = 0x8c; // float
		constexpr auto PathfollowingNavLinkAcceptanceRadius = 0x90; // float
		constexpr auto bFinishMoveOnGoalOverlap = 0x94; // bool
		constexpr auto bAcceptPartialPaths = 0x95; // bool
		constexpr auto bAllowStrafing = 0x96; // bool
		constexpr auto bEnableBTAITasks = 0x97; // bool
		constexpr auto bAllowControllersAsEQSQuerier = 0x98; // bool
		constexpr auto bEnableDebuggerPlugin = 0x99; // bool
		constexpr auto bForgetStaleActors = 0x9a; // bool
		constexpr auto bAddBlackboardSelfKey = 0x9b; // bool
		constexpr auto DefaultSightCollisionChannel = 0x9c; // ECollisionChannel
		constexpr auto BehaviorTreeManager = 0xa0; // UBehaviorTreeManager*
		constexpr auto EnvironmentQueryManager = 0xa8; // UEnvQueryManager*
		constexpr auto PerceptionSystem = 0xb0; // UAIPerceptionSystem*
		constexpr auto AllProxyObjects = 0xb8; // TArray<UAIAsyncTaskBlueprintProxy*>
		constexpr auto HotSpotManager = 0xc8; // UAIHotSpotManager*
		constexpr auto NavLocalGrids = 0xd0; // UNavLocalGridManager*
	}

	namespace n_UMaterialExpressionLightmassReplace {
		constexpr auto Realtime = 0x40; // FExpressionInput
		constexpr auto Lightmass = 0x54; // FExpressionInput
	}

	namespace n_UDatasmithStaticMeshComponentTemplate {
		constexpr auto StaticMesh = 0x30; // UStaticMesh*
		constexpr auto OverrideMaterials = 0x38; // TArray<UMaterialInterface*>
	}

	namespace n_Arecoveryitem_medikit_sterilizedrag_C {
		constexpr auto Timer = 0x420; // float
	}

	namespace n_ASFPSRecoveryItem {
		constexpr auto Health = 0x3f0; // float [0x2]
		constexpr auto Food = 0x3f8; // float [0x2]
		constexpr auto Water = 0x400; // float [0x2]
		constexpr auto bZeroSlowFoodAndWater = 0x408; // bool
	}

	namespace n_ULandscapeGrassType {
		constexpr auto GrassVarieties = 0x28; // TArray<FGrassVariety>
		constexpr auto bEnableDensityScaling = 0x38; // char : 1
		constexpr auto GrassMesh = 0x40; // UStaticMesh*
		constexpr auto GrassDensity = 0x48; // float
		constexpr auto PlacementJitter = 0x4c; // float
		constexpr auto StartCullDistance = 0x50; // int32_t
		constexpr auto EndCullDistance = 0x54; // int32_t
		constexpr auto RandomRotation = 0x58; // bool
		constexpr auto AlignToSurface = 0x59; // bool
	}

	namespace n_UAnimNotifyState_Trail {
		constexpr auto PSTemplate = 0x30; // UParticleSystem*
		constexpr auto FirstSocketName = 0x38; // FName
		constexpr auto SecondSocketName = 0x40; // FName
		constexpr auto WidthScaleMode = 0x48; // ETrailWidthMode
		constexpr auto WidthScaleCurve = 0x4c; // FName
		constexpr auto bRecycleSpawnedSystems = 0x54; // char : 1
	}

	namespace n_URig {
		constexpr auto TransformBases = 0x30; // TArray<FTransformBase>
		constexpr auto Nodes = 0x40; // TArray<FNode>
	}

	namespace n_UMaterialExpressionTextureProperty {
		constexpr auto TextureObject = 0x40; // FExpressionInput
		constexpr auto Property = 0x54; // EMaterialExposedTextureProperty
	}

	namespace n_AProceduralFoliageVolume {
		constexpr auto ProceduralComponent = 0x258; // UProceduralFoliageComponent*
	}

	namespace n_UCompositionGraphCaptureProtocol {
		constexpr auto IncludeRenderPasses = 0x58; // FCompositionGraphCapturePasses
		constexpr auto bCaptureFramesInHDR = 0x68; // bool
		constexpr auto HDRCompressionQuality = 0x6c; // int32_t
		constexpr auto CaptureGamut = 0x70; // EHDRCaptureGamut
		constexpr auto PostProcessingMaterial = 0x78; // FSoftObjectPath
		constexpr auto bDisableScreenPercentage = 0x90; // bool
		constexpr auto PostProcessingMaterialPtr = 0x98; // UMaterialInterface*
	}

	namespace n_UBlendSpace1D {
		constexpr auto bScaleAnimation = 0x148; // bool
	}

	namespace n_UNoiseField {
		constexpr auto MinRange = 0xb0; // float
		constexpr auto MaxRange = 0xb4; // float
		constexpr auto Transform = 0xc0; // FTransform
	}

	namespace n_UInterpToMovementComponent {
		constexpr auto Duration = 0xf0; // float
		constexpr auto bPauseOnImpact = 0xf4; // char : 1
		constexpr auto bSweep = 0xf8; // bool
		constexpr auto TeleportType = 0xf9; // ETeleportType
		constexpr auto BehaviourType = 0xfa; // EInterpToBehaviourType
		constexpr auto bCheckIfStillInWorld = 0xfb; // bool
		constexpr auto bForceSubStepping = 0xfc; // char : 1
		constexpr auto OnInterpToReverse = 0x100; // FMulticastInlineDelegate
		constexpr auto OnInterpToStop = 0x110; // FMulticastInlineDelegate
		constexpr auto OnWaitBeginDelegate = 0x120; // FMulticastInlineDelegate
		constexpr auto OnWaitEndDelegate = 0x130; // FMulticastInlineDelegate
		constexpr auto OnResetDelegate = 0x140; // FMulticastInlineDelegate
		constexpr auto MaxSimulationTimeStep = 0x150; // float
		constexpr auto MaxSimulationIterations = 0x154; // int32_t
		constexpr auto ControlPoints = 0x158; // TArray<FInterpControlPoint>
	}

	namespace n_ASFPSLootSpawner {
		constexpr auto Item = 0x248; // ASFPSBaseItem*
		constexpr auto ItemSecondary = 0x250; // ASFPSBaseItem*
		constexpr auto ItemClass = 0x258; // ASFPSBaseItem*
		constexpr auto ItemClassSecondary = 0x268; // ASFPSBaseItem*
		constexpr auto ItemSet = 0x288; // FSFPSItemSetStruct
	}

	namespace n_UWaveScalar {
		constexpr auto Magnitude = 0xb0; // float
		constexpr auto Position = 0xb4; // FVector
		constexpr auto Wavelength = 0xc0; // float
		constexpr auto Period = 0xc4; // float
		constexpr auto Function = 0xc8; // EWaveFunctionType
		constexpr auto Falloff = 0xc9; // EFieldFalloffType
	}

	namespace n_UWorldComposition {
		constexpr auto TilesStreaming = 0x48; // TArray<ULevelStreaming*>
		constexpr auto TilesStreamingTimeThreshold = 0x58; // double
		constexpr auto bLoadAllTilesDuringCinematic = 0x60; // bool
		constexpr auto bRebaseOriginIn3DSpace = 0x61; // bool
		constexpr auto RebaseOriginDistance = 0x64; // float
	}

	namespace n_UInterpTrackInstVisibility {
		constexpr auto Action = 0x28; // EVisibilityTrackAction
		constexpr auto LastUpdatePosition = 0x2c; // float
	}

	namespace n_UNavLinkCustomComponent {
		constexpr auto NavLinkUserId = 0xe8; // uint32_t
		constexpr auto EnabledAreaClass = 0xf0; // UNavArea*
		constexpr auto DisabledAreaClass = 0xf8; // UNavArea*
		constexpr auto SupportedAgents = 0x100; // FNavAgentSelector
		constexpr auto LinkRelativeStart = 0x104; // FVector
		constexpr auto LinkRelativeEnd = 0x110; // FVector
		constexpr auto LinkDirection = 0x11c; // ENavLinkDirection
		constexpr auto bLinkEnabled = 0x120; // char : 1
		constexpr auto bNotifyWhenEnabled = 0x120; // char : 1
		constexpr auto bNotifyWhenDisabled = 0x120; // char : 1
		constexpr auto bCreateBoxObstacle = 0x120; // char : 1
		constexpr auto ObstacleOffset = 0x124; // FVector
		constexpr auto ObstacleExtent = 0x130; // FVector
		constexpr auto ObstacleAreaClass = 0x140; // UNavArea*
		constexpr auto BroadcastRadius = 0x148; // float
		constexpr auto BroadcastInterval = 0x14c; // float
		constexpr auto BroadcastChannel = 0x150; // ECollisionChannel
	}

	namespace n_ABox_mil_01_C {
		constexpr auto Box_military_cap_01 = 0x220; // UStaticMeshComponent*
		constexpr auto Box_military_01 = 0x228; // UStaticMeshComponent*
	}

	namespace n_USceneCaptureComponent {
		constexpr auto PrimitiveRenderMode = 0x1f8; // ESceneCapturePrimitiveRenderMode
		constexpr auto CaptureSource = 0x1f9; // ESceneCaptureSource
		constexpr auto bCaptureEveryFrame = 0x1fa; // char : 1
		constexpr auto bCaptureOnMovement = 0x1fa; // char : 1
		constexpr auto bAlwaysPersistRenderingState = 0x1fb; // bool
		constexpr auto HiddenComponents = 0x200; // TArray<TWeakObjectPtr<UPrimitiveComponent>>
		constexpr auto HiddenActors = 0x210; // TArray<AActor*>
		constexpr auto ShowOnlyComponents = 0x220; // TArray<TWeakObjectPtr<UPrimitiveComponent>>
		constexpr auto ShowOnlyActors = 0x230; // TArray<AActor*>
		constexpr auto LODDistanceFactor = 0x240; // float
		constexpr auto MaxViewDistanceOverride = 0x244; // float
		constexpr auto CaptureSortPriority = 0x248; // int32_t
		constexpr auto bUseRayTracingIfEnabled = 0x24c; // bool
		constexpr auto ShowFlagSettings = 0x250; // TArray<FEngineShowFlagsSetting>
		constexpr auto ProfilingEventName = 0x290; // FString
	}

	namespace n_UPhysicsThrusterComponent {
		constexpr auto ThrustStrength = 0x1f8; // float
	}

	namespace n_Aweapon_firearms_smg_scorpion_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7f0; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f8; // UStaticMeshComponent*
	}

	namespace n_UBlendSpaceBase {
		constexpr auto bRotationBlendInMeshSpace = 0x88; // bool
		constexpr auto AnimLength = 0x8c; // float
		constexpr auto InterpolationParam = 0x90; // FInterpolationParameter [0x3]
		constexpr auto TargetWeightInterpolationSpeedPerSec = 0xa8; // float
		constexpr auto NotifyTriggerMode = 0xac; // ENotifyTriggerMode
		constexpr auto PerBoneBlend = 0xb0; // TArray<FPerBoneInterpolation>
		constexpr auto SampleIndexWithMarkers = 0xc0; // int32_t
		constexpr auto SampleData = 0xc8; // TArray<FBlendSample>
		constexpr auto GridSamples = 0xd8; // TArray<FEditorElement>
		constexpr auto BlendParameters = 0xe8; // FBlendParameter [0x3]
	}

	namespace n_UAmbisonicsEncodingSettings {
		constexpr auto AmbisonicsOrder = 0x28; // int32_t
	}

	namespace n_UMaterialExpressionConstant {
		constexpr auto R = 0x40; // float
	}

	namespace n_AGeometryCollectionActor {
		constexpr auto GeometryCollectionComponent = 0x220; // UGeometryCollectionComponent*
		constexpr auto GeometryCollectionDebugDrawComponent = 0x228; // UGeometryCollectionDebugDrawComponent*
	}

	namespace n_UBTTask_PlayAnimation {
		constexpr auto AnimationToPlay = 0x70; // UAnimationAsset*
		constexpr auto bLooping = 0x78; // char : 1
		constexpr auto bNonBlocking = 0x78; // char : 1
		constexpr auto MyOwnerComp = 0x80; // UBehaviorTreeComponent*
		constexpr auto CachedSkelMesh = 0x88; // USkeletalMeshComponent*
	}

	namespace n_UComponentDelegateBinding {
		constexpr auto ComponentDelegateBindings = 0x28; // TArray<FBlueprintComponentDelegateBinding>
	}

	namespace n_UMaterialExpressionLandscapeLayerWeight {
		constexpr auto Base = 0x40; // FExpressionInput
		constexpr auto Layer = 0x54; // FExpressionInput
		constexpr auto ParameterName = 0x68; // FName
		constexpr auto PreviewWeight = 0x70; // float
		constexpr auto ConstBase = 0x74; // FVector
		constexpr auto ExpressionGUID = 0x80; // FGuid
	}

	namespace n_Aweapmf_DTK_9x19_01_C {
		constexpr auto Muzzle = 0x390; // USceneComponent*
	}

	namespace n_UBTDecorator_Blackboard {
		constexpr auto IntValue = 0x90; // int32_t
		constexpr auto FloatValue = 0x94; // float
		constexpr auto StringValue = 0x98; // FString
		constexpr auto CachedDescription = 0xa8; // FString
		constexpr auto OperationType = 0xb8; // char
		constexpr auto NotifyObserver = 0xb9; // EBTBlackboardRestart
	}

	namespace n_Aweapon_firearms_gun_c1911_C {
		constexpr auto SFPSACWeaponMFInventory = 0x7e0; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x7e8; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f0; // UStaticMeshComponent*
	}

	namespace n_USoundNodeWaveParam {
		constexpr auto WaveParameterName = 0x48; // FName
	}

	namespace n_UMovieSceneBindingOverrides {
		constexpr auto BindingData = 0x28; // TArray<FMovieSceneBindingOverrideData>
	}

	namespace n_UARFaceGeometry {
		constexpr auto LookAtTarget = 0xf8; // FVector
		constexpr auto bIsTracked = 0x104; // bool
		constexpr auto BlendShapes = 0x108; // TMap<EARFaceBlendShape, float>
		constexpr auto LeftEyeTransform = 0x190; // FTransform
		constexpr auto RightEyeTransform = 0x1c0; // FTransform
	}

	namespace n_USFPSACWeaponMFInventory {
		constexpr auto AvailableMFTypes = 0xb0; // TArray<ESFPSWeaponMFType>
		constexpr auto AvailableMFItems = 0xc0; // TArray<ASFPSBaseWeaponMF*>
		constexpr auto FInventory = 0xd0; // TArray<AActor*>
	}

	namespace n_APostProcessVolume {
		constexpr auto Settings = 0x260; // FPostProcessSettings
		constexpr auto Priority = 0x7c0; // float
		constexpr auto BlendRadius = 0x7c4; // float
		constexpr auto BlendWeight = 0x7c8; // float
		constexpr auto bEnabled = 0x7cc; // char : 1
		constexpr auto bUnbound = 0x7cc; // char : 1
	}

	namespace n_UInterpGroup {
		constexpr auto InterpTracks = 0x30; // TArray<UInterpTrack*>
		constexpr auto GroupName = 0x40; // FName
		constexpr auto GroupColor = 0x48; // FColor
		constexpr auto bCollapsed = 0x4c; // char : 1
		constexpr auto bVisible = 0x4c; // char : 1
		constexpr auto bIsFolder = 0x4c; // char : 1
		constexpr auto bIsParented = 0x4c; // char : 1
		constexpr auto bIsSelected = 0x4c; // char : 1
	}

	namespace n_AGameMode {
		constexpr auto MatchState = 0x2c0; // FName
		constexpr auto bDelayedStart = 0x2c8; // char : 1
		constexpr auto NumSpectators = 0x2cc; // int32_t
		constexpr auto NumPlayers = 0x2d0; // int32_t
		constexpr auto NumBots = 0x2d4; // int32_t
		constexpr auto MinRespawnDelay = 0x2d8; // float
		constexpr auto NumTravellingPlayers = 0x2dc; // int32_t
		constexpr auto EngineMessageClass = 0x2e0; // ULocalMessage*
		constexpr auto InactivePlayerArray = 0x2e8; // TArray<APlayerState*>
		constexpr auto InactivePlayerStateLifeSpan = 0x2f8; // float
		constexpr auto MaxInactivePlayers = 0x2fc; // int32_t
		constexpr auto bHandleDedicatedServerReplays = 0x300; // bool
	}

	namespace n_UMaterialExpressionNamedRerouteUsage {
		constexpr auto Declaration = 0x40; // UMaterialExpressionNamedRerouteDeclaration*
		constexpr auto DeclarationGuid = 0x48; // FGuid
	}

	namespace n_AOnlineBeaconHost {
		constexpr auto ListenPort = 0x250; // int32_t
		constexpr auto ClientActors = 0x258; // TArray<AOnlineBeaconClient*>
	}

	namespace n_UClothLODDataCommon_Legacy {
		constexpr auto PhysicalMeshData = 0x28; // UClothPhysicalMeshDataBase_Legacy*
		constexpr auto ClothPhysicalMeshData = 0x30; // FClothPhysicalMeshData
		constexpr auto CollisionData = 0x128; // FClothCollisionData
	}

	namespace n_UInteractiveGizmo {
		constexpr auto InputBehaviors = 0x30; // UInputBehaviorSet*
	}

	namespace n_UPhysicalMaterial { // : UObject
		constexpr auto Friction = 0x28; // float
		constexpr auto StaticFriction = 0x2c; // float
		constexpr auto FrictionCombineMode = 0x30; // EFrictionCombineMode
		constexpr auto bOverrideFrictionCombineMode = 0x31; // bool
		constexpr auto Restitution = 0x34; // float
		constexpr auto RestitutionCombineMode = 0x38; // EFrictionCombineMode
		constexpr auto bOverrideRestitutionCombineMode = 0x39; // bool
		constexpr auto Density = 0x3c; // float
		constexpr auto SleepLinearVelocityThreshold = 0x40; // float
		constexpr auto SleepAngularVelocityThreshold = 0x44; // float
		constexpr auto SleepCounterThreshold = 0x48; // int32_t
		constexpr auto RaiseMassToPower = 0x4c; // float
		constexpr auto DestructibleDamageThresholdScale = 0x50; // float
		constexpr auto PhysicalMaterialProperty = 0x58; // UPhysicalMaterialPropertyBase*
		constexpr auto SurfaceType = 0x60; // EPhysicalSurface
	}

	namespace n_UMovieSceneGeometryCacheTrack {
		constexpr auto AnimationSections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_UInterpTrackToggle {
		constexpr auto ToggleTrack = 0x70; // TArray<FToggleTrackKey>
		constexpr auto bActivateSystemEachUpdate = 0x80; // char : 1
		constexpr auto bActivateWithJustAttachedFlag = 0x80; // char : 1
		constexpr auto bFireEventsWhenForwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenBackwards = 0x80; // char : 1
		constexpr auto bFireEventsWhenJumpingForwards = 0x80; // char : 1
	}

	namespace n_USubmixEffectSubmixEQPreset {
		constexpr auto Settings = 0xa0; // FSubmixEffectSubmixEQSettings
	}

	namespace n_UMovieScene3DPathSection {
		constexpr auto TimingCurve = 0x110; // FMovieSceneFloatChannel
		constexpr auto FrontAxisEnum = 0x1b0; // MovieScene3DPathSection_Axis
		constexpr auto UpAxisEnum = 0x1b1; // MovieScene3DPathSection_Axis
		constexpr auto bFollow = 0x1b4; // char : 1
		constexpr auto bReverse = 0x1b4; // char : 1
		constexpr auto bForceUpright = 0x1b4; // char : 1
	}

	namespace n_Adevice_lighter_01_C {
		constexpr auto Flame = 0x4a0; // UStaticMeshComponent*
		constexpr auto PointLight = 0x4a8; // UPointLightComponent*
	}

	namespace n_ALevelBounds {
		constexpr auto BoxComponent = 0x220; // UBoxComponent*
		constexpr auto bAutoUpdateBounds = 0x228; // bool
	}

	namespace n_UAudioSettings {
		constexpr auto DefaultSoundClassName = 0x38; // FSoftObjectPath
		constexpr auto DefaultMediaSoundClassName = 0x50; // FSoftObjectPath
		constexpr auto DefaultSoundConcurrencyName = 0x68; // FSoftObjectPath
		constexpr auto DefaultBaseSoundMix = 0x80; // FSoftObjectPath
		constexpr auto VoiPSoundClass = 0x98; // FSoftObjectPath
		constexpr auto MasterSubmix = 0xb0; // FSoftObjectPath
		constexpr auto BaseDefaultSubmix = 0xc8; // FSoftObjectPath
		constexpr auto ReverbSubmix = 0xe0; // FSoftObjectPath
		constexpr auto EQSubmix = 0xf8; // FSoftObjectPath
		constexpr auto VoiPSampleRate = 0x110; // EVoiceSampleRate
		constexpr auto DefaultReverbSendLevel = 0x114; // float
		constexpr auto MaximumConcurrentStreams = 0x118; // int32_t
		constexpr auto GlobalMinPitchScale = 0x11c; // float
		constexpr auto GlobalMaxPitchScale = 0x120; // float
		constexpr auto QualityLevels = 0x128; // TArray<FAudioQualitySettings>
		constexpr auto bAllowPlayWhenSilent = 0x138; // char : 1
		constexpr auto bDisableMasterEQ = 0x138; // char : 1
		constexpr auto bAllowCenterChannel3DPanning = 0x138; // char : 1
		constexpr auto NumStoppingSources = 0x13c; // uint32_t
		constexpr auto PanningMethod = 0x140; // EPanningMethod
		constexpr auto MonoChannelUpmixMethod = 0x141; // EMonoChannelUpmixMethod
		constexpr auto DialogueFilenameFormat = 0x148; // FString
		constexpr auto DebugSounds = 0x158; // TArray<FSoundDebugEntry>
		constexpr auto DefaultAudioBuses = 0x168; // TArray<FDefaultAudioBusSettings>
		constexpr auto DefaultSoundClass = 0x178; // USoundClass*
		constexpr auto DefaultMediaSoundClass = 0x180; // USoundClass*
		constexpr auto DefaultSoundConcurrency = 0x188; // USoundConcurrency*
	}

	namespace n_UMaterialExpressionFunctionOutput {
		constexpr auto OutputName = 0x40; // FName
		constexpr auto Description = 0x48; // FString
		constexpr auto SortPriority = 0x58; // int32_t
		constexpr auto A = 0x5c; // FExpressionInput
		constexpr auto bLastPreviewed = 0x70; // char : 1
		constexpr auto ID = 0x74; // FGuid
	}

	namespace n_USynthSound {
		constexpr auto OwningSynthComponent = 0x3c0; // USynthComponent*
	}

	namespace n_UNavigationQueryFilter {
		constexpr auto Areas = 0x28; // TArray<FNavigationFilterArea>
		constexpr auto IncludeFlags = 0x38; // FNavigationFilterFlags
		constexpr auto ExcludeFlags = 0x3c; // FNavigationFilterFlags
	}

	namespace n_ARecastNavMesh {
		constexpr auto bDrawTriangleEdges = 0x428; // char : 1
		constexpr auto bDrawPolyEdges = 0x428; // char : 1
		constexpr auto bDrawFilledPolys = 0x428; // char : 1
		constexpr auto bDrawNavMeshEdges = 0x428; // char : 1
		constexpr auto bDrawTileBounds = 0x428; // char : 1
		constexpr auto bDrawPathCollidingGeometry = 0x428; // char : 1
		constexpr auto bDrawTileLabels = 0x428; // char : 1
		constexpr auto bDrawPolygonLabels = 0x428; // char : 1
		constexpr auto bDrawDefaultPolygonCost = 0x429; // char : 1
		constexpr auto bDrawPolygonFlags = 0x429; // char : 1
		constexpr auto bDrawLabelsOnPathNodes = 0x429; // char : 1
		constexpr auto bDrawNavLinks = 0x429; // char : 1
		constexpr auto bDrawFailedNavLinks = 0x429; // char : 1
		constexpr auto bDrawClusters = 0x429; // char : 1
		constexpr auto bDrawOctree = 0x429; // char : 1
		constexpr auto bDrawOctreeDetails = 0x429; // char : 1
		constexpr auto bDrawMarkedForbiddenPolys = 0x42a; // char : 1
		constexpr auto bDistinctlyDrawTilesBeingBuilt = 0x42a; // char : 1
		constexpr auto DrawOffset = 0x42c; // float
		constexpr auto bFixedTilePoolSize = 0x430; // char : 1
		constexpr auto TilePoolSize = 0x434; // int32_t
		constexpr auto TileSizeUU = 0x438; // float
		constexpr auto CellSize = 0x43c; // float
		constexpr auto CellHeight = 0x440; // float
		constexpr auto AgentRadius = 0x444; // float
		constexpr auto AgentHeight = 0x448; // float
		constexpr auto AgentMaxSlope = 0x44c; // float
		constexpr auto AgentMaxStepHeight = 0x450; // float
		constexpr auto MinRegionArea = 0x454; // float
		constexpr auto MergeRegionSize = 0x458; // float
		constexpr auto MaxSimplificationError = 0x45c; // float
		constexpr auto MaxSimultaneousTileGenerationJobsCount = 0x460; // int32_t
		constexpr auto TileNumberHardLimit = 0x464; // int32_t
		constexpr auto PolyRefTileBits = 0x468; // int32_t
		constexpr auto PolyRefNavPolyBits = 0x46c; // int32_t
		constexpr auto PolyRefSaltBits = 0x470; // int32_t
		constexpr auto NavMeshOriginOffset = 0x474; // FVector
		constexpr auto DefaultDrawDistance = 0x480; // float
		constexpr auto DefaultMaxSearchNodes = 0x484; // float
		constexpr auto DefaultMaxHierarchicalSearchNodes = 0x488; // float
		constexpr auto RegionPartitioning = 0x48c; // ERecastPartitioning
		constexpr auto LayerPartitioning = 0x48d; // ERecastPartitioning
		constexpr auto RegionChunkSplits = 0x490; // int32_t
		constexpr auto LayerChunkSplits = 0x494; // int32_t
		constexpr auto bSortNavigationAreasByCost = 0x498; // char : 1
		constexpr auto bPerformVoxelFiltering = 0x498; // char : 1
		constexpr auto bMarkLowHeightAreas = 0x498; // char : 1
		constexpr auto bUseExtraTopCellWhenMarkingAreas = 0x498; // char : 1
		constexpr auto bFilterLowSpanSequences = 0x498; // char : 1
		constexpr auto bFilterLowSpanFromTileCache = 0x498; // char : 1
		constexpr auto bDoFullyAsyncNavDataGathering = 0x498; // char : 1
		constexpr auto bUseBetterOffsetsFromCorners = 0x498; // char : 1
		constexpr auto bStoreEmptyTileLayers = 0x499; // char : 1
		constexpr auto bUseVirtualFilters = 0x499; // char : 1
		constexpr auto bAllowNavLinkAsPathEnd = 0x499; // char : 1
		constexpr auto bUseVoxelCache = 0x499; // char : 1
		constexpr auto TileSetUpdateInterval = 0x49c; // float
		constexpr auto HeuristicScale = 0x4a0; // float
		constexpr auto VerticalDeviationFromGroundCompensation = 0x4a4; // float
	}

	namespace n_UInterpTrackDirector {
		constexpr auto CutTrack = 0x70; // TArray<FDirectorTrackCut>
		constexpr auto bSimulateCameraCutsOnClients = 0x80; // char : 1
	}

	namespace n_UParticleModuleCollisionGPU {
		constexpr auto Resilience = 0x30; // FRawDistributionFloat
		constexpr auto ResilienceScaleOverLife = 0x60; // FRawDistributionFloat
		constexpr auto Friction = 0x90; // float
		constexpr auto RandomSpread = 0x94; // float
		constexpr auto RandomDistribution = 0x98; // float
		constexpr auto RadiusScale = 0x9c; // float
		constexpr auto RadiusBias = 0xa0; // float
		constexpr auto Response = 0xa4; // EParticleCollisionResponse
		constexpr auto CollisionMode = 0xa5; // EParticleCollisionMode
	}

	namespace n_UGeometryCollection {
		constexpr auto EnableClustering = 0x30; // bool
		constexpr auto ClusterGroupIndex = 0x34; // int32_t
		constexpr auto MaxClusterLevel = 0x38; // int32_t
		constexpr auto DamageThreshold = 0x40; // TArray<float>
		constexpr auto ClusterConnectionType = 0x50; // EClusterConnectionTypeEnum
		constexpr auto GeometrySource = 0x58; // TArray<FGeometryCollectionSource>
		constexpr auto Materials = 0x68; // TArray<UMaterialInterface*>
		constexpr auto CollisionType = 0x78; // ECollisionTypeEnum
		constexpr auto ImplicitType = 0x79; // EImplicitTypeEnum
		constexpr auto MinLevelSetResolution = 0x7c; // int32_t
		constexpr auto MaxLevelSetResolution = 0x80; // int32_t
		constexpr auto MinClusterLevelSetResolution = 0x84; // int32_t
		constexpr auto MaxClusterLevelSetResolution = 0x88; // int32_t
		constexpr auto CollisionObjectReductionPercentage = 0x8c; // float
		constexpr auto bMassAsDensity = 0x90; // bool
		constexpr auto Mass = 0x94; // float
		constexpr auto MinimumMassClamp = 0x98; // float
		constexpr auto CollisionParticlesFraction = 0x9c; // float
		constexpr auto MaximumCollisionParticles = 0xa0; // int32_t
		constexpr auto SizeSpecificData = 0xa8; // TArray<FGeometryCollectionSizeSpecificData>
		constexpr auto EnableRemovePiecesOnFracture = 0xb8; // bool
		constexpr auto RemoveOnFractureMaterials = 0xc0; // TArray<UMaterialInterface*>
		constexpr auto PersistentGuid = 0xd0; // FGuid
		constexpr auto StateGuid = 0xe0; // FGuid
		constexpr auto BoneSelectedMaterialIndex = 0xf0; // int32_t
	}

	namespace n_UVaRestSettings {
		constexpr auto bExtendedLog = 0x28; // bool
	}

	namespace n_UMaterialExpressionSkyAtmosphereLightDirection {
		constexpr auto LightIndex = 0x40; // int32_t
	}

	namespace n_AGameStateBase {
		constexpr auto GameModeClass = 0x220; // AGameModeBase*
		constexpr auto AuthorityGameMode = 0x228; // AGameModeBase*
		constexpr auto SpectatorClass = 0x230; // ASpectatorPawn*
		constexpr auto PlayerArray = 0x238; // TArray<APlayerState*>
		constexpr auto bReplicatedHasBegunPlay = 0x248; // bool
		constexpr auto ReplicatedWorldTimeSeconds = 0x24c; // float
		constexpr auto ServerWorldTimeSecondsDelta = 0x250; // float
		constexpr auto ServerWorldTimeSecondsUpdateFrequency = 0x254; // float
	}

	namespace n_ASphereReflectionCapture {
		constexpr auto DrawCaptureRadius = 0x228; // UDrawSphereComponent*
	}

	namespace n_UfrmAdminPanelStartKitItem_C {
		constexpr auto btnAction0 = 0x310; // UButton*
	}

	namespace n_UMagicLeapARPinSaveGame {
		constexpr auto PinnedID = 0x28; // FGuid
		constexpr auto ComponentWorldTransform = 0x40; // FTransform
		constexpr auto PinTransform = 0x70; // FTransform
		constexpr auto bShouldPinActor = 0xa0; // bool
	}

	namespace n_UPaperTileMapComponent {
		constexpr auto MapWidth = 0x478; // int32_t
		constexpr auto MapHeight = 0x47c; // int32_t
		constexpr auto TileWidth = 0x480; // int32_t
		constexpr auto TileHeight = 0x484; // int32_t
		constexpr auto DefaultLayerTileSet = 0x488; // UPaperTileSet*
		constexpr auto Material = 0x490; // UMaterialInterface*
		constexpr auto TileLayers = 0x498; // TArray<UPaperTileLayer*>
		constexpr auto TileMapColor = 0x4a8; // FLinearColor
		constexpr auto UseSingleLayerIndex = 0x4b8; // int32_t
		constexpr auto bUseSingleLayer = 0x4bc; // bool
		constexpr auto TileMap = 0x4c0; // UPaperTileMap*
	}

	namespace n_UMaterialExpressionNoise {
		constexpr auto Position = 0x40; // FExpressionInput
		constexpr auto FilterWidth = 0x54; // FExpressionInput
		constexpr auto Scale = 0x68; // float
		constexpr auto Quality = 0x6c; // int32_t
		constexpr auto NoiseFunction = 0x70; // ENoiseFunction
		constexpr auto bTurbulence = 0x74; // char : 1
		constexpr auto Levels = 0x78; // int32_t
		constexpr auto OutputMin = 0x7c; // float
		constexpr auto OutputMax = 0x80; // float
		constexpr auto LevelScale = 0x84; // float
		constexpr auto bTiling = 0x88; // char : 1
		constexpr auto RepeatSize = 0x8c; // uint32_t
	}

	namespace n_USFPSUseObjectHandler {
		constexpr auto FUseObjectForm = 0x28; // UUserWidget*
	}

	namespace n_UDistributionVectorUniformCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveTwoVectors
		constexpr auto bLockAxes1 = 0x50; // char : 1
		constexpr auto bLockAxes2 = 0x50; // char : 1
		constexpr auto LockedAxes = 0x54; // EDistributionVectorLockFlags [0x2]
		constexpr auto MirrorFlags = 0x56; // EDistributionVectorMirrorFlags [0x3]
		constexpr auto bUseExtremes = 0x5c; // char : 1
	}

	namespace n_ULevelSequenceProjectSettings {
		constexpr auto bDefaultLockEngineToDisplayRate = 0x38; // bool
		constexpr auto DefaultDisplayRate = 0x40; // FString
		constexpr auto DefaultTickResolution = 0x50; // FString
		constexpr auto DefaultClockSource = 0x60; // EUpdateClockSource
	}

	namespace n_UMovieSceneSequencePlayer {
		constexpr auto OnPlay = 0x260; // FMulticastInlineDelegate
		constexpr auto OnPlayReverse = 0x270; // FMulticastInlineDelegate
		constexpr auto OnStop = 0x280; // FMulticastInlineDelegate
		constexpr auto OnPause = 0x290; // FMulticastInlineDelegate
		constexpr auto OnFinished = 0x2a0; // FMulticastInlineDelegate
		constexpr auto Status = 0x2b0; // EMovieScenePlayerStatus
		constexpr auto bReversePlayback = 0x2b4; // char : 1
		constexpr auto Sequence = 0x2b8; // UMovieSceneSequence*
		constexpr auto StartTime = 0x2c0; // FFrameNumber
		constexpr auto DurationFrames = 0x2c4; // int32_t
		constexpr auto DurationSubFrames = 0x2c8; // float
		constexpr auto CurrentNumLoops = 0x2cc; // int32_t
		constexpr auto PlaybackSettings = 0x2d0; // FMovieSceneSequencePlaybackSettings
		constexpr auto RootTemplateInstance = 0x2e8; // FMovieSceneRootEvaluationTemplateInstance
		constexpr auto NetSyncProps = 0x438; // FMovieSceneSequenceReplProperties
		constexpr auto PlaybackClient = 0x448; // TScriptInterface<IMovieScenePlaybackClient>
		constexpr auto TickManager = 0x458; // UMovieSceneSequenceTickManager*
	}

	namespace n_AGeometryCollectionDebugDrawActor {
		constexpr auto WarningMessage = 0x220; // FGeometryCollectionDebugDrawWarningMessage
		constexpr auto SelectedRigidBody = 0x228; // FGeometryCollectionDebugDrawActorSelectedRigidBody
		constexpr auto bDebugDrawWholeCollection = 0x240; // bool
		constexpr auto bDebugDrawHierarchy = 0x241; // bool
		constexpr auto bDebugDrawClustering = 0x242; // bool
		constexpr auto HideGeometry = 0x243; // EGeometryCollectionDebugDrawActorHideGeometry
		constexpr auto bShowRigidBodyId = 0x244; // bool
		constexpr auto bShowRigidBodyCollision = 0x245; // bool
		constexpr auto bCollisionAtOrigin = 0x246; // bool
		constexpr auto bShowRigidBodyTransform = 0x247; // bool
		constexpr auto bShowRigidBodyInertia = 0x248; // bool
		constexpr auto bShowRigidBodyVelocity = 0x249; // bool
		constexpr auto bShowRigidBodyForce = 0x24a; // bool
		constexpr auto bShowRigidBodyInfos = 0x24b; // bool
		constexpr auto bShowTransformIndex = 0x24c; // bool
		constexpr auto bShowTransform = 0x24d; // bool
		constexpr auto bShowParent = 0x24e; // bool
		constexpr auto bShowLevel = 0x24f; // bool
		constexpr auto bShowConnectivityEdges = 0x250; // bool
		constexpr auto bShowGeometryIndex = 0x251; // bool
		constexpr auto bShowGeometryTransform = 0x252; // bool
		constexpr auto bShowBoundingBox = 0x253; // bool
		constexpr auto bShowFaces = 0x254; // bool
		constexpr auto bShowFaceIndices = 0x255; // bool
		constexpr auto bShowFaceNormals = 0x256; // bool
		constexpr auto bShowSingleFace = 0x257; // bool
		constexpr auto SingleFaceIndex = 0x258; // int32_t
		constexpr auto bShowVertices = 0x25c; // bool
		constexpr auto bShowVertexIndices = 0x25d; // bool
		constexpr auto bShowVertexNormals = 0x25e; // bool
		constexpr auto bUseActiveVisualization = 0x25f; // bool
		constexpr auto PointThickness = 0x260; // float
		constexpr auto LineThickness = 0x264; // float
		constexpr auto bTextShadow = 0x268; // bool
		constexpr auto TextScale = 0x26c; // float
		constexpr auto NormalScale = 0x270; // float
		constexpr auto AxisScale = 0x274; // float
		constexpr auto ArrowScale = 0x278; // float
		constexpr auto RigidBodyIdColor = 0x27c; // FColor
		constexpr auto RigidBodyTransformScale = 0x280; // float
		constexpr auto RigidBodyCollisionColor = 0x284; // FColor
		constexpr auto RigidBodyInertiaColor = 0x288; // FColor
		constexpr auto RigidBodyVelocityColor = 0x28c; // FColor
		constexpr auto RigidBodyForceColor = 0x290; // FColor
		constexpr auto RigidBodyInfoColor = 0x294; // FColor
		constexpr auto TransformIndexColor = 0x298; // FColor
		constexpr auto TransformScale = 0x29c; // float
		constexpr auto LevelColor = 0x2a0; // FColor
		constexpr auto ParentColor = 0x2a4; // FColor
		constexpr auto ConnectivityEdgeThickness = 0x2a8; // float
		constexpr auto GeometryIndexColor = 0x2ac; // FColor
		constexpr auto GeometryTransformScale = 0x2b0; // float
		constexpr auto BoundingBoxColor = 0x2b4; // FColor
		constexpr auto FaceColor = 0x2b8; // FColor
		constexpr auto FaceIndexColor = 0x2bc; // FColor
		constexpr auto FaceNormalColor = 0x2c0; // FColor
		constexpr auto SingleFaceColor = 0x2c4; // FColor
		constexpr auto VertexColor = 0x2c8; // FColor
		constexpr auto VertexIndexColor = 0x2cc; // FColor
		constexpr auto VertexNormalColor = 0x2d0; // FColor
		constexpr auto SpriteComponent = 0x2d8; // UBillboardComponent*
	}

	namespace n_USFPSACEncounter {
		constexpr auto Variants = 0x250; // TArray<FSFPSEncounterVariant>
		constexpr auto NoActivateRadius = 0x264; // float
		constexpr auto RespawnTimeMin = 0x268; // int32_t
		constexpr auto RespawnTimeMax = 0x26c; // int32_t
		constexpr auto WaitTime = 0x270; // int32_t
		constexpr auto Chance = 0x274; // int32_t
		constexpr auto bExclusive = 0x278; // bool
	}

	namespace n_APainCausingVolume {
		constexpr auto bPainCausing = 0x268; // char : 1
		constexpr auto DamagePerSec = 0x26c; // float
		constexpr auto DamageType = 0x270; // UDamageType*
		constexpr auto PainInterval = 0x278; // float
		constexpr auto bEntryPain = 0x27c; // char : 1
		constexpr auto BACKUP_bPainCausing = 0x27c; // char : 1
		constexpr auto DamageInstigator = 0x280; // AController*
	}

	namespace n_USFPSACSoundSystem {
		constexpr auto BreathAudioComponent = 0xb8; // UAudioComponent*
		constexpr auto HeartAudioComponent = 0xc0; // UAudioComponent*
		constexpr auto CraftAudioComp = 0xc8; // TWeakObjectPtr<UAudioComponent>
		constexpr auto MobTalkAudioComp = 0xd0; // UAudioComponent*
		constexpr auto NoiseAudioComponent = 0xd8; // UAudioComponent*
		constexpr auto TimerTalkDelHandle = 0xf8; // FTimerHandle
		constexpr auto bUnderwaterIsActive = 0x100; // bool
		constexpr auto bDebug = 0x102; // bool
		constexpr auto bDebugTrace = 0x103; // bool
		constexpr auto CharDieCue = 0x108; // USoundCue*
		constexpr auto CharBreathCue = 0x110; // USoundCue*
		constexpr auto CharHeartCue = 0x118; // USoundCue*
		constexpr auto CharacterRollCue = 0x120; // USoundCue*
		constexpr auto CharPainShout = 0x128; // USoundCue*
		constexpr auto NoiceCue = 0x130; // USoundCue*
		constexpr auto NoiseBreathCue = 0x138; // USoundCue*
		constexpr auto CharBackMovCue = 0x140; // USoundCue*
		constexpr auto WeaponPressedCue = 0x148; // USoundCue*
		constexpr auto bUseCertainVoice = 0x150; // bool
		constexpr auto STS_Voice = 0x158; // USFPSSoundTalkSet*
		constexpr auto VoiceList = 0x160; // USFPSVoiceList*
		constexpr auto VoiceNumber = 0x168; // int32_t
		constexpr auto FallHeight = 0x1a0; // float
		constexpr auto CharacterPM = 0x1a8; // USFPSPhysicalMaterial*
		constexpr auto SwimmingCue = 0x1c0; // USoundCue*
		constexpr auto SwimmingIdleParticle = 0x1c8; // UParticleSystem*
		constexpr auto SwimmingParticle = 0x1d0; // UParticleSystem*
		constexpr auto SwimmingFastParticle = 0x1d8; // UParticleSystem*
		constexpr auto UnderwaterStep = 0x1e0; // USoundCue*
		constexpr auto UnderwaterReverbEffect = 0x1e8; // UReverbEffect*
		constexpr auto InVehicleReverbEffect = 0x1f0; // UReverbEffect*
	}

	namespace n_UMaterialExpressionTextureCoordinate {
		constexpr auto CoordinateIndex = 0x40; // int32_t
		constexpr auto UTiling = 0x44; // float
		constexpr auto VTiling = 0x48; // float
		constexpr auto UnMirrorU = 0x4c; // char : 1
		constexpr auto UnMirrorV = 0x4c; // char : 1
	}

	namespace n_UBTService_BlackboardBase {
		constexpr auto BlackboardKey = 0x70; // FBlackboardKeySelector
	}

	namespace n_AStair_tower_wood_01_C {
		constexpr auto Step4 = 0x220; // UArrowComponent*
		constexpr auto Step8 = 0x228; // UArrowComponent*
		constexpr auto Step7 = 0x230; // UArrowComponent*
		constexpr auto Step6 = 0x238; // UArrowComponent*
		constexpr auto Step5 = 0x240; // UArrowComponent*
		constexpr auto TopPoint = 0x248; // UArrowComponent*
		constexpr auto BottomPoint = 0x250; // UArrowComponent*
		constexpr auto Mesh = 0x258; // UStaticMeshComponent*
		constexpr auto Step3 = 0x260; // UArrowComponent*
		constexpr auto Step2 = 0x268; // UArrowComponent*
		constexpr auto Step1 = 0x270; // UArrowComponent*
		constexpr auto Step0 = 0x278; // UArrowComponent*
		constexpr auto SFPSACStair = 0x280; // USFPSACStair*
		constexpr auto Overlap = 0x288; // UBoxComponent*
	}

	namespace n_UMovieSceneWidgetMaterialTrack {
		constexpr auto BrushPropertyNamePath = 0xa8; // TArray<FName>
		constexpr auto TrackName = 0xb8; // FName
	}

	namespace n_UParticleModuleRotation_Seeded {
		constexpr auto RandomSeedInfo = 0x60; // FParticleRandomSeedInfo
	}

	namespace n_UMaterialExpressionFrac {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPawnAction_Wait {
		constexpr auto TimeToWait = 0x90; // float
	}

	namespace n_UAIPerceptionComponent {
		constexpr auto SensesConfig = 0xb0; // TArray<UAISenseConfig*>
		constexpr auto DominantSense = 0xc0; // UAISense*
		constexpr auto AIOwner = 0xd8; // AAIController*
		constexpr auto OnPerceptionUpdated = 0x160; // FMulticastInlineDelegate
		constexpr auto OnTargetPerceptionUpdated = 0x170; // FMulticastInlineDelegate
		constexpr auto OnTargetPerceptionInfoUpdated = 0x180; // FMulticastInlineDelegate
	}

	namespace n_UDcxVehicleDriveRawInput {
		constexpr auto ClutchIndex = 0x40; // int32_t
		constexpr auto bGearUp = 0x44; // bool
		constexpr auto bGearDown = 0x45; // bool
	}

	namespace n_UMoviePlayerSettings {
		constexpr auto bWaitForMoviesToComplete = 0x28; // bool
		constexpr auto bMoviesAreSkippable = 0x29; // bool
		constexpr auto StartupMovies = 0x30; // TArray<FString>
	}

	namespace n_At_LocationCraftActor_C {
		constexpr auto Mesh = 0x350; // UStaticMeshComponent*
	}

	namespace n_USystemTimeTimecodeProvider {
		constexpr auto FrameRate = 0x30; // FFrameRate
		constexpr auto bGenerateFullFrame = 0x38; // bool
		constexpr auto bUseHighPerformanceClock = 0x39; // bool
	}

	namespace n_UCanvas {
		constexpr auto OrgX = 0x28; // float
		constexpr auto OrgY = 0x2c; // float
		constexpr auto ClipX = 0x30; // float
		constexpr auto ClipY = 0x34; // float
		constexpr auto DrawColor = 0x38; // FColor
		constexpr auto bCenterX = 0x3c; // char : 1
		constexpr auto bCenterY = 0x3c; // char : 1
		constexpr auto bNoSmooth = 0x3c; // char : 1
		constexpr auto SizeX = 0x40; // int32_t
		constexpr auto SizeY = 0x44; // int32_t
		constexpr auto ColorModulate = 0x50; // FPlane
		constexpr auto DefaultTexture = 0x60; // UTexture2D*
		constexpr auto GradientTexture0 = 0x68; // UTexture2D*
		constexpr auto ReporterGraph = 0x70; // UReporterGraph*
	}

	namespace n_UAnimSingleNodeInstance {
		constexpr auto CurrentAsset = 0x2b8; // UAnimationAsset*
		constexpr auto PostEvaluateAnimEvent = 0x2c0; // FDelegate
	}

	namespace n_UGizmoAxisScaleParameterSource {
		constexpr auto AxisSource = 0x48; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0x58; // TScriptInterface<IGizmoTransformSource>
		constexpr auto ScaleMultiplier = 0x68; // float
		constexpr auto Parameter = 0x6c; // float
		constexpr auto LastChange = 0x70; // FGizmoFloatParameterChange
		constexpr auto CurScaleAxis = 0x78; // FVector
		constexpr auto CurScaleOrigin = 0x84; // FVector
		constexpr auto InitialTransform = 0x90; // FTransform
	}

	namespace n_AMatineeActor {
		constexpr auto MatineeData = 0x220; // UInterpData*
		constexpr auto MatineeControllerName = 0x228; // FName
		constexpr auto PlayRate = 0x230; // float
		constexpr auto bPlayOnLevelLoad = 0x234; // char : 1
		constexpr auto bForceStartPos = 0x234; // char : 1
		constexpr auto ForceStartPosition = 0x238; // float
		constexpr auto bLooping = 0x23c; // char : 1
		constexpr auto bRewindOnPlay = 0x23c; // char : 1
		constexpr auto bNoResetOnRewind = 0x23c; // char : 1
		constexpr auto bRewindIfAlreadyPlaying = 0x23c; // char : 1
		constexpr auto bDisableRadioFilter = 0x23c; // char : 1
		constexpr auto bClientSideOnly = 0x23c; // char : 1
		constexpr auto bSkipUpdateIfNotVisible = 0x23c; // char : 1
		constexpr auto bIsSkippable = 0x23c; // char : 1
		constexpr auto PreferredSplitScreenNum = 0x240; // int32_t
		constexpr auto bDisableMovementInput = 0x244; // char : 1
		constexpr auto bDisableLookAtInput = 0x244; // char : 1
		constexpr auto bHidePlayer = 0x244; // char : 1
		constexpr auto bHideHud = 0x244; // char : 1
		constexpr auto GroupActorInfos = 0x248; // TArray<FInterpGroupActorInfo>
		constexpr auto bShouldShowGore = 0x258; // char : 1
		constexpr auto GroupInst = 0x260; // TArray<UInterpGroupInst*>
		constexpr auto CameraCuts = 0x270; // TArray<FCameraCutInfo>
		constexpr auto bIsPlaying = 0x280; // char : 1
		constexpr auto bReversePlayback = 0x280; // char : 1
		constexpr auto bPaused = 0x280; // char : 1
		constexpr auto bPendingStop = 0x280; // char : 1
		constexpr auto InterpPosition = 0x284; // float
		constexpr auto ReplicationForceIsPlaying = 0x28c; // char
		constexpr auto OnPlay = 0x290; // FMulticastInlineDelegate
		constexpr auto OnStop = 0x2a0; // FMulticastInlineDelegate
		constexpr auto OnPause = 0x2b0; // FMulticastInlineDelegate
	}

	namespace n_UPlayMontageCallbackProxy {
		constexpr auto OnCompleted = 0x28; // FMulticastInlineDelegate
		constexpr auto OnBlendOut = 0x38; // FMulticastInlineDelegate
		constexpr auto OnInterrupted = 0x48; // FMulticastInlineDelegate
		constexpr auto OnNotifyBegin = 0x58; // FMulticastInlineDelegate
		constexpr auto OnNotifyEnd = 0x68; // FMulticastInlineDelegate
	}

	namespace n_UConstantCameraShakePattern {
		constexpr auto LocationOffset = 0x38; // FVector
		constexpr auto RotationOffset = 0x44; // FRotator
	}

	namespace n_UMaterialExpressionDesaturation {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Fraction = 0x54; // FExpressionInput
		constexpr auto LuminanceFactors = 0x68; // FLinearColor
	}

	namespace n_USafeZone {
		constexpr auto PadLeft = 0x120; // bool
		constexpr auto PadRight = 0x121; // bool
		constexpr auto PadTop = 0x122; // bool
		constexpr auto PadBottom = 0x123; // bool
	}

	namespace n_UDatasmithStaticMeshIFCImportData {
		constexpr auto SourceGlobalId = 0x28; // FString
	}

	namespace n_UAssetExportTask {
		constexpr auto Object = 0x28; // UObject*
		constexpr auto Exporter = 0x30; // UExporter*
		constexpr auto Filename = 0x38; // FString
		constexpr auto bSelected = 0x48; // bool
		constexpr auto bReplaceIdentical = 0x49; // bool
		constexpr auto bPrompt = 0x4a; // bool
		constexpr auto bAutomated = 0x4b; // bool
		constexpr auto bUseFileArchive = 0x4c; // bool
		constexpr auto bWriteEmptyFiles = 0x4d; // bool
		constexpr auto IgnoreObjectList = 0x50; // TArray<UObject*>
		constexpr auto Options = 0x60; // UObject*
		constexpr auto Errors = 0x68; // TArray<FString>
	}

	namespace n_UWidgetSwitcher {
		constexpr auto ActiveWidgetIndex = 0x120; // int32_t
	}

	namespace n_APlanarReflection {
		constexpr auto PlanarReflectionComponent = 0x230; // UPlanarReflectionComponent*
		constexpr auto bShowPreviewPlane = 0x238; // bool
	}

	namespace n_UMovieSceneParticleParameterTrack {
		constexpr auto Sections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_ASFPSActor {
		constexpr auto bJumpForbidden = 0x220; // bool
		constexpr auto ActorLibraryIndex = 0x224; // int32_t
	}

	namespace n_ANavigationData {
		constexpr auto RenderingComp = 0x228; // UPrimitiveComponent*
		constexpr auto NavDataConfig = 0x230; // FNavDataConfig
		constexpr auto bEnableDrawing = 0x2a8; // char : 1
		constexpr auto bForceRebuildOnLoad = 0x2a8; // char : 1
		constexpr auto bAutoDestroyWhenNoNavigation = 0x2a8; // char : 1
		constexpr auto bCanBeMainNavData = 0x2a8; // char : 1
		constexpr auto bCanSpawnOnRebuild = 0x2a8; // char : 1
		constexpr auto bRebuildAtRuntime = 0x2a8; // char : 1
		constexpr auto RuntimeGeneration = 0x2ac; // ERuntimeGenerationType
		constexpr auto ObservedPathsTickInterval = 0x2b0; // float
		constexpr auto DataVersion = 0x2b4; // uint32_t
		constexpr auto SupportedAreas = 0x3c0; // TArray<FSupportedAreaData>
	}

	namespace n_ULightComponentBase {
		constexpr auto LightGuid = 0x1f8; // FGuid
		constexpr auto Brightness = 0x208; // float
		constexpr auto Intensity = 0x20c; // float
		constexpr auto LightColor = 0x210; // FColor
		constexpr auto bAffectsWorld = 0x214; // char : 1
		constexpr auto CastShadows = 0x214; // char : 1
		constexpr auto CastStaticShadows = 0x214; // char : 1
		constexpr auto CastDynamicShadows = 0x214; // char : 1
		constexpr auto bAffectTranslucentLighting = 0x214; // char : 1
		constexpr auto bTransmission = 0x214; // char : 1
		constexpr auto bCastVolumetricShadow = 0x214; // char : 1
		constexpr auto bCastDeepShadow = 0x214; // char : 1
		constexpr auto bCastRaytracedShadow = 0x215; // char : 1
		constexpr auto bAffectReflection = 0x215; // char : 1
		constexpr auto bAffectGlobalIllumination = 0x215; // char : 1
		constexpr auto DeepShadowLayerDistribution = 0x218; // float
		constexpr auto IndirectLightingIntensity = 0x21c; // float
		constexpr auto VolumetricScatteringIntensity = 0x220; // float
		constexpr auto SamplesPerPixel = 0x224; // int32_t
	}

	namespace n_UParticleModuleAttractorPointGravity {
		constexpr auto Position = 0x30; // FVector
		constexpr auto Radius = 0x3c; // float
		constexpr auto Strength = 0x40; // UDistributionFloat*
		constexpr auto StrengthRaw = 0x48; // FRawDistributionFloat
	}

	namespace n_Aweapon_firearms_smg_fnp90_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightOpen = 0x7f0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_UABP_weapon_firearms_smg_ump_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x318; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x398; // FAnimNode_Slot
	}

	namespace n_ATextRenderActor {
		constexpr auto TextRender = 0x220; // UTextRenderComponent*
	}

	namespace n_UGizmoComponentHitTarget {
		constexpr auto Component = 0x30; // UPrimitiveComponent*
	}

	namespace n_UPoseWatch {
		constexpr auto Node = 0x28; // UEdGraphNode*
		constexpr auto PoseWatchColour = 0x30; // FColor
	}

	namespace n_ULightmassPrimitiveSettingsObject {
		constexpr auto LightmassSettings = 0x28; // FLightmassPrimitiveSettings
	}

	namespace n_ASFPSWeapon {
		constexpr auto Skins = 0x408; // TArray<FSFPSSkinData_Weapon>
		constexpr auto SkinID = 0x418; // char
		constexpr auto FireModes = 0x448; // TArray<ESFPSWeaponFireMode>
		constexpr auto FireModeCutoff_ShotCount = 0x458; // int32_t
		constexpr auto CurrentFireMode = 0x45c; // ESFPSWeaponFireMode
		constexpr auto CurrentFireAnim = 0x460; // int32_t
		constexpr auto bUseBindDeviceLeft = 0x478; // bool
		constexpr auto bBindDeviceLeftEnabled = 0x479; // bool
		constexpr auto BindDeviceLeftSoundCue = 0x480; // USoundCue*
		constexpr auto IsFiring = 0x488; // bool
		constexpr auto AttackRate = 0x48c; // float
		constexpr auto LengthForWeaponBarrier = 0x490; // float
		constexpr auto FireShake = 0x498; // USFPSCameraShake*
		constexpr auto AnimationInstanceType = 0x4a0; // ESFPSWeaponAnimInstanceType
		constexpr auto FireCue = 0x4a8; // USoundCue*
		constexpr auto FireLocalCue = 0x4b0; // USoundCue*
		constexpr auto EmptyClipCue = 0x4b8; // USoundCue*
		constexpr auto SwitchModeCue = 0x4c0; // USoundCue*
		constexpr auto WeaponSightCue = 0x4c8; // USoundCue*
		constexpr auto InRoomEffectChain = 0x4d0; // USoundEffectSourcePresetChain*
	}

	namespace n_UServerList_C {
		constexpr auto btnBack = 0x260; // UButton*
		constexpr auto btnBuyServer = 0x268; // UButton*
		constexpr auto btnIP = 0x270; // UButton*
		constexpr auto btnJoin = 0x278; // UButton*
		constexpr auto btnRefresh = 0x280; // UButton*
		constexpr auto frmServerListItem = 0x288; // UfrmServerListItem_C*
		constexpr auto spGPortal = 0x290; // UImage*
		constexpr auto spVivox = 0x298; // UImage*
	}

	namespace n_UInterpTrackLinearColorProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_UMaterialExpressionRotateAboutAxis {
		constexpr auto NormalizedRotationAxis = 0x40; // FExpressionInput
		constexpr auto RotationAngle = 0x54; // FExpressionInput
		constexpr auto PivotPoint = 0x68; // FExpressionInput
		constexpr auto Position = 0x7c; // FExpressionInput
		constexpr auto Period = 0x90; // float
	}

	namespace n_USFPSSplitHandler {
		constexpr auto FSplitForm = 0x28; // UUserWidget*
	}

	namespace n_USourceEffectBitCrusherPreset {
		constexpr auto Settings = 0xc0; // FSourceEffectBitCrusherSettings
	}

	namespace n_AReflectionCapture {
		constexpr auto CaptureComponent = 0x220; // UReflectionCaptureComponent*
	}

	namespace n_UGeometryCacheTrack {
		constexpr auto Duration = 0x28; // float
	}

	namespace n_UDcxVehicleDriveComponent {
		constexpr auto EngineData = 0x240; // FDcxVehicleEngineData
		constexpr auto GearboxData = 0x2e0; // FDcxVehicleGearboxData
		constexpr auto ClutchData = 0x310; // FDcxVehicleClutchData
		constexpr auto bAutoReverse = 0x320; // bool
		constexpr auto WrongDirectionThreshold = 0x324; // float
		constexpr auto bAutoBrake = 0x328; // bool
		constexpr auto StopThreshold = 0x32c; // float
		constexpr auto SteerCurve = 0x330; // FRuntimeFloatCurve
	}

	namespace n_UAnimBoneCompressionCodec {
		constexpr auto Description = 0x28; // FString
	}

	namespace n_UParticleModuleAttractorParticle {
		constexpr auto EmitterName = 0x30; // FName
		constexpr auto Range = 0x38; // FRawDistributionFloat
		constexpr auto bStrengthByDistance = 0x68; // char : 1
		constexpr auto Strength = 0x70; // FRawDistributionFloat
		constexpr auto bAffectBaseVelocity = 0xa0; // char : 1
		constexpr auto SelectionMethod = 0xa4; // EAttractorParticleSelectionMethod
		constexpr auto bRenewSource = 0xa8; // char : 1
		constexpr auto bInheritSourceVel = 0xa8; // char : 1
		constexpr auto LastSelIndex = 0xac; // int32_t
	}

	namespace n_ULandscapeMeshProxyComponent {
		constexpr auto LandscapeGuid = 0x4e0; // FGuid
		constexpr auto ProxyComponentBases = 0x4f0; // TArray<FIntPoint>
		constexpr auto ProxyLOD = 0x500; // int8_t
	}

	namespace n_UAnimComposite {
		constexpr auto AnimationTrack = 0xa8; // FAnimTrack
	}

	namespace n_USkeletalMesh {
		constexpr auto Skeleton = 0x80; // USkeleton*
		constexpr auto ImportedBounds = 0x88; // FBoxSphereBounds
		constexpr auto ExtendedBounds = 0xa4; // FBoxSphereBounds
		constexpr auto PositiveBoundsExtension = 0xc0; // FVector
		constexpr auto NegativeBoundsExtension = 0xcc; // FVector
		constexpr auto Materials = 0xd8; // TArray<FSkeletalMaterial>
		constexpr auto SkelMirrorTable = 0xe8; // TArray<FBoneMirrorInfo>
		constexpr auto LODInfo = 0xf8; // TArray<FSkeletalMeshLODInfo>
		constexpr auto MinLOD = 0x158; // FPerPlatformInt
		constexpr auto DisableBelowMinLodStripping = 0x15c; // FPerPlatformBool
		constexpr auto SkelMirrorAxis = 0x15d; // EAxis
		constexpr auto SkelMirrorFlipAxis = 0x15e; // EAxis
		constexpr auto bUseFullPrecisionUVs = 0x15f; // char : 1
		constexpr auto bUseHighPrecisionTangentBasis = 0x15f; // char : 1
		constexpr auto bHasBeenSimplified = 0x15f; // char : 1
		constexpr auto bHasVertexColors = 0x15f; // char : 1
		constexpr auto bEnablePerPolyCollision = 0x15f; // char : 1
		constexpr auto BodySetup = 0x160; // UBodySetup*
		constexpr auto PhysicsAsset = 0x168; // UPhysicsAsset*
		constexpr auto ShadowPhysicsAsset = 0x170; // UPhysicsAsset*
		constexpr auto NodeMappingData = 0x178; // TArray<UNodeMappingContainer*>
		constexpr auto bSupportRayTracing = 0x188; // char : 1
		constexpr auto MorphTargets = 0x190; // TArray<UMorphTarget*>
		constexpr auto PostProcessAnimBlueprint = 0x318; // UAnimInstance*
		constexpr auto MeshClothingAssets = 0x320; // TArray<UClothingAssetBase*>
		constexpr auto SamplingInfo = 0x330; // FSkeletalMeshSamplingInfo
		constexpr auto AssetUserData = 0x360; // TArray<UAssetUserData*>
		constexpr auto Sockets = 0x370; // TArray<USkeletalMeshSocket*>
		constexpr auto SkinWeightProfiles = 0x390; // TArray<FSkinWeightProfileInfo>
	}

	namespace n_UBTTask_FinishWithResult {
		constexpr auto Result = 0x70; // EBTNodeResult
	}

	namespace n_UConstantQNRTSettings {
		constexpr auto StartingFrequency = 0x28; // float
		constexpr auto NumBands = 0x2c; // int32_t
		constexpr auto NumBandsPerOctave = 0x30; // float
		constexpr auto AnalysisPeriod = 0x34; // float
		constexpr auto bDownmixToMono = 0x38; // bool
		constexpr auto FFTSize = 0x39; // EConstantQFFTSizeEnum
		constexpr auto WindowType = 0x3a; // EFFTWindowType
		constexpr auto SpectrumType = 0x3b; // EAudioSpectrumType
		constexpr auto BandWidthStretch = 0x3c; // float
		constexpr auto CQTNormalization = 0x40; // EConstantQNormalizationEnum
		constexpr auto NoiseFloorDb = 0x44; // float
	}

	namespace n_UABP_weapon_firearms_smg_Bizon_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_SequencePlayer = 0x360; // FAnimNode_SequencePlayer
	}

	namespace n_USubUVAnimation {
		constexpr auto SubUVTexture = 0x28; // UTexture2D*
		constexpr auto SubImages_Horizontal = 0x30; // int32_t
		constexpr auto SubImages_Vertical = 0x34; // int32_t
		constexpr auto BoundingMode = 0x38; // ESubUVBoundingVertexCount
		constexpr auto OpacitySourceMode = 0x39; // EOpacitySourceMode
		constexpr auto AlphaThreshold = 0x3c; // float
	}

	namespace n_UFormHUD_C {
		constexpr auto frmCompass = 0x260; // UfrmCompass_C*
		constexpr auto imgNoPVP = 0x268; // UImage*
		constexpr auto rmMain = 0x270; // UfrmRadialMenu_C*
		constexpr auto uwChat = 0x278; // UfrmHUDChatBox_C*
		constexpr auto imgShot0Visible = 0x280; // ESlateVisibility
		constexpr auto imgShot1Visible = 0x281; // ESlateVisibility
		constexpr auto imgShot2Visible = 0x282; // ESlateVisibility
	}

	namespace n_UNetDriver {
		constexpr auto NetConnectionClassName = 0x30; // FString
		constexpr auto ReplicationDriverClassName = 0x40; // FString
		constexpr auto MaxDownloadSize = 0x50; // int32_t
		constexpr auto bClampListenServerTickRate = 0x54; // char : 1
		constexpr auto NetServerMaxTickRate = 0x58; // int32_t
		constexpr auto MaxNetTickRate = 0x5c; // int32_t
		constexpr auto MaxInternetClientRate = 0x60; // int32_t
		constexpr auto MaxClientRate = 0x64; // int32_t
		constexpr auto ServerTravelPause = 0x68; // float
		constexpr auto SpawnPrioritySeconds = 0x6c; // float
		constexpr auto RelevantTimeout = 0x70; // float
		constexpr auto KeepAliveTime = 0x74; // float
		constexpr auto InitialConnectTimeout = 0x78; // float
		constexpr auto ConnectionTimeout = 0x7c; // float
		constexpr auto TimeoutMultiplierForUnoptimizedBuilds = 0x80; // float
		constexpr auto bNoTimeouts = 0x84; // bool
		constexpr auto bNeverApplyNetworkEmulationSettings = 0x85; // bool
		constexpr auto ServerConnection = 0x88; // UNetConnection*
		constexpr auto ClientConnections = 0x90; // TArray<UNetConnection*>
		constexpr auto RecentlyDisconnectedTrackingTime = 0x100; // int32_t
		constexpr auto World = 0x140; // UWorld*
		constexpr auto WorldPackage = 0x148; // UPackage*
		constexpr auto NetConnectionClass = 0x170; // UObject*
		constexpr auto ReplicationDriverClass = 0x178; // UObject*
		constexpr auto NetDriverName = 0x190; // FName
		constexpr auto ChannelDefinitions = 0x198; // TArray<FChannelDefinition>
		constexpr auto ChannelDefinitionMap = 0x1a8; // TMap<FName, FChannelDefinition>
		constexpr auto ActorChannelPool = 0x1f8; // TArray<UChannel*>
		constexpr auto Time = 0x210; // float
		constexpr auto ReplicationDriver = 0x700; // UReplicationDriver*
	}

	namespace n_UScrollBox {
		constexpr auto WidgetStyle = 0x120; // FScrollBoxStyle
		constexpr auto WidgetBarStyle = 0x348; // FScrollBarStyle
		constexpr auto Style = 0x818; // USlateWidgetStyleAsset*
		constexpr auto BarStyle = 0x820; // USlateWidgetStyleAsset*
		constexpr auto Orientation = 0x828; // EOrientation
		constexpr auto ScrollBarVisibility = 0x829; // ESlateVisibility
		constexpr auto ConsumeMouseWheel = 0x82a; // EConsumeMouseWheel
		constexpr auto ScrollbarThickness = 0x82c; // FVector2D
		constexpr auto ScrollbarPadding = 0x834; // FMargin
		constexpr auto AlwaysShowScrollbar = 0x844; // bool
		constexpr auto AlwaysShowScrollbarTrack = 0x845; // bool
		constexpr auto AllowOverscroll = 0x846; // bool
		constexpr auto bAnimateWheelScrolling = 0x847; // bool
		constexpr auto NavigationDestination = 0x848; // EDescendantScrollDestination
		constexpr auto NavigationScrollPadding = 0x84c; // float
		constexpr auto ScrollWhenFocusChanges = 0x850; // EScrollWhenFocusChanges
		constexpr auto bAllowRightClickDragScrolling = 0x851; // bool
		constexpr auto WheelScrollMultiplier = 0x854; // float
		constexpr auto OnUserScrolled = 0x858; // FMulticastInlineDelegate
	}

	namespace n_UInAppPurchaseCallbackProxy2 {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_UNetworkSettings {
		constexpr auto bVerifyPeer = 0x38; // char : 1
		constexpr auto bEnableMultiplayerWorldOriginRebasing = 0x38; // char : 1
		constexpr auto MaxRepArraySize = 0x3c; // int32_t
		constexpr auto MaxRepArrayMemory = 0x40; // int32_t
		constexpr auto NetworkEmulationProfiles = 0x48; // TArray<FNetworkEmulationProfileDescription>
	}

	namespace n_USFPSShellManager {
		constexpr auto ShellList_SG0 = 0x28; // TArray<ASFPSShell*>
		constexpr auto ShellList_AR0 = 0x38; // TArray<ASFPSShell*>
		constexpr auto ShellList_Gun0 = 0x48; // TArray<ASFPSShell*>
		constexpr auto ShellList_SR0 = 0x58; // TArray<ASFPSShell*>
		constexpr auto ShellList_SR1 = 0x68; // TArray<ASFPSShell*>
		constexpr auto Shell_SG0 = 0x90; // ASFPSShell*
		constexpr auto Shell_AR0 = 0x98; // ASFPSShell*
		constexpr auto Shell_Gun0 = 0xa0; // ASFPSShell*
		constexpr auto Shell_SR0 = 0xa8; // ASFPSShell*
		constexpr auto Shell_SR1 = 0xb0; // ASFPSShell*
	}

	namespace n_UGridPathFollowingComponent {
		constexpr auto GridManager = 0x250; // UNavLocalGridManager*
	}

	namespace n_UBehaviorTreeManager {
		constexpr auto MaxDebuggerSteps = 0x28; // int32_t
		constexpr auto LoadedTemplates = 0x30; // TArray<FBehaviorTreeTemplateInfo>
		constexpr auto ActiveComponents = 0x40; // TArray<UBehaviorTreeComponent*>
	}

	namespace n_ABaseBounds_C {
		constexpr auto Sphere = 0x220; // UStaticMeshComponent*
	}

	namespace n_UBillboardComponent {
		constexpr auto Sprite = 0x450; // UTexture2D*
		constexpr auto bIsScreenSizeScaled = 0x458; // char : 1
		constexpr auto ScreenSize = 0x45c; // float
		constexpr auto U = 0x460; // float
		constexpr auto UL = 0x464; // float
		constexpr auto V = 0x468; // float
		constexpr auto VL = 0x46c; // float
	}

	namespace n_UInterpTrackInstSlomo {
		constexpr auto OldTimeDilation = 0x28; // float
	}

	namespace n_UGameViewportClient {
		constexpr auto ViewportConsole = 0x40; // UConsole*
		constexpr auto DebugProperties = 0x48; // TArray<FDebugDisplayProperty>
		constexpr auto MaxSplitscreenPlayers = 0x68; // int32_t
		constexpr auto World = 0x78; // UWorld*
		constexpr auto GameInstance = 0x80; // UGameInstance*
	}

	namespace n_ULightmassPortalComponent {
		constexpr auto PreviewBox = 0x1f8; // UBoxComponent*
	}

	namespace n_UScrollBoxWidgetStyle {
		constexpr auto ScrollBoxStyle = 0x30; // FScrollBoxStyle
	}

	namespace n_Aweapon_firearms_smg_hkmp5_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto Glow = 0x7e8; // UStaticMeshComponent*
		constexpr auto Light = 0x7f0; // USpotLightComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7f8; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x808; // UStaticMeshComponent*
	}

	namespace n_UABP_weapon_firearms_snip_barrettm99_C {
		constexpr auto UberGraphFrame = 0x300; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x308; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x338; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x3b8; // FAnimNode_Slot
	}

	namespace n_UUMG_RadialMenu_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto RadialBackground = 0x268; // UImage*
		constexpr auto RadiusDebug = 0x270; // UImage*
		constexpr auto RootOverlay = 0x278; // UOverlay*
		constexpr auto Segments = 0x280; // int32_t
		constexpr auto MaterialBase = 0x288; // UMaterialInterface*
		constexpr auto IndexRaw = 0x290; // float
		constexpr auto Index = 0x294; // int32_t
		constexpr auto dynaMat = 0x298; // UMaterialInstanceDynamic*
		constexpr auto Children = 0x2a0; // TArray<UUserWidget*>
		constexpr auto AllowResizing = 0x2b0; // bool
		constexpr auto ItemOffsetRadius = 0x2b4; // float
		constexpr auto SelectionChanged = 0x2b8; // FMulticastInlineDelegate
		constexpr auto InputController = 0x2c8; // APlayerController*
		constexpr auto JoystickToUse = 0x2d0; // EJoystickTypes
		constexpr auto MouseDeadzone = 0x2d4; // float
		constexpr auto bInDeadzone = 0x2d8; // bool
		constexpr auto EnteredDeadzone = 0x2e0; // FMulticastInlineDelegate
		constexpr auto ExitedDeadzone = 0x2f0; // FMulticastInlineDelegate
		constexpr auto CurrentInput = 0x300; // FVector2D
		constexpr auto JoystickDeadzone = 0x308; // float
		constexpr auto DefaultToMouseIfNoJoystick = 0x30c; // bool
		constexpr auto DefaultPlayerIndex = 0x310; // int32_t
		constexpr auto UseDeadzoneEvents = 0x314; // bool
		constexpr auto SelectionChangedSound = 0x318; // USoundBase*
		constexpr auto AutoCenterMouse = 0x320; // bool
		constexpr auto AutoRotateForUp = 0x321; // bool
		constexpr auto bUseCustomInput = 0x322; // bool
		constexpr auto CustomInput = 0x324; // FVector2D
		constexpr auto UseCustomTexture = 0x32c; // bool
		constexpr auto RadialTexture = 0x330; // UTexture*
		constexpr auto UseCustomColors = 0x338; // bool
		constexpr auto InnterRingColor = 0x33c; // FLinearColor
		constexpr auto OuterRingColor = 0x34c; // FLinearColor
		constexpr auto RingMainColor = 0x35c; // FLinearColor
		constexpr auto UnhighlightColor = 0x36c; // FLinearColor
		constexpr auto CorrectionVector = 0x37c; // FVector2D
		constexpr auto bForceSetIndex = 0x384; // bool
	}

	namespace n_USkeletalMeshComponent {
		constexpr auto AnimBlueprintGeneratedClass = 0x6a0; // UObject*
		constexpr auto AnimClass = 0x6a8; // UAnimInstance*
		constexpr auto AnimScriptInstance = 0x6b0; // UAnimInstance*
		constexpr auto PostProcessAnimInstance = 0x6b8; // UAnimInstance*
		constexpr auto AnimationData = 0x6c0; // FSingleAnimationPlayData
		constexpr auto RootBoneTranslation = 0x6e8; // FVector
		constexpr auto LineCheckBoundsScale = 0x6f4; // FVector
		constexpr auto LinkedInstances = 0x730; // TArray<UAnimInstance*>
		constexpr auto CachedBoneSpaceTransforms = 0x740; // TArray<FTransform>
		constexpr auto CachedComponentSpaceTransforms = 0x750; // TArray<FTransform>
		constexpr auto GlobalAnimRateScale = 0x8b0; // float
		constexpr auto KinematicBonesUpdateType = 0x8b4; // EKinematicBonesUpdateToPhysics
		constexpr auto PhysicsTransformUpdateMode = 0x8b5; // EPhysicsTransformUpdateMode
		constexpr auto AnimationMode = 0x8b7; // EAnimationMode
		constexpr auto bDisablePostProcessBlueprint = 0x8b9; // char : 1
		constexpr auto bUpdateOverlapsOnAnimationFinalize = 0x8b9; // char : 1
		constexpr auto bHasValidBodies = 0x8b9; // char : 1
		constexpr auto bBlendPhysics = 0x8b9; // char : 1
		constexpr auto bEnablePhysicsOnDedicatedServer = 0x8b9; // char : 1
		constexpr auto bUpdateJointsFromAnimation = 0x8b9; // char : 1
		constexpr auto bDisableClothSimulation = 0x8ba; // char : 1
		constexpr auto bDisableRigidBodyAnimNode = 0x8c0; // char : 1
		constexpr auto bAllowAnimCurveEvaluation = 0x8c0; // char : 1
		constexpr auto bDisableAnimCurves = 0x8c0; // char : 1
		constexpr auto bCollideWithEnvironment = 0x8c0; // char : 1
		constexpr auto bCollideWithAttachedChildren = 0x8c1; // char : 1
		constexpr auto bLocalSpaceSimulation = 0x8c1; // char : 1
		constexpr auto bResetAfterTeleport = 0x8c1; // char : 1
		constexpr auto bDeferKinematicBoneUpdate = 0x8c1; // char : 1
		constexpr auto bNoSkeletonUpdate = 0x8c1; // char : 1
		constexpr auto bPauseAnims = 0x8c1; // char : 1
		constexpr auto bUseRefPoseOnInitAnim = 0x8c1; // char : 1
		constexpr auto bEnablePerPolyCollision = 0x8c2; // char : 1
		constexpr auto bForceRefpose = 0x8c2; // char : 1
		constexpr auto bOnlyAllowAutonomousTickPose = 0x8c2; // char : 1
		constexpr auto bIsAutonomousTickPose = 0x8c2; // char : 1
		constexpr auto bOldForceRefPose = 0x8c2; // char : 1
		constexpr auto bShowPrePhysBones = 0x8c2; // char : 1
		constexpr auto bRequiredBonesUpToDate = 0x8c2; // char : 1
		constexpr auto bAnimTreeInitialised = 0x8c2; // char : 1
		constexpr auto bIncludeComponentLocationIntoBounds = 0x8c3; // char : 1
		constexpr auto bEnableLineCheckWithBounds = 0x8c3; // char : 1
		constexpr auto bPropagateCurvesToSlaves = 0x8c3; // char : 1
		constexpr auto bSkipKinematicUpdateWhenInterpolating = 0x8c3; // char : 1
		constexpr auto bSkipBoundsUpdateWhenInterpolating = 0x8c3; // char : 1
		constexpr auto bNeedsQueuedAnimEventsDispatched = 0x8c3; // char : 1
		constexpr auto CachedAnimCurveUidVersion = 0x8c6; // uint16_t
		constexpr auto ClothBlendWeight = 0x8c8; // float
		constexpr auto bWaitForParallelClothTask = 0x8cc; // bool
		constexpr auto DisallowedAnimCurves = 0x8d0; // TArray<FName>
		constexpr auto BodySetup = 0x8e0; // UBodySetup*
		constexpr auto OnConstraintBroken = 0x8f0; // FMulticastInlineDelegate
		constexpr auto ClothingSimulationFactory = 0x900; // UClothingSimulationFactory*
		constexpr auto TeleportDistanceThreshold = 0x9d8; // float
		constexpr auto TeleportRotationThreshold = 0x9dc; // float
		constexpr auto LastPoseTickFrame = 0x9e8; // uint32_t
		constexpr auto ClothingInteractor = 0xa40; // UClothingSimulationInteractor*
		constexpr auto OnAnimInitialized = 0xb10; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionPerInstanceCustomData {
		constexpr auto DefaultValue = 0x40; // FExpressionInput
		constexpr auto ConstDefaultValue = 0x54; // float
		constexpr auto DataIndex = 0x58; // uint32_t
	}

	namespace n_ABox_mil_05_C {
		constexpr auto Box_military_cap_01 = 0x220; // UStaticMeshComponent*
		constexpr auto Box_military_01 = 0x228; // UStaticMeshComponent*
	}

	namespace n_UMovieSceneStringSection {
		constexpr auto StringCurve = 0xe8; // FMovieSceneStringChannel
	}

	namespace n_UShootCrossfadeOuterParams {
		constexpr auto NearShoot = 0x28; // FDistanceDatum
		constexpr auto FarShoot = 0x3c; // FDistanceDatum
	}

	namespace n_UMaterialExpressionSign {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UPawnAction_Move {
		constexpr auto GoalActor = 0x90; // AActor*
		constexpr auto GoalLocation = 0x98; // FVector
		constexpr auto AcceptableRadius = 0xa4; // float
		constexpr auto FilterClass = 0xa8; // UNavigationQueryFilter*
		constexpr auto bAllowStrafe = 0xb0; // char : 1
		constexpr auto bFinishOnOverlap = 0xb0; // char : 1
		constexpr auto bUsePathfinding = 0xb0; // char : 1
		constexpr auto bAllowPartialPath = 0xb0; // char : 1
		constexpr auto bProjectGoalToNavigation = 0xb0; // char : 1
		constexpr auto bUpdatePathToGoal = 0xb0; // char : 1
		constexpr auto bAbortChildActionOnPathChange = 0xb0; // char : 1
	}

	namespace n_ASFPSBaseLootSpawner {
		constexpr auto SpawnIntervalMin = 0x234; // int32_t
		constexpr auto SpawnIntervalMax = 0x238; // int32_t
		constexpr auto RerollChance = 0x23c; // int32_t
		constexpr auto RadiusSquared = 0x240; // int32_t
		constexpr auto bIgnoresChanceMultiplier = 0x244; // bool
	}

	namespace n_UDcxVehicleWheelsComponent {
		constexpr auto ChassisMass = 0x140; // float
		constexpr auto InertiaTensorScale = 0x144; // FVector
		constexpr auto TireLoadFilter = 0x150; // FDcxVehicleTireLoadFilterData
		constexpr auto bUseAvoidance = 0x160; // bool
		constexpr auto AvoidanceWeight = 0x164; // float
		constexpr auto AvoidanceUID = 0x168; // int32_t
		constexpr auto AvoidanceGroup = 0x16c; // FNavAvoidanceMask
		constexpr auto GroupsToAvoid = 0x170; // FNavAvoidanceMask
		constexpr auto GroupsToIgnore = 0x174; // FNavAvoidanceMask
		constexpr auto WheelConfigurations = 0x178; // TArray<FDcxVehicleWheelConfiguration>
		constexpr auto ThresholdLongitudinalSpeed = 0x188; // float
		constexpr auto LowForwardSpeedSubStepCount = 0x18c; // int32_t
		constexpr auto HighForwardSpeedSubStepCount = 0x190; // int32_t
		constexpr auto DragCoefficient = 0x194; // float
		constexpr auto DragArea = 0x198; // float
		constexpr auto ThrottleRate = 0x19c; // FDcxVehicleDriveInputRate
		constexpr auto BrakeRate = 0x1a4; // FDcxVehicleDriveInputRate
		constexpr auto HandbrakeRate = 0x1ac; // FDcxVehicleDriveInputRate
		constexpr auto SteerRate = 0x1b4; // FDcxVehicleDriveInputRate
		constexpr auto AvoidanceRadius = 0x1bc; // float
		constexpr auto AvoidanceHeight = 0x1c0; // float
		constexpr auto AvoidanceConsiderationRadius = 0x1c4; // float
		constexpr auto AvoidanceThrottleStep = 0x1c8; // float
		constexpr auto AvoidanceBrakeStep = 0x1cc; // float
		constexpr auto AvoidanceSteerStep = 0x1d0; // float
		constexpr auto bRecreateRequired = 0x1d4; // bool
		constexpr auto RawInput = 0x1d8; // UDcxVehicleWheelsRawInput*
		constexpr auto SmoothAnalogControls = 0x1e0; // TArray<float>
		constexpr auto ReplicatedState = 0x1f0; // FDcxVehicleDriveState
		constexpr auto bWasAvoidanceUpdated = 0x208; // bool
		constexpr auto AvoidanceVelocity = 0x20c; // FVector
		constexpr auto AvoidanceLockVelocity = 0x218; // FVector
		constexpr auto AvoidanceLockTimer = 0x224; // float
	}

	namespace n_UEnvQueryGenerator_CurrentLocation {
		constexpr auto QueryContext = 0x50; // UEnvQueryContext*
	}

	namespace n_UPlatformInterfaceWebResponse {
		constexpr auto OriginalURL = 0x28; // FString
		constexpr auto ResponseCode = 0x38; // int32_t
		constexpr auto Tag = 0x3c; // int32_t
		constexpr auto StringResponse = 0x40; // FString
		constexpr auto BinaryResponse = 0x50; // TArray<char>
	}

	namespace n_UABP_weapon_firearms_sg_m4_C {
		constexpr auto UberGraphFrame = 0x310; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x318; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x348; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x390; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x3b8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x3e0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x460; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x490; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x510; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x540; // FAnimNode_StateMachine
	}

	namespace n_Ascope_opt_mosin_C {
		constexpr auto cod_4x_reticles = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UComboBoxWidgetStyle {
		constexpr auto ComboBoxStyle = 0x30; // FComboBoxStyle
	}

	namespace n_UStreamableRenderAsset {
		constexpr auto ForceMipLevelsToBeResidentTimestamp = 0x40; // double
		constexpr auto NumCinematicMipLevels = 0x48; // int32_t
		constexpr auto StreamingIndex = 0x4c; // int32_t
		constexpr auto CachedCombinedLODBias = 0x50; // int32_t
		constexpr auto NeverStream = 0x54; // char : 1
		constexpr auto bGlobalForceMipLevelsToBeResident = 0x54; // char : 1
		constexpr auto bHasStreamingUpdatePending = 0x54; // char : 1
		constexpr auto bForceMiplevelsToBeResident = 0x54; // char : 1
		constexpr auto bIgnoreStreamingMipBias = 0x54; // char : 1
		constexpr auto bUseCinematicMipLevels = 0x54; // char : 1
	}

	namespace n_UfrmCraftItem_C {
		constexpr auto btnCraft = 0x2f0; // UButton*
	}

	namespace n_UEnvQueryTest_Dot {
		constexpr auto LineA = 0x1f8; // FEnvDirection
		constexpr auto LineB = 0x218; // FEnvDirection
		constexpr auto TestMode = 0x238; // EEnvTestDot
		constexpr auto bAbsoluteValue = 0x239; // bool
	}

	namespace n_ALevelStreamingVolume {
		constexpr auto StreamingLevelNames = 0x258; // TArray<FName>
		constexpr auto bEditorPreVisOnly = 0x268; // char : 1
		constexpr auto bDisabled = 0x268; // char : 1
		constexpr auto StreamingUsage = 0x26c; // EStreamingVolumeUsage
	}

	namespace n_UGizmoCircleComponent {
		constexpr auto Normal = 0x470; // FVector
		constexpr auto Radius = 0x47c; // float
		constexpr auto Thickness = 0x480; // float
		constexpr auto NumSides = 0x484; // int32_t
		constexpr auto bViewAligned = 0x488; // bool
		constexpr auto bOnlyAllowFrontFacingHits = 0x489; // bool
	}

	namespace n_UfrmHotKey_C {
		constexpr auto UberGraphFrame = 0x2d8; // FPointerToUberGraphFrame
		constexpr auto ikKey = 0x2e0; // UInputKeySelector*
	}

	namespace n_UAnimCompress_RemoveEverySecondKey {
		constexpr auto MinKeys = 0x40; // int32_t
		constexpr auto bStartAtSecondKey = 0x44; // char : 1
	}

	namespace n_UEdGraphPin_Deprecated {
		constexpr auto PinName = 0x28; // FString
		constexpr auto PinToolTip = 0x38; // FString
		constexpr auto Direction = 0x48; // EEdGraphPinDirection
		constexpr auto PinType = 0x50; // FEdGraphPinType
		constexpr auto DefaultValue = 0xa8; // FString
		constexpr auto AutogeneratedDefaultValue = 0xb8; // FString
		constexpr auto DefaultObject = 0xc8; // UObject*
		constexpr auto DefaultTextValue = 0xd0; // FText
		constexpr auto LinkedTo = 0xe8; // TArray<UEdGraphPin_Deprecated*>
		constexpr auto SubPins = 0xf8; // TArray<UEdGraphPin_Deprecated*>
		constexpr auto ParentPin = 0x108; // UEdGraphPin_Deprecated*
		constexpr auto ReferencePassThroughConnection = 0x110; // UEdGraphPin_Deprecated*
	}

	namespace n_UGameplayTagsList {
		constexpr auto ConfigFileName = 0x28; // FString
		constexpr auto GameplayTagList = 0x38; // TArray<FGameplayTagTableRow>
	}

	namespace n_URendererSettings {
		constexpr auto bMobileDisableVertexFog = 0x38; // char : 1
		constexpr auto MaxMobileCascades = 0x3c; // int32_t
		constexpr auto MobileMSAASampleCount = 0x40; // EMobileMSAASampleCount
		constexpr auto bMobileAllowDitheredLODTransition = 0x44; // char : 1
		constexpr auto bMobileAllowSoftwareOcclusionCulling = 0x44; // char : 1
		constexpr auto bMobileVirtualTextures = 0x44; // char : 1
		constexpr auto bDiscardUnusedQualityLevels = 0x44; // char : 1
		constexpr auto bOcclusionCulling = 0x44; // char : 1
		constexpr auto MinScreenRadiusForLights = 0x48; // float
		constexpr auto MinScreenRadiusForEarlyZPass = 0x4c; // float
		constexpr auto MinScreenRadiusForCSMdepth = 0x50; // float
		constexpr auto bPrecomputedVisibilityWarning = 0x54; // char : 1
		constexpr auto bTextureStreaming = 0x54; // char : 1
		constexpr auto bUseDXT5NormalMaps = 0x54; // char : 1
		constexpr auto bVirtualTextures = 0x54; // char : 1
		constexpr auto bVirtualTextureEnableAutoImport = 0x54; // char : 1
		constexpr auto bVirtualTexturedLightmaps = 0x54; // char : 1
		constexpr auto VirtualTextureTileSize = 0x58; // uint32_t
		constexpr auto VirtualTextureTileBorderSize = 0x5c; // uint32_t
		constexpr auto VirtualTextureFeedbackFactor = 0x60; // uint32_t
		constexpr auto bVirtualTextureEnableCompressZlib = 0x64; // char : 1
		constexpr auto bVirtualTextureEnableCompressCrunch = 0x64; // char : 1
		constexpr auto bClearCoatEnableSecondNormal = 0x64; // char : 1
		constexpr auto ReflectionCaptureResolution = 0x68; // int32_t
		constexpr auto bReflectionCaptureCompression = 0x6c; // char : 1
		constexpr auto ReflectionEnvironmentLightmapMixBasedOnRoughness = 0x6c; // char : 1
		constexpr auto bForwardShading = 0x6c; // char : 1
		constexpr auto bVertexFoggingForOpaque = 0x6c; // char : 1
		constexpr auto bAllowStaticLighting = 0x6c; // char : 1
		constexpr auto bUseNormalMapsForStaticLighting = 0x6c; // char : 1
		constexpr auto bGenerateMeshDistanceFields = 0x6c; // char : 1
		constexpr auto bEightBitMeshDistanceFields = 0x6c; // char : 1
		constexpr auto bGenerateLandscapeGIData = 0x6d; // char : 1
		constexpr auto bCompressMeshDistanceFields = 0x6d; // char : 1
		constexpr auto TessellationAdaptivePixelsPerTriangle = 0x70; // float
		constexpr auto bSeparateTranslucency = 0x74; // char : 1
		constexpr auto TranslucentSortPolicy = 0x78; // ETranslucentSortPolicy
		constexpr auto TranslucentSortAxis = 0x7c; // FVector
		constexpr auto HMDFixedFoveationLevel = 0x88; // EFixedFoveationLevels
		constexpr auto CustomDepthStencil = 0x89; // ECustomDepthStencil
		constexpr auto bCustomDepthTaaJitter = 0x8c; // char : 1
		constexpr auto bEnableAlphaChannelInPostProcessing = 0x90; // EAlphaChannelMode
		constexpr auto bDefaultFeatureBloom = 0x94; // char : 1
		constexpr auto bDefaultFeatureAmbientOcclusion = 0x94; // char : 1
		constexpr auto bDefaultFeatureAmbientOcclusionStaticFraction = 0x94; // char : 1
		constexpr auto bDefaultFeatureAutoExposure = 0x94; // char : 1
		constexpr auto DefaultFeatureAutoExposure = 0x98; // EAutoExposureMethodUI
		constexpr auto DefaultFeatureAutoExposureBias = 0x9c; // float
		constexpr auto bExtendDefaultLuminanceRangeInAutoExposureSettings = 0xa0; // char : 1
		constexpr auto bUsePreExposure = 0xa0; // char : 1
		constexpr auto bEnablePreExposureOnlyInTheEditor = 0xa0; // char : 1
		constexpr auto bDefaultFeatureMotionBlur = 0xa0; // char : 1
		constexpr auto bDefaultFeatureLensFlare = 0xa0; // char : 1
		constexpr auto bTemporalUpsampling = 0xa0; // char : 1
		constexpr auto bSSGI = 0xa0; // char : 1
		constexpr auto DefaultFeatureAntiAliasing = 0xa4; // EAntiAliasingMethod
		constexpr auto DefaultLightUnits = 0xa5; // ELightUnits
		constexpr auto DefaultBackBufferPixelFormat = 0xa6; // EDefaultBackBufferPixelFormat
		constexpr auto bRenderUnbuiltPreviewShadowsInGame = 0xa8; // char : 1
		constexpr auto bStencilForLODDither = 0xa8; // char : 1
		constexpr auto EarlyZPass = 0xac; // EEarlyZPass
		constexpr auto bEarlyZPassOnlyMaterialMasking = 0xb0; // char : 1
		constexpr auto bDBuffer = 0xb0; // char : 1
		constexpr auto ClearSceneMethod = 0xb4; // EClearSceneOptions
		constexpr auto bBasePassOutputsVelocity = 0xb8; // char : 1
		constexpr auto bVertexDeformationOutputsVelocity = 0xb8; // char : 1
		constexpr auto bSelectiveBasePassOutputs = 0xb8; // char : 1
		constexpr auto bDefaultParticleCutouts = 0xb8; // char : 1
		constexpr auto GPUSimulationTextureSizeX = 0xbc; // int32_t
		constexpr auto GPUSimulationTextureSizeY = 0xc0; // int32_t
		constexpr auto bGlobalClipPlane = 0xc4; // char : 1
		constexpr auto GBufferFormat = 0xc8; // EGBufferFormat
		constexpr auto bUseGPUMorphTargets = 0xcc; // char : 1
		constexpr auto bNvidiaAftermathEnabled = 0xcc; // char : 1
		constexpr auto bMultiView = 0xcc; // char : 1
		constexpr auto bMobilePostProcessing = 0xcc; // char : 1
		constexpr auto bMobileMultiView = 0xcc; // char : 1
		constexpr auto bMobileUseHWsRGBEncoding = 0xcc; // char : 1
		constexpr auto bRoundRobinOcclusion = 0xcc; // char : 1
		constexpr auto bODSCapture = 0xcc; // char : 1
		constexpr auto bMeshStreaming = 0xcd; // char : 1
		constexpr auto WireframeCullThreshold = 0xd0; // float
		constexpr auto bEnableRayTracing = 0xd4; // char : 1
		constexpr auto bEnableRayTracingTextureLOD = 0xd4; // char : 1
		constexpr auto bSupportStationarySkylight = 0xd4; // char : 1
		constexpr auto bSupportLowQualityLightmaps = 0xd4; // char : 1
		constexpr auto bSupportPointLightWholeSceneShadows = 0xd4; // char : 1
		constexpr auto bSupportAtmosphericFog = 0xd4; // char : 1
		constexpr auto bSupportSkyAtmosphere = 0xd4; // char : 1
		constexpr auto bSupportSkyAtmosphereAffectsHeightFog = 0xd4; // char : 1
		constexpr auto bSupportSkinCacheShaders = 0xd5; // char : 1
		constexpr auto DefaultSkinCacheBehavior = 0xd8; // ESkinCacheDefaultBehavior
		constexpr auto SkinCacheSceneMemoryLimitInMB = 0xdc; // float
		constexpr auto bMobileEnableStaticAndCSMShadowReceivers = 0xe0; // char : 1
		constexpr auto bMobileEnableMovableLightCSMShaderCulling = 0xe0; // char : 1
		constexpr auto bMobileAllowDistanceFieldShadows = 0xe0; // char : 1
		constexpr auto bMobileAllowMovableDirectionalLights = 0xe0; // char : 1
		constexpr auto MobileNumDynamicPointLights = 0xe4; // uint32_t
		constexpr auto bMobileDynamicPointLightsUseStaticBranch = 0xe8; // char : 1
		constexpr auto bMobileAllowMovableSpotlights = 0xe8; // char : 1
		constexpr auto bMobileAllowMovableSpotlightShadows = 0xe8; // char : 1
		constexpr auto bSupport16BitBoneIndex = 0xe8; // char : 1
		constexpr auto bGPUSkinLimit2BoneInfluences = 0xe8; // char : 1
		constexpr auto bSupportDepthOnlyIndexBuffers = 0xe8; // char : 1
		constexpr auto bSupportReversedIndexBuffers = 0xe8; // char : 1
		constexpr auto bLPV = 0xe8; // char : 1
		constexpr auto bMobileAmbientOcclusion = 0xe9; // char : 1
		constexpr auto bUseUnlimitedBoneInfluences = 0xe9; // char : 1
		constexpr auto UnlimitedBonInfluencesThreshold = 0xec; // int32_t
		constexpr auto MaxSkinBones = 0xf0; // FPerPlatformInt
		constexpr auto MobilePlanarReflectionMode = 0xf4; // EMobilePlanarReflectionMode
		constexpr auto bMobileSupportsGen4TAA = 0xf8; // char : 1
		constexpr auto bStreamSkeletalMeshLODs = 0xfc; // FPerPlatformBool
		constexpr auto bDiscardSkeletalMeshOptionalLODs = 0xfd; // FPerPlatformBool
		constexpr auto VisualizeCalibrationColorMaterialPath = 0x100; // FSoftObjectPath
		constexpr auto VisualizeCalibrationCustomMaterialPath = 0x118; // FSoftObjectPath
		constexpr auto VisualizeCalibrationGrayscaleMaterialPath = 0x130; // FSoftObjectPath
	}

	namespace n_ATemplateSequenceActor {
		constexpr auto PlaybackSettings = 0x230; // FMovieSceneSequencePlaybackSettings
		constexpr auto SequencePlayer = 0x248; // UTemplateSequencePlayer*
		constexpr auto TemplateSequence = 0x250; // FSoftObjectPath
		constexpr auto BindingOverride = 0x268; // FTemplateSequenceBindingOverrideData
	}

	namespace n_UMaterialExpressionBlackBody {
		constexpr auto Temp = 0x40; // FExpressionInput
	}

	namespace n_UInterpTrackVectorBase {
		constexpr auto VectorTrack = 0x70; // FInterpCurveVector
		constexpr auto CurveTension = 0x88; // float
	}

	namespace n_UABP_weapon_firearms_rifle_akm_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x318; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x398; // FAnimNode_Slot
	}

	namespace n_USoundNodeMixer {
		constexpr auto InputVolume = 0x48; // TArray<float>
	}

	namespace n_Aweapon_steelarms_axe_02_C {
		constexpr auto DamagePoint2 = 0x620; // USceneComponent*
		constexpr auto DamagePoint1 = 0x628; // USceneComponent*
		constexpr auto DamagePoint0 = 0x630; // USceneComponent*
	}

	namespace n_Ascope_col_eotech_C {
		constexpr auto eotech_collimator = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UInterpTrackInstParticleReplay {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_UBTTask_GameplayTaskBase {
		constexpr auto bWaitForGameplayTask = 0x70; // char : 1
	}

	namespace n_AServerStatReplicator {
		constexpr auto bUpdateStatNet = 0x220; // bool
		constexpr auto bOverwriteClientStats = 0x221; // bool
		constexpr auto Channels = 0x224; // uint32_t
		constexpr auto InRate = 0x228; // uint32_t
		constexpr auto OutRate = 0x22c; // uint32_t
		constexpr auto MaxPacketOverhead = 0x234; // uint32_t
		constexpr auto InRateClientMax = 0x238; // uint32_t
		constexpr auto InRateClientMin = 0x23c; // uint32_t
		constexpr auto InRateClientAvg = 0x240; // uint32_t
		constexpr auto InPacketsClientMax = 0x244; // uint32_t
		constexpr auto InPacketsClientMin = 0x248; // uint32_t
		constexpr auto InPacketsClientAvg = 0x24c; // uint32_t
		constexpr auto OutRateClientMax = 0x250; // uint32_t
		constexpr auto OutRateClientMin = 0x254; // uint32_t
		constexpr auto OutRateClientAvg = 0x258; // uint32_t
		constexpr auto OutPacketsClientMax = 0x25c; // uint32_t
		constexpr auto OutPacketsClientMin = 0x260; // uint32_t
		constexpr auto OutPacketsClientAvg = 0x264; // uint32_t
		constexpr auto NetNumClients = 0x268; // uint32_t
		constexpr auto InPackets = 0x26c; // uint32_t
		constexpr auto OutPackets = 0x270; // uint32_t
		constexpr auto InBunches = 0x274; // uint32_t
		constexpr auto OutBunches = 0x278; // uint32_t
		constexpr auto OutLoss = 0x27c; // uint32_t
		constexpr auto InLoss = 0x280; // uint32_t
		constexpr auto VoiceBytesSent = 0x284; // uint32_t
		constexpr auto VoiceBytesRecv = 0x288; // uint32_t
		constexpr auto VoicePacketsSent = 0x28c; // uint32_t
		constexpr auto VoicePacketsRecv = 0x290; // uint32_t
		constexpr auto PercentInVoice = 0x294; // uint32_t
		constexpr auto PercentOutVoice = 0x298; // uint32_t
		constexpr auto NumActorChannels = 0x29c; // uint32_t
		constexpr auto NumConsideredActors = 0x2a0; // uint32_t
		constexpr auto PrioritizedActors = 0x2a4; // uint32_t
		constexpr auto NumRelevantActors = 0x2a8; // uint32_t
		constexpr auto NumRelevantDeletedActors = 0x2ac; // uint32_t
		constexpr auto NumReplicatedActorAttempts = 0x2b0; // uint32_t
		constexpr auto NumReplicatedActors = 0x2b4; // uint32_t
		constexpr auto NumActors = 0x2b8; // uint32_t
		constexpr auto NumNetActors = 0x2bc; // uint32_t
		constexpr auto NumDormantActors = 0x2c0; // uint32_t
		constexpr auto NumInitiallyDormantActors = 0x2c4; // uint32_t
		constexpr auto NumNetGUIDsAckd = 0x2c8; // uint32_t
		constexpr auto NumNetGUIDsPending = 0x2cc; // uint32_t
		constexpr auto NumNetGUIDsUnAckd = 0x2d0; // uint32_t
		constexpr auto ObjPathBytes = 0x2d4; // uint32_t
		constexpr auto NetGUIDOutRate = 0x2d8; // uint32_t
		constexpr auto NetGUIDInRate = 0x2dc; // uint32_t
		constexpr auto NetSaturated = 0x2e0; // uint32_t
	}

	namespace n_UGameplayTaskResource {
		constexpr auto ManualResourceID = 0x28; // int32_t
		constexpr auto AutoResourceID = 0x2c; // int8_t
		constexpr auto bManuallySetID = 0x30; // char : 1
	}

	namespace n_UMaterialExpressionDistanceFieldGradient {
		constexpr auto Position = 0x40; // FExpressionInput
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureSampleParameter {
		constexpr auto ParameterName = 0x90; // FName
		constexpr auto ExpressionGUID = 0x98; // FGuid
		constexpr auto group = 0xa8; // FName
	}

	namespace n_UAudioCaptureComponent {
		constexpr auto JitterLatencyFrames = 0x6c0; // int32_t
	}

	namespace n_UBrainComponent {
		constexpr auto BlackboardComp = 0xb8; // UBlackboardComponent*
		constexpr auto AIOwner = 0xc0; // AAIController*
	}

	namespace n_UMenuAnchor {
		constexpr auto MenuClass = 0x120; // UUserWidget*
		constexpr auto OnGetMenuContentEvent = 0x128; // FDelegate
		constexpr auto OnGetUserMenuContentEvent = 0x138; // FDelegate
		constexpr auto Placement = 0x148; // EMenuPlacement
		constexpr auto bFitInWindow = 0x149; // bool
		constexpr auto ShouldDeferPaintingAfterWindowContent = 0x14a; // bool
		constexpr auto UseApplicationMenuStack = 0x14b; // bool
		constexpr auto OnMenuOpenChanged = 0x150; // FMulticastInlineDelegate
	}

	namespace n_UGizmoConstantFrameAxisSource {
		constexpr auto Origin = 0x30; // FVector
		constexpr auto Direction = 0x3c; // FVector
		constexpr auto TangentX = 0x48; // FVector
		constexpr auto TangentY = 0x54; // FVector
	}

	namespace n_UBTService_DefaultFocus {
		constexpr auto FocusPriority = 0x98; // char
	}

	namespace n_UMaterialExpressionReflectionVectorWS {
		constexpr auto CustomWorldNormal = 0x40; // FExpressionInput
		constexpr auto bNormalizeCustomWorldNormal = 0x54; // char : 1
	}

	namespace n_UMaterialExpressionDepthOfFieldFunction {
		constexpr auto FunctionValue = 0x40; // EDepthOfFieldFunctionValue
		constexpr auto Depth = 0x44; // FExpressionInput
	}

	namespace n_UParticleModuleSize {
		constexpr auto StartSize = 0x30; // FRawDistributionVector
	}

	namespace n_UAITask_MoveTo {
		constexpr auto OnRequestFailed = 0x70; // FMulticastInlineDelegate
		constexpr auto OnMoveFinished = 0x80; // FMulticastInlineDelegate
		constexpr auto MoveRequest = 0x90; // FAIMoveRequest
	}

	namespace n_UNavModifierComponent {
		constexpr auto AreaClass = 0xe0; // UNavArea*
		constexpr auto FailsafeExtent = 0xe8; // FVector
		constexpr auto bIncludeAgentHeight = 0xf4; // char : 1
	}

	namespace n_UTextRenderComponent {
		constexpr auto Text = 0x450; // FText
		constexpr auto TextMaterial = 0x468; // UMaterialInterface*
		constexpr auto Font = 0x470; // UFont*
		constexpr auto HorizontalAlignment = 0x478; // EHorizTextAligment
		constexpr auto VerticalAlignment = 0x479; // EVerticalTextAligment
		constexpr auto TextRenderColor = 0x47c; // FColor
		constexpr auto XScale = 0x480; // float
		constexpr auto YScale = 0x484; // float
		constexpr auto WorldSize = 0x488; // float
		constexpr auto InvDefaultSize = 0x48c; // float
		constexpr auto HorizSpacingAdjust = 0x490; // float
		constexpr auto VertSpacingAdjust = 0x494; // float
		constexpr auto bAlwaysRenderAsText = 0x498; // char : 1
	}

	namespace n_ARadialForceActor {
		constexpr auto ForceComponent = 0x220; // URadialForceComponent*
	}

	namespace n_ULevelSequenceBurnIn {
		constexpr auto FrameInformation = 0x260; // FLevelSequencePlayerSnapshot
		constexpr auto LevelSequenceActor = 0x318; // ALevelSequenceActor*
	}

	namespace n_UMovieSceneSlomoSection {
		constexpr auto FloatCurve = 0xe8; // FMovieSceneFloatChannel
	}

	namespace n_UBTDecorator_ConeCheck {
		constexpr auto ConeHalfAngle = 0x68; // float
		constexpr auto ConeOrigin = 0x70; // FBlackboardKeySelector
		constexpr auto ConeDirection = 0x98; // FBlackboardKeySelector
		constexpr auto Observed = 0xc0; // FBlackboardKeySelector
	}

	namespace n_UDatasmithCineCameraActorTemplate {
		constexpr auto LookatTrackingSettings = 0x30; // FDatasmithCameraLookatTrackingSettingsTemplate
	}

	namespace n_UBTDecorator_CompareBBEntries {
		constexpr auto Operator = 0x68; // EBlackBoardEntryComparison
		constexpr auto BlackboardKeyA = 0x70; // FBlackboardKeySelector
		constexpr auto BlackboardKeyB = 0x98; // FBlackboardKeySelector
	}

	namespace n_ASFPSProjectile {
		constexpr auto Ballistics_AirDensity = 0x2f8; // float
		constexpr auto bAddDebugInfoToLog = 0x2fc; // bool
		constexpr auto WhooshAudioComponentClass = 0x300; // ASFPSMovingAmbientSound*
	}

	namespace n_UParticleModuleVectorFieldScale {
		constexpr auto VectorFieldScale = 0x30; // UDistributionFloat*
		constexpr auto VectorFieldScaleRaw = 0x38; // FRawDistributionFloat
	}

	namespace n_UEditableTextWidgetStyle {
		constexpr auto EditableTextStyle = 0x30; // FEditableTextStyle
	}

	namespace n_UCompressedImageSequenceProtocol {
		constexpr auto CompressionQuality = 0xd8; // int32_t
	}

	namespace n_UMovieSceneFadeSection {
		constexpr auto FloatCurve = 0xe8; // FMovieSceneFloatChannel
		constexpr auto FadeColor = 0x188; // FLinearColor
		constexpr auto bFadeAudio = 0x198; // char : 1
	}

	namespace n_UParticleModuleSourceMovement {
		constexpr auto SourceMovementScale = 0x30; // FRawDistributionVector
	}

	namespace n_USoundSubmixWithParentBase {
		constexpr auto ParentSubmix = 0x38; // USoundSubmixBase*
	}

	namespace n_UAnimBlueprintGeneratedClass {
		constexpr auto BakedStateMachines = 0x330; // TArray<FBakedAnimationStateMachine>
		constexpr auto TargetSkeleton = 0x340; // USkeleton*
		constexpr auto AnimNotifies = 0x348; // TArray<FAnimNotifyEvent>
		constexpr auto OrderedSavedPoseIndicesMap = 0x358; // TMap<FName, FCachedPoseIndices>
		constexpr auto SyncGroupNames = 0x428; // TArray<FName>
		constexpr auto EvaluateGraphExposedInputs = 0x438; // TArray<FExposedValueHandler>
		constexpr auto GraphAssetPlayerInformation = 0x448; // TMap<FName, FGraphAssetPlayerInformation>
		constexpr auto GraphBlendOptions = 0x498; // TMap<FName, FAnimGraphBlendOptions>
		constexpr auto PropertyAccessLibrary = 0x4e8; // FPropertyAccessLibrary
	}

	namespace n_UEditableStaticMeshAdapter {
		constexpr auto StaticMesh = 0x28; // UStaticMesh*
		constexpr auto OriginalStaticMesh = 0x30; // UStaticMesh*
		constexpr auto StaticMeshLODIndex = 0x38; // int32_t
	}

	namespace n_UMaterialExpressionSetMaterialAttributes {
		constexpr auto Inputs = 0x40; // TArray<FExpressionInput>
		constexpr auto AttributeSetTypes = 0x50; // TArray<FGuid>
	}

	namespace n_UMaterialExpressionSphereMask {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto Radius = 0x68; // FExpressionInput
		constexpr auto Hardness = 0x7c; // FExpressionInput
		constexpr auto AttenuationRadius = 0x90; // float
		constexpr auto HardnessPercent = 0x94; // float
	}

	namespace n_UButtonSlot {
		constexpr auto Padding = 0x38; // FMargin
		constexpr auto HorizontalAlignment = 0x48; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x49; // EVerticalAlignment
	}

	namespace n_AStaticMeshActor {
		constexpr auto StaticMeshComponent = 0x220; // UStaticMeshComponent*
		constexpr auto bStaticMeshReplicateMovement = 0x228; // bool
		constexpr auto NavigationGeometryGatheringMode = 0x229; // ENavDataGatheringMode
	}

	namespace n_UMovieSceneAudioSection {
		constexpr auto Sound = 0xe8; // USoundBase*
		constexpr auto StartFrameOffset = 0xf0; // FFrameNumber
		constexpr auto StartOffset = 0xf4; // float
		constexpr auto AudioStartTime = 0xf8; // float
		constexpr auto AudioDilationFactor = 0xfc; // float
		constexpr auto AudioVolume = 0x100; // float
		constexpr auto SoundVolume = 0x108; // FMovieSceneFloatChannel
		constexpr auto PitchMultiplier = 0x1a8; // FMovieSceneFloatChannel
		constexpr auto AttachActorData = 0x248; // FMovieSceneActorReferenceData
		constexpr auto bLooping = 0x2f8; // bool
		constexpr auto bSuppressSubtitles = 0x2f9; // bool
		constexpr auto bOverrideAttenuation = 0x2fa; // bool
		constexpr auto AttenuationSettings = 0x300; // USoundAttenuation*
		constexpr auto OnQueueSubtitles = 0x308; // FDelegate
		constexpr auto OnAudioFinished = 0x318; // FMulticastInlineDelegate
		constexpr auto OnAudioPlaybackPercent = 0x328; // FMulticastInlineDelegate
	}

	namespace n_UPlanarReflectionComponent {
		constexpr auto PreviewBox = 0x2b0; // UBoxComponent*
		constexpr auto NormalDistortionStrength = 0x2b8; // float
		constexpr auto PrefilterRoughness = 0x2bc; // float
		constexpr auto PrefilterRoughnessDistance = 0x2c0; // float
		constexpr auto ScreenPercentage = 0x2c4; // int32_t
		constexpr auto ExtraFOV = 0x2c8; // float
		constexpr auto DistanceFromPlaneFadeStart = 0x2cc; // float
		constexpr auto DistanceFromPlaneFadeEnd = 0x2d0; // float
		constexpr auto DistanceFromPlaneFadeoutStart = 0x2d4; // float
		constexpr auto DistanceFromPlaneFadeoutEnd = 0x2d8; // float
		constexpr auto AngleFromPlaneFadeStart = 0x2dc; // float
		constexpr auto AngleFromPlaneFadeEnd = 0x2e0; // float
		constexpr auto bShowPreviewPlane = 0x2e4; // bool
		constexpr auto bRenderSceneTwoSided = 0x2e5; // bool
	}

	namespace n_USFPSGameplayEventManager {
		constexpr auto bDynamicTimeScale = 0x34; // bool
		constexpr auto EventPointClass = 0x40; // ASFPSGameplayEventPoint*
		constexpr auto EventClass = 0x48; // USFPSGameplayEvent*
		constexpr auto Events = 0x60; // TArray<USFPSGameplayEvent*>
		constexpr auto EventTimeMin = 0x70; // int32_t
		constexpr auto EventTimeMax = 0x74; // int32_t
		constexpr auto MaximumEvents = 0x78; // int32_t
		constexpr auto EventActivationRadiusSquared = 0x7c; // float
		constexpr auto EventActivationTime = 0x80; // float
		constexpr auto EventMaxActiveTime = 0x84; // float
		constexpr auto MonstersMin = 0x88; // int32_t
		constexpr auto MonstersMax = 0x8c; // int32_t
		constexpr auto bEnableBaseFiltering = 0x90; // bool
		constexpr auto FilterRadius = 0x94; // float
		constexpr auto ClientInfoType = 0x98; // ESFPSGameplayEventInfoType
		constexpr auto ActorClass = 0xa0; // UObject*
		constexpr auto RewardContainerClass = 0xa8; // ASFPSLootBox*
		constexpr auto RewardSet = 0xb0; // USFPSItemSetStructSet*
	}

	namespace n_UMaterialExpression {
		constexpr auto Material = 0x28; // UMaterial*
		constexpr auto Function = 0x30; // UMaterialFunction*
		constexpr auto bIsParameterExpression = 0x38; // char : 1
	}

	namespace n_UMonoWaveTableSynthPreset {
		constexpr auto PresetName = 0x28; // FString
		constexpr auto bLockKeyframesToGridBool = 0x38; // char : 1
		constexpr auto LockKeyframesToGrid = 0x3c; // int32_t
		constexpr auto WaveTableResolution = 0x40; // int32_t
		constexpr auto WaveTable = 0x48; // TArray<FRuntimeFloatCurve>
		constexpr auto bNormalizeWaveTables = 0x58; // char : 1
	}

	namespace n_UPerlinNoiseCameraShakePattern {
		constexpr auto LocationAmplitudeMultiplier = 0x38; // float
		constexpr auto LocationFrequencyMultiplier = 0x3c; // float
		constexpr auto X = 0x40; // FPerlinNoiseShaker
		constexpr auto Y = 0x48; // FPerlinNoiseShaker
		constexpr auto Z = 0x50; // FPerlinNoiseShaker
		constexpr auto RotationAmplitudeMultiplier = 0x58; // float
		constexpr auto RotationFrequencyMultiplier = 0x5c; // float
		constexpr auto Pitch = 0x60; // FPerlinNoiseShaker
		constexpr auto Yaw = 0x68; // FPerlinNoiseShaker
		constexpr auto Roll = 0x70; // FPerlinNoiseShaker
		constexpr auto FOV = 0x78; // FPerlinNoiseShaker
	}

	namespace n_UMaterialExpressionMultiply {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UMaterialExpressionBlendMaterialAttributes {
		constexpr auto A = 0x40; // FMaterialAttributesInput
		constexpr auto B = 0x58; // FMaterialAttributesInput
		constexpr auto Alpha = 0x70; // FExpressionInput
		constexpr auto PixelAttributeBlendType = 0x84; // EMaterialAttributeBlend
		constexpr auto VertexAttributeBlendType = 0x85; // EMaterialAttributeBlend
	}

	namespace n_UNavigationPath {
		constexpr auto PathUpdatedNotifier = 0x28; // FMulticastInlineDelegate
		constexpr auto PathPoints = 0x38; // TArray<FVector>
		constexpr auto RecalculateOnInvalidation = 0x48; // ENavigationOptionFlag
	}

	namespace n_UARComponent {
		constexpr auto NativeID = 0x1f8; // FGuid
		constexpr auto bUseDefaultReplication = 0x238; // bool
		constexpr auto DefaultMeshMaterial = 0x240; // UMaterialInterface*
		constexpr auto DefaultWireframeMeshMaterial = 0x248; // UMaterialInterface*
		constexpr auto MRMeshComponent = 0x250; // UMRMeshComponent*
		constexpr auto MyTrackedGeometry = 0x258; // UARTrackedGeometry*
	}

	namespace n_UInterpTrackAnimControl {
		constexpr auto SlotName = 0x90; // FName
		constexpr auto AnimSeqs = 0x98; // TArray<FAnimControlTrackKey>
		constexpr auto bSkipAnimNotifiers = 0xa8; // char : 1
	}

	namespace n_UMaterialExpressionRayTracingQualitySwitch {
		constexpr auto Normal = 0x40; // FExpressionInput
		constexpr auto RayTraced = 0x54; // FExpressionInput
	}

	namespace n_UParticleModuleCameraOffset {
		constexpr auto CameraOffset = 0x30; // FRawDistributionFloat
		constexpr auto bSpawnTimeOnly = 0x60; // char : 1
		constexpr auto UpdateMethod = 0x64; // EParticleCameraOffsetUpdateMethod
	}

	namespace n_UPropertyValue {
		constexpr auto Properties = 0x88; // TArray<TFieldPath<FProperty>>
		constexpr auto PropertyIndices = 0x98; // TArray<int32_t>
		constexpr auto CapturedPropSegments = 0xa8; // TArray<FCapturedPropSegment>
		constexpr auto FullDisplayString = 0xb8; // FString
		constexpr auto PropertySetterName = 0xc8; // FName
		constexpr auto PropertySetterParameterDefaults = 0xd0; // TMap<FString, FString>
		constexpr auto bHasRecordedData = 0x120; // bool
		constexpr auto LeafPropertyClass = 0x128; // UObject*
		constexpr auto ValueBytes = 0x138; // TArray<char>
		constexpr auto PropCategory = 0x148; // EPropertyValueCategory
	}

	namespace n_UMovieSceneSpawnTrack {
		constexpr auto Sections = 0x90; // TArray<UMovieSceneSection*>
		constexpr auto ObjectGuid = 0xa0; // FGuid
	}

	namespace n_UMaterialExpressionDDX {
		constexpr auto Value = 0x40; // FExpressionInput
	}

	namespace n_UDataDrivenConsoleVariableSettings {
		constexpr auto CVarsArray = 0x50; // TArray<FDataDrivenConsoleVariable>
	}

	namespace n_APartyBeaconHost {
		constexpr auto State = 0x248; // UPartyBeaconState*
		constexpr auto bLogoutOnSessionTimeout = 0x2b0; // bool
		constexpr auto SessionTimeoutSecs = 0x2b4; // float
		constexpr auto TravelSessionTimeoutSecs = 0x2b8; // float
	}

	namespace n_ASFPSShell {
		constexpr auto Creator = 0x238; // ASFPSBaseCharacter*
		constexpr auto ShellType = 0x240; // ESFPSShellType
		constexpr auto HitCue = 0x248; // USoundCue*
	}

	namespace n_UTexture {
		constexpr auto LightingGuid = 0x68; // FGuid
		constexpr auto LODBias = 0x78; // int32_t
		constexpr auto CompressionSettings = 0x7c; // TextureCompressionSettings
		constexpr auto Filter = 0x7d; // TextureFilter
		constexpr auto MipLoadOptions = 0x7e; // ETextureMipLoadOptions
		constexpr auto LODGroup = 0x7f; // TextureGroup
		constexpr auto Downscale = 0x80; // FPerPlatformFloat
		constexpr auto DownscaleOptions = 0x84; // ETextureDownscaleOptions
		constexpr auto sRGB = 0x85; // char : 1
		constexpr auto bNoTiling = 0x85; // char : 1
		constexpr auto VirtualTextureStreaming = 0x85; // char : 1
		constexpr auto CompressionYCoCg = 0x85; // char : 1
		constexpr auto bNotOfflineProcessed = 0x85; // char : 1
		constexpr auto bAsyncResourceReleaseHasBeenStarted = 0x85; // char : 1
		constexpr auto AssetUserData = 0x88; // TArray<UAssetUserData*>
	}

	namespace n_UResonanceAudioSpatializationSourceSettings {
		constexpr auto SpatializationMethod = 0x28; // ERaSpatializationMethod
		constexpr auto Pattern = 0x2c; // float
		constexpr auto Sharpness = 0x30; // float
		constexpr auto bToggleVisualization = 0x34; // bool
		constexpr auto Scale = 0x38; // float
		constexpr auto Spread = 0x3c; // float
		constexpr auto Rolloff = 0x40; // ERaDistanceRolloffModel
		constexpr auto MinDistance = 0x44; // float
		constexpr auto MaxDistance = 0x48; // float
	}

	namespace n_UBasicOverlays {
		constexpr auto Overlays = 0x28; // TArray<FOverlayItem>
	}

	namespace n_UMovieScene3DConstraintTrack {
		constexpr auto ConstraintSections = 0x90; // TArray<UMovieSceneSection*>
	}

	namespace n_UWidgetInteractionComponent {
		constexpr auto OnHoveredWidgetChanged = 0x1f8; // FMulticastInlineDelegate
		constexpr auto VirtualUserIndex = 0x218; // int32_t
		constexpr auto PointerIndex = 0x21c; // int32_t
		constexpr auto TraceChannel = 0x220; // ECollisionChannel
		constexpr auto InteractionDistance = 0x224; // float
		constexpr auto InteractionSource = 0x228; // EWidgetInteractionSource
		constexpr auto bEnableHitTesting = 0x229; // bool
		constexpr auto bShowDebug = 0x22a; // bool
		constexpr auto DebugSphereLineThickness = 0x22c; // float
		constexpr auto DebugLineThickness = 0x230; // float
		constexpr auto DebugColor = 0x234; // FLinearColor
		constexpr auto CustomHitResult = 0x2c0; // FHitResult
		constexpr auto LocalHitLocation = 0x348; // FVector2D
		constexpr auto LastLocalHitLocation = 0x350; // FVector2D
		constexpr auto HoveredWidgetComponent = 0x358; // UWidgetComponent*
		constexpr auto LastHitResult = 0x360; // FHitResult
		constexpr auto bIsHoveredWidgetInteractable = 0x3e8; // bool
		constexpr auto bIsHoveredWidgetFocusable = 0x3e9; // bool
		constexpr auto bIsHoveredWidgetHitTestVisible = 0x3ea; // bool
	}

	namespace n_ACameraShakeSourceActor {
		constexpr auto CameraShakeSourceComponent = 0x220; // UCameraShakeSourceComponent*
	}

	namespace n_URichTextBlockImageDecorator {
		constexpr auto ImageSet = 0x28; // UDataTable*
	}

	namespace n_USourceEffectPhaserPreset {
		constexpr auto Settings = 0xa0; // FSourceEffectPhaserSettings
	}

	namespace n_ASFPSAmbienceSpot {
		constexpr auto BoxComponents = 0x230; // TArray<USFPSSoundBoxCopm*>
		constexpr auto Chance = 0x258; // float
		constexpr auto RainIntensivity = 0x25c; // float
		constexpr auto SoundCues = 0x260; // TArray<FSoundCues>
		constexpr auto SepDelay = 0x270; // float
		constexpr auto UseAltDelay = 0x274; // bool
		constexpr auto FPlayBackDelay = 0x278; // FFloatMinMax
		constexpr auto SoundDensity = 0x280; // float
		constexpr auto AudioComponents = 0x288; // TArray<UAudioComponent*>
		constexpr auto FChanceToPlaySmall = 0x298; // float
	}

	namespace n_UARCandidateImage {
		constexpr auto CandidateTexture = 0x30; // UTexture2D*
		constexpr auto FriendlyName = 0x38; // FString
		constexpr auto Width = 0x48; // float
		constexpr auto Height = 0x4c; // float
		constexpr auto Orientation = 0x50; // EARCandidateImageOrientation
	}

	namespace n_UBaseBrushTool {
		constexpr auto BrushProperties = 0xc0; // UBrushBaseProperties*
		constexpr auto bInBrushStroke = 0xc8; // bool
		constexpr auto WorldToLocalScale = 0xcc; // float
		constexpr auto LastBrushStamp = 0xd0; // FBrushStampData
		constexpr auto PropertyClass = 0x188; // TSoftClassPtr<UObject>
		constexpr auto BrushStampIndicator = 0x1b0; // UBrushStampIndicator*
	}

	namespace n_UPrimitiveComponent {
		constexpr auto MinDrawDistance = 0x200; // float
		constexpr auto LDMaxDrawDistance = 0x204; // float
		constexpr auto CachedMaxDrawDistance = 0x208; // float
		constexpr auto DepthPriorityGroup = 0x20c; // ESceneDepthPriorityGroup
		constexpr auto ViewOwnerDepthPriorityGroup = 0x20d; // ESceneDepthPriorityGroup
		constexpr auto IndirectLightingCacheQuality = 0x20e; // EIndirectLightingCacheQuality
		constexpr auto LightmapType = 0x20f; // ELightmapType
		constexpr auto bUseMaxLODAsImposter = 0x210; // char : 1
		constexpr auto bBatchImpostersAsInstances = 0x210; // char : 1
		constexpr auto bNeverDistanceCull = 0x210; // char : 1
		constexpr auto bAlwaysCreatePhysicsState = 0x210; // char : 1
		constexpr auto bGenerateOverlapEvents = 0x211; // char : 1
		constexpr auto bMultiBodyOverlap = 0x211; // char : 1
		constexpr auto bTraceComplexOnMove = 0x211; // char : 1
		constexpr auto bReturnMaterialOnMove = 0x211; // char : 1
		constexpr auto bUseViewOwnerDepthPriorityGroup = 0x211; // char : 1
		constexpr auto bAllowCullDistanceVolume = 0x211; // char : 1
		constexpr auto bHasMotionBlurVelocityMeshes = 0x211; // char : 1
		constexpr auto bVisibleInReflectionCaptures = 0x211; // char : 1
		constexpr auto bVisibleInRealTimeSkyCaptures = 0x212; // char : 1
		constexpr auto bVisibleInRayTracing = 0x212; // char : 1
		constexpr auto bRenderInMainPass = 0x212; // char : 1
		constexpr auto bRenderInDepthPass = 0x212; // char : 1
		constexpr auto bReceivesDecals = 0x212; // char : 1
		constexpr auto bOwnerNoSee = 0x212; // char : 1
		constexpr auto bOnlyOwnerSee = 0x212; // char : 1
		constexpr auto bTreatAsBackgroundForOcclusion = 0x212; // char : 1
		constexpr auto bUseAsOccluder = 0x213; // char : 1
		constexpr auto bSelectable = 0x213; // char : 1
		constexpr auto bForceMipStreaming = 0x213; // char : 1
		constexpr auto bHasPerInstanceHitProxies = 0x213; // char : 1
		constexpr auto CastShadow = 0x213; // char : 1
		constexpr auto bAffectDynamicIndirectLighting = 0x213; // char : 1
		constexpr auto bAffectDistanceFieldLighting = 0x213; // char : 1
		constexpr auto bCastDynamicShadow = 0x213; // char : 1
		constexpr auto bCastStaticShadow = 0x214; // char : 1
		constexpr auto bCastVolumetricTranslucentShadow = 0x214; // char : 1
		constexpr auto bCastContactShadow = 0x214; // char : 1
		constexpr auto bSelfShadowOnly = 0x214; // char : 1
		constexpr auto bCastFarShadow = 0x214; // char : 1
		constexpr auto bCastInsetShadow = 0x214; // char : 1
		constexpr auto bCastCinematicShadow = 0x214; // char : 1
		constexpr auto bCastHiddenShadow = 0x214; // char : 1
		constexpr auto bCastShadowAsTwoSided = 0x215; // char : 1
		constexpr auto bLightAsIfStatic = 0x215; // char : 1
		constexpr auto bLightAttachmentsAsGroup = 0x215; // char : 1
		constexpr auto bExcludeFromLightAttachmentGroup = 0x215; // char : 1
		constexpr auto bReceiveMobileCSMShadows = 0x215; // char : 1
		constexpr auto bSingleSampleShadowFromStationaryLights = 0x215; // char : 1
		constexpr auto bIgnoreRadialImpulse = 0x215; // char : 1
		constexpr auto bIgnoreRadialForce = 0x215; // char : 1
		constexpr auto bApplyImpulseOnDamage = 0x216; // char : 1
		constexpr auto bReplicatePhysicsToAutonomousProxy = 0x216; // char : 1
		constexpr auto bFillCollisionUnderneathForNavmesh = 0x216; // char : 1
		constexpr auto AlwaysLoadOnClient = 0x216; // char : 1
		constexpr auto AlwaysLoadOnServer = 0x216; // char : 1
		constexpr auto bUseEditorCompositing = 0x216; // char : 1
		constexpr auto bRenderCustomDepth = 0x216; // char : 1
		constexpr auto bVisibleInSceneCaptureOnly = 0x216; // char : 1
		constexpr auto bHiddenInSceneCapture = 0x217; // char : 1
		constexpr auto bHasCustomNavigableGeometry = 0x218; // EHasCustomNavigableGeometry
		constexpr auto CanCharacterStepUpOn = 0x21a; // ECanBeCharacterBase
		constexpr auto LightingChannels = 0x21b; // FLightingChannels
		constexpr auto CustomDepthStencilWriteMask = 0x21c; // ERendererStencilMask
		constexpr auto CustomDepthStencilValue = 0x220; // int32_t
		constexpr auto CustomPrimitiveData = 0x228; // FCustomPrimitiveData
		constexpr auto CustomPrimitiveDataInternal = 0x238; // FCustomPrimitiveData
		constexpr auto TranslucencySortPriority = 0x250; // int32_t
		constexpr auto TranslucencySortDistanceOffset = 0x254; // float
		constexpr auto VisibilityId = 0x258; // int32_t
		constexpr auto RuntimeVirtualTextures = 0x260; // TArray<URuntimeVirtualTexture*>
		constexpr auto VirtualTextureLodBias = 0x270; // int8_t
		constexpr auto VirtualTextureCullMips = 0x271; // int8_t
		constexpr auto VirtualTextureMinCoverage = 0x272; // int8_t
		constexpr auto VirtualTextureRenderPassType = 0x273; // ERuntimeVirtualTextureMainPassType
		constexpr auto LpvBiasMultiplier = 0x278; // float
		constexpr auto BoundsScale = 0x284; // float
		constexpr auto MoveIgnoreActors = 0x298; // TArray<AActor*>
		constexpr auto MoveIgnoreComponents = 0x2a8; // TArray<UPrimitiveComponent*>
		constexpr auto BodyInstance = 0x2c8; // FBodyInstance
		constexpr auto OnComponentHit = 0x420; // FMulticastSparseDelegate
		constexpr auto OnComponentBeginOverlap = 0x421; // FMulticastSparseDelegate
		constexpr auto OnComponentEndOverlap = 0x422; // FMulticastSparseDelegate
		constexpr auto OnComponentWake = 0x423; // FMulticastSparseDelegate
		constexpr auto OnComponentSleep = 0x424; // FMulticastSparseDelegate
		constexpr auto OnBeginCursorOver = 0x426; // FMulticastSparseDelegate
		constexpr auto OnEndCursorOver = 0x427; // FMulticastSparseDelegate
		constexpr auto OnClicked = 0x428; // FMulticastSparseDelegate
		constexpr auto OnReleased = 0x429; // FMulticastSparseDelegate
		constexpr auto OnInputTouchBegin = 0x42a; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnd = 0x42b; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnter = 0x42c; // FMulticastSparseDelegate
		constexpr auto OnInputTouchLeave = 0x42d; // FMulticastSparseDelegate
		constexpr auto LODParentPrimitive = 0x448; // UPrimitiveComponent*
	}

	namespace n_UModularSynthPresetBank {
		constexpr auto Presets = 0x28; // TArray<FModularSynthPresetBankEntry>
	}

	namespace n_UMovieSceneSection {
		constexpr auto EvalOptions = 0x50; // FMovieSceneSectionEvalOptions
		constexpr auto Easing = 0x58; // FMovieSceneEasingSettings
		constexpr auto SectionRange = 0x90; // FMovieSceneFrameRange
		constexpr auto PreRollFrames = 0xa0; // FFrameNumber
		constexpr auto PostRollFrames = 0xa4; // FFrameNumber
		constexpr auto RowIndex = 0xa8; // int32_t
		constexpr auto OverlapPriority = 0xac; // int32_t
		constexpr auto bIsActive = 0xb0; // char : 1
		constexpr auto bIsLocked = 0xb0; // char : 1
		constexpr auto StartTime = 0xb4; // float
		constexpr auto EndTime = 0xb8; // float
		constexpr auto PrerollTime = 0xbc; // float
		constexpr auto PostrollTime = 0xc0; // float
		constexpr auto bIsInfinite = 0xc4; // char : 1
		constexpr auto bSupportsInfiniteRange = 0xc8; // bool
		constexpr auto BlendType = 0xc9; // FOptionalMovieSceneBlendType
	}

	namespace n_USFPSACSnapComponent {
		constexpr auto Snaps = 0x470; // FSFPSACSnaps
	}

	namespace n_UParticleModuleSizeMultiplyLife {
		constexpr auto LifeMultiplier = 0x30; // FRawDistributionVector
		constexpr auto MultiplyX = 0x78; // char : 1
		constexpr auto MultiplyY = 0x78; // char : 1
		constexpr auto MultiplyZ = 0x78; // char : 1
	}

	namespace n_UDamageType {
		constexpr auto bCausedByWorld = 0x28; // char : 1
		constexpr auto bScaleMomentumByMass = 0x28; // char : 1
		constexpr auto bRadialDamageVelChange = 0x28; // char : 1
		constexpr auto DamageImpulse = 0x2c; // float
		constexpr auto DestructibleImpulse = 0x30; // float
		constexpr auto DestructibleDamageSpreadScale = 0x34; // float
		constexpr auto DamageFalloff = 0x38; // float
	}

	namespace n_UVirtualTextureBuilder {
		constexpr auto Texture = 0x28; // UVirtualTexture2D*
		constexpr auto BuildHash = 0x30; // uint64_t
	}

	namespace n_UProgressBar {
		constexpr auto WidgetStyle = 0x108; // FProgressBarStyle
		constexpr auto Style = 0x2a8; // USlateWidgetStyleAsset*
		constexpr auto BackgroundImage = 0x2b0; // USlateBrushAsset*
		constexpr auto FillImage = 0x2b8; // USlateBrushAsset*
		constexpr auto MarqueeImage = 0x2c0; // USlateBrushAsset*
		constexpr auto percent = 0x2c8; // float
		constexpr auto BarFillType = 0x2cc; // EProgressBarFillType
		constexpr auto bIsMarquee = 0x2cd; // bool
		constexpr auto BorderPadding = 0x2d0; // FVector2D
		constexpr auto PercentDelegate = 0x2d8; // FDelegate
		constexpr auto FillColorAndOpacity = 0x2e8; // FLinearColor
		constexpr auto FillColorAndOpacityDelegate = 0x2f8; // FDelegate
	}

	namespace n_UMovieSceneBoolSection {
		constexpr auto DefaultValue = 0xe8; // bool
		constexpr auto BoolCurve = 0xf0; // FMovieSceneBoolChannel
	}

	namespace n_UConsole {
		constexpr auto ConsoleTargetPlayer = 0x38; // ULocalPlayer*
		constexpr auto DefaultTexture_Black = 0x40; // UTexture2D*
		constexpr auto DefaultTexture_White = 0x48; // UTexture2D*
		constexpr auto HistoryBuffer = 0x68; // TArray<FString>
	}

	namespace n_UPartyBeaconState {
		constexpr auto SessionName = 0x28; // FName
		constexpr auto NumConsumedReservations = 0x30; // int32_t
		constexpr auto MaxReservations = 0x34; // int32_t
		constexpr auto NumTeams = 0x38; // int32_t
		constexpr auto NumPlayersPerTeam = 0x3c; // int32_t
		constexpr auto TeamAssignmentMethod = 0x40; // FName
		constexpr auto ReservedHostTeamNum = 0x48; // int32_t
		constexpr auto ForceTeamNum = 0x4c; // int32_t
		constexpr auto bRestrictCrossConsole = 0x50; // bool
		constexpr auto PlatformCrossplayRestrictions = 0x58; // TArray<FString>
		constexpr auto PlatformTypeMapping = 0x68; // TArray<FPartyBeaconCrossplayPlatformMapping>
		constexpr auto bEnableRemovalRequests = 0x78; // bool
		constexpr auto Reservations = 0x80; // TArray<FPartyReservation>
	}

	namespace n_APawn {
		constexpr auto bUseControllerRotationPitch = 0x228; // char : 1
		constexpr auto bUseControllerRotationYaw = 0x228; // char : 1
		constexpr auto bUseControllerRotationRoll = 0x228; // char : 1
		constexpr auto bCanAffectNavigationGeneration = 0x228; // char : 1
		constexpr auto BaseEyeHeight = 0x22c; // float
		constexpr auto AutoPossessPlayer = 0x230; // EAutoReceiveInput
		constexpr auto AutoPossessAI = 0x231; // EAutoPossessAI
		constexpr auto RemoteViewPitch = 0x232; // char
		constexpr auto AIControllerClass = 0x238; // AController*
		constexpr auto PlayerState = 0x240; // APlayerState*
		constexpr auto LastHitBy = 0x250; // AController*
		constexpr auto Controller = 0x258; // AController*
		constexpr auto ControlInputVector = 0x264; // FVector
		constexpr auto LastControlInputVector = 0x270; // FVector
	}

	namespace n_APaperSpriteActor {
		constexpr auto RenderComponent = 0x220; // UPaperSpriteComponent*
	}

	namespace n_UChaosDestructionListener {
		constexpr auto bIsCollisionEventListeningEnabled = 0x1f8; // char : 1
		constexpr auto bIsBreakingEventListeningEnabled = 0x1f8; // char : 1
		constexpr auto bIsTrailingEventListeningEnabled = 0x1f8; // char : 1
		constexpr auto CollisionEventRequestSettings = 0x1fc; // FChaosCollisionEventRequestSettings
		constexpr auto BreakingEventRequestSettings = 0x214; // FChaosBreakingEventRequestSettings
		constexpr auto TrailingEventRequestSettings = 0x22c; // FChaosTrailingEventRequestSettings
		constexpr auto ChaosSolverActors = 0x248; // TSet<AChaosSolverActor*>
		constexpr auto GeometryCollectionActors = 0x298; // TSet<AGeometryCollectionActor*>
		constexpr auto OnCollisionEvents = 0x2e8; // FMulticastInlineDelegate
		constexpr auto OnBreakingEvents = 0x2f8; // FMulticastInlineDelegate
		constexpr auto OnTrailingEvents = 0x308; // FMulticastInlineDelegate
	}

	namespace n_UTextureLODSettings {
		constexpr auto TextureLODGroups = 0x28; // TArray<FTextureLODGroup>
	}

	namespace n_UPreviewMeshCollection {
		constexpr auto Skeleton = 0x38; // USkeleton*
		constexpr auto SkeletalMeshes = 0x40; // TArray<FPreviewMeshCollectionEntry>
	}

	namespace n_UBTTask_Wait {
		constexpr auto WaitTime = 0x70; // float
		constexpr auto RandomDeviation = 0x74; // float
	}

	namespace n_UNavigationInvokerComponent {
		constexpr auto TileGenerationRadius = 0xb0; // float
		constexpr auto TileRemovalRadius = 0xb4; // float
	}

	namespace n_UParticleModuleLocation_Seeded {
		constexpr auto RandomSeedInfo = 0x80; // FParticleRandomSeedInfo
	}

	namespace n_ABM_Floor_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UMaterialExpressionLogarithm2 {
		constexpr auto X = 0x40; // FExpressionInput
	}

	namespace n_USFPSAI_TChangeAiming {
		constexpr auto Aiming = 0x70; // bool
	}

	namespace n_UBodySetup {
		constexpr auto AggGeom = 0x48; // FKAggregateGeom
		constexpr auto bAlwaysFullAnimWeight = 0xa0; // char : 1
		constexpr auto bConsiderForBounds = 0xa0; // char : 1
		constexpr auto bMeshCollideAll = 0xa0; // char : 1
		constexpr auto bDoubleSidedGeometry = 0xa0; // char : 1
		constexpr auto bGenerateNonMirroredCollision = 0xa0; // char : 1
		constexpr auto bSharedCookedData = 0xa0; // char : 1
		constexpr auto bGenerateMirroredCollision = 0xa0; // char : 1
		constexpr auto bSupportUVsAndFaceRemap = 0xa0; // char : 1
		constexpr auto PhysMaterial = 0xa8; // UPhysicalMaterial*
		constexpr auto WalkableSlopeOverride = 0xb0; // FWalkableSlopeOverride
		constexpr auto DefaultInstance = 0x128; // FBodyInstance
		constexpr auto BuildScale3D = 0x288; // FVector
	}

	namespace n_UTextureRenderTarget2D {
		constexpr auto SizeX = 0x180; // int32_t
		constexpr auto SizeY = 0x184; // int32_t
		constexpr auto ClearColor = 0x188; // FLinearColor
		constexpr auto AddressX = 0x198; // TextureAddress
		constexpr auto AddressY = 0x199; // TextureAddress
		constexpr auto bForceLinearGamma = 0x19a; // char : 1
		constexpr auto bHDR = 0x19a; // char : 1
		constexpr auto bGPUSharedFlag = 0x19a; // char : 1
		constexpr auto RenderTargetFormat = 0x19b; // ETextureRenderTargetFormat
		constexpr auto bAutoGenerateMips = 0x19c; // char : 1
		constexpr auto MipsSamplerFilter = 0x19d; // TextureFilter
		constexpr auto MipsAddressU = 0x19e; // TextureAddress
		constexpr auto MipsAddressV = 0x19f; // TextureAddress
		constexpr auto OverrideFormat = 0x1a0; // EPixelFormat
	}

	namespace n_USourceEffectRingModulationPreset {
		constexpr auto Settings = 0xb0; // FSourceEffectRingModulationSettings
	}

	namespace n_UParticleModuleAttractorPoint {
		constexpr auto Position = 0x30; // FRawDistributionVector
		constexpr auto Range = 0x78; // FRawDistributionFloat
		constexpr auto Strength = 0xa8; // FRawDistributionFloat
		constexpr auto StrengthByDistance = 0xd8; // char : 1
		constexpr auto bAffectBaseVelocity = 0xd8; // char : 1
		constexpr auto bOverrideVelocity = 0xd8; // char : 1
		constexpr auto bUseWorldSpacePosition = 0xd8; // char : 1
		constexpr auto Positive_X = 0xd8; // char : 1
		constexpr auto Positive_Y = 0xd8; // char : 1
		constexpr auto Positive_Z = 0xd8; // char : 1
		constexpr auto Negative_X = 0xd8; // char : 1
		constexpr auto Negative_Y = 0xd9; // char : 1
		constexpr auto Negative_Z = 0xd9; // char : 1
	}

	namespace n_ULevelActorContainer {
		constexpr auto Actors = 0x28; // TArray<AActor*>
	}

	namespace n_UAnimSharingTransitionInstance {
		constexpr auto FromComponent = 0x2b8; // TWeakObjectPtr<USkeletalMeshComponent>
		constexpr auto ToComponent = 0x2c0; // TWeakObjectPtr<USkeletalMeshComponent>
		constexpr auto BlendTime = 0x2c8; // float
		constexpr auto bBlendBool = 0x2cc; // bool
	}

	namespace n_USFPSAICharacterSet {
		constexpr auto Characters = 0x28; // TArray<ASFPSAICharacter*>
	}

	namespace n_UDatasmithSceneComponentTemplate {
		constexpr auto RelativeTransform = 0x30; // FTransform
		constexpr auto Mobility = 0x60; // EComponentMobility
		constexpr auto AttachParent = 0x68; // TSoftObjectPtr<USceneComponent>
		constexpr auto bVisible = 0x90; // bool
		constexpr auto Tags = 0x98; // TSet<FName>
	}

	namespace n_ASFPSProjectileGrenade {
		constexpr auto Damage = 0x428; // float
		constexpr auto bCanDamageBase = 0x42c; // bool
	}

	namespace n_UfrmGroundItem_C {
		constexpr auto UberGraphFrame = 0x280; // FPointerToUberGraphFrame
		constexpr auto btnItem0 = 0x288; // UButton*
		constexpr auto btnItem1 = 0x290; // UButton*
		constexpr auto btnItem2 = 0x298; // UButton*
	}

	namespace n_Aweapon_firearms_supp_rgm40_C {
		constexpr auto Shell = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
	}

	namespace n_UAnimSequence {
		constexpr auto NumFrames = 0xa8; // int32_t
		constexpr auto TrackToSkeletonMapTable = 0xb0; // TArray<FTrackToSkeletonMap>
		constexpr auto BoneCompressionSettings = 0xd0; // UAnimBoneCompressionSettings*
		constexpr auto CurveCompressionSettings = 0xd8; // UAnimCurveCompressionSettings*
		constexpr auto AdditiveAnimType = 0x150; // EAdditiveAnimationType
		constexpr auto RefPoseType = 0x151; // EAdditiveBasePoseType
		constexpr auto RefPoseSeq = 0x158; // UAnimSequence*
		constexpr auto RefFrameIndex = 0x160; // int32_t
		constexpr auto RetargetSource = 0x164; // FName
		constexpr auto RetargetSourceAssetReferencePose = 0x170; // TArray<FTransform>
		constexpr auto Interpolation = 0x180; // EAnimInterpolationType
		constexpr auto bEnableRootMotion = 0x181; // bool
		constexpr auto RootMotionRootLock = 0x182; // ERootMotionRootLock
		constexpr auto bForceRootLock = 0x183; // bool
		constexpr auto bUseNormalizedRootMotionScale = 0x184; // bool
		constexpr auto bRootMotionSettingsCopiedFromMontage = 0x185; // bool
		constexpr auto AuthoredSyncMarkers = 0x188; // TArray<FAnimSyncMarker>
		constexpr auto BakedPerBoneCustomAttributeData = 0x1b0; // TArray<FBakedCustomAttributePerBoneData>
	}

	namespace n_UInheritableComponentHandler {
		constexpr auto Records = 0x28; // TArray<FComponentOverrideRecord>
		constexpr auto UnnecessaryComponents = 0x38; // TArray<UActorComponent*>
	}

	namespace n_UDirectionalLightComponent {
		constexpr auto ShadowCascadeBiasDistribution = 0x328; // float
		constexpr auto bEnableLightShaftOcclusion = 0x32c; // char : 1
		constexpr auto OcclusionMaskDarkness = 0x330; // float
		constexpr auto OcclusionDepthRange = 0x334; // float
		constexpr auto LightShaftOverrideDirection = 0x338; // FVector
		constexpr auto WholeSceneDynamicShadowRadius = 0x344; // float
		constexpr auto DynamicShadowDistanceMovableLight = 0x348; // float
		constexpr auto DynamicShadowDistanceStationaryLight = 0x34c; // float
		constexpr auto DynamicShadowCascades = 0x350; // int32_t
		constexpr auto CascadeDistributionExponent = 0x354; // float
		constexpr auto CascadeTransitionFraction = 0x358; // float
		constexpr auto ShadowDistanceFadeoutFraction = 0x35c; // float
		constexpr auto bUseInsetShadowsForMovableObjects = 0x360; // char : 1
		constexpr auto FarShadowCascadeCount = 0x364; // int32_t
		constexpr auto FarShadowDistance = 0x368; // float
		constexpr auto DistanceFieldShadowDistance = 0x36c; // float
		constexpr auto LightSourceAngle = 0x370; // float
		constexpr auto LightSourceSoftAngle = 0x374; // float
		constexpr auto ShadowSourceAngleFactor = 0x378; // float
		constexpr auto TraceDistance = 0x37c; // float
		constexpr auto bUsedAsAtmosphereSunLight = 0x380; // char : 1
		constexpr auto AtmosphereSunLightIndex = 0x384; // int32_t
		constexpr auto AtmosphereSunDiskColorScale = 0x388; // FLinearColor
		constexpr auto bPerPixelAtmosphereTransmittance = 0x398; // char : 1
		constexpr auto bCastShadowsOnClouds = 0x398; // char : 1
		constexpr auto bCastShadowsOnAtmosphere = 0x398; // char : 1
		constexpr auto bCastCloudShadows = 0x398; // char : 1
		constexpr auto CloudShadowStrength = 0x39c; // float
		constexpr auto CloudShadowOnAtmosphereStrength = 0x3a0; // float
		constexpr auto CloudShadowOnSurfaceStrength = 0x3a4; // float
		constexpr auto CloudShadowDepthBias = 0x3a8; // float
		constexpr auto CloudShadowExtent = 0x3ac; // float
		constexpr auto CloudShadowMapResolutionScale = 0x3b0; // float
		constexpr auto CloudShadowRaySampleCountScale = 0x3b4; // float
		constexpr auto CloudScatteredLuminanceScale = 0x3b8; // FLinearColor
		constexpr auto LightmassSettings = 0x3c8; // FLightmassDirectionalLightSettings
		constexpr auto bCastModulatedShadows = 0x3d8; // char : 1
		constexpr auto ModulatedShadowColor = 0x3dc; // FColor
		constexpr auto ShadowAmount = 0x3e0; // float
	}

	namespace n_Aweapon_steelarms_knife_02_C {
		constexpr auto DamagePoint2 = 0x620; // USceneComponent*
		constexpr auto DamagePoint1 = 0x628; // USceneComponent*
		constexpr auto DamagePoint0 = 0x630; // USceneComponent*
	}

	namespace n_USoundSubmix {
		constexpr auto bMuteWhenBackgrounded = 0x40; // char : 1
		constexpr auto SubmixEffectChain = 0x48; // TArray<USoundEffectSubmixPreset*>
		constexpr auto AmbisonicsPluginSettings = 0x58; // USoundfieldEncodingSettingsBase*
		constexpr auto EnvelopeFollowerAttackTime = 0x60; // int32_t
		constexpr auto EnvelopeFollowerReleaseTime = 0x64; // int32_t
		constexpr auto GainMode = 0x68; // EGainParamMode
		constexpr auto OutputVolume = 0x6c; // float
		constexpr auto WetLevel = 0x70; // float
		constexpr auto DryLevel = 0x74; // float
		constexpr auto OutputVolumeModulation = 0x78; // FSoundModulationDestinationSettings
		constexpr auto WetLevelModulation = 0x88; // FSoundModulationDestinationSettings
		constexpr auto DryLevelModulation = 0x98; // FSoundModulationDestinationSettings
		constexpr auto OnSubmixRecordedFileDone = 0xa8; // FMulticastInlineDelegate
	}

	namespace n_USFPSAI_TSwitchMoveMode {
		constexpr auto MoveMode = 0x70; // ESFPSAIMoveMode
	}

	namespace n_UParticleModuleRotationOverLifetime {
		constexpr auto RotationOverLife = 0x30; // FRawDistributionFloat
		constexpr auto Scale = 0x60; // char : 1
	}

	namespace n_UAsyncTask_LoadXRDeviceVisComponent {
		constexpr auto OnModelLoaded = 0x30; // FMulticastInlineDelegate
		constexpr auto OnLoadFailure = 0x40; // FMulticastInlineDelegate
		constexpr auto SpawnedComponent = 0x58; // UPrimitiveComponent*
	}

	namespace n_UMovieSceneAudioTrack {
		constexpr auto AudioSections = 0x98; // TArray<UMovieSceneSection*>
	}

	namespace n_UParticleModuleLocationBoneSocket {
		constexpr auto SourceType = 0x30; // ELocationBoneSocketSource
		constexpr auto UniversalOffset = 0x34; // FVector
		constexpr auto SourceLocations = 0x40; // TArray<FLocationBoneSocketInfo>
		constexpr auto SelectionMethod = 0x50; // ELocationBoneSocketSelectionMethod
		constexpr auto bUpdatePositionEachFrame = 0x54; // char : 1
		constexpr auto bOrientMeshEmitters = 0x54; // char : 1
		constexpr auto bInheritBoneVelocity = 0x54; // char : 1
		constexpr auto InheritVelocityScale = 0x58; // float
		constexpr auto SkelMeshActorParamName = 0x5c; // FName
		constexpr auto NumPreSelectedIndices = 0x64; // int32_t
	}

	namespace n_UPawnAction {
		constexpr auto ChildAction = 0x28; // UPawnAction*
		constexpr auto ParentAction = 0x30; // UPawnAction*
		constexpr auto OwnerComponent = 0x38; // UPawnActionsComponent*
		constexpr auto Instigator = 0x40; // UObject*
		constexpr auto BrainComp = 0x48; // UBrainComponent*
		constexpr auto bAllowNewSameClassInstance = 0x80; // char : 1
		constexpr auto bReplaceActiveSameClassInstance = 0x80; // char : 1
		constexpr auto bShouldPauseMovement = 0x80; // char : 1
		constexpr auto bAlwaysNotifyOnFinished = 0x80; // char : 1
	}

	namespace n_AGameModeBase {
		constexpr auto OptionsString = 0x220; // FString
		constexpr auto GameSessionClass = 0x230; // AGameSession*
		constexpr auto GameStateClass = 0x238; // AGameStateBase*
		constexpr auto PlayerControllerClass = 0x240; // APlayerController*
		constexpr auto PlayerStateClass = 0x248; // APlayerState*
		constexpr auto HUDClass = 0x250; // AHUD*
		constexpr auto DefaultPawnClass = 0x258; // APawn*
		constexpr auto SpectatorClass = 0x260; // ASpectatorPawn*
		constexpr auto ReplaySpectatorPlayerControllerClass = 0x268; // APlayerController*
		constexpr auto ServerStatReplicatorClass = 0x270; // AServerStatReplicator*
		constexpr auto GameSession = 0x278; // AGameSession*
		constexpr auto GameState = 0x280; // AGameStateBase*
		constexpr auto ServerStatReplicator = 0x288; // AServerStatReplicator*
		constexpr auto DefaultPlayerName = 0x290; // FText
		constexpr auto bUseSeamlessTravel = 0x2a8; // char : 1
		constexpr auto bStartPlayersAsSpectators = 0x2a8; // char : 1
		constexpr auto bPauseable = 0x2a8; // char : 1
	}

	namespace n_UMaterialExpressionSkyAtmosphereLightDiskLuminance {
		constexpr auto LightIndex = 0x40; // int32_t
	}

	namespace n_UDatasmithAssetUserData {
		constexpr auto MetaData = 0x28; // TMap<FName, FString>
	}

	namespace n_UABP_weapon_firearms_gun_fiveseven_C {
		constexpr auto UberGraphFrame = 0x2e0; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x2e8; // FAnimNode_Root
		constexpr auto AnimGraphNode_Slot = 0x318; // FAnimNode_Slot
		constexpr auto AnimGraphNode_TransitionResult_6 = 0x360; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_5 = 0x388; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_4 = 0x3b0; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_3 = 0x3d8; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult_2 = 0x400; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_TransitionResult = 0x428; // FAnimNode_TransitionResult
		constexpr auto AnimGraphNode_SequencePlayer_3 = 0x450; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_3 = 0x4d0; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer_2 = 0x500; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult_2 = 0x580; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_SequencePlayer = 0x5b0; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_StateResult = 0x630; // FAnimNode_StateResult
		constexpr auto AnimGraphNode_StateMachine = 0x660; // FAnimNode_StateMachine
	}

	namespace n_UMaterialExpressionFontSampleParameter {
		constexpr auto ParameterName = 0x50; // FName
		constexpr auto ExpressionGUID = 0x58; // FGuid
		constexpr auto group = 0x68; // FName
	}

	namespace n_UMovieScene3DConstraintSection {
		constexpr auto ConstraintId = 0xe8; // FGuid
		constexpr auto ConstraintBindingID = 0xf8; // FMovieSceneObjectBindingID
	}

	namespace n_UMaterialExpressionAtmosphericFogColor {
		constexpr auto WorldPosition = 0x40; // FExpressionInput
	}

	namespace n_UDataAsset {
		constexpr auto NativeClass = 0x28; // UDataAsset*
	}

	namespace n_UInterpTrackParticleReplay {
		constexpr auto TrackKeys = 0x70; // TArray<FParticleReplayTrackKey>
	}

	namespace n_UMaterialExpressionMin {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto ConstA = 0x68; // float
		constexpr auto ConstB = 0x6c; // float
	}

	namespace n_UGizmoLocalVec2ParameterSource {
		constexpr auto Value = 0x48; // FVector2D
		constexpr auto LastChange = 0x50; // FGizmoVec2ParameterChange
	}

	namespace n_UAIPerceptionSystem {
		constexpr auto Senses = 0x88; // TArray<UAISense*>
		constexpr auto PerceptionAgingRate = 0x98; // float
	}

	namespace n_UMaterialExpressionGetMaterialAttributes {
		constexpr auto MaterialAttributes = 0x40; // FMaterialAttributesInput
		constexpr auto AttributeGetTypes = 0x58; // TArray<FGuid>
	}

	namespace n_UEditableGameplayTagQueryExpression_AnyExprMatch {
		constexpr auto Expressions = 0x28; // TArray<UEditableGameplayTagQueryExpression*>
	}

	namespace n_ULocalizedOverlays {
		constexpr auto DefaultOverlays = 0x28; // UBasicOverlays*
		constexpr auto LocaleToOverlaysMap = 0x30; // TMap<FString, UBasicOverlays*>
	}

	namespace n_USFPSACMission {
		constexpr auto RewardPoints = 0x250; // TArray<USceneComponent*>
		constexpr auto RewardLootBoxes = 0x260; // TArray<ASFPSLootBox*>
		constexpr auto RewardLootBoxClass = 0x278; // ASFPSLootBox*
		constexpr auto Variants = 0x280; // TArray<FSFPSMissionVariant>
		constexpr auto WaitTime = 0x294; // int32_t
		constexpr auto CompletedTime = 0x298; // int32_t
	}

	namespace n_UParticleModuleLocationPrimitiveTriangle {
		constexpr auto StartOffset = 0x30; // FRawDistributionVector
		constexpr auto Height = 0x78; // FRawDistributionFloat
		constexpr auto Angle = 0xa8; // FRawDistributionFloat
		constexpr auto Thickness = 0xd8; // FRawDistributionFloat
	}

	namespace n_UParticleModuleVectorFieldGlobal {
		constexpr auto bOverrideGlobalVectorFieldTightness = 0x30; // char : 1
		constexpr auto GlobalVectorFieldScale = 0x34; // float
		constexpr auto GlobalVectorFieldTightness = 0x38; // float
	}

	namespace n_UCameraShakeBase {
		constexpr auto bSingleInstance = 0x28; // bool
		constexpr auto ShakeScale = 0x2c; // float
		constexpr auto RootShakePattern = 0x30; // UCameraShakePattern*
		constexpr auto CameraManager = 0x38; // APlayerCameraManager*
	}

	namespace n_UBTService_RunEQS {
		constexpr auto EQSRequest = 0x98; // FEQSParametrizedQueryExecutionRequest
	}

	namespace n_UWindDirectionalSourceComponent {
		constexpr auto Strength = 0x1f8; // float
		constexpr auto Speed = 0x1fc; // float
		constexpr auto MinGustAmount = 0x200; // float
		constexpr auto MaxGustAmount = 0x204; // float
		constexpr auto Radius = 0x208; // float
		constexpr auto bPointWind = 0x20c; // char : 1
	}

	namespace n_UInterpGroupInst {
		constexpr auto group = 0x28; // UInterpGroup*
		constexpr auto GroupActor = 0x30; // AActor*
		constexpr auto TrackInst = 0x38; // TArray<UInterpTrackInst*>
	}

	namespace n_UEnvQueryTest_Distance {
		constexpr auto TestMode = 0x1f8; // EEnvTestDistance
		constexpr auto DistanceTo = 0x200; // UEnvQueryContext*
	}

	namespace n_UNavigationSystemModuleConfig {
		constexpr auto bStrictlyStatic = 0x50; // char : 1
		constexpr auto bCreateOnClient = 0x50; // char : 1
		constexpr auto bAutoSpawnMissingNavData = 0x50; // char : 1
		constexpr auto bSpawnNavDataInNavBoundsLevel = 0x50; // char : 1
	}

	namespace n_UMovieSceneCaptureProtocolBase {
		constexpr auto State = 0x50; // EMovieSceneCaptureProtocolState
	}

	namespace n_UDistributionFloatUniformCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveVector2D
	}

	namespace n_UWidgetAnimationPlayCallbackProxy {
		constexpr auto Finished = 0x28; // FMulticastInlineDelegate
	}

	namespace n_UPhysicsCollisionHandler {
		constexpr auto ImpactThreshold = 0x28; // float
		constexpr auto ImpactReFireDelay = 0x2c; // float
		constexpr auto DefaultImpactSound = 0x30; // USoundBase*
		constexpr auto LastImpactSoundTime = 0x38; // float
	}

	namespace n_URuntimeVirtualTextureComponent {
		constexpr auto BoundsAlignActor = 0x1f8; // TSoftObjectPtr<AActor>
		constexpr auto bSetBoundsButton = 0x220; // bool
		constexpr auto bSnapBoundsToLandscape = 0x221; // bool
		constexpr auto VirtualTexture = 0x228; // URuntimeVirtualTexture*
		constexpr auto bEnableScalability = 0x230; // bool
		constexpr auto ScalabilityGroup = 0x234; // uint32_t
		constexpr auto bHidePrimitives = 0x238; // bool
		constexpr auto StreamingTexture = 0x240; // UVirtualTextureBuilder*
		constexpr auto StreamLowMips = 0x248; // int32_t
		constexpr auto bBuildStreamingMipsButton = 0x24c; // bool
		constexpr auto bEnableCompressCrunch = 0x24d; // bool
		constexpr auto bUseStreamingLowMipsInEditor = 0x24e; // bool
		constexpr auto bBuildDebugStreamingMips = 0x24f; // bool
	}

	namespace n_USourceEffectEQPreset {
		constexpr auto Settings = 0xa0; // FSourceEffectEQSettings
	}

	namespace n_USoundClass {
		constexpr auto Properties = 0x28; // FSoundClassProperties
		constexpr auto ChildClasses = 0xa0; // TArray<USoundClass*>
		constexpr auto PassiveSoundMixModifiers = 0xb0; // TArray<FPassiveSoundMixModifier>
		constexpr auto ParentClass = 0xc0; // USoundClass*
	}

	namespace n_UFieldSystemMetaDataProcessingResolution {
		constexpr auto ResolutionType = 0xb0; // EFieldResolutionType
	}

	namespace n_AM_RadioTrap_01_C {
		constexpr auto GrenadeCollision = 0x358; // UBoxComponent*
		constexpr auto ACTripwireTrap = 0x360; // USFPSACTripwireTrap*
		constexpr auto SFPSACBaseCollision1 = 0x368; // USFPSACBaseCollision*
	}

	namespace n_UAnimBoneCompressionSettings {
		constexpr auto Codecs = 0x28; // TArray<UAnimBoneCompressionCodec*>
	}

	namespace n_ASFPSSoundTrigger {
		constexpr auto InRoomValue = 0x228; // float
		constexpr auto FGameInstance = 0x230; // USFPSGameInstance*
	}

	namespace n_UNodeMappingContainer {
		constexpr auto SourceItems = 0x28; // TMap<FName, FNodeItem>
		constexpr auto TargetItems = 0x78; // TMap<FName, FNodeItem>
		constexpr auto SourceToTarget = 0xc8; // TMap<FName, FName>
		constexpr auto SourceAsset = 0x118; // TSoftObjectPtr<UObject>
		constexpr auto TargetAsset = 0x140; // TSoftObjectPtr<UObject>
	}

	namespace n_ULevelSequence {
		constexpr auto MovieScene = 0x68; // UMovieScene*
		constexpr auto ObjectReferences = 0x70; // FLevelSequenceObjectReferenceMap
		constexpr auto BindingReferences = 0xc0; // FLevelSequenceBindingReferences
		constexpr auto PossessedObjects = 0x160; // TMap<FString, FLevelSequenceObject>
		constexpr auto DirectorClass = 0x1b0; // UObject*
		constexpr auto AssetUserData = 0x1b8; // TArray<UAssetUserData*>
	}

	namespace n_UAISenseEvent_Damage {
		constexpr auto Event = 0x28; // FAIDamageEvent
	}

	namespace n_At_Other_C {
		constexpr auto Trace = 0x310; // UBoxComponent*
		constexpr auto Mesh = 0x318; // UStaticMeshComponent*
	}

	namespace n_UCurveVector {
		constexpr auto FloatCurves = 0x30; // FRichCurve [0x3]
	}

	namespace n_UMaterialExpressionSpriteTextureSampler {
		constexpr auto bSampleAdditionalTextures = 0x80; // bool
		constexpr auto AdditionalSlotIndex = 0x84; // int32_t
		constexpr auto SlotDisplayName = 0x88; // FText
	}

	namespace n_UControlPointMeshComponent {
		constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x4e0; // float
	}

	namespace n_UMaterialExpressionConstant4Vector {
		constexpr auto Constant = 0x40; // FLinearColor
	}

	namespace n_UMaterialExpressionDistance {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_UARImageComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARImageUpdatePayload
	}

	namespace n_UARTexture {
		constexpr auto TextureType = 0x178; // EARTextureType
		constexpr auto Timestamp = 0x17c; // float
		constexpr auto ExternalTextureGuid = 0x180; // FGuid
		constexpr auto Size = 0x190; // FVector2D
	}

	namespace n_USoundNodeModulContOuterParam {
		constexpr auto PitchModulationParams = 0x48; // UModulatorContOuterParams*
		constexpr auto VolumeModulationParams = 0x50; // UModulatorContOuterParams*
	}

	namespace n_UInterpTrackInstMove {
		constexpr auto ResetLocation = 0x28; // FVector
		constexpr auto ResetRotation = 0x34; // FRotator
	}

	namespace n_UEngine {
		constexpr auto TinyFont = 0x30; // UFont*
		constexpr auto TinyFontName = 0x38; // FSoftObjectPath
		constexpr auto SmallFont = 0x50; // UFont*
		constexpr auto SmallFontName = 0x58; // FSoftObjectPath
		constexpr auto MediumFont = 0x70; // UFont*
		constexpr auto MediumFontName = 0x78; // FSoftObjectPath
		constexpr auto LargeFont = 0x90; // UFont*
		constexpr auto LargeFontName = 0x98; // FSoftObjectPath
		constexpr auto SubtitleFont = 0xb0; // UFont*
		constexpr auto SubtitleFontName = 0xb8; // FSoftObjectPath
		constexpr auto AdditionalFonts = 0xd0; // TArray<UFont*>
		constexpr auto AdditionalFontNames = 0xe0; // TArray<FString>
		constexpr auto ConsoleClass = 0xf0; // UConsole*
		constexpr auto ConsoleClassName = 0xf8; // FSoftClassPath
		constexpr auto GameViewportClientClass = 0x110; // UGameViewportClient*
		constexpr auto GameViewportClientClassName = 0x118; // FSoftClassPath
		constexpr auto LocalPlayerClass = 0x130; // ULocalPlayer*
		constexpr auto LocalPlayerClassName = 0x138; // FSoftClassPath
		constexpr auto WorldSettingsClass = 0x150; // AWorldSettings*
		constexpr auto WorldSettingsClassName = 0x158; // FSoftClassPath
		constexpr auto NavigationSystemClassName = 0x170; // FSoftClassPath
		constexpr auto NavigationSystemClass = 0x188; // UNavigationSystemBase*
		constexpr auto NavigationSystemConfigClassName = 0x190; // FSoftClassPath
		constexpr auto NavigationSystemConfigClass = 0x1a8; // UNavigationSystemConfig*
		constexpr auto AvoidanceManagerClassName = 0x1b0; // FSoftClassPath
		constexpr auto AvoidanceManagerClass = 0x1c8; // UAvoidanceManager*
		constexpr auto AIControllerClassName = 0x1d0; // FSoftClassPath
		constexpr auto PhysicsCollisionHandlerClass = 0x1e8; // UPhysicsCollisionHandler*
		constexpr auto PhysicsCollisionHandlerClassName = 0x1f0; // FSoftClassPath
		constexpr auto GameUserSettingsClassName = 0x208; // FSoftClassPath
		constexpr auto GameUserSettingsClass = 0x220; // UGameUserSettings*
		constexpr auto GameUserSettings = 0x228; // UGameUserSettings*
		constexpr auto LevelScriptActorClass = 0x230; // ALevelScriptActor*
		constexpr auto LevelScriptActorClassName = 0x238; // FSoftClassPath
		constexpr auto DefaultBlueprintBaseClassName = 0x250; // FSoftClassPath
		constexpr auto GameSingletonClassName = 0x268; // FSoftClassPath
		constexpr auto GameSingleton = 0x280; // UObject*
		constexpr auto AssetManagerClassName = 0x288; // FSoftClassPath
		constexpr auto AssetManager = 0x2a0; // UAssetManager*
		constexpr auto DefaultTexture = 0x2a8; // UTexture2D*
		constexpr auto DefaultTextureName = 0x2b0; // FSoftObjectPath
		constexpr auto DefaultDiffuseTexture = 0x2c8; // UTexture*
		constexpr auto DefaultDiffuseTextureName = 0x2d0; // FSoftObjectPath
		constexpr auto DefaultBSPVertexTexture = 0x2e8; // UTexture2D*
		constexpr auto DefaultBSPVertexTextureName = 0x2f0; // FSoftObjectPath
		constexpr auto HighFrequencyNoiseTexture = 0x308; // UTexture2D*
		constexpr auto HighFrequencyNoiseTextureName = 0x310; // FSoftObjectPath
		constexpr auto DefaultBokehTexture = 0x328; // UTexture2D*
		constexpr auto DefaultBokehTextureName = 0x330; // FSoftObjectPath
		constexpr auto DefaultBloomKernelTexture = 0x348; // UTexture2D*
		constexpr auto DefaultBloomKernelTextureName = 0x350; // FSoftObjectPath
		constexpr auto WireframeMaterial = 0x368; // UMaterial*
		constexpr auto WireframeMaterialName = 0x370; // FString
		constexpr auto DebugMeshMaterial = 0x380; // UMaterial*
		constexpr auto DebugMeshMaterialName = 0x388; // FSoftObjectPath
		constexpr auto EmissiveMeshMaterial = 0x3a0; // UMaterial*
		constexpr auto EmissiveMeshMaterialName = 0x3a8; // FSoftObjectPath
		constexpr auto LevelColorationLitMaterial = 0x3c0; // UMaterial*
		constexpr auto LevelColorationLitMaterialName = 0x3c8; // FString
		constexpr auto LevelColorationUnlitMaterial = 0x3d8; // UMaterial*
		constexpr auto LevelColorationUnlitMaterialName = 0x3e0; // FString
		constexpr auto LightingTexelDensityMaterial = 0x3f0; // UMaterial*
		constexpr auto LightingTexelDensityName = 0x3f8; // FString
		constexpr auto ShadedLevelColorationLitMaterial = 0x408; // UMaterial*
		constexpr auto ShadedLevelColorationLitMaterialName = 0x410; // FString
		constexpr auto ShadedLevelColorationUnlitMaterial = 0x420; // UMaterial*
		constexpr auto ShadedLevelColorationUnlitMaterialName = 0x428; // FString
		constexpr auto RemoveSurfaceMaterial = 0x438; // UMaterial*
		constexpr auto RemoveSurfaceMaterialName = 0x440; // FSoftObjectPath
		constexpr auto VertexColorMaterial = 0x458; // UMaterial*
		constexpr auto VertexColorMaterialName = 0x460; // FString
		constexpr auto VertexColorViewModeMaterial_ColorOnly = 0x470; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_ColorOnly = 0x478; // FString
		constexpr auto VertexColorViewModeMaterial_AlphaAsColor = 0x488; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_AlphaAsColor = 0x490; // FString
		constexpr auto VertexColorViewModeMaterial_RedOnly = 0x4a0; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_RedOnly = 0x4a8; // FString
		constexpr auto VertexColorViewModeMaterial_GreenOnly = 0x4b8; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_GreenOnly = 0x4c0; // FString
		constexpr auto VertexColorViewModeMaterial_BlueOnly = 0x4d0; // UMaterial*
		constexpr auto VertexColorViewModeMaterialName_BlueOnly = 0x4d8; // FString
		constexpr auto DebugEditorMaterialName = 0x4e8; // FSoftObjectPath
		constexpr auto ConstraintLimitMaterial = 0x500; // UMaterial*
		constexpr auto ConstraintLimitMaterialX = 0x508; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialXAxis = 0x510; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialY = 0x518; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialYAxis = 0x520; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialZ = 0x528; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialZAxis = 0x530; // UMaterialInstanceDynamic*
		constexpr auto ConstraintLimitMaterialPrismatic = 0x538; // UMaterialInstanceDynamic*
		constexpr auto InvalidLightmapSettingsMaterial = 0x540; // UMaterial*
		constexpr auto InvalidLightmapSettingsMaterialName = 0x548; // FSoftObjectPath
		constexpr auto PreviewShadowsIndicatorMaterial = 0x560; // UMaterial*
		constexpr auto PreviewShadowsIndicatorMaterialName = 0x568; // FSoftObjectPath
		constexpr auto ArrowMaterial = 0x580; // UMaterial*
		constexpr auto ArrowMaterialYellow = 0x588; // UMaterialInstanceDynamic*
		constexpr auto ArrowMaterialName = 0x590; // FSoftObjectPath
		constexpr auto LightingOnlyBrightness = 0x5a8; // FLinearColor
		constexpr auto ShaderComplexityColors = 0x5b8; // TArray<FLinearColor>
		constexpr auto QuadComplexityColors = 0x5c8; // TArray<FLinearColor>
		constexpr auto LightComplexityColors = 0x5d8; // TArray<FLinearColor>
		constexpr auto StationaryLightOverlapColors = 0x5e8; // TArray<FLinearColor>
		constexpr auto LODColorationColors = 0x5f8; // TArray<FLinearColor>
		constexpr auto HLODColorationColors = 0x608; // TArray<FLinearColor>
		constexpr auto StreamingAccuracyColors = 0x618; // TArray<FLinearColor>
		constexpr auto MaxPixelShaderAdditiveComplexityCount = 0x628; // float
		constexpr auto MaxES3PixelShaderAdditiveComplexityCount = 0x62c; // float
		constexpr auto MinLightMapDensity = 0x630; // float
		constexpr auto IdealLightMapDensity = 0x634; // float
		constexpr auto MaxLightMapDensity = 0x638; // float
		constexpr auto bRenderLightMapDensityGrayscale = 0x63c; // char : 1
		constexpr auto RenderLightMapDensityGrayscaleScale = 0x640; // float
		constexpr auto RenderLightMapDensityColorScale = 0x644; // float
		constexpr auto LightMapDensityVertexMappedColor = 0x648; // FLinearColor
		constexpr auto LightMapDensitySelectedColor = 0x658; // FLinearColor
		constexpr auto StatColorMappings = 0x668; // TArray<FStatColorMapping>
		constexpr auto DefaultPhysMaterial = 0x678; // UPhysicalMaterial*
		constexpr auto DefaultPhysMaterialName = 0x680; // FSoftObjectPath
		constexpr auto ActiveGameNameRedirects = 0x698; // TArray<FGameNameRedirect>
		constexpr auto ActiveClassRedirects = 0x6a8; // TArray<FClassRedirect>
		constexpr auto ActivePluginRedirects = 0x6b8; // TArray<FPluginRedirect>
		constexpr auto ActiveStructRedirects = 0x6c8; // TArray<FStructRedirect>
		constexpr auto PreIntegratedSkinBRDFTexture = 0x6d8; // UTexture2D*
		constexpr auto PreIntegratedSkinBRDFTextureName = 0x6e0; // FSoftObjectPath
		constexpr auto BlueNoiseTexture = 0x6f8; // UTexture2D*
		constexpr auto BlueNoiseTextureName = 0x700; // FSoftObjectPath
		constexpr auto MiniFontTexture = 0x718; // UTexture2D*
		constexpr auto MiniFontTextureName = 0x720; // FSoftObjectPath
		constexpr auto WeightMapPlaceholderTexture = 0x738; // UTexture*
		constexpr auto WeightMapPlaceholderTextureName = 0x740; // FSoftObjectPath
		constexpr auto LightMapDensityTexture = 0x758; // UTexture2D*
		constexpr auto LightMapDensityTextureName = 0x760; // FSoftObjectPath
		constexpr auto GameViewport = 0x780; // UGameViewportClient*
		constexpr auto DeferredCommands = 0x788; // TArray<FString>
		constexpr auto NearClipPlane = 0x798; // float
		constexpr auto bSubtitlesEnabled = 0x79c; // char : 1
		constexpr auto bSubtitlesForcedOff = 0x79c; // char : 1
		constexpr auto MaximumLoopIterationCount = 0x7a0; // int32_t
		constexpr auto bCanBlueprintsTickByDefault = 0x7a4; // char : 1
		constexpr auto bOptimizeAnimBlueprintMemberVariableAccess = 0x7a4; // char : 1
		constexpr auto bAllowMultiThreadedAnimationUpdate = 0x7a4; // char : 1
		constexpr auto bEnableEditorPSysRealtimeLOD = 0x7a4; // char : 1
		constexpr auto bSmoothFrameRate = 0x7a4; // char : 1
		constexpr auto bUseFixedFrameRate = 0x7a4; // char : 1
		constexpr auto FixedFrameRate = 0x7a8; // float
		constexpr auto SmoothedFrameRateRange = 0x7ac; // FFloatRange
		constexpr auto CustomTimeStep = 0x7c0; // UEngineCustomTimeStep*
		constexpr auto CustomTimeStepClassName = 0x7e8; // FSoftClassPath
		constexpr auto TimecodeProvider = 0x800; // UTimecodeProvider*
		constexpr auto TimecodeProviderClassName = 0x828; // FSoftClassPath
		constexpr auto bGenerateDefaultTimecode = 0x840; // bool
		constexpr auto GenerateDefaultTimecodeFrameRate = 0x844; // FFrameRate
		constexpr auto GenerateDefaultTimecodeFrameDelay = 0x84c; // float
		constexpr auto bCheckForMultiplePawnsSpawnedInAFrame = 0x850; // char : 1
		constexpr auto NumPawnsAllowedToBeSpawnedInAFrame = 0x854; // int32_t
		constexpr auto bShouldGenerateLowQualityLightmaps = 0x858; // char : 1
		constexpr auto C_WorldBox = 0x85c; // FColor
		constexpr auto C_BrushWire = 0x860; // FColor
		constexpr auto C_AddWire = 0x864; // FColor
		constexpr auto C_SubtractWire = 0x868; // FColor
		constexpr auto C_SemiSolidWire = 0x86c; // FColor
		constexpr auto C_NonSolidWire = 0x870; // FColor
		constexpr auto C_WireBackground = 0x874; // FColor
		constexpr auto C_ScaleBoxHi = 0x878; // FColor
		constexpr auto C_VolumeCollision = 0x87c; // FColor
		constexpr auto C_BSPCollision = 0x880; // FColor
		constexpr auto C_OrthoBackground = 0x884; // FColor
		constexpr auto C_Volume = 0x888; // FColor
		constexpr auto C_BrushShape = 0x88c; // FColor
		constexpr auto StreamingDistanceFactor = 0x890; // float
		constexpr auto GameScreenshotSaveDirectory = 0x898; // FDirectoryPath
		constexpr auto TransitionType = 0x8a8; // ETransitionType
		constexpr auto TransitionDescription = 0x8b0; // FString
		constexpr auto TransitionGameMode = 0x8c0; // FString
		constexpr auto bAllowMatureLanguage = 0x8d0; // char : 1
		constexpr auto CameraRotationThreshold = 0x8d4; // float
		constexpr auto CameraTranslationThreshold = 0x8d8; // float
		constexpr auto PrimitiveProbablyVisibleTime = 0x8dc; // float
		constexpr auto MaxOcclusionPixelsFraction = 0x8e0; // float
		constexpr auto bPauseOnLossOfFocus = 0x8e4; // char : 1
		constexpr auto MaxParticleResize = 0x8e8; // int32_t
		constexpr auto MaxParticleResizeWarn = 0x8ec; // int32_t
		constexpr auto PendingDroppedNotes = 0x8f0; // TArray<FDropNoteInfo>
		constexpr auto NetClientTicksPerSecond = 0x900; // float
		constexpr auto DisplayGamma = 0x904; // float
		constexpr auto MinDesiredFrameRate = 0x908; // float
		constexpr auto DefaultSelectedMaterialColor = 0x90c; // FLinearColor
		constexpr auto SelectedMaterialColor = 0x91c; // FLinearColor
		constexpr auto SelectionOutlineColor = 0x92c; // FLinearColor
		constexpr auto SubduedSelectionOutlineColor = 0x93c; // FLinearColor
		constexpr auto SelectedMaterialColorOverride = 0x94c; // FLinearColor
		constexpr auto bIsOverridingSelectedColor = 0x95c; // bool
		constexpr auto bEnableOnScreenDebugMessages = 0x960; // char : 1
		constexpr auto bEnableOnScreenDebugMessagesDisplay = 0x960; // char : 1
		constexpr auto bSuppressMapWarnings = 0x960; // char : 1
		constexpr auto bDisableAILogging = 0x960; // char : 1
		constexpr auto bEnableVisualLogRecordingOnStart = 0x964; // uint32_t
		constexpr auto ScreenSaverInhibitorSemaphore = 0x968; // int32_t
		constexpr auto bLockReadOnlyLevels = 0x96c; // char : 1
		constexpr auto ParticleEventManagerClassPath = 0x970; // FString
		constexpr auto SelectionHighlightIntensity = 0x980; // float
		constexpr auto BSPSelectionHighlightIntensity = 0x984; // float
		constexpr auto SelectionHighlightIntensityBillboards = 0x988; // float
		constexpr auto NetDriverDefinitions = 0xbf8; // TArray<FNetDriverDefinition>
		constexpr auto ServerActors = 0xc08; // TArray<FString>
		constexpr auto RuntimeServerActors = 0xc18; // TArray<FString>
		constexpr auto NetErrorLogInterval = 0xc28; // float
		constexpr auto bStartedLoadMapMovie = 0xc2c; // char : 1
		constexpr auto NextWorldContextHandle = 0xc48; // int32_t
	}

	namespace n_UDistributionFloat {
		constexpr auto bCanBeBaked = 0x30; // char : 1
		constexpr auto bBakedDataSuccesfully = 0x30; // char : 1
	}

	namespace n_UInterpTrack {
		constexpr auto SubTracks = 0x38; // TArray<UInterpTrack*>
		constexpr auto TrackInstClass = 0x48; // UInterpTrackInst*
		constexpr auto ActiveCondition = 0x50; // ETrackActiveCondition
		constexpr auto TrackTitle = 0x58; // FString
		constexpr auto bOnePerGroup = 0x68; // char : 1
		constexpr auto bDirGroupOnly = 0x68; // char : 1
		constexpr auto bDisableTrack = 0x68; // char : 1
		constexpr auto bIsSelected = 0x68; // char : 1
		constexpr auto bIsAnimControlTrack = 0x68; // char : 1
		constexpr auto bSubTrackOnly = 0x68; // char : 1
		constexpr auto bVisible = 0x68; // char : 1
		constexpr auto bIsRecording = 0x68; // char : 1
	}

	namespace n_UMaterialParameterCollectionInstance {
		constexpr auto Collection = 0x30; // UMaterialParameterCollection*
	}

	namespace n_UEnvQueryGenerator_Composite {
		constexpr auto Generators = 0x50; // TArray<UEnvQueryGenerator*>
		constexpr auto bAllowDifferentItemTypes = 0x60; // char : 1
		constexpr auto bHasMatchingItemType = 0x60; // char : 1
		constexpr auto ForcedItemType = 0x68; // UEnvQueryItemType*
	}

	namespace n_USFPSHiddenStashManager {
		constexpr auto HiddenStashes = 0x48; // TArray<USFPSHiddenStash*>
		constexpr auto LootBoxSpawnerClass = 0x60; // ASFPSLootBoxSpawner*
		constexpr auto MaxHiddenStashes_Activators = 0x68; // int32_t
		constexpr auto MaxHiddenStashes_Total = 0x6c; // int32_t
		constexpr auto HiddenStashLifetime = 0x70; // int32_t
	}

	namespace n_AScope_col_halosun_C {
		constexpr auto deltapoint_collimator = 0x3d0; // UStaticMeshComponent*
	}

	namespace n_UARTrackedQRCode {
		constexpr auto QRCode = 0x108; // FString
		constexpr auto Version = 0x118; // int32_t
	}

	namespace n_UGizmoPlaneScaleParameterSource {
		constexpr auto AxisSource = 0x90; // TScriptInterface<IGizmoAxisSource>
		constexpr auto TransformSource = 0xa0; // TScriptInterface<IGizmoTransformSource>
		constexpr auto ScaleMultiplier = 0xb0; // float
		constexpr auto Parameter = 0xb4; // FVector2D
		constexpr auto LastChange = 0xbc; // FGizmoVec2ParameterChange
		constexpr auto CurScaleOrigin = 0xcc; // FVector
		constexpr auto CurScaleNormal = 0xd8; // FVector
		constexpr auto CurScaleAxisX = 0xe4; // FVector
		constexpr auto CurScaleAxisY = 0xf0; // FVector
		constexpr auto InitialTransform = 0x100; // FTransform
	}

	namespace n_At_Ammo_C {
		constexpr auto Trace = 0x328; // UBoxComponent*
		constexpr auto Mesh = 0x330; // UStaticMeshComponent*
	}

	namespace n_USFPSInventoryHandler {
		constexpr auto FormInventory = 0x580; // UUserWidget*
		constexpr auto FormGroundItem = 0x588; // USFPSUserWidget_GroundItem*
		constexpr auto FormPopupMenuItem = 0x590; // USFPSUserWidget_PopupMenuItem*
		constexpr auto FormCraftGroup = 0x598; // USFPSUserWidget_CraftRolloutMan*
		constexpr auto FormCraftItem = 0x5a0; // USFPSUserWidget_CraftRollout*
		constexpr auto FormTradeItem = 0x5a8; // USFPSUserWidget_TraderItem*
		constexpr auto frmHintPanelUse = 0x5b0; // UUserWidget*
		constexpr auto frmHintPanelMove = 0x5b8; // UUserWidget*
		constexpr auto frmHintPanelDrop = 0x5c0; // UUserWidget*
		constexpr auto FPopupMenuIcons = 0x5c8; // TArray<UPaperSprite*>
	}

	namespace n_USourceEffectEnvelopeFollowerPreset {
		constexpr auto Settings = 0x9c; // FSourceEffectEnvelopeFollowerSettings
	}

	namespace n_ASFPSBaseWeaponMF {
		constexpr auto MFParams = 0x310; // FSFPSWeaponMFParams
		constexpr auto OwnerWeapon = 0x318; // ASFPSBaseItem*
		constexpr auto DeviceSoundCue = 0x320; // USoundCue*
	}

	namespace n_UPhysicsConstraintComponent {
		constexpr auto ConstraintActor1 = 0x1f8; // AActor*
		constexpr auto ComponentName1 = 0x200; // FConstrainComponentPropName
		constexpr auto ConstraintActor2 = 0x208; // AActor*
		constexpr auto ComponentName2 = 0x210; // FConstrainComponentPropName
		constexpr auto ConstraintSetup = 0x228; // UPhysicsConstraintTemplate*
		constexpr auto OnConstraintBroken = 0x230; // FMulticastInlineDelegate
		constexpr auto ConstraintInstance = 0x240; // FConstraintInstance
	}

	namespace n_UMaterialExpressionBreakMaterialAttributes {
		constexpr auto MaterialAttributes = 0x40; // FMaterialAttributesInput
	}

	namespace n_APrecomputedVisibilityOverrideVolume {
		constexpr auto OverrideVisibleActors = 0x258; // TArray<AActor*>
		constexpr auto OverrideInvisibleActors = 0x268; // TArray<AActor*>
		constexpr auto OverrideInvisibleLevels = 0x278; // TArray<FName>
	}

	namespace n_USkyLightComponent {
		constexpr auto bRealTimeCapture = 0x228; // bool
		constexpr auto SourceType = 0x229; // ESkyLightSourceType
		constexpr auto Cubemap = 0x230; // UTextureCube*
		constexpr auto SourceCubemapAngle = 0x238; // float
		constexpr auto CubemapResolution = 0x23c; // int32_t
		constexpr auto SkyDistanceThreshold = 0x240; // float
		constexpr auto bCaptureEmissiveOnly = 0x244; // bool
		constexpr auto bLowerHemisphereIsBlack = 0x245; // bool
		constexpr auto LowerHemisphereColor = 0x248; // FLinearColor
		constexpr auto OcclusionMaxDistance = 0x258; // float
		constexpr auto Contrast = 0x25c; // float
		constexpr auto OcclusionExponent = 0x260; // float
		constexpr auto MinOcclusion = 0x264; // float
		constexpr auto OcclusionTint = 0x268; // FColor
		constexpr auto bCloudAmbientOcclusion = 0x26c; // char : 1
		constexpr auto CloudAmbientOcclusionStrength = 0x270; // float
		constexpr auto CloudAmbientOcclusionExtent = 0x274; // float
		constexpr auto CloudAmbientOcclusionMapResolutionScale = 0x278; // float
		constexpr auto CloudAmbientOcclusionApertureScale = 0x27c; // float
		constexpr auto OcclusionCombineMode = 0x280; // EOcclusionCombineMode
		constexpr auto BlendDestinationCubemap = 0x328; // UTextureCube*
	}

	namespace n_UMovieSceneCameraShakeSourceTriggerSection {
		constexpr auto Channel = 0xe8; // FMovieSceneCameraShakeSourceTriggerChannel
	}

	namespace n_UDefaultLevelSequenceInstanceData {
		constexpr auto TransformOriginActor = 0x30; // AActor*
		constexpr auto TransformOrigin = 0x40; // FTransform
	}

	namespace n_UTestMovieSceneEvalHookTrack {
		constexpr auto SectionArray = 0x90; // TArray<UMovieSceneSection*>
	}

	namespace n_UDatasmithGLTFSceneImportData {
		constexpr auto Generator = 0x28; // FString
		constexpr auto Version = 0x38; // float
		constexpr auto Author = 0x40; // FString
		constexpr auto License = 0x50; // FString
		constexpr auto Source = 0x60; // FString
	}

	namespace n_UABP_weapon_firearms_sg_mossberg590_C {
		constexpr auto UberGraphFrame = 0x310; // FPointerToUberGraphFrame
		constexpr auto AnimGraphNode_Root = 0x318; // FAnimNode_Root
		constexpr auto AnimGraphNode_SequencePlayer = 0x348; // FAnimNode_SequencePlayer
		constexpr auto AnimGraphNode_Slot = 0x3c8; // FAnimNode_Slot
	}

	namespace n_UParticleModuleParameterDynamic_Seeded {
		constexpr auto RandomSeedInfo = 0x48; // FParticleRandomSeedInfo
	}

	namespace n_UARMeshComponent {
		constexpr auto ReplicatedPayload = 0x280; // FARMeshUpdatePayload
	}

	namespace n_UAudioBus {
		constexpr auto AudioBusChannels = 0x28; // EAudioBusChannels
	}

	namespace n_UFormInventory_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnCar = 0x268; // UCheckBox*
		constexpr auto btnCell = 0x270; // UCheckBox*
		constexpr auto btnCorpse = 0x278; // UCheckBox*
		constexpr auto btnCraft = 0x280; // UCheckBox*
		constexpr auto btnGround = 0x288; // UCheckBox*
		constexpr auto btnLootBox = 0x290; // UCheckBox*
		constexpr auto btnSteamInventory = 0x298; // UCheckBox*
		constexpr auto btnSteamInventoryRefresh = 0x2a0; // UButton*
		constexpr auto btnTrader = 0x2a8; // UCheckBox*
		constexpr auto cbFilterLeft = 0x2b0; // UComboBoxString*
		constexpr auto cbFilterSteamInventory = 0x2b8; // UComboBoxString*
		constexpr auto frmPopupMenu = 0x2c0; // UfrmPopupMenu_C*
		constexpr auto imgBackgroundAvailable = 0x2c8; // UImage*
		constexpr auto imgBackgroundAvailableSteam = 0x2d0; // UImage*
		constexpr auto imgBackgroundNotAvailableSteam = 0x2d8; // UImage*
		constexpr auto lbCar = 0x2e0; // UTextBlock*
		constexpr auto lbCell = 0x2e8; // UTextBlock*
		constexpr auto lbCorpse = 0x2f0; // UTextBlock*
		constexpr auto lbCraft = 0x2f8; // UTextBlock*
		constexpr auto lbGround = 0x300; // UTextBlock*
		constexpr auto lbLootBox = 0x308; // UTextBlock*
		constexpr auto lbSteamInventory = 0x310; // UTextBlock*
		constexpr auto lbTakeAll = 0x318; // UTextBlock*
		constexpr auto lbTrader = 0x320; // UTextBlock*
		constexpr auto nsDraggingItem = 0x328; // UNamedSlot*
		constexpr auto nsHint = 0x330; // UNamedSlot*
		constexpr auto nsPopupMenu = 0x338; // UNamedSlot*
		constexpr auto svBackPack = 0x340; // UfrmSpriteViewEquip_C*
		constexpr auto svBackPack0 = 0x348; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack1 = 0x350; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack10 = 0x358; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack11 = 0x360; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack12 = 0x368; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack13 = 0x370; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack14 = 0x378; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack15 = 0x380; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack16 = 0x388; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack17 = 0x390; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack18 = 0x398; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack19 = 0x3a0; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack2 = 0x3a8; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack3 = 0x3b0; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack4 = 0x3b8; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack5 = 0x3c0; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack6 = 0x3c8; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack7 = 0x3d0; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack8 = 0x3d8; // UfrmSpriteViewInv_C*
		constexpr auto svBackPack9 = 0x3e0; // UfrmSpriteViewInv_C*
		constexpr auto svCar0 = 0x3e8; // UfrmSpriteViewInv_C*
		constexpr auto svCar1 = 0x3f0; // UfrmSpriteViewInv_C*
		constexpr auto svCar10 = 0x3f8; // UfrmSpriteViewInv_C*
		constexpr auto svCar11 = 0x400; // UfrmSpriteViewInv_C*
		constexpr auto svCar12 = 0x408; // UfrmSpriteViewInv_C*
		constexpr auto svCar13 = 0x410; // UfrmSpriteViewInv_C*
		constexpr auto svCar14 = 0x418; // UfrmSpriteViewInv_C*
		constexpr auto svCar15 = 0x420; // UfrmSpriteViewInv_C*
		constexpr auto svCar16 = 0x428; // UfrmSpriteViewInv_C*
		constexpr auto svCar17 = 0x430; // UfrmSpriteViewInv_C*
		constexpr auto svCar18 = 0x438; // UfrmSpriteViewInv_C*
		constexpr auto svCar19 = 0x440; // UfrmSpriteViewInv_C*
		constexpr auto svCar2 = 0x448; // UfrmSpriteViewInv_C*
		constexpr auto svCar20 = 0x450; // UfrmSpriteViewInv_C*
		constexpr auto svCar21 = 0x458; // UfrmSpriteViewInv_C*
		constexpr auto svCar22 = 0x460; // UfrmSpriteViewInv_C*
		constexpr auto svCar23 = 0x468; // UfrmSpriteViewInv_C*
		constexpr auto svCar24 = 0x470; // UfrmSpriteViewInv_C*
		constexpr auto svCar25 = 0x478; // UfrmSpriteViewInv_C*
		constexpr auto svCar26 = 0x480; // UfrmSpriteViewInv_C*
		constexpr auto svCar27 = 0x488; // UfrmSpriteViewInv_C*
		constexpr auto svCar28 = 0x490; // UfrmSpriteViewInv_C*
		constexpr auto svCar29 = 0x498; // UfrmSpriteViewInv_C*
		constexpr auto svCar3 = 0x4a0; // UfrmSpriteViewInv_C*
		constexpr auto svCar30 = 0x4a8; // UfrmSpriteViewInv_C*
		constexpr auto svCar31 = 0x4b0; // UfrmSpriteViewInv_C*
		constexpr auto svCar32 = 0x4b8; // UfrmSpriteViewInv_C*
		constexpr auto svCar33 = 0x4c0; // UfrmSpriteViewInv_C*
		constexpr auto svCar34 = 0x4c8; // UfrmSpriteViewInv_C*
		constexpr auto svCar35 = 0x4d0; // UfrmSpriteViewInv_C*
		constexpr auto svCar4 = 0x4d8; // UfrmSpriteViewInv_C*
		constexpr auto svCar5 = 0x4e0; // UfrmSpriteViewInv_C*
		constexpr auto svCar6 = 0x4e8; // UfrmSpriteViewInv_C*
		constexpr auto svCar7 = 0x4f0; // UfrmSpriteViewInv_C*
		constexpr auto svCar8 = 0x4f8; // UfrmSpriteViewInv_C*
		constexpr auto svCar9 = 0x500; // UfrmSpriteViewInv_C*
		constexpr auto svCell0 = 0x508; // UfrmSpriteViewInv_C*
		constexpr auto svCell1 = 0x510; // UfrmSpriteViewInv_C*
		constexpr auto svCell10 = 0x518; // UfrmSpriteViewInv_C*
		constexpr auto svCell11 = 0x520; // UfrmSpriteViewInv_C*
		constexpr auto svCell12 = 0x528; // UfrmSpriteViewInv_C*
		constexpr auto svCell13 = 0x530; // UfrmSpriteViewInv_C*
		constexpr auto svCell14 = 0x538; // UfrmSpriteViewInv_C*
		constexpr auto svCell15 = 0x540; // UfrmSpriteViewInv_C*
		constexpr auto svCell16 = 0x548; // UfrmSpriteViewInv_C*
		constexpr auto svCell17 = 0x550; // UfrmSpriteViewInv_C*
		constexpr auto svCell18 = 0x558; // UfrmSpriteViewInv_C*
		constexpr auto svCell19 = 0x560; // UfrmSpriteViewInv_C*
		constexpr auto svCell2 = 0x568; // UfrmSpriteViewInv_C*
		constexpr auto svCell20 = 0x570; // UfrmSpriteViewInv_C*
		constexpr auto svCell21 = 0x578; // UfrmSpriteViewInv_C*
		constexpr auto svCell22 = 0x580; // UfrmSpriteViewInv_C*
		constexpr auto svCell23 = 0x588; // UfrmSpriteViewInv_C*
		constexpr auto svCell24 = 0x590; // UfrmSpriteViewInv_C*
		constexpr auto svCell25 = 0x598; // UfrmSpriteViewInv_C*
		constexpr auto svCell26 = 0x5a0; // UfrmSpriteViewInv_C*
		constexpr auto svCell27 = 0x5a8; // UfrmSpriteViewInv_C*
		constexpr auto svCell28 = 0x5b0; // UfrmSpriteViewInv_C*
		constexpr auto svCell29 = 0x5b8; // UfrmSpriteViewInv_C*
		constexpr auto svCell3 = 0x5c0; // UfrmSpriteViewInv_C*
		constexpr auto svCell30 = 0x5c8; // UfrmSpriteViewInv_C*
		constexpr auto svCell31 = 0x5d0; // UfrmSpriteViewInv_C*
		constexpr auto svCell32 = 0x5d8; // UfrmSpriteViewInv_C*
		constexpr auto svCell33 = 0x5e0; // UfrmSpriteViewInv_C*
		constexpr auto svCell34 = 0x5e8; // UfrmSpriteViewInv_C*
		constexpr auto svCell35 = 0x5f0; // UfrmSpriteViewInv_C*
		constexpr auto svCell4 = 0x5f8; // UfrmSpriteViewInv_C*
		constexpr auto svCell5 = 0x600; // UfrmSpriteViewInv_C*
		constexpr auto svCell6 = 0x608; // UfrmSpriteViewInv_C*
		constexpr auto svCell7 = 0x610; // UfrmSpriteViewInv_C*
		constexpr auto svCell8 = 0x618; // UfrmSpriteViewInv_C*
		constexpr auto svCell9 = 0x620; // UfrmSpriteViewInv_C*
		constexpr auto svGadget0 = 0x628; // UfrmSpriteViewInv_C*
		constexpr auto svGadget1 = 0x630; // UfrmSpriteViewInv_C*
		constexpr auto svGadget2 = 0x638; // UfrmSpriteViewInv_C*
		constexpr auto svGadget3 = 0x640; // UfrmSpriteViewInv_C*
		constexpr auto svGlasses = 0x648; // UfrmSpriteViewInv_C*
		constexpr auto svGloves = 0x650; // UfrmSpriteViewInv_C*
		constexpr auto svHelmet = 0x658; // UfrmSpriteViewInv_C*
		constexpr auto svJacket = 0x660; // UfrmSpriteViewEquip_C*
		constexpr auto svJacket0 = 0x668; // UfrmSpriteViewInv_C*
		constexpr auto svJacket1 = 0x670; // UfrmSpriteViewInv_C*
		constexpr auto svJacket2 = 0x678; // UfrmSpriteViewInv_C*
		constexpr auto svJacket3 = 0x680; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox0 = 0x688; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox1 = 0x690; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox10 = 0x698; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox11 = 0x6a0; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox12 = 0x6a8; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox13 = 0x6b0; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox14 = 0x6b8; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox15 = 0x6c0; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox16 = 0x6c8; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox17 = 0x6d0; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox18 = 0x6d8; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox19 = 0x6e0; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox2 = 0x6e8; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox20 = 0x6f0; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox21 = 0x6f8; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox22 = 0x700; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox23 = 0x708; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox24 = 0x710; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox25 = 0x718; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox26 = 0x720; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox27 = 0x728; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox28 = 0x730; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox29 = 0x738; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox3 = 0x740; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox30 = 0x748; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox31 = 0x750; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox32 = 0x758; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox33 = 0x760; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox34 = 0x768; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox35 = 0x770; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox4 = 0x778; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox5 = 0x780; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox6 = 0x788; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox7 = 0x790; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox8 = 0x798; // UfrmSpriteViewInv_C*
		constexpr auto svLootBox9 = 0x7a0; // UfrmSpriteViewInv_C*
		constexpr auto svMask = 0x7a8; // UfrmSpriteViewInv_C*
		constexpr auto svQuickSlot0 = 0x7b0; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot1 = 0x7b8; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot10 = 0x7c0; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot2 = 0x7c8; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot3 = 0x7d0; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot4 = 0x7d8; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot5 = 0x7e0; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot6 = 0x7e8; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot7 = 0x7f0; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot8 = 0x7f8; // UfrmQuickSlot_C*
		constexpr auto svQuickSlot9 = 0x800; // UfrmQuickSlot_C*
		constexpr auto svTrous = 0x808; // UfrmSpriteViewEquip_C*
		constexpr auto svTrous0 = 0x810; // UfrmSpriteViewInv_C*
		constexpr auto svTrous1 = 0x818; // UfrmSpriteViewInv_C*
		constexpr auto svTrous2 = 0x820; // UfrmSpriteViewInv_C*
		constexpr auto svTrous3 = 0x828; // UfrmSpriteViewInv_C*
		constexpr auto svVest = 0x830; // UfrmSpriteViewEquip_C*
		constexpr auto svVest0 = 0x838; // UfrmSpriteViewInv_C*
		constexpr auto svVest1 = 0x840; // UfrmSpriteViewInv_C*
		constexpr auto svVest10 = 0x848; // UfrmSpriteViewInv_C*
		constexpr auto svVest11 = 0x850; // UfrmSpriteViewInv_C*
		constexpr auto svVest2 = 0x858; // UfrmSpriteViewInv_C*
		constexpr auto svVest3 = 0x860; // UfrmSpriteViewInv_C*
		constexpr auto svVest4 = 0x868; // UfrmSpriteViewInv_C*
		constexpr auto svVest5 = 0x870; // UfrmSpriteViewInv_C*
		constexpr auto svVest6 = 0x878; // UfrmSpriteViewInv_C*
		constexpr auto svVest7 = 0x880; // UfrmSpriteViewInv_C*
		constexpr auto svVest8 = 0x888; // UfrmSpriteViewInv_C*
		constexpr auto svVest9 = 0x890; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon0 = 0x898; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon0_SubItem0 = 0x8a0; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon0_SubItem1 = 0x8a8; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon0_SubItem2 = 0x8b0; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon0_SubItem3 = 0x8b8; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon0_SubItem4 = 0x8c0; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon1 = 0x8c8; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon1_SubItem0 = 0x8d0; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon1_SubItem1 = 0x8d8; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon1_SubItem2 = 0x8e0; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon1_SubItem3 = 0x8e8; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon1_SubItem4 = 0x8f0; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon2 = 0x8f8; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon2_SubItem0 = 0x900; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon2_SubItem1 = 0x908; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon2_SubItem2 = 0x910; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon2_SubItem3 = 0x918; // UfrmSpriteViewInv_C*
		constexpr auto svWeapon2_SubItem4 = 0x920; // UfrmSpriteViewInv_C*
		constexpr auto FSelectedGroundSpriteView_ForHint = 0x928; // UfrmGroundItem_C*
		constexpr auto FSelectedGroundSpriteView_ForDraggingItem = 0x930; // UfrmGroundItem_C*
		constexpr auto FSelectedEquipSpriteView_ForDraggingItem = 0x938; // USFPSUserWidget_EquipItem*
		constexpr auto FSelectedEquipSpriteView_ForHint = 0x940; // USFPSUserWidget_EquipItem*
		constexpr auto FMouseRightButtonIsDowned = 0x948; // bool
		constexpr auto FMouseLeftButtonIsDowned = 0x949; // bool
	}

	namespace n_UShowLoginUICallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_AHUD {
		constexpr auto PlayerOwner = 0x220; // APlayerController*
		constexpr auto bLostFocusPaused = 0x228; // char : 1
		constexpr auto bShowHUD = 0x228; // char : 1
		constexpr auto bShowDebugInfo = 0x228; // char : 1
		constexpr auto CurrentTargetIndex = 0x22c; // int32_t
		constexpr auto bShowHitBoxDebugInfo = 0x230; // char : 1
		constexpr auto bShowOverlays = 0x230; // char : 1
		constexpr auto bEnableDebugTextShadow = 0x230; // char : 1
		constexpr auto PostRenderedActors = 0x238; // TArray<AActor*>
		constexpr auto DebugDisplay = 0x250; // TArray<FName>
		constexpr auto ToggledDebugCategories = 0x260; // TArray<FName>
		constexpr auto Canvas = 0x270; // UCanvas*
		constexpr auto DebugCanvas = 0x278; // UCanvas*
		constexpr auto DebugTextList = 0x280; // TArray<FDebugTextInfo>
		constexpr auto ShowDebugTargetDesiredClass = 0x290; // AActor*
		constexpr auto ShowDebugTargetActor = 0x298; // AActor*
	}

	namespace n_ADcxVehicle {
		constexpr auto Mesh = 0x280; // UStaticMeshComponent*
		constexpr auto VehicleWheels = 0x288; // UDcxVehicleWheelsComponent*
	}

	namespace n_ULayer {
		constexpr auto LayerName = 0x28; // FName
		constexpr auto bIsVisible = 0x30; // char : 1
		constexpr auto ActorStats = 0x38; // TArray<FLayerActorStats>
	}

	namespace n_Aweapon_firearms_snip_mosin_short_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto ShellMagazine = 0x7e8; // UStaticMeshComponent*
		constexpr auto ShellBarrelEmpty = 0x7f0; // UStaticMeshComponent*
		constexpr auto ShellBarrelFull = 0x7f8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x800; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x808; // USFPSACWeaponMFInventory*
	}

	namespace n_UFontImportOptions {
		constexpr auto Data = 0x28; // FFontImportOptionsData
	}

	namespace n_UExponentialHeightFogComponent {
		constexpr auto FogDensity = 0x1f8; // float
		constexpr auto FogHeightFalloff = 0x1fc; // float
		constexpr auto SecondFogData = 0x200; // FExponentialHeightFogData
		constexpr auto FogInscatteringColor = 0x20c; // FLinearColor
		constexpr auto InscatteringColorCubemap = 0x220; // UTextureCube*
		constexpr auto InscatteringColorCubemapAngle = 0x228; // float
		constexpr auto InscatteringTextureTint = 0x22c; // FLinearColor
		constexpr auto FullyDirectionalInscatteringColorDistance = 0x23c; // float
		constexpr auto NonDirectionalInscatteringColorDistance = 0x240; // float
		constexpr auto DirectionalInscatteringExponent = 0x244; // float
		constexpr auto DirectionalInscatteringStartDistance = 0x248; // float
		constexpr auto DirectionalInscatteringColor = 0x24c; // FLinearColor
		constexpr auto FogMaxOpacity = 0x25c; // float
		constexpr auto StartDistance = 0x260; // float
		constexpr auto FogCutoffDistance = 0x264; // float
		constexpr auto bEnableVolumetricFog = 0x268; // bool
		constexpr auto VolumetricFogScatteringDistribution = 0x26c; // float
		constexpr auto VolumetricFogAlbedo = 0x270; // FColor
		constexpr auto VolumetricFogEmissive = 0x274; // FLinearColor
		constexpr auto VolumetricFogExtinctionScale = 0x284; // float
		constexpr auto VolumetricFogDistance = 0x288; // float
		constexpr auto VolumetricFogStaticLightingScatteringIntensity = 0x28c; // float
		constexpr auto bOverrideLightColorsWithFogInscatteringColors = 0x290; // bool
	}

	namespace n_AActor {
		constexpr auto PrimaryActorTick = 0x28; // FActorTickFunction
		constexpr auto bNetTemporary = 0x58; // char : 1
		constexpr auto bNetStartup = 0x58; // char : 1
		constexpr auto bOnlyRelevantToOwner = 0x58; // char : 1
		constexpr auto bAlwaysRelevant = 0x58; // char : 1
		constexpr auto bReplicateMovement = 0x58; // char : 1
		constexpr auto bHidden = 0x58; // char : 1
		constexpr auto bTearOff = 0x58; // char : 1
		constexpr auto bForceNetAddressable = 0x58; // char : 1
		constexpr auto bExchangedRoles = 0x59; // char : 1
		constexpr auto bNetLoadOnClient = 0x59; // char : 1
		constexpr auto bNetUseOwnerRelevancy = 0x59; // char : 1
		constexpr auto bRelevantForNetworkReplays = 0x59; // char : 1
		constexpr auto bRelevantForLevelBounds = 0x59; // char : 1
		constexpr auto bReplayRewindable = 0x59; // char : 1
		constexpr auto bAllowTickBeforeBeginPlay = 0x59; // char : 1
		constexpr auto bAutoDestroyWhenFinished = 0x59; // char : 1
		constexpr auto bCanBeDamaged = 0x5a; // char : 1
		constexpr auto bBlockInput = 0x5a; // char : 1
		constexpr auto bCollideWhenPlacing = 0x5a; // char : 1
		constexpr auto bFindCameraComponentWhenViewTarget = 0x5a; // char : 1
		constexpr auto bGenerateOverlapEventsDuringLevelStreaming = 0x5a; // char : 1
		constexpr auto bIgnoresOriginShifting = 0x5a; // char : 1
		constexpr auto bEnableAutoLODGeneration = 0x5a; // char : 1
		constexpr auto bIsEditorOnlyActor = 0x5a; // char : 1
		constexpr auto bActorSeamlessTraveled = 0x5b; // char : 1
		constexpr auto bReplicates = 0x5b; // char : 1
		constexpr auto bCanBeInCluster = 0x5b; // char : 1
		constexpr auto bAllowReceiveTickEventOnDedicatedServer = 0x5b; // char : 1
		constexpr auto bActorEnableCollision = 0x5c; // char : 1
		constexpr auto bActorIsBeingDestroyed = 0x5c; // char : 1
		constexpr auto UpdateOverlapsMethodDuringLevelStreaming = 0x5d; // EActorUpdateOverlapsMethod
		constexpr auto DefaultUpdateOverlapsMethodDuringLevelStreaming = 0x5e; // EActorUpdateOverlapsMethod
		constexpr auto RemoteRole = 0x5f; // ENetRole
		constexpr auto ReplicatedMovement = 0x60; // FRepMovement
		constexpr auto InitialLifeSpan = 0x94; // float
		constexpr auto CustomTimeDilation = 0x98; // float
		constexpr auto AttachmentReplication = 0xa0; // FRepAttachment
		constexpr auto owner = 0xe0; // AActor*
		constexpr auto NetDriverName = 0xe8; // FName
		constexpr auto Role = 0xf0; // ENetRole
		constexpr auto NetDormancy = 0xf1; // ENetDormancy
		constexpr auto SpawnCollisionHandlingMethod = 0xf2; // ESpawnActorCollisionHandlingMethod
		constexpr auto AutoReceiveInput = 0xf3; // EAutoReceiveInput
		constexpr auto InputPriority = 0xf4; // int32_t
		constexpr auto InputComponent = 0xf8; // UInputComponent*
		constexpr auto NetCullDistanceSquared = 0x100; // float
		constexpr auto NetTag = 0x104; // int32_t
		constexpr auto NetUpdateFrequency = 0x108; // float
		constexpr auto MinNetUpdateFrequency = 0x10c; // float
		constexpr auto NetPriority = 0x110; // float
		constexpr auto Instigator = 0x118; // APawn*
		constexpr auto Children = 0x120; // TArray<AActor*>
		constexpr auto RootComponent = 0x130; // USceneComponent*
		constexpr auto ControllingMatineeActors = 0x138; // TArray<AMatineeActor*>
		constexpr auto Layers = 0x150; // TArray<FName>
		constexpr auto ParentComponent = 0x160; // TWeakObjectPtr<UChildActorComponent>
		constexpr auto Tags = 0x170; // TArray<FName>
		constexpr auto OnTakeAnyDamage = 0x180; // FMulticastSparseDelegate
		constexpr auto OnTakePointDamage = 0x181; // FMulticastSparseDelegate
		constexpr auto OnTakeRadialDamage = 0x182; // FMulticastSparseDelegate
		constexpr auto OnActorBeginOverlap = 0x183; // FMulticastSparseDelegate
		constexpr auto OnActorEndOverlap = 0x184; // FMulticastSparseDelegate
		constexpr auto OnBeginCursorOver = 0x185; // FMulticastSparseDelegate
		constexpr auto OnEndCursorOver = 0x186; // FMulticastSparseDelegate
		constexpr auto OnClicked = 0x187; // FMulticastSparseDelegate
		constexpr auto OnReleased = 0x188; // FMulticastSparseDelegate
		constexpr auto OnInputTouchBegin = 0x189; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnd = 0x18a; // FMulticastSparseDelegate
		constexpr auto OnInputTouchEnter = 0x18b; // FMulticastSparseDelegate
		constexpr auto OnInputTouchLeave = 0x18c; // FMulticastSparseDelegate
		constexpr auto OnActorHit = 0x18d; // FMulticastSparseDelegate
		constexpr auto OnDestroyed = 0x18e; // FMulticastSparseDelegate
		constexpr auto OnEndPlay = 0x18f; // FMulticastSparseDelegate
		constexpr auto InstanceComponents = 0x1f0; // TArray<UActorComponent*>
		constexpr auto BlueprintCreatedComponents = 0x200; // TArray<UActorComponent*>
	}

	namespace n_UUserDefinedImageCaptureProtocol {
		constexpr auto Format = 0xd8; // EDesiredImageFormat
		constexpr auto bEnableCompression = 0xd9; // bool
		constexpr auto CompressionQuality = 0xdc; // int32_t
	}

	namespace n_UParticleModuleMeshRotationRate_Seeded {
		constexpr auto RandomSeedInfo = 0x78; // FParticleRandomSeedInfo
	}

	namespace n_USFPSCreatePlayerHandler {
		constexpr auto CreatePlayerHUD = 0x88; // AHUD*
		constexpr auto FormCreatePlayer = 0x90; // UUserWidget*
	}

	namespace n_UPawnAction_Sequence {
		constexpr auto ActionSequence = 0x90; // TArray<UPawnAction*>
		constexpr auto ChildFailureHandlingMode = 0xa0; // EPawnActionFailHandling
		constexpr auto RecentActionCopy = 0xa8; // UPawnAction*
	}

	namespace n_UMediaTexture {
		constexpr auto AddressX = 0x178; // TextureAddress
		constexpr auto AddressY = 0x179; // TextureAddress
		constexpr auto AutoClear = 0x17a; // bool
		constexpr auto ClearColor = 0x17c; // FLinearColor
		constexpr auto EnableGenMips = 0x18c; // bool
		constexpr auto NumMips = 0x18d; // char
		constexpr auto NewStyleOutput = 0x18e; // bool
		constexpr auto OutputFormat = 0x18f; // MediaTextureOutputFormat
		constexpr auto CurrentAspectRatio = 0x190; // float
		constexpr auto CurrentOrientation = 0x194; // MediaTextureOrientation
		constexpr auto MediaPlayer = 0x198; // UMediaPlayer*
	}

	namespace n_UProgressWidgetStyle {
		constexpr auto ProgressBarStyle = 0x30; // FProgressBarStyle
	}

	namespace n_UPanelWidget {
		constexpr auto Slots = 0x108; // TArray<UPanelSlot*>
	}

	namespace n_USceneComponent {
		constexpr auto PhysicsVolume = 0xb8; // TWeakObjectPtr<APhysicsVolume>
		constexpr auto AttachParent = 0xc0; // USceneComponent*
		constexpr auto AttachSocketName = 0xc8; // FName
		constexpr auto AttachChildren = 0xd0; // TArray<USceneComponent*>
		constexpr auto ClientAttachedChildren = 0xe0; // TArray<USceneComponent*>
		constexpr auto RelativeLocation = 0x11c; // FVector
		constexpr auto RelativeRotation = 0x128; // FRotator
		constexpr auto RelativeScale3D = 0x134; // FVector
		constexpr auto ComponentVelocity = 0x140; // FVector
		constexpr auto bComponentToWorldUpdated = 0x14c; // char : 1
		constexpr auto bAbsoluteLocation = 0x14c; // char : 1
		constexpr auto bAbsoluteRotation = 0x14c; // char : 1
		constexpr auto bAbsoluteScale = 0x14c; // char : 1
		constexpr auto bVisible = 0x14c; // char : 1
		constexpr auto bShouldBeAttached = 0x14c; // char : 1
		constexpr auto bShouldSnapLocationWhenAttached = 0x14c; // char : 1
		constexpr auto bShouldSnapRotationWhenAttached = 0x14d; // char : 1
		constexpr auto bShouldUpdatePhysicsVolume = 0x14d; // char : 1
		constexpr auto bHiddenInGame = 0x14d; // char : 1
		constexpr auto bBoundsChangeTriggersStreamingDataRebuild = 0x14d; // char : 1
		constexpr auto bUseAttachParentBound = 0x14d; // char : 1
		constexpr auto Mobility = 0x14f; // EComponentMobility
		constexpr auto DetailMode = 0x150; // EDetailMode
		constexpr auto PhysicsVolumeChangedDelegate = 0x151; // FMulticastSparseDelegate
	}

	namespace n_UBorder {
		constexpr auto HorizontalAlignment = 0x120; // EHorizontalAlignment
		constexpr auto VerticalAlignment = 0x121; // EVerticalAlignment
		constexpr auto bShowEffectWhenDisabled = 0x122; // char : 1
		constexpr auto ContentColorAndOpacity = 0x124; // FLinearColor
		constexpr auto ContentColorAndOpacityDelegate = 0x134; // FDelegate
		constexpr auto Padding = 0x144; // FMargin
		constexpr auto Background = 0x158; // FSlateBrush
		constexpr auto BackgroundDelegate = 0x1e0; // FDelegate
		constexpr auto BrushColor = 0x1f0; // FLinearColor
		constexpr auto BrushColorDelegate = 0x200; // FDelegate
		constexpr auto DesiredSizeScale = 0x210; // FVector2D
		constexpr auto bFlipForRightToLeftFlowDirection = 0x218; // bool
		constexpr auto OnMouseButtonDownEvent = 0x21c; // FDelegate
		constexpr auto OnMouseButtonUpEvent = 0x22c; // FDelegate
		constexpr auto OnMouseMoveEvent = 0x23c; // FDelegate
		constexpr auto OnMouseDoubleClickEvent = 0x24c; // FDelegate
	}

	namespace n_UAssetManager {
		constexpr auto ObjectReferenceList = 0x2e0; // TArray<UObject*>
		constexpr auto bIsGlobalAsyncScanEnvironment = 0x2f0; // bool
		constexpr auto bShouldGuessTypeAndName = 0x2f1; // bool
		constexpr auto bShouldUseSynchronousLoad = 0x2f2; // bool
		constexpr auto bIsLoadingFromPakFiles = 0x2f3; // bool
		constexpr auto bShouldAcquireMissingChunksOnLoad = 0x2f4; // bool
		constexpr auto bOnlyCookProductionAssets = 0x2f5; // bool
		constexpr auto bIsBulkScanning = 0x2f6; // bool
		constexpr auto bIsPrimaryAssetDirectoryCurrent = 0x2f7; // bool
		constexpr auto bIsManagementDatabaseCurrent = 0x2f8; // bool
		constexpr auto bUpdateManagementDatabaseAfterScan = 0x2f9; // bool
		constexpr auto bIncludeOnlyOnDiskAssets = 0x2fa; // bool
		constexpr auto bHasCompletedInitialScan = 0x2fb; // bool
		constexpr auto NumberOfSpawnedNotifications = 0x2fc; // int32_t
	}

	namespace n_UAsyncActionLoadPrimaryAssetList {
		constexpr auto Completed = 0x78; // FMulticastInlineDelegate
	}

	namespace n_UParticleModuleBeamTarget {
		constexpr auto TargetMethod = 0x30; // Beam2SourceTargetMethod
		constexpr auto TargetName = 0x34; // FName
		constexpr auto Target = 0x40; // FRawDistributionVector
		constexpr auto bTargetAbsolute = 0x88; // char : 1
		constexpr auto bLockTarget = 0x88; // char : 1
		constexpr auto TargetTangentMethod = 0x8c; // Beam2SourceTargetTangentMethod
		constexpr auto TargetTangent = 0x90; // FRawDistributionVector
		constexpr auto bLockTargetTangent = 0xd8; // char : 1
		constexpr auto TargetStrength = 0xe0; // FRawDistributionFloat
		constexpr auto bLockTargetStength = 0x110; // char : 1
		constexpr auto LockRadius = 0x114; // float
	}

	namespace n_UMaterialExpressionFmod {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
	}

	namespace n_APhysicsThruster {
		constexpr auto ThrusterComponent = 0x220; // UPhysicsThrusterComponent*
	}

	namespace n_UNavArea {
		constexpr auto DefaultCost = 0x30; // float
		constexpr auto FixedAreaEnteringCost = 0x34; // float
		constexpr auto DrawColor = 0x38; // FColor
		constexpr auto SupportedAgents = 0x3c; // FNavAgentSelector
		constexpr auto bSupportsAgent0 = 0x40; // char : 1
		constexpr auto bSupportsAgent1 = 0x40; // char : 1
		constexpr auto bSupportsAgent2 = 0x40; // char : 1
		constexpr auto bSupportsAgent3 = 0x40; // char : 1
		constexpr auto bSupportsAgent4 = 0x40; // char : 1
		constexpr auto bSupportsAgent5 = 0x40; // char : 1
		constexpr auto bSupportsAgent6 = 0x40; // char : 1
		constexpr auto bSupportsAgent7 = 0x40; // char : 1
		constexpr auto bSupportsAgent8 = 0x41; // char : 1
		constexpr auto bSupportsAgent9 = 0x41; // char : 1
		constexpr auto bSupportsAgent10 = 0x41; // char : 1
		constexpr auto bSupportsAgent11 = 0x41; // char : 1
		constexpr auto bSupportsAgent12 = 0x41; // char : 1
		constexpr auto bSupportsAgent13 = 0x41; // char : 1
		constexpr auto bSupportsAgent14 = 0x41; // char : 1
		constexpr auto bSupportsAgent15 = 0x41; // char : 1
	}

	namespace n_Aweapon_firearms_sg_mossberg590_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x7e8; // USFPSACWeaponMFInventory*
		constexpr auto SightOpen = 0x7f0; // UStaticMeshComponent*
		constexpr auto Shell = 0x7f8; // UStaticMeshComponent*
	}

	namespace n_UfrmChatBox_C {
		constexpr auto UberGraphFrame = 0x300; // FPointerToUberGraphFrame
		constexpr auto sbMain = 0x308; // UScrollBox*
	}

	namespace n_UFoliageType_Actor {
		constexpr auto ActorClass = 0x3b0; // AActor*
		constexpr auto bShouldAttachToBaseComponent = 0x3b8; // bool
	}

	namespace n_UGizmoConstantAxisSource {
		constexpr auto Origin = 0x30; // FVector
		constexpr auto Direction = 0x3c; // FVector
	}

	namespace n_AFieldSystemActor {
		constexpr auto FieldSystemComponent = 0x220; // UFieldSystemComponent*
	}

	namespace n_ALevelSequenceMediaController {
		constexpr auto Sequence = 0x228; // ALevelSequenceActor*
		constexpr auto MediaComponent = 0x230; // UMediaComponent*
		constexpr auto ServerStartTimeSeconds = 0x238; // float
	}

	namespace n_USFPSACFISM {
		constexpr auto SightCapsule = 0x810; // FKSphylElem
		constexpr auto FarCover = 0x860; // float
		constexpr auto CloseCover = 0x864; // float
		constexpr auto FarCoverDist = 0x868; // float
		constexpr auto BushCue = 0x870; // USoundCue*
	}

	namespace n_Arecoveryitem_medikit_medx_C {
		constexpr auto Timer = 0x420; // float
	}

	namespace n_UAISubsystem {
		constexpr auto AISystem = 0x30; // UAISystem*
	}

	namespace n_UAISense_Blueprint {
		constexpr auto ListenerDataType = 0x80; // UUserDefinedStruct*
		constexpr auto ListenerContainer = 0x88; // TArray<UAIPerceptionComponent*>
		constexpr auto UnprocessedEvents = 0x98; // TArray<UAISenseEvent*>
	}

	namespace n_ASFPSCharacter {
		constexpr auto ClientLockPasswordsCache = 0xc38; // TArray<FSFPSClientLockPasswordsCache>
		constexpr auto Roll_Desired = 0xcbc; // int8_t
		constexpr auto Camera = 0xcc8; // USFPSACCamera*
		constexpr auto ServerCameraType = 0xcd0; // ESFPSServerCameraType
		constexpr auto ServerBattleType = 0xcd1; // ESFPSServerBattleType
		constexpr auto DegradeFood = 0xcd4; // float [0x4]
		constexpr auto DegradeWater = 0xce4; // float [0x4]
		constexpr auto ZeroFoodDamage = 0xcf4; // float
		constexpr auto ZeroWaterDamage = 0xcf8; // float
		constexpr auto HealthLow = 0xcfc; // int32_t
		constexpr auto HealthCritical = 0xd00; // int32_t
		constexpr auto FoodWaterLow = 0xd04; // int32_t
		constexpr auto FoodWaterCritical = 0xd08; // int32_t
		constexpr auto RegenHigh = 0xd0c; // float
		constexpr auto RegenLow = 0xd10; // float
		constexpr auto DeltaHealthRate = 0xd14; // float [0x2]
		constexpr auto DeltaFoodWaterRate = 0xd1c; // float [0x2]
		constexpr auto LoginData = 0xd28; // FSFPSLoginData
		constexpr auto DeadMarkerGUID = 0xd50; // FGuid
		constexpr auto bDLC0Exist = 0xd61; // bool
		constexpr auto DamageShake = 0xd68; // USFPSCameraShake*
		constexpr auto bCharacterForCreateNew = 0xd70; // bool
		constexpr auto Achievements = 0xd80; // TArray<FSFPSAchievement>
		constexpr auto ServerProjectileList = 0xd98; // TArray<FSFPSCharacterProjectileRecord>
		constexpr auto LootBoxActor = 0xda8; // TWeakObjectPtr<ASFPSLootBox>
		constexpr auto ReputationPoints = 0xdb4; // int32_t
		constexpr auto Steamcoins = 0xdb8; // int32_t
		constexpr auto BaseCenter = 0xdc4; // FVector
		constexpr auto RegisteredBaseData = 0xdd0; // FSFPSRegisteredBaseData
		constexpr auto FreeStashes = 0xdf0; // TArray<FVector>
		constexpr auto FreeFires = 0xe00; // TArray<FVector>
		constexpr auto FreeTripwireTraps = 0xe10; // TArray<FVector>
		constexpr auto FreeBaseStashes = 0xe20; // char
		constexpr auto FreeBaseRespawns = 0xe21; // char
		constexpr auto FreeBaseItems = 0xe22; // char
		constexpr auto Squad = 0xe30; // TArray<FSFPSSquadInfo>
		constexpr auto Camera_RollAmount = 0xe70; // float
		constexpr auto Camera_ForwardOffset = 0xe74; // float
		constexpr auto Camera_OriginOffset = 0xe78; // FVector
		constexpr auto Camera_SideOffset = 0xe84; // float
		constexpr auto Camera_Distance = 0xe88; // float
		constexpr auto Camera_RollDistance = 0xe8c; // float
		constexpr auto Camera_RollSphereRadius = 0xe90; // float
		constexpr auto FPIronSightOn = 0xe98; // UCurveFloat*
		constexpr auto FPIronSightOff = 0xea0; // UCurveFloat*
		constexpr auto TPIronSightOn = 0xea8; // UCurveFloat*
		constexpr auto TPIronSightOff = 0xeb0; // UCurveFloat*
	}

	namespace n_UBTNode {
		constexpr auto NodeName = 0x30; // FString
		constexpr auto TreeAsset = 0x40; // UBehaviorTree*
		constexpr auto ParentNode = 0x48; // UBTCompositeNode*
	}

	namespace n_USkeleton {
		constexpr auto BoneTree = 0x38; // TArray<FBoneNode>
		constexpr auto RefLocalPoses = 0x48; // TArray<FTransform>
		constexpr auto VirtualBoneGuid = 0x170; // FGuid
		constexpr auto VirtualBones = 0x180; // TArray<FVirtualBone>
		constexpr auto Sockets = 0x190; // TArray<USkeletalMeshSocket*>
		constexpr auto SmartNames = 0x1f0; // FSmartNameContainer
		constexpr auto BlendProfiles = 0x270; // TArray<UBlendProfile*>
		constexpr auto SlotGroups = 0x280; // TArray<FAnimSlotGroup>
		constexpr auto AssetUserData = 0x380; // TArray<UAssetUserData*>
	}

	namespace n_AAtmosphericFog {
		constexpr auto AtmosphericFogComponent = 0x220; // UAtmosphericFogComponent*
	}

	namespace n_UInputActionDelegateBinding {
		constexpr auto InputActionDelegateBindings = 0x28; // TArray<FBlueprintInputActionDelegateBinding>
	}

	namespace n_USoundNodeAttenuation {
		constexpr auto AttenuationSettings = 0x48; // USoundAttenuation*
		constexpr auto AttenuationOverrides = 0x50; // FSoundAttenuationSettings
		constexpr auto bOverrideAttenuation = 0x3f0; // char : 1
	}

	namespace n_UFormDlg_InputBox_C {
		constexpr auto UberGraphFrame = 0x260; // FPointerToUberGraphFrame
		constexpr auto btnCancel = 0x268; // UButton*
		constexpr auto btnOk = 0x270; // UButton*
		constexpr auto lbCancel = 0x278; // UTextBlock*
		constexpr auto lbOk = 0x280; // UTextBlock*
	}

	namespace n_UGeneralProjectSettings {
		constexpr auto CompanyName = 0x28; // FString
		constexpr auto CompanyDistinguishedName = 0x38; // FString
		constexpr auto CopyrightNotice = 0x48; // FString
		constexpr auto Description = 0x58; // FString
		constexpr auto Homepage = 0x68; // FString
		constexpr auto LicensingTerms = 0x78; // FString
		constexpr auto PrivacyPolicy = 0x88; // FString
		constexpr auto ProjectID = 0x98; // FGuid
		constexpr auto ProjectName = 0xa8; // FString
		constexpr auto ProjectVersion = 0xb8; // FString
		constexpr auto SupportContact = 0xc8; // FString
		constexpr auto ProjectDisplayedTitle = 0xd8; // FText
		constexpr auto ProjectDebugTitleInfo = 0xf0; // FText
		constexpr auto bShouldWindowPreserveAspectRatio = 0x108; // bool
		constexpr auto bUseBorderlessWindow = 0x109; // bool
		constexpr auto bStartInVR = 0x10a; // bool
		constexpr auto bAllowWindowResize = 0x10b; // bool
		constexpr auto bAllowClose = 0x10c; // bool
		constexpr auto bAllowMaximize = 0x10d; // bool
		constexpr auto bAllowMinimize = 0x10e; // bool
	}

	namespace n_UMainGameInstance_C {
		constexpr auto UberGraphFrame = 0x8e0; // FPointerToUberGraphFrame
	}

	namespace n_UBaseMediaSource {
		constexpr auto PlayerName = 0x80; // FName
	}

	namespace n_USFPSUserWidget_QuickSlot {
		constexpr auto bAvailable = 0x2b8; // bool
	}

	namespace n_UTouchInterface {
		constexpr auto Controls = 0x28; // TArray<FTouchInputControl>
		constexpr auto ActiveOpacity = 0x38; // float
		constexpr auto InactiveOpacity = 0x3c; // float
		constexpr auto TimeUntilDeactive = 0x40; // float
		constexpr auto TimeUntilReset = 0x44; // float
		constexpr auto ActivationDelay = 0x48; // float
		constexpr auto bPreventRecenter = 0x4c; // bool
		constexpr auto StartupDelay = 0x50; // float
	}

	namespace n_ABM_WallTriaLow_02_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UMasterAudioSubmixCaptureProtocol {
		constexpr auto Filename = 0x58; // FString
	}

	namespace n_UArrowComponent {
		constexpr auto ArrowColor = 0x450; // FColor
		constexpr auto ArrowSize = 0x454; // float
		constexpr auto ArrowLength = 0x458; // float
		constexpr auto ScreenSize = 0x45c; // float
		constexpr auto bIsScreenSizeScaled = 0x460; // char : 1
		constexpr auto bTreatAsASprite = 0x460; // char : 1
	}

	namespace n_UParticleModuleMeshRotationRateMultiplyLife {
		constexpr auto LifeMultiplier = 0x30; // FRawDistributionVector
	}

	namespace n_UInteractiveToolManager {
		constexpr auto ActiveLeftTool = 0x30; // UInteractiveTool*
		constexpr auto ActiveRightTool = 0x38; // UInteractiveTool*
		constexpr auto ToolBuilders = 0x90; // TMap<FString, UInteractiveToolBuilder*>
	}

	namespace n_UMaterialExpressionRuntimeVirtualTextureOutput {
		constexpr auto BaseColor = 0x40; // FExpressionInput
		constexpr auto Specular = 0x54; // FExpressionInput
		constexpr auto Roughness = 0x68; // FExpressionInput
		constexpr auto Normal = 0x7c; // FExpressionInput
		constexpr auto WorldHeight = 0x90; // FExpressionInput
		constexpr auto Opacity = 0xa4; // FExpressionInput
		constexpr auto Mask = 0xb8; // FExpressionInput
	}

	namespace n_UWrapBox {
		constexpr auto InnerSlotPadding = 0x120; // FVector2D
		constexpr auto WrapWidth = 0x128; // float
		constexpr auto WrapSize = 0x12c; // float
		constexpr auto bExplicitWrapWidth = 0x130; // bool
		constexpr auto bExplicitWrapSize = 0x131; // bool
		constexpr auto Orientation = 0x132; // EOrientation
	}

	namespace n_UMovieSceneEntitySystem {
		constexpr auto Linker = 0x28; // UMovieSceneEntitySystemLinker*
	}

	namespace n_UGizmoLineHandleComponent {
		constexpr auto Normal = 0x470; // FVector
		constexpr auto HandleSize = 0x47c; // float
		constexpr auto Thickness = 0x480; // float
		constexpr auto Direction = 0x484; // FVector
		constexpr auto Length = 0x490; // float
		constexpr auto bImageScale = 0x494; // bool
	}

	namespace n_UInterpTrackInstEvent {
		constexpr auto LastUpdatePosition = 0x28; // float
	}

	namespace n_UParticleModuleTypeDataBeam2 {
		constexpr auto BeamMethod = 0x30; // EBeam2Method
		constexpr auto TextureTile = 0x34; // int32_t
		constexpr auto TextureTileDistance = 0x38; // float
		constexpr auto Sheets = 0x3c; // int32_t
		constexpr auto MaxBeamCount = 0x40; // int32_t
		constexpr auto Speed = 0x44; // float
		constexpr auto InterpolationPoints = 0x48; // int32_t
		constexpr auto bAlwaysOn = 0x4c; // char : 1
		constexpr auto UpVectorStepSize = 0x50; // int32_t
		constexpr auto BranchParentName = 0x54; // FName
		constexpr auto Distance = 0x60; // FRawDistributionFloat
		constexpr auto TaperMethod = 0x90; // EBeamTaperMethod
		constexpr auto TaperFactor = 0x98; // FRawDistributionFloat
		constexpr auto TaperScale = 0xc8; // FRawDistributionFloat
		constexpr auto RenderGeometry = 0xf8; // char : 1
		constexpr auto RenderDirectLine = 0xf8; // char : 1
		constexpr auto RenderLines = 0xf8; // char : 1
		constexpr auto RenderTessellation = 0xf8; // char : 1
	}

	namespace n_USpacer {
		constexpr auto Size = 0x108; // FVector2D
	}

	namespace n_USoundfieldEffectBase {
		constexpr auto Settings = 0x28; // USoundfieldEffectSettingsBase*
	}

	namespace n_UMaterialExpressionVectorParameter {
		constexpr auto DefaultValue = 0x58; // FLinearColor
		constexpr auto bUseCustomPrimitiveData = 0x68; // bool
		constexpr auto PrimitiveDataIndex = 0x69; // char
	}

	namespace n_USFPSACGameplayEvent {
		constexpr auto Radius = 0x244; // float
	}

	namespace n_UDistributionVectorConstantCurve {
		constexpr auto ConstantCurve = 0x38; // FInterpCurveVector
		constexpr auto bLockAxes = 0x50; // char : 1
		constexpr auto LockedAxes = 0x54; // EDistributionVectorLockFlags
	}

	namespace n_UMovieSceneSequence {
		constexpr auto CompiledData = 0x50; // UMovieSceneCompiledData*
		constexpr auto DefaultCompletionMode = 0x58; // EMovieSceneCompletionMode
		constexpr auto bParentContextsAreSignificant = 0x59; // bool
		constexpr auto bPlayableDirectly = 0x5a; // bool
		constexpr auto SequenceFlags = 0x5b; // EMovieSceneSequenceFlags
	}

	namespace n_UGeometryCollectionComponent {
		constexpr auto ChaosSolverActor = 0x480; // AChaosSolverActor*
		constexpr auto RestCollection = 0x568; // UGeometryCollection*
		constexpr auto InitializationFields = 0x570; // TArray<AFieldSystemActor*>
		constexpr auto Simulating = 0x580; // bool
		constexpr auto ObjectType = 0x588; // EObjectStateTypeEnum
		constexpr auto EnableClustering = 0x589; // bool
		constexpr auto ClusterGroupIndex = 0x58c; // int32_t
		constexpr auto MaxClusterLevel = 0x590; // int32_t
		constexpr auto DamageThreshold = 0x598; // TArray<float>
		constexpr auto ClusterConnectionType = 0x5a8; // EClusterConnectionTypeEnum
		constexpr auto CollisionGroup = 0x5ac; // int32_t
		constexpr auto CollisionSampleFraction = 0x5b0; // float
		constexpr auto LinearEtherDrag = 0x5b4; // float
		constexpr auto AngularEtherDrag = 0x5b8; // float
		constexpr auto PhysicalMaterial = 0x5c0; // UChaosPhysicalMaterial*
		constexpr auto InitialVelocityType = 0x5c8; // EInitialVelocityTypeEnum
		constexpr auto InitialLinearVelocity = 0x5cc; // FVector
		constexpr auto InitialAngularVelocity = 0x5d8; // FVector
		constexpr auto PhysicalMaterialOverride = 0x5e8; // UPhysicalMaterial*
		constexpr auto CacheParameters = 0x5f0; // FGeomComponentCacheParameters
		constexpr auto NotifyGeometryCollectionPhysicsStateChange = 0x640; // FMulticastInlineDelegate
		constexpr auto NotifyGeometryCollectionPhysicsLoadingStateChange = 0x650; // FMulticastInlineDelegate
		constexpr auto OnChaosBreakEvent = 0x678; // FMulticastInlineDelegate
		constexpr auto DesiredCacheTime = 0x688; // float
		constexpr auto CachePlayback = 0x68c; // bool
		constexpr auto OnChaosPhysicsCollision = 0x690; // FMulticastInlineDelegate
		constexpr auto bNotifyBreaks = 0x6a0; // bool
		constexpr auto bNotifyCollisions = 0x6a1; // bool
		constexpr auto bEnableReplication = 0x6a2; // bool
		constexpr auto bEnableAbandonAfterLevel = 0x6a3; // bool
		constexpr auto ReplicationAbandonClusterLevel = 0x6a4; // int32_t
		constexpr auto RepData = 0x6a8; // FGeometryCollectionRepData
		constexpr auto DummyBodySetup = 0x8d8; // UBodySetup*
	}

	namespace n_USFPSAnimEvent_Weap_SRReloadFlag {
		constexpr auto ActionNumber = 0x38; // int32_t
	}

	namespace n_UMaterialInstance {
		constexpr auto PhysMaterial = 0x88; // UPhysicalMaterial*
		constexpr auto PhysicalMaterialMap = 0x90; // UPhysicalMaterial* [0x8]
		constexpr auto Parent = 0xd0; // UMaterialInterface*
		constexpr auto bHasStaticPermutationResource = 0xd8; // char : 1
		constexpr auto bOverrideSubsurfaceProfile = 0xd8; // char : 1
		constexpr auto ScalarParameterValues = 0xe0; // TArray<FScalarParameterValue>
		constexpr auto VectorParameterValues = 0xf0; // TArray<FVectorParameterValue>
		constexpr auto TextureParameterValues = 0x100; // TArray<FTextureParameterValue>
		constexpr auto RuntimeVirtualTextureParameterValues = 0x110; // TArray<FRuntimeVirtualTextureParameterValue>
		constexpr auto FontParameterValues = 0x120; // TArray<FFontParameterValue>
		constexpr auto BasePropertyOverrides = 0x130; // FMaterialInstanceBasePropertyOverrides
		constexpr auto StaticParameters = 0x148; // FStaticParameterSet
		constexpr auto CachedLayerParameters = 0x188; // FMaterialCachedParameters
		constexpr auto CachedReferencedTextures = 0x2d8; // TArray<UObject*>
	}

	namespace n_UParticleModuleVectorFieldScaleOverLife {
		constexpr auto VectorFieldScaleOverLife = 0x30; // UDistributionFloat*
		constexpr auto VectorFieldScaleOverLifeRaw = 0x38; // FRawDistributionFloat
	}

	namespace n_AMaterialInstanceActor {
		constexpr auto TargetActors = 0x220; // TArray<AActor*>
	}

	namespace n_ULocalLightComponent {
		constexpr auto IntensityUnits = 0x328; // ELightUnits
		constexpr auto Radius = 0x32c; // float
		constexpr auto AttenuationRadius = 0x330; // float
		constexpr auto LightmassSettings = 0x334; // FLightmassPointLightSettings
	}

	namespace n_UMovieSceneEventSection {
		constexpr auto Events = 0xe8; // FNameCurve
		constexpr auto EventData = 0x160; // FMovieSceneEventSectionData
	}

	namespace n_UMicroTransactionBase {
		constexpr auto AvailableProducts = 0x38; // TArray<FPurchaseInfo>
		constexpr auto LastError = 0x48; // FString
		constexpr auto LastErrorSolution = 0x58; // FString
	}

	namespace n_UParticleModuleVelocity_Seeded {
		constexpr auto RandomSeedInfo = 0xb0; // FParticleRandomSeedInfo
	}

	namespace n_UPointLightComponent {
		constexpr auto bUseInverseSquaredFalloff = 0x340; // char : 1
		constexpr auto LightFalloffExponent = 0x344; // float
		constexpr auto SourceRadius = 0x348; // float
		constexpr auto SoftSourceRadius = 0x34c; // float
		constexpr auto SourceLength = 0x350; // float
	}

	namespace n_UInAppPurchaseRestoreCallbackProxy {
		constexpr auto OnSuccess = 0x28; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x38; // FMulticastInlineDelegate
	}

	namespace n_ABM_WallDoor_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto Overlap = 0x360; // UBoxComponent*
		constexpr auto Door_01 = 0x368; // UStaticMeshComponent*
		constexpr auto SFPSACDoor = 0x370; // USFPSACDoor*
		constexpr auto SFPSACSnap = 0x378; // USFPSACSnapComponent*
	}

	namespace n_Aweapon_firearms_sg_mp43_sawed_off_C {
		constexpr auto SFPSACWeaponMFInventory = 0x7e0; // USFPSACWeaponMFInventory*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto RightShell = 0x7f0; // UStaticMeshComponent*
		constexpr auto LeftShellEmpty = 0x7f8; // UStaticMeshComponent*
		constexpr auto RightShellEmpty = 0x800; // UStaticMeshComponent*
		constexpr auto LeftShell = 0x808; // UStaticMeshComponent*
	}

	namespace n_UPhysicsHandleComponent {
		constexpr auto GrabbedComponent = 0xb0; // UPrimitiveComponent*
		constexpr auto bSoftAngularConstraint = 0xc0; // char : 1
		constexpr auto bSoftLinearConstraint = 0xc0; // char : 1
		constexpr auto bInterpolateTarget = 0xc0; // char : 1
		constexpr auto LinearDamping = 0xc4; // float
		constexpr auto LinearStiffness = 0xc8; // float
		constexpr auto AngularDamping = 0xcc; // float
		constexpr auto AngularStiffness = 0xd0; // float
		constexpr auto InterpolationSpeed = 0x140; // float
	}

	namespace n_UMaterialExpressionChannelMaskParameter {
		constexpr auto MaskChannel = 0x70; // EChannelMaskParameterColor
	}

	namespace n_USoundNodeSoundClass {
		constexpr auto SoundClassOverride = 0x48; // USoundClass*
	}

	namespace n_UMaterialExpressionRound {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMovieScenePrimitiveMaterialTrack {
		constexpr auto MaterialIndex = 0xc8; // int32_t
	}

	namespace n_ARuntimeVirtualTextureVolume {
		constexpr auto VirtualTextureComponent = 0x220; // URuntimeVirtualTextureComponent*
	}

	namespace n_At_HandguardDeviceLeft_C {
		constexpr auto Trace = 0x348; // UBoxComponent*
		constexpr auto Mesh = 0x350; // UStaticMeshComponent*
	}

	namespace n_UMaterialExpressionRotator {
		constexpr auto Coordinate = 0x40; // FExpressionInput
		constexpr auto Time = 0x54; // FExpressionInput
		constexpr auto CenterX = 0x68; // float
		constexpr auto CenterY = 0x6c; // float
		constexpr auto Speed = 0x70; // float
		constexpr auto ConstCoordinate = 0x74; // uint32_t
	}

	namespace n_UInterpTrackBoolProp {
		constexpr auto BoolTrack = 0x70; // TArray<FBoolTrackKey>
		constexpr auto PropertyName = 0x80; // FName
	}

	namespace n_USplineMeshComponent {
		constexpr auto SplineParams = 0x4e8; // FSplineMeshParams
		constexpr auto SplineUpDir = 0x540; // FVector
		constexpr auto SplineBoundaryMin = 0x54c; // float
		constexpr auto CachedMeshBodySetupGuid = 0x550; // FGuid
		constexpr auto BodySetup = 0x560; // UBodySetup*
		constexpr auto SplineBoundaryMax = 0x568; // float
		constexpr auto bAllowSplineEditingPerInstance = 0x56c; // char : 1
		constexpr auto bSmoothInterpRollScale = 0x56c; // char : 1
		constexpr auto bMeshDirty = 0x56c; // char : 1
		constexpr auto ForwardAxis = 0x56d; // ESplineMeshAxis
		constexpr auto VirtualTextureMainPassMaxDrawDistance = 0x570; // float
	}

	namespace n_USlider {
		constexpr auto Value = 0x108; // float
		constexpr auto ValueDelegate = 0x10c; // FDelegate
		constexpr auto MinValue = 0x11c; // float
		constexpr auto MaxValue = 0x120; // float
		constexpr auto WidgetStyle = 0x128; // FSliderStyle
		constexpr auto Orientation = 0x468; // EOrientation
		constexpr auto SliderBarColor = 0x46c; // FLinearColor
		constexpr auto SliderHandleColor = 0x47c; // FLinearColor
		constexpr auto IndentHandle = 0x48c; // bool
		constexpr auto Locked = 0x48d; // bool
		constexpr auto MouseUsesStep = 0x48e; // bool
		constexpr auto RequiresControllerLock = 0x48f; // bool
		constexpr auto StepSize = 0x490; // float
		constexpr auto IsFocusable = 0x494; // bool
		constexpr auto OnMouseCaptureBegin = 0x498; // FMulticastInlineDelegate
		constexpr auto OnMouseCaptureEnd = 0x4a8; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureBegin = 0x4b8; // FMulticastInlineDelegate
		constexpr auto OnControllerCaptureEnd = 0x4c8; // FMulticastInlineDelegate
		constexpr auto OnValueChanged = 0x4d8; // FMulticastInlineDelegate
	}

	namespace n_UARBasicLightEstimate {
		constexpr auto AmbientIntensityLumens = 0x28; // float
		constexpr auto AmbientColorTemperatureKelvin = 0x2c; // float
		constexpr auto AmbientColor = 0x30; // FLinearColor
	}

	namespace n_Aweapon_firearms_snip_s85_C {
		constexpr auto DeviceLeftMount = 0x7e0; // UStaticMeshComponent*
		constexpr auto ShellMagazine = 0x7e8; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x7f0; // UStaticMeshComponent*
		constexpr auto ShellBarrelEmpty = 0x7f8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x800; // UStaticMeshComponent*
		constexpr auto MagazineFull = 0x808; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x810; // USFPSACWeaponMFInventory*
	}

	namespace n_UFoliageType_InstancedStaticMesh {
		constexpr auto Mesh = 0x3b0; // UStaticMesh*
		constexpr auto OverrideMaterials = 0x3b8; // TArray<UMaterialInterface*>
		constexpr auto ComponentClass = 0x3c8; // UFoliageInstancedStaticMeshComponent*
	}

	namespace n_ABM_WallLow_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_UInterpTrackVectorMaterialParam {
		constexpr auto TargetMaterials = 0x90; // TArray<UMaterialInterface*>
		constexpr auto ParamName = 0xa0; // FName
	}

	namespace n_APlayerCameraManager {
		constexpr auto PCOwner = 0x220; // APlayerController*
		constexpr auto TransformComponent = 0x228; // USceneComponent*
		constexpr auto DefaultFOV = 0x238; // float
		constexpr auto DefaultOrthoWidth = 0x240; // float
		constexpr auto DefaultAspectRatio = 0x248; // float
		constexpr auto CameraCache = 0x290; // FCameraCacheEntry
		constexpr auto LastFrameCameraCache = 0x890; // FCameraCacheEntry
		constexpr auto ViewTarget = 0xe90; // FTViewTarget
		constexpr auto PendingViewTarget = 0x14a0; // FTViewTarget
		constexpr auto CameraCachePrivate = 0x1ae0; // FCameraCacheEntry
		constexpr auto LastFrameCameraCachePrivate = 0x20e0; // FCameraCacheEntry
		constexpr auto ModifierList = 0x26e0; // TArray<UCameraModifier*>
		constexpr auto DefaultModifiers = 0x26f0; // TArray<UCameraModifier*>
		constexpr auto FreeCamDistance = 0x2700; // float
		constexpr auto FreeCamOffset = 0x2704; // FVector
		constexpr auto ViewTargetOffset = 0x2710; // FVector
		constexpr auto OnAudioFadeChangeEvent = 0x2720; // FMulticastInlineDelegate
		constexpr auto CameraLensEffects = 0x2740; // TArray<AEmitterCameraLensEffectBase*>
		constexpr auto CachedCameraShakeMod = 0x2750; // UCameraModifier_CameraShake*
		constexpr auto AnimInstPool = 0x2758; // UCameraAnimInst* [0x8]
		constexpr auto PostProcessBlendCache = 0x2798; // TArray<FPostProcessSettings>
		constexpr auto ActiveAnims = 0x27b8; // TArray<UCameraAnimInst*>
		constexpr auto FreeAnims = 0x27c8; // TArray<UCameraAnimInst*>
		constexpr auto AnimCameraActor = 0x27d8; // ACameraActor*
		constexpr auto bIsOrthographic = 0x27e0; // char : 1
		constexpr auto bDefaultConstrainAspectRatio = 0x27e0; // char : 1
		constexpr auto bClientSimulatingViewTarget = 0x27e0; // char : 1
		constexpr auto bUseClientSideCameraUpdates = 0x27e0; // char : 1
		constexpr auto bGameCameraCutThisFrame = 0x27e1; // char : 1
		constexpr auto ViewPitchMin = 0x27e4; // float
		constexpr auto ViewPitchMax = 0x27e8; // float
		constexpr auto ViewYawMin = 0x27ec; // float
		constexpr auto ViewYawMax = 0x27f0; // float
		constexpr auto ViewRollMin = 0x27f4; // float
		constexpr auto ViewRollMax = 0x27f8; // float
		constexpr auto ServerUpdateCameraTimeout = 0x2800; // float
	}

	namespace n_USoundEffectSourcePresetChain {
		constexpr auto Chain = 0x28; // TArray<FSourceEffectChainEntry>
		constexpr auto bPlayEffectChainTails = 0x38; // char : 1
	}

	namespace n_UChaosPhysicalMaterial {
		constexpr auto Friction = 0x28; // float
		constexpr auto StaticFriction = 0x2c; // float
		constexpr auto Restitution = 0x30; // float
		constexpr auto LinearEtherDrag = 0x34; // float
		constexpr auto AngularEtherDrag = 0x38; // float
		constexpr auto SleepingLinearVelocityThreshold = 0x3c; // float
		constexpr auto SleepingAngularVelocityThreshold = 0x40; // float
	}

	namespace n_UGeometryCollectionDebugDrawComponent {
		constexpr auto GeometryCollectionDebugDrawActor = 0xb0; // AGeometryCollectionDebugDrawActor*
		constexpr auto GeometryCollectionRenderLevelSetActor = 0xb8; // AGeometryCollectionRenderLevelSetActor*
	}

	namespace n_UDcxVehicleDriveComponent4W {
		constexpr auto DifferentialData = 0x3b8; // FDcxVehicleDifferentialData4W
		constexpr auto AckermannGeometryAccuracy = 0x3d4; // float
	}

	namespace n_UMaterialExpressionStaticSwitch {
		constexpr auto DefaultValue = 0x40; // char : 1
		constexpr auto A = 0x44; // FExpressionInput
		constexpr auto B = 0x58; // FExpressionInput
		constexpr auto Value = 0x6c; // FExpressionInput
	}

	namespace n_UNavCollisionBase {
		constexpr auto bIsDynamicObstacle = 0x28; // char : 1
	}

	namespace n_ANavLinkProxy {
		constexpr auto PointLinks = 0x230; // TArray<FNavigationLink>
		constexpr auto SegmentLinks = 0x240; // TArray<FNavigationSegmentLink>
		constexpr auto SmartLinkComp = 0x250; // UNavLinkCustomComponent*
		constexpr auto bSmartLinkIsRelevant = 0x258; // bool
		constexpr auto OnSmartLinkReached = 0x260; // FMulticastInlineDelegate
	}

	namespace n_UMovieSceneVectorTrack {
		constexpr auto NumChannelsUsed = 0xc0; // int32_t
	}

	namespace n_UFormItemMessage_C {
		constexpr auto svItem = 0x260; // UfrmSpriteViewMessage_C*
	}

	namespace n_USFPSUserWidget_AdminPanel_DeathL {
		constexpr auto OnSelectEvent = 0x2d0; // FDelegate
	}

	namespace n_UAnimationSharingSetup {
		constexpr auto SkeletonSetups = 0x28; // TArray<FPerSkeletonAnimationSharingSetup>
		constexpr auto ScalabilitySettings = 0x38; // FAnimationSharingScalability
	}

	namespace n_UCrowdManager {
		constexpr auto MyNavData = 0x28; // ANavigationData*
		constexpr auto AvoidanceConfig = 0x30; // TArray<FCrowdAvoidanceConfig>
		constexpr auto SamplingPatterns = 0x40; // TArray<FCrowdAvoidanceSamplingPattern>
		constexpr auto MaxAgents = 0x50; // int32_t
		constexpr auto MaxAgentRadius = 0x54; // float
		constexpr auto MaxAvoidedAgents = 0x58; // int32_t
		constexpr auto MaxAvoidedWalls = 0x5c; // int32_t
		constexpr auto NavmeshCheckInterval = 0x60; // float
		constexpr auto PathOptimizationInterval = 0x64; // float
		constexpr auto SeparationDirClamp = 0x68; // float
		constexpr auto PathOffsetRadiusMultiplier = 0x6c; // float
		constexpr auto bResolveCollisions = 0x70; // char : 1
	}

	namespace n_AGeometryCollectionRenderLevelSetActor {
		constexpr auto TargetVolumeTexture = 0x220; // UVolumeTexture*
		constexpr auto RayMarchMaterial = 0x228; // UMaterial*
		constexpr auto SurfaceTolerance = 0x230; // float
		constexpr auto Isovalue = 0x234; // float
		constexpr auto Enabled = 0x238; // bool
		constexpr auto RenderVolumeBoundingBox = 0x239; // bool
	}

	namespace n_URuntimeVirtualTexture {
		constexpr auto TileCount = 0x28; // int32_t
		constexpr auto TileSize = 0x2c; // int32_t
		constexpr auto TileBorderSize = 0x30; // int32_t
		constexpr auto MaterialType = 0x34; // ERuntimeVirtualTextureMaterialType
		constexpr auto bCompressTextures = 0x35; // bool
		constexpr auto bClearTextures = 0x36; // bool
		constexpr auto bSinglePhysicalSpace = 0x37; // bool
		constexpr auto bPrivateSpace = 0x38; // bool
		constexpr auto bAdaptive = 0x39; // bool
		constexpr auto bContinuousUpdate = 0x3a; // bool
		constexpr auto RemoveLowMips = 0x3c; // int32_t
		constexpr auto LODGroup = 0x40; // TextureGroup
		constexpr auto Size = 0x44; // int32_t
		constexpr auto StreamingTexture = 0x48; // URuntimeVirtualTextureStreamingProxy*
	}

	namespace n_UParticleModuleVelocityBase {
		constexpr auto bInWorldSpace = 0x30; // char : 1
		constexpr auto bApplyOwnerScale = 0x30; // char : 1
	}

	namespace n_USubmixEffectReverbPreset {
		constexpr auto Settings = 0xd0; // FSubmixEffectReverbSettings
	}

	namespace n_APlayerStart {
		constexpr auto PlayerStartTag = 0x248; // FName
	}

	namespace n_AOnlineBeaconClient {
		constexpr auto BeaconOwner = 0x250; // AOnlineBeaconHostObject*
		constexpr auto BeaconConnection = 0x258; // UNetConnection*
		constexpr auto ConnectionState = 0x260; // EBeaconConnectionState
	}

	namespace n_UEditableTextBox {
		constexpr auto Text = 0x108; // FText
		constexpr auto TextDelegate = 0x120; // FDelegate
		constexpr auto WidgetStyle = 0x130; // FEditableTextBoxStyle
		constexpr auto Style = 0x928; // USlateWidgetStyleAsset*
		constexpr auto HintText = 0x930; // FText
		constexpr auto HintTextDelegate = 0x948; // FDelegate
		constexpr auto Font = 0x958; // FSlateFontInfo
		constexpr auto ForegroundColor = 0x9b0; // FLinearColor
		constexpr auto BackgroundColor = 0x9c0; // FLinearColor
		constexpr auto ReadOnlyForegroundColor = 0x9d0; // FLinearColor
		constexpr auto IsReadOnly = 0x9e0; // bool
		constexpr auto IsPassword = 0x9e1; // bool
		constexpr auto MinimumDesiredWidth = 0x9e4; // float
		constexpr auto Padding = 0x9e8; // FMargin
		constexpr auto IsCaretMovedWhenGainFocus = 0x9f8; // bool
		constexpr auto SelectAllTextWhenFocused = 0x9f9; // bool
		constexpr auto RevertTextOnEscape = 0x9fa; // bool
		constexpr auto ClearKeyboardFocusOnCommit = 0x9fb; // bool
		constexpr auto SelectAllTextOnCommit = 0x9fc; // bool
		constexpr auto AllowContextMenu = 0x9fd; // bool
		constexpr auto KeyboardType = 0x9fe; // EVirtualKeyboardType
		constexpr auto VirtualKeyboardOptions = 0x9ff; // FVirtualKeyboardOptions
		constexpr auto VirtualKeyboardTrigger = 0xa00; // EVirtualKeyboardTrigger
		constexpr auto VirtualKeyboardDismissAction = 0xa01; // EVirtualKeyboardDismissAction
		constexpr auto Justification = 0xa02; // ETextJustify
		constexpr auto ShapedTextOptions = 0xa03; // FShapedTextOptions
		constexpr auto OnTextChanged = 0xa08; // FMulticastInlineDelegate
		constexpr auto OnTextCommitted = 0xa18; // FMulticastInlineDelegate
	}

	namespace n_UEnvQueryTest_PathfindingBatch {
		constexpr auto ScanRangeMultiplier = 0x280; // FAIDataProviderFloatValue
	}

	namespace n_UExporter {
		constexpr auto SupportedClass = 0x28; // UObject*
		constexpr auto ExportRootScope = 0x30; // UObject*
		constexpr auto FormatExtension = 0x38; // TArray<FString>
		constexpr auto FormatDescription = 0x48; // TArray<FString>
		constexpr auto PreferredFormatIndex = 0x58; // int32_t
		constexpr auto TextIndent = 0x5c; // int32_t
		constexpr auto bText = 0x60; // char : 1
		constexpr auto bSelectedOnly = 0x60; // char : 1
		constexpr auto bForceFileOperations = 0x60; // char : 1
		constexpr auto ExportTask = 0x68; // UAssetExportTask*
	}

	namespace n_UMaterialExpressionCosine {
		constexpr auto Input = 0x40; // FExpressionInput
		constexpr auto Period = 0x54; // float
	}

	namespace n_UMovieSceneEntitySystemLinker {
		constexpr auto SystemGraph = 0x298; // FMovieSceneEntitySystemGraph
	}

	namespace n_UMaterialExpressionSceneColor {
		constexpr auto InputMode = 0x40; // EMaterialSceneAttributeInputMode
		constexpr auto Input = 0x44; // FExpressionInput
		constexpr auto OffsetFraction = 0x58; // FExpressionInput
		constexpr auto ConstInput = 0x6c; // FVector2D
	}

	namespace n_UMaterialExpressionVirtualTextureFeatureSwitch {
		constexpr auto No = 0x40; // FExpressionInput
		constexpr auto Yes = 0x54; // FExpressionInput
	}

	namespace n_UInterpTrackInstProperty {
		constexpr auto InterpProperty = 0x28; // TFieldPath<FProperty>
		constexpr auto PropertyOuterObjectInst = 0x48; // UObject*
	}

	namespace n_AGameSession {
		constexpr auto MaxSpectators = 0x220; // int32_t
		constexpr auto MaxPlayers = 0x224; // int32_t
		constexpr auto MaxPartySize = 0x228; // int32_t
		constexpr auto MaxSplitscreensPerConnection = 0x22c; // char
		constexpr auto bRequiresPushToTalk = 0x22d; // bool
		constexpr auto SessionName = 0x230; // FName
	}

	namespace n_UBrushComponent {
		constexpr auto Brush = 0x450; // UModel*
		constexpr auto BrushBodySetup = 0x458; // UBodySetup*
	}

	namespace n_ABMF_Sandbags_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
	}

	namespace n_ABM_Wall_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_ASFPSItemSkin {
		constexpr auto Materials = 0x310; // TArray<UMaterialInstance*>
	}

	namespace n_ASceneCaptureCube {
		constexpr auto CaptureComponentCube = 0x230; // USceneCaptureComponentCube*
	}

	namespace n_USFPSSingleton {
		constexpr auto CraftLibrary = 0x28; // USFPSCraftLibrary*
		constexpr auto ActorLibrary = 0x30; // USFPSActorLibrary*
		constexpr auto AdminItemList = 0x38; // USFPSAdminItemList*
		constexpr auto ServerStatThreadManager = 0x40; // USFPSServerStatThreadManager*
		constexpr auto GreenAreas = 0x48; // TArray<AActor*>
		constexpr auto CraftLibraryBP = 0x58; // USFPSCraftLibrary*
		constexpr auto ActorLibraryBP = 0x60; // USFPSActorLibrary*
		constexpr auto AdminItemListBP = 0x68; // USFPSAdminItemList*
		constexpr auto CharacterDefaultBodyMeshes = 0x70; // FSFPSCharacterDefaultBodyMeshes
		constexpr auto CharacterDefaultMeshes = 0x90; // TArray<FSFPSCharacterDefaultMeshes>
		constexpr auto UnderwearMaterials = 0xa0; // FSFPSMaterialPair [0x2]
		constexpr auto ShotRandomParams = 0xc0; // TArray<FSFPSShotRandomParams>
		constexpr auto MissionStaticParams = 0xd0; // FSFPSMissionStaticParamsList
		constexpr auto CharacterDefaultTrousers = 0xe0; // FSFPSItemSetStruct
		constexpr auto FatigueRecover = 0xf8; // float
		constexpr auto FatigueRun = 0xfc; // float
		constexpr auto FatigueSprint = 0x100; // float
		constexpr auto FatigueShotRecover = 0x104; // float
		constexpr auto FatigueWeaponTypes = 0x108; // FSFPSSmallArmsFatigue [0x6]
		constexpr auto HoldBreath_SpeedStart = 0x168; // float
		constexpr auto HoldBreath_SpeedStop = 0x16c; // float
		constexpr auto HoldBreath_AsphyxiaSpeed = 0x170; // float
		constexpr auto HoldBreath_AsphyxiaFatigueSpeed = 0x174; // float
		constexpr auto HoldBreath_OxygenationSpeed = 0x178; // float
		constexpr auto HoldBreath_FatigueIncreaseSpeed = 0x17c; // float
	}

	namespace n_USourceEffectFoldbackDistortionPreset {
		constexpr auto Settings = 0x9c; // FSourceEffectFoldbackDistortionSettings
	}

	namespace n_UParticleModuleLifetime {
		constexpr auto LifeTime = 0x30; // FRawDistributionFloat
	}

	namespace n_ABandwidthTestActor {
		constexpr auto BandwidthGenerator = 0x220; // FBandwidthTestGenerator
	}

	namespace n_UARCandidateObject {
		constexpr auto CandidateObjectData = 0x30; // TArray<char>
		constexpr auto FriendlyName = 0x40; // FString
		constexpr auto BoundingBox = 0x50; // FBox
	}

	namespace n_Aweapon_firearms_rifle_scar_C {
		constexpr auto DTK = 0x7e0; // UStaticMeshComponent*
		constexpr auto DeviceLeftMount = 0x7e8; // UStaticMeshComponent*
		constexpr auto SightClose = 0x7f0; // UStaticMeshComponent*
		constexpr auto SightOpen = 0x7f8; // UStaticMeshComponent*
		constexpr auto SFPSACWeaponMFInventory = 0x800; // USFPSACWeaponMFInventory*
		constexpr auto MagazineFull = 0x808; // UStaticMeshComponent*
		constexpr auto MagazineEmpty = 0x810; // UStaticMeshComponent*
	}

	namespace n_AM_TripwireTrap_02_C {
		constexpr auto Interaction = 0x358; // UBoxComponent*
		constexpr auto GrenadeCollision = 0x360; // UBoxComponent*
		constexpr auto ExplosionCollision = 0x368; // UBoxComponent*
		constexpr auto ACTripwireTrap = 0x370; // USFPSACTripwireTrap*
		constexpr auto SFPSACBaseCollision1 = 0x378; // USFPSACBaseCollision*
	}

	namespace n_UInterpTrackFloatBase {
		constexpr auto FloatTrack = 0x70; // FInterpCurveFloat
		constexpr auto CurveTension = 0x88; // float
	}

	namespace n_ASFPSDeviceItem {
		constexpr auto bDeviceEnabled = 0x410; // bool
		constexpr auto GrenadeAdditionalPitch = 0x414; // float
		constexpr auto GrenadeAdditionalYaw = 0x418; // float
		constexpr auto bDisableOnSprint = 0x41c; // bool
		constexpr auto DeviceEnabledMesh = 0x420; // UStaticMesh*
		constexpr auto DeviceDisabledMesh = 0x428; // UStaticMesh*
		constexpr auto CooldownTime = 0x430; // float
		constexpr auto ActivationRange = 0x434; // float
		constexpr auto ParticlesSwitchToEnabled = 0x438; // UParticleSystem*
		constexpr auto ParticlesSwitchToDisabled = 0x440; // UParticleSystem*
		constexpr auto CustomTransform = 0x450; // FTransform
		constexpr auto LightIntensity = 0x480; // UCurveFloat*
	}

	namespace n_USoundNodeCrossfadeShootByDistanceOuterParam {
		constexpr auto CrossfadeOuterParam = 0x48; // UShootCrossfadeOuterParams*
	}

	namespace n_ABrush {
		constexpr auto BrushType = 0x220; // EBrushType
		constexpr auto BrushColor = 0x224; // FColor
		constexpr auto PolyFlags = 0x228; // int32_t
		constexpr auto bColored = 0x22c; // char : 1
		constexpr auto bSolidWhenSelected = 0x22c; // char : 1
		constexpr auto bPlaceableFromClassBrowser = 0x22c; // char : 1
		constexpr auto bNotForClientOrServer = 0x22c; // char : 1
		constexpr auto Brush = 0x230; // UModel*
		constexpr auto BrushComponent = 0x238; // UBrushComponent*
		constexpr auto bInManipulation = 0x240; // char : 1
		constexpr auto SavedSelections = 0x248; // TArray<FGeomSelection>
	}

	namespace n_UMaterialExpressionClearCoatNormalCustomOutput {
		constexpr auto Input = 0x40; // FExpressionInput
	}

	namespace n_UMediaSoundComponent {
		constexpr auto Channels = 0x6c0; // EMediaSoundChannels
		constexpr auto DynamicRateAdjustment = 0x6c4; // bool
		constexpr auto RateAdjustmentFactor = 0x6c8; // float
		constexpr auto RateAdjustmentRange = 0x6cc; // FFloatRange
		constexpr auto MediaPlayer = 0x6e0; // UMediaPlayer*
	}

	namespace n_At_InventoryDevice_C {
		constexpr auto Trace = 0x328; // UBoxComponent*
		constexpr auto Mesh = 0x330; // UStaticMeshComponent*
	}

	namespace n_UInterpTrackColorProp {
		constexpr auto PropertyName = 0x90; // FName
	}

	namespace n_USFPSACLootBoxInventory {
		constexpr auto InventorySize = 0xb0; // int32_t
		constexpr auto ClientInventory = 0xb8; // TArray<TWeakObjectPtr<ASFPSBaseItem>>
		constexpr auto Inventory = 0xc8; // TArray<FSFPSItemStruct>
	}

	namespace n_UBTDecorator_Loop {
		constexpr auto NumLoops = 0x68; // int32_t
		constexpr auto bInfiniteLoop = 0x6c; // bool
		constexpr auto InfiniteLoopTimeoutTime = 0x70; // float
	}

	namespace n_USequenceCameraShakeSequencePlayer {
		constexpr auto BoundObjectOverride = 0x2d0; // UObject*
		constexpr auto Sequence = 0x2d8; // UMovieSceneSequence*
		constexpr auto RootTemplateInstance = 0x2e0; // FMovieSceneRootEvaluationTemplateInstance
	}

	namespace n_UEndTurnCallbackProxy {
		constexpr auto OnSuccess = 0x30; // FMulticastInlineDelegate
		constexpr auto OnFailure = 0x40; // FMulticastInlineDelegate
	}

	namespace n_UMaterialExpressionDynamicParameter {
		constexpr auto ParamNames = 0x40; // TArray<FString>
		constexpr auto DefaultValue = 0x50; // FLinearColor
		constexpr auto ParameterIndex = 0x60; // uint32_t
	}

	namespace n_AMainMenuGameMode_C {
		constexpr auto DefaultSceneRoot = 0x308; // USceneComponent*
	}

	namespace n_UVRNotificationsComponent {
		constexpr auto HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate = 0xb0; // FMulticastInlineDelegate
		constexpr auto HMDTrackingInitializedDelegate = 0xc0; // FMulticastInlineDelegate
		constexpr auto HMDRecenteredDelegate = 0xd0; // FMulticastInlineDelegate
		constexpr auto HMDLostDelegate = 0xe0; // FMulticastInlineDelegate
		constexpr auto HMDReconnectedDelegate = 0xf0; // FMulticastInlineDelegate
		constexpr auto HMDConnectCanceledDelegate = 0x100; // FMulticastInlineDelegate
		constexpr auto HMDPutOnHeadDelegate = 0x110; // FMulticastInlineDelegate
		constexpr auto HMDRemovedFromHeadDelegate = 0x120; // FMulticastInlineDelegate
		constexpr auto VRControllerRecenteredDelegate = 0x130; // FMulticastInlineDelegate
	}

	namespace n_UObjectReferencer {
		constexpr auto ReferencedObjects = 0x28; // TArray<UObject*>
	}

	namespace n_UMaterialExpressionThinTranslucentMaterialOutput {
		constexpr auto TransmittanceColor = 0x40; // FExpressionInput
	}

	namespace n_UDatasmithSpotLightComponentTemplate {
		constexpr auto InnerConeAngle = 0x30; // float
		constexpr auto OuterConeAngle = 0x34; // float
	}

	namespace n_ABM_WallTria_01_C {
		constexpr auto SFPSACBaseCollision = 0x358; // USFPSACBaseCollision*
		constexpr auto SFPSACSnap = 0x360; // USFPSACSnapComponent*
	}

	namespace n_USFPSAnimEvent_StairStepSound {
		constexpr auto IsRightLeg = 0x38; // bool
	}

	namespace n_UResonanceAudioSoundfieldSettings {
		constexpr auto RenderMode = 0x28; // EResonanceRenderMode
	}

	namespace n_ATriggerBase {
		constexpr auto CollisionComponent = 0x220; // UShapeComponent*
	}

	namespace n_UCommandlet {
		constexpr auto HelpDescription = 0x28; // FString
		constexpr auto HelpUsage = 0x38; // FString
		constexpr auto HelpWebLink = 0x48; // FString
		constexpr auto HelpParamNames = 0x58; // TArray<FString>
		constexpr auto HelpParamDescriptions = 0x68; // TArray<FString>
		constexpr auto IsServer = 0x78; // char : 1
		constexpr auto IsClient = 0x78; // char : 1
		constexpr auto IsEditor = 0x78; // char : 1
		constexpr auto LogToConsole = 0x78; // char : 1
		constexpr auto ShowErrorCount = 0x78; // char : 1
		constexpr auto ShowProgress = 0x78; // char : 1
	}

	namespace n_UMaterialExpressionSceneTexture {
		constexpr auto Coordinates = 0x40; // FExpressionInput
		constexpr auto SceneTextureId = 0x54; // ESceneTextureId
		constexpr auto bFiltered = 0x55; // bool
	}

	namespace n_ULandscapeSplinesComponent {
		constexpr auto ControlPoints = 0x450; // TArray<ULandscapeSplineControlPoint*>
		constexpr auto Segments = 0x460; // TArray<ULandscapeSplineSegment*>
		constexpr auto CookedForeignMeshComponents = 0x470; // TArray<UMeshComponent*>
	}

	namespace n_UGranularSynth {
		constexpr auto GranulatedSoundWave = 0x6c0; // USoundWave*
	}

	namespace n_APaperCharacter {
		constexpr auto Sprite = 0x4b8; // UPaperFlipbookComponent*
	}

	namespace n_UMaterialExpressionInverseLinearInterpolate {
		constexpr auto A = 0x40; // FExpressionInput
		constexpr auto B = 0x54; // FExpressionInput
		constexpr auto Value = 0x68; // FExpressionInput
		constexpr auto ConstA = 0x7c; // float
		constexpr auto ConstB = 0x80; // float
		constexpr auto ConstValue = 0x84; // float
		constexpr auto bClampResult = 0x88; // bool
	}

	namespace n_ASFPSRepTestActor {
		constexpr auto GenInterval = 0x238; // int32_t
		constexpr auto CodeRepValue = 0x23c; // int32_t
	}

	namespace n_UUserDefinedCaptureProtocol {
		constexpr auto World = 0x58; // UWorld*
	}

	namespace n_UWidgetTree {
		constexpr auto RootWidget = 0x28; // UWidget*
	}

}