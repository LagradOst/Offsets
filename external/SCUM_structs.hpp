#pragma once

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry RuntimeEntries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0x140
	TArray<FLinearColor> VectorValues; // 0x150
	TArray<UTexture*> TextureValues; // 0x160
	TArray<UFont*> FontValues; // 0x170
	TArray<int32_t> FontPageValues; // 0x180
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FMovieSceneCaptureSettings {
	FDirectoryPath OutputDirectory; // 0x0
	AGameModeBase* GameModeOverride; // 0x10
	FString OutputFormat; // 0x18
	bool bOverwriteExisting; // 0x28
	bool bUseRelativeFrameNumbers; // 0x29
	int32_t HandleFrames; // 0x2c
	FString MovieExtension; // 0x30
	char ZeroPadFrameNumbers; // 0x40
	FFrameRate FrameRate; // 0x44
	bool bUseCustomFrameRate; // 0x4c
	FFrameRate CustomFrameRate; // 0x50
	FCaptureResolution Resolution; // 0x58
	bool bEnableTextureStreaming; // 0x60
	bool bCinematicEngineScalability; // 0x61
	bool bCinematicMode; // 0x62
	bool bAllowMovement; // 0x63
	bool bAllowTurning; // 0x64
	bool bShowPlayer; // 0x65
	bool bShowHUD; // 0x66
	bool bUsePathTracer; // 0x67
	int32_t PathTracerSamplePerPixel; // 0x68
};

struct FVehicleCorpseBurningParticles {
	UParticleSystem* Particles; // 0x0
	FTransform ParticlesTransform; // 0x10
	FHeatSourceParameters HeatSourceParameters; // 0x40
	FDbIntegerId HeatSourceId; // 0x68
};

struct FLightmassMaterialInterfaceSettings {
	float EmissiveBoost; // 0x0
	float DiffuseBoost; // 0x4
	float ExportResolutionScale; // 0x8
	char bCastShadowAsMasked : 1; // 0xc
	char bOverrideCastShadowAsMasked : 1; // 0xc
	char bOverrideEmissiveBoost : 1; // 0xc
	char bOverrideDiffuseBoost : 1; // 0xc
	char bOverrideExportResolutionScale : 1; // 0xc
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FDistantLevelDescription {
	FString Name; // 0x0
	FTransform Transform; // 0x10
	EDistantMeshStreamingBehavior MeshStreamingBehavior; // 0x40
	float MaxDrawDistance; // 0x44
	bool NeverDistanceCull; // 0x48
	FBoxSphereBounds MeshBounds; // 0x4c
	TSoftObjectPtr<UStaticMesh> CollisionMesh; // 0x68
	TArray<TSoftObjectPtr<UStaticMesh>> MeshLODs; // 0x90
};

struct FTeamDeathmatchParameters {
	int32_t RoundScoreLimit; // 0x0
	float AreaRestrictionInterval; // 0x4
	float AreaRestrictionDuration; // 0x8
	float AreaRestrictionStep; // 0xc
	float BarrierHeatUpDuration; // 0x10
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FCompositeSubFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingId; // 0x0
	uint16_t EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	TWeakObjectPtr<UMovieSceneTrack> SourceTrack; // 0x14
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x20
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0x30
	FName EvaluationGroup; // 0x68
	char bEvaluateInPreroll : 1; // 0x70
	char bEvaluateInPostroll : 1; // 0x70
	char bTearDownPriority : 1; // 0x70
};

struct FSpawnCharacterAroundInfo {
	TArray<APawn*> AvailablePawns; // 0x0
	FTransform Transform; // 0x10
	float MinSpawnRadius; // 0x40
	float MaxSpawnRadius; // 0x44
	int32_t NumOfCharactersToSpawn; // 0x48
	bool IgnoreLimit; // 0x4c
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FPlayerPawnBirdInfo {
	int32_t CoastalBirdsinProximity; // 0x0
	int32_t ContinetalBirdsinProximity; // 0x4
	int32_t VirtualAssignedCoastalBirds; // 0x8
	int32_t VirtualAssignedContinentalBirds; // 0xc
};

struct FBaseInteractionParams {
	FDbIntegerId ElementID; // 0x0
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FHairBendConstraint {
	bool SolveBend; // 0x0
	bool ProjectBend; // 0x1
	float BendDamping; // 0x4
	float BendStiffness; // 0x8
	FRuntimeFloatCurve BendScale; // 0x10
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FPrisonerInitialSkillInfo {
	USkill* Skill; // 0x0
	ESkillLevel InitialLevel; // 0x8
	float InitialExperiencePoints; // 0xc
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FSafeTransform {
	FSafeVector3D Scale; // 0x0
	FSafeVector3D position; // 0x78
	FSafeRotator Rotation; // 0xf0
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FBuryMaterialData {
	UMaterialInterface* Material; // 0x0
	UParticleSystem* BreachActionParticles; // 0x8
	UAkAudioEvent* BreachActionSound; // 0x10
	UParticleSystem* DumpActionParticles; // 0x18
	UAkAudioEvent* DumpActionSound; // 0x20
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FNavAgentProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float AgentMaxSlope; // 0x10
	float NavWalkingSearchHeightScale; // 0x14
	FSoftClassPath PreferredNavData; // 0x18
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FARFilter {
	TArray<FName> PackageNames; // 0x0
	TArray<FName> PackagePaths; // 0x10
	TArray<FName> ObjectPaths; // 0x20
	TArray<FName> ClassNames; // 0x30
	TSet<FName> RecursiveClassesExclusionSet; // 0x90
	bool bRecursivePaths; // 0xe0
	bool bRecursiveClasses; // 0xe1
	bool bIncludeOnlyOnDiskAssets; // 0xe2
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FMeleeWeaponDesc {
	float Damage; // 0x0
	float DamageInGameEvent; // 0x4
	float Energy; // 0x8
	float SharpnessSlash; // 0xc
	float SharpnessPierce; // 0x10
	int32_t HitSeverityChange; // 0x14
	ECharacterImpactSourceSoundCategory ImpactSoundCategory; // 0x18
	UProjectileImpactEffects* ImpactEffects; // 0x20
};

struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x0
	float FrameStartCPUFrameEndGPUTimeMs; // 0x4
	float FrameStartCPUFrameStartCPUTimeMs; // 0x8
	float FrameDurationCPUTimeMs; // 0xc
	float FrameDurationGPUTimeMs; // 0x10
	float FrameInternalDurationCPUTimeMs; // 0x14
	float FrameInternalDurationGPUTimeMs; // 0x18
};

struct FMIDIDeviceInfo {
	int32_t DeviceID; // 0x0
	FString DeviceName; // 0x8
	bool bIsAlreadyInUse; // 0x18
	bool bIsDefaultDevice; // 0x19
};

struct FLightmassDirectionalLightSettings {
	float LightSourceAngle; // 0xc
};

struct FSkillRecord {
	ESkillReplicationID ID; // 0x0
	float ExperiencePoints; // 0x4
	ESkillLevel Level; // 0x8
	int8_t counter; // 0x9
};

struct FSurvivalStats {
	float HighestPositiveFamePoints; // 0x8
	int32_t DoorsClaimed; // 0xc
	int32_t AnimalsKilled; // 0x10
	float MinutesSurvived; // 0x14
	int32_t Kills; // 0x18
	int32_t Deaths; // 0x1c
	int32_t LocksPicked; // 0x20
	int32_t PuppetsKilled; // 0x24
	int32_t GunsCrafted; // 0x28
	int32_t AmmoCrafted; // 0x2c
	int32_t BulletsCrafted; // 0x30
	int32_t ArrowsCrafted; // 0x34
	int32_t ClothingCrafted; // 0x38
	float LongestKillDistance; // 0x3c
	int32_t MeleeKills; // 0x40
	int32_t ArcheryKills; // 0x44
	int32_t PlayersKnockedOut; // 0x48
	int32_t TotalDefecations; // 0x4c
	int32_t TotalUrinations; // 0x50
	int32_t LightsFired; // 0x54
	int32_t ContainersLooted; // 0x58
	int32_t ItemsPutIntoContainers; // 0x5c
	int32_t DeathsByPrisoners; // 0x60
	int32_t AnimalsSkinned; // 0x64
	float FoodEaten; // 0x68
	float DistanceTravelledByFoot; // 0x6c
	int32_t WoundsPatched; // 0x70
	int32_t ItemsPickedUp; // 0x74
	float LiquidDrank; // 0x78
	int32_t TeethLost; // 0x7c
	int32_t TotalCaloriesIntake; // 0x80
	int32_t ShotsFired; // 0x84
	int32_t ShotsHit; // 0x88
	float RangeWeaponAccuracy; // 0x8c
	int32_t Headshots; // 0x90
	int32_t MeleeWeaponSwings; // 0x94
	int32_t MeleeWeaponHits; // 0x98
	float MeleeWeaponAccuracy; // 0x9c
	int32_t MeleeWeaponsCrafted; // 0xa0
	int32_t DroneKills; // 0xa4
	int32_t SentryKills; // 0xa8
	int32_t PrisonerKills; // 0xac
	int32_t PuppetsKnockedOut; // 0xb0
	int32_t Diarrheas; // 0xb4
	int32_t Vomits; // 0xb8
	float DistanceTravelledInVehicle; // 0xbc
	int32_t MushroomsEaten; // 0xc0
	float HighestMuscleMass; // 0xc4
	float HighestFat; // 0xc8
	int32_t HeartAttacks; // 0xcc
	int32_t Overdose; // 0xd0
	int32_t Starvation; // 0xd4
	float HighestDamageTaken; // 0xd8
	float HighestWeightCarried; // 0xdc
	int32_t EventsWon; // 0xe0
	int32_t EventsLost; // 0xe4
	float LowestNegativeFamePoints; // 0xe8
	float DistanceTravelledSwimming; // 0xec
	int32_t EventsEnemyKills; // 0xf0
	int32_t EventsDeaths; // 0xf4
	int32_t FlagCaptures; // 0xf8
	int32_t CrowsKilled; // 0xfc
	int32_t SeagullsKilled; // 0x100
	int32_t HorsesKilled; // 0x104
	int32_t BoarsKilled; // 0x108
	int32_t BearsKilled; // 0x10c
	int32_t GoatsKilled; // 0x110
	int32_t DeersKilled; // 0x114
	int32_t ChickensKilled; // 0x118
	int32_t RabbitsKilled; // 0x11c
	int32_t DonkeysKilled; // 0x120
	int32_t TimesMauledByABear; // 0x124
	float LongestAnimalKillDistance; // 0x128
	int32_t EventTeamKills; // 0x12c
	float KillDeathRatio; // 0x130
	float EventsKillDeathRatio; // 0x134
	float AlcoholDrank; // 0x138
	int32_t FoliageCut; // 0x13c
	FFishingStats FishingStats; // 0x140
	float DistanceTravelledByBoat; // 0x168
	float DistanceSailed; // 0x16c
	int32_t TimesCaughtByShark; // 0x170
	int32_t TimesEscapedSharkBite; // 0x174
};

struct FCarouselTextStyle {
	FMargin Padding; // 0x0
	EHorizontalAlignment HorizontalAlignment; // 0x10
	EVerticalAlignment VerticalAlignment; // 0x11
	FSlateFontInfo Font; // 0x18
	FLinearColor ColorAndOpacity; // 0x70
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FAudioEQEffect {
	float FrequencyCenter0; // 0x10
	float Gain0; // 0x14
	float Bandwidth0; // 0x18
	float FrequencyCenter1; // 0x1c
	float Gain1; // 0x20
	float Bandwidth1; // 0x24
	float FrequencyCenter2; // 0x28
	float Gain2; // 0x2c
	float Bandwidth2; // 0x30
	float FrequencyCenter3; // 0x34
	float Gain3; // 0x38
	float Bandwidth3; // 0x3c
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FLiveLinkLightFrameData {
	float Temperature; // 0xd0
	float Intensity; // 0xd4
	FColor LightColor; // 0xd8
	float InnerConeAngle; // 0xdc
	float OuterConeAngle; // 0xe0
	float AttenuationRadius; // 0xe4
	float SourceRadius; // 0xe8
	float SoftSourceRadius; // 0xec
	float SourceLength; // 0xf0
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FAnimNode_ConvertComponentToLocalSpace {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FMaterialProxySettings {
	FIntPoint TextureSize; // 0x0
	float GutterSpace; // 0x8
	float MetallicConstant; // 0xc
	float RoughnessConstant; // 0x10
	float AnisotropyConstant; // 0x14
	float SpecularConstant; // 0x18
	float OpacityConstant; // 0x1c
	float OpacityMaskConstant; // 0x20
	float AmbientOcclusionConstant; // 0x24
	ETextureSizingType TextureSizingType; // 0x28
	EMaterialMergeType MaterialMergeType; // 0x29
	EBlendMode BlendMode; // 0x2a
	char bAllowTwoSidedMaterial : 1; // 0x2b
	char bNormalMap : 1; // 0x2b
	char bTangentMap : 1; // 0x2b
	char bMetallicMap : 1; // 0x2b
	char bRoughnessMap : 1; // 0x2b
	char bAnisotropyMap : 1; // 0x2b
	char bSpecularMap : 1; // 0x2b
	char bEmissiveMap : 1; // 0x2b
	char bOpacityMap : 1; // 0x2c
	char bOpacityMaskMap : 1; // 0x2c
	char bAmbientOcclusionMap : 1; // 0x2c
	FIntPoint DiffuseTextureSize; // 0x30
	FIntPoint NormalTextureSize; // 0x38
	FIntPoint TangentTextureSize; // 0x40
	FIntPoint MetallicTextureSize; // 0x48
	FIntPoint RoughnessTextureSize; // 0x50
	FIntPoint AnisotropyTextureSize; // 0x58
	FIntPoint SpecularTextureSize; // 0x60
	FIntPoint EmissiveTextureSize; // 0x68
	FIntPoint OpacityTextureSize; // 0x70
	FIntPoint OpacityMaskTextureSize; // 0x78
	FIntPoint AmbientOcclusionTextureSize; // 0x80
};

struct FGerstnerWaveOctave {
	int32_t NumWaves; // 0x0
	float AmplitudeScale; // 0x4
	float MainDirection; // 0x8
	float SpreadAngle; // 0xc
	bool bUniformSpread; // 0x10
};

struct FZombieRelaxedStanceVariation2 {
	FZombieRelaxedStanceAnimations Animations; // 0x0
	float WalkAcceleration; // 0x8
	float WalkDeceleration; // 0xc
	float WalkSpeed; // 0x10
	float WalkSpeedInAnimation; // 0x14
	float WalkTurnRate; // 0x18
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x0
	float OverrideDrawDistance; // 0x4
	char bUseOverrideDrawDistance : 1; // 0x8
	char bAllowSpecificExclusion : 1; // 0x8
	char bSimplifyMesh : 1; // 0x8
	char bOnlyGenerateClustersForVolumes : 1; // 0x8
	char bReusePreviousLevelClusters : 1; // 0x8
	FMeshProxySettings ProxySetting; // 0xc
	FMeshMergingSettings MergeSetting; // 0xb4
	float DesiredBoundRadius; // 0x154
	float DesiredFillingPercentage; // 0x158
	int32_t MinNumberOfActorsToBuild; // 0x15c
};

struct FWaterBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FTabTextStyle {
	FMargin Padding; // 0x0
	EHorizontalAlignment HorizontalAlignment; // 0x10
	EVerticalAlignment VerticalAlignment; // 0x11
	FSlateFontInfo Font; // 0x18
	FLinearColor Color; // 0x70
	FVector2D ShadowOffset; // 0x80
	FLinearColor ShadowColorAndOpacity; // 0x88
};

struct FAnimNode_RotationMultiplier {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FAnimNode_SequenceEvaluator {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FFileManifestData {
	FString Filename; // 0x0
	FSHAHashData FileHash; // 0x10
	TArray<FChunkPartData> FileChunkParts; // 0x28
	TArray<FString> InstallTags; // 0x38
	bool bIsUnixExecutable; // 0x48
	FString SymlinkTarget; // 0x50
	bool bIsReadOnly; // 0x60
	bool bIsCompressed; // 0x61
};

struct FMovieSceneNiagaraParameterSectionTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FItemContainersArray {
	TArray<AItemContainer*> _itemContainers; // 0x0
};

struct FMultiplierByClass {
	UObject* ObjectClass; // 0x0
	float Multiplier; // 0x8
};

struct FAnimNode_LinkedAnimLayer {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FSimSpaceSettings {
	float MasterAlpha; // 0x0
	float VelocityScaleZ; // 0x4
	float MaxLinearVelocity; // 0x8
	float MaxAngularVelocity; // 0xc
	float MaxLinearAcceleration; // 0x10
	float MaxAngularAcceleration; // 0x14
	float ExternalLinearDrag; // 0x18
	FVector ExternalLinearDragV; // 0x1c
	FVector ExternalLinearVelocity; // 0x28
	FVector ExternalAngularVelocity; // 0x34
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FStaticSwitchParameter {
	bool Value; // 0x24
};

struct FFireAnimationData {
	FBodyWeaponAnimation BodyWeaponAnimation; // 0x0
	float TimeBetweenShots; // 0x10
	FBodyWeaponAnimation BodyWeaponAnimationChamber; // 0x18
	float TimeForChamber; // 0x28
	UWeaponActionWornOutFiringConditions* Conditions; // 0x30
	FRuntimeFloatCurve ProbabilityWeightCurve; // 0x38
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FOnlineProxyStoreOffer {
	FString OfferId; // 0x0
	FText Title; // 0x10
	FText Description; // 0x28
	FText LongDescription; // 0x40
	FText RegularPriceText; // 0x58
	int32_t RegularPrice; // 0x70
	FText PriceText; // 0x78
	int32_t NumericPrice; // 0x90
	FString CurrencyCode; // 0x98
	FDateTime ReleaseDate; // 0xa8
	FDateTime ExpirationDate; // 0xb0
	EOnlineProxyStoreOfferDiscountType DiscountType; // 0xb8
	TMap<FString, FString> DynamicFields; // 0xc0
};

struct FAttachmentSocketDataItem {
	FName BoneName; // 0x0
	UAttachmentSocketMountType* MountType; // 0x8
	AActor* MountedItem; // 0x10
};

struct FRepMovement {
	FVector LinearVelocity; // 0x0
	FVector AngularVelocity; // 0xc
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
	char bSimulatedPhysicSleep : 1; // 0x30
	char bRepPhysics : 1; // 0x30
	EVectorQuantization LocationQuantizationLevel; // 0x31
	EVectorQuantization VelocityQuantizationLevel; // 0x32
	ERotatorQuantization RotationQuantizationLevel; // 0x33
};

struct FWeaponViewKickData {
	float PitchMin; // 0x0
	float PitchMax; // 0x4
	float YawMin; // 0x8
	float YawMax; // 0xc
	float PitchDecrementSpeed; // 0x10
	float YawDecrementSpeed; // 0x14
};

struct FGPUSpriteEmitterInfo {
	UParticleModuleRequired* RequiredModule; // 0x0
	UParticleModuleSpawn* SpawnModule; // 0x8
	UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
	TArray<UParticleModule*> SpawnModules; // 0x18
	FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30
	FFloatDistribution VectorFieldScale; // 0xa0
	FFloatDistribution DragCoefficient; // 0xc0
	FFloatDistribution PointAttractorStrength; // 0xe0
	FFloatDistribution Resilience; // 0x100
	FVector ConstantAcceleration; // 0x120
	FVector PointAttractorPosition; // 0x12c
	float PointAttractorRadiusSq; // 0x138
	FVector OrbitOffsetBase; // 0x13c
	FVector OrbitOffsetRange; // 0x148
	FVector2D InvMaxSize; // 0x154
	float InvRotationRateScale; // 0x15c
	float MaxLifetime; // 0x160
	int32_t MaxParticleCount; // 0x164
	EParticleScreenAlignment ScreenAlignment; // 0x168
	EParticleAxisLock LockAxisFlag; // 0x169
	char bEnableCollision : 1; // 0x16c
	EParticleCollisionMode CollisionMode; // 0x170
	char bRemoveHMDRoll : 1; // 0x174
	float MinFacingCameraBlendDistance; // 0x178
	float MaxFacingCameraBlendDistance; // 0x17c
	FRawDistributionVector DynamicColor; // 0x180
	FRawDistributionFloat DynamicAlpha; // 0x1c8
	FRawDistributionVector DynamicColorScale; // 0x1f8
	FRawDistributionFloat DynamicAlphaScale; // 0x240
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FFoundMIDIDevice {
	int32_t DeviceID; // 0x0
	FString DeviceName; // 0x8
	bool bCanReceiveFrom; // 0x18
	bool bCanSendTo; // 0x19
	bool bIsAlreadyInUse; // 0x1a
	bool bIsDefaultInputDevice; // 0x1b
	bool bIsDefaultOutputDevice; // 0x1c
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FRadialDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FPowerCableMeshInfo {
	UStaticMesh* Mesh; // 0x0
	float Length; // 0x8
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FChoppingParametersPerSkillLevel {
	FExperienceDependentFloat ChoppingTime; // 0x0
	int32_t IngredientsQuantityBonus; // 0x8
};

struct FEdGraphSchemaAction {
	FText MenuDescription; // 0x8
	FText TooltipDescription; // 0x20
	FText Category; // 0x38
	FText Keywords; // 0x50
	int32_t Grouping; // 0x68
	int32_t SectionID; // 0x6c
	TArray<FString> MenuDescriptionArray; // 0x70
	TArray<FString> FullSearchTitlesArray; // 0x80
	TArray<FString> FullSearchKeywordsArray; // 0x90
	TArray<FString> FullSearchCategoryArray; // 0xa0
	TArray<FString> LocalizedMenuDescriptionArray; // 0xb0
	TArray<FString> LocalizedFullSearchTitlesArray; // 0xc0
	TArray<FString> LocalizedFullSearchKeywordsArray; // 0xd0
	TArray<FString> LocalizedFullSearchCategoryArray; // 0xe0
	FString SearchText; // 0xf0
};

struct FDcxAnalogControlArray {
	TArray<float> Items; // 0x0
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FDcxVehicleDriveInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceId; // 0x28
	FString InstanceName; // 0x38
	FString PlatformName; // 0x48
	FGuid SessionId; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FItemSpawnerDataBasedOnPreset {
	UItemSpawnerPreset* Preset; // 0x0
	bool OverrideItemClasses; // 0x8
	bool OverrideItemSpawnTypes; // 0x9
	bool OverrideAlwaysSpawn; // 0xa
	bool OverrideProbability; // 0xb
	bool OverrideUseItemZone; // 0xc
	bool OverrideUseItemRarity; // 0xd
	bool OverrideUseItemSpawnGroup; // 0xe
	bool OverrideInitialDamage; // 0xf
	bool OverrideRandomizeDamage; // 0x10
	bool OverrideInitialUsage; // 0x11
	bool OverrideRandomizeUsage; // 0x12
	bool OverrideInitialDirtiness; // 0x13
	bool OverrideRandomizeDirtiness; // 0x14
	bool OverrideMinAmmoCount; // 0x15
	bool OverrideMaxAmmoCount; // 0x16
	bool OverrideUseCollisionTraceToAdjustSpawnLocation; // 0x17
	bool OverrideUseCollisionTraceToAdjustSpawnRotation; // 0x18
	bool OverridePostItemsSpawnedActions; // 0x19
	TArray<TSoftClassPtr<UObject>> ItemClasses; // 0x20
	FGameplayTagContainer ItemSpawnTypes; // 0x30
	bool AlwaysSpawn; // 0x50
	float Probability; // 0x54
	bool UseItemZone; // 0x58
	bool UseItemRarity; // 0x59
	bool UseItemSpawnGroup; // 0x5a
	float InitialDamage; // 0x5c
	float RandomizeDamage; // 0x60
	float InitialUsage; // 0x64
	float RandomizeUsage; // 0x68
	float InitialDirtiness; // 0x6c
	float RandomizeDirtiness; // 0x70
	int32_t MinAmmoCount; // 0x74
	int32_t MaxAmmoCount; // 0x78
	bool UseCollisionTraceToAdjustSpawnLocation; // 0x7c
	bool UseCollisionTraceToAdjustSpawnRotation; // 0x7d
	UPostItemsSpawnedActions* PostItemsSpawnedActions; // 0x80
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FPrisonerTurnMontageDescription {
	UAnimSequenceBase* AnimationL90; // 0x0
	UAnimSequenceBase* AnimationR90; // 0x8
	FName TurnAngleCurveName; // 0x10
	FName SlotName; // 0x18
	float BlendInTime; // 0x20
	float BlendOutTime; // 0x24
	float BlendOutTriggerTime; // 0x28
	float PlayRate; // 0x2c
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FCarouselWithLabelStyle {
	FSlateBrush FocusBackgroundImage; // 0x0
	FCarouselTextStyle LabelText; // 0x88
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FTreeCanopyCapsule {
	FVector Center; // 0x0
	FRotator Rotation; // 0xc
	float Radius; // 0x18
	float Length; // 0x1c
	float CanopyDensity; // 0x20
};

struct FAnimNode_BlendListBase {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EBlendListTransitionType TransitionType; // 0x30
	EAlphaBlendOption BlendType; // 0x31
	bool bResetChildOnActivation; // 0x32
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
};

struct FQueuedDrawDebugItem {
	EDrawDebugItemType ItemType; // 0x0
	FVector StartLoc; // 0x4
	FVector EndLoc; // 0x10
	FVector Center; // 0x1c
	FRotator Rotation; // 0x28
	float Radius; // 0x34
	float Size; // 0x38
	int32_t Segments; // 0x3c
	FColor Color; // 0x40
	bool bPersistentLines; // 0x44
	float LifeTime; // 0x48
	float Thickness; // 0x4c
	FString Message; // 0x50
	FVector2D TextScale; // 0x60
};

struct FServerUsedItem {
	AItem* Item; // 0x0
	int32_t Quantity; // 0x8
	int32_t usage; // 0xc
	float usageWeight; // 0x10
	ECraftingType CraftingType; // 0x14
	bool SpawnHere; // 0x15
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FProviderPollResult {
	FString Name; // 0x10
	FString MachineName; // 0x20
	double MachineTimeOffset; // 0x30
};

struct FHairCardsClusterSettings {
	float ClusterDecimation; // 0x0
	EHairCardsClusterType Type; // 0x4
	bool bUseGuide; // 0x5
};

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FDcxVehicleSuspensionData {
	float NaturalFrequency; // 0x0
	float SpringDamperRatio; // 0x4
	float MaxCompression; // 0x8
	float MaxDroop; // 0xc
	float ForceOffset; // 0x10
	float CamberAtRest; // 0x14
	float CamberAtMaxCompression; // 0x18
	float CamberAtMaxDroop; // 0x1c
};

struct FVDCollisionSettings {
	ECollisionChannel ObjectType; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x1
	FCollisionResponse CollisionResponse; // 0x8
	FName CollisionProfileName; // 0x38
};

struct FSpawnedItems {
	int32_t ID; // 0x0
	EPickupItemOperation Operation; // 0x4
	TArray<AItem*> Items; // 0x8
};

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FRepairableParams {
	FGameplayTagContainer RepairableTypes; // 0x0
	float HealthRepairedPerUse; // 0x20
	float ExperienceAwardedPerHealthRepaired; // 0x24
	float MinRepairDuration; // 0x28
	float MaxRepairDuration; // 0x2c
	bool ShouldRepairZeroHealth; // 0x30
	ESkillLevel MinSkillLevelRequired; // 0x31
};

struct FAnimNode_SpringBone {
	FBoneReference SpringBone; // 0xc8
	float MaxDisplacement; // 0xd8
	float SpringStiffness; // 0xdc
	float SpringDamping; // 0xe0
	float ErrorResetThresh; // 0xe4
	char bLimitDisplacement : 1; // 0x124
	char bTranslateX : 1; // 0x124
	char bTranslateY : 1; // 0x124
	char bTranslateZ : 1; // 0x124
	char bRotateX : 1; // 0x124
	char bRotateY : 1; // 0x124
	char bRotateZ : 1; // 0x124
};

struct FInventoryStackData {
	UObject* _stackClass; // 0x0
	float _approximateCount; // 0x8
	float _approximateMaxCount; // 0xc
	float _weight; // 0x10
	TArray<char> _data; // 0x18
};

struct FModularTooltipSectionData {
	TArray<UModularTooltipElementData*> Elements; // 0x18
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionId; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FRigidBodyState {
	FVector_NetQuantize100 position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FTransformCurve {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FWindowMarkerModifier {
	int32_t Index; // 0x0
	bool IsVaultable; // 0x4
	bool IsFortifiable; // 0x5
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FZombieRagdollAutoRecovery {
	EZombieRagdollAutoRecoveryType Type; // 0x0
	float Timespan; // 0x4
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FCharacterLegsImpactSoundData {
	TArray<ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x0
	TArray<ECharacterLegsImpactSoundCategory> ImpactTargetCategories; // 0x10
	FCharacterImpactSounds Sounds; // 0x20
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FRopePiece {
	int32_t StartParticleIndex; // 0x0
	int32_t EndParticleIndex; // 0x4
};

struct FWaterBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; // 0x0
	bool bEnableOverride; // 0x1
	bool bForceFullyRough; // 0x2
	bool bForceNonMetal; // 0x3
	bool bForceDisableLMDirectionality; // 0x4
	bool bForceLQReflections; // 0x5
	bool bForceDisablePreintegratedGF; // 0x6
	bool bDisableMaterialNormalCalculation; // 0x7
	EMobileShadowQuality MobileShadowQuality; // 0x8
};

struct FBaseElementDestructionZone {
	FBox Bounds; // 0x0
	float DamageToItems; // 0x1c
	float FallDamagePerMeter; // 0x20
	float MaxFallDamage; // 0x24
	bool MustElementBeAboveZone; // 0x28
	bool IgnoreElementsThatCantBePlacedOnOtherElements; // 0x29
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FBakedAnimationState {
	FName StateName; // 0x0
	TArray<FBakedStateExitTransition> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
	bool bIsAConduit; // 0x28
	int32_t EntryRuleNodeIndex; // 0x2c
	TArray<int32_t> PlayerNodeIndices; // 0x30
	TArray<int32_t> LayerNodeIndices; // 0x40
	bool bAlwaysResetOnEntry; // 0x50
};

struct FDcxVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MOI; // 0x88
	float IdleRPM; // 0x8c
	float MaxRPM; // 0x90
	float DampingRateFullThrottle; // 0x94
	float DampingRateZeroThrottleClutchEngaged; // 0x98
	float DampingRateZeroThrottleClutchDisengaged; // 0x9c
};

struct FMovieSceneGeometryCollectionSectionTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FMissionItemInfo {
	TSoftObjectPtr<AActor> ItemLocation; // 0x0
	AItem* ItemClass; // 0x28
	bool ShouldRemove; // 0x30
	float TimeToDestroy; // 0x34
};

struct FAnimNode_CopyPoseFromMesh {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FClothPhysicsProperties_Legacy {
	float VerticalResistance; // 0x0
	float HorizontalResistance; // 0x4
	float BendResistance; // 0x8
	float ShearResistance; // 0xc
	float Friction; // 0x10
	float Damping; // 0x14
	float TetherStiffness; // 0x18
	float TetherLimit; // 0x1c
	float Drag; // 0x20
	float StiffnessFrequency; // 0x24
	float GravityScale; // 0x28
	float MassScale; // 0x2c
	float InertiaBlend; // 0x30
	float SelfCollisionThickness; // 0x34
	float SelfCollisionSquashScale; // 0x38
	float SelfCollisionStiffness; // 0x3c
	float SolverFrequency; // 0x40
	float FiberCompression; // 0x44
	float FiberExpansion; // 0x48
	float FiberResistance; // 0x4c
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FPhysicsSphereData {
	float Radius; // 0x0
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FMeleeAttackCapsuleHitInfo {
	FMeleeAttackCapsule MeleeAttackCapsule; // 0x0
	FHitResult HitResult; // 0x70
	EHitSeverity HitSeverity; // 0xfc
	EAttackType AttackType; // 0xfd
	FVector_NetQuantize100 AttackerLocation; // 0x100
	FVector_NetQuantize100 VictimLocation; // 0x10c
};

struct FDroneVisitTimeData {
	float MinVisitTime; // 0x0
	float MaxVisitTime; // 0x4
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FSoundAttenuationSettings {
	char bAttenuate : 1; // 0xb0
	char bSpatialize : 1; // 0xb0
	char bAttenuateWithLPF : 1; // 0xb0
	char bEnableListenerFocus : 1; // 0xb0
	char bEnableFocusInterpolation : 1; // 0xb0
	char bEnableOcclusion : 1; // 0xb0
	char bUseComplexCollisionForOcclusion : 1; // 0xb0
	char bEnableReverbSend : 1; // 0xb0
	char bEnablePriorityAttenuation : 1; // 0xb1
	char bApplyNormalizationToStereoSounds : 1; // 0xb1
	char bEnableLogFrequencyScaling : 1; // 0xb1
	char bEnableSubmixSends : 1; // 0xb1
	ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2
	float BinauralRadius; // 0xb4
	EAirAbsorptionMethod AbsorptionMethod; // 0xb8
	ECollisionChannel OcclusionTraceChannel; // 0xb9
	EReverbSendMethod ReverbSendMethod; // 0xba
	EPriorityAttenuationMethod PriorityAttenuationMethod; // 0xbb
	float OmniRadius; // 0xbc
	float StereoSpread; // 0xc0
	float LPFRadiusMin; // 0xc4
	float LPFRadiusMax; // 0xc8
	FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xd0
	FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x158
	float LPFFrequencyAtMin; // 0x1e0
	float LPFFrequencyAtMax; // 0x1e4
	float HPFFrequencyAtMin; // 0x1e8
	float HPFFrequencyAtMax; // 0x1ec
	float FocusAzimuth; // 0x1f0
	float NonFocusAzimuth; // 0x1f4
	float FocusDistanceScale; // 0x1f8
	float NonFocusDistanceScale; // 0x1fc
	float FocusPriorityScale; // 0x200
	float NonFocusPriorityScale; // 0x204
	float FocusVolumeAttenuation; // 0x208
	float NonFocusVolumeAttenuation; // 0x20c
	float FocusAttackInterpSpeed; // 0x210
	float FocusReleaseInterpSpeed; // 0x214
	float OcclusionLowPassFilterFrequency; // 0x218
	float OcclusionVolumeAttenuation; // 0x21c
	float OcclusionInterpolationTime; // 0x220
	float ReverbWetLevelMin; // 0x224
	float ReverbWetLevelMax; // 0x228
	float ReverbDistanceMin; // 0x22c
	float ReverbDistanceMax; // 0x230
	float ManualReverbSendLevel; // 0x234
	FRuntimeFloatCurve CustomReverbSendCurve; // 0x238
	TArray<FAttenuationSubmixSendSettings> SubmixSendSettings; // 0x2c0
	float PriorityAttenuationMin; // 0x2d0
	float PriorityAttenuationMax; // 0x2d4
	float PriorityAttenuationDistanceMin; // 0x2d8
	float PriorityAttenuationDistanceMax; // 0x2dc
	float ManualPriorityAttenuation; // 0x2e0
	FRuntimeFloatCurve CustomPriorityAttenuationCurve; // 0x2e8
	FSoundAttenuationPluginSettings PluginSettings; // 0x370
};

struct FSafeVector2D {
	FString Internal; // 0x0
	FString TrueX; // 0x10
	FString TrueY; // 0x20
	FString ShiftX; // 0x30
	FString ShiftY; // 0x40
	char Flag; // 0x50
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FFortificationMarkerParams {
	bool IsValid; // 0x0
	int32_t MarkerIndex; // 0x4
	UStaticMesh* Mesh; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	float Scale; // 0x28
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FCraftingSkillLevelData {
	float CraftingTime; // 0x0
	float ProcessingTime; // 0x4
	float Points; // 0x8
	float Probability_Add; // 0xc
	float Probability_Multiply; // 0x10
};

struct FPawnCharacterInfo {
	APawn* SpawnablePawn; // 0x0
	TArray<APawn*> CharacterPreset; // 0x8
	float PoiCharacterIdleThresholdTimeMP; // 0x18
	float ExteriorCharacterIdleThresholdTimeMP; // 0x1c
	float InteriorCharacterIdleThresholdTimeMP; // 0x20
	float PoiCharacterIdleThresholdTimeSP; // 0x24
	float ExteriorCharacterIdleThresholdTimeSP; // 0x28
	float InteriorCharacterIdleThresholdTimeSP; // 0x2c
	float MinShortRangeSpawnDistance; // 0x30
	float MaxShortRangeSpawnDistance; // 0x34
	float MinLongRangeSpawnDistance; // 0x38
	float MaxLongRangeSpawnDistance; // 0x3c
	float PawnCullDuration; // 0x40
	int32_t MinWildCharactersPerPawnGroup; // 0x44
	int32_t MaxWildCharactersPerPawnGroup; // 0x48
	int32_t MaxExteriorCharactersPerPawnGroup; // 0x4c
	int32_t MaxInteriorCharactersPerPawnGroup; // 0x50
	float PawnFieldOfView; // 0x54
	float SpawningFieldOfView; // 0x58
	int32_t MaxAllowedPawns; // 0x5c
	int32_t MaxAllowedWildPawns; // 0x60
	int32_t MaxAllowedExteriorPawns; // 0x6c
	int32_t MaxAllowedInteriorPawns; // 0x78
	float ExteriorPawnAmountModifier; // 0x84
	float InteriorPawnAmountModifier; // 0x90
	float WildPawnAmountModifier; // 0x9c
	TArray<FSpawnedPawnInfo> SpawnedPawns; // 0xa8
};

struct FParticleEvent_GenerateInfo {
	EParticleEventType Type; // 0x0
	int32_t Frequency; // 0x4
	int32_t ParticleFrequency; // 0x8
	char FirstTimeOnly : 1; // 0xc
	char LastTimeOnly : 1; // 0xc
	char UseReflectedImpactVector : 1; // 0xc
	char bUseOrbitOffset : 1; // 0xc
	FName CustomName; // 0x10
	TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18
};

struct FVersion {
	int32_t Major; // 0x0
	int32_t Minor; // 0x4
	int32_t Build; // 0x8
	int32_t Revision; // 0xc
};

struct FVehicleEngineStallingParameters {
	float MinDuration; // 0x0
	float MaxDuration; // 0x4
	float StopEngineChance; // 0x8
	bool ShouldStallingStopOnThrottleOrBreakRelease; // 0xc
	bool ShouldEngineStopOnThrottleOrBreakRelease; // 0xd
	UCurveFloat* ThrottleCurve; // 0x10
	float ThrottleCurveFrequencyMultiplier; // 0x18
	UCurveFloat* BrakeCurve; // 0x20
	float BrakeCurveFrequencyMultiplier; // 0x28
	float ForceMagnitudeScale; // 0x2c
	UCurveFloat* ForceMagnitudeScaleCurve; // 0x30
	float ForceMagnitudeScaleCurveFrequencyMultiplier; // 0x38
	float ForceDirectionRandomizationAngle; // 0x3c
	UAkAudioEvent* AudioEvent; // 0x40
	TArray<float> AudioEventTriggerTimeRatios; // 0x48
};

struct FTwistConstraint {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FWaterBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FCameraExposureSettings {
	EAutoExposureMethod Method; // 0x0
	float LowPercent; // 0x4
	float HighPercent; // 0x8
	float MinBrightness; // 0xc
	float MaxBrightness; // 0x10
	float SpeedUp; // 0x14
	float SpeedDown; // 0x18
	float Bias; // 0x1c
	UCurveFloat* BiasCurve; // 0x20
	UTexture* MeterMask; // 0x28
	float HistogramLogMin; // 0x30
	float HistogramLogMax; // 0x34
	float CalibrationConstant; // 0x38
	char ApplyPhysicalCameraExposure : 1; // 0x3c
};

struct FRepActionData {
	EAnimalAction Action; // 0x0
	char IndexParameter; // 0x1
	char Version; // 0x2
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FWeaponBowAimOffsets {
	UBlendSpace* DrawPercentage[0x3]; // 0x0
};

struct FCloseRangeAttackData {
	UAnimMontage* Montage; // 0x0
	float RegainControlDurationModifier; // 0x8
	float Range; // 0xc
	float Angle; // 0x10
	float HorizontalHalfAngleRange; // 0x14
};

struct FTrapTriggerParams {
	AActor* TriggeredActor; // 0x0
	float DeltaTime; // 0x8
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FBasicParticleData {
	FVector position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FSpriteGeometryCollection {
	TArray<FSpriteGeometryShape> Shapes; // 0x0
	ESpritePolygonMode GeometryType; // 0x10
	int32_t PixelsPerSubdivisionX; // 0x14
	int32_t PixelsPerSubdivisionY; // 0x18
	bool bAvoidVertexMerging; // 0x1c
	float AlphaThreshold; // 0x20
	float DetailAmount; // 0x24
	float SimplifyEpsilon; // 0x28
};

struct FAnimNode_ApplyMeshSpaceAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	float Alpha; // 0x34
	char bAlphaBoolEnabled : 1; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBias AlphaScaleBias; // 0x90
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98
	int32_t LODThreshold; // 0xc8
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FWaterFalloffSettings {
	EWaterBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0xc
	FExpressionInput HeightInput; // 0x20
	float PreviewWeight; // 0x34
	FVector ConstLayerInput; // 0x38
	float ConstHeightInput; // 0x44
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FTTEventTrack {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FAdminCommandArgumentDescription {
	FString Description; // 0x0
	bool ShowCompletionValuesInHelpText; // 0x10
	UAdminCommandArgumentCompletion* Completion; // 0x18
};

struct FInstancedStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FKBoxElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FBurialInformation {
	FDbIntegerId BurierUserId; // 0x0
	bool ShouldBury; // 0x8
	FVector BurialLocation; // 0xc
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPrisonerMovementSettings_Ground_Crouching_Walking {
	FPrisonerGroundMovementParameters Default; // 0x0
	FPrisonerGroundMovementParameters WeaponAiming; // 0xc
	FPrisonerGroundMovementParameters WeaponAimingDownTheSights; // 0x18
};

struct FSolverIterations {
	float FixedTimeStep; // 0x0
	int32_t SolverIterations; // 0x4
	int32_t JointIterations; // 0x8
	int32_t CollisionIterations; // 0xc
	int32_t SolverPushOutIterations; // 0x10
	int32_t JointPushOutIterations; // 0x14
	int32_t CollisionPushOutIterations; // 0x18
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FAnimalManagementData {
	AAnimal2* AnimalClass; // 0x0
	TArray<AAnimal2*> AliveAnimals; // 0x8
	TArray<ACorpse*> DeadAnimals; // 0x18
	int32_t VirtualAnimalAmount; // 0x28
};

struct FAmmoTypeVisuals {
	AAmmunitionItem* AmmunitionClass_10_1B3EA62A418BBEA01A015FB2D7ACD340; // 0x0
	UTexture2D* InventoryIcon_13_7209E5BC49B1B7CF8AEACFB62CA19277; // 0x8
	UTexture2D* InventoryIconInHands_14_897B1F404B06DE2A1C7A6E8536649AF1; // 0x10
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FDemolitionSkillParametersPerTrapType {
	float DefuseTime; // 0x0
};

struct FMediaPlayerTrackOptions {
	int32_t audio; // 0x0
	int32_t Caption; // 0x4
	int32_t MetaData; // 0x8
	int32_t Script; // 0xc
	int32_t Subtitle; // 0x10
	int32_t Text; // 0x14
	int32_t Video; // 0x18
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FAnimNode_Trail {
	FBoneReference TrailBone; // 0x100
	int32_t ChainLength; // 0x110
	EAxis ChainBoneAxis; // 0x114
	char bInvertChainBoneAxis : 1; // 0x115
	char bLimitStretch : 1; // 0x115
	char bLimitRotation : 1; // 0x115
	char bUsePlanarLimit : 1; // 0x115
	char bActorSpaceFakeVel : 1; // 0x115
	char bReorientParentToChild : 1; // 0x115
	float MaxDeltaTime; // 0x118
	float RelaxationSpeedScale; // 0x11c
	FRuntimeFloatCurve TrailRelaxationSpeed; // 0x120
	FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1a8
	TArray<FRotationLimit> RotationLimits; // 0x1d8
	TArray<FVector> RotationOffsets; // 0x1e8
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x1f8
	float StretchLimit; // 0x208
	FVector FakeVelocity; // 0x20c
	FBoneReference BaseJoint; // 0x218
	float LastBoneRotationAnimAlphaBlend; // 0x228
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FConZWaterSplineControlPoint {
	bool Selected; // 0x44
	float Width; // 0x48
	float MaxDepth; // 0x4c
	float Speed; // 0x50
	float Opacity; // 0x54
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FCraftingRecipe {
	TArray<FCraftingRecipeCraftableItem> CraftableItems; // 0x0
	TArray<FCraftingRecipeCraftingIngredient> CraftingIngredients; // 0x10
	USkill* SkillNeeded; // 0x20
	ESkillLevel SkillLevelNeeded; // 0x28
	UCraftableItem* CraftableItem; // 0x30
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FWaterBodyHeightmapSettings {
	EWaterBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FWaterFalloffSettings FalloffSettings; // 0x4
	FWaterBrushEffects Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAnimNode_SequencePlayer {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FDemolitionSkillParametersPerSkillLevel {
	float TrapQuality; // 0x0
	float ArmTrapXP; // 0x4
	float DisarmOwnedTrapXP; // 0x8
	float DisarmEnemyTrapXP; // 0xc
	float AddTriggerXP; // 0x10
	float CraftTrapXP; // 0x14
	int32_t NumberOfWires; // 0x18
	int32_t GreenWiresNumber; // 0x1c
	int32_t RedWiresNumber; // 0x20
	int32_t NumberOfDefuseAttempts; // 0x24
	TMap<ETrapType, FDemolitionSkillParametersPerTrapType> ParametersPerTrapType; // 0x28
};

struct FLiveLinkSubjectDataMessage {
	FLiveLinkRefSkeleton RefSkeleton; // 0x0
	FName SubjectName; // 0x20
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FA2CSPose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FNavAvoidanceMask {
	char bGroup0 : 1; // 0x0
	char bGroup1 : 1; // 0x0
	char bGroup2 : 1; // 0x0
	char bGroup3 : 1; // 0x0
	char bGroup4 : 1; // 0x0
	char bGroup5 : 1; // 0x0
	char bGroup6 : 1; // 0x0
	char bGroup7 : 1; // 0x0
	char bGroup8 : 1; // 0x1
	char bGroup9 : 1; // 0x1
	char bGroup10 : 1; // 0x1
	char bGroup11 : 1; // 0x1
	char bGroup12 : 1; // 0x1
	char bGroup13 : 1; // 0x1
	char bGroup14 : 1; // 0x1
	char bGroup15 : 1; // 0x1
	char bGroup16 : 1; // 0x2
	char bGroup17 : 1; // 0x2
	char bGroup18 : 1; // 0x2
	char bGroup19 : 1; // 0x2
	char bGroup20 : 1; // 0x2
	char bGroup21 : 1; // 0x2
	char bGroup22 : 1; // 0x2
	char bGroup23 : 1; // 0x2
	char bGroup24 : 1; // 0x3
	char bGroup25 : 1; // 0x3
	char bGroup26 : 1; // 0x3
	char bGroup27 : 1; // 0x3
	char bGroup28 : 1; // 0x3
	char bGroup29 : 1; // 0x3
	char bGroup30 : 1; // 0x3
	char bGroup31 : 1; // 0x3
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FWheelBarrowParametersPerMovementPace {
	bool IsValid; // 0x0
	float BaseMaxForwardSpeed; // 0x4
	float BaseMaxForwardSpeedLimping; // 0x8
	bool CanReverse; // 0xc
	float BaseMaxReverseSpeed; // 0x10
	float BaseMaxReverseSpeedLimping; // 0x14
	float BaseMaxLoad; // 0x18
	float MinPrisonerStrength; // 0x1c
};

struct FDcxVehicleWheelConfiguration {
	FName BoneName; // 0x0
	FVector Offset; // 0x8
	UStaticMesh* CollisionMesh; // 0x18
	bool bUsePresetShape; // 0x20
	FDcxVehicleWheelData WheelData; // 0x24
	FDcxVehicleSuspensionData SuspensionData; // 0x44
	UDcxVehicleTire* Tire; // 0x68
	bool bIsDriven; // 0x70
	EDcxVehicleWheelSweep SweepType; // 0x71
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FHitEffects {
	float SpeedThreshold; // 0x0
	UParticleSystem* ParticleSystem; // 0x8
	FVector ParticlesScale; // 0x10
	UAkAudioEvent* AudioEvent; // 0x20
	UMatineeCameraShake* CameraShake; // 0x28
	float CameraShakeScale; // 0x30
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FSkeletalMeshBuildSettings {
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bUseMikkTSpace : 1; // 0x0
	char bComputeWeightedNormals : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	float ThresholdPosition; // 0x4
	float ThresholdTangentNormal; // 0x8
	float ThresholdUV; // 0xc
	float MorphThresholdPosition; // 0x10
};

struct FTransformConstraintDescription {
	ETransformConstraintType TransformType; // 0x10
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FCustomZoneRegion {
	FString Name; // 0x0
	FVector2D Location; // 0x10
	FVector2D Size; // 0x18
	ECustomZoneShape Shape; // 0x20
	int32_t ConfigurationIndex; // 0x24
};

struct FMeleeSkillAttack {
	FGameplayTagContainer AttackTypes; // 0x0
	FGameplayTagContainer IgnoreReason; // 0x20
	UAnimMontage* Montage; // 0x40
	UAnimMontage* MontageFP; // 0x48
	FFloatInterval PitchRange; // 0x50
	float MaxDistance; // 0x58
	float MinDistance; // 0x5c
	float MinStamina; // 0x60
	float OrientToTargetSpeedFactor; // 0x64
	float RegainControlDurationMultiplier; // 0x68
	float StaminaDrainMultiplier; // 0x6c
	bool CanBeUsedAsInitialAttack; // 0x70
	bool CanBeUsedToCloseLargeDistanceToTarget; // 0x71
	bool Solo; // 0x72
	bool Mute; // 0x73
	bool IsAlwaysCandidate; // 0x74
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FWaterBrushEffects {
	FWaterBrushEffectBlurring Blurring; // 0x0
	FWaterBrushEffectCurlNoise CurlNoise; // 0x8
	FWaterBrushEffectDisplacement Displacement; // 0x18
	FWaterBrushEffectSmoothBlending SmoothBlending; // 0x40
	FWaterBrushEffectTerracing Terracing; // 0x48
};

struct FNonImplementedSkill {
	ESkillAttribute Attribute_2_8FE9CFC544A8D131822996940094EA1C; // 0x0
	FText Caption_5_5CCEC37D47989AF5B1F09CA5763CC787; // 0x8
};

struct FMovieSceneStringPropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FMovieScene3DRotationKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FLinearConstraint {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FStaticMaterialLayersParameter {
	FMaterialLayersFunctions Value; // 0x28
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FInventoryContainerHandsHolstersData {
	TArray<FInventoryItemPositionPair> ItemsData; // 0x0
	UObject* Parent; // 0x10
	int32_t RepCounter; // 0x18
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FTableColumnHeaderStyle {
	FSlateBrush SortPrimaryAscendingImage; // 0x8
	FSlateBrush SortPrimaryDescendingImage; // 0x90
	FSlateBrush SortSecondaryAscendingImage; // 0x118
	FSlateBrush SortSecondaryDescendingImage; // 0x1a0
	FSlateBrush NormalBrush; // 0x228
	FSlateBrush HoveredBrush; // 0x2b0
	FSlateBrush MenuDropdownImage; // 0x338
	FSlateBrush MenuDropdownNormalBorderBrush; // 0x3c0
	FSlateBrush MenuDropdownHoveredBorderBrush; // 0x448
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FLiveLinkPingMessage {
	FGuid PollRequest; // 0x0
	int32_t LiveLinkVersion; // 0x10
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float LowPassFilterFrequency; // 0x8
	float AttenuationDistanceScale; // 0xc
	float StereoBleed; // 0x10
	float LFEBleed; // 0x14
	float VoiceCenterChannelVolume; // 0x18
	float RadioFilterVolume; // 0x1c
	float RadioFilterVolumeThreshold; // 0x20
	char bApplyEffects : 1; // 0x24
	char bAlwaysPlay : 1; // 0x24
	char bIsUISound : 1; // 0x24
	char bIsMusic : 1; // 0x24
	char bCenterChannelOnly : 1; // 0x24
	char bApplyAmbientVolumes : 1; // 0x24
	char bReverb : 1; // 0x24
	float Default2DReverbSendAmount; // 0x28
	FSoundModulationDefaultSettings ModulationSettings; // 0x30
	EAudioOutputTarget OutputTarget; // 0x70
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x71
	USoundSubmix* DefaultSubmix; // 0x78
};

struct FAnimNode_SingleNode {
	FPoseLink SourcePose; // 0x10
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	ENaturalSoundFalloffMode FalloffMode; // 0x10
	FVector AttenuationShapeExtents; // 0x14
	float ConeOffset; // 0x20
	float FalloffDistance; // 0x24
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
};

struct FWaterBodyWeightmapSettings {
	float FalloffWidth; // 0x0
	float EdgeOffset; // 0x4
	UTexture2D* ModulationTexture; // 0x8
	float TextureTiling; // 0x10
	float TextureInfluence; // 0x14
	float Midpoint; // 0x18
	float FinalOpacity; // 0x1c
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FScrollBarStyle {
	FSlateBrush HorizontalBackgroundImage; // 0x8
	FSlateBrush VerticalBackgroundImage; // 0x90
	FSlateBrush VerticalTopSlotImage; // 0x118
	FSlateBrush HorizontalTopSlotImage; // 0x1a0
	FSlateBrush VerticalBottomSlotImage; // 0x228
	FSlateBrush HorizontalBottomSlotImage; // 0x2b0
	FSlateBrush NormalThumbImage; // 0x338
	FSlateBrush HoveredThumbImage; // 0x3c0
	FSlateBrush DraggedThumbImage; // 0x448
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FMaterialCachedExpressionData {
	FMaterialCachedParameters parameters; // 0x0
	TArray<UObject*> ReferencedTextures; // 0x1a0
	TArray<FMaterialFunctionInfo> FunctionInfos; // 0x1b0
	TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x1c0
	TArray<UMaterialFunctionInterface*> DefaultLayers; // 0x1d0
	TArray<UMaterialFunctionInterface*> DefaultLayerBlends; // 0x1e0
	TArray<ULandscapeGrassType*> GrassTypes; // 0x1f0
	TArray<FName> DynamicParameterNames; // 0x200
	TArray<bool> QualityLevelsUsed; // 0x210
	char bHasRuntimeVirtualTextureOutput : 1; // 0x220
	char bHasSceneColor : 1; // 0x220
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; // 0x0
	float ValidEngineTime; // 0x4
	float EngineTimeOffset; // 0x8
	double EngineTimeClockOffset; // 0x10
	bool bGenerateSubFrame; // 0x18
	FFrameRate DetectedFrameRate; // 0x1c
	bool bUseTimecodeSmoothLatest; // 0x24
	FFrameRate SourceTimecodeFrameRate; // 0x28
	bool bValidTimecodeFrameEnabled; // 0x30
	int32_t ValidTimecodeFrame; // 0x34
	float TimecodeFrameOffset; // 0x38
	double TimecodeClockOffset; // 0x40
	int32_t LatestOffset; // 0x48
	int32_t MaxNumberOfFrameToBuffered; // 0x4c
	bool bKeepAtLeastOneFrame; // 0x50
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0x8
	FEdGraphPinType VarType; // 0x18
	FString FriendlyName; // 0x70
	FText Category; // 0x80
	uint64_t PropertyFlags; // 0x98
	FName RepNotifyFunc; // 0xa0
	ELifetimeCondition ReplicationCondition; // 0xa8
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
	FString DefaultValue; // 0xc0
};

struct FConZDimensionRow {
	float Value; // 0x8
	FString Description; // 0x10
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FBlueprintInputAxisDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FSafeRotator {
	FString Internal; // 0x0
	FString TrueX; // 0x10
	FString TrueY; // 0x20
	FString TrueZ; // 0x30
	FString ShiftX; // 0x40
	FString ShiftY; // 0x50
	FString ShiftZ; // 0x60
	char Flag; // 0x70
};

struct FHairCollisionConstraint {
	bool SolveCollision; // 0x0
	bool ProjectCollision; // 0x1
	float StaticFriction; // 0x4
	float KineticFriction; // 0x8
	float StrandsViscosity; // 0xc
	FIntVector GridDimension; // 0x10
	float CollisionRadius; // 0x1c
	FRuntimeFloatCurve RadiusScale; // 0x20
};

struct FAnimPhysConstraintSetup {
	AnimPhysLinearConstraintType LinearXLimitType; // 0x0
	AnimPhysLinearConstraintType LinearYLimitType; // 0x1
	AnimPhysLinearConstraintType LinearZLimitType; // 0x2
	FVector LinearAxesMin; // 0x4
	FVector LinearAxesMax; // 0x10
	AnimPhysAngularConstraintType AngularConstraintType; // 0x1c
	AnimPhysTwistAxis TwistAxis; // 0x1d
	AnimPhysTwistAxis AngularTargetAxis; // 0x1e
	float ConeAngle; // 0x20
	FVector AngularLimitsMin; // 0x24
	FVector AngularLimitsMax; // 0x30
	FVector AngularTarget; // 0x3c
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FUnderwaterPostProcessSettings {
	bool bEnabled; // 0x0
	float Priority; // 0x4
	float BlendRadius; // 0x8
	float BlendWeight; // 0xc
	FPostProcessSettings PostProcessSettings; // 0x10
	UMaterialInterface* UnderwaterPostProcessMaterial; // 0x560
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FDatasmithRetessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FWaterBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x0
	bool BoolTrue; // 0x1
	char Bitfield0 : 1; // 0x2
	char Bitfield1 : 1; // 0x2
	char Bitfield2Set : 1; // 0x2
	char Bitfield3 : 1; // 0x2
	char Bitfield4Set : 1; // 0x2
	char Bitfield5Set : 1; // 0x2
	char Bitfield6 : 1; // 0x2
	char Bitfield7Set : 1; // 0x2
};

struct FUnlockLocation {
	FTransform Transform; // 0x0
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FLiveLinkLightStaticData {
	bool bIsTemperatureSupported; // 0x10
	bool bIsIntensitySupported; // 0x11
	bool bIsLightColorSupported; // 0x12
	bool bIsInnerConeAngleSupported; // 0x13
	bool bIsOuterConeAngleSupported; // 0x14
	bool bIsAttenuationRadiusSupported; // 0x15
	bool bIsSourceLenghtSupported; // 0x16
	bool bIsSourceRadiusSupported; // 0x17
	bool bIsSoftSourceRadiusSupported; // 0x18
};

struct FAnimNode_PoseBlendNode {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FMountSlotEntryPoint {
	FVector Location; // 0x0
	FTransform EntryTransform; // 0x10
	float TransformSnapRadius; // 0x40
	int32_t DoorIndex; // 0x44
	UAnimMontage* VehicleOpenDoorMontage; // 0x48
	UAnimMontage* VehicleCloseDoorMontage; // 0x50
	UAnimMontage* VehicleMountSlotMontage; // 0x58
	UAnimMontage* VehicleUnmountSlotMontage; // 0x60
	UAnimMontage* PrisonerOpenDoorMontage; // 0x68
	UAnimMontage* PrisonerCloseDoorMontage; // 0x70
	UAnimMontage* PrisonerMountSlotMontage; // 0x78
	UAnimMontage* PrisonerUnmountSlotMontage; // 0x80
	UAnimMontage* PrisonerPickUpVehicle2WMontage; // 0x88
	UAnimMontage* PrisonerAirplaneJumpExitMontage; // 0x90
	FName PickUpSocketName; // 0x98
};

struct FGerstnerWave {
	float WaveLength; // 0x0
	float Amplitude; // 0x4
	float Steepness; // 0x8
	FVector Direction; // 0xc
	FVector2D WaveVector; // 0x18
	float WaveSpeed; // 0x20
	float WKA; // 0x24
	float Q; // 0x28
	float PhaseOffset; // 0x2c
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FKTaperedCapsuleElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FMovieSceneMediaSectionParams {
	UMediaSoundComponent* MediaSoundComponent; // 0x0
	UMediaSource* MediaSource; // 0x8
	UMediaTexture* MediaTexture; // 0x10
	UMediaPlayer* MediaPlayer; // 0x18
	FFrameNumber SectionStartFrame; // 0x20
	FFrameNumber SectionEndFrame; // 0x24
	bool bLooping; // 0x28
	FFrameNumber StartFrameOffset; // 0x2c
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FEdGraphSchemaAction_NewNode {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	FString string; // 0x18
	FText Text; // 0x28
	FVector Vector; // 0x40
	FVector4 Vector4; // 0x50
	FRotator Rotator; // 0x60
	FQuat Quat; // 0x70
	FColor Color; // 0x80
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FCharacterHeadImpactSoundsData {
	TArray<FCharacterHeadImpactSoundData> SoundsData; // 0x0
	FCharacterImpactSounds FallbackSounds; // 0x10
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FChaosCollisionEventData {
	FVector Location; // 0x0
	FVector Normal; // 0xc
	FVector Velocity1; // 0x18
	FVector Velocity2; // 0x24
	float Mass1; // 0x30
	float Mass2; // 0x34
	FVector Impulse; // 0x38
};

struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x0
	char bLimitToOwner : 1; // 0x4
	EMaxConcurrentResolutionRule ResolutionRule; // 0x8
	float RetriggerTime; // 0xc
	float VolumeScale; // 0x10
	EConcurrencyVolumeScaleMode VolumeScaleMode; // 0x14
	float VolumeScaleAttackTime; // 0x18
	char bVolumeScaleCanRelease : 1; // 0x1c
	float VolumeScaleReleaseTime; // 0x20
	float VoiceStealReleaseTime; // 0x24
};

struct FBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FPropertyAccessLibrary {
	TArray<FPropertyAccessSegment> PathSegments; // 0x0
	TArray<FPropertyAccessPath> SrcPaths; // 0x10
	TArray<FPropertyAccessPath> DestPaths; // 0x20
	FPropertyAccessCopyBatch CopyBatches[0x4]; // 0x30
	TArray<FPropertyAccessIndirectionChain> SrcAccesses; // 0x70
	TArray<FPropertyAccessIndirectionChain> DestAccesses; // 0x80
	TArray<FPropertyAccessIndirection> Indirections; // 0x90
	TArray<int32_t> EventAccessIndices; // 0xa0
};

struct FAnimationTransitionBetweenStates {
	int32_t PreviousState; // 0x8
	int32_t nextState; // 0xc
	float CrossfadeDuration; // 0x10
	int32_t StartNotify; // 0x14
	int32_t EndNotify; // 0x18
	int32_t InterruptNotify; // 0x1c
	EAlphaBlendOption BlendMode; // 0x20
	UCurveFloat* CustomCurve; // 0x28
	UBlendProfile* BlendProfile; // 0x30
	ETransitionLogicType LogicType; // 0x38
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FNiagaraSystemCompiledData {
	FNiagaraParameterStore InstanceParamStore; // 0x0
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x78
	FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xb8
	FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0xf8
	FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x138
	FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x158
	FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x178
	TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x198
	FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1a8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x1c8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x1e8
	TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x208
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FCircularLayerData {
	float CenterCutoffPercentage; // 0x0
	float Size; // 0x4
};

struct FLiveLinkPropertyData {
	FName PropertyName; // 0x0
	TArray<FMovieSceneFloatChannel> FloatChannel; // 0x8
	TArray<FMovieSceneStringChannel> StringChannel; // 0x18
	TArray<FMovieSceneIntegerChannel> IntegerChannel; // 0x28
	TArray<FMovieSceneBoolChannel> BoolChannel; // 0x38
	TArray<FMovieSceneByteChannel> ByteChannel; // 0x48
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FTTFloatTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FItemStackData {
	TArray<UItemStateBase*> Stacks; // 0x0
};

struct FEngineServiceTerminate {
	FString userName; // 0x0
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FWaterQueryResult {
	FVector Location; // 0x0
	bool InWaterIncludingWaves; // 0xc
	bool InWaterExcludingWaves; // 0xd
	bool IsBottomValid; // 0xe
	FVector Surface; // 0x10
	FVector Bottom; // 0x1c
	FVector Velocity; // 0x28
	float WaveHeight; // 0x34
	FVector WaveNormal; // 0x38
	FVirtualizedWaterSpline WaterSpline; // 0x50
};

struct FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes {
	FGameplayTagContainer ItemSpawnTypes; // 0x0
	int32_t MaxNumberOfOccurrences; // 0x20
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FMovieScenePropertySectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FBodyPartData {
	float CollisionDamageMultiplierPerBodyPart; // 0x0
	float ExplosionDamageMultiplierPerBodyPart; // 0x4
	float BodyPartMaxHealth; // 0x8
};

struct FPostProcessSettings {
	char bOverride_WhiteTemp : 1; // 0x0
	char bOverride_WhiteTint : 1; // 0x0
	char bOverride_ColorSaturation : 1; // 0x0
	char bOverride_ColorContrast : 1; // 0x0
	char bOverride_ColorGamma : 1; // 0x0
	char bOverride_ColorGain : 1; // 0x0
	char bOverride_ColorOffset : 1; // 0x0
	char bOverride_ColorSaturationShadows : 1; // 0x0
	char bOverride_ColorContrastShadows : 1; // 0x1
	char bOverride_ColorGammaShadows : 1; // 0x1
	char bOverride_ColorGainShadows : 1; // 0x1
	char bOverride_ColorOffsetShadows : 1; // 0x1
	char bOverride_ColorSaturationMidtones : 1; // 0x1
	char bOverride_ColorContrastMidtones : 1; // 0x1
	char bOverride_ColorGammaMidtones : 1; // 0x1
	char bOverride_ColorGainMidtones : 1; // 0x1
	char bOverride_ColorOffsetMidtones : 1; // 0x2
	char bOverride_ColorSaturationHighlights : 1; // 0x2
	char bOverride_ColorContrastHighlights : 1; // 0x2
	char bOverride_ColorGammaHighlights : 1; // 0x2
	char bOverride_ColorGainHighlights : 1; // 0x2
	char bOverride_ColorOffsetHighlights : 1; // 0x2
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x2
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x2
	char bOverride_BlueCorrection : 1; // 0x3
	char bOverride_ExpandGamut : 1; // 0x3
	char bOverride_ToneCurveAmount : 1; // 0x3
	char bOverride_FilmWhitePoint : 1; // 0x3
	char bOverride_FilmSaturation : 1; // 0x3
	char bOverride_FilmChannelMixerRed : 1; // 0x3
	char bOverride_FilmChannelMixerGreen : 1; // 0x3
	char bOverride_FilmChannelMixerBlue : 1; // 0x3
	char bOverride_FilmContrast : 1; // 0x4
	char bOverride_FilmDynamicRange : 1; // 0x4
	char bOverride_FilmHealAmount : 1; // 0x4
	char bOverride_FilmToeAmount : 1; // 0x4
	char bOverride_FilmShadowTint : 1; // 0x4
	char bOverride_FilmShadowTintBlend : 1; // 0x4
	char bOverride_FilmShadowTintAmount : 1; // 0x4
	char bOverride_FilmSlope : 1; // 0x4
	char bOverride_FilmToe : 1; // 0x5
	char bOverride_FilmShoulder : 1; // 0x5
	char bOverride_FilmBlackClip : 1; // 0x5
	char bOverride_FilmWhiteClip : 1; // 0x5
	char bOverride_SceneColorTint : 1; // 0x5
	char bOverride_SceneFringeIntensity : 1; // 0x5
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x5
	char bOverride_AmbientCubemapTint : 1; // 0x5
	char bOverride_AmbientCubemapIntensity : 1; // 0x6
	char bOverride_BloomMethod : 1; // 0x6
	char bOverride_BloomIntensity : 1; // 0x6
	char bOverride_BloomThreshold : 1; // 0x6
	char bOverride_Bloom1Tint : 1; // 0x6
	char bOverride_Bloom1Size : 1; // 0x6
	char bOverride_Bloom2Size : 1; // 0x6
	char bOverride_Bloom2Tint : 1; // 0x6
	char bOverride_Bloom3Tint : 1; // 0x7
	char bOverride_Bloom3Size : 1; // 0x7
	char bOverride_Bloom4Tint : 1; // 0x7
	char bOverride_Bloom4Size : 1; // 0x7
	char bOverride_Bloom5Tint : 1; // 0x7
	char bOverride_Bloom5Size : 1; // 0x7
	char bOverride_Bloom6Tint : 1; // 0x7
	char bOverride_Bloom6Size : 1; // 0x7
	char bOverride_BloomSizeScale : 1; // 0x8
	char bOverride_BloomConvolutionTexture : 1; // 0x8
	char bOverride_BloomConvolutionSize : 1; // 0x8
	char bOverride_BloomConvolutionCenterUV : 1; // 0x8
	char bOverride_BloomConvolutionPreFilter : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x8
	char bOverride_BloomConvolutionBufferScale : 1; // 0x9
	char bOverride_BloomDirtMaskIntensity : 1; // 0x9
	char bOverride_BloomDirtMaskTint : 1; // 0x9
	char bOverride_BloomDirtMask : 1; // 0x9
	char bOverride_CameraShutterSpeed : 1; // 0x9
	char bOverride_CameraISO : 1; // 0x9
	char bOverride_AutoExposureMethod : 1; // 0x9
	char bOverride_AutoExposureLowPercent : 1; // 0x9
	char bOverride_AutoExposureHighPercent : 1; // 0xa
	char bOverride_AutoExposureMinBrightness : 1; // 0xa
	char bOverride_AutoExposureMaxBrightness : 1; // 0xa
	char bOverride_AutoExposureCalibrationConstant : 1; // 0xa
	char bOverride_AutoExposureSpeedUp : 1; // 0xa
	char bOverride_AutoExposureSpeedDown : 1; // 0xa
	char bOverride_AutoExposureBias : 1; // 0xa
	char bOverride_AutoExposureBiasCurve : 1; // 0xa
	char bOverride_AutoExposureMeterMask : 1; // 0xb
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xb
	char bOverride_HistogramLogMin : 1; // 0xb
	char bOverride_HistogramLogMax : 1; // 0xb
	char bOverride_LensFlareIntensity : 1; // 0xb
	char bOverride_LensFlareTint : 1; // 0xb
	char bOverride_LensFlareTints : 1; // 0xb
	char bOverride_LensFlareBokehSize : 1; // 0xb
	char bOverride_LensFlareBokehShape : 1; // 0xc
	char bOverride_LensFlareThreshold : 1; // 0xc
	char bOverride_VignetteIntensity : 1; // 0xc
	char bOverride_GrainIntensity : 1; // 0xc
	char bOverride_GrainJitter : 1; // 0xc
	char bOverride_AmbientOcclusionIntensity : 1; // 0xc
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0xc
	char bOverride_AmbientOcclusionRadius : 1; // 0xc
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0xd
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0xd
	char bOverride_AmbientOcclusionDistance : 1; // 0xd
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xd
	char bOverride_AmbientOcclusionPower : 1; // 0xd
	char bOverride_AmbientOcclusionBias : 1; // 0xd
	char bOverride_AmbientOcclusionQuality : 1; // 0xd
	char bOverride_AmbientOcclusionMipBlend : 1; // 0xd
	char bOverride_AmbientOcclusionMipScale : 1; // 0xe
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0xe
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0xe
	char bOverride_RayTracingAO : 1; // 0x10
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10
	char bOverride_RayTracingAOIntensity : 1; // 0x10
	char bOverride_RayTracingAORadius : 1; // 0x10
	char bOverride_LPVIntensity : 1; // 0x14
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x14
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x14
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x14
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x14
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x14
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x14
	char bOverride_LPVSize : 1; // 0x14
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x15
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x15
	char bOverride_LPVGeometryVolumeBias : 1; // 0x15
	char bOverride_LPVVplInjectionBias : 1; // 0x15
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x15
	char bOverride_LPVFadeRange : 1; // 0x15
	char bOverride_LPVDirectionalOcclusionFadeRange : 1; // 0x15
	char bOverride_IndirectLightingColor : 1; // 0x15
	char bOverride_IndirectLightingIntensity : 1; // 0x16
	char bOverride_ColorGradingIntensity : 1; // 0x16
	char bOverride_ColorGradingLUT : 1; // 0x16
	char bOverride_DepthOfFieldFocalDistance : 1; // 0x16
	char bOverride_DepthOfFieldFstop : 1; // 0x16
	char bOverride_DepthOfFieldMinFstop : 1; // 0x16
	char bOverride_DepthOfFieldBladeCount : 1; // 0x16
	char bOverride_DepthOfFieldSensorWidth : 1; // 0x16
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0x17
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0x17
	char bOverride_DepthOfFieldFocalRegion : 1; // 0x17
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0x17
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0x17
	char bOverride_DepthOfFieldScale : 1; // 0x17
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0x17
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0x17
	char bOverride_MobileHQGaussian : 1; // 0x18
	char bOverride_DepthOfFieldOcclusion : 1; // 0x18
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x18
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x18
	char bOverride_MotionBlurAmount : 1; // 0x18
	char bOverride_MotionBlurMax : 1; // 0x18
	char bOverride_MotionBlurTargetFPS : 1; // 0x18
	char bOverride_MotionBlurPerObjectSize : 1; // 0x18
	char bOverride_ScreenPercentage : 1; // 0x19
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x19
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x19
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x19
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x19
	char bOverride_ReflectionsType : 1; // 0x1c
	char bOverride_RayTracingReflectionsMaxRoughness : 1; // 0x1c
	char bOverride_RayTracingReflectionsMaxBounces : 1; // 0x1c
	char bOverride_RayTracingReflectionsSamplesPerPixel : 1; // 0x1c
	char bOverride_RayTracingReflectionsShadows : 1; // 0x1c
	char bOverride_RayTracingReflectionsTranslucency : 1; // 0x1c
	char bOverride_TranslucencyType : 1; // 0x1c
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1c
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1d
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1d
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x1d
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x1d
	char bOverride_RayTracingGI : 1; // 0x1d
	char bOverride_RayTracingGIMaxBounces : 1; // 0x1d
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x1d
	char bOverride_PathTracingMaxBounces : 1; // 0x1d
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x1e
	char bMobileHQGaussian : 1; // 0x20
	EBloomMethod BloomMethod; // 0x21
	EAutoExposureMethod AutoExposureMethod; // 0x22
	float WhiteTemp; // 0x24
	float WhiteTint; // 0x28
	FVector4 ColorSaturation; // 0x30
	FVector4 ColorContrast; // 0x40
	FVector4 ColorGamma; // 0x50
	FVector4 ColorGain; // 0x60
	FVector4 ColorOffset; // 0x70
	FVector4 ColorSaturationShadows; // 0x80
	FVector4 ColorContrastShadows; // 0x90
	FVector4 ColorGammaShadows; // 0xa0
	FVector4 ColorGainShadows; // 0xb0
	FVector4 ColorOffsetShadows; // 0xc0
	FVector4 ColorSaturationMidtones; // 0xd0
	FVector4 ColorContrastMidtones; // 0xe0
	FVector4 ColorGammaMidtones; // 0xf0
	FVector4 ColorGainMidtones; // 0x100
	FVector4 ColorOffsetMidtones; // 0x110
	FVector4 ColorSaturationHighlights; // 0x120
	FVector4 ColorContrastHighlights; // 0x130
	FVector4 ColorGammaHighlights; // 0x140
	FVector4 ColorGainHighlights; // 0x150
	FVector4 ColorOffsetHighlights; // 0x160
	float ColorCorrectionHighlightsMin; // 0x170
	float ColorCorrectionShadowsMax; // 0x174
	float BlueCorrection; // 0x178
	float ExpandGamut; // 0x17c
	float ToneCurveAmount; // 0x180
	float FilmSlope; // 0x184
	float FilmToe; // 0x188
	float FilmShoulder; // 0x18c
	float FilmBlackClip; // 0x190
	float FilmWhiteClip; // 0x194
	FLinearColor FilmWhitePoint; // 0x198
	FLinearColor FilmShadowTint; // 0x1a8
	float FilmShadowTintBlend; // 0x1b8
	float FilmShadowTintAmount; // 0x1bc
	float FilmSaturation; // 0x1c0
	FLinearColor FilmChannelMixerRed; // 0x1c4
	FLinearColor FilmChannelMixerGreen; // 0x1d4
	FLinearColor FilmChannelMixerBlue; // 0x1e4
	float FilmContrast; // 0x1f4
	float FilmToeAmount; // 0x1f8
	float FilmHealAmount; // 0x1fc
	float FilmDynamicRange; // 0x200
	FLinearColor SceneColorTint; // 0x204
	float SceneFringeIntensity; // 0x214
	float ChromaticAberrationStartOffset; // 0x218
	float BloomIntensity; // 0x21c
	float BloomThreshold; // 0x220
	float BloomSizeScale; // 0x224
	float Bloom1Size; // 0x228
	float Bloom2Size; // 0x22c
	float Bloom3Size; // 0x230
	float Bloom4Size; // 0x234
	float Bloom5Size; // 0x238
	float Bloom6Size; // 0x23c
	FLinearColor Bloom1Tint; // 0x240
	FLinearColor Bloom2Tint; // 0x250
	FLinearColor Bloom3Tint; // 0x260
	FLinearColor Bloom4Tint; // 0x270
	FLinearColor Bloom5Tint; // 0x280
	FLinearColor Bloom6Tint; // 0x290
	float BloomConvolutionSize; // 0x2a0
	UTexture2D* BloomConvolutionTexture; // 0x2a8
	FVector2D BloomConvolutionCenterUV; // 0x2b0
	float BloomConvolutionPreFilterMin; // 0x2b8
	float BloomConvolutionPreFilterMax; // 0x2bc
	float BloomConvolutionPreFilterMult; // 0x2c0
	float BloomConvolutionBufferScale; // 0x2c4
	UTexture* BloomDirtMask; // 0x2c8
	float BloomDirtMaskIntensity; // 0x2d0
	FLinearColor BloomDirtMaskTint; // 0x2d4
	FLinearColor AmbientCubemapTint; // 0x2e4
	float AmbientCubemapIntensity; // 0x2f4
	UTextureCube* AmbientCubemap; // 0x2f8
	float CameraShutterSpeed; // 0x300
	float CameraISO; // 0x304
	float DepthOfFieldFstop; // 0x308
	float DepthOfFieldMinFstop; // 0x30c
	int32_t DepthOfFieldBladeCount; // 0x310
	float AutoExposureBias; // 0x314
	float AutoExposureBiasBackup; // 0x318
	char bOverride_AutoExposureBiasBackup : 1; // 0x31c
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x320
	UCurveFloat* AutoExposureBiasCurve; // 0x328
	UTexture* AutoExposureMeterMask; // 0x330
	float AutoExposureLowPercent; // 0x338
	float AutoExposureHighPercent; // 0x33c
	float AutoExposureMinBrightness; // 0x340
	float AutoExposureMaxBrightness; // 0x344
	float AutoExposureSpeedUp; // 0x348
	float AutoExposureSpeedDown; // 0x34c
	float HistogramLogMin; // 0x350
	float HistogramLogMax; // 0x354
	float AutoExposureCalibrationConstant; // 0x358
	float LensFlareIntensity; // 0x35c
	FLinearColor LensFlareTint; // 0x360
	float LensFlareBokehSize; // 0x370
	float LensFlareThreshold; // 0x374
	UTexture* LensFlareBokehShape; // 0x378
	FLinearColor LensFlareTints[0x8]; // 0x380
	float VignetteIntensity; // 0x400
	float GrainJitter; // 0x404
	float GrainIntensity; // 0x408
	float AmbientOcclusionIntensity; // 0x40c
	float AmbientOcclusionStaticFraction; // 0x410
	float AmbientOcclusionRadius; // 0x414
	char AmbientOcclusionRadiusInWS : 1; // 0x418
	float AmbientOcclusionFadeDistance; // 0x41c
	float AmbientOcclusionFadeRadius; // 0x420
	float AmbientOcclusionDistance; // 0x424
	float AmbientOcclusionPower; // 0x428
	float AmbientOcclusionBias; // 0x42c
	float AmbientOcclusionQuality; // 0x430
	float AmbientOcclusionMipBlend; // 0x434
	float AmbientOcclusionMipScale; // 0x438
	float AmbientOcclusionMipThreshold; // 0x43c
	float AmbientOcclusionTemporalBlendWeight; // 0x440
	char RayTracingAO : 1; // 0x444
	int32_t RayTracingAOSamplesPerPixel; // 0x448
	float RayTracingAOIntensity; // 0x44c
	float RayTracingAORadius; // 0x450
	FLinearColor IndirectLightingColor; // 0x454
	float IndirectLightingIntensity; // 0x464
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x468
	int32_t RayTracingGIMaxBounces; // 0x46c
	int32_t RayTracingGISamplesPerPixel; // 0x470
	float ColorGradingIntensity; // 0x474
	UTexture* ColorGradingLUT; // 0x478
	float DepthOfFieldSensorWidth; // 0x480
	float DepthOfFieldFocalDistance; // 0x484
	float DepthOfFieldDepthBlurAmount; // 0x488
	float DepthOfFieldDepthBlurRadius; // 0x48c
	float DepthOfFieldFocalRegion; // 0x490
	float DepthOfFieldNearTransitionRegion; // 0x494
	float DepthOfFieldFarTransitionRegion; // 0x498
	float DepthOfFieldScale; // 0x49c
	float DepthOfFieldNearBlurSize; // 0x4a0
	float DepthOfFieldFarBlurSize; // 0x4a4
	float DepthOfFieldOcclusion; // 0x4a8
	float DepthOfFieldSkyFocusDistance; // 0x4ac
	float DepthOfFieldVignetteSize; // 0x4b0
	float MotionBlurAmount; // 0x4b4
	float MotionBlurMax; // 0x4b8
	int32_t MotionBlurTargetFPS; // 0x4bc
	float MotionBlurPerObjectSize; // 0x4c0
	float LPVIntensity; // 0x4c4
	float LPVVplInjectionBias; // 0x4c8
	float LPVSize; // 0x4cc
	float LPVSecondaryOcclusionIntensity; // 0x4d0
	float LPVSecondaryBounceIntensity; // 0x4d4
	float LPVGeometryVolumeBias; // 0x4d8
	float LPVEmissiveInjectionIntensity; // 0x4dc
	float LPVDirectionalOcclusionIntensity; // 0x4e0
	float LPVDirectionalOcclusionRadius; // 0x4e4
	float LPVDiffuseOcclusionExponent; // 0x4e8
	float LPVSpecularOcclusionExponent; // 0x4ec
	float LPVDiffuseOcclusionIntensity; // 0x4f0
	float LPVSpecularOcclusionIntensity; // 0x4f4
	EReflectionsType ReflectionsType; // 0x4f8
	float ScreenSpaceReflectionIntensity; // 0x4fc
	float ScreenSpaceReflectionQuality; // 0x500
	float ScreenSpaceReflectionMaxRoughness; // 0x504
	float RayTracingReflectionsMaxRoughness; // 0x508
	int32_t RayTracingReflectionsMaxBounces; // 0x50c
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x510
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x514
	char RayTracingReflectionsTranslucency : 1; // 0x515
	ETranslucencyType TranslucencyType; // 0x516
	float RayTracingTranslucencyMaxRoughness; // 0x518
	int32_t RayTracingTranslucencyRefractionRays; // 0x51c
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x520
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x524
	char RayTracingTranslucencyRefraction : 1; // 0x525
	int32_t PathTracingMaxBounces; // 0x528
	int32_t PathTracingSamplesPerPixel; // 0x52c
	float LPVFadeRange; // 0x530
	float LPVDirectionalOcclusionFadeRange; // 0x534
	float ScreenPercentage; // 0x538
	FWeightedBlendables WeightedBlendables; // 0x540
};

struct FMapHUDObject {
	int32_t _priority; // 0x8
	bool _showText; // 0xc
	bool _showMarkers; // 0xd
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FMovieSceneActorReferenceSectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FImpactEffectData {
	UParticleSystem* ParticleSystem; // 0x0
	UMaterial* Decal; // 0x8
};

struct FRootMotionSource_ConstantForce {
	FVector force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FMovieSceneVectorPropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FAttachComponentData {
	UMeshComponent* MeshComponent; // 0x0
	int32_t ParticleIndex; // 0x8
	bool SimulateTension; // 0xc
	FName SocketName; // 0x10
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FCarcassManagementData {
	AStaticMeshActor* CarcassClass; // 0x0
	TArray<AStaticMeshActor*> SpawnedCarcasses; // 0x8
};

struct FStaticTerrainLayerWeightParameter {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FWindowClimbingAnimationInfo {
	FVector AnchorOffset; // 0x0
	UAnimSequenceBase* AnchoringAnimation; // 0x10
	float AnchoringAnimationTime; // 0x18
	float AnchoringDuration; // 0x1c
	UAnimMontage* ClimbingMontage; // 0x20
	float MinWindowWidth; // 0x28
	float MinWindowHeight; // 0x2c
	float MinSpacingToLeftWindowEdge; // 0x30
	float MinSpacingToRightWindowEdge; // 0x34
	float MinWindowDistanceToFloor; // 0x38
	float MaxWindowDistanceToFloor; // 0x3c
	float StaminaDrain; // 0x40
};

struct FEngineServiceAuthGrant {
	FString userName; // 0x0
	FString UserToGrant; // 0x10
};

struct FMetabolismSPBColorScheme {
	FLinearColor BaseColor; // 0x0
	FLinearColor FillColorBottom; // 0x10
	FLinearColor FillColorTop; // 0x20
	FLinearColor OutlineColorBottom; // 0x30
	FLinearColor OutlineColorTop; // 0x40
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FVehicleWeaponAimingStanceTransitionCurves {
	EVehicleWeaponAimingStance stance; // 0x0
	UCurveFloat* SupportedYawAngles; // 0x8
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x0
	char bShadowIndirectOnly : 1; // 0x0
	char bUseEmissiveForStaticLighting : 1; // 0x0
	char bUseVertexNormalForHemisphereGather : 1; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float FullyOccludedSamplesFraction; // 0x14
};

struct FMapHUDHomeLocationObject {
	UFont* _font; // 0x18
};

struct FAnimNode_RandomPlayer {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FChaosDestructionEvent {
	FVector position; // 0x0
	FVector Normal; // 0xc
	FVector Velocity; // 0x18
	FVector AngularVelocity; // 0x24
	float ExtentMin; // 0x30
	float ExtentMax; // 0x34
	int32_t ParticleID; // 0x38
	float Time; // 0x3c
	int32_t Type; // 0x40
};

struct FRBFParams {
	int32_t TargetDimensions; // 0x0
	ERBFSolverType SolverType; // 0x4
	float Radius; // 0x8
	bool bAutomaticRadius; // 0xc
	ERBFFunctionType Function; // 0xd
	ERBFDistanceMethod DistanceMethod; // 0xe
	EBoneAxis TwistAxis; // 0xf
	float WeightThreshold; // 0x10
	ERBFNormalizeMethod NormalizeMethod; // 0x14
	FVector MedianReference; // 0x18
	float MedianMin; // 0x24
	float MedianMax; // 0x28
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FActiveManagers {
	TArray<AMissionManager*> MissionManagers; // 0x0
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FKeyBind {
	FKey Key; // 0x0
	FString Command; // 0x18
	char Control : 1; // 0x28
	char Shift : 1; // 0x28
	char Alt : 1; // 0x28
	char Cmd : 1; // 0x28
	char bIgnoreCtrl : 1; // 0x28
	char bIgnoreShift : 1; // 0x28
	char bIgnoreAlt : 1; // 0x28
	char bIgnoreCmd : 1; // 0x28
	char bDisabled : 1; // 0x29
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FVehicleSpawnerData {
	TArray<FPrimaryAssetId> VehicleAssets; // 0x0
	float Probability; // 0x10
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FMovieSceneActorReferenceData {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FPrisonerMovementSettings_Air {
	FPrisonerAirMovementParameters Fall; // 0x0
	FPrisonerAirMovementParameters SkydiveSlow; // 0x1c
	FPrisonerAirMovementParameters SkydiveFast; // 0x38
	FPrisonerAirMovementParameters DiveHeadFirst; // 0x54
	FPrisonerAirMovementParameters DiveFeetFirst; // 0x70
	TMap<FPrisonerFallingPosePair, FPrisonerFallingPoseTransitionParams> PoseTransitionParamsMap; // 0x90
	float JumpZVelocity; // 0xe0
	FFloatInterval JumpZVelocityMultiplierVsPerformanceRatio; // 0x120
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FPrimaryAssetTypeInfo {
	FName PrimaryAssetType; // 0x0
	TSoftClassPtr<UObject> AssetBaseClass; // 0x8
	UObject* AssetBaseClassLoaded; // 0x30
	bool bHasBlueprintClasses; // 0x38
	bool bIsEditorOnly; // 0x39
	TArray<FDirectoryPath> Directories; // 0x40
	TArray<FSoftObjectPath> SpecificAssets; // 0x50
	FPrimaryAssetRules Rules; // 0x60
	TArray<FString> AssetScanPaths; // 0x70
	bool bIsDynamicAsset; // 0x80
	int32_t NumberOfAssets; // 0x84
};

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	float VoxelSize; // 0x4
	FMaterialProxySettings MaterialSettings; // 0x8
	float MergeDistance; // 0x90
	FColor UnresolvedGeometryColor; // 0x94
	float MaxRayCastDist; // 0x98
	float HardAngleThreshold; // 0x9c
	int32_t LightMapResolution; // 0xa0
	EProxyNormalComputationMethod NormalCalculationMethod; // 0xa4
	ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xa5
	char bCalculateCorrectLODModel : 1; // 0xa6
	char bOverrideVoxelSize : 1; // 0xa6
	char bOverrideTransferDistance : 1; // 0xa6
	char bUseHardAngleThreshold : 1; // 0xa6
	char bComputeLightMapResolution : 1; // 0xa6
	char bRecalculateNormals : 1; // 0xa6
	char bUseLandscapeCulling : 1; // 0xa6
	char bAllowAdjacency : 1; // 0xa6
	char bAllowDistanceField : 1; // 0xa7
	char bReuseMeshLightmapUVs : 1; // 0xa7
	char bCreateCollision : 1; // 0xa7
	char bAllowVertexColors : 1; // 0xa7
	char bGenerateLightmapUVs : 1; // 0xa7
};

struct FTextBlockStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FVector2D ShadowOffset; // 0x88
	FLinearColor ShadowColorAndOpacity; // 0x90
	FSlateColor SelectedBackgroundColor; // 0xa0
	FLinearColor HighlightColor; // 0xc8
	FSlateBrush HighlightShape; // 0xd8
	FSlateBrush StrikeBrush; // 0x160
	FSlateBrush UnderlineBrush; // 0x1e8
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FAnimNode_PoseSnapshot {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode mode; // 0x50
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FDoorUnlockDataDescription {
	UDoorUnlockData* DoorUnlockData; // 0x0
	int32_t ProbabilityCount; // 0x8
};

struct FSkeletalMeshLODGroupSettings {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	EBoneFilterActionOption BoneFilterActionOption; // 0x8
	TArray<FBoneFilter> BoneList; // 0x10
	TArray<FName> BonesToPrioritize; // 0x20
	float WeightOfPrioritization; // 0x30
	UAnimSequence* BakePose; // 0x38
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FAnimNode_RotationOffsetBlendSpace {
	FPoseLink BasePose; // 0xe8
	int32_t LODThreshold; // 0xf8
	float Alpha; // 0xfc
	FInputScaleBias AlphaScaleBias; // 0x100
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x108
	FName AlphaCurveName; // 0x150
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x158
	EAnimAlphaInputType AlphaInputType; // 0x18c
	bool bAlphaBoolEnabled; // 0x18d
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FCharacterTemplate {
	float Strength; // 0x0
	float Constitution; // 0x4
	float Dexterity; // 0x8
	float Intelligence; // 0xc
	int32_t Age; // 0x10
	EGender Gender; // 0x14
	FString Name; // 0x18
	int32_t AppearanceIndex; // 0x28
	int32_t TattooIndex; // 0x2c
	float BreastSize; // 0x30
	float PenisSize; // 0x34
	bool GrowOverTime; // 0x38
	int32_t TeamIndex; // 0x3c
	FString BirthDate; // 0x40
	FString ArrestDate; // 0x50
	TArray<FSkillTemplate> Skills; // 0x60
	AItem* Item0; // 0x70
	AItem* Item1; // 0x78
	AItem* Item2; // 0x80
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRanges {
	TArray<FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange> ValueRanges; // 0x0
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FMovieSceneIntegerPropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FTireParticleData {
	FConZVehicleTireParticleData ParticleTrail; // 0x0
	FConZVehicleTireParticleData ParticleWave; // 0x14
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FItemContainerRepData {
	TArray<UObject*> Locks; // 0x0
	TArray<int32_t> RemainingNeutralizationAttemptsPerLock; // 0x10
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FZombieCombatStanceAnimations {
	UAnimSequenceBase* RunStartAnimation; // 0x0
	UAnimSequenceBase* RunLoopAnimation; // 0x8
	UAnimSequenceBase* RunStopAnimation; // 0x10
};

struct FGPUSpriteResourceData {
	TArray<FColor> QuantizedColorSamples; // 0x0
	TArray<FColor> QuantizedMiscSamples; // 0x10
	TArray<FColor> QuantizedSimulationAttrSamples; // 0x20
	FVector4 ColorScale; // 0x30
	FVector4 ColorBias; // 0x40
	FVector4 MiscScale; // 0x50
	FVector4 MiscBias; // 0x60
	FVector4 SimulationAttrCurveScale; // 0x70
	FVector4 SimulationAttrCurveBias; // 0x80
	FVector4 SubImageSize; // 0x90
	FVector4 SizeBySpeed; // 0xa0
	FVector ConstantAcceleration; // 0xb0
	FVector OrbitOffsetBase; // 0xbc
	FVector OrbitOffsetRange; // 0xc8
	FVector OrbitFrequencyBase; // 0xd4
	FVector OrbitFrequencyRange; // 0xe0
	FVector OrbitPhaseBase; // 0xec
	FVector OrbitPhaseRange; // 0xf8
	float GlobalVectorFieldScale; // 0x104
	float GlobalVectorFieldTightness; // 0x108
	float PerParticleVectorFieldScale; // 0x10c
	float PerParticleVectorFieldBias; // 0x110
	float DragCoefficientScale; // 0x114
	float DragCoefficientBias; // 0x118
	float ResilienceScale; // 0x11c
	float ResilienceBias; // 0x120
	float CollisionRadiusScale; // 0x124
	float CollisionRadiusBias; // 0x128
	float CollisionTimeBias; // 0x12c
	float CollisionRandomSpread; // 0x130
	float CollisionRandomDistribution; // 0x134
	float OneMinusFriction; // 0x138
	float RotationRateScale; // 0x13c
	float CameraMotionBlurAmount; // 0x140
	EParticleScreenAlignment ScreenAlignment; // 0x144
	EParticleAxisLock LockAxisFlag; // 0x145
	FVector2D PivotOffset; // 0x148
	char bRemoveHMDRoll : 1; // 0x150
	float MinFacingCameraBlendDistance; // 0x154
	float MaxFacingCameraBlendDistance; // 0x158
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FKey {
	FName KeyName; // 0x0
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FBuildingsReplicationHelper {
	TMap<FString, FBuildingData> BuildingsData; // 0x0
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FHeatSourceParameters {
	float Temperature; // 0x0
	UCurveFloat* TemperatureCurve; // 0x8
	float BurningSpeed; // 0x10
	float Emissivity; // 0x14
	float DistanceScale; // 0x18
	float InnerRadius; // 0x1c
	float OuterRadius; // 0x20
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FEventsRankingStatsItem {
	int32_t Rank; // 0x0
	FString PlayerName; // 0x8
	FEventsRankingStats CharacterStats; // 0x18
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FHitByMeleeImpactSoundsInfo {
	ECharacterImpactSourceSoundCategory ImpactSourceSoundCategory; // 0x0
	EHitSeverity HitSeverity; // 0x1
	EDetectHitCollisionType ImpactBodyPart; // 0x2
	FVector ImpactPoint; // 0x4
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FVisibilityReplication {
	bool Value; // 0x0
	int32_t RepHelper; // 0x4
};

struct FSafeText {
	FString Internal; // 0x0
	FString Base; // 0x10
	FString Shift; // 0x20
	char Flag; // 0x30
};

struct FVehicleSpawnerDataBasedOnPreset {
	UVehicleSpawnerPreset* Preset; // 0x0
	bool OverrideVehicleAssets; // 0x8
	bool OverrideProbability; // 0x9
	TArray<FPrimaryAssetId> VehicleAssets; // 0x10
	float Probability; // 0x20
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FUniqueNetIdRepl {
	TArray<char> ReplicationBytes; // 0x18
};

struct FObjectConditionContainer {
	TArray<UObject*> _objectConditions; // 0x0
};

struct FNiagaraPlatformSetCVarCondition {
	FName CVarName; // 0x0
	bool Value; // 0x8
	int32_t MinInt; // 0xc
	int32_t MaxInt; // 0x10
	float MinFloat; // 0x14
	float MaxFloat; // 0x18
	char bUseMinInt : 1; // 0x1c
	char bUseMaxInt : 1; // 0x1c
	char bUseMinFloat : 1; // 0x1c
	char bUseMaxFloat : 1; // 0x1c
};

struct FWindowDetectionParams {
	FVector CharacterHeadLocation; // 0x0
	FVector CharacterFeetLocation; // 0xc
	FVector CharacterForwardVector; // 0x18
	float MaxHorzDistanceToWindow; // 0x24
	float MaxCharacterToWindowAngle; // 0x28
	float HorzHitDetectionBias; // 0x2c
	float HitDetectionBiasBelowWindow; // 0x30
	float HitDetectionBiasAboveWindow; // 0x34
};

struct FRadialDamageDescription {
	float RandomDamageMultiplier; // 0x0
	float MinRandomMultiplierChance; // 0x4
	float MaxRandomMultiplierChance; // 0x8
	FVector BlastDirection; // 0xc
	float BlastInnerAngle; // 0x18
	float BlastOuterAngle; // 0x1c
	float BlastAngleDamageFalloff; // 0x20
};

struct FCharacterSpawnerData2 {
	AConZCharacter* Character; // 0x0
	TArray<EPhysicalSurface> AllowedSurfaces; // 0x8
	int32_t CharactersPerCell; // 0x18
	int32_t TotalCharacters; // 0x1c
	float MinElevation; // 0x20
	float MaxElevation; // 0x24
};

struct FConvolutionBloomSettings {
	UTexture2D* Texture; // 0x0
	float Size; // 0x8
	FVector2D CenterUV; // 0xc
	float PreFilterMin; // 0x14
	float PreFilterMax; // 0x18
	float PreFilterMult; // 0x1c
	float BufferScale; // 0x20
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FMaterialAttributesInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FDropZoneParameters {
	float IntroAnnouncementDelay; // 0x0
	float WarmupPhaseDuration; // 0x4
	float CrateDropDuration; // 0x8
	float SearchPhaseTimeLimit; // 0xc
	float CargoDropDuration; // 0x10
	float CapturePhaseTimeLimit; // 0x14
	float CargoOpeningDuration; // 0x18
	bool SkipKeyPhase; // 0x1c
	FGameEventRewardPoints PointsPerActivation; // 0x20
};

struct FRecastNavMeshGenerationProperties {
	int32_t TilePoolSize; // 0x0
	float TileSizeUU; // 0x4
	float CellSize; // 0x8
	float CellHeight; // 0xc
	float AgentRadius; // 0x10
	float AgentHeight; // 0x14
	float AgentMaxSlope; // 0x18
	float AgentMaxStepHeight; // 0x1c
	float MinRegionArea; // 0x20
	float MergeRegionSize; // 0x24
	float MaxSimplificationError; // 0x28
	int32_t TileNumberHardLimit; // 0x2c
	ERecastPartitioning RegionPartitioning; // 0x30
	ERecastPartitioning LayerPartitioning; // 0x31
	int32_t RegionChunkSplits; // 0x34
	int32_t LayerChunkSplits; // 0x38
	char bSortNavigationAreasByCost : 1; // 0x3c
	char bPerformVoxelFiltering : 1; // 0x3c
	char bMarkLowHeightAreas : 1; // 0x3c
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x3c
	char bFilterLowSpanSequences : 1; // 0x3c
	char bFilterLowSpanFromTileCache : 1; // 0x3c
	char bFixedTilePoolSize : 1; // 0x3c
};

struct FHairAdvancedRenderingSettings {
	bool bUseStableRasterization; // 0x0
	bool bScatterSceneLighting; // 0x1
};

struct FCharacterArmsImpactSoundData {
	TArray<ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x0
	TArray<ECharacterArmsImpactSoundCategory> ImpactTargetCategories; // 0x10
	FCharacterImpactSounds Sounds; // 0x20
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FZombieMeshVariation2 {
	USkeletalMesh* DressedMesh; // 0x0
	USkeletalMesh* StrippedMesh; // 0x8
};

struct FConeConstraint {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FItemClassesArray {
	TArray<AItem*> ItemClasses; // 0x0
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FAnimUpdateRateParameters {
	EUpdateRateShiftBucket ShiftBucket; // 0x1
	char bInterpolateSkippedFrames : 1; // 0x2
	char bShouldUseLodMap : 1; // 0x2
	char bShouldUseMinLod : 1; // 0x2
	char bSkipUpdate : 1; // 0x2
	char bSkipEvaluation : 1; // 0x2
	int32_t UpdateRate; // 0x4
	int32_t EvaluationRate; // 0x8
	float TickedPoseOffestTime; // 0xc
	float AdditionalTime; // 0x10
	int32_t BaseNonRenderedUpdateRate; // 0x18
	int32_t MaxEvalRateForInterpolation; // 0x1c
	TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20
	TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30
	int32_t SkippedUpdateFrames; // 0x80
	int32_t SkippedEvalFrames; // 0x84
};

struct FHairStretchConstraint {
	bool SolveStretch; // 0x0
	bool ProjectStretch; // 0x1
	float StretchDamping; // 0x4
	float StretchStiffness; // 0x8
	FRuntimeFloatCurve StretchScale; // 0x10
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FCompositeSection {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FNiagaraUserRedirectionParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FPrisonerAppearanceMaterialSet {
	UMaterialInstance* HairMaterial; // 0x0
	UMaterialInstance* FacialHairMaterial; // 0x8
	UMaterialInstance* HeadMaterial; // 0x10
	UMaterialInstance* TorsoMaterial; // 0x18
	UMaterialInstance* ArmsMaterial; // 0x20
	UMaterialInstance* HandsMaterial; // 0x28
	UMaterialInstance* LegsMaterial; // 0x30
	UMaterialInstance* FeetMaterial; // 0x38
	UMaterialInstance* PenisMaterial; // 0x40
};

struct FPoseDriverTarget {
	TArray<FPoseDriverTransform> BoneTransforms; // 0x0
	FRotator TargetRotation; // 0x10
	float TargetScale; // 0x1c
	ERBFDistanceMethod DistanceMethod; // 0x20
	ERBFFunctionType FunctionType; // 0x21
	bool bApplyCustomCurve; // 0x22
	FRichCurve CustomCurve; // 0x28
	FName DrivenName; // 0xa8
	bool bIsHidden; // 0xb8
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FChaosSolverConfiguration {
	int32_t Iterations; // 0x0
	int32_t CollisionPairIterations; // 0x4
	int32_t PushOutIterations; // 0x8
	int32_t CollisionPushOutPairIterations; // 0xc
	float CollisionMarginFraction; // 0x10
	float CollisionMarginMax; // 0x14
	float CollisionCullDistance; // 0x18
	int32_t JointPairIterations; // 0x1c
	int32_t JointPushOutPairIterations; // 0x20
	float ClusterConnectionFactor; // 0x24
	EClusterUnionMethod ClusterUnionConnectionType; // 0x28
	bool bGenerateCollisionData; // 0x29
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2c
	bool bGenerateBreakData; // 0x3c
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x40
	bool bGenerateTrailingData; // 0x50
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x54
	bool bGenerateContactGraph; // 0x64
};

struct FPrisonerNearbyFoliageInfo {
	TArray<FPrisonerNearbyFoliageInstanceInfo> InstancesInfo; // 0x0
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FAnimationState {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FRequiredRepairingItemTagParams {
	UBaseItemTag* ItemTag; // 0x0
	int32_t ItemUsageConsumption; // 0x8
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> names; // 0x10
};

struct FVehicleWeaponAimingThirdPersonData {
	TArray<FVehicleThirdPersonWeaponTypeData> WeaponTypeData; // 0x0
};

struct FDcxVehicleTireLoadFilterData {
	float MinNormalizedLoad; // 0x0
	float MinFilteredNormalizedLoad; // 0x4
	float MaxNormalizedLoad; // 0x8
	float MaxFilteredNormalizedLoad; // 0xc
};

struct FAnimNode_BoneDrivenController {
	FBoneReference SourceBone; // 0xc8
	UCurveFloat* DrivingCurve; // 0xd8
	float Multiplier; // 0xe0
	float RangeMin; // 0xe4
	float RangeMax; // 0xe8
	float RemappedMin; // 0xec
	float RemappedMax; // 0xf0
	FName ParameterName; // 0xf4
	FBoneReference TargetBone; // 0xfc
	EDrivenDestinationMode DestinationMode; // 0x10c
	EDrivenBoneModificationMode ModificationMode; // 0x10d
	EComponentType SourceComponent; // 0x10e
	char bUseRange : 1; // 0x10f
	char bAffectTargetTranslationX : 1; // 0x10f
	char bAffectTargetTranslationY : 1; // 0x10f
	char bAffectTargetTranslationZ : 1; // 0x10f
	char bAffectTargetRotationX : 1; // 0x10f
	char bAffectTargetRotationY : 1; // 0x10f
	char bAffectTargetRotationZ : 1; // 0x10f
	char bAffectTargetScaleX : 1; // 0x10f
	char bAffectTargetScaleY : 1; // 0x110
	char bAffectTargetScaleZ : 1; // 0x110
};

struct FCorpseSkeletalMeshRepData {
	FName DisplayName; // 0x0
	USkeletalMesh* Mesh; // 0x8
	TArray<UMaterialInterface*> Materials; // 0x10
	bool Visibility; // 0x20
	FTransform Transform; // 0x30
	FName AttachSocket; // 0x60
};

struct FAnimNode_BlendListByInt {
	int32_t ActiveChildIndex; // 0x98
};

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x10
	FRotator Rotation; // 0x1c
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	bool bServerHasVelocity; // 0x2a
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FConZSquadEmblemElement {
	char ShapeIndex; // 0x0
	char PrimaryColorIndex; // 0x1
	char SecondaryColorIndex; // 0x2
	char TertiaryColorIndex; // 0x3
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FDetectionDelayTimerData {
	float MinDetectionDelayBasedOnDistance; // 0x0
	float MaxDetectionDelayBasedOnDistance; // 0x4
	float MinDetectionDelayBasedOnVisibility; // 0x8
	float MaxDetectionDelayBasedOnVisibility; // 0xc
};

struct FLadderDetectionParams {
	FVector RayOrigin; // 0x0
	FVector RayDirection; // 0xc
	float MaxHorzDistanceToLadder; // 0x18
	float MaxRayToLadderAngle; // 0x1c
};

struct FAtmospherePrecomputeParameters {
	float DensityHeight; // 0x0
	float DecayHeight; // 0x4
	int32_t MaxScatteringOrder; // 0x8
	int32_t TransmittanceTexWidth; // 0xc
	int32_t TransmittanceTexHeight; // 0x10
	int32_t IrradianceTexWidth; // 0x14
	int32_t IrradianceTexHeight; // 0x18
	int32_t InscatterAltitudeSampleNum; // 0x1c
	int32_t InscatterMuNum; // 0x20
	int32_t InscatterMuSNum; // 0x24
	int32_t InscatterNuNum; // 0x28
};

struct FPrisonerWaterMovementParameters {
	float MaxSpeed; // 0x0
	float Acceleration; // 0x4
	float Deceleration; // 0x8
};

struct FDoorUnlockDataCollection {
	TArray<FDoorUnlockDataDescription> Data; // 0x0
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FEnvTraceData {
	int32_t VersionNum; // 0x0
	UNavigationQueryFilter* NavigationFilter; // 0x8
	float ProjectDown; // 0x10
	float ProjectUp; // 0x14
	float ExtentX; // 0x18
	float ExtentY; // 0x1c
	float ExtentZ; // 0x20
	float PostProjectionVerticalOffset; // 0x24
	ETraceTypeQuery TraceChannel; // 0x28
	ECollisionChannel SerializedChannel; // 0x29
	EEnvTraceShape TraceShape; // 0x2a
	EEnvQueryTrace TraceMode; // 0x2b
	char bTraceComplex : 1; // 0x2c
	char bOnlyBlockingHits : 1; // 0x2c
	char bCanTraceOnNavMesh : 1; // 0x2c
	char bCanTraceOnGeometry : 1; // 0x2c
	char bCanDisableTrace : 1; // 0x2c
	char bCanProjectDown : 1; // 0x2c
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FCommonMapNames {
	FName MainMenu; // 0x0
	FName CharacterCreationMenu; // 0x8
	FName Singleplayer; // 0x10
};

struct FNutrientsData {
	float Data[0x20]; // 0x0
};

struct FTireSurfaceAudioEntry {
	UAkAudioEvent* SoundGroup; // 0x0
	TArray<EPhysicalSurface> RelatedPhysicalSurfaces; // 0x8
};

struct FAnimNode_AssetPlayerBase {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FMovieSceneGeometryCacheParams {
	UGeometryCache* GeometryCacheAsset; // 0x0
	FFrameNumber FirstLoopStartFrameOffset; // 0x8
	FFrameNumber StartFrameOffset; // 0xc
	FFrameNumber EndFrameOffset; // 0x10
	float PlayRate; // 0x14
	char bReverse : 1; // 0x18
	float StartOffset; // 0x1c
	float EndOffset; // 0x20
	FSoftObjectPath GeometryCache; // 0x28
};

struct FRawDistributionVector {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FSpawnArea {
	FVector Center; // 0x0
	float Radius; // 0xc
	int32_t TeamIndex; // 0x10
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x0
	ECollisionTypeEnum CollisionType; // 0x4
	EImplicitTypeEnum ImplicitType; // 0x5
	int32_t MinLevelSetResolution; // 0x8
	int32_t MaxLevelSetResolution; // 0xc
	int32_t MinClusterLevelSetResolution; // 0x10
	int32_t MaxClusterLevelSetResolution; // 0x14
	int32_t CollisionObjectReductionPercentage; // 0x18
	float CollisionParticlesFraction; // 0x1c
	int32_t MaximumCollisionParticles; // 0x20
};

struct FMovieSceneNiagaraSystemTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FMovieSceneColorKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FSourceEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
	float DryLevel; // 0x14
	bool bFilterEnabled; // 0x18
	EStereoDelayFiltertype FilterType; // 0x19
	float FilterFrequency; // 0x1c
	float FilterQ; // 0x20
};

struct FChannelDefinition {
	FName ChannelName; // 0x0
	FName ClassName; // 0x8
	UObject* ChannelClass; // 0x10
	int32_t StaticChannelIndex; // 0x18
	bool bTickOnCreate; // 0x1c
	bool bServerOpen; // 0x1d
	bool bClientOpen; // 0x1e
	bool bInitialServer; // 0x1f
	bool bInitialClient; // 0x20
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FHairLODSettings {
	float CurveDecimation; // 0x0
	float VertexDecimation; // 0x4
	float AngularThreshold; // 0x8
	float ScreenSize; // 0xc
	float ThicknessScale; // 0x10
	bool bVisible; // 0x14
	EGroomGeometryType GeometryType; // 0x15
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FRootMotionSource_RadialForce {
	FVector Location; // 0x98
	AActor* LocationActor; // 0xa8
	float Radius; // 0xb0
	float Strength; // 0xb4
	bool bIsPush; // 0xb8
	bool bNoZForce; // 0xb9
	UCurveFloat* StrengthDistanceFalloff; // 0xc0
	UCurveFloat* StrengthOverTime; // 0xc8
	bool bUseFixedWorldDirection; // 0xd0
	FRotator FixedWorldDirection; // 0xd4
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FMapHUDDroneObject {
	UTexture* _droneDirectionTexture; // 0x18
	UTexture* _dronePositionTexture; // 0x20
	UTexture* _dronePingAnimationTexture; // 0x28
};

struct FDockTabStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x280
	FSlateBrush ActiveBrush; // 0x308
	FSlateBrush ColorOverlayTabBrush; // 0x390
	FSlateBrush ColorOverlayIconBrush; // 0x418
	FSlateBrush ForegroundBrush; // 0x4a0
	FSlateBrush HoveredBrush; // 0x528
	FSlateBrush ContentAreaBrush; // 0x5b0
	FSlateBrush TabWellBrush; // 0x638
	FMargin TabPadding; // 0x6c0
	float OverlapWidth; // 0x6d0
	FSlateColor FlashColor; // 0x6d8
};

struct FMovieSceneStringChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FPrisonerMovementSettings_Ground {
	FPrisonerMovementSettings_Ground_Standing Standing; // 0x0
	FPrisonerMovementSettings_Ground_Crouching Crouching; // 0xb4
	FPrisonerMovementSettings_Ground_Prone Prone; // 0x120
	FFloatInterval MaxSpeedMultiplierVsPerformanceRatio; // 0x144
	FFloatInterval AccelerationMultiplierVsPerformanceRatio; // 0x14c
	FFloatInterval DecelerationMultiplierVsPerformanceRatio; // 0x154
	FFloatInterval MaxSpeedWhenImmersedInWaterVsPerformanceRatio; // 0x15c
	float AccelerationMultiplierWhenImmersedInWater; // 0x164
	float DecelerationMultiplierWhenImmersedInWater; // 0x168
};

struct FLiveLinkCameraStaticData {
	bool bIsFieldOfViewSupported; // 0x10
	bool bIsAspectRatioSupported; // 0x11
	bool bIsFocalLengthSupported; // 0x12
	bool bIsProjectionModeSupported; // 0x13
	float FilmBackWidth; // 0x14
	float FilmBackHeight; // 0x18
	bool bIsApertureSupported; // 0x1c
	bool bIsFocusDistanceSupported; // 0x1d
};

struct FSliderStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x90
	FSlateBrush DisabledBarImage; // 0x118
	FSlateBrush NormalThumbImage; // 0x1a0
	FSlateBrush HoveredThumbImage; // 0x228
	FSlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FPowerNodeConnector {
	FName SocketName; // 0x0
	bool ShouldHaveCable; // 0x8
	int32_t CableMeshIndex; // 0xc
	int32_t TargetConnectorIndex; // 0x10
	UStaticMeshComponent* CableMeshComponent; // 0x18
};

struct FXRMotionControllerData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	EXRVisualType DeviceVisualType; // 0x1c
	EControllerHand HandIndex; // 0x1d
	ETrackingStatus TrackingStatus; // 0x1e
	FVector GripPosition; // 0x20
	FQuat GripRotation; // 0x30
	FVector AimPosition; // 0x40
	FQuat AimRotation; // 0x50
	TArray<FVector> HandKeyPositions; // 0x60
	TArray<FQuat> HandKeyRotations; // 0x70
	TArray<float> HandKeyRadii; // 0x80
	bool bIsGrasped; // 0x90
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FEngineeringSkillParametersPerSkillLevel {
	float RepairRadius; // 0x0
	float RepairTimeMultiplier; // 0x4
	float ResultQuality; // 0x8
	float IngredientMultiplier; // 0xc
	float ToolUsageMultiplier; // 0x10
	float FillFuelDurationMultiplier; // 0x14
	float DrainFuelDurationMultiplier; // 0x18
	float ChargeBatteryDurationMultiplier; // 0x1c
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FSafeFloat {
	FString Internal; // 0x0
	FString Base; // 0x10
	FString Shift; // 0x20
	char Flag; // 0x30
};

struct FHairGroupsCardsSourceDescription {
	UMaterialInterface* Material; // 0x0
	FName MaterialSlotName; // 0x8
	EHairCardsSourceType SourceType; // 0x10
	UStaticMesh* ProceduralMesh; // 0x18
	FString ProceduralMeshKey; // 0x20
	UStaticMesh* ImportedMesh; // 0x30
	FHairGroupsProceduralCards ProceduralSettings; // 0x38
	FHairGroupCardsTextures Textures; // 0x70
	int32_t GroupIndex; // 0xa0
	int32_t LODIndex; // 0xa4
	FHairGroupCardsInfo CardsInfo; // 0xa8
	FString ImportedMeshKey; // 0xb0
};

struct FMovieSceneMediaPlayerPropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FSpinBoxStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x90
	FSlateBrush ActiveFillBrush; // 0x118
	FSlateBrush InactiveFillBrush; // 0x1a0
	FSlateBrush ArrowsImage; // 0x228
	FSlateColor ForegroundColor; // 0x2b0
	FMargin TextPadding; // 0x2d8
};

struct FRichCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FAkMidiPitchBend {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FPrisonerMovementSettings_Ground_Standing {
	FPrisonerMovementSettings_Ground_Standing_Walking Walking; // 0x0
	FPrisonerMovementSettings_Ground_Standing_Walking WalkLimping; // 0x30
	FPrisonerMovementSettings_Ground_Standing_Jogging Jogging; // 0x60
	FPrisonerMovementSettings_Ground_Standing_Jogging JogLimping; // 0x84
	FPrisonerMovementSettings_Ground_Standing_Running Running; // 0xa8
};

struct FHandsPoseCorrections {
	UAnimSequenceBase* RightHand; // 0x0
	UAnimSequenceBase* RightFist; // 0x8
	UAnimSequenceBase* RightFistInCombatMode; // 0x10
	float RightHandToIdleBlendAlpha; // 0x18
	UAnimSequenceBase* LeftHand; // 0x20
	UAnimSequenceBase* LeftFist; // 0x28
	UAnimSequenceBase* LeftFistInCombatMode; // 0x30
	float LeftHandToIdleBlendAlpha; // 0x38
};

struct FAIDataProviderIntValue {
	int32_t DefaultValue; // 0x30
};

struct FTradeableTagParams {
	bool CanBeSoldByPlayer; // 0x0
	bool CanBePurchasedByPlayer; // 0x1
	ETradeCategory TradeCategory; // 0x2
	float BasePurchasePriceModifier; // 0x4
	float BaseSalePriceReductionModifier; // 0x8
	FGameplayTagContainer TraderSearchTypes; // 0x10
	FGameplayTagContainer TraderSearchRelated; // 0x30
};

struct FLiveLinkCameraBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FCharacterStats {
	float FamePoints; // 0x8
	int32_t FameLevel; // 0xc
	float EventScore; // 0x10
	int32_t EventKills; // 0x14
	int32_t EventTeamKills; // 0x18
	int32_t EventDeaths; // 0x1c
	int32_t EventSuicides; // 0x20
	int32_t EventAssists; // 0x24
	int32_t EventHeadshots; // 0x28
	bool IsBanned; // 0x2c
};

struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; // 0x0
	FVector2D TextureCoordinate0; // 0x4
	FVector2D TextureCoordinate1; // 0xc
	FColor VertexColor; // 0x14
	FVector VertexNormal; // 0x18
	FVector VertexTangent; // 0x24
	float VertexBinormalSign; // 0x30
};

struct FMapHUDOtherPlayersObject {
	UTexture* _otherPlayerPositionOuterRingTexture; // 0x18
	FLinearColor _otherPlayerOuterRingColor; // 0x20
	FLinearColor _otherPlayerHighlightOuterRingColor; // 0x30
	UTexture* _otherPlayerPositionInnerCicleTexture; // 0x40
	FLinearColor _otherPlayerInnerCircleColor; // 0x48
	FLinearColor _otherPlayerHighlightInnerCircleColor; // 0x58
	UFont* _otherPlayerFont; // 0x68
	FLinearColor _otherPlayerNameHighlightColor; // 0x70
	FLinearColor _otherPlayerNameHighlightOutlineColor; // 0x80
	FLinearColor _otherPlayerNameColor; // 0x90
	FLinearColor _otherPlayerNameOutlineColor; // 0xa0
	FVector2D _prisonerPositionTextureSize; // 0xb0
	int32_t _otherPlayerTextStackOffset; // 0xb8
};

struct FTractor4WAnimWheelData {
	float RollAngle; // 0x0
	float SteerAngle; // 0x4
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FLocalOffsetCurves {
	UCurveLinearColor* YawIdle; // 0x0
	UCurveLinearColor* YawMoving; // 0x8
	UCurveLinearColor* PitchIdle; // 0x10
	UCurveLinearColor* PitchMoving; // 0x18
};

struct FSkillEventWeapon {
	EWeaponCategory WeaponCategory; // 0x0
};

struct FDatasmithImportBaseOptions {
	EDatasmithImportScene SceneHandling; // 0x0
	bool bIncludeGeometry; // 0x1
	bool bIncludeMaterial; // 0x2
	bool bIncludeLight; // 0x3
	bool bIncludeCamera; // 0x4
	bool bIncludeAnimation; // 0x5
	FDatasmithAssetImportOptions AssetOptions; // 0x8
	FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x10
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FMovieSceneVector4KeyStruct {
	FVector4 Vector; // 0x30
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FPhysicalSurfaceVehicleEffectsData {
	UParticleSystem* ParticleTrail; // 0x0
	float ParticleTrailSlipModifier; // 0x8
	float ParticleTrailDestructionDelay; // 0xc
	UParticleSystem* ParticleWave; // 0x10
	float ParticleWaveSlipModifier; // 0x18
	float ParticleWaveDestructionDelay; // 0x1c
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FRotationRetargetingInfo {
	bool bEnabled; // 0x0
	FTransform Source; // 0x10
	FTransform Target; // 0x40
	ERotationComponent RotationComponent; // 0x70
	FVector TwistAxis; // 0x74
	bool bUseAbsoluteAngle; // 0x80
	float SourceMinimum; // 0x84
	float SourceMaximum; // 0x88
	float TargetMinimum; // 0x8c
	float TargetMaximum; // 0x90
	EEasingFuncType EasingType; // 0x94
	FRuntimeFloatCurve CustomCurve; // 0x98
	bool bFlipEasing; // 0x120
	float EasingWeight; // 0x124
	bool bClamp; // 0x128
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FSentrySpawnerDescription {
	ASentry2* _sentryClass; // 0x8
};

struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	float SnapRadius; // 0xc
	float SnapHeight; // 0x10
	FNavAgentSelector SupportedAgents; // 0x14
	char bSupportsAgent0 : 1; // 0x18
	char bSupportsAgent1 : 1; // 0x18
	char bSupportsAgent2 : 1; // 0x18
	char bSupportsAgent3 : 1; // 0x18
	char bSupportsAgent4 : 1; // 0x18
	char bSupportsAgent5 : 1; // 0x18
	char bSupportsAgent6 : 1; // 0x18
	char bSupportsAgent7 : 1; // 0x18
	char bSupportsAgent8 : 1; // 0x19
	char bSupportsAgent9 : 1; // 0x19
	char bSupportsAgent10 : 1; // 0x19
	char bSupportsAgent11 : 1; // 0x19
	char bSupportsAgent12 : 1; // 0x19
	char bSupportsAgent13 : 1; // 0x19
	char bSupportsAgent14 : 1; // 0x19
	char bSupportsAgent15 : 1; // 0x19
	ENavLinkDirection Direction; // 0x1c
	char bUseSnapHeight : 1; // 0x1d
	char bSnapToCheapestArea : 1; // 0x1d
	char bCustomFlag0 : 1; // 0x1d
	char bCustomFlag1 : 1; // 0x1d
	char bCustomFlag2 : 1; // 0x1d
	char bCustomFlag3 : 1; // 0x1d
	char bCustomFlag4 : 1; // 0x1d
	char bCustomFlag5 : 1; // 0x1d
	char bCustomFlag6 : 1; // 0x1e
	char bCustomFlag7 : 1; // 0x1e
	UNavAreaBase* AreaClass; // 0x20
};

struct FDeluxeVersion {
	bool IsDeluxeUser; // 0x0
	bool IsDeluxe2User; // 0x1
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FRunningSkillParametersPerSkillLevel {
	FExperienceDependentFloat MaxSpeedMultiplier; // 0x0
	FExperienceDependentFloat StaminaConsumptionMultiplier; // 0x8
};

struct FCustomZoneConfiguration {
	FString Name; // 0x0
	FLinearColor Color; // 0x10
	ECustomZoneEventHandlingMethod DamageHandlingMethod[0xe]; // 0x20
	ECustomZoneEventHandlingMethod PlayerLockpickingHandlingMethod; // 0x2e
	ECustomZoneEventHandlingMethod WorldLockpickingHandlingMethod; // 0x2f
	ECustomZoneEventHandlingMethod BaseBuildingHandlingMethod; // 0x30
};

struct FAnimNode_CopyBone {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FAnimNode_LegIK {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FLiveLinkClearSubject {
	FName SubjectName; // 0x0
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	float AnimStartOffset; // 0x10
	float AnimEndOffset; // 0x14
	float AnimPlayRate; // 0x18
	char bLooping : 1; // 0x1c
	char bReverse : 1; // 0x1c
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FUserProfileAuthorityInfo {
	FString Name; // 0x0
	FString Ip; // 0x10
	int32_t ResponsePort; // 0x20
	int32_t GameplayPort; // 0x24
	FDbIntegerId UserProfileId; // 0x28
	FString AuthToken; // 0x30
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FClusterNode {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
	FVector MinInstanceScale; // 0x28
	FVector MaxInstanceScale; // 0x34
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FNiagaraEventScriptProperties {
	EScriptExecutionMode ExecutionMode; // 0x28
	uint32_t SpawnNumber; // 0x2c
	uint32_t MaxEventsPerFrame; // 0x30
	FGuid SourceEmitterID; // 0x34
	FName SourceEventName; // 0x44
	bool bRandomSpawnNumber; // 0x4c
	uint32_t MinSpawnNumber; // 0x50
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FWeaponBowArmsShake {
	UAnimSequenceBase* ThirdPerson[0x3]; // 0x0
	UAnimSequenceBase* FirstPerson[0x3]; // 0x18
};

struct FPrisonerMovementSettings_Water {
	FPrisonerWaterMovementParameters Slow; // 0x0
	FPrisonerWaterMovementParameters Medium; // 0xc
	FPrisonerWaterMovementParameters Fast; // 0x18
	FPrisonerWaterMovementParameters DivingSlow; // 0x24
	FPrisonerWaterMovementParameters DivingMedium; // 0x30
	FFloatInterval MaxSpeedMultiplierVsPerformanceRatio; // 0x3c
	FFloatInterval AccelerationMultiplierVsPerformanceRatio; // 0x44
	FFloatInterval DecelerationMultiplierVsPerformanceRatio; // 0x4c
};

struct FHairGeometrySettings {
	float HairWidth; // 0x0
	float HairRootScale; // 0x4
	float HairTipScale; // 0x8
	float HairClipScale; // 0xc
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FPossibleChoppingTools {
	TArray<FChoppingTool2> PossibleTools; // 0x0
};

struct FLandscapeEditToolRenderData {
	UMaterialInterface* ToolMaterial; // 0x0
	UMaterialInterface* GizmoMaterial; // 0x8
	int32_t SelectedType; // 0x10
	int32_t DebugChannelR; // 0x14
	int32_t DebugChannelG; // 0x18
	int32_t DebugChannelB; // 0x1c
	UTexture2D* DataTexture; // 0x20
	UTexture2D* LayerContributionTexture; // 0x28
	UTexture2D* DirtyTexture; // 0x30
};

struct FTilesData {
	UHierarchicalInstancedStaticMeshComponent* HISMComponentMain; // 0x0
	UHierarchicalInstancedStaticMeshComponent* HISMComponentOutline; // 0x8
	UHierarchicalInstancedStaticMeshComponent* HISMComponentDepth; // 0x10
};

struct FPrisonerMeleeAttackTypes {
	FGameplayTag PrimaryMeleeAttackTypeWhenNotMoving; // 0x0
	FGameplayTag PrimaryMeleeAttackTypeWhenWalking; // 0x8
	FGameplayTag PrimaryMeleeAttackTypeWhenJogging; // 0x10
	FGameplayTag PrimaryMeleeAttackTypeWhenRunning; // 0x18
	FGameplayTag PrimaryMeleeAttackTypeWhenFalling; // 0x20
	FGameplayTag SecondaryMeleeAttackTypeWhenNotMoving; // 0x28
	FGameplayTag SecondaryMeleeAttackTypeWhenWalking; // 0x30
	FGameplayTag SecondaryMeleeAttackTypeWhenJogging; // 0x38
	FGameplayTag SecondaryMeleeAttackTypeWhenRunning; // 0x40
	FGameplayTag SecondaryMeleeAttackTypeWhenFalling; // 0x48
	FGameplayTag ComboMeleeAttackTypeWhenNotMoving; // 0x50
	FGameplayTag ComboMeleeAttackTypeWhenWalking; // 0x58
	FGameplayTag ComboMeleeAttackTypeWhenJogging; // 0x60
	FGameplayTag ComboMeleeAttackTypeWhenRunning; // 0x68
	FGameplayTag ComboMeleeAttackTypeWhenFalling; // 0x70
	FGameplayTag BashMeleeAttackType; // 0x78
	FGameplayTag WeaponBayonetMeleeAttackType; // 0x80
};

struct FBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FAnimNode_StateMachine {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FPrisonerRestingData {
	EPrisonerRestingMode mode; // 0x0
	bool IsRestingOnGround; // 0x1
	bool HasChangedTransform; // 0x2
	bool HasDisabledCapsuleCollision; // 0x3
	TWeakObjectPtr<UAnimSequenceBase> RestingAnimation; // 0x4
	float FeetIKOffset; // 0xc
};

struct FBuildingsArray {
	TArray<ABuilding*> _buildings; // 0x0
};

struct FActorResourceLockNetwork {
	FResourceNetworkGUID LockOwnerGUID; // 0x0
	FResourceNetworkGUID ResourceGUID; // 0x4
	int32_t ResourceId; // 0x8
};

struct FMovieSceneEvaluationFieldSegmentPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FFishStateParameters {
	float MaxSpeed; // 0x0
	float Acceleration; // 0x4
	float Deceleration; // 0x8
	float TurnSpeed; // 0xc
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FDummyCollisionCapsuleInfo {
	TWeakObjectPtr<AActor> AttachParent; // 0x0
	FGameplayTag Attachment; // 0x8
	FTransform RelativeTransform; // 0x10
	float UnscaledRadius; // 0x40
	float UnscaledHalfHeight; // 0x44
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FAttackedByMeleeData {
	TWeakObjectPtr<AActor> attacker; // 0x0
	TWeakObjectPtr<UAnimMontage> Montage; // 0x8
	float PlayRate; // 0x10
	float Duration; // 0x14
};

struct FVehicleExhaustEffectsParameters {
	FTransform Transform; // 0x0
	UParticleSystem* EngineStartedParticleSystem; // 0x30
	UParticleSystem* EngineIdleParticleSystem; // 0x38
	UParticleSystem* ThrottlePressedParticleSystem; // 0x40
	UAkAudioEvent* ThrottlePressedAudioEvent; // 0x48
	float MinDurationBetweenThrottlePressedEffects; // 0x50
	float DeactivationDelay; // 0x54
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FAttenuationSubmixSendSettings {
	USoundSubmixBase* Submix; // 0x0
	ESubmixSendMethod SubmixSendMethod; // 0x8
	float SubmixSendLevelMin; // 0xc
	float SubmixSendLevelMax; // 0x10
	float SubmixSendDistanceMin; // 0x14
	float SubmixSendDistanceMax; // 0x18
	float ManualSubmixSendLevel; // 0x1c
	FRuntimeFloatCurve CustomSubmixSendCurve; // 0x20
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FHairMaterialConstraints {
	FHairBendConstraint BendConstraint; // 0x0
	FHairStretchConstraint StretchConstraint; // 0x98
	FHairCollisionConstraint CollisionConstraint; // 0x130
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FChoppingRecipe {
	FText InteractionCaption; // 0x0
	UAkAudioEvent* ChopAudioEvent; // 0x18
	ENoiseLevel noiseLevel; // 0x20
	EPrisonerMontage ChoppingMontage; // 0x21
	EPrisonerMontage ChoppingMontageEnd; // 0x22
	bool EnforceDroppingItemOnGround; // 0x23
	bool ShouldResultUsesDependOnSourceHP; // 0x24
	TArray<FChoppingIngredient> Ingredients; // 0x28
	FPossibleChoppingTools ToolRequiredToBeInRightHand; // 0x38
	TArray<FPossibleChoppingTools> AdditionalToolsRequired; // 0x48
	USkill* Skill; // 0x58
	float ExperiencePointsAwarded; // 0x60
	FChoppingParametersPerSkillLevel NoSkillLevelData; // 0x64
	FChoppingParametersPerSkillLevel BasicLevelData; // 0x70
	FChoppingParametersPerSkillLevel MediumLevelData; // 0x7c
	FChoppingParametersPerSkillLevel AdvancedLevelData; // 0x88
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FHairGroupsMeshesSourceDescription {
	UMaterialInterface* Material; // 0x0
	FName MaterialSlotName; // 0x8
	UStaticMesh* ImportedMesh; // 0x10
	FHairGroupCardsTextures Textures; // 0x18
	int32_t GroupIndex; // 0x48
	int32_t LODIndex; // 0x4c
	FString ImportedMeshKey; // 0x50
};

struct FExperienceDependentFloat {
	float ValueWhenExperienceIsMinimal; // 0x0
	float ValueWhenExperienceIsMaximal; // 0x4
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FSubsurfaceProfileStruct {
	FLinearColor SurfaceAlbedo; // 0x0
	FLinearColor MeanFreePathColor; // 0x10
	float MeanFreePathDistance; // 0x20
	float WorldUnitScale; // 0x24
	bool bEnableBurley; // 0x28
	float ScatterRadius; // 0x2c
	FLinearColor SubsurfaceColor; // 0x30
	FLinearColor FalloffColor; // 0x40
	FLinearColor BoundaryColorBleed; // 0x50
	float ExtinctionScale; // 0x60
	float NormalScale; // 0x64
	float ScatteringDistribution; // 0x68
	float IOR; // 0x6c
	float Roughness0; // 0x70
	float Roughness1; // 0x74
	float LobeMix; // 0x78
	FLinearColor TransmissionTintColor; // 0x7c
};

struct FAkMidiGeneric {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FConZBaseElementIdentifier {
	int64_t BaseId; // 0x0
	int64_t ElementID; // 0x8
	FVector Location; // 0x10
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FSubmixEffectReverbSettings {
	bool bBypassEarlyReflections; // 0x0
	float ReflectionsDelay; // 0x4
	float GainHF; // 0x8
	float ReflectionsGain; // 0xc
	bool bBypassLateReflections; // 0x10
	float LateDelay; // 0x14
	float DecayTime; // 0x18
	float Density; // 0x1c
	float Diffusion; // 0x20
	float AirAbsorptionGainHF; // 0x24
	float DecayHFRatio; // 0x28
	float LateGain; // 0x2c
	float Gain; // 0x30
	float WetLevel; // 0x34
	float DryLevel; // 0x38
	bool bBypass; // 0x3c
};

struct FCharacterImpactSounds {
	UAkAudioEvent* AudioEvent; // 0x0
};

struct FSimpleCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FInventoryPositionDataRepHelper {
	UObject* _dataClass; // 0x0
	UInventoryPositionData* _positionData; // 0x8
	UObject* _owner; // 0x10
	int32_t _repKey; // 0x18
};

struct FAnimNode_RigidBody {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	FVector OverrideWorldGravity; // 0x168
	FVector ExternalForce; // 0x174
	FVector ComponentLinearAccScale; // 0x180
	FVector ComponentLinearVelScale; // 0x18c
	FVector ComponentAppliedLinearAccClamp; // 0x198
	FSimSpaceSettings SimSpaceSettings; // 0x1a4
	float CachedBoundsScale; // 0x1e4
	FBoneReference BaseBoneRef; // 0x1e8
	ECollisionChannel OverlapChannel; // 0x1f8
	ESimulationSpace SimulationSpace; // 0x1f9
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1fa
	char bEnableWorldGeometry : 1; // 0x1fc
	char bOverrideWorldGravity : 1; // 0x1fc
	char bTransferBoneVelocities : 1; // 0x1fc
	char bFreezeIncomingPoseOnStart : 1; // 0x1fc
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1fc
	float WorldSpaceMinimumScale; // 0x200
	float EvaluationResetTime; // 0x204
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FMeleeSkillExperienceAwards {
	float Hit; // 0x0
	float Kill; // 0x4
	float ComboHitMultiplier; // 0x8
	float SkillLevelBonus; // 0xc
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FSplineMeshParams {
	FVector StartPos; // 0x0
	FVector StartTangent; // 0xc
	FVector2D StartScale; // 0x18
	float StartRoll; // 0x20
	FVector2D StartOffset; // 0x24
	FVector EndPos; // 0x2c
	FVector2D EndScale; // 0x38
	FVector EndTangent; // 0x40
	float EndRoll; // 0x4c
	FVector2D EndOffset; // 0x50
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FAmmunitionData {
	AAmmunitionItem* AmmunitionItemClass; // 0x0
	float health; // 0x8
	float maxHealth; // 0xc
	float DefaultMaxHealth; // 0x10
	EAmmunitionCartridgeState State; // 0x14
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FAnimNode_LookAt {
	FBoneReference BoneToModify; // 0xc8
	FBoneSocketTarget LookAtTarget; // 0xe0
	FVector LookAtLocation; // 0x140
	FAxis LookAt_Axis; // 0x14c
	bool bUseLookUpAxis; // 0x15c
	EInterpolationBlend InterpolationType; // 0x15d
	FAxis LookUp_Axis; // 0x160
	float LookAtClamp; // 0x170
	float InterpolationTime; // 0x174
	float InterpolationTriggerThreashold; // 0x178
};

struct FHairGroupCardsTextures {
	UTexture2D* DepthTexture; // 0x0
	UTexture2D* CoverageTexture; // 0x8
	UTexture2D* TangentTexture; // 0x10
	UTexture2D* AttributeTexture; // 0x18
	UTexture2D* AuxilaryDataTexture; // 0x20
};

struct FWeaponTypeMontage {
	EWeaponType WeaponType; // 0x0
	UAnimMontage* Montage; // 0x8
	UCurveFloat* SupportedYawAngles; // 0x10
};

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int32_t MessageIndex; // 0x10
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FRichImageRow {
	FSlateBrush Brush; // 0x8
};

struct FAnimalActionMontageData {
	UAnimMontage* SleepMontage; // 0x0
	UAnimMontage* EatMontage; // 0x8
	UAnimMontage* IntimidateMontage; // 0x10
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	int32_t NumSkyLightingBounces; // 0x8
	float IndirectLightingQuality; // 0xc
	float IndirectLightingSmoothness; // 0x10
	FColor EnvironmentColor; // 0x14
	float EnvironmentIntensity; // 0x18
	float EmissiveBoost; // 0x1c
	float DiffuseBoost; // 0x20
	EVolumeLightingMethod VolumeLightingMethod; // 0x24
	char bUseAmbientOcclusion : 1; // 0x25
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x25
	char bVisualizeMaterialDiffuse : 1; // 0x25
	char bVisualizeAmbientOcclusion : 1; // 0x25
	char bCompressLightmaps : 1; // 0x25
	float VolumetricLightmapDetailCellSize; // 0x28
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x2c
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x30
	float VolumeLightSamplePlacementScale; // 0x34
	float DirectIlluminationOcclusionFraction; // 0x38
	float IndirectIlluminationOcclusionFraction; // 0x3c
	float OcclusionExponent; // 0x40
	float FullyOccludedSamplesFraction; // 0x44
	float MaxOcclusionDistance; // 0x48
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FAnimNode_AnimDynamics {
	float LinearDampingOverride; // 0xc8
	float AngularDampingOverride; // 0xcc
	FBoneReference RelativeSpaceBone; // 0x130
	FBoneReference BoundBone; // 0x140
	FBoneReference ChainEnd; // 0x150
	FVector BoxExtents; // 0x160
	FVector LocalJointOffset; // 0x16c
	float GravityScale; // 0x178
	FVector GravityOverride; // 0x17c
	float LinearSpringConstant; // 0x188
	float AngularSpringConstant; // 0x18c
	float WindScale; // 0x190
	FVector ComponentLinearAccScale; // 0x194
	FVector ComponentLinearVelScale; // 0x1a0
	FVector ComponentAppliedLinearAccClamp; // 0x1ac
	float AngularBiasOverride; // 0x1b8
	int32_t NumSolverIterationsPreUpdate; // 0x1bc
	int32_t NumSolverIterationsPostUpdate; // 0x1c0
	FAnimPhysConstraintSetup ConstraintSetup; // 0x1c4
	TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x210
	float SphereCollisionRadius; // 0x220
	FVector ExternalForce; // 0x224
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x230
	AnimPhysCollisionType CollisionType; // 0x240
	AnimPhysSimSpaceType SimulationSpace; // 0x241
	char bUseSphericalLimits : 1; // 0x244
	char bUsePlanarLimit : 1; // 0x244
	char bDoUpdate : 1; // 0x244
	char bDoEval : 1; // 0x244
	char bOverrideLinearDamping : 1; // 0x244
	char bOverrideAngularBias : 1; // 0x244
	char bOverrideAngularDamping : 1; // 0x244
	char bEnableWind : 1; // 0x244
	char bUseGravityOverride : 1; // 0x245
	char bLinearSpring : 1; // 0x245
	char bAngularSpring : 1; // 0x245
	char bChain : 1; // 0x245
	FRotationRetargetingInfo RetargetingSettings; // 0x250
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> names; // 0x0
};

struct FLiveLinkRoleProjectSetting {
	ULiveLinkRole* Role; // 0x0
	ULiveLinkSubjectSettings* SettingClass; // 0x8
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x10
	TArray<ULiveLinkFramePreProcessor*> FramePreProcessors; // 0x18
};

struct FSedentaryNPCMarker {
	ASedentaryNPC* SedentaryNPCClass; // 0x0
	FTransform SpawnTransform; // 0x10
};

struct FClothPhysicalMeshData {
	TArray<FVector> Vertices; // 0x0
	TArray<FVector> Normals; // 0x10
	TArray<uint32_t> Indices; // 0x20
	TMap<uint32_t, FPointWeightMap> WeightMaps; // 0x30
	TArray<float> InverseMasses; // 0x80
	TArray<FClothVertBoneData> BoneData; // 0x90
	int32_t MaxBoneWeights; // 0xa0
	int32_t NumFixedVerts; // 0xa4
	TArray<uint32_t> SelfCollisionIndices; // 0xa8
	TArray<float> MaxDistances; // 0xb8
	TArray<float> BackstopDistances; // 0xc8
	TArray<float> BackstopRadiuses; // 0xd8
	TArray<float> AnimDriveMultipliers; // 0xe8
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FClothesMeshPair {
	UStaticMesh* MaleStaticMesh; // 0x0
	USkeletalMesh* MaleSkeletalMesh; // 0x8
	TArray<UMaterialInstance*> MaleMaterials; // 0x10
	UStaticMesh* FemaleStaticMesh; // 0x20
	USkeletalMesh* FemaleSkeletalMesh; // 0x28
	TArray<UMaterialInstance*> FemaleMaterials; // 0x30
};

struct FAnimalPaceSettings {
	float RunSpeed; // 0x0
	float TrotSpeed; // 0x4
	float WalkSpeed; // 0x8
	float SneakSpeed; // 0xc
};

struct FTraderTradingData {
	TMap<UObject*, FTradeableClassTradingData> TradeableClassData; // 0x0
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FPrisonerMountReplication {
	UObject* MountedSlot; // 0x0
	EPrisonerMountFlags _mountFlags; // 0x8
	char _version; // 0x9
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FMovieSceneSequencePlaybackSettings {
	char bAutoPlay : 1; // 0x0
	FMovieSceneSequenceLoopCount LoopCount; // 0x4
	float PlayRate; // 0x8
	float StartTime; // 0xc
	char bRandomStartTime : 1; // 0x10
	char bRestoreState : 1; // 0x10
	char bDisableMovementInput : 1; // 0x10
	char bDisableLookAtInput : 1; // 0x10
	char bHidePlayer : 1; // 0x10
	char bHideHud : 1; // 0x10
	char bDisableCameraCuts : 1; // 0x10
	char bPauseAtEnd : 1; // 0x10
};

struct FAttachmentSocket {
	TArray<FAttachmentSocketDataItem> Items; // 0x0
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
	ERichCurveInterpMode InterpMode; // 0xc
	ERichCurveTangentMode TangentMode; // 0xd
	bool bRecordTransforms; // 0xf
	bool bRecordCurves; // 0x10
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FNavDataConfig {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FEngineServiceAuthDeny {
	FString userName; // 0x0
	FString UserToDeny; // 0x10
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FPrisonerFallingPoseBlend {
	EPrisonerFallingPose _previousPose; // 0x0
	EPrisonerFallingPose _upcomingPose; // 0x1
	EPrisonerFallingPose _desiredPose; // 0x2
	float _blendWeight; // 0x8
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FCarouselStyle {
	FButtonStyle LeftArrowIcon; // 0x0
	FButtonStyle RightArrowIcon; // 0x278
	FCarouselTextStyle ValueText; // 0x4f0
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FMetabolismDigestionDurationData {
	float DurationFor100g; // 0x0
	FFloatRange DurationLimits; // 0x4
};

struct FHairShadowSettings {
	float HairShadowDensity; // 0x0
	float HairRaytracingRadiusScale; // 0x4
	bool bUseHairRaytracingGeometry; // 0x8
	bool bVoxelize; // 0x9
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FMovieScenePrimitiveMaterialTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
};

struct FAnimNode_LiveLinkPose {
	FPoseLink InputPose; // 0x10
	FLiveLinkSubjectName LiveLinkSubjectName; // 0x20
	ULiveLinkRetargetAsset* RetargetAsset; // 0x28
	ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x30
};

struct FPrisonerBodySimulationData_BodyHeatGroupClothesLayerFactors {
	TArray<float> Factors; // 0x0
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FLiveLinkSubSectionData {
	TArray<FLiveLinkPropertyData> Properties; // 0x0
};

struct FPrisonerMovementSettings_Ground_Standing_Jogging {
	FPrisonerGroundMovementParameters Default; // 0x0
	FPrisonerGroundMovementParameters MeleeCombat; // 0xc
	FPrisonerGroundMovementParameters WeaponAiming; // 0x18
};

struct FBaseElementDamageZone {
	FVector BoundsMin; // 0x0
	FVector BoundsMax; // 0xc
	float MinDamagePerSecond; // 0x18
	float MaxDamagePerSecond; // 0x1c
	float MinSpeedForDamage; // 0x20
	float MaxSpeedForDamage; // 0x24
};

struct FSynth2DSliderStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FWaterBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FExpandableAreaStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FKSphereElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	FActorComponentDuplicatedObjectData UniqueTransientPackage; // 0x28
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x38
	TArray<UObject*> ReferencedObjects; // 0x48
	TArray<FName> ReferencedNames; // 0x58
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FBaseBuildingSizeVariation {
	UBaseBuildingComponent* Component; // 0x0
};

struct FMissionReward {
	TArray<AItem*> RewardItems; // 0x0
	float RewardFamePoints; // 0x10
	bool RewardReceived; // 0x14
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FSafeString {
	FString Internal; // 0x0
	FString Base; // 0x10
	FString Shift; // 0x20
	char Flag; // 0x30
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FAnimNode_MultiWayBlend {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FPrisonerBodySimulationData_ConsumableDigestionHandlersForValueRange {
	FFloatRange ValueRange; // 0x0
	bool IsConstrainedByConsumptionMethod; // 0x10
	EGameResourceConsumptionMethod ConsumptionMethodConstraint; // 0x11
	TArray<UConsumableDigestionHandler*> DigestionHandlers; // 0x18
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FNiagaraFunctionSignature {
	FName Name; // 0x0
	TArray<FNiagaraVariable> Inputs; // 0x8
	TArray<FNiagaraVariable> Outputs; // 0x18
	FName OwnerName; // 0x28
	char bRequiresContext : 1; // 0x30
	char bRequiresExecPin : 1; // 0x30
	char bMemberFunction : 1; // 0x30
	char bExperimental : 1; // 0x30
	char bSupportsCPU : 1; // 0x30
	char bSupportsGPU : 1; // 0x30
	char bWriteFunction : 1; // 0x30
	char bSoftDeprecatedFunction : 1; // 0x30
	int32_t ModuleUsageBitmask; // 0x34
	int32_t ContextStageMinIndex; // 0x38
	int32_t ContextStageMaxIndex; // 0x3c
	TMap<FName, FName> FunctionSpecifiers; // 0x40
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FNiagaraSpawnInfo {
	int32_t count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FMeshInstancesRestoreOptions {
	float RestoreInterval; // 0x0
};

struct FDestructibleParametersFlag {
	char bAccumulateDamage : 1; // 0x0
	char bAssetDefinedSupport : 1; // 0x0
	char bWorldSupport : 1; // 0x0
	char bDebrisTimeout : 1; // 0x0
	char bDebrisMaxSeparation : 1; // 0x0
	char bCrumbleSmallestChunks : 1; // 0x0
	char bAccurateRaycasts : 1; // 0x0
	char bUseValidBounds : 1; // 0x0
	char bFormExtendedStructures : 1; // 0x1
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FItemSpawnerData {
	TArray<TSoftClassPtr<UObject>> ItemClasses; // 0x0
	FGameplayTagContainer ItemSpawnTypes; // 0x10
	bool AlwaysSpawn; // 0x30
	float Probability; // 0x34
	bool UseItemZone; // 0x38
	bool UseItemRarity; // 0x39
	bool UseItemSpawnGroup; // 0x3a
	float InitialDamage; // 0x3c
	float RandomizeDamage; // 0x40
	float InitialUsage; // 0x44
	float RandomizeUsage; // 0x48
	float InitialDirtiness; // 0x4c
	float RandomizeDirtiness; // 0x50
	int32_t MinAmmoCount; // 0x54
	int32_t MaxAmmoCount; // 0x58
	int32_t MinCashAmount; // 0x5c
	int32_t MaxCashAmount; // 0x60
	bool UseCollisionTraceToAdjustSpawnLocation; // 0x64
	bool UseCollisionTraceToAdjustSpawnRotation; // 0x65
	UPostItemsSpawnedActions* PostItemsSpawnedActions; // 0x68
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FRootMotionSource_MoveToForce {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FPrisonerClimbAnimationInfo {
	float MinEdgeHeight; // 0x0
	float MaxEdgeHeight; // 0x4
	float VaultDistance; // 0x8
	float MaxVaultLandHeightError; // 0xc
	FVector AnchorOffset; // 0x10
	UAnimSequenceBase* AnchoringAnimation; // 0x20
	float AnchoringAnimationTime; // 0x28
	float AnchoringDuration; // 0x2c
	UAnimMontage* ClimbingMontage; // 0x30
	float StaminaDrain; // 0x38
	bool RequiresEmptyLHand; // 0x3c
	bool RequiresEmptyRHand; // 0x3d
};

struct FInAppPurchaseProductInfo2 {
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DisplayName; // 0x20
	FString DisplayDescription; // 0x30
	FString DisplayPrice; // 0x40
	float RawPrice; // 0x50
	FString CurrencyCode; // 0x58
	FString CurrencySymbol; // 0x68
	FString DecimalSeparator; // 0x78
	FString GroupingSeparator; // 0x88
	FString ReceiptData; // 0x98
	TMap<FString, FString> DynamicFields; // 0xa8
};

struct FCharacterArmsImpactSoundsData {
	TArray<FCharacterArmsImpactSoundData> SoundsData; // 0x0
	FCharacterImpactSounds FallbackSounds; // 0x10
};

struct FMultistageRandomRoll {
	FFloatInterval _valueRange; // 0x0
	bool _shouldWrapValue; // 0x8
	TArray<FRandomRollStage> _baseValueRollStages; // 0x10
	bool _isVarianceEnabled; // 0x20
	FFloatInterval _varianceRollInterval; // 0x24
	FFloatInterval _varianceTargetInterval; // 0x2c
	float _varianceTargetInterpSpeed; // 0x34
	int32_t _baseValueStageToSetWhenForcingBaseValue; // 0x64
};

struct FRandomRollStage {
	FFloatInterval BaseValueRollInterval; // 0x0
	FRuntimeFloatCurve BaseValueTargetCurve; // 0x8
	float BaseValueTargetInterpSpeed; // 0x90
};

struct FMetabolismAPBFontStyle {
	UFont* Font; // 0x0
	int32_t FontSize; // 0x8
	FMargin TitlePadding; // 0xc
	FMargin ValuePadding; // 0x1c
	EVerticalAlignment TitleVerticalAlignment; // 0x2c
	EHorizontalAlignment TitleHorizontalAlignment; // 0x2d
	EVerticalAlignment ValueVerticalAlignment; // 0x2e
	EHorizontalAlignment ValueHorizontalAlignment; // 0x2f
};

struct FTradeOutpostProsperityLevelInfo {
	FString ProsperityLevelName; // 0x0
	float ProsperityLevelThreshold; // 0x10
	float FundsChangeRatePerHour; // 0x14
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FLiveLinkBasicBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FRoomDifficultyConfiguration {
	TArray<AItem*> Locks; // 0x0
	TArray<AItem*> Zappers; // 0x10
	bool IsC4Present; // 0x20
	TArray<FSpawnerConfiguration> PossibleSpawners; // 0x28
};

struct FZombieTurnMontageDescription {
	UAnimMontage* MontageL90; // 0x0
	UAnimMontage* MontageL180; // 0x8
	UAnimMontage* MontageR90; // 0x10
	UAnimMontage* MontageR180; // 0x18
	FName TurnAngleCurveName; // 0x20
};

struct FPhysicsCapsuleData {
	float Radius; // 0x0
	float Length; // 0x4
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FAIDataProviderBoolValue {
	bool DefaultValue; // 0x30
};

struct FInventoryContainer2DRepData {
	TArray<FInventoryItemPositionPair> ItemsData; // 0x0
	UObject* Parent; // 0x10
	int32_t SizeX; // 0x18
	int32_t SizeY; // 0x1c
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FAnimNode_PoseDriver {
	FPoseLink SourcePose; // 0x80
	TArray<FBoneReference> SourceBones; // 0x90
	TArray<FBoneReference> OnlyDriveBones; // 0xa0
	TArray<FPoseDriverTarget> PoseTargets; // 0xb0
	FBoneReference EvalSpaceBone; // 0xf0
	FRBFParams RBFParams; // 0x100
	EPoseDriverSource DriveSource; // 0x12c
	EPoseDriverOutput DriveOutput; // 0x12d
	char bOnlyDriveSelectedBones : 1; // 0x12e
	int32_t LODThreshold; // 0x130
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FGlobalAnimalSpawnInfo {
	int32_t MaxSpawnInstances; // 0x0
	float RespawnPeriod; // 0x4
	int32_t NumberOfExistingWaypointGroups; // 0x8
	int32_t WorldMaxSpawnInstances; // 0xc
	int32_t CurrentlyAssigned; // 0x10
	int32_t CurrentlySpawned; // 0x14
	int32_t CurrentlyDead; // 0x18
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FDrivingSkillExperienceAwards {
	float StartEngine; // 0x0
	float PointsPerDrivenDistanceInKm; // 0x4
};

struct FHitReactDirectionData {
	TArray<FHitReactBodyPartDataItem> FrontHit; // 0x0
	TArray<FHitReactBodyPartDataItem> LeftHit; // 0x10
	TArray<FHitReactBodyPartDataItem> BackHit; // 0x20
	TArray<FHitReactBodyPartDataItem> RightHit; // 0x30
	float RegainControlDurationMultiplier; // 0x40
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FTouchInputControl {
	UTexture2D* Image1; // 0x0
	UTexture2D* Image2; // 0x8
	FVector2D Center; // 0x10
	FVector2D VisualSize; // 0x18
	FVector2D ThumbSize; // 0x20
	FVector2D InteractionSize; // 0x28
	FVector2D InputScale; // 0x30
	FKey MainInputKey; // 0x38
	FKey AltInputKey; // 0x50
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FFishingStats {
	int32_t FishCaught; // 0x0
	int32_t FishKept; // 0x4
	int32_t FishReleased; // 0x8
	int32_t LinesBroken; // 0xc
	float HeaviestFishCaught; // 0x10
	float LongestFishCaught; // 0x14
	TArray<FCaughtFishData> FishSpeciesCaught; // 0x18
};

struct FDamageMultiplierTracker {
	float _baseDamage; // 0x0
	float _finalDamage; // 0x4
	TArray<FString> _appliedMultiplierNames; // 0x8
	TArray<float> _appliedMultiplierValues; // 0x18
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FAnimalStationaryRotationRateSettings {
	FRotator RunRotationRate; // 0x0
	FRotator TrotRotationRate; // 0xc
	FRotator WalkRotationRate; // 0x18
	FRotator SneakRotationRate; // 0x24
	FRotator StandRotationRate; // 0x30
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FZombieAttackDescription {
	UAnimMontage* Montage; // 0x0
	FFloatInterval PitchRange; // 0x8
	float MinDistance; // 0x10
	float MaxDistance; // 0x14
	float RegainControlMultiplier; // 0x18
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FConZGerstnerWavesParameters {
	float Angle; // 0x0
	float Height; // 0x4
	float Length; // 0x8
	float Steepness; // 0xc
};

struct FScopeZoomLevelSettings {
	float Magnification; // 0x0
	float DisplayedMagnification; // 0x4
	FPostProcessSettings PostProcessSettings; // 0x10
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FWeaponCheckAmmoData {
	UObject* ActionSequenceClass; // 0x0
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FPrisonerFallingPosePair {
	EPrisonerFallingPose poseA; // 0x0
	EPrisonerFallingPose poseB; // 0x1
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FChoppingIngredient {
	TSoftClassPtr<UObject> Item; // 0x0
	int32_t MinQuantity; // 0x28
	int32_t MaxQuantity; // 0x2c
	bool IsQuantityAffectedByTool; // 0x30
	float InitialDamage; // 0x34
	float RandomizeDamage; // 0x38
	bool OverrideAutoDestructTime; // 0x3c
	float AutoDestructTime; // 0x40
	bool IsHealthAffectedByChoppedItem; // 0x44
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters parameters; // 0x8
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FConZSquadEmblem {
	FConZSquadEmblemElement Background; // 0x0
	FConZSquadEmblemElement Symbol; // 0x4
};

struct FPredictProjectilePathParams {
	FVector StartLocation; // 0x0
	FVector LaunchVelocity; // 0xc
	bool bTraceWithCollision; // 0x18
	float ProjectileRadius; // 0x1c
	float MaxSimTime; // 0x20
	bool bTraceWithChannel; // 0x24
	ECollisionChannel TraceChannel; // 0x25
	TArray<EObjectTypeQuery> ObjectTypes; // 0x28
	TArray<AActor*> ActorsToIgnore; // 0x38
	float SimFrequency; // 0x48
	float OverrideGravityZ; // 0x4c
	EDrawDebugTrace DrawDebugType; // 0x50
	float DrawDebugTime; // 0x54
	bool bTraceComplex; // 0x58
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FMeleeHitDetectionMarker {
	float Time; // 0x0
	FTransform Transform; // 0x10
	FTransform RootMotion; // 0x40
	float damageMultiplier; // 0x70
	float SelectionWeight; // 0x74
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FStaticMeshOptimizationSettings {
	EOptimizationType ReductionMethod; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float MaxDeviationPercentage; // 0x8
	float WeldingThreshold; // 0xc
	bool bRecalcNormals; // 0x10
	float NormalsThreshold; // 0x14
	char SilhouetteImportance; // 0x18
	char TextureImportance; // 0x19
	char ShadingImportance; // 0x1a
};

struct FAnimNode_Root {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FMovieSceneLiveLinkSectionTemplate {
	FLiveLinkSubjectPreset SubjectPreset; // 0x38
	TArray<bool> ChannelMask; // 0x70
	TArray<FLiveLinkSubSectionData> SubSectionsData; // 0x80
};

struct FQuickAccessData {
	AItem* Item; // 0x0
	UObject* ItemClass; // 0x8
	bool IsThrowingMode; // 0x10
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FNameCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FTableRowStyle {
	FSlateBrush SelectorFocusedBrush; // 0x8
	FSlateBrush ActiveHoveredBrush; // 0x90
	FSlateBrush ActiveBrush; // 0x118
	FSlateBrush InactiveHoveredBrush; // 0x1a0
	FSlateBrush InactiveBrush; // 0x228
	FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2b0
	FSlateBrush EvenRowBackgroundBrush; // 0x338
	FSlateBrush OddRowBackgroundHoveredBrush; // 0x3c0
	FSlateBrush OddRowBackgroundBrush; // 0x448
	FSlateColor TextColor; // 0x4d0
	FSlateColor SelectedTextColor; // 0x4f8
	FSlateBrush DropIndicator_Above; // 0x520
	FSlateBrush DropIndicator_Onto; // 0x5a8
	FSlateBrush DropIndicator_Below; // 0x630
	FSlateBrush ActiveHighlightedBrush; // 0x6b8
	FSlateBrush InactiveHighlightedBrush; // 0x740
};

struct FAkSegmentInfo {
	int32_t CurrentPosition; // 0x0
	int32_t PreEntryDuration; // 0x4
	int32_t ActiveDuration; // 0x8
	int32_t PostExitDuration; // 0xc
	int32_t RemainingLookAheadTime; // 0x10
	float BeatDuration; // 0x14
	float BarDuration; // 0x18
	float GridDuration; // 0x1c
	float GridOffset; // 0x20
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FProximityReplenishedResourceDescription {
	float ReplenishChance; // 0x0
	FFloatInterval ReplenishAmount; // 0x4
	float ReplenishTimeout; // 0xc
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FMovieSceneMarginSectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FNiagaraVariableWithOffset {
	int32_t Offset; // 0xc
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FEnvironmentDescription {
	EEnvironmentClass EnvironmentClass; // 0x0
	bool IsUnderground; // 0x1
	bool ShouldBlockWeatherEffects; // 0x2
};

struct FVehicleSpawnParameters {
	FGameplayTag SpawnGroup; // 0x0
	FVector MinSpawnLocationOffset; // 0x8
	FVector MaxSpawnLocationOffset; // 0x14
	FVector AdminSpawnLocationOffset; // 0x20
};

struct FBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FPrisonerAppearanceMeshSet {
	USkeletalMesh* HairMesh; // 0x0
	USkeletalMesh* FacialHairMesh; // 0x8
	USkeletalMesh* HeadMesh; // 0x10
	USkeletalMesh* TorsoMesh; // 0x18
	USkeletalMesh* ArmsMesh; // 0x20
	USkeletalMesh* HandsMesh; // 0x28
	USkeletalMesh* LegsMesh; // 0x30
	USkeletalMesh* FeetMesh; // 0x38
	USkeletalMesh* PenisMesh; // 0x40
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
};

struct FActorLayer {
	FName Name; // 0x0
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FRealCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FWindowMarker {
	bool IsVaultable; // 0x0
	bool IsFortifiable; // 0x1
	UWindowFortificationsType* WindowFortificationsType; // 0x8
	TArray<int32_t> AdditionalMarkerIndicesToModify; // 0x10
	bool DidIFailToCorrectlyPlaceWindowMarkers; // 0x20
	FVector Vertex1; // 0x24
	FVector Vertex2; // 0x30
	float FortificationOffset; // 0x3c
	float CollisionBoxVertBias; // 0x40
	float CollisionBoxHorzBias; // 0x44
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FTextSizingParameters {
	float DrawX; // 0x0
	float DrawY; // 0x4
	float DrawXL; // 0x8
	float DrawYL; // 0xc
	FVector2D Scaling; // 0x10
	UFont* DrawFont; // 0x18
	FVector2D SpacingAdjust; // 0x20
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FDrivingSkillParametersPerSkillLevel {
	float EngineStartDuration; // 0x0
	float EngineStartFailureChance; // 0x4
	float EngineStartViaMotionDuration; // 0x8
	float EngineStartViaMotionFailureChance; // 0xc
	float EngineReadyDelay; // 0x10
	float EngineFailedToStartDelay; // 0x14
	float EngineFailedToStartNoFuelDelay; // 0x18
	float EngineFailedToStartNoBatteryDelay; // 0x1c
	float EngineStalledDelay; // 0x20
	float MaxSpeedModifier; // 0x24
	float ThrottleModifier; // 0x28
	float BrakeModifier; // 0x2c
	float GearboxSwitchTime; // 0x30
	float GearboxLatency; // 0x34
	float SteerRaiseRate; // 0x38
	float SteerFallRate; // 0x3c
	FDrivingSkillEngineStallingParameters EngineStallingByAccelerationParameters; // 0x40
	FDrivingSkillEngineStallingParameters EngineStallingByUpShiftParameters; // 0x80
	FDrivingSkillEngineStallingParameters EngineStallingWhenStartingViaMotion; // 0xc0
};

struct FWeaponUnloadAmmoData {
	UObject* ActionSequenceClass; // 0x0
	int32_t AmmoCount; // 0x8
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FBasicPrisonerBodySymptomNotificationParameters {
	FFloatRange SeverityRange; // 0x0
	UNotificationDescription* Notification; // 0x10
	int32_t MaxNumTriggers; // 0x18
	FFloatInterval TriggerInterval; // 0x1c
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	FVector LayerLeft; // 0x3c
	FVector LayerRight; // 0x48
	FVector LayerFalloffLeft; // 0x54
	FVector LayerFalloffRight; // 0x60
	float StartEndFalloff; // 0x6c
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FAnimNode_TwoWayBlend {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	char bAlphaBoolEnabled : 1; // 0x31
	char bResetChildOnActivation : 1; // 0x31
	float Alpha; // 0x34
	FInputScaleBias AlphaScaleBias; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
};

struct FLandmassTerrainCarvingSettings {
	EBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FLandmassFalloffSettings FalloffSettings; // 0x4
	FLandmassBrushEffectsList Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FMagicLeapRaycastQueryParams {
	FVector position; // 0x0
	FVector Direction; // 0xc
	FVector UpVector; // 0x18
	int32_t Width; // 0x24
	int32_t Height; // 0x28
	float HorizontalFovDegrees; // 0x2c
	bool CollideWithUnobserved; // 0x30
	int32_t UserData; // 0x34
};

struct FPeriodicallyReplenishedResourceDescription {
	float InitialAmount; // 0x0
	float MaxAmount; // 0x4
	float ReplenishInterval; // 0x8
	float ReplenishAmount; // 0xc
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FRenderableTriangle {
	UMaterialInterface* Material; // 0x0
	FRenderableTriangleVertex Vertex0; // 0x8
	FRenderableTriangleVertex Vertex1; // 0x2c
	FRenderableTriangleVertex Vertex2; // 0x50
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FRestrictedGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FPrecomputedLightInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FAnimNode_HandIKRetargeting {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FTurnMontages {
	UAnimMontage* TurnInPlaceLeft; // 0x0
	UAnimMontage* TurnInPlaceRight; // 0x8
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FPlane {
	float W; // 0xc
};

struct FAnimNode_LinkedInputPose {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FZombieCombatStanceVariation2 {
	FZombieCombatStanceAnimations Animations; // 0x0
	float RunAcceleration; // 0x18
	float RunDeceleration; // 0x1c
	float RunSpeed; // 0x20
	float RunSpeedInAnimation; // 0x24
	float RunTurnRate; // 0x28
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FConstraintInstance {
	FName JointName; // 0x18
	FName ConstraintBone1; // 0x20
	FName ConstraintBone2; // 0x28
	FVector Pos1; // 0x30
	FVector PriAxis1; // 0x3c
	FVector SecAxis1; // 0x48
	FVector Pos2; // 0x54
	FVector PriAxis2; // 0x60
	FVector SecAxis2; // 0x6c
	FRotator AngularRotationOffset; // 0x78
	char bScaleLinearLimits : 1; // 0x84
	FConstraintProfileProperties ProfileInstance; // 0x8c
};

struct FNiagaraEmitterCompiledData {
	TArray<FName> SpawnAttributes; // 0x0
	FNiagaraVariable EmitterSpawnIntervalVar; // 0x10
	FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x30
	FNiagaraVariable EmitterSpawnGroupVar; // 0x50
	FNiagaraVariable EmitterAgeVar; // 0x70
	FNiagaraVariable EmitterRandomSeedVar; // 0x90
	FNiagaraVariable EmitterInstanceSeedVar; // 0xb0
	FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xd0
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0xf0
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> names; // 0x10
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FSkeletalMeshClothBuildParams {
	TWeakObjectPtr<UClothingAssetBase> TargetAsset; // 0x0
	int32_t TargetLod; // 0x8
	bool bRemapParameters; // 0xc
	FString AssetName; // 0x10
	int32_t LODIndex; // 0x20
	int32_t SourceSection; // 0x24
	bool bRemoveFromMesh; // 0x28
	TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30
};

struct FLiveLinkSkeletonStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FMovieSceneColorSectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FClothConfig_Legacy {
	EClothingWindMethod_Legacy WindMethod; // 0x0
	FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x4
	FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x14
	FClothConstraintSetup_Legacy BendConstraintConfig; // 0x24
	FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x34
	float SelfCollisionRadius; // 0x44
	float SelfCollisionStiffness; // 0x48
	float SelfCollisionCullScale; // 0x4c
	FVector Damping; // 0x50
	float Friction; // 0x5c
	float WindDragCoefficient; // 0x60
	float WindLiftCoefficient; // 0x64
	FVector LinearDrag; // 0x68
	FVector AngularDrag; // 0x74
	FVector LinearInertiaScale; // 0x80
	FVector AngularInertiaScale; // 0x8c
	FVector CentrifugalInertiaScale; // 0x98
	float SolverFrequency; // 0xa4
	float StiffnessFrequency; // 0xa8
	float GravityScale; // 0xac
	FVector GravityOverride; // 0xb0
	bool bUseGravityOverride; // 0xbc
	float TetherStiffness; // 0xc0
	float TetherLimit; // 0xc4
	float CollisionThickness; // 0xc8
	float AnimDriveSpringStiffness; // 0xcc
	float AnimDriveDamperStiffness; // 0xd0
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FPrisonerFirstPersonSubviewBlendOverride {
	EPrisonerFirstPersonSubview Source; // 0x0
	EPrisonerFirstPersonSubview Target; // 0x1
	float Duration; // 0x4
};

struct FMagicLeapPlaneResult {
	FVector PlanePosition; // 0x0
	FRotator PlaneOrientation; // 0xc
	FRotator ContentOrientation; // 0x18
	FVector2D PlaneDimensions; // 0x24
	TArray<EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30
	FGuid ID; // 0x40
	FGuid InnerID; // 0x50
};

struct FMovieScene3DLocationKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FActiveMovingThroughFoliageSounds {
	UAkAudioEvent* StartAudioEvent; // 0x8
	UAkAudioEvent* StopAudioEvent; // 0x10
};

struct FHitResult {
	char bBlockingHit : 1; // 0x0
	char bStartPenetrating : 1; // 0x0
	int32_t FaceIndex; // 0x4
	float Time; // 0x8
	float Distance; // 0xc
	FVector_NetQuantize Location; // 0x10
	FVector_NetQuantize ImpactPoint; // 0x1c
	FVector_NetQuantizeNormal Normal; // 0x28
	FVector_NetQuantizeNormal ImpactNormal; // 0x34
	FVector_NetQuantize TraceStart; // 0x40
	FVector_NetQuantize TraceEnd; // 0x4c
	float PenetrationDepth; // 0x58
	int32_t Item; // 0x5c
	char ElementIndex; // 0x60
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x64
	TWeakObjectPtr<AActor> Actor; // 0x6c
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x74
	FName BoneName; // 0x7c
	FName MyBoneName; // 0x84
};

struct FVDParticleInfo {
	char IsFree : 1; // 0x0
	char IsRigidBodyCollisionEnabled : 1; // 0x0
	char IsParticleCollisionEnabled : 1; // 0x0
	float Radius; // 0x4
	FVector Location; // 0x8
	float Mass; // 0x14
	float DragCoefficient; // 0x18
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FTabButtonStyle {
	FVector2D Size; // 0x0
	EHorizontalAlignment HorizontalAlignment; // 0x8
	EVerticalAlignment VerticalAlignment; // 0x9
	FButtonStyle ButtonStyle; // 0x10
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FPhysicalAnimationData {
	FName BodyName; // 0x0
	char bIsLocalSimulation : 1; // 0x8
	float OrientationStrength; // 0xc
	float AngularVelocityStrength; // 0x10
	float PositionStrength; // 0x14
	float VelocityStrength; // 0x18
	float MaxLinearForce; // 0x1c
	float MaxAngularForce; // 0x20
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	bool EnableSurface; // 0x8
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FMeleeAction {
	EMeleeActionType ActionType; // 0x0
	TWeakObjectPtr<UAnimMontage> Montage; // 0x4
	float StartDelay; // 0xc
	float PlayRate; // 0x10
	float BlockDuration; // 0x14
	float OrientToTargetSpeedFactor; // 0x18
	float RegainControlDurationModifier; // 0x1c
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FDcxVehicleGearboxData {
	EDcxVehicleGearbox Type; // 0x0
	float FinalRatio; // 0x4
	float SwitchTime; // 0x8
	TArray<FDcxVehicleGearData> ForwardGears; // 0x10
	float ReverseGearRatio; // 0x20
	float Latency; // 0x24
	float NeutralGearUpRatio; // 0x28
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FCurveEdEntry {
	UObject* CurveObject; // 0x0
	FColor CurveColor; // 0x8
	FString CurveName; // 0x10
	int32_t bHideCurve; // 0x20
	int32_t bColorCurve; // 0x24
	int32_t bFloatingPointColorCurve; // 0x28
	int32_t bClamp; // 0x2c
	float ClampLow; // 0x30
	float ClampHigh; // 0x34
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FPrisonerMaxMovementPaceVsSeverityKey {
	FFloatRange SeverityRange; // 0x0
	EPrisonerMovementPace MaxMovementPace; // 0x10
};

struct FStartLocationDescription {
	char TypeFlags; // 0x0
	FTransform Transform; // 0x10
	bool IsDisabled; // 0x40
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FNavAgentSelector {
	char bSupportsAgent0 : 1; // 0x0
	char bSupportsAgent1 : 1; // 0x0
	char bSupportsAgent2 : 1; // 0x0
	char bSupportsAgent3 : 1; // 0x0
	char bSupportsAgent4 : 1; // 0x0
	char bSupportsAgent5 : 1; // 0x0
	char bSupportsAgent6 : 1; // 0x0
	char bSupportsAgent7 : 1; // 0x0
	char bSupportsAgent8 : 1; // 0x1
	char bSupportsAgent9 : 1; // 0x1
	char bSupportsAgent10 : 1; // 0x1
	char bSupportsAgent11 : 1; // 0x1
	char bSupportsAgent12 : 1; // 0x1
	char bSupportsAgent13 : 1; // 0x1
	char bSupportsAgent14 : 1; // 0x1
	char bSupportsAgent15 : 1; // 0x1
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FPolyglotTextData {
	ELocalizedTextSourceCategory Category; // 0x0
	FString NativeCulture; // 0x8
	FString Namespace; // 0x18
	FString Key; // 0x28
	FString NativeString; // 0x38
	TMap<FString, FString> LocalizedStrings; // 0x48
	bool bIsMinimalPatch; // 0x98
	FText CachedText; // 0xa0
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FWaterBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FRenderableTriangleVertex {
	FVector position; // 0x0
	FVector2D UV; // 0xc
	FVector Normal; // 0x14
	FColor Color; // 0x20
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FMovieSceneIntegerChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FBranchingPoint {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FMetabolismRadialProgressBarFontSettings {
	int32_t FontSize; // 0x0
	FMargin FontPadding; // 0x4
};

struct FPrisonerMovementSettings_Ground_Crouching {
	FPrisonerMovementSettings_Ground_Crouching_Walking Walking; // 0x0
	FPrisonerMovementSettings_Ground_Crouching_Walking WalkingFaster; // 0x24
	FPrisonerMovementSettings_Ground_Crouching_Walking WalkLimping; // 0x48
};

struct FDcxVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x0
	TArray<FName> Tags; // 0x30
	bool bContinuouslyRespawn; // 0x40
	bool bEvaluateTracksWhenNotSpawned; // 0x41
	FGuid Guid; // 0x44
	FString Name; // 0x58
	UObject* ObjectTemplate; // 0x68
	TArray<FGuid> ChildPossessables; // 0x70
	ESpawnOwnership Ownership; // 0x80
	FName LevelName; // 0x84
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FMagicLeapPlanesQuery {
	TArray<EMagicLeapPlaneQueryFlags> Flags; // 0x0
	UBoxComponent* SearchVolume; // 0x10
	int32_t MaxResults; // 0x18
	float MinHoleLength; // 0x1c
	float MinPlaneArea; // 0x20
	FVector SearchVolumePosition; // 0x24
	FQuat SearchVolumeOrientation; // 0x30
	FVector SearchVolumeExtents; // 0x40
	float SimilarityThreshold; // 0x4c
	bool bSearchVolumeTrackingSpace; // 0x50
	bool bResultTrackingSpace; // 0x51
};

struct FMapHUDPrisonerObject {
	FVector2D _prisonerPositionTextureSize; // 0x18
	UTexture* _myPrisonerPositionTexture; // 0x20
	UTexture* _prisonerPingAnimationTexture; // 0x28
	float _prisonerPingSizeMultiplier; // 0x30
};

struct FNiagaraSystemScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bCullByDistance : 1; // 0x30
	char bCullMaxInstanceCount : 1; // 0x30
	char bCullPerSystemMaxInstanceCount : 1; // 0x30
	char bCullByMaxTimeWithoutRender : 1; // 0x30
	float MaxDistance; // 0x34
	int32_t MaxInstances; // 0x38
	int32_t MaxSystemInstances; // 0x3c
	float MaxTimeWithoutRender; // 0x40
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FHairCardsGeometrySettings {
	EHairCardsGenerationType GenerationType; // 0x0
	int32_t CardsCount; // 0x4
	EHairCardsClusterType ClusterType; // 0x8
	float MinSegmentLength; // 0xc
	float AngularThreshold; // 0x10
	float MinCardsLength; // 0x14
	float MaxCardsLength; // 0x18
};

struct FMeshMaterialPair {
	USkeletalMesh* SkeletalMesh; // 0x0
	UMaterialInstance* EquippedMaterialOverride; // 0x8
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FGPUSpriteLocalVectorFieldInfo {
	UVectorField* Field; // 0x0
	FTransform Transform; // 0x10
	FRotator MinInitialRotation; // 0x40
	FRotator MaxInitialRotation; // 0x4c
	FRotator RotationRate; // 0x58
	float Intensity; // 0x64
	float Tightness; // 0x68
	char bIgnoreComponentTransform : 1; // 0x6c
	char bTileX : 1; // 0x6c
	char bTileY : 1; // 0x6c
	char bTileZ : 1; // 0x6c
	char bUseFixDT : 1; // 0x6c
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FMovieSceneVectorKeyStructBase {
	FFrameNumber Time; // 0x8
};

struct FStringCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FPerlinLayerProperties {
	float Frequency; // 0x0
	float Intensity; // 0x4
};

struct FDoorRepData {
	EDoorStateFlags StateFlags; // 0x0
	FDbIntegerId OwningUserProfileId; // 0x8
	TArray<UObject*> Locks; // 0x10
	TArray<int32_t> RemainingNeutralizationAttemptsPerLock; // 0x20
	char DoorAccessLevel; // 0x30
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FConZSquadMember {
	FDbIntegerId UserProfileId; // 0x0
	EConZSquadMemberRank Rank; // 0x8
	bool online; // 0x9
	bool InDanger; // 0xa
	bool IsAlive; // 0xb
};

struct FExpirableVehicleSpawner {
	FName ID; // 0x0
	int64_t ExpirationTime; // 0x8
	int32_t Quantity; // 0x10
	FPrimaryAssetId VehicleAssetId; // 0x14
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FMovieSceneParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FSynthSlateStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FNiagaraEmitterScalabilityOverride {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FProcMeshVertex {
	FVector position; // 0x0
	FVector Normal; // 0xc
	FProcMeshTangent Tangent; // 0x18
	FColor Color; // 0x28
	FVector2D UV0; // 0x2c
	FVector2D UV1; // 0x34
	FVector2D UV2; // 0x3c
	FVector2D UV3; // 0x44
};

struct FMovieSceneEventChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FLandingEffectDataPerSeverity {
	UParticleSystem* ParticleSystem; // 0x0
	bool SpawnParticlesInDirectionOfVelocity; // 0x8
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FVehicleWeaponAimingStanceData {
	TArray<FVehicleWeaponAimingStanceTransitionMontages> StanceTransitionMontages; // 0x0
	TArray<FVehicleWeaponAimingStanceTransitionCurves> SupportedAnglesForTransition; // 0x10
	FVehicleWeaponAimingFirstPersonData FirstPerson; // 0x20
	FVehicleWeaponAimingThirdPersonData ThirdPerson; // 0x68
};

struct FLightPropagationVolumeSettings {
	char bOverride_LPVIntensity : 1; // 0x0
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0x0
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0x0
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0x0
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0x0
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0x0
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0x0
	char bOverride_LPVSize : 1; // 0x0
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x1
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x1
	char bOverride_LPVGeometryVolumeBias : 1; // 0x1
	char bOverride_LPVVplInjectionBias : 1; // 0x1
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x1
	float LPVIntensity; // 0x4
	float LPVVplInjectionBias; // 0x8
	float LPVSize; // 0xc
	float LPVSecondaryOcclusionIntensity; // 0x10
	float LPVSecondaryBounceIntensity; // 0x14
	float LPVGeometryVolumeBias; // 0x18
	float LPVEmissiveInjectionIntensity; // 0x1c
	float LPVDirectionalOcclusionIntensity; // 0x20
	float LPVDirectionalOcclusionRadius; // 0x24
	float LPVDiffuseOcclusionExponent; // 0x28
	float LPVSpecularOcclusionExponent; // 0x2c
	float LPVDiffuseOcclusionIntensity; // 0x30
	float LPVSpecularOcclusionIntensity; // 0x34
	float LPVFadeRange; // 0x38
	float LPVDirectionalOcclusionFadeRange; // 0x3c
};

struct FAnimLinkableElement {
	UAnimMontage* LinkedMontage; // 0x8
	int32_t SlotIndex; // 0x10
	int32_t SegmentIndex; // 0x14
	EAnimLinkMethod LinkMethod; // 0x18
	EAnimLinkMethod CachedLinkMethod; // 0x19
	float SegmentBeginTime; // 0x1c
	float SegmentLength; // 0x20
	float LinkValue; // 0x24
	UAnimSequenceBase* LinkedSequence; // 0x28
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FServerInfo {
	FString Address; // 0x0
	int32_t Port; // 0x10
	FString Name; // 0x18
	char PlayerCount; // 0x28
	char MaxPlayerCount; // 0x29
	bool PasswordProtected; // 0x2a
	float ping; // 0x2c
	float InGameTime; // 0x30
	FString Version; // 0x38
	bool IsComplete; // 0x48
};

struct FWeaponBowStateDataReplicated {
	EBowDrawPercentage BowDrawPercentage; // 0x0
	float HoldTimeInFullDraw; // 0x4
	EWeaponBowState WeaponBowState; // 0x8
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FMinimalViewInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
	float DesiredFOV; // 0x1c
	float OrthoWidth; // 0x20
	float OrthoNearClipPlane; // 0x24
	float OrthoFarClipPlane; // 0x28
	float AspectRatio; // 0x2c
	char bConstrainAspectRatio : 1; // 0x30
	char bUseFieldOfViewForLOD : 1; // 0x30
	ECameraProjectionMode ProjectionMode; // 0x34
	float PostProcessBlendWeight; // 0x38
	FPostProcessSettings PostProcessSettings; // 0x40
	FVector2D OffCenterProjectionOffset; // 0x590
};

struct FHairExternalForces {
	FVector GravityVector; // 0x0
	float AirDrag; // 0xc
	FVector AirVelocity; // 0x10
};

struct FTTVectorTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FMovieSceneAkAudioEventTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FNavLinkCustomInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FMovieSceneVector2DKeyStruct {
	FVector2D Vector; // 0x28
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FPrisonerNearbyFoliageInstanceInfo {
	EPrisonerNearbyFoliageType FoliageType; // 0x0
	UInstancedStaticMeshComponent* InstancedMeshComponent; // 0x8
	FPackedLocation PackedLocation; // 0x10
	FTransform TransformZeroOrigin; // 0x20
	UFoliageAssetData* FoliageAssetData; // 0x50
};

struct FFontImportOptionsData {
	FString FontName; // 0x0
	float Height; // 0x10
	char bEnableAntialiasing : 1; // 0x14
	char bEnableBold : 1; // 0x14
	char bEnableItalic : 1; // 0x14
	char bEnableUnderline : 1; // 0x14
	char bAlphaOnly : 1; // 0x14
	EFontImportCharacterSet CharacterSet; // 0x18
	FString Chars; // 0x20
	FString UnicodeRange; // 0x30
	FString CharsFilePath; // 0x40
	FString CharsFileWildcard; // 0x50
	char bCreatePrintableOnly : 1; // 0x60
	char bIncludeASCIIRange : 1; // 0x60
	FLinearColor ForegroundColor; // 0x64
	char bEnableDropShadow : 1; // 0x74
	int32_t TexturePageWidth; // 0x78
	int32_t TexturePageMaxHeight; // 0x7c
	int32_t XPadding; // 0x80
	int32_t YPadding; // 0x84
	int32_t ExtendBoxTop; // 0x88
	int32_t ExtendBoxBottom; // 0x8c
	int32_t ExtendBoxRight; // 0x90
	int32_t ExtendBoxLeft; // 0x94
	char bEnableLegacyMode : 1; // 0x98
	int32_t Kerning; // 0x9c
	char bUseDistanceFieldAlpha : 1; // 0xa0
	int32_t DistanceFieldScaleFactor; // 0xa4
	float DistanceFieldScanRadiusScale; // 0xa8
};

struct FAnimNode_CopyBoneDelta {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	CopyBoneDeltaMode CopyMode; // 0xeb
	float TranslationMultiplier; // 0xec
	float RotationMultiplier; // 0xf0
	float ScaleMultiplier; // 0xf4
};

struct FTreeCanopySphere {
	FVector Center; // 0x0
	float Radius; // 0xc
	float CanopyDensity; // 0x10
};

struct FPrisonerBodySimulationData_Effects {
	UPrisonerBodyCondition_Knockout* Knockout; // 0x0
	UPrisonerBodyCondition_BasicInjury* BasicInjury; // 0x8
	UPrisonerBodyCondition_BleedingInjury* BleedingInjury; // 0x10
	UPrisonerBodyCondition_Choking* Choking; // 0x18
	UPrisonerBodyCondition_FoodDisgust* FoodDisgust; // 0x20
	UPrisonerBodyEffect_Limping* Limping; // 0x28
};

struct FThrowingAnimationSet {
	UAnimMontage* PlayerLongThrowMontage; // 0x0
	UAnimMontage* PlayerLongThrowLoopMontage; // 0x8
	UAnimMontage* PlayerShortThrowMontage; // 0x10
	UAnimMontage* PlayerThrowbackMontage; // 0x18
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FLiveLinkConnectMessage {
	int32_t LiveLinkVersion; // 0x0
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FChargeAttackData {
	UAnimMontage* Montage; // 0x0
	float RegainControlDurationModifier; // 0x8
	float Range; // 0xc
	float Speed; // 0x10
	float Height; // 0x14
	float lengthOverride; // 0x18
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FSpawnCharacterGroupInfo {
	TArray<APawn*> AvailablePawns; // 0x0
	FTransform Transform; // 0x10
	int32_t NumOfCharactersToSpawn; // 0x40
	bool IgnoreLimit; // 0x44
};

struct FScrollBoxStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FItemSpawnerMarker {
	FTransform Transform; // 0x0
	FItemSpawnerDataBasedOnPreset Spawner; // 0x30
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FHeaderRowStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FHairGroupsLOD {
	TArray<FHairLODSettings> LODs; // 0x0
	float ClusterWorldSize; // 0x10
	float ClusterScreenSizeScale; // 0x14
};

struct FBlueprintInputTouchDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FModulatorContinuousParams {
	FName ParameterName; // 0x0
	float Default; // 0x8
	float MinInput; // 0xc
	float MaxInput; // 0x10
	float MinOutput; // 0x14
	float MaxOutput; // 0x18
	ModulationParamMode ParamMode; // 0x1c
};

struct FMovieSceneMediaSectionTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FNutrientsRDA {
	float MinProteinsPerLeanBodyMass; // 0x0
	float MaxProteinsPerLeanBodyMass; // 0x4
	float Fats; // 0x8
	float Water; // 0xc
	float VitaminA; // 0x10
	float VitaminB1; // 0x14
	float VitaminB2; // 0x18
	float VitaminB3; // 0x1c
	float VitaminB4; // 0x20
	float VitaminB5; // 0x24
	float VitaminB6; // 0x28
	float VitaminB9; // 0x2c
	float VitaminB12; // 0x30
	float VitaminC; // 0x34
	float VitaminD; // 0x38
	float VitaminE; // 0x3c
	float VitaminK; // 0x40
	float Calcium; // 0x44
	float Magnesium; // 0x48
	float Potassium; // 0x4c
	float Copper; // 0x50
	float Selenium; // 0x54
	float Iron; // 0x58
	float Phosphorus; // 0x5c
	float Zinc; // 0x60
	float Manganese; // 0x64
	float Sodium; // 0x68
};

struct FInventoryStackMemberData {
	int32_t position; // 0x0
	int32_t Size; // 0x4
};

struct FVehiclePartDescription {
	FGameplayTag PartType; // 0x0
	float health; // 0x8
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FVehicleSpawnerInfo {
	FDbIntegerId DatabaseId; // 0x0
	FPrimaryAssetId VehicleAssetId; // 0x8
	FString VehicleAlias; // 0x18
	FTransform VehicleTransform; // 0x30
	int64_t VehicleLastAccessTime; // 0x60
	TWeakObjectPtr<AActor> VehicleActor; // 0x68
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FCharacterSpawnerDataBasedOnPreset {
	UCharacterSpawnerPreset* Preset; // 0x0
	bool OverrideCharacterClasses; // 0x8
	TArray<APawn*> CharacterClasses; // 0x10
};

struct FTransformMeshesTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FHairSolverSettings {
	bool EnableSimulation; // 0x0
	EGroomNiagaraSolvers NiagaraSolver; // 0x1
	TSoftObjectPtr<UNiagaraSystem> CustomSystem; // 0x8
	int32_t SubSteps; // 0x30
	int32_t IterationCount; // 0x34
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FGameEventParticipantInfo {
	FString UniqueId; // 0x0
	TWeakObjectPtr<APrisoner> Prisoner; // 0x10
	FString Name; // 0x18
	EGameEventParticipantState State; // 0x28
	int32_t TeamIndex; // 0x2c
	TArray<UGameEventParticipantStats*> RoundStats; // 0x30
	UGameEventParticipantStats* EventStats; // 0x40
	TArray<APrisoner*> HurtBy; // 0x48
	int32_t RepHelper; // 0x58
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector position; // 0x20
	FQuat Rotation; // 0x30
};

struct FWaterForceWhenSwimmingParams {
	float DownstreamWaterForceMultiplier; // 0x0
	float UpstreamWaterForceMultiplier; // 0x4
	float ImpulseThreshold; // 0x8
	float ImpulseMultiplier; // 0xc
	float MinSpeedForUpstream; // 0x10
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FMetabolismRadialProgressBarColorScheme {
	FLinearColor BackgroundColor; // 0x0
	FLinearColor PrimaryBarColor; // 0x10
	FLinearColor PrimaryBarGlowColor; // 0x20
	FLinearColor SecondaryBarColor; // 0x30
	FLinearColor SecondaryBarGlowColor; // 0x40
	FLinearColor FontColor; // 0x50
	FLinearColor FontInnerGlowColor; // 0x60
	FLinearColor FontOuterGlowColor; // 0x70
};

struct FImageAssetToLoad {
	FGameplayTag Name; // 0x0
	FString FilePath; // 0x8
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FMeleeSkillAnimations {
	UAnimSequenceBase* PrimaryIdleAnimationTP; // 0x0
	UAnimSequenceBase* PrimaryIdleAnimationFP; // 0x8
	UAnimSequenceBase* TiredIdleAnimationTP; // 0x10
	UAnimSequenceBase* TiredIdleAnimationFP; // 0x18
	UAnimSequenceBase* WalkingIdleAnimationTP; // 0x20
	UAnimSequenceBase* WalkingIdleAnimationFP; // 0x28
	UAnimSequenceBase* BlockIdleAnimationTP; // 0x30
	UAnimSequenceBase* BlockIdleAnimationFP; // 0x38
	UBlendSpace* AimOffsetBlendSpaceTP; // 0x40
	UBlendSpace* AimOffsetBlendSpaceFP; // 0x48
	UAnimMontage* EnterCombatModeMontage; // 0x50
	UAnimMontage* LeaveCombatModeMontage; // 0x58
	TArray<UAnimSequenceBase*> InactivityIdleAnimations; // 0x60
	float IdleToBlockBlendDuration; // 0x70
	float BlockToIdleBlendDuration; // 0x74
	TArray<FMeleeSkillAttack> Attacks; // 0x78
	TArray<FMeleeSkillDodge> Dodges; // 0x88
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FGuardedZoneManagerDescription {
	TArray<FSentrySpawnerDescription> _sentrySpawners; // 0x0
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FPrecomputedSkyLightInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FSafeBool {
	FString Internal; // 0x0
	FString Base; // 0x10
	FString Shift; // 0x20
	char Flag; // 0x30
};

struct FConZVehicleTireParticleData {
	float MinLateralSlip; // 0x0
	float MaxLateralSlip; // 0x4
	float MinLongitudinalSlip; // 0x8
	float MaxLongitudinalSlip; // 0xc
	float ParticleScaleModifier; // 0x10
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FMovieScene3DTransformKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FMotoSynthRuntimeSettings {
	bool bSynthToneEnabled; // 0x0
	float SynthToneVolume; // 0x4
	float SynthToneFilterFrequency; // 0x8
	int32_t SynthOctaveShift; // 0xc
	bool bGranularEngineEnabled; // 0x10
	float GranularEngineVolume; // 0x14
	float GranularEnginePitchScale; // 0x18
	int32_t NumSamplesToCrossfadeBetweenGrains; // 0x1c
	int32_t NumGrainTableEntriesPerGrain; // 0x20
	int32_t GrainTableRandomOffsetForConstantRPMs; // 0x24
	int32_t GrainCrossfadeSamplesForConstantRPMs; // 0x28
	UMotoSynthSource* AccelerationSource; // 0x30
	UMotoSynthSource* DecelerationSource; // 0x38
	bool bStereoWidenerEnabled; // 0x40
	float StereoDelayMsec; // 0x44
	float StereoFeedback; // 0x48
	float StereoWidenerWetlevel; // 0x4c
	float StereoWidenerDryLevel; // 0x50
	float StereoWidenerDelayRatio; // 0x54
	bool bStereoWidenerFilterEnabled; // 0x58
	float StereoWidenerFilterFrequency; // 0x5c
	float StereoWidenerFilterQ; // 0x60
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FAnimNode_SaveCachedPose {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FClimbableObstacleInfo {
	FVector EdgeLocationZero; // 0x0
	float EdgeHeight; // 0xc
	FVector HWallNormal; // 0x10
	FVector VWallNormal; // 0x1c
	FVector CapsuleLocationAtAnchorZero; // 0x28
	FRotator CapsuleRotationAtAnchor; // 0x34
	TWeakObjectPtr<UPrimitiveComponent> BaseComponent; // 0x40
	FPrisonerClimbAnimationInfo AnimationInfo; // 0x48
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FRandomPlayerSequenceEntry {
	UAnimSequence* Sequence; // 0x0
	float ChanceToPlay; // 0x8
	int32_t MinLoopCount; // 0xc
	int32_t MaxLoopCount; // 0x10
	float MinPlayRate; // 0x14
	float MaxPlayRate; // 0x18
	FAlphaBlend BlendIn; // 0x20
};

struct FRichTextStyleRow {
	FTextBlockStyle TextStyle; // 0x8
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FStaticComponentMaskParameter {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FVehicleWeaponAimingFirstPersonData {
	FFirstPersonViewParameters ViewParameters; // 0x0
	FVector LocationOffset; // 0x28
	UCurveVector* LocationOffsetByYaw; // 0x38
	UCurveVector* LocationOffsetByPitch; // 0x40
};

struct FVehicleExhaustEffects {
	TArray<FVehicleExhaustParticles> Particles; // 0x0
	float ThrottleImpulseMinValue; // 0x10
	float ThrottleImpulseMaxValue; // 0x14
	float ThrottleImpulseSpeedTermMaxValue; // 0x18
	float ThrottleImpulseAttackDuration; // 0x1c
	float ThrottleImpulseSustainDuration; // 0x20
	float ThrottleImpulseReleaseDuration; // 0x24
	float ParticlesDestructionDelay; // 0x28
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FFirstPersonViewParameters {
	FFloatInterval MinMaxViewPitch; // 0x0
	FFloatInterval MinMaxViewYaw; // 0x8
	FFloatInterval MinMaxViewYawInCombatMode; // 0x10
	FFloatInterval MinMaxViewYawIfBlocked; // 0x18
	UCurveLinearColor* MinMaxViewPitchByYaw; // 0x20
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FHitReactLandingData {
	float MinImpactSpeedToReact; // 0x0
	UAnimMontage* MontageToPlay; // 0x8
	float RegainControlDurationMultiplier; // 0x10
	bool CanEverGoToRagdoll; // 0x14
	float MinImpactSpeedForRagdoll; // 0x18
	float MinRagdollDuration; // 0x1c
	float MaxRagdollDuration; // 0x20
	float RagdollDurationPerSpeedUnit; // 0x24
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FDcxVehicleDifferentialData4W {
	EDcxVehicleDifferential4W DifferentialType; // 0x0
	float FrontRearSplit; // 0x4
	float FrontLeftRightSplit; // 0x8
	float RearLeftRightSplit; // 0xc
	float CenterBias; // 0x10
	float FrontBias; // 0x14
	float RearBias; // 0x18
};

struct FLiveLinkAnimationFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FProjectileArrowData {
	UObject* AmmunitionArrowClass; // 0x0
	float ItemsHealth; // 0x8
	float StiffnessFactor; // 0xc
	float FlightRotationCorrectionSpeed; // 0x10
	float DeviationDegrees; // 0x14
	bool IsPartOfEvent; // 0x18
};

struct FMovieSceneNiagaraColorParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FPlayerLoginInfo {
	FString UserId; // 0x0
	FDbIntegerId UserProfileId; // 0x10
	FString UserProfileName; // 0x18
	bool IsUserAdmin; // 0x28
	bool PlayAsDrone; // 0x29
	FDeluxeVersion DeluxeVersion; // 0x2a
	FString ServerName; // 0x30
	int32_t ServerResponsePort; // 0x40
	FDbIntegerId ServerUserProfileId; // 0x48
	FGameplayRules GameplayRules; // 0x50
};

struct FSkillExperienceChange {
	float ExperienceChange; // 0x0
	float Time; // 0x4
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FBodyInstanceCore {
	char bSimulatePhysics : 1; // 0x10
	char bOverrideMass : 1; // 0x10
	char bEnableGravity : 1; // 0x10
	char bAutoWeld : 1; // 0x10
	char bStartAwake : 1; // 0x10
	char bGenerateWakeEvents : 1; // 0x10
	char bUpdateMassWhenScaleChanges : 1; // 0x10
};

struct FMovieSceneEditorData {
	TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x0
	TArray<FString> PinnedNodes; // 0x50
	double ViewStart; // 0x60
	double ViewEnd; // 0x68
	double WorkStart; // 0x70
	double WorkEnd; // 0x78
	TSet<FFrameNumber> MarkedFrames; // 0x80
	FFloatRange WorkingRange; // 0xd0
	FFloatRange ViewRange; // 0xe0
};

struct FPrisonerMovementSettings_Ground_Standing_Walking {
	FPrisonerGroundMovementParameters Default; // 0x0
	FPrisonerGroundMovementParameters MeleeCombat; // 0xc
	FPrisonerGroundMovementParameters WeaponAiming; // 0x18
	FPrisonerGroundMovementParameters WeaponAimingDownTheSights; // 0x24
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FAnimNode_TwistCorrectiveNode {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
};

struct FRootMotionSource_JumpForce {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FNiagaraVMExecutableData {
	TArray<char> ByteCode; // 0x0
	TArray<char> OptimizedByteCode; // 0x10
	int32_t NumTempRegisters; // 0x20
	int32_t NumUserPtrs; // 0x24
	TArray<char> ScriptLiterals; // 0x28
	TArray<FNiagaraVariable> Attributes; // 0x38
	FNiagaraScriptDataUsageInfo DataUsage; // 0x48
	TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0x50
	TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0x60
	TArray<FNiagaraDataSetID> ReadDataSets; // 0x80
	TArray<FNiagaraDataSetProperties> WriteDataSets; // 0x90
	TArray<FNiagaraStatScope> StatScopes; // 0xa0
	TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0xb0
	ENiagaraScriptCompileStatus LastCompileStatus; // 0xc0
	TArray<FSimulationStageMetaData> SimulationStageMetaData; // 0xc8
	char bReadsSignificanceIndex : 1; // 0xd8
};

struct FComboButtonStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FRepairToolItemParams {
	FGameplayTagContainer RepairableItemTypes; // 0x0
	UAkAudioEvent* StartRepairSound; // 0x20
	UAkAudioEvent* StopRepairSound; // 0x28
	UAnimMontage* StartRepairMontage; // 0x30
	UAnimMontage* StopRepairMontage; // 0x38
	float HealthGainPerUseMultiplier; // 0x40
	TArray<FRequiredRepairingItemTagParams> RequiredRepairingItemTagsParms; // 0x48
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FAIDataProviderFloatValue {
	float DefaultValue; // 0x30
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FInAppPurchaseProductInfo {
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DisplayName; // 0x20
	FString DisplayDescription; // 0x30
	FString DisplayPrice; // 0x40
	float RawPrice; // 0x50
	FString CurrencyCode; // 0x58
	FString CurrencySymbol; // 0x68
	FString DecimalSeparator; // 0x78
	FString GroupingSeparator; // 0x88
	FString ReceiptData; // 0x98
};

struct FSubmixEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
	float DryLevel; // 0x14
	bool bFilterEnabled; // 0x18
	EStereoDelayFiltertype FilterType; // 0x19
	float FilterFrequency; // 0x1c
	float FilterQ; // 0x20
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FHairGroupsRendering {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* Material; // 0x8
	FHairGeometrySettings GeometrySettings; // 0x10
	FHairShadowSettings ShadowSettings; // 0x20
	FHairAdvancedRenderingSettings AdvancedSettings; // 0x2c
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FCharacterTorsoImpactSoundData {
	TArray<ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x0
	TArray<ECharacterTorsoImpactSoundCategory> ImpactTargetCategories; // 0x10
	FCharacterImpactSounds Sounds; // 0x20
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FCamouflageSkillParametersPerSkillLevel {
	float Modifier; // 0x0
	float Bonus; // 0x4
	float FoliageAIPerceptionOuterRadius; // 0x8
	float FoliageAIPerceptionInnerRadius; // 0xc
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FMovieSceneBoolPropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D position; // 0x20
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FLightmassDebugOptions {
	char bDebugMode : 1; // 0x0
	char bStatsEnabled : 1; // 0x0
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x0
	float CoplanarTolerance; // 0x4
	char bUseImmediateImport : 1; // 0x8
	char bImmediateProcessMappings : 1; // 0x8
	char bSortMappings : 1; // 0x8
	char bDumpBinaryFiles : 1; // 0x8
	char bDebugMaterials : 1; // 0x8
	char bPadMappings : 1; // 0x8
	char bDebugPaddings : 1; // 0x8
	char bOnlyCalcDebugTexelMappings : 1; // 0x8
	char bUseRandomColors : 1; // 0x9
	char bColorBordersGreen : 1; // 0x9
	char bColorByExecutionTime : 1; // 0x9
	float ExecutionTimeDivisor; // 0xc
};

struct FStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FCharacterSpawnerData {
	TArray<APawn*> CharacterClasses; // 0x0
};

struct FSoundSourceBusSendInfo {
	ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0
	USoundSourceBus* SoundSourceBus; // 0x8
	UAudioBus* AudioBus; // 0x10
	float SendLevel; // 0x18
	float MinSendLevel; // 0x1c
	float MaxSendLevel; // 0x20
	float MinSendDistance; // 0x24
	float MaxSendDistance; // 0x28
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x30
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FVDCachedParticleStartLocation {
	FVector Location; // 0x0
	bool bIsAttached; // 0xc
};

struct FInventoryNodeWidgetData {
	FName slot; // 0x0
	EInventoryNodeWidgetDataType Type; // 0x8
	float NumberData; // 0xc
	FText TextData; // 0x10
	UTexture2D* IconData; // 0x28
	ESlateVisibility VisibilityData; // 0x30
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FDcxVehicleWheelState {
	FVector SuspensionLineStart; // 0x0
	FVector SuspensionLineDirection; // 0xc
	float SuspensionLineLength; // 0x18
	bool bIsInAir; // 0x1c
	AActor* TireContactActor; // 0x20
	UPhysicalMaterial* TireSurfaceMaterial; // 0x28
	FVector TireContactPoint; // 0x30
	FVector TireContactNormal; // 0x3c
	float TireFriction; // 0x48
	float SuspensionJounce; // 0x4c
	float SuspensionSpringForce; // 0x50
	FVector TireLongitudinalDirection; // 0x54
	FVector TireLateralDirection; // 0x60
	float LongitudinalSlip; // 0x6c
	float LateralSlip; // 0x70
	float SteerAngle; // 0x74
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FSkillEventWeaponProjectileHitTarget {
	AActor* Target; // 0x8
	float Distance; // 0x10
	float EnergyRatio; // 0x14
	bool IsHeadShot; // 0x18
	bool IsKill; // 0x19
	bool WasSniping; // 0x1a
	EPrisonerStance stance; // 0x1b
	EWindSpeedCategory WindSpeedCategory; // 0x1c
	float ExperienceMultiplier; // 0x20
};

struct FTournamentStats {
	FDbIntegerId UserProfileId; // 0x0
	FString PlayerName; // 0x8
	bool online; // 0x18
	bool Alive; // 0x19
	int32_t FamePoints; // 0x1c
	int32_t Kills; // 0x20
	int32_t Deaths; // 0x24
	FDateTime LastDeathTime; // 0x28
};

struct FAnimNode_ApplyLimits {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FDigestionItemSave {
	FConsumableSave Consumable; // 0x0
	float RemainingMassToConsume; // 0xa0
	float MassConsumed; // 0xa4
	float MassAbsorbed; // 0xa8
	FNutrientsData NutrientsInStomach; // 0xac
	FNutrientsData NutrientsInIntestine; // 0x12c
	TArray<FConsumableDigestionHandlerSave> DigestionHandlers; // 0x1b0
};

struct FDamageOverTimeUpdateGroup {
	float UpdateInterval; // 0x0
};

struct FUserServerHistoryItem {
	FString Name; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
};

struct FAnimNode_PoseByName {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FSourceEffectDynamicsProcessorSettings {
	ESourceEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESourceEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	float AttackTimeMsec; // 0x8
	float ReleaseTimeMsec; // 0xc
	float ThresholdDb; // 0x10
	float Ratio; // 0x14
	float KneeBandwidthDb; // 0x18
	float InputGainDb; // 0x1c
	float OutputGainDb; // 0x20
	char bStereoLinked : 1; // 0x24
	char bAnalogMode : 1; // 0x24
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FConZConsoleVariableRow {
	FString ConsoleVariable; // 0x8
	FString Description; // 0x18
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FLiveLinkInstanceProxy {
	FAnimNode_LiveLinkPose PoseNode; // 0x760
};

struct FNavigationLink {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FDatasmithPostProcessSettingsTemplate {
	char bOverride_WhiteTemp : 1; // 0x0
	char bOverride_ColorSaturation : 1; // 0x0
	char bOverride_VignetteIntensity : 1; // 0x0
	char bOverride_FilmWhitePoint : 1; // 0x0
	char bOverride_AutoExposureMethod : 1; // 0x0
	char bOverride_CameraISO : 1; // 0x0
	char bOverride_CameraShutterSpeed : 1; // 0x0
	char bOverride_DepthOfFieldFstop : 1; // 0x4
	float WhiteTemp; // 0x8
	float VignetteIntensity; // 0xc
	FLinearColor FilmWhitePoint; // 0x10
	FVector4 ColorSaturation; // 0x20
	EAutoExposureMethod AutoExposureMethod; // 0x30
	float CameraISO; // 0x34
	float CameraShutterSpeed; // 0x38
	float DepthOfFieldFstop; // 0x3c
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FGameEventRewardPoints {
	int32_t Cash; // 0x0
	int32_t Score; // 0x4
	float FamePoints; // 0x8
};

struct FMovieSceneObjectPathChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FDialogInfoContainer {
	TArray<FDialogueInfo> DialogInfos; // 0x0
};

struct FPrisonerGroundMovementParameters {
	float MaxSpeed; // 0x0
	float Acceleration; // 0x4
	float Deceleration; // 0x8
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FWorldContext {
	FURL LastURL; // 0xd0
	FURL LastRemoteURL; // 0x138
	UPendingNetGame* PendingNetGame; // 0x1a0
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1a8
	TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1c8
	TArray<UObjectReferencer*> ObjectReferencers; // 0x1f0
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x200
	UGameViewportClient* GameViewport; // 0x210
	UGameInstance* OwningGameInstance; // 0x218
	TArray<FNamedNetDriver> ActiveNetDrivers; // 0x220
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FSimulationStageMetaData {
	FName SimulationStageName; // 0x0
	FName IterationSource; // 0x8
	char bSpawnOnly : 1; // 0x10
	char bWritesParticles : 1; // 0x10
	char bPartialParticleUpdate : 1; // 0x10
	TArray<FName> OutputDestinations; // 0x18
	int32_t MinStage; // 0x28
	int32_t MaxStage; // 0x2c
};

struct FLandmassFalloffSettings {
	EBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	FFrameNumber FirstLoopStartFrameOffset; // 0x8
	FFrameNumber StartFrameOffset; // 0xc
	FFrameNumber EndFrameOffset; // 0x10
	float PlayRate; // 0x14
	char bReverse : 1; // 0x18
	FName SlotName; // 0x1c
	FMovieSceneFloatChannel Weight; // 0x28
	bool bSkipAnimNotifiers; // 0xc8
	bool bForceCustomMode; // 0xc9
	float StartOffset; // 0xcc
	float EndOffset; // 0xd0
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FHairCardsTextureSettings {
	int32_t AtlasMaxResolution; // 0x0
	int32_t PixelPerCentimeters; // 0x4
	int32_t LengthTextureCount; // 0x8
	int32_t DensityTextureCount; // 0xc
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FLockData {
	AMinigame* LockMinigameClass; // 0x0
	UFailurePenalty* FailurePenaltyClass; // 0x8
	bool AreFamePointsRequired; // 0x10
	ELockDifficulty LockDifficulty; // 0x11
	float ExperienceOnSuccess; // 0x14
	float ExperienceOnFailure; // 0x18
	FText LockedMessage; // 0x20
	FText LockpickMessage; // 0x38
	UStaticMesh* LockMeshOuter; // 0x50
	UStaticMesh* LockMeshInner; // 0x58
	float RotatingTresholdAngle; // 0x60
	float Duration; // 0x64
	float AngleTolerance; // 0x68
	float PickBreakingMultiplier; // 0x6c
	int32_t PickBreakingAtNumberOfFailedPushAttempts; // 0x70
	int32_t NumberOfNeutralizationAttempts; // 0x74
	int32_t NumRemainingNeutralizationAttempts; // 0x78
	float LockHP; // 0x7c
	float GlovePickBreakingModifier; // 0x80
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FAnimNotifyEvent {
	float DisplayTime; // 0x30
	float TriggerTimeOffset; // 0x34
	float EndTriggerTimeOffset; // 0x38
	float TriggerWeightThreshold; // 0x3c
	FName NotifyName; // 0x40
	UAnimNotify* Notify; // 0x48
	UAnimNotifyState* NotifyStateClass; // 0x50
	float Duration; // 0x58
	FAnimLinkableElement EndLink; // 0x60
	bool bConvertedFromBranchingPoint; // 0x90
	EMontageNotifyTickType MontageTickType; // 0x91
	float NotifyTriggerChance; // 0x94
	ENotifyFilterType NotifyFilterType; // 0x98
	int32_t NotifyFilterLOD; // 0x9c
	bool bTriggerOnDedicatedServer; // 0xa0
	bool bTriggerOnFollower; // 0xa1
	int32_t TrackIndex; // 0xa4
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FTooltipPanelData {
	UObject* ItemClass; // 0x0
	UUserWidget* WidgetClass; // 0x8
	ETooltipPanelType PanelType; // 0x10
	int32_t Layer; // 0x14
	bool IsEditorOnly; // 0x18
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FConZBaseRepairAreaDuration {
	int32_t NumberOfBaseElementsTreshold; // 0x0
	float RepairDuration; // 0x4
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FAnimNode_PoseHandler {
	UPoseAsset* PoseAsset; // 0x38
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FARGeoAnchorUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	float Longitude; // 0x50
	float Latitude; // 0x54
	float AltitudeMeters; // 0x58
	EARAltitudeSource AltitudeSource; // 0x5c
	FString AnchorName; // 0x60
};

struct FPropertyAccessIndirection {
	TFieldPath<FArrayProperty> ArrayProperty; // 0x0
	UFunction* Function; // 0x20
	int32_t ReturnBufferSize; // 0x28
	int32_t ReturnBufferAlignment; // 0x2c
	int32_t ArrayIndex; // 0x30
	uint32_t Offset; // 0x34
	EPropertyAccessObjectType ObjectType; // 0x38
	EPropertyAccessIndirectionType Type; // 0x39
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FAITeamAttitudeData {
	ETeamAttitude AttitudePerTeam[0x6]; // 0x0
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FPointDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FAnimNode_ScaleChainLength {
	FPoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	FBoneReference ChainStartBone; // 0x24
	FBoneReference ChainEndBone; // 0x34
	FVector TargetLocation; // 0x44
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EScaleChainInitialLength ChainInitialLength; // 0x60
};

struct FMovieSceneGeometryCacheSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FServerCraftableItem {
	uint32_t ID; // 0x0
	AItem* ItemClass; // 0x8
	int32_t CraftedItemCount; // 0x10
	TArray<AItem*> BonusItemClasses; // 0x18
	TArray<FServerUsedItem> MandatoryItems; // 0x28
	TArray<FServerUsedItem> MandatoryParts; // 0x38
	TArray<FServerUsedItem> OptionalItems; // 0x48
	TArray<FServerUsedItem> OptionalParts; // 0x58
	TArray<FServerUsedItem> ToolsNeeded; // 0x68
	UAnimMontage* CustomCraftingMontage; // 0x78
	UAkAudioEvent* StartCraftingAudioEvent; // 0x80
	UAkAudioEvent* StopCraftingAudioEvent; // 0x88
};

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FWeaponReloadData {
	bool IsQuick; // 0x0
	AItem* Item; // 0x8
	AItem* Item2; // 0x10
	int32_t count; // 0x18
	UObject* ReloadSequenceClass; // 0x20
	float AnimationPlayRate; // 0x28
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FMovieSceneSlomoSectionTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FMapHUDVehiclesObject {
	UTexture* _vehiclePositionOuterRingTexture; // 0x18
	FLinearColor _vehicleOuterRingColor; // 0x20
	FLinearColor _vehicleHighlightOuterRingColor; // 0x30
	UTexture* _vehiclePositionInnerCircleTexture; // 0x40
	FLinearColor _vehicleInnerCircleColor; // 0x48
	FLinearColor _vehicleHighlightInnerCircleColor; // 0x58
	UFont* _vehicleFont; // 0x68
	FLinearColor _vehicleNameHighlightColor; // 0x70
	FLinearColor _vehicleNameHighlightOutlineColor; // 0x80
	FLinearColor _vehicleNameColor; // 0x90
	FLinearColor _vehicleNameOutlineColor; // 0xa0
	FVector2D _vehiclePositionTextureSize; // 0xb0
	int32_t _vehicleTextStackOffset; // 0xb8
};

struct FFishSpawnData {
	UFishSpeciesData* FishSpeciesData; // 0x0
	float SpawningWeight; // 0x8
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x38
};

struct FMovieSceneMaterialParameterCollectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FMovieSceneEnumPropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FDialogueInfo {
	UAkAudioEvent* VoiceOver; // 0x0
	FText Text; // 0x8
	float Duration; // 0x20
	EDialogType DialogType; // 0x24
};

struct FPrisonerTattooMaterialSet {
	bool DeluxeOnly; // 0x0
	UTexture2D* HeadTattoo; // 0x8
	UTexture2D* TorsoTattoo; // 0x10
	UTexture2D* LimbTattoo; // 0x18
};

struct FAnimNode_Constraint {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FAnimNode_RefPose {
	ERefPoseType RefPoseType; // 0x10
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FImportanceTexture {
	FIntPoint Size; // 0x0
	int32_t NumMips; // 0x8
	TArray<float> MarginalCDF; // 0x10
	TArray<float> ConditionalCDF; // 0x20
	TArray<FColor> TextureData; // 0x30
	TWeakObjectPtr<UTexture2D> Texture; // 0x40
	EImportanceWeight Weighting; // 0x48
};

struct FEnvOverlapData {
	float ExtentX; // 0x0
	float ExtentY; // 0x4
	float ExtentZ; // 0x8
	FVector ShapeOffset; // 0xc
	ECollisionChannel OverlapChannel; // 0x18
	EEnvOverlapShape OverlapShape; // 0x19
	char bOnlyBlockingHits : 1; // 0x1c
	char bOverlapComplex : 1; // 0x1c
	char bSkipOverlapQuerier : 1; // 0x1c
};

struct FAnimNode_LinkedAnimGraph {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FFoliageCanopyData {
	bool UseSphere; // 0x0
	FTreeCanopySphere Sphere; // 0x4
	bool UseCapsule; // 0x18
	FTreeCanopyCapsule Capsule; // 0x1c
};

struct FConZOnDemandElementData {
	FConZBaseElementIdentifier ElementIdentifier; // 0x0
	FString OwnerName; // 0x20
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FFoliageAIPerceptionData {
	bool CanCoverPrisoner; // 0x0
	EPrisonerStance MaxUndetectedPrisonerStance; // 0x1
};

struct FCamouflageSkillExperienceAwards {
	float BonusExperience; // 0x0
};

struct FConZBaseInteractionData {
	int64_t BaseId; // 0x0
	FVector BaseLocation; // 0x8
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FAnimNode_AimOffsetLookAt {
	FPoseLink BasePose; // 0x150
	int32_t LODThreshold; // 0x160
	FName SourceSocketName; // 0x164
	FName PivotSocketName; // 0x16c
	FVector LookAtLocation; // 0x174
	FVector SocketAxis; // 0x180
	float Alpha; // 0x18c
};

struct FBuoyancyTestPoint {
	FVector Location; // 0x0
	float Radius; // 0xc
	float Density; // 0x10
};

struct FRespawnParameters {
	int32_t RandomLocationPrice; // 0x0
	int32_t SectorLocationPrice; // 0x4
	int32_t ShelterLocationPrice; // 0x8
	int32_t SquadLocationPrice; // 0xc
	float RandomPriceModifier; // 0x10
	float SectorPriceModifier; // 0x14
	float HomePriceModifier; // 0x18
	int32_t RandomInitialTime; // 0x1c
	int32_t SectorInitialTime; // 0x20
	int32_t ShelterInitialTime; // 0x24
	int32_t SquadInitialTime; // 0x28
	int32_t RandomCooldownTime; // 0x2c
	int32_t SectorCooldownTime; // 0x30
	int32_t ShelterCooldownTime; // 0x34
	int32_t SquadCooldownTime; // 0x38
	float RandomCooldownResetMultiplier; // 0x3c
	float SectorCooldownResetMultiplier; // 0x40
	float ShelterCooldownResetMultiplier; // 0x44
	float SquadCooldownResetMultiplier; // 0x48
	int32_t CommitSuicideInitialTime; // 0x4c
	int32_t CommitSuicideCooldownTime; // 0x50
	float CommitSuicideCooldownResetMultiplier; // 0x54
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FInventoryContainerClothesData {
	TArray<FInventoryItemPositionPair> ItemsData; // 0x0
	UObject* Parent; // 0x10
	int32_t RepCounter; // 0x18
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FNavigationSegmentLink {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FCollisionResponseContainer {
	ECollisionResponse WorldStatic; // 0x0
	ECollisionResponse WorldDynamic; // 0x1
	ECollisionResponse Pawn; // 0x2
	ECollisionResponse Visibility; // 0x3
	ECollisionResponse Camera; // 0x4
	ECollisionResponse PhysicsBody; // 0x5
	ECollisionResponse Vehicle; // 0x6
	ECollisionResponse Destructible; // 0x7
	ECollisionResponse EngineTraceChannel1; // 0x8
	ECollisionResponse EngineTraceChannel2; // 0x9
	ECollisionResponse EngineTraceChannel3; // 0xa
	ECollisionResponse EngineTraceChannel4; // 0xb
	ECollisionResponse EngineTraceChannel5; // 0xc
	ECollisionResponse EngineTraceChannel6; // 0xd
	ECollisionResponse GameTraceChannel1; // 0xe
	ECollisionResponse GameTraceChannel2; // 0xf
	ECollisionResponse GameTraceChannel3; // 0x10
	ECollisionResponse GameTraceChannel4; // 0x11
	ECollisionResponse GameTraceChannel5; // 0x12
	ECollisionResponse GameTraceChannel6; // 0x13
	ECollisionResponse GameTraceChannel7; // 0x14
	ECollisionResponse GameTraceChannel8; // 0x15
	ECollisionResponse GameTraceChannel9; // 0x16
	ECollisionResponse GameTraceChannel10; // 0x17
	ECollisionResponse GameTraceChannel11; // 0x18
	ECollisionResponse GameTraceChannel12; // 0x19
	ECollisionResponse GameTraceChannel13; // 0x1a
	ECollisionResponse GameTraceChannel14; // 0x1b
	ECollisionResponse GameTraceChannel15; // 0x1c
	ECollisionResponse GameTraceChannel16; // 0x1d
	ECollisionResponse GameTraceChannel17; // 0x1e
	ECollisionResponse GameTraceChannel18; // 0x1f
};

struct FVDSettings {
	char bOverride_ReserveParticleBudget : 1; // 0x0
	char bOverride_NumberOfThreadsToUse : 1; // 0x0
	char bOverride_EnableSelfCollision : 1; // 0x0
	char bOverride_EnablePhysXSceneCollision : 1; // 0x0
	char bOverride_PerformExtraCollisionResolutionLoop : 1; // 0x0
	char bOverride_EnableExplicitRigidBodyCollision : 1; // 0x0
	char bOverride_SimulationFramerate : 1; // 0x0
	char bOverride_RunSimulationOnWorkerThread : 1; // 0x0
	char bOverride_WorkerThreadCoreAffinity : 1; // 0x1
	char bOverride_SimulationIterations : 1; // 0x1
	char bOverride_ConstraintIterations : 1; // 0x1
	char bOverride_ConstrainSimulationTo2DPlane : 1; // 0x1
	char bOverride_PlaneOrigin : 1; // 0x1
	char bOverride_PlaneNormal : 1; // 0x1
	char bOverride_CachePerFrameResults : 1; // 0x1
	char bOverride_CacheOnlyCollisionsWithStaticRigidBodies : 1; // 0x1
	char bOverride_CacheNonHitsAlso : 1; // 0x2
	int32_t ReserveParticleBudget; // 0x4
	int32_t NumberOfThreadsToUse; // 0x8
	bool EnableSelfCollision; // 0xc
	bool EnablePhysXSceneCollision; // 0xd
	bool PerformExtraCollisionResolutionLoop; // 0xe
	bool EnableExplicitRigidBodyCollision; // 0xf
	int32_t SimulationFramerate; // 0x10
	bool RunSimulationOnWorkerThread; // 0x14
	int32_t WorkerThreadCoreAffinity; // 0x18
	int32_t SimulationIterations; // 0x1c
	int32_t ConstraintIterations; // 0x20
	bool ConstrainSimulationTo2DPlane; // 0x24
	FVector PlaneOrigin; // 0x28
	FVector PlaneNormal; // 0x34
	char bCachePerFrameResults : 1; // 0x40
	char bCacheOnlyCollisionsWithStaticRigidBodies : 1; // 0x40
	char bCacheNonHitsAlso : 1; // 0x40
	char DrawCollisionDebug : 1; // 0x40
	char bShowOnScreenStats : 1; // 0x40
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FHairStrandsParameters {
	EGroomStrandsSize StrandsSize; // 0x0
	float StrandsDensity; // 0x4
	float StrandsSmoothing; // 0x8
	float StrandsThickness; // 0xc
	FRuntimeFloatCurve ThicknessScale; // 0x10
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FObjectiveData {
	FString ObjectiveAssetId; // 0x0
	EObjectiveState ObjectiveState; // 0x10
	FText Description; // 0x18
};

struct FPhysicsBoxData {
	FVector Dimensions; // 0x0
	FTransform Transform; // 0x10
	FKShapeElem Element; // 0x40
};

struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x0
	EUVOutput OutputUVs[0x8]; // 0x4
	FMaterialProxySettings MaterialSettings; // 0xc
	int32_t GutterSize; // 0x94
	int32_t SpecificLOD; // 0x98
	EMeshLODSelectionType LODSelectionType; // 0x9c
	char bGenerateLightMapUV : 1; // 0x9d
	char bComputedLightMapResolution : 1; // 0x9d
	char bPivotPointAtZero : 1; // 0x9d
	char bMergePhysicsData : 1; // 0x9d
	char bMergeMaterials : 1; // 0x9d
	char bCreateMergedMaterial : 1; // 0x9d
	char bBakeVertexDataToMesh : 1; // 0x9d
	char bUseVertexDataForBakingMaterial : 1; // 0x9d
	char bUseTextureBinning : 1; // 0x9e
	char bReuseMeshLightmapUVs : 1; // 0x9e
	char bMergeEquivalentMaterials : 1; // 0x9e
	char bUseLandscapeCulling : 1; // 0x9e
	char bIncludeImposters : 1; // 0x9e
	char bAllowDistanceField : 1; // 0x9e
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FHairGroupInfo {
	int32_t GroupID; // 0x0
	int32_t NumCurves; // 0x4
	int32_t NumGuides; // 0x8
	int32_t NumCurveVertices; // 0xc
	int32_t NumGuideVertices; // 0x10
};

struct FFireShotProjectileData {
	FVector StartLocation; // 0x0
	FVector_NetQuantizeNormal shootDirection; // 0xc
	int32_t ZeroRange; // 0x18
	float Windage; // 0x1c
	int32_t RandomFactor; // 0x20
	float ConeHalfAngle; // 0x24
	FFireShotProjectileDescription Description; // 0x28
};

struct FElementSnapMarker {
	FTransform Transform; // 0x0
	FVector Slack; // 0x30
	bool ElementTypesMustMatch; // 0x3c
	bool IncreaseLevelOnSnap; // 0x3d
	char MaxLevelToSnap; // 0x3e
	FVector RequiredElementSize; // 0x40
	FVector RequiredElementSizeTolerance; // 0x4c
	bool DestroySnappedElementWhenDestroyed; // 0x58
	uint16_t OutSocketTypes; // 0x5a
	uint16_t InSocketTypes; // 0x5c
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x0
	float ProjectionAngularTolerance; // 0x4
	float ProjectionLinearAlpha; // 0x8
	float ProjectionAngularAlpha; // 0xc
	float LinearBreakThreshold; // 0x10
	float AngularBreakThreshold; // 0x14
	FLinearConstraint LinearLimit; // 0x18
	FConeConstraint ConeLimit; // 0x34
	FTwistConstraint TwistLimit; // 0x54
	FLinearDriveConstraint LinearDrive; // 0x70
	FAngularDriveConstraint AngularDrive; // 0xbc
	char bDisableCollision : 1; // 0x108
	char bParentDominates : 1; // 0x108
	char bEnableProjection : 1; // 0x108
	char bEnableSoftProjection : 1; // 0x108
	char bAngularBreakable : 1; // 0x108
	char bLinearBreakable : 1; // 0x108
};

struct FMagicLeapTouchpadGesture {
	EControllerHand Hand; // 0x0
	FName MotionSource; // 0x4
	EMagicLeapTouchpadGestureType Type; // 0xc
	EMagicLeapTouchpadGestureDirection Direction; // 0xd
	FVector PositionAndForce; // 0x10
	float Speed; // 0x1c
	float Distance; // 0x20
	float FingerGap; // 0x24
	float Radius; // 0x28
	float Angle; // 0x2c
};

struct FAnimNode_ModifyCurve {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FLiveLinkLightBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FPrisonerFallingPoseTransitionParams {
	float TransitionTime; // 0x0
	UAnimSequence* TransitionAnimation; // 0x8
	FFloatInterval TransitionAnimationTimeRange; // 0x10
	UCurveFloat* TransitionPitchBlendOverrideCurve; // 0x18
};

struct FHairGroupsPhysics {
	FHairSolverSettings SolverSettings; // 0x0
	FHairExternalForces ExternalForces; // 0x38
	FHairMaterialConstraints MaterialConstraints; // 0x58
	FHairStrandsParameters StrandsParameters; // 0x230
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FBodyInstance {
	ECollisionChannel ObjectType; // 0x1e
	ECollisionEnabled CollisionEnabled; // 0x20
	ESleepFamily SleepFamily; // 0x59
	EDOFMode DOFMode; // 0x5a
	char bUseCCD : 1; // 0x5b
	char bIgnoreAnalyticCollisions : 1; // 0x5b
	char bNotifyRigidBodyCollision : 1; // 0x5b
	char bLockTranslation : 1; // 0x5b
	char bLockRotation : 1; // 0x5b
	char bLockXTranslation : 1; // 0x5b
	char bLockYTranslation : 1; // 0x5b
	char bLockZTranslation : 1; // 0x5c
	char bLockXRotation : 1; // 0x5c
	char bLockYRotation : 1; // 0x5c
	char bLockZRotation : 1; // 0x5c
	char bOverrideMaxAngularVelocity : 1; // 0x5c
	char bOverrideMaxDepenetrationVelocity : 1; // 0x5c
	char bOverrideWalkableSlopeOnInstance : 1; // 0x5d
	char bInterpolateWhenSubStepping : 1; // 0x5d
	FName CollisionProfileName; // 0x6c
	char PositionSolverIterationCount; // 0x74
	char VelocitySolverIterationCount; // 0x75
	FCollisionResponse CollisionResponses; // 0x78
	float MaxDepenetrationVelocity; // 0xa8
	float MassInKgOverride; // 0xac
	float LinearDamping; // 0xb8
	float AngularDamping; // 0xbc
	FVector CustomDOFPlaneNormal; // 0xc0
	FVector COMNudge; // 0xcc
	float MassScale; // 0xd8
	FVector InertiaTensorScale; // 0xdc
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xf8
	UPhysicalMaterial* PhysMaterialOverride; // 0x108
	float MaxAngularVelocity; // 0x110
	float CustomSleepThresholdMultiplier; // 0x114
	float StabilizationThresholdMultiplier; // 0x118
	float PhysicsBlendWeight; // 0x11c
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FClassesArray {
	TArray<UObject*> Classes; // 0x0
	TArray<UObject*> ProhibitedClasses; // 0x10
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FTTLinearColorTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FMovieSceneSectionParameters {
	FFrameNumber StartFrameOffset; // 0x0
	bool bCanLoop; // 0x4
	FFrameNumber EndFrameOffset; // 0x8
	FFrameNumber FirstLoopStartFrameOffset; // 0xc
	float TimeScale; // 0x10
	int32_t HierarchicalBias; // 0x14
	float StartOffset; // 0x18
	float PrerollTime; // 0x1c
	float PostrollTime; // 0x20
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FAnimalSpawnInfo {
	int32_t MaxSpawnInstances; // 0x0
	float SpawnProbability; // 0x4
};

struct FLadderMarker {
	FTransform FirstStep; // 0x0
	FVector LastStep; // 0x30
	FTransform Edge; // 0x40
	FVector CapsuleBias; // 0x70
	float StepHeight; // 0x7c
	float StepWidth; // 0x80
	float HitDetectionExtraAboveLastStep; // 0x84
	float HitDetectionExtraBelowFirstStep; // 0x88
	float HitDetectionExtraOnTheSides; // 0x8c
	bool HasEdge; // 0x90
	bool IsNarrow; // 0x91
	EPhysicalSurface PhysicalSurfaceForSounds; // 0x92
};

struct FPaperTerrainMaterialRule {
	UPaperSprite* StartCap; // 0x0
	TArray<UPaperSprite*> Body; // 0x8
	UPaperSprite* EndCap; // 0x18
	float MinimumAngle; // 0x20
	float MaximumAngle; // 0x24
	bool bEnableCollision; // 0x28
	float CollisionOffset; // 0x2c
	int32_t DrawOrder; // 0x30
};

struct FStructSerializerArrayTestStruct {
	TArray<int32_t> Int32Array; // 0x0
	TArray<char> ByteArray; // 0x10
	int32_t StaticSingleElement; // 0x20
	int32_t StaticInt32Array[0x3]; // 0x24
	float StaticFloatArray[0x3]; // 0x30
	TArray<FVector> VectorArray; // 0x40
	TArray<FStructSerializerBuiltinTestStruct> StructArray; // 0x50
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FLiveLinkTransformFrameData {
	FTransform Transform; // 0xa0
};

struct FCharacterStatsItem {
	int32_t Rank; // 0x0
	FString PlayerName; // 0x8
	FCharacterStats CharacterStats; // 0x18
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FAnimNode_BlendBoneByChannel {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FConZPlacementQueryParams {
	bool IsSnapping; // 0x0
	bool MustBePlacedOnFoundations; // 0x1
	bool CanEverBePlacedOnFoundations; // 0x2
	bool CanBePlacedOnOtherBaseElements; // 0x3
	APrisoner* User; // 0x8
	int32_t MaxInstancesPerFlagArea; // 0x10
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FLevelSequencePlayerSnapshot {
	FString MasterName; // 0x0
	FQualifiedFrameTime MasterTime; // 0x10
	FQualifiedFrameTime SourceTime; // 0x20
	FString CurrentShotName; // 0x30
	FQualifiedFrameTime CurrentShotLocalTime; // 0x40
	FQualifiedFrameTime CurrentShotSourceTime; // 0x50
	FString SourceTimecode; // 0x60
	TSoftObjectPtr<UCameraComponent> CameraComponent; // 0x70
	FLevelSequenceSnapshotSettings Settings; // 0x98
	ULevelSequence* ActiveShot; // 0xa8
	FMovieSceneSequenceID ShotID; // 0xb0
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FHairGroupCardsInfo {
	int32_t NumCards; // 0x0
	int32_t NumCardVertices; // 0x4
};

struct FBicycleParametersPerMovementPace {
	bool IsValid; // 0x0
	float BaseMaxForwardSpeed; // 0x4
	bool CanReverse; // 0x8
	float BaseMaxReverseSpeed; // 0xc
	float MinPrisonerStrength; // 0x10
};

struct FPrisonerMovementSettings_Ground_Prone {
	FPrisonerMovementSettings_Ground_Prone_Walking Walking; // 0x0
};

struct FScrollBorderStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FDbIntegerId {
	int64_t Value; // 0x0
};

struct FNiagaraVariable {
	TArray<char> VarData; // 0x10
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FAnimNode_TwoBoneIK {
	FBoneReference IKBone; // 0xc8
	float StartStretchRatio; // 0xd8
	float MaxStretchScale; // 0xdc
	FVector EffectorLocation; // 0xe0
	FBoneSocketTarget EffectorTarget; // 0xf0
	FVector JointTargetLocation; // 0x150
	FBoneSocketTarget JointTarget; // 0x160
	FAxis TwistAxis; // 0x1c0
	EBoneControlSpace EffectorLocationSpace; // 0x1d0
	EBoneControlSpace JointTargetLocationSpace; // 0x1d1
	char bAllowStretching : 1; // 0x1d2
	char bTakeRotationFromEffectorSpace : 1; // 0x1d2
	char bMaintainEffectorRelRot : 1; // 0x1d2
	char bAllowTwist : 1; // 0x1d2
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FVehicleSpawnerMarker {
	FTransform Transform; // 0x0
	FVehicleSpawnerDataBasedOnPreset Spawner; // 0x30
};

struct FMovieSceneKeyTimeStruct {
	FFrameNumber Time; // 0x8
};

struct FHitReactResult {
	UAnimMontage* MontageToPlay; // 0x0
	UAnimMontage* FollowupMontage; // 0x8
	float RegainControlDurationMultiplier; // 0x10
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FDcxVehicleDriveState {
	FDcxAnalogControlArray AnalogControls; // 0x0
	FDcxGear CurrentGear; // 0x10
	FDcxGear TargetGear; // 0x14
};

struct FPlaceableIngredient {
	TArray<UCraftingItemTag*> Tags; // 0x0
	TArray<AItem*> SpecificItems; // 0x10
	TArray<ECraftingType> TagsCraftingTypes; // 0x20
	TArray<ECraftingType> SpecificItemsCraftingTypes; // 0x30
	EPlaceableIngredientType Type; // 0x40
	float Required; // 0x44
	float Satisfied; // 0x48
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FDeathmatchParameters {
	int32_t RoundScoreLimit; // 0x0
	float AreaRestrictionInterval; // 0x4
	float AreaRestrictionDuration; // 0x8
	float AreaRestrictionStep; // 0xc
	float BarrierHeatUpDuration; // 0x10
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t vertexcount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FSplineInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FSplitterStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FAnimNode_ConvertLocalToComponentSpace {
	FPoseLink LocalPose; // 0x10
};

struct FGroomHairGroupPreview {
	int32_t GroupID; // 0x0
	int32_t CurveCount; // 0x4
	int32_t GuideCount; // 0x8
	FHairGroupsInterpolation InterpolationSettings; // 0xc
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FLandscapeLayer {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	bool bVisible; // 0x18
	bool bLocked; // 0x19
	float HeightmapAlpha; // 0x1c
	float WeightmapAlpha; // 0x20
	ELandscapeBlendMode BlendMode; // 0x24
	TArray<FLandscapeLayerBrush> Brushes; // 0x28
	TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38
};

struct FSliderWithLabelAndNumberStyle {
	FSlateBrush FocusBackgroundImage; // 0x0
	FSliderWithLabelAndNumberTextStyle LabelText; // 0x88
	FSliderWithLabelAndNumberTextStyle NumberText; // 0xf0
};

struct FSafeByte {
	FString Internal; // 0x0
	FString Base; // 0x10
	FString Shift; // 0x20
	char Flag; // 0x30
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FMetabolismState {
	float InitialAbsorbedEnergyRatio; // 0x0
	float InitialAbsorbedWaterRatio; // 0x4
	float InitialAbsorbedVitaminsRatio; // 0x8
	float InitialAbsorbedMineralsRatio; // 0xc
	float InitialColonFullness; // 0x10
	float InitialBladderFullness; // 0x14
	float MaxStomachVolume; // 0x18
	float MaxIntestineVolume; // 0x1c
	float MaxColonVolume; // 0x20
	float MaxBladderVolume; // 0x24
	float AbsorbedEnergyCapacityMultiplier; // 0x28
	float AbsorbedWaterCapacityMultiplier; // 0x2c
	float AbsorbedAlcoholBaseCapacity; // 0x30
	float AlcoholDiscardRatePerHour; // 0x34
	float MaxEnergyToAbsorbPerHour; // 0x38
	float MaxEnergyToStoreAsFatPerHour; // 0x3c
	float MaxEnergyToRecoverFromFatPerHour; // 0x40
	float MaxAbsorbedEnergyExcessToDiscardPerHour; // 0x44
	FNutrientsData AbsorbedNonEnergyProvidingNutrientsRecoveryRateMultiplier; // 0x48
	FNutrientsData AbsorbedNonEnergyProvidingNutrientsExcessDiscardRateMultiplier; // 0xc8
	FNutrientsData DigestionSpeedRateMultiplier; // 0x148
	float IntestineToColonFecesTransferRate; // 0x1c8
	float AdditionalRequiredWaterPerProteinOverRDA; // 0x1cc
	float AdditionalRequiredWaterPerCarbsOverRDA; // 0x1d0
	float AdditionalRequiredWaterPerSodiumOverRDA; // 0x1d4
	float AdditionalRequiredWaterPerAlcohol; // 0x1d8
	FNutrientsData IntakeNutrientsFecesRatios; // 0x1dc
	FNutrientsData IntakeNutrientsUrineRatios; // 0x25c
	TMap<UObject*, int32_t> UserDataRefCounter; // 0x548
};

struct FAimConstraintDescription {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FMovieSceneObjectPropertyTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FLiveLinkPongMessage {
	FString ProviderName; // 0x0
	FString MachineName; // 0x10
	FGuid PollRequest; // 0x20
	int32_t LiveLinkVersion; // 0x30
	double CreationPlatformTime; // 0x38
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FWaypoint {
	EAnimalWaypointType Type; // 0x0
	FVector Center; // 0x4
	float Radius; // 0x10
	int32_t ID; // 0x14
	int32_t AnimalsSpawnedNum; // 0x18
	TArray<TWeakObjectPtr<AAnimal2>> SpawnedAnimals; // 0x20
};

struct FRootMotionSource_MoveToDynamicForce {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FNavigationFilterFlags {
	char bNavFlag0 : 1; // 0x0
	char bNavFlag1 : 1; // 0x0
	char bNavFlag2 : 1; // 0x0
	char bNavFlag3 : 1; // 0x0
	char bNavFlag4 : 1; // 0x0
	char bNavFlag5 : 1; // 0x0
	char bNavFlag6 : 1; // 0x0
	char bNavFlag7 : 1; // 0x0
	char bNavFlag8 : 1; // 0x1
	char bNavFlag9 : 1; // 0x1
	char bNavFlag10 : 1; // 0x1
	char bNavFlag11 : 1; // 0x1
	char bNavFlag12 : 1; // 0x1
	char bNavFlag13 : 1; // 0x1
	char bNavFlag14 : 1; // 0x1
	char bNavFlag15 : 1; // 0x1
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FDcxVehicleWheelData {
	float Radius; // 0x0
	float Width; // 0x4
	float Mass; // 0x8
	float DampingRate; // 0xc
	float MaxBrakeTorque; // 0x10
	float MaxHandBrakeTorque; // 0x14
	float MaxSteer; // 0x18
	float ToeAngle; // 0x1c
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FConZBaseElementInteractionData {
	int64_t BaseElementId; // 0x0
	FVector BaseElementLocation; // 0x8
	float RepairValue; // 0x14
	int64_t InteractionTimestamp; // 0x18
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FFillItemWithReplenishableResourceInteractionData {
	FText InteractionCaptionOverride; // 0x0
	bool CanShowDrinkAsDefaultInteraction; // 0x18
	float BaseActionDuration; // 0x1c
	float ActionDurationPerAmountFilled; // 0x20
	float ResourceFillingExperiencePerAmount; // 0x24
	UAnimMontage* PrisonerFillingMontage; // 0x28
	UAkAudioEvent* StartItemNoiseAudioEvent; // 0x30
	UAkAudioEvent* StopItemNoiseAudioEvent; // 0x38
};

struct FRepRootMotionMontage {
	bool bIsActive; // 0x0
	UAnimMontage* AnimMontage; // 0x8
	float position; // 0x10
	FVector_NetQuantize100 Location; // 0x14
	FRotator Rotation; // 0x20
	UPrimitiveComponent* MovementBase; // 0x30
	FName MovementBaseBoneName; // 0x38
	bool bRelativePosition; // 0x40
	bool bRelativeRotation; // 0x41
	FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48
	FVector_NetQuantize10 Acceleration; // 0x80
	FVector_NetQuantize10 LinearVelocity; // 0x8c
};

struct FVehicleHitZoneData {
	UStaticMesh* HitMesh; // 0x0
	FName SocketName; // 0x10
	UMaterialInterface* HitZoneMaterial; // 0x18
	UMaterialInterface* DeactivatedHitZoneMaterial; // 0x20
	bool IsHitMeshAttached; // 0x2c
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FJoinabilitySettings {
	FName SessionName; // 0x0
	bool bPublicSearchable; // 0x8
	bool bAllowInvites; // 0x9
	bool bJoinViaPresence; // 0xa
	bool bJoinViaPresenceFriendsOnly; // 0xb
	int32_t MaxPlayers; // 0xc
	int32_t MaxPartySize; // 0x10
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FVDParticleAttachment {
	int32_t ParticleIndex; // 0x0
	bool AttachingToAnotherParticle; // 0x4
	bool SimulateTensionForces; // 0x5
	FVector Location; // 0x8
	bool IsRelative; // 0x14
	FComponentReference ComponentRef; // 0x18
	FName Socket; // 0x40
};

struct FBuoyancyData {
	TArray<FSphericalPontoon> Pontoons; // 0x0
	float BuoyancyCoefficient; // 0x10
	float BuoyancyDamp; // 0x14
	float BuoyancyDamp2; // 0x18
	float BuoyancyRampMinVelocity; // 0x1c
	float BuoyancyRampMaxVelocity; // 0x20
	float BuoyancyRampMax; // 0x24
	float MaxBuoyantForce; // 0x28
	float WaterShorePushFactor; // 0x2c
	float WaterVelocityStrength; // 0x30
	float MaxWaterForce; // 0x34
	float DragCoefficient; // 0x38
	float DragCoefficient2; // 0x3c
	float AngularDragCoefficient; // 0x40
	float MaxDragSpeed; // 0x44
	bool bApplyDragForcesInWater; // 0x48
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UMetaData* SubClass; // 0x8
	TSoftClassPtr<UObject> SoftClass; // 0x10
	UObject* Object; // 0x38
	TWeakObjectPtr<UMetaData> WeakObject; // 0x40
	TSoftObjectPtr<UMetaData> SoftObject; // 0x48
	FSoftClassPath ClassPath; // 0x70
	FSoftObjectPath ObjectPath; // 0x88
};

struct FWeaponMalfunctionData {
	bool UseCustomProbabilityCurve; // 0x0
	FRuntimeFloatCurve ProbabilityCurve; // 0x8
	UWeaponActionClearMalfunctionSequence* ClearMalfunctionSequence; // 0x90
	TArray<UWeaponActionClearMalfunctionSequence*> ClearMalfunctionSequences; // 0x98
};

struct FConZBaseElementData {
	int64_t ElementID; // 0x0
	int64_t OwnerPlayerId; // 0x8
	int64_t CreatorPrisonerId; // 0x10
	FString OwnerName; // 0x18
	FTransform Transform; // 0x30
	UObject* ElementClass; // 0x60
	float HealthPoints; // 0x68
	float Quality; // 0x6c
	char DoorElementStateFlags; // 0x70
	TArray<UObject*> DoorUpgrades; // 0x78
	EAccessLevel DoorAccessLevel; // 0x88
};

struct FAnimNode_BlendSpaceEvaluator {
	float NormalizedTime; // 0xe8
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FMovieSceneCameraShakeSectionTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FCompassSkillParametersPerSkillLevel {
	char CompassSkillLevel; // 0x0
};

struct FRBFTarget {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FSliderWithLabelAndNumberTextStyle {
	FSlateFontInfo Font; // 0x0
	FLinearColor ColorAndOpacity; // 0x58
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FAnimNode_TransitionPoseEvaluator {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FSentryPatrolPoint {
	FVector LocationRelativeToSentry; // 0x0
};

struct FMovieSceneParticleSectionTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FAreaResourceLockNetwork {
	FResourceNetworkGUID LockOwnerGUID; // 0x0
	FBox Area; // 0x4
};

struct FAnimNode_BlendListByEnum {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FClothesPartSet {
	TSet<EClothesPart> ClothesParts; // 0x0
};

struct FConZWeaponDescRow {
	float Damage; // 0x8
	float DamageInGameEvent; // 0xc
	float Energy; // 0x10
	float SharpnessSlash; // 0x14
	float SharpnessPierce; // 0x18
	ECharacterImpactSourceSoundCategory ImpactSoundCategory; // 0x1c
	UProjectileImpactEffects* ImpactEffects; // 0x20
};

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	TArray<UMaterialInterface*> OverrideMaterials; // 0x8
	FPerPlatformFloat GrassDensity; // 0x18
	bool bUseGrid; // 0x1c
	float PlacementJitter; // 0x20
	FPerPlatformInt StartCullDistance; // 0x24
	FPerPlatformInt EndCullDistance; // 0x28
	int32_t MinLOD; // 0x2c
	EGrassScaling Scaling; // 0x30
	FFloatInterval ScaleX; // 0x34
	FFloatInterval ScaleY; // 0x3c
	FFloatInterval ScaleZ; // 0x44
	bool RandomRotation; // 0x4c
	bool AlignToSurface; // 0x4d
	bool bUseLandscapeLightmap; // 0x4e
	FLightingChannels LightingChannels; // 0x4f
	bool bReceivesDecals; // 0x50
	bool bCastDynamicShadow; // 0x51
	bool bKeepInstanceBufferCPUCopy; // 0x52
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FSkeletalMeshLODInfo {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	FSkeletalMeshBuildSettings BuildSettings; // 0x18
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x2c
	TArray<FBoneReference> BonesToRemove; // 0x68
	TArray<FBoneReference> BonesToPrioritize; // 0x78
	float WeightOfPrioritization; // 0x88
	UAnimSequence* BakePose; // 0x90
	UAnimSequence* BakePoseOverride; // 0x98
	FString SourceImportFilename; // 0xa0
	ESkinCacheUsage SkinCacheUsage; // 0xb0
	char bHasBeenSimplified : 1; // 0xb1
	char bHasPerLODVertexColors : 1; // 0xb1
	char bAllowCPUAccess : 1; // 0xb1
	char bSupportUniformlyDistributedSampling : 1; // 0xb1
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FFoliageGeneralData {
	float CollisionBoundsScale; // 0x0
	FVector CollisionBoundsOffset; // 0x4
};

struct FHitReactBodyPartDataItem {
	UAnimMontage* MontageToPlay; // 0x0
	UAnimMontage* FollowupMontage; // 0x8
	float RegainControlDurationMultiplier; // 0x10
};

struct FNiagaraDataSetCompiledData {
	TArray<FNiagaraVariable> Variables; // 0x0
	TArray<FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10
	FNiagaraDataSetID ID; // 0x20
	uint32_t TotalFloatComponents; // 0x2c
	uint32_t TotalInt32Components; // 0x30
	uint32_t TotalHalfComponents; // 0x34
	char bRequiresPersistentIDs : 1; // 0x38
	ENiagaraSimTarget SimTarget; // 0x3c
};

struct FAerodynamicSurface {
	FName Name; // 0x0
	FTransform Transform; // 0x10
	float LiftSlope; // 0x40
	float SkinFriction; // 0x44
	float ZeroLiftAoA; // 0x48
	float StallAngleHigh; // 0x4c
	float StallAngleLow; // 0x50
	float Chord; // 0x54
	float Span; // 0x58
	float AspectRatio; // 0x5c
	float FlapFraction; // 0x60
	bool IsControlable; // 0x64
	float FlapAngle; // 0x68
	float FlapAngleSensitivity; // 0x6c
	float MaxFlapAngle; // 0x70
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x0
	int32_t PktLossMaxSize; // 0x4
	int32_t PktLossMinSize; // 0x8
	int32_t PktOrder; // 0xc
	int32_t PktDup; // 0x10
	int32_t PktLag; // 0x14
	int32_t PktLagVariance; // 0x18
	int32_t PktLagMin; // 0x1c
	int32_t PktLagMax; // 0x20
	int32_t PktIncomingLagMin; // 0x24
	int32_t PktIncomingLagMax; // 0x28
	int32_t PktIncomingLoss; // 0x2c
	int32_t PktJitter; // 0x30
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FVehicleThirdPersonWeaponTypeData {
	EWeaponType WeaponType; // 0x0
	bool alwaysIgnorePreMountAimOffsets; // 0x1
	FBasePoseAimOffsetPair IdlePoseAndAimOffset[0x2]; // 0x8
};

struct FVehicleImpactEffects {
	float HitImpulseThreshold; // 0x0
	UParticleSystem* ParticleSystem; // 0x8
	FVector ParticlesScale; // 0x10
	UAkAudioEvent* AudioEvent; // 0x20
	UMatineeCameraShake* CameraShake; // 0x28
	float CameraShakeScale; // 0x30
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FConZVehicleFlatTireWheelConfiguration {
	FDcxVehicleWheelData FlatTireWheelData; // 0x0
	UDcxVehicleTire* FlatTire; // 0x40
	UDcxVehicleTire* OriginalTire; // 0x48
};

struct FMeleeSkillParametersPerSkillLevel {
	FExperienceDependentFloat StartDelay; // 0x0
	FExperienceDependentFloat StartDelayPenaltyPerStrengthShortage; // 0x8
	FExperienceDependentFloat AnimationPlayRateModifier; // 0x10
	FExperienceDependentFloat AnimationPlayRatePenaltyPerStrengthShortage; // 0x18
	FExperienceDependentFloat RegainControlDurationModifier; // 0x20
	FExperienceDependentFloat StaminaDrain; // 0x28
	FExperienceDependentFloat StaminaDrainPenaltyPerStrengthShortage; // 0x30
	FExperienceDependentFloat StaminaRecoveryDelay; // 0x38
	FExperienceDependentFloat StaminaRecoveryDuration; // 0x40
	FExperienceDependentFloat StaminaInfluenceWindowMin; // 0x48
	FExperienceDependentFloat StaminaInfluenceWindowMax; // 0x50
	FExperienceDependentFloat StaminaInfluenceWindowLinearity; // 0x58
	FExperienceDependentFloat StartDelayWhenExhausted; // 0x60
	FExperienceDependentFloat AnimationPlayRateModifierWhenExhausted; // 0x68
	FExperienceDependentFloat RegainControlDurationModifierWhenExhausted; // 0x70
	FExperienceDependentFloat StaminaMultiplierPerExcessGearWeight; // 0x78
	FExperienceDependentFloat ComboCooldownDuration; // 0x80
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FConstraintDescription {
	bool bTranslation; // 0x0
	bool bRotation; // 0x1
	bool bScale; // 0x2
	bool bParent; // 0x3
	FFilterOptionPerAxis TranslationAxes; // 0x4
	FFilterOptionPerAxis RotationAxes; // 0x7
	FFilterOptionPerAxis ScaleAxes; // 0xa
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FSkeletalMeshOptimizationSettings {
	SkeletalMeshTerminationCriterion TerminationCriterion; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float NumOfVertPercentage; // 0x8
	uint32_t MaxNumOfTriangles; // 0xc
	uint32_t MaxNumOfVerts; // 0x10
	float MaxDeviationPercentage; // 0x14
	SkeletalMeshOptimizationType ReductionMethod; // 0x18
	SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x19
	SkeletalMeshOptimizationImportance TextureImportance; // 0x1a
	SkeletalMeshOptimizationImportance ShadingImportance; // 0x1b
	SkeletalMeshOptimizationImportance SkinningImportance; // 0x1c
	char bRemapMorphTargets : 1; // 0x1d
	char bRecalcNormals : 1; // 0x1d
	float WeldingThreshold; // 0x20
	float NormalsThreshold; // 0x24
	int32_t MaxBonesPerVertex; // 0x28
	char bEnforceBoneBoundaries : 1; // 0x2c
	float VolumeImportance; // 0x30
	char bLockEdges : 1; // 0x34
	char bLockColorBounaries : 1; // 0x34
	int32_t BaseLOD; // 0x38
};

struct FCharacterHeadImpactSoundData {
	TArray<ECharacterImpactSourceSoundCategory> ImpactSourceCategories; // 0x0
	TArray<ECharacterHeadImpactSoundCategory> ImpactTargetCategories; // 0x10
	FCharacterImpactSounds Sounds; // 0x20
};

struct FPrisonerMovementSettings_Ground_Prone_Walking {
	FPrisonerGroundMovementParameters Default; // 0x0
	FPrisonerGroundMovementParameters WeaponAiming; // 0xc
	FPrisonerGroundMovementParameters WeaponAimingDownTheSights; // 0x18
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	FMaterialProxySettings StaticMeshMaterialSettings; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x90
	int32_t LandscapeExportLOD; // 0x94
	FMaterialProxySettings LandscapeMaterialSettings; // 0x98
	bool bBakeFoliageToLandscape; // 0x120
	bool bBakeGrassToLandscape; // 0x121
	bool bGenerateMeshNormalMap; // 0x122
	bool bGenerateMeshMetallicMap; // 0x123
	bool bGenerateMeshRoughnessMap; // 0x124
	bool bGenerateMeshSpecularMap; // 0x125
	bool bGenerateLandscapeNormalMap; // 0x126
	bool bGenerateLandscapeMetallicMap; // 0x127
	bool bGenerateLandscapeRoughnessMap; // 0x128
	bool bGenerateLandscapeSpecularMap; // 0x129
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FMovieSceneCameraAnimSectionTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FGameplayTagTableRow {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FBatchedPoint {
	FVector position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FLandmassBrushEffectsList {
	FBrushEffectBlurring Blurring; // 0x0
	FBrushEffectCurlNoise CurlNoise; // 0x8
	FBrushEffectDisplacement Displacement; // 0x18
	FBrushEffectSmoothBlending SmoothBlending; // 0x40
	FBrushEffectTerracing Terracing; // 0x48
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FBuildPromotionImportWorkflowSettings {
	FEditorImportWorkflowDefinition Diffuse; // 0x0
	FEditorImportWorkflowDefinition Normal; // 0x20
	FEditorImportWorkflowDefinition StaticMesh; // 0x40
	FEditorImportWorkflowDefinition ReimportStaticMesh; // 0x60
	FEditorImportWorkflowDefinition BlendShapeMesh; // 0x80
	FEditorImportWorkflowDefinition MorphMesh; // 0xa0
	FEditorImportWorkflowDefinition SkeletalMesh; // 0xc0
	FEditorImportWorkflowDefinition Animation; // 0xe0
	FEditorImportWorkflowDefinition Sound; // 0x100
	FEditorImportWorkflowDefinition SurroundSound; // 0x120
	TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FPBCTT_FootAbrasions_SkillData {
	TArray<int32_t> NumUsesPerSeverityLevel; // 0x0
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FParticleSysParam {
	FName Name; // 0x0
	EParticleSysParamType ParamType; // 0x8
	float Scalar; // 0xc
	float Scalar_Low; // 0x10
	FVector Vector; // 0x14
	FVector Vector_Low; // 0x20
	FColor Color; // 0x2c
	AActor* Actor; // 0x30
	UMaterialInterface* Material; // 0x38
};

struct FSplineMeshInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FGameplayRules {
	bool AllowFirstperson; // 0x0
	bool AllowThirdperson; // 0x1
	bool AllowCrosshair; // 0x2
	bool AllowGlobalChat; // 0x3
	bool AllowLocalChat; // 0x4
	bool AllowSquadChat; // 0x5
	bool AllowMapScreen; // 0x6
	float TimeToRemainInGameAfterLeaveGameRequest; // 0x8
	float TimeToRemainInGameAfterLeaveGameRequestWhileCaptured; // 0xc
	bool LimitSquadMembers; // 0x10
	bool AllowComa; // 0x11
	bool AllowVoting; // 0x12
	bool AllowTraps; // 0x13
	bool HideKillNotification; // 0x14
	bool AllowKillClaiming; // 0x15
};

struct FCompilerNativizationOptions {
	FName PlatformName; // 0x0
	bool ServerOnlyPlatform; // 0x8
	bool ClientOnlyPlatform; // 0x9
	bool bExcludeMonolithicHeaders; // 0xa
	TArray<FName> ExcludedModules; // 0x10
	TSet<FSoftObjectPath> ExcludedAssets; // 0x20
	TArray<FString> ExcludedFolderPaths; // 0x70
};

struct FParticleBurst {
	int32_t count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FMovieScene3DTransformTemplateData {
	FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0
	FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0
	FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0
	FMovieSceneFloatChannel ManualWeight; // 0x5a0
	EMovieSceneBlendType BlendType; // 0x640
	FMovieSceneTransformMask Mask; // 0x644
	bool bUseQuaternionInterpolation; // 0x648
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FBuildingData {
	bool IsCleared; // 0x0
	TArray<FWindowMarkerModifier> WindowMarkerModifiers; // 0x8
	TArray<FFortificationData> Fortifications; // 0x18
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FBruisePatch {
	EBruiseLayer Layer; // 0x0
	TArray<EBruiseZone> AllowedZones; // 0x8
	int32_t Order; // 0x18
	UTexture2D* Texture; // 0x20
	FVector2D Offset; // 0x28
	bool Mute; // 0x30
};

struct FPrisonerAppearanceData {
	EHumanRace Race; // 0x0
	FGameplayTag MeshSet; // 0x4
	FGameplayTag MaterialSet; // 0xc
};

struct FPrisonerMaxMovementPaceVsSeverity {
	TArray<FPrisonerMaxMovementPaceVsSeverityKey> Keys; // 0x0
};

struct FInventoryItemComponentReplicatedPageData {
	TArray<FInventoryItemComponentElement> Elements; // 0x0
	int32_t Version; // 0x10
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FFloatCurve {
	FRichCurve FloatCurve; // 0x18
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FBlueprintInputAxisKeyDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FPrisonerActionDifficultyCurve {
	float _resting; // 0x0
	float _idle; // 0x4
	float _easy; // 0x8
	float _demanding; // 0xc
	float _veryDemanding; // 0x10
	float _extremelyDemanding; // 0x14
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FHyperlinkStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FTeleportRequest {
	TWeakObjectPtr<AActor> Subject; // 0x0
	FVector TargetLocation; // 0x8
	FRotator TargetRotation; // 0x14
	TWeakObjectPtr<UTeleportUserData> UserData; // 0x20
};

struct FBodyWeaponAnimation {
	UAnimMontage* Body; // 0x0
	UAnimMontage* Weapon; // 0x8
};

struct FMetabolismRadialAttributeProgressBarColor {
	FLinearColor PositiveColor; // 0x0
	FLinearColor NeutralColor; // 0x10
	FLinearColor NegativeColor; // 0x20
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FSynthKnobStyle {
	FSlateBrush LargeKnob; // 0x8
	FSlateBrush LargeKnobOverlay; // 0x90
	FSlateBrush MediumKnob; // 0x118
	FSlateBrush MediumKnobOverlay; // 0x1a0
	float MinValueAngle; // 0x228
	float MaxValueAngle; // 0x22c
	ESynthKnobSize KnobSize; // 0x230
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FDynamicTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FMovieSceneEventSectionData {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FSphericalPontoon {
	FName CenterSocket; // 0x0
	FVector RelativeLocation; // 0x8
	float Radius; // 0x14
	FVector LocalForce; // 0x18
	FVector CenterLocation; // 0x24
	FQuat SocketRotation; // 0x30
	FVector Offset; // 0x40
	float WaterHeight; // 0x50
	float WaterDepth; // 0x54
	float ImmersionDepth; // 0x58
	FVector WaterPlaneLocation; // 0x5c
	FVector WaterPlaneNormal; // 0x68
	FVector WaterSurfacePosition; // 0x74
	FVector WaterVelocity; // 0x80
	int32_t WaterBodyIndex; // 0x8c
	AWaterBody* CurrentWaterBody; // 0x138
};

struct FRawDistributionFloat {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FAquaticLifeSpawningVolumeDescription {
	UFishSpeciesPreset* FishSpeciesPreset; // 0x20
	UFishSpawningPreset* FishSpawningPreset; // 0x28
};

struct FCraftingPair {
	AItem* CraftedItem; // 0x0
	AItem* CraftingItem; // 0x8
	int32_t CraftedItemCount; // 0x10
	TArray<AItem*> BonusItems; // 0x18
};

struct FMeleeAttackCapsule {
	TWeakObjectPtr<AActor> AttachParent; // 0x0
	FGameplayTag Attachment; // 0x8
	FTransform RelativeTransform; // 0x10
	float UnscaledRadius; // 0x40
	float UnscaledHalfHeight; // 0x44
	FMeleeWeaponDesc WeaponDesc; // 0x48
};

struct FNiagaraSystemScalabilityOverride {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FWeaponStateSyncData {
	int32_t ZeroRange; // 0x0
	TArray<FAmmunitionData> LoadedAmmoData; // 0x8
	TArray<FAmmunitionData> InternalMagazineAmmoData; // 0x18
	UObject* LoadedAmmunitionItemClass; // 0x28
	AProjectile* LoadedProjectileClass; // 0x30
	EWeaponFiringMode FiringMode; // 0x38
	int32_t malfunction; // 0x3c
	bool IsChamberOpened; // 0x40
};

struct FChoppingTool2 {
	TArray<UBaseItemTag*> ItemTags; // 0x0
	UBaseItemTag* ItemTagClass; // 0x10
	TSoftClassPtr<UObject> ItemClass; // 0x18
	bool OverrideChoppingTime; // 0x40
	float ChoppingTimeMultiplier; // 0x44
	bool OverrideIngredientsQuantity; // 0x48
	int32_t IngredientsQuantityBonus; // 0x4c
};

struct FSplineDescription {
	USplineComponent* SplineComponent; // 0x0
	TArray<USplineMeshComponent*> SplineMeshComponents; // 0x8
	UStaticMeshComponent* SplineStartConnector; // 0x18
	UStaticMeshComponent* SplineEndConnector; // 0x20
};

struct FCraftingPart {
	UObject* ItemClass; // 0x0
};

struct FDatasmithMeshBuildSettingsTemplate {
	char bUseMikkTSpace : 1; // 0x0
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x0
	char bGenerateLightmapUVs : 1; // 0x0
	int32_t MinLightmapResolution; // 0x4
	int32_t SrcLightmapIndex; // 0x8
	int32_t DstLightmapIndex; // 0xc
};

struct FSubmixEffectMultibandCompressorSettings {
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	bool bLinkChannels; // 0x8
	bool bAnalogMode; // 0x9
	bool bFourPole; // 0xa
	TArray<FDynamicsBandSettings> Bands; // 0x10
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x0
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bComputeWeightedNormals : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	char bBuildReversedIndexBuffer : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x1
	char bGenerateLightmapUVs : 1; // 0x1
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1
	char bSupportFaceRemap : 1; // 0x1
	int32_t MinLightmapResolution; // 0x4
	int32_t SrcLightmapIndex; // 0x8
	int32_t DstLightmapIndex; // 0xc
	float BuildScale; // 0x10
	FVector BuildScale3D; // 0x14
	float DistanceFieldResolutionScale; // 0x20
	UStaticMesh* DistanceFieldReplacementMesh; // 0x28
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FWeaponMalfunctionChances {
	FFloatInterval Value[0x7]; // 0x0
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FCameraFocusSettings {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
	FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8
	char bDrawDebugFocusPlane : 1; // 0x40
	FColor DebugFocusPlaneColor; // 0x44
	char bSmoothFocusChanges : 1; // 0x48
	float FocusSmoothingInterpSpeed; // 0x4c
	float FocusOffset; // 0x50
};

struct FPaintedVertex {
	FVector position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FProjectileImpulseMultiplier {
	AActor* ActorClass; // 0x0
	float Multiplier; // 0x8
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FCharacterSpawnerMarker {
	FTransform Transform; // 0x0
	FCharacterSpawnerDataBasedOnPreset Spawner; // 0x30
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FNiagaraVMExecutableDataId {
	FGuid CompilerVersionID; // 0x0
	ENiagaraScriptUsage ScriptUsageType; // 0x10
	FGuid ScriptUsageTypeID; // 0x14
	char bUsesRapidIterationParams : 1; // 0x24
	char bInterpolatedSpawn : 1; // 0x24
	char bRequiresPersistentIDs : 1; // 0x24
	FGuid BaseScriptID; // 0x28
	FNiagaraCompileHash BaseScriptCompileHash; // 0x38
};

struct FCheckBoxStyle {
	ESlateCheckBoxType CheckBoxType; // 0x8
	FSlateBrush UncheckedImage; // 0x10
	FSlateBrush UncheckedHoveredImage; // 0x98
	FSlateBrush UncheckedPressedImage; // 0x120
	FSlateBrush CheckedImage; // 0x1a8
	FSlateBrush CheckedHoveredImage; // 0x230
	FSlateBrush CheckedPressedImage; // 0x2b8
	FSlateBrush UndeterminedImage; // 0x340
	FSlateBrush UndeterminedHoveredImage; // 0x3c8
	FSlateBrush UndeterminedPressedImage; // 0x450
	FMargin Padding; // 0x4d8
	FSlateColor ForegroundColor; // 0x4e8
	FSlateColor BorderBackgroundColor; // 0x510
	FSlateSound CheckedSlateSound; // 0x538
	FSlateSound UncheckedSlateSound; // 0x550
	FSlateSound HoveredSlateSound; // 0x568
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FDynamicsBandSettings {
	float CrossoverTopFrequency; // 0x0
	float AttackTimeMsec; // 0x4
	float ReleaseTimeMsec; // 0x8
	float ThresholdDb; // 0xc
	float Ratio; // 0x10
	float KneeBandwidthDb; // 0x14
	float InputGainDb; // 0x18
	float OutputGainDb; // 0x1c
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FCraftingRecipeCraftingItem {
	AItem* ItemClass; // 0x0
	int32_t Quantity; // 0x8
	bool isOptional; // 0xc
};

struct FAnimNode_LayeredBoneBlend {
	FPoseLink BasePose; // 0x10
	TArray<FPoseLink> BlendPoses; // 0x20
	TArray<FInputBlendPose> LayerSetup; // 0x30
	TArray<float> BlendWeights; // 0x40
	bool bMeshSpaceRotationBlend; // 0x50
	bool bMeshSpaceScaleBlend; // 0x51
	ECurveBlendOption CurveBlendOption; // 0x52
	bool bBlendRootMotionBasedOnRootBone; // 0x53
	int32_t LODThreshold; // 0x58
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60
	FGuid SkeletonGuid; // 0x70
	FGuid VirtualBoneGuid; // 0x80
};

struct FHeatSource {
	FVector Location; // 0x0
	FHeatSourceParameters parameters; // 0x10
	float FuelDuration; // 0x38
	float FuelCapacity; // 0x3c
	int32_t TimesUpdatedWithoutMoving; // 0x40
};

struct FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FButtonStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x90
	FSlateBrush Pressed; // 0x118
	FSlateBrush Disabled; // 0x1a0
	FMargin NormalPadding; // 0x228
	FMargin PressedPadding; // 0x238
	FSlateSound PressedSlateSound; // 0x248
	FSlateSound HoveredSlateSound; // 0x260
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FAIDataProviderTypedValue {
	UObject* PropertyType; // 0x20
};

struct FFoliageEffectsData {
	UAkAudioEvent* StartMovingThroughFoliageAudioEvent; // 0x0
	UAkAudioEvent* StopMovingThroughFoliageAudioEvent; // 0x8
	UAkAudioEvent* OneShotMovingThroughFoliageAudioEvent; // 0x10
};

struct FAnimNode_ModifyBone {
	FBoneReference BoneToModify; // 0xc8
	FVector Translation; // 0xd8
	FRotator Rotation; // 0xe4
	FVector Scale; // 0xf0
	EBoneModificationMode TranslationMode; // 0xfc
	EBoneModificationMode RotationMode; // 0xfd
	EBoneModificationMode ScaleMode; // 0xfe
	EBoneControlSpace TranslationSpace; // 0xff
	EBoneControlSpace RotationSpace; // 0x100
	EBoneControlSpace ScaleSpace; // 0x101
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FGaussianSumBloomSettings {
	float Intensity; // 0x0
	float Threshold; // 0x4
	float SizeScale; // 0x8
	float Filter1Size; // 0xc
	float Filter2Size; // 0x10
	float Filter3Size; // 0x14
	float Filter4Size; // 0x18
	float Filter5Size; // 0x1c
	float Filter6Size; // 0x20
	FLinearColor Filter1Tint; // 0x24
	FLinearColor Filter2Tint; // 0x34
	FLinearColor Filter3Tint; // 0x44
	FLinearColor Filter4Tint; // 0x54
	FLinearColor Filter5Tint; // 0x64
	FLinearColor Filter6Tint; // 0x74
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FObjectiveItem {
	AItem* ItemClass; // 0x0
};

struct FPhysicalSurfaceData {
	float DirtinessFactor; // 0x0
	float LandingImpactVelocityModifier; // 0x4
	float NoiseLoudnessModifier; // 0x8
	float FootstepEnhancerChance; // 0xc
	float FootwearDamageMultiplier; // 0x10
	float FootAbrasionsMultiplier; // 0x14
};

struct FConZSliderStyle {
	FProgressBarStyle Slider; // 0x0
	FSlateBrush Thumb; // 0x1a0
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	int32_t Valid; // 0x24
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
};

struct FInteractionStruct {
	EInteractionType interactionType; // 0x0
	FString InteractionCaption; // 0x8
};

struct FFollicleMaskOptions {
	UGroomAsset* Groom; // 0x0
	EFollicleMaskChannel Channel; // 0x8
};

struct FInventoryContainerSelectionRepData {
	TArray<UObject*> Items; // 0x0
	TArray<FInventoryItemPositionPair> ItemsData; // 0x10
	UObject* Parent; // 0x20
};

struct FTradeOutpostManagerDescription {
	TArray<ATradePost*> _assignedTradePosts; // 0x50
	TArray<ATradeOutpostBuilding*> _otherAssignedTradeOutpostBuildings; // 0x60
};

struct FClearMalfunctionData {
	bool ShouldClearMalfunction; // 0x0
	FBodyWeaponAnimation Animations; // 0x8
};

struct FWeaponAttachmentAnimations {
	FBodyWeaponAnimation Add; // 0x0
	FBodyWeaponAnimation Remove; // 0x10
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
	FVector LastOutOfRangeLocationCheck; // 0x14
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FSearchBoxStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x800
	FSlateBrush UpArrowImage; // 0x858
	FSlateBrush DownArrowImage; // 0x8e0
	FSlateBrush GlassImage; // 0x968
	FSlateBrush ClearImage; // 0x9f0
	FMargin ImagePadding; // 0xa78
	bool bLeftAlignButtons; // 0xa88
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FCorpsePoseData {
	FTransform Transform; // 0x0
	FVector LinearVelocity; // 0x30
	FVector AngularVelocity; // 0x3c
	TArray<FTransform> Transforms; // 0x48
	TArray<FVector> LinearVelocities; // 0x58
	TArray<FVector> AngularVelocities; // 0x68
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FPhysicalSurfaceEffectsData {
	FPhysicalSurfaceVehicleEffectsData Vehicle; // 0x0
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FSceneComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FAnimNode_UseCachedPose {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FWeaponMalfunctionProbability {
	EWeaponMalfunction malfunction; // 0x0
	float Probability; // 0x4
};

struct FCollectionVectorParameter {
	FLinearColor DefaultValue; // 0x18
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FBoatParametersPerMovementPace {
	bool IsValid; // 0x0
	float BaseMaxForwardSpeed; // 0x4
	bool CanReverse; // 0x8
	float BaseMaxReverseSpeed; // 0xc
	float MinPrisonerStrength; // 0x10
};

struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x0
	bool bBypass; // 0x4
	bool bMixInputChannelFormatToImpulseResponseFormat; // 0x5
	bool bMixReverbOutputToOutputChannelFormat; // 0x6
	float SurroundRearChannelBleedDb; // 0x8
	bool bInvertRearChannelBleedPhase; // 0xc
	bool bSurroundRearChannelFlip; // 0xd
	float SurroundRearChannelBleedAmount; // 0x10
	UAudioImpulseResponse* ImpulseResponse; // 0x18
	bool AllowHArdwareAcceleration; // 0x20
};

struct FFishingData {
	FVector Location; // 0x0
	float HookDepth; // 0xc
};

struct FSoundSubmixSendInfo {
	ESendLevelControlMethod SendLevelControlMethod; // 0x0
	ESubmixSendStage SendStage; // 0x1
	USoundSubmixBase* SoundSubmix; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FTradeablesPerCategoryHelperStruct {
	TArray<UObject*> TradeablesClasses; // 0x0
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FHairInterpolationSettings {
	bool bOverrideGuides; // 0x0
	float HairToGuideDensity; // 0x4
	EHairInterpolationQuality InterpolationQuality; // 0x8
	EHairInterpolationWeight InterpolationDistance; // 0x9
	bool bRandomizeGuide; // 0xa
	bool bUseUniqueGuide; // 0xb
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FWidgetDisplayInfo {
	EWidgetDisplayInfoType DisplayType; // 0x0
	int32_t First; // 0x4
	int32_t Second; // 0x8
};

struct FGroomConversionSettings {
	FVector Rotation; // 0x0
	FVector Scale; // 0xc
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18
	FFrameRate TickResolution; // 0x38
	FMovieSceneSequenceID DeterministicSequenceID; // 0x40
	FMovieSceneFrameRange PlayRange; // 0x44
	FMovieSceneFrameRange FullPlayRange; // 0x54
	FMovieSceneFrameRange UnwarpedPlayRange; // 0x64
	FMovieSceneFrameRange PreRollRange; // 0x74
	FMovieSceneFrameRange PostRollRange; // 0x84
	int16_t HierarchicalBias; // 0x94
	bool bHasHierarchicalEasing; // 0x96
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98
	FGuid SubSectionSignature; // 0xb8
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0xc8
};

struct FConsumableDigestionHandlerSave {
	TArray<char> Data; // 0x0
};

struct FConZSquadPendingMember {
	FDbIntegerId UserProfileId; // 0x0
};

struct FTimeline {
	ETimelineLengthMode LengthMode; // 0x0
	char bLooping : 1; // 0x1
	char bReversePlayback : 1; // 0x1
	char bPlaying : 1; // 0x1
	float Length; // 0x4
	float PlayRate; // 0x8
	float position; // 0xc
	TArray<FTimelineEventEntry> Events; // 0x10
	TArray<FTimelineVectorTrack> InterpVectors; // 0x20
	TArray<FTimelineFloatTrack> InterpFloats; // 0x30
	TArray<FTimelineLinearColorTrack> InterpLinearColors; // 0x40
	FDelegate TimelinePostUpdateFunc; // 0x50
	FDelegate TimelineFinishedFunc; // 0x60
	TWeakObjectPtr<UObject> PropertySetObject; // 0x70
	FName DirectionPropertyName; // 0x78
};

struct FHairGroupsProceduralCards {
	FHairCardsClusterSettings ClusterSettings; // 0x0
	FHairCardsGeometrySettings GeometrySettings; // 0x8
	FHairCardsTextureSettings TextureSettings; // 0x24
	int32_t Version; // 0x34
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FHairGroupsInterpolation {
	FHairDecimationSettings DecimationSettings; // 0x0
	FHairInterpolationSettings InterpolationSettings; // 0x8
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FAttachmentSocketOffset {
	FName BoneName; // 0x0
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FRoomDefinition {
	ADoor* RoomDoor; // 0x0
	UStaticMeshComponent* Locker; // 0x8
	AKillBoxC4SpawnPoint* C4; // 0x10
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FNiagaraScriptExecutionParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FAnimationStateEntry {
	char State; // 0x0
	TArray<FAnimationSetup> AnimationSetups; // 0x8
	bool bOnDemand; // 0x18
	bool bAdditive; // 0x19
	float BlendTime; // 0x1c
	bool bReturnToPreviousState; // 0x20
	bool bSetNextState; // 0x21
	char nextState; // 0x22
	FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24
	float WiggleTimePercentage; // 0x28
	bool bRequiresCurves; // 0x2c
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FChildActorComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FVolumeControlStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FCaughtFishData {
	EFishSpecies FishSpecies; // 0x0
	int32_t Amount; // 0x4
};

struct FPrimitiveComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FMovieSceneFadeSectionTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FTTPropertyTrack {
	FName PropertyName; // 0x18
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FMessageStruct {
	FText Text_10_E9E7E3B9492DF52F5FE99099E8ACBD80; // 0x0
	float Duration_14_E65E34DB404030BF6D843397482DAF6D; // 0x18
	FLinearColor Color_13_BF56F4D140AF7733F748D6AAF4838F3B; // 0x1c
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FFortificationData {
	int32_t MarkerIndex; // 0x0
	UObject* FortificationClass; // 0x8
	FDbIntegerId OwnerUserProfileId; // 0x10
	float health; // 0x18
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FConZFontRow {
	FSlateFontInfo Font; // 0x8
	FString Description; // 0x60
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FPrisonerAirMovementParameters {
	float TerminalVelocity; // 0x0
	float LateralMaxSpeed; // 0x4
	float LateralDrag; // 0x8
	float DesiredPitch; // 0xc
	float YawRotationRateFactor; // 0x10
	float ControlChangeSpeed; // 0x14
	float DragIntensity; // 0x18
};

struct FDamageMultipliers {
	AActor* DamageCauserClass; // 0x0
	TArray<FMultiplierByClass> DamageMultipliers; // 0x8
};

struct FHairGroupDesc {
	int32_t HairCount; // 0x0
	int32_t GuideCount; // 0x4
	float hairLength; // 0x8
	float HairWidth; // 0xc
	bool HairWidth_Override; // 0x10
	float HairRootScale; // 0x14
	bool HairRootScale_Override; // 0x18
	float HairTipScale; // 0x1c
	bool HairTipScale_Override; // 0x20
	float HairClipLength; // 0x24
	bool HairClipLength_Override; // 0x28
	float HairShadowDensity; // 0x2c
	bool HairShadowDensity_Override; // 0x30
	float HairRaytracingRadiusScale; // 0x34
	bool HairRaytracingRadiusScale_Override; // 0x38
	bool bUseHairRaytracingGeometry; // 0x39
	bool bUseHairRaytracingGeometry_Override; // 0x3a
	float LODBias; // 0x3c
	bool bUseStableRasterization; // 0x40
	bool bUseStableRasterization_Override; // 0x41
	bool bScatterSceneLighting; // 0x42
	bool bScatterSceneLighting_Override; // 0x43
	bool bSupportVoxelization; // 0x44
	bool bSupportVoxelization_Override; // 0x45
	int32_t LODForcedIndex; // 0x48
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FRecordedFrame {
	TArray<FTransform> Transforms; // 0x0
	TArray<int32_t> TransformIndices; // 0x10
	TArray<int32_t> PreviousTransformIndices; // 0x20
	TArray<bool> DisabledFlags; // 0x30
	TArray<FSolverCollisionData> Collisions; // 0x40
	TArray<FSolverBreakingData> Breakings; // 0x50
	TSet<FSolverTrailingData> Trailings; // 0x60
	float Timestamp; // 0xb0
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	bool bEnableImpactDamage; // 0x8
	float ImpactDamage; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
	bool bCustomImpactResistance; // 0x14
	float ImpactResistance; // 0x18
};

struct FInputScaleBiasClamp {
	bool bMapRange; // 0x0
	bool bClampResult; // 0x1
	bool bInterpResult; // 0x2
	FInputRange InRange; // 0x4
	FInputRange OutRange; // 0xc
	float Scale; // 0x14
	float Bias; // 0x18
	float ClampMin; // 0x1c
	float ClampMax; // 0x20
	float InterpSpeedIncreasing; // 0x24
	float InterpSpeedDecreasing; // 0x28
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FWeaponMalfunctionProbabilityCurves {
	FRuntimeFloatCurve ProbabilityCurve[0x7]; // 0x0
};

struct FCharacterActionAck {
	int32_t ActionId; // 0x0
	int32_t SubactionIndex; // 0x4
	ECharacterActionAckType Type; // 0x8
	ECharacterActionEndState EndState; // 0x9
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FSplinePoint {
	float InputKey; // 0x0
	FVector position; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	FRotator Rotation; // 0x28
	FVector Scale; // 0x34
	ESplinePointType Type; // 0x40
};

struct FAnimNode_BlendSpacePlayer {
	float X; // 0x38
	float Y; // 0x3c
	float Z; // 0x40
	float PlayRate; // 0x44
	bool bLoop; // 0x48
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x49
	float StartPosition; // 0x4c
	UBlendSpaceBase* BlendSpace; // 0x50
	UBlendSpaceBase* PreviousBlendSpace; // 0xe0
};

struct FDrivingSkillEngineStallingParameters {
	float Chance; // 0x0
	float MinDuration; // 0x4
	float MaxDuration; // 0x8
	float StopEngineChance; // 0xc
	UCurveFloat* ThrottleCurve; // 0x10
	float ThrottleCurveFrequencyMultiplier; // 0x18
	UCurveFloat* BrakeCurve; // 0x20
	float BrakeCurveFrequencyMultiplier; // 0x28
	float ForceMagnitudeScale; // 0x2c
	UCurveFloat* ForceMagnitudeScaleCurve; // 0x30
	float ForceMagnitudeScaleCurveFrequencyMultiplier; // 0x38
	float ForceDirectionRandomizationAngle; // 0x3c
};

struct FMovieSceneVectorKeyStruct {
	FVector Vector; // 0x28
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FLandingEffectDataPerPhysicalSurface {
	FLandingEffectDataPerSeverity Light; // 0x0
	FLandingEffectDataPerSeverity Medium; // 0x10
	FLandingEffectDataPerSeverity Heavy; // 0x20
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FDcxGear {
	int32_t GearNum; // 0x0
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FObjectiveDataGroup {
	TArray<TSoftClassPtr<UObject>> RewardItems; // 0x0
	float RewardFamePoints; // 0x10
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FEditableTextStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FCrowdAvoidanceConfig {
	float VelocityBias; // 0x0
	float DesiredVelocityWeight; // 0x4
	float CurrentVelocityWeight; // 0x8
	float SideBiasWeight; // 0xc
	float ImpactTimeWeight; // 0x10
	float ImpactTimeRange; // 0x14
	char CustomPatternIdx; // 0x18
	char AdaptiveDivisions; // 0x19
	char AdaptiveRings; // 0x1a
	char AdaptiveDepth; // 0x1b
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString desc; // 0x10
};

struct FWeaponSpreadItem {
	float Idle; // 0x0
	float Moving; // 0x4
	float SpeedTarget; // 0x8
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FMeleeSkillDodge {
	EDodgeDirectionType DodgeDirectionType; // 0x0
	UAnimMontage* Montage; // 0x8
	float RegainControlDurationMultiplier; // 0x10
};

struct FPhysicsConvexData {
	int32_t NumVertices; // 0x0
	int32_t NumFaces; // 0x4
	FKShapeElem Element; // 0x8
};

struct FItemFirstPersonUpperBodyAnimationsData {
	UAnimSequenceBase* StandIdle; // 0x0
	UBlendSpace1D* StandWalk; // 0x8
	UBlendSpace1D* StandWalkLimping; // 0x10
	UBlendSpace1D* StandJog; // 0x18
	UBlendSpace1D* StandJogLimping; // 0x20
	UAnimSequenceBase* StandRun; // 0x28
	UAnimSequenceBase* CrouchIdle; // 0x30
	UBlendSpace1D* CrouchWalk; // 0x38
	UBlendSpace1D* CrouchWalkLimping; // 0x40
	UAnimSequenceBase* ProneIdle; // 0x48
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FSkillEventWeaponClearedMalfunction {
	EWeaponMalfunction malfunction; // 0x1
};

struct FWindowStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x280
	FButtonStyle RestoreButtonStyle; // 0x4f8
	FButtonStyle CloseButtonStyle; // 0x770
	FTextBlockStyle TitleTextStyle; // 0x9e8
	FSlateBrush ActiveTitleBrush; // 0xc58
	FSlateBrush InactiveTitleBrush; // 0xce0
	FSlateBrush FlashTitleBrush; // 0xd68
	FSlateColor BackgroundColor; // 0xdf0
	FSlateBrush OutlineBrush; // 0xe18
	FSlateColor OutlineColor; // 0xea0
	FSlateBrush BorderBrush; // 0xec8
	FSlateBrush BackgroundBrush; // 0xf50
	FSlateBrush ChildBackgroundBrush; // 0xfd8
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FBlueprintInputKeyDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FSplineCurves {
	FInterpCurveVector position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FMovieSceneCameraShakeSourceTriggerChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FBlueprintInputActionDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FCharacterAndItemAnimation {
	UAnimMontage* CharacterMontage; // 0x0
	UAnimMontage* ItemMontage; // 0x8
};

struct FInteractionQueryParameters {
	FVector InteractionLocation; // 0x0
	UPrimitiveComponent* Component; // 0x10
	bool IsInDroneMode; // 0x18
};

struct FSpawnerConfiguration {
	UItemSpawnerPreset* Spawner; // 0x0
	int32_t MinimumItemsCount; // 0x8
	int32_t MaximumItemsCount; // 0xc
};

struct FCraftingItem {
	FString Description; // 0x0
	TArray<FPossibleItem> PossibleItems; // 0x10
	UAkAudioEvent* FillSound; // 0x20
};

struct FAnimNode_SplineIK {
	FBoneReference StartBone; // 0xc8
	FBoneReference EndBone; // 0xd8
	ESplineBoneAxis BoneAxis; // 0xe8
	bool bAutoCalculateSpline; // 0xe9
	int32_t PointCount; // 0xec
	TArray<FTransform> ControlPoints; // 0xf0
	float Roll; // 0x100
	float TwistStart; // 0x104
	float TwistEnd; // 0x108
	FAlphaBlend TwistBlend; // 0x110
	float Stretch; // 0x140
	float Offset; // 0x144
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FEditableTextBoxStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x90
	FSlateBrush BackgroundImageFocused; // 0x118
	FSlateBrush BackgroundImageReadOnly; // 0x1a0
	FMargin Padding; // 0x228
	FSlateFontInfo Font; // 0x238
	FSlateColor ForegroundColor; // 0x290
	FSlateColor BackgroundColor; // 0x2b8
	FSlateColor ReadOnlyForegroundColor; // 0x2e0
	FMargin HScrollBarPadding; // 0x308
	FMargin VScrollBarPadding; // 0x318
	FScrollBarStyle ScrollBarStyle; // 0x328
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FItemSpawningSettings {
	bool UseQuadTreeToDetermineRelevantSpawnerGroups; // 0x0
	float RelevantSpawnerGroupsUpdateInterval; // 0x4
	float MinPlayerLocationDeltaToUpdateRelevantSpawnerGroups; // 0x8
	float SpawnerGroupsCullDistance; // 0xc
	float SpawnerGroupsExpirationTimeInMinutes; // 0x10
	float ExamineSpawnerExpirationTimeInMinutes; // 0x14
	float SpawnerTasksProcessingInterval; // 0x18
	float SpawnerTasksProcessingBudgetInMilliseconds; // 0x1c
	int32_t MaxNumberOfSpawnerTasksPerUpdate; // 0x20
	bool ShouldDestroySpawnedItemsIfNoPlayersAround; // 0x24
	float RarityRatio; // 0x28
	float SpawnerProbabilityMultiplier; // 0x2c
	float ExamineSpawnerProbabilityMultiplier; // 0x30
	float ItemHealthMultiplierWhenUnderwater; // 0x34
	FString SaveFileName; // 0x38
	bool DisableSerialization; // 0x48
	bool IgnoreSpawnerProbability; // 0x49
	bool IgnoreItemLimit; // 0x4a
	bool IgnoreItemZone; // 0x4b
	bool IgnoreItemRarity; // 0x4c
	bool DebugDrawItemSpawnTransforms; // 0x4d
	float DebugDrawItemSpawnTransformsDuration; // 0x50
};

struct FEnduranceSkillParametersPerSkillLevel {
	FExperienceDependentFloat EnergyConsumptionMultiplier; // 0x0
	FExperienceDependentFloat WaterConsumptionMultiplier; // 0x8
	FExperienceDependentFloat StaminaRecoveryMultiplier; // 0x10
};

struct FExamineItemSpawnerData {
	int32_t MinQuantity; // 0x0
	int32_t MaxQuantity; // 0x4
	bool AllowDuplicates; // 0x8
	FItemSpawnerDataBasedOnPreset Spawner; // 0x10
	TArray<FExamineItemSpawnerConstraint_MaxOccurrencesPerSpawnTypes> MaxOccurrencesPerSpawnTypes; // 0x98
	float ExpirationTime; // 0xa8
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FAnimNode_ApplyAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float Alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int32_t LODThreshold; // 0x3c
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
	EAnimAlphaInputType AlphaInputType; // 0xc4
	bool bAlphaBoolEnabled; // 0xc5
};

struct FInteractionData {
	bool ModifierPressed; // 0x0
	int32_t IntegerData; // 0x4
	UObject* PointerData; // 0x8
	bool BoolData; // 0x10
	FText TextData; // 0x18
	FVector InteractionLocation; // 0x30
	FVector VectorData; // 0x3c
};

struct FReplenishableResourceDescription {
	UGameResourceType* Type; // 0x8
	FGameplayTagContainer InSocketTypes; // 0x10
	FGameplayTagContainer OutSocketTypes; // 0x30
	bool IsReplenishedPeriodically; // 0x50
	FPeriodicallyReplenishedResourceDescription PeriodicReplenishment; // 0x54
	FProximityReplenishedResourceDescription ProximityReplenishment; // 0x64
	float InitialAmount; // 0x74
	float MaxAmount; // 0x78
	float ReplenishInterval; // 0x7c
	float ReplenishAmount; // 0x80
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FEconomyManagerRequestResponseData {
	UObject* TradeableClass; // 0x0
};

struct FRigidBodyErrorCorrection {
	float PingExtrapolation; // 0x0
	float PingLimit; // 0x4
	float ErrorPerLinearDifference; // 0x8
	float ErrorPerAngularDifference; // 0xc
	float MaxRestoredStateError; // 0x10
	float MaxLinearHardSnapDistance; // 0x14
	float PositionLerp; // 0x18
	float AngleLerp; // 0x1c
	float LinearVelocityCoefficient; // 0x20
	float AngularVelocityCoefficient; // 0x24
	float ErrorAccumulationSeconds; // 0x28
	float ErrorAccumulationDistanceSq; // 0x2c
	float ErrorAccumulationSimilarity; // 0x30
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FAnimalData {
	AAnimal2* AnimalClass; // 0x0
	TArray<AAnimal2*> AliveAnimals; // 0x8
	TArray<ACorpse*> DeadAnimals; // 0x18
};

struct FAnimNode_Slot {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FAnimNode_Inertialization {
	FPoseLink Source; // 0x10
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FSafeName {
	FString Internal; // 0x0
	FString Base; // 0x10
	FString Shift; // 0x20
	char Flag; // 0x30
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FSourceEffectChorusSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
	FSoundModulationDestinationSettings DepthModulation; // 0x18
	FSoundModulationDestinationSettings FrequencyModulation; // 0x28
	FSoundModulationDestinationSettings FeedbackModulation; // 0x38
	FSoundModulationDestinationSettings WetModulation; // 0x48
	FSoundModulationDestinationSettings DryModulation; // 0x58
	FSoundModulationDestinationSettings SpreadModulation; // 0x68
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
};

struct FProjectileData {
	FText Caption; // 0x0
	float Caliber; // 0x18
	float Weight; // 0x1c
	float MuzzleVelocity; // 0x20
	float BallisticCoefficient; // 0x24
	EBallisticDragModel BallisticDragModel; // 0x28
	float InitialDamage; // 0x2c
	float InitialDamageInGameEvent; // 0x30
	float PenetrationFactor; // 0x34
	float GlancingAngle; // 0x38
	bool AllowGlanceOrForceBounce; // 0x3c
	float BounceAngle; // 0x40
	float ArmorPiercingFactor; // 0x44
	bool CanCauseHeadExplosion; // 0x48
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FAkMidiCc {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FVectorCurve {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FPrisonerCommonData_ResponseIdles {
	UPrisonerResponseIdle* DirtyAfterProne; // 0x0
};

struct FComboBoxStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FCollectionScalarParameter {
	float DefaultValue; // 0x18
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FParticleCollisionDecalData {
	UMaterialInterface* Decal; // 0x0
	float MinSize; // 0x8
	float MaxSize; // 0xc
	float MinLifetime; // 0x10
	float MaxLifetime; // 0x14
};

struct FWaterSplineCurveDefaults {
	float DefaultDepth; // 0x0
	float DefaultWidth; // 0x4
	float DefaultVelocity; // 0x8
	float DefaultAudioIntensity; // 0xc
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FPrisonerViewInfo {
	float WeaponFOV; // 0x5e0
	FVector WeaponFoveationOffset; // 0x5e4
	float MinViewYaw; // 0x5f0
	float MaxViewYaw; // 0x5f4
	float MinViewPitch; // 0x5f8
	float MaxViewPitch; // 0x5fc
};

struct FVehicleMaterialParameterDescription {
	FName ParameterName; // 0x0
	float MinValue; // 0x8
	float MaxValue; // 0xc
};

struct FReachableMountSlot {
	int32_t SlotIndex; // 0x0
	UAnimMontage* TransitionMontage; // 0x8
	float TransitionTimeWithoutMontage; // 0x10
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FLadderInfo {
	FTransform Transform; // 0x0
	FTransform TransformInverse; // 0x30
	FTransform Edge; // 0x60
	FVector CapsuleBias; // 0x90
	float StepHeight; // 0x9c
	float StepWidth; // 0xa0
	bool HasEdge; // 0xa4
	bool IsNarrow; // 0xa5
	EPhysicalSurface PhysicalSurfaceForSounds; // 0xa6
	int32_t NumberOfSteps; // 0xa8
	int32_t HitStepIndex; // 0xac
};

struct FModularSynthPreset {
	char bEnablePolyphony : 1; // 0x8
	ESynth1OscType Osc1Type; // 0xc
	float Osc1Gain; // 0x10
	float Osc1Octave; // 0x14
	float Osc1Semitones; // 0x18
	float Osc1Cents; // 0x1c
	float Osc1PulseWidth; // 0x20
	ESynth1OscType Osc2Type; // 0x24
	float Osc2Gain; // 0x28
	float Osc2Octave; // 0x2c
	float Osc2Semitones; // 0x30
	float Osc2Cents; // 0x34
	float Osc2PulseWidth; // 0x38
	float Portamento; // 0x3c
	char bEnableUnison : 1; // 0x40
	char bEnableOscillatorSync : 1; // 0x40
	float Spread; // 0x44
	float Pan; // 0x48
	float LFO1Frequency; // 0x4c
	float LFO1Gain; // 0x50
	ESynthLFOType LFO1Type; // 0x54
	ESynthLFOMode LFO1Mode; // 0x55
	ESynthLFOPatchType LFO1PatchType; // 0x56
	float LFO2Frequency; // 0x58
	float LFO2Gain; // 0x5c
	ESynthLFOType LFO2Type; // 0x60
	ESynthLFOMode LFO2Mode; // 0x61
	ESynthLFOPatchType LFO2PatchType; // 0x62
	float GainDb; // 0x64
	float AttackTime; // 0x68
	float DecayTime; // 0x6c
	float SustainGain; // 0x70
	float ReleaseTime; // 0x74
	ESynthModEnvPatch ModEnvPatchType; // 0x78
	ESynthModEnvBiasPatch ModEnvBiasPatchType; // 0x79
	char bInvertModulationEnvelope : 1; // 0x7c
	char bInvertModulationEnvelopeBias : 1; // 0x7c
	float ModulationEnvelopeDepth; // 0x80
	float ModulationEnvelopeAttackTime; // 0x84
	float ModulationEnvelopeDecayTime; // 0x88
	float ModulationEnvelopeSustainGain; // 0x8c
	float ModulationEnvelopeReleaseTime; // 0x90
	char bLegato : 1; // 0x94
	char bRetrigger : 1; // 0x94
	float FilterFrequency; // 0x98
	float FilterQ; // 0x9c
	ESynthFilterType FilterType; // 0xa0
	ESynthFilterAlgorithm FilterAlgorithm; // 0xa1
	char bStereoDelayEnabled : 1; // 0xa4
	ESynthStereoDelayMode StereoDelayMode; // 0xa8
	float StereoDelayTime; // 0xac
	float StereoDelayFeedback; // 0xb0
	float StereoDelayWetlevel; // 0xb4
	float StereoDelayRatio; // 0xb8
	char bChorusEnabled : 1; // 0xbc
	float ChorusDepth; // 0xc0
	float ChorusFeedback; // 0xc4
	float ChorusFrequency; // 0xc8
	TArray<FEpicSynth1Patch> Patches; // 0xd0
};

struct FProgressBarStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	bool bPlaying; // 0x28
	float DefaultBlendTimeMultiplier; // 0x2c
	TArray<int32_t> NextSections; // 0xe8
	TArray<int32_t> PrevSections; // 0xf8
	TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118
	float position; // 0x128
	float PlayRate; // 0x12c
	FAlphaBlend Blend; // 0x130
	int32_t DisableRootMotionCount; // 0x18c
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FConsumableSave {
	float MassToConsume; // 0x0
	float ConsumptionDuration; // 0x4
	float DigestionDuration; // 0x8
	float Density; // 0xc
	FNutrientsData NutritionData; // 0x10
	TArray<char> UserData; // 0x90
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FGameEventParameters {
	float AnnounceDuration; // 0x0
	float CancelDuration; // 0x4
	float RoundDuration; // 0x8
	int32_t RoundLimit; // 0xc
	int32_t WinLimit; // 0x10
	float RespawnDelay; // 0x14
	float TimeoutDuration; // 0x18
	int32_t MinParticipants; // 0x1c
	int32_t MaxParticipants; // 0x20
	bool AllowRespawn; // 0x24
	bool FriendlyFire; // 0x25
	TArray<int32_t> TeamLimit; // 0x28
	int32_t EntryFee; // 0x38
	FGameEventRewardPoints PointsPerEnemyKill; // 0x3c
	FGameEventRewardPoints PointsPerTeamKill; // 0x48
	FGameEventRewardPoints PointsPerDeath; // 0x54
	FGameEventRewardPoints PointsPerSuicide; // 0x60
	FGameEventRewardPoints PointsPerAssist; // 0x6c
	FGameEventRewardPoints PointsPerHeadshot; // 0x78
	FGameEventRewardPoints PointsPerRoundWin; // 0x84
	TArray<FGameEventRewardPoints> PointsPerRank; // 0x90
	FGameEventRewardPoints PointsForParticipation; // 0xa0
	float ScoreToFameConversionFactor; // 0xac
	TArray<UItemSelection*> PossiblePrimaryWeapons; // 0xb0
	TArray<UItemSelection*> PossibleSecondaryWeapons; // 0xc0
	TArray<UItemSelection*> PossibleTertiaryWeapons; // 0xd0
	TArray<UItemSelection*> PossibleOutfits; // 0xe0
	TArray<UItemSelection*> PossibleSupportItems; // 0xf0
	TArray<UItemSelection*> MandatoryGear; // 0x100
	FText EventName; // 0x110
	FText EventDescription; // 0x128
	FText PrerequisitesText; // 0x140
	FText WeaponText; // 0x158
	FText RewardsText; // 0x170
};

struct FSelectedChoppingTool {
	AItem* Item; // 0x0
	FChoppingTool2 Tool; // 0x8
	bool IsRequiredToBeInHands; // 0x58
};

struct FSkillTemplate {
	ESkillAttribute Attribute; // 0x0
	FText Name; // 0x8
	FString ClassName; // 0x20
	ESkillLevel Level; // 0x30
	float Experience; // 0x34
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FInteriorSettings {
	bool bIsWorldSettings; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FSafeInt {
	FString Internal; // 0x0
	FString Base; // 0x10
	FString Shift; // 0x20
	char Flag; // 0x30
};

struct FRichCurveKey {
	ERichCurveInterpMode InterpMode; // 0x0
	ERichCurveTangentMode TangentMode; // 0x1
	ERichCurveTangentWeightMode TangentWeightMode; // 0x2
	float Time; // 0x4
	float Value; // 0x8
	float ArriveTangent; // 0xc
	float ArriveTangentWeight; // 0x10
	float LeaveTangent; // 0x14
	float LeaveTangentWeight; // 0x18
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FContainerItemDescriptorData {
	float health; // 0x4
	float maxHealth; // 0x8
	int32_t Quantity; // 0xc
	int32_t usage; // 0x10
	float TotalWeight; // 0x14
	int32_t DisplayAmountLeft; // 0x18
	int32_t DisplayAmountRight; // 0x1c
	bool ShouldDisplayTextLeft; // 0x20
	bool ShouldDisplayTextRight; // 0x21
	UTexture2D* Icon; // 0x28
	FGuid UniqueItemId; // 0x30
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FCraftingRecipeCraftableItem {
	AItem* ItemClass; // 0x0
	bool EnoughSkill; // 0x8
};

struct FPrisonerNearbyFoliageInstanceInfoReplicated {
	TWeakObjectPtr<UInstancedStaticMeshComponent> InstancedMeshComponent; // 0x0
	FPackedLocation PackedLocation; // 0x8
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FMovieSceneWidgetMaterialSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FLiveLinkCameraFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FZombieRelaxedStanceAnimations {
	UAnimSequenceBase* WalkLoopAnimation; // 0x0
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FAnimNode_CurveSource {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FGeomComponentCacheParameters {
	EGeometryCollectionCacheType CacheMode; // 0x0
	UGeometryCollectionCache* TargetCache; // 0x8
	float ReverseCacheBeginTime; // 0x10
	bool SaveCollisionData; // 0x14
	bool DoGenerateCollisionData; // 0x15
	int32_t CollisionDataSizeMax; // 0x18
	bool DoCollisionDataSpatialHash; // 0x1c
	float CollisionDataSpatialHashRadius; // 0x20
	int32_t MaxCollisionPerCell; // 0x24
	bool SaveBreakingData; // 0x28
	bool DoGenerateBreakingData; // 0x29
	int32_t BreakingDataSizeMax; // 0x2c
	bool DoBreakingDataSpatialHash; // 0x30
	float BreakingDataSpatialHashRadius; // 0x34
	int32_t MaxBreakingPerCell; // 0x38
	bool SaveTrailingData; // 0x3c
	bool DoGenerateTrailingData; // 0x3d
	int32_t TrailingDataSizeMax; // 0x40
	float TrailingMinSpeedThreshold; // 0x44
	float TrailingMinVolumeThreshold; // 0x48
};

struct FMovieSceneBoolChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FAnimNode_TransitionResult {
	bool bCanEnterTransition; // 0x10
};

struct FSoundModulationDefaultRoutingSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FGroomBuildSettings {
	bool bOverrideGuides; // 0x0
	float HairToGuideDensity; // 0x4
	EGroomInterpolationQuality InterpolationQuality; // 0x8
	EGroomInterpolationWeight InterpolationDistance; // 0x9
	bool bRandomizeGuide; // 0xa
	bool bUseUniqueGuide; // 0xb
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FPossibleItem {
	UCraftingItemTag* CraftingTag; // 0x0
	AItem* Item; // 0x8
	int32_t Quantity; // 0x10
	int32_t usage; // 0x14
	float usageWeight; // 0x18
	ECraftingType CraftingType; // 0x1c
	int32_t QuantityVariation; // 0x20
	float WeightVariation; // 0x24
	bool SpawnHere; // 0x28
};

struct FHitReactMagnitudeData {
	FHitReactDirectionData SmallHit; // 0x0
	FHitReactDirectionData MediumHit; // 0x48
	FHitReactDirectionData LargeHit; // 0x90
	FHitReactDirectionData KnockoutHit; // 0xd8
};

struct FMeshReductionSettings {
	float PercentTriangles; // 0x0
	float PercentVertices; // 0x4
	float MaxDeviation; // 0x8
	float PixelError; // 0xc
	float WeldingThreshold; // 0x10
	float HardAngleThreshold; // 0x14
	int32_t BaseLODModel; // 0x18
	EMeshFeatureImportance SilhouetteImportance; // 0x1c
	EMeshFeatureImportance TextureImportance; // 0x1d
	EMeshFeatureImportance ShadingImportance; // 0x1e
	char bRecalculateNormals : 1; // 0x1f
	char bGenerateUniqueLightmapUVs : 1; // 0x1f
	char bKeepSymmetry : 1; // 0x1f
	char bVisibilityAided : 1; // 0x1f
	char bCullOccluded : 1; // 0x1f
	EStaticMeshReductionTerimationCriterion TerminationCriterion; // 0x20
	EMeshFeatureImportance VisibilityAggressiveness; // 0x21
	EMeshFeatureImportance VertexColorImportance; // 0x22
};

struct FMovieSceneAkAudioRTPCTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FPBCTT_BleedingInjury_StopBleeding_SkillData {
	TArray<int32_t> NumUsesPerSeverityLevel; // 0x0
};

struct FRangedWeaponSkillParametersPerSkillLevel {
	float CrosshairHidingDuration; // 0x0
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FAnimNode_MakeDynamicAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FIntegralCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FWeaponSpreadData {
	FWeaponSpreadItem ByStance[0x4]; // 0x0
	float IncrementPerShot; // 0x30
	float IncrementFromShotsMax; // 0x34
	float IncrementSpeed; // 0x38
	float DecrementSpeed; // 0x3c
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FGameResourceMixingRule {
	UGameResourceType* Source; // 0x0
	UGameResourceType* Destination; // 0x8
	UGameResourceType* Result; // 0x10
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FEditPivotTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FAnimNode_CCDIK {
	FVector EffectorLocation; // 0xc8
	EBoneControlSpace EffectorLocationSpace; // 0xd4
	FBoneSocketTarget EffectorTarget; // 0xe0
	FBoneReference TipBone; // 0x140
	FBoneReference RootBone; // 0x150
	float Precision; // 0x160
	int32_t MaxIterations; // 0x164
	bool bStartFromTail; // 0x168
	bool bEnableRotationLimit; // 0x169
	TArray<float> RotationLimitPerJoints; // 0x170
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FSessionServicePing {
	FString userName; // 0x0
};

struct FMapHUDFlagsObject {
	UTexture* _flagPositionOuterRingTexture; // 0x18
	FLinearColor _flagOuterRingColor; // 0x20
	FLinearColor _flagHighlightOuterRingColor; // 0x30
	UTexture* _flagPositionInnerCircleTexture; // 0x40
	FLinearColor _flagInnerCircleColor; // 0x48
	FLinearColor _flagHighlightInnerCircleColor; // 0x58
	UFont* _flagFont; // 0x68
	FLinearColor _flagNameHighlightColor; // 0x70
	FLinearColor _flagNameHighlightOutlineColor; // 0x80
	FLinearColor _flagNameColor; // 0x90
	FLinearColor _flagNameOutlineColor; // 0xa0
	FVector2D _flagPositionTextureSize; // 0xb0
	int32_t _flagTextStackOffset; // 0xb8
};

struct FMovieSceneFloatChannel {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x8
	ERichCurveExtrapolation PostInfinityExtrap; // 0x9
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneFloatValue> Values; // 0x20
	float DefaultValue; // 0x30
	bool bHasDefaultValue; // 0x34
	FMovieSceneKeyHandleMap KeyHandles; // 0x38
	FFrameRate TickResolution; // 0x98
};

struct FMovieSceneAudioSectionTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FLandscapeSplineMeshEntry {
	UStaticMesh* Mesh; // 0x0
	TArray<UMaterialInterface*> MaterialOverrides; // 0x8
	char bCenterH : 1; // 0x18
	FVector2D CenterAdjust; // 0x1c
	char bScaleToWidth : 1; // 0x24
	FVector Scale; // 0x28
	LandscapeSplineMeshOrientation Orientation; // 0x34
	ESplineMeshAxis ForwardAxis; // 0x35
	ESplineMeshAxis UpAxis; // 0x36
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FInlineEditableTextBlockStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FAkMidiProgramChange {
	char ProgramNum; // 0x2
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FWashItemData {
	AItem* CleanItem; // 0x0
	int32_t WashItemUsage; // 0x8
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FLiveLinkTransformBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FCanvasUVTri {
	FVector2D V0_Pos; // 0x0
	FVector2D V0_UV; // 0x8
	FLinearColor V0_Color; // 0x10
	FVector2D V1_Pos; // 0x20
	FVector2D V1_UV; // 0x28
	FLinearColor V1_Color; // 0x30
	FVector2D V2_Pos; // 0x40
	FVector2D V2_UV; // 0x48
	FLinearColor V2_Color; // 0x50
};

struct FPrisonerThirdPersonSubviewBlendOverride {
	EPrisonerThirdPersonSubview Source; // 0x0
	EPrisonerThirdPersonSubview Target; // 0x1
	float Duration; // 0x4
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FGoomBindingGroupInfo {
	int32_t RenRootCount; // 0x0
	int32_t RenLODCount; // 0x4
	int32_t SimRootCount; // 0x8
	int32_t SimLODCount; // 0xc
};

struct FEdGraphPinType {
	FName PinCategory; // 0x0
	FName PinSubCategory; // 0x8
	TWeakObjectPtr<UObject> PinSubCategoryObject; // 0x10
	FSimpleMemberReference PinSubCategoryMemberReference; // 0x18
	FEdGraphTerminalType PinValueType; // 0x38
	EPinContainerType ContainerType; // 0x54
	char bIsArray : 1; // 0x55
	char bIsReference : 1; // 0x55
	char bIsConst : 1; // 0x55
	char bIsWeakPointer : 1; // 0x55
	char bIsUObjectWrapper : 1; // 0x55
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FGameEventTeamColours {
	FLinearColor TeamName; // 0x0
	FLinearColor ParticipantStatsDarker; // 0x10
	FLinearColor ParticipantStatsLighter; // 0x20
	FLinearColor ParticipantStatsHighlighted; // 0x30
	FLinearColor ParticipantStatsDisabled; // 0x40
	FLinearColor ParticipantStatsMini; // 0x50
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FCraftingRecipeCraftingIngredient {
	TArray<FCraftingRecipeCraftingItem> CraftingItems; // 0x0
	bool IsTool; // 0x10
	bool isOptional; // 0x11
};

struct FOrientedBox {
	FVector Center; // 0x0
	FVector AxisX; // 0xc
	FVector AxisY; // 0x18
	FVector AxisZ; // 0x24
	float ExtentX; // 0x30
	float ExtentY; // 0x34
	float ExtentZ; // 0x38
};

struct FStructSerializerNumericTestStruct {
	int8_t Int8; // 0x0
	int16_t Int16; // 0x2
	int32_t Int32; // 0x4
	int64_t Int64; // 0x8
	char UInt8; // 0x10
	uint16_t UInt16; // 0x12
	uint32_t UInt32; // 0x14
	uint64_t UInt64; // 0x18
	float Float; // 0x20
	double Double; // 0x28
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString userName; // 0x10
};

struct FDistributionLookupTable {
	float TimeScale; // 0x0
	float TimeBias; // 0x4
	TArray<float> Values; // 0x8
	char Op; // 0x18
	char EntryCount; // 0x19
	char EntryStride; // 0x1a
	char SubEntryStride; // 0x1b
	char LockFlag; // 0x1c
};

struct FVehicleDamagedEffectsParameters {
	FFloatRange HealthRatioRange; // 0x0
	FTransform Transform; // 0x10
	UParticleSystem* ParticleSystem; // 0x40
	UAkAudioEvent* StartAudioEvent; // 0x48
	UAkAudioEvent* StopAudioEvent; // 0x50
	float DeactivationDelay; // 0x58
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FConZBaseData {
	int64_t BaseId; // 0x0
	FString BaseName; // 0x8
	FVector2D BaseSize; // 0x18
	FVector BaseLocation; // 0x20
	int64_t BaseOwnerPlayerId; // 0x30
	bool IsOwnedByPlayer; // 0x38
	FVector2D BaseBoundsMin; // 0x3c
	FVector2D BaseBoundsMax; // 0x44
};

struct FEngineeringSkillExperienceAwards {
	float RepairExperienceMultiplier; // 0x0
	float FillFuelExperienceMultiplier; // 0x4
	float DrainFuelExperienceMultiplier; // 0x8
	float ChargeBatteryExperienceMultiplier; // 0xc
};

struct FMusicPlayerPlaybackOptions {
	TArray<FString> MusicPlaylist; // 0x0
	int32_t CurrentPlaylistIndex; // 0x10
	bool PlaybackPaused; // 0x14
	float CurrentPlaybackVolume; // 0x18
	bool ShouldRepeatCurrent; // 0x1c
	bool ShouldLoop; // 0x1d
	bool ShouldShuffle; // 0x1e
	bool ShouldPlayRadio; // 0x1f
	bool IsTurnedOn; // 0x20
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FCargoDropSpawnerPreset {
	UItemSpawnerPreset* Preset; // 0x0
	float ChanceMultiplier; // 0x8
};

struct FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x20
	float CurrentTime; // 0x24
	float PreviousTime; // 0x28
	float Duration; // 0x2c
	FRootMotionSourceStatus Status; // 0x30
	FRootMotionSourceSettings Settings; // 0x31
	bool bInLocalSpace; // 0x32
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FDcxVehicleClutchData {
	float BitePoint; // 0x0
	float Strength; // 0x4
	EDcxVehicleClutchAccuracyMode AccuracyMode; // 0x8
	int32_t EstimateIterations; // 0xc
};

struct FKSphylElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FHairDecimationSettings {
	float CurveDecimation; // 0x0
	float VertexDecimation; // 0x4
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FSolverCollisionData {
	FVector Location; // 0x0
	FVector AccumulatedImpulse; // 0xc
	FVector Normal; // 0x18
	FVector Velocity1; // 0x24
	FVector Velocity2; // 0x30
	FVector AngularVelocity1; // 0x3c
	FVector AngularVelocity2; // 0x48
	float Mass1; // 0x54
	float Mass2; // 0x58
	int32_t ParticleIndex; // 0x5c
	int32_t LevelsetIndex; // 0x60
	int32_t ParticleIndexMesh; // 0x64
	int32_t LevelsetIndexMesh; // 0x68
};

struct FClassReplicationInfo {
	float DistancePriorityScale; // 0x0
	float StarvationPriorityScale; // 0x4
	float AccumulatedNetPriorityBias; // 0x8
	uint16_t ReplicationPeriodFrame; // 0xc
	uint16_t FastPath_ReplicationPeriodFrame; // 0xe
	uint16_t ActorChannelFrameTimeout; // 0x10
	float CullDistance; // 0x68
	float CullDistanceSquared; // 0x6c
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FAnimNode_BlendListByBool {
	bool bActiveValue; // 0x98
};

struct FMissionData {
	FText MissionName; // 0x0
	FText MissionCategory; // 0x18
	FText MissionDescription; // 0x30
	EMissionType MissionType; // 0x48
	int32_t MissionOrdinalNumber; // 0x4c
	EMissionState MissionState; // 0x50
	EFaction MissionFaction; // 0x51
	TArray<TSoftObjectPtr<ALocationTrigger>> MissionStartingLocations; // 0x58
	int32_t IntendedNumberOfPlayers; // 0x68
	float MissionCooldown; // 0x6c
	FString MissionAssetId; // 0x78
	TArray<FObjectiveData> ObjectivesData; // 0x88
	FMissionReward MissionReward; // 0x98
	UTexture2D* MissionBannerImage; // 0xb0
};

struct FWeaponTypeAimOffset {
	EWeaponType WeaponType; // 0x0
	UBlendSpace* AimOffset[0x2]; // 0x8
};

struct FAnimNode_ObserveBone {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FPhysicalHitReactData {
	FName ProfileName; // 0x0
	FName PelvisBoneName; // 0x8
	float InitialStrengthMultiplier; // 0x10
	float BlendDuration; // 0x14
};

struct FConZColorRow {
	FLinearColor Color; // 0x8
	FString Description; // 0x18
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0xe0
	FStructSerializerArrayTestStruct Arrays; // 0x170
	FStructSerializerMapTestStruct Maps; // 0x1d0
	FStructSerializerSetTestStruct Sets; // 0x310
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FExplosionRadialDamageEvent {
	UDamageCustomization* DamageCustomizationClass; // 0x40
	float force; // 0x48
	UObject* DamageDealer; // 0x50
};

struct FBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FMovieSceneByteChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FRadioProgramData {
	URadioProgram* ProgramClass; // 0x0
	URadioProgram* Program; // 0x8
	float Chance; // 0x10
};

struct FCharacterLegsImpactSoundsData {
	TArray<FCharacterLegsImpactSoundData> SoundsData; // 0x0
	FCharacterImpactSounds FallbackSounds; // 0x10
};

struct FItemContainersReplicationHelper {
	TMap<FString, FItemContainerRepData> ItemContainerData; // 0x0
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FSafeColor {
	FString Internal; // 0x0
	FString TrueR; // 0x10
	FString TrueG; // 0x20
	FString TrueB; // 0x30
	FString TrueA; // 0x40
	FString ShiftR; // 0x50
	FString ShiftG; // 0x60
	FString ShiftB; // 0x70
	FString ShiftA; // 0x80
	char Flag; // 0x90
};

struct FItemLocation {
	bool Coastal; // 0x0
	bool Continantal; // 0x1
	bool Mountain; // 0x2
	bool Urban; // 0x3
	bool Rural; // 0x4
	bool Industrial; // 0x5
	bool Police; // 0x6
	bool MilitaryBasic; // 0x7
	bool MilitaryMedium; // 0x8
	bool MilitaryAdvanced; // 0x9
	bool MilitaryWW2; // 0xa
	bool Sport; // 0xb
	bool Market; // 0xc
	bool GasStation; // 0xd
};

struct FChaosPhysicsCollisionInfo {
	UPrimitiveComponent* Component; // 0x0
	UPrimitiveComponent* OtherComponent; // 0x8
	FVector Location; // 0x10
	FVector Normal; // 0x1c
	FVector AccumulatedImpulse; // 0x28
	FVector Velocity; // 0x34
	FVector OtherVelocity; // 0x40
	FVector AngularVelocity; // 0x4c
	FVector OtherAngularVelocity; // 0x58
	float Mass; // 0x64
	float OtherMass; // 0x68
};

struct FSearchPerItemData {
	TSoftClassPtr<UObject> ItemClass; // 0x0
	TArray<UPhysicalMaterial*> NeededMaterials; // 0x28
	float Probability; // 0x38
	int32_t MinQuantity; // 0x3c
	int32_t MaxQuantity; // 0x40
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x8
	FMargin Margin; // 0x10
	FSlateColor TintColor; // 0x20
	UObject* ResourceObject; // 0x48
	FName ResourceName; // 0x50
	FBox2D UVRegion; // 0x58
	ESlateBrushDrawType DrawAs; // 0x6c
	ESlateBrushTileType Tiling; // 0x6d
	ESlateBrushMirrorType Mirroring; // 0x6e
	ESlateBrushImageType ImageType; // 0x6f
	char bIsDynamicallyLoaded : 1; // 0x80
	char bHasUObject : 1; // 0x80
};

struct FTraderMarkerTradeableOverrideStruct {
	UObject* TradeableClass; // 0x0
	int32_t BasePlayerPurchasePrice; // 0x8
	int32_t BasePlayerSellPrice; // 0xc
	float DeltaPlayerPurchase; // 0x10
	float DeltaPlayerSell; // 0x14
	bool IsOverridingPurchaseAbility; // 0x18
	bool CanBePurchasedByPlayer; // 0x19
};

struct FPrisonerMovementSettings_Ground_Standing_Running {
	FPrisonerGroundMovementParameters Default; // 0x0
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FTeleportUserDataReplicator {
	UTeleportUserData* UserData; // 0x0
};

struct FPrisonerRestingDataAutonomous {
	bool HasDisabledMovement; // 0x0
	FVector_NetQuantize Location; // 0x4
	FVector_NetQuantize EulerRotation; // 0x10
};

struct FCharacterCreationMenuContext {
	bool IsPreferringMultiplayer; // 0x0
	FString ServerIp; // 0x8
	int32_t ServerResponsePort; // 0x18
	int32_t ServerGameplayPort; // 0x1c
	FString ServerAuthToken; // 0x20
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FClassRedirect {
	FName ObjectName; // 0x0
	FName OldClassName; // 0x8
	FName NewClassName; // 0x10
	FName OldSubobjName; // 0x18
	FName NewSubobjName; // 0x20
	FName NewClassClass; // 0x28
	FName NewClassPackage; // 0x30
	bool InstanceOnly; // 0x38
};

struct FAkMidiNoteOnOff {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FMovieSceneEventSectionTemplate {
	FMovieSceneEventSectionData eventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FMovieSceneBytePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FSafeVector3D {
	FString Internal; // 0x0
	FString TrueX; // 0x10
	FString TrueY; // 0x20
	FString TrueZ; // 0x30
	FString ShiftX; // 0x40
	FString ShiftY; // 0x50
	FString ShiftZ; // 0x60
	char Flag; // 0x70
};

struct FMovieScene3DPathSectionTemplate {
	FMovieSceneObjectBindingID PathBindingID; // 0x20
	FMovieSceneFloatChannel TimingCurve; // 0x38
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
	char bFollow : 1; // 0xdc
	char bReverse : 1; // 0xdc
	char bForceUpright : 1; // 0xdc
};

struct FMovieSceneGeometryCacheSectionTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FLiveLinkTransformControllerData {
	bool bWorldTransform; // 0x0
	bool bUseScale; // 0x1
	bool bSweep; // 0x2
	bool bTeleport; // 0x3
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FSlateMeshVertex {
	FVector2D position; // 0x0
	FColor Color; // 0x8
	FVector2D UV0; // 0xc
	FVector2D UV1; // 0x14
	FVector2D UV2; // 0x1c
	FVector2D UV3; // 0x24
	FVector2D UV4; // 0x2c
	FVector2D UV5; // 0x34
};

struct FLiveLinkSubjectFrameMessage {
	FName SubjectName; // 0x0
	TArray<FTransform> Transforms; // 0x8
	TArray<FLiveLinkCurveElement> Curves; // 0x18
	FLiveLinkMetaData MetaData; // 0x28
	double Time; // 0x88
};

struct FAnimNode_RotateRootBone {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FAnimNode_CustomProperty {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FDcxDrivableSurfaceToTireFrictionPair {
	UPhysicalMaterial* SurfaceMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FCircularSegmentContainer {
	TArray<UCircularMenuSegmentWidget*> SegmentWidgets; // 0x0
	int32_t SegmentCountOverride; // 0x10
	float Offset; // 0x14
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FInv2021_InventoryPosition2D {
	int32_t X; // 0x8
	int32_t Y; // 0xc
	char Rotation; // 0x10
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FMovieScene3DScaleKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FPrisonerInjuryTypeLikelihoods {
	FString Name; // 0x0
	float BoneInjuryLikelihood; // 0x10
	float MuscleInjuryLikelihood; // 0x14
	float OrganInjuryLikelihood; // 0x18
};

struct FBaseElementSpawnParams {
	float Quality; // 0x0
	TArray<UObject*> DoorUpgrades; // 0x8
	FDbIntegerId ShelterId; // 0x18
	FGuid ItemGuid; // 0x20
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FSoundVariation {
	USoundWave* SoundWave; // 0x0
	float ProbabilityWeight; // 0x8
	FVector2D VolumeRange; // 0xc
	FVector2D PitchRange; // 0x14
};

struct FAnimNode_Fabrik {
	FTransform EffectorTransform; // 0xd0
	FBoneSocketTarget EffectorTarget; // 0x100
	FBoneReference TipBone; // 0x160
	FBoneReference RootBone; // 0x170
	float Precision; // 0x180
	int32_t MaxIterations; // 0x184
	EBoneControlSpace EffectorTransformSpace; // 0x188
	EBoneRotationSource EffectorRotationSource; // 0x189
};

struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x0
	float GearSwitchTime; // 0x4
	float GearAutoBoxLatency; // 0x8
	float FinalRatio; // 0xc
	TArray<FVehicleGearData> ForwardGears; // 0x10
	float ReverseGearRatio; // 0x20
	float NeutralGearUpRatio; // 0x24
	float ClutchStrength; // 0x28
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> parameters; // 0x0
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FVehicleDifferential4WData {
	EVehicleDifferential4W DifferentialType; // 0x0
	float FrontRearSplit; // 0x4
	float FrontLeftRightSplit; // 0x8
	float RearLeftRightSplit; // 0xc
	float CentreBias; // 0x10
	float FrontBias; // 0x14
	float RearBias; // 0x18
};

struct FConZFlagElementData {
	int64_t OvertakeEndTime; // 0x0
	FDbIntegerId OvertakerId; // 0x8
};

struct FConZPrisonerSpawnEquipmentProperties {
	float Elevation; // 0x0
	bool ClearEquipment; // 0x4
	bool OverrideDefaultOutfit; // 0x5
	UPrisonerLoadout* LoadoutFemale; // 0x8
	UPrisonerLoadout* LoadoutMale; // 0x10
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FSubmixEffectDynamicsProcessorSettings {
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	ESubmixEffectDynamicsChannelLinkMode LinkMode; // 0x2
	float InputGainDb; // 0x4
	float ThresholdDb; // 0x8
	float Ratio; // 0xc
	float KneeBandwidthDb; // 0x10
	float LookAheadMsec; // 0x14
	float AttackTimeMsec; // 0x18
	float ReleaseTimeMsec; // 0x1c
	USoundSubmix* ExternalSubmix; // 0x20
	char bChannelLinked : 1; // 0x28
	char bAnalogMode : 1; // 0x28
	char bKeyAudition : 1; // 0x28
	float KeyGainDb; // 0x2c
	float OutputGainDb; // 0x30
	FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x34
	FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x40
};

struct FVehicleWeaponAimingStanceTransitionMontages {
	EVehicleWeaponAimingStance stance; // 0x0
	TArray<FWeaponTypeMontage> WeaponTypeMontages; // 0x8
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FAnimLegIKDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x10
	int32_t NumBonesInLimb; // 0x20
	float MinRotationAngle; // 0x24
	EAxis FootBoneForwardAxis; // 0x28
	EAxis HingeRotationAxis; // 0x29
	bool bEnableRotationLimit; // 0x2a
	bool bEnableKneeTwistCorrection; // 0x2b
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FInlineTextImageStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FSafeVector4D {
	FString Internal; // 0x0
	FString TrueX; // 0x10
	FString TrueY; // 0x20
	FString TrueZ; // 0x30
	FString TrueW; // 0x40
	FString ShiftX; // 0x50
	FString ShiftY; // 0x60
	FString ShiftZ; // 0x70
	FString ShiftW; // 0x80
	char Flag; // 0x90
};

struct FFiredShotDescriptionRep {
	uint32_t PackedData; // 0x0
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x0
	int32_t AutoEaseOutDuration; // 0x4
	TScriptInterface<IMovieSceneEasingFunction> EaseIn; // 0x8
	bool bManualEaseIn; // 0x18
	int32_t ManualEaseInDuration; // 0x1c
	TScriptInterface<IMovieSceneEasingFunction> EaseOut; // 0x20
	bool bManualEaseOut; // 0x30
	int32_t ManualEaseOutDuration; // 0x34
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FSkillEventThrownItemHitTarget {
	AActor* Target; // 0x0
};

struct FPrisonerBodyEffectSave {
	TArray<char> Data; // 0x0
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FNiagaraVariableMetaData {
	FText Description; // 0x0
	FText CategoryName; // 0x18
	bool bAdvancedDisplay; // 0x30
	int32_t EditorSortPriority; // 0x34
	bool bInlineEditConditionToggle; // 0x38
	FNiagaraInputConditionMetadata EditCondition; // 0x40
	FNiagaraInputConditionMetadata VisibleCondition; // 0x58
	TMap<FName, FString> PropertyMetaData; // 0x70
	FName ParentAttribute; // 0xc0
	FName ScopeName; // 0xc8
	ENiagaraScriptParameterUsage usage; // 0xd0
	bool bIsStaticSwitch; // 0xd4
	int32_t StaticSwitchDefaultValue; // 0xd8
	bool bAddedToNodeGraphDeepCopy; // 0xdc
	bool bOutputIsPersistent; // 0xdd
	FName CachedNamespacelessVariableName; // 0xe0
	bool bCreatedInSystemEditor; // 0xe8
	bool bUseLegacyNameString; // 0xe9
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FMovieSceneComponentMaterialSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FBasePoseAimOffsetPair {
	UAnimSequenceBase* UpperBodyPose; // 0x0
	UAnimSequenceBase* LowerBodyPose; // 0x8
	UBlendSpace* AimOffset; // 0x10
};

struct FHairGroupInfoWithVisibility {
	bool bIsVisible; // 0x14
};

struct FAkMidiChannelAftertouch {
	char Value; // 0x2
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FSourceEffectFilterAudioBusModulationSettings {
	UAudioBus* AudioBus; // 0x0
	int32_t EnvelopeFollowerAttackTimeMsec; // 0x8
	int32_t EnvelopeFollowerReleaseTimeMsec; // 0xc
	float EnvelopeGainMultiplier; // 0x10
	ESourceEffectFilterParam FilterParam; // 0x14
	float MinFrequencyModulation; // 0x18
	float MaxFrequencyModulation; // 0x1c
	float MinResonanceModulation; // 0x20
	float MaxResonanceModulation; // 0x24
};

struct FMovieSceneSkeletalAnimationSectionTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FExamineDataPerItemGroup {
	int32_t MaxNumberOfOccurrences; // 0x0
};

struct FCorpseStaticMeshRepData {
	FName DisplayName; // 0x0
	UStaticMesh* Mesh; // 0x8
	TArray<UMaterialInterface*> Materials; // 0x10
	bool Visibility; // 0x20
	FTransform Transform; // 0x30
	FName AttachSocket; // 0x60
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FAkMidiNoteAftertouch {
	char Note; // 0x2
	char Value; // 0x3
};

struct FNetPackedProjectileDamageEvent {
	FVector_NetQuantize100 DealerLocation; // 0xb0
	FVector_NetQuantize100 TargetLocation; // 0xbc
	float ProjectileMass; // 0xc8
	float ProjectileSpeed; // 0xcc
	float ProjectileMuzzleVelocity; // 0xd0
	char SharpnessHardnessPacked; // 0xd4
	char ArmorPiercingFactorPacked; // 0xd5
	char EventDataPacked; // 0xd6
	AActor* WeaponClass; // 0xd8
	UObject* DamageDealer; // 0xe0
	float DistanceTravelled; // 0xe8
	float ExperienceMultiplier; // 0xec
};

struct FVertexOffsetUsage {
	int32_t usage; // 0x0
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FDebugTextInfo {
	AActor* SrcActor; // 0x0
	FVector SrcActorOffset; // 0x8
	FVector SrcActorDesiredOffset; // 0x14
	FString DebugText; // 0x20
	float TimeRemaining; // 0x30
	float Duration; // 0x34
	FColor TextColor; // 0x38
	char bAbsoluteLocation : 1; // 0x3c
	char bKeepAttachedToActor : 1; // 0x3c
	char bDrawShadow : 1; // 0x3c
	FVector OrigActorLocation; // 0x40
	UFont* Font; // 0x50
	float FontScale; // 0x58
};

struct FUsableObjectiveItem {
	AItem* ItemClass; // 0x0
};

struct FLadderInfoRepData {
	FTransform LadderTransform; // 0x0
	FVector CapsuleBias; // 0x30
	FVector RootBoneOffset; // 0x3c
	float StepHeight; // 0x48
	EPhysicalSurface PhysicalSurfaceForSounds; // 0x4c
	char NumberOfSteps; // 0x4d
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FEventsRankingStats {
	float FamePoints; // 0x8
	int32_t FameLevel; // 0xc
	float EventScore; // 0x10
	int32_t EventKills; // 0x14
	int32_t EventTeamKills; // 0x18
	int32_t EventDeaths; // 0x1c
	int32_t EventSuicides; // 0x20
	int32_t EventAssists; // 0x24
	int32_t EventHeadshots; // 0x28
	bool IsBanned; // 0x2c
};

struct FVehicleTireEffectProperties {
	FVector TireLocalOffset; // 0x0
};

struct FItemMotionNoise {
	UAkAudioEvent* AudioEvent; // 0x0
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FWaterCurveSettings {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FCharacterTorsoImpactSoundsData {
	TArray<FCharacterTorsoImpactSoundData> SoundsData; // 0x0
	FCharacterImpactSounds FallbackSounds; // 0x10
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FTraderMarker {
	UTraderPersonalityDataAsset* TraderPersonality; // 0x40
	bool HasPurchasedTradeablesSpawnTrasnform; // 0x48
	FTransform PurchasedTradeablesSpawnTransform; // 0x50
	TArray<FTraderMarkerTradeableOverrideStruct> PurchaseableTradeablesClassesOverride; // 0x80
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FTeleportRepData {
	char RequestID; // 0x0
	bool IsInProgress; // 0x1
	TWeakObjectPtr<AActor> Subject; // 0x4
	FVector TargetLocation; // 0xc
	FRotator TargetRotation; // 0x18
	FTeleportUserDataReplicator UserDataReplicator; // 0x28
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FHairGroupsMaterial {
	UMaterialInterface* Material; // 0x0
	FName SlotName; // 0x8
};

struct FVehicleExhaustParticles {
	FName AttachSocketName; // 0x0
	UParticleSystem* ParticleSystem; // 0x8
};

struct FTextureLODGroup {
	TextureGroup Group; // 0x0
	int32_t LODBias; // 0xc
	int32_t LODBias_Smaller; // 0x10
	int32_t LODBias_Smallest; // 0x14
	int32_t NumStreamedMips; // 0x1c
	TextureMipGenSettings MipGenSettings; // 0x20
	int32_t MinLODSize; // 0x24
	int32_t MaxLODSize; // 0x28
	int32_t MaxLODSize_Smaller; // 0x2c
	int32_t MaxLODSize_Smallest; // 0x30
	int32_t OptionalLODBias; // 0x34
	int32_t OptionalMaxLODSize; // 0x38
	FName MinMagFilter; // 0x40
	FName MipFilter; // 0x48
	ETextureMipLoadOptions MipLoadOptions; // 0x50
	bool DuplicateNonOptionalMips; // 0x51
	float Downscale; // 0x54
	ETextureDownscaleOptions DownscaleOptions; // 0x58
	int32_t VirtualTextureTileCountBias; // 0x5c
	int32_t VirtualTextureTileSizeBias; // 0x60
};

struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; // 0x0
	char bOverride_BlendMode : 1; // 0x0
	char bOverride_ShadingModel : 1; // 0x0
	char bOverride_DitheredLODTransition : 1; // 0x0
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x0
	char bOverride_TwoSided : 1; // 0x0
	char TwoSided : 1; // 0x0
	char DitheredLODTransition : 1; // 0x0
	char bCastDynamicShadowAsMasked : 1; // 0x1
	EBlendMode BlendMode; // 0x2
	EMaterialShadingModel ShadingModel; // 0x3
	float OpacityMaskClipValue; // 0x4
};

struct FCTFParameters {
	float FlagResetDuration; // 0x0
	bool AllowReturns; // 0x4
	int32_t CaptureLimit; // 0x8
	FGameEventRewardPoints PointsPerPickup; // 0xc
	FGameEventRewardPoints PointsPerCapture; // 0x18
	FGameEventRewardPoints PointsPerReturn; // 0x24
};

struct FInventoryItemPositionPair {
	FInventoryPositionDataRepHelper position; // 0x0
	UObject* Item; // 0x20
};

struct FNiagaraRibbonUVSettings {
	ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x0
	ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x4
	ENiagaraRibbonUVDistributionMode DistributionMode; // 0x8
	float TilingLength; // 0xc
	FVector2D Offset; // 0x10
	FVector2D Scale; // 0x18
	bool bEnablePerParticleUOverride; // 0x20
	bool bEnablePerParticleVRangeOverride; // 0x21
};

struct FWindowInfo {
	FTransform Transform; // 0x0
	FTransform TransformInverse; // 0x30
	FVector Anchor; // 0x60
	float Width; // 0x6c
	float Height; // 0x70
	FWindowClimbingAnimationInfo AnimationInfo; // 0x78
	int32_t AnimationIndex; // 0xc0
};

