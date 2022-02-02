// Created by BlueFire1337
// Updated 2022-01-25
// Generated 2022-02-02

#pragma once

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0xc
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x2c
	bool bIsPlaceholder; // 0x38
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FAtlantaRitualSet {
	TArray<FAtlantaRitualInstance> Instances; // 0x0
	TArray<FRewardItem> RewardItems; // 0x10
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName value; // 0xc
};

struct FOnboardingTutorialButtonViewData {
	EOnboardingStepStatus StepStatus; // 0x0
	FString stepId; // 0x8
	FString tutorialId; // 0x18
	FText Title; // 0x28
	FText Description; // 0x40
	UTexture2D* Icon; // 0x58
	TArray<FRewardWrapperViewData> RewardsData; // 0x60
	EOnboardingTutorialButtonStyle ButtonStyle; // 0x70
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FDBDFoliageInfo {
	UFoliageType* FoliageType; // 0x0
	TArray<FDBDFoliageInstance> Instances; // 0x8
};

struct FHelpTopicData : FDBDTableRowBase {
	FText Title; // 0x8
	FText Description; // 0x20
	FString ImagePath; // 0x38
	FString IconPath; // 0x48
	FString VideoId; // 0x58
	TSoftObjectPtr<UTexture2D> Icon; // 0x68
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FAtlantaRitualSetArray {
	TArray<FAtlantaRitualSet> rituals; // 0x0
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t defaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x2b0
	FMargin Padding; // 0x538
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString value; // 0x8
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
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

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0x48
	EEvaluatorDataSource DataSource; // 0x50
	EEvaluatorMode EvaluatorMode; // 0x51
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FClientLoginAnalytics : FUniquelyIdentifiedAnalytic {
	FString ClientOptions; // 0x98
	FString ClientMatchId; // 0xa8
	FString ClientGameType; // 0xb8
	FString ClientRole; // 0xc8
	FString ClientSurvivorIndex; // 0xd8
	FString ClientKillerIndex; // 0xe8
	FString ClientPlatformAccountId; // 0xf8
	FString ClientMirrorsId; // 0x108
	FString ClientPlatform; // 0x118
	FString ClientProvider; // 0x128
	FString ClientName; // 0x138
	FString LoginResult; // 0x148
};

struct FFootBoneData {
	UCurveVector* RightFootCurve; // 0x0
	UCurveVector* LeftFootCurve; // 0x18
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char value; // 0x2
};

struct FAITerrorEvent {
	FVector Location; // 0x0
	AActor* Instigator; // 0x10
	UTerrorRadiusEmitterComponent* TerrorEmitter; // 0x18
	FGenericTeamId TeamIdentifier; // 0x20
};

struct FHillbillyAnalytics : FChainsawAnalytics {
	TArray<FChainsawEvent> OverheatEvents; // 0xb8
	TArray<FChainsawEvent> OverheatWhileSprintingEvents; // 0xc8
	TArray<FChainsawEventWhileCamping> OverheatWhileCampingEvents; // 0xd8
	TArray<FChainsawEvent> RevFromZeroHeatEvents; // 0xe8
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x28
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

struct FBHVRPerDetailModeBool {
	TMap<FName, bool> PerDetailModeValue; // 0x0
	TMap<FName, bool> PerDetailModeOverride; // 0x50
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FK25StatusData {
	float ChainHuntProgressPercentage; // 0x0
	bool IsHoldingLamentConfiguration; // 0x4
	bool IsSolvingLamentConfiguration; // 0x5
};

struct FSpecialEventLoadingTextData : FDBDTableRowBase {
	FName EventId; // 0x8
	FText Title; // 0x18
	FText Description; // 0x30
	FString IconPath; // 0x48
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0xc
};

struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	char bAlphaBoolEnabled : 1; // 0x31
	char bResetChildOnActivation : 1; // 0x31
	float alpha; // 0x34
	FInputScaleBias AlphaScaleBias; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x28
};

struct FDependency {
	ETileSpawnPointType Type; // 0x0
	FSoftObjectPath AssetReference; // 0x8
	AActor* Object; // 0x28
	bool Unique; // 0x30
	int32_t count; // 0x34
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FCustomGamePresetData {
	TArray<char> _mapAvailabilities; // 0x8
	bool _arePerkAvailable; // 0x18
	bool _areOfferingAvailable; // 0x19
	bool _areItemAvailable; // 0x1a
	bool _areItemAddonAvailable; // 0x1b
	bool _areDlcContentAllowed; // 0x1c
	bool _isPrivateMatch; // 0x1d
	FCustomGameBotsData _botsData; // 0x20
};

struct FOnboardingStepViewData {
	FString stepId; // 0x0
	EOnboardingStepStatus Status; // 0x10
	TArray<FOnboardingTutorialViewData> Tutorials; // 0x18
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FAtlantaSubRitualUIData {
	FString Description; // 0x0
	int32_t TargetNumber; // 0x10
	int32_t CurrentNumber; // 0x14
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
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

struct FManagedGameplayElementData {
	TArray<UActorSpawner*> ActivatedSpawners; // 0x8
	TArray<UActorSpawner*> RemovedSpawners; // 0x18
	EGameplayElementType PopulationType; // 0x28
	float CurrentPopulationCost; // 0x2c
	int32_t MaxPopulationCost; // 0x30
	int32_t MinPopulationCost; // 0x34
	float MapWidth; // 0x38
	float MinProximityBetweenElements; // 0x3c
	float MinDistSqrBetweenElements; // 0x40
	float TileWidth; // 0x44
	float FactorToAdjustToWhenOutOfProximity; // 0x48
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FThemeProperties {
	FName Name; // 0x0
	FName Weather; // 0xc
	FName AudioStateThemes; // 0x18
	FName AudioStateWeather; // 0x24
	FName AudioThemeEvent; // 0x30
	TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank; // 0x40
	FString TilePath; // 0x70
	FString MapPath; // 0x80
	int32_t ThemeNumber; // 0x90
	FText DisplayName; // 0x98
	EThemeColorId ThemeColorId; // 0xb0
	EOfferingEffectType ThemeSelectionOfferingEffectType; // 0xb1
	TArray<FGameplayElementSubstitutions> SubstitutionElements; // 0xb8
	FString DlcIDString; // 0xc8
	UBlackboardData* Blackboard; // 0xd8
	bool Gesture; // 0xe0
};

struct FBlinkPowerSetupParams {
	UTimerObject* ChainBlinkTimer; // 0x0
	UTimerObject* CooldownTimer; // 0x8
	UTimerObject* RechargeTimer; // 0x10
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0xc
	FTransform Transform; // 0x20
	FString DisplayName; // 0x50
	bool bAdvanced; // 0x60
};

struct FNamedColor {
	FColor value; // 0x0
	FName Name; // 0x4
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x58
};

struct FHudEditorDragFromParentAxisLimit {
	bool enable; // 0x0
	EHudEditorDragAxisOption AxisOption; // 0x1
	float MinDragDistance; // 0x4
	bool ScaleMinDragDistanceWithParent; // 0x8
	float MaxDragDistance; // 0xc
	bool ScaleMaxDragDistanceWithParent; // 0x10
};

struct FCharacterDescriptionOverride : FDBDTableRowBase {
	FName RequiredItemId; // 0x8
	FText DisplayNameOverride; // 0x18
	TSoftObjectPtr<UTexture2D> HudIconOverride; // 0x30
	TSoftClassPtr<UObject> MenuBlueprint; // 0x60
	TSoftClassPtr<UObject> GameBlueprint; // 0x90
	FName IconFilePathOverride; // 0xc0
};

struct FLookInputAxisScalingData {
	FDBDTimer ScalingTimer; // 0x0
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FBaseLoadoutPartViewData {
	FName ItemId; // 0x0
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x10
	FString DisplayName; // 0x40
	EItemRarity Rarity; // 0x50
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0xc
};

struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xd0
	FBoneReference targetBone; // 0xe4
	bool bCopyTranslation; // 0xf8
	bool bCopyRotation; // 0xf9
	bool bCopyScale; // 0xfa
	CopyBoneDeltaMode CopyMode; // 0xfb
	float TranslationMultiplier; // 0xfc
	float RotationMultiplier; // 0x100
	float ScaleMultiplier; // 0x104
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x10
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x10
};

struct FAtlCookedMapDescription {
	FName ThemeName; // 0x0
	TSoftObjectPtr<UWorld> MapAsset; // 0x10
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FDPIScaleCurveForRatio : FDBDTableRowBase {
	EDPIScaleCurveRatio Ratio; // 0x8
	TSoftObjectPtr<UCurveFloat> DPIScaleCurve; // 0x10
};

struct FSourceEffectWaveShaperSettings {
	float amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FMaterialReplacerArray {
	TArray<FMaterialReplacerData> MaterialsMap; // 0x0
};

struct FLightUpdate {
	ULightComponent* Light; // 0x0
	float Multiplier; // 0x8
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

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FTransactionEventData {
	FString TransactionType; // 0x0
	FString TransactionSource; // 0x10
	FString SourceId; // 0x20
	int32_t SourceTier; // 0x30
	FString currencyType; // 0x38
	int32_t CurrencyAmount; // 0x48
	int32_t CurrencyBalance; // 0x4c
	int32_t LevelAchieved; // 0x50
	int32_t Prestige; // 0x54
	FString ItemIDAcquired; // 0x58
	int32_t Rank; // 0x68
	FString SelectedCharacter; // 0x70
	bool TransactionTriggeredLevelUp; // 0x80
};

struct FRetentionReward {
	FString ItemId; // 0x0
	uint32_t amount; // 0x10
	ERewardItemType RewardType; // 0x14
	TMap<FName, FString> GameSpecificData; // 0x18
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

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t VertexCount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FCharacterAnimationDropdown : FRoleItemCategoryDropdown {
	UAnimationAsset* Animation; // 0x10
	FString AnimationPath; // 0x18
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x400
	FSlateSound SelectionChangeSlateSound; // 0x420
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
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

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0xc
	char bSupportUniformlyDistributedSampling : 1; // 0x10
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x18
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x28
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FStreamVideoUIData {
	FString VideoURL; // 0x0
	FString Language; // 0x10
	bool HasAudio; // 0x20
	int32_t ZOrderWidget; // 0x2c
	TSoftClassPtr<UObject> StreamVideoWidgetAsset; // 0x30
	TSoftObjectPtr<UMediaPlayer> MediaPlayerAsset; // 0x60
};

struct FSkuDetailsMessage {
	TMap<FString, FString> BundlePrices; // 0x0
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0x10
	FDelegate CustomDelegate; // 0x18
};

struct FActionPredictionKey {
	int32_t _keyValue; // 0x0
};

struct FMaterialNamedGroup {
	FString GroupName; // 0x0
	TArray<FMaterialMap> Maps; // 0x10
};

struct FInteractionPlayerProperties {
	FVector_NetQuantize AverageVelocityAtStart; // 0x0
	FVector_NetQuantize PlayerPositionAtStart; // 0xc
	FRotator PlayerRotationAtStart; // 0x18
	TWeakObjectPtr<ADBDPlayer> Requester; // 0x24
	FVector_NetQuantize SnapPositionAtStart; // 0x2c
	FRotator SnapRotationAtStart; // 0x38
	float SnapDistanceAtStart; // 0x44
	float SnapTimeAtStart; // 0x48
	bool ShouldSnapPosition; // 0x4c
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
};

struct FSlideShowDescription : FDBDTableRowBase {
	FName ID; // 0x8
	FText Overview; // 0x18
	FText Playstyle; // 0x30
	FString ImageFilePath; // 0x48
	TArray<EPerkCategory> PerkCategory; // 0x58
};

struct FArchivesJournal : FDBDTableRowBaseWithId {
	FText Title; // 0x18
	TArray<FArchivesVignettes> Vignettes; // 0x30
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

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool RoundFrameSizeToHardwareSize; // 0x3c
};

struct FPostGame_KillerAnalytics : FPostGameAnalyticsBase {
	int32_t Brutality; // 0xe0
	int32_t Deviousness; // 0xe4
	int32_t Hunter; // 0xe8
	int32_t Sacrifice; // 0xec
	int32_t EscapeesCount; // 0xf0
	int32_t SacrificedCount; // 0xf4
	int32_t KilledCount; // 0xf8
	int32_t DisconnectCount; // 0xfc
	int32_t BotCount; // 0x100
	int32_t TimeOpenGate; // 0x104
	FString SurvivorSpawningPosition; // 0x108
	int32_t GeneratorsDone; // 0x118
	FString EGS_starter; // 0x120
	float EGS_time; // 0x130
	float EGS_duration; // 0x134
	int32_t EGS_sacrifice; // 0x138
	bool EGS_reachEnd; // 0x13c
	bool UsedController; // 0x13d
	bool UsedKeyboard; // 0x13e
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x10
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0xc
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FOngoingScoreData {
	EDBDScoreTypes scoreType; // 0x0
	FGameplayTag scoreTypeTag; // 0x4
	float TimeSinceScore; // 0x10
	float ApplyScoreTimeout; // 0x14
	float AccumulatedPercent; // 0x18
	AActor* Target; // 0x20
	UObject* CustomObjectParameter; // 0x28
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FMatchmakingQueueAnalytics : FMatchmakingAnalytics {
	FString QueueStartTime; // 0xc8
	FString QueueEndTime; // 0xd8
	FString QueueResult; // 0xe8
	bool CrossPlayEnabled; // 0xf8
};

struct FCharacterAnimation {
	FName label; // 0x0
	FCharacterAnimationDropdown Data; // 0x10
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FActorVariationElements {
	ETileVariation Type; // 0x0
	TSoftClassPtr<UObject> Element; // 0x8
};

struct FDailyRitualDefinition : FDBDTableRowBase {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	FString IconPath; // 0x38
	FDailyRitualPossibleCharacters PossibleCharacters; // 0x48
	TArray<EDBDScoreTypes> TrackedEvents; // 0x78
	TArray<FGameplayTag> TrackedGameEvents; // 0x88
	TArray<FDailyRitualLevel> DifficultyLevels; // 0x98
	TSoftClassPtr<UObject> Evaluator; // 0xa8
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool defaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FDBDPerPlatformFloat {
	FPerPlatformFloat value; // 0x0
};

struct FInstantActionList {
	TArray<UBaseReversibleInstantActionHandler*> Actions; // 0x0
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FCharacterSavedInventoryData {
	uint32_t Version; // 0x0
	FName Name; // 0x4
};

struct FSubscriptionRewardTypeData {
	TSoftClassPtr<UObject> RewardItemWidget; // 0x0
};

struct FSourceEffectChorusSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FEditorAnimCollectionDisplay {
	TMap<FGameplayTag, FEditorCollectionMetadata> _taggedAnimSequencesMetadata; // 0x0
	TMap<FGameplayTag, FEditorCollectionMetadata> _taggedAnimBlendspacesMetadata; // 0x50
	TMap<FGameplayTag, FEditorCollectionMetadata> _taggedAnimSelectorsMetadata; // 0xa0
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UMetaData* SubClass; // 0x8
	TSoftClassPtr<UObject> SoftClass; // 0x10
	UObject* Object; // 0x40
	TWeakObjectPtr<UMetaData> WeakObject; // 0x48
	TSoftObjectPtr<UMetaData> SoftObject; // 0x50
	FSoftClassPath ClassPath; // 0x80
	FSoftObjectPath ObjectPath; // 0xa0
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType* Type; // 0x38
};

struct FScreenIndicatorViewData {
	FString ID; // 0x0
	bool IsInFront; // 0x10
	FVector2D ScreenPosition; // 0x14
	float Distance; // 0x1c
	UTexture2D* IndicatorIcon; // 0x20
	EHudScreenIndicatorType IndicatorType; // 0x28
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
	FDelegate TimelineFinishedFunc; // 0x64
	TWeakObjectPtr<UObject> PropertySetObject; // 0x78
	FName DirectionPropertyName; // 0x80
};

struct FCharacterTooltipViewData {
	FText DisplayName; // 0x0
	FText Biography; // 0x18
	FText DLCTitle; // 0x30
	int32_t Level; // 0x48
	int32_t Prestige; // 0x4c
	bool IsUnlocked; // 0x50
	bool IsNewInStore; // 0x51
	bool IsOwned; // 0x52
	bool IsAvailableInStore; // 0x53
	bool IsDLCPurchasable; // 0x54
	ECharacterDifficulty Difficulty; // 0x55
	bool IsEnabled; // 0x56
	FText CharacterDisabledMessage; // 0x58
};

struct FBaseTooltipData {
	FString Title; // 0x0
	FString Description; // 0x10
	FVector2D touchPosition; // 0x20
	TSoftClassPtr<UObject> LeftTooltipWidgetAsset; // 0x28
	TSoftClassPtr<UObject> RightTooltipWidgetAsset; // 0x58
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0xc
	char bCtrl : 1; // 0xc
	char bAlt : 1; // 0xc
	char bCmd : 1; // 0xc
	FKey Key; // 0x10
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
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

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FAtlantaRitualDifficulty {
	float Threshold; // 0x0
	float Tolerance; // 0x4
	float DisplayThreshold; // 0x8
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x20
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FForceSpawnTileData {
	FString Name; // 0x0
	int32_t matrixX; // 0x10
	int32_t matrixY; // 0x14
	int32_t Rotation; // 0x18
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FMapSoundsToAvoid {
	UPrimitiveComponent* Component; // 0x0
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0xc
};

struct FDailyRewardCalendarData {
	TArray<FDailyRewardData> DailyRewardList; // 0x0
	int32_t CurrentlyActiveDailyRewardIndex; // 0x10
	FDateTime CalendarStartDate; // 0x18
	FDateTime CalendarExpirationDate; // 0x20
	bool IsSet; // 0x28
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

struct FNiagaraFloat {
	float value; // 0x0
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x10
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FPlayerInfoData {
	FString characterName; // 0x0
	FString CharacterIconPath; // 0x10
	int32_t CharacterLevel; // 0x20
	int32_t PrestigeLevel; // 0x24
	bool CanPrestige; // 0x28
	FString playerName; // 0x30
	int32_t PlayerLevel; // 0x40
	int32_t DevotionLevel; // 0x44
	int32_t PlayerRank; // 0x48
	int32_t ActivePips; // 0x4c
	int32_t NumPipsToNextRank; // 0x50
	bool Ready; // 0x54
	bool IsSlasher; // 0x55
	bool ShowPortraitBorder; // 0x56
	bool HasActiveSubscription; // 0x57
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0xc
	char bNewShouldBeLoaded : 1; // 0x10
	char bNewShouldBeVisible : 1; // 0x10
	char bNewShouldBlockOnLoad : 1; // 0x10
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xd0
	TArray<FConstraint> ConstraintSetup; // 0xe8
	TArray<float> ConstraintWeights; // 0xf8
};

struct FTinkererUndetectableHitNearGeneratorAnalytics : FBasePerkAnalytics {
	FString HitSurvivorMirrorsId; // 0xb0
	FString AttackingSlasherMirrorsId; // 0xc0
};

struct FCameraFocusSettings {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
	FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8
	char bDrawDebugFocusPlane : 1; // 0x48
	FColor DebugFocusPlaneColor; // 0x4c
	char bSmoothFocusChanges : 1; // 0x50
	float FocusSmoothingInterpSpeed; // 0x54
	float FocusOffset; // 0x58
};

struct FItemIdDropdown {
	FName ItemId; // 0x0
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0xc
	char bApplyToChildren : 1; // 0xc
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FPendingInstantActionList {
	TArray<FPendingInstantAction> Actions; // 0x0
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FProfileLoadEventData {
	bool FirstTimePlaying; // 0x0
	FDateTime Timestamp; // 0x8
};

struct FCharacterInfoData {
	FCharacterSlotData SlotData; // 0x0
	FString Description; // 0x170
	TArray<FTeachableData> TeachablePerksData; // 0x180
	FInventorySlotData PowerData; // 0x190
	FKillerAttributesData KillerAttributesData; // 0x288
	bool IsKiller; // 0x294
	bool IsEnabled; // 0x295
};

struct FRegion {
	FName Region; // 0x0
	FString IP; // 0x10
};

struct FGenderViewSetting {
	FRoleItemCategoryDropdown RoleItemCategory; // 0x0
	EGender Gender; // 0xc
	FScreenshotViewSetting Settings; // 0x10
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x10
	FExpressionInput Input; // 0x18
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FPreLevelGenerationModifierProperties : FDBDTableRowBase {
	FName modifierID; // 0x8
	EPreLevelGenerationModifierType modifierType; // 0x14
	EKillerAbilities KillerAbiliy; // 0x15
	float ModifierValue; // 0x18
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FBlinkParams {
	FTransform TargetTransform; // 0x0
	float Duration; // 0x30
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FRankTooltipData : FBaseTooltipData {
	EPlayerRole CurrentPlayerRole; // 0x98
	FPlayerRoleRankData SurvivorRankData; // 0x9c
	FPlayerRoleRankData KillerRankData; // 0xac
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse response; // 0xc
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x10
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FEffectsLocatorTargets {
	AActor* TargetActorClass; // 0x0
};

struct FAnimNode_SplineIK : FAnimNode_SkeletalControlBase {
	FBoneReference StartBone; // 0xd0
	FBoneReference EndBone; // 0xe4
	ESplineBoneAxis BoneAxis; // 0xf8
	bool bAutoCalculateSpline; // 0xf9
	int32_t PointCount; // 0xfc
	TArray<FTransform> ControlPoints; // 0x100
	float Roll; // 0x110
	float TwistStart; // 0x114
	float TwistEnd; // 0x118
	FAlphaBlend TwistBlend; // 0x120
	float Stretch; // 0x150
	float Offset; // 0x154
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
};

struct FPurchaseCurrencyData {
	ECurrencyType currencyType; // 0x8
	int32_t Price; // 0xc
	float DiscountPercentage; // 0x10
	bool IsAffordable; // 0x14
};

struct FTargetFocusTimer {
	ACamperPlayer* _camper; // 0x0
	FDBDTimer _cooldownTimer; // 0x8
	float _totalTime; // 0x30
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FLoadingImagesData : FDBDTableRowBase {
	FName ID; // 0x8
	TArray<TSoftObjectPtr<UPaperSprite>> Images; // 0x18
	TArray<FLoadingInfoData> InfoData; // 0x28
	bool IsAvailableForSurvivor; // 0x38
	bool IsAvailableForKiller; // 0x39
	bool IsGenericImages; // 0x3a
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
};

struct FPlayerStateData {
	int32_t CharacterLevel; // 0x0
	FName EquipedFavorId; // 0x4
	TArray<FName> EquipedPerkIds; // 0x10
	TArray<int32_t> EquipedPerkLevels; // 0x20
	EGameState _playerGameState; // 0x30
	bool _isEscapeHatch; // 0x31
	int32_t _prestigeLevel; // 0x34
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

struct FShopTransactionItemCustomData {
	FShopTransactionItemProducts productsReceived; // 0x0
	FString transactionName; // 0x10
	FString TransactionType; // 0x20
};

struct FRoleGenderViewSetting {
	FName label; // 0x0
	FRoleDropdown RoleDropdown; // 0xc
	EGender Gender; // 0xe
	FScreenshotViewSetting Settings; // 0x10
};

struct FK25ChainAnchorAnimationData {
	float ChainPullAngle; // 0x0
	float ChainWeight; // 0x4
	float ChainHeight; // 0x8
	bool HasChainAttached; // 0xc
	bool IsChainBeingRemoved; // 0xd
	TWeakObjectPtr<AK25Chain> AttachedChain; // 0x10
};

struct FPerformanceChartingAnalytics : FUniquelyIdentifiedAnalytic {
	FString Scenario; // 0x98
	FString Theme; // 0xa8
	FString map_name; // 0xb8
	int32_t tile_spawn_count; // 0xc8
	int32_t Seed; // 0xcc
	FString match_id; // 0xd0
	FString character_name; // 0xe0
	FString cpu_name; // 0xf0
	FString gpu_name; // 0x100
	FString Resolution; // 0x110
	int32_t graphics_quality_level; // 0x120
	FString hitch_times; // 0x128
	float target_30_fps; // 0x138
	float target_60_fps; // 0x13c
	float target_120_fps; // 0x140
	float measured_perf_time; // 0x144
	float mvp; // 0x148
	float avg_fps; // 0x14c
	float hitches_per_minute; // 0x150
	float avg_hitch; // 0x154
	float frame_time_avg; // 0x158
	float frame_time_max; // 0x15c
	float frame_time_min; // 0x160
	float game_thread_avg; // 0x164
	float game_thread_hitches_per_min; // 0x168
	float game_thread_bound_frames; // 0x16c
	float render_thread_avg; // 0x170
	float render_thread_hitches_per_min; // 0x174
	float render_thread_bound_frames; // 0x178
	float rhi_thread_avg; // 0x17c
	float rhi_thread_hitches_per_min; // 0x180
	float rhi_thread_bound_frames; // 0x184
	float gpu_avg; // 0x188
	float gpu_hitches_per_min; // 0x18c
	float gpu_bound_frames; // 0x190
	float draw_calls_avg; // 0x194
	float draw_calls_max; // 0x198
	float draw_calls_min; // 0x19c
	float drawn_prims_avg; // 0x1a0
	float drawn_prims_max; // 0x1a4
	float drawn_prims_min; // 0x1a8
	float cpu_memory_peak; // 0x1ac
	float cpu_memory_used; // 0x1b0
	float streaming_memory_peak; // 0x1b4
	float streaming_memory_used; // 0x1b8
	float physical_memory_peak; // 0x1bc
	float physical_memory_used; // 0x1c0
	FString texturegroups_guid; // 0x1c8
};

struct FBuyCurrencyMessage {
	FString ItemId; // 0x0
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FSubstitutionElements {
	TSoftClassPtr<UObject> _elementToReplace; // 0x0
	TSoftClassPtr<UObject> _elementToReplaceWith; // 0x30
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x48
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60
};

struct FEmblemProgressionData {
	FString ProgressionText; // 0x0
	float ProgressionPercent; // 0x10
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
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

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0xc
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FRewardWrapperViewData {
	ERewardType RewardType; // 0x0
	FCharacterRewardViewData CharacterRewardViewData; // 0x8
	FCurrencyProgressionRewardViewData CurrencyProgressionRewardViewData; // 0xa0
	FCustomizationRewardViewData CustomizationRewardViewData; // 0x188
};

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
	TMap<FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20
};

struct FBloodwebNodesPerRingDistribution : FDBDTableRowBase {
	int32_t MinCount; // 0x8
	int32_t MaxCount; // 0xc
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
	FName MyBoneName; // 0x84
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0xb8
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

struct FGameplayElementAddition {
	TSoftClassPtr<UObject> _elementToAdd; // 0x0
	EGameplayElementType _spawnerType; // 0x30
	int32_t _numberToAdd; // 0x34
	bool _numberToAddAffectedByOffering; // 0x38
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x14
	FGuid ExpressionGUID; // 0x18
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FPartyMatchmakingSettings {
	TArray<FString> _playerIds; // 0x8
	EMatchmakingState _matchmakingState; // 0x18
	int64_t _startMatchmakingDateTimestamp; // 0x20
	bool _isInFinalCountdown; // 0x28
};

struct FInteractionArray {
	TArray<TWeakObjectPtr<UInteractionDefinition>> _interactions; // 0x0
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FAtlantaFreeTicketUIData : FItemData {
	FSlateColor IconColor; // 0x1d0
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x14
	FMeshUVChannelInfo UVChannelData; // 0x20
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x20
	FVectorCurve RotationCurve; // 0x1c0
	FVectorCurve ScaleCurve; // 0x360
};

struct FFootStep {
	UDecalComponent* Decal; // 0x0
};

struct FInvalidLoadoutAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t SlasherPerkCount; // 0x98
	int32_t PowerAddonCount; // 0x9c
	int32_t CamperPerkCount; // 0xa0
	int32_t ItemAddonCount; // 0xa4
	FString CallingFunctionName; // 0xa8
	int32_t characterId; // 0xb8
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor defaultValue; // 0x1c
};

struct FAtlantaTutorialTallyData {
	bool IsKiller; // 0x0
	bool FirstTimeCompleted; // 0x1
	int32_t BloodpointsScore; // 0x4
	int32_t AuricCells; // 0x8
	int32_t FearTokens; // 0xc
	TArray<FName> Characters; // 0x10
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FFloat_NetQuantize8 {
	float _value; // 0x0
};

struct FStoreFeaturedBannerData {
	FText Title; // 0x8
	FText subtitle; // 0x20
	FString ImagePath; // 0x38
	FString AssociatedDlcId; // 0x48
	FString AssociatedCombinedItemId; // 0x58
	FString AssociatedCombinedOutfitId; // 0x68
	ETextBannerPosition TextPosition; // 0x78
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FCharmIdSlot {
	int8_t SlotIndex; // 0x0
	FName CharmId; // 0x4
};

struct FGamePersistentData {
	int32_t PlayerCount; // 0x0
	int32_t spectatorCount; // 0x4
	FGamePresetData GamePresetData; // 0x8
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0xc
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x1c
	FPoseLink InputPose; // 0x28
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
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

struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x2b0
	FSlateBrush ActiveBrush; // 0x340
	FSlateBrush ColorOverlayTabBrush; // 0x3d0
	FSlateBrush ColorOverlayIconBrush; // 0x460
	FSlateBrush ForegroundBrush; // 0x4f0
	FSlateBrush HoveredBrush; // 0x580
	FSlateBrush ContentAreaBrush; // 0x610
	FSlateBrush TabWellBrush; // 0x6a0
	FMargin TabPadding; // 0x730
	float OverlapWidth; // 0x740
	FSlateColor FlashColor; // 0x748
};

struct FAtlantaRitualSetIndex {
	int32_t Index; // 0x0
	FString ritualType; // 0x8
};

struct FSessionServicePing {
	FString UserName; // 0x0
};

struct FCheatValidatedAnalytics : FUniquelyIdentifiedAnalytic {
	FString Location; // 0x98
	FString NetMode; // 0xa8
	FString Requester; // 0xb8
	FString Command; // 0xc8
	bool Validated; // 0xd8
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FSnappingData {
	bool DoSnapPosition; // 0x0
	bool DoSnapRotation; // 0x1
	bool DoSnapRoll; // 0x2
	bool useZCoord; // 0x3
	bool sweepOnFinalSnap; // 0x4
	FVector targetPosition; // 0x8
	FRotator TargetRotation; // 0x14
	float Duration; // 0x20
};

struct FCharacterDescription : FDBDTableRowBase {
	int32_t characterIndex; // 0x8
	EPlayerRole Role; // 0xc
	ECharacterDifficulty Difficulty; // 0xd
	FText DisplayName; // 0x10
	FText BackStory; // 0x28
	FText Biography; // 0x40
	FName IconFilePath; // 0x58
	UTexture2D* HudIcon; // 0x68
	FName BackgroundImagePath; // 0x70
	TArray<FCustomizedMeshPart> CustomizationDescription; // 0x80
	FString ChapterDlcId; // 0x90
	TArray<FString> AdditionalDlcIds; // 0xa0
	bool AvailableIfDlcInstalled; // 0xb0
	FName IdName; // 0xb4
	FName DebugName; // 0xc0
	bool IsInChunk0; // 0xcc
	bool IsAvailableInNonViolentBuild; // 0xcd
	bool IsAvailableInAtlantaBuild; // 0xce
	uint32_t PlatformExclusiveFlag; // 0xd0
	TSoftClassPtr<UObject> GamePawn; // 0xd8
	TSoftClassPtr<UObject> MenuPawn; // 0x108
	FName DefaultItem; // 0x138
	EGender Gender; // 0x144
	TArray<EKillerAbilities> KillerAbilities; // 0x148
	FDataTableProxy TunableDB; // 0x158
	EKillerHeight KillerHeight; // 0x198
	FSlideShowDescription SlideShowDescriptions; // 0x1a0
	bool HideStoreCustomizations; // 0x208
	TArray<FName> CustomizationCategories; // 0x210
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector targetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x20
	ESnapshotSourceMode Mode; // 0x60
};

struct FPlayerSavedProfileDataShared {
	FString playerName; // 0x0
	int32_t SelectedCamperIndex; // 0x10
	int32_t SelectedSlasherIndex; // 0x14
	TArray<FName> SelectedCharacterCustomization; // 0x18
	TArray<FCharmIdSlot> SelectedCharacterCharms; // 0x28
	int32_t CamperStreak; // 0x38
	bool ShowPortraitBorder; // 0x3c
	bool HasActiveSubscription; // 0x3d
	FString PlatformId; // 0x40
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FKillerItemProperty {
	TSoftClassPtr<UObject> Object; // 0x0
	UCurveFloat* Population; // 0x30
	EGameplayElementType _gameplayElementType; // 0x38
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
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

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FPlayerHitCosmeticParams {
	TWeakObjectPtr<APawn> Attacker; // 0x0
	TWeakObjectPtr<ACamperPlayer> Target; // 0x8
	EAttackType attackType; // 0x10
	bool CausedKO; // 0x11
	bool IsWeaponHit; // 0x12
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x14
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float startPosition; // 0x8
	float EndPosition; // 0xc
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FMatchmakingApproveLoginAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t CurrentPlayers; // 0x98
	bool success; // 0x9c
	FString Error; // 0xa0
	FString JoiningUserID; // 0xb0
};

struct FShopTransactionItemProducts {
	TArray<FShopTransactionItem> Items; // 0x0
};

struct FGameEventData {
	ADBDPlayer* Instigator; // 0x0
	AActor* Target; // 0x8
	float CustomValue; // 0x10
	UObject* CustomObjectParameter; // 0x18
	int32_t CustomIntValue; // 0x20
};

struct FLandingPageTabData {
	FText DefaultText; // 0x0
	TScriptInterface<ISlateTextureAtlasInterface> DefaultImage; // 0x18
	FSlateColor BannerBackgroudColor; // 0x28
	bool IsButtonEnabled; // 0x50
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x1c
	FName FloatPropertyName; // 0x28
};

struct FCrowdChoiceOnGameRoundStartedAnalytics : FUniquelyIdentifiedAnalytic {
	FString PollId; // 0x98
	FString MatchID; // 0xa8
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
	FLevelSequenceSnapshotSettings Settings; // 0xa0
	ULevelSequence* ActiveShot; // 0xb0
	FMovieSceneSequenceID ShotID; // 0xb8
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x58
	EMovieSceneBlendType BlendType; // 0xe8
};

struct FLoadingImagesHintInfo {
	FText Title; // 0x0
	FText Description; // 0x18
	FSlateBrush Icon; // 0x30
	bool IsAvailableForKiller; // 0xc0
	bool IsAvailableForSurvivor; // 0xc1
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x10
	FText Description; // 0x28
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FNavLinkInteractPlayerSetup {
	EPawnInputPressTypes Input; // 0x0
	TArray<FString> InteractionIds; // 0x8
	FAITunableParameter InputTimeDeviationInChase; // 0x18
};

struct FPowerBundleViewData {
	FPowerViewData Power; // 0x0
	FAddonViewData Addon1; // 0x88
	FAddonViewData Addon2; // 0xe8
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

struct FSpecialEventCinematicData {
	FDateTime StartTime; // 0x0
	FName VideoThumbnailId; // 0x8
	FString VideoIconPath; // 0x18
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FExternalTexture {
	FString Resource; // 0x0
	UTexture* Texture; // 0x10
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x20
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x2c
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x98
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
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

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FMovieSceneSequenceLoopCount {
	int32_t value; // 0x0
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xb0
	int32_t VisibilityId; // 0xe0
	UPrimitiveComponent* LODParent; // 0xe8
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x58
};

struct FPlayerHUDInfos : FDBDTableRowBase {
	EPlayerRole Role; // 0x8
	TSoftClassPtr<UObject> HUDClass; // 0x10
	FSoftObjectPath TouchInterfaceName; // 0x40
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FInteractionProficiencyProperties : FDBDTableRowBase {
	FName ProficiencyID; // 0x8
	TSoftClassPtr<UObject> ProficiencyBlueprint; // 0x18
	TArray<float> BuffLevelThresholds; // 0x48
	TArray<float> DebuffLevelThresholds; // 0x58
	bool HasLevels; // 0x68
	FString IconFilePath; // 0x70
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FAssetLibraryLoader {
	UAssetLibrary* AssetLibrary; // 0x0
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

struct FAwardedScores {
	TArray<FAwardedScore> Array; // 0x0
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FInboxMessageElapsedTime {
	int32_t ElapsedTime; // 0x0
	EInboxMessageTimeUnit TimeUnit; // 0x4
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	float startPosition; // 0x44
	UBlendSpaceBase* BlendSpace; // 0x48
	UBlendSpaceBase* PreviousBlendSpace; // 0xd8
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FDailyRewardData {
	EAtlantaRewardType RewardType; // 0x0
	int32_t CurrencyAmount; // 0x4
	FString IconPath; // 0x8
	FString ParentIconPath; // 0x18
	FString ItemName; // 0x28
	int32_t Index; // 0x38
	bool IsMarkedSpecial; // 0x3c
	EItemRarity ItemRarity; // 0x3d
	EUMGDailyRewardWidgetState State; // 0x3e
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
};

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FSectionLenghtsProperties {
	EDirection Direction; // 0x0
	int32_t Lenght; // 0x4
};

struct FSlateChildSize {
	float value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0xc
	UStruct* PropertyScope; // 0x10
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FCurrencyProgressionTooltipViewData {
	bool IsCurrency; // 0x0
	FText Title; // 0x8
	FText Description; // 0x20
	FText EndTiming; // 0x38
	TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial; // 0x50
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

struct FEdGraphPinType {
	FName PinCategory; // 0x0
	FName PinSubCategory; // 0xc
	TWeakObjectPtr<UObject> PinSubCategoryObject; // 0x18
	FSimpleMemberReference PinSubCategoryMemberReference; // 0x20
	FEdGraphTerminalType PinValueType; // 0x48
	EPinContainerType ContainerType; // 0x6c
	char bIsArray : 1; // 0x6d
	char bIsReference : 1; // 0x6d
	char bIsConst : 1; // 0x6d
	char bIsWeakPointer : 1; // 0x6d
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x14
	FGuid ExpressionGUID; // 0x24
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x10
};

struct FK24StatusData {
	bool IsContaminated; // 0x0
};

struct FRankResetStartingPips {
	int32_t NewPipAmount; // 0x0
};

struct FCustomAnimData {
	TSoftClassPtr<UObject> MenuAnimationBlueprint; // 0x0
	TSoftClassPtr<UObject> InGameAnimationBlueprint; // 0x30
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

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FDiscernibleCharacter {
	ACharacter* _character; // 0x0
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

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
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

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FAISkillPerk {
	FDataTableDropdown perkId; // 0x0
	UAISkill* Skill; // 0x30
};

struct FDependencyElementSubstitutions : FElementSubstitutions {
	TArray<FSubstitutionElements> _replacements; // 0x10
	ETileSpawnPointType _type; // 0x20
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FNativeBlockIndicatorData {
	bool IsBlockActive; // 0x0
	bool IsBlockUpdating; // 0x1
	float CurrentBlockFade; // 0x4
	UCurveFloat* FadeCurve; // 0x8
	UActorComponent* BlockIndicator; // 0x10
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FActionOnFriend {
	EActionOnFriendType ActionToProceed; // 0x0
	FAtlantaFriendUIData AtlantaFriendDataToUpdate; // 0x8
	UUMGBaseFriendListElement* ActionOwner; // 0x70
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FPlayerCapsuleQueryParams {
	ADBDPlayer* Player; // 0x0
	TSet<AActor*> ignoreActors; // 0x18
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FCharmCategorySetting {
	FName label; // 0x0
	ECharmCategory CharmCategory; // 0xc
	FScreenshotViewSetting Settings; // 0x10
};

struct FGameConsoleLogAnalytics : FUniquelyIdentifiedAnalytic {
	FString GameConsoleLog; // 0x98
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
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
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Translation[0x2]; // 0x58
	FMovieSceneFloatChannel Rotation; // 0x198
	FMovieSceneFloatChannel Scale[0x2]; // 0x238
	FMovieSceneFloatChannel Shear[0x2]; // 0x378
	EMovieSceneBlendType BlendType; // 0x4b8
	FMovieScene2DTransformMask Mask; // 0x4bc
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
	FSlateBrush LeftShadowBrush; // 0x128
	FSlateBrush RightShadowBrush; // 0x1b8
};

struct FAnimNode_CCDIK : FAnimNode_SkeletalControlBase {
	FVector EffectorLocation; // 0xd0
	EBoneControlSpace EffectorLocationSpace; // 0xdc
	FBoneSocketTarget EffectorTarget; // 0xe0
	FBoneReference TipBone; // 0x150
	FBoneReference RootBone; // 0x164
	float Precision; // 0x178
	int32_t MaxIterations; // 0x17c
	bool bStartFromTail; // 0x180
	bool bEnableRotationLimit; // 0x181
	TArray<float> RotationLimitPerJoints; // 0x188
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x28
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FQueueAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t TimesQueuedSurvivor; // 0x98
	int32_t TimesQueuedKiller; // 0x9c
	int32_t MatchesAsSurvivor; // 0xa0
	int32_t MatchesAsKiller; // 0xa4
	FString SelectedCountry; // 0xa8
	FString playerName; // 0xb8
	bool FirstTimePlaying; // 0xc8
	int32_t CumulativeMatches; // 0xcc
	int32_t CumulativeMatchesAsSurvivor; // 0xd0
	int32_t CumulativeMatchesAsKiller; // 0xd4
	FString LastMatchTimestamp; // 0xd8
	FString SessionStartTimestamp; // 0xe8
	FString SessionEndTimestamp; // 0xf8
	FString LastSessionTimestamp; // 0x108
	int32_t CumulativeSessions; // 0x118
	float CumulativePlaytime; // 0x11c
	float TimeInCharacterMenu; // 0x120
	float TimeInBloodwebMenu; // 0x124
	float TimeInLoadoutMenu; // 0x128
	float TimeInCustomizationMenu; // 0x12c
	float TimeInFearMarket; // 0x130
	float TimeInTallyScreen; // 0x134
	float TimeInGameMatch; // 0x138
	float TimeInHelpMenu; // 0x13c
	float TimeInOfflineLobby; // 0x140
	float TimeInOfflineLobbySurvivorGroup; // 0x144
	float TimeInOnlineLobby; // 0x148
	float TimeInOnlineLobbySurvivorGroup; // 0x14c
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FMatchmakingSearchCompleteAnalytics : FUniquelyIdentifiedAnalytic {
	bool success; // 0x98
	int32_t NumMatches; // 0x9c
	bool UsedFallback; // 0xa0
	FString ConnectingToUser; // 0xa8
	FString SearchParams; // 0xb8
	FString SearchResultSettings; // 0xc8
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x1c
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0xc
};

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FRarityDistributionValue : FDBDTableRowBase {
	int32_t InnerRing; // 0x8
	int32_t MiddleRing; // 0xc
	int32_t OuterRing; // 0x10
};

struct FEventItemsContentTypeUIData {
	EEventItemContentType ContentType; // 0x0
	bool NeedRemoveRarityBackground; // 0x1
	bool UseDefaultRarityBackgroundColor; // 0x2
	FSlateColor DefaultRarityBackgroundColor; // 0x8
	TSoftObjectPtr<UTexture2D> BackgroundTexture; // 0x30
	TSoftObjectPtr<UTexture2D> RarityBackgroundTexture; // 0x60
};

struct FReportAnalytics : FUniquelyIdentifiedAnalytic {
	FString ClientIdTransmitter; // 0x98
	FString ClientIdReceiver; // 0xa8
	FString MirrorsIdTransmitter; // 0xb8
	FString MirrorsIdReceiver; // 0xc8
	EPlayerRole RoleTransmitter; // 0xd8
	EPlayerRole RoleReceiver; // 0xd9
	FString MatchID; // 0xe0
	FString gameMode; // 0xf0
	FString ReportType; // 0x100
	FString ReportCategory; // 0x110
	FString Comments; // 0x120
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0xc
	char bIsVisible : 1; // 0x18
};

struct FDataTableProxy {
	TSoftObjectPtr<UDataTable> AssetPtr; // 0x0
	UDataTable* _dataTable; // 0x30
};

struct FSaveGameSummaryPlayerStatsAnalytics : FUniquelyIdentifiedAnalytic {
	FString OwnedPerks; // 0x98
	FString PlayerStatsProgression; // 0xa8
	int32_t BloodwebPoints; // 0xb8
	int64_t CumulativePlaytime; // 0xc0
};

struct FKrakenRequestAnalytics : FUniquelyIdentifiedAnalytic {
	FString KrakenUrl; // 0x98
	FString Method; // 0xa8
	FString Route; // 0xb8
	FString Status; // 0xc8
	int32_t ResponseCode; // 0xd8
	int32_t ProviderError; // 0xdc
	uint32_t AttemptCount; // 0xe0
	bool success; // 0xe4
	bool CanRetry; // 0xe5
	bool WillRetry; // 0xe6
	FString Country; // 0xe8
	float AttemptElapsedTime; // 0xf8
	float TotalElapsedTime; // 0xfc
	float TotalElapsedTimeCapped; // 0x100
};

struct FNotifTutorialPopupViewData {
	FString Title; // 0x0
	FString Description; // 0x10
	TSoftObjectPtr<UTexture2D> Icon; // 0x20
	TSoftObjectPtr<UTexture2D> Image; // 0x50
};

struct FArchiveNodeDefinition : FDBDTableRowBaseWithId {
	FText DisplayName; // 0x18
	FText Description; // 0x30
	FString IconPath; // 0x48
	EPlayerRole PlayerRole; // 0x58
	FName CinematicId; // 0x5c
};

struct FPartyPrivacySettings {
	EPartyType PartyType; // 0x0
	EPartyInviteRestriction PartyInviteRestriction; // 0x1
	bool bOnlyLeaderFriendsCanJoin; // 0x2
};

struct FAnalogCursorData : FDBDTableRowBase {
	EAnalogCursorDataType Type; // 0x8
	float value; // 0xc
	bool ScalesWithDPI; // 0x10
};

struct FGameplay_PigKillerAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t AmbushHitCount; // 0xa8
	int32_t RbtKilledCount; // 0xac
	int32_t Rbt1GeneratorCount; // 0xb0
	int32_t Rbt2GeneratorCount; // 0xb4
	int32_t Rbt3GeneratorCount; // 0xb8
	int32_t Rbt4GeneratorCount; // 0xbc
	int32_t Rbt5GeneratorCount; // 0xc0
	float CrouchDuration; // 0xc4
	int32_t RbtExitKill; // 0xc8
	int32_t RbtHookKill; // 0xcc
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FEmblemProgressionDescriptionByQuality {
	EEmblemQuality EmblemQuality; // 0x0
	FText Description; // 0x8
};

struct FChannelDefinition {
	FName ChannelName; // 0x0
	FName ClassName; // 0xc
	UObject* ChannelClass; // 0x18
	int32_t StaticChannelIndex; // 0x20
	bool bTickOnCreate; // 0x24
	bool bServerOpen; // 0x25
	bool bClientOpen; // 0x26
	bool bInitialServer; // 0x27
	bool bInitialClient; // 0x28
};

struct FNiagaraSpawnInfo {
	int32_t count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FRTMAnalytics : FUniquelyIdentifiedAnalytic {
	FString RTMType; // 0x98
	uint32_t RTMSize; // 0xa8
	FString CurrentGameFlowStep; // 0xb0
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
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

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FSurfaceTypeName : FDBDTableRowBase {
	FName Name; // 0x8
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0xc
};

struct FAnimationMapping : FDBDTableRowBase {
	TSoftObjectPtr<UAnimMontage> MontageAsset; // 0x8
	TArray<FName> Tags; // 0x38
	UAnimMontage* _montage; // 0x48
	bool _loadAttempted; // 0x50
};

struct FPotentialRandomizableSpawnerPool {
	TArray<FRandomizableActorSpawner> SpawnerPool; // 0x0
};

struct FSavedCharacterLevelDataV7 {
	int32_t Level; // 0x0
	bool HasPerksBeenSelected; // 0x4
	bool HasPerkSelectionBeenGenerated; // 0x5
	TArray<FAssignedPerkPropertiesV7> PerkSelection; // 0x8
};

struct FCrowdChoiceSummaryResultAnalytics : FUniquelyIdentifiedAnalytic {
	FString PollId; // 0x98
	FString PollType; // 0xa8
	FString Status; // 0xb8
	float PollDuration; // 0xc8
	TArray<float> VoteTimestamps; // 0xd0
	TArray<int32_t> NewVotesPerTimestampInterval; // 0xe0
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x10
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FAtlantaOnBoardingData : FDBDTableRowBase {
	FName onBoardingID; // 0x8
	FText Title; // 0x18
	FText Description; // 0x30
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x1c
	FName Name; // 0x20
	UNiagaraEmitter* Instance; // 0x30
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FGameBotsData {
	TArray<FGameBot> _bots; // 0x0
};

struct FArchivesVignetteEntry : FDBDTableRowBase {
	FText Title; // 0x8
	FText Text; // 0x20
	bool HasAudio; // 0x38
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FCurrencyUIDataRow : FDBDTableRowBase {
	ECurrencyType currencyType; // 0x8
	FCurrencyProgressionUIData CurrencyProgressionUIData; // 0x10
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FLevelStreamingWrapper {
	ULevelStreaming* StreamingLevel; // 0x0
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0xc
};

struct FFallOutOfWorldAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString FallOutMirrorsId; // 0xa8
	float X; // 0xb8
	float Y; // 0xbc
	float Z; // 0xc0
	FString TileName; // 0xc8
	float ElapsedMatchTime; // 0xd8
};

struct FMatchmakingJoinSessionAnalytics : FUniquelyIdentifiedAnalytic {
	FString Log; // 0x98
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x14
};

struct FPrimaryAssetTypeInfo {
	FName PrimaryAssetType; // 0x0
	TSoftClassPtr<UObject> AssetBaseClass; // 0x10
	UObject* AssetBaseClassLoaded; // 0x40
	bool bHasBlueprintClasses; // 0x48
	bool bIsEditorOnly; // 0x49
	TArray<FDirectoryPath> Directories; // 0x50
	TArray<FSoftObjectPath> SpecificAssets; // 0x60
	FPrimaryAssetRules Rules; // 0x70
	TArray<FString> AssetScanPaths; // 0x80
	bool bIsDynamicAsset; // 0x90
	int32_t NumberOfAssets; // 0x94
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xa8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0
	TArray<float> PerInstanceSMCustomData; // 0x100
	int32_t InstancingRandomSeed; // 0x130
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float defaultValue; // 0x1c
};

struct FNamedTransform {
	FTransform value; // 0x0
	FName Name; // 0x30
};

struct FK26StatusData {
	bool IsCrowAttached; // 0x0
};

struct FBasePerkAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	float ElapsedMatchTime; // 0xa8
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
	FVector2D OffCenterProjectionOffset; // 0x580
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FPlayerRoleRankData {
	EPlayerRole PlayerRole; // 0x0
	int32_t Rank; // 0x4
	int32_t PipsRequiredForNextRank; // 0x8
	int32_t ActivePips; // 0xc
};

struct FPlayerLevelTooltipData : FBaseTooltipData {
	int32_t PlayerLevel; // 0x98
	int32_t PlayerPrestige; // 0x9c
	int32_t CurrentExperience; // 0xa0
	int32_t NextLevelExperience; // 0xa4
};

struct FDistanceTrackerCase {
	float _distanceToTrackSquared; // 0x18
	bool _inRange; // 0x1c
};

struct FTaggedAnimCollection {
	FGameplayTag Tag; // 0x0
	TSoftObjectPtr<UAnimCollection> AnimCollection; // 0x10
};

struct FPlayerStatusEffectUpdateAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t ElapsedMatchTime; // 0xa8
	int32_t NbOfConcurrentStatusEffects; // 0xac
	TArray<FString> StatusEffects; // 0xb0
};

struct FChainsawAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	TArray<FChainsawEventWhileCamping> DownSurvivorsWithChainsawWhileCampingEvents; // 0xa8
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FFranklinsDemiseConsumedItemAnalytics : FBasePerkAnalytics {
	FString PreviousOwnerSurvivorMirrorsId; // 0xb0
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FEmblemProgressionAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString EmblemId; // 0xa8
	float EmblemValue; // 0xb8
	FString EmblemQuality; // 0xc0
	TArray<FEmblemProgressionDetailsAnalytics> ProgressionDetails; // 0xd0
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0xc
	int32_t OutputPoseNodeIndex; // 0x18
	TArray<FName> InputPoseNames; // 0x20
	TArray<int32_t> InputPoseNodeIndices; // 0x30
	bool bImplemented; // 0x68
};

struct FLoadingInfoData {
	FText Title; // 0x0
	FText Description; // 0x18
	TSoftObjectPtr<UTexture2D> Icon; // 0x30
	bool IsAvailableForKiller; // 0x60
	bool IsAvailableForSurvivor; // 0x61
};

struct FPerkAcquisitionAnalytics : FUniquelyIdentifiedAnalytic {
	FString characterName; // 0x98
	FString perkId; // 0xa8
	FString PerkSource; // 0xb8
	FString Duplicate; // 0xc8
	int32_t PerkLevel; // 0xd8
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FMatchOptionAssetData {
	FText TextName; // 0x0
	TSoftObjectPtr<UPaperSprite> Icon; // 0x18
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
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

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
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

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x10
	UFunction* Function; // 0x20
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x28
};

struct FSpecialEventData : FDBDTableRowBase {
	FName EventId; // 0x8
	ECurrencyType currencyType; // 0x14
	FText EventName; // 0x18
	FString EventBannerLabel; // 0x30
	bool IsTrackedOnline; // 0x40
	bool UseSpecialEventLoadingScreen; // 0x41
	TArray<FSpecialEventObjectiveData> Objectives; // 0x48
	FColor ObjectOutlineColour; // 0x58
	FString LobbyName; // 0x60
	FString ShopName; // 0x70
	FName AudioStateSpecialEvent; // 0x80
	TSoftClassPtr<UObject> GameplayPlayerComponent; // 0x90
	TSoftClassPtr<UObject> GameplayStateComponent; // 0xc0
	TArray<FSpecialEventCinematicData> Cinematics; // 0xf0
	ESpecialEventGameMode gameMode; // 0x100
	bool UseEventEntryScreen; // 0x101
	FSpecialEventEntryPopupData EventEntryData; // 0x108
	ESpecialEventDependency EventDependency; // 0x170
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x98
	FSlateBrush ActiveFillBrush; // 0x128
	FSlateBrush InactiveFillBrush; // 0x1b8
	FSlateBrush ArrowsImage; // 0x248
	FSlateColor ForegroundColor; // 0x2d8
	FMargin TextPadding; // 0x300
};

struct FPakValidationAnalytics : FUniquelyIdentifiedAnalytic {
	FString ErrorType; // 0x98
	FString Filename; // 0xa8
	int32_t ChunkIndex; // 0xb8
	uint32_t ReceivedHash; // 0xbc
};

struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FTextBlockOverrideProperties {
	bool UseColor; // 0x0
	FSlateColor Color; // 0x8
	bool UseOpacity; // 0x30
	float Opacity; // 0x34
	bool UseSize; // 0x38
	int32_t Size; // 0x3c
};

struct FDBDOutlineRenderStrategySelector {
	AActor* _actorForStrategy; // 0x0
};

struct FLevelLoadingTimeoutAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString MapName; // 0xa8
	int32_t Seed; // 0xb8
	float TimeElapsed; // 0xbc
	FString LoadingStep; // 0xc0
};

struct FBaseStat {
	TArray<FStatModifier> _statModifiers; // 0x20
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t defaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FSaveDataV8 : FSaveDataBase {
	FString PlayerUID; // 0x10
	int32_t SelectedCamperIndex; // 0x20
	int32_t SelectedSlasherIndex; // 0x24
	TArray<FName> offerings; // 0x28
	bool FirstTimePlaying; // 0x38
	int32_t ConsecutiveMatchStreak; // 0x3c
	bool HasBeenGivenKillerTutorialEndReward; // 0x40
	bool HasBeenGivenSurvivorTutorialEndReward; // 0x41
	bool HasSeenBloodpointsOnboardingCurrencyPopup; // 0x42
	bool HasSeenAuricCellsOnboardingCurrencyPopup; // 0x43
	bool HasSeenIridescentShardsOnboardingCurrencyPopup; // 0x44
	uint64_t CurrentSeasonTicks; // 0x48
	int32_t LastConnectedCharacterIndex; // 0x50
	FString DisconnectPenaltyTime; // 0x58
	FString LastMatchEndTime; // 0x68
	FString LastMatchStartTime; // 0x78
	FString LastKillerMatchEndTime; // 0x88
	FString LastSurvivorMatchEndTime; // 0x98
	FString OngoingGameTime; // 0xa8
	int32_t CumulativeMatches; // 0xb8
	TArray<FKeyTupleBool> PageVisited; // 0xc0
	TArray<FKeyTupleBool> ChatVisible; // 0xd0
	int32_t CumulativeMatchesAsSurvivor; // 0xe0
	int32_t CumulativeMatchesAsKiller; // 0xe4
	int32_t CumulativeMatchesAsSurvivorNoFriends; // 0xe8
	int32_t CumulativeMatchesAsKillerNoFriends; // 0xec
	FDateTime LastMatchTimestamp; // 0xf0
	FDateTime LastSessionTimestamp; // 0xf8
	int32_t CumulativeSessions; // 0x100
	FString CumulativePlaytime; // 0x108
	TArray<FCharacterKeyTuple> CharacterData; // 0x118
	TArray<FName> OwnedCharms; // 0x128
	FSavedDailyRitualContainerV7 DailyRituals; // 0x138
	FSavedFearMarketOfferingInstanceV7 FearMarket; // 0x178
	FLegacySavedPlayerLoadoutData LastLoadout; // 0x1a8
	FConsoleUserSettings ConsoleUserSettings; // 0x240
	TArray<FSavedStatsDataV7> PlayerStatProgression; // 0x2f0
	TArray<FString> OwnedContent; // 0x300
	TArray<FSavedSpecialEventDataV7> SpecialEvent; // 0x310
	FLegacySavedBloodWebPersistentData BloodStoreKillers; // 0x320
	FLegacySavedBloodWebPersistentData BloodStoreSurvivors; // 0x360
	TArray<FKeyTupleBool> OnboardingCompleted; // 0x3a0
	bool IsCrossplayAllowed; // 0x3b0
	bool AutoDeclineFriendInvites; // 0x3b1
	bool HasBeginnerTooltipsBeenDisabledAtLevel; // 0x3b2
	bool ShowPortraitBorder; // 0x3b3
};

struct FWalletUpdateTracker {
	TMap<FString, int32_t> _walletChangeMap; // 0x0
};

struct FArchiveDefinition : FDBDTableRowBaseWithId {
	FText Title; // 0x18
	FText Description; // 0x30
	FString PurchasePassPicturePath; // 0x48
	FString PurchaseTierPicturePath; // 0x58
	FText PurchasePassPopupMessage; // 0x68
	FString StyleFrameLabel; // 0x80
	FString EventStoryLabel; // 0x90
};

struct FRefundUIData {
	TArray<FAtlantaRewardUIData> OriginalRewards; // 0x0
	FAtlantaRewardUIData Refund; // 0x10
	int32_t FragmentAmount; // 0x70
	int32_t FragmentRequiredAmount; // 0x74
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0xc
	FName PackagePath; // 0x18
	FName AssetName; // 0x24
	FName AssetClass; // 0x30
};

struct FAtlantaBaseEventsUIData {
	FString EventId; // 0x0
	FString Type; // 0x10
	FText Title; // 0x20
	FText Description; // 0x38
	FString CampaignName; // 0x50
	UTexture2DDynamic* Image; // 0x60
	int32_t EventPriority; // 0x68
	int32_t BannerPriority; // 0x6c
	FString DeepLink; // 0x70
	FDateTime StartDate; // 0x80
	FDateTime EndDate; // 0x88
	FDateTime DisplayStartDate; // 0x90
	FDateTime DisplayEndDate; // 0x98
	FDateTime BannerStartDate; // 0xa0
	FDateTime BannerEndDate; // 0xa8
	FDateTime HotStartDate; // 0xb0
	FDateTime HotEndDate; // 0xb8
	FDateTime NewStartDate; // 0xc0
	FDateTime NewEndDate; // 0xc8
	TArray<FString> RelatedItemsId; // 0xd0
	bool mustHideParticipateButton; // 0xe0
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0xc
};

struct FStoreMenuFlowAnalytics : FUniquelyIdentifiedAnalytic {
	FString EventTimestamp; // 0x98
	FString EventName; // 0xa8
	FString Data; // 0xb8
};

struct FTurn180Settings {
	char _settings; // 0x0
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

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FLogMirrorsAnalytics : FUniquelyIdentifiedAnalytic {
	FString LogMirrors; // 0x98
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FSavedSpecialEventDataV7 {
	FName EventId; // 0x0
	TArray<int32_t> SeenCinematics; // 0x10
	bool EventEntryScreenOpened; // 0x20
};

struct FClaimableInboxMessage {
	TArray<FClaimableInboxMessageData> Data; // 0x0
	EClaimableInboxMessageState State; // 0x10
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FPhysicalAnimationData {
	FName BodyName; // 0x0
	char bIsLocalSimulation : 1; // 0xc
	float OrientationStrength; // 0x10
	float AngularVelocityStrength; // 0x14
	float PositionStrength; // 0x18
	float VelocityStrength; // 0x1c
	float MaxLinearForce; // 0x20
	float MaxAngularForce; // 0x24
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x10
	ULevel* Level; // 0x40
	TArray<UObject*> ObjReferences; // 0xa8
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

struct FBloodwebNodeRarityCost : FDBDTableRowBase {
	EItemRarity Rarity; // 0x8
	int32_t Cost; // 0xc
};

struct FPromoPackSelectedItemData {
	UTexture2D* ItemTypeIcon; // 0x0
	FText ItemName; // 0x8
	FText ItemSubTitle; // 0x20
	FText ItemDescription; // 0x38
	UUMGPromoPackItemWidget* Widget; // 0x50
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FBeMaterialScalar {
	FName Name; // 0x0
	float Scalar; // 0xc
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
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

struct FBPAttachementSocketData {
	TSoftClassPtr<UObject> AttachementBlueprint; // 0x0
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x30
	FName SocketName; // 0x60
	TArray<FMaterialReplacerData> MaterialsMap; // 0x70
	FConditionalMaterialReplacer ConditionalMaterialReplacer; // 0x80
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0xc
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

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FAtlantaRitualContainer {
	TMap<FString, FAtlantaRitualSetArray> RitualsMap; // 0x0
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t defaultValue; // 0x38
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FRealCurve : FIndexedCurve {
	float defaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FLobbyPlayerStateInfoArray : FFastArraySerializer {
	TArray<FLobbyPlayerStateActorInfo> Players; // 0x108
	ALobbyBeaconState* ParentState; // 0x118
};

struct FMediaIOConnection {
	FMediaIODevice Device; // 0x0
	FName protocol; // 0x10
	EMediaIOTransportType TransportType; // 0x1c
	EMediaIOQuadLinkTransportType QuadTransportType; // 0x20
	int32_t PortIdentifier; // 0x24
};

struct FExecutionerStatusData {
	float AgonyProgress; // 0x0
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
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

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0xc
	FName VirtualBoneName; // 0x18
};

struct FBoolTrackKey {
	float Time; // 0x0
	char value : 1; // 0x4
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x14
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FScoreEventData {
	AActor* Target; // 0x0
	float PercentToAward; // 0x8
	UObject* CustomObjectParameter; // 0x10
};

struct FMapCoordAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	TArray<FMapCoordData> MapItem; // 0xa8
};

struct FCustomMatchTabConfig {
	int32_t ItemWidth; // 0x0
	int32_t ItemHeight; // 0x4
	int32_t row; // 0x8
	int32_t Column; // 0xc
	TSoftClassPtr<UObject> OptionButtonClass; // 0x10
};

struct FLegacySavedBloodwebNodeProperties {
	EBloodwebNodeContentType ContentType; // 0x0
	EItemRarity Rarity; // 0x1
	TArray<FString> Tags; // 0x8
};

struct FGenericTeamId {
	char TeamID; // 0x0
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

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FK26ProjectileStateDetails {
	FDBDTunableRowHandle VisualScaleX; // 0x0
	FDBDTunableRowHandle VisualScaleY; // 0x28
	FDBDTunableRowHandle VisualScaleZ; // 0x50
	FDBDTunableRowHandle HitboxScaleX; // 0x78
	FDBDTunableRowHandle HitboxScaleY; // 0xa0
	FDBDTunableRowHandle HitboxScaleZ; // 0xc8
	UStaticMesh* HitBoxStaticMesh; // 0xf0
	FLinearColor DebugColor; // 0xf8
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0xc
};

struct FTunableValue : FDBDTunableRowBase {
	float value; // 0x8
	float AtlantaOverriddenValue; // 0xc
	FString Description; // 0x10
	bool OverriddenInAtlanta; // 0x20
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0xc
};

struct FCharacterSavedProfileData {
	int32_t BloodWebLevel; // 0x0
	int32_t TimesConfronted; // 0x4
	TArray<FDateTime> PrestigeEarnedDates; // 0x8
	FBloodWebPersistentData BloodWebData; // 0x18
	FPlayerLoadoutData CharacterLoadoutData; // 0x58
	TArray<FName> CurrentCustomization; // 0xf0
	TArray<FCharmIdSlot> CurrentCharmCustomization; // 0x100
	TArray<FName> UniquePerksAdded; // 0x110
	TArray<FCharacterSavedInventoryData> InventoryData; // 0x120
	TArray<FSavedCharacterLevelData> CharacterLevelData; // 0x130
	TArray<FSavedStatsData> StatProgression; // 0x140
	int32_t PrestigeLevel; // 0x150
	int32_t CharacterExperience; // 0x154
};

struct FItemViewData : FBaseLoadoutPartViewData {
	bool IsEnergyTypeValid; // 0x58
	float EnergyLevel; // 0x5c
	int32_t count; // 0x60
	FKey InputKey; // 0x68
	bool ShowKeyPrompt; // 0x88
	bool IsLimitedItem; // 0x89
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x18
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float value; // 0xc
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	ELevelVisibility Visibility; // 0x20
	TArray<FName> LevelNames; // 0x28
};

struct FStoreBannersData : FDBDTableRowBase {
	FName BannerId; // 0x8
	FStoreFeaturedBannerData BannerData; // 0x18
	bool UseAsDefault; // 0x98
	EStoreBannerLocation DefaultLocation; // 0x99
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FPromoPackItemData {
	UTexture2D* ItemIcon; // 0x0
	FName ItemId; // 0x8
	EItemRarity ItemRarity; // 0x14
	int32_t amount; // 0x18
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

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FStartSequenceViewData {
	FString ThemeName; // 0x0
	FString MapName; // 0x10
	EThemeColorId ThemeColorId; // 0x20
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FSelectableTileSpawnPoint {
	FComponentReference ComponentReference; // 0x0
};

struct FAgonyDisplayFxEvent {
	FGameplayTag GameEvent; // 0x0
	EProtagonist Protagonist; // 0xc
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
	char RayTracingAO : 1; // 0x438
	int32_t RayTracingAOSamplesPerPixel; // 0x43c
	FLinearColor IndirectLightingColor; // 0x440
	float IndirectLightingIntensity; // 0x450
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x454
	int32_t RayTracingGIMaxBounces; // 0x458
	int32_t RayTracingGISamplesPerPixel; // 0x45c
	float ColorGradingIntensity; // 0x460
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
	float MotionBlurAmount; // 0x4a4
	float MotionBlurMax; // 0x4a8
	int32_t MotionBlurTargetFPS; // 0x4ac
	float MotionBlurPerObjectSize; // 0x4b0
	float LPVIntensity; // 0x4b4
	float LPVVplInjectionBias; // 0x4b8
	float LPVSize; // 0x4bc
	float LPVSecondaryOcclusionIntensity; // 0x4c0
	float LPVSecondaryBounceIntensity; // 0x4c4
	float LPVGeometryVolumeBias; // 0x4c8
	float LPVEmissiveInjectionIntensity; // 0x4cc
	float LPVDirectionalOcclusionIntensity; // 0x4d0
	float LPVDirectionalOcclusionRadius; // 0x4d4
	float LPVDiffuseOcclusionExponent; // 0x4d8
	float LPVSpecularOcclusionExponent; // 0x4dc
	float LPVDiffuseOcclusionIntensity; // 0x4e0
	float LPVSpecularOcclusionIntensity; // 0x4e4
	EReflectionsType ReflectionsType; // 0x4e8
	float ScreenSpaceReflectionIntensity; // 0x4ec
	float ScreenSpaceReflectionQuality; // 0x4f0
	float ScreenSpaceReflectionMaxRoughness; // 0x4f4
	float RayTracingReflectionsMaxRoughness; // 0x4f8
	int32_t RayTracingReflectionsMaxBounces; // 0x4fc
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x500
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x504
	char RayTracingReflectionsTranslucency : 1; // 0x505
	ETranslucencyType TranslucencyType; // 0x506
	float RayTracingTranslucencyMaxRoughness; // 0x508
	int32_t RayTracingTranslucencyRefractionRays; // 0x50c
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x510
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x514
	char RayTracingTranslucencyRefraction : 1; // 0x515
	int32_t PathTracingMaxBounces; // 0x518
	int32_t PathTracingSamplesPerPixel; // 0x51c
	float LPVFadeRange; // 0x520
	float LPVDirectionalOcclusionFadeRange; // 0x524
	float ScreenPercentage; // 0x528
	FWeightedBlendables WeightedBlendables; // 0x530
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104
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

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FPerformanceAnalytics : FUniquelyIdentifiedAnalytic {
	float AverageFPS; // 0x98
	float MinFPS; // 0x9c
	float MaxFPS; // 0xa0
	float AverageFrameTime; // 0xa4
	float MinFrameTime; // 0xa8
	float MaxFrameTime; // 0xac
	float StandardDeviationFrameTime; // 0xb0
	float PercentBelow60msFrameTime; // 0xb4
	float PercentBelow47msFrameTime; // 0xb8
	float PercentBelow34msFrameTime; // 0xbc
	float PercentBelow17msFrameTime; // 0xc0
	float PercentHitchesFrameTime; // 0xc4
	float AverageRenderThreadTime; // 0xc8
	float MinRenderThreadTime; // 0xcc
	float MaxRenderThreadTime; // 0xd0
	float StandardDeviationRenderThreadTime; // 0xd4
	float PercentBelow60msRenderThreadTime; // 0xd8
	float PercentBelow47msRenderThreadTime; // 0xdc
	float PercentBelow34msRenderThreadTime; // 0xe0
	float PercentBelow17msRenderThreadTime; // 0xe4
	float PercentHitchesRenderThreadTime; // 0xe8
	float AverageGameThreadTime; // 0xec
	float MinGameThreadTime; // 0xf0
	float MaxGameThreadTime; // 0xf4
	float StandardDeviationGameThreadTime; // 0xf8
	float PercentBelow60msGameThreadTime; // 0xfc
	float PercentBelow47msGameThreadTime; // 0x100
	float PercentBelow34msGameThreadTime; // 0x104
	float PercentBelow17msGameThreadTime; // 0x108
	float PercentHitchesGameThreadTime; // 0x10c
	float AverageRhiThreadTime; // 0x110
	float MinRhiThreadTime; // 0x114
	float MaxRhiThreadTime; // 0x118
	float StandardDeviationRhiThreadTime; // 0x11c
	float PercentBelow60msRhiThreadTime; // 0x120
	float PercentBelow47msRhiThreadTime; // 0x124
	float PercentBelow34msRhiThreadTime; // 0x128
	float PercentBelow17msRhiThreadTime; // 0x12c
	float PercentHitchesRhiThreadTime; // 0x130
	float AverageGpuTime; // 0x134
	float MinGpuTime; // 0x138
	float MaxGpuTime; // 0x13c
	float StandardDeviationGpuTime; // 0x140
	float PercentBelow60msGpuTime; // 0x144
	float PercentBelow47msGpuTime; // 0x148
	float PercentBelow34msGpuTime; // 0x14c
	float PercentBelow17msGpuTime; // 0x150
	float PercentHitchesGpuTime; // 0x154
	float AverageSlateTickTime; // 0x158
	float AverageSlateRenderThreadTime; // 0x15c
	float AverageSlateDrawWindowTime; // 0x160
	float AdaptiveShadowMapAverageNumShadowPrimitivesPerCapture; // 0x164
	float AdaptiveShadowMapAverageActiveLightsPerFrame; // 0x168
	float AdaptiveShadowMapPercentageOfFrameCapturingTiles; // 0x16c
	float HitchesPerMinute50ms; // 0x170
	float HitchesPerMinute100ms; // 0x174
	float HitchesPerMinute200ms; // 0x178
	float HitchesPerMinute400ms; // 0x17c
	float HitchesPerMinute800ms; // 0x180
	float HitchesPerMinute1600ms; // 0x184
	float HitchesPerMinute3200ms; // 0x188
	float HitchesPerMinute6400ms; // 0x18c
	float HitchesPerMinute12800ms; // 0x190
	FString DeviceProfile; // 0x198
	int32_t MaxMemoryUsedKilobytes; // 0x1a8
	int32_t DynamicResolutionScreenPercentageAvg; // 0x1ac
	int32_t DynamicResolutionScreenPercentageMax; // 0x1b0
	int32_t DynamicResolutionScreenPercentageMin; // 0x1b4
	int32_t MatchCount; // 0x1b8
	int32_t TotalFrames; // 0x1bc
	float ResolutionQuality; // 0x1c0
	int32_t ViewDistanceQuality; // 0x1c4
	int32_t AntiAliasingQuality; // 0x1c8
	int32_t ShadowQuality; // 0x1cc
	int32_t TextureQuality; // 0x1d0
	int32_t EffectsQuality; // 0x1d4
	int32_t FoliageQuality; // 0x1d8
	FString Scenario; // 0x1e0
	FString Theme; // 0x1f0
	FString MapName; // 0x200
	int32_t TileListCount; // 0x210
	int32_t Seed; // 0x214
	FString characterName; // 0x218
	FString Cpu; // 0x228
	FString GpuAdapter; // 0x238
	FString MatchID; // 0x248
};

struct FStadiaStorefrontDlcData : FDBDTableRowBase {
	FString DLC_Name; // 0x8
	FString General_Dlc_ID; // 0x18
	FString StadiaID; // 0x28
	FString copyright; // 0x38
	FString en_name; // 0x48
	FString en_description; // 0x58
	FString fr_name; // 0x68
	FString fr_description; // 0x78
	FString de_name; // 0x88
	FString de_description; // 0x98
	FString it_name; // 0xa8
	FString it_description; // 0xb8
	FString es_name; // 0xc8
	FString es_description; // 0xd8
	FString cht_name; // 0xe8
	FString cht_description; // 0xf8
	FString chs_name; // 0x108
	FString chs_description; // 0x118
	FString th_name; // 0x128
	FString th_description; // 0x138
	FString rus_name; // 0x148
	FString rus_description; // 0x158
	FString brapor_name; // 0x168
	FString brapor_description; // 0x178
	FString kor_name; // 0x188
	FString kor_description; // 0x198
	FString jpn_name; // 0x1a8
	FString jpn_description; // 0x1b8
	FString dan_name; // 0x1c8
	FString dan_description; // 0x1d8
	FString ara_name; // 0x1e8
	FString ara_description; // 0x1f8
	FString dut_name; // 0x208
	FString dut_description; // 0x218
	FString fin_name; // 0x228
	FString fin_description; // 0x238
	FString nor_name; // 0x248
	FString nor_description; // 0x258
	FString pol_name; // 0x268
	FString pol_description; // 0x278
	FString por_name; // 0x288
	FString por_description; // 0x298
	FString swe_name; // 0x2a8
	FString swe_description; // 0x2b8
	FString tr_name; // 0x2c8
	FString tr_description; // 0x2d8
	FString cfre_name; // 0x2e8
	FString cfre_description; // 0x2f8
	FString mex__latam_spanish__name; // 0x308
	FString mex__latam_spanish__description; // 0x318
};

struct FMatchRatingAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t Rating; // 0x98
	FString MatchID; // 0xa0
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FCrowdPlayLobbyEventsAnalytics : FUniquelyIdentifiedAnalytic {
	FString CrowdPlayId; // 0x98
	FString LobbyEventName; // 0xa8
	FString InviteId; // 0xb8
	FString playerID; // 0xc8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FCustomizationAnalytics : FCustomizationBaseAnalytics {
	FString MatchID; // 0x100
};

struct FLevelReadyToPlayRequirements {
	ADBDPlayer* Player; // 0x0
	char perkCount; // 0x8
	char itemCount; // 0x9
	char addonCount; // 0xa
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

struct FBundleData {
	FName ID; // 0x0
	FItemUIData UIData; // 0x10
};

struct FDDoSDetectionAnalytics : FUniquelyIdentifiedAnalytic {
	FString Severity; // 0x98
	FString MatchID; // 0xa8
	int32_t NonConnPacketCounter; // 0xb8
	int32_t NetConnPacketCounter; // 0xbc
	int32_t DisconnPacketCounter; // 0xc0
	int32_t BadPacketCounter; // 0xc4
	int32_t ErrorPacketCounter; // 0xc8
	int32_t DroppedPacketCounter; // 0xcc
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FBloodwebMandatoryContentByLevel : FDBDTableRowBase {
	int32_t Level; // 0x8
	FName ForcedItem01; // 0xc
	FName ForcedItem02; // 0x18
	FName ForcedItem03; // 0x24
};

struct FProceduralGenerationAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t GenerationSeed; // 0x98
	int32_t MapSeed; // 0x9c
	FString MapName; // 0xa0
	FString Procedural_MeatLocker_Small; // 0xb0
	FString Procedural_MeatLocker_Big; // 0xc0
	FString Procedural_Searchable; // 0xd0
	FString Procedural_EdgeObjects; // 0xe0
	FString Procedural_LivingWorldObjects; // 0xf0
	FString Procedural_Hatch; // 0x100
	FString Procedural_BookShelves; // 0x110
	FString Procedural_BreakableWalls; // 0x120
	FString Procedural_Totems; // 0x130
	FString Procedural_QuadrantSpawn; // 0x140
	int32_t PalletSpawned; // 0x150
	int32_t PalletProceduralMin; // 0x154
	int32_t PalletProceduralMax; // 0x158
	int32_t PalletProcedural; // 0x15c
	int32_t PalletProceduralSetCount; // 0x160
	uint32_t PalletGenerationId; // 0x164
	int32_t PalletGeneric; // 0x168
	FString KillerSpawn; // 0x170
	FString SurvivorSpawn; // 0x180
	FString MatchID; // 0x190
	int32_t HookSpawned; // 0x1a0
	bool UseFixedMaps; // 0x1a4
	float NavmeshGenerationTime; // 0x1a8
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0xc
	FExpressionInput LayerInput; // 0x10
	FExpressionInput HeightInput; // 0x2c
	float PreviewWeight; // 0x48
	FVector ConstLayerInput; // 0x4c
	float ConstHeightInput; // 0x58
};

struct FGPUAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString MapName; // 0xa8
	FString Marker; // 0xb8
	float AverageMS; // 0xc8
	float StdDevMs; // 0xcc
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FItemUIData {
	FText DisplayName; // 0x0
	FText Description; // 0x18
	TArray<FString> IconFilePathList; // 0x30
	TArray<TSoftObjectPtr<UTexture2D>> IconAssetList; // 0x40
	FCustomTransformation CustomTransformation; // 0x50
	uint32_t PlatformsUnlicensedNameOverride; // 0x64
	uint32_t PlatformsUnlicensedDescriptionOverride; // 0x68
	uint32_t PlatformsForIconUnlicensedFilePathListOverride; // 0x6c
	TArray<FString> IconUnlicensedFilePathListOverride; // 0x70
	bool LicenseExpirationOverride; // 0x80
	FText DisplayNameUnlicensedOverride; // 0x88
	FText DescriptionUnlicensedOverride; // 0xa0
	int32_t AssociatedCharacterIndex; // 0xb8
};

struct FPlayerstateDataCache {
	TMap<FName, FAwardedScores> awardedScoresByType; // 0x0
	bool IsDataCacheValid; // 0x50
};

struct FSaveGameSummaryCharacterStatsAnalytics : FUniquelyIdentifiedAnalytic {
	FString SavedCharacterStats; // 0x98
};

struct FDBDCullDistanceSizePair {
	FPerPlatformFloat Size; // 0x0
	FPerPlatformFloat CullDistance; // 0x4
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
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

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0xc
	UStruct* Struct; // 0x10
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

struct FActivationDefinition {
	EActivationStrategy _activationStrategy; // 0x0
	FGameplayTagContainer _activationTags; // 0x8
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FTaggedAnimSequence {
	UAnimSequence* Sequence; // 0x0
	FGameplayTagContainer Tags; // 0x8
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x2b0
	FVector2D ShadowOffset; // 0x340
	FLinearColor ShadowColorAndOpacity; // 0x348
	FSlateBrush MenuBorderBrush; // 0x358
	FMargin MenuBorderPadding; // 0x3e8
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventSectionData EventData; // 0x38
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SESSIONID; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FTwinsStatusData {
	bool TwinsActive; // 0x0
};

struct FSaveGameSaveResultAnalytics : FUniquelyIdentifiedAnalytic {
	bool SaveSuccessful; // 0x98
	int32_t ResponseCode; // 0x9c
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FNiagaraEventScriptProperties : FNiagaraEmitterScriptProperties {
	EScriptExecutionMode ExecutionMode; // 0x28
	uint32_t SpawnNumber; // 0x2c
	uint32_t MaxEventsPerFrame; // 0x30
	FGuid SourceEmitterID; // 0x34
	FName SourceEventName; // 0x44
	bool bRandomSpawnNumber; // 0x50
	uint32_t MinSpawnNumber; // 0x54
};

struct FSerializableSaveGameSummaryCharacterData {
	TArray<FCharacterSpecificData> CharacterStats; // 0x0
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FChaseUpdateInfo {
	FTargetFocusTimer ChaseTimer; // 0x0
	float SurvivorTravelDistance; // 0x38
	float KillerTravelDistance; // 0x3c
	ECamperDamageState ChaseStartHealthStatus; // 0x40
};

struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x58
};

struct FPlayerStatusEffectSpawnerHelper {
	FPlayerStatusEffectSpawnerHelperInitParams _initParams; // 0x0
	TSet<UStatusEffect*> _spawnedEffects; // 0x28
};

struct FScoreAlertViewData {
	EDBDScoreCategory scoreType; // 0x0
	FString Title; // 0x8
	int32_t ScoreValue; // 0x18
	float Progress; // 0x1c
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariable BoundVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x30
	FNiagaraVariable DefaultValueIfNonExistent; // 0x60
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x30
	FName FunctionNameToBind; // 0x34
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FSolverIterations {
	int32_t SolverIterations; // 0x0
	int32_t JointIterations; // 0x4
	int32_t CollisionIterations; // 0x8
	int32_t SolverPushOutIterations; // 0xc
	int32_t JointPushOutIterations; // 0x10
	int32_t CollisionPushOutIterations; // 0x14
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
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

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FBloodwebNodeCost : FDBDTableRowBase {
	EItemRarity Rarity; // 0x8
	int32_t Cost; // 0xc
};

struct FCharacterSlotData {
	FName ID; // 0x8
	int32_t characterIndex; // 0x14
	FString IconFilePath; // 0x18
	FString BackgroundImagePath; // 0x28
	FString DisplayName; // 0x38
	FString Biography; // 0x48
	FString DLCId; // 0x58
	FString DLCTitle; // 0x68
	int32_t Level; // 0x78
	int32_t Prestige; // 0x7c
	ECharacterDifficulty Difficulty; // 0x80
	bool IsUnlocked; // 0x81
	bool IsDLCPurchasable; // 0x82
	TArray<FPurchaseCurrencyData> PurchaseDataList; // 0x88
	int32_t ItemsOwned; // 0x98
	int32_t TotalItems; // 0x9c
	bool ShowNew; // 0xa0
	bool IsDlcLockedKiller; // 0xa1
	FSpecialEventUIInfo EventInfo; // 0xa8
	bool IsEnabled; // 0xf8
	bool HasNonSelectedPerks; // 0x100
	FAtlantaFreeTicketAffectedUIData FreeTicketAffectedData; // 0x108
	EPlayerRole PlayerRole; // 0x168
};

struct FOutfitData : FDBDTableRowBase {
	FName ID; // 0x8
	FItemUIData UIData; // 0x18
	FItemAvailability Availability; // 0xd8
	TArray<FName> OutfitItems; // 0x108
	FText CollectionName; // 0x118
	FText CollectionDescription; // 0x130
	FString InclusionVersion; // 0x148
	bool IsAvailableInAtlantaBuild; // 0x158
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0xc
};

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FCustomizationBaseAnalytics : FUniquelyIdentifiedAnalytic {
	FString CustomizationSlot1; // 0x98
	FString CustomizationSlot2; // 0xa8
	FString CustomizationSlot3; // 0xb8
	FString Charm1; // 0xc8
	FString Charm2; // 0xd8
	FString Charm3; // 0xe8
	EPlayerRole Role; // 0xf8
};

struct FContextEventData {
	FString ContextGroupName; // 0x0
	uint32_t ContextGroupUid; // 0x10
	FString PreviousContextName; // 0x18
	FString CurrentContextName; // 0x28
	uint32_t CurrentContextUid; // 0x38
	FString NextContextName; // 0x40
	uint32_t NextContextUid; // 0x50
	FDateTime Timestamp; // 0x58
};

struct FSimpleSpawnEffectsOnAllSurvivorsAddonParams {
	FName _statusEffectId; // 0x0
	float _customParam; // 0xc
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x14
};

struct FGameplayElementSubstitutions : FElementSubstitutions {
	TArray<FSubstitutionElements> _replacements; // 0x10
	EGameplayElementType _type; // 0x20
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x10
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1f0
	FMovieSceneFloatChannel Scale[0x3]; // 0x3d0
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FAtlantaBonusACEventsUIData : FAtlantaBaseEventsUIData {
	FAtlantaAuricCellPacksUIData auricPacksData; // 0xe8
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x58
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
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

struct FVideoThumbnailProperties : FDBDTableRowBase {
	FName _id; // 0x8
	bool _hasAudio; // 0x14
	FVector2D _size; // 0x18
	TSoftObjectPtr<UMediaSource> _source; // 0x20
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x58
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FDBDPlayerTotemPair {
	ADBDPlayer* Player; // 0x0
	ATotem* Totem; // 0x8
};

struct FReflectionCaptureTwoStates {
	FComponentReference ComponentReference; // 0x0
};

struct FMatchConfigDifficultyData {
	TSoftObjectPtr<UPaperSprite> DifficultyIcon; // 0x0
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FPartyJoinFailureAnalytics : FUniquelyIdentifiedAnalytic {
	FString PartyMembersFriendshipStatus; // 0x98
	uint32_t NumKrakenConfirmedFriendsInParty; // 0xa8
	uint32_t NumPlatformAcceptedFriendsInParty; // 0xac
};

struct FRewardLayoutWidgetToGenerate {
	TSoftClassPtr<UObject> CharacterRewardWidget; // 0x0
	TSoftClassPtr<UObject> CurrencyRewardWidget; // 0x30
	TSoftClassPtr<UObject> SpacerWidget; // 0x60
};

struct FCrowdChoiceVoteResultAnalytics : FUniquelyIdentifiedAnalytic {
	FString PollId; // 0x98
	FString VoteOption; // 0xa8
	int32_t VoteCount; // 0xb8
};

struct FSyncLoadAnalytics : FUniquelyIdentifiedAnalytic {
	FString AssetName; // 0x98
	float LoadTimeMilliseconds; // 0xa8
	FString DeviceProfileName; // 0xb0
	FString BuildConfiguration; // 0xc0
	int32_t ChangelistNumber; // 0xd0
	FString MapName; // 0xd8
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
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

struct FMovieSceneFloatValueSerializationHelper {
	float value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x30
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x10
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x20
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x2c
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FBoneReference IKBone; // 0xd0
	float StartStretchRatio; // 0xe4
	float MaxStretchScale; // 0xe8
	FVector EffectorLocation; // 0xec
	FBoneSocketTarget EffectorTarget; // 0x100
	FVector JointTargetLocation; // 0x170
	FBoneSocketTarget JointTarget; // 0x180
	FAxis TwistAxis; // 0x1f0
	EBoneControlSpace EffectorLocationSpace; // 0x200
	EBoneControlSpace JointTargetLocationSpace; // 0x201
	char bAllowStretching : 1; // 0x202
	char bTakeRotationFromEffectorSpace : 1; // 0x202
	char bMaintainEffectorRelRot : 1; // 0x202
	char bAllowTwist : 1; // 0x202
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString value; // 0x10
};

struct FWidgetFriendData {
	UUMGBaseFriendListElement* CorrespondingWidget; // 0x8
};

struct FSavedFearMarketOfferingInstanceV7 {
	TArray<FLegacySavedFearMarketItemInstance> ObjectsForSale; // 0x0
	FString StartTime; // 0x10
	FString EndTime; // 0x20
};

struct FInteractionAnalytics : FUniquelyIdentifiedAnalytic {
	EPlayerRole Role; // 0x98
	int32_t InterruptionSuccessCount; // 0x9c
	int32_t InterruptionFailureCount; // 0xa0
	int32_t InteractionPredictedCount; // 0xa4
	int32_t InteractionAuthorizedCount; // 0xa8
	int32_t InteractionDeniedByRaceConditionCount; // 0xac
	int32_t InteractionDeniedByTimeoutCount; // 0xb0
	int32_t InteractionDeniedByErrorCount; // 0xb4
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

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xd0
	FVector Translation; // 0xe4
	FRotator Rotation; // 0xf0
	FVector Scale; // 0xfc
	EBoneModificationMode TranslationMode; // 0x108
	EBoneModificationMode RotationMode; // 0x109
	EBoneModificationMode ScaleMode; // 0x10a
	EBoneControlSpace TranslationSpace; // 0x10b
	EBoneControlSpace RotationSpace; // 0x10c
	EBoneControlSpace ScaleSpace; // 0x10d
};

struct FAttackHitResult {
	ADBDPlayer* Attacker; // 0x0
	ADBDPlayer* Target; // 0x8
	UDBDAttack* Attack; // 0x10
	bool IsBasicAttack; // 0x18
	bool CosmeticOnly; // 0x19
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x48
	char bUseBBKeyForQueryTemplate : 1; // 0x4c
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0x10
};

struct FMatchmakingJoinCompleteAnalytics : FUniquelyIdentifiedAnalytic {
	FString SessionName; // 0x98
	int32_t Result; // 0xa8
};

struct FNonTunableStat : FBaseStat {
	float _baseValue; // 0x58
};

struct FCloudInventoryItem {
	int32_t DefinitionId; // 0x0
	uint64_t InstanceId; // 0x8
};

struct FMaterialHelperOriginalMeshState {
	TArray<UMaterialInterface*> _originalMaterials; // 0x8
	TArray<UMaterialInterface*> _originalDynamicMaterials; // 0x18
};

struct FDBDTunableRowHandle {
	FDataTableRowHandle _dataTableRowHandle; // 0x0
	float _defaultValue; // 0x18
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> Ids; // 0x0
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FArchivesVignettes : FDBDTableRowBase {
	FString VignetteId; // 0x8
	FText Title; // 0x18
	FText subtitle; // 0x30
	TArray<FArchivesVignetteEntry> Entries; // 0x48
	TArray<TSoftObjectPtr<UMediaSource>> CinematicPaths; // 0x58
};

struct FCustomizationData : FDBDTableRowBase {
	FName ID; // 0x8
	int32_t AssociatedCharacter; // 0x14
	EPlayerRole AssociatedRole; // 0x18
	EItemRarity Rarity; // 0x19
	FItemUIData UIData; // 0x20
	FItemAvailability Availability; // 0xe0
	FString InclusionVersion; // 0x110
};

struct FCompositionGraphCapturePasses {
	TArray<FString> value; // 0x0
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FMaterialConfig {
	TArray<UMaterialInterface*> MaterialPerSection; // 0x0
};

struct FTypeFoliageToAutomateDensity {
	TSoftObjectPtr<UStaticMesh> SourceMesh; // 0x0
	TSoftObjectPtr<UStaticMesh> ReplacementMesh; // 0x30
	bool bGenerateOverlaps; // 0x60
	bool bReceiveDecals; // 0x61
	ECanBeCharacterBase bCanCharacterStepOn; // 0x62
	EDetailMode DetailMode; // 0x63
	float MinimumFoliageRadius; // 0x64
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FAIRandomByDistancePercentagesAtTime {
	FAITunableParameter PercentageAtStartDistance; // 0x0
	FAITunableParameter PercentageAtEndDistance; // 0x10
	FAITunableParameter AtRelativeTime; // 0x20
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0xc
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FPlayerStatusViewData {
	FString playerName; // 0x0
	UTexture2D* PlayerPortraitIcon; // 0x10
	UTexture2D* PlayerPortraitIconOverride; // 0x18
	EPlayerStatus PlayerStatusState; // 0x20
	float TimerProgress; // 0x24
	bool IsDeepWound; // 0x28
	bool IsBroken; // 0x29
	bool IsLocalPlayerAKiller; // 0x2a
	EObsessionUIState ObsessionState; // 0x2b
	int32_t DrainStage; // 0x2c
	FDoctorStatusData DoctorStatusData; // 0x30
	FExecutionerStatusData ExecutionerStatusData; // 0x34
	FGhostStatusData GhostStatusData; // 0x38
	FNightmareStatusData NightmareStatusData; // 0x40
	FPigStatusData PigStatusData; // 0x4c
	FPlagueStatusData PlagueStatusData; // 0x54
	FTwinsStatusData TwinsStatusData; // 0x5c
	FTricksterStatusData TricksterStatusData; // 0x60
	FK24StatusData K24StatusData; // 0x6c
	FK25StatusData K25StatusData; // 0x70
	FK26StatusData K26StatusData; // 0x78
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
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

struct FIndexList {
	TArray<int32_t> Indexes; // 0x0
};

struct FAnimNode_RigidBody : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xd0
	FVector OverrideWorldGravity; // 0x178
	FVector ExternalForce; // 0x184
	FVector ComponentLinearAccScale; // 0x190
	FVector ComponentLinearVelScale; // 0x19c
	FVector ComponentAppliedLinearAccClamp; // 0x1a8
	float CachedBoundsScale; // 0x1b4
	FBoneReference BaseBoneRef; // 0x1b8
	ECollisionChannel OverlapChannel; // 0x1cc
	ESimulationSpace SimulationSpace; // 0x1cd
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1ce
	char bEnableWorldGeometry : 1; // 0x1d0
	char bOverrideWorldGravity : 1; // 0x1d0
	char bTransferBoneVelocities : 1; // 0x1d0
	char bFreezeIncomingPoseOnStart : 1; // 0x1d0
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1d0
	FSolverIterations OverrideSolverIterations; // 0x1d4
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FAttackSubstateRequestResult {
	bool IsValid; // 0x0
	EAttackSubstate RequestedNextSubstate; // 0x1
	EAttackSubstate ServerNextSubstate; // 0x2
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x28
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FLegacyCharacterSavedInventoryData {
	uint32_t Version; // 0x0
	FName Name; // 0x4
	int64_t TimeObtainedSinceEpoch; // 0x10
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0x20
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
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

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	bool bUseAttachedParent; // 0x18
	bool bCopyCurves; // 0x19
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
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

struct FModifierReplicatedEventConditionData {
	UEventDrivenModifierCondition* EventDrivenCondition; // 0x0
	bool HasCondition; // 0x8
	bool AuthorityDataSet; // 0x9
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FLegacyPlayerSavedProfileData : FSaveDataBase {
	FString PlayerUID; // 0x10
	FLegacyPlayerSavedProfileDataShared SharedData; // 0x20
	FLegacyPlayerSavedProfileDataLocal LocalData; // 0x60
};

struct FInboxMessageData {
	int64_t ID; // 0x0
	FString Origin; // 0x8
	FString RecipientId; // 0x18
	int64_t ReceivedTimestamp; // 0x28
	FString Subject; // 0x30
	FString Body; // 0x40
	TArray<FClaimableInboxMessageData> Claimable; // 0x50
	bool AreRewardsClaimed; // 0x60
	bool IsRead; // 0x61
	int64_t ExpireTimestamp; // 0x68
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FReportData {
	FString Type; // 0x0
	FString reason; // 0x10
	FString Comment; // 0x20
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID AttachBindingID; // 0x20
	FName AttachSocketName; // 0x38
	FName AttachComponentName; // 0x44
	EAttachmentRule AttachmentLocationRule; // 0x50
	EAttachmentRule AttachmentRotationRule; // 0x51
	EAttachmentRule AttachmentScaleRule; // 0x52
	EDetachmentRule DetachmentLocationRule; // 0x53
	EDetachmentRule DetachmentRotationRule; // 0x54
	EDetachmentRule DetachmentScaleRule; // 0x55
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x10
	FMovieSceneFloatChannel YCurve; // 0xb0
	FMovieSceneFloatChannel ZCurve; // 0x150
};

struct FDependencyElementAddition {
	TSoftClassPtr<UObject> _object; // 0x0
	ETileSpawnPointType _type; // 0x30
	int32_t _numberToAdd; // 0x34
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FGarantiedRarityRingDistributionValues : FDBDTableRowBase {
	int32_t InnerRingCommonItemProbability; // 0x8
	int32_t MiddleRingCommonItemProbability; // 0xc
	int32_t OuterRingCommonItemProbability; // 0x10
	int32_t InnerRingUncommonItemProbability; // 0x14
	int32_t MiddleRingUncommonItemProbability; // 0x18
	int32_t OuterRingUncommonItemProbability; // 0x1c
	int32_t InnerRingRareItemProbability; // 0x20
	int32_t MiddleRingRareItemProbability; // 0x24
	int32_t OuterRingRareItemProbability; // 0x28
	int32_t InnerRingVeryRareItemProbability; // 0x2c
	int32_t MiddleRingVeryRareItemProbability; // 0x30
	int32_t OuterRingVeryRareItemProbability; // 0x34
	int32_t InnerRingUltraRareItemProbability; // 0x38
	int32_t MiddleRingUltraRareItemProbability; // 0x3c
	int32_t OuterRingUltraRareItemProbability; // 0x40
	int32_t InnerRingArtifactItemProbability; // 0x44
	int32_t MiddleRingArtifactItemProbability; // 0x48
	int32_t OuterRingArtifactItemProbability; // 0x4c
	int32_t InnerRingSpectralItemProbability; // 0x50
	int32_t MiddleRingSpectralItemProbability; // 0x54
	int32_t OuterRingSpectralItemProbability; // 0x58
	int32_t InnerRingSpecialEventItemProbability; // 0x5c
	int32_t MiddleRingSpecialEventItemProbability; // 0x60
	int32_t OuterRingSpecialEventItemProbability; // 0x64
	int32_t InnerRingLegendaryItemProbability; // 0x68
	int32_t MiddleRingLegendaryItemProbability; // 0x6c
	int32_t OuterRingLegendaryItemProbability; // 0x70
	int32_t InnerRingEpicItemProbability; // 0x74
	int32_t MiddleRingEpicItemProbability; // 0x78
	int32_t OuterRingEpicItemProbability; // 0x7c
	int32_t InnerRingSuperEpicItemProbability; // 0x80
	int32_t MiddleRingSuperEpicItemProbability; // 0x84
	int32_t OuterRingSuperEpicItemProbability; // 0x88
	int32_t InnerRingUltraEpicItemProbability; // 0x8c
	int32_t MiddleRingUltraEpicItemProbability; // 0x90
	int32_t OuterRingUltraEpicItemProbability; // 0x94
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FTransactionAnalytics : FUniquelyIdentifiedAnalytic {
	FString TransactionType; // 0x98
	FString TransactionSource; // 0xa8
	FString SourceId; // 0xb8
	int32_t SourceTier; // 0xc8
	FString currencyType; // 0xd0
	int32_t CurrencyAmount; // 0xe0
	int32_t CurrencyBalance; // 0xe4
	int32_t LevelAchieved; // 0xe8
	int32_t Prestige; // 0xec
	FString ItemIDAcquired; // 0xf0
	int32_t Rank; // 0x100
	FString SelectedCharacter; // 0x108
	bool TransactionTriggeredLevelUp; // 0x118
};

struct FNodeContentDistributionValue : FDBDTableRowBase {
	int32_t Empty_Weight; // 0x8
	int32_t Empty_MinCount; // 0xc
	int32_t Empty_MaxCount; // 0x10
	int32_t Perks_Weight; // 0x14
	int32_t Perks_MinCount; // 0x18
	int32_t Perks_MaxCount; // 0x1c
	int32_t PerksPacks_Weight; // 0x20
	int32_t PerksPacks_MinCount; // 0x24
	int32_t PerksPacks_MaxCount; // 0x28
	int32_t Offerings_Weight; // 0x2c
	int32_t Offerings_MinCount; // 0x30
	int32_t Offerings_MaxCount; // 0x34
	int32_t Items_Weight; // 0x38
	int32_t Items_MinCount; // 0x3c
	int32_t Items_MaxCount; // 0x40
	int32_t AddOn_Weight; // 0x44
	int32_t AddOn_MinCount; // 0x48
	int32_t AddOn_MaxCount; // 0x4c
	int32_t Chests_Weight; // 0x50
	int32_t Chests_MinCount; // 0x54
	int32_t Chests_MaxCount; // 0x58
};

struct FTouchInputControl {
	FSlateBrush Image1; // 0x0
	FSlateBrush Image2; // 0x90
	FVector2D Center; // 0x120
	FVector2D VisualSize; // 0x128
	FVector2D BackgroundSize; // 0x130
	FVector2D ThumbSize; // 0x138
	FVector2D InteractionSize; // 0x140
	FVector2D InputScale; // 0x148
	FKey MainInputKey; // 0x150
	FKey AltInputKey; // 0x170
	bool bPreventRecenter; // 0x190
	bool bIndependentAxes; // 0x191
	bool bManualScaling; // 0x192
};

struct FPlagueStatusData {
	ESicknessLevel SicknessLevel; // 0x0
	float SicknessProgress; // 0x4
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

struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t previousState; // 0xc
	int32_t NextState; // 0x10
	float CrossfadeDuration; // 0x14
	int32_t StartNotify; // 0x18
	int32_t EndNotify; // 0x1c
	int32_t InterruptNotify; // 0x20
	EAlphaBlendOption BlendMode; // 0x24
	UCurveFloat* CustomCurve; // 0x28
	UBlendProfile* BlendProfile; // 0x30
	ETransitionLogicType LogicType; // 0x38
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0xc
	char bSpawnTimeOnly : 1; // 0xc
	EEmitterDynamicParameterValue ValueMethod; // 0x10
	char bScaleVelocityByParamValue : 1; // 0x14
	FRawDistributionFloat ParamValue; // 0x18
};

struct FSubtitlesDescription : FDBDTableRowBase {
	FText SubtitlesText; // 0x8
	TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x20
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FButtonSequenceData : FTableRowBase {
	FName SequenceID; // 0x8
	TArray<FName> Sequence; // 0x18
	int32_t TIMEOUT; // 0x28
	TArray<FString> Platforms; // 0x30
	int32_t MinKeysForFailedAttempt; // 0x40
};

struct FTaskContainer {
	UDownloadMultiTextureTask* DownloadTask; // 0x0
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FMainMenuButtonData : FDBDTableRowBase {
	EMainMenuButton buttonType; // 0x8
	FText label; // 0x10
	FText InfoTitle; // 0x28
	FText InfoDescription; // 0x40
	FText LockedInfoTitle; // 0x58
	FText LockedInfoDescription; // 0x70
	bool IsDisabled; // 0x88
	bool IsLocked; // 0x89
	bool IsHidden; // 0x8a
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x14
	bool bDisableSteering; // 0x20
};

struct FLoudNoiseIndicatorData {
	UStaticMeshComponent* MeshMask; // 0x0
	UStaticMeshComponent* DistortionMesh; // 0x8
	FVector Location; // 0x10
	float RemainingTime; // 0x1c
};

struct FCharmAttacherAnimationTweak {
	FVector AttachPointTranslation; // 0x0
	FRotator AttachPointRotation; // 0xc
	int32_t ConstraintType; // 0x18
	float MagicTweakingFloat; // 0x1c
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FEventSubstitionData {
	FName _name; // 0x0
	bool _allowSubstitutionInKYF; // 0xc
	int32_t _baseNumOfSubstitutionPerGroup; // 0x10
	TArray<FGameplayElementSubstitutions> _gameplaySubstitutionElements; // 0x18
	TArray<FDependencyElementSubstitutions> _dependencySubstitutionElements; // 0x28
	TArray<FDependencyElementAddition> _dependencyElementAdditions; // 0x38
	TArray<FGameplayElementAddition> _gameplayElementAdditions; // 0x48
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FPerPlatformTunable : FDBDTableRowBase {
	FPerPlatformFloat value; // 0x8
	FString Description; // 0x10
};

struct FPerkLevelDefinition {
	int32_t CountRequired; // 0x0
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneBoolChannel Curve; // 0x20
};

struct FPlayerLevelData {
	int32_t LevelValue; // 0x0
	int32_t PrestigeValue; // 0x4
	int32_t MaxXp; // 0x8
};

struct FLegacySavedPlayerLoadoutData {
	FName Item; // 0x0
	TArray<FName> ItemAddOns; // 0x10
	TArray<FName> CamperPerks; // 0x20
	TArray<int32_t> CamperPerkLevels; // 0x30
	FName CamperFavor; // 0x40
	FName Power; // 0x4c
	TArray<FName> PowerAddOns; // 0x58
	TArray<FName> SlasherPerks; // 0x68
	TArray<int32_t> SlasherPerkLevels; // 0x78
	FName SlasherFavor; // 0x88
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
};

struct FNightmareStatusData {
	ESleepingUIState SleepingState; // 0x0
	float SleepingProgress; // 0x4
	float SleepProtectionRemainingDuration; // 0x8
};

struct FScreenshotViewSetting {
	float Distance; // 0x0
	float LateralOffset; // 0x4
	float HeightOffset; // 0x8
	float CharacterYaw; // 0xc
	float CharacterRoll; // 0x10
	float CharacterPitch; // 0x14
	float CameraPitch; // 0x18
	FName SocketName; // 0x1c
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xd0
	UCurveFloat* DrivingCurve; // 0xe8
	float Multiplier; // 0xf0
	float RangeMin; // 0xf4
	float RangeMax; // 0xf8
	float RemappedMin; // 0xfc
	float RemappedMax; // 0x100
	FName ParameterName; // 0x104
	FBoneReference targetBone; // 0x110
	EDrivenDestinationMode DestinationMode; // 0x124
	EDrivenBoneModificationMode ModificationMode; // 0x125
	EComponentType SourceComponent; // 0x126
	char bUseRange : 1; // 0x127
	char bAffectTargetTranslationX : 1; // 0x127
	char bAffectTargetTranslationY : 1; // 0x127
	char bAffectTargetTranslationZ : 1; // 0x127
	char bAffectTargetRotationX : 1; // 0x127
	char bAffectTargetRotationY : 1; // 0x127
	char bAffectTargetRotationZ : 1; // 0x127
	char bAffectTargetScaleX : 1; // 0x127
	char bAffectTargetScaleY : 1; // 0x128
	char bAffectTargetScaleZ : 1; // 0x128
};

struct FDailyRitualAnalytics : FUniquelyIdentifiedAnalytic {
	FString Status; // 0x98
	FString ritualId; // 0xa8
	float HoursElapsed; // 0xb8
	int32_t NbGameElapsed; // 0xbc
	int32_t Progress; // 0xc0
	int32_t Threshold; // 0xc4
	int32_t PendingRituals; // 0xc8
	int32_t SpecificCharacter; // 0xcc
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FSocketOrBoneCache {
	TSoftObjectPtr<UAnimSequence> _sourceAnimation; // 0x0
	FName _socketName; // 0x30
	FName _notifyName; // 0x3c
	FVector _location; // 0x48
	FRotator _rotation; // 0x54
};

struct FSourceEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
};

struct FPlayerPersistentData {
	EPlayerRole GameRole; // 0x0
	FPlayerLoadoutData StartingLoadout; // 0x8
	FPlayerLoadoutData CurrentLoadout; // 0xa0
	FDailyRitualInstance CachedAvailableRitual; // 0x1d0
	FPlayerSavedProfileData SavedData; // 0x248
	EPlatformFlag PlayerPlatform; // 0x710
	EProviderFlag PlayerProvider; // 0x714
	uint32_t _playerId; // 0x718
	FString _contentVersion; // 0x730
	FDateTime _startSessionTime; // 0x740
};

struct FChainsawEventWhileCamping : FChainsawEvent {
	float DistanceFromClosestHook; // 0x4
};

struct FLRUTextureCache {
	TMap<FName, UTexture2DDynamic*> _cachedTextures; // 0x10
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FSaveGameErrorAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t ErrorCode; // 0x98
	FString Category; // 0xa0
	FString ErrorDetails; // 0xb0
	uint32_t KrakenErrorCode; // 0xc0
	FString StateName; // 0xc8
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x10
};

struct FConstraint {
	FBoneReference targetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x14
	ETransformConstraintType TransformType; // 0x15
	FFilterOptionPerAxis PerAxis; // 0x16
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FCharacterRewardViewData : FRewardViewData {
	UTexture2D* IconTexture; // 0x8
	bool IsOwned; // 0x10
	int32_t Level; // 0x14
	int32_t Prestige; // 0x18
	FCharacterTooltipViewData TooltipData; // 0x20
	bool IsEnabled; // 0x90
};

struct FAITrailEvent {
	FVector Location; // 0x0
	float StartTime; // 0xc
	float EndTime; // 0x10
	AActor* Instigator; // 0x18
	FGameplayTag IgnoreOnPerkTag; // 0x20
	FGenericTeamId TeamIdentifier; // 0x2c
};

struct FAssignedPerkProperties {
	FName perkId; // 0x0
	int32_t PerkLevel; // 0xc
	bool IsTeachable; // 0x10
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FCamperLoadout {
	FCharacterCustomizationDropdown camper; // 0x0
	FCharmDropdown Slot0_CharmID; // 0x5c
	FCharmDropdown Slot1_CharmID; // 0x6c
	FCharmDropdown Slot2_CharmID; // 0x7c
	FDataTableDropdown ItemId; // 0x90
	TArray<FDebugLoadoutAddon> AddonIDs; // 0xc0
	TArray<FDebugLoadoutPerk> Perks; // 0xd0
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FPendingStepData {
	TArray<FPendingTutorialData> tutorialData; // 0x0
};

struct FDisconnectionAnalytics : FUniquelyIdentifiedAnalytic {
	float TimeSinceLastPacket; // 0x98
	FString GameFlowStep; // 0xa0
	FString UnrealMapName; // 0xb0
	FString MapName; // 0xc0
	FString ThemeName; // 0xd0
	FString FailureType; // 0xe0
	FString ErrorString; // 0xf0
	FString MatchID; // 0x100
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x1c
	FName VectorPropertyName; // 0x28
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0xc
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t value; // 0x4
};

struct FDBDEmblemDefinition : FDBDTableRowBase {
	FName ID; // 0x8
	FText Name; // 0x18
	FText Description; // 0x30
	TArray<EPlayerRole> Roles; // 0x48
	TSoftClassPtr<UObject> CustomEmblem; // 0x58
	TArray<FString> IconFilePaths; // 0x88
	EEmblemEvaluation EmblemEvaluation; // 0x98
	bool Enabled; // 0x99
	TArray<FEmblemProgressionID> EmblemProgressionData; // 0xa0
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

struct FAtlantaSettingMenuData : FDBDTableRowBase {
	EOverlayTabs OverlayTab; // 0x8
	EOverlayMode OverlayMode; // 0x9
	FText DisplayName; // 0x10
	EAtlantaSettingMenuType MenuType; // 0x28
};

struct FHookAnalytics : FUniquelyIdentifiedAnalytic {
	float HookStartTime; // 0x98
	FString MirrorsIdSurvivor; // 0xa0
	char SurvivorIsABot; // 0xb0
	FString MirrorsIdKiller; // 0xb8
	char KillerIsABot; // 0xc8
	FString MirrorsIdRescuer; // 0xd0
	char RescuerIsABot; // 0xe0
	int32_t TimesOnHook; // 0xe4
	FString Outcome; // 0xe8
	float HookDuration; // 0xf8
	int32_t EscapeAttemptStart; // 0xfc
	int32_t EscapeAttemptFull; // 0x100
	int32_t SurvivorsRemaining; // 0x104
	int32_t NumberOfActiveSurvivorsStart; // 0x108
	int32_t NumberOfActiveSurvivorsEnd; // 0x10c
	int32_t NumberOfActiveSurvivorsTotal; // 0x110
	float DurationCampFace; // 0x114
	float DurationCampHard; // 0x118
	float DurationCampSoft; // 0x11c
	int32_t NumberOfRescuers; // 0x120
	float TimeForFirstRescuer; // 0x124
	FString MatchID; // 0x128
	bool ReverseBearTrapOn; // 0x138
};

struct FQosDatacenterInfo {
	FString ID; // 0x0
	FString RegionId; // 0x10
	bool bEnabled; // 0x20
	TArray<FQosPingServerInfo> Servers; // 0x28
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0x10
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions value; // 0x28
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0xc
	int32_t SampleRate; // 0x10
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x140
	int32_t LODThreshold; // 0x150
	FName SourceSocketName; // 0x154
	FName PivotSocketName; // 0x160
	FVector LookAtLocation; // 0x16c
	FVector SocketAxis; // 0x178
	float alpha; // 0x184
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0xc
	int32_t Index; // 0x10
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x10
};

struct FTallyItemChangedData {
	FInventorySlotData Item; // 0x0
	FInventorySlotData Addon1; // 0xf8
	FInventorySlotData Addon2; // 0x1f0
	bool IsSet; // 0x2e8
	EEnergyTypeEnum EnergyType; // 0x2e9
	float EnergyLevel; // 0x2ec
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FPurchasableOperationData : FDBDTableRowBase {
	FName ID; // 0x8
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x58
	FMovieSceneFloatChannel LeftCurve; // 0xf8
	FMovieSceneFloatChannel RightCurve; // 0x198
	FMovieSceneFloatChannel BottomCurve; // 0x238
	EMovieSceneBlendType BlendType; // 0x2d8
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	TArray<FFrameNumber> EventTimes; // 0x38
	TArray<FMovieSceneEventPtrs> Events; // 0x48
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

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xd0
	TArray<FVector> AngularOffsets; // 0xe0
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

struct FEACClientViolationAnalytics : FEACAnalytics {
	FString ViolationCase; // 0xa8
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FFrameHikeAnalytics : FUniquelyIdentifiedAnalytic {
	float FrameDeltaTime; // 0x98
	float TimeSinceApplicationStarted; // 0x9c
	float CurrentTimeoutThreshold; // 0xa0
	bool IsOverConnectionTimeLimit; // 0xa4
	FString CurrentMap; // 0xa8
	FString CurrentGameMap; // 0xb8
	FString GameFlowStep; // 0xc8
	FString CurrentGameFlowContext; // 0xd8
	FString PreviousGameFlowContext; // 0xe8
	FString NavigationContext; // 0xf8
	FString PreviousNavigationContext; // 0x108
	FString RecentLogs; // 0x118
	FString KrakenMatchId; // 0x128
	float FlushAsyncLoadingTime; // 0x138
	int32_t FlushAsyncLoadingCount; // 0x13c
	int32_t SyncLoadCount; // 0x140
	FString GameType; // 0x148
	FString NetMode; // 0x158
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
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

struct FGameEventDispatcherHandleBP {
	FGameplayTag Filter; // 0x0
	FDelegate GameEventDelegate; // 0xc
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
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

struct FBloodwebNode {
	FBloodwebNodeProperties Properties; // 0x0
	TArray<FBloodwebNodeGate> Gates; // 0x20
	EBloodwebNodeState State; // 0x30
	FString nodeID; // 0x38
	FName ContentId; // 0x48
	FBloodwebChest BloodwebChest; // 0x58
};

struct FPriceViewData {
	ECurrencyType currencyType; // 0x0
	int32_t Price; // 0x4
	float Discount; // 0x8
	bool IsAffordable; // 0xc
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

struct FLightMaterialUpdate {
	UMaterialHelper* Material; // 0x0
	FName PropertyName; // 0x8
	float Multiplier; // 0x14
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
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

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x378
	FSlateBrush MidVolumeImage; // 0x408
	FSlateBrush LowVolumeImage; // 0x498
	FSlateBrush NoVolumeImage; // 0x528
	FSlateBrush MutedImage; // 0x5b8
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FClaimableInboxMessageData {
	EClaimableInboxMessageType Type; // 0x0
	int32_t amount; // 0x4
	FString ID; // 0x8
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

struct FChargeData {
	AActor* Instigator; // 0x0
	float ChargeAmount; // 0x8
	bool BypassSkillCheckFail; // 0xc
	bool IsOneTimeIncrease; // 0xd
};

struct FStoreItemSlotData {
	FName ItemId; // 0x8
	ECustomizationCategory Category; // 0x14
	FName MirrorsId; // 0x18
	FString IconPath; // 0x28
	FString DisplayName; // 0x38
	FString DisplayCollectionName; // 0x48
	FString Description; // 0x58
	FString RoleCategoryInfo; // 0x68
	FString RarityPartInfo; // 0x78
	EItemRarity Rarity; // 0x88
	FSpecialEventUIInfo EventInfo; // 0x90
	TArray<FPurchaseCurrencyData> PurchaseDataList; // 0xe0
	TArray<FName> ParentBundleIds; // 0xf0
	TArray<FName> ChildrenItemIds; // 0x100
	FCustomTransformation CustomTransformation; // 0x110
	bool IsOwned; // 0x124
	bool IsBuyable; // 0x125
	bool IsEquipped; // 0x126
	bool IsNewInStore; // 0x127
	bool IsLocked; // 0x128
	bool IsInStore; // 0x129
	EPlayerRole AssociatedRole; // 0x12a
	FDateTime ReleaseDate; // 0x130
	bool IsEnabled; // 0x138
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x28
	bool bWeightBasedBlend; // 0x2c
};

struct FPerkViewData : FBaseLoadoutPartViewData {
	int32_t Level; // 0x58
	float Cooldown; // 0x5c
	EStatusEffectType StatusEffectType; // 0x60
	int32_t StackCount; // 0x64
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0xc
	FName SourceEmitter; // 0x18
};

struct FFearMarketOfferingInstance {
	TArray<FFearMarketItemInstance> ObjectsForSale; // 0x0
	FDateTime StartTime; // 0x10
	FDateTime EndTime; // 0x18
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FMatchmakingContextData {
	uint32_t ContextId; // 0x0
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FStreamingLevelsToConsider {
	TArray<FLevelStreamingWrapper> StreamingLevels; // 0x0
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x20
	float SpawnCountScale; // 0x24
};

struct FSpecialEventAnalytics : FUniquelyIdentifiedAnalytic {
	EPlayerRole Role; // 0x98
	FString MatchID; // 0xa0
	FName EventName; // 0xb0
	FName Challenge; // 0xbc
	int32_t amount; // 0xc8
	int32_t CummulativeAmount; // 0xcc
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FUnlockSaveStatCondition {
	FName StatName; // 0x0
	float ValueRequired; // 0xc
	bool isCharacterSpecific; // 0x10
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

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
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

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
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

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FMenuFlowAnalytics : FUniquelyIdentifiedAnalytic {
	FString CurrentContext; // 0x98
	FString PreviousContext; // 0xa8
	float TimeOnPreviousContext; // 0xb8
	FString ContextChangeTimetamp; // 0xc0
	FString MatchID; // 0xd0
	FString LobbyId; // 0xe0
};

struct FSpawnedTormentTrailPoint {
	ATormentTrailPoint* TrailPoint; // 0x0
};

struct FBeMaterialVector {
	FName Name; // 0x0
	FLinearColor Vector; // 0xc
};

struct FCustomKillerInstinctData {
	UNiagaraSystem* ParticleSystemAsset; // 0x0
	TArray<FGameplayTag> SurvivorStateTags; // 0x8
	TArray<FGameplayTag> KillerStateTags; // 0x18
};

struct FDedicatedServerPlayerEquipDisabledItemAnalytics : FUniquelyIdentifiedAnalytic {
	FString PlayerMirrorsId; // 0x98
	FString EquipedDisabledItemIds; // 0xa8
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0xc
	float MaxValue; // 0x10
	float MinValue; // 0x14
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int32_t LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x8c
};

struct FMatchInfoAnalytics : FUniquelyIdentifiedAnalytic {
	EGameType gameMode; // 0x98
	EPlayerRole Role; // 0x99
	bool IsABot; // 0x9a
	EAIDifficultyLevel BotDifficultyLevel; // 0x9b
	int32_t PartySize; // 0x9c
	FString characterName; // 0xa0
	int32_t Rank; // 0xb0
	int32_t Level; // 0xb4
	int32_t Prestige; // 0xb8
	int32_t Pips; // 0xbc
	int32_t PipsTotal; // 0xc0
	int32_t MapSeed; // 0xc4
	FString MapName; // 0xc8
	FString PartyHostMirrorsId; // 0xd8
	FString LobbyId; // 0xe8
	FString MatchID; // 0xf8
	FString KrakenMatchId; // 0x108
	FString playerName; // 0x118
	FString SelectedCountry; // 0x128
	bool FirstTimePlaying; // 0x138
	int32_t CumulativeMatches; // 0x13c
	int32_t CumulativeMatchesAsSurvivor; // 0x140
	int32_t CumulativeMatchesAsKiller; // 0x144
	FString LastMatchTimestamp; // 0x148
	float ExactPing; // 0x158
	bool hasAnActiveArchiveQuest; // 0x15c
	bool archiveQuestCanProgress; // 0x15d
	bool IsUsingKeyboard; // 0x15e
	FString ControllerType; // 0x160
	bool IsTutorialBotMatch; // 0x170
};

struct FCharacterViewSetting {
	FName label; // 0x0
	FCharacterDropdown CharacterDropdown; // 0xc
	FScreenshotViewSetting Settings; // 0x14
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
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

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FPostGameAnalyticsBase : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t BloodwebPoints; // 0xa8
	float GameDuration; // 0xac
	FString characterName; // 0xb0
	int32_t Rank; // 0xc0
	int32_t PipsGainedOrLost; // 0xc4
	FString MatchEndReason; // 0xc8
	bool IsTutorialBotMatch; // 0xd8
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FCompositeSection : FAnimLinkableElement {
	FName sectionName; // 0x30
	float StartTime; // 0x3c
	FName NextSectionName; // 0x40
	TArray<UAnimMetaData*> MetaData; // 0x50
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FLegacyPlayerSavedProfileDataShared {
	FString playerName; // 0x8
	int32_t SelectedCamperIndex; // 0x18
	int32_t SelectedSlasherIndex; // 0x1c
	TArray<FName> SelectedCharacterCustomization; // 0x20
	int32_t SlasherSkulls; // 0x30
	int32_t CamperSkulls; // 0x34
	int32_t CamperStreak; // 0x38
};

struct FCharacterCameraTag {
	ACameraActor* Camera; // 0x0
	TArray<FSimpleCharacterDropdown> Characters; // 0x8
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

struct FCustomGameBot {
	char _role; // 0x1
	char _difficulty; // 0x2
	int32_t _characterIndex; // 0x4
};

struct FOfferingCategoryData : FDBDTableRowBase {
	EOfferingCategory OfferingCategory; // 0x8
	TArray<EPlayerRole> Role; // 0x10
	FItemUIData UIData; // 0x20
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0xc
	char bShouldBeVisible : 1; // 0xc
	uint32_t LODIndex; // 0x10
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

struct FShopTransactionVirtualCurrencyParameters {
	int32_t virtualCurrencyAmount; // 0x0
	FString virtualCurrencyName; // 0x8
	FString virtualCurrencyType; // 0x18
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0xc
	TArray<bool> InputParamLocations; // 0x18
	int32_t NumOutputs; // 0x28
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x30
};

struct FLock {
	TWeakObjectPtr<UObject> _lockingObject; // 0x0
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

struct FUserGameStats {
	bool Disconnected; // 0x0
	int32_t FearTokens; // 0x4
	int32_t Skulls; // 0x8
	TMap<EDBDScoreCategory, int32_t> BonusBloodpoints; // 0x10
	TMap<EDBDScoreCategory, int32_t> _bloodpoints; // 0x60
};

struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	EAkCommSystem CommunicationSystem; // 0x20
};

struct FMaterialMap {
	UMaterialInterface* SrcMaterial; // 0x0
	UMaterialInterface* DstMaterial; // 0x8
};

struct FSocialPartyState {
	FCustomGamePresetData _customGamePresetData; // 0x8
	FPartySessionSettings _partySessionSettings; // 0x40
	FPartyMatchmakingSettings _partyMatchmakingSettings; // 0xd8
	TArray<FName> _playerJoinOrder; // 0x108
	TMap<FName, char> _playerChatIndices; // 0x118
	int32_t _gameType; // 0x168
	bool _isCrowdPlay; // 0x16c
	bool _isUsingDedicatedServer; // 0x16d
	FString _version; // 0x170
	int32_t _lastUpdatedTime; // 0x180
	int32_t _lastSentTime; // 0x184
};

struct FSavedDailyRitualContainerV7 {
	FString LastRitualReceivedDate; // 0x0
	FString LastRitualPopupDate; // 0x10
	FString LastRitualDismissedDate; // 0x20
	TArray<FLegacySavedDailyRitualInstance> rituals; // 0x30
};

struct FInteractionRequest {
	UInteractionDefinition* _interaction; // 0x0
	ADBDPlayer* _requester; // 0x10
};

struct FEnvironmentAnalytics : FUniquelyIdentifiedAnalytic {
	FString Environment; // 0x98
	FString Endpoint; // 0xa8
	FString Language; // 0xb8
	FString SelectedCountry; // 0xc8
	FString Timezone; // 0xd8
	FString DeviceProfile; // 0xe8
	FString GpuAdapter; // 0xf8
	FString GpuProviderName; // 0x108
	FString GpuDriverVersion; // 0x118
	FString Cpu; // 0x128
	int32_t QualitySetting; // 0x138
	bool IsFullScreen; // 0x13c
	bool IsAutomaticResolution; // 0x13d
	int32_t ScreenResolutionSetting; // 0x140
	int32_t EngineResolutionX; // 0x144
	int32_t EngineResolutionY; // 0x148
	FString Provider; // 0x150
	FString Device; // 0x160
	FString OperatingSystem; // 0x170
	FString KrakenVersion; // 0x180
	FString ContentVersion; // 0x190
	bool IsUsingKeyboard; // 0x1a0
	FString ControllerType; // 0x1a8
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FContentPerWebDistribution {
	int32_t CumulativeWeight; // 0x0
	int32_t Weight; // 0x4
	int32_t MinCount; // 0x8
	int32_t MaxCount; // 0xc
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x30
	char bOverrideInstanceCountSettings : 1; // 0x30
	char bOverrideTimeSinceRendererSettings : 1; // 0x30
};

struct FActorsInRangeBool {
	UActorPairQueryEvaluatorComponent* _actorPairQueryComponent; // 0x0
	AActor* _sourceActor; // 0x8
	AActor* _otherActor; // 0x10
	float _range; // 0x18
	bool _inRange; // 0x1c
};

struct FCharacterCustomizationDataTable : FDBDTableRowBase {
	int32_t characterIndex; // 0x8
	TSoftObjectPtr<UDataTable> CustomizationStoreDB; // 0x10
};

struct FLoadOutLobbyAnalytics : FLoadoutBaseAnalytics {
	int32_t Level; // 0x120
	int32_t Prestige; // 0x124
	FString characterName; // 0x128
	FString LobbyId; // 0x138
};

struct FFriendStatusUIData : FDBDTableRowBase {
	EAtlantaFriendUIStatus FriendStatus; // 0x8
	TSoftObjectPtr<UTexture2D> StatusIcon; // 0x10
	FText StatusText; // 0x40
};

struct FCannibalAnalytics : FChainsawAnalytics {
	TArray<FChainsawHitWithPowerCharge> HitWithPowerChargeEvents; // 0xb8
	TArray<FChainsawEvent> RevToTantrumEvents; // 0xc8
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x98
	FSlateBrush MarqueeImage; // 0x128
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

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FPerkProperties : FItemData {
	TArray<FName> Tags; // 0x1d0
	TArray<FOfferingEffect> Effects; // 0x1e0
	int32_t AssociatedPlayerIndex; // 0x1f0
	int32_t MandatoryOnBloodweblevel; // 0x1f4
	int32_t TeachableOnBloodweblevel; // 0x1f8
	int32_t AtlantaTeachableLevel; // 0x1fc
	TArray<EPerkCategory> PerkCategory; // 0x200
	TSoftClassPtr<UObject> PerkBlueprint; // 0x210
	TArray<EItemRarity> PerkLevelRarity; // 0x240
	TArray<FPerkLevelText> PerkLevelTunables; // 0x250
	FText PerkLevel1Description; // 0x260
	FText PerkLevel2Description; // 0x278
	FText PerkLevel3Description; // 0x290
	TArray<FString> AtlantaActivatableInteractionIDs; // 0x2a8
	bool AtlantaLowPriority; // 0x2b8
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x14
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FUserPlatform {
	FString PlatformStr; // 0x0
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FTeachableTooltipData : FBaseTooltipData {
	EItemRarity ItemRarity; // 0x98
	EInventoryItemType ItemType; // 0x99
	FString characterName; // 0xa0
	FString AvailabilityMessage; // 0xb0
	FString EffectMessage; // 0xc0
	bool UseInCharacterSelectionScreen; // 0xd0
	ETeachableStatus TeachableStatus; // 0xd1
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x20
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

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FSpecialEventEntryPopupData {
	FText Title; // 0x0
	FText Description; // 0x18
	FString ImagePath; // 0x30
	FString FrameLabel; // 0x40
	FText ImageBannerText; // 0x50
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
	TMap<int32_t, float> AnimationFrameSkipToTreshold; // 0x30
	TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x80
	int32_t SkippedUpdateFrames; // 0xd0
	int32_t SkippedEvalFrames; // 0xd4
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
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

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FFirecrackerEffectData {
	AFirecracker* Firecracker; // 0x0
	bool IsInRange; // 0x8
	bool IsFirstTime; // 0x9
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FParentItemIDs {
	bool MatchAnyItemID; // 0x0
	TArray<FName> ItemIDs; // 0x8
};

struct FReplicatedTrailPointList : FFastArraySerializer {
	TArray<FReplicatedTrailItem> Items; // 0x108
	ATormentTrailController* TormentTrailController; // 0x118
};

struct FSecretBotMatchNamesDefinition : FDBDTableRowBase {
	char ID; // 0x8
	FString Name; // 0x10
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

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0xc
	bool bIgnoreTimeDilation; // 0xd
	bool bPlayWhilePaused; // 0xe
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FClaimStatus {
	bool IsSet; // 0x0
	int32_t LastClaimedIndex; // 0x4
	FDateTime NextClaimTime; // 0x8
};

struct FSlasherLoadout {
	FCharacterCustomizationDropdown Slasher; // 0x0
	TArray<FDebugLoadoutAddon> PowerAddonIDs; // 0x60
	TArray<FDebugLoadoutPerk> Perks; // 0x70
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0xc
	FName ToStateName; // 0x18
};

struct FCharacterStateData {
	int32_t _pips; // 0x0
	FName _powerId; // 0x4
	TArray<FName> _addonIds; // 0x10
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FGameStateEvadeLoopStrategyMapContainer {
	TMap<EAIGameState, EAIFleeLoopStrategy> Map; // 0x0
};

struct FCrowdPlayLobbyResultsAnalytics : FUniquelyIdentifiedAnalytic {
	FString CrowdPlayId; // 0x98
	FString MatchID; // 0xa8
	int32_t PartySize; // 0xb8
	int32_t NbrQueueToPlayMembers; // 0xbc
	int32_t NbrGamesInSameSession; // 0xc0
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FVector2D ShadowOffset; // 0x88
	FLinearColor ShadowColorAndOpacity; // 0x90
	FSlateColor SelectedBackgroundColor; // 0xa0
	FLinearColor HighlightColor; // 0xc8
	FSlateBrush HighlightShape; // 0xd8
	FSlateBrush StrikeBrush; // 0x168
	FSlateBrush UnderlineBrush; // 0x1f8
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x4c
};

struct FWaitTimeAnalytics : FUniquelyIdentifiedAnalytic {
	float EnterLobbyWaitTime; // 0x98
	float EnterMatchWaitTime; // 0x9c
	FString MatchWaitStartUtc; // 0xa0
	FString MatchWaitStopUtc; // 0xb0
	FString LobbyWaitStartUtc; // 0xc0
	FString LobbyWaitStopUtc; // 0xd0
	FString LobbyWaitStopReason; // 0xe0
	FString MatchID; // 0xf0
	EGameType gameMode; // 0x100
	EPlayerRole Role; // 0x101
	int32_t PartySize; // 0x104
	int32_t Rank; // 0x108
	int32_t RankDifference; // 0x10c
	int32_t DaysSinceReset; // 0x110
};

struct FPathPak {
	FString Path; // 0x0
	int32_t PakId; // 0x10
	bool BringDependencies; // 0x14
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x2b0
	FButtonStyle RestoreButtonStyle; // 0x558
	FButtonStyle CloseButtonStyle; // 0x800
	FTextBlockStyle TitleTextStyle; // 0xaa8
	FSlateBrush ActiveTitleBrush; // 0xd30
	FSlateBrush InactiveTitleBrush; // 0xdc0
	FSlateBrush FlashTitleBrush; // 0xe50
	FSlateColor BackgroundColor; // 0xee0
	FSlateBrush OutlineBrush; // 0xf08
	FSlateColor OutlineColor; // 0xf98
	FSlateBrush BorderBrush; // 0xfc0
	FSlateBrush BackgroundBrush; // 0x1050
	FSlateBrush ChildBackgroundBrush; // 0x10e0
};

struct FEACClientInitAnalytics : FEACAnalytics {
	char ValidationErrorType; // 0xa8
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FSecretBotMatchLoadoutDefinition : FDBDTableRowBase {
	char BotRank; // 0x8
	ELoadoutItemType ItemEquipped; // 0x9
	EItemRarity ItemRarity; // 0xa
	char NbAddons; // 0xb
	EItemRarity AddonsRarity; // 0xc
	EItemRarity OfferingRarity; // 0xd
	char NbGenericPerks; // 0xe
	char NbCharacterSpecificPerks; // 0xf
	TArray<int32_t> PerkTiersList; // 0x10
	TArray<int32_t> CharactersIndexList; // 0x20
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x58
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
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

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FAtlantaGenericEventUIData : FAtlantaBaseEventsUIData {
	TArray<FAtlantaEventElementUIData> elementsUIData; // 0xe8
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x868
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FHeartbeatAnalytics : FUniquelyIdentifiedAnalytic {
	FString BeatTime; // 0x98
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FParticleBurst {
	int32_t count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x58
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FRegionQosInstance {
	FQosRegionInfo definition; // 0x0
	TArray<FDatacenterQosInstance> DatacenterOptions; // 0x30
};

struct FLegacySavedFearMarketItemInstance {
	FName ItemId; // 0x0
	int32_t Cost; // 0xc
	int32_t BloodpointConversion; // 0x10
	bool Purchased; // 0x14
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

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID CameraBindingID; // 0x20
	FTransform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70
	bool bIsFinalSection; // 0x71
};

struct FRichTextFreeTicketImageInfo {
	FMargin Padding; // 0x90
};

struct FProgressionPoints {
	EEmblemProgressionType Type; // 0x0
	float Points; // 0x4
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x30
	FName AttachedTo; // 0x38
};

struct FKey {
	FName KeyName; // 0x0
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0xb8
	uint32_t PaddedParameterSize; // 0xbc
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0xc0
	char bInitialized : 1; // 0xd0
};

struct FDBDJoinParams {
	EGameType GameType; // 0x0
};

struct FInteractionProficiencyData {
	bool IsActive; // 0x0
	int32_t Level; // 0x4
	EStatusEffectType ProficiencyType; // 0x8
	float value; // 0xc
};

struct FPerkLevelText {
	TArray<FString> Tunables; // 0x0
	FText TextOverride; // 0x10
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x30
	int32_t DestOffset; // 0x34
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FK26Path {
	AK26PathPart* PathEndArrow; // 0x0
	TArray<AK26PathPart*> PathParts; // 0x8
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
};

struct FArchiveQuestSpecialBehaviour : FDBDTableRowBaseWithId {
	FText Description; // 0x18
	EContextualType Type; // 0x30
	FName SpawnObjectId; // 0x34
	EAdditiveBehaviour AdditiveBehaviour; // 0x40
	EStackingBehaviours StackableBehaviour; // 0x41
	EOwnershipBehaviour OwnershipBehaviour; // 0x42
	int32_t SpawnQuantity; // 0x44
};

struct FModifierTickableConditionReplicatedData {
	TArray<UBaseModifierCondition*> Conditions; // 0x0
	bool HasCondition; // 0x10
	bool AuthorityDataSet; // 0x11
};

struct FItemAvailability {
	EItemAvailability ItemAvailability; // 0x0
	FString DLCId; // 0x8
	int32_t CloudInventoryId; // 0x18
	FString CommunityId; // 0x20
};

struct FStatusEffectSlotData {
	FString ID; // 0x0
	FString IconFilePath; // 0x10
	FString DisplayName; // 0x20
	FString Description; // 0x30
	EStatusEffectType StatusEffectType; // 0x40
	int32_t Level; // 0x44
};

struct FMindFocusObjectEntry {
	TArray<UObject*> FocusedBy; // 0x0
	float FocusedStartTime; // 0x10
	TMap<FName, float> CooldownMap; // 0x18
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString value; // 0x10
};

struct FScoreCategoryData : FDBDTableRowBase {
	EDBDScoreCategory Category; // 0x8
	int32_t ScoreCap; // 0xc
	int32_t ProgressionCap; // 0x10
	int32_t AchievementCap; // 0x14
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

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FMenuRoleChangeEventData {
	EPlayerRole PlayerRole; // 0x0
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

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x20
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xa8
	float AverageBrightness; // 0xb8
};

struct FSpecialEventSavedData {
	TArray<int32_t> SeenCinematics; // 0x0
	bool EventEntryScreenOpened; // 0x10
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x2c
	bool bIsValid; // 0x38
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
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

struct FTooltipPressedData {
	FVector2D touchPosition; // 0x0
};

struct FPlayerSavedProfileDataLocal {
	int32_t Tokens; // 0x0
	TArray<FName> offerings; // 0x8
	TMap<FName, bool> PageVisited; // 0x18
	TMap<FName, bool> ChatVisible; // 0x68
	TMap<FName, bool> OnboardingCompleted; // 0xb8
	int32_t ConsecutiveMatchStreak; // 0x108
	int32_t Wins; // 0x10c
	int32_t Losses; // 0x110
	uint64_t CurrentSeasonTicks; // 0x118
	FDailyRitualContainer DailyRituals; // 0x120
	FFearMarketOfferingInstance FearMarket; // 0x148
	FPlayerLoadoutData LastConnectedLoadout; // 0x168
	int32_t LastConnectedCharacterIndex; // 0x200
	FDateTime DisconnectPenaltyTime; // 0x208
	FDateTime LastMatchEndTime; // 0x210
	FDateTime LastMatchStartTime; // 0x218
	FDateTime LastKillerMatchEndTime; // 0x220
	FDateTime LastSurvivorMatchEndTime; // 0x228
	FBloodWebPersistentData BloodStoreKillers; // 0x230
	FBloodWebPersistentData BloodStoreSurvivors; // 0x270
	bool CrossplayAllowed; // 0x2b0
	bool AutoDeclineFriendInvites; // 0x2b1
	FDateTime _ongoingGameTime; // 0x2b8
	FPlayerSavedProfileCumulativeData _cumulativeData; // 0x2c0
	TArray<FSavedStatsData> _savedPlayerStats; // 0x2f8
	bool _hasBeenGivenKillerTutorialEndReward; // 0x308
	bool _hasBeenGivenSurvivorTutorialEndReward; // 0x309
	bool _hasSeenBloodpointsOnboardingCurrencyPopup; // 0x30a
	bool _hasSeenAuricCellsOnboardingCurrencyPopup; // 0x30b
	bool _hasSeenIridescentShardsOnboardingCurrencyPopup; // 0x30c
	TMap<int32_t, FCharacterSavedProfileData> _characterData; // 0x310
	TMap<FName, FSpecialEventSavedData> _specialEvent; // 0x360
	bool _hasBeginnerTooltipsBeenDisabledAtLevel; // 0x3b0
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0xc
	float value; // 0x10
};

struct FSpawnPopulationHandler {
	TArray<USceneComponent*> _allAvailableSpawners; // 0xb8
};

struct FCurrencyBalanceAnalytics : FUniquelyIdentifiedAnalytic {
	FString CurrencyName; // 0x98
	int32_t CurrencyBalance; // 0xa8
};

struct FMontageStopDefinition {
	FAnimationMontageDescriptor Descriptor; // 0x0
	float BlendOutTime; // 0x20
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FAkSoundLoop {
	UAkAudioEvent* _startEvent; // 0x8
	UAkAudioEvent* _endEvent; // 0x10
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FAnimationMappingRow : FDBDTableRowBase {
	TArray<FAnimationMapping> Mappings; // 0x8
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x10
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FSpawnerElement {
	TArray<FActorSpawnerProperties> ObjectsToBeSpawned; // 0x0
};

struct FLevelUpDetails : FDBDTableRowBase {
	int32_t Level; // 0x8
	int32_t Prestige; // 0xc
	FText Title; // 0x10
	FText Description; // 0x28
	FName ItemId; // 0x40
	EInventoryItemType ItemType; // 0x4c
	int32_t AssociatedCharacter; // 0x50
};

struct FRankDefinition {
	int32_t PipsRequired; // 0x0
};

struct FShopTransactionProducts {
	TArray<FShopTransactionVirtualCurrency> virtualCurrencies; // 0x0
	TArray<FShopTransactionItem> Items; // 0x10
};

struct FDangerStateGameStateMapContainer {
	TMap<EAIDangerState, EAIGameState> Map; // 0x0
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

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x78
	float PoseWeight; // 0x84
};

struct FSaveDataV7 : FSaveDataBase {
	FString PlayerUID; // 0x10
	int32_t SelectedCamperIndex; // 0x20
	int32_t SelectedSlasherIndex; // 0x24
	TArray<FName> offerings; // 0x28
	bool FirstTimePlaying; // 0x38
	int32_t ConsecutiveMatchStreak; // 0x3c
	bool HasBeenGivenKillerTutorialEndReward; // 0x40
	bool HasBeenGivenSurvivorTutorialEndReward; // 0x41
	bool HasSeenBloodpointsOnboardingCurrencyPopup; // 0x42
	bool HasSeenAuricCellsOnboardingCurrencyPopup; // 0x43
	bool HasSeenIridescentShardsOnboardingCurrencyPopup; // 0x44
	uint64_t CurrentSeasonTicks; // 0x48
	int32_t LastConnectedCharacterIndex; // 0x50
	FString DisconnectPenaltyTime; // 0x58
	FString LastMatchEndTime; // 0x68
	FString LastMatchStartTime; // 0x78
	FString LastKillerMatchEndTime; // 0x88
	FString LastSurvivorMatchEndTime; // 0x98
	int32_t Experience; // 0xa8
	int32_t BonusExperience; // 0xac
	int32_t FearTokens; // 0xb0
	bool FearTokensMigrated; // 0xb4
	FString OngoingGameTime; // 0xb8
	int32_t CumulativeMatches; // 0xc8
	TArray<FKeyTupleBool> PageVisited; // 0xd0
	TArray<FKeyTupleBool> ChatVisible; // 0xe0
	int32_t CumulativeMatchesAsSurvivor; // 0xf0
	int32_t CumulativeMatchesAsKiller; // 0xf4
	int32_t CumulativeMatchesAsSurvivorNoFriends; // 0xf8
	int32_t CumulativeMatchesAsKillerNoFriends; // 0xfc
	FDateTime LastMatchTimestamp; // 0x100
	FDateTime LastSessionTimestamp; // 0x108
	int32_t CumulativeSessions; // 0x110
	FString CumulativePlaytime; // 0x118
	TArray<FCharacterKeyTuple> CharacterData; // 0x128
	TArray<FName> OwnedCharms; // 0x138
	FSavedDailyRitualContainerV7 DailyRituals; // 0x148
	FSavedFearMarketOfferingInstanceV7 FearMarket; // 0x188
	FLegacySavedPlayerLoadoutData LastLoadout; // 0x1b8
	FConsoleUserSettings ConsoleUserSettings; // 0x250
	TArray<FSavedStatsDataV7> PlayerStatProgression; // 0x300
	TArray<FString> OwnedContent; // 0x310
	TArray<FSavedSpecialEventDataV7> SpecialEvent; // 0x320
	FLegacySavedBloodWebPersistentData BloodStoreKillers; // 0x330
	FLegacySavedBloodWebPersistentData BloodStoreSurvivors; // 0x370
	TArray<FKeyTupleBool> OnboardingCompleted; // 0x3b0
	bool IsCrossplayAllowed; // 0x3c0
	bool AutoDeclineFriendInvites; // 0x3c1
};

struct FLegacySavedFearMarketOfferingInstance {
	TArray<FLegacySavedFearMarketItemInstance> ObjectsForSale; // 0x0
	FDateTime StartTime; // 0x10
	FDateTime EndTime; // 0x18
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

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FEndpointLatencyAnalytics : FUniquelyIdentifiedAnalytic {
	TArray<FEndpointLatencyData> Endpoints; // 0x98
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

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FLegacySavedBloodwebChest {
	FName ID; // 0x0
	FName EventId; // 0xc
	EItemRarity Rarity; // 0x18
	TArray<float> GivenItemRarity; // 0x20
};

struct FFrameTravelTimeAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString DynamicRange; // 0xa8
	FString PixelDensity; // 0xb8
	FString RenderResolution; // 0xc8
	float FrameIssuedToClientArrivalTotalTime; // 0xd8
	float FrameIssuedToBeginRenderingTime; // 0xdc
	float FrameRenderingTime; // 0xe0
	float FrameEncodingTime; // 0xe4
	float FrameFinishedEncodingToClientArrivalTime; // 0xe8
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0xc
	FPerPlatformInt DefaultProfileFromLODIndex; // 0x10
};

struct FDBDAttackTargetTracker {
	bool _useTargetTracking; // 0x0
	FStatProperty _targetSnapDistance; // 0x8
	FName _ownerEyeSocketName; // 0x90
	FName _targetBoneName; // 0x9c
	TWeakObjectPtr<ACharacter> _trackedTarget; // 0xa8
	TWeakObjectPtr<ADBDPlayer> _owningPlayer; // 0xb0
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FNewSurvivorTutorialAnalytics : FUniquelyIdentifiedAnalytic {
	bool IsLookAroundComplete; // 0x98
	bool IsWalkAroundComplete; // 0x99
	bool IsRunningComplete; // 0x9a
	bool IsCrouchComplete; // 0x9b
	bool IsFirstVaultComplete; // 0x9c
	int32_t TimeToCompleteAreaOne; // 0xa0
	bool IsGeneratorComplete; // 0xa4
	bool IsSecondVaultComplete; // 0xa5
	int32_t TimeToCompleteAreaTwo; // 0xa8
	bool IsBeartrapComplete; // 0xac
	int32_t TimeToCompleteAreaThree; // 0xb0
	bool IsPalletComplete; // 0xb4
	bool IsUnhookMegComplete; // 0xb5
	bool IsLockerComplete; // 0xb6
	bool IsGetUnhookedComplete; // 0xb7
	bool IsHealMegComplete; // 0xb8
	bool IsGetHealedComplete; // 0xb9
	bool IsOpenGateComplete; // 0xba
	bool IsEscapeComplete; // 0xbb
	int32_t TimeToCompleteAreaFour; // 0xbc
	int32_t TotalTimeInTutorial; // 0xc0
	FString tutorialId; // 0xc8
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FNamedVector {
	FVector value; // 0x0
	FName Name; // 0xc
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FBloodwebNodeProperties {
	EBloodwebNodeContentType ContentType; // 0x0
	EItemRarity Rarity; // 0x1
	TArray<FString> Tags; // 0x8
	int32_t characterId; // 0x18
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingID; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FWalesCypherAnalytics : FUniquelyIdentifiedAnalytic {
	FString EnteredSequence; // 0x98
	FString ExpectedSequence; // 0xa8
	int32_t TimeoutThreshold; // 0xb8
	bool success; // 0xbc
	bool TIMEOUT; // 0xbd
	bool CharmGranted; // 0xbe
	int32_t ValidCharacterSelcted; // 0xc0
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x18
	bool bOverwriteFile; // 0x1c
	bool bAsync; // 0x1d
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x10
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FAuthorityDiscernedCharacter {
	ACharacter* _character; // 0x0
	bool _isSighted; // 0x8
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FTutorialObjectivesViewData {
	FString Description; // 0x0
	FInteractionPromptViewData PrimaryInteractionPromptViewData; // 0x10
	FInteractionPromptViewData SecondaryInteractionPromptViewData; // 0xc0
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xb0
	FGuid LightGuid; // 0xe0
	int32_t PreviewShadowMapChannel; // 0xf0
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x50
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x10
	char bInstanceSynced : 1; // 0x18
};

struct FDoctorStatusData {
	EAfflictionLevel AfflictionLevel; // 0x0
};

struct FMediaCaptureOptions {
	EMediaCaptureCroppingType Crop; // 0x0
	FIntPoint CustomCapturePoint; // 0x4
	bool bResizeSourceBuffer; // 0xc
	bool bSkipFrameWhenRunningExpensiveTasks; // 0xd
};

struct FEmblemQualityImages {
	FSlateBrush HighlightImage; // 0x0
	FSlateBrush DarkImage; // 0x90
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0xc
	float PositionBetweenMarkers; // 0x18
};

struct FSimulationStageMetaData {
	FName IterationSource; // 0x0
	char bSpawnOnly : 1; // 0xc
	char bWritesParticles : 1; // 0xc
	TArray<FName> OutputDestinations; // 0x10
	int32_t MinStage; // 0x20
	int32_t MaxStage; // 0x24
};

struct FAtlantaKillerSoundDistanceData : FDBDTableRowBase {
	float MinRadiusSoundDistance; // 0x8
	float MaxRadiusSoundDistance; // 0xc
	float MinRangeSoundHeard; // 0x10
};

struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x20
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector targetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FAvailableInteractionCalculator {
	TSet<UInteractionDefinition*> _interactions; // 0x48
	float _fullEvaluationFrequency; // 0x1b0
	int32_t _maxFramesForFullEvaluation; // 0x1b4
	float _secondsBetweenNullReferenceCleanup; // 0x1b8
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x24
	bool bSelfContext; // 0x34
	bool bWasDeprecated; // 0x35
};

struct FQuestEventDefinition : FDBDTableRowBaseWithId {
	TArray<FGameplayTag> TrackedGameEvents; // 0x18
	TSoftClassPtr<UObject> QuestEventEvaluator; // 0x28
};

struct FBloodwebRarityPerRingDistribution : FDBDTableRowBase {
	int32_t CommonMinCount; // 0x8
	int32_t CommonMaxCount; // 0xc
	int32_t CommonWeight; // 0x10
	int32_t UncommonMinCount; // 0x14
	int32_t UncommonMaxCount; // 0x18
	int32_t UncommonWeight; // 0x1c
	int32_t RareMinCount; // 0x20
	int32_t RareMaxCount; // 0x24
	int32_t RareWeight; // 0x28
	int32_t VeryRareMinCount; // 0x2c
	int32_t VeryRareMaxCount; // 0x30
	int32_t VeryRareWeight; // 0x34
	int32_t UltraRareMinCount; // 0x38
	int32_t UltraRareMaxCount; // 0x3c
	int32_t UltraRareWeight; // 0x40
	int32_t ArtefactMinCount; // 0x44
	int32_t ArtefactMaxCount; // 0x48
	int32_t ArtefactWeight; // 0x4c
	int32_t SpectralMinCount; // 0x50
	int32_t SpectralMaxCount; // 0x54
	int32_t SpectralWeight; // 0x58
	int32_t SpecialEventMinCount; // 0x5c
	int32_t SpecialEventMaxCount; // 0x60
	int32_t SpecialEventWeight; // 0x64
	int32_t LegendaryMinCount; // 0x68
	int32_t LegendaryMaxCount; // 0x6c
	int32_t LegendaryWeight; // 0x70
	int32_t EpicMinCount; // 0x74
	int32_t EpicMaxCount; // 0x78
	int32_t EpicWeight; // 0x7c
	int32_t SuperEpicMinCount; // 0x80
	int32_t SuperEpicMaxCount; // 0x84
	int32_t SuperEpicWeight; // 0x88
	int32_t UltraEpicMinCount; // 0x8c
	int32_t UltraEpicMaxCount; // 0x90
	int32_t UltraEpicWeight; // 0x94
};

struct FPlayerSavedProfileData {
	FString PlayerUID; // 0x0
	FPlayerSavedProfileDataShared SharedData; // 0x10
	FPlayerSavedProfileDataLocal LocalData; // 0x60
	FConsoleUserSettings ConsoleUserSettings; // 0x418
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FAtlantaTutorialEndReward : FDBDTableRowBase {
	int32_t BloodpointReward; // 0x8
	int32_t AuricCellsRewards; // 0xc
	int32_t FearTokensReward; // 0x10
	TArray<FName> CharactersRewards; // 0x18
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FMenuCharacterUIData : FDBDTableRowBase {
	int32_t characterIndex; // 0x8
	FVector offsetMainMenuForwardPosition; // 0xc
	FVector offsetMainMenuBackwardPosition; // 0x18
};

struct FBloodwebPrestigeModifiers : FDBDTableRowBase {
	float CommonItemProbabilityModifier; // 0x8
	float UncommonItemProbabilityModifier; // 0xc
	float RareItemProbabilityModifier; // 0x10
	float VeryRareItemProbabilityModifier; // 0x14
	float UltraRareItemProbabilityModifier; // 0x18
	float ArtifactItemProbabilityModifier; // 0x1c
	float SpectralItemProbabilityModifier; // 0x20
	float LegendaryItemProbabilityModifier; // 0x24
};

struct FQuadrantSpawnTypeProperties {
	EQuadrantSpawnType QuadrantSpawnType; // 0x0
	TArray<FSectionLenghtsProperties> SectionLenghts; // 0x8
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xd0
	FBoneReference LeftHandFK; // 0xe4
	FBoneReference RightHandIK; // 0xf8
	FBoneReference LeftHandIK; // 0x10c
	TArray<FBoneReference> IKBonesToMove; // 0x120
	float HandFKWeight; // 0x130
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FDailyRitualPossibleCharacters {
	TArray<int32_t> CharacterIDs; // 0x0
	TArray<EPlayerRole> Roles; // 0x10
	TArray<EPlayerRole> SelectOneCharacterFromRoles; // 0x20
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FGameInitAnalytics : FUniquelyIdentifiedAnalytic {
	FString InitGuid; // 0x98
	FString ProgressionName; // 0xa8
	bool success; // 0xb8
	FString LoadCompleteState; // 0xc0
	float ElapsedTime; // 0xd0
	uint32_t FailureCount; // 0xd4
	FString AdditionalInfo; // 0xd8
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FShopTransactionCustomData {
	FShopTransactionProducts productsReceived; // 0x0
	FString transactionName; // 0x20
	FString TransactionType; // 0x30
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

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FLegionSurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t DeepWoundCount; // 0xa8
	int32_t FrenzyEffectivements; // 0xac
	int32_t DeepWoundDying; // 0xb0
	bool DeepWoundEscape; // 0xb4
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FAkEventWithSubtitle {
	UAkAudioEvent* AudioEvent; // 0x0
	char Weight; // 0x8
	bool HasSubtitles; // 0x9
};

struct FSaveDataBase {
	int32_t VersionNumber; // 0x8
};

struct FNewKillerTutorialAnalytics : FUniquelyIdentifiedAnalytic {
	bool IsKickGeneratorComplete; // 0x98
	bool IsFollowSurvivorComplete; // 0x99
	int32_t TimeToCompleteAreaOne; // 0x9c
	bool IsDestroyPalletComplete; // 0xa0
	int32_t TimeToCompleteAreaTwo; // 0xa4
	bool IsBeartrapComplete; // 0xa8
	bool IsHitSurvivorComplete; // 0xa9
	bool IsKoSurvivorComplete; // 0xaa
	bool IsPickupSurvivorComplete; // 0xab
	bool IsHookSurvivorComplete; // 0xac
	bool IsCloseHatchComplete; // 0xad
	bool IsKillSurvivorComplete; // 0xae
	int32_t TimeToCompleteAreaThree; // 0xb0
	int32_t TotalTimeInTutorial; // 0xb4
	FString tutorialId; // 0xb8
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x14
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xf0
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8
	TArray<FGuid> CachedStaticLighting; // 0x108
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x118
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x58
};

struct FReplicationTimerData {
	float Timestamp; // 0x0
	float Duration; // 0x4
	FFloat_NetQuantize8 RemainingTimePercent; // 0x8
	ETimerState State; // 0x10
};

struct FItemData : FBaseItemData {
	TSoftObjectPtr<USkeletalMesh> ItemMesh; // 0x150
	EItemHandPosition HandPosition; // 0x180
	EPlayerRole Role; // 0x181
	EItemRarity Rarity; // 0x182
	bool Inventory; // 0x183
	bool Chest; // 0x184
	EKillerAbilities RequiredKillerAbility; // 0x185
	FItemAvailability Availability; // 0x188
	bool IsInNonViolentBuild; // 0x1b8
	bool IsAvailableInAtlantaBuild; // 0x1b9
	bool AntiDLC; // 0x1ba
	bool Bloodweb; // 0x1bb
	bool CanKeepInLoadout; // 0x1bc
	FName EventId; // 0x1c0
	bool CanUseAfterEventEnd; // 0x1cc
	ELoadoutItemType ItemType; // 0x1cd
};

struct FAddonViewData : FBaseLoadoutPartViewData {
	float Cooldown; // 0x58
	EStatusEffectType StatusEffectType; // 0x5c
};

struct FCharacterToolData {
	EPlayerRole Role; // 0x0
	int32_t characterId; // 0x4
	FName OutfitId; // 0x8
	FName CharmId; // 0x14
	FName SurvivorHead; // 0x20
	FName SurvivorTorso; // 0x2c
	FName SurvivorLegs; // 0x38
	FName KillerHead; // 0x44
	FName KillerBody; // 0x50
	FName KillerWeapon; // 0x5c
	UAnimationAsset* AnimationToPlay; // 0x68
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x30
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FK26PathData {
	bool IsInUse; // 0x0
	bool IsVisibleToKiller; // 0x1
	bool IsVisibleForSurvivors; // 0x2
	int32_t MaxVisibleIndex; // 0x4
	TArray<FVector> PathPartLocations; // 0x8
	TArray<FRotator> PathPartRotations; // 0x18
	FVector PathEndLocation; // 0x28
	FRotator PathEndRotation; // 0x34
};

struct FMovieSceneSequenceID {
	uint32_t value; // 0x0
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
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

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FNiagaraTestStructInner {
	FVector InnerVector1; // 0x0
	FVector InnerVector2; // 0xc
};

struct FPalletPushSettings {
	bool IgnorePlayerExecutingPulldown; // 0x0
	EPalletPushSideStrategy PalletPushSideStrategy; // 0x1
};

struct FRewardItem {
	ERewardItemType Type; // 0x0
	FString ID; // 0x8
	int32_t amount; // 0x18
};

struct FPlayerLevelMessage {
	int32_t Level; // 0x0
	int32_t TotalXp; // 0x4
};

struct FMediaIOConfiguration {
	bool bIsInput; // 0x0
	FMediaIOConnection MediaConnection; // 0x4
	FMediaIOMode MediaMode; // 0x2c
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

struct FEffectCameraTypeSettings {
	ECustomizationCategory Category; // 0x0
	bool VisibilityInFirstPerson; // 0x1
	bool VisibilityInThirdPerson; // 0x2
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
	FSlateColor BorderBackgroundColor; // 0x558
	FSlateSound CheckedSlateSound; // 0x580
	FSlateSound UncheckedSlateSound; // 0x5a0
	FSlateSound HoveredSlateSound; // 0x5c0
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x58
	int32_t NumChannelsUsed; // 0x2d8
	EMovieSceneBlendType BlendType; // 0x2dc
};

struct FAtlantaTutorialLevelData : FDBDTableRowBase {
	FName ID; // 0x8
	FText Title; // 0x18
	FText Description; // 0x30
	FString IconPath; // 0x48
	FString MapName; // 0x58
	bool IsKillerTutorial; // 0x68
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x1c
	FName UserTag; // 0x20
};

struct FClippedActor {
	TArray<TWeakObjectPtr<UPrimitiveComponent>> DisplayComponents; // 0x0
	TMap<UPrimitiveComponent*, TWeakObjectPtr<UPrimitiveComponent>> CollidingPrimitives; // 0x10
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x14
	float LimitRadius; // 0x20
	ESphericalLimitType LimitType; // 0x24
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

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0
	int32_t NumInitPtrs; // 0x4
	int32_t NumEvalPtrs; // 0x8
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x1c
	float Weight; // 0x28
	bool bMaintainOffset; // 0x2c
};

struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHardwareCodecLowLatencyMode; // 0x38
};

struct FMovieSceneEvaluationTrackSegments {
	TArray<int32_t> SegmentIdentifierToIndex; // 0x0
	TArray<FMovieSceneSegment> SortedSegments; // 0x10
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FAttackEventTypeDetails : FDBDTableRowBase {
	FGameplayTag GameplayTag; // 0x8
	EAttackEventType AttackEventType; // 0x14
	bool CanBeProtective; // 0x15
	int32_t AssociatedCharacter; // 0x18
	FString Description; // 0x20
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78
	TArray<FBoneReference> SourceBones; // 0x88
	TArray<FBoneReference> OnlyDriveBones; // 0x98
	TArray<FPoseDriverTarget> PoseTargets; // 0xa8
	FBoneReference EvalSpaceBone; // 0xe8
	FRBFParams RBFParams; // 0xfc
	EPoseDriverSource DriveSource; // 0x128
	EPoseDriverOutput DriveOutput; // 0x129
	char bOnlyDriveSelectedBones : 1; // 0x12a
};

struct FNiagaraVariableMetaData {
	FText Description; // 0x0
	FText CategoryName; // 0x18
	bool bAdvancedDisplay; // 0x30
	int32_t EditorSortPriority; // 0x34
	bool bInlineEditConditionToggle; // 0x38
	FNiagaraInputConditionMetadata EditCondition; // 0x40
	FNiagaraInputConditionMetadata VisibleCondition; // 0x60
	TMap<FName, FString> PropertyMetaData; // 0x80
	FName ScopeName; // 0xd0
	ENiagaraScriptParameterUsage Usage; // 0xdc
	bool bIsStaticSwitch; // 0xe0
	int32_t StaticSwitchDefaultValue; // 0xe4
	bool bAddedToNodeGraphDeepCopy; // 0xe8
	bool bOutputIsPersistent; // 0xe9
	FName CachedNamespacelessVariableName; // 0xec
	bool bCreatedInSystemEditor; // 0xf8
	bool bUseLegacyNameString; // 0xf9
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x38
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FLandingPageStorefrontTabData {
	FString Type; // 0x0
	FDateTime NewStartDate; // 0x10
	FDateTime NewEndDate; // 0x18
	UTexture2DDynamic* Image; // 0x20
	FText Title; // 0x28
	FText TagText; // 0x40
};

struct FConditionalMaterialReplacer {
	FName ItemTag; // 0x0
	TMap<FName, FMaterialReplacerArray> ConditionalMaterials; // 0x10
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FFrameNumber {
	int32_t value; // 0x0
};

struct FConsoleUserSettings {
	TArray<FInputActionKeyMapping> ActionMappings; // 0x8
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x18
	int32_t MenuScaleFactor; // 0x28
	int32_t HudScaleFactor; // 0x2c
	int32_t SkillCheckScaleFactor; // 0x30
	bool LargeText; // 0x34
	int32_t Gamma; // 0x38
	bool HUDPlayerNamesVisibility; // 0x3c
	bool HUDScoreEventsVisibility; // 0x3d
	bool HUDKillerHookCountVisibility; // 0x3e
	int32_t MainVolume; // 0x40
	int32_t MenuMusicVolume; // 0x44
	bool UseHeadphones; // 0x48
	bool MuteOnFocusLost; // 0x49
	int32_t KillerMouseSensitivity; // 0x4c
	int32_t SurvivorMouseSensitivity; // 0x50
	int32_t KillerControllerSensitivity; // 0x54
	int32_t SurvivorControllerSensitivity; // 0x58
	bool InvertY; // 0x5c
	bool SurvivorInvertY; // 0x5d
	bool KillerToggleInteractions; // 0x5e
	bool SurvivorToggleInteractions; // 0x5f
	bool SprintToCancel; // 0x60
	int32_t HighestWeightSeenNews; // 0x64
	bool UseAtlantaCustomizedHuds; // 0x68
	bool UseAtlantaSurvivorQuickTurn; // 0x69
	bool UseAtlantaKillerQuickTurn; // 0x6a
	TArray<FAtlantaCustomizedHudSettings> AtlantaCustomizedHuds; // 0x70
	bool HasAcceptedCrossplayPopup; // 0x80
	bool HasAcceptedCrossProgressionPopup; // 0x81
	FString PartyPrivacyState; // 0x88
	int32_t ColorBlindMode; // 0x98
	int32_t ColorBlindModeIntensity; // 0x9c
	bool BeginnerMode; // 0xa0
	bool Subtitles; // 0xa1
	int32_t SubtitlesBackgroundOpacity; // 0xa4
	int32_t SubtitlesSize; // 0xa8
};

struct FSkillCheckViewData {
	FKey InputKey; // 0x0
	FKey InputKey2; // 0x20
	float HitAreaStart; // 0x40
	float HitAreaLength; // 0x44
	float BonusAreaStart; // 0x48
	float BonusAreaLength; // 0x4c
	bool IsHexed; // 0x50
	bool IsSpectating; // 0x51
	bool IsReversed; // 0x52
	bool IsMirrored; // 0x53
	bool IsInsane; // 0x54
};

struct FStatusEffectInitializationData {
	ADBDPlayer* originatingPlayer; // 0x0
	bool HasOriginatingPlayer; // 0x8
	UGameplayModifierContainer* originatingEffect; // 0x10
	bool HasOriginatingEffect; // 0x18
	EStatusEffectType StatusEffectType; // 0x19
	float customParam; // 0x1c
	float InitializationLifeTime; // 0x20
	bool AuthorityDataSet; // 0x24
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x28
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2
	char value; // 0x3
};

struct FShopTransactionCurrencyProducts {
	TArray<FShopTransactionVirtualCurrency> virtualCurrencies; // 0x0
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

struct FInventorySlotData {
	FName ItemId; // 0x0
	FString IconFilePath; // 0x10
	FString DisplayName; // 0x20
	FString ParentDisplayName; // 0x30
	FString Description; // 0x40
	TArray<EPerkCategory> PerkCategory; // 0x50
	EOfferingCategory OfferingCategory; // 0x60
	EInventoryItemType ItemType; // 0x61
	EItemRarity Rarity; // 0x62
	EStatusEffectType StatusEffectType; // 0x63
	int32_t Level; // 0x64
	FString subtitle; // 0x68
	int32_t StackCount; // 0x78
	EItemAvailability Availability; // 0x7c
	bool IsTeachablePerk; // 0x7d
	bool IsSlasherPerk; // 0x7e
	bool IsPerkAvailableInFearMarket; // 0x7f
	bool IsPerkAvailableInBloodWeb; // 0x80
	int32_t TeachableLevel; // 0x84
	FString DlcDisplayName; // 0x88
	bool IsLocked; // 0x98
	FSpecialEventUIInfo EventInfo; // 0xa0
	int32_t UnlockableLevel; // 0xf0
	bool IsLimitedItem; // 0xf4
	bool IsPrivateIcon; // 0xf5
	bool IsEnabled; // 0xf6
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0xc
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0xd
	FText Description; // 0x10
};

struct FHitValidationEditorConfig : FTableRowBase {
	EHitValidatorConfigName ConfigName; // 0x8
	float CapsuleInflation; // 0xc
	float MaximumDistance; // 0x10
};

struct FLandscapeLayer {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	bool bVisible; // 0x1c
	bool bLocked; // 0x1d
	float HeightmapAlpha; // 0x20
	float WeightmapAlpha; // 0x24
	ELandscapeBlendMode BlendMode; // 0x28
	TArray<FLandscapeLayerBrush> Brushes; // 0x30
	TMap<ULandscapeLayerInfoObject*, bool> WeightmapLayerAllocationBlend; // 0x40
};

struct FPhaseWalkInfo {
	bool IsActivePhaseWalking; // 0x0
	bool IsPassivePhaseWalking; // 0x1
	bool IsInteractionPhaseWalking; // 0x2
	FVector HuskLocation; // 0x4
	FRotator HuskRotation; // 0x10
	bool TeleportToHusk; // 0x1c
};

struct FBloodwebProgressionValue : FDBDTableRowBase {
	int32_t InnerRingNodeCount; // 0x8
	int32_t MiddleRingNodeCount; // 0xc
	int32_t OuterRingNodeCount; // 0x10
	int32_t Common_MinCount; // 0x14
	int32_t Common_MaxCount; // 0x18
	int32_t Uncommon_MinCount; // 0x1c
	int32_t Uncommon_MaxCount; // 0x20
	int32_t Rare_MinCount; // 0x24
	int32_t Rare_MaxCount; // 0x28
	int32_t VeryRare_MinCount; // 0x2c
	int32_t VeryRare_MaxCount; // 0x30
	int32_t UltraRare_MinCount; // 0x34
	int32_t UltraRare_MaxCount; // 0x38
	int32_t Artifact_MinCount; // 0x3c
	int32_t Artifact_MaxCount; // 0x40
	int32_t Spectral_MinCount; // 0x44
	int32_t Spectral_MaxCount; // 0x48
	int32_t SpecialEvent_MinCount; // 0x4c
	int32_t SpecialEvent_MaxCount; // 0x50
	int32_t Legendary_MinCount; // 0x54
	int32_t Legendary_MaxCount; // 0x58
	int32_t InnerRingCommonItemProbability; // 0x5c
	int32_t MiddleRingCommonItemProbability; // 0x60
	int32_t OuterRingCommonItemProbability; // 0x64
	int32_t InnerRingUncommonItemProbability; // 0x68
	int32_t MiddleRingUncommonItemProbability; // 0x6c
	int32_t OuterRingUncommonItemProbability; // 0x70
	int32_t InnerRingRareItemProbability; // 0x74
	int32_t MiddleRingRareItemProbability; // 0x78
	int32_t OuterRingRareItemProbability; // 0x7c
	int32_t InnerRingVeryRareItemProbability; // 0x80
	int32_t MiddleRingVeryRareItemProbability; // 0x84
	int32_t OuterRingVeryRareItemProbability; // 0x88
	int32_t InnerRingUltraRareItemProbability; // 0x8c
	int32_t MiddleRingUltraRareItemProbability; // 0x90
	int32_t OuterRingUltraRareItemProbability; // 0x94
	int32_t InnerRingArtifactItemProbability; // 0x98
	int32_t MiddleRingArtifactItemProbability; // 0x9c
	int32_t OuterRingArtifactItemProbability; // 0xa0
	int32_t InnerRingSpectralItemProbability; // 0xa4
	int32_t MiddleRingSpectralItemProbability; // 0xa8
	int32_t OuterRingSpectralItemProbability; // 0xac
	int32_t InnerRingSpecialEventItemProbability; // 0xb0
	int32_t MiddleRingSpecialEventItemProbability; // 0xb4
	int32_t OuterRingSpecialEventItemProbability; // 0xb8
	int32_t InnerRingLegendaryItemProbability; // 0xbc
	int32_t MiddleRingLegendaryItemProbability; // 0xc0
	int32_t OuterRingLegendaryItemProbability; // 0xc4
	int32_t InnerRingEpicItemProbability; // 0xc8
	int32_t MiddleRingEpicItemProbability; // 0xcc
	int32_t OuterRingEpicItemProbability; // 0xd0
	int32_t InnerRingSuperEpicItemProbability; // 0xd4
	int32_t MiddleRingSuperEpicItemProbability; // 0xd8
	int32_t OuterRingSuperEpicItemProbability; // 0xdc
	int32_t InnerRingUltraEpicItemProbability; // 0xe0
	int32_t MiddleRingUltraEpicItemProbability; // 0xe4
	int32_t OuterRingUltraEpicItemProbability; // 0xe8
	int32_t EntityStartingRound; // 0xec
};

struct FSaveValidationData {
	FString PlayerUID; // 0x0
	TMap<int32_t, FCharacterValidationData> CharacterData; // 0x10
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FHelpContextMappingData : FDBDTableRowBase {
	FString ContextName; // 0x8
	TArray<FName> TopicIds; // 0x18
};

struct FShopAnalytics : FUniquelyIdentifiedAnalytic {
	FString LogMessage; // 0x98
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FPartySessionSettings {
	FString _sessionId; // 0x8
	TMap<FString, FString> _gameSessionInfos; // 0x18
	FString _owningUserId; // 0x68
	FString _owningUserName; // 0x78
	bool _isDedicated; // 0x88
	int64_t _matchmakingTimestamp; // 0x90
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x29
};

struct FShopTransactionCurrencyCustomData {
	FShopTransactionCurrencyProducts productsReceived; // 0x0
	FString transactionName; // 0x10
	FString TransactionType; // 0x20
};

struct FSoundModulationParameter {
	FName Control; // 0x0
	float value; // 0xc
};

struct FEACAnalytics : FUniquelyIdentifiedAnalytic {
	FString LogMessage; // 0x98
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

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x28
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x14
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FTemplateSequenceSectionTemplate : FMovieSceneEvalTemplate {
	FFrameNumber SectionStartTime; // 0x20
	FGuid OuterBindingId; // 0x24
	FMovieSceneEvaluationOperand InnerOperand; // 0x34
};

struct FDatasmithImportBaseOptions {
	EDatasmithImportScene SceneHandling; // 0x0
	bool bIncludeGeometry; // 0x1
	bool bIncludeMaterial; // 0x2
	bool bIncludeLight; // 0x3
	bool bIncludeCamera; // 0x4
	bool bIncludeAnimation; // 0x5
	FDatasmithAssetImportOptions AssetOptions; // 0x8
	FDatasmithStaticMeshImportOptions StaticMeshOptions; // 0x14
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FHitValidatorInstigatorParams {
	AActor* Instigator; // 0x0
	UPrimitiveComponent* HitPrimitive; // 0x50
};

struct FTagStateBool {
	bool _isTrue; // 0x0
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x1c
	FDynamicPropertyPath SourcePath; // 0x28
	EBindingKind Kind; // 0x50
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinID; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FCustomerSupportClientLoginAnalytics : FUniquelyIdentifiedAnalytic {
	FString playerName; // 0x98
	FString Provider; // 0xa8
};

struct FTargetMoveAwayToFastInfo {
	float AccumulatedTime; // 0x0
	float CooldownUntilTime; // 0x4
	FAIDetectedStimulus Stimulus; // 0x8
};

struct FAccessKey {
	FString KeyId; // 0x0
	FString Key; // 0x10
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x18
	FGuid ExpressionGUID; // 0x20
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bForceOpaque; // 0x6
};

struct FDirectionalHeightFogInterpolationValues {
	float FogDensity; // 0x0
	FLinearColor FogInscatteringColor; // 0x4
	float DirectionalInscatteringExponent; // 0x14
	float DirectionalInscatteringStartDistance; // 0x18
	FLinearColor DirectionalInscatteringColor; // 0x1c
	float FogHeightFalloff; // 0x2c
	float FogMaxOpacity; // 0x30
	float StartDistance; // 0x34
	TArray<FHeightFogGradientEntry> FogGradient; // 0x38
	float DistanceUntilFlatFog; // 0x48
	float DistanceUntilNoFog; // 0x4c
	bool bEnableVolumetricFog; // 0x50
	float VolumetricFogScatteringDistribution; // 0x54
	FColor VolumetricFogAlbedo; // 0x58
	FLinearColor VolumetricFogEmissive; // 0x5c
	float VolumetricFogExtinctionScale; // 0x6c
	float VolumetricFogDistance; // 0x70
	float VolumetricFogStaticLightingScatteringIntensity; // 0x74
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x78
};

struct FPartyMemberRepData : FOnlinePartyRepDataBase {
	FUserPlatform platform; // 0x20
	FUniqueNetIdRepl PlatformUniqueId; // 0x60
	FString PlatformSessionId; // 0xb8
	ECrossplayPreference CrossplayPreference; // 0xf8
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
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

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0xa0
	char bPropagateNotifiesToLinkedInstances : 1; // 0xa0
};

struct FCharacterKeyTuple {
	int32_t Key; // 0x0
	FCharacterSavedProfileDataV7 Data; // 0x8
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FAkXboxOneGDKApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float alpha; // 0x2c
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FTemplateSequenceInstanceData : FMovieSceneSequenceInstanceData {
	FMovieSceneEvaluationOperand Operand; // 0x8
};

struct FGameplay_PigSurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t RbtAttachedCount; // 0xa8
	int32_t ActivatedRbtTimerCount; // 0xac
	int32_t RbtSuccessSearchCount; // 0xb0
	int32_t RbtFailedSearchCount; // 0xb4
	int32_t RbtDisabledPreActivation; // 0xb8
	int32_t RbtDisabledPostActivation; // 0xbc
	float RbtChaseDuration; // 0xc0
	float RbtAverageTimeLeftBeforeDisable; // 0xc4
	float RbtDuration; // 0xc8
};

struct FRBTSurvivorPair {
	AReverseBearTrap* ReverseBearTrap; // 0x0
	ACamperPlayer* survivor; // 0x8
};

struct FOfferingTriggerPositionData {
	int32_t Index; // 0x0
	float PosX; // 0x4
	float PosY; // 0x8
	int32_t CardIndex; // 0xc
};

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FCharacterSlideData {
	FString DisplayName; // 0x0
	FString Overview; // 0x10
	FString Playstyle; // 0x20
	EPlayerRole Role; // 0x30
	FString ImageFilePath; // 0x38
	TArray<EPerkCategory> SurvivorPerkCategories; // 0x48
	FString KillerPowerIconPath; // 0x58
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float defaultValue; // 0x38
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0x100
	FStructSerializerArrayTestStruct Arrays; // 0x1a0
	FStructSerializerMapTestStruct Maps; // 0x200
	FStructSerializerSetTestStruct Sets; // 0x340
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

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x98
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FSpawnInfo {
	UObject* actorClass; // 0x0
	FTransform Transform; // 0x10
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0xc
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x48
	FFrameNumber SectionEndTime; // 0x4c
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FGameplayModifierData {
	TArray<UBaseModifierCondition*> Conditions; // 0x0
	TArray<FGamePlayModifier> Modifiers; // 0x10
	TArray<FGameplayTag> TaggedFlags; // 0x20
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0xc
	int32_t NumberOfBufferAtSnapshot; // 0x10
};

struct FQosRegionInfo {
	FText DisplayName; // 0x0
	FString RegionId; // 0x18
	bool bEnabled; // 0x28
	bool bVisible; // 0x29
	bool bAutoAssignable; // 0x2a
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x10
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
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

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0xc
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FAnimNotifyEvent : FAnimLinkableElement {
	float DisplayTime; // 0x30
	float TriggerTimeOffset; // 0x34
	float EndTriggerTimeOffset; // 0x38
	float TriggerWeightThreshold; // 0x3c
	FName NotifyName; // 0x40
	UAnimNotify* Notify; // 0x50
	UAnimNotifyState* NotifyStateClass; // 0x58
	float Duration; // 0x60
	FAnimLinkableElement EndLink; // 0x68
	bool bConvertedFromBranchingPoint; // 0x98
	EMontageNotifyTickType MontageTickType; // 0x99
	float NotifyTriggerChance; // 0x9c
	ENotifyFilterType NotifyFilterType; // 0xa0
	int32_t NotifyFilterLOD; // 0xa4
	bool bTriggerOnDedicatedServer; // 0xa8
	bool bTriggerOnFollower; // 0xa9
	int32_t TrackIndex; // 0xac
};

struct FBeMaterialTexture {
	FName Name; // 0x0
	UTexture* Texture; // 0x10
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
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
	FName MipFilter; // 0x4c
	ETextureMipLoadOptions MipLoadOptions; // 0x58
	bool DuplicateNonOptionalMips; // 0x59
};

struct FHitValidationReport {
	FHitValidatorInstigatorParams InstigatorParams; // 0x0
	FHitValidatorTargetParams TargetParams; // 0x60
	float ValidationTimestamp; // 0x78
	FFloatRange TargetRecorderTimeRange; // 0x7c
	ACharacter* InstigatorOwningCharacter; // 0x90
	float MaximumDistance; // 0x98
	float CapsuleInflation; // 0x9c
	bool IsValidHit; // 0xa0
	bool IsValidDistance; // 0xa1
	bool IsValidNotStunned; // 0xa2
	FTransform InstigatorTransform; // 0xb0
	FVector RewindedTargetLocation; // 0xe0
	FVector targetLocation; // 0xec
	float SquareDistance; // 0xf8
	bool HasPerformCollisionCheck; // 0xfc
	bool IsValidCollision; // 0xfd
	FTransform HitPrimitiveTransform; // 0x100
	FTransform HittablePrimitiveTransform; // 0x130
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5e0
};

struct FAkObservedPlayerSoundLoop : FAkSoundLoop {
	TWeakObjectPtr<UPlayerPerspectiveComponent> _perspectiveComponent; // 0x38
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0xc
	FEdGraphPinType VarType; // 0x20
	FString FriendlyName; // 0x90
	FText Category; // 0xa0
	uint64_t PropertyFlags; // 0xb8
	FName RepNotifyFunc; // 0xc0
	ELifetimeCondition ReplicationCondition; // 0xcc
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xd0
	FString defaultValue; // 0xe0
};

struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel FloatFunction; // 0x58
	EMovieSceneBlendType BlendType; // 0xf8
};

struct FFranklinsHitNearDroppedItemAnalytics : FBasePerkAnalytics {
	FString HitSurvivorMirrorsId; // 0xb0
	FString AttackingSlasherMirrorsId; // 0xc0
};

struct FTexturegroupChartingAnalytics : FUniquelyIdentifiedAnalytic {
	FString texturegroup_name; // 0x98
	FString texturegroups_guid; // 0xa8
	FString map_name; // 0xb8
	int32_t avg_qty_streaming; // 0xc8
	int32_t max_qty_streaming; // 0xcc
	int32_t avg_memory_streaming; // 0xd0
	int32_t max_memory_streaming; // 0xd4
	int32_t avg_qty_non_streaming; // 0xd8
	int32_t max_qty_non_streaming; // 0xdc
	int32_t avg_memory_non_streaming; // 0xe0
	int32_t max_memory_non_streaming; // 0xe4
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FAkMidiGeneric : FAkMidiEventBase {
	char param1; // 0x2
	char param2; // 0x3
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FPartyPlatformSessionInfo {
	FName OssName; // 0x0
	FString SESSIONID; // 0x10
	FUniqueNetIdRepl OwnerPrimaryId; // 0x20
};

struct FOfferingViewData : FBaseLoadoutPartViewData {
	int32_t StackCount; // 0x58
	EItemAvailability Availability; // 0x5c
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FDBDCustomizationToolData {
	FCustomizationItemData Head; // 0x0
	FCustomizationItemData Torso; // 0x328
	FCustomizationItemData Leg; // 0x650
	FCustomizationItemData Bodies; // 0x978
	FString characterName; // 0xca0
	FString RoleName; // 0xcb0
	USkeletalMesh* BaseSkeleton; // 0xcc0
	UTexture2D* MaskTexture; // 0xcc8
	UAnimationAsset* AnimationToPlay; // 0xcd0
	FString StrHeadDLC; // 0xcd8
	FString StrTorsoDLC; // 0xce8
	FString StrLegDLC; // 0xcf8
	FString StrBodiesDLC; // 0xd08
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int32_t LODThreshold; // 0x3c
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x94
	EAnimAlphaInputType AlphaInputType; // 0xc8
	bool bAlphaBoolEnabled; // 0xc9
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FMatchResultViewData {
	bool IsSlasher; // 0x0
	EGameState SurvivorResult; // 0x1
	EKillerResult KillerResult; // 0x2
	float Duration; // 0x4
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
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

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
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

struct FSavedCharacterLevelData {
	int32_t Level; // 0x0
	bool HasPerksBeenSelected; // 0x4
	bool HasPerkSelectionBeenGenerated; // 0x5
	TArray<FAssignedPerkProperties> PerkSelection; // 0x8
};

struct FURL {
	FString protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	int32_t Valid; // 0x24
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FLegacySavedBloodwebNodeGate {
	FName Description; // 0x0
	EItemRarity Rarity; // 0xc
	EPlayerRole Role; // 0xd
	EBloodwebNodeGateTypes GateType; // 0xe
	FString Param; // 0x10
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x18
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

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FSubscriptionRewardMap {
	TMap<ESubscriptionClaimType, FSubscriptionReward> RewardsByClaimType; // 0x0
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference targetBone; // 0x14
	bool bBlendTranslation; // 0x28
	bool bBlendRotation; // 0x29
	bool bBlendScale; // 0x2a
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FPawnActionEvent {
	UPawnAction* action; // 0x0
};

struct FAICamperDodgeTunableRowData : FDBDTableRowBase {
	int32_t characterId; // 0x8
	FText Description; // 0x10
	EAIDodgeType BestDodgeType; // 0x28
	bool RequireInSight; // 0x29
	bool RequireAttackState; // 0x2a
	float Duration; // 0x2c
	float Range; // 0x30
	float AttackPlusSurvivorHalfWidth; // 0x34
	float FieldOfView; // 0x38
};

struct FArrayOfSceneComponent {
	TArray<USceneComponent*> sceneComp; // 0x0
};

struct FKillerAttributesData {
	float Speed; // 0x0
	float TerrorRadius; // 0x4
	EKillerHeight Height; // 0x8
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x20
	char SelectedKeyID; // 0x28
	char bNoneIsAllowedValue : 1; // 0x2c
};

struct FRoleDropdown {
	bool ShowRoleSelection; // 0x0
	EPlayerRole Role; // 0x1
};

struct FItemAddonInitializationData {
	EInventoryItemType InventoryItemType; // 0x0
	bool AuthorityDataSet; // 0x1
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float defaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FEmblemSlotData {
	EEmblemQuality Quality; // 0x0
	FString Title; // 0x8
	FString Description; // 0x18
	int32_t Score; // 0x28
	TArray<FString> IconPaths; // 0x30
	TArray<int32_t> ThresholdPoints; // 0x40
	float CurrentPoints; // 0x50
	TArray<FEmblemProgressionData> ProgressionData; // 0x58
	int32_t CharacterExperience; // 0x68
};

struct FCamperHealResult {
	ECamperDamageState PreviousDamageState; // 0x0
	ECamperDamageState CurrentDamageState; // 0x1
	int32_t HealAmount; // 0x4
	TArray<ADBDPlayer*> Healers; // 0x8
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FParticleSysParam {
	FName Name; // 0x0
	EParticleSysParamType ParamType; // 0xc
	float Scalar; // 0x10
	float Scalar_Low; // 0x14
	FVector Vector; // 0x18
	FVector Vector_Low; // 0x24
	FColor Color; // 0x30
	AActor* Actor; // 0x38
	UMaterialInterface* Material; // 0x40
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
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

struct FEmblemProgressionID {
	EEmblemProgressionType EmblemProgressionType; // 0x0
	FText DefaultDescription; // 0x8
	TArray<FEmblemProgressionDescriptionByQuality> DescriptionsByQuality; // 0x20
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0xc
	bool bCanModify; // 0xe
	FName ObjectTypeName; // 0x30
	TArray<FResponseChannel> CustomResponses; // 0x40
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

struct FXpBonusData {
	FString Name; // 0x0
	int32_t XpValue; // 0x10
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
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

struct FPartyMemberUIData {
	bool _isLocalPlayer; // 0x0
	bool _isReady; // 0x1
	FString _mirrorId; // 0x8
	FString _playerName; // 0x18
	int32_t _playerId; // 0x28
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FAIGoalWeight {
	FAIGoal GoalInfo; // 0x0
	float Weight; // 0x18
	FString WeightDebug; // 0x20
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

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FArchiveVignetteVideoAnalytics : FUniquelyIdentifiedAnalytic {
	FString ArchiveId; // 0x98
	FString VignetteId; // 0xa8
	FString VideoId; // 0xb8
	FString StartVideoTimestamp; // 0xc8
	double VideoTimeSpent; // 0xd8
	bool WasVideoWatchUntilEnd; // 0xe0
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FActiveCameraShakeInfo {
	UCameraShake* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FEmblemTooltipData : FBaseTooltipData {
	FEmblemSlotData EmblemSlotData; // 0x98
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FFilterLoadoutData : FDBDTableRowBase {
	FName ID; // 0x8
	TSoftObjectPtr<UTexture2D> Icon; // 0x18
	FText Title; // 0x48
	TArray<EPlayerRole> Role; // 0x60
	ELoadoutType LoadoutType; // 0x70
};

struct FPlayerDataSync {
	FPlayerStateData PlayerData; // 0x0
	TArray<FName> CustomizationMesh; // 0x38
	TArray<FCharmIdSlot> customizationCharms; // 0x48
	FName EquipedItemId; // 0x58
	TArray<FName> EquipedItemAddonIds; // 0x68
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	EAnimAlphaInputType AlphaInputType; // 0x30
	float alpha; // 0x34
	char bAlphaBoolEnabled : 1; // 0x38
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBias AlphaScaleBias; // 0x94
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x9c
	int32_t LODThreshold; // 0xcc
};

struct FSpecialBehaviourPopulation {
	FName _name; // 0x0
	TArray<EGameplayElementType> _spawnerTypes; // 0x10
	TArray<ETileSpawnPointType> _spawnPointTypes; // 0x20
	TSoftClassPtr<UObject> _actor; // 0x30
};

struct FGameplay_KillerAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	float Speed; // 0xa8
	int32_t BloodlustTier1Count; // 0xac
	int32_t BloodlustTier2Count; // 0xb0
	int32_t BloodlustTier3Count; // 0xb4
	float BloodlustTier1Duration; // 0xb8
	float BloodlustTier2Duration; // 0xbc
	float BloodlustTier3Duration; // 0xc0
	float BloodlustSpeed; // 0xc4
	int32_t ChaseCount; // 0xc8
	int32_t ChaseCountFail; // 0xcc
	int32_t ChaseCountSuccess; // 0xd0
	int32_t ChaseCountTier1Fail; // 0xd4
	int32_t ChaseCountTier1Success; // 0xd8
	int32_t ChaseCountTier2Fail; // 0xdc
	int32_t ChaseCountTier2Success; // 0xe0
	int32_t ChaseCountTier3Fail; // 0xe4
	int32_t ChaseCountTier3Success; // 0xe8
	int32_t HookCount; // 0xec
	int32_t MurderCount; // 0xf0
	int32_t PalletSpawned; // 0xf4
	int32_t PalletProcedural; // 0xf8
	int32_t PalletProceduralSetCount; // 0xfc
	uint32_t PalletGenerationId; // 0x100
	int32_t PalletGeneric; // 0x104
	int32_t PalletDestroyed; // 0x108
	int32_t BreakableWallSpawned; // 0x10c
	int32_t BreakableWallDestroyed; // 0x110
	int32_t DropCount; // 0x114
	int32_t HitCloseCount; // 0x118
	int32_t HitCloseCountSuccess; // 0x11c
	int32_t HitFarCount; // 0x120
	int32_t HitFarCountSuccess; // 0x124
	int32_t HitSpecialCount; // 0x128
	int32_t HitSpecialCountSuccess; // 0x12c
	int32_t ClosetOpen; // 0x130
	int32_t ClosetOpenSuccess; // 0x134
	int32_t EscapeesHatchCount; // 0x138
	float SecondesAtLeastOneSurvivorHooked; // 0x13c
	uint32_t AmountTilesVisited; // 0x140
	float StartX; // 0x144
	float StartY; // 0x148
	float StartZ; // 0x14c
};

struct FEndpointLatencyData {
	FString ID; // 0x0
	uint32_t Latency; // 0x10
};

struct FHelpCategoryData : FDBDTableRowBase {
	EHelpType Type; // 0x8
	FText Title; // 0x10
	FText Description; // 0x28
	TArray<FName> TopicIds; // 0x40
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FArchiveQuestObjectiveDefinition : FDBDTableRowBaseWithId {
	FText Description; // 0x18
	FText RulesDescription; // 0x30
	TArray<FName> DescriptionParameters; // 0x48
	bool IsProgressionPercentage; // 0x58
};

struct FRoleItemCategoryDropdown : FCharacterDropdown {
	bool IncludeOutfits; // 0x8
	bool IncludeNone; // 0x9
	ECustomizationCategory Category; // 0xa
};

struct FBotReplacementAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString KrakenMatchId; // 0xa8
	EPlayerRole Role; // 0xb8
	float MatchTime; // 0xbc
	FString characterName; // 0xc0
	FString ReplacedCharacterMirrorsId; // 0xd0
	EAIDifficultyLevel BotDifficultyLevel; // 0xe0
};

struct FItemViewSetting {
	FName label; // 0x0
	FItemIdDropdown Item; // 0xc
	FScreenshotViewSetting Settings; // 0x18
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

struct FOfferingTypeTexture {
	FName Type; // 0x0
	FSoftObjectPath TextureBack; // 0x10
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
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

struct FSerializablePlayerPerks {
	TMap<FName, int32_t> Perks; // 0x0
};

struct FYawAndPitchRotator_NetQuantize16 {
	FRotator _value; // 0x0
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FInteractionPromptViewData {
	FName ID; // 0x0
	FString Message; // 0x10
	EInteractionPromptType Type; // 0x20
	FKey InputKey1; // 0x28
	FKey InputKey2; // 0x48
	FKey InputKey3; // 0x68
	FKey InputKey4; // 0x88
	bool PlaceInCenter; // 0xa8
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

struct FPartyRepData : FOnlinePartyRepDataBase {
	FPartyPrivacySettings PrivacySettings; // 0x20
	TArray<FPartyPlatformSessionInfo> PlatformSessions; // 0x58
};

struct FKillerItemDependencies {
	EKillerAbilities killerAbility; // 0x0
	TArray<FKillerItemProperty> Items; // 0x8
};

struct FNiagaraTestStruct {
	FVector Vector1; // 0x0
	FVector Vector2; // 0xc
	FNiagaraTestStructInner InnerStruct1; // 0x18
	FNiagaraTestStructInner InnerStruct2; // 0x30
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FCamperDamageResult {
	AActor* damageSource; // 0x10
	UGameplayModifierContainer* KOPreventedSource; // 0x20
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x20
	FFrameRate TickResolution; // 0x40
	FMovieSceneSequenceID DeterministicSequenceID; // 0x48
	FMovieSceneFrameRange PlayRange; // 0x4c
	FMovieSceneFrameRange FullPlayRange; // 0x5c
	FMovieSceneFrameRange UnwarpedPlayRange; // 0x6c
	FMovieSceneFrameRange PreRollRange; // 0x7c
	FMovieSceneFrameRange PostRollRange; // 0x8c
	int32_t HierarchicalBias; // 0x9c
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0xa0
	FGuid SubSectionSignature; // 0xc0
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0xd0
};

struct FGFxWidgetBinding {
	FName WidgetName; // 0x0
	UObject* WidgetClass; // 0x10
};

struct FOnboardingTutorialViewData {
	FString tutorialId; // 0x0
	bool COMPLETED; // 0x10
	bool MainRewardClaimed; // 0x11
	TArray<FRewardWrapperViewData> MainRewards; // 0x18
	TArray<FRewardWrapperViewData> AlternativeRewards; // 0x28
	EOnboardingTutorialType TutorialType; // 0x38
	EOnboardingTutorialButtonStyle ButtonStyle; // 0x39
	FText DisplayName; // 0x40
	FText Description; // 0x58
	UTexture2D* Icon; // 0x70
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FBHVRPerDetailModeInt {
	TMap<FName, int32_t> PerDetailModeValue; // 0x0
	TMap<FName, bool> PerDetailModeOverride; // 0x50
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

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FLoadingImages {
	FName ID; // 0x0
	TArray<FSlateBrush> Images; // 0x10
	TArray<FLoadingImagesHintInfo> ImagesHintInfo; // 0x20
	bool IsAvailableForSurvivor; // 0x30
	bool IsAvailableForKiller; // 0x31
	bool IsGenericImages; // 0x32
};

struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	FString String; // 0x20
	FText Text; // 0x30
	FVector Vector; // 0x48
	FVector4 Vector4; // 0x60
	FRotator Rotator; // 0x70
	FQuat Quat; // 0x80
	FColor Color; // 0x90
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x10
};

struct FFearMarketItemInstance {
	FName ItemId; // 0x0
	int32_t Cost; // 0xc
	int32_t BloodpointConversion; // 0x10
	bool Purchased; // 0x14
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float PlayRateBasis; // 0x38
	float PlayRate; // 0x3c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
	float startPosition; // 0x70
	bool bLoopAnimation; // 0x74
};

struct FContentPerRingDistribution {
	TArray<int32_t> WeightList; // 0x0
	TArray<int32_t> MinCountList; // 0x10
	TArray<int32_t> MaxCountList; // 0x20
};

struct FCompilerNativizationOptions {
	FName PlatformName; // 0x0
	bool ServerOnlyPlatform; // 0xc
	bool ClientOnlyPlatform; // 0xd
	bool bExcludeMonolithicHeaders; // 0xe
	TArray<FName> ExcludedModules; // 0x10
	TSet<FSoftObjectPath> ExcludedAssets; // 0x20
	TArray<FString> ExcludedFolderPaths; // 0x70
};

struct FCustomizationLobbyAnalytics : FCustomizationBaseAnalytics {
	FString LobbyId; // 0x100
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

struct FMediaIOInputConfiguration {
	FMediaIOConfiguration MediaConfiguration; // 0x0
	EMediaIOInputType inputType; // 0x44
	int32_t KeyPortIdentifier; // 0x48
};

struct FItemBundleViewData {
	FItemViewData Item; // 0x0
	FAddonViewData Addon1; // 0x90
	FAddonViewData Addon2; // 0xf0
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
	char bEvaluateInPreroll : 1; // 0xf4
	char bEvaluateInPostroll : 1; // 0xf4
	char bTearDownPriority : 1; // 0xf4
};

struct FMaterialMapForClip : FDBDTableRowBase {
	UMaterialInterface* SrcMaterial; // 0x8
	UMaterialInterface* DstMaterial; // 0x10
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinID; // 0x8
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xd0
	EBoneControlSpace DisplaySpace; // 0xe4
	bool bRelativeToRefPose; // 0xe5
	FVector Translation; // 0xe8
	FRotator Rotation; // 0xf4
	FVector Scale; // 0x100
};

struct FToastButton {
	FText ButtonText; // 0x0
	bool IsRegression; // 0x18
};

struct FHudObjectivesViewData {
	EPlayerTeam playerTeam; // 0x0
	bool isHatchOpen; // 0x1
	int32_t nbGeneratorsLeft; // 0x4
};

struct FSerializablePlayerStatsProgression {
	TArray<FStatsProgressionData> StatsProgression; // 0x0
};

struct FCurrencyUIData : FDBDTableRowBase {
	ECurrencyType currencyType; // 0x8
	FText Description; // 0x10
	FText DisplayName; // 0x28
	FString IconPath; // 0x40
	FSlateColor CurrencyColorTheme; // 0x50
};

struct FRandomizableActorSpawner {
	FComponentReference ComponentReference; // 0x0
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
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

struct FNamedButton {
	int32_t ClickCounter; // 0x0
	FString DisplayName; // 0x8
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FDownloadProgression {
	float DownloadSize; // 0x0
	float TotalDownloadedSize; // 0x4
	float DownloadSpeed; // 0x8
	float InstallProgress; // 0xc
	bool IsDownloading; // 0x10
	FText DownloadStatus; // 0x18
};

struct FAtlantaRitualsUIScreenData {
	FDateTime DailyRefreshTime; // 0x0
	FDateTime WeeklyRefreshTime; // 0x8
	TArray<FAtlantaRitualUIData> DailyRituals; // 0x10
	TArray<FAtlantaRitualUIData> WeeklyRituals; // 0x20
};

struct FSurvivorGroupingProbability {
	ESurvivorGrouping Type; // 0x0
	float Probability; // 0x4
};

struct FLaunchInfo {
	FVector_NetQuantize startPosition; // 0x0
	FVector_NetQuantizeNormal Direction; // 0xc
	float Speed; // 0x18
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0xc
	float value; // 0x10
	FBlackboardKeySelector BBKey; // 0x18
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue defaultValue; // 0x30
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

struct FCheatExecutedAnalytics : FUniquelyIdentifiedAnalytic {
	FString Location; // 0x98
	FString NetMode; // 0xa8
	FString Requester; // 0xb8
	FString Command; // 0xc8
	bool Successful; // 0xd8
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x98
	FSlateBrush NormalBarImage; // 0x128
	FSlateBrush DisabledBarImage; // 0x1b8
	FSlateBrush BackgroundImage; // 0x248
	float BarThickness; // 0x2d8
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FKeyBind {
	FKey Key; // 0x0
	FString Command; // 0x20
	char Control : 1; // 0x30
	char Shift : 1; // 0x30
	char Alt : 1; // 0x30
	char Cmd : 1; // 0x30
	char bIgnoreCtrl : 1; // 0x30
	char bIgnoreShift : 1; // 0x30
	char bIgnoreAlt : 1; // 0x30
	char bIgnoreCmd : 1; // 0x30
	char bDisabled : 1; // 0x31
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
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

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x14
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x50
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

struct FASDisplayInfo {
	FVector Position; // 0x0
	FVector Scale; // 0xc
	float Rotation; // 0x18
	float XRotation; // 0x1c
	float YRotation; // 0x20
	float alpha; // 0x24
	bool visible; // 0x28
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float alpha; // 0xc
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FDatacenterQosInstance {
	FQosDatacenterInfo definition; // 0x0
	EQosDatacenterResult Result; // 0x38
	int32_t AvgPingMs; // 0x3c
	TArray<int32_t> PingResults; // 0x40
	FDateTime LastCheckTimestamp; // 0x58
	bool bUsable; // 0x60
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FChatAnalytics : FUniquelyIdentifiedAnalytic {
	FString SenderMirrorsId; // 0x98
	FString SenderPlayerName; // 0xa8
	FString MatchID; // 0xb8
	FString ChatContent; // 0xc8
	FString OriginalChatContent; // 0xd8
	FString ChatContext; // 0xe8
	FString InGameTimestamp; // 0xf8
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x50
	FMovieSceneFloatChannel GreenChannel; // 0xf0
	FMovieSceneFloatChannel BlueChannel; // 0x190
	FMovieSceneFloatChannel AlphaChannel; // 0x230
};

struct FCurrencyPurchaseData {
	FString IconPath; // 0x8
	FString CurrencyName; // 0x18
	FString CurrencyIcon; // 0x28
	int32_t CurrencyAmount; // 0x38
	FString DisplayedPrice; // 0x40
	float BonusPercentage; // 0x50
	FDateTime BonusEndDate; // 0x58
	int32_t BasicCurrencyAmount; // 0x60
};

struct FAtlantaRewardUIData {
	FName ID; // 0x0
	EAtlantaRewardType Type; // 0xc
	int32_t Quantity; // 0x10
	FString IconFilePath; // 0x18
	ECurrencyType Currency; // 0x28
	EItemRarity Rarity; // 0x29
	FText DisplayName; // 0x30
	FText Description; // 0x48
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe0
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FWorldContext {
	FURL LastURL; // 0xd8
	FURL LastRemoteURL; // 0x140
	UPendingNetGame* PendingNetGame; // 0x1a8
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1b0
	TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1d0
	TArray<UObjectReferencer*> ObjectReferencers; // 0x1f8
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x208
	UGameViewportClient* GameViewport; // 0x218
	UGameInstance* OwningGameInstance; // 0x220
	TArray<FNamedNetDriver> ActiveNetDrivers; // 0x228
};

struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FAtlantaRitualDefinition : FDBDTableRowBase {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	TSoftObjectPtr<UTexture2D> Texture; // 0x38
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0xc
	bool BoolParam; // 0x10
	int32_t IntParam; // 0x14
	USoundWave* SoundWaveParam; // 0x18
};

struct FCharacterSavedInventoryDataV7 {
	FName ID; // 0x0
	int32_t Num; // 0xc
	FString I; // 0x10
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FLoginMessage {
	FString MirrorsId; // 0x0
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

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FAnimNode_ScaleChainLength : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float DefaultChainLength; // 0x20
	FBoneReference ChainStartBone; // 0x24
	FBoneReference ChainEndBone; // 0x38
	FVector targetLocation; // 0x4c
	float alpha; // 0x58
	FInputScaleBias AlphaScaleBias; // 0x60
	EScaleChainInitialLength ChainInitialLength; // 0x68
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

struct FRarityPerRingDistribution {
	TArray<int32_t> WeightList; // 0x0
	TArray<int32_t> MinCountList; // 0x10
	TArray<int32_t> MaxCountList; // 0x20
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0xc
	int32_t IntValue; // 0x10
	float FloatValue; // 0x14
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FDebugLoadoutAddon {
	FDataTableDropdown AddonID; // 0x0
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x20
	char bCtrl : 1; // 0x20
	char bAlt : 1; // 0x20
	char bCmd : 1; // 0x20
};

struct FOpenCurrentCalendarMessage {
	int32_t RemainingDailyRewards; // 0x0
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0xc
};

struct FPrestigeIconData : FDBDTableRowBase {
	EPlayerRole PlayerRole; // 0x8
	int32_t PrestigeLevel; // 0xc
	TSoftObjectPtr<UTexture2D> Icon; // 0x10
};

struct FNameCurveKey {
	float Time; // 0x0
	FName value; // 0x4
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

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float value; // 0x4
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FK25SurvivorChainAttachmentData {
	FName AnchorName; // 0x0
	EK25ChainAnchorPointDirection Direction; // 0xc
	FVector RelativeLocation; // 0x10
	bool IsFlexibleLimb; // 0x1c
	EK25ChainAttachmentLimbType LimbType; // 0x1d
	ACamperPlayer* _attachedSurvivor; // 0x20
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

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0xc
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0xc
	FName FunctionNameToBind; // 0x18
};

struct FModulatorContinuousParams {
	FName ParameterName; // 0x0
	float Default; // 0xc
	float MinInput; // 0x10
	float MaxInput; // 0x14
	float MinOutput; // 0x18
	float MaxOutput; // 0x1c
	ModulationParamMode ParamMode; // 0x20
};

struct FQosPingServerInfo {
	FString Address; // 0x0
	int32_t Port; // 0x10
};

struct FMaterialReplacerData {
	TSoftObjectPtr<UMaterialInterface> From; // 0x0
	TSoftObjectPtr<UMaterialInterface> To; // 0x30
};

struct FOfferingProperties : FItemData {
	EOfferingType OfferingType; // 0x1d0
	TArray<FName> Tags; // 0x1d8
	TArray<FOfferingEffect> Effects; // 0x1e8
	FString BigIconFilePath; // 0x1f8
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0xc
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0x10
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FCharacterValidationData {
	int32_t PrestigeLevel; // 0x0
	int32_t BloodWebLevel; // 0x4
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
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

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FCustomSoundFXData {
	EAudioCustomizationCategory AudioCategory; // 0x0
	FString switchState; // 0x8
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

struct FSavedStatsData {
	uint32_t Version; // 0x0
	FName Name; // 0x4
	float value; // 0x10
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
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

struct FCustomGameBotsData {
	TArray<FCustomGameBot> _bots; // 0x8
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FScoreValue : FDBDTableRowBase {
	FName ID; // 0x8
	EDBDScoreCategory Category; // 0x14
	int32_t BloodpointValue; // 0x18
	int32_t MaxBloodpointValue; // 0x1c
	UCurveFloat* BloodpointDepreciationCurve; // 0x20
	float OngoingWaitTime; // 0x28
	FText DisplayName; // 0x30
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString defaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FK26SurvivorStatus {
	bool IsPowerAttached; // 0x0
	bool IsAttachementAuraOn; // 0x1
	float LastAttachmentTime; // 0x4
	float LastDetachmentTime; // 0x8
	float LastRemovalStarted; // 0xc
	float LastRemovalStopped; // 0x10
	float LastHitTime; // 0x14
	AK26AttachedCrow* statusIndicator; // 0x18
	ACamperPlayer* OwningSurvivor; // 0x20
	UK26KillerInstinctStatusEffect* K26KillerInstinctStatusEffect; // 0x28
	TArray<AActor*> IdleCrowsBeingTouched; // 0x30
	FTimerHandle KillerInstinctTimeHandler; // 0x40
};

struct FBaseBannerData {
	int32_t Priority; // 0x8
	FText TitleId; // 0x10
	FString BannerContentId; // 0x28
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FLogPresencePluginAnalytics : FUniquelyIdentifiedAnalytic {
	FString Context; // 0x98
	FString Message; // 0xa8
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FStatsProgressionData {
	FName Name; // 0x0
	float value; // 0xc
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0xc
	int32_t CurveTypeFlags; // 0x1c
};

struct FMediaIOOutputConfiguration {
	FMediaIOConfiguration MediaConfiguration; // 0x0
	EMediaIOOutputType OutputType; // 0x44
	int32_t KeyPortIdentifier; // 0x48
	EMediaIOReferenceType OutputReference; // 0x4c
	int32_t ReferencePortIdentifier; // 0x50
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x520
	FSplitterStyle ColumnSplitterStyle; // 0xa38
	FSlateBrush BackgroundBrush; // 0xb60
	FSlateColor ForegroundColor; // 0xbf0
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FStatusEffectProperties : FItemData {
	TArray<FName> Tags; // 0x1d0
	TSoftClassPtr<UObject> StatusEffectBlueprint; // 0x1e0
	EStatusEffectType StatusEffectType; // 0x210
	EExternalEffectSource ExternalEffectSource; // 0x211
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

struct FStaticSwitchParameter : FStaticParameterBase {
	bool value; // 0x28
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FPlayerRoundStartEventData {
	EPlayerRole PlayerRole; // 0x0
	bool IsABot; // 0x1
	EAIDifficultyLevel BotDifficultyLevel; // 0x2
	int32_t characterId; // 0x4
	int32_t PlayerRankForRole; // 0x8
	int32_t PrestigeLevel; // 0xc
	int32_t BloodWebLevel; // 0x10
	int32_t Pips; // 0x14
	TArray<FPlayerRankData> PlayerRankDataArray; // 0x18
};

struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x98
	FSlateBrush Pressed; // 0x128
	FSlateBrush Disabled; // 0x1b8
	FMargin NormalPadding; // 0x248
	FMargin PressedPadding; // 0x258
	FSlateSound PressedSlateSound; // 0x268
	FSlateSound HoveredSlateSound; // 0x288
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x50
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x20
	float SavedZoomAmount; // 0x28
	UObject* EditedObject; // 0x30
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FKnockoutSurvivorFoundAnalytics : FBasePerkAnalytics {
	FString RescuingSurvivorMirrorsId; // 0xb0
	FString FoundSurvivorMirrorsId; // 0xc0
};

struct FTooltipWidgetData : FDBDTableRowBase {
	ETooltipType TooltipType; // 0x8
	UUserWidget* WidgetClass; // 0x10
};

struct FGCReference {
	UObject* Object; // 0x0
	int32_t RefCount; // 0x8
};

struct FRefundKeyUIData {
	FName ID; // 0x0
	FString IconFilePath; // 0x10
	FText DisplayName; // 0x20
	FText Description; // 0x38
	ERefundSource Source; // 0x50
};

struct FUniquelyIdentifiedAnalytic : FBaseSingleStructIndexAnalytics {
	FString Version; // 0x18
	FString Branch; // 0x28
	FString Changelist; // 0x38
	FString Configuration; // 0x48
	FString MirrorsId; // 0x58
	FString ClientId; // 0x68
	FString platform; // 0x78
	FString BackendEnv; // 0x88
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x10
	int32_t StateRootNodeIndex; // 0x20
	int32_t StartNotify; // 0x24
	int32_t EndNotify; // 0x28
	int32_t FullyBlendedNotify; // 0x2c
};

struct FBorderElements {
	EDirection Direction; // 0x0
	TArray<UActorSpawner*> Elements; // 0x8
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FCharmDropdown : FRoleDropdown {
	FName CharmId; // 0x4
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
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

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FChainsawEvent {
	float ElapsedMatchTime; // 0x0
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalToTrackingTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x38
	FFrameNumber SectionEndTime; // 0x3c
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0xc
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FLanguageMessage {
	FString Language; // 0x0
};

struct FMovieSceneTrackIdentifier {
	uint32_t value; // 0x0
};

struct FPortalRestrictedLocation {
	FVector Location; // 0x0
	float DistanceSquared; // 0xc
};

struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x10
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FCharacterSavedProfileDataV7 {
	int32_t BloodWebLevel; // 0x0
	int32_t PrestigeLevel; // 0x4
	int32_t CharacterExperience; // 0x8
	int32_t TimesConfronted; // 0xc
	TArray<FString> PrestigeDates; // 0x10
	FLegacySavedBloodWebPersistentData BloodWebData; // 0x20
	FLegacySavedPlayerLoadoutData CharacterLoadoutData; // 0x60
	TArray<FCharacterSavedInventoryDataV7> Inventory; // 0xf8
	TArray<FSavedCharacterLevelDataV7> CharacterProgression; // 0x108
	TArray<FSavedStatsDataV7> StatProgression; // 0x118
	TArray<FName> CurrentCustomization; // 0x128
	TArray<FSavedCharmSlotData> CurrentCharmCustomization; // 0x138
	TArray<FName> UniquePerksAdded; // 0x148
};

struct FShopTransactionItemParameters {
	int32_t itemAmount; // 0x0
	FString ItemName; // 0x8
	FString ItemType; // 0x18
};

struct FBloodstoreRowUnlockThreshold : FDBDTableRowBase {
	int32_t PreviousRowPurchasedItemsCount; // 0x8
};

struct FBloodwebContentTypePerRingDistribution : FDBDTableRowBase {
	int32_t PerkPerRingMinCount; // 0x8
	int32_t PerkPerRingMaxCount; // 0xc
	int32_t PerkPerRingWeight; // 0x10
	int32_t OfferingPerRingMinCount; // 0x14
	int32_t OfferingPerRingMaxCount; // 0x18
	int32_t OfferingPerRingWeight; // 0x1c
	int32_t ItemPerRingMinCount; // 0x20
	int32_t ItemPerRingMaxCount; // 0x24
	int32_t ItemPerRingWeight; // 0x28
	int32_t AddOnPerRingMinCount; // 0x2c
	int32_t AddOnPerRingMaxCount; // 0x30
	int32_t AddOnPerRingWeight; // 0x34
	int32_t ChestPerRingMinCount; // 0x38
	int32_t ChestPerRingMaxCount; // 0x3c
	int32_t ChestPerRingWeight; // 0x40
	int32_t PerksPackPerRingMinCount; // 0x44
	int32_t PerksPackPerRingMaxCount; // 0x48
	int32_t PerksPackPerRingWeight; // 0x4c
	int32_t IridiscentShardsPackPerRingMinCount; // 0x50
	int32_t IridiscentShardsPackPerRingMaxCount; // 0x54
	int32_t IridiscentShardsPackPerRingWeight; // 0x58
};

struct FOutlineColourConfiguration {
	FLinearColor ColourValue; // 0x0
};

struct FInteractButtonInfo : FTableRowBase {
	FName InteractButtonID; // 0x8
	FName InteractionID; // 0x14
	EPlayerRole PlayerRole; // 0x20
	EInputInteractionType interactionInputType; // 0x21
	FSlateBrush Icon; // 0x28
	EButtonType CancelButtonType; // 0xb8
	EButtonType SecondaryActionButtonType; // 0xb9
	FSlateBrush AttackIcon; // 0xc0
	FSlateBrush AbilityIcon; // 0x150
	FSlateBrush ThumbJoystickUnpressedIcon; // 0x1e0
	FSlateBrush ThumbJoystickPressedIcon; // 0x270
};

struct FGamePresetData {
	TArray<char> _mapAvailabilities; // 0x0
	TArray<char> _perkAvailabilities; // 0x10
	TArray<char> _offeringAvailabilities; // 0x20
	TArray<char> _itemAvailabilities; // 0x30
	TArray<char> _itemAddonAvailabilities; // 0x40
	TArray<char> _customizationItemAvailabilities; // 0x50
	TArray<char> _characterAvailabilities; // 0x60
	bool _allowDlcContent; // 0x70
	bool _privateMatch; // 0x71
	EGameplayMode _gameplayMode; // 0x72
	FGameBotsData _botsData; // 0x78
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FProgressionUIDataRow : FDBDTableRowBase {
	EProgressionType ProgressionType; // 0x8
	FCurrencyProgressionUIData CurrencyProgressionUIData; // 0x10
};

struct FK25ProjectileDeactivationData {
	EK25ProjectileDeactivateReason DeactivationReason; // 0x0
	FName PhysicalSurfaceName; // 0x4
	bool ShouldReelBackProjectile; // 0x10
	bool HasAppliedDamage; // 0x11
	ACamperPlayer* _survivorHit; // 0x18
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
};

struct FRankNameData : FDBDTableRowBase {
	FText RankName; // 0x8
	int32_t SubRanks; // 0x20
};

struct FCharmViewSetting {
	FName label; // 0x0
	FCharmDropdown CharmId; // 0xc
	FScreenshotViewSetting Settings; // 0x1c
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0xc
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0xe0
	int32_t LODThreshold; // 0xf0
	float alpha; // 0xf4
	FInputScaleBias AlphaScaleBias; // 0xf8
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x100
	FName AlphaCurveName; // 0x148
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x154
	EAnimAlphaInputType AlphaInputType; // 0x188
	bool bAlphaBoolEnabled; // 0x189
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x38
	FColor Color; // 0x44
	FVector DefaultQueryExtent; // 0x48
	AActor* NavigationDataClass; // 0x58
	TSoftClassPtr<UObject> NavDataClass; // 0x60
};

struct FMatchConfigOptionUIData {
	int32_t ID; // 0x0
	FString StringId; // 0x8
	FText OptionName; // 0x18
	TSoftObjectPtr<UPaperSprite> OptionIcon; // 0x30
	ECustomMatchOptions OptionType; // 0x60
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FPlayerRankData {
	FString MirrorsId; // 0x0
	EPlayerRole PlayerRole; // 0x10
	int32_t PlayerRankForRole; // 0x14
};

struct FSocialChatChannelConfig {
	USocialUser* SocialUser; // 0x0
	TArray<USocialChatChannel*> ListenChannels; // 0x18
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xd0
	int32_t MaxIterations; // 0xd4
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd8
};

struct FInteractionProgressViewData {
	FString Message; // 0x0
	FString SecondaryMessage; // 0x10
	EBarColor BarColor; // 0x20
	EBarColor ChargeBarColor; // 0x21
	bool ShowIcon; // 0x22
	bool ShowIconCharge; // 0x23
	TSoftObjectPtr<UTexture2D> ItemIcon; // 0x28
	TArray<FStatusEffectViewData> Proficiencies; // 0x58
};

struct FSavedCharmSlotData {
	int8_t SlotIndex; // 0x0
	FName CharmId; // 0x4
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FBoneReference TrailBone; // 0x100
	int32_t ChainLength; // 0x114
	EAxis ChainBoneAxis; // 0x118
	char bInvertChainBoneAxis : 1; // 0x119
	char bLimitStretch : 1; // 0x119
	char bLimitRotation : 1; // 0x119
	char bUsePlanarLimit : 1; // 0x119
	char bActorSpaceFakeVel : 1; // 0x119
	char bReorientParentToChild : 1; // 0x119
	float MaxDeltaTime; // 0x11c
	float RelaxationSpeedScale; // 0x120
	FRuntimeFloatCurve TrailRelaxationSpeed; // 0x128
	FInputScaleBiasClamp RelaxationSpeedScaleInputProcessor; // 0x1b0
	TArray<FRotationLimit> RotationLimits; // 0x1e0
	TArray<FVector> RotationOffsets; // 0x1f0
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x200
	float StretchLimit; // 0x210
	FVector FakeVelocity; // 0x214
	FBoneReference BaseJoint; // 0x220
	float LastBoneRotationAnimAlphaBlend; // 0x234
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FAffectedMaterialAndVariant {
	UMaterialInterface* AffectedMaterial; // 0x0
	UMaterialInterface* MaterialVariant; // 0x8
};

struct FLevelLoadingStepAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString MapName; // 0xa8
	int32_t Seed; // 0xb8
	float TimeElapsed; // 0xbc
	FString LoadingStep; // 0xc0
	bool IsTimeout; // 0xd0
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString label; // 0x8
};

struct FDBD_SoundSpawnerData {
	TArray<TSoftClassPtr<UObject>> TriggerObject; // 0x0
	bool TriggerVisualForCamper; // 0x10
	bool TriggerVisualForSlasher; // 0x11
	TArray<TSoftClassPtr<UObject>> ActorToSpawnVisual; // 0x18
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x10
	bool bClothPropertiesChanged; // 0x20
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x24
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa8
	FName Layer; // 0xb0
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x10
	FGuid InstanceId; // 0x20
	double TimeSeconds; // 0x30
	char Verbosity; // 0x38
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xd0
	FReferenceBoneFrame TwistFrame; // 0xf4
	FAxis TwistPlaneNormalAxis; // 0x118
	float RangeMax; // 0x128
	float RemappedMin; // 0x12c
	float RemappedMax; // 0x130
	FAnimCurveParam Curve; // 0x134
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FGeneratorQueryHandlePair {
	AGenerator* Generator; // 0x0
};

struct FCrossfriendsAnalytics : FUniquelyIdentifiedAnalytic {
	FString action; // 0x98
	FString TargetKrakenUserId; // 0xa8
};

struct FTransformMeshesTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0x10
	FName UserTag; // 0x1c
};

struct FBloodWebPersistentData {
	int32_t VersionNumber; // 0x0
	int32_t Level; // 0x4
	TArray<FBloodWebRingPersistentData> RingData; // 0x8
	TArray<FName> Paths; // 0x18
	FString EntityCurrentNode; // 0x28
	FDateTime GenerationDate; // 0x38
};

struct FWalesCypherEventData {
	FString EnteredSequence; // 0x0
	FString ExpectedSequence; // 0x10
	int32_t TimeoutThreshold; // 0x20
	bool success; // 0x24
	bool TIMEOUT; // 0x25
	bool CharmGranted; // 0x26
	int32_t ValidCharacterSelcted; // 0x28
};

struct FMediaIOMode {
	FFrameRate FrameRate; // 0x0
	FIntPoint Resolution; // 0x8
	EMediaIOStandardType Standard; // 0x10
	int32_t DeviceModeIdentifier; // 0x14
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x0
	int32_t Caption; // 0x4
	int32_t MetaData; // 0x8
	int32_t Script; // 0xc
	int32_t subtitle; // 0x10
	int32_t Text; // 0x14
	int32_t Video; // 0x18
};

struct FPooledCameraShakes {
	TArray<UCameraShake*> PooledShakes; // 0x0
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x98
	float RolloutAnimationSeconds; // 0x128
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x18
};

struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem {
	ALobbyBeaconPlayerState* LobbyPlayerState; // 0x10
};

struct FEmblemProgressionDetailsAnalytics {
	FString ProgressionType; // 0x0
	float ProgressionPoint; // 0x10
};

struct FCurrencyProgressionUIData {
	FText TooltipTitle; // 0x0
	FText TooltipDescription; // 0x18
	TSoftObjectPtr<UMaterialInterface> TooltipHeaderMaterial; // 0x30
	TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial; // 0x60
	TSoftObjectPtr<UTexture2D> RewardIcon; // 0x90
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FStringCurveKey {
	float Time; // 0x0
	FString value; // 0x8
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FTresholdToFrameSkip {
	FPerPlatformFloat Treshold; // 0x0
	FPerPlatformInt FrameSkip; // 0x4
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiCcValues Cc; // 0x2
	char value; // 0x3
};

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0xd0
	FBoneSocketTarget EffectorTarget; // 0x100
	FBoneReference TipBone; // 0x170
	FBoneReference RootBone; // 0x184
	float Precision; // 0x198
	int32_t MaxIterations; // 0x19c
	EBoneControlSpace EffectorTransformSpace; // 0x1a0
	EBoneRotationSource EffectorRotationSource; // 0x1a1
};

struct FMagicLeapTouchpadGesture {
	EControllerHand Hand; // 0x0
	FName MotionSource; // 0x4
	EMagicLeapTouchpadGestureType Type; // 0x10
	EMagicLeapTouchpadGestureDirection Direction; // 0x11
	FVector PositionAndForce; // 0x14
	float Speed; // 0x20
	float Distance; // 0x24
	float FingerGap; // 0x28
	float Radius; // 0x2c
	float Angle; // 0x30
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FPlayerLoadoutData {
	FName Item; // 0x0
	TArray<FName> ItemAddOns; // 0x10
	TArray<FName> CamperPerks; // 0x20
	TArray<int32_t> CamperPerkLevels; // 0x30
	FName CamperFavor; // 0x40
	FName Power; // 0x4c
	TArray<FName> PowerAddOns; // 0x58
	TArray<FName> SlasherPerks; // 0x68
	TArray<int32_t> SlasherPerkLevels; // 0x78
	FName SlasherFavor; // 0x88
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t value; // 0x4
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xa8
	FSplineCurves SplineCurves; // 0xb0
	FSplineCurves SplineCurvesPreUCS; // 0x118
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x28
};

struct FPowerViewData : FBaseLoadoutPartViewData {
	FKey InputKey; // 0x58
	bool IsRechargeable; // 0x78
	bool IsActivated; // 0x79
	int32_t count; // 0x7c
	float ProgressValue; // 0x80
	bool ShowKeyPrompt; // 0x84
	bool IsCountDisplayForced; // 0x85
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

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FGenerationParams {
	int32_t Seed; // 0x0
};

struct FCustomizedHudPlayerWrapperIdMapContainer {
	TArray<FGameplayTag> Ids; // 0x0
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FImpactInfo {
	FVector Position; // 0x0
	AActor* Actor; // 0x10
	UPrimitiveComponent* Component; // 0x18
	EPhysicalSurface SurfaceType; // 0x20
	FVector ImpactNormal; // 0x24
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
	float lifetime; // 0x48
	float Thickness; // 0x4c
	FString Message; // 0x50
	FVector2D TextScale; // 0x60
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace space; // 0x4
	FGuid Guid; // 0x8
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FAtlantaRitualInstance {
	FName RitualKey; // 0x0
	int32_t characterId; // 0xc
	EPlayerRole Role; // 0x10
	TArray<EDBDScoreTypes> TrackedEvents; // 0x18
	TArray<FString> TrackedGameEvents; // 0x28
	UAtlantaRitualEvaluatorBase* Evaluator; // 0x38
	FAtlantaRitualDifficulty Difficulty; // 0x40
	float Progress; // 0x4c
	bool Active; // 0x50
	FDateTime ExpiryDate; // 0x58
};

struct FGameplay_ChaseAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	bool IsABot; // 0xa8
	FString MirrorsIdSurvivor; // 0xb0
	float CoordXStartKiller; // 0xc0
	float CoordYStartKiller; // 0xc4
	float CoordZStartKiller; // 0xc8
	float CoordXEndKiller; // 0xcc
	float CoordYEndKiller; // 0xd0
	float CoordZEndKiller; // 0xd4
	int32_t PalletsDestroyedByKiller; // 0xd8
	int32_t WindowsVaultedByKiller; // 0xdc
	int32_t PalletsVaultedByKiller; // 0xe0
	int32_t BasicAttackSwingsByKiller; // 0xe4
	int32_t BasicAttackHitsByKiller; // 0xe8
	int32_t SpecialAttackAttemptsByKiller; // 0xec
	int32_t SpecialAttackHitsByKiller; // 0xf0
	float DistanceCoveredKiller; // 0xf4
	float CoordXStartSurvivor; // 0xf8
	float CoordYStartSurvivor; // 0xfc
	float CoordZStartSurvivor; // 0x100
	float CoordXEndSurvivor; // 0x104
	float CoordYEndSurvivor; // 0x108
	float CoordZEndSurvivor; // 0x10c
	int32_t PalletsDroppedBySurvivor; // 0x110
	int32_t PalletsStunnedBySurvivor; // 0x114
	int32_t WindowsVaultedBySurvivor; // 0x118
	int32_t PalletsVaultedBySurvivor; // 0x11c
	int32_t StartingHealthOfSurvivor; // 0x120
	int32_t EndingHealthOfSurvivor; // 0x124
	int32_t AmountHealedOfSurvivor; // 0x128
	FString StartingTileSurvivor; // 0x130
	FString EndingTileSurvivor; // 0x140
	int32_t AmountOfTilesVisitedSurvivor; // 0x150
	TArray<FString> TilesVisitedSurvivor; // 0x158
	float DistanceCoveredSurvivor; // 0x168
	float DisplacementSurvivor; // 0x16c
	float ChaseStartTimeInSecond; // 0x170
	float ChaseEndTimeInSecond; // 0x174
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FSkillCheckResponse {
	float ChargeChange; // 0x0
	bool IsTriggeredByInput; // 0x4
	bool IsSuccessful; // 0x5
	bool IsBonus; // 0x6
	bool IsInsane; // 0x7
	bool IsTriggeringLoudNoise; // 0x8
	bool FailedCountedAsGood; // 0x9
	ESkillCheckCustomType Type; // 0xa
	UChargeableInteractionDefinition* Interaction; // 0x10
	uint32_t VerificationKey; // 0x18
};

struct FCharacterSpecificData {
	FName Name; // 0x0
	int32_t Level; // 0xc
	int32_t PrestigeLevel; // 0x10
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FDamageData {
	bool _isRegressing; // 0x0
	bool _isIntense; // 0x1
	TWeakObjectPtr<ADBDPlayer> _lastDamageChangeSource; // 0x4
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x58
	FFrameNumber SectionStartFrame; // 0x60
	bool bLoop; // 0x64
};

struct FSelectedOffering {
	int32_t ownerId; // 0x0
	FName OfferingName; // 0x4
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FResolutionQualityPair : FDBDTableRowBase {
	int32_t ResX; // 0x8
	int32_t ResY; // 0xc
	int32_t Quality; // 0x10
	bool AutoAdjust; // 0x14
	int32_t ScreenScaleForWindowedMode; // 0x18
	int32_t ScreenResolution; // 0x1c
};

struct FPlayerSavedProfileCumulativeData {
	bool FirstTimePlaying; // 0x0
	int32_t CumulativeMatches; // 0x4
	int32_t CumulativeMatchesAsSurvivor; // 0x8
	int32_t CumulativeMatchesAsKiller; // 0xc
	int32_t CumulativeMatchesAsSurvivorNoFriends; // 0x10
	int32_t CumulativeMatchesAsKillerNoFriends; // 0x14
	FDateTime LastMatchTimestamp; // 0x18
	FDateTime LastSessionTimestamp; // 0x20
	int32_t CumulativeSessions; // 0x28
	FTimespan CumulativePlaytime; // 0x30
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FMaterialOriginalState {
	UMeshComponent* MeshWithChangedMaterials; // 0x0
	TArray<UMaterialInterface*> OriginalMaterial; // 0x8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FAssetNetIdRow : FTableRowBase {
	int32_t NetId; // 0x8
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FGameplay_SurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	float Speed; // 0xa8
	float InjuredSpeed; // 0xac
	float InjuredDuration; // 0xb0
	float HealthyDuration; // 0xb4
	float KODuration; // 0xb8
	int32_t PalletSpawned; // 0xbc
	int32_t PalletProcedural; // 0xc0
	int32_t PalletProceduralSetCount; // 0xc4
	uint32_t PalletGenerationId; // 0xc8
	int32_t PalletGeneric; // 0xcc
	int32_t PalletDrop; // 0xd0
	int32_t PalletStun; // 0xd4
	int32_t UnhookCount; // 0xd8
	int32_t HealCount; // 0xdc
	int32_t HealCountSuccess; // 0xe0
	int32_t ClosetEnter; // 0xe4
	int32_t Hatch; // 0xe8
	int32_t SkillCheckCount; // 0xec
	int32_t SkillCheckCountGood; // 0xf0
	int32_t SkillCheckCountGreat; // 0xf4
	float ChaseDuration; // 0xf8
	int32_t NumChases; // 0xfc
	int32_t HitBySlasherCount; // 0x100
	uint32_t AmountTilesVisited; // 0x104
	float StartX; // 0x108
	float StartY; // 0x10c
	float StartZ; // 0x110
	int32_t EmotePoint; // 0x114
	int32_t EmoteCome; // 0x118
	float CrouchingDuration; // 0x11c
	int32_t CrouchingCount; // 0x120
	float CrawlingDuration; // 0x124
};

struct FSharedAuthenticationTokenInformation {
	FString LoginProvider; // 0x0
	FString AuthToken; // 0x10
	FString TokenType; // 0x20
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FPCDeviceProfiles : FDBDTableRowBase {
	FName Cpu; // 0x8
	FName GPU; // 0x14
	TArray<FResolutionQualityPair> Pairs; // 0x20
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FLoadingStepAnalytics : FUniquelyIdentifiedAnalytic {
	FString match_id; // 0x98
	FString lobby_id; // 0xa8
	FString step_change_timestamp; // 0xb8
	FString loading_step; // 0xc8
	float time_on_prev_step; // 0xd8
	float total_load_time; // 0xdc
	FString current_map_name; // 0xe0
	FString transition_id; // 0xf0
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xa8
	FVector EndPos; // 0xb4
	FVector StartTangent; // 0xc0
	FVector EndTangent; // 0xcc
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FLegionKillerAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t Pallet; // 0xa8
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x14
};

struct FInputPromptDataRow : FTableRowBase {
	FText InputLabel; // 0x8
	FKey InputKey; // 0x20
	UTexture2D* PromptTexture; // 0x40
	bool ShowLabel; // 0x48
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x30
};

struct FAtlantaCustomizedHudSettings {
	FGameplayTag ID; // 0x0
	FVector2D NormalizedOffset; // 0xc
	float Scale; // 0x14
	float RenderOpacity; // 0x18
	int32_t Version; // 0x1c
	FGameplayTagContainer OverlapWrapperIds; // 0x20
};

struct FStatusViewSource {
	FName SourceId; // 0x0
	bool IsActive; // 0xc
	float _remainingTime; // 0x10
	float PercentageFill; // 0x14
	int32_t Level; // 0x18
	EInventoryItemType SourceType; // 0x1c
	int32_t SourceIconIndex; // 0x20
	int32_t SourceLevel; // 0x24
};

struct FTallyScorePipsData {
	float Threshold; // 0x0
	TArray<float> PipThresholds; // 0x8
	TArray<FEmblemSlotData> Scores; // 0x18
	int32_t PipsDelta; // 0x28
	bool IsSlasher; // 0x2c
	bool IsVersusBotMatch; // 0x2d
	bool IsCustomMatch; // 0x2e
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FLoginJsonMessage {
	FString LoginJson; // 0x0
	FString LoginType; // 0x10
	FString RoleID; // 0x20
	bool IsNewAccount; // 0x30
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
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
	TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x20
};

struct FMovieSceneEventPayloadVariable {
	FString value; // 0x0
};

struct FStringCurve : FIndexedCurve {
	FString defaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FPlayerStatusEffectSpawnerHelperInitParams {
	UObject* WorldContextObject; // 0x0
	ADBDPlayer* OrininatingPlayer; // 0x8
	UGameplayModifierContainer* originatingEffect; // 0x10
	TArray<FStatusEffectSpawnData> EffectsToSpawn; // 0x18
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FPromoPackPurchaseUIData {
	FPurchaseCurrencyData AuricCellsPurchaseData; // 0x8
	bool HasAuricCellsData; // 0x28
	FPurchaseCurrencyData IridescentShardsPurchaseData; // 0x30
	bool HasIridescentShards; // 0x50
};

struct FSubtitlesEntry {
	FText subtitle; // 0x0
	bool isAOneLiner; // 0x18
};

struct FStatModifier {
	EModifierOperationStrategy OperationStrategy; // 0x0
	FGameplayTag ModifierTag; // 0x4
	EModifierCompoundStrategy CompoundStrategy; // 0x10
};

struct FReplicatedTrailItem : FFastArraySerializerItem {
	ATormentTrailPoint* TrailPoint; // 0x10
	char OrderInTrail; // 0x18
	FVector_NetQuantize10 PointRelativeLocation; // 0x1c
	FRotator PointRotation; // 0x28
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x8
};

struct FHeightFogGradientEntry {
	FLinearColor Colour; // 0x0
	float GradientHeight; // 0x10
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

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0xc
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FCurrencyPackData : FItemData {
	ECurrencyType currencyType; // 0x1d0
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
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

struct FItemTypeData : FDBDTableRowBase {
	ELoadoutItemType ItemType; // 0x8
	FItemUIData UIData; // 0x10
};

struct FCharacterCustomizationDropdown : FCharacterDropdown {
	FName OutfitId; // 0x8
	FName SurvivorHead; // 0x14
	FName SurvivorTorso; // 0x20
	FName SurvivorLegs; // 0x2c
	FName KillerHead; // 0x38
	FName KillerBody; // 0x44
	FName KillerWeapon; // 0x50
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x24
};

struct FQuadrantSpawnItem {
	EQuadrantSpawnType Type; // 0x0
	TArray<FWeightedItem> Elements; // 0x8
};

struct FAIGoalWeightContainer {
	TArray<FAIGoalWeight> WeightedGoals; // 0x0
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x10
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FMemoryUsageAnalytics : FUniquelyIdentifiedAnalytic {
	FString GameFlowStep; // 0x98
	int64_t TotalPhysical; // 0xa8
	int64_t TotalVirtual; // 0xb0
	int64_t PeakUsedPhysical; // 0xb8
	int64_t PeakUsedVirtual; // 0xc0
	int64_t AvailablePhysical; // 0xc8
	int64_t AvailableVirtual; // 0xd0
};

struct FSnowmanSpawnData {
	FVector SpawnLocation; // 0x0
	FRotator SpawnRotation; // 0xc
};

struct FLegacyPlayerSavedProfileDataLocal {
	int32_t Tokens; // 0x0
	TArray<FName> offerings; // 0x8
	bool FirstTimePlaying; // 0x18
	bool HasBeenGivenKillerTutorialEndReward; // 0x19
	bool HasBeenGivenSurvivorTutorialEndReward; // 0x1a
	int32_t Wins; // 0x1c
	int32_t Losses; // 0x20
	TMap<int32_t, FLegacyCharacterSavedProfileData> CharacterData; // 0x28
	uint64_t CurrentSeasonTicks; // 0x78
	FLegacySavedDailyRitualContainer DailyRituals; // 0x80
	FLegacySavedFearMarketOfferingInstance FearMarket; // 0x98
	FLegacySavedPlayerLoadoutData LastConnectedLoadout; // 0xb8
	int32_t LastConnectedCharacterIndex; // 0x150
	FDateTime DisconnectPenaltyTime; // 0x158
	int32_t _bloodpoints; // 0x160
	int32_t _bonusBloodpoints; // 0x164
	int32_t _unclampedBloodpoints; // 0x168
	int32_t _fearTokens; // 0x16c
	FDateTime _ongoingGameTime; // 0x170
	bool _fearTokensMigrated; // 0x178
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FManagedGameplayElementsPopulation {
	EGameplayElementType Type; // 0x0
	TSoftClassPtr<UObject> GameplayElementBlueprint; // 0x8
	float MinDistance; // 0x38
	int32_t MinPopulation; // 0x3c
	int32_t MaxPopulation; // 0x40
};

struct FMovieSceneFloatChannel : FMovieSceneChannel {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x8
	ERichCurveExtrapolation PostInfinityExtrap; // 0x9
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneFloatValue> Values; // 0x20
	float defaultValue; // 0x30
	bool bHasDefaultValue; // 0x34
	FMovieSceneKeyHandleMap KeyHandles; // 0x38
	FFrameRate TickResolution; // 0x98
};

struct FCharmSlot {
	int32_t SlotIndex; // 0x0
	TSoftClassPtr<UObject> CharmAttacherClass; // 0x8
	FCharmAttacherAnimationTweak DefaultAnimationTweak; // 0x38
	TMap<FName, FCharmAttacherAnimationTweak> AnimationTweakByTag; // 0x58
	ACharmAttacher* CharmAttacherSpawned; // 0xa8
};

struct FStoredInteraction {
	TWeakObjectPtr<UInteractionDefinition> _interaction; // 0x0
	EInputInteractionType _inputType; // 0x8
	FInteractionPlayerProperties _playerProperties; // 0xc
};

struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventPtrs EventToTrigger; // 0x38
};

struct FMarketingBannerData : FBaseBannerData {
	FText SubTitleId; // 0x38
	FString DeepLink; // 0x50
};

struct FPlagueSurvivorAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t BecomeInfectCount; // 0xa8
	int32_t RegularVomitHits; // 0xac
	int32_t SuperVomitHits; // 0xb0
	int32_t CleanSicknessCount; // 0xb4
	float TimeWithSickness; // 0xb8
	float TimeWithMaximumSickness; // 0xbc
	float TimeInSuperMode; // 0xc0
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
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

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FHookLingerTimerHandleContainer {
	AMeatHook* Hook; // 0x0
};

struct FRewardItemData {
	FString IconPath; // 0x0
	FString Title; // 0x10
	FString Description; // 0x20
	EItemRarity Rarity; // 0x30
	EInventoryItemType ItemType; // 0x31
	bool IsDuplicate; // 0x32
	ECurrencyType currencyType; // 0x33
	int32_t CurrencyAmount; // 0x34
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FClassRedirect {
	FName ObjectName; // 0x0
	FName OldClassName; // 0xc
	FName NewClassName; // 0x18
	FName OldSubobjName; // 0x24
	FName NewSubobjName; // 0x30
	FName NewClassClass; // 0x3c
	FName NewClassPackage; // 0x48
	bool InstanceOnly; // 0x54
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FRelevantNodeMemory {
	UBTNode* Node; // 0x0
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
};

struct FAtlantaEventElementUIData {
	EPromoPackContentType ElementType; // 0x0
	FText DisplayName; // 0x8
	FName NameID; // 0x20
	FColor Color; // 0x2c
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0xc
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
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

struct FMatchmakingAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchmakingSessionGuid; // 0x98
	EPlayerRole PlayerRole; // 0xa8
	EGameType GameType; // 0xa9
	int32_t PartySize; // 0xac
	int32_t Rank; // 0xb0
	FString characterName; // 0xb8
};

struct FMatchmakingHostCreatedAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t NumPublicConnections; // 0x98
	int32_t NumPrivateConnections; // 0x9c
	bool ShouldAdvertise; // 0xa0
	bool IsLANMatch; // 0xa1
	bool AllowInvites; // 0xa2
	bool UsesPresence; // 0xa3
	bool AllowJoinViaPresenceFriendsOnly; // 0xa4
	bool AllowJoinInProgress; // 0xa5
	bool AllowJoinViaPresence; // 0xa6
	bool success; // 0xa7
	FString HostSettings; // 0xa8
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FOutlineConfiguration {
	TArray<UMaterialInterface*> TranslucencyMaterials; // 0x0
	TArray<UMaterialInterface*> LocallyControlledTranslucencyMaterials; // 0x10
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

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FPlatformDlcData : FDBDTableRowBase {
	FString ID; // 0x8
	FText UnlockDescription; // 0x18
	FString Description; // 0x30
	int32_t UISortOrder; // 0x40
	FString DlcIdSteam; // 0x48
	FString DlcIdEpic; // 0x58
	FString DlcIdDmm; // 0x68
	FString DlcIdPS4; // 0x78
	FString DlcIdXB1; // 0x88
	FString DlcIdXSX; // 0x98
	FString DlcIdSwitch; // 0xa8
	FString DlcIdGRDK; // 0xb8
	FString DlcIdPS5; // 0xc8
	FString DlcIdStadia; // 0xd8
	FString DlcIdMobile; // 0xe8
};

struct FHitValidatorTargetParams {
	ACharacter* Target; // 0x0
	UCapsuleComponent* HittableCapsule; // 0x8
	float TargetLocationTimestamp; // 0x10
};

struct FStatusViewProperties : FDBDTableRowBase {
	FName StatusViewID; // 0x8
	FText Description; // 0x18
	FText DisplayName; // 0x30
	TSoftClassPtr<UObject> StatusViewBlueprint; // 0x48
	EStatusEffectType StatusType; // 0x78
	FString IconFilePath; // 0x80
	TSoftObjectPtr<UTexture2D> IconAsset; // 0x90
};

struct FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x24
	float CurrentTime; // 0x28
	float PreviousTime; // 0x2c
	float Duration; // 0x30
	FRootMotionSourceStatus Status; // 0x34
	FRootMotionSourceSettings Settings; // 0x35
	bool bInLocalSpace; // 0x36
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x10
};

struct FAtlantaKillerSoundIndicatorData : FDBDTableRowBase {
	float MinRadiusSoundDistance; // 0x8
	float MaxRadiusSoundDistance; // 0xc
	float MinRangeSoundHeard; // 0x10
	bool CanBeGlobalSound; // 0x14
	bool CanDiminishWithDistance; // 0x15
	TArray<FAtlantaKillerSoundConditionData> GlobalSoundConditions; // 0x18
	TArray<FAtlantaKillerSoundConditionData> DiminishWithDistanceConditions; // 0x28
};

struct FBlockingNode {
	FString ID; // 0x0
	int32_t BlockingCount; // 0x10
};

struct FWeightedWishedObjectMapContainer {
	TMap<UObject*, float> WeightedWishedObjectMap; // 0x0
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x50
	int32_t ChannelsUsed; // 0x2d0
};

struct FRarityTexture {
	FName Type; // 0x0
	EItemRarity Rarity; // 0xc
	FSoftObjectPath Texture; // 0x10
};

struct FDBDFoliageInstance {
	int32_t BaseId; // 0x0
	FGuid ProceduralGuid; // 0x4
	FVector Location; // 0x14
	FRotator Rotation; // 0x20
	FRotator PreAlignRotation; // 0x2c
	FVector DrawScale3D; // 0x38
	float ZOffset; // 0x44
	uint32_t Flags; // 0x48
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

struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
	ERichCurveInterpMode InterpMode; // 0xc
	ERichCurveTangentMode TangentMode; // 0xd
};

struct FMatchConfigTabData {
	TSoftClassPtr<UObject> Widget; // 0x0
	TSoftObjectPtr<UPaperSprite> TabIcon; // 0x30
	TMap<ECustomMatchOptions, int32_t> DefaultOptionsID; // 0x60
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0xc
};

struct FDailyRitualContainer {
	FDateTime LastRitualReceivedDate; // 0x0
	FDateTime LastRitualPopupDate; // 0x8
	FDateTime LastRitualDismissedDate; // 0x10
	TArray<FDailyRitualInstance> rituals; // 0x18
};

struct FTabWidgetData {
	int32_t Key; // 0x0
	FText Title; // 0x8
	TSoftObjectPtr<UTexture2D> Icon; // 0x20
	bool ForcesIconSize; // 0x50
	FVector2D IconSize; // 0x54
};

struct FRankUIData : FDBDTableRowBase {
	int32_t Rank; // 0x8
	EPlayerRole PlayerRole; // 0xc
	FSlateColor Color; // 0x10
	TSoftObjectPtr<UTexture2D> Frame; // 0x38
};

struct FGameStatePressureZoneLevelMapContainer {
	TMap<EAIGameState, EAIPressureZoneLevel> Map; // 0x0
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

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FAttackTypeDetails : FDBDTableRowBase {
	EAttackType attackType; // 0x8
	bool IsBasicAttack; // 0x9
	int32_t AssociatedCharacter; // 0xc
	FText Description; // 0x10
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FMediaIODevice {
	FName DeviceName; // 0x0
	int32_t DeviceIdentifier; // 0xc
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x10
	char TerrainMembership[0x4]; // 0x40
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

struct FActorSpawnerProperties {
	TSoftClassPtr<UObject> SceneElement; // 0x0
	float Weight; // 0x30
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x8
	FMargin Margin; // 0x10
	FSlateColor TintColor; // 0x20
	UObject* ResourceObject; // 0x48
	FName ResourceName; // 0x50
	FBox2D UVRegion; // 0x5c
	ESlateBrushDrawType DrawAs; // 0x70
	ESlateBrushTileType tiling; // 0x71
	ESlateBrushMirrorType Mirroring; // 0x72
	ESlateBrushImageType ImageType; // 0x73
	char bIsDynamicallyLoaded : 1; // 0x88
	char bHasUObject : 1; // 0x88
};

struct FBloodwebCostModifier : FDBDTableRowBase {
	EBloodwebNodeContentType Type; // 0x8
	float CostModifier; // 0xc
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x10
	FMovieSceneFloatChannel YCurve; // 0xb0
};

struct FToast : FDBDTableRowBase {
	float DisplayDuration; // 0x8
	float lifetime; // 0xc
	FText ToastText; // 0x10
	TMap<EToastInputType, FToastButton> ButtonsData; // 0x28
	float DelayBeforeInteraction; // 0x78
	TSoftObjectPtr<UTexture2D> ToastIcon; // 0x80
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

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FWeightedItem {
	TSoftClassPtr<UObject> Element; // 0x0
	float Weight; // 0x30
};

struct FArrayOfATile {
	TArray<ATile*> ArrayOfTiles; // 0x0
};

struct FSocialPartyMember {
	TArray<FName> _customizationMesh; // 0x8
	FString _playerName; // 0x18
	FString _platformSessionId; // 0x28
	FString _uniquePlayerId; // 0x38
	int32_t _playerRank; // 0x48
	int32_t _characterLevel; // 0x4c
	int32_t _prestigeLevel; // 0x50
	int32_t _gameRole; // 0x54
	int32_t _characterId; // 0x58
	FName _powerId; // 0x5c
	int32_t _location; // 0x68
	bool _ready; // 0x6c
	bool _crossplayAllowed; // 0x6d
	FString _playerPlatform; // 0x70
	FString _playerProvider; // 0x80
	EPartyPostMatchmakingRole _postMatchmakingRole; // 0x90
	EPartyPostMatchmakingState _postMatchmakingState; // 0x91
	char _roleRequested; // 0x92
	bool _isStateInitialized; // 0x93
	int64_t _disconnectionPenaltyEndOfBan; // 0x98
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x28
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
	FSlateColor SelectedTextColor; // 0x540
	FSlateBrush DropIndicator_Above; // 0x568
	FSlateBrush DropIndicator_Onto; // 0x5f8
	FSlateBrush DropIndicator_Below; // 0x688
	FSlateBrush ActiveHighlightedBrush; // 0x718
	FSlateBrush InactiveHighlightedBrush; // 0x7a8
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0xc
};

struct FGameNotificationData : FDBDTableRowBase {
	EPromptType PromptType; // 0x8
	EPromptPriority Priority; // 0x9
	FText Content; // 0x10
};

struct FTunableStat : FBaseStat {
	FDBDTunableRowHandle _baseValue; // 0x58
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x18
	FGuid ExpressionGUID; // 0x20
};

struct FNiagaraBool {
	int32_t value; // 0x0
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FBaseSingleStructIndexAnalytics {
	FString SessionGuid; // 0x8
};

struct FGeneratedLevelData {
	FString UsedPaperTileMap; // 0x0
	FString PremadeMap; // 0x10
	int32_t StreamRelatedSeed; // 0x20
	int32_t AvailableEscapeCount; // 0x24
	int32_t AvailableSurvivorItemCount; // 0x28
	ESurvivorGrouping GroupingType; // 0x2c
	USceneComponent* KillerSpawnPoint; // 0x30
	TArray<USceneComponent*> SurvivorSpawnPoints; // 0x38
	TArray<USceneComponent*> InteractableElementsSpawnPoints; // 0x48
	TMap<FName, int32_t> SpecialBehaviourRequestCounts; // 0x58
	TMap<FName, FArrayOfSceneComponent> SpecialBehaviourSpawnPoints; // 0xa8
	TArray<USceneComponent*> SearchableSpawners; // 0xf8
	TArray<USceneComponent*> HexSpawners; // 0x108
	TArray<USceneComponent*> KillerLairSpawners; // 0x118
	TArray<USceneComponent*> HatchSpawners; // 0x128
	TArray<USceneComponent*> MainBuildingHatchSpawners; // 0x138
	TArray<USceneComponent*> ShackHatchSpawners; // 0x148
	TArray<USceneComponent*> BreakableWallSpawners; // 0x158
	TArray<USceneComponent*> EscapeSpawners; // 0x168
	FManagedGameplayElementData BookshelfManagedGameplayElementData; // 0x178
	FManagedGameplayElementData MeatHookManagedGameplayElementData; // 0x1c8
	TArray<FDependency> levelDependencies; // 0x218
	TArray<FDependency> LateLevelDependencies; // 0x228
	TArray<AActor*> FixedMapTileIds; // 0x238
	TArray<AActor*> FixedMapOrphanSpawners; // 0x248
	FName SpecialEventId; // 0x258
	bool UseForcedMap; // 0x264
	bool UsePremadeMap; // 0x265
	FString GenerationLogs; // 0x268
	FString GenerationErrors; // 0x278
	int32_t GenerationPlayerCount; // 0x288
	TArray<FForceSpawnTileData> ForceSpawnTileData; // 0x290
	TArray<AActor*> LevelLightings; // 0x2a0
};

struct FCurrencyProgressionRewardViewData : FRewardViewData {
	int32_t amount; // 0x4
	TSoftObjectPtr<UMaterialInterface> RewardBackgroundMaterial; // 0x8
	TSoftObjectPtr<UTexture2D> RewardIcon; // 0x38
	FCurrencyProgressionTooltipViewData TooltipData; // 0x68
};

struct FK26AttachmentStatus {
	FK26AttachedCrowRemovalReason LastRemovalReason; // 0x0
	bool IsAttached; // 0x1
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0xc
	FGuid AnimationGuid; // 0x18
	bool bIsRootWidget; // 0x28
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x10
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x60
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xb0
	TArray<FName> SectionOrder; // 0x100
};

struct FPerspectiveEffectData {
	bool WantsActive; // 0x0
	FDelegate ActivationEvent; // 0x4
	EPerspectiveActivationCondition Condition; // 0x18
};

struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xd0
	FBoneReference targetBone; // 0xe4
	bool bCopyTranslation; // 0xf8
	bool bCopyRotation; // 0xf9
	bool bCopyScale; // 0xfa
	EBoneControlSpace ControlSpace; // 0xfb
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FMenuIndexChangeEventData {
	int32_t Index; // 0x0
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FAITunableParameter {
	float defaultValue; // 0x0
	FName TunableName; // 0x4
};

struct FPromoPackData : FDBDTableRowBase {
	FName ID; // 0x8
	TSoftObjectPtr<UPaperSprite> PromoPackIcon; // 0x18
	FItemUIData UIData; // 0x48
};

struct FOnboardingTutorialDefinition : FDBDTableRowBaseWithId {
	FText DisplayName; // 0x18
	FText CompletedDisplayName; // 0x30
	FText Description; // 0x48
	FText CompletedDescription; // 0x60
	EOnboardingTutorialType TutorialType; // 0x78
	EOnboardingTutorialButtonStyle ButtonStyle; // 0x79
	FString LevelId; // 0x80
	TSoftObjectPtr<UTexture2D> Icon; // 0x90
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FNiagaraInt32 {
	int32_t value; // 0x0
};

struct FStadiaLivestreamAnalytics : FUniquelyIdentifiedAnalytic {
	FString StreamStartTime; // 0x98
	FString UserId; // 0xa8
	bool CrowdPlayEnabled; // 0xb8
	bool CrowdChoiceEnabled; // 0xb9
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0xc
	char bInstanceSeedIsIndex : 1; // 0xc
	char bResetSeedOnEmitterLooping : 1; // 0xc
	char bRandomlySelectSeedArray : 1; // 0xc
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FGameVersionMessage {
	FString Version; // 0x0
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0xc
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FAkXSXApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FBoneReference SpringBone; // 0xd0
	float MaxDisplacement; // 0xe4
	float SpringStiffness; // 0xe8
	float SpringDamping; // 0xec
	float ErrorResetThresh; // 0xf0
	char bLimitDisplacement : 1; // 0x130
	char bTranslateX : 1; // 0x130
	char bTranslateY : 1; // 0x130
	char bTranslateZ : 1; // 0x130
	char bRotateX : 1; // 0x130
	char bRotateY : 1; // 0x130
	char bRotateZ : 1; // 0x130
};

struct FLegacySavedBloodWebPersistentData {
	int32_t VersionNumber; // 0x0
	int32_t Level; // 0x4
	TArray<FLegacySavedBloodWebRingPersistentData> RingData; // 0x8
	TArray<FName> Paths; // 0x18
	FString EntityCurrentNode; // 0x28
	FDateTime GenerationDate; // 0x38
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FYawAndPitchRotator_NetQuantize32 {
	FRotator _value; // 0x0
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
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

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FTeachableData {
	FInventorySlotData InventorySlotData; // 0x0
	ETeachableStatus Status; // 0xf8
	int32_t UnlockLevel; // 0xfc
	FString Message; // 0x100
};

struct FScoreAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FName ScoreTypeId; // 0xa8
	int32_t ScoreCount; // 0xb4
	float ScoreBloodwebPoints; // 0xb8
};

struct FPerkInitializationData {
	int32_t PerkLevel; // 0x0
	EInputInteractionType ActivatableInteractionInputType; // 0x4
	bool AuthorityDataSet; // 0x5
};

struct FBlockableReplicatedDatum {
	TArray<TWeakObjectPtr<UObject>> Sources; // 0x0
	TArray<TWeakObjectPtr<ADBDPlayer>> BlockedPlayers; // 0x10
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FSnowmanSpawnLocationData {
	FVector OriginLocation; // 0x0
	TArray<FVector> NavmeshLocations; // 0x10
};

struct FSourceEffectMidSideSpreaderSettings {
	EStereoChannelMode InputMode; // 0x0
	float SpreadAmount; // 0x4
	EStereoChannelMode OutputMode; // 0x8
	bool bEqualPower; // 0x9
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
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

struct FBuiltLevelData {
	FName ThemeName; // 0x0
	FName ThemeWeather; // 0xc
	FName AudioStateThemes; // 0x18
	FName AudioStateWeather; // 0x24
	FName AudioThemeEvent; // 0x30
	TSoftObjectPtr<UAkAudioBank> AudioThemeSoundBank; // 0x40
	FString MapName; // 0x70
	int32_t TileCount; // 0x80
	TArray<FDependency> Dependencies; // 0x88
	FName SpecialEventId; // 0x98
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0xc
};

struct FAtlantaFreeTicketCombinedData {
	FAtlantaFreeTicketUIData UIData; // 0x0
	EPlayerRole Role; // 0x1f8
	int32_t DurationInMinutes; // 0x1fc
	int32_t Quantity; // 0x200
};

struct FDailyRitualInstance {
	FName RitualKey; // 0x0
	int32_t DifficultyTier; // 0xc
	TArray<EDBDScoreTypes> TrackedEvents; // 0x10
	TArray<FGameplayTag> TrackedGameEvents; // 0x20
	TArray<int32_t> CharacterIDs; // 0x30
	TArray<EPlayerRole> Roles; // 0x40
	float Progress; // 0x50
	float Threshold; // 0x54
	float Tolerance; // 0x58
	float DisplayThreshold; // 0x5c
	float ExpReward; // 0x60
	bool Active; // 0x64
	bool IsNew; // 0x65
	FDateTime DateAssigned; // 0x68
	int32_t NbGameElapsed; // 0x70
};

struct FStoreFeaturedBannerUIData {
	FName BannerId; // 0x0
	FStoreFeaturedBannerData BannerData; // 0x10
	bool IsNew; // 0x90
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference targetBone; // 0xd0
	FBoneReference SourceBone; // 0xe4
	float Multiplier; // 0xf8
	EBoneAxis RotationAxisToRefer; // 0xfc
	bool bIsAdditive; // 0xfd
};

struct FSpeedBasedNetSyncedValue {
	float _replicatedValue; // 0x18
	float _replicatedSpeed; // 0x20
	float _replicatedLastUpdateTimestamp; // 0x28
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0xc
	EAxis BoneFlipAxis; // 0x18
};

struct FShopTransactionItem {
	FShopTransactionItemParameters Item; // 0x0
};

struct FLoadoutSlotUnlockLevelValue : FDBDTableRowBase {
	ELoadoutSlot LoadoutSlot; // 0x8
	int32_t BloodWebLevel; // 0xc
};

struct FPlayerReadyStatusData {
	int32_t playerID; // 0x0
	bool IsReady; // 0x4
	bool IsSlasher; // 0x5
	bool IsLocalPlayer; // 0x6
};

struct FLegacySavedDailyRitualInstance {
	FName RitualKey; // 0x0
	TArray<int32_t> CharacterIDs; // 0x10
	TArray<EPlayerRole> Roles; // 0x20
	float Progress; // 0x30
	float Threshold; // 0x34
	float Tolerance; // 0x38
	float DisplayThreshold; // 0x3c
	float ExpReward; // 0x40
	bool Active; // 0x44
	bool Rewarded; // 0x45
	bool StateChanged; // 0x46
	FDateTime DateAssigned; // 0x48
	int32_t NbGameElapsed; // 0x50
	TArray<EDBDScoreTypes> TrackedEvents; // 0x58
	TArray<FGameplayTag> TrackedGameEvents; // 0x68
};

struct FEscapeTypeObjects {
	EscapeStrategyType Type; // 0x0
	TArray<TSoftClassPtr<UObject>> EscapeObjects; // 0x8
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FLegacySavedBloodWebRingPersistentData {
	TArray<FLegacySavedBloodwebNode> NodeData; // 0x0
};

struct FRarityMaterialData : FDBDTableRowBase {
	EItemRarity Rarity; // 0x8
	UMaterialInterface* Material; // 0x10
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x30
	int32_t X; // 0x34
	int32_t Y; // 0x38
	int32_t Width; // 0x3c
	int32_t Height; // 0x40
};

struct FAIDifficultyTunableRowData : FDBDTableRowBase {
	float VeryEasy; // 0x8
	float Easy; // 0xc
	float Medium; // 0x10
	float Hard; // 0x14
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0xc
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0xc
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x18
	bool bTerminalIsConst; // 0x20
	bool bTerminalIsWeakPointer; // 0x21
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18
};

struct FOfferingRevealDelays {
	EOfferingSequenceState RevealState; // 0x0
	float Delay; // 0x4
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FNiagaraFunctionSignature {
	FName Name; // 0x0
	TArray<FNiagaraVariable> Inputs; // 0x10
	TArray<FNiagaraVariable> Outputs; // 0x20
	FName OwnerName; // 0x30
	char bRequiresContext : 1; // 0x3c
	char bMemberFunction : 1; // 0x3c
	char bExperimental : 1; // 0x3c
	char bSupportsCPU : 1; // 0x3c
	char bSupportsGPU : 1; // 0x3c
	char bWriteFunction : 1; // 0x3c
	TMap<FName, FName> FunctionSpecifiers; // 0x40
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0xc
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FSkillCheckDefinition {
	float SuccessZoneStart; // 0x0
	float SuccessZoneEnd; // 0x4
	float BonusZoneLength; // 0x8
	float BonusZoneStart; // 0xc
	float ProgressRate; // 0x10
	float StartingTickerPosition; // 0x14
	bool IsDeactivatedAfterResponse; // 0x18
	float WarningSoundDelay; // 0x1c
	bool IsAudioMuted; // 0x20
	bool IsJittering; // 0x21
	bool IsSuccessZoneMirrorred; // 0x22
	bool IsInsane; // 0x23
};

struct FLoadoutBaseAnalytics : FUniquelyIdentifiedAnalytic {
	FString LoadoutItem; // 0x98
	FString LoadoutItemAddOn1; // 0xa8
	FString LoadoutItemAddOn2; // 0xb8
	FString LoadoutPerk1; // 0xc8
	FString LoadoutPerk2; // 0xd8
	FString LoadoutPerk3; // 0xe8
	FString LoadoutPerk4; // 0xf8
	FString LoadoutOffering; // 0x108
	EPlayerRole Role; // 0x118
	int32_t Rank; // 0x11c
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FKeyTupleBool {
	FName Key; // 0x0
	bool value; // 0xc
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FRichTextRewardRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
	FMargin TextMargin; // 0x290
	FSlateBrush Brush; // 0x2a0
	FSlateBrush TintsBrush; // 0x330
	FSlateBrush BackgroundBrush; // 0x3c0
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FCharacterLevelData {
	int32_t Level; // 0x0
	int32_t ExperienceToNextLevel; // 0x4
	bool IsComplete; // 0x8
	bool HasPerksBeenSelected; // 0x9
	TArray<FAssignedPerkProperties> PerkSelection; // 0x10
};

struct FAttackDelegatePair {
	UDBDAttack* _attack; // 0x0
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FExecuteInstantActionParams {
	FActionPredictionKey PredictionKey; // 0x0
	float PredictionDelay; // 0x4
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FAIDetectedStimulus {
	TWeakObjectPtr<AActor> Instigator; // 0x0
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Velocity; // 0x20
	float AtTime; // 0x2c
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x58
};

struct FKillerClosetActorsTypes : FDBDTableRowBase {
	TSoftClassPtr<UObject> ClosetActorClass; // 0x8
};

struct FAnimSequenceSelector {
	UAnimSequence* _selected; // 0x0
	TArray<FTaggedAnimSequence> _taggedSequences; // 0x8
};

struct FGameplayElementsPopulation {
	EGameplayElementType Type; // 0x0
	TSoftClassPtr<UObject> GameplayElementBlueprint; // 0x8
	int32_t MinPopulation; // 0x38
	int32_t MaxPopulation; // 0x3c
	int32_t MinGuaranteePopulation; // 0x40
	int32_t SpawnPass; // 0x44
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FLegacySavedDailyRitualContainer {
	FDateTime LastRitualReceivedDate; // 0x0
	TArray<FLegacySavedDailyRitualInstance> rituals; // 0x8
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FRichTextFreeTicketTextInfo {
	FTextBlockStyle TextStyle; // 0x0
	FText Content; // 0x288
	FMargin Padding; // 0x2a0
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool defaultValue; // 0x38
};

struct FWrappedStringElement {
	FString value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
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

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xa8
	FName ChildActorName; // 0xb0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc0
};

struct FPromoPackContentTypeData {
	TSoftClassPtr<UObject> CorrespondingWidget; // 0x0
	TSoftObjectPtr<UTexture2D> ContentTypeIcon; // 0x30
};

struct FAtlantaAuricCellPacksUIData {
	TArray<FCurrencyPurchaseData> CurrencyPurchaseData; // 0x10
	int32_t FirstPurchaseBundleMultiplier; // 0x20
	FDateTime FirstPurchaseBundleMultiplierEndDate; // 0x28
	bool IsSet; // 0x30
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FDisconnectionDetailsAnalytics : FUniquelyIdentifiedAnalytic {
	FString PlayerPlatform; // 0x98
	FString MatchID; // 0xa8
	int32_t InGameTime; // 0xb8
	EPlayerRole Role; // 0xbc
	FString reason; // 0xc0
	EHealthStatus Health; // 0xd0
	TArray<ECharacterStatus> CharacterStatus; // 0xd8
	int32_t GeneratorActivated; // 0xe8
	EHatchStatus HatchStatus; // 0xec
	EDoorStatus DoorStatus; // 0xed
	EGameState DisconnectionType; // 0xee
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FAIRoll {
	FAITunableParameter Random; // 0x0
	FAITunableParameter OnFailCooldown; // 0x10
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float value; // 0x4
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x20
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x18
	TArray<FSoftObjectPath> BundleAssets; // 0x28
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FGameBot {
	char _role; // 0x0
	char _difficulty; // 0x1
	int32_t _characterIndex; // 0x4
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FPlayerNameMessage {
	FString Name; // 0x0
};

struct FSceneLightingDescription {
	FName ThemeName; // 0x0
	FLightingSpecifics LightingDetailsLowMedium; // 0x10
	FLightingSpecifics LightingDetailsHighUltra; // 0x40
	FLightingSpecifics LightingAtlanta; // 0x70
	TSoftObjectPtr<UTextureCube> TextureCube; // 0xa0
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

struct FHtmlToRichTagConvertRow : FTableRowBase {
	FString HtmlTag; // 0x8
	FString RichTextTag; // 0x18
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
};

struct FErrorAnalytics : FUniquelyIdentifiedAnalytic {
	FString ErrorCategory; // 0x98
	float FloatField1; // 0xa8
	float FloatField2; // 0xac
	float FloatField3; // 0xb0
	FString StringField1; // 0xb8
	FString StringField2; // 0xc8
	FString StringField3; // 0xd8
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
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

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0xc
	uint32_t SetQualityLevelMask; // 0x10
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FBloodWebRingPersistentData {
	TArray<FBloodwebNode> NodeData; // 0x0
};

struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FDataTableDropdown {
	FName RowValue; // 0x0
	FString DataTableName; // 0x10
	FName ColumnName; // 0x20
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FMapMeshToAkAudioEvent {
	TSoftObjectPtr<UStaticMesh> Mesh; // 0x0
	UAkAudioEvent* SoundEvent; // 0x30
	float MinDelayBetweenEvents; // 0x38
	float MinDelayBetweenObject; // 0x3c
};

struct FDedicatedServerStatusAnalytics : FUniquelyIdentifiedAnalytic {
	FString DSSessionProvider; // 0x98
	FString ServerStatus; // 0xa8
	FString GameLiftSessionId; // 0xb8
	FString MatchID; // 0xc8
	FString SessionEndReason; // 0xd8
	FString FleetId; // 0xe8
	FString IpAddress; // 0xf8
	int32_t Port; // 0x108
	FString DnsName; // 0x110
};

struct FMapCoordData {
	FString Type; // 0x0
	FString Actor; // 0x10
	int32_t X; // 0x20
	int32_t Y; // 0x24
	int32_t Z; // 0x28
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x30
	char bDrawDebugTrackingFocusPoint : 1; // 0x3c
};

struct FAIGoal {
	UObject* Source; // 0x0
	UObject* MetaGoal; // 0x8
	UObject* Goal; // 0x10
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FSubscriptionUIData : FDBDTableRowBase {
	FText DisplayName; // 0x8
	FText Description; // 0x20
	TMap<FName, FText> PlatformDetails; // 0x38
	TSoftObjectPtr<UTexture2D> TitleTexture; // 0x88
	TSoftObjectPtr<UTexture2D> PortraitBorderTexture; // 0xb8
};

struct FSimpleCharacterDropdown {
	int32_t characterId; // 0x0
};

struct FAnimationMontageDescriptor {
	FName MontageID; // 0x0
	TArray<FName> Tags; // 0x10
};

struct FWindowBlockableList {
	TArray<UBlockableComponent*> Blockables; // 0x0
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FStatusEffectSpawnData {
	FString EffectId; // 0x0
	float customParam; // 0x10
	EStatusEffectSpawnerReceiverStrategy ReceiverStrategy; // 0x14
	EPawnType PawnType; // 0x18
	bool SkipOriginatingPlayer; // 0x19
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x98
	FSlateBrush BackgroundImageFocused; // 0x128
	FSlateBrush BackgroundImageReadOnly; // 0x1b8
	FMargin Padding; // 0x248
	FSlateFontInfo Font; // 0x258
	FSlateColor ForegroundColor; // 0x2b0
	FSlateColor BackgroundColor; // 0x2d8
	FSlateColor ReadOnlyForegroundColor; // 0x300
	FMargin HScrollBarPadding; // 0x328
	FMargin VScrollBarPadding; // 0x338
	FScrollBarStyle ScrollBarStyle; // 0x348
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x118
	FSlateBrush CaretImage; // 0x1a8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x10
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FDetailedHitAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString InstigatorMirrorsId; // 0xa8
	FString TargetMirrorsId; // 0xb8
	float Ping; // 0xc8
	float HitTimestamp; // 0xcc
	bool IsValidHit; // 0xd0
	bool IsValidDistance; // 0xd1
	bool IsValidCollision; // 0xd2
	float RecorderCacheTimespan; // 0xd4
	float MaximumDistance; // 0xd8
	float CapsuleInflation; // 0xdc
	FString InstigatorName; // 0xe0
	FString HitPrimitiveName; // 0xf0
	float InstigatorCoordinateX; // 0x100
	float InstigatorCoordinateY; // 0x104
	float InstigatorCoordinateZ; // 0x108
	float InstigatorRotationX; // 0x10c
	float InstigatorRotationY; // 0x110
	float InstigatorRotationZ; // 0x114
	float TargetLocationInstigatorTimestamp; // 0x118
	float TargetCoordinateX; // 0x11c
	float TargetCoordinateY; // 0x120
	float TargetCoordinateZ; // 0x124
	float Distance; // 0x128
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
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

struct FGamePlayModifier {
	FGameplayTag Type; // 0x0
	float ModifierValue; // 0xc
};

struct FShopTransactionVirtualCurrency {
	FShopTransactionVirtualCurrencyParameters virtualCurrency; // 0x0
};

struct FS3CommandErrorAnalytics : FUniquelyIdentifiedAnalytic {
	FString URL; // 0x98
	FString Verb; // 0xa8
	int32_t ResponseCode; // 0xb8
	bool InvalidRequest; // 0xbc
	bool InvalidResponse; // 0xbd
	bool DecryptionFailure; // 0xbe
	bool BadResponse; // 0xbf
	bool ContentModifiedError; // 0xc0
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
};

struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FMovieSceneFloatValue {
	float value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FLamentConfigurationPlayerPossessionData {
	float PickUpElapsedMatchTime; // 0x0
	float DropElapsedMatchTime; // 0x4
	FString Outcome; // 0x8
};

struct FRitualEvent {
	EDBDScoreTypes scoreType; // 0x0
	FGameplayTag gameEventType; // 0x4
	float amount; // 0x10
	ADBDPlayer* Instigator; // 0x18
	ADBDPlayerState* InstigatorPlayerState; // 0x20
	AActor* Target; // 0x28
};

struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	float LinearDampingOverride; // 0xd0
	float AngularDampingOverride; // 0xd4
	FBoneReference RelativeSpaceBone; // 0x140
	bool bHardLinkChain; // 0x154
	FBoneReference BoundBone; // 0x158
	FBoneReference ChainEnd; // 0x16c
	FVector BoxExtents; // 0x180
	FVector LocalJointOffset; // 0x18c
	float GravityScale; // 0x198
	FVector GravityOverride; // 0x19c
	float LinearSpringConstant; // 0x1a8
	float AngularSpringConstant; // 0x1ac
	float WindScale; // 0x1b0
	FVector ComponentLinearAccScale; // 0x1b4
	FVector ComponentLinearVelScale; // 0x1c0
	FVector ComponentAppliedLinearAccClamp; // 0x1cc
	float AngularBiasOverride; // 0x1d8
	int32_t NumSolverIterationsPreUpdate; // 0x1dc
	int32_t NumSolverIterationsPostUpdate; // 0x1e0
	FAnimPhysConstraintSetup ConstraintSetup; // 0x1e4
	TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x230
	float SphereCollisionRadius; // 0x240
	FVector ExternalForce; // 0x244
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x250
	AnimPhysCollisionType CollisionType; // 0x260
	AnimPhysSimSpaceType SimulationSpace; // 0x261
	char bUseSphericalLimits : 1; // 0x264
	char bUsePlanarLimit : 1; // 0x264
	char bDoUpdate : 1; // 0x264
	char bDoEval : 1; // 0x264
	char bOverrideLinearDamping : 1; // 0x264
	char bOverrideAngularBias : 1; // 0x264
	char bOverrideAngularDamping : 1; // 0x264
	char bEnableWind : 1; // 0x264
	char bUseGravityOverride : 1; // 0x265
	char bLinearSpring : 1; // 0x265
	char bAngularSpring : 1; // 0x265
	char bChain : 1; // 0x265
	FRotationRetargetingInfo RetargetingSettings; // 0x270
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FCustomizedMeshPart {
	ECustomizationCategory Category; // 0x0
	FDataTableDropdown DefaultItemId; // 0x8
	FName SocketName; // 0x38
};

struct FSubscriptionReward {
	TArray<FRewardItem> Rewards; // 0x0
	FDateTime NextClaimTime; // 0x10
	FString AnalyticsEventId; // 0x18
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x18
};

struct FAtlantaNoiseIndicatorDistanceData : FDBDTableRowBase {
	FString Description; // 0x8
	float DistanceForNoiseIndicatorToAppear; // 0x18
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x20
	ULiveLinkSubjectSettings* Settings; // 0x28
	ULiveLinkVirtualSubject* VirtualSubject; // 0x30
	bool bEnabled; // 0x38
};

struct FLegacyCharacterSavedProfileData {
	int32_t VersionNumber; // 0x0
	int32_t BloodPoints; // 0x4
	int32_t BloodWebLevel; // 0x8
	int32_t PrestigeLevel; // 0xc
	int32_t TimesConfronted; // 0x10
	TArray<FDateTime> PrestigeDates; // 0x18
	FLegacySavedBloodWebPersistentData BloodWebData; // 0x28
	FLegacySavedPlayerLoadoutData CharacterLoadoutData; // 0x68
	TArray<FName> Inventory; // 0x100
	TArray<FLegacyCharacterSavedInventoryData> InventoryData; // 0x110
	TArray<FName> CurrentCustomization; // 0x120
};

struct FInboxMessageUIData {
	FString MessageId; // 0x0
	FDateTime ReceivedTime; // 0x10
	EInboxMessageUIType MessageType; // 0x18
	FString MessageTitle; // 0x20
	FString MessageBody; // 0x30
	EInboxMessageUIState MessageState; // 0x40
	FClaimableInboxMessage AttachedClaimable; // 0x48
};

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x40
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString value; // 0x10
};

struct FLegacySavedBloodwebNode {
	FLegacySavedBloodwebNodeProperties Properties; // 0x0
	TArray<FLegacySavedBloodwebNodeGate> Gates; // 0x18
	EBloodwebNodeState State; // 0x28
	FString nodeID; // 0x30
	FName ContentId; // 0x40
	FLegacySavedBloodwebChest BloodwebChest; // 0x50
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
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

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0xc
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FArrayOfInt32 {
	TArray<int32_t> value; // 0x0
};

struct FDedicatedSessionSearchCompletedEventData {
	FString GameLiftSessionId; // 0x0
	FString MatchID; // 0x10
	FString FleetId; // 0x20
	FString IpAddress; // 0x30
	int32_t Port; // 0x40
	FString DnsName; // 0x48
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x58
	EMovieSceneBlendType BlendType; // 0x2d8
};

struct FCinematic {
	TSoftObjectPtr<UMediaSource> Source; // 0x0
	FVector2D SourceSize; // 0x30
	bool SourceHasAudio; // 0x38
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FGameInfoEventData {
	EPlayerRole PlayerRole; // 0x0
	EGameType GameType; // 0x1
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath gameMode; // 0x10
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
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

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FSaveGameLoadResultAnalytics : FUniquelyIdentifiedAnalytic {
	bool LoadSuccessful; // 0x98
	FString Message; // 0xa0
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FCurrencyConversion {
	TMap<ECurrencyType, float> AmountInOtherCurrency; // 0x0
};

struct FDebugLoadoutPerk {
	FDataTableDropdown perkId; // 0x0
	int32_t PerkLevel; // 0x30
};

struct FRetentionCalendar {
	FString ID; // 0x0
	FDateTime StartTime; // 0x10
	FDateTime EndTime; // 0x18
	EClaimType ClaimType; // 0x20
	TArray<FRetentionReward> Rewards; // 0x28
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FJoinabilitySettings {
	FName SessionName; // 0x0
	bool bPublicSearchable; // 0xc
	bool bAllowInvites; // 0xd
	bool bJoinViaPresence; // 0xe
	bool bJoinViaPresenceFriendsOnly; // 0xf
	int32_t MaxPlayers; // 0x10
	int32_t MaxPartySize; // 0x14
};

struct FAtlantaKillerSoundConditionData : FDBDTableRowBase {
	FName RTPCAudioID; // 0x8
	float ComparisonValue; // 0x14
	EKillerSoundComparisonType ValueComparisonType; // 0x18
};

struct FCharacterDropdown : FRoleDropdown {
	int32_t characterId; // 0x4
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FRichCurveKey {
	ERichCurveInterpMode InterpMode; // 0x0
	ERichCurveTangentMode TangentMode; // 0x1
	ERichCurveTangentWeightMode TangentWeightMode; // 0x2
	float Time; // 0x4
	float value; // 0x8
	float ArriveTangent; // 0xc
	float ArriveTangentWeight; // 0x10
	float LeaveTangent; // 0x14
	float LeaveTangentWeight; // 0x18
};

struct FAnimLegIKDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x14
	int32_t NumBonesInLimb; // 0x28
	float MinRotationAngle; // 0x2c
	EAxis FootBoneForwardAxis; // 0x30
	EAxis HingeRotationAxis; // 0x31
	bool bEnableRotationLimit; // 0x32
	bool bEnableKneeTwistCorrection; // 0x33
};

struct FGhostStatusData {
	bool IsExposed; // 0x0
	float StalkingProgress; // 0x4
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

struct FDailyRitualLevel {
	float Threshold; // 0x0
	float Tolerance; // 0x4
	int32_t DisplayTotal; // 0x8
	float BloodpointsReward; // 0xc
};

struct FAtlantaRitualRewardUIData {
	EAtlantaRitualRewardUIType Type; // 0x0
	int32_t Quantity; // 0x4
	FString IconFilePath; // 0x8
	EItemRarity Rarity; // 0x18
};

struct FPerspectiveDependentAnimSequenceSelector {
	UAnimSequence* _current; // 0x0
	UAnimSequence* _thirdPerson; // 0x8
	UAnimSequence* _firstPerson; // 0x10
};

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int32_t MessageIndex; // 0x14
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FDBDRecentGameplayEvents {
	TMap<EDBDScoreTypes, FDateTime> _recentGameplayEvents; // 0x0
};

struct FAtlantaFreeTicketAffectedUIData {
	FString InEffectBGFilePath; // 0x0
	FName ID; // 0x10
	FDateTime EndDate; // 0x20
	bool HasFreeTicketToUse; // 0x28
};

struct FSurvivorItemProperties {
	ECollectableCategory Category; // 0x0
	float Weight; // 0x4
	int32_t MaxPopulation; // 0x8
};

struct FStatProperty : FBaseStat {
	bool _useTunable; // 0x58
	float _nonTunableValue; // 0x5c
	FDBDTunableRowHandle _tunableValue; // 0x60
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FSpawnedAttackPoint {
	ABaseTormentTrailPoint* AttackTrailPoint; // 0x0
};

struct FSpecialBehaviourObjectsInfo {
	FName SpecialBehaviourId; // 0x0
	int32_t AmountRequired; // 0xc
	int32_t TimesInteractedWith; // 0x10
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0xc
	FName DriverClassNameFallback; // 0x18
};

struct FPerMeshInstancingData {
	TMap<uint32_t, UInstancedStaticMeshComponent*> hashToInstancedMeshes; // 0x0
};

struct FPendingInstantAction {
	UBaseReversibleInstantActionHandler* Handler; // 0x0
	FTimerHandle TimerHandle; // 0x18
};

struct FPerkLevelEffectArray {
	TArray<FStatusEffectSpawnData> EffectsToSpawn; // 0x0
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x10
	FMovieSceneFloatChannel GreenCurve; // 0xb0
	FMovieSceneFloatChannel BlueCurve; // 0x150
	FMovieSceneFloatChannel AlphaCurve; // 0x1f0
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FChainHuntStateData {
	FDateTime StartTime; // 0x0
	EChainHuntState ChainHuntState; // 0x8
};

struct FBloodOrbInfo {
	UStaticMeshComponent* originalStaticMesh; // 0x50
	UStaticMeshComponent* clonedStaticMesh; // 0x58
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x14
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x34
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x28
	bool G; // 0x29
	bool B; // 0x2a
	bool A; // 0x2b
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0xc
	FKey Key; // 0x10
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

struct FBloodwebChest : FDBDTableRowBase {
	FName ID; // 0x8
	FName EventId; // 0x14
	EBloodchestType ChestType; // 0x20
	EItemRarity Rarity; // 0x21
	TArray<float> GivenItemRarity; // 0x28
};

struct FRankGroupDefinition {
	int32_t RankThreshold; // 0x0
	TArray<float> PipThresholds; // 0x8
};

struct FVariationData : FDBDTableRowBase {
	FGameplayTag Tag; // 0x8
	FText Name; // 0x18
};

struct FCameraAttachment {
	USceneComponent* Parent; // 0x0
};

struct FCustomizationCategoryData : FDBDTableRowBase {
	FName ID; // 0x8
	ECustomizationCategory Category; // 0x14
	FString IconPath; // 0x18
	FText DisplayName; // 0x28
	EPlayerRole Role; // 0x40
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FPlayerFloatTuple {
	ACharacter* Player; // 0x0
	float value; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x20
};

struct FOutfitViewSetting {
	FName label; // 0x0
	FOutfitDropdown OutfitDropdown; // 0xc
	FScreenshotViewSetting Settings; // 0x20
};

struct FScoreCategoryUIExtraData {
	FText ScoreCategoryName; // 0x0
	UTexture2D* ScoreCategoryAsset; // 0x18
	int32_t ScoreValue; // 0x20
};

struct FStadiaStreamAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	FString DynamicRange; // 0xa8
	FString PixelDensity; // 0xb8
	FString RenderResolution; // 0xc8
	float NetworkDelayForInputTime; // 0xd8
	float NetworkDelayForVideoTime; // 0xdc
	float PercentFramesAbove60FPS; // 0xe0
	float PercentFramesBelow60FPS; // 0xe4
	float PercentFramesBelow45FPS; // 0xe8
	float PercentFramesBelow30FPS; // 0xec
	float PercentFramesBelow20FPS; // 0xf0
};

struct FLamentConfigurationPlayerPossessionAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	float PickUpElapsedMatchTime; // 0xa8
	float DropElapsedMatchTime; // 0xac
	FString Outcome; // 0xb0
};

struct FAwardedScore {
	FName ScoreTypeId; // 0x0
	float BloodpointsAwarded; // 0xc
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

struct FDBDConnectionStatus {
	UDBDGameInstance* _gameInstance; // 0x8
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78
	EAlphaBlendOption BlendOption; // 0x88
	UCurveFloat* CustomCurve; // 0x90
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FRewardViewData {
	bool IsLocked; // 0x0
	bool IsHighlighted; // 0x1
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0xc
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

struct FBakedAnimationState {
	FName StateName; // 0x0
	TArray<FBakedStateExitTransition> Transitions; // 0x10
	int32_t StateRootNodeIndex; // 0x20
	int32_t StartNotify; // 0x24
	int32_t EndNotify; // 0x28
	int32_t FullyBlendedNotify; // 0x2c
	bool bIsAConduit; // 0x30
	int32_t EntryRuleNodeIndex; // 0x34
	TArray<int32_t> PlayerNodeIndices; // 0x38
	TArray<int32_t> LayerNodeIndices; // 0x48
	bool bAlwaysResetOnEntry; // 0x58
};

struct FQuadrantSpawnCategories {
	FName QuadrantSpawnTag; // 0x0
	TArray<FQuadrantSpawnItem> Items; // 0x10
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
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

struct FArmIKSensorDatum {
	FName ShoulderBoneName; // 0x0
};

struct FAccessNode {
	FString ID; // 0x0
	int32_t AccessCost; // 0x10
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FCustomizationTooltipViewData {
	FText DisplayName; // 0x0
	FText ParentName; // 0x18
	FText RarityPartInfo; // 0x30
	FText CollectionDisplayName; // 0x48
	FText Description; // 0x60
	FText RoleCategoryInfo; // 0x78
	bool IsLocked; // 0x90
	bool IsUnbreakable; // 0x91
	bool IsEquipped; // 0x92
	bool IsOwned; // 0x93
	EPlayerRole AssociatedRole; // 0x94
	EItemRarity Rarity; // 0x95
	TArray<FPriceViewData> Prices; // 0x98
	bool IsEnabled; // 0xa8
	FText CustomizationDisabledMessage; // 0xb0
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x14
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

struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2
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

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0x10
};

struct FRepRootMotionMontage {
	bool bIsActive; // 0x0
	UAnimMontage* AnimMontage; // 0x8
	float Position; // 0x10
	FVector_NetQuantize100 Location; // 0x14
	FRotator Rotation; // 0x20
	UPrimitiveComponent* MovementBase; // 0x30
	FName MovementBaseBoneName; // 0x38
	bool bRelativePosition; // 0x44
	bool bRelativeRotation; // 0x45
	FRootMotionSourceGroup AuthoritativeRootMotion; // 0x48
	FVector_NetQuantize10 Acceleration; // 0x80
	FVector_NetQuantize10 LinearVelocity; // 0x8c
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x3c
	float TriggerTimeOffset; // 0x40
};

struct FGhostKillerAnalytics : FUniquelyIdentifiedAnalytic {
	FString MatchID; // 0x98
	int32_t Stalk; // 0xa8
	int32_t StalkStealth; // 0xac
	int32_t Stalk25; // 0xb0
	int32_t Stalk50; // 0xb4
	int32_t Stalk75; // 0xb8
	int32_t Stalk100; // 0xbc
	int32_t StalkLean25; // 0xc0
	int32_t StalkLean50; // 0xc4
	int32_t StalkLean75; // 0xc8
	int32_t StalkLean100; // 0xcc
	int32_t Lean; // 0xd0
	int32_t DownExposedSurvivor; // 0xd4
	float TimeInStealthMode; // 0xd8
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x10
};

struct FAssignedPerkPropertiesV7 {
	FName perkId; // 0x0
	int32_t PerkLevel; // 0xc
	bool IsTeachable; // 0x10
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0x10
	FName FunctionNameToBind; // 0x14
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FStatusEffectAlertViewData {
	FString StatusEffectName; // 0x0
	TSoftObjectPtr<UTexture2D> StatusEffectIcon; // 0x10
	EStatusEffectType StatusEffectType; // 0x40
	EHudStatusEffectAlertViewType SourceViewType; // 0x41
	FPerkViewData PerkViewData; // 0x48
	FItemViewData ItemViewData; // 0xb0
	FAddonViewData AddonViewData; // 0x140
};

struct FHintData : FDBDTableRowBase {
	EHintCategory Category; // 0x8
	FText Title; // 0x10
	FText Description; // 0x28
	FString IconPath; // 0x40
	int32_t levelMin; // 0x50
	int32_t levelMax; // 0x54
	int32_t relevantCharacterID; // 0x58
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x10
};

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xd0
	FBoneSocketTarget LookAtTarget; // 0xf0
	FVector LookAtLocation; // 0x160
	FAxis LookAt_Axis; // 0x16c
	bool bUseLookUpAxis; // 0x17c
	EInterpolationBlend InterpolationType; // 0x17d
	FAxis LookUp_Axis; // 0x180
	float LookAtClamp; // 0x190
	float InterpolationTime; // 0x194
	float InterpolationTriggerThreashold; // 0x198
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FOfferingData {
	bool OfferingReady; // 0x0
	TArray<FSelectedOffering> offerings; // 0x8
};

struct FASColorTransform {
	FLinearColor Multiply; // 0x0
	FLinearColor Add; // 0x10
};

struct FStatusEffectViewData {
	FName ID; // 0x0
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x10
	EStatusEffectType StatusEffectType; // 0x40
	int32_t Level; // 0x44
	float Percentage; // 0x48
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FDBDTimer {
	float _startTime; // 0x8
	bool _startTimeDirty; // 0xc
	FFloat_NetQuantize8 _timeLeft; // 0x10
	bool _replicateTimeLeft; // 0x18
	float _interpSpeed; // 0x24
};

struct FSurvivorSleepiness {
	float _sleepiness; // 0x0
	float _sleepThreshold; // 0x4
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float ExplicitTime; // 0x38
	bool bShouldLoop; // 0x3c
	bool bTeleportToExplicitTime; // 0x3d
	ESequenceEvalReinit ReinitializationBehavior; // 0x3e
	float startPosition; // 0x40
};

struct FAnimData {
	ECharacterStance Stance; // 0x0
};

struct FBaseItemData : FDBDTableRowBase {
	FName ID; // 0x8
	EInventoryItemType Type; // 0x14
	FItemUIData UIData; // 0x18
	FText GenericDisplayName; // 0xd8
	TSoftClassPtr<UObject> ItemBlueprint; // 0xf0
	TSoftObjectPtr<UDBDPrimaryDataAsset> AssetData; // 0x120
};

struct FDBDPerPlatformInt {
	FPerPlatformInt value; // 0x0
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

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
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

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FOrderDoneMessage {
	int32_t Code; // 0x0
	FString OrderId; // 0x8
	FString OrderChannel; // 0x18
};

struct FOfferingEffect {
	EOfferingEffectType Type; // 0x0
	TArray<FName> Tags; // 0x8
	FName value; // 0x18
	float Modifier; // 0x24
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FPostGame_SurvivorAnalytics : FPostGameAnalyticsBase {
	int32_t Objectives; // 0xe0
	int32_t Survival; // 0xe4
	int32_t Altruism; // 0xe8
	int32_t Boldness; // 0xec
	FString Outcome; // 0xf0
	ECamperDamageState damageState; // 0x100
	int32_t HookedCount; // 0x104
	bool UsedController; // 0x108
	bool UsedKeyboard; // 0x109
};

struct FNiagaraEmitterCompiledData {
	TArray<FName> SpawnAttributes; // 0x0
	FNiagaraVariable EmitterSpawnIntervalVar; // 0x10
	FNiagaraVariable EmitterInterpSpawnStartDTVar; // 0x40
	FNiagaraVariable EmitterSpawnGroupVar; // 0x70
	FNiagaraVariable EmitterAgeVar; // 0xa0
	FNiagaraVariable EmitterRandomSeedVar; // 0xd0
	FNiagaraVariable EmitterTotalSpawnedParticlesVar; // 0x100
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x130
};

struct FMatchmakingLobbyAnalytics : FMatchmakingAnalytics {
	FString LobbyStartTime; // 0xc8
	FString LobbyEndTime; // 0xd8
	FString LobbyResult; // 0xe8
	FString KrakenMatchId; // 0xf8
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceId; // 0x28
	FString InstanceName; // 0x38
	FString PlatformName; // 0x48
	FGuid SESSIONID; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88
};

struct FAtlantaTutorialNotificationData : FTutorialNotificationData {
	TArray<TSoftObjectPtr<UPaperSprite>> Textures; // 0xb0
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText definition; // 0x30
	UNiagaraDataInterface* DataInterface; // 0x48
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FMaterialInstanceBasePropertyOverrides {
	char bOverride_OpacityMaskClipValue : 1; // 0x0
	char bOverride_BlendMode : 1; // 0x0
	char bOverride_ShadingModel : 1; // 0x0
	char bOverride_DitheredLODTransition : 1; // 0x0
	char bOverride_CastMaskedMaterialShadow : 1; // 0x0
	char bOverride_CastDynamicShadowAsMasked : 1; // 0x0
	char bOverride_TwoSided : 1; // 0x0
	char TwoSided : 1; // 0x0
	char DitheredLODTransition : 1; // 0x1
	char CastMaskedMaterialShadow : 1; // 0x1
	char bCastDynamicShadowAsMasked : 1; // 0x1
	EBlendMode BlendMode; // 0x2
	EMaterialShadingModel ShadingModel; // 0x3
	float OpacityMaskClipValue; // 0x4
};

struct FPlayerStatusAssets {
	EPlayerStatusBloodSplatterType BloodSplatterType; // 0x0
	UTexture2D* BloodTexture; // 0x8
	UTexture2D* IconTexture; // 0x10
};

struct FAtlantaRitualUIData {
	int32_t ID; // 0x0
	EAltantaRitualUIType Type; // 0x4
	FString Title; // 0x8
	FString Description; // 0x18
	FString IconFilePath; // 0x28
	bool IsNew; // 0x38
	bool isClaimed; // 0x39
	float ProgressPercentage; // 0x3c
	int32_t RefreshPrice; // 0x40
	TArray<FAtlantaRitualRewardUIData> Rewards; // 0x48
	TArray<FAtlantaSubRitualUIData> SubRituals; // 0x58
};

struct FConstraintInstance {
	FName JointName; // 0x18
	FName ConstraintBone1; // 0x24
	FName ConstraintBone2; // 0x30
	FVector Pos1; // 0x3c
	FVector PriAxis1; // 0x48
	FVector SecAxis1; // 0x54
	FVector Pos2; // 0x60
	FVector PriAxis2; // 0x6c
	FVector SecAxis2; // 0x78
	FRotator AngularRotationOffset; // 0x84
	char bScaleLinearLimits : 1; // 0x90
	FConstraintProfileProperties ProfileInstance; // 0x98
};

struct FRarityPerWebDistribution {
	int32_t Weight; // 0x0
	int32_t MinCount; // 0x4
	int32_t MaxCount; // 0x8
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FKeyDisplayInfo {
	FKey Key; // 0x0
	FString KeyDisplayName; // 0x20
	FString PromptType; // 0x30
};

struct FCustomizationRewardViewData : FRewardViewData {
	UTexture2D* IconTexture; // 0x8
	EItemRarity Rarity; // 0x10
	bool IsOwned; // 0x11
	bool IsEquipped; // 0x12
	bool IsUnbreakable; // 0x13
	FCustomizationTooltipViewData TooltipData; // 0x18
	bool IsEnabled; // 0xe0
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinition TypeDef; // 0x10
};

struct FPurchaseItemUIData {
	FName ItemId; // 0x8
	FText DisplayName; // 0x18
	int32_t Quantity; // 0x30
	FString IconPath; // 0x38
	EEventItemContentType ContentType; // 0x48
	EItemRarity Rarity; // 0x49
};

struct FASPerspectiveTransform {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x48
	char bAllowRoll : 1; // 0x54
};

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x14
	FRotator Rotation; // 0x20
	bool bServerHasBaseComponent; // 0x2c
	bool bRelativeRotation; // 0x2d
	bool bServerHasVelocity; // 0x2e
};

struct FSecondaryInteractionProperties {
	FString SecondaryInteractionID; // 0x0
	EInputInteractionType SecondaryInteractionInputType; // 0x10
	FText SecondaryInteractionDescriptionText; // 0x18
	bool ShouldShow; // 0x30
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x30
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

struct FItemAddonProperties : FItemData {
	TSoftClassPtr<UObject> ItemAddonBlueprint; // 0x1d0
	FParentItemIDs parentItem; // 0x200
	TArray<FName> PreLevelGenerationModifierID; // 0x218
};

struct FAIDamageEvent {
	float amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FLoadingTimeoutAnalytics : FUniquelyIdentifiedAnalytic {
	FString match_id; // 0x98
	FString lobby_id; // 0xa8
	FString timeout_timestamp; // 0xb8
	float total_load_time; // 0xc8
	FString current_map_name; // 0xd0
	FString transition_id; // 0xe0
};

struct FLightbornAuraRevealedAnalytics : FBasePerkAnalytics {
	FString RevealedSurvivorMirrorsId; // 0xb0
	FString FlashlightedSlasherMirrorsId; // 0xc0
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0xc
	int32_t TransitionIndex; // 0x10
};

struct FSpecialEventUIInfo {
	FString EventId; // 0x0
	FString EventBannerFrameLabel; // 0x10
	FText EventName; // 0x20
	bool IsPastEvent; // 0x38
	FString BloodwebCollectSoundEvent; // 0x40
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0xc
};

struct FExposedValueCopyRecord {
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0xc
	int32_t SourceArrayIndex; // 0x18
	bool bInstanceIsTarget; // 0x1c
	EPostCopyOperation PostCopyOperation; // 0x1d
	ECopyType CopyType; // 0x1e
	TFieldPath<FProperty> DestProperty; // 0x20
	int32_t DestArrayIndex; // 0x40
	int32_t Size; // 0x44
	TFieldPath<FProperty> CachedSourceProperty; // 0x48
	TFieldPath<FProperty> CachedSourceStructSubProperty; // 0x68
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FGameplayNotificationData {
	FName SourceId; // 0x0
	EInventoryItemType SourceType; // 0xc
	int32_t SourceIconIndex; // 0x10
	int32_t SourceLevel; // 0x14
	FName EffectId; // 0x18
	FString EffectIconFilePath; // 0x28
	EStatusEffectType EffectType; // 0x38
	FText EffectDisplayName; // 0x40
};

struct FActorPairQuery {
	TMap<uint32_t, FDistanceTrackerCase> _distanceTrackerCases; // 0x10
	uint32_t _caseIndex; // 0x60
	bool _usePlanarDistance; // 0x64
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FEditPivotTarget {
	UTransformProxy* TransformProxy; // 0x0
	UTransformGizmo* TransformGizmo; // 0x8
};

struct FOutfitDropdown : FCharacterDropdown {
	FName OutfitId; // 0x8
};

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
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
	bool bIsHidden; // 0xbc
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString value; // 0x8
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x10
	FString FilterString; // 0x20
	FPrimaryAssetRules Rules; // 0x30
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FHtmlTagConvertRow : FTableRowBase {
	FString HtmlTag; // 0x8
	FString RichTextTag; // 0x18
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	float CrushedBits; // 0x4
};

struct FCustomizationItemData : FCustomizationData {
	ECustomizationCategory Category; // 0x120
	TSoftObjectPtr<USkeletalMesh> ItemMesh; // 0x128
	TSoftClassPtr<UObject> AnimClass; // 0x158
	TSoftClassPtr<UObject> ItemBlueprint; // 0x188
	TArray<FMaterialReplacerData> MaterialsMap; // 0x1b8
	FConditionalMaterialReplacer ConditionalMaterialReplacer; // 0x1c8
	TArray<FName> SkeletalComponentTags; // 0x228
	FText CollectionName; // 0x238
	FText CollectionDescription; // 0x250
	int32_t PrestigeUlockLevel; // 0x268
	FString PrestigeUnlockDate; // 0x270
	FName EventId; // 0x280
	ECharmCategory CharmCategory; // 0x28c
	TArray<FBPAttachementSocketData> SocketAttachements; // 0x290
	TArray<FUnlockSaveStatCondition> UnlockingConditions; // 0x2a0
	bool IsInStore; // 0x2b0
	bool IsInNonViolentBuild; // 0x2b1
	bool IsAvailableInAtlantaBuild; // 0x2b2
	uint32_t PlatformExclusiveFlag; // 0x2b4
	TArray<FCustomSoundFXData> CustomSFXs; // 0x2b8
	FCustomAnimData AnimationData; // 0x2c8
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x10
};

struct FTutorialObjective : FDBDTableRowBase {
	FText Description; // 0x8
	bool IsCompletionAnalyticEnabled; // 0x20
	EInteractionPromptType InteractionPromptType; // 0x21
	ETutorialObjectivePlayerActionMapping PlayerAction; // 0x22
	EInteractionPromptType SecondaryInteractionPromptType; // 0x23
	ETutorialObjectivePlayerActionMapping SecondaryPlayerAction; // 0x24
};

struct FChainsawHitWithPowerCharge : FChainsawEvent {
	int32_t NumPowerCharges; // 0x4
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FS3CommandAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t RequestContentLength; // 0x98
	FString ContentType; // 0xa0
	float ElapsedTime; // 0xb0
	FString Status; // 0xb8
	FString URL; // 0xc8
	FString Verb; // 0xd8
	int32_t ResponseContentLength; // 0xe8
	int32_t ResponseCode; // 0xec
	bool success; // 0xf0
};

struct FDetailedScoreAnalytics : FUniquelyIdentifiedAnalytic {
	FString ScorerMirrorsId; // 0x98
	FString TargetMirrorsId; // 0xa8
	FString MatchID; // 0xb8
	FName ScoreTypeId; // 0xc8
	int32_t ScoreExperience; // 0xd4
	float ElapsedMatchTime; // 0xd8
	float InstigatorCoordinateX; // 0xdc
	float InstigatorCoordinateY; // 0xe0
	float InstigatorCoordinateZ; // 0xe4
	float TargetCoordinateX; // 0xe8
	float TargetCoordinateY; // 0xec
	float TargetCoordinateZ; // 0xf0
};

struct FTinkererUndetectableInterruptAnalytics : FBasePerkAnalytics {
	FString InterruptedSurvivorMirrorsId; // 0xb0
	FString InterruptingSlasherMirrorsId; // 0xc0
};

struct FDBDTableRowBaseWithId : FDBDTableRowBase {
	FName ID; // 0x8
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0xc
};

struct FBuyTipsMessage {
	int32_t Result; // 0x0
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
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

struct FNamedFloat {
	float value; // 0x0
	FName Name; // 0x4
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FCustomTransformation {
	bool UseCustomTransformation; // 0x0
	FVector2D CustomScale; // 0x4
	FVector2D CustomTranslation; // 0xc
};

struct FBHVRPerDetailModeFloat {
	TMap<FName, float> PerDetailModeValue; // 0x0
	TMap<FName, bool> PerDetailModeOverride; // 0x50
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char defaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FTallyPlayerResultData {
	FName CharacterIconPath; // 0x0
	FString playerID; // 0x10
	FString PlatformAccountId; // 0x20
	FString MirrorsId; // 0x30
	FString playerName; // 0x40
	int32_t PlayerScore; // 0x50
	int32_t PlayerRank; // 0x54
	EGameState PlayerStatus; // 0x58
	FInventorySlotData OfferingData; // 0x60
	TArray<FInventorySlotData> PerksData; // 0x158
	FInventorySlotData ItemData; // 0x168
	TArray<FInventorySlotData> AddonsData; // 0x260
	bool IsReported; // 0x270
	bool IsSlasher; // 0x271
	bool IsMyScore; // 0x272
	bool IsOffNetwork; // 0x273
	bool ShowPortraitBorder; // 0x274
	bool IsABot; // 0x275
};

struct FOnboardingAnalytics : FUniquelyIdentifiedAnalytic {
	int32_t tabIndex; // 0x98
	int32_t GameManualIndex; // 0x9c
	FString EventTimestamp; // 0xa0
};

struct FOnboardingBotMatchDefinition : FDBDTableRowBaseWithId {
	FText DisplayName; // 0x18
	FText Description; // 0x30
	FName DefaultMapId; // 0x48
	int32_t DefaultSurvivorId; // 0x54
	int32_t DefaultKillerId; // 0x58
	TArray<int32_t> DefaultBotsId; // 0x60
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FASValue {
	EASType ASType; // 0x0
	bool ASBoolean; // 0x1
	int32_t ASInt; // 0x4
	float ASNumber; // 0x8
	FString ASString; // 0x10
	UGFxObject* ASObject; // 0x30
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t value; // 0x0
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x20
};

struct FArchiveVignetteEntryAnalytics : FUniquelyIdentifiedAnalytic {
	FString ArchiveId; // 0x98
	FString VignetteId; // 0xa8
	int32_t EntryId; // 0xb8
	FString SelectEntryTimestamp; // 0xc0
	double EntryTimeSpent; // 0xd0
	bool IsTaggedAsNew; // 0xd8
	bool HasVoiceOver; // 0xd9
	bool StartWithAutoplayEnable; // 0xda
	bool IsAutoplayEnableWhenDeselectingEntry; // 0xdb
	FString StartVoiceoverTimestamp; // 0xe0
	double VoiceoverLongestTimeSpent; // 0xf0
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
	char PositionSolverIterationCount; // 0x28
	char VelocitySolverIterationCount; // 0x29
	FCollisionResponse CollisionResponses; // 0x30
	float MaxDepenetrationVelocity; // 0x60
	float MassInKgOverride; // 0x64
	float LinearDamping; // 0x70
	float AngularDamping; // 0x74
	FVector CustomDOFPlaneNormal; // 0x78
	FVector COMNudge; // 0x84
	float MassScale; // 0x90
	FVector InertiaTensorScale; // 0x94
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xb0
	UPhysicalMaterial* PhysMaterialOverride; // 0xc0
	float MaxAngularVelocity; // 0xc8
	float CustomSleepThresholdMultiplier; // 0xcc
	float StabilizationThresholdMultiplier; // 0xd0
	float PhysicsBlendWeight; // 0xd4
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

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x18
	int32_t FontPage; // 0x20
	FGuid ExpressionGUID; // 0x24
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FDeviceProfiles : FDBDTableRowBase {
	FText Cpu; // 0x8
	FText GPU; // 0x20
	int32_t Quality; // 0x38
};

struct FEscapeStrategyProperty {
	EscapeStrategyType Type; // 0x0
	UCurveFloat* Population; // 0x8
	float Weight; // 0x10
};

struct FAtlantaDeepLinkData : FDBDTableRowBase {
	FString URL; // 0x8
	EDeepLinkUid DeepLink; // 0x18
	bool HasCustomParameters; // 0x19
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FProceduralMap : FDBDTableRowBase {
	FName MapId; // 0x8
	FText Name; // 0x18
	FText ThemeName; // 0x30
	FText Description; // 0x48
	float HookMinDistance; // 0x60
	int32_t HookMinCount; // 0x64
	int32_t HookMaxCount; // 0x68
	float BookShelvesMinDistance; // 0x6c
	int32_t BookShelvesMinCount; // 0x70
	int32_t BookShelvesMaxCount; // 0x74
	int32_t LivingWorldObjectsMinCount; // 0x78
	int32_t LivingWorldObjectsMaxCount; // 0x7c
	FString ThumbnailPath; // 0x80
	int32_t SortingIndex; // 0x90
	FString DlcIDString; // 0x98
	TArray<int32_t> FixedLayoutSeed; // 0xa8
	bool IsInNonViolentBuild; // 0xb8
};

struct FTutorialNotificationData : FDBDTableRowBase {
	FText Title; // 0x8
	FText Description; // 0x20
	FString IconPath; // 0x38
	TSoftObjectPtr<UTexture2D> Icon; // 0x48
	TSoftObjectPtr<UTexture2D> Image; // 0x78
	bool IsShowAnalyticEnabled; // 0xa8
};

struct FAnimNode_RigidBody_Chaos : FAnimNode_SkeletalControlBase {
	UPhysicsAsset* OverridePhysicsAsset; // 0xd0
	FVector OverrideWorldGravity; // 0xd8
	FVector ExternalForce; // 0xe4
	FVector ComponentLinearAccScale; // 0xf0
	FVector ComponentLinearVelScale; // 0xfc
	FVector ComponentAppliedLinearAccClamp; // 0x108
	float CachedBoundsScale; // 0x114
	FBoneReference BaseBoneRef; // 0x118
	ECollisionChannel OverlapChannel; // 0x12c
	ESimulationSpace SimulationSpace; // 0x12d
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x12e
	char bEnableWorldGeometry : 1; // 0x12f
	char bOverrideWorldGravity : 1; // 0x12f
	char bTransferBoneVelocities : 1; // 0x12f
	char bFreezeIncomingPoseOnStart : 1; // 0x12f
	char bClampLinearTranslationLimitToRefPose : 1; // 0x12f
	FSolverIterations OverrideSolverIterations; // 0x130
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FCampaignStatus {
	bool IsValid; // 0x0
	FDateTime StartDate; // 0x8
	FDateTime EndDate; // 0x10
};

struct FEquippedPlayerCustomization {
	TArray<FName> _customizationItemIds; // 0x0
	TArray<FCharmIdSlot> _customizationCharms; // 0x10
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

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FSoundModulation {
	TArray<USoundModulationPluginSourceSettingsBase*> Settings; // 0x0
};

struct FExecExecutedAnalytics : FUniquelyIdentifiedAnalytic {
	FString Location; // 0x98
	FString NetMode; // 0xa8
	FString Requester; // 0xb8
	FString Command; // 0xc8
	bool Executed; // 0xd8
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x28
	FFrameNumber EndFrameOffset; // 0x2c
	float PlayRate; // 0x30
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
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

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FGameEventBloodOrbDropParams {
	FGameplayTag GameEvent; // 0x0
	float ImpulseFactor; // 0xc
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FLoadOutAnalytics : FLoadoutBaseAnalytics {
	FString MatchID; // 0x120
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0xc
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x14
	FGuid ExpressionGUID; // 0x18
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

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FNiagaraDataSetCompiledData {
	TArray<FNiagaraVariable> Variables; // 0x0
	TArray<FNiagaraVariableLayoutInfo> VariableLayouts; // 0x10
	uint32_t TotalFloatComponents; // 0x20
	uint32_t TotalInt32Components; // 0x24
	char bRequiresPersistentIDs : 1; // 0x28
	FNiagaraDataSetID ID; // 0x2c
	ENiagaraSimTarget SimTarget; // 0x3c
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x868
	FSlateBrush UpArrowImage; // 0x8c0
	FSlateBrush DownArrowImage; // 0x950
	FSlateBrush GlassImage; // 0x9e0
	FSlateBrush ClearImage; // 0xa70
	FMargin ImagePadding; // 0xb00
	bool bLeftAlignButtons; // 0xb10
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x1c
	FName LinearColorPropertyName; // 0x28
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x10
	FName FunctionName; // 0x20
	FName NotifyFunctionName; // 0x2c
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x10
};

struct FPigStatusData {
	EReverseBearTrapUIState ReverseBearTrapState; // 0x0
	float TimerProgress; // 0x4
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

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector collisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FLightingSpecifics {
	TSoftClassPtr<UObject> LightBlueprint; // 0x0
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FTricksterStatusData {
	float CurrentLacerationLevel; // 0x0
	float MaximumLacerationLevel; // 0x4
	bool IsDangerousLacerationLevel; // 0x8
	bool WasRecentlyDamagedByLaceration; // 0x9
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x38
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

struct FMontagePlaybackDefinition {
	FAnimationMontageDescriptor Descriptor; // 0x0
	float PlayRate; // 0x20
	bool Follower; // 0x24
};

struct FSavedStatsDataV7 {
	FName Name; // 0x0
	float value; // 0xc
};

struct FCharacterItemCategoryViewSetting {
	FName label; // 0x0
	FRoleItemCategoryDropdown CharacterDropdown; // 0xc
	FScreenshotViewSetting Settings; // 0x18
};

struct FExplorableTileInfo {
	FGuid ID; // 0x0
	FBox Bounds; // 0x10
};

struct FSpecialEventObjectiveData {
	FName ObjectiveId; // 0x0
	FText Title; // 0x10
	FText Description; // 0x28
	FString IconPath; // 0x40
	FString ObjectiveFrameLabel; // 0x50
	FText CompletedTitle; // 0x60
	FText CompletedDescription; // 0x78
	FName RewardId; // 0x90
	FString LockedRewardGenericIconPath; // 0xa0
	FString UnlockedRewardGenericIconPath; // 0xb0
	EPlayerRole PlayerRole; // 0xc0
	FString StatName; // 0xc8
	uint32_t Sections; // 0xd8
	uint32_t MaxValue; // 0xdc
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
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

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
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

struct FPendingTutorialData {
	int32_t buttonIndex; // 0x0
	FOnboardingTutorialButtonViewData buttonViewData; // 0x8
};

