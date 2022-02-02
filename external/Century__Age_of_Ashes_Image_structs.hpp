// Created by BlueFire1337
// Updated 2022-01-27
// Generated 2022-02-02

#pragma once

struct FCTPinableData {
	FIntPoint SlotPosition; // 0x0
	FIntPoint SlotSize; // 0x8
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FGroupsInviteToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingApplication; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
	UPlayFabJsonObject* Group; // 0x20
	FString RoleId; // 0x28
};

struct FNiagaraBakerTextureSource {
	FName SourceName; // 0x0
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

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FClientExecuteCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x29
	int32_t SpecificRevision; // 0x2c
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FClientConfirmPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
	FString OrderId; // 0x18
	FString PurchaseDate; // 0x28
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

struct FCTPlayerReward {
	FString PackUID; // 0x0
	ECTChestType ChestType; // 0x10
	uint32_t ChestDateEpoch; // 0x14
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
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

struct FPWCollectionItem {
	int32_t Date; // 0x0
	EPWCollectionSource Source; // 0x4
	FString Location; // 0x8
	int32_t Season; // 0x18
};

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
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

struct FCTMapPointWidgetClasses {
	TMap<ECTUIButtonState, UCTCollectionMapPointStateWidget*> WidgetClasses; // 0x0
};

struct FCTTimeLine {
	FString Name; // 0x0
	bool Loop; // 0x10
	ETimelineLengthMode LengthMode; // 0x11
	TArray<UCurveBase*> TimelineCurveArray; // 0x18
	UTimelineComponent* TimelineComp; // 0x28
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FMultiplayerBuildAliasDetailsResponse : FPlayFabResultCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FClientRestoreIOSPurchasesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReceiptData; // 0x20
};

struct FAdminLookupUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FPWPlayerInventory {
	int32_t Date; // 0x0
	int32_t SC; // 0x4
	int32_t HC; // 0x8
	TArray<FString> Items; // 0x10
	TArray<FPWPlayerResource> Resources; // 0x20
	TArray<FPWActivatedBooster> Activated; // 0x30
	TArray<FPWPlayerRewardChest> Chests; // 0x40
	TArray<FPWPlayerEgg> Eggs; // 0x50
	TArray<FPWPlayerGift> Gifts; // 0x60
	TArray<FString> UnCheck; // 0x70
	TArray<FPWPlayerDLC> DLC; // 0x80
};

struct FTextureCustomizationStampData {
	UTexture* Texture; // 0x0
};

struct FDataInitiateFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> UploadDetails; // 0x18
};

struct FPWMatchTeamResult {
	int32_t Win; // 0x0
	TArray<FPWMatchTeamMemberResult> Members; // 0x8
};

struct FTOPWorkResultObject {
	FString Name; // 0x8
	FString FilePath; // 0x18
	EPDGWorkResultState State; // 0x28
	int32_t WorkItemResultInfoIndex; // 0x2c
	TArray<UHoudiniOutput*> ResultOutputs; // 0x30
	bool bAutoBakedSinceLastLoad; // 0x40
	TArray<UObject*> OutputObjectsToDelete; // 0x48
	FOutputActorOwner OutputActorOwner; // 0x58
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
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

struct FRTCInfos {
	AActor* RTCActor; // 0x0
	TArray<UCTLevelSequence*> Sequences; // 0x8
	int32_t CurrentSequenceId; // 0x18
	UCTLevelSequenceInstance* SequenceInstance; // 0x20
};

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FMatchmakerUserInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MinCatalogVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FServerGetPlayerStatisticsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FPWCloudLinkOptions {
	FString CenturyId; // 0x0
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FAdminGetServerBuildUploadURLResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FClientGameServerRegionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Regions; // 0x8
};

struct FServerSavePushNotificationTemplateResult : FPlayFabResultCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FServerAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FServerSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FNiagaraOutlinerTimingData {
	float GameThread; // 0x0
	float RenderThread; // 0x4
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

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
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

struct FClientLoginWithKongregateRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString KongregateId; // 0x40
	FString PlayerSecret; // 0x50
};

struct FClientLoginWithOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	FString IdToken; // 0x38
	UPlayFabJsonObject* InfoRequestParameters; // 0x48
	FString PlayerSecret; // 0x50
};

struct FClientLoginWithIOSDeviceIDRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString DeviceID; // 0x18
	FString DeviceModel; // 0x28
	FString EncryptedRequest; // 0x38
	UPlayFabJsonObject* InfoRequestParameters; // 0x48
	FString OS; // 0x50
	FString PlayerSecret; // 0x60
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
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

struct FClientGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	bool Result; // 0x28
};

struct FClientUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FGroupsApplyToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingInvite; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
	UPlayFabJsonObject* Group; // 0x20
};

struct FClientRegisterPlayFabUserRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DisplayName; // 0x10
	FString Email; // 0x20
	FString EncryptedRequest; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString Password; // 0x48
	FString PlayerSecret; // 0x58
	bool RequireBothUsernameAndEmail; // 0x68
	FString Username; // 0x70
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
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

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
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

struct FAdminDeleteTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FProfilesSetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Permissions; // 0x10
};

struct FServerGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FMyAutoReimportWildcard {
	FString Wildcard; // 0x0
	bool bInclude; // 0x10
};

struct FCTNemesisTextArgument {
	int32_t PlayerId; // 0x0
	FString ArgumentString; // 0x8
};

struct FAdminGetServerBuildInfoRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FServerGetLeaderboardAroundUserRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MaxResultsCount; // 0x10
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* ProfileConstraints; // 0x28
	FString StatisticName; // 0x30
	bool UseSpecificVersion; // 0x40
	int32_t Version; // 0x44
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

struct FMultiplayerGetMultiplayerServerDetailsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString SessionId; // 0x30
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FClientRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FInsightsInsightsSetStorageRetentionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t RetentionDays; // 0x10
};

