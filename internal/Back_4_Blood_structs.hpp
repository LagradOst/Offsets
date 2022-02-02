// Created by BlueFire1337
// Updated 2022-01-13
// Generated 2022-02-02

#pragma once

struct FAIPathPredictionValidation {
	float MaxTrajectorySimTime; // 0x0
	float MinimumRetryDelay; // 0x4
	bool bValidateOnCurrentEnemyHit; // 0xd
	FVector DesiredSurfaceNormal; // 0x10
	float AcceptableAngleDegrees; // 0x1c
	bool bRequireNavMeshToLand; // 0x20
	float NavMeshToleranceXY; // 0x24
	float NavMeshToleranceZ; // 0x28
	UNavigationQueryFilter* NavFilter; // 0x30
};

struct FGameplayCardUIData {
	FText Name; // 0x0
	FSlateColor Color; // 0x18
	UTexture2D* Icon; // 0x48
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FUnlockStartingLocationCommand : FPlayerProfileCommand {
	FName MapSlug; // 0x8
	EMissionDifficulty Difficulty; // 0x10
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FMeshRenderingOverrides {
	bool bRenderCustomDepthPass; // 0x0
	EMeshBoolApplicationType HiddenInGame; // 0x1
	EMeshBoolApplicationType Visible; // 0x2
	EMeshBoolApplicationType OwnerNoSee; // 0x3
	EMeshBoolApplicationType OnlyOwnerSee; // 0x4
	EMeshBoolApplicationType OverrideLODSettings; // 0x5
	int32_t ForceLODLevel; // 0x8
	int32_t MinLODLevel; // 0xc
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FPopupButton {
	EPopupButton Type; // 0x0
	FText Text; // 0x8
	FName Command; // 0x20
};

struct FFirstPersonAdditiveState {
	float AdditiveAnimationWeight; // 0x0
	float ForwardMoveSpeed; // 0x4
	float SidewaysMoveSpeed; // 0x8
	float HipFiringNoiseWeight; // 0xc
	float ADSFiringNoiseWeight; // 0x10
	float AdditiveIdleWeight; // 0x14
	float AdditiveWalkWeight; // 0x18
	float CrouchOffsetWeight; // 0x1c
	float CrouchExitWeight; // 0x20
	float SprintAimOffsetWeight; // 0x24
	float WalkAdditivePlayRate; // 0x28
	float AdjustedADSBlendPercent; // 0x2c
	float OneMinusAdjustedADSBlendPercent; // 0x30
	float JumpBaseWeight; // 0x34
	float JumpLandWeight; // 0x38
	bool bWantsFiringAdditives; // 0x3c
	bool bIsMovingBackwards; // 0x3d
	float TurnInPlaceWeight; // 0x40
	float TurnInPlacePlayRate; // 0x44
	float SwayYawTurnSpeed; // 0x48
	float SwayPitchTurnSpeed; // 0x4c
	float ADSLookSwayWeight; // 0x50
};

struct FWebServiceSessionAddRemoveParticipants {
	TArray<FWebServiceSessionAddRemoveParticipant> Participants; // 0x0
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FChallengeRankReward {
	int32_t SupplyPoints; // 0x0
	TArray<FDataTableRowHandle> Products; // 0x8
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FMovementSpeedStance {
	FGameplayTagQuery TagQuery; // 0x0
	FVector BaseMoveSpeed; // 0x48
	FVector MinBaseMoveSpeed; // 0x54
	bool bUseRandomSpeed; // 0x60
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
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

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FPlayerViewConfig {
	FGameplayTag CameraTag; // 0x0
	FGameplayTag SpringArmTag; // 0x8
	FGameplayTag MeshTag; // 0x10
	bool bUpdatesArmorView; // 0x18
};

struct FPvPEventData {
	float ExpiryTime; // 0x0
	TWeakObjectPtr<UGobiUserWidget> EntryWidget; // 0x4
	FTimerHandle TimerHandle; // 0x10
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

struct FLOSTrace {
	AActor* LOSOwner; // 0x0
};

struct FSteeringBehaviorChild {
	float Weight; // 0x0
	USteeringBehavior* SteeringBehavior; // 0x8
};

struct FGameplayEval_HasHeroTeammate : FGameplayEval {
	FDataTableRowHandle HeroTeammate; // 0x48
};

struct FBoneChain {
	FName EffectorBone; // 0x0
	FName RootBone; // 0x8
	TArray<FWeightPerBone> BlendWeights; // 0x10
	FRotator PerAxisAlignmentScale; // 0x20
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FAITraceData {
	float ExtentX; // 0x0
	float ExtentY; // 0x4
	float ExtentZ; // 0x8
	ETraceTypeQuery TraceChannel; // 0xc
	EAITraceShape TraceShape; // 0xd
	char bTraceComplex : 1; // 0x10
};

struct FWeakSpotAttachment : FWeakSpot {
	UStaticMesh* StaticMesh; // 0xf0
	bool bMeshIsVisible; // 0xf8
	FName SocketName; // 0xfc
	FTransform RelativeTransform; // 0x110
	bool bOffsetWhenDamaged; // 0x140
	FVector MaxOffsetWhenDamaged; // 0x144
	float WeakSpotDuration; // 0x150
	FName CollisionProfileName; // 0x154
	bool bGeneratesOverlapEvents; // 0x15c
	float ElapsedTime; // 0x160
	UStaticMeshComponent* StaticMeshComponent; // 0x168
	FWeakSpotAttachmentTuning WeakSpotAttachmentTuning; // 0x170
};

struct FMatchmakingReconnectSettings {
	FString PrimaryUserId; // 0x0
	int32_t PrimaryUserNonce; // 0x10
	FString SecondaryUserId; // 0x18
	int32_t SecondaryUserNonce; // 0x28
	FDateTime Timestamp; // 0x30
	FGameSessionBackfillData Game; // 0x38
	FString Team; // 0x58
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x20
	float SpawnCountScale; // 0x24
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FAISpawnActorVariantDefinition {
	AAISpawnActor* Class; // 0x0
	float Weight; // 0x8
	bool bNeedsWall; // 0xc
	bool bRequiresPreplacedSpawnActor; // 0xd
	float WallStartMax; // 0x10
	float WallEndMin; // 0x14
	FGameplayTagContainer CardTags; // 0x18
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

struct FSupplyPoints {
	int32_t BalanceFromInventory; // 0x0
	int32_t Acquired; // 0x4
	int32_t Spent; // 0x8
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FCaravanInstance {
	int32_t ID; // 0x0
	FDataTableRowHandle Schema; // 0x8
	FDataTableRowHandle Merchant; // 0x28
	TArray<FCaravanItem> Items; // 0x48
	int64_t Expiry; // 0x58
	int32_t Changelist; // 0x60
	int32_t Version; // 0x64
};

struct FStackableDamageFilter {
	UDamageFilter* DamageFilter; // 0x0
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FLookAtInfo {
	FName AlphaCurveName; // 0x0
	FRotationConstraints Constraints; // 0x8
	FVector LookAtLocation; // 0x18
	float AlphaCurve; // 0x24
	bool bHasLookAtTarget; // 0x28
	bool bShouldLookAtTarget; // 0x29
	float CounterRotation; // 0x2c
	float LastYaw; // 0x30
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FTaskTimerConfig {
	FString Name; // 0x0
	FTaskTimerRange Seconds; // 0x10
	FTaskTimerRange AltSeconds; // 0x20
	FTaskTimerRange BackoffStartSeconds; // 0x30
	FTaskTimerRange BackoffAdditionalSeconds; // 0x40
	FTaskTimerRange BackoffMultiplier; // 0x50
	FTaskTimerRange BackoffMaxSeconds; // 0x60
};

struct FRepContextRotation {
	UGameplayContext* Context; // 0x0
	FRotator Rotation; // 0x8
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x18
	FGuid ExpressionGUID; // 0x20
};

struct FAgoraHydraLeaderboardAlternateIdentity {
	FString ID; // 0x0
	FString Username; // 0x10
};

struct FHealInfo {
	float Health; // 0x0
	float PermanentHealth; // 0x4
	UHealthComponent* HealthComponent; // 0x8
	FGameplayEffectSource EffectSource; // 0x10
};

struct FComponentLookup {
	EComponentLookupMode LookupMode; // 0x0
	FGameplayTag LookupGameplayTag; // 0x4
	FName LookupComponentTag; // 0xc
	FComponentReference LookupComponentReference; // 0x18
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

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
};

struct FRattleBehaviorContainer {
	FRattleEmitterInfo Behavior; // 0x0
	TSet<TSoftObjectPtr<UStaticMesh>> RattleMeshes; // 0x40
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

struct FZombieMovementForce {
	FVector StartLocation; // 0x0
	FVector Direction; // 0xc
	float RemainingTime; // 0x18
};

struct FBotCombatHealthInfo {
	float HealthAlertPctSelfOOC; // 0x0
	float HealthAlertPctTeamOOC; // 0x4
	float HealthAlertPctSelfInCombat; // 0x8
	float HealthAlertPctTeamInCombat; // 0xc
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FPlayerProfileReconciliationTimestamps {
	int64_t RecentCharacters; // 0x0
	int64_t BadgeData; // 0x8
	int64_t SprayData; // 0x10
	int64_t AppliedWeaponSkins; // 0x18
	int64_t EquippedCharacterCustomizationSets; // 0x20
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FAssetLookupFloatEntry {
	FGameplayTag Tag; // 0x0
	float Value; // 0x8
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FMeleeMoveForceParameters {
	float LaunchSpeed; // 0x0
	float Duration; // 0x4
	float GravityScalar; // 0x8
	UCurveFloat* StrengthCurve; // 0x10
};

struct FTooltipPerk {
	FDataTableRowHandle PerkRow; // 0x0
	EItemComparison Comparison; // 0x20
};

struct FNavLinkOffset {
	FVector Left; // 0x0
	FVector Right; // 0xc
	ENavLinkDirection Direction; // 0x18
	FNavAgentSelector SupportedAgents; // 0x1c
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FItemAttributeModifier {
	EItemAttributeType AttributeType; // 0x0
	float ModifierValue; // 0x4
	bool bRequireItemCategory; // 0x8
	bool bRequireItemAffintity; // 0x9
	EItemCategory RequiredItemCategory; // 0xa
	EGameplayCardAffinity RequiredItemAffinity; // 0xb
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FWanderBucketInitialDensityLevelByDifficultyEntry {
	EMissionDifficulty Difficulty; // 0x0
	EWanderBucketDensityLevel DensityLevel; // 0x1
};

struct FTableRowStyle : FSlateWidgetStyle {
	FSlateBrush SelectorFocusedBrush; // 0x8
	FSlateBrush ActiveHoveredBrush; // 0x98
	FSlateBrush ActiveBrush; // 0x128
	FSlateBrush InactiveHoveredBrush; // 0x1b8
	FSlateBrush InactiveBrush; // 0x248
	FSlateBrush EvenRowBackgroundHoveredBrush; // 0x2d8
	FSlateBrush EvenRowBackgroundBrush; // 0x368
	FSlateBrush OddRowBackgroundHoveredBrush; // 0x3f8
	FSlateBrush OddRowBackgroundBrush; // 0x488
	FSlateColor TextColor; // 0x518
	FSlateColor SelectedTextColor; // 0x548
	FSlateBrush DropIndicator_Above; // 0x578
	FSlateBrush DropIndicator_Onto; // 0x608
	FSlateBrush DropIndicator_Below; // 0x698
	FSlateSound HoveredSlateSound; // 0x728
	FSlateBrush ActiveHighlightedBrush; // 0x740
	FSlateBrush InactiveHighlightedBrush; // 0x7d0
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FPoolFilterData {
	FString Key; // 0x0
	TArray<FString> Values; // 0x10
};

struct FLOSActor : FLOSActorBase {
	AActor* LOSOwner; // 0x30
};

struct FInteractiveCarAlarmMaterialParams {
	float AlarmMaterialIntensityIdle; // 0x0
	float AlarmMaterialIntensityActive; // 0x4
	FComponentReference MeshComponent; // 0x8
	FName AlarmMaterialSlotName; // 0x30
	FName AlarmMaterialParamName; // 0x38
	UMaterialInstanceDynamic* AlarmMaterialInstance; // 0x40
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
};

struct FPlayerProfileTableRedirectionRow : FTableRowBase {
	FName TablePath; // 0x8
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FMatchmakingGameModeTelemetry {
	FString GameMode; // 0x0
	int32_t QueueType; // 0x10
	FMatchmakingQueueTelemetry Data; // 0x18
};

struct FHealthRange {
	FString HealthLabel; // 0x0
	float HealthMin; // 0x10
	float HealthMax; // 0x14
};

struct FClassPool {
	UObject* ObjectClass; // 0x0
	TArray<UObject*> ActiveList; // 0x8
	TArray<UObject*> FreeList; // 0x18
};

struct FCardStreamingVolumes {
	TArray<ALevelStreamingVolume*> ExistStreamingLevelVolumes; // 0x0
	TArray<ALevelStreamingVolume*> MissingStreamingLevelVolumes; // 0x10
	FName Key; // 0x20
};

struct FDamageAccumulationConfig {
	FVector2D DamageFullAmount; // 0x0
	bool bDecayOverTime; // 0x8
	float DecaySpeed; // 0xc
	float DamageResetTime; // 0x10
	float ImmunityTime; // 0x14
	bool bUseStumbleRanges; // 0x18
	TArray<FStumbleInflictTypeRange> InflictDamageTypes; // 0x20
	float MaxStumbleAccumAge; // 0x30
	bool bCalculateStumbleAverage; // 0x34
	UGobiDamageType* InflictDamageType; // 0x38
	TArray<UGameplayEffect*> Effects; // 0x40
	float InflictDamage; // 0x50
};

struct FAISpawnEval_Difficulty : FAISpawnEval {
	EMissionDifficulty Difficulty; // 0x40
	ECompareOp Op; // 0x41
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FScoreboardPlayerData {
	APlayerSlot* PlayerSlot; // 0x0
	bool bIsPendingPlayer; // 0x8
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
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

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FGobiSessionUser {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
	FGobiSessionUserData UserData; // 0x28
	EMatchmakingTeam Team; // 0xb0
};

struct FGameplayEval_RandomChanceByTag : FGameplayEval {
	UAnimContext_Actor* Actor; // 0x48
	TMap<FGameplayTag, float> TagChanceMap; // 0x50
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FActivePerk {
	FDataTableRowHandle PerkRow; // 0x0
	char PermanentCount; // 0x20
	char SelectedItemCount; // 0x21
	char TempCount; // 0x22
	float ExpirationTime; // 0x24
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0xb8
	uint32_t PaddedParameterSize; // 0xbc
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xc0
	char bInitialized : 1; // 0xd0
};

struct FADSTuning {
	float ADSEnterLength; // 0x0
	float ADSExitLength; // 0x4
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
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

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
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

struct FAISpawnEval_GrowingChanceByDifficulty : FAISpawnEval {
	TArray<FGrowingChanceByDifficulty> ChancePerThreatLevel; // 0x40
	bool bReroll; // 0x50
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FTaskEvent {
	FName EventName; // 0x0
	float EventWindowTime; // 0x8
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FGobiGameCoachEval_BotHealth : FGobiGameCoachEval {
	float TestHealthPercent; // 0x48
	bool bCheckTempHealth; // 0x4c
	ECompareOp CompareOperation; // 0x4d
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

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FReplicatedMontageData {
	float Position; // 0x0
	float PlayRate; // 0x4
	float BlendOutTime; // 0x8
	char MontageId; // 0xc
	int8_t SectionId; // 0xd
	int8_t NextSectionId; // 0xe
	char Parity; // 0xf
	bool bPlayLinkedMontage; // 0x10
};

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x98
	FSlateBrush ActiveFillBrush; // 0x128
	FSlateBrush InactiveFillBrush; // 0x1b8
	FSlateBrush ArrowsImage; // 0x248
	FSlateColor ForegroundColor; // 0x2d8
	FMargin TextPadding; // 0x308
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

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FFireModeShotgunTuning {
	int32_t PelletCount; // 0x0
	float StumbleDamagePerDamage; // 0x4
	TArray<FRangedFalloffDamageSet> InitialHitRangedFalloffDamageSets; // 0x8
	TArray<FRangedFalloffDamageSet> PerPelletRangedFalloffDamageSets; // 0x18
};

struct FGameplayEval_Speed : FGameplayEval {
	float IdealSpeed; // 0x48
	float MaxSpeedRange; // 0x4c
	EDimension TestMode; // 0x50
	UAnimContext_Actor* Actor; // 0x58
};

struct FTargetingReticleTuning {
	float MaxTargetDistance2D; // 0x0
	float TargetDistanceWeight; // 0x4
	float MaxTargetDistanceZ; // 0x8
	float MaxTargetAngle; // 0xc
	float TargetAngleWeight; // 0x10
	float MaxLockedOnCharacterDistance2D; // 0x14
	float MaxLockedOnCharacterDistanceZ; // 0x18
	float MinReticleFeetZDistance; // 0x1c
	float MinReticleHeadDistance; // 0x20
};

struct FDoorAlarmAudio {
	UAkAudioEvent* AlarmLoop; // 0x0
	UAkAudioEvent* AlarmLoopStop; // 0x8
	UAkAudioEvent* AlarmBeepSound; // 0x10
	float AlarmBeepRate; // 0x18
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

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FBotAwarenessConfig {
	float PerceptionModSight; // 0x0
	float ItemPickupSearchDist; // 0x4
	FBotPingConfig PingConfig; // 0x8
	float UsableSearchDist; // 0x198
	FGameplayTagContainer UsableActorTags; // 0x1a0
	FGameplayTagContainer UsableActorInCombatTags; // 0x1c0
	float UsableActorInCombatTimeLimit; // 0x1e0
	FGameplayTagContainer UsableActorIgnoresLoSTags; // 0x1e8
	FGameplayTagQuery AssistRescueTagQuery; // 0x208
	FGameplayTagQuery AssistGrappledTagQuery; // 0x250
	float AssistBaseTeammateScore; // 0x298
	float AssistLedgeHangScore; // 0x29c
	float AssistIncappedScore; // 0x2a0
	float AssistDeadScore; // 0x2a4
	float AssistRescueScore; // 0x2a8
	float AssistFallbackTime; // 0x2ac
	FGobiWorldProbeConfig GobiWorldProbeCfg; // 0x2b0
};

struct FAISpawnCardRule {
	UAISpawnCard* SpawnCard; // 0x0
	int32_t MinCards; // 0x8
	int32_t MaxCards; // 0xc
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FVendorStockItem {
	FDataTableRowHandle ItemHandle; // 0x0
	TArray<FDataTableRowHandle> Attachments; // 0x20
	FDataTableRowHandle CardHandle; // 0x30
	FVendorPsuedoItem PsuedoItem; // 0x50
	float Discount; // 0xa8
	int32_t RemainingStock; // 0xac
};

struct FWoundData {
	FGameplayTagQuery MutilationTagRequirements; // 0x0
	FGameplayTagContainer SkelMeshMasterCompTags; // 0x48
	FGameplayTagContainer UnhideSkelMeshCompTags; // 0x68
	bool bRupture; // 0x88
	EMutilationRegion Region; // 0x89
	bool bDismember; // 0x8a
	bool bUseImpactLocation; // 0x8b
	TArray<UTexture*> WoundTextures; // 0x90
	float GrowSizeTime; // 0xa0
	float StartSizePct; // 0xa4
	FTransform Transform; // 0xb0
	bool bStartOn; // 0xe0
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
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

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
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

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x8
};

struct FGameplayEffectSource {
	UActorComponent* InstigatingComponent; // 0x0
	AActor* InstigatingActor; // 0x8
	AActor* InstigatingItem; // 0x10
	APawn* InstigatingPawn; // 0x18
	AController* InstigatingController; // 0x20
	FVector SourceLocationOverride; // 0x28
};

struct FGameplayEval_LeapVelocityPitch : FGameplayEval {
	float IdealPitch; // 0x48
	float MaxPitchFromIdealPitch; // 0x4c
};

struct FPinProjectileConfig {
	float MinTimeBeforePinCancel; // 0x0
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FDeathGasSpawnTuning : FTuningDataBase {
	float Cooldown; // 0x8
	float StartingRadius; // 0xc
	float EndingRadius; // 0x10
	float TransitionTime; // 0x14
	float WarmupTime; // 0x18
	float Duration; // 0x1c
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FColorBlindGroup {
	TArray<FColorBlindEntry> Entries; // 0x0
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FAssetLookupNameEntry {
	FGameplayTag Tag; // 0x0
	FName Name; // 0x8
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FClingConfig {
	TArray<UAnimMontage*> LeapToClingLocationMontages; // 0x0
	TArray<UAnimMontage*> LeapLandClingLocationMontages; // 0x10
	TArray<UAnimMontage*> LeapOffClingLocationMontages; // 0x20
	TArray<UAnimMontage*> PerchTurnInPlaceMontages; // 0x30
	float DistanceToAttachToClingLocation; // 0x40
	int32_t CanAttach; // 0x44
	int32_t CanAttachWhileIdle; // 0x48
	TArray<UGameplayEffect*> ApplyClingingEffects; // 0x50
	TArray<UGameplayEffect*> ApplyMovingEffects; // 0x60
	FGameplayTagContainer AppliedTags; // 0x70
	FGameplayTagContainer BlockingTags; // 0x90
	FGameplayTagContainer BlockingMovingTags; // 0xb0
	FGameplayTagQuery CancelTags; // 0xd0
	FGameplayTagContainer JumpOffTags; // 0x118
	float CrawlVolumeDistanceThreshold; // 0x138
	float PoleTurnSpeed; // 0x13c
	float ClingCrawlSpeed; // 0x140
	float PerchMoveSpeed; // 0x144
	FVector2D PerchMoveDelay; // 0x148
	float PerchTurnAngleThreshold; // 0x150
	bool bCanMoveOnWalls; // 0x154
	bool bCanMoveWhilePerched; // 0x155
	bool bCanMoveOnPoles; // 0x156
	float LeapSpeed; // 0x158
	float GravityScalar; // 0x15c
	float TargetOffset; // 0x160
	bool bLeapToClingUsesMotionCorrection; // 0x164
};

struct FBehindCamera {
	bool bBehindReducesQuality; // 0x0
	bool bBehindCanCull; // 0x1
	EBehindCamera BehindFilter; // 0x2
	float MinDistance; // 0x4
};

struct FWebSocketSessionSendMessage {
	EWebSocketSessionSendMessage MessageType; // 0x0
	int64_t MessageNumber; // 0x8
};

struct FGameplayEval_IsHeroPreviousLifeState : FGameplayEval {
	FGameplayTag PreviousLifeState; // 0x48
};

struct FLifeStateMap {
	FGameplayTag LifeStateTag; // 0x0
	ULifeStateBase* LifeState; // 0x8
};

struct FMusicEventConfig : FTableRowBase {
	EMusicEventType Type; // 0x8
	ECharacterFilter CharacterFilter; // 0x9
	EMusicEventMood Mood; // 0xa
	EMusicEventIntensity Intensity; // 0xb
	float RelevancyTime; // 0xc
	bool bSuppressIfPVP; // 0x10
	UAkAudioEvent* AssociatedAudioEvent; // 0x18
	UAkAudioEvent* FirstPersonAudioEvent; // 0x20
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FAttachToActorInfo {
	AActor* AttachToActor; // 0x0
	FName BoneName; // 0x8
	FGameplayTag PrimitiveComponentTag; // 0x10
	FVector RelativeLocation; // 0x18
	FRotator RelativeRotation; // 0x24
	bool bTeleportToPreAttachedLocation; // 0x30
	bool bMoveToAttachLocation; // 0x31
	bool bRotationRelativeToBone; // 0x32
	bool bContinuousRotationUpdate; // 0x33
	bool bHiddenOnAttach; // 0x34
	bool bDisableDamageOnAttach; // 0x35
	bool bStopMovementOnDetach; // 0x36
	AActor* OwnerContextSource; // 0x40
	TArray<UGameplayEffect*> OwnerEffects; // 0x48
	AActor* AttachToActorContextSource; // 0x58
	TArray<UGameplayEffect*> AttachToActorEffects; // 0x60
};

struct FZombieMutationBranchRow {
	FText BranchName; // 0x0
	TArray<FDataTableRowHandle> Mutations; // 0x18
};

struct FGameplayCueData {
	FGameplayTag GameplayCueTag; // 0x0
	UGameplayCue* GameplayCue; // 0x8
};

struct FWebSocketSessionSendMessage_SetCrossPlayEnabled {
	bool CrossPlayEnabled; // 0x0
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FGameplayEval_GameplayTags : FGameplayEval {
	UAnimContext_Actor* Actor; // 0x48
	FGameplayTagQuery TagQuery; // 0x50
};

struct FMessageSet {
	FString english; // 0x0
	FString french; // 0x10
	FString german; // 0x20
	FString spanish; // 0x30
	FString korean; // 0x40
	FString chinese; // 0x50
};

struct FTeamSlots {
	EGobiTeam Team; // 0x0
	EMatchmakingTeam MatchmakingTeam; // 0x1
	TArray<APlayerSlot*> Slots; // 0x8
	UCharacterSelect* CharacterSelect; // 0x18
};

struct FActionToCheck {
	FAIDataProviderGameplayTagContainerValue ActionTags; // 0x0
	FBlackboardKeySelector BlackboardKey; // 0x50
	int32_t Options; // 0x78
};

struct FDialogueEventConfig {
	float RelevancyDuration; // 0x0
	int32_t Priority; // 0x4
	bool bFilterOnlyInstigator; // 0x8
	bool bFlushQueue; // 0x9
	bool bInterrupt; // 0xa
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FMatchmakingUIBucket {
	FString Name; // 0x0
	FString DisplayName; // 0x10
};

struct FEquippedCharacterCustomizationSetCollectionJson {
	TArray<FEquippedCharacterCustomizationSetJson> AppliedCharacterCustomizationSets; // 0x0
};

struct FGobiOnlineUserSession {
	FString SessionId; // 0x0
	FString SessionCluster; // 0x10
	EMatchmakingTeam Team; // 0x20
	int32_t NumHeros; // 0x24
	int32_t NumZombies; // 0x28
	int32_t NumUsers; // 0x2c
	ESessionPrivacy Privacy; // 0x30
};

struct FAimRotationInfo {
	float TurnSpeed; // 0x0
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	bool bRandomStartPosition; // 0x10
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x18
	bool bShuffleMode; // 0x88
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FTitanTentacleAttackIndividual {
	ETitanTentacleId TentacleId; // 0x0
	float AttackAngleMin; // 0x4
	float AttackAngleMax; // 0x8
	FName BaseBone; // 0xc
	UBlendSpace1D* SmashTellBlendSpace; // 0x18
	UBlendSpace1D* SmashAttackBlendSpace; // 0x20
	UAnimSequence* SwipeTellAnimSequence; // 0x28
	UAnimSequence* SwipeAttackAnimSequence; // 0x30
};

struct FBotItemUpgradeConfig {
	bool bAllowUpgradeItems; // 0x0
	UGameplayEvaluatorSet* FilterSetClasses[0x7]; // 0x8
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

struct FGameplayEval_DamageWeakSpot : FGameplayEval {
	EPhysicalSurface WeakSpotSurface; // 0x48
	bool bWeakSpotDestroyed; // 0x49
	UAnimContext_DamageInfo* DamageInfo; // 0x50
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FMeshConfigCombination {
	TArray<UMeshMaterialParamSet*> MaterialParamSets; // 0x18
	TArray<FSkeletalMeshPiece> DismembermentPieces; // 0x28
	UMaterialInterface* InnerMeshMaterial; // 0x38
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FHagAnimState {
	EHagState HagState; // 0x0
	EHagLocomotionState LocomotionState; // 0x1
};

struct FMeshMaterialParamValuesSet {
	TArray<FMeshMaterialParamValue> ParamValues; // 0x0
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x48
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FNiagaraTestStructInner {
	FVector InnerVector1; // 0x0
	FVector InnerVector2; // 0xc
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float ExplicitTime; // 0x38
	bool bShouldLoop; // 0x3c
	bool bTeleportToExplicitTime; // 0x3d
	ESequenceEvalReinit ReinitializationBehavior; // 0x3e
	float StartPosition; // 0x40
};

struct FVectorParameterBehavior {
	FLinearColor Value; // 0x0
	UCurveLinearColor* VectorCurve; // 0x10
	bool bPlayCurveReversed; // 0x18
};

struct FGameplayTagSet {
	FGameplayTagQuery PrereqTags; // 0x0
	TArray<FGameplayTagWeight> TagList; // 0x48
	float Weight; // 0x58
};

struct FWeakSpotHitGameplayTag {
	float HealthPctThreshold; // 0x0
	FGameplayTag Tag; // 0x4
};

struct FAIDataProviderTraceDataValue : FAIDataProviderStructValue {
	FAITraceData DefaultValue; // 0x30
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x888
};

struct FGameplayEval_HitReactionBone : FGameplayEval {
	FName HitBoneBelow; // 0x48
	TSet<FName> HitBonesBelow; // 0x50
	bool bIncludeBonesBelow; // 0xa0
	UAnimContext_HitReactionInfo* HitReaction; // 0xa8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FWeaponCustomizationRow : FTableRowBase {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	EItemQuality Quality; // 0x38
	EWeaponCustomizationType Type; // 0x39
	FRotator CustomizationViewRotationOffset; // 0x3c
	UAkAudioEvent* EquipSound; // 0x48
	TMap<FName, TSoftObjectPtr<UMaterialInterface>> FirstPersonSkinDefinition; // 0x50
	bool bUseUniqueThirdPersonDefinition; // 0xa0
	TMap<FName, TSoftObjectPtr<UMaterialInterface>> ThirdPersonSkinDefinition; // 0xa8
	TSoftObjectPtr<USkeletalMesh> FirstPersonMesh; // 0xf8
	bool bUseThirdPersonSkeletalMesh; // 0x120
	TSoftObjectPtr<UStaticMesh> ThirdPersonMesh; // 0x128
	TSoftObjectPtr<USkeletalMesh> ThirdPersonSkeletalMesh; // 0x150
};

struct FProjectileThrowReticleTypeEntry {
	EProjectileThrowReticleType Type; // 0x0
	AGobiReticle* Reticle; // 0x8
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

struct FCustomDataProviderAkAudioEvent : FCustomDataProvider {
	UAkAudioEvent* Value; // 0x8
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FWallGrabMoveTickData {
	EWallGrabState CurrentState; // 0x0
	FRotator GrabRotation; // 0x10
};

struct FPerPlatformFloat {
	float Default; // 0x0
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

struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	FMovieSceneEvaluationOperand Operand; // 0x8
};

struct FDialogueResponseVariantRow : FTableRowBase {
	FDialogueResponseVariation ResponseVariant; // 0x8
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x48
};

struct FAOEAttackTuning : FTuningDataBase {
	float Cooldown; // 0x8
	int32_t LoopCount; // 0xc
	float AOERadius; // 0x10
	float AOEHalfHeight; // 0x14
	float AOEZOffset; // 0x18
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalToTrackingTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FNiagaraFloat {
	float Value; // 0x0
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

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FProfileCaravanData {
	TArray<FCaravanInstance> Caravans; // 0x0
};

struct FInventoryLoadout {
	TArray<FItemRowAndQuantity> Items; // 0x0
	int32_t Currency; // 0x10
	int32_t AmmoReserves[0x7]; // 0x14
	bool bClearExistingLoadout; // 0x30
};

struct FSpreadTuning {
	FSpreadDef HipSpreadDef; // 0x0
	FSpreadDef ADSSpreadDef; // 0x28
	float StandingFiringSpreadDecayRate; // 0x50
	float StandingMovingSpreadDecayRate; // 0x54
	float CrouchedFiringSpreadDecayRate; // 0x58
	float CrouchedMovingSpreadDecayRate; // 0x5c
};

struct FFlatMissionObjective : FTableRowBase {
	FDataTableRowHandle OwningMission; // 0x8
	UTexture2D* WaypointIcon; // 0x28
	FText ObjectiveDisplayFormat; // 0x30
	int32_t InitialCount; // 0x48
	int32_t FinalCount; // 0x4c
	float TimerStart; // 0x50
	float TimerEnd; // 0x54
	bool TimerEndFailsObjective; // 0x58
	bool TimerStartsPaused; // 0x59
	bool AutoComplete; // 0x5a
	bool Optional; // 0x5b
	bool ShowInHUDObjectiveList; // 0x5c
	bool ShowInHUDMissionTip; // 0x5d
	bool HideWhenCompleted; // 0x5e
	UTexture2D* HUDMissionTipIcon; // 0x60
	UTexture2D* ObjectiveIconOverride; // 0x68
	FSlateColor ObjectiveColorOverride; // 0x70
	int32_t SupplyPointReward; // 0xa0
	TArray<FItemRowAndQuantity> Rewards; // 0xa8
	TArray<FDataTableRowHandle> PrereqObjectives; // 0xb8
	FDataTableRowHandle ObjectiveStartDialogue; // 0xc8
	FDataTableRowHandle ObjectiveEndDialogue; // 0xe8
	TMap<EObjectiveState, UAkAudioEvent*> StateToAudioEvent; // 0x108
	TMap<int32_t, FDataTableRowHandle> ObjectiveHintDialogue; // 0x158
	TMap<int32_t, FDataTableRowHandle> ObjectiveCountDialogue; // 0x1a8
	bool ShowWaypointWhenCompleted; // 0x1f8
	bool bDisableDuringChunkInstall; // 0x1f9
};

struct FGameplayEval_CanUseUsable : FGameplayEval {
	UGameplayContext_UsableComponent* Usable; // 0x48
};

struct FImpactOverrideQuality {
	int32_t ImpactsPerFrameMax; // 0x0
	bool bImpactsPerFrameIsPerMaterial; // 0x4
	int32_t AudioListsPerFrameMax; // 0x8
};

struct FLeapTuning : FTuningDataBase {
	float GravityScalar; // 0x8
	float TargetOffset; // 0xc
	float LeapSpeed; // 0x10
	float PredictiveAimingScalar; // 0x14
	float MinTargetLocationChangeForPredicitveAiming; // 0x18
	bool bPredictPath; // 0x1c
	FAIPathPredictionValidation AIPathPredictionValidation; // 0x20
	FLeapSteerData SteerData; // 0x60
	TArray<UAnimMontage*> LeapMontages; // 0xa8
	TArray<UAnimMontage*> LeapLandMontages; // 0xb8
	FGameplayTagContainer AppliedTags; // 0xc8
	FGameplayTagContainer AppliedCookingTags; // 0xe8
	FGameplayTagContainer AppliedLeapingTags; // 0x108
	FGameplayTagContainer BlockingTags; // 0x128
	FGameplayTagQuery CancelTags; // 0x148
	FGameplayTagContainer CooldownTags; // 0x190
	float Cooldown; // 0x1b0
	float MinCookTime; // 0x1b4
	UCurveFloat* SpeedMultiplierCurve; // 0x1b8
	TArray<UGameplayEffectEmitterComponent*> OnLandEmitters; // 0x1c0
	FPlayerLeapTuning Player; // 0x1d0
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
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

struct FGameplayModContext {
	UObject* ContextObject; // 0x0
	APlayerSlot* CardOwner; // 0x8
	EGobiTeam TeamToApplyTo; // 0x10
	int32_t RandomSeed; // 0x14
	bool bIgnoreRandomChance; // 0x18
};

struct FCardNotification {
	FDataTableRowHandle CardRowHandle; // 0x0
	bool bWasApplied; // 0x20
	bool bDirectorCard; // 0x21
	int32_t Count; // 0x24
};

struct FMeshesConfig {
	TArray<FMeshConfig> Meshes; // 0x0
	TArray<UMeshMaterialSet*> MaterialSets; // 0x10
	TArray<UMeshMaterialParamSet*> MaterialParamSets; // 0x20
	FGameplayTagQuery TagRequirements; // 0x30
};

struct FGameplayEval_IsHeroLifeState : FGameplayEval {
	FGameplayTag LifeState; // 0x48
};

struct FItemAttachmentSlotInfo {
	FText NameOfSlotType; // 0x0
	FGameplayTagContainer SupportedTags; // 0x18
};

struct FSkeletalMeshSetMaterialOverride {
	UMeshMaterialSet* MaterialSet; // 0x0
	bool bDisabledMaterialParamSets; // 0x8
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FDialogueEval_CheckTargetLastDamagedBy : FDialogueEval {
	bool bIgnoreSelfDamage; // 0x48
	bool bCheckIfDamagedBySpeaker; // 0x49
	FGameplayTagQuery CharacterTags; // 0x50
	bool bDoSpeakerRowHandleCheck; // 0x98
	FDataTableRowHandle VoiceRowHandle; // 0xa0
	FGameplayTagContainer DamageTypeContainer; // 0xc0
};

struct FCampaignRunPlayerSlotData {
	FSlotIndex SlotIndex; // 0x0
	FDataTableRowHandle HeroRowHandle; // 0x8
	FCharacterCustomizationSet CustomizationSet; // 0x28
	FString OwnerId; // 0xb0
	int32_t Copper; // 0xc0
	bool bHasChosenLoadout; // 0xc4
	bool bNeedsQuickPlayCharacterTransfer; // 0xc5
	int32_t CharacterTransferOwedDraws; // 0xc8
	FRespawnSnapshot_Hero HeroRespawnSnapshot; // 0xd0
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FBuildEnvironmentConfigurationFile {
	uint32_t Ver; // 0x0
	FBuildEnvironmentConfigurationData Data; // 0x8
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

struct FHeroAnimData3P {
	FGobiAnimationCurveData RightHandIKCurve; // 0x0
	FGobiAnimationCurveData LeftHandIKCurve; // 0x10
	FGobiAnimationCurveData AdditiveAimOffsetCurve; // 0x20
	FGameplayTag RevivingIncapActionTag; // 0x30
	FGameplayTag PickingLockActionTag; // 0x38
	FGameplayTag HelpingFromLedgeActionTag; // 0x40
	FGameplayTagQuery PouncedQuery; // 0x48
	FGameplayTagQuery GrabbedQuery; // 0x90
	FGameplayTagQuery PinnedQuery; // 0xd8
	FGameplayTagQuery DraggedQuery; // 0x120
	FGameplayTagQuery UsingPlantedWeaponQuery; // 0x168
	FGameplayTagQuery UsingMountedWeaponQuery; // 0x1b0
	FGameplayTagQuery SleeperProneQuery; // 0x1f8
	FGameplayTag UnarmedStance; // 0x240
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FColorBlindGroupPalette {
	TMap<FName, FLinearColor> GroupMap; // 0x0
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FFrameNumber {
	int32_t Value; // 0x0
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

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FGameplayEffectContext {
	float Damage; // 0x0
	float PermanentDamage; // 0x4
	float DamagePct; // 0x8
	float PermanentDamagePct; // 0xc
	FVector ImpactPoint; // 0x10
	FVector ImpactDirection; // 0x1c
	FName BoneName; // 0x28
	EPhysicalSurface PhysicsSurface; // 0x30
	UPrimitiveComponent* HitComponent; // 0x38
	FGameplayEffectSource EffectSource; // 0x40
	int32_t ChainDepth; // 0x78
};

struct FSpreadDef {
	FVector2D StandingSpreadMinMax; // 0x0
	FVector2D CrouchedSpreadMinMax; // 0x8
	float FiringSpreadAdd; // 0x10
	float MovingSpreadAdd; // 0x14
	float MaxPercentFromFiring; // 0x18
	float MaxPercentFromMoving; // 0x1c
	float CenterClusterMagnitude; // 0x20
	float VerticalityScale; // 0x24
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
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

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FFocusWatch {
	EFocusWatchType WatchType; // 0x0
	FVector2D PitchClampRange; // 0x4
	FVector2D YawClampRange; // 0xc
	float RotTolerance; // 0x14
	bool bCycleBackToCenter; // 0x18
	bool bClampOverridesUseTightest; // 0x19
	float InterpSpeed; // 0x1c
	FVector2D UpdateFreq; // 0x20
};

struct FCardTextParam {
	float Value; // 0x0
};

struct FDialogueResponseGroupRow : FTableRowBase {
	FDialogueReaction ResponseGroup; // 0x8
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FTitanStage3Segment {
	UAnimMontage* RetreatAnimMontage; // 0x0
	float TitanRetreatMovementSpeed; // 0x8
	UCurveFloat* TitanRetreatSpeedCurve; // 0x10
	UAnimMontage* DigAnimMontage; // 0x18
	float TitanDigMovementSpeed; // 0x20
	UCurveFloat* TitanDigSpeedCurve; // 0x28
	float TitanDigDuration; // 0x30
	TArray<FTitanStage3RockFallWave> TitanDigRockFallWaves; // 0x38
};

struct FWaterMapperData {
	UTexture2D* MaskTexture; // 0x8
	UTexture2D* HeightTexture; // 0x10
	uint32_t TextureSize; // 0x18
	float PixelSizeWorld; // 0x1c
	float HeightScale; // 0x20
	FVector Location; // 0x24
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

struct FGobiChallengeObjectiveProgress {
	int32_t Points; // 0x0
	float Value; // 0x4
};

struct FNiagaraTestStruct {
	FVector Vector1; // 0x0
	FVector Vector2; // 0xc
	FNiagaraTestStructInner InnerStruct1; // 0x18
	FNiagaraTestStructInner InnerStruct2; // 0x30
};

struct FBlackboardKeySet {
	FBlackboardKeySelector BlackboardKey; // 0x0
	float FloatValue; // 0x28
	int32_t IntValue; // 0x2c
	EBoolValue BoolValue; // 0x30
	FVector VectorValue; // 0x34
	FRotator RotatorValue; // 0x40
	FString StringValue; // 0x50
	UObject* ClassValue; // 0x60
	UObject* ObjectValue; // 0x68
	char EnumValue; // 0x70
	FName NameValue; // 0x74
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
	FName GlobalStyleColorName; // 0x14
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
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

struct FGameplayModTag {
	FDataTableRowHandle TagRowHandle; // 0x0
	int32_t StackCount; // 0x20
};

struct FMantleProceduralClimbParameters {
	float VerticalClimbSpeed; // 0x0
	float HorizontalClimbSpeed; // 0x4
	float ClimbingDismountSpeed; // 0x8
};

struct FCardAndQuantity {
	FDataTableRowHandle CardRowHandle; // 0x0
	FGameplayTagContainer CardTagQuery; // 0x20
	int32_t Quantity; // 0x40
};

struct FAssetLookupAkAudioEvent {
	UAkAudioEvent* Default; // 0x0
	TArray<FAssetLookupAkAudioEventEntry> Lookups; // 0x8
};

struct FAkTRSPerPlatformSettings {
	float MaxSoundBankMemoryFootprintInMB; // 0x0
	int32_t MaxNumAudibleAcousticPortal; // 0x4
};

struct FFootSyncMarkerSuffix {
	EFootSyncDetectionMode DetectionMode; // 0x0
	FName SyncMarkerSuffix; // 0x4
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FNotificationShelfEntry {
	ENotificationShelfPriority Priority; // 0x0
	UUIScreen* AssociatedScreen; // 0x8
	FText TitleText; // 0x10
	FText DescriptionText; // 0x28
	FDataTableRowHandle CardRowHandle; // 0x40
	AGobiPlayerState* OtherPlayerState; // 0x60
	UTexture2D* Icon; // 0x68
	float TotalLifetime; // 0x70
	bool bInGameSession; // 0x74
	FGobiOnlineUser PendingActionUser; // 0x78
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FFlashlightViewConfig {
	FLightParameterConfig LightParameters; // 0x0
	FLightParameterFlickerModifier LightFlickerMod; // 0x28
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
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

struct FPlayerActiveGameplayCardData {
	FSlotIndex SlotIndex; // 0x0
	int32_t PlayerId; // 0x8
	TArray<FActiveGameplayCard> ActiveHeroCards; // 0x10
	int32_t EquippedPresetIndex; // 0x20
	TArray<FDataTableRowHandle> EquippedPresetCards; // 0x28
	bool EquippedPresetIsBuiltIn; // 0x38
	FPackedPlayerDeckData PackedDeckData; // 0x40
	bool HasReceivedLoadoutCardsThisMap; // 0x58
	bool HasReceivedLoadoutCards; // 0x59
	bool HasReceivedPerThreatBonuses; // 0x5a
	bool HasReceivedCatchUpBonusDraws; // 0x5b
	TArray<FDataTableRowHandle> BurnCardsPlayedThisMap; // 0x60
	FName AppliedCharacterRowName; // 0x70
	int32_t BonusDraws; // 0x78
	int32_t MutationPoints; // 0x7c
	TArray<FDataTableRowHandle> CardsDrawnThisRound; // 0x80
	bool bMutationsFreeInSocialSpace; // 0xa0
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FGlobalAssetLoaderAsset {
	EGlobalAssetPhase Phase; // 0x0
	bool bClient; // 0x1
	bool bServer; // 0x2
	TSoftClassPtr<UObject> Class; // 0x8
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FArmorHealth {
	int32_t ArmorIdx; // 0x0
	float Health; // 0x4
};

struct FReplicatedReloadData {
	int32_t MontageSectionIndex; // 0x0
	char ForceReplicationBit : 1; // 0x4
};

struct FPlayerStateLeaverPenalty {
	double Duration; // 0x0
	double Remaining; // 0x8
};

struct FStatKeyValuePairDto {
	uint64_t StatKeyHash; // 0x0
	int32_t Value; // 0x8
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FTitanStage3TentacleAnimInfo {
	bool bIdle; // 0x0
	bool bAcidSprayAttackEnter; // 0x1
	bool bAcidSprayAttackLoop; // 0x2
	bool bAcidSprayAttackExit; // 0x3
	float AcidSprayAttackEnterPlayRate; // 0x4
	float AcidSprayAttackExitPlayRate; // 0x8
	UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x10
	UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x18
	UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x20
};

struct FSignInFailedPopupData {
	TSoftClassPtr<UObject> PopupClass; // 0x0
	FText Title; // 0x28
	FText Message; // 0x40
	TArray<FPopupButton> ButtonsPC; // 0x58
	TArray<FPopupButton> ButtonsConsole; // 0x68
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FRolledVendorStockItemParams {
	FGameplayTagContainer Tags; // 0x0
	bool bOneTimePurchase; // 0x20
};

struct FAdditionalPlantData {
	FRotator DesiredPlantRotation; // 0x0
	float MaxAbovePrevious; // 0xc
	float MaxBelowPrevious; // 0x10
	AActor* PlantableGhostActor; // 0x18
	AActor* PlantedActor; // 0x20
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FDataTableRowHandleCollectionJson {
	TArray<FDataTableRowHandle> RowHandles; // 0x0
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FOvercastCPUData {
	float TimePercent; // 0x0
	float TimePercentRelative; // 0x4
	float MainThreadMilliseconds; // 0x8
};

struct FHG_Tuning_Struct {
	FFireModeBaseTuning FireModeBase_37_229A905E462D253EDF35E8A33D2167F3; // 0x0
	FFireModeSingleTraceTuning FireModeSingleTrace_31_A07A58F74806572C177B918212D6EF38; // 0x38
	FSpreadTuning Spread_9_A10B47714F0C1FDBBA45D0A99B81AA19; // 0x50
	FClipAmmoTuning ClipAmmo_28_013A08DE4619C88B3A73D486D4657A27; // 0xb0
	FClipReloadTuning ClipReload_3_FD477EAF4A650B258356838D708AAE34; // 0xb4
	FRecoilTuning Recoil_12_A18A88534DE26D77FA6388A15DD59BCD; // 0xc0
	FBulletPenetrationTuning BulletPenetration_25_8138B02C4259BC87BD1EDA8F00756FB7; // 0x200
	FWeaponMoveSpeedTuning WeaponMoveSpeed_15_89A1EE1B4AD84CB38B06648DB292A25E; // 0x204
	FItemCycleTuning ItemCycle_20_1E1B5C1D4893AC229FEAB0BC9EF6621E; // 0x270
	FADSTuning ADS_34_A01755BC4C71B67B74CD80BC0E5FF41E; // 0x284
	FItemAnimationDataTuning ItemAnimationData_22_0A58A0174E2F06B0B275218B8470A058; // 0x28c
};

struct FGobiCharacterConfig {
	USkeletalMeshRegionConfig* MeshConfig; // 0x0
	FGameplayTagContainer Tags; // 0x8
};

struct FRepContextLocation {
	UGameplayContext* Context; // 0x0
	FVector Location; // 0x8
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

struct FTitanStage1Tuning : FTuningDataBase {
	TArray<FDifficultyFloat> TentacleEmergeDelay; // 0x8
	FDifficultyFloat MinTimeBetweenAttacks; // 0x18
	FDifficultyFloat MaxTimeBetweenAttacks; // 0x2c
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

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FGameplayEval_ClosestCharacter : FGameplayEval {
	bool bDoRangeCheck; // 0x48
	float MinDistance; // 0x4c
	float MaxDistance; // 0x50
	bool bDoTagsCheck; // 0x54
	FGameplayTagQuery CharacterTags; // 0x58
	UAnimContext_ClosestCharacter* ClosestCharacter; // 0xa0
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

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FGobiCharacterMoveEffects {
	float SpeedToApplyEffects; // 0x0
	FGameplayTagQuery TagRequirements; // 0x8
	TArray<UGameplayEffect*> Effects; // 0x50
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	int32_t Valid; // 0x24
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FURLOption> Options; // 0x48
	FString Portal; // 0x58
};

struct FBurstMoveTickData {
	EBurstAttackState State; // 0x0
};

struct FJoinBackfillSessionData {
	FString OriginSessionId; // 0x0
	FString TargetedSessionId; // 0x10
	FString GameMode; // 0x20
	FString Team; // 0x30
};

struct FReplicatedTitanStateInfo {
	ETitanStage2And3State State; // 0x0
	float Stage3ProgressAlongSpline; // 0x4
};

struct FAgoraHydraLeaderboardChallengeSet {
	FString ID; // 0x0
	int32_t Rank; // 0x10
};

struct FClusterBoils {
	AActor* WaypointLessonActor; // 0x0
	UStaticMeshComponent* Cluster; // 0x8
	TArray<AActor*> Boils; // 0x10
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FDialogueEval_ConversationHasPlayed : FDialogueEval {
	FDataTableRowHandle EventDefinitionRow; // 0x48
};

struct FAxisKeybind : FKeybindRowBase {
	FName AxisName; // 0x10
	float Scale; // 0x18
	FText DisplayName; // 0x20
	FText AlternateGamepadDisplayName; // 0x38
};

struct FAgoraHydraGetAllowListSecuritySettingResponse {
	FAgoraHydraGetAllowListSecuritySettingBody Body; // 0x0
	int32_t Return_Code; // 0x4
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FLightmassWorldInfoSettings {
	TMap<ELightingBuildQuality, FLightmassQualitySettings> LightmassSettingsPerQuality; // 0x0
	FColor EnvironmentColor; // 0x50
	float EnvironmentIntensity; // 0x54
	float EmissiveBoost; // 0x58
	float DiffuseBoost; // 0x5c
	EVolumeLightingMethod VolumeLightingMethod; // 0x60
	char bUseAmbientOcclusion : 1; // 0x61
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x61
	char bVisualizeMaterialDiffuse : 1; // 0x61
	char bVisualizeAmbientOcclusion : 1; // 0x61
	char bCompressLightmaps : 1; // 0x61
	char bCompressShadowmaps : 1; // 0x61
	float VolumetricLightmapDetailCellSize; // 0x64
	float VolumetricLightmapMaximumBrickMemoryMb; // 0x68
	float VolumetricLightmapSphericalHarmonicSmoothing; // 0x6c
	float VolumeLightSamplePlacementScale; // 0x70
	float DirectIlluminationOcclusionFraction; // 0x74
	float IndirectIlluminationOcclusionFraction; // 0x78
	float OcclusionExponent; // 0x7c
	float FullyOccludedSamplesFraction; // 0x80
	float MaxOcclusionDistance; // 0x84
	UDataTable* LightingScenarioMapConfig; // 0x88
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FAkXSXApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FMutilationHitReactionEvent {
	bool bExplode; // 0x0
	float PctToDismember; // 0x4
	float DismemberImpulseMagnitude; // 0x8
	float ImpulseMagnitude; // 0xc
	int32_t Regions; // 0x10
	bool bChooseOneRegionRandomly; // 0x14
	EMutilationType Type; // 0x15
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FTableOfGameplayCardTablesRow : FTableRowBase {
	UDataTable* Table; // 0x8
};

struct FChallengeIndexPair {
	int32_t SetIndex; // 0x0
	int32_t Index; // 0x4
};

struct FTaskManRelayDeviceCode {
	FString DeviceCode; // 0x0
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FCorpseSettings {
	int32_t CharacterCorpsesDedicatedMax; // 0x0
	float CharacterCorpsesDedicatedMaxLifeTime; // 0x4
	EPerfScalingMethod QualityScaling; // 0x8
	FCorpseQualitySettings QualitySettings[0x5]; // 0xc
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FPostRoundStatConfig {
	FString Name; // 0x0
	FText Display; // 0x10
	EPlayerProfileStat Stat; // 0x28
	FString StatSuffix; // 0x30
};

struct FItemCycleTuning {
	float RaiseStateLength; // 0x0
	float QuickRaiseStateLength; // 0x4
	float RaiseAnimationSettlePercent; // 0x8
	float LowerStateLength; // 0xc
	float LowerAnimationLength; // 0x10
};

struct FVendorPsuedoItem {
	FText Name; // 0x0
	int32_t Cost; // 0x18
	float HealthGrantedPct; // 0x1c
	float AmmoGrantedPct; // 0x20
	EAmmoType AmmoGrantedType; // 0x24
	TSoftObjectPtr<UTexture2D> Icon; // 0x28
	UAkAudioEvent* PurchaseSound; // 0x50
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FWeightPerBone {
	FName BoneName; // 0x0
	int32_t BlendWeight; // 0x8
	int32_t BlendPercentage; // 0xc
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FPasteProceduralActorsInput {
	FString ActorPasteData; // 0x0
	FTransform RelativeTransform; // 0x10
	TArray<TSoftObjectPtr<UObject>> AssetReferences; // 0x40
	TArray<TSoftClassPtr<UObject>> ClassReferences; // 0x50
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FAdjustStatValueCommand : FPlayerProfileCommand {
	EPlayerProfileStat Stat; // 0x8
	int32_t BaseDelta; // 0xc
	TMap<FName, int32_t> KeyDeltas; // 0x10
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
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

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FMapMetricData {
	FString MapName; // 0x0
	TArray<FClimbMetric> ClimbMetrics; // 0x10
	TArray<FJumpMetric> JumpMetrics; // 0x20
	int32_t NumOfClimbs; // 0x30
	int32_t NumOfJumps; // 0x34
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
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

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType* Type; // 0x38
};

struct FWeakSpotHealthStateActor {
	float HealthPctThreshold; // 0x0
	AActor* SpawnActor; // 0x8
	FName SocketName; // 0x10
	AActor* SpawnedActor; // 0x18
};

struct FSimulationStageMetaData {
	FName IterationSource; // 0x0
	char bSpawnOnly : 1; // 0x8
	char bWritesParticles : 1; // 0x8
	TArray<FName> OutputDestinations; // 0x10
	int32_t MinStage; // 0x20
	int32_t MaxStage; // 0x24
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FMovementSpeedStanceConfig {
	FVector BaseMoveSpeed; // 0x0
	FVector ADSMoveSpeed; // 0xc
	FVector HipFiringMoveSpeed; // 0x18
	FVector ADSFiringMoveSpeed; // 0x24
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FContextToEffectsMap {
	FGameplayModContext Context; // 0x0
};

struct FEffectActorSettings {
	int32_t MaxActive; // 0x0
	float StackingDistance; // 0x4
	float ForceFadeOutTime; // 0x8
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FLeaderboardData {
	int32_t Rank; // 0x0
	int32_t Score; // 0x4
	FString PlayerName; // 0x8
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
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

struct FCurrencyReward {
	FString Cause; // 0x0
	int32_t CurrencyDelta; // 0x10
};

struct FCustomDataProviderMontageArray : FCustomDataProvider {
	TArray<UAnimMontage*> Value; // 0x8
};

struct FPlayerProfilePendingDeletions {
	TSet<int32_t> Decks; // 0x0
	TSet<int32_t> Caravans; // 0x50
	TSet<int32_t> CampaignRuns; // 0xa0
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bForceOpaque; // 0x6
	bool bHidden; // 0x7
};

struct FTaskManRelayGuid {
	FString Guid; // 0x0
};

struct FLadderAnimState {
	float MeshRotation; // 0x0
	bool bIsSliding; // 0x4
	bool bIsMovingUp; // 0x5
	bool bIsMovingDown; // 0x6
};

struct FDebugLootCategoryInfo {
	FGameplayTag LootTag; // 0x0
	FLootCategoryInfo CategoryInfo; // 0x8
};

struct FOnlineConfigurationCVarData {
	FString Name; // 0x0
	FString Value; // 0x10
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

struct FTriggerHordeMoveTickData {
	ETriggerHordeState State; // 0x0
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FWebServiceSessionParticipant {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
	FString UserAgoraId; // 0x18
	FString UserData; // 0x28
	FString Team; // 0x38
	int64_t TimingOut; // 0x48
	bool CrossPlayEnabled; // 0x50
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x48
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FAnimNode_SpeedWarping : FAnimNode_SkeletalControlBase {
	FBoneReference IKFootRootBone; // 0xc8
	TArray<FFootDefinition> FeetDefinitions; // 0xd8
	EAxis WarpAxis; // 0xe8
	float SpeedScaling; // 0xec
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FAkPellegrinoAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
};

struct FScenarioHeroDebugInfo {
	TWeakObjectPtr<AHeroCharacter> Hero; // 0x0
	float HeroScore; // 0x8
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FSignInTaskDependency {
	USignInTask* Task; // 0x0
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FItemCycleSpec {
	UAnimMontage* AnimationFP; // 0x0
	UAnimMontage* FirstTimeAnimationFP; // 0x8
	UAnimMontage* Animation3P; // 0x10
	UAkAudioEvent* AudioEvent; // 0x18
	FGameplayTagContainer AppliedTags; // 0x20
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
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

struct FMOTDTiledLayout : FMOTDLayout {
	FText Title; // 0x8
	FText Description; // 0x20
	TArray<FMOTDTile> Tiles; // 0x38
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

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FTaskTimerRange {
	double Min; // 0x0
	double Max; // 0x8
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FMovementForceData {
	FVector LaunchVelocity; // 0x0
	float Duration; // 0xc
	float Elapsed; // 0x10
	float GravityScalar; // 0x14
	UCurveFloat* StrengthCurve; // 0x18
	FGameplayTagContainer TagsToApply; // 0x20
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

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FVertSliceObjective {
	FName ObjectiveHandle; // 0x0
	FText DisplayName; // 0x8
	int32_t TimerSeconds; // 0x20
	bool TimerActive; // 0x24
};

struct FLookInputHandler {
	FMouseInputSettings MouseSettings; // 0x78
	FGamepadInputSettings GamepadSettings; // 0x80
};

struct FGameplayEval_LineOfSight : FGameplayEval {
	UAnimContext_Trace* Trace; // 0x48
};

struct FDialogueEvent {
	FDataTableRowHandle EventRowHandle; // 0x0
	TArray<FDialogueReaction> Reactions; // 0x20
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

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
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

struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FGameplayEval_HasPounceTarget : FGameplayEval {
	UAnimContext_PounceComponent* Pounce; // 0x48
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FTitanTongueSettings {
	float AlignToTargetSecs; // 0x0
	float PullNearSecs; // 0x4
	float PullFarSecs; // 0x8
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FCommWheelAction {
	ECommWheelAction Type; // 0x0
	UTexture2D* PageIcon; // 0x8
	FSlateColor PageIconTint; // 0x10
	FText PageName; // 0x40
	int32_t PageIndex; // 0x58
	bool bHiddenForSinglePlayer; // 0x5c
	bool bHiddenForDemo; // 0x5d
};

struct FInteractiveCarDoor {
	UUsableComponent* Usable; // 0x0
	ULootSpawnerComponent* LootSpawner; // 0x8
	UMeshComponent* Mesh; // 0x10
	UAkAudioEvent* Audio; // 0x18
	FRotator Rotation; // 0x20
	bool bIsTrunk; // 0x2c
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FImpactAudioSet {
	TArray<FName> SpawnFilters; // 0x0
	TArray<UAkAudioEvent*> AudioEvents; // 0x10
};

struct FOnlineMap : FTableRowBase {
	FName Slug; // 0x8
	EGobiMapDevEnvType DevEnv; // 0x10
	FFilePath Path; // 0x18
	char GameModes; // 0x28
	TSet<EMissionDifficulty> StartingPoints; // 0x30
	bool bLastMapInChain; // 0x80
	bool bAvailableDuringChunkInstall; // 0x81
	FText MapChainName; // 0x88
	FText MapName; // 0xa0
	FText MissionNumber; // 0xb8
	TSoftObjectPtr<UTexture2D> MapOverviewTexture; // 0xd0
	FString PresenceName; // 0xf8
	FString ActivityId; // 0x108
	FString ActivityTaskId; // 0x118
	FString ActivitySubTaskId; // 0x128
	FDataTableRowHandle PreRoundCinematic; // 0x138
	FDataTableRowHandle PostRoundCinematic; // 0x158
};

struct FAutoApplyProfileSettings {
	double MinHeight; // 0x0
	double MaxHeight; // 0x8
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

struct FRattleEmitterInfo : FBumpEmitterInfo {
	UAkAudioEvent* RattleEvent; // 0x30
	float CooldownDuration; // 0x38
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
};

struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FBurstAttackTuning : FTuningDataBase {
	float MaxBurstSecs; // 0x8
	float MinStartBurstSecs; // 0xc
	float BurstRecoverSecs; // 0x10
	float BurstRecoverDelay; // 0x14
	float TraceAheadDistance; // 0x18
	float TurnSpeed; // 0x1c
	float BurstStartPlayRate; // 0x20
	float BurstLoopPlayRate; // 0x24
	float MinSpeedThreshold; // 0x28
	float MaxNoBurstSpeedTime; // 0x2c
	float MinTimeBeforeBackButtonCancels; // 0x30
	float MinTimeBeforeSprintButtonCancels; // 0x34
	float MinTimeBeforeCanReburst; // 0x38
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FDialogueConversation {
	FName ConversationName; // 0x0
	FDataTableRowHandle EventTrigger; // 0x8
	int32_t SceneNumber; // 0x28
	UAkAudioBank* Soundbank; // 0x30
	EConversationType Type; // 0x38
	bool bIsGlobalFloatingConversation; // 0x39
	float ConversationRelevancy; // 0x3c
	TArray<FString> AllowedMaps; // 0x40
	TArray<FName> ResponseGroups; // 0x50
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

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FArmor {
	float InitialHealth; // 0x0
	bool bStaticMesh; // 0x4
	UStaticMesh* StaticMesh; // 0x8
	bool bMeshIsVisible; // 0x10
	USkeletalMesh* SkeletalMesh; // 0x18
	UStaticMesh* CollisionMesh; // 0x20
	FName SocketName; // 0x28
	TArray<FName> AdditionalSocketNames; // 0x30
	FGameplayTag ParentComponentGameplayTag; // 0x40
	FName CollisionProfile; // 0x48
	EAttachmentRule AttachmentRule; // 0x50
	bool bRelativeTransform; // 0x51
	FTransform RelativeTransform; // 0x60
	bool bInWeldSimulatedBodies; // 0x90
	bool bDestroyWhenRegionMutilated; // 0x91
	EMutilationRegion MutilatedRegion; // 0x92
	TArray<UGameplayEffect*> ArmorEffects; // 0x98
	TArray<UGameplayEffect*> DestroyedEffects; // 0xa8
	TArray<FArmorHitGameplayTag> HitImpactGameplayTags; // 0xb8
	UMeshComponent* MeshComponent; // 0xc8
	UMeshComponent* CollisionMeshComponent; // 0xd0
	UAkAudioEvent* AKEDestroyed; // 0xd8
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FColorBlindEntry {
	EColorBlindEntryType EntryType; // 0x0
	FName Name; // 0x4
	EHighlightSwatch OutlineSwatchType; // 0xc
	float CustomColorBrightnessPercent; // 0x10
};

struct FAISpawnEval_TeamInPreparationArea : FAISpawnEval {
	bool bInPreparationArea; // 0x40
};

struct FCameraViewModifierEntry {
	FCameraViewModifier Modifier; // 0x0
	UObject* Source; // 0x48
};

struct FPerInstanceData {
	float Bank; // 0x0
	FVector Scale; // 0x4
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FReplicatedAttackData {
	char AttackIndex; // 0x0
	bool bHeavyAttack; // 0x1
};

struct FItemUseRulesConfig {
	uint16_t UseType; // 0x0
	uint16_t TargetType; // 0x2
	FGameplayTagQuery TargetTagQuery; // 0x8
	TSoftClassPtr<UObject> TargetFilterSet; // 0x50
	EItemTargetRange TargetRange; // 0x78
	EItemTargetAffectsRange TargetAffectsRange; // 0x79
	uint16_t TargetAffectsType; // 0x7a
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FMultiAudioEventInfo {
	AActor* TargetPoint; // 0x0
	TArray<UAkAudioEvent*> AkEventsOnEnter; // 0x8
	TArray<UAkAudioEvent*> AkEventsOnExit; // 0x18
	bool bTriggerOnce; // 0x28
};

struct FWeaponAnimationConfig {
	UAnimSequence* SprintIn; // 0x0
	UAnimSequence* SprintLoop; // 0x8
	UAnimSequence* SprintOut; // 0x10
	UAnimMontage* FirstPersonItemGrabMontage; // 0x18
};

struct FGameplayEval_NavArea : FGameplayEval {
	TArray<UNavArea*> AllowedNavAreas; // 0x48
	UAnimContext_NavLinkLocation* NavLink; // 0x58
	TArray<UAnimContext_NavLinkLocation*> NavLinkContexts; // 0x60
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FAgoraHydraUpdateUsernameBody {
	FString Username; // 0x0
};

struct FAssetLookupName {
	FName Default; // 0x0
	TArray<FAssetLookupNameEntry> Lookups; // 0x8
};

struct FDialogueReaction {
	FGuid UniqueId; // 0x0
	TArray<UObject*> EvalSets; // 0x10
	FName Response; // 0x20
	ECommsMode CommsMode; // 0x28
	bool bShowSubtitles; // 0x29
	bool bGlobalCanInterruptPersonal; // 0x2a
	EReactionCooldownType CooldownType; // 0x2b
	float GlobalCooldown; // 0x2c
	float PersonalCooldown; // 0x30
	float ChanceToSkip; // 0x34
	EDialogueChannel Channel; // 0x38
	int32_t PriorityValue; // 0x3c
	FName PriorityRow; // 0x40
	FName OnStartAnimRowId; // 0x48
	FName OnEndAnimRowId; // 0x50
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

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FPlayerDebugInfo {
	FString PlayerName; // 0x0
	float PercentAlongGoldenPath; // 0x10
	float DifferenceFromFurthestPlayer; // 0x14
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingID; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
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

struct FGameplayEval_PounceTrace : FGameplayEval {
	UGameplayContext_PounceTrace* PounceTrace; // 0x48
};

struct FDurableEntitlementRow : FTableRowBase {
	FDurableEntitlementId SteamId; // 0x8
	FDurableEntitlementId EOSId; // 0x28
	FDurableEntitlementId PS4Id; // 0x48
	FDurableEntitlementId PS5Id; // 0x68
	FDurableEntitlementId XB1Id; // 0x88
	FDurableEntitlementId XSXId; // 0xa8
	TArray<FDataTableRowHandle> GrantedContentPackages; // 0xc8
};

struct FKillTrackingData {
	FDataTableRowHandle ObjectiveHandle; // 0x0
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
	EAudioOutputTarget OutputTarget; // 0x2c
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d
	USoundSubmix* DefaultSubmix; // 0x30
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FGrowingChance {
	FVector2D Range; // 0x0
	float Increment; // 0x8
};

struct FCharacterMusicStateConfig {
	FName MusicSystemDisplayName; // 0x0
	FDataTableRowHandle MusicEventRowHandle; // 0x8
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
	FName NotifyFunctionName; // 0x20
};

struct FTipRow : FTableRowBase {
	FText Text; // 0x8
	bool bShowInCoop; // 0x20
	bool bShowInPvP; // 0x21
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x98
};

struct FAgoraHydraDeveloperAccessData {
	FString Username; // 0x0
	FString Password; // 0x10
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FPlayerProfileConsumableQuantity {
	int32_t Acquired; // 0x0
	int32_t Spent; // 0x4
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

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FGobiSessionUserData {
	FString Relay; // 0x0
	FString FPIDGroup; // 0x10
	FString GroupSessionId; // 0x20
	FString GroupSessionCluster; // 0x30
	FString SplitscreenHost; // 0x40
	FString SplitscreenJoiner; // 0x50
	EMatchmakingTeam DesiredTeam; // 0x60
	FString MatchID; // 0x68
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FDialogueEval_SpeakerDistanceToTarget : FDialogueEval {
	float MinDistance; // 0x48
	float MaxDistance; // 0x4c
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FAnimNode_FocusTrackingSequencePlayer : FAnimNode_SequencePlayer {
	FVector WorldLookAt; // 0x78
	bool bAlignToTarget; // 0x84
	float BlendInSpeed; // 0x88
	float BlendOutSpeed; // 0x8c
	float Alpha; // 0x90
	bool bMeshSpaceAdditive; // 0x94
	float ActualAlpha; // 0x98
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FPouncePlayerTuning {
	float ArcParam; // 0x0
	float ArcDegrees; // 0x4
	float MaxAimUpAngle; // 0x8
	float AimAssistRadius; // 0xc
	float PlayerMaxPounceDistance; // 0x10
	float MaxBunnyKickOffDistance; // 0x14
	float GrabReleaseCooldown; // 0x18
	float ClampLookHorzRotationRate; // 0x1c
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x2a0
	FVector2D ShadowOffset; // 0x330
	FLinearColor ShadowColorAndOpacity; // 0x338
	FSlateBrush MenuBorderBrush; // 0x348
	FMargin MenuBorderPadding; // 0x3d8
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

struct FPeriodicMovementParams {
	float PrimaryAmplitude; // 0x0
	float PrimaryFrequency; // 0x4
	float SecondaryAmplitude; // 0x8
	float SecondaryFrequency; // 0xc
};

struct FDamageTypeDamageMod : FDamageMod {
	FGameplayTagQuery DamageTagQuery; // 0x20
	FGameplayTagQuery InstigatorTagQuery; // 0x68
	FGameplayTagQuery HitComponentTagQuery; // 0xb0
	FGameplayTagQuery TargetTagQuery; // 0xf8
	bool bTargetWithoutTagsComponentAutoPasses; // 0x140
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

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48
};

struct FLootCategoryPercentage {
	FGameplayTag LootCategory; // 0x0
	FSpawnPercentage PercentOfGlobalPoolToSpawn; // 0x8
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FTRSSplineMeshActorDebugNumbersPrefs {
	float Offset; // 0x0
	float Size; // 0x4
	FColor Color; // 0x8
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID CameraBindingID; // 0x20
	FTransform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70
	bool bIsFinalSection; // 0x71
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

struct FDialogueReply {
	FDataTableRowHandle Speaker; // 0x0
	FName ExplicitResponse; // 0x20
	FDataTableRowHandle ReplyEvent; // 0x28
	float ReplyDelay; // 0x48
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FWebSocketSessionSendMessage_SetSessionData {
	FString SessionData; // 0x0
};

struct FLocoAnimInstanceQuery {
	FGameplayTagQuery Query; // 0x0
	FLocoStanceAnimGraphs AnimGraphs; // 0x48
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FOmenConfig {
	FGameplayTagQuery OmenQuery; // 0x0
	bool bCustomRange; // 0x48
	float Range; // 0x4c
	bool bCustomHighlightChannel; // 0x50
	EStencilChannel HighlightChannel; // 0x51
	bool bCustomScreenEffectTag; // 0x52
	FGameplayTag ScreenEffectTag; // 0x54
	bool bCustomScreenEffectDuration; // 0x5c
	float ScreenEffectDuration; // 0x60
	bool bCustomScreenEffectCooldown; // 0x64
	float ScreenEffectCooldown; // 0x68
	bool bCustomDialogue; // 0x6c
	FDataTableRowHandle Dialogue; // 0x70
	bool bCustomDialogueCooldown; // 0x90
	float DialogueCooldown; // 0x94
};

struct FHoldoutCollapsePhase {
	float ScenarioActiveDuration; // 0x0
	float SafeZoneSizeProgress; // 0x4
	TArray<UGameplayEffect*> OutOfSafeZoneGameplayEffects; // 0x8
	FDataTableRowHandle PhaseEndDialogue; // 0x18
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FGameplayEval_MantleRemainingClimbHeight : FGameplayEval {
	float DesiredRemainingClimbHeight; // 0x48
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FPostRoundStatValue {
	AGobiPlayerState* PlayerState; // 0x0
	int32_t StatValue; // 0x8
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

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FModInstance {
	UGameplayMod* Mod; // 0x0
};

struct FGobiEnemyAttackabilityParams {
	bool bOwnerDamageOnly; // 0x0
	int32_t MaxAttackFailures; // 0x4
	bool bUseAttackTime; // 0x8
	float MaxTimeSinceAttackFailure; // 0xc
	bool bUseAttackDistance; // 0x10
	bool bUseAttackLocation; // 0x11
	float MinDistanceSinceAttackFailure; // 0x14
	float MaxDistance; // 0x18
};

struct FMatchmakingLeftData {
	int32_t MatchmakingSequenceId; // 0x0
};

struct FAppliedWeaponSkinJson {
	FString WeaponId; // 0x0
	FDataTableRowHandle Skin; // 0x10
};

struct FWeaponMoveSpeedTuning {
	FMovementSpeedConfig MovementSpeedConfig; // 0x0
	FLooseSprintConfig SprintConfig; // 0x60
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x28
	int32_t DestOffset; // 0x2c
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FExplosionConfig {
	FExplosionProjectilesConfig Projectiles; // 0x0
	FGameplayEffectsEmitterTestConfig ExplosionGameplayEffects; // 0x20
	UCameraShake* CameraShake; // 0x70
	float CameraShakeOuterRadius; // 0x78
	UParticleSystem* ExplosionParticleEffect; // 0x80
	TArray<UAkAudioEvent*> ExplosionAudioEvents; // 0x88
	FExplosionJostler Jostler; // 0x98
	bool bSetReticleComponentRadius; // 0xa4
	FGameplayTagContainer AppliedTags; // 0xa8
	bool bExplodeOnDeath; // 0xc8
	TArray<UAnimMontage*> ExplodeMontages; // 0xd0
	bool bExplodesOnlyOnce; // 0xe0
	EExplosionEffectSource EffectSourceType; // 0xe1
	float ImpulseStrength; // 0xe4
	ERadialImpulseFalloff ImpulseFalloff; // 0xe8
	FGameplayEffectsEmitterTestConfig JuicedBystanderGameplayEffects; // 0xf0
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	float CrushedBits; // 0x4
};

struct FFlatChapter : FTableRowBase {
	FName ChapterName; // 0x8
	FText ChapterDisplayName; // 0x10
	bool bDevChapter; // 0x28
	bool bLocked; // 0x29
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FMapMeshConfig {
	USkeletalMeshRegionConfig* MeshConfig; // 0x0
	FGameplayTagContainer ApplyTags; // 0x8
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FSynthKnobStyle : FSlateWidgetStyle {
	FSlateBrush LargeKnob; // 0x8
	FSlateBrush LargeKnobOverlay; // 0x98
	FSlateBrush MediumKnob; // 0x128
	FSlateBrush MediumKnobOverlay; // 0x1b8
	float MinValueAngle; // 0x248
	float MaxValueAngle; // 0x24c
	ESynthKnobSize KnobSize; // 0x250
};

struct FTitanTailSwipeAttack {
	float TellSecs; // 0x0
	float AttackSecs; // 0x4
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FSpokenLineParams {
	FName ResponseName; // 0x0
	ECommsMode CommsMode; // 0x8
	char bShowSubtitles : 1; // 0xc
	ELineType LineType; // 0x10
	EFacialExpression FacialExpression; // 0x11
	EExpressionIntensity ExpressionIntensity; // 0x12
	bool bNeedsBookend; // 0x13
	float SubtitleDuration; // 0x14
	float AttenuationRadius; // 0x18
	float ServerTimePlayed; // 0x1c
	bool bShouldReplicate; // 0x20
};

struct FAISpawnEval_Chance : FAISpawnEval {
	TArray<float> ChancePerThreatLevel; // 0x40
	bool bReroll; // 0x50
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FReachInSweepVolumeInfo {
	FGameplayTag CollisionVolumeTag; // 0x0
	FName AttachSocketName; // 0x8
	FVector AttachTranslation; // 0x10
	FRotator AttachRotation; // 0x1c
	FName DetachLookAtSocketName; // 0x28
};

struct FSprayData {
	int32_t ForegroundIcon; // 0x0
	int32_t ForegroundVariant; // 0x4
	int32_t BackgroundIcon; // 0x8
	int32_t BackgroundVariant; // 0xc
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FLadderMovementModeConfig {
	float MinFacingDot; // 0x0
	float MinMovingDot; // 0x4
	float MinFastDescendFacingDot; // 0x8
	float MinFastDescendMovingDot; // 0xc
	float MinFacingLadderForwardDot; // 0x10
	float MoveUpMinPitch; // 0x14
	float MoveDownMaxPitch; // 0x18
	FGamePropertyFloat AscendSpeed; // 0x20
	FGamePropertyFloat DescendSpeed; // 0x58
	float FastDescendSpeed; // 0x90
	float ApproachSpeed; // 0x94
	float DismountSpeed; // 0x98
	float DismountDistance; // 0x9c
	bool bRootMotionEnabled; // 0xa0
	bool bThirdPersonMode; // 0xa1
	float MaxLookYaw; // 0xa4
	float MaxLookYawFadeInTime; // 0xa8
	bool bUseCustomDismountOffset; // 0xac
	float CustomDismountOffset; // 0xb0
	float InAirLadderUseDistance; // 0xb4
	FGameplayTagQuery LadderTagQuery; // 0xb8
	FGameplayTagQuery BlockingTagQuery; // 0x100
	FGameplayTagContainer TagsToApplyOnLadder; // 0x148
	FGameplayTagContainer TagsToApplyWhenOccluded; // 0x168
	FCameraViewModifier ViewModifier; // 0x188
};

struct FMaterialParamOverride {
	float ValueOverride; // 0x0
	TArray<FName> MaterialSlotNames; // 0x8
	FName MaterialParamName; // 0x18
	FGameplayTag TagToSetOverrideOn; // 0x20
	FGameplayTag SkelMeshTag; // 0x28
};

struct FAnimEval_EnterLadder : FAnimEval {
	bool bEnterFromTop; // 0x48
};

struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	FVector OverrideWorldGravity; // 0xd0
	FVector ExternalForce; // 0xdc
	FVector ComponentLinearAccScale; // 0xe8
	FVector ComponentLinearVelScale; // 0xf4
	FVector ComponentAppliedLinearAccClamp; // 0x100
	float CachedBoundsScale; // 0x10c
	FBoneReference BaseBoneRef; // 0x110
	ECollisionChannel OverlapChannel; // 0x120
	ESimulationSpace SimulationSpace; // 0x121
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x122
	char bEnableWorldGeometry : 1; // 0x123
	char bOverrideWorldGravity : 1; // 0x123
	char bTransferBoneVelocities : 1; // 0x123
	char bFreezeIncomingPoseOnStart : 1; // 0x123
	char bClampLinearTranslationLimitToRefPose : 1; // 0x123
	FSolverIterations OverrideSolverIterations; // 0x124
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x30
	char bOverrideInstanceCountSettings : 1; // 0x30
	char bOverrideTimeSinceRendererSettings : 1; // 0x30
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

struct FScenarioEval_FixedScore : FScenarioEval {
	float FixedScore; // 0x40
};

struct FAddSessionToPoolFilteredData : FAddSessionToPoolFilteredNoParticipantData {
	TArray<FAddSessionToPoolParticipantData> TeamSelections; // 0x80
	bool CrossPlayEnabled; // 0x90
};

struct FSolverIterations {
	int32_t SolverIterations; // 0x0
	int32_t JointIterations; // 0x4
	int32_t CollisionIterations; // 0x8
	int32_t SolverPushOutIterations; // 0xc
	int32_t JointPushOutIterations; // 0x10
	int32_t CollisionPushOutIterations; // 0x14
};

struct FLaserSightConfig {
	UParticleSystem* LaserDotParticle; // 0x0
	float TraceDistance; // 0x8
	EAxis StretchAxis; // 0xc
	float NormalizedStretchDistance; // 0x10
	UStaticMesh* LaserBeamMesh; // 0x18
	FGameplayTag MeshAttachComponentTag; // 0x20
	FName MeshAttachSocketName; // 0x28
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FWallGrabConfig {
	bool bRequiresButtonPressToGrab; // 0x0
	TArray<UAnimMontage*> GrabMontages; // 0x8
	FGameplayTagQuery BlockingTags; // 0x18
	FGameplayTagQuery CancelTags; // 0x60
	FGameplayTagContainer AttachingTags; // 0xa8
	float ForwardGrabTraceDistance; // 0xc8
	float MaxGrabDistance; // 0xcc
	float MinGrabHeight; // 0xd0
	float MinLedgeDistance; // 0xd4
	float MinLedgeDistanceTraceDistance; // 0xd8
	bool bGrabUsesSecondaryButton; // 0xdc
	FVector2D GrabbingViewPitch; // 0xe0
	FVector2D GrabbingViewYaw; // 0xe8
	TArray<UGameplayEffect*> ApplyEffects; // 0xf0
	float SetControlRotationDelay; // 0x100
	FCameraViewModifier ViewModifier; // 0x108
	float CharacterFadeOutDistanceOverride; // 0x150
	float MinDotToGrab; // 0x154
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

struct FPrimitiveFloatParameter {
	FName Name; // 0x0
	float Value; // 0x8
	int32_t Index; // 0xc
};

struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FAmmoReserve {
	FGamePropertyFloat StartingPct; // 0x0
	FGamePropertyFloat RefillPct; // 0x38
	FDataTableRowHandle RowHandle; // 0x70
	int32_t StartingMax; // 0x90
	int32_t Current; // 0xc8
	FGamePropertyInt Max; // 0xd0
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

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FGamePropertyInt : FMovementTickableStruct {
	int32_t Value; // 0x20
	int32_t BaseValue; // 0x24
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FMeshLightingOverrides {
	EMeshBoolApplicationType CastsShadow; // 0x0
	EMeshBoolApplicationType SelfShadow; // 0x1
	EMeshBoolApplicationType OverrideLightingChannels; // 0x2
	FLightingChannels LightingChannels; // 0x3
};

struct FDialogueEventContext {
	FDataTableRowHandle DialogueEvent; // 0x0
	FName EventName; // 0x20
	TWeakObjectPtr<AActor> Instigator; // 0x28
	TWeakObjectPtr<AActor> Target; // 0x30
};

struct FGameplayEval_HeroDefinition : FGameplayEval {
	FDataTableRowHandle HeroDefinition; // 0x48
};

struct FTRSSplineMeshActorPerInstanceData {
	float Bank; // 0x0
	FVector Scale; // 0x4
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

struct FLevelStreamingWrapper {
	ULevelStreaming* StreamingLevel; // 0x0
};

struct FStatDeltaDto {
	EPlayerProfileStat StatType; // 0x0
	int32_t Base; // 0x4
	TArray<FStatKeyValuePairDto> Keys; // 0x8
};

struct FSourceEffectChorusSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FBonePair {
	FName Bone1; // 0x0
	FName Bone2; // 0x8
};

struct FMaterialParameterCollectionData {
	UMaterialParameterCollection* Collection; // 0x0
	FName Name; // 0x8
	EMaterialParameterCollectionValueType Type; // 0x10
	float FloatValue; // 0x14
	FLinearColor VectorValue; // 0x18
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FAgoraHydraLeaderboardAccountIdentity {
	FString Username; // 0x0
	FJsonObjectWrapper Alternate; // 0x10
};

struct FHeroContext {
	TWeakObjectPtr<AHeroCharacter> HeroCharacter; // 0x0
	int32_t PointBudget; // 0x8
	FHeroIntensity Intensity; // 0xc
	int32_t SpentBudget; // 0x24
	uint32_t HeroCount; // 0x28
	float HeroSeparation; // 0x2c
	float HeroScore; // 0x60
	float HeroBudgetScore; // 0x64
	float HeroDistanceScore; // 0x68
	float HeroSeparationScore; // 0x6c
	float HeroPopulationScore; // 0x70
	float HeroLifeStateScore; // 0x74
};

struct FStumbleInflictTypeRange {
	float StumbleAmount; // 0x0
	UGobiDamageType* InflictDamageType; // 0x8
	TArray<UGameplayEffect*> Effects; // 0x10
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
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

struct FCharacterStaminaInfo {
	FName CharacterName; // 0x0
	FVector2D LowStamBreathIntervalMinMax; // 0x8
	FVector2D RegStamBreathIntervalMinMax; // 0x10
	bool bMixSmallBigBreaths; // 0x18
	float AmountForBreaths; // 0x1c
	float AmountForLowStamina; // 0x20
	float FinalBreathsDelay; // 0x24
	int32_t StamRecoveryThreshold; // 0x28
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FLipsyncTimingEntry {
	uint16_t StartTime; // 0x0
	uint16_t EndTime; // 0x2
	uint16_t FirstViseme; // 0x4
	uint16_t LastViseme; // 0x6
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FEvalBranchData {
	FName JumpToSection; // 0x0
	bool BranchImmediately; // 0x8
	UAnimationEvalSet* AnimEvaluatorSet; // 0x10
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FProjectileSprayConfig : FAbilityConfig {
	float InitialVelocityForward; // 0x4
	float SprayAngle; // 0x8
	float ProjectileBurstCount; // 0xc
	FVector2D ProjectileHorizontalOffset; // 0x10
	float BurstFrequency; // 0x18
	float GravityScale; // 0x1c
	float MaxDuration; // 0x20
	float MaxTargetDistance; // 0x24
	float Cooldown; // 0x28
	float VelocityTransitionTime; // 0x2c
	float VelocityStartPct; // 0x30
	bool bUseFixedSprayLocation; // 0x34
	FVector SprayLocation; // 0x38
	FVector SprayCrouchedLocation; // 0x44
	FName SpraySocket; // 0x50
	bool bUseSpraySocketDirection; // 0x58
	TArray<UAnimMontage*> SprayMontages; // 0x60
	TArray<UAnimMontage*> SprayEndMontages; // 0x70
	UParticleSystem* ParticleEmitter; // 0x80
	UProjectileSimple* ProjectileClass; // 0x88
	FGameplayTagContainer AppliedTags; // 0x90
	FGameplayTagContainer BlockingTags; // 0xb0
	FGameplayTagContainer CancelTags; // 0xd0
	TArray<UGameplayEffect*> AppliedEffects; // 0xf0
	TArray<UGameplayEffect*> CooldownEffects; // 0x100
	FVector2D CrossHairLerpDistanceThreshold; // 0x110
	bool bFloatingCrossHairEnabled; // 0x118
	TArray<UAkAudioEvent*> AKEStartSpray; // 0x120
	TArray<UAkAudioEvent*> AKEStopSpray; // 0x130
};

struct FGameplayEval_MatchState : FGameplayEval {
	TArray<FName> DesiredMatchStates; // 0x48
};

struct FBadgeTitleRow : FTableRowBase {
	FText Title; // 0x8
};

struct FObservationRule {
	int32_t Flags; // 0x0
	float MinDistance; // 0x4
	float MaxDistance; // 0x8
	float ViewAngle; // 0xc
	float ForwardViewAngle; // 0x10
	int32_t SimpleCollisionFlags; // 0x14
	FVector BoxExtents; // 0x18
	float SphereRadius; // 0x24
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FMeshConfig {
	USkeletalMesh* Mesh; // 0x0
	FGameplayTag SkelMeshCompGameplayTag; // 0x8
	bool bOptimization_UseAttachParentBounds; // 0x10
	bool bStartHidden; // 0x11
	bool bIsDismembermentPiece; // 0x12
	UStaticMesh* StaticMeshDismembermentPiece; // 0x18
	FName StaticMeshDismembermentAttachName; // 0x20
	EMutilationRegion MutilationRegion; // 0x28
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAISpawnEval_CheckCharacterTagsByDifficulty : FAISpawnEval {
	FGameplayTagContainer ScenarioCardEvalTags; // 0x40
	FDifficultyInt TestValue; // 0x60
	ECompareOp Op; // 0x74
	FGameplayTagQuery QueryAgainstAliveCharacters; // 0x78
};

struct FTraceMeleeTuning {
	float Damage; // 0x0
	float FriendlyDamage; // 0x4
	float HeavyAttackDamage; // 0x8
	float FriendlyHeavyAttackDamage; // 0xc
	float LightStumbleDamagePerDamage; // 0x10
	float HeavyStumbleDamagePerDamage; // 0x14
	float WeakSpotMultiplier; // 0x18
	float MeleeCooldown; // 0x1c
	float StaminaCost; // 0x20
	float LowStaminaDamageScalar; // 0x24
	float HeavyAttackStaminaDrain; // 0x28
	float LowStaminaScalar; // 0x2c
	bool bOnlyApplyCleaveDuringLowStaminaAttack; // 0x30
	float TraceSize; // 0x34
	float TraceLength; // 0x38
	float MinRequiredTimeForHeavyAttack; // 0x3c
	float LightAttackImpulse; // 0x40
	float HeavyAttackImpulse; // 0x44
	TArray<FTraceMeleeTuningAttack> LightAttackSequence; // 0x48
	TArray<FTraceMeleeTuningAttack> HeavyAttackSequence; // 0x58
	float MinRequiredStaminaToStartBlocking; // 0x68
	float StaminaDrainWhileBlocking; // 0x6c
	FMeleeMoveForceParameters LightAttackMoveForce; // 0x70
	FMeleeMoveForceParameters HeavyAttackMoveForce; // 0x88
};

struct FRepRootMotionMontageLowFreq {
	bool bIsActive; // 0x0
	UAnimMontage* AnimMontage; // 0x8
	UPrimitiveComponent* MovementBase; // 0x10
	FName MovementBaseBoneName; // 0x18
	bool bRelativePosition; // 0x20
	bool bRelativeRotation; // 0x21
	FRootMotionSourceGroup AuthoritativeRootMotion; // 0x28
	FVector_NetQuantize10 Acceleration; // 0x60
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FTitanStage2Phase {
	float TriggerNextPhaseHealthPct; // 0x0
	float DelayBetweenAttacksMin; // 0x4
	float DelayBetweenAttacksMax; // 0x8
	float WaitForHordeDoneSecsMax; // 0xc
	int32_t TentacleAttackCount; // 0x10
	FTitanStage2TentacleShared TentacleShared; // 0x14
	FTitanStage2Mouth Mouth; // 0x18
};

struct FAchievementCategoryUIData {
	EAchievementCategory Category; // 0x0
	FText CategoryName; // 0x8
	int32_t CompletedCount; // 0x20
	int32_t TotalCount; // 0x24
};

struct FDrenchReplicatedData {
	EDrenchType Type; // 0x0
	float InitialStrength; // 0x4
	char Parity; // 0x8
};

struct FGameplayEffectsEmitterTestConfig {
	float Distance; // 0x0
	bool bApplyToCharactersOnly; // 0x4
	int32_t ApplyToCharacterTeams; // 0x8
	FCollisionProfileName OverlapCollisionProfile; // 0xc
	bool bRequiresLineOfSight; // 0x14
	bool bCheckLineOfSightToWeakSpots; // 0x15
	FName LineOfSightTargetComponentTag; // 0x18
	bool bUseTargetEyePosForLoS; // 0x20
	bool bSkipLOSForHostileTargets; // 0x21
	TArray<UGameplayEffect*> GameplayEffects; // 0x28
	FName BoneName; // 0x38
	bool bExcludeInstigatingActor; // 0x40
	bool bExcludeTeammmatesIfBotInstigator; // 0x41
	bool bExcludeGodPlayers; // 0x42
	bool bFavorWeakspots; // 0x43
	USkeletalMeshComponent* AssociatedSkeletalMeshComponent; // 0x48
};

struct FAnimLocomotionData {
	UEnum* SpeedEnum; // 0x0
	TArray<FAnimSpeedRange> SpeedRanges; // 0x8
	char CurrentSpeedIdx; // 0x18
	FGameplayTag CurrentSpeedTag; // 0x1c
	TArray<FAnimDirectionRange> DirectionRanges; // 0x28
	char CurrentDirectionIdx; // 0x38
	char StopDirectionIdx; // 0x39
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

struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	FSlateBrush SortPrimaryAscendingImage; // 0x8
	FSlateBrush SortPrimaryDescendingImage; // 0x98
	FSlateBrush SortSecondaryAscendingImage; // 0x128
	FSlateBrush SortSecondaryDescendingImage; // 0x1b8
	FSlateBrush NormalBrush; // 0x248
	FSlateBrush HoveredBrush; // 0x2d8
	FSlateBrush MenuDropdownImage; // 0x368
	FSlateBrush MenuDropdownNormalBorderBrush; // 0x3f8
	FSlateBrush MenuDropdownHoveredBorderBrush; // 0x488
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x98
	float RolloutAnimationSeconds; // 0x128
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	TArray<FFrameNumber> EventTimes; // 0x38
	TArray<FMovieSceneEventPtrs> Events; // 0x48
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FCharacterSelectMapping {
	FName RowName; // 0x0
	FName CharacterName; // 0x8
	TWeakObjectPtr<APlayerSlot> Slot; // 0x10
};

struct FCustomDataProviderVector : FCustomDataProvider {
	FVector Value; // 0x4
};

struct FCaravanMerchantRow : FTableRowBase {
	TSoftObjectPtr<UTexture2D> MerchantEntryBG; // 0x8
	TSoftObjectPtr<UTexture2D> MerchantHeaderBG; // 0x30
	FText MerchantName; // 0x58
	FText MerchantDesc; // 0x70
	FGameplayTagContainer CaravanTags; // 0x88
	bool DynamicCaravans; // 0xa8
	FDateTime PromotionBegin; // 0xb0
	FDateTime PromotionEnd; // 0xb8
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
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

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
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

struct FVertSliceMission {
	FName MissionHandle; // 0x0
	FText DisplayName; // 0x8
	TArray<FVertSliceObjective> Objectives; // 0x20
};

struct FReportPlayerEntry {
	FText DisplayName; // 0x0
	EZendeskReportingCategory Category; // 0x18
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FAnimEval_ClimbLink : FAnimEval {
	float MaxStartingDistance; // 0x48
	float MinClimbUp; // 0x4c
	float MaxClimbUp; // 0x50
	float MinTopDistance; // 0x54
	float MaxTopDistance; // 0x58
	float MinClimbDown; // 0x5c
	float MaxClimbDown; // 0x60
	TArray<UNavArea*> ClimbNavAreas; // 0x68
};

struct FChaserAnimState {
	char bWallAttached : 1; // 0x0
	char bDismounting : 1; // 0x0
	char bSwiveling : 1; // 0x0
	char bClingMoving : 1; // 0x0
	char bIsLeaping : 1; // 0x0
	char bIsLeapInterrupted : 1; // 0x0
	char bIsPouncing : 1; // 0x0
	char bIsPounceAttacking : 1; // 0x0
	float VelocityPitch; // 0x4
	EZombieAttachLocationType AttachLocationType; // 0x8
	bool bClingFacingRight; // 0x9
	bool bShouldTurn; // 0xa
	float LookYaw; // 0xc
	float TurnAngleRemaining; // 0x10
	float TurnThreshold; // 0x14
	float DraggingMinThreshold; // 0x18
};

struct FCharacterRandomizationData {
	int32_t RandomSeed; // 0x0
	int32_t MeshIndex; // 0x4
};

struct FImpactDecalDefinition {
	UDecalDefinition* Definition; // 0x0
};

struct FExplosionJostler {
	bool bShouldExcitePlacedEmitters; // 0x0
	float ExcitationRadius; // 0x4
	float SpeedOfPropagation; // 0x8
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x68
	FSlateBrush BackgroundImageSelected; // 0x98
	FSlateBrush BackgroundImageComposing; // 0x128
	FSlateBrush CaretImage; // 0x1b8
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FRemoveSessionFromPoolData {
	FString Pool; // 0x0
};

struct FFootPlantLerpRate {
	bool bUseContinuousBlend; // 0x0
	float HipAscent; // 0x4
	float HipDescent; // 0x8
	float FootAscent; // 0xc
	float FootDescent; // 0x10
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FCaravanItem {
	FDataTableRowHandle RowHandle; // 0x0
	bool Purchased; // 0x20
};

struct FGameplayEval_MovementMode : FGameplayEval {
	EMovementMode RequiredMovementMode; // 0x48
	UAnimContext_Character* Character; // 0x50
};

struct FDecalQualitySettings {
	int32_t DrawSameLocationMax; // 0x0
	float MaxPenaltyTimeDistance; // 0x4
	FVector2D PenaltyTime; // 0x8
	float InsignificantScreenSize; // 0x10
	bool bImpactSequenceReducesQuality; // 0x14
	TArray<EImpactNewQuality> ImpactSequenceNewQualities; // 0x18
	bool bNonLocalReducesQuality; // 0x28
	EImpactNewQuality NonLocalNewQuality; // 0x29
	FBehindCameraQuality BehindCameraFilter; // 0x2c
};

struct FLootSystemMapChainConfig : FTableRowBase {
	TArray<FLootSystemConfig> SystemConfigs; // 0x8
};

struct FEnemyAudioEvent {
	bool bSharedEvent; // 0x0
	UAkAudioEvent* AudioEvent; // 0x8
	ESharedEnemyAnimSound SharedSound; // 0x10
	FName BoneName; // 0x14
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
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

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FSG_Tuning_Struct {
	FFireModeBaseTuning FireModeBase_49_4ADCF5864EC4D6111E59B795D07D335F; // 0x0
	FFireModeShotgunTuning FireModeShotgun_43_0EEE57C4443E4D897D2FABA46F931190; // 0x38
	FSpreadTuning Spread_15_F415F8754C89D8B245443DA492E3C17B; // 0x60
	FClipAmmoTuning ClipAmmo_38_0ED8BB83467E9BF857264E8D92A94F92; // 0xc0
	FClipReloadTuning ClipReload_3_FD477EAF4A650B258356838D708AAE34; // 0xc4
	FSegmentedReloadTuning SegmentedReload_19_66F19B21455A1F0C5038B489E6A3B9C8; // 0xd0
	FRecoilTuning Recoil_22_DC8CB9CB4F5E35EC5EDD538DF975F051; // 0xe8
	FBulletPenetrationTuning BulletPenetration_35_B0DFEF324FDC430C19457FBCDEF271BB; // 0x228
	FWeaponMoveSpeedTuning WeaponMoveSpeed_25_2A4A51ED41ECFB290774028D54D45726; // 0x22c
	FItemCycleTuning ItemCycle_30_CA9B082F48FA2D182031A2AE78627377; // 0x298
	FADSTuning ADS_46_3AFB480F4AB0BAA4BA6137B19440AB7F; // 0x2ac
	FItemAnimationDataTuning ItemAnimationData_32_D82CE8AB42820C1F65139D9223D1730A; // 0x2b4
};

struct FMovementSpeedConfig {
	FMovementSpeedStanceConfig Standing; // 0x0
	FMovementSpeedStanceConfig Crouched; // 0x30
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FAssetLookupCurveFloat {
	UCurveFloat* Default; // 0x0
	TArray<FAssetLookupCurveFloatEntry> Lookups; // 0x8
};

struct FItemRowAndQuantity {
	FDataTableRowHandle RowHandle; // 0x0
	int32_t Quantity; // 0x20
	TArray<FDataTableRowHandle> Attachments; // 0x28
	int32_t ClipAmmo; // 0x38
};

struct FCinematicSubtitleTimingRow : FTableRowBase {
	FText Speaker; // 0x8
	FText Subtitle; // 0x20
	float StartTime; // 0x38
	float EndTime; // 0x3c
};

struct FCheckpointSaferoomConfig {
	ADoor* Entrance; // 0x0
	ADoor* Exit; // 0x8
};

struct FBumpEmitterInfo : FEmitterInfoBase {
	UAkAudioEvent* BumpEvent; // 0x20
	float Probability; // 0x28
	float SpeedThreshold; // 0x2c
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FFloatMaterialParameter {
	FName ParameterName; // 0x0
	FFloatParameterBehavior ActivationBehavior; // 0x8
	FFloatParameterBehavior DeactivationBehavior; // 0x18
};

struct FTitanTuning : FTuningDataBase {
	TArray<float> TentacleEmergeDelay; // 0x8
	float MinTimeBetweenAttacks; // 0x18
	float MaxTimeBetweenAttacks; // 0x1c
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FTRSSplineMeshActorSplineMeshElement {
	UStaticMesh* Mesh; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FHeroLedgeHangData {
	EHeroLedgeHangState State; // 0x0
};

struct FArmorHitGameplayTag {
	float HealthPctThreshold; // 0x0
	FGameplayTag Tag; // 0x4
};

struct FHarpoonData {
	FVector StartLocation; // 0x0
	FVector SlideDir; // 0xc
	FVector Source; // 0x18
	bool bEndOnGround; // 0x24
	float HeightApplied; // 0x28
	float Elapsed; // 0x2c
	float Speed; // 0x30
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
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

struct FAgoraHydraProductJson : FAgoraHydraProductWithoutSlugJson {
	FString Slug; // 0x58
};

struct FGameplayEval_CommWheelAction : FGameplayEval {
	ECommWheelAction CommWheelAction; // 0x48
};

struct FAssetLookupGameplayTagContainerEntry {
	FGameplayTag Tag; // 0x0
	FGameplayTagContainer GameplayTagContainer; // 0x8
};

struct FBotPlaystyleConfig {
	EBotType BotType; // 0x0
	FBotBehaviorConfig BehaviorConfig; // 0x8
	FBotAwarenessConfig AwarenessConfig; // 0x30
	FBotInventoryConfig InventoryConfig; // 0x318
	FBotInventoryConfig PlayerInventoryConfig; // 0x478
	FInventoryLoadout Loadout; // 0x5d8
	FBotTetherConfig TetherConfig; // 0x610
	FBotCombatConfig CombatConfig; // 0x660
	FBotGameplayCardsConfig GameplayCardsConfig; // 0x7e0
	TArray<UGameplayEffect*> InitAppliedEffects; // 0x7f8
	FDataTableRowHandle SpeakerMatch; // 0x808
	UGameplayEvaluatorSet* FilterSet; // 0x828
};

struct FStaticMeshConfig {
	FMeshTraitConfig MeshConfig; // 0x0
	UStaticMesh* StaticMesh; // 0xa0
	UStaticMeshComponent* ComponentClass; // 0xa8
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
};

struct FHeroIntensity {
	float Current; // 0x0
};

struct FMutilationInfo {
	EMutilationRegion Region; // 0x0
	EMutilationType Type; // 0x1
	FVector Impulse; // 0x4
	FVector ImpactPoint; // 0x10
	AActor* SourceActor; // 0x20
};

struct FNanopatchBucketConfiguration {
	FString Bucket; // 0x0
	TArray<FNanopatchCVar> CVars; // 0x10
};

struct FCaravanRaritySpec {
	FDataTableRowHandle ProductRarity; // 0x0
	EProductClass ProductClass; // 0x20
};

struct FGobiReadyStatus {
	APlayerState* PlayerState; // 0x0
	bool bIsReady; // 0x8
};

struct FDirectorCardWeightsRow : FTableRowBase {
	TMap<EMissionDifficulty, FDifficultyThreatWeights> DifficultyThreatWeights; // 0x8
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FBlueprintSpawnDetails {
	UBlueprint* ActorToSpawn; // 0x0
	TArray<UBlueprint*> BlueprintWhitelist; // 0x8
	FTransform RelativeTransform; // 0x20
};

struct FAgoraHydraGetAllowListSecuritySettingBody {
	EAgoraHydraGetAllowListSecuritySetting SecuritySetting; // 0x0
};

struct FLightParameterFlickerModifier {
	FVector2D FlickerFrequency; // 0x20
	float FlickeredIntensity; // 0x28
	float FlickeredTemperature; // 0x2c
	UCurveFloat* FlickerCurve; // 0x30
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FPVPHoldoutSupplyPointsConfig {
	float MinHealthyMatchTime; // 0x0
	float MaxHealthyMatchTime; // 0x4
	float PointsPerSecond; // 0x8
	float BadGameScalar; // 0xc
	float WinScalar; // 0x10
	float WinFlatBonus; // 0x14
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FBoneInfo {
	FName Name; // 0x0
	int32_t Index; // 0x8
	TArray<FVector> Vertices; // 0x10
	TArray<int32_t> Neighbors; // 0x20
};

struct FReviveInfo {
	float NewHealth; // 0x0
	float NewPermanentHealth; // 0x4
	int32_t IncapStrikesToReturn; // 0x8
	FGameplayTag ReviveSourceTag; // 0xc
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FMatchmakingTelemetry {
	TArray<FMatchmakingGameModeTelemetry> GameModes; // 0x0
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneBoolChannel Curve; // 0x20
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FGobiNavLinkInstanceData : FActorComponentInstanceData {
	uint32_t CustomUserID; // 0x68
	TArray<FVector> ContextLocations; // 0x70
	TArray<float> ContextDistances; // 0x80
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FActionKeybind : FKeybindRowBase {
	FName ActionName; // 0x10
	FText DisplayName; // 0x18
	FString OtherActionsToBeBoundWithThis; // 0x30
	FText MultiActionDisplayName; // 0x40
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

struct FFactId {
	FString DictKey; // 0x0
	FString FactKey; // 0x10
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FHeroAnimStateFP {
	char bIsKnockedBack : 1; // 0x0
	bool bCanEnterKnockback; // 0x4
	bool bIsSprinting; // 0x5
	bool bSprintIn; // 0x6
	bool bSprintOut; // 0x7
	bool bIsIncap; // 0x8
	bool bPlayingFullbodyAnim; // 0x9
	bool bWantsReachOutForUsable; // 0xa
	float LeftHandCopyBoneWeight; // 0xc
	float RightHandCopyBoneWeight; // 0x10
	float SprintStateStartPos; // 0x14
	float SprintLoopPlayRate; // 0x18
	float ControlRotationYaw; // 0x1c
	float ControlRotationPitch; // 0x20
	EPlayerSprintState SprintState; // 0x24
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FGameplayEval_OverlapActor : FGameplayEval {
	FAIDataProviderFloatValue Radius_DP; // 0x48
	FAIDataProviderFloatValue HalfHeight_DP; // 0x80
	FVector Offset; // 0xb8
	UAnimContext_Transform* BoundsTransformContext; // 0xc8
	UAnimContext_Actor* TestActorContext; // 0xd0
};

struct FWanderPopulationBucketDensityLevel {
	float SpawnersPerSqrKM; // 0x0
	int32_t MaxOverlapsPerSeparationDistance; // 0x4
	TArray<FActiveAreaSetHuddleDefinition> HuddleDefinitions; // 0x8
	UAISpawnActorVariantsConfig* SpawnActorVariantsConfig; // 0x18
};

struct FClimbMetric {
	int32_t Count; // 0x0
	float ClimbUp; // 0x4
	float Top; // 0x8
	float ClimbDown; // 0xc
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
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

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
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

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FSpawnPointBudget {
	uint32_t NumPlayers; // 0x0
	int32_t WanderBudget; // 0x4
	int32_t HordeBudget; // 0x8
};

struct FWeaponSwaySpringTuning {
	float DampingFactor; // 0x0
	float Stiffness; // 0x4
};

struct FTraceMeleeTuningAttack {
	FVector2D StartTraceRotationOffset; // 0x0
	FVector2D EndTraceRotationOffset; // 0x8
	int32_t DesiredTraceCount; // 0x10
	float AllowableTargetAngle; // 0x14
	float MeleeStateLength; // 0x1c
	float MeleeStateInterruptiblePercent; // 0x20
	float MeleeImpactStateLength; // 0x24
	float InitialCleavePower; // 0x28
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x2a0
	FButtonStyle RestoreButtonStyle; // 0x538
	FButtonStyle CloseButtonStyle; // 0x7d0
	FTextBlockStyle TitleTextStyle; // 0xa68
	FSlateBrush ActiveTitleBrush; // 0xd08
	FSlateBrush InactiveTitleBrush; // 0xd98
	FSlateBrush FlashTitleBrush; // 0xe28
	FSlateColor BackgroundColor; // 0xeb8
	FSlateBrush OutlineBrush; // 0xee8
	FSlateColor OutlineColor; // 0xf78
	FSlateBrush BorderBrush; // 0xfa8
	FSlateBrush BackgroundBrush; // 0x1038
	FSlateBrush ChildBackgroundBrush; // 0x10c8
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FAnimNode_BlendListByGameplayTagQuery : FAnimNode_BlendListBase {
	TArray<FCachedGameplayTagQuery> TagQueries; // 0xb8
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FBruteAnimState {
	bool bBreakableCollision; // 0x0
	FVector BreakableCollisionDirection; // 0x4
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FRolledLootSpec {
	FGameplayTag LootTag; // 0x0
	int32_t NumToSpawn; // 0x8
};

struct FNotificationItem {
	ENotificationType Type; // 0x0
	FGameplayTagQuery ActorTagQuery; // 0x8
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FAppliedWeaponSkinCollectionJson {
	TArray<FAppliedWeaponSkinJson> AppliedWeaponSkins; // 0x0
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FGobiParticleParam : FParticleSysParam {
	bool bImpactValue; // 0x80
};

struct FDifficultyThreatWeights {
	TArray<int32_t> TicketCountForThreat; // 0x0
};

struct FReferenceFrame {
	UAnimSequence* Sequence; // 0x0
	float ExplicitTime; // 0x8
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FMeshTraitConfig {
	EActorRole CheckForMeshOn; // 0x0
	EActorRole AttachNewComponentTo; // 0x1
	FGameplayTag ComponentGameplayTag; // 0x4
	FGameplayTag ParentComponentGameplayTag; // 0xc
	FName SocketName; // 0x14
	EAttachmentRule AttachmentRule; // 0x1c
	bool bRelativeTransform; // 0x1d
	FTransform RelativeTransform; // 0x20
	bool bInWeldSimulatedBodies; // 0x50
	bool bOverrideCollisionProfile; // 0x51
	FCollisionProfileName CollisionProfileOverrideName; // 0x54
	FGameplayTagContainer AdditionalComponentTags; // 0x60
	FMeshLightingOverrides LightingOverrides; // 0x80
	FMeshRenderingOverrides RenderingOverrides; // 0x84
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

struct FCustomDataProviderVector2D : FCustomDataProvider {
	FVector2D Value; // 0x4
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FAssetLookupWeaponTracerEntry {
	FGameplayTag Tag; // 0x0
	UWeaponTracer* WeaponTracer; // 0x8
};

struct FWeakSpotBaseTuning {
	FName TuningName; // 0x0
	FGamePropertyFloat MaxHealth; // 0x8
	float StumbleAccumMultiplier; // 0x40
	bool bForwardDamageToHealthComponent; // 0x44
	float ForwardDamageToHealthComponentMutliplier; // 0x48
	bool bForwardedDamageAppliesInflictDamageType; // 0x4c
	bool bClampForwardedDamageToWeakSpotHealth; // 0x4d
	float InflictDamage; // 0x50
};

struct FGameplayEval_PingTarget : FGameplayEval {
	FGameplayTag PingTarget; // 0x48
};

struct FPlayerStatContainer {
	int32_t Base; // 0x0
	TMap<FName, int32_t> Keys; // 0x8
};

struct FWeaponAnimState {
	float CurrentADSPercent; // 0x0
	float OneMinusCurrentADSPercent; // 0x4
	float ADSTransitionStartPosition; // 0x8
	bool bIsADSActive; // 0xc
	bool bWantsADSAnimations; // 0xd
	bool bWeaponsDisabled; // 0xe
	bool bMaxADSPercent; // 0xf
	bool bZeroADSPercent; // 0x10
	bool bIsFiring; // 0x11
	FGameplayTag WeaponStance; // 0x14
	FVector PushbackTranslation; // 0x1c
	FRotator GunKickOffset; // 0x28
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
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

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
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

struct FFallDamageData {
	UGobiDamageType* DamageType; // 0x0
	TArray<FFallDamageTypeMap> DamageTypes; // 0x8
	UCurveFloat* DamageCurve; // 0x18
	float MinDistanceToTakeDamage; // 0x20
	float FatalDistance; // 0x24
};

struct FGameplayEval_HitReactionDamageAmount : FGameplayEval {
	float Damage; // 0x48
	FAIDataProviderFloatValue DamageAmount; // 0x50
	bool bAsPercent; // 0x88
	ECompareOp CompareOperation; // 0x89
	UAnimContext_HitReactionInfo* HitReaction; // 0x90
};

struct FGhostMaterial {
	TArray<FName> SlotNames; // 0x0
	UMaterialInterface* Material; // 0x10
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FOnlineMapChain : FTableRowBase {
	FText MapChainName; // 0x8
	EGameModeType GameMode; // 0x20
	int32_t MapChainOrder; // 0x24
	FDataTableRowHandle LootSystemMapChain; // 0x28
	TArray<FDataTableRowHandle> Maps; // 0x48
	bool bIsForShowDemo; // 0x58
	bool bIsOnlineOnly; // 0x59
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
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

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FAnimEval_MontageLength : FAnimEval {
	float NormalizeTo; // 0x48
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FMatchmakingSessionDataTaskData {
	FString SessionId; // 0x0
	FString JsonString; // 0x10
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa8
	FName Layer; // 0xb0
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
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

struct FItemAnimationDataTuning {
	FFirstPersonAdditiveConfig AdditiveConfig; // 0x0
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FAnimNode_BlendListByGameplayTag : FAnimNode_BlendListBase {
	TArray<FGameplayTag> SupportedGameplayTags; // 0x98
	FGameplayTag ActiveGameplayTag; // 0xa8
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariable BoundVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x28
	FNiagaraVariable DefaultValueIfNonExistent; // 0x50
};

struct FAssetLookupNameArrayEntry {
	FGameplayTag Tag; // 0x0
	TArray<FName> Names; // 0x8
};

struct FFloatParameterBehavior {
	UCurveFloat* FloatCurve; // 0x0
	float Value; // 0x8
	bool bPlayCurveReversed; // 0xc
};

struct FGameplayEval_HitReactionHealth : FGameplayEval {
	float TestHealthPercent; // 0x48
	ECompareOp CompareOperation; // 0x4c
	UAnimContext_HitReactionInfo* HitReaction; // 0x50
};

struct FReplicatedDamageInfo {
	int32_t Index; // 0x0
	float Damage; // 0x4
	float ServerWorldTime; // 0x8
	FName BoneName; // 0xc
	UGobiDamageType* DamageType; // 0x18
	AActor* Source; // 0x20
	FName SourceName; // 0x28
	FVector SourceLocation; // 0x30
	uint16_t DamageContextFlags; // 0x3c
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

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FExplodeInfo {
	bool bExploded; // 0x0
	FVector Impulse; // 0x4
	FVector ImpactPoint; // 0x10
	AActor* SourceActor; // 0x20
	float PctToDismember; // 0x28
	FVector DismemberImpulse; // 0x2c
};

struct FProfileDataCapture {
	FString WorldName; // 0x0
	FString VersionString; // 0x10
	uint32_t Changelist; // 0x20
	FString BuildConfig; // 0x28
	FString PlatformName; // 0x38
	FString DeviceProfileName; // 0x48
	FString Guid; // 0x58
	TArray<FProfileDataRecord> ProfileDataRecords; // 0x68
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FChallengeSetRow : FTableRowBase {
	TArray<UChallengeData*> Challenges; // 0x8
	TArray<FChallengeRankReward> RankRewards; // 0x18
	FTimespan Duration; // 0x28
	FDateTime StartDate; // 0x30
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

struct FHealthDamageRange {
	float Start; // 0x0
	float End; // 0x4
	float StartValue; // 0x8
	float EndValue; // 0xc
	FName Filter; // 0x10
};

struct FTutorialTile {
	FText Title; // 0x0
	FText Description; // 0x18
	UTexture2D* Image; // 0x30
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78
	TArray<FBoneReference> SourceBones; // 0x88
	TArray<FBoneReference> OnlyDriveBones; // 0x98
	TArray<FPoseDriverTarget> PoseTargets; // 0xa8
	FBoneReference EvalSpaceBone; // 0xe8
	FRBFParams RBFParams; // 0xf8
	EPoseDriverSource DriveSource; // 0x124
	EPoseDriverOutput DriveOutput; // 0x125
	char bOnlyDriveSelectedBones : 1; // 0x126
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FZombieMovementForceAttributes {
	float Speed; // 0x0
	float EndSpeed; // 0x4
	float Duration; // 0x8
};

struct FRagdollWaterData {
	UWaterRagdollSettings* Settings; // 0x0
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FFortDediParameterData {
	FString Name; // 0x0
	TArray<FString> Options; // 0x10
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FTitanStage2TentacleShared {
	float SmashTellSecs; // 0x0
};

struct FCustomDataProviderFloatCurve : FCustomDataProvider {
	UCurveFloat* Value; // 0x8
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FPerThreatLevelSpawnDelay {
	int32_t MinThreatLevel; // 0x0
	float DelayBeforeInitialSpawn; // 0x4
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FAnimNode_FocusTracking : FAnimNode_Base {
	bool bMeshSpaceAdditive; // 0x10
	FVector WorldLookAt; // 0x14
	float Alpha; // 0x20
	float RootYawRotation; // 0x24
	FRotator MeshToComponent; // 0x28
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FReplicatedEffectActorInfo {
	float Lifetime; // 0x0
	int32_t RandomSeed; // 0x4
	int32_t Parity; // 0x8
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0x48
	EEvaluatorDataSource DataSource; // 0x50
	EEvaluatorMode EvaluatorMode; // 0x51
};

struct FZombieMutationGameplayCardRow : FGameplayCardRow {
	int32_t MutationPoints; // 0x180
	TArray<FDataTableRowHandle> Prereqs; // 0x188
	FDataTableRowHandle OwningTree; // 0x198
};

struct FBulletPenetrationTuning {
	float PenetrationPower; // 0x0
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	ELevelVisibility Visibility; // 0x20
	TArray<FName> LevelNames; // 0x28
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
	char bOverride_VolumetricFogGridPixelSizeScalar : 1; // 0x1e
	char bOverride_FogDensity : 1; // 0x1e
	char bOverride_FogHeightFalloff : 1; // 0x1e
	char bOverride_FogStartDistance : 1; // 0x1e
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
	char RayTracingAO : 1; // 0x43c
	int32_t RayTracingAOSamplesPerPixel; // 0x440
	FLinearColor IndirectLightingColor; // 0x444
	float IndirectLightingIntensity; // 0x454
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x458
	int32_t RayTracingGIMaxBounces; // 0x45c
	int32_t RayTracingGISamplesPerPixel; // 0x460
	float ColorGradingIntensity; // 0x464
	UTexture* ColorGradingLUT; // 0x468
	float DepthOfFieldSensorWidth; // 0x470
	float DepthOfFieldFocalDistance; // 0x474
	float DepthOfFieldDepthBlurAmount; // 0x478
	float DepthOfFieldDepthBlurRadius; // 0x47c
	float DepthOfFieldFocalRegion; // 0x480
	float DepthOfFieldNearTransitionRegion; // 0x484
	float DepthOfFieldFarTransitionRegion; // 0x488
	float DepthOfFieldScale; // 0x48c
	float DepthOfFieldNearBlurSize; // 0x490
	float DepthOfFieldFarBlurSize; // 0x494
	float DepthOfFieldOcclusion; // 0x498
	float DepthOfFieldSkyFocusDistance; // 0x49c
	float DepthOfFieldVignetteSize; // 0x4a0
	char bOverride_CasSharpening : 1; // 0x4a4
	float CasSharpening; // 0x4a8
	char bOverride_EnableCasSharpening : 1; // 0x4ac
	char EnableCasSharpening : 1; // 0x4ac
	float MotionBlurAmount; // 0x4b0
	float MotionBlurMax; // 0x4b4
	int32_t MotionBlurTargetFPS; // 0x4b8
	float MotionBlurPerObjectSize; // 0x4bc
	float LPVIntensity; // 0x4c0
	float LPVVplInjectionBias; // 0x4c4
	float LPVSize; // 0x4c8
	float LPVSecondaryOcclusionIntensity; // 0x4cc
	float LPVSecondaryBounceIntensity; // 0x4d0
	float LPVGeometryVolumeBias; // 0x4d4
	float LPVEmissiveInjectionIntensity; // 0x4d8
	float LPVDirectionalOcclusionIntensity; // 0x4dc
	float LPVDirectionalOcclusionRadius; // 0x4e0
	float LPVDiffuseOcclusionExponent; // 0x4e4
	float LPVSpecularOcclusionExponent; // 0x4e8
	float LPVDiffuseOcclusionIntensity; // 0x4ec
	float LPVSpecularOcclusionIntensity; // 0x4f0
	EReflectionsType ReflectionsType; // 0x4f4
	float ScreenSpaceReflectionIntensity; // 0x4f8
	float ScreenSpaceReflectionQuality; // 0x4fc
	float ScreenSpaceReflectionMaxRoughness; // 0x500
	float RayTracingReflectionsMaxRoughness; // 0x504
	int32_t RayTracingReflectionsMaxBounces; // 0x508
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x50c
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x510
	char RayTracingReflectionsTranslucency : 1; // 0x511
	ETranslucencyType TranslucencyType; // 0x512
	float RayTracingTranslucencyMaxRoughness; // 0x514
	int32_t RayTracingTranslucencyRefractionRays; // 0x518
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x51c
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x520
	char RayTracingTranslucencyRefraction : 1; // 0x521
	int32_t PathTracingMaxBounces; // 0x524
	int32_t PathTracingSamplesPerPixel; // 0x528
	float LPVFadeRange; // 0x52c
	float LPVDirectionalOcclusionFadeRange; // 0x530
	float ScreenPercentage; // 0x534
	FWeightedBlendables WeightedBlendables; // 0x538
	float VolumetricFogGridPixelSizeScalar; // 0x548
	float FogDensity; // 0x54c
	float FogHeightFalloff; // 0x550
	float FogStartDistance; // 0x554
};

struct FFallDamageTypeMap {
	float DamageAmountMin; // 0x0
	float DamageAmountMax; // 0x4
	UGobiDamageType* DamageType; // 0x8
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FParticleSet {
	UParticleSystem* RootParticleSystem; // 0x18
	FTransform RelativeTransform; // 0x20
	bool bAttach; // 0x50
	bool bVisibilityMatchesMesh; // 0x51
	FName SkelMeshActorParamName; // 0x54
	TArray<FParticleSetInfo> Particles; // 0x60
};

struct FBotCombatSystem {
	ABotController* OwnerBotCtrl; // 0x0
	FBotThreatList ThreatList; // 0x470
	FGameplayTag BotBehaviorNoCombatTag; // 0x4c8
};

struct FItemObservableToolTipOverride {
	FText ItemCategory; // 0x0
	FText ItemName; // 0x18
	FText TooltipDescription; // 0x30
	FText CalloutText; // 0x48
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

struct FSpawnRequestContext {
	AGobiPlayerState* PlayerToSpawn; // 0x0
	AActor* StartSpot; // 0x8
	bool bSpawnImmediately; // 0x10
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FRecoilViewKickTuning {
	float RollSpringSnap; // 0x0
	float RollSpringDamping; // 0x4
};

struct FZombieMutationVariant {
	APawn* PawnClass; // 0x0
	FGameplayTagQuery TagRequirements; // 0x8
	bool Disabled; // 0x50
	bool DisabledForTradeShow; // 0x51
};

struct FGameplayEval_SelectedItemAnimationStance : FGameplayEval {
	FGameplayTag RequiredAnimStanceTag; // 0x48
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

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FGameplayEval_DirectorPacingPhase : FGameplayEval {
	EPacingPhase PacingPhase; // 0x48
};

struct FFPFOVConfiguration {
	FScreenModeFPConfiguration FullFrameConfiguration; // 0x0
	FScreenModeFPConfiguration VerticalSplitConfiguration; // 0xc
	FScreenModeFPConfiguration HorizontalSplitConfiguration; // 0x18
};

struct FSni_Tuning_Struct {
	FFireModeBaseTuning FireModeBase_37_D9E8EFDC42D066DB5224E9AA490BD74E; // 0x0
	FFireModeSingleTraceTuning FireModeSingleTrace_31_2930F3884F5B95E1907B53AF3BCF55EB; // 0x38
	FSpreadTuning Spread_9_A10B47714F0C1FDBBA45D0A99B81AA19; // 0x50
	FClipAmmoTuning ClipAmmo_28_CA6B01F945A85F1B288B0AB11853ABAE; // 0xb0
	FClipReloadTuning ClipReload_3_FD477EAF4A650B258356838D708AAE34; // 0xb4
	FRecoilTuning Recoil_12_657DC6F3473DC005944700896F0EC129; // 0xc0
	FBulletPenetrationTuning BulletPenetration_25_F244BF114AFDD6F1B4F3DCBA89B1D9D4; // 0x200
	FWeaponMoveSpeedTuning WeaponMoveSpeed_15_2168A74A4CAA2EEF788D1CAC87C944DE; // 0x204
	FItemCycleTuning ItemCycle_20_E492BC8E443F252E7B343BA9136D9754; // 0x270
	FADSTuning ADS_34_12DFCFE546DDD060922ACD9E0E87DFA6; // 0x284
	FItemAnimationDataTuning ItemAnimationData_22_A5702B9F440C090AF994FCB5858B3E0D; // 0x28c
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

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FFirstPersonFoVAttachmentConfiguration {
	FGameplayTag CorrespondingAttachment; // 0x0
	FFPFOVConfiguration FOV; // 0x8
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	bool bUseAttachedParent; // 0x18
	bool bCopyCurves; // 0x19
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FMixProfileRow : FTableRowBase {
	FText DisplayName; // 0x8
	UAkAudioEvent* AudioEvent; // 0x20
	float MasterVolume; // 0x28
	float SFXVolume; // 0x2c
	float DialogVolume; // 0x30
	float MusicVolume; // 0x34
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FAIDataProviderUObjectValue EQSDataProvider; // 0x18
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x50
	EEnvQueryRunMode RunMode; // 0x78
	char bUseBBKeyForQueryTemplate : 1; // 0x7c
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FAnimState3P {
	bool bStartTransition; // 0x0
	bool bStopTransition; // 0x1
	bool bBypassStopTransition; // 0x2
	float YawCounterRotation; // 0x4
};

struct FClipAmmoTuning {
	int32_t MaxClipAmount; // 0x0
};

struct FCardInPlay {
	TWeakObjectPtr<UAISpawnCard> SpawnCard; // 0x0
	TArray<TWeakObjectPtr<AGobiCharacter>> AiCharacters; // 0x8
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FRichTextGlobalStyle {
	FName StyleName; // 0x0
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FFilteredCards {
	TArray<FDataTableRowHandle> OwnerCards; // 0x0
	TArray<FDataTableRowHandle> PartyCards; // 0x10
};

struct FTitanTurn {
	float DelayBetweenTurnsSecsMin; // 0x0
	float Turn90Secs; // 0x4
	float Turn180Secs; // 0x8
};

struct FZombieUIData {
	FText ZombieDisplayName; // 0x0
	FText ZombieDescription; // 0x18
	UTexture2D* HUDPortrait; // 0x30
	FZombieAbilityData PrimaryAttackData; // 0x38
	FZombieAbilityData BasicAttackData; // 0x70
	FZombieAbilityData SpecialAttack1Data; // 0xa8
	FZombieAbilityData SpecialAttack2Data; // 0xe0
	UTexture2D* Thumbnail; // 0x118
};

struct FGibCapDefinition {
	UStaticMesh* StaticMesh; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FImpactEmitterDefinition {
	UParticleSystem* Emitter; // 0x0
	bool bAttachToHitActor; // 0x8
	TMap<FName, UImpactEffectConfig*> Events; // 0x10
	bool bMaterialNormalParam; // 0x60
	bool bMaterialLocationParam; // 0x61
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FMeshMergeConfiguration {
	USkeletalMesh* MergedMesh; // 0x0
	TArray<FSkeletalMeshSetMaterialOverride> MaterialOverrides; // 0x8
	TArray<UMeshMaterialParamSet*> MaterialParamSets; // 0x18
	TArray<FSkeletalMeshPiece> DismembermentPieces; // 0x28
	UMaterialInterface* InnerMeshMaterial; // 0x38
};

struct FGlobalAssetTable {
	UAssetTable* AssetTable; // 0x0
	bool bLoadOnDedicatedServer; // 0x8
	EGlobalAssetPhase LoadingPhase; // 0x9
};

struct FMissionObjectiveCondition : FUsableCondition {
	FDataTableRowHandle MissionObjective; // 0x28
	EMissionObjectiveConditionType ConditionType; // 0x48
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

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x2
};

struct FDialogueResponse {
	FName ResponseName; // 0x0
	TArray<FName> Variations; // 0x8
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
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

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FOvercastHeartbeatData {
	EFortDediStatus Status; // 0x0
	FString GameMode; // 0x8
	FString Map; // 0x18
	FOvercastNetworkData Network; // 0x28
	float AverageFramerate; // 0x38
	FOvercastCPUData Cpu; // 0x3c
	FOvercastCPUData PeakCpu; // 0x48
	FOvercastCPUAccu CpuAccu; // 0x54
	FOvercastMemoryData Memory; // 0x60
	FOvercastMemoryData PeakMemory; // 0x68
	FOvercastPlayersData Players; // 0x70
	int32_t AiCharacters; // 0xa0
	int32_t Port; // 0xa4
};

struct FPostRoundSummaryStatValue {
	FText Name; // 0x0
	int32_t OldValue; // 0x18
	int32_t NewValue; // 0x1c
	bool bIsTimer; // 0x20
};

struct FScenarioEval_AllUsablesUsed : FScenarioEval {
	bool bAllUsablesRequired; // 0x40
	int32_t DesiredUsablesUsed; // 0x44
	ECompareOp Op; // 0x48
};

struct FRawInputDeviceAxisProperties {
	char bEnabled : 1; // 0x0
	FKey Key; // 0x8
	char bInverted : 1; // 0x20
	char bGamepadStick : 1; // 0x20
	float Offset; // 0x24
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
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

struct FDifficultyFloat : FDifficultyValue {
	float Easy; // 0x0
	float Normal; // 0x4
	float Hard; // 0x8
	float Legendary; // 0xc
	float PVP; // 0x10
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x20
};

struct FSoundModulation {
	TArray<USoundModulationPluginSourceSettingsBase*> Settings; // 0x0
};

struct FRepMovement {
	FVector LinearVelocity; // 0x0
	FVector AngularVelocity; // 0xc
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
	bool bSmoothingTimeStamp; // 0x30
	float SmoothingTimeStamp; // 0x34
	char bSimulatedPhysicSleep : 1; // 0x38
	char bRepPhysics : 1; // 0x38
	EVectorQuantization LocationQuantizationLevel; // 0x39
	EVectorQuantization VelocityQuantizationLevel; // 0x3a
	ERotatorQuantization RotationQuantizationLevel; // 0x3b
};

struct FRadialDamage {
	float Damage; // 0x0
	float PermanentDamage; // 0x4
	float Radius; // 0x8
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FAttackStumbleMontage {
	UAnimMontage* PounceMontage; // 0x0
	UAnimMontage* VictimMontage; // 0x8
};

struct FLocoTurnInPlaceThreshold {
	bool bEnabled; // 0x0
	float AngleThreshold; // 0x4
	float TurnDelay; // 0x8
	FGameplayTag RightTurnTag; // 0xc
	FGameplayTag LeftTurnTag; // 0x14
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FAnimNode_FocusTrackingSlot : FAnimNode_Slot {
	FVector WorldLookAt; // 0x48
	float Alpha; // 0x54
	bool bAlignToTarget; // 0x58
	float BlendInSpeed; // 0x5c
	float BlendOutSpeed; // 0x60
	float RootYawRotation; // 0x64
	bool bMeshSpaceAdditive; // 0x68
	FRotator MeshToComponent; // 0x6c
	float ActualAlpha; // 0x78
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
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

struct FActiveAreaSetDebugData {
	int32_t NumAreas; // 0x0
	int32_t NumSpawnedSpawners; // 0x4
	int32_t NumActiveSpawners; // 0x8
	int32_t NumSeenSpawners; // 0xc
};

struct FSourceEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FWebServiceSessionCreateWithUsersData {
	FString UserData; // 0x0
	bool bCrossPlayEnabled; // 0x10
	FString SessionData; // 0x18
	TArray<FWebServiceSessionCreateParticipant> Participants; // 0x28
};

struct FCutsceneDefinitionRow : FTableRowBase {
	FCutsceneDefinition CutsceneDefinition; // 0x8
};

struct FWebServiceSessionAddRemoveParticipant {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FPackedPlayerDeckData {
	char DeckIndex; // 0x0
	TArray<char> AffinityCounts; // 0x8
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

struct FCameraShakeReaction {
	UCameraShake* CameraShake; // 0x0
	FGameplayTagQuery DamageTypeTagQuery; // 0x8
	float IdealAngle; // 0x50
	float MaxAngleOffset; // 0x54
	FVector2D DamagePercentWindow; // 0x58
};

struct FGameplayTagWeight {
	FGameplayTagContainer Tags; // 0x0
	float Weight; // 0x20
};

struct FMantleHeightDefinition {
	TArray<UAnimMontage*> MantleMontages; // 0x0
	float DistanceToStartMontage; // 0x10
	float PlayOnTotalMantleDistance; // 0x14
	float MantleDestinationDistanceForgiveness; // 0x18
	float MantleTimeOverride; // 0x1c
};

struct FGenericMusicRow : FTableRowBase {
	EMusicEventBranchingMode BranchingMode; // 0x8
	TMap<FGameplayTag, FDataTableRowHandle> CharacterTagToMusicEventMapping; // 0x10
	TMap<AActor*, FDataTableRowHandle> ActorToMusicEventMapping; // 0x60
};

struct FWebSocketSessionRecvMessage {
	EWebSocketSessionRecvMessage MessageType; // 0x0
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

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x38
};

struct FGameplayEval_PlayerStaminaState : FGameplayEval {
	bool bIsRangeCheck; // 0x48
	EStaminaState DesiredStaminaState; // 0x49
	EStaminaState MinStaminaState; // 0x4a
	EStaminaState MaxStaminaState; // 0x4b
	UGameplayContext_PlayerStaminaState* StaminaState; // 0x50
};

struct FPounceInitialAttackDamage {
	UGobiDamageType* DamageType; // 0x0
	FVector2D DamageAmount; // 0x8
	float MaxLeapDistance; // 0x10
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x28
	UNiagaraDataInterface* DataInterface; // 0x40
};

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FLipsyncLocalizationRow : FTableRowBase {
	FString UnrealLanguageCode; // 0x8
	FString WwiseLanguageCode; // 0x18
	bool bIsDefaultLanguage; // 0x28
	TSoftObjectPtr<UDataTable> LineTable; // 0x30
};

struct FCharacterDefinitionRow : FTableRowBase {
	FName Slug; // 0x8
	FText DisplayName; // 0x10
	UTexture2D* Portrait; // 0x28
	UTexture2D* PartyStatusPortrait; // 0x30
	TSoftObjectPtr<UTexture2D> CustomizationPortrait; // 0x38
	UTexture2D* WaypointIcon; // 0x60
	FDataTableRowHandle SpeakerRowHandle; // 0x68
	UDataTable* CharacterCustomizationTable; // 0x88
	FDataTableRowHandle DefaultSkinSet; // 0x90
	USoundCollectionAsset* SoundCollectionAsset; // 0xb0
	TArray<FDataTableRowHandle> GameplayCards; // 0xb8
	UFacialAnimationData* FacialAnimationData; // 0xc8
	bool bEnabled; // 0xd0
	bool bEnabledForTradeShow; // 0xd1
	FGameplayTagContainer DefaultTags; // 0xd8
	FInventoryLoadout DefaultCharacterLoadout; // 0xf8
	TArray<UAkAudioEvent*> CharacterSelectVOLines; // 0x130
	TSoftObjectPtr<UAnimMontage> PreRoundAnimation; // 0x140
	TSoftObjectPtr<UAnimMontage> PostRoundAnimation; // 0x168
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

struct FAgoraHydraInventoryItemDefinitionJson {
	FString Slug; // 0x0
	FString Name; // 0x10
	bool Client_Access; // 0x20
};

struct FBotBehaviorConfig {
	EBotClassRole ClassRole; // 0x0
	float CommDenyAimConeAngleDegrees; // 0x4
	UEnvQuery* WanderDefaultEQS; // 0x10
	UEnvQuery* WanderLockpickEQS; // 0x18
	UEnvQuery* WanderNoneEQS; // 0x20
};

struct FGameplayEval_Health : FGameplayEval {
	float TestHealthPercent; // 0x48
	bool bCheckTempHealth; // 0x4c
	ECompareOp CompareOperation; // 0x4d
	UAnimContext_Actor* Actor; // 0x50
};

struct FRuntimeSpawnCountModifier {
	int32_t NumApplied; // 0x0
	TArray<FRolledLootPool> Pools; // 0x8
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x5c
	FPerPlatformFloat ScreenSize; // 0x60
	FString SourceImportFilename; // 0x68
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FBuildEnvironmentConfigurationData {
	uint32_t Changelist; // 0x0
	FString DefaultEnvironment; // 0x8
	FString HighestAvailableEnvironment; // 0x18
	TArray<FNanopatchConfiguration> Nanopatches; // 0x28
};

struct FAgoraHydraLeaderboard {
	int32_t Current_Page; // 0x0
	int32_t Total_Pages; // 0x4
	int32_t Total_Leaders; // 0x8
	TArray<FAgoraHydraScoreAndRank> Leaders; // 0x10
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FHealthTuning : FTuningDataBase {
	FGamePropertyFloat CriticalHealMultiplier; // 0x8
	FGamePropertyFloat PermanentDamageScale; // 0x40
	FGamePropertyFloat HealthRegenPerSecond; // 0x78
	FGamePropertyFloat HealthDepletedMaxHealthPenalty; // 0xb0
	float InitialHealthPercent; // 0xe8
	FGamePropertyFloat InitialMaxHealth; // 0xf0
	float MaxHealthLowerLimit; // 0x128
	FTemporaryHealthParams DefaultTempHealthParams; // 0x130
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FDecalDefLifetimeQuality {
	FVector2D Lifetime; // 0x0
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FLMG_Tuning_Struct {
	FFireModeBaseTuning FireModeBase_43_B53CDCEB42184F6257DCCB90CDCADFC7; // 0x0
	FFireModeSingleTraceTuning FireModeSingleTrace_37_48F8AE844F7C10C1FED933B0CE2676AA; // 0x38
	FSpreadTuning Spread_15_F415F8754C89D8B245443DA492E3C17B; // 0x50
	FClipAmmoTuning ClipAmmo_34_5258577E4F9D41602545A08A4B3CC310; // 0xb0
	FClipReloadTuning ClipReload_3_FD477EAF4A650B258356838D708AAE34; // 0xb4
	FRecoilTuning Recoil_18_F63F76DB4FC351155AE3518FB90CB2FC; // 0xc0
	FBulletPenetrationTuning BulletPenetration_31_756CDE1E4D7FA8A988DDF880060E88F7; // 0x200
	FWeaponMoveSpeedTuning WeaponMoveSpeed_21_F0EB09994D8B23750C4C1AB5BE200924; // 0x204
	FItemCycleTuning ItemCycle_27_684E54A44B90AC64A4BC12B09CCC7ABF; // 0x270
	FADSTuning ADS_40_63BDAFAA42CAF1639C3169A4B10D6548; // 0x284
	FItemAnimationDataTuning ItemAnimationData_28_60E71D774E2D69E3ABF4D3A65CC146CE; // 0x28c
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FWebServiceSessionAddParticipantsWithUserData {
	TArray<FWebServiceSessionCreateParticipant> Participants; // 0x0
	bool bCrossPlayEnabled; // 0x10
};

struct FMotionCorrectionGoal {
	FName GoalLabel; // 0x0
	UAnimContext_Transform* TranslationGoal; // 0x8
	EMotionCorrectionContextUpdateMode TranslationContextUpdateMode; // 0x10
	bool bUseGlobalTranslationGoalPosition; // 0x11
	FVector TranslationGoalsPosition; // 0x14
	FVector TranslationOffset; // 0x20
	EMotionCorrectionDimension Dimension; // 0x2c
	EMotionCorrectionMode LimitTranslationMode; // 0x2d
	FBox TranslationLimits; // 0x30
	float MaxTransFromRootMotionPct; // 0x4c
	UAnimContext_Rotation* RotationGoal; // 0x50
	EMotionCorrectionContextUpdateMode RotationContextUpdateMode; // 0x58
	FRotator RotationOffset; // 0x5c
	EMotionCorrectionAxis Axis; // 0x68
	EMotionCorrectionMode LimitRotationMode; // 0x69
	FRotator RotationLimits; // 0x6c
	float MaxRotFromRootMotionPct; // 0x78
	float GoalTime; // 0x7c
	float TotalDuration; // 0x80
	float RemainingDuration; // 0x84
	float CorrectionPct; // 0x88
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FCampaignPlayerSlotData {
	FSlotIndex SlotIndex; // 0x0
	FDataTableRowHandle HeroRowHandle; // 0x8
	FCharacterCustomizationSet CustomizationSet; // 0x28
	FString OwnerId; // 0xb0
	int32_t Copper; // 0xc0
	TArray<FActiveGameplayCard> ActiveGameplayCards; // 0xc8
	int32_t EquippedPresetIndex; // 0xd8
	bool EquippedPresetIsBuiltIn; // 0xdc
	TArray<FDataTableRowHandle> EquippedPresetCards; // 0xe0
	int32_t BonusDraws; // 0xf0
	bool bHasChosenLoadout; // 0xf4
	bool bNeedsQuickPlayCharacterTransfer; // 0xf5
	int32_t CharacterTransferOwedDraws; // 0xf8
	FRespawnSnapshot_Hero HeroRespawnSnapshot; // 0x100
};

struct FTitanStage3RockFallWave {
	float MinStartTime; // 0x0
	float MaxStartTime; // 0x4
	float RockFallRange; // 0x8
	float RockFallPercentage; // 0xc
	float RockFallVariance; // 0x10
};

struct FOnlineConfigurationGameModeData {
	FString Name; // 0x0
	TArray<FString> EnabledMaps; // 0x10
};

struct FTraceMeleeActiveMontage {
	UAnimMontage* FirstPersonMontage; // 0x0
	UAnimMontage* ThirdPersonMontage; // 0x8
};

struct FBotCombatTacticalInfo {
	bool bAllowADS; // 0x0
	float ADSChkDist; // 0x4
	bool bAllowTargetingWeakSpots; // 0xc
	float TacticalChkFrequency; // 0x10
	float NewEnemyAtkDelay; // 0x14
	float EnemyDiedAtkEndDelay; // 0x18
	bool bAllowSecondaryMeleeTargets; // 0x1c
	bool bAllowSecondaryRangedTargets; // 0x1d
	bool bAllowSecondaryTargetsOnlyWhenSwarmed; // 0x1e
	bool bAllowSecondaryMeleeTargetsOnlyWhenSwarmed; // 0x1f
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

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FSafeRoomVendorCondition : FUsableCondition {
	bool bRequireSafeRoomVendorsOpen; // 0x28
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FDifficultyBool : FDifficultyValue {
	bool Easy; // 0x0
	bool Normal; // 0x1
	bool Hard; // 0x2
	bool Legendary; // 0x3
	bool PVP; // 0x4
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x378
	FSlateBrush MidVolumeImage; // 0x408
	FSlateBrush LowVolumeImage; // 0x498
	FSlateBrush NoVolumeImage; // 0x528
	FSlateBrush MutedImage; // 0x5b8
};

struct FAnalyticsEventAttr {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FAnimDirectionRange {
	FName DirectionLabel; // 0x0
	float DirectionAngle; // 0x8
	float MinDirectionAngle; // 0xc
	float MaxDirectionAngle; // 0x10
	float HipDirectionAngle; // 0x14
	float RelativeAngle; // 0x18
};

struct FLaunchConfig {
	char DesiredChildLaunches; // 0x0
	char MaxLaunchDepth; // 0x1
	char MaxLaunchVerticalSteps; // 0x2
	float InitialMaxAngleForChildLaunches; // 0x4
	float ChildSpacing; // 0x8
	float InitialDelayBeforeLaunching; // 0xc
	float AdditionalAngleForChildSteps; // 0x10
};

struct FSpawnPercentage {
	float X; // 0x0
	float Y; // 0x4
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FAOEAttackMoveTickData {
	EAOEAttackState State; // 0x0
};

struct FGobiWorldProbeManager {
	FGobiWorldProbeConfig GobiWorldProbeCfg; // 0x38
	AController* OwnerCtrl; // 0x70
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

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FGameplayEval_ClingLocation : FGameplayEval {
	EZombieAttachLocationType LocationType; // 0x48
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FBotPingConfig {
	bool bListenToBots; // 0x0
	bool bListenToBotsIfNoPlayers; // 0x1
	bool bListenToPlayers; // 0x2
	bool bListenOnlyToPrimaryTeammate; // 0x3
	bool bPingAllowsMoves; // 0x4
	FBotPingTypeInfo PingTypeInfo[0xd]; // 0x8
	float PingOutCooldown; // 0x140
	FGameplayTagQuery ThreatPingTagQuery; // 0x148
};

struct FMatchmakingPreferenceData {
	EMatchmakingVoicePreference VoicePreference; // 0x0
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FGobiRandomSequenceEntry {
	UAnimSequence* Sequence; // 0x0
};

struct FGobiSlopeWarping {
	FGobiAnimationCurveData SlopeWarpingCurve; // 0x0
	float Alpha; // 0x10
};

struct FLiveObjective {
	FDataTableRowHandle ObjectiveHandle; // 0x0
	int32_t CurrentCount; // 0x20
	int32_t FinalCountDelta; // 0x24
	int32_t TimerIndex; // 0x28
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FOnlineInventoryItemJson {
	FString TransientId; // 0x0
	FName DataTableName; // 0x10
	FName DataTableRowName; // 0x18
	EInventoryContainer Container; // 0x20
	bool bAcknowledged; // 0x21
	int32_t ClipAmmo; // 0x24
	int32_t Durability; // 0x28
	TArray<FString> Extensions; // 0x30
};

struct FMapMeshRow : FTableRowBase {
	TArray<FMapMeshConfig> CharacterMeshConfigs; // 0x8
	TArray<FMapMeshConfigMods> MapMeshConfigMods; // 0x18
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FBehindCameraQuality {
	bool bBehindReducesQuality; // 0x0
	EImpactNewQuality BehindNewQuality; // 0x1
	bool bBehindCanCull; // 0x2
	EBehindCamera BehindFilter; // 0x3
	float MinDistance; // 0x4
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FKeybindRowBase : FTableRowBase {
	bool bIsKeyRebindable; // 0x8
	bool bIsGamepadRebindable; // 0x9
	bool bShowKey; // 0xa
	bool bShowGamepad; // 0xb
};

struct FBotTetherConfig {
	float TgtTetherDistNormal; // 0x0
	float TgtTetherDistTight; // 0x4
	float TeamCentroidTetherDist; // 0x8
	float TeammateFollowDist; // 0xc
	float TeammateFollowTightDist; // 0x10
	float TeamCentroidDistLimit; // 0x14
	float TgtLocationDistLimit; // 0x18
	float TgtActorDistLimit; // 0x1c
	float TeamTeleportDistMult; // 0x20
	float TeamTeleportNormalDist; // 0x24
	float TeamTeleportTightDist; // 0x28
	float TeamTeleportCatchupDist; // 0x2c
	float TeamTeleportCountdownTimer; // 0x30
	float GroupUpTime; // 0x34
	EBotFollowTarget FollowTarget; // 0x38
	bool bTetherChecksAllTeammates; // 0x39
	bool bTetherTracksSaferooms; // 0x3a
	bool bWanderFollowsTeammate; // 0x3b
	float GoToTetherRadius; // 0x3c
	float GoToInsideChainDelay; // 0x40
	float GoToInsideFinalDelay; // 0x44
	float InteractDist; // 0x48
	float InteractPaddingDist; // 0x4c
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FAnimNode_DistanceMatching : FAnimNode_SequencePlayer {
	float Distance; // 0x78
	bool ContinuePlaybackAfterZeroDistance; // 0x7c
};

struct FPlantableRangeDefinition {
	bool bIsSupported; // 0x0
	float AcceptableAngleDegrees; // 0x4
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
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

struct FHighlightState {
	EStencilChannel Stencil; // 0x0
	bool bPlayer1Enabled; // 0x1
	bool bPlayer2Enabled; // 0x2
	EHighlightReceivers Receivers; // 0x3
};

struct FSessionInviteData {
	FString SourceFirstPartyId; // 0x0
	FString TargetSessionId; // 0x10
	FWebServiceSessionAddRemoveParticipant TargetParticipantId; // 0x20
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x18
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FAIProjectileThrowConfig {
	bool bPredictiveAimingEnabled; // 0x0
	float bPredictiveAimingRadiusPadding; // 0x4
	float MinTargetLocationChangeForPredicitveAiming; // 0x8
	float MaxAngleFromForward; // 0xc
};

struct FTuningDataBase {
	FName TuningDataIdentifier; // 0x0
};

struct FGameplayEval_ClingAttached : FGameplayEval {
	EZombieAttachLocationType AttachedLocationType; // 0x48
};

struct FSystemRecord {
	bool bReportZero; // 0x0
	bool bFlushOnEndPlay; // 0x1
	TMap<FName, FAggregationRecord> TrackedAggregations; // 0x8
	float BeginObservationTimestamp; // 0x58
};

struct FLeapSteerData {
	float ForwardAccelRate; // 0x0
	float BackwardAccelRate; // 0x4
	float RightAccelRate; // 0x8
	float MaxForwardSpeed; // 0xc
	float MaxBackwardSpeed; // 0x10
	float MaxRightSpeed; // 0x14
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FAudioGameplayTagSet : FTableRowBase {
	FGameplayTagContainer GameplayTagContainer; // 0x8
	TArray<UAkAudioEvent*> TagAddedWorldAudioEvents; // 0x28
	TMap<FString, float> TagAddedWorldRTPCChanges; // 0x38
	TMap<FName, FName> TagAddedWorldSharedSound; // 0x88
	FDataTableRowHandle TagAddedWorldMusicEvent; // 0xd8
	TArray<UAkAudioEvent*> TagRemovedWorldAudioEvents; // 0xf8
	TMap<FString, float> TagRemovedWorldRTPCChanges; // 0x108
	TMap<FName, FName> TagRemovedWorldSharedSound; // 0x158
	FDataTableRowHandle TagRemovedWorldMusicEvent; // 0x1a8
	TArray<UAkAudioEvent*> TagAddedLocalAudioEvents; // 0x1c8
	TMap<FName, FName> TagAddedLocalStateChanges; // 0x1d8
	TMap<FString, float> TagAddedLocalRTPCChanges; // 0x228
	TArray<UAkAudioEvent*> TagRemovedLocalAudioEvents; // 0x278
	TMap<FName, FName> TagRemovedLocalStateChange; // 0x288
	TMap<FString, float> TagRemovedLocalRTPCChanges; // 0x2d8
	TArray<UAkAudioEvent*> TagAddedRemoteAudioEvents; // 0x328
	TMap<FString, float> TagAddedRemoteRTPCChanges; // 0x338
	TArray<UAkAudioEvent*> TagRemovedRemoteAudioEvents; // 0x388
	TMap<FString, float> TagRemovedRemoteRTPCChanges; // 0x398
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FMutilationCategory {
	FMutilationQuality QualitySettings[0x5]; // 0x0
};

struct FAISpawnEval_TeamInSafeRoom : FAISpawnEval {
	bool bInSafeRoom; // 0x40
};

struct FAISpawnEval_TeamIntensity : FAISpawnEval {
	float IntensityThreshold; // 0x40
	ECompareOp Op; // 0x44
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FAgoraHydraProductPriceJson {
	FString Slug; // 0x0
	FString Name; // 0x10
	FString backend_name; // 0x20
	TArray<FAgoraHydraProductItemJson> Items; // 0x30
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
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

struct FMatchmakingQueueTelemetry {
	int32_t Searching; // 0x0
	int32_t Backfilling; // 0x4
	int32_t Quickplay; // 0x8
	TArray<FMatchmakingRegionTelemetry> AverageWaitTimes; // 0x10
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FGameModeStreamingVolume {
	ALevelStreamingVolume* StreamingLevelVolume; // 0x0
	uint32_t SupportedGameModes; // 0x8
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector StartPos; // 0x40
	FVector EndPos; // 0x4c
	FVector StartTangent; // 0x58
	FVector EndTangent; // 0x64
	bool bSmoothInterpRollScale; // 0x70
	FVector2D StartScale; // 0x74
	float StartRoll; // 0x7c
	FVector2D StartOffset; // 0x80
	FVector2D EndScale; // 0x88
	float EndRoll; // 0x90
	FVector2D EndOffset; // 0x94
	FVector SplineUpDir; // 0x9c
	EInstanceSplineMeshAxis ForwardAxis; // 0xa8
	bool bIsSpline; // 0xa9
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x68
	FVector2D ShadowOffset; // 0x98
	FLinearColor ShadowColorAndOpacity; // 0xa0
	FSlateColor SelectedBackgroundColor; // 0xb0
	FLinearColor HighlightColor; // 0xe0
	FSlateBrush HighlightShape; // 0xf0
	FSlateBrush StrikeBrush; // 0x180
	FSlateBrush UnderlineBrush; // 0x210
};

struct FAnimSpeedRange {
	FName SpeedLabel; // 0x0
	FGameplayTag SpeedTag; // 0x8
	float MinSpeed; // 0x10
	float MaxSpeed; // 0x14
};

struct FNestChallengeCards {
	TArray<FDataTableRowHandle> ChallengeCards; // 0x0
};

struct FGameplayEval_RandomChance : FGameplayEval {
	float ChanceToPlay; // 0x48
};

struct FLocoTurnInPlace {
	char bIsTurning : 1; // 0x0
	char bShouldTurn : 1; // 0x0
	char bInTurnState : 1; // 0x0
	float RelativeFacingAngle; // 0x4
	float RelativeFacingAngleProcessed; // 0x8
	FGameplayTag CurrentTurnAnimationTag; // 0xc
	TArray<FLocoTurnInPlaceThreshold> Thresholds; // 0x18
	float ErrorTolerance; // 0x28
	float MaxTurnDelta; // 0x2c
	FGameplayTagQuery TurnInPlaceTagQuery; // 0x30
	float ActorYaw; // 0x78
	float LastActorYaw; // 0x7c
	float RemainingTurnAngle; // 0x80
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FMatchmakingFailedData {
	int32_t MatchmakingSequenceId; // 0x0
	EWebServiceRemovedFromPoolReason Reason; // 0x4
};

struct FAgoraHydraLeaderboardAccount {
	FAgoraHydraLeaderboardAccountIdentity Identity; // 0x0
};

struct FAssetLookupFloat {
	float Default; // 0x0
	TArray<FAssetLookupFloatEntry> Lookups; // 0x8
};

struct FAggregationRecord {
	uint32_t Count; // 0x0
	float Value; // 0x4
};

struct FObjectiveTimerData {
	FDataTableRowHandle ObjectiveHandle; // 0x0
	float TimeRemaining; // 0x20
	bool Paused; // 0x24
};

struct FAnimNotify_BoneVisDef {
	FName BoneName; // 0x0
	bool bHide; // 0x8
};

struct FDismembermentMeshPiece {
	USkeletalMesh* SkelMesh; // 0x0
	UStaticMesh* StaticMesh; // 0x8
	FName StaticMeshAttachName; // 0x10
	FGameplayTag MeshCompGameplayTag; // 0x18
	EMutilationRegion Region; // 0x20
	UParticleSystem* ParticleSystem; // 0x28
	FName ParticleAttachSocketName; // 0x30
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FCampaignRunDataV3 {
	ECampaignRoundResult LastRoundResult; // 0x0
	bool bNeedsCardDraw; // 0x4
	bool bHasAnyCampaignMissionBeenCompleted; // 0x5
	TArray<FCampaignRunPlayerSlotData> CampaignPlayerSlotData; // 0x8
	FGameplayCardTravelData GameplayCardTravelData; // 0x18
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FFortificationSkelMeshInfo {
	UStaticMesh* IntactStaticMesh; // 0x0
	UStaticMesh* BrokenStaticMesh; // 0x8
	ECollisionEnabled BrokenStaticMeshCollisionEnabled; // 0x10
	USkeletalMesh* SkeletalMesh; // 0x18
	float ImpulseScale; // 0x20
	FVector2D AngularImpulseRange; // 0x24
	float TimeToHideSkelMesh; // 0x2c
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

struct FSpecificSpeakerAnimationInfo {
	FDataTableRowHandle Speaker; // 0x0
	TArray<UAnimMontage*> Animations; // 0x20
};

struct FDirectionalMoveSpeedModifier {
	FGamePropertyFloatMod ForwardMoveSpeedMod; // 0x0
	FGamePropertyFloatMod BackwardMoveSpeedMod; // 0x10
	FGamePropertyFloatMod SidewaysMoveSpeedMod; // 0x20
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FTitanStage2Tuning : FTuningDataBase {
	TArray<FTitanStage2Phase> Phases; // 0x8
};

struct FDialogueAnimationRow : FTableRowBase {
	TArray<UAnimMontage*> DefaultAnimations; // 0x8
	TArray<FSpecificSpeakerAnimationInfo> SpecificSpeakerAnimations; // 0x18
};

struct FMapMeshConfigMods {
	TArray<UMapMeshConfigMod*> MeshConfigMods; // 0x0
	uint32_t GameModes; // 0x10
};

struct FAISpawnEval_CheckGeneratingDeckTags : FAISpawnEval {
	int32_t TestValue; // 0x40
	ECompareOp Op; // 0x44
	FGameplayTagQuery QueryAgainstGeneratingDeckTags; // 0x48
};

struct FGameplayEval_MantleHeight : FGameplayEval {
	float DesiredMantleHeight; // 0x48
	EMantleHeightMode Mode; // 0x4c
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FProjectileThrowChargeData {
	float MaxChargeTime; // 0x0
	FVector2D ProjectileSpeed; // 0x4
	FVector2D ProjectileGravityScale; // 0xc
	FVector2D ProjectileSize; // 0x14
	FVector2D PlayerArcParam; // 0x1c
	FVector2D UserData; // 0x24
	FString ChargePctRTPC; // 0x30
	UAkAudioEvent* FullyChargedAudioEvent; // 0x40
	UAkAudioEvent* ChargedStopAudioEvent; // 0x48
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FWeakSpotSurface : FWeakSpot {
	EPhysicalSurface Surface; // 0xf0
	TSet<FName> AssociatedBoneNames; // 0xf8
	FWeakSpotSurfaceTuning WeakSpotSurfaceTuning; // 0x148
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FTitanStage3Tuning : FTuningDataBase {
	TArray<FTitanStage3Phase> Phases; // 0x8
	TArray<FTitanStage3Segment> Segments; // 0x18
	float FallBehindRockFallTriggerVariance; // 0x28
	float FallBehindRockFallTriggerFollowDistance; // 0x2c
};

struct FImpactDefinition {
	bool UseOtherPhysMat; // 0x0
	EPhysicalSurface OtherPhysMat; // 0x1
	bool UseOtherGameplayTag; // 0x2
	FGameplayTag OtherGameplayTag; // 0x4
	float DecalSpawnChancePercent; // 0xc
	TArray<FImpactDecalDefinition> Decals; // 0x10
	UParticleSpawnDef* ParticleSpawnDef; // 0x20
	TArray<FImpactEmitterSet> EmitterSets; // 0x28
	TArray<AActor*> SpawnActors; // 0x38
	TArray<UGameplayEffect*> GameplayEffects; // 0x48
	TArray<FImpactSourceEmitterSet> SourceItemEmitterSets; // 0x58
	UWaterRipplerDef* WaterRipplerDef; // 0x68
	TArray<FImpactAudioSet> AudioSweeteners; // 0x70
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FTRSSplineMeshActorCapData {
	FTRSSplineMeshActorSplineMeshElement StartCap; // 0x0
	FTRSSplineMeshActorSplineMeshElement EndCap; // 0x10
};

struct FGobiSessionSessionData {
	EGobiSessionType SessionType; // 0x0
	FGameSessionBackfillData Game; // 0x8
	FString ListenAddr; // 0x28
	int32_t ListenPort; // 0x38
	EMatchmakingTeam GameTeam; // 0x3c
	ESessionPrivacy Privacy; // 0x3d
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FDamageThreshold {
	float DamageAmount; // 0x0
	float Duration; // 0x4
};

struct FParticleSetInfo {
	UParticleSystem* ParticleSystem; // 0x0
	FTransform RelativeTransform; // 0x10
	TArray<FName> Sockets; // 0x40
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	float RandomCostOverride; // 0x10
	char bIsExcluded : 1; // 0x14
	char bOverrideTravelCost : 1; // 0x14
	char bOverrideEnteringCost : 1; // 0x14
	char bOverrideRandomCost : 1; // 0x14
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

struct FSyncedClientPlayerControllerCVars {
	bool bGodMode; // 0x0
	bool bDemigodMode; // 0x1
	int32_t OneShotKillMode; // 0x4
	bool bInstantUse; // 0x8
	bool bLanNetSpeed; // 0x9
	bool bInfiniteAmmoClip; // 0xa
	bool bInfiniteAmmoReserve; // 0xb
	bool bInfiniteStamina; // 0xc
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FDialogueEval_IsInSaferoom : FDialogueEval {
	bool bCheckTarget; // 0x48
	bool bCheckSaferoomState; // 0x49
	EPartySafeRoomState DesiredSaferoomState; // 0x4a
};

struct FLifeStateChangeInfo {
	FGameplayTag LifeStateTag; // 0x0
	TWeakObjectPtr<AActor> ChangeInstigator; // 0x8
};

struct FBoneCollection {
	TArray<FName> Bones; // 0x0
	bool bIncludeBonesBelow; // 0x10
};

struct FHeroLedgeHangLocations : FMovementTickableStruct {
	bool bIsValid; // 0x8
	FVector FallLocation; // 0xc
	FRotator FallRotation; // 0x18
	FVector HangLocation; // 0x24
	FVector HangNormal; // 0x30
	FVector RescueLocation; // 0x3c
};

struct FBotAwarenessSystem {
	ABotController* OwnerBotCtrl; // 0x0
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

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FReceivedSessionInviteData {
	FString SourceFirstPartyId; // 0x0
	FWebServiceSessionAddRemoveParticipant SourceParticipantId; // 0x10
	FString SourceSessionId; // 0x28
	FString SourceSessionCluster; // 0x38
};

struct FCenterBannerMessage {
	float Duration; // 0x0
	FString TopMessage; // 0x8
	FString MiddleMessage; // 0x18
	FString BottomMessage; // 0x28
	bool MissionUpdate; // 0x38
	bool MissionStart; // 0x39
	EMissionDifficulty MissionDifficulty; // 0x3a
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FWebSocketSessionSendMessage_ParticipantId {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
};

struct FRotationConstraints {
	FVector2D YawLimits; // 0x0
	FVector2D PitchLimits; // 0x8
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FRepRootMotionMontageHighFreq {
	float Position; // 0x0
	FVector_NetQuantize100 Location; // 0x4
	FRotator Rotation; // 0x10
	FVector_NetQuantize10 LinearVelocity; // 0x1c
};

struct FGobiAnimationState {
	float AimYaw; // 0x0
	float AimPitch; // 0x4
	float Speed; // 0x8
	float Speed2D; // 0xc
	float DeltaSeconds; // 0x10
	FVector Velocity; // 0x14
	FVector Acceleration; // 0x20
	FRotator Rotation; // 0x2c
	float RelativeMovementDirection; // 0x38
	float MeleeTwistRotation; // 0x3c
	float FlinchWeight; // 0x40
	float InjuredWeight; // 0x44
	char IsAccelerating : 1; // 0x48
	char bIsJumping : 1; // 0x48
	char IsOnGround : 1; // 0x48
	char IsInAir : 1; // 0x48
	char IsCrouching : 1; // 0x48
	char bIsMoving : 1; // 0x48
	char bCanStartMoving : 1; // 0x48
	char bIsDead : 1; // 0x48
	char bIsPivoting : 1; // 0x49
	char bIsMantling : 1; // 0x49
	char bIsClimbing : 1; // 0x49
	FVector CurrentLocation; // 0x4c
};

struct FLadderMovementModeData {
	ELadderMovementModeState State; // 0x0
	FVector LadderForward; // 0x1c
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x48
};

struct FAccessories_Tuning_Struct {
	FClipAmmoTuning ClipAmmo_34_58756FF64ADE64096DBB01BEDEABAEB3; // 0x0
	FWeaponMoveSpeedTuning WeaponMoveSpeed_21_213B84A543E5E1C4DF48BBBFA5DA2289; // 0x4
	FItemCycleTuning ItemCycle_27_DF9809044F21D22D184C019CA8F9E505; // 0x70
	FItemAnimationDataTuning ItemAnimationData_28_8362ACD143435AF565B9C2BB0C148327; // 0x84
};

struct FGameplayEval_NavBlocked : FGameplayEval {
	float MaxBlockedDistance; // 0x48
	UAnimContext_NavCast* Distance; // 0x50
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FClingMoveTickData {
	FRotator ClingRotation; // 0xc
	EClingState CurrentState; // 0x20
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FWebSocketSessionSendMessage_ParticipantTeamSelection {
	FWebSocketSessionSendMessage_ParticipantId ParticipantId; // 0x0
	FString Team; // 0x18
};

struct FShrubEmitterInfo : FEmitterInfoBase {
	UAkAudioEvent* ShrubEvent; // 0x20
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FAIDataProviderGameplayTagQueryContainerValue : FAIDataProviderStructValue {
	FGameplayTagQuery DefaultValue; // 0x30
};

struct FBotCombatConfig {
	FGameplayTagContainer AttackTags; // 0x0
	UEnvQuery* NonCombatThreatEQS; // 0x20
	UEnvQuery* MeleeThreatEQS; // 0x28
	UEnvQuery* MeleeGoToThreatEQS; // 0x30
	UEnvQuery* MeleeAttackLocEQS; // 0x38
	UAIDistanceRanges* MeleeAttackDistanceRanges; // 0x40
	UEnvQuery* RangedThreatEQS; // 0x48
	UEnvQuery* RangedGoToThreatEQS; // 0x50
	UEnvQuery* RangedAttackLocEQS; // 0x58
	UAIDistanceRanges* RangedAttackDistanceRanges; // 0x60
	FVector2D ShootDurationSingleShot; // 0x68
	FVector2D ShootDurationMultiShot; // 0x70
	float ShootAimConeAngleDegrees; // 0x78
	FBotCombatTacticalInfo Tactical; // 0x80
	FBotCombatSwarmInfo Swarm; // 0xa0
	FBotCombatFriendlyFireInfo FriendlyFire; // 0xb8
	FBotCombatTeammateAwarenessInfo TeammateAwareness; // 0xd0
	FBotCombatHealthInfo HealthInfo; // 0xd8
	FGameplayTagQuery ThreatDangerTagQuery; // 0xe8
	FGameplayTagQuery ThreatDontAtkFirstTagQuery; // 0x130
	UGameplayEffect* HideWeaponsEffect; // 0x178
};

struct FPlayerLeapConfig {
	float MaxTrajectorySimTime; // 0x0
	bool bUsesSecondaryButton; // 0x4
	bool bSetDesiredWallGrabLocation; // 0x5
	AActor* WallGrabVisualizer; // 0x8
	FLinearColor ReticleTrajectoryNonGrabColor; // 0x10
	FLinearColor ReticleTrajectoryGrabColor; // 0x20
	float ReticleTrajectoryDownZOffset; // 0x30
	float ReticleTrajectoryDownForwardOffset; // 0x34
	float InterpTrajectoryToImpactLocationIfHeightDifferenceAbove; // 0x38
	bool bDisableControllerRotationYaw; // 0x3c
	float MovementInputScale; // 0x40
	AGobiReticle* TargetReticle; // 0x48
	FCameraViewModifier ViewModifier; // 0x50
};

struct FFirstPersonAdditiveConfig {
	float FiringNoiseBlendInTime; // 0x0
	float FiringNoiseBlendOutTime; // 0x4
	float PlayerWalkNormalizedSpeed; // 0x8
	float TurnSpeedSmoothLerpAlpha; // 0xc
	float TurnInPlaceMaxPlayRateSpeed; // 0x10
	float TurnInPlaceADSAlpha; // 0x14
	float MaxTurnSpeedForSway; // 0x18
	FWeaponSwaySpringTuning SwaySpringTuningHip; // 0x1c
	FWeaponSwaySpringTuning SwaySpringTuningADS; // 0x24
};

struct FMatchmakingUIState {
	bool bActive; // 0x0
	EOnlineMode OnlineMode; // 0x1
	FString BuildId; // 0x8
	FString AtuinEnvironment; // 0x18
	FString HomeRegion; // 0x28
	FString BestPoolSessionId; // 0x38
	FGobiSession PartySession; // 0x48
	FGobiSession SplitscreenSession; // 0x138
	FGobiSession GroupSession; // 0x228
	FGobiSession GameSession; // 0x318
	TArray<FGobiSession> OtherSessions; // 0x408
	bool bServerConnectionProblem; // 0x418
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x18
	FGuid ExpressionGUID; // 0x28
};

struct FMicroManagerDefault {
	UMicroManagerMod* Mod; // 0x0
	bool bDifficultyOverride; // 0x8
	EMissionDifficulty Difficulty; // 0x9
};

struct FMovementTickableInput {
	EEquipmentSlot DesiredEquipmentSlot; // 0x0
	TWeakObjectPtr<AItem> DesiredEquipmentActor; // 0x4
	TWeakObjectPtr<AActor> PotentialUsableActor; // 0xc
	bool bPrimaryPressed; // 0x14
	bool bSecondaryPressed; // 0x15
	bool bReloadPressed; // 0x16
	bool bADSPressed; // 0x17
	bool bSprintPressed; // 0x18
	bool bBurstPressed; // 0x19
	bool bCancelPressed; // 0x1a
	bool bMantlePressed; // 0x1b
	bool bUtilityAccessoryPressed; // 0x1c
	bool bItemAltUsePressed; // 0x1d
	bool bCrouchPressed; // 0x1e
	bool bJumpPressed; // 0x1f
	bool bUsePressed; // 0x20
	bool bMeleePressed; // 0x21
	bool bOffsiveItemQuickUsePressed; // 0x22
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

struct FSqueezeMoveTickData {
	ESqueezeState State; // 0x0
};

struct FAgoraHydraUpdateUsernameResponse {
	FAgoraHydraUpdateUsernameBody Body; // 0x0
	int32_t Return_Code; // 0x10
};

struct FMusicStateBehavior : FTableRowBase {
	EMusicStateType Type; // 0x8
	FName AssociatedWwiseMusicSwitch; // 0xc
	TMap<FName, FName> AdditionalSwitchesToApplyOnEnter; // 0x18
	TMap<FName, FName> StatesToApplyOnEnter; // 0x68
	bool bSuppressHordeEvents; // 0xb8
	bool bSuppressCharacterMusic; // 0xb9
	bool bSuppressGameDrivenRTPCs; // 0xba
	bool bFlushInvalidEvents; // 0xbb
	bool bSetHordeGameStateInWwise; // 0xbc
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FPixelStreamingDeviceCode {
	FString DeviceCode; // 0x0
};

struct FAssetLookupAnimSequence {
	UAnimSequence* Default; // 0x0
	TArray<FAssetLookupAnimSequenceEntry> Lookups; // 0x8
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FBumpBehaviorContainer {
	FBumpEmitterInfo Behavior; // 0x0
	TSet<TSoftObjectPtr<UStaticMesh>> BumpMeshes; // 0x30
};

struct FRadioButtonStyle : FSlateWidgetStyle {
	FSlateBrush UncheckedImage; // 0x8
	FSlateBrush UncheckedHoveredImage; // 0x98
	FSlateBrush UncheckedPressedImage; // 0x128
	FSlateBrush CheckedImage; // 0x1b8
	FSlateBrush CheckedHoveredImage; // 0x248
	FSlateBrush CheckedPressedImage; // 0x2d8
	FMargin Padding; // 0x368
	FSlateColor ForegroundColor; // 0x378
	FSlateColor BorderBackgroundColor; // 0x3a8
	FSlateSound CheckedSlateSound; // 0x3d8
	FSlateSound HoveredSlateSound; // 0x3f0
};

struct FAssetLookupWeaponTracerContainer {
	UWeaponTracer* Default; // 0x0
	TArray<FAssetLookupWeaponTracerEntry> Lookups; // 0x8
};

struct FWeaponAnimData {
	float FireIdleBlendTime; // 0x0
	EAlphaBlendOption ADSOffsetBlendOption; // 0x4
	UCurveFloat* ADSOffsetBlendCustomCurve; // 0x8
	FGobiAnimationCurveData DisableMeshOffsetCurve; // 0x10
};

struct FSelectedLocoInfo {
	FGameplayTag AnimGraphTag; // 0x0
	int32_t AnimGraphSetIndex; // 0x8
	int32_t LocoVariationIndex; // 0xc
};

struct FAppContext {
	FString Project; // 0x0
	FString ExecutableName; // 0x10
	FString BuildConfiguration; // 0x20
	FString BuildVersion; // 0x30
	FString CommandLine; // 0x40
	FString Platform; // 0x50
};

struct FDeathGasAppliedEffects {
	TArray<TWeakObjectPtr<UGameplayEffect>> AppliedEffects; // 0x0
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FDamageDealtTriggeredEffectConfig {
	FGameplayTagQuery DamageSourceTagQuery; // 0x0
	FGameplayTagQuery DamageTargetTagQuery; // 0x48
	FGameplayTagQuery DamageTypeTagQuery; // 0x90
	int32_t RequiredDamageFlags; // 0xd8
	bool bMinDamageRequiredIsPercentOfMaxHealth; // 0xdc
	float MinDamageRequired; // 0xe0
	float MinDistanceFromTarget; // 0xe4
	float MaxDistanceFromTarget; // 0xe8
	ECompareOp SourceHealthPercentCompareOp; // 0xec
	float SourceHealthPercent; // 0xf0
	ECompareOp TargetHealthPercentCompareOp; // 0xf4
	float TargetHealthPercent; // 0xf8
	bool bReuseDamageInfoForEmitter; // 0xfc
	bool bReuseDamageInstigatorActorAndPawnForEmitter; // 0xfd
	float ChanceToApply; // 0x100
};

struct FGobiEnemyDamageData {
	float LastDamageTime; // 0x0
	float TotalDamage; // 0x4
	FVector DamageEnemyLocation; // 0x8
};

struct FSkeletalMeshConfigMod {
	ESkeletalMeshConfigModType ModType; // 0x0
	float PercentageOfPoolToMod; // 0x4
	bool bExclusive; // 0x8
	TArray<USkeletalMeshRegionConfig*> Configs; // 0x10
	FGameplayTagQuery ApplyTagRequirementsToOthers; // 0x20
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FSqueezeMoveToReticleData {
	float ReticleForwardOffset; // 0x0
	float ReticleRightOffset; // 0x4
	float MinForwardDistFromReticleToMove; // 0x8
	float MinRightDistFromReticleToMove; // 0xc
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FHeroFirstPersonMeshConfig {
	USkeletalMesh* SkeletalMesh; // 0x0
	TMap<FName, UMaterialInterface*> MaterialOverrides; // 0x8
};

struct FScenarioCollection {
	bool bIsEnabled; // 0x0
	int32_t MinNumToEnable; // 0x4
	int32_t MaxNumToEnable; // 0x8
	TArray<AActor*> ScenarioActors; // 0x10
	FGameplayTagQuery ScenarioManagerModQuery; // 0x20
	TArray<UScenarioManagerMod*> Mods; // 0x68
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x48
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FAssetLookupMontageArrayEntry {
	FGameplayTag Tag; // 0x0
	TArray<UAnimMontage*> AnimMontages; // 0x8
};

struct FGobiPlayerChallengeRank {
	int32_t StartingRank; // 0x0
	int32_t NewRank; // 0x4
};

struct FGameplayEval : FEvaluator {
	bool bDrawDebug; // 0x40
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FMapMusicBehaviorRow : FTableRowBase {
	bool bPushWwiseGameSyncs; // 0x8
	TMap<FName, FName> MusicSwitchesToApplyOnEnter; // 0x10
	TMap<FName, FName> StatesToApplyOnEnter; // 0x60
	TMap<FName, FName> MusicSwitchesToApplyOnExit; // 0xb0
	TMap<FName, FName> StatesToApplyOnExit; // 0x100
};

struct FGameplayEval_CheckAmmoReserve : FGameplayEval {
	EAmmoInReserveCheck CheckType; // 0x48
};

struct FCustomDataProviderFName : FCustomDataProvider {
	FName Value; // 0x4
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FCaravanSchemaRow : FTableRowBase {
	TArray<FCaravanRaritySpec> CaravanRaritySpecs; // 0x8
	int32_t DurationHours; // 0x18
	TArray<FDataTableRowHandle> OptionalDesignatedMerchants; // 0x20
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FRecycleConfig {
	UEnvQuery* RecycleEQS; // 0x0
	int32_t MinAICountNeededForRecycling; // 0x8
	float MaxRecycleDistanceFromPlayers; // 0xc
	int32_t MaxAIToRecyclePerTick; // 0x10
};

struct FGobiAnimGraphTags {
	FGameplayTag FirstPersonLocoAnimGraph; // 0x0
	FGameplayTag FirstPersonAdditiveAnimGraph; // 0x8
	FGameplayTag FirstPersonPostProcessAnimGraph; // 0x10
	FGameplayTag ThirdPersonLocoAnimGraph; // 0x18
	FGameplayTag ThirdPersonAdditiveAnimGraph; // 0x20
};

struct FEvaluator {
	bool bInvertTest; // 0x8
	float Weight; // 0xc
	EEvaluationType EvalType; // 0x10
};

struct FGameplayCardPreset {
	int32_t ID; // 0x0
	FString Name; // 0x8
	FText LocalizedText; // 0x18
	bool AllUnlockedCards; // 0x30
	TArray<FDataTableRowHandle> Cards; // 0x38
};

struct FMouseInputSettings {
	float LookScale; // 0x0
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0
	int32_t NumInitPtrs; // 0x4
	int32_t NumEvalPtrs; // 0x8
};

struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FUIMaterialColorRow : FTableRowBase {
	int32_t MaterialIndex; // 0x8
	FLinearColor DefaultColor; // 0xc
	FLinearColor ProtColor; // 0x1c
	FLinearColor DeutColor; // 0x2c
	FLinearColor TritColor; // 0x3c
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FBotInventoryConfig {
	float ItemPickupTypePriority[0x9]; // 0x0
	float ItemTypePriority[0x9]; // 0x24
	float ItemTypePriorityModInCombat[0x9]; // 0x48
	float ItemCategoryPriority[0x15]; // 0x6c
	float EquipmentSlotPriority[0x9]; // 0xc0
	TArray<FBotItemPref> ItemPrefs; // 0xe8
	bool bAlwaysOverrideOffensiveSlot; // 0xf8
	float DroppedItemCooldownTime; // 0xfc
	float DroppedAmmoDropChkDist; // 0x100
	float DroppedAmmoCooldownTime; // 0x108
	float TeamLowAmmoPct; // 0x10c
	int32_t DroppedAmmoQuantities[0x7]; // 0x110
	int32_t DroppedAmmoQuantityLimit; // 0x12c
	bool bShouldCompareVsCurItem; // 0x130
	float AmmoThresholdLimitAny; // 0x134
	float AmmoThresholdLimitPrimary; // 0x138
	float AmmoThresholdDangerLimitPrimary; // 0x13c
	float AmmoThresholdLimitSecondary; // 0x140
	float AmmoThresholdDangerLimitSecondary; // 0x144
	float AmmoThresholdLimitUnused; // 0x148
	float AmmoThresholdScaleUnused; // 0x14c
	float ItemPickupUsableScoreMult; // 0x150
	uint16_t ItemUseUseTypesAllowed; // 0x154
	uint16_t ItemUseTypesSaferoomNotAllowed; // 0x156
	uint16_t ItemUseTypesHordeOnlyAllowed; // 0x158
	uint16_t ItemUseTargetTypesAllowed; // 0x15a
};

struct FBotItemPref {
	AItem* ItemRef; // 0x0
	float ScoreMult; // 0x8
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
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

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
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

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
};

struct FRelationshipOutgoingFriendInvite {
	FString UnixTimestamp; // 0x0
	EHydraRelationshipLevel ReportedLevel; // 0x10
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FEvalChain {
	UAnimMontage* MontageToPlay; // 0x0
	bool bUseMontagesEvalSet; // 0x8
	UAnimationEvalSet* AnimEvaluatorSet; // 0x10
};

struct FTitanStage2StateInfo {
	ETitanPhase2TentacleState State; // 0x0
	int8_t AttackZone; // 0x1
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FTraitMapping {
	UTraitCollection* TraitCollection; // 0x0
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
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

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FAISpawnEval_ScenarioCausedInterruption : FAISpawnEval {
	bool bCausedInterruption; // 0x40
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FSyncedPacketSimulationSettings {
	bool bSync; // 0x0
	int32_t PktLoss; // 0x4
	int32_t PktOrder; // 0x8
	int32_t PktDup; // 0xc
	int32_t PktLag; // 0x10
	int32_t PktLagVariance; // 0x14
};

struct FStaticMeshSpawnDetails {
	UStaticMesh* MeshToSpawn; // 0x0
	TArray<UStaticMesh*> StaticMeshWhitelist; // 0x8
	TMap<FName, UMaterialInterface*> MeshMaterials; // 0x18
	FTransform RelativeTransform; // 0x70
};

struct FFallingRockTell {
	FGameplayTag ParticleSystemTag; // 0x0
	float Delay; // 0x8
	UParticleSystemComponent* ParticleSystem; // 0x10
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

struct FFloatParameterTuple {
	bool Key; // 0x0
	FName Name; // 0x4
	float Value; // 0xc
	float BaseValue; // 0x10
	int32_t Index; // 0x14
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FGunKickRecoilSpec {
	FVector MaxGunKickAngles; // 0x0
	FVector2D YawVelocityMinMax; // 0xc
	FVector2D PitchVelocityMinMax; // 0x14
	FVector2D RollVelocityMinMax; // 0x1c
	bool AlternateYawVelocities; // 0x24
	bool AlternatePitchVelocities; // 0x25
	bool AlternateRollVelocities; // 0x26
	FVector MinRequiredAxisVelocities; // 0x28
	float AbsoluteVelocityMax; // 0x34
	FVector AxisSnapFactors; // 0x38
	FVector AxisDampingFactors; // 0x44
};

struct FWeaponAnimsFP {
	UAnimSequence* SprintEnter; // 0x0
	UAnimSequence* SprintLoop; // 0x8
	UAnimSequence* SprintExit; // 0x10
	UAnimSequence* ADSEnter; // 0x18
	UAnimSequence* ADSIdle; // 0x20
	UAnimSequence* ADSExit; // 0x28
	float SprintEnterPlayRate; // 0x30
	float SprintExitPlayRate; // 0x34
	float ADSEnterPlayRate; // 0x38
	float ADSExitPlayRate; // 0x3c
};

struct FNanopatchConfiguration {
	FString Environment; // 0x0
	TArray<FNanopatchBucketConfiguration> Buckets; // 0x10
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FCharacterCustomizationSet {
	FDataTableRowHandle CustomizationSlots[0x4]; // 0x0
	ECharacterCustomizationSlot LastEquipSlot; // 0x80
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FBotInteractSystem {
	FGameplayTag BotInteractIgnoreTag; // 0x0
	FGameplayTag BotInteractIgnoreAlwaysTag; // 0x8
	ABotController* OwnerBotCtrl; // 0x10
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FHealthPercentCondition : FUsableCondition {
	bool bRequired; // 0x28
	float MinHealthPercent; // 0x2c
	float MaxHealthPercent; // 0x30
	bool bAllowUseWithIncapStrikes; // 0x34
	bool bAllowUseAtMaxHealth; // 0x35
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
	FMeshMergingSettings MergeSetting; // 0xbc
	float DesiredBoundRadius; // 0x15c
	float DesiredFillingPercentage; // 0x160
	int32_t MinNumberOfActorsToBuild; // 0x164
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FSignificanceQuality {
	TArray<int32_t> MaxCharactersPerLOD; // 0x0
};

struct FDamageScreenEffectMapping {
	UScreenEffect* ScreenEffectClass; // 0x0
	UScreenEffect* ScreenEffectInstance; // 0x8
	FGameplayTag DamageTypeTag; // 0x10
};

struct FParticleSpawnCullingGroup {
	EParticleSpawnCullingBounds BoundsCullingMethod; // 0x0
	float BoundsRadius; // 0x4
	bool bImpactSequenceReducesQuality; // 0x8
	bool bImpactSequenceCanCull; // 0x9
	bool bNonLocalReducesQuality; // 0xa
	bool bNonLocalCanCull; // 0xb
	FBehindCamera BehindCamera; // 0xc
	EPerfScalingMethod QualityScaling; // 0x14
};

struct FTRSCrashContext {
	FString CrashType; // 0x0
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FPostRoundPanelInfo {
	UGobiUserWidget* PanelWidget; // 0x0
	EPostRoundPanel PanelType; // 0x8
	bool ShowSkipButton; // 0x9
	bool ShowHeaderTabs; // 0xa
	bool StopAutoAdvance; // 0xb
	bool ShowSystemSettingsCallout; // 0xc
	float Duration; // 0x10
};

struct FReplicatedDialogueInfo {
	int32_t Index; // 0x0
	FSpokenLineParams Params; // 0x4
};

struct FDetachableInfo {
	UStaticMeshComponent* Detachable; // 0x0
};

struct FGPUGraphicsSettings : FTableRowBase {
	int32_t GraphicsQuality; // 0x8
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FTitanStage3AcidSprayAttackZone {
	FGameplayTag SphereTag; // 0x0
	float LoopSecondsWhenOccupiedByPlayer; // 0x10
	float LoopSecondsWhenNotOccupiedByPlayer; // 0x14
	UAnimSequence* AcidSprayAttackEnterAnimSequence; // 0x18
	UAnimSequence* AcidSprayAttackLoopAnimSequence; // 0x20
	UAnimSequence* AcidSprayAttackExitAnimSequence; // 0x28
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FNPCObjectiveDataRow : FTableRowBase {
	FDataTableRowHandle ObjectiveHandle; // 0x8
};

struct FGameCoachQueuedEnable {
	UGameCoachLesson* LessonCDO; // 0x0
	AActor* Target; // 0x8
	AActor* DisplayTarget; // 0x10
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

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
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

struct FMeshRegionCombination {
	TArray<FSkeletalMeshSetMaterialOverride> MaterialOverrides; // 0x58
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

struct FClipReloadTuning {
	float ReloadAddTime; // 0x0
	float ReloadLength; // 0x4
	float ReloadAnimationLength; // 0x8
};

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool RoundFrameSizeToHardwareSize; // 0x3c
};

struct FGameplayCardRow : FTableRowBase {
	EGameplayCardCategory Category; // 0x8
	EGameplayCardAffinity Affinity; // 0x9
	FText Name; // 0x10
	FText Description; // 0x28
	FText SharedEffectsDescription; // 0x40
	FText SPRewardDescription; // 0x58
	UTexture2D* Icon; // 0x70
	UTexture2D* Background; // 0x78
	TSoftObjectPtr<UTexture2D> SmallDeckIcon; // 0x80
	TArray<TSoftClassPtr<UObject>> Mods; // 0xa8
	bool Basic; // 0xb8
	bool Hidden; // 0xb9
	bool AllowedForDeckbuilding; // 0xba
	bool BurnCardOnePerTeam; // 0xbb
	bool HiddenForTradeShow; // 0xbc
	bool DisabledForPvE; // 0xbd
	bool DisabledForPvP; // 0xbe
	bool DisabledForTutorial; // 0xbf
	bool Armored; // 0xc0
	bool Elite1; // 0xc1
	bool Elite2; // 0xc2
	bool Swarm; // 0xc3
	bool CanBeSavedInSnapshot; // 0xc4
	UAkAudioEvent* EquipSound; // 0xc8
	UAkAudioEvent* PickupSound; // 0xd0
	UAkAudioBank* AkAudioBank; // 0xd8
	FGameplayTagContainer AssociatedTags; // 0xe0
	FGameplayTagContainer ExcludeTags; // 0x100
	int32_t PurchaseCost; // 0x120
	int32_t MaxTeamCount; // 0x124
	TArray<FGameplayModTag> GameplayModTags; // 0x128
	FName AssociatedInputAction; // 0x138
	TArray<FItemAttributeModifier> ItemAttributeModifiers; // 0x140
	float PlayerAttributeModifiers[0x5]; // 0x150
	FVector2D MiniCardTextureOffset; // 0x164
	TArray<FCardTextParam> DescriptionTextParameters; // 0x170
};

struct FZombieMutationPurchase {
	int32_t PointsApplied; // 0x0
	FActiveGameplayCard ActiveGameplayCard; // 0x8
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

struct FSignificanceCategory {
	EPerfScalingMethod QualityScaling; // 0x0
	FSignificanceQuality QualitySettings[0x5]; // 0x8
};

struct FEmitterInfoBase {
	EJostleShape OverlapShape; // 0x0
	float JostleSphereRadius; // 0x4
	FVector JostleBoxExtent; // 0x8
	FVector Offset; // 0x14
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float PlayRateBasis; // 0x38
	float PlayRate; // 0x3c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
	float StartPosition; // 0x70
	bool bLoopAnimation; // 0x74
	bool bRandomStartPosition; // 0x75
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FGameplayEval_HeroHealthState : FGameplayEval {
	bool bIsRangeCheck; // 0x48
	EHealthState DesiredHealthState; // 0x49
	EHealthState MinHealthState; // 0x4a
	EHealthState MaxHealthState; // 0x4b
	UGameplayContext_HeroHealthState* HealthState; // 0x50
};

struct FStaticCaravanChain {
	TArray<FStaticCaravan> StaticCaravans; // 0x0
};

struct FGobiEnemyDamage {
	float FirstTargetTime; // 0x0
	float LastTargetTime; // 0x4
	int32_t NumAttackAttempts; // 0x8
	float AttackAttemptTime; // 0xc
	FVector LocationAtAttackAttempt; // 0x10
	int32_t NumAttackFailures; // 0x1c
	float FailedAttackTime; // 0x20
	float FailureRecordTime; // 0x24
	FGobiEnemyDamageData Damage; // 0x28
	FGobiEnemyDamageData DamageByOwner; // 0x3c
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
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

struct FRemoveParticipantFromPoolData {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FProjectileThrowTickData {
	EProjectileThrowState CurrentState; // 0x0
};

struct FMissionState {
	bool bMissionEnded; // 0x0
	bool bSuccess; // 0x1
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FRadialDamageSet {
	FRadialDamage RadialDamageInner; // 0x0
	FRadialDamage RadialDamageOuter; // 0xc
	bool bScaleFromZeroToInner; // 0x18
	bool bScaleFromInnerToOuter; // 0x19
	bool bApplyOuterBeyondRadius; // 0x1a
	int32_t MaxArmorPiecesToImpact; // 0x1c
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FCrashContextOuter {
	FAppContext AppContext; // 0x0
	FEnvironmentContext EnvironmentContext; // 0x60
	FTRSCrashContext CrashContext; // 0x80
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FFOVSettings {
	float SurvivorHorizontalFOV; // 0x0
	float SurvivorVerticalFOV; // 0x4
	float InfectedHorizontalFOV; // 0x8
	float InfectedVerticalFOV; // 0xc
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FVendorSaleParams {
	FGameplayTagContainer Tags; // 0x0
	EVendorSaleBehavior Behavior; // 0x20
	float Probability; // 0x24
	float MinDiscount; // 0x28
	float MaxDiscount; // 0x2c
};

struct FBotGameplayCardsLoadout {
	TArray<FDataTableRowHandle> FixedLoadout; // 0x0
};

struct FAISpawnEval_RotatingCooldown : FAISpawnEval {
	float MinRotatingCooldownTime; // 0x40
	float MaxRotatingCooldownTime; // 0x44
};

struct FMantleMontageConfig {
	TArray<FMantleHeightDefinition> MantleDefinitions; // 0x0
	FGameplayTagContainer AppliedTags; // 0x10
	FGameplayTagQuery CancelTags; // 0x30
	bool bUseMantleTargetLedgePos; // 0x78
	FCameraViewModifier ViewModifier; // 0x80
	float ViewModHeightRequirement; // 0xc8
	bool bUseMantleCollisionProfile; // 0xcc
	FCollisionProfileName MantleCollisionProfile; // 0xd0
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FGameplayEffectsTarget {
	AActor* Actor; // 0x0
	UPrimitiveComponent* PrimitiveComponent; // 0x8
	UGameplayEffectsComponent* GameplayEffectsComponent; // 0x10
};

struct FScenarioEval_CVar : FScenarioEval {
	FString CVarName; // 0x48
	int32_t CVarValue; // 0x58
	int32_t CVarValueDefault; // 0x5c
	ECompareOp Op; // 0x60
};

struct FQueuedConversation {
	FDataTableRowHandle ConversationRow; // 0x0
	FDataTableRowHandle EventTrigger; // 0x20
	EConversationType ConversationType; // 0x40
	AActor* Instigator; // 0x48
	AActor* Target; // 0x50
	bool bIgnoreFloatingConvoLimiter; // 0x58
};

struct FReplicatedStopSpeakingInfo {
	int32_t Counter; // 0x0
	FName ResponseName; // 0x4
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FTopLevelSpawnDeckOverrides {
	int32_t MaxCardsInPlay; // 0x0
	float DelayBetweenCardDraws; // 0x4
	float DelayAfterDiscard; // 0x8
	TArray<FPerThreatLevelSpawnDelay> DelayBeforeInitialSpawn; // 0x10
	TArray<FPerThreatLevelSpawnDelay> DelayBeforeWaveSpawn; // 0x20
	float DelayBetweenCueAndSpawn; // 0x30
	FIntPoint NumHordeWaves; // 0x34
	float CompleteAfterSpawningStoppedTime; // 0x3c
	int8_t CompleteWhenAllCardsAreInPlayOrExhausted; // 0x40
	int8_t CompleteWhenAllCardsAreExhausted; // 0x41
	int8_t ApplyModCards; // 0x42
	int32_t RetryEQSWithoutOverrideIfNoSpawnersFound; // 0x44
	int32_t ExcludeCardsInPlayFromGeneratedDeck; // 0x48
	bool bOverrideSpawnHeatBlockStart; // 0x4c
	FDifficultyFloat SpawnHeatBlockStart; // 0x50
};

struct FGameplayEval_IsGameModeClassification : FGameplayEval {
	EGameModeClassification GameModeClassification; // 0x48
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FPacingConfigBase {
	FVector2D CalmDuration; // 0x0
	float CalmSpeedupIntensityThreshold; // 0x8
	float CalmSpeedupScale; // 0xc
	FVector2D ViolentDuration; // 0x10
	FVector2D HordeCleanupDuration; // 0x18
	float HordeCleanupTrailingZombieRange; // 0x20
	float HordeCleanupHeroAdvanceRange; // 0x24
	float PeakIntensityThreshold; // 0x28
	FVector2D PeakSustainDuration; // 0x2c
	float PeakFadeIntensityThreshold; // 0x34
	FVector2D PeakFadeDuration; // 0x38
	FVector2D RecoverDuration; // 0x40
};

struct FAnimNode_GobiRandomSequencePlayer : FAnimNode_AssetPlayerBase {
	TArray<FGobiRandomSequenceEntry> Sequences; // 0x30
	float PlayRateBasis; // 0x48
	float PlayRate; // 0x4c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x50
	float StartPosition; // 0x80
	bool bLoopAnimation; // 0x84
	bool bRandomStartPosition; // 0x85
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FActiveGrappler {
	uint32_t NetGuid; // 0x8
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FDediAuthToken {
	FString UserId; // 0x0
	FString GameId; // 0x10
	FString PlatformId; // 0x20
	int32_t Nonce; // 0x30
	int64_t Timestamp; // 0x38
	FString BuildId; // 0x40
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FWebSocketSessionSendMessage_MMLeave {
	int32_t MatchmakingSequenceId; // 0x0
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
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

struct FDefibillatorMoveTickData {
	AGobiCharacter* CurrentTarget; // 0x0
	bool bSuccessfullyUsed; // 0x8
	EDefibrillatorItemState CurrentState; // 0x9
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FAdjustSupplyPointsCommand : FPlayerProfileCommand {
	int32_t Delta; // 0x8
};

struct FTRSEvent {
	FDataTableRowHandle RowHandle; // 0x0
	FName EventName; // 0x20
	TWeakObjectPtr<AActor> Instigator; // 0x28
	TWeakObjectPtr<AActor> Target; // 0x30
};

struct FRawInputDeviceConfiguration {
	FString VendorID; // 0x0
	FString ProductId; // 0x10
	TArray<FRawInputDeviceAxisProperties> AxisProperties; // 0x20
	TArray<FRawInputDeviceButtonProperties> ButtonProperties; // 0x30
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x8
	FMargin Margin; // 0x10
	FSlateColor TintColor; // 0x20
	UObject* ResourceObject; // 0x50
	FName ResourceName; // 0x58
	FBox2D UVRegion; // 0x60
	ESlateBrushDrawType DrawAs; // 0x74
	ESlateBrushTileType Tiling; // 0x75
	ESlateBrushMirrorType Mirroring; // 0x76
	ESlateBrushImageType ImageType; // 0x77
	char bIsDynamicallyLoaded : 1; // 0x88
	char bHasUObject : 1; // 0x88
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FOffHandIK {
	FName IKEffectorName; // 0x0
	FName AdditionalOffsetSocketName; // 0x8
	FName IKTargetName; // 0x10
	FName FemaleIKTargetName; // 0x18
	FVector CalculatedEffectorLocation; // 0x20
	float EffectorInterpSpeed; // 0x2c
	bool bHasTarget; // 0x30
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FTeamImbalanceEffects {
	TArray<UGameplayEffect*> Effects; // 0x0
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FBotTeamInfo {
	ABotController* OwnerBotCtrl; // 0x0
	FGameplayTagQuery EvalTeammateTagQuery; // 0x460
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FPrimitiveParameterCollectionOverrides {
	TArray<FFloatParameterTuple> FloatParameters; // 0x0
	TArray<FVectorParameterTuple> VectorParameters; // 0x10
	FGuid StateId; // 0x20
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x48
	FMovieSceneFloatChannel LeftCurve; // 0xe8
	FMovieSceneFloatChannel RightCurve; // 0x188
	FMovieSceneFloatChannel BottomCurve; // 0x228
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FCustomDataProviderAkAudioEventArray : FCustomDataProvider {
	TArray<UAkAudioEvent*> Value; // 0x8
};

struct FDamageMod {
	bool bIgnoreDamage; // 0x0
	bool bApplyToWeakspots; // 0x1
	float AddValue; // 0x4
	float MultValue; // 0x8
	float PerStackAdditionalAddValue; // 0xc
	float PerStackAdditionalMultValue; // 0x10
	float PermanentDamageScale; // 0x14
	float PerStackPermanentDamageScale; // 0x18
};

struct FGamePropertyFloatMod {
	EGamePropertyFloatModType ModType; // 0x0
	float Value; // 0x4
	float PerStackOffset; // 0x8
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
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

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FAkRTPCTransition {
	FString RTPCName; // 0x0
	float Value; // 0x10
	int32_t InterpolationTimeMs; // 0x14
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FDamageCameraShake {
	FGameplayTagContainer DamageTags; // 0x0
	UCameraShake* Shake; // 0x20
	float InnerRadius; // 0x28
	float OuterRadius; // 0x2c
	float Falloff; // 0x30
	bool bOrientShakeTowardsEpicenter; // 0x34
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

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FTutorialPopupRow : FTableRowBase {
	FText Title; // 0x8
	FText Description; // 0x20
	TArray<FTutorialTile> Tiles; // 0x38
};

struct FRagdollSavedData {
	FName PhysicalAnimProfile; // 0x0
	FName CollisionProfileToSet; // 0x8
	FName BoneName; // 0x10
	bool RagdollPhysicsWasEnabled; // 0x18
	bool bFixedBoundsWasEnabled; // 0x19
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FVectorMaterialParameter {
	FName ParameterName; // 0x0
	FVectorParameterBehavior ActivationBehavior; // 0x8
	FVectorParameterBehavior DeactivationBehavior; // 0x28
};

struct FArtifactSettings {
	FString ArtifactName; // 0x0
	FString ClientId; // 0x10
	FString ClientSecret; // 0x20
	FString ProductId; // 0x30
	FString SandboxId; // 0x40
	FString DeploymentId; // 0x50
	FString EncryptionKey; // 0x60
};

struct FGameplayEval_NearbyCharacters : FGameplayEval {
	int32_t MinCharacterCount; // 0x48
	bool bDoRangeCheck; // 0x4c
	bool bCheckZSeparately; // 0x4d
	float MinDistance; // 0x50
	float MaxDistance; // 0x54
	float MaxZDistance; // 0x58
	bool bDoTagsCheck; // 0x5c
	FGameplayTagQuery CharacterTags; // 0x60
	UGameplayContext_NearbyCharacters* NearbyCharacters; // 0xa8
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FAssetLookupAnimSequenceEntry {
	FGameplayTag Tag; // 0x0
	UAnimSequence* AnimSequence; // 0x8
};

struct FGameplayEval_ActorClass : FGameplayEval {
	UAnimContext_Actor* Actor; // 0x48
	AActor* ActorClass; // 0x50
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x98
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
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

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
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

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FWebServiceRegionalPings {
	TArray<FWebServiceRegionPing> Pings; // 0x0
};

struct FAISpawnEval_ChanceByDifficulty : FAISpawnEval {
	TArray<FDifficultyFloat> ChancePerThreatLevel; // 0x40
	bool bReroll; // 0x50
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FHeroAnimState3P {
	char bIsBeingRevived : 1; // 0x0
	char bIsLedgeHanging : 1; // 0x0
	char bIsIncapped : 1; // 0x0
	char bWasCrouchedOnIncapEnter : 1; // 0x0
	char bIsInjured : 1; // 0x0
	char bStunTransition : 1; // 0x0
	char bIsKnockedBack : 1; // 0x0
	char bIsRevivingIncap : 1; // 0x0
	char bIsPickingLock : 1; // 0x1
	char bIsHelpingFromLedge : 1; // 0x1
	char bIsPinned : 1; // 0x1
	char bIsBeingDragged : 1; // 0x1
	char bUsingPlantedWeapon : 1; // 0x1
	char bUsingMountedWeapon : 1; // 0x1
	char bSleeperProne : 1; // 0x1
	char bIsFiring : 1; // 0x1
	EHeroLedgeHangPose LedgeHangPose; // 0x4
	float RightHandIKAlpha; // 0x8
	float LeftHandIKAlpha; // 0xc
	float AdditiveAimOffsetWeight; // 0x10
	float MountedWeaponAimYaw; // 0x14
	float MountedWeaponAimPitch; // 0x18
	bool bCanLeaveIncap; // 0x1c
	bool bValidRescueSpawnPoint; // 0x1d
	bool bCanPlayFullBodyMontage; // 0x1e
	bool bIsUnarmed; // 0x1f
	ERescueSpawnPointType RescueSpawnPointType; // 0x20
};

struct FLocomotionPrediction {
	bool bEnabled; // 0x0
	float StartTransitionDistance; // 0x4
	float PostPivotTransitionDistance; // 0x8
	bool bCanTransitionFromStart; // 0xc
	bool bCanTransitionFromPivot; // 0xd
	bool bIsPivoting; // 0xe
	EAnimPredictType PredictType; // 0xf
	FVector MarkerLocation; // 0x10
	float DistanceToMarker; // 0x1c
	FVector PrevLocation; // 0x20
	FVector PrevAcceleration; // 0x2c
	FVector PrevVelocity; // 0x38
	UGobiAnimInstance* AnimInstance; // 0x48
	UGobiCharacterMovementComponent* MovementComponent; // 0x50
	FName DistanceCurveName; // 0x58
	float DistanceRemaining; // 0x60
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FScrollBarStyle : FSlateWidgetStyle {
	FSlateBrush HorizontalBackgroundImage; // 0x8
	FSlateBrush VerticalBackgroundImage; // 0x98
	FSlateBrush VerticalTopSlotImage; // 0x128
	FSlateBrush HorizontalTopSlotImage; // 0x1b8
	FSlateBrush VerticalBottomSlotImage; // 0x248
	FSlateBrush HorizontalBottomSlotImage; // 0x2d8
	FSlateBrush NormalThumbImage; // 0x368
	FSlateBrush HoveredThumbImage; // 0x3f8
	FSlateBrush DraggedThumbImage; // 0x488
};

struct FGobiGameCoachEval_Health : FGobiGameCoachEval {
	float TestHealthPercent; // 0x48
	bool bCheckTempHealth; // 0x4c
	ECompareOp CompareOperation; // 0x4d
};

struct FTetherSystem {
	ABotController* OwnerBotCtrl; // 0x10
};

struct FRangedFalloffDamageSet {
	float Range; // 0x0
	float Damage; // 0x4
	float FriendlyDamage; // 0x8
};

struct FGameplayEval_CanRupture : FGameplayEval {
	UAnimContext_Mutilation* Mutilation; // 0x48
};

struct FProductDetails {
	bool bValid; // 0x0
	int32_t Price; // 0x4
	UTexture2D* Icon; // 0x8
	UTexture2D* ShowcaseImage; // 0x10
	FText Name; // 0x18
	FText TypeName; // 0x30
	FText RarityName; // 0x48
	FSlateColor RarityColor; // 0x60
	FDataTableRowHandle Unlock; // 0x90
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FFlatMission : FTableRowBase {
	FDataTableRowHandle OwningChapter; // 0x8
	FDataTableRowHandle MissionSublevelData; // 0x28
	EMissionType MissionType; // 0x48
	FDataTableRowHandle LastMissionObjective; // 0x50
	FText MissionDisplayName; // 0x70
	TArray<FItemRowAndQuantity> Rewards; // 0x88
	TArray<FDataTableRowHandle> PrereqMissions; // 0x98
	bool ShowInHUDMissionList; // 0xa8
	TArray<FDataTableRowHandle> StaticAIDirectorCards; // 0xb0
	TArray<FDataTableRowHandle> DynamicAIDirectorCards; // 0xc0
	TArray<FConditionalDynamicAIDirectorCardDef> ConditionalDynamicAIDirectorCards; // 0xd0
	TArray<FGameplayTag> TaggedDifficultyRollsToSkip; // 0xe0
	EGobiTeam RequiredTeam; // 0xf0
	bool bPreventCatchup; // 0xf1
	bool bAllowDefaultRespawnBehavior; // 0xf2
};

struct FMatchmakingJoinExistingSessionTaskData {
	FString SessionId; // 0x0
	FString SessionCluster; // 0x10
	int32_t ControllerId; // 0x20
};

struct FCardRequestToCueData {
	FName CardRequestName; // 0x0
	FGameplayTag GameplayCueTag; // 0x8
	UAkAudioEvent* UIEvent; // 0x10
};

struct FDirectionalMoveSpeedScale {
	FGamePropertyFloat ForwardMoveSpeedScale; // 0x0
	FGamePropertyFloat BackwardMoveSpeedScale; // 0x38
	FGamePropertyFloat SidewaysMoveSpeedScale; // 0x70
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

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FPredictProjectilePathParams {
	FVector StartLocation; // 0x0
	FVector LaunchVelocity; // 0xc
	bool bTraceWithCollision; // 0x18
	float ProjectileRadius; // 0x1c
	float ProjectileHalfHeight; // 0x20
	float MaxSimTime; // 0x24
	bool bTraceWithChannel; // 0x28
	ECollisionChannel TraceChannel; // 0x29
	TArray<EObjectTypeQuery> ObjectTypes; // 0x30
	TArray<AActor*> ActorsToIgnore; // 0x40
	float SimFrequency; // 0x50
	float OverrideGravityZ; // 0x54
	EDrawDebugTrace DrawDebugType; // 0x58
	float DrawDebugTime; // 0x5c
	bool bTraceComplex; // 0x60
	FName TraceProfile; // 0x64
};

struct FSqueezeTuning : FTuningDataBase {
	float Cooldown; // 0x8
	float MissCooldown; // 0xc
};

struct FGameplayModTagDisplayPolicy : FTableRowBase {
	FText ModTagText; // 0x8
	bool bPositive; // 0x20
	bool bShowTagWhenStackCountZero; // 0x21
	bool bHidePlusOnPositive; // 0x22
	bool bAsPercent; // 0x23
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FMutilationScalability {
	int32_t DismembermentSpawnsPerTimePeriodLocal; // 0x0
	float DismembermentTimePeriodLocal; // 0x4
	int32_t DismembermentSpawnsPerTimePeriodOther; // 0x8
	float DismembermentTimePeriodOther; // 0xc
	int32_t ExplosionBreakOffSpawnsPerTimePeriodLocal; // 0x10
	float ExplosionBreakOffTimePeriodLocal; // 0x14
	int32_t ExplosionBreakOffSpawnsPerTimePeriodOther; // 0x18
	float ExplosionBreakOffTimePeriodOther; // 0x1c
	int32_t ExplosionDismemberSpawnsPerTimePeriodLocal; // 0x20
	float ExplosionDismemberTimePeriodLocal; // 0x24
	int32_t ExplosionDismemberSpawnsPerTimePeriodOther; // 0x28
	float ExplosionDismemberTimePeriodOther; // 0x2c
	TSoftObjectPtr<UParticleSpawnDef> ExplosionJuicedParticleDef; // 0x30
	TSoftObjectPtr<UParticleSpawnDef> ExplosionJuicedCheapParticleDef; // 0x58
	TSoftObjectPtr<UParticleSpawnDef> ExplosionRagdollParticleDef; // 0x80
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

struct FAgoraHydraProductItemJson {
	FString inventory_item_slug; // 0x0
	int32_t Quantity; // 0x10
};

struct FIndexedVendorStockItem {
	FVendorStockItem VendorStockItem; // 0x0
	int32_t ItemIndex; // 0xb0
};

struct FUpdateRateOptimizationCategory {
	FUpdateRateOptimizationQuality QualitySettings[0x5]; // 0x0
};

struct FUpdateRateOptimizationQuality {
	bool bInterpolateSkippedFrames; // 0x0
	TArray<int32_t> FramesToSkipPerLOD; // 0x8
};

struct FWeakSpot {
	FName TuningName; // 0x8
	FGamePropertyFloat MaxHealth; // 0x10
	float StumbleAccumMultiplier; // 0x48
	bool bForwardDamageToHealthComponent; // 0x4c
	float ForwardDamageToHealthComponentMutliplier; // 0x50
	bool bForwardedDamageAppliesInflictDamageType; // 0x54
	bool bClampForwardedDamageToWeakSpotHealth; // 0x55
	bool bAbsorbsHealthComponentDamage; // 0x56
	float InflictDamage; // 0x58
	UGobiDamageType* InflictDamageType; // 0x60
	TArray<UGameplayEffect*> DestroyedEffects; // 0x68
	TArray<FWeakSpotHitGameplayTag> HitImpactGameplayTags; // 0x78
	TArray<FWeakSpotHealthStateActor> HealthStateActors; // 0x88
	TArray<FMeshMaterialParamValueMapper> HealthMaterialModifiers; // 0x98
	bool bRegisterAsAimAssistSnapLocation; // 0xa8
	bool bUseHealthComponentDamageFilters; // 0xa9
	float Health; // 0xac
	FReplicatedDamageInfo ReplicatedDamageInfo; // 0xb0
};

struct FNamedBone {
	FName BoneName; // 0x0
	FName BoneDisplayName; // 0x8
};

struct FQueuedClientAdjustment {
	UPrimitiveComponent* NewBase; // 0x0
	TArray<char> Buffer; // 0x8
};

struct FDialogueEventDefinitionRow : FTableRowBase {
	FDialogueEventConfig EventConfig; // 0x8
};

struct FThrowableStateConfig {
	UAnimMontage* MontageFP; // 0x0
	UAnimMontage* Montage3P; // 0x8
	UAkAudioEvent* StateSound; // 0x10
	UAkAudioEvent* StateSoundStop; // 0x18
	float StateLength; // 0x20
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

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FGameplayEval_SpeedRange : FGameplayEval {
	FAIDataProviderFloatValue IdealSpeed; // 0x48
	FAIDataProviderFloatValue MaxDistFromIdealSpeed; // 0x80
	EDimension TestMode; // 0xb8
	EIdealDistanceDirection IdealSpeedDirection; // 0xb9
	EScoringEquation ScoringEquation; // 0xba
	UAnimContext_Actor* Actor; // 0xc0
};

struct FSingularTraitMapping {
	UTrait* TraitSubclass; // 0x0
};

struct FTrackRecentCharacterCommand : FPlayerProfileCommand {
	FDataTableRowHandle Character; // 0x8
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x98
	FSlateBrush NormalBarImage; // 0x128
	FSlateBrush DisabledBarImage; // 0x1b8
	FSlateBrush BackgroundImage; // 0x248
	float BarThickness; // 0x2d8
};

struct FMatchmakingRegionTelemetry {
	FString Region; // 0x0
	int32_t WaitTime; // 0x10
};

struct FEquippedCharacterCustomizationSetJson {
	FDataTableRowHandle Character; // 0x0
	FCharacterCustomizationSet CustomizationSet; // 0x20
};

struct FAkPluginList {
	TArray<FString> PluginNames; // 0x0
};

struct FWebServiceSessionAddParticipant {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
};

struct FSprintStateData {
	EPlayerSprintState CurrentSprintState; // 0x0
};

struct FGameplayEval_ClimbLink : FGameplayEval {
	float MaxStartingDistance; // 0x48
	float MinClimbUp; // 0x4c
	float MaxClimbUp; // 0x50
	float MinTopDistance; // 0x54
	float MaxTopDistance; // 0x58
	float MinClimbDown; // 0x5c
	float MaxClimbDown; // 0x60
	TArray<UNavArea*> ClimbNavAreas; // 0x68
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FLightParameterConfig {
	TArray<float> Intensity; // 0x8
	TArray<float> Temperature; // 0x18
};

struct FGameplayEval_HasItem : FGameplayEval {
	FGameplayTagQuery SelectedItemTag; // 0x48
};

struct FGobiWorldProbeConfig {
	int32_t ProbeCount; // 0x0
	FVector UpdateFreq; // 0x4
	float UpdateValidDuration; // 0x10
	float DistOffset; // 0x14
	float MoveDistDirty; // 0x18
	float AllowedProbeDist; // 0x20
	float ZOffsetLimit; // 0x28
	float MaxSpeedForIdleUpdate; // 0x2c
	bool bUpdateWhileIdle; // 0x30
};

struct FGobiEasingAnim {
	float Duration; // 0x8
	EEasingFunc EasingFunc; // 0xc
	float EasingExponent; // 0x10
	int32_t Steps; // 0x14
};

struct FDifficultyRow : FTableRowBase {
	FText DifficultyDisplayName; // 0x8
	float FriendlyFireScale; // 0x20
	int32_t NumContinues; // 0x24
	EMissionEndedBehavior MissionEndBehavior; // 0x28
	ERespawnStatBehavior DamageRespawnBehavior[0x3]; // 0x29
	ERespawnStatBehavior TraumaDamageRespawnBehavior[0x3]; // 0x2c
	ERespawnStatBehavior IncapCountRespawnBehavior[0x3]; // 0x2f
	ERespawnStatBehavior InventoryItemsRespawnBehavior[0x3]; // 0x32
	ERespawnStatBehavior GameplayCardsRespawnBehavior[0x3]; // 0x35
	TArray<FDataTableRowHandle> DifficultyCards; // 0x38
	float MoneyLostOnFailure; // 0x48
	int32_t MoneyPaidPerSuccessfulSurvivor; // 0x4c
	UCurveFloat* SupplyPointRewardCurve; // 0x50
	float SupplyPointRewardScalar; // 0x58
	TArray<FTaggedCardRolls> TaggedCardRolls; // 0x60
	int32_t AdditionalCards; // 0x70
	int32_t AdditionalCurrency; // 0x74
	float AddtionalAmmoPercentage; // 0x78
	float AdditionalHealth; // 0x7c
	float AdditionalTraumaHeal; // 0x80
	FTitanTuning TitanTuningData; // 0x88
	bool bSleeperTriggersHordesOnSnare; // 0xa8
	TArray<FText> DifficultyStrings; // 0xb0
	FText SupplyPointsDifficultyString; // 0xc0
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x48
	EMovieSceneBlendType BlendType; // 0xd8
};

struct FGrowingChanceByDifficulty {
	FDifficultyVector2D Range; // 0x0
	FDifficultyFloat Increment; // 0x28
};

struct FItemRow : FTableRowBase {
	FName Slug; // 0x8
	bool bIsEnabled; // 0x10
	bool bDisabledForTradeShow; // 0x11
	bool bGameplayCritical; // 0x12
	bool bIsGloballyLoaded; // 0x13
	EItemType Type; // 0x14
	EEquipmentSlot EquipSlot; // 0x15
	EItemQuality Quality; // 0x16
	EGameplayCardAffinity Affinity; // 0x17
	TSoftClassPtr<UObject> ItemClass; // 0x18
	TSoftClassPtr<UObject> DroppedLootClass; // 0x40
	UDataTable* WeaponCustomizationTable; // 0x68
	FRotator CustomizationViewRotationOffset; // 0x70
	FDataTableRowHandle TuningData; // 0x80
	FGameplayTag ItemTag; // 0xa0
	FGameplayTagContainer AssociatedTags; // 0xa8
	int32_t Cost; // 0xc8
	float LootWeight; // 0xcc
	int32_t MaxStack; // 0xd0
	FItemUseRulesConfig ItemUseConfig; // 0xd8
	TArray<UGameplayEffect*> SelectedGameplayEffects; // 0x158
	TArray<FDataTableRowHandle> GameplayCardsToApply; // 0x168
	bool bRetainOnDeath; // 0x178
	bool bRetainBetweenLevels; // 0x179
	FText DisplayName; // 0x180
	FText Description; // 0x198
	EItemCategory DisplayCategory; // 0x1b0
	bool bIgnoreArmoryEntry; // 0x1b1
	FGameplayTagContainer RelatedArmoryWeaponTag; // 0x1b8
	UTexture2D* SmallIconImage; // 0x1d8
	UTexture2D* LargeIconImage; // 0x1e0
	UTexture2D* ThumbnailImage; // 0x1e8
	FLinearColor TextColor; // 0x1f0
	int32_t PartyStatusPriority; // 0x200
	EItemPickupDialogue PickupDialogue; // 0x204
	UAkAudioEvent* AKEDrop; // 0x208
	UAkAudioEvent* AKEPickup; // 0x210
	UAkAudioEvent* AKEPickupFromWall; // 0x218
	UAkAudioEvent* AKEPickupGenericTap; // 0x220
	UAkAudioEvent* AKEPickupLocalPlayer; // 0x228
	UAkAudioEvent* AKEBounce; // 0x230
	UAkAudioEvent* AKERoll; // 0x238
	UAkAudioEvent* AKEPurchase; // 0x240
	UAkAudioEvent* AKECustomization; // 0x248
	FSoftObjectPath FirstPersonBaseMesh; // 0x250
	TSoftObjectPtr<UStaticMesh> CharacterLineupMesh; // 0x268
	TArray<FItemAttribute> Attributes; // 0x290
	TArray<FItemAttributeModifier> AttributeModifiers; // 0x2a0
	TArray<FDataTableRowHandle> AttachmentTooltipPerks; // 0x2b0
	int32_t StarValue; // 0x2c0
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

struct FRelationshipIncomingFriendInvite {
	FString UnixTimestamp; // 0x0
	bool bReported; // 0x10
};

struct FWebServiceSessionPendingParticipant {
	FWebServiceSessionAddRemoveParticipant ID; // 0x0
	FString Team; // 0x18
};

struct FScenarioEval_TimeSinceActivation : FScenarioEval {
	float Time; // 0x40
	ECompareOp Op; // 0x44
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

struct FTitanStage3TentacleShared {
	float DelayBetweenAttacksMin; // 0x0
	float DelayBetweenAttacksMax; // 0x4
	float AcidSprayEnterSeconds; // 0x8
	float AcidSprayExitSeconds; // 0xc
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FGameplayEval_DamageRange : FGameplayEval {
	FAIDataProviderFloatValue DamageMin; // 0x48
	FAIDataProviderFloatValue DamageMax; // 0x80
	bool bAsPercent; // 0xb8
	UAnimContext_DamageInfo* DamageInfo; // 0xc0
};

struct FRespawnPayload {
	bool bRespawnEnabled; // 0x0
	float RespawnDelay; // 0x4
	bool bRespawnMax; // 0x8
	int32_t RespawnMax; // 0xc
	EDestroyMode DestroyMode; // 0x10
	int32_t PredecessorMax; // 0x14
	float DestroyDelay; // 0x18
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FModifyPoolPrivacyData {
	FString Pool; // 0x0
	bool IsPrivate; // 0x10
};

struct FGameplayTagCondition : FUsableCondition {
	bool bBothQueriesMustSucceed; // 0x28
	FGameplayTagQuery UserTagQuery; // 0x30
	FGameplayTagQuery UsableTagQuery; // 0x78
	FGameplayTagContainer UsableInitialTags; // 0xc0
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FAISeparationGroup {
	FGameplayTagQuery IgnorerQuery; // 0x0
	FGameplayTagQuery IgnoredQuery; // 0x48
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FZombieMutationTeamData {
	EMatchmakingTeam MatchmakingTeam; // 0x0
	int32_t CommunalPoints; // 0x4
	TArray<FZombieMutationPurchase> MutationPurchases; // 0x8
};

struct FCustomDataProviderGameplayTagContainer : FCustomDataProvider {
	FGameplayTagContainer Value; // 0x8
};

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x98
	FSlateBrush DisabledBarImage; // 0x128
	FSlateBrush NormalThumbImage; // 0x1b8
	FSlateBrush HoveredThumbImage; // 0x248
	FSlateBrush DisabledThumbImage; // 0x2d8
	float BarThickness; // 0x368
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x600
};

struct FWebServiceAuthResponse {
	FString Token; // 0x0
	FString UserId; // 0x10
	FString WatermarkCode; // 0x20
};

struct FMutilationQualityCache {
	UParticleSpawnDef* JuicedParticleDef; // 0x0
	UParticleSpawnDef* JuicedCheapParticleDef; // 0x8
	UParticleSpawnDef* RagdollParticleDef; // 0x10
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FCustomDataProviderInt32 : FCustomDataProvider {
	int32_t Value; // 0x4
};

struct FJumpMetric {
	int32_t Count; // 0x0
	float Horizontal; // 0x4
	float Vertical; // 0x8
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FAISpawnActorDebugInfo {
	UObject* AIClass; // 0x0
	int32_t TotalSpawnersOnWander; // 0x8
	int32_t NumAvailableSpawnersOnWander; // 0xc
	int32_t TotalSpawnersOnHorde; // 0x10
	int32_t NumAvailableSpawnersOnHorde; // 0x14
};

struct FGameplayEval_DamageAmount : FGameplayEval {
	float Damage; // 0x48
	FAIDataProviderFloatValue DamageAmount; // 0x50
	bool bAsPercent; // 0x88
	ECompareOp CompareOperation; // 0x89
	UAnimContext_DamageInfo* DamageInfo; // 0x90
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x98
	FSlateBrush BackgroundImageFocused; // 0x128
	FSlateBrush BackgroundImageReadOnly; // 0x1b8
	FMargin Padding; // 0x248
	FSlateFontInfo Font; // 0x258
	FSlateColor ForegroundColor; // 0x2b8
	FSlateColor BackgroundColor; // 0x2e8
	FSlateColor ReadOnlyForegroundColor; // 0x318
	FMargin HScrollBarPadding; // 0x348
	FMargin VScrollBarPadding; // 0x358
	FScrollBarStyle ScrollBarStyle; // 0x368
};

struct FSMG_Tuning_Struct {
	FFireModeBaseTuning FireModeBase_37_C638CE8245DA9A2DF671EB8595562AB2; // 0x0
	FFireModeSingleTraceTuning FireModeSingleTrace_31_B52AAF5342AAAD16A5D17ABAC0AF6B20; // 0x38
	FSpreadTuning Spread_9_A10B47714F0C1FDBBA45D0A99B81AA19; // 0x50
	FClipAmmoTuning ClipAmmo_28_EA5256ED4BD75CBDA8D3918B2AB5A4C8; // 0xb0
	FClipReloadTuning ClipReload_3_FD477EAF4A650B258356838D708AAE34; // 0xb4
	FRecoilTuning Recoil_12_013AD06C4439A387B221B9ADD4185060; // 0xc0
	FBulletPenetrationTuning BulletPenetration_25_60DBD0524003CD5A218C64AF3A4A4C64; // 0x200
	FWeaponMoveSpeedTuning WeaponMoveSpeed_15_1BA8397A4DC21C92B95589A6E41E1556; // 0x204
	FItemCycleTuning ItemCycle_19_11FF028E4B6AF2DFF788C685C7EDDB99; // 0x270
	FADSTuning ADS_34_E19DB30E493B335A23988E92DDCE60A9; // 0x284
	FItemAnimationDataTuning ItemAnimationData_22_363449C6430A9955DEB58CA7D20B2F23; // 0x28c
};

struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	FVector OverrideWorldGravity; // 0x168
	FVector ExternalForce; // 0x174
	FVector ComponentLinearAccScale; // 0x180
	FVector ComponentLinearVelScale; // 0x18c
	FVector ComponentAppliedLinearAccClamp; // 0x198
	float CachedBoundsScale; // 0x1a4
	FBoneReference BaseBoneRef; // 0x1a8
	ECollisionChannel OverlapChannel; // 0x1b8
	ESimulationSpace SimulationSpace; // 0x1b9
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ba
	char bEnableWorldGeometry : 1; // 0x1bc
	char bOverrideWorldGravity : 1; // 0x1bc
	char bTransferBoneVelocities : 1; // 0x1bc
	char bFreezeIncomingPoseOnStart : 1; // 0x1bc
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1bc
	FSolverIterations OverrideSolverIterations; // 0x1c0
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FMissionSublevelData : FTableRowBase {
	TArray<FName> RequiredSublevels; // 0x8
	TArray<FName> RequestedSublevels; // 0x18
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FPlayerProjectileThrowConfig {
	bool bThrowWithSecondaryButton; // 0x0
	bool bThrowTowardsCrosshair; // 0x1
	bool bThrowButtonRequiresRelease; // 0x2
	float MaxCrossHairDistance; // 0x4
	FVector2D CrossHairLerpDistanceThreshold; // 0x8
	float ArcParam; // 0x10
	float ThrowYaw; // 0x14
	float MinCookingTimeToShowReticle; // 0x18
	float MinCookingTimeToShowTrajectory; // 0x1c
	int32_t ShowReticleStates; // 0x20
	int32_t ShowReticleTrajectoryStates; // 0x24
	int32_t ShowFloatingCrossHairStates; // 0x28
	bool ProjectileTrajectoryCompensatesForOwnerVelocity; // 0x2c
	float AimAssistRadius; // 0x30
	FName ReticleTrajectoryUseStartBone; // 0x34
	TArray<FProjectileThrowReticleTypeEntry> Reticles; // 0x40
	bool bClientPredictedImpacts; // 0x50
};

struct FMutilationHitReaction {
	FGameplayTag HitReactionTag; // 0x0
	UGameplayEvaluatorSet* FilterSet; // 0x8
	TArray<FMutilationHitReactionEvent> Mutilations; // 0x10
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FLipsyncLineRow : FTableRowBase {
	TArray<FLipsyncTimingEntry> LipsyncTiming; // 0x8
	TArray<uint16_t> Visemes; // 0x18
};

struct FPacingConfigOverride {
	int32_t MinThreatLevel; // 0x0
	bool bOverrideCalmDuration; // 0x4
	FVector2D CalmDuration; // 0x8
	bool bOverrideCalmSpeedupIntensityThreshold; // 0x10
	float CalmSpeedupIntensityThreshold; // 0x14
	bool bOverrideCalmSpeedupScale; // 0x18
	float CalmSpeedupScale; // 0x1c
	bool bOverrideViolentDuration; // 0x20
	FVector2D ViolentDuration; // 0x24
	bool bOverrideHordeCleanupDuration; // 0x2c
	FVector2D HordeCleanupDuration; // 0x30
	bool bOverrideHordeCleanupTrailingZombieRange; // 0x38
	float HordeCleanupTrailingZombieRange; // 0x3c
	bool bOverrideHordeCleanupHeroAdvanceRange; // 0x40
	float HordeCleanupHeroAdvanceRange; // 0x44
	bool bOverridePeakIntensityThreshold; // 0x48
	float PeakIntensityThreshold; // 0x4c
	bool bOverridePeakSustainDuration; // 0x50
	FVector2D PeakSustainDuration; // 0x54
	bool bOverridePeakFadeIntensityThreshold; // 0x5c
	float PeakFadeIntensityThreshold; // 0x60
	bool bOverridePeakFadeDuration; // 0x64
	FVector2D PeakFadeDuration; // 0x68
	bool bOverrideRecoverDuration; // 0x70
	FVector2D RecoverDuration; // 0x74
};

struct FGobiGameCoachEval_IsInSafeRoom : FGobiGameCoachEval {
	ESafeRoomEvalType SafeRoomType; // 0x48
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FDialogueEval_CheckLastResponse : FDialogueEval {
	bool bCheckTarget; // 0x48
	FDataTableRowHandle ResponseGroup; // 0x50
	TArray<FDataTableRowHandle> ResponseGroups; // 0x70
};

struct FAIPopulation {
	AGobiCharacter* AIClass; // 0x0
	int32_t NumToSpawn; // 0x8
	bool bShouldSpawnHording; // 0xc
	FGameplayTagContainer TagsToApply; // 0x10
	FGameplayTagContainer TagsToRemove; // 0x30
};

struct FFortificationMeshInfo {
	UStaticMesh* FortificationMesh; // 0x0
	UMaterialInterface* MaterialOverride; // 0x8
	float BreakAtHealthPct; // 0x10
	TArray<UStaticMesh*> BrokenPieces; // 0x18
	bool bCanBeUpgraded; // 0x28
	TArray<FUsableInventoryCondition> RequiredMaterialsForUpgrade; // 0x30
};

struct FWanderBucketDensityLevelsByDifficultyEntry {
	EMissionDifficulty Difficulty; // 0x0
	TArray<EWanderBucketDensityLevel> DensityLevels; // 0x8
};

struct FBotCombatFriendlyFireInfo {
	bool bFriendlyFireShootThruTeammates; // 0x0
	bool bFriendlyFireAware; // 0x1
	bool bFriendlyFireCrouches; // 0x2
	float FriendlyFireChkDist; // 0x4
	float FriendlyFireCrouchCooldown; // 0xc
	float FriendlyFireOutScale; // 0x10
	float FriendlyFireImmuneDuration; // 0x14
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FCreateDeckCommand : FPlayerProfileCommand {
	int32_t ID; // 0x8
	FString Name; // 0x10
	EGameplayCardDeckType DeckType; // 0x20
	TArray<FDataTableRowHandle> Cards; // 0x28
	int32_t Version; // 0x38
};

struct FChaserTuning : FTableRowBase {
	FLeapTuning PlayerControlledLeap; // 0x8
	FProjectileThrowTuning BasicThrow; // 0x1f0
	FProjectileThrowTuning Pin; // 0x270
	FPounceTuning Pounce; // 0x2f0
	FHealthTuning Health; // 0x3d0
	FWeakSpotsTuning WeakSpots; // 0x518
	float Melee_MaxDistOffset; // 0x540
	float MeleeRadiusCheck; // 0x544
	float MeleeRadiusCheck_Ground; // 0x548
	float MeleeRadiusCheck_High; // 0x54c
	bool bHasPlayerLeap; // 0x550
	bool bHasBasicThrow; // 0x551
	bool bHasPin; // 0x552
	bool bHasPounce; // 0x553
	bool bHasMelee; // 0x554
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FItemAttribute {
	EItemAttributeType AttributeType; // 0x0
	float AttributeValue; // 0x4
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FWaypointDefinition {
	EWaypointType Type; // 0x0
	EGobiTeam OwnerTeam; // 0x1
	TSoftClassPtr<UObject> WidgetClass; // 0x8
	TArray<FDataTableRowHandle> MissionManagerObjectiveBindings; // 0x30
	UTexture2D* Icon; // 0x40
	FSlateColor Tint; // 0x48
	FSlateColor MissionCompletedTint; // 0x78
	FText Text; // 0xa8
	float Lifetime; // 0xc0
	bool bShowDistanceText; // 0xc4
	bool bShowOffscreen; // 0xc5
	bool bStartsVisible; // 0xc6
	bool bFollowOwnerPosition; // 0xc7
	EWaypointVisibility Visibility; // 0xc8
	ECommWheelAction CommWheelAction; // 0xc9
};

struct FGameplayEval_Climb : FGameplayEval {
	float MaxStartingDistance; // 0x48
	float ClimbUp; // 0x4c
	float TopDistance; // 0x50
	float ClimbDown; // 0x54
	TArray<UNavArea*> ClimbNavAreas; // 0x58
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FAnimEval_Climb : FAnimEval {
	float MaxStartingDistance; // 0x48
	float ClimbUp; // 0x4c
	float TopDistance; // 0x50
	float ClimbDown; // 0x54
	TArray<UNavArea*> ClimbNavAreas; // 0x58
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FDebugLootSpawnCountMod {
	int32_t Count; // 0x0
	ULootSpawnCountMod* Mod; // 0x8
	TArray<FRolledLootPool> RolledPools; // 0x10
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FAIDataProviderGameplayTagContainerValue : FAIDataProviderStructValue {
	FGameplayTagContainer DefaultValue; // 0x30
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x30
};

struct FAttachmentMeshSpecifier {
	FGameplayTag ComponentGameplayTag; // 0x0
	FName AttachSocketName; // 0x8
	USkeletalMesh* SkeletalMesh; // 0x10
	UStaticMesh* StaticMesh; // 0x18
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FUIPlayerStat {
	FText DisplayName; // 0x0
	EPlayerProfileStat Stat; // 0x18
	FString StatSuffix; // 0x20
	bool bIsTimer; // 0x30
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
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

struct FDialogueActiveSpeechDebugInfo {
	FName SpeakerName; // 0x0
	FName VariantName; // 0x8
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x18
	FGuid ExpressionGUID; // 0x20
};

struct FGobiSession {
	TArray<FGobiSessionUser> Users; // 0x0
	TArray<FGobiSessionPendingParticipant> PendingParticipants; // 0x10
	FGobiSessionSessionData SessionData; // 0x20
	FGobiSessionServerData ServerData; // 0x60
	FString SessionId; // 0xb0
	FString SessionCluster; // 0xc0
	FString SessionHostId; // 0xd0
	FString Region; // 0xe0
};

struct FRagdollReplicatedData {
	FName CollisionProfileToSet; // 0x0
	FName BoneName; // 0x8
	bool bSetToRagdoll; // 0x10
	bool bForceReplicationFlag; // 0x11
	bool bOwnerIsDead; // 0x12
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FGobiAnimationCurveData {
	FName CurveName; // 0x0
	float DefaultCurveValue; // 0x8
	bool bInvertCurve; // 0xc
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

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FMOTDTab {
	FText TabName; // 0x0
	FDeepLinkButton DeepLinkButton; // 0x18
	FMOTDHubInfo HubInfo; // 0x88
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FHeroAnimDataFP {
	FGobiAnimationCurveData LeftHandCopyBoneWeightCurve; // 0x0
	FGobiAnimationCurveData CrouchOffsetCurve; // 0x10
	FGobiAnimationCurveData AdditiveOverrideCurve; // 0x20
	FGobiAnimationCurveData AdditiveIdleOverrideCurve; // 0x30
	FGobiAnimationCurveData AdditiveWalkOverrideCurve; // 0x40
	FVector2D JumpLandWeightMinMax; // 0x50
	FVector2D JumpLandSpeedMinMax; // 0x58
	float PlayerSprintNormalizedSpeed; // 0x60
	float InterruptedSprintLoopPlayRate; // 0x64
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

struct FShrubBehaviorContainer {
	FShrubEmitterInfo Behavior; // 0x0
	TSet<TSoftObjectPtr<UStaticMesh>> ShrubMeshes; // 0x28
};

struct FUIMatchmakingPrefs {
	bool bIsPrivate; // 0x0
	bool bIsCrossplay; // 0x1
	EMatchmakingVoicePreference VoicePreference; // 0x2
};

struct FGameplayEval_IsSpeakerAvailable : FGameplayEval {
	FDataTableRowHandle Speaker; // 0x48
	bool bCheckIsCapable; // 0x68
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
	FName SourceAssetName; // 0x24
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FHydraSteamUserTicket {
	FString UserId; // 0x0
	FString Ticket; // 0x10
	FDateTime Timestamp; // 0x20
};

struct FHoldoutCollapseStateData {
	FVector StartLocation; // 0x0
	FVector EndLocation; // 0xc
	char CurrentPhase; // 0x18
};

struct FDialogueEval_IsConversationPlaying : FDialogueEval {
	bool bCheckOnlyImmediate; // 0x48
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
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

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FRecoilTuning {
	TArray<FWeaponRecoilEntry> RecoilEntries; // 0x0
	TArray<FWeaponRecoilEntry> ADSRecoilEntries; // 0x10
	FRecoilViewKickTuning HipViewKickConfig; // 0x20
	FRecoilViewKickTuning ADSViewKickConfig; // 0x28
	bool bPredictiveRecoil; // 0x30
	float PredictivePatternResetDelay; // 0x34
	float ADSViewKickCenterSpeed; // 0x38
	float HipViewKickCenterSpeed; // 0x3c
	float RecenterCenterSpeedModifier; // 0x40
	float RecenterDelay; // 0x44
	bool bAutoRecenter; // 0x48
	float GunKickDeadZoneAngle; // 0x4c
	float GunKickDeadZoneVelocity; // 0x50
	FGunKickRecoilSpec HipGunKickSpec; // 0x54
	FGunKickRecoilSpec ADSGunKickSpec; // 0xa4
	FRecoilPushbackTuning HipPushbackConfig; // 0xf4
	FRecoilPushbackTuning ADSPushbackConfig; // 0x118
};

struct FBadgeData {
	int32_t Emblem; // 0x0
	int32_t Title; // 0x4
	int32_t Banner; // 0x8
};

struct FRecycleConfigOverride {
	bool bOverrideRecycleEQS; // 0x0
	UEnvQuery* RecycleEQS; // 0x8
	bool bOverrideMinAICountNeededForRecycling; // 0x10
	int32_t MinAICountNeededForRecycling; // 0x14
	bool bOverrideMaxRecycleDistanceFromPlayers; // 0x18
	float MaxRecycleDistanceFromPlayers; // 0x1c
	bool bOverrideMaxAIToRecyclePerTick; // 0x20
	int32_t MaxAIToRecyclePerTick; // 0x24
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FFortDediUpdateData {
	EFortDediStatus Status; // 0x0
	FString Bucket; // 0x8
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FCustomDataProviderFNameArray : FCustomDataProvider {
	TArray<FName> Value; // 0x8
};

struct FDoorNavArea {
	UNavArea* ClosedNavAreaClass; // 0x0
	UNavArea* OpenedNavAreaClass; // 0x8
};

struct FMenuCommand {
	FText DisplayName; // 0x0
	EPartyMenuCommand Command; // 0x18
};

struct FPlayerLoadout {
	FInventoryLoadout FlattenedDefaultLoadout; // 0x0
	FInventoryLoadout DefaultLoadoutFromCharacter; // 0x38
	FInventoryLoadout DefaultLoadoutFromMods; // 0x70
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FKey {
	FName KeyName; // 0x0
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FEnvironmentContext {
	FString TaskManRelayIp; // 0x0
	FString DeviceCode; // 0x10
};

struct FTriggerHordeTuning : FTuningDataBase {
	float Cooldown; // 0x8
	TArray<UAnimMontage*> Montages; // 0x10
};

struct FBroadcastMessage {
	FName Slug; // 0x0
	FText Contents; // 0x8
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
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

struct FBotInventorySystem {
	ABotController* OwnerBotCtrl; // 0x0
	FGameplayTag BotItemUseCooldownTag; // 0x8
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FAgoraHydraProductWithoutSlugJson {
	FString Name; // 0x0
	FString Description; // 0x10
	bool Visible; // 0x20
	bool available_for_purchase; // 0x21
	TArray<FAgoraHydraProductItemJson> Items; // 0x28
	TArray<FAgoraHydraProductPriceJson> prices; // 0x38
	TArray<FString> Tags; // 0x48
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FFootPlantState {
	FVector GroundLocation; // 0x0
	FVector GroundNormal; // 0xc
	FVector PreAdjustedLocation; // 0x18
	FName FootBoneName; // 0x24
	FName IKFootBoneName; // 0x2c
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FGameplayCueContext {
	TWeakObjectPtr<AActor> Instigator; // 0x0
	TWeakObjectPtr<AActor> SourceActor; // 0x8
	TWeakObjectPtr<AActor> TargetActor; // 0x10
	FHitResult HitResult; // 0x18
	float UserFloat1; // 0xa0
	int32_t UserInt1; // 0xa4
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FSkeletalMeshSet {
	TArray<FSkeletalMeshPiece> Meshes; // 0x0
	TArray<FSkeletalMeshSetMaterialOverride> MaterialOverrides; // 0x10
	TArray<UMeshMaterialParamSet*> MaterialParamSets; // 0x20
	FGameplayTagQuery TagRequirements; // 0x30
	FGameplayTagContainer ApplyTags; // 0x78
	TArray<UMeshMaterialSet*> MaterialSets; // 0x98
};

struct FGameplayEffectKnockbackData {
	bool bUseKnockbackRange; // 0x0
	FVector2D DistanceInterpRange; // 0x4
	FVector2D LaunchBackSpeedRange; // 0xc
	FVector2D LaunchUpSpeedRange; // 0x14
	float LaunchBackSpeed; // 0x1c
	float LaunchUpSpeed; // 0x20
	float GravityScalar; // 0x24
	float KnockbackDuration; // 0x28
	EGameplayEffectKnockbackDirection Direction; // 0x2c
	UCurveFloat* StrengthCurve; // 0x30
	FGameplayTagContainer TagsToApply; // 0x38
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

struct FProjectilePointsList {
	TArray<FVector> Points; // 0x0
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
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

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x48
};

struct FNiagaraBool {
	int32_t Value; // 0x0
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

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
	FString ReleaseVersion; // 0x10
};

struct FGameplayEval_ReachedClimbLocation : FGameplayEval {
	ENavLinkContextLocations LocationType; // 0x48
	float ArrivalDistance; // 0x4c
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FSoundModulationParameter {
	FName Control; // 0x0
	float Value; // 0x8
};

struct FHubScreenInfo {
	TSoftClassPtr<UObject> ScreenClass; // 0x0
	FText DisplayName; // 0x28
	bool bCanSurvivorsUse; // 0x40
	bool bCanZombiesUse; // 0x41
	bool bRemoveForShowDemo; // 0x42
	bool bRemoveDuringChunkInstall; // 0x43
	TArray<FDataTableRowHandle> TrackedObjectives; // 0x48
};

struct FPrimitiveVectorParameter {
	FName Name; // 0x0
	FLinearColor Value; // 0x8
	bool bUsesAlpha; // 0x18
	int32_t Index; // 0x1c
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

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x48
	FMovieSceneFloatChannel GreenChannel; // 0xe8
	FMovieSceneFloatChannel BlueChannel; // 0x188
	FMovieSceneFloatChannel AlphaChannel; // 0x228
};

struct FAbilityConfig {
	EAbilityType Type; // 0x0
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FMoveToTargetData {
	FVector Target; // 0x0
	float Speed; // 0xc
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

struct FPerkSet {
	TArray<FDataTableRowHandle> PerksToApply; // 0x0
	int32_t TicketCount; // 0x10
};

struct FCorpseQualitySettings {
	int32_t VFXCorpseMaxCount; // 0x0
	int32_t VFXCorpseFadeEarlyCount; // 0x4
	float VFXCorpseMaxLifetime; // 0x8
	int32_t CharacterCorpseMaxCount; // 0xc
	float CharacterCorpseMaxLifetime; // 0x10
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FChallengeRankRow : FTableRowBase {
	UTexture2D* Icon; // 0x8
	FText DisplayName; // 0x10
	int32_t PointCost; // 0x28
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FAchievementConfig {
	FName AchievementName; // 0x0
	bool bManuallyAwarded; // 0x10
	bool bEndOfLevelOnly; // 0x11
	TArray<FAchievementRequirement> AchievementRequirements; // 0x18
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FGobiOnlineUser {
	FString UserId; // 0x10
	int32_t UserNonce; // 0x20
	FString FirstPartyDisplayName; // 0x28
	FString HydraDisplayName; // 0x38
	EFriendInviteStatus FriendInviteStatus; // 0x48
	bool bIsOnline; // 0x49
	bool bIsPlayingAnyApp; // 0x4a
	bool bIsPlayingThisApp; // 0x4b
	bool bHasVoiceSupport; // 0x4c
	bool bTutorial; // 0x4d
	FGobiOnlineUserSession Group; // 0x50
	EGameModeClassification GameModeClassification; // 0x88
	FText StatusText; // 0x90
	FString PlatformName; // 0xa8
	EHydraAuthType HydraAuthType; // 0xb8
	FString HydraId; // 0xc0
	FString HydraPublicId; // 0xd0
	EFriendInviteStatus HydraInviteStatus; // 0xe0
};

struct FRolledVendorStockCardParams {
	FGameplayTagContainer Tags; // 0x0
	FGameplayTagContainer FallbackTags; // 0x20
	bool bOneTimePurchase; // 0x40
};

struct FFocusTrackingRefPose {
	FReferenceFrame ReferencePose; // 0x0
	FBoneChain IkBoneChain; // 0x10
	FRotationConstraints IKConstraints; // 0x40
	EAxis EffectorForwardAxis; // 0x50
	FRotator EffectorForwardOffset; // 0x54
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

struct FAssetLookupAkAudioEventArrayEntry {
	FGameplayTag Tag; // 0x0
	TArray<UAkAudioEvent*> AkAudioEvents; // 0x8
};

struct FTitanStage2Mouth {
	float BiteTellSecs; // 0x0
	float BiteCooldownSecs; // 0x4
	float RoarInterruptHealthPct; // 0x8
	float RoarSecsMax; // 0xc
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FOptionsBindingTextLabelInputType {
	FName InputName; // 0x0
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FProfileDataRecord {
	FVector CameraLocation; // 0x8
	FRotator CameraRotation; // 0x14
	FString SetposString; // 0x20
	FRotator CameraRotationGPU; // 0x30
	FString SetposStringGPU; // 0x40
	FRotator CameraRotationRT; // 0x50
	FString SetposStringRT; // 0x60
	FRotator CameraRotationShadowDC; // 0x70
	FString SetposStringShadowDC; // 0x80
	float AverageRenderThreadTime; // 0x90
	float MaxRenderThreadTime; // 0x94
	float AverageGPUTime; // 0x98
	float MaxGPUTime; // 0x9c
	uint32_t AverageDrawCalls; // 0xa0
	uint32_t MaxDrawCalls; // 0xa4
	uint32_t AverageShadowDrawCalls; // 0xa8
	uint32_t MaxShadowDrawCalls; // 0xac
	uint32_t AveragePrimitivesDrawn; // 0xb0
	uint32_t MaxPrimitivesDrawn; // 0xb4
	uint32_t MaxTextureMemoryUsedMB; // 0xb8
	uint32_t MaxMemoryUsedMB; // 0xbc
	uint32_t MinMemoryFreeMB; // 0xc0
};

struct FDurableEntitlementId {
	FString FirstPartyStoreId; // 0x0
	FString FirstPartyEntitlementId; // 0x10
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FVistaCharacterQualitySettings {
	int32_t MaxAllowedVistaCharacter; // 0x0
};

struct FLocoStanceAnimGraphs {
	UAnimInstance* AdditiveAnimInstance; // 0x0
	UAnimInstance* LocoAnimInstance; // 0x8
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x98
	FSlateBrush MarqueeImage; // 0x128
};

struct FWasRenderedClientInfo {
	float ThresholdTime; // 0x0
	float DistLimit; // 0x10
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
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

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinition TypeDef; // 0x8
};

struct FTitanStage3Phase {
	float TriggerNextPhaseHealthPct; // 0x0
	FTitanStage3TentacleShared TentacleShared; // 0x4
	TArray<FTitanStage3TentacleIndividual> TentacleIndividuals; // 0x18
	float MinTimeBetweenAttacks; // 0x28
	float MaxTimeBetweenAttacks; // 0x2c
	float TailThrashRockFallRange; // 0x30
	float TailThrashRockFallPercentage; // 0x34
	float TailThrashRockFallVariance; // 0x38
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FVectorParameterTuple {
	bool Key; // 0x0
	FName Name; // 0x4
	FLinearColor Value; // 0xc
	FLinearColor BaseValue; // 0x1c
	bool bUsesAlpha; // 0x2c
	int32_t Index; // 0x30
};

struct FProjectileSprayMoveTickData {
	ESprayState CurrentState; // 0x0
};

struct FMovieSceneEvaluationTrackSegments {
	TArray<int32_t> SegmentIdentifierToIndex; // 0x0
	TArray<FMovieSceneSegment> SortedSegments; // 0x10
};

struct FDialogueConversationRow : FTableRowBase {
	FDialogueConversation Conversation; // 0x8
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

struct FAssetLookupNameArray {
	TArray<FName> Default; // 0x0
	TArray<FAssetLookupNameArrayEntry> Lookups; // 0x10
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FCharacterAvoidanceTuning {
	float MaxCharacterAvoidanceAngleThreshold; // 0x0
	bool bCharacterAvoidanceStopsMovement; // 0x4
	float CharacterAvoidanceAngle; // 0x8
	FGameplayTagContainer AvoidanceIgnoreTags; // 0x10
};

struct FAllowedTypes {
	uint32_t AllowedTypes; // 0x0
};

struct FOvercastMemoryData {
	float PhysicalMegabytes; // 0x0
	float VirtualMegabytes; // 0x4
};

struct FHeroDraggedAnimData3P {
	char bIsTurn : 1; // 0x0
	char bIsMove : 1; // 0x0
	char DirectionIdx; // 0x1
	FGameplayTag TurnAnimationTag; // 0x4
	float Speed2D; // 0xc
	float YawCounterRotation; // 0x10
};

struct FMovePathRequestData {
	FAIMoveRequest MoveRequest; // 0x0
};

struct FCustomDataProvider {
	ECustomDataApplicationType ApplicationType; // 0x0
};

struct FDialogueEval_CompareLastSpeaker : FDialogueEval {
	bool CompareCurrentSpeaker; // 0x48
	FDataTableRowHandle VoiceRowHandle; // 0x50
};

struct FDialogueRecordDebugInfo {
	FName EventName; // 0x0
	FName SpeakerName; // 0x8
};

struct FOvercastCPUAccu {
	float MainThreadMilliseconds; // 0x0
	float NumFrames; // 0x4
	float MainThreadMillisecondsSumSq; // 0x8
};

struct FNanopatchCVar {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
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

struct FMatchmakingUserDataTaskData {
	FString SessionId; // 0x0
	FString JsonString; // 0x10
	int32_t ControllerId; // 0x20
};

struct FUsableSuccessfulUsePayload {
	AActor* UsingActor; // 0x0
	UHeroUseComponent* UsingComponent; // 0x8
	UUsableComponent* UsedComponent; // 0x10
	bool bQuickUse; // 0x18
	bool bExecuteHeldBehavior; // 0x19
};

struct FWaterRipplerProxy {
	UWaterRipplerDef* RipplerDefinition; // 0x0
	FVector Location; // 0x8
	FWaterRipplerRuntime RuntimeData; // 0x18
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

struct FWebServiceSessionCreateParticipant {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
	FString UserData; // 0x18
	FString SplitscreenHostId; // 0x28
	int32_t SplitscreenHostNonce; // 0x38
	FString Token; // 0x40
};

struct FChargeTuning : FTuningDataBase {
	float MaxSpeed; // 0x8
	float RampUpTime; // 0xc
	float ChargeRecoverSecs; // 0x10
	float MinStartChargeSecs; // 0x14
	float ChargeRecoverDelay; // 0x18
	float MaxChargeSecs; // 0x1c
	float MinChargeHitTime; // 0x20
	float MinChargeVelocityToHit; // 0x24
	float AIMinChargeDistance; // 0x28
	FVector2D AIMaxTurnAngleRange; // 0x2c
	float MinTimeBeforeCanRecharge; // 0x34
	float DecelerationStopSpeed; // 0x38
	float MinVelocityThreshold; // 0x3c
	float MaxNoChargeVelocityTime; // 0x40
	float ChargeFrontImpactAngle; // 0x44
	float ImpactDeflectAngleThreshold; // 0x48
	float MaxImpactDeflectAmount; // 0x4c
	FVector2D ImpactExplosionAngles; // 0x50
	float MinSpeedToPlayDeccelerateMontage; // 0x58
	float MinTimeBetweenImpactExplosions; // 0x5c
	float ClampLookHorzRotationRate; // 0x60
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FWebSocketSessionSendMessage_SetUserData {
	FString UserData; // 0x0
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x48
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FProductRow : FTableRowBase {
	FDataTableRowHandle Unlock; // 0x8
	int32_t Price; // 0x28
	FDataTableRowHandle Rarity; // 0x30
	FGameplayTagContainer CaravanTags; // 0x50
	bool bSecure; // 0x70
	EProductType ProductType; // 0x71
	UAkAudioEvent* PurchaseSound; // 0x78
	UTexture2D* Icon; // 0x80
	bool bHiddenIfLocked; // 0x88
};

struct FCameraViewModifier {
	float ActiveFOV; // 0x0
	UCurveFloat* BlendCurve; // 0x8
	float AlphaInTimeOverride; // 0x10
	float AlphaOutTimeOverride; // 0x14
	float RotationLagSpeed; // 0x18
	bool bApplySocketOffset; // 0x1c
	FVector SocketOffset; // 0x20
	bool bApplyTargetOffset; // 0x2c
	FVector TargetOffset; // 0x30
	bool bApplyTargetArmLength; // 0x3c
	float TargetArmLength; // 0x40
};

struct FImpactEmitterSet {
	TArray<FName> SpawnFilters; // 0x0
	float EmitterSpawnChancePercent; // 0x10
	EImpactAlignment Alignment; // 0x14
	TArray<FImpactEmitterDefinition> Emitters; // 0x18
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x30
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FRemoveDeckCommand : FPlayerProfileCommand {
	int32_t DeckId; // 0x8
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Translation[0x2]; // 0x48
	FMovieSceneFloatChannel Rotation; // 0x188
	FMovieSceneFloatChannel Scale[0x2]; // 0x228
	FMovieSceneFloatChannel Shear[0x2]; // 0x368
	EMovieSceneBlendType BlendType; // 0x4a8
	FMovieScene2DTransformMask Mask; // 0x4ac
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

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FAssetLookupAkAudioEventArray {
	TArray<UAkAudioEvent*> Default; // 0x0
	TArray<FAssetLookupAkAudioEventArrayEntry> Lookups; // 0x10
};

struct FGameplayEval_HasSelectedItem : FGameplayEval {
	FGameplayTagQuery SelectedItemTag; // 0x48
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FFireModeBaseTuning {
	float DelayBeforeInitialShot; // 0x0
	float DelayBetweenShots; // 0x4
	float DelayBetweenBursts; // 0x8
	float DelayAfterFinalShot; // 0xc
	float RechamberLength; // 0x10
	float RechamberAnimationLength; // 0x14
	float SemiAutoAsFullAutoDelayScale; // 0x18
	float AlertRadius; // 0x1c
	float WhizbyAlertRadius; // 0x20
	float ImpactAlertRadius; // 0x24
	float SprintDisabledSettleTime; // 0x28
	float WeakSpotDamageMultiplier; // 0x2c
	float ImpulseStrength; // 0x30
};

struct FFireModeSingleTraceTuning {
	float StumbleDamagePerDamage; // 0x0
	TArray<FRangedFalloffDamageSet> RangedFalloffDamageSets; // 0x8
};

struct FLocomotionStance {
	FGameplayTag StanceTag; // 0x0
	FLocoStanceAnimGraphs DefaultAnimGraphs; // 0x8
	TArray<FLocoAnimInstanceQuery> OptionalAnimInstances; // 0x18
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FMelee_Tuning_Struct {
	FTraceMeleeTuning TraceMelee_30_F415F8754C89D8B245443DA492E3C17B; // 0x0
	FWeaponMoveSpeedTuning WeaponMoveSpeed_33_C126F0B843EDEA5D993AEA8811E5D475; // 0xa0
	FItemCycleTuning ItemCycle_36_9FDF7110482CA08CF8496AA235EAC1D4; // 0x10c
	FItemAnimationDataTuning ItemAnimationData_39_8BB360E04DA7D882D32C849BEC2CAD47; // 0x120
};

struct FGameplayEval_IsAvatarFacing : FGameplayEval {
	float MaxAngleFromIdealAngle; // 0x48
	EAngleAxis TestMode; // 0x4c
	UAnimContext_Transform* FacingTarget; // 0x50
};

struct FCommon_Tuning_Struct {
	FHealthTuning Health_40_326D8D904132E1C79DE260BC9F31E291; // 0x0
	FWeakSpotsTuning WeakSpots_37_8BA8D85A4EF0704D61CB2F96D4B2FE20; // 0x148
	float DeathReactionDamage_Light_44_9EF196CF42B207B0117D88A0CCD1D243; // 0x170
	float DeathReactionDamage_Heavy_47_451986E7450062AA0D4132AE7E6EECC7; // 0x174
	float Melee_MaxDistOffset_20_4088219F44AE5359C89A3CA00B5E0760; // 0x178
	float MeleeRadiusCheck_27_0E50589841F959FF1816F596EAEA95AB; // 0x17c
	float MeleeRadiusCheck_Ground_26_C00C3C5E4B31915BB28915AD3E1C3172; // 0x180
	float MeleeRadiusCheck_High_29_B9533B1547EFEA6EC5D481A5D0354647; // 0x184
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FWeaponSimulatedQualitySettings {
	float MaxSimulatedShotsPerSecond; // 0x0
	int32_t MaxSimulatedShotgunPellets; // 0x4
	int32_t MaxSimulatedPenetrations; // 0x8
};

struct FClearAfterHordeConfig {
	UEnvQuery* ClearAfterHordeEQS; // 0x0
	float ClearDistance; // 0x8
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FAssetLookupCurveFloatEntry {
	FGameplayTag Tag; // 0x0
	UCurveFloat* CurveFloat; // 0x8
};

struct FLocoAnimGraphSet {
	FGameplayTag AnimGraphTag; // 0x0
	TArray<FLocoVariation> LocoVariations; // 0x8
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

struct FChargeMoveTickData {
	EChargeState CurrentState; // 0x0
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FAchievementUIData {
	FText Name; // 0x0
	FText Description; // 0x18
	UTexture2D* Icon; // 0x30
	EAchievementCategory Category; // 0x38
	float ProgressNormal; // 0x3c
	int32_t CurrentProgress; // 0x40
	int32_t FinalProgress; // 0x44
	FString CompletionDate; // 0x48
	TArray<FDataTableRowHandle> RewardRowHandles; // 0x58
	FText RewardString; // 0x68
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
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

struct FMatchmakingUIAtuinEnvironment {
	FString Name; // 0x0
	FString DisplayName; // 0x10
};

struct FPerThreatCatchUpBonus {
	TArray<FCardAndQuantity> StaticBonusCards; // 0x0
	int32_t BonusCardDraws; // 0x10
	int32_t BonusLoadoutCards; // 0x14
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	bool bInvertX; // 0x42
	bool bInvertY; // 0x43
	bool bInvertZ; // 0x44
	float StartPosition; // 0x48
	UBlendSpaceBase* BlendSpace; // 0x50
	UBlendSpaceBase* PreviousBlendSpace; // 0xe0
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
};

struct FWebServiceAuthData {
	FString AgoraAccessToken; // 0x0
	int32_t Nonce; // 0x10
	FString GameId; // 0x18
	FString BuildId; // 0x28
	FString Environment; // 0x38
	int64_t Timestamp; // 0x48
};

struct FWeakSpotsTuning : FTuningDataBase {
	TArray<FWeakSpotAttachmentTuning> WeakSpotAttachmentTuningArray; // 0x8
	TArray<FWeakSpotSurfaceTuning> WeakSpotSurfaceTuningArray; // 0x18
};

struct FAdjustConsumableQuantityCommand : FPlayerProfileCommand {
	FDataTableRowHandle Product; // 0x8
	int32_t Delta; // 0x28
};

struct FParticleQualitySettings {
	float SpawnCullScreenSize; // 0x0
	FBehindCameraQuality BehindCameraFilter; // 0x4
	bool bImpactSequenceCanCull; // 0xc
	TArray<EImpactNewQuality> ImpactSequenceNewQualities; // 0x10
	bool bNonLocalReducesQuality; // 0x20
	EImpactNewQuality NonLocalNewQuality; // 0x21
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FDifficultyInt : FDifficultyValue {
	int32_t Easy; // 0x0
	int32_t Normal; // 0x4
	int32_t Hard; // 0x8
	int32_t Legendary; // 0xc
	int32_t PVP; // 0x10
};

struct FLootUpgradeConfig {
	FGameplayTagContainer UpgradeTags; // 0x0
	FGameplayTagQuery ItemQuery; // 0x20
	FGameplayTagQuery SpawnerQuery; // 0x68
};

struct FItemObservableState {
	AActor* TargetPlayer; // 0x0
	UHeroUseComponent* HeroUseComponent; // 0x8
	UItemPickupToolTipUserWidget* Widget; // 0x10
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FNPCMissionDataRow : FTableRowBase {
	FDataTableRowHandle MissionHandle; // 0x8
	bool bAllSurvivorsStartMission; // 0x28
	bool bEvenIfPreviouslyCompleted; // 0x29
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

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FDistanceRange {
	FString DistanceLabel; // 0x0
	float DistanceMin; // 0x10
	float DistanceMax; // 0x14
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
};

struct FGameplayEval_FixedScore : FGameplayEval {
	float FixedScore; // 0x48
};

struct FGobiSessionPendingParticipant {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
};

struct FBadgeBannerRow : FTableRowBase {
	FText Name; // 0x8
	UTexture2D* Banner; // 0x20
};

struct FPounceAOE {
	UGobiDamageType* DamageType; // 0x0
	TArray<UGameplayEffect*> Effects; // 0x8
	FVector2D Radius; // 0x18
	float MaxLeapDistance; // 0x20
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2
	char Value; // 0x3
};

struct FStepOnActorConfig {
	AActor* StepOnActorSubclass; // 0x0
	TArray<UGameplayEffect*> StepOnGEs; // 0x8
};

struct FBotConfigShared : FTableRowBase {
	FBotItemUpgradeConfig ItemUpgradeCfg; // 0x8
	FBotGameplayCardsConfig GameplayCardsCfg; // 0x48
};

struct FBotCombatTeammateAwarenessInfo {
	bool bTeammateTargetAwareness; // 0x0
	bool bTeammateSpecialTargetAwareness; // 0x1
	float TeammateIncappedReactTime; // 0x4
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FAudioScreenEffect_Struct {
	UAkAudioEvent* Ak_ScreenEffectStart_3_C0B11CE444190E228DC409ABDD72B3D0; // 0x0
	UAkAudioEvent* Ak_ScreenEffectLoop_11_21BE4C8444EE34297C446A911B8018FB; // 0x8
	UAkAudioEvent* Ak_ScreenEffectStop_6_92115F3D4D8F2514C8613599446461D2; // 0x10
	FName StateGroup_13_B4100124454369286AC48DA432A1C111; // 0x18
	FName StateOn_15_E106CDF743C130B6765761A34D3387C5; // 0x20
	FName StateOff_17_501033374D4F3CBC3C377D9034AD21DB; // 0x28
};

struct FMatchmakingPool {
	FString SessionId; // 0x0
	FString GameSessionId; // 0x10
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
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

struct FAddSessionToPoolFilteredNoParticipantData {
	FString GameMode; // 0x0
	bool IsPrivate; // 0x10
	TArray<FPoolFilterData> Filters; // 0x18
	FString Maps; // 0x28
	FString Difficulties; // 0x38
	FString Bucket; // 0x48
	int32_t RunID; // 0x58
	FString RunOwner; // 0x60
	FString VoicePreference; // 0x70
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

struct FBotPlaystyleModeConfig {
	EBotType BotType; // 0x0
	FBotBehaviorConfig BehaviorConfig; // 0x8
	FBotAwarenessConfig AwarenessConfig; // 0x30
	FBotInventoryConfig InventoryConfig; // 0x318
	FBotInventoryConfig PlayerInventoryConfig; // 0x478
	FBotTetherConfig TetherConfig; // 0x5d8
	FBotCombatConfig CombatConfig; // 0x628
	TArray<UGameplayEffect*> InitAppliedEffects; // 0x7a8
	UGameplayEvaluatorSet* FilterSet; // 0x7b8
};

struct FAnimSequencePlayRate {
	UAnimSequence* AnimSequence; // 0x0
	float PlayRate; // 0x8
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
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

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FCompleteAchievementCommand : FPlayerProfileCommand {
	FName AchievementCompletedStatKey; // 0x8
	TArray<FDataTableRowHandle> Unlocks; // 0x10
	int32_t SupplyPoints; // 0x20
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x28
};

struct FScenarioEval_HeroPathDistance : FScenarioEval {
	float MaxRange; // 0x40
	bool bAllHerosRequired; // 0x44
	int32_t DesiredHeroCount; // 0x48
	ECompareOp Op; // 0x4c
	FNavAgentSelector NavMeshSelector; // 0x50
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FLOSData {
	AActor* LOSOwner; // 0x0
};

struct FPlayerLeapTuning {
	float ArcParam; // 0x0
	float ArcDegrees; // 0x4
	float MaxAimUpAngle; // 0x8
	float MaxLeapDistance; // 0xc
	float ClampLookHorzRotationRate; // 0x10
};

struct FPlayerProfileData {
	FSupplyPoints SupplyPoints; // 0x0
	TArray<FGameplayCardDeck> Decks; // 0x10
	TArray<FDataTableRowHandle> RecentCharacters; // 0x20
	TSet<FDataTableRowHandle> Unlocks; // 0x30
	TMap<FDataTableRowHandle, FPlayerProfileConsumableQuantity> Consumables; // 0x80
	TMap<EPlayerProfileStat, FPlayerStatContainer> Stats; // 0xd0
	TMap<FName, uint32_t> StartingLocations; // 0x120
	TMap<int32_t, FPlayerProfileCampaignRun> CampaignRuns; // 0x170
	TMap<int32_t, FPlayerProfileCampaignRun> TrainingRuns; // 0x1c0
	TArray<FCaravanInstance> Caravans; // 0x210
	FBadgeData BadgeData; // 0x220
	FSprayData SprayData; // 0x22c
	TMap<FString, FDataTableRowHandle> AppliedWeaponSkins; // 0x240
	TMap<FDataTableRowHandle, FCharacterCustomizationSet> EquippedCharacterCustomizationSets; // 0x290
	FPlayerProfileReconciliationTimestamps ReconciliationTimestamps; // 0x2e0
	FString DeviceType; // 0x308
	FPlayerProfilePendingDeletions PendingDeletions; // 0x318
};

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FVistaCharacterSettings {
	EPerfScalingMethod QualityScaling; // 0x0
	FVistaCharacterQualitySettings QualitySettings[0x5]; // 0x4
};

struct FMastermindMessage {
	EMastermindMessageType Type; // 0x0
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FTU02PlayerProfileData {
	int32_t SupplyPoints; // 0x0
	TArray<FGameplayCardDeck> Decks; // 0x8
	TArray<FDataTableRowHandle> RecentCharacters; // 0x18
	TArray<FTU02PlayerProfileOwnable> Ownables; // 0x28
	TMap<EPlayerProfileStat, FPlayerStatContainer> Stats; // 0x38
	TMap<FName, uint32_t> StartingLocations; // 0x88
	TMap<int32_t, FPlayerProfileCampaignRun> CampaignRuns; // 0xd8
	TArray<FCaravanInstance> Caravans; // 0x128
	FBadgeData BadgeData; // 0x138
	FSprayData SprayData; // 0x144
	TMap<FString, FDataTableRowHandle> AppliedWeaponSkins; // 0x158
	TMap<FDataTableRowHandle, FCharacterCustomizationSet> EquippedCharacterCustomizationSets; // 0x1a8
	FString DeviceType; // 0x1f8
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

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FGobiGameCoachEval_TraumaKitState : FGobiGameCoachEval {
	int32_t ChargeCount; // 0x48
	ECompareOp CompareOperation; // 0x4c
	bool bCanAffordIt; // 0x4d
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

struct FAgoraHydraLeaderboardServerData {
	FAgoraHydraLeaderboardGameData Game_Data; // 0x0
};

struct FWeaponAttachmentMeshConfig {
	FGameplayTag CorrespondingAttachment; // 0x0
	TArray<FName> FirstPersonBonesToHide; // 0x8
	TArray<FName> FirstPersonBonesToUnhide; // 0x18
	TArray<FAttachmentMeshSpecifier> FirstPersonMeshSpecifiers; // 0x28
	TArray<FAttachmentMeshSpecifier> ThirdPersonMeshSpecifiers; // 0x38
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

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FSlotIndex {
	int32_t SlotId; // 0x0
	EMatchmakingTeam Team; // 0x4
};

struct FBotGameplayCardsConfig {
	TArray<FBotGameplayCardsLoadout> Loadouts; // 0x0
	bool bUseFixedLoadouts; // 0x10
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	FGameplayTag InstanceTag; // 0x88
	char bReceiveNotifiesFromLinkedInstances : 1; // 0xa0
	char bPropagateNotifiesToLinkedInstances : 1; // 0xa0
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FImpactQualitySettings {
	int32_t NonLocalPenetrationsAllowed; // 0x0
	bool bNonLocalPenetrationsCullGore; // 0x4
	FBehindCameraQuality BehindCameraFilter; // 0x8
	int32_t DeferredConfigMax; // 0x10
	int32_t DeferredConfigAudioMax; // 0x14
	bool bDeferredConfigMaxIsPerMaterial; // 0x18
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FHydraAccountChatMessage {
	EHydraAccountChatMessage Type; // 0x10
	FString Data; // 0x18
};

struct FBotPingSystem {
	ABotController* OwnerBotCtrl; // 0x0
};

struct FScenarioHeroEval_HeroInVolume : FScenarioHeroEvaluator {
	FGameplayTag VolumeTag; // 0x40
	TArray<ATriggerVolume*> TriggerVolumes; // 0x48
	bool bHeroMustBeInVolume; // 0x68
};

struct FTagLocator {
	FGameplayTag LocatorTag; // 0x0
	FTransform LocatorTransform; // 0x10
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FMatchmakingMatchFoundData {
	int32_t MatchmakingSequenceId; // 0x0
	FString GameSessionId; // 0x8
	FString SessionCluster; // 0x18
	bool IsTargetedBackfill; // 0x28
	FString MatchmakerInstanceId; // 0x30
	int32_t MatchmakerTickNumber; // 0x40
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FCinematicDefinitionRow : FTableRowBase {
	FString DeveloperComments; // 0x8
	UFileMediaSource* MediaSource; // 0x18
	float Duration; // 0x20
	UDataTable* SubtitileTimingTable; // 0x28
	AudioSinkChannelConfigurations ChannelConfiguration; // 0x30
	UAkAudioEvent* WwiseStartPollingEvent; // 0x38
	UAkAudioEvent* WwiseStopPollingEvent; // 0x40
	TArray<FSoftObjectPath> LevelsToUnload; // 0x48
	bool bFlushLevelStreamingBeforeStart; // 0x58
	bool bRunGCBeforeStart; // 0x59
	bool bNeedsLoadingSpinner; // 0x5a
};

struct FOvercastPlatformPlayersData {
	int32_t Players; // 0x0
	int32_t Expected; // 0x4
};

struct FWebServiceSetSessionData {
	FString SessionData; // 0x0
};

struct FAnimNode_SlopeWarping : FAnimNode_SkeletalControlBase {
	FBoneReference IKFootRootBone; // 0xc8
	EAxisOption IKFootRootForwardAxis; // 0xd8
	FBoneReference PelvisBone; // 0xdc
	float PelvisOffsetScale; // 0xec
	TArray<FFootDefinition> FeetDefinitions; // 0xf0
	FVector2D SlopeWarpingLimits; // 0x100
};

struct FGobiCountAnim : FGobiEasingAnim {
	bool bConstantRate; // 0x20
};

struct FTitanTentacleAnimInfo {
	bool bIdle; // 0x0
	bool bSmashTell; // 0x1
	float SmashTellPlayRate; // 0x4
	bool bSmashAttack; // 0x8
	float SmashAttackPlayRate; // 0xc
	bool bSwipeTell; // 0x10
	float SwipeTellPlayRate; // 0x14
	bool bSwipeAttack; // 0x18
	float SwipeAttackPlayRate; // 0x1c
	float TellAngle; // 0x20
	float AttackAngle; // 0x24
	UBlendSpace1D* SmashTellBlendSpace; // 0x28
	UBlendSpace1D* SmashAttackBlendSpace; // 0x30
	UAnimSequence* SwipeTellAnimSequence; // 0x38
	UAnimSequence* SwipeAttackAnimSequence; // 0x40
};

struct FMutilationWoundsConfig {
	FGameplayTag Tag; // 0x0
	TArray<FWoundData> Wounds; // 0x8
};

struct FStaticCaravan {
	FDataTableRowHandle Merchant; // 0x0
	TArray<FDataTableRowHandle> Items; // 0x20
};

struct FProjectileThrowTuning : FTuningDataBase {
	float MinCookTime; // 0x8
	float GravityScale; // 0xc
	float DefaultProjectileSpeed; // 0x10
	float Cooldown; // 0x14
	float MissCooldown; // 0x18
	float InterruptCooldown; // 0x1c
	FVector SpreadZone; // 0x20
	FProjectileThrowChargeData ChargeData; // 0x30
};

struct FGameplayEval_DamageBone : FGameplayEval {
	FName HitBoneBelow; // 0x48
	bool bIncludeBonesBelow; // 0x50
	UAnimContext_DamageInfo* DamageInfo; // 0x58
};

struct FPerkDetailEntry {
	FDataTableRowHandle RowHandle; // 0x0
	int32_t Count; // 0x20
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FOvercastNetworkData {
	float InRateClientAvg; // 0x0
	float OutRateClientAvg; // 0x4
	float InRate; // 0x8
	float OutRate; // 0xc
};

struct FGameplayAnalyticsRoundData {
	FGuid RoundId; // 0x0
	FGuid MatchID; // 0x10
	FString AnalyticsContext; // 0x20
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
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

struct FAISpawnEval_Cooldown : FAISpawnEval {
	FGameplayTagContainer ScenarioCardEvalTags; // 0x40
	float CooldownTime; // 0x60
	float CooldownTimeVariance; // 0x64
	ECooldownContext CooldownContext; // 0x68
};

struct FGameplayEval_ReviveSource : FGameplayEval {
	FGameplayTag ReviveSourceTag; // 0x48
};

struct FMovementForcePhysConfig {
	float ExitSpeed; // 0x0
	float Deceleration; // 0x4
	bool bExitOnDurationElapsed; // 0x8
};

struct FApplyStatDeltasPayloadDto {
	TArray<FString> NewStatKeys; // 0x0
	TArray<FStatDeltaDto> StatDeltas; // 0x10
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3f0
	FSlateSound SelectionChangeSlateSound; // 0x408
};

struct FSpeakerRuntimeData {
	FDataTableRowHandle SpeakerRow; // 0x0
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48
	int32_t NumChannelsUsed; // 0x2c8
	EMovieSceneBlendType BlendType; // 0x2cc
};

struct FWebSocketSessionSendMessage_MMJoin {
	int32_t MatchmakingSequenceId; // 0x0
	FString GameMode; // 0x8
	bool IsPrivate; // 0x18
	bool CrossPlayEnabled; // 0x19
	TArray<FPoolFilterData> Filters; // 0x20
	TArray<FWebSocketSessionSendMessage_ParticipantTeamSelection> TeamSelections; // 0x30
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

struct FAssetLookupAkAudioEventEntry {
	FGameplayTag Tag; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
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

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x48
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
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

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
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

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FHitInfo {
	FVector HitLoc; // 0x0
	FVector HitDir; // 0xc
	FTransform MeshTrans; // 0x20
};

struct FGameplayEval_VelocityPitch : FGameplayEval {
	float IdealPitch; // 0x48
	float MaxPitchFromIdealPitch; // 0x4c
};

struct FGameplayEval_HasContext : FGameplayEval {
	UGameplayContext* ContextToCheck; // 0x48
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FParticleEffectTraitDef {
	FGameplayTag ComponentTag; // 0x0
	FName BoneName; // 0x8
	UParticleSystem* ParticleEffect; // 0x10
};

struct FSharedSoundQualitySettings {
	int32_t MaxNumSharedSoundPerFrame; // 0x0
	int32_t MaxNumVocalizationsPerFrame; // 0x4
	int32_t MaxNumFootstepsPerFrame; // 0x8
	int32_t MaxNumMeleeSoundsPerFrame; // 0xc
	int32_t MaxNumMeleeComponentsToSpawnPerFrame; // 0x10
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
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

struct FEdGraphSchemaAction {
	FText MenuDescription; // 0x8
	FText TooltipDescription; // 0x20
	FText Category; // 0x38
	FText Keywords; // 0x50
	int32_t Grouping; // 0x68
	int32_t SectionId; // 0x6c
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

struct FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FAgoraHydraScoreAndRank {
	FString Member; // 0x0
	int32_t Score; // 0x10
	int32_t Rank; // 0x14
	FAgoraHydraLeaderboardProfile Profile; // 0x18
	FAgoraHydraLeaderboardAccount Account; // 0x40
};

struct FTitanSweepForwardAttack {
	float TellSecs; // 0x0
	float AttackSecs; // 0x4
};

struct FAISpawnEval_TimeSinceLastHorde : FAISpawnEval {
	float ThresholdTime; // 0x40
	ECompareOp Op; // 0x44
};

struct FPounceBunnyKick {
	FGameplayTag BunnyKickGrabPrimitiveComponentTag; // 0x0
	FName BunnyKickGrabBone; // 0x8
	FVector BunnyKickGrabOffset; // 0x10
	FRotator BunnyKickGrabRelativeRotation; // 0x1c
	FRotator BunnyKickMindControlAttachRelativeRotation; // 0x28
	bool bBunnyKickTriggerOnHit; // 0x34
	UEnvQuery* BunnyKickOffEqs; // 0x38
	TArray<UAnimMontage*> BunnyKickOffMontages; // 0x40
	TArray<UGameplayEffect*> ApplyBunnyKickOffEffects; // 0x50
};

struct FUIRunData {
	int32_t RunID; // 0x0
	EMissionDifficulty Difficulty; // 0x4
	FName MapName; // 0x8
	int32_t Retries; // 0x10
	FText SaveDate; // 0x18
	FText SaveTime; // 0x30
	ECampaignRunState State; // 0x48
	int32_t Version; // 0x4c
	bool bIsValid; // 0x50
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

struct FGamepadInputSettings {
	float LookRate; // 0x0
	float ExtraSensitivityDeflectionThreshold; // 0x4
	float ExtraSensitivityActivationDelay; // 0x8
	float ExtraSensitivityBlendInTime; // 0xc
	float ExtraSensitivityBlendOutTime; // 0x10
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FLootSystemConfig {
	ULootSpawnConfigAsset* LootConfig; // 0x0
	ULootSpawnConfigAsset* LootConfigPVPClassic; // 0x8
	ULootSpawnConfigAsset* LootConfigPVPHoldout; // 0x10
	ULootSpawnConfigAsset* TradeShowLootConfig; // 0x18
	ULootSpawnConfigAsset* TradeShowLootConfigPVPClassic; // 0x20
	ULootSpawnConfigAsset* TradeShowLootConfigPVPHoldout; // 0x28
	FGamePropertyFloat TreasureRoomsMin; // 0x30
	FGamePropertyFloat TreasureRoomsMax; // 0x68
};

struct FAgoraHydraAccessResponseData {
	FString Token; // 0x0
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

struct FLocoVariationConfig {
	ELocoChooseMode ChooseMode; // 0x0
	TArray<FLocoAnimGraphSet> AnimGraphSets; // 0x8
};

struct FUsableInventoryCondition : FUsableCondition {
	FDataTableRowHandle RequiredInventoryItem; // 0x28
	int32_t RequiredItemCount; // 0x48
	bool bConsumeRequiredItemsOnSuccess; // 0x4c
	int32_t NumItemsToConsumeOnSuccess; // 0x50
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

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FLootCategoryInfo {
	TArray<FSpawnCountRange> SpawnRanges; // 0x0
	FSpawnCountRange BaseRange; // 0x10
	int32_t BasePool; // 0x18
	int32_t ModPool; // 0x1c
	int32_t TotalPool; // 0x20
	int32_t TotalSpawned; // 0x24
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FStartingStateAndParams {
	TMap<FName, FName> StartingStates; // 0x0
	TMap<FString, float> StartingRTPCs; // 0x50
	TArray<UAkAudioEvent*> StartingAudioEvents; // 0xa0
};

struct FActiveGameplayCard {
	FDataTableRowHandle CardRowHandle; // 0x0
	int32_t RandomSeed; // 0x20
	bool bSuppressNotification; // 0x24
	bool bIgnoreRandomChance; // 0x25
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FDrenchMaterialParamOverride {
	bool bDrenchMask; // 0x0
	bool bDrenchMaskScale; // 0x1
	UTexture* DrenchMask; // 0x8
	float DrenchMaskScale; // 0x10
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FAIDataProviderUObjectValue : FAIDataProviderTypedValue {
	UObject* DefaultValue; // 0x30
};

struct FQueuedEventDebugInfo {
	FName EventName; // 0x0
	int32_t Priority; // 0x8
	float RelevancyFalloffTime; // 0xc
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

struct FAISpawnEval_PacingPhase : FAISpawnEval {
	char RequiredPacing; // 0x40
	ECompareOp Op; // 0x41
};

struct FAudioDamageTypeEvent {
	FGameplayTagContainer TagContainer; // 0x0
	TMap<UAkAudioEvent*, int8_t> WeightedAudioEvents; // 0x20
	int8_t TotalWeightAudioEvents; // 0x70
	bool bTryAllAudioEvents; // 0x71
	float Cooldown; // 0x74
	TMap<UAkAudioEvent*, int8_t> WeightedAudioEventsIfOnCooldown; // 0x80
	int8_t TotalWeightAudioEventsIfOnCooldown; // 0xd0
	bool bTryAllAudioEventsIfOnCooldown; // 0xd1
	bool bPlayOnAttacker; // 0xd2
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FAnimNode_OrientationWarping : FAnimNode_Base {
	FPoseLink Source; // 0x10
	float RelativeMovementAngle; // 0x20
	bool bNegateRelativeMovementAngle; // 0x24
	float AdditionalRootRotation; // 0x28
	float BodyOrientationAlpha; // 0x2c
	TArray<FBoneReference> SpineBones; // 0x30
	FBoneReference IKFootRootBone; // 0x40
	TArray<FBoneReference> IKFootBones; // 0x50
	FRotator MeshToComponent; // 0x60
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
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

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FGameplayEval_Angle : FGameplayEval {
	float IdealAngle; // 0x48
	float MaxAngleFromIdealAngle; // 0x4c
	EAngleAxis TestMode; // 0x50
	UAnimContext_Rotation* Rotation; // 0x58
};

struct FHighlightPalette {
	TMap<EHighlightSwatch, FLinearColor> Palette; // 0x0
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FNetGameplayEffect : FFastArraySerializerItem {
	UGameplayEffect* Effect; // 0x10
	UGameplayEffect* EffectClass; // 0x18
	FGameplayEffectContext EffectContext; // 0x28
	AActor* TargetActor; // 0xa8
};

struct FWeakspotAimAssistData {
	FName SocketName; // 0x0
	FGameplayTag AimAssistTag; // 0x8
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FDeepLinkButton {
	FText ButtonText; // 0x0
	TSoftClassPtr<UObject> LinkedScreen; // 0x18
	FString LinkedURL; // 0x40
	FDataTableRowHandle DurableEntitlement; // 0x50
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

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FURLOption {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FLightmassQualitySettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	int32_t NumSkyLightingBounces; // 0x8
	float IndirectLightingQuality; // 0xc
	float IndirectLightingSmoothness; // 0x10
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FTU02PlayerProfileOwnable {
	FDataTableRowHandle Product; // 0x0
	int32_t Quantity; // 0x20
};

struct FAngleRange {
	FString AngleLabel; // 0x0
	float AngleMin; // 0x10
	float AngleMax; // 0x14
};

struct FWeaponRecoilEntry {
	FVector2D YawStrengthMinMax; // 0x0
	FVector2D PitchStrengthMinMax; // 0x8
	FVector2D RollStrengthMinMax; // 0x10
	float MinRequiredYawRecoil; // 0x18
	float MinRequiredPitchRecoil; // 0x1c
	float MinRequiredRollRecoil; // 0x20
	int32_t NextEntryIndex; // 0x24
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
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

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x30
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FSegmentedReloadTuning {
	float ReloadEnterLength; // 0x0
	float ReloadAddTime; // 0x4
	float ReloadLoopLength; // 0x8
	float ReloadExitLength; // 0xc
	float ReloadExitAnimationLength; // 0x10
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FWebServiceSetUserData {
	FString UserData; // 0x0
};

struct FQueuedEffect {
	UGameplayEffect* EffectClass; // 0x0
	FGameplayEffectContext EffectContext; // 0x8
};

struct FUpdateDeckCommand : FPlayerProfileCommand {
	int32_t DeckId; // 0x8
	FString DeckName; // 0x10
	TArray<FDataTableRowHandle> Cards; // 0x20
	int32_t Version; // 0x30
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

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
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

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
};

struct FCharacterImpactTableConfig {
	UImpactEffectConfig* ImpactTable; // 0x0
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
	UWorld* RestrictToWorld; // 0x30
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
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

struct FAppContextOuter {
	FAppContext AppContext; // 0x0
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

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FBotPingTypeInfo {
	bool bListenToBots; // 0x0
	bool bListenToBotsIfNoPlayers; // 0x1
	bool bListenToPlayers; // 0x2
	bool bListenOnlyToPrimaryTeammate; // 0x3
	bool bPingsOut; // 0x4
	bool bPingOutSaferoomNotAllowed; // 0x5
	float PingLocConstraintDist; // 0x8
	int32_t PingOutCntLimit; // 0x10
	float PingTypeOutCooldown; // 0x14
};

struct FUICustomizationData {
	FName RowName; // 0x0
	FCharacterCustomizationRow Row; // 0x8
	bool bIsLocked; // 0x1e8
};

struct FGameCoachLessonSettings {
	FString Name; // 0x0
	int32_t VisibleCount; // 0x10
	int32_t SuccessCount; // 0x14
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FMeleeImpactVolumeTuning {
	float Radius; // 0x0
	float HalfHeight; // 0x4
	float CapsuleOffset; // 0x8
};

struct FAISenseModInfo {
	UAISense* SenseClass; // 0x0
	float ModAdjustment; // 0x8
};

struct FSlateFontInfo {
	FName GlobalStyleFontName; // 0x0
	UObject* FontObject; // 0x8
	UObject* FontMaterial; // 0x10
	FFontOutlineSettings OutlineSettings; // 0x18
	FName TypefaceFontName; // 0x48
	int32_t Size; // 0x50
};

struct FPerkItemRow : FItemRow {
	EPerkCategory PerkCategory; // 0x2c8
	EBuffType BuffType; // 0x2c9
	TArray<UGameplayEffect*> PerkAppliedEffects; // 0x2d0
	FDataTableRowHandle CorrespondingBuffDebuff; // 0x2e0
};

struct FAssetLookupMontageArray {
	TArray<UAnimMontage*> Default; // 0x0
	TArray<FAssetLookupMontageArrayEntry> Lookups; // 0x10
};

struct FTemporaryHealthParams {
	bool bClampTempHealthToMaxHealth; // 0x0
	float TempHealthDecay; // 0x4
	float TempHealthDecayFrequency; // 0x8
	float MaxTempHealth; // 0xc
	UGobiDamageType* DamageType; // 0x10
};

struct FMessageResponse {
	FString Version; // 0x0
	FMessageSet motd; // 0x10
};

struct FWeaponSoundCollectionRow : FTableRowBase {
	UAkAudioEvent* AKEBoltBack; // 0x8
	UAkAudioEvent* AKEBoltForward; // 0x10
	UAkAudioEvent* AKEBoltRelease; // 0x18
	UAkAudioEvent* AKEMagIn; // 0x20
	UAkAudioEvent* AKEMagOut; // 0x28
	UAkAudioEvent* AKEMovement; // 0x30
};

struct FTraceMeleeAttack {
	UAnimMontage* FirstPersonAttack; // 0x0
	UAnimMontage* FirstPersonImpact; // 0x8
	UAnimMontage* ThirdPersonAttack; // 0x10
	UMontageSet* ThirdPersonAttackSet; // 0x18
	UAnimMontage* ThirdPersonImpact; // 0x20
	UMontageSet* ThirdPersonImpactSet; // 0x28
	int32_t NextAttackIndex; // 0x30
	float AttackDirectionPitch; // 0x34
	float AttackDirectionYaw; // 0x38
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
	FSlateBrush LeftShadowBrush; // 0x128
	FSlateBrush RightShadowBrush; // 0x1b8
};

struct FSplineMeshInstanceData : FStaticMeshComponentInstanceData {
	FVector StartPos; // 0x138
	FVector EndPos; // 0x144
	FVector StartTangent; // 0x150
	FVector EndTangent; // 0x15c
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x78
	float PoseWeight; // 0x80
};

struct FDialoguePriorityRow : FTableRowBase {
	FString Comments; // 0x8
};

struct FGameplayEval_IsCrouching : FGameplayEval {
	UAnimContext_Character* Character; // 0x48
};

struct FReplicatedThrowInfo {
	FVector TargetLocation; // 0x0
	bool bUseSuggestedVelocity; // 0xc
	float CookTime; // 0x10
	uint16_t ThrowCount; // 0x14
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FSubtitleWidgetList {
	UGobiUserWidget* SubtitleWidgetBlueprint; // 0x0
	float CooldownTimeRemaining; // 0x8
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FGameplayEval_DamageType : FGameplayEval {
	bool bTestWithQuery; // 0x48
	FGameplayTagContainer DamageTypeTags; // 0x50
	FGameplayTagQuery DamageTypeTagQuery; // 0x70
	UAnimContext_DamageInfo* DamageInfo; // 0xb8
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

struct FStreamingLevelsToConsider {
	TArray<FLevelStreamingWrapper> StreamingLevels; // 0x0
};

struct FFortDediServerData {
	EFortDediStatus Status; // 0x0
	FString SessionId; // 0x8
	FString SessionCluster; // 0x18
	FString Build; // 0x28
	FString GameMode; // 0x38
	TArray<FPoolFilterData> Filters; // 0x48
	bool IsPrivate; // 0x58
};

struct FTeamAdvantageZombieRespawnTimes {
	TArray<float> MinRespawnTimes; // 0x0
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FGameSessionBackfillData {
	FString SessionId; // 0x0
	FString GameMode; // 0x10
};

struct FScenarioEval_HerosInVolume : FScenarioEval {
	FGameplayTag VolumeTag; // 0x40
	TArray<ATriggerVolume*> TriggerVolumes; // 0x48
	bool bAllHerosRequired; // 0x68
	bool bExcludeDeadHeroes; // 0x69
	bool bExcludeBots; // 0x6a
	bool bExcludeIncap; // 0x6b
	bool bExcludeHerosInRescuePod; // 0x6c
	int32_t DesiredHeroCount; // 0x70
	ECompareOp Op; // 0x74
};

struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FServerStatus {
	float AvgFPS; // 0x0
	float WorstFPS; // 0x4
	float MainThreadCPUTime; // 0x8
	float MemPhysicalUsedMB; // 0xc
	float MemVirtualUsedMB; // 0x10
	int32_t NumAICharacters; // 0x14
	int32_t NumLivingAICharacters; // 0x18
	int32_t NumPlayers; // 0x1c
	int32_t NumSpectators; // 0x20
	float InRateClientAvg; // 0x24
	float OutRateClientAvg; // 0x28
};

struct FAR_Tuning_Struct {
	FFireModeBaseTuning FireModeBase_44_68220EBE4CFC59F056648DA4C9A6CFDB; // 0x0
	FFireModeSingleTraceTuning FireModeSingleTrace_38_A8269C094B5739F9F33E60A3D0CD4081; // 0x38
	FSpreadTuning Spread_15_F415F8754C89D8B245443DA492E3C17B; // 0x50
	FClipAmmoTuning ClipAmmo_34_58756FF64ADE64096DBB01BEDEABAEB3; // 0xb0
	FClipReloadTuning ClipReload_3_FD477EAF4A650B258356838D708AAE34; // 0xb4
	FRecoilTuning Recoil_18_165730B741DF2E5C4ED7AA9DDCAF93E4; // 0xc0
	FBulletPenetrationTuning BulletPenetration_31_1F925B5145A1D0C32BC863A7AC9319E2; // 0x200
	FWeaponMoveSpeedTuning WeaponMoveSpeed_21_213B84A543E5E1C4DF48BBBFA5DA2289; // 0x204
	FItemCycleTuning ItemCycle_27_DF9809044F21D22D184C019CA8F9E505; // 0x270
	FADSTuning ADS_41_68B93C784348D505292F21AF9493E76C; // 0x284
	FItemAnimationDataTuning ItemAnimationData_28_8362ACD143435AF565B9C2BB0C148327; // 0x28c
};

struct FBulletPenetrationDefenseDefinition {
	float PenetrationDefense; // 0x0
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FNPCBanterRow : FTableRowBase {
	bool bIsBanterStart; // 0x8
	bool bIsAmbientBark; // 0x9
	bool bAllowEarlyBanterEnd; // 0xa
	float ChanceToEndEarly; // 0xc
	FDataTableRowHandle BanterBeat; // 0x10
	TArray<FDataTableRowHandle> BanterBeatResponses; // 0x30
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FGameplayEval_MantleDepth : FGameplayEval {
	float RequiredDepth; // 0x48
};

struct FDialogueSpeakerRow : FTableRowBase {
	FText DisplayName; // 0x8
	UDialogueEventSet* DialogueEvents; // 0x20
	UDialogueResponseSet* Responses; // 0x28
	UDataTable* VariantTable; // 0x30
	UAkAudioBank* Soundbank; // 0x38
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FBossReqsData {
	float MaxSpottedByEnemyDistance; // 0x0
	float MaxWarningDistance; // 0x4
	FGameplayTagQuery QueryArray; // 0x8
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FFortDediUpdateDataFull {
	EFortDediStatus Status; // 0x0
	FString Bucket; // 0x8
	FFortDediUpdateGameData GameData; // 0x18
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FGameplayEval_HasVisibility : FGameplayEval {
	UAnimContext_Actor* VisibilityTo; // 0x48
	float VisibilityTimeWindow; // 0x50
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FPounceAITuning {
	float PredictiveAimingScalar; // 0x0
};

struct FGamePropertyIntMod {
	EGamePropertyIntModType ModType; // 0x0
	float Value; // 0x4
	float PerStackOffset; // 0x8
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FMeleeAttack {
	TArray<UAnimMontage*> AttackMontages; // 0x0
	TArray<UAnimMontage*> ImpactMontages; // 0x10
};

struct FCapData {
	FSplineMeshElement StartCap; // 0x0
	FSplineMeshElement EndCap; // 0x10
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FCheckBoxStyle : FSlateWidgetStyle {
	ESlateCheckBoxType CheckBoxType; // 0x8
	FSlateBrush UncheckedImage; // 0x10
	FSlateBrush UncheckedHoveredImage; // 0xa0
	FSlateBrush UncheckedPressedImage; // 0x130
	FSlateBrush CheckedImage; // 0x1c0
	FSlateBrush CheckedHoveredImage; // 0x250
	FSlateBrush CheckedPressedImage; // 0x2e0
	FSlateBrush UndeterminedImage; // 0x370
	FSlateBrush UndeterminedHoveredImage; // 0x400
	FSlateBrush UndeterminedPressedImage; // 0x490
	FMargin Padding; // 0x520
	FSlateColor ForegroundColor; // 0x530
	FSlateColor BorderBackgroundColor; // 0x560
	FSlateSound CheckedSlateSound; // 0x590
	FSlateSound UncheckedSlateSound; // 0x5a8
	FSlateSound HoveredSlateSound; // 0x5c0
};

struct FHeavyHeroMeleeAttack : FTraceMeleeAttack {
	UAnimMontage* FirstPersonBuildUp; // 0x48
	UAnimMontage* ThirdPersonBuildUp; // 0x50
	UMontageSet* ThirdPersonBuildUpSet; // 0x58
};

struct FWebServiceSession {
	bool IsGameSession; // 0x0
	TArray<FWebServiceSessionParticipant> Participants; // 0x8
	TArray<FWebServiceSessionPendingParticipant> PendingParticipants; // 0x18
	FString SessionData; // 0x28
	FString SessionId; // 0x38
	FString SessionCluster; // 0x48
	FString SessionHostId; // 0x58
};

struct FWebServiceSessionAddParticipantsData {
	TArray<FWebServiceSessionAddParticipant> Participants; // 0x0
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FZombieMovementForceProperties {
	UCurveFloat* StrengthCurve; // 0x0
};

struct FCommWheelActionPage {
	TArray<FCommWheelAction> Actions; // 0x0
};

struct FNetGameplayEffectArray : FFastArraySerializer {
	TArray<FNetGameplayEffect> Items; // 0x108
};

struct FPooledCameraShakes {
	TArray<UCameraShake*> PooledShakes; // 0x0
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FAudioJostleQualitySettings {
	float MaxExplosionQueryRange; // 0x0
	uint16_t MaxCollisionRequestsPerFrame; // 0x4
	uint16_t MaxExplosionRequestsPerFrame; // 0x6
	uint16_t MaxNumJostlesPerExplosion; // 0x8
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FBotTraversalGroup {
	UGameplayEvaluatorSet* NavFilterSet; // 0x0
	TArray<FBotTraversalDesc> TraversalDesc; // 0x8
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FRecoilPushbackTuning {
	FVector InitialTranslationOffset; // 0x0
	FVector StabilizedTranslationOffset; // 0xc
	float InitialBlendRate; // 0x18
	float StabilizedBlendRate; // 0x1c
	float BlendOffRate; // 0x20
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FPlayerLiveMissionData {
	FSlotIndex SlotIndex; // 0x0
	TArray<FDataTableRowHandle> ActiveMissions; // 0x8
	TArray<FLiveObjective> ActiveObjectives; // 0x18
	TArray<FLiveObjective> CompletedObjectives; // 0x28
	TArray<FLiveObjective> FailedObjectives; // 0x38
};

struct FMOTDHubInfo {
	FText Title; // 0x0
	FText Description; // 0x18
	UTexture2D* Image; // 0x30
	bool bIsStatic; // 0x38
};

struct FRandomItemTableRoll {
	int32_t MinRollsFromTable; // 0x0
	int32_t MaxRollsFromTable; // 0x4
	UDataTable* DataTable; // 0x8
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x2a0
	FMargin Padding; // 0x540
};

struct FInputIcons {
	UTexture2D* PC; // 0x0
	FText PCText; // 0x8
	UTexture2D* Steam; // 0x20
	UTexture2D* Switch; // 0x28
	UTexture2D* XboxOne; // 0x30
	UTexture2D* Xbox360; // 0x38
	UTexture2D* XSX; // 0x40
	UTexture2D* PS4; // 0x48
	UTexture2D* DPX; // 0x50
	bool bForceSingleCharFont; // 0x58
	bool bForceSquareShape; // 0x59
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FHeroMeshDefinition {
	TMap<FName, TSoftObjectPtr<UMaterialInterface>> MaterialSlotOverrides; // 0x0
	TMap<FName, TSoftObjectPtr<UMaterialInterface>> InGameMaterialOverrides; // 0x50
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0xa0
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

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char Block : 1; // 0x0
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FHeroIntensityEventData {
	bool bShowDistance; // 0x0
	float MaxIntensity; // 0x4
	float Scale; // 0x8
	FVector2D FalloffDistance; // 0xc
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
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

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
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

struct FAttachmentDefinition {
	FGameplayTag AttachmentType; // 0x0
	UTraitCollection* DefaultTraitCollection; // 0x8
};

struct FBirdInfo {
	int8_t Site; // 0x0
	int8_t Perch; // 0x1
	uint64_t FlightSeed; // 0x8
	bool bAlive; // 0x10
};

struct FGameplayEval_IsUsingItem : FGameplayEval {
	TArray<FDataTableRowHandle> Item; // 0x48
	bool CheckIfTargetIsSelf; // 0x58
	bool CheckIfTargetIsNotSelf; // 0x59
};

struct FSplineMeshElement {
	UStaticMesh* Mesh; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FDecalCategoryRow : FTableRowBase {
	EDecalPriority Priority; // 0x8
	bool FadeEarlyAllowed; // 0x9
	TArray<int32_t> MaxCountPerQuality; // 0x10
	bool bSkipInsignificantSpawns; // 0x20
	bool bImpactSequenceReducesQuality; // 0x21
	bool bImpactSequenceCanCull; // 0x22
	bool bNonLocalReducesQuality; // 0x23
	bool bNonLocalCanCull; // 0x24
	bool bOverlapLimit; // 0x25
	FBehindCamera BehindCamera; // 0x28
};

struct FGlobalStyleColor {
	TMap<EColorBlindMode, FLinearColor> Colors; // 0x0
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FAITypeCost {
	AGobiCharacter* AIClass; // 0x0
	int32_t Cost; // 0x8
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FAimSensitivitySettings {
	FVector2D GamepadSensitivity; // 0x0
	FVector2D GamepadExtraSensitivity; // 0x8
	float MouseSensitivity; // 0x10
	float LowZoomMouseSensitivityScalar; // 0x14
	float HighZoomMouseSensitivityScalar; // 0x18
	float LowZoomGamepadSensitivityScalar; // 0x1c
	float HighZoomGamepadSensitivityScalar; // 0x20
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FZombieAnimState {
	bool bIsChargeMoving; // 0x0
	bool bIsChargePushing; // 0x1
	bool bHasEnemy; // 0x2
	bool bIsAggro; // 0x3
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FSkeletalMeshPiece {
	FGameplayTag SkelMeshCompGameplayTag; // 0x0
	bool bOptimization_UseAttachParentBounds; // 0x8
	bool bStartHidden; // 0x9
	bool bIsDismembermentPiece; // 0xa
	UStaticMesh* StaticMeshDismembermentPiece; // 0x10
	FName StaticMeshDismembermentAttachName; // 0x18
	EMutilationRegion MutilationRegion; // 0x20
	UParticleSystem* ParticleSystem; // 0x28
	FName ParticleAttachSocketName; // 0x30
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x38
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FWeakSpotAttachmentTuning : FWeakSpotBaseTuning {
	bool bOffsetWhenDamaged; // 0x58
	FVector MaxOffsetWhenDamaged; // 0x5c
	float WeakSpotDuration; // 0x68
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FAgoraHydraLeaderboardProfile {
	FString ID; // 0x0
	FAgoraHydraLeaderboardServerData Server_Data; // 0x10
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x30
	bool G; // 0x31
	bool B; // 0x32
	bool A; // 0x33
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FGameplayEval_DroppedItem : FGameplayEval {
	TArray<FDataTableRowHandle> Items; // 0x48
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FUnlockProductCommand : FPlayerProfileCommand {
	FDataTableRowHandle Product; // 0x8
};

struct FScenarioHeroEval_PathDistance : FScenarioHeroEvaluator {
	float MaxRange; // 0x40
	FNavAgentSelector NavMeshSelector; // 0x44
};

struct FRemoveParticipantsFromPoolData {
	FString Pool; // 0x0
	TArray<FRemoveParticipantFromPoolData> Participants; // 0x10
};

struct FPlayerProfileCampaignRun {
	int32_t ID; // 0x0
	FString Map; // 0x8
	EMissionDifficulty Difficulty; // 0x18
	int32_t RetriesRemaining; // 0x1c
	int32_t Version; // 0x20
	ECampaignRunState State; // 0x24
	FString Data; // 0x28
	int64_t LastUpdateTimestamp; // 0x38
	int32_t DataVersion; // 0x40
};

struct FCharacterEmitterDef {
	FGameplayTagQuery TagQuery; // 0x0
	float Radius; // 0x48
	int32_t CharacterTypeFlags; // 0x4c
	bool bSinglePulse; // 0x50
	bool bRemoveOnEffectsFinished; // 0x51
	bool bRemoveSelfEffectsOnEmitterEnd; // 0x52
	bool bRemoveOtherEffectsOnEndOverlap; // 0x53
	bool bRequireLineOfSight; // 0x54
	TArray<UGameplayEffect*> SelfEffectClasses; // 0x58
	TArray<UGameplayEffect*> OtherActorEffectClasses; // 0x68
	FGameplayEffectContext InstigatingEffectContext; // 0x88
};

struct FProjectileThrowConfig : FAbilityConfig {
	ABaseProjectile* Projectile; // 0x8
	TArray<UAnimMontage*> ThrowMontages; // 0x10
	FGameplayTagQuery BlockingTags; // 0x20
	FGameplayTagQuery CancelTags; // 0x68
	FGameplayTagContainer AppliedActiveTags; // 0xb0
	TArray<UGameplayEffect*> ApplyActiveEffects; // 0xd0
	TArray<UGameplayEffect*> ApplyThrowingEffects; // 0xe0
	TArray<UGameplayEffect*> ApplyCooldownEffects; // 0xf0
	bool bHasCookingState; // 0x100
	TArray<UAnimMontage*> CookingMontages; // 0x108
	TArray<UGameplayEffect*> ApplyCookingEffects; // 0x118
	bool bChargeEnabled; // 0x128
	bool bUseFixedProjectileStartLocation; // 0x129
	FVector ProjectileStartLocation; // 0x12c
	FVector ProjectileCrouchedStartLocation; // 0x138
	FName AttachProjectileToSocket; // 0x144
	FName TargetBone; // 0x14c
	FCollisionProfileName TrajectoryCollisionProfile; // 0x154
	bool ThrowStateDurationAccountsForAnimBlendOut; // 0x15c
	FAIProjectileThrowConfig AI; // 0x160
	FPlayerProjectileThrowConfig Player; // 0x170
	FPinProjectileConfig Pin; // 0x1c8
};

struct FPostRoundStat {
	FText StatName; // 0x0
	TArray<FPostRoundStatValue> PlayerValues; // 0x18
};

struct FUnlimitedBulletPenetration {
	float DistanceRange; // 0x0
	TSet<EPhysicalSurface> Surfaces; // 0x8
};

struct FDialogueEventDef {
	FDataTableRowHandle EventRowHandle; // 0x0
	FDialogueEventConfig EventConfig; // 0x20
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

struct FWeaponDamageTrackingData {
	FDataTableRowHandle ObjectiveHandle; // 0x0
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FBotTraversalDesc {
	EBotTraversalType Type; // 0x0
	bool bDisabled; // 0x1
	UGameplayEvaluatorSet* FilterSet; // 0x8
	UAnimContext_Transform* DesiredDestContext; // 0x10
	float DestDistConstraint; // 0x18
	float MovementScale; // 0x1c
	FGameplayTagContainer RemoveTags; // 0x20
	float MaxIdleTime; // 0x40
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FOnlineConfigurationData {
	int32_t Changelist; // 0x0
	FString Bucket; // 0x8
	TArray<FOnlineConfigurationCVarData> CVars; // 0x18
	TArray<FOnlineConfigurationGameModeData> GameModes; // 0x28
};

struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x20
};

struct FDMapAISpawnData {
	bool bEnabled; // 0x0
	FNavAgentSelector NavMesh; // 0x4
};

struct FQueuedBotTakeOver {
	APlayerController* NewPlayerController; // 0x0
	APlayerState* TargetPlayerState; // 0x8
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
	ETextureLossyCompressionAmount LossyCompressionAmount; // 0x52
};

struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x98
	FSlateBrush Pressed; // 0x128
	FSlateBrush Disabled; // 0x1b8
	FMargin NormalPadding; // 0x248
	FMargin PressedPadding; // 0x258
	FSlateSound PressedSlateSound; // 0x268
	FSlateSound HoveredSlateSound; // 0x280
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
	FName SourceAssetName; // 0xa8
};

struct FCharacterRelatedActors {
	FDataTableRowHandle HeroRowHandle; // 0x0
	TArray<AActor*> AssociatedActors; // 0x20
};

struct FLocoLeaning {
	bool bEnabled; // 0x0
	float LeanPercent; // 0x4
	float MaxLeanInputDeltaAngle; // 0x8
};

struct FRegisteredDeviceInfo {
	int32_t Handle; // 0x0
	int32_t VendorID; // 0x4
	int32_t ProductId; // 0x8
	FString DeviceName; // 0x10
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString Tooltip; // 0x10
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
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

struct FCompilerNativizationOptions {
	FName PlatformName; // 0x0
	bool ServerOnlyPlatform; // 0x8
	bool ClientOnlyPlatform; // 0x9
	bool bExcludeMonolithicHeaders; // 0xa
	TArray<FName> ExcludedModules; // 0x10
	TSet<FSoftObjectPath> ExcludedAssets; // 0x20
	TArray<FString> ExcludedFolderPaths; // 0x70
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FLootScenarioItemMaintenance {
	FGameplayTag ItemTag; // 0x0
	bool bDifficultyOverride; // 0x8
	EMissionDifficulty Difficulty; // 0x9
	int32_t Maintenance; // 0xc
};

struct FSharedSoundBehavior {
	UAkAudioEvent* Sound; // 0x0
	bool bShouldFollowBone; // 0x8
	bool bShouldPrepSurface; // 0x9
	bool bShouldStopOnDestroy; // 0xa
	bool bShouldSupressIfHeadless; // 0xb
	float CooldownDuration; // 0xc
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x30
	bool bWeightBasedBlend; // 0x34
};

struct FRagdollWaterBoneSettings {
	FName BoneName; // 0x0
	float ForceMultiplier; // 0x8
	float DampeningMultiplier; // 0xc
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

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
	bool bClampTo2D; // 0x19
};

struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventPtrs EventToTrigger; // 0x38
};

struct FImpactSourceEmitterSet {
	TArray<FName> SpawnFilters; // 0x0
	float EmitterSpawnChancePercent; // 0x10
	TArray<FImpactEmitterDefinition> Emitters; // 0x18
	FName AttachToComponentTag; // 0x28
	FName SocketName; // 0x30
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
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

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FZombieAbilityData {
	UTexture2D* Icon; // 0x0
	FText Name; // 0x8
	FText Description; // 0x20
};

struct FGameplayCardTravelData {
	uint64_t RandomStreamSeed; // 0x0
	TArray<FPlayerActiveGameplayCardData> PlayerActiveGameplayCardDataArray; // 0x8
	TArray<FActiveGameplayCard> StaticCardsFromDifficulty; // 0x18
	TArray<FActiveGameplayCard> DynamicCardsFromDifficulty; // 0x28
	TArray<FZombieMutationTeamData> ZombieMutationTeamDataArray; // 0x38
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FAgoraHydraLeaderboardGameData {
	FAgoraHydraLeaderboardChallengeSet Challenge_Set; // 0x0
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x888
	FSlateBrush UpArrowImage; // 0x8e8
	FSlateBrush DownArrowImage; // 0x978
	FSlateBrush GlassImage; // 0xa08
	FSlateBrush ClearImage; // 0xa98
	FMargin ImagePadding; // 0xb28
	bool bLeftAlignButtons; // 0xb38
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FInteractiveCarWindow {
	UUsableComponent* Usable; // 0x0
	ULootSpawnerComponent* LootSpawner; // 0x8
	UMeshComponent* Mesh; // 0x10
	UParticleSystemComponent* Particles; // 0x18
	UAkAudioEvent* Audio; // 0x20
	UMaterialInterface* BrokenMaterial; // 0x28
	float ChanceWindowAlreadyBroken; // 0x30
};

struct FCharacterCustomizationRow : FTableRowBase {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	EItemQuality Quality; // 0x38
	UAkAudioEvent* EquipSound; // 0x40
	ECharacterCustomizationSlot Slot; // 0x48
	FHeroMeshDefinition FirstPersonMeshDefinition; // 0x50
	FHeroMeshDefinition ThirdPersonMeshDefinition; // 0x118
};

struct FSignInTasks {
	TArray<USignInTask*> Tasks; // 0x0
};

struct FWebServiceRegionPing {
	FString Region; // 0x0
	int32_t Ping; // 0x10
};

struct FGameplayAudioCaptions : FTableRowBase {
	FText SpeakerName; // 0x8
	FText CaptionText; // 0x20
	FSlateColor CaptionColor; // 0x38
	float CooldownTime; // 0x68
	float MaxDistance; // 0x6c
	float DisplayTime; // 0x70
	ECaptionTeamRestriction CaptionTeamRestriction; // 0x74
	bool bIsComms; // 0x75
	TArray<UAkAudioEvent*> TriggeringEvents; // 0x78
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FLoadoutCharacterOverride {
	FDataTableRowHandle CharacterRowHandle; // 0x0
	FInventoryLoadout Loadout; // 0x20
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

struct FActiveCameraShakeInfo {
	UCameraShake* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FBotCombatSwarmInfo {
	float SwarmChkDist; // 0x0
	int32_t NumEnemiesToBeSwarm; // 0x4
	int32_t NumEnemiesToTriggerSecondaryAtk; // 0x8
	float EnemyGroupChkDist; // 0xc
	int32_t NumEnemiesToBeEnemyGroup; // 0x10
	bool bChkTeammatesForSwarm; // 0x14
};

struct FGameplayEval_CheckLastDamagedBy : FGameplayEval {
	bool IgnoreSelfDamage; // 0x48
	bool bDoTagsCheck; // 0x49
	FGameplayTagQuery CharacterTags; // 0x50
	bool bDoSpeakerCheck; // 0x98
	FDataTableRowHandle VoiceRowHandle; // 0xa0
	FGameplayTagContainer DamageTypeContainer; // 0xc0
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FGobiFootPlanting {
	bool bEnabled; // 0x0
	bool bEnableFootIKSmoothing; // 0x1
	bool bDrawDebug; // 0x2
	FName HipBoneName; // 0x4
	FAlphaBlend BlendIn; // 0x10
	FAlphaBlend BlendOut; // 0x40
	FCollisionProfileName GroundTraceProfile; // 0x70
	float GroundTraceZOffset; // 0x78
	FFootPlantState RightFoot; // 0x7c
	FFootPlantState LeftFoot; // 0xb0
	float HipDisplacementScale; // 0xe4
	FFootPlantLerpRate StationaryLerpRate; // 0xe8
	FFootPlantLerpRate MovingLerpRate; // 0xfc
	bool bAdjustHipToLower; // 0x110
	float HipToHigherGroundThreshold; // 0x114
	float HipToLowerGroundThreshold; // 0x118
	float RightFootIKOffset; // 0x11c
	float LeftFootIKOffset; // 0x120
	float HipDisplacement; // 0x124
	float HipDisplacementSmoothed; // 0x128
	FRotator RightFootRotation; // 0x130
	FRotator LeftFootRotation; // 0x13c
	float IKFootSmoothingRate; // 0x148
	float IKFootRotationSmoothingRate; // 0x14c
	float IKHipSmoothingRate; // 0x150
	FName IKFootRootBoneName; // 0x154
	AGobiCharacter* OwnerCharacter; // 0x160
	USkeletalMeshComponent* SkelMesh; // 0x168
	UGobiCharacterMovementComponent* MovementComponent; // 0x170
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FRarityRow : FTableRowBase {
	int32_t RarityValue; // 0x8
	FText RarityName; // 0x10
	FSlateColor RarityColor; // 0x28
};

struct FAchievementRequirementStat {
	EPlayerProfileStat Stat; // 0x0
	FString StatSuffix; // 0x8
	EAchievementStatRequirementLifetime StatLifetime; // 0x18
};

struct FDialogueEval_InstigatorIs : FDialogueEval {
	FDataTableRowHandle Instigator; // 0x48
};

struct FScenarioEval_PacingPhase : FScenarioEval {
	char RequiredPacing; // 0x40
	ECompareOp Op; // 0x41
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventSectionData EventData; // 0x38
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FAISpawnEval_CheckGameModeTags : FAISpawnEval {
	FGameplayTagQuery QueryAgainstGameMode; // 0x40
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
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

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FGlobalAssetTableRow : FTableRowBase {
	FGlobalAssetTable GlobalAssetTable; // 0x8
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FPounceAIConfig {
	bool bPredictiveAimingEnabled; // 0x0
	UEnvQuery* MoveVictimToLocationEQS; // 0x8
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0xb8
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FWebServiceRegion {
	FString Name; // 0x0
	bool BeaconFirstPass; // 0x10
};

struct FFootDefinition {
	FBoneReference FKFootBone; // 0x0
	FBoneReference IKFootBone; // 0x10
};

struct FPlayerCameraManagerViewLimit {
	FVector2D Pitch; // 0x0
	FVector2D Yaw; // 0x8
	FVector2D Roll; // 0x10
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

struct FMOTDRow : FTableRowBase {
	FName Slug; // 0x8
	TArray<FMOTDTab> Tabs; // 0x10
	TArray<FMOTDTiledLayout> TileLayouts; // 0x20
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x48
	int32_t ChannelsUsed; // 0x2c8
};

struct FGamepadConfigButtonData {
	FName ButtonWidgetName; // 0x0
	UDataTable* CorrespondingConfig; // 0x8
	bool bIsCustomButton; // 0x10
};

struct FLootSpawnConfig {
	FGameplayTag LootTag; // 0x0
	FSpawnCountRange SpawnCountRange; // 0x8
	float Weight; // 0x10
	bool bExplicit; // 0x14
	bool bTreasure; // 0x15
	bool bAlwaysApplyWeight; // 0x16
	FGameplayTag SpawnerRequiredTag; // 0x18
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FGameplayEval_HitReactionWeakSpot : FGameplayEval {
	EPhysicalSurface WeakSpotSurface; // 0x48
	bool bTestHealthPercent; // 0x49
	float HealthPercent; // 0x4c
	ECompareOp CompareOperation; // 0x50
	bool bWeakSpotDestroyed; // 0x51
	UAnimContext_HitReactionInfo* HitReaction; // 0x58
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
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

struct FRowHandleNameCache {
	TArray<FString> DataTableNames; // 0x0
	TArray<FString> DataTablePaths; // 0x10
	TArray<FString> RowNames; // 0x20
	TArray<FString> RowDisplayNames; // 0x30
};

struct FMeshMaterialParamValueMapper {
	TArray<FName> MaterialSlotNames; // 0x0
	FName MaterialParam; // 0x10
	FVector2D Range; // 0x18
	FVector2D MaterialValue; // 0x20
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FLevelTravelDetails {
	bool IsValid; // 0x0
	bool GoToMainMenu; // 0x1
	FDataTableRowHandle LevelRowHandle; // 0x8
	FString PoolConfig; // 0x28
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

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FMultiPositioningInfo {
	UAkAudioEvent* AkEventOnEnter; // 0x0
	UAkAudioEvent* AkEventOnExit; // 0x8
	TArray<AActor*> TargetPoints; // 0x10
	bool bTriggerOnce; // 0x20
};

struct FAchievementRequirement {
	TArray<FAchievementRequirementStat> StatsToAggregate; // 0x0
	EAchievementRequirementOperator CompareOperator; // 0x10
	int32_t AggregatedStatValueThreshold; // 0x14
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x128
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x10
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FWebServiceEndpoint {
	FString Name; // 0x0
	bool bSecure; // 0x10
	bool bSigned; // 0x11
	bool bAuthenticated; // 0x12
	bool bValid; // 0x13
	bool bMultiRegion; // 0x14
	FString Host; // 0x18
	uint16_t Port; // 0x28
	FString Prefix; // 0x30
	bool bAtuinService; // 0x40
};

struct FPlayerStateLeaverPenalties {
	FPlayerStateLeaverPenalty LeaverPenalty[0x6]; // 0x0
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34
};

struct FHeroLedgeHangConfig {
	float MinFallSpeed; // 0x0
	float MaxFallSpeed; // 0x4
	FGameplayTagQuery BlockingTagQuery; // 0x8
	FGameplayTagContainer TagsToApply; // 0x50
	FGameplayTag UsableComponentGameplayTag; // 0x70
	UAnimMontage* ElbowClimbUpMontage; // 0x78
	UAnimMontage* TwoArmsClimbUpMontage; // 0x80
	UAnimMontage* OneArmClimbUpMontage; // 0x88
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x18
	int32_t FontPage; // 0x20
	FGuid ExpressionGUID; // 0x24
};

struct FSkeletalMeshConfig {
	FMeshTraitConfig MeshConfig; // 0x0
	USkeletalMesh* SkeletalMesh; // 0xa0
	bool bUseParentMasterPose; // 0xa8
	bool bSyncAttachParentLOD; // 0xa9
	USkeletalMeshComponent* ComponentClass; // 0xb0
	UAnimInstance* AnimClass; // 0xb8
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
	TMap<FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FEntitlementContentPackageRow : FTableRowBase {
	TArray<FDataTableRowHandle> Products; // 0x8
};

struct FGameModeStreamingVolumes {
	TArray<ALevelStreamingVolume*> StreamingLevelVolumes; // 0x0
	TArray<ALevelStreamingVolume*> StreamingSaferoomVolumes; // 0x10
	uint32_t SupportedGameModes; // 0x20
};

struct FTitanTongueGrabAttack {
	int32_t TongueCount; // 0x0
	float GrabAngle; // 0x4
	float GrabTellSecs; // 0x8
	FTitanTongueSettings TitanTongueSettings; // 0xc
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FBadgeEmblemRow : FTableRowBase {
	FText Name; // 0x8
	UTexture2D* Emblem; // 0x20
};

struct FSprayElementRow : FTableRowBase {
	ESprayElement Element; // 0x8
	FText DisplayName; // 0x10
	TArray<TSoftObjectPtr<UTexture2D>> Textures; // 0x28
};

struct FMantleClimbHeightConfig {
	float ClimbHeightMin; // 0x0
	float ClimbHeightMax; // 0x4
	float RequiredDepthBelow; // 0x8
	FMantleProceduralClimbParameters ProceduralClimbingParameters; // 0xc
	bool bAllowThirdPersonAnimationControl; // 0x18
	float AnimatedClimbTimeOverride; // 0x1c
	bool bRetainDismountSpeedAfterAnimation; // 0x20
	UCameraShake* CameraShake; // 0x28
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FAnimEval_MontageLastPlayed : FAnimEval {
	float MaxTime; // 0x48
	EMLP_TestMode TestMode; // 0x4c
	bool bUseGlobalCooldown; // 0x4d
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FSprintConfig {
	float SprintInTime; // 0x0
	float SprintOutTime; // 0x4
	float SprintSpeedActivatePercent; // 0x8
	float SprintSpeedDeactivatePercent; // 0xc
	float MaxSprintSpeed; // 0x10
	float MinRequiredStaminaToStart; // 0x14
	float StaminaConsumptionPerSecond; // 0x18
	float SprintJumpStaminaCost; // 0x1c
	float TimeAfterSprintToDisableJumpStaminaCost; // 0x20
	float RequiredInputAxisForward; // 0x24
	float RequiredSpeedToConsumeStamina; // 0x28
	float LowStaminaSprintSpeedScale; // 0x2c
	bool bLowStaminaCancelsSprint; // 0x30
	bool bEmptyStaminaCancelsSprint; // 0x31
	FGameplayTagQuery SprintBlockingTagQuery; // 0x38
	FGameplayTagContainer SprintAppliedTags; // 0x80
};

struct FDeathGasSpawnMoveTickData {
	EDeathGasSpawnState State; // 0x0
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FTaggedCardRolls {
	int32_t MinRolls; // 0x0
	int32_t MaxRolls; // 0x4
	FGameplayTag GameplayTag; // 0x8
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FExposedValueCopyRecord {
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0x8
	int32_t SourceArrayIndex; // 0x10
	bool bInstanceIsTarget; // 0x14
	EPostCopyOperation PostCopyOperation; // 0x15
	ECopyType CopyType; // 0x16
	TFieldPath<FProperty> DestProperty; // 0x18
	int32_t DestArrayIndex; // 0x38
	int32_t Size; // 0x3c
	TFieldPath<FProperty> CachedSourceProperty; // 0x40
	TFieldPath<FProperty> CachedSourceStructSubProperty; // 0x60
};

struct FAnalyticsGenericAggregationRow : FTableRowBase {
	FName System; // 0x8
	float AggregationPeriod; // 0x10
	bool bReportZero; // 0x14
	bool bCollectOnlyWithAuthority; // 0x15
	bool bFlushOnEndPlay; // 0x16
	bool bEnabled; // 0x17
};

struct FNavLinkGenerator {
	TArray<FString> GroundTraceHitActors; // 0x50
	bool bShowDetailDebug; // 0x60
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
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

struct FLocoVariation {
	bool bEnabled; // 0x0
	FGameplayTag VariationTag; // 0x4
	UAnimInstance* VariationAnimInstance; // 0x10
	FGameplayTagQuery RequiredTagQuery; // 0x18
};

struct FDialogueEval_CheckHasGameplayTag : FDialogueEval {
	bool bCheckTarget; // 0x48
	FGameplayTag GameplayTag; // 0x4c
};

struct FPlaceProceduralActorsInput {
	TArray<FSpawnDetails> ActorsToSpawn; // 0x0
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FGameplayEval_Distance : FGameplayEval {
	FAIDataProviderFloatValue IdealDistance; // 0x48
	FAIDataProviderFloatValue MaxDistFromIdealDist; // 0x80
	EIdealDistanceDirection IdealDistanceDirection; // 0xb8
	EDimension TestMode; // 0xb9
	UAnimContext_Distance* Distance; // 0xc0
	EScoringEquation ScoringEquation; // 0xc8
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78
	EAlphaBlendOption BlendOption; // 0x88
	UCurveFloat* CustomCurve; // 0x90
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FStumbleConfig {
	TArray<UMontageSet*> StumbleMontageSets; // 0x0
	TArray<UAnimMontage*> StumbleMontages; // 0x10
	FGameplayTagContainer DamageTags; // 0x20
	FGameplayTagContainer BlockingTags; // 0x40
	FGameplayTagContainer ReevaluateMontageTags; // 0x60
	TArray<UGameplayEffect*> ApplyEffects; // 0x80
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FGameplayEval_Dismembered : FGameplayEval {
	int32_t Regions; // 0x48
	EDismembermentTestMode TestMode; // 0x4c
	UAnimContext_Mutilation* Mutilation; // 0x50
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FPouncePlayerConfig {
	bool bLaunchUseCameraPitch; // 0x0
	UEnvQuery* MoveVictimToLocationEQS; // 0x8
	AGobiReticle* TargetReticle; // 0x10
	AGobiReticle* TargetReticleLockedOn; // 0x18
	float MaxTrajectorySimTime; // 0x20
	bool bUsesSecondaryButton; // 0x24
	bool bSetDesiredWallGrabLocation; // 0x25
	AActor* WallGrabVisualizer; // 0x28
	FLinearColor ReticleTrajectoryNonGrabColor; // 0x30
	FLinearColor ReticleTrajectoryGrabColor; // 0x40
	float ReticleTrajectoryDownZOffset; // 0x50
	float ReticleTrajectoryDownForwardOffset; // 0x54
	float InterpTrajectoryToImpactLocationIfHeightDifferenceAbove; // 0x58
	bool bShowFloatingCrossHair; // 0x5c
	FCameraViewModifier LeapViewModifier; // 0x60
	FCameraViewModifier AttackingViewModifier; // 0xa8
	bool bDisableControllerRotationYaw; // 0xf0
	float MovementInputScale; // 0xf4
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FacialExpressionCombos {
	EFacialExpression FirstExpression; // 0x0
	EExpressionIntensity FirstIntensity; // 0x1
	EFacialExpression SecondExpression; // 0x2
	EExpressionIntensity SecondIntensity; // 0x3
};

struct FTeamRelationship {
	FGameplayTag TeamTag; // 0x0
	FGameplayTagContainer FriendlyTeams; // 0x8
	FGameplayTagContainer EnemyTeams; // 0x28
};

struct FCategoryGroup {
	FText GroupName; // 0x0
	TArray<EVendorCategory> Categories; // 0x18
	int32_t NumRows; // 0x28
};

struct FAssetLookupGameplayTagContainer {
	FGameplayTagContainer Default; // 0x0
	TArray<FAssetLookupGameplayTagContainerEntry> Lookups; // 0x20
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x520
	FSplitterStyle ColumnSplitterStyle; // 0xa38
	FSlateBrush BackgroundBrush; // 0xb60
	FSlateColor ForegroundColor; // 0xbf0
};

struct FGameplayCardCondition : FUsableCondition {
	FDataTableRowHandle CardToCheck; // 0x28
};

struct FZombieMovementSpeedConfig {
	FZombieMovementSpeedStanceConfig Standing; // 0x0
	FZombieMovementSpeedStanceConfig Crouched; // 0x18
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FWebSocketSessionRecvMessage_MessageAck {
	TArray<int64_t> Acks; // 0x0
};

struct FWebSocketSessionSendMessage_SetSessionAndUserData {
	FString SessionData; // 0x0
	FString UserData; // 0x10
};

struct FCommWheelActionDefinition {
	UTexture2D* Icon; // 0x0
	FSlateColor IconTint; // 0x8
	FText DisplayName; // 0x38
	bool bSpawnPing; // 0x50
	bool bSpawnSpray; // 0x51
};

struct FTraversalSteeringConfig {
	UNavArea* NavArea; // 0x0
	USteeringBehavior* SteeringBehaviorOverride; // 0x8
};

struct FGameplayEval_BlockedByPawn : FGameplayEval {
	float AvatarPersonalSpacePadding; // 0x48
	UAnimContext_PawnProximity* Proximity; // 0x50
	UAnimContext_Actor* Avatar; // 0x58
	UAnimContext_Transform* SegmentEnd; // 0x60
};

struct FGobiAnimationData {
	float IsMovingThreshold; // 0x0
	FGobiAnimationCurveData MeleeTwistCurve; // 0x4
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
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

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FAISpawnEval_GrowingChance : FAISpawnEval {
	TArray<FGrowingChance> ChancePerThreatLevel; // 0x40
	bool bReroll; // 0x50
};

struct FMutilationPieceConfig {
	TSet<FName> BoneNames; // 0x0
	FGameplayTag SourceMeshTag; // 0x50
	TArray<FGibCapDefinition> GibCaps; // 0x58
};

struct FDialogueResponseVariation {
	FName VariationName; // 0x0
	FName Speaker; // 0x8
	FName ResponseGroup; // 0x10
	int32_t Weight; // 0x18
	UAkAudioEvent* AkEvent; // 0x20
	FDialogueReply Reply; // 0x28
	EGenderTarget GenderTarget; // 0x78
	ELineType LineType; // 0x79
	EExpressionIntensity ExpressionIntensity; // 0x7a
	EFacialExpression FacialExpression; // 0x7b
	float TimingAdjustment; // 0x7c
	float Cooldown; // 0x80
	bool bOncePerSession; // 0x84
};

struct FMatchmakingSavedSettings {
	bool Enabled; // 0x0
	FString UiBucket; // 0x8
	FString AtuinEnvironment; // 0x18
};

struct FShadowChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
	char bChannel3 : 1; // 0x0
	char bChannel4 : 1; // 0x0
	char bChannel5 : 1; // 0x0
	char bChannel6 : 1; // 0x0
};

struct FManuallySpawnedCardInPlay {
	TWeakObjectPtr<UAISpawnCard> SpawnCard; // 0x0
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FRawSessionId {
	FString SessionId; // 0x0
};

struct FTitanTentacleAttackShared {
	float DelayBetweenAttacksMin; // 0x0
	float DelayBetweenAttacksMax; // 0x4
	int32_t SmashCount; // 0x8
	float SmashTellSecs; // 0xc
	float SmashAttackSecs; // 0x10
	float SmashAlignToTargetSecs; // 0x14
	int32_t SwipeCount; // 0x18
	float SwipeTellSecs; // 0x1c
	float SwipeAttackSecs; // 0x20
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x20
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x30
};

struct FSpawnDetails {
	TArray<FBlueprintSpawnDetails> BlueprintsToSpawn; // 0x0
	TArray<FStaticMeshSpawnDetails> MeshesToSpawn; // 0x10
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FPounceTuning : FTuningDataBase {
	FVector2D GrabDuration; // 0x8
	float DamageRequiredToRelease; // 0x10
	float GravityScalar; // 0x14
	FPounceInitialAttackDamage InitialAttackDamage; // 0x18
	FPounceAOE AOE; // 0x30
	float Cooldown; // 0x58
	float MissCooldown; // 0x5c
	float MinCookTime; // 0x60
	float LaunchSpeed; // 0x64
	FLeapSteerData SteerData; // 0x68
	float TargetOffset; // 0xac
	float ReleaseOnWhizByDistance; // 0xb0
	FPounceAITuning AI; // 0xb4
	FPouncePlayerTuning Player; // 0xb8
};

struct FLooseSprintConfig {
	bool bIsSprintingAllowed; // 0x0
	float SprintSpeedOverride; // 0x4
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FGameplayEval_CurrentMap : FGameplayEval {
	FDataTableRowHandle MapRowHandle; // 0x48
};

struct FParallelTween {
	TArray<UBaseTween*> ParallelTweens; // 0x0
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
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

struct FAISpawnEval_CheckCharacterTags : FAISpawnEval {
	int32_t TestValue; // 0x40
	ECompareOp Op; // 0x44
	FGameplayTagQuery QueryAgainstAliveCharacters; // 0x48
	FGameplayTagContainer ScenarioCardEvalTags; // 0x90
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

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
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

struct FTriggerEffectsDefinition {
	int32_t TriggerEffectTriggerFlags; // 0x0
	ETriggerEffectMode EffectMode; // 0x4
	char Value1; // 0x5
	char Value2; // 0x6
	char Value3; // 0x7
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FQueuedZombieRespawnState {
	APawn* PawnClass; // 0x0
	float NextSpawnTime; // 0x8
	float CurrentQueueTurnWaitTime; // 0xc
	AGobiPlayerState* PlayerTurnToSpawn; // 0x10
	TArray<AGobiPlayerState*> Queue; // 0x18
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
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

struct FTitanStage3TentacleIndividual {
	ETitanTentacleId TentacleId; // 0x0
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FExplosionProjectilesConfig {
	FVector2D VelocityForward; // 0x0
	FVector2D VelocityUp; // 0x8
	FVector2D Count; // 0x10
	AActor* ProjectileClass; // 0x18
};

struct FAISpawnEval_PacingPhaseTime : FAISpawnEval {
	float RemainingTimePct; // 0x40
	ECompareOp Op; // 0x44
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FHitMarkerInfo {
	AActor* Attacker; // 0x0
	AActor* Victim; // 0x8
	int32_t ArmorIdx; // 0x10
	FDamageInfo DamageResult; // 0x18
};

struct FGameplayTagChange {
	FAIDataProviderGameplayTagContainerValue GameplayTags; // 0x0
	EGameplayTagOperation Operation; // 0x50
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

struct FZombieMovementSpeedStanceConfig {
	FVector BaseMoveSpeed; // 0x0
	FVector GhostMoveSpeed; // 0xc
};

struct FConditionalDynamicAIDirectorCardDef {
	FDataTableRowHandle DataTableRowHandle; // 0x0
	FGameplayTagContainer FailTags; // 0x20
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FWebSocketSessionRecvMessage_SessionDirty {
	FWebServiceSession Session; // 0x0
	TArray<int64_t> Acks; // 0x68
};

struct FSpawnCountRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FDialogueParamDefinition {
	FName ParamName; // 0x0
	EFactType ParamType; // 0x8
};

struct FArmorDestroyed {
	AActor* SourceActor; // 0x0
	int32_t ArmorIdx; // 0x8
	FVector ImpactDirection; // 0xc
};

struct FCutsceneDefinition {
	FString DeveloperComments; // 0x0
	TArray<FSoftObjectPath> LevelsToLoad; // 0x10
	TArray<FSoftObjectPath> LevelsToUnload; // 0x20
	FSoftObjectPath MasterLevelSequence; // 0x30
	FMovieSceneSequencePlaybackSettings Settings; // 0x48
	bool bRunLevelStreamingOnDedicatedServer; // 0x5c
	bool bEndLevel; // 0x5d
	bool bDisableDialogueSystem; // 0x5e
	bool bDisableDirectorAISpawning; // 0x5f
	bool bRenableDirectorAISpawningAfterCutscene; // 0x60
	bool bDeleteDirectorSpawnedAIs; // 0x61
	bool bDeleteAllTeamZombie; // 0x62
	bool bMakeHeroesInvulnerableToDamageAndDeath; // 0x63
	bool bLeaveHeroesHidden; // 0x64
	FGameplayTagContainer DisableHeroTags; // 0x68
	float IntroFadeTime; // 0x88
	bool bHoldOutroFadeUntilPostRoundScreen; // 0x8c
	TArray<FSoftObjectPath> AssetsToPreload; // 0x90
	TArray<UAkAudioBank*> SoundbanksToLoad; // 0xa0
	UAkAudioEvent* FadeInEvent; // 0xb0
	UAkAudioEvent* FadeOutEvent; // 0xb8
	bool bRequiresCapablePlayers; // 0xc0
	bool bRequiresMissionNotFailed; // 0xc1
};

struct FSceneComponentHitResult {
	FHitResult HitResult; // 0x0
	UActorComponent* ActorComponent; // 0x88
};

struct FSuicideConfig : FAbilityConfig {
	UGobiDamageType* DamageType; // 0x8
	TArray<UGameplayEffect*> ApplyEffectsOnDeath; // 0x10
	TArray<UAnimMontage*> CookingMontages; // 0x20
	TArray<UGameplayEffect*> CookingEffects; // 0x30
	FGameplayTagQuery BlockingTags; // 0x40
	FGameplayTagQuery ByPassCookingTags; // 0x88
	float MinCookTime; // 0xd0
	bool bCanCancel; // 0xd4
	FGameplayTagQuery DieOnContactWithCharacters; // 0xd8
	float MaxPathAngle; // 0x120
	float AcceptablePointDist; // 0x128
	float MaxNavLinkClimbHeight; // 0x12c
	float MinDistanceForPathCheck; // 0x130
};

struct FGameplayEval_HasHeroTeammateInLifeState : FGameplayEval {
	FGameplayTagContainer LifeStates; // 0x48
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FSourceEffectMidSideSpreaderSettings {
	EStereoChannelMode InputMode; // 0x0
	float SpreadAmount; // 0x4
	EStereoChannelMode OutputMode; // 0x8
	bool bEqualPower; // 0x9
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
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

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FGameplayEval_NavCastDistance : FGameplayEval {
	UAnimContext_NavCast* NavCast; // 0x48
	FAIDataProviderFloatValue IdealDistance; // 0x50
	FAIDataProviderFloatValue MaxDistFromIdealDist; // 0x88
	EIdealDistanceDirection IdealDistanceDirection; // 0xc0
	EScoringEquation ScoringEquation; // 0xc1
};

struct FLifeStateTransitionRuleHealth {
	FGameplayTag LifeStateTag; // 0x0
	ELifeStateTransitionCompare HealthCompare; // 0x8
	float HealthPercent; // 0xc
};

struct FMutilationQuality {
	bool bLimitMutilations; // 0x0
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FRawInputDeviceButtonProperties {
	char bEnabled : 1; // 0x0
	FKey Key; // 0x8
};

struct FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int32_t SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
	FString SourceComponentPathName; // 0x58
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FZombieRespawnTime {
	APawn* PawnClass; // 0x0
	float RespawnTime; // 0x8
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x2a0
	FSlateBrush ActiveBrush; // 0x330
	FSlateBrush ColorOverlayTabBrush; // 0x3c0
	FSlateBrush ColorOverlayIconBrush; // 0x450
	FSlateBrush ForegroundBrush; // 0x4e0
	FSlateBrush HoveredBrush; // 0x570
	FSlateBrush ContentAreaBrush; // 0x600
	FSlateBrush TabWellBrush; // 0x690
	FMargin TabPadding; // 0x720
	float OverlapWidth; // 0x730
	FSlateColor FlashColor; // 0x738
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FTitanStage2TentacleZoneAnims {
	UAnimSequence* SmashTellBeginAnimSequence; // 0x0
	UAnimSequence* SmashTellLoopAnimSequence; // 0x8
	UAnimSequence* SmashAttackBeginAnimSequence; // 0x10
	UAnimSequence* SmashAttackLoopAnimSequence; // 0x18
	UAnimSequence* SmashRetractAnimSequence; // 0x20
};

struct FGobiSessionServerData {
	FString Ip; // 0x0
	int32_t Port; // 0x10
	FString ServerUserId; // 0x18
	bool bReady; // 0x28
	FString CurrentState; // 0x30
	TArray<FGobiSessionServerParticipantData> Users; // 0x40
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
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

struct FPreSpawnInfo {
	bool bInPreSpawn; // 0x0
	AActor* SpawnActor; // 0x8
	FVector SpawnActorLocation; // 0x10
	FRotator SpawnActorRotation; // 0x1c
	FVector PreSpawnLocationAudioOffset; // 0x28
	UAnimSequence* PreSpawnMeshAnimation; // 0x38
	UParticleSystem* PreSpawnEmitter; // 0x40
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FWebSocketSessionRecvMessage_OperationFailed {
	int32_t ErrorCode; // 0x0
	FString ErrorMessage; // 0x8
	TArray<int64_t> Acks; // 0x18
};

struct FBlackBoardValue {
	FBlackboardKeySelector SourceKey; // 0x0
	EBlackboardValueOperation Operation; // 0x28
	FBlackboardKeySelector TargetKey; // 0x30
	int32_t Context; // 0x58
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FLootSpawnCountModifier {
	TArray<FLootSpawnConfig> SpawnConfigs; // 0x0
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FAddSessionToPoolParticipantData {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
	FString Team; // 0x18
};

struct FAITRSNoiseEvent {
	FVector NoiseLocation; // 0x4
	FVector NoiseLocationEnd; // 0x10
	float Loudness; // 0x1c
	float MaxRange; // 0x20
	AActor* Instigator; // 0x28
	FName Tag; // 0x30
};

struct FDrenchStrengthSettings {
	float DamagePct; // 0x0
	float InnerStrength; // 0x4
	float OuterStrength; // 0x8
	float InnerRadius; // 0xc
	float OuterRadius; // 0x10
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
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

struct FScreenModeFPConfiguration {
	float BaseFOV; // 0x0
	bool bUseCustomADSFOV; // 0x4
	float CustomADSFOV; // 0x8
};

struct FOverrideHealthDamageRanges {
	FGameplayTagQuery Query; // 0x0
	TArray<FHealthDamageRange> OverrideRanges; // 0x48
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
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

struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
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

struct FUsableProgressBarDefinition {
	bool bWantsProgressBar; // 0x0
	FText ProgressBarText; // 0x8
};

struct FSlotManagerConfig {
	ETeamCounts NumTeams; // 0x0
	int32_t TeamSize; // 0x4
	UCharacterSelect* CharacterSelectClass; // 0x8
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x18
};

struct FPartyPlayer {
	TWeakObjectPtr<AGobiPlayerState> PlayerState; // 0x0
	TWeakObjectPtr<APlayerSlot> PlayerSlot; // 0x8
	FGobiOnlineUser OnlineUser; // 0x10
	bool bUseNameFromOwningPlayerState; // 0xf8
	bool bWasRecentPlayer; // 0xf9
	bool bWasInLastGame; // 0xfa
};

struct FMatchmakingRemoveParticipantsTaskData {
	int32_t ControllerId; // 0x0
	FString SessionId; // 0x8
	TArray<FGobiSessionUser> Users; // 0x18
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FGobiSessionServerParticipantData {
	FString UserId; // 0x0
	int32_t UserNonce; // 0x10
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FRawLodInfo {
	int32_t NumLODs; // 0x0
	TArray<FMeshBuildSettings> BuildSettings; // 0x8
	TArray<FMeshReductionSettings> ReductionSettings; // 0x18
	TArray<FPerPlatformFloat> ScreenSizes; // 0x28
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FDifficultyVector2D : FDifficultyValue {
	FVector2D Easy; // 0x0
	FVector2D Normal; // 0x8
	FVector2D Hard; // 0x10
	FVector2D Legendary; // 0x18
	FVector2D PVP; // 0x20
};

struct FMeleeTuning : FTuningDataBase {
	float MeleeCooldown; // 0x8
	float MeleeActivationCooldown; // 0xc
	float IgnoreImpactsAboveHeight; // 0x10
	FMeleeImpactVolumeTuning ImpactLocationVolume; // 0x14
	FMeleeImpactVolumeTuning ImpactForwardVolume; // 0x20
	float MaxReticleLockOnDistance; // 0x2c
	float DesiredImpactAnimSec; // 0x30
	float MoveToTargetSpeed; // 0x34
	float TargetDirectionOffset; // 0x38
	float MinDistFromTargetToMove; // 0x3c
	uint32_t MaxReattackCount; // 0x40
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

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FCardDependentStreamingVolume {
	ALevelStreamingVolume* StreamingLevelVolume; // 0x0
	FName Key; // 0x8
	bool bDoNotLoadIfKeyExists; // 0x10
};

struct FCustomDataProviderAnimSequence : FCustomDataProvider {
	UAnimSequence* Value; // 0x8
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

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
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

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FGamePropertyFloat : FMovementTickableStruct {
	float Value; // 0x20
	float BaseValue; // 0x24
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FSafeRoomMissionObjectiveConfig {
	FDataTableRowHandle ObjectiveHandle; // 0x0
	bool bObjectiveCompleted; // 0x20
};

struct FCurveToExpressionMap {
	FName CurveName; // 0x0
	TArray<EFacialExpression> Expressions; // 0x8
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FTitanPhase {
	float NewBaseHealth; // 0x0
	float TriggerNextPhaseHealthPct; // 0x4
	float IdleSecsMin; // 0x8
	float IdleSecsMax; // 0xc
	bool bCanTurn; // 0x10
	FTitanTurn Turn; // 0x14
	int32_t TailSwipeCount; // 0x20
	FTitanTailSwipeAttack TailSwipeAttack; // 0x24
	int32_t SweepForwardCount; // 0x2c
	FTitanSweepForwardAttack SweepForwardAttack; // 0x30
	int32_t TongueGrabCount; // 0x38
	FTitanTongueGrabAttack TongueGrabAttack; // 0x3c
	int32_t TentacleAttackCount; // 0x54
	FTitanTentacleAttackShared TentacleAttackShared; // 0x58
	TArray<FTitanTentacleAttackIndividual> TentacleAttackIndividuals; // 0x80
	UAnimMontage* ArriveMontage; // 0x90
	UAnimSequence* IdleTailOnLeftAnimSequence; // 0x98
	UAnimSequence* IdleTailOnRightAnimSequence; // 0xa0
	UAnimMontage* RetreatMontage; // 0xa8
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
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

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
};

struct FLadderAnimStateFP {
	bool bIsOnLadder; // 0x0
	float AnimPlaybackRate; // 0x4
	float ArmsYaw; // 0x8
	float ArmsPitch; // 0xc
};

struct FDiscardedCard {
	TWeakObjectPtr<UAISpawnCard> SpawnCard; // 0x0
	FName Reason; // 0x8
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
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

struct FFootplantCategory {
	EPerfScalingMethod QualityScaling; // 0x0
	int32_t MaxLODPerQuality[0x5]; // 0x4
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

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
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

struct FMusicDamageTypeEvent {
	UGobiDamageType* DamageTypeClass; // 0x0
	FDataTableRowHandle MusicEvent; // 0x8
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FMeshMaterialParamValue {
	FName Name; // 0x0
	EMaterialParamType ParamType; // 0x8
	FLinearColor LinearColor; // 0xc
	TArray<FLinearColor> LinearColors; // 0x20
	FColor Color; // 0x30
	TArray<FColor> Colors; // 0x38
	float Scalar; // 0x48
	TArray<float> Scalars; // 0x50
	UTexture* Texture; // 0x60
	TArray<UTexture*> Textures; // 0x68
};

struct FMatchmakingPoolConfig {
	FString Name; // 0x0
	int32_t MinUnknowns; // 0x10
	int32_t MaxUnknowns; // 0x14
	int32_t MinTeamA; // 0x18
	int32_t MaxTeamA; // 0x1c
	int32_t MinTeamB; // 0x20
	int32_t MaxTeamB; // 0x24
	bool bBackfill; // 0x28
	FString GameMode; // 0x30
	bool bTeamSwap; // 0x40
	bool bPrivateBackfill; // 0x41
	bool bLeaverPenalty; // 0x42
	EGobiMapGameModesType GameModeType; // 0x43
};

struct FZOffsetForRange {
	FVector2D AngleRange; // 0x0
	float ZOffset; // 0x8
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FRespawnSnapshot_Hero {
	float MaxHealth; // 0x0
	float CurrentHealth; // 0x4
	int32_t CurrentIncapCount; // 0x8
	FInventoryLoadout Loadout; // 0x10
	FInventoryLoadout BotLoadout; // 0x48
	FPlayerActiveGameplayCardData ActiveGameplayCardData; // 0x80
	FPlayerActiveGameplayCardData BotActiveGameplayCardData; // 0x128
};

struct FLightingScenarioMapData : FTableRowBase {
	ELightingScenarioMapListBehavior ListBehavior; // 0x8
	TArray<FSoftObjectPath> MapList; // 0x10
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FMatchmakingPoolData {
	int32_t MatchmakingSequenceId; // 0x0
	FString GameMode; // 0x8
	bool IsPrivate; // 0x18
	TArray<FPoolFilterData> Filters; // 0x20
	FString MatchmakerInstanceId; // 0x30
	int32_t MatchmakerTickNumber; // 0x40
	FString PrivateCode; // 0x48
};

struct FReviveEffectData {
	float HealthPercentFromDead; // 0x0
	float HealthPercentFromIncap; // 0x4
	int32_t IncapStrikesToReturn; // 0xc
	FGameplayTag ReviveSourceTag; // 0x10
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

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FPlayerStateUserIds {
	FString UserId; // 0x0
	int32_t Nonce; // 0x10
	FString HydraPublicId; // 0x18
};

struct FRolledLootPool {
	FGameplayTag LootTag; // 0x0
	int32_t TotalPool; // 0x8
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FGameplayCardPresetRow : FTableRowBase {
	FGameplayCardPreset Preset; // 0x8
	bool DevOnly; // 0x50
	bool HiddenForTradeShow; // 0x51
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel FloatFunction; // 0x48
	EMovieSceneBlendType BlendType; // 0xe8
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FOvercastPlayersData {
	FOvercastPlatformPlayersData null; // 0x0
	FOvercastPlatformPlayersData Steam; // 0x8
	FOvercastPlatformPlayersData EOS; // 0x10
	FOvercastPlatformPlayersData PS4; // 0x18
	FOvercastPlatformPlayersData PS5; // 0x20
	FOvercastPlatformPlayersData GDK; // 0x28
};

struct FDamageNumberInfo {
	FString Damage; // 0x0
	FVector Position; // 0x10
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

struct FAISpawnEval_InViewOfSafeRoom : FAISpawnEval {
	bool bInViewOfSafeRoom; // 0x40
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
	TArray<FString> AssetScanPaths; // 0x80
	bool bIsDynamicAsset; // 0x90
	int32_t NumberOfAssets; // 0x94
};

struct FAISpawnEval_CheckCardTags : FAISpawnEval {
	int32_t TestValue; // 0x40
	ECompareOp Op; // 0x44
	FGameplayTagQuery QueryAgainstCardsInPlay; // 0x48
};

struct FDialogueEval_TargetIs : FDialogueEval {
	FDataTableRowHandle Target; // 0x48
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FDamageInfo {
	float Damage; // 0x0
	float PermanentDamage; // 0x4
	float DamagePct; // 0x8
	float PermanentDamagePct; // 0xc
	float PreviousTotalHealth; // 0x10
	float WeakSpotDamageMultiplier; // 0x14
	UGobiDamageType* DamageType; // 0x18
	UHealthComponent* HealthComponent; // 0x20
	UWeakSpotsComponent* WeakSpotsComponent; // 0x28
	UPrimitiveComponent* HitComponent; // 0x30
	FVector ImpactPoint; // 0x38
	FVector ImpactDirection; // 0x44
	FName BoneName; // 0x50
	FGameplayEffectSource EffectSource; // 0x58
	FVector HitResultLocation; // 0x90
	FVector TraceDirection; // 0x9c
	EPhysicalSurface PhysicsSurface; // 0xa8
	bool bWeakSpot; // 0xa9
	int32_t Item; // 0xac
};

struct FGobiCharacterLoadout {
	bool bApplyLoadout; // 0x0
	FInventoryLoadout Loadout; // 0x8
	ELoadoutSource LoadoutSource; // 0x40
	bool bHasInfiniteAmmo; // 0x41
};

struct FDebugNumbersPrefs {
	float Offset; // 0x0
	float Size; // 0x4
	FColor Color; // 0x8
};

struct FActiveAreaSetHuddleDefinition {
	float Radius; // 0x0
	int32_t NumSpawners; // 0x4
	float HuddlesPerSqrKM; // 0x8
};

struct FPlayerViewData {
	FRotator TargetRotation; // 0x0
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FGameplayCardDeck {
	int32_t ID; // 0x0
	EGameplayCardDeckType Type; // 0x4
	FString Name; // 0x8
	TArray<FDataTableRowHandle> Cards; // 0x18
	int32_t Version; // 0x28
};

struct FImpactGameplayTagContainerDefinition {
	FGameplayTagContainer TagContainer; // 0x0
	FImpactDefinition ImpactDefiniion; // 0x20
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FUsableCondition {
	FText FailText; // 0x8
	bool bNegateCheck; // 0x20
	bool bContinuousCondition; // 0x21
	bool bIgnoreConditionAfterSuccessfulUse; // 0x22
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FAutoStartMapMission {
	FDataTableRowHandle MissionHandle; // 0x0
};

struct FTaskManClientVersion {
	int32_t Changelist; // 0x0
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FBotItemSystem {
	FGameplayTag BotItemPickupLimitTag; // 0x0
	ABotController* OwnerBotCtrl; // 0x8
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FCustomDataProviderFloat : FCustomDataProvider {
	float Value; // 0x4
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FScenarioHeroEval_FixedScore : FScenarioHeroEvaluator {
	float FixedScore; // 0x40
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FZombieMutationTreeRow : FTableRowBase {
	EZombieMutationTree Category; // 0x8
	FText Name; // 0x10
	FText Description; // 0x28
	float RespawnTime; // 0x40
	bool bRespawnQueueBased; // 0x44
	float InitialSpawnDelay; // 0x48
	int32_t BuybackCost; // 0x4c
	int32_t OnFieldLimit; // 0x50
	UTexture2D* TileImage; // 0x58
	TArray<FZombieMutationBranchRow> MutationBranches; // 0x60
	APawn* PawnClass; // 0x70
	TArray<FZombieMutationVariant> Variants; // 0x78
	bool Hidden; // 0x88
	bool ExcludeFromSocialSpace; // 0x89
};

struct FMOTDTile {
	FText Title; // 0x0
	FText Description; // 0x18
	TSoftObjectPtr<UTexture2D> Image; // 0x30
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
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

struct FFortDediUpdateGameData {
	FString GameMode; // 0x0
	TArray<FPoolFilterData> Filters; // 0x10
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FEffectEmitterSphere {
	float Radius; // 0x0
	FName CollisionProfile; // 0x4
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FSpawnLocalityCharacterSet {
	float Weight; // 0x0
	FGameplayTagContainer CharacterTags; // 0x8
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FAISpawnEval_PlayerIntensity : FAISpawnEval {
	float IntensityThreshold; // 0x40
	ECompareOp Op; // 0x44
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x48
};

struct FCurrencyCondition : FUsableCondition {
	int32_t RequiredCurrency; // 0x28
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FGamepadPresetConfigRemapping : FTableRowBase {
	FName NewInput; // 0x8
	float NewScale; // 0x10
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2
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

struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	FFrameNumber SectionStartTime; // 0x20
	FGuid OuterBindingId; // 0x24
	FMovieSceneEvaluationOperand InnerOperand; // 0x34
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

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

