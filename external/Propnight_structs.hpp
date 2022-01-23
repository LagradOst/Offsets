// Created by BlueFire1337
// Updated 2022-01-18
// Generated 2022-01-23

#pragma once

struct FAdminListBuildsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Builds; // 0x8
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FMultiplayerUpdateBuildRegionsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> BuildRegions; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FServerGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FServerGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString PlayFabId; // 0x30
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

struct FATPCRoofCollisionCheckSettings {
	TArray<EObjectTypeQuery> TraceObjectTypes; // 0x0
	FVector EyesBoxTraceHalfSize; // 0x10
	float RoofTraceAngleFirst; // 0x1c
	FVector RoofBoxTraceHalfSizeFirst; // 0x20
	float RoofTraceAngleSecond; // 0x2c
	FVector RoofBoxTraceHalfSizeSecond; // 0x30
	FATPCRotationOffsetSettings RotationOffsetSettings; // 0x3c
	bool bEnableDebug; // 0x54
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FMultiplayerDeleteCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Name; // 0x10
};

struct FEOSSessionModificationSetJoinInProgressAllowedOptions {
	bool bAllowJoinInProgress; // 0x4
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

struct FEOSLobbyDetailsGetMemberByIndexOptions {
	int32_t MemberIndex; // 0x4
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FEOSAchievementsCopyAchievementDefinitionV2ByAchievementIdOptions {
	FString AchievementId; // 0x0
};

struct FRequestAccessTokenRequest {
	FWebClientCredentials Credentials; // 0x0
	FString DeploymentId; // 0x20
	FString AdditionalData; // 0x30
};

struct FEOSConnectQueryProductUserIdMappingsOptions {
	FEOSProductUserId LocalUserId; // 0x0
	TArray<FEOSProductUserId> ProductUserIds; // 0x28
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FEOSAuthLinkAccountCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSAuthPinGrantInfo PinGrantInfo; // 0x38
	FEOSEpicAccountId SelectedAccountId; // 0x78
};

struct FClientListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetPlayFabIDsFromGoogleIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FEOSConfig {
	FString ConfigName; // 0x0
	FString ProductId; // 0x10
	FString SandboxId; // 0x20
	FString DeploymentId; // 0x30
	FString ClientId; // 0x40
	FString ClientSecret; // 0x50
	FString EncryptionKey; // 0x60
	bool bEnableRTC; // 0x70
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

struct FServerGetStoreItemsServerRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
	FString StoreId; // 0x30
};

struct FServerGrantItemsToCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FEOSSessionsDumpSessionStateOptions {
	FString SessionName; // 0x8
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FS_Perks {
	FText Name_6_0FEC61E0472D4379016FA690A50DAE35; // 0x0
	TArray<FText> Desc_10_29020D294D3A01203057BC8C7060E5DE; // 0x18
	TArray<int32_t> Buff_12_B565A42A4DA8D1AC37607FB288F396DE; // 0x28
	TArray<FText> Descr_16_6986E42A434098CC87B503BC7BB2F76E; // 0x38
};

struct FEOSSessionsUpdateSessionModificationOptions {
	FString SessionName; // 0x8
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FClientLinkFacebookAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FGroupsListGroupMembersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Members; // 0x8
};

struct FEOSFriendsRejectInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetUserId; // 0x31
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FVaRestCallResponse {
	UVaRestRequestJSON* Request; // 0x0
	FDelegate Callback; // 0x8
};

struct FLiveLinkCurveConversionSettings {
	TMap<FString, FSoftObjectPath> CurveConversionAssetMap; // 0x0
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FS_LootBoxSkin {
	int32_t ItemID_3_62707AC540AD4D1F769380A6D9505630; // 0x0
	FText Name_15_E3FE72184D9850FBDA65FF9D79A0E2A8; // 0x8
	Rarity Rarity_21_8574DE8C48282242F8DDD6BA41222941; // 0x20
	E_LootboxType Type_17_C4AF5CC646355F2A667158A2F82A1E20; // 0x21
	UStaticMesh* StaticMeshes_20_C0FF18A64DF6989713A73C8E9B8AFB46; // 0x28
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FAdminSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FEOSLeaderboardsOnQueryLeaderboardRanksCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
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

struct FEOSAntiCheatServerReceiveMessageFromClientOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	TArray<char> Data; // 0x10
};

struct FClientLoginWithGoogleAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString ServerAuthCode; // 0x40
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

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FEOSEcomCopyEntitlementByIdOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FEOSEcomEntitlementId EntitlementId; // 0x28
};

struct FMultiplayerEnableMultiplayerServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FMultiplayerListBuildSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FEOSAntiCheatClientReceiveMessageFromPeerOptions {
	FEOSAntiCheatCommonClientHandle PeerHandle; // 0x8
	TArray<char> Data; // 0x18
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FEOSSessionSearchSetParameterOptions {
	FEOSSessionsAttributeData Parameter; // 0x8
	EEOSEComparisonOp ComparisonOp; // 0x30
};

struct FServerGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FEOSSessionModificationSetHostAddressOptions {
	FString HostAddress; // 0x8
};

struct FCloudScriptRegisterQueuedFunctionRequest : FPlayFabRequestCommon {
	FString ConnectionString; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString FunctionName; // 0x20
	FString QueueName; // 0x30
};

struct FEOSAntiCheatClientUnregisterPeerOptions {
	FEOSAntiCheatCommonClientHandle PeerHandle; // 0x8
};

struct FEOSFriendsSendInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetUserId; // 0x31
};

struct FEOSAuthCredentials {
	FString ID; // 0x8
	FString Token; // 0x18
	EEOSLoginCredentialType Type; // 0x28
	EEOSEExternalCredentialType ExternalType; // 0x29
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FClientUnlinkNintendoServiceAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSSessionsCopyActiveSessionHandleOptions {
	FString SessionName; // 0x8
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FEOSSessionsEndSessionCallbackInfo {
	EOSResult ResultCode; // 0x0
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

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
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

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FAdminRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAdminRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FServerAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FEOSLeaderboardsCopyLeaderboardUserScoreByIndexOptions {
	int32_t LeaderboardUserScoreIndex; // 0x4
	FString StatName; // 0x8
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FServerGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FEOSEcomEntitlementId {
	FString EntitlementId; // 0x0
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FAdminAddLocalizedNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Language; // 0x20
	FString NewsId; // 0x30
	FString Title; // 0x40
};

struct FClientGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
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

struct FAdminRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
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

struct FClientGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString StatisticName; // 0x30
};

struct FExperimentationGetLatestScorecardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Scorecard; // 0x8
};

struct FMultiplayerDeleteBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FServerGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FEOSAntiCheatClientRegisterPeerOptions {
	FEOSAntiCheatCommonClientHandle PeerHandle; // 0x8
	EEOSEAntiCheatCommonClientType ClientType; // 0x10
	EEOSEAntiCheatCommonClientPlatform ClientPlatform; // 0x11
	FString AccountId; // 0x18
	FString IpAddress; // 0x28
};

struct FEOSLobbySearchCopySearchResultByIndexOptions {
	int32_t LobbyIndex; // 0x4
};

struct FRequestAuthAccessTokenRequest {
	EWebGrantType GrantType; // 0x0
	FString DeploymentId; // 0x8
	FString Username; // 0x18
	FString Password; // 0x28
	FString ExchangeCode; // 0x38
	FString Code; // 0x48
	FWebClientCredentials Credentials; // 0x58
	FString Scope; // 0x78
};

struct FClientGameServerRegionsRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FEOSUserInfoCopyExternalUserInfoByAccountIdOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
	FString AccountId; // 0x48
};

struct FEOSModsModInfo {
	TArray<FEOSModIdentifier> Mods; // 0x8
	EEOSEModEnumerationType Type; // 0x18
};

struct FAdminGetMatchmakerGameModesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GameModes; // 0x8
};

struct FEOSEcomCopyItemImageInfoByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString ItemId; // 0x28
	int32_t ImageInfoIndex; // 0x38
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FClientReportPlayerClientRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReporteeId; // 0x20
};

struct FClientValidateGooglePlayPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptJson; // 0x38
	FString Signature; // 0x48
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FEOSModsInstallModOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSModIdentifier Mod; // 0x28
	bool bRemoveAfterExit; // 0x80
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FEOSAntiCheatCommonSetClientDetailsOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	EEOSEAntiCheatCommonClientFlags ClientFlags; // 0x10
	EEOSEAntiCheatCommonClientInput ClientInputMethod; // 0x11
};

struct FEOSEcomTransactionCopyEntitlementByIndexOptions {
	int32_t EntitlementIndex; // 0x4
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FCloudScriptListFunctionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSStatsQueryStatsOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString StartTime; // 0x28
	FString EndTime; // 0x38
	TArray<FString> StatNames; // 0x48
	FEOSProductUserId TargetUserId; // 0x5c
};

struct FClientGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FAdminUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DisplayName; // 0x10
	FString PlayFabId; // 0x20
};

struct FClientUnlinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceID; // 0x10
};

struct FServerGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
	FString PlayFabId; // 0x28
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
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

struct FClientConsumeMicrosoftStoreEntitlementsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FAdminGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FLiveLinkCameraFrameData : FLiveLinkTransformFrameData {
	float FieldOfView; // 0xd0
	float AspectRatio; // 0xd4
	float FocalLength; // 0xd8
	float Aperture; // 0xdc
	float FocusDistance; // 0xe0
	ELiveLinkCameraProjectionMode ProjectionMode; // 0xe4
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FLiveLinkTimeCode_Base_DEPRECATED {
	int32_t Seconds; // 0x0
	int32_t Frames; // 0x4
	FLiveLinkFrameRate FrameRate; // 0x8
};

struct FEOSSessionModificationAddAttributeOptions {
	FEOSSessionsAttributeData Data; // 0x8
	EEOSESessionAttributeAdvertisementType AdvertisementType; // 0x30
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FEOSPlayerDataStorageReadFileOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString LocalFile; // 0x28
	FString RemoteFile; // 0x38
	int32_t ReadChunkLengthBytes; // 0x48
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FMultiplayerBuildAliasDetailsResponse : FPlayFabResultCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	int32_t PageSize; // 0x38
	FString SkipToken; // 0x40
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FEOSAntiCheatCommonLogGameRoundEndOptions {
	int32_t WinningTeamId; // 0x4
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FAdminIncrementPlayerStatisticVersionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* StatisticVersion; // 0x8
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FAdminGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x20
};

struct FServerGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayFabId; // 0x18
};

struct FEOSConnectCopyProductUserExternalAccountByAccountTypeOptions {
	FEOSProductUserId TargetUserId; // 0x4
	EEOSEExternalAccountType AccountIdType; // 0x25
};

struct FEOSConnectCreateUserOptions {
	FContinuanceToken ContinuanceToken; // 0x0
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

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FAdminUpdateCatalogItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
	FString CatalogVersion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	bool SetAsDefaultCatalog; // 0x30
};

struct FClientSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString EncryptedRequest; // 0x8
	FString PlayerSecret; // 0x18
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FEOSPlayerDataStorageDeleteCacheCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FAdminGetTaskInstancesRequest : FPlayFabRequestCommon {
	FString StartedAtRangeFrom; // 0x8
	FString StartedAtRangeTo; // 0x18
	ETaskInstanceStatus StatusFilter; // 0x28
	UPlayFabJsonObject* TaskIdentifier; // 0x30
};

struct FEOSConnectLinkAccountCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FEOSUIHideFriendsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FEOSAchievementsPlayerStatInfo {
	FString Name; // 0x8
	int32_t CurrentValue; // 0x18
	int32_t ThresholdValue; // 0x1c
};

struct FAdminUpdatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
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

struct FDataFinalizeFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FEOSBeforeSendCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString RoomName; // 0x30
	FEOSRTCAudioAudioBuffer Buffer; // 0x40
};

struct FMultiplayerListAssetSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AssetSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FServerLinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString PlayFabId; // 0x18
	FString ServerCustomId; // 0x28
};

struct FClientGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString StatisticName; // 0x10
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FEOSUserInfoQueryUserInfoCallbackInfo {
	EOSResult ResultCode; // 0x4
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetUserId; // 0x31
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSLeaderboardsCopyLeaderboardRecordByIndexOptions {
	int32_t LeaderboardRecordIndex; // 0x4
};

struct FAdminCreatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString StatisticName; // 0x18
	EStatisticResetIntervalOption VersionChangeInterval; // 0x28
};

struct FEOSConnectLinkAccountOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FContinuanceToken ContinuanceToken; // 0x28
};

struct FServerGetServerCustomIDsFromPlayFabIDsRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
};

struct FEOSLobbyDestroyLobbyCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FItemDrop {
	float ItemDropChance_8_D6248C6541DAA7F3CE6B3785A5A0ED7D; // 0x0
	float CommonChance_18_7CF7F79748CEFAF8A3D8D39011423D7D; // 0x4
	float RareChance_22_CBAC848F490149EF430A04BE43B4190F; // 0x8
	float EpicChance_23_A4F4549C45E760B47A4A43A6B8F5B5A8; // 0xc
	float LegendaryChance_24_4A356FF048244B28BF25EC8893CA2CDD; // 0x10
	UStaticMesh* ItemMesh_27_AAE054B0441866D0C22B739F0DCE472D; // 0x18
	int32_t Amount_37_0D2ACC734EE0F398A4262CA4BBE0F8A8; // 0x20
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FClientSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
};

struct FServerWriteServerCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EventName; // 0x28
	FString PlayFabId; // 0x38
	FString Timestamp; // 0x48
};

struct FEOSTitleStorageCopyFileMetadataAtIndexOptions {
	FEOSProductUserId LocalUserId; // 0x4
	int32_t Index; // 0x28
};

struct FEOSPlayerDataStorageQueryFileOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString Filename; // 0x28
};

struct FClientGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	UPlayFabJsonObject* ProfileConstraints; // 0x18
	FString XboxToken; // 0x20
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

struct FGroupsListMembershipOpportunitiesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
	TArray<UPlayFabJsonObject*> Invitations; // 0x18
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FServerGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FEOSAddNotifyAudioOutputStateOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FServerSavePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString AndroidPayload; // 0x8
	FString ID; // 0x18
	FString IOSPayload; // 0x28
	UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38
	FString Name; // 0x40
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

struct FEOSLobbyPromoteMemberCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FAdminGetPlayerIdFromAuthTokenRequest : FPlayFabRequestCommon {
	FString Token; // 0x8
	EAuthTokenType TokenType; // 0x18
};

struct FServerUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FEOSLobbyRejectInviteOptions {
	FString InviteId; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
};

struct FMultiplayerGetMatchResult : FPlayFabResultCommon {
	FString MatchId; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RegionPreferences; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FEOSStatsCopyStatByNameOptions {
	FEOSProductUserId TargetUserId; // 0x4
	FString Name; // 0x28
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FClientCurrentGamesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString GameMode; // 0x18
	ERegion Region; // 0x28
	FString StatisticName; // 0x30
	UPlayFabJsonObject* TagFilter; // 0x40
};

struct FServerGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t MaxBatchSize; // 0x20
	int32_t SecondsToLive; // 0x24
	FString SegmentId; // 0x28
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FClientConsumePSNEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemsGranted; // 0x8
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FServerGetPlayerStatisticsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FEOSConnectCreateDeviceIdCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FEOSSessionDetailsInfo {
	FString SessionId; // 0x8
	FString HostAddress; // 0x18
	int32_t NumOpenPublicConnections; // 0x28
	FEOSSessionDetailsSettings Settings; // 0x30
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FClientGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
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

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FClientConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemInstanceId; // 0x28
};

struct FCloudScriptListFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FEOSAntiCheatCommonLogPlayerDespawnOptions {
	FEOSAntiCheatCommonClientHandle DespawnedPlayerHandle; // 0x8
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FEOSAuthLoginStatusChangedCallbackInfo {
	FEOSEpicAccountId LocalUserId; // 0x8
	EOSELoginStatus PrevStatus; // 0x29
	EOSELoginStatus CurrentStatus; // 0x2a
	FEOSNotificationId NotificationID; // 0x30
};

struct FEOSEcomQueryOwnershipTokenOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	TArray<FString> CatalogItemIds; // 0x28
	FString CatalogNamespace; // 0x40
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
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

struct FEOSLobbyLocalRTCOptions {
	int32_t Flags; // 0x0
	bool bUseManualAudioInput; // 0x4
	bool bUseManualAudioOutput; // 0x5
	bool bLocalAudioDeviceInputStartsMuted; // 0x6
};

struct FEOSModsUninstallModOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSModIdentifier Mod; // 0x28
};

struct FEOSFriendsQueryFriendsOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FEOSAchievementsOnUnlockAchievementsCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId UserId; // 0x10
	int32_t AchievementsCount; // 0x34
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FEOSAuthLinkAccountOptions {
	EEOSELinkAccountFlags LinkAccountFlags; // 0x4
	FContinuanceToken ContinuanceToken; // 0x8
	FEOSEpicAccountId LocalUserId; // 0x10
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

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FClientLinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FClientConsumePS5EntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FMultiplayerListBuildAliasesForTitleResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildAliases; // 0x8
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FProfilesGetEntityProfilesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Profiles; // 0x8
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FEOSEcomGetOfferCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
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

struct FTextSizingParameters {
	float DrawX; // 0x0
	float DrawY; // 0x4
	float DrawXL; // 0x8
	float DrawYL; // 0xc
	FVector2D Scaling; // 0x10
	UFont* DrawFont; // 0x18
	FVector2D SpacingAdjust; // 0x20
};

struct FExperimentationGetExclusionGroupsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FServerUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FEOSRTCDisconnectedCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString RoomName; // 0x38
};

struct FEOSAuthQueryIdTokenOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FEOSEpicAccountId TargetAccountId; // 0x21
};

struct FEOSSessionsUnregisterPlayersOptions {
	FString SessionName; // 0x8
	TArray<FEOSProductUserId> PlayersToUnregister; // 0x18
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FEOSLobbyKickMemberOptions {
	FString LobbyId; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FEOSProductUserId TargetUserId; // 0x31
};

struct FEOSLobbyMemberStatusReceivedCallbackInfo {
	FString LobbyId; // 0x8
	FEOSProductUserId TargetUserId; // 0x18
	EEOSELobbyMemberStatus CurrentStatus; // 0x39
};

struct FAdminGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
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

struct FClientWriteClientPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentId; // 0x8
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
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

struct FClientGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FClientConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FWebRequestParticipantData {
	FString ProductUserId; // 0x0
	FString ClientIp; // 0x10
	bool bHardMuted; // 0x20
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FEOSEcomRedeemEntitlementsOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	TArray<FEOSEcomEntitlementId> EntitlementIds; // 0x28
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FMultiplayerUpdateBuildNameRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
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

struct FClientStartGameRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString CustomCommandLineData; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString GameMode; // 0x40
	ERegion Region; // 0x50
	FString StatisticName; // 0x58
};

struct FEOSTitleStorageReadFileOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString Filename; // 0x28
	FString SaveFileName; // 0x38
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FEOSAchievementsOnQueryDefinitionsCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FClientRegisterWithWindowsHelloRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceName; // 0x10
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
	FString PublicKey; // 0x48
	FString Username; // 0x58
};

