// Created by BlueFire1337
// Updated 2022-01-17
// Generated 2022-02-02

#pragma once

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FColorOptions {
	FText OptionName; // 0x0
	FLinearColor OptionColor; // 0x18
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FDamageEffect {
	float Damage; // 0x0
	float AttemptedDamage; // 0x4
	UDamageType* DamageTypeClass; // 0x8
	AActor* DamageCauser; // 0x10
	FVector DamageOrigin; // 0x18
	bool bArmorBroke; // 0x24
	bool bDamageResisted; // 0x25
	bool bDamageReduced; // 0x26
	bool bDamageShielded; // 0x27
	FVector RelativeImpactLocation; // 0x28
	FVector_NetQuantizeNormal RelativeImpactNormal; // 0x34
	FName BoneName; // 0x40
	bool IsHeadshot; // 0x48
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FAnimNode_RigidBodySkipServer : FAnimNode_RigidBody {
	bool bIsDedicatedServer; // 0x5a8
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FKSResourceInfoSerializerContainer : FFastArraySerializer {
	TArray<FKSResourceInfoSerializerItem> ResourceInfoSerializerItems; // 0x108
};

struct FRecoilProfile {
	FRecoilInfo PelvisRecoil; // 0x0
	FRecoilInfo SpineRecoil; // 0x60
	FRecoilInfo NeckRecoil; // 0xc0
	FRecoilInfo HandRecoil; // 0x120
	FRecoilInfo RightClavicleRecoil; // 0x180
	float Spine1RecoilAlpha; // 0x1e0
	float Spine2RecoilAlpha; // 0x1e4
	float Spine3RecoilAlpha; // 0x1e8
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FKSAIMapPointStimulusEvent {
	AActor* Broadcaster; // 0x0
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FDebugMenuCommandInfo {
	FString CommandName; // 0x0
	EConsoleCommandParamType ParamType; // 0x10
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FKSPersistentMinPlayerDataContainer : FFastArraySerializer {
	TArray<FKSPersistentMinPlayerData> ReplicatedPlayerData; // 0x108
	TMap<FKSPersistentPlayerId, UKSPersistentPlayerData*> LocalPlayerData; // 0x118
	TSet<UKSPersistentPlayerData*> AllLocalPlayerData; // 0x168
	TSet<int32_t> KnownDeadEnginePlayerIds; // 0x1b8
};

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FAnimNode_BlendPoseNodeSkinned : FAnimNode_PoseBlendNode {
	FName SkinKeyword; // 0xa8
	UPoseAsset* TargetPose; // 0xb0
	bool bUsePoseAssetPinAsFallback; // 0xb8
	UPoseAsset* FallbackPose; // 0xc0
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FKSQueueSectionSort {
	FName QueueType; // 0x0
	int32_t SortOrder; // 0x8
};

struct FKSObjectiveCaptureInfo {
	float BaseCaptureTime; // 0x0
	float BaseRecaptureTime; // 0x4
	float CaptureRatePercentIncreasePerPlayer; // 0x8
	float FullCaptureDecayTime; // 0xc
	bool bPlayerMustBePresentToKeep; // 0x10
	bool bIsValid; // 0x11
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FKSPowerSlideInfo {
	bool bIsInPowerSlide; // 0x0
	EKSPowerSlideEndReason EndReason; // 0x1
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FPlayerHealthMeterState {
	int32_t HealthValue; // 0x0
	int32_t MaxHealth; // 0x4
	int32_t MaxHealthBonus; // 0x8
	int32_t ArmorValue; // 0xc
	int32_t OverhealValue; // 0x10
	bool IsDowned; // 0x14
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

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariable BoundVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x28
	FNiagaraVariable DefaultValueIfNonExistent; // 0x50
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
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

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType* Type; // 0x38
};

struct FAkXboxOneGDKApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FKSRequiredInputTypes {
	bool Gamepad; // 0x0
	bool Mouse; // 0x1
	bool Touch; // 0x2
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

struct FMasteryRewardData {
	UPUMG_StoreItem* StoreItem; // 0x0
	int32_t BadgeTier; // 0x8
};

struct FKSPersistentMinPlayerData : FFastArraySerializerItem {
	FKSPersistentPlayerId ID; // 0x10
	int32_t TeamNum; // 0x20
	FString PlayerName; // 0x28
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

struct FAssistInfo {
	TWeakObjectPtr<AKSPlayerState> Assistant; // 0x0
	float DamageContributed; // 0x8
	float ContributionPercent; // 0xc
	int32_t PointsAwarded; // 0x10
	TWeakObjectPtr<AKSPlayerState> Victim; // 0x14
	TWeakObjectPtr<AKSPlayerState> DownInstigator; // 0x1c
	bool bLethal; // 0x24
};

struct FTeamStats {
	int32_t TeamNum; // 0x0
	FString teamName; // 0x8
	int32_t teamScore; // 0x18
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FKSDeathInfo {
	EKSDeathState DeathState; // 0x0
	UDamageType* DamageType; // 0x8
	FVector DamageDirection; // 0x10
	float FinalBlowDamage; // 0x1c
	bool bImmediateRagdoll; // 0x20
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FKSActorFilter {
	TArray<UKSActorEvaluator*> EvaluatorArray; // 0x0
	TArray<UKSActorSource*> SourceArray; // 0x10
};

struct FPingInfo {
	EPingType PingType; // 0x0
	EPingMessage PingMessage; // 0x1
	FVector_NetQuantize Location; // 0x4
	FVector_NetQuantize PingIconOffset; // 0x10
	AActor* PingedActor; // 0x20
	AKSPlayerState* PingingPlayer; // 0x28
	TArray<AKSPlayerState*> AcknowledgedPlayers; // 0x30
	FLinearColor PingColor; // 0x40
	TSoftObjectPtr<UTexture2D> PingIconTexture; // 0x50
	FText PingTextForTextChat; // 0x78
	TArray<FText> PingTextParameters; // 0x90
	FTimerHandle ExpirationHandle; // 0xa0
	int32_t PingId; // 0xa8
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FAnimNode_LiveLinkPose : FAnimNode_Base {
	FPoseLink InputPose; // 0x20
	FLiveLinkSubjectName LiveLinkSubjectName; // 0x30
	ULiveLinkRetargetAsset* RetargetAsset; // 0x38
	ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x40
};

struct FSoundModulation {
	TArray<USoundModulationPluginSourceSettingsBase*> Settings; // 0x0
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

struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x0
	uint32_t DiffractionFlags; // 0x4
	float MovementThreshold; // 0x8
	uint32_t NumberOfPrimaryRays; // 0xc
	uint32_t ReflectionOrder; // 0x10
	bool EnableDiffractionOnReflections; // 0x14
	bool EnableDirectPathDiffraction; // 0x15
	float MaximumPathLength; // 0x18
	bool EnableTransmission; // 0x1c
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
	FAkAdvancedSpatialAudioSettings SpatialAudioSettings; // 0x2c
};

struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x0
	TArray<FName> Tags; // 0x30
	bool bContinuouslyRespawn; // 0x40
	FGuid Guid; // 0x44
	FString Name; // 0x58
	UObject* ObjectTemplate; // 0x68
	TArray<FGuid> ChildPossessables; // 0x70
	ESpawnOwnership Ownership; // 0x80
	FName LevelName; // 0x84
};

struct FReportPlayerParams {
	int64_t PlayerId; // 0x0
	FSerializedMatchId MatchID; // 0x8
	int32_t LocalPlayerTeamId; // 0x18
	int32_t ReportedPlayerTeamId; // 0x1c
	int32_t TotalPlayerCount; // 0x20
	bool FromBackfillEnabledGame; // 0x24
	FString PlayerName; // 0x28
	EReportPlayerReason Reason; // 0x38
	FString ReportComment; // 0x40
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
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FKSInteractionBlocker {
	FName BlockReason; // 0x0
};

struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xd8
	FVector OverrideWorldGravity; // 0xe0
	FVector ExternalForce; // 0xec
	FVector ComponentLinearAccScale; // 0xf8
	FVector ComponentLinearVelScale; // 0x104
	FVector ComponentAppliedLinearAccClamp; // 0x110
	float CachedBoundsScale; // 0x11c
	FBoneReference BaseBoneRef; // 0x120
	ECollisionChannel OverlapChannel; // 0x130
	ESimulationSpace SimulationSpace; // 0x131
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x132
	char bEnableWorldGeometry : 1; // 0x133
	char bOverrideWorldGravity : 1; // 0x133
	char bTransferBoneVelocities : 1; // 0x133
	char bFreezeIncomingPoseOnStart : 1; // 0x133
	char bClampLinearTranslationLimitToRefPose : 1; // 0x133
	FSolverIterations OverrideSolverIterations; // 0x134
};

struct FKSPendingWeaponStateUpdates {
	uint32_t BroadcastId; // 0x0
	uint16_t nEquipmentId; // 0x4
	FKSWeaponDataUpdateContainer UpdateData; // 0x6
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
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
	int32_t HierarchicalBias; // 0x94
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x98
	FGuid SubSectionSignature; // 0xb8
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0xc8
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FTelemetrySettings {
	bool bPingEnabled; // 0x0
	bool bPacketLossEnabled; // 0x1
	bool bFPSEnabled; // 0x2
	bool bTelemetryFeatureActive; // 0x3
};

struct FKSPerkTreeEdgeInfo {
	EPerkTreeEdgeType EdgeType; // 0x0
	EPerkTreeEdgeState EdgeState; // 0x1
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FMovieSceneEvaluationField EvaluationField; // 0xa0
	FMovieSceneSequenceHierarchy Hierarchy; // 0xd0
	FGuid SequenceSignature; // 0x170
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0x180
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0x188
	FMovieSceneTrackFieldData TrackFieldData; // 0x230
	FMovieSceneSubSectionFieldData SubSectionFieldData; // 0x290
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

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FTimeAnnouncement {
	float Time; // 0x0
	FAnnouncement Announcement; // 0x8
	TArray<FName> AnnouncementGroups; // 0x48
	bool Block; // 0x58
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

struct FAnimOrientationWarpDefinition {
	EAxis YawRotationAxis; // 0x0
	bool UseBoneSpaceForSpineWarp; // 0x1
	float OrientationAlpha; // 0x4
	TArray<FBoneReference> SpineBones; // 0x8
	FBoneReference IkFootRoot; // 0x18
	TArray<FBoneReference> IkFootBones; // 0x28
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

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
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

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FKSCSVRow {
	TArray<FString> CSVColumn; // 0x0
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FScoreboardStats {
	int32_t userPlayerID; // 0x0
	int32_t winTeamNum; // 0x4
	FString mapName; // 0x8
	FSerializedMatchId MatchID; // 0x18
	int32_t GameMode; // 0x28
	TArray<FTeamStats> teams; // 0x30
	TArray<FPlayerEntryStats> playerStats; // 0x40
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x28
	TArray<TFieldPath<FProperty>> InputProperties; // 0x38
};

struct FPlayerRewardsSummaryReplicated {
	TArray<int64_t> ActivityKeys; // 0x0
	TArray<FRewardProgress> ActivityValues; // 0x10
	TArray<FPlayerMatchStatInfo> BestStats; // 0x20
};

struct FKickTrendProfile {
	int32_t StartingShotIndex_2_AF3181EC472A16B774B5C98BCB67A5CA; // 0x0
	float MinimumHorizontalKick_5_FEA75293411D195820D85BAB34847371; // 0x4
	float MaximumHorizontalKick_7_5D06359B48B7729939CFEDA82219DF53; // 0x8
	float PositiveHorizontalKickChance_9_2232430A494CB894D9D3A4801EBAE9DC; // 0xc
	float MinimumVerticalKick_11_281B33B449A60EDE39E9D3BB45D2E8D9; // 0x10
	float MaximumVerticalKick_13_249E469A4B76A025ECAB59BBE18D85C9; // 0x14
	float PositiveVerticalKickChance_15_4B720E5249C0C55CCDE0BABD1527D8BF; // 0x18
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

struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventPtrs EventToTrigger; // 0x38
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FPrimaryOffering {
	UKSItem* Offering; // 0x0
	bool Mastered; // 0x8
	bool Favorited; // 0x9
	bool Default; // 0xa
};

struct FLoadingScreenImageRow : FTableRowBase {
	FSoftObjectPath Map; // 0x8
	TSoftObjectPtr<UTexture2D> LoadingScreenImage; // 0x20
	FText MapDisplayName; // 0x48
	FText MapRegion; // 0x60
	FText MapDescription; // 0x78
};

struct FBotDifficultyChangeEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t difficulty_index; // 0x4
	FString Timestamp; // 0x8
};

struct FKSParticleSystemAttachment {
	UParticleSystem* ParticleSystem; // 0x0
	FName SocketName; // 0x8
	FVector Scale; // 0x10
	FVector AttachmentOffset; // 0x1c
	FRotator AttachmentRotationOffset; // 0x28
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingID; // 0x0
	uint16_t EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	FMovieSceneEvaluationTrackSegments Segments; // 0x18
	UMovieSceneTrack* SourceTrack; // 0x38
	FSectionEvaluationDataTree EvaluationTree; // 0x40
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xa0
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0xb0
	FName EvaluationGroup; // 0xe8
	char bEvaluateInPreroll : 1; // 0xf0
	char bEvaluateInPostroll : 1; // 0xf0
	char bTearDownPriority : 1; // 0xf0
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FKSActorFilterConfig {
	TArray<UKSActorEvaluator*> Evaluators; // 0x0
	TArray<UKSActorSource*> Sources; // 0x10
	bool bEnableTickedFilterChecks; // 0x20
	float TimeBetweenActorFilterChecks; // 0x24
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FReplicatedViewInfo {
	float Pitch; // 0x0
	float Yaw; // 0x4
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FKSDamageRecord {
	TArray<UKSWeaponAsset*> WeaponsUsed; // 0x0
	float TotalRecordedDamage; // 0x10
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FKSAmmoTransactions {
	uint64_t TransactionId; // 0x0
	uint32_t UpdateIdAtTimeOfTransaction; // 0x8
	EAmmoType AmmoType; // 0xc
	int32_t AmmoDelta; // 0x10
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
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

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FPGame_ReplicatedTimerManager : FPGame_ReplicatedTimerManagerBase {
	char NextTimerId; // 0x120
};

struct FKSPlayerIdentityData : FFastArraySerializerItem {
	FKSPersistentPlayerId ID; // 0x10
	TSoftObjectPtr<UKSItem> avatar; // 0x20
	TSoftObjectPtr<UKSItem> Banner; // 0x48
	TSoftObjectPtr<UKSItem> PreferredJob; // 0x70
	TSoftObjectPtr<UKSItem> Border; // 0x98
	TSoftObjectPtr<UKSItem> Title; // 0xc0
};

struct FKSDestructibleStateFilter {
	bool bCheckIsDestroyed; // 0x0
	EBasicKeyOperation Destroyed; // 0x1
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
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

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FKSFootprintInfo {
	FTimerHandle FootprintTimerHandle; // 0x0
	TWeakObjectPtr<UPoolableDecalComponent> FootprintPoolableDecalComponent; // 0x8
	int32_t FootprintInstancedMeshIndex; // 0x10
	int32_t FootprintId; // 0x14
	FVector FootprintLocation; // 0x18
	FRotator FootprintRotation; // 0x24
	bool bRightFoot; // 0x30
};

struct FKSFlashBangRecord {
	EFlashBangIntensity FlashBangIntensity; // 0x0
	UCurveFloat* IntensityCurve; // 0x8
	float TimeElapsed; // 0x10
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FKSRankedProgressionRow {
	FString RankedProgressionKey; // 0x0
	float WinBaseValue; // 0x10
	float LossBaseValue; // 0x14
	float MaxBonusClamp; // 0x18
	float MinBonusClamp; // 0x1c
	float RankDifferenceMultiplier; // 0x20
	int32_t RequiredPlacementMatches; // 0x24
	int32_t PartyRankRange; // 0x28
	int32_t InitialPlacementDifference; // 0x2c
	int32_t MinPlacementPartyLevel; // 0x30
	int32_t MaxPlacementPartyLevel; // 0x34
	TArray<FKSFavoredMatchBonusEntry> FavoredMatchBonusList; // 0x38
	TArray<float> MMRZoneList; // 0x48
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FUIFontPalette {
	FSlateFontInfo GeneralHeading_17_D2D2858D46D790E57D7D8A9140F3A45C; // 0x0
	FSlateFontInfo TooltipHeading_18_4EA193C444FE7A4F73827A86213800F5; // 0x50
	FSlateFontInfo SubScreenHeading_29_CC0C81724643CD2C73AFF383D8355F77; // 0xa0
	FSlateFontInfo Subtitle_30_652CCC224E670DDF122B228933B5A5F2; // 0xf0
	FSlateFontInfo BoldSubtitle_31_82D86BB848ED28066E5B5AA3D4E4DED0; // 0x140
	FSlateFontInfo GeneralBodyCopy_26_84EC6719490FA1867F42869A5E146E06; // 0x190
	FSlateFontInfo FictionBodyCopy_28_221EDF9F4EE5F5DA0B9A18819EFE44C2; // 0x1e0
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FBoneReference IKBone; // 0xd8
	float StartStretchRatio; // 0xe8
	float MaxStretchScale; // 0xec
	FVector EffectorLocation; // 0xf0
	FBoneSocketTarget EffectorTarget; // 0x100
	FVector JointTargetLocation; // 0x160
	FBoneSocketTarget JointTarget; // 0x170
	FAxis TwistAxis; // 0x1d0
	EBoneControlSpace EffectorLocationSpace; // 0x1e0
	EBoneControlSpace JointTargetLocationSpace; // 0x1e1
	char bAllowStretching : 1; // 0x1e2
	char bTakeRotationFromEffectorSpace : 1; // 0x1e2
	char bMaintainEffectorRelRot : 1; // 0x1e2
	char bAllowTwist : 1; // 0x1e2
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

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FBattlepassUpsellData {
	TSoftObjectPtr<UTexture2D> background; // 0x0
	TSoftObjectPtr<UTexture2D> Shade; // 0x28
	TSoftObjectPtr<UTexture2D> Outfits; // 0x50
	TSoftObjectPtr<UTexture2D> Wingsuits; // 0x78
	TSoftObjectPtr<UTexture2D> WeaponWraps; // 0xa0
	TSoftObjectPtr<UTexture2D> ChaseSkin; // 0xc8
	TSoftObjectPtr<UTexture2D> Smoke; // 0xf0
	TSoftObjectPtr<UTexture2D> Currency; // 0x118
};

struct FStateMachineModEntry {
	FName Key; // 0x0
	UKSModInst_Activated* ModInst; // 0x8
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FChargeInfo {
	FVector ChargeInitialLocation; // 0x0
	float ChargeInitialYaw; // 0xc
	float ChargeSpeed; // 0x10
	float ChargeRange; // 0x14
	char ChargeType; // 0x18
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FKSBTDifficultyConfig {
	float AccuracyMultiplierStandard; // 0x0
	float AccuracyMultiplierThrownMelee; // 0x4
	float AccuracyMultiplierThrownGrenade; // 0x8
	float AccuracyMultiplierWhenBlinded; // 0xc
	float AccuracyMultiplierWhenCrosshairHidden; // 0x10
	float NewTargetAccuracyMultiplier; // 0x14
	float NewTargetTime; // 0x18
	float SpeedMultiplier; // 0x1c
	float AttackDelayClipPercentMin; // 0x20
	float AttackDelayClipPercentMax; // 0x24
	float AttackDelay; // 0x28
	float DamageDealtMultiplier; // 0x2c
	float HeadshotDamageDealtMultiplier; // 0x30
	float DamageTakenMultiplier; // 0x34
	float HeadshotDamageTakenMultiplier; // 0x38
	float AimForHeadshotProbability; // 0x3c
	float DodgeRollProbability; // 0x40
	float StrafeProbability; // 0x44
	float ThrowGrenadeProbability; // 0x48
	float ThrowMeleeProbability; // 0x4c
	float PerceptionStrengthMin; // 0x50
	float PerceptionStrengthMax; // 0x54
	TArray<UKSBTAction*> AllowedActions; // 0x58
	TArray<UKSBTAction*> DisallowedActions; // 0x68
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
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

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xf0
};

struct FCombatEventInfoContainer {
	TArray<FCombatEventInfo> CombatEventInfoArray; // 0x0
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FOverlayTabViewRow : FTableRowBase {
	FText TabName; // 0x8
	UPUMG_Widget* ViewWidget; // 0x20
	UKSTabValidator* TabValidator; // 0x28
};

struct FKSDamageHistory {
	AController* DamageInstigator; // 0x0
	UDamageType* DamageType; // 0x8
};

struct FKSRandomDropRow : FTableRowBase {
	UKSItem* DropAsset; // 0x8
	float DropChance; // 0x10
	EDropPickupConfig DropPickupConfig; // 0x14
};

struct FParticleChannelContainer {
	char Default : 1; // 0x0
	char Friendly : 1; // 0x0
	char Enemy : 1; // 0x0
	char TaskForce1 : 1; // 0x0
	char TaskForce2 : 1; // 0x0
	char VerticalTargeter : 1; // 0x1
	char LocalOwner : 1; // 0x1
	char NotLocalOwner : 1; // 0x1
	char CustomFilter1 : 1; // 0x2
	char CustomFilter2 : 1; // 0x2
	char CustomFilter3 : 1; // 0x2
	char CustomFilter4 : 1; // 0x2
	char CustomFilter5 : 1; // 0x2
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FClientContext {
	FString ClientCurrentLanguage; // 0x0
	int32_t ClientSelectedSiteId; // 0x10
	int32_t DivertFromQueueId; // 0x14
	int32_t DivertToQueueId; // 0x18
	EQueueDivertType QueueDivertType; // 0x1c
	float ShelteredMMAttemptTimeout; // 0x20
	float ShelteredMMLevelLimit; // 0x24
	int32_t ForcedBotMatchLimit; // 0x28
	int32_t MercyMatchLossesRequired; // 0x2c
	FString BuildVersion; // 0x30
	int32_t ViewportSizeX; // 0x40
	int32_t ViewPortSizeY; // 0x44
	FString DeviceMakeAndModel; // 0x48
	FString PrimaryGPUBrand; // 0x58
	FString BranchName; // 0x68
	uint64_t AvailablePhysicalMemory; // 0x78
	uint64_t TotalPhysicalMemory; // 0x80
	uint64_t AvailableVirtualMemory; // 0x88
	uint64_t TotalVirtualMemory; // 0x90
	float CPUBenchmarkResults; // 0x98
	float GPUBenchmarkResults; // 0x9c
	float ResolutionQuality; // 0xa0
	int32_t GlobalQuality; // 0xa4
	int32_t ViewDistanceQuality; // 0xa8
	int32_t AntiAliasingQuality; // 0xac
	int32_t ShadowQuality; // 0xb0
	int32_t PostProcessQuality; // 0xb4
	int32_t TextureQuality; // 0xb8
	int32_t EffectsQuality; // 0xbc
	int32_t FoliageQuality; // 0xc0
	int32_t ShadingQuality; // 0xc4
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FBodyInstance {
	ECollisionChannel ObjectType; // 0x6
	ECollisionEnabled CollisionEnabled; // 0x8
	ESleepFamily SleepFamily; // 0xa
	EDOFMode DOFMode; // 0xb
	char bUseCCD : 1; // 0xc
	char bIgnoreAnalyticCollisions : 1; // 0xc
	char bNotifyRigidBodyCollision : 1; // 0xc
	char bSimulatePhysics : 1; // 0xc
	char bOverrideMass : 1; // 0xc
	char bEnableGravity : 1; // 0xc
	char bAutoWeld : 1; // 0xc
	char bStartAwake : 1; // 0xd
	char bGenerateWakeEvents : 1; // 0xd
	char bUpdateMassWhenScaleChanges : 1; // 0xd
	char bLockTranslation : 1; // 0xd
	char bLockRotation : 1; // 0xd
	char bLockXTranslation : 1; // 0xd
	char bLockYTranslation : 1; // 0xd
	char bLockZTranslation : 1; // 0xd
	char bLockXRotation : 1; // 0xe
	char bLockYRotation : 1; // 0xe
	char bLockZRotation : 1; // 0xe
	char bOverrideMaxAngularVelocity : 1; // 0xe
	char bOverrideMaxDepenetrationVelocity : 1; // 0xe
	char bOverrideWalkableSlopeOnInstance : 1; // 0xe
	char bInterpolateWhenSubStepping : 1; // 0xf
	FName CollisionProfileName; // 0x1c
	char PositionSolverIterationCount; // 0x24
	char VelocitySolverIterationCount; // 0x25
	FCollisionResponse CollisionResponses; // 0x28
	float MaxDepenetrationVelocity; // 0x58
	float MassInKgOverride; // 0x5c
	float LinearDamping; // 0x68
	float AngularDamping; // 0x6c
	FVector CustomDOFPlaneNormal; // 0x70
	FVector COMNudge; // 0x7c
	float MassScale; // 0x88
	FVector InertiaTensorScale; // 0x8c
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xa8
	UPhysicalMaterial* PhysMaterialOverride; // 0xb8
	float MaxAngularVelocity; // 0xc0
	float CustomSleepThresholdMultiplier; // 0xc4
	float StabilizationThresholdMultiplier; // 0xc8
	float PhysicsBlendWeight; // 0xcc
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
	char bBuildVertexCurvature : 1; // 0x1
	float ThresholdPosition; // 0x4
	float ThresholdTangentNormal; // 0x8
	float ThresholdUV; // 0xc
	float MorphThresholdPosition; // 0x10
};

struct FKSLootChanceTableRow : FTableRowBase {
	TSoftObjectPtr<UKSItem> KSItem; // 0x8
	FKSLootItemInfo LootItemInfo; // 0x30
	int32_t Weight; // 0x38
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x7f8
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FSoftDataTableInfo {
	TSoftObjectPtr<UDataTable> DataTable; // 0x0
	int32_t TablePriority; // 0x28
	FGameplayTagQuery SkinTagQuery; // 0x30
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xd8
	int32_t MaxIterations; // 0xdc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xe0
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FItemTableElement : FTableRowBase {
	TSoftObjectPtr<UKSItem> Item; // 0x8
};

struct FKSBackfillDynamicSealInfo {
	bool bRoundCount; // 0x0
	int32_t RoundCount; // 0x4
	bool bLeadCount; // 0x8
	int32_t LeadCount; // 0xc
	bool bWinsUntilVictory; // 0x10
	int32_t WinsUntilVictory; // 0x14
};

struct FPropIdentifier {
	FName PropIdentifierName; // 0x0
	TWeakObjectPtr<USkeletalMeshComponent> SkelMeshComp; // 0x8
};

struct FMatchRecord {
	int32_t version_major; // 0x0
	int32_t version_minor; // 0x4
	FSerializedInstanceId instance_id; // 0x8
	int32_t instance_site_id; // 0x18
	FSerializedMatchId match_id; // 0x20
	FString map_name; // 0x30
	FString mode_name; // 0x40
	int32_t map_game_id; // 0x50
	int32_t queue_id; // 0x54
	int32_t team_size; // 0x58
	int32_t winning_team; // 0x5c
	FString match_start_time; // 0x60
	FString match_end_time; // 0x70
	int32_t match_fubar_state; // 0x80
	int32_t Duration; // 0x84
	int32_t total_rounds; // 0x88
	int32_t total_players; // 0x8c
	int32_t total_bots; // 0x90
	int32_t total_earned; // 0x94
	int32_t total_spent; // 0x98
	int32_t total_refunded; // 0x9c
	int32_t total_on_time; // 0xa0
	int32_t total_deserters; // 0xa4
	int32_t total_deserter_rounds; // 0xa8
	int32_t total_surrender_polls; // 0xac
	bool ended_in_surrender; // 0xb0
	int32_t total_penalized_players; // 0xb4
	FMinimapData Minimap; // 0xb8
	TArray<FPlayerRecord> Players; // 0xd8
	TArray<FJobSelectionRecord> job_selection_records; // 0xe8
	TArray<FJobBanRecord> job_ban_records; // 0xf8
	TMap<int32_t, FClientContextRecord> client_context_records; // 0x108
	TMap<int32_t, FObjectDictionaryRecord> object_dictionary_records; // 0x158
	TArray<FRoundEventRecord> rounds; // 0x1a8
	TArray<FPlayerConnectionEventRecord> player_connections; // 0x1b8
	TArray<FBotBackfillEventRecord> bot_backfill; // 0x1c8
	TArray<FObjectiveCaptureEventRecord> objective_capture_events; // 0x1d8
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FAnimNode_BlendByDedicatedServer : FAnimNode_Base {
	FPoseLink NotDedicatedServer; // 0x20
	FPoseLink DedicatedServer; // 0x30
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FMovieSceneTrackLabels {
	TArray<FString> strings; // 0x0
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x2
};

struct FNiagaraFunctionSignature {
	FName Name; // 0x0
	TArray<FNiagaraVariable> Inputs; // 0x8
	TArray<FNiagaraVariable> Outputs; // 0x18
	FName OwnerName; // 0x28
	char bRequiresContext : 1; // 0x30
	char bMemberFunction : 1; // 0x30
	char bExperimental : 1; // 0x30
	char bSupportsCPU : 1; // 0x30
	char bSupportsGPU : 1; // 0x30
	char bWriteFunction : 1; // 0x30
	TMap<FName, FName> FunctionSpecifiers; // 0x38
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FKSAimAssistPropertyBool {
	EControllerInputType InputType; // 0x0
	bool Value; // 0x1
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FAccountJobStatReplicatorEntry : FFastArraySerializerItem {
	FAccountJobStatKey Key; // 0x10
	int32_t Value; // 0x50
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

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x20
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FKSEquipRepInfo {
	bool NoEquipPoint; // 0x0
	FGameplayTag EquipPoint; // 0x4
	uint32_t UpdateId; // 0xc
	FKSEquipmentId ComponentId; // 0x10
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FIconReference {
	FName IconType; // 0x0
	TSoftObjectPtr<UTexture2D> Icon; // 0x8
	FSoftObjectPath IconPath; // 0x30
	TSoftObjectPtr<UTexture2D> LegacySoftTexture; // 0x48
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FAccoladeMultiElimTracker {
	int32_t ElimReqAmount; // 0x0
	FAccoladeDisplayInfo AccoladeReward; // 0x8
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FInternalPingInfo {
	int32_t PingId; // 0x0
	int32_t DisplayId; // 0x4
	AKSPlayerState* CreatingPlayer; // 0x8
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FPunishmentConfigEntry {
	int32_t PunishmentLootTableId; // 0x0
	int32_t PunishmentQuantity; // 0x4
};

struct FKSAssetOverrideTable_TableRow : FTableRowBase {
	TSoftObjectPtr<UKSWeaponAsset> WeaponAsset; // 0x8
	TSoftObjectPtr<UDataTable> WeaponSpecificOverrideTable; // 0x30
	int32_t TablePriority; // 0x58
	FGameplayTagQuery SkinTagQuery; // 0x60
};

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x20
	TArray<FPoseLink> BlendPoses; // 0x30
	TArray<FInputBlendPose> LayerSetup; // 0x40
	TArray<float> BlendWeights; // 0x50
	bool bMeshSpaceRotationBlend; // 0x60
	bool bMeshSpaceScaleBlend; // 0x61
	ECurveBlendOption CurveBlendOption; // 0x62
	bool bBlendRootMotionBasedOnRootBone; // 0x63
	int32_t LODThreshold; // 0x68
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x70
	FGuid SkeletonGuid; // 0x80
	FGuid VirtualBoneGuid; // 0x90
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

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FPUMG_ChatCommand {
	FString Function; // 0x0
	TArray<FString> Commands; // 0x10
	FText Desc; // 0x20
	UObject* Target; // 0x38
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
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

struct FRBFParams {
	int32_t TargetDimensions; // 0x0
	ERBFSolverType SolverType; // 0x4
	float Radius; // 0x8
	ERBFFunctionType Function; // 0xc
	ERBFDistanceMethod DistanceMethod; // 0xd
	EBoneAxis TwistAxis; // 0xe
	float WeightThreshold; // 0x10
	ERBFNormalizeMethod NormalizeMethod; // 0x14
	FVector MedianReference; // 0x18
	float MedianMin; // 0x24
	float MedianMax; // 0x28
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FKSPostProcessFloatCurve {
	UCurveFloat* FloatCurve; // 0x0
	FName FloatParameterName; // 0x8
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x20
	int32_t MaxTransitionsPerFrame; // 0x24
	bool bSkipFirstUpdateTransition; // 0x28
	bool bReinitializeOnBecomingRelevant; // 0x29
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString Tooltip; // 0x10
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x20
	int32_t LODThreshold; // 0x30
	float ActualAlpha; // 0x34
	EAnimAlphaInputType AlphaInputType; // 0x38
	bool bAlphaBoolEnabled; // 0x39
	float Alpha; // 0x3c
	FInputScaleBias AlphaScaleBias; // 0x40
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x48
	FName AlphaCurveName; // 0x90
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x98
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FSourceEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
};

struct FWeaponWrapTestPairs {
	FSoftObjectPath Weapon; // 0x0
	FSoftObjectPath Attachment; // 0x18
};

struct FPlatformPropertyId {
	uint16_t ID; // 0x0
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x18
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FKSInteractableCameraTransition {
	FName CameraName; // 0x0
	float TransitionInTime; // 0x8
	EViewTargetBlendFunction TransitionInFunction; // 0xc
	float TransitionInExp; // 0x10
	float TransitionOutTime; // 0x14
	bool bForceCameraShoulder; // 0x18
	ECameraShoulder CameraShoulder; // 0x19
	float RotationLockAngle; // 0x1c
	bool RotationLockout; // 0x20
	bool bLockPitch; // 0x21
	bool bLockYaw; // 0x22
	bool bCameraShake; // 0x23
	UCameraShake* CameraShake; // 0x28
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FKSBonusProgressionRow {
	FString BonusProgressionKey; // 0x0
	TMap<FString, float> BonusProgressionList; // 0x10
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FKSAnimNode_OrientationWarp : FAnimNode_SkeletalControlBase {
	float Angle; // 0xd8
	float OrientationAlphaOverride; // 0xdc
	FAnimOrientationWarpDefinition WarpSettings; // 0xe0
	bool bUseOrientationAlphaOverride; // 0x118
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FSkeletalMeshMaterialToReductionGroup {
	FString NameToMatch; // 0x0
	int32_t ReductionGroup; // 0x10
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FKSPlayerProfile : FPGame_PlayerProfile {
	int32_t TeamNumber; // 0x20
};

struct FRoundInitState {
	char RoundNumber; // 0x0
	int32_t AttackingTeam; // 0x4
	int32_t DefendingTeam; // 0x8
	char LastPrepareTriggered; // 0xc
	char LastRoundStartTriggered; // 0xd
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x58
};

struct FKSSettingsState {
	bool bIsGamepadAttached; // 0x0
	bool bIsMouseAttached; // 0x1
	bool bIsDockedMode; // 0x2
	bool bIsHandheldMode; // 0x3
	bool bIsTouchMode; // 0x4
};

struct FKSTimerPriorityConfig {
	EKSPriority RoundTimerPriority; // 0x0
	EKSPriority PhaseTimerPriority; // 0x1
	EKSPriority ObjectiveTimerPriority; // 0x2
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FJobSelectionEntry : FFastArraySerializerItem {
	int32_t JobId; // 0xc
	TArray<FPlayerJobSelectInfo> CurrentPlayerInfos; // 0x10
	EJobSelectionState LocalAvailability; // 0x20
	EJobUniquenessRule CachedJobUniquenessRule; // 0x21
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

struct FLiveLinkPongMessage {
	FString ProviderName; // 0x0
	FString MachineName; // 0x10
	FGuid PollRequest; // 0x20
	int32_t LiveLinkVersion; // 0x30
	double CreationPlatformTime; // 0x38
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x20
	FPoseLink Additive; // 0x30
	float Alpha; // 0x40
	FInputScaleBias AlphaScaleBias; // 0x44
	int32_t LODThreshold; // 0x4c
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x50
	FName AlphaCurveName; // 0x98
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xa0
	EAnimAlphaInputType AlphaInputType; // 0xd4
	bool bAlphaBoolEnabled; // 0xd5
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FLaggedProjectileHit {
	FHitResult HitResult; // 0x0
	float ClientHitTimeStamp; // 0x88
	float AdditionalPredictionTime; // 0x8c
	EProjectilePredictionType PredictionType; // 0x90
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	float CrushedBits; // 0x4
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FKSMantleInfo {
	bool bIsMantling; // 0x0
	bool bVaultingOver; // 0x1
	float ApproachDist; // 0x4
	float MantleHeight; // 0x8
	float ForwardDist; // 0xc
	float VaultDrop; // 0x10
	float MantleUpDuration; // 0x14
	float VaultAcrossDuration; // 0x18
	float VaultDownDuration; // 0x1c
	FName MantleName; // 0x20
	FVector WorldSpaceGrabLocation; // 0x28
	FVector WorldTowardsWallDir; // 0x34
	bool bFromStanding; // 0x40
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x20
	FPoseLink Additive; // 0x30
	bool bMeshSpaceAdditive; // 0x40
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FHirezObjectPoolQueuedEntry {
	int32_t FramesLeft; // 0x0
	UObject* MyClass; // 0x8
	FName MyName; // 0x10
};

struct FQosRegionInfo {
	FText DisplayName; // 0x0
	FString RegionId; // 0x18
	bool bEnabled; // 0x28
	bool bVisible; // 0x29
	bool bAutoAssignable; // 0x2a
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FJobSelectionList : FFastArraySerializer {
	TArray<FJobSelectionEntry> EntryMap; // 0x108
	UKSJobSelectionComponent* Owner; // 0x118
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

struct FKSInitialInventoryTableEntry {
	FGameplayTag EquipPoint; // 0x0
	TSoftObjectPtr<UKSItem> ItemAsset; // 0x8
	TArray<TSoftObjectPtr<UKSWeaponAttachment>> Attachments; // 0x30
};

struct FPlayerSkinMap {
	FKSPersistentPlayerId PlayerId; // 0x0
	TMap<UKSItem*, UKSItem*> SkinMap; // 0x10
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

struct FMagicLeapSharedWorldPinData {
	FGuid PinID; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FKSMapPointStateFilter {
	bool bCheckMapPointType; // 0x0
	FGameplayTagContainer RequiredMapPointTypes; // 0x8
	bool bCheckIsPointActive; // 0x28
	EBasicKeyOperation IsPointActive; // 0x29
	bool bCheckIsPointAvailable; // 0x2a
	EBasicKeyOperation IsPointAvailable; // 0x2b
	bool bCheckIsPointFriendly; // 0x2c
	EBasicKeyOperation IsPointFriendly; // 0x2d
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
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

struct FJobSelectionTask : FFastArraySerializerItem {
	FJobSelectionTaskId TaskId; // 0xc
	EJobSelectionTaskType TaskType; // 0xe
	UKSJobItem* SelectedJob; // 0x10
	FKSPersistentPlayerId Player; // 0x18
	FKSPersistentPlayerId SelectingProxy; // 0x28
	int32_t TeamNum; // 0x38
	bool bHaltingTask; // 0x3c
	float TimeForTask; // 0x40
	FPGame_ReplicatedTimerId TimerId; // 0x44
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

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
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

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FPGame_InactivePlayerStateEntry {
	APlayerState* PlayerState; // 0x8
};

struct FTrackPlayerElim {
	int32_t PlayerInstigatorId; // 0x0
	int32_t PlayerVictimId; // 0x4
};

struct FAssistTag {
	float ExpirationTime; // 0x0
	AKSPlayerState* Assistant; // 0x8
};

struct FKSWeaponDropAttachmentContainer : FFastArraySerializer {
	TArray<FKSWeaponDropAttachmentContainerEntry> Attachments; // 0x108
	AKSWeaponAssetDrop* Owner; // 0x120
};

struct FSimulationStageMetaData {
	FName IterationSource; // 0x0
	char bSpawnOnly : 1; // 0x8
	char bWritesParticles : 1; // 0x8
	TArray<FName> OutputDestinations; // 0x10
	int32_t MinStage; // 0x20
	int32_t MaxStage; // 0x24
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FPartyRepData : FOnlinePartyRepDataBase {
	FPartyPrivacySettings PrivacySettings; // 0x20
	TArray<FPartyPlatformSessionInfo> PlatformSessions; // 0x58
};

struct FMatchPhase {
	FName Name; // 0x0
	FName Description; // 0x8
	int32_t ID; // 0x10
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
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

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x90
	FSlateBrush DisabledBarImage; // 0x118
	FSlateBrush NormalThumbImage; // 0x1a0
	FSlateBrush HoveredThumbImage; // 0x228
	FSlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FKSWeaponDataUpdateContainer {
	bool bChangeWeaponState; // 0x0
	EWeaponStateNew WeaponState; // 0x1
	bool bChangeAimMode; // 0x2
	EKSCharacterAimMode AimMode; // 0x3
};

struct FMasteryMiscRewardContainer {
	TArray<UKSMasteryMiscReward*> MiscRewards; // 0x0
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
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

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FRoundEventRecord {
	int32_t round_id; // 0x0
	FString round_start_time; // 0x8
	int32_t Duration; // 0x18
	TArray<FTeamSideRecord> team_sides; // 0x20
	int32_t winning_team; // 0x30
	FString win_condition; // 0x38
	TArray<FMirrorMatchupRecord> mirror_matchup_records; // 0x48
	TArray<FPlayerStartingCashRecord> round_starting_cash; // 0x58
	TArray<FPurchasedItemEventRecord> purchased_item_events; // 0x68
	TArray<FPurchasedItemEventRecord> refunded_item_events; // 0x78
	TArray<FCashCollectionEventRecord> cash_collection_events; // 0x88
	TArray<FDownEventRecord> down_events; // 0x98
	TArray<FExecuteEventRecord> execute_events; // 0xa8
	TArray<FAssistEventRecord> assist_events; // 0xb8
	TArray<FReviveEventRecord> revive_events; // 0xc8
	TArray<FWeaponUseSummaryRecord> weapon_use_summaries; // 0xd8
	TArray<FAbilityUseEventRecord> ability_use_events; // 0xe8
	TArray<FRadialMenuItemUseEventRecord> radial_menu_item_use_events; // 0xf8
	TArray<FCommunicationUseEventRecord> communication_use_events; // 0x108
	TArray<FGadgetUseEventRecord> gadget_use_events; // 0x118
	TArray<FEliminationStreakEventRecord> elimination_streak_events; // 0x128
	TArray<FMultipleKillEventRecord> multiple_kill_events; // 0x138
	TArray<FBotStartingDifficultyRecord> round_starting_bot_difficulties; // 0x148
	TArray<FBotDifficultyChangeEventRecord> bot_difficulty_change_events; // 0x158
	TArray<FOrientationEventRecord> orientation_events; // 0x168
	TArray<FPollEndEventRecord> poll_end_events; // 0x178
	TArray<FRoundClientInputTypeUse> client_input_use; // 0x188
	TMap<uint64_t, FRoundPlayerSummary> round_player_summary; // 0x198
	FRoundSummary round_summary; // 0x1e8
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
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

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
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

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
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

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0xc
	FExpressionInput HeightInput; // 0x20
	float PreviewWeight; // 0x34
	FVector ConstLayerInput; // 0x38
	float ConstHeightInput; // 0x44
};

struct FPUMG_ChatData {
	UPUMG_PlayerInfo* Sender; // 0x0
	UPUMG_PlayerInfo* Recipient; // 0x8
	FText Message; // 0x10
	bool IsOwnMessage; // 0x28
	bool IsSeen; // 0x29
	bool SystemMessage; // 0x2a
	bool IsReplayedMessage; // 0x2b
	EPUMG_ChatChannel ChatChannel; // 0x2c
	EPUMG_ChatPhase ChatPhase; // 0x2d
	EPCOM_PrivilegeStatus UserPrivilege; // 0x2e
	EPUMG_TextFilterStatus PortalTextFilterStatus; // 0x2f
	int32_t MessageId; // 0x30
	int64_t MctsMessageId; // 0x38
};

struct FKSDamageEventInfo {
	UDamageType* DamageTypeClass; // 0x0
	int32_t DamageClassId; // 0x8
	TArray<FHitResult> HitResults; // 0x10
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xb0
	FGuid LightGuid; // 0xe0
	int32_t PreviewShadowMapChannel; // 0xf0
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FShotgunHitData {
	UKSWeaponAsset_Shotgun* ShotgunAsset; // 0x0
	TArray<EShotgunHitResult> HitResults; // 0x8
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
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

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FLoadedWeaponAttachmentAnimationData {
	USkeletalMesh* WeaponAttachmentMesh; // 0x0
	UAnimSequence* WeaponAttachmentSequence; // 0x8
	UAnimMontage* Player3PHolsterMontage; // 0x10
	UAnimMontage* Player3PRetrieveMontage; // 0x18
	UAnimMontage* Player3PFireMontage; // 0x20
	UAnimMontage* Player3PReloadMontage; // 0x28
	UAimOffsetBlendSpace* Player3PStandingAimOffset; // 0x30
	UAimOffsetBlendSpace* Player3PCrouchedAimOffset; // 0x38
	UBlendSpace* Player3PStandingBlendSpace; // 0x40
	UBlendSpace* Player3PCrouchedBlendSpace; // 0x48
	UAnimSequence* Player3PStandingIdleSequence; // 0x50
	UAnimSequence* Player3PCrouchedIdleSequence; // 0x58
	UAnimMontage* Player1PFireMontage; // 0x60
	UBlendSpace* Player1PStandingBlendSpace; // 0x68
	UBlendSpace* Player1PCrouchedBlendSpace; // 0x70
	UAimOffsetBlendSpace* Player1PStandingAimOffset; // 0x78
	UAnimMontage* Player1PRetrieveMontage; // 0x80
	UAnimMontage* Player1PReloadMontage; // 0x88
	UCameraShake* Player1PCameraShake; // 0x90
	UCameraShake* Player1PADSCameraShake; // 0x98
	UAnimSequence* Player1PAdditiveStandGunPose; // 0xa0
	UAnimSequence* Player1PAdditiveCrouchGunPose; // 0xa8
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FGadgetUseEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	FLocationRecord Location; // 0x8
	int32_t gadget_id; // 0x14
	FString Timestamp; // 0x18
	int32_t accumulated_damage; // 0x28
	int32_t accumulated_self_damage; // 0x2c
	int32_t accumulated_friendly_damage; // 0x30
	int32_t accumulated_reverse_friendly_damage; // 0x34
	float AccumulatingDamage; // 0x38
	float AccumulatingSelfDamage; // 0x3c
	float AccumulatingFriendlyDamage; // 0x40
	float AccumulatingReverseFriendlyDamage; // 0x44
	float FireGameTime; // 0x48
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
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

struct FWeaponTypeToAntiCheatId {
	FGameplayTag WeaponType; // 0x0
	uint16_t AntiCheatId; // 0x8
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

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FTickAnimationParams {
	float Duration; // 0x0
	FDelegate UpdateEvent; // 0x4
	FDelegate FinishedEvent; // 0x14
	bool IsPlaying; // 0x24
	float ElapsedTime; // 0x28
};

struct FSpecialtyCustomLoadout {
	int32_t LoadoutClassItemId; // 0x8
	int32_t LoadoutBundleItemId; // 0xc
	FSpecialtyData SpecialtyOne; // 0x10
	FSpecialtyData SpecialtyTwo; // 0x58
	FCustomLoadoutItem PerkOne; // 0xa0
	FCustomLoadoutItem PerkTwo; // 0xb0
	FCustomLoadoutItem PerkThree; // 0xc0
	FCustomLoadoutItem PerkFour; // 0xd0
	FCustomLoadoutItem PassiveOne; // 0xe0
	FCustomLoadoutItem PassiveTwo; // 0xf0
	FCustomLoadoutItem KillstreakOne; // 0x100
	FCustomLoadoutItem KillstreakTwo; // 0x110
	FCustomLoadoutItem SecondaryAbilityOne; // 0x120
	FCustomLoadoutItem SecondaryAbilityTwo; // 0x130
	FCustomLoadoutItem GadgetOne; // 0x140
	FCustomLoadoutItem Pistol; // 0x150
	FCustomLoadoutItem PistolAttachmentOne; // 0x160
	FCustomLoadoutItem PistolAttachmentTwo; // 0x170
	FCustomLoadoutItem PistolAttachmentThree; // 0x180
	FCustomLoadoutItem PrimaryWeapon; // 0x190
};

struct FContextualPingMessagesRow : FTableRowBase {
	EPingMessage PingMessage; // 0x8
	TSoftObjectPtr<UTexture2D> PingMessageIcon; // 0x10
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FFontPaletteInfo : FTableRowBase {
	FSlateFontInfo FontInfo; // 0x8
};

struct FCachedRowsEntry {
	int32_t Priority; // 0x0
	FHardAssetTableRow Row; // 0x8
};

struct FKSActorProximityInfo {
	bool bInLOS; // 0x0
	bool bRangeValid; // 0x1
	float LastTimeUpdated; // 0x4
	bool TeamMatchesFilter; // 0x8
	TArray<UPrimitiveComponent*> OverlappedComponents; // 0x10
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
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

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FPUMG_FriendData {
	UPUMG_PlayerInfo* PlayerData; // 0x0
	FText StatusMessage; // 0x8
	bool Online; // 0x20
	bool CanChallenge; // 0x21
	bool CanSpectate; // 0x22
	bool HasHRRelationship; // 0x23
	bool HasPortalRelationship; // 0x24
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FKSQueueRow {
	FText Name; // 0x0
	FText Description; // 0x18
	int32_t ID; // 0x30
	int32_t LevelLock; // 0x34
	int32_t MinPartySize; // 0x38
	int32_t MaxPartySize; // 0x3c
	int32_t SortOrder; // 0x40
	FString SoloURL; // 0x48
	int32_t MaxPlayerPerSide; // 0x58
	bool IsCustom; // 0x5c
	bool AllowsBackfill; // 0x5d
	FName QueueType; // 0x60
	FString MapListKey; // 0x68
	FString SurrenderConfigKey; // 0x78
	FString RankedSeasonKey; // 0x88
	FString QueueThumbnail; // 0x98
	TArray<FString> QueueGroupKeys; // 0xa8
	bool AllowAllUnownedJobs; // 0xb8
	TArray<int32_t> AllowedUnownedJobIds; // 0xc0
	TArray<FString> AllowedPlatforms; // 0xd0
	TArray<FString> DisallowedPlatforms; // 0xe0
};

struct FKSOutlineParameters {
	EPlayerSilhouetteType ColorType; // 0x0
	FLinearColor OutlineColor; // 0x4
	FLinearColor FillColor; // 0x14
	float OutlineThickness; // 0x24
	bool bShouldFill; // 0x28
	bool bHideWhenOccluded; // 0x29
	bool bShowOnlyWhileOccluded; // 0x2a
	bool bIsHot; // 0x2b
	bool bIsFriendly; // 0x2c
	bool bCutoutOtherOutlines; // 0x2d
	float OutlineZFadeMin; // 0x30
	float OutlineZFadeMax; // 0x34
};

struct FKSWayPointLink {
	TArray<AKSWayPoint*> NextWayPoints; // 0x0
	TArray<AKSWayPoint*> PrevWayPoints; // 0x10
};

struct FAppliedApparelKey {
	int32_t ID; // 0x0
};

struct FPlayerInventorySlot {
	int32_t SlotIndex; // 0x0
	UKSWeaponAsset* WeaponAsset; // 0x8
	FGameplayTag SlotEquipPoint; // 0x10
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
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

struct FLiveLinkSubjectFrameMessage {
	FName SubjectName; // 0x0
	TArray<FTransform> Transforms; // 0x8
	TArray<FLiveLinkCurveElement> Curves; // 0x18
	FLiveLinkMetaData MetaData; // 0x28
	double Time; // 0x88
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x20
	FName SlotName; // 0x30
	bool bAlwaysUpdateSourcePose; // 0x38
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FPlayerShopTransaction {
	EPlayerShopTransactionType TransactionType; // 0x0
	EShopItemType ItemType; // 0x1
	uint32_t TransactionRequestId; // 0x4
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	FFrameNumber SectionStartTime; // 0x20
	FGuid OuterBindingId; // 0x24
	FMovieSceneEvaluationOperand InnerOperand; // 0x34
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FKSAllowedPlatformTypes {
	bool XboxOne; // 0x0
	bool PS4; // 0x1
	bool Switch; // 0x2
	bool Windows; // 0x3
	bool Mac; // 0x4
	bool Linux; // 0x5
	bool IOS; // 0x6
	bool Android; // 0x7
	bool XSX; // 0x8
	bool PS5; // 0x9
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FWeaponGraphEdge {
	EWeaponStateNew OldState; // 0x0
	EWeaponStateNew NewState; // 0x1
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FKSJobEquipmentTypesToGive {
	bool bPrimaryWeaponOptionOne; // 0x0
	bool bPrimaryWeaponOptionTwo; // 0x1
	bool bSecondaryWeaponOptionOne; // 0x2
	bool bSecondaryWeaponOptionTwo; // 0x3
	bool bMeleeWeapon; // 0x4
	bool bGadgetOptionOne; // 0x5
	bool bGadgetOptionTwo; // 0x6
	bool bPerkOptionOne; // 0x7
	bool bPerkOptionTwo; // 0x8
	bool bPerkOptionThree; // 0x9
	bool bPerkOptionFour; // 0xa
	bool bPerkOptionFive; // 0xb
	bool bPerkOptionSix; // 0xc
};

struct FQueueDetail : FTableRowBase {
	int32_t QueueId; // 0x8
	FText QueueName; // 0x10
	FText QueueDescription; // 0x28
	int32_t SortOrder; // 0x40
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FKSVehicleDeathInfo {
	EKSVehicleDeathState DeathState; // 0x0
	UDamageType* DamageType; // 0x8
	FVector DamageDirection; // 0x10
	float FinalBlowDamage; // 0x1c
};

struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	FPoseLink InputPose; // 0x20
	float DefaultChainLength; // 0x30
	FBoneReference ChainStartBone; // 0x34
	FBoneReference ChainEndBone; // 0x44
	FVector TargetLocation; // 0x54
	float Alpha; // 0x60
	FInputScaleBias AlphaScaleBias; // 0x68
	EScaleChainInitialLength ChainInitialLength; // 0x70
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FDownedEnemyPingHandle {
	TWeakObjectPtr<AKSPlayerState> DownedEnemyPlayer; // 0x0
	FTimerHandle PingTimerHandle; // 0x8
	int32_t PingsSent; // 0x10
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x20
	FName CachePoseName; // 0x30
	int8_t UseCount; // 0x3c
};

struct FKSShopPricing {
	bool bOverridePistolPrice; // 0x0
	int32_t PistolPrice; // 0x4
	bool bOverridePistolUpgradePrice; // 0x8
	int32_t PistolUpgradePrice; // 0xc
	bool bOverrideAssaultRiflePrice; // 0x10
	int32_t AssaultRiflePrice; // 0x14
	bool bOverrideAssaultRifleUpgradePrice; // 0x18
	int32_t AssaultRifleUpgradePrice; // 0x1c
	bool bOverrideDMRPrice; // 0x20
	int32_t DMRPrice; // 0x24
	bool bOverrideDMRUpgradePrice; // 0x28
	int32_t DMRUpgradePrice; // 0x2c
	bool bOverrideSMGPrice; // 0x30
	int32_t SMGPrice; // 0x34
	bool bOverrideSMGUpgradePrice; // 0x38
	int32_t SMGUpgradePrice; // 0x3c
	bool bOverrideLMGPrice; // 0x40
	int32_t LMGPrice; // 0x44
	bool bOverrideLMGUpgradePrice; // 0x48
	int32_t LMGUpgradePrice; // 0x4c
	bool bOverrideShotgunPrice; // 0x50
	int32_t ShotgunPrice; // 0x54
	bool bOverrideShotgunUpgradePrice; // 0x58
	int32_t ShotgunUpgradePrice; // 0x5c
	bool bOverrideSniperPrice; // 0x60
	int32_t SniperPrice; // 0x64
	bool bOverrideSniperUpgradePrice; // 0x68
	int32_t SniperUpgradePrice; // 0x6c
	bool bOverrideMeleePrice; // 0x70
	int32_t MeleePrice; // 0x74
	bool bOverrideMeleeUpgradePrice; // 0x78
	int32_t MeleeUpgradePrice; // 0x7c
	bool bOverrideLethalPrice; // 0x80
	int32_t LethalPrice; // 0x84
	bool bOverrideLethalUpgradePrice; // 0x88
	int32_t LethalUpgradePrice; // 0x8c
	bool bOverrideUtilityPrice; // 0x90
	int32_t UtilityPrice; // 0x94
	bool bOverrideUtilityUpgradePrice; // 0x98
	int32_t UtilityUpgradePrice; // 0x9c
	bool bOverrideTier1PerkPrice; // 0xa0
	int32_t Tier1PerkPrice; // 0xa4
	bool bOverrideTier2PerkPrice; // 0xa8
	int32_t Tier2PerkPrice; // 0xac
	bool bOverrideTier3PerkPrice; // 0xb0
	int32_t Tier3PerkPrice; // 0xb4
	TMap<UKSItem*, int32_t> OverridePricingMap; // 0xb8
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FKSBTObjectivePriorityTableRow : FTableRowBase {
	UKSBTObjective* Objective; // 0x8
	float MinDistance; // 0x10
	float MaxDistance; // 0x14
	float MaxSecondsElapsed; // 0x18
	float MinSecondsElapsed; // 0x1c
	float MaxSecondsRemaining; // 0x20
	float MinSecondsRemaining; // 0x24
	float Priority; // 0x28
	TArray<TSoftObjectPtr<UKSPlayerMod>> RequiredAbilities; // 0x30
	TArray<UKSBTTargetSelector*> ObjectiveValidationArray; // 0x40
	UDataTable* TargetSelectionTable; // 0x50
	UDataTable* OverrideDataTable; // 0x58
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FTweenInfo {
	char TweenType; // 0x0
	FVector TweenDestination; // 0x4
	float TweenTime; // 0x10
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x20
	FPoseLink B; // 0x30
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x40
	float Alpha; // 0x60
	FInputScaleBias AlphaScaleBias; // 0x68
	EBoneControlSpace TransformsSpace; // 0x70
};

struct FSoundSubmixSendInfo {
	ESendLevelControlMethod SendLevelControlMethod; // 0x0
	USoundSubmixBase* SoundSubmix; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FKSFreezeFramePropBase {
	FName AttachPoint; // 0x0
	FVector LocationOffset; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	UAnimationAsset* PropAnimation; // 0x30
	bool bUseParentAnimationStartTime; // 0x38
	float PropAnimationStartTime; // 0x3c
	FKSFreezeFrameVFXEntry VFXEntry; // 0x40
	FGuid propId; // 0x70
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
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

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FKSTargetingModuleInfo {
	FName Key; // 0x0
	UKSWeaponTargetingModule* TargetingModuleClass; // 0x8
	TArray<FKSTargetingStateValidator> TargetingStateValidators; // 0x10
	UKSWeaponTargetingModule* TargetingModuleInstance; // 0x20
};

struct FKSTimerState {
	bool bIsTimerActive; // 0x0
	bool bIsTimerComplete; // 0x1
	int32_t Counter; // 0x4
};

struct FSpecialDamageColors {
	FLinearColor FontColor; // 0x0
	FLinearColor StrokeColor; // 0x10
	FLinearColor GlowColor; // 0x20
};

struct FCombatEvent {
	FVector Location; // 0x0
	bool Fatal; // 0xc
	float Damage; // 0x10
};

struct FKSSettingsGroupConfig {
	UKSSettingsContainerConfigAsset* MainSettingContainerAsset; // 0x0
	TArray<UKSSettingsContainerConfigAsset*> SubSettingContainerAssets; // 0x8
};

struct FAnimNode_BlendSpacePlayerSkinned : FAnimNode_BlendSpacePlayer {
	FPoseLink Source; // 0xf0
	FName SkinKeyword; // 0x100
	float BlendFromSourceTime; // 0x108
	float BlendToSourceTime; // 0x10c
	EAlphaBlendOption BlendType; // 0x110
	UCurveFloat* CustomBlendCurve; // 0x118
	UBlendProfile* BlendProfile; // 0x120
	FAlphaBlend BlendFromSource; // 0x128
	FAlphaBlend BlendToSource; // 0x158
	UBlendSpaceBase* TargetBlendSpace; // 0x188
	UBlendSpaceBase* LastTargetBlendSpace; // 0x190
	bool bLastHadTargetBlendSpace; // 0x198
	float SourceBlendWeight; // 0x19c
	float RemainingBlendTime; // 0x1a0
	FBlendSampleData PerBoneSampleData; // 0x1a8
	bool bResetSourceOnActivation; // 0x1e8
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FSubmixEffectReverbFastSettings {
	bool bBypass; // 0x0
	float Density; // 0x4
	float Diffusion; // 0x8
	float Gain; // 0xc
	float GainHF; // 0x10
	float DecayTime; // 0x14
	float DecayHFRatio; // 0x18
	float ReflectionsGain; // 0x1c
	float ReflectionsDelay; // 0x20
	float LateGain; // 0x24
	float LateDelay; // 0x28
	float AirAbsorptionGainHF; // 0x2c
	float WetLevel; // 0x30
	float DryLevel; // 0x34
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FSoftAssetTableRow : FTableRowBase {
	TSoftObjectPtr<UAnimationAsset> AnimationAsset; // 0x8
	TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x30
	TSoftObjectPtr<USelectiveAkAudioEvent> SelectiveAudioEvent; // 0x58
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x80
	TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0xa8
	TSoftObjectPtr<UStaticMesh> StaticMesh; // 0xd0
	TSoftObjectPtr<UParticleSystem> ParticleSystem; // 0xf8
	TSoftObjectPtr<UMaterialInterface> MaterialInterface; // 0x120
	TSoftObjectPtr<UTexture> Texture; // 0x148
	TSoftClassPtr<UObject> Class; // 0x170
	bool Bool; // 0x198
	float Float; // 0x19c
	FLinearColor LinearColor; // 0x1a0
	int32_t Int; // 0x1b0
	FName NameField; // 0x1b4
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FPGame_EffectManagerPropertyContainer : FFastArraySerializer {
	TArray<FPGame_Property> Properties; // 0x108
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
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

struct FAnimNode_BlendByLOD : FAnimNode_BlendListBase {
	int32_t LOD; // 0xa8
};

struct FKSJobSelectionAllowUnownedJobs {
	EAllowUnownedJobsState AllowUnownedJobsState; // 0x0
	TArray<int32_t> AllowedUnownedJobIds; // 0x8
	bool IsInitializationFinished; // 0x18
};

struct FObjectiveRecord {
	int32_t Type; // 0x0
	FLocationRecord Location; // 0x4
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FDisplayInfo {
	TMap<EDisplayType, TSoftClassPtr<UObject>> DisplayWidgetMap; // 0x0
	bool bUseWidgetPool; // 0x50
	TArray<FString> WidgetPoolName; // 0x58
	int32_t UniqueId; // 0x68
	AKSPlayerState* CreatingPlayer; // 0x70
	AActor* AssociatedActor; // 0x78
	UObject* AssociatedObject; // 0x80
	FVector DefaultLocation; // 0x88
	float Lifespan; // 0x94
	FTimerHandle TimerHandle; // 0x98
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	EAkCommSystem CommunicationSystem; // 0x20
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FUIMapInfo : FTableRowBase {
	TArray<int32_t> MapIds; // 0x8
	FText DisplayName; // 0x18
	TSoftObjectPtr<UTexture2D> MapThumbnail; // 0x30
};

struct FKSResourceInfo {
	FName ResourceKeyName; // 0x0
	EKSResourceReplicationType ResourceReplicationType; // 0x8
	float CurrentResourceValue; // 0xc
	float LastLocalCurrentResourceValue; // 0x10
	float MinResourceValue; // 0x14
	float MaxResourceValue; // 0x18
};

struct FKSOutOfBoundsInfo {
	bool bOutOfBounds; // 0x0
	float WarningLength; // 0x4
};

struct FAdvancedCombatSummary {
	APawn* DamageInstigatorPawn; // 0x0
	AActor* DamageCauser; // 0x8
	TArray<FAdvancedCombatEvent> CombatEvents; // 0x10
};

struct FNiagaraVMExecutableData {
	TArray<char> ByteCode; // 0x0
	TArray<char> OptimizedByteCode; // 0x10
	int32_t NumTempRegisters; // 0x20
	int32_t NumUserPtrs; // 0x24
	FNiagaraParameters Parameters; // 0x28
	FNiagaraParameters InternalParameters; // 0x38
	TMap<FName, FNiagaraParameters> DataSetToParameters; // 0x48
	TArray<FNiagaraVariable> Attributes; // 0x98
	FNiagaraScriptDataUsageInfo DataUsage; // 0xa8
	TArray<FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo; // 0xb0
	TArray<FVMExternalFunctionBindingInfo> CalledVMExternalFunctions; // 0xc0
	TArray<FNiagaraDataSetID> ReadDataSets; // 0xd0
	TArray<FNiagaraDataSetProperties> WriteDataSets; // 0xe0
	TArray<FNiagaraStatScope> StatScopes; // 0xf0
	TArray<FNiagaraDataInterfaceGPUParamInfo> DIParamInfo; // 0x100
	ENiagaraScriptCompileStatus LastCompileStatus; // 0x110
	TArray<FSimulationStageMetaData> SimulationStageMetaData; // 0x118
};

struct FPGame_SonyMatchData {
	FString MatchID; // 0x0
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
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

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
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

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
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

struct FGrandPrizeProgression {
	int32_t CurrentProgression; // 0x0
	int32_t EndingProgression; // 0x4
	bool IsUnlocked; // 0x8
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FDownEventRecord {
	int32_t instigator_ue_player_id; // 0x0
	int32_t instigator_hz_player_id; // 0x4
	FLocationRecord instigator_location; // 0x8
	int32_t victim_ue_player_id; // 0x14
	int32_t victim_hz_player_id; // 0x18
	FLocationRecord victim_location; // 0x1c
	int32_t weapon_id; // 0x28
	FString weapon_name; // 0x30
	float Distance; // 0x40
	bool self_or_own_team; // 0x44
	FString Timestamp; // 0x48
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

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FFBP_CustomQueueImages {
	int32_t QueueId_2_82475B2249830443CA7F8B9358C2DF6C; // 0x0
	UTexture2D* QueueImage_5_50476DB54010C8D7D4A60A87F29551A7; // 0x8
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FAnimNode_SeqCurveEvalSkinned : FAnimNode_SeqEvalSkinned {
	FName CurveName; // 0x170
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FSettingDelegateStruct {
	FDelegate SettingApplied; // 0x0
	FDelegate SettingSaved; // 0x10
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
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

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FLiveLinkPropertyData {
	FName PropertyName; // 0x0
	TArray<FMovieSceneFloatChannel> FloatChannel; // 0x8
	TArray<FMovieSceneStringChannel> StringChannel; // 0x18
	TArray<FMovieSceneIntegerChannel> IntegerChannel; // 0x28
	TArray<FMovieSceneBoolChannel> BoolChannel; // 0x38
	TArray<FMovieSceneByteChannel> ByteChannel; // 0x48
};

struct FAnimNode_BSpaceEvalSkinned : FAnimNode_BlendSpaceEvaluator {
	FPoseLink Source; // 0xf8
	FName SkinKeyword; // 0x108
	float BlendFromSourceTime; // 0x110
	float BlendToSourceTime; // 0x114
	EAlphaBlendOption BlendType; // 0x118
	UCurveFloat* CustomBlendCurve; // 0x120
	UBlendProfile* BlendProfile; // 0x128
	FAlphaBlend BlendFromSource; // 0x130
	FAlphaBlend BlendToSource; // 0x160
	UBlendSpaceBase* TargetBlendSpace; // 0x190
	UBlendSpaceBase* LastTargetBlendSpace; // 0x198
	bool bLastHadTargetBlendSpace; // 0x1a0
	float SourceBlendWeight; // 0x1a4
	float RemainingBlendTime; // 0x1a8
	FBlendSampleData PerBoneSampleData; // 0x1b0
	bool bResetSourceOnActivation; // 0x1f0
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FKSObjectiveStateFilter {
	bool bCheckObjectiveState; // 0x0
	EBasicKeyOperation MatchesObjectiveState; // 0x1
	TArray<FName> StateNamesToCheck; // 0x8
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
};

struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FNavButtonData {
	FText Label_5_E708A15F41F9928931B559975526FEF6; // 0x0
	FName ViewRoute_15_BA6F69D240B98E901BBFCA85C785392C; // 0x18
	bool Disabled_1_7035040B4C82B313E854728D83CA821B; // 0x20
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FQosDatacenterInfo {
	FString ID; // 0x0
	FString RegionId; // 0x10
	bool bEnabled; // 0x20
	TArray<FQosPingServerInfo> Servers; // 0x28
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FSubPanel {
	FText Header; // 0x0
	FText Desc; // 0x18
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
};

struct FKSSpreadTransform {
	int32_t ID; // 0x0
	FTransform Transform; // 0x10
	UParticleSystemComponent* ParticleSystem; // 0x40
	UDecalComponent* Decal; // 0x48
	USphereComponent* Sphere; // 0x50
	UMeshComponent* Mesh; // 0x58
	float CurrentHealth; // 0x60
};

struct FUISoundLibraries {
	UKSGenericSoundLibrary* GenericSounds_2_795651794304368EBEA83C8E2ACCB600; // 0x0
	UKSButtonSoundLibrary* ButtonSounds_5_49BACD3D4D940EEE5807F29052D7EAE2; // 0x8
	UKSButtonSoundLibrary* SubMenuButtonSounds_8_3F066A574F186E747FFE12A78A3D9A87; // 0x10
	UKSButtonSoundLibrary* LoginButtonSounds_11_D388B67D4F0187964DDB4C937FBE65AF; // 0x18
	UKSButtonSoundLibrary* PlayButtonSounds_12_99996B864E555B4D1EC8919F585ECB7F; // 0x20
	UKSScrollButtonSoundLibrary* ScrollButtonSounds_15_1577BB0D47E978125A10A99DB440FA8F; // 0x28
	UKSButtonSoundLibrary* ShopPurchaseAdvancedButtonSounds_24_EE5946A844E5225325763D8F7B28E9BE; // 0x30
	UKSShopSoundLibrary* ShopMenuSounds_21_98203ADF45662A6D8EB980BD5C1D0FC4; // 0x38
	UKSButtonSoundLibrary* ShopPurchaseBasicButtonSounds_25_3A1CBD574665EC7131BAA1A848AA178B; // 0x40
	UKSToastSoundLibrary* SocialToastNotificationSounds_29_338320D24ABF9DF592ED2EB70588CAA1; // 0x48
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FSerializedMctsNetId {
	uint64_t A; // 0x0
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x20
	FName Graph; // 0x28
	FPoseLink InputPose; // 0x30
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FReactiveWrapMaterialScalarParam {
	FName MaterialScalarParametersToModify; // 0x0
	bool UpdateValuesOnTrigger; // 0x8
	bool UpdateValuesOnInterpolate; // 0x9
	bool UpdateValuesOnMaximumReached; // 0xa
	bool UpdateValuesOnResetStarted; // 0xb
	float InitilizedScalarValue; // 0xc
	float InterpolateSpeedBuildUp; // 0x10
	float InterpolateSpeedCoolDown; // 0x14
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
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

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xd8
	FBoneReference LeftHandFK; // 0xe8
	FBoneReference RightHandIK; // 0xf8
	FBoneReference LeftHandIK; // 0x108
	TArray<FBoneReference> IKBonesToMove; // 0x118
	float HandFKWeight; // 0x128
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
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

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FViewRouteRedirectData {
	FName RouteName; // 0x0
	int32_t CheckOrder; // 0x8
	bool OpenOverOriginal; // 0xc
	UPUMG_ViewRedirecter* Redirector; // 0x10
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

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0x58
	EEvaluatorDataSource DataSource; // 0x60
	EEvaluatorMode EvaluatorMode; // 0x61
};

struct FPoolAttachmentInfo {
	FName AttachPoint; // 0x0
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	EAttachLocation LocationType; // 0x2c
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

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
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

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x18
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FKSTargetingStateValidator {
	bool bAnyWeaponState; // 0x0
	bool bAnyCharacterAimMode; // 0x1
	EWeaponStateNew WeaponState; // 0x2
	EKSCharacterAimMode CharacterAimMode; // 0x3
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char Block : 1; // 0x0
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FKSPlayerModOverridePropertyStatFloat : FKSPlayerModOverridePropertyStatBase {
	float FloatValue; // 0x8
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
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

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FKSSeamlessTravelSettings {
	bool bRestoreLoadouts; // 0x0
	bool bSkipDestinationDefaultInventory; // 0x1
	bool bRestoreCharacterState; // 0x2
	FCharacterRestoreOptions CharacterStateRestoreOptions; // 0x4
	bool bCanReuseControllers; // 0xc
	bool bRestoreBotDataPlayerStates; // 0xd
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FKSCustomInputAxisKey {
	int32_t propId; // 0x0
	FName KeyboardName; // 0x4
	float KeyboardScale; // 0xc
	FName GamepadName; // 0x10
	float GamepadScale; // 0x18
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FCombatEventList : FSizedArraySerializer {
	TArray<FCombatEventItem> Items; // 0x70
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FJobSelectionRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	int32_t round_id; // 0x8
	int32_t class_id; // 0xc
	FString Timestamp; // 0x10
	int32_t skin_id; // 0x20
	int32_t wingsuit_id; // 0x24
	int32_t primary_weapon_1_wrap_id; // 0x28
	int32_t primary_weapon_2_wrap_id; // 0x2c
	int32_t secondary_weapon_wrap_id; // 0x30
	int32_t melee_weapon_wrap_id; // 0x34
	TArray<int32_t> emotes_and_sprays; // 0x38
	TArray<int32_t> quips; // 0x48
	TArray<int32_t> communications; // 0x58
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FUIColorPalette {
	FLinearColor LightGrey_4_913E6B5F4BDCB81BD42D07B27206F261; // 0x0
	FLinearColor DarkGray_6_8A2E98974234C6FBEA6AB2A063B59778; // 0x10
	FLinearColor Red_8_0ED9A2CA4F47AB6D89244F8C0618F009; // 0x20
	FLinearColor DarkRed_14_A3C4365940E8C28F156BCA90D52342C2; // 0x30
	FLinearColor White_10_3CB56E054B7D17D8AEED82968E47AE65; // 0x40
	FLinearColor Black_17_EC0FC2FC4B94E66BA1021FA092407FA7; // 0x50
	FLinearColor PlayButtonRed_20_C3A2BF9F48894B46D4E45B8E9BDA3700; // 0x60
	FLinearColor LightRed_23_C3777EA94DE3C020C81F759F8200CE1E; // 0x70
	FLinearColor WarningRed_26_07F976774AC9884BE5DCBCB86A62D5E3; // 0x80
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x28
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x20
	bool bUseAttachedParent; // 0x28
	bool bCopyCurves; // 0x29
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
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

struct FCensorTableRow : FTableRowBase {
	TSoftObjectPtr<UObject> CensoredAsset; // 0x8
	TSoftObjectPtr<UObject> ReplacementAsset; // 0x30
};

struct FRogueCustomizationRelatedInfo {
	int32_t SwitcherIndex; // 0x0
	EMercCosmeticSlot CosmeticSlot; // 0x4
	UKSNavTabWidget* NavTab; // 0x8
	UKSScrollBox* ScrollBox; // 0x10
	UKSSortableGridPanel* SortableGridPanel; // 0x18
	TArray<UKSCosmeticItemSelectorWidget*> CosmeticItemSelectors; // 0x20
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FKSCustomInputAxisKeyMappings {
	TMap<float, FKSInputAxisKeyMappings> KBM_Mappings; // 0x0
	TMap<float, FKSInputAxisKeyMappings> GP_Mappings; // 0x50
	TMap<float, FKSInputAxisKeyMappings> Touch_Mappings; // 0xa0
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x48
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FReactiveWrapMilestoneDisplay {
	FText PreviewMilestoneDescription; // 0x0
	float TargetProgressionValueA; // 0x18
	float TransitionSpeedA; // 0x1c
	float TargetProgressionValueB; // 0x20
	float TransitionSpeedB; // 0x24
	float TargetProgressionValueC; // 0x28
	float TransitionSpeedC; // 0x2c
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
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

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FRadialMenuItemEventItem : FReplicatedLogItem {
	FRadialMenuItemEventInfo RadialMenuItemEvent; // 0x0
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FKSLootRarityTimerPair {
	ELootSiteRarity Rarity; // 0x0
	UKSTimerComponent* Timer; // 0x8
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	TArray<FFrameNumber> EventTimes; // 0x38
	TArray<FMovieSceneEventPtrs> Events; // 0x48
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x48
	EMovieSceneBlendType BlendType; // 0xd8
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FPGame_EffectManagerCurrentProperty {
	FPlatformPropertyId propId; // 0x0
	float propValue; // 0x4
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
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

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FKSBTDifficultyTableRow : FTableRowBase {
	UKSBTDifficulty* Difficulty; // 0x8
	FKSBTDifficultyConfig DifficultyModifierConfig; // 0x10
	UDataTable* ObjectivePriorityTable; // 0x88
	float BackfillMMRMin; // 0x90
	float BackfillMMRMax; // 0x94
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xa8
	FVector EndPos; // 0xb4
	FVector StartTangent; // 0xc0
	FVector EndTangent; // 0xcc
};

struct FBoneMirrorPair {
	FBoneReference BoneOne; // 0x0
	FBoneReference BoneTwo; // 0x10
	FVector RotationFlipAxis; // 0x20
};

struct FPUMG_InputFocusDetails {
	TArray<FPUMG_InputFocusGroup> FocusGroups; // 0x0
	int32_t DefaultFocusGroupIndex; // 0x10
	int32_t CurrentFocusGroupIndex; // 0x14
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x40
	float PlayRateBasis; // 0x48
	float PlayRate; // 0x4c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x50
	float StartPosition; // 0x80
	bool bLoopAnimation; // 0x84
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FRewardProgress {
	int32_t InitialQuantity; // 0x0
	int32_t Quantity; // 0x4
	TArray<ERewardSource> SourceKeys; // 0x8
	TArray<float> SourceValues; // 0x18
	TArray<FString> EventKeys; // 0x28
	TArray<float> EventValues; // 0x38
	TArray<FString> BoosterKeys; // 0x48
	TArray<float> BoosterValues; // 0x58
	TArray<FString> ExtraDataKeys; // 0x68
	TArray<float> ExtraDataValues; // 0x78
	bool InitialUnlocked; // 0x88
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
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

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FKSWeightedPerceptionEntry {
	TArray<UAISense*> SensesToUse; // 0x0
	FKSPerceptionFilter PerceptionFilter; // 0x10
	int32_t WeightPerPerceivedStimuli; // 0x200
	bool bWeightTowards; // 0x204
};

struct FReactiveWrapVFXFloatParam {
	UParticleSystem* VFXParticleSystemToSpawn; // 0x0
	FName VFXAttachTargetName; // 0x8
	FName VFXFloatParameterToModify; // 0x10
	bool ActivateEmitterOnlyOnTrigger; // 0x18
	bool UpdateValuesOnTrigger; // 0x19
	bool UpdateValuesOnInterpolate; // 0x1a
	bool UpdateValuesOnMaximumReached; // 0x1b
	bool UpdateValuesOnResetStarted; // 0x1c
	float InitilizedFloatValue; // 0x20
	float InterpolateSpeedBuildUp; // 0x24
	float InterpolateSpeedCoolDown; // 0x28
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x88
	TArray<FBoneReference> SourceBones; // 0x98
	TArray<FBoneReference> OnlyDriveBones; // 0xa8
	TArray<FPoseDriverTarget> PoseTargets; // 0xb8
	FBoneReference EvalSpaceBone; // 0xf8
	FRBFParams RBFParams; // 0x108
	EPoseDriverSource DriveSource; // 0x134
	EPoseDriverOutput DriveOutput; // 0x135
	char bOnlyDriveSelectedBones : 1; // 0x136
};

struct FRouteContextInfo {
	TArray<UContextActionData*> ActionData; // 0x0
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
	char bApplyInsulationVolumes : 1; // 0x2c
	EAudioOutputTarget OutputTarget; // 0x30
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x31
	USoundSubmix* DefaultSubmix; // 0x38
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FKSStimulusEvent {
	AActor* Actor; // 0x0
	FAIStimulus Stimulus; // 0x8
};

struct FKSEventAssistants {
	TArray<APlayerState*> Assistants; // 0x0
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
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

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x48
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FExpDisplayInfo {
	int32_t EventDelta; // 0x0
	FText EventReason; // 0x8
	bool bIsBonus; // 0x20
};

struct FButtonPromptData {
	FKey Key; // 0x0
	FText Text; // 0x18
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x20
	FPoseLink Additive; // 0x30
	EAnimAlphaInputType AlphaInputType; // 0x40
	float Alpha; // 0x44
	char bAlphaBoolEnabled : 1; // 0x48
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x50
	FName AlphaCurveName; // 0x98
	FInputScaleBias AlphaScaleBias; // 0xa0
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xa8
	int32_t LODThreshold; // 0xd8
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FEndMatchPunishConfigEntry {
	int32_t PointsRequired; // 0x0
	bool PassThresholdOnDecrease; // 0x4
	TArray<FPunishmentConfigEntry> Punishments; // 0x8
};

struct FKSSettingPropertyId {
	FName Name; // 0x0
	int32_t ID; // 0x8
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FKSLootGroupGuaranteeMap {
	int32_t TotalLootSitesActive; // 0x0
	TMap<char, FKSLootGroupGuarantee> GuaranteeMap; // 0x8
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

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x20
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct Frevive {
	FVector Location; // 0x0
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FPUMG_CustomMatchMember {
	UPUMG_PlayerInfo* playerinfo; // 0x0
	int32_t TeamId; // 0x8
	EPUMG_CustomMatchPermission Permissions; // 0xc
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

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FReactiveWrapSFXParam {
	UAkAudioEvent* AKAudioEventToPlay; // 0x0
	UAkAudioEvent* AKAudioStopEvent; // 0x8
	FName RTPCNameToModify; // 0x10
	bool UpdateValuesOnTrigger; // 0x18
	bool UpdateValuesOnInterpolate; // 0x19
	bool UpdateValuesOnMaximumReached; // 0x1a
	bool UpdateValuesOnResetStarted; // 0x1b
	float InitilizedRTPCFloatValue; // 0x1c
	float InterpolateSpeedBuildUp; // 0x20
	float InterpolateSpeedCoolDown; // 0x24
	bool SFXLocalOnly; // 0x28
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
	char bFilterLowSpanSequences : 1; // 0x3c
	char bFilterLowSpanFromTileCache : 1; // 0x3c
	char bFixedTilePoolSize : 1; // 0x3c
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FKSLootTableChanceTableRow : FTableRowBase {
	UDataTable* LootChanceTable; // 0x8
	int32_t Weight; // 0x10
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FAccoladeEventItem : FReplicatedLogItem {
	FAccoladeEventEntry AccoladeEventEntry; // 0x0
};

struct FKSLimitedTimeEventMetadataRow : FTableRowBase {
	FText EventName; // 0x8
	FText EventDescription; // 0x20
	TSoftObjectPtr<UTexture2D> EventIcon; // 0x38
};

struct FCombatEventItem : FReplicatedLogItem {
	FCombatEventInfo CombatEvent; // 0x0
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FPlayerCombatInfo {
	int32_t PlayerId; // 0x0
	int32_t PlayerTeamNum; // 0x4
	AKSPlayerState* PlayerState; // 0x8
	AKSPlayerState* PlayerVictim; // 0x10
	float TimeLeft; // 0x18
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FReplicatedLog {
	int32_t MaxEntryReplication; // 0x0
	int32_t MaxHistory; // 0x4
	int32_t TailRepIndex; // 0x8
	int32_t HeadRepIndex; // 0xc
	int32_t ItemArrayTail; // 0x10
	int32_t ItemArrayHead; // 0x14
};

struct FKSLootRaritySwapInfo {
	float Chance; // 0x0
	int32_t Amount; // 0x4
	ELootSiteRarity OldRarity; // 0x8
	ELootSiteRarity NewRarity; // 0x9
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
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

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
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

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x20
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FRecoilInfo {
	float TimeDurationPos; // 0x0
	float TimeDurationRot; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FRecoilParams RotParams; // 0x20
	FVector LocAmplitude; // 0x30
	FVector LocFrequency; // 0x3c
	FRecoilParams LocParams; // 0x48
	float BlendInTime; // 0x58
	bool Enabled; // 0x5c
	bool Mirrored; // 0x5d
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xd8
	FBoneSocketTarget LookAtTarget; // 0xf0
	FVector LookAtLocation; // 0x150
	FAxis LookAt_Axis; // 0x15c
	bool bUseLookUpAxis; // 0x16c
	EInterpolationBlend InterpolationType; // 0x16d
	FAxis LookUp_Axis; // 0x170
	float LookAtClamp; // 0x180
	float InterpolationTime; // 0x184
	float InterpolationTriggerThreashold; // 0x188
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FGiveItemParameters {
	EItemSourceType ItemSource; // 0x0
	FGameplayTag PreferredEquipPoint; // 0x4
	int32_t OriginalOwnerId; // 0xc
	EKSRarity Rarity; // 0x10
	int32_t ObjectiveId; // 0x14
	int32_t Price; // 0x18
	bool bActivate; // 0x1c
	TArray<FGameplayTag> ItemTags; // 0x20
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

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FKSLungeInfo {
	AActor* LungeTarget; // 0x0
	float MaxLungeDistance; // 0x8
	float MaxLungeDuration; // 0xc
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x48
	FMovieSceneFloatChannel LeftCurve; // 0xe8
	FMovieSceneFloatChannel RightCurve; // 0x188
	FMovieSceneFloatChannel BottomCurve; // 0x228
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FPlayerStatisticsBase {
	int32_t starting_cash; // 0x0
	int32_t spent_cash; // 0x4
	int32_t executes; // 0x8
	int32_t Assists; // 0xc
	int32_t downs; // 0x10
	int32_t Revives; // 0x14
	int32_t Downed; // 0x18
	int32_t deaths; // 0x1c
	int32_t ability_uses; // 0x20
	int32_t gadget_uses; // 0x24
	int32_t kills_single; // 0x28
	int32_t kills_double; // 0x2c
	int32_t kills_triple; // 0x30
	int32_t kills_quadra; // 0x34
	int32_t kills_penta; // 0x38
	int32_t accumulated_damage; // 0x3c
	int32_t accumulated_self_damage; // 0x40
	int32_t accumulated_friendly_damage; // 0x44
	int32_t accumulated_reverse_friendly_damage; // 0x48
	float average_shots_hit_distance; // 0x4c
	float average_head_shots_distance; // 0x50
	float average_non_head_shots_distance; // 0x54
	int32_t bad_distances; // 0x58
	int32_t missing_instigators; // 0x5c
	int32_t shots_fired; // 0x60
	int32_t shots_fired_sniper; // 0x64
	int32_t shots_fired_shotgun; // 0x68
	int32_t shots_hit; // 0x6c
	int32_t head_shots; // 0x70
	int32_t non_head_shots; // 0x74
	int32_t shots_hit_aiming_down_sights; // 0x78
	int32_t shots_hit_aiming_over_the_shoulder; // 0x7c
	int32_t shots_hit_aiming_alternate; // 0x80
	int32_t shots_hit_aiming_default; // 0x84
	int32_t shots_hit_primary_slot_weapon; // 0x88
	int32_t shots_hit_sniper_weapon; // 0x8c
	int32_t shots_hit_shotgun_weapon; // 0x90
	int32_t shots_hit_secondary_slot_weapon; // 0x94
	int32_t shots_hit_melee_slot_weapon; // 0x98
	int32_t shots_hit_other; // 0x9c
	int32_t self_downs; // 0xa0
	int32_t self_executes; // 0xa4
	int32_t own_team_downs; // 0xa8
	int32_t own_team_executes; // 0xac
};

struct FPGame_ReplicatedTimerId {
	char ID; // 0x0
};

struct FAnnouncement {
	UAkAudioEvent* AkEvent; // 0x0
	UAkAudioEvent* AltAkEvent; // 0x8
	EKSVoiceOverPriority Priority; // 0x10
	float Lifetime; // 0x14
	float ValidUntil; // 0x18
	float Delay; // 0x1c
	float Lockout; // 0x20
	float RTPC; // 0x24
	int32_t TeamNum; // 0x28
	FSerializedMctsNetId PlayerId; // 0x30
	UAkAudioEvent* TargetPlayerAkEvent; // 0x38
};

struct FKSQueuePlatformFilter {
	FString Platform; // 0x0
	int32_t QueueMaxAllowedPartySize; // 0x10
	TArray<int32_t> QueueIdWhitelist; // 0x18
	TArray<int32_t> QueueIdBlacklist; // 0x28
};

struct FKSProjectileTargetingStateValidator {
	bool bAnyWeaponState; // 0x0
	bool bAnyCharacterAimMode; // 0x1
	EWeaponStateNew WeaponState; // 0x2
	EKSCharacterAimMode CharacterAimMode; // 0x3
};

struct FOrientationEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	FLocationRecord Location; // 0x8
	FRotationRecord Rotation; // 0x14
	int32_t movement_state; // 0x1c
	FString Timestamp; // 0x20
	int32_t ping_ms; // 0x30
	TMap<FString, FClientStatisticsRecord> client_statistics; // 0x38
};

struct FActiveThermalPPComponentInfo {
	UThermalScopePPComponent* ThermalPPComponent; // 0x0
	AKSPlayerCameraManager* PlayerCameraManager; // 0x8
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FShopSubItem {
	UKSItem* Item; // 0x0
	int32_t Price; // 0x8
	bool bPurchased; // 0xc
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
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

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventSectionData EventData; // 0x38
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FMinimapData {
	FLocationRecord northwest_corner; // 0x0
	float Width; // 0xc
	TArray<FObjectiveRecord> objectives; // 0x10
};

struct FTimelineSimulationHandler {
	float ServerTimeStamp; // 0x0
	float ErrorTolerance; // 0x4
	char bLooping : 1; // 0x8
	char bReversePlayback : 1; // 0x8
	char bPlaying : 1; // 0x8
	float PlayRate; // 0xc
	float Position; // 0x10
};

struct FLiveLinkLightStaticData : FLiveLinkTransformStaticData {
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

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FRadialMenuItemEventList : FSizedArraySerializer {
	TArray<FRadialMenuItemEventItem> Items; // 0x70
};

struct FAgentStateChange : FReplicatedLogItem {
	EWeaponStateNew OldState; // 0x0
	EWeaponStateNew NewState; // 0x1
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FAbilityUseEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	FLocationRecord Location; // 0x8
	int32_t ability_id; // 0x14
	FString Timestamp; // 0x18
	int32_t accumulated_damage; // 0x28
	int32_t accumulated_self_damage; // 0x2c
	int32_t accumulated_friendly_damage; // 0x30
	int32_t accumulated_reverse_friendly_damage; // 0x34
	float AccumulatingDamage; // 0x38
	float AccumulatingSelfDamage; // 0x3c
	float AccumulatingFriendlyDamage; // 0x40
	float AccumulatingReverseFriendlyDamage; // 0x44
	float FireGameTime; // 0x48
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FKSAimAssistPropertyCurveFloat {
	EControllerInputType InputType; // 0x0
	UCurveFloat* Value; // 0x8
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18
};

struct FItemDisplayStat {
	FText DisplayText; // 0x0
	float Value; // 0x18
	FItemDisplayStatParams StatProperties; // 0x20
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x0
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bComputeWeightedNormals : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	char bBuildReversedIndexBuffer : 1; // 0x0
	char bSmoothNormalsInVertexColor : 1; // 0x0
	char bBuildVertexCurvature : 1; // 0x1
	char bUseHighPrecisionTangentBasis : 1; // 0x1
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

struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	FVector EffectorLocation; // 0xd8
	EBoneControlSpace EffectorLocationSpace; // 0xe4
	FBoneSocketTarget EffectorTarget; // 0xf0
	FBoneReference TipBone; // 0x150
	FBoneReference RootBone; // 0x160
	float Precision; // 0x170
	int32_t MaxIterations; // 0x174
	bool bStartFromTail; // 0x178
	bool bEnableRotationLimit; // 0x179
	TArray<float> RotationLimitPerJoints; // 0x180
};

struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xe0
	FVector OverrideWorldGravity; // 0x188
	FVector ExternalForce; // 0x194
	FVector ComponentLinearAccScale; // 0x1a0
	FVector ComponentLinearVelScale; // 0x1ac
	FVector ComponentAppliedLinearAccClamp; // 0x1b8
	float CachedBoundsScale; // 0x1c4
	FBoneReference BaseBoneRef; // 0x1c8
	ECollisionChannel OverlapChannel; // 0x1d8
	ESimulationSpace SimulationSpace; // 0x1d9
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1da
	char bEnableWorldGeometry : 1; // 0x1dc
	char bOverrideWorldGravity : 1; // 0x1dc
	char bTransferBoneVelocities : 1; // 0x1dc
	char bFreezeIncomingPoseOnStart : 1; // 0x1dc
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1dc
	FSolverIterations OverrideSolverIterations; // 0x1e0
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

struct FKSTranslucencyMaterialInfo {
	UMaterialInstanceDynamic* TranslucencyMaterial; // 0x0
	bool bIsPersistentMaterialOverride; // 0x8
	bool bUpdateAllPersistentMaterials; // 0x9
	UKSSkeletalMeshComponent* SkeletalMesh; // 0x10
	int32_t PersistentMaterialSlot; // 0x18
	TArray<FName> ScalarParamNames; // 0x20
};

struct FAccoladeDisplayInfo {
	EAccoladeCategory Category; // 0x0
	EAccoladeEventType Type; // 0x1
	UTexture2D* DisplayIcon; // 0x8
	FText DisplayTitle; // 0x10
	float DisplayDuration; // 0x28
	int32_t Multiplier; // 0x2c
	FKSVoicelineEvent AccoladeVoiceLine; // 0x30
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FPlayerProgression {
	TArray<FActivityTier> ProgressionTiers; // 0x0
	int32_t StartingXPValue; // 0x10
	int32_t EndingXPValue; // 0x14
	UKSActivity* ActivityReference; // 0x18
	UKSActivityInstance* ActivityInstanceReference; // 0x20
	TMap<ERewardSource, float> ProgressionBySource; // 0x28
	TMap<FString, float> ProgressionByEvent; // 0x78
	TMap<FString, float> ProgressionByBooster; // 0xc8
	TMap<FString, float> ExtraData; // 0x118
	EEOMProgressionType ProgressionType; // 0x168
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
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
	float Lifetime; // 0x48
	float Thickness; // 0x4c
	FString Message; // 0x50
	FVector2D TextScale; // 0x60
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FQosPingServerInfo {
	FString Address; // 0x0
	int32_t Port; // 0x10
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FKSRespawnConfig {
	EKSRespawnMode RespawnMode; // 0x0
	int32_t TotalRespawns; // 0x4
	int32_t PersonalRespawns; // 0x8
	float RespawnTime; // 0xc
	bool WaveRespawn; // 0x10
	int32_t CostPerRespawn; // 0x14
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
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

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FKSLimitedTimeEventRow {
	FString LimitedTimeEventKey; // 0x0
	TArray<FString> BonusProgressionKeys; // 0x10
	TArray<FString> AllowedQueueGroups; // 0x20
	int32_t RequiredItemId; // 0x30
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FProjectileExplosionInfo {
	EProjectileExplosionType ExplosionType; // 0x0
	EPhysicalSurface SurfaceType; // 0x1
	FVector_NetQuantize ImpactPoint; // 0x4
	FVector_NetQuantizeNormal ImpactNormal; // 0x10
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FSpecialtyData {
	UKSSpecialty* Specialty; // 0x0
	FCustomLoadoutItem Killstreak; // 0x8
	FCustomLoadoutItem SecondaryAbility; // 0x18
	FCustomLoadoutItem PassiveAbility; // 0x28
	TArray<int32_t> AssociatedLoadoutItemIds; // 0x38
};

struct FKSAimAssistPropertyFloat {
	EControllerInputType InputType; // 0x0
	float Value; // 0x4
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x40
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
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

struct FReviveEventRecord {
	int32_t reviver_ue_player_id; // 0x0
	int32_t reviver_hz_player_id; // 0x4
	FLocationRecord reviver_location; // 0x8
	int32_t revivee_ue_player_id; // 0x14
	int32_t revivee_hz_player_id; // 0x18
	FLocationRecord revivee_location; // 0x1c
	FString Timestamp; // 0x28
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FHitValidationRecoveryInfo {
	TArray<FKSCompressedHit> Hits; // 0x0
	FAimData AimData; // 0x10
};

struct FNiagaraSystemCompiledData {
	FNiagaraParameterStore InstanceParamStore; // 0x0
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0xb8
	FNiagaraDataSetCompiledData SpawnInstanceParamsDataSetCompiledData; // 0xf8
	FNiagaraDataSetCompiledData UpdateInstanceParamsDataSetCompiledData; // 0x138
	FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding; // 0x178
	FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding; // 0x198
	FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding; // 0x1b8
	TArray<FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings; // 0x1d8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding; // 0x1e8
	FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding; // 0x208
	FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding; // 0x228
	TArray<FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings; // 0x248
};

struct FColorEntry {
	FSlateColor Color_5_95A3887F414F0B9F0A5AB59D355DA568; // 0x0
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x58
	FSlateBrush BackgroundImageSelected; // 0x80
	FSlateBrush BackgroundImageComposing; // 0x108
	FSlateBrush CaretImage; // 0x190
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FKSBTAbilityConditionTableRow : FTableRowBase {
	TSoftObjectPtr<UKSPlayerMod> AbilityItem; // 0x8
	UKSBTAbilityConditionValidator* AbilityConditionValidator; // 0x30
	EAbilityExecutionType AbilityExecutionType; // 0x38
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FBatchedLine {
	FVector start; // 0x0
	FVector end; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FKSCharacterSocketInfo {
	FName SocketName; // 0x0
	FTransform RelativeTM; // 0x10
	UKSCharacterSocketComponent* SocketComponent; // 0x40
	USceneComponent* ParentComponent; // 0x48
	FName ParentSocketName; // 0x50
	EKSSocketCrouchHandling CrouchHandlingType; // 0x58
	FVector AdditiveCrouchOffset; // 0x5c
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

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FActivitySequenceRow : FTableRowBase {
	FText DisplayName; // 0x8
	TArray<TSoftObjectPtr<UKSActivity>> ActivitySequence; // 0x20
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FKSPostProcessColorCurve {
	UCurveLinearColor* ColorCurve; // 0x0
	FName ColorParameterName; // 0x8
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FKSBotEquipmentSkinTableRow : FTableRowBase {
	FGameplayTag EquipPointTag; // 0x8
	UDataTable* SkinTable; // 0x10
};

struct FKSFavoredMatchBonusEntry {
	float MaxDifference; // 0x0
	int32_t BonusValue; // 0x4
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FAnimSpeedWarpDefinition {
	FBoneReference IkFootRootBone; // 0x0
	TArray<FBoneReference> IkFootBones; // 0x10
	FBoneReference PelvisBone; // 0x20
	float PelvisAdjustmentAlpha; // 0x30
	int32_t PelvisAdjustmentMaxIterations; // 0x34
	float PelvisAdjustmentStiffness; // 0x38
	float PelvisAdjustmentDamping; // 0x3c
	FName DisableSpeedWarpCurveName; // 0x40
};

struct FKSRandomDropEntry {
	UDataTable* RandomDropTable; // 0x0
	TArray<int32_t> SidesToDropItems; // 0x8
};

struct FShopItem : FFastArraySerializerItem {
	EShopItemType Type; // 0xc
	FGameplayTag PreferredEquipPoint; // 0x10
	TArray<FShopSubItem> CurrentSubItemList; // 0x18
	TArray<FShopSubItem> AppliedSubItemList; // 0x28
	bool bResetable; // 0x38
	int32_t NextSubItemIndex; // 0x3c
	int32_t CurrentSubItemIndex; // 0x40
	int32_t AppliedSubItemIndex; // 0x44
	bool bIsActive; // 0x48
	bool bIsAppliedActive; // 0x49
	bool bStartInactive; // 0x4a
	bool bOneTimePurchase; // 0x4b
	bool bResetOnExhausted; // 0x4c
	bool bResetOnRound; // 0x4d
	bool bAuthorityIsActive; // 0x4e
	int32_t AuthorityPurchaseIndex; // 0x50
	int32_t AuthorityLatestTransactionId; // 0x54
	bool bSimulatedIsActive; // 0x58
	int32_t SimulatedPurchaseIndex; // 0x5c
	int32_t SimulatedLatestTransactionId; // 0x60
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FKSInitialInventoryItem {
	FGameplayTag EquipPoint; // 0x0
	UKSItem* ItemAsset; // 0x8
	TArray<UKSWeaponAttachment*> Attachments; // 0x10
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
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
	EMobileCSMQuality MobileCSMQuality; // 0x8
};

struct FSkinMapReplicator : FFastArraySerializer {
	TArray<FSingleSkinMapReplicatorEntry> RepItems; // 0x108
	TMap<UKSItem*, UKSItem*> SkinMap; // 0x118
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

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FSkeletalMeshClothBuildParams {
	TWeakObjectPtr<UClothingAssetBase> TargetAsset; // 0x0
	int32_t TargetLOD; // 0x8
	bool bRemapParameters; // 0xc
	FString AssetName; // 0x10
	int32_t LODIndex; // 0x20
	int32_t SourceSection; // 0x24
	bool bRemoveFromMesh; // 0x28
	TSoftObjectPtr<UPhysicsAsset> PhysicsAsset; // 0x30
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FKSExperimentConfig {
	FString Name; // 0x0
	bool Value; // 0x10
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FKSAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FReviveEventItem : FReplicatedLogItem {
	FReviveEvent ReviveEvent; // 0x0
};

struct FPUMG_PopupConfig {
	FText Header; // 0x0
	FText SubHeading; // 0x18
	TSoftObjectPtr<UTexture2D> HeadingIcon; // 0x30
	FText Description; // 0x58
	FText Warning; // 0x70
	bool TextEntry; // 0x88
	FText TextEntryHint; // 0x90
	bool IsImportant; // 0xa8
	bool TreatAsBlocker; // 0xa9
	TArray<FPUMG_PopupButtonConfig> Buttons; // 0xb0
	FMulticastInlineDelegate CancelAction; // 0xc0
	ETextJustify TextAlignment; // 0xd0
	int32_t PopupId; // 0xd4
	EPUMG_PopupFormat PopupFormat; // 0xd8
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FMultiSkinMapReplicatorEntry : FFastArraySerializerItem {
	FKSPersistentPlayerId PlayerId; // 0x10
	UKSItem* Item; // 0x20
	UKSItem* Skin; // 0x28
};

struct FInitialGameObjectiveInfo {
	int32_t ID; // 0x0
	AActor* ObjectiveAsActor; // 0x8
	FKSObjectiveState ObjectiveState; // 0x10
	FKSObjectiveState PreviousObjectiveState; // 0x38
};

struct FMapDetail {
	int32_t MapId; // 0x0
	FText mapName; // 0x8
	TSoftObjectPtr<UTexture2D> MapThumbnail; // 0x20
};

struct FFBP_CustomMatchTeam {
	int32_t TeamID_7_BAB34AE24596157B7EFD959A8D453F62; // 0x0
	TArray<FPUMG_CustomMatchMember> Members_3_15C42158406155E59954E2A8A801EA3D; // 0x8
	TArray<UKSWidget*> Widgets_11_6E324FD94AEEDB2A614F75A909EA63D9; // 0x18
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FKSObjectiveInfo {
	int32_t ID; // 0x0
	FKSObjectiveState ObjectiveState; // 0x8
	FKSObjectiveState PreviousObjectiveState; // 0x30
	TArray<FDelegate> ObjectiveStateChangedCallbacks; // 0x58
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FKSSpreadEntry : FFastArraySerializerItem {
	FKSSpreadTransform Entry; // 0x10
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

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
	uint32_t NumAudioOut2ObjectPorts; // 0x40
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FErrorMessage : FTableRowBase {
	int32_t ErrorMsgId; // 0x8
	FText ErrorMsg; // 0x10
};

struct FAkXSXApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x20
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FLobbyPlayerStateInfoArray : FFastArraySerializer {
	TArray<FLobbyPlayerStateActorInfo> Players; // 0x108
	ALobbyBeaconState* ParentState; // 0x118
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FHitReaction {
	FVector WorldHitDirection; // 0x0
	float Damage; // 0xc
	float HitTime; // 0x10
};

struct FKSVehicleDestructionStage {
	UParticleSystem* StageVFX; // 0x0
	UAkAudioEvent* StageSFX; // 0x8
	UAkAudioEvent* StageEcho; // 0x10
	FTransform StageEffectTransform; // 0x20
	float StageDeteriorationRate; // 0x50
};

struct FAuxiliaryWeaponInfo {
	FName AuxiliarySlot; // 0x0
	AKSWeapon* ParentWeapon; // 0x8
};

struct FSingleSkinMapReplicatorEntry : FFastArraySerializerItem {
	UKSItem* Item; // 0x10
	UKSItem* Skin; // 0x18
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x58
	FVector2D ShadowOffset; // 0x80
	FLinearColor ShadowColorAndOpacity; // 0x88
	FSlateColor SelectedBackgroundColor; // 0x98
	FLinearColor HighlightColor; // 0xc0
	FSlateBrush HighlightShape; // 0xd0
	FSlateBrush StrikeBrush; // 0x158
	FSlateBrush UnderlineBrush; // 0x1e0
};

struct FAccountJobStatReplicator : FFastArraySerializer {
	TArray<FAccountJobStatReplicatorEntry> RepItems; // 0x118
	TMap<FAccountJobStatKey, int32_t> AccountJobStatsMap; // 0x128
	TMap<FInventoryId, FAccountJobStatKey> InventoryIdToStatKeyMap; // 0x1c8
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xd8
	TArray<FConstraint> ConstraintSetup; // 0xe8
	TArray<float> ConstraintWeights; // 0xf8
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FItemDisplayStatParams : FTableRowBase {
	float RangeMin; // 0x8
	float RangeMax; // 0xc
	bool ShowsBar; // 0x10
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FObjectDictionaryRecord {
	int32_t weapon_id; // 0x0
	FString weapon_name; // 0x8
	FString item_type_name; // 0x18
	int32_t weapon_category_type_value; // 0x28
	EKSWeaponCategoryType weapon_category_type_name; // 0x2c
	int32_t weapon_slot_type_value; // 0x30
	EWeaponSlotType weapon_slot_type_name; // 0x34
	bool is_accuracy_weapon; // 0x35
	float base_accuracy; // 0x38
	float max_aimed_accuracy; // 0x3c
	float max_hip_fire_accuracy; // 0x40
	int32_t fire_mode_type_value; // 0x44
	EFireModeType fire_mode_type_name; // 0x48
	int32_t reload_type_value; // 0x4c
	EReloadType reload_type_name; // 0x50
	int32_t rounds_per_burst; // 0x54
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
	char bOverride_FilmWhitePoint : 1; // 0x3
	char bOverride_FilmSaturation : 1; // 0x3
	char bOverride_FilmChannelMixerRed : 1; // 0x3
	char bOverride_FilmChannelMixerGreen : 1; // 0x3
	char bOverride_FilmChannelMixerBlue : 1; // 0x3
	char bOverride_FilmContrast : 1; // 0x3
	char bOverride_FilmDynamicRange : 1; // 0x4
	char bOverride_FilmHealAmount : 1; // 0x4
	char bOverride_FilmToeAmount : 1; // 0x4
	char bOverride_FilmShadowTint : 1; // 0x4
	char bOverride_FilmShadowTintBlend : 1; // 0x4
	char bOverride_FilmShadowTintAmount : 1; // 0x4
	char bOverride_FilmSlope : 1; // 0x4
	char bOverride_FilmToe : 1; // 0x4
	char bOverride_FilmShoulder : 1; // 0x5
	char bOverride_FilmBlackClip : 1; // 0x5
	char bOverride_FilmWhiteClip : 1; // 0x5
	char bOverride_SceneColorTint : 1; // 0x5
	char bOverride_SceneFringeIntensity : 1; // 0x5
	char bOverride_ChromaticAberrationStartOffset : 1; // 0x5
	char bOverride_AmbientCubemapTint : 1; // 0x5
	char bOverride_AmbientCubemapIntensity : 1; // 0x5
	char bOverride_BloomMethod : 1; // 0x6
	char bOverride_BloomIntensity : 1; // 0x6
	char bOverride_BloomThreshold : 1; // 0x6
	char bOverride_Bloom1Tint : 1; // 0x6
	char bOverride_Bloom1Size : 1; // 0x6
	char bOverride_Bloom2Size : 1; // 0x6
	char bOverride_Bloom2Tint : 1; // 0x6
	char bOverride_Bloom3Tint : 1; // 0x6
	char bOverride_Bloom3Size : 1; // 0x7
	char bOverride_Bloom4Tint : 1; // 0x7
	char bOverride_Bloom4Size : 1; // 0x7
	char bOverride_Bloom5Tint : 1; // 0x7
	char bOverride_Bloom5Size : 1; // 0x7
	char bOverride_Bloom6Tint : 1; // 0x7
	char bOverride_Bloom6Size : 1; // 0x7
	char bOverride_BloomSizeScale : 1; // 0x7
	char bOverride_BloomConvolutionTexture : 1; // 0x8
	char bOverride_BloomConvolutionSize : 1; // 0x8
	char bOverride_BloomConvolutionCenterUV : 1; // 0x8
	char bOverride_BloomConvolutionPreFilter : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMin : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMax : 1; // 0x8
	char bOverride_BloomConvolutionPreFilterMult : 1; // 0x8
	char bOverride_BloomConvolutionBufferScale : 1; // 0x8
	char bOverride_BloomDirtMaskIntensity : 1; // 0x9
	char bOverride_BloomDirtMaskTint : 1; // 0x9
	char bOverride_BloomDirtMask : 1; // 0x9
	char bOverride_CameraShutterSpeed : 1; // 0x9
	char bOverride_CameraISO : 1; // 0x9
	char bOverride_AutoExposureMethod : 1; // 0x9
	char bOverride_AutoExposureLowPercent : 1; // 0x9
	char bOverride_AutoExposureHighPercent : 1; // 0x9
	char bOverride_AutoExposureMinBrightness : 1; // 0xa
	char bOverride_AutoExposureMaxBrightness : 1; // 0xa
	char bOverride_AutoExposureCalibrationConstant : 1; // 0xa
	char bOverride_AutoExposureSpeedUp : 1; // 0xa
	char bOverride_AutoExposureSpeedDown : 1; // 0xa
	char bOverride_AutoExposureBias : 1; // 0xa
	char bOverride_AutoExposureBiasCurve : 1; // 0xa
	char bOverride_AutoExposureMeterMask : 1; // 0xa
	char bOverride_AutoExposureApplyPhysicalCameraExposure : 1; // 0xb
	char bOverride_HistogramLogMin : 1; // 0xb
	char bOverride_HistogramLogMax : 1; // 0xb
	char bOverride_LensFlareIntensity : 1; // 0xb
	char bOverride_LensFlareTint : 1; // 0xb
	char bOverride_LensFlareTints : 1; // 0xb
	char bOverride_LensFlareBokehSize : 1; // 0xb
	char bOverride_LensFlareBokehShape : 1; // 0xb
	char bOverride_LensFlareThreshold : 1; // 0xc
	char bOverride_VignetteIntensity : 1; // 0xc
	char bOverride_GrainIntensity : 1; // 0xc
	char bOverride_GrainJitter : 1; // 0xc
	char bOverride_AmbientOcclusionIntensity : 1; // 0xc
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0xc
	char bOverride_AmbientOcclusionRadius : 1; // 0xc
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0xc
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0xd
	char bOverride_AmbientOcclusionDistance : 1; // 0xd
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xd
	char bOverride_AmbientOcclusionPower : 1; // 0xd
	char bOverride_AmbientOcclusionBias : 1; // 0xd
	char bOverride_AmbientOcclusionQuality : 1; // 0xd
	char bOverride_AmbientOcclusionMipBlend : 1; // 0xd
	char bOverride_AmbientOcclusionMipScale : 1; // 0xd
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0xe
	char bOverride_AmbientOcclusionTemporalBlendWeight : 1; // 0xe
	char bOverride_HirezAmbientOcclusionIntensity : 1; // 0xe
	char bOverride_HirezAmbientOcclusionRejectionFalloff : 1; // 0xe
	char bOverride_HirezAmbientOcclusionAccentuation : 1; // 0xe
	char bOverride_RayTracingAO : 1; // 0x10
	char bOverride_RayTracingAOSamplesPerPixel : 1; // 0x10
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
	float FilmSlope; // 0x180
	float FilmToe; // 0x184
	float FilmShoulder; // 0x188
	float FilmBlackClip; // 0x18c
	float FilmWhiteClip; // 0x190
	FLinearColor FilmWhitePoint; // 0x194
	FLinearColor FilmShadowTint; // 0x1a4
	float FilmShadowTintBlend; // 0x1b4
	float FilmShadowTintAmount; // 0x1b8
	float FilmSaturation; // 0x1bc
	FLinearColor FilmChannelMixerRed; // 0x1c0
	FLinearColor FilmChannelMixerGreen; // 0x1d0
	FLinearColor FilmChannelMixerBlue; // 0x1e0
	float FilmContrast; // 0x1f0
	float FilmToeAmount; // 0x1f4
	float FilmHealAmount; // 0x1f8
	float FilmDynamicRange; // 0x1fc
	FLinearColor SceneColorTint; // 0x200
	float SceneFringeIntensity; // 0x210
	float ChromaticAberrationStartOffset; // 0x214
	float BloomIntensity; // 0x218
	float BloomThreshold; // 0x21c
	float BloomSizeScale; // 0x220
	float Bloom1Size; // 0x224
	float Bloom2Size; // 0x228
	float Bloom3Size; // 0x22c
	float Bloom4Size; // 0x230
	float Bloom5Size; // 0x234
	float Bloom6Size; // 0x238
	FLinearColor Bloom1Tint; // 0x23c
	FLinearColor Bloom2Tint; // 0x24c
	FLinearColor Bloom3Tint; // 0x25c
	FLinearColor Bloom4Tint; // 0x26c
	FLinearColor Bloom5Tint; // 0x27c
	FLinearColor Bloom6Tint; // 0x28c
	float BloomConvolutionSize; // 0x29c
	UTexture2D* BloomConvolutionTexture; // 0x2a0
	FVector2D BloomConvolutionCenterUV; // 0x2a8
	float BloomConvolutionPreFilterMin; // 0x2b0
	float BloomConvolutionPreFilterMax; // 0x2b4
	float BloomConvolutionPreFilterMult; // 0x2b8
	float BloomConvolutionBufferScale; // 0x2bc
	UTexture* BloomDirtMask; // 0x2c0
	float BloomDirtMaskIntensity; // 0x2c8
	FLinearColor BloomDirtMaskTint; // 0x2cc
	FLinearColor AmbientCubemapTint; // 0x2dc
	float AmbientCubemapIntensity; // 0x2ec
	UTextureCube* AmbientCubemap; // 0x2f0
	float CameraShutterSpeed; // 0x2f8
	float CameraISO; // 0x2fc
	float DepthOfFieldFstop; // 0x300
	float DepthOfFieldMinFstop; // 0x304
	int32_t DepthOfFieldBladeCount; // 0x308
	float AutoExposureBias; // 0x30c
	float AutoExposureBiasBackup; // 0x310
	char bOverride_AutoExposureBiasBackup : 1; // 0x314
	char AutoExposureApplyPhysicalCameraExposure : 1; // 0x318
	UCurveFloat* AutoExposureBiasCurve; // 0x320
	UTexture* AutoExposureMeterMask; // 0x328
	float AutoExposureLowPercent; // 0x330
	float AutoExposureHighPercent; // 0x334
	float AutoExposureMinBrightness; // 0x338
	float AutoExposureMaxBrightness; // 0x33c
	float AutoExposureSpeedUp; // 0x340
	float AutoExposureSpeedDown; // 0x344
	float HistogramLogMin; // 0x348
	float HistogramLogMax; // 0x34c
	float AutoExposureCalibrationConstant; // 0x350
	float LensFlareIntensity; // 0x354
	FLinearColor LensFlareTint; // 0x358
	float LensFlareBokehSize; // 0x368
	float LensFlareThreshold; // 0x36c
	UTexture* LensFlareBokehShape; // 0x370
	FLinearColor LensFlareTints[0x8]; // 0x378
	float VignetteIntensity; // 0x3f8
	float GrainJitter; // 0x3fc
	float GrainIntensity; // 0x400
	float AmbientOcclusionIntensity; // 0x404
	float AmbientOcclusionStaticFraction; // 0x408
	float AmbientOcclusionRadius; // 0x40c
	char AmbientOcclusionRadiusInWS : 1; // 0x410
	float AmbientOcclusionFadeDistance; // 0x414
	float AmbientOcclusionFadeRadius; // 0x418
	float AmbientOcclusionDistance; // 0x41c
	float AmbientOcclusionPower; // 0x420
	float AmbientOcclusionBias; // 0x424
	float AmbientOcclusionQuality; // 0x428
	float AmbientOcclusionMipBlend; // 0x42c
	float AmbientOcclusionMipScale; // 0x430
	float AmbientOcclusionMipThreshold; // 0x434
	float AmbientOcclusionTemporalBlendWeight; // 0x438
	float HirezAmbientOcclusionIntensity; // 0x43c
	float HirezAmbientOcclusionRejectionFalloff; // 0x440
	float HirezAmbientOcclusionAccentuation; // 0x444
	char RayTracingAO : 1; // 0x448
	int32_t RayTracingAOSamplesPerPixel; // 0x44c
	FLinearColor IndirectLightingColor; // 0x450
	float IndirectLightingIntensity; // 0x460
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x464
	int32_t RayTracingGIMaxBounces; // 0x468
	int32_t RayTracingGISamplesPerPixel; // 0x46c
	float ColorGradingIntensity; // 0x470
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

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	float AnimStartOffset; // 0x10
	float AnimEndOffset; // 0x14
	float AnimPlayRate; // 0x18
	char bLooping : 1; // 0x1c
	char bReverse : 1; // 0x1c
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FKSAmmoManagerEntry : FFastArraySerializerItem {
	EAmmoType AmmoType; // 0xc
	uint32_t UpdateId; // 0x10
	int32_t AmmoCount; // 0x14
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
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

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FRankedAimAssistTarget {
	UKSAimAssistAnchorComponent* Anchor; // 0x0
	TScriptInterface<IKSAimAssistTargetInterface> Target; // 0x8
	float HeadWeight; // 0x18
	FVector2D BodyLocation; // 0x1c
	FVector2D HeadLocation; // 0x24
	FBox2D ScaledProjectionBounds; // 0x2c
	float DistanceFromCamera; // 0x40
	int32_t UpdateCount; // 0x44
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FDatacenterQosInstance {
	FQosDatacenterInfo Definition; // 0x0
	EQosDatacenterResult Result; // 0x38
	int32_t AvgPingMs; // 0x3c
	TArray<int32_t> PingResults; // 0x40
	FDateTime LastCheckTimestamp; // 0x58
	bool bUsable; // 0x60
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x88
	float PoseWeight; // 0x90
};

struct FBadBehaviorConfigEntry {
	EBadBehaviorType BehaviorType; // 0x0
	int32_t TimeRequired; // 0x4
	bool IsRepeatable; // 0x8
	bool IsImmediate; // 0x9
	bool AppliesDeserterPenalty; // 0xa
	TArray<FPunishmentConfigEntry> Punishments; // 0x10
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x90
	FSlateBrush BackgroundImageFocused; // 0x118
	FSlateBrush BackgroundImageReadOnly; // 0x1a0
	FMargin Padding; // 0x228
	FSlateFontInfo Font; // 0x238
	FSlateColor ForegroundColor; // 0x288
	FSlateColor BackgroundColor; // 0x2b0
	FSlateColor ReadOnlyForegroundColor; // 0x2d8
	FMargin HScrollBarPadding; // 0x300
	FMargin VScrollBarPadding; // 0x310
	FScrollBarStyle ScrollBarStyle; // 0x320
};

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FKSAffiliationFilter {
	bool bCountEnemies; // 0x0
	bool bCountAllies; // 0x1
	bool bCountSelf; // 0x2
	bool bCountUnaffiliated; // 0x3
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FPartyPlatformSessionInfo {
	FName OSSName; // 0x0
	FString SessionId; // 0x8
	FUniqueNetIdRepl OwnerPrimaryId; // 0x18
};

struct FAssistEventItem : FReplicatedLogItem {
	FAssistInfo AssistInfo; // 0x0
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
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

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FAirElimTracker {
	int32_t InstigatorId; // 0x0
	int32_t DownCount; // 0x4
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

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FAdvancedCombatEvent {
	TWeakObjectPtr<APlayerState> DamageInstigator; // 0x0
	FVector_NetQuantize DamageInstigatorLocation; // 0x8
	int32_t KSCharacterAimMode; // 0x14
	bool IsAimingDownSights; // 0x18
	bool IsAimingOverTheShoulder; // 0x19
	bool IsAimingAlternate; // 0x1a
	bool IsAimingDefault; // 0x1b
	TWeakObjectPtr<APawn> DamageInstigatorPawn; // 0x1c
	TWeakObjectPtr<AActor> DamageCauser; // 0x24
	float Damage; // 0x2c
	UDamageType* DamageType; // 0x30
	UKSWeaponAsset* WeaponAsset; // 0x38
	int32_t VictimId; // 0x40
	FString Victim; // 0x48
	FVector_NetQuantize VictimLocation; // 0x58
	int32_t VictimTeamNum; // 0x64
	int32_t InstigatorId; // 0x68
	FString Instigator; // 0x70
	ECombatEventFriendlyFireType FriendlyFireType; // 0x80
	float GameTimeStamp; // 0x84
	FVector_NetQuantize HitLocation; // 0x88
	FName HitBone; // 0x94
	bool Headshot; // 0x9c
	bool DowningHit; // 0x9d
	bool FatalHit; // 0x9e
	bool bResisted; // 0x9f
	bool bReduced; // 0xa0
	bool bShielded; // 0xa1
};

struct FHardAssetTableRow : FTableRowBase {
	UAnimationAsset* AnimationAsset; // 0x8
	UAkAudioEvent* AudioEvent; // 0x10
	USelectiveAkAudioEvent* SelectiveAudioEvent; // 0x18
	USkeletalMesh* SkeletalMesh; // 0x20
	UPhysicsAsset* PhysicsAsset; // 0x28
	UStaticMesh* StaticMesh; // 0x30
	UParticleSystem* ParticleSystem; // 0x38
	UMaterialInterface* MaterialInterface; // 0x40
	UTexture* Texture; // 0x48
	UObject* Class; // 0x50
	bool Bool; // 0x58
	float Float; // 0x5c
	FLinearColor LinearColor; // 0x60
	int32_t Int; // 0x70
	FName NameField; // 0x74
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FMasterySectionData {
	TArray<FActivityTier> ActivityTiers; // 0x0
	float ProgressPercentage; // 0x10
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FKSQueueGroupRow {
	FString GroupKey; // 0x0
	TArray<FString> BonusProgressionKeys; // 0x10
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FQuantityRarity : FTableRowBase {
	int32_t MinQuantityRange; // 0x8
	int32_t MaxQuantityRange; // 0xc
	FGameplayTagContainer RarityTag; // 0x10
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FReviveInfo {
	bool bIsBeingRevived; // 0x0
	bool bRemoteRevive; // 0x1
	bool bSelectedToRevive; // 0x2
	bool bReviveGuaranteed; // 0x3
	AKSPlayerState* Reviver; // 0x8
	AKSCharacter* ReviverCharacter; // 0x10
	FName ReviveeOverrideMontage; // 0x18
	float ReviveProgress; // 0x20
	float ReviveRate; // 0x24
	float LocalReviveProgress; // 0x28
	char RequestID; // 0x2c
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FPUMG_LoadoutItem {
	FText Name; // 0x0
	int32_t ItemId; // 0x18
	int32_t Quantity; // 0x1c
	int32_t SortOrder; // 0x20
	int32_t ItemType; // 0x24
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FPGame_BlueprintableLightingChannels {
	bool bChannel0; // 0x0
	bool bChannel1; // 0x1
	bool bChannel2; // 0x2
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FKSCustomInputActionKeyMappings {
	TArray<FKSInputActionKeyMapping> KBM_Mappings; // 0x0
	TArray<FKSInputActionKeyMapping> GP_Mappings; // 0x10
	TArray<FKSInputActionKeyMapping> Touch_Mappings; // 0x20
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FLoginQueueInfo {
	FText QueueMessage; // 0x0
	int32_t QueuePosition; // 0x18
	int32_t QueueSize; // 0x1c
	int32_t EstimatedWaitTime; // 0x20
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FHudEditableData {
	FName WidgetName; // 0x0
	FVector2D AbsolutePosition; // 0x8
	bool bHasSetAbsolutePosition; // 0x10
	float Scale; // 0x14
	float Opacity; // 0x18
	int32_t bIsVisible; // 0x1c
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FTrackedPlayers {
	int32_t PlayerId; // 0x0
	AKSPlayerState* PlayerState; // 0x8
	int32_t KillCount; // 0x10
};

struct FKSPlayerModOverridePropertyStatInteger : FKSPlayerModOverridePropertyStatBase {
	int32_t IntegerValue; // 0x8
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FKSActiveEmotePropInfo {
	FGuid EmotePropGuid; // 0x0
	TWeakObjectPtr<UMeshComponent> SpawnedEmotePropMeshComponent; // 0x10
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
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

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FKSLootLockerItem {
	UKSWeaponAsset* WeaponAsset; // 0x0
	UKSWeaponAttachment* Attachment1; // 0x8
	UKSWeaponAttachment* Attachment2; // 0x10
	UKSWeaponAttachment* Attachment3; // 0x18
};

struct FKSFreezeFramePawnWeaponProp : FKSFreezeFramePropBase {
	UDataTable* MeshDataTable; // 0x80
	UDataTable* WrapDataTable; // 0x88
};

struct FKSCinematicData {
	FText CinematicDisplayName; // 0x0
	FString CinematicSubLevelName; // 0x18
	EKSLevelStreamingMethod CinematicLevelStreamingMethod; // 0x28
	FName DefaultCameraTag; // 0x2c
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	FMovieSceneEvaluationOperand Operand; // 0x8
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x280
	FButtonStyle RestoreButtonStyle; // 0x4f8
	FButtonStyle CloseButtonStyle; // 0x770
	FTextBlockStyle TitleTextStyle; // 0x9e8
	FSlateBrush ActiveTitleBrush; // 0xc50
	FSlateBrush InactiveTitleBrush; // 0xcd8
	FSlateBrush FlashTitleBrush; // 0xd60
	FSlateColor BackgroundColor; // 0xde8
	FSlateBrush OutlineBrush; // 0xe10
	FSlateColor OutlineColor; // 0xe98
	FSlateBrush BorderBrush; // 0xec0
	FSlateBrush BackgroundBrush; // 0xf48
	FSlateBrush ChildBackgroundBrush; // 0xfd0
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FChallengeDataRow : FTableRowBase {
	FGameplayTag ChallengeTag; // 0x8
	bool DisplayOnContractsRotator; // 0x10
	bool DisplayOnContractsHub; // 0x11
	char SortOrder; // 0x12
};

struct FPGame_ReplicatedTimerManagerEntry : FFastArraySerializerItem {
	FPGame_ReplicatedTimerId ID; // 0xc
	FPGame_ReplicatedTimer Timer; // 0x10
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

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FLiveLinkInstanceProxy : FAnimInstanceProxy {
	FAnimNode_LiveLinkPose PoseNode; // 0x6e0
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FPingInfoChangeItem : FFastArraySerializerItem {
	FPingInfo PingInfo; // 0x10
};

struct FKSAnimNode_Mirror : FAnimNode_SkeletalControlBase {
	FBoneMirrorConfig BoneMirrorConfig; // 0xd8
	EPoseMirrorPlane MirrorPlane; // 0xf8
	bool bAlternateMirroring; // 0xf9
	FBoneMirrorConfig MirrorConfigCache; // 0x100
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

struct FNiagaraTestStructInner {
	FVector InnerVector1; // 0x0
	FVector InnerVector2; // 0xc
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x8
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FKSProximityFilter {
	TArray<AActor*> ValidActorClasses; // 0x0
	bool bCountAllies; // 0x10
	bool bCountEnemies; // 0x11
	bool bCountUnaffiliated; // 0x12
	bool bCheckLOS; // 0x13
	FVector LOSTraceStartOffset; // 0x14
	float InvalidInnerRangeRadius; // 0x20
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
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

struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x20
	FPoseLink B; // 0x30
	EAnimAlphaInputType AlphaInputType; // 0x40
	char bAlphaBoolEnabled : 1; // 0x41
	char bResetChildOnActivation : 1; // 0x41
	float Alpha; // 0x44
	FInputScaleBias AlphaScaleBias; // 0x48
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x50
	FName AlphaCurveName; // 0x98
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0xa0
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
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

struct FPlane : FVector {
	float W; // 0xc
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FShopManifest : FFastArraySerializer {
	TArray<FShopItem> Manifest; // 0x108
	AKSPlayerShop* Owner; // 0x118
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinID; // 0x8
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x48
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FAccoladeTrackerTableRow : FTableRowBase {
	TSoftClassPtr<UObject> AccoladeTrackerObject; // 0x8
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FPingInfoChangeList : FFastArraySerializer {
	TArray<FPingInfoChangeItem> Items; // 0x108
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

struct FReviveEventList : FSizedArraySerializer {
	TArray<FReviveEventItem> Items; // 0x70
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FKSCompressedHit {
	char bBlockingHit : 1; // 0x0
	float Time; // 0x4
	FVector_NetQuantizeNormal Normal; // 0x8
	FVector_NetQuantize TraceStart; // 0x14
	FVector_NetQuantize TraceEnd; // 0x20
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x2c
	FName BoneName; // 0x34
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
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

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	FPerPlatformFloat GrassDensity; // 0x8
	bool bUseGrid; // 0xc
	float PlacementJitter; // 0x10
	FPerPlatformInt StartCullDistance; // 0x14
	FPerPlatformInt EndCullDistance; // 0x18
	int32_t MinLOD; // 0x1c
	EGrassScaling Scaling; // 0x20
	FFloatInterval ScaleX; // 0x24
	FFloatInterval ScaleY; // 0x2c
	FFloatInterval ScaleZ; // 0x34
	bool RandomRotation; // 0x3c
	bool AlignToSurface; // 0x3d
	bool bUseLandscapeLightmap; // 0x3e
	FLightingChannels LightingChannels; // 0x3f
	bool bReceivesDecals; // 0x40
	bool bCastDynamicShadow; // 0x41
	bool bKeepInstanceBufferCPUCopy; // 0x42
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x7f8
	FSlateBrush UpArrowImage; // 0x848
	FSlateBrush DownArrowImage; // 0x8d0
	FSlateBrush GlassImage; // 0x958
	FSlateBrush ClearImage; // 0x9e0
	FMargin ImagePadding; // 0xa68
	bool bLeftAlignButtons; // 0xa78
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FKSObjectiveState {
	EKSObjectiveState State; // 0x0
	int32_t Team; // 0x4
	AKSPlayerState* Holder; // 0x8
	TScriptInterface<IKSPointOfInterest> PointOfInterest; // 0x10
	UObject* POI; // 0x20
};

struct FKSScoreChangeList : FSizedArraySerializer {
	TArray<FKSScoreChangeItem> Items; // 0x78
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xd8
	FBoneReference SourceBone; // 0xe8
	float Multiplier; // 0xf8
	EBoneAxis RotationAxisToRefer; // 0xfc
	bool bIsAdditive; // 0xfd
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0xf0
	int32_t LODThreshold; // 0x100
	float Alpha; // 0x104
	FInputScaleBias AlphaScaleBias; // 0x108
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x110
	FName AlphaCurveName; // 0x158
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x160
	EAnimAlphaInputType AlphaInputType; // 0x194
	bool bAlphaBoolEnabled; // 0x195
};

struct FPUMG_AvatarData {
	int32_t ItemId; // 0x0
	TSoftObjectPtr<UTexture2D> Texture; // 0x8
	FString Name; // 0x30
	bool owned; // 0x40
	bool Selected; // 0x41
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
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

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FKSBTWeaponRangeTableRow : FTableRowBase {
	FGameplayTagContainer WeaponTypes; // 0x8
	TSoftClassPtr<UObject> WeaponClassOverride; // 0x28
	float IdealAttackRange; // 0x50
	float StartAttackRange; // 0x54
};

struct FMirrorMatchupRecord {
	int32_t hz_player_id; // 0x0
	int32_t ue_player_id; // 0x4
	int32_t team_id; // 0x8
	int32_t class_id; // 0xc
	int32_t has_mirror_match; // 0x10
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
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

struct FHitDecalInfo {
	UMaterialInterface* DecalMaterial; // 0x0
	FVector Size; // 0x8
	float MinimumScaling; // 0x14
	float MaximumScaling; // 0x18
	float MinimumAngle; // 0x1c
	float MaximumAngle; // 0x20
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FBotBackfillEventRecord {
	int32_t hz_player_id; // 0x0
	int32_t bot_ue_player_id; // 0x4
	int32_t round_id; // 0x8
	FString Timestamp; // 0x10
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
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

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
	bool bExcludeFromVolumetricLightmap; // 0x9
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FRoyaleZoneData {
	float ZoneRadius; // 0x0
	float TimeToShrink; // 0x4
	float TimeAfterShrink; // 0x8
	float DamagePerTick; // 0xc
	float DamageTickPeriod; // 0x10
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FKSControlPointSettings {
	float BaseControlPointCaptureTime; // 0x0
	float BaseControlPointRecaptureTime; // 0x4
	float CaptureRatePercentIncreasePerPlayer; // 0x8
	float FullCaptureDecayTime; // 0xc
	float ScoreUpdatePeriod; // 0x10
	float SuddenDeathScoreUpdatePeriod; // 0x14
	bool bPlayerMustBePresentToKeep; // 0x18
	TArray<int32_t> AcceptedTeamNums; // 0x20
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
	FName ScopeName; // 0xc0
	ENiagaraScriptParameterUsage Usage; // 0xc8
	bool bIsStaticSwitch; // 0xcc
	int32_t StaticSwitchDefaultValue; // 0xd0
	bool bAddedToNodeGraphDeepCopy; // 0xd4
	bool bOutputIsPersistent; // 0xd5
	FName CachedNamespacelessVariableName; // 0xd8
	bool bCreatedInSystemEditor; // 0xe0
	bool bUseLegacyNameString; // 0xe1
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FBoneReference SpringBone; // 0xd8
	float MaxDisplacement; // 0xe8
	float SpringStiffness; // 0xec
	float SpringDamping; // 0xf0
	float ErrorResetThresh; // 0xf4
	char bLimitDisplacement : 1; // 0x134
	char bTranslateX : 1; // 0x134
	char bTranslateY : 1; // 0x134
	char bTranslateZ : 1; // 0x134
	char bRotateX : 1; // 0x134
	char bRotateY : 1; // 0x134
	char bRotateZ : 1; // 0x134
};

struct FContextAction : FTableRowBase {
	FText Text; // 0x8
	FName ActionName; // 0x20
	TArray<PGAME_INPUT_STATE> ValidInputTypes; // 0x28
	int32_t SortOrder; // 0x38
	EContextPromptAnchoring Anchor; // 0x3c
	EContextActionType ActionType; // 0x3d
	UPUMG_Widget* PromptWidget; // 0x40
	float HoldDuration; // 0x48
	bool IsHidden; // 0x4c
};

struct FSeasonalItemSpawnInfo {
	AKSLootSiteBase* LootSiteToSpawn; // 0x0
	int32_t MinimumAmountToSpawn; // 0x8
	int32_t MaximumAmountToSpawn; // 0xc
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48
	int32_t NumChannelsUsed; // 0x2c8
	EMovieSceneBlendType BlendType; // 0x2cc
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FKSGlobalShotInfo {
	APlayerState* FiringPlayer; // 0x0
	FVector FiringLocation; // 0x8
	float AudibleRange; // 0x14
};

struct FKSBTItemPriorityTableRow : FTableRowBase {
	TSoftObjectPtr<UKSItem> ItemAsset; // 0x8
	float Weight; // 0x30
	float ShopPurchaseWeight; // 0x34
	float ShopPriorityGroup; // 0x38
	float Multiplier; // 0x3c
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xb0
	int32_t VisibilityId; // 0xe0
	UPrimitiveComponent* LODParent; // 0xe8
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FKSZipLineInfo {
	AKSZipLine* Zipline; // 0x0
	bool bZipLineReverse; // 0x8
};

struct FKSRiderSeatPair {
	AKSCharacter* Rider; // 0x0
	UKSVehicleSeatComponent* Seat; // 0x8
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

struct FAnimationBudgetAllocatorParameters {
	float BudgetInMs; // 0x0
	float MinQuality; // 0x4
	int32_t MaxTickRate; // 0x8
	float WorkUnitSmoothingSpeed; // 0xc
	float AlwaysTickFalloffAggression; // 0x10
	float InterpolationFalloffAggression; // 0x14
	int32_t InterpolationMaxRate; // 0x18
	int32_t MaxInterpolatedComponents; // 0x1c
	float InterpolationTickMultiplier; // 0x20
	float InitialEstimatedWorkUnitTimeMs; // 0x24
	int32_t MaxTickedOffsreenComponents; // 0x28
	int32_t StateChangeThrottleInFrames; // 0x2c
	float BudgetFactorBeforeReducedWork; // 0x30
	float BudgetFactorBeforeReducedWorkEpsilon; // 0x34
	float BudgetPressureSmoothingSpeed; // 0x38
	int32_t ReducedWorkThrottleMinInFrames; // 0x3c
	int32_t ReducedWorkThrottleMaxInFrames; // 0x40
	float BudgetFactorBeforeAggressiveReducedWork; // 0x44
	int32_t ReducedWorkThrottleMaxPerFrame; // 0x48
	float BudgetPressureBeforeEmergencyReducedWork; // 0x4c
	int32_t BudgetIncludesParallelAnimationEvaluation; // 0x50
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xd8
	UCurveFloat* DrivingCurve; // 0xe8
	float Multiplier; // 0xf0
	float RangeMin; // 0xf4
	float RangeMax; // 0xf8
	float RemappedMin; // 0xfc
	float RemappedMax; // 0x100
	FName ParameterName; // 0x104
	FBoneReference TargetBone; // 0x10c
	EDrivenDestinationMode DestinationMode; // 0x11c
	EDrivenBoneModificationMode ModificationMode; // 0x11d
	EComponentType SourceComponent; // 0x11e
	char bUseRange : 1; // 0x11f
	char bAffectTargetTranslationX : 1; // 0x11f
	char bAffectTargetTranslationY : 1; // 0x11f
	char bAffectTargetTranslationZ : 1; // 0x11f
	char bAffectTargetRotationX : 1; // 0x11f
	char bAffectTargetRotationY : 1; // 0x11f
	char bAffectTargetRotationZ : 1; // 0x11f
	char bAffectTargetScaleX : 1; // 0x11f
	char bAffectTargetScaleY : 1; // 0x120
	char bAffectTargetScaleZ : 1; // 0x120
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FMapIconOptions {
	FVector MarkerWorldPosition; // 0x0
	float AnchorHeight; // 0xc
	FVector2D ScreenMargin; // 0x10
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FKSSpawnSelectorTier {
	FName Name; // 0x0
	float Tolerance; // 0x8
	float MinScore; // 0xc
	TArray<FKSSpawnSelectorTierRule> SpawnSelectorTierRules; // 0x10
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xd8
	FBoneReference TargetBone; // 0xe8
	bool bCopyTranslation; // 0xf8
	bool bCopyRotation; // 0xf9
	bool bCopyScale; // 0xfa
	CopyBoneDeltaMode CopyMode; // 0xfb
	float TranslationMultiplier; // 0xfc
	float RotationMultiplier; // 0x100
	float ScaleMultiplier; // 0x104
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xf0
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8
	TArray<FGuid> CachedStaticLighting; // 0x108
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x118
};

struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
	ERichCurveInterpMode InterpMode; // 0xc
	ERichCurveTangentMode TangentMode; // 0xd
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FPUMG_PopupButtonConfig {
	FText Label; // 0x0
	FMulticastInlineDelegate Action; // 0x18
	EPUMG_PopupButtonType Type; // 0x28
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FKSEquipmentContainerEntry : FFastArraySerializerItem {
	uint16_t EquipmentId; // 0xc
	uint16_t ParentEquipmentId; // 0x10
	FGameplayTag EquipPoint; // 0x14
	bool bAlwaysReplicateExtraInfo; // 0x24
	uint16_t ExtraInfo; // 0x26
	UKSItem* Item; // 0x30
	UKSItem* LocalItem; // 0x38
	bool bWeaponComponentIsReplicated; // 0x40
	TWeakObjectPtr<UKSEquipmentCosmeticComponent> CosmeticComponent; // 0x44
	TWeakObjectPtr<UKSWeaponAttachmentCosmeticInst> AttachmentCosmeticComponent; // 0x4c
	bool bMarkedStale; // 0x54
	TSoftObjectPtr<UKSItem> ParentAsset; // 0x90
};

struct FJobSelectionTaskId {
	uint16_t ID; // 0x0
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

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FKSPlayerModOverridePropertyStatBase {
	bool bUseStat; // 0x0
	int32_t Priority; // 0x4
};

struct FKSSwitchDockedModeSetting {
	bool ShowDocked; // 0x0
	bool ShowHandheld; // 0x1
};

struct FKSBotSkinTableRow : FTableRowBase {
	TSoftObjectPtr<UKSItem> Skin; // 0x8
	int32_t Weight; // 0x30
};

struct FClientInputTypeUse {
	int16_t InputTypeKbm; // 0x0
	int16_t InputTypeGpad; // 0x2
	int16_t InputTypeTouch; // 0x4
	int16_t InputTypeOther; // 0x6
};

struct FKSPersistentPlayerId {
	FSerializedMctsNetId NetId; // 0x0
	int32_t EngineId; // 0x8
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FToastData {
	EToastCategory ToastCategory; // 0x0
	FText Title; // 0x8
	FText Message; // 0x20
	UPUMG_StoreItem* Reward; // 0x38
	UPlatformInventoryItem* OptionalItemValue; // 0x40
	int32_t OptionalIntValue; // 0x48
	UKSActivity* OptionalActivityValue; // 0x50
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x48
};

struct FKey {
	FName KeyName; // 0x0
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
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

struct FKSLootSiteFilter {
	bool bCheckHasBeenSeen; // 0x0
	EBasicKeyOperation HasBeenSeen; // 0x1
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

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
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

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
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

struct FKSProjectileWeaponInfo {
	FName Key; // 0x0
	TSoftClassPtr<UObject> SoftProjectileClass; // 0x8
	TSoftObjectPtr<UKSWeaponAsset> SoftWeaponAsset; // 0x30
};

struct FWaveBotTableRow : FBotSpawnTableRow {
	float fSelectionWeight; // 0x198
	float fAutoSpawnCostMultiplier; // 0x19c
	int32_t nMaxInstancesPerWave; // 0x1a0
	ECharacterBehaviorState InitialBehaviorState; // 0x1a4
	bool bPermanentlyRevealed; // 0x1a5
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
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

struct FAccoladePlayerTrackers {
	int32_t PlayerId; // 0x0
	AKSPlayerState* PlayerState; // 0x8
	int32_t DownCount; // 0x10
	int32_t elimCount; // 0x14
	float TimeLeft; // 0x18
	TArray<FCombatEventInfo> ContributingCombatEvents; // 0x20
};

struct FMaterialSkinInfo {
	FName Prefix; // 0x0
	int32_t MaterialSlot; // 0x8
	EMaterialSkinType SkinType; // 0xc
	FName ParamName; // 0x10
	bool bValid; // 0x18
};

struct FPGame_PerformanceCaptureProfile {
	FName ProfileName; // 0x0
	int32_t ScalabilityBucket; // 0x8
	int32_t ResolutionX; // 0xc
	int32_t ResolutionY; // 0x10
	int32_t VsyncInterval; // 0x14
	bool bFullScreen; // 0x18
};

struct FDeferredModWidgetInfo {
	TWeakObjectPtr<UKSPlayerModInstance> ModInstance; // 0x0
	bool InstanceIsNew; // 0x8
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FAnimNode_Base {
	bool bDeferOnInitializeAnimInstance; // 0x10
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x48
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FKSMapRow {
	FString MapKey; // 0x0
	int32_t MapId; // 0x10
	FText mapName; // 0x18
	FSoftObjectPath MapThumbnailPath; // 0x30
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FInventoryId {
	int64_t PlayerId; // 0x0
	int64_t ItemId; // 0x8
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
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

struct FKSPerceptionFilter {
	FName PerceptionEvent; // 0x0
	FKSAffiliationFilter AffiliationFilter; // 0x8
	FKSCharacterStateFilter CharacterStateFilter; // 0x10
	FKSInteractableStateFilter InteractableStateFilter; // 0xe8
	FKSDestructibleStateFilter DestructibleStateFilter; // 0x120
	FKSItemDropStateFilter ItemDropStateFilter; // 0x124
	FKSLootSiteFilter LootSiteFilter; // 0x134
	FKSDestroyableHazardStateFilter DestroyableHazardStateFilter; // 0x136
	FKSMapPointStateFilter MapPointStateFilter; // 0x140
	FKSObjectiveStateFilter ObjectiveStateFilter; // 0x170
	bool bCheckDistance; // 0x188
	EArithmeticKeyOperation DistanceOperation; // 0x189
	float Distance; // 0x18c
	bool bCheckDistanceRange; // 0x190
	float MinDistance; // 0x194
	float MaxDistance; // 0x198
	bool bCheckActorClass; // 0x19c
	TSoftClassPtr<UObject> ActorClass; // 0x1a0
	bool bCheckActorClassArray; // 0x1c8
	TArray<TSoftClassPtr<UObject>> ActorClassArray; // 0x1d0
	bool bCheckLOS; // 0x1e0
	bool bCheckForward; // 0x1e1
	float MaxForwardAngle; // 0x1e4
	bool bCheckIntersectsNavMeshPath; // 0x1e8
};

struct FAncillaryWeaponMeshInfo {
	USkeletalMesh* Mesh; // 0x0
	FName DefaultAttachSocket; // 0x8
	FName DefaultDetachSocket; // 0x10
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
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

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FBotStartingDifficultyRecord {
	int32_t ue_player_id; // 0x0
	int32_t difficulty_index; // 0x4
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xb0
	FName Layer; // 0xb8
};

struct FRadialMenuItemUseEventRecord {
	int32_t hz_player_id; // 0x0
	int32_t ue_player_id; // 0x4
	int32_t round_id; // 0x8
	FString cosmetic_type; // 0x10
	int32_t item_id; // 0x20
	FString item_name; // 0x28
	FLocationRecord Location; // 0x38
	FRotationRecord Rotation; // 0x44
	FString game_phase; // 0x50
	FString Timestamp; // 0x60
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FActivityTierStructure {
	int32_t ProgressRequired; // 0x0
	FText Name; // 0x8
	FText Description; // 0x20
	TSoftObjectPtr<UTexture2D> Image; // 0x38
};

struct FClientStatisticsRecord {
	float smoothed; // 0x0
	float Maximum; // 0x4
	float Minimum; // 0x8
	float average; // 0xc
	int32_t sample_count; // 0x10
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char end : 1; // 0x8
};

struct FCongregatedShotgunHit {
	FHitResult FirstHit; // 0x0
	FHitResult ClosestHit; // 0x88
	AActor* HitActor; // 0x110
	int32_t TimesHit; // 0x118
	float AccumulatedDamage; // 0x11c
	int32_t TimesHitHead; // 0x120
	float ClosestDistance; // 0x124
	bool HeadshotRegistered; // 0x128
	FName BackupBodyBone; // 0x12c
	FName BackupHeadBone; // 0x134
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

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xd8
	TArray<FVector> AngularOffsets; // 0xe8
};

struct FSelectionActivityStatus {
	ESelectionActivityState SelectionState; // 0x30
	TArray<AKSPlayerState*> CurrentlySelectingPlayers; // 0x38
	int32_t NumBansOccurred; // 0x48
};

struct FKSCrateSlotTableRow : FTableRowBase {
	UDataTable* LootTableChanceTable; // 0x8
};

struct FQueueSection {
	EQueueType QueueSectionType; // 0x0
	TArray<FClientQueueInfo> AssociatedQueues; // 0x8
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FPGame_Property : FFastArraySerializerItem {
	FPlatformPropertyId PropertyId; // 0xc
	EPGame_EPropertyType Type; // 0xe
	float Base; // 0x10
	float RawFlat; // 0x14
	float RawPercent; // 0x18
	float Minimum; // 0x1c
	float Maximum; // 0x20
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FPGame_PlayerProfile {
	FSerializedMctsNetId MctsPlayerId; // 0x0
	FString PlayerName; // 0x8
	uint16_t AccessFlags; // 0x18
	bool bSpectator; // 0x1a
	bool bDebugPlayer; // 0x1b
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FKSPlayerModInputBinding {
	FName ActionName; // 0x0
	bool bListenForPress; // 0x8
	bool bListenForRelease; // 0x9
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

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x20
	TArray<float> BlendTime; // 0x30
	EBlendListTransitionType TransitionType; // 0x40
	EAlphaBlendOption BlendType; // 0x41
	bool bResetChildOnActivation; // 0x42
	UCurveFloat* CustomBlendCurve; // 0x48
	UBlendProfile* BlendProfile; // 0x50
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FAnimNode_SeqEvalSkinned : FAnimNode_SequenceEvaluator {
	FPoseLink Source; // 0x58
	FName SkinKeyword; // 0x68
	float BlendFromSourceTime; // 0x70
	float BlendToSourceTime; // 0x74
	EAlphaBlendOption BlendType; // 0x78
	UCurveFloat* CustomBlendCurve; // 0x80
	UBlendProfile* BlendProfile; // 0x88
	FAlphaBlend BlendFromSource; // 0x90
	FAlphaBlend BlendToSource; // 0xc0
	UAnimSequenceBase* TargetSequence; // 0xf0
	UAnimSequenceBase* LastTargetSequence; // 0xf8
	bool bUseSequencePinAsFallback; // 0x100
	bool bLastHadTargetSequence; // 0x101
	float SourceBlendWeight; // 0x104
	float RemainingBlendTime; // 0x108
	FBlendSampleData PerBoneSampleData; // 0x110
	bool bResetSourceOnActivation; // 0x150
	UAnimSequenceBase* FallbackSequence; // 0x158
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x20
	FName CachePoseName; // 0x30
};

struct FWeaponMasteryRewardDisplayData {
	FText Name; // 0x0
	FText Description; // 0x18
	TSoftObjectPtr<UTexture2D> SoftIcon; // 0x30
	FGameplayTag RarityTag; // 0x58
	FText ItemTypeText; // 0x60
	EWeaponMasteryRewardGroup RewardGroup; // 0x78
	int32_t DisplayQuantity; // 0x7c
	bool AlreadyOwned; // 0x80
	UPUMG_StoreItem* PreviewStoreItem; // 0x88
	EWeaponMasteryRewardPreviewType RewardPreviewType; // 0x90
};

struct FAnimNode_SequenceSkinned : FAnimNode_AssetPlayerBase {
	FPoseLink Source; // 0x40
	FName SkinKeyword; // 0x50
	bool bLoopAnimation; // 0x58
	float PlayRate; // 0x5c
	float PlayRateBasis; // 0x60
	float StartPosition; // 0x64
	float BlendFromSourceTime; // 0x68
	float BlendToSourceTime; // 0x6c
	EAlphaBlendOption BlendType; // 0x70
	UCurveFloat* CustomBlendCurve; // 0x78
	UBlendProfile* BlendProfile; // 0x80
	FAlphaBlend BlendFromSource; // 0x88
	FAlphaBlend BlendToSource; // 0xb8
	UAnimSequenceBase* CurrentSequence; // 0xe8
	UAnimSequenceBase* LastSequence; // 0xf0
	bool bLastHadSequence; // 0xf8
	float SourceBlendWeight; // 0xfc
	float RemainingBlendTime; // 0x100
	FBlendSampleData PerBoneSampleData; // 0x108
	bool bResetSourceOnActivation; // 0x148
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FRecoilInfo2 {
	float TimeToGo; // 0x0
	float TimeDuration; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FRecoilParams2 RotParams; // 0x2c
	FRotator RotOffset; // 0x30
	FVector LocAmplitude; // 0x3c
	FVector LocFrequency; // 0x48
	FRecoilParams2 LocParams; // 0x60
	FVector LocOffset; // 0x64
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20
};

struct FKSAnimNode_Recoil : FAnimNode_SkeletalControlBase {
	FBoneReference m_BoneToRecoil; // 0xd8
	bool m_bBoneSpaceRecoil; // 0xe8
	float RotTimeToGo; // 0xec
	float PosTimeToGo; // 0xf0
	FRecoilInfo m_Recoil; // 0xf4
	bool m_bApplyControl; // 0x154
	float m_fBlendInTime; // 0x158
	float m_fBlendInRemainingTime; // 0x15c
	FVector m_vBlendLoc; // 0x160
	FRotator m_rBlendRot; // 0x16c
	FRotator RotOffset; // 0x178
	FVector LocOffset; // 0x190
	int32_t m_nFireImpulseCounter; // 0x1a8
	ERecoilAllowMirror m_eMirrorPermissions; // 0x1ac
	EPoseMirrorPlane m_eMirrorPlane; // 0x1ad
	FVector m_vRotationFlipAxis; // 0x1b0
	int32_t m_nInternalFireImpulseCounter; // 0x1bc
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FSubmixEffectReverbSettings {
	float Density; // 0x0
	float Diffusion; // 0x4
	float Gain; // 0x8
	float GainHF; // 0xc
	float DecayTime; // 0x10
	float DecayHFRatio; // 0x14
	float ReflectionsGain; // 0x18
	float ReflectionsDelay; // 0x1c
	float LateGain; // 0x20
	float LateDelay; // 0x24
	float AirAbsorptionGainHF; // 0x28
	float WetLevel; // 0x2c
	float DryLevel; // 0x30
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FKSCustomInputActionKey {
	int32_t propId; // 0x0
	FName KeyboardName; // 0x4
	FName GamepadName; // 0xc
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FPUMG_ActivityQueuePair {
	FString ActivityId; // 0x0
	int32_t QueueId; // 0x10
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
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

struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID AttachBindingID; // 0x20
	FName AttachSocketName; // 0x38
	FName AttachComponentName; // 0x40
	EAttachmentRule AttachmentLocationRule; // 0x48
	EAttachmentRule AttachmentRotationRule; // 0x49
	EAttachmentRule AttachmentScaleRule; // 0x4a
	EDetachmentRule DetachmentLocationRule; // 0x4b
	EDetachmentRule DetachmentRotationRule; // 0x4c
	EDetachmentRule DetachmentScaleRule; // 0x4d
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

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FPlayerJobSelectInfo {
	TWeakObjectPtr<AKSPlayerState> PlayerState; // 0x0
	FSerializedMctsNetId NetId; // 0x8
	int32_t SkinId; // 0x10
	int32_t JobMasteryXp; // 0x14
	EJobSelectionState SelectionState; // 0x18
};

struct Fadvcombat {
	FVector Location; // 0x0
};

struct FLiveLinkTransformControllerData {
	bool bWorldTransform; // 0x0
	bool bUseScale; // 0x1
	bool bSweep; // 0x2
	bool bTeleport; // 0x3
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FKSGlobalPerkList {
	UKSItem* GlobalPerk1; // 0x0
	UKSItem* GlobalPerk2; // 0x8
	UKSItem* GlobalPerk3; // 0x10
	UKSItem* GlobalPerk4; // 0x18
	UKSItem* GlobalPerk5; // 0x20
	UKSItem* GlobalPerk6; // 0x28
	UKSItem* GlobalPerk7; // 0x30
	UKSItem* GlobalPerk8; // 0x38
	UKSItem* GlobalPerk9; // 0x40
	UKSItem* GlobalPerk10; // 0x48
	UKSItem* GlobalPerk11; // 0x50
	UKSItem* GlobalPerk12; // 0x58
	UKSItem* GlobalPerk13; // 0x60
	UKSItem* GlobalPerk14; // 0x68
	UKSItem* GlobalPerk15; // 0x70
	UKSItem* GlobalPerk16; // 0x78
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FKSSpawnSelectorTierRule {
	UKSSpawnRule* SpawnRule; // 0x0
	float Multiplier; // 0x8
};

struct FWeaponAttachmentAnimationData : FTableRowBase {
	bool bUseDefaultIfNone; // 0x8
	TSoftObjectPtr<UKSWeaponAsset> WeaponAsset; // 0x10
	TSoftObjectPtr<USkeletalMesh> WeaponAttachmentMesh; // 0x38
	TSoftObjectPtr<UAnimSequence> WeaponAttachmentSequence; // 0x60
	TSoftObjectPtr<UAnimMontage> Player3PHolsterMontage; // 0x88
	TSoftObjectPtr<UAnimMontage> Player3PRetrieveMontage; // 0xb0
	TSoftObjectPtr<UAnimMontage> Player3PFireMontage; // 0xd8
	TSoftObjectPtr<UAnimMontage> Player3PReloadMontage; // 0x100
	TSoftObjectPtr<UAimOffsetBlendSpace> Player3PStandingAimOffset; // 0x128
	TSoftObjectPtr<UAimOffsetBlendSpace> Player3PCrouchedAimOffset; // 0x150
	TSoftObjectPtr<UBlendSpace> Player3PStandingBlendSpace; // 0x178
	TSoftObjectPtr<UBlendSpace> Player3PCrouchedBlendSpace; // 0x1a0
	TSoftObjectPtr<UAnimSequence> Player3PStandingIdleSequence; // 0x1c8
	TSoftObjectPtr<UAnimSequence> Player3PCrouchedIdleSequence; // 0x1f0
	TSoftObjectPtr<UAnimMontage> Player1PFireMontage; // 0x218
	TSoftObjectPtr<UBlendSpace> Player1PStandingBlendSpace; // 0x240
	TSoftObjectPtr<UBlendSpace> Player1PCrouchedBlendSpace; // 0x268
	TSoftObjectPtr<UAimOffsetBlendSpace> Player1PStandingAimOffset; // 0x290
	TSoftObjectPtr<UAnimMontage> Player1PRetrieveMontage; // 0x2b8
	TSoftObjectPtr<UAnimMontage> Player1PReloadMontage; // 0x2e0
	TSoftClassPtr<UObject> Player1PCameraShake; // 0x308
	TSoftClassPtr<UObject> Player1PADSCameraShake; // 0x330
	TSoftObjectPtr<UAnimSequence> Player1PAdditiveStandGunPose; // 0x358
	TSoftObjectPtr<UAnimSequence> Player1PAdditiveCrouchGunPose; // 0x380
};

struct FAIObjectiveEvent {
	FVector ObjectiveLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FMapIconWidgetConfig {
	EDisplayType MapDisplayType; // 0x0
	FString WidgetPoolType; // 0x8
	int32_t Count; // 0x18
	TSoftClassPtr<UObject> MapIconWidget; // 0x20
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FSocialChatChannelConfig {
	USocialUser* SocialUser; // 0x0
	TArray<USocialChatChannel*> ListenChannels; // 0x18
};

struct FSourceEffectChorusSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FKSMediaPlayerWidgetPlaylistEntry : FTableRowBase {
	bool bIsSkippable; // 0x8
	float SkippableAfter; // 0xc
	bool bForceFirstWatch; // 0x10
	bool bOnlyWatchOnce; // 0x11
	uint16_t MajorVersion; // 0x12
	TSoftObjectPtr<UPlatformMediaSource> PlatformMediaSource; // 0x18
	TSoftObjectPtr<UAkAudioEvent> PlayEvent; // 0x40
	TSoftObjectPtr<UAkAudioEvent> StopEvent; // 0x68
	FName LocalActionName; // 0x90
};

struct FPGame_ReplicatedTimer {
	EPGame_ReplicateTimerState TimerState; // 0x8
	float InitialTime; // 0xc
	float TimeRemaining; // 0x10
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FAccoladeEventList : FSizedArraySerializer {
	TArray<FAccoladeEventItem> Items; // 0x70
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x20
	FPoseSnapshot Snapshot; // 0x28
	ESnapshotSourceMode Mode; // 0x60
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalToTrackingTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FKSAimAssistPropertyCurveVector {
	EControllerInputType InputType; // 0x0
	UCurveVector* Value; // 0x8
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
	bool bPivotPointAtRoot; // 0x9e
	bool bAverageRootLocationsForFinalPivot; // 0x9f
	bool bSplitForComplexity; // 0xa0
	char bMergePhysicsData : 1; // 0xa1
	char bMergeMaterials : 1; // 0xa1
	char bCreateMergedMaterial : 1; // 0xa1
	char bBakeVertexDataToMesh : 1; // 0xa1
	char bUseVertexDataForBakingMaterial : 1; // 0xa1
	char bUseTextureBinning : 1; // 0xa1
	char bReuseMeshLightmapUVs : 1; // 0xa1
	char bMergeEquivalentMaterials : 1; // 0xa1
	char bUseLandscapeCulling : 1; // 0xa2
	char bIncludeImposters : 1; // 0xa2
	char bAllowDistanceField : 1; // 0xa2
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

struct FKSMaxCategoryPurchases {
	int32_t Primary; // 0x0
	int32_t Secondary; // 0x4
	int32_t Melee; // 0x8
	int32_t Gadget; // 0xc
	int32_t Perk; // 0x10
	int32_t Gambit; // 0x14
	int32_t GlobalPerk; // 0x18
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x48
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x48
	FFrameNumber SectionStartFrame; // 0x50
	bool bLoop; // 0x54
};

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xd8
	FReferenceBoneFrame TwistFrame; // 0xf8
	FAxis TwistPlaneNormalAxis; // 0x118
	float RangeMax; // 0x128
	float RemappedMin; // 0x12c
	float RemappedMax; // 0x130
	FAnimCurveParam Curve; // 0x134
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x20
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

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xd8
	FBoneReference TargetBone; // 0xe8
	bool bCopyTranslation; // 0xf8
	bool bCopyRotation; // 0xf9
	bool bCopyScale; // 0xfa
	EBoneControlSpace ControlSpace; // 0xfb
};

struct FBotSpawnTableRow : FTableRowBase {
	TSoftClassPtr<UObject> Character; // 0x8
	TSoftClassPtr<UObject> Controller; // 0x30
	TSoftObjectPtr<UBehaviorTree> BehaviorTree1; // 0x58
	UKSBTDifficulty* InitialDifficulty; // 0x80
	UDataTable* DifficultyTable; // 0x88
	bool AllowDynamicDifficulty; // 0x90
	FKSBTDifficultyConfig SpawnDifficultyConfig; // 0x98
	TArray<TSoftObjectPtr<UDataTable>> ItemLoadoutTables; // 0x110
	UDataTable* ObjectivePriorityTable; // 0x120
	UDataTable* ItemPriorityTable; // 0x128
	FGameplayTagQuery AllowedJobQuery; // 0x130
	UDataTable* AbilityTable; // 0x178
	UDataTable* RandomCharacterSkinTable; // 0x180
	UDataTable* RandomEquipmentSkinTable; // 0x188
	bool bIsPlayer; // 0x190
	bool bUseGameModeInventory; // 0x191
	bool bDelayPawnUntilLoadoutComplete; // 0x192
};

struct FJobBanRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	int32_t round_id; // 0x8
	int32_t class_id; // 0xc
	FString Timestamp; // 0x10
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

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FKSInputActionTiedNames {
	FName Press; // 0x0
	FName Hold; // 0x8
	FName Repeat; // 0x10
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FBoneReference TrailBone; // 0x110
	int32_t ChainLength; // 0x120
	EAxis ChainBoneAxis; // 0x124
	char bInvertChainBoneAxis : 1; // 0x125
	char bLimitStretch : 1; // 0x125
	char bLimitRotation : 1; // 0x125
	char bUsePlanarLimit : 1; // 0x125
	char bActorSpaceFakeVel : 1; // 0x125
	char bReorientParentToChild : 1; // 0x125
	float MaxDeltaTime; // 0x128
	float RelaxationSpeedScale; // 0x12c
	FRuntimeFloatCurve TrailRelaxationSpeed; // 0x130
	FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1b8
	TArray<FRotationLimit> RotationLimits; // 0x1e8
	TArray<FVector> RotationOffsets; // 0x1f8
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x208
	float StretchLimit; // 0x218
	FVector FakeVelocity; // 0x21c
	FBoneReference BaseJoint; // 0x228
	float LastBoneRotationAnimAlphaBlend; // 0x238
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FLiveLinkPingMessage {
	FGuid PollRequest; // 0x0
	int32_t LiveLinkVersion; // 0x10
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x48
	FMovieSceneFloatChannel GreenChannel; // 0xe8
	FMovieSceneFloatChannel BlueChannel; // 0x188
	FMovieSceneFloatChannel AlphaChannel; // 0x228
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

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FTouchRegion {
	float NormalizedX; // 0x0
	float NormalizedY; // 0x4
	float NormalizedWidth; // 0x8
	float NormalizedHeight; // 0xc
	float MaxFullAxisLengthOverride; // 0x10
	float MaxFullAxisDeadZoneLengthOverride; // 0x14
	bool bEnableMouseSmoothing; // 0x18
};

struct FPlayerStartingCashRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	int32_t cash; // 0x8
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FLevelStreamingWrapper {
	ULevelStreaming* StreamingLevel; // 0x0
};

struct FLegacyWeaponProp {
	FLobbySkeletalPropInfo LegacyInfo; // 0x10
	USkinnableSkeletalMeshComponent* MeshComp; // 0x98
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FKSInitialLoadout {
	TArray<UKSItem*> LoadoutItems; // 0x0
};

struct FColorPaletteInfo : FTableRowBase {
	FLinearColor LinearColor; // 0x8
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FCharacterRestoreOptions {
	bool bReplaceAmmo; // 0x0
	bool bReplaceInventory; // 0x1
	bool bReplaceHealth; // 0x2
	float MinimumStartingHealthPercentage; // 0x4
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xd8
	FVector Translation; // 0xe8
	FRotator Rotation; // 0xf4
	FVector Scale; // 0x100
	EBoneModificationMode TranslationMode; // 0x10c
	EBoneModificationMode RotationMode; // 0x10d
	EBoneModificationMode ScaleMode; // 0x10e
	EBoneControlSpace TranslationSpace; // 0x10f
	EBoneControlSpace RotationSpace; // 0x110
	EBoneControlSpace ScaleSpace; // 0x111
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FKSEquipmentId {
	EKSEquipmentType Type; // 0x0
	uint16_t EquipmentIdNumber; // 0x2
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
	FName NotifyFunctionName; // 0x20
};

struct FNiagaraEmitterCompiledData {
	TArray<FName> SpawnAttributes; // 0x0
	FNiagaraVariable EmitterSpawnIntervalVar; // 0x10
	FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x38
	FNiagaraVariable EmitterSpawnGroupVar; // 0x60
	FNiagaraVariable EmitterAgeVar; // 0x88
	FNiagaraVariable EmitterRandomSeedVar; // 0xb0
	FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0xd8
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x100
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FPooledCameraShakes {
	TArray<UCameraShake*> PooledShakes; // 0x0
};

struct FKSEmoteConversionEntry {
	FName EmotionName; // 0x0
	EKSEmotion EmotionEnum; // 0x8
};

struct FSmoothedComponentInfo {
	USceneComponent* Component; // 0x0
	FVector InitialTranslationOffset; // 0x8
	FQuat InitialRotationOffset; // 0x20
};

struct FPurchasedItemEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	int32_t item_id; // 0x8
	int32_t cost; // 0xc
	FString Timestamp; // 0x10
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FWeaponCategoryDetails : FTableRowBase {
	FGameplayTag CategoryTag; // 0x8
	FText DisplayName; // 0x10
	FText DisplayNameSingular; // 0x28
	FText DisplayNameCategory; // 0x40
	TSoftObjectPtr<UTexture2D> SoftSymbolIcon; // 0x58
	TSoftObjectPtr<UTexture2D> SoftMasteryIcon; // 0x80
	TSoftObjectPtr<UTexture2D> SoftVerticalSplash; // 0xa8
	TSoftObjectPtr<UTexture2D> SoftHorizontalSplash; // 0xd0
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FReviveEvent {
	TWeakObjectPtr<AKSPlayerState> Reviver; // 0x0
	TWeakObjectPtr<AKSPlayerState> Revivee; // 0x8
	int32_t ExpBonus; // 0x10
};

struct FMiscRewardsTableRow : FTableRowBase {
	TMap<int32_t, FMasteryMiscRewardContainer> MiscRewardsByLevel; // 0x8
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FConstraintProfileProperties {
	float ProjectionLinearTolerance; // 0x0
	float ProjectionAngularTolerance; // 0x4
	float LinearBreakThreshold; // 0x8
	float AngularBreakThreshold; // 0xc
	FLinearConstraint LinearLimit; // 0x10
	FConeConstraint ConeLimit; // 0x2c
	FTwistConstraint TwistLimit; // 0x4c
	FLinearDriveConstraint LinearDrive; // 0x68
	FAngularDriveConstraint AngularDrive; // 0xb4
	char bDisableCollision : 1; // 0x100
	char bParentDominates : 1; // 0x100
	char bEnableProjection : 1; // 0x100
	char bAngularBreakable : 1; // 0x100
	char bLinearBreakable : 1; // 0x100
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct Fassist {
	FVector Location; // 0x0
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FKSMobilePerformanceOptions {
	int32_t MaxRefreshRate; // 0x0
	TArray<FText> PerformanceOptions; // 0x8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FKSWidgetInfoParams {
	TSoftClassPtr<UObject> Widget; // 0x0
	bool bPreloadWidget; // 0x28
	FString WidgetParentTarget; // 0x30
	AActor* InfoActor; // 0x40
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FRadialMenuItemEventInfo {
	TWeakObjectPtr<APlayerState> EventInstigator; // 0x0
	TWeakObjectPtr<UKSRadialMenuItem> RadialMenuItem; // 0x8
};

struct FPUMG_SettingsConfig {
	FText DisplayName; // 0x0
	TArray<FText> ValueNames; // 0x18
	EPUMG_SettingUIType Type; // 0x28
	FName SettingId; // 0x2c
	int32_t MinValue; // 0x34
	int32_t MaxValue; // 0x38
	float StepValue; // 0x3c
	bool DisplayAsPercent; // 0x40
	int32_t Value; // 0x44
	bool AvailableOffline; // 0x48
	bool IsStoredInDatabase; // 0x49
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
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

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FLiveLinkSubSectionData {
	TArray<FLiveLinkPropertyData> Properties; // 0x0
};

struct FKSAnimStats {
	float PlayTime; // 0x0
	float PlayTimeWeighted; // 0x4
};

struct FKSPlayerQueryHandle {
	UKSPlayerQueryDataFactory* Owner; // 0x0
};

struct FKSDestroyableHazardStateFilter {
	bool bReturnTrueIfNotDestroyableHazard; // 0x0
	bool bCheckCanBotDetect; // 0x1
	EBasicKeyOperation CanBotDetect; // 0x2
	bool bCheckShouldDestroyWithGunfire; // 0x3
	EBasicKeyOperation ShouldDestroyWithGunfire; // 0x4
	bool bCheckShouldDestroyWithEMP; // 0x5
	EBasicKeyOperation ShouldDestroyWithEMP; // 0x6
};

struct FLobbyStaticPropInfo {
	bool Enable; // 0x0
	FName AttachPoint; // 0x4
	UStaticMesh* StaticMesh; // 0x10
	FTransform TransformOffset; // 0x20
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FFBP_CustomPendingLogEntry {
	UKSPlayerInfo* PlayerInfo_2_4CDA19BE44095765294C98812FFACA2A; // 0x0
	TArray<FText> Logs_6_441E60114FCBB05DF4DBFB833D073740; // 0x8
};

struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	FBoneReference StartBone; // 0xd8
	FBoneReference EndBone; // 0xe8
	ESplineBoneAxis BoneAxis; // 0xf8
	bool bAutoCalculateSpline; // 0xf9
	int32_t pointCount; // 0xfc
	TArray<FTransform> ControlPoints; // 0x100
	float Roll; // 0x110
	float TwistStart; // 0x114
	float TwistEnd; // 0x118
	FAlphaBlend TwistBlend; // 0x120
	float Stretch; // 0x150
	float Offset; // 0x154
};

struct FExposedValueCopyRecord {
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0x8
	int32_t SourceArrayIndex; // 0x10
	bool bInstanceIsTarget; // 0x14
	EPostCopyOperation PostCopyOperation; // 0x15
	ECopyType CopyType; // 0x16
	TFieldPath<FProperty> DestProperty; // 0x18
	int32_t DestArrayIndex; // 0x40
	int32_t Size; // 0x44
	TFieldPath<FProperty> CachedSourceProperty; // 0x48
	TFieldPath<FProperty> CachedSourceStructSubProperty; // 0x70
};

struct FDynamicSkinTableMapEntry {
	UDynamicSkinTable* Table; // 0x0
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FKSItemDropStateFilter {
	bool bCheckEquipPoint; // 0x0
	FGameplayTag EquipPoint; // 0x4
	bool bCheckHasBeenSeen; // 0xc
	EBasicKeyOperation HasBeenSeen; // 0xd
	bool bCheckIsInActiveState; // 0xe
	EBasicKeyOperation IsInActiveState; // 0xf
};

struct FKSFreezeFrameVFXEntry {
	UParticleSystem* VFX; // 0x0
	FName AttachPoint; // 0x8
	FVector Offset; // 0x10
	float TimeDilation; // 0x1c
	FGuid VFXID; // 0x20
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FKSKeyBindInfo {
	FName Name; // 0x0
	float Scale; // 0x8
	EKSInputType InputType; // 0xc
	EKSKeyBindType KeyBindType; // 0xd
	bool IsPermanentBinding; // 0xe
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
	bool bEnableGpuLightmass; // 0x4c
	int32_t NumPrimaryGISamples; // 0x50
	int32_t NumSecondaryGISamples; // 0x54
	float FireflyClampingThreshold; // 0x58
	char bAllowShadowInShadowOptimization : 1; // 0x5c
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FActiveStaticProp {
	USkinnableStaticMeshComponent* MeshComp; // 0x80
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
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

struct FGuidedCalloutSceneData : FTableRowBase {
	EConfigPropertyGuidedCalloutScenes SceneIndex; // 0x8
	FName AssociatedViewRoute; // 0xc
	FText HeaderText; // 0x18
	TArray<FGuidedCalloutCardData> CalloutCards; // 0x30
};

struct FKSLootItemInfo {
	EKSRarity Rarity; // 0x0
	FColor Color; // 0x4
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FKSSpreadList : FFastArraySerializer {
	TArray<FKSSpreadEntry> List; // 0x108
	AKSProjectile_GrenadeSpread* Owner; // 0x118
};

struct FLootSiteTableRow : FTableRowBase {
	TSoftObjectPtr<UKSItem> Item; // 0x8
	TSoftObjectPtr<UKSWeaponAttachment> Attachment1; // 0x30
	TSoftObjectPtr<UKSWeaponAttachment> Attachment2; // 0x58
	TSoftObjectPtr<UKSWeaponAttachment> Attachment3; // 0x80
	float Weight; // 0xa8
	float ChanceToSkipAttachment; // 0xac
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool RoundFrameSizeToHardwareSize; // 0x3c
};

struct FLootSiteState {
	bool bActive; // 0x0
	bool bLooted; // 0x1
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FPGame_ReplicatedTimerManagerBase : FFastArraySerializer {
	TArray<FPGame_ReplicatedTimerManagerEntry> Timers; // 0x108
};

struct FRoundClientInputTypeUse {
	int32_t hz_player_id; // 0x0
	int16_t input_type_kbm; // 0x4
	int16_t input_type_gpad; // 0x6
	int16_t input_type_touch; // 0x8
	int16_t input_type_other; // 0xa
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FMultiPlayerSkinMapReplicator : FFastArraySerializer {
	TArray<FMultiSkinMapReplicatorEntry> RepItems; // 0x108
	TMap<FKSPersistentPlayerId, FPlayerSkinMap> PlayerSkinMaps; // 0x118
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FButtonIconAssoc {
	UTexture2D* XboxIcon_2_1E15CF55443F0ABB0D9D80AD919E399B; // 0x0
	UTexture2D* XSXIcon_15_87C5D8BD4B20AB18B5B9539CCB22FD81; // 0x8
	UTexture2D* PlayStationIcon_4_81A75B5741B9D4449269A08158D8DED9; // 0x10
	UTexture2D* PS5Icon_16_EBDFAF1E42BB98180B76349E0C721243; // 0x18
	UTexture2D* SwitchIcon_10_99EC023740543B8F361E89B4491D92B2; // 0x20
};

struct FKSBotJobConfig {
	bool bAllowJob; // 0x0
	TMap<TSoftObjectPtr<UKSSkinBundle>, int32_t> AllowedAlternateSkins; // 0x8
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FAnimNode_SequenceSkinnedCurvePlay : FAnimNode_SequenceSkinned {
	FName CurveName; // 0x160
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FLoadingScreenImageInfo {
	TSoftObjectPtr<UTexture2D> LoadingScreenImage; // 0x0
	FText MapDisplayName; // 0x28
	FText MapRegion; // 0x40
	FText MapDescription; // 0x58
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
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

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FMultiMagDropInfo {
	FName DropBone_2_2CFC9A8F4F2664ED22B08296FB92E731; // 0x0
	bool DropBoneOnWeapon_5_BC9F11844B79F021078C9BA149D169AA; // 0x8
	UStaticMesh* DropMesh_15_6B58EE524E651CF10CEB8EA7288C667F; // 0x10
	FTransform DropMultiMagSpawnOffset_21_594C51714E03815BC1D89E92B11A2550; // 0x20
	FVector DropMultiMagVelocityOverride_22_71C6708D4D1C99CFB8A9DF90ED02BA49; // 0x50
};

struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem {
	ALobbyBeaconPlayerState* LobbyPlayerState; // 0x10
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FAccoladeEventEntry {
	TWeakObjectPtr<AKSPlayerState> RelevantPlayer; // 0x0
	FAccoladeDisplayInfo AccoladeDisplayInfo; // 0x8
	bool IgnoreRelevantPlayerId; // 0x70
};

struct FAssistEventList : FSizedArraySerializer {
	TArray<FAssistEventItem> Items; // 0x70
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	ELevelVisibility Visibility; // 0x20
	TArray<FName> LevelNames; // 0x28
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

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FRecoilProfile2 {
	FRecoilInfo2 PelvisRecoil; // 0x0
	FRecoilInfo2 SpineRecoil; // 0x70
	FRecoilInfo2 NeckRecoil; // 0xe0
	FRecoilInfo2 HandRecoil; // 0x150
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FKSPendingProfiles {
	TArray<UKSPlayerInfo*> PendingPlayers; // 0x0
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FAccountJobStatKey {
	FKSPersistentPlayerId PlayerId; // 0x0
	TSoftObjectPtr<UKSJobItem> Job; // 0x10
	EAccountJobStatType AccountJobStatType; // 0x38
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bForceOpaque; // 0x6
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

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FRoundPlayerSummary : FPlayerStatisticsBase {
	int32_t round_id; // 0xb0
	int32_t ue_player_id; // 0xb4
	int32_t hz_player_id; // 0xb8
	int32_t class_id; // 0xbc
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
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

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FObjectiveCaptureEventRecord {
	int32_t hz_player_id; // 0x0
	int32_t ue_player_id; // 0x4
	int32_t team_id; // 0x8
	FString mode_name; // 0x10
	int32_t round_id; // 0x20
	int32_t objective_type; // 0x24
	FString capture_action; // 0x28
	FLocationRecord Location; // 0x38
	FRotationRecord Rotation; // 0x44
	FString Timestamp; // 0x50
};

struct FGenericTeamId {
	char TeamId; // 0x0
};

struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FSkeletalMeshLODGroupSettings {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	EBoneFilterActionOption BoneFilterActionOption; // 0x8
	TArray<FBoneFilter> BoneList; // 0x10
	FPerPlatformBool bUseExtraBonesToRemove; // 0x20
	TArray<FBoneFilter> ExtraBonesToRemove; // 0x28
	TArray<FName> BonesToPrioritize; // 0x38
	float WeightOfPrioritization; // 0x48
	UAnimSequence* BakePose; // 0x50
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x58
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
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

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xa8
	FSplineCurves SplineCurves; // 0xb0
	FSplineCurves SplineCurvesPreUCS; // 0x118
};

struct FViewRoute : FTableRowBase {
	UPUMG_Widget* ViewWidget; // 0x8
	TArray<FName> ViewStickyWidgets; // 0x10
	EViewManagerLayer ViewLayer; // 0x20
	bool IsDefaultRoute; // 0x21
	bool ShouldPreload; // 0x22
	bool RequiresLoggedIn; // 0x23
	bool AlwaysShowContextBar; // 0x24
	EViewRouteRedirectionPhase RedirectionPhase; // 0x25
	int32_t RedirectionPhaseOrder; // 0x28
	UPUMG_ViewRedirecter* ViewRedirector; // 0x30
	bool OpenOverOriginal; // 0x38
	bool BlockAcquisitions; // 0x39
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FElementID {
	int32_t IDValue; // 0x0
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

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0xb8
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
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

struct FAnnouncementData {
	EAnnouncementType Type; // 0x0
	FText MessageText; // 0x8
	ETeamAlignment TeamAlignment; // 0x20
	int32_t TeamAlignmentNum; // 0x24
	int32_t FriendlyTeamAlive; // 0x28
	int32_t EnemyTeamAlive; // 0x2c
	float Seconds; // 0x30
	float DisplayDuration; // 0x34
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinition TypeDef; // 0x8
};

struct FLiveLinkCameraStaticData : FLiveLinkTransformStaticData {
	bool bIsFieldOfViewSupported; // 0x10
	bool bIsAspectRatioSupported; // 0x11
	bool bIsFocalLengthSupported; // 0x12
	bool bIsProjectionModeSupported; // 0x13
	float FilmBackWidth; // 0x14
	float FilmBackHeight; // 0x18
	bool bIsApertureSupported; // 0x1c
	bool bIsFocusDistanceSupported; // 0x1d
};

struct FKSRevealInfoSerializerItem : FFastArraySerializerItem {
	FKSRevealInfo RevealInfo; // 0x10
};

struct FGuidedCalloutCardData {
	FText Header; // 0x0
	FText Description; // 0x18
	TSoftObjectPtr<UTexture2D> Image; // 0x30
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0xa8
};

struct FContextualPingTypesRow : FTableRowBase {
	EPingType PingType; // 0x8
	FLinearColor PingColor; // 0xc
};

struct FSoundModulationParameter {
	FName Control; // 0x0
	float Value; // 0x8
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x20
	TArray<float> CurveValues; // 0x30
	TArray<FName> CurveNames; // 0x40
	float Alpha; // 0x60
	EModifyCurveApplyMode ApplyMode; // 0x64
};

struct FSoundSourceBusSendInfo {
	ESourceBusSendLevelControlMethod SourceBusSendLevelControlMethod; // 0x0
	USoundSourceBus* SoundSourceBus; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x20
	bool bShuffleMode; // 0x80
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FMovieSceneEvaluationTrackSegments {
	TArray<int32_t> SegmentIdentifierToIndex; // 0x0
	TArray<FMovieSceneSegment> SortedSegments; // 0x10
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

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FCharacterArray {
	TArray<FVector> Positions; // 0x0
	TArray<FCombatEvent> CombatEvents; // 0x10
	TArray<Frevive> Revives; // 0x20
	TArray<Fassist> Assists; // 0x30
	TArray<Fadvcombat> AdvCombats; // 0x40
};

struct FKSItemMasterTableRow : FTableRowBase {
	FString ItemDisplayName; // 0x8
	int32_t ItemId; // 0x18
	TSoftObjectPtr<UKSItem> KSItemSoftObject; // 0x20
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FClientQueueInfo : FPUMG_ClientQueueInfo {
	TSoftObjectPtr<UTexture2D> ItemIcon; // 0x50
	EQueueType QueueType; // 0x78
	TArray<FUIMapInfo> MapRotationInfos; // 0x80
	TArray<FMapDetail> MapList; // 0x90
	int32_t MaxPlayerPerSide; // 0xa0
	int32_t SortOrder; // 0xa4
	FString SoloURL; // 0xa8
	int32_t ShelteredMMQueueId; // 0xb8
	float ShelteredMMLevelLimit; // 0xbc
	float ShelteredMMAttemptTimeout; // 0xc0
	int32_t ForcedBotMatchQueueId; // 0xc4
	int32_t MercyMatchQueueId; // 0xcc
	bool UsesDeserterPenalty; // 0xd4
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

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
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

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FKSLootGroupGuarantee {
	int32_t Quantity; // 0x0
	TArray<int32_t> ObjectiveLootGroups; // 0x8
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

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FMultipleKillEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	int32_t Count; // 0x8
};

struct FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
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

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FStateMachineObjectEntry {
	FName Key; // 0x0
	UObject* Entry; // 0x8
	int64_t IntEntry; // 0x10
};

struct FKSAnimNode_SpeedWarp : FAnimNode_SkeletalControlBase {
	float SpeedScaling; // 0xd8
	FVector SpeedWarpForwardAxis; // 0xdc
	FAnimSpeedWarpDefinition SpeedWarpSettings; // 0xe8
};

struct FUIColorPalette_v2 {
	FLinearColor Silver_27_913E6B5F4BDCB81BD42D07B27206F261; // 0x0
	FLinearColor Vulcan_28_8A2E98974234C6FBEA6AB2A063B59778; // 0x10
	FLinearColor Ruby_29_0ED9A2CA4F47AB6D89244F8C0618F009; // 0x20
	FLinearColor DarkVulcan_30_A3C4365940E8C28F156BCA90D52342C2; // 0x30
	FLinearColor Steel_31_3CB56E054B7D17D8AEED82968E47AE65; // 0x40
	FLinearColor Black_17_EC0FC2FC4B94E66BA1021FA092407FA7; // 0x50
	FLinearColor Traffic_32_C3A2BF9F48894B46D4E45B8E9BDA3700; // 0x60
	FLinearColor RadarBlue_33_C3777EA94DE3C020C81F759F8200CE1E; // 0x70
	FLinearColor White_34_07F976774AC9884BE5DCBCB86A62D5E3; // 0x80
	FLinearColor RarityCommon_37_16227CF04FAA783361F20CB2A9E5B695; // 0x90
	FLinearColor RarityUncommon_42_9CB2131443E1EECE8F910CAD6BDDFE00; // 0xa0
	FLinearColor RarityRare_45_C37DBECF41D3727FF70DD3AB784AD115; // 0xb0
	FLinearColor RarityEpic_46_57EC98534F2CF5FCC6BECB8F0E4ED791; // 0xc0
	FLinearColor RarityLegendary_47_1AA9CB46443145EAD6F2E3804560E11E; // 0xd0
	FLinearColor RarityCommonHighlight_54_16C5475149D2E8EEEE7DA496498579E6; // 0xe0
	FLinearColor RarityUncommonHighlight_55_A645E3564897359B1FB2CAB9DB71ECC5; // 0xf0
	FLinearColor RarityRareHighlight_56_4646CB224527578B550D96BB6CD22B32; // 0x100
	FLinearColor RarityEpicHighlight_57_4F07DEE6402DE90C1FAFA59D64F0EDC4; // 0x110
	FLinearColor RarityLegendaryHighlight_58_B0B56A814F878A0B4E357E82FCC4DDD3; // 0x120
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FKSCrateChanceTableRow : FTableRowBase {
	FKSLootCrateInfo LootCrateInfo; // 0x8
	UDataTable* CrateSlotTable; // 0x30
	int32_t Weight; // 0x38
};

struct FLootSiteDropInfo {
	UKSItem* Item; // 0x0
	UKSWeaponAttachment* Attachment1; // 0x8
	UKSWeaponAttachment* Attachment2; // 0x10
	UKSWeaponAttachment* Attachment3; // 0x18
	float Weight; // 0x20
	int32_t Price; // 0x24
	float ChanceToSkipAttachment; // 0x28
	bool bRandomizeAttachments; // 0x2c
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x48
};

struct FKSWeaponDropAttachmentContainerEntry : FFastArraySerializerItem {
	UKSWeaponAttachment* Attachment; // 0x10
	FGameplayTag ReplicatedAttachPoint; // 0x20
	uint16_t ExtraInfo; // 0x34
};

struct FPrefireSkipWindow {
	float WindowDuration; // 0x0
	float WindowExpiration; // 0x4
	FString LungeMontageSequence; // 0x8
	FString TargetMontageSequence; // 0x18
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FKSModZoneModInfo {
	UKSPlayerMod* PlayerMod; // 0x0
	bool bUnique; // 0x8
	bool bRemove; // 0x9
	bool bRemoveAll; // 0xa
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
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

struct FTimeAnnouncementList {
	TArray<FTimeAnnouncement> TimeAnnouncements; // 0x0
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0
	int32_t NumInitPtrs; // 0x4
	int32_t NumEvalPtrs; // 0x8
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FKSMilestoneCompletedSummaryEntry {
	UKSWeaponAsset* WeaponAsset; // 0x0
	UKSActivityInstance* MilestoneInstance; // 0x8
	FRewardProgress MilestoneProgress; // 0x10
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

struct FUserPlatform {
	FString PlatformStr; // 0x0
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FKSInitialLoadoutRow : FTableRowBase {
	TArray<TSoftObjectPtr<UKSItem>> LoadoutItems; // 0x8
};

struct FKSCharacterGender {
	EKSCharacterGender Apparel; // 0x0
	EKSCharacterGender Vocal; // 0x1
};

struct FKSGlobalGambitList {
	UKSItem* GlobalGambit1; // 0x0
	UKSItem* GlobalGambit2; // 0x8
	UKSItem* GlobalGambit3; // 0x10
	UKSItem* GlobalGambit4; // 0x18
	UKSItem* GlobalGambit5; // 0x20
	UKSItem* GlobalGambit6; // 0x28
};

struct FLoginRewardItem {
	int32_t RewardDay; // 0x0
	ERewardState RewardState; // 0x4
	UPUMG_StoreItem* RewardStoreItem; // 0x8
};

struct FPGame_PersistentEffectRepData : FFastArraySerializerItem {
	UPGame_EffectGroup* EffectGroupBlueprint; // 0x10
	UPGame_EffectAttachment* AttachmentBlueprint; // 0x18
	uint16_t EffectGroupId; // 0x20
	float fTimeRemainingInitial; // 0x24
	char nNumStacks; // 0x2c
	AActor* SourceActor; // 0x30
	uint32_t ReplicatedEffectFlags; // 0x38
	uint16_t SkinId; // 0x3c
	UPGame_EffectAttachment* pAttachment; // 0x50
};

struct FTeamSideRecord {
	int32_t team_id; // 0x0
	int32_t side_id; // 0x4
	int32_t team_role; // 0x8
};

struct FKSObjectiveTimerInfo {
	UKSTimerComponent* ObjectiveTimer; // 0x0
	TArray<FDelegate> ObjectiveTimerActiveCallbacks; // 0x8
	TArray<FDelegate> ObjectiveTimerCompleteCallbacks; // 0x18
	TArray<FDelegate> ObjectiveTimerTickCallbacks; // 0x28
};

struct FCustomLoadoutItem {
	UKSItem* Item; // 0x0
	ESpecialtyItemType SpecialtyItemType; // 0x8
	int32_t LoadoutClassItemId; // 0xc
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
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

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FCommunicationUseEventRecord {
	int32_t hz_player_id; // 0x0
	int32_t ue_player_id; // 0x4
	int32_t round_id; // 0x8
	FString cosmetic_type; // 0x10
	int32_t item_id; // 0x20
	FString item_name; // 0x28
	FLocationRecord Location; // 0x38
	FRotationRecord Rotation; // 0x44
	FString game_phase; // 0x50
	FString Timestamp; // 0x60
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FReactiveWrapMaterialVectorParam {
	FName MaterialVectorParametersToModify; // 0x0
	bool UpdateValuesOnTrigger; // 0x8
	bool UpdateValuesOnInterpolate; // 0x9
	bool UpdateValuesOnMaximumReached; // 0xa
	bool UpdateValuesOnResetStarted; // 0xb
	FVector InitilizedVectorValue; // 0xc
	float InterpolateSpeedBuildUp; // 0x18
	float InterpolateSpeedCoolDown; // 0x1c
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x40
	float ExplicitTime; // 0x48
	bool bShouldLoop; // 0x4c
	bool bTeleportToExplicitTime; // 0x4d
	ESequenceEvalReinit ReinitializationBehavior; // 0x4e
	float StartPosition; // 0x50
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
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

struct FFullFireRepData {
	FAimData Aim; // 0x0
	bool bIgnoreExtraData; // 0x50
	FRandomStream RandomStream; // 0x54
	float Accuracy; // 0x5c
	char AmmoAfterThisShot; // 0x60
	bool bIgnoreAmmo; // 0x61
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FVOTableRow : FTableRowBase {
	FGameplayTag VOEvent; // 0x8
	TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x10
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FClientContextRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	FString client_current_language; // 0x8
	int32_t client_selected_site_id; // 0x18
	int32_t divert_from_queue_id; // 0x1c
	int32_t divert_to_queue_id; // 0x20
	EQueueDivertType queue_divert_type; // 0x24
	float sheltered_mm_attempt_timeout; // 0x28
	float sheltered_mm_level_limit; // 0x2c
	int32_t forced_bot_match_limit; // 0x30
	int32_t mercy_match_losses_required; // 0x34
	TMap<FString, FString> strings; // 0x38
	TMap<FString, uint64_t> uint64_values; // 0x88
	TMap<FString, float> float_values; // 0xd8
	TMap<FString, int32_t> int32_values; // 0x128
};

struct FKSResourceInfoSerializerItem : FFastArraySerializerItem {
	FKSResourceInfo ResourceInfo; // 0xc
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FKSInputActionNameTypePair {
	FName Name; // 0x0
	EKSInputActionType Type; // 0x8
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
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

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x28
	UNiagaraDataInterface* DataInterface; // 0x40
};

struct FPlayerAwardsPanelData {
	UKSActivityInstance* ActivityInstance; // 0x0
	int32_t ProgressTierOverride; // 0x8
	bool RecentlyUpdated; // 0xc
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
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x60
	TWeakObjectPtr<AActor> Actor; // 0x68
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x70
	FName BoneName; // 0x78
	FName MyBoneName; // 0x80
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x30
	char bOverrideInstanceCountSettings : 1; // 0x30
	char bOverrideTimeSinceRendererSettings : 1; // 0x30
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FMovieSceneTimeWarping {
	FFrameNumber start; // 0x0
	FFrameNumber end; // 0x4
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
	float MaxAspectRatio; // 0x30
	char bConstrainAspectRatio : 1; // 0x34
	char bUseFieldOfViewForLOD : 1; // 0x34
	ECameraProjectionMode ProjectionMode; // 0x38
	float PostProcessBlendWeight; // 0x3c
	FPostProcessSettings PostProcessSettings; // 0x40
	FVector2D OffCenterProjectionOffset; // 0x590
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FAssistEventRecord {
	int32_t assistor_ue_player_id; // 0x0
	int32_t assistor_hz_player_id; // 0x4
	int32_t victim_ue_player_id; // 0x8
	int32_t victim_hz_player_id; // 0xc
	FLocationRecord victim_location; // 0x10
	FString Timestamp; // 0x20
};

struct FAccountConsumableDetails {
	UKSItem* KSItem; // 0x0
	int32_t QuantityOwned; // 0x8
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

struct FKSKeyBind {
	FKey Primary; // 0x0
	EKSInputActionType PrimaryInputActionType; // 0x18
	FKey Secondary; // 0x20
	EKSInputActionType SecondaryInputActionType; // 0x38
	FKey Gamepad; // 0x40
	FKey Combo; // 0x58
	EKSInputActionType GamepadInputActionType; // 0x70
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
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

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Translation[0x2]; // 0x48
	FMovieSceneFloatChannel Rotation; // 0x188
	FMovieSceneFloatChannel Scale[0x2]; // 0x228
	FMovieSceneFloatChannel Shear[0x2]; // 0x368
	EMovieSceneBlendType BlendType; // 0x4a8
	FMovieScene2DTransformMask Mask; // 0x4ac
};

struct FLastHitImpulse {
	AActor* Instigator_20_5676A25747AAE4C1CAE6F7904A72E838; // 0x0
	UObject* DamageTypeClass_8_14D8CFB249FFF88F6E22558B9519E6BC; // 0x8
	float Damage_26_4F432E834F2E7B32B65B2DB29767FD53; // 0x10
	float DamageImpulse_31_89A6727F4083948B82A5FDB503B7442B; // 0x14
	FVector HitPosition_14_120F8D2B490F19F3A4CEBB901F6115CC; // 0x18
	FVector HitDirection_13_8E0293204787B83EDA90D29AEF408597; // 0x24
	FName HitBoneName_16_43F2A6864AE18D72112E449F4233747C; // 0x30
	HitEnum SideHit_23_F8CB69E84C39514126DE2A8BB7DD8631; // 0x38
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x20
	TArray<FName> DestPropertyNames; // 0x30
	UObject* TargetInstance; // 0x40
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FClientStatistics {
	float smoothed; // 0x0
	float Maximum; // 0x4
	float Minimum; // 0x8
	float average; // 0xc
	int32_t SampleCount; // 0x10
};

struct FJobSelectionChoice {
	UKSJobItem* Job; // 0x0
	char bIsVisibleToUI : 1; // 0x8
	char bIsUnavailable : 1; // 0x8
	char bIsUnavailableByOwnership : 1; // 0x8
	char bIsBanned : 1; // 0x8
	char bAlreadyPicked : 1; // 0x8
	char bAlreadyLocked : 1; // 0x8
	char bCannotLock : 1; // 0x8
	char bSelectedByTeammate : 1; // 0x8
	char bSelectedByOpponent : 1; // 0x9
	char bSelectedBySelf : 1; // 0x9
	char bPendingCompleteBySelf : 1; // 0x9
	char bPickedByLocalTeam : 1; // 0x9
	char bPickedByOpponent : 1; // 0x9
	char bLockedByLocalPlayer : 1; // 0x9
	EJobOwnershipState OwnershipState; // 0xa
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34
};

struct FAccoladeMultiDownTracker {
	int32_t DownReqAmount; // 0x0
	FAccoladeDisplayInfo AccoladeReward; // 0x8
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FActiveWeaponProp {
	USkinnableSkeletalMeshComponent* MeshComp; // 0x88
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xa8
	float AverageBrightness; // 0xb8
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FInventoryTypeId {
	int64_t PlayerId; // 0x0
	int32_t ItemTypeId; // 0x8
	int32_t ItemSubTypeId; // 0xc
};

struct FReplicatedPreloader : FFastArraySerializer {
	TArray<FRepPreloaderItem> RepArray; // 0x158
	TArray<FName> AlwaysIncludeBundles; // 0x168
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x48
};

struct FKSSpecialEffect {
	FName FXID; // 0x0
	float EffectEndTime; // 0x8
	bool bLoop; // 0xc
	float LoopStartTime; // 0x10
	float LoopEndTime; // 0x14
	bool bRemoveOnForwardComplete; // 0x18
	bool bRemoveOnReverseComplete; // 0x19
	TArray<FKSPostProcessFloatCurve> FloatCurves; // 0x20
	TArray<FKSPostProcessColorCurve> ColorCurves; // 0x30
	UKSFXCurveComponent* FXCurveClass; // 0x40
	UObject* EffectAsset; // 0x48
};

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID CameraBindingID; // 0x20
	FTransform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70
	bool bIsFinalSection; // 0x71
};

struct FDropItemParameters {
	int32_t OriginalOwnerId; // 0x0
	int32_t OriginalOwnerTeamNum; // 0x4
	bool bIsPlayerDrop; // 0x8
	bool bAllowAutoPickup; // 0x9
	EKSRarity Rarity; // 0xa
	int32_t ObjectiveId; // 0xc
	TArray<UKSWeaponAttachment*> Attachments; // 0x10
	int32_t Price; // 0x20
	EDropPickupConfig DropPickupConfig; // 0x24
	TArray<FGameplayTag> ItemTags; // 0x28
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FKSMapListRow {
	FString MapListKey; // 0x0
	TArray<FString> MapKeys; // 0x10
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x20
};

struct FKSPollResults {
	FKSPollData PollFinalData; // 0x0
	FString PollName; // 0x10
	int32_t TeamNum; // 0x20
	bool bPollPassed; // 0x24
};

struct FKSPlayerModOverridePropertyStatBool : FKSPlayerModOverridePropertyStatBase {
	bool BoolValue; // 0x8
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xa8
	FName ChildActorName; // 0xb0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xb8
};

struct FLobbySkeletalPropInfo {
	bool Enable; // 0x0
	FSoftObjectPath WeaponAsset; // 0x8
	FName AttachPoint; // 0x20
	UAnimInstance* AnimInstance; // 0x28
	UAnimMontage* Montage; // 0x30
	int32_t TargetLOD; // 0x38
	FTransform TransformOffset; // 0x40
	int32_t WeaponAnimIndex; // 0x70
};

struct FKSSettingsWidgetConfig {
	UKSSettingsWidget* WidgetClass; // 0x0
	UKSSettingsInfoBase* SettingInfo; // 0x8
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FPrimitivePriority {
	UPrimitiveComponent* Primitive; // 0x0
	int32_t Priority; // 0x8
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FLiveLinkConnectMessage {
	int32_t LiveLinkVersion; // 0x0
};

struct FLoadingScreenTipTextRow : FTableRowBase {
	FText TipText; // 0x8
	bool IsStaticTip; // 0x20
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

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FPUMG_SoundThemeEventMapping {
	FName SoundEventName; // 0x0
	USoundCue* SoundToPlay; // 0x8
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0xa8
	char ActiveEnumValue; // 0xb8
};

struct FKSLootCrateInfo {
	EKSRarity Rarity; // 0x0
	FColor Color; // 0x4
	FText Label; // 0x8
	int32_t Price; // 0x20
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

struct FNiagaraDataSetCompiledData {
	TArray<FNiagaraVariable> Variables; // 0x0
	TArray<FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10
	uint32_t TotalFloatComponents; // 0x20
	uint32_t TotalInt32Components; // 0x24
	char bRequiresPersistentIDs : 1; // 0x28
	FNiagaraDataSetID ID; // 0x2c
	ENiagaraSimTarget SimTarget; // 0x38
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; // 0x0
	char bOverride_BlendMode : 1; // 0x0
	char bOverride_ShadingModel : 1; // 0x0
	char bOverride_DitheredLODTransition : 1; // 0x0
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x0
	char bOverride_TwoSided : 1; // 0x0
	char bOverride_MaterialSSR : 1; // 0x0
	char MaterialSSR : 1; // 0x0
	char bOverride_HQForwardReflections : 1; // 0x1
	char HQForwardReflections : 1; // 0x1
	char TwoSided : 1; // 0x1
	char DitheredLODTransition : 1; // 0x1
	char bCastDynamicShadowAsMasked : 1; // 0x1
	EBlendMode BlendMode; // 0x2
	EMaterialShadingModel ShadingModel; // 0x3
	float OpacityMaskClipValue; // 0x4
};

struct FWeaponLeadingInfo {
	float fMaxWeaponLeading; // 0x0
	float fWeaponLeadingSmoothingFactor; // 0x4
	float fWeaponLeadingInterpSpeed; // 0x8
	float fWeaponLeadingRecoverInterpSpeed; // 0xc
};

struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x20
	FName SourceBinding; // 0x30
	float Alpha; // 0x38
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x40
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FKSAudioEventTableRow : FTableRowBase {
	UAkAudioEvent* AkEvent; // 0x8
};

struct FSafeZoneParams {
	FVector CenterPosition; // 0x0
	float Radius; // 0xc
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FPartyMemberRepData : FOnlinePartyRepDataBase {
	FUserPlatform Platform; // 0x20
	FUniqueNetIdRepl PlatformUniqueId; // 0x60
	FString PlatformSessionId; // 0xb8
	ECrossplayPreference CrossplayPreference; // 0xf8
};

struct FEquipPointDefinition {
	FGameplayTag EquipPoint; // 0x0
	FGameplayTagQuery WeaponTypeQuery; // 0x8
	bool bCanSwapToManually; // 0x50
	FName HandlerSubType; // 0x54
};

struct FObjectiveState {
	FName CurrentState; // 0x0
	FName PreviousState; // 0x8
	int32_t Owner; // 0x10
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

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FKSCharacterStateFilter {
	bool bCheckHealth; // 0x0
	EArithmeticKeyOperation HealthOperation; // 0x1
	float HealthPercent; // 0x4
	bool bCheckDowned; // 0x8
	EBasicKeyOperation Downed; // 0x9
	bool bCheckDead; // 0xa
	EBasicKeyOperation Dead; // 0xb
	bool bCheckCrouched; // 0xc
	EBasicKeyOperation Crouched; // 0xd
	bool bCheckFalling; // 0xe
	EBasicKeyOperation Falling; // 0xf
	bool bCheckSprinting; // 0x10
	EBasicKeyOperation Sprinting; // 0x11
	bool bCheckSwimming; // 0x12
	EBasicKeyOperation Swimming; // 0x13
	bool bCheckRidingZipline; // 0x14
	EBasicKeyOperation RidingZipline; // 0x15
	bool bCheckIsBot; // 0x16
	EBasicKeyOperation IsBot; // 0x17
	bool bCheckBehaviorState; // 0x18
	EBasicKeyOperation BehaviorOperation; // 0x19
	ECharacterBehaviorState BehaviorState; // 0x1a
	bool bCheckInteracting; // 0x1b
	EBasicKeyOperation Interacting; // 0x1c
	bool bCheckInteractableClass; // 0x1d
	TSoftClassPtr<UObject> InteractableClass; // 0x20
	float MinInteractTimeRemaining; // 0x48
	float MaxInteractTimeRemaining; // 0x4c
	bool bCheckADS; // 0x50
	EBasicKeyOperation ADS; // 0x51
	bool bCheckHasReviver; // 0x52
	EBasicKeyOperation HasReviver; // 0x53
	bool bCheckReviverAffiliation; // 0x54
	FKSAffiliationFilter ReviverAffiliation; // 0x55
	bool bCheckIsOnFire; // 0x59
	EBasicKeyOperation IsOnFire; // 0x5a
	bool bCheckIsWeaponEquipped; // 0x5b
	EBasicKeyOperation IsWeaponEquipped; // 0x5c
	TSoftClassPtr<UObject> EquippedWeaponClass; // 0x60
	bool bCheckIsWeaponAssetEquipped; // 0x88
	EBasicKeyOperation IsWeaponAssetEquipped; // 0x89
	TSoftObjectPtr<UKSWeaponAsset> EquippedWeaponAsset; // 0x90
	bool bCheckRoles; // 0xb8
	TArray<ECharacterRole> RolesToCheck; // 0xc0
	bool bRequireAllRoles; // 0xd0
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FKSTranslucencyModifier {
	UObject* TranslucencySource; // 0x0
	float OpacityValue; // 0x8
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
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

struct FCombatEventInfo {
	TWeakObjectPtr<APlayerState> EventVictim; // 0x0
	TWeakObjectPtr<APlayerState> EventInstigator; // 0x8
	TWeakObjectPtr<AController> InstigatorController; // 0x10
	TArray<TWeakObjectPtr<APlayerState>> EventAssistants; // 0x18
	TWeakObjectPtr<AActor> DamagedActor; // 0x28
	TWeakObjectPtr<AActor> DamageCauser; // 0x30
	UDamageType* DamageType; // 0x38
	UKSWeaponAsset* WeaponAsset; // 0x40
	bool DownEvent; // 0x48
	bool KillEvent; // 0x49
	EHitLocationType HitLocationType; // 0x4a
	float DamageDealt; // 0x4c
	float OverkillDamageDealt; // 0x50
	float OriginalDamageDealt; // 0x54
	bool IsArmorHit; // 0x58
	bool bDamageResisted; // 0x59
	bool bDamageReduced; // 0x5a
	bool bDamageShielded; // 0x5b
	bool IsRadialDamage; // 0x5c
	bool WasCharacterAlreadyDown; // 0x5d
	bool WasCharacterBeingRevived; // 0x5e
	bool bDamageMastered; // 0x5f
	int32_t VictimBounty; // 0x60
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x20
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FStickyWidgetData {
	FName StickyWidgetName; // 0x0
	UPUMG_Widget* Widget; // 0x8
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x20
	EAnimGroupRole GroupRole; // 0x24
	bool bIgnoreForRelevancyTest; // 0x25
	float BlendWeight; // 0x28
	float InternalTimeAccumulator; // 0x2c
};

struct FKSBTTargetSelectionTableRow : FTableRowBase {
	UKSBTTargetSelector* TargetSelector; // 0x8
};

struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0xb8
	uint32_t PaddedParameterSize; // 0xbc
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xc0
	char bInitialized : 1; // 0xd0
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x88
	EAlphaBlendOption BlendOption; // 0x98
	UCurveFloat* CustomCurve; // 0xa0
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FKSBotAbilityTableRow : FTableRowBase {
	TSoftObjectPtr<UKSPlayerMod> Ability; // 0x8
	TArray<UKSBTAction*> RequiredActions; // 0x30
};

struct FKSGameHUDSettings {
	bool ShouldShowEnemyCaptureProgress; // 0x0
	UUserWidget* GameModeWidget; // 0x8
	bool ShowRoundEndResults; // 0x10
};

struct FKSInitialAmmo {
	EAmmoType AmmoType; // 0x0
	int32_t AmmoCount; // 0x4
};

struct FRestoreInfoInitParams {
	ERestoreInfoInitBindType BindType; // 0x0
	ERestoreInfoInitRestoreType RestoreType; // 0x1
	bool bRestoreOnce; // 0x2
	bool bRestoreExhausted; // 0x3
	bool bIncludeDefaultCosmetics; // 0x4
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
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

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
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
	int32_t DisableRootMotionCount; // 0x188
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
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

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FHirezObjectPool {
	TMap<UObject*, FHirezObjectPoolItem> PoolsByClass; // 0x0
	TArray<FHirezObjectPoolQueuedEntry> QueuedEntries; // 0x50
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

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x28
	int32_t DestOffset; // 0x2c
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FCultureFriendlyNames {
	FString CultureString_2_1D905AD34039FD917A623B801CD6C394; // 0x0
	FText FriendlyName_5_01E74C8D4A7648211DFCD4AEE881C6AE; // 0x10
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FCosmeticSlotDetails {
	UPlatformInventoryItem* CosmeticItem_15_B7D9C0A442E79C8543A25E851BA3CD93; // 0x0
	UKSJobItem* AssociatedJobItem_5_C4CDDC7E47E0690DC2FACCA2B2E68A1B; // 0x8
	EMercCosmeticSlot MercCosmeticSlot_8_2915050748C9085E1DD7BC8F113D7A53; // 0x10
	EWeaponSlot WeaponSlot_11_B5AA9D88414CFC0B28DE789456A68BDD; // 0x11
	int32_t SlotPosition_14_A7CCEA944C2A098D2B251C884A3D7FC0; // 0x14
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FKSPlayerIdentitiesContainer : FFastArraySerializer {
	TArray<FKSPlayerIdentityData> ReplicatedData; // 0x108
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

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x48
	int32_t ChannelsUsed; // 0x2c8
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FKSFreezeFramePawnProp : FKSFreezeFramePropBase {
	UStreamableRenderAsset* Mesh; // 0x80
};

struct FProgressionTallyMiscXPInfo {
	FText TallyDisplayFormat; // 0x0
	bool ShouldDisplay; // 0x18
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FLiveLinkRoleProjectSetting {
	ULiveLinkRole* Role; // 0x0
	ULiveLinkSubjectSettings* SettingClass; // 0x8
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x10
	TArray<ULiveLinkFramePreProcessor*> FramePreProcessors; // 0x18
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FRoundResult {
	char RoundNumber; // 0x0
	AKSTeamState* WinningTeam; // 0x8
	int32_t WinnerScore; // 0x10
	bool WinByElimination; // 0x14
	char LastTriggeredRound; // 0x15
	AKSObjectiveBase* ObjectiveChosen; // 0x18
};

struct FSkinnableAudioEvent {
	FName SoundRowName; // 0x0
	UAkAudioEvent* DefaultSound; // 0x8
};

struct FTierRewardItemData {
	UPUMG_StoreItem* RewardItem; // 0x0
	int32_t QuantityInTier; // 0x8
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
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FAimData {
	FVector_NetQuantize10 StartTrace; // 0x0
	FVector_NetQuantizeNormal Direction; // 0xc
	FVector_NetQuantize10 ViewPoint; // 0x18
	EAimDataMode AimDataMode; // 0x24
	FVector_NetQuantize10 EndTrace; // 0x28
	FVector_NetQuantizeNormal ImpactNormal; // 0x34
	TArray<FVector_NetQuantizeNormal> SpreadDirections; // 0x40
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FScreenLogData {
	EScreenLogType ScreenLogData; // 0x0
	APlayerState* Instigator; // 0x8
	APlayerState* Victim; // 0x10
	UKSItem* Weapon; // 0x18
	bool bDowned; // 0x20
	bool bMastered; // 0x21
	int32_t VictimBounty; // 0x24
	UKSRadialMenuItem* RadialMenuItem; // 0x28
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FReplicatedRoundInfo {
	FMatchPhase RoundState; // 0x0
	char RoundNumber; // 0x14
};

struct FKSSurrenderRow {
	FString SurrenderConfigKey; // 0x0
	bool bDoesQueueAllowSurrender; // 0x10
	float SecondsFromMatchStart; // 0x14
	float SecondsFromPlayerDisconnect; // 0x18
	float SecondsFromSurrenderFailure; // 0x1c
};

struct FKSInputActionKeyMapping {
	FInputActionKeyMapping Mapping; // 0x0
	EKSInputActionType Type; // 0x28
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

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
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
	bool bAllowShadowInShadowOptimization; // 0x18
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FBundledAmmoInfo {
	EBundledAmmoType BundleType; // 0x0
	int32_t ReserveAmmo; // 0x4
	int32_t AmmoInClip; // 0x8
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
};

struct FKSChildPhysicsAssetKeywords {
	FName AssetKeyword; // 0x0
	FName CollisionProfileKeyword; // 0x8
	FName SimulatePhysicsKeyword; // 0x10
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
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

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x20
};

struct FExecuteEventRecord {
	int32_t instigator_ue_player_id; // 0x0
	int32_t instigator_hz_player_id; // 0x4
	FLocationRecord instigator_location; // 0x8
	int32_t victim_ue_player_id; // 0x14
	int32_t victim_hz_player_id; // 0x18
	FLocationRecord victim_location; // 0x1c
	int32_t weapon_id; // 0x28
	FString weapon_name; // 0x30
	float Distance; // 0x40
	bool self_or_own_team; // 0x44
	FString Timestamp; // 0x48
};

struct FRegionQosInstance {
	FQosRegionInfo Definition; // 0x0
	TArray<FDatacenterQosInstance> DatacenterOptions; // 0x30
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FRotationRecord {
	float Yaw; // 0x0
	float Pitch; // 0x4
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x20
	float SpawnCountScale; // 0x24
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FKSMVPOrderHelper {
	UKSPersistentPlayerData* OwningPersistentPlayerData; // 0x0
	int32_t OrderPoints; // 0x8
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
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

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0xa8
};

struct FKSTargeterConfig {
	float MaxTargetingRange; // 0x0
	float TargetingConeHalfAngle; // 0x4
	bool bUseNearestTarget; // 0x8
	bool bRequiresVisibility; // 0x9
};

struct FPGame_PersistentEffectRepDataContainer : FFastArraySerializer {
	TArray<FPGame_PersistentEffectRepData> Items; // 0x108
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FRepPreloaderItem : FFastArraySerializerItem {
	FPrimaryAssetId PrimaryAssetId; // 0xc
	FName BundleName; // 0x1c
	bool bEntryWasReplicated; // 0x24
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FSelectiveEventStopPair {
	UAkAudioEvent* Event; // 0x0
	FString EventName; // 0x8
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FNiagaraTestStruct {
	FVector Vector1; // 0x0
	FVector Vector2; // 0xc
	FNiagaraTestStructInner InnerStruct1; // 0x18
	FNiagaraTestStructInner InnerStruct2; // 0x30
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FSettingConfigPair {
	FName Name; // 0x0
	FString Value; // 0x8
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FInventoryRestoreInfo {
	FGameplayTag EquipPoint; // 0x0
	UKSItem* Item; // 0x8
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FPollEndEventRecord {
	int32_t round_id; // 0x0
	bool poll_passed; // 0x4
	FString poll_name; // 0x8
	int32_t team_id; // 0x18
	TArray<int32_t> hz_player_ids_for; // 0x20
	TArray<int32_t> hz_player_ids_against; // 0x30
	FString game_phase; // 0x40
	FString Timestamp; // 0x50
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
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

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FKSActivityDescriptor {
	FGameplayTag ActivityTag; // 0x0
	int64_t DescriptorId; // 0x8
	FString DescriptorString; // 0x10
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

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FKSRadialMenuItemInterruptRules {
	char Walking : 1; // 0x0
	char Sprinting : 1; // 0x0
	char Crouching : 1; // 0x0
	char Downed : 1; // 0x0
	char Dead : 1; // 0x0
	char Interacting : 1; // 0x0
	char Zipline : 1; // 0x1
	char SkyDiving : 1; // 0x1
	char DodgeRolling : 1; // 0x1
	char Falling : 1; // 0x1
	char NonRadialMenuItemEquipment : 1; // 0x1
	char RadialMenuItemActivated : 1; // 0x1
	char Cooldown : 1; // 0x1
	char DistFromOrigin : 1; // 0x1
	char Throttled : 1; // 0x2
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FPUMG_ClientQueueInfo {
	FText Name; // 0x8
	FText Description; // 0x20
	int32_t ID; // 0x38
	int32_t LevelLock; // 0x3c
	int32_t MinPartySize; // 0x40
	int32_t MaxPartySize; // 0x44
	bool IsCustom; // 0x48
	bool AllowsBackfill; // 0x49
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FLiveLinkClearSubject {
	FName SubjectName; // 0x0
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FKSInteractableStateFilter {
	bool bCheckIsInteracting; // 0x0
	EBasicKeyOperation IsInteracting; // 0x1
	bool bCheckInteractorAffiliation; // 0x2
	FKSAffiliationFilter InteractorAffiliation; // 0x3
	bool bCheckCanInteract; // 0x7
	EBasicKeyOperation CanInteract; // 0x8
	bool bCheckInteractableClass; // 0x9
	TSoftClassPtr<UObject> InteractableClass; // 0x10
};

struct FKSShotgunHitChangeItem : FReplicatedLogItem {
	FCompressedShotgunHitData ShotgunHitData; // 0x0
};

struct FPUMG_PartyMemberData {
	UPUMG_PlayerInfo* PlayerData; // 0x0
	bool IsFriend; // 0x8
	FText StatusMessage; // 0x10
	bool Online; // 0x28
	bool IsPending; // 0x29
	bool CanInvite; // 0x2a
	bool IsLeader; // 0x2b
	bool IsReady; // 0x2c
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

struct FPriorityVoiceLine {
	EKSVoiceOverState State; // 0x0
	EKSVoiceOverPriority Priority; // 0x1
	TScriptInterface<IKSVoiceActor> Source; // 0x8
};

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0xe0
	FBoneSocketTarget EffectorTarget; // 0x110
	FBoneReference TipBone; // 0x170
	FBoneReference RootBone; // 0x180
	float Precision; // 0x190
	int32_t MaxIterations; // 0x194
	EBoneControlSpace EffectorTransformSpace; // 0x198
	EBoneRotationSource EffectorRotationSource; // 0x199
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FParticleCollisionPackedParams {
	FName EventName; // 0x0
	float EmitterTime; // 0x8
	int32_t ParticleTime; // 0xc
	FVector Location; // 0x10
	FVector Velocity; // 0x1c
	FVector Direction; // 0x28
	FVector Normal; // 0x34
	FName BoneName; // 0x40
	UPhysicalMaterial* PhysMat; // 0x48
	UParticleSystemComponent* Source; // 0x50
};

struct FEliminationMessage {
	AKSPlayerState* Victim; // 0x0
	AKSPlayerState* Instigator; // 0x8
	FText Message; // 0x10
	int32_t DamageDealt; // 0x28
	ECombatEventType EventType; // 0x2c
	bool ViewedPlayerAssisted; // 0x2d
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x48
};

struct FPingCacher {
	AKSPlayerState* PingingPlayer; // 0x0
	int32_t PingId; // 0x8
};

struct FRoundResultAnnoucement {
	int32_t WinningTeamID; // 0x0
	FText ResultText; // 0x8
};

struct FKSPointObjectiveMarkerViewState {
	EKSObjectiveState ObjectiveState; // 0x0
	EKSPOIState POIState; // 0x1
	EPointObjectiveMarkerTeamState TeamState; // 0x2
	bool IsBombDeployed; // 0x3
};

struct FKSProjectileClusterSegment {
	AKSProjectile* ProjectileClass; // 0x0
	UKSWeaponAsset* WeaponAsset; // 0x8
	FVector SpawnOffset; // 0x10
	FRotator InitialRotation; // 0x1c
	FVector Direction; // 0x28
};

struct FPlayerRewardsSummary {
	TMap<int64_t, FRewardProgress> ActivityRewards; // 0x0
	TArray<FPlayerMatchStatInfo> BestStats; // 0x50
};

struct FSessionServicePing {
	FString UserName; // 0x0
};

struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
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

struct FActiveSkelProp {
	USkinnableSkeletalMeshComponent* MeshComp; // 0x80
};

struct FJobSelectionTaskList : FFastArraySerializer {
	TArray<FJobSelectionTask> Tasks; // 0x108
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FDataTableInfo {
	UDataTable* DataTable; // 0x0
	int32_t TablePriority; // 0x8
	FGameplayTagQuery SkinTagQuery; // 0x10
};

struct FPlayerRecord : FPlayerStatisticsBase {
	int32_t ue_player_id; // 0xb0
	int32_t hz_player_id; // 0xb4
	FString player_name; // 0xb8
	int32_t team_id; // 0xc8
	int32_t class_id; // 0xcc
	int32_t player_type; // 0xd0
	int32_t portal_id; // 0xd4
	int32_t input_type; // 0xd8
	int32_t platform_type; // 0xdc
	int32_t ranking_id; // 0xe0
	float ranking; // 0xe4
	float ranking_variance; // 0xe8
	int32_t task_force_id; // 0xec
	FGuid group_id; // 0xf0
	int32_t party_id; // 0x100
	int32_t party_size; // 0x104
	int32_t skin_id; // 0x108
	int32_t account_level; // 0x10c
	int32_t ranked_level; // 0x110
	int32_t class_level; // 0x114
	float time_played; // 0x118
	float time_alive; // 0x11c
	int32_t eliminations; // 0x120
	int32_t total_earned; // 0x124
	int32_t total_spent; // 0x128
	int32_t total_refunded; // 0x12c
	int32_t on_time; // 0x130
	int32_t connect_count; // 0x134
	int32_t disconnect_round; // 0x138
	int32_t deserter_rounds; // 0x13c
	int32_t penalties; // 0x140
	int32_t afk_kicked; // 0x144
	int32_t client_selected_site_id; // 0x148
	int32_t client_selected_queue_id; // 0x14c
	FString client_current_language; // 0x150
};

struct FSeasonalSublevels {
	TArray<FString> SublevelSuffixes; // 0x0
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4e8
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FAttachmentData {
	TSoftObjectPtr<UKSWeaponAttachment> SoftObjectPtr; // 0x0
	FGameplayTagContainer CachedCompatibleWeaponTypes; // 0x28
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
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

struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel FloatFunction; // 0x48
	EMovieSceneBlendType BlendType; // 0xe8
};

struct FSubmixEffectConvolutionReverbSettings {
	float NormalizationVolumeDb; // 0x0
	float SurroundRearChannelBleedDb; // 0x4
	bool bInvertRearChannelBleedPhase; // 0x8
	bool bSurroundRearChannelFlip; // 0x9
	float SurroundRearChannelBleedAmount; // 0xc
	UAudioImpulseResponse* ImpulseResponse; // 0x10
	bool AllowHArdwareAcceleration; // 0x18
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xd8
	EBoneControlSpace DisplaySpace; // 0xe8
	bool bRelativeToRefPose; // 0xe9
	FVector Translation; // 0xec
	FRotator Rotation; // 0xf8
	FVector Scale; // 0x104
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
};

struct FKSActionRestrictor {
	bool bRestrictMove; // 0x0
	bool bRestrictFire; // 0x1
	bool bRestrictAltFire; // 0x2
	bool bRestrictAbility; // 0x3
	bool bRestrictAim; // 0x4
	bool bRestrictRoll; // 0x5
	bool bRestrictWeaponSwaps; // 0x6
	bool bRestrictReload; // 0x7
};

struct FPlayerEntryStats {
	int32_t PlayerId; // 0x0
	int64_t netPlayerID; // 0x8
	FString PlayerName; // 0x10
	int32_t TeamNum; // 0x20
	UKSJobItem* PlayerJob; // 0x28
	bool IsBot; // 0x30
	bool IsDisconnected; // 0x31
	FPlayerMatchStatInfo elimCount; // 0x34
	FPlayerMatchStatInfo DownCount; // 0x44
	FPlayerMatchStatInfo deathCount; // 0x54
	FPlayerMatchStatInfo reviveCount; // 0x64
	FPlayerMatchStatInfo DamageDealt; // 0x74
	FPlayerMatchStatInfo hackCount; // 0x84
	FPlayerMatchStatInfo dehackCount; // 0x94
	FPlayerMatchStatInfo pointCount; // 0xa4
	FPlayerMatchStatInfo timePlayed; // 0xb4
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FKSRankedSeasonRow {
	FString RankedSeasonKey; // 0x0
	FString RankedProgressionKey; // 0x10
	bool UsesPlacementMatches; // 0x20
	int32_t PlacementMatchItemId; // 0x24
	int32_t PlacementMatchLootId; // 0x28
	int32_t InitXpLootId; // 0x2c
	int32_t XpTableId; // 0x30
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
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

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FPartyPrivacySettings {
	EPartyType PartyType; // 0x0
	EPartyInviteRestriction PartyInviteRestriction; // 0x1
	bool bOnlyLeaderFriendsCanJoin; // 0x2
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FKSScoreChangeItem : FReplicatedLogItem {
	FKSScoreChangeEvent ScoreChange; // 0x0
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
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

struct FKSBotCharacterSkinTableRow : FTableRowBase {
	TSoftObjectPtr<UKSJobItem> JobItem; // 0x8
	UDataTable* SkinTable; // 0x30
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FRoundSummary : FPlayerStatisticsBase {
	int32_t round_id; // 0xb0
	FString round_start_time; // 0xb8
	int32_t Duration; // 0xc8
	int32_t winning_team; // 0xcc
	int32_t first_blood_team; // 0xd0
	int32_t first_capture_team; // 0xd4
	int32_t surrender_polls; // 0xd8
};

struct FShopOptions {
	bool bPrimary; // 0x0
	bool bSecondary; // 0x1
	bool bMelee; // 0x2
	bool bGadgets; // 0x3
	bool bPerks; // 0x4
	bool bGambits; // 0x5
	bool bGlobals; // 0x6
};

struct FAgentStateChangeList : FSizedArraySerializer {
	TWeakObjectPtr<AKSAgent_Aimed> Owner; // 0x70
	TArray<FAgentStateChange> StateChanges; // 0x78
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FPUMG_ActiveChatChannelData {
	EPUMG_ChatChannel ChatChannel; // 0x0
	UPUMG_PlayerInfo* PersonalChannelPlayer; // 0x8
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FLocationRecord {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FADSBlurValues {
	bool AdsBlurDisabled; // 0x0
	float BlurDistance; // 0x4
	float MaskExponential; // 0x8
	float HardnessOfMask; // 0xc
	float SphereMaskRadius; // 0x10
	float SphereMaskScaleX; // 0x14
	float SphereMaskScaleY; // 0x18
	bool EnableCubeMask; // 0x1c
	float CubeMaskPosX; // 0x20
	float CubeMaskPosY; // 0x24
	float CubeMaskScaleX; // 0x28
	float CubeMaskScaleY; // 0x2c
	bool EnableCustomMask; // 0x30
	UTexture2D* CustomMaskTexture; // 0x38
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

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FRecoilParams {
	FVector PhaseOffset; // 0x0
	ERecoilStart X; // 0xc
	ERecoilStart Y; // 0xd
	ERecoilStart Z; // 0xe
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FPlayerDamageInfo {
	int32_t InstigatorPlayerId; // 0x0
	FString InstigatorPlayerName; // 0x8
	int32_t VictimPlayerId; // 0x18
	FString VictimPlayerName; // 0x20
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

struct FKickbackPlayback {
	float AccumulatedTime; // 0x0
	FInterpCurveVector2D KickbackCurve; // 0x8
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry Entries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0x140
	TArray<FLinearColor> VectorValues; // 0x150
	TArray<UTexture*> TextureValues; // 0x160
	TArray<UFont*> FontValues; // 0x170
	TArray<int32_t> FontPageValues; // 0x180
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2
	char Value; // 0x3
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FKSInputAxisKeyMappings {
	TArray<FInputAxisKeyMapping> InputAxisKeyMappings; // 0x0
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FKSShotgunHitChangeList : FReplicatedLog {
	TArray<FKSShotgunHitChangeItem> Items; // 0x70
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FAimAssistActorHealthInfo {
	float CurrentHealth; // 0x0
	bool bKilled; // 0x4
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FHirezObjectPoolItem {
	TArray<FName> FreeNames; // 0x0
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FStreamingLevelsToConsider {
	TArray<FLevelStreamingWrapper> StreamingLevels; // 0x0
};

struct FSourceEffectMidSideSpreaderSettings {
	EStereoChannelMode InputMode; // 0x0
	float SpreadAmount; // 0x4
	EStereoChannelMode OutputMode; // 0x8
	bool bEqualPower; // 0x9
};

struct FKSScoreChangeEvent {
	int32_t Delta; // 0x0
	FText Reason; // 0x8
	bool bBonus; // 0x20
	TWeakObjectPtr<AKSPlayerState> Instigator; // 0x24
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x20
	float Pitch; // 0x30
	float Yaw; // 0x34
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x38
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x68
	FRotator MeshToComponent; // 0x98
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x68
	TArray<FName> InputPoseNames; // 0x78
	UAnimInstance* InstanceClass; // 0x88
	FName Tag; // 0x90
	char bReceiveNotifiesFromLinkedInstances : 1; // 0xa8
	char bPropagateNotifiesToLinkedInstances : 1; // 0xa8
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FKSAIPlayerStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FLiveLinkSourceBufferManagementSettings {
	bool bValidEngineTimeEnabled; // 0x0
	float ValidEngineTime; // 0x4
	float EngineTimeOffset; // 0x8
	double EngineTimeClockOffset; // 0x10
	FFrameRate TimecodeFrameRate; // 0x18
	bool bGenerateSubFrame; // 0x20
	bool bUseTimecodeSmoothLatest; // 0x21
	FFrameRate SourceTimecodeFrameRate; // 0x24
	bool bValidTimecodeFrameEnabled; // 0x2c
	int32_t ValidTimecodeFrame; // 0x30
	float TimecodeFrameOffset; // 0x34
	double TimecodeClockOffset; // 0x38
	int32_t LatestOffset; // 0x40
	int32_t MaxNumberOfFrameToBuffered; // 0x44
	bool bKeepAtLeastOneFrame; // 0x48
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FLiveLinkSubjectDataMessage {
	FLiveLinkRefSkeleton RefSkeleton; // 0x0
	FName SubjectName; // 0x20
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingID; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FKSAmmoManager : FFastArraySerializer {
	TWeakObjectPtr<AActor> Owner; // 0x108
	TArray<FKSAmmoManagerEntry> AmmoSupply; // 0x110
	TArray<FKSAmmoTransactions> UnverifiedAmmoTransactions; // 0x120
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
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

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FShopItemList {
	TArray<EShopItemType> ShopItems; // 0x0
};

struct FKSEquipmentContainer : FFastArraySerializer {
	AActor* Owner; // 0x108
	TScriptInterface<IKSEquipmentContainerOwner> OwnerAsEquipmentContainerOwner; // 0x110
	TMap<FKSEquipmentId, FKSEquipmentContainerEntry> PendingEquipment; // 0x120
	TArray<FKSEquipmentContainerEntry> Equipment; // 0x170
	TArray<FKSEquipmentContainerEntry> PropEquipment; // 0x180
	uint16_t NextEquipmentId; // 0x190
	uint16_t NextPropId; // 0x192
	TArray<FKSEquipmentContainerEntry> StaleEquipment; // 0x198
};

struct FKSVoicelineEvent {
	FName EventName; // 0x0
	FName SelfEventName; // 0x8
	EKSVoicelineAudience Audience; // 0x10
	EKSVoicelineType VoicelineType; // 0x11
	float ActivationChance; // 0x14
	bool bAffectedByGlobalCooldown; // 0x18
	int32_t CooldownGroup; // 0x1c
	float CooldownDuration; // 0x20
	float VoicelineChangeValue; // 0x24
	EKSVoiceOverPriority LinePriority; // 0x28
	bool bPlayedByOwnerAlready; // 0x29
	bool bPlaySpecificVoiceLine; // 0x2a
	UAkAudioEvent* SpecificAkAudioEvent; // 0x30
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FNetThrottleSpawnDefinition {
	FName SpawnBucketIdentifier; // 0x0
	int32_t NumSpawnsPerFrame; // 0x8
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
	float DesiredBoundRadius; // 0x158
	float DesiredFillingPercentage; // 0x15c
	int32_t MinNumberOfActorsToBuild; // 0x160
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FButtonPromptContext {
	TArray<FButtonPromptData> PromptInfo; // 0x0
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FCurrencyImageRow : FTableRowBase {
	int32_t Quantity; // 0x8
	int32_t BonusQuantity; // 0xc
	TSoftObjectPtr<UTexture2D> Image; // 0x10
	TSoftObjectPtr<UTexture2D> FullSplashImage; // 0x38
	TMap<EExternalSkuSource, FString> ExternalProductSkus; // 0x60
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
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

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
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

struct FKSRevealInfo {
	int32_t RevealID; // 0x0
	TWeakObjectPtr<AKSPlayerState> Revealer; // 0x4
	TWeakObjectPtr<AActor> RevealTarget; // 0xc
	TWeakObjectPtr<UObject> RevealInstigator; // 0x14
	UObject* RevealClass; // 0x20
	ETargetAudience TargetAudience; // 0x28
	EKSRevealSource RevealSource; // 0x29
	EKSRevealPriority RevealPriority; // 0x2a
	bool bUseRevealOverrideColor; // 0x2b
	FLinearColor RevealOverrideColor; // 0x2c
	bool bFilled; // 0x3c
	bool bOutlineTargetOnClient; // 0x3d
	bool bNotifyTargetRevealed; // 0x3e
	bool bDisplayEnemyDetectedUI; // 0x3f
	bool bForcedDisplay; // 0x40
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

struct FKSPollData {
	int32_t VoterCount; // 0x0
	int32_t VotesInFavor; // 0x4
	int32_t VotesAgainst; // 0x8
	float TimeElapsed; // 0xc
};

struct FKSPlayerEventRecord {
	int32_t PlayerId; // 0x0
	int32_t PlayerSide; // 0x4
	FVector EventLocation; // 0x8
	float Timestamp; // 0x14
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FPlayerConnectionEventRecord {
	int32_t hz_player_id; // 0x0
	int32_t ue_player_id; // 0x4
	int32_t round_id; // 0x8
	int8_t is_connected; // 0xc
	FString Timestamp; // 0x10
};

struct FEliminationStreakEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	int32_t Count; // 0x8
};

struct FBoneMirrorConfig {
	TArray<FBoneReference> UnpairedMirrorBones; // 0x0
	TArray<FBoneMirrorPair> PairedMirrorBones; // 0x10
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

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FPGame_InstantEffectRepData {
	UPGame_EffectGroup* EffectGroupBlueprint; // 0x0
	UPGame_EffectAttachment* AttachmentBlueprint; // 0x8
	uint16_t EffectGroupId; // 0x10
	AActor* SourceActor; // 0x18
	FVector HitLocation; // 0x20
	FVector HitNormal; // 0x2c
	uint32_t ReplicatedEffectFlags; // 0x38
	uint16_t SkinId; // 0x3c
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
	TMap<FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FArrayAsMapValue {
	TArray<FString> StringArray; // 0x0
};

struct FKSRevealInfoSerializerContainer : FFastArraySerializer {
	TArray<FKSRevealInfoSerializerItem> RevealInfoSerializerItems; // 0x108
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x40
	float Y; // 0x44
	float Z; // 0x48
	float PlayRate; // 0x4c
	bool bLoop; // 0x50
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x51
	float StartPosition; // 0x54
	UBlendSpaceBase* BlendSpace; // 0x58
	UBlendSpaceBase* PreviousBlendSpace; // 0xe8
};

struct FPUMG_KeyBindConfig {
	FText DisplayName; // 0x0
	FName InputName; // 0x18
	EPUMG_SettingUIType Type; // 0x20
	FName SettingId; // 0x24
	FKey PrimaryKey; // 0x30
	FKey SecondaryKey; // 0x48
	FKey GamepadKey; // 0x60
	bool IsGamepadOnly; // 0x78
	float Scale; // 0x7c
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FKSWeaponMasteryLevelUpSummaryEntry {
	UPrimaryDataAsset* MasteryAsset; // 0x0
	FActivityTier MasteryTier; // 0x8
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x20
	FName Name; // 0x30
	FName Group; // 0x38
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FMantleConfig {
	FName MantleSequenceName; // 0x0
	UAnimSequence* DefaultMantleSequence; // 0x8
	EKSMantleScaleType DistanceScaleMethod; // 0x10
	float IdealHeight; // 0x14
	float MaxHeight; // 0x18
	float DefaultMinHeight; // 0x1c
	float ShaveCutoffTime; // 0x20
	bool bHasDropSegment; // 0x24
	bool bUseOnJump; // 0x25
	bool bCanStartWhileFalling; // 0x26
	float EarlyOutTime; // 0x28
	bool bCanEndWithStand; // 0x2c
	bool bCanEndWithSlide; // 0x2d
	bool bCanEndWithFall; // 0x2e
	UAnimSequence* CachedSequence; // 0x78
};

struct FChildBodyCollisionProfileCache {
	int32_t BodyIndex; // 0x0
	FName CollisionProfileName; // 0x4
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FWeaponStateChangeRequest {
	uint16_t RequestID; // 0x0
	bool bChangeWeaponState; // 0x2
	EWeaponStateNew PreviousState; // 0x3
	EWeaponStateNew NextState; // 0x4
	bool bChangeWeaponAimMode; // 0x5
	EKSCharacterAimMode AimMode; // 0x6
	FRandomStream RandomStream; // 0x8
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

struct FActivityTier {
	int32_t Tier; // 0x0
	int32_t StartingCount; // 0x4
	int32_t Count; // 0x8
	TArray<FTierRewardItemData> RewardItems; // 0x10
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneBoolChannel Curve; // 0x20
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xd8
	float AngularDampingOverride; // 0xdc
	FBoneReference RelativeSpaceBone; // 0x140
	FBoneReference BoundBone; // 0x150
	FBoneReference ChainEnd; // 0x160
	FVector BoxExtents; // 0x170
	FVector LocalJointOffset; // 0x17c
	float GravityScale; // 0x188
	FVector GravityOverride; // 0x18c
	float LinearSpringConstant; // 0x198
	float AngularSpringConstant; // 0x19c
	float WindScale; // 0x1a0
	FVector ComponentLinearAccScale; // 0x1a4
	FVector ComponentLinearVelScale; // 0x1b0
	FVector ComponentAppliedLinearAccClamp; // 0x1bc
	float AngularBiasOverride; // 0x1c8
	int32_t NumSolverIterationsPreUpdate; // 0x1cc
	int32_t NumSolverIterationsPostUpdate; // 0x1d0
	FAnimPhysConstraintSetup ConstraintSetup; // 0x1d4
	TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x220
	float SphereCollisionRadius; // 0x230
	FVector ExternalForce; // 0x234
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x240
	AnimPhysCollisionType CollisionType; // 0x250
	AnimPhysSimSpaceType SimulationSpace; // 0x251
	char bUseSphericalLimits : 1; // 0x254
	char bUsePlanarLimit : 1; // 0x254
	char bDoUpdate : 1; // 0x254
	char bDoEval : 1; // 0x254
	char bOverrideLinearDamping : 1; // 0x254
	char bOverrideAngularBias : 1; // 0x254
	char bOverrideAngularDamping : 1; // 0x254
	char bEnableWind : 1; // 0x254
	char bUseGravityOverride : 1; // 0x255
	char bLinearSpring : 1; // 0x255
	char bAngularSpring : 1; // 0x255
	char bChain : 1; // 0x255
	FRotationRetargetingInfo RetargetingSettings; // 0x260
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FPlayerTeamTracker {
	int32_t PlayerId; // 0x0
	int32_t PlayerTeamNum; // 0x4
	TArray<int32_t> PlayerElimIds; // 0x8
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FKSClientShotInfo {
	FVector FiringLocation; // 0x0
	int32_t UniqueId; // 0xc
	float FadeTime; // 0x10
	EKSPingType PingType; // 0x14
};

struct FPreviewActorPropSkinInfo {
	UKSItem* Prop; // 0x0
	bool bIsSet; // 0x8
	UKSItem* LastSetSkin; // 0x10
	UKSItem* ActiveSkin; // 0x18
	UKSItem* PendingSkin; // 0x30
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FKSInputActionKey {
	FKey Key; // 0x0
	EKSInputActionType Type; // 0x18
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

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FProviderPollResult {
	FString Name; // 0x10
	FString MachineName; // 0x20
	double MachineTimeOffset; // 0x30
};

struct FCompressedShotgunHitData {
	UKSWeaponAsset_Shotgun* ShotgunAsset; // 0x0
	uint64_t CompressedHitResults; // 0x8
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FPlayerMatchStatInfo {
	EPlayerStatType StatType; // 0x0
	float StatValue; // 0x4
	int32_t StatPlaceTeam; // 0x8
	int32_t StatPlaceAll; // 0xc
};

struct FCashCollectionEventRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	FLocationRecord Location; // 0x8
	FString Timestamp; // 0x18
	int32_t Amount; // 0x28
};

struct FJobSelectDraftingTask {
	EJobSelectDraftingTaskType TaskyType; // 0x0
	int32_t TeamNum; // 0x4
	float TimeLimit; // 0x8
	bool bHalting; // 0xc
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
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

struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate {
	FLiveLinkSubjectPreset SubjectPreset; // 0x48
	TArray<bool> ChannelMask; // 0x80
	TArray<FLiveLinkSubSectionData> SubSectionsData; // 0x90
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FKSSpawnSelectorTreeNode {
	FKSSpawnSelectorTier SelectorTier; // 0x0
	UKSSpawnSelectorTierBranch* SelectorTierBranch; // 0x20
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x0
	char bLimitToOwner : 1; // 0x4
	EMaxConcurrentResolutionRule ResolutionRule; // 0x8
	float VolumeScale; // 0xc
	float VolumeScaleAttackTime; // 0x10
	char bVolumeScaleCanRelease : 1; // 0x14
	float VolumeScaleReleaseTime; // 0x18
	float VoiceStealReleaseTime; // 0x1c
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FPendingCosmeticInfo {
	char Slot; // 0x0
	UKSWeaponAttachment* DesiredAttachment; // 0x8
	FKSEquipmentId AttachmentId; // 0x10
	UKSWeaponAttachmentCosmeticInst* CosmeticInstance; // 0x18
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FDeferredViewTargetChangeInfo {
	AActor* OldTarget; // 0x0
	AActor* NewTarget; // 0x8
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xa8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0
	TArray<float> PerInstanceSMCustomData; // 0x100
	int32_t InstancingRandomSeed; // 0x130
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FWeaponUseSummaryRecord {
	int32_t ue_player_id; // 0x0
	int32_t hz_player_id; // 0x4
	int32_t weapon_id; // 0x8
	FString weapon_name; // 0x10
	FString item_type_name; // 0x20
	int32_t weapon_category_type_value; // 0x30
	EKSWeaponCategoryType weapon_category_type_name; // 0x34
	int32_t weapon_slot_type_value; // 0x38
	EWeaponSlotType weapon_slot_type_name; // 0x3c
	bool is_accuracy_weapon; // 0x3d
	int32_t shots_fired; // 0x40
	int32_t shots_hit; // 0x44
	int32_t head_shots; // 0x48
	int32_t non_head_shots; // 0x4c
	float average_shots_hit_distance; // 0x50
	float average_head_shots_distance; // 0x54
	float average_non_head_shots_distance; // 0x58
	int32_t bad_distances; // 0x5c
	int32_t missing_instigators; // 0x60
	TArray<int32_t> character_aim_modes; // 0x68
	int32_t shots_hit_aiming_down_sights; // 0x78
	int32_t shots_hit_aiming_over_the_shoulder; // 0x7c
	int32_t shots_hit_aiming_alternate; // 0x80
	int32_t shots_hit_aiming_default; // 0x84
	int32_t accumulated_damage; // 0x88
	int32_t accumulated_self_damage; // 0x8c
	int32_t accumulated_friendly_damage; // 0x90
	int32_t accumulated_reverse_friendly_damage; // 0x94
	float AccumulatingDamage; // 0x98
	float AccumulatingSelfDamage; // 0x9c
	float AccumulatingFriendlyDamage; // 0xa0
	float AccumulatingReverseFriendlyDamage; // 0xa4
};

struct FActiveCameraShakeInfo {
	UCameraShake* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FKSRepossessState {
	bool bPendingRepossess; // 0x0
	int32_t LockID; // 0x4
	FRotator ReturnToRotation; // 0x8
	bool bReturnCrouched; // 0x14
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x20
	TArray<float> DesiredAlphas; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x50
	bool bAdditiveNode; // 0x58
	bool bNormalizeAlpha; // 0x59
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

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FAnimNode_AimOffsetSkinned : FAnimNode_RotationOffsetBlendSpace {
	FName SkinKeyword; // 0x198
	UBlendSpaceBase* TargetBlendSpace; // 0x1a0
	UBlendSpaceBase* DefaultBlendSpace; // 0x1a8
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FSolverIterations {
	int32_t SolverIterations; // 0x0
	int32_t JointIterations; // 0x4
	int32_t CollisionIterations; // 0x8
	int32_t SolverPushOutIterations; // 0xc
	int32_t JointPushOutIterations; // 0x10
	int32_t CollisionPushOutIterations; // 0x14
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FNiagaraSystemScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bCullByDistance : 1; // 0x20
	char bCullMaxInstanceCount : 1; // 0x20
	char bCullByMaxTimeWithoutRender : 1; // 0x20
	float MaxDistance; // 0x24
	float MaxInstances; // 0x28
	float MaxTimeWithoutRender; // 0x2c
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FAcquisitionHeaderOverrides : FTableRowBase {
	FText Header; // 0x8
	TArray<int32_t> LootTableItemIds; // 0x20
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

