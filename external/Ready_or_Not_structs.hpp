// Created by BlueFire1337
// Updated 2022-01-02
// Generated 2022-01-23

#pragma once

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

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FNiagaraPerfBaselineStats {
	float PerInstanceAvg_GT; // 0x0
	float PerInstanceAvg_RT; // 0x4
	float PerInstanceMax_GT; // 0x8
	float PerInstanceMax_RT; // 0xc
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FCharacterLookOverride : FTableRowBase {
	EDLC LockedToDLC; // 0x8
	FText FriendlyBodyName; // 0x10
	FString SpeechCharacterName; // 0x28
	UTexture2D* BodyIcon; // 0x38
	FText FriendlyHeadName; // 0x40
	UTexture2D* HeadIcon; // 0x58
	TMap<ABaseArmour*, USkeletalMesh*> ArmorOverrideMap; // 0x60
	USkeletalMesh* FPMeshOverride; // 0xb0
	USkeletalMesh* FPBodyMeshOverride; // 0xb8
	USkeletalMesh* FaceMeshOverride; // 0xc0
	USkeletalMesh* BodyMeshOverride; // 0xc8
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FFootIKStruct {
	float Offset; // 0x0
	FRotator FootRotation; // 0x4
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
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

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FRoNGaitLocomotionData {
	FRoNLeanMotion Fwd; // 0x0
	FRoNLeanMotion FwdLeft; // 0x18
	FRoNLeanMotion FwdRight; // 0x30
	FRoNLeanMotion Left; // 0x48
	FRoNLeanMotion Right; // 0x60
	FRoNLeanMotion Bwd; // 0x78
	FRoNLeanMotion BwdLeft; // 0x90
	FRoNLeanMotion BwdRight; // 0xa8
};

struct FAIDataPick {
	int32_t Chance; // 0x0
	FString AILookupTag; // 0x8
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FSpawnData {
	char bEnabled : 1; // 0x0
	FDataTableRowHandle SpawnedAI; // 0x8
	AActivityRouteActor* ActivityRoute; // 0x18
	FActivityRouteCollection ActivityRouteCollection; // 0x20
	FSpawnTweakables GeneralTweakables; // 0x40
	FSuspectTweakables SuspectTweakables; // 0x80
	FCivilianTweakables CivilianTweakables; // 0xe8
	FHesitationData_Spawner HesitationTweakables; // 0xf8
	float SpawnDistance; // 0xad0
	int32_t AISpawnNumber; // 0xad4
	TArray<FVector> HidingSpots; // 0xad8
	AScenarioGenerator* LoadedFromScenario; // 0xae8
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
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

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FLipSync_PhoneticRule {
	bool bCondition_IsFirst; // 0x0
	bool bCondition_IsLast; // 0x1
	FString Condition_NextSymbol; // 0x8
	TArray<EPhoneme> Result_Replace; // 0x18
	bool bResult_RemoveNext; // 0x28
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
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

struct FDoorData : FTableRowBase {
	float DoorMaxOpenClose; // 0x8
	char bIsDestructible : 1; // 0xc
	char bCanMirrorUnderDoor : 1; // 0xc
	TArray<FDoorChunkData> DestructibleChunks; // 0x10
	UStaticMesh* DoorMesh; // 0x20
	UStaticMesh* DoorHandle; // 0x28
	char bLockable : 1; // 0x30
	char bCustomLockpickLocation : 1; // 0x30
	FVector LockpickRelativeLocation; // 0x34
	char bCustomDoorPeekLocation : 1; // 0x40
	FVector DoorPeekRelativeLocation; // 0x44
	char bDoorHandleFront : 1; // 0x50
	char bDoorHandleBack : 1; // 0x50
	FTransform DoorHandleFrontRelativeTransform; // 0x60
	FTransform DoorHandleBackRelativeTransform; // 0x90
	TArray<FVector> C2PlacementPoints; // 0xc0
	UParticleSystem* C2ExplosionParticle; // 0xd0
	UFMODEvent* OpenSound; // 0xd8
	UFMODEvent* CloseSound; // 0xe0
	UFMODEvent* PushOpenSound; // 0xe8
	UFMODEvent* PushCloseSound; // 0xf0
	UFMODEvent* ManipulateSound; // 0xf8
	UFMODEvent* LockedSound; // 0x100
	UFMODEvent* RamSound; // 0x108
	UFMODEvent* KickSuccessSound; // 0x110
	UFMODEvent* KickFailSound; // 0x118
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FScenarioDataArray {
	TArray<FScenarioData> SaveData; // 0x0
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FScorePenalty {
	char bEnabled : 1; // 0x0
	FString ScoreName; // 0x8
	int32_t Score; // 0x18
	char bGiven : 1; // 0x1c
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	EScriptExecutionMode ExecutionMode; // 0x28
	uint32_t SpawnNumber; // 0x2c
	uint32_t MaxEventsPerFrame; // 0x30
	FGuid SourceEmitterID; // 0x34
	FName SourceEventName; // 0x44
	bool bRandomSpawnNumber; // 0x4c
	uint32_t MinSpawnNumber; // 0x50
};

struct FZeuzLobbyUserBase : FZeuzLobbyUser {
	bool Ready; // 0x50
	FZeuzVariant Params; // 0x58
	FZeuzTimestamp Created; // 0x68
	FZeuzTimestamp Updated; // 0x70
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
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

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FNiagaraCompileDependency {
	FString LinkerErrorMessage; // 0x0
	FGuid NodeGuid; // 0x10
	FGuid PinGuid; // 0x20
	TArray<FGuid> StackGuids; // 0x30
	FNiagaraVariableBase DependentVariable; // 0x40
};

struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
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

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FZeuzScalingRules {
	FZeuzMachineScalingRules Machine; // 0x0
	FZeuzPayloadScalingRules Payload; // 0x50
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
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

struct FHesitationData_Spawner {
	char bShouldHesitate : 1; // 0x0
	FDataTableRowHandle ProfilePreset; // 0x8
	FHesitationData Data; // 0x18
	UDataTable* ProfileTable; // 0x9c8
	FName ProfileRowName; // 0x9d0
};

struct FZeuzProfileItemUserName {
	FString UserID; // 0x0
	FString Name; // 0x10
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

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
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

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FHesitationZoneData {
	FHesitationZoneTime Meter; // 0x8
	FHesitationZoneColor Color; // 0x1c
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

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FPostProcessSetting_VectorParam : FPostProcessSetting_Base {
	FVector Start; // 0x80
	FVector End; // 0x8c
	FRuntimeCurveLinearColor Curve; // 0x98
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FRoNStyleTurnData {
	UAimOffsetBlendSpace* AimOffset; // 0x0
	UAnimSequence* Turn45_Left; // 0x8
	UAnimSequence* Turn45_Right; // 0x10
	UAnimSequence* Turn90_Left; // 0x18
	UAnimSequence* Turn90_Right; // 0x20
	UAnimSequence* Turn180_Left; // 0x28
	UAnimSequence* Turn180_Right; // 0x30
	UAnimSequence* Turn135_Left; // 0x38
	UAnimSequence* Turn135_Right; // 0x40
};

struct FLipSync_TimedData {
	float TimeOffset; // 0x0
	float EndTime; // 0x4
	FText Data; // 0x8
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FUniformData {
	FText Name; // 0x0
	UTexture2D* Image; // 0x18
	EItemClass ItemClass; // 0x20
	TSoftClassPtr<UObject> Blueprint; // 0x28
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FHesitationZoneColor {
	char bCustomZoneColor : 1; // 0x0
	FLinearColor ZoneColor; // 0x4
};

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0xd0
	FBoneSocketTarget EffectorTarget; // 0x100
	FBoneReference TipBone; // 0x160
	FBoneReference RootBone; // 0x170
	float Precision; // 0x180
	int32_t MaxIterations; // 0x184
	EBoneControlSpace EffectorTransformSpace; // 0x188
	EBoneRotationSource EffectorRotationSource; // 0x189
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FZeuzAPIKeyGenerateIn {
	FString ProjID; // 0x0
	FString Title; // 0x10
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FZeuzProfileItemClassConfig {
	FString Name; // 0x0
	int32_t CountMaxU; // 0x10
	FZeuzTimestamp LimitAddInterval; // 0x18
	TMap<FString, FString> Params; // 0x20
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FCharacterPersonalizationData {
	EDLC LockedToDLC; // 0x0
	FName RowName; // 0x4
	FText FriendlyName; // 0x10
	UTexture2D* Icon; // 0x28
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
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

struct FFMODLocalizedBankTable : FTableRowBase {
	UDataTable* Banks; // 0x8
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FZeuzMachineInfo {
	FString MachineID; // 0x0
	FString ResourceID; // 0x10
	FString LocationID; // 0x20
	FString AllocationID; // 0x30
	FString AccountID; // 0x40
	FZeuzMachineSpec Spec; // 0x50
	FZeuzTags Tags; // 0x78
	FString IP; // 0x88
	TArray<FString> Regions; // 0x98
	FString LocationType; // 0xa8
	FZeuzTimestamp Created; // 0xb8
	FZeuzTimestamp Finished; // 0xc0
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FZeuzEchoOut {
	FString Text; // 0x0
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FLipSync_PhonemeInPhrase {
	EPhoneme Value; // 0x0
	char Flag; // 0x1
	char FlagEmotion; // 0x2
};

struct FMusicTrack {
	USoundCue* MusicPiece; // 0x0
	bool bTransitionMusic; // 0x8
	float FadeTime; // 0xc
	float MinimumTime; // 0x10
	TArray<FMusicKeyframe> Keyframes; // 0x18
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FNiagaraVMExecutableData {
	TArray<char> ByteCode; // 0x0
	TArray<char> OptimizedByteCode; // 0x10
	int32_t NumTempRegisters; // 0x20
	int32_t NumUserPtrs; // 0x24
	TArray<FNiagaraCompilerTag> CompileTags; // 0x28
	TArray<char> ScriptLiterals; // 0x38
	TArray<FNiagaraVariable> Attributes; // 0x48
	FNiagaraScriptDataUsageInfo DataUsage; // 0x58
	TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0x60
	TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0x70
	TArray<FNiagaraDataSetID> ReadDataSets; // 0x90
	TArray<FNiagaraDataSetProperties> WriteDataSets; // 0xa0
	TArray<FNiagaraStatScope> StatScopes; // 0xb0
	TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0xc0
	ENiagaraScriptCompileStatus LastCompileStatus; // 0xd0
	TArray<FSimulationStageMetaData> SimulationStageMetaData; // 0xd8
	char bReadsSignificanceIndex : 1; // 0xe8
	char bNeedsGPUContextInit : 1; // 0xe8
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FMusicKeyframe {
	float Position; // 0x0
	FName Label; // 0x4
	bool bTransitionExit; // 0xc
	USoundCue* TransitionPiece; // 0x10
};

struct FZeuzLobbyStateOut : FZeuzLobbyStateBase {
	FString InboxID; // 0x38
	bool HasPassword; // 0x48
	int32_t UsersCur; // 0x4c
	int32_t Version; // 0x50
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FRepGearAttach {
	bool bEquipped; // 0x0
	bool bMeshVisibleTo1P; // 0x1
	bool bMeshVisibleTo3P; // 0x2
	USceneComponent* Attach1P; // 0x8
	FName Socket1P; // 0x10
	USceneComponent* Attach3P; // 0x18
	FName Socket3P; // 0x20
	USceneComponent* ScopeAttach; // 0x28
	FName ScopeSocket; // 0x30
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
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

struct FMovieSceneFloatChannel : FMovieSceneChannel {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x8
	ERichCurveExtrapolation PostInfinityExtrap; // 0x9
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneFloatValue> Values; // 0x20
	float DefaultValue; // 0x30
	bool bHasDefaultValue; // 0x34
	FMovieSceneKeyHandleMap KeyHandles; // 0x38
	FFrameRate TickResolution; // 0x98
};

struct FZeuzContext {
	FString Endpoint; // 0x0
	FString SessionID; // 0x10
	FString SessionKey; // 0x20
	FString UserID; // 0x30
	FString DeveloperID; // 0x40
	FString ProjID; // 0x50
	FString EnvID; // 0x60
	FString Login; // 0x70
	FString PWHash; // 0x80
	EZeuzSessionType LoginType; // 0x90
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FDockTabStyle : FSlateWidgetStyle {
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

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FLipSync_Interval {
	int32_t PhonemeIndex; // 0x0
	float StartTime; // 0x4
	float EndTime; // 0x8
	char Flag; // 0xc
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FZeuzAdminStatsOut {
	TArray<FZeuzAdminStat> Stats; // 0x0
};

struct FZeuzMachineSpec {
	FString OS; // 0x0
	int32_t CoreCount; // 0x10
	int32_t CoreMhz; // 0x14
	int32_t MemoryMB; // 0x18
	int32_t StorageGB; // 0x1c
	int32_t IOBandwidthMBps; // 0x20
	int32_t InetBandwidthMBps; // 0x24
};

struct FCharacterMesh {
	FGuid Guid; // 0x0
	USkeletalMesh* Body; // 0x10
	USkeletalMesh* Head; // 0x18
	UPoseAsset* FaceROM; // 0x20
	FString CharacterSpeechHandle; // 0x28
	TArray<FAttachedMeshData> AttachedMeshData; // 0x38
	TArray<FAttachedSkeletalMeshData> AttachedSkeletalMeshData; // 0x48
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

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FZeuzEcho3In {
	int32_t Num; // 0x0
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FPingData {
	FSlateBrush IconBrush; // 0x0
	FText PingText; // 0x88
	float Duration; // 0xa0
};

struct FBPSteamGroupOfficer {
	FBPUniqueNetId OfficerUniqueNetID; // 0x0
	bool bIsOwner; // 0x20
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FZeuzProfileUserLookupIn {
	FString Login; // 0x0
	FString Name; // 0x10
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
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

struct FBodyInstanceCore {
	char bSimulatePhysics : 1; // 0x10
	char bOverrideMass : 1; // 0x10
	char bEnableGravity : 1; // 0x10
	char bAutoWeld : 1; // 0x10
	char bStartAwake : 1; // 0x10
	char bGenerateWakeEvents : 1; // 0x10
	char bUpdateMassWhenScaleChanges : 1; // 0x10
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FSavedCullDistanceSettings {
	TMap<FString, float> CullDistanceSettingsMap; // 0x0
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
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

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
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

struct FCameraShakeStopParams {
	bool bImmediately; // 0x0
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FFMODOcclusionDetails {
	bool bEnableOcclusion; // 0x0
	ECollisionChannel OcclusionTraceChannel; // 0x1
	bool bUseComplexCollisionForOcclusion; // 0x2
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FWaveOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialWaveOscillatorOffsetType InitialOffsetType; // 0x8
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FHesitationOutcomeSettings {
	FString CustomVoicelineToPlay; // 0x0
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FConversationData : FTableRowBase {
	FName SpeakerId; // 0x8
	FName LookAtSpeakerId; // 0x10
	bool bUseVoiceLineFromSpeechTable; // 0x18
	FString VoiceLineRowName; // 0x20
	USoundWave* VoiceLineWav; // 0x30
	AAICharacter* Speaker; // 0x38
	float AdditionalDelayAfterVoiceLineBeforeNextSpeaker; // 0x40
	FName RequiredTag; // 0x44
	TArray<ECyberneticsLevel> CyberneticsLevel; // 0x50
	ETeamType TeamType; // 0x60
	float MaxDistance; // 0x64
	bool bRequireLineOfSight; // 0x68
	bool bOptionalSpeaker; // 0x69
	int32_t SkipXAfterOptionalSpeakerNotFound; // 0x6c
	FName GiveWorldBuildingActivityByTagOnStartConversation; // 0x70
	FName GiveWorldBuildingActivityByTagAfterConversation; // 0x78
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

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
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

struct FKey {
	FName KeyName; // 0x0
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FMODParam {
	FName paramName; // 0x0
	float paramVal; // 0x8
};

struct FMotivityPoseSnapshot : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	TArray<FBoneReference> BonesToRecord; // 0x20
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FShotgunVisuals {
	TArray<UStaticMesh*> ShellVisuals; // 0x0
};

struct FDynamicLevelRoster {
	float OverallSpawnPercent; // 0x0
	int32_t MinimumPicks; // 0x4
	int32_t MaximumPicks; // 0x8
	TArray<FDynamicLevelDataPick> SpawnLevel; // 0x10
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
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

struct FZeuzAdminLogsIn {
	FString Start; // 0x0
	FString End; // 0x10
	FString Account; // 0x20
	FString Project; // 0x30
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
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

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FSwatCommand : FTableRowBase {
	FKey InputKey; // 0x8
	FText CommandText; // 0x20
	FText CommandTextAggressive; // 0x38
	UTexture2D* CommandIcon; // 0x50
	ESwatCommand CommandType; // 0x58
	bool bGrabContextualDataOnExecute; // 0x70
	bool bEnabled; // 0x71
	AActor* CommandTarget; // 0x78
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
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

struct FNiagaraOutlinerCaptureSettings {
	bool bTriggerCapture; // 0x0
	uint32_t CaptureDelayFrames; // 0x4
	bool bGatherPerfData; // 0x8
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FPlayerDetails {
	FString PlayerName; // 0x0
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FMissionDoc {
	FText DocumentTitle; // 0x0
	FText DocumentText; // 0x18
	FText DocumentButtonText; // 0x30
	FText DocumentButtonDescriptionText; // 0x48
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
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

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FZeuzAccountChange {
	FString Account; // 0x0
};

struct FNiagaraDebuggerRequestConnection {
	FGuid SessionID; // 0x0
	FGuid InstanceId; // 0x10
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FNiagaraCompilerTag {
	FNiagaraVariable Variable; // 0x0
	FString StringValue; // 0x20
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
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

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FTrajectoryPoint {
	FVector Position; // 0x0
	float FacingAngle; // 0xc
	float TimeOffset; // 0x10
};

struct FZeuzImageManagerManifestEntryPart {
	FString Hash; // 0x0
	FString URL; // 0x10
	int32_t Index; // 0x20
	int32_t StartByte; // 0x24
	int32_t Length; // 0x28
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

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FPostProcessEffect {
	char bEnabled : 1; // 0x0
	char bCustomProcess : 1; // 0x0
	char bDebug : 1; // 0x0
	FName EffectName; // 0x4
	TArray<FPostProcessEffectPlayer> PostProcesses; // 0x10
	char bStarted : 1; // 0x20
};

struct FZeuzImageManagerListEntry {
	FZeuzTimestamp Timestamp; // 0x0
	FString ImageHash; // 0x8
	FString ImageURL; // 0x18
	FString Title; // 0x28
	FString Version; // 0x38
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FClothCollisionPrim_Convex {
	TArray<FClothCollisionPrim_ConvexFace> Faces; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FCoverActorData {
	ACoverActor* CoverActor; // 0x0
	ACoverActor* FallbackCoverActor; // 0x8
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FZeuzPayloadUpdateIn {
	FString PayloadID; // 0x0
	FZeuzPayloadDef PayloadDef; // 0x10
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FHesitationData {
	FHesitationGeneralData General; // 0x0
	FHesitationZoneData NeutralZone; // 0xa8
	FHesitationNonNeutralZoneData ComplianceZone; // 0xd8
	FHesitationNonNeutralZoneData DefianceZone; // 0x128
	FHesitationNonNeutralZoneData DefianceZoneStart; // 0x178
	FHesitationNonNeutralZoneData DefianceZoneEnd; // 0x1c8
	FHesitationActions Actions; // 0x218
	FHesitationCooldownData Cooldown; // 0x988
	float Progress; // 0x9a8
};

struct FAIDynamicParam {
	FName paramName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FFMODLocalizedBankRow : FTableRowBase {
	FString Path; // 0x8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
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

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FZeuzAdminEnvIn {
	FString ProjectID; // 0x0
};

struct FNiagaraOutlinerData {
	TMap<FString, FNiagaraOutlinerWorldData> WorldData; // 0x0
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FAnimatedIcon {
	TArray<UTexture2D*> Icons; // 0x0
	float FrameRate; // 0x10
};

struct FTrajectoryData {
	TArray<FTrajectoryPoint> TrajectoryPoints; // 0x0
};

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
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

struct FST_Briefing_Entry {
	USoundWave* AudioAsset_18_AE380FA147F0A4186604A89FAC2743CE; // 0x0
	TArray<FTimelineEvent> Events_30_03979F8A41EF9AF10869A9A57A7DF9FF; // 0x8
	TArray<FST_Briefing_Transcript_Entry> Transcript_29_8D885E2649115827BEA8FEA92B9D41AD; // 0x18
};

struct FLevelDeployableData {
	UDeployableData* DeployableData; // 0x0
	int32_t PtsCost; // 0x8
};

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FNiagaraRibbonUVSettings {
	ENiagaraRibbonUVDistributionMode DistributionMode; // 0x0
	ENiagaraRibbonUVEdgeMode LeadingEdgeMode; // 0x4
	ENiagaraRibbonUVEdgeMode TrailingEdgeMode; // 0x8
	float TilingLength; // 0xc
	FVector2D Offset; // 0x10
	FVector2D Scale; // 0x18
	bool bEnablePerParticleUOverride; // 0x20
	bool bEnablePerParticleVRangeOverride; // 0x21
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FRoNStyleIdleData {
	TArray<UAnimSequence*> BaseIdleData; // 0x0
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FMissionAudio {
	FText AudioName; // 0x0
	FText AudioDescription; // 0x18
	FString AudioInternalName; // 0x30
	USoundWave* SoundFile; // 0x40
	TArray<FTranscript> AudioTranscript; // 0x48
};

struct FMovieSceneObjectBindingID {
	FGuid Guid; // 0x0
	int32_t SequenceID; // 0x10
	int32_t ResolveParentIndex; // 0x14
};

struct FZeuzLogsearchAccountLog {
	FString ID; // 0x0
	int32_t Time; // 0x10
	FString Message; // 0x18
	int32_t Level; // 0x28
	FString Subroutine; // 0x30
	FString Container; // 0x40
	FString Proj; // 0x50
	FString Env; // 0x60
	FString Allocation; // 0x70
	FString Payload; // 0x80
	FString Machine; // 0x90
};

struct FZeuzLobbyStateBase {
	FString LobbyID; // 0x0
	int32_t UsersMax; // 0x10
	bool Private; // 0x14
	bool HasStarted; // 0x15
	FString Compatibility; // 0x18
	FZeuzVariant Params; // 0x28
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FNiagaraDebuggerExecuteConsoleCommand {
	FString Command; // 0x0
	bool bRequiresWorld; // 0x10
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FNiagaraSystemScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bCullByDistance : 1; // 0x30
	char bCullMaxInstanceCount : 1; // 0x30
	char bCullPerSystemMaxInstanceCount : 1; // 0x30
	char bCullByMaxTimeWithoutRender : 1; // 0x30
	char bCullByGlobalBudget : 1; // 0x30
	float MaxDistance; // 0x34
	int32_t MaxInstances; // 0x38
	int32_t MaxSystemInstances; // 0x3c
	float MaxTimeWithoutRender; // 0x40
	float MaxGlobalBudgetUsage; // 0x44
};

struct FZeuzPayloadInfo {
	FString PayloadID; // 0x0
	FString MachineID; // 0x10
	FString AllocationID; // 0x20
	FString EnvID; // 0x30
	TArray<FString> Regions; // 0x40
	FZeuzPayloadDef PayloadDef; // 0x50
	bool Active; // 0x90
	bool Reserved; // 0x91
	FString IP; // 0x98
	TArray<FZeuzPayloadPortMapping> PortMapping; // 0xa8
	FString Handling; // 0xb8
	FString LocationType; // 0xc8
	FZeuzTimestamp Created; // 0xd8
	FZeuzTimestamp Modified; // 0xe0
};

struct FZeuzPayloadPagination {
	bool GetTotal; // 0x0
	int32_t Offset; // 0x4
	int32_t Limit; // 0x8
	FString OrderBy; // 0x10
	bool OrderAsc; // 0x20
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
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

struct FST_Briefing_Intel {
	TArray<FCharacterBio> Suspects_3_1F38882143647E72B7710E9F998A769A; // 0x0
	TArray<FCharacterBio> Civilians_5_58A8BC4A4E76733A82B552B28318CEFE; // 0x10
	TArray<FST_Briefing_Evidence> Media_8_C98182884A05C6FF2067789E80449206; // 0x20
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FZeuzAllocationGetIn : FZeuzAllocationPagination {
	TArray<FString> AllocationIDs; // 0x28
	bool GetDisabled; // 0x38
	bool GetEnabled; // 0x39
	FString Region; // 0x40
	FString OS; // 0x50
};

struct FAnimationDataTable : FTableRowBase {
	TMap<EAnimWeaponType, FAnimStanceData> AnimData; // 0x8
	bool bRestartIfAlreadyPlaying; // 0x58
	bool bStartAtRandomTime; // 0x59
	float MaxRandomDelay; // 0x5c
	float Cooldown; // 0x60
	bool bNoCanPlayWhileStrafing; // 0x64
	bool bNoCanPlayWhileNotStrafing; // 0x65
	bool bCanQueue; // 0x66
	bool bCanAnimationBeInterupted; // 0x67
	TArray<FString> CanOnlyBeInteruptedBy; // 0x68
};

struct FCivilianTweakables {
	TArray<ACoverActor*> CoverActors; // 0x0
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
	char bOverrideGlobalBudgetCullingSettings : 1; // 0x48
};

struct FZeuzEchoIn {
	FString Text; // 0x0
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FString ShortDescription; // 0x18
	bool bDismissable; // 0x28
	FGuid NodeGuid; // 0x2c
	FGuid PinGuid; // 0x3c
	TArray<FGuid> StackGuids; // 0x50
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FZeuzAccountDeveloperCreateIn {
	FString Login; // 0x0
	FString Title; // 0x10
	FString Desc; // 0x20
	FString AccountID; // 0x30
	int32_t AccountRole; // 0x40
	FString PWHash; // 0x48
	FZeuzProperties Props; // 0x58
};

struct FInGameLogMessage_PVP {
	AReadyOrNotCharacter* Causer; // 0x0
	AReadyOrNotCharacter* Victim; // 0x8
	EPVPEvent PVPEvent; // 0x10
	FText CustomMessage; // 0x18
	ECharacterDeathReason CauseOfDeath; // 0x30
	float TimeOnScreen; // 0x34
};

struct FZeuzLobbyQueryIn {
	int32_t ListMax; // 0x0
	int32_t ListOfs; // 0x4
	FString Filter; // 0x8
	FString Compatibility; // 0x18
	FZeuzVariant Params; // 0x28
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FZeuzRegion : FZeuzItemCommon {
	FString RegionID; // 0x88
	FString DisplayName; // 0x98
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

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float LowPassFilterFrequency; // 0x8
	float AttenuationDistanceScale; // 0xc
	float LFEBleed; // 0x10
	float VoiceCenterChannelVolume; // 0x14
	float RadioFilterVolume; // 0x18
	float RadioFilterVolumeThreshold; // 0x1c
	char bApplyEffects : 1; // 0x20
	char bAlwaysPlay : 1; // 0x20
	char bIsUISound : 1; // 0x20
	char bIsMusic : 1; // 0x20
	char bCenterChannelOnly : 1; // 0x20
	char bApplyAmbientVolumes : 1; // 0x20
	char bReverb : 1; // 0x20
	float Default2DReverbSendAmount; // 0x24
	FSoundModulationDefaultSettings ModulationSettings; // 0x28
	EAudioOutputTarget OutputTarget; // 0x68
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x69
	USoundSubmix* DefaultSubmix; // 0x70
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FString OverrideBoundPropertyPath; // 0x0
	FFrameNumber ForcedTime; // 0x10
	ESectionEvaluationFlags Flags; // 0x18
	char bEvaluateInSequencePreRoll : 1; // 0x19
	char bEvaluateInSequencePostRoll : 1; // 0x19
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FCurveAtlasColorAdjustments {
	char bChromaKeyTexture : 1; // 0x0
	float AdjustBrightness; // 0x4
	float AdjustBrightnessCurve; // 0x8
	float AdjustVibrance; // 0xc
	float AdjustSaturation; // 0x10
	float AdjustRGBCurve; // 0x14
	float AdjustHue; // 0x18
	float AdjustMinAlpha; // 0x1c
	float AdjustMaxAlpha; // 0x20
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

struct FZeuzMachineResourceGetIn {
	TArray<FString> ResourceIDs; // 0x0
	FString RegionID; // 0x10
	FZeuzMachineSpec MinSpec; // 0x20
	TArray<FString> MachineType; // 0x48
	TArray<FString> Accounts; // 0x58
	TArray<FString> Machines; // 0x68
	TArray<FString> Providers; // 0x78
	int32_t MinTierLevel; // 0x88
	bool GetBound; // 0x8c
	bool GetUnbound; // 0x8d
	bool ForAllocation; // 0x8e
	bool ForDeprovisioning; // 0x8f
};

struct FZeuzAllocationPayloadInfo {
	FString PayloadID; // 0x0
	FString MachineID; // 0x10
	FString AllocationID; // 0x20
	FString EnvID; // 0x30
	TArray<FString> Regions; // 0x40
	FZeuzPayloadDef PayloadDef; // 0x50
	bool Active; // 0x90
	bool Reserved; // 0x91
	FString IP; // 0x98
	TArray<FZeuzAllocationPayloadPortMapping> PortMapping; // 0xa8
	FString Handling; // 0xb8
	FString LocationType; // 0xc8
	FZeuzTimestamp Created; // 0xd8
	FZeuzTimestamp Modified; // 0xe0
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FSplinePoint {
	float InputKey; // 0x0
	FVector Position; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	FRotator Rotation; // 0x28
	FVector Scale; // 0x34
	ESplinePointType Type; // 0x40
};

struct FHLODInstancingKey {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FZeuzAdminItemsOut {
	TArray<FZeuzAdminItem> Items; // 0x0
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
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

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FZeuzAccountTeamDeleteIn : FZeuzAccountChange {
	FString Team; // 0x10
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x90
	FSlateBrush DisabledBarImage; // 0x118
	FSlateBrush NormalThumbImage; // 0x1a0
	FSlateBrush HoveredThumbImage; // 0x228
	FSlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FWindowStyle : FSlateWidgetStyle {
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

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
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

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FWeaponData {
	TArray<EWeaponType> IncludedInWeaponCategories; // 0x0
	FString Name; // 0x10
	UTexture2D* Image; // 0x20
	FText WeaponType; // 0x28
	EItemClass ItemClass; // 0x40
	TSoftClassPtr<UObject> Blueprint; // 0x48
	EAmmoType SelectedAmmoType; // 0x70
	float PointsAvailable; // 0x74
	TSoftObjectPtr<UTexture2D> FactorySkinImage; // 0x78
	TArray<USkinComponent*> AvailableSkins; // 0xa0
	USkinComponent* CurrentSkin; // 0xb0
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FZeuzPayloadAllocateIn {
	FString AllocationID; // 0x0
	FString RegionID; // 0x10
	int32_t Count; // 0x20
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FTextBlockStyle : FSlateWidgetStyle {
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

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FBuildingFloor {
	int32_t Number; // 0x0
	float Height; // 0x4
	FVector Location; // 0x8
	FVector Extent; // 0x14
	FText Name; // 0x20
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
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

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FCameraShakeStartParams {
	bool bIsRestarting; // 0x0
};

struct FSKeybinding {
	bool bEnabled_25_F08E79EB4E2E6CF698DEAAA10E295B56; // 0x0
	bool bAxis_1_A1DF4F6E4BDA7692A09F6FA8C8645DBE; // 0x1
	FName BindingName_4_DD389C7B4C014D8F5C467B8170ED4730; // 0x4
	FText FriendlyName_7_CB00E99E4223301A552C01A676160904; // 0x10
	FText Description_9_AF6F4EDC41981F1568B1BD8AB92DDD79; // 0x28
	float AxisScale_12_AA83EADC43835EFEA1B4309EA12EAC6A; // 0x40
	EInputKeyCategory InputKeyCategory_18_F956E79941840E04EF8A899C710B2267; // 0x44
	bool bCannotBeUnbindable_20_43E4DD77401AC44133B6A2A2A65C12BE; // 0x45
	bool bIsReadOnly_23_7CD813F14C5C7D1564166F80ED60C1D6; // 0x46
};

struct FZeuzEcho2In {
	FString Text; // 0x0
};

struct FTemplateSectionPropertyScale {
	FGuid ObjectBinding; // 0x0
	FMovieScenePropertyBinding PropertyBinding; // 0x10
	ETemplateSectionPropertyScaleType PropertyScaleType; // 0x24
	FMovieSceneFloatChannel FloatChannel; // 0x28
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
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

struct FZeuzAdminStatsIn {
	FString Table; // 0x0
	FString Start; // 0x10
	FString End; // 0x20
	FString GroupBy; // 0x30
	FString Count; // 0x40
};

struct FActivityStateTransition {
	int32_t TransitionToStateID; // 0x0
	FString TransitionToStateName; // 0x8
	int32_t Priority; // 0x18
	FDelegate TransitionDelegate; // 0x1c
	UActivityState* ToState; // 0x30
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FAnimNode_OrientationWarping : FAnimNode_SkeletalControlBase {
	float LocomotionAngle; // 0xc8
	FOrientationWarpingSettings Settings; // 0xd0
	TArray<FOrientationWarpingSpineBoneData> SpineBoneDataArray; // 0x108
	float CachedDeltaTime; // 0x12c
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FZeuzTeam : FZeuzItemCommon {
	FString ID; // 0x88
	FString Account; // 0x98
	FString Desc; // 0xa8
	TArray<FString> Devs; // 0xb8
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FNiagaraOutlinerEmitterInstanceData {
	FString EmitterName; // 0x0
	ENiagaraSimTarget SimTarget; // 0x10
	ENiagaraExecutionState ExecState; // 0x14
	int32_t NumParticles; // 0x18
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
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

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FZeuzAllocationPagination {
	bool GetTotal; // 0x0
	int32_t Offset; // 0x4
	int32_t Limit; // 0x8
	FString OrderBy; // 0x10
	bool OrderAsc; // 0x20
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x90
	FSlateBrush Pressed; // 0x118
	FSlateBrush Disabled; // 0x1a0
	FMargin NormalPadding; // 0x228
	FMargin PressedPadding; // 0x238
	FSlateSound PressedSlateSound; // 0x248
	FSlateSound HoveredSlateSound; // 0x260
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FSlopeWarpingFootDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x10
	int32_t NumBonesInLimb; // 0x20
	FName ToeSocketName; // 0x24
	FName HeelSocketName; // 0x2c
	float FootSize; // 0x34
};

struct FActivityRoute {
	float TimeDoingActivity; // 0x0
	AWorldBuildingPlacementActor* WorldBuildingPlacementActivity; // 0x8
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
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

struct FNiagaraScalabilityState {
	float Significance; // 0x0
	char bCulled : 1; // 0x4
	char bPreviousCulled : 1; // 0x4
	char bCulledByDistance : 1; // 0x4
	char bCulledByInstanceCount : 1; // 0x4
	char bCulledByVisibility : 1; // 0x4
	char bCulledByGlobalBudget : 1; // 0x4
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

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FZeuzPayloadCreateIn {
	FString AllocationID; // 0x0
	FString MachineID; // 0x10
	FZeuzPayloadDef PayloadDef; // 0x20
	FString Hostname; // 0x60
	int32_t TTL; // 0x70
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FCustomPoolSizes {
	int32_t Desktop; // 0x0
	int32_t Mobile; // 0x4
	int32_t PS4; // 0x8
	int32_t Switch; // 0xc
	int32_t XboxOne; // 0x10
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
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

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FTrapSpawnType {
	ATrapActor* SpawnClass; // 0x0
	float Chance; // 0x8
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
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

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FItemChangeRequest {
	FGuid ChangeId; // 0x0
	ABaseItem* FromItem; // 0x10
	ABaseItem* ToItem; // 0x18
	bool bInstant; // 0x20
	bool bNoDraw; // 0x21
	bool bIsComplete; // 0x22
};

struct FSpawnedGear {
	FGuid Guid; // 0x0
	ABaseItem* Primary; // 0x10
	ABaseItem* Secondary; // 0x18
	ABaseItem* Armor; // 0x20
	ABaseItem* Helmet; // 0x28
	ABaseItem* RandomGear; // 0x30
	UPlayableCharacterData* Character; // 0x38
	ABaseItem* LongTactical; // 0x40
	TArray<ABaseItem*> Grenades; // 0x48
	TArray<ABaseItem*> TacticalDevices; // 0x58
	TArray<ABaseItem*> Miscelaneous; // 0x68
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FZeuzInvItem : FZeuzItemCommon {
	FString ID; // 0x88
	FString UserID; // 0x98
	FString Name; // 0xa8
	int32_t Count; // 0xb8
};

struct FQuartzTransportTimeStamp {
	int32_t Bars; // 0x0
	int32_t Beat; // 0x4
	float BeatFraction; // 0x8
	float Seconds; // 0xc
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FNiagaraBakerTextureSource {
	FName SourceName; // 0x0
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
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

struct FAIMoveDataBlock {
	FName UnarmedMovementStyle; // 0x0
	FName RifleMovementStyle; // 0x8
	FName RifleStrafeMovementStyle; // 0x10
	FName RifleStrafeFastMovementStyle; // 0x18
	FName HeavyRifleStrafeMovementStyle; // 0x20
	FName RifleStrafeCrouchMovementSet; // 0x28
	FName PistolMovementStyle; // 0x30
	FName PistolStrafeMovementStyle; // 0x38
	FName PistolStrafeCrouchMovementStyle; // 0x40
	FName ComplyMovementStyle; // 0x48
	FName CuffedMovementStyle; // 0x50
	FName StunnedMovementStyle; // 0x58
	FName GassedMovementStyle; // 0x60
	FName InjuredMovementStyle; // 0x68
	FName SprintMovementStyle; // 0x70
	TArray<FName> UnarmedCalmStyles; // 0x78
	TArray<FName> UnarmedPanicStyles; // 0x88
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FZeuzAPIKeyGetIn {
	FString APIKeyID; // 0x0
	FString ProjID; // 0x10
	bool NotRevoked; // 0x20
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
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

struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID PathBindingID; // 0x20
	FMovieSceneFloatChannel TimingCurve; // 0x38
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0xd8
	MovieScene3DPathSection_Axis UpAxisEnum; // 0xd9
	char bFollow : 1; // 0xdc
	char bReverse : 1; // 0xdc
	char bForceUpright : 1; // 0xdc
};

struct FNiagaraAssetVersion {
	int32_t MajorVersion; // 0x0
	int32_t MinorVersion; // 0x4
	FGuid VersionGuid; // 0x8
	bool bIsVisibleInVersionSelector; // 0x18
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
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

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
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

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FNiagaraSimpleClientInfo {
	TArray<FString> Systems; // 0x0
	TArray<FString> Actors; // 0x10
	TArray<FString> Components; // 0x20
	TArray<FString> Emitters; // 0x30
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FFMODAttenuationDetails {
	char bOverrideAttenuation : 1; // 0x0
	float MinimumDistance; // 0x4
	float MaximumDistance; // 0x8
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FBPOnlineUser {
	FBPUniqueNetId UniqueNetId; // 0x0
	FString DisplayName; // 0x20
	FString RealName; // 0x30
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FZeuzAllocationRegionCount {
	FString RegionID; // 0x0
	int32_t Count; // 0x10
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

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FRoNGaitType {
	FString Name; // 0x0
	FRoNGaitTransitionData TransitionData; // 0x10
	FRoNGaitLocomotionData LocomotionData; // 0x130
	float Speed; // 0x1f0
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
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

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
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

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
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

struct FAnimNotifyEvent : FAnimLinkableElement {
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

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
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

struct FHealingData {
	float CurrentHealth; // 0x0
	float MinHealth; // 0x4
	float MaxHealth; // 0x8
	FName HealerName; // 0xc
	FName HealeeName; // 0x14
	EMedicalHealScreen HealScreen; // 0x1c
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

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FST_Briefing_Transcript_Entry {
	FText SpeakerName_18_E86FAEA344EC0CEE0EDA9C969C9B9402; // 0x0
	FText Transcription_20_03979F8A41EF9AF10869A9A57A7DF9FF; // 0x18
	FText FictionalTimestamp_19_DBEA116B4C9AEC7CF0D0868F015AC196; // 0x30
	float TimelineStartinSeconds_15_AE380FA147F0A4186604A89FAC2743CE; // 0x48
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FLimbHealthData {
	float Health; // 0x8
	float MaxHealth; // 0xc
	float MaxHealthLimit; // 0x10
	float LowHealthThreshold; // 0x14
	float LimbDamageMultiplier; // 0x18
	int32_t MaxTickets; // 0x1c
	int32_t Tickets; // 0x20
	int32_t MaxLimbHealthHalving; // 0x24
	float OriginalMaxHealth; // 0x28
	float LowHealth; // 0x2c
	float PreviousHealth; // 0x30
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

struct FPromptInfo {
	ETutorialMessageContext PromptContext; // 0x0
	FKey ActionKey; // 0x8
	EInputEvent InputType; // 0x20
	FText ActionText; // 0x28
};

struct FCameraShakeUpdateParams {
	float DeltaTime; // 0x0
	float ShakeScale; // 0x4
	float DynamicScale; // 0x8
	float BlendingWeight; // 0xc
	FMinimalViewInfo POV; // 0x10
};

struct FHesitationZoneRange {
	float Start; // 0x0
	float Mid; // 0x4
	float End; // 0x8
	char bRandomRange : 1; // 0xc
	float OriginalStart; // 0x10
	float OriginalEnd; // 0x14
	float Size; // 0x18
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FZeuzAdminItem {
	FString ID; // 0x0
	FString Name; // 0x10
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FScorePenaltyData {
	FString GroupName; // 0x0
	int32_t Score; // 0x10
	int32_t PenaltyCount; // 0x14
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FZeuzProfileItemConfigGetOut {
	TArray<FZeuzProfileItemClassConfig> Classes; // 0x0
	TArray<FZeuzProfileItemConfig> Items; // 0x10
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FZeuzDeveloper : FZeuzItemCommon {
	FString ID; // 0x88
	FString Account; // 0x98
	int32_t Role; // 0xa8
	FString Login; // 0xb0
	FString Desc; // 0xc0
	FString PWHash; // 0xd0
	FZeuzTimestamp LastLogin; // 0xe0
	TArray<FString> Projects; // 0xe8
	TArray<FString> Teams; // 0xf8
	bool Revoked; // 0x108
	FZeuzTimestamp RevokedAt; // 0x110
	FZeuzTimestamp PasswordRequestExpiry; // 0x118
};

struct FTestUninitializedScriptStructMembersTest {
	UObject* UninitializedObjectReference; // 0x0
	UObject* InitializedObjectReference; // 0x8
	float UnusedValue; // 0x10
};

struct FScenarioData {
	FTransform SpawnTransform; // 0x0
	FSpawnData SpawnData; // 0x30
	TArray<FSavedCoverMap> SavedCoverMap; // 0xb20
	TArray<FSavedCoverMap> SavedCivilianCover; // 0xb30
};

struct FZeuzPayloadPortMapping {
	int32_t InternalPort; // 0x0
	int32_t ExternalPort; // 0x4
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FZeuzAccountDeveloperSetPwHashIn {
	FString CurrentPWHash; // 0x0
	FString NewPWHash; // 0x10
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FItemSelectionPanelSetting_ItemGroup {
	FName InputActionName; // 0x0
	ABaseItem* ItemToEquipOnMenuOpen; // 0x8
	TArray<EItemCategory> AllowedCategories; // 0x10
	FName ItemGroupName; // 0x20
	UTexture2D* ItemGroupIcon; // 0x28
	TArray<ABaseItem*> Items; // 0x30
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
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

struct FZeuzAccountQuotaInfo {
	FString Account; // 0x0
	int32_t QuotaCL; // 0x10
	int32_t QuotaBM; // 0x14
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FGlobalSpacePose {
	FVector Position; // 0x0
	FQuat Rotation; // 0x10
	FVector Forward; // 0x20
	TArray<FVector> JointPositions; // 0x30
	int32_t ClipId; // 0x40
	float Time; // 0x44
	bool bTrajectoryOnly; // 0x48
};

struct FZeuzAllocationUpdateIn {
	FString AllocationID; // 0x0
	FZeuzAllocationDef AllocationDef; // 0x10
	bool Enabled; // 0x128
};

struct FZeuzMachineResourceDataIn {
	FString LocationID; // 0x0
	FZeuzMachineSpec Spec; // 0x10
	FString Hostname; // 0x38
	FString Provider; // 0x48
	FString IP; // 0x58
	bool IgnoreOnAlloc; // 0x68
	FString AccountID; // 0x70
	int32_t TierLevel; // 0x80
	FZeuzTags Tags; // 0x88
	FString ResourceClusterID; // 0x98
	FString NodeID; // 0xa8
	bool AllocatingDisabled; // 0xb8
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
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

struct FInputEntry {
	FText DisplayName; // 0x0
	FString Bind; // 0x18
	FKey DefaultKeyBind1; // 0x28
	FKey DefaultKeyBind2; // 0x40
	EMapType MappingType; // 0x58
	float AxisScale; // 0x5c
	bool bDisplayOnScreen; // 0x60
	ABaseItem* ShowWithEquippedItem; // 0x68
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FLevelDataLookupTable : FTableRowBase {
	FText FriendlyLevelName; // 0x8
	FText LevelNickname; // 0x20
	UTexture2D* LevelPicture; // 0x38
	FText LevelDesignation; // 0x40
	FText TimeOfDayText; // 0x58
	FText Description; // 0x70
	TMap<ECOOPMode, FString> COOPModesLevelMap; // 0x88
	FUnlockRequirements UnlockRequirements; // 0xd8
	FMapLayout MapLayout; // 0xf0
	FLoadingScreenAnimated LoadingScreen; // 0x158
	FNVGPostProcessSettings NVG_PostProcessOverride; // 0x168
	bool bHasDesignerNotes; // 0x1a0
	FText DesignerNoteTitle; // 0x1a8
	FText DesignerNoteText; // 0x1c0
	TArray<TSoftClassPtr<UObject>> SupportedGameModes; // 0x1d8
	FText Author; // 0x1e8
	FText AuthorContact; // 0x200
	FText RecommendedPlayerCount; // 0x218
	bool bIsTestLevel; // 0x230
	bool bVisible; // 0x231
	FVector MVPSequenceLocation; // 0x234
	TArray<TSoftClassPtr<UObject>> Objectives; // 0x240
	TArray<TSoftClassPtr<UObject>> Challenges; // 0x250
	FText LevelLocationText; // 0x260
	FText LevelMonthNum; // 0x278
	FText LevelDayNum; // 0x290
	FText LevelYearNum; // 0x2a8
	FMissionAudio TocBriefingAudio; // 0x2c0
	TArray<FMissionAudio> MissionAudio; // 0x318
	TArray<FMissionDoc> Documents; // 0x328
	TArray<FMissionPhoto> Photos; // 0x338
	TArray<FCharacterBio> SuspectsBios; // 0x348
	TArray<FCharacterBio> CiviliansBios; // 0x358
	FMissionTimeline MissionTimeline; // 0x368
	int32_t BaseSquadPts; // 0x378
	TArray<FLevelFloorData> MapFloors; // 0x380
	FSpawnPoints Spawn_2; // 0x390
	FSpawnPoints Spawn_3; // 0x400
	FSpawnPoints Spawn_4; // 0x470
	FSpawnPoints Spawn_5; // 0x4e0
	TArray<FAIRoster> AISpawnRosters; // 0x550
	TArray<FDynamicLevelRoster> DynamicLevelSpawnRosters; // 0x560
	TArray<FTrapRoster> TrapRosters; // 0x570
	TArray<FPersonnelMapPoint> AllPersonnelMapPoints; // 0x580
	TArray<FPersonnelEntry> AllPersonnel; // 0x590
	TArray<FLevelDeployableData> Deployables; // 0x5a0
	TArray<FLevelDeployableDepot> DeployableDepots; // 0x5b0
	AMusicSequencerBase* MusicSequencerClass; // 0x5c0
	bool bUseMissionDispatch; // 0x5c8
	bool bUnskippableDispatch; // 0x5c9
	TSoftObjectPtr<USoundBase> DispatchAudio; // 0x5d0
	UUserWidget* DispatchWidget; // 0x5f8
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

struct FZeuzLogsearchAccountIn {
	FZeuzTimestamp Start; // 0x0
	FZeuzTimestamp End; // 0x8
	FString Level; // 0x10
	FString Payload; // 0x20
	FString Query; // 0x30
	FString OrderBy; // 0x40
	bool OrderAsc; // 0x50
	int32_t LastLevel; // 0x54
	int32_t LastTime; // 0x58
	FString LastID; // 0x60
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
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

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FDebugData {
	FText Label; // 0x0
	FText Value; // 0x18
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FNiagaraDebuggerOutlinerUpdate {
	FNiagaraOutlinerData OutlinerData; // 0x0
};

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendoutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
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

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FCharacterSharedAnim {
	UAnimMontage* TP_Anim; // 0x0
	UAnimMontage* FP_Anim; // 0x8
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FPlayerActionPromptSlot {
	FName InputActionName; // 0x0
	EInputEvent InputEvent; // 0x8
	FText ActionText; // 0x10
	FString ColorLabel; // 0x28
	char bUseCustomActionText : 1; // 0x38
	FText CustomActionPromptText; // 0x40
	char bCheckForDisallowedItems : 1; // 0x58
	char bUseCustomDisallowedActionText : 1; // 0x58
	FText DisallowedItemActionText; // 0x60
	TArray<EItemCategory> DisallowedItems; // 0x78
	char bAnimate : 1; // 0x88
	char bLoopAnimation : 1; // 0x88
	char bCondition : 1; // 0x88
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FST_Style_Buttons_Fonts {
	FST_Style_Text NormalFont_13_A392AE454CEDE936EA30FF8489E8DC2A; // 0x0
	FST_Style_Text HoveredFont_15_548BC9714B44E9CC5E3873A4419A8B82; // 0x90
	FST_Style_Text PressedFont_17_5964A64045B10C5274974A9D98BC7936; // 0x120
	FST_Style_Text DisabledFont_19_7B7C38904B3B853E31370ABA55210B82; // 0x1b0
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
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

struct FBasicLevelStats {
	float BestRating; // 0x0
	float BestTime; // 0x4
	int32_t TimesCompleted; // 0x8
};

struct FRootMotionSource_RadialForce : FRootMotionSource {
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

struct FAssetBundleEntry {
	FName BundleName; // 0x0
	TArray<FSoftObjectPath> BundleAssets; // 0x8
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FPMap {
	TArray<FString> BLPN; // 0x0
	TArray<FString> BLPHZ; // 0x10
	TArray<FString> BLWT; // 0x20
	TArray<FString> BLDLLHZ; // 0x30
	TArray<FString> BLDLLN; // 0x40
};

struct FZeuzAdminAccountIn {
	FString AccountID; // 0x0
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	FBoneReference ChainStartBone; // 0x24
	FBoneReference ChainEndBone; // 0x34
	FVector TargetLocation; // 0x44
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EScaleChainInitialLength ChainInitialLength; // 0x60
};

struct FNiagaraOutlinerWorldData {
	TMap<FString, FNiagaraOutlinerSystemData> Systems; // 0x0
	bool bHasBegunPlay; // 0x50
	char WorldType; // 0x51
	char NetMode; // 0x52
	FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x54
	FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x5c
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
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

struct FZeuzPayloadGetOut {
	TArray<FZeuzPayloadInfo> Items; // 0x0
	int32_t Count; // 0x10
};

struct FAnimNode_TwoWayBlend : FAnimNode_Base {
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

struct FZeuzImageManagerPushPullOutput {
	FZeuzImageManagerManifest Manifest; // 0x0
	FString ManifestHash; // 0x10
	TArray<FString> TransferHashes; // 0x20
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
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

struct FTutorialActionPromptSlot {
	FName InputActionName; // 0x0
	EInputEvent InputEvent; // 0x8
	FText ActionText; // 0x10
	bool bIsAxisEvent; // 0x28
	int32_t KeyIndex; // 0x2c
	char bUseCustomActionText : 1; // 0x30
	FText CustomActionPromptText; // 0x38
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FFriend {
	FString DisplayName; // 0x0
	FString RealName; // 0x10
	FString Presence; // 0x20
	FString StatusString; // 0x30
	int32_t StatusState; // 0x40
	FString UniqueNetId; // 0x48
	bool bRunningSameGame; // 0x58
	bool bHasVoice; // 0x59
	bool bJoinable; // 0x5a
};

struct FZeuzAdminItemsIn {
	FString Table; // 0x0
	FString Query; // 0x10
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FGrenadeDamage {
	UDamageType* DamageType; // 0x0
	float MaxDamageOnDetonation; // 0x8
	float MinDamageOnDetonation; // 0xc
	float DamageInnerRadius; // 0x10
	float DamageOuterRadius; // 0x14
};

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FWorldBuildingAnimState {
	bool bIsPlaying; // 0x0
	UAnimSequence* StartAnim; // 0x8
	UAnimSequence* LoopAnim; // 0x10
	UAnimSequence* EndAnim; // 0x18
};

struct FCoverDirectionalTrans {
	UAnimMontage* CoverTrans_1; // 0x0
	FVector DistanceOffsetCover_1; // 0x8
	UAnimMontage* CoverTrans_91; // 0x18
	FVector DistanceOffsetCover_91; // 0x20
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FAnimStanceData {
	FAnimWeaponData StandingAnimData; // 0x0
	FAnimWeaponData CrouchedAnimData; // 0x10
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

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FTrapRoster {
	int32_t MinimumSpawn; // 0x0
	int32_t MaximumSpawn; // 0x4
	FName SpawnGroup; // 0x8
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FFieldObjectCommands {
	TArray<FName> TargetNames; // 0x0
	TArray<UFieldNodeBase*> RootNodes; // 0x10
	TArray<UFieldSystemMetaData*> MetaDatas; // 0x20
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FZeuzProfileUserCreateIn {
	FString Login; // 0x0
	FString Name; // 0x10
	FString Desc; // 0x20
	FString PWHash; // 0x30
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FZeuzAccountProjectDeleteIn : FZeuzAccountChange {
	FString Proj; // 0x10
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
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

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
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

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FBodyInstance : FBodyInstanceCore {
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

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FZeuzAccountDevQuickSetupOut {
	FString Login; // 0x0
	FString Account; // 0x10
	FString User; // 0x20
	FString Dev; // 0x30
	FString Team; // 0x40
	FString Proj; // 0x50
	FString Env; // 0x60
	FString ApiKey; // 0x70
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FZeuzLogsearchAccountOut {
	TArray<FZeuzLogsearchAccountLog> Logs; // 0x0
	int32_t Total; // 0x10
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FST_SubObjective_Entry {
	bool IsComplete_1_1570530F49CA5AA0B9235C849C8D4C85; // 0x0
	FString Instruction_6_CDC89B544314C5427394B5B9708EB9CA; // 0x8
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FLevelFloorData {
	FText FloorFullName; // 0x0
	FText FloorShortName; // 0x18
	UTexture2D* FloorLayout; // 0x30
	TSoftObjectPtr<UMaterialInterface> FloorplanMaterial; // 0x38
};

struct FSoundVariation {
	USoundWave* SoundWave; // 0x0
	float ProbabilityWeight; // 0x8
	FVector2D VolumeRange; // 0xc
	FVector2D PitchRange; // 0x14
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
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

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FZeuzProfileUsersListIn {
	FString Offset; // 0x0
	int32_t Count; // 0x10
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
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
	FGuid ScriptVersionID; // 0x48
};

struct FAnimNode_DistanceMatching : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* PrevSequence; // 0x50
	UAnimSequenceBase* Sequence; // 0x60
	float Distance; // 0x68
	FName DistanceCurveName; // 0x6c
	char bEnableDistanceLimit : 1; // 0x74
	float DistanceLimit; // 0x78
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
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

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
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

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FExitData {
	TArray<FExitRoute> PossibleRoutes; // 0x0
	FVector Location; // 0x10
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FRelevancyTracker {
	float TimeUntilRecheck; // 0x0
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FZeuzAccountEnvDeleteIn {
	FString Proj; // 0x0
	FString Env; // 0x10
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
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

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	TMap<FString, FString> PropertySetterParameterDefaults; // 0x78
	FNiagaraVariable WritableValue; // 0xc8
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FZeuzAccountProjectCreateIn : FZeuzAccountChange {
	FString Title; // 0x10
	FString Desc; // 0x20
	FZeuzProperties Props; // 0x30
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
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

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FSpawnerSavedData {
	TArray<FName> Types; // 0x0
	int32_t MaxPerArea; // 0x10
	int32_t MaxTotal; // 0x14
	float CivilianSpawnChance; // 0x18
};

struct FHesitationCooldownData {
	char bEnabled : 1; // 0x0
	float CooldownTimeUponFailure; // 0x4
	char bRandomCooldownTimeFailure : 1; // 0x8
	float MinCooldownTimeUponFailure; // 0xc
	float MaxCooldownTimeUponFailure; // 0x10
	FTimerHandle TH_Cooldown; // 0x18
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FRadialBoxSettings {
	float StartingAngle; // 0x0
	bool bDistributeItemsEvenly; // 0x4
	float AngleBetweenItems; // 0x8
	float SectorCentralAngle; // 0xc
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
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

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FSStandardModalDetails {
	FText TitleBar_2_DF32DAB1427EA41B35266B8FA2882F03; // 0x0
	FText ModalDescription_5_73039887468A065EF94BD6B00B763A0F; // 0x18
	bool ShowCancelButton_8_3133E249417BF24BD8FDEE9293EC1BA8; // 0x30
	bool ShowOkButton_10_154CC1C14289052054A2538C427153B7; // 0x31
	bool ShowApplyButton_12_7DCFDAE1499BE72B8C447695443D4FEE; // 0x32
	FText OkButtonText_20_F49F44344D3A0F0CBB7DCC8BCB17010E; // 0x38
	FVector2D Size_28_F9A951CA4483BA8FED7F839B4DCF7AAA; // 0x50
	FText CancelButtonText_22_7F5E5E7047878934462E0DA8388B825F; // 0x58
	bool RequireScrollToBottom_26_3CEF956B41C5CF8E596FF3A70938CB28; // 0x70
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FLoadoutEquipOptions {
	EItemCategory EquipItemCategory; // 0x0
	bool bReplicates; // 0x1
	AReadyOrNotPlayerState* OverridePlayerState; // 0x8
	bool bSanitizeLoadout; // 0x10
};

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FLipSync_MorphPreset {
	TArray<FLipSync_MorphTarget> Data; // 0x0
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FProcMeshVertex {
	FVector Position; // 0x0
	FVector Normal; // 0xc
	FProcMeshTangent Tangent; // 0x18
	FColor Color; // 0x28
	FVector2D UV0; // 0x2c
	FVector2D UV1; // 0x34
	FVector2D UV2; // 0x3c
	FVector2D UV3; // 0x44
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FWoundData {
	float WoundSize; // 0x0
	FVector WoundOffset; // 0x4
	UStaticMesh* UpperMesh; // 0x10
	FTransform UpperMeshTranform; // 0x20
	UStaticMesh* LowerMesh; // 0x50
	FTransform LowerMeshTranform; // 0x60
	bool bBreaksBone; // 0x90
};

struct FMotivityAnimator : FAnimNode_AssetPlayerBase {
	UMotivityProcessedData* MotionData; // 0x40
	FTrajectoryData InputDirection; // 0x48
	float BlendTime; // 0x58
	float UpdateInterval; // 0x5c
	bool applyTrajectoryBlending; // 0x60
	bool EnableTrajectoryToleranceTest; // 0x61
	float TrajectoryToleranceDist; // 0x64
	float TrajectoryToleranceAngle; // 0x68
	EMotivityTransitionType TransitionType; // 0x6c
	bool bEnableRealtimePoseComputation; // 0x6d
	EMotivityPastRecordType PastRecordType; // 0x6e
	bool bEnablePoseMatchingIntoIdle; // 0x6f
	int32_t LODThreshold; // 0x70
	float PlayRate; // 0x78
	TArray<FMotionContainerAnimData> MotionMatchAnimationsRef; // 0x80
	float ReferenceMMTimer; // 0x94
	bool transformGoal; // 0x98
	bool favourCurrentPose; // 0x99
	FTrajectoryData desiredGoal; // 0xa0
	bool bHasMovementInput; // 0x13c
	float turnInPlaceThreshold; // 0x140
	FName CurrentTag; // 0x144
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FZeuzProviderResourceTypes {
	FString Provider; // 0x0
	TArray<FString> ResourceTypes; // 0x10
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
	bool bFireOnClockStart; // 0x9
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
	bool HighPriorityLoad; // 0x51
	bool DuplicateNonOptionalMips; // 0x52
	float Downscale; // 0x54
	ETextureDownscaleOptions DownscaleOptions; // 0x58
	int32_t VirtualTextureTileCountBias; // 0x5c
	int32_t VirtualTextureTileSizeBias; // 0x60
	ETextureLossyCompressionAmount LossyCompressionAmount; // 0x64
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FZeuzMachineResourceDeallocateIn {
	FString AllocationID; // 0x0
	TArray<FString> Machines; // 0x10
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
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

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
	bool bIsDeterminismFence; // 0x18
};

struct FAnimatedIconTable : FTableRowBase {
	FAnimatedIcon AnimatedIcon; // 0x8
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

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FHesitationFailureSettings : FHesitationOutcomeSettings {
	float DefianceChance; // 0x10
	TMap<EHesitationFailureResponse, float> DefianceWeights; // 0x18
	FString CustomAnimToPlay; // 0x68
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
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

struct FEnvNamedValue {
	FName paramName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FZeuzProperties {
	int32_t Version; // 0x0
	FZeuzTags Tags; // 0x8
	FZeuzVariant Val; // 0x18
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

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FZeuzMatchMakingStats {
	int32_t UsersCount; // 0x0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FZeuzKVStoreKey {
	FString Partition; // 0x0
	FString Key; // 0x10
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FAudioComponentParam {
	FName paramName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FZeuzProvider : FZeuzItemCommon {
	FString ProviderID; // 0x88
	FString Name; // 0x98
	bool ClientProvisionable; // 0xa8
	bool ProvisioningAllowed; // 0xa9
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
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

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FWidgetLookupData : FTableRowBase {
	UUserWidget* WidgetClass; // 0x8
	FString Description; // 0x10
	bool bShowMouseCursor; // 0x20
	bool bMouseUIOnly; // 0x21
	bool bAddToWidgetStack; // 0x22
	bool bCloseOnRespawn; // 0x23
	ESlateVisibility VisibilityUponCreation; // 0x24
	int32_t ZOrder; // 0x28
};

struct FChaosClothWeightedValue {
	float Low; // 0x0
	float High; // 0x4
};

struct FZeuzProfileItemRemByNameIn {
	FString UserID; // 0x0
	FString Name; // 0x10
	int32_t Count; // 0x20
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FOptimizationAttachmentData {
	FName AttachedSocketName; // 0x0
	USceneComponent* AttachedComponent; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FHesitationActions {
	FHesitationActionSetting Yell; // 0x0
	FHesitationActionSetting ADS; // 0x1d8
	FHesitationActionSetting LethalForce; // 0x3b0
	FHesitationActionSetting NonLethalForce; // 0x588
	TArray<FHesitationActionSetting_Custom> AdditionalActions; // 0x760
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FLipSync_Pause {
	TArray<FLipSync_Interval> Pauses; // 0x0
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FHesitationZoneShift {
	char bEnabled : 1; // 0x0
	float ShiftLocation; // 0x4
	char bRandomShiftLocation : 1; // 0x8
	float MinShiftLocation; // 0xc
	float MaxShiftLocation; // 0x10
	float ShiftTime; // 0x14
	float ShiftDelayTime; // 0x18
	char bReverseToOriginal : 1; // 0x1c
	float ShiftReversalTime; // 0x20
	float ShiftReversalDelayTime; // 0x24
	float ShiftCooldown; // 0x28
	int32_t ShiftUses; // 0x2c
	char bLoop : 1; // 0x30
	int32_t LoopCount; // 0x34
	int32_t AvailableShiftUses; // 0x38
	int32_t LoopsRemaining; // 0x3c
	FTimerHandle TH_Shift; // 0x40
	FTimerHandle TH_ShiftDelay; // 0x48
	FTimerHandle TH_ShiftReversalDelay; // 0x50
	FTimerHandle TH_ShiftCooldown; // 0x58
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FPersonnelMapPoint {
	FName VolumeLabel; // 0x0
	FName ActorLabel; // 0x8
	FText MapPointName; // 0x10
	FText MapPointDescription; // 0x28
	int32_t FloorNum; // 0x40
	FVector2D MapShiftPosition; // 0x44
	float MapShiftZoom; // 0x4c
	FVector2D MapCoordinates; // 0x50
	bool bMapZone; // 0x58
	FVector2D MapZoneSize; // 0x5c
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FGrenadeData {
	FString Name; // 0x0
	UTexture2D* Image; // 0x10
	EItemClass ItemClass; // 0x18
	TSoftClassPtr<UObject> Blueprint; // 0x20
};

struct FLipSync_Phrase : FTableRowBase {
	USoundBase* VoiceAsset; // 0x8
	TArray<FLipSync_TimedData> Subtitles; // 0x10
	TArray<FLipSync_TimedPhrase> Notifies; // 0x20
};

struct FZeuzMachineResourceAllocateIn {
	FString AllocationID; // 0x0
	TArray<FString> Resources; // 0x10
};

struct FZeuzLocalityLocationGetIn {
	TArray<FString> LocationIDs; // 0x0
	TArray<FString> DisplayNames; // 0x10
	TArray<FString> Providers; // 0x20
	TArray<FString> LocationType; // 0x30
	FString WithinRegion; // 0x40
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FScoreGroup {
	FString GroupName; // 0x0
	EObjectiveLevel ObjectiveLevel; // 0x10
	char bRequiredToClearMission : 1; // 0x11
	char bRequiredToSoftClearMission : 1; // 0x11
	int32_t OrderPriority; // 0x14
	TArray<FScoreData> Scores; // 0x18
	TArray<FScoreData> InactiveScores; // 0x28
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FMovieSceneEvaluationHookComponent {
	TScriptInterface<IMovieSceneEvaluationHook> Interface; // 0x0
};

struct FZeuzProfileItemBarterIn {
	FString UserIDA; // 0x0
	FString UserIDB; // 0x10
	TArray<FZeuzProfileItemMove> OfferA; // 0x20
	TArray<FZeuzProfileItemMove> OfferB; // 0x30
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x800
	FSlateBrush UpArrowImage; // 0x858
	FSlateBrush DownArrowImage; // 0x8e0
	FSlateBrush GlassImage; // 0x968
	FSlateBrush ClearImage; // 0x9f0
	FMargin ImagePadding; // 0xa78
	bool bLeftAlignButtons; // 0xa88
};

struct FHitResult {
	int32_t FaceIndex; // 0x0
	float Time; // 0x4
	float Distance; // 0x8
	FVector_NetQuantize Location; // 0xc
	FVector_NetQuantize ImpactPoint; // 0x18
	FVector_NetQuantizeNormal Normal; // 0x24
	FVector_NetQuantizeNormal ImpactNormal; // 0x30
	FVector_NetQuantize TraceStart; // 0x3c
	FVector_NetQuantize TraceEnd; // 0x48
	float PenetrationDepth; // 0x54
	int32_t Item; // 0x58
	char ElementIndex; // 0x5c
	char bBlockingHit : 1; // 0x5d
	char bStartPenetrating : 1; // 0x5d
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x60
	TWeakObjectPtr<AActor> Actor; // 0x68
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x70
	FName BoneName; // 0x78
	FName MyBoneName; // 0x80
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FHesitationSurrenderedSettings {
	char bEmptyBarWhenNotLookedAt : 1; // 0x0
	float MeterTimeWhenLookedAt; // 0x4
	float MeterTimeWhenNotLookedAt; // 0x8
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	bool bNewShouldBeLoaded; // 0xc
	bool bNewShouldBeVisible; // 0xd
	bool bNewShouldBlockOnLoad; // 0xe
};

struct FZeuzLogsearchOut {
	FZeuzVariant Stats; // 0x0
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
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

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
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

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FZeuzAccountCreateIn {
	FString Title; // 0x0
	FString Desc; // 0x10
	FString EMail; // 0x20
	FString Company; // 0x30
	FString Department; // 0x40
	FString Country; // 0x50
	FString ZIP; // 0x60
	FString City; // 0x70
	FString StreetAddr; // 0x80
	FZeuzProperties Props; // 0x90
	TArray<FZeuzProvisioningAccount> ProvisioningAccounts; // 0xb8
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

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FZeuzSimpleProfileUserCreateIn {
	FString Login; // 0x0
	FString Name; // 0x10
	FString Desc; // 0x20
	FString Password; // 0x30
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FMotionContainerAnimData {
	int32_t AnimIndex; // 0x0
	bool bIsIdle; // 0x4
	float Position; // 0x8
	float AllowedMotionTransitionTime; // 0xc
	float Limit; // 0x10
	bool LimitOfOperation; // 0x14
	bool bNoBlend; // 0x15
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FSoundDebugEntry {
	FName DebugName; // 0x0
	FSoftObjectPath Sound; // 0x8
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
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

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t Filesize; // 0x30
	char GroupNumber; // 0x38
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FZeuzLobbyStateIn : FZeuzLobbyStateBase {
	FString UserID; // 0x38
	FString Password; // 0x48
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
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

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FLoadingScreenAnimated {
	UTexture2D* Foreground; // 0x0
	UTexture2D* Background; // 0x8
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FZeuzProjEnvInfo {
	FString ID; // 0x0
	FString Title; // 0x10
};

struct FAssetManagerSearchRules {
	TArray<FString> AssetScanPaths; // 0x0
	TArray<FString> IncludePatterns; // 0x10
	TArray<FString> ExcludePatterns; // 0x20
	UObject* AssetBaseClass; // 0x30
	bool bHasBlueprintClasses; // 0x38
	bool bForceSynchronousScan; // 0x39
	bool bSkipVirtualPathExpansion; // 0x3a
	bool bSkipManagerIncludeCheck; // 0x3b
};

struct FAxisMappingStruct {
	FName MappingName; // 0x0
	FKey Key; // 0x8
	float Scale; // 0x20
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FMotivityCalibrationData {
	float poseFavourFactor; // 0x0
	float trajFavourFactor; // 0x4
	float poseTrajectoryRatio; // 0x8
	float poseVelocityWeight; // 0xc
	float trajPosMultiplier; // 0x10
	float trajFAngleMultiplier; // 0x14
	TArray<float> jointPositionWeights; // 0x18
	TArray<float> jointVelocityWeights; // 0x28
	TArray<float> trajectoryWeights; // 0x38
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FSoundAttenuationSettings : FBaseAttenuationSettings {
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

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry RuntimeEntries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0xf0
	TArray<FLinearColor> VectorValues; // 0x100
	TArray<UTexture*> TextureValues; // 0x110
	TArray<UFont*> FontValues; // 0x120
	TArray<int32_t> FontPageValues; // 0x130
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x140
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FObjectiveSpawn {
	FName Tag; // 0x0
	FDataTableRowHandle Type; // 0x8
	TArray<AAISpawn*> Spawners; // 0x18
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FMovieSceneSequenceActorPointers {
	AActor* SequenceActor; // 0x0
	TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface; // 0x8
};

struct FZeuzPayloadScalingRules {
	bool EnableScaling; // 0x0
	FZeuzPayloadDef PayloadDef; // 0x8
	FZeuzPayloadQuota PayloadQuota; // 0x48
	FZeuzSafetyLimits SafetyLimits; // 0x5c
	int32_t MinUnreservedPayloads; // 0x74
	int32_t MaxUnreservedPayloads; // 0x78
};

struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x0
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0x18
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x38
	FFrameRate TickResolution; // 0x58
	FMovieSceneSequenceID DeterministicSequenceID; // 0x60
	FMovieSceneFrameRange ParentPlayRange; // 0x64
	FFrameNumber ParentStartFrameOffset; // 0x74
	FFrameNumber ParentEndFrameOffset; // 0x78
	FFrameNumber ParentFirstLoopStartFrameOffset; // 0x7c
	bool bCanLoop; // 0x80
	FMovieSceneFrameRange PlayRange; // 0x84
	FMovieSceneFrameRange FullPlayRange; // 0x94
	FMovieSceneFrameRange UnwarpedPlayRange; // 0xa4
	FMovieSceneFrameRange PreRollRange; // 0xb4
	FMovieSceneFrameRange PostRollRange; // 0xc4
	int16_t HierarchicalBias; // 0xd4
	bool bHasHierarchicalEasing; // 0xd6
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0xd8
	FGuid SubSectionSignature; // 0xf8
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
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

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FMovementStyle {
	FString Name; // 0x0
	bool bIsStrafeMovement; // 0x10
	TArray<FGaitType> GaitEntries; // 0x18
};

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x90
	FSlateBrush ActiveFillBrush; // 0x118
	FSlateBrush InactiveFillBrush; // 0x1a0
	FSlateBrush ArrowsImage; // 0x228
	FSlateColor ForegroundColor; // 0x2b0
	FMargin TextPadding; // 0x2d8
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
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

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FZeuzMachineResourceInfo {
	FString ResourceID; // 0x0
	FString LocationID; // 0x10
	FZeuzMachineSpec Spec; // 0x20
	FString Provider; // 0x48
	FString Hostname; // 0x58
	FString IP; // 0x68
	bool IgnoreOnAlloc; // 0x78
	bool Bound; // 0x79
	FString MachineID; // 0x80
	FString AccountID; // 0x90
	int32_t TierLevel; // 0xa0
	FZeuzTags Tags; // 0xa8
	FString ProvisionJobID; // 0xb8
	FString ResourceClusterID; // 0xc8
	FString NodeID; // 0xd8
	bool AllocatingDisabled; // 0xe8
};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FRonKey {
	FString InputName; // 0x0
	FString AlternativeInputName; // 0x10
	FSlateBrush IconBrush; // 0x20
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

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FAnimNode_PivotBone : FAnimNode_SkeletalControlBase {
	FVector Translation; // 0xc8
	FRotator Rotation; // 0xd4
	FBoneReference ReferenceBone; // 0xe0
	FBoneReference DrivenBone; // 0xf0
};

struct FZeuzServerBrowserQueryOut {
	TArray<FZeuzServerBrowserStateOut> Results; // 0x0
	int32_t ResultOfs; // 0x10
	int32_t ResultTotal; // 0x14
	FString Errors; // 0x18
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
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

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
	bool bIsCustomInitialized; // 0x10
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
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

struct FZeuzLobbyStartDestroy {
	FString LobbyID; // 0x0
	FString UserID; // 0x10
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
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

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FDoorChunkData {
	UStaticMesh* Mesh; // 0x0
	bool bIsHinge; // 0x8
	bool bIsDoorHandleChunk; // 0x9
	bool bCannotKickIfDestroyed; // 0xa
	TArray<int32_t> SupportChunks; // 0x10
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FCoverDataArray {
	TArray<FCoverActorData> CoverData; // 0x0
};

struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x0
	int32_t Caption; // 0x4
	int32_t MetaData; // 0x8
	int32_t Script; // 0xc
	int32_t Subtitle; // 0x10
	int32_t Text; // 0x14
	int32_t Video; // 0x18
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FScoringDataTable : FTableRowBase {
	FString Name; // 0x8
	EObjectiveLevel ObjectiveLevel; // 0x18
	TArray<FScoreBonus> Bonuses; // 0x20
	TArray<FScorePenalty> Penalties; // 0x30
	char bRequiredToClearMission : 1; // 0x40
	char bRequiredToSoftClearMission : 1; // 0x40
	int32_t OrderPriority; // 0x44
};

struct FZeuzPayloadStateGetIn {
	TArray<FString> AllocationIDs; // 0x0
	TArray<FString> MachineIDs; // 0x10
	TArray<FString> PayloadIDs; // 0x20
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FItemLookupTable : FTableRowBase {
	FText ItemName; // 0x8
	FText ItemDescription; // 0x20
	TArray<EDLC> LockedToDLC; // 0x38
	TArray<EItemCategory> ItemCategories; // 0x48
	EItemClass ItemClass; // 0x58
	EItemType ItemType; // 0x59
	TSoftClassPtr<UObject> BlueprintClass; // 0x60
	bool bPistolGrip; // 0x88
	UTexture2D* ItemIcon; // 0x90
	float ItemWeight; // 0x98
	float HolsterPlayRate; // 0x9c
	float DrawPlayRate; // 0xa0
	bool bUseLowReady; // 0xa4
	float PushbackRange; // 0xa8
	float LowReadyRange; // 0xac
	float LowReadyRangeSightsModifier; // 0xb0
	float LowReadyPitchThreshold; // 0xb4
	float MovementSpeedMultiplier; // 0xb8
	float ADSZoom; // 0xbc
	float ADSZoomInSpeed; // 0xc0
	float ADSZoomOutSpeed; // 0xc4
	AImpactEffect* ImpactEffects; // 0xc8
	AImpactEffect* RicochetEffects; // 0xd0
	AImpactEffect* ExitEffects; // 0xd8
	float MagazineWeightFull; // 0xe0
	float MagazineWeightEmpty; // 0xe4
	bool bADSCountsAsAbuse; // 0xe8
	float HesitationBoostMultiplier; // 0xec
	TArray<char> AvailableFireModes; // 0xf0
	float BurstBulletCount; // 0x100
	FRuntimeFloatCurve DamageOverRange; // 0x108
	float Damage; // 0x190
	float DamageSeverityMultiplier; // 0x194
	float DamageSeverityChance; // 0x198
	float BleedoutDamageMultiplier; // 0x19c
	float BleedoutDamageChance; // 0x1a0
	UDamageType* DefaultDamageType; // 0x1a8
	UDamageType* ArmorPiercingDamageType; // 0x1b0
	float MagazineCountDefault; // 0x1b8
	float MagazineCountMin; // 0x1bc
	float MagazineCountMax; // 0x1c0
	FName MagazineLabel; // 0x1c4
	float ProjectileMovementSpeed; // 0x1cc
	float PenetrationDistance; // 0x1d0
	ABulletProjectile* FakeBulletProjectile; // 0x1d8
	ABulletProjectile* BulletProjectile; // 0x1e0
	ABulletProjectile* ArmorPiercingBulletProjectile; // 0x1e8
	int32_t MagazineSize; // 0x1f0
	float FireRate; // 0x1f4
	float Range; // 0x1f8
	float Accuracy; // 0x1fc
	float MinFireRateAI; // 0x200
	float MaxFireRateAI; // 0x204
	int32_t BulletsFiredUntilFullyAccurate; // 0x208
	FRotator SpreadPattern; // 0x20c
	float SpreadReturnRate; // 0x218
	float ADSSpreadMultiplier; // 0x21c
	TArray<FRotator> RecoilPattern; // 0x220
	float RecoilReturnRate; // 0x230
	float RecoilInterpSpeed; // 0x234
	float ADSRecoilMultiplier; // 0x238
	float LockIntegrityMinDamage; // 0x23c
	float LockIntegrityMaxDamage; // 0x240
	float BulletDrag; // 0x244
	bool bHitScan; // 0x248
	bool bSpawnTracer; // 0x249
	bool bNoSpawnTracerForFiringPlayer; // 0x24a
	int32_t SpawnProjectileCount; // 0x24c
	float Wobble; // 0x250
	float InitialWobbleDelay; // 0x254
	UMatineeCameraShake* FireCameraShake; // 0x258
	float FirstShotRecoil; // 0x260
	float FirstShotSpread; // 0x264
	float FirstShotResetTime; // 0x268
	float RecoilReturnInterpSpeed; // 0x26c
	float RecoilReturnPercentage; // 0x270
	float VelocitySpreadMultiplier; // 0x274
	float VelocityRecoilMultiplier; // 0x278
	float RecoilMultiplierPitch; // 0x27c
	float RecoilMultiplierYaw; // 0x280
	float RefireDelay; // 0x284
	TArray<UWeaponWheel_ItemStat_Base*> ItemStats; // 0x288
	int32_t AttachmentPoints; // 0x298
	bool bAcceptsScopeAttachments; // 0x29c
	TArray<UScopedWeaponAttachment*> AvailableScopeAttachments; // 0x2a0
	bool bAcceptsMuzzleAttachments; // 0x2b0
	TArray<UWeaponAttachment*> AvailableMuzzleAttachments; // 0x2b8
	bool bAcceptsUnderbarrelAttachments; // 0x2c8
	TArray<UWeaponAttachment*> AvailableUnderbarrelAttachments; // 0x2d0
	bool bAcceptsOverbarrelAttachments; // 0x2e0
	TArray<UWeaponAttachment*> AvailableOverbarrelAttachments; // 0x2e8
	bool bAcceptsStockAttachments; // 0x2f8
	TArray<UWeaponAttachment*> AvailableStockAttachments; // 0x300
	bool bAcceptsGripAttachments; // 0x310
	TArray<UWeaponAttachment*> AvailableGripAttachments; // 0x318
	bool bAcceptsIlluminatorAttachments; // 0x328
	TArray<UWeaponAttachment*> AvailableIlluminatorAttachments; // 0x330
	bool bAcceptsAmmunitionAttachments; // 0x340
	TArray<UWeaponAttachment*> AvailableAmmunitionAttachments; // 0x348
	bool bCalculateProcRecoil; // 0x358
	float RecoilDampStrength; // 0x35c
	float RecoilFireTime; // 0x360
	float RecoilFireStrength; // 0x364
	float RecoilFireStrengthFirst; // 0x368
	float RecoilAngleStrength; // 0x36c
	float RecoilRandomness; // 0x370
	float RecoilADSModfier; // 0x374
	float RecoilAngleADSModifier; // 0x378
	FRotator RecoilRotationBuildup; // 0x37c
	FVector RecoilPositionBuildup; // 0x388
	float RecoilBuildupADSMultiplier; // 0x394
	bool RecoilHasBuildup; // 0x398
	float RecoilBuildupDampStrength; // 0x39c
	float FreeAimLimit; // 0x3a0
	float FreeAimLimitADS; // 0x3a4
	float LazySpringStrength; // 0x3a8
	float LazySpringStrengthADS; // 0x3ac
	float FPADSMotionWeight; // 0x3b0
	float FreeAimInterpSpeed; // 0x3b4
	float FreeAimInterpADSModifier; // 0x3b8
	float FreeAimInterpHipModifier; // 0x3bc
	float FreeAimSlowMoveModifier; // 0x3c0
	float FreeAimSlowMoveTolerance; // 0x3c4
	bool bDisableMeshspaceMovement; // 0x3c8
	FTransform MeshspaceTransform_Default; // 0x3d0
	FTransform MeshspaceTransform_Aiming; // 0x400
	FTransform MeshspaceTransform_Back; // 0x430
	FVector MovementSpeedScale; // 0x460
	FRotator MovementSpeedRotationScalePitchYawRoll; // 0x46c
	float MeshSpaceAimInterp; // 0x478
	FTransform MeshspaceTransform_OnDraw; // 0x480
	float OnDrawMeshspaceInterp; // 0x4b0
	FTransform MeshspaceTransform_OnHolster; // 0x4c0
	float OnHolsterMeshspaceInterp; // 0x4f0
	float InertiaDragAimRotation; // 0x4f4
	float InertiaDragAimLocation; // 0x4f8
	float InertiaDragStrafeRotation; // 0x4fc
	float InertiaDragStrafeLocation; // 0x500
	FName BodySocket; // 0x504
	FName HandsSocket; // 0x50c
	float CameraBobScaleH; // 0x514
	float CameraBobScaleV; // 0x518
	float CameraBobSpeedScaleH; // 0x51c
	float CameraBobSpeedScaleV; // 0x520
	float CameraBobAmplitudeBaseSpeed; // 0x524
	float CameraBobIntensitySprintScale; // 0x528
	float CameraBobAmplitudeWalkScale; // 0x52c
	float CameraBobAmplitudeSprintScale; // 0x530
	float WeaponBobScaleH; // 0x534
	float WeaponBobScaleV; // 0x538
	float WeaponBobScaleInjured; // 0x53c
	float WeaponBobSpeedScaleH; // 0x540
	float WeaponBobSpeedScaleV; // 0x544
	float WeaponBobSpeedScaleInjured; // 0x548
	float WeaponBobCrouchModifier; // 0x54c
	float WeaponBobADSModifier; // 0x550
	float WeaponBobRotPitchScale; // 0x554
	float WeaponBobRotRollScale; // 0x558
	float WeaponBobRotPitchSpeed; // 0x55c
	float WeaponBobRotRollSpeed; // 0x560
	float WeaponBobRotCrouchModifier; // 0x564
	float WeaponBobRotADSModifier; // 0x568
};

struct FSpeedWarpingFootDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x10
	int32_t NumBonesInLimb; // 0x20
};

struct FZeuzProfileUserPwHashIn {
	FString UserID; // 0x0
	FString PWHash; // 0x10
};

struct FObituaryForBone {
	TArray<FText> DeathMessages; // 0x0
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FST_Briefing_Evidence {
	FString Name_2_E14F10114B0E6B5A7D73598C69811AD7; // 0x0
	FSlateBrush Thumbnail_5_830FD1DC4306FD25A46DCF85185A595A; // 0x10
	UTexture2D* MediaPlaceholder_11_2FB2F5134C04065C3EE5F7908D147D86; // 0x98
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FOrientationWarpingSettings {
	EAxis YawRotationAxis; // 0x0
	float BodyOrientationAlpha; // 0x4
	TArray<FOrientationWarpingSpineBoneSettings> SpineBones; // 0x8
	FBoneReference IKFootRootBone; // 0x18
	TArray<FBoneReference> IKFootBones; // 0x28
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FHesitationZoneActionSetting {
	FHesitationZoneAugment Augment; // 0x0
	FHesitationZoneShift Shift; // 0x70
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FSteamAuthenticationToken {
	FString rgchTokenString; // 0x0
	uint32_t unTokenLen; // 0x10
	uint64_t steamid; // 0x18
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FZeuzAPIKeyPwHashIn {
	FString APIKeyID; // 0x0
	FString ProjID; // 0x10
	FString PWHash; // 0x20
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
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

struct FNiagaraDebuggerAcceptConnection {
	FGuid SessionID; // 0x0
	FGuid InstanceId; // 0x10
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

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FBakedDataInfo {
	FName Name; // 0x0
	int32_t Size; // 0x8
};

struct FCheckBoxStyle : FSlateWidgetStyle {
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

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FZeuzMatchMakingStatus {
	FString MatchMakingId; // 0x0
	FZeuzTimestamp ETA; // 0x10
	FZeuzMatchMakingResult Result; // 0x18
	FString Error; // 0xb0
	FString State; // 0xc0
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FItemVisualData {
	UTexture2D* ItemIcon; // 0x0
	UTexture2D* PremissionPlanningItemIcon; // 0x8
	UTexture2D* RadialItemIcon; // 0x10
	USkeletalMesh* ItemMesh; // 0x18
	TArray<UTexture2D*> AmmoIcons; // 0x20
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetID; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FZeuzPayloadStateInfo {
	FString PayloadID; // 0x0
	int32_t State; // 0x10
	int32_t PlayerCount; // 0x14
	TMap<FString, FString> PlayerList; // 0x18
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FNiagaraOutlinerTimingData {
	float GameThread; // 0x0
	float RenderThread; // 0x4
};

struct FZeuzPayloadResumeIn {
	FString PayloadID; // 0x0
	FString AllocationID; // 0x10
	FString MachineID; // 0x20
	FZeuzPayloadDef PayloadDef; // 0x30
	FString Hostname; // 0x70
	int32_t TTL; // 0x80
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FZeuzProfileItemRemIn {
	FString ItemID; // 0x0
	int32_t Count; // 0x10
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

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FCameraFreelookSetting {
	float PitchMin; // 0x0
	float PitchMax; // 0x4
	float YawMin; // 0x8
	float YawMax; // 0xc
};

struct FZeuzMatchMakingResult {
	FString Result; // 0x0
	FString Map; // 0x10
	FString Region; // 0x20
	TArray<FZeuzMatchmakingUser> Users; // 0x30
	FString ServerConnect; // 0x40
	TArray<int32_t> ServerPorts; // 0x50
	FString AllocationID; // 0x60
	FString Opt; // 0x70
	FString Signature; // 0x80
	FZeuzTimestamp Timestamp; // 0x90
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FAnimationStateEntry {
	char State; // 0x0
	TArray<FAnimationSetup> AnimationSetups; // 0x8
	bool bOnDemand; // 0x18
	bool bAdditive; // 0x19
	float BlendTime; // 0x1c
	bool bReturnToPreviousState; // 0x20
	bool bSetNextState; // 0x21
	char NextState; // 0x22
	FPerPlatformInt MaximumNumberOfConcurrentInstances; // 0x24
	float WiggleTimePercentage; // 0x28
	bool bRequiresCurves; // 0x2c
};

struct FZeuzLobbyUser {
	FString UserID; // 0x0
	FString DisplayName; // 0x10
	FString Team; // 0x20
	FString Slot; // 0x30
	FString Info; // 0x40
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FBulletTypeLookupTable : FTableRowBase {
	float Damage; // 0x8
	float SuppressionAmount; // 0xc
	float SuppressionLength; // 0x10
	float ArmorDamage; // 0x14
	float Velocity; // 0x18
	float PenetrationDepth; // 0x1c
	float BleedoutMultiplier; // 0x20
	char bSupersonic : 1; // 0x24
	char bFMJ : 1; // 0x24
	char bIgnoreArmor : 1; // 0x24
	char bUseHitScan : 1; // 0x24
	char bCanRicochet : 1; // 0x24
	float RicochetAtAngle; // 0x28
	char bSlowDownVictimWhenHit : 1; // 0x2c
	float HitMovementSlowDownPercentage; // 0x30
	float HitMovementSlowDownTime; // 0x34
	TArray<UPhysicalMaterial*> SurfacesToPenetrate; // 0x38
	char bCustomSurfaceHitSounds : 1; // 0x48
	TMap<UPhysicalMaterial*, UFMODEvent*> HitSurfaceToHitSound; // 0x50
	UFMODEvent* HitSound; // 0xa0
};

struct FMapData {
	TArray<FVector2D> PointData; // 0x0
	EFreeDrawColor ColorType; // 0x10
	float Thickness; // 0x14
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
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

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
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

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FMapList {
	FString Name; // 0x0
	FString GameMode; // 0x10
	FString LoadURL; // 0x20
	FText Description; // 0x30
	FText Author; // 0x48
	FText AuthorContact; // 0x60
	FText RecommendedPlayerCount; // 0x78
	USoundCue* LoadingScreenMusic; // 0x90
	bool bSupportsPvP; // 0x98
	bool bSupportsCoop; // 0x99
	bool bVisible; // 0x9a
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0x14
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FNiagaraMeshRendererMeshProperties {
	UStaticMesh* Mesh; // 0x0
	FVector Scale; // 0x8
	FVector PivotOffset; // 0x14
	ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x20
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FCharacterBio {
	FString Name; // 0x0
	FString IdNumber; // 0x10
	TArray<FText> Aliases; // 0x20
	FText Bio; // 0x30
	UTexture2D* ProfileImage; // 0x48
	FText Sex; // 0x50
	FText Build; // 0x68
	FText Height; // 0x80
	FText Weight; // 0x98
	FText Hair; // 0xb0
	FText Eyes; // 0xc8
	FText DateOfBirth; // 0xe0
	FText Age; // 0xf8
	TArray<FCriminalRecord> CriminalRecord; // 0x110
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FBPOnlineRecentPlayer : FBPOnlineUser {
	FString LastSeen; // 0x40
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FLiveLinkLightFrameData : FLiveLinkTransformFrameData {
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

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FLevelUpData : FTableRowBase {
	int32_t XPtoLvl; // 0x8
	TSoftObjectPtr<ABaseItem> WeaponUnlock; // 0x10
	TSoftObjectPtr<UWeaponAttachment> AttachmentUnlock; // 0x38
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FCharacterTPAnim {
	UAnimMontage* TP_Anim; // 0x0
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FLevelDeployableDepot {
	FName DepotLabel; // 0x0
	int32_t DepotCost; // 0x8
	FText DepotShortName; // 0x10
	FText DepotLongName; // 0x28
	FText DepotDescription; // 0x40
	int32_t MapFloorNum; // 0x58
	FVector2D MapCoordinates; // 0x5c
	FVector2D MapShiftAmount; // 0x64
	float MapZoomLevel; // 0x6c
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FZeuzLobbyQueryOut {
	TArray<FZeuzLobbyStateOut> Results; // 0x0
	int32_t ResultOfs; // 0x10
	int32_t ResultTotal; // 0x14
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
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

struct FCoverTrans {
	UAnimMontage* CoverEnterTrans; // 0x0
	UAnimMontage* CoverExitTrans; // 0x8
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FTargetData {
	AReadyOrNotCharacter* Target; // 0x0
	float TimeSinceLastSeenTarget; // 0x8
	FVector LastKnownPosition; // 0xc
	bool bForceCanEngageAsSwat; // 0x18
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FZeuzPayloadQuota {
	float CpuCores; // 0x0
	int32_t MemoryMB; // 0x4
	int32_t StorageGB; // 0x8
	int32_t IOBandwidthMBps; // 0xc
	int32_t InetBandwidthMBps; // 0x10
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
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

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
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

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int32_t MessageIndex; // 0x10
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FNiagaraDebugHudTextOptions {
	ENiagaraDebugHudFont Font; // 0x0
	ENiagaraDebugHudHAlign HorizontalAlignment; // 0x4
	ENiagaraDebugHudVAlign VerticalAlignment; // 0x5
	FVector2D ScreenOffset; // 0x8
};

struct FZeuzLobbyUserState : FZeuzLobbyUserBase {
	FString ServerConnect; // 0x78
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FZeuzAuthLoginResult {
	FString Dev; // 0x0
	FString User; // 0x10
	FString ApiKey; // 0x20
	FString Proj; // 0x30
	FString SessionID; // 0x40
	FString SessionNonce; // 0x50
	FZeuzTimestamp ValidThru; // 0x60
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FMaterialCachedExpressionData {
	FMaterialCachedParameters Parameters; // 0x0
	TArray<UObject*> ReferencedTextures; // 0x150
	TArray<FMaterialFunctionInfo> FunctionInfos; // 0x160
	TArray<FMaterialParameterCollectionInfo> ParameterCollectionInfos; // 0x170
	TArray<UMaterialFunctionInterface*> DefaultLayers; // 0x180
	TArray<UMaterialFunctionInterface*> DefaultLayerBlends; // 0x190
	TArray<ULandscapeGrassType*> GrassTypes; // 0x1a0
	TArray<FName> DynamicParameterNames; // 0x1b0
	TArray<bool> QualityLevelsUsed; // 0x1c0
	char bHasRuntimeVirtualTextureOutput : 1; // 0x1d0
	char bHasSceneColor : 1; // 0x1d0
};

struct FZeuzACLEntry {
	FString GenID; // 0x0
	int32_t Grant; // 0x10
	int32_t Deny; // 0x14
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FTutorialMissionData {
	ETutorialMissionType MissionType; // 0x0
	bool bSpawnSWATTeam; // 0x1
	FSavedLoadout Loadout; // 0x8
	FString SpawnTag; // 0x140
};

struct FMovieSceneEvaluationHookEventContainer {
	TArray<FMovieSceneEvaluationHookEvent> Events; // 0x0
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

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
};

struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	FString String; // 0x18
	FText Text; // 0x28
	FVector Vector; // 0x40
	FVector4 Vector4; // 0x50
	FRotator Rotator; // 0x60
	FQuat Quat; // 0x70
	FColor Color; // 0x80
};

struct FZeuzAccountDeveloperCreatePwHashIn {
	FString DevID; // 0x0
	FString AccountID; // 0x10
	FString Hash; // 0x20
	FString PWHash; // 0x30
};

struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x0
	TArray<FName> Tags; // 0x30
	bool bContinuouslyRespawn; // 0x40
	bool bNetAddressableName; // 0x41
	bool bEvaluateTracksWhenNotSpawned; // 0x42
	FGuid Guid; // 0x44
	FString Name; // 0x58
	UObject* ObjectTemplate; // 0x68
	TArray<FGuid> ChildPossessables; // 0x70
	ESpawnOwnership Ownership; // 0x80
	FName LevelName; // 0x84
};

struct FZeuzMachineScalingRules {
	bool EnableScaling; // 0x0
	int32_t MaxCloudMachines; // 0x4
	bool UseAllBareMetalMachines; // 0x8
	int32_t MaxBareMetalMachines; // 0xc
	int32_t MinFreePayloadCapacity; // 0x10
	int32_t MaxFreePayloadCapacity; // 0x14
	bool UseMetrics; // 0x18
	int32_t CapEvalTimeFrame; // 0x1c
	TArray<FZeuzMetricsEvalCondition> BlockedConditions; // 0x20
	TArray<FZeuzMetricsEvalCondition> IdleConditions; // 0x30
	TArray<FZeuzProviderResourceTypes> AllowedResourceTypes; // 0x40
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FAIDataLookupTable : FTableRowBase {
	FAIMoveDataBlock DefaultMoveData; // 0x8
	bool bUseRandomLoadout; // 0xa0
	TArray<ABaseItem*> AIWeaponSelection; // 0xa8
	float ChanceToSelectArmorPiece; // 0xb8
	float ChanceToFireGunOnDeath; // 0xbc
	TArray<ASuspectArmor*> AIArmorSelection; // 0xc0
	FSavedLoadout DefaultLoadout; // 0xd0
	ETeamType SpawningTeamType; // 0x208
	AAICharacter* CharacterClass; // 0x210
	TArray<FCharacterMesh> RandomCharacterMesh; // 0x218
	AAIController* ControllerClass; // 0x228
	ECyberneticsLevel CyberneticsLevel; // 0x230
	TArray<FName> Tags; // 0x238
	bool bIsFemale; // 0x248
	bool bIsChild; // 0x249
	bool bUnconsciousSpawnBleedout; // 0x24a
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName InputName; // 0x4
	FName ExpressionName; // 0xc
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FZeuzAuthLoginIn {
	FString Login; // 0x0
	bool IsUser; // 0x10
	bool IsApi; // 0x11
	FZeuzTimestamp Time; // 0x18
	FString Nonce; // 0x20
	FString Hash; // 0x30
};

struct FZeuzItemCommon {
	int32_t Version; // 0x0
	FString Title; // 0x8
	FZeuzACL ACL; // 0x18
	FZeuzProperties Props; // 0x28
	FZeuzTimestamp Created; // 0x50
	FString CreatedBy; // 0x58
	FZeuzTimestamp Modified; // 0x68
	FString ModifiedBy; // 0x70
	FZeuzTimestamp Expires; // 0x80
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FZeuzEcho2Out {
	FString Text; // 0x0
};

struct FAttachedMeshData {
	UStaticMesh* StaticMesh; // 0x0
	FName Socket; // 0x8
	UStaticMeshComponent* StaticMeshComponent; // 0x10
};

struct FZeuzKVStoreKeyValue : FZeuzKVStoreKey {
	FString Value; // 0x20
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
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

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FRadialWidgetSpawnProperties {
	int32_t StartingSectorIndex; // 0x0
	float IconSize; // 0x4
	float IconPadding; // 0x8
	float StartingSectorAngle; // 0xc
	float SectorInnerRadius; // 0x10
	float SectorOuterRadius; // 0x14
	float GapSize; // 0x18
	float WheelSize; // 0x1c
	float WheelCursorDistanceFromCenterWheel; // 0x20
	char bHideRadialWheelCursorOnMenuOpened : 1; // 0x24
	FLinearColor SelectedColor; // 0x28
	FLinearColor UnselectedColor; // 0x38
	FLinearColor UnselectableColor; // 0x48
	UFont* Font; // 0x58
};

struct FZeuzMachineResourcesCountIn {
	FString AccountID; // 0x0
	FString Type; // 0x10
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
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

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FZeuzLocalityProviderGetIn {
	TArray<FString> ProviderIDs; // 0x0
	TArray<FString> Names; // 0x10
	bool GetClientProvisionable; // 0x20
	bool GetNonClientProvisionable; // 0x21
};

struct FZeuzMatchMakingServerInfo {
	FString PayloadID; // 0x0
	bool Allocatable; // 0x10
	int32_t UserCount; // 0x14
	FString IP; // 0x18
	TArray<int32_t> Ports; // 0x28
	FString MachineID; // 0x38
	FString AllocationID; // 0x48
	TArray<FString> Regions; // 0x58
	FZeuzTimestamp Created; // 0x68
	FZeuzTimestamp Updated; // 0x70
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
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

struct FChaosDestructionEvent {
	FVector Position; // 0x0
	FVector Normal; // 0xc
	FVector Velocity; // 0x18
	FVector AngularVelocity; // 0x24
	float ExtentMin; // 0x30
	float ExtentMax; // 0x34
	int32_t ParticleID; // 0x38
	float Time; // 0x3c
	int32_t Type; // 0x40
};

struct FZeuzAdminTestpoolIn {
	FString RegionID; // 0x0
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FNiagaraBakerTextureSettings {
	FName OutputName; // 0x0
	FNiagaraBakerTextureSource SourceBinding; // 0x8
	char bUseFrameSize : 1; // 0x10
	FIntPoint FrameSize; // 0x14
	FIntPoint TextureSize; // 0x1c
	UTexture2D* GeneratedTexture; // 0x28
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

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FFloorMapPointData {
	TArray<FMapData> MapData; // 0x0
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FZeuzACL {
	TArray<FZeuzACLEntry> List; // 0x0
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
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

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FZeuzLobbyRefresh {
	FString LobbyID; // 0x0
	FString UserID; // 0x10
	int32_t LastVersion; // 0x20
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FLandscapeLayer {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	bool bVisible; // 0x18
	bool Blocked; // 0x19
	float HeightmapAlpha; // 0x1c
	float WeightmapAlpha; // 0x20
	ELandscapeBlendMode BlendMode; // 0x24
	TArray<FLandscapeLayerBrush> Brushes; // 0x28
	TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x38
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
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

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FAttachedSkeletalMeshData {
	USkeletalMesh* SkeletalMesh; // 0x0
	bool bUseMasterPose; // 0x8
	FName Socket; // 0xc
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x18
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
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

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FVoteData {
	EVoteState CurrentVoteState; // 0x0
	FString VoteReason; // 0x8
	FString VoteQuestion; // 0x18
	char bVoteEnabled : 1; // 0x28
};

struct FWeaponSoundData {
	USoundCue* Gunshot; // 0x0
	USoundCue* Gunshot_Supressed; // 0x8
	USoundCue* GunTail; // 0x10
	USoundCue* GunTail_Supressed; // 0x18
};

struct FZeuzServerBrowserQueryIn {
	int32_t ListMax; // 0x0
	int32_t ListOfs; // 0x4
	FString Filter; // 0x8
	FString Compatibility; // 0x18
	FZeuzVariant Params; // 0x28
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

struct FSGraphicPreset {
	EGraphicOption TextureQuality_21_DCFA25B247C5C97F16BB66B0C36D5767; // 0x0
	EGraphicOption ShadowQuality_22_5CA061DF41F511084549A0910A581B92; // 0x1
	EGraphicOption PostProcessQuality_23_B63D0DF640EC1D2DF86414A9C50238D7; // 0x2
	EGraphicOption AntiAliasQuality_24_B13F943748E782AF7AB213AB3A228191; // 0x3
	EGraphicOption EffectsQuality_25_EADA0B75461AFF664A68C78B72F4DF29; // 0x4
	EGraphicOption ViewDistance_26_4F2BF7104EA2E118AA66D894FBC45E5A; // 0x5
	int32_t OptiwandFPS_27_B83DB6E1464B5DC0E4250CAC2D7C8001; // 0x8
	float OptiwandScale_28_9D0B675D4900DD0DD18A4B9E5BE53716; // 0xc
	float ResolutionScale_38_0C30126C489175BA34EBED806DFF6FFC; // 0x10
	float SafeZoneX_68_AA456FCD449A69793BD2C881E5DC8507; // 0x14
	float SafeZoneY_70_9C42200642AD5A8BBC5D6A8A26F61F51; // 0x18
	bool DepthofField_36_546F25334B7EC02E61E0A98BD4255CA9; // 0x1c
	bool MeshPainting_37_F11DDA0743147B12822B0FB435294635; // 0x1d
	bool VSync_40_83B693B640BC886B8E8FA183455AE247; // 0x1e
	bool FrameLimitEnabled_54_E31EECB64CD9F972AA2F3AB8C28B3ECA; // 0x1f
	int32_t FrameLimit_43_F547893643D618728BD0E4861E24EC49; // 0x20
	bool MotionBlurEnabled_61_1E9D07FC4C84A6EE0E14C6B1DF04BB10; // 0x24
	EGraphicOption MotionBlurQuality_64_5AC51FAE420F7A4DDED32197B050A1A2; // 0x25
	bool RaytracingEnabled_46_61DC0015490B78AE835B26AD80C82327; // 0x26
	bool RaytracingShadowsEnabled_48_38CA7DA24EB3101A363C1F8A26180503; // 0x27
	bool RaytracingReflectionsEnabled_50_ED2EE1514CBBE256E84EC3B7EE028FDE; // 0x28
	bool RaytracingAmbientOcclusionEnabled_52_D109A53B4F0CE9C2C3D871AFA30DD109; // 0x29
	bool RaytracingGlobalIlluminationEnabled_57_D5F60443451A613E5B65889E2BC960F4; // 0x2a
	bool RaytracingTranslucencyEnabled_58_734380354681CA2266E0C98271986DB8; // 0x2b
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FPostProcessSetting_Base {
	char bEnabled : 1; // 0x0
	TArray<UPostProcessRequirement*> Requirements; // 0x8
	FName ParameterName; // 0x18
	EPostProcessEndOptions EffectEndOption; // 0x20
	int32_t StartLoopAtCurveKey; // 0x24
	char bReverseAtAnyTime : 1; // 0x28
	TArray<UPostProcessRequirement*> ReverseRequirements; // 0x30
	char bUseCurve : 1; // 0x40
	EEasingFunc EasingMethod; // 0x41
	EPostProcessStartingState StartingState; // 0x42
	float InterpSpeed; // 0x44
	float EffectLifetime; // 0x48
	float StartLoopAtTime; // 0x4c
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
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

struct FZeuzProfileItemMove {
	FString ID; // 0x0
	int32_t Count; // 0x10
};

struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
	bool bIsTemperatureSupported; // 0x18
	bool bIsIntensitySupported; // 0x19
	bool bIsLightColorSupported; // 0x1a
	bool bIsInnerConeAngleSupported; // 0x1b
	bool bIsOuterConeAngleSupported; // 0x1c
	bool bIsAttenuationRadiusSupported; // 0x1d
	bool bIsSourceLenghtSupported; // 0x1e
	bool bIsSourceRadiusSupported; // 0x1f
	bool bIsSoftSourceRadiusSupported; // 0x20
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendoutTime; // 0x14
	bool bLooping; // 0x18
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
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

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	bool bPlaying; // 0x28
	float DefaultBlendTimeMultiplier; // 0x2c
	TArray<int32_t> NextSections; // 0xe8
	TArray<int32_t> PrevSections; // 0xf8
	TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118
	float Position; // 0x128
	float PlayRate; // 0x12c
	FAlphaBlend Blend; // 0x130
	int32_t DisableRootMotionCount; // 0x18c
};

struct FZeuzProvisioningAccount {
	FString ProviderID; // 0x0
	bool SpawnInstances; // 0x10
	FString Username; // 0x18
	FString Password; // 0x28
	FString ApiKey; // 0x38
	FString SecretKey; // 0x48
	FString SubscriptionID; // 0x58
	FString TenantID; // 0x68
	FString ClientId; // 0x78
	FString ClientSecret; // 0x88
	FString GcpCredentialsFile; // 0x98
	FString GcpFileName; // 0xa8
	FZeuzTimestamp GcpUploadFileDate; // 0xb8
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FLipSync_TimedPhrase {
	float TimeOffset; // 0x0
	FName ItemName; // 0x4
	char Flag; // 0xc
	char FlagEmotion; // 0xd
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FMovieSceneTransformMask {
	uint32_t MASK; // 0x0
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FFilePath {
	FString FilePath; // 0x0
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

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
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

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
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

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FS_ReplayInfo {
	FString ReplayName; // 0x0
	FString FriendlyName; // 0x10
	FDateTime Timestamp; // 0x20
	int32_t LengthInMS; // 0x28
	bool bIsValid; // 0x2c
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
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

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FZeuzProfileItemConfig {
	FString Name; // 0x0
	FString Class; // 0x10
	int32_t CountMaxU; // 0x20
	bool Stackable; // 0x24
	FZeuzTimestamp LimitAddInterval; // 0x28
	TMap<FString, FString> Params; // 0x30
	TArray<FZeuzProfileItemNameCount> BuyPrice; // 0x80
};

struct FDataDrivenConsoleVariable {
	FDataDrivenCVarType Type; // 0x0
	FString Name; // 0x8
	FString Tooltip; // 0x18
	float DefaultValueFloat; // 0x28
	int32_t DefaultValueInt; // 0x2c
	bool DefaultValueBool; // 0x30
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

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FKillFeedData {
	FString Name; // 0x0
	EKillfeedType Type; // 0x10
};

struct FSavedTransforms {
	FString Name; // 0x0
	FTransform SavedTransform; // 0x10
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FMotivityTimeData {
	TArray<float> PredictionTimes; // 0x0
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
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

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FNiagaraOutlinerSystemInstanceData {
	FString ComponentName; // 0x0
	TArray<FNiagaraOutlinerEmitterInstanceData> Emitters; // 0x10
	ENiagaraExecutionState ActualExecutionState; // 0x20
	ENiagaraExecutionState RequestedExecutionState; // 0x24
	FNiagaraScalabilityState ScalabilityState; // 0x28
	char bPendingKill : 1; // 0x30
	ENCPoolMethod PoolMethod; // 0x34
	FNiagaraOutlinerTimingData AverageTime; // 0x38
	FNiagaraOutlinerTimingData MaxTime; // 0x40
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x150
	int32_t LODThreshold; // 0x160
	FName SourceSocketName; // 0x164
	FName PivotSocketName; // 0x16c
	FVector LookAtLocation; // 0x174
	FVector SocketAxis; // 0x180
	float Alpha; // 0x18c
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
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

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
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

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FBleedoutWound {
	float CurrentDamage; // 0x0
	float TimeRemaining; // 0x4
	float TotalDuration; // 0x8
	float DamageTickTime; // 0xc
	FDamageEvent DamageEvent; // 0x10
	AController* EventInstigator; // 0x20
	FName Bone; // 0x28
	AActor* DamageCauser; // 0x30
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FCameraShakeScrubParams {
	float AbsoluteTime; // 0x0
	float ShakeScale; // 0x4
	float DynamicScale; // 0x8
	float BlendingWeight; // 0xc
	FMinimalViewInfo POV; // 0x10
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
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

struct FGameModeSettings : FTableRowBase {
	int32_t MaxPlayers; // 0x8
	float RoundStartTime; // 0xc
	float ReinforcementTimer; // 0x10
	float RespawnTimer; // 0x14
	float Timelimit; // 0x18
	int32_t RoundsPerMap; // 0x1c
	float TDMScoreLimit; // 0x20
	FText MatchStartInformationSwat; // 0x28
	FText MatchStartInformationMlo; // 0x40
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
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

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FHesitationZoneAugment {
	char bEnabled : 1; // 0x0
	float ZonePercentageChange; // 0x4
	char bRandomPercentageRange : 1; // 0x8
	float MinZonePercentageChange; // 0xc
	float MaxZonePercentageChange; // 0x10
	float AugmentationTime; // 0x14
	float AugmentationDelayTime; // 0x18
	char bReverseToOriginal : 1; // 0x1c
	float AugmentationReversalTime; // 0x20
	float AugmentationReversalDelayTime; // 0x24
	float AugmentationCooldown; // 0x28
	int32_t AugmentationUses; // 0x2c
	char bAugmentOnOveruse : 1; // 0x30
	float OveruseZonePercentageChange; // 0x34
	char bLoop : 1; // 0x38
	int32_t LoopCount; // 0x3c
	int32_t AvailableAugmentationUses; // 0x40
	int32_t LoopsRemaining; // 0x44
	char bOverused : 1; // 0x48
	FTimerHandle TH_Augment; // 0x50
	FTimerHandle TH_AugmentDelay; // 0x58
	FTimerHandle TH_AugmentReversalDelay; // 0x60
	FTimerHandle TH_AugmentCooldown; // 0x68
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FZeuzUserProfile {
	FString ID; // 0x0
	FZeuzTags Tags; // 0x10
	FZeuzTimestamp FirstLogin; // 0x20
	FZeuzTimestamp BanStart; // 0x28
	FZeuzTimestamp BanEnd; // 0x30
	TArray<FString> Comments; // 0x38
	FZeuzVariant Data; // 0x48
	TArray<FString> LinkedAccounts; // 0x58
	TArray<FString> Friends; // 0x68
	TArray<FString> Blocked; // 0x78
};

struct FNiagaraRibbonShapeCustomVertex {
	FVector2D Position; // 0x0
	FVector2D Normal; // 0x8
	float TextureV; // 0x10
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FInGameLogMessage {
	EDebugLogType LogSeverity; // 0x0
	char bAutoDetermineIcon : 1; // 0x1
	UTexture2D* Icon; // 0x8
	FText LogMessage; // 0x10
	float DelayBetweenWords; // 0x28
	float DelayBetweenLetters; // 0x2c
	float TimeOnScreen; // 0x30
};

struct FZeuzMachinePagination {
	bool GetTotal; // 0x0
	int32_t Offset; // 0x4
	int32_t Limit; // 0x8
	FString OrderBy; // 0x10
	bool OrderAsc; // 0x20
};

struct FZeuzMachineResourceDeprovisionIn {
	FString AllocationID; // 0x0
	TArray<FString> Resources; // 0x10
};

struct FZeuzPayloadDef {
	FString HostOS; // 0x0
	FString Image; // 0x10
	TArray<FString> Cmd; // 0x20
	TArray<FZeuzPortDef> Ports; // 0x30
};

struct FWeightStunMultiplier {
	float MinimumWeight; // 0x0
	float MaximumWeight; // 0x4
	float MinimumWeightMultiplier; // 0x8
	float MaximumWeightMultiplier; // 0xc
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FZeuzMetricsEvalCondition {
	int32_t TimeFrame; // 0x0
	float CoreUsageThreshold; // 0x4
	float MemoryUsageThreshold; // 0x8
	float IOBandwidthThreshold; // 0xc
	float InetBandwidthThreshold; // 0x10
};

struct FHesitationZoneTime {
	char bUseAnimationTime : 1; // 0x0
	char bDetermineTimeBasedOnZoneRange : 1; // 0x0
	float Time; // 0x4
	char bRandomTime : 1; // 0x8
	float MinTime; // 0xc
	float MaxTime; // 0x10
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceId; // 0x28
	FString InstanceName; // 0x38
	FString PlatformName; // 0x48
	FGuid SessionID; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FUnlockRequirements {
	FString MapURL; // 0x0
	float Score; // 0x10
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FTableRowStyle : FSlateWidgetStyle {
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

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FMovieSceneEvaluationHookEvent {
	FMovieSceneEvaluationHookComponent Hook; // 0x0
};

struct FZeuzAccountEnvCreateIn {
	FString Proj; // 0x0
	FString Title; // 0x10
	FString Desc; // 0x20
	FZeuzProperties Props; // 0x30
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

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FZeuzAllocationPayloadPortMapping {
	int32_t InternalPort; // 0x0
	int32_t ExternalPort; // 0x4
};

struct FNiagaraDebugHUDVariable {
	bool bEnabled; // 0x0
	FString Name; // 0x8
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
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

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FSpecificWeaponRecoilMod {
	EItemClass WeaponClass; // 0x0
	float RecoilFireStrength; // 0x4
	float RecoilFireStrengthFirst; // 0x8
	float RecoilDampStrength; // 0xc
	float RecoilAngleStrength; // 0x10
	float RecoilRandomness; // 0x14
	float RecoilFireADSModifier; // 0x18
	float RecoilBuildupADSModifier; // 0x1c
	float RecoilAngleADSModifier; // 0x20
	float RecoilBuildupDampStrength; // 0x24
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FConstraintLimitData {
	float LimitSwing1Value; // 0x0
	float LimitSwing2Value; // 0x4
	float LimitTwistValue; // 0x8
	EAngularConstraintMotion Swing1LockState; // 0xc
	EAngularConstraintMotion Swing2LockState; // 0xd
	EAngularConstraintMotion TwistLockState; // 0xe
};

struct FWeaponPreset {
	char bHasSavedData : 1; // 0x0
	char bSelected : 1; // 0x0
	FName PresetName; // 0x4
	FSavedWeaponAttachmentData AttachmentData; // 0x10
};

struct FPostProcessSetting_FloatParam : FPostProcessSetting_Base {
	float Start; // 0x80
	float End; // 0x84
	FRuntimeFloatCurve Curve; // 0x88
};

struct FZeuzSession : FZeuzItemCommon {
	FString ID; // 0x88
	FString SessionKey; // 0x98
	FString Dev; // 0xa8
	FString User; // 0xb8
	FString ApiKey; // 0xc8
	FString Proj; // 0xd8
	bool Admin; // 0xe8
};

struct FZeuzAllocationDef {
	FString Description; // 0x0
	TArray<FString> Regions; // 0x10
	FZeuzScalingRules ScalingRules; // 0x20
	FZeuzMachineSpec MachineMinSpec; // 0xf0
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
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

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FQueuedSwatCommand {
	FSwatCommand Command; // 0x0
	FHitResult ContextualData; // 0x80
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
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

struct FZeuzAccountTeamCreateIn : FZeuzAccountChange {
	FString Title; // 0x10
	FString Desc; // 0x20
	FZeuzProperties Props; // 0x30
	TArray<FString> Devs; // 0x58
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

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	FMovieSceneActorReferenceKey DefaultValue; // 0x18
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase {
	FBoneReference IKFootRootBone; // 0xe0
	FBoneReference PelvisBone; // 0xf0
	TArray<FSlopeWarpingFootDefinition> FeetDefinitions; // 0x100
	TArray<FSlopeWarpingFootData> FeetData; // 0x110
	FVectorRK4SpringInterpolator PelvisOffsetInterpolator; // 0x120
	FVector GravityDir; // 0x15c
	FVector CustomFloorOffset; // 0x168
	float CachedDeltaTime; // 0x174
	FVector TargetFloorNormalWorldSpace; // 0x178
	FVectorRK4SpringInterpolator FloorNormalInterpolator; // 0x184
	FVector TargetFloorOffsetLocalSpace; // 0x1c0
	FVectorRK4SpringInterpolator FloorOffsetInterpolator; // 0x1cc
	float MaxStepHeight; // 0x208
	char bKeepMeshInsideOfCapsule : 1; // 0x20c
	char bPullPelvisDown : 1; // 0x20c
	char bUseCustomFloorOffset : 1; // 0x20c
	char bUseCapsuleInfoInsteadOfFootTraces : 1; // 0x20c
	char bWasOnGround : 1; // 0x20c
	char bShowDebug : 1; // 0x20c
	char bFloorSmoothingInitialized : 1; // 0x20c
	FVector ActorLocation; // 0x210
	FVector GravityDirCompSpace; // 0x21c
};

struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate {
	FFMODEventControlChannel ControlKeys; // 0x20
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
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

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FMessagePromptContent {
	FName InputActionName; // 0x0
	EInputEvent InputEvent; // 0x8
	FText ActionText; // 0x10
	bool bIsAxisEvent; // 0x28
	int32_t KeyIndex; // 0x2c
	char bUseCustomActionText : 1; // 0x30
	FText CustomActionPromptText; // 0x38
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FPartyBeaconCrossplayPlatformMapping {
	FString PlatformName; // 0x0
	FString PlatformType; // 0x10
};

struct FZeuzAccountDevQuickSetupIn {
	FString Login; // 0x0
	FString Title; // 0x10
	FString PWHash; // 0x20
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FZeuzAllocationInfo {
	FString AllocationID; // 0x0
	FString ProjID; // 0x10
	FString EnvID; // 0x20
	TArray<FString> Regions; // 0x30
	TArray<FString> Machines; // 0x40
	FString Description; // 0x50
	bool Enabled; // 0x60
	FZeuzScalingRules ScalingRules; // 0x68
	FZeuzMachineSpec MachineMinSpec; // 0x138
	int32_t ActivePayloads; // 0x160
	int32_t ReservedPayloads; // 0x164
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FHesitationNonNeutralZoneData : FHesitationZoneData {
	FHesitationZoneRange Range; // 0x30
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FHesitationProfileTable : FTableRowBase {
	FHesitationData HesitationData; // 0x8
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FZeuzMatchmakingUser {
	FString UserID; // 0x0
	FString DisplayName; // 0x10
	FString Team; // 0x20
	FString Slot; // 0x30
	FString Info; // 0x40
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FGaitType {
	FString Name; // 0x0
	float Speed; // 0x10
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
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

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FCharacterData {
	FName Handle; // 0x0
	FText Name; // 0x8
	FText Title; // 0x20
	UTexture2D* CharacterIcon; // 0x38
	EItemClass ItemClass; // 0x40
	TSoftObjectPtr<UPlayableCharacterData> Blueprint; // 0x48
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FConstraintInstance : FConstraintInstanceBase {
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

struct FMapLayout {
	FVector2D MapOrigin; // 0x0
	float MapSize; // 0x8
	UTexture2D* MapOverviewTexture; // 0x10
	TMap<FString, UTexture2D*> MapCells; // 0x18
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FMovementSound {
	USoundCue* Sound; // 0x0
	float ChanceToPlay; // 0x8
};

struct FSpawnPoints {
	FText SpawnPointName; // 0x0
	UTexture2D* SpawnImage; // 0x18
	FText SpawnDescription; // 0x20
	TArray<FLevelDeployableData> RecommendedDeployables; // 0x38
	int32_t PlanningFloorNum; // 0x48
	float PlanningZoomLevel; // 0x4c
	FVector2D PlanningShift; // 0x50
	FVector2D PlanningCoordinate; // 0x58
	int32_t PtsCost; // 0x60
	bool bSpawnDisabled; // 0x64
	FName SpawnLabel; // 0x68
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
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

struct FPerlinNoiseShaker {
	float Amplitude; // 0x0
	float Frequency; // 0x4
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
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

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
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

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
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

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FMaterialPenetration {
	bool bIsPenetrable; // 0x0
	bool bCanRicochet; // 0x1
};

struct FZeuzLocation : FZeuzItemCommon {
	FString LocationID; // 0x88
	TArray<FString> Regions; // 0x98
	FString DisplayName; // 0xa8
	FString Provider; // 0xb8
	FString Type; // 0xc8
	float Ranking; // 0xd8
	TArray<FString> PingServer; // 0xe0
	FString ProvisionTemplateName; // 0xf0
	TMap<FString, FString> ProvisionTemplateParams; // 0x100
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
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

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FZeuzImageManagerPublishOutput {
	FString ImageHash; // 0x0
	FString ImageURL; // 0x10
	FString Version; // 0x20
	FString Description; // 0x30
};

struct FFMODAssetLookupRow : FTableRowBase {
	FString PackageName; // 0x8
	FString AssetName; // 0x18
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FSavedWeaponAttachmentData {
	bool bHasSavedData; // 0x0
	UWeaponAttachment* ScopeAttachment; // 0x8
	UWeaponAttachment* MuzzleAttachment; // 0x10
	UWeaponAttachment* UnderbarrelAttachment; // 0x18
	UWeaponAttachment* OverbarrelAttachment; // 0x20
	UWeaponAttachment* StockAttachment; // 0x28
	UWeaponAttachment* GripAttachment; // 0x30
	UWeaponAttachment* IlluminatorAttachment; // 0x38
	UWeaponAttachment* AmmunitionAttachment; // 0x40
	USkinComponent* Skin; // 0x48
	EAmmoType AmmoType; // 0x50
	int32_t AmmoCount; // 0x54
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FFMODProjectLocale {
	FString LocaleName; // 0x0
	FString LocaleCode; // 0x10
	bool bDefault; // 0x20
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FWeaponAnim {
	UAnimMontage* Body_FP; // 0x0
	UAnimMontage* Body_TP; // 0x8
	UAnimMontage* Gun_FP; // 0x10
	UAnimMontage* Gun_TP; // 0x18
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char sRGB : 1; // 0x1
};

struct FCharacterFPAnim {
	UAnimMontage* FP_Anim; // 0x0
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
};

struct FBoneVelocity {
	FName BoneName; // 0x0
	FVector LastLocation; // 0x8
	float CalculatedSpeed; // 0x14
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FZeuzAllocationGetOut {
	TArray<FZeuzAllocationInfo> Items; // 0x0
	int32_t Count; // 0x10
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
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

struct FActivityRouteCollection {
	TArray<FActivityRoute> ActivityRoutes; // 0x0
	FColor PathColor; // 0x10
	int32_t ActivityIdx; // 0x14
	bool bOnlyRunWhenCharacterRelevant; // 0x18
};

struct FRotTransitionInfo {
	float RotationOffset; // 0x0
	float RotationLimit; // 0x4
	float TransTime; // 0x8
	FName TransName; // 0xc
	int32_t TransIndex; // 0x14
	UAnimSequence* StandTransUpAnim; // 0x18
	UAnimSequence* StandTransLowAnim; // 0x20
	UAnimSequence* CrouchTransUpAnim; // 0x28
	UAnimSequence* CrouchTransLowAnim; // 0x30
	UAnimSequence* ArrestTransAnim; // 0x38
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FArmourData {
	FString Name; // 0x0
	TArray<FText> ProtectsAgainstText; // 0x10
	UTexture2D* Image; // 0x20
	EItemClass ItemClass; // 0x28
	TSoftClassPtr<UObject> Blueprint; // 0x30
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FActionMappingStruct {
	FName MappingName; // 0x0
	FKey Key; // 0x8
	bool Shift; // 0x20
	bool Ctrl; // 0x21
	bool Alt; // 0x22
	bool Cmd; // 0x23
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FZeuzAPIKeyDeleteIn {
	FString APIKeyID; // 0x0
	FString ProjID; // 0x10
};

struct FST_Character_RapSheet {
	TArray<FST_Character_Crime> CrimeCode_6_03560FE94E140512E2AD7A9D0ADA9C96; // 0x0
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FSuspectTweakables {
	FVector2D TimeUntilRaisingGun; // 0x0
	FVector2D TimeUntilDraw; // 0x8
	TMap<AScenarioCoverActivator*, FCoverDataArray> CoverMap; // 0x10
	float FakeSurrenderChance; // 0x60
	bool bSpawnOnCoverPoint; // 0x64
	bool bNoTaunt; // 0x65
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
	FName Tag; // 0x30
};

struct FLipSync_MorphTarget {
	FName MorphTargetName; // 0x0
	float Value; // 0x8
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FPersonnelEntry {
	EPersonnel PersonnelType; // 0x0
	TArray<int32_t> AvailableMapPoints; // 0x8
	int32_t PtsCost; // 0x18
	TSoftObjectPtr<UTexture2D> PersonnelTexture; // 0x20
};

struct FZeuzEnv : FZeuzItemCommon {
	FString ID; // 0x88
	FString Proj; // 0x98
	FString Account; // 0xa8
	bool Enabled; // 0xb8
	FString Desc; // 0xc0
	int32_t MaxScale; // 0xd0
	int32_t CurScale; // 0xd4
	TArray<FZeuzServiceCfg> Services; // 0xd8
};

struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	bool bIsFieldOfViewSupported; // 0x18
	bool bIsAspectRatioSupported; // 0x19
	bool bIsFocalLengthSupported; // 0x1a
	bool bIsProjectionModeSupported; // 0x1b
	float FilmBackWidth; // 0x1c
	float FilmBackHeight; // 0x20
	bool bIsApertureSupported; // 0x24
	bool bIsFocusDistanceSupported; // 0x25
};

struct FBPFriendInfo {
	FString DisplayName; // 0x0
	FString RealName; // 0x10
	EBPOnlinePresenceState OnlineState; // 0x20
	FBPUniqueNetId UniqueNetId; // 0x28
	bool bIsPlayingSameGame; // 0x48
	FBPFriendPresenceInfo PresenceInfo; // 0x50
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
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

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FTrapData : FTableRowBase {
	FTransform TrapRelativeTransform; // 0x10
	ATrapActorAttachedToDoor* TrapClass; // 0x40
	bool bAttachToDoor; // 0x48
	ETrapType TrapType; // 0x49
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FSavedCoverMap {
	FName CoverActivatorTag; // 0x0
	FTransform CoverActorTransform; // 0x10
	FTransform FallbackActorTransform; // 0x40
	bool bIsCrouchingCover; // 0x70
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

struct FZeuzImageManagerManifest {
	TArray<FZeuzImageManagerManifestEntry> Entries; // 0x0
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
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

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FSWATRequestOrder {
	FGuid ID; // 0x0
	AActor* RequestingTarget; // 0x10
	ASWATCharacter* RequestedByCharacter; // 0x18
	ASWATCharacter* ClosestSWATUponRequest; // 0x20
	FSwatCommand Command; // 0x28
	FString RequestCommandString; // 0xa8
	FString SpeechString; // 0xb8
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FZeuzProfileItemTransferIn : FZeuzProfileItemMove {
	FString UserIDTo; // 0x18
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FRoNMoveStyleTable : FTableRowBase {
	FRoNMovementStyle MoveStyle; // 0x8
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

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FClothCollisionPrim_ConvexFace {
	FPlane Plane; // 0x0
	TArray<int32_t> Indices; // 0x10
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
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

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
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

struct FRoNLeanMotion {
	UAnimSequence* Base; // 0x0
	UAnimSequence* BaseLeanLeft; // 0x8
	UAnimSequence* BaseLeanRight; // 0x10
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemID; // 0x10
	FString ValidationInfo; // 0x20
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
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

struct FScoreBonus {
	char bEnabled : 1; // 0x0
	FString ScoreName; // 0x8
	int32_t Score; // 0x18
	char bRequired : 1; // 0x1c
	char bGiven : 1; // 0x1c
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

struct FPlane : FVector {
	float W; // 0xc
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemID; // 0x10
	FString ValidationInfo; // 0x20
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FZeuzLobbyKick {
	FString LobbyID; // 0x0
	FString UserID; // 0x10
	FString TargetID; // 0x20
	bool Ban; // 0x30
	FString Message; // 0x38
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FZeuzProfileItemNameCount {
	FString Name; // 0x0
	int32_t Count; // 0x10
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
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

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
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

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FAttachmentUIElements {
	UTexture2D* ImageOfScope; // 0x0
	UTexture2D* SightPicture; // 0x8
	UTexture2D* AttachmentIcon; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FTimeline {
	ETimelineLengthMode LengthMode; // 0x0
	char bLooping : 1; // 0x1
	char bReversePlayback : 1; // 0x1
	char bPlaying : 1; // 0x1
	float Length; // 0x4
	float PlayRate; // 0x8
	float Position; // 0xc
	TArray<FTimelineEventEntry> Events; // 0x10
	TArray<FTimelineVectorTrack> InterpVectors; // 0x20
	TArray<FTimelineFloatTrack> InterpFloats; // 0x30
	TArray<FTimelineLinearColorTrack> InterpLinearColors; // 0x40
	FDelegate TimelinePostUpdateFunc; // 0x50
	FDelegate TimelineFinishedFunc; // 0x60
	TWeakObjectPtr<UObject> PropertySetObject; // 0x70
	FName DirectionPropertyName; // 0x78
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
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

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
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

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName InputName; // 0x4
	FName ExpressionName; // 0xc
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FRotTransitionInfoAI {
	float RotationOffset; // 0x0
	float RotationLimit; // 0x4
	FName TransName; // 0x8
	int32_t TransIndex; // 0x10
	UAnimSequence* CurveSourceAnim; // 0x18
};

struct FZeuzMachineGetOut {
	TArray<FZeuzMachineInfo> Items; // 0x0
	int32_t Count; // 0x10
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FSavedLoadout {
	FString Name; // 0x0
	ABaseItem* Primary; // 0x10
	UWeaponAttachment* PrimaryScope; // 0x18
	UWeaponAttachment* PrimaryMuzzle; // 0x20
	UWeaponAttachment* PrimaryUnderbarrel; // 0x28
	UWeaponAttachment* PrimaryOverbarrel; // 0x30
	UWeaponAttachment* PrimaryStock; // 0x38
	UWeaponAttachment* PrimaryGrip; // 0x40
	UWeaponAttachment* PrimaryIlluminator; // 0x48
	UWeaponAttachment* PrimaryAmmunition; // 0x50
	int32_t PrimaryAmmoCount; // 0x58
	EAmmoType PrimaryAmmoType; // 0x5c
	USkinComponent* PrimarySkin; // 0x60
	ABaseItem* Secondary; // 0x68
	UWeaponAttachment* SecondaryScope; // 0x70
	UWeaponAttachment* SecondaryMuzzle; // 0x78
	UWeaponAttachment* SecondaryUnderbarrel; // 0x80
	UWeaponAttachment* SecondaryOverbarrel; // 0x88
	UWeaponAttachment* SecondaryStock; // 0x90
	UWeaponAttachment* SecondaryGrip; // 0x98
	UWeaponAttachment* SecondaryIlluminator; // 0xa0
	UWeaponAttachment* SecondaryAmmunition; // 0xa8
	int32_t SecondaryAmmoCount; // 0xb0
	EAmmoType SecondaryAmmoType; // 0xb4
	USkinComponent* SecondarySkin; // 0xb8
	FName CharacterType; // 0xc0
	ABaseItem* LongTactical; // 0xc8
	TArray<ABaseItem*> Grenades; // 0xd0
	TArray<ABaseItem*> TacticalDevices; // 0xe0
	ABaseItem* Armor; // 0xf0
	ABaseItem* Helmet; // 0xf8
	ABaseItem* RandomGear; // 0x100
	TArray<ABaseItem*> Miscelaneous; // 0x108
	USkinComponent* PlayerSkin; // 0x118
	FString CharacterLookOverride; // 0x120
	EArmourCoverage ArmorCoverage; // 0x130
	EArmourLevel ArmorLevel; // 0x131
};

struct FActorLayer {
	FName Name; // 0x0
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
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

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FLevelStreamInstanceInfo {
	FName PackageName; // 0x0
	FName PackageNameToLoad; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	char bShouldBeLoaded : 1; // 0x28
	char bShouldBeVisible : 1; // 0x28
	char bShouldBlockOnLoad : 1; // 0x28
	int32_t LODIndex; // 0x2c
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

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FZeuzUser : FZeuzItemCommon {
	FString ID; // 0x88
	FString Login; // 0x98
	FString Name; // 0xa8
	FString PWHash; // 0xb8
	FString Desc; // 0xc8
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
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

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FHesitationActionSetting {
	char bEnabled : 1; // 0x0
	FHesitationMeterBoost MeterBoost; // 0x8
	FHesitationZoneActionSetting ComplianceZone; // 0x38
	FHesitationZoneActionSetting DefianceZone; // 0x108
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

struct FRoNMovementStyle {
	FString Name; // 0x0
	bool bIsStrafeMovement; // 0x10
	FRoNStyleIdleData IdleData; // 0x18
	FRoNStyleTurnData TurnData; // 0x28
	TArray<FRoNGaitType> GaitEntries; // 0x70
	EItemOverrideRule ItemOverrideRule; // 0x80
	bool bIsLoweredSet; // 0x81
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FZeuzLocalityRegionGetIn {
	TArray<FString> RegionIDs; // 0x0
	TArray<FString> DisplayNames; // 0x10
	TArray<FString> ContainsLocations; // 0x20
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
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

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FAnimInput_CapsuleLocomotion {
	FVector WorldVelocity; // 0x0
	FVector LocalVelocity; // 0xc
	FVector WorldAcceleration; // 0x18
	FVector LocalAcceleration; // 0x24
	float VelocityYawAngle; // 0x30
	float AccelerationYawAngle; // 0x34
	float Speed2D; // 0x38
	float MovingThreshold; // 0x3c
	bool bIsMoving2D; // 0x40
	bool bHasAcceleration2D; // 0x41
	bool bAccelerationOpposesVelocity; // 0x42
	bool bIsOnGround; // 0x43
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FEmitterDynamicParameter {
	FName paramName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FBPSteamGroupInfo {
	FBPUniqueNetId GroupID; // 0x0
	FString GroupName; // 0x20
	FString GroupTag; // 0x30
	int32_t numOnline; // 0x40
	int32_t numInGame; // 0x44
	int32_t numChatting; // 0x48
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FScoreData {
	TArray<FScoreBonus> Bonuses; // 0x0
	TArray<FScorePenalty> Penalties; // 0x10
	char bHiddenScore : 1; // 0x20
	UScoringComponent* FromScoringComponent; // 0x28
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FItemID {
	int32_t ID; // 0x0
	ABaseItem* Item; // 0x8
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FExitRoute {
	TArray<ADoor*> Doors; // 0x0
	TArray<AThreatAwarenessActor*> ThreatsOnRoute; // 0x10
	float PathCost; // 0x20
	FVector Location; // 0x24
};

struct FZeuzAdminCountResoucesPerAccountOut {
	FString AccountID; // 0x0
	FString AccountName; // 0x10
	int32_t Count; // 0x20
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x0
	float ProjectionAngularTolerance; // 0x4
	float ProjectionLinearAlpha; // 0x8
	float ProjectionAngularAlpha; // 0xc
	float LinearBreakThreshold; // 0x10
	float LinearPlasticityThreshold; // 0x14
	float AngularBreakThreshold; // 0x18
	float AngularPlasticityThreshold; // 0x1c
	FLinearConstraint LinearLimit; // 0x20
	FConeConstraint ConeLimit; // 0x3c
	FTwistConstraint TwistLimit; // 0x5c
	FLinearDriveConstraint LinearDrive; // 0x78
	FAngularDriveConstraint AngularDrive; // 0xc4
	char bDisableCollision : 1; // 0x110
	char bParentDominates : 1; // 0x110
	char bEnableProjection : 1; // 0x110
	char bEnableSoftProjection : 1; // 0x110
	char bAngularBreakable : 1; // 0x110
	char bAngularPlasticity : 1; // 0x110
	char bLinearBreakable : 1; // 0x110
	char bLinearPlasticity : 1; // 0x110
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FZeuzMachineGetIn : FZeuzMachinePagination {
	FString MachineID; // 0x28
	FString AllocationID; // 0x38
	FString RegionID; // 0x48
	FString LocationType; // 0x58
	TArray<FString> Tags; // 0x68
	FZeuzTimestamp Start; // 0x78
	FZeuzTimestamp End; // 0x80
};

struct FZeuzImageManagerManifestEntry {
	FString Filename; // 0x0
	int32_t Filesize; // 0x10
	FString Hash; // 0x18
	FString URL; // 0x28
	TArray<FZeuzImageManagerManifestEntryPart> Parts; // 0x38
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

struct FLoadout {
	FString Name; // 0x0
	TArray<ABaseItem*> Items; // 0x10
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FAnimWeaponData {
	TArray<TSoftObjectPtr<UAnimMontage>> AnimMontages; // 0x0
};

struct FNiagaraOutlinerSystemData {
	TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances; // 0x0
	FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x10
	FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x18
	FNiagaraOutlinerTimingData AveragePerInstanceTime; // 0x20
	FNiagaraOutlinerTimingData MaxPerInstanceTime; // 0x28
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
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

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FModularSynthPreset : FTableRowBase {
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

struct FLoadoutCategory {
	bool Enabled?_56_57929C134BE3AF4A5C9507892D5652E6; // 0x0
	FText LoadoutCategoryName_2_297159FC4C987F7742FCA1808ADFABED; // 0x8
	EItemClass LoadoutClass_5_63C8556E4413D0C7117B57A99EF9D0C9; // 0x20
	LoadoutScrollBehaviour ScrollBehaviour_17_A27C1597429B3D6590C8AA8A6286C7C9; // 0x21
	FName CameraTag_26_DEC1E94D47A76905551A97ABCEFCF820; // 0x24
	FString PreviewAnimation_25_863F4D0541CC198B8FAF4580D5A79C50; // 0x30
	bool IsTactical?_54_A54B1F11475811C01916A0989533AE6E; // 0x40
	int32_t TacticalSlot_10_DF87D74B48F4114F7B5E55A15E7D92A4; // 0x44
	bool IsMultipleTacticalSlots?_57_BADB792147BFFAA77B2387867167C625; // 0x48
	int32_t StartingTacticalSlot_53_ECD80FCD42BC7033BE63B2BB2865D366; // 0x4c
	FText Tooltip_20_D7AE8D294E32DC8F3E6C92AF4A164C87; // 0x50
};

struct FHesitationStartleSettings {
	float StartleChance; // 0x0
	int32_t GuaranteeStartleAfterActionUses; // 0x4
	char bStartleTimeIsAnimationTime : 1; // 0x8
	float StartleTime; // 0xc
};

struct FSpawnTweakables {
	TArray<EBehaviourMods> RandomlyAppliedBehaviours; // 0x0
	UBaseCombatMoveActivity* DefaultCombatMoveActivity; // 0x10
	ABaseWeapon* ForceWeaponOverride; // 0x18
	ETeamType ForceTeamTypeOverride; // 0x20
	TArray<FName> SpawnWithTags; // 0x28
	bool bForceAlwaysJustified; // 0x38
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

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FRChatMessage {
	FString SenderName; // 0x0
	AReadyOrNotPlayerState* SenderPlayerState; // 0x10
	FString Message; // 0x18
	FLinearColor Color; // 0x28
	FDateTime Timestamp; // 0x38
	FString Args; // 0x40
	ETeamType AssociatedTeam; // 0x50
	bool bKillfeed; // 0x51
	bool bCommand; // 0x52
	APlayerController* TargetPlayerController; // 0x58
	ETeamType TargetTeam; // 0x60
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FAIRoster {
	int32_t MinimumSpawn; // 0x0
	int32_t MaximumSpawn; // 0x4
	FName SpawnGroup; // 0x8
	TArray<FAIDataPick> SpawnAI; // 0x10
	bool bAffectedByNegotiator; // 0x20
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

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FZeuzLobbyJoin {
	FString LobbyID; // 0x0
	FString UserID; // 0x10
	FString Password; // 0x20
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
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
	ESubmixEffectDynamicsKeySource KeySource; // 0x20
	UAudioBus* ExternalAudioBus; // 0x28
	USoundSubmix* ExternalSubmix; // 0x30
	char bChannelLinked : 1; // 0x38
	char bAnalogMode : 1; // 0x38
	char bBypass : 1; // 0x38
	char bKeyAudition : 1; // 0x38
	float KeyGainDb; // 0x3c
	float OutputGainDb; // 0x40
	FSubmixEffectDynamicProcessorFilterSettings KeyHighshelf; // 0x44
	FSubmixEffectDynamicProcessorFilterSettings KeyLowshelf; // 0x50
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FZeuzAPIKey : FZeuzItemCommon {
	FString APIKeyID; // 0x88
	FString Key; // 0x98
	FString ProjID; // 0xa8
	FString PWHash; // 0xb8
	bool Revoked; // 0xc8
	FZeuzTimestamp RevokedAt; // 0xd0
	FZeuzTimestamp LastLogin; // 0xd8
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

struct FZeuzTags {
	TArray<FString> Tags; // 0x0
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FSlateMeshVertex {
	FVector2D Position; // 0x0
	FColor Color; // 0x8
	FVector2D UV0; // 0xc
	FVector2D UV1; // 0x14
	FVector2D UV2; // 0x1c
	FVector2D UV3; // 0x24
	FVector2D UV4; // 0x2c
	FVector2D UV5; // 0x34
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

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t VertexCount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FNiagaraDebuggerConnectionClosed {
	FGuid SessionID; // 0x0
	FGuid InstanceId; // 0x10
};

struct FMagicLeapRaycastQueryParams {
	FVector Position; // 0x0
	FVector Direction; // 0xc
	FVector UpVector; // 0x18
	int32_t Width; // 0x24
	int32_t Height; // 0x28
	float HorizontalFovDegrees; // 0x2c
	bool CollideWithUnobserved; // 0x30
	int32_t UserData; // 0x34
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FZeuzAllocationRequestServiceIn {
	FString AllocationID; // 0x0
	TArray<FZeuzAllocationRegionCount> RegionCount; // 0x10
	int32_t TimeoutSeconds; // 0x20
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x114
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FAnimSectionData {
	float SectionStart; // 0x0
	float SectionEnd; // 0x4
};

struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase {
	FBoneReference IKFootRootBone; // 0xd0
	TArray<FSpeedWarpingFootDefinition> FeetDefinitions; // 0xe0
	TArray<FSpeedWarpingFootData> FeetData; // 0xf0
	FBoneReference PelvisBone; // 0x100
	ESpeedWarpingAxisMode SpeedWarpingAxisMode; // 0x110
	ESpeedWarpingAxisMode FloorNormalAxisMode; // 0x111
	ESpeedWarpingAxisMode GravityDirAxisMode; // 0x112
	float SpeedScaling; // 0x114
	FInputScaleBiasClamp SpeedScalingScaleBiasClamp; // 0x118
	FVector ManualSpeedWarpingDir; // 0x148
	FVector ManualFloorNormalInput; // 0x154
	FVector ManualGravityDirInput; // 0x160
	float PelvisPostAdjustmentAlpha; // 0x16c
	int32_t PelvisAdjustmentMaxIter; // 0x170
	FVectorRK4SpringInterpolator PelvisAdjustmentInterp; // 0x174
	char bAdjustThighBonesRotation : 1; // 0x1b0
	char bClampIKUsingFKLeg : 1; // 0x1b0
	char bOrientSpeedWarpingAxisBasedOnFloorNormal : 1; // 0x1b0
	float CachedDeltaTime; // 0x1b4
};

struct FZeuzMachineTagsSetIn {
	FString ID; // 0x0
	FZeuzTags Tags; // 0x10
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
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

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x600
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

struct FScriptedFireAt {
	AActor* FireAtActor; // 0x0
	float TimeRemaining; // 0x8
	bool bOverrideTargetedEnemy; // 0xc
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

struct FHesitationMeterBoost {
	char bEnabled : 1; // 0x0
	float ProgressBoost; // 0x4
	float BoostSpeed; // 0x8
	float TimeBoostPercentage; // 0xc
	float BoostCooldown; // 0x10
	int32_t BoostUses; // 0x14
	int32_t AvailableBoostUses; // 0x18
	FTimerHandle TH_BoostProgress; // 0x20
	FTimerHandle TH_BoostCooldown; // 0x28
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendoutTime; // 0x4
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
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

struct FZeuzMatchMakingPartyInit : FZeuzMatchMakingInit {
	TArray<FZeuzMatchmakingUser> Party; // 0x80
	FString AllocationID; // 0x90
	FString ServerConnect; // 0xa0
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FZeuzProfileUsersListOut {
	int32_t Count; // 0x0
	TArray<FString> UserIDs; // 0x8
};

struct FOrientationWarpingSpineBoneSettings {
	FBoneReference Bone; // 0x0
};

struct FScopeModifications {
	UObject* WeaponClass; // 0x0
	float VerticalOffset; // 0x8
	float HorizontalOffset; // 0xc
	float DistanceOffset; // 0x10
	USkeletalMesh* CustomWeaponMesh; // 0x18
	FName HideBone; // 0x20
	bool bSupportsSecondarySights; // 0x28
	FVector MeshSpace_ADS_SecondaryPos; // 0x2c
	FRotator MeshSpace_ADS_SecondaryRot; // 0x38
};

struct FDefaultAudioBusSettings {
	FSoftObjectPath AudioBus; // 0x0
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FHesitationActionSetting_Custom : FHesitationActionSetting {
	FString Name; // 0x1d8
};

struct FZeuzImageManagerPublishInput {
	FString Description; // 0x0
	FString Version; // 0x10
};

struct FST_Character_Crime {
	FString CrimeCode_2_03560FE94E140512E2AD7A9D0ADA9C96; // 0x0
	FString CrimeDateday-month-year_5_7D99EF0441DA2AE66018E992D430B0F7; // 0x10
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
	FVector2D OffCenterProjectionOffset; // 0x5a0
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FMotivityMoveDataTable : FTableRowBase {
	FMovementStyle MoveData; // 0x8
	int32_t MoveIndex; // 0x30
};

struct FZeuzSafetyLimits {
	float CoreMaxUsageThreshold; // 0x0
	int32_t CpuRemainingCores; // 0x4
	int32_t MemoryMBFree; // 0x8
	int32_t StorageGBFree; // 0xc
	int32_t IOMBpsFree; // 0x10
	int32_t InetMBpsFree; // 0x14
};

struct FZeuzImagemanagerPublishState {
	FString ImageID; // 0x0
	FString ImageHash; // 0x10
	FString State; // 0x20
	FString Message; // 0x30
	FZeuzImageManagerPublishOutput Result; // 0x40
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FMovieSceneCompiledSequenceFlagStruct {
	char bParentSequenceRequiresLowerFence : 1; // 0x0
	char bParentSequenceRequiresUpperFence : 1; // 0x0
};

struct FZeuzProj : FZeuzItemCommon {
	FString ID; // 0x88
	FString Account; // 0x98
	FString Desc; // 0xa8
	TArray<FZeuzProjEnvInfo> Envs; // 0xb8
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FImpactFx {
	UParticleSystem* ParticleFx; // 0x0
	USoundCue* SoundFx; // 0x8
	UMaterialInterface* Decal; // 0x10
	bool bUseRandomFrame; // 0x18
	int32_t FrameMax; // 0x1c
	AActor* DecalMesh; // 0x20
	UTexture2D* PaintMaterialTexture; // 0x28
};

struct FTranscript {
	float AudioTimestamp; // 0x0
	float Duration; // 0x4
	FText SpeakerName; // 0x8
	FText Transcription; // 0x20
};

struct FInjury {
	FName BoneName; // 0x0
	int32_t InjuryCount; // 0x8
};

struct FAttachmentCategory {
	EWeaponAttachmentType AttachmentType_21_297159FC4C987F7742FCA1808ADFABED; // 0x0
	TArray<UWeaponAttachment*> AttachmentClasses_24_63C8556E4413D0C7117B57A99EF9D0C9; // 0x8
	FText Tooltip_27_A6F610EC4EB0DCF6D1F280A7E16867DA; // 0x18
};

struct FZeuzAccount : FZeuzItemCommon {
	FString ID; // 0x88
	TArray<FString> Managers; // 0x98
	TArray<FString> Projects; // 0xa8
	TArray<FString> Teams; // 0xb8
	TArray<FString> Devs; // 0xc8
	FString Desc; // 0xd8
	FString EMail; // 0xe8
	FString Company; // 0xf8
	FString Department; // 0x108
	FString Country; // 0x118
	FString ZIP; // 0x128
	FString City; // 0x138
	FString StreetAddr; // 0x148
	TArray<FZeuzProvisioningAccount> ProvisioningAccounts; // 0x158
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

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData {
	bool bIsLocationSupported; // 0x10
	bool bIsRotationSupported; // 0x11
	bool bIsScaleSupported; // 0x12
};

struct FHostageDriverProperties {
	float TimeToKillHostage; // 0x0
};

struct FNiagaraBool {
	int32_t Value; // 0x0
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

struct FZeuzMetricsQueryIn {
	FZeuzTimestamp Start; // 0x0
	FZeuzTimestamp End; // 0x8
	int32_t Step; // 0x10
	FString GroupBy; // 0x18
	TArray<FString> PayloadIDs; // 0x28
	TArray<FString> MachineIDs; // 0x38
	TArray<FString> AllocationIDs; // 0x48
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemID; // 0x10
	FString ValidationInfo; // 0x20
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
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

struct FZeuzAdminStat {
	FString GroupCol; // 0x0
	int32_t CountVal; // 0x10
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

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FBonePoseData {
	FVector BoneTransformPosition; // 0x0
	FVector BoneTransformVelocity; // 0xc
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
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

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FSynthKnobStyle : FSlateWidgetStyle {
	FSlateBrush LargeKnob; // 0x8
	FSlateBrush LargeKnobOverlay; // 0x90
	FSlateBrush MediumKnob; // 0x118
	FSlateBrush MediumKnobOverlay; // 0x1a0
	float MinValueAngle; // 0x228
	float MaxValueAngle; // 0x22c
	ESynthKnobSize KnobSize; // 0x230
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FZeuzLobbyServerConnect {
	FString ServerConnect; // 0x0
};

struct FZeuzProfileItemAddIn : FZeuzProfileItemNameCount {
	FString UserID; // 0x18
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
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

struct FScrollBarStyle : FSlateWidgetStyle {
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

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FZeuzSimpleAuthLoginIn {
	FString Login; // 0x0
	FString Password; // 0x10
	EZeuzSessionType LoginType; // 0x20
};

struct FRonInputKeyTable : FTableRowBase {
	FRonKey Key; // 0x8
};

struct FNiagaraDebugHUDSettingsData {
	bool bEnabled; // 0x0
	bool bValidateSystemSimulationDataBuffers; // 0x1
	bool bValidateParticleDataBuffers; // 0x2
	bool bOverviewEnabled; // 0x3
	ENiagaraDebugHudFont OverviewFont; // 0x4
	FVector2D OverviewLocation; // 0x8
	FString ActorFilter; // 0x10
	bool bComponentFilterEnabled; // 0x20
	FString ComponentFilter; // 0x28
	bool bSystemFilterEnabled; // 0x38
	FString SystemFilter; // 0x40
	bool bEmitterFilterEnabled; // 0x50
	FString EmitterFilter; // 0x58
	bool bActorFilterEnabled; // 0x68
	ENiagaraDebugHudVerbosity SystemDebugVerbosity; // 0x6c
	ENiagaraDebugHudVerbosity SystemEmitterVerbosity; // 0x70
	bool bSystemShowBounds; // 0x74
	bool bSystemShowActiveOnlyInWorld; // 0x75
	bool bShowSystemVariables; // 0x76
	TArray<FNiagaraDebugHUDVariable> SystemVariables; // 0x78
	FNiagaraDebugHudTextOptions SystemTextOptions; // 0x88
	bool bShowParticleVariables; // 0x98
	bool bEnableGpuParticleReadback; // 0x99
	TArray<FNiagaraDebugHUDVariable> ParticlesVariables; // 0xa0
	FNiagaraDebugHudTextOptions ParticleTextOptions; // 0xb0
	bool bShowParticlesVariablesWithSystem; // 0xc0
	bool bUseMaxParticlesToDisplay; // 0xc1
	int32_t MaxParticlesToDisplay; // 0xc4
	ENiagaraDebugPlaybackMode PlaybackMode; // 0xc8
	bool bPlaybackRateEnabled; // 0xc9
	float PlaybackRate; // 0xcc
	bool bLoopTimeEnabled; // 0xd0
	float LoopTime; // 0xd4
	bool bShowGlobalBudgetInfo; // 0xd8
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FZeuzPayloadGetIn : FZeuzPayloadPagination {
	TArray<FString> AllocationIDs; // 0x28
	TArray<FString> MachineIDs; // 0x38
	TArray<FString> PayloadIDs; // 0x48
	FString LocationType; // 0x58
	FString RegionID; // 0x68
	bool GetReserved; // 0x78
	bool GetUnreserved; // 0x79
	bool GetActive; // 0x7a
	bool GetInactive; // 0x7b
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FZeuzServerBrowserStateBase {
	FString ID; // 0x0
	FString ClientAddr; // 0x10
	int32_t UsersCur; // 0x20
	int32_t UsersMax; // 0x24
	FString Compatibility; // 0x28
	FZeuzVariant Params; // 0x38
};

struct FZeuzImageManagerPresignedFileUrlIn {
	FString ManifestHash; // 0x0
	FString Filename; // 0x10
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString Tooltip; // 0x10
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
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

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FZeuzAdminCountResoucesIn {
	bool OnlyInUse; // 0x0
	FString RegionID; // 0x8
};

struct FZeuzAllocationCreateIn {
	FString ProjID; // 0x0
	FString EnvID; // 0x10
	FZeuzAllocationDef AllocationDef; // 0x20
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FAnimNode_LazySpringBone : FAnimNode_SkeletalControlBase {
	FVector DrivingForce; // 0xc8
	float DrivingForceStrength; // 0xd4
	FVector TargetDistance; // 0xf0
	float Stiffness; // 0xfc
	float Mass; // 0x100
	float Damping; // 0x104
	float Gravity; // 0x108
	FAxis LookAt_Axis; // 0x10c
	bool FlipYawWithRoll; // 0x11c
	FBoneReference ReferenceBone; // 0x144
	FBoneReference DrivenBone; // 0x154
	bool bLimitDisplacement; // 0x164
	float MaxDisplacement; // 0x168
	float SpringStiffness; // 0x16c
	float SpringDamping; // 0x170
	float ErrorResetThresh; // 0x174
	bool bNoZSpring; // 0x178
	bool bTranslateX; // 0x179
	bool bTranslateY; // 0x17a
	bool bTranslateZ; // 0x17b
	bool bRotateX; // 0x17c
	bool bRotateY; // 0x17d
	bool bRotateZ; // 0x17e
};

struct FPostProcessEffectPlayer {
	char bEnabled : 1; // 0x0
	char bDebug : 1; // 0x0
	char bRestartIfAlreadyPlaying : 1; // 0x0
	char bWantsFadeOut : 1; // 0x0
	float FadeOutSpeed; // 0x4
	TArray<UPostProcessRequirement*> RequirementsClasses; // 0x8
	FName EffectName; // 0x18
	UPostProcessEffectData* PostProcess_Data; // 0x20
	UMaterialInstanceDynamic* PostProcess_MID; // 0x28
	char bStarted : 1; // 0x30
};

struct FZeuzLogsearchLogsStatus {
	FString Status; // 0x0
	int32_t Step; // 0x10
	int32_t Total; // 0x14
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FBPSteamWorkshopItemDetails {
	FBPSteamResult ResultOfRequest; // 0x0
	FBPWorkshopFileType FileType; // 0x1
	int32_t CreatorAppID; // 0x4
	int32_t ConsumerAppID; // 0x8
	FString Title; // 0x10
	FString Description; // 0x20
	FString ItemUrl; // 0x30
	int32_t VotesUp; // 0x40
	int32_t VotesDown; // 0x44
	float CalculatedScore; // 0x48
	bool bBanned; // 0x4c
	bool bAcceptedForUse; // 0x4d
	bool bTagsTruncated; // 0x4e
	FString CreatorSteamID; // 0x50
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

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FPostProcessSettings {
	char bOverride_TemperatureType : 1; // 0x0
	char bOverride_WhiteTemp : 1; // 0x0
	char bOverride_WhiteTint : 1; // 0x0
	char bOverride_ColorSaturation : 1; // 0x0
	char bOverride_ColorContrast : 1; // 0x0
	char bOverride_ColorGamma : 1; // 0x0
	char bOverride_ColorGain : 1; // 0x0
	char bOverride_ColorOffset : 1; // 0x0
	char bOverride_ColorSaturationShadows : 1; // 0x1
	char bOverride_ColorContrastShadows : 1; // 0x1
	char bOverride_ColorGammaShadows : 1; // 0x1
	char bOverride_ColorGainShadows : 1; // 0x1
	char bOverride_ColorOffsetShadows : 1; // 0x1
	char bOverride_ColorSaturationMidtones : 1; // 0x1
	char bOverride_ColorContrastMidtones : 1; // 0x1
	char bOverride_ColorGammaMidtones : 1; // 0x1
	char bOverride_ColorGainMidtones : 1; // 0x2
	char bOverride_ColorOffsetMidtones : 1; // 0x2
	char bOverride_ColorSaturationHighlights : 1; // 0x2
	char bOverride_ColorContrastHighlights : 1; // 0x2
	char bOverride_ColorGammaHighlights : 1; // 0x2
	char bOverride_ColorGainHighlights : 1; // 0x2
	char bOverride_ColorOffsetHighlights : 1; // 0x2
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x2
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x3
	char bOverride_BlueCorrection : 1; // 0x3
	char bOverride_ExpandGamut : 1; // 0x3
	char bOverride_ToneCurveAmount : 1; // 0x3
	char bOverride_FilmWhitePoint : 1; // 0x3
	char bOverride_FilmSaturation : 1; // 0x3
	char bOverride_FilmChannelMixerRed : 1; // 0x3
	char bOverride_FilmChannelMixerGreen : 1; // 0x3
	char bOverride_FilmChannelMixerBlue : 1; // 0x4
	char bOverride_FilmContrast : 1; // 0x4
	char bOverride_FilmDynamicRange : 1; // 0x4
	char bOverride_FilmHealAmount : 1; // 0x4
	char bOverride_FilmToeAmount : 1; // 0x4
	char bOverride_FilmShadowTint : 1; // 0x4
	char bOverride_FilmShadowTintBlend : 1; // 0x4
	char bOverride_FilmShadowTintAmount : 1; // 0x4
	char bOverride_FilmSlope : 1; // 0x5
	char bOverride_FilmToe : 1; // 0x5
	char bOverride_FilmShoulder : 1; // 0x5
	char bOverride_FilmBlackClip : 1; // 0x5
	char bOverride_FilmWhiteClip : 1; // 0x5
	char bOverride_SceneColorTint : 1; // 0x5
	char bOverride_SceneFringeIntensity : 1; // 0x5
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x5
	char bOverride_AmbientCubemapTint : 1; // 0x6
	char bOverride_AmbientCubemapIntensity : 1; // 0x6
	char bOverride_BloomMethod : 1; // 0x6
	char bOverride_BloomIntensity : 1; // 0x6
	char bOverride_BloomThreshold : 1; // 0x6
	char bOverride_Bloom1Tint : 1; // 0x6
	char bOverride_Bloom1Size : 1; // 0x6
	char bOverride_Bloom2Size : 1; // 0x6
	char bOverride_Bloom2Tint : 1; // 0x7
	char bOverride_Bloom3Tint : 1; // 0x7
	char bOverride_Bloom3Size : 1; // 0x7
	char bOverride_Bloom4Tint : 1; // 0x7
	char bOverride_Bloom4Size : 1; // 0x7
	char bOverride_Bloom5Tint : 1; // 0x7
	char bOverride_Bloom5Size : 1; // 0x7
	char bOverride_Bloom6Tint : 1; // 0x7
	char bOverride_Bloom6Size : 1; // 0x8
	char bOverride_BloomSizeScale : 1; // 0x8
	char bOverride_BloomConvolutionTexture : 1; // 0x8
	char bOverride_BloomConvolutionSize : 1; // 0x8
	char bOverride_BloomConvolutionCenterUV : 1; // 0x8
	char bOverride_BloomConvolutionPreFilter : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x9
	char bOverride_BloomConvolutionBufferScale : 1; // 0x9
	char bOverride_BloomDirtMaskIntensity : 1; // 0x9
	char bOverride_BloomDirtMaskTint : 1; // 0x9
	char bOverride_BloomDirtMask : 1; // 0x9
	char bOverride_CameraShutterSpeed : 1; // 0x9
	char bOverride_CameraISO : 1; // 0x9
	char bOverride_AutoExposureMethod : 1; // 0x9
	char bOverride_AutoExposureLowPercent : 1; // 0xa
	char bOverride_AutoExposureHighPercent : 1; // 0xa
	char bOverride_AutoExposureMinBrightness : 1; // 0xa
	char bOverride_AutoExposureMaxBrightness : 1; // 0xa
	char bOverride_AutoExposureCalibrationConstant : 1; // 0xa
	char bOverride_AutoExposureSpeedUp : 1; // 0xa
	char bOverride_AutoExposureSpeedDown : 1; // 0xa
	char bOverride_AutoExposureBias : 1; // 0xa
	char bOverride_AutoExposureBiasCurve : 1; // 0xb
	char bOverride_AutoExposureMeterMask : 1; // 0xb
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xb
	char bOverride_HistogramLogMin : 1; // 0xb
	char bOverride_HistogramLogMax : 1; // 0xb
	char bOverride_LensFlareIntensity : 1; // 0xb
	char bOverride_LensFlareTint : 1; // 0xb
	char bOverride_LensFlareTints : 1; // 0xb
	char bOverride_LensFlareBokehSize : 1; // 0xc
	char bOverride_LensFlareBokehShape : 1; // 0xc
	char bOverride_LensFlareThreshold : 1; // 0xc
	char bOverride_VignetteIntensity : 1; // 0xc
	char bOverride_GrainIntensity : 1; // 0xc
	char bOverride_GrainJitter : 1; // 0xc
	char bOverride_AmbientOcclusionIntensity : 1; // 0xc
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0xc
	char bOverride_AmbientOcclusionRadius : 1; // 0xd
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0xd
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0xd
	char bOverride_AmbientOcclusionDistance : 1; // 0xd
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xd
	char bOverride_AmbientOcclusionPower : 1; // 0xd
	char bOverride_AmbientOcclusionBias : 1; // 0xd
	char bOverride_AmbientOcclusionQuality : 1; // 0xd
	char bOverride_AmbientOcclusionMipBlend : 1; // 0xe
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
	char bOverride_PathTracingFilterWidth : 1; // 0x1e
	char bOverride_PathTracingEnableEmissive : 1; // 0x1e
	char bOverride_PathTracingMaxPathExposure : 1; // 0x1e
	char bOverride_PathTracingEnableDenoiser : 1; // 0x1e
	char bMobileHQGaussian : 1; // 0x20
	EBloomMethod BloomMethod; // 0x21
	EAutoExposureMethod AutoExposureMethod; // 0x22
	ETemperatureMethod TemperatureType; // 0x23
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
	float PathTracingFilterWidth; // 0x530
	char PathTracingEnableEmissive : 1; // 0x534
	float PathTracingMaxPathExposure; // 0x538
	char PathTracingEnableDenoiser : 1; // 0x53c
	float LPVFadeRange; // 0x540
	float LPVDirectionalOcclusionFadeRange; // 0x544
	float ScreenPercentage; // 0x548
	FWeightedBlendables WeightedBlendables; // 0x550
};

struct FZeuzLobbyUserIn : FZeuzLobbyUserState {
	FString LobbyID; // 0x88
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FMissionTimeline {
	TArray<FTimelineEvent> EventsList; // 0x0
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FZeuzImageManagerPullInput {
	FString ImageHash; // 0x0
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
	char bIsCompileTagGenerator : 1; // 0x31
	char bHidden : 1; // 0x31
	int32_t ModuleUsageBitmask; // 0x34
	int32_t ContextStageMinIndex; // 0x38
	int32_t ContextStageMaxIndex; // 0x3c
	TMap<FName, FName> FunctionSpecifiers; // 0x40
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FCriminalRecord {
	FString Date; // 0x0
	FText Crime; // 0x10
	FString CriminalCode; // 0x28
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
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

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FAudioEQEffect : FAudioEffectParameters {
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

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FBPFriendPresenceInfo {
	bool bIsOnline; // 0x0
	bool bIsPlaying; // 0x1
	bool bIsPlayingThisGame; // 0x2
	bool bIsJoinable; // 0x3
	bool bHasVoiceSupport; // 0x4
	EBPOnlinePresenceState PresenceState; // 0x5
	FString StatusString; // 0x8
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
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

struct FEditableTextBoxStyle : FSlateWidgetStyle {
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

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EBlendListTransitionType TransitionType; // 0x30
	EAlphaBlendOption BlendType; // 0x31
	bool bResetChildOnActivation; // 0x32
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
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

struct FMissionPhoto {
	FText PhotoTitle; // 0x0
	TSoftObjectPtr<UTexture2D> Photo; // 0x18
	FText PhotoCaption; // 0x40
};

struct FDeviceData {
	FString Name; // 0x0
	UTexture2D* Image; // 0x10
	UTexture2D* CarouselImage1; // 0x18
	UTexture2D* CarouselImage2; // 0x20
	UTexture2D* CarouselImage3; // 0x28
	FText EffectiveRange; // 0x30
	FText Use; // 0x48
	FText Effects; // 0x60
	FText Risk; // 0x78
	FText ToMitigate; // 0x90
	EItemClass ItemClass; // 0xa8
	int32_t MaxInInventory; // 0xac
	TSoftClassPtr<UObject> Blueprint; // 0xb0
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FDynamicLevelDataPick {
	FName Label; // 0x0
	int32_t Chance; // 0x8
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionID; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FZeuzPortDef {
	FString Name; // 0x0
	int32_t Port; // 0x10
};

struct FHesitationGeneralData {
	FHesitationStartleSettings Startle; // 0x0
	FHesitationSurrenderedSettings Surrendered; // 0x10
	FHesitationOutcomeSettings Success; // 0x20
	FHesitationFailureSettings Failure; // 0x30
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
	FGuid VariableGuid; // 0xc8
	bool bIsStaticSwitch; // 0xd8
	int32_t StaticSwitchDefaultValue; // 0xdc
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
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

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FCoverDataMain {
	UAnimSequence* CoverIdlePose; // 0x0
	bool bHasVerticalExposure; // 0x8
	FCoverDirectionalTrans CoverEnterTrans; // 0x10
	FCoverDirectionalTrans CoverExitTrans; // 0x40
	UAnimMontage* SideSwitchTrans; // 0x70
	FCoverTrans AimingHTrans; // 0x78
	FCoverTrans BlindFireHTrans; // 0x88
	UAnimSequence* BlindFireHIdlePose; // 0x98
	UAnimSequence* AimingHIdlePose; // 0xa0
	FCoverTrans AimingVTrans; // 0xa8
	FCoverTrans BlindFireVTrans; // 0xb8
	UAnimSequence* BlindFireVIdlePose; // 0xc8
	UAnimSequence* AimingVIdlePose; // 0xd0
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FMovieScene2DTransformMask {
	uint32_t MASK; // 0x0
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FCoverProperties {
	ECoverPosition CoverPosition; // 0x0
	bool bBlindFiring; // 0x1
	bool bAimingOutOfCover; // 0x2
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FST_Style_Text {
	FLinearColor FontColor_11_A392AE454CEDE936EA30FF8489E8DC2A; // 0x0
	FSlateFontInfo Font_12_BBBACEBF467720A57D9D1B8E5B4F4F1F; // 0x10
	bool AllCaps_15_E71F58DA4404A57DD9247FB0DD53F93F; // 0x68
	int32_t LetterSpacing_19_9CD3B8A34DA218691C103FB5EED0CAFF; // 0x6c
	FWidgetTransform Transform_24_79567AF24CE539197341ADAD75D5EC3B; // 0x70
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

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FRoNGaitTransitionData {
	FString Start_Section; // 0x0
	UAnimSequence* Start; // 0x10
	UAnimSequence* Start_45_Left; // 0x18
	UAnimSequence* Start_45_Right; // 0x20
	UAnimSequence* Start_90_Left; // 0x28
	UAnimSequence* Start_90_Right; // 0x30
	UAnimSequence* Start_181; // 0x38
	UAnimSequence* Start_180_Left; // 0x40
	UAnimSequence* Start_180_Right; // 0x48
	UAnimSequence* Start_135_Left; // 0x50
	UAnimSequence* Start_135_Right; // 0x58
	FString Stop_Section; // 0x60
	UAnimSequence* Stop; // 0x70
	UAnimSequence* Stop_45_Left; // 0x78
	UAnimSequence* Stop_45_Right; // 0x80
	UAnimSequence* Stop_90_Left; // 0x88
	UAnimSequence* Stop_90_Right; // 0x90
	UAnimSequence* Stop_181; // 0x98
	UAnimSequence* Stop_180_Left; // 0xa0
	UAnimSequence* Stop_180_Right; // 0xa8
	UAnimSequence* Stop_135_Left; // 0xb0
	UAnimSequence* Stop_135_Right; // 0xb8
	FString Pivot_Section; // 0xc0
	UAnimSequence* Pivot; // 0xd0
	UAnimSequence* Pivot_45_Left; // 0xd8
	UAnimSequence* Pivot_45_Right; // 0xe0
	UAnimSequence* Pivot_90_Left; // 0xe8
	UAnimSequence* Pivot_90_Right; // 0xf0
	UAnimSequence* Pivot_181; // 0xf8
	UAnimSequence* Pivot_180_Left; // 0x100
	UAnimSequence* Pivot_180_Right; // 0x108
	UAnimSequence* Pivot_135_Left; // 0x110
	UAnimSequence* Pivot_135_Right; // 0x118
};

struct FZeuzServiceCfg {
	FString ServiceType; // 0x0
	int32_t MaxScale; // 0x10
	int32_t CurScale; // 0x14
	int32_t CloudScale; // 0x18
	int32_t Busy; // 0x1c
	int32_t Idle; // 0x20
	FString Params; // 0x28
};

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
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

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FSpeedRange {
	float Speed; // 0x0
	char bRandomSpeed : 1; // 0x4
	float MinSpeed; // 0x8
	float MaxSpeed; // 0xc
};

struct FVictoryInputAxis {
	FString AxisName; // 0x0
	FString KeyAsString; // 0x10
	FKey Key; // 0x20
	float Scale; // 0x38
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
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

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FZeuzAccountDeveloperPasswordResetExecuteRequestIn {
	FString EMail; // 0x0
	FString Hash; // 0x10
	FString PasswordHash; // 0x20
	FString PasswordConfirmHash; // 0x30
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x8
	int32_t NextState; // 0xc
	float CrossfadeDuration; // 0x10
	int32_t StartNotify; // 0x14
	int32_t EndNotify; // 0x18
	int32_t InterruptNotify; // 0x1c
	EAlphaBlendOption BlendMode; // 0x20
	UCurveFloat* CustomCurve; // 0x28
	UBlendProfile* BlendProfile; // 0x30
	ETransitionLogicType LogicType; // 0x38
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FMovieSceneDeterminismData {
	TArray<FFrameTime> Fences; // 0x0
	bool bParentSequenceRequiresLowerFence; // 0x10
	bool bParentSequenceRequiresUpperFence; // 0x11
};

struct FZeuzLobbyUsersOut {
	FZeuzLobbyStateOut Lobby; // 0x0
	TArray<FZeuzLobbyUserBase> Users; // 0x58
	FString ServerConnect; // 0x68
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FRepRootMotionMontage {
	bool bIsActive; // 0x0
	UAnimMontage* AnimMontage; // 0x8
	float Position; // 0x10
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

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FTimelineEvent {
	FText EventTitle; // 0x0
	FText EventTime; // 0x18
	FText EventDescription; // 0x30
	float EventTimestamp; // 0x48
	float EventDuration; // 0x4c
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

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
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

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FMusicTrackFMOD {
	UFMODEvent* PreplanningEvent; // 0x0
	UFMODEvent* LevelEvent; // 0x8
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FNVGPostProcessSettings {
	UTexture2D* DirtMaskTexture; // 0x0
	EDepthOfFieldMethod DepthOfFieldMethod; // 0x8
	float BloomIntensity; // 0xc
	float BloomThreshold; // 0x10
	EAutoExposureMethod AutoExposureMethod; // 0x14
	float BloomDirtMaskIntensity; // 0x18
	float DepthOfFieldFstop; // 0x1c
	float LensFlareIntensity; // 0x20
	float LensFlareBokehSize; // 0x24
	float AmbientOcclusionIntensity; // 0x28
	float IndirectLightingIntensity; // 0x2c
	float FilmSlope; // 0x30
	float FilmToe; // 0x34
};

struct FZeuzMachineResourceUpdateIn {
	FString ResourceID; // 0x0
	FZeuzMachineResourceDataIn Data; // 0x10
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FDeploymentStatus {
	FText Position; // 0x0
	EPlayerStatus Status; // 0x18
	AReadyOrNotPlayerState* PlayerState; // 0x20
};

struct FZeuzMatchMakingInit {
	FZeuzMatchmakingUser User; // 0x0
	FString Compatibility; // 0x50
	FString Region; // 0x60
	FZeuzVariant Params; // 0x70
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FMotionCandidate {
	int32_t PoseId; // 0x0
	int32_t NextPoseId; // 0x4
	int32_t LastPoseId; // 0x8
	int32_t SrcAnimIndex; // 0xc
	float StartTime; // 0x10
	int32_t AnimStartOffset; // 0x14
	TArray<FBonePoseData> MotionJointData; // 0x18
	FVector LocalVelocity; // 0x28
	TArray<FName> Tags; // 0x38
	FTrajectoryData AnimTrajectoryData; // 0x48
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FTableColumnHeaderStyle : FSlateWidgetStyle {
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

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
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

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FST_Style_Buttons {
	FButtonStyle ButtonStyle_6_BBBACEBF467720A57D9D1B8E5B4F4F1F; // 0x0
	FST_Style_Buttons_Fonts ButtonFontStyle_16_A0777E5A4EE2AFA1C5E16B84B437061B; // 0x278
	E_Style_Buttons ActiveButtonStyle_19_D1243A474270481757C35484BED22F09; // 0x4b8
};

struct FZeuzAccountDeveloperPasswordResetIn {
	FString EMail; // 0x0
	FString Token; // 0x10
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FVictoryInput {
	FString ActionName; // 0x0
	FKey Key; // 0x10
	FString KeyAsString; // 0x28
	char bShift : 1; // 0x38
	char bCtrl : 1; // 0x38
	char bAlt : 1; // 0x38
	char bCmd : 1; // 0x38
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FZeuzKVStoreKVEntry {
	int32_t ID; // 0x0
	FString Partition; // 0x8
	FString Key; // 0x18
	FString Value; // 0x28
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FSavedWeaponPreset {
	TArray<FWeaponPreset> Presets; // 0x0
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

struct FRecastGraphWrapper {
	ARecastNavMesh* RecastNavMeshActor; // 0x0
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