struct FEOSP2PSetRelayControlOptions {
	EEOSERelayControl RelayControl; // 0x4
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FEOSUserInfoQueryUserInfoOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FDataDeleteFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FEOSLobbyUpdateLobbyOptions {
	FEOSHLobbyModification LobbyModificationHandle; // 0x8
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FEOSSessionsStartSessionOptions {
	FString SessionName; // 0x8
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
};

struct FClientGetPurchaseResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString PaymentProvider; // 0x18
	FString PurchaseDate; // 0x28
	FString TransactionId; // 0x38
	FString TransactionStatus; // 0x48
};

struct FEOSSessionsUpdateSessionOptions {
	FEOSHSessionModification SessionModificationHandle; // 0x8
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FAdminUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FServerNotifyMatchmakerPlayerLeftResult : FPlayFabResultCommon {
	EPlayerConnectionState PlayerState; // 0x8
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FClientAttributeInstallRequest : FPlayFabRequestCommon {
	FString Adid; // 0x8
	FString Idfa; // 0x18
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

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
};

struct FAdminGetPublisherDataRequest : FPlayFabRequestCommon {
	FString keys; // 0x8
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FServerUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FEOSLobbyAddNotifyRTCRoomConnectionChangedOptions {
	FString LobbyId; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FClientGetPlayerStatisticsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FEOSAuthCopyIdTokenOptions {
	FEOSEpicAccountId AccountId; // 0x0
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FEOSAddNotifyAudioInputStateOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
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

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FEOSEcomCopyTransactionByIdOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString TransactionId; // 0x28
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FAbilityStruct {
	UPaperSprite* Image_13_2EB7A3F5424B554350E81CAFF9D111BF; // 0x0
	float Cooldown_5_B5AB22B7415F1ABD1B0462B9BD6CD584; // 0x8
	FString Hotkey_9_638EA1DB4EEF0B81A2BA4FA32A996C4C; // 0x10
	bool Charge?_12_92D29B234BB793C1210CE281E4B8C098; // 0x20
	FText Description_22_625887964F9910A4E7F99DA754FA2031; // 0x28
	FText DisplayName_23_15BE98144FD0DE75B24C53A589B7D0FC; // 0x40
};

struct FEOSTitleStorageDeleteCacheOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FEOSKickOptions {
	FString RoomName; // 0x0
	FEOSProductUserId TargetUserId; // 0x10
};

struct FEOSLobbySearchRemoveParameterOptions {
	FString Key; // 0x8
	EEOSEComparisonOp ComparisonOp; // 0x18
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FAdminResolvePurchaseDisputeResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
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

struct FS_BannerTags {
	int32_t TagID_2_F50FFD53418CF67157337698387CB0AC; // 0x0
	FText Tag_5_90BF12F6406F63C08E04159E6369E153; // 0x8
	Rarity Rarity_9_DE3CDFCE4DA14CCC0B9F08BA96B2D522; // 0x20
};

struct FPlayerInfo {
	UTexture2D* avatar_2_B5241C014C7A962820AF96AA00CCE50D; // 0x0
	FString NickName_5_3A4B74AE48473E3120A94AB5EC21DCC0; // 0x8
};

struct FExperimentationCreateExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	int32_t Duration; // 0x20
	FString EndDate; // 0x28
	FString ExclusionGroupId; // 0x38
	int32_t ExclusionGroupTrafficAllocation; // 0x48
	EExperimentType ExperimentType; // 0x4c
	FString Name; // 0x50
	FString SegmentId; // 0x60
	FString StartDate; // 0x70
	FString TitlePlayerAccountTestIds; // 0x80
	TArray<UPlayFabJsonObject*> Variants; // 0x90
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

struct FAdminGetMatchmakerGameInfoRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FEOSStatsCopyStatByIndexOptions {
	FEOSProductUserId TargetUserId; // 0x4
	int32_t StatIndex; // 0x28
};

struct FClientUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FEOSLobbyModificationRemoveAttributeOptions {
	FString Key; // 0x8
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FAdminUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FClientGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	bool Result; // 0x28
};

struct FAdminListOpenIdConnectionResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Connections; // 0x8
};

struct FATPCFollowTerrainSettings {
	UCurveVector* TerrainAngleSocketOffsetCurve; // 0x0
	float SocketOffsetInterpSpeed; // 0x8
	UCurveFloat* TerrainAngleRotationOffsetCurve; // 0x10
	float AngleRotationInterpSpeed; // 0x18
	float AngleDelayChange; // 0x1c
	bool bEnableDebug; // 0x20
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FClientCancelTradeRequest : FPlayFabRequestCommon {
	FString TradeId; // 0x8
};

struct FMultiplayerCreateRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ExpirationTime; // 0x20
	FString Region; // 0x30
	FString Username; // 0x40
	FString VmId; // 0x50
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
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

struct FServerGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
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

struct FMultiplayerGetQueueStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FEOSSessionsSessionInviteAcceptedCallbackInfo {
	FString SessionId; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
	FEOSProductUserId TargetUserId; // 0x39
	FString InviteId; // 0x60
};

struct FST_SoundCommandSurv {
	FText Text_2_0E76C5BD4B9099D4FB6FB6B5191BC113; // 0x0
	TMap<SurvChars, UFMODEvent*> SoundCommand_8_0798A8844C39ACA87C45B3852DCCEE77; // 0x18
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FAdminExportMasterPlayerDataRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FPurchaseItemDetails {
	FString Price; // 0x10
	FString Name; // 0x20
	PurchaseType Type; // 0x30
};

struct FServerInfo {
	FString Address; // 0x0
	FString Map; // 0x10
	FString Mode; // 0x20
	FString Status; // 0x30
	FString Port; // 0x40
	FString Region; // 0x50
	FString Seed; // 0x60
	FString Name; // 0x70
	FString ID; // 0x80
	int32_t Players; // 0x90
	int32_t Capacity; // 0x94
	int32_t Build; // 0x98
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

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FCloudScriptPostFunctionResultForScheduledTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
	UPlayFabJsonObject* ScheduledTaskId; // 0x20
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

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FClientUnlinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FServerDeleteSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FEOSSessionDetailsSettings {
	FString BucketId; // 0x8
	int32_t NumPublicConnections; // 0x18
	bool bAllowJoinInProgress; // 0x1c
	EEOSEOnlineSessionPermissionLevel PermissionLevel; // 0x1d
	bool bInvitesAllowed; // 0x1e
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FServerGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FEOSEcomCopyEntitlementByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	int32_t EntitlementIndex; // 0x28
};

struct FMiniLobbyState {
	TMap<FString, AActor*> Table_5_0B0D7B5F45A04CB9FAA135BFB0AFDCB5; // 0x0
	int32_t Killers_8_386493D9479169EB6B7439942BA7A7D3; // 0x50
	int32_t Survivors_10_A3B801474666FBBD254CA7A86B1C0E1C; // 0x54
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FClientGetPlayFabIDsFromKongregateIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	int32_t IssuerId; // 0x24
	FString PlayFabId; // 0x28
	FString RedirectUri; // 0x38
};

struct FDataSetObjectsResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	TArray<UPlayFabJsonObject*> SetResults; // 0x10
};

struct FEOSUserInfoQueryUserInfoByExternalAccountOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FString ExternalAccountId; // 0x28
	EEOSEExternalAccountType AccountType; // 0x38
};

struct FClientAddUsernamePasswordResult : FPlayFabResultCommon {
	FString Username; // 0x8
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FClientGetTradeStatusResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FAdminGetCloudScriptRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FAdminBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientUnlinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
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

struct FServerSendPushNotificationFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PushNotificationTemplateId; // 0x10
	FString Recipient; // 0x20
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

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FAdminSetupPushNotificationResult : FPlayFabResultCommon {
	FString ARN; // 0x8
};

struct FClientGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FEOSSessionSearchFindCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FMatchmakerPlayerJoinedRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Quotas; // 0x8
};

struct FClientListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FEOSConnectLoginCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FContinuanceToken ContinuanceToken; // 0x38
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

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FGroupsListGroupBlocksResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BlockedEntities; // 0x8
};

struct FEOSSessionsSendInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FEOSLobbyCopyLobbyDetailsHandleByInviteIdOptions {
	FString InviteId; // 0x8
};

struct FEOSConnectUnlinkAccountOptions {
	FEOSProductUserId LocalUserId; // 0x4
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

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FAccessTokenCallbackData {
	FString AccessToken; // 0x0
	FString TokenType; // 0x10
	FString ExpiresAt; // 0x20
	int32_t ExpiresIn; // 0x30
	FString Nonce; // 0x38
	TArray<FString> Features; // 0x48
	FString OrganizationId; // 0x58
	FString ProductId; // 0x68
	FString SandboxId; // 0x78
	FString DeploymentId; // 0x88
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FAdminBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FAdminUpdateCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeveloperPlayFabId; // 0x10
	TArray<UPlayFabJsonObject*> Files; // 0x20
	bool Publish; // 0x30
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FClientWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
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

struct FEOSSessionSearchFindOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FClientGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
};

struct FATPCRotationOffsetSettings {
	float StartOffsetDelay; // 0x0
	float ChangeRotationSpeed; // 0x4
	EATPCInterpolationType InterpolationType; // 0x8
	float PitchOffset; // 0xc
	bool bActivateOnlyIfMovement; // 0x10
	float MinMovementSpeedForActivate; // 0x14
};

struct FEOSAchievementsStatThresholds {
	FString Name; // 0x8
	int32_t Threshold; // 0x18
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FClientValidateAmazonReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FEOSPresenceModificationDataRecordId {
	FString Key; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FEOSLeaderboardsUserScoresQueryStatInfo {
	FString StatName; // 0x8
	EEOSELeaderboardAggregation Aggregation; // 0x18
};

struct FServerSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FEOSCustomInvitesSetCustomInviteOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString Payload; // 0x28
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FGroupsUnblockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FTransCfgInput_ACTION {
	TArray<FDefaultCfgInput_ACTION> CFGInputsActionKeys_12_673FE4CE45EA632EF015A0A2F4069603; // 0x0
};

struct FItemList {
	AItemsBP_C* Item_2_00B91C9A42564D0960BC9BB0723E048D; // 0x0
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FServerUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString KeyItemInstanceId; // 0x40
	FString PlayFabId; // 0x50
};

struct FEOSLobbyLeaveLobbyCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FEOSFriendsRejectInviteOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FEOSEcomGetItemReleaseCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString ItemId; // 0x28
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
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

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FServerRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FExperimentationGetLatestScorecardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FEOSLobbyDestroyLobbyOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString LobbyId; // 0x28
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FEOSLobbyInviteReceivedCallbackInfo {
	FString InviteId; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
	FEOSProductUserId TargetUserId; // 0x39
};

struct FServerRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FEOSProgressionSnapshotDeleteSnapshotCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x1
};

struct FEOSLobbyModificationRemoveMemberAttributeOptions {
	FString Key; // 0x8
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

struct FLocalizationGetLanguageListResponse : FPlayFabResultCommon {
	FString LanguageList; // 0x8
};

struct FAdminAddNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Timestamp; // 0x20
	FString Title; // 0x30
};

struct FServerRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FEOSPlayerDataStorageReadFileCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString Filename; // 0x38
	FEOSHPlayerDataStorageFileTransferRequest Handle; // 0x48
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
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

struct FEOSAntiCheatClientProtectMessageOptions {
	int32_t DataLengthBytes; // 0x4
	TArray<char> Data; // 0x8
	int32_t OutBufferSizeBytes; // 0x18
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FAnalyticsEventAttr {
	FString Name; // 0x0
	FString Value; // 0x10
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FGroupsAcceptGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FLiveLinkWorldTime {
	double Time; // 0x0
	double Offset; // 0x8
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FServerGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FEOSAchievementsDefinitionV2 {
	FString AchievementId; // 0x8
	FString UnlockedDisplayName; // 0x18
	FString UnlockedDescription; // 0x28
	FString LockedDisplayName; // 0x38
	FString LockedDescription; // 0x48
	FString FlavorText; // 0x58
	FString UnlockedIconURL; // 0x68
	FString LockedIconURL; // 0x78
	bool bIsHidden; // 0x88
	int32_t StatThresholdsCount; // 0x8c
	TArray<FEOSAchievementsStatThresholds> StatThresholds; // 0x90
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FVaRestURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	int32_t Valid; // 0x24
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FEOSQueryJoinRoomTokenCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString RoomName; // 0x10
	FString ClientBaseUrl; // 0x20
	int32_t QueryId; // 0x30
	int32_t TokenCount; // 0x34
};

struct FClientValidateWindowsReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FEOSSessionsJoinSessionCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FS_RegionData {
	FText DisplayName_2_ADE4DF96460D23A93158D4948A5C72FB; // 0x0
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FClientUnlinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FLuminComponentElement {
	FString Name; // 0x0
	FString VisibleName; // 0x10
	FString ExecutableName; // 0x20
	ELuminComponentType ComponentType; // 0x30
	TArray<FLuminComponentSubElement> ExtraComponentSubElements; // 0x38
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FAdminGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
};

struct FLocalizedAppName {
	FString LanguageCode; // 0x0
	FString AppName; // 0x10
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
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

struct FS_Rarity {
	FText DisplayName_4_B23047774D63A8D776B427BA5A38EAE7; // 0x0
	FLinearColor Color_11_C43A3561437B325AF3C956B1FA88BAC7; // 0x18
};

struct FServerRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FClientOpenTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
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

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FProfilesSetProfileLanguageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	int32_t ExpectedVersion; // 0x18
	FString Language; // 0x20
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
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

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
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

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FClientGetLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FAdminUpdateSegmentResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
	FString SegmentId; // 0x18
};

struct FEOSAntiCheatCommonOnClientAuthStatusChangedCallbackInfo {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	EEOSEAntiCheatCommonClientAuthStatus ClientAuthStatus; // 0x10
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FClientLoginWithNintendoServiceAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString IdentityToken; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FEOSConnectAuthExpirationCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
};

struct FAdminGetCloudScriptVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Versions; // 0x8
};

struct FEOSBeforeRenderCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString RoomName; // 0x30
	FEOSRTCAudioAudioBuffer Buffer; // 0x40
	FEOSProductUserId ParticipantId; // 0x50
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FAuthenticationGetEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityToken; // 0x10
	FString TokenExpiration; // 0x20
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FAdminRefundPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	FString PlayFabId; // 0x18
	FString Reason; // 0x28
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

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
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

struct FAdminGetTaskInstancesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Summaries; // 0x8
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

struct FEOSPlayerDataStorageWriteFileDataCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString Filename; // 0x30
	int32_t DataBufferLengthBytes; // 0x40
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
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

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FATPCFadeSettings {
	float FadeInTime; // 0x0
	float FadeOutTime; // 0x4
	float MaterialFadeMinValue; // 0x8
	float MaterialFadeMaxValue; // 0xc
	TArray<FName> MaterialFadeParamNames; // 0x10
	ECollisionChannel FadeChannel; // 0x20
	bool bFadeSelfIfCollision; // 0x21
	bool bUseCustomFadeOutTimeForSelfFade; // 0x22
	float SelfFadeCustomFadeOutTime; // 0x24
	float SelfFadeCheckRadius; // 0x28
	bool bSelfFadeAttachedActors; // 0x2c
	bool bDrawDebugFadeShape; // 0x2d
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FGroupsRemoveMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RoleId; // 0x28
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FEOSAntiCheatServerUnprotectMessageOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	int32_t DataLengthBytes; // 0x10
	TArray<char> Data; // 0x18
	int32_t OutBufferSizeBytes; // 0x28
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

struct FEOSFriendsGetStatusOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FEOSLeaderboardsLeaderboardUserScore {
	FEOSProductUserId UserId; // 0x4
	int32_t Score; // 0x28
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
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

struct FAuthenticationGetEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FMatchmakerUserInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MinCatalogVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FServerRedeemMatchmakerTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString Ticket; // 0x20
};

struct FEOSSessionDetailsCopySessionAttributeByKeyOptions {
	FString AttrKey; // 0x8
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
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

struct FEOSEcomItemOwnership {
	FString ID; // 0x8
	EEOSEOwnershipStatus OwnershipStatus; // 0x18
};

struct FMultiplayerDeleteBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FAdminExportMasterPlayerDataResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FTestDialogue {
	SurvChars Char_2_2A67F4ED4319929CF25C0D94F82EF7A0; // 0x0
	SurvChars Char2_4_23A251744EA1829C2B79E08E167D7C7F; // 0x1
	UFMODEvent* FMODEvent_7_7853351044DF9F0112126C9F432CD271; // 0x8
};

struct FServerSetGameServerInstanceTagsRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	UPlayFabJsonObject* Tags; // 0x18
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
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

struct FEOSP2PSetPortRangeOptions {
	int32_t Port; // 0x4
	int32_t MaxAdditionalPortsToTry; // 0x8
};

struct FServerModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
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

struct FServerAuthenticateSessionTicketResult : FPlayFabResultCommon {
	bool IsSessionTicketExpired; // 0x8
	UPlayFabJsonObject* UserInfo; // 0x10
};

struct FEOSConnectDeleteDeviceIdCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FEOSSessionsJoinSessionAcceptedCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FEOSUIEventId UiEventId; // 0x30
};

struct FEOSPlayerDataStorageDeleteFileCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FEOSAntiCheatCommonLogPlayerTickOptions {
	FEOSAntiCheatCommonClientHandle PlayerHandle; // 0x8
	FEOSAntiCheatCommonVec3f PlayerPosition; // 0x10
	FEOSAntiCheatCommonQuat PlayerViewRotation; // 0x1c
	bool bIsPlayerViewZoomed; // 0x2c
	float PlayerHealth; // 0x30
	EEOSEAntiCheatCommonPlayerMovementState PlayerMovementState; // 0x34
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
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

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FInsightsInsightsSetStorageRetentionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t RetentionDays; // 0x10
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FClientGetPublisherDataRequest : FPlayFabRequestCommon {
	FString keys; // 0x8
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
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

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FServerGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FEOSAuthIdToken {
	FEOSEpicAccountId AccountId; // 0x0
	FString JsonWebToken; // 0x28
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FServerGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FLiveLinkFrameData {
	TArray<FTransform> Transforms; // 0x0
	TArray<FLiveLinkCurveElement> CurveElements; // 0x10
	FLiveLinkWorldTime WorldTime; // 0x20
	FLiveLinkMetaData MetaData; // 0x30
};

struct FEOSSessionModificationSetMaxPlayersOptions {
	int32_t MaxPlayers; // 0x4
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

struct FLuminComponentSubElement {
	ELuminComponentSubElementType ElementType; // 0x0
	FString Value; // 0x8
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FMagicLeapLightEstimationAmbientGlobalState {
	TArray<float> AmbientIntensityNits; // 0x0
	FTimespan Timestamp; // 0x10
};

struct FProfilesGetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSTitleStorageReadFileCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString Filename; // 0x38
};

struct FEOSPlayerDataStorageCopyFileMetadataByFilenameOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString Filename; // 0x28
};

struct FEOSPlayerDataStorageQueryFileListOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FServerGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FGroupsCreateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
	FString RoleName; // 0x28
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FClientGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FServerUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	FString PlayFabId; // 0x28
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString MasterPlayerAccountIds; // 0x10
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
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

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FEOSAntiCheatServerUnregisterClientOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FAdminCreatePlayerSharedSecretResult : FPlayFabResultCommon {
	FString SecretKey; // 0x8
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

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FEOSAntiCheatCommonRegisterEventParamDef {
	FString ParamName; // 0x0
	EEOSEAntiCheatCommonEventParamType ParamType; // 0x10
};

struct FClientLinkNintendoServiceAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString IdentityToken; // 0x18
};

struct FEOSFriendsAcceptInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetUserId; // 0x31
};

struct FEOSP2PSendPacketOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FEOSProductUserId RemoteUserId; // 0x25
	FEOSP2PSocketId SocketId; // 0x48
	int32_t Channel; // 0x60
	TArray<char> Data; // 0x68
	bool bAllowDelayedDelivery; // 0x78
	EEOSEPacketReliability Reliability; // 0x79
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

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
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

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
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

struct FAdminRemoveServerBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FAdminCreateCloudScriptTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FClientGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FServerGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FAdminLookupUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FServerGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FAdminGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FAdminGetTitleDataRequest : FPlayFabRequestCommon {
	FString keys; // 0x8
	FString OverrideLabel; // 0x18
};

struct FEOSLobbyCopyLobbyDetailsHandleOptions {
	FString LobbyId; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FClientRegisterPlayFabUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* EntityToken; // 0x8
	FString PlayFabId; // 0x10
	FString SessionTicket; // 0x20
	UPlayFabJsonObject* SettingsForUser; // 0x30
	FString Username; // 0x38
};

struct FST_SoundCommandKiller {
	FText Text_2_0E76C5BD4B9099D4FB6FB6B5191BC113; // 0x0
	TMap<KillerType, UFMODEvent*> SoundCommand_9_0798A8844C39ACA87C45B3852DCCEE77; // 0x18
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

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FClientRewardAdActivityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlacementId; // 0x10
	FString RewardId; // 0x20
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FMultiplayerCreateRemoteUserResponse : FPlayFabResultCommon {
	FString ExpirationTime; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FCloudScriptExecuteFunctionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Error; // 0x8
	int32_t ExecutionTimeMilliseconds; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionResult; // 0x28
	bool FunctionResultTooLarge; // 0x30
};

struct FEOSModsUninstallModCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x1
	FEOSModIdentifier Mod; // 0x30
};

struct FMagicLeapImageTargetSettings {
	UTexture2D* ImageTexture; // 0x0
	FString Name; // 0x8
	float LongerDimension; // 0x18
	bool bIsStationary; // 0x1c
	bool bIsEnabled; // 0x1d
};

struct FClientAcceptTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FCloudScriptRegisterHttpFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
	FString FunctionUrl; // 0x20
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
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

struct FS_ItemSpawnChance {
	AItemsBP_C* Class_8_26CE72BB4237BBA97670D78D9A6E034B; // 0x0
	float Chance_7_59C177FC4648F8D8A556F6A9737B7FDC; // 0x8
	ItemType Type_11_7B563BC0423458CEED7D48895E28D439; // 0xc
};

struct FAdminDeleteMasterPlayerAccountResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
	FString TitleIds; // 0x18
};

struct FEOSAntiCheatCommonLogPlayerTakeDamageOptions {
	FEOSAntiCheatCommonClientHandle VictimPlayerHandle; // 0x8
	FEOSAntiCheatCommonVec3f VictimPlayerPosition; // 0x10
	FEOSAntiCheatCommonQuat VictimPlayerViewRotation; // 0x1c
	FEOSAntiCheatCommonClientHandle AttackerPlayerHandle; // 0x30
	FEOSAntiCheatCommonVec3f AttackerPlayerPosition; // 0x38
	FEOSAntiCheatCommonQuat AttackerPlayerViewRotation; // 0x44
	bool bIsHitscanAttack; // 0x54
	bool bHasLineOfSight; // 0x55
	bool bIsCriticalHit; // 0x56
	float DamageTaken; // 0x58
	float HealthRemaining; // 0x5c
	EEOSEAntiCheatCommonPlayerTakeDamageSource DamageSource; // 0x60
	EEOSEAntiCheatCommonPlayerTakeDamageType DamageType; // 0x61
	EEOSEAntiCheatCommonPlayerTakeDamageResult DamageResult; // 0x62
	FEOSAntiCheatCommonLogPlayerUseWeaponData PlayerUseWeaponData; // 0x68
	int32_t TimeSincePlayerUseWeaponMs; // 0xa8
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

struct FClientValidateIOSReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptData; // 0x38
};

struct FWebResponse {
	int32_t Code; // 0x0
	FString Message; // 0x8
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
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

struct FEOSReportsSendPlayerBehaviorReportCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FMagicLeapPlaneBoundaries {
	FGuid ID; // 0x0
	TArray<FMagicLeapPlaneBoundary> Boundaries; // 0x10
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FAdminUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	FString PlayFabId; // 0x28
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
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

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FServerWriteServerPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString PlayFabId; // 0x28
	FString Timestamp; // 0x38
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FEOSLobbyKickMemberCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FMultiplayerGetRemoteLoginEndpointResponse : FPlayFabResultCommon {
	FString IPV4Address; // 0x8
	int32_t Port; // 0x18
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

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FEOSEcomCatalogItem {
	FString CatalogNamespace; // 0x8
	FString ID; // 0x18
	FEOSEcomEntitlementName EntitlementName; // 0x28
	FString TitleText; // 0x38
	FString DescriptionText; // 0x48
	FString LongDescriptionText; // 0x58
	FString TechnicalDetailsText; // 0x68
	FString DeveloperText; // 0x78
	EEOSEEcomItemType ItemType; // 0x88
	FString EntitlementEndTimestamp; // 0x90
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

struct FMultiplayerListContainerImageTagsResponse : FPlayFabResultCommon {
	FString Tags; // 0x8
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FClientLinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString NintendoSwitchDeviceId; // 0x18
};

struct FClientGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
};

struct FDataSetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	int32_t ExpectedProfileVersion; // 0x18
	TArray<UPlayFabJsonObject*> Objects; // 0x20
};

struct FGroupsUpdateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
	FString RoleName; // 0x30
};

struct FEOSAntiCheatCommonLogPlayerUseWeaponOptions {
	FEOSAntiCheatCommonLogPlayerUseWeaponData UseWeaponData; // 0x8
};

struct FEOSMetricsEndPlayerSessionOptions {
	EEOSEMetricsAccountIdType AccountIdType; // 0x4
	FEOSEpicAccountId Epic; // 0x5
	FString External; // 0x28
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

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FEOSPresenceModificationSetJoinInfoOptions {
	FString JoinInfo; // 0x8
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FClientUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
};

struct FATPCLockOnTargetSettings {
	bool bResetTargetOnChangeCameraMode; // 0x0
	bool RotateCameraByYaw; // 0x1
	bool RotateCameraByPitch; // 0x2
	float CameraRotationSpeed; // 0x4
	float AdditionalSmoothRotationSpeed; // 0x8
	bool bUseRotationLimits; // 0xc
	bool bUseMaxLockDistance; // 0xd
	bool bResetTargetOnReachMaxDistance; // 0xe
	float MaxLockDistance; // 0x10
	bool bUseCheckTargetVisibility; // 0x14
	bool bResetLockOnLostVisibleTarget; // 0x15
	ECollisionChannel CheckVisibilityTraceChannel; // 0x16
	bool bHardLockOnTarget; // 0x17
	bool bPauseLockAfterPlayerInput; // 0x18
	float PauseLockAfterPlayerInputTime; // 0x1c
	bool bUseDesiredConeRotation; // 0x20
	float DeisredConeRotationYaw; // 0x24
	bool bEnableDebug; // 0x28
	bool bShowTarget; // 0x29
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> keys; // 0x78
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FEOSConnectGetExternalAccountMappingsOptions {
	FEOSProductUserId LocalUserId; // 0x0
	EEOSEExternalAccountType AccountIdType; // 0x21
	FString TargetExternalUserId; // 0x28
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FEOSTitleStorageGetFileMetadataCountOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FS_SkinName {
	int32_t ID_4_78EF94D14819DE99784E3797250E5DA9; // 0x0
	FText Name_7_621D75C24EA91315A6C9768BBDBC8C2B; // 0x8
	bool Paid?_9_A311250A4D9E91244C6B2AB36803421D; // 0x20
};

struct FDefaultCfgInput_ACTION {
	FText Name_23_2F6E3F4A4BF0B1B035759C96CD135A0F; // 0x0
	TArray<FInputActionKeyMapping> ActionKey_16_3441EB1F4B0E2572A99F90B57333B98E; // 0x18
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

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FMultiplayerGetAssetUploadUrlResponse : FPlayFabResultCommon {
	FString AssetUploadUrl; // 0x8
	FString Filename; // 0x18
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FServerModifyItemUsesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ItemInstanceId; // 0x10
	FString PlayFabId; // 0x20
	int32_t UsesToAdd; // 0x30
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

struct FS_GameSettings {
	FString Map_3_F277930242997A85752154A37AA7698C; // 0x0
	int32_t Killers_6_601309E14ED03357C1456EBD88F945FF; // 0x10
	int32_t Survivors_8_1E62355E48D221359BF337A3DF47CCE3; // 0x14
	E_Mode Mode_11_D77036D84E89904616A1CD9B57C382ED; // 0x18
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FEOSSessionsDestroySessionCallbackInfo {
	EOSResult ResultCode; // 0x0
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

struct FServerUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
	FString PlayFabId; // 0x18
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FEOSAuthVerifyIdTokenOptions {
	FEOSAuthIdToken IdToken; // 0x0
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

struct FEOSPresenceInfo {
	EEOSPresenceEStatus Status; // 0x4
	FEOSEpicAccountId UserId; // 0x5
	FString ProductId; // 0x28
	FString ProductVersion; // 0x38
	FString Platform; // 0x48
	FString RichText; // 0x58
	TArray<FEOSPresenceDataRecord> Records; // 0x70
	FString ProductName; // 0x80
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FClientLinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString SteamTicket; // 0x18
};

struct FClientGetPlayFabIDsFromTwitchIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
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

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FAdminUpdatePolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
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

struct FEOSStatsGetStatCountOptions {
	FEOSProductUserId TargetUserId; // 0x4
};

struct FClientUnlinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PublicKeyHint; // 0x10
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

struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString SessionId; // 0x10
};

struct FServerAuthenticateSessionTicketRequest : FPlayFabRequestCommon {
	FString SessionTicket; // 0x8
};

struct FEOSSetAudioInputSettingsOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString DeviceID; // 0x28
	float Volume; // 0x38
	bool bPlatformAEC; // 0x3c
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FServerGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
};

struct FEOSAchievementsCopyPlayerAchievementByAchievementIdOptions {
	FEOSProductUserId TargetUserId; // 0x4
	FString AchievementId; // 0x28
	FEOSProductUserId LocalUserId; // 0x38
};

struct FS_ServerSettings {
	E_Visibility Visibility_2_987444DF464CA0E04E8E37B40295B5DB; // 0x0
	FString PrivateKey_6_792BD49844BA2F5E07B4E3B64AEDE8CC; // 0x8
	FString Region_9_DB60FB464B433D6361AF00B9603FAC8F; // 0x18
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FEOSLobbyRejectInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString InviteId; // 0x10
};

struct FEOSAntiCheatClientAddExternalIntegrityCatalogOptions {
	FString PathToBinFile; // 0x8
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

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FServerRedeemMatchmakerTicketResult : FPlayFabResultCommon {
	FString Error; // 0x8
	bool TicketIsValid; // 0x18
	UPlayFabJsonObject* UserInfo; // 0x20
};

struct FPerPlatformFloat {
	float Default; // 0x0
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

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FMultiplayerListContainerImagesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FAuthAccessTokenCallbackData {
	FString AccessToken; // 0x0
	int32_t ExpiresIn; // 0x10
	FString ExpiresAt; // 0x18
	FString AccountId; // 0x28
	FString ClientId; // 0x38
	FString ApplicationId; // 0x48
	FString TokenId; // 0x58
	FString RefreshToken; // 0x68
	FString RefreshExpires; // 0x78
	FString RefreshExpiresAt; // 0x88
};

struct FInsightsInsightsSetPerformanceRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PerformanceLevel; // 0x10
};

struct FEOSP2PCloseConnectionOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FEOSProductUserId RemoteUserId; // 0x25
	FEOSP2PSocketId SocketId; // 0x48
};

struct FEOSUISetDisplayPreferenceOptions {
	EEOSUIENotificationLocation NotificationLocation; // 0x4
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FClientGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FCardStruct {
	FText Name_7_8AC50A78475D5B3E63C621AFDF48190D; // 0x0
	FText Description_6_F8F1D35F43846ABF40A71BBFA91D08CF; // 0x18
	UW_PlayCardContent_C* WidgetClass_11_05B637B84E513355F02F33853FDDBBCC; // 0x30
	UPaperSprite* SpriteImage_14_792B8CD14A50729C2E1C5FA617E7E700; // 0x38
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

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
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

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FATPCCameraMode {
	bool bEnableLocationSettings; // 0x0
	FATPCLocationSettings LocationSettings; // 0x8
	bool bEnableRotationSettings; // 0x90
	FATPCRotationSettings RotationSettings; // 0x98
	bool bEnableFOVSettings; // 0x140
	FATPCFOVSettings FOVSettings; // 0x148
	bool bEnableFadeSettings; // 0x160
	FATPCFadeSettings FadeSettings; // 0x168
	bool bEnableFollowTerrainSettings; // 0x198
	FATPCFollowTerrainSettings FollowTerrainSettings; // 0x1a0
	bool bEnableCameraShakesSettings; // 0x1c8
	FATPCCameraShakesSettings CameraShakesSettings; // 0x1d0
	FATPCLockOnTargetSettings LockOnTargetSettings; // 0x1e8
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FEOSPresenceModificationSetRawRichTextOptions {
	FString RichText; // 0x8
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

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FAdminSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FClientUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString KeyItemInstanceId; // 0x40
};

struct FServerRegisterGameResponse : FPlayFabResultCommon {
	FString LobbyId; // 0x8
};

struct FAdminGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FServerGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
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

struct FClientGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
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

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
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

struct FLocalizationGetLanguageListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FS_LoadDescp {
	E_Mode GameMode_3_C0AEE2B54C119A9CFC4DDC9F1E33D4F7; // 0x0
	TArray<FText> SurvTips_9_B717DFEB4DA5BE66AA9020A1AE16D30D; // 0x8
	TArray<FText> SurvDescrp_14_18A4AAB940D6E902DA7B0A8FE5D52617; // 0x18
	TArray<FText> KillerTips_12_F3F943B641C6F03ED3631D946E0BC7A7; // 0x28
	TArray<FText> KillerDescrp_16_E35E261140CCBD79424F4587E5C3F58C; // 0x38
	TArray<UPaperSprite*> ImgTips_27_BF8E0ADF42D59C0A0D26EBBB1F81FA99; // 0x48
};

struct FClientGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FSubmitTicketResponse {
	FString ProdName; // 0x0
	FString ProdSlug; // 0x10
	FString Guid; // 0x20
	FString SenderName; // 0x30
	FString SenderEmail; // 0x40
	FString Subject; // 0x50
	FString Message; // 0x60
	FString ErrorCode; // 0x70
	FString SystemOS; // 0x80
	FString SystemAntiMalware; // 0x90
	FString SystemOther; // 0xa0
	FString Timestamp; // 0xb0
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FAdminUpdateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FClientGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FEOSOnFileTransferProgressUpdated {
	FEOSProductUserId LocalUserId; // 0x8
	FString Filename; // 0x30
	int32_t BytesTransferred; // 0x40
	int32_t TotalFileSizeBytes; // 0x44
	FEOSHPlayerDataStorageFileTransferRequest Handle; // 0x48
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

struct FEOSKickCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FS_SpawnItemChanceRange {
	AItemsBP_C* Class_2_6E47266C407D63789780639698CBB697; // 0x0
	float From_5_E6EF86EC44270DD1460A30880FFB12D8; // 0x8
	float To_7_2C6AA9A14468F8DB543EF6B68E6C1AB5; // 0xc
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FExperimentationStartExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FAdminGetServerBuildUploadURLRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FEOSSessionsCopySessionHandleByInviteIdOptions {
	FString InviteId; // 0x8
};

struct FEOSStatsIngestStatOptions {
	FEOSProductUserId LocalUserId; // 0x4
	TArray<FEOSStatsIngestData> Stats; // 0x28
	FEOSProductUserId TargetUserId; // 0x3c
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

struct FEOSUpdateReceivingCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString RoomName; // 0x38
	FEOSProductUserId ParticipantId; // 0x48
	bool bAudioEnabled; // 0x69
};

struct FCustomPoolSizes {
	int32_t Desktop; // 0x0
	int32_t Mobile; // 0x4
	int32_t PS4; // 0x8
	int32_t Switch; // 0xc
	int32_t XboxOne; // 0x10
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
};

struct FEOSSessionsUnregisterPlayersCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FEOSLobbyQueryInvitesOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FClientGetPhotonAuthenticationTokenRequest : FPlayFabRequestCommon {
	FString PhotonApplicationId; // 0x8
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

struct FATPCCameraRotationLagSettings {
	float CameraLagSpeed; // 0x0
	bool bUseCameraLagSubstepping; // 0x4
	float CameraLagMaxTimeStep; // 0x8
};

struct FClientRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FEOSModsInstallModCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x1
	FEOSModIdentifier Mod; // 0x30
};

struct FMultiplayerListMultiplayerServersRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t PageSize; // 0x20
	FString Region; // 0x28
	FString SkipToken; // 0x38
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FEOSUIOnDisplaySettingsUpdatedCallbackInfo {
	bool bIsVisible; // 0x8
	bool bIsExclusiveInput; // 0x9
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

struct FServerCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
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

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FClientLoginWithNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString NintendoSwitchDeviceId; // 0x30
	FString PlayerSecret; // 0x40
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

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FClientPayForPurchaseRequest : FPlayFabRequestCommon {
	FString Currency; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString OrderId; // 0x20
	FString ProviderName; // 0x30
	FString ProviderTransactionId; // 0x40
};

struct FMultiplayerDeleteContainerImageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
};

struct FServerDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FEOSGetAudioOutputDeviceByIndexOptions {
	int32_t DeviceInfoIndex; // 0x0
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FEOSAchievementsQueryDefinitionsOptions {
	FEOSProductUserId LocalUserId; // 0x0
};

struct FEOSUpdateSendingOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
	EEOSERTCAudioStatus AudioStatus; // 0x38
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FMultiplayerGetContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FClientUnlinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString NintendoSwitchDeviceId; // 0x10
};

struct FCharSkinStruct {
	SurvChars Char_2_E730943F47F63BBF47CCCE86F7B3CB74; // 0x0
	int32_t SkinId_5_A0E32C2348AD0FC91CAF6CA548E4A1D1; // 0x4
	USkeletalMesh* Mesh_11_96F539A04E51BEB71724EEA7131FA9C9; // 0x8
	USkeletalMesh* MeshFpp_14_C91253EB400A253777180C93CF664B05; // 0x10
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

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FEOSAntiCheatCommonSetGameSessionIdOptions {
	FString GameSessionId; // 0x8
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

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FAdminGetPlayerSharedSecretsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> SharedSecrets; // 0x8
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FEOSEcomEntitlement {
	FEOSEcomEntitlementName EntitlementName; // 0x8
	FEOSEcomEntitlementId EntitlementId; // 0x18
	FString CatalogItemId; // 0x28
	int32_t ServerIndex; // 0x38
	bool bRedeemed; // 0x3c
	FString EndTimestamp; // 0x40
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FAdminIncrementLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CatalogVersion; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemId; // 0x28
};

struct FEOSAntiCheatServerSetClientNetworkStateOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	bool bIsNetworkActive; // 0x10
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

struct FS_LanguageData {
	FText DisplayName_2_7CBABADB424ED05E586E5798BF9B2453; // 0x0
};

struct FAdminUpdateRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> Tables; // 0x20
};

struct FEOSLeaderboardsQueryLeaderboardDefinitionsOptions {
	FString StartTime; // 0x8
	FString EndTime; // 0x18
	FEOSProductUserId LocalUserId; // 0x28
};

struct FAdminSetPublishedRevisionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t Revision; // 0x10
	int32_t Version; // 0x14
};

struct FExperimentationDeleteExclusionGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExclusionGroupId; // 0x10
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
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

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FS_KeyRefinedData {
	FText RefinedDisplayText_17_5D2C8F6D40A712A68D7E3892B3EC1E09; // 0x0
	UPaperSprite* PrimaryImage_13_D425EFA54CC97E136E93E4A416FF8859; // 0x18
	bool HasPrimaryImage_8_F46230B94B8F6B8AAB55D4982F49D50D; // 0x20
	UPaperSprite* SecondaryImage_14_EE0C18AA43B288844252548305D5BEF1; // 0x28
	bool HasSecondaryImage_9_B08CEE814923069B4F0286A709A7CB3D; // 0x30
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
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

struct FAdminDeleteMasterPlayerAccountRequest : FPlayFabRequestCommon {
	FString MetaData; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerDeleteCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
	bool SaveCharacterInventory; // 0x30
};

struct FClientGetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* CharacterStatistics; // 0x8
};

struct FServerGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
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

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FEOSUserInfoExternalUserInfo {
	EEOSEExternalAccountType AccountType; // 0x4
	FString AccountId; // 0x8
	FString DisplayName; // 0x18
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FClientGetTradeStatusRequest : FPlayFabRequestCommon {
	FString OfferingPlayerId; // 0x8
	FString TradeId; // 0x18
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FAdminUpdatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FMultiplayerUpdateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
};

struct FServerListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FCloudScriptListHttpFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FServerGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FS_Tip {
	FText TipHeader_2_5F930DC340389A327624D5A38503C487; // 0x0
	FText TipText_4_46E126E046CA05DE11DECE9A3F7BDCB4; // 0x18
	int32_t TipButtonType_11_71166C5748DA02F8DD6256B6AC7DD685; // 0x30
	UPaperSprite* TIpButtonImage_13_3D422129435C095E1659389CBEFFF881; // 0x38
	FName TipButtonMappingName_17_9DF48D8F45257264EE656EAA3D9AD58A; // 0x40
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FCloudScriptListQueuedFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FAdminDeleteSegmentsResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
};

struct FMultiplayerRolloverContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSSessionsSessionInviteReceivedCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FEOSProductUserId TargetUserId; // 0x29
	FString InviteId; // 0x50
};

struct FClientGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FEOSSessionsSendInviteOptions {
	FString SessionName; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
	FEOSProductUserId TargetUserId; // 0x39
};

struct FLiveLinkSubjectKey {
	FGuid Source; // 0x0
	FLiveLinkSubjectName SubjectName; // 0x10
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FEOSEcomCheckoutCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FString TransactionId; // 0x38
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FAdminCreateSegmentResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
	FString SegmentId; // 0x18
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

struct FClientGetTitleDataRequest : FPlayFabRequestCommon {
	FString keys; // 0x8
	FString OverrideLabel; // 0x18
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

struct FEOSGetAudioInputDeviceByIndexOptions {
	int32_t DeviceInfoIndex; // 0x0
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
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

struct FServerGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FClientSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString VirtualCurrency; // 0x18
};

struct FMultiplayerCreateMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Creator; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	int32_t GiveUpAfterSeconds; // 0x18
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x20
	FString QueueName; // 0x30
};

struct FEOSPresenceJoinGameAcceptedCallbackInfo {
	FString JoinInfo; // 0x8
	FEOSEpicAccountId LocalUserId; // 0x18
	FEOSEpicAccountId TargetUserId; // 0x39
	FEOSUIEventId UiEventId; // 0x60
};

struct FEOSAchievementsUnlockAchievementsOptions {
	FEOSProductUserId UserId; // 0x4
	TArray<FString> AchievementIds; // 0x28
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FActorLayer {
	FName Name; // 0x0
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

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FClientGetPlayFabIDsFromGameCenterIDsRequest : FPlayFabRequestCommon {
	FString GameCenterIDs; // 0x8
};

struct FServerGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FClientLinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FAdminSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
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

struct FEOSSessionModificationSetInvitesAllowedOptions {
	bool bInvitesAllowed; // 0x4
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

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FEOSProgressionSnapshotDeleteSnapshotOptions {
	FEOSProductUserId LocalUserId; // 0x0
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FServerSendEmailFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EmailTemplateId; // 0x10
	FString PlayFabId; // 0x20
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FClientGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FExperimentationCreateExperimentResult : FPlayFabResultCommon {
	FString ExperimentId; // 0x8
};

struct FExperimentationGetTreatmentAssignmentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* TreatmentAssignment; // 0x8
};

struct FServerWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
};

struct FEOSSessionsRegisterPlayersCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FClientUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
};

struct FServerGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FLiveLinkTransformBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkTransformStaticData StaticData; // 0x8
	FLiveLinkTransformFrameData FrameData; // 0x20
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FEOSLobbyUpdateLobbyModificationOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString LobbyId; // 0x28
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FLiveLinkMetaData {
	TMap<FName, FString> StringMetadata; // 0x0
	FQualifiedFrameTime SceneTime; // 0x50
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FClientGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
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

struct FMagicLeapPlaneResult {
	FVector PlanePosition; // 0x0
	FRotator PlaneOrientation; // 0xc
	FRotator ContentOrientation; // 0x18
	FVector2D PlaneDimensions; // 0x24
	TArray<EMagicLeapPlaneQueryFlags> PlaneFlags; // 0x30
	FGuid ID; // 0x40
	FGuid InnerID; // 0x50
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

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FLiveLinkBaseStaticData {
	TArray<FName> PropertyNames; // 0x0
};

struct FMultiplayerListQosServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeAllRegions; // 0x10
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FServerGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticNames; // 0x20
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x30
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FEOSPlayerDataStorageReadFileDataCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString Filename; // 0x30
	int32_t TotalFileSizeBytes; // 0x40
	bool bIsLastChunk; // 0x44
	int32_t DataChunkLengthBytes; // 0x48
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
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

struct FS_AudioHandles {
	FFMODEventInstance Ambiance_2_586E9ACF4F77DE12F34A0184D59B10E8; // 0x0
	FFMODEventInstance KillerNear_4_82AC93B245CFC5088A2A0FBF7E18B37C; // 0x8
	FFMODEventInstance GameEnd_7_296EB0594FA070A23D6C7D804AD5711C; // 0x10
	FFMODEventInstance MainMenu_10_D911B5FE4DDB9F60EC18F3A7424C35BA; // 0x18
};

struct FExperimentationGetExclusionGroupTrafficRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExclusionGroupId; // 0x10
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
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

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSConnectTransferDeviceIdAccountOptions {
	FEOSProductUserId PrimaryLocalUserId; // 0x0
	FEOSProductUserId LocalDeviceUserId; // 0x21
	FEOSProductUserId ProductUserIdToPreserve; // 0x42
};

struct FAdminResetPasswordRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Password; // 0x10
	FString Token; // 0x20
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FEOSLobbyDetailsCopyMemberAttributeByIndexOptions {
	FEOSProductUserId TargetUserId; // 0x4
	int32_t AttrIndex; // 0x28
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
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

struct FEOSP2PPacketQueueInfo {
	FString IncomingPacketQueueMaxSizeBytes; // 0x0
	FString IncomingPacketQueueCurrentSizeBytes; // 0x10
	FString IncomingPacketQueueCurrentPacketCount; // 0x20
	FString OutgoingPacketQueueMaxSizeBytes; // 0x30
	FString OutgoingPacketQueueCurrentSizeBytes; // 0x40
	FString OutgoingPacketQueueCurrentPacketCount; // 0x50
};

struct FFMODEventControlSectionTemplate : FMovieSceneEvalTemplate {
	FFMODEventControlChannel ControlKeys; // 0x20
};

struct FClientLinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceID; // 0x10
	FString DeviceModel; // 0x20
	bool ForceLink; // 0x30
	FString OS; // 0x38
};

struct FAdminSetupPushNotificationRequest : FPlayFabRequestCommon {
	FString Credential; // 0x8
	FString Key; // 0x18
	FString Name; // 0x28
	bool OverwriteOldARN; // 0x38
	EPushSetupPlatform Platform; // 0x39
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

struct FEOSProgressionSnapshotSubmitSnapshotOptions {
	int32_t SnapshotId; // 0x0
};

struct FEOSSanctionsQueryActivePlayerSanctionsOptions {
	FEOSProductUserId TargetUserId; // 0x4
	FEOSProductUserId LocalUserId; // 0x25
};

struct FClientWriteClientCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EventName; // 0x28
	FString Timestamp; // 0x38
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
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

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FEOSAntiCheatCommonRegisterEventOptions {
	int32_t EventId; // 0x4
	FString EventName; // 0x8
	EEOSEAntiCheatCommonEventType EventType; // 0x18
	TArray<FEOSAntiCheatCommonRegisterEventParamDef> ParamDefs; // 0x20
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
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

struct FEOSLobbySendInviteOptions {
	FString LobbyId; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FEOSProductUserId TargetUserId; // 0x31
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

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char Block : 1; // 0x0
};

struct FEOSLobbyCreateLobbyOptions {
	FEOSProductUserId LocalUserId; // 0x0
	int32_t MaxLobbyMembers; // 0x24
	EEOSELobbyPermissionLevel PermissionLevel; // 0x28
	bool bPresenceEnabled; // 0x29
	bool bAllowInvites; // 0x2a
	FString BucketId; // 0x30
	bool bDisableHostMigration; // 0x40
	bool bEnableRTCRoom; // 0x41
	FEOSLobbyLocalRTCOptions LocalRTCOptions; // 0x44
	FString LobbyId; // 0x50
};

struct FEOSSessionModificationSetPermissionLevelOptions {
	EEOSEOnlineSessionPermissionLevel PermissionLevel; // 0x4
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FEOSSessionSearchSetSessionIdOptions {
	FString SessionId; // 0x8
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FFMODAssetLookupRow : FTableRowBase {
	FString PackageName; // 0x8
	FString AssetName; // 0x18
};

struct FKey {
	FName KeyName; // 0x0
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

struct FWebClientCredentials {
	FString ClientId; // 0x0
	FString ClientSecret; // 0x10
};

struct FClientGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FClientOpenTradeRequest : FPlayFabRequestCommon {
	FString AllowedPlayerIds; // 0x8
	FString OfferedInventoryInstanceIds; // 0x18
	FString RequestedCatalogItemIds; // 0x28
};

struct FServerSubtractCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
	FString VirtualCurrency; // 0x38
};

struct FClientGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FServerGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* ProfileConstraints; // 0x28
	FString XboxToken; // 0x30
};

struct FEOSFriendsQueryFriendsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
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

struct FEOSLobbyModificationSetBucketIdOptions {
	FString BucketId; // 0x8
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FAdminModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FAdminDeleteOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
};

struct FMatchmakerStartGameResponse : FPlayFabResultCommon {
	FString GameID; // 0x8
	FString ServerIPV4Address; // 0x18
	FString ServerIPV6Address; // 0x28
	int32_t ServerPort; // 0x38
	FString ServerPublicDNSName; // 0x40
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FEOSAuthToken {
	FString App; // 0x0
	FString ClientId; // 0x10
	FEOSEpicAccountId AccountId; // 0x20
	FString AccessToken; // 0x48
	FString ExpiresIn; // 0x58
	FString ExpiresAt; // 0x68
	EOSEAuthTokenType AuthType; // 0x78
	FString RefreshToken; // 0x80
	FString RefreshExpiresIn; // 0x90
	FString RefreshExpiresAt; // 0xa0
};

struct FEOSAntiCheatCommonLogPlayerReviveOptions {
	FEOSAntiCheatCommonClientHandle RevivedPlayerHandle; // 0x8
	FEOSAntiCheatCommonClientHandle ReviverPlayerHandle; // 0x10
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
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

struct FEOSAchievementsOnAchievementsUnlockedCallbackV2Info {
	FEOSProductUserId UserId; // 0x8
	FString AchievementId; // 0x30
	FString UnlockTime; // 0x40
	FEOSNotificationId NotificationID; // 0x50
};

struct FEOSCustomInvitesOnSendCustomInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	TArray<FEOSProductUserId> TargetUserIds; // 0x38
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FEOSLobbySearchFindCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FEOSEcomCopyOfferItemByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString OfferId; // 0x28
	int32_t ItemIndex; // 0x38
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FEOSSetAudioOutputSettingsOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString DeviceID; // 0x28
	float Volume; // 0x38
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FClientRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FMultiplayerGetBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FAdminRunTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Identifier; // 0x10
};

struct FServerGetLeaderboardAroundUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FAdminGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FEOSPresenceSetPresenceCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
};

struct FMagicLeapLightEstimationColorTemperatureState {
	float ColorTemperatureKelvin; // 0x0
	FLinearColor AmbientColor; // 0x4
	FTimespan Timestamp; // 0x18
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FDataAbortFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FMultiplayerListMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
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

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FEOSLobbyDetailsCopyMemberAttributeByKeyOptions {
	FEOSProductUserId TargetUserId; // 0x4
	FString AttrKey; // 0x28
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
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

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FServerGrantItemsToUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FEOSEcomQueryOwnershipCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	TArray<FEOSEcomItemOwnership> ItemOwnership; // 0x38
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FEOSModsUpdateModOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSModIdentifier Mod; // 0x28
};

struct FAdminCheckLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString ItemId; // 0x18
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

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FEOSLeaderboardsCopyLeaderboardRecordByUserIdOptions {
	FEOSProductUserId UserId; // 0x4
};

struct FClientCancelTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
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

struct FEOSLobbySearchFindOptions {
	FEOSProductUserId LocalUserId; // 0x4
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

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FEOSActiveSessionInfo {
	FString SessionName; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
	EEOSEOnlineSessionState State; // 0x39
	FEOSSessionDetailsInfo SessionDetails; // 0x40
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FEOSPresenceSetPresenceOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSHPresenceModification PresenceModificationHandle; // 0x28
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

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FAdminRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FGroupsListMembershipRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FMultiplayerGetServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
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

struct FServerMoveItemToCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FClientUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FClientGetPlayFabIDsFromGameCenterIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FAdminSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FServerRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FEOSSessionsStartSessionCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FEOSPlayerDataStorageDuplicateFileOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString SourceFilename; // 0x28
	FString DestinationFilename; // 0x38
};

struct FAdminRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FGroupsApplyToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingInvite; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
	UPlayFabJsonObject* Group; // 0x20
};

struct FEOSSessionsRegisterPlayersOptions {
	FString SessionName; // 0x8
	TArray<FEOSProductUserId> PlayersToRegister; // 0x18
};

struct FInsightsInsightsEmptyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FEOSAchievementsCopyPlayerAchievementByIndexOptions {
	FEOSProductUserId TargetUserId; // 0x4
	int32_t AchievementIndex; // 0x28
	FEOSProductUserId LocalUserId; // 0x2c
};

struct FEOSMetricsBeginPlayerSessionOptions {
	EEOSEMetricsAccountIdType AccountIdType; // 0x4
	FEOSEpicAccountId Epic; // 0x5
	FString External; // 0x28
	FString DisplayName; // 0x38
	EEOSEUserControllerType ControllerType; // 0x48
	FString ServerIp; // 0x50
	FString GameSessionId; // 0x60
};

struct FEOSSessionsGetInviteCountOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FEOSUpdateSendingCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString RoomName; // 0x38
	EEOSERTCAudioStatus AudioStatus; // 0x48
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
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

struct FLiveLinkRefSkeleton {
	TArray<FName> BoneNames; // 0x0
	TArray<int32_t> BoneParents; // 0x10
};

struct FEOSAntiCheatCommonLogPlayerSpawnOptions {
	FEOSAntiCheatCommonClientHandle SpawnedPlayerHandle; // 0x8
	int32_t TeamId; // 0x10
	int32_t CharacterId; // 0x14
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

struct FLiveLinkLightBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkLightStaticData StaticData; // 0x8
	FLiveLinkLightFrameData FrameData; // 0x30
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
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

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FEOSPlayerDataStorageCopyFileMetadataAtIndexOptions {
	FEOSProductUserId LocalUserId; // 0x4
	int32_t Index; // 0x28
};

struct FAdminGetPlayedTitleListResult : FPlayFabResultCommon {
	FString TitleIds; // 0x8
};

struct FEOSConnectExternalAccountInfo {
	FEOSProductUserId ProductUserId; // 0x4
	FString DisplayName; // 0x28
	FString AccountId; // 0x38
	EEOSEExternalAccountType AccountIdType; // 0x48
	FString LastLoginTime; // 0x50
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FEOSConnectQueryProductUserIdMappingsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FEOSPresenceQueryPresenceOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FClientUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString SharedGroupId; // 0x30
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FEOSAchievementsCopyAchievementDefinitionV2ByIndexOptions {
	int32_t AchievementIndex; // 0x0
};

struct FEOSAchievementsQueryPlayerAchievementsOptions {
	FEOSProductUserId TargetUserId; // 0x4
	FEOSProductUserId LocalUserId; // 0x25
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

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x90
	FSlateBrush ActiveFillBrush; // 0x118
	FSlateBrush InactiveFillBrush; // 0x1a0
	FSlateBrush ArrowsImage; // 0x228
	FSlateColor ForegroundColor; // 0x2b0
	FMargin TextPadding; // 0x2d8
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FEOSLobbyCreateLobbyCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FAddNotifyParticipantStatusChangedOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FGroupsApplyToGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString Expires; // 0x10
	UPlayFabJsonObject* Group; // 0x20
};

struct FMagicLeapHandMeshBlock {
	int32_t IndexCount; // 0x0
	int32_t VertexCount; // 0x4
	TArray<FVector> Vertex; // 0x8
	TArray<int32_t> Index; // 0x18
};

struct FClientUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString KeysToRemove; // 0x28
	EUserDataPermission Permission; // 0x38
};

struct FJoinRoomOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
	FString ClientBaseUrl; // 0x38
	FString ParticipantToken; // 0x48
	FEOSProductUserId ParticipantId; // 0x58
	int32_t Flags; // 0x7c
	bool bManualAudioInputEnabled; // 0x80
	bool bManualAudioOutputEnabled; // 0x81
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

struct FFootprintModifyStruct {
	EFootprintStyle Style_2_C0B8CBB8490E86D0DB2A87ADB7CF5608; // 0x0
	bool Right_4_599019384F3282386CE0889979E1D8FB; // 0x1
	bool Left_6_F66B2F394C8371594897548C72F1FA78; // 0x2
	UMaterialInstance* MaterialInterface_13_A1F6447E444635066DF15CA45C3A026A; // 0x8
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FServerLoginWithXboxIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString Sandbox; // 0x20
	FString XboxId; // 0x30
};

struct FMultiplayerListAssetSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FExperimentationCreateExclusionGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	FString Name; // 0x20
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FEOSSanctionsPlayerSanction {
	FDateTime TimePlaced; // 0x8
	FString Action; // 0x10
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FServerGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
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

struct FEOSLobbySendInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FClientLoginWithCustomIDRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString CustomId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
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

struct FEOSPresenceModificationSetDataOptions {
	TArray<FEOSPresenceDataRecord> Records; // 0x8
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
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

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FAdminDeleteTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
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

struct FEOSUserToken {
	FEOSProductUserId ProductUserId; // 0x0
	FString Token; // 0x28
};

struct FEOSAddNotifyAudioBeforeSendOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
};

struct FEOSUserInfoCopyUserInfoOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FAdminResetUserStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FGroupsRemoveGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FMultiplayerDeleteAssetRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Filename; // 0x10
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
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

struct FMagicLeapEyeBlinkState {
	bool LeftEyeBlinked; // 0x0
	bool RightEyeBlinked; // 0x1
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

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FClientGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FProfilesSetProfileLanguageResponse : FPlayFabResultCommon {
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
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

struct FEOSProgressionSnapshotBeginSnapshotOptions {
	FEOSProductUserId LocalUserId; // 0x0
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
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

struct FGroupsDeleteGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FEOSLobbyRTCRoomConnectionChangedCallbackInfo {
	FString LobbyId; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
	bool bIsConnected; // 0x39
	EOSResult DisconnectReason; // 0x3a
};

struct FEOSP2PSetPacketQueueSizeOptions {
	FString IncomingPacketQueueMaxSizeBytes; // 0x8
	FString OutgoingPacketQueueMaxSizeBytes; // 0x18
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FClientLinkAppleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString IdentityToken; // 0x18
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FAdminGetCloudScriptTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FClientConsumeXboxEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString XboxToken; // 0x20
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FEOSTitleStorageReadFileDataCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString Filename; // 0x30
	int32_t TotalFileSizeBytes; // 0x40
	bool bIsLastChunk; // 0x44
	int32_t DataChunkLengthBytes; // 0x48
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FEOSAuthDeletePersistentAuthCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FServerRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
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

struct FDefaultCfgInput_AXIS {
	FText Name_27_2F6E3F4A4BF0B1B035759C96CD135A0F; // 0x0
	TArray<FInputAxisKeyMapping> ActionKey_23_3441EB1F4B0E2572A99F90B57333B98E; // 0x18
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
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

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FServerListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
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

struct FEOSSessionsRejectInviteCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FEOSSessionsQueryInvitesCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FAdminGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
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

struct FAdminResetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
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

struct FClientGetPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
};

struct FEOSEcomGetItemImageInfoCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString ItemId; // 0x28
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
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

struct FExperimentationGetExclusionGroupTrafficResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> TrafficAllocations; // 0x8
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FEOSLobbySearchSetParameterOptions {
	FEOSLobbyAttributeData Parameter; // 0x8
	EEOSEComparisonOp ComparisonOp; // 0x30
};

struct FKillerPerks {
	UPerkKiller_C* PerkClass_10_03E0A2514E05ED93B8C8778FD24749B7; // 0x0
	FString PerkName_7_AD7F3C5D448616BD1E3424A1EB48F088; // 0x8
	FString PerkDesc_9_1D9F52E64ABA264F4BAC1C946BFBB0C5; // 0x18
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FEOSConnectGetProductUserExternalAccountCountOptions {
	FEOSProductUserId TargetUserId; // 0x4
};

struct FServerGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString PlayFabId; // 0x30
	FString StatisticName; // 0x40
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FAdminGetPlayedTitleListRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetPlayFabIDsFromGoogleIDsRequest : FPlayFabRequestCommon {
	FString GoogleIDs; // 0x8
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FClientLoginWithFacebookRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FEOSQueryJoinRoomTokenOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
	TArray<FEOSProductUserId> TargetUserIds; // 0x38
	TArray<FString> TargetUserIpAddresses; // 0x48
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

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FServerGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FMultiplayerListPartyQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FMultiplayerListVirtualMachineSummariesResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
	TArray<UPlayFabJsonObject*> VirtualMachines; // 0x20
};

struct FServerGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FEOSSanctionsQueryActivePlayerSanctionsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId TargetUserId; // 0x10
	FEOSProductUserId LocalUserId; // 0x31
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FClientConsumeXboxEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FClientAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString VirtualCurrency; // 0x18
};

struct FEOSEcomGetOfferImageInfoCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString OfferId; // 0x28
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FAdminAddVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FEOSFriendsGetFriendsCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
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

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FGroupsCreateGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString GroupName; // 0x18
};

struct FEOSAchievementsPlayerAchievement {
	FString AchievementId; // 0x8
	float Progress; // 0x18
	FString UnlockTime; // 0x20
	int32_t StatInfoCount; // 0x30
	TArray<FEOSAchievementsPlayerStatInfo> StatInfo; // 0x38
	FString DisplayName; // 0x48
	FString Description; // 0x58
	FString IconURL; // 0x68
	FString FlavorText; // 0x78
};

struct FEOSReportsSendPlayerBehaviorReportOptions {
	FEOSProductUserId ReporterUserId; // 0x4
	FEOSProductUserId ReportedUserId; // 0x25
	EEOSEPlayerReportsCategory ReportCategory; // 0x46
	FString Message; // 0x48
	FString Context; // 0x58
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FServerGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FEOSConnectIdToken {
	FEOSProductUserId ProductUserId; // 0x0
	FString JsonWebToken; // 0x28
};

struct FMultiplayerListBuildSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FEOSSessionSearchSetTargetUserIdOptions {
	FEOSProductUserId TargetUserId; // 0x4
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
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

struct FClientGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FAdminGetSegmentsResponse : FPlayFabResultCommon {
	FString ErrorMessage; // 0x8
	TArray<UPlayFabJsonObject*> Segments; // 0x18
};

struct FEOSAntiCheatServerProtectMessageOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	int32_t DataLengthBytes; // 0x10
	TArray<char> Data; // 0x18
	int32_t OutBufferSizeBytes; // 0x28
};

struct FGroupsUpdateGroupRequest : FPlayFabRequestCommon {
	FString AdminRoleId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t ExpectedProfileVersion; // 0x20
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FServerGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FItemsDesc {
	FText DisplayName_7_876AEF034C16623FFDCB0282A3278C7C; // 0x0
	FText Description_8_10A35B1A47014E52850FF4A11ADE4B26; // 0x18
	UPaperSprite* ItemIcon_11_EE1F6FB944BC1F391FB8EBBE260843AE; // 0x30
	bool IsCounterVisible_14_972E2F134F88B72FB672149B52B2EB81; // 0x38
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : FPlayFabResultCommon {
	FString TitleId; // 0x8
	UPlayFabJsonObject* TitlePlayerAccounts; // 0x18
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FServerGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FEOSLeaderboardsDefinition {
	FString LeaderboardId; // 0x8
	FString StatName; // 0x18
	EEOSELeaderboardAggregation Aggregation; // 0x28
	FString StartTime; // 0x30
	FString EndTime; // 0x40
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FAdminSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FEOSEcomRedeemEntitlementsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
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

struct FClientGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
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

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FAdminGetServerBuildUploadURLResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FDataDeleteFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FATPCOverrideCameraRotation {
	FRotator Rotation; // 0x0
	bool bUseRotationLimits; // 0xc
	bool bAllowPlayerInput; // 0xd
	float InterpSpeedAfterPlayerInput; // 0x10
};

struct FEOSAudioOutputDeviceInfo {
	bool bDefaultDevice; // 0x0
	FString DeviceID; // 0x8
	FString DeviceName; // 0x18
};

struct FEOSSessionSearchRemoveParameterOptions {
	FString Key; // 0x8
	EEOSEComparisonOp ComparisonOp; // 0x18
};

struct FClientGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FServerBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
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

struct FClientGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterName; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ItemId; // 0x30
};

struct FEOSAntiCheatClientUnprotectMessageOptions {
	int32_t DataLengthBytes; // 0x4
	TArray<char> Data; // 0x8
	int32_t OutBufferSizeBytes; // 0x18
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FLiveLinkInterpolationSettings {
	bool bUseInterpolation; // 0x0
	float InterpolationOffset; // 0x4
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
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

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FS_LevelEntry {
	FString LevelName_2_4045BD224FEDE139869E84BA89A5142A; // 0x0
	FString LevelFileName_4_3B77C431402769C6E224D79D4D564FB6; // 0x10
	UPaperSprite* CreateScreen_10_97E24F5B4C22B2814AE20E9B0C35BC03; // 0x20
	UPaperSprite* ServerEntryScreen_12_CE7BC72A411789DEE49653AA719681EA; // 0x28
};

struct FClientAddOrUpdateContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EmailAddress; // 0x10
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> keys; // 0x78
};

struct FAdminGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FAdminRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FServerGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	FString PlayFabId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FClientGetWindowsHelloChallengeRequest : FPlayFabRequestCommon {
	FString PublicKeyHint; // 0x8
};

struct FEOSAntiCheatServerGetProtectMessageOutputLengthOptions {
	int32_t DataLengthBytes; // 0x4
};

struct FLiveLinkSourcePreset {
	FGuid Guid; // 0x0
	ULiveLinkSourceSettings* Settings; // 0x10
	FText SourceType; // 0x18
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FAdminDeleteContentRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
};

struct FServerGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CharacterName; // 0x8
	FString CharacterType; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString PlayFabId; // 0x30
};

struct FEOSP2POnIncomingPacketQueueFullInfo {
	FString PacketQueueMaxSizeBytes; // 0x8
	FString PacketQueueCurrentSizeBytes; // 0x18
	FEOSProductUserId OverflowPacketLocalUserId; // 0x28
	int32_t OverflowPacketChannel; // 0x4c
	int32_t OverflowPacketSizeBytes; // 0x50
};

struct FEOSP2PCloseConnectionsOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FEOSP2PSocketId SocketId; // 0x28
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FMagicLeapMeshBlockInfo {
	FGuid BlockID; // 0x0
	FVector BlockPosition; // 0x10
	FRotator BlockOrientation; // 0x1c
	FVector BlockDimensions; // 0x28
	FTimespan Timestamp; // 0x38
	EMagicLeapMeshState BlockState; // 0x40
};

struct FServerNotifyMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FServerGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FEOSPlayerDataStorageGetFileMetadataCountOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FClientAndroidDevicePushNotificationRegistrationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
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

struct FLiveLinkSourceDebugInfo {
	FLiveLinkSubjectName SubjectName; // 0x0
	int32_t SnapshotIndex; // 0x8
	int32_t NumberOfBufferAtSnapshot; // 0xc
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FEOSP2PAcceptConnectionOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FEOSProductUserId RemoteUserId; // 0x25
	FEOSP2PSocketId SocketId; // 0x48
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FEOSSessionsDestroySessionOptions {
	FString SessionName; // 0x8
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FEOSP2PReceivePacketOptions {
	FEOSProductUserId LocalUserId; // 0x4
	int32_t MaxDataSizeBytes; // 0x28
	int32_t RequestedChannel; // 0x2c
};

struct FCloudScriptUnregisterFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
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

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FEOSAuthDeletePersistentAuthOptions {
	FString RefreshToken; // 0x0
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
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

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
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

struct FClientUnlinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FEOSAntiCheatClientGetProtectMessageOutputLengthOptions {
	int32_t DataLengthBytes; // 0x4
};

struct FEOSPlayerDataStorageFileTransferProgressCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString Filename; // 0x30
	int32_t BytesTransferred; // 0x40
	int32_t TotalFileSizeBytes; // 0x44
};

struct FEOSTitleStorageFileMetadata {
	int32_t FileSizeBytes; // 0x4
	FString MD5Hash; // 0x8
	FString Filename; // 0x18
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FServerUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString PlayFabId; // 0x40
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FLiveLinkCurveElement {
	FName CurveName; // 0x0
	float CurveValue; // 0x8
};

struct FS_BannerCustomize {
	int32_t BannerID_3_58DF3272445AA80A439715B54550862C; // 0x0
	FText BannerName_17_640F01D04DE2ED64A071C19F0EB9B1E0; // 0x8
	Rarity BannerRarity_20_D403F8F342A6DB5E70B1948359761CC3; // 0x20
	UPaperSprite* BannerBackGround_11_5DB57D764C90B88E3D43E090F31E7BF8; // 0x28
	FColor BannerColor_14_990824384230905A0444729164B4AFF9; // 0x30
	UPaperSprite* AvatarFrame_23_A6374A7C4019B12BEB8635BC74226A4C; // 0x38
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FServerSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
	FString Tags; // 0x28
};

struct FServerRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString PlayFabId; // 0x40
};

struct FGroupsListMembershipOpportunitiesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAdminUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString PlayFabId; // 0x30
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FAdminGetContentListRequest : FPlayFabRequestCommon {
	FString Prefix; // 0x8
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

struct FEOSCustomInvitesOnCustomInviteAcceptedCallbackInfo {
	FEOSProductUserId TargetUserId; // 0x8
	FEOSProductUserId LocalUserId; // 0x29
	FString CustomInviteId; // 0x50
	FString Payload; // 0x60
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
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

struct FEOSUserInfoQueryUserInfoByDisplayNameCallbackInfo {
	EOSResult ResultCode; // 0x4
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetUserId; // 0x31
	FString DisplayName; // 0x58
};

struct FGroupsChangeMemberRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DestinationRoleId; // 0x10
	UPlayFabJsonObject* Group; // 0x20
	TArray<UPlayFabJsonObject*> Members; // 0x28
	FString OriginRoleId; // 0x38
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FClientGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FEOSRTCParticipantStatusChangedCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString RoomName; // 0x30
	FEOSProductUserId ParticipantId; // 0x40
	EEOSERTCParticipantStatus ParticipantStatus; // 0x61
	TArray<FEOSRTCParticipantMetadata> ParticipantMetadata; // 0x68
};

struct FMagicLeapHeadTrackingState {
	EMagicLeapHeadTrackingMode Mode; // 0x0
	EMagicLeapHeadTrackingError Error; // 0x1
	float Confidence; // 0x4
};

struct FClientGetAdPlacementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AdPlacements; // 0x8
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
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

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FServerSetGameServerInstanceStateRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	EGameInstanceState State; // 0x18
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FGroupsAcceptGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FClientStartPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> Items; // 0x20
	FString StoreId; // 0x30
};

struct FClientUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
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

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FEOSLobbyUpdateReceivedCallbackInfo {
	FString LobbyId; // 0x8
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
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

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FClientReportAdActivityRequest : FPlayFabRequestCommon {
	EAdActivity Activity; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlacementId; // 0x18
	FString RewardId; // 0x28
};

struct FInsightsInsightsGetPendingOperationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OperationType; // 0x10
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMultiplayerCreateServerMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString QueueName; // 0x28
};

struct FEOSLobbyInviteAcceptedCallbackInfo {
	FString InviteId; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
	FEOSProductUserId TargetUserId; // 0x39
	FString LobbyId; // 0x60
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
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

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FMultiplayerGetBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FEOSTitleStorageDeleteCacheCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FEOSLobbyModificationSetInvitesAllowedOptions {
	bool bInvitesAllowed; // 0x4
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FAuthenticationValidateEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EntityToken; // 0x10
};

struct FClientCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FItemSnapshot {
	FTransform Transform_2_F6459B884DB8CEE826448796C115EFD5; // 0x0
	AActor* Class_5_9AA49E9E48FA866CEAA5B5B4145BD809; // 0x30
	AActor* Actor_8_5CC94ED64AB6ED46C29F2585A1D58341; // 0x38
	FString Group_11_B86F531A43AF38356FC0FA9BFBA39958; // 0x40
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FAdminGetServerBuildInfoRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FServerSetGameServerInstanceDataRequest : FPlayFabRequestCommon {
	FString GameServerData; // 0x8
	FString LobbyId; // 0x18
};

struct FEOSTitleStorageQueryFileListOptions {
	FEOSProductUserId LocalUserId; // 0x4
	TArray<FString> ListOfTags; // 0x28
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FEOSConnectOnVerifyIdTokenCallback {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId ProductUserId; // 0x10
	bool bIsAccountInfoPresent; // 0x31
	EEOSEExternalAccountType AccountIdType; // 0x32
	FString AccountId; // 0x38
	FString Platform; // 0x48
	FString DeviceType; // 0x58
};

struct FMatchmakerAuthUserRequest : FPlayFabRequestCommon {
	FString AuthorizationTicket; // 0x8
};

struct FMultiplayerUpdateBuildRegionRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* BuildRegion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FEOSUserInfoCopyExternalUserInfoByAccountTypeOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
	EEOSEExternalAccountType AccountType; // 0x46
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FEOSLobbyJoinLobbyOptions {
	FEOSHLobbyDetails LobbyDetailsHandle; // 0x0
	FEOSProductUserId LocalUserId; // 0x8
	bool bPresenceEnabled; // 0x29
	FEOSLobbyLocalRTCOptions LocalRTCOptions; // 0x2c
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FServerConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
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

struct FEOSLobbyMemberUpdateReceivedCallbackInfo {
	FString LobbyId; // 0x8
	FEOSProductUserId TargetUserId; // 0x18
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
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

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
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

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FSubjectMetadata {
	TMap<FName, FString> StringMetadata; // 0x0
	FTimecode SceneTimecode; // 0x50
	FFrameRate SceneFramerate; // 0x64
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FServerRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientPurchaseItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FGroupsListGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientRefreshPSNAuthTokenRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	int32_t IssuerId; // 0x18
	FString RedirectUri; // 0x20
};

struct FEOSModIdentifier {
	FString NamespaceId; // 0x8
	FString ItemId; // 0x18
	FString ArtifactId; // 0x28
	FString Title; // 0x38
	FString Version; // 0x48
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FEOSAntiCheatCommonLogPlayerUseAbilityOptions {
	FEOSAntiCheatCommonClientHandle PlayerHandle; // 0x8
	int32_t AbilityId; // 0x10
	int32_t AbilityDurationMs; // 0x14
	int32_t AbilityCooldownMs; // 0x18
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FClientConsumePSNEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t ServiceLabel; // 0x20
};

struct FEOSLobbySearchSetLobbyIdOptions {
	FString LobbyId; // 0x0
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FServerGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
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

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FMultiplayerGetServerBackfillTicketResult : FPlayFabResultCommon {
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	int32_t GiveUpAfterSeconds; // 0x28
	FString MatchId; // 0x30
	TArray<UPlayFabJsonObject*> Members; // 0x40
	FString QueueName; // 0x50
	UPlayFabJsonObject* ServerDetails; // 0x60
	FString Status; // 0x68
	FString TicketId; // 0x78
};

struct FEndGamePlayerData {
	FString Nickname_2_3D137DF24936DB1DAFF0D1A6F131E0DA; // 0x0
	bool isKiller_5_8EEA3D6E4AFF12E17887298522C8DBD5; // 0x10
	int32_t AvatarID_41_38DE3AC0494AC3AA0F3994AA8994C8E2; // 0x14
	int32_t BannerId_14_C151454448B364EDA8418DAFF3DC16F8; // 0x18
	int32_t TagId_16_55137DEA463ECE684389488356EB64FF; // 0x1c
	SurvChars CharType_10_7FB6B4ED4269CD4185E5C5AC7CEB5DE9; // 0x20
	KillerType KillerType_13_09BEA465403673844207F3A9B0DE7896; // 0x21
	int32_t DamageDone_18_294782D84DE8333133BB418A77C93423; // 0x24
	int32_t Kills_20_3386BAAF46577BCA0EC8A1809E5677FA; // 0x28
	int32_t Assists_22_8FD810904D757841F66929B7ADE52BED; // 0x2c
	int32_t ObjectivesDone_24_9A56FA6C4DCCB78FB4C67F90A3DABC7D; // 0x30
	int32_t SurvivalTime_26_0EFFAC77481D4797672F2EB1859B435B; // 0x34
	int32_t Stuns_28_A4B90BCD4D6FE104282A48B469BEC6B5; // 0x38
	int32_t DistanceTraveled_30_279036494B8BA5FFEEFFDDAA3ABC974D; // 0x3c
	bool isMVPPlayer_33_9A6A408148C8C0AA0EA00F9FB5A53380; // 0x40
	FString SurvSlotName_38_8539760E41A5AA79C54E539DBC5C1825; // 0x48
	FString SteamID_44_5B03A38C4ED1CE0F89F37C957C05A726; // 0x58
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FClientStartPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	FString OrderId; // 0x18
	TArray<UPlayFabJsonObject*> PaymentOptions; // 0x28
	UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FEOSLobbyDetailsCopyAttributeByIndexOptions {
	int32_t AttrIndex; // 0x4
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

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FClientGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FEOSConnectTransferDeviceIdAccountCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FClientGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
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

struct FServerGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FEOSConnectQueryExternalAccountMappingsOptions {
	FEOSProductUserId LocalUserId; // 0x4
	EEOSEExternalAccountType AccountIdType; // 0x25
	TArray<FString> ExternalAccountIds; // 0x28
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FEOSTitleStorageQueryFileCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FClientGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
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

struct FExperimentationCreateExclusionGroupResult : FPlayFabResultCommon {
	FString ExclusionGroupId; // 0x8
};

struct FEOSSessionsIsUserInSessionOptions {
	FString SessionName; // 0x8
	FEOSProductUserId TargetUserId; // 0x18
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FEOSConnectCreateUserCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FEOSSessionsUpdateSessionCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString SessionName; // 0x10
	FString SessionId; // 0x20
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FServerAwardSteamAchievementRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Achievements; // 0x8
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FClientGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FEOSTitleStorageQueryFileListCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	int32_t FileCount; // 0x34
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FEOSLobbyAttribute {
	FEOSLobbyAttributeData Data; // 0x8
	EEOSELobbyAttributeVisibility Visbility; // 0x30
};

struct FEOSEcomCopyOfferByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	int32_t OfferIndex; // 0x28
};

struct FMagicLeapTrackingMeshInfo {
	FTimespan Timestamp; // 0x0
	TArray<FMagicLeapMeshBlockInfo> BlockData; // 0x8
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FServerRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FServerCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FAdminGetDataReportResult : FPlayFabResultCommon {
	FString DownloadUrl; // 0x8
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FAdminGetContentUploadUrlRequest : FPlayFabRequestCommon {
	FString ContentType; // 0x8
	FString Key; // 0x18
};

struct FAdminGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FServerEvaluateRandomResultTableRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableId; // 0x18
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FAdminDeleteStoreRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString StoreId; // 0x20
};

struct FClientGetPlayFabIDsFromTwitchIDsRequest : FPlayFabRequestCommon {
	FString TwitchIds; // 0x8
};

struct FEOSAntiCheatCommonOnClientActionRequiredCallbackInfo {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	EEOSEAntiCheatCommonClientAction ClientAction; // 0x10
	EEOSEAntiCheatCommonClientActionReason ActionReasonCode; // 0x11
	FString ActionReasonDetailsString; // 0x18
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FEOSLobbyGetRTCRoomNameOptions {
	FString LobbyId; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FClientGetTitlePublicKeyResult : FPlayFabResultCommon {
	FString RSAPublicKey; // 0x8
};

struct FClientUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FClientValidateAmazonReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptId; // 0x38
	FString UserId; // 0x48
};

struct FServerGetUserAccountInfoRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FClientRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FEOSAuthPinGrantInfo {
	FString UserCode; // 0x8
	FString VerificationURI; // 0x18
	int32_t ExpiresIn; // 0x28
	FString VerificationURIComplete; // 0x30
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FClientGetWindowsHelloChallengeResponse : FPlayFabResultCommon {
	FString Challenge; // 0x8
};

struct FEOSCustomInvitesFinalizeInviteOptions {
	FEOSProductUserId TargetUserId; // 0x0
	FEOSProductUserId LocalUserId; // 0x21
	FString CustomInviteId; // 0x48
	EOSResult ProcessingResult; // 0x58
};

struct FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FMultiplayerEnableMultiplayerServersForTitleResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FEOSConnectLoginStatusChangedCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	EEOSELoginStatus PreviousStatus; // 0x29
	EEOSELoginStatus CurrentStatus; // 0x2a
};

struct FPingQoSInfo {
	FString URL; // 0x0
	FString IP; // 0x10
	bool bUseIP; // 0x20
	int32_t Port; // 0x24
	FString Region; // 0x28
	int32_t Ping; // 0x38
};

struct FProfilesGetGlobalPolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FClientGetPlayFabIDsFromKongregateIDsRequest : FPlayFabRequestCommon {
	FString KongregateIDs; // 0x8
};

struct FServerAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FServerRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FEOSConnectCopyIdTokenOptions {
	FEOSProductUserId LocalUserId; // 0x0
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FExpressionOutput {
	FName OutputName; // 0x0
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

struct FMultiplayerListQosServersForTitleResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FEOSUIHideFriendsOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FDataInitiateFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> UploadDetails; // 0x18
};

struct FEOSAuthQueryIdTokenCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetAccountId; // 0x31
};

struct FEOSAntiCheatClientReceiveMessageFromServerOptions {
	int32_t DataLengthBytes; // 0x4
	TArray<char> Data; // 0x8
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FEOSPageQuery {
	int32_t StartIndex; // 0x4
	int32_t MaxCount; // 0x8
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FEOSLeaderboardsOnQueryLeaderboardUserScoresCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
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

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
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

struct FAdminAbortTaskInstanceRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString TaskInstanceId; // 0x10
};

struct FExperimentationGetExperimentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FExperimentationUpdateExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	int32_t Duration; // 0x20
	FString EndDate; // 0x28
	FString ExclusionGroupId; // 0x38
	int32_t ExclusionGroupTrafficAllocation; // 0x48
	EExperimentType ExperimentType; // 0x4c
	FString ID; // 0x50
	FString Name; // 0x60
	FString SegmentId; // 0x70
	FString StartDate; // 0x80
	FString TitlePlayerAccountTestIds; // 0x90
	TArray<UPlayFabJsonObject*> Variants; // 0xa0
};

struct FClientLoginWithEmailAddressRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString Password; // 0x28
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

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FEOSAchievementsOnQueryPlayerAchievementsCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId UserId; // 0x10
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FGroupsInviteToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingApplication; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
	UPlayFabJsonObject* Group; // 0x20
	FString RoleId; // 0x28
};

struct FEOSEcomGetEntitlementsCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FLiveLinkCameraBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkCameraStaticData StaticData; // 0x8
	FLiveLinkCameraFrameData FrameData; // 0x30
};

struct FEOSStatsStat {
	FString Name; // 0x8
	FString StartTime; // 0x18
	FString EndTime; // 0x28
	int32_t Value; // 0x38
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

struct FClientAcceptTradeRequest : FPlayFabRequestCommon {
	FString AcceptedInventoryInstanceIds; // 0x8
	FString OfferingPlayerId; // 0x18
	FString TradeId; // 0x28
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FFMODAttenuationDetails {
	char bOverrideAttenuation : 1; // 0x0
	float MinimumDistance; // 0x4
	float MaximumDistance; // 0x8
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
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

struct FClientUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x10
};

struct FEOSAntiCheatServerRegisterClientOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	EEOSEAntiCheatCommonClientType ClientType; // 0x10
	EEOSEAntiCheatCommonClientPlatform ClientPlatform; // 0x11
	FString AccountId; // 0x18
	FString IpAddress; // 0x28
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FAdminGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FMatchmakerAuthUserResponse : FPlayFabResultCommon {
	bool Authorized; // 0x8
	FString PlayFabId; // 0x10
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
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

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FClientGetFriendLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FATPCFOVSettings {
	float CameraFOV; // 0x0
	float InterpolationSpeed; // 0x4
	UCurveFloat* PitchRotationFOVModifier; // 0x8
	UCurveFloat* MovementSpeedFOVModifier; // 0x10
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FEOSAntiCheatCommonOnMessageToClientCallbackInfo {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	FString MessageData; // 0x10
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FServerAddCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
	FString VirtualCurrency; // 0x38
};

struct FProfilesGetEntityProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool DataAsObject; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
};

struct FAdminRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
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

struct FAdminCreateSegmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* SegmentModel; // 0x8
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

struct FMultiplayerListServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FEOSEcomQueryOwnershipTokenCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FString OwnershipToken; // 0x38
};

struct FMultiplayerGetAssetUploadUrlRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Filename; // 0x10
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FLiveLinkBaseFrameData {
	FLiveLinkWorldTime WorldTime; // 0x0
	FLiveLinkMetaData MetaData; // 0x10
	TArray<float> PropertyValues; // 0x70
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FClientReportPlayerClientResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FEOSAudioInputDeviceInfo {
	bool bDefaultDevice; // 0x0
	FString DeviceID; // 0x8
	FString DeviceName; // 0x18
};

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FExperimentationGetTreatmentAssignmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAdminIncrementPlayerStatisticVersionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FLiveLinkSubjectRepresentation {
	FLiveLinkSubjectName Subject; // 0x0
	ULiveLinkRole* Role; // 0x8
};

struct FServerDeregisterGameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
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

struct FPurchaseConfirmation {
	FString PackageName; // 0x10
	PurchaseType Type; // 0x48
};

struct FLiveLinkTimeSynchronizationSettings {
	FFrameRate FrameRate; // 0x0
	FFrameNumber FrameOffset; // 0x8
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FClientGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FEOSTitleStorageFileTransferProgressCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString Filename; // 0x30
	int32_t BytesTransferred; // 0x40
	int32_t TotalFileSizeBytes; // 0x44
};

struct FEOSSessionSearchSetMaxResultsOptions {
	int32_t MaxSearchResults; // 0x4
};

struct FClientSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FLiveLinkSubjectName {
	FName Name; // 0x0
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FSteamFriend {
	FString ID; // 0x0
	FString Nickname; // 0x10
	bool Online; // 0x20
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FClientLoginWithFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString FacebookInstantGamesSignature; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FST_FillterMessage {
	bool bool_6_8EF514D24F847F963577EC9E07BB87FA; // 0x0
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FClientExecuteCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x29
	int32_t SpecificRevision; // 0x2c
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FMagicLeapImageTargetState {
	EMagicLeapImageTargetStatus TrackingStatus; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse response; // 0x8
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FEOSLobbySearchSetMaxResultsOptions {
	int32_t MaxResults; // 0x4
};

struct FEOSAddNotifyAudioBeforeRenderOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
	bool bUnmixedAudio; // 0x38
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FAdminUpdatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	bool Disabled; // 0x8
	FString FriendlyName; // 0x10
	FString SecretKey; // 0x20
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FEOSCustomInvitesSendCustomInviteOptions {
	FEOSProductUserId LocalUserId; // 0x0
	TArray<FEOSProductUserId> TargetUserIds; // 0x28
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FTransCfgInput_AXIS {
	TArray<FDefaultCfgInput_AXIS> CFGInputsActionKeys_13_673FE4CE45EA632EF015A0A2F4069603; // 0x0
};

struct FServerLoginWithServerCustomIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString PlayerSecret; // 0x20
	FString ServerCustomId; // 0x30
};

struct FEOSModsUpdateModCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x1
	FEOSModIdentifier Mod; // 0x30
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
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

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
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

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FAdminAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FMultiplayerGetMultiplayerServerDetailsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString SessionId; // 0x30
};

struct FClientGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
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

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
};

struct FEOSAuthLogoutOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
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

struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x0
	int32_t Caption; // 0x4
	int32_t MetaData; // 0x8
	int32_t Script; // 0xc
	int32_t Subtitle; // 0x10
	int32_t Text; // 0x14
	int32_t Video; // 0x18
};

struct FMultiplayerListPartyQosServersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FServerGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FEOSFriendsAcceptInviteOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FEOSEcomCopyItemReleaseByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString ItemId; // 0x28
	int32_t ReleaseIndex; // 0x38
};

struct FEOSLeaderboardsCopyLeaderboardUserScoreByUserIdOptions {
	FEOSProductUserId UserId; // 0x4
	FString StatName; // 0x28
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FEOSConnectVerifyIdTokenOptions {
	FEOSConnectIdToken IdToken; // 0x0
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FEOSSessionModificationRemoveAttributeOptions {
	FString Key; // 0x8
};

struct FMagicLeapPolygon {
	TArray<FVector> Vertices; // 0x0
};

struct FEOSLobbyModificationAddMemberAttributeOptions {
	FEOSLobbyAttributeData Attribute; // 0x8
	EEOSELobbyAttributeVisibility Visibility; // 0x30
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

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
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

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FEOSSessionsCopySessionHandleForPresenceOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FAdminCreateTaskResult : FPlayFabResultCommon {
	FString TaskId; // 0x8
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FEOSConnectCopyProductUserInfoOptions {
	FEOSProductUserId TargetUserId; // 0x4
};

struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
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

struct FProfilesGetEntityProfileResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Profile; // 0x8
};

struct FEOSLobbyDetailsCopyAttributeByKeyOptions {
	FString AttrKey; // 0x8
};

struct FEOSAuthLoginOptions {
	FEOSAuthCredentials Credentials; // 0x8
	int32_t ScopeFlags; // 0x38
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
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

struct FServerDeletePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FServerUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString PlayFabId; // 0x30
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

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FEOSConnectCopyProductUserExternalAccountByIndexOptions {
	FEOSProductUserId TargetUserId; // 0x4
	int32_t ExternalAccountInfoIndex; // 0x28
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
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

struct FServerGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FClientGetAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FExperimentationStopExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FEOSEcomGetEntitlementsByNameCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FEOSEcomEntitlementName EntitlementName; // 0x28
};

struct FServerConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemInstanceId; // 0x28
	FString PlayFabId; // 0x38
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FAdminGetSegmentsRequest : FPlayFabRequestCommon {
	FString SegmentIds; // 0x8
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

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FClientLinkKongregateAccountRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	FString KongregateId; // 0x28
};

struct FClientRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FEOSUserInfoQueryUserInfoByDisplayNameOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FString DisplayName; // 0x28
};

struct FLiveLinkTime {
	double WorldTime; // 0x0
	FQualifiedFrameTime SceneTime; // 0x8
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
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

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FEOSSessionsCopySessionHandleByUiEventIdOptions {
	FEOSUIEventId UiEventId; // 0x8
};

struct FEOSPlayerDataStorageQueryFileCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FServerUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
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

struct FServerUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FEOSP2PAddNotifyPeerConnectionRequestOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FEOSP2PSocketId SocketId; // 0x28
};

struct FAdminUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FMultiplayerListMultiplayerServersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FEOSEcomGetTransactionCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
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

struct FAdminDeleteTitleDataOverrideRequest : FPlayFabRequestCommon {
	FString OverrideLabel; // 0x8
};

struct FEOSUnregisterPlatformAudioUserOptions {
	FString UserId; // 0x0
};

struct FLiveLinkSubjectPreset {
	FLiveLinkSubjectKey Key; // 0x0
	ULiveLinkRole* Role; // 0x18
	ULiveLinkSubjectSettings* Settings; // 0x20
	ULiveLinkVirtualSubject* VirtualSubject; // 0x28
	bool bEnabled; // 0x30
};

struct FMagicLeapMeshBlockRequest {
	FGuid BlockID; // 0x0
	EMagicLeapMeshLOD LevelOfDetail; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
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

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FServerAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FEOSRTCParticipantMetadata {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
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

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FExperimentationUpdateExclusionGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	FString ExclusionGroupId; // 0x20
	FString Name; // 0x30
};

struct FAdminGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FClientValidateGooglePlayPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FEOSEcomCopyOfferByIdOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString OfferId; // 0x28
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FGroupsUpdateGroupRoleResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FAdminGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FEOSModsEnumerateModsOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	EEOSEModEnumerationType Type; // 0x25
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FClientValidateIOSReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FServerGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FEOSCustomInvitesOnCustomInviteReceivedCallbackInfo {
	FEOSProductUserId TargetUserId; // 0x8
	FEOSProductUserId LocalUserId; // 0x29
	FString CustomInviteId; // 0x50
	FString Payload; // 0x60
};

struct FEOSAuthVerifyUserAuthOptions {
	FEOSAuthToken AuthToken; // 0x0
};

struct FEOSLobbyQueryInvitesCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FClientRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FEOSConnectCredentials {
	FString AccessToken; // 0x0
	EEOSEExternalCredentialType Type; // 0x10
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
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

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FEOSUIGetFriendsVisibleOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FServerGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FEOSRTCJoinRoomCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString RoomName; // 0x38
};

struct FEOSLobbyModificationAddAttributeOptions {
	FEOSLobbyAttributeData Attribute; // 0x8
	EEOSELobbyAttributeVisibility Visibility; // 0x30
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

struct FServerSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FAdminGetPlayerIdFromAuthTokenResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
};

struct FClientLinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceName; // 0x10
	bool ForceLink; // 0x20
	FString PublicKey; // 0x28
	FString Username; // 0x38
};

struct FEOSModsEnumerateModsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x1
	EEOSEModEnumerationType Type; // 0x30
};

struct FClientGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FEOSEcomCopyItemByIdOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString ItemId; // 0x28
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

struct FServerAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
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

struct FEOSConnectCopyProductUserExternalAccountByAccountIdOptions {
	FEOSProductUserId TargetUserId; // 0x0
	FString AccountId; // 0x28
};

struct FServerUnlinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString ServerCustomId; // 0x20
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FMultiplayerCreateServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString QueueName; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FEOSRTCAudioAudioBuffer {
	int32_t SampleRate; // 0x0
	int32_t Channels; // 0x4
};

struct FEOSSessionDetailsAttribute {
	FEOSSessionsAttributeData Data; // 0x8
	EEOSESessionAttributeAdvertisementType AdvertisementType; // 0x30
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

struct FClientConfirmPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OrderId; // 0x10
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

struct FMagicLeapPlaneBoundary {
	FMagicLeapPolygon Polygon; // 0x0
	TArray<FMagicLeapPolygon> Holes; // 0x10
};

struct FClientGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticNames; // 0x10
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x20
};

struct FEOSFriendsGetFriendAtIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	int32_t Index; // 0x28
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FEOSLobbyLeaveLobbyOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString LobbyId; // 0x28
};

struct FClientGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FAdminDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FEOSLobbyCopyLobbyDetailsHandleByUiEventIdOptions {
	FEOSUIEventId UiEventId; // 0x0
};

struct FMagicLeapHandMesh {
	int32_t Version; // 0x0
	int32_t DataCount; // 0x4
	TArray<FMagicLeapHandMeshBlock> Data; // 0x8
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FServerUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
};

struct FMultiplayerGetContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FClientUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMultiplayerGetMultiplayerServerLogsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ServerId; // 0x10
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
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

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FAdminGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FServerGetCharacterStatisticsResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FEOSEcomQueryOwnershipOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	TArray<FString> CatalogItemIds; // 0x28
	FString CatalogNamespace; // 0x38
};

struct FEOSSessionsJoinSessionOptions {
	FString SessionName; // 0x8
	FEOSHSessionDetails SessionHandle; // 0x18
	FEOSProductUserId LocalUserId; // 0x20
	bool bPresenceEnabled; // 0x41
};

struct FAdminUpdateStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketingData; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FClientLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString XboxToken; // 0x18
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FMultiplayerListVirtualMachineSummariesRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t PageSize; // 0x20
	FString Region; // 0x28
	FString SkipToken; // 0x38
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

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FLiveLinkAnimationFrameData : FLiveLinkBaseFrameData {
	TArray<FTransform> Transforms; // 0xa0
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FCloudScriptExecuteFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionParameter; // 0x28
	bool GeneratePlayStreamEvent; // 0x30
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FClientRegisterForIOSPushNotificationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FAdminGetPlayerStatisticDefinitionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FEOSPlayerDataStorageQueryFileListCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	int32_t FileCount; // 0x34
};

struct FCoinMaxStruct {
	CoinEnum Type_2_509E8963437407C0D46D958FE434C4AF; // 0x0
	int32_t MaxScore_5_C8041B4242742486928FC38B57786E92; // 0x4
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FEOSAntiCheatClientOnMessageToServerCallbackInfo {
	FString MessageData; // 0x8
};

struct FEOSUserInfo {
	FEOSEpicAccountId UserId; // 0x4
	FString Country; // 0x28
	FString DisplayName; // 0x38
	FString PreferredLanguage; // 0x48
	FString Nickname; // 0x58
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FMultiplayerJoinMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Member; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FAdminGetPolicyRequest : FPlayFabRequestCommon {
	FString PolicyName; // 0x8
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FServerRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FCreateRoomTokenCallback {
	FString RoomName; // 0x0
	FString DeploymentId; // 0x10
	FString ClientBaseUrl; // 0x20
	FString Token; // 0x30
	FString Puid; // 0x40
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FEOSEcomCopyOfferImageInfoByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString OfferId; // 0x28
	int32_t ImageInfoIndex; // 0x38
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FEOSLeaderboardsOnQueryLeaderboardDefinitionsCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
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

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
};

struct FClientGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FServerRefreshGameServerInstanceHeartbeatRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FServerUpdateUserInventoryItemDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString ItemInstanceId; // 0x28
	FString KeysToRemove; // 0x38
	FString PlayFabId; // 0x48
};

struct FAddNotifyDisconnectedOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FLiveLinkBasicBlueprintData : FLiveLinkBaseBlueprintData {
	FLiveLinkBaseStaticData StaticData; // 0x8
	FLiveLinkBaseFrameData FrameData; // 0x18
};

struct FEOSPlayerDataStorageFileMetadata {
	int32_t FileSizeBytes; // 0x4
	FString MD5Hash; // 0x8
	FString Filename; // 0x18
	FDateTime LastModifiedTime; // 0x28
	int32_t UnencryptedDataSizeBytes; // 0x30
};

struct FMultiplayerGetMultiplayerServerLogsResponse : FPlayFabResultCommon {
	FString LogDownloadUrl; // 0x8
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FServerGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
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

struct FMatchmakerStartGameRequest : FPlayFabRequestCommon {
	FString Build; // 0x8
	FString CustomCommandLineData; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ExternalMatchmakerEventEndpoint; // 0x30
	FString GameMode; // 0x40
	ERegion Region; // 0x50
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAdminGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FProfilesSetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Permissions; // 0x10
};

struct FEOSPlayerDataStorageWriteFileOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString LocalFile; // 0x28
	FString RemoteFile; // 0x38
	int32_t ChunkLengthBytes; // 0x48
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FGroupsBlockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
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

struct FClientGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FServerGrantItemsToUserRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ItemIds; // 0x30
	FString PlayFabId; // 0x40
};

struct FEOSConnectGetProductUserIdMappingOptions {
	FEOSProductUserId LocalUserId; // 0x4
	EEOSEExternalAccountType AccountIdType; // 0x25
	FEOSProductUserId TargetProductUserId; // 0x26
};

struct FAdminGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FServerGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FMultiplayerGetRemoteLoginEndpointRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString VmId; // 0x30
};

struct FClientConsumeMicrosoftStoreEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketplaceSpecificData; // 0x20
};

struct FAdminSetTitleDataAndOverridesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> KeyValues; // 0x8
	FString OverrideLabel; // 0x18
};

struct FServerGetServerCustomIDsFromPlayFabIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
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

struct FAdminCheckLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	int32_t Amount; // 0x8
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

struct FMultiplayerUntagContainerImageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
	FString Tag; // 0x20
};

struct FMultiplayerCreateServerBackfillTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FClientValidateWindowsReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString Receipt; // 0x38
};

struct FEOSP2PGetNextReceivedPacketSizeOptions {
	FEOSProductUserId LocalUserId; // 0x4
	int32_t RequestedChannel; // 0x28
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

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FEOSAddNotifyParticipantUpdatedOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FDataGetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	bool EscapeObject; // 0x18
};

struct FEOSFriendsSendInviteOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FEOSTitleStorageCopyFileMetadataByFilenameOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString Filename; // 0x28
};

struct FS_LobbyStateTransport {
	AActor* killer1_23_38E9F1E94D93F5F3C4D657ACBE876F0C; // 0x0
	AActor* killer2_20_0A48C6124A0BAA75692C92B6F6DFD2A9; // 0x8
	AActor* killer3_22_D0C816484F36EA19A083A2ACBBA7A761; // 0x10
	AActor* killer4_40_2004D3DE4DC93A2FF9A99FAE092209BD; // 0x18
	AActor* Survivor1_11_6D199C294C4CF5320C3CB887D58988E6; // 0x20
	AActor* Survivor2_12_BAD87727437B632257A01EACD834A0C4; // 0x28
	AActor* Survivor3_13_7C58E4194D1ECB8071E3A5A134128EF4; // 0x30
	AActor* Survivor4_14_CC709D1F4E17E79BB8B66AA954A40A60; // 0x38
	AActor* Survivor5_33_FD221D9C4AEDD961A4697BAEA68F0077; // 0x40
	AActor* Survivor6_36_8BEA0FE14153CBEE766E9DA46A54F45C; // 0x48
	AActor* Survivor7_37_F5C652B94B65B50F5BC6E08494E8AAB3; // 0x50
	bool IsGranny_16_3B399A2840D8088FF4546F8799F16F35; // 0x58
	int32_t Killers_26_6B237B754574C57E05965CB3742E5BC5; // 0x5c
	int32_t Survivors_28_843B725E4CDCF5065648959C3E0FC769; // 0x60
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

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FServerRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
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

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
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

struct FLeaveRoomOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FClientUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FEOSPresenceDataRecord {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FEOSSessionModificationSetBucketIdOptions {
	FString BucketId; // 0x8
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FAdminRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FServerGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FS_Quests {
	FText QuestText_6_627E04124D2AA49EA61DF397C6A3735A; // 0x0
};

struct FAdminGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FDataGetObjectsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Objects; // 0x10
	int32_t ProfileVersion; // 0x18
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

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
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

struct FEOSJoinRoomCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString RoomName; // 0x30
	FEOSProductUserId ParticipantId; // 0x40
	bool bSpeaking; // 0x61
	EEOSERTCAudioStatus AudioStatus; // 0x62
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FClientAddFriendResult : FPlayFabResultCommon {
	bool Created; // 0x8
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
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

struct FMultiplayerListServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FEOSSessionDetailsCopySessionAttributeByIndexOptions {
	int32_t AttrIndex; // 0x4
};

struct FAdminGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FEOSPlayerDataStorageDeleteCacheOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FClientGetAdPlacementsRequest : FPlayFabRequestCommon {
	FString AppId; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FServerMoveItemToCharacterFromCharacterRequest : FPlayFabRequestCommon {
	FString GivingCharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
	FString ReceivingCharacterId; // 0x38
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FLiveLinkTransformFrameData : FLiveLinkBaseFrameData {
	FTransform Transform; // 0xa0
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FS_LevelEntryReverse {
	FString MapName_3_58A3D1D1495CF29FC8E7FC8D19581C86; // 0x0
	FText LocalizableMapName_6_E5FE38A04CA6E0DF431DAFB53D611B18; // 0x10
};

struct FEOSStatsOnQueryStatsCompleteCallbackInfo {
	EOSResult ResultCode; // 0x4
	FEOSProductUserId LocalUserId; // 0x10
	FEOSProductUserId TargetUserId; // 0x31
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

struct FEOSProgressionSnapshotEndSnapshotOptions {
	int32_t SnapshotId; // 0x0
};

struct FAdminGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t MaxBatchSize; // 0x20
	int32_t SecondsToLive; // 0x24
	FString SegmentId; // 0x28
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FEOSSessionsGetInviteIdByIndexOptions {
	FEOSProductUserId LocalUserId; // 0x4
	int32_t Index; // 0x28
};

struct FAdminCreateInsightsScheduledScalingTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FEOSEcomKeyImageInfo {
	FString Type; // 0x8
	FString URL; // 0x18
	int32_t Width; // 0x28
	int32_t Height; // 0x2c
};

struct FEOSFriendsOnFriendsUpdateInfo {
	FEOSEpicAccountId LocalUserId; // 0x8
	FEOSEpicAccountId TargetUserId; // 0x29
	EEOSEFriendsStatus PreviousStatus; // 0x4a
	EEOSEFriendsStatus CurrentStatus; // 0x4b
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FAdminCreateActionsOnPlayerSegmentTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FClientGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FInsightsInsightsGetOperationStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OperationId; // 0x10
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

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
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

struct FServerGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x20
};

struct FLiveLinkSkeletonStaticData : FLiveLinkBaseStaticData {
	TArray<FName> BoneNames; // 0x10
	TArray<int32_t> BoneParents; // 0x20
};

struct FMultiplayerListContainerImagesResponse : FPlayFabResultCommon {
	FString Images; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FMultiplayerGetMatchmakingTicketResult : FPlayFabResultCommon {
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Creator; // 0x28
	int32_t GiveUpAfterSeconds; // 0x30
	FString MatchId; // 0x38
	TArray<UPlayFabJsonObject*> Members; // 0x48
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x58
	FString QueueName; // 0x68
	FString Status; // 0x78
	FString TicketId; // 0x88
};

struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FDataFinalizeFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FEventsWriteEventsResponse : FPlayFabResultCommon {
	FString AssignedEventIds; // 0x8
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FATPCLocationSettings {
	bool bEnableCameraLocationLag; // 0x0
	FATPCCameraLocationLagSettings CameraLocationLagSettings; // 0x4
	bool bEnableCameraRotationLag; // 0x18
	FATPCCameraRotationLagSettings CameraRotationLagSettings; // 0x1c
	bool bDoCollisionTest; // 0x28
	float ProbeSize; // 0x2c
	ECollisionChannel ProbeChannel; // 0x30
	bool bDoMovementCollisionTest; // 0x31
	float MovementCollisionTestDuration; // 0x34
	float MovementCollisionTestMinLocationDelta; // 0x38
	ECollisionChannel MovementCollisionTestCollisionChannel; // 0x3c
	float MinCameraDistance; // 0x40
	float MaxCameraDistance; // 0x44
	bool bSetDistanceToDefaultOnChangeCameraMode; // 0x48
	float DefaultCameraDistance; // 0x4c
	bool bCacheDistanceForCurrentCameraMode; // 0x50
	EATPCInterpolationType ZoomInterpolationType; // 0x51
	float ZoomSpeed; // 0x54
	float ZoomDistance; // 0x58
	UCurveVector* SocketOffsetCurve; // 0x60
	float SocketOffsetInterpSpeed; // 0x68
	FVector TargetOffset; // 0x6c
	float TargetOffsetInterpSpeed; // 0x78
	UCurveFloat* PitchDistanceCurve; // 0x80
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FAdminDeleteSegmentRequest : FPlayFabRequestCommon {
	FString SegmentId; // 0x8
};

struct FClientAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FServerGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
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

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FEOSAuthLoginCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSAuthPinGrantInfo PinGrantInfo; // 0x38
	FEOSAuthAccountFeatureRestrictedInfo AccountFeatureRestrictedInfo; // 0x78
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FAdminGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FServerGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FAdminUpdateSegmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* SegmentModel; // 0x8
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
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

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FEOSEcomCheckoutOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString OverrideCatalogNamespace; // 0x28
	TArray<FEOSEcomCheckoutEntry> Entries; // 0x38
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FGroupsListGroupBlocksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
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

struct FEOSFriendsDeleteFriendOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FEOSP2PSocketId {
	FString SocketName; // 0x8
};

struct FAdminGetMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FEOSLeaderboardsLeaderboardRecord {
	FEOSProductUserId UserId; // 0x4
	int32_t Rank; // 0x28
	int32_t Score; // 0x2c
	FString UserDisplayName; // 0x30
};

struct FEOSConnectCreateDeviceIdOptions {
	FString DeviceModel; // 0x0
};

struct FDataGetFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FClientUnlinkKongregateAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FEOSUIAcknowledgeEventIdOptions {
	FEOSUIEventId UiEventId; // 0x8
	EOSResult Result; // 0x10
};

struct FAdminCreatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString FriendlyName; // 0x8
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FEOSLobbyDetailsGetMemberAttributeCountOptions {
	FEOSProductUserId TargetUserId; // 0x4
};

struct FDataInitiateFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FKillersAbilityStruct {
	TArray<FName> PropnightAbilities_4_9F476EBB4D372E46FC01728FF8E82677; // 0x0
	FName ProphuntAbility_7_602245AA405E9AFBBA74DAA3EC4AA762; // 0x10
};

struct FServerBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FEOSUIShowFriendsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FServerRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FEOSPresenceHasPresenceOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FAdminUpdateCloudScriptResult : FPlayFabResultCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FEOSLobbySearchSetTargetUserIdOptions {
	FEOSProductUserId TargetUserId; // 0x4
};

struct FMultiplayerRolloverContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FClientAddUsernamePasswordRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString Password; // 0x20
	FString Username; // 0x30
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

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
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

struct FEOSEcomQueryOffersCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
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

struct FFMODOcclusionDetails {
	bool bEnableOcclusion; // 0x0
	ECollisionChannel OcclusionTraceChannel; // 0x1
	bool bUseComplexCollisionForOcclusion; // 0x2
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
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

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FClientGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FMultiplayerCreateMatchmakingTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FMultiplayerGetQueueStatisticsResult : FPlayFabResultCommon {
	int32_t NumberOfPlayersMatching; // 0x8
	UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10
};

struct FServerGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FGroupsIsMemberResponse : FPlayFabResultCommon {
	bool IsMember; // 0x8
};

struct FEOSAntiCheatClientPollStatusOptions {
	int32_t OutMessageLength; // 0x4
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FEOSAuthLogoutCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FEOSP2POnQueryNATTypeCompleteInfo {
	EOSResult ResultCode; // 0x4
	EEOSENATType NATType; // 0x10
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
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

struct FClientWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
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

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FClientLoginWithSteamRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString SteamTicket; // 0x40
};

struct FAdminAddNewsResult : FPlayFabResultCommon {
	FString NewsId; // 0x8
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
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

struct FS_PlayerIconsSurv {
	FString Name_2_7E2C9BB748F3A2F0D8B4129B763ACE7B; // 0x0
	UPaperSprite* ProfessionPortret_33_813ECCDD494943EA570DB99F28CE2EC4; // 0x10
	UPaperSprite* PortretActive_25_C9B84415441358DC28E0AEB6140871C3; // 0x18
	UPaperSprite* PortretDanger_24_A423012C4C4094B27182168AEAB94E78; // 0x20
	UPaperSprite* PortretChair_29_23B6ACCD4CF46AC570F10CB6B6C3A236; // 0x28
	UPaperSprite* PortretDead_26_FB3C97B349B84837D5C013AE3581BF71; // 0x30
	UPaperSprite* PortretFree_20_38A2DCA24283B57315A832891CF1DAE5; // 0x38
};

struct FEOSAntiCheatServerBeginSessionOptions {
	int32_t RegisterTimeoutSeconds; // 0x4
	FString ServerName; // 0x8
	bool bEnableGameplayData; // 0x18
	FEOSProductUserId LocalUserId; // 0x19
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FEOSConnectUserLoginInfo {
	FString DisplayName; // 0x0
};

struct FEOSCopyUserTokenByIndexOptions {
	int32_t UserTokenIndex; // 0x0
	int32_t QueryId; // 0x4
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

struct FEOSLobbyGetInviteCountOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FEOSEcomQueryEntitlementsOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	TArray<FEOSEcomEntitlementName> EntitlementNames; // 0x28
	bool bIncludeRedeemed; // 0x38
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FClientGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
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

struct FAdminDeletePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString SecretKey; // 0x8
};

struct FClientUnlinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FacebookInstantGamesId; // 0x10
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

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FGroupsGetGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString GroupName; // 0x18
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FClientUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
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

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FServerLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString XboxToken; // 0x20
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FAdminGetContentUploadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FClientGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FATPCRotationSettings {
	float ViewPitchMin; // 0x0
	float ViewPitchMax; // 0x4
	float ViewYawMin; // 0x8
	float ViewYawMax; // 0xc
	float ViewInterpolationSpeed; // 0x10
	bool bEnableRotationOffset; // 0x14
	FATPCRotationOffsetSettings RotationOffsetSettings; // 0x18
	bool bEnableRoofCollisionCheckSettings; // 0x30
	FATPCRoofCollisionCheckSettings RoofCollisionCheckSettings; // 0x38
	bool bEnableViewRotationToActorRotation; // 0x90
	FATPCViewRotationToActorRotationSettings ViewRotationToActorRotationSettings; // 0x94
};

struct FPlayFabLoginResultCommon : FPlayFabResultCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
};

struct FAdminGetCloudScriptRevisionResult : FPlayFabResultCommon {
	FString CreatedAt; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool IsPublished; // 0x28
	int32_t Revision; // 0x2c
	int32_t Version; // 0x30
};

struct FAdminGetContentListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	int32_t ItemCount; // 0x18
	int32_t TotalSize; // 0x1c
};

struct FDataGetFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FServerGetTitleDataRequest : FPlayFabRequestCommon {
	FString keys; // 0x8
	FString OverrideLabel; // 0x18
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

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FClientGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FClientLoginWithPlayFabRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FEOSLobbyUpdateLobbyCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FEOSSessionSearchCopySearchResultByIndexOptions {
	int32_t SessionIndex; // 0x4
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

struct FAdminUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
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

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
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

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FEOSSendAudioOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
	FEOSRTCAudioAudioBuffer Buffer; // 0x38
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
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

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FClientGetTitlePublicKeyRequest : FPlayFabRequestCommon {
	FString TitleSharedSecret; // 0x8
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
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

struct FClientLinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString ServerAuthCode; // 0x18
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FClientLinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	bool ForceLink; // 0x30
	FString OS; // 0x38
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FEOSProgressionSnapshotSubmitSnapshotCallbackInfo {
	EOSResult ResultCode; // 0x0
	int32_t SnapshotId; // 0x4
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FServerEvaluateRandomResultTableResult : FPlayFabResultCommon {
	FString ResultItemId; // 0x8
};

struct FClientLinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FacebookInstantGamesSignature; // 0x10
	bool ForceLink; // 0x20
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
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

struct FAdminListVirtualCurrencyTypesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FGroupsRemoveGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
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

struct FEOSLobbyPromoteMemberOptions {
	FString LobbyId; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FEOSProductUserId TargetUserId; // 0x31
};

struct FServerSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FEOSEcomCopyEntitlementByNameAndIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FEOSEcomEntitlementName EntitlementName; // 0x28
	int32_t Index; // 0x38
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FInsightsInsightsGetDetailsResponse : FPlayFabResultCommon {
	int32_t DataUsageMb; // 0x8
	FString ErrorMessage; // 0x10
	UPlayFabJsonObject* Limits; // 0x20
	TArray<UPlayFabJsonObject*> PendingOperations; // 0x28
	int32_t PerformanceLevel; // 0x38
	int32_t RetentionDays; // 0x3c
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FClientLoginWithTwitchRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
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

struct FPlayFabError {
	bool HasError; // 0x0
	int32_t ErrorCode; // 0x4
	FString ErrorName; // 0x8
	FString ErrorMessage; // 0x18
	FString ErrorDetails; // 0x28
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FServerModifyItemUsesResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FClientUnlinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSSessionsQueryInvitesOptions {
	FEOSProductUserId LocalUserId; // 0x4
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FClientGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FMultiplayerCancelMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FEOSRTCLeaveRoomCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
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

struct FServerUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
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

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FEOSEcomCatalogOffer {
	int32_t ServerIndex; // 0x4
	FString CatalogNamespace; // 0x8
	FString ID; // 0x18
	FString TitleText; // 0x28
	FString DescriptionText; // 0x38
	FString LongDescriptionText; // 0x48
	FString TechnicalDetailsText; // 0x58
	FString CurrencyCode; // 0x68
	EOSResult PriceResult; // 0x78
	int64_t OriginalPrice; // 0x80
	int64_t CurrentPrice; // 0x88
	int32_t DiscountPercentage; // 0x90
	FString ExpirationTimestamp; // 0x98
	int32_t PurchasedCount; // 0xa8
	int32_t PurchaseLimit; // 0xac
	bool bAvailableForPurchase; // 0xb0
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

struct FServerLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString PlayFabId; // 0x18
	FString XboxToken; // 0x28
};

struct FClientGetPaymentTokenRequest : FPlayFabRequestCommon {
	FString TokenProvider; // 0x8
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FEOSRegisterPlatformAudioUserOptions {
	FString UserId; // 0x0
};

struct FClientUnlinkGameCenterAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FSurvPerks {
	UPerkSurv_C* PerkClass_2_03E0A2514E05ED93B8C8778FD24749B7; // 0x0
	FString PerkName_7_AD7F3C5D448616BD1E3424A1EB48F088; // 0x8
	FString PerkDesc_9_1D9F52E64ABA264F4BAC1C946BFBB0C5; // 0x18
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FClientGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayFabId; // 0x18
};

struct FServerSendCustomAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
	FString Username; // 0x30
};

struct FEOSLobbyModificationSetMaxMembersOptions {
	int32_t MaxMembers; // 0x4
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FMagicLeapResult {
	bool bSuccess; // 0x0
	FString AdditionalInfo; // 0x8
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FAdminGetTaskInstanceRequest : FPlayFabRequestCommon {
	FString TaskInstanceId; // 0x8
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FInsightsInsightsGetLimitsResponse : FPlayFabResultCommon {
	int32_t DefaultPerformanceLevel; // 0x8
	int32_t DefaultStorageRetentionDays; // 0xc
	int32_t StorageMaxRetentionDays; // 0x10
	int32_t StorageMinRetentionDays; // 0x14
	TArray<UPlayFabJsonObject*> SubMeters; // 0x18
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> keys; // 0x68
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
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

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FGroupsListGroupInvitationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientConfirmPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
	FString OrderId; // 0x18
	FString PurchaseDate; // 0x28
};

struct FEOSFriendsDeleteFriendCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetUserId; // 0x31
};

struct FEOSAntiCheatCommonVec3f {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FGenericTeamId {
	char TeamId; // 0x0
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

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FAdminGetDataReportRequest : FPlayFabRequestCommon {
	int32_t Day; // 0x8
	int32_t Month; // 0xc
	FString ReportName; // 0x10
	int32_t Year; // 0x20
};

struct FMultiplayerListMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FClientGetPlayerTradesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AcceptedTrades; // 0x8
	TArray<UPlayFabJsonObject*> OpenedTrades; // 0x18
};

struct FEOSLeaderboardsQueryLeaderboardUserScoresOptions {
	TArray<FEOSProductUserId> UserIds; // 0x8
	TArray<FEOSLeaderboardsUserScoresQueryStatInfo> StatInfo; // 0x18
	FString StartTime; // 0x28
	FString EndTime; // 0x38
	FEOSProductUserId LocalUserId; // 0x48
};

struct FEOSLobbyIsRTCRoomConnectedOptions {
	FString LobbyId; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FBlockParticipantOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
	FEOSProductUserId ParticipantId; // 0x38
	bool bBlocked; // 0x59
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
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

struct FServerGetLeaderboardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MaxResultsCount; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x18
	int32_t StartPosition; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int32_t Version; // 0x3c
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FGroupsListGroupApplicationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
};

struct FGroupsListGroupInvitationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Invitations; // 0x8
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FClientRestoreIOSPurchasesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
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

struct FEOSConnectQueryExternalAccountMappingsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FDataAbortFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
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

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FClientCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FEOSAntiCheatCommonLogEventOptions {
	FEOSAntiCheatCommonClientHandle ClientHandle; // 0x8
	int32_t EventId; // 0x10
	TArray<FEOSAntiCheatCommonLogEventParamPair> Params; // 0x18
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FClientLoginWithAppleRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString IdentityToken; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
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

struct FExperimentationGetExclusionGroupsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ExclusionGroups; // 0x8
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FClientGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FInitiateEpicAuthenticationRequest {
	FString ClientId; // 0x0
	FString RedirectUri; // 0x10
	FString Scope; // 0x20
	int32_t Timeout; // 0x30
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FAuthenticationValidateEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	EIdentifiedDeviceType IdentifiedDeviceType; // 0x10
	ELoginIdentityProvider IdentityProvider; // 0x11
	UPlayFabJsonObject* Lineage; // 0x18
};

struct FMagicLeapRaycastHitResult {
	EMagicLeapRaycastResultState HitState; // 0x0
	FVector HitPoint; // 0x4
	FVector Normal; // 0x10
	float Confidence; // 0x1c
	int32_t UserData; // 0x20
};

struct FServerGetPublisherDataRequest : FPlayFabRequestCommon {
	FString keys; // 0x8
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
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

struct FAdminGetTasksResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Tasks; // 0x8
};

struct FAdminGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FEOSAntiCheatCommonLogGameRoundStartOptions {
	FString SessionIdentifier; // 0x8
	FString LevelName; // 0x18
	FString ModeName; // 0x28
	int32_t RoundTimeSeconds; // 0x38
};

struct FEOSPresenceModificationDeleteDataOptions {
	TArray<FEOSPresenceModificationDataRecordId> Records; // 0x8
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FClientGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FServerUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceUpdate; // 0x10
	FString PlayFabId; // 0x18
	TArray<UPlayFabJsonObject*> Statistics; // 0x28
};

struct FEOSRTCBlockParticipantCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString RoomName; // 0x38
	FEOSProductUserId ParticipantId; // 0x48
	bool bBlocked; // 0x69
};

struct FEOSLeaderboardsGetLeaderboardUserScoreCountOptions {
	FString StatName; // 0x8
};

struct FGroupsInviteToGroupResponse : FPlayFabResultCommon {
	FString Expires; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	UPlayFabJsonObject* InvitedByEntity; // 0x20
	UPlayFabJsonObject* InvitedEntity; // 0x28
	FString RoleId; // 0x30
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
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

struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
};

struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
	UPlayFabJsonObject* PlayerProfile; // 0x20
	UPlayFabJsonObject* PlayStreamEventEnvelope; // 0x28
};

struct FEOSSetParticipantHardMuteOptions {
	FString RoomName; // 0x0
	FEOSProductUserId TargetUserId; // 0x10
	bool bMute; // 0x31
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FMultiplayerCreateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasName; // 0x8
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FInsightsInsightsGetPendingOperationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> PendingOperations; // 0x8
};

struct FEOSLeaderboardsCopyLeaderboardDefinitionByIndexOptions {
	int32_t LeaderboardIndex; // 0x4
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FGroupsCreateGroupRoleResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
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

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FS_CharacterName {
	FText CharName_3_3807CB7641F60FD8E78496999D06946E; // 0x0
	UPaperSprite* LobbyPickAvatar_7_37986AC448ED3D8114CE2BB898248771; // 0x18
	UPaperSprite* CircularAvatar_10_0A89D6A041C21C569EB3CDB71BAD6B77; // 0x20
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FEOSPresenceGetJoinInfoOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FST_BannerInfo {
	int32_t AvatarID_2_34D30A264DD2B944E25228AB850E9A43; // 0x0
	int32_t BannerID_5_622306254B8D8B2DDC4E9F9E1B58628C; // 0x4
	int32_t TagID_7_229AB9AB4ACECB2E3EDE8193DEE1ABCD; // 0x8
	FString Nickname_10_DC98BDFA4BA2581FA568529DBBD4016D; // 0x10
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
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

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FMultiplayerGetMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FAdminGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FAdminCreateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	bool IgnoreNonce; // 0x38
	FString IssuerDiscoveryUrl; // 0x40
	UPlayFabJsonObject* IssuerInformation; // 0x50
};

struct FEOSPlayerDataStorageWriteFileCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FString Filename; // 0x38
	FEOSHPlayerDataStorageFileTransferRequest Handle; // 0x48
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FEOSOutputStateCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString RoomName; // 0x30
	EEOSERTCAudioOutputStatus Status; // 0x40
};

struct FEOSLeaderboardsQueryLeaderboardRanksOptions {
	FString LeaderboardId; // 0x8
	FEOSProductUserId LocalUserId; // 0x18
};

struct FEOSModsCopyModInfoOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	EEOSEModEnumerationType Type; // 0x25
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

struct FATPCCameraLocationLagSettings {
	bool bEnableCameraLagForXY; // 0x0
	bool bEnableCameraLagForZ; // 0x1
	float CameraLagSpeed; // 0x4
	float CameraLagMaxDistance; // 0x8
	bool bDrawDebugLagMarkers; // 0xc
	bool bUseCameraLagSubstepping; // 0xd
	float CameraLagMaxTimeStep; // 0x10
};

struct FClientModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
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

struct FClientGetAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* AccountInfo; // 0x8
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FEOSSessionResult {
	FBlueprintSessionResult Result; // 0x0
	TArray<FEOSSessionSetting> SessionSettings; // 0x108
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FAdminRefundPurchaseResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FATPCViewRotationToActorRotationSettings {
	bool bIterruptOnActorRotationChanged; // 0x0
	float MaxDeltaForChange; // 0x4
	float StartChangeDelay; // 0x8
	float ChangeRotationSpeed; // 0xc
	float ChangeRotationSpeedInterpSpeed; // 0x10
};

struct FServerGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FEOSAntiCheatCommonQuat {
	float W; // 0x0
	float X; // 0x4
	float Y; // 0x8
	float Z; // 0xc
};

struct FEOSStatsIngestData {
	FString StatName; // 0x8
	int32_t IngestAmount; // 0x18
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FServerGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableIDs; // 0x18
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FServerWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
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

struct FEOSProgressionSnapshotAddProgressionOptions {
	int32_t SnapshotId; // 0x0
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FEOSUserInfoQueryUserInfoByExternalAccountCallbackInfo {
	EOSResult ResultCode; // 0x4
	FEOSEpicAccountId LocalUserId; // 0x10
	FString ExternalAccountId; // 0x38
	EEOSEExternalAccountType AccountType; // 0x48
	FEOSEpicAccountId TargetUserId; // 0x49
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FAdminGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FServerReportPlayerServerResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FEOSConnectLoginOptions {
	FEOSConnectCredentials Credentials; // 0x8
	FEOSConnectUserLoginInfo UserLoginInfo; // 0x20
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FEOSEcomCatalogRelease {
	TArray<FString> CompatibleAppIds; // 0x8
	TArray<FString> CompatiblePlatforms; // 0x20
	FString ReleaseNote; // 0x30
};

struct FLocalizedIconInfos {
	TArray<FLocalizedIconInfo> IconData; // 0x0
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FEOSP2POnRemoteConnectionClosedInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FEOSProductUserId RemoteUserId; // 0x29
	FEOSP2PSocketId SocketId; // 0x50
	EEOSEConnectionClosedReason Reason; // 0x68
};

struct FEOSP2PAddNotifyPeerConnectionClosedOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FEOSP2PSocketId SocketId; // 0x28
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

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FEOSConnectUnlinkAccountCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FExperimentationGetExperimentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Experiments; // 0x8
};

struct FClientUnlinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDeviceId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
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

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FClientGetPaymentTokenResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString ProviderToken; // 0x18
};

struct FServerGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FAdminCreatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FEOSLobbyJoinLobbyCallbackInfo {
	EOSResult ResultCode; // 0x0
	FString LobbyId; // 0x10
};

struct FEOSPlayerDataStorageDuplicateFileCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FEOSSanctionsCopyPlayerSanctionByIndexOptions {
	FEOSProductUserId TargetUserId; // 0x4
	int32_t SanctionIndex; // 0x28
};

struct FEOSAuthVerifyUserAuthCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FEOSLobbyModificationSetPermissionLevelOptions {
	EEOSELobbyPermissionLevel PermissionLevel; // 0x4
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
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

struct FMultiplayerListCertificateSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FClientConsumePS5EntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketplaceSpecificData; // 0x20
};

struct FClientAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FEOSUpdateReceivingOptions {
	FEOSProductUserId LocalUserId; // 0x0
	FString RoomName; // 0x28
	FEOSProductUserId ParticipantId; // 0x38
	bool bAudioEnabled; // 0x59
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
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

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FServerMoveItemToUserFromCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FClientGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	UPlayFabJsonObject* VirtualCurrency; // 0x18
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20
};

struct FMultiplayerListCertificateSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> CertificateSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FServerUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString SharedGroupId; // 0x30
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

struct FAdminResolvePurchaseDisputeRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	EResolutionOutcome Outcome; // 0x18
	FString PlayFabId; // 0x20
	FString Reason; // 0x30
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

struct FFMODLocalizedBankTable : FTableRowBase {
	UDataTable* Banks; // 0x8
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FEOSSetParticipantHardMuteCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FAdminGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FServerReportPlayerServerRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReporteeId; // 0x20
	FString ReporterId; // 0x30
};

struct FEOSTitleStorageQueryFileOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString Filename; // 0x28
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
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

struct FEOSSessionsRejectInviteOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString InviteId; // 0x28
};

struct FGroupsListGroupApplicationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FMultiplayerUploadCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* GameCertificate; // 0x10
};

struct FEOSAuthAccountFeatureRestrictedInfo {
	FString VerificationURI; // 0x8
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

struct FClientGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FClientRemoveContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FClientLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString XboxToken; // 0x40
};

struct FProfilesSetEntityProfilePolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FProfilesGetEntityProfilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool DataAsObject; // 0x10
	TArray<UPlayFabJsonObject*> Entities; // 0x18
};

struct FEOSUserInfoCopyExternalUserInfoByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
	int32_t Index; // 0x48
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

struct FClientCurrentGamesResult : FPlayFabResultCommon {
	int32_t GameCount; // 0x8
	TArray<UPlayFabJsonObject*> Games; // 0x10
	int32_t PlayerCount; // 0x20
};

struct FST_LeavePlayers_Tab_Stats {
	FText Nickname_2_EAF3D9A24A95C8E8A77990AFE3C290EB; // 0x0
	SurvChars Character_5_17221A9C48EA01F30D8432A16284EDD2; // 0x18
};

struct FAdminGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FClientUnlinkFacebookAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FInsightsInsightsOperationResponse : FPlayFabResultCommon {
	FString Message; // 0x8
	FString OperationId; // 0x18
	FString OperationType; // 0x28
};

struct FAdminRunTaskResult : FPlayFabResultCommon {
	FString TaskInstanceId; // 0x8
};

struct FServerGetUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FClientGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FGroupsUpdateGroupResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FEOSAchievementsGetPlayerAchievementCountOptions {
	FEOSProductUserId UserId; // 0x4
};

struct FServerUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FEOSAuthVerifyIdTokenCallbackInfo {
	EOSResult ResultCode; // 0x0
};

struct FClientUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FEOSAntiCheatCommonLogPlayerUseWeaponData {
	FEOSAntiCheatCommonClientHandle PlayerHandle; // 0x8
	FEOSAntiCheatCommonVec3f PlayerPosition; // 0x10
	FEOSAntiCheatCommonQuat PlayerViewRotation; // 0x1c
	bool bIsPlayerViewZoomed; // 0x2c
	bool bIsMeleeAttack; // 0x2d
	FString WeaponName; // 0x30
};

struct FFMODProjectLocale {
	FString LocaleName; // 0x0
	FString LocaleCode; // 0x10
	bool bDefault; // 0x20
};

struct FServerAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
	FString PlayFabId; // 0x48
};

struct FEOSUIShowFriendsOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FServerGrantItemsToCharacterRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString CharacterId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString ItemIds; // 0x40
	FString PlayFabId; // 0x50
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FGroupsListMembershipResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Groups; // 0x8
};

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FAdminGetTasksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
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

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FEOSStatsIngestStatCompleteCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSProductUserId LocalUserId; // 0x10
	FEOSProductUserId TargetUserId; // 0x31
};

struct FEOSEcomEntitlementName {
	FString Name; // 0x0
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FEOSLeaderboardsCopyLeaderboardDefinitionByLeaderboardIdOptions {
	FString LeaderboardId; // 0x8
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
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

struct FEOSSessionsEndSessionOptions {
	FString SessionName; // 0x8
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FEOSEcomGetOfferItemCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString OfferId; // 0x28
};

struct FEOSLobbyCreateLobbySearchOptions {
	int32_t MaxResults; // 0x4
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FAdminRemoveVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FMultiplayerListContainerImageTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
};

struct FProfilesSetEntityProfilePolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x18
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

struct FSubmitTicketRequest {
	ESubjectType Subject; // 0x0
	FString Message; // 0x8
	FString SenderEmail; // 0x18
	FString SenderName; // 0x28
	FString Guid; // 0x38
	FString ErrorCode; // 0x48
	FString SystemOS; // 0x58
	FString SystemAntiMalware; // 0x68
	FString SystemOther; // 0x78
};

struct FEOSPresenceCopyPresenceOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FServerUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString KeysToRemove; // 0x28
	EUserDataPermission Permission; // 0x38
	FString PlayFabId; // 0x40
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
};

struct FClientRestoreIOSPurchasesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReceiptData; // 0x20
};

struct FEOSUserInfoGetExternalUserInfoCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	FEOSEpicAccountId TargetUserId; // 0x25
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
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

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
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

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FLocalizedIconInfo {
	FString LanguageCode; // 0x0
	FDirectoryPath IconModelPath; // 0x10
	FDirectoryPath IconPortalPath; // 0x20
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

struct FMultiplayerCancelServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
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

struct FEOSSessionsCreateSessionSearchOptions {
	int32_t MaxSearchResults; // 0x4
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FServerSavePushNotificationTemplateResult : FPlayFabResultCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FGroupsAddMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RoleId; // 0x28
};

struct FEOSPresenceQueryPresenceCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
	FEOSEpicAccountId TargetUserId; // 0x31
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

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FServerGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticName; // 0x20
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FEOSLobbyGetInviteIdByIndexOptions {
	FEOSProductUserId LocalUserId; // 0x4
	int32_t Index; // 0x28
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FS_KIllerSurvCategories {
	bool IsKiller_1_C5C37DB54F6241AC309B49B261F7A1FF; // 0x0
	FText CategoryName_8_E0A416A64B547D2F3E7A168E6CE4C9D4; // 0x8
	SurvCategory SurvCategory_13_92EE3C074855FD9628265D8E0D52B372; // 0x20
	KillerCategory KillerCategory_14_15AA4E1544AFAF0792AF11A147307612; // 0x21
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FEOSEcomCheckoutEntry {
	FString OfferId; // 0x8
};

struct FItemStructure {
	AItemsBPHand_C* ClassType_17_EEB62D934DDA8335475757A08EBF5D74; // 0x0
	ItemType ItemType_16_FA342E8D42CD4619F85BC1910E58EA95; // 0x8
	Rarity Rarity_6_3EC419A94BB7BA10A49EAFAEF87ED344; // 0x9
	int32_t Charges_9_AFFB73B748526E18AA853EAF63CCBF6E; // 0xc
	bool CD?_18_3D72EBF7446A0D2767A5539B9CD640E8; // 0x10
	float TimerCD_21_9DC10C674F935EAD3A94059434C78B60; // 0x14
	float CurrentTimerCD_23_4200051A40A5F36786960FB193271DAE; // 0x18
	AItemsBP_C* ClassTypePickUp_27_16B64D1443A9018F9E85FC83ABEFC2A6; // 0x20
	int32_t ItemID_30_91E87EE64914104DD2D77EABB86290C4; // 0x28
};

struct FMultiplayerDeleteBuildRegionRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
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

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FMultiplayerGetMatchRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString MatchId; // 0x18
	FString QueueName; // 0x28
	bool ReturnMemberAttributes; // 0x38
};

struct FGroupsIsMemberRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryId; // 0x30
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FS_PlayerSkinInfoo {
	int32_t id_2_F42CD867428366F3EACB669B629C4C6E; // 0x0
	FText Name_6_7808BB7E4E5329729F733EB78E5D2976; // 0x8
	UPaperSprite* Sprite_9_1602211C45B92935A3E64DA75558A928; // 0x20
	TMap<int32_t, USkeletalMesh*> Basic_48_EF54708340042FDDBFD8259F7E269549; // 0x28
	TMap<int32_t, USkeletalMesh*> Rare_41_BE33080349F20317F8F72C81FA635848; // 0x78
	TMap<int32_t, USkeletalMesh*> Epic_43_0FB338B54C1FF166D8F40EB4B052FDC2; // 0xc8
	TMap<int32_t, USkeletalMesh*> Legendary_45_1CC4F7AB4AA937CD2BF346AC327626DE; // 0x118
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FAdminUpdatePolicyRequest : FPlayFabRequestCommon {
	bool OverwritePolicy; // 0x8
	FString PolicyName; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x20
};

struct FEOSEcomQueryEntitlementsCallbackInfo {
	EOSResult ResultCode; // 0x0
	FEOSEpicAccountId LocalUserId; // 0x10
};

struct FMagicLeapIdentityAttribute {
	EMagicLeapIdentityKey Attribute; // 0x0
	FString Value; // 0x8
};

struct FAdminGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FEOSPresenceModificationSetStatusOptions {
	EEOSPresenceEStatus Status; // 0x4
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
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

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FClientLoginWithWindowsHelloRequest : FPlayFabRequestCommon {
	FString ChallengeSignature; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PublicKeyHint; // 0x28
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FMultiplayerMultiplayerEmptyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEOSEcomCopyTransactionByIndexOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
	int32_t TransactionIndex; // 0x28
};

struct FEOSPresenceCreatePresenceModificationOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FEOSUISetToggleFriendsKeyOptions {
	int32_t keyCombination; // 0x4
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FPropData {
	float HealthCoefficient_5_CCE4098145CF24DCE8BFBD99718A56DE; // 0x0
	FRotator Rotation_15_77419AAA4EFF7D326C6FADBC23FEAE3B; // 0x4
	FVector AddingLocation_31_EB7ED9FB4664C1B2FACFC8986AF02A9A; // 0x10
	UFMODEvent* HitSound_20_6A185A9E45FCAEEF4F82A8BB445079A8; // 0x20
	UFMODEvent* PropSound_22_89FB965B4B311C052760AC9F1A0E9343; // 0x28
	TSoftObjectPtr<UStaticMesh> Mesh_54_FCE273C7465EEC67D83A07A273142771; // 0x30
	bool SmallProp?_24_9EC5373D4F1A9CCC70BE33A878C9722E; // 0x58
	bool BigPropJump?_26_2D960C1045CEF2ED7BA9A89EC61ACF32; // 0x59
	bool Replicate?_28_9B784DEF4BAA5D4E2E6F2184782EA739; // 0x5a
	bool StartStraight?_33_47ECB8D2425387E685B8F6B7EAD06206; // 0x5b
	bool Burning?_35_458D7B9C4B8EE68CB9D6D0AD8FF35B2C; // 0x5c
	bool ApplyDamage?_48_50CE6E2747CDF6353BDFB99BF3681FF1; // 0x5d
	TArray<UStaticMesh*> MainMesh_43_75D571DC4BAD7097B112E4B574A97EB0; // 0x60
	TArray<UDestructibleMesh*> DestroyedMesh_44_EC0B66AB4B90AD80FD17CB9F1CC5DBB6; // 0x70
	TArray<TSoftObjectPtr<UMaterialInstanceConstant>> BorkenMaterial_60_A927892743AFD63771FA1CA4E47ADCCD; // 0x80
	UFMODEvent* DestroyedSound_51_508D8E764CB398A8E748C9B2EA99A3FC; // 0x90
	bool ChangingSound?_53_7E63A4C84576D4A6EF1F4B88130C766B; // 0x98
	float PowerOfShoot_65_5C9A50A141B69CBE4F54EF89C146A962; // 0x9c
};

struct FServerAwardSteamAchievementResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AchievementResults; // 0x8
};

struct FClientGetPhotonAuthenticationTokenResult : FPlayFabResultCommon {
	FString PhotonCustomAuthenticationToken; // 0x8
};

struct FEventsWriteEventsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Events; // 0x10
};

struct FEOSCopyUserTokenByUserIdOptions {
	FEOSProductUserId TargetUserId; // 0x0
	int32_t QueryId; // 0x24
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
};

struct FClientUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DisplayName; // 0x10
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FAdminGetPolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FClientGameServerRegionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Regions; // 0x8
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

struct FServerModifyCharacterVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
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

struct FEOSLobbyJoinLobbyAcceptedCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FEOSUIEventId UiEventId; // 0x30
};

struct FServerSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FEOSP2POnIncomingConnectionRequestInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FEOSProductUserId RemoteUserId; // 0x29
	FEOSP2PSocketId SocketId; // 0x50
};

struct FEOSSessionsCreateSessionModificationOptions {
	FString SessionName; // 0x8
	FString BucketId; // 0x18
	int32_t MaxPlayers; // 0x28
	FEOSProductUserId LocalUserId; // 0x2c
	bool bPresenceEnabled; // 0x4d
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FMultiplayerDeleteRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString Username; // 0x30
	FString VmId; // 0x40
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

struct FServerGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
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

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FPlayFabBaseModel {
	FPlayFabError responseError; // 0x0
	UPlayFabJsonObject* responseData; // 0x38
};

struct FClientLinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	FString IdToken; // 0x28
};

struct FServerGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FAdminModifyMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	TArray<UPlayFabJsonObject*> GameModes; // 0x18
};

struct FEOSPlayerDataStorageDeleteFileOptions {
	FEOSProductUserId LocalUserId; // 0x4
	FString Filename; // 0x28
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
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

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FGroupsDeleteRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
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

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FEOSPresencePresenceChangedCallbackInfo {
	FEOSEpicAccountId LocalUserId; // 0x8
	FEOSEpicAccountId PresenceUserId; // 0x29
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FMultiplayerShutdownMultiplayerServerRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString SessionId; // 0x30
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FFMODLocalizedBankRow : FTableRowBase {
	FString Path; // 0x8
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

struct FATPCCameraShakesSettings {
	UCameraShakeBase* EnterToModeCameraShake; // 0x0
	UCameraShakeBase* RegularCameraShake; // 0x8
	bool bNeedStopAllCameraShakeOnEnterToCameraMode; // 0x10
};

struct FClientUnlinkAppleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FKillerSkinStruct {
	KillerType Char_15_E730943F47F63BBF47CCCE86F7B3CB74; // 0x0
	int32_t SkinId_5_A0E32C2348AD0FC91CAF6CA548E4A1D1; // 0x4
	USkeletalMesh* Mesh_11_96F539A04E51BEB71724EEA7131FA9C9; // 0x8
	USkeletalMesh* MeshFpp_14_C91253EB400A253777180C93CF664B05; // 0x10
	UMaterialInstance* MaterialWeapon_21_B0A921EC430F3ADDB1620C8CA15A2A91; // 0x18
};

struct FExperimentationDeleteExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FEOSAntiCheatClientBeginSessionOptions {
	FEOSProductUserId LocalUserId; // 0x4
	EEOSEAntiCheatClientMode Mode; // 0x25
};

struct FClientLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	int32_t IssuerId; // 0x24
	FString RedirectUri; // 0x28
};

struct FEOSSanctionsGetPlayerSanctionCountOptions {
	FEOSProductUserId TargetUserId; // 0x4
};

struct FEOSActiveSessionGetRegisteredPlayerByIndexOptions {
	int32_t PlayerIndex; // 0x4
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> keys; // 0x70
};

struct FEOSLobbyDetailsInfo {
	FString LobbyId; // 0x0
	FEOSProductUserId LobbyOwnerUserId; // 0x10
	EEOSELobbyPermissionLevel PermissionLevel; // 0x31
	int32_t AvailableSlots; // 0x34
	int32_t MaxMembers; // 0x38
	bool bAllowInvites; // 0x3c
	FString BucketId; // 0x40
	bool bAllowHostMigration; // 0x50
	bool bRTCRoomEnabled; // 0x51
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FEOSEcomQueryOffersOptions {
	FEOSEpicAccountId LocalUserId; // 0x0
	FString OverrideCatalogNamespace; // 0x28
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FAdminAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FEOSAudioInputStateCallbackInfo {
	FEOSProductUserId LocalUserId; // 0x8
	FString RoomName; // 0x30
	EEOSERTCAudioInputStatus Status; // 0x40
};

struct FClientDeviceInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Info; // 0x8
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

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FEOSEcomTransactionGetEntitlementsCountOptions {
	FEOSEpicAccountId LocalUserId; // 0x4
};

struct FAdminGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