struct FCTUIShakePulse {
	float PulseAmplitude; // 0x0
	float PulsePeriod; // 0x4
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

struct FCTGamepadMouseKeyIconID {
	FName GamepadID; // 0x0
	FName MouseID; // 0x8
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FPWBaseOrder {
	FString OrderId; // 0x0
	FString PackId; // 0x10
};

struct FCTEventGaugeSlotData {
	TMap<ECTLiveEventProgressPosition, FCTEventGaugeSlotTransforms> GaugeSlotTransforms; // 0x0
	bool bFlipStartBrush; // 0x50
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FCTImportedPackage : FTableRowBase {
	TArray<FString> ItemsUID; // 0x8
	TArray<int32_t> ItemsQuantity; // 0x18
	ECTPackageType Type; // 0x28
	float GoldPrice; // 0x2c
	float GemsPrice; // 0x30
	int32_t EurosPrice; // 0x34
	ECTShopSection Section; // 0x38
	ECTRewardedAchievement Achievement; // 0x39
	EPWRarity Rarity; // 0x3a
	ECTRewardReveal Reveal; // 0x3b
	int32_t MinLevel; // 0x3c
	int32_t MaxLevel; // 0x40
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FCTHighlightTargetData {
	UCTWidgetsHighlightingAsset* WidgetsHighlightingAsset; // 0x0
	UCTTutorialHighlightWidget* HighlightWidget; // 0x8
};

struct FMultiplayerGetAssetDownloadUrlRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Filename; // 0x10
};

struct FMapsDatas {
	EMapType MapEnum; // 0x0
	EMapEnvironment MapEnvironment; // 0x1
	FText DisplayName; // 0x8
	ECTMatchType GameModeEnum; // 0x20
	FText GameModeDisplayName; // 0x28
	FString IdString; // 0x40
	FString ImageIdString; // 0x50
	int32_t TeamsNum; // 0x60
	int32_t PlayersPerTeamNum; // 0x64
	bool bIsOffline; // 0x68
	bool bIsMatchMake; // 0x69
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FPWBaseLiveEvent {
	FString ID; // 0x0
	FString Type; // 0x10
	int32_t Start; // 0x20
	int32_t End; // 0x24
	FString TextID; // 0x28
	FString SubType; // 0x38
	int32_t Ratio; // 0x48
	TArray<FPWPReawrdStep> Steps; // 0x50
	int32_t CurStep; // 0x60
	int32_t CurVal; // 0x64
	FString RewardId; // 0x68
	FString GameMode; // 0x78
	TArray<FString> QList; // 0x88
	int32_t Goal; // 0x98
	int32_t Count; // 0x9c
	int32_t MyCount; // 0xa0
	TArray<FPWCommunityStats> Stats; // 0xa8
};

struct FAdminExportMasterPlayerDataResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
};

struct FCTRoleDiscordItem : FCTItemBase {
	FSlateBrush HoverButton; // 0xd0
	FSlateBrush DefaultButton; // 0x158
	FSlateBrush PressedButton; // 0x1e0
};

struct FCTMaterialItem : FCTItemBase {
	TSoftObjectPtr<UTexture2D> pTexture; // 0xd0
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FCTMotionBlurToggler {
	bool bMotionBlurEnabled; // 0x0
	int32_t FrameCountFromSwitchOff; // 0x4
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FCTCrossFriends : FCTPlayerBasicInfos {
	bool IsPlayfabFriend; // 0x58
	bool IsPlatformFriend; // 0x59
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FPWPlayerAllDataSave {
	FPWPlayerSetup Setup; // 0x0
	TArray<FString> UnCheck; // 0x68
	TArray<FString> PendingEvents; // 0x78
	FPWNewsState News; // 0x88
	FPWCloudOptions Options; // 0xa0
};

struct FClientCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FMultiplayerCreateBuildWithProcessBasedServerResponse : FPlayFabResultCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildId; // 0x10
	FString BuildName; // 0x20
	EContainerFlavor ContainerFlavor; // 0x30
	FString CreationTime; // 0x38
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x48
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x58
	FString GameWorkingDirectory; // 0x68
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x78
	bool IsOSPreview; // 0x80
	UPlayFabJsonObject* MetaData; // 0x88
	int32_t MultiplayerServerCountPerVm; // 0x90
	FString OsPlatform; // 0x98
	TArray<UPlayFabJsonObject*> Ports; // 0xa8
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0xb8
	FString ServerType; // 0xc8
	FString StartMultiplayerServerCommand; // 0xd8
	bool UseStreamingForAssetDownloads; // 0xe8
	EAzureVmSize VmSize; // 0xe9
};

struct FAdminGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
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

struct FCTMapDescriptorDTO {
	uint32_t MapId; // 0x0
	FString MapName; // 0x8
};

struct FGroupsListGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
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

struct FFortressTeam {
	int32_t TeamScore; // 0x0
	FColor TeamColor; // 0x4
	TArray<FFortressPlayer> Players; // 0x8
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FMovieSceneEvaluationHookComponent {
	TScriptInterface<IMovieSceneEvaluationHook> Interface; // 0x0
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
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

struct FMultiplayerListBuildAliasesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildAliases; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FGroupsAddMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RoleId; // 0x28
};

struct FMultiplayerGetMatchmakingTicketResult : FPlayFabResultCommon {
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Creator; // 0x28
	int32_t GiveUpAfterSeconds; // 0x30
	FString MatchID; // 0x38
	TArray<UPlayFabJsonObject*> Members; // 0x48
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x58
	FString QueueName; // 0x68
	FString Status; // 0x78
	FString TicketId; // 0x88
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FCTPlayerDTO {
	int32_t PlayerId; // 0x0
	FString BackendId; // 0x8
	FString Name; // 0x18
	EPlayerStatus Status; // 0x28
	bool IsReady; // 0x29
};

struct FAdminGetTaskInstanceRequest : FPlayFabRequestCommon {
	FString TaskInstanceId; // 0x8
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FLiveLinkTransformControllerData {
	bool bWorldTransform; // 0x0
	bool bUseLocation; // 0x1
	bool bUseRotation; // 0x2
	bool bUseScale; // 0x3
	bool bSweep; // 0x4
	bool bTeleport; // 0x5
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FCTDistinctionReward {
	float Probability; // 0x0
	FCTRewardData Reward; // 0x8
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

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
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

struct FGroupsRemoveGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FCTClassHouseData {
	UMaterialInterface* ClassHouseMaterial; // 0x8
};

struct FClientLoginWithPSNRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	int32_t IssuerId; // 0x40
	FString PlayerSecret; // 0x48
	FString RedirectUri; // 0x58
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FServerGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	int32_t MaxResultsCount; // 0x14
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* ProfileConstraints; // 0x28
	int32_t StartPosition; // 0x30
	FString StatisticName; // 0x38
	bool UseSpecificVersion; // 0x48
	int32_t Version; // 0x4c
	FString XboxToken; // 0x50
};

struct FServerGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
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

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FServerServerLoginResult : FPlayFabLoginResultCommon {
	UPlayFabJsonObject* EntityToken; // 0x10
	UPlayFabJsonObject* InfoResultPayload; // 0x18
	FString LastLoginTime; // 0x20
	bool NewlyCreated; // 0x30
	FString PlayFabId; // 0x38
	FString SessionTicket; // 0x48
	UPlayFabJsonObject* SettingsForUser; // 0x58
	UPlayFabJsonObject* TreatmentAssignment; // 0x60
};

struct FMultiplayerListAssetSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FClientGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FAdminDeleteOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
};

struct FProfilesGetEntityProfileResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Profile; // 0x8
};

struct FNiagaraDebuggerConnectionClosed {
	FGuid SessionId; // 0x0
	FGuid InstanceId; // 0x10
};

struct FClientRegisterPlayFabUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* EntityToken; // 0x8
	FString PlayFabId; // 0x10
	FString SessionTicket; // 0x20
	UPlayFabJsonObject* SettingsForUser; // 0x30
	FString Username; // 0x38
};

struct FClientWriteClientPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
};

struct FAdminUpdatePolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FServerUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FCTConnectInfos {
	float DisplaySecurity; // 0x0
	FString Name; // 0x8
	double LastUse; // 0x18
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FClothCollisionPrim_Convex {
	TArray<FClothCollisionPrim_ConvexFace> Faces; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
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

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
	UPlayFabJsonObject* PlayerProfile; // 0x20
	UPlayFabJsonObject* PlayStreamEventEnvelope; // 0x28
};

struct FHoudiniBakedOutputObject {
	FString Actor; // 0x0
	FString Blueprint; // 0x10
	FName ActorBakeName; // 0x20
	FString BakedObject; // 0x28
	FString BakedComponent; // 0x38
	TArray<FString> InstancedActors; // 0x48
	TArray<FString> InstancedComponents; // 0x58
	TMap<FName, FString> LandscapeLayers; // 0x68
};

struct FCTRescuedPlayerInfo {
	int32_t CTPlayerId; // 0x0
	bool bPendingRescue; // 0x4
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FServerAwardSteamAchievementResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AchievementResults; // 0x8
};

struct FClientGetPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
};

struct FPWCommunityStats {
	int32_t Date; // 0x0
	int32_t Val; // 0x4
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FPWPlayerGift {
	FString ID; // 0x0
	FString Key; // 0x10
	FString Pack; // 0x20
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FMultiplayerGetTitleMultiplayerServersQuotaChangeRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString RequestId; // 0x10
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FMultiplayerRolloverContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FServerGetUserAccountInfoRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientLinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FLockTarget {
	AActor* TargetActor; // 0x0
	float LockRatio; // 0x8
	float LastSeenTime; // 0xc
	int32_t PotentialTargetId; // 0x10
	bool bJustLocked; // 0x14
};

struct FMeshComponentMaterials {
	UMeshComponent* Mesh; // 0x0
	TArray<UMaterialInterface*> Materials; // 0x8
};

struct FServerGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FAdminGetDataReportResult : FPlayFabResultCommon {
	FString DownloadUrl; // 0x8
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FServerSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FDodgeData {
	float DodgeDuration; // 0x0
	float MaxTapDuration; // 0x4
	UCurveFloat* StraffFromTimeProportion; // 0x8
	USoundBase* LocalPlayerFeedbackSound; // 0x10
};

struct FFortressPlayer {
	FString PlayerName; // 0x0
	int32_t Score; // 0x10
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

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FStampData {
	FVector4 SourceRect; // 0x0
	FVector4 DestRect; // 0x10
	float Intensity; // 0x20
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
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

struct FMultiplayerCreateServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString QueueName; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x114
};

struct FBountyInfo {
	float Duration; // 0x0
	float Health; // 0x4
	float Energy; // 0x8
	float Shield; // 0xc
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FProfilesSetProfileLanguageResponse : FPlayFabResultCommon {
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
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

struct FAdminGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FNavEditBoxOptions {
	bool bIgnoreIfHoverOnOtherUI; // 0x0
	bool bHideHintTextWhenPressEditBox; // 0x1
	bool bBlockNavigationIfInEditMode; // 0x2
	TArray<EUINavigationAction> UnselectEditBoxWithNavAction; // 0x8
	TArray<FKey> UnselectEditBoxWithKeys; // 0x18
};

struct FCTServerCommandErrorDTO {
	FString Message; // 0x0
};

struct FLockParameters {
	float TimeToLock; // 0x0
	float MaxTimeToLock; // 0x4
	float RangeForMinLockTime; // 0x8
	float Range; // 0xc
	float MinDotProduct; // 0x10
	float MaxLockDistance; // 0x14
	float KeepLockDuration; // 0x18
	float BonusLockDuration; // 0x1c
	float KeepLockMinDotProduct; // 0x20
	bool bUseDotProductZScaler; // 0x24
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FAdminGetSegmentsResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
	TArray<UPlayFabJsonObject*> Segments; // 0x18
};

struct FCustomizationRoughness {
	float Contrast; // 0x0
	float Intensity; // 0x4
};

struct FGroupsListMembershipOpportunitiesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
	TArray<UPlayFabJsonObject*> Invitations; // 0x18
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Quotas; // 0x8
};

struct FServerGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FCTPckShopData {
	float GoldPrice; // 0x0
	float GemsPrice; // 0x4
	int32_t EurosPrice; // 0x8
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FMultiplayerCreateBuildWithManagedContainerResponse : FPlayFabResultCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildId; // 0x10
	FString BuildName; // 0x20
	EContainerFlavor ContainerFlavor; // 0x30
	FString CreationTime; // 0x38
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x48
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x58
	FString GameWorkingDirectory; // 0x68
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x78
	UPlayFabJsonObject* MetaData; // 0x80
	int32_t MultiplayerServerCountPerVm; // 0x88
	FString OsPlatform; // 0x90
	TArray<UPlayFabJsonObject*> Ports; // 0xa0
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0xb0
	FString ServerType; // 0xc0
	FString StartMultiplayerServerCommand; // 0xd0
	bool UseStreamingForAssetDownloads; // 0xe0
	EAzureVmSize VmSize; // 0xe1
};

struct FAdminUpdateCatalogItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
	FString CatalogVersion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	bool SetAsDefaultCatalog; // 0x30
};

struct FClientLinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString ServerAuthCode; // 0x18
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
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

struct FCTGenericMapping {
	ECameraInput Input; // 0x0
	ECameraOutput Output; // 0x1
	FCTFloatOffsetMapping Mapping; // 0x8
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FServerLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	int32_t IssuerId; // 0x24
	FString PlayFabId; // 0x28
	FString RedirectUri; // 0x38
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
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

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FAdminUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	FString PlayFabId; // 0x28
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
	bool bIsCustomInitialized; // 0x10
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FTierValueDisplayData {
	int32_t Tier; // 0x0
	TArray<FRankDisplayData> RankValues; // 0x8
};

struct FServerGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FCTResourceShopSection {
	ECTGemsShopSection Section; // 0x0
	FString TitleLocId; // 0x8
};

struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FClientGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FAdminGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t MaxBatchSize; // 0x20
	int32_t SecondsToLive; // 0x24
	FString SegmentId; // 0x28
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FAdminGetContentListRequest : FPlayFabRequestCommon {
	FString Prefix; // 0x8
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FCTDragonOverviewStateAdultData : FCTDragonOverviewStateBaseData {
	FString CameraTag; // 0x10
	FName PosingMeshTag; // 0x20
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
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

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x600
};

struct FAdminCreateSegmentResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
	FString SegmentId; // 0x18
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
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

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FAdminGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
	FString OverrideLabel; // 0x18
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FCTEggQuest {
	FString QuestID; // 0x0
	FString EggID; // 0x10
	int32_t iThresholdIndex; // 0x20
};

struct FServerUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString SharedGroupId; // 0x30
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FServerGetUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FServerRefreshGameServerInstanceHeartbeatRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FHoudiniBrushInfo {
	TWeakObjectPtr<ABrush> BrushActor; // 0x0
	FTransform CachedTransform; // 0x10
	FVector CachedOrigin; // 0x40
	FVector CachedExtent; // 0x4c
	EBrushType CachedBrushType; // 0x58
	uint64_t CachedSurfaceHash; // 0x60
};

struct FCTComSpawnerTypeContainer {
	TArray<UCTNetSpawnerBaseCom*> TabComSpawner; // 0x0
	int32_t NbInitialized; // 0x10
};

struct FCTMapsDTO {
	TArray<FCTMapDescriptorDTO> Maps; // 0x0
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

struct FAdminGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FCTPlayerRewards {
	TArray<FCTPlayerReward> Chests; // 0x0
};

struct FGeometryNotifierData {
	UWidget* GeometryOwner; // 0x0
};

struct FPersonalRanking {
	FString PlayerName; // 0x0
	int32_t Ranking; // 0x10
	TArray<FGameSave> Games; // 0x18
	FString PlayerId; // 0x28
};

struct FCTSocialPlayerAccount {
	FString PlayFabId; // 0x0
	FString Name; // 0x10
	FString IconID; // 0x20
	int32_t Rank; // 0x30
	FCTPlayerSetup Setup; // 0x38
	FPWPlayerStats Statistics; // 0xa8
	uint32_t LastRefreshEPOCH; // 0x150
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FExperimentationCreateExclusionGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	FString Name; // 0x20
};

struct FMultiplayerEnableMultiplayerServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FRadialBoxSettings {
	float StartingAngle; // 0x0
	bool bDistributeItemsEvenly; // 0x4
	float AngleBetweenItems; // 0x8
	float SectorCentralAngle; // 0xc
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
};

struct FBattleEventListener {
	FBattleEventDescriptor Infos; // 0x0
	FMulticastInlineDelegate EventDelegate; // 0x8
};

struct FGameModeDatas {
	ECTPlayMode PlayMode; // 0x0
	TArray<ECTMatchType> TabAvailableMatchType; // 0x8
};

struct FCTHealthBarColorSet {
	FLinearColor LifeColor; // 0x0
	FLinearColor ShieldColor; // 0x10
	FLinearColor BerserkShieldColor; // 0x20
	FLinearColor WindguardShieldColor; // 0x30
	FLinearColor DamageColor; // 0x40
	FLinearColor EmptyColor; // 0x50
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FNiagaraMeshRendererMeshProperties {
	UStaticMesh* Mesh; // 0x0
	FVector Scale; // 0x8
	FVector PivotOffset; // 0x14
	ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x20
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

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FAuthenticationGetEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityToken; // 0x10
	FString TokenExpiration; // 0x20
};

struct FMultiplayerListMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FCTHousesData {
	TSoftObjectPtr<UMaterialInterface> ClassHouseMaterial; // 0x0
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FCTColorSet {
	TArray<FColor> TeamColors; // 0x0
	TArray<FColor> TeamColorsEtheralFXVariant; // 0x10
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

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FGroupsUpdateGroupRequest : FPlayFabRequestCommon {
	FString AdminRoleId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t ExpectedProfileVersion; // 0x20
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
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

struct FFieldObjectCommands {
	TArray<FName> TargetNames; // 0x0
	TArray<UFieldNodeBase*> RootNodes; // 0x10
	TArray<UFieldSystemMetaData*> MetaDatas; // 0x20
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FClientUnlinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FClientSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FClientGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FServerUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FSlotInputStatus {
	float PressTimestamp; // 0x0
	bool bPressed; // 0x4
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FProviderPollResult {
	FString Name; // 0x10
	FString MachineName; // 0x20
	double MachineTimeOffset; // 0x30
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FCTCreditsRecord : FTableRowBase {
	FString Studio; // 0x8
	FString StudioLocID; // 0x18
	FString TeamNameLocID; // 0x28
	FString RoleGroupLocID; // 0x38
	FString RoleLocID; // 0x48
	FString Name; // 0x58
};

struct FHoudiniBakedOutput {
	TMap<FHoudiniBakedOutputObjectIdentifier, FHoudiniBakedOutputObject> BakedOutputObjects; // 0x0
};

struct FOptionsParametersSection {
	EOptionsSection SectionType; // 0x0
	FOptionsSectionTitleData Title; // 0x8
	EOptionAvailability Availability; // 0x10
	TArray<UCTOptionsParameterController*> ParameterControllers; // 0x18
};

struct FTeam {
	int32_t TeamScore; // 0x0
	int32_t TeamReadyPlayers; // 0x4
	int32_t TeamRemainingPlayers; // 0x8
	TArray<FTeamPlayer> Players; // 0x10
	int32_t TeamId; // 0x20
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FClientGetPlayFabIDsFromGameCenterIDsRequest : FPlayFabRequestCommon {
	FString GameCenterIDs; // 0x8
};

struct FPWMatchMakingInfos {
	uint32_t TSearch; // 0x0
	TArray<FString> Match; // 0x8
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

struct FClientGetPlayFabIDsFromKongregateIDsRequest : FPlayFabRequestCommon {
	FString KongregateIDs; // 0x8
};

struct FCTShopPackSaleSave {
	TArray<FString> CheckedPackUID; // 0x0
};

struct FLevelBank {
	TArray<UCTAdditionalLevelList*> Bank; // 0x0
	UCTWeatherData* WeatherData; // 0x10
	float VolumetricFogHistoryWeight; // 0x18
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
};

struct FClientGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FCTImportedResourceItem : FCTImportedItemBase {
	ECTResourceType Type; // 0x28
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
};

struct FStickyMineSettings {
	float TimeBeforeFail; // 0x0
	float AnchoredLifeTime; // 0x4
	float ThrowSpeed; // 0x8
	float Gravity; // 0xc
	float Damping; // 0x10
	UCurveFloat* MeshScaleCurveOverTime; // 0x18
	UCurveFloat* CollisionMeshScaleCurveOverTime; // 0x20
	float ExplosionDelay; // 0x28
	float ExplosionRadius; // 0x2c
	UCurveFloat* FalloffDamageCurve; // 0x30
	float CollisionRadius; // 0x38
	float LockRangeOverride; // 0x3c
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FServerReportPlayerServerResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
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

struct FStreamingLevelSnapshot {
	ULevelStreaming* LevelStreaming; // 0x0
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FServerWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FTargetOffsets {
	FVector2D BindAnchorPoint; // 0x0
	FVector2D Translation; // 0x8
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FServerGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FPlayFabLoginResultCommon : FPlayFabResultCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
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

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FCTPlayerEgg {
	FString ItemUID; // 0x8
	int32_t TotalXP; // 0x18
	int32_t XP; // 0x1c
	int32_t PercentXP; // 0x20
	TArray<FCTEggQuest> Quests; // 0x28
	int32_t OpenRank; // 0x38
	EPWEggStatus Status; // 0x3c
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

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FLimitedCountSectionData {
	ELimitedCountSectionMode Mode; // 0x0
	UCTUserWidget* DefaultEmptyUserClass; // 0x8
};

struct FCTFTUEEvent {
	FString UID; // 0x0
	ECTFTUEEventType Type; // 0x10
	int32_t Priority; // 0x14
};

struct FClientGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FServerGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FClientConsumePSNEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemsGranted; // 0x8
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

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FCTExclusiveShopSectionData {
	TArray<FCTExclusiveShopSection> ExclusiveShopSections; // 0x0
	TSoftClassPtr<UObject> HorizontalButtonClass; // 0x10
	TSoftClassPtr<UObject> VerticalButtonClass; // 0x38
	TSoftClassPtr<UObject> SquareButtonClass; // 0x60
};

struct FTextureCustomizationData {
	UMaterialInterface* SourceMaterial; // 0x20
	UMaterialInstanceDynamic* DestMaterial; // 0x30
	TArray<FTextureCustomizationStampData> Stamps; // 0x80
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FDamageDealtData {
	float InstantDamage; // 0x0
	float PoisonDamage; // 0x4
	float PoisonDuration; // 0x8
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FServerRedeemMatchmakerTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString Ticket; // 0x20
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
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

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FAdminIncrementPlayerStatisticVersionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
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

struct FClientGetPlayerTradesRequest : FPlayFabRequestCommon {
	ETradeStatus StatusFilter; // 0x8
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

struct FEditBoxInheritedOptions {
	bool bIsPassword; // 0x0
};

struct FPerlinNoiseShaker {
	float Amplitude; // 0x0
	float Frequency; // 0x4
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FAdminRemoveServerBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
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

struct FMatchTypeScoringValue {
	ECTMatchType Type; // 0x0
	int32_t Score; // 0x4
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FAdminGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
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

struct FClientAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FClientGetLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MaxResultsCount; // 0x10
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* ProfileConstraints; // 0x28
	FString StatisticName; // 0x30
	bool UseSpecificVersion; // 0x40
	int32_t Version; // 0x44
};

struct FCloudScriptExecuteFunctionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Error; // 0x8
	int32_t ExecutionTimeMilliseconds; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionResult; // 0x28
	bool FunctionResultTooLarge; // 0x30
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FServerAddCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
	FString VirtualCurrency; // 0x38
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FTrailFXSettings {
	float Duration; // 0x0
	bool bOverrideLength; // 0x4
	float Length; // 0x8
	bool bOverrideWidth; // 0xc
	float Width; // 0x10
	bool bOverrideColor; // 0x14
	FLinearColor Color; // 0x18
	bool bOverrideHDR; // 0x28
	float HDR; // 0x2c
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse response; // 0x8
};

struct FCTPackGiftKeyItem : FCTItemBase {
	FString GiftPackUID; // 0xd0
	FString Key; // 0xe0
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

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FClientCancelTradeRequest : FPlayFabRequestCommon {
	FString TradeId; // 0x8
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

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FAdminUpdateCloudScriptResult : FPlayFabResultCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FOutputActorOwner {
	AActor* OutputActor; // 0x8
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FCTDamageInfo {
	int32_t ShotCount; // 0x0
	int32_t HitCount; // 0x4
	float Damages; // 0x8
	float PoisonDamages; // 0xc
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FHoudiniStaticMeshGenerationProperties {
	char bGeneratedDoubleSidedGeometry : 1; // 0x0
	UPhysicalMaterial* GeneratedPhysMaterial; // 0x8
	FBodyInstance DefaultBodyInstance; // 0x10
	ECollisionTraceFlag GeneratedCollisionTraceFlag; // 0x168
	int32_t GeneratedLightMapResolution; // 0x16c
	FWalkableSlopeOverride GeneratedWalkableSlopeOverride; // 0x170
	int32_t GeneratedLightMapCoordinateIndex; // 0x180
	char bGeneratedUseMaximumStreamingTexelRatio : 1; // 0x184
	float GeneratedStreamingDistanceMultiplier; // 0x188
	UFoliageType_InstancedStaticMesh* GeneratedFoliageDefaultSettings; // 0x190
	TArray<UAssetUserData*> GeneratedAssetUserData; // 0x198
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FClientGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FClientLoginWithAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool CreateAccount; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x30
	FString EncryptedRequest; // 0x38
	UPlayFabJsonObject* InfoRequestParameters; // 0x48
	FString OS; // 0x50
	FString PlayerSecret; // 0x60
};

struct FCTPlayerStartInfo {
	ACTPlayerStart* pPlayerStart; // 0x0
	int32_t SequenceIndex; // 0x8
};

struct FMultiplayerGetMatchResult : FPlayFabResultCommon {
	FString MatchID; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RegionPreferences; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
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

struct FAdminUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FClientGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FCTPackage : FCTUIDLocalizedInterface {
	FString PackUID; // 0x8
	FName PackUIDName; // 0x18
	FString PlatformID; // 0x20
	FString DLCPlatformID; // 0x30
	FCTPckContent Content; // 0x40
	FCTPckShopData ShopData; // 0x58
	FCTPckRewardData RewardData; // 0x64
	bool bFromDataTable; // 0x70
	FCTMultiscaleTextureAsset Image; // 0x78
	ECTDisplaySetType ForceObjectRender; // 0xc0
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FAuthenticationValidateEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	EIdentifiedDeviceType IdentifiedDeviceType; // 0x10
	ELoginIdentityProvider IdentityProvider; // 0x11
	UPlayFabJsonObject* Lineage; // 0x18
};

struct FNiagaraDebugHudTextOptions {
	ENiagaraDebugHudFont Font; // 0x0
	ENiagaraDebugHudHAlign HorizontalAlignment; // 0x4
	ENiagaraDebugHudVAlign VerticalAlignment; // 0x5
	FVector2D ScreenOffset; // 0x8
};

struct FDragonXPSpawnerInfos {
	int32_t CTPlayerId; // 0x0
	TArray<int32_t> DragonXPSpawnersIndex; // 0x8
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

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FClusterPosStruct {
	FVector Pos; // 0x0
	float Weight; // 0xc
	int32_t Team; // 0x10
	float Sev; // 0x14
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

struct FServerGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientMatchmakeResult : FPlayFabResultCommon {
	FString Expires; // 0x8
	FString LobbyId; // 0x18
	int32_t PollWaitTimeMS; // 0x28
	FString ServerIPV4Address; // 0x30
	FString ServerIPV6Address; // 0x40
	int32_t ServerPort; // 0x50
	FString ServerPublicDNSName; // 0x58
	EMatchmakeStatus Status; // 0x68
	FString Ticket; // 0x70
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
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

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FClassSpecificSequence {
	ECharacClassType CharacterClass; // 0x0
	TSoftObjectPtr<ULevelSequence> Sequence; // 0x8
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char sRGB : 1; // 0x1
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FPWSubClassSetup {
	FString ClassID; // 0x0
	TArray<FString> PartIDs; // 0x10
	TArray<FString> PropIDs; // 0x20
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FMultiplayerListTitleMultiplayerServersQuotaChangesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Changes; // 0x8
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FAdminRefundPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	FString PlayFabId; // 0x18
	FString Reason; // 0x28
};

struct FSmokedPawn {
	ACTBeastPawn* Pawn; // 0x0
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
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

struct FClientGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
	FString OverrideLabel; // 0x18
};

struct FPWSessionPlayerInfos {
	FString ID; // 0x0
	int32_t Date; // 0x10
	FPWActivatedBooster Booster; // 0x18
	FPWPlayerStats Stats; // 0x38
	FPWPlayerSetup Custo; // 0xe0
};

struct FMultiplayerGetRemoteLoginEndpointResponse : FPlayFabResultCommon {
	FString IPV4Address; // 0x8
	int32_t Port; // 0x18
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FPWQuests {
	int32_t ServerDate; // 0x0
	FString Mode; // 0x8
	int32_t Start; // 0x18
	int32_t End; // 0x1c
	int32_t DTime; // 0x20
	TMap<FString, FPWOneQuest> QActive; // 0x28
	FPWQuestRewards Rewards; // 0x78
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FPWServerDetails {
	FString IPV4Address; // 0x0
	FString Region; // 0x10
	TArray<FPWServerPort> Ports; // 0x20
};

struct FAdminGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x20
};

struct FPWMatchPlayer {
	FString TeamId; // 0x0
	FString PlayerId; // 0x10
};

struct FMultiplayerUntagContainerImageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
	FString Tag; // 0x20
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FCTVectorOffsetMapping {
	UCurveVector* Curve; // 0x0
	FCTCurveReactivity Reactivity; // 0x8
	ECTCurveReactivityType Type; // 0x1c
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
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

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
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

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FMultiplayerDeleteAssetRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Filename; // 0x10
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FPWLoginInfos {
	EPWCloudPlatform Platform; // 0x0
	EPWCloudCurrency Currency; // 0x1
	FString PlatformID; // 0x8
	FString SessionUID; // 0x18
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

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FCTInputActionKeyMapping : FInputActionKeyMapping {
	bool bIsDefault; // 0x28
};

struct FShopResourceItem {
	FString ItemUID; // 0x0
	FText ItemName; // 0x10
	EItemType Type; // 0x28
	float ActivationTime; // 0x2c
	UTexture2D* Image; // 0x30
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FDataAbortFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FAdminAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FClientValidateIOSReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FLockLostBySmokeInfos {
	int32_t TargetLockedId; // 0x0
	bool bTargetLostBySmoke; // 0x4
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
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

struct FClientAcceptTradeRequest : FPlayFabRequestCommon {
	FString AcceptedInventoryInstanceIds; // 0x8
	FString OfferingPlayerId; // 0x18
	FString TradeId; // 0x28
};

struct FMatchmakerAuthUserResponse : FPlayFabResultCommon {
	bool Authorized; // 0x8
	FString PlayFabId; // 0x10
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FMultiplayerGetBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x2
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FCTPlayEarnStep {
	int32_t WinVal; // 0x0
	FString RewardId; // 0x8
};

struct FKey {
	FName KeyName; // 0x0
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FCTAchievementData {
	FName Key; // 0x0
	int32_t Threshold; // 0x8
	ECTQuestGameMode GameMode; // 0xc
	ECharacClassType CharacClass; // 0xd
	EMapEnvironment MapEnvironment; // 0xe
	EQuestMode QuestMode; // 0xf
	bool Enabled; // 0x10
	UCTAchievementInProgress* Class; // 0x18
	TMap<FName, int32_t> ClassParameters; // 0x20
};

struct FClientGetPlayerTradesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AcceptedTrades; // 0x8
	TArray<UPlayFabJsonObject*> OpenedTrades; // 0x18
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FMultiplayerListContainerImagesResponse : FPlayFabResultCommon {
	FString Images; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FLiveLinkPropertyData {
	FName PropertyName; // 0x0
	TArray<FMovieSceneFloatChannel> FloatChannel; // 0x8
	TArray<FMovieSceneStringChannel> StringChannel; // 0x18
	TArray<FMovieSceneIntegerChannel> IntegerChannel; // 0x28
	TArray<FMovieSceneBoolChannel> BoolChannel; // 0x38
	TArray<FMovieSceneByteChannel> ByteChannel; // 0x48
};

struct FAdminRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FMultiplayerCreateRemoteUserResponse : FPlayFabResultCommon {
	FString ExpirationTime; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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

struct FClientGetPlayFabIDsFromGameCenterIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FAdminAddNewsResult : FPlayFabResultCommon {
	FString NewsId; // 0x8
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

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FCTEggItem : FCTItemContainer {
	FCTCustoItemComponent CustoComponent; // 0xe0
	float XPNeeded; // 0x198
	float XPPercentage; // 0x19c
	TArray<FCTCustoItemComponent> BabyCustoComponents; // 0x1a0
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FServerGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
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

struct FLiveLinkPongMessage {
	FString ProviderName; // 0x0
	FString MachineName; // 0x10
	FGuid PollRequest; // 0x20
	int32_t LiveLinkVersion; // 0x30
	double CreationPlatformTime; // 0x38
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FServerGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t MaxBatchSize; // 0x20
	int32_t SecondsToLive; // 0x24
	FString SegmentId; // 0x28
};

struct FCTItemContainer : FCTItemBase {
	TArray<FString> ContainedItemUIDs; // 0xd0
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

struct FDataDrivenConsoleVariable {
	FDataDrivenCVarType Type; // 0x0
	FString Name; // 0x8
	FString ToolTip; // 0x18
	float DefaultValueFloat; // 0x28
	int32_t DefaultValueInt; // 0x2c
	bool DefaultValueBool; // 0x30
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FServerGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FHoudiniGenericAttribute {
	FString AttributeName; // 0x0
	EAttribStorageType AttributeType; // 0x10
	EAttribOwner AttributeOwner; // 0x11
	int32_t AttributeCount; // 0x14
	int32_t AttributeTupleSize; // 0x18
	TArray<double> DoubleValues; // 0x20
	TArray<int64_t> IntValues; // 0x30
	TArray<FString> StringValues; // 0x40
};

struct FNiagaraOutlinerEmitterInstanceData {
	FString EmitterName; // 0x0
	ENiagaraSimTarget SimTarget; // 0x10
	ENiagaraExecutionState ExecState; // 0x14
	int32_t NumParticles; // 0x18
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FCloudScriptRegisterQueuedFunctionRequest : FPlayFabRequestCommon {
	FString ConnectionString; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString FunctionName; // 0x20
	FString QueueName; // 0x30
};

struct FGroupsCreateGroupRoleResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FCTHelperFrameLocalizationData {
	FCTLocalizationData Title; // 0x0
	FCTLocalizationData Description; // 0x20
};

struct FWidgetDatas {
	EWidgetType WidgetEnum; // 0x0
	int32_t ZOrder; // 0x4
};

struct FClientGetLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
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

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
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

struct FServerModifyCharacterVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FCTImportedDistinction : FTableRowBase {
	int32_t RequiredRecommendationCount; // 0x8
	float SoftCurrencyRewardProbability; // 0xc
	float SoftCurrencyRewardPoints; // 0x10
	float HardCurrencyRewardProbability; // 0x14
	float HardCurrencyRewardPoints; // 0x18
	float XPBoosterRewardProbability; // 0x1c
	TArray<float> XPBoosterChanceDistribution; // 0x20
	float EggRewardProbability; // 0x30
	TArray<float> EggChanceDistribution; // 0x38
	float ArmorItemRewardProbability; // 0x48
	TArray<float> ArmorItemChanceDistribution; // 0x50
	float MiscRewardProbability; // 0x60
	TArray<float> MiscChanceDistribution; // 0x68
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FClientLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString XboxToken; // 0x40
};

struct FAdminUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FClientValidateIOSReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptData; // 0x38
};

struct FAdminDeleteSegmentsResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
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

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FAdminGetMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FClientUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString KeyItemInstanceId; // 0x40
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
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

struct FGameModeData {
	ECTMatchType Type; // 0x0
	FText ModeTitle; // 0x8
	FText ModeDescription; // 0x20
	TSoftObjectPtr<UTexture2D> ModeIconTexture_ON; // 0x38
	TSoftObjectPtr<UTexture2D> ModeIconTexture_OFF; // 0x60
	TSoftObjectPtr<UTexture2D> ModeIconTexture_Bigmessage; // 0x88
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FCTUIShadowInternalProperties {
	TMap<ECTUIShadowQuality, FIntPoint> ShadowResolutions; // 0x0
	FLinearColor ShadowColor; // 0x50
	UMaterial* ScaleImageMaterial; // 0x60
	UMaterialInstanceDynamic* ScaleImageMaterialInstance; // 0x68
	float ScaleValue; // 0x70
	FName TextureToScaleParameterName; // 0x74
	FName ScaleValueParameterName; // 0x7c
	UMaterial* BlurImageMaterial; // 0x88
	UMaterialInstanceDynamic* BlurImageMaterialInstance; // 0x90
	FName ScaledTextureParameterName; // 0x98
	FName BlurStrenghtParameterName; // 0xa0
};

struct FPWPlayerAllDataLoad {
	FPWPlayerInventory Inventory; // 0x0
	FPWPlayerProgress Progress; // 0x90
	FPWPlayerStats Stats; // 0x108
	FPWPlayerSetup Setup; // 0x1b0
	FPWMatchUpLevel NextLevel; // 0x218
	FPWCloudOptions Options; // 0x250
	FPWQuests Quests; // 0x270
	FPWLiveEvents LiveEvents; // 0x2f8
	FPWOrder Order; // 0x320
	int32_t MagicNumber; // 0x3d0
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

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FClientWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FServerGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0x14
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FCTAnimWeight {
	TSoftObjectPtr<UAnimSequence> AnimSequence; // 0x0
	float Weight; // 0x28
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FDashData {
	UCTRavagerRushFeedbackComponent* FeedbackComponentClass; // 0x0
	float MaxRushDuration; // 0x8
	float MinRushDuration; // 0xc
	float PrepTime; // 0x10
	float PrepTimeRageBonus; // 0x14
	float CapsuleRadius; // 0x18
	float CapsuleHalfHeight; // 0x1c
	float CollisionXOffset; // 0x20
	float TargetPrepSpeed; // 0x24
	float TargetRushSpeed; // 0x28
	float TargetRushSpeedRageBonus; // 0x2c
	float TargetRushInterpSpeed; // 0x30
	float AfterRushStopSpeedMaxRatio; // 0x34
	float AfterRushStopSpeedInterpSpeed; // 0x38
	float AfterRushKeepSpeedMaxRatio; // 0x3c
	float AfterRushKeepSpeedInterpSpeed; // 0x40
	float MinBrakeDurForCancel; // 0x44
	UCurveFloat* MinDotFromDistRatio; // 0x48
	float CanRushMinDotBias; // 0x50
	FVector2D PrepRushYawInterpSpeed; // 0x54
	FVector2D PrepRushPitchInterpSpeed; // 0x5c
	FVector2D PrepRushStraffInterpSpeed; // 0x64
	FVector2D PrepRushVertInterpSpeed; // 0x6c
	float YawMultiplier; // 0x74
	float PitchMultiplier; // 0x78
	float StraffMultiplier; // 0x7c
	float VertMultiplier; // 0x80
	bool Debug; // 0x84
	bool LockDirectionAssist; // 0x85
	bool DashTowardsCamOrientation; // 0x86
	float PreviousFrameMovementDegradationFactor; // 0x88
	UCurveFloat* RightLeftMultFromYDot; // 0x90
	UCurveFloat* UpDownMultFromZDot; // 0x98
	UCurveFloat* MovementMultFromTargetDistanceRatio; // 0xa0
	float MaxDistToRush; // 0xa8
	float MaxRushDist; // 0xac
	float MaxLostDuration; // 0xb0
	float MaxDistFromImminentCol; // 0xb4
	float MaxAnticipationSeconds; // 0xb8
	UCTRavagerAimHelper* AimWidgetClass; // 0xc0
	float MaxWaitTimeAfterHitForFail; // 0xc8
	float DistToMarkProjectileToSuccess; // 0xcc
	float AlternateCooldownOnFail; // 0xd0
	float TimeToReEnablePlayerColAfterDash; // 0xd4
	USoundBase* StartRushPlaceholderSound; // 0xd8
	USoundBase* StopPrepPlaceholderSound; // 0xe0
	USoundBase* FailRushPlaceholderSound; // 0xe8
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FDataDeleteFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FPWOneNews {
	FString ID; // 0x0
	int32_t Start; // 0x10
	int32_t End; // 0x14
	TArray<FString> Text; // 0x18
	TArray<FString> Picture; // 0x28
	TArray<FString> Action; // 0x38
	int32_t Popup; // 0x48
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FClientGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString StatisticName; // 0x30
};

struct FCTCollectionDragonItemData {
	bool bIsItemEnabled; // 0x0
	FString DragonUID; // 0x8
	ECTCollectionMapRegion MapRegion; // 0x1d
};

struct FCTHUDInputHelpers {
	UWidget* GadgetButtonCanvas; // 0x0
	UWidget* AbilityButtonCanvas; // 0x8
	UWidget* BattleShuffleButtonCanvas; // 0x10
	UWidget* FireBallButtonCanvas; // 0x18
	UWidget* FlameThrowerButtonCanvas; // 0x20
	UWidget* BoostButtonCanvas; // 0x28
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FGroupsBlockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FPWOneQuestContent {
	bool Active; // 0x0
	FString Mode; // 0x8
	FString GM; // 0x18
	FString MapEnv; // 0x28
	FString Class; // 0x38
	TArray<int32_t> Thresh; // 0x48
	TArray<int32_t> XPR; // 0x58
	TArray<int32_t> SCR; // 0x68
	TArray<FString> PKR; // 0x78
};

struct FVisibilityObstructor {
	USphereComponent* ColliderComp; // 0x0
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FMultiplayerCancelServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FAdminSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
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

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FCTDragonCustoItem : FCTItemBase {
	FCTCustoItemComponent CustoComponent; // 0xd0
	ECTDragonCustoType DragonCustoType; // 0x188
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FServerUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FPawnDetection {
	FWidgetTransform RenderTransform; // 0x0
	bool bIsDisabled; // 0x1c
	bool bIsOnLockZone; // 0x1d
	float LockZoneAccuracy; // 0x20
	bool bDetected; // 0x24
	bool bVisible; // 0x25
	bool bFar; // 0x26
	bool bLocking; // 0x27
	bool bRecentAttacker; // 0x28
	float RecentAttackerStart; // 0x2c
	bool bBounty; // 0x30
	int8_t BountyValue; // 0x31
	bool bBerserk; // 0x32
	bool bHoldingSpear; // 0x33
	bool bIsThreateningWithSpear; // 0x34
	bool bTracker; // 0x35
	float TrackerStartTimerTimeStamp; // 0x38
	int8_t FireSequenceCounts; // 0x3c
	float LastFireTime; // 0x40
	bool bStrikerPredator; // 0x44
	bool bStrikerPredatorEnraged; // 0x45
	float StrikerPredatorStartTimestamp; // 0x48
	bool bIsOccludedBySmoke; // 0x4c
	bool bLastTarget; // 0x4d
	float LastTargetTime; // 0x50
	bool bPinged; // 0x54
	float PingedStartTime; // 0x58
	bool bForceDisplay; // 0x5c
	FVector2D OnScreenPosition; // 0x60
	bool bOnScreen; // 0x68
	bool bOccluded; // 0x69
	EInvisibilityStatus LocalInvisRevealStatus; // 0x6a
	EInvisibilityStatus TargetInvisRevealStatus; // 0x6b
};

struct FMultiplayerDeleteContainerImageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
};

struct FAdminRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FMultiplayerListMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FMultiplayerGetMultiplayerServerLogsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ServerId; // 0x10
};

struct FDataInitiateFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FServerRedeemMatchmakerTicketResult : FPlayFabResultCommon {
	FString Error; // 0x8
	bool TicketIsValid; // 0x18
	UPlayFabJsonObject* UserInfo; // 0x20
};

struct FExperimentationGetTreatmentAssignmentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* TreatmentAssignment; // 0x8
};

struct FBattleEventDescriptor {
	EBattleEventEnum BattleEvent; // 0x0
	EBattleEventNetworkFlag NetworkFlag; // 0x1
};

struct FServerGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* ProfileConstraints; // 0x28
	FString XboxToken; // 0x30
};

struct FCTDebugPlayerEgg : FCTPlayerEgg {
	ECTPlayerEggState DebugState; // 0x40
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FClientLoginWithNintendoServiceAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString IdentityToken; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FPWMatchUpLevel {
	uint32_t Level; // 0x0
	uint32_t XP; // 0x4
	TArray<FString> Reward; // 0x8
	TArray<FString> Bonus; // 0x18
	TArray<FString> Chest; // 0x28
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

struct FPopcornFXDefaultMaterialsSettings {
	FSoftObjectPath Material_Billboard_Additive; // 0x0
	FSoftObjectPath Material_Billboard_AlphaBlend; // 0x18
	FSoftObjectPath Material_Billboard_AlphaBlend_Lit; // 0x30
	FSoftObjectPath Material_Billboard_AlphaBlendAdditive; // 0x48
	FSoftObjectPath Material_Billboard_AlphaBlendAdditive_Lit; // 0x60
	FSoftObjectPath Material_Billboard_Distortion; // 0x78
	FSoftObjectPath Material_Billboard_Solid; // 0x90
	FSoftObjectPath Material_Billboard_Solid_Lit; // 0xa8
	FSoftObjectPath Material_Billboard_Masked; // 0xc0
	FSoftObjectPath Material_Billboard_Masked_Lit; // 0xd8
	FSoftObjectPath Material_Billboard_VolumetricFog; // 0xf0
	FSoftObjectPath Material_Billboard_SixWayLightmap; // 0x108
	FSoftObjectPath Material_Mesh_Additive; // 0x120
	FSoftObjectPath Material_Mesh_Distortion; // 0x138
	FSoftObjectPath Material_Mesh_Solid; // 0x150
	FSoftObjectPath Material_Mesh_Solid_Lit; // 0x168
	FSoftObjectPath Material_Mesh_Masked; // 0x180
	FSoftObjectPath Material_Mesh_Masked_Lit; // 0x198
	FSoftObjectPath Material_Mesh_VAT_Opaque_Fluid; // 0x1b0
	FSoftObjectPath Material_Mesh_VAT_Opaque_Fluid_Lit; // 0x1c8
	FSoftObjectPath Material_Mesh_VAT_Masked_Fluid; // 0x1e0
	FSoftObjectPath Material_Mesh_VAT_Masked_Fluid_Lit; // 0x1f8
	FSoftObjectPath Material_Mesh_VAT_Opaque_Soft; // 0x210
	FSoftObjectPath Material_Mesh_VAT_Opaque_Soft_Lit; // 0x228
	FSoftObjectPath Material_Mesh_VAT_Masked_Soft; // 0x240
	FSoftObjectPath Material_Mesh_VAT_Masked_Soft_Lit; // 0x258
	FSoftObjectPath Material_Mesh_VAT_Opaque_Rigid; // 0x270
	FSoftObjectPath Material_Mesh_VAT_Opaque_Rigid_Lit; // 0x288
	FSoftObjectPath Material_Mesh_VAT_Masked_Rigid; // 0x2a0
	FSoftObjectPath Material_Mesh_VAT_Masked_Rigid_Lit; // 0x2b8
};

struct FExperimentationGetExclusionGroupTrafficResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> TrafficAllocations; // 0x8
};

struct FCTMemberInfo {
	EPWMemberStatus Status; // 0x0
	FString AvatarUrl; // 0x8
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

struct FAdminGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
};

struct FClientGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FClientAndroidDevicePushNotificationRegistrationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
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

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FAdminRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
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

struct FCTDebugPresetContainer {
	UCTDebugPresetButton* pButton; // 0x0
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

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FStampCollection {
	FName MaterialSlotName; // 0x0
	TArray<FStampData> Stamps; // 0x8
};

struct FServerConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FCTNemesisPlayerData {
	TArray<int32_t> KilledCountData; // 0x0
	int32_t LastKiller; // 0x10
	int32_t PreviousNemesis; // 0x14
	int32_t Nemesis; // 0x18
	int32_t BestVictim; // 0x1c
};

struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FClientLoginWithAppleRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString IdentityToken; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
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

struct FGroupsListGroupMembersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Members; // 0x8
};

struct FLockerInfos {
	UCTTargetLockComponent* Source; // 0x0
	ELockStatus LockStatus; // 0x8
	bool bMegaWeaponThreat; // 0x9
};

struct FCTTreasureGameModeEvent {
	FCTTreasureGameModeEventType TreasureEventType; // 0x0
	float MinTime; // 0x4
	float MaxTime; // 0x8
};

struct FClientUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
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

struct FBattleShuffleData {
	float ShuffleTime; // 0x0
};

struct FCTTaskContext {
	UObject* WorldContext; // 0x0
};

struct FGroupsCreateGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString GroupName; // 0x18
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FPLayerDisplayStruct {
	FString Player; // 0x0
	EPlayerDisplay Display; // 0x10
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

struct FSocialTabData {
	TArray<UCTUsersSectionController*> Sections; // 0x0
	bool bFocusPreviousHoveredUser; // 0x10
	bool bAlwaysFocusFirstUser; // 0x11
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FAdminRemoveVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FPWMatchRewards {
	uint32_t PXP; // 0x0
	uint32_t Exp; // 0x4
	TArray<FPWMatchUpLevel> LevelUp; // 0x8
	FPWPlayerStats Stats; // 0x18
	FPWPlayerInventory Inventory; // 0xc0
	FPWMatchUpLevel NextLevel; // 0x150
	FPWLiveEvents LiveEvents; // 0x188
	FPWOrder Order; // 0x1b0
	TArray<FString> NewEvents; // 0x260
};

struct FCloudScriptListQueuedFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FServerAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FDataFinalizeFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FCTCommunityStep {
	int32_t WinVal; // 0x0
	FString RewardId; // 0x8
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FSmokeBombSettings {
	float ExplosionDelay; // 0x0
	float Duration; // 0x4
	float SmokeParticleLifeTime; // 0x8
	float SmokeDurationToFullScale; // 0xc
	float CollisionScaler; // 0x10
	float SmokeWidth; // 0x14
	int32_t SmokeParticlesTranslucencySortPriority; // 0x18
	float MalusFadeInDuration; // 0x1c
	float MalusDuration; // 0x20
	float MalusFadeOutDuration; // 0x24
	float BonusFadeInDuration; // 0x28
	float BonusDuration; // 0x2c
	float BonusFadeOutDuration; // 0x30
	float DamageInterval; // 0x34
	float HealInterval; // 0x38
	float HealPerSecond; // 0x3c
	FSmokeBombFXParams AllyFXParams; // 0x40
	FSmokeBombFXParams EnemyFXParams; // 0x90
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	EAkCommSystem CommunicationSystem; // 0x20
};

struct FClientGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FAdminListVirtualCurrencyTypesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FServerSendPushNotificationRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> AdvancedPlatformDelivery; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Message; // 0x20
	UPlayFabJsonObject* Package; // 0x30
	FString Recipient; // 0x38
	FString Subject; // 0x48
	FString TargetPlatforms; // 0x58
};

struct FMovieSceneCompiledSequenceFlagStruct {
	char bParentSequenceRequiresLowerFence : 1; // 0x0
	char bParentSequenceRequiresUpperFence : 1; // 0x0
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

struct FCustomizationColors {
	bool bOverrideColors; // 0x0
	FLinearColor RedColor; // 0x4
	FLinearColor GreenColor; // 0x14
	FLinearColor BlueColor; // 0x24
	FLinearColor StampColor; // 0x34
	float RedThickness; // 0x44
	float GreenThickness; // 0x48
	float BlueThickness; // 0x4c
};

struct FTeamPlayer {
	int32_t CTPlayerId; // 0x0
	FString PlayerName; // 0x8
	int32_t Score; // 0x18
	int32_t TotalScore; // 0x1c
	int32_t GameModeSpecialCount; // 0x20
	int32_t TotalGameModeSpecialCount; // 0x24
	int32_t FragCount; // 0x28
	int32_t TotalFragCount; // 0x2c
	int32_t ActionCount; // 0x30
	int32_t TotalActionCount; // 0x34
	int32_t DeathCount; // 0x38
	int32_t TotalDeathCount; // 0x3c
	bool bReady; // 0x40
	bool bDefinitelyDead; // 0x41
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
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

struct FPWPlayerBasicInfos {
	FString ID; // 0x0
	FString PlatformID; // 0x10
	FString Name; // 0x20
	FString Icon; // 0x30
	int32_t HMMR; // 0x40
	int32_t MRS1; // 0x44
	int32_t Level; // 0x48
	int32_t PDate; // 0x4c
	int32_t PState; // 0x50
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FCTImportedDynamicSectionSetup : FTableRowBase {
	int32_t MaxColumnCount; // 0x8
	int32_t MaxRowCount; // 0xc
	bool ColumnFirst; // 0x10
};

struct FClientLoginWithCustomIDRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString CustomId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FServerRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FClientMatchmakeRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString GameMode; // 0x30
	FString LobbyId; // 0x40
	ERegion Region; // 0x50
	bool StartNewIfNoneFound; // 0x51
	FString StatisticName; // 0x58
	UPlayFabJsonObject* TagFilter; // 0x68
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

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FServerRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientLoginWithFacebookRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FServerSetGameServerInstanceStateRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	EGameInstanceState State; // 0x18
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
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

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FPartSlotConfig {
	bool Helmet; // 0x0
	bool UpperBody; // 0x1
	bool LowerBody; // 0x2
	bool Hands; // 0x3
	bool Accessory; // 0x4
	bool Horns; // 0x5
	bool Cape; // 0x6
	bool Body; // 0x7
	bool Head; // 0x8
	bool Torso; // 0x9
	bool Tail; // 0xa
	bool Harness; // 0xb
	bool FullSet; // 0xc
};

struct FWeaponDamageFeedBack {
	FWeaponCameraPulse CameraPulse; // 0x0
	float CameraShakeScale; // 0x18
	FWeaponHUDPulse HUDPulse; // 0x1c
	bool PlayImpact; // 0x2c
	UParticleSystem* StruckFX; // 0x30
	UParticleSystem* ShieldStruckFX; // 0x38
	UNiagaraSystem* NiagaraStruckFX; // 0x40
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FServerUpdateUserInventoryItemDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString ItemInstanceId; // 0x28
	FString KeysToRemove; // 0x38
	FString PlayFabId; // 0x48
};

struct FCTExplosionDestinations {
	TArray<AActor*> DestinationActors; // 0x0
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FClientLinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	FString IdToken; // 0x28
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FAdminGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FHoudiniAssetBlueprintInstanceData : FActorComponentInstanceData {
	UHoudiniAsset* HoudiniAsset; // 0x68
	int32_t AssetId; // 0x70
	EHoudiniAssetState AssetState; // 0x74
	uint32_t SubAssetIndex; // 0x78
	uint32_t AssetCookCount; // 0x7c
	bool bHasBeenLoaded; // 0x80
	bool bHasBeenDuplicated; // 0x81
	bool bPendingDelete; // 0x82
	bool bRecookRequested; // 0x83
	bool bRebuildRequested; // 0x84
	bool bEnableCooking; // 0x85
	bool bForceNeedUpdate; // 0x86
	bool bLastCookSuccess; // 0x87
	FGuid ComponentGUID; // 0x88
	FGuid HapiGUID; // 0x98
	bool bRegisteredComponentTemplate; // 0xa8
	FString SourceName; // 0xb0
	TMap<FHoudiniOutputObjectIdentifier, FHoudiniAssetBlueprintOutput> Outputs; // 0xc0
	TArray<UHoudiniInput*> Inputs; // 0x110
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

struct FCTPlatformId {
	FString ID; // 0x0
	EPWCloudPlatform CloudService; // 0x10
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FPPVSpotLightOverride {
	ASpotLight* Light; // 0x0
	bool bOverrideIntensity; // 0x8
	float Intensity; // 0xc
	bool bOverrideColor; // 0x10
	FLinearColor Color; // 0x14
	bool bOverrideTemperature; // 0x24
	float Temperature; // 0x28
	bool bOverrideVolumetricScatteringIntensity; // 0x2c
	float VolumetricScatteringIntensity; // 0x30
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
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

struct FMultipleLockData {
	float Duration; // 0x0
	float LockSpeedRatio; // 0x4
	float TimeBetweenLocks; // 0x8
};

struct FGroupsGetGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString GroupName; // 0x18
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
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

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FGuardShattererData {
	float ShieldDamageRatio; // 0x0
};

struct FFortressScoreBoard {
	TArray<FFortressTeam> Teams; // 0x0
};

struct FPWOneFriend : FPWPlayerBasicInfos {
	bool IsPlayfab; // 0x58
	bool IsPlatorm; // 0x59
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

struct FCTDragonOverviewStateBaseData {
	TArray<FName> StreamLevels; // 0x0
};

struct FNiagaraDebuggerAcceptConnection {
	FGuid SessionId; // 0x0
	FGuid InstanceId; // 0x10
};

struct FClientGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterName; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ItemId; // 0x30
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FPWMatchTeamMemberResult {
	FString ID; // 0x0
	int32_t Score; // 0x10
	int32_t NbFrag; // 0x14
	int32_t NbDeath; // 0x18
	int32_t NbAssist; // 0x1c
	FString ClassID; // 0x20
};

struct FClientGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FGroupsDeleteRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
};

struct FMatchmakerUserInfoResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	bool IsDeveloper; // 0x18
	FString PlayFabId; // 0x20
	FString SteamId; // 0x30
	FString TitleDisplayName; // 0x40
	FString Username; // 0x50
	UPlayFabJsonObject* VirtualCurrency; // 0x60
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x68
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

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FLiveLinkSubjectDataMessage {
	FLiveLinkRefSkeleton RefSkeleton; // 0x0
	FName SubjectName; // 0x20
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FCustomizeButtonConfig {
	FString ItemUID; // 0x0
	ECharacClassType ECharacClassType; // 0x10
	FText CategoryText; // 0x18
	UTexture2D* CategoryImage; // 0x30
};

struct FCTButtonStateData {
	FSlateBrush StateBrush; // 0x0
	FWidgetTransform RenderTransform; // 0x88
};

struct FServerListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
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

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FServerRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FCTTeamsInfo {
	int32_t TeamCount; // 0x0
	int32_t TeamSize; // 0x4
};

struct FWarHornDataPerLevel {
	float Shield; // 0x0
	float Duration; // 0x4
	float FireballReloadSpeedMultiplier; // 0x8
};

struct FServerGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString PlayFabId; // 0x30
	FString StatisticName; // 0x40
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FServerMoveItemToUserFromCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FClientAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
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

struct FPWPlayerResource {
	FString ID; // 0x0
	int32_t NB; // 0x10
};

struct FPassiveTriggerContext {
	EPassiveTriggerContext Context; // 0x0
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

struct FPWPlayerStats {
	int32_t MMR; // 0x0
	int32_t MRS1; // 0x4
	int32_t HMRS1; // 0x8
	int32_t XP; // 0xc
	int32_t Level; // 0x10
	int32_t WonMatchCount; // 0x14
	int32_t DrawMatchCount; // 0x18
	int32_t LostMatchCount; // 0x1c
	int32_t ExitCount; // 0x20
	TArray<int32_t> ScoreHistory; // 0x28
	int32_t LastFrag; // 0x38
	int32_t LastDeath; // 0x3c
	int32_t LastAssist; // 0x40
	int32_t TotalFrag; // 0x44
	int32_t TotalDeath; // 0x48
	int32_t TotalAssist; // 0x4c
	int32_t DateLock; // 0x50
	TArray<FPWClassStats> Class; // 0x58
	FPWMatchStats Match; // 0x68
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FServerGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FClientUnlinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FacebookInstantGamesId; // 0x10
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

struct FServerModifyItemUsesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ItemInstanceId; // 0x10
	FString PlayFabId; // 0x20
	int32_t UsesToAdd; // 0x30
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FNiagaraDebuggerExecuteConsoleCommand {
	FString Command; // 0x0
	bool bRequiresWorld; // 0x10
};

struct FAdminDeleteTitleDataOverrideRequest : FPlayFabRequestCommon {
	FString OverrideLabel; // 0x8
};

struct FLocalizationGetLanguageListResponse : FPlayFabResultCommon {
	FString LanguageList; // 0x8
};

struct FServerUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
	FString PlayFabId; // 0x18
};

struct FScoreAmount : FTableRowBase {
	EBattleEventEnum Type; // 0x8
	int32_t Amount; // 0xc
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FPWMatchModeStats {
	FString Game; // 0x0
	FString R; // 0x10
};

struct FMultiplayerListTitleMultiplayerServersQuotaChangesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
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

struct FServerAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FPWOneNotif {
	FString ID; // 0x0
	FString FromID; // 0x10
	uint32_t Date; // 0x20
	FString Type; // 0x28
	bool bSilent; // 0x38
	TArray<FString> TParams; // 0x40
	TArray<int32_t> IParams; // 0x50
	FPWPlayerBasicInfos PInfos; // 0x60
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FServerGrantItemsToUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FServerSubtractCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
	FString VirtualCurrency; // 0x38
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FScoringDatas {
	EScoreType ScoreEnum; // 0x0
	int32_t ScoreValue; // 0x4
	TArray<FMatchTypeScoringValue> ScoreOverride; // 0x8
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

struct FServerModifyItemUsesResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FServerGrantItemsToUserRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ItemIds; // 0x30
	FString PlayFabId; // 0x40
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

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName InputName; // 0x4
	FName ExpressionName; // 0xc
};

struct FAdminResetUserStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FAdminCreateSegmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* SegmentModel; // 0x8
};

struct FClientGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FServerUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FClothCollisionPrim_ConvexFace {
	FPlane Plane; // 0x0
	TArray<int32_t> Indices; // 0x10
};

struct FMultiplayerDeleteBuildRegionRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
};

struct FMultiplayerDeleteBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FCTContextMenuHolderSettings {
	EContextMenuMisclickMode MisclickMode; // 0x0
	TArray<EUINavigationAction> CloseContextMenuWithNavAction; // 0x8
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FServerBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FMatchmakerStartGameResponse : FPlayFabResultCommon {
	FString GameID; // 0x8
	FString ServerIPV4Address; // 0x18
	FString ServerIPV6Address; // 0x28
	int32_t ServerPort; // 0x38
	FString ServerPublicDNSName; // 0x40
};

struct FMultiplayerCancelMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FServerRegisterGameResponse : FPlayFabResultCommon {
	FString LobbyId; // 0x8
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FClientConfirmPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OrderId; // 0x10
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FCTOverTimeHealingInfo {
	EOverTimeHealingReason Reason; // 0x0
	float Amount; // 0x4
	int32_t InstigatorPlayerId; // 0x8
};

struct FCTServerStatusDTO {
	EGameStatus Status; // 0x0
	FString Version; // 0x8
	FString AuthSubsystem; // 0x18
	FString MatchMakingSubsystem; // 0x28
	FString MapName; // 0x38
	FString MatchID; // 0x48
	TArray<FCTTeamDTO> Teams; // 0x58
	bool LobbyOnHold; // 0x68
	bool Profiling; // 0x69
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FPopcornFXRenderSettings {
	char bOverride_DrawCallSortMethod : 1; // 0x0
	EPopcornFXDrawCallSortMethod DrawCallSortMethod; // 0x4
	char bOverride_BillboardingLocation : 1; // 0x8
	EPopcornFXBillboardingLocation BillboardingLocation; // 0xc
	char bOverride_bEnableEarlyFrameRelease : 1; // 0x10
	char bEnableEarlyFrameRelease : 1; // 0x10
	char bOverride_bDisableStatelessCollecting : 1; // 0x10
	char bDisableStatelessCollecting : 1; // 0x10
	char bOverride_bForceLightsLitTranslucent : 1; // 0x10
	char bForceLightsLitTranslucent : 1; // 0x10
};

struct FCTPckItemLot {
	FString ItemUID; // 0x0
	int32_t Quantity; // 0x10
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FAdminRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FServerCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FClientUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString SharedGroupId; // 0x30
};

struct FEventsWriteEventsResponse : FPlayFabResultCommon {
	FString AssignedEventIds; // 0x8
};

struct FServerGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableIDs; // 0x18
};

struct FPWNotifManage {
	TArray<FPWOneNotifAction> Actions; // 0x0
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FAdminUpdateSegmentResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
	FString SegmentId; // 0x18
};

struct FGroupsChangeMemberRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DestinationRoleId; // 0x10
	UPlayFabJsonObject* Group; // 0x20
	TArray<UPlayFabJsonObject*> Members; // 0x28
	FString OriginRoleId; // 0x38
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FWeaponHUDPulse {
	float Duration; // 0x0
	float DurationWithShield; // 0x4
	float Amplitude; // 0x8
	float AmplitudeWithShield; // 0xc
};

struct FServerUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FClientUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
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

struct FNiagaraAssetVersion {
	int32_t MajorVersion; // 0x0
	int32_t MinorVersion; // 0x4
	FGuid VersionGuid; // 0x8
	bool bIsVisibleInVersionSelector; // 0x18
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

struct FLiveLinkRoleProjectSetting {
	ULiveLinkRole* Role; // 0x0
	ULiveLinkSubjectSettings* SettingClass; // 0x8
	ULiveLinkFrameInterpolationProcessor* FrameInterpolationProcessor; // 0x10
	TArray<ULiveLinkFramePreProcessor*> FramePreProcessors; // 0x18
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FGroupsListGroupBlocksResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BlockedEntities; // 0x8
};

struct FServerLoginWithSteamIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString SteamId; // 0x20
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FAdminUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
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

struct FExperimentationGetExclusionGroupsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ExclusionGroups; // 0x8
};

struct FCTCurveReactivity {
	float Up; // 0x0
	float Down; // 0x4
	ECTCurveInterpolationType Interpolation; // 0x8
	float MaxSpeed; // 0xc
	bool bCanEditMaxSpeed; // 0x10
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FAdminUpdatePolicyRequest : FPlayFabRequestCommon {
	bool OverwritePolicy; // 0x8
	FString PolicyName; // 0x10
	int32_t PolicyVersion; // 0x20
	TArray<UPlayFabJsonObject*> Statements; // 0x28
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FAdminDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FClientLoginWithTwitchRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FPopcornFXSimulationSettings {
	char bOverride_bEnablePhysicalMaterials : 1; // 0x0
	char bEnablePhysicalMaterials : 1; // 0x0
	char bOverride_LocalizedPagesMode : 1; // 0x0
	EPopcornFXLocalizedPagesMode LocalizedPagesMode; // 0x4
	char bOverride_SceneUpdateTickGroup : 1; // 0x8
	ETickingGroup SceneUpdateTickGroup; // 0xc
};

struct FServerLinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString PlayFabId; // 0x18
	FString ServerCustomId; // 0x28
};

struct FClientUnlinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FCloudScriptExecuteEntityCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionParameter; // 0x28
	bool GeneratePlayStreamEvent; // 0x30
	ECloudScriptRevisionOption RevisionSelection; // 0x31
	int32_t SpecificRevision; // 0x34
};

struct FDataGetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	bool EscapeObject; // 0x18
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FCTMouseSetting {
	EMouseControlType ControlType; // 0x0
	EMouseConstantType ConstantType; // 0x1
	float fMinMoveToLeaveConstMode; // 0x4
	float AccSmoothDownRatio; // 0x8
	float AccSmoothDownRatioConstMin; // 0xc
	float AccSmoothDownRatioConstMax; // 0x10
	TArray<FCTMouseAxisSetting> AxisSettings; // 0x18
};

struct FClientUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FClientConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemInstanceId; // 0x28
};

struct FCTMMRUpdatePlayer {
	FString PlayerId; // 0x0
	int32_t Score; // 0x10
	FPWPlayerStats Statistics; // 0x18
};

struct FCTDragonSpawnInfos {
	ACTItemProvider* Dragon; // 0x8
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FAllyTarget {
	FCTPlayerId CTPlayerId; // 0x0
	UCTAllyTargetWidget* Widget; // 0x10
};

struct FAdminSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FClientConsumePS5EntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketplaceSpecificData; // 0x20
};

struct FAdminGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FServerExecuteCloudScriptResult : FPlayFabResultCommon {
	int32_t APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int32_t ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int32_t HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int32_t MemoryConsumedBytes; // 0x54
	int32_t ProcessorTimeSeconds; // 0x58
	int32_t Revision; // 0x5c
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FCTCloseUpImageFarm {
	ACTCloseUpMenuCharacterRenderer* MenuCharacterRendererClass; // 0x0
	ACTCloseUpFanionRenderer* FanionRendererClass; // 0x8
	ACTCloseUpObjectRenderer* DefaultObjectRendererClass; // 0x10
	ACTCloseUpObjectRenderer* ShieldRendererClass; // 0x18
	ACTCloseUpObjectRenderer* SpearRendererClass; // 0x20
	ACTCloseUpObjectRenderer* SwordRendererClass; // 0x28
	ACTCloseUpObjectRenderer* GreatSwordRendererClass; // 0x30
	ACTCloseUpObjectRenderer* AxeRendererClass; // 0x38
	ACTCloseUpObjectRenderer* BowRendererClass; // 0x40
	FTransform FirstRendererTransform; // 0x50
	ACTMenuCharacter* DragonMenuCharacterClass; // 0x80
	ACTMenuCharacter* RiderMenuCharacterClass; // 0x88
	ACTFanionPropMesh* FanionClass; // 0x90
	FTransform RiderDisplaySetTransform; // 0xa0
	FTransform DragonDisplaySetTransform; // 0xd0
	FTransform FanionDisplaySetTransform; // 0x100
	TArray<ACTCloseUpImageRenderer*> RendererArray; // 0x130
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FCTBoneInData {
	FName Name; // 0x0
	float Weight; // 0x8
	int32_t BoneIndex; // 0xc
	int32_t ParentBoneIndex; // 0x10
	FTransform RiderCoord_ParentInitTransform; // 0x20
	FTransform RiderCoord_InitTransform; // 0x50
	FTransform ParentCoord_InitTransform; // 0x80
	FVector BeastCoord_SmoothLocation; // 0xb0
	FQuat BeastCoord_SmoothRotation; // 0xc0
	FQuat BeastCoord_SmoothEuler[0x3]; // 0xd0
	FTransform WorldCoord_StretchedTransform; // 0x100
	FTransform WorldCoord_FinalTransform; // 0x130
	FTransform ParentCoord_AddTransform; // 0x160
};

struct FCTWorkshopData {
	FString TitleLocId; // 0x0
	FString TitleLocTab; // 0x10
	FString DescLocId; // 0x20
	FString DescLocTab; // 0x30
	TArray<FCTWorkshopStep> WorkshopSteps; // 0x40
	TSoftObjectPtr<UMediaSource> VideoSource; // 0x50
	UCTTutorialWorkShop* WorkshopClass; // 0x78
	bool bIsFlamethrowerAvailable; // 0x80
	bool bIsFireballAvailable; // 0x81
	bool bIsGadgetAvailable; // 0x82
	bool bIsAbilityAvailable; // 0x83
	bool bIsBoostAvailable; // 0x84
	bool bIsPowerBoostAvailable; // 0x85
	bool bIsBrakeAvailable; // 0x86
	FString ProgressSoundID; // 0x88
	FString FailStepSoundID; // 0x98
	FString EndSoundID; // 0xa8
	EWorkshopEducationType WorkshopEducationType; // 0xb8
	FName ActionName; // 0xbc
	ECTTutorialInputAnimation AnimationType; // 0xc4
	bool bRequiresAnimatedIcon; // 0xc5
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FClientUnlinkFacebookAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FHoudiniAssetBlueprintOutput {
	int32_t OutputIndex; // 0x0
	FHoudiniOutputObject OutputObject; // 0x8
};

struct FServerRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FExperimentationGetLatestScorecardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Scorecard; // 0x8
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
	FName Tag; // 0x30
};

struct FServerUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString PlayFabId; // 0x40
};

struct FMultiplayerCreateServerBackfillTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FCTQuestData {
	FName Key; // 0x0
	TArray<int32_t> Thresholds; // 0x8
	ECTQuestGameMode GameMode; // 0x18
	ECharacClassType CharacClass; // 0x19
	EMapEnvironment MapEnvironment; // 0x1a
	EQuestMode QuestMode; // 0x1b
	TArray<FCTQuestRewardData> Rewards; // 0x20
	bool Enabled; // 0x30
	UCTQuestInProgress* Class; // 0x38
	TMap<FName, int32_t> ClassParameters; // 0x40
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FShopItem {
	FString ItemUID; // 0x0
	FText ItemName; // 0x10
	UTexture2D* Image; // 0x28
	ERarity Rarity; // 0x30
	FCharacterPart CachedCharacterPart; // 0x38
	FCharacterProp CachedCharacterProp; // 0x78
	EBodyPartTarget CachedTarget; // 0xb8
	USkeletalMesh* CachedBaseMesh; // 0xc0
	EPropType CachedPropType; // 0xc8
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
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

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FAdminDeleteMasterPlayerAccountResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
	FString TitleIds; // 0x18
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FAdminUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString PlayFabId; // 0x30
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FCTDebugCharacterSet : FCTCharacterSet {
	ACTBeastPawn* DebugBeast; // 0x38
	ACTDragonRider* DebugRider; // 0x40
};

struct FAdminCreateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	bool IgnoreNonce; // 0x38
	FString IssuerDiscoveryUrl; // 0x40
	UPlayFabJsonObject* IssuerInformation; // 0x50
};

struct FServerLoginWithXboxIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString Sandbox; // 0x20
	FString XboxId; // 0x30
};

struct FCTTeamColor {
	int32_t UILocationIndex; // 0x0
	UMaterialInterface* AliveTexture; // 0x8
	UMaterialInterface* DeadTexture; // 0x10
	UMaterialInterface* GradientTexture; // 0x18
	UMaterialInterface* UnderlineTexture; // 0x20
	UMaterialInterface* ListSeparatorTexture; // 0x28
	UMaterialInterface* LongFrameTexture; // 0x30
	UMaterialInterface* LongFrameOutlineTexture; // 0x38
	FString TextStyleBeacon; // 0x40
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FDataGetFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FHoudiniBakedOutputObjectIdentifier {
	int32_t PartId; // 0x0
	FString SplitIdentifier; // 0x8
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FAdminResolvePurchaseDisputeRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	EResolutionOutcome Outcome; // 0x18
	FString PlayFabId; // 0x20
	FString Reason; // 0x30
};

struct FClientReportPlayerClientResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FMultiplayerListMultiplayerServersRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t PageSize; // 0x20
	FString Region; // 0x28
	FString SkipToken; // 0x38
};

struct FGroupsAcceptGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FServerLoginWithServerCustomIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString PlayerSecret; // 0x20
	FString ServerCustomId; // 0x30
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

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FPlayFabError {
	bool HasError; // 0x0
	int32_t ErrorCode; // 0x4
	FString ErrorName; // 0x8
	FString ErrorMessage; // 0x18
	FString ErrorDetails; // 0x28
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FServerRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FCTCharacterSet {
	FName DragonStartBaseName; // 0x8
	FName RiderStartBaseName; // 0x10
	ACTMenuCharacter* DragonMenuCharacter; // 0x18
	ACTMenuCharacter* RiderMenuCharacter; // 0x20
	ACTMenuCharacterStartBase* DragonStartBase; // 0x28
	ACTMenuCharacterStartBase* RiderStartBase; // 0x30
};

struct FServerGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FWaveOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialWaveOscillatorOffsetType InitialOffsetType; // 0x8
};

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FMultiplayerGetMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FKeyToolTipData {
	FKey Key; // 0x0
	FString LocalizationTab; // 0x18
	FString LocalizationKey; // 0x28
};

struct FPWActivatedBooster {
	FString ID; // 0x0
	int32_t Expire; // 0x10
	int32_t Ratio; // 0x14
	int32_t TRatio; // 0x18
	int32_t FTRatio; // 0x1c
};

struct FPWClassSetup {
	FString ClassID; // 0x0
	FString TagID; // 0x10
	FPWSubClassSetup Dragon; // 0x20
	FPWSubClassSetup Rider; // 0x50
	bool Cheater; // 0x80
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FClientConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FMultiplayerCreateServerMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString QueueName; // 0x28
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FClientGetPlayerStatisticsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FClientGetAdPlacementsRequest : FPlayFabRequestCommon {
	FString AppId; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	FMovieSceneActorReferenceKey DefaultValue; // 0x18
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
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

struct FPWOneQuest {
	FString ID; // 0x0
	int32_t Start; // 0x10
	int32_t End; // 0x14
	FString Status; // 0x18
	int32_t Progress; // 0x28
	int32_t Difficulty; // 0x2c
	TMap<FString, int32_t> Custom; // 0x30
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

struct FCTAnimationsHolder {
	TSet<UCTAnimationHolder*> Animations; // 0x0
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FClientUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FGroupsListGroupInvitationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Invitations; // 0x8
};

struct FPWLiveEventsUpdate {
	int32_t NextUpdate; // 0x0
	FPWLiveEvents LiveEvents; // 0x8
	FPWQuests Quests; // 0x30
	FPWPlayerInventory Inventory; // 0xb8
};

struct FLiveLinkSubjectFrameMessage {
	FName SubjectName; // 0x0
	TArray<FTransform> Transforms; // 0x8
	TArray<FLiveLinkCurveElement> Curves; // 0x18
	FLiveLinkMetaData MetaData; // 0x28
	double Time; // 0x88
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FPWOneSaveQuest {
	FString Name; // 0x0
	FString ID; // 0x10
	FString Status; // 0x20
	int32_t Progress; // 0x30
	TMap<FString, int32_t> Custom; // 0x38
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FExperimentationStartExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FServerGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
	FString OverrideLabel; // 0x18
};

struct FAnimationMissileWidget {
	UCTMissileDetectionWidget* Widget; // 0x0
	float Timestamp; // 0x8
	FVector OriginalMissileLocation; // 0xc
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FClientGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FInsightsInsightsGetLimitsResponse : FPlayFabResultCommon {
	int32_t DefaultPerformanceLevel; // 0x8
	int32_t DefaultStorageRetentionDays; // 0xc
	int32_t StorageMaxRetentionDays; // 0x10
	int32_t StorageMinRetentionDays; // 0x14
	TArray<UPlayFabJsonObject*> SubMeters; // 0x18
};

struct FCTCharacClass {
	ECharacClassType EnumType; // 0x0
	ACTCustoDisplaySet* RiderCustoDisplaySet; // 0x8
	ACTCustoDisplaySet* DragonCustoDisplaySet; // 0x10
	ACTCustoDisplaySet* FanionCustoDisplaySet; // 0x18
	EAbility SpecialPower; // 0x20
	TMap<ECTMatchType, EAbility> SpecificGameModeSpecialPower; // 0x28
	EAbility RagePower; // 0x78
	TMap<ECTMatchType, EAbility> SpecificGameModeRagePower; // 0x80
	EAbility PassivePower; // 0xd0
	float InitialHP; // 0xd4
	float InitialStamina; // 0xd8
	TArray<EAbility> GadgetsArray; // 0xe0
	UTexture2D* DescriptionTexture; // 0xf0
	UPopcornFXEffect* RageFX; // 0xf8
	FLinearColor RageColor; // 0x100
	FColor ClassColor; // 0x110
	FColor ClassLightColor; // 0x114
	USkeletalMesh* DragonBaseMesh; // 0x118
	USkeletalMesh* RiderBaseMesh; // 0x120
	FCTCharacClassBaby BabyBaseData; // 0x128
	uint32_t DragonId; // 0x138
	uint32_t HeroId; // 0x13c
	EPropType AccessoryLeftHand; // 0x140
	EPropType AccessoryRightHand; // 0x141
	float ShieldDamageRatio; // 0x144
	FLeashParameters InGameLeash; // 0x148
	FLeashParameters MenuLeash; // 0x190
	TSoftObjectPtr<UTexture2D> IconTexture; // 0x1d8
	TSoftObjectPtr<UTexture2D> UnrevealTexture; // 0x200
};

struct FCTImportedQuestData : FTableRowBase {
	TArray<int32_t> Thresholds; // 0x8
	ECTQuestGameMode GameMode; // 0x18
	ECharacClassType CharacClass; // 0x19
	EMapEnvironment MapEnvironment; // 0x1a
	EQuestMode QuestMode; // 0x1b
	TArray<int32_t> XPRewards; // 0x20
	TArray<int32_t> SCRewards; // 0x30
	TArray<FString> PKRewards; // 0x40
	bool Enabled; // 0x50
	int32_t Version; // 0x54
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

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FClientSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString EncryptedRequest; // 0x8
	FString PlayerSecret; // 0x18
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FClientGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FServerGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FClientGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	UPlayFabJsonObject* VirtualCurrency; // 0x18
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20
};

struct FClientRestoreIOSPurchasesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
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

struct FPWMatch {
	FString QueueName; // 0x0
	FString MatchID; // 0x10
	FPWServerDetails ServerDetails; // 0x20
	TArray<FPWMatchPlayer> Players; // 0x50
};

struct FServerGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FCTDragonOverviewStateEggData : FCTDragonOverviewStateBaseData {
	FString CameraName; // 0x10
};

struct FCTImportedHeroCusto : FCTImportedItemBase {
	FString AssetString; // 0x28
	ECTHeroCustoType HeroCustoType; // 0x38
};

struct FStickyMineFXParams {
	float TeamColorMultiplier; // 0x0
	float MeshScale; // 0x4
	FLinearColor ColorCombustion; // 0x8
	float HDRCombustion; // 0x18
	float PowerLight; // 0x1c
	float HDRSparks; // 0x20
	float DistanceFade; // 0x24
	float DistanceFadeOpacity; // 0x28
	float DistanceFadePow; // 0x2c
	float LOD; // 0x30
	float ExplosionRadiusMultiplicator; // 0x34
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FClientModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FCloudScriptListFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FCTUseSkillQuestData {
	int32_t LockedTargetId; // 0x0
	uint64_t TimerValue; // 0x8
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

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FCTMultiswitchOption : FCTUIDLocalizedInterface {
	ECTMultiswitchOptionType Type; // 0x8
};

struct FClientRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FAdminResolvePurchaseDisputeResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
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

struct FCTDragonCell {
	UCTDragonCellController* Controller; // 0x0
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FClientGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FClientLoginWithNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString NintendoSwitchDeviceId; // 0x30
	FString PlayerSecret; // 0x40
};

struct FClientStartGameRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString CustomCommandLineData; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString GameMode; // 0x40
	ERegion Region; // 0x50
	FString StatisticName; // 0x58
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FGroupsUpdateGroupRoleResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FClientRewardAdActivityResult : FPlayFabResultCommon {
	FString AdActivityEventId; // 0x8
	FString DebugResults; // 0x18
	FString PlacementId; // 0x28
	FString PlacementName; // 0x38
	int32_t PlacementViewsRemaining; // 0x48
	int32_t PlacementViewsResetMinutes; // 0x4c
	UPlayFabJsonObject* RewardResults; // 0x50
};

struct FServerGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FHLODInstancingKey {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FClientAttributeInstallRequest : FPlayFabRequestCommon {
	FString Adid; // 0x8
	FString Idfa; // 0x18
};

struct FCTDynamicForceFeedbackData {
	float Intensity; // 0x0
	float Duration; // 0x4
	bool bAffectsLeftLarge; // 0x8
	bool bAffectsLeftSmall; // 0x9
	bool bAffectsRightLarge; // 0xa
	bool bAffectsRightSmall; // 0xb
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FPWPlayerEgg {
	FString ID; // 0x0
	int32_t XPN; // 0x10
	int32_t XPP; // 0x14
	int32_t XP; // 0x18
	FString Status; // 0x20
	int32_t Rank; // 0x30
	TArray<FPWPlayerEggQuest> Quests; // 0x38
};

struct FAdminLookupUserAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
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

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FClientLoginWithFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString FacebookInstantGamesSignature; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
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

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FServerRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString PlayFabId; // 0x40
};

struct FAdminGetPlayerIdFromAuthTokenResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
};

struct FServerGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FCTAssetForceFeedbackData {
	UForceFeedbackEffect* Asset; // 0x0
	FName Tag; // 0x8
	bool bLooping; // 0x10
	bool bIgnoreTimeDilation; // 0x11
	bool bPlayWhilePaused; // 0x12
};

struct FCTIdleAndTakeOffSequences {
	UCTLevelSequence* IdleSequence; // 0x0
	UCTLevelSequence* TakeOffSequence; // 0x8
	ECTDeathCountCondition DeathCountCondition; // 0x10
};

struct FCTMiscellanousShopSection : FCTUIDLocalizedInterface {
	ECTMiscellanousShopSection Section; // 0x8
	FString SectionUID; // 0x10
	TArray<FCTMiscellanousShopData> ShopPackages; // 0x20
	UTexture2D* Image; // 0x30
	TSoftObjectPtr<UTexture2D> DefaultTexture; // 0x38
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

struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FMultiplayerUpdateBuildNameRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FAdminAddServerBuildResult : FPlayFabResultCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
	EGameBuildStatus Status; // 0x60
	FString Timestamp; // 0x68
	FString TitleId; // 0x78
};

struct FAdminGetPlayerStatisticDefinitionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FCTImportedExclusiveShopData : FCTImportedShopData {
	ECTExclusiveShopSection Section; // 0x18
	FString RequiredLink; // 0x20
	FString EndDate; // 0x30
	bool BestValue; // 0x40
	ECTExlusiveButtonSetup ButtonSetup; // 0x41
	int32_t Row; // 0x44
	int32_t Column; // 0x48
};

struct FDataAbortFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FOptionsSectionData {
	UVerticalBox* Container; // 0x0
	TArray<UCTOptionsParameterController*> OptionsControllers; // 0x8
};

struct FHoudiniPDGWorkResultObjectBakedOutput {
	TArray<FHoudiniBakedOutput> BakedOutputs; // 0x0
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FPWCollectionData {
	TMap<FString, FPWCollectionItem> Dragons; // 0x0
};

struct FMultiplayerListContainerImagesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FAuthenticationValidateEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EntityToken; // 0x10
};

struct FTestUninitializedScriptStructMembersTest {
	UObject* UninitializedObjectReference; // 0x0
	UObject* InitializedObjectReference; // 0x8
	float UnusedValue; // 0x10
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FCTBreadcrumbManager {
	TArray<FCTBreadcrumb> BreadcrumbArray; // 0x18
};

struct FAdminGetPlayedTitleListResult : FPlayFabResultCommon {
	FString TitleIds; // 0x8
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FCTSquad {
	bool IsActive; // 0x0
	FString MasterID; // 0x8
	bool IsMaster; // 0x18
	EPWSquadAccess Access; // 0x19
	bool bLock; // 0x1a
	uint32_t MembersHash; // 0x1c
	FString TelemetryUID; // 0x20
	TArray<FCTSquadMember> Members; // 0x30
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

struct FPWShopContent {
	TArray<FPWCloudShopEntry> Store; // 0x0
	int32_t VStore; // 0x10
	int32_t VCatalog; // 0x14
	FString StoreName; // 0x18
	FString Currency; // 0x28
	FPWOrder Order; // 0x38
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FServerDeleteCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
	bool SaveCharacterInventory; // 0x30
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

struct FGroupsDeleteGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientGetFriendLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FMultiplayerListCertificateSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FMultiplayerRequestMultiplayerServerResponse : FPlayFabResultCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x18
	FString FQDN; // 0x28
	FString IPV4Address; // 0x38
	FString LastStateTransitionTime; // 0x48
	TArray<UPlayFabJsonObject*> Ports; // 0x58
	FString Region; // 0x68
	FString ServerId; // 0x78
	FString SessionId; // 0x88
	FString State; // 0x98
	FString VmId; // 0xa8
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

struct FServerBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerReportPlayerServerRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReporteeId; // 0x20
	FString ReporterId; // 0x30
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20
};

struct FPWSquadMember : FPWPlayerBasicInfos {
	FString TitleId; // 0x58
	FString Status; // 0x68
	int32_t DateLock; // 0x78
};

struct FInsightsInsightsEmptyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FCTShieldFXValues {
	float Fade; // 0x0
	float Damage; // 0x4
	float Activation; // 0x8
	float Intensity; // 0xc
};

struct FClientLinkNintendoServiceAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString IdentityToken; // 0x18
};

struct FCTMouseMovableAreaProperties {
	TSet<FKey> DragContentKeys; // 0x0
	bool bStopIfMouseOutOfBounds; // 0x50
	bool bIsInertialMovementEnabled; // 0x51
	ECTLeaveAreaBehaviorType LeaveAreaBehaviorType; // 0x52
	double DelayBeforeInertialHistoryErase; // 0x58
	float InertialVelocityMultiplier; // 0x60
	float FinalPositionError; // 0x64
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

struct FScoreAccumulation {
	EScoreType ScoreType; // 0x0
	float LastTimeGet; // 0x4
	int32_t Occurrences; // 0x8
};

struct FServerRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FCustomizationExportData {
	FCustomizationColors Colors; // 0x0
	FCustomizationRoughness Roughness; // 0x50
	TArray<FStampCollection> StampCollection; // 0x58
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

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FCameraShakeStopParams {
	bool bImmediately; // 0x0
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
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

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FClientGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FExperimentationUpdateExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	FString EndDate; // 0x20
	FString ExclusionGroupId; // 0x30
	int32_t ExclusionGroupTrafficAllocation; // 0x40
	EExperimentType ExperimentType; // 0x44
	FString ID; // 0x48
	FString Name; // 0x58
	FString SegmentId; // 0x68
	FString StartDate; // 0x78
	FString TitlePlayerAccountTestIds; // 0x88
	TArray<UPlayFabJsonObject*> Variants; // 0x98
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

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
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

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FMovieSceneEvaluationHookEvent {
	FMovieSceneEvaluationHookComponent Hook; // 0x0
};

struct FLeashParameters {
	float LeashLength; // 0x0
	uint32_t LeashCount; // 0x4
	float LeashStiffness; // 0x8
	float ChainStiffness; // 0xc
	float CollisionStiffness; // 0x10
	float LeashGravity; // 0x14
	float LeashMass; // 0x18
	float LeashDamper; // 0x1c
	float PhysicFPS; // 0x20
	float DeltaTimeFactor; // 0x24
	uint32_t MeshSides; // 0x28
	float MeshRadius; // 0x2c
	uint32_t ChainCount; // 0x30
	float LeashSmoothMinDelta; // 0x34
	float LeashSmoothMaxDelta; // 0x38
	UPhysicsAsset* PhysicAsset; // 0x40
};

struct FCTSmoothFloat {
	float Margin; // 0x0
	float Target; // 0x4
	SmoothType Type; // 0x8
	float SmoothUp; // 0xc
	float SmoothDown; // 0x10
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

struct FCloudScriptExecuteFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionParameter; // 0x28
	bool GeneratePlayStreamEvent; // 0x30
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

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FExperimentationUpdateExclusionGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	FString ExclusionGroupId; // 0x20
	FString Name; // 0x30
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FPWLeaderboardEntry {
	FString DisplayName; // 0x0
	FString PlayerId; // 0x10
	FString AvatarUrl; // 0x20
	uint32_t Position; // 0x30
	int32_t StatValue; // 0x34
	TMap<FString, int32_t> Statistics; // 0x38
};

struct FGroupsRemoveGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FGroupsIsMemberRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FInsightsInsightsSetPerformanceRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PerformanceLevel; // 0x10
};

struct FTrackNames {
	FString Rider; // 0x0
	FString Dragon; // 0x10
	bool RiderOnDragon; // 0x20
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

struct FCTNetRDVSignal {
	int32_t UniqID; // 0x0
	bool ServerOK; // 0x4
	int64_t PlayersOK; // 0x8
};

struct FAdminIncrementLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CatalogVersion; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemId; // 0x28
};

struct FLocalizationGetLanguageListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMultiplayerListContainerImageTagsResponse : FPlayFabResultCommon {
	FString Tags; // 0x8
};

struct FPWCollection {
	FPWCollectionData Data; // 0x0
};

struct FPWCloudSpecialItemsEntry {
	FString ID; // 0x0
	int32_t v1; // 0x10
	int32_t v2; // 0x14
	int32_t V3; // 0x18
	int32_t V4; // 0x1c
};

struct FServerRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FAdminGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FServerGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FServerSetGameServerInstanceDataRequest : FPlayFabRequestCommon {
	FString GameServerData; // 0x8
	FString LobbyId; // 0x18
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FCharacterSetup {
	ECharacClassType CharacterClass; // 0x0
	TArray<FCharacterPart> Parts; // 0x8
	TArray<FCharacterProp> Props; // 0x18
	USkeletalMesh* BaseMesh; // 0x28
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FCloudScriptUnregisterFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
};

struct FServerGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CharacterName; // 0x8
	FString CharacterType; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString PlayFabId; // 0x30
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FCTUISoundItem {
	UISoundEnum EnumType; // 0x0
	USoundBase* Sound; // 0x8
};

struct FSocialSeparatorPresenceData {
	ESlateVisibility Visibility; // 0x0
	FLinearColor Color; // 0x4
};

struct FClientGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FServerGetLeaderboardAroundUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FClientUnlinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FAkXboxOneGDKApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FPWGetLeaderboardResult {
	TArray<FPWLeaderboardEntry> Leaderboard; // 0x0
	uint32_t Version; // 0x10
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticName; // 0x20
};

struct FNiagaraPerfBaselineStats {
	float PerInstanceAvg_GT; // 0x0
	float PerInstanceAvg_RT; // 0x4
	float PerInstanceMax_GT; // 0x8
	float PerInstanceMax_RT; // 0xc
};

struct FServerGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FInvisibilityData {
	float Duration; // 0x0
	bool RevealEnemyWhenClose; // 0x4
	float RevealConeDistance; // 0x8
	float RevealConeAngle; // 0xc
	float RevealSphereDistance; // 0x10
	float RevealOnDistanceTriggerTime; // 0x14
	bool RevealWhenDamaged; // 0x18
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FMaterialOverride {
	FName MaterialSlotName; // 0x0
	TSoftObjectPtr<UMaterialInterface> Material; // 0x8
};

struct FClientPurchaseItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ItemId; // 0x30
	int32_t Price; // 0x40
	FString StoreId; // 0x48
	FString VirtualCurrency; // 0x58
};

struct FChaosClothWeightedValue {
	float Low; // 0x0
	float High; // 0x4
};

struct FCTTreasureGameModeEventSet {
	TArray<FCTTreasureGameModeEvent> Events; // 0x0
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FWeaponDatas {
	EWeaponType WeaponEnum; // 0x0
	EAbility WeaponAbility; // 0x1
	AActor* ObjectClass; // 0x8
	EDamageType DamageType; // 0x10
	float HealthDamageValue; // 0x14
	float ShieldDamageValue; // 0x18
	float TickDPS; // 0x1c
	float TickRate; // 0x20
	TArray<EWeaponType> InducedWeaponDamages; // 0x28
	UTexture2D* KillfeedIconTexture; // 0x38
	UTexture2D* HUDTexture; // 0x40
	FWeaponDamageFeedBack Feedback; // 0x48
	USoundBase* SpawnSound; // 0x90
	USoundBase* ShieldExplosionSound; // 0x98
	USoundBase* ExplosionSound; // 0xa0
	USoundBase* DeniedSound; // 0xa8
};

struct FServerGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
	FString PlayFabId; // 0x28
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FCTPlayerId {
	int8_t CTPlayerId; // 0x0
	AActor* Actor; // 0x8
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

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FClientStartGameResult : FPlayFabResultCommon {
	FString Expires; // 0x8
	FString LobbyId; // 0x18
	FString Password; // 0x28
	FString ServerIPV4Address; // 0x38
	FString ServerIPV6Address; // 0x48
	int32_t ServerPort; // 0x58
	FString ServerPublicDNSName; // 0x60
	FString Ticket; // 0x70
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

struct FCTDisplaySetGenericCamera {
	ECTDisplaySetType EnumType; // 0x0
	ACameraActor* Camera; // 0x8
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FClientCurrentGamesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString GameMode; // 0x18
	ERegion Region; // 0x28
	FString StatisticName; // 0x30
	UPlayFabJsonObject* TagFilter; // 0x40
};

struct FCTLocalSaveContent {
	FCTShopPackSaleSave ShopPackSales; // 0x0
	FCTLeavePenaltyLocalNotification LeavePenaltyNotification; // 0x10
};

struct FPPVSkyLightOverride {
	ASkyLight* Light; // 0x0
	bool bOverrideIntensity; // 0x8
	float Intensity; // 0xc
	bool bOverrideColor; // 0x10
	FLinearColor Color; // 0x14
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FMultiplayerGetQueueStatisticsResult : FPlayFabResultCommon {
	int32_t NumberOfPlayersMatching; // 0x8
	UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FMultiplayerListMultiplayerServersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FServerRegisterGameRequest : FPlayFabRequestCommon {
	FString Build; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString GameMode; // 0x20
	FString LobbyId; // 0x30
	ERegion Region; // 0x40
	FString ServerIPV4Address; // 0x48
	FString ServerIPV6Address; // 0x58
	FString ServerPort; // 0x68
	FString ServerPublicDNSName; // 0x78
	UPlayFabJsonObject* Tags; // 0x88
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FServerEvaluateRandomResultTableResult : FPlayFabResultCommon {
	FString ResultItemId; // 0x8
};

struct FCTCollectionEventData {
	int32_t ClicksOnDiscovered; // 0x0
	int32_t ClicksOnPossessed; // 0x4
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeRequest : FPlayFabRequestCommon {
	FString ChangeDescription; // 0x8
	TArray<UPlayFabJsonObject*> Changes; // 0x18
	FString ContactEmail; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString Notes; // 0x40
	FString StartDate; // 0x50
};

struct FProfilesGetEntityProfilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool DataAsObject; // 0x10
	TArray<UPlayFabJsonObject*> Entities; // 0x18
};

struct FServerWriteServerPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString PlayFabId; // 0x28
	FString Timestamp; // 0x38
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FCTWeeklyQuestChestRTC {
	ECTDistinctionType EnumType; // 0x0
	ULevelSequence* RTC; // 0x8
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FServerGrantItemsToCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FServerGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayFabId; // 0x18
};

struct FLiveLinkConnectMessage {
	int32_t LiveLinkVersion; // 0x0
};

struct FMegaBoostData {
	USoundBase* MegaBoostStartSound; // 0x0
};

struct FAdminSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FCTPingZoneInfo {
	FString LocalizationId; // 0x0
};

struct FCTSmoothFTransform {
	float Margin; // 0x0
	float MarginAngle; // 0x4
	SmoothType Type; // 0x8
	FTransform Target; // 0x10
	float SmoothLocation; // 0x40
	float SmoothRotation; // 0x44
	float SmoothScale; // 0x48
};

struct FClientGetFriendLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	int32_t MaxResultsCount; // 0x14
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* ProfileConstraints; // 0x28
	FString StatisticName; // 0x30
	bool UseSpecificVersion; // 0x40
	int32_t Version; // 0x44
	FString XboxToken; // 0x48
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

struct FAdminUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FCTPlayerQuests {
	FString Mode; // 0x0
	int32_t StartDate; // 0x10
	int32_t EndDate; // 0x14
	TMap<FName, FCTPlayerQuest> QuestsInProgress; // 0x18
	TArray<ECTDailyContractState> WonDailyQuestFromStartOfTheWeek; // 0x68
	int32_t DebugDTime; // 0x78
};

struct FGroupsCreateGroupResponse : FPlayFabResultCommon {
	FString AdminRoleId; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
	int32_t ProfileVersion; // 0x50
	UPlayFabJsonObject* Roles; // 0x58
};

struct FServerRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
};

struct FCollisionTimestamp : FTableRowBase {
	FVector Pos; // 0x8
	float Severity; // 0x14
	FDateTime Date; // 0x18
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FClientValidateWindowsReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FCTMatchTypeDescriptor {
	FCTTeamsInfo TeamsInfo; // 0x0
	TArray<ECTMatchType> MatchType; // 0x8
};

struct FMultiplayerGetServerBackfillTicketResult : FPlayFabResultCommon {
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	int32_t GiveUpAfterSeconds; // 0x28
	FString MatchID; // 0x30
	TArray<UPlayFabJsonObject*> Members; // 0x40
	FString QueueName; // 0x50
	UPlayFabJsonObject* ServerDetails; // 0x60
	FString Status; // 0x68
	FString TicketId; // 0x78
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FPWLiveEvents {
	int32_t ServerDate; // 0x0
	TArray<FPWBaseLiveEvent> ListEvents; // 0x8
	TArray<FPWLiveNotif> ListNotifs; // 0x18
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
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

struct FClientReportPlayerClientRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReporteeId; // 0x20
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FDataGetFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FRenownData {
	ERenownType Type; // 0x0
	int32_t RenownLevelToReach; // 0x4
	TArray<FRenownLevelData> RenownLevelData; // 0x8
	TSoftObjectPtr<UTexture2D> RenownTexture; // 0x18
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FCloudScriptRegisterHttpFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
	FString FunctionUrl; // 0x20
};

struct FCharacterProp {
	FString AssetString; // 0x0
	FString ItemUID; // 0x10
	UCTPropDataAsset* Prop; // 0x20
	EPropType PropType; // 0x28
	TArray<UCTPropModifierDataAsset*> Modifiers; // 0x30
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FCTRandomProfile {
	ERandomProfile EnumType; // 0x0
	TArray<FCTRandomProbability> Table; // 0x8
	float Sum; // 0x28
};

struct FServerSendCustomAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
	FString Username; // 0x30
};

struct FServerLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString PlayFabId; // 0x18
	FString XboxToken; // 0x28
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FClientLoginWithEmailAddressRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString Password; // 0x28
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FClientLinkGameCenterAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString GameCenterId; // 0x18
	FString PublicKeyUrl; // 0x28
	FString Salt; // 0x38
	FString Signature; // 0x48
	FString Timestamp; // 0x58
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FCTBeastSnapshot {
	FVector Pos; // 0x0
	FQuat Rot; // 0x10
	FVector2D LeftPad; // 0x20
	float Speed; // 0x28
	float NetTime; // 0x2c
	bool IsBoost; // 0x30
	bool IsPowerBoost; // 0x31
	bool IsBrake; // 0x32
	FQuat MoveRot; // 0x40
};

struct FCTCrossedWidgetOpacityData {
	TSet<UWidget*> IntersectingWidgets; // 0x10
};

struct FServerUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
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

struct FGameSave {
	EGameOutcome Result; // 0x0
	float Score; // 0x4
};

struct FExperimentationGetExperimentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMultiplayerEnableMultiplayerServersForTitleResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FServerGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FAdminModifyServerBuildResult : FPlayFabResultCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
	EGameBuildStatus Status; // 0x60
	FString Timestamp; // 0x68
	FString TitleId; // 0x78
};

struct FAnimNode_LiveLinkPose : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	FLiveLinkSubjectName LiveLinkSubjectName; // 0x20
	ULiveLinkRetargetAsset* RetargetAsset; // 0x28
	ULiveLinkRetargetAsset* CurrentRetargetAsset; // 0x30
};

struct FDataFinalizeFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FAdminCreateActionsOnPlayerSegmentTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FCTRewardChanceDistribution {
	TArray<float> RewardChanceDistribution; // 0x0
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FAdminDeletePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString SecretKey; // 0x8
};

struct FMultiplayerUpdateBuildRegionsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> BuildRegions; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FHoudiniGeoPartObject {
	int32_t AssetId; // 0x0
	FString AssetName; // 0x8
	int32_t ObjectId; // 0x18
	FString ObjectName; // 0x20
	int32_t GeoId; // 0x30
	int32_t PartId; // 0x34
	FString PartName; // 0x38
	bool bHasCustomPartName; // 0x48
	TArray<FString> SplitGroups; // 0x50
	FTransform TransformMatrix; // 0x60
	FString NodePath; // 0x90
	EHoudiniPartType Type; // 0xa0
	EHoudiniInstancerType InstancerType; // 0xa1
	FString VolumeName; // 0xa8
	int32_t VolumeTileIndex; // 0xb8
	bool bIsVisible; // 0xbc
	bool bIsEditable; // 0xbd
	bool bIsTemplated; // 0xbe
	bool bIsInstanced; // 0xbf
	bool bHasGeoChanged; // 0xc0
	bool bHasPartChanged; // 0xc1
	bool bHasTransformChanged; // 0xc2
	bool bHasMaterialsChanged; // 0xc3
	TArray<FHoudiniMeshSocket> AllMeshSockets; // 0x210
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

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FAdminGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FPWPlayerEggQuest {
	FString ID; // 0x0
	int32_t V; // 0x10
};

struct FServerGetServerCustomIDsFromPlayFabIDsRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
};

struct FServerGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	FString PlayFabId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FAdminRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FLiveLinkInstanceProxy : FAnimInstanceProxy {
	FAnimNode_LiveLinkPose PoseNode; // 0x770
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FClientGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FCTLanternSetup {
	ECTLanternContent ContentType; // 0x0
	UPopcornFXEffect* PKFXEffect; // 0x8
	UStaticMesh* VisualMesh; // 0x10
	UStaticMesh* SamplerMesh; // 0x18
};

struct FLastTeamStandingTeam {
	int32_t iRemainingPlayerOnGameEnd; // 0x0
	float fStandingTime; // 0x4
};

struct FAnchorRPCData {
	FVector Start; // 0x0
	FVector End; // 0xc
	float Width; // 0x18
};

struct FCameraShakeStartParams {
	bool bIsRestarting; // 0x0
};

struct FMatchmakerPlayerJoinedRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FPWClassStats {
	FString ID; // 0x0
	int32_t Time; // 0x10
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
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

struct FJoinabilitySettings {
	FName SessionName; // 0x0
	bool bPublicSearchable; // 0x8
	bool bAllowInvites; // 0x9
	bool bJoinViaPresence; // 0xa
	bool bJoinViaPresenceFriendsOnly; // 0xb
	int32_t MaxPlayers; // 0xc
	int32_t MaxPartySize; // 0x10
};

struct FPWCloudCatalogEntry {
	FString ID; // 0x0
	int32_t SC; // 0x10
	int32_t HC; // 0x14
	int32_t RM; // 0x18
	FString Rarity; // 0x20
	FString Type; // 0x30
	FString PlatformID; // 0x40
	FString DLCPlatformID; // 0x50
	FPWCloudCatalogContentEntry Content; // 0x60
};

struct FMultiplayerGetAssetUploadUrlResponse : FPlayFabResultCommon {
	FString AssetUploadUrl; // 0x8
	FString Filename; // 0x18
};

struct FServerUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FServerRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FCTOffscreenCircle {
	FVector2D Center; // 0x0
	float Radius; // 0x8
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
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

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FPWLiveNotif {
	FString ID; // 0x0
	int32_t DateUTC; // 0x10
	FString EventId; // 0x18
	FString EventTxtID; // 0x28
	FString RewardId; // 0x38
};

struct FAdminSetTitleDataAndOverridesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> KeyValues; // 0x8
	FString OverrideLabel; // 0x18
};

struct FServerAuthenticateSessionTicketRequest : FPlayFabRequestCommon {
	FString SessionTicket; // 0x8
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FCloudScriptListFunctionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FInsightsInsightsGetOperationStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OperationId; // 0x10
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FCTPlayerXPBooster {
	FString UID; // 0x0
	int32_t Percent; // 0x10
	int32_t TPercent; // 0x14
	int32_t FTPercent; // 0x18
};

struct FCTCustoItemFilter {
	EBodyPartTarget Target; // 0x0
	EBodyPart Slot; // 0x1
	USkeletalMesh* BaseMesh; // 0x8
	EPropType PropType; // 0x10
};

struct FClientPayForPurchaseResult : FPlayFabResultCommon {
	int32_t CreditApplied; // 0x8
	FString OrderId; // 0x10
	FString ProviderData; // 0x20
	FString ProviderToken; // 0x30
	FString PurchaseConfirmationPageURL; // 0x40
	FString PurchaseCurrency; // 0x50
	int32_t PurchasePrice; // 0x60
	ETransactionStatus Status; // 0x64
	UPlayFabJsonObject* VCAmount; // 0x68
	UPlayFabJsonObject* VirtualCurrency; // 0x70
};

struct FMenuItem {
	FString DisplayString; // 0x0
	FString ItemString; // 0x10
};

struct FEggItem {
	FString ItemUID; // 0x0
	FText ItemName; // 0x10
	UTexture2D* Image; // 0x28
	float XPNeeded; // 0x30
	float XPBonus; // 0x34
	FString Skin; // 0x38
	ECharacClassType ClassType; // 0x48
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
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

struct FClientGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FSliderData {
	float SliderMin; // 0x0
	float SliderMax; // 0x4
	float SliderMinimalStep; // 0x8
	ESliderValueType ValueType; // 0xc
	ESliderListenMode ListenMode; // 0x10
	UCurveFloat* SpeedCurve; // 0x18
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FPWQuestRewards {
	TArray<FPWOneQuestReward> EndWeek; // 0x0
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FAdminRunTaskResult : FPlayFabResultCommon {
	FString TaskInstanceId; // 0x8
};

struct FNiagaraDebuggerOutlinerUpdate {
	FNiagaraOutlinerData OutlinerData; // 0x0
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FAdminAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FClientUnlinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDeviceId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString MasterPlayerAccountIds; // 0x10
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FCTImportedItemBase : FTableRowBase {
	bool Default; // 0x8
	TArray<ECharacClassType> CharacClasses; // 0x10
	EPWRarity Rarity; // 0x20
};

struct FPPVDirectionalLightOverride {
	ADirectionalLight* Light; // 0x0
	bool bOverrideIntensity; // 0x8
	float Intensity; // 0xc
	bool bOverrideColor; // 0x10
	FLinearColor Color; // 0x14
	bool bOverrideTemperature; // 0x24
	float Temperature; // 0x28
	bool bOverrideVolumetricScatteringIntensity; // 0x2c
	float VolumetricScatteringIntensity; // 0x30
	bool bOverrideLightFunctionFadeDistance; // 0x34
	float LightFunctionFadeDistance; // 0x38
	bool bOverrideDisabledBrightness; // 0x3c
	float DisabledBrightness; // 0x40
	bool bOverrideContactShadowLength; // 0x44
	float ContactShadowLength; // 0x48
	bool bOverrideContactShadowLengthInWS; // 0x4c
	char ContactShadowLengthInWS : 1; // 0x50
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

struct FClientListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FServerRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FAnchorPoint {
	AActor* Actor; // 0x0
	FVector Start; // 0x8
	FVector End; // 0x14
	FVector Normal; // 0x20
	float Sign; // 0x2c
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FServerGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FServerGetLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MaxResultsCount; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x18
	int32_t StartPosition; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
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

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FClientGetTradeStatusResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FClientOpenTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHardwareCodecLowLatencyMode; // 0x38
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FExperimentationGetExclusionGroupsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FClientUnlinkKongregateAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FCTNetPlayerAccount {
	FCTPlayerXPBooster ActiveXPBooster; // 0x0
	FCTPlayerSetup PlayerSetup; // 0x20
	FPWPlayerStats PlayerStatistics; // 0x90
};

struct FAdminUpdateSegmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* SegmentModel; // 0x8
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FCTEndMatchSummarySectionData {
	FString TitleLocalizationNameSpace; // 0x0
	FString TitleLocalizationID; // 0x10
	UCTEndMatchSectionWidget* SectionWidgetClass; // 0x20
	UCTEndMatchSummarySectionController* SectionControllerClass; // 0x28
	TArray<FCTEndMatchSummaryRowData> Rows; // 0x30
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

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
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

struct FPlayerPositionImportStruct : FTableRowBase {
	FString PlayerName; // 0x8
	int32_t Team; // 0x18
	TArray<FVector> PlayerPositions; // 0x20
	TArray<float> PlayerPositionsTimes; // 0x30
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FPWCloudShopEntry {
	FString ID; // 0x0
	int32_t SC; // 0x10
	int32_t HC; // 0x14
	int32_t RM; // 0x18
	int32_t LC; // 0x1c
	FString Section; // 0x20
	FString Name; // 0x30
	int32_t Date; // 0x40
	int32_t Slot; // 0x44
	int32_t Stickers; // 0x48
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

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FClientGetPaymentTokenRequest : FPlayFabRequestCommon {
	FString TokenProvider; // 0x8
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName InputName; // 0x4
	FName ExpressionName; // 0xc
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

struct FServerSendEmailFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EmailTemplateId; // 0x10
	FString PlayFabId; // 0x20
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FServerDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FCTImportedLocalization : FTableRowBase {
	FString Key; // 0x8
	FString DefaultString; // 0x18
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FSocialPresenceData {
	FSocialTextPresenceData StatusTextData; // 0x0
	FSocialTextPresenceData ExplanationTextData; // 0x60
	FSocialSeparatorPresenceData SeparatorData; // 0xc0
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FPWDate {
	int32_t TDuration; // 0x0
	int32_t TDateMS; // 0x4
	int32_t TDateS; // 0x8
};

struct FServerSendPushNotificationFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PushNotificationTemplateId; // 0x10
	FString Recipient; // 0x20
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
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

struct FClientLoginWithGameCenterRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerId; // 0x30
	FString PlayerSecret; // 0x40
	FString PublicKeyUrl; // 0x50
	FString Salt; // 0x60
	FString Signature; // 0x70
	FString Timestamp; // 0x80
};

struct FClientExecuteCloudScriptResult : FPlayFabResultCommon {
	int32_t APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int32_t ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int32_t HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int32_t MemoryConsumedBytes; // 0x54
	int32_t ProcessorTimeSeconds; // 0x58
	int32_t Revision; // 0x5c
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FAdminCreateInsightsScheduledScalingTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FServerSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FCTImportedEggItem : FCTImportedItemBase {
	FString DragonPackageUID; // 0x28
	FString AssetString; // 0x38
	TArray<FString> BabyAssetStringArray; // 0x48
	float XPNeeded; // 0x58
	float XPBonus; // 0x5c
	float XPPercentage; // 0x60
	TArray<FName> Quests; // 0x68
	TArray<int32_t> QuestThreshIndices; // 0x78
};

struct FAdminRunTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Identifier; // 0x10
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FProfilesSetProfileLanguageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	int32_t ExpectedVersion; // 0x18
	FString Language; // 0x20
};

struct FCTRandomProbability {
	ERandomPickup EnumType; // 0x0
	float Probability; // 0x4
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

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
	char bOverrideGlobalBudgetCullingSettings : 1; // 0x48
};

struct FAdminBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FAdminListOpenIdConnectionResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Connections; // 0x8
};

struct FServerGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FServerNotifyMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FServerUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString KeyItemInstanceId; // 0x40
	FString PlayFabId; // 0x50
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FPopup {
	EPopupType Type; // 0x0
	UCTInfoPopupController* WidgetController; // 0x8
};

struct FRenownLevelData {
	ERenownLevelType RenownLevel; // 0x0
	int32_t LevelToReach; // 0x4
	TSoftObjectPtr<UTexture2D> LevelTexture; // 0x8
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
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

struct FAdminModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FAdminGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
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

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FClientGetPlayFabIDsFromTwitchIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FClientCancelTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FClientGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FRoundDetails {
	float Duration; // 0x0
	ERoundType RoundType; // 0x4
	ERoundNewControl RoundNews; // 0x5
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FServerEvaluateRandomResultTableRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableId; // 0x18
};

struct FCTMatchInfo {
	FString UID; // 0x0
	FString ServerId; // 0x10
	ECTPlayMode Mode; // 0x20
	ECTMatchType Type; // 0x21
	EMapType Map; // 0x22
	int32_t ServerVersion; // 0x24
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
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

struct FPWOneLevelContent {
	int32_t L; // 0x0
	int32_t XP; // 0x4
	FString r1; // 0x8
	FString r2; // 0x18
	int32_t r2c; // 0x28
	FString b1; // 0x30
	int32_t b1c; // 0x40
};

struct FCTPckContent {
	TArray<FCTPckItemLot> Items; // 0x0
	EPWRarity Rarity; // 0x10
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FAdminUpdatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	bool Disabled; // 0x8
	FString FriendlyName; // 0x10
	FString SecretKey; // 0x20
};

struct FBerserkTypeSettings {
	EBerserkType Type; // 0x0
	float Duration; // 0x4
	FLinearColor FXColor; // 0x8
	FLinearColor BodyMainColor; // 0x18
	FLinearColor BodySecondaryColor; // 0x28
	FLinearColor BodyFresnelColor; // 0x38
	FLinearColor BodySSSColor; // 0x48
	FLinearColor LightColor; // 0x58
	EWeaponType Fireball; // 0x68
	EWeaponType Flamethrower; // 0x69
	EWeaponType DirectFlamethrower; // 0x6a
	float BerserkFireballRefillBonusRatio; // 0x6c
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FClientGetPaymentTokenResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString ProviderToken; // 0x18
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FProfilesGetEntityProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool DataAsObject; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
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

struct FContextMenuSettings {
	bool bOverlapOtherUI; // 0x0
};

struct FOptionsSectionTitleData {
	UCTOptionsSectionTitleWidget* TitleClass; // 0x0
};

struct FRankDisplayData {
	UTexture2D* Texture; // 0x0
	UTexture2D* BigTexture; // 0x8
	FString Text; // 0x10
	FSlateColor TextColor; // 0x20
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FGroupsListGroupBlocksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FPWServerPort {
	FString Name; // 0x0
	int32_t Number; // 0x10
	EPWServerPortProtocol Protocol; // 0x14
};

struct FClientUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FThunderMarkData {
	float MarkDuration; // 0x0
	float MarkDamageThreshold; // 0x4
	UNiagaraSystem* DebuffParticles; // 0x8
	USoundBase* DebuffStartSound; // 0x10
	UNiagaraSystem* BoltParticles; // 0x18
	USoundBase* BoltSound; // 0x20
};

struct FClientSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString VirtualCurrency; // 0x18
};

struct FClientUnlinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FServerSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientRewardAdActivityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlacementId; // 0x10
	FString RewardId; // 0x20
};

struct FServerGetServerCustomIDsFromPlayFabIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FPartyBeaconCrossplayPlatformMapping {
	FString PlatformName; // 0x0
	FString PlatformType; // 0x10
};

struct FPWQuestsContent {
	TMap<FString, FPWOneQuestContent> Data; // 0x0
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FMultiplayerListPartyQosServersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FVacuumTunnelSettings {
	float Radius; // 0x0
	bool bSnapTarget; // 0x4
	float EnergyRefillSpeed; // 0x8
	FTSettings_AirColumn AirColumn; // 0x10
	FTSettings_Tunnel Tunnel; // 0x80
	bool bShowMeshes; // 0xa0
	float SampleDistance; // 0xa4
};

struct FPWMatchOverallResult {
	int32_t Duration; // 0x0
	TArray<FPWMatchTeamResult> Teams; // 0x8
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FCTNemesisData {
	ACTGameState* GS; // 0x0
	TArray<FCTNemesisPlayerData> Matrix; // 0x8
	ECTNemesisMode Mode; // 0x18
	int32_t StartDeltaFrag; // 0x1c
	int32_t EndDeltaFrag; // 0x20
	bool bEnabled; // 0x24
};

struct FAdminRefundPurchaseResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FServerDeregisterGameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
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

struct FAdminDeleteMasterPlayerAccountRequest : FPlayFabRequestCommon {
	FString MetaData; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FHitScanTrace {
	FVector_NetQuantize TraceTo; // 0x0
	EHitEnum HitType; // 0xc
};

struct FServerDeletePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FAdminGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
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

struct FDataSetObjectsResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	TArray<UPlayFabJsonObject*> SetResults; // 0x10
};

struct FServerGetStoreItemsServerRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
	FString StoreId; // 0x30
};

struct FClientGetAdPlacementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AdPlacements; // 0x8
};

struct FNiagaraBakerTextureSettings {
	FName OutputName; // 0x0
	FNiagaraBakerTextureSource SourceBinding; // 0x8
	char bUseFrameSize : 1; // 0x10
	FIntPoint FrameSize; // 0x14
	FIntPoint TextureSize; // 0x1c
	UTexture2D* GeneratedTexture; // 0x28
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

struct FServerSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
	FString Tags; // 0x28
};

struct FClientGetTradeStatusRequest : FPlayFabRequestCommon {
	FString OfferingPlayerId; // 0x8
	FString TradeId; // 0x18
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FClientAddUsernamePasswordRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString Password; // 0x20
	FString Username; // 0x30
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FCTLootPackRewardImage {
	ECTRewardType EnumType; // 0x0
	TSoftObjectPtr<UTexture2D> Texture; // 0x8
};

struct FPWOneCollectionProgress {
	TMap<int32_t, FString> Finish; // 0x0
	TMap<FString, FPWOneColItemProgress> Progress; // 0x50
};

struct FClientAddFriendResult : FPlayFabResultCommon {
	bool Created; // 0x8
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FServerGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FClientConsumeMicrosoftStoreEntitlementsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
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

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FCTMMRUpdateTeam {
	int32_t TeamId; // 0x0
	int32_t Score; // 0x4
	TArray<FCTMMRUpdatePlayer> Players; // 0x8
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FExperimentationCreateExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	FString EndDate; // 0x20
	FString ExclusionGroupId; // 0x30
	int32_t ExclusionGroupTrafficAllocation; // 0x40
	EExperimentType ExperimentType; // 0x44
	FString Name; // 0x48
	FString SegmentId; // 0x58
	FString StartDate; // 0x68
	FString TitlePlayerAccountTestIds; // 0x78
	TArray<UPlayFabJsonObject*> Variants; // 0x88
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FClientUnlinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString NintendoSwitchDeviceId; // 0x10
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FCTCharacClassBaby {
	USkeletalMesh* BabyDragonBaseMesh; // 0x0
	UAnimationAsset* AdultAnimation; // 0x8
};

struct FLevelSubList {
	TArray<FName> LevelNames; // 0x0
};

struct FShopPackageDatas : FCTShopPackageDataInterface {
	FString ReferenceLicense; // 0x8
	TArray<FString> Licences; // 0x18
	FItemsResourceDatas ItemResources; // 0x28
	FString NameString; // 0x40
	FString DescriptionString; // 0x50
	UTexture2D* DescriptionImage; // 0x60
	int32_t GoldPrice; // 0x68
	int32_t GemsPrice; // 0x6c
	int32_t EurosPrice; // 0x70
	int32_t GoldEarned; // 0x74
	int32_t GemsEarned; // 0x78
	ECharacClassType eCharacClass; // 0x7c
	TSoftObjectPtr<UTexture2D> Image; // 0x80
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FSocialTextPresenceData {
	FLocalizationData Localization; // 0x0
	ESlateVisibility Visibility; // 0x20
	FLinearColor TextColor; // 0x24
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FServerGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FCTMatchLockReason {
	FDateTime UnlockBackendUTC; // 0x0
	ECTMatchLockReason Reason; // 0x8
	FString SParam; // 0x10
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FMultiplayerGetAssetDownloadUrlResponse : FPlayFabResultCommon {
	FString AssetDownloadUrl; // 0x8
	FString Filename; // 0x18
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
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

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FEventsWriteEventsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Events; // 0x10
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FLiveLinkSubSectionData {
	TArray<FLiveLinkPropertyData> Properties; // 0x0
};

struct FMultiplayerJoinMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Member; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FCTPlayerSetup {
	TArray<FCTPlayerCharacClassSetup> CharacClassSetups; // 0x0
	ECharacClassType MainClass; // 0x10
	FString CurrentTitleUID; // 0x28
	FString CurrentProfileWallpaperUID; // 0x38
	FString CurrentPlayerIconUID; // 0x48
	FString CurrentFanionUID; // 0x58
	ECTPlayMode LastPlayModeLaunched; // 0x68
	ECharacClassType LastCharacClassUsed; // 0x69
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

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
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

struct FCTBreadcrumb {
	FString UID; // 0x0
	ECTBreadcrumbType Type; // 0x10
	bool bIsActive; // 0x11
	FString PathCache; // 0x18
};

struct FMultiplayerListPartyQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FServerGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FPopcornFXFieldPath {
	uint32_t BaseObjectUID; // 0x0
	FString FieldName; // 0x8
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
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

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FExperimentationGetLatestScorecardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FAdminGetTaskInstancesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Summaries; // 0x8
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

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
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

struct FPWNews {
	int32_t NextUpdate; // 0x0
	int32_t Date; // 0x4
	TArray<FPWOneNews> News; // 0x8
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
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

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	int32_t IssuerId; // 0x24
	FString RedirectUri; // 0x28
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FClientRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
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

struct FGroupsCreateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
	FString RoleName; // 0x28
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FAdminGetContentUploadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FGroupsIsMemberResponse : FPlayFabResultCommon {
	bool IsMember; // 0x8
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FBlastCastFXParams {
	FLinearColor RGBA; // 0x0
	float LightIntensity; // 0x10
	float LightRadius; // 0x14
	bool LightEnable; // 0x18
	float HDR; // 0x1c
	float Scale; // 0x20
	float DurationTrail; // 0x24
	float AddIntensityToTrail; // 0x28
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

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x150
	int32_t LODThreshold; // 0x160
	FName SourceSocketName; // 0x164
	FName PivotSocketName; // 0x16c
	FVector LookAtLocation; // 0x174
	FVector SocketAxis; // 0x180
	float Alpha; // 0x18c
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FInsightsInsightsGetOperationStatusResponse : FPlayFabResultCommon {
	FString Message; // 0x8
	FString OperationCompletedTime; // 0x18
	FString OperationId; // 0x28
	FString OperationLastUpdated; // 0x38
	FString OperationStartedTime; // 0x48
	FString OperationType; // 0x58
	int32_t OperationValue; // 0x68
	FString Status; // 0x70
};

struct FCTWorkshopStep {
	FString ObjectiveLocId; // 0x0
	FString ObjectiveLocTab; // 0x10
	FString HintLocId; // 0x20
	FString HintLocTab; // 0x30
};

struct FGoldScoringDatas {
	float GoldWealthyTheshold; // 0x0
	float GoldTakenMin; // 0x4
	float GoldTakenMax; // 0x8
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

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAdminGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
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

struct FServerConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemInstanceId; // 0x28
	FString PlayFabId; // 0x38
};

struct FGroupsGetGroupResponse : FPlayFabResultCommon {
	FString AdminRoleId; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
	int32_t ProfileVersion; // 0x50
	UPlayFabJsonObject* Roles; // 0x58
};

struct FGenericTeamId {
	char TeamId; // 0x0
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FPWCloudSquadMinimal {
	FString MasterID; // 0x0
	FString Type; // 0x10
	FString Lock; // 0x20
	TArray<FPWSquadMemberMinimal> Members; // 0x30
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FLocalizationData {
	FString LTab; // 0x0
	FString LKey; // 0x10
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FPopcornFXSamplerDesc {
	FName m_SamplerFName; // 0x0
	FName m_AttributeCategoryName; // 0x8
	EPopcornFXAttributeSamplerType m_SamplerType; // 0x10
	AActor* m_AttributeSamplerActor; // 0x18
	FName m_AttributeSamplerComponentProperty; // 0x20
};

struct FExperimentationStopExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FQuartzTransportTimeStamp {
	int32_t Bars; // 0x0
	int32_t Beat; // 0x4
	float BeatFraction; // 0x8
	float Seconds; // 0xc
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FAdminAddServerBuildRequest : FPlayFabRequestCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	UPlayFabJsonObject* CustomTags; // 0x48
	FString ExecutablePath; // 0x50
	int32_t MaxGamesPerHost; // 0x60
	int32_t MinFreeGameSlots; // 0x64
};

struct FCTDistinction {
	ECTDistinctionType EnumType; // 0x0
	TArray<FCTDistinctionReward> DistinctionRewards; // 0x8
	int32_t RequiredRecommendationCount; // 0x18
	FCTMultiscaleTextureAsset Image; // 0x20
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

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FCTEventGaugeSlotTransforms {
	FSlateBrush SlotBrush; // 0x0
	FVector2D SlotSize; // 0x88
	FMargin SlotPadding; // 0x90
};

struct FClientUnlinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceID; // 0x10
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
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

struct FPWRedeemInfos {
	uint32_t Type; // 0x0
	uint32_t SubType; // 0x4
	FString Key; // 0x8
	FString PackId; // 0x18
	FString PlayerId; // 0x28
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FFanionArray {
	TArray<ACTFanionPropMesh*> Array; // 0x0
};

struct FCTTeamDTO {
	int32_t TeamId; // 0x0
	TArray<FCTPlayerDTO> Players; // 0x8
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
	bool bIsDeterminismFence; // 0x18
};

struct FGroupsListMembershipRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FClientConsumeXboxEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString XboxToken; // 0x20
};

struct FClientLinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FacebookInstantGamesSignature; // 0x10
	bool ForceLink; // 0x20
};

struct FServerGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
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

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FServerSetGameServerInstanceTagsRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	UPlayFabJsonObject* Tags; // 0x18
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
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

struct FSoundBankEntry {
	ECTSoundBankEnum SoundID; // 0x0
	USoundBase* Sound; // 0x8
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

struct FTSettings_Tunnel {
	float ExtraSpeedMax; // 0x0
	float TotalSpeedMax; // 0x4
	float SmoothAcceleration; // 0x8
	float SlowDownAtEndRatio; // 0xc
	float SlowDownAtEndSpeed; // 0x10
	float AfterExitSmoothToNormalSpeed; // 0x14
	AActor* FXClass; // 0x18
};

struct FClientGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	UPlayFabJsonObject* ProfileConstraints; // 0x18
	FString XboxToken; // 0x20
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FServerUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceUpdate; // 0x10
	FString PlayFabId; // 0x18
	TArray<UPlayFabJsonObject*> Statistics; // 0x28
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
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

struct FMultiplayerGetRemoteLoginEndpointRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString VmId; // 0x30
};

struct FCTPingData {
	ECTPingKind PingKind; // 0x4
	int8_t SenderCTPlayerId; // 0x5
	AActor* PingedTarget; // 0x8
	int8_t PingedCTPlayerId; // 0x10
	FString ZoneId; // 0x18
	FVector PingedPosition; // 0x28
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FServerUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString PlayFabId; // 0x30
};

struct FPopupFFTUESections {
	EPopupType Type; // 0x0
	FText SectionText; // 0x8
	UTexture2D* IconTexture; // 0x20
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FMultiplayerCreateBuildWithManagedContainerRequest : FPlayFabRequestCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildName; // 0x10
	EContainerFlavor ContainerFlavor; // 0x20
	UPlayFabJsonObject* CustomTags; // 0x28
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x30
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x40
	FString GameWorkingDirectory; // 0x50
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x60
	UPlayFabJsonObject* MetaData; // 0x68
	int32_t MultiplayerServerCountPerVm; // 0x70
	TArray<UPlayFabJsonObject*> Ports; // 0x78
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x88
	FString StartMultiplayerServerCommand; // 0x98
	bool UseStreamingForAssetDownloads; // 0xa8
	EAzureVmSize VmSize; // 0xa9
};

struct FCTTeamBlason {
	int32_t CTTeamId; // 0x0
	UTexture2D* WhiteBlasonTexture; // 0x8
	UMaterialInterface* BigBlueBlasonTexture; // 0x10
	TArray<UMaterialInterface*> ColoredBlasonTexture; // 0x18
	UTexture2D* DeadBlasonTexture; // 0x28
	UTexture2D* InGameBlasonTexture; // 0x30
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FPWPlayerProgress {
	FPWNewsState News; // 0x0
	TArray<FString> PendingEvents; // 0x18
	TMap<FString, FPWOneCollectionProgress> Collection; // 0x28
};

struct FAdminGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FClientGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString SessionId; // 0x10
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FMultiplayerListQosServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeAllRegions; // 0x10
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2
	char Value; // 0x3
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FClientLoginWithPlayFabRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FMultiplayerShutdownMultiplayerServerRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString SessionId; // 0x30
};

struct FAdminGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FClientLinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString NintendoSwitchDeviceId; // 0x18
};

struct FCTImportedLevellingData : FTableRowBase {
	int32_t XP_Threshold; // 0x8
	FString Reward01; // 0x10
	FString Reward02; // 0x20
	FString Reward03; // 0x30
	float RewardCommonChance; // 0x40
	float RewardRareChance; // 0x44
	float RewardEpicChance; // 0x48
	float RewardLegendChance; // 0x4c
	float RewardUniqueChance; // 0x50
	FString Bonus; // 0x58
	float BonusCommonChance; // 0x68
	float BonusRareChance; // 0x6c
	float BonusEpicChance; // 0x70
	float BonusLegendChance; // 0x74
	float BonusUniqueChance; // 0x78
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FMultiplayerCreateMatchmakingTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FClientLinkFacebookAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FMultiplayerCreateMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Creator; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	int32_t GiveUpAfterSeconds; // 0x18
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x20
	FString QueueName; // 0x30
};

struct FAdminBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	TMap<FString, FString> PropertySetterParameterDefaults; // 0x78
	FNiagaraVariable WritableValue; // 0xc8
};

struct FAdminGetContentUploadUrlRequest : FPlayFabRequestCommon {
	FString ContentType; // 0x8
	FString Key; // 0x18
};

struct FAbility {
	EAbility AbilityEnum; // 0x0
	UCTAbility* Ability; // 0x8
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FActorLayer {
	FName Name; // 0x0
};

struct FCollisionList : FTableRowBase {
	TArray<FCollisionTimestamp> Collisions; // 0x8
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FPopupData {
	EPopupType Type; // 0x0
	EPopupCategory Category; // 0x1
	EPopupButtonsStyle ButtonsStyle; // 0x2
	TSoftClassPtr<UObject> WidgetClass; // 0x8
	UCTWidgetController* WidgetController; // 0x30
};

struct FPWFinalizeLoginResult {
	EPWCloudCurrency Currency; // 0x0
	FPWDate Sync; // 0x4
	int32_t MMQ; // 0x10
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FString OverrideBoundPropertyPath; // 0x0
	FFrameNumber ForcedTime; // 0x10
	ESectionEvaluationFlags Flags; // 0x18
	char bEvaluateInSequencePreRoll : 1; // 0x19
	char bEvaluateInSequencePostRoll : 1; // 0x19
};

struct FMultiplayerGetServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FCTTutorialChapter : FCTUIDLocalizedInterface {
	ECTTutorialChapter EnumType; // 0x8
	TSoftObjectPtr<UMediaSource> Source; // 0x10
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FClientAddUsernamePasswordResult : FPlayFabResultCommon {
	FString Username; // 0x8
};

struct FServerRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FDeathMistData {
	float Duration; // 0x0
	float FireballReloadTimeFactor; // 0x4
};

struct FGroupsListGroupInvitationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FPWLinkInfos {
	FString CustomId; // 0x0
};

struct FClientGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
};

struct FGroupsUpdateGroupResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
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

struct FItemsDatas {
	TArray<FShopPackageDatas> ItemPackages; // 0x0
	FString NameString; // 0x10
	FString DescriptionString; // 0x20
	FString ReferenceLicense; // 0x30
	UTexture2D* Image; // 0x40
	EItemType Type; // 0x48
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FLevelConfiguration {
	TArray<UCTAdditionalLevelList*> LobbyLevels; // 0x0
	TArray<UCTAdditionalLevelList*> MapLevels; // 0x10
	TArray<UCTAdditionalLevelList*> AlwaysVisibleLevels; // 0x20
	TArray<UCTAdditionalLevelList*> AILevels; // 0x30
};

struct FClientGetPhotonAuthenticationTokenResult : FPlayFabResultCommon {
	FString PhotonCustomAuthenticationToken; // 0x8
};

struct FMultiplayerGetBuildResponse : FPlayFabResultCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildId; // 0x10
	FString BuildName; // 0x20
	FString BuildStatus; // 0x30
	EContainerFlavor ContainerFlavor; // 0x40
	FString ContainerRunCommand; // 0x48
	FString CreationTime; // 0x58
	UPlayFabJsonObject* CustomGameContainerImage; // 0x68
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x70
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x80
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x90
	UPlayFabJsonObject* MetaData; // 0x98
	int32_t MultiplayerServerCountPerVm; // 0xa0
	FString OsPlatform; // 0xa8
	TArray<UPlayFabJsonObject*> Ports; // 0xb8
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0xc8
	FString ServerType; // 0xd8
	FString StartMultiplayerServerCommand; // 0xe8
	bool UseStreamingForAssetDownloads; // 0xf8
	EAzureVmSize VmSize; // 0xf9
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

struct FPickupVisualData {
	ERandomPickup RandomPickup; // 0x0
	FText PickupNameText; // 0x8
	UTexture2D* Image; // 0x20
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
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

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
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

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
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

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FCTMouseAxisSetting {
	FVector2D ConstModeThresholdMinMax; // 0x0
	FVector2D AverageSpeedEnterRange; // 0x8
	FVector2D AverageSpeedExitMultRange; // 0x10
	float fSmoothDownFactor; // 0x18
};

struct FServerSavePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString AndroidPayload; // 0x8
	FString ID; // 0x18
	FString IOSPayload; // 0x28
	UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38
	FString Name; // 0x40
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FCloudScriptPostFunctionResultForScheduledTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
	UPlayFabJsonObject* ScheduledTaskId; // 0x20
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FAdminGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FPWMatchQuery {
	FString QueueName; // 0x0
	float Timeout; // 0x10
	FString MatchTicketToJoin; // 0x18
	TArray<FString> PlayersToMatchWith; // 0x28
};

struct FServerGrantItemsToCharacterRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString CharacterId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString ItemIds; // 0x40
	FString PlayFabId; // 0x50
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
};

struct FPWSessionInfo {
	FString PlayerId; // 0x0
	FString TitlePlayerId; // 0x10
	FString PlayerCenturyId; // 0x20
	FString SessionTicket; // 0x30
	FString SessionUID; // 0x40
	FString CountryCode; // 0x50
	FString City; // 0x60
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FAdminUpdateTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	UPlayFabJsonObject* Identifier; // 0x20
	bool IsActive; // 0x28
	FString Name; // 0x30
	UPlayFabJsonObject* Parameter; // 0x40
	FString Schedule; // 0x48
	EScheduledTaskType Type; // 0x58
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

struct FPlayerScoreLog : FTableRowBase {
	FString PlayerName; // 0x8
	TArray<FScoreAmount> ScoreEvents; // 0x18
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FLastTeamStandingResultScreenData {
	TArray<FLastTeamStandingTeam> Teams; // 0x0
};

struct FServerGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FClientGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
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

struct FMovieSceneDeterminismData {
	TArray<FFrameTime> Fences; // 0x0
	bool bParentSequenceRequiresLowerFence; // 0x10
	bool bParentSequenceRequiresUpperFence; // 0x11
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
};

struct FAdminGetMatchmakerGameInfoResult : FPlayFabResultCommon {
	FString BuildVersion; // 0x8
	FString EndTime; // 0x18
	FString LobbyId; // 0x28
	FString Mode; // 0x38
	FString Players; // 0x48
	ERegion Region; // 0x58
	FString ServerIPV4Address; // 0x60
	FString ServerIPV6Address; // 0x70
	int32_t ServerPort; // 0x80
	FString ServerPublicDNSName; // 0x88
	FString StartTime; // 0x98
	FString TitleId; // 0xa8
};

struct FServerRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FAdminGetMatchmakerGameInfoRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FPWFriendsList {
	TArray<FPWOneFriend> Friends; // 0x0
};

struct FAdminExportMasterPlayerDataRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FMultiplayerCreateRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ExpirationTime; // 0x20
	FString Region; // 0x30
	FString Username; // 0x40
	FString VmId; // 0x50
};

struct FAnimNode_Mirror : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	UMirrorTable* MirrorTable; // 0x20
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

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FPWPurchasePackResult {
	int32_t VCatalog; // 0x0
	int32_t VStore; // 0x4
	FString PackId; // 0x8
	TArray<FString> ItemsList; // 0x18
	FPWPlayerInventory Inventory; // 0x28
	int32_t ResfreshShop; // 0xb8
	FDateTime DLCDate; // 0xc0
};

struct FAdminCheckLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	int32_t Amount; // 0x8
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FExperimentationCreateExclusionGroupResult : FPlayFabResultCommon {
	FString ExclusionGroupId; // 0x8
};

struct FClientGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FExperimentationGetExperimentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Experiments; // 0x8
};

struct FPWPlayerDLC {
	FString ID; // 0x0
};

struct FClientLinkKongregateAccountRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	FString KongregateId; // 0x28
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FMultiplayerRolloverContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FClientGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FMultiplayerListServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FCTHeroCustoItem : FCTItemBase {
	FCTCustoItemComponent CustoComponent; // 0xd0
	ECTHeroCustoType HeroCustoType; // 0x188
};

struct FCTImportedPackGiftKeyItem : FCTImportedItemBase {
	FString PackUID; // 0x28
};

struct FClientGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticNames; // 0x10
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x20
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FCTRescuedCTPlayerIdArray {
	TArray<FCTRescuedPlayerInfo> Array; // 0x0
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FAdminGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FMovieSceneLiveLinkSectionTemplate : FMovieScenePropertySectionTemplate {
	FLiveLinkSubjectPreset SubjectPreset; // 0x38
	TArray<bool> ChannelMask; // 0x70
	TArray<FLiveLinkSubSectionData> SubSectionsData; // 0x80
};

struct FAbilitySlot {
	TArray<FAbility> AbilityStack; // 0x0
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
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

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FCTMapPointStateWidgetClasses {
	TMap<EMapPointState, FCTMapPointWidgetClasses> MapPointStateWidgetClasses; // 0x0
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
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

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
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

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FCTShieldInfo {
	EShieldType Type; // 0x0
	float Amount; // 0x4
};

struct FServerUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
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

struct FEtherealFX {
	UPopcornFXEmitterComponent* FX; // 0x0
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FAdminUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DisplayName; // 0x10
	FString PlayFabId; // 0x20
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FCTActorID {
	AActor* pActor; // 0x8
	int8_t OnwerCTPlayerId; // 0x10
	int32_t SpawnUniqId; // 0x14
};

struct FAdminGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FMultiplayerGetContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FFieryShieldData {
	float ChargeDuration; // 0x0
	float ShieldDuration; // 0x4
	float ExplosionRange; // 0x8
	float ShieldHP; // 0xc
	bool DebugCollision; // 0x10
	UCTFieryShieldFeedbackComponent* FeedbackComponentClass; // 0x18
	UNiagaraSystem* HitParticles; // 0x20
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FPopcornFXPlaySectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel Keys; // 0x20
};

struct FClientValidateGooglePlayPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FCTPlayerChest {
	int32_t Gold; // 0x0
	int32_t Gems; // 0x4
	int32_t Steel; // 0x8
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FServerGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
};

struct FClientLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString XboxToken; // 0x18
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	bool bNewShouldBeLoaded; // 0xc
	bool bNewShouldBeVisible; // 0xd
	bool bNewShouldBlockOnLoad; // 0xe
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

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FClientLinkAppleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString IdentityToken; // 0x18
};

struct FCTLevellingData {
	int32_t Level; // 0x0
	int32_t XP_Threshold; // 0x4
	TArray<FCTRewardData> Rewards; // 0x8
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FPWEndMatchCommand {
	FPWSaveQuests Quests; // 0x0
};

struct FGroupsListGroupApplicationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FCTSpectatorSingleStat {
	ECTSpectatorStat StatName; // 0x0
	UTexture2D* StatTexture; // 0x8
};

struct FCTPlayerCharacClassSetup {
	ECharacClassType EnumType; // 0x0
	FString TagLineItemUID; // 0x8
	FCharacterSetup DragonRiderSetup; // 0x18
	FCharacterSetup DragonSetup; // 0x48
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FCTPckRewardData {
	ECTPackageType Type; // 0x0
	ECTRewardedAchievement Achievement; // 0x1
	ECTRewardReveal Reveal; // 0x2
	int32_t MinLevel; // 0x4
	int32_t MaxLevel; // 0x8
};

struct FAdminGetServerBuildInfoResult : FPlayFabResultCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString Comment; // 0x28
	FString ErrorMessage; // 0x38
	int32_t MaxGamesPerHost; // 0x48
	int32_t MinFreeGameSlots; // 0x4c
	EGameBuildStatus Status; // 0x50
	FString Timestamp; // 0x58
	FString TitleId; // 0x68
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FCTFanionItem : FCTMaterialItem {
	UCTPropStampModifierDataAsset* Modifier; // 0xf8
	TSoftObjectPtr<UMaterialInterface> CustomMaterial; // 0x100
	UStaticMesh* FlagHolder; // 0x128
};

struct FCTBoosterItem : FCTItemBase {
	float ActivationTime; // 0xd0
	int32_t BoostPercent; // 0xd4
	int32_t TeamPercent; // 0xd8
	int32_t FullTeamPercent; // 0xdc
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

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FPWSessionInfos {
	FString Session; // 0x0
	TArray<FPWSessionPlayerInfos> Players; // 0x10
};

struct FCTPlayerCollection {
	TMap<FString, FCTOneItemCollection> BDDItems; // 0x0
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
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

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FServerExecuteCloudScriptServerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	FString PlayFabId; // 0x30
	ECloudScriptRevisionOption RevisionSelection; // 0x40
	int32_t SpecificRevision; // 0x44
};

struct FCTDragonCellTypes {
	TMap<ECollectionDragonCellType, UCTDragonCellController*> DragonCellTypes; // 0x0
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
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

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FClientGetPlayFabIDsFromGoogleIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FWidgetList {
	TArray<UCTNavigationWidget*> Widgets; // 0x0
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FPWOneProfileInfos {
	FString ID; // 0x0
	FString Name; // 0x10
	FString Icon; // 0x20
	int32_t Rank; // 0x30
	FPWPlayerStats Stats; // 0x38
	FPWPlayerSetup Setup; // 0xe0
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FMultiplayerDeleteRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString Username; // 0x30
	FString VmId; // 0x40
};

struct FCTDragonOverviewStateBabyData : FCTDragonOverviewStateBaseData {
	FString CameraName; // 0x10
	ACTBabyDragon* BabyDragonClass; // 0x20
	int32_t StartGrowStep; // 0x28
};

struct FAdminUpdatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FMultiplayerGetMultiplayerServerDetailsResponse : FPlayFabResultCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x18
	FString FQDN; // 0x28
	FString IPV4Address; // 0x38
	FString LastStateTransitionTime; // 0x48
	TArray<UPlayFabJsonObject*> Ports; // 0x58
	FString Region; // 0x68
	FString ServerId; // 0x78
	FString SessionId; // 0x88
	FString State; // 0x98
	FString VmId; // 0xa8
};

struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FCTLocalizationData {
	FString Tab; // 0x0
	FString Key; // 0x10
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAdminRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FAdminGetTasksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
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

struct FCTPlayerGift {
	FString ItemId; // 0x0
	FCTRedeemKey100 Key; // 0x10
	FString GiftPackID; // 0x38
};

struct FClientGetPlayFabIDsFromGoogleIDsRequest : FPlayFabRequestCommon {
	FString GoogleIDs; // 0x8
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
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

struct FAdminGetCloudScriptVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Versions; // 0x8
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FExperimentationGetExclusionGroupTrafficRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExclusionGroupId; // 0x10
};

struct FKillMessage {
	UCTKillMessageWidget* Widget; // 0x0
	FText MessageText; // 0x8
	FText SecondaryMessageText; // 0x70
	bool bWithAssistMessage; // 0xd8
	bool bWithBountyScore; // 0xd9
	bool bDeathMessage; // 0xda
	int32_t Score; // 0xdc
	int32_t KillerCTPlayerId; // 0xe0
	int32_t KilledCTPlayerId; // 0xe4
	int32_t KillerTeam; // 0xe8
	int32_t KilledTeam; // 0xec
};

struct FCTImportedBoosterItem : FCTImportedItemBase {
	float ActivationTime; // 0x28
	float BoostRatio; // 0x2c
	float TeamRatio; // 0x30
	float FullTeamRatio; // 0x34
	ECTBoosterItemType Type; // 0x38
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FAdminGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FMultiplayerListContainerImageTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FPWCloudSquad {
	FString MasterID; // 0x0
	FString Type; // 0x10
	FString Lock; // 0x20
	TArray<FPWSquadMember> Members; // 0x30
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FAdminGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FClientStartPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	FString OrderId; // 0x18
	TArray<UPlayFabJsonObject*> PaymentOptions; // 0x28
	UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38
};

struct FCloudScriptListHttpFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FCTMapPoints {
	TMap<FString, UCTCollectionMapPointController*> Points; // 0x0
};

struct FPortraitResult {
	UTextureRenderTarget2D* Texture; // 0x118
};

struct FCTRewardAsset {
	ECTRewardType EnumType; // 0x0
	UCTReward* RewardClass; // 0x8
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FClientUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
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

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FMultiplayerCreateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasName; // 0x8
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FMultiplayerGetMatchRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString MatchID; // 0x18
	FString QueueName; // 0x28
	bool ReturnMemberAttributes; // 0x38
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

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FAdminAbortTaskInstanceRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString TaskInstanceId; // 0x10
};

struct FCTFadeDelay {
	UCTGameStateUIManagerComponent* pManager; // 0x10
	int32_t iFadeFrameCount; // 0x18
	float fFadeTimer; // 0x1c
	ECTTransitionConsumableEvent eEvent; // 0x20
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FAIRequestID {
	uint32_t RequestId; // 0x0
};

struct FAdminDeleteSegmentRequest : FPlayFabRequestCommon {
	FString SegmentId; // 0x8
};

struct FClientPurchaseItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FCTExclusiveShopSection {
	ECTExclusiveShopSection Section; // 0x0
	FString TitleLocId; // 0x8
	TSoftObjectPtr<UTexture2D> DefaultTexture; // 0x18
};

struct FCTPodiumPlayerSlot {
	UCanvasPanel* PlayerPanel; // 0x0
	URichTextBlock* PlayerName; // 0x8
	URichTextBlock* PlayerTitle; // 0x10
	FLinearColor PlayerTint; // 0x18
	UImage* PlayerLogoImage; // 0x28
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FPopcornFXAttributeDesc {
	FName m_AttributeFName; // 0x0
	FName m_AttributeCategoryName; // 0x8
	uint32_t m_AttributeType; // 0x10
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FServerGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FClientGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FCTShopButtonAssets {
	EPWRarity Rarity; // 0x0
	TSoftObjectPtr<UTexture2D> SquareButtonBackgroundTexture; // 0x8
	TSoftObjectPtr<UTexture2D> VerticalButtonBackgroundTexture; // 0x30
	TSoftObjectPtr<UTexture2D> HorizontalButtonBackgroundTexture; // 0x58
	TSoftObjectPtr<UTexture2D> SquareButtonStrokeTexture; // 0x80
	TSoftObjectPtr<UTexture2D> HorizontalButtonStrokeTexture; // 0xa8
};

struct FMatchmakerAuthUserRequest : FPlayFabRequestCommon {
	FString AuthorizationTicket; // 0x8
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FServerUnlinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString ServerCustomId; // 0x20
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

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FBlastFeedbackData {
	UCurveFloat* DamageToEjectionIntensity; // 0x0
	UCurveFloat* WeakDamageToEjectionIntensity; // 0x8
	UCurveFloat* DamageToYaw; // 0x10
	UCurveFloat* DamageToPitch; // 0x18
	USoundMix* StunnedSoundMix; // 0x20
	UMaterialInterface* StunnedCameraPostProcess; // 0x28
	UCurveFloat* StunnedCameraPostProcessFade; // 0x30
	float MinStunnedDuration; // 0x38
	float MaxStunnedDuration; // 0x3c
	float MaxBlastDuration; // 0x40
};

struct FTemplateSectionPropertyScale {
	FGuid ObjectBinding; // 0x0
	FMovieScenePropertyBinding PropertyBinding; // 0x10
	ETemplateSectionPropertyScaleType PropertyScaleType; // 0x24
	FMovieSceneFloatChannel FloatChannel; // 0x28
};

struct FClientGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FServerGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FClientUnlinkAppleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
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

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
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

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
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

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FExperimentationCreateExperimentResult : FPlayFabResultCommon {
	FString ExperimentId; // 0x8
};

struct FServerModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FPlayerTeam {
	TArray<APlayerController*> Members; // 0x0
	int32_t Score; // 0x10
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FPWGetPlayerDataResult {
	TMap<FString, FString> Data; // 0x0
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

struct FClientListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
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

struct FClientGetPlayFabIDsFromKongregateIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FBigMessageDatas {
	EBigMessageType BigMessageEnum; // 0x0
	EBigMessageFlag BigMessageFlag; // 0x1
	EBigMessageCategory BigMessageCategory; // 0x2
	EBigMessageColor BigMessageColor; // 0x3
	FLinearColor SpecialColor; // 0x4
	bool bSpecialAnimation; // 0x14
	bool bUpperBlazon; // 0x15
	float Duration; // 0x18
	float ShortDuration; // 0x1c
	UISoundEnum SoundID; // 0x20
	EBigMessageBlazontype BlazonType; // 0x21
	TSoftObjectPtr<UTexture2D> Blazon; // 0x28
	TArray<EBigMessageType> MessagesToRemove; // 0x50
};

struct FCTSocialNotif {
	FPWOneNotif BackendNotif; // 0x0
	bool IsPendingDelete; // 0xb8
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FClientWriteClientCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EventName; // 0x28
	FString Timestamp; // 0x38
};

struct FCTDamageInfos {
	FCTActorID Causer; // 0x0
	FCTActorID Receiver; // 0x18
	EWeaponType Weapon; // 0x30
	float Ratio; // 0x34
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

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FCTSquadMember : FCTPlayerBasicInfos {
	FString PlayfabTitleID; // 0x58
	bool IsMaster; // 0x68
	EPWMemberStatus Status; // 0x6c
	int32_t DateLock; // 0x70
};

struct FClientGetTitlePublicKeyResult : FPlayFabResultCommon {
	FString RSAPublicKey; // 0x8
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FServerGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FMovieSceneObjectBindingID {
	FGuid Guid; // 0x0
	int32_t SequenceID; // 0x10
	int32_t ResolveParentIndex; // 0x14
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FAdminGetCloudScriptTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
	bool bFireOnClockStart; // 0x9
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FAdminCreatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FCTSoundClass {
	SoundTypeEnum SoundType; // 0x0
	USoundClass* SoundClass; // 0x8
};

struct FNiagaraOutlinerSystemData {
	TArray<FNiagaraOutlinerSystemInstanceData> SystemInstances; // 0x0
	FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x10
	FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x18
	FNiagaraOutlinerTimingData AveragePerInstanceTime; // 0x20
	FNiagaraOutlinerTimingData MaxPerInstanceTime; // 0x28
};

struct FClientDeviceInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Info; // 0x8
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FPWPReawrdStep {
	int32_t WinVal; // 0x0
	FString RewardId; // 0x8
};

struct FDVector2D {
	double X; // 0x0
	double Y; // 0x8
};

struct FGroupsUpdateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
	FString RoleName; // 0x30
};

struct FClientAddOrUpdateContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EmailAddress; // 0x10
};

struct FClientCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
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

struct FAdminSetPublishedRevisionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t Revision; // 0x10
	int32_t Version; // 0x14
};

struct FCTTutorialVideo : FCTUIDLocalizedInterface {
	ECTTutorialVideo EnumType; // 0x8
	TArray<FCTTutorialChapter> Chapters; // 0x10
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FPWDBContent {
	FPWCatalogContent Catalog; // 0x0
	FPWQuestsContent Quests; // 0x28
	FPWLevelsContent Levels; // 0x78
	FPWCollection Collection; // 0x88
};

struct FGroupsApplyToGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString Expires; // 0x10
	UPlayFabJsonObject* Group; // 0x20
};

struct FCameraShakeScrubParams {
	float AbsoluteTime; // 0x0
	float ShakeScale; // 0x4
	float DynamicScale; // 0x8
	float BlendingWeight; // 0xc
	FMinimalViewInfo POV; // 0x10
};

struct FMultiplayerDeleteCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Name; // 0x10
};

struct FServerGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FShowroomLevels {
	TArray<FName> Levels; // 0x0
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FWeaponCameraPulse {
	float Duration; // 0x0
	float DurationWithShield; // 0x4
	float LocationAmplitude; // 0x8
	float LocationAmplitudeWithShield; // 0xc
	float RotationAmplitude; // 0x10
	float RotationAmplitudeWithShield; // 0x14
};

struct FServerNotifyMatchmakerPlayerLeftResult : FPlayFabResultCommon {
	EPlayerConnectionState PlayerState; // 0x8
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FCTMultiscaleTextureAsset {
	TArray<FCTTextureFormat> Table; // 0x0
	TSoftObjectPtr<UTexture2D> DefaultTexture; // 0x10
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FClientGetPurchaseResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString PaymentProvider; // 0x18
	FString PurchaseDate; // 0x28
	FString TransactionId; // 0x38
	FString TransactionStatus; // 0x48
};

struct FMultiplayerCreateBuildWithCustomContainerRequest : FPlayFabRequestCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildName; // 0x10
	EContainerFlavor ContainerFlavor; // 0x20
	UPlayFabJsonObject* ContainerImageReference; // 0x28
	FString ContainerRunCommand; // 0x30
	UPlayFabJsonObject* CustomTags; // 0x40
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x48
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x58
	UPlayFabJsonObject* LinuxInstrumentationConfiguration; // 0x68
	UPlayFabJsonObject* MetaData; // 0x70
	int32_t MultiplayerServerCountPerVm; // 0x78
	TArray<UPlayFabJsonObject*> Ports; // 0x80
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x90
	bool UseStreamingForAssetDownloads; // 0xa0
	EAzureVmSize VmSize; // 0xa1
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FCTLootPackageRewardImage {
	ECTPackageType EnumType; // 0x0
	TSoftObjectPtr<UTexture2D> Texture; // 0x8
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FPWCreateTicketResult {
	FString TicketId; // 0x0
	int32_t Key; // 0x10
	int32_t Skill; // 0x14
	int32_t MMR; // 0x18
	int32_t MMQ; // 0x1c
};

struct FAdminGetContentListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	int32_t ItemCount; // 0x18
	int32_t TotalSize; // 0x1c
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FCTStrikerRagePrey {
	FCTActorID Target; // 0x0
	UCTStrikerPrey* PreyComponent; // 0x18
};

struct FCTExclusiveShopData : FCTShopDataBase {
	ECTExclusiveShopSection Section; // 0x28
	FString RequiredLink; // 0x30
	FIntPoint Slot; // 0x40
	FString SectionNameOverride; // 0x48
	TSoftClassPtr<UObject> ButtonClass; // 0x58
	FDateTime EndDate; // 0x80
};

struct FBlastExplosionFXParams {
	float Scale; // 0x0
	FLinearColor Color; // 0x4
	float DistoCore; // 0x14
	float SpeedFadeFlash; // 0x18
	float DistoCore2D; // 0x1c
	float DistanceFadeDisto; // 0x20
	float DistoMin; // 0x24
	float DistanceFadePow; // 0x28
	float BorderIntensity; // 0x2c
	float SmokeOpacity; // 0x30
	float LOD; // 0x34
	float ScaleLight; // 0x38
	float IntensityLight; // 0x3c
	float PreDisto; // 0x40
	float RetimeLight; // 0x44
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

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
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

struct FClientGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FCTMaterialModifierTaskData {
	UCTMaterialModifierDataAsset* Asset; // 0x0
	UCTBodyPartDataAsset* Part; // 0x8
	USkeletalMeshComponent* Target; // 0x10
};

struct FCTPlayerConsumableItem {
	FString ItemUID; // 0x0
	int32_t Quantity; // 0x10
	bool bActivated; // 0x14
	uint32_t ExpireDate; // 0x18
};

struct FClientSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
};

struct FClientUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DisplayName; // 0x10
};

struct FCloudScriptExecuteCloudScriptResult : FPlayFabResultCommon {
	int32_t APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int32_t ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int32_t HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int32_t MemoryConsumedBytes; // 0x54
	int32_t ProcessorTimeSeconds; // 0x58
	int32_t Revision; // 0x5c
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FPWSquadMemberMinimal {
	FString ID; // 0x0
	FString Status; // 0x10
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
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

struct FPlayFabBaseModel {
	FPlayFabError responseError; // 0x0
	UPlayFabJsonObject* responseData; // 0x38
};

struct FCTLocationItem : FCTUIDLocalizedInterface {
	FString LocationPackUID; // 0x8
	FString LocalizationNameSpace; // 0x18
	FString LocalizationKey; // 0x28
	FString LocalizationUID; // 0x38
};

struct FClientRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
};

struct FMultiplayerGetMultiplayerServerLogsResponse : FPlayFabResultCommon {
	FString LogDownloadUrl; // 0x8
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FCTUITrack {
	EGameStateUITrackStatus Status; // 0x0
	float TimeInStatus; // 0x4
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FPotentialTargetInfos {
	AActor* pActor; // 0x0
};

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FClientLoginWithSteamRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString SteamTicket; // 0x40
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FPWCommandItem {
	TArray<FPWPlayerEgg> Eggs; // 0x0
	FPWQuests Quests; // 0x10
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FPWLevelsContent {
	TArray<FPWOneLevelContent> Data; // 0x0
};

struct FCTEndMatchSummaryRowData {
	FString TitleLocalizationNameSpace; // 0x0
	FString TitleLocalizationID; // 0x10
	UCTEndMatchRowWidget* RowWidgetClass; // 0x20
	UCTEndMatchRowController* RowControllerClass; // 0x28
	TMap<EEndMatchSummaryRewardType, EMatchSummaryRowDataSource> DataSource; // 0x30
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FServerListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FInsightsInsightsGetPendingOperationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> PendingOperations; // 0x8
};

struct FDartTrapSettings {
	float TimeBeforeFail; // 0x0
	float AnchoredLifeTime; // 0x4
	float ThrowSpeed; // 0x8
	float Gravity; // 0xc
	float Damping; // 0x10
	float SearchRadius; // 0x14
	UCurveFloat* ScaleCurveOverTime; // 0x18
	int32_t MaxAmmo; // 0x20
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FCTLoadingTip : FTableRowBase {
	FString LocalizationKey; // 0x8
	FString LocalizationNameSpace; // 0x18
	float Time; // 0x28
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FClientConsumePS5EntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FExperimentationGetTreatmentAssignmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FGroupsInviteToGroupResponse : FPlayFabResultCommon {
	FString Expires; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	UPlayFabJsonObject* InvitedByEntity; // 0x20
	UPlayFabJsonObject* InvitedEntity; // 0x28
	FString RoleId; // 0x30
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
};

struct FProfilesGetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
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

struct FGroupsRemoveMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RoleId; // 0x28
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

struct FCTLinkedArmamentData {
	bool bCanFireIfMainArmamentActive; // 0x0
	bool bRequiresMainArmamentReactivation; // 0x1
	bool bRequiresMainArmamentRelease; // 0x2
};

struct FAdminCreatePlayerSharedSecretResult : FPlayFabResultCommon {
	FString SecretKey; // 0x8
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
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

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FProfilesGetGlobalPolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34
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

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
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

struct FCTSquadSessionDetails {
	FString QueueName; // 0x0
	FString TicketId; // 0x10
	FString Mode; // 0x20
	FString MMR; // 0x30
	FString SqUID; // 0x40
};

struct FServerUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString KeysToRemove; // 0x28
	EUserDataPermission Permission; // 0x38
	FString PlayFabId; // 0x40
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FCTSmoothFVector {
	float Margin; // 0x0
	SmoothType Type; // 0x4
	FVector Target; // 0x8
	float Smooth; // 0x14
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
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

struct FCTFTUEEventManager {
	bool IsInitialized; // 0x0
	TArray<FCTFTUEEvent> FTUEEventsArray; // 0x20
	TArray<ECTFTUEEventType> FTUEEventsToValidateOn1stInit; // 0x30
	bool bMute; // 0x40
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

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FEndGameResult {
	TArray<int32_t> WinnerTeamsIds; // 0x0
	FString TextNS; // 0x10
	FString TextKey; // 0x20
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FAdminGetPolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	int32_t PolicyVersion; // 0x18
	TArray<UPlayFabJsonObject*> Statements; // 0x20
};

struct FInsightsInsightsGetPendingOperationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OperationType; // 0x10
};

struct FPPVPointLightOverride {
	APointLight* Light; // 0x0
	bool bOverrideIntensity; // 0x8
	float Intensity; // 0xc
	bool bOverrideColor; // 0x10
	FLinearColor Color; // 0x14
	bool bOverrideTemperature; // 0x24
	float Temperature; // 0x28
	bool bOverrideVolumetricScatteringIntensity; // 0x2c
	float VolumetricScatteringIntensity; // 0x30
};

struct FNiagaraCompilerTag {
	FNiagaraVariable Variable; // 0x0
	FString StringValue; // 0x20
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FServerGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FWorkItemTally : FWorkItemTallyBase {
	TSet<int32_t> AllWorkItems; // 0x8
	TSet<int32_t> WaitingWorkItems; // 0x58
	TSet<int32_t> ScheduledWorkItems; // 0xa8
	TSet<int32_t> CookingWorkItems; // 0xf8
	TSet<int32_t> CookedWorkItems; // 0x148
	TSet<int32_t> ErroredWorkItems; // 0x198
	TSet<int32_t> CookCancelledWorkItems; // 0x1e8
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FCTWeeklyQuestMapData {
	ACameraActor* Camera; // 0x0
	TArray<FCTWeeklyQuestChestRTC> OpeningRTC; // 0x8
	ULevelSequence* EmptyRTC; // 0x18
	FName AmbiantLevel; // 0x20
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FPWOneNotifAction {
	FString ID; // 0x0
	bool bSilent; // 0x10
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FAdminGetPlayerSharedSecretsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> SharedSecrets; // 0x8
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FMovieSceneSequenceActorPointers {
	AActor* SequenceActor; // 0x0
	TScriptInterface<IMovieSceneSequenceActor> SequenceActorInterface; // 0x8
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FPWPlayerRewardChest {
	FString ID; // 0x0
	FString Type; // 0x10
	int32_t SC; // 0x20
	int32_t HC; // 0x24
	TArray<FString> Packs; // 0x28
	FString Rarity; // 0x38
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FAdminSetupPushNotificationResult : FPlayFabResultCommon {
	FString ARN; // 0x8
};

struct FGroupsUnblockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
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

struct FServerGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FHoudiniOutputObjectIdentifier {
	int32_t ObjectId; // 0x0
	int32_t GeoId; // 0x4
	int32_t PartId; // 0x8
	FString SplitIdentifier; // 0x10
	FString PartName; // 0x20
	int32_t PrimitiveIndex; // 0x30
	int32_t PointIndex; // 0x34
};

struct FClientGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientRemoveContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FPWCloudOptions {
	FString SqAccess; // 0x0
	FPWCloudLinkOptions LinkInfos; // 0x10
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FAdminDeleteContentRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FGroupMember {
	UCTUserWidget* Widget; // 0x78
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FCTResourceItem : FCTItemBase {
	ECTResourceType Resource; // 0xd0
	TArray<FCTMultiscaleTextureAsset> TierImages; // 0xd8
};

struct FAkXSXApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FPortraitSetup {
	ECharacClassType Class; // 0x0
	UAnimationAsset* DragonPose; // 0x8
	UAnimationAsset* RiderPose; // 0x10
	AActor* LightSetup; // 0x18
};

struct FMultiplayerListVirtualMachineSummariesRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t PageSize; // 0x20
	FString Region; // 0x28
	FString SkipToken; // 0x38
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FCTLootItemRewardImage {
	ECTItemType EnumType; // 0x0
	TSoftObjectPtr<UTexture2D> Texture; // 0x8
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
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

struct FMultiplayerGetAssetUploadUrlRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Filename; // 0x10
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FPWOneQuestReward {
	int32_t Distinction; // 0x0
	FPWPlayerRewardChest Chest; // 0x8
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FCharacterPart {
	FString AssetString; // 0x0
	FString ItemUID; // 0x10
	UCTBodyPartDataAsset* Bodypart; // 0x20
	TArray<UCTBodyPartModifierDataAsset*> Modifiers; // 0x28
	int32_t SlotMask; // 0x38
};

struct FAdminRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FCTDisplaySetManager {
	UObject* pOwner; // 0x0
	ACTMenuCharacter* pRider; // 0x8
	ACTMenuCharacter* pDragon; // 0x10
	ACTFanionPropMesh* pFanion; // 0x18
	AActor* pEgg; // 0x20
	ECharacClassType eCurrentCharacClass; // 0x28
	ECTDisplaySetType eCurrentType; // 0x29
	TArray<FCTDisplaySetGenericCamera> GenericCameraArray; // 0x30
	FTransform DragonCustoDisplaySetTransform; // 0x40
	FTransform RiderCustoDisplaySetTransform; // 0x70
	FTransform FanionCustoDisplaySetTransform; // 0xa0
	TArray<ACTCustoDisplaySet*> DragonDisplaySets; // 0xd0
	TArray<ACTCustoDisplaySet*> RiderDisplaySets; // 0xe0
	TArray<ACTCustoDisplaySet*> FanionDisplaySets; // 0xf0
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FCTResourceShopSectionData {
	TArray<FCTResourceShopSection> ResourceShopSections; // 0x0
	TSoftClassPtr<UObject> ButtonClass; // 0x10
	TSoftClassPtr<UObject> MixedButtonClass; // 0x38
	TSoftClassPtr<UObject> PopupButtonClass; // 0x60
	TSoftClassPtr<UObject> PopupMixedButtonClass; // 0x88
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FDataSetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	int32_t ExpectedProfileVersion; // 0x18
	TArray<UPlayFabJsonObject*> Objects; // 0x20
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
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

struct FCTEndMatchSummaryDebugTool {
	UCTXpDistributionController* Controller; // 0x8
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

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FMultiplayerGetTitleMultiplayerServersQuotaChangeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Change; // 0x8
};

struct FCTEndMatchSummaryAllSectionsData {
	TArray<FCTEndMatchSummarySectionData> Sections; // 0x0
	FCTEndMatchSummarySectionData ConcurrentSection; // 0x10
};

struct FMatchmakerStartGameRequest : FPlayFabRequestCommon {
	FString Build; // 0x8
	FString CustomCommandLineData; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ExternalMatchmakerEventEndpoint; // 0x30
	FString GameMode; // 0x40
	ERegion Region; // 0x50
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FClientGetLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MaxResultsCount; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x18
	int32_t StartPosition; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
};

struct FClientGetPlayFabIDsFromTwitchIDsRequest : FPlayFabRequestCommon {
	FString TwitchIds; // 0x8
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
};

struct FNiagaraCompileDependency {
	FString LinkerErrorMessage; // 0x0
	FGuid NodeGuid; // 0x10
	FGuid PinGuid; // 0x20
	TArray<FGuid> StackGuids; // 0x30
	FNiagaraVariableBase DependentVariable; // 0x40
};

struct FLiveLinkPingMessage {
	FGuid PollRequest; // 0x0
	int32_t LiveLinkVersion; // 0x10
};

struct FCTNetIds {
	FCTBackendId BackendId; // 0x0
	FCTPlatformId PlatformID; // 0x10
};

struct FClientConsumeMicrosoftStoreEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketplaceSpecificData; // 0x20
};

struct FMultiplayerGetBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FPortraitRequest {
	UTextureRenderTarget2D* Texture; // 0x118
};

struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FCTImportedMiscellanousShopData : FCTImportedShopData {
	ECTMiscellanousShopSection Section; // 0x18
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
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

struct FClientValidateAmazonReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
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

struct FServerAwardSteamAchievementRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Achievements; // 0x8
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

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FCTFadeToBlackTransitionData {
	float FadeInSpeed; // 0x0
	ECTTransitionConsumableEvent FadeOutEvent; // 0x4
	float FadeSecondsDelay; // 0x8
	int32_t FadeFrameDelay; // 0xc
	float FadeOutSpeed; // 0x10
};

struct FCameraShakeUpdateParams {
	float DeltaTime; // 0x0
	float ShakeScale; // 0x4
	float DynamicScale; // 0x8
	float BlendingWeight; // 0xc
	FMinimalViewInfo POV; // 0x10
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FClientUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString KeysToRemove; // 0x28
	EUserDataPermission Permission; // 0x38
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FProfilesSetEntityProfilePolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FServerMoveItemToCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
};

struct FClientGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FMultiplayerListVirtualMachineSummariesResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
	TArray<UPlayFabJsonObject*> VirtualMachines; // 0x20
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
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

struct FClientGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayFabId; // 0x18
};

struct FClientRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
};

struct FServerGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
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

struct FPassiveImage {
	EAbility Ability; // 0x0
	UMaterialInterface* Icon; // 0x8
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FClientGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FServerLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString XboxToken; // 0x20
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

struct FClientLinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	bool ForceLink; // 0x30
	FString OS; // 0x38
};

struct FCTTextureFormat {
	ECTTextureFormat EnumType; // 0x0
	TSoftObjectPtr<UTexture2D> Texture; // 0x8
};

struct FClientRegisterForIOSPushNotificationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FAdminUpdateCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeveloperPlayFabId; // 0x10
	TArray<UPlayFabJsonObject*> Files; // 0x20
	bool Publish; // 0x30
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FCTOptimalWrapInScaleBox {
	int32_t MinWrap; // 0x0
	int32_t MaxWrap; // 0x4
	float WrapError; // 0x8
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

struct FCTResourceShopData : FCTShopDataBase {
	ECTGemsShopSection Section; // 0x28
	FIntPoint Slot; // 0x2c
	FString SectionNameOverride; // 0x38
};

struct FAdminCreateCloudScriptTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FClientUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FServerGetCharacterStatisticsResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FCTRDV {
	int32_t UniqID; // 0x0
	CTRRDVState State; // 0x4
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FNiagaraDebuggerRequestConnection {
	FGuid SessionId; // 0x0
	FGuid InstanceId; // 0x10
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
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

struct FClientWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
};

struct FServerGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FCTServerCommandAcceptedDTO {
	FString Message; // 0x0
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FNiagaraSimpleClientInfo {
	TArray<FString> Systems; // 0x0
	TArray<FString> Actors; // 0x10
	TArray<FString> Components; // 0x20
	TArray<FString> Emitters; // 0x30
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FMultiplayerListServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FPWOneColItemProgress {
	int32_t Cnt; // 0x0
	int32_t Shop; // 0x4
	int32_t Match; // 0x8
};

struct FServerGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FSmokeBombFXParams {
	FLinearColor RGBA; // 0x0
	float DistanceFadeStart; // 0x10
	float DistanceFadeEnd; // 0x14
	float DistanceFadePow; // 0x18
	bool DisableFog; // 0x1c
	float FogColorLevelMultiplicator; // 0x20
	float FogOpacityMultiplicator; // 0x24
	float DistanceFadeStartOpacity; // 0x28
	float DistanceFadeEndOpacity; // 0x2c
	float DistanceFadeToFullFog; // 0x30
	float IntensityCombustion; // 0x34
	float SpeedCombustion; // 0x38
	FLinearColor ColorCombustion; // 0x3c
	float FadeDelay; // 0x4c
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FCTImportedShopData : FTableRowBase {
	float GoldPrice; // 0x8
	float GemPrice; // 0xc
	int32_t EuroPrice; // 0x10
	bool DisplaySale; // 0x14
};

struct FPWMatchResult {
	int32_t XPBase; // 0x0
	int32_t XPScore; // 0x4
	int32_t XPWon; // 0x8
	int32_t XPRivalry; // 0xc
	int32_t XPFriends; // 0x10
	int32_t XPMissions; // 0x14
	int32_t XPBooster; // 0x18
	int32_t XPBoosterTeam; // 0x1c
	int32_t XPBoosterFTeam; // 0x20
	int32_t XPLiveMatch_XPBonus; // 0x24
	int32_t XPLiveMatch_Percent; // 0x28
	int32_t XPLiveHatching_Percent; // 0x2c
	int32_t XPTotal; // 0x30
	int32_t SCScore; // 0x34
	int32_t SCWon; // 0x38
	int32_t SCMissions; // 0x3c
	TArray<FPWMatchWonQuest> Quests; // 0x40
	int32_t HMMR; // 0x50
	int32_t MRS1; // 0x54
	FPWPlayerStats Stats; // 0x58
};

struct FClientAcceptTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FAssetBundleEntry {
	FName BundleName; // 0x0
	TArray<FSoftObjectPath> BundleAssets; // 0x8
};

struct FPWLinkProfileInfos {
	FString ID; // 0x0
	FString Name; // 0x10
	FString Icon; // 0x20
	FPWPlayerStats Stats; // 0x30
	TArray<FString> Accounts; // 0xd8
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FClientGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FTSettings_AirColumn {
	UCurveFloat* SpeedBoostCurve; // 0x0
	APopcornFXEmitter* FXClass; // 0x8
	UPopcornFXEffect* EnteringFX; // 0x10
	FLinearColor SmokeMeshColor; // 0x18
	FLinearColor SmokeParticlesColor; // 0x28
	FLinearColor TongueColor; // 0x38
	float SmokeMeshOpacity; // 0x48
	float SmokeParticlesOpacity; // 0x4c
	FLinearColor FloorGradiantStartColor; // 0x50
	float ScaleSmokeGround; // 0x60
	float ScaleWidthTongue; // 0x64
	float ScaleHeightTongue; // 0x68
	float GroundZOffset; // 0x6c
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FClientGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FClientGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FCrosshairSet {
	EFireballCrosshairType CrosshairType; // 0x0
	UMaterialInterface* RightCrosshair; // 0x8
	UMaterialInterface* LeftCrosshair; // 0x10
};

struct FCTItemBase : FCTUIDLocalizedInterface {
	FString ItemUID; // 0x8
	FName ItemUIDName; // 0x18
	FString PackUID; // 0x20
	bool Default; // 0x30
	char CharacClassFlag; // 0x31
	FCTMultiscaleTextureAsset Image; // 0x38
	EPWRarity Rarity; // 0x80
	TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x88
	FBox BBoxOverride; // 0xb0
};

struct FClientUnlinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FServerGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FSocialStatusData {
	EPWPresence DefaultStatus; // 0x0
	TMap<EPWPresence, FSocialPresenceData> PresenceData; // 0x8
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

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
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

struct FServerWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FPWMatchCloseResult {
	FPWPlayerStats Stats; // 0x0
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

struct FPopcornFXSubRendererMaterial {
	UMaterialInterface* Material; // 0x0
	EPopcornFXMaterialType MaterialType; // 0x8
	UTexture2D* TextureDiffuse; // 0x10
	UTexture2D* TextureDiffuseRamp; // 0x18
	UTexture2D* TextureEmissive; // 0x20
	UTexture2D* TextureNormal; // 0x28
	UTexture2D* TextureSpecular; // 0x30
	UTexture2D* TextureAlphaRemapper; // 0x38
	UTexture2D* TextureMotionVectors; // 0x40
	UTexture2D* TextureSixWay_RLTS; // 0x48
	UTexture2D* TextureSixWay_BBF; // 0x50
	UTexture2D* VATTexturePosition; // 0x58
	UTexture2D* VATTextureNormal; // 0x60
	UTexture2D* VATTextureColor; // 0x68
	UTexture2D* VATTextureRotation; // 0x70
	UPopcornFXTextureAtlas* TextureAtlas; // 0x78
	char NoAlpha : 1; // 0x80
	char MeshAtlas : 1; // 0x80
	char Raytraced : 1; // 0x80
	char SoftAnimBlending : 1; // 0x80
	char MotionVectorsBlending : 1; // 0x80
	char CastShadow : 1; // 0x80
	char Lit : 1; // 0x80
	char SortIndices : 1; // 0x80
	char CorrectDeformation : 1; // 0x81
	float SoftnessDistance; // 0x84
	float SphereMaskHardness; // 0x88
	float MVDistortionStrengthColumns; // 0x8c
	float MVDistortionStrengthRows; // 0x90
	uint32_t VATNumFrames; // 0x94
	char VATPackedData : 1; // 0x98
	float VATPivotBoundsMin; // 0x9c
	float VATPivotBoundsMax; // 0xa0
	char VATNormalizedData : 1; // 0xa4
	float VATPositionBoundsMin; // 0xa8
	float VATPositionBoundsMax; // 0xac
	float MaskThreshold; // 0xb0
	int32_t DrawOrder; // 0xb4
	UStaticMesh* StaticMesh; // 0xb8
	uint32_t StaticMeshLOD; // 0xc0
	int32_t m_RMId; // 0xc4
	UMaterialInstanceConstant* MaterialInstance; // 0xc8
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FStrikerPowerData {
	UParticleSystem* PreyTrailParticles; // 0x0
	UParticleSystem* PredatorParticles; // 0x8
	UMaterialInterface* PredatorPostProcess; // 0x10
	float TrailMaxDistance; // 0x18
	float TrailParticleLifeTime; // 0x1c
	float RageTrailParticleLifeTime; // 0x20
	float EnergyRefillPerSecond; // 0x24
	float PathPredictionBaseDistance; // 0x28
	float StopBoostingDistance; // 0x2c
	float BoostGrowth; // 0x30
	float TrailCollisionWidth; // 0x34
	float TrailCollisionHeight; // 0x38
	UCurveFloat* BoostFromDistanceCurve; // 0x40
	float Duration; // 0x48
	float WeakDuration; // 0x4c
	float MaxTrackDistance; // 0x50
	float TargetDiedSuddenlyRefillDelay; // 0x54
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FAdminModifyMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	TArray<UPlayFabJsonObject*> GameModes; // 0x18
};

struct FClientOpenTradeRequest : FPlayFabRequestCommon {
	FString AllowedPlayerIds; // 0x8
	FString OfferedInventoryInstanceIds; // 0x18
	FString RequestedCatalogItemIds; // 0x28
};

struct FTeamScoreBoard {
	TArray<FTeam> Teams; // 0x0
};

struct FAdminGetCloudScriptRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FClientValidateGooglePlayPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptJson; // 0x38
	FString Signature; // 0x48
};

struct FMultiplayerListAssetSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AssetSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FMultiplayerListBuildSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FAdminGetTasksResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Tasks; // 0x8
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FCTRageFXSet {
	EAbility Ability; // 0x0
	UNiagaraSystem* RageUnlockParticles; // 0x8
	UNiagaraSystem* RageTriggerParticles; // 0x10
	UNiagaraSystem* RageExtendedParticles; // 0x18
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FPWSocialResult {
	FPWNotifications Notifs; // 0x0
	bool bSQuads; // 0x18
	FString bSQLock; // 0x20
	FPWCloudSquad SQuads; // 0x30
	FPWDate Sync; // 0x70
};

struct FCTShowroomAccessData {
	UCTCustomizationSubWidget* Widget; // 0x0
	USkeletalMesh* BaseMesh; // 0x8
	EBodyPart Part; // 0x10
	EPropType Prop; // 0x11
};

struct FItemsResourceDatas {
	FString ItemId; // 0x0
	int32_t Quantity; // 0x10
	int32_t ActivationTime; // 0x14
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FRecastGraphWrapper {
	ARecastNavMesh* RecastNavMeshActor; // 0x0
};

struct FServerGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FCTImportedDragonCusto : FCTImportedItemBase {
	FString AssetString; // 0x28
	ECTDragonCustoType DragonCustoType; // 0x38
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FMineSettings {
	float DelayBeforeAnchoring; // 0x0
	float MinAllowedAnchorDistance; // 0x4
	float MaxAllowedAnchorDistance; // 0x8
	float MaxAllowedDecorationDistance; // 0xc
	int32_t MinAcceptableAnchorsCount; // 0x10
	float ManualTryDuration; // 0x14
	float TimeBeforeFail; // 0x18
	float AnchoringSearchAngleTolerance; // 0x1c
	float AnchoredLifeTime; // 0x20
	float ThrowSpeed; // 0x24
	float Gravity; // 0x28
	float Damping; // 0x2c
	FFloatInterval ChainedExplosionDelayRange; // 0x30
	FFloatInterval CableTimeToAnchorRange; // 0x38
	float ExplosionRadius; // 0x40
	float WallExplosionDelay; // 0x44
	float FailureExplosionDelay; // 0x48
	float CableCollisionMultiplier; // 0x4c
	UCurveFloat* FalloffDamageCurve; // 0x50
	UCurveFloat* ScaleCurveOverTime; // 0x58
	FFloatInterval CableWidthInterval; // 0x60
	bool bBounceOnWalls; // 0x68
	float Bounciness; // 0x6c
};

struct FAdditionalLevel {
	FName LevelName; // 0x0
	bool VisibleAfterLoad; // 0x8
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FProjectileComponentData {
	FVector InitialVelocity; // 0x0
	float Gravity; // 0xc
	float Damping; // 0x10
};

struct FClientGameServerRegionsRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FCTDropdownOptionLocalizatedWithDescription {
	FCTDropdownOption LocalizedDropdownOption; // 0x0
	FCTHelperFrameLocalizationData HelperFrameData; // 0x10
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

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FPWCRMInfos {
	int32_t Date; // 0x0
};

struct FServerGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x20
};

struct FGroupsAcceptGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FGroupsListMembershipResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Groups; // 0x8
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
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

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t VertexCount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FMultiplayerUpdateBuildRegionRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* BuildRegion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
};

struct FAdminGetServerBuildUploadURLRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FWarHornData {
	float Range; // 0x0
	FLinearColor ShieldColor; // 0x4
	float LockSpeedRatio; // 0x14
	USoundBase* WarHornThrowSound; // 0x18
	USoundBase* WarHornReceiveSound; // 0x20
	USoundBase* LockSound; // 0x28
	USoundBase* EnterModeSound; // 0x30
	USoundBase* ExitModeSound; // 0x38
	USoundBase* DashLoop; // 0x40
	AActor* AffectedAllyClass; // 0x48
	float AffectedAllyActorLifeSpan; // 0x50
	UParticleSystem* WarHornFX; // 0x58
	UParticleSystem* TeamPowerFX; // 0x60
	FLinearColor ShieldLightColor; // 0x68
	FLinearColor ShieldPostProcessLineDepthColor; // 0x78
	FLinearColor ShieldPostProcessLineDepthColor2; // 0x88
	FLinearColor LockInColor; // 0x98
	UCurveFloat* DashSpeedFromDist; // 0xa8
	UCurveFloat* OffensiveDashSpeedFromDist; // 0xb0
	UCurveFloat* MinDotFromDistRatio; // 0xb8
	float DashCancelCapsuleRadius; // 0xc0
	float DashCancelCapsuleHalfHeight; // 0xc4
	float HealPerSecond; // 0xc8
	float WallStopDistance; // 0xcc
	float MaxLostTime; // 0xd0
	float MaxDashDuration; // 0xd4
	float MinDashDuration; // 0xd8
	float DistToLockCenter; // 0xdc
	float PrepTime; // 0xe0
	float FailedDashAlternativeCooldown; // 0xe4
	float StraffYYawSpeedMultiplier; // 0xe8
	float StraffZPitchSpeedMultiplier; // 0xec
	bool Debug; // 0xf0
};

struct FCTImportedAchievementsData : FTableRowBase {
	int32_t Threshold; // 0x8
	ECTQuestGameMode GameMode; // 0xc
	ECharacClassType CharacClass; // 0xd
	EMapEnvironment MapEnvironment; // 0xe
	EQuestMode QuestMode; // 0xf
	bool Enabled; // 0x10
	int32_t Version; // 0x14
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FClientGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	int32_t MaxResultsCount; // 0x14
	UPlayFabJsonObject* ProfileConstraints; // 0x18
	int32_t StartPosition; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
	FString XboxToken; // 0x40
};

struct FServerGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticNames; // 0x20
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x30
};

struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FPWGetPlayerStatisticsResult {
	TMap<FString, int32_t> Statistics; // 0x0
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FAdminUpdateStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketingData; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FCTCustoItemComponent {
	FString ItemUID; // 0x0
	FString AssetString; // 0x10
	FCharacterPart CachedCharacterPart; // 0x20
	FCharacterProp CachedCharacterProp; // 0x60
	EBodyPartTarget CachedTarget; // 0xa0
	USkeletalMesh* CachedBaseMesh; // 0xa8
	EPropType CachedPropType; // 0xb0
};

struct FAdminUpdateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FAdminCreateTaskResult : FPlayFabResultCommon {
	FString TaskId; // 0x8
};

struct FPWNotifications {
	uint32_t Date; // 0x0
	TArray<FPWOneNotif> Notifs; // 0x8
};

struct FExperimentationDeleteExclusionGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExclusionGroupId; // 0x10
};

struct FHoudiniInstancedOutput {
	TSoftObjectPtr<UObject> OriginalObject; // 0x0
	int32_t OriginalObjectIndex; // 0x28
	TArray<FTransform> OriginalTransforms; // 0x30
	TArray<TSoftObjectPtr<UObject>> VariationObjects; // 0x40
	TArray<FTransform> VariationTransformOffsets; // 0x50
	TArray<int32_t> TransformVariationIndices; // 0x60
	TArray<int32_t> OriginalInstanceIndices; // 0x70
	bool bChanged; // 0x80
	bool bStale; // 0x81
};

struct FPreloadingAssetSet {
	FName Name; // 0x0
	TArray<UObject*> Assets; // 0x8
};

struct FMultiplayerListQosServersForTitleResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FAdminGetTaskInstancesRequest : FPlayFabRequestCommon {
	FString StartedAtRangeFrom; // 0x8
	FString StartedAtRangeTo; // 0x18
	ETaskInstanceStatus StatusFilter; // 0x28
	UPlayFabJsonObject* TaskIdentifier; // 0x30
};

struct FAdminGetCloudScriptRevisionResult : FPlayFabResultCommon {
	FString CreatedAt; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool IsPublished; // 0x28
	int32_t Revision; // 0x2c
	int32_t Version; // 0x30
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FExperimentationDeleteExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FAdminUpdatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FAdminModifyServerBuildRequest : FPlayFabRequestCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	UPlayFabJsonObject* CustomTags; // 0x48
	FString ExecutablePath; // 0x50
	int32_t MaxGamesPerHost; // 0x60
	int32_t MinFreeGameSlots; // 0x64
	FString Timestamp; // 0x68
};

struct FClientGetPhotonAuthenticationTokenRequest : FPlayFabRequestCommon {
	FString PhotonApplicationId; // 0x8
};

struct FServerGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FPWGetLeaderboardOptions {
	uint32_t Position; // 0x0
	uint32_t MaxResultCount; // 0x4
	bool FriendsOnly; // 0x8
	FString XboxToken; // 0x10
	int32_t Version; // 0x20
};

struct FNiagaraOutlinerWorldData {
	TMap<FString, FNiagaraOutlinerSystemData> Systems; // 0x0
	bool bHasBegunPlay; // 0x50
	char WorldType; // 0x51
	char NetMode; // 0x52
	FNiagaraOutlinerTimingData AveragePerFrameTime; // 0x54
	FNiagaraOutlinerTimingData MaxPerFrameTime; // 0x5c
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

struct FNiagaraRibbonShapeCustomVertex {
	FVector2D Position; // 0x0
	FVector2D Normal; // 0x8
	float TextureV; // 0x10
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

struct FRelentlessPredatorData {
	float StaminaRatioOnFrag; // 0x0
	float CoolDownRatioOnFrag; // 0x4
	float StaminaRatioOnAssist; // 0x8
	float CoolDownRatioOnAssist; // 0xc
};

struct FCTFloatOffsetMapping {
	UCurveFloat* Curve; // 0x0
	FCTCurveReactivity Reactivity; // 0x8
	ECTCurveReactivityType Type; // 0x1c
};

struct FTargetPlayerInfos {
	FVector2D ScreenLocation; // 0x0
	FVector WorldLocation; // 0x8
	bool InScreen; // 0x14
	bool bOccluded; // 0x15
	bool InRange; // 0x16
	float Time; // 0x18
	float LockWeight; // 0x1c
	float LockDuration; // 0x20
	bool bLocked; // 0x24
	float TotalShield; // 0x28
	float ExtraShield; // 0x2c
	float Life; // 0x30
	float RelDistanceCharge; // 0x34
	bool ChieftainShielded; // 0x38
	bool ChieftainDashing; // 0x39
	bool Enraged; // 0x3a
};

struct FAdminGetPlayedTitleListRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FCTQuestRewardData {
	int32_t XP; // 0x0
	int32_t SoftCurrency; // 0x4
	FString RewardId; // 0x8
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

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FAdminGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FClientConsumeXboxEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FClientLinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FNiagaraDebugHUDVariable {
	bool bEnabled; // 0x0
	FString Name; // 0x8
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FPlayerDamages {
	int32_t CTPlayerId; // 0x0
	float FirstTimeDamages; // 0x4
	EWeaponType FirstWeaponType; // 0x8
	float LastTimeDamages; // 0xc
	EWeaponType LastWeaponType; // 0x10
	float TotalDamages; // 0x14
};

struct FCTSpectatorStatsByMatchType {
	ECTMatchType MatchType; // 0x0
	ECTSpectatorStat SingleStat[0x3]; // 0x1
};

struct FCTShopDataBase : FCTShopPackageDataInterface {
	FString PackUID; // 0x8
	int32_t GoldPrice; // 0x18
	int32_t GemPrice; // 0x1c
	int32_t EuroPrice; // 0x20
	EPWStickerMask StickerMask; // 0x24
};

struct FPWGetLeaderboardAroundPlayerOptions {
	FString PlayerId; // 0x0
	uint32_t MaxResultCount; // 0x10
	bool FriendsOnly; // 0x14
	FString XboxToken; // 0x18
	int32_t Version; // 0x28
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FPWActivatedItem {
	int32_t Date; // 0x0
	FString Type; // 0x8
	FPWActivatedBooster Booster; // 0x18
	FPWPlayerInventory Inventory; // 0x38
	FPWQuests Quests; // 0xc8
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
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

struct FPWMatchStats {
	FString R; // 0x0
	TArray<FPWMatchModeStats> Simple; // 0x10
	TArray<FPWMatchModeStats> Ranked; // 0x20
	TArray<FPWMatchModeStats> Rookie; // 0x30
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FPWLoginResult {
	FPWSessionInfo SessionInfo; // 0x0
	bool bNewlyCreated; // 0x70
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentId; // 0x8
};

struct FClientGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FCTPlayModeDescriptor {
	TArray<ECTMatchType> Types; // 0x0
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FUsersSectionData {
	FLocalizationData Localization; // 0x0
	int32_t SectionOrder; // 0x20
	bool HideIfNoContent; // 0x24
	bool ShowDefaultWidgetIfNoContent; // 0x25
	UCTUserWidget* DefaultNoContentWidgetClass; // 0x28
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
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

struct FClientStartPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> Items; // 0x20
	FString StoreId; // 0x30
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

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool RoundFrameSizeToHardwareSize; // 0x3c
};

struct FRankingSave {
	TArray<FPersonalRanking> Rankings; // 0x0
};

struct FMultiplayerCreateBuildWithProcessBasedServerRequest : FPlayFabRequestCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildName; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x28
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x38
	FString GameWorkingDirectory; // 0x48
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x58
	bool IsOSPreview; // 0x60
	UPlayFabJsonObject* MetaData; // 0x68
	int32_t MultiplayerServerCountPerVm; // 0x70
	FString OsPlatform; // 0x78
	TArray<UPlayFabJsonObject*> Ports; // 0x88
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x98
	FString StartMultiplayerServerCommand; // 0xa8
	bool UseStreamingForAssetDownloads; // 0xb8
	EAzureVmSize VmSize; // 0xb9
};

struct FServerGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FMultiplayerDeleteBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FAdminResetPasswordRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Password; // 0x10
	FString Token; // 0x20
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FAdminSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FClientRefreshPSNAuthTokenRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	int32_t IssuerId; // 0x18
	FString RedirectUri; // 0x20
};

struct FCTItemDataTables {
	TArray<FCTItemDataTable> ImportedDataTables; // 0x10
	UDataTable* ImportedLocalization; // 0x20
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

struct FAdminGetPolicyRequest : FPlayFabRequestCommon {
	FString PolicyName; // 0x8
};

struct FAdminGetMatchmakerGameModesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GameModes; // 0x8
};

struct FDataGetObjectsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Objects; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FPWSaveQuests {
	TArray<FPWOneSaveQuest> List; // 0x0
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FClientGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FClientGetAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* AccountInfo; // 0x8
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FCTMMRUpdateRequest {
	TArray<FCTMMRUpdateTeam> Teams; // 0x0
	bool DryRun; // 0x10
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FClientUnlinkNintendoServiceAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FMultiplayerListBuildAliasesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FSoundDebugEntry {
	FName DebugName; // 0x0
	FSoftObjectPath Sound; // 0x8
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
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

struct FServerUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	FString PlayFabId; // 0x28
};

struct FStrikerRageData {
	float Duration; // 0x0
	float FragTimeBonus; // 0x4
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

struct FMultiplayerListCertificateSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> CertificateSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FDefaultAudioBusSettings {
	FSoftObjectPath AudioBus; // 0x0
};

struct FHoudiniOutputObject {
	UObject* OutputObject; // 0x0
	UObject* OutputComponent; // 0x8
	UObject* ProxyObject; // 0x10
	UObject* ProxyComponent; // 0x18
	bool bProxyIsCurrent; // 0x20
	bool bIsImplicit; // 0x21
	FString BakeName; // 0x28
	FHoudiniCurveOutputProperties CurveOutputProperty; // 0x38
	TMap<FString, FString> CachedAttributes; // 0x48
	TMap<FString, FString> CachedTokens; // 0x98
};

struct FCTPlayerQuest {
	FName QuestID; // 0x0
	FName InstanceId; // 0x8
	int32_t StartDate; // 0x10
	int32_t EndDate; // 0x14
	EPWQuestStatus Status; // 0x18
	int32_t iThresholdIndex; // 0x1c
	int32_t iCurrentProgress; // 0x20
	TMap<FString, int32_t> customData; // 0x28
	int32_t iLastMatchStartProgress; // 0x78
	bool bHaveFailInThisMatch; // 0x7c
	int32_t iLastMatchEndProgress; // 0x80
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FMovieSceneEvaluationHookEventContainer {
	TArray<FMovieSceneEvaluationHookEvent> Events; // 0x0
};

struct FAdminGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
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

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
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

struct FMultiplayerListBuildSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FClientGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
};

struct FCTBoostRefillZone_Target {
	ACTBeastPawn* Pawn; // 0x0
	int32_t NumOverlaps; // 0x8
	float ExitTime; // 0xc
	bool bHasFullRefill; // 0x10
};

struct FAdminGetPlayerIdFromAuthTokenRequest : FPlayFabRequestCommon {
	FString Token; // 0x8
	EAuthTokenType TokenType; // 0x18
};

struct FShopClassItem {
	FString ItemUID; // 0x0
	FText ItemName; // 0x10
	UTexture2D* Image; // 0x28
	ECharacClassType ClassType; // 0x30
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FHoudiniCurveOutputProperties {
	EHoudiniCurveOutputType CurveOutputType; // 0x0
	int32_t NumPoints; // 0x4
	bool bClosed; // 0x8
	EHoudiniCurveType CurveType; // 0x9
	EHoudiniCurveMethod CurveMethod; // 0xa
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FCTPingSpamSettings {
	int32_t MaxPingInTimeFrame; // 0x0
	float TimeFrame; // 0x4
	float MuteDuration; // 0x8
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
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

struct FPWMatchWonQuest {
	FString QID; // 0x0
	int32_t XP; // 0x10
	int32_t SC; // 0x14
	FString PK; // 0x18
};

struct FServerGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FAbilityHUDInfo {
	UMaterialInterface* Gauge; // 0x0
	UTexture2D* Image; // 0x8
	UTexture2D* HDImage; // 0x10
	TArray<UCTPlayerWidgetAccessory*> PlayerWidgetClasses; // 0x18
};

struct FProfilesGetEntityProfilesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Profiles; // 0x8
};

struct FCTUITransitionData {
	EGameStateUITransitionType EnumType; // 0x0
	TArray<EGameStateUIWidgetType> WidgetsToHide; // 0x8
	TArray<EGameStateUIWidgetType> WidgetsToShow; // 0x18
	UCTUITransition* TransitionClass; // 0x28
	FCTFadeToBlackTransitionData FadeToBlackData; // 0x30
	bool bFadeToBlack; // 0x44
	TArray<FString> WwiseEventsToTrigger; // 0x48
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FPWBackendError {
	FString Context; // 0x0
	int32_t Code; // 0x10
	FString Message; // 0x18
};

struct FAdminGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FServerMoveItemToCharacterFromCharacterRequest : FPlayFabRequestCommon {
	FString GivingCharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
	FString ReceivingCharacterId; // 0x38
};

struct FInsightsInsightsOperationResponse : FPlayFabResultCommon {
	FString Message; // 0x8
	FString OperationId; // 0x18
	FString OperationType; // 0x28
};

struct FLiveLinkClearSubject {
	FName SubjectName; // 0x0
};

struct FAdminUpdateRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> Tables; // 0x20
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAdminGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FAdminDeleteStoreRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString StoreId; // 0x20
};

struct FClientValidateAmazonReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptId; // 0x38
	FString UserId; // 0x48
};

struct FServerCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FServerAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
	FString PlayFabId; // 0x48
};

struct FAdminAddNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Timestamp; // 0x20
	FString Title; // 0x30
};

struct FCTLeavePenaltyLocalNotification {
	int32_t DateLock; // 0x0
};

struct FCTPackageDataTable {
	UDataTable* ImportedPackages; // 0x10
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FClientAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString VirtualCurrency; // 0x18
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FOptionsParametersData {
	TArray<FOptionsParametersSection> Sections; // 0x0
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
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

struct FGroupsListMembershipOpportunitiesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FAdminSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
};

struct FAdminAddLocalizedNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Language; // 0x20
	FString NewsId; // 0x30
	FString Title; // 0x40
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FClientGetTitlePublicKeyRequest : FPlayFabRequestCommon {
	FString TitleSharedSecret; // 0x8
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FHoudiniSplineComponentInstanceData : FActorComponentInstanceData {
	TArray<FTransform> CurvePoints; // 0x68
	TArray<FVector> DisplayPoints; // 0x78
	TArray<int32_t> DisplayPointIndexDivider; // 0x88
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FCTForceFeedbackData {
	bool bDynamic; // 0x0
	FCTAssetForceFeedbackData AssetData; // 0x8
	FCTDynamicForceFeedbackData DynamicData; // 0x20
};

struct FCTLoginInfo {
	FString PlayerId; // 0x0
	FString TitlePlayerId; // 0x10
	FUniqueNetIdRepl UniqueNetId; // 0x20
};

struct FServerGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FPWCloudCatalogContentEntry {
	TArray<FString> Items; // 0x0
	int32_t SC; // 0x10
	int32_t HC; // 0x14
	int32_t SCB; // 0x18
	int32_t HCB; // 0x1c
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FCTPKFXAttributeStruct {
	EAttributeType AttributeType; // 0x0
};

struct FClientGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
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

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FMegaSpearSettings {
	float ThrowSpeed; // 0x0
	float Damping; // 0x4
	float Gravity; // 0x8
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FClientLinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString SteamTicket; // 0x18
};

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FCTMatchRequest {
	ECTPlayMode Mode; // 0x0
	TArray<ECTMatchType> Types; // 0x8
	EMapType Map; // 0x18
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FProfilesSetEntityProfilePolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : FPlayFabResultCommon {
	FString TitleId; // 0x8
	UPlayFabJsonObject* TitlePlayerAccounts; // 0x18
};

struct FClientReportAdActivityRequest : FPlayFabRequestCommon {
	EAdActivity Activity; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlacementId; // 0x18
	FString RewardId; // 0x28
};

struct FBlastSettings {
	float ThrowSpeed; // 0x0
	float Gravity; // 0x4
	float Damping; // 0x8
	float MaxTravelDistance; // 0xc
	float ProximityTriggerDistance; // 0x10
	float ShockWaveRadius; // 0x14
	float ShockWaveSpeed; // 0x18
	FRotator RangeMeshAdditionalRotation; // 0x1c
	FBlastExplosionFXParams ExplosionFXParams; // 0x28
	FBlastCastFXParams CastFXParams; // 0x70
	bool TriggerShockwaveEvent; // 0x9c
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FCTSquadInvitation {
	FString NotifID; // 0x0
	FString PlayFabId; // 0x10
	FCTPlayerBasicInfos PInfos; // 0x20
	int32_t Date; // 0x78
	bool bSilent; // 0x7c
	bool bCheck; // 0x7d
};

struct FNiagaraOutlinerCaptureSettings {
	bool bTriggerCapture; // 0x0
	uint32_t CaptureDelayFrames; // 0x4
	bool bGatherPerfData; // 0x8
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FAdminCreatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString StatisticName; // 0x18
	EStatisticResetIntervalOption VersionChangeInterval; // 0x28
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FPWPlayerSetup {
	FString ClassID; // 0x0
	TArray<FPWClassSetup> Custo; // 0x10
	FString TitleId; // 0x20
	FString WallID; // 0x30
	FString IconID; // 0x40
	FString FanionID; // 0x50
	int32_t LastMode; // 0x60
	bool Cheater; // 0x64
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FClientGetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* CharacterStatistics; // 0x8
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
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

struct FClientAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FServerGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString PlayFabId; // 0x30
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

struct FAdminSetupPushNotificationRequest : FPlayFabRequestCommon {
	FString Credential; // 0x8
	FString Key; // 0x18
	FString Name; // 0x28
	bool OverwriteOldARN; // 0x38
	EPushSetupPlatform Platform; // 0x39
};

struct FCTPlayerAccount {
	FPWCloudOptions Options; // 0x0
	FCTPlayerSetup PlayerSetup; // 0x20
	FPWPlayerStats PlayerStatistics; // 0x90
	FCTPlayerChest PlayerChest; // 0x138
	TArray<FString> Licenses; // 0x148
	TArray<FPWPlayerDLC> DLC; // 0x158
	TArray<FString> NotOwnedDLC; // 0x168
	TArray<FCTPlayerConsumableItem> ResourceItems; // 0x178
	TArray<FCTPlayerGift> Gifts; // 0x188
	TArray<FCTPlayerEgg> Eggs; // 0x198
	FCTPlayerQuests Quests; // 0x1a8
	FCTPlayerRewards Rewards; // 0x228
	FPWOrder OrderInfos; // 0x238
	FPWMatchUpLevel NextLevelInfos; // 0x2e8
	FCTBreadcrumbManager BreadcrumbMgr; // 0x320
	FCTFTUEEventManager FTUEEventMgr; // 0x348
	FCTPlayerCollection Collection; // 0x390
	FPWNewsState StateNews; // 0x3e0
	FRandomStream RandomStream; // 0x3f8
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FAdminIncrementPlayerStatisticVersionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* StatisticVersion; // 0x8
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FLinkedPlayerAccount {
	FPWSessionPlayerInfos CloudSetup; // 0x0
	FCTNetPlayerAccount LocalSetup; // 0x148
};

struct FPWNewsState {
	int32_t CheckDate; // 0x0
	TArray<FString> Private; // 0x8
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

struct FAdminCreatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString FriendlyName; // 0x8
};

struct FBigMessage {
	FBigMessageDatas BigMessageDatas; // 0x0
	int32_t CTPlayerId; // 0x60
	int32_t ExtraParameter; // 0x64
};

struct FMultiplayerGetContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FServerAuthenticateSessionTicketResult : FPlayFabResultCommon {
	bool IsSessionTicketExpired; // 0x8
	UPlayFabJsonObject* UserInfo; // 0x10
};

struct FCTItemDataTable {
	ECTItemDataTableType EnumType; // 0x0
	UDataTable* DataTable; // 0x8
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FServerWriteServerCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EventName; // 0x28
	FString PlayFabId; // 0x38
	FString Timestamp; // 0x48
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FPrimaryAssetType {
	FName Name; // 0x0
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

struct FClientUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
};

struct FServerGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FClientUnlinkGameCenterAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FSecondWindData {
	float HealthToTrigger; // 0x0
	float Duration; // 0x4
	float HealPerSecond; // 0x8
	float StaminaPerSecond; // 0xc
	UNiagaraSystem* TriggerParticles; // 0x10
	USoundBase* TriggerSound; // 0x18
};

struct FCTMiscellanousShopData : FCTShopDataBase {
	ECTMiscellanousShopSection Section; // 0x28
};

struct FClientGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FClientValidateWindowsReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString Receipt; // 0x38
};

struct FServerGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FAuthenticationGetEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAdminRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FInsightsInsightsGetDetailsResponse : FPlayFabResultCommon {
	int32_t DataUsageMb; // 0x8
	FString ErrorMessage; // 0x10
	UPlayFabJsonObject* Limits; // 0x20
	TArray<UPlayFabJsonObject*> PendingOperations; // 0x28
	int32_t PerformanceLevel; // 0x38
	int32_t RetentionDays; // 0x3c
};

struct FNiagaraOutlinerData {
	TMap<FString, FNiagaraOutlinerWorldData> WorldData; // 0x0
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FCTHighlightParams {
	UCanvasPanel* HighlightsHolder; // 0x0
	int32_t ZOrder; // 0x8
	ECTTutorialHighlightType HighlightType; // 0xc
	bool EnableSnap; // 0xe
};

struct FAdminGetDataReportRequest : FPlayFabRequestCommon {
	int32_t Day; // 0x8
	int32_t Month; // 0xc
	FString ReportName; // 0x10
	int32_t Year; // 0x20
};

struct FClientUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x10
};

struct FServerDeleteSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
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

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
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

struct FCTComponentData {
	USceneComponent* FinalSceneComp; // 0x0
	USceneComponent* InitialSceneComp; // 0x8
	FCTSmoothFloat SwitchSmoother; // 0x10
};

struct FClientLoginWithGoogleAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString ServerAuthCode; // 0x40
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
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

struct FClientGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString StatisticName; // 0x10
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FAdminGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FAdminGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FLiveLinkTransformStaticData : FLiveLinkBaseStaticData {
	bool bIsLocationSupported; // 0x10
	bool bIsRotationSupported; // 0x11
	bool bIsScaleSupported; // 0x12
};

struct FCTInputAxisKeyMapping : FInputAxisKeyMapping {
	float OriginScale; // 0x28
	bool bIsDefault; // 0x2c
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FCTDamageHistory {
	TArray<float> ServerDate; // 0x0
};

struct FMultiplayerCreateTitleMultiplayerServersQuotaChangeResponse : FPlayFabResultCommon {
	FString RequestId; // 0x8
	bool WasApproved; // 0x18
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FSystemPopupQuery {
	USystemPopupParameters* Parameters; // 0x8
};

struct FClientGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAbilityDatas {
	EAbility AbilityEnum; // 0x0
	int32_t MaxAmmo; // 0x4
	int32_t BaseAmmo; // 0x8
	float AmmoRefillDelay; // 0xc
	float UseCooldown; // 0x10
	FAbilityHUDInfo HUDInfos; // 0x18
	FText DisplayText; // 0x40
	FText DescriptionText; // 0x58
	FCTLinkedArmamentData LinkedArmamentData; // 0x70
};

struct FAdminAddVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FServerGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FAdminGetSegmentsRequest : FPlayFabRequestCommon {
	FString SegmentIds; // 0x8
};

struct FClientGetAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FDataDeleteFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
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

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FCTPlayerInfos {
	FCTNetIds NetId; // 0x0
	ACTPlayerState* State; // 0x28
	bool IsHere; // 0x30
	bool IsServer; // 0x31
	int32_t TeamId; // 0x34
	ECharacClassType ECharacClassType; // 0x38
	FString PlayerName; // 0x40
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FPlayerScores : FTableRowBase {
	TArray<FPlayerScoreLog> PlayerScores; // 0x8
};

struct FBevelImage {
	UImage* Start; // 0x0
	UImage* End; // 0x8
};

struct FCTDropdownOption : FCTUIDLocalizedInterface {
	ECTDropDownOptionType Type; // 0x8
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FCTNews : FTableRowBase {
	FString UID; // 0x8
	int32_t TypePopup; // 0x18
	int32_t Start; // 0x1c
	int32_t End; // 0x20
	TArray<FString> Text; // 0x28
	TArray<FString> TexturePath; // 0x38
	TArray<FString> URL; // 0x48
	TArray<FSlateBrush> Texture; // 0x58
	TArray<FCTNewsStatus> TextureStatus; // 0x68
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FPWOrder {
	TMap<FString, FPWCRMInfos> CRM; // 0x0
	FPWBaseOrder OrderSteam; // 0x50
	FPWBaseOrder OrderMSFT; // 0x70
	FPWBaseOrder OrderSoft; // 0x90
};

struct FAdminCheckLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString ItemId; // 0x18
};

struct FClientLinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceID; // 0x10
	FString DeviceModel; // 0x20
	bool ForceLink; // 0x30
	FString OS; // 0x38
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FServerAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FAggregatedWorkItemTally : FWorkItemTallyBase {
	int32_t TotalWorkItems; // 0x8
	int32_t WaitingWorkItems; // 0xc
	int32_t ScheduledWorkItems; // 0x10
	int32_t CookingWorkItems; // 0x14
	int32_t CookedWorkItems; // 0x18
	int32_t ErroredWorkItems; // 0x1c
	int32_t CookCancelledWorkItems; // 0x20
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FClientPayForPurchaseRequest : FPlayFabRequestCommon {
	FString Currency; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString OrderId; // 0x20
	FString ProviderName; // 0x30
	FString ProviderTransactionId; // 0x40
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FMultiplayerRequestMultiplayerServerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* BuildAliasParams; // 0x8
	FString BuildId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString InitialPlayers; // 0x28
	FString PreferredRegions; // 0x38
	FString SessionCookie; // 0x48
	FString SessionId; // 0x58
};

struct FSegmentSettings {
	bool bOverrideForwardAxis; // 0x0
	ESplineMeshAxis ForwardAxis; // 0x1
	bool bOverrideStartScale; // 0x2
	FVector2D StartScale; // 0x4
	bool bOverrideEndScale; // 0xc
	FVector2D EndScale; // 0x10
	bool bOverrideStaticMesh; // 0x18
	UStaticMesh* StaticMesh; // 0x20
	bool bOverrideMaterial; // 0x28
	UMaterial* Material; // 0x30
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FClientGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FClientUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
};

struct FMultiplayerUploadCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* GameCertificate; // 0x10
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FPWCatalogContent {
	TArray<FPWCloudCatalogEntry> Catalog; // 0x0
	TArray<FPWCloudSpecialItemsEntry> SpecialItems; // 0x10
	int32_t VStore; // 0x20
	int32_t VCatalog; // 0x24
};

struct FMultiplayerUpdateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
};

struct FServerGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
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

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FAdminResetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
};

struct FTOPWorkResult {
	int32_t WorkItemIndex; // 0x0
	int32_t WorkItemID; // 0x4
	TArray<FTOPWorkResultObject> ResultObjects; // 0x8
};

struct FAdminListBuildsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Builds; // 0x8
};

struct FGroupsListGroupApplicationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FCTRewardData {
	UCTReward* RewardClass; // 0x0
	int32_t Integer; // 0x8
	FString String; // 0x10
	FCTRewardChanceDistribution ChanceDistribution; // 0x20
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FClientCurrentGamesResult : FPlayFabResultCommon {
	int32_t GameCount; // 0x8
	TArray<UPlayFabJsonObject*> Games; // 0x10
	int32_t PlayerCount; // 0x20
};

struct FMultiplayerCreateBuildWithCustomContainerResponse : FPlayFabResultCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildId; // 0x10
	FString BuildName; // 0x20
	EContainerFlavor ContainerFlavor; // 0x30
	FString ContainerRunCommand; // 0x38
	FString CreationTime; // 0x48
	UPlayFabJsonObject* CustomGameContainerImage; // 0x58
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x60
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x70
	UPlayFabJsonObject* LinuxInstrumentationConfiguration; // 0x80
	UPlayFabJsonObject* MetaData; // 0x88
	int32_t MultiplayerServerCountPerVm; // 0x90
	FString OsPlatform; // 0x98
	TArray<UPlayFabJsonObject*> Ports; // 0xa8
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0xb8
	FString ServerType; // 0xc8
	bool UseStreamingForAssetDownloads; // 0xd8
	EAzureVmSize VmSize; // 0xd9
};

struct FMultiplayerGetQueueStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
};

struct FClientConsumePSNEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t ServiceLabel; // 0x20
};

struct FAdminGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FServerGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FBattleEvent {
	EBattleEventEnum BattleEvent; // 0x0
	TArray<int32_t> Parameters; // 0x8
};

struct FCTPlayerBasicInfos {
	FString PlayFabId; // 0x0
	FString PlatformID; // 0x10
	FString Name; // 0x20
	FString IconID; // 0x30
	int32_t HMMR; // 0x40
	int32_t MRS1; // 0x44
	int32_t Level; // 0x48
	int32_t PresenceDate; // 0x4c
	EPWPresence PresenceState; // 0x50
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FCTBackendId {
	FString ID; // 0x0
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FClientGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FCTFriendInvitation {
	FString NotifID; // 0x0
	FString PlayFabId; // 0x10
	FCTPlayerBasicInfos PInfos; // 0x20
	int32_t Date; // 0x78
	bool bSilent; // 0x7c
	bool bCheck; // 0x7d
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

struct FClientLoginResult : FPlayFabLoginResultCommon {
	UPlayFabJsonObject* EntityToken; // 0x10
	UPlayFabJsonObject* InfoResultPayload; // 0x18
	FString LastLoginTime; // 0x20
	bool NewlyCreated; // 0x30
	FString PlayFabId; // 0x38
	FString SessionTicket; // 0x48
	UPlayFabJsonObject* SettingsForUser; // 0x58
	UPlayFabJsonObject* TreatmentAssignment; // 0x60
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

