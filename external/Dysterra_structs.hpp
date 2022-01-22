#pragma once

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FMovieSceneEnumPropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FClientSideProjectileData {
	int32_t Index; // 0x0
	FVector EndLocation; // 0x4
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FTagResourceRequestCloudWatch {
	FString ResourceARN; // 0x0
	TArray<FTagCloudWatch> Tags; // 0x10
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FAnimNode_BonesLookAt {
	FBoneReference BoneToModify; // 0xc8
	USkeletalMeshComponent* SelfSkeletal; // 0xd8
	TMap<FName, float> AffectBones; // 0xe0
	TArray<FBoneReference> BoneModifies; // 0x130
	FBoneSocketTarget LookAtTarget; // 0x140
	FVector LookAtLocation; // 0x1a0
	FAxis LookAt_Axis; // 0x1ac
	bool bUseLookUpAxis; // 0x1bc
	EInterpolationBlend InterpolationType; // 0x1bd
	FAxis LookUp_Axis; // 0x1c0
	float LookAtClamp; // 0x1d0
	float InterpolationTime; // 0x1d4
	float InterpolationTriggerThreashold; // 0x1d8
};

struct FDummySequenceBase {
	EDummySequenceState DummyState; // 0x0
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FDescribeExportTasksResult {
	TArray<FExportTask> ExportTasks; // 0x0
	FString NextToken; // 0x10
};

struct FAnimNode_DragonFabrikSolver {
	FBoneReference StartSplineBone; // 0xc8
	FBoneReference EndSplineBone; // 0xd8
	float Precision; // 0xe8
	float MaxIterations; // 0xec
	FTransform Target_Transform; // 0xf0
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FAnimNode_RotationMultiplier {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FS_FootStepDataSurfaceMap {
	TMap<EPhysicalSurface, FS_FootStepData> Jog_5_39A96E4240A3A64F0E37DE8C9A1945DF; // 0x0
	TMap<EPhysicalSurface, FS_FootStepData> Sprint_8_9369B0B144435B1CED70BB86D0928C02; // 0x50
	TMap<EPhysicalSurface, FS_FootStepData> Crouch_13_DF86942F4537C8CF86129EAD8E225001; // 0xa0
	TMap<EPhysicalSurface, FS_FootStepData> Jump_22_FFA028AC4BF6BDD0D8E85CAE4791D1F7; // 0xf0
	TMap<EPhysicalSurface, UMaterial*> FootprintMaterial_27_F7FCC2B54107386448270E8F7F149496; // 0x140
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

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FCustomizableObjectExportOptions {
	bool bTextureCompression; // 0x0
	FString TargetPlatform; // 0x8
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

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FAnomalyDetectorConfiguration {
	TArray<FRange> ExcludedTimeRanges; // 0x0
	FString MetricTimezone; // 0x10
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FAnimNode_BlendListByInt {
	int32_t ActiveChildIndex; // 0x98
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

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FS_FootStepData {
	TArray<USoundCue*> SoundList_3_3663C7284BC3B1CC032630BCA0372984; // 0x0
	TArray<UParticleSystem*> ParticleList_6_6AC5B16F4481527BA58B65B5DFD82A34; // 0x10
	USoundCue* JumpSound_13_4443BD644B48FE9AB3F4FE9EF7012565; // 0x20
	USoundCue* LandSound_12_A458D592433FD557C67737B924C672A0; // 0x28
	UParticleSystem* JumpParticle_16_EFBC44D74076D0FCC88D4D8FCF50B15B; // 0x30
	UParticleSystem* LandParticle_18_BD74A2FA40EE16B2B13C8995002D6B33; // 0x38
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FBranchingPoint {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FSQSListDeadLetterSourceQueuesResult {
	TArray<FString> QueueUrls; // 0x0
	FString NextToken; // 0x10
	FSQSResponseMetadata ResponseMetadata; // 0x20
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FChangeMessageVisibilityBatchResultEntry {
	FString ID; // 0x0
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FDisableInsightRulesRequest {
	TArray<FString> RuleNames; // 0x0
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

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FFoam_Generator {
	FLinearColor DirectionOfNormalsScroll_61_4D07E26B418E2200A6F8F8B3828E51EE; // 0x0
	float FoamGeneratorScroll_63_C9338C334DDA5868BD2EC9B6FC1E07EF; // 0x10
	float FoamIntensityScroll_62_1F0826E04FA290A077DE7C8B1081B5DC; // 0x14
	FLinearColor DirectionOfNormalsDDXDDY_60_349FBF6044E6E0752780FB97F7E5A6CD; // 0x18
	float FoamGeneratorDDXDDY_64_AE172943406B54FBA3455FB564595209; // 0x28
	float FoamIntensityDDXDDY_67_5CA2C94141DEFD94032060BFDE6EB72B; // 0x2c
	float MaskPower_71_84B433B84797C91A55296584D5E852BC; // 0x30
	float Mask_73_5272BD3F497A2258FD58ED9D9554DDBE; // 0x34
	float Variant_75_C2A04B424CCCB8D2F22F4D96D16F53C8; // 0x38
	float TimeMask_77_83196AA846FB16C657E610A2657F5433; // 0x3c
	UTexture2D* Foam_80_FD2567B14E84C80B9839189F5AC7A7E0; // 0x40
	float MeasureHeightFoam_87_DEDAFD794E376A5784EA5EA289BFAE8C; // 0x48
	float InvestedFoam_88_3C14234147CB274902FA10BB86DEA00E; // 0x4c
	float SeaFoam_91_F1060C564572B4F2F8927DB48F4826D9; // 0x50
	FLinearColor FoamScattering_94_3C4CC6D84205ACD37BBB7BA6F06F59EE; // 0x54
	float UVTile_97_F23671B4437E809F10CF93AFE1C10C9F; // 0x64
};

struct FAnimNode_ObserveBone {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
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

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
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

struct FChaosCollisionEventData {
	FVector Location; // 0x0
	FVector Normal; // 0xc
	FVector Velocity1; // 0x18
	FVector Velocity2; // 0x24
	float Mass1; // 0x30
	float Mass2; // 0x34
	FVector Impulse; // 0x38
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

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
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

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
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

struct FMovieSceneCameraAnimSectionTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FItemCodeValueArray {
	TArray<FItemCodeValue> ItemList; // 0x8
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FBP_Struct_CharacterHitCapsule {
	float HitTime_29_4D24C21F4E11AD0D66514A9AD955CC03; // 0x0
	FVector Location_27_3EA05C5240DD0AC97E7359813222A549; // 0x4
	float CapsuleRadius_14_E8E291DA43EC2DD9C98503A713A58CFF; // 0x10
	float CapsuleHalfHeight_16_1568F1CC4124A92123FA728B2E9925E5; // 0x14
};

struct FListMetricsResult {
	TArray<FMetric> Metrics; // 0x0
	FString NextToken; // 0x10
	FResponseMetadata ResponseMetadata; // 0x20
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FMovieSceneIntegerChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
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

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FTransformConstraintDescription {
	ETransformConstraintType TransformType; // 0x10
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FS_TutorialData {
	FText TutorialTitle_23_328C6EBA4202436D45F470B30C9C5F8D; // 0x0
	UTexture2D* TutorialIcon_26_68F32BF84FC7A0F2BEC8D08A9B06EF52; // 0x18
	TArray<FS_TutorialGoalData> TutorialGoal_30_5C6EDADD4C914BA4E6CE2DA7AA3B4667; // 0x20
	FName StartDialog_18_CC92688A47BC13AAD5C8C1B671FAFAE6; // 0x30
	TArray<FArchiveItemInfo> SupplyItem_34_8167805F4BDB4738C023F685E5912F15; // 0x38
	TArray<FS_TutorialShowingRadiogram> ReplicaRadiogram_38_BA23084542C81CE003AD77807408790E; // 0x48
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
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

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FSQSDeleteMessageRequest {
	FString QueueUrl; // 0x0
	FString ReceiptHandle; // 0x10
};

struct FS_ConvertData {
	FName Name_50_F65463494967F20A32554A835515CEF2; // 0x0
	TMap<E_ConvertType, FConvertItem> Type_54_C33864BB425E76FE4A3F48947A506DA3; // 0x8
};

struct FMovieSceneWidgetMaterialSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FAnimNode_CopyPoseFromMesh {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
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

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FSteamUGCQueryHandle {
	FUInt64 handle; // 0x0
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FListDashboardsRequest {
	FString DashboardNamePrefix; // 0x0
	FString NextToken; // 0x10
};

struct FS_WeaponRecoil {
	float RandomYawMin_27_1BC6DFFA403A0D5CA2AA388B351A820F; // 0x0
	float RandomYawMax_28_9411A1244A650D8DDD1471B5D5D11689; // 0x4
	float RandomPitchMin_29_33C12C0B409C825E8E446CA8D11590EA; // 0x8
	float RandomPitchMax_30_27DF23974D1A662E52091BB6720DDE2F; // 0xc
	UCurveVector* RecoilCurve_14_539E3A874643670835C868958A315ED0; // 0x10
	UCurveFloat* RecoilForceCurve_20_C6C2E10142F774FCBB16F7A4345B061F; // 0x18
	float CoolDownRate_21_AE733F4042FA58F6FD8072B7077F37EE; // 0x20
	bool NeedRecoil_38_88B5483943C7F2B6FA9D7DB1E741C964; // 0x24
	UCurveFloat* RecoveryForceCurve_36_03A1968D45EDC59AE929D298A95545CB; // 0x28
	float RecoveryForce_25_EA8C02ED40F5E405E62277A6FF1EFA7A; // 0x30
	float RecoveryCooltime_33_FAA04CAE45FBB9338ADBDC929F12DDD7; // 0x34
};

struct FCompositeSubFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FDeleteDashboardsResult {
	FResponseMetadata ResponseMetadata; // 0x0
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FProfileParameterDat {
	FString ProfileName; // 0x0
	TArray<FCustomizableObjectBoolParameterValue> BoolParameters; // 0x10
	TArray<FCustomizableObjectIntParameterValue> IntParameters; // 0x20
	TArray<FCustomizableObjectFloatParameterValue> FloatParameters; // 0x30
	TArray<FCustomizableObjectTextureParameterValue> TextureParameters; // 0x40
	TArray<FCustomizableObjectVectorParameterValue> VectorParameters; // 0x50
	TArray<FCustomizableObjectProjectorParameterValue> ProjectorParameters; // 0x60
};

struct FDescribeLogGroupsResult {
	TArray<FLogGroup> LogGroups; // 0x0
	FString NextToken; // 0x10
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FNPCSpec {
	ASurvivalAICharacterBase* CharacterClass; // 0x8
	FText Name; // 0x10
	float MaxHealth; // 0x28
	float TimeAfterDeath; // 0x2c
	bool UseCorpseFarmingDialog; // 0x30
	TArray<FItemCodeValue> RandomDropItemTables; // 0x38
	UBehaviorTree* BehaviorTree; // 0x48
	TArray<FNPCMeleeAttackInfo> MeleeAttackType; // 0x50
	TArray<FNPCRangeAttackInfo> RangeAttackType; // 0x60
	TArray<UAnimMontage*> HitAnimations; // 0x70
	TMap<FName, float> MultiplyDamageByBone; // 0x80
	float DamageMultiplyStartCriticalAnimation; // 0xd0
	TMap<UDamageType*, float> ResistanceByType; // 0xd8
	FNPCWeaponInfo WeaponInfo; // 0x128
	FNPCShieldInfo ShieldInfo; // 0x138
	float StunCoolTime; // 0x178
	float StunDuration; // 0x17c
	float HitForce; // 0x180
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

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
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

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FS_Dialogue {
	FSlateBrush Portrait_3_D34F99BD488E870B5EFBD18662BB207F; // 0x0
	FText Dialogue_7_25B4F45B4F0256876E71629CD93294D7; // 0x88
	float AppearTime_10_165950C44EC8FEE0D09CC1BE4E85D310; // 0xa0
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

struct FUntagResourceResult {
	FResponseMetadata ResponseMetadata; // 0x0
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FS_FieldNPCInfo {
	TMap<FName, FS_FieldNPC_OneSpawnInfoArray> SpawnInfo_18_1235B50E4F1FBEF8100B248FD6299283; // 0x0
	float PlayerCheckDistanceOffset_13_A98DF85C409E3B42E3E45CB305608E78; // 0x50
	FName PatrolAreaComponentTag_12_287EF74746D0DE9BB7FF5EA2F651DF6C; // 0x54
	float NPCRespawnDelaySecAfterKilled_22_2201A82B42AC97CA00EA0A8C8B31EF78; // 0x5c
	TArray<UObject*> SpawnBottomClasses_27_1826CD034C20231620E73F90515B05A3; // 0x60
	FName SpawnBottomTag_30_1AC28C124230DBCED395C391DA9A800B; // 0x70
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FDatasmithRetessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
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

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FAnimNode_LegIK {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
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

struct FPrecomputedSkyLightInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FS_BuildPartInfo {
	FText Name_200_17328985467CE1655527AFAD4498AA29; // 0x0
	UTexture2D* Icon_123_FE3E66B04EB50C76F52B9A897E43A5D5; // 0x18
	FText Description_169_261663CF417D93614DA936920B60101B; // 0x20
	int32_t Health_61_90968A724E63E582E36A3BB8A7464581; // 0x38
	bool TakeDamage_91_7B9FB8BB47D8DD56D64D1CAA75476A61; // 0x3c
	bool RotationEnabled_29_15ACBF1945857C0B2BC47A864BC65115; // 0x3d
	float RotationIncrements_77_A6AC2550417D71D92CB3FD87FD3754AD; // 0x40
	FDataTableRowHandle UpgradeBuildPart_79_27B2F48B4235E15DD3ED31BEE4BFDC59; // 0x48
	TArray<FItemCodeValue> RepairItem_217_F0F40EDB45929CC12C5244A30E55E235; // 0x58
	ABP_BuildPartBase_C* BlueprintClass_163_639ED7414D4AB512F1BECCB9B7E57B93; // 0x68
	TArray<UStaticMesh*> StaticMesh_124_B4724319453E69FBB292B388EEDCA228; // 0x70
	TArray<UDestructibleMesh*> DestructibleMesh_125_4F8797AA4A13A416AB00A38BF749C987; // 0x80
	TArray<FItemCodeValue> BuildingCost_218_D2F4F28D40A1B7DC445C8EBEF524C71F; // 0x90
	float PlacementAngle>_103_FEA8A07A4E7145BBF410F897F49E643E; // 0xa0
	float PlacementAngle<_106_D456798E461898D3D3B8BDBB1C728FBF; // 0xa4
	bool RequireNameInput_108_7FBC1FA44FADED739B01088470D638CC; // 0xa8
	bool bUseDecaySystem_128_448A466C417063A39700A89D1C66C6E5; // 0xa9
	float EnergyValueForDecayPreventPerTime_135_48DAF7A74E0FBE9D31D091922AD6FA3A; // 0xac
	float FirstDecayProtectTime_133_BB843EB24C86E75869B972B040090CD6; // 0xb0
	float DecayDamage_139_8C8CEFD04CE2EBF94CB0ABAB356909B9; // 0xb4
	float DecayInterval_166_F16F198E43FD61B24D53D6ABC745480A; // 0xb8
	bool bBuildSystemVisible_148_00A5AA984F32E0327BE8DAB2EA64F298; // 0xbc
	int32_t SortOrder_151_7DB3ADA84A1DED12A294598CD2D70430; // 0xc0
	bool ConsiderSlopeDegree_154_61A800E743B3D12D1C3DFAA6121335C4; // 0xc4
	float DefaultPreivewDistance_157_CA02023E4754456DE1AEE89A23A5B622; // 0xc8
	TArray<EBuildLayoutType> BuildLayoutList_161_70B2C1784C8FBE5E4035CF9003D8B734; // 0xd0
	bool bCanPickup_168_494F7D4D4537E153B18AEF8C85B37A61; // 0xe0
	bool bAddToOwner_172_913D06AB4B508FB1A75613A667C3CF94; // 0xe1
	TSoftObjectPtr<UAkSwitchValue> ConstructionSound_206_D64E44B640789E0F51E19AB171D607CD; // 0xe8
	TSoftObjectPtr<UAkSwitchValue> DestroySound_208_B971203D4C4EC94CA304D58CDEA43356; // 0x110
	TSoftObjectPtr<UAkSwitchValue> RepairSound_209_E2D6EE4D4EA59902D04EF7A9137BC3FA; // 0x138
	TSoftObjectPtr<UAkSwitchValue> UpgradeSound_210_1E6AB2BD4CB6C3FF3BE2D6B5FFA9A442; // 0x160
	bool bAllowRepair_190_4BFC5B934CCFAFE995F3EE87EE7C1A05; // 0x188
	bool bIsDependencyJointBuild_193_8C5940BC40F6EE8D761FB48A51F30200; // 0x189
	TArray<FIntPair> UpgradeConditionByUnlockedRadiogram_219_086F1B504DF9C9ED8B4A0B94589DA81C; // 0x190
	bool bIgnoreTerracoreAuth_202_AED4C63040D26CA3F491BA9750477D84; // 0x1a0
	bool ReverseEnabled_204_B9238EDF4223194E4DB9A0B49FE76028; // 0x1a1
	float RepairCooltime_213_3C66F7F34E20CA1F0C99F6A7745658B7; // 0x1a4
	float RepairAmount_216_F0E9D39D4C142D9A6E89D7BB72416A1E; // 0x1a8
	TMap<UMasterDamageType_C*, float> ReduceDamageMultiplierByDamageType_224_83349BA44FC1764CD89C858B044C6816; // 0x1b0
};

struct FGeneratedMaterial {
	TArray<FGeneratedTexture> Textures; // 0x0
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FAddRemoveItemDependencyResult {
	FSteamUGCItemId dependendItemId; // 0x10
	bool bAddDependency; // 0x18
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

struct FMovieSceneAkAudioEventTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FS_RangeWeaponInfo {
	FDamageStruct ProjectileDamageStruct_109_DC2718EC491AFE06FD7A08B9090646D1; // 0x0
	int32_t AmmoMax_100_28617DFC48E434B2F2B8CEA44AD62EDA; // 0x38
	FDataTableRowHandle AmmoItem_90_248511AF41B8DB19FBA390ABF28F08DA; // 0x40
	float ReloadTime_8_D2BB5CA64DBB1A930EF663BEB4450F62; // 0x50
	FS_WeaponRecoil PerShotRecoil_82_D0D32E9247786DBD734A68A8DCBC2D1D; // 0x58
	FS_WeaponRecoil ZoomPerShotRecoil_86_C9FA07DD4D303AC44A7B3DAA209F87D8; // 0x90
	FS_WeaponRecoil CrouchPerShotRecoil_87_7798A6164C17154C90448498D8AE39C6; // 0xc8
	int32_t MultiShotCount_101_C46F6A704EB71D6ADBC89BBBB4F99653; // 0x100
	TSet<EFireMode> FireMode_46_ED9AB46847F0D037BE6577876C378B37; // 0x108
	int32_t BurstFireCount_54_7A849B0649D5D33E9F76C48471B2ADDF; // 0x158
	float BurstFireDelay_53_19665AB14E99118FF02D819FB4F5447F; // 0x15c
	float Cooltime_58_1E5C7E8349BF98D73E42588A2F6FFD2E; // 0x160
	float BurstCoolTime_108_6F30B6DF4523804CD72FA9B81124D49B; // 0x164
	TMap<EPlayerMoveState, float> MovementSpeed_63_8E72061B409598EBD388658E79DE5760; // 0x168
	TMap<EPlayerMoveState, float> MinSpread_67_51C87652404EF49975F30AB7266868AE; // 0x1b8
	TMap<EPlayerMoveState, float> MaxSpread_69_B1DCE588497EDCE3F4491B8DFEFA0260; // 0x208
	float SpreadIncreasePerShot_94_37A3CCB144EAA2FC480FE0A315067129; // 0x258
	float SpreadReductionRate_99_3A0CCB9B4569E9D1092C84B9AABD4BF1; // 0x25c
	float AgainReduceSpreadTime_98_6003B9724437FCEAC0684EA998F9B9CB; // 0x260
	float ADSFOV_73_B560DB8A441BBC80A26374BE3226930C; // 0x264
	float ADSSpeed_75_0D88FBDF43BFACD5A752CF9E61B4B199; // 0x268
	UCurveFloat* DropRateCurve_79_DFBAA1B74398511177B8009FFE3B6E1E; // 0x270
	UCurveFloat* MultifleDamageCurve_81_1B4068F04BDEBBC1DDBB45A2CA92A4DC; // 0x278
	TArray<EAttachmentType> AvailableAttachments_115_1A2A47014425694300B196867D381EDE; // 0x280
	EFireMode DefaultFireMode_118_FC071F4F4DAECB0CC2E86293DF72B0F8; // 0x290
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FUserTerraPointInfo {
	float DailyRecvTime; // 0x0
	int32_t TerraPoint; // 0x4
	TArray<FTerraShopMerchandise> DailyMerchandise; // 0x8
	TArray<FTerraShopMerchandise> SessionMerchandise; // 0x18
};

struct FLiveLinkAnimationFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FMailData {
	FText Sender; // 0x0
	FString SenderUID; // 0x18
	FString RecieverUID; // 0x28
	FText title; // 0x38
	FText Contents; // 0x50
	float MailSendTime; // 0x68
	float MailArriveTime; // 0x6c
	float MailValidityTime; // 0x70
	bool bRead; // 0x74
	TArray<FArchiveItemInfo> ItemList; // 0x78
};

struct FKey {
	FName KeyName; // 0x0
};

struct FS_FistAttachmentTraceInfo {
	float Distance_2_C1FEFBFD46525AF680279ABA0A685745; // 0x0
	float Range_4_C40900AA49B11D30DACEC8A66787BFEC; // 0x4
};

struct FSQSListQueueTagsRequest {
	FString QueueUrl; // 0x0
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FPBUF_sv_NameRes {
	FString Name; // 0x0
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FS_RadiogramInfo {
	FText RadioGramGroupName_2_B0CA6B10461FFF5896B885960D16AAA5; // 0x0
	FText FromText_17_0551E65A41C5A2D922B88F8D75528403; // 0x18
	E_RadiogramHologramType HologramType_7_B9BD799F475F61CBF0BEA0B648F5CF13; // 0x30
	TArray<FS_RadiogramGuide> ObjectiveList_24_9BDFABDA4E3CDDE8C2F152AC4DCD753F; // 0x38
	FLinearColor GroupColor_23_928D950D474DFB486C89578CC61925AB; // 0x48
	bool PreOpen_26_B2BFEC784F2518F1C27A10A1BC491D23; // 0x58
	bool ShowObjective_28_FE122434479EA44D881C6FA6EA35F5E8; // 0x59
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FPBUF_sv_Location {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FDimensionFilter {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FDeleteLogGroupRequest {
	FString LogGroupName; // 0x0
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FS_ResourceBoxInfo {
	FString ItemGenerate_2_85B3FCD444BD73CE71A447AB8E12236E; // 0x0
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FScrollBoxStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FAkXboxOneAdvancedInitializationSettings {
	uint16_t MaximumNumberOfXMAVoices; // 0x30
	bool UseHardwareCodecLowLatencyMode; // 0x32
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FMutableModelImageProperties {
	FString TextureParameterName; // 0x0
	TextureFilter Filter; // 0x10
	char SRGB : 1; // 0x14
	int32_t LODBias; // 0x18
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FMovieSceneStringPropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FLandmassTerrainCarvingSettings {
	EBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FLandmassFalloffSettings FalloffSettings; // 0x4
	FLandmassBrushEffectsList Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t numChildren; // 0x8
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FS_FieldNPC_OneSpawnInfoArray {
	TArray<FS_FieldNPC_OneSpawnInfo> NPCInfos_3_4E7CC564419C840C7ABB1CA892B0AA93; // 0x0
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FAnimNode_TransitionPoseEvaluator {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FCollectionVectorParameter {
	FLinearColor DefaultValue; // 0x18
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

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FTeamVoiceInfo {
	ASurvivalPlayerState* Member_PS; // 0x0
	FString Member_ID; // 0x8
	float Volume; // 0x18
	bool bIsMute; // 0x1c
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FRMRemoteStructBase {
	FString Command; // 0x0
};

struct FStopQueryResult {
	bool bSuccess; // 0x0
};

struct FRMRemoteStructError {
	int32_t ResponseCode; // 0x0
	FString Error; // 0x8
};

struct FDragonData_FootData {
	FName Feet_Bone_Name; // 0x0
	FName Knee_Bone_Name; // 0x8
	FName Thigh_Bone_Name; // 0x10
	FRotator Feet_Rotation_Offset; // 0x18
	bool Fixed_Pole; // 0x24
	FVector Knee_Direction_Offset; // 0x28
	FVector Feet_Trace_Offset; // 0x34
	float Front_Trace_Point_Spacing; // 0x40
	float Side_Traces_Spacing; // 0x44
	float Feet_Rotation_Limit; // 0x48
	bool Fixed_Foot_Height; // 0x4c
	float Feet_Heights; // 0x50
	float Feet_Alpha; // 0x54
	float Min_Feet_Extension; // 0x58
	float Max_Feet_Extension; // 0x5c
	TArray<FDragonData_FingerData> Finger_Array; // 0x68
};

struct FSteamUGCQueryParameterUser {
	FString filenameFilter; // 0x50
	EUserUGCListBP list; // 0x60
	EUGCMatchingUGCTypeBP Type; // 0x61
	EUserUGCListSortOrderBP sortOrder; // 0x62
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FListDashboardsResult {
	TArray<FDashboardEntry> DashboardEntries; // 0x0
	FString NextToken; // 0x10
	FResponseMetadata ResponseMetadata; // 0x20
};

struct FAnimNode_ModifyCurve {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FAnimNode_MultiWayBlend {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
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

struct FRichCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FLightmassDirectionalLightSettings {
	float LightSourceAngle; // 0xc
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FGlobal_Displacement {
	float SIZEM_15_AC647E804AD8FF66DC479DBEE451B83D; // 0x0
	float OverallLength_16_312D7DB140157D72C96AFF8CF5729D66; // 0x4
	float GlobalAmplitude_17_D915AA5E48130D8B0506EFA66AF77424; // 0x8
	float GlobalSpeed_18_E256D8704B7E9B43D81E2D87CBD65755; // 0xc
	float Choppiness_19_527457804880B58848E3D984BC092996; // 0x10
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
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

struct FDummySequenceAction {
	int32_t UID; // 0x4
	EDummySequenceAction Action; // 0x8
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FMetricStat {
	FMetric Metric; // 0x0
	int32_t Period; // 0x30
	FString Stat; // 0x38
	EStandardUnit Unit; // 0x48
};

struct FS_VehicleRepairInfo {
	float VehiclePartItemConsumptionPercent_20_04D0917C44FD9EBDC20DA7BC1452009A; // 0x0
	float VehiclePartMinReduceConditionPercent_13_76DB8975405BC5E3543889BDF7810345; // 0x4
	float VehiclePartMaxReduceConditionPercent_14_3C83B1004839F2F8F9273CAC54383115; // 0x8
	FItemCodeValueArray VehiclePartRepairItem_15_C50AC3A14C7F8F1479CD138EBF44802A; // 0x10
};

struct FS_PlayerSpawnPointInfo {
	FTransform SpawnTransform_3_D3DE3B924C150301F8B2F2A904F5CAA5; // 0x0
	FTransform PODSpawnTransform_5_400BF54A4A1A4D2EA4765581CFF2BF11; // 0x30
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FAkAcousticTextureParams {
	FVector4 AbsorptionValues; // 0x0
};

struct FS_EquipmentSlot {
	E_EquipmentCategorys SlotType_2_2D0D817E40287E50E38EE7B14ECDE95C; // 0x0
	FItemInventory EquiptedItem_10_6D9EFF3D4DB598081D034888A775F948; // 0x8
};

struct FS_ItemFloat {
	FDataTableRowHandle Item_7_F0DD473447A366DBB3231CACF3526C7E; // 0x0
	float float_9_863C23A54882FB51047F118EF91DCB8D; // 0x10
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FAnimNode_SequencePlayer {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
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

struct FMovieSceneObjectPropertyTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FStartQueryResult {
	FString QueryID; // 0x0
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FGetLogRecordResult {
	TMap<FString, FString> LogRecord; // 0x0
};

struct FWeaponHitSetting {
	UPhysicalMaterial* PhysMaterial; // 0x0
	UParticleSystem* HitFx; // 0x8
	AHitHapticEffectBase* HitHapticEffectClass; // 0x10
	USoundBase* HitSound; // 0x18
	UMaterialInterface* DecalMaterial; // 0x20
	float DecalSize; // 0x28
	float DecalLifeSpan; // 0x2c
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

struct FSynth2DSliderStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
};

struct FAnimNode_DragonAimSolver {
	FBoneReference EndSplineBone; // 0xc8
	FBoneReference StartSplineBone; // 0xd8
	FTransform LookAtLocation; // 0xf0
	FDragonData_MultiInput dragon_input_data; // 0x120
	TArray<FDragonData_ArmsData> Aiming_Hand_Limbs; // 0x1c8
	FDragonData_Overrided_Location_Data Arm_TargetLocation_Overrides; // 0x1d8
	bool Use_Separate_Targets; // 0x1e8
	bool Override_Hand_Rotation; // 0x1e9
	bool reach_instead; // 0x1ea
	bool Aggregate_Hand_Body; // 0x1eb
	int32_t Main_Arm_Index; // 0x1ec
	float Lookat_Radius; // 0x280
	float Lookat_Clamp; // 0x284
	float Limbs_Clamp; // 0x288
	float Downward_Dip_Multiplier; // 0x28c
	float Side_Move_Multiplier; // 0x290
	float Side_Down_Multiplier; // 0x294
	float Up_Rot_Clamp; // 0x298
	FVector2D Verticle_Range_Angles; // 0x29c
	FVector2D Horizontal_Range_Angles; // 0x2a4
	FRuntimeFloatCurve Look_Bending_Curve; // 0x2b0
	FRuntimeFloatCurve Look_Multiplier_Curve; // 0x338
	bool Lock_Legs; // 0x3c0
	bool ignore_elbow_modification; // 0x3c1
	bool ignore_separate_hand_solving; // 0x3c2
	bool Use_Natural_Method; // 0x3c3
	bool Head_Use_Separate_Clamp; // 0x3c4
	bool automatic_leg_make; // 0x3c5
	bool enable_solver; // 0x3c7
	bool Work_Outside_PIE; // 0x3c8
	EInterpoLocation_Type_Plugin loc_interp_type; // 0x3c9
	float Interpolation_Speed; // 0x3cc
	float Toggle_Interpolation_Speed; // 0x3d0
	FVector LookAt_Axis; // 0x428
	FVector TargetOffset; // 0x470
	FTransform Debug_LookAtLocation; // 0x500
};

struct FSKeyConflict {
	UBP_KeyCombination_C* ConflictingCombination_12_3DB110B5406338347E3A6897032E00F8; // 0x0
	EKeyConflict ConflictType_7_4EB561DE4E1187B4D868FAB6B58BCAE3; // 0x8
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FPutDashboardRequest {
	FString DashboardName; // 0x0
	FString DashboardBody; // 0x10
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FMailDataArray {
	TArray<FMailData> MailDataArray; // 0x0
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FNiagaraScriptExecutionParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FInputAxisStruct {
	FString AxisName; // 0x0
	FString KeyAsString; // 0x10
	FKey Key; // 0x20
	float Scale; // 0x38
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FItemPreviewDetails {
	FString urlOrVideoId; // 0x0
	FString originalFileName; // 0x10
	EItemPreviewTypeBP itemType; // 0x20
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FRootMotionSource_MoveToDynamicForce {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FSupplyDropInfo {
	FVector StartLocation; // 0x0
	FVector DropLocation; // 0xc
	float DropTime; // 0x18
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
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

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FS_BuildSpawingMaterialData {
	FString ObjectName_2_8C374AC64F1F3504882515A8D1C3A767; // 0x0
	TArray<UMaterialInstance*> Materials_8_C55EE82C4894DB5BC37483AD349794F2; // 0x10
	float PlayTime_13_73C3A7F5475B4FC3654195971A7CFF89; // 0x20
	UCurveFloat* AmountCurve_16_314A5A72476A2D149C3D008707554413; // 0x28
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

struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FDashboardEntry {
	FString DashboardName; // 0x0
	FString DashboardArn; // 0x10
	FDateTime LastModified; // 0x20
	float Size; // 0x28
};

struct FMagicLeapTouchpadGesture {
	EControllerHand hand; // 0x0
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

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FDistance_Field {
	float ModifiedHeight_39_AC647E804AD8FF66DC479DBEE451B83D; // 0x0
	float MeasureHeight_40_312D7DB140157D72C96AFF8CF5729D66; // 0x4
	float Invested_41_D915AA5E48130D8B0506EFA66AF77424; // 0x8
	float WaveTime_44_4D07E26B418E2200A6F8F8B3828E51EE; // 0xc
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
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

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FGetUserVoteOnWorkshopItemResult {
	EVoteType userVoteType; // 0x10
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
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

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FGeneratedTexture {
	int32_t ID; // 0x0
	FString Name; // 0x8
	UTexture2D* Texture; // 0x18
};

struct FBatchResultErrorEntry {
	FString ID; // 0x0
	bool bSenderFault; // 0x10
	FString Code; // 0x18
	FString Message; // 0x28
};

struct FGetLogEventsResult {
	TArray<FOutputLogEvent> Events; // 0x0
	FString NextForwardToken; // 0x10
	FString NextBackwardToken; // 0x20
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

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FAkHololensAdvancedInitializationSettings {
	bool UseHeadMountedDisplayAudioDevice; // 0x30
};

struct FJoiningTeamInfo {
	ASurvivalPlayerState* Applicant_PS; // 0x0
	FString JoiningTeam_ID; // 0x8
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
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

struct FS_ConditionParam {
	TArray<AActor*> ActorClassParam_11_4FB02E8B4D1AAC67D233D0B5F73992A0; // 0x0
	TArray<int32_t> IntParam_12_416B48EF46D072253CDC2D9FBD7D2E5F; // 0x10
	TArray<float> FloatParam_13_2522662E44714ED4C246909B749C15D2; // 0x20
	TArray<bool> BoolParam_14_F9B560B548ED0C387A4CCAA929988730; // 0x30
	TArray<FString> StringParam_15_C82B245944B676C6DBE18098D18B1068; // 0x40
	TArray<UAnimMontage*> AnimParam_19_5371009E40D92D4B707ED194FBB49156; // 0x50
	TArray<FVector> VectorParam_23_A4416A944F08E7F1C14523B854B47385; // 0x60
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FLoadingWidgetSettings {
	ELoadingIconType LoadingIconType; // 0x0
	ELoadingWidgetType LoadingWidgetType; // 0x1
	FVector2D TransformTranslation; // 0x4
	FVector2D TransformScale; // 0xc
	FVector2D TransformPivot; // 0x14
	FText LoadingText; // 0x20
	bool bLoadingTextRightPosition; // 0x38
	bool bLoadingTextTopPosition; // 0x39
	FTextAppearance Appearance; // 0x40
	FThrobberSettings ThrobberSettings; // 0xe0
	FCircularThrobberSettings CircularThrobberSettings; // 0x170
	FImageSequenceSettings ImageSequenceSettings; // 0x208
	FWidgetAlignment TextAlignment; // 0x228
	FWidgetAlignment LoadingIconAlignment; // 0x22a
	float Space; // 0x22c
	bool bHideLoadingWidgetWhenCompletes; // 0x230
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
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

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	float AnimStartOffset; // 0x10
	float AnimEndOffset; // 0x14
	float AnimPlayRate; // 0x18
	char bLooping : 1; // 0x1c
	char bReverse : 1; // 0x1c
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

struct FDescribeLogGroupsRequest {
	FString LogGroupNamePrefix; // 0x0
	FString NextToken; // 0x10
	int32_t Limit; // 0x20
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FPutDashboardResult {
	TArray<FDashboardValidationMessage> DashboardValidationMessages; // 0x0
	FResponseMetadata ResponseMetadata; // 0x10
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FBaseOffset {
	float  mplitude_Σ_8_AC647E804AD8FF66DC479DBEE451B83; // 0x0
	float  teepness_Σ_4_312D7DB140157D72C96AFF8CF5729D6; // 0x4
	float  peed_Σ_6_D915AA5E48130D8B0506EFA66AF7742; // 0x8
	float  avelength_Σ_2_E256D8704B7E9B43D81E2D87CBD6575; // 0xc
	float  irection_Σ_10_527457804880B58848E3D984BC09299; // 0x10
	float  irection_Offset_Σ_12_613597B0430EAC9C51B086ACB9E783B; // 0x14
	float  irection_Offset_Σ2_14_ABE7C3F84BAF097CD7A607A660323B3; // 0x18
};

struct FS_SaveWeaponInvs {
	int32_t Index_7_3101E7784A015FF148022B8E5D3C56FF; // 0x0
	int32_t Ammo_8_446265654D491697A53F1B88C44FE418; // 0x4
	TArray<FAttachmentSlot> AttachmentsIDS_18_73AD89B4445A9723BF0744ACC232C5CA; // 0x8
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
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

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
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

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FSteamUGCQueryParameterDetails {
	FSteamUGCQueryParameterTagsAllUserDetails tagParameter; // 0x18
	TArray<FSteamUGCItemId> workshopItemIds; // 0x28
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FDescribeQueryDefinitionsRequest {
	FString QueryDefinitionNamePrefix; // 0x0
	int32_t MaxResults; // 0x10
	FString NextToken; // 0x18
};

struct FUntagResourceRequestCloudWatch {
	FString ResourceARN; // 0x0
	TArray<FString> TagKeys; // 0x10
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
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

struct FCharacterDamageSetting {
	float MinDamage; // 0x0
	USoundBase* DamageSound; // 0x8
};

struct FGatherLogCachedData {
	TMap<int32_t, int32_t> ObtainItem; // 0x0
	FString UserNickname; // 0x50
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FDeleteAnomalyDetectorResult {
	FResponseMetadata ResponseMetadata; // 0x0
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

struct FMovieSceneEventSectionTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FRichTextStyleRow {
	FTextBlockStyle TextStyle; // 0x8
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

struct FS_IndicatorInfos {
	TMap<UBP_WidgetIndicatorComponent_C*, bool> Indicators_15_D4B17CCA47D9A445F669F78E84989D2F; // 0x0
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FMutableModelParameterValue {
	FString Name; // 0x0
	int32_t Value; // 0x10
};

struct FDeleteInsightRulesRequest {
	TArray<FString> RuleNames; // 0x0
};

struct FUInt64 {
	uint64_t Value; // 0x0
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
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

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
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

struct FDedicateServerTerminate {
	FString reason; // 0x0
	FString SenderIP; // 0x10
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FAnimNode_RandomPlayer {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FAnimNode_BlendListByBool {
	bool bActiveValue; // 0x98
};

struct FDescribeAlarmsForMetricRequest {
	FString MetricName; // 0x0
	FString Namespace; // 0x10
	EStatistic Statistic; // 0x20
	FString ExtendedStatistic; // 0x28
	TArray<FDimension> Dimensions; // 0x38
	int32_t Period; // 0x48
	EStandardUnit Unit; // 0x4c
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
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

struct FMetricFilter {
	FString FilterName; // 0x0
	FString FilterPattern; // 0x10
	TArray<FMetricTransformation> MetricTransformations; // 0x20
	FString CreationTime; // 0x30
	FString LogGroupName; // 0x40
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FCenterLayoutSettings {
	bool bIsTipAtBottom; // 0x0
	FWidgetAlignment TipAlignment; // 0x1
	EHorizontalAlignment BorderHorizontalAlignment; // 0x3
	float BorderVerticalOffset; // 0x4
	FMargin BorderPadding; // 0x8
	FSlateBrush BorderBackground; // 0x18
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

struct FMetricFilterMatchRecord {
	FString EventNumber; // 0x0
	FString EventMessage; // 0x10
	TMap<FString, FString> ExtractedValues; // 0x20
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
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

struct FAnimNode_UseCachedPose {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
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

struct FS_RefineOffset {
	int32_t ExclusiveMin_16_A773F548404649A95CF58FA3F50C1BBF; // 0x0
	int32_t InclusiveMax_15_14E81C254F4F6CA6C47D0989B4E54C27; // 0x4
	float TransMultply_12_9083C0D642FF3BDC732FDE88A0363E5C; // 0x8
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FNavigationLink {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FTagResourceResult {
	FResponseMetadata ResponseMetadata; // 0x0
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FValueFromDataTableBase {
	FName Name; // 0x8
	FString Description; // 0x10
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FMovieSceneActorReferenceData {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FAnimNode_DragonFeetSolver {
	FDragonData_MultiInput dragon_input_data; // 0xc8
	EIK_Type_Plugin ik_type; // 0x160
	EIKTrace_Type_Plugin trace_type; // 0x161
	float Trace_Radius; // 0x164
	EInterpoLocation_Type_Plugin loc_interp_type; // 0x168
	EInterpoRotation_Type_Plugin rot_interp_type; // 0x170
	float virtual_scale; // 0x174
	bool automatic_leg_make; // 0x178
	bool Use_OptionalRef_Feet_As_Ref; // 0x179
	bool enable_solver; // 0x17a
	FComponentSpacePoseLink OptionalRefPose; // 0x180
	float shift_speed; // 0x190
	bool ignore_shift_speed; // 0x194
	bool interpolate_only_z; // 0x195
	float Location_Lerp_Speed; // 0x198
	float feet_rotation_speed; // 0x19c
	FRuntimeFloatCurve Interpolation_Velocity_Curve; // 0x1a0
	bool Enable_Complex_Rotation_Method; // 0x228
	FRuntimeFloatCurve ComplexSimpleFoot_Velocity_Curve; // 0x230
	ETraceTypeQuery Trace_Channel; // 0x2e8
	ETraceTypeQuery Anti_Trace_Channel; // 0x2e9
	float FPS_Lerp_Treshold; // 0x2ec
	float line_trace_upper_height; // 0x454
	float line_trace_down_height; // 0x458
	FRuntimeFloatCurve Trace_Down_Multiplier_Curve; // 0x460
	bool Use_Anti_Channel; // 0x4e8
	bool Ignore_Lerping; // 0x4e9
	bool Ignore_Location_Lerping; // 0x4ea
	bool Should_Rotate_Feet; // 0x4eb
	bool show_trace_in_game; // 0x4ed
	bool Enable_Pitch; // 0x508
	bool Enable_Roll; // 0x509
	FVector character_direction_vector_CS; // 0x50c
	FVector character_forward_direction_vector_CS; // 0x518
	bool Use_Four_Point_Feets; // 0x524
	bool Enable_Foot_Lift_Limit; // 0x525
	bool Affect_Toes_Always; // 0x526
	float Max_Limb_Radius; // 0x528
	float Foot_01_Height_Offset; // 0x638
	float Foot_02_Height_Offset; // 0x63c
	float Foot_03_Height_Offset; // 0x640
	float Foot_04_Height_Offset; // 0x644
};

struct FSQSSendMessageBatchResult {
	TArray<FSendMessageBatchResultEntry> Successful; // 0x0
	TArray<FBatchResultErrorEntry> Failed; // 0x10
	FSQSResponseMetadata ResponseMetadata; // 0x20
};

struct FSurvivalWorldSettings {
	FText WorldName; // 0x0
	FText WorldInfo; // 0x18
	FText Password; // 0x30
	FString GameMode; // 0x48
	int32_t MaxPlayers; // 0x58
	bool bAllAdmins; // 0x5c
	bool bAllowWorldVoiceChat; // 0x5d
	TArray<FString> AdminUsers; // 0x60
	USpotEventsAsset* SpotEvents; // 0x70
	TArray<FOverriddenValue> ValueOverridesParsed; // 0x78
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

struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x0
	float MovementThreshold; // 0x4
	uint32_t NumberOfPrimaryRays; // 0x8
	uint32_t ReflectionOrder; // 0xc
	float MaximumPathLength; // 0x10
	float CPULimitPercentage; // 0x14
	bool EnableDiffractionOnReflections; // 0x18
	bool EnableGeometricDiffractionAndTransmission; // 0x19
	bool CalcEmitterVirtualPosition; // 0x1a
	bool UseObstruction; // 0x1b
	bool UseOcclusion; // 0x1c
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FInsightRuleContributorDatapoint {
	FDateTime Timestamp; // 0x0
	float ApproximateValue; // 0x8
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
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

struct FRootMotionSource_JumpForce {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FTransformCurve {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FQueryInfo {
	FString QueryID; // 0x0
	FString QueryString; // 0x10
	EQueryStatus Status; // 0x20
	FString CreateTime; // 0x28
	FString LogGroupName; // 0x38
};

struct FAnimNode_CurveSource {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FS_MachineArmSlotArray {
	TArray<E_MachineArmSlot> SlotArray_3_187FBE964C38055E5BCA38BB7EFFC076; // 0x0
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FWorkshopItemDownloadInfo {
	FUInt64 bytesCurrent; // 0x0
	FUInt64 bytesTotal; // 0x8
	int32_t megaBytesCurrent; // 0x10
	int32_t megaBytesTotal; // 0x14
	float percentageFinished; // 0x18
};

struct FS_ResourceSpawnInfo {
	AActor* SpawnClass_3_E28062D64C399C6D31FA88BBE5922201; // 0x0
	int32_t AtLeastCount_7_535E53374B305142FDC1F9A4C0738424; // 0x8
	int32_t MaximumCount_9_C5F3225B4351D359B20CE9A73CABE0BC; // 0xc
	float SpawnProbability_13_00672568475C45B7CB4D7881692BD79C; // 0x10
	FVector CheckVolume_16_92993C9247FC79DAF776009CF5B24861; // 0x14
	FS_ConditionParam AdditiveParameter_20_440531F84DDBE70A4E77D4B11C2DDD50; // 0x20
};

struct FSplineMeshInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FDialogueTable {
	int32_t Order; // 0x8
	FText Situation; // 0x10
	TArray<FDialogueText> Dialogues; // 0x28
	USoundBase* DisappearSound; // 0x38
};

struct FSQSCreateQueueResult {
	FString QueueUrl; // 0x0
	FSQSResponseMetadata ResponseMetadata; // 0x10
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FS_ItemSpawner {
	FDataTableRowHandle Item_17_7863565647E9A34E17B902B3B80A5B73; // 0x0
	int32_t AmountMin_18_45E8CE2A4C7167791C10B29330DDCB09; // 0x10
	int32_t AmountMax_19_D013B5684F7F9B38B151EBB322C6A624; // 0x14
	float SpawnChance_20_D34AB7334657AFFF5781EFA7DDFD475E; // 0x18
	TSet<E_LootType> SpawnerType_24_1DA4607842FC82182F2DAEBC44DD0BE0; // 0x20
};

struct FMovieSceneColorKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FMovieScenePrimitiveMaterialTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FFilteredLogEvent {
	FString LogStreamName; // 0x0
	FString Timestamp; // 0x10
	FString Message; // 0x20
	FString IngestionTime; // 0x30
	FString EventId; // 0x40
};

struct FDescribeDestinationsRequest {
	FString DestinationNamePrefix; // 0x0
	FString NextToken; // 0x10
	int32_t Limit; // 0x20
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

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FPBUF_sv_VoiceTalkTokenRes {
	FString token; // 0x0
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

struct FResourcePolicy {
	FString PolicyName; // 0x0
	FString PolicyDocument; // 0x10
	FString LastUpdatedTime; // 0x20
};

struct FDescribeLogStreamsRequest {
	FString LogGroupName; // 0x0
	FString LogStreamNamePrefix; // 0x10
	EOrderBy OrderBy; // 0x20
	bool bDescending; // 0x21
	FString NextToken; // 0x28
	int32_t Limit; // 0x38
};

struct FNavAgentProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FMeshSectionBulkTextureData {
	int32_t Section; // 0x0
	int32_t TextureSizeX; // 0x4
	int32_t TextureSizeY; // 0x8
	TArray<char> BulkData; // 0x10
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
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

struct FScrollBorderStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FAnimNode_PoseBlendNode {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FAnimCurveParam {
	FName Name; // 0x0
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

struct FNPCMeleeAttackInfo {
	UAnimMontage* MeleeAttackAnim; // 0x8
	int32_t AttackWeight; // 0x10
	float Damage; // 0x14
	float MoveRange; // 0x18
	UDamageType* DamageType; // 0x20
	float SpeedMultiplier; // 0x28
	FName TargetActiveCollisionTagName; // 0x2c
	bool DisableTurning; // 0x34
	bool NeedLookAtTarget; // 0x35
	UAKData* HitWeaponAKSwitch; // 0x38
	bool IsDefender; // 0x40
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

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FSteamUGCQueryParameterTagsAllUserDetails {
	TArray<FSteamKeyValuePair> requiredKeyValueTags; // 0x0
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FDeleteLogStreamRequest {
	FString LogGroupName; // 0x0
	FString LogStreamName; // 0x10
};

struct FGeneratedMesh {
	int32_t ID; // 0x0
	UStaticMesh* Mesh; // 0x8
};

struct FMovieSceneVectorKeyStructBase {
	FFrameNumber Time; // 0x8
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FValueInDataTable {
	FString Value; // 0x8
	FText Description; // 0x18
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FSceneComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FMovieSceneStringChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FMovieSceneActorReferenceSectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FS_HoldableGeneralInfo {
	E_HoldableType HoldableType_14_B21C4F784EC238AD597ADF9F34E03120; // 0x0
	AHoldableBase* Class_2_339D7E0A492B420AAD904CBAB9023D26; // 0x8
	UAnimMontage* FP_Equip_5_924F237649A23662E5DAEDA27BAFC8B1; // 0x10
	UAnimMontage* TP_Equip_7_838CFD9A4617E5A6C1B33B9D35A70951; // 0x18
	UAnimMontage* FP_Unequip_9_F50F3BD341C03C42E26C7E8468FDDED8; // 0x20
	UAnimMontage* TP_Unequip_11_EA31347347C674B8440738BC55CE9D12; // 0x28
	float EquipPlayTime_17_DD20F56A4D94BAE4A7F4908C4781BE21; // 0x30
	float UnequipPlayTime_19_546055A14B93C101BA3AF2BD0B516296; // 0x34
	TSoftObjectPtr<UAkSwitchValue> BringUpSoundSwitch_26_BC6E189F4B9B0D53A5AF97BAEC1203A6; // 0x38
	bool bHoldableWhenConditionZero_29_3CA977B545D12F87BB4B008BB9494776; // 0x60
	bool CanLean_31_5ED908A04A5D019AE6D4788D64CAF95C; // 0x61
	FEditableObjectPrototype ThrownItemPrototype_35_6E2348F94848AA3CC3C910B8E9D70855; // 0x68
	UWBP_HoldableGuideUIBase_C* HoldableGuideUIClass_39_E68CF6DE44A6A9E0FEB895993DC604C2; // 0x78
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FWebsocketDedicatedServerConnectionInfo {
	FString OwningId; // 0x0
	FString title; // 0x10
	FString Guid; // 0x20
	FString branch; // 0x30
	int32_t BuildNumber; // 0x40
	bool ready; // 0x44
	int32_t UserCount; // 0x48
};

struct FS_CraftingRecipe {
	E_CraftingCatergoryType Category_16_4D455EE844667226ED5837B716C6250D; // 0x0
	int32_t TotalSortOrder_23_B59D871940F009F747899C928C826F34; // 0x4
	int32_t SortOrder_15_6367F36549DCDD9C25F99290F6A03FFF; // 0x8
	TArray<FS_CraftingRecipeData> Recipe_9_37C6D28A48F311D6FC2048A26F1E4FAC; // 0x10
	bool IsHiddenRecipe_17_87D1E1C04657FA73366C76B6813B1146; // 0x20
	FString Desc_20_3C834AA545FAEEDD758244BD9982A4A0; // 0x28
	int32_t UnlockCondtionByRadiogramCount_26_60F888DF41E820970F62A5A978E17F7A; // 0x38
	TArray<FIntPair> UnlockConditionByRadiogram_38_9EE41E1D4EFB8283366D7DA9D228F4D0; // 0x40
	bool UnlockCheckTypeOR_37_5AE958F94DD7CD1F192F329F80C933B3; // 0x50
};

struct FWeaponAttachmentAbility {
	EAttachmentType AttachmentType; // 0x0
	TArray<AWeaponBase*> AvailableWeapons; // 0x8
	TMap<int32_t, USkeletalMesh*> AttachmentMeshByUID; // 0x18
	TMap<int32_t, FName> AttachCharacterSocketNameByUID; // 0x68
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

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FWebsocketClientConnectionInfo {
	FString AuthSessionTicket; // 0x0
	FString appId; // 0x10
	FString branch; // 0x20
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FTTLinearColorTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
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

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FAIDataProviderTypedValue {
	UObject* PropertyType; // 0x20
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FSQSPurgeQueueRequest {
	FString QueueUrl; // 0x0
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FSQSChangeMessageVisibilityRequest {
	FString QueueUrl; // 0x0
	FString ReceiptHandle; // 0x10
	int32_t VisibilityTimeout; // 0x20
};

struct FDestinationCloud {
	FString DestinationName; // 0x0
	FString TargetArn; // 0x10
	FString RoleArn; // 0x20
	FString AccessPolicy; // 0x30
	FString Arn; // 0x40
	FString CreationTime; // 0x50
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

struct FMagicLeapGraphicsClientPerformanceInfo {
	float FrameStartCPUCompAcquireCPUTimeMs; // 0x0
	float FrameStartCPUFrameEndGPUTimeMs; // 0x4
	float FrameStartCPUFrameStartCPUTimeMs; // 0x8
	float FrameDurationCPUTimeMs; // 0xc
	float FrameDurationGPUTimeMs; // 0x10
	float FrameInternalDurationCPUTimeMs; // 0x14
	float FrameInternalDurationGPUTimeMs; // 0x18
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FDescribeAlarmHistoryRequest {
	FString AlarmName; // 0x0
	TArray<EAlarmType> AlarmTypes; // 0x10
	EHistoryItemType HistoryItemType; // 0x20
	FDateTime StartDate; // 0x28
	FDateTime EndDate; // 0x30
	int32_t MaxRecords; // 0x38
	FString NextToken; // 0x40
	EScanBy ScanBy; // 0x50
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FSVideoResolution {
	int32_t X_2_B2EB3ED14C87FB595290E6B07B273BAE; // 0x0
	int32_t Y_5_EBC461F945CA941644341489CB1BA22F; // 0x4
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FCompositeSection {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FCustomizableObjectIdPair {
	FString CustomizableObjectGroupName; // 0x0
	FString CustomizableObjectName; // 0x10
};

struct FSQSListDeadLetterSourceQueuesRequest {
	FString QueueUrl; // 0x0
	FString NextToken; // 0x10
	int32_t MaxResults; // 0x20
};

struct FBPSteamWorkshopItemDetails {
	FBPSteamResult ResultOfRequest; // 0x0
	FBPWorkshopFileType fileType; // 0x1
	int32_t CreatorAppID; // 0x4
	int32_t ConsumerAppID; // 0x8
	FString title; // 0x10
	FString Description; // 0x20
	FString ItemUrl; // 0x30
	int32_t votesUp; // 0x40
	int32_t votesDown; // 0x44
	float CalculatedScore; // 0x48
	bool bBanned; // 0x4c
	bool bAcceptedForUse; // 0x4d
	bool bTagsTruncated; // 0x4e
	FString CreatorSteamID; // 0x50
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FBPOnlineRecentPlayer {
	FString LastSeen; // 0x40
};

struct FDeleteMessageBatchRequestEntry {
	FString ID; // 0x0
	FString ReceiptHandle; // 0x10
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FDeleteDestinationRequest {
	FString DestinationName; // 0x0
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FS_ItemInventory {
	FString ID_24_9DF34B624AB0F3F6510E998638C6FAE4; // 0x0
	int32_t Count_25_304B2BAD4874CCFCBEAD549D1C3E10E5; // 0x10
	int32_t Index_26_A946B01D4378BF29CCEE45A0C45172A5; // 0x14
	float Condition_32_1E82A51D4778B91CE7F54EB66F8E9764; // 0x18
	Udelete2_C* Inventory_28_0FD0341546F6B136787D9A863530A2D9; // 0x20
	float ExpiredTime_36_E16237704DBB19A4F0E6B683AED57BA5; // 0x28
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

struct FS_SaveTeamInfo {
	FString TeamID_5_5C9BE1314D78E32FF472F19137173140; // 0x0
	FString TeamName_7_0E4206C344EF7122DAEF60B8B36891CB; // 0x10
	FLinearColor TeamColor_11_AEE2B40F4038B8E74AE92091833D33E3; // 0x20
	TArray<FTeamMemberInfo> TeamMemberInfo_15_D8EDE35C481D58A42A21B199E5F303B6; // 0x30
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FTestMetricFilterResult {
	TArray<FMetricFilterMatchRecord> Matches; // 0x0
};

struct FDatapoint {
	FDateTime Timestamp; // 0x0
	float SampleCount; // 0x8
	float Average; // 0xc
	float Sum; // 0x10
	float Minimum; // 0x14
	float Maximum; // 0x18
	EStandardUnit Unit; // 0x1c
	TMap<FString, float> ExtendedStatistics; // 0x20
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
	ENiagaraScriptParameterUsage Usage; // 0xd0
	bool bIsStaticSwitch; // 0xd4
	int32_t StaticSwitchDefaultValue; // 0xd8
	bool bAddedToNodeGraphDeepCopy; // 0xdc
	bool bOutputIsPersistent; // 0xdd
	FName CachedNamespacelessVariableName; // 0xe0
	bool bCreatedInSystemEditor; // 0xe8
	bool bUseLegacyNameString; // 0xe9
};

struct FDisableAlarmActionsRequest {
	TArray<FString> AlarmNames; // 0x0
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FNavLinkCustomInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FTagCloudWatch {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FDownloadItemResult {
	FUInt32 appId; // 0x10
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
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

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FGetQueryResultsRequest {
	FString QueryID; // 0x0
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FAnimNode_HandIKRetargeting {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FDescribeResourcePoliciesRequest {
	FString NextToken; // 0x0
	int32_t Limit; // 0x10
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
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

struct FMovieSceneCameraShakeSourceShakeSectionTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FSurvivalReplicationGraph_GridSpatialization2DConfiguration {
	float CellSize; // 0x0
	float SpatialBiasX; // 0x4
	float SpatialBiasY; // 0x8
	bool DisableSpatialRebuilds; // 0xc
};

struct FMovieSceneKeyTimeStruct {
	FFrameNumber Time; // 0x8
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FAkAdvancedInitializationSettings {
	uint32_t IO_MemorySize; // 0x0
	uint32_t IO_Granularity; // 0x4
	float TargetAutoStreamBufferLength; // 0x8
	bool UseStreamCache; // 0xc
	uint32_t MaximumPinnedBytesInCache; // 0x10
	bool EnableGameSyncPreparation; // 0x14
	uint32_t ContinuousPlaybackLookAhead; // 0x18
	uint32_t MonitorQueuePoolSize; // 0x1c
	uint32_t MaximumHardwareTimeoutMs; // 0x20
	bool DebugOutOfRangeCheckEnabled; // 0x24
	float DebugOutOfRangeLimit; // 0x28
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

struct FPutSubscriptionFilterRequest {
	FString LogGroupName; // 0x0
	FString FilterName; // 0x10
	FString FilterPattern; // 0x20
	FString DestinationArn; // 0x30
	FString RoleArn; // 0x40
	EDistribution Distribution; // 0x50
};

struct FAnimNode_AssetPlayerBase {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FInsightRule {
	FString Name; // 0x0
	FString State; // 0x10
	FString Schema; // 0x20
	FString Definition; // 0x30
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FSynthSlateStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
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

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FAkAndroidAdvancedInitializationSettings {
	uint32_t AudioAPI; // 0x30
	bool RoundFrameSizeToHardwareSize; // 0x34
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FS_ConvertSourceData {
	E_ConvertType ConvertType_2_24318F1D4E7271C19248C5AE3248386E; // 0x0
	float ConvertValuePerTime_5_497E9F6A4E57213E81C8BA8F592D6535; // 0x4
	float ConvertInterval_7_86C2545C4B38BCFD78E2DAB219AC3891; // 0x8
	int32_t SlotCount_10_74E5A9F64B04381B254A7A9DB8C298C2; // 0xc
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

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FSteamUGCHandle {
	FUInt64 handle; // 0x0
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

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FKBoxElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FSidebarLayoutSettings {
	bool bIsWidgetAtRight; // 0x0
	bool bIsLoadingWidgetAtTop; // 0x1
	float Space; // 0x4
	EVerticalAlignment VerticalAlignment; // 0x8
	FWidgetAlignment LoadingWidgetAlignment; // 0x9
	FWidgetAlignment TipAlignment; // 0xb
	EVerticalAlignment BorderVerticalAlignment; // 0xd
	float BorderHorizontalOffset; // 0x10
	FMargin BorderPadding; // 0x14
	FSlateBrush BorderBackground; // 0x28
};

struct Fs_RadioGramSave {
	TMap<int32_t, int32_t> ProgressSave_5_10A9A21F4051E99116FC7B81AF179C80; // 0x0
};

struct FMaterialAttributesInput {
	int32_t PropertyConnectedBitmask; // 0xc
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

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FNameCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FPutRetentionPolicyRequest {
	FString LogGroupName; // 0x0
	int32_t RetentionInDays; // 0x10
};

struct FImageSequenceSettings {
	TArray<UTexture2D*> Images; // 0x0
	FVector2D Scale; // 0x10
	float Interval; // 0x18
	bool bPlayReverse; // 0x1c
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FAnimNode_RotateRootBone {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FCustomizableObjectBoolParameterValue {
	FString ParameterName; // 0x0
	bool ParameterValue; // 0x10
	FString UID; // 0x18
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

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FGetMetricDataResult {
	TArray<FMetricDataResult> MetricDataResults; // 0x0
	FString NextToken; // 0x10
	TArray<FMessageDataCloudWatch> Messages; // 0x20
	FResponseMetadata ResponseMetadata; // 0x30
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

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FSteamUGCQueryParameterAllUserDetails {
	int32_t pageId; // 0x0
	ESteamSupportedLanguages Language; // 0x4
	int32_t allowedCacheResponseTime; // 0x8
	int32_t numDaysPlaytime; // 0xc
	char bReturnPreviewUrl : 1; // 0x10
	char bReturnKeyValueTags : 1; // 0x10
	char bReturnFullDescription : 1; // 0x10
	char bReturnMetaData : 1; // 0x10
	char bReturnChildIds : 1; // 0x10
	char bReturnAdditionalPreviews : 1; // 0x10
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FGetInsightRuleReportRequest {
	FString RuleName; // 0x0
	FDateTime StartTime; // 0x10
	FDateTime EndTime; // 0x18
	int32_t Period; // 0x20
	int32_t MaxContributorCount; // 0x24
	TArray<FString> Metrics; // 0x28
	FString OrderBy; // 0x38
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FAwsCloudWatchCredentials {
	FString AccessKeyId; // 0x0
	FString SecretKey; // 0x10
	FString SessionToken; // 0x20
	FDateTime Expiration; // 0x30
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPlane {
	float W; // 0xc
};

struct FQueryWorkshopForItemsResult {
	FSteamUGCQueryHandle queryHandle; // 0x8
	FUInt32 numResultsReturned; // 0x10
	FUInt32 numMatchingResults; // 0x14
	bool bHasMorePages; // 0x18
	bool bRetrievedDataWasCached; // 0x19
	TArray<FSteamWorkshopItemDetails> items; // 0x20
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
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

struct FDimension {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FS_ResourceGroup {
	int32_t ManageResourceCount_2_B7A2EEFA466BDE6FC6A95697B858B351; // 0x0
	float ResourceRegenerateTime_5_45004F8E4A63C49CE06F21A31E49AFF6; // 0x4
	TArray<FS_ResourceSpawnInfo> SpawnClassInfo_9_7269D2C04631494236B3129AF58E3BD9; // 0x8
	UTexture2D* Icon_16_E34C19634948C77456198AAA8CEE3E00; // 0x18
	float SpotWorkableInterval_19_FCC35B074FAA91129871D78D75FB181D; // 0x20
	int32_t AtLeastResourceCount_22_64B271C7450BB7EC9A2CC78575D9BD4D; // 0x24
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FNiagaraVariableWithOffset {
	int32_t Offset; // 0xc
};

struct FSteamResult {
	EResultBP Result; // 0x0
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FConvertInventory {
	int32_t Index; // 0x0
	float Current; // 0x4
	float Total; // 0x8
	UInventoryComponentBase* ArchivedInventory; // 0x10
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
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

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FSQSRemovePermissionRequest {
	FString QueueUrl; // 0x0
	FString Label; // 0x10
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FSteamUGCQueryParameterTagsAllUser {
	TArray<FString> requiredTags; // 0x10
	TArray<FString> excludedTags; // 0x20
};

struct FMovieSceneNiagaraSystemTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FAIDataProviderFloatValue {
	float DefaultValue; // 0x30
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FLandmarkEffectInfo {
	FText Name; // 0x0
	FText Discription; // 0x18
	FSlateBrush Icon; // 0x30
	FVector CenterLocation; // 0xb8
	bool ShowRange; // 0xc4
	float Radius; // 0xc8
	bool IsNegative; // 0xcc
	float WaitTime; // 0xd0
	float EndTime; // 0xd4
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FS_FloatRange {
	float Min_5_D0CC400D49FFCA5ECE2260B6B9CCDC08; // 0x0
	float Max_6_E2F7C97C41ED79A543E25BAC90267B16; // 0x4
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FS_MemoryCardInfo {
	int32_t Type_2_7BEE5537445984EF1B782C838E769A3C; // 0x0
	TMap<E_MemoryCardAbilityType, float> Ability_8_6C254C1D4A2456B98C317ABD2DD53207; // 0x8
	int32_t SkillGrade_11_EC7A76D64055316021987BB0D1403C3D; // 0x58
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

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FS_GridSave {
	FTransform GridTransform_2_571A666C4C810DA6F9ABE6AFE21639E2; // 0x0
	E_BuildTypes GridType_5_BA8599D248184736DC274EA228D94DB9; // 0x30
	FVector GridSize_8_7635BEE04364CFAA11345B96E87D526E; // 0x34
	int32_t GridHashID_12_B4CBF7DE400BC2B8EF40FCAF33E97E69; // 0x40
};

struct FDescribeAlarmHistoryResult {
	TArray<FAlarmHistoryItem> AlarmHistoryItems; // 0x0
	FString NextToken; // 0x10
	FResponseMetadata ResponseMetadata; // 0x20
};

struct FDescribeResourcePoliciesResult {
	TArray<FResourcePolicy> ResourcePolicies; // 0x0
	FString NextToken; // 0x10
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FGetQueryResultsResult {
	TArray<FResultField> Results; // 0x0
	FQueryStatistics Statistics; // 0x10
	EQueryStatus Status; // 0x40
};

struct FS_MachineArmAbilitySave {
	TMap<int32_t, Fs_RadioGramSave> MachineArmAbilitySave_5_C4C2038048488819F6A4ACAADD739453; // 0x0
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

struct FMachinArmAbilityMain {
	FText MainCategoryName; // 0x8
	int32_t sortOrder; // 0x20
	TArray<FMachinArmAbilitySub> AbilityList; // 0x28
};

struct FListTagsForResourceResultCloudWatch {
	TArray<FCloudWatchTag> Tags; // 0x0
	FResponseMetadata ResponseMetadata; // 0x10
};

struct FAlarmHistoryItem {
	FString AlarmName; // 0x0
	EAlarmType AlarmType; // 0x10
	FDateTime Timestamp; // 0x18
	EHistoryItemType HistoryItemType; // 0x20
	FString HistorySummary; // 0x28
	FString HistoryData; // 0x38
};

struct FPBUF_sv_NameReq {
	FString Name; // 0x0
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

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FS_MeleeWeaponInfo {
	FDamageStruct DamageStruct_14_D56A143F497BD84F2057F682A88E581C; // 0x0
	float CoolTime_6_A3ABA3924ACDB2A1CF8989AFA1D1DED1; // 0x38
	float Distance_11_5CDDAB724CCB4E2149759E900153E770; // 0x3c
	float Range_13_BB7B12024D6F70442AB9B79D00CF0065; // 0x40
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FIntegralCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FS_BuildingSave {
	int32_t UID_43_17B6C7A44A03CC3E3231BB8DCA5A38D5; // 0x0
	FTransform BuildPartTransform_2_92F5576D4245B10D5459A4B0C911ED49; // 0x10
	float CurrentHealth_40_F5572F244A68776F018DFC9A74E87FBE; // 0x40
	TArray<FString> Owners_37_CB0EF97744CCD75DAA63C896B482C466; // 0x48
	FString OriginalOwner_38_96FB0C414512B82FC34BB8AA4E601DCB; // 0x58
	FText BuildPartName_27_B93959C540878D1E4656A48E39878272; // 0x68
	int32_t MeshIdx_30_854BF1014A5963BA52DAB89144F304F1; // 0x80
	FS_FunctionalitySave FunctionalitySave_33_7FE65D7340D4D9DC4F8C14853B16BE01; // 0x88
	FString Password_46_CD5689A441A0D9C989DC3CA02F462966; // 0x178
	E_SecurityType SecurityMode_49_98313AF443C5726414B17C89528F422C; // 0x188
	float DecayProtectReleaseTime_52_ECA5D57D440A39A8830E158CC4165253; // 0x18c
	TArray<FString> RegisterUIDArray_59_54FFFB534FC22284D3DC7AAD65CA379A; // 0x190
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FDamageStruct {
	UDamageType* DamageType; // 0x0
	float Damage; // 0x8
	float Penetrate; // 0xc
	float KnockbackPower; // 0x10
	bool IsExplosion; // 0x14
	float ExplosionMinimumDamage; // 0x18
	float ExplosionInnerRadius; // 0x1c
	float ExplosionOuterRadius; // 0x20
	float ExplosionDamageFalloff; // 0x24
	TArray<AActor*> ExplosionIgnoreActors; // 0x28
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FLobbyMapInfo {
	FString RawMapName; // 0x0
	FText MapName; // 0x10
	UTexture2D* MapImage; // 0x28
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

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FSQSDeleteMessageBatchResult {
	TArray<FDeleteMessageBatchResultEntry> Successful; // 0x0
	TArray<FBatchResultErrorEntry> Failed; // 0x10
	FSQSResponseMetadata ResponseMetadata; // 0x20
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FAkWindowsAdvancedInitializationSettings {
	bool UseHeadMountedDisplayAudioDevice; // 0x30
	uint32_t MaxSystemAudioObjects; // 0x34
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FAnimNode_LinkedAnimLayer {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
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

struct FClassicLayoutSettings {
	bool bIsWidgetAtBottom; // 0x0
	bool bIsLoadingWidgetAtLeft; // 0x1
	float Space; // 0x4
	FWidgetAlignment TipAlignment; // 0x8
	EHorizontalAlignment BorderHorizontalAlignment; // 0xa
	FMargin BorderPadding; // 0xc
	FSlateBrush BorderBackground; // 0x20
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FStaticSwitchParameter {
	bool Value; // 0x24
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool EnableMultiCoreRendering; // 0x2c
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
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

struct FPutLogEventsRequest {
	FString LogGroupName; // 0x0
	FString LogStreamName; // 0x10
	TArray<FInputLogEvent> LogEvents; // 0x20
	FString SequenceToken; // 0x30
};

struct FOutputLogEvent {
	FString Timestamp; // 0x0
	FString Message; // 0x10
	FString IngestionTime; // 0x20
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FMovieSceneAudioSectionTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FQueuedDrawDebugItem {
	EDrawDebugItemType itemType; // 0x0
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

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FMachinArmAbilityItem {
	FText ItemName; // 0x8
	UTexture2D* Icon; // 0x20
	TArray<FItemCodeValue> UnlockCost; // 0x28
	FEditableObjectPrototype Ability; // 0x38
};

struct FAnimNode_CopyBone {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
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

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FNPCSpawnInfoLandmarkStatus {
	ELMStatus Status; // 0x8
	int32_t Phase; // 0xc
	TMap<FName, int32_t> SpawnMonsters; // 0x10
};

struct FConvertItem {
	float Total; // 0x8
	TArray<FItemCodeValue> Ouput; // 0x10
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

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
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

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
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

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FDragonData_FingerData {
	FName Finger_Bone_Name; // 0x0
	float Trace_Scale; // 0x8
	FVector Trace_Offset; // 0xc
	bool Is_Finger_Backward; // 0x18
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FS_SaveStorage {
	FString StorageName_13_5699D3204887CBC0B07539B35E8FFF0F; // 0x0
	TArray<FS_SaveInv> StorageInventory_14_03F981B0456B09CDF99FEAA31905E0B8; // 0x10
	float StorageWaight_15_2A8DF0324EEE55CFA3DCA7AD3CB8FF83; // 0x20
	int32_t StorageSlots_16_FAD9C23F4CE444C380E35ABDE0333026; // 0x24
	TArray<FS_SaveWeaponInvs> StorageWepInventory_17_ABB275864AE94F8FCEDBFE86240E6FCB; // 0x28
	FTransform StorageLocation_20_A4FF99D54EFC3266560378B2ECA08B71; // 0x40
};

struct FSetAlarmStateRequest {
	FString AlarmName; // 0x0
	EStateValue StateValue; // 0x10
	FString StateReason; // 0x18
	FString StateReasonData; // 0x28
};

struct FDonNavigationDynamicCollisionNotifyee {
	FDelegate Listener; // 0x0
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FEdGraphSchemaAction_NewNode {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FS_OccupyBoxReplicate {
	bool IsOccupyed_1_C107056A4AADC978260B0EA0C83FF92B; // 0x0
	UBP_PlayerInventoryComponent_C* BoxOwner_11_7FFAE8214F4ABEF778B7D78212A6F4F3; // 0x8
	bool IsIn_14_28352AC840C099FCCC126CAA12B4A1C8; // 0x10
	int32_t CurrentOccupyTime_4_1805C0A74E06A635555ADFAD8361070D; // 0x14
	float ResetOccupyTime_7_759C285D4F18497639B2D38E89FF4013; // 0x18
	bool IsOpen_16_339EDCDA4B36721380AD76A3723D8252; // 0x1c
	bool Conflict_18_7DFA3289403EF83CFC7B5899B99E02E1; // 0x1d
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FDisableInsightRulesResult {
	TArray<FPartialFailure> Failures; // 0x0
	FResponseMetadata ResponseMetadata; // 0x10
};

struct FOnlineProxyStoreOffer {
	FString OfferId; // 0x0
	FText title; // 0x10
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

struct FBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FBPSteamGroupOfficer {
	FBPUniqueNetId OfficerUniqueNetID; // 0x0
	bool bIsOwner; // 0x20
};

struct FDescribeAnomalyDetectorsRequest {
	FString NextToken; // 0x0
	int32_t MaxResults; // 0x10
	FString Namespace; // 0x18
	FString MetricName; // 0x28
	TArray<FDimension> Dimensions; // 0x38
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FFilterLogEventsResult {
	TArray<FFilteredLogEvent> Events; // 0x0
	TArray<FSearchedLogStream> SearchedLogStreams; // 0x10
	FString NextToken; // 0x20
};

struct FCustomizableObjectFloatParameterValue {
	FString ParameterName; // 0x0
	float ParameterValue; // 0x10
	FString UID; // 0x18
	TArray<float> ParameterRangeValues; // 0x28
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

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
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

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FS_MinMax {
	int32_t Min_2_EF76217548185B18FAC7A8A5D2D0D414; // 0x0
	int32_t Max_4_022044F04C25056D313917B68E8CF5B6; // 0x4
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FCustomizableObjectTextureParameterValue {
	FString ParameterName; // 0x0
	uint64_t ParameterValue; // 0x10
	FString UID; // 0x18
};

struct FInsightRuleContributor {
	TArray<FString> Keys; // 0x0
	float ApproximateAggregateValue; // 0x10
	TArray<FInsightRuleContributorDatapoint> Datapoints; // 0x18
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FSQSGetQueueUrlRequest {
	FString QueueName; // 0x0
	FString QueueOwnerAWSAccountId; // 0x10
};

struct FS_VehicleSpawner {
	TArray<FS_SaveVehicle> Vehicles_12_B67962BA4B308F1CEE6266971D21C5ED; // 0x0
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

struct FMovieSceneCameraShakeSourceTriggerChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
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

struct FS_SaveEquipment {
	E_EquipmentCategorys EquipmentSlot_4_8DB9C1994352A4CC87ACE68FA3098C36; // 0x0
	FS_SaveInv EquipmentItem_5_5B04D1BE4FCB21346FEBF4948F3B076C; // 0x8
};

struct FRefraction {
	float CriticalAngleDot_46_AC647E804AD8FF66DC479DBEE451B83D; // 0x0
	float CriticalAngleWidth_47_312D7DB140157D72C96AFF8CF5729D66; // 0x4
	float CriticalAngleBendWidth_48_D915AA5E48130D8B0506EFA66AF77424; // 0x8
	float RefractionBottomAmount_49_4D07E26B418E2200A6F8F8B3828E51EE; // 0xc
	float LipRefraction_53_DE882A664AA5A2C72A36E3A4975B120A; // 0x10
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FArchiveItemInfo {
	FItemInventory ItemInfo; // 0x0
	FWeaponInventory WeaponInfo; // 0x38
	bool bReceived; // 0x60
};

struct FAwsSQSCredentials {
	FString AccessKeyId; // 0x0
	FString SecretKey; // 0x10
	FString SessionToken; // 0x20
	FDateTime Expiration; // 0x30
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
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

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FCloudWatchTag {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FDescribeAlarmsRequest {
	TArray<FString> AlarmNames; // 0x0
	FString AlarmNamePrefix; // 0x10
	TArray<EAlarmType> AlarmTypes; // 0x20
	FString ChildrenOfAlarmName; // 0x30
	FString ParentsOfAlarmName; // 0x40
	EStateValue StateValue; // 0x50
	FString ActionPrefix; // 0x58
	int32_t MaxRecords; // 0x68
	FString NextToken; // 0x70
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
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

struct FS_NPCSpawnCmd {
	APawn* SpawnedClass_2_53D6ECC748A62F38A8B177AE1F7576EA; // 0x0
	float RealSpawnTime_11_03B73A0742FDC97D575C3C80C6AF88F2; // 0x8
};

struct FCustomizableObjectIdentifier {
	FString CustomizableObjectGroupName; // 0x0
	FString CustomizableObjectName; // 0x10
	FString Guid; // 0x20
};

struct FChildActorComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FOutgameCoordinatorUrl {
	FString kakao_main; // 0x0
	FString rm_main; // 0x10
	FString rm_develop; // 0x20
	FString kakaodev_alpha; // 0x30
	FString kakaodev_beta; // 0x40
	FString kakaodev_live; // 0x50
	FString rmdev_alpha; // 0x60
	FString rmdev_beta; // 0x70
	FString rmdev_live; // 0x80
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
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

struct FAIDataProviderBoolValue {
	bool DefaultValue; // 0x30
};

struct FLandmarkMonsterSpawnInfo {
	ELMStatus Status; // 0x8
	int32_t Phase; // 0xc
	TMap<FName, int32_t> SpawnInfo; // 0x10
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
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

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FBPFriendInfo {
	FString DisplayName; // 0x0
	FString RealName; // 0x10
	EBPOnlinePresenceState OnlineState; // 0x20
	FBPUniqueNetId UniqueNetId; // 0x28
	bool bIsPlayingSameGame; // 0x48
	FBPFriendPresenceInfo PresenceInfo; // 0x50
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FS_ForbiddenKeyword {
	FString Keyword_2_98CDDDDC42305B04BDD1DDA72E3F9637; // 0x0
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FPutCompositeAlarmRequest {
	bool bActionsEnabled; // 0x0
	TArray<FString> AlarmActions; // 0x8
	FString AlarmDescription; // 0x18
	FString AlarmName; // 0x28
	FString AlarmRule; // 0x38
	TArray<FString> InsufficientDataActions; // 0x48
	TArray<FString> OKActions; // 0x58
	TArray<FTagCloudWatch> Tags; // 0x68
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FS_ResourceVisibleComponents {
	float ResourcesRatio_16_513067664FAF0C83A2D5EDBA69774E56; // 0x0
	TArray<FName> VisibleComponentNames_13_BDCD49E740531B0A6AC1C7B61ABDC428; // 0x8
	TArray<UPrimitiveComponent*> VisibleComponents_14_EB25EE99403986686F8CF092293D3AB5; // 0x18
};

struct FS_MachineArmCustomizationInfo {
	TArray<TSoftObjectPtr<UMaterialInterface>> ChestMachineArmOverrideMaterials_22_0F81BE2643F881AF48191E9ED4C7791E; // 0x0
	TSoftObjectPtr<UMaterialInterface> MachineArmMeshOverrideMaterial_29_8817140B448C25B35EEA6292305B50EE; // 0x10
};

struct FIntValueFromDataTable {
	int32_t Value; // 0x20
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FStopQueryRequest {
	FString QueryID; // 0x0
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FDragonData_ArmsData {
	FBoneReference Shoulder_Bone_Name; // 0x0
	FBoneReference Elbow_Bone_Name; // 0x10
	FBoneReference Hand_Bone_Name; // 0x20
	FVector Local_Direction_Axis; // 0x30
	FVector Arm_Aiming_Offset; // 0x3c
	bool accurate_hand_rotation; // 0x48
	bool relative_axis; // 0x49
	float Maximum_Extension; // 0x4c
	float Minimum_Extension; // 0x50
	FVector Elbow_Pole_Offset; // 0x54
	bool override_limits; // 0x60
	FVector2D Max_Arm_H_Angle; // 0x64
	FVector2D Max_Arm_V_Angle; // 0x6c
};

struct FKSphylElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FDeleteResourcePolicyRequestLogs {
	FString PolicyName; // 0x0
};

struct FGetMetricStatisticsResult {
	FString Label; // 0x0
	TArray<FDatapoint> Datapoints; // 0x10
	FResponseMetadata ResponseMetadata; // 0x20
};

struct FBackgroundSettings {
	TArray<FSoftObjectPath> Images; // 0x0
	EStretch ImageStretch; // 0x10
	FMargin Padding; // 0x14
	FLinearColor BackgroundColor; // 0x24
	bool bSetDisplayBackgroundManually; // 0x34
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
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

struct FGetLogRecordRequest {
	FString LogRecordPointer; // 0x0
};

struct FLandmarkDialogueByStatus {
	ELMStatus Situation; // 0x8
	TArray<FDialogueTable> Dialogues; // 0x10
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FLiveLinkTransformBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FPutAnomalyDetectorResult {
	FResponseMetadata ResponseMetadata; // 0x0
};

struct FLobbyParams {
	FString LobbyName; // 0x0
	FString HostSID; // 0x10
	float CT; // 0x20
	int32_t MaxPlayers; // 0x24
	int32_t StageIdx; // 0x28
	EIFOGameType IFOGameType; // 0x2c
};

struct FDescribeAlarmsResult {
	TArray<FCompositeAlarm> CompositeAlarms; // 0x0
	TArray<FMetricAlarm> MetricAlarms; // 0x10
	FString NextToken; // 0x20
	FResponseMetadata ResponseMetadata; // 0x30
};

struct FPutMetricFilterRequest {
	FString LogGroupName; // 0x0
	FString FilterName; // 0x10
	FString FilterPattern; // 0x20
	TArray<FMetricTransformation> MetricTransformations; // 0x30
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FMirrorBone {
	FName BoneName; // 0x0
	EAxis MirrorAxis; // 0x8
	EAxis FlipAxis; // 0x9
	FRotator RotationOffset; // 0xc
	bool IsTwinBone; // 0x18
	FName TwinBoneName; // 0x1c
	bool MirrorTranslation; // 0x24
};

struct FSendMessageBatchRequestEntry {
	FString ID; // 0x0
	FString MessageBody; // 0x10
	int32_t DelaySeconds; // 0x20
	TMap<FString, FMessageAttributeValue> MessageAttributes; // 0x28
	TMap<EMessageSystemAttributeNameForSends, FMessageSystemAttributeValue> MessageSystemAttributes; // 0x78
	FString MessageDeduplicationId; // 0xc8
	FString MessageGroupId; // 0xd8
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FS_DeadPlayerSave {
	FString PlayerUID_96_B504DED64EB9E452F10E27BB0A4844B9; // 0x0
	FString DeadReason_87_4B05F877445AF205CADF1F8A7851F29A; // 0x10
	FVector DeadPoint_92_51AC937F4553D938850445B33F286F2B; // 0x20
	float AliveTime_95_96BB899E468CD04C3F2E9687D23F2781; // 0x2c
	TArray<FS_HealthChangeSummary> DeathRecap_102_737040F842809D6DCC11BDA4925BE45F; // 0x30
	FS_PlayerInfoSummary KillerInfosummary_106_77D275E54218661F33CE8886A0651A54; // 0x40
};

struct FIntPair {
	int32_t int1; // 0x0
	int32_t int2; // 0x4
};

struct FUpdateWorkshopItemResult {
	bool bUserNeedsToAcceptWorkshopLegalAgreement; // 0x10
};

struct FS_VehicleInfo {
	FName Name_8_B7EB7CA74FF86B01941389A6D558AEBD; // 0x0
	TMap<E_VehicleInteractionType, FS_VehicleRepairInfo> VehicleRepairItem_26_D500CC6E4D1D871BCBE56BB577686CA8; // 0x8
	FItemCodeValueArray VehicleChargeItem_33_9472BD144174D0EDAC9204BD18ADAF76; // 0x58
	int32_t VehicleChargeAmount_36_06631C404D61584633668498DC8953C4; // 0x70
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FUserFavoriteItemChangedResult {
	bool bWasAddRequest; // 0x10
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FPBUF_sv_SetDedicatedServerReadyRes {
	FString State; // 0x0
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FMovieSceneEventChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FAnomalyDetector {
	FString Namespace; // 0x0
	FString MetricName; // 0x10
	TArray<FDimension> Dimensions; // 0x20
	FString Stat; // 0x30
	FAnomalyDetectorConfiguration Configuration; // 0x40
	EAnomalyDetectorStateValue StateValue; // 0x60
};

struct FDynamicTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FActorLayer {
	FName Name; // 0x0
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

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FSQSListQueueTagsResult {
	TMap<FString, FString> Tags; // 0x0
	FSQSResponseMetadata ResponseMetadata; // 0x50
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FSQSDeleteQueueRequest {
	FString QueueUrl; // 0x0
};

struct FVectorCurve {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FRBFTarget {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FS_WeaponAttachements {
	BP_MasterAttachment_C* Sight_13_0940373F4B22E35E1C18AEAF674BE387; // 0x0
	BP_MasterAttachment_C* FrontGrip_15_251084014195C8680FAF5287FC3B93A1; // 0x8
	BP_MasterAttachment_C* Magazine_17_C279D24C4CBCB0C4931A4F9813C56C4A; // 0x10
	BP_MasterAttachment_C* Stock_19_7E46B922491EC99ABA9AA5A802E01F36; // 0x18
	BP_MasterAttachment_C* Trigger_21_469EC1CF4CC16DCB35A46DAFEC913DAD; // 0x20
	BP_MasterAttachment_C* Handguard_24_95DD9D9742EEBDF376AFD8A99E046DB0; // 0x28
	BP_MasterAttachment_C* Underbarrel_26_BD52E86743DCE3AE2F7BE4B988AD45D1; // 0x30
	BP_MasterAttachment_C* Muzzle_28_FE72C8374C69E763AE76D49A1EA5519A; // 0x38
	BP_MasterAttachment_C* Warp_30_43C7657B4591F34E27894192AF2E7B83; // 0x40
};

struct FBPItemAmountPair {
	FString ItemUid; // 0x0
	int32_t ItemCount; // 0x10
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FSQSDeleteMessageBatchRequest {
	FString QueueUrl; // 0x0
	TArray<FDeleteMessageBatchRequestEntry> Entries; // 0x10
};

struct FRestrictedGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
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

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FCustomizableObjectProjector {
	FVector Position; // 0x0
	FVector Direction; // 0xc
	FVector Up; // 0x18
	FVector Scale; // 0x24
	ECustomizableObjectProjectorType ProjectionType; // 0x30
	float Angle; // 0x34
};

struct FGetLogGroupFieldsRequest {
	FString LogGroupName; // 0x0
	FString Time; // 0x10
};

struct FBlueprintInputAxisDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FMaskOutTexture {
	int32_t SizeX; // 0x0
	int32_t SizeY; // 0x4
	TArray<uint32_t> Data; // 0x8
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

struct FModulatorContinuousParams {
	FName ParameterName; // 0x0
	float Default; // 0x8
	float MinInput; // 0xc
	float MaxInput; // 0x10
	float MinOutput; // 0x14
	float MaxOutput; // 0x18
	ModulationParamMode ParamMode; // 0x1c
};

struct FAkCommonInitializationSettings {
	uint32_t MaximumNumberOfMemoryPools; // 0x0
	uint32_t MaximumNumberOfPositioningPaths; // 0x4
	uint32_t CommandQueueSize; // 0x8
	uint32_t SamplesPerFrame; // 0xc
	FAkMainOutputSettings MainOutputSettings; // 0x10
	float StreamingLookAheadRatio; // 0x38
	uint16_t NumberOfRefillsInVoice; // 0x3c
	FAkSpatialAudioSettings SpatialAudioSettings; // 0x40
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FBP_TransformOfInstancedFoliageActors {
	UHierarchicalInstancedStaticMeshComponent* InstancedStaticMeshComponent_7_7E2C14C94B5975EC86D0FB9B43FEBEDF; // 0x0
	TArray<FTransform> TransformArray_3_BF11884045408CDC6B3D1BB84BFDCBAF; // 0x8
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
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

struct FUInt32 {
	uint32_t Value; // 0x0
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
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

struct FInsightRuleMetricDatapoint {
	FDateTime Timestamp; // 0x0
	float UniqueContributors; // 0x8
	float MaxContributorValue; // 0xc
	float SampleCount; // 0x10
	float Average; // 0x14
	float Sum; // 0x18
	float Minimum; // 0x1c
	float Maximum; // 0x20
};

struct FStatisticSet {
	float SampleCount; // 0x0
	float Sum; // 0x4
	float Minimum; // 0x8
	float Maximum; // 0xc
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FPBUF_sv_StatusUpdateUserCountReq {
	FString Guid; // 0x0
	int32_t user_count; // 0x10
	FString instance_id; // 0x18
	FString region; // 0x28
	FString endtimestr; // 0x38
	int32_t max_user_count; // 0x48
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

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FCompilationOptions {
	bool bTextureCompression; // 0x0
	int32_t OptimizationLevel; // 0x4
	bool bUseParallelCompilation; // 0x8
	bool bUseDiskCompilation; // 0x9
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FDialogueText {
	FSlateBrush Portrait; // 0x0
	FText Dialogue; // 0x88
	float Duration; // 0xa0
	USoundBase* AppearSound; // 0xa8
	USoundBase* VoiceSound; // 0xb0
};

struct FAnimNode_BlendSpaceEvaluator {
	float NormalizedTime; // 0xe8
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
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

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FQueryDefinition {
	FString QueryDefinitionId; // 0x0
	FString Name; // 0x10
	FString QueryString; // 0x20
	FString LastModified; // 0x30
	TArray<FString> LogGroupNames; // 0x40
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FMutableParamUIMetadata {
	FString ObjectFriendlyName; // 0x0
	FString UISectionName; // 0x10
	int32_t UIOrder; // 0x20
	TSoftObjectPtr<UTexture2D> UIThumbnail; // 0x28
	TMap<FString, FString> ExtraInformation; // 0x50
	TMap<FString, TSoftObjectPtr<UObject>> ExtraAssets; // 0xa0
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FAnimNode_Mirror {
	FPoseLink BasePose; // 0x10
	UMirrorTable* MirrorTable; // 0x20
};

struct FSQSSendMessageResult {
	FString MD5OfMessageBody; // 0x0
	FString MD5OfMessageAttributes; // 0x10
	FString MD5OfMessageSystemAttributes; // 0x20
	FString MessageId; // 0x30
	FString SequenceNumber; // 0x40
	FSQSResponseMetadata ResponseMetadata; // 0x50
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FPutDestinationPolicyRequest {
	FString DestinationName; // 0x0
	FString AccessPolicy; // 0x10
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FMovieScenePropertySectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FMovieSceneByteChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
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

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FS_TutorialShowingRadiogram {
	E_RadiogramDetailType Type_5_3BEE790740298FD9162DDCADF12714AE; // 0x0
	int32_t UID_4_9AE9DBAB41434A858DC7358D5F1AB6F6; // 0x4
};

struct FSessionServicePing {
	FString Username; // 0x0
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

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FMovieSceneNiagaraColorParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FBPSteamGroupInfo {
	FBPUniqueNetId GroupID; // 0x0
	FString GroupName; // 0x20
	FString GroupTag; // 0x30
	int32_t numOnline; // 0x40
	int32_t numInGame; // 0x44
	int32_t numChatting; // 0x48
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
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

struct FPBUF_sv_DediListInfosRes {
	TArray<FPBUF_sv_DediInfo> dedi_infos; // 0x0
};

struct FTestMetricFilterRequest {
	FString FilterPattern; // 0x0
	TArray<FString> LogEventMessages; // 0x10
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FSteamUGCQueryParameterAll {
	FString searchText; // 0x50
	int32_t rankedByTrendDays; // 0x60
	bool bMatchAnyTag; // 0x64
	EUGCQueryBP queryType; // 0x65
	EUGCMatchingUGCTypeBP fileType; // 0x66
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
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

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FAkOutputSettings {
	FString AudioDeviceSharesetName; // 0x0
	int32_t IdDevice; // 0x10
	PanningRule PanRule; // 0x14
	AkChannelConfiguration ChannelConfig; // 0x15
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FHitEffectInfo {
	EPhysicalSurface SurfaceType; // 0x0
	UParticleSystem* HitEmmiter; // 0x8
	UMaterialInterface* HitDecal; // 0x10
	FVector DecalSize; // 0x18
	float DecalLifeTime; // 0x24
	USoundBase* HitSound; // 0x28
	UAkSwitchValue* HitAKSwitchValue; // 0x30
};

struct FSQSSendMessageBatchRequest {
	FString QueueUrl; // 0x0
	TArray<FSendMessageBatchRequestEntry> Entries; // 0x10
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FS_HealthChangeSummary {
	UDamageType* DamageType_5_CD5E781A4319CF90D36C9B94DF532828; // 0x0
	FName Instigator_15_611AC5554022C8DCA7A0A99AB9BC932D; // 0x8
	int32_t CauserUID_22_AA3FC4404E043A15F2F66C940948DB0D; // 0x10
	float ChangeValue_26_C258EC2B450B1D4024367090DFDB7A51; // 0x14
	float LastHitTime_13_22E9599346EA4848A3167AB61CFD92FB; // 0x18
	E_HitboxType HitBox_20_CC2E47FF43E2CB1D541896950F5D3FB7; // 0x1c
	float Health_25_E3DACEDB4D76BFB27AE10FB9DCF1720F; // 0x20
	bool ByPlayer_29_CA06F497455D387D5C45819FA6550128; // 0x24
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
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

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FExportTaskExecutionInfo {
	FString CreationTime; // 0x0
	FString CompletionTime; // 0x10
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

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
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

struct FDeleteDashboardsRequest {
	TArray<FString> DashboardNames; // 0x0
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
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

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
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

struct FS_RangeWeaponAnims {
	UAnimMontage* FPADSFire_41_EF3702324FE0A5BA3318F1B546D8CB3C; // 0x0
	UAnimSequenceBase* FPADSIdle_3_4C97FD2B43EACB1AD544359BD83B3696; // 0x8
	UBlendSpaceBase* FPADSJogBlendSpace_6_D1FFF0E6467AAA213DAE51BCAFA72CEB; // 0x10
	UAnimMontage* FPADSCrouchFire_47_A9CED9F6409BE6147D1A7F9AF1FC1CFB; // 0x18
	UAnimMontage* FPCrouchFire_51_F7FF8A9347E684FEEB2C0DA66C87E171; // 0x20
	UAnimSequenceBase* FPADSCrouchIdle_10_020CC93349F310169F569FA2918CD8E9; // 0x28
	UBlendSpaceBase* FPADSCrouchBlendSpace_32_9D1AAFA74C7358237AC240B9A21FE3F7; // 0x30
	UAnimMontage* TPADSFire_43_EA44AB0E4C02DBE577ADABBCEB66466F; // 0x38
	UAnimSequenceBase* TPADSIdle_16_C5A1BAA24B965BDA01E437AD96091BBA; // 0x40
	UBlendSpaceBase* TPADSJogBlendSpace_31_EF204F654321BA93E6BFFB8E8B658847; // 0x48
	UAnimMontage* TPCrounchFire_53_6E04AEE246E65B76B8C558B45FFC3584; // 0x50
	UAnimMontage* TPADSCrouchFire_49_FB25334D4E2556F19123E6A0E158CB76; // 0x58
	UAnimSequenceBase* TPADSCrouchIdle_20_293A249B4903C0A86CA580A36F973560; // 0x60
	UBlendSpaceBase* TPADSCrouchBlendSpace_30_13813383434E578AC958408C513DF466; // 0x68
	UBlendSpaceBase* ADSAimOffset_29_56058D0441A6611A2B53BC91D49AC7A6; // 0x70
	UBlendSpace1D* FP_NearWallHandsUp_60_44F6F5C1449211208B7C54ABC4132951; // 0x78
	UBlendSpace1D* TP_NearWallHandsUp_62_C9E13CBF4F9251A2DE0042B688A33A20; // 0x80
};

struct FCustomizableObjectProjectorParameterValue {
	FString ParameterName; // 0x0
	FCustomizableObjectProjector Value; // 0x10
	FString UID; // 0x48
	TArray<FCustomizableObjectProjector> RangeValues; // 0x58
};

struct FS_RetrieveSystemInfo {
	int32_t MaxSlotCount_2_8669C7334C788EBF265C8388F06C73CF; // 0x0
	TArray<int32_t> RegisterItemArray_6_FCED4DEC479CF36B76F1A58824893E3E; // 0x8
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FS_AttachmentAnimationInfo {
	UAnimMontage* AnimMontage_2_54A8CBBA412938CD76D06CB83C23EB05; // 0x0
	float PlayTime_5_59BE1F984B640AA61CA579BA4CED6A20; // 0x8
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

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FComboButtonStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FSQSUntagQueueRequest {
	FString QueueUrl; // 0x0
	TArray<FString> TagKeys; // 0x10
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FWidgetAlignment {
	EHorizontalAlignment HorizontalAlignment; // 0x0
	EVerticalAlignment VerticalAlignment; // 0x1
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

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FS_FieldNPC_OneSpawnInfo {
	int32_t UID_13_6DA85820402C493116B7DB88EA41F347; // 0x0
	int32_t SpawnNum_11_D795DE464776F1FC01160BBB0F5E19C4; // 0x4
};

struct FPlayerScore {
	int32_t PlayerId; // 0x0
	FString PlayerName; // 0x8
	int32_t score; // 0x18
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
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

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
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
	FString searchText; // 0xf0
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FMessageAttributeValue {
	FString StringValue; // 0x0
	TArray<FString> StringListValues; // 0x10
	FString DataType; // 0x20
};

struct FObjectRankData {
	FString Debug_Description; // 0x8
	TMap<EObjectRankPointType, FIntPair> ObjectActionRankScoreInfo; // 0x18
};

struct FPutMetricDataRequest {
	FString Namespace; // 0x0
	TArray<FMetricDatum> MetricData; // 0x10
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FDescribeMetricFiltersResult {
	TArray<FMetricFilter> MetricFilters; // 0x0
	FString NextToken; // 0x10
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FS_LandmarkDialogueByState {
	E_LandmarkState State_9_79A5C7984D4BD5D6E23F1B98AB9CBD16; // 0x0
	TArray<FS_Dialogue> Dialogue_13_14D366C9481AE486775E9CB4C8CFEA06; // 0x8
	USoundBase* Sound_8_A537D699448D071222829FB978C4DB8E; // 0x18
	float Pitch_6_DBA9E8FD45A9C9200BF536ADD6608A41; // 0x20
};

struct FIntegerParameterUIData {
	FString Name; // 0x0
	FMutableParamUIMetadata ParamUIMetadata; // 0x10
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FDeleteAlarmsRequest {
	TArray<FString> AlarmNames; // 0x0
};

struct FAnimNode_MirrorCS {
	EAxis MirrorAxis; // 0xc8
	bool CompletlySymmetrical; // 0xc9
	FString Substring_A; // 0xd0
	FString Substring_B; // 0xe0
};

struct FAkCommonInitializationSettingsWithSampleRate {
	uint32_t SampleRate; // 0x60
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FInvitedTeamInfo {
	ASurvivalPlayerState* TeamLeader_PS; // 0x0
	FString InvitedTeam_ID; // 0x8
};

struct FRandomItemGenerate {
	TArray<FItemCodeValue> GuaranteedGenerateItem; // 0x8
	int32_t RandomlyGenerateMinCount; // 0x18
	int32_t RandomlyGenerateMaxCount; // 0x1c
	TArray<FItemWeight> RandomlyGenerateItem; // 0x20
	bool AffectResourceMultiply; // 0x30
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FS_BuildPartArray {
	TArray<ABP_BuildPartBase_C*> BuildPart_4_5BC73E8B4489151E6D02758F728A1539; // 0x0
};

struct FS_IntFloatMap {
	TMap<int32_t, float> NotifyInterval_6_FCE81D214157BCDF5CBDE4ACEBA8F2A0; // 0x0
};

struct FGameplayTagTableRow {
	FName Tag; // 0x8
	FString DevComment; // 0x10
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

struct FHeaderRowStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FThrobberSettings {
	int32_t NumberOfPieces; // 0x0
	bool bAnimateHorizontally; // 0x4
	bool bAnimateVertically; // 0x5
	bool bAnimateOpacity; // 0x6
	FSlateBrush Image; // 0x8
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FLowEntryRegexMatch {
	int32_t MatchNumber; // 0x0
	int32_t BeginIndex; // 0x4
	int32_t EndIndex; // 0x8
	FString Match; // 0x10
	TArray<FLowEntryRegexCaptureGroup> CaptureGroups; // 0x20
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry RuntimeEntries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0x140
	TArray<FLinearColor> VectorValues; // 0x150
	TArray<UTexture*> TextureValues; // 0x160
	TArray<UFont*> FontValues; // 0x170
	TArray<int32_t> FontPageValues; // 0x180
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190
};

struct FTeamMemberInfo {
	ASurvivalPlayerState* Member_PS; // 0x0
	FString Member_ID; // 0x8
	bool bIsLeader; // 0x18
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FMachinArmAbilitySub {
	FText SubcategoryName; // 0x8
	UTexture2D* BackgroundImage; // 0x20
	int32_t sortOrder; // 0x28
	TArray<FMachinArmAbilityItem> AbilityList; // 0x30
};

struct FUserSessionInfo {
	FString UserID; // 0x0
	FString LastNickname; // 0x10
	float AliveTime; // 0x20
	FVector LastDeadLocation; // 0x24
	TArray<FIntPair> UnlockedRadiogram; // 0x30
	TArray<FQuickSlotInfo> QuickSlotInof_Preset1; // 0x40
	TArray<FQuickSlotInfo> QuickSlotInof_Preset2; // 0x50
	TMap<char, FIntPairArray> UserActionHistory; // 0x60
	float AccumulatedSurvivalTime; // 0xb0
	int32_t TerraPoint; // 0xb4
	bool bIsUnlockedEscapeCode; // 0xb8
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FNPCShieldInfo {
	UStaticMesh* Shield; // 0x8
	UParticleSystem* BrokenEffect; // 0x10
	float ShieldDurability; // 0x18
	TArray<UObject*> MultiplyDamageWeapon; // 0x20
	TArray<float> MultiplyDamageToShield; // 0x30
};

struct FS_FieldNPC_SpawnQueueInfo {
	int32_t UID_15_6DA85820402C493116B7DB88EA41F347; // 0x0
	float SpawnTime_13_D795DE464776F1FC01160BBB0F5E19C4; // 0x4
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
	float WireThickness; // 0x50
};

struct FA2CSPose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
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

struct FDoNNavigationQueryParams {
	float QueryTimeout; // 0x0
	bool bFlexibleOriginGoal; // 0x4
	bool bSkipOptimizationPass; // 0x5
	int32_t MaxOptimizerSweepAttemptsPerNode; // 0x8
	bool bPreciseDynamicCollisionRepathing; // 0xc
	bool bIgnoreDynamicCollisionRepathingForDirectGoals; // 0xd
	float CollisionShapeInflation; // 0x10
	bool bForceRescheduleQuery; // 0x14
};

struct FDeleteAnomalyDetectorRequest {
	FString Namespace; // 0x0
	FString MetricName; // 0x10
	TArray<FDimension> Dimensions; // 0x20
	FString Stat; // 0x30
};

struct FS_RadiogramUnlockCondition {
	E_UserActionType ActionType_8_650872D44972CEFB8376C4BC0E98C8EF; // 0x0
	int32_t TargetUID_9_993B63A44454AC00A5E634AF37AD2B94; // 0x4
	int32_t Count_10_191085054AC4230B99995F90E48B1C51; // 0x8
};

struct FMetricDatum {
	FString MetricName; // 0x0
	TArray<FDimension> Dimensions; // 0x10
	FDateTime Timestamp; // 0x20
	float Value; // 0x28
	FStatisticSet StatisticValues; // 0x2c
	TArray<float> Values; // 0x40
	TArray<float> Counts; // 0x50
	EStandardUnit Unit; // 0x60
	int32_t StorageResolution; // 0x64
};

struct FEnableInsightRulesResult {
	TArray<FPartialFailure> Failures; // 0x0
	FResponseMetadata ResponseMetadata; // 0x10
};

struct FPrecomputedLightInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
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

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FConeConstraint {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FMeeleAttackType {
	float Damage; // 0x0
	TArray<FName> CheckBoneArray; // 0x8
	float CheckRange; // 0x18
	float DamageCoolTime; // 0x1c
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FNiagaraUserRedirectionParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FWave_4 {
	float  mplitude_Σ3_26_AC647E804AD8FF66DC479DBEE451B83; // 0x0
	float  teepness_Σ3_27_312D7DB140157D72C96AFF8CF5729D6; // 0x4
	float  peed_Σ3_28_D915AA5E48130D8B0506EFA66AF7742; // 0x8
	float  avelength_Σ3_29_E256D8704B7E9B43D81E2D87CBD6575; // 0xc
	float  irection_Σ3_30_527457804880B58848E3D984BC09299; // 0x10
};

struct FMovieSceneColorSectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
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

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
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

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FTextAppearance {
	FSlateColor ColorAndOpacity; // 0x0
	FSlateFontInfo Font; // 0x28
	FVector2D ShadowOffset; // 0x80
	FLinearColor ShadowColorAndOpacity; // 0x88
	ETextJustify Justification; // 0x98
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FBlueprintInputActionDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
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

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FLetterboxLayoutSettings {
	bool bIsLoadingWidgetAtTop; // 0x0
	FWidgetAlignment TipAlignment; // 0x1
	FWidgetAlignment LoadingWidgetAlignment; // 0x3
	EHorizontalAlignment TopBorderHorizontalAlignment; // 0x5
	EHorizontalAlignment BottomBorderHorizontalAlignment; // 0x6
	FMargin TopBorderPadding; // 0x8
	FMargin BottomBorderPadding; // 0x18
	FSlateBrush TopBorderBackground; // 0x28
	FSlateBrush BottomBorderBackground; // 0xb0
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

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FBP_TimeOfDaySettings {
	FTimecode Time_3_5DBEF663412E8EC4122CA4895A6F6EA3; // 0x0
	TArray<AActor*> Actors_10_425ABEB44D93B790B529CDA83D7675CE; // 0x18
	FFloatValueFromDataTable Temperature_15_ADB25DCF49C6C4893F88079B3345F39E; // 0x28
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FCustomizedMaterialTexture2D {
	FName Name; // 0x0
	UTexture2D* Texture; // 0x8
};

struct FMovieSceneParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
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

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
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

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FMovieSceneAkAudioRTPCTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
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

struct FS_ConvertSlot {
	FString ID_2_7E76D2E741A2D7EDE00569A40E4FEE24; // 0x0
	float Current_15_0FF22EFE4E98B40133D29BAFB7E36CEB; // 0x10
	float Total_12_0726084A4E88424CBDA2F4850805F067; // 0x14
	int32_t Count_9_3F77FA3B41BE63A1D1F8708FD1BB6A30; // 0x18
	int32_t Index_11_04BAA7D340B683955785AFB5E91BE6BD; // 0x1c
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FWeaponAttachmentForeGrip {
	FWeaponAttachmentAbility BaseAbility; // 0x8
	float RecoilMultiply; // 0xc0
	float ADSSpeedMultiply; // 0xc4
	UAnimSequenceBase* GripAnim; // 0xc8
};

struct FS_FunctionalitySave {
	FS_InventorySave Fuel_45_5948430341D4061BD7AEC089864B2071; // 0x0
	FS_InventorySave Convert_46_777CB50647C4B75E2BDEF5B17A514129; // 0x40
	FS_InventorySave Output_47_B753EACB4AD02BC1980F95891E95ADDC; // 0x80
	bool SwitchedOn_25_D5AA204948BE36B005A3E2A4A360925B; // 0xc0
	float ChargedEnergy_34_D5EC4272420285E926443ABA1A15F1C3; // 0xc4
	TArray<FS_CraftingSlot> CraftingListing_52_2687E1964246675530B271A50808FE35; // 0xc8
	float EMPReleaseTime_55_75A6A0FF4466C26B4F984DAD9B1A1698; // 0xd8
	TArray<bool> BoolSaveParameter_58_8BEE8F924AF22D078442D394813A54AB; // 0xe0
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

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
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

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FDedicateServerHeartBeat {
	FString SenderIP; // 0x0
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
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

struct FBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FItemWeight {
	int32_t Weight; // 0x0
	FItemCodeValue Item; // 0x8
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FRadialDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FMetOccupyInfo {
	EMetSign Sign; // 0x0
	bool Occupyed; // 0x1
	float ServerPrograss; // 0x4
	bool FailOccupy; // 0x8
	float FailTime; // 0xc
};

struct FAimConstraintDescription {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FLogStream {
	FString LogStreamName; // 0x0
	float CreationTime; // 0x10
	float FirstEventTimestamp; // 0x14
	float LastEventTimestamp; // 0x18
	float LastIngestionTime; // 0x1c
	FString UploadSequenceToken; // 0x20
	FString Arn; // 0x30
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
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

struct FMetric {
	FString Namespace; // 0x0
	FString MetricName; // 0x10
	TArray<FDimension> Dimensions; // 0x20
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
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

struct FSQSListQueuesRequest {
	FString QueueNamePrefix; // 0x0
	FString NextToken; // 0x10
	int32_t MaxResults; // 0x20
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

struct FVolumeControlStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FDescribeQueryDefinitionsResult {
	TArray<FQueryDefinition> QueryDefinitions; // 0x0
	FString NextToken; // 0x10
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FTimerHandle {
	uint64_t handle; // 0x0
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FWorkshopItemUpdateInfo {
	EItemUpdateStatusBP Status; // 0x20
};

struct FItemCodeValue {
	FDataTableRowHandle Item; // 0x0
	int32_t Count; // 0x10
};

struct FBakedDataInfo {
	FName Name; // 0x0
	int32_t Size; // 0x8
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
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

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
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

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FTagLogGroupRequest {
	FString LogGroupName; // 0x0
	TMap<FString, FString> Tags; // 0x10
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FCustomizableObjectVectorParameterValue {
	FString ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x10
	FString UID; // 0x20
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FDonNavVoxelXYZ {
	TArray<FDonNavVoxelX> X; // 0x0
};

struct FS_UserCustomizeInfo {
	FName Face_12_02FE2ACB4B460582F94D8E93D37C5085; // 0x0
	FName Hair_9_E47DDA1743EE6E5B2BEB448CFD8E2E5F; // 0x8
	FLinearColor SkinColor_7_1AA73A6044E477F253853295E3DA34A8; // 0x10
	FLinearColor HairColor_8_8C68ABCC4928B4862C840B8249AD0051; // 0x20
	FName MachineArm_15_21A74EB04E07F94769E6809638ACB725; // 0x30
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FMovieScene3DRotationKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FAnimNotifyInfo {
	FName NotifyName; // 0x0
	float TriggerTime; // 0x8
	USVAnimNotify* AnimNotify; // 0x10
	bool IsTriggerd; // 0x18
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FS_SaveVehicle {
	int32_t HP_6_A0149FDB4B3E1FB0028D5695F2FECC26; // 0x0
	FTransform Location_2_B8B64608462B9E4B0ED34AB56AD113FC; // 0x10
	int32_t Battery_10_172FB7D647304183E50AC98EDB998412; // 0x40
	int32_t VariableMaxHealth_13_A56BC7E54349EDBEFB743DADFD2B4993; // 0x44
	bool IsActivateVehicle_15_F5E4C07A4081BFCDA28FB6984881CCC2; // 0x48
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FStaticTerrainLayerWeightParameter {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FFloatValueFromDataTable {
	float Value; // 0x20
};

struct FMorphTargetVertexIndex {
	int32_t MorphIndex; // 0x0
	int32_t VertexIndex; // 0x4
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
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

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FS_MachineArmAbilityInfo {
	FText MainAbilityCategoryName_13_A415773F4E5B089225D5619D0D3D3DB6; // 0x0
	TArray<FMachinArmAbilitySub> SubAbilityCategory_12_0D551AF34CBD60C535205E966BC9B024; // 0x18
	int32_t SortOrder_10_9A1AF4A8449DB395194C77A33C00CB76; // 0x28
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FAkCommunicationSettingsWithCommSelection {
	EAkCommSystem CommunicationSystem; // 0x20
};

struct FDisassociateKmsKeyRequest {
	FString LogGroupName; // 0x0
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FS_SaveItem {
	FS_SaveInv ItemID_8_45ED17B64A514C45F34DCF933D53BC49; // 0x0
	FTransform ItemLocation_9_0FB12F7F47B2FE330B605488B032F71C; // 0x30
	FString ItemName_10_E6FA40FF492AA3CFCC67B8914882C0EE; // 0x60
	FS_SaveWeaponInvs ItemWeapon_16_3D0455574002389C8933CE964036E3B9; // 0x70
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

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FBT_FlyToTarget_DebugParams {
	bool bVisualizePawnAsVoxels; // 0xc
};

struct FTipSettings {
	TArray<FText> TipText; // 0x0
	FTextAppearance Appearance; // 0x10
	float TipWrapAt; // 0xb0
	bool bSetDisplayTipTextManually; // 0xb4
	float UpdateTime; // 0xb8
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
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

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
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

struct FS_UserUIDWithNick {
	FString Nickname_3_B44C8ED8422952B5074470A9F3B7E90F; // 0x0
	FString UID_4_FA16B80247D98D693424B690EF855B51; // 0x10
};

struct FMovieScene3DLocationKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FSAudioUpdateStruct {
	UAudioComponent* AudioEmittor_5_EC37367D413769EBC8347085400A4A09; // 0x0
	EAudioType AudioType_4_3CDAA07D4BB9A7FC4028B7A4994A497E; // 0x8
	float OriginalVolumeMultiplier_11_352BE51B46F8B38B523630B64B21A772; // 0xc
};

struct FComboBoxStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
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

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FTerraShopDataInfo {
	ETerraShopMerchandiseType MechandiseType; // 0x8
	FItemCodeValue Item; // 0x10
	int32_t PurchaseCost; // 0x28
	int32_t PurchasableCount; // 0x2c
	float Weight; // 0x30
};

struct FEMPTowerInfo {
	int32_t TowerUID; // 0x0
	FVector Location; // 0x4
	bool IsActivate; // 0x10
	bool IsForward; // 0x11
	float ExtendedServerTime; // 0x14
};

struct FSearchedLogStream {
	FString LogStreamName; // 0x0
	bool bSearchedCompletely; // 0x10
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FRawDistributionFloat {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
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

struct FNickNameTable {
	FString NickName; // 0x8
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FOverriddenValue {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FLinearConstraint {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
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

struct FChangeMessageVisibilityBatchRequestEntry {
	FString ID; // 0x0
	FString ReceiptHandle; // 0x10
	int32_t VisibilityTimeout; // 0x20
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FDashboardValidationMessage {
	FString DataPath; // 0x0
	FString Message; // 0x10
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FS_SkillStruct {
	TArray<FS_SkillActivationCondition> ActivationCondition_18_EF59131F494FB090638A178166A3A7B1; // 0x0
	TArray<FS_SkillTask> SkillTask_19_4534578841B283E5D651F7BD4CADFBEC; // 0x10
	float CoolTime_14_276B78054EF6A583699B8696A6D938E5; // 0x20
	E_SkillType SkillType_23_277CB71E48149DD220C45496272AEE31; // 0x24
	int32_t SkillGrade_28_BDBACB574B8E77B527F63FB077D831EA; // 0x28
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FSendMessageBatchResultEntry {
	FString ID; // 0x0
	FString MessageId; // 0x10
	FString MD5OfMessageBody; // 0x20
	FString MD5OfMessageAttributes; // 0x30
	FString MD5OfMessageSystemAttributes; // 0x40
	FString SequenceNumber; // 0x50
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FCreateLogStreamRequest {
	FString LogGroupName; // 0x0
	FString LogStreamName; // 0x10
};

struct FAnimationTransitionBetweenStates {
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

struct FPBUF_sv_AuthGetSessionKeyRes {
	FString session_key; // 0x0
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FMovieSceneObjectPathChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FAkMidiCc {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
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

struct FDescribeDestinationsResult {
	TArray<FDestinationCloud> Destinations; // 0x0
	FString NextToken; // 0x10
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

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FAkMidiChannelAftertouch {
	char Value; // 0x2
};

struct FSpotEventData {
	bool bEnabled; // 0x0
	FText Name; // 0x8
	FText Description; // 0x20
	bool ShowInMinimap; // 0x38
	UEventActivationCondition* Condition; // 0x40
	USpotEventLocation* Location; // 0x48
	USpotEventTypeData* EventTypeData; // 0x50
	float LastEvaluationTime; // 0x58
	ASpotEventBase* ActiveSpotEvent; // 0x60
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FS_TerraPointTransformData {
	int32_t Point_2_842507674383ACC58A9A49989D1351EC; // 0x0
};

struct FQueryStatistics {
	FString RecordsMatched; // 0x0
	FString RecordsScanned; // 0x10
	FString BytesScanned; // 0x20
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FDragonData_MultiInput {
	FName Start_Spine; // 0x0
	FName Pelvis; // 0x8
	TArray<FDragonData_FootData> FeetBones; // 0x10
};

struct FAnimNode_StateMachine {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FSocketDragonReference {
	FName SocketName; // 0x30
};

struct FCircularThrobberSettings {
	int32_t NumberOfPieces; // 0x0
	float Period; // 0x4
	float Radius; // 0x8
	FSlateBrush Image; // 0x10
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FWave_5 {
	float  mplitude_Σ4_31_AC647E804AD8FF66DC479DBEE451B83; // 0x0
	float  teepness_Σ4_32_312D7DB140157D72C96AFF8CF5729D6; // 0x4
	float  peed_Σ4_33_D915AA5E48130D8B0506EFA66AF7742; // 0x8
	float  avelength_Σ4_34_E256D8704B7E9B43D81E2D87CBD6575; // 0xc
	float  irection_Σ4_35_527457804880B58848E3D984BC09299; // 0x10
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FSetUserVoteOnWorkshopItemResult {
	bool bVoteUp; // 0x10
};

struct FStartQueryRequest {
	FString LogGroupName; // 0x0
	TArray<FString> LogGroupNames; // 0x10
	FString StartTime; // 0x20
	FString EndTime; // 0x30
	FString QueryString; // 0x40
	int32_t Limit; // 0x50
};

struct FRMRemoteResponse_GetIngameNotice {
	FString Result; // 0x10
	TArray<FString> notice; // 0x20
	TArray<float> CycleSec; // 0x30
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FPBUF_sv_VoiceTalkTokenReq {
	FString sub; // 0x0
	FString F; // 0x10
	FString iss; // 0x20
	FString vxa; // 0x30
	FString T; // 0x40
	int32_t Exp; // 0x50
};

struct FS_ResourceBreakablePart {
	float ResourcesRatio_8_3C4929804552DFEBED47FA94E990087F; // 0x0
	FName Bone_6_80A6B95049EB2A16CDEE29A6C3AC795C; // 0x4
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
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

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
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

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
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

struct FWave_3 {
	float  mplitude_Σ2_21_AC647E804AD8FF66DC479DBEE451B83; // 0x0
	float  teepness_Σ2_22_312D7DB140157D72C96AFF8CF5729D6; // 0x4
	float  peed_Σ2_23_D915AA5E48130D8B0506EFA66AF7742; // 0x8
	float  avelength_Σ2_24_E256D8704B7E9B43D81E2D87CBD6575; // 0xc
	float  irection_Σ2_25_527457804880B58848E3D984BC09299; // 0x10
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FDeleteMetricFilterRequest {
	FString LogGroupName; // 0x0
	FString FilterName; // 0x10
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
	FVector LastOutOfRangeLocationCheck; // 0x14
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FMovieSceneGeometryCacheSectionTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FS_ConditionInfo {
	UBP_ConditionBase_C* CondtionClass_5_1D53EA884E9DFE8B726AB7A293390DA9; // 0x0
	float Finishtime_4_336D85164983DE3E2AB3569C2CB0DC8E; // 0x8
};

struct FResourceInfo {
	FString Name; // 0x8
	int32_t Resources; // 0x18
	TMap<int32_t, FHarverstResource> HarvestInfo; // 0x20
	bool ImmediatleyHarvest; // 0x70
	EResourceGroupType ResourceGroup; // 0x71
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
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

struct FAIDataProviderIntValue {
	int32_t DefaultValue; // 0x30
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FResponseMetadata {
	FString RequestId; // 0x0
};

struct FMovieScene3DScaleKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FMovieSceneMaterialParameterCollectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FTwistConstraint {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FSQSAddPermissionRequest {
	FString QueueUrl; // 0x0
	FString Label; // 0x10
	TArray<FString> AWSAccountIds; // 0x20
	TArray<FString> Actions; // 0x30
};

struct FCompositeAlarm {
	bool bActionsEnabled; // 0x0
	TArray<FString> AlarmActions; // 0x8
	FString AlarmArn; // 0x18
	FDateTime AlarmConfigurationUpdatedTimestamp; // 0x28
	FString AlarmDescription; // 0x30
	FString AlarmName; // 0x40
	FString AlarmRule; // 0x50
	TArray<FString> InsufficientDataActions; // 0x60
	TArray<FString> OKActions; // 0x70
	FString StateReason; // 0x80
	FString StateReasonData; // 0x90
	FDateTime StateUpdatedTimestamp; // 0xa0
	EStateValue StateValue; // 0xa8
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FItemScalableFloat {
	float Value; // 0x0
	FCurveTableRowHandle Curve; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FMovieSceneBoolPropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FRawDistributionVector {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FMovieSceneBoolChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
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

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FSQSGetQueueAttributesRequest {
	FString QueueUrl; // 0x0
	TArray<EQueueAttributeName> AttributeNames; // 0x10
};

struct FPutResourcePolicyResultLogs {
	FResourcePolicy ResourcePolicy; // 0x0
};

struct FResourceBatchGroupData {
	FString GroupName; // 0x0
	int32_t Distance; // 0x10
	FString SpawnResourceActorPath; // 0x18
	AActor* SpawnResourceActor; // 0x28
	TArray<bool> BatchClipingArea; // 0x30
	TArray<AActor*> ExclusiveActors; // 0x40
	EBatchOverlapOption BatchOverlapOption; // 0x50
	FBoxSphereBounds Bound; // 0x54
};

struct FLandmassFalloffSettings {
	EBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FLobbyPlayerStateInfo {
	bool bIsReady; // 0x0
	int32_t Ping; // 0x4
	int32_t NetID; // 0x8
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FS_ItemDetails {
	FString Name_13_E2702B14484C4D698BC681BA68F49728; // 0x0
	FString Description_17_602B846C4FB89498AF5E7AB6328BFB66; // 0x10
	float Weight_71_80D59337480616F43CE22392BA591952; // 0x20
	E_ItemCategorys Catagory_68_6E3096244E096D0DE8ABA4B7A76BDC9E; // 0x24
	E_EquipmentCategorys EquipmentSlot_96_19FFD6504B3E4D99B5DD2B8905F2145E; // 0x25
	bool Holdable_99_ABF13FC043BC20602F866AAD5D7CA0D7; // 0x26
	AHoldableBase* HoldableClass_187_13D858EE42AAE5DB650B6ABF93BFEA7C; // 0x28
	BP_MasterAttachment_C* AttachmentClass_119_2376753C44B41959460098A6FB10B476; // 0x30
	UAnimMontage* TPEquipMontage_106_279D7B92465D07D8FCD056A1B8D3E065; // 0x38
	UAnimMontage* FPEquipMontage_109_7058C72645A95C081979369861E89467; // 0x40
	bool Droppable_61_0C5A35E14536E675A317B3873F952931; // 0x48
	bool Stackable_63_3013B4F945860F8ED5B586BD66FA9E2D; // 0x49
	int32_t MaxStack_62_49B71A03426D3A2BFFB1F88F4C313DA9; // 0x4c
	int32_t InventorySlots_67_79D1EAB84E86CA9C920054BAAA8C5714; // 0x50
	FString UseText_91_AB6B623340C685081FC06AADCB290476; // 0x58
	float FuelTime_142_20C69CAD440423F87384F1B32B235DA6; // 0x68
	UTexture2D* Icon_60_7648EF894DE5DC05893A6A92E3DE8D28; // 0x70
	UStaticMesh* WorldMesh_59_7444C39B45931133AB5875A654072A5A; // 0x78
	USkeletalMesh* EquippedMesh_92_18E57AC5491B8222B0CEE6AC4E6AC9A0; // 0x80
	USkeletalMesh* FP_EquippedMesh_156_5E718198498D8BA8190B6D845959A569; // 0x88
	FTransform MeshWorldOffset_122_C7831601440D7EC62305E8A0A25DF967; // 0x90
	TArray<FItemCodeValue> Contains_188_11E14AB54E292C2E71D7A2B3CC4D2E06; // 0xc0
	TMap<E_ItemAction, USoundBase*> Sounds_138_392D1F434D9A8246A7B7A594CEE29902; // 0xd0
	float PickUpTime_146_A4405DC54967F650D060CFBCC6618430; // 0x120
	float MaxWeightAddition_149_20D1F36B4DBC40E1A5AC6D973C5AD462; // 0x124
	FS_ConsumeInfo ConsumeInfo_170_714B7F914D80D996197D78B085E99C32; // 0x128
	bool bAddQuickSlot_153_CF55D6FC4371828F54BFC09DCB0D02D3; // 0x1a8
	bool bAbilityItem_158_B1D2CBF147926989DF6F9D9E6936C9B7; // 0x1a9
	E_ItemCategory_Display Category_Display_161_B5157F13425384EBDB3371A8941B2DD5; // 0x1aa
	bool IsDestroable_176_4BC596AB487E0CF8D8B094BEAD9EA9FF; // 0x1ab
	float EnergyTransformValue_179_FB4CC5D74F82846BEB2D3A9F5F28E2E5; // 0x1ac
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

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FGetLogEventsRequest {
	FString LogGroupName; // 0x0
	FString LogStreamName; // 0x10
	FString StartTime; // 0x20
	FString EndTime; // 0x30
	FString NextToken; // 0x40
	int32_t Limit; // 0x50
	bool bStartFromHead; // 0x54
};

struct FInputStruct {
	FString ActionName; // 0x0
	FKey Key; // 0x10
	FString KeyAsString; // 0x28
	char bShift : 1; // 0x38
	char bCtrl : 1; // 0x38
	char bAlt : 1; // 0x38
	char bCmd : 1; // 0x38
};

struct FSQSMessage {
	FString MessageId; // 0x0
	FString ReceiptHandle; // 0x10
	FString MD5OfBody; // 0x20
	FString Body; // 0x30
	TMap<EMessageSystemAttributeName, FString> Attributes; // 0x40
	FString MD5OfMessageAttributes; // 0x90
	TMap<FString, FMessageAttributeValue> MessageAttributes; // 0xa0
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

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FQueryWorkshopForUserItemsResult {
	FSteamUGCQueryParameterUser queryParams; // 0x30
};

struct FRange {
	FDateTime StartTime; // 0x0
	FDateTime EndTime; // 0x8
};

struct FNiagaraVariable {
	TArray<char> VarData; // 0x10
};

struct FAnimNode_BlendListByEnum {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FS_NPCSpawnInfoLandmarkStatus {
	ELMStatus Status_12_25CF6761451DD4C2AEF94AB521E9561C; // 0x0
	int32_t Phase_13_2127A2164AFE0316498B26B68885FDC3; // 0x4
	TMap<FName, int32_t> SpawnMonsters_14_4EAF7F044823441C32B24A995A7A150B; // 0x8
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FRealCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FDescribeSubscriptionFiltersResult {
	TArray<FSubscriptionFilter> SubscriptionFilters; // 0x0
	FString NextToken; // 0x10
};

struct FNPCWeaponInfo {
	UStaticMesh* Weapon; // 0x8
};

struct FHyperlinkStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
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

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
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

struct FAnimNode_TwistCorrectiveNode {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FCreateLogGroupRequest {
	FString LogGroupName; // 0x0
	FString KmsKeyId; // 0x10
	TMap<FString, FString> Tags; // 0x20
};

struct FAnimNode_PoseSnapshot {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
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

struct FStaticMaterialLayersParameter {
	FMaterialLayersFunctions Value; // 0x28
};

struct FDescribeLogStreamsResult {
	TArray<FLogStream> LogStreams; // 0x0
	FString NextToken; // 0x10
};

struct FDeleteSubscriptionFilterRequest {
	FString LogGroupName; // 0x0
	FString FilterName; // 0x10
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FSQSGetQueueUrlResult {
	FString QueueUrl; // 0x0
	FSQSResponseMetadata ResponseMetadata; // 0x10
};

struct FPointDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FAnimNode_CustomProperty {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FAnimNode_ConvertComponentToLocalSpace {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FStaticComponentMaskParameter {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
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

struct FDragonData_Overrided_Location_Data {
	TArray<FDragonData_SingleArmElement> Arm_TargetLocation_Overrides; // 0x0
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
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

struct FMovieScene3DTransformTemplateData {
	FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0
	FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0
	FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0
	FMovieSceneFloatChannel ManualWeight; // 0x5a0
	EMovieSceneBlendType BlendType; // 0x640
	FMovieSceneTransformMask Mask; // 0x644
	bool bUseQuaternionInterpolation; // 0x648
};

struct FTerraShopMerchandise {
	FTerraShopDataInfo Merchandise; // 0x0
	int32_t PurchaseCount; // 0x38
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
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

struct FInputLogEvent {
	FString Timestamp; // 0x0
	FString Message; // 0x10
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FAkMidiNoteOnOff {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FLogGroup {
	FString LogGroupName; // 0x0
	float CreationTime; // 0x10
	int32_t RetentionInDays; // 0x14
	int32_t MetricFilterCount; // 0x18
	FString Arn; // 0x20
	float StoredBytes; // 0x30
	FString KmsKeyId; // 0x38
};

struct FAwsCloudWatchClientConfiguration {
	FString UserAgent; // 0x0
	ECloudWatchScheme Sceheme; // 0x10
	FString region; // 0x18
	bool bUseDualStack; // 0x28
	int32_t MaxConnections; // 0x2c
	int32_t HTTP_RequestTimeoutMs; // 0x30
	int32_t RequestTimeoutMs; // 0x34
	int32_t ConnectTimeoutMs; // 0x38
	bool bEnableTcpKeepAlive; // 0x3c
	int32_t TcpKeepAliveIntervalMs; // 0x40
	int32_t LowSpeedLimit; // 0x44
	FString EndPointOverride; // 0x48
	ECloudWatchScheme ProxyScheme; // 0x58
	FString ProxyHost; // 0x60
	int32_t ProxyPort; // 0x70
	FString ProxyUsername; // 0x78
	FString ProxyPassword; // 0x88
	FString ProxySSL_CertPath; // 0x98
	FString ProxySSL_CertType; // 0xa8
	FString ProxySSL_KeyPath; // 0xb8
	FString ProxySSL_KeyType; // 0xc8
	FString ProxySSL_KeyPassword; // 0xd8
	bool bVerifySSL; // 0xe8
	FString CaPath; // 0xf0
	FString CaFile; // 0x100
	ECloudWatchFollowRedirectsPolicy FollowRedirects; // 0x110
	bool bDisableExpectHeader; // 0x111
	bool bEnableClockSkewAdjustment; // 0x112
	bool bEnableHostPrefixInjection; // 0x113
	bool bEnableEndpointDiscovery; // 0x114
	FString ProfileName; // 0x118
};

struct FLiveLinkCameraFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FS_WeaponInventory {
	int32_t Index_2_00D34E2C4CD71B7ABE912C978BF34BF5; // 0x0
	int32_t Ammo_4_7983625A43CD6FB73945EFA6D1469999; // 0x4
	FS_WeaponAttachements Attachments_16_B02306C84E96756239FADF801CED8C81; // 0x8
	Udelete2_C* Inventory_19_A5D72F70404D78F4D8C7F1A3E07CC601; // 0x50
};

struct FAnimNode_Inertialization {
	FPoseLink Source; // 0x10
};

struct FTTPropertyTrack {
	FName PropertyName; // 0x18
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FGetMetricStatisticsRequest {
	FString Namespace; // 0x0
	FString MetricName; // 0x10
	TArray<FDimension> Dimensions; // 0x20
	FDateTime StartTime; // 0x30
	FDateTime EndTime; // 0x38
	int32_t Period; // 0x40
	TArray<EStatistic> Statistics; // 0x48
	TArray<FString> ExtendedStatistics; // 0x58
	EStandardUnit Unit; // 0x68
};

struct FS_SkillActivationCondition {
	UBP_SkillAcitvationConditionBase_C* Condition_3_4AA95F1B487B791543E4C7B42980B5F7; // 0x0
	FS_ConditionParam Param_22_E12C73B64C52E7B86DFCB8A396EC21D0; // 0x8
};

struct FLogGroupField {
	FString Name; // 0x0
	int32_t Percent; // 0x10
};

struct FS_RadiogramGuide {
	FText Title_11_52588AD84EAB8B71356C3AB965DCE868; // 0x0
	UUserWidget* GuideWidget_33_B6A25A4D463945B0E3F74E8D0A77FEA2; // 0x18
	TArray<FS_RadiogramUnlockCondition> UnlockingCondition_31_13EB0FA04B75FFFFC7CACE84EC3C5487; // 0x20
	bool IsCheckTypeOR_35_6B25C0F54AFA15AA9BC0F88E07B9239C; // 0x30
	FText Description_25_B10621674094474473DA27A43E87AFF9; // 0x38
	FText MainCategoryName_55_2F4C38CA400AB2F1B23649B57D512BBC; // 0x50
	FString MainCategoryKey_51_9B772DD64AF96E9977A17BBBC09BBC34; // 0x68
	FText SubCategoryName_54_60ADB37B49F735906214B7A27BAA77BA; // 0x78
	FString SubCategoryKey_53_FA843C714F90DB5FEBD285BD7D8757BC; // 0x90
	FText UnlockHint_45_063A629249B3992A3CB8009CDC7CC725; // 0xa0
	UTexture2D* Thumbnail_48_A8E4C20740EC6241EC0AA0AD60E83AB0; // 0xb8
	bool IsSideQuest_59_85ED634D4007FAB3DD0BFAB959B6C597; // 0xc0
	FString ClearDialogName_64_071C7D894BD59B5E55E574ABE72003EB; // 0xc8
	E_RadiogramDetailType RadiogramType_79_020F7A3D4B3F6B0672B3FE88999F2608; // 0xd8
	int32_t UID_78_729301914D4F125B7FB85093B575DCEB; // 0xdc
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
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

struct FNiagaraSystemScalabilityOverride {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FAnimNode_DragonControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
};

struct FPutInsightRuleRequest {
	FString RuleName; // 0x0
	FString RuleState; // 0x10
	FString RuleDefinition; // 0x20
	TArray<FTagCloudWatch> Tags; // 0x30
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

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
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

struct FTagCloudWatchResourceRequest {
	FString ResourceARN; // 0x0
	TArray<FTagCloudWatch> Tags; // 0x10
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FLiveLinkLightBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FS_PlayerInfoSummary {
	TArray<int32_t> MemoryChip_16_FA7BDA2948F9B5A56A60C5AC0BE4E2B5; // 0x0
	TArray<int32_t> Protocol_13_493F1011400C611A6697A5B0928E981A; // 0x10
	int32_t Head_25_81676C81436032E28D5795880375BB45; // 0x20
	int32_t Chest_26_EFEA715045656866733763B7AC2B3A95; // 0x24
	int32_t Leg_27_E5292E864A0B8BCEC330E5A812AFB043; // 0x28
	int32_t Feet_28_675952E74C1BB8D9555337AFA43808C4; // 0x2c
	int32_t SurvivalDay_32_56792581421B13BE4FBED69C04EB0BD3; // 0x30
	FString Name_35_CA2445674702F68D89A13F9029832AA4; // 0x38
	FS_UserCustomizeInfo CustomizeInfo_38_CE0BA9EC4F8309DE968114BB074D67B9; // 0x48
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

struct FQueryWorkshopForItemDetailsResult {
	FSteamUGCQueryParameterDetails queryParams; // 0x30
};

struct FGetMetricWidgetImageResult {
	FResponseMetadata ResponseMetadata; // 0x0
	UTexture2D* Texture; // 0x10
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FAnimNode_Root {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
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

struct FTTVectorTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
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

struct FGetAppdependencyResult {
	TArray<FSteamAppId> dependencyApps; // 0x10
	bool bAllAppDependenciesReturned; // 0x20
};

struct FMovieSceneMarginSectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FLandmarkSetupInfo {
	int32_t UID; // 0x8
	FText Name; // 0x10
	FText Discription; // 0x28
	FSlateBrush Icon; // 0x40
	FDataTableRowHandle ActiveTicket; // 0xc8
	ELandmarkEffectActionType ActionType; // 0xd8
	ALandmarkEffectBase* UpEffect; // 0xe0
	ALandmarkEffectBase* DownEffect; // 0xe8
	float ExpireTime; // 0xf0
	TArray<int32_t> ImportantDropList; // 0xf8
};

struct FExpandableAreaStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FPutDestinationRequest {
	FString DestinationName; // 0x0
	FString TargetArn; // 0x10
	FString RoleArn; // 0x20
};

struct FPlayerSteamProfile {
	FString Username; // 0x0
	FString SteamID; // 0x10
	UTexture2D* ProfilePicture; // 0x20
	bool bIsHost; // 0x28
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FMetricDataQuery {
	FString ID; // 0x0
	FMetricStat MetricStat; // 0x10
	FString Expression; // 0x60
	FString Label; // 0x70
	bool bReturnData; // 0x80
	int32_t Period; // 0x84
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

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FListTagsLogGroupRequest {
	FString LogGroupName; // 0x0
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FQueryWorkshopForAllItemsResult {
	FSteamUGCQueryParameterAll queryParams; // 0x30
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
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

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FItemGeneralInfo {
	FText Name; // 0x8
	EItemGrade Tier; // 0x20
	EItemCategoryType Type; // 0x21
	TMap<EItemActionType, USoundBase*> ActionSound; // 0x28
	FText DisplayCategory; // 0x78
	FText Desc; // 0x90
	bool bDropable; // 0xa8
	bool bStackable; // 0xa9
	int32_t MaxStack; // 0xac
	float CreateCondition; // 0xb0
	float MaxCondition; // 0xb4
	UTexture2D* Icon; // 0xb8
	UStaticMesh* WorldMesh; // 0xc0
	FTransform WorldMeshTransform; // 0xd0
	float DestroyTime; // 0x100
	float EnergyTransformValue; // 0x104
	char RadiogramOption; // 0x108
	FText MainGroupName; // 0x110
	FText SubGroupName; // 0x128
	int32_t RadiogramSortOrder; // 0x140
};

struct FAnimNode_BlendBoneByChannel {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FCreateExportTaskResult {
	FString TaskId; // 0x0
};

struct FPendingReleaseSkeletalMeshInfo {
	USkeletalMesh* SkeletalMesh; // 0x0
	double Timestamp; // 0x8
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FPBUF_sv_GameLogReq {
	FString Json; // 0x0
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FS_TutorialGoalDataArray {
	TArray<FS_TutorialGoalData> TutorialGoalDataArray_3_A4B9A2CE443DF0D1BA1EDC88204394DD; // 0x0
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FDonNavVoxelY {
	TArray<FDonNavigationVoxel> Z; // 0x0
};

struct FAnimNode_PoseByName {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FDoNNavigationQueryData {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> CollisionComponent; // 0x8
	FVector Origin; // 0x10
	FVector Destination; // 0x1c
	FDoNNavigationQueryParams queryParams; // 0x28
	TArray<FVector> PathSolutionOptimized; // 0x270
	EDonNavigationQueryStatus QueryStatus; // 0x280
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

struct FAnimNode_BlendListBase {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EBlendListTransitionType TransitionType; // 0x30
	EAlphaBlendOption BlendType; // 0x31
	bool bResetChildOnActivation; // 0x32
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FAnimNode_TransitionResult {
	bool bCanEnterTransition; // 0x10
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

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FTakeHitInfo {
	float ActualDamage; // 0x0
	float HitTime; // 0x4
	UObject* DamageTypeClass; // 0x8
	TWeakObjectPtr<ASurvivalCharacterBase> PawnInstigator; // 0x10
	TWeakObjectPtr<AActor> DamageCauser; // 0x18
	int32_t DamageEventClassID; // 0x20
	char bKilled : 1; // 0x24
	char EnsureReplicationByte; // 0x28
	FDamageEvent GeneralDamageEvent; // 0x30
	FPointDamageEvent PointDamageEvent; // 0x40
	FRadialDamageEvent RadialDamageEvent; // 0xf0
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

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FSimpleCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FGetLogGroupFieldsResult {
	TArray<FLogGroupField> LogGroupFields; // 0x0
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FLiveLinkBasicBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FS_InventorySave {
	TArray<FItemInventory> ItemData_13_25113CCD42F7F18C5CE15E996BF5484A; // 0x0
	TArray<FWeaponInventory> WeaponData_12_8FA90D2049078E6D6150CF82AFA107D0; // 0x10
	TArray<FConvertInventory> ConvertData_11_E61877754ADC69F987059A95013B9633; // 0x20
	TArray<FS_StorageInventoryLog> Log_17_C9F58E4F4594A2E932B5BC821D9AEF3B; // 0x30
};

struct FNavDataConfig {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FAnimNode_RefPose {
	ERefPoseType RefPoseType; // 0x10
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString Tooltip; // 0x10
};

struct FMovieSceneEventSectionData {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FDescribeAlarmsForMetricResult {
	TArray<FMetricAlarm> MetricAlarms; // 0x0
	FResponseMetadata ResponseMetadata; // 0x10
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
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

struct FCustomizableObjectMeshToMeshVertData {
	FVector4 PositionBaryCoordsAndDist; // 0x0
	FVector4 NormalBaryCoordsAndDist; // 0x10
	FVector4 TangentBaryCoordsAndDist; // 0x20
	uint16_t SourceMeshVertIndices[0x4]; // 0x30
	float Weight; // 0x38
	int16_t SourceAssetIndex; // 0x3c
	int16_t SourceAssetLodIndex; // 0x3e
};

struct FPBUF_sv_DediInfo {
	FString owning_id; // 0x0
	FString title; // 0x10
	FString Guid; // 0x20
	FString branch; // 0x30
	int32_t user_count; // 0x40
	FString ip_addr; // 0x48
	int32_t build_number; // 0x58
	int32_t ready; // 0x5c
	FString endtimestr; // 0x60
	int32_t max_user_count; // 0x70
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FS_ConsumeInfo {
	float Hunger_2_A79FC6804178F340482D59BABBD3CFA0; // 0x0
	float Thirst_4_1CA14B3D4CEAC939F7C98FA51A3E7CC9; // 0x4
	int32_t Health_13_0AA6CD934255EBAC5CE7738480240FCF; // 0x8
	float Stamina_8_8C1C2BAC4B6AC88965E304B84B60FDDD; // 0xc
	TMap<E_AbnormalStateType, float> AbnormalConditionRecover_21_E3B4BA0C47978E7155269C82B97A57D3; // 0x10
	bool bAbilityItem_12_73DA97024AAC41F4F24FD5A8A527FAF0; // 0x60
	TArray<UBP_ConditionBase_C*> AffectCondition_17_2F2307DF41B645409EA538B1E6DCEEF1; // 0x68
	bool ExceedItem_24_9AC02990432EF1FE44008E952460D40A; // 0x78
	bool AffectHealingFactor_26_7EF902B64A062BBB14F0C8929BD13565; // 0x79
	bool AffectSurvivalStatFactor_28_739E2A7046CB24B5F180288D6F707A67; // 0x7a
};

struct FSteamWorkshopItemDetails {
	EResultBP Result; // 0x0
	FSteamUGCItemId workshopItemID; // 0x8
	EWorkshopFileTypeBP fileType; // 0x10
	FSteamAppId appIdCreatingApp; // 0x14
	FSteamAppId appIdUsingApp; // 0x18
	FString title; // 0x20
	FString Description; // 0x30
	FUInt64 userIdItemCreator; // 0x40
	FDateTime timeStampCreated; // 0x48
	FDateTime timeStampUpdated; // 0x50
	FDateTime timeStampAddedToUserList; // 0x58
	ESteamItemVisibility Visibility; // 0x60
	bool bItemIsBanned; // 0x61
	bool bItemWasAcceptedByDevelopers; // 0x62
	bool bTagsTruncated; // 0x63
	TArray<FString> Tags; // 0x68
	FSteamUGCHandle primaryFileHandle; // 0x78
	FSteamUGCHandle previewImageHandle; // 0x80
	FString primaryFileCloudFilename; // 0x88
	int32_t primaryFileSize; // 0x98
	int32_t previewImageSize; // 0x9c
	FString websiteURL; // 0xa0
	int32_t votesUp; // 0xb0
	int32_t votesDown; // 0xb4
	float score; // 0xb8
	FUInt32 numChildren; // 0xbc
	FString previewUrl; // 0xc0
	TArray<FItemPreviewDetails> additionalPreviews; // 0xd0
	TArray<FSteamUGCItemId> childItemIds; // 0xe0
	TArray<FSteamKeyValuePair> keyValueTags; // 0xf0
	FString MetaData; // 0x100
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FS_EquipmentInfo {
	E_EquipmentCategorys MainEquipCategory_64_0E0EA295454AD8E554C1978145FA2965; // 0x0
	TArray<E_EquipmentCategorys> OccupationCatergory_6_66176027407826FE2A9DCCA022AC9C7A; // 0x8
	FString FootStpeDataRowName_17_F936B58E4D7C5BF5D6C173BA36232374; // 0x18
	TArray<E_HitboxType> ReduceDamgeApplyHitTypeList_33_548A45F7454363AF6DF4969A21C96874; // 0x28
	TMap<UDamageType*, float> DamageReduceByDamageType_32_1212FE2C49316DD1B969D68509394E36; // 0x38
	TMap<E_AbnormalStateType, float> Resist_47_58A67AA0496E58D04A163A838C7E78D3; // 0x88
	float MaxCondition_51_ED2695C8450CC2CBDE7DA1AE66D63F83; // 0xd8
	USoundBase* EquipSound_61_7AFCC8344A6337F23873E59E71153416; // 0xe0
	USkeletalMesh* FPMesh_68_3CF8FE354922C01B3036C4958D85EC52; // 0xe8
	TMap<FName, int32_t> FPMeshMachineArmMaterialSlotInfo_91_4562CA2C4D9BF15A28B327A9EE0F5B1F; // 0xf0
	USkeletalMesh* TPMesh_69_25AF4AD248516AC3B45476B5FBFE3568; // 0x140
	TMap<FName, int32_t> TPMeshMachineArmMaterialSlotInfo_92_6434988A4C6389A72679D4AA776D7718; // 0x148
	USkeletalMesh* FPLeg_72_41136AA540CBCF9984DF4C8445FCCC38; // 0x198
	USkeletalMesh* FPFeet_74_020DB146409010016B9B14AF757A5F2D; // 0x1a0
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FIntPairArray {
	TArray<FIntPair> IntPairArray; // 0x0
};

struct FSQSSendMessageRequest {
	FString QueueUrl; // 0x0
	FString MessageBody; // 0x10
	int32_t DelaySeconds; // 0x20
	TMap<FString, FMessageAttributeValue> MessageAttributes; // 0x28
	TMap<EMessageSystemAttributeNameForSends, FMessageSystemAttributeValue> MessageSystemAttributes; // 0x78
	FString MessageDeduplicationId; // 0xc8
	FString MessageGroupId; // 0xd8
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
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

struct FDeleteInsightRulesResult {
	TArray<FPartialFailure> Failures; // 0x0
	FResponseMetadata ResponseMetadata; // 0x10
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FIntArray {
	TArray<int32_t> IntArray; // 0x0
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FS_ServerNotice {
	FString NoticeText_2_9BCA541841B9C64D88E46D89F14FFC8C; // 0x0
	float StartTime_8_CF9154784210F4182F486BBEC9B55044; // 0x10
	float CycleTime_5_04193ECC4A7E909965E85AB0497C691E; // 0x14
};

struct FMetricDataResult {
	FString ID; // 0x0
	FString Label; // 0x10
	TArray<FDateTime> Timestamps; // 0x20
	TArray<float> Values; // 0x30
	EStatusCode StatusCode; // 0x40
	TArray<FMessageDataCloudWatch> Messages; // 0x48
};

struct FS_Customization {
	FString ID_20_AF3291AC4022F4DF58206B8F2662EC7A; // 0x0
	E_Gender Gender_2_86BC553F4702F6DA6DBB15B1E42BA011; // 0x10
	E_CustomizationParts Parts_5_67807C284D5C143EBA8C5AAC9DEB179F; // 0x11
	FText Name_15_A52BABF943FEC63D4498A98D9ECEBF46; // 0x18
	FString Constraint_21_7845261945F83DD4BD096D83B1F215E5; // 0x30
	TSoftObjectPtr<UTexture2D> Icon_12_AAEE2838422884570CBE16A526002933; // 0x40
	FLinearColor FaceColor_82_9C3C77A043003FCC199C978FACAAD1EC; // 0x68
	TSoftObjectPtr<USkeletalMesh> Mesh_9_F47F3F4E4E6D381EF356D7903BD0CEA4; // 0x78
	FS_MachineArmCustomizationInfo MachineArmCustomizationInfo_59_65051D2C448D79148A9F09A33B970975; // 0xa0
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FMovieSceneVector4KeyStruct {
	FVector4 Vector; // 0x30
};

struct FSteamUGCItemId {
	FUInt64 ID; // 0x0
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FEnableAlarmActionsRequest {
	TArray<FString> AlarmNames; // 0x0
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

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FMetricAlarm {
	FString AlarmName; // 0x0
	FString AlarmArn; // 0x10
	FString AlarmDescription; // 0x20
	FDateTime AlarmConfigurationUpdatedTimestamp; // 0x30
	bool bActionsEnabled; // 0x38
	TArray<FString> OKActions; // 0x40
	TArray<FString> AlarmActions; // 0x50
	TArray<FString> InsufficientDataActions; // 0x60
	EStateValue StateValue; // 0x70
	FString StateReason; // 0x78
	FString StateReasonData; // 0x88
	FDateTime StateUpdatedTimestamp; // 0x98
	FString MetricName; // 0xa0
	FString Namespace; // 0xb0
	EStatistic Statistic; // 0xc0
	FString ExtendedStatistic; // 0xc8
	TArray<FDimension> Dimensions; // 0xd8
	int32_t Period; // 0xe8
	EStandardUnit Unit; // 0xec
	int32_t EvaluationPeriods; // 0xf0
	int32_t DatapointsToAlarm; // 0xf4
	float Threshold; // 0xf8
	EComparisonOperatorCloudWatch ComparisonOperator; // 0xfc
	FString TreatMissingData; // 0x100
	FString EvaluateLowSampleCountPercentile; // 0x110
	TArray<FMetricDataQuery> Metrics; // 0x120
	FString ThresholdMetricId; // 0x130
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
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

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FRMRemoteResponse_ResultOnly {
	FString Result; // 0x10
};

struct FFloatCurve {
	FRichCurve FloatCurve; // 0x18
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FDeleteMessageBatchResultEntry {
	FString ID; // 0x0
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FPartialFailure {
	FString FailureResource; // 0x0
	FString ExceptionType; // 0x10
	FString FailureCode; // 0x20
	FString FailureDescription; // 0x30
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
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

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FS_Text {
	FText Text_2_14D9BE944AF858807AAF4AA5FECD965D; // 0x0
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
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

struct FS_PlayerSave {
	FString PlayerUID_104_B504DED64EB9E452F10E27BB0A4844B9; // 0x0
	int32_t Health_8_13C7263A4139AC441C7EB98B9CDC11EA; // 0x10
	float Hunger_18_718714BD4FD5683EFB9E5B9B8917A0E3; // 0x14
	float Thirst_19_EDD1807B415FFBAA44704B8B25824BC0; // 0x18
	TArray<FS_SaveInv> Inventory_68_4AD382154268BA5A669B7AB2551B05D9; // 0x20
	FS_SaveEquipment HeadSlot_69_FF62AB91477ACCD924C0149AE185201E; // 0x30
	FS_SaveEquipment ChestSlot_70_FC15918E4C9242295AE32F853E58A76E; // 0x68
	FS_SaveEquipment LegsSlot_71_EBBAAC2546D99ED0814056821AD4321B; // 0xa0
	FS_SaveEquipment FeetSlot_73_3E1001754FD1F46102E061BA788AFDB8; // 0xd8
	FTransform PlayerTransfrom_33_BF512F034AFD05532FBFC28919A2E1DF; // 0x110
	FS_SaveWeaponInvs WeaponInfomation_76_D20F9E4A44639AD50F798D9C5281573E; // 0x140
	TArray<FS_SaveWeaponInvs> WeaponInventory_67_100F9FA74953DC5952879F99A7401ECB; // 0x158
	TArray<FS_CraftingSlot> CraftingQueue_94_D2A16B8448A834FF0ED69B95069BA04F; // 0x168
	FVector LastDeadLocation_97_501FDD2D44AC1A9B166D788A0517B89F; // 0x178
	float CharacterCreationTime_100_A60583544D9FF37EF389FC912F9C960F; // 0x184
	FString PlayerNickname_103_31224A8A4B2A82B616D742A68B89CBE5; // 0x188
	TArray<FItemInventory> Protocol_113_1C01BD804C0D90BE07CED499F126141E; // 0x198
	TArray<FItemInventory> Memory_112_E63F754D4F2F19B7CEBCB0B7A8FE68ED; // 0x1a8
	EEndingType EndingType_116_33D5949443D184743FFC8A9CDCC2967A; // 0x1b8
	float Energy_119_5EEA72B94E410FEF708C31BA23D9769C; // 0x1bc
};

struct FMovieSceneBytePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FCreateExportTaskRequest {
	FString TaskName; // 0x0
	FString LogGroupName; // 0x10
	FString LogStreamNamePrefix; // 0x20
	FString From; // 0x30
	FString To; // 0x40
	FString Destination; // 0x50
	FString DestinationPrefix; // 0x60
};

struct FBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
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

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
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

struct FSQSReceiveMessageResult {
	TArray<FSQSMessage> Messages; // 0x0
	FSQSResponseMetadata ResponseMetadata; // 0x10
};

struct FRMRemoteRequest_SetIngameNotice {
	int32_t Index; // 0x10
	FString notice; // 0x18
	float CycleSec; // 0x28
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
};

struct FMovieSceneGeometryCollectionSectionTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FSKeyAction {
	bool IsMultipleKeys_55_5C8AAF784B0204F0CD6DDFB29B539231; // 0x0
	FString Category_51_02F7E3B1472CCCD9B03C9AAA3760BFCF; // 0x8
	TArray<FSKeyMapping> KeyMappings_53_06DB6A864A4AB13D9C9761A1848B4A2A; // 0x18
};

struct FSteamWorkshopItemInstallInfo {
	FUInt64 sizeOnDiskBytes; // 0x0
	int32_t sizeOnDiskMBytes; // 0x8
	FString Directory; // 0x10
	FDateTime timeStampLastUpdate; // 0x20
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

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
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

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FSplineInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FSQSGetQueueAttributesResult {
	TMap<EQueueAttributeName, FString> Attributes; // 0x0
	FSQSResponseMetadata ResponseMetadata; // 0x50
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
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

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FS_CraftingCost {
	FText Name_4_F714E4D646DAC9079CE2529A2A665FE7; // 0x0
	FDataTableRowHandle CraftedItem_10_88D454844BF142B52CAA9E81FCD0C2BC; // 0x18
	int32_t CraftedCount_11_4AEAB00F40C94FDFF548549835F9FA9C; // 0x28
	float CraftingTime_14_F63724F54A6D5000C0A0099595E164B7; // 0x2c
	E_ItemCategory_Display Category_17_9C7B47D942116655FCF9A1B56825FD42; // 0x30
	FDataTableRowHandle CraftingItem1_21_F2BA24ED4743427255BB38AAA0839B12; // 0x38
	int32_t CraftingItem1Count_24_B448C5524A559DD9425A49B725048C7A; // 0x48
	FDataTableRowHandle CraftingItem2_27_3CF6BB224828DCCF356628BEE1D22F68; // 0x50
	int32_t CraftingItem2Count_30_CB92850744E423BCF0FE2D824A3E4F13; // 0x60
	FDataTableRowHandle CraftingItem3_34_553E8487485584AA184AE58B61961861; // 0x68
	int32_t Craftingitem3Count_37_3139A90E48380C6C9E6FD7879E51DCA4; // 0x78
	FDataTableRowHandle Craftingitem4_41_DA3594D14F1E58BC44C9B0B5B6367E10; // 0x80
	int32_t CraftingItem4Count_44_AB22FBCA43877211F6530FAD2F43CF92; // 0x90
	TArray<AActor*> RequiredActor_49_560240184ED9CC701D9C89BC929FDDF3; // 0x98
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FSteamDepotId {
	FUInt32 ID; // 0x0
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FLandmassBrushEffectsList {
	FBrushEffectBlurring Blurring; // 0x0
	FBrushEffectCurlNoise CurlNoise; // 0x8
	FBrushEffectDisplacement Displacement; // 0x18
	FBrushEffectSmoothBlending SmoothBlending; // 0x40
	FBrushEffectTerracing Terracing; // 0x48
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FInlineEditableTextBlockStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
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

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FDescribeAnomalyDetectorsResult {
	TArray<FAnomalyDetector> AnomalyDetectors; // 0x0
	FString NextToken; // 0x10
	FResponseMetadata ResponseMetadata; // 0x20
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FAnimNode_ApplyLimits {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FAnimNode_MakeDynamicAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FEnvQueryResult {
	UEnvQueryItemType* itemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FSQSListQueuesResult {
	TArray<FString> QueueUrls; // 0x0
	FString NextToken; // 0x10
	FSQSResponseMetadata ResponseMetadata; // 0x20
};

struct FPutMetricAlarmRequest {
	FString AlarmName; // 0x0
	FString AlarmDescription; // 0x10
	bool bActionsEnabled; // 0x20
	TArray<FString> OKActions; // 0x28
	TArray<FString> AlarmActions; // 0x38
	TArray<FString> InsufficientDataActions; // 0x48
	FString MetricName; // 0x58
	FString Namespace; // 0x68
	EStatistic Statistic; // 0x78
	FString ExtendedStatistic; // 0x80
	TArray<FDimension> Dimensions; // 0x90
	int32_t Period; // 0xa0
	EStandardUnit Unit; // 0xa4
	int32_t EvaluationPeriods; // 0xa8
	int32_t DatapointsToAlarm; // 0xac
	float Threshold; // 0xb0
	EComparisonOperatorCloudWatch ComparisonOperator; // 0xb4
	FString TreatMissingData; // 0xb8
	FString EvaluateLowSampleCountPercentile; // 0xc8
	TArray<FMetricDataQuery> Metrics; // 0xd8
	TArray<FTagCloudWatch> Tags; // 0xe8
	FString ThresholdMetricId; // 0xf8
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FSteamAppId {
	FUInt32 ID; // 0x0
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FUntagLogGroupRequest {
	FString LogGroupName; // 0x0
	TArray<FString> Tags; // 0x10
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FSubscriptionFilter {
	FString FilterName; // 0x0
	FString LogGroupName; // 0x10
	FString FilterPattern; // 0x20
	FString DestinationArn; // 0x30
	FString RoleArn; // 0x40
	EDistribution Distribution; // 0x50
	FString CreationTime; // 0x58
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FARVideoFormat {
	int32_t fps; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
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

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
	float SurfaceArea; // 0x10
};

struct FAttachmentSlot {
	EAttachmentType AttachmentType; // 0x8
	FItemInventory Item; // 0x10
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
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

struct FParameterUIData {
	FString Name; // 0x0
	FMutableParamUIMetadata ParamUIMetadata; // 0x10
	EMutableParameterType Type; // 0x100
	TArray<FIntegerParameterUIData> ArrayIntegerParameterOption; // 0x108
	ECustomizableObjectGroupType IntegerParameterGroupType; // 0x118
	bool bDontCompressRuntimeTextures; // 0x119
	TMap<FString, FString> ForcedParameterValues; // 0x120
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FUIDTable {
	FString UID; // 0x8
};

struct FPBUF_sv_ErrorRes {
	FString Message; // 0x0
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FAIRequestID {
	uint32_t RequestId; // 0x0
};

struct FDonNavVoxelX {
	TArray<FDonNavVoxelY> Y; // 0x0
};

struct FMovieSceneCameraShakeSectionTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
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

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FS_ItemSpawnerSave {
	ABP_MasterItemSpawner_C* ItemSpawner_2_46E589A546EA4E146BC7179D489531E2; // 0x0
	FS_SaveInv Item_7_9E1B41D941F7619C44FE9AB0912D5199; // 0x8
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FAnimNode_Constraint {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FSQSChangeMessageVisibilityBatchRequest {
	FString QueueUrl; // 0x0
	TArray<FChangeMessageVisibilityBatchRequestEntry> Entries; // 0x10
};

struct FItemInventory {
	int32_t UID; // 0x0
	int32_t Count; // 0x4
	int32_t Index; // 0x8
	float Condition; // 0xc
	float MaxCondition; // 0x10
	UInventoryComponentBase* ArchivedInventory; // 0x18
	int32_t IdentifierNum; // 0x20
	TArray<float> OptionArray; // 0x28
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
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

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
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

struct FBPOnlineUser {
	FBPUniqueNetId UniqueNetId; // 0x0
	FString DisplayName; // 0x20
	FString RealName; // 0x30
};

struct FDragonData_SingleArmElement {
	FTransform Overrided_Arm_Transform; // 0x0
	float Arm_Alpha; // 0x30
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

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FLandmarkRepInfo {
	FString Taker; // 0x0
	FVector Location; // 0x10
	ELMStatus Status; // 0x1c
	int32_t Phase; // 0x20
	float Time; // 0x24
};

struct FHarverstResource {
	int32_t Damage; // 0x8
	TArray<FResourceDropItem> ResourceDrop; // 0x10
	FResourceDropItem LastAdditionDropResource; // 0x20
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FMovieSceneVector2DKeyStruct {
	FVector2D Vector; // 0x28
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FS_CraftingHistoryGroupArray {
	TArray<E_CraftingHistoryGroup> HistoryGroup_3_144C6E754A7DBDD2584499B4B303ACB6; // 0x0
	FString Desc_7_6005657D4314487404F1DEBF78FBAF43; // 0x10
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FEditableTextStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FMovieSceneVectorPropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FS_PlayerSpawnPointInfoArray {
	TArray<FS_PlayerSpawnPointInfo> SpawnPointArray_4_67E60CAD4086A0097952029950923DDE; // 0x0
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FPBUF_sv_SetDedicatedServerReadyReq {
	FString Guid; // 0x0
	int32_t ready; // 0x10
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FMovieSceneMediaPlayerPropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FS_ProtocolInfo {
	E_SkillGroup SkillGroup_11_0AC24BE549FC45267FFD1F9F5E0B91E3; // 0x0
	FDataTableRowHandle Skill_8_8B1A50904137CF294EFF3689D6DE4AD0; // 0x8
};

struct FGetMetricDataRequest {
	TArray<FMetricDataQuery> MetricDataQueries; // 0x0
	FDateTime StartTime; // 0x10
	FDateTime EndTime; // 0x18
	FString NextToken; // 0x20
	EScanBy ScanBy; // 0x30
	int32_t MaxDatapoints; // 0x34
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FExportTask {
	FString TaskId; // 0x0
	FString TaskName; // 0x10
	FString LogGroupName; // 0x20
	FString From; // 0x30
	FString To; // 0x40
	FString Destination; // 0x50
	FString DestinationPrefix; // 0x60
	FExportTaskStatus Status; // 0x70
	FExportTaskExecutionInfo ExecutionInfo; // 0x88
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

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FSteamUGCUpdateHandle {
	FUInt64 handle; // 0x0
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

struct FPutLogEventsResult {
	FString NextSequenceToken; // 0x0
	FRejectedLogEventsInfo RejectedLogEventsInfo; // 0x10
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

struct FS_ResourceItems {
	FDataTableRowHandle Item_2_16FF0CB4438BE4056978469809F67130; // 0x0
	float Rarity_10_EE1CE3F54B366D5571141880842D3107; // 0x10
};

struct FFilterLogEventsRequest {
	FString LogGroupName; // 0x0
	TArray<FString> LogStreamNames; // 0x10
	FString LogStreamNamePrefix; // 0x20
	float StartTime; // 0x30
	float EndTime; // 0x34
	FString FilterPattern; // 0x38
	FString NextToken; // 0x48
	int32_t Limit; // 0x58
};

struct FSKeyActionSave {
	FString ActionName_27_5885F13F40BEDA6C8B8F749EAEC64BBA; // 0x0
	FString Category_10_6A9C009143C58E50DF299AA2409B06BD; // 0x10
	FString Name_12_284B813542040EB40314D6A629BCF640; // 0x20
	float Scale_25_55DAC9F048835ECFBB2123B59FBB6835; // 0x30
	bool Primary_15_7375BAE94E1228E31B871684158CC790; // 0x34
	FKey KeyInput_26_669892994CD4745AD57CF4BDF708E2A0; // 0x38
	bool NegativeAxis_22_17736552415A5EA125B225BE5B8415AE; // 0x50
	bool EmptyCombination_29_A96B2E8F49C8DDD0067652A02233A112; // 0x51
	bool IsMultipleKeys_31_C4CB7E6F438CF7DEDC970FA60F838A2D; // 0x52
};

struct FAssociateKmsKeyRequest {
	FString LogGroupName; // 0x0
	FString KmsKeyId; // 0x10
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

struct FPutQueryDefinitionResult {
	FString QueryDefinitionId; // 0x0
};

struct FResultField {
	FString Field; // 0x0
	FString Value; // 0x10
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FInlineTextImageStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FS_LandmarkSaveInfo {
	FText Name_3_6A3F3ABE407A7D3E7FF52CBA98C53708; // 0x0
	E_LandmarkState State_10_BAE3F8CF4B3A06B22DFEE4A1BF185A5B; // 0x18
	int32_t AIPhase_11_1BC4F4104B7349CB14AC9E9566BF0AEC; // 0x1c
	float RemainTime_12_4E21B72646153A663B9B798463F27000; // 0x20
};

struct FPutResourcePolicyRequestLogs {
	FString PolicyName; // 0x0
	FString PolicyDocument; // 0x10
};

struct FSQSCreateQueueRequest {
	FString QueueName; // 0x0
	TMap<EQueueAttributeName, FString> Attributes; // 0x10
	TMap<FString, FString> Tags; // 0x60
};

struct FMovieSceneGeometryCacheSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FAkMidiPitchBend {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
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

struct FMovieSceneIntegerPropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FSKeyInput {
	FKey Input_3_484CF56342A117E3CBA042A394CBD033; // 0x0
	bool UseNegativeAxis_9_CA016842430D7150D94F0AABC0B31CAE; // 0x18
};

struct FMovieSceneNiagaraParameterSectionTemplate {
	FNiagaraVariable Parameter; // 0x20
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

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t VertexCount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FUniqueNetIdRepl {
	TArray<char> ReplicationBytes; // 0x18
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FBlueprintInputTouchDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FAkPS4AdvancedInitializationSettings {
	uint32_t ACPBatchBufferSize; // 0x30
	bool UseHardwareCodecLowLatencyMode; // 0x34
};

struct FDoNNavigationDebugParams {
	bool DrawDebugVolumes; // 0x0
	bool VisualizeRawPath; // 0x1
	bool VisualizeOptimizedPath; // 0x2
	bool VisualizeInRealTime; // 0x3
	float LineThickness; // 0x4
	float LineDuration; // 0x8
};

struct FProgressBarStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FStringCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FAnimNode_DragonWarpSolver {
	TArray<FDragonData_WarpLimbsData> dragon_limb_input; // 0xc8
	FName Hip_Bone_Name; // 0xd8
	bool enable_solver; // 0x124
	FVector character_direction_vector_CS; // 0x244
	FVector forward_vector_CS; // 0x250
	float speed_warping_const; // 0x25c
	bool enable_slope_warp; // 0x260
	float automatic_speed_warping_const; // 0x264
	float slope_detection_tolerance; // 0x268
	float Warp_Slope_Interpolation; // 0x26c
	ETraceTypeQuery Trace_Channel; // 0x2a0
	float line_trace_downward_height; // 0x2a4
	float line_trace_upper_height; // 0x2a8
	float virtual_leg_width; // 0x2ac
	float virtual_scale; // 0x2b0
	bool DisplayLineTrace; // 0x2b8
	float Limb_Compression_Intensity; // 0x2bc
	FRuntimeFloatCurve Limb_Lifting_Curve; // 0x2c0
	float Hip_Change_Intensity; // 0x348
	FRuntimeFloatCurve Hip_Lifting_Curve; // 0x350
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

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FS_SkillTask {
	TMap<FString, FString> StartCondition_12_EF59131F494FB090638A178166A3A7B1; // 0x0
	FString SkillTaskName_14_A408DD10472E86D02581AFAA91312FCE; // 0x50
	UBP_SkillActionTaskBase_C* SkillActionTask_18_34AD077F43A1DE6AC7755CA74B545FE8; // 0x60
	FS_ConditionParam SkillParam_31_EC837E064DE0045563843DAC6176AE14; // 0x68
	float EnergyPerCost_28_077B62A14C3B20FDDAB52794629EE840; // 0xd8
	bool CoolTimeStartTask_25_C8E7E5AD49194EF389CB68B11F7ADDC8; // 0xdc
};

struct FMeshSectionTextureData {
	int32_t Section; // 0x0
	UTexture2D* Texture; // 0x8
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FSVWeaponTable {
	TSoftObjectPtr<USVWeaponContent> WeaponContent; // 0x8
};

struct FBoneDragonSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketDragonReference SocketReference; // 0x20
};

struct FSQSChangeMessageVisibilityBatchResult {
	TArray<FChangeMessageVisibilityBatchResultEntry> Successful; // 0x0
	TArray<FBatchResultErrorEntry> Failed; // 0x10
	FSQSResponseMetadata ResponseMetadata; // 0x20
};

struct FAnimNode_LinkedInputPose {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FSQSTagQueueRequest {
	FString QueueUrl; // 0x0
	TMap<FString, FString> Tags; // 0x10
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

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FGetInsightRuleReportResult {
	TArray<FString> KeyLabels; // 0x0
	FString AggregationStatistic; // 0x10
	float AggregateValue; // 0x20
	float ApproximateUniqueCount; // 0x24
	TArray<FInsightRuleContributor> Contributors; // 0x28
	TArray<FInsightRuleMetricDatapoint> MetricDatapoints; // 0x38
	FResponseMetadata ResponseMetadata; // 0x48
};

struct FDescribeQueriesResult {
	TArray<FQueryInfo> Queries; // 0x0
	FString NextToken; // 0x10
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FPrimitiveComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FLMInfo {
	int32_t UID; // 0x0
	FText Name; // 0x8
	FText Discription; // 0x20
	FString Taker; // 0x38
	FSlateBrush Icon; // 0x48
	FVector Location; // 0xd0
	ELMStatus Status; // 0xdc
	int32_t Phase; // 0xe0
	float Time; // 0xe4
	float ExpireTime; // 0xe8
	ELandmarkEffectActionType ActionType; // 0xec
	ALandmarkEffectBase* UpEffect; // 0xf0
	ALandmarkEffectBase* DownEffect; // 0xf8
	FDataTableRowHandle ActiveTicket; // 0x100
	TArray<int32_t> ImportantDropList; // 0x110
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FWeaponAttachmentMuzzle {
	FWeaponAttachmentAbility BaseAbility; // 0x8
	float RecoilMultiply; // 0xc0
	TMap<int32_t, UParticleSystem*> MuzzleParticleByUID; // 0xc8
	UAKData* MuzzleSoundAkSwitch; // 0x118
	float DamageMultiply; // 0x120
	float ProjectileSpeedMultiply; // 0x124
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
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

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
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

struct FPBUF_sv_NoticeBroadcastReq {
	FString msg; // 0x0
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FInstancedStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FExportTaskStatus {
	EExportTaskStatusCode Code; // 0x0
	FString Message; // 0x8
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
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

struct FSteamKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FTTEventTrack {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FALoadingScreenSettings {
	float MinimumLoadingScreenDisplayTime; // 0x0
	bool bAutoCompleteWhenLoadingCompletes; // 0x4
	bool bMoviesAreSkippable; // 0x5
	bool bWaitForManualStop; // 0x6
	bool bAllowInEarlyStartup; // 0x7
	bool bAllowEngineTick; // 0x8
	EMoviePlaybackType PlaybackType; // 0x9
	TArray<FString> MoviePaths; // 0x10
	bool bShuffle; // 0x20
	bool bSetDisplayMovieIndexManually; // 0x21
	bool bShowWidgetOverlay; // 0x22
	bool bShowLoadingCompleteText; // 0x23
	FLoadingCompleteTextSettings LoadingCompleteTextSettings; // 0x28
	FBackgroundSettings Background; // 0x100
	FTipSettings TipWidget; // 0x138
	FLoadingWidgetSettings LoadingWidget; // 0x1f8
	EAsyncLoadingScreenLayout Layout; // 0x430
	FIntPoint DesignedLayoutSize; // 0x434
};

struct FNPCRangeAttackInfo {
	UAnimMontage* RangeAttackAnim; // 0x8
	int32_t AttackWeight; // 0x10
	ASurvivalProjectile* Projectile; // 0x18
	FDamageStruct DamageInfo; // 0x20
	float MaxRange; // 0x58
	float MinRange; // 0x5c
	float Accupy; // 0x60
	bool DisableTurning; // 0x64
	bool NeedLookAtTarget; // 0x65
	bool IsDefender; // 0x66
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FWeaponAttachmentMagazine {
	FWeaponAttachmentAbility BaseAbility; // 0x8
	float AdditionalMaxMagazine; // 0xc0
	float ReloadSpeedMultiply; // 0xc4
};

struct FCustomizableObjectIntParameterValue {
	FString ParameterName; // 0x0
	FString ParameterValueName; // 0x10
	FString UID; // 0x20
	TArray<FString> ParameterRangeValueNames; // 0x30
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
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

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FSKeyMapping {
	FString Name_47_08EFD38348F7DCF7A978B48A231BE99A; // 0x0
	FText DisplayName_128_0E98ADC147E7D4677B6722BAE91D1B5B; // 0x10
	FText DisplayDescription_127_C33EB3514686C5171365799211A0E1D4; // 0x28
	float Scale_34_289CBB724D0D417AFBCABCB49A6C3F69; // 0x40
	bool CantBeNone_117_2C54633F41F83AFF31CE7DB0A0248175; // 0x44
	TArray<FSKeyInput> PrimaryCombination_108_2AC9E34F451AA6057A0AA4BC145374A3; // 0x48
	TArray<FSKeyInput> SecondaryCombination_109_A8394862473F9E9DAA35718F45B72892; // 0x58
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

struct FAkMidiNoteAftertouch {
	char Note; // 0x2
	char Value; // 0x3
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FDonNavigationQueryTask {
	FDelegate ResultHandler; // 0x298
	FDelegate DynamicCollisionListener; // 0x2a8
};

struct FS_BGMInfo {
	FName Name_2_EF142BAA4FC7BDEE8A902CA5EF2D377E; // 0x0
	int32_t Priority_5_17AE1F2442E273CA78DDBFA632CDB234; // 0x8
	UAkAudioEvent* PlayEvent_8_38420BEC461F151D13FE7ABFFF1A2A59; // 0x10
	UAkAudioEvent* StopEvent_10_F67CA24E43C1A769891EA1B452B28EDF; // 0x18
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FDummySequenceMovment {
	FVector Location; // 0x4
	FVector Direction; // 0x10
	FVector Rotation; // 0x1c
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FHoldableAnimation {
	UAnimSequenceBase* FP_IDLE; // 0x0
	UBlendSpaceBase* FP_Jog_BlendSpace; // 0x8
	UBlendSpaceBase* FP_Crouch_BlendSpace; // 0x10
	UAnimSequenceBase* FP_Crouch_IDLE; // 0x18
	UAnimSequenceBase* FP_Jump_Start; // 0x20
	UAnimSequenceBase* FP_Jump_Loop; // 0x28
	UAnimSequenceBase* FP_Jump_Land; // 0x30
	UAnimSequenceBase* FP_Jump_Critical_Land; // 0x38
	UAnimSequenceBase* FP_LeftLean; // 0x40
	UAnimSequenceBase* FP_RightLean; // 0x48
	UAnimSequenceBase* TP_IDLE; // 0x50
	UBlendSpaceBase* TP_Jog_BlendSpace; // 0x58
	UBlendSpaceBase* TP_Crouch_BlendSpace; // 0x60
	UAnimSequenceBase* TP_Crouch_IDLE; // 0x68
	UAnimSequenceBase* TP_Jump_Start; // 0x70
	UAnimSequenceBase* TP_Jump_Loop; // 0x78
	UAnimSequenceBase* TP_Jump_Land; // 0x80
	UAnimSequenceBase* TP_Jump_Critical_Land; // 0x88
	UAnimSequenceBase* TP_LeftLean; // 0x90
	UAnimSequenceBase* TP_RightLean; // 0x98
	UAnimSequenceBase* TP_LeftLean_NoAdditive; // 0xa0
	UAnimSequenceBase* TP_RightLean_NoAdditive; // 0xa8
	UAnimSequenceBase* TP_Hand_R_Blend; // 0xb0
	TMap<ECharacterLocomotionState, FRotator> TP_Hand_R_Rotation_Additive; // 0xb8
	bool bNeed_TP_Hand_R_Blend; // 0x108
	UAnimSequenceBase* FP_Hand_R_Blend; // 0x110
	bool bNeed_FP_Hand_R_Blend; // 0x118
	TMap<ECharacterLocomotionState, FRotator> FP_Hand_R_Rotation_Additive; // 0x120
	UAimOffsetBlendSpace* Aim_Offset_BlendSpace; // 0x170
	UAimOffsetBlendSpace* TP_LeftLean_Aim_Offset_BlendSpace; // 0x178
	UAimOffsetBlendSpace* TP_RightLean_Aim_Offset_BlendSpace; // 0x180
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
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

struct FNavigationSegmentLink {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
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

struct FScopeValueByUID {
	TArray<FTransform> Transform; // 0x0
	TArray<FName> HideMeshTags; // 0x10
	TArray<FName> HideMeshTagsWhenZoom; // 0x20
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FBlueprintInputAxisKeyDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FRootMotionSource_MoveToForce {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
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

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
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

struct FPutInsightRuleResult {
	FResponseMetadata ResponseMetadata; // 0x0
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FEnableInsightRulesRequest {
	TArray<FString> RuleNames; // 0x0
};

struct FAnimationState {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FDeleteRetentionPolicyRequest {
	FString LogGroupName; // 0x0
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FDeleteQueryDefinitionRequest {
	FString QueryDefinitionId; // 0x0
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

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
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

struct FMessageDataCloudWatch {
	FString Code; // 0x0
	FString Value; // 0x10
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FWeaponInventory {
	int32_t Ammo; // 0x0
	int32_t Index; // 0x4
	EFireMode Mode; // 0x8
	UInventoryComponentBase* ArchivedInventory; // 0x10
	TArray<FAttachmentSlot> Attachments; // 0x18
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
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

struct FAnimNode_AimOffsetLookAt {
	FPoseLink BasePose; // 0x150
	int32_t LODThreshold; // 0x160
	FName SourceSocketName; // 0x164
	FName PivotSocketName; // 0x16c
	FVector LookAtLocation; // 0x174
	FVector SocketAxis; // 0x180
	float Alpha; // 0x18c
};

struct FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FPutDestinationResult {
	FDestinationCloud Destination; // 0x0
};

struct FSVWeaponPartsTable {
	TSoftObjectPtr<USVWeaponPartsContent> WeaponPartsContent; // 0x8
};

struct FAnimNode_ConvertLocalToComponentSpace {
	FPoseLink LocalPose; // 0x10
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FAttackMethod {
	int32_t WeaponId; // 0x0
	FName Type; // 0x4
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FLowEntryRegexCaptureGroup {
	int32_t CaptureGroupNumber; // 0x0
	int32_t BeginIndex; // 0x4
	int32_t EndIndex; // 0x8
	FString Match; // 0x10
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FSoundModulationDefaultRoutingSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FS_CraftingSlot {
	FS_CraftingRecipeData CraftingRecipe_11_40CBACA446B85F8E86FA3A918AED00E2; // 0x0
	int32_t Count_10_9AFDCC344795C3367D57E4B086BA3962; // 0x40
	int32_t Index_8_E8BDB0704B77A8A954D055879248AB8F; // 0x44
	UBP_CraftingComponent_C* TargetCraftingComponent_14_71D93DD34C56C83339DC7385C88F406A; // 0x48
};

struct FDescribeQueriesRequest {
	FString LogGroupName; // 0x0
	EQueryStatus Status; // 0x10
	int32_t MaxResults; // 0x14
	FString NextToken; // 0x18
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FS_StorageInventoryLog {
	E_ItemMoveType MoveType_2_2681E9D84A2F9BB796AE7FACA373FA5A; // 0x0
	FString NickName_6_8DBA321048D3F6249090288A5F00B608; // 0x8
	FString UID_8_FD19AEA6466A49DA4B3018BC2869878C; // 0x18
	FDateTime DateTime_11_4D5A304546FAA228EAFE3FBB2073B5A0; // 0x28
	FIntPair ItemInfo_18_31748A5A438F53A4B5BF07813A44E880; // 0x30
};

struct FMovieSceneFadeSectionTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
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

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FItemRepairInfo {
	float MinReduceConditionPercent; // 0x8
	float MaxReduceConditionPercent; // 0xc
	float EnergyCoreCost; // 0x10
	float PerfectRepairPercent; // 0x14
	float RepairCostMultiply; // 0x18
	TArray<FItemCodeValue> RepairItemOverride; // 0x20
};

struct FSQSSetQueueAttributesRequest {
	FString QueueUrl; // 0x0
	TMap<EQueueAttributeName, FString> Attributes; // 0x10
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
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

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FMetricTransformation {
	FString MetricName; // 0x0
	FString MetricNamespace; // 0x10
	FString MetricValue; // 0x20
	FString DefaultValue; // 0x30
};

struct FPBUF_sv_MonCreateSpecReq {
	FString device_id; // 0x0
	int32_t Timestamp; // 0x10
	FString cpu; // 0x18
	int32_t mem; // 0x28
	FString os_ver; // 0x30
	FString gpu; // 0x40
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FMovieSceneSlomoSectionTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FAkCommunicationSettingsWithSystemInitialization {
	bool InitializeSystemComms; // 0x20
};

struct FResourceDropItem {
	int32_t Less; // 0x8
	int32_t Larger; // 0xc
	TArray<FItemCodeValue> GuaranteedDropItem; // 0x10
	int32_t RandomlyDropMinCount; // 0x20
	int32_t RandomlyDropMaxCount; // 0x24
	TArray<FItemWeight> RandomlyDropItem; // 0x28
	USoundBase* HarvestSound; // 0x38
};

struct FAnimNode_SingleNode {
	FPoseLink SourcePose; // 0x10
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FDescribeSubscriptionFiltersRequest {
	FString LogGroupName; // 0x0
	FString FilterNamePrefix; // 0x10
	FString NextToken; // 0x20
	int32_t Limit; // 0x30
};

struct FS_BoneHitboxes {
	FString BoneName_7_3B84BBB2449BAB9B3C2F059FAA80C38C; // 0x0
	E_HitboxType Hitbox_6_0259A28347BAC7848C81F7B9B1660887; // 0x10
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FLiveLinkSkeletonStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FMessageSystemAttributeValue {
	FString StringValue; // 0x0
	TArray<FString> StringListValues; // 0x10
	FString DataType; // 0x20
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FAddRemoveAppDependencyResult {
	bool bAddDependency; // 0x18
};

struct FS_MaterialArray {
	TArray<UMaterialInterface*> MaterialArray_4_A3EBFCF54CFCCF50E2C156BACF3CC75C; // 0x0
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FS_RefineTransData {
	TMap<E_ConvertType, FS_RefineOffset> RefineTrasnData_4_8086086249AB80CF8F3B6C93665F0890; // 0x0
};

struct FDescribeInsightRulesRequest {
	FString NextToken; // 0x0
	int32_t MaxResults; // 0x10
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FKTaperedCapsuleElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
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

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
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

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FRejectedLogEventsInfo {
	int32_t TooNewLogEventStartIndex; // 0x0
	int32_t TooOldLogEventEndIndex; // 0x4
	int32_t ExpiredLogEventEndIndex; // 0x8
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FDescribeInsightRulesResult {
	FString NextToken; // 0x0
	TArray<FInsightRule> InsightRules; // 0x10
	FResponseMetadata ResponseMetadata; // 0x20
};

struct FMovieSceneMediaSectionTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FRichImageRow {
	FSlateBrush Brush; // 0x8
};

struct FDragonData_WarpLimbsData {
	FName Foot_Bone_Name; // 0x0
	FName Knee_Bone_Name; // 0x8
	FName Thigh_Bone_Name; // 0x10
	float Warp_Lift_Reference_Location; // 0x18
	float Warp_Param_Adder; // 0x1c
	FVector2D Min_Max_Warp; // 0x20
	float max_extra_compression_height; // 0x28
};

struct FAnimNode_SaveCachedPose {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FMovieSceneParticleSectionTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FSQSResponseMetadata {
	FString RequestId; // 0x0
};

struct FDeleteQueryDefinitionResult {
	bool bSuccess; // 0x0
};

struct FPBUF_sv_UserInfoRes {
	FString ID; // 0x0
	FString Name; // 0x10
	int32_t Point; // 0x20
	int32_t score; // 0x24
	FString customize; // 0x28
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FSurface_Light {
	FLinearColor Absorption_48_4D07E26B418E2200A6F8F8B3828E51EE; // 0x0
	FLinearColor Scattering_50_349FBF6044E6E0752780FB97F7E5A6CD; // 0x10
	float AnisotropySurfaceScattering_55_1F0826E04FA290A077DE7C8B1081B5DC; // 0x20
	float CausticsMaxIntensity_57_C9338C334DDA5868BD2EC9B6FC1E07EF; // 0x24
	float Roughness_59_AE172943406B54FBA3455FB564595209; // 0x28
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
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

struct FS_SaveInv {
	int32_t itemUID_17_4E254DAF4006EC2654D11C9A346F2861; // 0x0
	int32_t itemCount_7_5F8103BD47E5E79428BF6BBD66025993; // 0x4
	int32_t ItemIndex_8_428AE03C47CCC070C13877A5E4C6AFB8; // 0x8
	float Condition_11_2699BF45469D36877B425CA1F2AA28A0; // 0xc
	float MaxCondition_28_913EE58249867D214992359A2C774B83; // 0x10
	TArray<float> Option_25_426BA1164E7C51F0514991BB35C4CEA6; // 0x18
	int32_t IdentifierNum_22_81032A574183FE93A1E0B7B754CB7D99; // 0x28
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FSteamUGCQueryParameterAllUser {
	FSteamUGCQueryParameterTagsAllUser tagParameter; // 0x18
	bool bReturnTotalOnly; // 0x48
	bool bReturnIdsOnly; // 0x49
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

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
	float SurfaceArea; // 0x10
};

struct FAnimNode_LinkedAnimGraph {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FAnimNode_PoseHandler {
	UPoseAsset* PoseAsset; // 0x38
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FLiveLinkTransformFrameData {
	FTransform Transform; // 0xa0
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FDualSidebarLayoutSettings {
	bool bIsLoadingWidgetAtRight; // 0x0
	EVerticalAlignment LeftVerticalAlignment; // 0x1
	EVerticalAlignment RightVerticalAlignment; // 0x2
	EVerticalAlignment LeftBorderVerticalAlignment; // 0x3
	EVerticalAlignment RightBorderVerticalAlignment; // 0x4
	FMargin LeftBorderPadding; // 0x8
	FMargin RightBorderPadding; // 0x18
	FSlateBrush LeftBorderBackground; // 0x28
	FSlateBrush RightBorderBackground; // 0xb0
};

struct FMovieSceneVectorKeyStruct {
	FVector Vector; // 0x28
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FParameterDecorations {
	TArray<UTexture2D*> Images; // 0x0
};

struct FEditableObjectPrototype {
	UObject* Class; // 0x0
	UObject* Prototype; // 0x8
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FAnimNode_SequenceEvaluator {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FAnimNotifyStateInfo {
	FName NotifyName; // 0x0
	float TriggerTime; // 0x8
	float Duration; // 0xc
	USVAnimNotifyState* AnimNotifyState; // 0x10
	bool IsTriggerd; // 0x18
	bool IsEnded; // 0x19
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FS_CraftingRecipeData {
	int32_t CraftingItemCode_22_6D135F6F47E37686C66E9C84DCE02990; // 0x0
	int32_t SortOrder_24_C9E6012741BEBBBCD2E6E3A5906526AD; // 0x4
	E_CraftingType Type_2_F9EA430B4D2422B6C8064C88960F2C20; // 0x8
	TArray<FItemCodeValue> Cost_28_3BCB90824A4BBFC46A28E28824D79339; // 0x10
	float Time_14_011ADA4648B8C6EA3A0ADA8DA99E8B93; // 0x20
	int32_t Count_17_342DD1FD4DA6DF5C97B8C589FDB3FACC; // 0x24
	bool IsUnlocked_27_8E72697E40A7CA2DBAB0FD9E87801611; // 0x28
	FFloatRange CreateConditionRange_31_01ACC90D4450C946E5E758A64F13CA80; // 0x2c
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FRootMotionSource_ConstantForce {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FMutableModelParameterProperties {
	FString Name; // 0x0
	EMutableParameterType Type; // 0x10
	int32_t ImageDescriptionCount; // 0x14
	TArray<FMutableModelParameterValue> PossibleValues; // 0x18
	FMutableParamUIMetadata ParamUIMetadata; // 0x28
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FSplitterStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FQuickSlotInfo {
	int32_t SlotIdx; // 0x0
	EQuickSlotType Type; // 0x4
	int32_t RegisterUID; // 0x8
};

struct FMovieSceneEvaluationFieldSegmentPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FNiagaraEmitterScalabilityOverride {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FPutQueryDefinitionRequest {
	FString Name; // 0x0
	FString QueryDefinitionId; // 0x10
	TArray<FString> LogGroupNames; // 0x20
	FString QueryString; // 0x30
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FMovieScene3DTransformKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FLiveLinkCameraBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FTTFloatTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FS_TutorialGoalData {
	E_TutorialGoalType TutorialGoalType_2_5F776B064AA5DD55B95904A738923EFE; // 0x0
	FText TutorialGoalText_10_2B74334140E786FEAF3AA5963613F0EA; // 0x8
	int32_t UID_5_A7A0DBE842D3A3B935ADAC8E536B6419; // 0x20
	int32_t Count_7_3A050DDA40FBC8BE8808D687590BE551; // 0x24
	bool CheckPrevAction_12_B34212194E68977F654E27A1E6021D99; // 0x28
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FPBUF_sv_MonCreateMetricReq {
	FString device_id; // 0x0
	int32_t Timestamp; // 0x10
	float cpu_util; // 0x14
	float mem_usage; // 0x18
	float fps; // 0x1c
	FPBUF_sv_Location Loc; // 0x20
};

struct FS_HackingBoxReplicate {
	BP_HackingBox_C* MyBoxRef_15_A32C80264D9729E910F19C9CC8061412; // 0x0
	bool IsOpen_1_B8A35F39485970ACC79088A921ED629D; // 0x8
	bool NeedHacking_3_23A1C2574D159DF6F5CB86A81334DCBC; // 0x9
	float ResetTime_7_3609C6D34E793EFB211D118F702C1809; // 0xc
	float StartHackingTime_11_076F1DAB4BD0FB782B62D7ADB4860D36; // 0x10
	float FinishHackingTime_9_54A0402948E68156A22215B4726A157E; // 0x14
};

struct FLoadingCompleteTextSettings {
	FText LoadingCompleteText; // 0x0
	FTextAppearance Appearance; // 0x18
	FWidgetAlignment Alignment; // 0xb8
	FMargin Padding; // 0xbc
	bool bFadeInOutAnim; // 0xcc
	float AnimationSpeed; // 0xd0
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
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

struct FAnimNode_DragonSpineSolver {
	FDragonData_MultiInput dragon_input_data; // 0x10
	float Precision; // 0xa0
	float MaximumPitch; // 0xa4
	float MinimumPitch; // 0xa8
	float MaximumRoll; // 0xac
	float MinimumRoll; // 0xb0
	int32_t MaxIterations; // 0xb4
	FComponentSpacePoseLink ComponentPose; // 0xb8
	float Alpha; // 0xc8
	float shift_speed; // 0xd0
	ETraceTypeQuery Trace_Channel; // 0xdc
	ETraceTypeQuery Anti_Trace_Channel; // 0xdd
	EIKTrace_Type_Plugin trace_type; // 0xde
	float Trace_Radius; // 0xe0
	int32_t LODThreshold; // 0xe4
	bool Rotate_Around_Translate; // 0xe8
	bool Ignore_Lerping; // 0xe9
	float ActualAlpha; // 0xf4
	float virtual_scale; // 0x100
	float line_trace_downward_height; // 0x104
	float line_trace_upper_height; // 0x108
	bool Use_Anti_Channel; // 0x10c
	float Slanted_Height_Up_Offset; // 0x110
	float Slanted_Height_Down_Offset; // 0x118
	float dip_multiplier; // 0x11c
	float pelvis_adaptive_gravity; // 0x120
	bool reverse_fabrik; // 0x124
	bool Calculation_To_RefPose; // 0x12c
	float Chest_Slanted_Height_Up_Offset; // 0x130
	float Chest_Slanted_Height_Down_Offset; // 0x134
	float chest_side_dip_multiplier; // 0x138
	float chest_adaptive_gravity; // 0x13c
	float Chest_Base_Offset; // 0x140
	float Pelvis_Base_Offset; // 0x144
	float virtual_leg_width; // 0x148
	float Maximum_Dip_Height; // 0x14c
	FRuntimeFloatCurve Pelvis_Height_Multiplier_Curve; // 0x158
	float Maximum_Dip_Height_Chest; // 0x1e0
	FRuntimeFloatCurve Chest_Height_Multiplier_Curve; // 0x1e8
	bool Pelvis_Flat_Slope_Detection; // 0x270
	bool Chest_Flat_Slope_Detection; // 0x271
	float rotation_power_between; // 0x280
	bool Use_Automatic_Fabrik_Selection; // 0x284
	float Location_Lerp_Speed; // 0x288
	float Rotation_Lerp_Speed; // 0x290
	FRuntimeFloatCurve Interpolation_Multiplier_Curve; // 0x298
	float Chest_Influence_Alpha; // 0x320
	float Pelvis_ForwardRotation_Intensity; // 0x324
	float Pelvis_UpwardForwardRotation_Intensity; // 0x328
	float Body_Rotation_Intensity; // 0x32c
	float Pelvis_Rotation_Offset; // 0x330
	float Chest_ForwardRotation_Intensity; // 0x334
	float Chest_UpwardForwardRotation_Intensity; // 0x338
	float Chest_SidewardRotation_Intensity; // 0x33c
	float Chest_Rotation_Offset; // 0x340
	bool Full_Extended_Spine; // 0x380
	float max_extension_ratio; // 0x384
	float min_extension_ratio; // 0x388
	float extension_switch_speed; // 0x38c
	bool enable_solver; // 0x394
	bool Work_Outside_PIE; // 0x395
	bool Use_Fake_Chest_Rotations; // 0x396
	bool Use_Fake_Pelvis_Rotations; // 0x397
	bool Force_Activation; // 0x39c
	bool accurate_feet_placement; // 0x39d
	FRuntimeFloatCurve Accurate_Foot_Curve; // 0x3a0
	bool use_crosshair_trace_also_for_fail_distance; // 0x428
	bool Only_Root_Solve; // 0x429
	FVector Overall_PostSolved_Offset; // 0x434
	FVector character_direction_vector_CS; // 0x440
	FVector Forward_Direction_Vector; // 0x44c
	bool flip_forward_and_right; // 0x458
	ERefPosePluginEnum SolverReferencePose; // 0x468
	bool Spine_Feet_Connect; // 0x469
	float Snake_Joint_Speed; // 0x764
	bool Enable_Snake_Interpolation; // 0x768
	bool is_snake; // 0x769
	float Maximum_Feet_Distance; // 0x76c
	float Minimum_Feet_Distance; // 0x770
	bool DisplayLineTrace; // 0x774
};

struct FCreateWorkshopItemResult {
	FSteamWorkshopUpdateDetails itemDetails; // 0x18
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FCancelExportTaskRequest {
	FString TaskId; // 0x0
};

struct FMovieSceneComponentMaterialSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FPBUF_sv_DediListInfosReq {
	FString branch; // 0x0
};

struct FMaterialCachedExpressionData {
	FMaterialCachedParameters Parameters; // 0x0
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

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FPutAnomalyDetectorRequest {
	FString Namespace; // 0x0
	FString MetricName; // 0x10
	TArray<FDimension> Dimensions; // 0x20
	FString Stat; // 0x30
	FAnomalyDetectorConfiguration Configuration; // 0x40
};

struct FGetMetricWidgetImageRequest {
	FString MetricWidget; // 0x0
	FString OutputFormat; // 0x10
};

struct FListTagsForResourceRequestCloudWatch {
	FString ResourceARN; // 0x0
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FListMetricsRequest {
	FString Namespace; // 0x0
	FString MetricName; // 0x10
	TArray<FDimensionFilter> Dimensions; // 0x20
	FString NextToken; // 0x30
	ERecentlyActive RecentlyActive; // 0x40
};

struct FPBUF_sv_OperationInfoRes {
	FString notice; // 0x0
	int32_t maintenance; // 0x10
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FS_HoldableAnims {
	UAnimSequenceBase* FPIdle_2_7DE25794458E0E2C95869F90B710FEFF; // 0x0
	UBlendSpaceBase* FPJogBlendSpace_16_526E3B2A4B384A90AB1F579942F971BB; // 0x8
	UBlendSpaceBase* FPCrouchBlendSpace_17_87954EE04D45F8D9D49B278D78F32708; // 0x10
	UAnimSequenceBase* FPCrouchIdle_9_9F33B0004C3D931BC68676BF8B11ADB3; // 0x18
	UAnimSequenceBase* FPJumpStart_11_F0B259C8408C28549FA8A4856A5E6377; // 0x20
	UAnimSequenceBase* FPJumpLoop_13_F95913EE4F7286C03980D990E4B8DEA8; // 0x28
	UAnimSequenceBase* FPJumpLand_15_2E0A88724EC9F64D16991D90943B207F; // 0x30
	UAnimSequenceBase* TPIdle_32_E6D270D0406C52F59F705BBAB0CDC4D5; // 0x38
	UBlendSpaceBase* TPJogBlendSpace_21_E39E94B7417E91AB25FE88B303D59C70; // 0x40
	UBlendSpaceBase* TPCrouchBlendSpace_23_ADC627164424A9AE103F7182EF91A877; // 0x48
	UAnimSequenceBase* TPCrouchIdle_33_E45A599B41CB464C0D55238569B5E396; // 0x50
	UAnimSequenceBase* TPJumpStart_34_A05E31F94AB09C6808B90F8163325790; // 0x58
	UAnimSequenceBase* TPJumpLoop_35_63F6B645410E4BCA9E3A1291A4D003A6; // 0x60
	UAnimSequenceBase* TPJumpLand_36_6DB6DB814300E3A7EC9E5CBCD99E5451; // 0x68
	UAimOffsetBlendSpace* AimOffset_39_C134A9054AECE7D51F24ABB0BB37D2B6; // 0x70
};

struct FBlueprintInputKeyDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FListTagsLogGroupResult {
	TMap<FString, FString> Tags; // 0x0
};

struct FTessellation {
	float MaxTessellation_36_AC647E804AD8FF66DC479DBEE451B83D; // 0x0
	float TessellationMultiplierFadeStart_37_312D7DB140157D72C96AFF8CF5729D66; // 0x4
	float TessellationMultiplierFadeEnd_38_D915AA5E48130D8B0506EFA66AF77424; // 0x8
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FGeneralWorkshopItemResult {
	FSteamUGCItemId workshopItemID; // 0x8
};

struct FSteamWorkshopUpdateDetails {
	FString title; // 0x0
	FString Description; // 0x10
	FString updateNotice; // 0x20
	ESteamSupportedLanguages updateLanguage; // 0x30
	FString MetaData; // 0x38
	ESteamItemVisibility Visibility; // 0x48
	TArray<FString> Tags; // 0x50
	TArray<FSteamKeyValuePair> keyValueTags; // 0x60
	FString contentDirectory; // 0x70
	FString previewImage; // 0x80
	TArray<FString> additionalImages; // 0x90
	TArray<FString> youtubeVideoIDs; // 0xa0
	TArray<FString> keysOfKeyValueTagsToRemove; // 0xb0
	TArray<int32_t> indexOfPreviewToRemove; // 0xc0
};

struct FCollectionScalarParameter {
	float DefaultValue; // 0x18
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

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x38
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FS_InteractionKeyGuide {
	E_InteractionType InteractionType_2_172488B2454E78E237892BB3BC459C82; // 0x0
	EnumKeyInputType KeyInputType_5_431F42F84DBA51432D99F18C208AE8C7; // 0x1
	FString SingleKeyText_8_DC1F62AC4A559401D1043DA53ED9B7F5; // 0x8
	FText Text_15_20F477A640CA52537FFCD6A28AF3CB29; // 0x18
	bool IsAvailable_13_86F3D648418D034C255283B46A554E3C; // 0x30
};

struct FWave_2 {
	float  mplitude_Σ1_15_AC647E804AD8FF66DC479DBEE451B83; // 0x0
	float  teepness_Σ1_16_312D7DB140157D72C96AFF8CF5729D6; // 0x4
	float  peed_Σ1_17_D915AA5E48130D8B0506EFA66AF7742; // 0x8
	float  avelength_Σ1_18_E256D8704B7E9B43D81E2D87CBD6575; // 0xc
	float  irection_Σ1_19_527457804880B58848E3D984BC09299; // 0x10
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
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

struct FAwsSQSClientConfiguration {
	FString UserAgent; // 0x0
	ESQSScheme Sceheme; // 0x10
	FString region; // 0x18
	bool bUseDualStack; // 0x28
	int32_t MaxConnections; // 0x2c
	int32_t HTTP_RequestTimeoutMs; // 0x30
	int32_t RequestTimeoutMs; // 0x34
	int32_t ConnectTimeoutMs; // 0x38
	bool bEnableTcpKeepAlive; // 0x3c
	int32_t TcpKeepAliveIntervalMs; // 0x40
	int32_t LowSpeedLimit; // 0x44
	FString EndPointOverride; // 0x48
	ESQSScheme ProxyScheme; // 0x58
	FString ProxyHost; // 0x60
	int32_t ProxyPort; // 0x70
	FString ProxyUsername; // 0x78
	FString ProxyPassword; // 0x88
	FString ProxySSL_CertPath; // 0x98
	FString ProxySSL_CertType; // 0xa8
	FString ProxySSL_KeyPath; // 0xb8
	FString ProxySSL_KeyType; // 0xc8
	FString ProxySSL_KeyPassword; // 0xd8
	bool bVerifySSL; // 0xe8
	FString CaPath; // 0xf0
	FString CaFile; // 0x100
	ESQSFollowRedirectsPolicy FollowRedirects; // 0x110
	bool bDisableExpectHeader; // 0x111
	bool bEnableClockSkewAdjustment; // 0x112
	bool bEnableHostPrefixInjection; // 0x113
	bool bEnableEndpointDiscovery; // 0x114
	FString ProfileName; // 0x118
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FDescribeMetricFiltersRequest {
	FString LogGroupName; // 0x0
	FString FilterNamePrefix; // 0x10
	FString NextToken; // 0x20
	int32_t Limit; // 0x30
	FString MetricName; // 0x38
	FString MetricNamespace; // 0x48
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FAnimNode_Slot {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FMenuItem {
	UWidgetComponent* WidgetComp; // 0x0
	UMenuItems* SubMenu; // 0x8
};

struct FKSphereElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
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

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FWeaponAttachmentScope {
	FWeaponAttachmentAbility BaseAbility; // 0x8
	TArray<float> CustomFOVs; // 0xc0
	TArray<float> CustomDoFs; // 0xd0
	TMap<int32_t, FScopeValueByUID> CustomScopeValues; // 0xe0
	float RecoilMultipy; // 0x130
	USkeletalMesh* FPScopeMesh; // 0x138
	UStaticMesh* LensMesh; // 0x140
};

struct FS_SurvivalRank {
	int32_t Rank_2_8497A14E47A7F21B91F7C3A5AE129951; // 0x0
	FString Name_5_BAB6AAFA4574E3A599F9D7AD8BB3F743; // 0x8
	int32_t Fame_8_70C598104F15A5ABF856B79B59041BB6; // 0x18
	int32_t SurvivalHunting_14_24AFF2E045B00C896D8C6C840464B823; // 0x1c
	float SurvivalTime_11_30140D8D49554887C074FEAFC234779E; // 0x20
	FString PlayerUID_17_5FB0E13641253AA8BF0770BC161A3A41; // 0x28
	EEndingType ClearEndingType_20_79E42228416DA4598A5BF2A80EEF37E5; // 0x38
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FSQSReceiveMessageRequest {
	FString QueueUrl; // 0x0
	TArray<EQueueAttributeName> AttributeNames; // 0x10
	TArray<FString> MessageAttributeNames; // 0x20
	int32_t MaxNumberOfMessages; // 0x30
	int32_t VisibilityTimeout; // 0x34
	int32_t WaitTimeSeconds; // 0x38
	FString ReceiveRequestAttemptId; // 0x40
};

struct FAkMidiGeneric {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
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

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FS_VectorArray {
	TArray<FVector> VectorArray_5_992621F24C4B9895669339BDC70AAFD2; // 0x0
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FDescribeExportTasksRequest {
	FString TaskId; // 0x0
	EExportTaskStatusCode StatusCode; // 0x10
	FString NextToken; // 0x18
	int32_t Limit; // 0x28
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FGetDashboardRequest {
	FString DashboardName; // 0x0
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FRepBreakableTreeData {
	FVector CutLocation; // 0x0
	FVector CutNormal; // 0xc
	FVector Impulse; // 0x18
	bool bNeedDeferredSync; // 0x24
	float ServerDisappearTimerCurrentTime; // 0x28
	float ServerDestroyTimerCurrentTime; // 0x2c
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

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FAkMidiProgramChange {
	char ProgramNum; // 0x2
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
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

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FGetDashboardResult {
	FString DashboardArn; // 0x0
	FString DashboardBody; // 0x10
	FString DashboardName; // 0x20
	FResponseMetadata ResponseMetadata; // 0x30
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

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

