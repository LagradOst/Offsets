#pragma once

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int Total; // 0x8
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FAuthenticationValidateEntityTokenResponse {
	UPlayFabJsonObject* Entity; // 0x8
	ELoginIdentityProvider IdentityProvider; // 0x10
	UPlayFabJsonObject* Lineage; // 0x18
};

struct FDataSetObjectsResponse {
	int ProfileVersion; // 0x8
	TArray<UPlayFabJsonObject*> SetResults; // 0x10
};

struct FImportanceTexture {
	FIntPoint Size; // 0x0
	int NumMips; // 0x8
	TArray<float> MarginalCDF; // 0x10
	TArray<float> ConditionalCDF; // 0x20
	TArray<FColor> TextureData; // 0x30
	TWeakObjectPtr<UTexture2D> Texture; // 0x40
	EImportanceWeight Weighting; // 0x48
};

struct FPoseLinkBase {
	int LinkID; // 0x0
};

struct FServerBanUsersRequest {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FMultiplayerListMultiplayerServersRequest {
	FString BuildId; // 0x8
	int PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FServerReportPlayerServerRequest {
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
	FString ReporterId; // 0x28
};

struct FVector4Distribution {
	FDistributionLookupTable table; // 0x0
};

struct FSQVehicleRecoil {
	FVector2D RecoilFactor; // 0x0
	char RepeatAmount; // 0x8
};

struct FClientMatchmakeRequest {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString GameMode; // 0x28
	FString LobbyId; // 0x38
	ERegion Region; // 0x48
	bool StartNewIfNoneFound; // 0x49
	FString StatisticName; // 0x50
	UPlayFabJsonObject* TagFilter; // 0x60
};

struct FServerRevokeAllBansForUserResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FGroupsListGroupInvitationsResponse {
	TArray<UPlayFabJsonObject*> Invitations; // 0x8
};

struct FServerServerLoginResult {
	UPlayFabJsonObject* EntityToken; // 0x10
	UPlayFabJsonObject* InfoResultPayload; // 0x18
	FString LastLoginTime; // 0x20
	bool NewlyCreated; // 0x30
	FString PlayFabId; // 0x38
	FString SessionTicket; // 0x48
	UPlayFabJsonObject* SettingsForUser; // 0x58
	UPlayFabJsonObject* TreatmentAssignment; // 0x60
};

struct FServerSetGameServerInstanceDataRequest {
	FString GameServerData; // 0x8
	FString LobbyId; // 0x18
};

struct FSQHUDMessage {
	FString Message; // 0x0
	FLinearColor Color; // 0x10
	float Scale; // 0x20
	float ExpireTime; // 0x24
	float FadeTime; // 0x28
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FClientLoginWithXboxRequest {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString XboxToken; // 0x38
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int Size; // 0x48
};

struct FAdminGetCatalogItemsRequest {
	FString CatalogVersion; // 0x8
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

struct FClientLinkOpenIdConnectRequest {
	FString ConnectionId; // 0x8
	bool ForceLink; // 0x18
	FString IdToken; // 0x20
};

struct FMovieSceneEasingSettings {
	int AutoEaseInDuration; // 0x0
	int AutoEaseOutDuration; // 0x4
	TScriptInterface<Class> EaseIn; // 0x8
	bool bManualEaseIn; // 0x18
	int ManualEaseInDuration; // 0x1c
	TScriptInterface<Class> EaseOut; // 0x20
	bool bManualEaseOut; // 0x30
	int ManualEaseOutDuration; // 0x34
};

struct FRenderingPolygonGroup {
	uint32 RenderingSectionIndex; // 0x0
	int MaterialIndex; // 0x4
	int MaxTriangles; // 0x8
};

struct FScrollBorderStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FServerGetCharacterInventoryRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString PlayFabId; // 0x28
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FTextBlockStyle {
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

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse {
	FString TitleId; // 0x8
	UPlayFabJsonObject* TitlePlayerAccounts; // 0x18
};

struct FAttributeDefaults {
	UAttributeSet* Attributes; // 0x0
	UDataTable* DefaultStartingTable; // 0x8
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
	int NotifyFilterLOD; // 0x9c
	bool bTriggerOnDedicatedServer; // 0xa0
	bool bTriggerOnFollower; // 0xa1
	int TrackIndex; // 0xa4
};

struct FAnimNode_WheelHandler {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int> InputPoseNodeIndices; // 0x28
	UStructProperty* OutputPoseNodeProperty; // 0x38
	TArray<UStructProperty*> InputPoseNodeProperties; // 0x40
	TArray<UProperty*> InputProperties; // 0x50
	bool bImplemented; // 0x60
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
};

struct FRawDistributionVector {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	FVector MinValueVec; // 0x30
	FVector MaxValueVec; // 0x3c
	UDistributionVector* Distribution; // 0x48
};

struct FSSGS_LineDataText {
	bool has_text; // 0x0
	FString Prefix; // 0x8
	FString suffix; // 0x18
	bool Bold; // 0x28
	int wrap; // 0x2c
};

struct FMultiplayerCreateBuildAliasRequest {
	FString AliasName; // 0x8
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int ParticleIndex; // 0x28
	int ParticleIndexMesh; // 0x2c
};

struct FSQWeaponSpring {
	FVector WeaponSpringFactor; // 0x0
	FVector WeaponSpringRotationPivot; // 0xc
	FRotator WeaponSpringRotationFactor; // 0x18
};

struct FPooledCameraShakes {
	TArray<UCameraShake*> PooledShakes; // 0x0
};

struct FMovieScene3DLocationKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FMultiplayerGetRemoteLoginEndpointRequest {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString VmId; // 0x28
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

struct FAdminListOpenIdConnectionResponse {
	TArray<UPlayFabJsonObject*> Connections; // 0x8
};

struct FServerSubtractUserVirtualCurrencyRequest {
	int Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FMultiplayerListPartyQosServersResponse {
	int PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FPrecomputedLightInstanceData {
	FTransform Transform; // 0xb0
	FGuid LightGuid; // 0xe0
	int PreviewShadowMapChannel; // 0xf0
};

struct FServerGetRandomResultTablesResult {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FAdminDeletePlayerSharedSecretResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDatasmithMeshSectionInfoTemplate {
	int MaterialIndex; // 0x0
};

struct FLinearConstraint {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FSQVehicleQueueEntry {
	ASQPlayerController* Player; // 0x8
};

struct FAdminDeletePlayerResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminDeleteTaskRequest {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FClientGetLeaderboardForUsersCharactersRequest {
	int MaxResultsCount; // 0x8
	FString StatisticName; // 0x10
};

struct FClientGetPlayerProfileRequest {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FMultiplayerListPartyQosServersRequest {
	FString Version; // 0x8
};

struct FClientLoginWithFacebookInstantGamesIdRequest {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	FString FacebookInstantGamesSignature; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FSQWeaponAmmoReductionConfig {
	ASQWeapon* WeaponClass; // 0x0
	float AmmoPercentageToLeave; // 0x8
	bool bAffectCurrentMagazine; // 0xc
	bool bAffectCurrentMagIfEquipped; // 0xd
};

struct FClientGetPhotonAuthenticationTokenRequest {
	FString PhotonApplicationId; // 0x8
};

struct FSplineInstanceData {
	bool bSplineHasBeenEdited; // 0xa8
	FSplineCurves SplineCurves; // 0xb0
	FSplineCurves SplineCurvesPreUCS; // 0x118
};

struct FServerProps {
	FString address; // 0x0
};

struct FMatchmakerAuthUserRequest {
	FString AuthorizationTicket; // 0x8
};

struct FClientUnlinkIOSDeviceIDRequest {
	FString DeviceID; // 0x8
};

struct FSQRangeConstraints {
	bool bEnablePitchInterval; // 0x0
	bool bEnableYawInterval; // 0x1
	bool bEnableRollInterval; // 0x2
	FVector2D PitchInterval; // 0x4
	FVector2D YawInterval; // 0xc
	FVector2D RollInterval; // 0x14
	FSQRotationConstraints Constraints; // 0x1c
};

struct FMultiplayerListQosServersForTitleResponse {
	int PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FDataAbortFileUploadsResponse {
	UPlayFabJsonObject* Entity; // 0x8
	int ProfileVersion; // 0x10
};

struct FClientGetCharacterDataResult {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int DataVersion; // 0x20
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
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

struct FServerRevokeBansResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FGameplayEffectSpecForRPC {
	UGameplayEffect* Def; // 0x0
	TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8
	FGameplayEffectContextHandle EffectContext; // 0x18
	FGameplayTagContainer AggregatedSourceTags; // 0x30
	FGameplayTagContainer AggregatedTargetTags; // 0x50
	float Level; // 0x70
	float AbilityLevel; // 0x74
};

struct FMovieScene2DTransformSectionTemplate {
	FMovieSceneFloatChannel Translation[0x2]; // 0x48
	FMovieSceneFloatChannel Rotation; // 0x188
	FMovieSceneFloatChannel Scale[0x2]; // 0x228
	FMovieSceneFloatChannel Shear[0x2]; // 0x368
	EMovieSceneBlendType BlendType; // 0x4a8
	FMovieScene2DTransformMask mask; // 0x4ac
};

struct FClientGetPlayFabIDsFromGameCenterIDsRequest {
	FString GameCenterIDs; // 0x8
};

struct FAdminGetDataReportResult {
	FString DownloadUrl; // 0x8
};

struct FGameplayAbilityActivationInfo {
	EGameplayAbilityActivationMode ActivationMode; // 0x0
	char bCanBeEndedByOtherInstance : 1; // 0x1
	FPredictionKey PredictionKeyWhenActivated; // 0x8
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	AActor* ActorToTrack; // 0x8
};

struct FClientRegisterForIOSPushNotificationResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCloudScriptExecuteEntityCloudScriptRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x29
	int SpecificRevision; // 0x2c
};

struct FServerUnlinkServerCustomIdRequest {
	FString PlayFabId; // 0x8
	FString ServerCustomId; // 0x18
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

struct FGroupsCreateGroupResponse {
	FString AdminRoleId; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
	int ProfileVersion; // 0x50
	UPlayFabJsonObject* Roles; // 0x58
};

struct FSSGS_TactileEffectCustom {
	int length_ms; // 0x8
	int delay_ms; // 0xc
};

struct FVirtualTextureSpacePoolConfig {
	int SizeInMegabyte; // 0x0
	int TileSize; // 0x4
	EPixelFormat Format; // 0x8
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FSQBitFlag {
	int Flags; // 0x0
};

struct FServerGetPlayerTagsRequest {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
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

struct FDeployableItemsArray {
	TArray<FDeployableItem> Items; // 0x108
};

struct FSQDrawChatStruct {
	FVector2D RenderPosition; // 0x0
	FText Text; // 0x8
	FLinearColor Color; // 0x20
	FSQMessageBoxInfo Info; // 0x30
	int Index; // 0xa8
};

struct FAnimNode_BlendSpacePlayer {
	float X; // 0x30
	float Y; // 0x34
	float Z; // 0x38
	float PlayRate; // 0x3c
	bool bLoop; // 0x40
	bool bResetPlayTimeWhenBlendSpaceChanges; // 0x41
	float StartPosition; // 0x44
	UBlendSpaceBase* BlendSpace; // 0x48
	UBlendSpaceBase* PreviousBlendSpace; // 0xd8
};

struct FServerLoginWithXboxIdRequest {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString Sandbox; // 0x18
	FString XboxId; // 0x28
};

struct FClientReportPlayerClientRequest {
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5d0
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FPlayFabLoginResultCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
};

struct FGeometryCollectionSizeSpecificData {
	float MaxSize; // 0x0
	ECollisionTypeEnum CollisionType; // 0x4
	EImplicitTypeEnum ImplicitType; // 0x5
	int MinLevelSetResolution; // 0x8
	int MaxLevelSetResolution; // 0xc
	int MinClusterLevelSetResolution; // 0x10
	int MaxClusterLevelSetResolution; // 0x14
	int CollisionObjectReductionPercentage; // 0x18
	float CollisionParticlesFraction; // 0x1c
	int MaximumCollisionParticles; // 0x20
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
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

struct FClientLoginWithWindowsHelloRequest {
	FString ChallengeSignature; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString PublicKeyHint; // 0x20
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

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0xe8
	char bHasOverrideSources : 1; // 0xe8
	char bIsAdditiveVelocityApplied : 1; // 0xe8
	FRootMotionSourceSettings LastAccumulatedSettings; // 0xe9
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0xec
};

struct FGenericStruct {
	int Data; // 0x0
};

struct FTriangleID {
	int IDValue; // 0x0
};

struct FReplicatedPredictionKeyMap {
	TArray<FReplicatedPredictionKeyItem> PredictionKeys; // 0x108
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FSQMovePostPhysicsTickFunction {
	USQPawnMovementComponent* Target; // 0x50
};

struct FAnimNode_SubInstance {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
};

struct FMultiplayerGetMultiplayerServerDetailsRequest {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString SessionId; // 0x28
};

struct FAnimSetMeshLinkup {
	TArray<int> BoneToTrackTable; // 0x0
};

struct FClientExecuteCloudScriptRequest {
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	ECloudScriptRevisionOption RevisionSelection; // 0x21
	int SpecificRevision; // 0x24
};

struct FClientGetLeaderboardResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int Version; // 0x28
};

struct FClientGetPlayFabIDsFromKongregateIDsRequest {
	FString KongregateIDs; // 0x8
};

struct FAdminGetPlayedTitleListRequest {
	FString PlayFabId; // 0x8
};

struct FMultiplayerListContainerImageTagsRequest {
	FString ImageName; // 0x8
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
	int TexturePageWidth; // 0x78
	int TexturePageMaxHeight; // 0x7c
	int XPadding; // 0x80
	int YPadding; // 0x84
	int ExtendBoxTop; // 0x88
	int ExtendBoxBottom; // 0x8c
	int ExtendBoxRight; // 0x90
	int ExtendBoxLeft; // 0x94
	char bEnableLegacyMode : 1; // 0x98
	int Kerning; // 0x9c
	char bUseDistanceFieldAlpha : 1; // 0xa0
	int DistanceFieldScaleFactor; // 0xa4
	float DistanceFieldScanRadiusScale; // 0xa8
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FAdminAddUserVirtualCurrencyRequest {
	int Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FClientGetCatalogItemsResult {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FMovieScene3DScaleKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FPointDamageEvent {
	float damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FSQWeaponData {
	bool bInfiniteAmmo; // 0x0
	bool bInfiniteMags; // 0x1
	int MaxMags; // 0x4
	int RoundsPerMag; // 0x8
	bool bAllowRoundInChamber; // 0xc
	bool bAllowSingleLoad; // 0xd
	TArray<int> Firemodes; // 0x10
	float TimeBetweenShots; // 0x20
	float TimeBetweenSingleShots; // 0x24
	bool bCanReloadWhenEquipping; // 0x28
	bool bCreateProjectileOnServer; // 0x29
	float TacticalReloadDuration; // 0x2c
	float DryReloadDuration; // 0x30
	float TacticalReloadBipodDuration; // 0x34
	float ReloadDryBipodDuration; // 0x38
	float ZoomDuration; // 0x3c
	float ADSPostTransitionRatio; // 0x40
	bool bAllowZoom; // 0x44
	bool bAverageFireRate; // 0x45
	bool bResetBurstOnTriggerRelease; // 0x46
	ASQProjectile* ProjectileClass; // 0x48
	int RoundsBetweenTracer; // 0x50
	ASQProjectile* TracerProjectileClass; // 0x58
	float MuzzleVelocity; // 0x60
	float MaxDamageToApply; // 0x64
	float TimeToStartDamageFallOff; // 0x68
	float DistanceToStartDamageFallOff; // 0x6c
	float DamageFallOffRate; // 0x70
	float MinDamageToApply; // 0x74
	UCurveFloat* DamageFalloffCurve; // 0x78
	bool bIsBarrelSocketOnSoldier; // 0x80
	FName BarrelSocketName; // 0x84
	float MOA; // 0x8c
	float MaximumTraceDistance; // 0x90
	float WallHackCheckTraceDistance; // 0x94
	float ProjectileCameraRelativeOffsetMultiplier; // 0x98
	bool bMagMustBeEmptyForVehicleRearm; // 0x9c
	bool bRearmOnlyIfCurrentMagazineIsEmpty; // 0x9d
	bool bRearmCanFillCurrentMagazine; // 0x9e
	float MinimumTimeBetweenRearms; // 0xa0
	bool bRearmOnlyOneMagazine; // 0xa4
	bool bRearmOnlyXRoundsOfAmmo; // 0xa5
	int RearmRoundsOfAmmoPerRearm; // 0xa8
	int ArmorPenetrationDepthMillimeters; // 0xac
	UCurveFloat* ArmorPenetrationDepthCurve; // 0xb0
	float TraceDistanceAfterPenetrationMeters; // 0xb8
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FServerRegisterGameResponse {
	FString LobbyId; // 0x8
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FMovieScene3DTransformTemplateData {
	FMovieSceneFloatChannel TranslationCurve[0x3]; // 0x0
	FMovieSceneFloatChannel RotationCurve[0x3]; // 0x1e0
	FMovieSceneFloatChannel ScaleCurve[0x3]; // 0x3c0
	FMovieSceneFloatChannel ManualWeight; // 0x5a0
	EMovieSceneBlendType BlendType; // 0x640
	FMovieSceneTransformMask mask; // 0x644
	bool bUseQuaternionInterpolation; // 0x648
};

struct FAdminCreateOpenIdConnectionRequest {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
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

struct FAnimNode_ApplyAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float Alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int LODThreshold; // 0x3c
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x40
	FName AlphaCurveName; // 0x88
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x90
	EAnimAlphaInputType AlphaInputType; // 0xc4
	bool bAlphaBoolEnabled; // 0xc5
};

struct FMovieScene3DRotationKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FTagContainerAggregator {
	FGameplayTagContainer CapturedActorTags; // 0x0
	FGameplayTagContainer CapturedSpecTags; // 0x20
	FGameplayTagContainer ScopedTags; // 0x40
};

struct FWorldReticleParameters {
	FVector AOEScale; // 0x0
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FStaticComponentMaskParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool R; // 0x10
	bool G; // 0x11
	bool B; // 0x12
	bool A; // 0x13
	bool bOverride; // 0x14
	FGuid ExpressionGUID; // 0x18
};

struct FSQMagazineData {
	int DefaultRoundsPerMag; // 0x0
	int RemainingRounds; // 0x4
};

struct FClientGetPlayerCombinedInfoResult {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FAdminGetPolicyRequest {
	FString PolicyName; // 0x8
};

struct FClientLoginWithEmailAddressRequest {
	FString Email; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString Password; // 0x20
};

struct FEventsWriteEventsRequest {
	TArray<UPlayFabJsonObject*> Events; // 0x8
};

struct FServerAddSharedGroupMembersRequest {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FAdminGetCloudScriptRevisionRequest {
	int Revision; // 0x8
	int Version; // 0xc
};

struct FAnimNode_HandIKRetargeting {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FMovieScenePrimitiveMaterialTemplate {
	int MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FMovieSceneFadeSectionTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FSQRoute {
	TArray<FSQGraphLink> Links; // 0x0
	USQCaptureZoneComponent* Source; // 0x10
	USQCaptureZoneComponent* Destination; // 0x18
};

struct FUserPlatform {
	FString PlatformStr; // 0x0
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int EventGraphCallOffset; // 0x8
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FGameplayTagRequirements {
	FGameplayTagContainer RequireTags; // 0x0
	FGameplayTagContainer IgnoreTags; // 0x20
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FCameraTrackingFocusSettings {
	AActor* ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FAbilityTaskDebugMessage {
	UGameplayTask* FromTask; // 0x0
	FString Message; // 0x8
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

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FMultiplayerListContainerImagesResponse {
	FString Images; // 0x8
	int PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FClientUnlinkPSNAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAIDataProviderIntValue {
	int DefaultValue; // 0x28
};

struct FServerRefreshGameServerInstanceHeartbeatResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClothCollisionPrim_Sphere {
	int BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FAnimNode_PoseDriver {
	FPoseLink SourcePose; // 0x78
	TArray<FBoneReference> SourceBones; // 0x88
	TArray<FBoneReference> OnlyDriveBones; // 0x98
	TArray<FPoseDriverTarget> PoseTargets; // 0xa8
	FBoneReference EvalSpaceBone; // 0xe8
	FRBFParams RBFParams; // 0xf8
	EPoseDriverSource DriveSource; // 0x120
	EPoseDriverOutput DriveOutput; // 0x121
	char bOnlyDriveSelectedBones : 1; // 0x122
};

struct FSQRemoteGameConfig {
	bool bLicensingEnabled; // 0x0
	bool bServerHealthEnabled; // 0x1
	float ServerHealthHigh; // 0x4
	float ServerHealthLow; // 0x8
	bool bModdedServersOnTop; // 0xc
};

struct FSimpleCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FSQRotationRepMovement {
	FVector LocationZeroBased; // 0x8
	FVector Velocity; // 0x14
	FRotator Rotation; // 0x20
	FVector RotationalVelocity; // 0x2c
	float ServerTimestamp; // 0x38
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

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
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

struct FAnimNode_CopyPoseFromMesh {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	bool bUseAttachedParent; // 0x18
	bool bCopyCurves; // 0x19
};

struct FSQDamageEffect {
	UDamageType* DamageTypeClass; // 0x0
	TArray<FSQEffectParticleSound> Effects; // 0x8
};

struct FClientLinkNintendoSwitchDeviceIdRequest {
	bool ForceLink; // 0x8
	FString NintendoSwitchDeviceId; // 0x10
};

struct FVehicleTankEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FAdminRemovePlayerTagRequest {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FMovieSceneActorReferenceSectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x48
};

struct FStructSerializerNumericTestStruct {
	uint8 Int8; // 0x0
	int16 Int16; // 0x2
	int Int32; // 0x4
	int64 Int64; // 0x8
	char UInt8; // 0x10
	uint16 UInt16; // 0x12
	uint32 UInt32; // 0x14
	uint64 UInt64; // 0x18
	float Float; // 0x20
	double Double; // 0x28
};

struct FServerGetPlayFabIDsFromFacebookIDsRequest {
	FString FacebookIDs; // 0x8
};

struct FS_FOBRadius {
	float FOBExclusionRadius_4_DBB2C67F427F88E0A656F9895441FA5C; // 0x0
	float FOBConstructionRadius_6_A39C8AC44E62DCD8EC5ADBAA78B9C121; // 0x4
};

struct FAdminUpdateUserDataRequest {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FSSGS_FrameDataImage {
	TArray<char> ImageData; // 0x8
	FSSGS_FrameModifiers frameModifiers; // 0x18
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueID; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FRichCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FSQStaticMapMarkerArray {
	TArray<FSQMapMarkerFastArraySerializerItem> Items; // 0x108
	TArray<int> ModifiedMarkerIndices; // 0x118
	FScriptMulticastDelegate MapMarkerCreatedEvent; // 0x128
	FScriptMulticastDelegate MapMarkerDeletedEvent; // 0x138
};

struct FServerGetLeaderboardResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int Version; // 0x28
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FSQCachedAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
	FName InstanceName; // 0x10
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FSQDeployableChangeStateEffect {
	ESQBuildState OldBuildState; // 0x0
	ESQBuildState NewBuildState; // 0x1
	float CullingDistanceInMeters; // 0x4
	FSQEffectParticleSound Effect; // 0x8
};

struct FSQPhysMatVehicleFXData {
	float Asphalt; // 0x0
	float Dirt; // 0x4
	float Grass; // 0x8
	float Gravel; // 0xc
	float Metal; // 0x10
	float Mud; // 0x14
	float Sand; // 0x18
	float Snow; // 0x1c
	float SnowWet; // 0x20
	float TallGrass; // 0x24
	float Water; // 0x28
	float Wood; // 0x2c
	FLinearColor DustColor; // 0x30
	float DustLifetime; // 0x40
	FVector DustSize; // 0x44
	FLinearColor DebrisColor; // 0x50
	float DebrisSpawnRate; // 0x60
};

struct FTileThumbDatabase {
	UTexture* TileTexture; // 0x0
	FName TileName; // 0x8
};

struct FAnimNode_MakeDynamicAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FGameplayCueParameters {
	float NormalizedMagnitude; // 0x0
	float RawMagnitude; // 0x4
	FGameplayEffectContextHandle EffectContext; // 0x8
	FGameplayTag MatchedTagName; // 0x20
	FGameplayTag OriginalTag; // 0x28
	FGameplayTagContainer AggregatedSourceTags; // 0x30
	FGameplayTagContainer AggregatedTargetTags; // 0x50
	FVector_NetQuantize10 Location; // 0x70
	FVector_NetQuantizeNormal Normal; // 0x7c
	TWeakObjectPtr<AActor> Instigator; // 0x88
	TWeakObjectPtr<AActor> EffectCauser; // 0x90
	TWeakObjectPtr<UObject> SourceObject; // 0x98
	TWeakObjectPtr<UPhysicalMaterial> PhysicalMaterial; // 0xa0
	int GameplayEffectLevel; // 0xa8
	int AbilityLevel; // 0xac
	TWeakObjectPtr<USceneComponent> TargetAttachComponent; // 0xb0
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int TestTimer; // 0x18
};

struct FClientUnlinkCustomIDRequest {
	FString CustomId; // 0x8
};

struct FMultiplayerUploadCertificateRequest {
	UPlayFabJsonObject* GameCertificate; // 0x8
};

struct FSQClimbData {
	float MinHeight; // 0x0
	FSQClimbOverData OverData; // 0x8
	FSQClimbOntoData OntoData; // 0xa8
	float MinMoveToStartSpeed; // 0x150
	float SearchDistance; // 0x154
	float MaxClimbableAngle; // 0x158
	float PitchCorrectionTime; // 0x15c
	float PitchCorrectionMidPoint; // 0x160
	float CielingNormalTollerance; // 0x164
	float OverlapDetectionScale; // 0x168
	float ActorLocationAcceptanceDistance; // 0x16c
	float ServerAcceptanceDistance; // 0x170
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
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

struct FSQSpringInterpStruct3D {
	FVector Position; // 0x0
	FVector Damping; // 0xc
	FVector MinLimits; // 0x18
	FVector MaxLimits; // 0x24
};

struct FAnimNode_PoseByName {
	FName PoseName; // 0x78
	float PoseWeight; // 0x80
};

struct FAdminRevokeInventoryItemRequest {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FFloatDistribution {
	FDistributionLookupTable table; // 0x0
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FAdminRevokeBansRequest {
	FString BanIds; // 0x8
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FMultiplayerEmptyResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FAdminRevokeInventoryItemsResult {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FSQGameModeRules {
	ESQTeam Team; // 0x0
	TArray<FText> Rules; // 0x8
};

struct FAdminAddServerBuildRequest {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int MaxGamesPerHost; // 0x58
	int MinFreeGameSlots; // 0x5c
};

struct FAuthenticationGetEntityTokenResponse {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityToken; // 0x10
	FString TokenExpiration; // 0x20
};

struct FProgressBarStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FServerSendPushNotificationFromTemplateRequest {
	FString PushNotificationTemplateId; // 0x8
	FString Recipient; // 0x18
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FAdminRemoveServerBuildResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetPlayerTradesResponse {
	TArray<UPlayFabJsonObject*> AcceptedTrades; // 0x8
	TArray<UPlayFabJsonObject*> OpenedTrades; // 0x18
};

struct FMovieSceneEditorData {
	TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x0
	double ViewStart; // 0x50
	double ViewEnd; // 0x58
	double WorkStart; // 0x60
	double WorkEnd; // 0x68
	TSet<FFrameNumber> MarkedFrames; // 0x70
	FFloatRange WorkingRange; // 0xc0
	FFloatRange ViewRange; // 0xd0
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FQosPingServerInfo {
	FString address; // 0x0
	int Port; // 0x10
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FClientLinkIOSDeviceIDRequest {
	FString DeviceID; // 0x8
	FString DeviceModel; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FClientLinkXboxAccountRequest {
	bool ForceLink; // 0x8
	FString XboxToken; // 0x10
};

struct FClientListUsersCharactersResult {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FServerRevokeInventoryItemsResult {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FAnimNode_BlendListBase {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	EAlphaBlendOption BlendType; // 0x30
	bool bResetChildOnActivation; // 0x31
	UCurveFloat* CustomBlendCurve; // 0x38
	UBlendProfile* BlendProfile; // 0x40
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FServerBanUsersResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientAcceptTradeRequest {
	FString AcceptedInventoryInstanceIds; // 0x8
	FString OfferingPlayerId; // 0x18
	FString TradeId; // 0x28
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
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

struct FSQAnnouncement {
	FString Title; // 0x0
	FString Link; // 0x10
	FString Body; // 0x20
	FString HeaderLink; // 0x30
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int GroupSortPriority; // 0x10
};

struct FClientGetPlayerTagsResult {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FGroupsBlockEntityRequest {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FServerUnlinkXboxAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FModifierSpec {
	float EvaluatedMagnitude; // 0x0
};

struct FAdminAddNewsRequest {
	FString Body; // 0x8
	FString Timestamp; // 0x18
	FString Title; // 0x28
};

struct FRecordedFrame {
	TArray<FTransform> Transforms; // 0x0
	TArray<int> TransformIndices; // 0x10
	TArray<int> PreviousTransformIndices; // 0x20
	TArray<bool> DisabledFlags; // 0x30
	TArray<FSolverCollisionData> Collisions; // 0x40
	TArray<FSolverBreakingData> Breakings; // 0x50
	TSet<FSolverTrailingData> Trailings; // 0x60
	float Timestamp; // 0xb0
};

struct FAdminBlankResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int LastChild; // 0x1c
	int FirstInstance; // 0x20
	int LastInstance; // 0x24
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FSQDraggingData {
	ASQSoldier* Dragee; // 0x0
	ASQSoldier* Dragger; // 0x8
	int DraggedBoneIndex; // 0x10
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

struct FClientUnlinkTwitchAccountRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientOpenTradeResponse {
	UPlayFabJsonObject* Trade; // 0x8
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
	DelegateProperty TimelinePostUpdateFunc; // 0x50
	DelegateProperty TimelineFinishedFunc; // 0x60
	TWeakObjectPtr<UObject> PropertySetObject; // 0x70
	FName DirectionPropertyName; // 0x78
	UProperty* DirectionProperty; // 0x90
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FServerUnlinkPSNAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerUnlockContainerInstanceRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
	FString PlayFabId; // 0x48
};

struct FServerSendCustomAccountRecoveryEmailResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int ParticleIndex; // 0x28
};

struct FSQMapMarkerVisualData {
	UTexture2D* Texture; // 0x0
	ESQMapIconSelectionGroup SelectionGroup; // 0x8
	UTexture2D* SelectedTexture; // 0x10
	FLinearColor SelectedTint; // 0x18
	ESQMapMarkerType MapMarkerType; // 0x28
	ESQMapWidgetTint MapMarkerTintType; // 0x29
	ESQMapMarkerVisibleTo MapMarkerVisibleTo; // 0x2a
	ESQMapItemType Type; // 0x2b
	bool bVisibleWhenNeutral; // 0x2c
	ESQEmotes PlacementEmote; // 0x2d
	float Lifetime; // 0x30
	float FadeOutTime; // 0x34
	bool bShouldOverrideTint; // 0x38
	FLinearColor OverrideTint; // 0x3c
	FLinearColor Tint; // 0x4c
	float Rotation; // 0x5c
	FVector2D RotPivot; // 0x60
	FVector2D Size; // 0x68
	FVector2D Offset; // 0x70
	int ZOrder; // 0x78
	ESQMapItemDrawMode DrawModeX; // 0x7c
	ESQMapItemDrawMode DrawModeY; // 0x7d
	FSQMapMarkerGameplayData MarkerGameplayData; // 0x88
	USQMapMarkerBase* WidgetClass; // 0xc0
};

struct FServerDeletePushNotificationTemplateRequest {
	FString PushNotificationTemplateId; // 0x8
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int FrameNumber; // 0x8
	int NumDroppedFrames; // 0xc
};

struct FMultiplayerGetMultiplayerServerLogsResponse {
	FString LogDownloadUrl; // 0x8
};

struct FSQWeaponGroupDataArray {
	TArray<FSQWeaponGroupData> Items; // 0x108
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

struct FHyperlinkStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4e8
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FCustomCalculationBasedFloat {
	UGameplayModMagnitudeCalculation* CalculationClassMagnitude; // 0x0
	FScalableFloat Coefficient; // 0x8
	FScalableFloat PreMultiplyAdditiveValue; // 0x28
	FScalableFloat PostMultiplyAdditiveValue; // 0x48
	FCurveTableRowHandle FinalLookupCurve; // 0x68
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FMTDResult {
	FVector Direction; // 0x0
	float distance; // 0xc
};

struct FChildActorComponentInstanceData {
	FName ChildActorName; // 0xa8
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xb0
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FAtmospherePrecomputeParameters {
	float DensityHeight; // 0x0
	float DecayHeight; // 0x4
	int MaxScatteringOrder; // 0x8
	int TransmittanceTexWidth; // 0xc
	int TransmittanceTexHeight; // 0x10
	int IrradianceTexWidth; // 0x14
	int IrradianceTexHeight; // 0x18
	int InscatterAltitudeSampleNum; // 0x1c
	int InscatterMuNum; // 0x20
	int InscatterMuSNum; // 0x24
	int InscatterNuNum; // 0x28
};

struct FClientGetAccountInfoRequest {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString username; // 0x38
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

struct FClientLoginWithPSNRequest {
	FString AuthCode; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	int IssuerId; // 0x38
	FString PlayerSecret; // 0x40
	FString RedirectUri; // 0x50
};

struct FClientLinkPSNAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
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

struct FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int CurveTypeFlags; // 0x14
};

struct FSQFactionGameModeSounds {
	USoundCue* AttackerCue_2_8CEEDA4A43116E8679EC63B5A8BDA448; // 0x0
	USoundCue* DefenderCue_7_AFAEE0D84A23631C0D42E7910174FD52; // 0x28
	USoundCue* OtherCue_8_B8CF01914B7ABCDEDAD53DB45785EED5; // 0x50
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FAdminModifyServerBuildRequest {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int MaxGamesPerHost; // 0x58
	int MinFreeGameSlots; // 0x5c
	FString Timestamp; // 0x60
};

struct FMovieSceneEventTriggerTemplate {
	TArray<FFrameNumber> EventTimes; // 0x38
	TArray<FName> EventFunctions; // 0x48
};

struct FPreviewMeshCollectionEntry {
	USkeletalMesh* SkeletalMesh; // 0x0
};

struct FAdminSetupPushNotificationResult {
	FString ARN; // 0x8
};

struct FAnimNode_Root {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FSQModInfo {
	uint64 ID; // 0x0
	FString Name; // 0x8
	FString Description; // 0x18
	FString ImageUrl; // 0x28
	FString ClientMD5; // 0x38
	bool bIsWhitelisted; // 0x48
	bool bIsLoaded; // 0x49
	bool bIsSteamPublished; // 0x4a
	bool bHasBeenFilled; // 0x4b
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FMultiplayerGetMatchmakingTicketRequest {
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FSQClimbOntoData {
	FSQClimbOntoTypeData Low; // 0x0
	FSQClimbOntoTypeData Mid; // 0x38
	FSQClimbOntoTypeData High; // 0x70
};

struct FMeshTriangle {
	FVertexInstanceID VertexInstanceID0; // 0x0
	FVertexInstanceID VertexInstanceID1; // 0x4
	FVertexInstanceID VertexInstanceID2; // 0x8
};

struct FAdminCheckLimitedEditionItemAvailabilityRequest {
	FString CatalogVersion; // 0x8
	FString ItemId; // 0x18
};

struct FGroupsApplyToGroupResponse {
	UPlayFabJsonObject* Entity; // 0x8
	FString Expires; // 0x10
	UPlayFabJsonObject* Group; // 0x20
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
	int ParticleIndex; // 0x5c
	int LevelsetIndex; // 0x60
	int ParticleIndexMesh; // 0x64
	int LevelsetIndexMesh; // 0x68
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FMovieSceneMarginSectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x48
	FMovieSceneFloatChannel LeftCurve; // 0xe8
	FMovieSceneFloatChannel RightCurve; // 0x188
	FMovieSceneFloatChannel BottomCurve; // 0x228
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FAnimNode_ModifyCurve {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FServerListUsersCharactersResult {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FStaticTerrainLayerWeightParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
	int WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FAdminSubtractUserVirtualCurrencyRequest {
	int Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FClientValidateAmazonReceiptRequest {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int PurchasePrice; // 0x28
	FString ReceiptId; // 0x30
	FString userId; // 0x40
};

struct FMultiplayerGetAssetUploadUrlRequest {
	FString Filename; // 0x8
};

struct FAdminRefundPurchaseRequest {
	FString OrderId; // 0x8
	FString PlayFabId; // 0x18
	FString Reason; // 0x28
};

struct FPlane {
	float W; // 0xc
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> Colormap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FChaosBreakingEventRequestSettings {
	int MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
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

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FRawDistribution {
	FDistributionLookupTable table; // 0x0
};

struct FAdminUpdateStoreItemsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSQSessionFlagStruct {
	int ServerHealth; // 0x0
	char bIsAnticheatProtected : 1; // 0x4
};

struct FProfilesGetEntityProfilesRequest {
	bool DataAsObject; // 0x8
	TArray<UPlayFabJsonObject*> Entities; // 0x10
};

struct FGroupsUnblockEntityRequest {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientGetPlayFabIDsFromPSNAccountIDsRequest {
	int IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FMovieSceneBoolChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32 PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
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
	FVector2D OffCenterProjectionOffset; // 0x570
};

struct FSQButtonStyle {
	bool bUseStyling; // 0x0
	bool bUseImageStyling; // 0x1
	UTexture2D* NormalImage; // 0x8
	UTexture2D* HoveredImage; // 0x10
	UTexture2D* PressedImage; // 0x18
	UTexture2D* DisabledImage; // 0x20
	bool bUseTintStyling; // 0x28
	bool bUseColorBlending; // 0x29
	FLinearColor NormalTint; // 0x2c
	FLinearColor HoveredTint; // 0x3c
	FLinearColor PressedTint; // 0x4c
	FLinearColor DisabledTint; // 0x5c
	USoundCue* PressedSoundCue; // 0x70
	USoundCue* HoveredSoundCue; // 0x78
};

struct FSSGS_MultiEventUpdate {
	FString Game; // 0x8
	TArray<FSSGS_EventUpdate> _events; // 0x18
};

struct FMultiplayerRolloverContainerRegistryCredentialsResponse {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString username; // 0x28
};

struct FSQCameraShake {
	UCameraShake* Shake; // 0x8
	float InnerRadius; // 0x10
	float OuterRadius; // 0x14
	float Falloff; // 0x18
	bool bOrientShakeTowardsEpicenter; // 0x1c
};

struct FSQWeaponSounds {
	USoundCue* FireSound1P; // 0x0
	USoundCue* FireSound3P; // 0x8
	USoundCue* ReloadSound1P; // 0x10
	USoundCue* ReloadSound3P; // 0x18
	USoundCue* DryReloadSound1P; // 0x20
	USoundCue* DryReloadSound3P; // 0x28
	USoundCue* EquipSound1P; // 0x30
	USoundCue* EquipSound3P; // 0x38
	USoundCue* UnequipSound1P; // 0x40
	USoundCue* UnequipSound3P; // 0x48
	USoundCue* TriggerSound1P; // 0x50
	USoundCue* TriggerSound3P; // 0x58
	USoundCue* BoltSound1P; // 0x60
	USoundCue* BoltSound3P; // 0x68
	USoundCue* ToggleFiremodeSound1P; // 0x70
	USoundCue* ToggleFiremodeSound3P; // 0x78
	FName SoundSocket; // 0x80
};

struct FMultiplayerListContainerImagesRequest {
	int PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FAdminGrantItemsToUsersRequest {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FClientLinkTwitchAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerListMultiplayerServersResponse {
	TArray<UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x8
	int PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FServerAuthenticateSessionTicketResult {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FAdminCreatePlayerSharedSecretRequest {
	FString FriendlyName; // 0x8
};

struct FServerRevokeInventoryItemsRequest {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FAdminCreatePlayerSharedSecretResult {
	FString SecretKey; // 0x8
};

struct FScalableFloat {
	float Value; // 0x0
	FCurveTableRowHandle Curve; // 0x8
};

struct FClientConfirmPurchaseRequest {
	FString OrderId; // 0x8
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionId; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FSQHealSettings {
	int TicketsLostOnRevive; // 0x0
	int TicketsLostOnHeal; // 0x4
	int TicketsLostOnSelfHeal; // 0x8
	float PointsForHeal; // 0xc
	float PointsForSelfHeal; // 0x10
	float TeamPointsForRevive; // 0x14
	float TeamPointsForHeal; // 0x18
	float TeamPointsForSelfHeal; // 0x1c
	bool DelayHealScore; // 0x20
	bool DelaySelfHealScore; // 0x21
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FClientLinkSteamAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetLeaderboardAroundCharacterRequest {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int MaxResultsCount; // 0x28
	FString StatisticName; // 0x30
};

struct FTextureMaterial {
	FName TileName; // 0x0
	UTexture* TileTexture; // 0x8
};

struct FActiveGameplayCue {
	FGameplayTag GameplayCueTag; // 0xc
	FPredictionKey PredictionKey; // 0x18
	FGameplayCueParameters Parameters; // 0x30
	bool bPredictivelyRemoved; // 0xe8
};

struct FAdminUpdateUserTitleDisplayNameRequest {
	FString DisplayName; // 0x8
	FString PlayFabId; // 0x18
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

struct FServerGetTitleDataRequest {
	FString Keys; // 0x8
};

struct FPrefabVariantRule {
	FName Scope; // 0x0
	FString Rule; // 0x8
	EPrefabVariantRuleType RuleType; // 0x18
	bool bEnable; // 0x19
};

struct FClothConfig {
	EClothingWindMethod WindMethod; // 0x0
	FClothConstraintSetup VerticalConstraintConfig; // 0x4
	FClothConstraintSetup HorizontalConstraintConfig; // 0x14
	FClothConstraintSetup BendConstraintConfig; // 0x24
	FClothConstraintSetup ShearConstraintConfig; // 0x34
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

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FClientGetPlayerTradesRequest {
	ETradeStatus StatusFilter; // 0x8
};

struct FLandscapeEditToolRenderData {
	UMaterialInterface* ToolMaterial; // 0x0
	UMaterialInterface* GizmoMaterial; // 0x8
	int SelectedType; // 0x10
	int DebugChannelR; // 0x14
	int DebugChannelG; // 0x18
	int DebugChannelB; // 0x1c
	UTexture2D* DataTexture; // 0x20
	UTexture2D* LayerContributionTexture; // 0x28
};

struct FClientLoginWithSteamRequest {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString SteamTicket; // 0x38
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FProfilesSetProfileLanguageResponse {
	EOperationTypes OperationResult; // 0x8
	int VersionNumber; // 0xc
};

struct FMovieSceneSequenceID {
	uint32 Value; // 0x0
};

struct FClientUpdatePlayerStatisticsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FServerGetFriendsListResult {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FMovieSceneEventChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FSQActionParameters {
	FTransform Position; // 0x0
	float distance; // 0x30
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FSQSettingsRestriction {
	FString Setting; // 0x0
	float Min; // 0x10
	float Max; // 0x14
};

struct FKTaperedCapsuleElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FSSGS_ColorGradient {
	FSSGS_Gradient Gradient; // 0x0
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FRootMotionSource_JumpForce {
	FRotator Rotation; // 0x98
	float distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FSessionServicePing {
	FString username; // 0x0
};

struct FMatchmakerPlayerLeftRequest {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FEditableTextStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x58
	FSlateBrush BackgroundImageSelected; // 0x80
	FSlateBrush BackgroundImageComposing; // 0x108
	FSlateBrush CaretImage; // 0x190
};

struct FClientGetPlayFabIDsFromXboxLiveIDsRequest {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FSQRoute2 {
	TSet<FSQGraphLink> Links; // 0x0
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FGameplayCuePendingExecute {
	FPredictionKey PredictionKey; // 0x18
	EGameplayCuePayloadType PayloadType; // 0x30
	UAbilitySystemComponent* OwningComponent; // 0x38
	FGameplayEffectSpecForRPC FromSpec; // 0x40
	FGameplayCueParameters CueParameters; // 0xb8
};

struct FSQServerSlot {
	ASQJoinBeaconClient* ClientBeacon; // 0x20
};

struct FServerUpdateCharacterStatisticsRequest {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FAdminGetPolicyResponse {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FMultiplayerListServerBackfillTicketsForPlayerResult {
	FString TicketIds; // 0x8
};

struct FVectorCurve {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FMatchmakerStartGameRequest {
	FString Build; // 0x8
	FString CustomCommandLineData; // 0x18
	FString ExternalMatchmakerEventEndpoint; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
};

struct FAdminResetCharacterStatisticsRequest {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerUnlinkPSNAccountRequest {
	FString PlayFabId; // 0x8
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FAnimNode_ApplyMeshSpaceAdditive {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float Alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int LODThreshold; // 0x3c
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FTextureScalar {
	FName ParameterName; // 0x0
	float DefaultValue; // 0x8
	bool ValueChangesOnTime; // 0xc
	float MaxValue; // 0x10
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FAnimationState {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int StateRootNodeIndex; // 0x18
	int StartNotify; // 0x1c
	int EndNotify; // 0x20
	int FullyBlendedNotify; // 0x24
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

struct FDataGetFilesRequest {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FSQEngineMovementSoundObject {
	USoundCue* EngineSound; // 0x0
	int Gear; // 0x8
	bool bIsAcceleratingSound; // 0xc
	FName AttachBoneName; // 0x10
	float FadeOutTime; // 0x18
	float FadeOutEndVolume; // 0x1c
	UAudioComponent* AudioComponent; // 0x20
};

struct FGameplayCueTranslationLink {
	UGameplayCueTranslator* RulesCDO; // 0x0
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FClientStartPurchaseResult {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	FString OrderId; // 0x18
	TArray<UPlayFabJsonObject*> PaymentOptions; // 0x28
	UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38
};

struct FGroupsListMembershipResponse {
	TArray<UPlayFabJsonObject*> Groups; // 0x8
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FComboBoxStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3a8
	FSlateSound SelectionChangeSlateSound; // 0x3c0
};

struct FAdminModifyUserVirtualCurrencyResult {
	int Balance; // 0x8
	int BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FGeomComponentCacheParameters {
	EGeometryCollectionCacheType CacheMode; // 0x0
	UGeometryCollectionCache* TargetCache; // 0x8
	float ReverseCacheBeginTime; // 0x10
	bool SaveCollisionData; // 0x14
	bool DoGenerateCollisionData; // 0x15
	int CollisionDataSizeMax; // 0x18
	bool DoCollisionDataSpatialHash; // 0x1c
	float CollisionDataSpatialHashRadius; // 0x20
	int MaxCollisionPerCell; // 0x24
	bool SaveBreakingData; // 0x28
	bool DoGenerateBreakingData; // 0x29
	int BreakingDataSizeMax; // 0x2c
	bool DoBreakingDataSpatialHash; // 0x30
	float BreakingDataSpatialHashRadius; // 0x34
	int MaxBreakingPerCell; // 0x38
	bool SaveTrailingData; // 0x3c
	bool DoGenerateTrailingData; // 0x3d
	int TrailingDataSizeMax; // 0x40
	float TrailingMinSpeedThreshold; // 0x44
	float TrailingMinVolumeThreshold; // 0x48
};

struct FClientAcceptTradeResponse {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FClientGetPlayFabIDsFromPSNAccountIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAIDataProviderStructValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FSQCommanderSounds {
	USoundCue* CommanderVoteStarted; // 0x0
	USoundCue* CommanderVotePassedNormalSelf; // 0x28
	USoundCue* CommanderVotePassedNormalOthers; // 0x50
	USoundCue* CommanderVotePassedMutinySelf; // 0x78
	USoundCue* CommanderVotePassedMutinyOthers; // 0xa0
	USoundCue* RequestCommandReinforcements; // 0xc8
	USoundCue* CommanderReinforcementsApproved; // 0xf0
	USoundCue* CommanderReinforcementsDenied; // 0x118
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FSQMontageSectionNames {
	FName BeginSection; // 0x0
	FName LoopSection1; // 0x8
	FName LoopSection2; // 0x10
	FName EndSection; // 0x18
	FName MidEndSection; // 0x20
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float blendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FExpandableAreaStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FClientLinkPSNAccountRequest {
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int IssuerId; // 0x1c
	FString RedirectUri; // 0x20
};

struct FClientRegisterPlayFabUserRequest {
	FString DisplayName; // 0x8
	FString Email; // 0x18
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString Password; // 0x40
	FString PlayerSecret; // 0x50
	bool RequireBothUsernameAndEmail; // 0x60
	FString username; // 0x68
};

struct FServerDeletePlayerRequest {
	FString PlayFabId; // 0x8
};

struct FAdminGetPlayerStatisticVersionsRequest {
	FString StatisticName; // 0x8
};

struct FClientGetTitleDataRequest {
	FString Keys; // 0x8
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int> NodeNameToIndexMapping; // 0x20
};

struct FClientReportPlayerClientResult {
	int SubmissionsRemaining; // 0x8
};

struct FAdminDeleteStoreRequest {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FAdminUpdateCloudScriptResult {
	int Revision; // 0x8
	int Version; // 0xc
};

struct FStartPhysicsTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
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

struct FSQCommandActionData {
	USQGridData_CommandOption* CommandActionData; // 0x0
	float GameTimeAtCreation; // 0x8
	float CooldownTimeRemaining; // 0xc
	bool IsDestroyedDuringActive; // 0x10
};

struct FClientGetPlayerTagsRequest {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerGetTitleNewsResult {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FClientLinkTwitchAccountRequest {
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FAdminGetPlayersSegmentsRequest {
	FString PlayFabId; // 0x8
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FSSGS_GameInfo {
	FString Game; // 0x8
	FString gameDisplayName; // 0x18
	FString developer; // 0x28
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FQosRegionInfo {
	FText DisplayName; // 0x0
	FString RegionId; // 0x18
	bool bEnabled; // 0x28
	bool bVisible; // 0x29
	bool bAutoAssignable; // 0x2a
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

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FAdminGetStoreItemsRequest {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FMovieSceneTransformPropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
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

struct FServerDeleteCharacterFromUserResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneSectionParameters {
	FFrameNumber StartFrameOffset; // 0x0
	float TimeScale; // 0x4
	int HierarchicalBias; // 0x8
	float StartOffset; // 0xc
	float PrerollTime; // 0x10
	float PostrollTime; // 0x14
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FClientConsumeXboxEntitlementsRequest {
	FString CatalogVersion; // 0x8
	FString XboxToken; // 0x18
};

struct FServerSavePushNotificationTemplateResult {
	FString PushNotificationTemplateId; // 0x8
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FVehicleNWWheelDifferentialData {
	bool bDriven; // 0x0
};

struct FMultiplayerCreateBuildWithCustomContainerResponse {
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	EContainerFlavor ContainerFlavor; // 0x28
	FString ContainerRunCommand; // 0x30
	FString CreationTime; // 0x40
	UPlayFabJsonObject* CustomGameContainerImage; // 0x50
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x58
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x68
	UPlayFabJsonObject* MetaData; // 0x78
	int MultiplayerServerCountPerVm; // 0x80
	TArray<UPlayFabJsonObject*> Ports; // 0x88
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x98
	EAzureVmSize VmSize; // 0xa8
};

struct FGroupsDeleteRoleRequest {
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
};

struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18
	FFrameRate TickResolution; // 0x24
	FMovieSceneSequenceID DeterministicSequenceID; // 0x2c
	FMovieSceneFrameRange PlayRange; // 0x30
	FMovieSceneFrameRange PreRollRange; // 0x40
	FMovieSceneFrameRange PostRollRange; // 0x50
	int HierarchicalBias; // 0x60
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x68
	FGuid SubSectionSignature; // 0x88
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0x98
};

struct FInstancedStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xa8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0
	int InstancingRandomSeed; // 0x120
};

struct FClientStartGameRequest {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString CustomCommandLineData; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
	FString StatisticName; // 0x50
};

struct FFrameNumber {
	int Value; // 0x0
};

struct FServerGetPlayersSegmentsRequest {
	FString PlayFabId; // 0x8
};

struct FAdminGetPublisherDataRequest {
	FString Keys; // 0x8
};

struct FMovieSceneWidgetMaterialSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x50
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FClientGetTitleNewsRequest {
	int Count; // 0x8
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FAnimNode_CurveSource {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<Class> CurveSource; // 0x30
};

struct FGameplayEventData {
	FGameplayTag EventTag; // 0x0
	AActor* Instigator; // 0x8
	AActor* Target; // 0x10
	UObject* OptionalObject; // 0x18
	UObject* OptionalObject2; // 0x20
	FGameplayEffectContextHandle ContextHandle; // 0x28
	FGameplayTagContainer InstigatorTags; // 0x40
	FGameplayTagContainer TargetTags; // 0x60
	float EventMagnitude; // 0x80
	FGameplayAbilityTargetDataHandle TargetData; // 0x88
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	DelegateProperty OnComplete; // 0x4
	int CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FClientUnlinkXboxAccountRequest {
	FString XboxToken; // 0x8
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FMinimalReplicationTagCountMap {
	UAbilitySystemComponent* Owner; // 0x50
};

struct FStreamingLevelsToConsider {
	TArray<FLevelStreamingWrapper> StreamingLevels; // 0x0
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	DelegateProperty CustomDelegate; // 0x14
};

struct FClientPayForPurchaseRequest {
	FString Currency; // 0x8
	FString OrderId; // 0x18
	FString ProviderName; // 0x28
	FString ProviderTransactionId; // 0x38
};

struct FClientUnlinkIOSDeviceIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGfeSDKHighlightOpenGroupParams {
	FString GroupId; // 0x0
	TMap<FString, FString> GroupDescriptionTranslationTable; // 0x10
};

struct FSSGS_EventUpdate {
	FString Game; // 0x8
	FString EventName; // 0x18
	FSSGS_EventData Data; // 0x28
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FClientStartPurchaseRequest {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	FString StoreId; // 0x28
};

struct FClientGetSharedGroupDataResult {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FSQVehicleDestroyedConfig {
	UDamageType* DamageType; // 0x0
	ASQDestroyedVehicle* DestroyedVehicleClass; // 0x8
};

struct FAnimNode_AssetPlayerBase {
	int GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
};

struct FGroupsInviteToGroupRequest {
	bool AutoAcceptOutstandingApplication; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
};

struct FProfilesGetGlobalPolicyResponse {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FRegionQosInstance {
	FQosRegionInfo Definition; // 0x0
	TArray<FDatacenterQosInstance> DatacenterOptions; // 0x30
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FSubmixEffectReverbFastSettings {
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

struct FSQUsableWidgetData {
	FText UsableText; // 0x0
	UTexture2D* CustomTexture; // 0x18
	FLinearColor CustomColor; // 0x20
	USQInteractableWidgetItem* InteractWidgetItemClass; // 0x30
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FGroupsChangeMemberRoleRequest {
	FString DestinationRoleId; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	TArray<UPlayFabJsonObject*> Members; // 0x20
	FString OriginRoleId; // 0x30
};

struct FProfilesGetEntityProfileRequest {
	bool DataAsObject; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FClientGetTimeRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	DelegateProperty Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FCommanderCategory {
	FText Name; // 0x0
	float CooldownDuration; // 0x18
};

struct FClientUpdateCharacterDataRequest {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
};

struct FAnimNode_PoseBlendNode {
	FPoseLink SourcePose; // 0x78
	EAlphaBlendOption BlendOption; // 0x88
	UCurveFloat* CustomCurve; // 0x90
};

struct FServerGetUserDataResult {
	UPlayFabJsonObject* Data; // 0x8
	int DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FLightmassPointLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FSoundSubmixSendInfo {
	ESendLevelControlMethod SendLevelControlMethod; // 0x0
	USoundSubmix* SoundSubmix; // 0x8
	float SendLevel; // 0x10
	float MinSendLevel; // 0x14
	float MaxSendLevel; // 0x18
	float MinSendDistance; // 0x1c
	float MaxSendDistance; // 0x20
	FRuntimeFloatCurve CustomSendLevelCurve; // 0x28
};

struct FAdminCreateCloudScriptTaskRequest {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FServerExecuteCloudScriptResult {
	int APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int MemoryConsumedBytes; // 0x54
	int ProcessorTimeSeconds; // 0x58
	int Revision; // 0x5c
};

struct FAdminGetUserDataResult {
	UPlayFabJsonObject* Data; // 0x8
	int DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest {
	FString FacebookInstantGamesIds; // 0x8
};

struct FServerCreateSharedGroupResult {
	FString SharedGroupId; // 0x8
};

struct FServerGetCharacterDataRequest {
	FString CharacterId; // 0x8
	int IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FSQLayerEntry {
	FText DisplayName_2_FDA98E4C4391E4B5FE853F88263333D6; // 0x0
};

struct FServerSavePushNotificationTemplateRequest {
	FString AndroidPayload; // 0x8
	FString ID; // 0x18
	FString IOSPayload; // 0x28
	UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38
	FString Name; // 0x40
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FRotorWashData {
	USQRotorWashEffectSender* Emitter; // 0x0
	FVector EmitterPosition; // 0x8
	float EffectRadius; // 0x14
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FAdminIncrementPlayerStatisticVersionResult {
	UPlayFabJsonObject* StatisticVersion; // 0x8
};

struct FAdminDeleteTitleRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminUpdatePolicyRequest {
	bool OverwritePolicy; // 0x8
	FString PolicyName; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x20
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

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FClientGetLeaderboardAroundCharacterResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FClientUnlinkNintendoSwitchDeviceIdRequest {
	FString NintendoSwitchDeviceId; // 0x8
};

struct FAdminGetContentUploadUrlResult {
	FString URL; // 0x8
};

struct FProfilesGetGlobalPolicyRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FClientCancelTradeRequest {
	FString TradeId; // 0x8
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18
};

struct FStructSerializerArrayTestStruct {
	TArray<int> Int32Array; // 0x0
	int StaticSingleElement; // 0x10
	int StaticInt32Array[0x3]; // 0x14
	float StaticFloatArray[0x3]; // 0x20
	TArray<FVector> VectorArray; // 0x30
	TArray<FStructSerializerBuiltinTestStruct> StructArray; // 0x40
};

struct FServerConsumeItemRequest {
	FString CharacterId; // 0x8
	int ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
	FString PlayFabId; // 0x30
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int NumInputChannels; // 0x8
	int SampleRate; // 0xc
};

struct FVehicleNWTransmissionData {
	bool bUseGearAutoBox; // 0x0
	float GearSwitchTime; // 0x4
	float GearAutoBoxLatency; // 0x8
	float FinalRatio; // 0xc
	TArray<FVehicleNWGearData> ForwardGears; // 0x10
	TArray<FVehicleNWGearData> BackwardGears; // 0x20
	float ReverseGearRatio; // 0x30
	float NeutralGearUpRatio; // 0x34
	float NeutralGearDownRatio; // 0x38
	float ClutchStrength; // 0x3c
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FServerGetStoreItemsResult {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FServerAuthenticateSessionTicketRequest {
	FString SessionTicket; // 0x8
};

struct FSQWeaponReplacementItem {
	FText ItemName; // 0x0
	FText ItemDescription; // 0x18
	UTexture2D* SkinTexture; // 0x30
	TMap<UObject*, UObject*> WeaponReplacements; // 0x38
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FMovieSceneEvaluationTrackSegments {
	TArray<int> SegmentIdentifierToIndex; // 0x0
	TArray<FMovieSceneSegment> SortedSegments; // 0x10
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FClientAndroidDevicePushNotificationRegistrationRequest {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FAdminGetUserBansRequest {
	FString PlayFabId; // 0x8
};

struct FAdminGetCloudScriptVersionsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMatchmakerUserInfoRequest {
	int MinCatalogVersion; // 0x8
	FString PlayFabId; // 0x10
};

struct FMultiplayerJoinMatchmakingTicketResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FBlendSampleData {
	int SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FLayerDatabase {
	FChannelDatabase Color; // 0x0
	FChannelDatabase Alpha; // 0x10
	bool SDF; // 0x20
	bool MSDF; // 0x21
	bool Multiple; // 0x22
	bool SDF_Interior; // 0x23
	bool SDF_Alpha; // 0x24
	bool CanProcess_Interior; // 0x25
	bool CanProcess_Alpha; // 0x26
	bool UseColor; // 0x27
	bool Outline; // 0x28
	FLinearColor ColorOutline; // 0x2c
	FLinearColor ColorInterior; // 0x3c
	float EdgeSoftness; // 0x4c
	float OutlineThresold; // 0x50
	float SDFThresold; // 0x54
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FSQConnectionCheckResponse {
	char bCanQueue : 1; // 0x0
	char CurrentTotalPlayers; // 0x1
	float RoundTripRPCTimeMS; // 0x4
};

struct FClientUpdateCharacterDataResult {
	int DataVersion; // 0x8
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FSubdividedQuadVertex {
	int VertexPositionIndex; // 0x0
	FVector2D TextureCoordinate0; // 0x4
	FVector2D TextureCoordinate1; // 0xc
	FColor VertexColor; // 0x14
	FVector VertexNormal; // 0x18
	FVector VertexTangent; // 0x24
	float VertexBinormalSign; // 0x30
};

struct FMultiplayerCreateServerMatchmakingTicketRequest {
	int GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
};

struct FMovieSceneTransformMask {
	uint32 mask; // 0x0
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int TransitionIndex; // 0xc
};

struct FSQVote {
	FName ID; // 0x0
	FTimespan Duration; // 0x8
	FTimespan ResultPresentationDuration; // 0x10
	FDataTableRowHandle Data; // 0x18
	TArray<FSQChoice> Choices; // 0x28
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FSQRearmWeaponRequest {
	ASQEquipableItem* Weapon; // 0x0
	int MagsToRearm; // 0x8
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FSQInputState {
	FString RequestReason; // 0x0
	UUserWidget* Focus; // 0x10
	bool bGameInput; // 0x18
	bool bDisplayMouse; // 0x19
	bool bUIInput; // 0x1a
};

struct FClientGetUserDataRequest {
	int IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FServerGetCharacterLeaderboardRequest {
	FString CharacterType; // 0x8
	int MaxResultsCount; // 0x18
	int StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	TArray<FPolygonID> ConnectedPolygons; // 0x8
	FMeshElementAttributeList EdgeAttributes; // 0x18
	FEdgeID OriginalEdgeID; // 0x28
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
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

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int GridNum; // 0x18
};

struct FSQClanPacks_TableRow {
	FSQPatchItem PatchInfo; // 0x8
	TSet<FString> MembersSteamId64; // 0x48
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FGroupsCreateGroupRoleRequest {
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FMultiplayerListContainerImageTagsResponse {
	FString Tags; // 0x8
};

struct FClientGetCatalogItemsRequest {
	FString CatalogVersion; // 0x8
};

struct FSQDamageTypeEffects {
	FSQDamageEffect DefaultDamageEffect; // 0x0
	TArray<FSQDamageEffect> DamageEffects; // 0x18
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
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

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FSQMinimapMakerSettings {
	ESQTileResolution TileResolution; // 0x0
	ESQTileCount TileCount; // 0x1
	FPostProcessSettings MinimapPostProcessor; // 0x10
	int MinimapFOV; // 0x540
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FClientLinkFacebookAccountRequest {
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FServerMoveItemToCharacterFromUserRequest {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FAnimNode_AimOffsetLookAt {
	FPoseLink BasePose; // 0x140
	int LODThreshold; // 0x150
	FName SourceSocketName; // 0x154
	FName PivotSocketName; // 0x15c
	FVector LookAtLocation; // 0x164
	FVector SocketAxis; // 0x170
	float Alpha; // 0x17c
};

struct FAnimNode_RigidBody_Chaos {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xd0
	bool bSimulating; // 0xd8
	int NumIterations; // 0xdc
	bool bNotifyCollisions; // 0xe0
	EObjectStateTypeEnum ObjectType; // 0xe1
	float Density; // 0xe4
	float MinMass; // 0xe8
	float MaxMass; // 0xec
	ECollisionTypeEnum CollisionType; // 0xf0
	float ImplicitShapeParticlesPerUnitArea; // 0xf4
	int ImplicitShapeMinNumParticles; // 0xf8
	int ImplicitShapeMaxNumParticles; // 0xfc
	int MinLevelSetResolution; // 0x100
	int MaxLevelSetResolution; // 0x104
	int CollisionGroup; // 0x108
	EInitialVelocityTypeEnum InitialVelocityType; // 0x10c
	FVector InitialLinearVelocity; // 0x110
	FVector InitialAngularVelocity; // 0x11c
	FVector OverrideWorldGravity; // 0x1c0
	FVector ExternalForce; // 0x1cc
	FVector ComponentLinearAccScale; // 0x1d8
	FVector ComponentLinearVelScale; // 0x1e4
	FVector ComponentAppliedLinearAccClamp; // 0x1f0
	float CachedBoundsScale; // 0x1fc
	FBoneReference BaseBoneRef; // 0x200
	ECollisionChannel OverlapChannel; // 0x210
	ESimulationSpace SimulationSpace; // 0x211
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x212
	char bEnableWorldGeometry : 1; // 0x214
	char bOverrideWorldGravity : 1; // 0x214
	char bTransferBoneVelocities : 1; // 0x214
	char bFreezeIncomingPoseOnStart : 1; // 0x214
	char bClampLinearTranslationLimitToRefPose : 1; // 0x214
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FClientAddFriendResult {
	bool Created; // 0x8
};

struct FEdgeID {
	int IDValue; // 0x0
};

struct FGameplayTagBlueprintPropertyMap {
	TArray<FGameplayTagBlueprintPropertyMapping> PropertyMappings; // 0x10
};

struct FSQChunkRule {
	FString RuleLabel; // 0x0
	TArray<FInt32Range> ParentChunkIDs; // 0x10
	TArray<FInt32Range> ChildsChunkIDs; // 0x20
	ESQChunkBehavior Behavior; // 0x30
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FDataInitiateFileUploadsRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int ProfileVersion; // 0x20
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FInlineEditableTextBlockStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x7f8
};

struct FKSphylElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FGameplayCueTranslatorNodeIndex {
	int Index; // 0x0
};

struct FVector_NetQuantizeNormal {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FClientLinkGameCenterAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetLeaderboardForUsersCharactersResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FServerSetPublisherDataRequest {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FMovieScene3DTransformKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
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

struct FMovieSceneCameraShakeSectionTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FSSGS_FrameDataSingleLine {
	FSSGS_LineData lineData; // 0x8
	FSSGS_FrameModifiers frameModifiers; // 0x70
	ESSGS_EventIconId icon_id; // 0x88
};

struct FClientLoginWithTwitchRequest {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FSQInventoryWeaponGroupData {
	TArray<FSQInventoryData> WeaponItems; // 0x0
};

struct FClientUnlinkFacebookAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FSQExplosiveShotInfo {
	UObject* ProjectileClass; // 0x30
};

struct FMultiplayerListBuildSummariesResponse {
	TArray<UPlayFabJsonObject*> BuildSummaries; // 0x8
	int PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FMovieScene3DAttachSectionTemplate {
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

struct FMeshBuildSettings {
	char bUseMikkTSpace : 1; // 0x0
	char bRecomputeNormals : 1; // 0x0
	char bRecomputeTangents : 1; // 0x0
	char bRemoveDegenerates : 1; // 0x0
	char bBuildAdjacencyBuffer : 1; // 0x0
	char bBuildReversedIndexBuffer : 1; // 0x0
	char bUseHighPrecisionTangentBasis : 1; // 0x0
	char bUseFullPrecisionUVs : 1; // 0x0
	char bGenerateLightmapUVs : 1; // 0x1
	char bGenerateDistanceFieldAsIfTwoSided : 1; // 0x1
	int MinLightmapResolution; // 0x4
	int SrcLightmapIndex; // 0x8
	int DstLightmapIndex; // 0xc
	float BuildScale; // 0x10
	FVector BuildScale3D; // 0x14
	float DistanceFieldResolutionScale; // 0x20
	UStaticMesh* DistanceFieldReplacementMesh; // 0x28
};

struct FAdminGetMatchmakerGameInfoResult {
	FString BuildVersion; // 0x8
	FString EndTime; // 0x18
	FString LobbyId; // 0x28
	FString Mode; // 0x38
	FString Players; // 0x48
	ERegion Region; // 0x58
	FString ServerIPV4Address; // 0x60
	FString ServerIPV6Address; // 0x70
	int ServerPort; // 0x80
	FString ServerPublicDNSName; // 0x88
	FString StartTime; // 0x98
	FString TitleId; // 0xa8
};

struct FGroupsListGroupApplicationsRequest {
	UPlayFabJsonObject* Group; // 0x8
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FAdminAddLocalizedNewsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGameplayAbilityActorInfo {
	TWeakObjectPtr<AActor> OwnerActor; // 0x8
	TWeakObjectPtr<AActor> AvatarActor; // 0x10
	TWeakObjectPtr<APlayerController> PlayerController; // 0x18
	TWeakObjectPtr<UAbilitySystemComponent> AbilitySystemComponent; // 0x20
	TWeakObjectPtr<USkeletalMeshComponent> SkeletalMeshComponent; // 0x28
	TWeakObjectPtr<UAnimInstance> AnimInstance; // 0x30
	TWeakObjectPtr<UMovementComponent> MovementComponent; // 0x38
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FSoftClassPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FSQBoneHitSound {
	FName BoneName; // 0x0
	USoundCue* HitSound; // 0x8
};

struct FAdminGetPlayerProfileRequest {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FAdaptorTriangleID {
	int IDValue; // 0x0
};

struct FPartyRepData {
	FPartyPrivacySettings PrivacySettings; // 0x20
	TArray<FPartyPlatformSessionInfo> PlatformSessions; // 0x58
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FLevelSequenceObject {
	UObject* ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FServerLinkPSNAccountRequest {
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int IssuerId; // 0x1c
	FString PlayFabId; // 0x20
	FString RedirectUri; // 0x30
};

struct FActorComponentTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FSQSupporterPatchItem_TableRow {
	FSQPatchItem PatchInfo; // 0x8
};

struct FClientGameServerRegionsResult {
	TArray<UPlayFabJsonObject*> Regions; // 0x8
};

struct FGroupsListMembershipRequest {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FSQPersistedAmmoCount {
	int AmmoCount; // 0x0
	int ItemCount; // 0x4
};

struct FServerSetPublisherDataResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FVector_NetQuantize100 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FPolygonID {
	int IDValue; // 0x0
};

struct FVehicleTankGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FSQClimbInfo {
	EClimbType PendingType; // 0x1
	TArray<FVector_NetQuantize10> PendingClimbMovePathZeroBased; // 0x18
	EClimbState PendingState; // 0x29
};

struct FDiscordUserData {
	FString userId; // 0x0
	FString username; // 0x10
	FString discriminator; // 0x20
	FString avatar; // 0x30
};

struct FSQRoleLimit {
	int MinPerTeam; // 0x0
	int MinPerSquad; // 0x4
	int SquadMembersToUnlockNextKit; // 0x8
	int UnlocksAtSquadSize; // 0xc
	int StopScalingAtSquadSize; // 0x10
	int TeamMembersToUnlockNextKit; // 0x14
	int UnlocksAtTeamSize; // 0x18
	int StopScalingAtTeamSize; // 0x1c
	bool bSquadLeaderOnly; // 0x20
	bool bNonDeployable; // 0x21
};

struct FAdminRemoveVirtualCurrencyTypesRequest {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FClusterNode {
	FVector BoundMin; // 0x0
	int FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int LastChild; // 0x1c
	int FirstInstance; // 0x20
	int LastInstance; // 0x24
	FVector MinInstanceScale; // 0x28
	FVector MaxInstanceScale; // 0x34
};

struct FSQVehicleSeatAnimationState {
	UAnimMontage* PawnAnimation; // 0x0
	UAnimMontage* SeatAnimation; // 0x8
	UAnimSequence* BaseAnimation; // 0x10
	UBlendSpace* AimOffsets; // 0x18
	bool bUseWheelBlendSpace1D; // 0x20
	UBlendSpace1D* WheelBlendSpace1D; // 0x28
	bool bUseHandIK; // 0x30
	bool bUseWeaponForHandIK; // 0x31
	float LeftHandIKAlpha; // 0x34
	FName LeftHandIKSocketName; // 0x38
	float RightHandIKAlpha; // 0x40
	FName RightHandIKSocketName; // 0x44
	UAnimSequence* SteeringWheelSingleFrameAnimSequence; // 0x50
};

struct FRBFParams {
	int TargetDimensions; // 0x0
	float Radius; // 0x4
	ERBFFunctionType Function; // 0x8
	ERBFDistanceMethod DistanceMethod; // 0x9
	EBoneAxis TwistAxis; // 0xa
	float WeightThreshold; // 0xc
	ERBFNormalizeMethod NormalizeMethod; // 0x10
	FVector MedianReference; // 0x14
	float MedianMin; // 0x20
	float MedianMax; // 0x24
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FAuthenticationGetEntityTokenRequest {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FClientLoginResult {
	UPlayFabJsonObject* EntityToken; // 0x10
	UPlayFabJsonObject* InfoResultPayload; // 0x18
	FString LastLoginTime; // 0x20
	bool NewlyCreated; // 0x30
	FString PlayFabId; // 0x38
	FString SessionTicket; // 0x48
	UPlayFabJsonObject* SettingsForUser; // 0x58
	UPlayFabJsonObject* TreatmentAssignment; // 0x60
};

struct FServerGrantItemsToUsersResult {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FGameplayTagReponsePair {
	FGameplayTag Tag; // 0x0
	UGameplayEffect* ResponseGameplayEffect; // 0x8
	TArray<UGameplayEffect*> ResponseGameplayEffects; // 0x10
	int SoftCountCap; // 0x20
};

struct FAnimNode_CopyBone {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FMovieSceneColorKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FRootMotionSource {
	uint16 Priority; // 0x10
	uint16 LocalID; // 0x12
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

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32 LODIndex; // 0x20
};

struct FClientEmptyResult {
	UPlayFabJsonObject* Request; // 0x0
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

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FSSGS_TactileEffectPredefined {
	FSSGS_PredefinedTactilePattern Type; // 0x8
	int delay_ms; // 0x18
};

struct FAdminGetPlayerIdFromAuthTokenRequest {
	FString Token; // 0x8
	EAuthTokenType TokenType; // 0x18
};

struct FClientRegisterWithWindowsHelloRequest {
	FString DeviceName; // 0x8
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString PublicKey; // 0x40
	FString username; // 0x50
};

struct FClientRegisterForIOSPushNotificationRequest {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FAdminCreateTaskResult {
	FString TaskId; // 0x8
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FClientGetPublisherDataRequest {
	FString Keys; // 0x8
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FSQEmoteAnims {
	bool bForceIfCantPlay; // 0x0
	UAnimMontage* FirstPersonAnim; // 0x8
	UAnimMontage* ThirdPersonAnim; // 0x10
	UAnimMontage* FirstPersonEndAnim; // 0x18
	UAnimMontage* ThirdPersonEndAnim; // 0x20
};

struct FServerExecuteCloudScriptServerRequest {
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	FString PlayFabId; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x38
	int SpecificRevision; // 0x3c
};

struct FClientGetPurchaseResult {
	FString OrderId; // 0x8
	FString PaymentProvider; // 0x18
	FString PurchaseDate; // 0x28
	FString TransactionId; // 0x38
	FString TransactionStatus; // 0x48
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FDataAbortFileUploadsRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int ProfileVersion; // 0x20
};

struct FServerGetTimeResult {
	FString Time; // 0x8
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FServerGetPlayerCombinedInfoRequest {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FServerWriteServerPlayerEventRequest {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString PlayFabId; // 0x20
	FString Timestamp; // 0x30
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float blendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FGameplayAbilityTargetData_LocationInfo {
	FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10
	FGameplayAbilityTargetingLocationInfo TargetLocation; // 0x80
};

struct FMinimalGameplayCueReplicationProxy {
	UAbilitySystemComponent* Owner; // 0x1b0
};

struct FAdminGetPlayerProfileResult {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString username; // 0x10
};

struct FServerLoginWithXboxRequest {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString XboxToken; // 0x18
};

struct FDiscordRichPresence {
	FString State; // 0x0
	FString details; // 0x10
	int startTimestamp; // 0x20
	int endTimestamp; // 0x24
	FString largeImageKey; // 0x28
	FString largeImageText; // 0x38
	FString smallImageKey; // 0x48
	FString smallImageText; // 0x58
	FString partyId; // 0x68
	int partySize; // 0x78
	int partyMax; // 0x7c
	FString matchSecret; // 0x80
	FString joinSecret; // 0x90
	FString spectateSecret; // 0xa0
	bool instance; // 0xb0
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int GroupIndex; // 0x18
};

struct FMultiplayerListQosServersRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetUserInventoryResult {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FAdminAddNewsResult {
	FString NewsId; // 0x8
};

struct FClientRemoveContactEmailRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerNotifyMatchmakerPlayerLeftRequest {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FAnimNode_MultiWayBlend {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FServerRedeemMatchmakerTicketRequest {
	FString LobbyId; // 0x8
	FString Ticket; // 0x18
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
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

struct FTextureSourceBlock {
	int BlockX; // 0x0
	int BlockY; // 0x4
	int SizeX; // 0x8
	int SizeY; // 0xc
	int NumSlices; // 0x10
	int NumMips; // 0x14
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FMultiplayerGetContainerRegistryCredentialsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminUpdateTaskRequest {
	FString Description; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
	EScheduledTaskType Type; // 0x50
};

struct FEndPhysicsTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FRootMotionSource_MoveToForce {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FAnimNode_TransitionPoseEvaluator {
	int FramesToCachePose; // 0x48
	EEvaluatorDataSource DataSource; // 0x50
	EEvaluatorMode EvaluatorMode; // 0x51
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FClientGetPlayerStatisticVersionsResult {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FAdminSetPublishedRevisionRequest {
	int Revision; // 0x8
	int Version; // 0xc
};

struct FCloudScriptExecuteCloudScriptResult {
	int APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int MemoryConsumedBytes; // 0x54
	int ProcessorTimeSeconds; // 0x58
	int Revision; // 0x5c
};

struct FBranchingPoint {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
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

struct FServerGrantItemsToCharacterResult {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FGameplayEffectSpec {
	UGameplayEffect* Def; // 0x0
	TArray<FGameplayEffectModifiedAttribute> ModifiedAttributes; // 0x8
	FGameplayEffectAttributeCaptureSpecContainer CapturedRelevantAttributes; // 0x18
	float Duration; // 0x50
	float Period; // 0x54
	float ChanceToApplyToTarget; // 0x58
	FTagContainerAggregator CapturedSourceTags; // 0x60
	FTagContainerAggregator CapturedTargetTags; // 0xe8
	FGameplayTagContainer DynamicGrantedTags; // 0x170
	FGameplayTagContainer DynamicAssetTags; // 0x190
	TArray<FModifierSpec> Modifiers; // 0x1b0
	int StackCount; // 0x1c0
	char bCompletedSourceAttributeCapture : 1; // 0x1c4
	char bCompletedTargetAttributeCapture : 1; // 0x1c4
	char bDurationLocked : 1; // 0x1c4
	TArray<FGameplayAbilitySpecDef> GrantedAbilitySpecs; // 0x1c8
	FGameplayEffectContextHandle EffectContext; // 0x278
	float Level; // 0x290
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

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FGameplayAbilitySpec {
	FGameplayAbilitySpecHandle Handle; // 0xc
	UGameplayAbility* Ability; // 0x10
	int Level; // 0x18
	int InputID; // 0x1c
	UObject* SourceObject; // 0x20
	char ActiveCount; // 0x28
	char InputPressed : 1; // 0x29
	char RemoveAfterActivation : 1; // 0x29
	char PendingRemove : 1; // 0x29
	FGameplayAbilityActivationInfo ActivationInfo; // 0x30
	TArray<UGameplayAbility*> NonReplicatedInstances; // 0x50
	TArray<UGameplayAbility*> ReplicatedInstances; // 0x60
	FActiveGameplayEffectHandle GameplayEffectHandle; // 0x70
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
	char bOverride_HistogramLogMin : 1; // 0xa
	char bOverride_HistogramLogMax : 1; // 0xb
	char bOverride_LensFlareIntensity : 1; // 0xb
	char bOverride_LensFlareTint : 1; // 0xb
	char bOverride_LensFlareTints : 1; // 0xb
	char bOverride_LensFlareBokehSize : 1; // 0xb
	char bOverride_LensFlareBokehShape : 1; // 0xb
	char bOverride_LensFlareThreshold : 1; // 0xb
	char bOverride_VignetteIntensity : 1; // 0xb
	char bOverride_GrainIntensity : 1; // 0xc
	char bOverride_GrainJitter : 1; // 0xc
	char bOverride_AmbientOcclusionIntensity : 1; // 0xc
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0xc
	char bOverride_AmbientOcclusionRadius : 1; // 0xc
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0xc
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0xc
	char bOverride_AmbientOcclusionDistance : 1; // 0xc
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0xd
	char bOverride_AmbientOcclusionPower : 1; // 0xd
	char bOverride_AmbientOcclusionBias : 1; // 0xd
	char bOverride_AmbientOcclusionQuality : 1; // 0xd
	char bOverride_AmbientOcclusionMipBlend : 1; // 0xd
	char bOverride_AmbientOcclusionMipScale : 1; // 0xd
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0xd
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
	char bOverride_TranslucencyType : 1; // 0x1c
	char bOverride_RayTracingTranslucencyMaxRoughness : 1; // 0x1c
	char bOverride_RayTracingTranslucencyRefractionRays : 1; // 0x1c
	char bOverride_RayTracingTranslucencySamplesPerPixel : 1; // 0x1d
	char bOverride_RayTracingTranslucencyShadows : 1; // 0x1d
	char bOverride_RayTracingTranslucencyRefraction : 1; // 0x1d
	char bOverride_RayTracingGI : 1; // 0x1d
	char bOverride_RayTracingGIMaxBounces : 1; // 0x1d
	char bOverride_RayTracingGISamplesPerPixel : 1; // 0x1d
	char bOverride_PathTracingMaxBounces : 1; // 0x1d
	char bOverride_PathTracingSamplesPerPixel : 1; // 0x1d
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
	int DepthOfFieldBladeCount; // 0x308
	float AutoExposureBias; // 0x30c
	UCurveFloat* AutoExposureBiasCurve; // 0x310
	float AutoExposureLowPercent; // 0x318
	float AutoExposureHighPercent; // 0x31c
	float AutoExposureMinBrightness; // 0x320
	float AutoExposureMaxBrightness; // 0x324
	float AutoExposureSpeedUp; // 0x328
	float AutoExposureSpeedDown; // 0x32c
	float HistogramLogMin; // 0x330
	float HistogramLogMax; // 0x334
	float AutoExposureCalibrationConstant; // 0x338
	float LensFlareIntensity; // 0x33c
	FLinearColor LensFlareTint; // 0x340
	float LensFlareBokehSize; // 0x350
	float LensFlareThreshold; // 0x354
	UTexture* LensFlareBokehShape; // 0x358
	FLinearColor LensFlareTints[0x8]; // 0x360
	float VignetteIntensity; // 0x3e0
	float GrainJitter; // 0x3e4
	float GrainIntensity; // 0x3e8
	float AmbientOcclusionIntensity; // 0x3ec
	float AmbientOcclusionStaticFraction; // 0x3f0
	float AmbientOcclusionRadius; // 0x3f4
	char AmbientOcclusionRadiusInWS : 1; // 0x3f8
	float AmbientOcclusionFadeDistance; // 0x3fc
	float AmbientOcclusionFadeRadius; // 0x400
	float AmbientOcclusionDistance; // 0x404
	float AmbientOcclusionPower; // 0x408
	float AmbientOcclusionBias; // 0x40c
	float AmbientOcclusionQuality; // 0x410
	float AmbientOcclusionMipBlend; // 0x414
	float AmbientOcclusionMipScale; // 0x418
	float AmbientOcclusionMipThreshold; // 0x41c
	char RayTracingAO : 1; // 0x420
	int RayTracingAOSamplesPerPixel; // 0x424
	FLinearColor IndirectLightingColor; // 0x428
	float IndirectLightingIntensity; // 0x438
	char RayTracingGI : 1; // 0x43c
	int RayTracingGIMaxBounces; // 0x440
	int RayTracingGISamplesPerPixel; // 0x444
	float ColorGradingIntensity; // 0x448
	UTexture* ColorGradingLUT; // 0x450
	float DepthOfFieldSensorWidth; // 0x458
	float DepthOfFieldFocalDistance; // 0x45c
	float DepthOfFieldDepthBlurAmount; // 0x460
	float DepthOfFieldDepthBlurRadius; // 0x464
	float DepthOfFieldFocalRegion; // 0x468
	float DepthOfFieldNearTransitionRegion; // 0x46c
	float DepthOfFieldFarTransitionRegion; // 0x470
	float DepthOfFieldScale; // 0x474
	float DepthOfFieldNearBlurSize; // 0x478
	float DepthOfFieldFarBlurSize; // 0x47c
	float DepthOfFieldOcclusion; // 0x480
	float DepthOfFieldSkyFocusDistance; // 0x484
	float DepthOfFieldVignetteSize; // 0x488
	float MotionBlurAmount; // 0x48c
	float MotionBlurMax; // 0x490
	int MotionBlurTargetFPS; // 0x494
	float MotionBlurPerObjectSize; // 0x498
	float LPVIntensity; // 0x49c
	float LPVVplInjectionBias; // 0x4a0
	float LPVSize; // 0x4a4
	float LPVSecondaryOcclusionIntensity; // 0x4a8
	float LPVSecondaryBounceIntensity; // 0x4ac
	float LPVGeometryVolumeBias; // 0x4b0
	float LPVEmissiveInjectionIntensity; // 0x4b4
	float LPVDirectionalOcclusionIntensity; // 0x4b8
	float LPVDirectionalOcclusionRadius; // 0x4bc
	float LPVDiffuseOcclusionExponent; // 0x4c0
	float LPVSpecularOcclusionExponent; // 0x4c4
	float LPVDiffuseOcclusionIntensity; // 0x4c8
	float LPVSpecularOcclusionIntensity; // 0x4cc
	EReflectionsType ReflectionsType; // 0x4d0
	float ScreenSpaceReflectionIntensity; // 0x4d4
	float ScreenSpaceReflectionQuality; // 0x4d8
	float ScreenSpaceReflectionMaxRoughness; // 0x4dc
	float RayTracingReflectionsMaxRoughness; // 0x4e0
	int RayTracingReflectionsMaxBounces; // 0x4e4
	int RayTracingReflectionsSamplesPerPixel; // 0x4e8
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x4ec
	ETranslucencyType TranslucencyType; // 0x4ed
	float RayTracingTranslucencyMaxRoughness; // 0x4f0
	int RayTracingTranslucencyRefractionRays; // 0x4f4
	int RayTracingTranslucencySamplesPerPixel; // 0x4f8
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x4fc
	char RayTracingTranslucencyRefraction : 1; // 0x4fd
	int PathTracingMaxBounces; // 0x500
	int PathTracingSamplesPerPixel; // 0x504
	float LPVFadeRange; // 0x508
	float LPVDirectionalOcclusionFadeRange; // 0x50c
	float ScreenPercentage; // 0x510
	FWeightedBlendables WeightedBlendables; // 0x518
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FStaticSwitchParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool Value; // 0x10
	bool bOverride; // 0x11
	FGuid ExpressionGUID; // 0x14
};

struct FClientExecuteCloudScriptResult {
	int APIRequestsIssued; // 0x8
	UPlayFabJsonObject* Error; // 0x10
	int ExecutionTimeSeconds; // 0x18
	FString FunctionName; // 0x20
	UPlayFabJsonObject* FunctionResult; // 0x30
	bool FunctionResultTooLarge; // 0x38
	int HttpRequestsIssued; // 0x3c
	TArray<UPlayFabJsonObject*> Logs; // 0x40
	bool LogsTooLarge; // 0x50
	int MemoryConsumedBytes; // 0x54
	int ProcessorTimeSeconds; // 0x58
	int Revision; // 0x5c
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

struct FAdminGetTitleDataResult {
	UPlayFabJsonObject* Data; // 0x8
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FGroupsListGroupBlocksResponse {
	TArray<UPlayFabJsonObject*> BlockedEntities; // 0x8
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FServerRedeemCouponRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	FString PlayFabId; // 0x38
};

struct FARSharedWorldReplicationState {
	int PreviewImageOffset; // 0x0
	int ARWorldOffset; // 0x4
};

struct FClientUnlinkNintendoSwitchDeviceIdResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGfeSDKPermissionsChangedData {
	TMap<EGfeSDKScope, EGfeSDKPermission> ScopePermissions; // 0x0
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FServerMoveItemToCharacterFromCharacterResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEditableTextBoxStyle {
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

struct FClientGetPlayFabIDsFromGenericIDsRequest {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FLatentActionInfo {
	int Linkage; // 0x0
	int UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FSQModLoadProgress {
	uint64 ID; // 0x0
	FString ServerMD5; // 0x8
	float Progress; // 0x18
	bool bFinishedLoading; // 0x1c
	bool bLoadedSuccessfully; // 0x1d
};

struct FServerUpdateSharedGroupDataResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneGeometryCacheParams {
	UGeometryCache* GeometryCacheAsset; // 0x0
	FFrameNumber StartFrameOffset; // 0x8
	FFrameNumber EndFrameOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	float StartOffset; // 0x18
	float EndOffset; // 0x1c
	FSoftObjectPath GeometryCache; // 0x20
};

struct FAdminUpdateCatalogItemsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerUnlockContainerItemResult {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FSQCommanderActionSounds {
	USoundCue* CommandActionPlaced; // 0x0
	USoundCue* CommandActionActive; // 0x28
	USoundCue* CommandActionDestroyed; // 0x50
	USoundCue* CommandActionEnded; // 0x78
};

struct FMultiplayerDeleteAssetRequest {
	FString Filename; // 0x8
};

struct FWidgetGroup {
	TArray<USQCoreStateWidget*> List; // 0x0
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FAdminCheckLimitedEditionItemAvailabilityResult {
	int Amount; // 0x8
};

struct FClientListUsersCharactersRequest {
	FString PlayFabId; // 0x8
};

struct FMovieSceneGeometryCacheSectionTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FRandomStream {
	int InitialSeed; // 0x0
	int Seed; // 0x4
};

struct FSQVehicleWeaponConfig {
	ASQVehicleWeapon* WeaponClass; // 0x0
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FAdminGetServerBuildInfoResult {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString Comment; // 0x28
	FString errorMessage; // 0x38
	int MaxGamesPerHost; // 0x48
	int MinFreeGameSlots; // 0x4c
	EGameBuildStatus Status; // 0x50
	FString Timestamp; // 0x58
	FString TitleId; // 0x68
};

struct FServerUpdateUserInternalDataRequest {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FSSGS_Game {
	FString Game; // 0x8
};

struct FGroupsRemoveGroupInvitationRequest {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0x8
	FEdGraphPinType VarType; // 0x18
	FString FriendlyName; // 0x70
	FText Category; // 0x80
	uint64 PropertyFlags; // 0x98
	FName RepNotifyFunc; // 0xa0
	ELifetimeCondition ReplicationCondition; // 0xa8
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
	FString DefaultValue; // 0xc0
};

struct FServerLinkServerCustomIdRequest {
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString ServerCustomId; // 0x20
};

struct FAnimNode_StateMachine {
	int StateMachineIndexInClass; // 0x10
	int MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FClientGetPaymentTokenRequest {
	FString TokenProvider; // 0x8
};

struct FClientGetFriendsListRequest {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	FString XboxToken; // 0x18
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

struct FCommanderNomineeArray {
	TArray<FCommanderVoteNominee> Items; // 0x108
};

struct FMultiplayerDeleteBuildAliasRequest {
	FString AliasId; // 0x8
};

struct FSkeletalMeshComponentEndPhysicsTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminCreatePlayerStatisticDefinitionResult {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FClientLinkKongregateAccountRequest {
	FString AuthTicket; // 0x8
	bool ForceLink; // 0x18
	FString KongregateId; // 0x20
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FMovieSceneStringPropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x48
};

struct FNameCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FClientLinkFacebookInstantGamesIdResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FServerGetPlayerStatisticsResult {
	FString PlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FClientUnlinkWindowsHelloAccountResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FSquadWidgetPair {
	USQScoreboardSquad* SquadWidget; // 0x0
	ASQSquadState* SquadState; // 0x8
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FMultiplayerGetMultiplayerServerLogsRequest {
	FString Region; // 0x8
	FString ServerId; // 0x18
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetPlayFabIDsFromFacebookIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientUnlinkPSNAccountRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FRadialDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FSQCachedStateArray {
	TArray<FSQCachedStateData> States; // 0x0
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

struct FAdminResetPasswordRequest {
	FString Password; // 0x8
	FString Token; // 0x18
};

struct FClientAddGenericIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSQFTEText {
	FText FTEText; // 0x0
	TArray<FName> ActionKeys; // 0x18
	float Lifetime; // 0x28
};

struct FClientGetPublisherDataResult {
	UPlayFabJsonObject* Data; // 0x8
};

struct FSQPersistedAmmoState {
	TArray<FSQPersistedAmmoGroup> AmmoGroups; // 0x0
	USQRoleSettings* PersistedRole; // 0x10
};

struct FClientAttributeInstallRequest {
	FString Adid; // 0x8
	FString Idfa; // 0x18
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FAdminDeleteMasterPlayerAccountResult {
	FString JobReceiptId; // 0x8
	FString TitleIds; // 0x18
};

struct FParticleEvent_GenerateInfo {
	EParticleEventType Type; // 0x0
	int frequency; // 0x4
	int ParticleFrequency; // 0x8
	char FirstTimeOnly : 1; // 0xc
	char LastTimeOnly : 1; // 0xc
	char UseReflectedImpactVector : 1; // 0xc
	char bUseOrbitOffset : 1; // 0xc
	FName CustomName; // 0x10
	TArray<UParticleModuleEventSendToGame*> ParticleModuleEventsToSendToGame; // 0x18
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FServerGetContentDownloadUrlRequest {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
};

struct FSetByCallerFloat {
	FName DataName; // 0x0
	FGameplayTag DataTag; // 0x8
};

struct FAnimNode_ApplyLimits {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FMovieSceneEventTemplateBase {
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
};

struct FSSGS_FrameModifiers {
	int length_millis; // 0x8
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int MaxNumRandomBranches; // 0x8
	int SoundCueQualityIndex; // 0xc
};

struct FEngineServiceAuthGrant {
	FString username; // 0x0
	FString UserToGrant; // 0x10
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UMetaData* SubClass; // 0x8
	UClass* SoftClass; // 0x10
	UObject* Object; // 0x38
	TWeakObjectPtr<UMetaData> WeakObject; // 0x40
	UMetaData* SoftObject; // 0x48
	FSoftClassPath ClassPath; // 0x70
	FSoftObjectPath ObjectPath; // 0x88
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FMultiplayerListCertificateSummariesRequest {
	int PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FAdminGetPlayerSharedSecretsResult {
	TArray<UPlayFabJsonObject*> SharedSecrets; // 0x8
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

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FSQDeployableLimit {
	ASQDeployable* DeployableClass; // 0x0
	char MaxPerFob; // 0x8
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FMultiplayerGetQueueStatisticsRequest {
	FString QueueName; // 0x8
};

struct FColorMaterialInput {
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FClientRedeemCouponRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
};

struct FGroupsCreateGroupRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString GroupName; // 0x10
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FClientGetPlayerSegmentsResult {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FClientUpdateUserDataRequest {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
};

struct FSubdividedWireEdge {
	int EdgeVertex0PositionIndex; // 0x0
	int EdgeVertex1PositionIndex; // 0x4
};

struct FChaosTrailingEventRequestSettings {
	int MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FAdminExportMasterPlayerDataResult {
	FString JobReceiptId; // 0x8
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FSQBoneDamageMod {
	FName BoneName; // 0x0
	float DamageMod; // 0x8
};

struct FMovieScenePropertySectionTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FClientUnlinkAndroidDeviceIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FConditionalGameplayEffect {
	UGameplayEffect* EffectClass; // 0x0
	FGameplayTagContainer RequiredSourceTags; // 0x8
};

struct FSkelMeshSkinWeightInfo {
	int Bones[0x8]; // 0x0
	char Weights[0x8]; // 0x20
};

struct FServerGetTitleNewsRequest {
	int Count; // 0x8
};

struct FSQWeaponEffects {
	UParticleSystem* MuzzleFlashEffect1P; // 0x0
	UParticleSystem* MuzzleFlashEffect3P; // 0x8
	UParticleSystem* ShellEjection1P; // 0x10
	UParticleSystem* ShellEjection3P; // 0x18
	FName MuzzleFlashSocket; // 0x20
	FName ShellEjectionSocket; // 0x28
	float MuzzleFlashCullDistanceInMeters; // 0x30
	float ShellEjectionCullDistanceInMeters; // 0x34
};

struct FMovieSceneParticleParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
};

struct FAdminResetUserStatisticsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGfeSDKHighlightConfigParams {
	TArray<FGfeSDKHighlightDefinition> HighlightDefinitions; // 0x0
	FString DefaultLocale; // 0x10
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

struct FGroupsIsMemberRequest {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
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

struct FAnimNode_Trail {
	FBoneReference TrailBone; // 0x100
	int ChainLength; // 0x110
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

struct FAnimNode_LegIK {
	float ReachPrecision; // 0xc8
	int MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FServerGetPublisherDataResult {
	UPlayFabJsonObject* Data; // 0x8
};

struct FCaptureResolution {
	int ResX; // 0x0
	int ResY; // 0x4
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

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FAdminLookupUserAccountInfoRequest {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString username; // 0x38
};

struct FGroupsCreateGroupRoleResponse {
	int ProfileVersion; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FAdminGetAllSegmentsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminGetCloudScriptRevisionResult {
	FString CreatedAt; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool IsPublished; // 0x28
	int Revision; // 0x2c
	int Version; // 0x30
};

struct FAnimNode_CustomProperty {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
	TArray<UProperty*> SourceProperties; // 0x38
	TArray<UProperty*> DestProperties; // 0x48
};

struct FFOscillator {
	float Amplitude; // 0x0
	float frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FAdminGetPlayerStatisticDefinitionsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGrantCharacterToUserRequest {
	FString CharacterName; // 0x8
	FString CharacterType; // 0x18
	FString PlayFabId; // 0x28
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FServerGetPlayFabIDsFromXboxLiveIDsRequest {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FQueuedDrawDebugItem {
	EDrawDebugItemType ItemType; // 0x0
	FVector StartLoc; // 0x4
	FVector EndLoc; // 0x10
	FVector Center; // 0x1c
	FRotator Rotation; // 0x28
	float Radius; // 0x34
	float Size; // 0x38
	int Segments; // 0x3c
	FColor Color; // 0x40
	bool bPersistentLines; // 0x44
	float Lifetime; // 0x48
	float Thickness; // 0x4c
	FString Message; // 0x50
	FVector2D TextScale; // 0x60
};

struct FClothParameterMask_PhysMesh {
	FName MaskName; // 0x0
	MaskTarget_PhysMesh CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FClientUnlinkGameCenterAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSQTakeHitInfo {
	float ActualDamage; // 0x0
	float ServerTimestamp; // 0x4
	UObject* DamageTypeClass; // 0x8
	TWeakObjectPtr<ASQSoldier> PawnInstigator; // 0x10
	TWeakObjectPtr<AActor> DamageCauser; // 0x18
	int DamageEventClassID; // 0x20
	char bKilled : 1; // 0x24
	char bWounded : 1; // 0x24
	char bEjectedFromVehicle : 1; // 0x24
	FDamageEvent GeneralDamageEvent; // 0x28
	FPointDamageEvent PointDamageEvent; // 0x38
	FRadialDamageEvent RadialDamageEvent; // 0xe0
	TWeakObjectPtr<UPhysicalMaterial> PackagedHitResultPhysMaterial; // 0x120
	TWeakObjectPtr<AActor> PackagedHitResultActor; // 0x128
	TWeakObjectPtr<UPrimitiveComponent> PackagedHitResultComponent; // 0x130
};

struct FSQModInfoRequest {
	TArray<FSQModInfo> RequestedModInfoArray; // 0x8
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FBlueprintCookedComponentInstancingData {
	bool bHasValidCookedData; // 0x0
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x8
};

struct FGfeSDKHighlightSummaryParams {
	TArray<FGfeSDKHighlightGroupView> GroupViews; // 0x0
};

struct FClientUnlinkGoogleAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest {
	FString MasterPlayerAccountIds; // 0x8
};

struct FClientUnlinkFacebookAccountRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
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

struct FFrameRate {
	int Numerator; // 0x0
	int Denominator; // 0x4
};

struct FClientGetPlayFabIDsFromGoogleIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FGameplayModifierEvaluatedData {
	FGameplayAttribute Attribute; // 0x0
	EGameplayModOp ModifierOp; // 0x20
	float Magnitude; // 0x24
	FActiveGameplayEffectHandle Handle; // 0x28
	bool IsValid; // 0x30
};

struct FSQSoundWeight {
	USoundWave* Sound; // 0x0
	float Weight; // 0x8
	bool bHasBeenUsed; // 0xc
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FSQRoleGroupLimit {
	ESQRoleTypeEnum RoleGroup; // 0x0
	int MinLimit; // 0x4
	int MaxLimit; // 0x8
	int SquadMembersPerSlotIncrease; // 0xc
	int SlotsPerIncrease; // 0x10
};

struct FAdminRevokeInventoryResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FPartyPlatformSessionInfo {
	FName OssName; // 0x0
	FString SessionId; // 0x8
	FUniqueNetIdRepl OwnerPrimaryId; // 0x18
};

struct FClientGetTimeResult {
	FString Time; // 0x8
};

struct FClientUpdateAvatarUrlRequest {
	FString ImageUrl; // 0x8
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingId; // 0x0
	uint16 EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	FMovieSceneEvaluationTrackSegments Segments; // 0x18
	UMovieSceneTrack* SourceTrack; // 0x38
	FSectionEvaluationDataTree EvaluationTree; // 0x40
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0xa0
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0xb0
	FName EvaluationGroup; // 0xe8
	char bEvaluateInPreroll : 1; // 0xf0
	char bEvaluateInPostroll : 1; // 0xf0
};

struct FClientAttributeInstallResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FClientLinkWindowsHelloAccountResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FServerGetPlayerSegmentsResult {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FServerRefreshGameServerInstanceHeartbeatRequest {
	FString LobbyId; // 0x8
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int LoopingCount; // 0x18
};

struct FPlayFabError {
	bool HasError; // 0x0
	int ErrorCode; // 0x4
	FString ErrorName; // 0x8
	FString errorMessage; // 0x18
	FString ErrorDetails; // 0x28
};

struct FAdminGetRandomResultTablesRequest {
	FString CatalogVersion; // 0x8
};

struct FMultiplayerUntagContainerImageRequest {
	FString ImageName; // 0x8
	FString Tag; // 0x18
};

struct FSQDeployableGroupingStrategy {
	FText DisplayName_2_F99B8C43430BAF4FF50FAB9079014748; // 0x0
	FText Description_20_9D063CFC4D56524A453A7891125E6AE6; // 0x18
	UTexture2D* Icon_16_47DBEEF44044C91E422315AE8AD2307D; // 0x30
	TSet<ESQDeployableTag> TargetTags_15_7D977F504B2C80DD6EBF01A470463DAD; // 0x38
	bool ReversedRule_12_548311FD4F326FC0DCFF66B6B6DBBC70; // 0x88
};

struct FMeshSectionInfo {
	int MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FClientPayForPurchaseResult {
	int CreditApplied; // 0x8
	FString OrderId; // 0x10
	FString ProviderData; // 0x20
	FString ProviderToken; // 0x30
	FString PurchaseConfirmationPageURL; // 0x40
	FString PurchaseCurrency; // 0x50
	int PurchasePrice; // 0x60
	ETransactionStatus Status; // 0x64
	UPlayFabJsonObject* VCAmount; // 0x68
	UPlayFabJsonObject* VirtualCurrency; // 0x70
};

struct FGameplayAbilityTargetingLocationInfo {
	EGameplayAbilityTargetingLocationType LocationType; // 0x10
	FTransform LiteralTransform; // 0x20
	AActor* SourceActor; // 0x50
	UMeshComponent* SourceComponent; // 0x58
	UGameplayAbility* SourceAbility; // 0x60
	FName SourceSocketName; // 0x68
};

struct FServerGetAllSegmentsResult {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FAdminSetPublishedRevisionResult {
	UPlayFabJsonObject* Request; // 0x0
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

struct FServerGetPlayFabIDsFromPSNAccountIDsRequest {
	int IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FServerUpdateCharacterDataRequest {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
	FString PlayFabId; // 0x38
};

struct FServerAbilityRPCBatch {
	FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x0
	FPredictionKey PredictionKey; // 0x8
	FGameplayAbilityTargetDataHandle TargetData; // 0x20
	bool InputPressed; // 0x48
	bool Ended; // 0x49
	bool Started; // 0x4a
};

struct FPreallocationInfo {
	TArray<AGameplayCueNotify_Actor*> ClassesNeedingPreallocation; // 0x50
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FGroupsGetGroupResponse {
	FString AdminRoleId; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
	int ProfileVersion; // 0x50
	UPlayFabJsonObject* Roles; // 0x58
};

struct FServerReportPlayerServerResult {
	int SubmissionsRemaining; // 0x8
};

struct FMaterialProxySettings {
	FIntPoint TextureSize; // 0x0
	float GutterSpace; // 0x8
	float MetallicConstant; // 0xc
	float RoughnessConstant; // 0x10
	float SpecularConstant; // 0x14
	float OpacityConstant; // 0x18
	float OpacityMaskConstant; // 0x1c
	float AmbientOcclusionConstant; // 0x20
	ETextureSizingType TextureSizingType; // 0x24
	EMaterialMergeType MaterialMergeType; // 0x25
	EBlendMode BlendMode; // 0x26
	char bAllowTwoSidedMaterial : 1; // 0x27
	char bNormalMap : 1; // 0x27
	char bMetallicMap : 1; // 0x27
	char bRoughnessMap : 1; // 0x27
	char bSpecularMap : 1; // 0x27
	char bEmissiveMap : 1; // 0x27
	char bOpacityMap : 1; // 0x27
	char bOpacityMaskMap : 1; // 0x27
	char bAmbientOcclusionMap : 1; // 0x28
	FIntPoint DiffuseTextureSize; // 0x2c
	FIntPoint NormalTextureSize; // 0x34
	FIntPoint MetallicTextureSize; // 0x3c
	FIntPoint RoughnessTextureSize; // 0x44
	FIntPoint SpecularTextureSize; // 0x4c
	FIntPoint EmissiveTextureSize; // 0x54
	FIntPoint OpacityTextureSize; // 0x5c
	FIntPoint OpacityMaskTextureSize; // 0x64
	FIntPoint AmbientOcclusionTextureSize; // 0x6c
};

struct FSQAnimNode_BoneDrivenController {
	FBoneReference SourceBone; // 0xc8
	ESQComponentType SourceComponent; // 0xd8
	UCurveFloat* DrivingCurve; // 0xe0
	float Multiplier; // 0xe8
	bool bUseRange; // 0xec
	float RangeMin; // 0xf0
	float RangeMax; // 0xf4
	float RemappedMin; // 0xf8
	float RemappedMax; // 0xfc
	ESQDrivenDestinationMode DestinationMode; // 0x100
	FName ParameterName; // 0x104
	FBoneReference TargetBone; // 0x10c
	EBoneControlSpace TargetComponentSpace; // 0x11c
	ESQComponentType TargetComponent; // 0x11d
	char bAffectTargetTranslationX : 1; // 0x120
	char bAffectTargetTranslationY : 1; // 0x120
	char bAffectTargetTranslationZ : 1; // 0x120
	char bAffectTargetRotationX : 1; // 0x120
	char bAffectTargetRotationY : 1; // 0x120
	char bAffectTargetRotationZ : 1; // 0x120
	char bAffectTargetScaleX : 1; // 0x120
	char bAffectTargetScaleY : 1; // 0x120
	char bAffectTargetScaleZ : 1; // 0x121
	ESQDrivenBoneModificationMode ModificationMode; // 0x124
};

struct FSQBoundaryListenerData {
	bool bInsideBoundary; // 0x0
	float CheckTime; // 0x4
	float EntryTime; // 0x8
	float ExitTime; // 0xc
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FServerSetPlayerSecretRequest {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerUnlockContainerItemRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	FString PlayFabId; // 0x38
};

struct FGameplayEffectContext {
	TWeakObjectPtr<AActor> Instigator; // 0x8
	TWeakObjectPtr<AActor> EffectCauser; // 0x10
	TWeakObjectPtr<UGameplayAbility> AbilityCDO; // 0x18
	TWeakObjectPtr<UGameplayAbility> AbilityInstanceNotReplicated; // 0x20
	int AbilityLevel; // 0x28
	TWeakObjectPtr<UObject> SourceObject; // 0x2c
	TWeakObjectPtr<UAbilitySystemComponent> InstigatorAbilitySystemComponent; // 0x34
	TArray<TWeakObjectPtr<AActor>> Actors; // 0x40
	FVector WorldOrigin; // 0x60
	char bHasWorldOrigin : 1; // 0x6c
	char bReplicateSourceObject : 1; // 0x6c
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0xe0
	FStructSerializerArrayTestStruct Arrays; // 0x170
	FStructSerializerMapTestStruct Maps; // 0x1c0
	FStructSerializerSetTestStruct Sets; // 0x300
};

struct FConeConstraint {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FServerEvaluateRandomResultTableRequest {
	FString CatalogVersion; // 0x8
	FString TableId; // 0x18
};

struct FMeshMergingSettings {
	int TargetLightMapResolution; // 0x0
	EUVOutput OutputUVs[0x8]; // 0x4
	FMaterialProxySettings MaterialSettings; // 0xc
	int GutterSize; // 0x80
	int SpecificLOD; // 0x84
	EMeshLODSelectionType LODSelectionType; // 0x88
	char bGenerateLightMapUV : 1; // 0x89
	char bComputedLightMapResolution : 1; // 0x89
	char bPivotPointAtZero : 1; // 0x89
	char bMergePhysicsData : 1; // 0x89
	char bMergeMaterials : 1; // 0x89
	char bBakeVertexDataToMesh : 1; // 0x89
	char bUseVertexDataForBakingMaterial : 1; // 0x89
	char bUseTextureBinning : 1; // 0x89
	char bReuseMeshLightmapUVs : 1; // 0x8a
	char bMergeEquivalentMaterials : 1; // 0x8a
	char bUseLandscapeCulling : 1; // 0x8a
	char bIncludeImposters : 1; // 0x8a
	char bAllowDistanceField : 1; // 0x8a
};

struct FAdminDeletePlayerRequest {
	FString PlayFabId; // 0x8
};

struct FAdminGetServerBuildUploadURLRequest {
	FString BuildId; // 0x8
};

struct FMultiplayerCreateBuildWithManagedContainerResponse {
	FString BuildId; // 0x8
	FString BuildName; // 0x18
	EContainerFlavor ContainerFlavor; // 0x28
	FString CreationTime; // 0x30
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x40
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x50
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x60
	UPlayFabJsonObject* MetaData; // 0x68
	int MultiplayerServerCountPerVm; // 0x70
	TArray<UPlayFabJsonObject*> Ports; // 0x78
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x88
	FString StartMultiplayerServerCommand; // 0x98
	EAzureVmSize VmSize; // 0xa8
};

struct FMovieSceneAdditiveCameraAnimationTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FKey {
	FName KeyName; // 0x0
};

struct FNavAgentProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FSQCommanderActionDataArray {
	TArray<FSQCommandActionDataFASItem> Items; // 0x108
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
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

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FIntPoint {
	int X; // 0x0
	int Y; // 0x4
};

struct FAdminUpdateUserInternalDataRequest {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
};

struct FServerRevokeInventoryResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FAdminGetServerBuildUploadURLResult {
	FString URL; // 0x8
};

struct FMultiplayerDeleteCertificateRequest {
	FString Name; // 0x8
};

struct FAnimNode_SubInput {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FMultiplayerCancelServerBackfillTicketResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	FName ObjectTypeName; // 0xc
	TArray<FResponseChannel> CustomResponses; // 0x18
	FString HelpMessage; // 0x28
	bool bCanModify; // 0x38
};

struct FMultiplayerCreateRemoteUserRequest {
	FString BuildId; // 0x8
	FString ExpirationTime; // 0x18
	FString Region; // 0x28
	FString username; // 0x38
	FString VmId; // 0x48
};

struct FClientUpdateUserDataResult {
	int DataVersion; // 0x8
};

struct FClientLinkCustomIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FFloatCurve {
	FRichCurve FloatCurve; // 0x18
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32 Offset; // 0x10
	uint32 Size; // 0x14
};

struct FServerSetPlayerSecretResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
	int ParticleIndex; // 0x1c
};

struct FAdminGetPlayerSharedSecretsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FSoundConcurrencySettings {
	int MaxCount; // 0x0
	char bLimitToOwner : 1; // 0x4
	EMaxConcurrentResolutionRule ResolutionRule; // 0x8
	float VolumeScale; // 0xc
	float VolumeScaleAttackTime; // 0x10
	char bVolumeScaleCanRelease : 1; // 0x14
	float VolumeScaleReleaseTime; // 0x18
	float VoiceStealReleaseTime; // 0x1c
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FSQRotator_NetQuantizeShorts {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FClientSetFriendTagsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGameplayEffectRemovalInfo {
	bool bPrematureRemoval; // 0x0
	int StackCount; // 0x4
	FGameplayEffectContextHandle EffectContext; // 0x8
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FClientGetStoreItemsResult {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FARVideoFormat {
	int FPS; // 0x0
	int Width; // 0x4
	int Height; // 0x8
};

struct FAnimNode_BlendSpaceEvaluator {
	float NormalizedTime; // 0xe0
};

struct FServerSendPushNotificationResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGameplayModifierInfo {
	FGameplayAttribute Attribute; // 0x0
	EGameplayModOp ModifierOp; // 0x20
	FScalableFloat Magnitude; // 0x28
	FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x48
	FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x1d8
	FGameplayTagRequirements SourceTags; // 0x1e0
	FGameplayTagRequirements TargetTags; // 0x220
};

struct FTransformConstraintDescription {
	ETransformConstraintType TransformType; // 0x10
};

struct FProfilesSetProfileLanguageRequest {
	UPlayFabJsonObject* Entity; // 0x8
	int ExpectedVersion; // 0x10
	FString Language; // 0x18
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FGroupsListGroupInvitationsRequest {
	UPlayFabJsonObject* Group; // 0x8
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
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

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FDataGetObjectsRequest {
	UPlayFabJsonObject* Entity; // 0x8
	bool EscapeObject; // 0x10
};

struct FClientLinkWindowsHelloAccountRequest {
	FString DeviceName; // 0x8
	bool ForceLink; // 0x18
	FString PublicKey; // 0x20
	FString username; // 0x30
};

struct FSQRoleKitIconLookup {
	USQRoleSettings* RoleSetting; // 0x8
};

struct FSQJoyStickConfig {
	ESQJoystickCurveTypes CurveType; // 0x0
	float DeadZone; // 0x4
	bool FlipFactor; // 0x8
	float CurveFactor; // 0xc
};

struct FAdminRevokeAllBansForUserRequest {
	FString PlayFabId; // 0x8
};

struct FClientRemoveSharedGroupMembersResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientLinkXboxAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSQDamageModifier {
	UDamageType* DamageTypeClass; // 0x0
	float Modifier; // 0x8
	bool bForwardDamageToSoldier; // 0xc
	float ForwardDamageToSoldierModifier; // 0x10
	bool bForwardDeathToSoldier; // 0x14
	bool bIncapSoldierOnDeath; // 0x15
	bool bOnlyPassDamageIfDirectHit; // 0x16
	float DirectHitDamageMultiplier; // 0x18
	float IndirectHitDamageMultiplier; // 0x1c
	float DirectHitRadialDamageMultiplier; // 0x20
};

struct FSQOnlineInventorySetting {
	int ItemId; // 0x0
	bool bEnabled; // 0x4
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int MaxChannels; // 0x18
};

struct FSQGroundVehicleWheelParameters {
	float WheelsInAir; // 0x0
	float RPM; // 0x4
	float LongSlip; // 0x8
	float LatSlip; // 0xc
	float Asphalt; // 0x10
	float Dirt; // 0x14
	float Grass; // 0x18
	float Gravel; // 0x1c
	float Metal; // 0x20
	float Mud; // 0x24
	float Sand; // 0x28
	float Snow; // 0x2c
	float SnowWet; // 0x30
	float TallGrass; // 0x34
	float Water; // 0x38
	float Wood; // 0x3c
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
	FName NotifyFunctionName; // 0x20
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FMovieSceneStringChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FSQFireTriggerMontage {
	UAnimMontage* FireWeaponMontage; // 0x0
	UAnimMontage* FireTriggerMontage; // 0x8
};

struct FServerGetLeaderboardAroundUserRequest {
	int MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int Version; // 0x3c
};

struct FARSkeletonDefinition {
	int NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int> ParentIndices; // 0x18
};

struct FMovieSceneComponentTransformSectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x20
};

struct FServerUpdateSharedGroupDataRequest {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
};

struct FVertexInstanceID {
	int IDValue; // 0x0
};

struct FClientGetPlayFabIDsFromFacebookIDsRequest {
	FString FacebookIDs; // 0x8
};

struct FIntVector {
	int X; // 0x0
	int Y; // 0x4
	int Z; // 0x8
};

struct FClientValidateWindowsReceiptRequest {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int PurchasePrice; // 0x28
	FString Receipt; // 0x30
};

struct FMultiplayerJoinMatchmakingTicketRequest {
	UPlayFabJsonObject* Member; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FVehicleOccupantsItem {
	FSQVehicleOccupantInfo VehicleOccupantInfo; // 0x10
	uint8 SeatId; // 0x48
	char DirtyCount; // 0x49
};

struct FServerDeletePlayerResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FActiveGameplayEffect {
	FGameplayEffectSpec Spec; // 0x18
	FPredictionKey PredictionKey; // 0x2b0
	float StartServerWorldTime; // 0x2c8
	float CachedStartServerWorldTime; // 0x2cc
	float StartWorldTime; // 0x2d0
	bool bIsInhibited; // 0x2d4
};

struct FKSphereElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FAdminRemoveServerBuildRequest {
	FString BuildId; // 0x8
};

struct FUniqueNetIdRepl {
	TArray<char> ReplicationBytes; // 0x18
};

struct FClientGrantCharacterToUserResult {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	bool Result; // 0x28
};

struct FServerSendCustomAccountRecoveryEmailRequest {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
	FString username; // 0x28
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
};

struct FServerGetCharacterLeaderboardResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FAIDataProviderFloatValue {
	float DefaultValue; // 0x28
};

struct FSkeletalMeshClothBuildParams {
	TWeakObjectPtr<UClothingAssetBase> TargetAsset; // 0x0
	int TargetLod; // 0x8
	bool bRemapParameters; // 0xc
	FString AssetName; // 0x10
	int LODIndex; // 0x20
	int SourceSection; // 0x24
	bool bRemoveFromMesh; // 0x28
	UPhysicsAsset* PhysicsAsset; // 0x30
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FFontOutlineSettings {
	int OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FRichImageRow {
	FSlateBrush Brush; // 0x8
};

struct FClientGetCharacterInventoryResult {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FClientGetWindowsHelloChallengeRequest {
	FString PublicKeyHint; // 0x8
};

struct FClientUnlinkKongregateAccountRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FSQRotationVelocityRepMovement {
	FVector LocationZeroBased; // 0x8
	FVector Velocity; // 0x14
	FRotator Rotation; // 0x20
	FVector RotationalVelocity; // 0x2c
	float ServerTimestamp; // 0x38
};

struct FServerLinkPSNAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGrantItemsToUsersRequest {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FBoneMirrorInfo {
	int SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
};

struct FSQActionGroupingStrategy {
	FText DisplayName_2_17E0D23A4D20C3A14A5248A4FB796EDF; // 0x0
	UTexture2D* Icon_5_25C81F3D485EDEA183DC62A6AFAC2019; // 0x18
	ESQAction TargetType_9_5616FDFA4714B15259D9E3A21E05F22A; // 0x40
	bool ReversedRule_12_D6B0985A49C7BE841CE0BCB6AE12F4C1; // 0x41
};

struct FAdminExportMasterPlayerDataRequest {
	FString PlayFabId; // 0x8
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FMultiplayerCancelMatchmakingTicketResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPartyReservation {
	int TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FSQOptionsStyle {
	FSlateSound AcceptChangesSound; // 0x8
	FSlateSound DiscardChangesSound; // 0x20
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAdminGetPlayersInSegmentRequest {
	FString ContinuationToken; // 0x8
	int MaxBatchSize; // 0x18
	int SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FSSGS_ColorRangeGradient {
	int Low; // 0x0
	int High; // 0x4
	FSSGS_ColorGradient Color; // 0x8
};

struct FSQClimbTypeData {
	float EndSpace; // 0x8
	float MaxHeight; // 0xc
	float RequiredAnimationTime; // 0x10
	bool bFiringDisabled; // 0x14
	float StaminaCost; // 0x18
	UAnimMontage* Montage1P; // 0x20
	UAnimMontage* Montage3P; // 0x28
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FRootMotionSource_MoveToDynamicForce {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FServerGetRandomResultTablesRequest {
	FString CatalogVersion; // 0x8
	FString TableIDs; // 0x18
};

struct FAnimNode_Layer {
	UAnimLayerInterface* Interface; // 0x90
	FName Layer; // 0x98
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FGameplayAbilityRepAnimMontage {
	UAnimMontage* AnimMontage; // 0x0
	float PlayRate; // 0x8
	float Position; // 0xc
	float BlendTime; // 0x10
	char NextSectionID; // 0x14
	char IsStopped : 1; // 0x15
	char ForcePlayBit : 1; // 0x15
	char SkipPositionCorrection : 1; // 0x15
	char bSkipPlayRate : 1; // 0x15
	FPredictionKey PredictionKey; // 0x18
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FServerGetLeaderboardAroundUserResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int Version; // 0x28
};

struct FServerGetSharedGroupDataRequest {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FSkeletonToMeshLinkup {
	TArray<int> SkeletonToMeshTable; // 0x0
	TArray<int> MeshToSkeletonTable; // 0x10
};

struct FClientLoginWithGameCenterRequest {
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

struct FAdminUpdateUserTitleDisplayNameResult {
	FString DisplayName; // 0x8
};

struct FServerRedeemCouponResult {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FGameplayAbilityTargetData_ActorArray {
	FGameplayAbilityTargetingLocationInfo SourceLocation; // 0x10
	TArray<TWeakObjectPtr<AActor>> TargetActorArray; // 0x80
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FClientLinkFacebookAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_SequenceEvaluator {
	UAnimSequenceBase* Sequence; // 0x30
	float ExplicitTime; // 0x38
	bool bShouldLoop; // 0x3c
	bool bTeleportToExplicitTime; // 0x3d
	ESequenceEvalReinit ReinitializationBehavior; // 0x3e
	float StartPosition; // 0x40
};

struct FGenericTeamId {
	char TeamId; // 0x0
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FGameplayAbilitySpecHandle {
	int Handle; // 0x0
};

struct FServerUpdatePlayerStatisticsRequest {
	bool ForceUpdate; // 0x8
	FString PlayFabId; // 0x10
	TArray<UPlayFabJsonObject*> Statistics; // 0x20
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

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FMovieSceneIntegerPropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x48
	EMovieSceneBlendType BlendType; // 0xd8
};

struct FServerGetStoreItemsServerRequest {
	FString CatalogVersion; // 0x8
	FString PlayFabId; // 0x18
	FString StoreId; // 0x28
};

struct FSQMenuItemStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush LeftArrowImage; // 0x90
	FSlateBrush RightArrowImage; // 0x118
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FGameplayEffectCue {
	FGameplayAttribute MagnitudeAttribute; // 0x0
	float MinLevel; // 0x20
	float MaxLevel; // 0x24
	FGameplayTagContainer GameplayCueTags; // 0x28
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentData Tangent; // 0x8
};

struct FClientLoginWithGoogleAccountRequest {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString ServerAuthCode; // 0x38
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FSQVehicleCountModifier {
	TSet<ESQVehicle> TargetType_7_F90601ED40463964DEF8C0A76ED3DFB7; // 0x0
	TSet<ESQVehicleTag> TargetTags_3_5DD977BA42F28411830DF39CC6BC5865; // 0x50
	int Modifier_12_AD280A0344E05118EF7C028BE593AC98; // 0xa0
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FServerRemoveFriendRequest {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
};

struct FMovieSceneMaterialParameterCollectionTemplate {
	UMaterialParameterCollection* MPC; // 0x50
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

struct FAdminGetPlayerTagsRequest {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerDeregisterGameResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMaterialShadingModelField {
	uint16 ShadingModelField; // 0x0
};

struct FAdminGetMatchmakerGameModesResult {
	TArray<UPlayFabJsonObject*> GameModes; // 0x8
};

struct FSQApprovalEntryRequestMessage {
	FText MainText; // 0x8
	UTexture2D* Icon; // 0x20
	FText Description; // 0x28
};

struct FAbilityTriggerData {
	FGameplayTag TriggerTag; // 0x0
	EGameplayAbilityTriggerSource TriggerSource; // 0x8
};

struct FAdminRevokeInventoryItemsRequest {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FAdminRemovePlayerTagResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FModdingRuntimeModInfoDetails {
	FString SteamWorkshopURL; // 0x0
	FString ModName; // 0x10
	FString Description; // 0x20
	FString ImageUrl; // 0x30
	float Rating; // 0x40
	FString DayTimeCreated; // 0x48
	FString DayTimeUpdated; // 0x58
	FString NumSubscriptions; // 0x68
	FString NumUniqueVisitors; // 0x78
	FString NumFavorites; // 0x88
	int UpVotes; // 0x98
	int DownVotes; // 0x9c
};

struct FVector_NetQuantize10 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FSQRepMovement {
	FVector LocationZeroBased; // 0x8
	FVector Velocity; // 0x14
	FRotator Rotation; // 0x20
	FVector RotationalVelocity; // 0x2c
	float ServerTimestamp; // 0x38
};

struct FServerGetCatalogItemsResult {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FPartyPrivacySettings {
	EPartyType PartyType; // 0x0
	EPartyInviteRestriction PartyInviteRestriction; // 0x1
	bool bOnlyLeaderFriendsCanJoin; // 0x2
};

struct FAdminGetPlayerSegmentsResult {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FClientGetCharacterLeaderboardResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FSQPatchItem {
	FText PatchName; // 0x0
	FText PatchDescription; // 0x18
	UTexture2D* PatchImage; // 0x30
	UTexture2D* PatchImageUI; // 0x38
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FSQBlueprintFriend {
	FString DisplayName; // 0x0
	FString RealName; // 0x10
	FString StatusString; // 0x20
	bool bIsOnline; // 0x30
	bool bIsPlaying; // 0x31
	bool bIsPlayingThisGame; // 0x32
	bool bIsJoinable; // 0x33
};

struct FAdminGetDataReportRequest {
	int Day; // 0x8
	int Month; // 0xc
	FString ReportName; // 0x10
	int Year; // 0x20
};

struct FMultiplayerListAssetSummariesRequest {
	int PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FMultiplayerCancelMatchmakingTicketRequest {
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FServerGetTimeRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FGameplayEffectAttributeCaptureSpec {
	FGameplayEffectAttributeCaptureDefinition BackingDefinition; // 0x0
};

struct FServerGrantCharacterToUserResult {
	FString CharacterId; // 0x8
};

struct FSearchBoxStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x7f8
	FSlateBrush UpArrowImage; // 0x848
	FSlateBrush DownArrowImage; // 0x8d0
	FSlateBrush GlassImage; // 0x958
	FSlateBrush ClearImage; // 0x9e0
	FMargin ImagePadding; // 0xa68
	bool bLeftAlignButtons; // 0xa78
};

struct FAdminModifyMatchmakerGameModesResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FProfilesSetGlobalPolicyResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FAnimNode_Fabrik {
	FTransform EffectorTransform; // 0xd0
	FBoneSocketTarget EffectorTarget; // 0x100
	FBoneReference TipBone; // 0x160
	FBoneReference RootBone; // 0x170
	float Precision; // 0x180
	int MaxIterations; // 0x184
	EBoneControlSpace EffectorTransformSpace; // 0x188
	EBoneRotationSource EffectorRotationSource; // 0x189
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FQosDatacenterInfo {
	FString ID; // 0x0
	FString RegionId; // 0x10
	bool bEnabled; // 0x20
	TArray<FQosPingServerInfo> Servers; // 0x28
};

struct FClientUpdateCharacterStatisticsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FAnimLegIKDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x10
	int NumBonesInLimb; // 0x20
	float MinRotationAngle; // 0x24
	EAxis FootBoneForwardAxis; // 0x28
	EAxis HingeRotationAxis; // 0x29
	bool bEnableRotationLimit; // 0x2a
	bool bEnableKneeTwistCorrection; // 0x2b
};

struct FAnimNode_PoseSnapshot {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FComponentSpacePoseLink {
	int LinkID; // 0x0
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int ElementIndex; // 0x10
};

struct FSQSystemHUDMessage {
	FString Message; // 0x0
	FLinearColor Color; // 0x10
	float MessageLifetime; // 0x20
};

struct FAIDataProviderTypedValue {
	UProperty* PropertyType; // 0x20
};

struct FForceFeedbackAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	FVector AttenuationShapeExtents; // 0x10
	float ConeOffset; // 0x1c
	float FalloffDistance; // 0x20
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FMultiplayerListServerBackfillTicketsForPlayerRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FServerUnlinkServerCustomIdResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FAnimNode_ObserveBone {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	bool bPlaying; // 0x28
	float DefaultBlendTimeMultiplier; // 0x2c
	TArray<int> NextSections; // 0xe8
	TArray<int> PrevSections; // 0xf8
	TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0x118
	float Position; // 0x128
	float PlayRate; // 0x12c
	FAlphaBlend Blend; // 0x130
	int DisableRootMotionCount; // 0x180
};

struct FSQLatticeLine {
	FVector StartWorldLocation; // 0x0
	FVector EndWorldLocation; // 0xc
	FLinearColor Color; // 0x18
	float EdgeWidth; // 0x28
};

struct FChannelDatabase {
	UMultiPackerDataBase* Database; // 0x0
	FName Name; // 0x8
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
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

struct FPlayerWidgetPair {
	USQScoreboardPlayer* PlayerWidget; // 0x0
	ASQPlayerState* PlayerState; // 0x8
};

struct FSQWaypoint {
	FVector WorldPosition; // 0x0
	FVector2D MapPosition; // 0xc
	TArray<FVector2D> PathPoints; // 0x18
	UTexture2D* IconTexture; // 0x28
};

struct FClientConsumePSNEntitlementsRequest {
	FString CatalogVersion; // 0x8
	int ServiceLabel; // 0x18
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FServerSendPushNotificationRequest {
	TArray<UPlayFabJsonObject*> AdvancedPlatformDelivery; // 0x8
	FString Message; // 0x18
	UPlayFabJsonObject* Package; // 0x28
	FString Recipient; // 0x30
	FString Subject; // 0x40
	FString TargetPlatforms; // 0x50
};

struct FRectSizePadding {
	uint16 X; // 0x0
	uint16 Y; // 0x2
	uint16 Width; // 0x4
	uint16 Height; // 0x6
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FSubmixEffectEQBand {
	float frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FMaterialAttributesInput {
	int PropertyConnectedBitmask; // 0xc
};

struct FClientRefreshPSNAuthTokenRequest {
	FString AuthCode; // 0x8
	int IssuerId; // 0x18
	FString RedirectUri; // 0x20
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FSSGS_FrameDataRange {
	int Low; // 0x8
	int High; // 0xc
	TArray<FSSGS_FrameData> datas; // 0x10
};

struct FAnimNode_StateResult {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FBlueprintInputAxisKeyDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FAdminGetContentUploadUrlRequest {
	FString ContentType; // 0x8
	FString Key; // 0x18
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FSSGS_FrequencyRepeatLimitPair {
	int Low; // 0x0
	int High; // 0x4
	int frequency; // 0x8
	int repeat_limit; // 0xc
};

struct FSQDynamicEasingStruct {
	float Target; // 0x0
	float Position; // 0x4
	float Velocity; // 0x8
	float Acceleration; // 0xc
	float OppositeAcceleration; // 0x10
};

struct FServerGetTitleDataResult {
	UPlayFabJsonObject* Data; // 0x8
};

struct FSQVehicleSeatTransitionState {
	ESQSoldierSeatState SoldierSeatState; // 0x0
	float CollisionDamageMultipler; // 0x4
	bool bSoldierCanTakeDirectRadialDamage; // 0x8
	bool bAllowDetachSoldier; // 0x9
	bool bEjectDeadSoldier; // 0xa
	bool bEjectIncappedSoldier; // 0xb
	bool bSeatIsInTheOpen; // 0xc
	bool bOnlyPlayExteriorVehicleSounds; // 0xd
	USoundMix* SoundMix; // 0x10
	ESQListenerType ListenerTypeOverride; // 0x18
};

struct FAdminGetTitleDataRequest {
	FString Keys; // 0x8
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FServerSetGameServerInstanceTagsRequest {
	FString LobbyId; // 0x8
	UPlayFabJsonObject* Tags; // 0x18
};

struct FServerEmptyResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerMoveItemToUserFromCharacterResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneBytePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x48
};

struct FAdminEmptyResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetUserBansResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FExpressionInput {
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FStructSerializerMapTestStruct {
	TMap<int, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
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

struct FAbilityEndedData {
	UGameplayAbility* AbilityThatEnded; // 0x0
	FGameplayAbilitySpecHandle AbilitySpecHandle; // 0x8
	bool bReplicateEndAbility; // 0xc
	bool bWasCancelled; // 0xd
};

struct FSQVehicleDestroyEffectConfig {
	UParticleSystem* ParticleSystemTemplate; // 0x0
	UDamageType* DamageType; // 0x8
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FServerGetLeaderboardAroundCharacterRequest {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int MaxResultsCount; // 0x28
	FString PlayFabId; // 0x30
	FString StatisticName; // 0x40
};

struct FSQVoteConfig {
	FDataTableRowHandle Data; // 0x0
	FTimespan Duration; // 0x10
	FTimespan ResultPresentationDuration; // 0x18
	ESQAdminAccessLevels AccessFilter; // 0x20
	TArray<ESQTeam> TeamFilter; // 0x28
	USQVoteSessionAuthority* AuthoritySessionType; // 0x38
};

struct FSQMeshTransitionSettings {
	float TransitionValue; // 0x0
	UStaticMesh* Mesh; // 0x8
	FTransform MeshTransform; // 0x10
};

struct FMovieSceneBoolPropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48
};

struct FTwistConstraint {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FSQVehicleEffectsQualitySetting {
	bool bEnabled; // 0x0
	float CullingDistance; // 0x4
};

struct FDatacenterQosInstance {
	FQosDatacenterInfo Definition; // 0x0
	EQosDatacenterResult Result; // 0x38
	int AvgPingMs; // 0x3c
	TArray<int> PingResults; // 0x40
	FDateTime LastCheckTimestamp; // 0x58
	bool bUsable; // 0x60
};

struct FClientEmptyResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FServerAnalyticsData {
	FString GameVersion; // 0x0
	FString MapName; // 0x10
	char tick_Min; // 0x20
	char tick_Max; // 0x21
	char tick_q1; // 0x22
	char tick_Mean; // 0x23
	char tick_q3; // 0x24
	int pop_Mean; // 0x28
	int pop_Max; // 0x2c
	int samplesTaken; // 0x30
};

struct FAnimNode_BlendListByInt {
	int ActiveChildIndex; // 0x98
};

struct FSQMedicCalls {
	USoundCue* MedicCO; // 0x0
	USoundCue* MedicSL; // 0x28
	USoundCue* MedicGrunt; // 0x50
};

struct FGameplayTagTableRow {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FPrimaryAssetRules {
	int Priority; // 0x0
	bool bApplyRecursively; // 0x4
	int ChunkId; // 0x8
	EPrimaryAssetCookRule CookRule; // 0xc
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FSocialChatChannelConfig {
	USocialUser* SocialUser; // 0x0
	TArray<USocialChatChannel*> ListenChannels; // 0x18
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FSQServerSettings {
	FString ServerName; // 0x0
	int NumPlayersDiffForTeamChanges; // 0x20
	bool bAllowTeamChanges; // 0x24
	bool bPreventTeamChangeIfUnbalanced; // 0x25
	bool bEnforceTeamBalance; // 0x26
	bool bCommunityAdminAccess; // 0x27
	bool bRecordDemos; // 0x28
	bool bAllowPublicClientsToRecord; // 0x29
	int NumReservedSlots; // 0x2c
	int PublicQueueLimit; // 0x30
	int RejoinSquadDelayAfterKick; // 0x34
	int MaxPlayers; // 0x38
	int ServerMessageInterval; // 0x44
	int AutoTKBanTime; // 0x60
	int AutoTKBanNumberTKs; // 0x64
	bool bTKAutoKickEnabled; // 0x6a
	FString MessageOfTheDay; // 0x70
	ESQMapRotationMode MapRotationMode; // 0x80
	bool RandomizeAtStart; // 0x81
	bool UseVoteFactions; // 0x82
	bool UseVoteLevel; // 0x83
	bool UseVoteLayer; // 0x84
	TArray<FName> LevelRotation; // 0x88
	TArray<FName> LayerRotation; // 0x98
	TArray<FName> ExcludedFactions; // 0xa8
	TArray<FName> ExcludedFactionSetups; // 0xb8
	TArray<FName> ExcludedLevels; // 0xc8
	TArray<FName> ExcludedLayers; // 0xd8
	TMap<FString, FString> CustomOptions; // 0xe8
	int LevelCountPerVote; // 0x138
	FSQVoteConfig LevelVoteConfig; // 0x140
	int LayerCountPerVote; // 0x180
	FSQVoteConfig LayerVoteConfig; // 0x188
	TArray<FSQVoteConfig> FactionVoteConfigs; // 0x1c8
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FMultiplayerListMatchmakingTicketsForPlayerResult {
	FString TicketIds; // 0x8
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

struct FFastArraySerializer {
	int ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FSQAmmoReductionConfig {
	bool bAmmoReductionEnabled; // 0x0
	bool bAffectAllWeapons; // 0x1
	float AmmoPercentageToLeave; // 0x4
	bool bAffectCurrentMagazine; // 0x8
	bool bAffectCurrentMagIfEquipped; // 0x9
	TArray<FSQWeaponAmmoReductionConfig> PerWeaponAmmoReduction; // 0x10
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FServerDeletePushNotificationTemplateResult {
	UPlayFabJsonObject* Request; // 0x0
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
	int MinLightmapResolution; // 0x4
	int SrcLightmapIndex; // 0x8
	int DstLightmapIndex; // 0xc
};

struct FVector_NetQuantize {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FGameplayCueTranslatorNode {
	TArray<FGameplayCueTranslationLink> Links; // 0x0
	FGameplayCueTranslatorNodeIndex CachedIndex; // 0x10
	FGameplayTag CachedGameplayTag; // 0x14
	FName CachedGameplayTagName; // 0x1c
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int NumChannels; // 0x8
};

struct FSQCoreStateDataList {
	TArray<USQCoreStateData*> Raw; // 0x0
};

struct FVehicleTankTransmissionData {
	bool bUseGearAutoBox; // 0x0
	float GearSwitchTime; // 0x4
	float GearAutoBoxLatency; // 0x8
	float FinalRatio; // 0xc
	TArray<FVehicleTankGearData> ForwardGears; // 0x10
	TArray<FVehicleTankGearData> BackwardGears; // 0x20
	float ReverseGearRatio; // 0x30
	float NeutralGearUpRatio; // 0x34
	float NeutralGearDownRatio; // 0x38
	float ClutchStrength; // 0x3c
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FSQClimbOverData {
	float MaxMoveDistance; // 0x0
	float MinMiddleMoveDistance; // 0x4
	float MidCollisionShapeScale; // 0x8
	FSQClimbOverTypeData Low; // 0x10
	FSQClimbOverTypeData Mid; // 0x58
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

struct FAdminListBuildsResult {
	TArray<UPlayFabJsonObject*> Builds; // 0x8
};

struct FAdminUpdateStoreItemsRequest {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	TArray<UPlayFabJsonObject*> Store; // 0x20
	FString StoreId; // 0x30
};

struct FClientGetContentDownloadUrlResult {
	FString URL; // 0x8
};

struct FAdjustPositionAndRotationPacket {
	uint32 UniqueID; // 0x0
	float Timestamp; // 0x4
	bool IsAcknowledge; // 0x8
	bool HasPosition; // 0x9
	bool HasRotation; // 0xa
	bool HasRotationVelocity; // 0xb
	FVector LocationZeroBased; // 0xc
	FVector Velocity; // 0x18
	FRotator Rotation; // 0x24
};

struct FClientUnlinkCustomIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FClientUnlinkSteamAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FGroupsListMembershipOpportunitiesResponse {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
	TArray<UPlayFabJsonObject*> Invitations; // 0x18
};

struct FAdminBanUsersRequest {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FPackedRGB10A2N {
	int Packed; // 0x0
};

struct FAuthenticationValidateEntityTokenRequest {
	FString EntityToken; // 0x8
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FAdminGetServerBuildInfoRequest {
	FString BuildId; // 0x8
};

struct FClientValidateIOSReceiptResult {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
	UFloatProperty* FloatProperty; // 0x28
};

struct FMultiplayerListCertificateSummariesResponse {
	TArray<UPlayFabJsonObject*> CertificateSummaries; // 0x8
	int PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32 MBPNumSubdivs; // 0x3c
};

struct FClientUninkOpenIdConnectRequest {
	FString ConnectionId; // 0x8
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

struct FClientWriteEventResponse {
	FString EventId; // 0x8
};

struct FAdminSetPublisherDataRequest {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FSQRotationConstraints {
	FVector2D PitchInterval; // 0x0
	FVector2D YawInterval; // 0x8
	FVector2D RollInterval; // 0x10
	bool bLockPitch; // 0x18
	bool bLockYaw; // 0x19
	bool bLockRoll; // 0x1a
};

struct FClientLinkSteamAccountRequest {
	bool ForceLink; // 0x8
	FString SteamTicket; // 0x10
};

struct FSQGameModeEntry {
	FText DisplayName_4_9731CC49444EBC0537B49D9B402B1D91; // 0x0
	FText Description_5_D3C593ED4E6A73F076885FA521D265F2; // 0x18
	FText Instructions_14_83AB5F3D4DB18489485022A30FC0E743; // 0x30
	UTexture2D* Icon_8_A053F0D649C0304DC223248A39FD50E0; // 0x48
	UTexture2D* Logo_10_B06AB5274A9EB2915F6DA4A4BB6A943F; // 0x70
	UTexture2D* HelpImage_15_7C6A985248269109DE665ABBD4E4A97F; // 0x98
	FText NeutralText_49_58F0337E408E8B27D3FB17AD9654AE6B; // 0xc0
	FText AttackerText_48_380D41444D5A0B9F27618BBEDE47708A; // 0xd8
	FText DefenderText_47_80F3F2164F9C63C73A56E1B0216DB80D; // 0xf0
	UClass* Widget_29_00180EA8495022F358048488F98D8B78; // 0x108
	bool ShowTCButton_39_EE3A0BE54EF11F5BFD9D45B4692FE969; // 0x130
	FTimespan StagingTime_54_C22452B94634B82EB77CEC91F833A1E9; // 0x138
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FSQMutualWeapon {
	ASQEquipableItem* Weapon; // 0x0
	bool bCheckCurrentMagazineForEquip; // 0x8
	bool CheckCurrentMagazineForUnequip; // 0x9
	bool bCheckPreviousMagazineForEquip; // 0xa
	UAnimMontage* BothEmptyWeaponEquipMontage; // 0x10
	UAnimMontage* BothEmpty1pEquipMontage; // 0x18
	UAnimMontage* BothEmpty3pEquipMontage; // 0x20
	float BothEmptyEquipDuration; // 0x28
	UAnimMontage* PreviousEmptyOrIgnoreCurrentWeaponEquipMontage; // 0x30
	UAnimMontage* PreviousEmptyOrIgnoreCurrent1pEquipMontage; // 0x38
	UAnimMontage* PreviousEmptyOrIgnoreCurrent3pEquipMontage; // 0x40
	float PreviousEmptyOrIgnoreCurrentEquipDuration; // 0x48
	UAnimMontage* CurrentEmptyOrIgnorePreviousWeaponEquipMontage; // 0x50
	UAnimMontage* CurrentEmptyOrIgnorePrevious1pEquipMontage; // 0x58
	UAnimMontage* CurrentEmptyOrIgnorePrevious3pEquipMontage; // 0x60
	float CurrentEmptyOrIgnorePreviousEquipDuration; // 0x68
	UAnimMontage* NoneEmptyOrIgnoreBothWeaponEquipMontage; // 0x70
	UAnimMontage* NoneEmptyOrIgnoreBoth1pEquipMontage; // 0x78
	UAnimMontage* NoneEmptyOrIgnoreBoth3pEquipMontage; // 0x80
	float NoneEmptyOrIgnoreBothEquipDuration; // 0x88
	UAnimMontage* CurrentEmptyWeaponUnequipMontage; // 0x90
	UAnimMontage* CurrentEmpty1pUnequipMontage; // 0x98
	UAnimMontage* CurrentEmpty3pUnequipMontage; // 0xa0
	float CurrentEmptyUnequipDuration; // 0xa8
	UAnimMontage* NoneOrIgnoreCurrentWeaponUnequipMontage; // 0xb0
	UAnimMontage* NoneOrIgnoreCurrent1pUnequipMontage; // 0xb8
	UAnimMontage* NoneOrIgnoreCurrent3pUnequipMontage; // 0xc0
	float NoneOrIgnoreCurrentUnequipDuration; // 0xc8
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int BlendDepth; // 0x8
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FGroupsEmptyResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerEvaluateRandomResultTableResult {
	FString ResultItemId; // 0x8
};

struct FActiveGameplayEffectsContainer {
	TArray<FActiveGameplayEffect> GameplayEffects_Internal; // 0x138
	TArray<UGameplayEffect*> ApplicationImmunityQueryEffects; // 0x458
};

struct FClientLinkNintendoSwitchDeviceIdResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int ShotNumber; // 0x10
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	int BoneIndex; // 0x10
};

struct FClientGetPlayFabIDsFromTwitchIDsRequest {
	FString TwitchIds; // 0x8
};

struct FSQChatStyle {
	FEditableTextBoxStyle TextEntryStyle; // 0x8
	FSlateBrush BackingBrush; // 0x7f8
	FSlateColor BoxBorderColor; // 0x880
	FSlateColor TextColor; // 0x8a8
	FSlateSound RxMessgeSound; // 0x8d0
	FSlateSound TxMessgeSound; // 0x8e8
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FAdminGetUserBansResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FAdminGetTaskInstanceRequest {
	FString TaskInstanceId; // 0x8
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
	int LODThreshold; // 0x58
	TArray<FPerBoneBlendWeight> PerBoneBlendWeights; // 0x60
	FGuid SkeletonGuid; // 0x70
	FGuid VirtualBoneGuid; // 0x80
};

struct FVolumeControlStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FMovieSceneComponentMaterialSectionTemplate {
	int MaterialIndex; // 0x50
};

struct FGameplayAbilitySpecHandleAndPredictionKey {
	FGameplayAbilitySpecHandle AbilityHandle; // 0x0
	int PredictionKeyAtCreation; // 0x4
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
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

struct FGPUSpriteEmitterInfo {
	UParticleModuleRequired* RequiredModule; // 0x0
	UParticleModuleSpawn* SpawnModule; // 0x8
	UParticleModuleSpawnPerUnit* SpawnPerUnitModule; // 0x10
	TArray<UParticleModule*> SpawnModules; // 0x18
	FGPUSpriteLocalVectorFieldInfo LocalVectorField; // 0x30
	FFloatDistribution VectorFieldScale; // 0xa0
	FFloatDistribution DragCoefficient; // 0xc8
	FFloatDistribution PointAttractorStrength; // 0xf0
	FFloatDistribution Resilience; // 0x118
	FVector ConstantAcceleration; // 0x140
	FVector PointAttractorPosition; // 0x14c
	float PointAttractorRadiusSq; // 0x158
	FVector OrbitOffsetBase; // 0x15c
	FVector OrbitOffsetRange; // 0x168
	FVector2D InvMaxSize; // 0x174
	float InvRotationRateScale; // 0x17c
	float MaxLifetime; // 0x180
	int MaxParticleCount; // 0x184
	EParticleScreenAlignment ScreenAlignment; // 0x188
	EParticleAxisLock LockAxisFlag; // 0x189
	char bEnableCollision : 1; // 0x18c
	EParticleCollisionMode CollisionMode; // 0x190
	char bRemoveHMDRoll : 1; // 0x194
	float MinFacingCameraBlendDistance; // 0x198
	float MaxFacingCameraBlendDistance; // 0x19c
	FRawDistributionVector DynamicColor; // 0x1a0
	FRawDistributionFloat DynamicAlpha; // 0x1f0
	FRawDistributionVector DynamicColorScale; // 0x228
	FRawDistributionFloat DynamicAlphaScale; // 0x278
};

struct FClientGetFriendsListResult {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FAdminUpdatePlayerStatisticDefinitionRequest {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FAdminRunTaskResult {
	FString TaskInstanceId; // 0x8
};

struct FAnimNode_Slot {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FAdminSetTitleDataRequest {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FClientStartGameResult {
	FString Expires; // 0x8
	FString LobbyId; // 0x18
	FString Password; // 0x28
	FString ServerIPV4Address; // 0x38
	FString ServerIPV6Address; // 0x48
	int ServerPort; // 0x58
	FString ServerPublicDNSName; // 0x60
	FString Ticket; // 0x70
};

struct FGroupsUpdateGroupRoleResponse {
	FString OperationReason; // 0x8
	int ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FSQAdjustableSightMontageSet {
	UAnimMontage* BaseAdjustAds3pMontage; // 0x0
	UAnimMontage* AdjustAdsTransition3pMontage; // 0x8
	UAnimMontage* AdjustFromAdsTransition3pMontage; // 0x10
	FRotator LineOfFireAngle; // 0x18
	FText DistanceText; // 0x28
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FServerGetPlayerStatisticVersionsResult {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FServerNotifyMatchmakerPlayerLeftResult {
	EPlayerConnectionState PlayerState; // 0x8
};

struct FAnimNode_RandomPlayer {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x64
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

struct FSQCachedStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FRCONMessage {
	FString Message; // 0x0
	int ID; // 0x10
	int Type; // 0x14
};

struct FEventsWriteEventsResponse {
	FString AssignedEventIds; // 0x8
};

struct FMovieSceneFloatPropertySectionTemplate {
	FMovieSceneFloatChannel FloatFunction; // 0x48
	EMovieSceneBlendType BlendType; // 0xe8
};

struct FSQNotificationLayout {
	UTexture2D* Icon; // 0x0
	FLinearColor IconColor; // 0x8
	FLinearColor TextColor; // 0x18
	float DisplayTime; // 0x28
};

struct FClientGetUserDataResult {
	UPlayFabJsonObject* Data; // 0x8
	int DataVersion; // 0x10
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
	FMeshMergingSettings MergeSetting; // 0xa0
	float DesiredBoundRadius; // 0x12c
	float DesiredFillingPercentage; // 0x130
	int MinNumberOfActorsToBuild; // 0x134
};

struct FAttributeMetaData {
	float BaseValue; // 0x8
	float MinValue; // 0xc
	float MaxValue; // 0x10
	FString DerivedAttributeInfo; // 0x18
	bool bCanStack; // 0x28
};

struct FAdminDeleteOpenIdConnectionRequest {
	FString ConnectionId; // 0x8
};

struct FLevelSequencePlayerSnapshot {
	FString MasterName; // 0x0
	FQualifiedFrameTime MasterTime; // 0x10
	FQualifiedFrameTime SourceTime; // 0x20
	FString CurrentShotName; // 0x30
	FQualifiedFrameTime CurrentShotLocalTime; // 0x40
	FQualifiedFrameTime CurrentShotSourceTime; // 0x50
	FString SourceTimecode; // 0x60
	UCameraComponent* CameraComponent; // 0x70
	FLevelSequenceSnapshotSettings Settings; // 0x98
	ULevelSequence* ActiveShot; // 0xa8
	FMovieSceneSequenceID ShotID; // 0xb0
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float StereoBleed; // 0x8
	float LFEBleed; // 0xc
	float VoiceCenterChannelVolume; // 0x10
	float RadioFilterVolume; // 0x14
	float RadioFilterVolumeThreshold; // 0x18
	char bApplyEffects : 1; // 0x1c
	char bAlwaysPlay : 1; // 0x1c
	char bIsUISound : 1; // 0x1c
	char bIsMusic : 1; // 0x1c
	char bReverb : 1; // 0x1c
	float Default2DReverbSendAmount; // 0x20
	char bCenterChannelOnly : 1; // 0x24
	char bApplyAmbientVolumes : 1; // 0x24
	EAudioOutputTarget OutputTarget; // 0x28
};

struct FClientAddUsernamePasswordRequest {
	FString Email; // 0x8
	FString Password; // 0x18
	FString username; // 0x28
};

struct FServerSendEmailFromTemplateRequest {
	FString EmailTemplateId; // 0x8
	FString PlayFabId; // 0x18
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FAdminListVirtualCurrencyTypesRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FGuid {
	int A; // 0x0
	int B; // 0x4
	int C; // 0x8
	int D; // 0xc
};

struct FSkeletalMeshLODInfo {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int> LODMaterialMap; // 0x8
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x18
	TArray<FBoneReference> BonesToRemove; // 0x58
	TArray<FBoneReference> BonesToPrioritize; // 0x68
	float WeightOfPrioritization; // 0x78
	UAnimSequence* BakePose; // 0x80
	UAnimSequence* BakePoseOverride; // 0x88
	FString SourceImportFilename; // 0x90
	char bHasBeenSimplified : 1; // 0xa0
	char bHasPerLODVertexColors : 1; // 0xa0
	char bAllowCPUAccess : 1; // 0xa0
	char bSupportUniformlyDistributedSampling : 1; // 0xa0
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FGameplayAbilityBindInfo {
	EGameplayAbilityInputBinds Command; // 0x0
	UGameplayAbility* GameplayAbilityClass; // 0x8
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FMovieSceneMediaSectionTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FServerModifyItemUsesResult {
	FString ItemInstanceId; // 0x8
	int RemainingUses; // 0x18
};

struct FClientRemoveGenericIDRequest {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FClientGameServerRegionsRequest {
	FString BuildVersion; // 0x8
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FSSGS_Gradient {
	FSSGS_RGB Zero; // 0x0
	FSSGS_RGB hundred; // 0x3
};

struct FServerGrantItemsToCharacterRequest {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString CharacterId; // 0x28
	FString ItemIds; // 0x38
	FString PlayFabId; // 0x48
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

struct FClientUpdateUserTitleDisplayNameRequest {
	FString DisplayName; // 0x8
};

struct FGameplayCueTranslationManager {
	TArray<FGameplayCueTranslatorNode> TranslationLUT; // 0x0
	TMap<FName, FGameplayCueTranslatorNodeIndex> TranslationNameToIndexMap; // 0x10
	UGameplayTagsManager* TagManager; // 0x60
};

struct FSQGameSubsystemObject {
	FString SubsystemClass; // 0x0
	bool bRunOnServer; // 0x10
	bool bRunOnClient; // 0x11
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FShadingModelMaterialInput {
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FSQFontInfo {
	UFont* Font; // 0x0
	FLinearColor Color; // 0x8
	float Scale; // 0x18
	FVector2D Offset; // 0x1c
	ESQTextHorizontalAlignment HorizontalAlignment; // 0x24
	ESQTextVerticalAlignment VerticalAlignment; // 0x25
	float Alpha; // 0x28
	bool bDrawShadow; // 0x2c
	FVector2D ShadowDirection; // 0x30
	FLinearColor ShadowColor; // 0x38
	bool bDrawOutline; // 0x48
	FLinearColor OutlineColor; // 0x4c
};

struct FGroupsApplyToGroupRequest {
	bool AutoAcceptOutstandingInvite; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FClothCollisionPrim_SphereConnection {
	int SphereIndices[0x2]; // 0x0
};

struct FBuilderPoly {
	TArray<int> VertexIndices; // 0x0
	int Direction; // 0x10
	FName ItemName; // 0x14
	int PolyFlags; // 0x1c
};

struct FPacketSimulationSettings {
	int PktLoss; // 0x0
	int PktLossMaxSize; // 0x4
	int PktLossMinSize; // 0x8
	int PktOrder; // 0xc
	int PktDup; // 0x10
	int PktLag; // 0x14
	int PktLagVariance; // 0x18
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
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

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FSQClimbOverTypeData {
	float MinVerticalSpace; // 0x30
	float InterpolateTimeToMidStart; // 0x34
	float InterpolateTimeToMidEnd; // 0x38
	float InterpolateTimeToEnd; // 0x3c
	float MidHorizonalSpace; // 0x40
};

struct FClientAddUsernamePasswordResult {
	FString username; // 0x8
};

struct FExposedValueCopyRecord {
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0x8
	int SourceArrayIndex; // 0x10
	bool bInstanceIsTarget; // 0x14
	EPostCopyOperation PostCopyOperation; // 0x15
	ECopyType CopyType; // 0x16
	UProperty* DestProperty; // 0x18
	int DestArrayIndex; // 0x20
	int Size; // 0x24
	UProperty* CachedSourceProperty; // 0x28
	UProperty* CachedSourceStructSubProperty; // 0x30
};

struct FKBoxElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FSQMapMarkerFastArraySerializerItem {
	FSQMapMarkerGameplayData MarkerGameplayData; // 0x10
	FSQMarkerTimestamps AssignedTimestamp; // 0x48
};

struct FClientRemoveGenericIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGfeSDKHighlightVideoParams {
	FString GroupId; // 0x0
	FString HighlightId; // 0x10
	int StartDelta; // 0x20
	int EndDelta; // 0x24
};

struct FGameplayEffectModifiedAttribute {
	FGameplayAttribute Attribute; // 0x0
	float TotalMagnitude; // 0x20
};

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x30
	FBox ElemBox; // 0x40
	FTransform Transform; // 0x60
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FGroupsListGroupMembersResponse {
	TArray<UPlayFabJsonObject*> Members; // 0x8
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int VoiceChannelIdx; // 0x34
};

struct FSSGS_PropertyContainer {
	TArray<FSSGS_KeyValuePair> properties; // 0x0
};

struct FClientUnlinkSteamAccountRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FTTPropertyTrack {
	FName PropertyName; // 0x18
};

struct FSQFlagScoreInfo {
	int ScoreForFlagNeutralize; // 0x0
	int ScoreForCapture; // 0x4
	int ScoreForDefense; // 0x8
	int ScoreOnCaptureTick; // 0xc
	int ScoreOnDefenseTick; // 0x10
	ESQKillReportChannel CaptureReportChannel; // 0x14
	ESQKillReportChannel NeutralizeReportChannel; // 0x15
	ESQKillReportChannel DefenseReportChannel; // 0x16
	bool bNotifyPlayerOnNeutral; // 0x17
	bool bNotifyPlayerOnCapture; // 0x18
	bool bNotifyPlayerOnDefense; // 0x19
	bool bNotifyPlayerOnTick; // 0x1a
};

struct FServerLinkServerCustomIdResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminDeletePlayerSharedSecretRequest {
	FString SecretKey; // 0x8
};

struct FAdminGetMatchmakerGameModesRequest {
	FString BuildVersion; // 0x8
};

struct FServerSetGameServerInstanceTagsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerGetQueueStatisticsResult {
	int NumberOfPlayersMatching; // 0x8
	UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10
};

struct FDistributionLookupTable {
	char Op; // 0x0
	char EntryCount; // 0x1
	char EntryStride; // 0x2
	char SubEntryStride; // 0x3
	float TimeScale; // 0x4
	float TimeBias; // 0x8
	TArray<float> Values; // 0x10
	char LockFlag; // 0x20
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FSQReverbVolumeEffect {
	UReverbEffect* ReverbEffect; // 0x0
	FName EffectName; // 0x8
	float EffectVolume; // 0x10
	float EffectFadeTime; // 0x14
	float EffectPriority; // 0x18
};

struct FClientGetTitleDataResult {
	UPlayFabJsonObject* Data; // 0x8
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FServerMoveItemToCharacterFromCharacterRequest {
	FString GivingCharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
	FString ReceivingCharacterId; // 0x38
};

struct FAdminCreateActionsOnPlayerSegmentTaskRequest {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FClientLinkGoogleAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int RefSkeletonIndex; // 0x10
};

struct FBakedAnimationState {
	FName StateName; // 0x0
	TArray<FBakedStateExitTransition> Transitions; // 0x8
	int StateRootNodeIndex; // 0x18
	int StartNotify; // 0x1c
	int EndNotify; // 0x20
	int FullyBlendedNotify; // 0x24
	bool bIsAConduit; // 0x28
	int EntryRuleNodeIndex; // 0x2c
	TArray<int> PlayerNodeIndices; // 0x30
	bool bAlwaysResetOnEntry; // 0x40
};

struct FClientGetAccountInfoResult {
	UPlayFabJsonObject* AccountInfo; // 0x8
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
	char bApplyNormalizationToStereoSounds : 1; // 0xb1
	char bEnableLogFrequencyScaling : 1; // 0xb1
	ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2
	EAirAbsorptionMethod AbsorptionMethod; // 0xb3
	ECollisionChannel OcclusionTraceChannel; // 0xb4
	EReverbSendMethod ReverbSendMethod; // 0xb5
	float OmniRadius; // 0xb8
	float StereoSpread; // 0xbc
	float LPFRadiusMin; // 0xc0
	float LPFRadiusMax; // 0xc4
	FRuntimeFloatCurve CustomLowpassAirAbsorptionCurve; // 0xc8
	FRuntimeFloatCurve CustomHighpassAirAbsorptionCurve; // 0x150
	float LPFFrequencyAtMin; // 0x1d8
	float LPFFrequencyAtMax; // 0x1dc
	float HPFFrequencyAtMin; // 0x1e0
	float HPFFrequencyAtMax; // 0x1e4
	float FocusAzimuth; // 0x1e8
	float NonFocusAzimuth; // 0x1ec
	float FocusDistanceScale; // 0x1f0
	float NonFocusDistanceScale; // 0x1f4
	float FocusPriorityScale; // 0x1f8
	float NonFocusPriorityScale; // 0x1fc
	float FocusVolumeAttenuation; // 0x200
	float NonFocusVolumeAttenuation; // 0x204
	float FocusAttackInterpSpeed; // 0x208
	float FocusReleaseInterpSpeed; // 0x20c
	float OcclusionLowPassFilterFrequency; // 0x210
	float OcclusionVolumeAttenuation; // 0x214
	float OcclusionInterpolationTime; // 0x218
	float ReverbWetLevelMin; // 0x21c
	float ReverbWetLevelMax; // 0x220
	float ReverbDistanceMin; // 0x224
	float ReverbDistanceMax; // 0x228
	float ManualReverbSendLevel; // 0x22c
	FRuntimeFloatCurve CustomReverbSendCurve; // 0x230
	FSoundAttenuationPluginSettings PluginSettings; // 0x2b8
};

struct FLightmassDirectionalLightSettings {
	float LightSourceAngle; // 0xc
};

struct FAdminResolvePurchaseDisputeResponse {
	FString PurchaseStatus; // 0x8
};

struct FAdminSetPlayerSecretResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32 Value; // 0x0
};

struct FServerRemoveSharedGroupMembersResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBlueprintInputKeyDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FGroupsGetGroupRequest {
	UPlayFabJsonObject* Group; // 0x8
	FString GroupName; // 0x10
};

struct FAdminGetPlayerIdFromAuthTokenResult {
	FString PlayFabId; // 0x8
};

struct FClientGetCharacterLeaderboardRequest {
	FString CharacterType; // 0x8
	int MaxResultsCount; // 0x18
	int StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMovieSceneCaptureSettings {
	FDirectoryPath OutputDirectory; // 0x0
	AGameModeBase* GameModeOverride; // 0x10
	FString OutputFormat; // 0x18
	bool bOverwriteExisting; // 0x28
	bool bUseRelativeFrameNumbers; // 0x29
	int HandleFrames; // 0x2c
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
	int PathTracerSamplePerPixel; // 0x68
};

struct FCoreStateDataTickFunction {
	USQCoreStateData* Target; // 0x50
};

struct FSplineMeshParams {
	FVector StartPos; // 0x0
	FVector StartTangent; // 0xc
	FVector2D StartScale; // 0x18
	float StartRoll; // 0x20
	FVector2D StartOffset; // 0x24
	FVector EndPos; // 0x2c
	FVector EndTangent; // 0x38
	FVector2D EndScale; // 0x44
	float EndRoll; // 0x4c
	FVector2D EndOffset; // 0x50
};

struct FActiveGameplayCueContainer {
	TArray<FActiveGameplayCue> GameplayCues; // 0x108
	UAbilitySystemComponent* Owner; // 0x120
};

struct FServerGetUserDataRequest {
	int IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
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

struct FClientConsumeXboxEntitlementsResult {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FAnimNode_BlendListByEnum {
	TArray<int> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FClientGetFriendLeaderboardAroundPlayerResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int Version; // 0x28
};

struct FServerGetPlayFabIDsFromSteamIDsRequest {
	FString SteamStringIDs; // 0x8
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FGameplayCueNotifyData {
	FGameplayTag GameplayCueTag; // 0x0
	FSoftObjectPath GameplayCueNotifyObj; // 0x8
	UObject* LoadedGameplayCueClass; // 0x20
};

struct FAdminUpdateCloudScriptRequest {
	FString DeveloperPlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool Publish; // 0x28
};

struct FClientGetPurchaseRequest {
	FString OrderId; // 0x8
};

struct FSQCachedTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FClientSetFriendTagsRequest {
	FString FriendPlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FAdminGetPlayerTagsResult {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FClientLinkCustomIDRequest {
	FString CustomId; // 0x8
	bool ForceLink; // 0x18
};

struct FClientGetPlayFabIDsFromKongregateIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
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

struct FAdminDeleteMasterPlayerAccountRequest {
	FString MetaData; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerAddPlayerTagRequest {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FServerSetTitleDataRequest {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRichTextStyleRow {
	FTextBlockStyle TextStyle; // 0x8
};

struct FAdminUpdateCatalogItemsRequest {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
	FString CatalogVersion; // 0x18
	bool SetAsDefaultCatalog; // 0x28
};

struct FSQMarkerReference {
	USQ_HexMenu_BaseAction* MarkerType; // 0x0
	bool bSquadOnly; // 0x8
	TArray<USQ_HexMenu_BaseAction*> Markers; // 0x10
	int ConcurrentMarkersLimit; // 0x20
};

struct FSQPenetrationTrace {
	char bIsActor : 1; // 0x0
	char bHasValidReverseImpact : 1; // 0x0
	FHitResult HitResult; // 0x4
	FVector ReverseAngleImpactLocation; // 0x8c
	FVector_NetQuantizeNormal ReverseAngleImpactNormal; // 0x98
	FName ReverseAngleBoneName; // 0xa4
};

struct FAdminGetPlayedTitleListResult {
	FString TitleIds; // 0x8
};

struct FProfilesGetEntityProfilesResponse {
	TArray<UPlayFabJsonObject*> Profiles; // 0x8
};

struct FMovieSceneAudioSectionTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FServerAwardSteamAchievementResult {
	TArray<UPlayFabJsonObject*> AchievementResults; // 0x8
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
	UStructProperty* VectorProperty; // 0x28
};

struct FClientUnlinkXboxAccountResult {
	UPlayFabJsonObject* Request; // 0x0
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

struct FMaterialQualityOverrides {
	bool bDiscardQualityDuringCook; // 0x0
	bool bEnableOverride; // 0x1
	bool bForceFullyRough; // 0x2
	bool bForceNonMetal; // 0x3
	bool bForceDisableLMDirectionality; // 0x4
	bool bForceLQReflections; // 0x5
	bool bDisableMaterialNormalCalculation; // 0x6
	EMobileCSMQuality MobileCSMQuality; // 0x7
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

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FSQAnimNode_WheelHandler {
	float Smoothing; // 0xc8
	TArray<FVector> PreviousWheelLocations; // 0xe8
};

struct FGameplayAbilitySpecContainer {
	TArray<FGameplayAbilitySpec> Items; // 0x108
	UAbilitySystemComponent* Owner; // 0x118
};

struct FMovieSceneSkeletalAnimationSectionTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int ParticleIndex; // 0x28
	int ParticleIndexMesh; // 0x2c
};

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int MessageIndex; // 0x10
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FVehicleOccupantsArray {
	TArray<FVehicleOccupantsItem> Items; // 0x108
};

struct FSkeletalMeshComponentClothTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FServerGetServerCustomIDsFromPlayFabIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FMovieSceneCameraCutSectionTemplate {
	FMovieSceneObjectBindingID CameraBindingID; // 0x20
	FTransform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
	UField* Field; // 0x18
};

struct FServerSendEmailFromTemplateResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPlayerStateDataObject {
	int Lives; // 0x0
	int NumKills; // 0x4
	int NumDeaths; // 0x8
	int NumWoundeds; // 0xc
	int NumWounds; // 0x10
	int NumTeamkills; // 0x14
	float HealPoints; // 0x18
	float RevivedPoints; // 0x1c
	float TeamWorkScore; // 0x20
	float ObjectiveScore; // 0x24
	bool bAdmin; // 0x28
	bool bDev; // 0x29
	bool bQA; // 0x2a
	bool bMember; // 0x2b
	bool bCommander; // 0x2c
	int FireTeamIndex; // 0x30
	int FireTeamPosition; // 0x34
	FString PlayerNamePrefix; // 0x38
	UTexture* SupporterPatch; // 0x48
	UTexture* ClanPatch; // 0x50
	int ReplicationKey; // 0x58
	ASQPlayerState* Owner; // 0x60
};

struct FClientGetSharedGroupDataRequest {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FAdminUpdateUserDataResult {
	int DataVersion; // 0x8
};

struct FAdminListOpenIdConnectionRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FGroupsRemoveGroupApplicationRequest {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FMovieSceneParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
};

struct FMovieSceneEnumPropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x48
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

struct FMovieSceneSequenceLoopCount {
	int Value; // 0x0
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FServerGetPlayersInSegmentResult {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int ProfilesInSegment; // 0x28
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
};

struct FLobbyPlayerStateActorInfo {
	ALobbyBeaconPlayerState* LobbyPlayerState; // 0x10
};

struct FAudioEQEffect {
	float FrequencyCenter0; // 0x8
	float Gain0; // 0xc
	float Bandwidth0; // 0x10
	float FrequencyCenter1; // 0x14
	float Gain1; // 0x18
	float Bandwidth1; // 0x1c
	float FrequencyCenter2; // 0x20
	float Gain2; // 0x24
	float Bandwidth2; // 0x28
	float FrequencyCenter3; // 0x2c
	float Gain3; // 0x30
	float Bandwidth3; // 0x34
};

struct FGroupsIsMemberResponse {
	bool IsMember; // 0x8
};

struct FMovieSceneObjectBindingID {
	int SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FAnimNode_ConvertComponentToLocalSpace {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FAdminRevokeBansResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FMultiplayerGetMultiplayerServerDetailsResponse {
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

struct FClientGetPlayerCombinedInfoRequest {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FAdminSetTitleDataResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneSequenceTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FClientUpdatePlayerStatisticsRequest {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
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

struct FClientLinkGoogleAccountRequest {
	bool ForceLink; // 0x8
	FString ServerAuthCode; // 0x10
};

struct FClientUnlinkAndroidDeviceIDRequest {
	FString AndroidDeviceId; // 0x8
};

struct FAdminSendAccountRecoveryEmailResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FAdminUpdatePlayerStatisticDefinitionResult {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FClientRemoveFriendResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSSGS_EventData {
	int Value; // 0x8
	USSGS_Frame* frame; // 0x10
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

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FAdminGrantItemsToUsersResult {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FClientRestoreIOSPurchasesResult {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	char bIsVisible : 1; // 0x8
};

struct FNavigationSegmentLink {
	FVector LeftStart; // 0x38
	FVector LeftEnd; // 0x44
	FVector RightStart; // 0x50
	FVector RightEnd; // 0x5c
};

struct FSSGS_RGB {
	char red; // 0x0
	char Green; // 0x1
	char Blue; // 0x2
};

struct FAdminRevokeAllBansForUserResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FPrimaryAssetTypeInfo {
	FName PrimaryAssetType; // 0x0
	UClass* AssetBaseClass; // 0x8
	UObject* AssetBaseClassLoaded; // 0x30
	bool bHasBlueprintClasses; // 0x38
	bool bIsEditorOnly; // 0x39
	TArray<FDirectoryPath> Directories; // 0x40
	TArray<FSoftObjectPath> SpecificAssets; // 0x50
	FPrimaryAssetRules Rules; // 0x60
	TArray<FString> AssetScanPaths; // 0x70
	bool bIsDynamicAsset; // 0x80
	int NumberOfAssets; // 0x84
};

struct FWindowStyle {
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

struct FAdminIncrementPlayerStatisticVersionRequest {
	FString StatisticName; // 0x8
};

struct FMeshReductionSettings {
	float PercentTriangles; // 0x0
	float PercentVertices; // 0x4
	float MaxDeviation; // 0x8
	float PixelError; // 0xc
	float WeldingThreshold; // 0x10
	float HardAngleThreshold; // 0x14
	int BaseLODModel; // 0x18
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

struct FSQRemoteTalkerDisplayInfo {
	ASQPlayerState* PlayerState; // 0x0
	ESQVoiceChannel Channel; // 0x8
};

struct FMultiplayerUpdateBuildRegionsRequest {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> BuildRegions; // 0x18
};

struct FServerConsumeItemResult {
	FString ItemInstanceId; // 0x8
	int RemainingUses; // 0x18
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	FFrameNumber StartFrameOffset; // 0x8
	FFrameNumber EndFrameOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	FName SlotName; // 0x18
	FMovieSceneFloatChannel Weight; // 0x20
	bool bSkipAnimNotifiers; // 0xc0
	bool bForceCustomMode; // 0xc1
	float StartOffset; // 0xc4
	float EndOffset; // 0xc8
};

struct FServerGrantItemsToUserRequest {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString ItemIds; // 0x28
	FString PlayFabId; // 0x38
};

struct FServerGetServerCustomIDsFromPlayFabIDsRequest {
	FString PlayFabIds; // 0x8
};

struct FServerGetPlayersInSegmentRequest {
	FString ContinuationToken; // 0x8
	int MaxBatchSize; // 0x18
	int SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FGameplayEffectExecutionDefinition {
	UGameplayEffectExecutionCalculation* CalculationClass; // 0x0
	FGameplayTagContainer PassedInTags; // 0x8
	TArray<FGameplayEffectExecutionScopedModifierInfo> CalculationModifiers; // 0x28
	TArray<UGameplayEffect*> ConditionalGameplayEffectClasses; // 0x38
	TArray<FConditionalGameplayEffect> ConditionalGameplayEffects; // 0x48
};

struct FMovieSceneSlomoSectionTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FServerUpdateCharacterDataResult {
	int DataVersion; // 0x8
};

struct FCollectionVectorParameter {
	FLinearColor DefaultValue; // 0x18
};

struct FClientGrantCharacterToUserRequest {
	FString CatalogVersion; // 0x8
	FString CharacterName; // 0x18
	FString ItemId; // 0x28
};

struct FMovieSceneCameraAnimSectionTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FMultiplayerListVirtualMachineSummariesRequest {
	FString BuildId; // 0x8
	int PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FAdminSendAccountRecoveryEmailRequest {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
};

struct FTimecode {
	int Hours; // 0x0
	int Minutes; // 0x4
	int Seconds; // 0x8
	int Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FAdminResetPasswordResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientValidateWindowsReceiptResult {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FAnimNode_RotationMultiplier {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FMovieSceneEventRepeaterTemplate {
	FName EventToTrigger; // 0x38
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FMovieScene2DTransformMask {
	uint32 mask; // 0x0
};

struct FSQRecoilData {
	FVector2D RecoilFactorMin; // 0x0
	FVector2D RecoilFactorMax; // 0x8
	float RecoilZoomFactor; // 0x10
	float RecoilDuration; // 0x14
	float NotAimingDownSightsMultiplier; // 0x18
	UCurveFloat* RecoilCurve; // 0x20
	UCurveFloat* RecoilCurveCrouch; // 0x28
	UCurveFloat* RecoilCurveProne; // 0x30
	int RecoilCurveIndex; // 0x38
	bool bUseRecoilMultipliers; // 0x3c
	float CrouchRecoilMultiplier; // 0x40
	float ProneRecoilMultiplier; // 0x44
};

struct FClientGetFriendLeaderboardAroundPlayerRequest {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int Version; // 0x3c
	FString XboxToken; // 0x40
};

struct FGroupsUpdateGroupResponse {
	FString OperationReason; // 0x8
	int ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FStringCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FSQAvailabilityState_Deployable {
	FSQAvailabilityState Status; // 0x0
	USQAvailability_Deployable* Availability; // 0x48
};

struct FAdminGetPublisherDataResult {
	UPlayFabJsonObject* Data; // 0x8
};

struct FClientLinkAndroidDeviceIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int LastKnownNumLoops; // 0xc
};

struct FClientWriteClientPlayerEventRequest {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FSQTeamCommands {
	USQGridData_CommandOption* CommandData; // 0x8
	TArray<FString> Team; // 0x10
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FServerAwardSteamAchievementRequest {
	TArray<UPlayFabJsonObject*> Achievements; // 0x8
};

struct FClientPurchaseItemRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ItemId; // 0x28
	int Price; // 0x38
	FString StoreId; // 0x40
	FString VirtualCurrency; // 0x50
};

struct FClientGetPlayFabIDsFromXboxLiveIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClothConstraintSetup {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FSSGS_HandlerScreen {
	FSSGS_ScreenDeviceZone deviceZone; // 0x8
	FString Mode; // 0x30
	USSGS_ScreenDataSpecification* Data; // 0x40
};

struct FTTVectorTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FClientAddFriendRequest {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FTickAnimationSharingFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FSQVoipAnim {
	UAnimMontage* FirstPersonAnim; // 0x0
	UAnimMontage* ThirdPersonAnim; // 0x8
	UAnimMontage* FirstPersonEndAnim; // 0x10
	UAnimMontage* ThirdPersonEndAnim; // 0x18
};

struct FAdminGetCatalogItemsResult {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FStreamingTextureBuildInfo {
	uint32 PackedRelativeBox; // 0x0
	int TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FServerAddFriendRequest {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
	FString PlayFabId; // 0x48
};

struct FMovieSceneKeyTimeStruct {
	FFrameNumber Time; // 0x8
};

struct FSQPlayerLimiter {
	int NumberOfPlayers; // 0x0
	int Value; // 0x4
};

struct FAIDataProviderBoolValue {
	bool DefaultValue; // 0x28
};

struct FSQWeaponAnims {
	UAnimSequence* StandAnim; // 0x0
	UAnimSequence* EquipAnim; // 0x8
	UAnimSequence* FireRecoilAnim; // 0x10
	UAnimSequence* FireTriggerAnim; // 0x18
	UAnimSequence* ReloadAnim; // 0x20
	UAnimSequence* DryAnim; // 0x28
	UAnimSequence* ToggleFiremodeAnim; // 0x30
	bool bShouldLockBult; // 0x38
	float TriggerPullDuration; // 0x3c
	UCurveVector* AimOffsetCurve; // 0x40
};

struct FServerRemoveSharedGroupMembersRequest {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FServerRevokeAllBansForUserRequest {
	FString PlayFabId; // 0x8
};

struct FViewsterIssue {
	FString MapName; // 0x0
	float CoordX; // 0x10
	float CoordY; // 0x14
	float CoordZ; // 0x18
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FAdminBanUsersResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FSQWeaponGroupData {
	TArray<ASQEquipableItem*> Weapons; // 0x10
	int Index; // 0x20
	int SelectedWeaponOffset; // 0x24
};

struct FServerGetCatalogItemsRequest {
	FString CatalogVersion; // 0x8
};

struct FServerSetTitleDataResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPreviewAttachedObjectPair {
	UObject* AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FServerGetContentDownloadUrlResult {
	FString URL; // 0x8
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

struct FServerDeleteCharacterFromUserRequest {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
	bool SaveCharacterInventory; // 0x28
};

struct FAdminListVirtualCurrencyTypesResult {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FGameplayTagBlueprintPropertyMapping {
	FGameplayTag TagToMap; // 0x0
	UProperty* PropertyToEdit; // 0x8
	FName PropertyName; // 0x10
	FGuid PropertyGuid; // 0x18
};

struct FClientCreateSharedGroupResult {
	FString SharedGroupId; // 0x8
};

struct FClientValidateGooglePlayPurchaseResult {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FRBFTarget {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FMovieSceneVector4KeyStruct {
	FVector4 Vector; // 0x30
};

struct FGameplayCueTag {
	FGameplayTag GameplayCueTag; // 0x0
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FSQAvailabilityState_Vehicle {
	FSQAvailabilityState Status; // 0x0
	USQAvailability_Vehicle* Availability; // 0x48
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FClientGetWindowsHelloChallengeResponse {
	FString Challenge; // 0x8
};

struct FClientUpdateUserTitleDisplayNameResult {
	FString DisplayName; // 0x8
};

struct FClientConsumeItemResult {
	FString ItemInstanceId; // 0x8
	int RemainingUses; // 0x18
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	FMaterialProxySettings StaticMeshMaterialSettings; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x7c
	int LandscapeExportLOD; // 0x80
	FMaterialProxySettings LandscapeMaterialSettings; // 0x84
	bool bBakeFoliageToLandscape; // 0xf8
	bool bBakeGrassToLandscape; // 0xf9
	bool bGenerateMeshNormalMap; // 0xfa
	bool bGenerateMeshMetallicMap; // 0xfb
	bool bGenerateMeshRoughnessMap; // 0xfc
	bool bGenerateMeshSpecularMap; // 0xfd
	bool bGenerateLandscapeNormalMap; // 0xfe
	bool bGenerateLandscapeMetallicMap; // 0xff
	bool bGenerateLandscapeRoughnessMap; // 0x100
	bool bGenerateLandscapeSpecularMap; // 0x101
};

struct FParticleBurst {
	int Count; // 0x0
	int CountLow; // 0x4
	float Time; // 0x8
};

struct FSSGS_RateStatic {
	int frequency; // 0x0
	int repeat_limit; // 0x4
};

struct FLocalizationGetLanguageListRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetLeaderboardAroundCharacterResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FRootMotionSource_ConstantForce {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FClientGetContentDownloadUrlRequest {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FActorComponentInstanceData {
	UObject* SourceComponentTemplate; // 0x8
	EComponentCreationMethod SourceComponentCreationMethod; // 0x10
	int SourceComponentTypeSerializedIndex; // 0x14
	TArray<char> SavedProperties; // 0x18
	TArray<FActorComponentDuplicatedObjectData> DuplicatedObjects; // 0x28
	TArray<UObject*> ReferencedObjects; // 0x38
	TArray<FName> ReferencedNames; // 0x48
};

struct FRectSize {
	uint16 Width; // 0x0
	uint16 Height; // 0x2
};

struct FMatchmakerPlayerJoinedResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FAdminGetCloudScriptTaskInstanceResult {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceId; // 0x28
	FString InstanceName; // 0x38
	bool IsConsoleBuild; // 0x48
	FString PlatformName; // 0x50
	FGuid SessionId; // 0x60
	FString SessionName; // 0x70
	FString SessionOwner; // 0x80
	bool Standalone; // 0x90
};

struct FJoystickInfo {
	int Player; // 0x0
	int DeviceID; // 0x4
	bool IsRumbleDevice; // 0x8
	FGuid ProductId; // 0xc
	FString ProductName; // 0x20
	FString DeviceName; // 0x30
	bool Connected; // 0x40
	TArray<EInputType> InputType; // 0x48
};

struct FFontCharacter {
	int StartU; // 0x0
	int StartV; // 0x4
	int USize; // 0x8
	int VSize; // 0xc
	char TextureIndex; // 0x10
	int VerticalOffset; // 0x14
};

struct FGameplayEffectAttributeCaptureSpecContainer {
	TArray<FGameplayEffectAttributeCaptureSpec> SourceAttributes; // 0x0
	TArray<FGameplayEffectAttributeCaptureSpec> TargetAttributes; // 0x10
	bool bHasNonSnapshottedAttributes; // 0x20
};

struct FSSGS_TactilePatternRange {
	int Low; // 0x8
	int High; // 0xc
	TArray<FSSGS_TactilePatternStatic> pattern; // 0x10
};

struct FIntegralKey {
	float Time; // 0x0
	int Value; // 0x4
};

struct FClientGetCharacterStatisticsRequest {
	FString CharacterId; // 0x8
};

struct FSceneComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FMultiplayerDeleteRemoteUserRequest {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString username; // 0x28
	FString VmId; // 0x38
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FPerPlatformInt {
	int Default; // 0x0
};

struct FAdminDeleteContentRequest {
	FString Key; // 0x8
};

struct FAIRequestID {
	uint32 RequestID; // 0x0
};

struct FAdminGetTasksRequest {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FMultiplayerCreateMatchmakingTicketRequest {
	UPlayFabJsonObject* Creator; // 0x8
	int GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x18
	FString QueueName; // 0x28
};

struct FClientSendAccountRecoveryEmailResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FProfilesSetGlobalPolicyRequest {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FAnimNode_RigidBody {
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	FVector OverrideWorldGravity; // 0x160
	FVector ExternalForce; // 0x16c
	FVector ComponentLinearAccScale; // 0x178
	FVector ComponentLinearVelScale; // 0x184
	FVector ComponentAppliedLinearAccClamp; // 0x190
	float CachedBoundsScale; // 0x19c
	FBoneReference BaseBoneRef; // 0x1a0
	ECollisionChannel OverlapChannel; // 0x1b0
	ESimulationSpace SimulationSpace; // 0x1b1
	bool bForceDisableCollisionBetweenConstraintBodies; // 0x1b2
	char bEnableWorldGeometry : 1; // 0x1b4
	char bOverrideWorldGravity : 1; // 0x1b4
	char bTransferBoneVelocities : 1; // 0x1b4
	char bFreezeIncomingPoseOnStart : 1; // 0x1b4
	char bClampLinearTranslationLimitToRefPose : 1; // 0x1b4
};

struct FClientGetPlayFabIDsFromSteamIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGetPlayerCombinedInfoResult {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FMovieSceneGeometryCacheSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0x38
	FFrameNumber SectionEndTime; // 0x3c
};

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	FPerPlatformFloat GrassDensity; // 0x8
	bool bUseGrid; // 0xc
	float PlacementJitter; // 0x10
	FPerPlatformInt StartCullDistance; // 0x14
	FPerPlatformInt EndCullDistance; // 0x18
	int MinLOD; // 0x1c
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

struct FClothLODData {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xa8
};

struct FAnimNode_Constraint {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FSSGS_ColorRangeStatic {
	int Low; // 0x0
	int High; // 0x4
	FSSGS_RGB Color; // 0x8
};

struct FUserActivity {
	FString ActionName; // 0x0
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

struct FGameplayAbilityTargetData_SingleTargetHit {
	FHitResult HitResult; // 0x8
	bool bHitReplaced; // 0x90
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FServerWriteServerCharacterEventRequest {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString PlayFabId; // 0x30
	FString Timestamp; // 0x40
};

struct FSQCachedRelevantAnimData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FClientGetUserInventoryRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FServerGetPlayFabIDsFromFacebookIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FGroupsAcceptGroupApplicationRequest {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FSQSoldierInfo {
	int SquadId; // 0x0
	int FireTeamId; // 0x4
	ESQAuthorityTypes LeaderState; // 0x8
	USQRoleSettings* CurrentRole; // 0x10
	FString PlayerName; // 0x18
};

struct FActiveGameplayEffectHandle {
	int Handle; // 0x0
	bool bPassedFiltersAndWasExecuted; // 0x4
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FSQMenuSoundsStyle {
	FSlateSound StartGameSound; // 0x8
	FSlateSound ExitGameSound; // 0x20
};

struct FMovePacket {
	uint32 UniqueID; // 0x0
	TArray<char> OldMove; // 0x8
	TArray<char> NewMove; // 0x18
	TArray<char> PendingMove; // 0x28
};

struct FSQRoleLimitArray {
	TArray<FSQRoleLimitFASItem> Items; // 0x108
};

struct FScrollBoxStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FMultiplayerListBuildSummariesRequest {
	int PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FAdminAbortTaskInstanceRequest {
	FString TaskInstanceId; // 0x8
};

struct FCollectionScalarParameter {
	float DefaultValue; // 0x18
};

struct FServerGetCharacterStatisticsResult {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FAdminRefundPurchaseResponse {
	FString PurchaseStatus; // 0x8
};

struct FBranchingPointMarker {
	int NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FElementID {
	int IDValue; // 0x0
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FClientLinkKongregateAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkGameCenterAccountRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetPlayerStatisticsRequest {
	FString PlayFabId; // 0x8
	FString StatisticNames; // 0x18
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x28
};

struct FSQAudioComponentPool {
	TArray<UAudioComponent*> AudioComponentPool; // 0x0
	USceneComponent* AttachToComponent; // 0x10
	FName AttachPointName; // 0x18
};

struct FFastArraySerializerItem {
	int ReplicationID; // 0x0
	int ReplicationKey; // 0x4
	int MostRecentArrayReplicationKey; // 0x8
};

struct FAdminUpdatePlayerSharedSecretRequest {
	bool Disabled; // 0x8
	FString FriendlyName; // 0x10
	FString SecretKey; // 0x20
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FClientSendAccountRecoveryEmailRequest {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
};

struct FGfeSDKCreateResponse {
	uint16 VersionMajor; // 0x0
	uint16 VersionMinor; // 0x2
	FString NVIDIAGfeVersion; // 0x8
	TMap<EGfeSDKScope, EGfeSDKPermission> ScopePermissions; // 0x18
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FGfeSDKHighlightCloseGroupParams {
	FString GroupId; // 0x0
	bool DestroyHighlights; // 0x10
};

struct FServerRevokeInventoryItemRequest {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FAdminRunTaskRequest {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FAnimNode_CCDIK {
	FVector EffectorLocation; // 0xc8
	EBoneControlSpace EffectorLocationSpace; // 0xd4
	FBoneSocketTarget EffectorTarget; // 0xe0
	FBoneReference TipBone; // 0x140
	FBoneReference RootBone; // 0x150
	float Precision; // 0x160
	int MaxIterations; // 0x164
	bool bStartFromTail; // 0x168
	bool bEnableRotationLimit; // 0x169
	TArray<float> RotationLimitPerJoints; // 0x170
};

struct FClientGetTitlePublicKeyRequest {
	FString TitleSharedSecret; // 0x8
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FClientGetCharacterInventoryRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
};

struct FServerCreateSharedGroupRequest {
	FString SharedGroupId; // 0x8
};

struct FClientRegisterPlayFabUserResult {
	UPlayFabJsonObject* EntityToken; // 0x8
	FString PlayFabId; // 0x10
	FString SessionTicket; // 0x20
	UPlayFabJsonObject* SettingsForUser; // 0x30
	FString username; // 0x38
};

struct FClientLoginWithAndroidDeviceIDRequest {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool CreateAccount; // 0x28
	FString EncryptedRequest; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString OS; // 0x48
	FString PlayerSecret; // 0x58
};

struct FClientRemoveFriendRequest {
	FString FriendPlayFabId; // 0x8
};

struct FGroupsAcceptGroupInvitationRequest {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FMovieSceneVector2DKeyStruct {
	FVector2D Vector; // 0x28
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FServerAddSharedGroupMembersResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdaptorPolygon2Group {
	uint32 RenderingSectionIndex; // 0x0
	int MaterialIndex; // 0x4
	int MaxTriangles; // 0x8
};

struct FSectionEvaluationData {
	int ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FSQRoleLimitFASItem {
	FSQRoleLimit Content; // 0xc
};

struct FClientLoginWithIOSDeviceIDRequest {
	bool CreateAccount; // 0x8
	FString DeviceID; // 0x10
	FString DeviceModel; // 0x20
	FString EncryptedRequest; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString OS; // 0x48
	FString PlayerSecret; // 0x58
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int DeviceID; // 0x8
};

struct FEdGraphSchemaAction {
	FText MenuDescription; // 0x8
	FText TooltipDescription; // 0x20
	FText Category; // 0x38
	FText Keywords; // 0x50
	int Grouping; // 0x68
	int SectionID; // 0x6c
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

struct FClientConsumeItemRequest {
	FString CharacterId; // 0x8
	int ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
};

struct FMultiplayerCreateServerBackfillTicketResult {
	FString TicketId; // 0x8
};

struct FServerMoveItemToUserFromCharacterRequest {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FAdminGetPlayerStatisticDefinitionsResult {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FAnimNode_RotateRootBone {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FGameplayEffectQuery {
	DelegateProperty CustomMatchDelegate_BP; // 0x10
	FGameplayTagQuery OwningTagQuery; // 0x20
	FGameplayTagQuery EffectTagQuery; // 0x68
	FGameplayTagQuery SourceTagQuery; // 0xb0
	FGameplayAttribute ModifyingAttribute; // 0xf8
	UObject* EffectSource; // 0x118
	UGameplayEffect* EffectDefinition; // 0x120
};

struct FMultiplayerListBuildAliasesForTitleResponse {
	TArray<UPlayFabJsonObject*> BuildAliases; // 0x8
};

struct FSQExplosionEffect {
	UParticleSystem* ShockwaveParticleEffect; // 0x88
	USoundCue* ShockwaveSound; // 0x90
	UMaterialInterface* ShockwaveDecalMaterial; // 0x98
	USoundCue* DebrisSound; // 0xa0
};

struct FMultiplayerEnableMultiplayerServersForTitleResponse {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FMaterialDataBinPack {
	int Width; // 0x0
	int Height; // 0x4
	UTextureRenderTarget2D* RT_Material; // 0x8
	UMaterialInterface* Material; // 0x10
	int NumPage; // 0x18
	FRectSizePadding MaterialRect; // 0x1c
};

struct FParticleSystemWorldManagerTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FClientGetPlayFabIDsFromTwitchIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FStaticMaterialLayersParameter {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FMaterialLayersFunctions Value; // 0x10
	bool bOverride; // 0x50
	FGuid ExpressionGUID; // 0x54
};

struct FClientGetPlayerProfileResult {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FSQGraphLink {
	USQGraphNodeComponent* NodeA; // 0x0
	USQGraphNodeComponent* NodeB; // 0x8
};

struct FClientCurrentGamesResult {
	int GameCount; // 0x8
	TArray<UPlayFabJsonObject*> Games; // 0x10
	int PlayerCount; // 0x20
};

struct FGameplayTagQuery {
	int TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FVertexIndexAndInstanceID {
	int ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FServerLinkXboxAccountRequest {
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString XboxToken; // 0x20
};

struct FNavDataConfig {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	FSoftClassPath NavigationDataClassName; // 0x50
};

struct FBoneNode {
	FName Name; // 0x0
	int ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FJoystickState {
	int DeviceID; // 0x0
	TArray<float> Axes; // 0x8
	TArray<bool> Buttons; // 0x18
	TArray<EJoystickPOVDirection> Hats; // 0x28
	TArray<FVector2D> Balls; // 0x38
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FAnimNode_ResetRoot {
	FComponentSpacePoseLink ComponentPose; // 0x10
	int LODThreshold; // 0x20
	float ActualAlpha; // 0x24
	EAnimAlphaInputType AlphaInputType; // 0x28
	bool bAlphaBoolEnabled; // 0x29
	float Alpha; // 0x2c
	FInputScaleBias AlphaScaleBias; // 0x30
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x38
	FName AlphaCurveName; // 0x80
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x88
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FSQClimbTraceHitResults {
	FVector EndingPoint1; // 0x0
	bool bBlockingHit; // 0xc
	FRotator ClimbFrontNormal; // 0x10
	float ClimbDistanceFromWall; // 0x1c
	FVector ClimbTraceHit2; // 0x20
};

struct FServerRemoveGenericIDRequest {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FSoundModulation {
	TArray<USoundModulationPluginSourceSettingsBase*> Settings; // 0x0
};

struct FTestMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FAdminAddVirtualCurrencyTypesRequest {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int OptionIndex; // 0x2c
	int QueryID; // 0x30
};

struct FServerGetPlayFabIDsFromPSNAccountIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FSSGS_PredefinedTactilePattern {
	FString Name; // 0x0
};

struct FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FClientRedeemCouponResult {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FMultiplayerCreateServerBackfillTicketRequest {
	int GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
	UPlayFabJsonObject* ServerDetails; // 0x30
};

struct FAdminResetUserStatisticsRequest {
	FString PlayFabId; // 0x8
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int LUTOffset; // 0x0
	int NumInitPtrs; // 0x4
	int NumEvalPtrs; // 0x8
};

struct FSQBoredMontageSet {
	UAnimMontage* BoredWeaponMontage; // 0x0
	UAnimMontage* Bored1pMontage; // 0x8
	UAnimMontage* Bored3pMontage; // 0x10
};

struct FClientGetPlayerStatisticsResult {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FClientUnlockContainerItemRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
};

struct FServerGetPlayFabIDsFromGenericIDsRequest {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FSQScoreEvent {
	float Points; // 0x0
	FString Reason; // 0x8
	FName ScoreGroup; // 0x18
	float Timestamp; // 0x20
};

struct FClientGetLeaderboardAroundPlayerRequest {
	int MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	bool UseSpecificVersion; // 0x38
	int Version; // 0x3c
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FSQProjectileImpactEffect {
	TArray<UParticleSystem*> Particles; // 0x0
	USQShockwave* Shockwave; // 0x10
	TArray<USoundCue*> Sounds; // 0x18
	TArray<USoundCue*> FirstPersonSounds; // 0x28
	TArray<USoundCue*> RicochetSounds; // 0x38
	TArray<USoundCue*> RicochetFirstPersonSounds; // 0x48
	TArray<UMaterialInterface*> decals; // 0x58
	char bDoParticlesUseRotation : 1; // 0x68
	float MinDecalSize; // 0x6c
	float MaxDecalSize; // 0x70
	bool bSkewDecalSize; // 0x74
	float DecalDepth; // 0x78
	float DecalLifeSpan; // 0x7c
	bool bRandomizeDecalRotation; // 0x80
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

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FClientConsumePSNEntitlementsResult {
	TArray<UPlayFabJsonObject*> ItemsGranted; // 0x8
};

struct FMultiplayerRolloverContainerRegistryCredentialsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FSQMapMarkerGameplayData {
	int SquadId; // 0x0
	ESQTeam TeamId; // 0x4
	int FireTeamId; // 0x8
	FVector_NetQuantize LocationVector; // 0xc
	FVector_NetQuantize DistanceRotationVector; // 0x18
	USQMapMarkerDataAsset* MapMarkerDataAsset; // 0x28
	char UniqueID; // 0x30
	float CreationTime; // 0x34
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FMultiplayerGetMatchResult {
	FString MatchID; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RegionPreferences; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FServerRevokeBansRequest {
	FString BanIds; // 0x8
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FSQCreditsList {
	ESQCreditsLineType LineType; // 0x0
	FString Name; // 0x8
	TArray<FString> Columns; // 0x18
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

struct FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FGroupsUpdateGroupRoleRequest {
	int ExpectedProfileVersion; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
	FString RoleName; // 0x28
};

struct FVectorDistribution {
	FDistributionLookupTable table; // 0x0
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
	FVector_NetQuantize10 Acceleration; // 0x140
	FVector_NetQuantize10 LinearVelocity; // 0x14c
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
	UStructProperty* LinearColorProperty; // 0x28
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

struct FSQInventoryData {
	ASQEquipableItem* EquipableItem; // 0x0
	int MaxAllowedInInventory; // 0x8
	int MinimumCountOnSpawn; // 0xc
	char bCannotRearm : 1; // 0x10
	EWeaponType WeaponType; // 0x14
};

struct FMovieSceneEvaluationFieldSegmentPtr {
	FMovieSceneSegmentIdentifier SegmentId; // 0x8
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FGameplayEffectCustomExecutionOutput {
	TArray<FGameplayModifierEvaluatedData> OutputModifiers; // 0x0
	char bTriggerConditionalGameplayEffects : 1; // 0x10
	char bHandledStackCountManually : 1; // 0x10
	char bHandledGameplayCuesManually : 1; // 0x10
};

struct FCharacterMovementComponentPostPhysicsTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FServerGetAllSegmentsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FSSGS_HandlerColor {
	FSSGS_IlluminationDeviceZone deviceZone; // 0x8
	ESSGS_IlluminationMode Mode; // 0x40
	USSGS_ColorEffectSpecification* Color; // 0x48
	USSGS_RateSpecification* Rate; // 0x50
};

struct FSQCoreStateId {
	uint16 Raw; // 0x0
};

struct FClientLoginWithKongregateRequest {
	FString AuthTicket; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString KongregateId; // 0x38
	FString PlayerSecret; // 0x48
};

struct FMovieSceneActorReferenceData {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x30
};

struct FTTFloatTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FClientGetPlayFabIDsFromGoogleIDsRequest {
	FString GoogleIDs; // 0x8
};

struct FMultiplayerShutdownMultiplayerServerRequest {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString SessionId; // 0x28
};

struct FAdminSetPublisherDataResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneVisibilitySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FAnimNode_ConvertLocalToComponentSpace {
	FPoseLink LocalPose; // 0x10
};

struct FVectorMaterial {
	FName ParameterName; // 0x0
	FLinearColor DefaultVectorValue; // 0x8
	bool ValueChangesOnTime; // 0x18
	FLinearColor MaxVectorValue; // 0x1c
};

struct FSQSoldierEffect {
	UCurveFloat* SoldierInclineMovementSpeedCurve; // 0x0
	bool bPlayFootstepEffectWhenMovementInteractionTriggered; // 0x8
	UParticleSystem* FootstepEffect; // 0x10
	USoundCue* FootstepSound; // 0x18
	UParticleSystem* MovementInteractionParticleEffect; // 0x20
	USoundCue* MovementInteractionSound; // 0x28
	USoundCue* LandedSound; // 0x30
};

struct FClientUnlinkFacebookInstantGamesIdResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerUpdateAvatarUrlRequest {
	FString ImageUrl; // 0x8
	FString PlayFabId; // 0x18
};

struct FGameplayAttribute {
	FString AttributeName; // 0x0
	UProperty* Attribute; // 0x10
	UStruct* AttributeOwner; // 0x18
};

struct FSQEffectParticleSound {
	ASQLastingEffect* LastingEffectClass; // 0x0
	UParticleSystem* ParticleEffect; // 0x8
	USoundBase* SoundEffect; // 0x10
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FClientGetLeaderboardRequest {
	int MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int Version; // 0x34
};

struct FServerGetFriendsListRequest {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString XboxToken; // 0x28
};

struct FSplineMeshInstanceData {
	FVector StartPos; // 0xa8
	FVector EndPos; // 0xb4
	FVector StartTangent; // 0xc0
	FVector EndTangent; // 0xcc
};

struct FSkeletalMeshOptimizationSettings {
	SkeletalMeshTerminationCriterion TerminationCriterion; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float NumOfVertPercentage; // 0x8
	uint32 MaxNumOfTriangles; // 0xc
	uint32 MaxNumOfVerts; // 0x10
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
	int MaxBonesPerVertex; // 0x28
	char bEnforceBoneBoundaries : 1; // 0x2c
	float VolumeImportance; // 0x30
	char bLockEdges : 1; // 0x34
	int BaseLOD; // 0x38
};

struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x0
	FLinearColor SubsurfaceColor; // 0x4
	FLinearColor FalloffColor; // 0x14
	FLinearColor BoundaryColorBleed; // 0x24
	float ExtinctionScale; // 0x34
	float NormalScale; // 0x38
	float ScatteringDistribution; // 0x3c
	float IOR; // 0x40
	float Roughness0; // 0x44
	float Roughness1; // 0x48
	float LobeMix; // 0x4c
};

struct FAdminGetCloudScriptVersionsResult {
	TArray<UPlayFabJsonObject*> Versions; // 0x8
};

struct FDataFinalizeFileUploadsRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
};

struct FServerGetPlayFabIDsFromXboxLiveIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FActorTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x40
};

struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	float StartEndFalloff; // 0x3c
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int Port; // 0x20
	int Valid; // 0x24
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int DiaphragmBladeCount; // 0x14
};

struct FMultiplayerGetServerBackfillTicketRequest {
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FAnimLinkableElement {
	UAnimMontage* LinkedMontage; // 0x8
	int SlotIndex; // 0x10
	int SegmentIndex; // 0x14
	EAnimLinkMethod LinkMethod; // 0x18
	EAnimLinkMethod CachedLinkMethod; // 0x19
	float SegmentBeginTime; // 0x1c
	float SegmentLength; // 0x20
	float LinkValue; // 0x24
	UAnimSequenceBase* LinkedSequence; // 0x28
};

struct FVerticesForEdge {
	FEdgeID EdgeID; // 0x0
	FVertexID NewVertexID0; // 0x4
	FVertexID NewVertexID1; // 0x8
};

struct FAdminModifyServerBuildResult {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int MaxGamesPerHost; // 0x58
	int MinFreeGameSlots; // 0x5c
	EGameBuildStatus Status; // 0x60
	FString Timestamp; // 0x68
	FString TitleId; // 0x78
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FGameplayModEvaluationChannelSettings {
	EGameplayModEvaluationChannel Channel; // 0x0
};

struct FAdminUpdateRandomResultTablesRequest {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Tables; // 0x18
};

struct FMultiplayerCancelServerBackfillTicketRequest {
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FSQFireTeam {
	TArray<ASQPlayerController*> Players; // 0x0
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

struct FBakedStateExitTransition {
	int CanTakeDelegateIndex; // 0x0
	int CustomResultNodeIndex; // 0x4
	int TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int> PoseEvaluatorLinks; // 0x10
};

struct FLightmassMaterialInterfaceSettings {
	char bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float ExportResolutionScale; // 0xc
	char bOverrideCastShadowAsMasked : 1; // 0x10
	char bOverrideEmissiveBoost : 1; // 0x10
	char bOverrideDiffuseBoost : 1; // 0x10
	char bOverrideExportResolutionScale : 1; // 0x10
};

struct FAdminLookupUserAccountInfoResult {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FAtmospherePrecomputeInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
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

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	char bApplyToChildren : 1; // 0x10
	float VoiceCenterChannelVolumeAdjuster; // 0x14
};

struct FDataGetFilesResponse {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int ProfileVersion; // 0x18
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FClientCurrentGamesRequest {
	FString BuildVersion; // 0x8
	FString GameMode; // 0x18
	ERegion Region; // 0x28
	FString StatisticName; // 0x30
	UPlayFabJsonObject* TagFilter; // 0x40
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMaterialInput {
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FDynamicPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FMatchmakerUserInfoResponse {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	bool IsDeveloper; // 0x18
	FString PlayFabId; // 0x20
	FString SteamId; // 0x30
	FString TitleDisplayName; // 0x40
	FString username; // 0x50
	UPlayFabJsonObject* VirtualCurrency; // 0x60
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x68
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int ClipIDNumber; // 0x8
};

struct FClientGetPlayFabIDsFromGameCenterIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FSQObjectiveSounds {
	USoundCue* ObjectiveBeingWon; // 0x0
	USoundCue* ObjectiveWon; // 0x28
	USoundCue* ObjectiveBeingLost; // 0x50
	USoundCue* ObjectiveLost; // 0x78
};

struct FLobbyPlayerStateInfoArray {
	TArray<FLobbyPlayerStateActorInfo> Players; // 0x108
	ALobbyBeaconState* ParentState; // 0x118
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

struct FAdminGetUserInventoryRequest {
	FString PlayFabId; // 0x8
};

struct FSQClimbOntoTypeData {
	float InterpolateTime; // 0x30
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FMovieSceneTrackIdentifier {
	uint32 Value; // 0x0
};

struct FSQApprovalEntryRequest {
	EApprovalRequestTypes RequestType; // 0x0
	UObject* PtrParams[0x4]; // 0x8
	FName MessageTableRowName; // 0x28
	float ExpireIn; // 0x30
	float Timestamp; // 0x34
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters {
	FFrameNumber SectionStartTime; // 0xd0
	FFrameNumber SectionEndTime; // 0xd4
};

struct FSQPenetrationProxy {
	char bIsActor : 1; // 0x0
	char bHasValidReverseImpact : 1; // 0x0
	FHitResult HitResult; // 0x4
	FVector ReverseAngleImpactLocation; // 0x8c
	FVector_NetQuantizeNormal ReverseAngleImpactNormal; // 0x98
	FName ReverseAngleBoneName; // 0xa4
};

struct FAdminIncrementLimitedEditionItemAvailabilityResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FAnimNode_UseCachedPose {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FSQLevelEntry {
	FText DisplayName_14_223B49C94810ABAC30BC15AA83B5BC3C; // 0x0
	FText CountryName_27_712BD6C84DE12C74D0BAB38AC4FF8C30; // 0x18
	FText Lore_17_A6F05BD54DBABCCFC1AED4A9EF315793; // 0x30
	UTexture2D* Thumbnail_37_72DB25C24A3DFA3E4811B996E55670B7; // 0x48
	UTexture2D* LoadingScreen_FHD_28_5F812B3640D9B1BE818DDB8161E09F38; // 0x70
	UTexture2D* LoadingScreen_UHD_31_FA04FD614E4A659730AC3FA37AADF668; // 0x98
	UTexture2D* LoadingScreen_DQHD_33_07BD69C04EB09F84B88AAC99F85E027D; // 0xc0
	UTexture2D* Map_19_EE43B3C74987980EAA8FAF9AE783CA64; // 0xe8
	USoundBase* LoadingMusic_26_F4C51A52463A8E342AA83F82F51120E9; // 0x110
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FSQRotator_NetQuantizeBytes {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FCompositeSubFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FAimConstraintDescription {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FAnimNode_SaveCachedPose {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FSQTestInventoryData {
	TArray<FSQInventoryWeaponGroupData> GroupItems; // 0x0
};

struct FGroupsListGroupMembersRequest {
	UPlayFabJsonObject* Group; // 0x8
};

struct FServerAddUserVirtualCurrencyRequest {
	int Amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FAdminSetupPushNotificationRequest {
	FString Credential; // 0x8
	FString Key; // 0x18
	FString Name; // 0x28
	bool OverwriteOldARN; // 0x38
	EPushSetupPlatform Platform; // 0x39
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
};

struct FMatchmakerAuthUserResponse {
	bool Authorized; // 0x8
	FString PlayFabId; // 0x10
};

struct FMovieSceneParticleChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FClientAndroidDevicePushNotificationRegistrationResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerAddGenericIDRequest {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
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

struct FSQArmorInfo {
	float Thickness; // 0x0
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FLevelStreamingWrapper {
	ULevelStreaming* StreamingLevel; // 0x0
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FServerGetPlayerProfileResult {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FWidgetComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FClientLinkGameCenterAccountRequest {
	bool ForceLink; // 0x8
	FString GameCenterId; // 0x10
	FString PublicKeyUrl; // 0x20
	FString Salt; // 0x30
	FString Signature; // 0x40
	FString Timestamp; // 0x50
};

struct FGameplayCueObjectLibrary {
	TArray<FString> Paths; // 0x0
	UObjectLibrary* ActorObjectLibrary; // 0x30
	UObjectLibrary* StaticObjectLibrary; // 0x38
	UGameplayCueSet* CueSet; // 0x40
	bool bShouldSyncScan; // 0x4c
	bool bShouldAsyncLoad; // 0x4d
	bool bShouldSyncLoad; // 0x4e
	bool bHasBeenInitialized; // 0x4f
};

struct FServerUpdateUserInventoryItemDataRequest {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString ItemInstanceId; // 0x20
	FString KeysToRemove; // 0x30
	FString PlayFabId; // 0x40
};

struct FPlayFabBaseModel {
	FPlayFabError responseError; // 0x0
	UPlayFabJsonObject* responseData; // 0x38
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FServerSetGameServerInstanceStateRequest {
	FString LobbyId; // 0x8
	EGameInstanceState State; // 0x18
};

struct FSSGS_Event {
	FString Game; // 0x8
	FString EventName; // 0x18
};

struct FClientGetPaymentTokenResult {
	FString OrderId; // 0x8
	FString ProviderToken; // 0x18
};

struct FClientUnlinkWindowsHelloAccountRequest {
	FString PublicKeyHint; // 0x8
};

struct FGroupsListMembershipOpportunitiesRequest {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int, int> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FMatchmakerStartGameResponse {
	FString GameID; // 0x8
	FString ServerIPV4Address; // 0x18
	FString ServerIPV6Address; // 0x28
	int ServerPort; // 0x38
	FString ServerPublicDNSName; // 0x40
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
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

struct FServerMoveItemToCharacterFromUserResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGfeSDKCreateInputParams {
	FString AppName; // 0x0
	TArray<EGfeSDKScope> RequiredScopes; // 0x10
	bool PollForCallbacks; // 0x20
};

struct FMovieSceneObjectPathChannelKeyValue {
	UObject* SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FSSGS_RateRange {
	TArray<FSSGS_Frequency> frequency; // 0x0
	TArray<FSSGS_RepeatLimit> repeat_limit; // 0x10
};

struct FSQCommandActionDataFASItem {
	FSQCommandActionData Content; // 0x10
};

struct FProfilesSetEntityProfilePolicyRequest {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x10
};

struct FClientGetFriendLeaderboardRequest {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int MaxResultsCount; // 0xc
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int Version; // 0x34
	FString XboxToken; // 0x38
};

struct FSQEffectsSet {
	FSQProjectileImpactEffect ImpactEffects; // 0x0
	FSQProjectileImpactEffect ThrowableEffects; // 0x88
	FSQExplosionEffect ExplosionEffects; // 0x110
	FSQProjectileImpactEffect BlastEffects; // 0x1b8
	bool bOverlapsThrowableProjectiles; // 0x240
};

struct FAdminGetContentListResult {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	int ItemCount; // 0x18
	int TotalSize; // 0x1c
};

struct FAdminGetPlayersInSegmentResult {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int ProfilesInSegment; // 0x28
};

struct FNavigationLinkBase {
	float LeftProjectHeight; // 0x0
	float MaxFallDownLength; // 0x4
	ENavLinkDirection Direction; // 0x8
	float SnapRadius; // 0x10
	float SnapHeight; // 0x14
	FNavAgentSelector SupportedAgents; // 0x18
	char bSupportsAgent0 : 1; // 0x1c
	char bSupportsAgent1 : 1; // 0x1c
	char bSupportsAgent2 : 1; // 0x1c
	char bSupportsAgent3 : 1; // 0x1c
	char bSupportsAgent4 : 1; // 0x1c
	char bSupportsAgent5 : 1; // 0x1c
	char bSupportsAgent6 : 1; // 0x1c
	char bSupportsAgent7 : 1; // 0x1c
	char bSupportsAgent8 : 1; // 0x1d
	char bSupportsAgent9 : 1; // 0x1d
	char bSupportsAgent10 : 1; // 0x1d
	char bSupportsAgent11 : 1; // 0x1d
	char bSupportsAgent12 : 1; // 0x1d
	char bSupportsAgent13 : 1; // 0x1d
	char bSupportsAgent14 : 1; // 0x1d
	char bSupportsAgent15 : 1; // 0x1d
	char bUseSnapHeight : 1; // 0x20
	char bSnapToCheapestArea : 1; // 0x20
	char bCustomFlag0 : 1; // 0x20
	char bCustomFlag1 : 1; // 0x20
	char bCustomFlag2 : 1; // 0x20
	char bCustomFlag3 : 1; // 0x20
	char bCustomFlag4 : 1; // 0x20
	char bCustomFlag5 : 1; // 0x20
	char bCustomFlag6 : 1; // 0x21
	char bCustomFlag7 : 1; // 0x21
	UNavAreaBase* AreaClass; // 0x28
};

struct FMultiplayerDeleteBuildRequest {
	FString BuildId; // 0x8
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	UStructProperty* ValueHandlerNodeProperty; // 0x20
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FSQTextureMemoryStats {
	int DedicatedVideoMemory; // 0x0
	int DedicatedSystemMemory; // 0x4
	int SharedSystemMemory; // 0x8
	int TotalGraphicsMemory; // 0xc
	int AllocatedMemorySize; // 0x10
	int TexturePoolSize; // 0x14
	int PendingMemoryAdjustment; // 0x18
};

struct FAdminUpdatePolicyResponse {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FHitResult {
	char bBlockingHit : 1; // 0x0
	char bStartPenetrating : 1; // 0x0
	int FaceIndex; // 0x4
	float Time; // 0x8
	float distance; // 0xc
	FVector_NetQuantize Location; // 0x10
	FVector_NetQuantize ImpactPoint; // 0x1c
	FVector_NetQuantizeNormal Normal; // 0x28
	FVector_NetQuantizeNormal ImpactNormal; // 0x34
	FVector_NetQuantize TraceStart; // 0x40
	FVector_NetQuantize TraceEnd; // 0x4c
	float PenetrationDepth; // 0x58
	int Item; // 0x5c
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x60
	TWeakObjectPtr<AActor> Actor; // 0x68
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x70
	FName BoneName; // 0x78
	FName MyBoneName; // 0x80
};

struct FServerAddCharacterVirtualCurrencyRequest {
	int Amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
};

struct FSQRoleGroupingStrategy {
	FText DisplayName_11_A4E8407B469736A3818E4A84F0AE71C1; // 0x0
	UTexture2D* Icon_14_7F8F70B84859593DBB20CBBD7C148C4E; // 0x18
	bool IsCategory_15_09AE1CC240EC98C83A339E8AC5FB5115; // 0x40
	TSet<SQRoleTags> TargetTags_16_8C7D568947601ABED9301195CC06E60C; // 0x48
	bool ReversedRule_7_39D8031F4C52D649458FE18BABBB8B1E; // 0x98
};

struct FSQScoreboardStyle {
	FSlateBrush ItemBorderBrush; // 0x8
	FSlateColor KillStatColor; // 0x90
	FSlateColor DeathStatColor; // 0xb8
	FSlateColor ScoreStatColor; // 0xe0
};

struct FClientWriteClientCharacterEventRequest {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString Timestamp; // 0x30
};

struct FGroupsListGroupApplicationsResponse {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
};

struct FChaosCollisionEventData {
	FVector Location; // 0x0
	FVector Normal; // 0xc
	FVector Velocity1; // 0x18
	FVector Velocity2; // 0x24
	float Mass1; // 0x30
	float Mass2; // 0x34
	FVector Impulse; // 0x38
	int ParticleIndex; // 0x44
	int LevelsetIndex; // 0x48
};

struct FSQChoice {
	FName ID; // 0x0
	FDataTableRowHandle Data; // 0x8
};

struct FSQAnimPlayTime {
	float WeaponPlayTime; // 0x0
	float Soldier1pPlayTime; // 0x4
	float Soldier3pPlayTime; // 0x8
};

struct FMultiplayerCreateBuildWithManagedContainerRequest {
	FString BuildName; // 0x8
	EContainerFlavor ContainerFlavor; // 0x18
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x20
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x30
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x40
	UPlayFabJsonObject* MetaData; // 0x48
	int MultiplayerServerCountPerVm; // 0x50
	TArray<UPlayFabJsonObject*> Ports; // 0x58
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x68
	FString StartMultiplayerServerCommand; // 0x78
	EAzureVmSize VmSize; // 0x88
};

struct FBlueprintInputTouchDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FSQKillDeathSettings {
	int TicketsLostOnKill; // 0x0
	int TicketsLostOnSuicide; // 0x4
	int TicketsLostOnTeamkill; // 0x8
	int TicketsLostOnKillCommander; // 0xc
	ESQKillReportChannel KillChannel; // 0x10
	ESQKillReportChannel SuicideChannel; // 0x11
	ESQKillReportChannel TeamkillChannel; // 0x12
	float PointsForKill; // 0x14
	float PointsForWounded; // 0x18
	float PointsForSuicide; // 0x1c
	float PointsForTeamkill; // 0x20
	float PointsForDeath; // 0x24
	float TeamPointsForKill; // 0x28
	float TeamPointsForSuicide; // 0x2c
	float TeamPointsForTeamkill; // 0x30
	float TeamPointsForDeath; // 0x34
	bool NotifyKillerOnKill; // 0x38
	bool NotifyKillerOnTeamkill; // 0x39
	bool DelayKillScore; // 0x3a
	bool DelayTeamkillScore; // 0x3b
	bool DelayDeathScore; // 0x3c
};

struct FPackedRGBA16N {
	int XY; // 0x0
	int ZW; // 0x4
};

struct FClientGetCharacterDataRequest {
	FString CharacterId; // 0x8
	int IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FSQDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FClientGetPlayFabIDsFromGenericIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAttributeBasedFloat {
	FScalableFloat Coefficient; // 0x0
	FScalableFloat PreMultiplyAdditiveValue; // 0x20
	FScalableFloat PostMultiplyAdditiveValue; // 0x40
	FGameplayEffectAttributeCaptureDefinition BackingAttribute; // 0x60
	FCurveTableRowHandle AttributeCurve; // 0x88
	EAttributeBasedFloatCalculationType AttributeCalculationType; // 0x98
	EGameplayModEvaluationChannel FinalChannel; // 0x99
	FGameplayTagContainer SourceTagFilter; // 0xa0
	FGameplayTagContainer TargetTagFilter; // 0xc0
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FClientGetTitlePublicKeyResult {
	FString RSAPublicKey; // 0x8
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int Index; // 0xc
};

struct FAdminAddPlayerTagRequest {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FAdminGetUserDataRequest {
	int IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FMultiplayerUpdateBuildAliasRequest {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
};

struct FMovieSceneEulerTransformPropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FMultiplayerGetAssetUploadUrlResponse {
	FString AssetUploadUrl; // 0x8
	FString Filename; // 0x18
};

struct FGroupsUpdateGroupRequest {
	FString AdminRoleId; // 0x8
	int ExpectedProfileVersion; // 0x18
	UPlayFabJsonObject* Group; // 0x20
	FString GroupName; // 0x28
	FString MemberRoleId; // 0x38
};

struct FClothVertBoneData {
	int NumInfluences; // 0x0
	uint16 BoneIndices[0x8]; // 0x4
	float BoneWeights[0x8]; // 0x14
};

struct FMovieSceneSegmentIdentifier {
	int IdentifierIndex; // 0x0
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32 LODIndex; // 0xc
};

struct FNavigationLink {
	FVector Left; // 0x38
	FVector Right; // 0x44
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int Value; // 0x4
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FAdminGetUserInventoryResult {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FServerDeleteSharedGroupRequest {
	FString SharedGroupId; // 0x8
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalToTrackingTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FSQFactionSetupEntry {
	FText ShortName_2_7ED5FE3E4551011D7164EEA7093086F5; // 0x0
	FText DisplayName_58_AC79DBBC48DDFEFFE67622BD1296F7CD; // 0x18
	FText Description_6_74A276AC436525A8CBD2F1BC68D0AD5D; // 0x30
	UTexture2D* UI_UnitBadge_50_CE92CEB643008739B04CC88C8640ADC8; // 0x48
	FName OuterFactionId_39_4385427843DA4F72431EEE98D875406E; // 0x70
	TArray<FSQRoleGroupingStrategy> UI_RoleGroupingStrategies_64_6D2F7CBB480EB4189C6547945C8EC2BB; // 0x78
	TArray<FSQDeployableGroupingStrategy> UI_DeployableGroupingStategies_68_8E9A0612455DDBEA20E1959E5DF16C57; // 0x88
	TArray<FSQActionGroupingStrategy> UI_ActionGroupingStategies_71_5A39416848A1755881F921A3A91B98D7; // 0x98
};

struct FSQDesignLink {
	AActor* NodeA; // 0x0
	AActor* NodeB; // 0x8
};

struct FClientGetCharacterStatisticsResult {
	UPlayFabJsonObject* CharacterStatistics; // 0x8
};

struct FDynamicTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FDataSetObjectsRequest {
	UPlayFabJsonObject* Entity; // 0x8
	int ExpectedProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> Objects; // 0x18
};

struct FMultiplayerRequestMultiplayerServerResponse {
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

struct FMultiplayerEnableMultiplayerServersForTitleRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FSQAvailabilityState_Role {
	FSQAvailabilityState Status; // 0x0
	USQAvailability_Role* Availability; // 0x48
	bool SwappableWithCurrent; // 0x50
};

struct FAdminAddPlayerTagResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FClientSubtractUserVirtualCurrencyRequest {
	int Amount; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FAdminIncrementLimitedEditionItemAvailabilityRequest {
	int Amount; // 0x8
	FString CatalogVersion; // 0x10
	FString ItemId; // 0x20
};

struct FServerSubtractCharacterVirtualCurrencyRequest {
	int Amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
};

struct FClientCancelTradeResponse {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FAdminModifyMatchmakerGameModesRequest {
	FString BuildVersion; // 0x8
	TArray<UPlayFabJsonObject*> GameModes; // 0x18
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType* Type; // 0x38
};

struct FAnimNode_RefPose {
	ERefPoseType RefPoseType; // 0x10
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FSSGS_EventInfo {
	FString Game; // 0x8
	FString EventName; // 0x18
	int MinValue; // 0x28
	int MaxValue; // 0x2c
	ESSGS_EventIconId iconId; // 0x30
	bool valueOptional; // 0x31
};

struct FMovieSceneSpawnSectionTemplate {
	FMovieSceneBoolChannel Curve; // 0x20
};

struct FSQCoreStateDataToIdMap {
	TMap<USQCoreStateData*, FSQCoreStateId> Raw; // 0x0
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	AActor* ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FMultiplayerGetRemoteLoginEndpointResponse {
	FString IPV4Address; // 0x8
	int Port; // 0x18
};

struct FClothPhysicalMeshData {
	TArray<FVector> Vertices; // 0x0
	TArray<FVector> Normals; // 0x10
	TArray<uint32> Indices; // 0x20
	TArray<float> MaxDistances; // 0x30
	TArray<float> BackstopDistances; // 0x40
	TArray<float> BackstopRadiuses; // 0x50
	TArray<float> AnimDriveMultipliers; // 0x60
	TArray<float> InverseMasses; // 0x70
	TArray<FClothVertBoneData> BoneData; // 0x80
	int MaxBoneWeights; // 0x90
	int NumFixedVerts; // 0x94
	TArray<uint32> SelfCollisionIndices; // 0x98
};

struct FGfeSDKHighlightGroupView {
	FString GroupId; // 0x0
	EGfeSDKHighlightType TagsFilter; // 0x10
	EGfeSDKHighlightSignificance SignificanceFilter; // 0x11
};

struct FServerDeregisterGameRequest {
	FString LobbyId; // 0x8
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FAdminSetPlayerSecretRequest {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FSQVoteStateContainer {
	FSQVote Vote; // 0x0
	FSQVoteSessionInfo State; // 0x38
	FName WinnerId; // 0x60
	bool Ended; // 0x68
	FSQChoice WinnerChoice; // 0x70
	char StatusUpdateID; // 0x88
};

struct FSQShotInfo {
	char ShotCounter; // 0x0
	float WorldTime; // 0x4
	FVector_NetQuantize10 Origin; // 0x8
	FVector_NetQuantizeNormal ShootDir; // 0x14
	bool bIsTracer; // 0x20
	float PenetrationDamageMultiplier; // 0x24
	float ArmorDamageMultiplier; // 0x28
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FClientUpdateSharedGroupDataResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerUpdateUserDataRequest {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
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

struct FMultiplayerCreateMatchmakingTicketResult {
	FString TicketId; // 0x8
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FServerGetLeaderboardRequest {
	int MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int StartPosition; // 0x18
	FString StatisticName; // 0x20
	bool UseSpecificVersion; // 0x30
	int Version; // 0x34
};

struct FClientRestoreIOSPurchasesRequest {
	FString CatalogVersion; // 0x8
	FString ReceiptData; // 0x18
};

struct FServerGetCharacterInventoryResult {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	FString PlayFabId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40
};

struct FAdminUpdateBansResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMovieSceneObjectPropertyTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x48
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int> RandomSeeds; // 0x10
};

struct FAdminResetCharacterStatisticsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerSetGameServerInstanceDataResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientAddUserVirtualCurrencyRequest {
	int Amount; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FClientGetUserInventoryResult {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	UPlayFabJsonObject* VirtualCurrency; // 0x18
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
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

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FChannelDefinition {
	FName ChannelName; // 0x0
	FName ClassName; // 0x8
	UObject* ChannelClass; // 0x10
	int StaticChannelIndex; // 0x18
	bool bTickOnCreate; // 0x1c
	bool bServerOpen; // 0x1d
	bool bClientOpen; // 0x1e
	bool bInitialServer; // 0x1f
	bool bInitialClient; // 0x20
};

struct FMultiplayerGetMatchmakingTicketResult {
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	UPlayFabJsonObject* Creator; // 0x28
	int GiveUpAfterSeconds; // 0x30
	FString MatchID; // 0x38
	TArray<UPlayFabJsonObject*> Members; // 0x48
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x58
	FString QueueName; // 0x68
	FString Status; // 0x78
	FString TicketId; // 0x88
};

struct FSQVehicleEffect {
	FSQPhysMatVehicleFXData VehicleFXData; // 0x0
	USoundCue* VehicleLightImpactSound; // 0x68
	UParticleSystem* VehicleLightImpactEffect; // 0x70
	USoundCue* VehicleImpactSound; // 0x78
	UParticleSystem* VehicleImpactEffect; // 0x80
	bool bDoVehicleParticlesUseRotation; // 0x88
};

struct FMovieSceneByteChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FHighlightEventStruct {
	FString GroupId_13_367B7757457B2685410BA0ABDDEAADA0; // 0x0
	FString HighlightName_11_AEF6AB6048A02B16D74A81BE3177DCEB; // 0x10
	int VideoStartDelta_6_3E3113F641832A43D17A98B9164E8CC6; // 0x20
	int VideoEndDelta_8_AD2A496A41F40C43838A5EBEF8554A03; // 0x24
};

struct FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	FVector AttenuationShapeExtents; // 0x10
	float ConeOffset; // 0x1c
	float FalloffDistance; // 0x20
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
};

struct FServerGetPublisherDataRequest {
	FString Keys; // 0x8
};

struct FVectorMaterialInput {
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FVehicleTransmissionData {
	bool bUseGearAutoBox; // 0x0
	float GearSwitchTime; // 0x4
	float GearAutoBoxLatency; // 0x8
	float FinalRatio; // 0xc
	TArray<FVehicleGearData> ForwardGears; // 0x10
	TArray<FVehicleGearData> BackwardGears; // 0x20
	float ReverseGearRatio; // 0x30
	float NeutralGearUpRatio; // 0x34
	float NeutralGearDownRatio; // 0x38
	float ClutchStrength; // 0x3c
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

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FGfeSDKRequestPermissionsParams {
	TArray<EGfeSDKScope> Scopes; // 0x0
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FServerWriteTitleEventRequest {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FServerGetPlayerProfileRequest {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FMultiplayerListQosServersForTitleRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
	TMap<FMovieSceneSequenceID, uint32> SubTemplateSerialNumbers; // 0x20
};

struct FMultiplayerListQosServersResponse {
	int PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FClientUpdateSharedGroupDataRequest {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64 Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64 FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FMultiplayerListMatchmakingTicketsForPlayerRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FGameplayEffectAttributeCaptureDefinition {
	FGameplayAttribute AttributeToCapture; // 0x0
	EGameplayEffectAttributeCaptureSource AttributeSource; // 0x20
	bool bSnapshot; // 0x21
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FMultiplayerRequestMultiplayerServerRequest {
	UPlayFabJsonObject* BuildAliasParams; // 0x8
	FString BuildId; // 0x10
	FString InitialPlayers; // 0x20
	FString PreferredRegions; // 0x30
	FString SessionCookie; // 0x40
	FString SessionId; // 0x50
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

struct FMovieSceneVectorKeyStructBase {
	FFrameNumber Time; // 0x8
};

struct FPerBoneBlendWeight {
	int SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FSQGrenadeData {
	bool bInfiniteAmmo; // 0x0
	int InitialAmmo; // 0x4
	int MaxAmmo; // 0x8
	float OverhandThrowVelocity; // 0xc
	float UnderhandThrowVelocity; // 0x10
	float ThrowReadyTime; // 0x14
	float OverhandThrowTime; // 0x18
	float UnderhandThrowTime; // 0x1c
	float OverhandThrowDuration; // 0x20
	float UnderhandThrowDuration; // 0x24
	float ThrowModeTransitionTime; // 0x28
	float FuseTimeMin; // 0x2c
	float FuseTimeMax; // 0x30
	float ReloadTime; // 0x34
	AActor* ProjectileClass; // 0x38
	FName ProjectileOriginSocketName; // 0x40
};

struct FDataFinalizeFileUploadsResponse {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int ProfileVersion; // 0x18
};

struct FLocalizationGetLanguageListResponse {
	FString LanguageList; // 0x8
};

struct FSQVoteSessionChoiceInfo {
	FName ID; // 0x0
	TArray<FName> Voters; // 0x8
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	FName Name; // 0x4
	ECollisionResponse DefaultResponse; // 0xc
	bool bTraceType; // 0xd
	bool bStaticObject; // 0xe
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
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

struct FClientLoginWithOpenIdConnectRequest {
	FString ConnectionId; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	FString IdToken; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString PlayerSecret; // 0x48
};

struct FClientLoginWithPlayFabRequest {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString Password; // 0x10
	FString username; // 0x20
};

struct FTransformCurve {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
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

struct FClientGetTitleNewsResult {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FGfeSDKHighlightScreenshotParams {
	FString GroupId; // 0x0
	FString HighlightId; // 0x10
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FSQPersistedAmmoGroup {
	TArray<FSQPersistedAmmoCount> AmmoCounts; // 0x0
};

struct FGroupsRemoveMembersRequest {
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
};

struct FAnimNode_SingleNode {
	FPoseLink SourcePose; // 0x10
};

struct FAdminGetTasksResult {
	TArray<UPlayFabJsonObject*> Tasks; // 0x8
};

struct FServerUpdatePlayerStatisticsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FCompositeSection {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FAdminDeleteStoreResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminGetRandomResultTablesResult {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	UCurveLinearColor* Curve; // 0x8
	UCurveLinearColorAtlas* Atlas; // 0x30
};

struct FClientLoginWithCustomIDRequest {
	bool CreateAccount; // 0x8
	FString CustomId; // 0x10
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FServerRemovePlayerTagResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FServerGetPlayFabIDsFromGenericIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerGetFriendLeaderboardRequest {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	int StartPosition; // 0x28
	FString StatisticName; // 0x30
	bool UseSpecificVersion; // 0x40
	int Version; // 0x44
	FString XboxToken; // 0x48
};

struct FSQConsoleCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FSQMapData {
	FString ShortName; // 0x0
	FString LoadingScreenTexturePath; // 0x10
	TArray<FString> MapPaths; // 0x20
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FServerGetCharacterDataResult {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int DataVersion; // 0x20
	FString PlayFabId; // 0x28
};

struct FAnimationTransitionBetweenStates {
	int PreviousState; // 0x8
	int NextState; // 0xc
	float CrossfadeDuration; // 0x10
	int StartNotify; // 0x14
	int EndNotify; // 0x18
	int InterruptNotify; // 0x1c
	EAlphaBlendOption BlendMode; // 0x20
	UCurveFloat* CustomCurve; // 0x28
	UBlendProfile* BlendProfile; // 0x30
	ETransitionLogicType LogicType; // 0x38
};

struct FSQDeployableStateDamageEffect {
	ESQBuildState OldBuildState; // 0x0
	ESQBuildState NewBuildState; // 0x1
	float CullingDistanceInMeters; // 0x4
	TArray<FSQDamageEffect> DamageEffects; // 0x8
};

struct FHeaderRowStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FMatchmakerPlayerJoinedRequest {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FPartyMemberRepData {
	FUserPlatform Platform; // 0x20
	FUniqueNetIdRepl PlatformUniqueId; // 0x60
	FString PlatformSessionId; // 0xb8
	ECrossplayPreference CrossplayPreference; // 0xf8
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FAdminGetTaskInstancesRequest {
	FString StartedAtRangeFrom; // 0x8
	FString StartedAtRangeTo; // 0x18
	ETaskInstanceStatus StatusFilter; // 0x28
	UPlayFabJsonObject* TaskIdentifier; // 0x30
};

struct FMovieSceneObjectPathChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FCachedPoseIndices {
	TArray<int> OrderedSavedPoseNodeIndices; // 0x0
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FSQWeaponReplacementItem_TableRow {
	FSQWeaponReplacementItem Item; // 0x8
};

struct FCurveEdEntry {
	UObject* CurveObject; // 0x0
	FColor CurveColor; // 0x8
	FString CurveName; // 0x10
	int bHideCurve; // 0x20
	int bColorCurve; // 0x24
	int bFloatingPointColorCurve; // 0x28
	int bClamp; // 0x2c
	float ClampLow; // 0x30
	float ClampHigh; // 0x34
};

struct FProfilesSetEntityProfilePolicyResponse {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FPoseLink {
	int LinkID; // 0x0
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x50
};

struct FSQApprovalEntryClientDesc {
	float ExpireIn; // 0x0
	float Timestamp; // 0x4
};

struct FPrimitiveComponentInstanceData {
	FTransform ComponentTransform; // 0xb0
	int VisibilityId; // 0xe0
	UPrimitiveComponent* LODParent; // 0xe8
};

struct FSQRadialDamageEvent {
	bool bDirectHit; // 0x40
	FHitResult HitResult; // 0x44
};

struct FAdminUpdateBansRequest {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FAdminUpdateOpenIdConnectionRequest {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FClientUnlockContainerItemResult {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FServerGetSharedGroupDataResult {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FMovieSceneIntegerChannel {
	TArray<FFrameNumber> Times; // 0x8
	int DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int> Values; // 0x20
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FInt32Interval {
	int Min; // 0x0
	int Max; // 0x4
};

struct FComboButtonStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FSlateBrush MenuBorderBrush; // 0x308
	FMargin MenuBorderPadding; // 0x390
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int CurrentGear; // 0x10
};

struct FMovieSceneVectorKeyStruct {
	FVector Vector; // 0x28
};

struct FInheritedTagContainer {
	FGameplayTagContainer CombinedTags; // 0x0
	FGameplayTagContainer Added; // 0x20
	FGameplayTagContainer Removed; // 0x40
};

struct FRealCurve {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x68
	ERichCurveExtrapolation PostInfinityExtrap; // 0x69
	float DefaultValue; // 0x6c
};

struct FClientGetPlayerStatisticsRequest {
	FString StatisticNames; // 0x8
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x18
};

struct FMultiplayerGetTitleMultiplayerServersQuotasResponse {
	UPlayFabJsonObject* Quotas; // 0x8
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32 SectionIndex; // 0x8
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FGroupsListGroupBlocksRequest {
	UPlayFabJsonObject* Group; // 0x8
};

struct FServerGetUserAccountInfoRequest {
	FString PlayFabId; // 0x8
};

struct FEdGraphSchemaAction_NewNode {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FMovieSceneColorSectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x48
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FGfeSDKHighlightDefinition {
	FString ID; // 0x0
	bool UserDefaultInterest; // 0x10
	EGfeSDKHighlightType HighlightTags; // 0x11
	EGfeSDKHighlightSignificance Significance; // 0x12
	TMap<FString, FString> NameTranslationTable; // 0x18
};

struct FSQSoliderNetPriorityObject {
	float distance; // 0x0
	float NetPriority; // 0x4
	float NetPriorityWhenBehind; // 0x8
};

struct FTimelineEventEntry {
	float Time; // 0x0
	DelegateProperty EventFunc; // 0x4
};

struct FAdminGetMatchmakerGameInfoRequest {
	FString LobbyId; // 0x8
};

struct FAdminAddServerBuildResult {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int MaxGamesPerHost; // 0x58
	int MinFreeGameSlots; // 0x5c
	EGameBuildStatus Status; // 0x60
	FString Timestamp; // 0x68
	FString TitleId; // 0x78
};

struct FClientAddSharedGroupMembersResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetPlayerTagsResult {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FBlueprintInputAxisDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FReplicatedPredictionKeyItem {
	FPredictionKey PredictionKey; // 0x10
};

struct FSQAvailabilityState_Action {
	FSQAvailabilityState Status; // 0x0
	USQAvailability_Action* Availability; // 0x48
};

struct FClientAddGenericIDRequest {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FClientAddOrUpdateContactEmailRequest {
	FString EmailAddress; // 0x8
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

struct FSQVehicleSeatConfig {
	ESQVehicleRoleAbility SeatAbilityRequirement; // 0x0
	bool bAllowDetachSoldier; // 0x1
	float SeatHealth; // 0x4
	float MaxRepairToolLimit; // 0x8
	bool bPassDamageToVehicle; // 0xc
	float CollisionDamageMultipler; // 0x10
	bool bPassPointDamageToVehicle; // 0x14
	bool bSoldierCanTakeDirectRadialDamage; // 0x15
	bool bPassRadialDamageToVehicle; // 0x16
	FName SeatAttachSocket; // 0x18
	FName SoldierAttachSocket; // 0x20
	ASQVehicleSeat* SeatPawn; // 0x28
	int InitialState; // 0x30
	TArray<FSQVehicleSeatState> SeatStates; // 0x38
	bool bShouldAlwaysStayRegistered; // 0x48
	bool bSoldierInSeatCanCapture; // 0x49
	bool bUseRotationComponentForControlRotation; // 0x4a
	float PlayerEnterDuration; // 0x4c
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FMultiplayerGetBuildAliasRequest {
	FString AliasId; // 0x8
};

struct FMediaPlayerTrackOptions {
	int Audio; // 0x0
	int Caption; // 0x4
	int MetaData; // 0x8
	int Script; // 0xc
	int Subtitle; // 0x10
	int Text; // 0x14
	int Video; // 0x18
};

struct FMovieSceneLevelVisibilitySectionTemplate {
	ELevelVisibility Visibility; // 0x20
	TArray<FName> LevelNames; // 0x28
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FServerWriteEventResponse {
	FString EventId; // 0x8
};

struct FServerModifyUserVirtualCurrencyResult {
	int Balance; // 0x8
	int BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
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
	float HistogramLogMin; // 0x28
	float HistogramLogMax; // 0x2c
	float CalibrationConstant; // 0x30
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FSQBasedMovementInfo {
	UPrimitiveComponent* MovementBase; // 0x0
	FName BoneName; // 0x8
	FVector_NetQuantize100 Location; // 0x10
	FRotator Rotation; // 0x1c
	bool bServerHasBaseComponent; // 0x28
	bool bRelativeRotation; // 0x29
	bool bServerHasVelocity; // 0x2a
};

struct FSSGS_RepeatLimit {
	int Low; // 0x0
	int High; // 0x4
	int repeat_limit; // 0x8
};

struct FServerUpdateBansResult {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerModifyItemUsesRequest {
	FString ItemInstanceId; // 0x8
	FString PlayFabId; // 0x18
	int UsesToAdd; // 0x28
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FGameplayAttributeData {
	float BaseValue; // 0x8
	float CurrentValue; // 0xc
};

struct FRandomPlayerSequenceEntry {
	UAnimSequence* Sequence; // 0x0
	float ChanceToPlay; // 0x8
	int MinLoopCount; // 0xc
	int MaxLoopCount; // 0x10
	float MinPlayRate; // 0x14
	float MaxPlayRate; // 0x18
	FAlphaBlend BlendIn; // 0x20
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FServerLinkXboxAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSSGS_HandlerTactile {
	FSSGS_TactileDeviceZone deviceZone; // 0x8
	FString Mode; // 0x28
	USSGS_TactilePatternSpecification* pattern; // 0x38
	USSGS_RateSpecification* Rate; // 0x40
};

struct FAdminAddLocalizedNewsRequest {
	FString Body; // 0x8
	FString Language; // 0x18
	FString NewsId; // 0x28
	FString Title; // 0x38
};

struct FEditorElement {
	int Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FBlueprintInputActionDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FClientLoginWithFacebookRequest {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FMultiplayerMultiplayerEmptyRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
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

struct FSQVehicleSeatState {
	FSQVehicleSeatAnimationState AnimationState; // 0x0
	FSQVehicleSeatTransitionState TransitionState; // 0x58
};

struct FAnimNode_PoseHandler {
	UPoseAsset* PoseAsset; // 0x30
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

struct FSplitterStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FJoinabilitySettings {
	FName SessionName; // 0x0
	bool bPublicSearchable; // 0x8
	bool bAllowInvites; // 0x9
	bool bJoinViaPresence; // 0xa
	bool bJoinViaPresenceFriendsOnly; // 0xb
	int MaxPlayers; // 0xc
	int MaxPartySize; // 0x10
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

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest {
	FString FacebookInstantGamesIds; // 0x8
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FClientGetStoreItemsRequest {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FSQLedColorScheme {
	FColor DefaultColor; // 0x0
	FColor BgColor; // 0x4
	FColor DeadColor; // 0x8
	FColor InjuredColor; // 0xc
	TMap<FName, FColor> ControlsColors; // 0x10
	float UpdateFrequency; // 0x60
	float LowAmmoThreshold; // 0x64
	float LowStaminaThreshold; // 0x68
};

struct FHLODProxyMesh {
	ALODActor* LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FClientRemoveSharedGroupMembersRequest {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FMultiplayerGetServerBackfillTicketResult {
	FString CancellationReasonString; // 0x8
	FString Created; // 0x18
	int GiveUpAfterSeconds; // 0x28
	FString MatchID; // 0x30
	TArray<UPlayFabJsonObject*> Members; // 0x40
	FString QueueName; // 0x50
	UPlayFabJsonObject* ServerDetails; // 0x60
	FString Status; // 0x68
	FString TicketId; // 0x78
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FClientGetPlayerSegmentsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FSQAvailabilityStateTimerContainer {
	FDateTime NextAvailabilityTime; // 0x0
	FDataTableRowHandle UnavailabilityReason; // 0x8
};

struct FSQTeamEventSounds {
	USoundCue* Join; // 0x0
	USoundCue* Win; // 0x28
	USoundCue* Lose; // 0x50
	USoundCue* FriendlyTicketsLow; // 0x78
	USoundCue* EnemyTicketsLow; // 0xa0
};

struct FSQVehicleVersion {
	ESQBiome Biome_2_58A4CEA741BF83041C298699514F3401; // 0x0
	UClass* Vehicle_6_F3193FEA4E8C11847F01B7B328A45158; // 0x8
};

struct FMaterialRemapIndex {
	uint32 ImportVersionKey; // 0x0
	TArray<int> MaterialRemap; // 0x8
};

struct FSQVehicleEffectConfig {
	UParticleSystem* ParticleSystemTemplate; // 0x0
	UParticleSystemComponent* ParticleSystem; // 0x8
	bool bEnableSounds; // 0x10
	FName WheelBoneName; // 0x14
	TWeakObjectPtr<UVehicleWheel> VehicleWheel; // 0x1c
	TWeakObjectPtr<USQPhysicalMaterial> PhysMaterial; // 0x24
};

struct FAdminGetPlayerStatisticVersionsResult {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FClientGetPlayerStatisticVersionsRequest {
	FString StatisticName; // 0x8
};

struct FClientValidateGooglePlayPurchaseRequest {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int PurchasePrice; // 0x28
	FString ReceiptJson; // 0x30
	FString Signature; // 0x40
};

struct FIntegralCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FAutoCompleteNode {
	int IndexChar; // 0x0
	TArray<int> AutoCompleteListIndices; // 0x8
};

struct FClientGetTradeStatusResponse {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse response; // 0x8
};

struct FTrackToSkeletonMap {
	int BoneTreeIndex; // 0x0
};

struct FAdminCreatePlayerStatisticDefinitionRequest {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FClientUnlinkGoogleAccountRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerUpdateCharacterStatisticsResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_BlendBoneByChannel {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FBodyInstance {
	ECollisionChannel ObjectType; // 0x6
	ECollisionEnabled CollisionEnabled; // 0x8
	ESleepFamily SleepFamily; // 0xa
	EDOFMode DOFMode; // 0xb
	char bUseCCD : 1; // 0xc
	char bNotifyRigidBodyCollision : 1; // 0xc
	char bSimulatePhysics : 1; // 0xc
	char bOverrideMass : 1; // 0xc
	char bEnableGravity : 1; // 0xc
	char bAutoWeld : 1; // 0xc
	char bStartAwake : 1; // 0xc
	char bGenerateWakeEvents : 1; // 0xd
	char bUpdateMassWhenScaleChanges : 1; // 0xd
	char bLockTranslation : 1; // 0xd
	char bLockRotation : 1; // 0xd
	char bLockXTranslation : 1; // 0xd
	char bLockYTranslation : 1; // 0xd
	char bLockZTranslation : 1; // 0xd
	char bLockXRotation : 1; // 0xd
	char bLockYRotation : 1; // 0xe
	char bLockZRotation : 1; // 0xe
	char bOverrideMaxAngularVelocity : 1; // 0xe
	char bOverrideMaxDepenetrationVelocity : 1; // 0xe
	char bOverrideWalkableSlopeOnInstance : 1; // 0xe
	char bInterpolateWhenSubStepping : 1; // 0xe
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

struct FServerUpdateBansRequest {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FServerGetCharacterStatisticsRequest {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FSQMessageBoxInfo {
	FSlateFontInfo FontInfo; // 0x0
	TArray<FSQHUDMessage> Messages; // 0x50
	FVector2D MessageBoxLocation; // 0x60
	int MaxNumberOfMessagesToShow; // 0x68
	float MessagesLifetime; // 0x6c
	float MessagesFadeTime; // 0x70
	ESQTextHorizontalAlignment MessageHorizontalAlignment; // 0x74
	ESQTextVerticalAlignment MessageVerticalAlignment; // 0x75
	bool bScrollUp; // 0x76
};

struct FSQVaultTraceHitResults {
	FHitResult bVaultLineTrace1Hit; // 0x0
	FVector VaultOppSideWallHit; // 0x88
	float VaultDistanceFromOppSideWall; // 0x94
	FVector VaultEndingPointLineTraceImpact; // 0x98
	bool bVaultLineTrace2Hit; // 0xa4
	float DistanceToNewLocation; // 0xa8
};

struct FMultiplayerGetContainerRegistryCredentialsResponse {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString username; // 0x28
};

struct FMultiplayerGetMatchRequest {
	bool EscapeObject; // 0x8
	FString MatchID; // 0x10
	FString QueueName; // 0x20
	bool ReturnMemberAttributes; // 0x30
};

struct FServerListUsersCharactersRequest {
	FString PlayFabId; // 0x8
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FClientAddOrUpdateContactEmailResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FVector2MaterialInput {
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FClientLinkAndroidDeviceIDRequest {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAdminUpdatePlayerSharedSecretResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FAdminGetAllSegmentsResult {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FSQInventoryMod {
	char bClearAllInventoryFirst : 1; // 0x0
	FSQInventoryData InventoryData; // 0x8
	ESQInventoryModificationType InventoryModificationType; // 0x20
	int Slot; // 0x24
	int Offset; // 0x28
	ESQTeam Team; // 0x2c
	USQRoleSettings* Role; // 0x30
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FClientPurchaseItemResult {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FClientGetPlayFabIDsFromSteamIDsRequest {
	FString SteamStringIDs; // 0x8
};

struct FServerRedeemMatchmakerTicketResult {
	FString Error; // 0x8
	bool TicketIsValid; // 0x18
	UPlayFabJsonObject* UserInfo; // 0x20
};

struct FGameplayAbilitySpecDef {
	UGameplayAbility* Ability; // 0x0
	FScalableFloat LevelScalableFloat; // 0x8
	int InputID; // 0x28
	EGameplayEffectGrantedAbilityRemovePolicy RemovalPolicy; // 0x2c
	UObject* SourceObject; // 0x30
	FGameplayAbilitySpecHandle AssignedHandle; // 0x88
};

struct FGameplayAbilityLocalAnimMontage {
	UAnimMontage* AnimMontage; // 0x0
	bool PlayBit; // 0x8
	FPredictionKey PredictionKey; // 0x10
	UGameplayAbility* AnimatingAbility; // 0x28
};

struct FGameplayEffectExecutionScopedModifierInfo {
	FGameplayEffectAttributeCaptureDefinition CapturedAttribute; // 0x0
	EGameplayModOp ModifierOp; // 0x28
	FGameplayEffectModifierMagnitude ModifierMagnitude; // 0x30
	FGameplayModEvaluationChannelSettings EvaluationChannelSettings; // 0x1c0
	FGameplayTagRequirements SourceTags; // 0x1c8
	FGameplayTagRequirements TargetTags; // 0x208
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FClientGetLeaderboardForUsersCharactersResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FRawDistributionFloat {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	UDistributionFloat* Distribution; // 0x30
};

struct FAnimUpdateRateParameters {
	EUpdateRateShiftBucket ShiftBucket; // 0x1
	char bInterpolateSkippedFrames : 1; // 0x2
	char bShouldUseLodMap : 1; // 0x2
	char bShouldUseMinLod : 1; // 0x2
	char bSkipUpdate : 1; // 0x2
	char bSkipEvaluation : 1; // 0x2
	int UpdateRate; // 0x4
	int EvaluationRate; // 0x8
	float TickedPoseOffestTime; // 0xc
	float AdditionalTime; // 0x10
	int BaseNonRenderedUpdateRate; // 0x18
	int MaxEvalRateForInterpolation; // 0x1c
	TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20
	TMap<int, int> LODToFrameSkipMap; // 0x30
	int SkippedUpdateFrames; // 0x80
	int SkippedEvalFrames; // 0x84
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FSQShockwaveQualitySetting {
	bool bEnabled; // 0x0
	int VerticalSteps; // 0x4
	int HorizontalSteps; // 0x8
	float CullingDistance; // 0xc
};

struct FClientMatchmakeResult {
	FString Expires; // 0x8
	FString LobbyId; // 0x18
	int PollWaitTimeMS; // 0x28
	FString ServerIPV4Address; // 0x30
	FString ServerIPV6Address; // 0x40
	int ServerPort; // 0x50
	FString ServerPublicDNSName; // 0x58
	EMatchmakeStatus Status; // 0x68
	FString Ticket; // 0x70
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FServerGetUserBansRequest {
	FString PlayFabId; // 0x8
};

struct FServerUnlinkXboxAccountRequest {
	FString PlayFabId; // 0x8
	FString XboxToken; // 0x18
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FClientModifyUserVirtualCurrencyResult {
	int Balance; // 0x8
	int BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
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
	int NumSolverIterationsPreUpdate; // 0x1bc
	int NumSolverIterationsPostUpdate; // 0x1c0
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

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FTextureLODGroup {
	TextureGroup Group; // 0x0
	int LODBias; // 0xc
	int LODBias_Smaller; // 0x10
	int LODBias_Smallest; // 0x14
	int NumStreamedMips; // 0x1c
	TextureMipGenSettings MipGenSettings; // 0x20
	int MinLODSize; // 0x24
	int MaxLODSize; // 0x28
	int MaxLODSize_Smaller; // 0x2c
	int MaxLODSize_Smallest; // 0x30
	int OptionalLODBias; // 0x34
	int OptionalMaxLODSize; // 0x38
	FName MinMagFilter; // 0x40
	FName MipFilter; // 0x48
	ETextureMipLoadOptions MipLoadOptions; // 0x50
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FSQGameFlags {
	bool UseFogOfWar; // 0x0
	bool ForceAllVehicleAvailability; // 0x1
	bool ForceAllDeployableAvailability; // 0x2
	bool ForceAllRoleAvailability; // 0x3
	bool ForceAllActionAvailability; // 0x4
	bool NoTeamChangeTimer; // 0x5
	bool NoRespawnTimer; // 0x6
	bool VehicleClaimingDisabled; // 0x7
	bool VehicleTeamRequirementDisabled; // 0x8
	bool VehicleKitRequirementDisabled; // 0x9
	bool ForceNoCommanderCooldowns; // 0xa
	bool CommanderDisabled; // 0xb
	bool ForceAllowCommanderActions; // 0xc
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FTTEventTrack {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FDataInitiateFileUploadsResponse {
	UPlayFabJsonObject* Entity; // 0x8
	int ProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> UploadDetails; // 0x18
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
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

struct FMultiplayerGetBuildResponse {
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
	int MultiplayerServerCountPerVm; // 0x98
	TArray<UPlayFabJsonObject*> Ports; // 0xa0
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0xb0
	FString StartMultiplayerServerCommand; // 0xc0
	EAzureVmSize VmSize; // 0xd0
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
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

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
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

struct FVehicleNWEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FClientSetPlayerSecretRequest {
	FString EncryptedRequest; // 0x8
	FString PlayerSecret; // 0x18
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FServerUpdateUserDataResult {
	int DataVersion; // 0x8
};

struct FClientUnlinkFacebookInstantGamesIdRequest {
	FString FacebookInstantGamesId; // 0x8
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FServerRegisterGameRequest {
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

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FClientUnlinkTwitchAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int NumIndirectLightingBounces; // 0x4
	int NumSkyLightingBounces; // 0x8
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

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FAdminGetStoreItemsResult {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FClientLinkFacebookInstantGamesIdRequest {
	FString FacebookInstantGamesSignature; // 0x8
	bool ForceLink; // 0x18
};

struct FClientSetPlayerSecretResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FMultiplayerListAssetSummariesResponse {
	TArray<UPlayFabJsonObject*> AssetSummaries; // 0x8
	int PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FClientGetPhotonAuthenticationTokenResult {
	FString PhotonCustomAuthenticationToken; // 0x8
};

struct FClientLoginWithNintendoSwitchDeviceIdRequest {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString NintendoSwitchDeviceId; // 0x28
	FString PlayerSecret; // 0x38
};

struct FClientUnlockContainerInstanceRequest {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
};

struct FSQVoteSessionInfo {
	FDateTime StartTime; // 0x0
	FDateTime EndTime; // 0x8
	TArray<FSQVoteSessionChoiceInfo> Votes; // 0x10
	int RecordedVotes; // 0x20
	int ExpectedVoteCount; // 0x24
};

struct FCommanderVoteNominee {
	ASQPlayerState* NomineeState; // 0x10
	int VoteCount; // 0x18
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x28
	TArray<UObject*> ObjReferences; // 0x90
};

struct FSQVehicleEntry {
	FText DisplayName_2_AE20EB5F4F79C0010BCDCE847B39E625; // 0x0
	FText Details_5_05E7EAEF4F1306A917C5A4837F8F40D0; // 0x18
	FText Specifics_7_184DD04A4D44CF9D518A218A50B31AA6; // 0x30
	UTexture2D* Icon_13_CEC409E14C155F9F18EC1C961848686E; // 0x48
};

struct FDataDeleteFilesResponse {
	UPlayFabJsonObject* Entity; // 0x8
	int ProfileVersion; // 0x10
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FClientAddSharedGroupMembersRequest {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FServerGetUserInventoryRequest {
	FString PlayFabId; // 0x8
};

struct FClientWriteTitleEventRequest {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString Timestamp; // 0x20
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FA2CSPose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FClientGetTradeStatusRequest {
	FString OfferingPlayerId; // 0x8
	FString TradeId; // 0x18
};

struct FMatchmakerPlayerLeftResponse {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerGetBuildRequest {
	FString BuildId; // 0x8
};

struct FServerLoginWithServerCustomIdRequest {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayerSecret; // 0x18
	FString ServerCustomId; // 0x28
};

struct FAnimNode_SplineIK {
	FBoneReference StartBone; // 0xc8
	FBoneReference EndBone; // 0xd8
	ESplineBoneAxis BoneAxis; // 0xe8
	bool bAutoCalculateSpline; // 0xe9
	int PointCount; // 0xec
	TArray<FTransform> ControlPoints; // 0xf0
	float Roll; // 0x100
	float TwistStart; // 0x104
	float TwistEnd; // 0x108
	FAlphaBlend TwistBlend; // 0x110
	float Stretch; // 0x140
	float Offset; // 0x144
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FMultiplayerListVirtualMachineSummariesResponse {
	int PageSize; // 0x8
	FString SkipToken; // 0x10
	TArray<UPlayFabJsonObject*> VirtualMachines; // 0x20
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FMovieSceneVectorPropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48
	int NumChannelsUsed; // 0x2c8
	EMovieSceneBlendType BlendType; // 0x2cc
};

struct FPolygonGroupID {
	int IDValue; // 0x0
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FVertexID {
	int IDValue; // 0x0
};

struct FSQFactionEntry {
	FText ShortName_2_7ED5FE3E4551011D7164EEA7093086F5; // 0x0
	FText DisplayName_70_AC79DBBC48DDFEFFE67622BD1296F7CD; // 0x18
	FText Description_6_74A276AC436525A8CBD2F1BC68D0AD5D; // 0x30
	FText CommanderRequirements_27_2A0F353E4122BDC0F0E343AFCAAA77FA; // 0x48
	TMap<FName, FSQFactionGameModeSounds> GameModeSounds_23_B039D0D5462417F7CF2B2EA0AA92DA63; // 0x60
	FSQCommanderSounds CommanderSounds_33_5377ADFF4FAB5D89C9A417A7AD69C954; // 0xb0
	FSQTeamEventSounds TeamEventSounds_30_BCF7ABB640C4359D2B3B608C8CC74297; // 0x1f0
	FSQMedicCalls MedicCall_36_7C718FA54167CE5988A105B8A059D74F; // 0x2b8
	TArray<FSQObjectiveSounds> ObjectiveSounds_41_C50FBF8A43A12ABAF037F2AC851A7280; // 0x330
	bool BuddyRallyEnabled_54_EDE0B5A94A0AFAB810A352AE643E0B4D; // 0x340
	TMap<ESQBiome, UStaticMesh*> RallyPointMesh_77_FC5BD4EB4AC23BD471ED80AD160978F7; // 0x348
	UTexture2D* UI_FullSizeFlag_57_2647E604403291F09A8FC6B0BC1E46DC; // 0x398
	UTexture2D* UI_MapSizeFlag_59_19637C35467F3A74B6AF24A261E34647; // 0x3c0
	UTexture2D* UI_Badge_65_BB90FCDC44BE71A8471D339E947345D5; // 0x3e8
	TMap<ESQBiome, UTexture2D*> UI_BannerOverlay_89_4A9ACF774E9785C64EA425824BA31D4B; // 0x410
	TArray<FSQRoleGroupingStrategy> UI_RoleGroupingStrategies_78_3CF52014461A5C2E7DD6C1BAF1CA6E62; // 0x460
	TArray<FSQDeployableGroupingStrategy> UI_DeployableGroupingStategies_83_1B3C98DD412CE568A2C34FBEC0C7D38E; // 0x470
	TArray<FSQActionGroupingStrategy> UI_ActionGroupingStategies_86_DC2CFAA9442F95DB9866569AA865255E; // 0x480
};

struct FGroupsInviteToGroupResponse {
	FString Expires; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	UPlayFabJsonObject* InvitedByEntity; // 0x20
	UPlayFabJsonObject* InvitedEntity; // 0x28
	FString RoleId; // 0x30
};

struct FAdminGetContentListRequest {
	FString Prefix; // 0x8
};

struct FPredictionKey {
	int16 Current; // 0x0
	int16 Base; // 0x2
	UPackageMap* PredictiveConnection; // 0x8
	bool bIsStale; // 0x10
	bool bIsServerInitiated; // 0x11
};

struct FSubmixEffectDynamicsProcessorSettings {
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	float AttackTimeMsec; // 0x8
	float ReleaseTimeMsec; // 0xc
	float ThresholdDb; // 0x10
	float Ratio; // 0x14
	float KneeBandwidthDb; // 0x18
	float InputGainDb; // 0x1c
	float OutputGainDb; // 0x20
	char bChannelLinked : 1; // 0x24
	char bAnalogMode : 1; // 0x24
};

struct FTileDatabase {
	UTexture* TileTexture; // 0x0
	FName TileName; // 0x8
	int frame; // 0x10
	EChannelOutput ChannelTexture; // 0x14
	FRectSizePadding SizeAndPadding; // 0x16
	bool SDFNode; // 0x1e
	bool MSDFNode; // 0x1f
	FLinearColor Channel_vec; // 0x20
	FLinearColor Layer_vec; // 0x30
	FLinearColor SizePadding_vec; // 0x40
};

struct FServerGrantItemsToUserResult {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FGameplayEffectModifierMagnitude {
	EGameplayEffectMagnitudeCalculation MagnitudeCalculationType; // 0x0
	FScalableFloat ScalableFloatMagnitude; // 0x8
	FAttributeBasedFloat AttributeBasedMagnitude; // 0x28
	FCustomCalculationBasedFloat CustomMagnitude; // 0x108
	FSetByCallerFloat SetByCallerMagnitude; // 0x180
};

struct FSQVehicleOccupantInfo {
	char bIsOccupied : 1; // 0x28
	ASQPlayerState* PlayerState; // 0x30
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FMeshSectionInfoMap {
	TMap<uint32, FMeshSectionInfo> Map; // 0x0
};

struct FMovieSceneEvent {
	FName FunctionName; // 0x0
};

struct FServerEmptyResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetUserAccountInfoResult {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FClientConfirmPurchaseResult {
	TArray<UPlayFabJsonObject*> Items; // 0x8
	FString OrderId; // 0x18
	FString PurchaseDate; // 0x28
};

struct FMovieSceneEventSectionTemplate {
	FMovieSceneEventSectionData EventData; // 0x38
};

struct FSSGS_Frequency {
	int Low; // 0x0
	int High; // 0x4
	int frequency; // 0x8
};

struct FGroupsDeleteGroupRequest {
	UPlayFabJsonObject* Group; // 0x8
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FDataGetObjectsResponse {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Objects; // 0x10
	int ProfileVersion; // 0x18
};

struct FServerGetPlayFabIDsFromSteamIDsResult {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FStaticMeshComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xf0
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8
	TArray<FGuid> CachedStaticLighting; // 0x108
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x118
};

struct FClientOpenTradeRequest {
	FString AllowedPlayerIds; // 0x8
	FString OfferedInventoryInstanceIds; // 0x18
	FString RequestedCatalogItemIds; // 0x28
};

struct FClientValidateIOSReceiptRequest {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int PurchasePrice; // 0x28
	FString ReceiptData; // 0x30
};

struct FSQUsableData {
	FText DisplayName; // 0x0
	TArray<FSQUsableWidgetData> InteractionData; // 0x18
	USQInteractableWidgetList* InteractWidgetClass; // 0x28
	FVector DrawLocationOffset; // 0x30
	ESQInteractVisibility InteractVisiblity; // 0x3c
};

struct FClientLinkIOSDeviceIDResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FInlineTextImageStyle {
	FSlateBrush Image; // 0x8
	int16 Baseline; // 0x90
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FAdminDeleteTitleResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_RotationOffsetBlendSpace {
	FPoseLink BasePose; // 0xe0
	int LODThreshold; // 0xf0
	float Alpha; // 0xf4
	FInputScaleBias AlphaScaleBias; // 0xf8
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x100
	FName AlphaCurveName; // 0x148
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x150
	EAnimAlphaInputType AlphaInputType; // 0x184
	bool bAlphaBoolEnabled; // 0x185
};

struct FEnvTraceData {
	int VersionNum; // 0x0
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

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	float AnimStartOffset; // 0x10
	float AnimEndOffset; // 0x14
	float AnimPlayRate; // 0x18
	char bLooping : 1; // 0x1c
	char bReverse : 1; // 0x1c
};

struct FDeployableItem {
	ASQDeployable* Deployable; // 0x10
};

struct FEngineServiceAuthDeny {
	FString username; // 0x0
	FString UserToDeny; // 0x10
};

struct FPrecomputedSkyLightInstanceData {
	FGuid LightGuid; // 0xa8
	float AverageBrightness; // 0xb8
};

struct FSQMenuStyle {
	FSlateBrush HeaderBackgroundBrush; // 0x8
	FSlateBrush LeftBackgroundBrush; // 0x90
	FSlateBrush RightBackgroundBrush; // 0x118
	FSlateSound MenuEnterSound; // 0x1a0
	FSlateSound MenuBackSound; // 0x1b8
	FSlateSound OptionChangeSound; // 0x1d0
	FSlateSound MenuItemChangeSound; // 0x1e8
};

struct FServerGetLeaderboardForUsersCharactersRequest {
	int MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticName; // 0x20
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FGameplayTargetDataFilter {
	AActor* SelfActor; // 0x8
	ETargetDataFilterSelf SelfFilter; // 0x10
	AActor* RequiredActorClass; // 0x18
	bool bReverseFilter; // 0x20
};

struct FGameplayTagResponseTableEntry {
	FGameplayTagReponsePair Positive; // 0x0
	FGameplayTagReponsePair Negative; // 0x28
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FMultiplayerCreateRemoteUserResponse {
	FString ExpirationTime; // 0x8
	FString Password; // 0x18
	FString username; // 0x28
};

struct FGeomSelection {
	int Type; // 0x0
	int Index; // 0x4
	int SelectionIndex; // 0x8
};

struct FSSGS_EventBinding {
	FString Game; // 0x8
	FString EventName; // 0x18
	int MinValue; // 0x28
	int MaxValue; // 0x2c
	ESSGS_EventIconId iconId; // 0x30
	bool valueOptional; // 0x31
	USSGS_HandlerCollection* handlers; // 0x38
};

struct FMovieSceneEventSectionData {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FClientDeviceInfoRequest {
	UPlayFabJsonObject* Info; // 0x8
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32 LevelChangeTimeInMS; // 0x10
};

struct FMeshProxySettings {
	int ScreenSize; // 0x0
	float VoxelSize; // 0x4
	FMaterialProxySettings MaterialSettings; // 0x8
	float MergeDistance; // 0x7c
	FColor UnresolvedGeometryColor; // 0x80
	float MaxRayCastDist; // 0x84
	float HardAngleThreshold; // 0x88
	int LightMapResolution; // 0x8c
	EProxyNormalComputationMethod NormalCalculationMethod; // 0x90
	ELandscapeCullingPrecision LandscapeCullingPrecision; // 0x91
	char bCalculateCorrectLODModel : 1; // 0x92
	char bOverrideVoxelSize : 1; // 0x92
	char bOverrideTransferDistance : 1; // 0x92
	char bUseHardAngleThreshold : 1; // 0x92
	char bComputeLightMapResolution : 1; // 0x92
	char bRecalculateNormals : 1; // 0x92
	char bUseLandscapeCulling : 1; // 0x92
	char bAllowAdjacency : 1; // 0x92
	char bAllowDistanceField : 1; // 0x93
	char bReuseMeshLightmapUVs : 1; // 0x93
	char bCreateCollision : 1; // 0x93
	char bAllowVertexColors : 1; // 0x93
	char bGenerateLightmapUVs : 1; // 0x93
};

struct FClientValidateAmazonReceiptResult {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FClientUpdateCharacterStatisticsRequest {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
};

struct FServerRemovePlayerTagRequest {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FSQVoteEntry {
	ESQVoteType Type_2_B0AE95D94AFBB802A13123B906609298; // 0x0
	FText ScreenTitle_8_09A5D4244C65422554422AB08A4B2D71; // 0x8
	FText SubTitle_9_B7E21CD747A33B388BE197A87D7BCFB9; // 0x20
	FText Description_11_89A4B2DB42C332968FC4DD92741E5ED5; // 0x38
	int AllocatedVotes_14_1960EAFC4BAC49B294CE4497247D6F17; // 0x50
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FServerSetFriendTagsRequest {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
	FString Tags; // 0x28
};

struct FMultiplayerGetTitleMultiplayerServersQuotasRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FTimerHandle {
	uint64 Handle; // 0x0
};

struct FSQLogisticsSettings {
	float AmmoToScore; // 0x0
	float ConstructionToScore; // 0x4
	float PassengerPercent; // 0x8
};

struct FAdminGetTaskInstancesResult {
	TArray<UPlayFabJsonObject*> Summaries; // 0x8
};

struct FAnimNode_SequencePlayer {
	UAnimSequenceBase* Sequence; // 0x30
	float PlayRateBasis; // 0x38
	float PlayRate; // 0x3c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
	float StartPosition; // 0x70
	bool bLoopAnimation; // 0x74
};

struct FServerModifyCharacterVirtualCurrencyResult {
	int Balance; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FRestrictedGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FServerGetPlayerStatisticVersionsRequest {
	FString StatisticName; // 0x8
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

struct FDataDeleteFilesRequest {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int ProfileVersion; // 0x20
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint32 EvaluationIndex; // 0xc
};

struct FMultiplayerCreateBuildWithCustomContainerRequest {
	FString BuildName; // 0x8
	EContainerFlavor ContainerFlavor; // 0x18
	UPlayFabJsonObject* ContainerImageReference; // 0x20
	FString ContainerRunCommand; // 0x28
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x38
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x48
	UPlayFabJsonObject* MetaData; // 0x58
	int MultiplayerServerCountPerVm; // 0x60
	TArray<UPlayFabJsonObject*> Ports; // 0x68
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x78
	EAzureVmSize VmSize; // 0x88
};

struct FClientUnlinkKongregateAccountResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FScreenMessageString {
	uint64 Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FScalarMaterialInput {
	int OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16 Number; // 0x2
};

struct FMultiplayerBuildAliasDetailsResponse {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	int PageSize; // 0x38
	FString SkipToken; // 0x40
};

struct FServerAddPlayerTagResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FAdminListBuildsRequest {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminResolvePurchaseDisputeRequest {
	FString OrderId; // 0x8
	EResolutionOutcome Outcome; // 0x18
	FString PlayFabId; // 0x20
	FString Reason; // 0x30
};

struct FMovieSceneParticleSectionTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FClientRemoveContactEmailResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FSQAvailabilityState {
	int Available; // 0x0
	int Used; // 0x4
	int Queued; // 0x8
	int ModifierPct; // 0xc
	bool ForceAvailable; // 0x10
	FDateTime NextAvailabilityTime; // 0x18
	TArray<FSQAvailabilityStateTimerContainer> NextAvailabilityTimeQueue; // 0x20
	FDataTableRowHandle UnavailabilityReason; // 0x30
	char StatusUpdateID; // 0x40
};

struct FClientGetLeaderboardAroundPlayerResult {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int Version; // 0x28
};

struct FEngineServiceTerminate {
	FString username; // 0x0
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FAnimNode_TransitionResult {
	bool bCanEnterTransition; // 0x10
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FAdminUpdateRandomResultTablesResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSSGS_FrameDataMultiLine {
	TArray<FSSGS_LineData> lines; // 0x8
	FSSGS_FrameModifiers frameModifiers; // 0x18
	ESSGS_EventIconId icon_id; // 0x30
};

struct FAnimNode_BlendListByBool {
	bool bActiveValue; // 0x98
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

struct FClientCreateSharedGroupRequest {
	FString SharedGroupId; // 0x8
};

struct FTTLinearColorTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FServerSetGameServerInstanceStateResult {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FProfilesGetEntityProfileResponse {
	UPlayFabJsonObject* Profile; // 0x8
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FVehicleNWGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FChaosCollisionEventRequestSettings {
	int MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FGroupsAddMembersRequest {
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

