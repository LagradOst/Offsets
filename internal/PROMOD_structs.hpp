// Created by BlueFire1337
// Updated 2022-01-20
// Generated 2022-01-23

#pragma once

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FClientGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FClientPurchaseItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ItemId; // 0x28
	int32_t Price; // 0x38
	FString StoreId; // 0x40
	FString VirtualCurrency; // 0x50
};

struct FAdminGetMatchmakerGameModesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GameModes; // 0x8
};

struct FAdminUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FAdminGetPolicyRequest : FPlayFabRequestCommon {
	FString PolicyName; // 0x8
};

struct FClientLoginWithEmailAddressRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString Password; // 0x20
};

struct FEconomyGetSubscriptionByMarketplaceOfferIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	UPlayFabJsonObject* MarketplaceOfferId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x18
};

struct FAdminGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
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

struct FClientGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FServerGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
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

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
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

struct FServerUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FClientAddOrUpdateContactEmailRequest : FPlayFabRequestCommon {
	FString EmailAddress; // 0x8
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FAdminRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
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

struct FClientGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FClientLoginWithAppleRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	FString IdentityToken; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FServerSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
	FString Tags; // 0x28
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FMultiplayerListBuildSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FCosmeticItem {
	ECosmeticType CosmeticType; // 0x0
	UTexture2D* CosmeticIcon; // 0x8
	UTexture2D* CosmeticPreviewImage; // 0x10
	USkeletalMesh* Mesh_3P_Friendly; // 0x18
	USkeletalMesh* Mesh_3P_Enemy; // 0x20
	FString Name; // 0x28
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FServerRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
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

struct FJumperLeaderboardElement {
	FName PlayerNickname; // 0x0
	int32_t PlayerRank; // 0x8
	int32_t CourseTimeInMilliseconds; // 0xc
	int32_t NumRespawns; // 0x10
	FUniqueNetIdRepl PlayerNetId; // 0x18
};

struct FRarityColourEntity {
	ESkinRarity Rarity; // 0x0
	FLinearColor Colour; // 0x4
};

struct FGroupsIsMemberRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FAdminGetServerBuildUploadURLRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FEconomyGetPublishedItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FClientGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FServerGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableIDs; // 0x18
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FOverviewKillStatsData {
	FString Headshots; // 0x0
	FString DoubleKills; // 0x10
	FString TripleKills; // 0x20
	FString QuadraKills; // 0x30
	FString PentaKills; // 0x40
	FString KillingSpree; // 0x50
	FString Killtastic; // 0x60
	FString Rampage; // 0x70
	FString Godlike; // 0x80
};

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FSMNodeClassRule {
	bool bIncludeChildren; // 0x8
	bool bNOT; // 0x9
};

struct FServerGetPlayerProfileRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FServerGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
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

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FMapPackStatsEntity {
	FString PackName; // 0x0
	TArray<FMapStatList> MapStats; // 0x10
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FTeamLedger {
	TArray<FTokenEvent> Events; // 0x0
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

struct FMultiplayerRequestPartyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* BuildAliasParams; // 0x8
	FString PartyId; // 0x10
	FString PreferredRegions; // 0x20
	FString SessionCookie; // 0x30
	FString Version; // 0x40
};

struct FMultiplayerGetBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
};

struct FFireUpActionData {
	EFireUpActionType ActionType; // 0x0
	float Score; // 0x4
	FText Title; // 0x8
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FAuthenticationCreateAPIKeyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Key; // 0x10
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FEconomyAddVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FEconomyUpdateSubscriptionRequest : FPlayFabRequestCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Subscription; // 0x18
};

struct FClientRegisterWithWindowsHelloRequest : FPlayFabRequestCommon {
	FString DeviceName; // 0x8
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString PublicKey; // 0x40
	FString Username; // 0x50
};

struct FGroupsChangeMemberRoleRequest : FPlayFabRequestCommon {
	FString DestinationRoleId; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	TArray<UPlayFabJsonObject*> Members; // 0x20
	FString OriginRoleId; // 0x30
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FClientGetPurchaseResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString PaymentProvider; // 0x18
	FString PurchaseDate; // 0x28
	FString TransactionId; // 0x38
	FString TransactionStatus; // 0x48
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FAimTrainingResults {
	float ActiveTrainingTime; // 0x0
	int32_t ActiveTrainingTargetsHit; // 0x4
	float ActiveTrainingTotalAccuracy; // 0x8
	float ActiveTrainingCurrentAccuracy; // 0xc
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

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
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

struct FAdminUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FProfilesGetEntityProfilesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Profiles; // 0x8
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FServerCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FServerSubtractCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
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

struct FLoadoutSlot {
	EWeaponArchetype SlotArchetype; // 0x0
	EParentModKit SlotModkit; // 0x1
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
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

struct FAveragePingPayload {
	int32_t AveragePing; // 0x0
};

struct FMatchEndedPayload {
	int32_t Seconds; // 0x0
	FString MapName; // 0x8
};

struct FClientStartPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	FString OrderId; // 0x18
	TArray<UPlayFabJsonObject*> PaymentOptions; // 0x28
	UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38
};

struct FMultiplayerGetMultiplayerServerLogsResponse : FPlayFabResultCommon {
	FString LogDownloadUrl; // 0x8
};

struct FLeaderboardsIncrementStatisticVersionRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
};

struct FServerMoveItemToUserFromCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FSeriesStyleManualMapping {
	FName SeriesId; // 0x0
	FKantanSeriesStyle Style; // 0x8
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FAdminGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FAdminGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FAdminCreatePlayerSharedSecretResult : FPlayFabResultCommon {
	FString SecretKey; // 0x8
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FEconomySetUgcItemModerationStateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
	FString Reason; // 0x20
	EModerationStatus Status; // 0x30
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FSMStateConnectionValidator : FSMConnectionValidator {
	TArray<FSMStateClassRule> AllowedInboundStates; // 0x0
	TArray<FSMStateClassRule> AllowedOutboundStates; // 0x10
	TArray<FSMStateMachineClassRule> AllowedInStateMachines; // 0x20
};

struct FAdminGetMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FDeathAnim {
	UAnimMontage* DeathAnim; // 0x0
	float RagdollDelay; // 0x8
	float RagdollLimpDelay; // 0xc
	float InitialMuscleStrength; // 0x10
	float InitialLegsMuscleStrength; // 0x14
	float InitialAnimPhysicsBlend; // 0x18
	float TimeToBlendToPhysics; // 0x1c
	float RandomWeight; // 0x20
	float RandomSpin; // 0x24
	FVector AdditionalImpulse; // 0x28
	FVector AdditionalAngularImpulse; // 0x34
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
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

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FAdminUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FCachedNetStatData {
	float NetStatDataTime; // 0x0
	int32_t LostSentPackets; // 0x4
	int32_t LostRecievedPackets; // 0x8
	int32_t SentPackets; // 0xc
	int32_t RecievedPackets; // 0x10
};

struct FAkXSXAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
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

struct FServerGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FMultiplayerGetMultiplayerServerDetailsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString SessionId; // 0x28
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FAdminModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FClientUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
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

struct FEconomySearchBundlesRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t TOP; // 0x60
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FServerGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FServerRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FLastMinuteKillTracker {
	ABattalionPlayerControllerGMBase* Player; // 0x0
	int32_t Kills; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FServerGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FClientGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FMultiplayerListContainerImagesResponse : FPlayFabResultCommon {
	FString Images; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FEconomyCreateDraftItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FDebugRay {
	FString Name; // 0x0
	FVector Start; // 0x10
	FVector End; // 0x1c
	FHitResult Hit; // 0x28
};

struct FWeaponCosmeticData {
	FWeaponVisualData VisualData; // 0x0
	FWeaponAudioData AudioData; // 0x350
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FAdminUpdatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FAdminDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientCancelTradeRequest : FPlayFabRequestCommon {
	FString TradeId; // 0x8
};

struct FEconomyGetBundleByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FMapData {
	FString MapName; // 0x0
	FString TeamOneNation; // 0x10
	FString TeamTwoNation; // 0x20
};

struct FTickedIntervalScoreAwardEntity {
	APromodPlayerState* PlayerToAward; // 0x0
	EScoreAwardType ScoreAwardType; // 0x8
	int32_t AwardedCount; // 0xc
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FEconomyGetDraftItemsResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	int32_t Count; // 0x18
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FSkinMaterialSet {
	FSoftObjectPath FP_Mat_Path; // 0x0
	FSoftObjectPath ThreeP_Mat_Path; // 0x18
	int32_t Material_Slot_Index; // 0x30
};

struct FPromodWeaponInfo {
	char ID; // 0x0
	FString Name; // 0x8
	EWeaponType Type; // 0x18
	ABattalionWeapon* Class; // 0x20
	FSlateBrush Image; // 0x28
	EWeaponArchetype Category; // 0xb0
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FAdminGetServerBuildUploadURLResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FClientConsumeXboxEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString XboxToken; // 0x18
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FBattalionLoadoutWeaponInfo {
	ABattalionWeapon* WeaponClass; // 0x0
	EWeaponType WeaponType; // 0x8
	FString DisplayName; // 0x10
	FSlateBrush WeaponImage; // 0x20
};

struct FEconomyCraftRecipeResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> CraftedItems; // 0x8
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Ingredients; // 0x28
	TArray<UPlayFabJsonObject*> InventoryItems; // 0x38
	bool InventoryTooLarge; // 0x48
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FServerAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAdminGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	int32_t MaxBatchSize; // 0x18
	int32_t SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FServerSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FSMNodeConnectionRule {
	FSMStateClassRule FromState; // 0x0
	FSMStateClassRule ToState; // 0x38
	FSMStateMachineClassRule InStateMachine; // 0x70
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

struct FSMNode_Base {
	FSMExposedFunctionHandler GraphEvaluator; // 0x8
	float TimeInState; // 0x28
	bool bIsInEndState; // 0x2c
	bool bHasUpdated; // 0x2d
	TArray<FSMExposedFunctionHandler> TransitionInitializedGraphEvaluators; // 0x30
	TArray<FSMExposedFunctionHandler> TransitionShutdownGraphEvaluators; // 0x40
	int32_t DuplicateId; // 0x50
	FGuid Guid; // 0x54
	FGuid OwnerGuid; // 0x64
	FGuid PathGuid; // 0x74
	FString NodeName; // 0x90
	FName TemplateName; // 0xa0
	TArray<FName> StackTemplateNames; // 0xa8
	TArray<USMNodeInstance*> StackNodeInstances; // 0xb8
	USMInstance* OwningInstance; // 0xc8
	USMNodeInstance* NodeInstance; // 0xd0
	TArray<FSMGraphProperty_Base_Runtime> VariableGraphProperties; // 0xe8
	UObject* NodeInstanceClass; // 0xf8
};

struct FAdminRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerGetLeaderboardAroundUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
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

struct FBattalionSubCardTemplate {
	FString UniqueName; // 0x0
	ENationType NationName; // 0x10
	FString MainWeapon; // 0x18
	FString Sidearm; // 0x28
	int32_t GrenadeCount; // 0x38
	int32_t SpecialGrenadeCount; // 0x3c
	int32_t Cost; // 0x40
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

struct FServerLinkServerCustomIdRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString ServerCustomId; // 0x20
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FAdminGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentId; // 0x8
};

struct FServerLinkXboxAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString XboxToken; // 0x20
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FClientCancelTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FAdminAddLocalizedNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	FString Language; // 0x18
	FString NewsId; // 0x28
	FString Title; // 0x38
};

struct FServerGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FClientGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FServerGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FNationSound {
	UAkAudioEvent* GER_Sound; // 0x0
	UAkAudioEvent* US_Sound; // 0x8
	UAkAudioEvent* RUS_Sound; // 0x10
	UAkAudioEvent* BRIT_Sound; // 0x18
};

struct FClientGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
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

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FMultiplayerListCertificateSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FKey {
	FName KeyName; // 0x0
};

struct FFireImpact {
	FVector SpawnLocation; // 0x0
	FHitResult HitResult; // 0xc
};

struct FClientRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FEconomyCreateUploadUrlsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> UploadUrls; // 0x8
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

struct FClientGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FServerUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	bool ForceUpdate; // 0x8
	FString PlayFabId; // 0x10
	TArray<UPlayFabJsonObject*> Statistics; // 0x20
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FLeaderboardsGetLeaderboardForEntitiesRequest : FPlayFabRequestCommon {
	FString ChildName; // 0x8
	FString Entities; // 0x18
	FString EntityType; // 0x28
	FString StatisticName; // 0x38
	int32_t StatisticVersion; // 0x48
};

struct FServerGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
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

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
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

struct FAdminSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FStunResult {
	APromodCharacter* StunedCharacterPtr; // 0x0
	float StunDuration; // 0x8
	float StunPower; // 0xc
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
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

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
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

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FClientLoginWithKongregateRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString KongregateId; // 0x38
	FString PlayerSecret; // 0x48
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FExperimentationDeleteExperimentRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
};

struct FServerGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FClientConfirmPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
};

struct FMultiplayerGetMatchmakingTicketRequest : FPlayFabRequestCommon {
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FServerUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
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

struct FEconomyCreateBundleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
};

struct FServerRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	FString PlayFabId; // 0x38
};

struct FServerGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FServerUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FClientGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FMatchmakerStartGameRequest : FPlayFabRequestCommon {
	FString Build; // 0x8
	FString CustomCommandLineData; // 0x18
	FString ExternalMatchmakerEventEndpoint; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FAdminDeletePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString SecretKey; // 0x8
};

struct FAdminResolvePurchaseDisputeRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	EResolutionOutcome Outcome; // 0x18
	FString PlayFabId; // 0x20
	FString Reason; // 0x30
};

struct FMultiplayerCreateBuildWithManagedContainerRequest : FPlayFabRequestCommon {
	FString BuildName; // 0x8
	EContainerFlavor ContainerFlavor; // 0x18
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x20
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x30
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x40
	UPlayFabJsonObject* MetaData; // 0x48
	int32_t MultiplayerServerCountPerVm; // 0x50
	TArray<UPlayFabJsonObject*> Ports; // 0x58
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x68
	FString StartMultiplayerServerCommand; // 0x78
	EAzureVmSize VmSize; // 0x88
};

struct FServerGetUserAccountInfoRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
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

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FAdminGetPlayerIdFromAuthTokenResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
};

struct FAdminUpdateTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
	EScheduledTaskType Type; // 0x50
};

struct FClientGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FServerGrantItemsToCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FServerUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FMultiplayerCancelMatchmakingTicketRequest : FPlayFabRequestCommon {
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FClientWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FServerGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMapDataCollection {
	TArray<FMapData> MapData; // 0x0
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FClientLoginWithSteamRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString SteamTicket; // 0x38
};

struct FServerGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	FString PlayFabId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
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

struct FServerGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FAdminRunTaskResult : FPlayFabResultCommon {
	FString TaskInstanceId; // 0x8
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FServerGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FClientUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
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

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FGroupsListGroupBlocksResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BlockedEntities; // 0x8
};

struct FClientGetLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
};

struct FAdminDeleteOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
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

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FEconomyReportReviewRequest : FPlayFabRequestCommon {
	EConcernCategory ConcernCategory; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString ReviewId; // 0x18
};

struct FClientLoginWithIOSDeviceIDRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString DeviceID; // 0x10
	FString DeviceModel; // 0x20
	FString EncryptedRequest; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString OS; // 0x48
	FString PlayerSecret; // 0x58
};

struct FMultiplayerUploadCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GameCertificate; // 0x8
};

struct FSMGraphProperty_Base : FSMGraphProperty_Base_Runtime {
	FName VariableName; // 0x50
	FEdGraphPinType VariableType; // 0x58
	FMemberReference MemberReference; // 0xb0
	bool bIsInArray; // 0xe8
	FGuid GuidUnmodified; // 0xec
	FGuid TemplateGuid; // 0xfc
	int32_t GuidIndex; // 0x10c
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FEconomyGrantInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
};

struct FEconomyDeleteStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FClientGetAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FClientSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString EncryptedRequest; // 0x8
	FString PlayerSecret; // 0x18
};

struct FMultiplayerListBuildAliasesForTitleResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildAliases; // 0x8
};

struct FPFMatchInfo {
	FString BuildId; // 0x0
	FString MatchID; // 0x10
	FString ExternalAddr; // 0x20
	int32_t ExternalPort; // 0x30
	FString Region; // 0x38
	FString QueueName; // 0x48
	int32_t QueueMaxPlayers; // 0x58
	TMap<FString, FPFPlayerInfo> Players; // 0x60
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FClientLinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FSMState_Base : FSMNode_Base {
	char bIsRootNode : 1; // 0x108
	char bAlwaysUpdate : 1; // 0x108
	char bEvalTransitionsOnStart : 1; // 0x108
	char bDisableTickTransitionEvaluation : 1; // 0x108
	char bStayActiveOnStateChange : 1; // 0x108
	char bAllowParallelReentry : 1; // 0x108
	FSMExposedFunctionHandler OnRootStateMachineStartedGraphEvaluator; // 0x110
	FSMExposedFunctionHandler OnRootStateMachineStoppedGraphEvaluator; // 0x130
};

struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FLeaderboardsUpdateStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityLeaderboardMetadata; // 0x10
	int32_t ExpectedProfileVersion; // 0x20
	bool ForceUpdate; // 0x24
	TArray<UPlayFabJsonObject*> Statistics; // 0x28
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FSubModeSchema {
	TArray<FSubModeParent> SubModeData; // 0x0
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FPFPlayerInfo {
	FPFPlayerId PlayerId; // 0x0
	FString PlayerName; // 0x20
	TArray<FPFRegionInfo> RegionInfo; // 0x30
	FString TeamId; // 0x40
	TMap<FString, FString> AttributeStrings; // 0x50
	TMap<FString, float> AttributeNumbers; // 0xa0
};

struct FClientGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FEconomySearchInStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
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

struct FClientGetPhotonAuthenticationTokenRequest : FPlayFabRequestCommon {
	FString PhotonApplicationId; // 0x8
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

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
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

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FEconomySubtractVirtualCurrenciesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	FString IdempotencyId; // 0x20
};

struct FAdminGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
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

struct FHQMode_ZoneProperties {
	float EnemySpawnInfluenceWeightingScalar; // 0x0
	float AllySpawnInfluenceWeightingScalar; // 0x4
	float EnemySpawnInfluenceDistanceScalar; // 0x8
	float AllySpawnInfluenceDistanceScalar; // 0xc
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FServerGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FAdminSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
};

struct FEconomyGetMyReviewResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Review; // 0x8
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FEconomyCreateRecipeRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* Recipe; // 0x20
};

struct FKantanSeriesStyle {
	FName StyleId; // 0x0
	UKantanPointStyle* PointStyle; // 0x8
	FLinearColor Color; // 0x10
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FAdminUpdateCatalogItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
	FString CatalogVersion; // 0x18
	bool SetAsDefaultCatalog; // 0x28
};

struct FClientGetPlayFabIDsFromTwitchIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FCloudScriptPostFunctionResultForScheduledTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
	UPlayFabJsonObject* ScheduledTaskId; // 0x18
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

struct FKantanCartesianPlotScale {
	ECartesianScalingType Type; // 0x0
	FVector2D Scale; // 0x4
	FVector2D FocalCoordinates; // 0xc
	FCartesianAxisRange RangeX; // 0x14
	FCartesianAxisRange RangeY; // 0x1c
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FAdminAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FMultiplayerListQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
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

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FOneManArmyTimerTracker {
	int32_t StartTimeStamp; // 0x0
	int32_t Kills; // 0x4
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FClientGetPlayFabIDsFromKongregateIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FClientLoginWithNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString NintendoSwitchDeviceId; // 0x28
	FString PlayerSecret; // 0x38
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
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

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FClientGetPhotonAuthenticationTokenResult : FPlayFabResultCommon {
	FString PhotonCustomAuthenticationToken; // 0x8
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

struct FMultiplayerCreateBuildWithManagedContainerResponse : FPlayFabResultCommon {
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	EContainerFlavor ContainerFlavor; // 0x28
	FString CreationTime; // 0x30
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x40
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x50
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x60
	UPlayFabJsonObject* MetaData; // 0x68
	int32_t MultiplayerServerCountPerVm; // 0x70
	TArray<UPlayFabJsonObject*> Ports; // 0x78
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x88
	FString StartMultiplayerServerCommand; // 0x98
	EAzureVmSize VmSize; // 0xa8
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
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

struct FEconomyDeleteSubscriptionByFriendlyIdRequest : FPlayFabRequestCommon {
	FString FriendlyId; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FGizmoSaveData {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float Time; // 0x18
	EStanceType Stance; // 0x1c
	bool bIsCheckpoint; // 0x1d
};

struct FKillPayload {
	FString Archetype; // 0x0
	FString ModKit; // 0x10
	FString WeaponName; // 0x20
	FString MapName; // 0x30
};

struct FInGameAchievementInfo {
	FString ID; // 0x0
	EInGameAchievementStat Stat; // 0x10
	int32_t Value; // 0x14
};

struct FMapEditorObjectSaveData {
	FGameplayTag ObjectId; // 0x0
	FTransform ObjectTransform; // 0x10
	TArray<FMapEditorObjectBoolVariable> ObjectBoolVariables; // 0x40
	TArray<FMapEditorObjectFloatVariable> ObjectFloatVariables; // 0x50
	TArray<FMapEditorObjectIntVariable> ObjectIntVariables; // 0x60
	TArray<FMapEditorObjectStringVariable> ObjectStringVariables; // 0x70
};

struct FLocalizationGetLanguageListResponse : FPlayFabResultCommon {
	FString LanguageList; // 0x8
};

struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FAuthenticationGetAPIKeysRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FAdminGetTasksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FEconomyReviewSummaryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* LeastFavorableReview; // 0x8
	UPlayFabJsonObject* MostFavorableReview; // 0x10
	UPlayFabJsonObject* Rating; // 0x18
	int32_t ReviewsCount; // 0x20
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
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

struct FServerSavePushNotificationTemplateResult : FPlayFabResultCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FProScoreInfo {
	EProScoreType ProScoreType; // 0x0
	int32_t MinLevel; // 0x4
	UTexture2D* Icon; // 0x8
	FText Description; // 0x10
	FColor Colour; // 0x28
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
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

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FEconomySubtractVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FAdminRemoveVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
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

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FWeaponCosmeticDataArray {
	EWeaponType WeaponType; // 0x0
	TArray<FWeaponCosmeticData> CosmeticData; // 0x8
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

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FAdminRefundPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	FString PlayFabId; // 0x18
	FString Reason; // 0x28
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FDataSetObjectsResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	TArray<UPlayFabJsonObject*> SetResults; // 0x10
};

struct FMatchData {
	TArray<FFrameEvents> FrameEvents; // 0x0
	TArray<FSpawnData> Spawns; // 0x10
	FDateTime Time; // 0x20
	FString LevelName; // 0x28
};

struct FGroupsUpdateGroupRequest : FPlayFabRequestCommon {
	FString AdminRoleId; // 0x8
	int32_t ExpectedProfileVersion; // 0x18
	UPlayFabJsonObject* Group; // 0x20
	FString GroupName; // 0x28
	FString MemberRoleId; // 0x38
};

struct FClientUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
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

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
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

struct FClientGetTitlePublicKeyResult : FPlayFabResultCommon {
	FString RSAPublicKey; // 0x8
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FServerGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticName; // 0x20
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FClientGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FKick {
	float TimePassed; // 0x0
	FVector2D KickMagnitude; // 0x4
	UCurveFloat* KickCurve; // 0x10
	UCurveFloat* RecoveryCurve; // 0x18
};

struct FServerGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FServerUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FAdminCreateCloudScriptAzureFunctionsTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FKantanCategoryStyle {
	FName CategoryStyleId; // 0x0
	FLinearColor Color; // 0x8
};

struct FClientGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	bool Result; // 0x28
};

struct FClientLinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString NintendoSwitchDeviceId; // 0x10
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FLeaderboardsUpdateStatisticsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	UPlayFabJsonObject* Statistics; // 0x18
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
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

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FClientGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FServerWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FPendingChallengeComplete {
	FString ChallengeCompletedDesc; // 0x0
	FString ChallengeCompletedType; // 0x10
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FClientGetPlayerTagsRequest : FPlayFabRequestCommon {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FExperimentationCreateExperimentRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	int32_t Duration; // 0x18
	EExperimentType ExperimentType; // 0x1c
	FString Name; // 0x20
	FString SegmentId; // 0x30
	FString StartDate; // 0x40
	FString TitlePlayerAccountTestIds; // 0x50
	TArray<UPlayFabJsonObject*> Variants; // 0x60
};

struct FServerGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FServerRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FMultiplayerDeleteCertificateRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
};

struct FAdminAddServerBuildRequest : FPlayFabRequestCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
};

struct FEconomyCreateCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Currency; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAdminGetCloudScriptRevisionResult : FPlayFabResultCommon {
	FString CreatedAt; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool IsPublished; // 0x28
	int32_t Revision; // 0x2c
	int32_t Version; // 0x30
};

struct FEconomyUpdateCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Currency; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
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

struct FAdminRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FAdminCreateInsightsScheduledScalingTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FServerGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FEconomyGetInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* ReceiptData; // 0x20
	bool ShouldGenerateReceipt; // 0x28
};

struct FVolatileStage {
	float HealthPercentage; // 0x0
	UParticleSystem* ParticleSystemPtr; // 0x8
	FVector ParticleSystemLocalLocation; // 0x10
	UCameraShakeBase* CameraShakeClass; // 0x20
	UStaticMesh* MeshSwapPtr; // 0x28
	TArray<FVolatileMaterialElement> MaterialSwaps; // 0x30
	UAkAudioEvent* AudioEventPtr; // 0x40
};

struct FSMTransitionConnectionValidator : FSMConnectionValidator {
	TArray<FSMNodeConnectionRule> AllowedConnections; // 0x0
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FTextData {
	FSlateFontInfo Font; // 0x0
	FSlateColor ColorAndOpacity; // 0x58
};

struct FEconomyGetBundleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x20
};

struct FAdminExportMasterPlayerDataResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
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

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FKantanChartStyle : FSlateWidgetStyle {
	FSlateBrush Background; // 0x8
	FLinearColor ChartLineColor; // 0x90
	float ChartLineThickness; // 0xa0
	FSlateFontInfo BaseFont; // 0xa8
	int32_t TitleFontSize; // 0x100
	int32_t AxisDescriptionFontSize; // 0x104
	int32_t AxisValueFontSize; // 0x108
	FLinearColor FontColor; // 0x10c
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FEconomyGrantInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FClientUnlinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDeviceId; // 0x8
};

struct FClientValidateAmazonReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FServerAuthenticateSessionTicketRequest : FPlayFabRequestCommon {
	FString SessionTicket; // 0x8
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

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FServerRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FClientValidateWindowsReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FRoundStats {
	int32_t Round; // 0x0
	int32_t Kills; // 0x4
	int32_t DamageDealt; // 0x8
	int32_t TimeAlive; // 0xc
	float HeadShotPercentage; // 0x10
	int32_t EquipmentValue; // 0x14
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
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

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FServerGetUserInventoryRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FAdminGetCloudScriptVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Versions; // 0x8
};

struct FNUIButtonBackgroundAppearance {
	FSlateBrush Brush; // 0x0
	EHorizontalAlignment HorizontalAlignment; // 0x88
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
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

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FClientGetLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FClientGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FAdminGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FLoadoutWeapon {
	ELoadoutWeaponType WeaponType; // 0x0
	EWeaponType WeaponEnum; // 0x1
	FString Name; // 0x8
	FSlateBrush Image; // 0x18
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FServerRemovePlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FProjectileWeaponData {
	ABattalionProjectile* ProjectileClass; // 0x0
	float ProjectileLife; // 0x8
	int32_t ExplosionDamage; // 0xc
	float ExplosionRadius; // 0x10
	UDamageType* DamageType; // 0x18
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FAkXSXApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FExperimentationStartExperimentRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
};

struct FAdminSetPublishedRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FTeamOutfit {
	TArray<FClassOutfit> ClassOutfits; // 0x0
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FDataAbortFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FGroupsBlockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientLoginWithOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	FString IdToken; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString PlayerSecret; // 0x48
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
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

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
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

struct FGrenadeInfo {
	float GrenadeAngle; // 0x0
	float GrenadeDamage; // 0x4
	ABattalionGrenade* LinkedGrenade; // 0x8
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
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

struct FEconomyCreateSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Subscription; // 0x18
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPlayerLocationSum {
	ABattalionCharacter* Player; // 0x0
	float LocationSum; // 0x8
};

struct FClientOpenTradeRequest : FPlayFabRequestCommon {
	FString AllowedPlayerIds; // 0x8
	FString OfferedInventoryInstanceIds; // 0x18
	FString RequestedCatalogItemIds; // 0x28
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FLiveClassData {
	EClassName ClassName; // 0x0
	int32_t NumberInUse; // 0x4
};

struct FShowcaseParameters {
	FVector PivotOffset; // 0x0
	float BaseFov; // 0xc
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FSnapshotDartDematerializationData {
	FName DematerializeLastHitBoneName; // 0x0
	FVector DematerializeLastHitLocationOffset; // 0x8
	bool bIsDematerializing; // 0x14
};

struct FPendingRespawnInfo {
	ABattalionPlayerControllerGMBase* PC; // 0x8
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
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

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
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

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FBattalionMedalEntity {
	FString UUID; // 0x0
	int32_t XPAward; // 0x10
	UTexture2D* MedalImage; // 0x18
	EBattalionMedalRarity Rarity; // 0x20
	FText Description; // 0x28
	FText FriendlyName; // 0x40
	UAkAudioEvent* AudioEvent; // 0x58
	bool PostMedalInChat; // 0x60
	EBattalionMedalCategory Category; // 0x61
};

struct FEconomyDeleteRecipeByIdRequest : FPlayFabRequestCommon {
	FString ID; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FServerLoginWithServerCustomIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayerSecret; // 0x18
	FString ServerCustomId; // 0x28
};

struct FMultiplayerCreateServerMatchmakingTicketRequest : FPlayFabRequestCommon {
	int32_t GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
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

struct FEconomyPublishItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ETag; // 0x10
	FString ItemId; // 0x20
};

struct FServerDeleteSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
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

struct FAkXboxOneGDKApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FPFInteropMessage {
	EPFInteropCommand Command; // 0x0
	TArray<FString> Params; // 0x8
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FAdminUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FEconomyDeleteRecipeByFriendlyIdRequest : FPlayFabRequestCommon {
	FString FriendlyId; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FEconomyGetSubscriptionByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FMultiplayerGetAssetUploadUrlResponse : FPlayFabResultCommon {
	FString AssetUploadUrl; // 0x8
	FString Filename; // 0x18
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FAdminUpdateCloudScriptRequest : FPlayFabRequestCommon {
	FString DeveloperPlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool Publish; // 0x28
};

struct FEconomySetVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FAdminGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FAdminGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
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

struct FVolatileMaterialElement {
	UMaterialInterface* MaterialSwapPtr; // 0x0
	char ElementIndex; // 0x8
};

struct FMultiplayerGetRemoteLoginEndpointResponse : FPlayFabResultCommon {
	FString IPV4Address; // 0x8
	int32_t Port; // 0x18
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

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
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

struct FMatchmakerPlayerJoinedRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FClientListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FServerGetPlayerTagsRequest : FPlayFabRequestCommon {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
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

struct FAuthenticationGetAPIKeysResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Keys; // 0x10
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : FPlayFabRequestCommon {
	FString SessionId; // 0x8
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FImageAppearance {
	FSlateBrush Brush; // 0x0
	EHorizontalAlignment HorizontalAlignment; // 0x88
};

struct FDataGetObjectsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Objects; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FWeaponStopper {
	UAkAudioEvent* Stop3P; // 0x0
	UAkAudioEvent* Stop1P; // 0x8
};

struct FBattalionLoadoutDeckInstance {
	FString DeckTemplateName; // 0x0
	ENationType Nation; // 0x10
	FString DefaultClassName; // 0x18
	TArray<FBattalionLoadoutClaim> ConsumeClaims; // 0x28
	TArray<FBattalionLoadoutClaim> LoadoutClaims; // 0x38
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FClientGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FMatchAchievementInfo {
	FString ID; // 0x0
	EMatchAchievementStat Stat; // 0x10
	int32_t Value; // 0x14
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
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

struct FServerGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString PlayFabId; // 0x28
};

struct FDirectHitDamage {
	float Head; // 0x0
	float Neck; // 0x4
	float UpperTorso; // 0x8
	float LowerTorso; // 0xc
	float UpperArm; // 0x10
	float LowerArm; // 0x14
	float Hand; // 0x18
	float UpperLeg; // 0x1c
	float LowerLeg; // 0x20
	float Foot; // 0x24
};

struct FSessionArray {
	TArray<UWBP_ServerBrowserItem_C*> Sessions_4_E8B351A944F390EF81CCED936D90CD99; // 0x0
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse response; // 0x8
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FClientRegisterPlayFabUserRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
	FString Email; // 0x18
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString Password; // 0x40
	FString PlayerSecret; // 0x50
	bool RequireBothUsernameAndEmail; // 0x60
	FString Username; // 0x68
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FAudioEventWrapperInitializer {
	bool bIsLooped; // 0x0
	float LoopSafetyCutoffTime; // 0x4
	UAkAudioEvent* AudioStartEvent; // 0x8
	UAkAudioEvent* AudioStopEvent; // 0x10
	UAkComponent* AudioComponent; // 0x18
};

struct FCategoryStyleManualMapping {
	FName CategoryId; // 0x0
	FKantanCategoryStyle Style; // 0x8
};

struct FEconomyUpdateBundleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FCloudScriptExecuteFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
};

struct FServerGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FServerGrantItemsToCharacterRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString CharacterId; // 0x28
	FString ItemIds; // 0x38
	FString PlayFabId; // 0x48
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

struct FCargoResultData {
	float Progress; // 0x0
	float TimeTaken; // 0x4
	float TimeRemaining; // 0x8
	FText TimeTakenText; // 0x10
	float GracePeriodRemaining; // 0x28
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
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

struct FEconomyGetBundleByMarketplaceOfferIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	UPlayFabJsonObject* MarketplaceOfferId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x18
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FClientConsumePSNEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	int32_t ServiceLabel; // 0x18
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : FPlayFabRequestCommon {
	FString MasterPlayerAccountIds; // 0x8
};

struct FServerGetCharacterStatisticsResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FServerGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	EAkCommSystem CommunicationSystem; // 0x20
};

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FAdminLookupUserAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FClientLinkFacebookAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FExperimentationCreateExperimentResult : FPlayFabResultCommon {
	FString ExperimentId; // 0x8
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FCloudScriptRegisterQueuedFunctionRequest : FPlayFabRequestCommon {
	FString ConnectionString; // 0x8
	FString FunctionName; // 0x18
	FString QueueName; // 0x28
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
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

struct FClientUnlinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
};

struct FBattalionLoadoutDeckTemplate {
	FString UniqueName; // 0x0
	FString DisplayName; // 0x10
	FString DefaultClassName; // 0x20
	TArray<FBattalionLoadoutTeamDeck> TeamDecks; // 0x30
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FAuthenticationValidateEntityTokenRequest : FPlayFabRequestCommon {
	FString EntityToken; // 0x8
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

struct FClientLinkXboxAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString XboxToken; // 0x10
};

struct FEconomyUpdateInventoryPropertiesItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x28
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FMarketWeaponInfo {
	FString WeaponName; // 0x0
	FSlateBrush Image; // 0x10
	EWeaponType WeaponEnum; // 0x98
	ABattalionWeapon* WeaponClass; // 0xa0
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FClientConfirmPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
	FString OrderId; // 0x18
	FString PurchaseDate; // 0x28
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

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FServerGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FLeaderboardsGetEntityLeaderboardResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Rankings; // 0x8
	int32_t StatisticVersion; // 0x18
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

struct FCartesianAxisInstanceConfig {
	bool bEnabled; // 0x0
	bool bShowTitle; // 0x1
	bool bShowMarkers; // 0x2
	bool bShowLabels; // 0x3
};

struct FClientAddUsernamePasswordResult : FPlayFabResultCommon {
	FString Username; // 0x8
};

struct FClientGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FMultiplayerGetQueueStatisticsResult : FPlayFabResultCommon {
	int32_t NumberOfPlayersMatching; // 0x8
	UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FLeanAmount {
	float LR_3_6B979B024A9C1596BEEF78BA0F5118FB; // 0x0
	float FB_4_0B4A76174B5BFCA49D181FBD9408E742; // 0x4
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
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

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FClientAcceptTradeRequest : FPlayFabRequestCommon {
	FString AcceptedInventoryInstanceIds; // 0x8
	FString OfferingPlayerId; // 0x18
	FString TradeId; // 0x28
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FVolatileDamageModifier {
	UDamageType* DamageTypePtr; // 0x0
	float DamageMultiplier; // 0x8
};

struct FAuthenticationCreateAPIKeyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
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

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FSubModeData {
	FString SubMode; // 0x0
	FString LoadoutPath; // 0x10
	TArray<FString> AllowedMaps; // 0x20
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

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FServerGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
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

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FProfilesSetEntityProfilePolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x10
};

struct FFlightingPeriod {
	FDateTime StartTime; // 0x0
	FDateTime EndTime; // 0x8
};

struct FServerGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString PlayFabId; // 0x30
	FString StatisticName; // 0x40
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

struct FMultiplayerCancelServerBackfillTicketRequest : FPlayFabRequestCommon {
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FClientLoginWithGoogleAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString ServerAuthCode; // 0x38
};

struct FEconomyUpdateRecipeRequest : FPlayFabRequestCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Recipe; // 0x18
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FMultiplayerListPartyQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FExperimentationStopExperimentRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FClientUnlinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesId; // 0x8
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FBuckshotHitInfo {
	AActor* ActorHit; // 0x0
	FVector ImpactLocation; // 0x8
	int32_t BoneIndex; // 0x14
};

struct FServerRefreshGameServerInstanceHeartbeatRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FClientReportPlayerClientResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FServerSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FBotEnemyInfo {
	ABattalionPlayerControllerGMBase* EnemyPC; // 0x0
};

struct FOverviewGeneralStatsData {
	FString Kills; // 0x0
	FString Deaths; // 0x10
	FString KDRatio; // 0x20
	FString HoursPlayed; // 0x30
	FString Medals; // 0x40
	FString GamesWon; // 0x50
	FString GamesLost; // 0x60
	FString GamesDrawn; // 0x70
	FString TotalXP; // 0x80
};

struct FClientAddUsernamePasswordRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FGroupsListGroupInvitationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Invitations; // 0x8
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FProfilesSetDisplayNameResponse : FPlayFabResultCommon {
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
};

struct FServerSendCustomAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
	FString Username; // 0x28
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t TOP; // 0x4
	int32_t Right; // 0x8
	int32_t BOTTOM; // 0xc
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

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString Tooltip; // 0x10
};

struct FEconomyCraftRecipeByIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Ingredients; // 0x28
	UPlayFabJsonObject* Properties; // 0x38
	int32_t Quantity; // 0x40
	FString RecipeId; // 0x48
	bool ReturnInventory; // 0x58
	UPlayFabJsonObject* Store; // 0x60
	FString Uaid; // 0x68
};

struct FEconomySetVirtualCurrenciesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	FString IdempotencyId; // 0x20
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FAdminGetServerBuildInfoRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
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

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
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

struct FClientGetWindowsHelloChallengeResponse : FPlayFabResultCommon {
	FString Challenge; // 0x8
};

struct FLineGraphPointArray {
	FString ID; // 0x0
	TArray<FVector2D> Points; // 0x10
	FLinearColor Colour; // 0x20
	bool Active; // 0x30
	int32_t Thickness; // 0x34
	bool DrawPoints; // 0x38
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FClientUnlinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceId; // 0x8
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

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FClientUnlinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	FString DeviceID; // 0x8
};

struct FMultiplayerCreateRemoteUserResponse : FPlayFabResultCommon {
	FString ExpirationTime; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FServerAddPlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FAdminSetupPushNotificationResult : FPlayFabResultCommon {
	FString ARN; // 0x8
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FExperimentationUpdateExperimentRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	int32_t Duration; // 0x18
	EExperimentType ExperimentType; // 0x1c
	FString ID; // 0x20
	FString Name; // 0x30
	FString SegmentId; // 0x40
	FString StartDate; // 0x50
	FString TitlePlayerAccountTestIds; // 0x60
	TArray<UPlayFabJsonObject*> Variants; // 0x70
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

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
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

struct FEconomySearchSubscriptionsRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t TOP; // 0x60
};

struct FSMTextGraphProperty_Runtime : FSMGraphProperty_Base_Runtime {
	FText Result; // 0x50
	FSMTextSerializer TextSerializer; // 0x68
};

struct FGroupsDeleteRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FServerGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FFireUpSocketMesh {
	FName Socket; // 0x0
	USkeletalMesh* Mesh; // 0x8
	UAnimInstance* MeshAnimClass; // 0x10
	UAnimMontage* DeployAnimation; // 0x18
	UAnimMontage* ActivationAnimation; // 0x20
	float AttachTime; // 0x28
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
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

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FClientGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
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

struct FOnFireAwardData {
	EOnFireAwardType AwardType; // 0x0
	float Score; // 0x4
	FText Title; // 0x8
	EOnFireAwardTiming TimingType; // 0x20
	FVector2D ScalingMinMax; // 0x24
	float ScalingSpeed; // 0x2c
	bool bCurrentlyActive; // 0x30
	UStyleScoreEntryWidget* LinkedEntryWidget; // 0x38
};

struct FVoteInfo {
	ABattalionPlayerControllerGMBase* VoteCaller; // 0x0
	TArray<ABattalionPlayerControllerGMBase*> ApplicableVotees; // 0x8
	ABattalionPlayerState* PlayerToKick; // 0x18
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FNUIButtonAppearance {
	FButtonStyle Style; // 0x0
	FLinearColor ColorAndOpacity; // 0x278
	FLinearColor BackgroundColor; // 0x288
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
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

struct FDOMZoneData {
	EDOMZoneState State; // 0x0
	UTexture2D* Icon; // 0x8
	FLinearColor Color; // 0x10
	int32_t AllegianceTeamIndex; // 0x20
	int32_t CaptureTeamIndex; // 0x24
	float CaptureProgress; // 0x28
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
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

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FMapEditorObjectStringVariable {
	FName VariableName; // 0x0
	FString VariableValue; // 0x8
};

struct FEconomyUpdateCatalogConfigRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Config; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FPlayFabLoginResultCommon : FPlayFabResultCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FServerGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
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

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
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

struct FClientGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetTitlePublicKeyRequest : FPlayFabRequestCommon {
	FString TitleSharedSecret; // 0x8
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

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FMultiplayerGetCognitiveServicesLocalesRequest : FPlayFabRequestCommon {
	ECognitiveServicesType CognitiveServicesType; // 0x8
	FString Region; // 0x10
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FClientLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int32_t IssuerId; // 0x1c
	FString RedirectUri; // 0x20
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
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

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
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

struct FMultiplayerShutdownMultiplayerServerRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString SessionId; // 0x28
};

struct FQuickUtilItem {
	UTexture2D* Icon; // 0x0
	EQuickUtilType Type; // 0x8
	int32_t Count; // 0xc
	FString Name; // 0x10
	FVector2D IconScaling; // 0x20
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FMargin {
	float Left; // 0x0
	float TOP; // 0x4
	float Right; // 0x8
	float BOTTOM; // 0xc
};

struct FClientGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
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

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FServerGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMapStatList {
	FString MapName; // 0x0
	bool bIsFriendList; // 0x10
	TArray<FMapPlayerStats> PlayerStats; // 0x18
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

struct FEconomyUpdateStoreRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* Store; // 0x20
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FDataFinalizeFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
};

struct FVOVoice {
	EVoiceKey Key; // 0x0
	UAkAudioEvent* GermanEvent; // 0x8
	UAkAudioEvent* RussianEvent; // 0x10
	UAkAudioEvent* AmericaEvent; // 0x18
	UAkAudioEvent* BritishEvent; // 0x20
	bool IsVital; // 0x28
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

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FBattalionLoadoutCardStack {
	TArray<FBattalionLoadoutCardTemplate> Cards; // 0x0
	FBattalionLoadoutDeckTemplate Deck; // 0x10
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FSpawnScore {
	ABattalionPlayerSpawn* PlayerStart; // 0x0
	float PlayerScore; // 0x8
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

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FCloudScriptExecuteFunctionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Error; // 0x8
	int32_t ExecutionTimeMilliseconds; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionResult; // 0x28
	bool FunctionResultTooLarge; // 0x30
};

struct FClientGameServerRegionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Regions; // 0x8
};

struct FEconomyCreateUploadUrlsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FClientRestoreIOSPurchasesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FEconomyUpdateSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Subscription; // 0x18
};

struct FServerGetFriendsListRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString XboxToken; // 0x28
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FMapEditorObjectData : FTableRowBase {
	FGameplayTag ID; // 0x8
	FSlateBrush Image; // 0x10
	AMapEditorObject* ObjectClass; // 0x98
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FAdminCheckLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString ItemId; // 0x18
};

struct FSMNodeDescription {
	FName Name; // 0x0
	FText Category; // 0x8
	FText Description; // 0x20
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FLoadoutData {
	EClassName ClassName; // 0x0
	FString LoadoutName; // 0x8
	FLoadoutSlot PrimarySlot; // 0x18
	FLoadoutSlot SidearmSlot; // 0x1a
	FLoadoutSlot MeleeSlot; // 0x1c
	FOffensiveUtilItem OffensiveSlot; // 0x20
	FTacticalUtilItem TacticalSlot; // 0x68
	EFireUpType FireUpSlot_Quick; // 0xb8
	FCosmeticItem HatSlot; // 0xc0
	FCosmeticItem BodySlot; // 0xf8
	EFireUpType FireUpSlot; // 0x130
	bool bIsFavourite; // 0x131
	bool bIsDefault; // 0x132
	FGuid UniqueID; // 0x134
};

struct FLeaderboardsGetLeaderboardAroundEntityRequest : FPlayFabRequestCommon {
	FString ChildName; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	int32_t Offset; // 0x20
	FString StatisticName; // 0x28
	int32_t StatisticVersion; // 0x38
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FClientValidateAmazonReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptId; // 0x30
	FString UserId; // 0x40
};

struct FLeaderboardData {
	FString PlayerName; // 0x0
	FString PlayerRank; // 0x10
	int32_t Ping; // 0x20
	int32_t Team; // 0x24
	float ObjectiveTime; // 0x28
	int32_t Kills; // 0x2c
	int32_t Assists; // 0x30
	int32_t Deaths; // 0x34
	int32_t Score; // 0x38
	bool bIsAlive; // 0x3c
	APlayerState* PlayerState; // 0x40
};

struct FAdminGetUserInventoryRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FGroupsListGroupBlocksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FMultiplayerListMultiplayerServersRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	int32_t PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FClientGetFriendsListRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	FString XboxToken; // 0x18
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FMultiplayerListVirtualMachineSummariesResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
	TArray<UPlayFabJsonObject*> VirtualMachines; // 0x20
};

struct FPlayerSkin {
	EWeaponType Type; // 0x0
	FString SkinId; // 0x8
};

struct FMultiplayerBuildAliasDetailsResponse : FPlayFabResultCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	int32_t PageSize; // 0x38
	FString SkipToken; // 0x40
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueID; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FExperimentationGetTreatmentAssignmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
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

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FServerGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
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

struct FMovieScene3DTransformTemplateData {
	FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0
	FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0
	FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0
	FMovieSceneFloatChannel ManualWeight; // 0x5a0
	EMovieSceneBlendType BlendType; // 0x640
	FMovieSceneTransformMask Mask; // 0x644
	bool bUseQuaternionInterpolation; // 0x648
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FHealthRegenEvent {
	float PercentageToHeal; // 0x0
	float TimeToHeal; // 0x4
	float HealStartDelay; // 0x8
	bool bCanBeInterrupted; // 0xc
	float TimeStarted; // 0x10
	bool bActive; // 0x14
	bool bCompleted; // 0x15
	float AmountAlreadyHealed; // 0x18
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

struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FAdminGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FEconomySearchSubscriptionsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x18
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FClientGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FClientAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString VirtualCurrency; // 0x10
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

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FAkAdvancedSpatialAudioSettings {
	float DiffractionShadowAttenuationFactor; // 0x0
	float DiffractionShadowDegrees; // 0x4
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FAdminListVirtualCurrencyTypesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FServerNotifyMatchmakerPlayerLeftResult : FPlayFabResultCommon {
	EPlayerConnectionState PlayerState; // 0x8
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

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FAdminGetPlayedTitleListResult : FPlayFabResultCommon {
	FString TitleIds; // 0x8
};

struct FMapPlayerStats {
	FString PlayerName; // 0x0
	int32_t MapTime; // 0x10
	int32_t Rank; // 0x14
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FEconomyGetReviewsResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	int32_t Count; // 0x18
	UPlayFabJsonObject* Entity; // 0x20
	TArray<UPlayFabJsonObject*> Reviews; // 0x28
};

struct FNUIButtonStyle {
	FNUIButtonAppearance Button; // 0x0
	FNUIButtonTextAppearance Text; // 0x298
	FNUIButtonBackgroundAppearance Background; // 0x3c0
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FServerGrantItemsToUserRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString ItemIds; // 0x28
	FString PlayFabId; // 0x38
};

struct FClientGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FGroupsUnblockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FClientLinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	bool ForceLink; // 0x18
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FOneManArmyTracker {
	ABattalionPlayerControllerGMBase* Player; // 0x0
	TArray<FOneManArmyTimerTracker> TimerTrackers; // 0x8
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FServerUnlinkServerCustomIdRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString ServerCustomId; // 0x18
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FServerUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FProfilesSetProfileLanguageResponse : FPlayFabResultCommon {
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20
};

struct FEconomyGetVirtualCurrenciesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FEconomyUpdateCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Currency; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAdminGetContentListRequest : FPlayFabRequestCommon {
	FString Prefix; // 0x8
};

struct FClientGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FMultiplayerListCertificateSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> CertificateSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FEconomyDeleteBundleByFriendlyIdRequest : FPlayFabRequestCommon {
	FString FriendlyId; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FClientRegisterForIOSPushNotificationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
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

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
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

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FServerReportPlayerServerRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
	FString ReporterId; // 0x28
};

struct FPlayerInfoMinimal {
	int32_t PlayerScore; // 0x0
	int32_t PlayerKills; // 0x4
	FString NetID; // 0x8
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
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

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FLeaderboardsGetStatisticDefinitionsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticDefinitions; // 0x8
};

struct FStatInfo {
	FString Name; // 0x0
	int32_t Value; // 0x10
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FLeaderboardsGetEntityLeaderboardRequest : FPlayFabRequestCommon {
	FString ChildName; // 0x8
	FString EntityType; // 0x18
	int32_t MaxResults; // 0x28
	int32_t StartingPosition; // 0x2c
	FString StatisticName; // 0x30
	int32_t StatisticVersion; // 0x40
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FPlayerStateData {
	FUniqueNetIdRepl PlatformId; // 0x0
	int32_t StartingXP; // 0x28
	int32_t StartingProScore; // 0x2c
	int32_t NumKills; // 0x30
	int32_t NumAssists; // 0x34
	int32_t NumDeaths; // 0x38
	float Score; // 0x3c
	char Ping; // 0x40
	float exactPing; // 0x44
	int32_t PlayerId; // 0x48
	FString PlayerName; // 0x50
	int32_t CTFFlagCaptures; // 0x60
	int32_t CTFFlagReturned; // 0x64
	int32_t DOMZoneCaptures; // 0x68
	int32_t DomZoneNeutralizations; // 0x6c
};

struct FClientLoginWithFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	FString FacebookInstantGamesSignature; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
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

struct FModulatorContinuousParams {
	FName ParameterName; // 0x0
	float Default; // 0x8
	float MinInput; // 0xc
	float MaxInput; // 0x10
	float MinOutput; // 0x14
	float MaxOutput; // 0x18
	ModulationParamMode ParamMode; // 0x1c
};

struct FSMConduit : FSMState_Base {
	char bCanEnterTransition : 1; // 0x188
	char bCanEvaluate : 1; // 0x188
	char bEvalWithTransitions : 1; // 0x188
	FSMExposedFunctionHandler ConduitEnteredGraphEvaluator; // 0x190
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FTokenEvent {
	int32_t Value; // 0x0
	FText Description; // 0x8
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FAdminCreatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FClientValidateGooglePlayPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FClientLoginWithPSNRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	int32_t IssuerId; // 0x38
	FString PlayerSecret; // 0x40
	FString RedirectUri; // 0x50
};

struct FEconomyGetStoreByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
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

struct FMultiplayerUpdateBuildRegionsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> BuildRegions; // 0x18
};

struct FMultiplayerRolloverContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
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

struct FGroupsUpdateGroupRoleResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FLeaderboardsCreateStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	UPlayFabJsonObject* LeaderboardDefinition; // 0x10
	FString Name; // 0x18
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FServerUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
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

struct FClientStartPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	FString StoreId; // 0x28
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMapBackgroundLevel {
	UTexture2D* BackgroundTexture; // 0x0
	UTextureRenderTarget2D* RenderTarget; // 0x8
	UTextureRenderTarget2D* Overlay; // 0x10
	float LevelHeight; // 0x18
	FVector2D SamplingResolution; // 0x1c
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

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FServerAwardSteamAchievementRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Achievements; // 0x8
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FEconomyGetSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x18
	UPlayFabJsonObject* Subscription; // 0x28
};

struct FServerBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FMultiplayerGetCognitiveServicesLocalesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Locales; // 0x8
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FServerNotifyMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FGroupsUpdateGroupResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
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

struct FClientGetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* CharacterStatistics; // 0x8
};

struct FClientUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
};

struct FAceTracker {
	ABattalionPlayerControllerGMBase* Player; // 0x0
	int32_t Kills; // 0x8
};

struct FMultiplayerGetQueueStatisticsRequest : FPlayFabRequestCommon {
	FString QueueName; // 0x8
};

struct FCargoCheckpointData {
	ECargoCheckpointType Type; // 0x0
	float InputKey; // 0x4
	float ExtraTimeProvided; // 0x8
	FRotator OffsetRotation; // 0xc
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
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

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry RuntimeEntries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0x140
	TArray<FLinearColor> VectorValues; // 0x150
	TArray<UTexture*> TextureValues; // 0x160
	TArray<UFont*> FontValues; // 0x170
	TArray<int32_t> FontPageValues; // 0x180
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190
};

struct FClientAttributeInstallRequest : FPlayFabRequestCommon {
	FString Adid; // 0x8
	FString Idfa; // 0x18
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

struct FEconomyPublishStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
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

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FMultiplayerCreateBuildWithCustomContainerRequest : FPlayFabRequestCommon {
	FString BuildName; // 0x8
	EContainerFlavor ContainerFlavor; // 0x18
	UPlayFabJsonObject* ContainerImageReference; // 0x20
	FString ContainerRunCommand; // 0x28
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x38
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x48
	UPlayFabJsonObject* MetaData; // 0x58
	int32_t MultiplayerServerCountPerVm; // 0x60
	TArray<UPlayFabJsonObject*> Ports; // 0x68
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x78
	EAzureVmSize VmSize; // 0x88
};

struct FLeaderboardsDeleteStatisticDefinitionRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FEconomyGetDraftItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FExperimentationGetTreatmentAssignmentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* TreatmentAssignment; // 0x8
};

struct FEconomyUpdateInventoryItemsPropertiesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
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

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FAdminUpdateCloudScriptResult : FPlayFabResultCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FMarketAvailableWeapon {
	FString WeaponName; // 0x0
	int32_t Cost; // 0x10
	int32_t NumGrenades; // 0x14
	int32_t NumSpecialGrenades; // 0x18
};

struct FClientLoginWithFacebookRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
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

struct FEconomyCreateCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* CurrencyMetadata; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FMultiplayerListPartyQosServersRequest : FPlayFabRequestCommon {
	FString Version; // 0x8
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FServerGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FMatchmakerUserInfoRequest : FPlayFabRequestCommon {
	int32_t MinCatalogVersion; // 0x8
	FString PlayFabId; // 0x10
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FServerGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FServerListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FServerCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FInstantHitInfo {
	FVector Origin; // 0x0
	float ReticleSpread; // 0xc
	int32_t RandomSeed; // 0x10
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FServerGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FSMGraphProperty_Base_Runtime {
	FSMExposedFunctionHandler GraphEvaluator; // 0x8
	FGuid Guid; // 0x30
	FGuid OwnerGuid; // 0x40
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
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

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FEconomyGetStoreByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FClientGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FAdminLookupUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
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

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
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

struct FServerLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int32_t IssuerId; // 0x1c
	FString PlayFabId; // 0x20
	FString RedirectUri; // 0x30
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FAdminUpdatePolicyRequest : FPlayFabRequestCommon {
	bool OverwritePolicy; // 0x8
	FString PolicyName; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x20
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FAdminGetPolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FAdminRunTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FClientLoginWithTwitchRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FEconomyGetReviewsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
	FString OrderBy; // 0x20
	int32_t Skip; // 0x30
	int32_t TOP; // 0x34
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FServerGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FAdminResetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
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

struct FAdminUpdatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FClientLoginWithAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool CreateAccount; // 0x28
	FString EncryptedRequest; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString OS; // 0x48
	FString PlayerSecret; // 0x58
};

struct FEconomyAddVirtualCurrenciesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	FString IdempotencyId; // 0x20
};

struct FGameOverviewConfig {
	bool bShowLeaderText; // 0x0
	bool bShowBombImage; // 0x1
	bool bShowNationIcon; // 0x2
	bool bShowProgressBar; // 0x3
	bool bShowWartideDeathCounts; // 0x4
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FEconomySearchInStoreByFriendlyIdRequest : FPlayFabRequestCommon {
	FString Filter; // 0x8
	FString FriendlyId; // 0x18
	FString IdempotencyId; // 0x28
	FString OrderBy; // 0x38
	FString Search; // 0x48
	int32_t Skip; // 0x58
	UPlayFabJsonObject* SourceEntityKey; // 0x60
	int32_t TOP; // 0x68
};

struct FClientGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FEconomyGetRecipeByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FCompletedChallengeInfo {
	int32_t XPAward; // 0x0
	FString ChallengeId; // 0x8
	int32_t PrevValue; // 0x18
	int32_t CurrentValue; // 0x1c
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FClientLinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesSignature; // 0x8
	bool ForceLink; // 0x18
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
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

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FServerLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString XboxToken; // 0x18
};

struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FClientGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterName; // 0x18
	FString ItemId; // 0x28
};

struct FSaveDataInfo {
	FString SlotName; // 0x0
	char SlotID; // 0x10
	UObject* ClassPtr; // 0x18
	int32_t SafeVersion; // 0x20
};

struct FEconomyGetDraftItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
};

struct FMultiplayerEnableMultiplayerServersForTitleResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FClientGetAdPlacementsRequest : FPlayFabRequestCommon {
	FString AppId; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FMapToModeSchema {
	FString MapName; // 0x0
	bool bIsInMapRotation; // 0x10
	TArray<FString> SupprtedModes; // 0x18
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
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

struct FEconomyConsumeInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
};

struct FStatData {
	int32_t StatValue; // 0x0
	FString StatName; // 0x8
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FAdminRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FMatchReport {
	FString MatchID; // 0x0
	FString CLNumber; // 0x10
	FString Date; // 0x20
	int32_t GameTime; // 0x30
	int32_t OverTimeTime; // 0x34
	int32_t ShootoutTime; // 0x38
	int32_t TotalTime; // 0x3c
	bool IsTryHardMode; // 0x40
	int32_t NumRegularRounds; // 0x44
	float MinFrameTime; // 0x48
	float AverageFrameTime; // 0x4c
	float MaxFrameTime; // 0x50
};

struct FClientGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
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

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FAdminUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FMultiplayerDeleteAssetRequest : FPlayFabRequestCommon {
	FString Filename; // 0x8
};

struct FEconomyCreateOrUpdateReviewRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
	UPlayFabJsonObject* Review; // 0x20
};

struct FFlashResult {
	ABattalionCharacter* FlashedCharacterPtr; // 0x0
	float FlashDuration; // 0x8
};

struct FMapImageData {
	FString Name; // 0x0
	UTexture2D* LoadingScreen; // 0x10
	UTexture2D* LanImage; // 0x18
};

struct FClientRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
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

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
};

struct FClientGetPlayerStatisticsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FAdminAddPlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FEconomyCreateBundleRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	UPlayFabJsonObject* Bundle; // 0x10
	FString IdempotencyId; // 0x18
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
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

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FServerAuthenticateSessionTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FMultiplayerDeleteRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString Username; // 0x28
	FString VmId; // 0x38
};

struct FCloudScriptListHttpFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FClientRewardAdActivityRequest : FPlayFabRequestCommon {
	FString PlacementId; // 0x8
	FString RewardId; // 0x18
};

struct FServerRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FInitializeLoadoutQueueItem {
	APromodPlayerController* PlayerController; // 0x0
	FLoadoutInitializer LoadoutInitializer; // 0x8
	int32_t TryCount; // 0x48
};

struct FAdminDeleteStoreRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FMultiplayerListMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FBotFriendlyInfo {
	ABattalionPlayerControllerGMBase* FriendlyPC; // 0x0
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FClientGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
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

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
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

struct FAdminGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FAdminGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FClientUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
};

struct FMultiplayerListMultiplayerServersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FEconomyDeleteStoreByFriendlyIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FriendlyId; // 0x10
	FString IdempotencyId; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FWeaponsSpecialistTracker {
	ABattalionPlayerState* KillerPS; // 0x0
	TArray<EWeaponType> UniqueWeapons; // 0x8
};

struct FScoreboardData {
	UBattalionTeam* Team; // 0x0
	int32_t TeamId; // 0x8
	TArray<FPlayerStateData> Players; // 0x10
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FClientGetWindowsHelloChallengeRequest : FPlayFabRequestCommon {
	FString PublicKeyHint; // 0x8
};

struct FAdminModifyServerBuildRequest : FPlayFabRequestCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
	FString Timestamp; // 0x60
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FClientGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FAdminGetPlayedTitleListRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FQuantizingRays {
	FDebugRay Left; // 0x0
	FDebugRay Right; // 0xb8
	FDebugRay TOP; // 0x170
	FDebugRay BOTTOM; // 0x228
};

struct FAxisBindFilter {
	FName NewName; // 0x0
	float PosNegVal; // 0x8
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FServerGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FPlayerKillTime {
	APlayerState* Player; // 0x0
	float TimeKilled; // 0x8
};

struct FExperimentationGetLatestScorecardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Scorecard; // 0x8
};

struct FClientAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FGroupsListGroupInvitationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FServerConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
	FString PlayFabId; // 0x30
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
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

struct FEconomySetInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FSMTransition : FSMNode_Base {
	FSMExposedFunctionHandler TransitionEnteredGraphEvaluator; // 0x108
	FSMExposedFunctionHandler TransitionPreEvaluateGraphEvaluator; // 0x128
	FSMExposedFunctionHandler TransitionPostEvaluateGraphEvaluator; // 0x148
	int32_t Priority; // 0x168
	char bCanEnterTransition : 1; // 0x16c
	char bCanEnterTransitionFromEvent : 1; // 0x16c
	char bIsEvaluating : 1; // 0x16c
	char bCanEvaluate : 1; // 0x16c
	char bCanEvaluateFromEvent : 1; // 0x16c
	char bRunParallel : 1; // 0x16c
	char bEvalIfNextStateActive : 1; // 0x16c
	char bCanEvalWithStartState : 1; // 0x16c
	char bAlwaysFalse : 1; // 0x16d
	FGuid FromGuid; // 0x170
	FGuid ToGuid; // 0x180
	ESMConditionalEvaluationType ConditionalEvaluationType; // 0x190
};

struct FSMTextGraphProperty : FSMGraphProperty_Base {
	FText Result; // 0x110
	FSMTextSerializer TextSerializer; // 0x128
	FSMTextNodeWidgetInfo WidgetInfo; // 0x138
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
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

struct FClientSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FServerRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FPingableData {
	EPingType PingType; // 0x0
	EPingCategory PingCategory; // 0x1
	UAkAudioEvent* Bark; // 0x8
	UTexture2D* PingIcon; // 0x10
	FLinearColor PingIconTint; // 0x18
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FClientValidateGooglePlayPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptJson; // 0x30
	FString Signature; // 0x40
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
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

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FEconomyReviewSummaryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
};

struct FClientGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
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

struct FServerModifyItemUsesRequest : FPlayFabRequestCommon {
	FString ItemInstanceId; // 0x8
	FString PlayFabId; // 0x18
	int32_t UsesToAdd; // 0x28
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FPFPlayerId {
	FString TitleId; // 0x0
	FString MasterId; // 0x10
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FAdminGetTaskInstancesRequest : FPlayFabRequestCommon {
	FString StartedAtRangeFrom; // 0x8
	FString StartedAtRangeTo; // 0x18
	ETaskInstanceStatus StatusFilter; // 0x28
	UPlayFabJsonObject* TaskIdentifier; // 0x30
};

struct FServerGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FGroupsDeleteGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FAdminSetupPushNotificationRequest : FPlayFabRequestCommon {
	FString Credential; // 0x8
	FString Key; // 0x18
	FString Name; // 0x28
	bool OverwriteOldARN; // 0x38
	EPushSetupPlatform Platform; // 0x39
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2
	char Value; // 0x3
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FEconomyPurchaseItemByIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	TArray<UPlayFabJsonObject*> Currencies; // 0x10
	UPlayFabJsonObject* Entity; // 0x20
	FString IdempotencyId; // 0x28
	FString ItemId; // 0x38
	UPlayFabJsonObject* Properties; // 0x48
	int32_t Quantity; // 0x50
	bool ReturnInventory; // 0x54
	UPlayFabJsonObject* Store; // 0x58
	FString Uaid; // 0x60
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FAnimNode_GunFixToHand : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	FBoneReference BoneToCopy; // 0xd8
	FVector Translation; // 0xe8
	FVector TranslationOffset; // 0xf4
	EBoneControlSpace TranslationSpace; // 0x100
};

struct FStaminaEvent {
	int32_t StaminaDirection; // 0x0
	float StaminaRegenMultiplier; // 0x4
	float CurrentStamina; // 0x8
	float Timestamp; // 0xc
	float MaxSprintTime; // 0x10
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

struct FClientUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
};

struct FAdminGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FMatchmakerAuthUserRequest : FPlayFabRequestCommon {
	FString AuthorizationTicket; // 0x8
};

struct FMultiplayerListServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FAdminDeleteMasterPlayerAccountRequest : FPlayFabRequestCommon {
	FString MetaData; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerSendPushNotificationFromTemplateRequest : FPlayFabRequestCommon {
	FString PushNotificationTemplateId; // 0x8
	FString Recipient; // 0x18
};

struct FServerRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
};

struct FCoinEntity {
	FString Name; // 0x0
	FString UniqueID; // 0x10
	UTexture2D* Texture; // 0x20
	int32_t SeasonNumber; // 0x28
	bool IsCompletionistCoin; // 0x2c
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FAuthenticationDeleteAPIKeyRequest : FPlayFabRequestCommon {
	FString APIKeyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
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

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
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

struct FClientGetTradeStatusResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FBattleHubLeaderboardRowInfo {
	FString Pos; // 0x0
	FString XP; // 0x10
	int32_t ProScore; // 0x20
	FString Name; // 0x28
	FString Kills; // 0x38
	FString Deaths; // 0x48
	FString KDRatio; // 0x58
	FString MatchesWon; // 0x68
	FString MatchesLost; // 0x78
	FString MatchesPlayed; // 0x88
	FString MedalsEarned; // 0x98
	FString Score; // 0xa8
	EPlatformOriginationType OriginationType; // 0xb8
	FString PlayFabId; // 0xc0
	FString PlatformUserId; // 0xd0
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FPlayFabError {
	bool HasError; // 0x0
	int32_t ErrorCode; // 0x4
	FString ErrorName; // 0x8
	FString ErrorMessage; // 0x18
	FString ErrorDetails; // 0x28
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
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

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FCloudScriptListQueuedFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FMultiplayerListAssetSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AssetSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FClientReportAdActivityRequest : FPlayFabRequestCommon {
	EAdActivity Activity; // 0x8
	FString PlacementId; // 0x10
	FString RewardId; // 0x20
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FTallyInformationPacket {
	int32_t OurPrevPlayersAlive; // 0x0
	int32_t OurAfterPlayersAlive; // 0x4
	int32_t TheirPrevPlayersAlive; // 0x8
	int32_t TheirAfterPlayersAlive; // 0xc
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FClientGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FServerAwardSteamAchievementResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AchievementResults; // 0x8
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
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

struct FServerGetUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FServerRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FDataAbortFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FImageData {
	FSlateBrush Brush; // 0x0
	FLinearColor ColorAndOpacity; // 0x88
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FLiveFireTrainingDetails {
	float TimeBetweenSpawns; // 0x0
	float TimeUntilRemoval; // 0x4
	float BotHealth; // 0x8
};

struct FGroupsGetGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	FString GroupName; // 0x10
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FGroupsIsMemberResponse : FPlayFabResultCommon {
	bool IsMember; // 0x8
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FAdminGetDataReportResult : FPlayFabResultCommon {
	FString DownloadUrl; // 0x8
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FCharacterAnim {
	UAnimMontage* Pawn1P; // 0x0
	UAnimMontage* Pawn3P; // 0x8
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FEconomyGetMyReviewRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
};

struct FServerGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FEconomyCreateDraftItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Item; // 0x10
};

struct FEconomySetInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FEconomyGetRecipeByMarketplaceOfferIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	UPlayFabJsonObject* MarketplaceOfferId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x18
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
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

struct FServerAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FDataGetFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FAxisBind {
	FName Name; // 0x0
	FKey PrimaryPos; // 0x8
	FKey PrimaryNeg; // 0x20
	FKey SecondaryPos; // 0x38
	FKey SecondaryNeg; // 0x50
	FKey ThirdPos; // 0x68
	FKey ThirdNeg; // 0x80
	float Scale; // 0x98
	bool bModifiedFromDefault; // 0x9c
	int32_t VersionModified; // 0xa0
};

struct FAdminListOpenIdConnectionResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Connections; // 0x8
};

struct FGroupsListMembershipRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FServerGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	int32_t StartPosition; // 0x28
	FString StatisticName; // 0x30
	bool UseSpecificVersion; // 0x40
	int32_t Version; // 0x44
	FString XboxToken; // 0x48
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

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FMultiplayerListMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FCartesianAxisRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FGroupsCreateGroupRoleResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FMultiplayerGetMultiplayerServerLogsRequest : FPlayFabRequestCommon {
	FString Region; // 0x8
	FString ServerId; // 0x18
};

struct FMapEditorTransformSnapSettings {
	bool bEnabled; // 0x0
	float Grid; // 0x4
};

struct FClientGetPlayFabIDsFromGameCenterIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FAdminAbortTaskInstanceRequest : FPlayFabRequestCommon {
	FString TaskInstanceId; // 0x8
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FBattalionLoadoutCardTemplate {
	FString ClassName; // 0x0
	FString DisplayName; // 0x10
	FSlateBrush Image; // 0x20
	TArray<FBattalionSubCardTemplate> NationCards; // 0xa8
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FClientReportPlayerClientRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FAdminRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FClientGameServerRegionsRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FEconomyPublishStatusResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> FailedScanResults; // 0x8
	EPublishResult Result; // 0x18
	FString StatusMessage; // 0x20
};

struct FDataSetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> Objects; // 0x18
};

struct FFrameEvents {
	TArray<FFrameEvent> Events; // 0x0
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
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

struct FAdminGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FOffensiveUtilItem {
	UTexture2D* Icon; // 0x0
	UTexture2D* LoadoutSelectionImage; // 0x8
	EGrenadeType Type; // 0x10
	int32_t Count; // 0x14
	FString Name; // 0x18
	FText Tooltip; // 0x28
	ABattalionGrenade* Class; // 0x40
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

struct FBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x10
	FRotator Rotation; // 0x1c
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	bool bServerHasVelocity; // 0x2a
};

struct FClientRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FPFPlayerData {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FServerRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
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

struct FExperimentationGetLatestScorecardRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
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

struct FMultiplayerGetCognitiveServicesTokenResponse : FPlayFabResultCommon {
	FString ExpirationTimeUtc; // 0x8
	FString ServiceEndpoint; // 0x18
	FString Token; // 0x28
};

struct FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetLeaderboardAroundUserRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FAdminGetPlayerSharedSecretsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> SharedSecrets; // 0x8
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
};

struct FServerRegisterGameResponse : FPlayFabResultCommon {
	FString LobbyId; // 0x8
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FMultiplayerCreateBuildWithCustomContainerResponse : FPlayFabResultCommon {
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	EContainerFlavor ContainerFlavor; // 0x28
	FString ContainerRunCommand; // 0x30
	FString CreationTime; // 0x40
	UPlayFabJsonObject* CustomGameContainerImage; // 0x50
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x58
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x68
	UPlayFabJsonObject* MetaData; // 0x78
	int32_t MultiplayerServerCountPerVm; // 0x80
	TArray<UPlayFabJsonObject*> Ports; // 0x88
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x98
	EAzureVmSize VmSize; // 0xa8
};

struct FMultiplayerCreateMatchmakingTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FAuthenticationDeactivateAPIKeyRequest : FPlayFabRequestCommon {
	FString APIKeyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
};

struct FClientLinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	bool ForceLink; // 0x18
	FString IdToken; // 0x20
};

struct FEconomyGetRecipeByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FServerUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
	FString PlayFabId; // 0x48
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FDataInitiateFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FClientPayForPurchaseRequest : FPlayFabRequestCommon {
	FString Currency; // 0x8
	FString OrderId; // 0x18
	FString ProviderName; // 0x28
	FString ProviderTransactionId; // 0x38
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FServerWriteServerPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString PlayFabId; // 0x20
	FString Timestamp; // 0x30
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FEconomyDeleteBundleByIdRequest : FPlayFabRequestCommon {
	FString ID; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FLoadoutInitializer {
	ABattalionWeapon* PrimaryWeapon; // 0x0
	ABattalionWeapon* SecondaryWeapon; // 0x8
	ABattalionWeapon* MeleeWeapon; // 0x10
	TArray<EGrenadeType> OffensiveGrenades; // 0x18
	TArray<ESpecialGrenadeType> TacticalGrenades; // 0x28
	bool bAllowedGrenades; // 0x38
	ESlotType SlotToEquip; // 0x39
	bool bMulticast; // 0x3a
	bool bUseQuickEquip; // 0x3b
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FClientAddFriendResult : FPlayFabResultCommon {
	bool Created; // 0x8
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FAdminUpdatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	bool Disabled; // 0x8
	FString FriendlyName; // 0x10
	FString SecretKey; // 0x20
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

struct FMultiplayerUntagContainerImageRequest : FPlayFabRequestCommon {
	FString ImageName; // 0x8
	FString Tag; // 0x18
};

struct FGroupsListGroupApplicationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
};

struct FExperimentationGetExperimentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Experiments; // 0x8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FEconomyCatalogSearchRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString Filter; // 0x10
	FString OrderBy; // 0x20
	FString Search; // 0x30
	FString Select; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t TOP; // 0x60
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FClientUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
};

struct FKantanBarChartStyle : FKantanChartStyle {
	float BarOpacity; // 0x120
	float BarOutlineOpacity; // 0x124
	float BarOutlineThickness; // 0x128
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FClientRegisterPlayFabUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* EntityToken; // 0x8
	FString PlayFabId; // 0x10
	FString SessionTicket; // 0x20
	UPlayFabJsonObject* SettingsForUser; // 0x30
	FString Username; // 0x38
};

struct FServerSendEmailFromTemplateRequest : FPlayFabRequestCommon {
	FString EmailTemplateId; // 0x8
	FString PlayFabId; // 0x18
};

struct FEconomyUpdateRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Recipe; // 0x18
};

struct FServerGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
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

struct FActionBind {
	FName Name; // 0x0
	FKey Primary; // 0x8
	FKey Secondary; // 0x20
	FKey Tertiary; // 0x38
	bool bModifiedFromDefault; // 0x50
	int32_t VersionModified; // 0x54
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FFireUpData {
	EFireUpType FireUpType; // 0x0
	EFireUpSlotType FireUpSlotType; // 0x1
	float UnlockThreshold; // 0x4
	float PercentageLostOnUse; // 0x8
	bool bShouldTimeout; // 0xc
	bool bCanUseWhilePlanting; // 0xd
	EFireUpCanUseBombMode CanUseBombMode; // 0xe
	UAkAudioEvent* Bark; // 0x10
	UAkAudioEvent* Bark3P; // 0x18
	UAkAudioEvent* StopBark1P; // 0x20
	UAkAudioEvent* StopBark3P; // 0x28
	FName FireUpName; // 0x30
	FText FireUpToolTip; // 0x38
	UMediaSource* TutorialVideo; // 0x50
	int32_t MediaPlaylistIndex; // 0x58
	UMediaPlaylist* MediaPlaylist; // 0x60
	float DeployTime; // 0x68
	bool bProhibitWeaponSwap; // 0x6c
	float Duration; // 0x70
	EFireUpWeaponEquipTiming WeaponEquipTiming; // 0x74
	float CustomWeaponReEquipTime; // 0x78
	float ComboTimer; // 0x7c
	bool bShouldDisableAds; // 0x80
	bool bShouldStopFiring; // 0x81
	bool bActivateOnKeyRelease; // 0x82
	bool bPredictedAction; // 0x83
	bool bCanCombo; // 0x84
	EFireUpComboType ComboType; // 0x85
	UTexture2D* FireUpIcon; // 0x88
	bool bCanActivateDuingLowVault; // 0x90
	bool bCanActivateDuringHighVault; // 0x91
	UCurveFloat* PassiveEarnCurve; // 0x98
	TMap<EFireUpActionType, FFireUpActionData> ActionDataOverrides; // 0xa0
	bool bQuickUtilOnlyOneAllowed; // 0xf0
	bool bQuickUtilAwardsOnTimer; // 0xf1
	float QuickUtilRegenTimer; // 0xf4
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FAdminBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
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

struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FSMStateInfo : FSMInfo_Base {
	TArray<FSMTransitionInfo> OutgoingTransitions; // 0x60
	bool bIsEndState; // 0x70
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

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
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

struct FClientGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FNuclearSessionSettings {
	ENuclearSessionType Type; // 0x0
	FString MapName; // 0x8
	FString ModeName; // 0x18
	int32_t MaxPlayers; // 0x28
	bool bIsPublic; // 0x2c
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FPFRegionInfo {
	FString Region; // 0x0
	float Latency; // 0x10
};

struct FClientGetAdPlacementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AdPlacements; // 0x8
};

struct FClientUninkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FClientGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	FString StatisticNames; // 0x8
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x18
};

struct FAdminDeleteContentRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
};

struct FClientValidateWindowsReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString Receipt; // 0x30
};

struct FServerWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool GlobalFocus; // 0x3c
	bool UseHeadMountedDisplayAudioDevice; // 0x3d
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FEconomyGetDraftItemsRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	int32_t Count; // 0x18
	UPlayFabJsonObject* Entity; // 0x20
};

struct FMapEditorUndoableAction {
	AMapEditorObject* ObjectActor; // 0x0
	FMapEditorObjectData ObjectData; // 0x8
	FTransform ObjectTransform; // 0xb0
	FTransform PrevObjectTransform; // 0xe0
	int32_t ObjectId; // 0x110
	bool bSpawned; // 0x114
	bool bDeleted; // 0x115
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FGroupsApplyToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingInvite; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FMultiplayerListContainerImageTagsRequest : FPlayFabRequestCommon {
	FString ImageName; // 0x8
};

struct FPlaceableTrophySystemDematerializationData {
	FName DematerializeLastHitBoneName; // 0x0
	FVector DematerializeLastHitLocationOffset; // 0x8
	bool bIsDematerializing; // 0x14
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FPlayFabBaseModel {
	FPlayFabError responseError; // 0x0
	UPlayFabJsonObject* responseData; // 0x38
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FServerGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FEconomyCatalogSearchResult : FPlayFabResultCommon {
	int32_t Count; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x10
};

struct FAdminGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
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

struct FEconomyGetSubscriptionByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FClientGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAnimNode_CuffFixer : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	FBoneReference BoneToCopy; // 0xd8
	FVector Translation; // 0xe8
	FVector TranslationOffset; // 0xf4
	char bZeroOutYawRotation : 1; // 0x100
	char bZeroOutPitchRotation : 1; // 0x100
	char bZeroOutRollRotation : 1; // 0x100
	char bZeroOutXTranslation : 1; // 0x100
	char bZeroOutYTranslation : 1; // 0x100
	char bZeroOutZTranslation : 1; // 0x100
	EBoneControlSpace TranslationSpace; // 0x104
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FCloudScriptUnregisterFunctionRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
};

struct FClientLoginWithCustomIDRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString CustomId; // 0x10
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FServerExecuteCloudScriptServerRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	FString PlayFabId; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x38
	int32_t SpecificRevision; // 0x3c
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FClientLinkGameCenterAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString GameCenterId; // 0x10
	FString PublicKeyUrl; // 0x20
	FString Salt; // 0x30
	FString Signature; // 0x40
	FString Timestamp; // 0x50
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FClientAcceptTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FPFSingleEntityMembershipRoleInfo {
	FString RoleId; // 0x0
	FString RoleName; // 0x10
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FServerRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FClientLoginWithGameCenterRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerId; // 0x28
	FString PlayerSecret; // 0x38
	FString PublicKeyUrl; // 0x48
	FString Salt; // 0x58
	FString Signature; // 0x68
	FString Timestamp; // 0x78
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
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

struct FClientUnlinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	FString PublicKeyHint; // 0x8
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FBattalionLoadoutClaim {
	EBattalionLoadoutClaimType ClaimType; // 0x0
	FString CardTemplateName; // 0x8
	APlayerState* Player; // 0x18
	int32_t Count; // 0x20
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FPhysMatModifier {
	UPhysicalMaterial* PhysMat; // 0x0
	float Multiplier; // 0x8
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FSubModeParent {
	FString ParentMode; // 0x0
	TArray<FSubModeData> SubModes; // 0x10
};

struct FClientGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FServerGetPlayerStatisticsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FEconomyDeleteStoreByIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ID; // 0x10
	FString IdempotencyId; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FLeaderboardsGetStatisticDefinitionRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
};

struct FMultiplayerDeleteBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
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

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FEconomyUpdateDraftItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FClientExecuteCloudScriptRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	ECloudScriptRevisionOption RevisionSelection; // 0x21
	int32_t SpecificRevision; // 0x24
};

struct FLeaderboardsGetStatisticDefinitionResponse : FPlayFabResultCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString Created; // 0x10
	FString LastResetTime; // 0x20
	UPlayFabJsonObject* LeaderboardDefinition; // 0x30
	FString Name; // 0x38
	int32_t Version; // 0x48
};

struct FSMStateMachine : FSMState_Base {
	bool bHasAdditionalLogic; // 0x188
	bool bReuseCurrentState; // 0x189
	bool bOnlyReuseIfNotEndState; // 0x18a
	bool bAllowIndependentTick; // 0x18b
	bool bCallReferenceTickOnManualUpdate; // 0x18c
	bool bReuseReference; // 0x18d
	bool bWaitForEndState; // 0x18e
	FSMExposedFunctionHandler UpdateStateGraphEvaluator; // 0x190
	FSMExposedFunctionHandler EndStateGraphEvaluator; // 0x1b0
	TMap<FGuid, FSMNetworkedTransaction> PreviousTransactions; // 0x1f8
	UObject* ReferencedStateMachineClass; // 0x388
	FName ReferencedTemplateName; // 0x390
	USMInstance* ReferencedStateMachine; // 0x398
	USMInstance* IsReferencedByInstance; // 0x3a0
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FClientAndroidDevicePushNotificationRegistrationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
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

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FServerUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
	FString PlayFabId; // 0x38
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FServerModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FAdminResetPasswordRequest : FPlayFabRequestCommon {
	FString Password; // 0x8
	FString Token; // 0x18
};

struct FNationDataEntity {
	ENationType Nation; // 0x0
	FLinearColor Colour; // 0x4
	UTexture2D* Icon; // 0x18
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FSkinEntity {
	EWeaponType Weapon; // 0x0
	FText Name; // 0x8
	FString UniqueID; // 0x20
	UTexture2D* Texture; // 0x30
	ESkinRarity Rarity; // 0x38
	EWeaponCondition Condition; // 0x39
	bool ExcludeWhenViewingUnowned; // 0x3a
	int32_t UnlockLevel; // 0x3c
	bool IsPremium; // 0x40
	bool IsKickstarter; // 0x41
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FEconomyCreateStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Store; // 0x18
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FServerLoginWithXboxIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString Sandbox; // 0x18
	FString XboxId; // 0x28
};

struct FServerMoveItemToCharacterFromCharacterRequest : FPlayFabRequestCommon {
	FString GivingCharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
	FString ReceivingCharacterId; // 0x38
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FFireupState {
	float FireUpPercentage; // 0x0
	float Timestamp; // 0x4
	bool bHasFireup; // 0x8
	bool bFireupActive; // 0x9
	bool bAwardedOnTimer; // 0xa
	float TimeToRegen; // 0xc
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FMultiplayerListVirtualMachineSummariesRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	int32_t PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FClientLinkSteamAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString SteamTicket; // 0x10
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
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

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FAdminDeleteTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FServerUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
	FString PlayFabId; // 0x18
};

struct FRegionLatency {
	FString Region; // 0x0
	TArray<float> Latencies; // 0x10
};

struct FServerUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FClientGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
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

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	float AnimStartOffset; // 0x10
	float AnimEndOffset; // 0x14
	float AnimPlayRate; // 0x18
	char bLooping : 1; // 0x1c
	char bReverse : 1; // 0x1c
};

struct FSMStateClassRule : FSMNodeClassRule {
	TSoftClassPtr<UObject> StateClass; // 0x10
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FClientSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FRoundWinCondition {
	int32_t Round; // 0x0
	int32_t WinningTeam; // 0x4
	ERoundWinCondition WinCondition; // 0x8
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

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
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

struct FGizmoHandleData {
	EMapEditorAxis ConstraintAxis; // 0x0
	EMapEditorTransformMode TransformMode; // 0x1
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FServerUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	FString PlayFabId; // 0x38
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FVoteData {
	FString Caller; // 0x0
	FString Title; // 0x10
	FString Item; // 0x20
	float VoteTime; // 0x30
	char VotesReq; // 0x34
	bool SelfCalledVote; // 0x35
	APlayerState* PlayerToKick; // 0x38
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
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

struct FAdminExportMasterPlayerDataRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetPlayerProfileRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
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

struct FAdminAddNewsResult : FPlayFabResultCommon {
	FString NewsId; // 0x8
};

struct FEconomyGetCurrencyByIdRequest : FPlayFabRequestCommon {
	FString CurrencyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FEconomyGetCurrencyByIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Currency; // 0x8
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x2
};

struct FKnifeAnimationInfo {
	char bIsMeleeAttacking : 1; // 0x0
	char bMeleeCanSwap : 1; // 0x0
	char bIsPrimary : 1; // 0x0
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FAdminAddNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	FString Timestamp; // 0x18
	FString Title; // 0x28
};

struct FServerGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString StatisticNames; // 0x18
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x28
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FFrameEvent {
	FDateTime Timestamp; // 0x0
	EEventType EventType; // 0x8
	FString PlayerName; // 0x10
	TArray<FPlayerData> PlayerData; // 0x20
	FString SpawnName; // 0x30
	FString KillerName; // 0x40
	int32_t CurrentHardpointZoneIndex; // 0x50
	FString ShitSpawnMessage; // 0x58
};

struct FClientGetPaymentTokenRequest : FPlayFabRequestCommon {
	FString TokenProvider; // 0x8
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FClientConsumePSNEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemsGranted; // 0x8
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FAdminGetTaskInstanceRequest : FPlayFabRequestCommon {
	FString TaskInstanceId; // 0x8
};

struct FOverviewGameStatsData {
	FString GamesWon; // 0x0
	FString GamesLost; // 0x10
	FString GamesDrawn; // 0x20
	FString BombsPlanted; // 0x30
	FString BombsDetonated; // 0x40
	FString BombsDefused; // 0x50
	FString Suicides; // 0x60
	FString OneTaps; // 0x70
	FString GrenadeImpacts; // 0x80
};

struct FServerDirectoryEntry {
	FString ServerId; // 0x0
	int32_t CL; // 0x10
	FString Branch; // 0x18
	FString Ip; // 0x28
	int32_t Port; // 0x38
	FString Region; // 0x40
	int32_t NumPlayers; // 0x50
	int32_t GameLift; // 0x54
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FProfilesGetEntityProfileResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Profile; // 0x8
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

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FEconomyTakedownReviewsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Reviews; // 0x10
};

struct FAdminDeleteMasterPlayerAccountResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
	FString TitleIds; // 0x18
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
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

struct FMultiplayerGetContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FFLoadoutItemData {
	FSlateBrush IconBrush_2_71BADC1B4A2CF32AF05A4BB8CC42576E; // 0x0
	FSlateBrush PreviewBrush_4_99905F4E42AC05056D6E5FBA03C7D3F7; // 0x88
	FString Title_13_7E466BED4897B09F26C4449D9640652E; // 0x110
	FString Subtitle_14_C8E9C62C43AE83A9CF9C409881F360A3; // 0x120
	FString Tootip_15_0840B0104DE43C1FF92A9CB3D0D1735E; // 0x130
	ELoadoutItem LoadoutType_20_D92462C344DB6D07EDA530BB5E065474; // 0x140
	char ItemType_24_7CF3C03D435961D27A1168A774552B60; // 0x141
	char ItemSubType_25_3E8533354E06803107941A9863ABF6C1; // 0x142
	UMediaPlaylist* MediaPlaylist_33_580117CD45389AD51DF49684867487F5; // 0x148
};

struct FClientLoginWithPlayFabRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString Password; // 0x10
	FString Username; // 0x20
};

struct FAdminRemovePlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FEconomyGetInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	FString Receipt; // 0x28
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x38
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

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FEconomyCraftRecipeByFriendlyIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Ingredients; // 0x28
	UPlayFabJsonObject* Properties; // 0x38
	int32_t Quantity; // 0x40
	FString RecipeFriendlyId; // 0x48
	bool ReturnInventory; // 0x58
	UPlayFabJsonObject* Store; // 0x60
	FString Uaid; // 0x68
};

struct FGroupsListMembershipOpportunitiesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FAuthenticationGetEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
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

struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FGroupsListMembershipResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Groups; // 0x8
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : FPlayFabResultCommon {
	FString TitleId; // 0x8
	UPlayFabJsonObject* TitlePlayerAccounts; // 0x18
};

struct FServerListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
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

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FClientUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	FString XboxToken; // 0x8
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FAdminGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FClientValidateIOSReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FProfilesGetEntityProfilesRequest : FPlayFabRequestCommon {
	bool DataAsObject; // 0x8
	TArray<UPlayFabJsonObject*> Entities; // 0x10
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FServerDeregisterGameRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
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

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
};

struct FEconomyConsumeInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FServerGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
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

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
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

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FEconomyGetUgcItemModerationStateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* State; // 0x8
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FClientUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FAdminGetPlayerStatisticDefinitionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FServerGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CharacterName; // 0x8
	FString CharacterType; // 0x18
	FString PlayFabId; // 0x28
};

struct FLoadoutStat {
	FString Name; // 0x0
	int32_t Value; // 0x10
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FTakeHitInfo {
	float ActualDamage; // 0x0
	UObject* DamageTypeClass; // 0x8
	TWeakObjectPtr<ABattalionCharacter> PawnInstigator; // 0x10
	TWeakObjectPtr<AActor> DamageCauser; // 0x18
	int32_t DamageEventClassID; // 0x20
	char bKilled : 1; // 0x24
	float TimeOfHit; // 0x28
	char EnsureReplicationByte; // 0x2c
	FDamageEvent GeneralDamageEvent; // 0x30
	FPointDamageEvent PointDamageEvent; // 0x40
	FRadialDamageEvent RadialDamageEvent; // 0xf0
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FPendingKickInfo {
	ABattalionPlayerControllerGMBase* PC; // 0x0
	FUniqueNetIdRepl PlayerNetId; // 0x8
	FText Reason; // 0x30
};

struct FEconomyGetCatalogConfigResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Config; // 0x8
};

struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FEconomyDeleteBundleResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FMultiplayerGetBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FServerAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FServerEvaluateRandomResultTableResult : FPlayFabResultCommon {
	FString ResultItemId; // 0x8
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FEconomyPurchaseItemByFriendlyIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	TArray<UPlayFabJsonObject*> Currencies; // 0x10
	UPlayFabJsonObject* Entity; // 0x20
	FString IdempotencyId; // 0x28
	FString ItemFriendlyId; // 0x38
	UPlayFabJsonObject* Properties; // 0x48
	int32_t Quantity; // 0x50
	bool ReturnInventory; // 0x54
	UPlayFabJsonObject* Store; // 0x58
	FString Uaid; // 0x60
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FEconomyUpdateStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Store; // 0x18
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FCloudScriptRegisterHttpFunctionRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
	FString FunctionUrl; // 0x18
};

struct FAuthenticationValidateEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	ELoginIdentityProvider IdentityProvider; // 0x10
	UPlayFabJsonObject* Lineage; // 0x18
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FNuclearSessionResult {
	FUniqueNetIdRepl HostPlayerNetId; // 0x108
	FString Name; // 0x130
	int32_t CurrentPlayers; // 0x140
	int32_t Ping; // 0x144
	FNuclearSessionSettings Settings; // 0x148
};

struct FMapEditorObjectFloatVariable {
	FName VariableName; // 0x0
	float VariableValue; // 0x8
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FMultiplayerCreateServerBackfillTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FServerGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FGroupsAcceptGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FAdminResetUserStatisticsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetPlayFabIDsFromGoogleIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FAdminSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FClientGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
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

struct FServerSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FLevelSelectMapEntity {
	FString Name; // 0x0
	FString DisplayName; // 0x10
	FString UniqueID; // 0x20
	UTexture2D* UnHoveredTexture; // 0x30
	UTexture2D* HoveredTexture; // 0x38
	EClassName LoadoutClassType; // 0x40
	FMapStarTimes StarTimes; // 0x44
	int32_t StarUnlockRequirement; // 0x54
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Quotas; // 0x8
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

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
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

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FCrateEntity {
	FString Name; // 0x0
	FString UniqueID; // 0x10
	UMaterialInstance* CrateMat; // 0x20
	UAnimComposite* AnimComposite; // 0x28
	UAkAudioEvent* AudioEvent; // 0x30
	UTexture2D* Texture; // 0x38
	UTexture2D* Texture_Large; // 0x40
	bool Purchasable; // 0x48
	bool CarouselHidden; // 0x49
	TArray<FString> ContentsIDs; // 0x50
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
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

struct FMultiplayerCreateRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString ExpirationTime; // 0x18
	FString Region; // 0x28
	FString Username; // 0x38
	FString VmId; // 0x48
};

struct FPlayerMedal {
	FString Name; // 0x0
	int32_t Progress; // 0x10
};

struct FAdminCreateActionsOnPlayerSegmentTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FServerGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FAdminGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FProfilesSetAvatarUrlRequest : FPlayFabRequestCommon {
	FString AvatarUrl; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	int32_t ProfileVersion; // 0x20
};

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FEconomyGetRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Recipe; // 0x18
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x20
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

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0xe0
	FStructSerializerArrayTestStruct Arrays; // 0x170
	FStructSerializerMapTestStruct Maps; // 0x1d0
	FStructSerializerSetTestStruct Sets; // 0x310
};

struct FClientGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FGroupsListGroupApplicationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
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

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FAdminUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
	FString PlayFabId; // 0x18
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FKillMetaData {
	bool bHeadShot; // 0x0
	bool bWallBang; // 0x1
	bool bAirKill; // 0x2
	bool bCollateralKill; // 0x3
	bool bFellToDeath; // 0x4
	bool bNoScope; // 0x5
	bool bKillerOnFire; // 0x6
	bool bKilledOnFire; // 0x7
	bool bNaded; // 0x8
	bool bBombed; // 0x9
	bool bCarBombed; // 0xa
	bool bKnifed; // 0xb
	float Damage; // 0xc
	FString BoneName; // 0x10
	FString WeaponName; // 0x20
	int32_t KillerTeamNum; // 0x30
	int32_t KilledTeamNum; // 0x34
	int32_t AssisterTeamNum; // 0x38
};

struct FSMExposedFunctionHandler {
	FName BoundFunction; // 0x0
	UFunction* Function; // 0x8
	UObject* OwnerObject; // 0x10
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
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

struct FClientRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FAdminGetCloudScriptTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FAdminUpdateRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Tables; // 0x18
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FAdminGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FCartesianRangeBound {
	ECartesianRangeBoundType Type; // 0x0
	float FixedBoundValue; // 0x4
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FLineData {
	TArray<FVector2D> Points; // 0x0
	FLinearColor Colour; // 0x10
	int32_t Thickness; // 0x20
	FVector2D TopLeft; // 0x24
	FVector2D BottomRight; // 0x2c
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
	UPlayFabJsonObject* PlayerProfile; // 0x18
	UPlayFabJsonObject* PlayStreamEventEnvelope; // 0x20
};

struct FEconomyDeleteItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
};

struct FGroupsApplyToGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString Expires; // 0x10
	UPlayFabJsonObject* Group; // 0x20
};

struct FMultiplayerRequestMultiplayerServerResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x8
	FString FQDN; // 0x18
	FString IPV4Address; // 0x28
	FString LastStateTransitionTime; // 0x38
	TArray<UPlayFabJsonObject*> Ports; // 0x48
	FString Region; // 0x58
	FString ServerId; // 0x68
	FString SessionId; // 0x78
	FString State; // 0x88
	FString VmId; // 0x98
};

struct FServerGetLeaderboardRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int32_t Version; // 0x34
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FSMNetworkedTransaction {
	FGuid StateMachineGuid; // 0x0
	FGuid BaseGuid; // 0x10
	FGuid TransactionGuid; // 0x20
	FDateTime Timestamp; // 0x30
	char TransactionType : 1; // 0x38
	char bIsActive : 1; // 0x38
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FClientLinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	FString DeviceName; // 0x8
	bool ForceLink; // 0x18
	FString PublicKey; // 0x20
	FString Username; // 0x30
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAdminGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FEconomyHelpfulnessVoteRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	bool IsHelpful; // 0x10
	FString ReviewId; // 0x18
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

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FClientGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FClientAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FClientWriteClientCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString Timestamp; // 0x30
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FMultiplayerListServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
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

struct FGenericTeamId {
	char TeamId; // 0x0
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FClientListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FDefaultKillTracker {
	ABattalionPlayerControllerGMBase* Player; // 0x0
	int32_t Kills; // 0x8
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FAdminGetCloudScriptAzureFunctionsTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FClientValidateIOSReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptData; // 0x30
};

struct FGroupsCreateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FAdminRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FMultiplayerRequestMultiplayerServerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* BuildAliasParams; // 0x8
	FString BuildId; // 0x10
	FString InitialPlayers; // 0x20
	FString PreferredRegions; // 0x30
	FString SessionCookie; // 0x40
	FString SessionId; // 0x50
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

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FChallengeDescription {
	FString Description_En; // 0x0
	FString Description_Fr; // 0x10
	FString Description_De; // 0x20
	FString Description_Es; // 0x30
	FString Description_It; // 0x40
	FString Description_PtBR; // 0x50
	FString Description_Ru; // 0x60
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FPlatformMatchSession {
	FUniqueNetIdRepl HostNetId; // 0x0
	FUniqueNetIdRepl SessionId; // 0x28
	TArray<FUniqueNetIdRepl> PendingMembers; // 0x50
	TArray<FUniqueNetIdRepl> JoiningMembers; // 0x60
	TArray<FUniqueNetIdRepl> ActiveMembers; // 0x70
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

struct FMultiplayerListContainerImagesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
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

struct FEconomyPurchaseItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> InventoryItems; // 0x28
	bool InventoryTooLarge; // 0x38
	TArray<UPlayFabJsonObject*> PurchasedItems; // 0x40
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
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

struct FProfilesSetDisplayNameRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	int32_t ExpectedVersion; // 0x20
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
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

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FServerGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
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

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FBattalionVideoDataEntity {
	FString Title; // 0x0
	FString VideoURL; // 0x10
	FText Tooltip; // 0x20
	bool bUseURLMiniature; // 0x38
	UTexture2DDynamic* Miniature; // 0x40
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FAuthenticationActivateAPIKeyRequest : FPlayFabRequestCommon {
	FString APIKeyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FServerRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerSetGameServerInstanceTagsRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	UPlayFabJsonObject* Tags; // 0x18
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

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
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

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FClientAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
};

struct FWeaponDematerializationData {
	FName DematerializeLastHitBoneName; // 0x0
	FVector DematerializeLastHitLocationOffset; // 0x8
	bool bIsDematerializing; // 0x14
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FEconomyCreateStoreRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* Store; // 0x28
};

struct FDebugTraceStyle {
	bool bEnabled; // 0x0
	FString Name; // 0x8
	FString Source; // 0x18
	float Lifetime; // 0x28
	bool DrawImpactNormal; // 0x2c
	FColor ImpactNormalColor; // 0x30
	float ImpactNormalLength; // 0x34
	float ImpactNormalThickness; // 0x38
	bool ShowImpactNormalLabel; // 0x3c
	FColor ImpactNormalLabelColor; // 0x40
	float ImpactNormalLabelSize; // 0x44
	bool DrawTracePath; // 0x48
	bool DrawTracePathFromCenterOfBody; // 0x49
	FColor TracePathColor; // 0x4c
	float TracePathThickness; // 0x50
	bool FlagBeginPenetrating; // 0x54
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
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

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRoundOverPayload {
	bool BombExploded; // 0x0
	int32_t RoundSeconds; // 0x4
	FString MapName; // 0x8
};

struct FMapList {
	FString MapName; // 0x0
	UTexture2D* Texture; // 0x10
	TArray<EGameModes> SuitableModes; // 0x18
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FServerModifyItemUsesResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FMultiplayerListQosServersForTitleResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FServerGetStoreItemsServerRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString PlayFabId; // 0x18
	FString StoreId; // 0x28
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FServerGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FServerGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FClientGetAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* AccountInfo; // 0x8
};

struct FServerGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FClientLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString XboxToken; // 0x38
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FClientCurrentGamesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString GameMode; // 0x18
	ERegion Region; // 0x28
	FString StatisticName; // 0x30
	UPlayFabJsonObject* TagFilter; // 0x40
};

struct FClientRestoreIOSPurchasesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString ReceiptData; // 0x18
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FMultiplayerListBuildSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
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

struct FPFSingleEntityMembershipInfo {
	FString GroupID; // 0x0
	FString GroupName; // 0x10
	TArray<FPFSingleEntityMembershipRoleInfo> Roles; // 0x20
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FPendingSpectateInfo {
	ABattalionPlayerControllerGMBase* PC; // 0x8
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FMultiplayerDeleteBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FSMStateMachineClassRule : FSMNodeClassRule {
	TSoftClassPtr<UObject> StateMachineClass; // 0x10
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FButtonAppearance {
	FButtonStyle Style; // 0x0
	FLinearColor ColorAndOpacity; // 0x278
	FLinearColor BackgroundColor; // 0x288
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FMultiplayerGetMatchRequest : FPlayFabRequestCommon {
	bool EscapeObject; // 0x8
	FString MatchID; // 0x10
	FString QueueName; // 0x20
	bool ReturnMemberAttributes; // 0x30
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FAdminUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FClientGetLeaderboardRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int32_t Version; // 0x34
};

struct FServerUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FMapEditorObjectBoolVariable {
	FName VariableName; // 0x0
	bool VariableValue; // 0x8
};

struct FSMTransitionInfo : FSMInfo_Base {
	FGuid FromStateGuid; // 0x60
	FGuid ToStateGuid; // 0x70
	int32_t Priority; // 0x80
};

struct FAkAmbSoundCheckpointRecord {
	bool bCurrentlyPlaying; // 0x0
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FClientDeviceInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Info; // 0x8
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FClientGetPlayFabIDsFromGameCenterIDsRequest : FPlayFabRequestCommon {
	FString GameCenterIDs; // 0x8
};

struct FAdminRefundPurchaseResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FEconomySearchBundlesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Bundles; // 0x8
	FString IdempotencyId; // 0x18
};

struct FMultiplayerGetCognitiveServicesTokenRequest : FPlayFabRequestCommon {
	ECognitiveServicesType CognitiveServicesType; // 0x8
	FString Region; // 0x10
};

struct FProfilesSetAvatarUrlResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	EOperationTypes OperationResult; // 0x10
	int32_t ProfileVersion; // 0x14
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

struct FTex2DPair {
	UTexture2D* Texture1; // 0x0
	UTexture2D* Texture2; // 0x8
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FAdminCreateTaskResult : FPlayFabResultCommon {
	FString TaskId; // 0x8
};

struct FAdminGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FDataGetFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FServerDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
};

struct FCloudScriptListFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
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

struct FDOMMode_ZoneProperties {
	float EnemySpawnInfluenceWeightingScalar; // 0x0
	float AllySpawnInfluenceWeightingScalar; // 0x4
	float EnemySpawnInfluenceDistanceScalar; // 0x8
	float AllySpawnInfluenceDistanceScalar; // 0xc
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FTeamSound {
	UAkAudioEvent* FriendlySound; // 0x0
	UAkAudioEvent* EnemySound; // 0x8
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FClientWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FGroupsRemoveGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FServerWriteServerCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString PlayFabId; // 0x30
	FString Timestamp; // 0x40
};

struct FEconomySearchRecipesRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t TOP; // 0x60
};

struct FServerGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FMultiplayerUpdateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
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

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FMarketNationCache {
	FString DefaultWeapon; // 0x0
	FString DefaultSecondary; // 0x10
	TArray<FMarketAvailableWeapon> Weapons; // 0x20
	TArray<FMarketAvailableWeapon> Grenades; // 0x30
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FAdminSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FGroupsAcceptGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
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

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FVaultData {
	float WallHeight; // 0x0
	float ServerTime; // 0x4
	EVaultType VaultType; // 0x8
	FVector_NetQuantize100 WallNormal; // 0xc
	FVector_NetQuantize100 EndLocation; // 0x18
	UPrimitiveComponent* HitComponent; // 0x28
	FBox VaultBox; // 0x30
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FClassOutfit {
	TArray<ABattalionWeapon*> DefaultInventoryClasses; // 0x0
	char GrenadeCount; // 0x10
	char SmokeGrenadeCount; // 0x11
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FSMTextNodeWidgetInfo : FSMTextDisplayWidgetInfo {
	FInlineEditableTextBlockStyle EditableTextStyle; // 0x0
	float WrapTextAt; // 0xa70
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FServerSendPushNotificationRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> AdvancedPlatformDelivery; // 0x8
	FString Message; // 0x18
	UPlayFabJsonObject* Package; // 0x28
	FString Recipient; // 0x30
	FString Subject; // 0x40
	FString TargetPlatforms; // 0x50
};

struct FMatchReportPayload {
	FString ID; // 0x0
	int32_t Timestamp; // 0x10
	FMatchReport Report; // 0x18
};

struct FAnimNode_RotateAroundPoint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	FRotator Rotation; // 0xd8
	FVector RotateAboutPoint; // 0xe4
	EBoneControlSpace RotationSpace; // 0xf0
};

struct FClientGetPlayerTradesRequest : FPlayFabRequestCommon {
	ETradeStatus StatusFilter; // 0x8
};

struct FServerMoveItemToCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FMarket {
	TArray<FMarketNationCache> Nations; // 0x0
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FSpectatorRules {
	bool OutlineAllowed; // 0x0
	bool GrenadeLinesAllowed; // 0x1
	bool LockedToFirstPerson; // 0x2
	float TransferTime; // 0x4
	bool ForceFreeCamOnSpectatorStart; // 0x8
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FSpecialAnim {
	UAnimMontage* Pawn1P; // 0x0
	UAnimMontage* Pawn3P; // 0x8
	UAnimMontage* SocketMesh1P; // 0x10
	UAnimMontage* SocketMesh3P; // 0x18
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FAdminCheckLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	int32_t Amount; // 0x8
};

struct FEconomyGetBundleByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FEconomyUpdateDraftItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Item; // 0x10
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FServerDeleteCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
	bool SaveCharacterInventory; // 0x28
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
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

struct FClientLinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FDataDeleteFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
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

struct FWeaponAnim {
	UAnimMontage* Pawn1P; // 0x0
	UAnimMontage* Pawn3P; // 0x8
	UAnimMontage* Gun1P; // 0x10
	UAnimMontage* Gun3P; // 0x18
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

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FDataFinalizeFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FNuclearPropertyRef {
	TFieldPath<FProperty> Property; // 0x0
	UStruct* PropertyOwner; // 0x20
	FString PropertyName; // 0x28
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

struct FAdminGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
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

struct FEconomySearchStoresRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t TOP; // 0x60
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FAdminSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FClientLoginWithWindowsHelloRequest : FPlayFabRequestCommon {
	FString ChallengeSignature; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString PublicKeyHint; // 0x20
};

struct FClientGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString StatisticName; // 0x30
};

struct FClientGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x34
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FVelocityBlend {
	float F_7_6B979B024A9C1596BEEF78BA0F5118FB; // 0x0
	float B_8_0B4A76174B5BFCA49D181FBD9408E742; // 0x4
	float L_11_C9DE8CBE452DF905BE61D7B11192D4B3; // 0x8
	float R_12_5BBC3E2140AED0EA663A039910961CEA; // 0xc
};

struct FAdminGetTasksResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Tasks; // 0x8
};

struct FMultiplayerGetMultiplayerServerDetailsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x8
	FString FQDN; // 0x18
	FString IPV4Address; // 0x28
	FString LastStateTransitionTime; // 0x38
	TArray<UPlayFabJsonObject*> Ports; // 0x48
	FString Region; // 0x58
	FString ServerId; // 0x68
	FString SessionId; // 0x78
	FString State; // 0x88
	FString VmId; // 0x98
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FLastMinuteSaviorKillTracker {
	ABattalionPlayerControllerGMBase* Player; // 0x0
	int32_t Kills; // 0x8
};

struct FEconomyCreateRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Recipe; // 0x18
};

struct FEconomyGetVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FWeaponNationEntity {
	EWeaponType Weapon; // 0x0
	TArray<ENationType> Nations; // 0x8
};

struct FClientGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FServerUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString XboxToken; // 0x18
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

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
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

struct FEconomySearchInStoreByIdRequest : FPlayFabRequestCommon {
	FString Filter; // 0x8
	FString ID; // 0x18
	FString IdempotencyId; // 0x28
	FString OrderBy; // 0x38
	FString Search; // 0x48
	int32_t Skip; // 0x58
	UPlayFabJsonObject* SourceEntityKey; // 0x60
	int32_t TOP; // 0x68
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
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

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FMultiplayerCreateMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Creator; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x18
	FString QueueName; // 0x28
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

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FServerGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	int32_t MaxBatchSize; // 0x18
	int32_t SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FSMTextSerializer {
	TArray<FName> ToTextFunctionNames; // 0x0
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FEconomyCreateSubscriptionRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* Subscription; // 0x20
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FAdminListBuildsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Builds; // 0x8
};

struct FLeaderboardsDeleteStatisticsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	UPlayFabJsonObject* Statistics; // 0x18
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FClientGetFriendLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FClientWriteClientPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FDecalData {
	UMaterialInstance* DecalMaterial; // 0x0
	FVector DecalSize; // 0x8
	float LifeSpan; // 0x14
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FEconomySearchStoresResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Stores; // 0x18
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FEconomyUpdateBundleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
};

struct FMultiplayerCreateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasName; // 0x8
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FWeaponAudioData {
	char bLoopedFireSound : 1; // 0x0
	UAkAudioEvent* ADSInSound; // 0x8
	UAkAudioEvent* ADSOutSound; // 0x10
	UAkAudioEvent* FireSound1pSingle; // 0x18
	UAkAudioEvent* FireSound3pSingle; // 0x20
	UAkAudioEvent* FireSound1pLoop; // 0x28
	UAkAudioEvent* FireSound3pLoop; // 0x30
	UAkAudioEvent* FireFinishSound1p; // 0x38
	UAkAudioEvent* FireFinishSound3p; // 0x40
	UAkAudioEvent* OutOfAmmoSound; // 0x48
	UAkAudioEvent* ReloadSound; // 0x50
	UAkAudioEvent* FinalShotSound; // 0x58
	UAkAudioEvent* FinalShotSound3P; // 0x60
	UAkAudioEvent* RechamberSound; // 0x68
	UAkAudioEvent* EquipSound; // 0x70
	UAkAudioEvent* HolsterSound; // 0x78
	UAkAudioEvent* CancelReloadEvent; // 0x80
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
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

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FEconomyReportItemRequest : FPlayFabRequestCommon {
	EConcernCategory Concern; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString ItemId; // 0x18
	FString Reason; // 0x28
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FServerSavePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString AndroidPayload; // 0x8
	FString ID; // 0x18
	FString IOSPayload; // 0x28
	UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38
	FString Name; // 0x40
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FGroupsRemoveMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FServerModifyCharacterVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FAdminGetContentUploadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FClientSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FClientGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString StatisticName; // 0x10
};

struct FBattalionLoadoutTeamDeck {
	TArray<FString> ClassNames; // 0x0
};

struct FCartesianAxisConfig {
	FText Title; // 0x0
	FText Unit; // 0x18
	float MarkerSpacing; // 0x30
	int32_t MaxValueDigits; // 0x34
	FCartesianAxisInstanceConfig LeftBottomAxis; // 0x38
	FCartesianAxisInstanceConfig RightTopAxis; // 0x3c
	FCartesianAxisInstanceConfig FloatingAxis; // 0x40
};

struct FServerSetGameServerInstanceStateRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	EGameInstanceState State; // 0x18
};

struct FJumperLeaderboardData {
	FName LeaderboardName; // 0x0
	TArray<FJumperLeaderboardElement> Players; // 0x8
};

struct FMultiplayerJoinMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Member; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FMultiplayerCreateServerBackfillTicketRequest : FPlayFabRequestCommon {
	int32_t GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
	UPlayFabJsonObject* ServerDetails; // 0x30
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FClientLinkAppleRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString IdentityToken; // 0x10
};

struct FAdminUpdateStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	TArray<UPlayFabJsonObject*> Store; // 0x20
	FString StoreId; // 0x30
};

struct FFlinch {
	float TimePassed; // 0x0
	FVector Direction; // 0x4
	float Damage; // 0x10
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FSMState : FSMState_Base {
	FSMExposedFunctionHandler UpdateStateGraphEvaluator; // 0x188
	FSMExposedFunctionHandler EndStateGraphEvaluator; // 0x1a8
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FDataInitiateFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> UploadDetails; // 0x18
};

struct FAdminIncrementPlayerStatisticVersionRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FGroupsListMembershipOpportunitiesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
	TArray<UPlayFabJsonObject*> Invitations; // 0x18
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FClientModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FPawnControlRotation {
	ABattalionCharacter* Pawn; // 0x0
	FRotator ControlRotation; // 0x8
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FAdminIncrementPlayerStatisticVersionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* StatisticVersion; // 0x8
};

struct FEconomyDeleteSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FOneTapKillerExpiry {
	ABattalionPlayerState* Killer; // 0x0
	float Timer; // 0x8
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FClientUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FProfilesGetEntityProfileRequest : FPlayFabRequestCommon {
	bool DataAsObject; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
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

struct FServerGrantItemsToUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FClientOpenTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
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

struct FPFTitleData {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FAdminRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FClientConsumeXboxEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FClientPurchaseItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FKantanCartesianChartStyle : FKantanChartStyle {
	float DataOpacity; // 0x120
	float DataLineThickness; // 0x124
};

struct FAdminGetContentListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	int32_t ItemCount; // 0x18
	int32_t TotalSize; // 0x1c
};

struct FBuckshotMissInfo {
	FVector ImpactLocation; // 0x0
};

struct FMultiplayerGetServerBackfillTicketRequest : FPlayFabRequestCommon {
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FAdminCreateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FBattalionColourEntity {
	EBattalionColour ColourId; // 0x0
	FLinearColor Colour; // 0x4
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FClientGetPlayFabIDsFromGoogleIDsRequest : FPlayFabRequestCommon {
	FString GoogleIDs; // 0x8
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FClientGetPlayFabIDsFromKongregateIDsRequest : FPlayFabRequestCommon {
	FString KongregateIDs; // 0x8
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FDataGetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	bool EscapeObject; // 0x10
};

struct FMultiplayerRequestPartyResponse : FPlayFabResultCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x18
	FString DTLSCertificateSHA2Thumbprint; // 0x28
	FString FQDN; // 0x38
	FString IPV4Address; // 0x48
	FString LastStateTransitionTime; // 0x58
	FString PartyId; // 0x68
	TArray<UPlayFabJsonObject*> Ports; // 0x78
	FString Region; // 0x88
	FString ServerId; // 0x98
	FString State; // 0xa8
	FString VmId; // 0xb8
};

struct FChallengeInfo {
	FString ChallengeId; // 0x0
	int32_t TargetNumber; // 0x10
	int32_t CurrentNumber; // 0x14
	FChallengeDescription Descriptions; // 0x18
	int32_t XP; // 0x88
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FMapEditorObjectIntVariable {
	FName VariableName; // 0x0
	int32_t VariableValue; // 0x8
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FProfilesGetGlobalPolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FClientGetPlayerTradesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AcceptedTrades; // 0x8
	TArray<UPlayFabJsonObject*> OpenedTrades; // 0x18
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
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

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FGroupsCreateGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString GroupName; // 0x10
};

struct FClientCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
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

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FAdminRemoveServerBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FGrenadeThrowInfo {
	USkeletalMesh* GrenadeMeshFP; // 0x0
	UMaterialInterface* FirstPersonMaterial; // 0x8
	USkeletalMesh* GrenadeMeshTP; // 0x10
	UObject* GrenadeMeshClass; // 0x18
	EGrenadeType OffensiveUtilType; // 0x20
	ESpecialGrenadeType TacticalUtilType; // 0x21
	bool bOffensiveGrenade; // 0x22
	float GrenadePrepTime; // 0x24
};

struct FLoadoutCard {
	ELoadoutCardType CardType; // 0x0
	FString UniqueName; // 0x8
	FString DisplayName; // 0x18
	ENationType Nation; // 0x28
	int32_t Cost; // 0x2c
	FSlateBrush Image; // 0x30
	int32_t StackCount; // 0xb8
	FLoadoutWeapon MainWeapon; // 0xc0
	FLoadoutWeapon Sidearm; // 0x160
	int32_t GrenadeCount; // 0x200
	int32_t SpecialGrenadeCount; // 0x204
};

struct FMatchmakerAuthUserResponse : FPlayFabResultCommon {
	bool Authorized; // 0x8
	FString PlayFabId; // 0x10
};

struct FServerUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FClientCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FServerGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FClientGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int32_t Version; // 0x34
	FString XboxToken; // 0x38
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FEconomyGetStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x18
	UPlayFabJsonObject* Store; // 0x28
};

struct FGroupsInviteToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingApplication; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FServerGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
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

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FSocketReference {
	FName SocketName; // 0x30
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

struct FEconomySearchForItemsContainingItemByIdRequest : FPlayFabRequestCommon {
	EContainerType ContainerType; // 0x8
	FString IdempotencyId; // 0x10
	FString Ids; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FServerAddCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
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

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FServerReportPlayerServerResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FServerRedeemMatchmakerTicketRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString Ticket; // 0x18
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
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

struct FEventsWriteEventsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Events; // 0x8
};

struct FMultiplayerGetRemoteLoginEndpointRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString VmId; // 0x28
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FClientGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FServerAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
	FString PlayFabId; // 0x48
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FAdminGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
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

struct FEconomySearchForItemsContainingItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Bundles; // 0x8
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Recipes; // 0x28
	TArray<UPlayFabJsonObject*> Stores; // 0x38
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x48
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FMapStarTimes {
	float StarTimeOne; // 0x0
	float StarTimeTwo; // 0x4
	float StarTimeThree; // 0x8
	float StarTimePro; // 0xc
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FLeaderboardsDeleteStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FClientGetFriendLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
	FString XboxToken; // 0x40
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FWeaponBurstCounter {
	int32_t PreviousRoundsInMag; // 0x0
	int32_t BurstCounter; // 0x4
	int32_t GlobalBurstCounter; // 0x8
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

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FCombo {
	FName ComboName; // 0x0
	TArray<FKey> Keys; // 0x8
	UNUISettingsMenuItem* Widget; // 0x18
	FName ValueName; // 0x20
	bool bIgnoreConflicts; // 0x28
};

struct FAdminModifyMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	TArray<UPlayFabJsonObject*> GameModes; // 0x18
};

struct FMultiplayerGetBuildResponse : FPlayFabResultCommon {
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	FString BuildStatus; // 0x28
	EContainerFlavor ContainerFlavor; // 0x38
	FString ContainerRunCommand; // 0x40
	FString CreationTime; // 0x50
	UPlayFabJsonObject* CustomGameContainerImage; // 0x60
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x68
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x78
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x88
	UPlayFabJsonObject* MetaData; // 0x90
	int32_t MultiplayerServerCountPerVm; // 0x98
	TArray<UPlayFabJsonObject*> Ports; // 0xa0
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0xb0
	FString StartMultiplayerServerCommand; // 0xc0
	EAzureVmSize VmSize; // 0xd0
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

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FEconomyGetUgcItemModerationStateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ItemId; // 0x10
};

struct FEventsWriteEventsResponse : FPlayFabResultCommon {
	FString AssignedEventIds; // 0x8
};

struct FAdminGetPlayerProfileRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FAdminCreatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString FriendlyName; // 0x8
};

struct FClientRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
};

struct FTextImage {
	FSlateBrush ImageBrush; // 0x0
	FLinearColor ImageColorAndOpacity; // 0x88
	FText Text; // 0x98
	FSlateFontInfo TextFont; // 0xb0
	FSlateColor TextColorAndOpacity; // 0x108
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
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

struct FClientUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FServerSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FRequestCompletedChallengeUser {
	FString PlayFabId; // 0x0
	EOnlinePlatform OnlinePlatform; // 0x10
};

struct FAdminGetCloudScriptRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FAdminGetPlayerTagsRequest : FPlayFabRequestCommon {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FAdminUpdateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FServerDeletePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3c
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FServerRedeemMatchmakerTicketResult : FPlayFabResultCommon {
	FString Error; // 0x8
	bool TicketIsValid; // 0x18
	UPlayFabJsonObject* UserInfo; // 0x20
};

struct FAdminGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FPFPlayerStat {
	FString Name; // 0x0
	int32_t Value; // 0x10
	int32_t Version; // 0x14
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FClientGetPaymentTokenResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString ProviderToken; // 0x18
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

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FClientRefreshPSNAuthTokenRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	int32_t IssuerId; // 0x18
	FString RedirectUri; // 0x20
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

struct FClientCurrentGamesResult : FPlayFabResultCommon {
	int32_t GameCount; // 0x8
	TArray<UPlayFabJsonObject*> Games; // 0x10
	int32_t PlayerCount; // 0x20
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FClientLinkKongregateAccountRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	bool ForceLink; // 0x18
	FString KongregateId; // 0x20
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

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FServerGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FMultiplayerListContainerImageTagsResponse : FPlayFabResultCommon {
	FString Tags; // 0x8
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
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

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FServerGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
	FString PlayFabId; // 0x28
};

struct FServerGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FAdminGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FDeathMessage {
	FString KillerDesc; // 0x0
	FString VictimDesc; // 0x10
	FString AssisterDesc; // 0x20
	char bKillerIsOwner : 1; // 0x30
	char bVictimIsOwner : 1; // 0x30
	char bAssisterIsOwner : 1; // 0x30
	int32_t KillerTeamNum; // 0x34
	int32_t VictimTeamNum; // 0x38
	float HideTime; // 0x3c
	TWeakObjectPtr<UBattalionDamageType> DamageType; // 0x40
	FKillMetaData KillMateData; // 0x48
	ABattalionPlayerState* Killer; // 0x88
	ABattalionPlayerState* Victim; // 0x90
	TArray<ABattalionPlayerState*> Assistants; // 0x98
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FMapSelectList {
	FString MapName; // 0x0
	UUserWidget* Normal; // 0x10
	UUserWidget* Hovered; // 0x18
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
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

struct FMapModeVoteInfo {
	FString MapName; // 0x0
	FString ModeName_Long; // 0x10
	FString ModeName_Short; // 0x20
	FString ModePath; // 0x30
	FString SubModeName; // 0x40
	int32_t VotesNeeded; // 0x50
	bool LockedIn; // 0x54
	TArray<FString> PlayersWhoVoted; // 0x58
};

struct FServerGetServerCustomIDsFromPlayFabIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FSMInfo_Base {
	FString NodeName; // 0x8
	FGuid Guid; // 0x18
	FGuid OwnerGuid; // 0x28
	FGuid NodeGuid; // 0x38
	FGuid OwnerNodeGuid; // 0x48
	USMNodeInstance* NodeInstance; // 0x58
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
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

struct FSpawnData {
	FString Name; // 0x0
	FVector Position; // 0x10
	TArray<int32_t> ModeWeights; // 0x20
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
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

struct FKillRunCheckpointData {
	TArray<AKillRunWeaponPickup*> Pickups; // 0x0
	TArray<APromodBot*> Bots; // 0x10
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

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FServerRegisterGameRequest : FPlayFabRequestCommon {
	FString Build; // 0x8
	FString GameMode; // 0x18
	FString LobbyId; // 0x28
	ERegion Region; // 0x38
	FString ServerIPV4Address; // 0x40
	FString ServerIPV6Address; // 0x50
	FString ServerPort; // 0x60
	FString ServerPublicDNSName; // 0x70
	UPlayFabJsonObject* Tags; // 0x80
};

struct FServerBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
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

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FEconomyDeleteSubscriptionByIdRequest : FPlayFabRequestCommon {
	FString ID; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FActorLayer {
	FName Name; // 0x0
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FBestWeaponData {
	EWeaponType WeaponType; // 0x0
	int32_t Kills; // 0x4
	int32_t Deaths; // 0x8
	FString KDRatio; // 0x10
	int32_t Headshots; // 0x20
	FString HoursPlayed; // 0x28
};

struct FClientStartGameRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString CustomCommandLineData; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
	FString StatisticName; // 0x50
};

struct FGroupsInviteToGroupResponse : FPlayFabResultCommon {
	FString Expires; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	UPlayFabJsonObject* InvitedByEntity; // 0x20
	UPlayFabJsonObject* InvitedEntity; // 0x28
	FString RoleId; // 0x30
};

struct FPlayerData {
	FString Name; // 0x0
	FVector Position; // 0x10
	bool IsAlive; // 0x1c
	int32_t TeamNum; // 0x20
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FServerConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FKantanCartesianDatapoint {
	FVector2D Coords; // 0x0
};

struct FMatchmakerStartGameResponse : FPlayFabResultCommon {
	FString GameID; // 0x8
	FString ServerIPV4Address; // 0x18
	FString ServerIPV6Address; // 0x28
	int32_t ServerPort; // 0x38
	FString ServerPublicDNSName; // 0x40
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FWeaponNameEntry {
	EWeaponType WeaponType; // 0x0
	FText WeaponName; // 0x8
};

struct FDataDeleteFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
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

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FTextAppearance {
	FText Text; // 0x0
	FSlateColor ColorAndOpacity; // 0x18
	FSlateFontInfo Font; // 0x40
	FSlateBrush StrikeBrush; // 0x98
	FVector2D ShadowOffset; // 0x120
	FLinearColor ShadowColor; // 0x128
	float MinDesiredWidth; // 0x138
	EHorizontalAlignment Justification; // 0x13c
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FAdminIncrementLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CatalogVersion; // 0x10
	FString ItemId; // 0x20
};

struct FClientGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FAdminResolvePurchaseDisputeResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
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

struct FAdminGetContentUploadUrlRequest : FPlayFabRequestCommon {
	FString ContentType; // 0x8
	FString Key; // 0x18
};

struct FAdminBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAdminGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FLeaderboardsIncrementStatisticVersionResponse : FPlayFabResultCommon {
	int32_t Version; // 0x8
	int32_t VersionToBeDeleted; // 0xc
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
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

struct FClientGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
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

struct FServerGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FGroupsListGroupMembersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Members; // 0x8
};

struct FLoadoutDropZone {
	FString Name; // 0x0
	FVector2D ScreenPosition; // 0x10
	float Radius; // 0x18
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FClientMatchmakeRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString GameMode; // 0x28
	FString LobbyId; // 0x38
	ERegion Region; // 0x48
	bool StartNewIfNoneFound; // 0x49
	FString StatisticName; // 0x50
	UPlayFabJsonObject* TagFilter; // 0x60
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FGroupsUpdateGroupRoleRequest : FPlayFabRequestCommon {
	int32_t ExpectedProfileVersion; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
	FString RoleName; // 0x28
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FAdminCreateCloudScriptTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FGroupsRemoveGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FPromodCourseTimeData {
	FString MapName; // 0x0
	float PersonalBestCourseTime; // 0x10
	TArray<float> PersonalBestSplitTimes; // 0x18
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FAdminGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FClientUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
};

struct FEconomySearchForItemsContainingItemByFriendlyIdRequest : FPlayFabRequestCommon {
	EContainerType ContainerType; // 0x8
	FString FriendlyIds; // 0x10
	FString IdempotencyId; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FMultiplayerGetAssetUploadUrlRequest : FPlayFabRequestCommon {
	FString Filename; // 0x8
};

struct FAdminCreatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FServerEvaluateRandomResultTableRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableId; // 0x18
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FServerGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FServerUpdateUserInventoryItemDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString ItemInstanceId; // 0x20
	FString KeysToRemove; // 0x30
	FString PlayFabId; // 0x40
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
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

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
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

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
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

struct FAdminGetTaskInstancesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Summaries; // 0x8
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

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FProfilesSetGlobalPolicyRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x38
	bool UseHardwareCodecLowLatencyMode; // 0x3a
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
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

struct FClientLinkGoogleAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString ServerAuthCode; // 0x10
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
};

struct FServerGetServerCustomIDsFromPlayFabIDsRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FSMStateMachineNodePlacementValidator : FSMConnectionValidator {
	TArray<FSMStateClassRule> AllowedStates; // 0x0
	bool bAllowReferences; // 0x10
	bool bAllowParents; // 0x11
};

struct FClientGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FInvincibleTracker {
	ABattalionPlayerControllerGMBase* Player; // 0x0
	float TimeAlive; // 0x8
	bool bReceivedMedalThisLife; // 0xc
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FEconomyDeleteRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FMultikillTracker {
	ABattalionPlayerState* BattPS; // 0x0
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

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
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

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FProfilesSetEntityProfilePolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FClientGetPlayFabIDsFromTwitchIDsRequest : FPlayFabRequestCommon {
	FString TwitchIds; // 0x8
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
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

struct FAdminGetPlayerIdFromAuthTokenRequest : FPlayFabRequestCommon {
	FString Token; // 0x8
	EAuthTokenType TokenType; // 0x18
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FClientGetPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FClientUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
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

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FClientUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FAdminAddVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FAuthenticationGetEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityToken; // 0x10
	FString TokenExpiration; // 0x20
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FMultiplayerListAssetSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FTacticalUtilItem {
	UTexture2D* Icon; // 0x0
	UTexture2D* LoadoutSelectionImage; // 0x8
	ESpecialGrenadeType Type; // 0x10
	int32_t Count; // 0x14
	FString Name; // 0x18
	FText Tooltip; // 0x28
	FVector2D IconScaling; // 0x40
	ABattalionGrenade* Class; // 0x48
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FServerSetGameServerInstanceDataRequest : FPlayFabRequestCommon {
	FString GameServerData; // 0x8
	FString LobbyId; // 0x18
};

struct FServiceStatus {
	TArray<FFlightingPeriod> FlightingPeriods; // 0x0
	bool FlightingEnabled; // 0x10
	bool FlightingShowAgreement; // 0x11
	FString FlightingAgreement; // 0x18
	TMap<EMatchmakingQueue, bool> Queues; // 0x28
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

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FAdminGetMatchmakerGameInfoRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
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

struct FCompletedChallenges {
	TArray<FCompletedChallengeInfo> DailyChallenges; // 0x0
	FCompletedChallengeInfo WeeklyChallenge; // 0x10
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

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FStackMember {
	FText Name; // 0x0
	int32_t UniqueID; // 0x18
	bool bMarkToDelete; // 0x1c
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FCloudScriptExecuteEntityCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x29
	int32_t SpecificRevision; // 0x2c
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FWeaponVisualData {
	UDamageType* DamageType; // 0x0
	USkeletalMesh* MeshOverrideFirstPerson; // 0x8
	USkeletalMesh* MeshOverrideThirdPerson; // 0x10
	FWeaponAnim InspectWeaponAnim; // 0x18
	FWeaponAnim FlareEquipAnim; // 0x38
	FWeaponAnim EquipAnim; // 0x58
	FWeaponAnim QuickEquipAnim; // 0x78
	FWeaponAnim ReloadAnim; // 0x98
	FWeaponAnim ReloadFromEmptyAnim; // 0xb8
	FWeaponAnim RechamberAnim; // 0xd8
	FWeaponAnim HolsterAnim; // 0xf8
	char bLoopedFireAnim : 1; // 0x118
	FWeaponAnim FireAnim; // 0x120
	FWeaponAnim FireFinalShotAnim; // 0x140
	FWeaponAnim FireOnlyFromHipAnim; // 0x160
	FWeaponAnim BashAnim; // 0x180
	UCurveVector* BashScreenSway; // 0x1a0
	bool bUseAlternateAnimationSystem; // 0x1a8
	UAnimSequence* HipIdleAnim1P; // 0x1b0
	UAnimSequence* HipIdleAdditiveAltAnim1P; // 0x1b8
	UAnimSequence* SprintAnim1P; // 0x1c0
	UAnimSequence* SprintInAnim1P; // 0x1c8
	UAnimSequence* AnimADSLocomotion1P; // 0x1d0
	UAnimSequence* SlideAnim1P; // 0x1d8
	UAnimSequenceBase* TargetingAnim1P; // 0x1e0
	UAnimSequenceBase* TargetingOutAnim1P; // 0x1e8
	float FlinchModifier; // 0x1f0
	UAnimSequence* AdditiveGripPose3P; // 0x1f8
	FTransform AdditiveGripTransform3P; // 0x200
	UAnimSequence* IdleAnim3P; // 0x230
	UAnimSequence* RunIdleAnim1P; // 0x238
	UAnimSequence* CrawlIdleAnim1P; // 0x240
	UAnimSequence* JumpStartAnim1P; // 0x248
	UAnimSequence* JumpLoopAnim1P; // 0x250
	UAnimSequence* JumpEndAnim1P; // 0x258
	UAnimSequence* SprintOutAnim1P; // 0x260
	UCurveVector* ReloadScreenSway; // 0x268
	UCurveVector* ReloadSegmentedScreenSway; // 0x270
	UCurveVector* ReloadFromEmptyScreenSway; // 0x278
	UCurveVector* RechamberScreenSway; // 0x280
	UCurveVector* EquipScreenSway; // 0x288
	UCurveVector* QuickEquipScreenSway; // 0x290
	UCurveVector* InspectScreenSway; // 0x298
	FVector HipScaleCrush; // 0x2a0
	FVector ADSScaleCrush; // 0x2ac
	FVector AnimInstanceHipScaleCrush; // 0x2b8
	FVector AnimInstanceADSScaleCrush; // 0x2c4
	FVector AnimInstanceHipScaleCrushOffset; // 0x2d0
	FVector AnimInstanceADSScaleCrushOffset; // 0x2dc
	float ADSFOVCrush; // 0x2e8
	float ADSFOVAspectFix; // 0x2ec
	FVector HipScaleCrushOffset; // 0x2f0
	FVector ADSScaleCrushOffset; // 0x2fc
	float SwayForwardDistanceAiming; // 0x308
	float SwayForwardDistanceNotAiming; // 0x30c
	float SwayAimingVerticalClamp; // 0x310
	float SwayAimingHorizontalClamp; // 0x314
	float SwayHipVerticalClamp; // 0x318
	float SwayHipHorizontalClamp; // 0x31c
	float SwayAimingVerticalScale; // 0x320
	float SwayAimingHorizontalScale; // 0x324
	float SwayHipVerticalScale; // 0x328
	float SwayHipHorizontalScale; // 0x32c
	float WeaponFOV; // 0x330
	float DepthScale; // 0x334
	float DepthScaleADS; // 0x338
	float DepthScaleTransitionPower; // 0x33c
	char bLoopedMuzzleFX : 1; // 0x340
};

struct FAnotherNotchTracker {
	ABattalionPlayerState* KillerPS; // 0x0
	TArray<ABattalionPlayerState*> UniqueKilledPlayers; // 0x8
};

struct FClientConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FLoadoutAccessory {
	ELoadoutSlotType SlotType; // 0x0
	int32_t SlotIndex; // 0x4
	FString UniqueName; // 0x8
	FSlateBrush Image; // 0x18
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x38
	bool RoundFrameSizeToHardwareSize; // 0x3c
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FEconomySearchRecipesResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Recipes; // 0x18
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FNUIButtonTextAppearance {
	FSlateColor ColorAndOpacity; // 0x0
	FSlateFontInfo Font; // 0x28
	FSlateBrush StrikeBrush; // 0x80
	FVector2D ShadowOffset; // 0x108
	FLinearColor ShadowColor; // 0x110
	float MinDesiredWidth; // 0x120
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

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FClientGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
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

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FProfilesSetProfileLanguageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedVersion; // 0x10
	FString Language; // 0x18
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FClientGetTradeStatusRequest : FPlayFabRequestCommon {
	FString OfferingPlayerId; // 0x8
	FString TradeId; // 0x18
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FClientGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	UPlayFabJsonObject* VirtualCurrency; // 0x18
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20
};

struct FAdminUpdatePolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FVOCategory {
	TArray<FVOVoice> Voices; // 0x0
	UCurveFloat* Curve; // 0x10
};

struct FMultiplayerGetMatchResult : FPlayFabResultCommon {
	FString MatchID; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RegionPreferences; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> Ids; // 0x0
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FGroupsListGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FAdminGetDataReportRequest : FPlayFabRequestCommon {
	int32_t Day; // 0x8
	int32_t Month; // 0xc
	FString ReportName; // 0x10
	int32_t Year; // 0x20
};

struct FGroupsAddMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FEconomyGetPublishedItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
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

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FClientLinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	FString DeviceID; // 0x8
	FString DeviceModel; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
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

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

