// Created by BlueFire1337
// Updated 2022-01-26
// Generated 2022-02-02

#pragma once

struct FServerAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FEdGraphSchemaAction {
	FText MenuDescription; // 0x8
	FString TooltipDescription; // 0x20
	FText Category; // 0x30
	FText Keywords; // 0x48
	int32_t Grouping; // 0x60
	int32_t SectionID; // 0x64
	TArray<FString> MenuDescriptionArray; // 0x68
	TArray<FString> FullSearchTitlesArray; // 0x78
	TArray<FString> FullSearchKeywordsArray; // 0x88
	TArray<FString> FullSearchCategoryArray; // 0x98
	FString searchText; // 0xa8
};

struct FMediaPlayerOverlay {
	bool HasPosition; // 0x0
	FVector2D Position; // 0x4
	FText Text; // 0x10
};

struct FClientValidateWindowsReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FProfilesSetProfileLanguageResponse : FPlayFabResultCommon {
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
};

struct FExposureSettings {
	int32_t LogOffset; // 0x0
	bool bFixed; // 0x4
};

struct FAuthenticationCreateAPIKeyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FGroupedSkeletalOptimizationSettings {
	bool bAutoComputeLODDistance; // 0x0
	ESkeletalMeshLODType LevelOfDetailType; // 0x1
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x8
	FMeshProxySettings ProxySettings; // 0x170
	bool bForceLODRebuild; // 0x278
};

struct FAdminGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FClientGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
};

struct FComboLookupData {
	TMap<FName, FComboAttackData> PossibleNextCombos; // 0x0
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x80
	FVector InitialTargetLocation; // 0x8c
	FVector TargetLocation; // 0x98
	bool bRestrictSpeedToExpected; // 0xa4
	UCurveVector* PathOffsetCurve; // 0xa8
	UCurveFloat* TimeMappingCurve; // 0xb0
};

struct FServerGetLeaderboardAroundUserRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	int32_t Version; // 0x38
};

struct FClientOpenTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
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

struct FServerRentalOffers {
	TMap<FString, FServerRentalOffer> Offers; // 0x0
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FNiagaraScriptConstantData {
	FNiagaraConstants ExternalConstantsNew; // 0x0
	FNiagaraConstants InternalConstantsNew; // 0x30
};

struct FClientLinkGoogleAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString ServerAuthCode; // 0x10
};

struct FVectorDistribution {
	FDistributionLookupTable table; // 0x0
};

struct FPurgeEventCost : FTableRowBase {
	EPurgeMeterEvent EventType; // 0x8
	float cost; // 0xc
};

struct FItemEquipSlotMap {
	TMap<int32_t, int32_t> EquipmentInventoryToLootBagSlotMap; // 0x0
	TMap<int32_t, int32_t> ShortcutInventoryToLootBagSlotMap; // 0x50
	TMap<int32_t, int32_t> BackpackInventoryToLootBagSlotMap; // 0xa0
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
	TArray<UNiagaraEventReceiverEmitterAction*> EmitterActions; // 0x18
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid InstanceID; // 0x28
	FString InstanceName; // 0x38
	bool IsConsoleBuild; // 0x48
	FString PlatformName; // 0x50
	FGuid sessionId; // 0x60
	FString SessionName; // 0x70
	FString SessionOwner; // 0x80
	bool Standalone; // 0x90
};

struct FClientLoginWithGoogleAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString ServerAuthCode; // 0x38
};

struct FClientUnlinkTwitchAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FAuthenticationActivateAPIKeyRequest : FPlayFabRequestCommon {
	FString APIKeyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FFoodBonusData {
	int32_t tier; // 0x0
	float Strength; // 0x4
	float Agility; // 0x8
	float Vitality; // 0xc
	float Accuracy; // 0x10
	float Survival; // 0x14
	float Encumbrance; // 0x18
};

struct FClientGetPlayFabIDsFromKongregateIDsRequest : FPlayFabRequestCommon {
	FString KongregateIDs; // 0x8
};

struct FEconomyGetBundleByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FServerGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerSendEmailFromTemplateRequest : FPlayFabRequestCommon {
	FString EmailTemplateId; // 0x8
	FString PlayFabId; // 0x18
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FClientStartGameRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString CharacterId; // 0x18
	FString CustomCommandLineData; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
	FString StatisticName; // 0x50
};

struct FClientGetPlayerTagsRequest : FPlayFabRequestCommon {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	TArray<bool> bEnableShadowCasting; // 0x18
	TArray<FTriangleSortSettings> TriangleSortSettings; // 0x28
	char bHasBeenSimplified : 1; // 0x38
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x40
	FSimplygonRemeshingSettings RemeshingSettings; // 0x1a8
	FGroupedSkeletalOptimizationSettings OptimizationSettings; // 0x250
	TArray<FName> RemovedBones; // 0x4d0
	FString SourceImportFilename; // 0x4e0
};

struct FMultiplayerRolloverContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString password; // 0x18
	FString userName; // 0x28
};

struct FClientAddSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEconomyCreateOrUpdateReviewResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerGetQueueStatisticsRequest : FPlayFabRequestCommon {
	FString QueueName; // 0x8
};

struct FAnimPhysConstraintSetup {
	AnimPhysLinearConstraintType LinearXLimitType; // 0x0
	AnimPhysLinearConstraintType LinearYLimitType; // 0x1
	AnimPhysLinearConstraintType LinearZLimitType; // 0x2
	FVector LinearAxesMin; // 0x4
	FVector LinearAxesMax; // 0x10
	AnimPhysAngularConstraintType AngularConstraintType; // 0x1c
	AnimPhysTwistAxis TwistAxis; // 0x1d
	float ConeAngle; // 0x20
	float AngularXAngle; // 0x24
	float AngularYAngle; // 0x28
	float AngularZAngle; // 0x2c
	FVector AngularLimitsMin; // 0x30
	FVector AngularLimitsMax; // 0x3c
	AnimPhysTwistAxis AngularTargetAxis; // 0x48
	FVector AngularTarget; // 0x4c
	bool bLinearFullyLocked; // 0x58
};

struct FFrameTransformData {
	int32_t FrameNumber; // 0x0
	float GameTime; // 0x4
	TArray<FTransformData> transforms; // 0x8
	float A; // 0x18
	float B; // 0x1c
	float C; // 0x20
};

struct FLeaderboardsGetStatisticDefinitionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x30
	int32_t MaxTransitionsPerFrame; // 0x34
	bool bSkipFirstUpdateTransition; // 0x38
	int32_t CurrentState; // 0x48
	float ElapsedTime; // 0x4c
};

struct FMovieSceneSequenceCachedSignature {
	TWeakObjectPtr<UMovieSceneSequence> Sequence; // 0x0
	FGuid CachedSignature; // 0x8
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FAdminUpdateRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FClientUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FServerGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FLeaderboardsDeleteStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FEconomyConsumeInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FClientGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x10
	EAttenuationShape AttenuationShape; // 0x88
	float dBAttenuationAtMax; // 0x8c
	FVector AttenuationShapeExtents; // 0x90
	float ConeOffset; // 0x9c
	float FalloffDistance; // 0xa0
};

struct FServerAwardSteamAchievementRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Achievements; // 0x8
};

struct FCircleElement2D {
	FVector2D Center; // 0x0
	float Radius; // 0x8
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FClientLoginWithKongregateRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString KongregateId; // 0x38
	FString PlayerSecret; // 0x48
};

struct FClientRemoveFriendResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEconomyCraftRecipeResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> CraftedItems; // 0x8
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Ingredients; // 0x28
	TArray<UPlayFabJsonObject*> InventoryItems; // 0x38
	bool InventoryTooLarge; // 0x48
};

struct FFlsPeerRegistrationRequest : FFlsSecurityCredentials {
	FString GameVersion; // 0x20
	FString Platform; // 0x30
};

struct FMultiplayerListContainerImagesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FClientAddOrUpdateContactEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FClientLinkFacebookInstantGamesIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FEconomyPurchaseItemByFriendlyIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	TArray<UPlayFabJsonObject*> Currencies; // 0x10
	UPlayFabJsonObject* Entity; // 0x20
	FString IdempotencyId; // 0x28
	FString ItemFriendlyId; // 0x38
	UPlayFabJsonObject* Properties; // 0x48
	int32_t quantity; // 0x50
	bool ReturnInventory; // 0x54
	UPlayFabJsonObject* Store; // 0x58
	FString Uaid; // 0x60
};

struct FLeaderboardsUpdateStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityLeaderboardMetadata; // 0x10
	int32_t ExpectedProfileVersion; // 0x20
	bool ForceUpdate; // 0x24
	TArray<UPlayFabJsonObject*> Statistics; // 0x28
};

struct FCharacterMaterialParams {
	FCharacterResolvedTextures Textures; // 0x0
	FCharacterResolvedTints Tints; // 0x48
	FCharacterScalarParameters ScalarParams; // 0xc8
};

struct FRoamingPath {
	TArray<FVector> Points; // 0x0
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
	FString TimeStamp; // 0x78
};

struct FServerRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneAudioSectionTemplateData AudioData; // 0x18
};

struct FGraniteBakerLayer {
	EGraniteBakerLayerType DataType; // 0x0
	FString Name; // 0x8
};

struct FAdaptiveSystemCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
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

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x98
	FSlateBrush BackgroundImageFocused; // 0x128
	FSlateBrush BackgroundImageReadOnly; // 0x1b8
	FMargin Padding; // 0x248
	FSlateFontInfo Font; // 0x258
	FSlateColor ForegroundColor; // 0x2c0
	FSlateColor BackgroundColor; // 0x2e8
	FSlateColor ReadOnlyForegroundColor; // 0x310
	FMargin HScrollBarPadding; // 0x338
	FMargin VScrollBarPadding; // 0x348
	FScrollBarStyle ScrollBarStyle; // 0x358
};

struct FCharacterScalarParameters {
	float Height; // 0x0
	float Bust; // 0x4
	float Dick; // 0x8
	float EyeAngle; // 0xc
	float EyeSize; // 0x10
	float EyeDepth; // 0x14
	float NoseWidth; // 0x18
	float NoseSize; // 0x1c
	float NoseCurve; // 0x20
	float JawWidth; // 0x24
	float CheekHeight; // 0x28
	float CheekWidth; // 0x2c
	float ChinWidth; // 0x30
	float EarAngle; // 0x34
	float EarSize; // 0x38
	float LipSize; // 0x3c
	float Pitch; // 0x40
	float PhysiqueMax; // 0x44
	float PhysiqueMin; // 0x48
};

struct FClientUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FRepMovement {
	FVector LinearVelocity; // 0x0
	FVector AngularVelocity; // 0xc
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
	char bSimulatedPhysicsSleepOrNonPhysicsAngularVelocity : 1; // 0x30
	char bRepPhysics : 1; // 0x30
	EVectorQuantization LocationQuantizationLevel; // 0x31
	EVectorQuantization VelocityQuantizationLevel; // 0x32
	ERotatorQuantization RotationQuantizationLevel; // 0x33
};

struct FCharacterMeshLayout {
	int32_t Helmet; // 0x0
	int32_t Hair; // 0x4
	int32_t FacialHair; // 0x8
	int32_t Head; // 0xc
	int32_t Forearms; // 0x10
	int32_t Hands; // 0x14
	int32_t UpperBody; // 0x18
	int32_t LowerBody; // 0x1c
	int32_t Legs; // 0x20
	int32_t Feet; // 0x24
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x58
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

struct FTransformData {
	FName ScopeName; // 0x0
	FTransform Value; // 0x10
	ETransformMask Mask; // 0x40
};

struct FLootTableRow : FTableRowBase {
	bool UseTable; // 0x8
	FDataTableRowHandle table; // 0x10
	FText ItemName; // 0x20
	int32_t itemID; // 0x38
	int32_t Min; // 0x3c
	int32_t Max; // 0x40
	float PercentChance; // 0x44
	float MinDurability; // 0x48
	float MaxDurability; // 0x4c
};

struct FServerModMismatchInfo {
	FString Name; // 0x0
	int32_t VersionMajor; // 0x10
	int32_t VersionMinor; // 0x14
	int32_t VersionBuild; // 0x18
	FString SteamPublishedFileId; // 0x20
	FString MD5; // 0x30
	EServerModState State; // 0x40
	int32_t DownloadProgress; // 0x44
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x2b0
	FButtonStyle RestoreButtonStyle; // 0x558
	FButtonStyle CloseButtonStyle; // 0x800
	FTextBlockStyle TitleTextStyle; // 0xaa8
	FSlateBrush ActiveTitleBrush; // 0xcb0
	FSlateBrush InactiveTitleBrush; // 0xd40
	FSlateBrush FlashTitleBrush; // 0xdd0
	FSlateBrush OutlineBrush; // 0xe60
	FSlateColor OutlineColor; // 0xef0
	FSlateBrush BorderBrush; // 0xf18
	FSlateBrush BackgroundBrush; // 0xfa8
	FSlateBrush ChildBackgroundBrush; // 0x1038
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FLevelSequencePlayerSnapshot {
	FText MasterName; // 0x0
	float MasterTime; // 0x18
	FText CurrentShotName; // 0x20
	float CurrentShotLocalTime; // 0x38
	UCameraComponent* CameraComponent; // 0x40
	FLevelSequenceSnapshotSettings Settings; // 0x48
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	int32_t Index; // 0x8
	FRichCurve RedCurve; // 0x10
	FRichCurve GreenCurve; // 0x80
	FRichCurve BlueCurve; // 0xf0
	FRichCurve AlphaCurve; // 0x160
};

struct FClientEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x48
};

struct FServerGetServerCustomIDsFromPlayFabIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAdminAddNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	FString TimeStamp; // 0x18
	FString Title; // 0x28
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FVector_NetQuantize10 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAdminRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x30
	FName SourceBinding; // 0x48
	float Alpha; // 0x50
	TScriptInterface<Class> CurveSource; // 0x58
};

struct FClientConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FMeshOption : FTableRowBase {
	USkeletalMesh* Mesh; // 0x8
	USkeletalMesh* HighQualityMesh; // 0x28
	UTexture2D* Icon; // 0x48
	bool ShowInCharacterCreation; // 0x50
	TArray<int32_t> RequiredFeats; // 0x58
};

struct FClientGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FMultiplayerListQosServersForTitleResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FServerRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	FString PlayFabId; // 0x38
};

struct FGroupsCreateGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString GroupName; // 0x10
};

struct FServerRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientStartPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	FString OrderId; // 0x18
	TArray<UPlayFabJsonObject*> PaymentOptions; // 0x28
	UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38
};

struct FExperimentationCreateExperimentResult : FPlayFabResultCommon {
	FString ExperimentId; // 0x8
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FEconomyCreateSubscriptionRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* Subscription; // 0x20
};

struct FFlsUpdateNativeSessionInfoRequest {
	FString sessionId; // 0x0
	FFlsNativeSessionInfo nativeSessionInfo; // 0x10
};

struct FClusterNode {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
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
	FSlateSound UncheckedSlateSound; // 0x598
	FSlateSound HoveredSlateSound; // 0x5b0
	FName CheckedSound; // 0x5c8
	FName UncheckedSound; // 0x5d0
	FName HoveredSound; // 0x5d8
};

struct FEconomyGetDraftItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FEconomyDeleteStoreByIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ID; // 0x10
	FString IdempotencyId; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
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

struct FAdminGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
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
	bool bAlwaysResetOnEntry; // 0x40
};

struct FMapOverrideLocations : FTableRowBase {
	UWorld* MapToOverride; // 0x8
	FVector2D OverrideLocation; // 0x28
	FBox GeneratedBounds; // 0x30
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FGroupsApplyToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingInvite; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0x70
	EComponentType SourceComponent; // 0x80
	UCurveFloat* DrivingCurve; // 0x88
	float multiplier; // 0x90
	bool bUseRange; // 0x94
	float RangeMin; // 0x98
	float RangeMax; // 0x9c
	float RemappedMin; // 0xa0
	float RemappedMax; // 0xa4
	EDrivenDestinationMode DestinationMode; // 0xa8
	FName ParameterName; // 0xb0
	FBoneReference TargetBone; // 0xb8
	EComponentType TargetComponent; // 0xc8
	char bAffectTargetTranslationX : 1; // 0xcc
	char bAffectTargetTranslationY : 1; // 0xcc
	char bAffectTargetTranslationZ : 1; // 0xcc
	char bAffectTargetRotationX : 1; // 0xcc
	char bAffectTargetRotationY : 1; // 0xcc
	char bAffectTargetRotationZ : 1; // 0xcc
	char bAffectTargetScaleX : 1; // 0xcc
	char bAffectTargetScaleY : 1; // 0xcc
	char bAffectTargetScaleZ : 1; // 0xcc
	EDrivenBoneModificationMode ModificationMode; // 0xd0
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t total; // 0x8
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FEconomyPurchaseItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> InventoryItems; // 0x28
	bool InventoryTooLarge; // 0x38
	TArray<UPlayFabJsonObject*> PurchasedItems; // 0x40
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FArtisanGameItemModRow : FFCTableRow {
	int32_t Tier1StatAdd; // 0x8
	int32_t Tier2StatAdd; // 0xc
	int32_t Tier3StatAdd; // 0x10
	int32_t Tier4StatAdd; // 0x14
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FClientGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x2b0
	FSlateBrush ActiveBrush; // 0x340
	FSlateBrush ColorOverlayBrush; // 0x3d0
	FSlateBrush ForegroundBrush; // 0x460
	FSlateBrush HoveredBrush; // 0x4f0
	FSlateBrush ContentAreaBrush; // 0x580
	FSlateBrush TabWellBrush; // 0x610
	FMargin TabPadding; // 0x6a0
	float OverlapWidth; // 0x6b0
	FSlateColor FlashColor; // 0x6b8
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FEconomySubtractVirtualCurrenciesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	FString IdempotencyId; // 0x20
};

struct FMultiplayerListAssetSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FServerGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FAdminGetUserInventoryRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FAutomationScreenshotMetadata {
	FString Name; // 0x0
	FString Context; // 0x10
	FGuid ID; // 0x20
	int32_t Width; // 0x30
	int32_t Height; // 0x34
	FString RHI; // 0x38
	FString Platform; // 0x48
	FString FeatureLevel; // 0x58
	bool bIsStereo; // 0x68
	FString Vendor; // 0x70
	FString AdapterName; // 0x80
	FString AdapterInternalDriverVersion; // 0x90
	FString AdapterUserDriverVersion; // 0xa0
	FString UniqueDeviceId; // 0xb0
	float ResolutionQuality; // 0xc0
	int32_t ViewDistanceQuality; // 0xc4
	int32_t AntiAliasingQuality; // 0xc8
	int32_t ShadowQuality; // 0xcc
	int32_t PostProcessQuality; // 0xd0
	int32_t TextureQuality; // 0xd4
	int32_t EffectsQuality; // 0xd8
	int32_t FoliageQuality; // 0xdc
	int32_t GraniteTextureQuality; // 0xe0
	bool bHasComparisonRules; // 0xe4
	char ToleranceRed; // 0xe5
	char ToleranceGreen; // 0xe6
	char ToleranceBlue; // 0xe7
	char ToleranceAlpha; // 0xe8
	char ToleranceMinBrightness; // 0xe9
	char ToleranceMaxBrightness; // 0xea
	float MaximumLocalError; // 0xec
	float MaximumGlobalError; // 0xf0
	bool bIgnoreAntiAliasing; // 0xf4
	bool bIgnoreColors; // 0xf5
};

struct FServerModList {
	TArray<FModInfo> ModList; // 0x0
	int32_t SteamModsCount; // 0x10
	int32_t NonSteamModsCount; // 0x14
};

struct FNavMeshTileDrawData {
	TArray<FNavMeshPolygonDrawData> Polygons; // 0x0
	int32_t TileX; // 0x10
	int32_t TileY; // 0x14
	int32_t Layer; // 0x18
	FVector Center; // 0x1c
	FVector Extent; // 0x28
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

struct FEconomyGetVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FDependentRecipes {
	TSet<int32_t> Recipes; // 0x0
};

struct FAdminGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FServerSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FEconomySetUgcItemModerationStateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FMultiplayerListContainerImageTagsResponse : FPlayFabResultCommon {
	FString Tags; // 0x8
};

struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	float Constant; // 0x3c
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
};

struct FServerGrantItemsToCharacterRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString CharacterId; // 0x28
	FString ItemIds; // 0x38
	FString PlayFabId; // 0x48
};

struct FServerRevokeInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x30
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x30
	FName CachePoseName; // 0x48
	float GlobalWeight; // 0x50
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FBuildingPiecesInAreaData {
	FBuildingModuleDataView BuildingPieceInAreaView; // 0x0
	ABuildingBase* MasterBuilding; // 0x50
	TArray<APlaceableBase*> AllPlaceables; // 0x58
	int32_t NumBuildingPiecesInBuilding; // 0x68
};

struct FServerSetGameServerInstanceStateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUpdateSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FProfilesGetEntityProfilesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Profiles; // 0x8
};

struct FSkeletalMeshLODGroupSettings {
	float ScreenSize; // 0x0
	FSkeletalMeshOptimizationSettings OptimizationSettings; // 0x8
};

struct FVector_NetQuantize100 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x18
};

struct FEconomyUpdateStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Store; // 0x18
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FImprintQualitySettings {
	bool Enabled; // 0x0
	int32_t ImprintTextureWidth; // 0x4
	int32_t ImprintTextureHeight; // 0x8
	int32_t GridScale; // 0xc
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x30
	FPoseLink Additive; // 0x48
	float Alpha; // 0x60
	FInputScaleBias AlphaScaleBias; // 0x64
	int32_t LODThreshold; // 0x6c
	float ActualAlpha; // 0x70
};

struct FAuthenticationGetAPIKeysResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Keys; // 0x10
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
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

struct FCloudScriptListHttpFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
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

struct FRaceEntry {
	FName RaceTemplate; // 0x0
	float Weight; // 0x8
};

struct FCellLocation : FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x4
	ETextFlowDirection TextFlowDirection; // 0x5
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0x70
	int32_t MaxIterations; // 0x74
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0x78
	TArray<FAnimLegIKData> LegsData; // 0x88
};

struct FFlsConnectionMessage : FFlsBaseMessage {
	FString Data; // 0x28
};

struct FEconomyGetDraftItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
};

struct FPrimitiveComponentPostPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
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

struct FAdminCreateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FAdminRemoveServerBuildResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEventInfo {
	FString PlayerNickname; // 0x0
	FText EventMessage; // 0x10
	FString EventDate; // 0x28
	int64_t PlayerId; // 0x38
};

struct FAITestSpawnSet {
	TArray<FAITestSpawnInfo> SpawnInfoContainer; // 0x0
	FName Name; // 0x10
	char bEnabled : 1; // 0x18
	AActor* FallbackSpawnLocation; // 0x20
};

struct FGroupsChangeMemberRoleRequest : FPlayFabRequestCommon {
	FString DestinationRoleId; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	TArray<UPlayFabJsonObject*> Members; // 0x20
	FString OriginRoleId; // 0x30
};

struct FAdminExportMasterPlayerDataRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FServerGetUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FEmotesMenuCategoryNode {
	EEmoteCategories Category; // 0x0
	UTexture2D* IconAssetPtr; // 0x8
	UTexture2D* Icon; // 0x28
	FText Label; // 0x30
};

struct FBuildingReplicationTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
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

struct FComparisonToleranceAmount {
	char Red; // 0x0
	char Green; // 0x1
	char Blue; // 0x2
	char Alpha; // 0x3
	char MinBrightness; // 0x4
	char MaxBrightness; // 0x5
};

struct FMultiplayerListCertificateSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FServerGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAdminUpdateCloudScriptResult : FPlayFabResultCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FExperimentationEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGfeSDKHighlightScreenshotParams {
	FString GroupId; // 0x0
	FString HighlightId; // 0x10
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x20
	FVectorCurve RotationCurve; // 0x190
	FVectorCurve ScaleCurve; // 0x300
};

struct FMultiplayerGetRemoteLoginEndpointResponse : FPlayFabResultCommon {
	FString IPV4Address; // 0x8
	int32_t Port; // 0x18
};

struct FAdminGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FClientRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FServerRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UObject* ObjectPtr; // 0x8
};

struct FMultiplayerListMultiplayerServersRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	int32_t PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FServerGrantItemsToUserRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString ItemIds; // 0x28
	FString PlayFabId; // 0x38
};

struct FBlueprintCommandDataRow : FTableRowBase {
	UDataCommand* CommandClass; // 0x8
	UClass* CommandActorClass; // 0x10
	bool RunOnClient; // 0x30
	bool RunOnServer; // 0x31
	bool RequireAdmin; // 0x32
};

struct FStatModifierInt32 : FStatModifier {
	int32_t m_Value; // 0x8
};

struct FProfilerServiceFileChunk {
	FGuid InstanceID; // 0x0
	FString FileName; // 0x10
	FString HexData; // 0x20
	TArray<char> Header; // 0x30
	TArray<char> ChunkHash; // 0x40
};

struct FServerGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FServerRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FAdminSetupPushNotificationResult : FPlayFabResultCommon {
	FString ARN; // 0x8
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

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0x70
	FBoneReference LookAtBone; // 0x80
	FName LookAtSocket; // 0x90
	FVector LookAtLocation; // 0x98
	EAxisOption LookAtAxis; // 0xa4
	bool bUseLookUpAxis; // 0xa5
	EAxisOption LookUpAxis; // 0xa6
	float LookAtClamp; // 0xa8
	EInterpolationBlend InterpolationType; // 0xac
	float InterpolationTime; // 0xb0
	float InterpolationTriggerThreashold; // 0xb4
	bool bEnableDebug; // 0xb8
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x18
	float SectionStartTime; // 0x38
};

struct FServerUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
	FString PlayFabId; // 0x38
};

struct FClientRemoveContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FWidgetFIFOData {
	EFIFOStyle Style_11_72221A0647F55A6088EAC993B43E2DD0; // 0x0
	FText Text_9_C7E539F949D8678439AA958ACA33AFF2; // 0x8
	FText Header_10_F85EC5634E266A2CC8A8238E23F81AEE; // 0x20
	EFIFOLocation Location_14_5E30C5524D6F2D1DC1ED33A48D41A6AB; // 0x38
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

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FMultiplayerGetMatchmakingTicketRequest : FPlayFabRequestCommon {
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FServerLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString XboxToken; // 0x18
};

struct FEconomyGetMyReviewRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
};

struct FFlsMatchmakeResult {
	FString MatchID; // 0x0
	FString queueId; // 0x10
	TArray<FString> Players; // 0x20
	FString GameVersion; // 0x30
	FFlsServerConfig Config; // 0x40
	FFlsNativeSessionInfo nativeSessionInfo; // 0x60
};

struct FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FServerSetGameServerInstanceStateRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	EGameInstanceState State; // 0x18
};

struct FProfilerServiceRequest {
	uint32_t Request; // 0x0
};

struct FCloudScriptEmptyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerLoginWithXboxIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString Sandbox; // 0x18
	FString XboxId; // 0x28
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
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
	char bUseRandomColors : 1; // 0x8
	char bColorBordersGreen : 1; // 0x8
	char bColorByExecutionTime : 1; // 0x8
	float ExecutionTimeDivisor; // 0xc
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FMultiplayerListCertificateSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> CertificateSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x98
	FSlateBrush MarqueeImage; // 0x128
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

struct FStaticMeshComponentLODInfo {
	TArray<FPaintedVertex> PaintedVertices; // 0x20
};

struct FMultiplayerGetCognitiveServicesTokenRequest : FPlayFabRequestCommon {
	ECognitiveServicesType CognitiveServicesType; // 0x8
	FString Region; // 0x10
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FFeatTableRow : FGameItemTableRowBase {
	FText FeatName; // 0x10
	FText Description; // 0x28
	UTexture2D* Icon; // 0x40
	TArray<UTexture2D*> IconLayers; // 0x60
	UTexture2D* IconOverlay; // 0x70
	bool GiveOnSpawn; // 0x90
	int32_t LevelRequirement; // 0x94
	int32_t FeatCost; // 0x98
	TArray<EFeatCategory> Categories; // 0xa0
	TArray<int32_t> PrerequisiteFeat; // 0xb0
	TArray<int32_t> RewardRecipe; // 0xc0
	bool ShowInFeatWindow; // 0xd0
	bool AutoLearnDlcFeat; // 0xd1
	bool AlwaysHiddenInFeatWindow; // 0xd2
	int32_t CornerStoneLevel; // 0xd4
	FName DLCPackage; // 0xd8
};

struct FAdminRefundPurchaseResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FTravelPointsContainer {
	TArray<int32_t> TravelPoints; // 0x0
};

struct FStringEnumValue {
	FName Name; // 0x0
};

struct FMatchmakerPlayerJoinedResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAutomationWorkerRunTestsReply {
	float Duration; // 0x0
	TArray<FAutomationWorkerEvent> Errors; // 0x8
	uint32_t ExecutionCount; // 0x18
	TArray<FString> Logs; // 0x20
	bool Success; // 0x30
	FString TestName; // 0x38
	TArray<FString> Warnings; // 0x48
};

struct FClientUnlinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
};

struct FStartAsyncSimulationFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FTargetArea {
	FVector SphereCenter; // 0x0
	FVector Normal; // 0xc
	float SphereRadius; // 0x18
	float ConeHalfAngleRadians; // 0x1c
};

struct FCharacterLayoutSerializationHelper {
	FCharacterLayout Layout; // 0x0
};

struct FAdminSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
};

struct FEconomyGetStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x18
	UPlayFabJsonObject* Store; // 0x28
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x2b0
	FSlateColor DownArrowColorAndOpacity; // 0x340
	FSlateBrush MenuBorderBrush; // 0x368
	FMargin MenuBorderPadding; // 0x3f8
};

struct FExperimentationUpdateExperimentRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	int32_t Duration; // 0x18
	EExperimentType ExperimentType; // 0x1c
	FString ID; // 0x20
	FString Name; // 0x30
	int32_t PopulationPercentage; // 0x40
	FString SegmentId; // 0x48
	FString StartDate; // 0x58
	FString TitlePlayerAccountTestIds; // 0x68
	TArray<UPlayFabJsonObject*> Variants; // 0x78
};

struct FGroupsAcceptGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FGfeSDKHighlightGroupView {
	FString GroupId; // 0x0
	EGfeSDKHighlightType TagsFilter; // 0x10
	EGfeSDKHighlightSignificance SignificanceFilter; // 0x11
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
	UFloatProperty* FloatProperty; // 0x28
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FGameItemVersionDataRow : FFCTableRow {
	TArray<FGameItemVersionsData> ItemVersionModifications; // 0x8
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x58
	float ExplicitTime; // 0x60
	bool bShouldLoopWhenInSyncGroup; // 0x64
	bool bTeleportToExplicitTime; // 0x65
	float StartPosition; // 0x68
	ESequenceEvalReinit ReinitializationBehavior; // 0x6c
	bool bReinitialized; // 0x6d
};

struct FAdminGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FClientUnlinkWindowsHelloAccountResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FClientConsumeXboxEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString XboxToken; // 0x18
};

struct FLobbyPlayerStateActorInfo : FFastArraySerializerItem {
	ALobbyBeaconPlayerState* LobbyPlayerState; // 0x10
};

struct FAdminCreatePlayerSharedSecretResult : FPlayFabResultCommon {
	FString SecretKey; // 0x8
};

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x130
	int32_t LODThreshold; // 0x148
	bool bIsLODEnabled; // 0x14c
	FVector LookAtLocation; // 0x150
	FName SourceSocketName; // 0x160
	float Alpha; // 0x168
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	int32_t Index; // 0x8
	FRichCurve XCurve; // 0x10
	FRichCurve YCurve; // 0x80
	FRichCurve ZCurve; // 0xf0
};

struct FAdminAddPlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminResetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FTargetData {
	FTargetWrapper Target; // 0x0
	TMap<EHateType, float> CurrentHates; // 0x18
	float TotalHate; // 0x68
};

struct FClientValidateWindowsReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString Receipt; // 0x30
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x8
	float Weight; // 0x10
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x30
	EModifyCurveApplyMode ApplyMode; // 0x48
	TArray<float> CurveValues; // 0x50
	TArray<FName> CurveNames; // 0x60
	float Alpha; // 0x70
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	AActor* ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x20
};

struct FSocketStaticData {
	TArray<EBuildingSocketType> SocketTypes; // 0x0
	TArray<EBuildingSocketType> TargetSocketTypes; // 0x10
	TArray<ESocketConfiguration> OverrideSocketRotations; // 0x20
	int32_t AttachToCost; // 0x30
	int32_t AttachCost; // 0x34
};

struct FClientAcceptTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FClientRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
};

struct FMovieSceneAudioSectionTemplateData {
	USoundBase* Sound; // 0x0
	float AudioStartOffset; // 0x8
	FFloatRange AudioRange; // 0xc
	FRichCurve AudioPitchMultiplierCurve; // 0x20
	FRichCurve AudioVolumeCurve; // 0x90
	int32_t RowIndex; // 0x100
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

struct FServerRemovePlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceID; // 0x18
	FString InstanceType; // 0x28
	FGuid sessionId; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FDyeColourTableRow : FTableRowBase {
	FLinearColor Colour; // 0x8
};

struct FServerGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
};

struct FClientUnlinkFacebookAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FReplicationRemovedPiece {
	TArray<uint8_t> m_RemovedInstances; // 0x0
	TArray<bool> m_SpawnMeshOnRemoval; // 0x10
};

struct FClientLinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	bool ForceLink; // 0x18
	FString IdToken; // 0x20
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x58
};

struct FCharacterEnumParameters {
	CharacterGod God; // 0x0
	CharacterRace Race; // 0x1
	CharacterCrime CrimeOne; // 0x2
	CharacterCrime CrimeTwo; // 0x3
	CharacterCrime CrimeThree; // 0x4
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FClientUnlinkKongregateAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FDataGetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	bool EscapeObject; // 0x10
};

struct FAdminGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FProfilesSetGlobalPolicyRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FEnduranceData {
	char Exhausted : 1; // 0xc
};

struct FFollowersListData {
	int64_t CharacterId; // 0x0
	FText ThrallName; // 0x8
	EThrallProfession ThrallProfession; // 0x20
	EThrallAIState ThrallState; // 0x21
	int32_t CharacterLevel; // 0x24
	FVector_NetQuantize ThrallLocation; // 0x28
	bool IsTracked; // 0x34
	bool IsNetRelevant; // 0x35
};

struct FMultiplayerGetMultiplayerServerDetailsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x8
	FString FQDN; // 0x18
	FString IPV4Address; // 0x28
	FString LastStateTransitionTime; // 0x38
	TArray<UPlayFabJsonObject*> Ports; // 0x48
	FString Region; // 0x58
	FString ServerId; // 0x68
	FString sessionId; // 0x78
	FString State; // 0x88
	FString VmId; // 0x98
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FClientUnlinkFacebookAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FDataInitiateFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FLiveInventoryItem {
	FString ConsumableID; // 0x0
};

struct FServerRentalLocation : FSpsType {
	int32_t LocationID; // 0x8
	FString Name; // 0x10
	FString Key; // 0x20
	int32_t MaxServerCount; // 0x30
	int32_t ServerCount; // 0x34
	FString OnlineStatus; // 0x38
};

struct FClientGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x58
	TArray<FStringCurveKey> Keys; // 0x68
};

struct FMeshMergingSettings {
	bool bGenerateLightMapUV; // 0x0
	int32_t TargetLightMapResolution; // 0x4
	bool bImportVertexColors; // 0x8
	bool bPivotPointAtZero; // 0x9
	bool bMergePhysicsData; // 0xa
	bool bAssignLODGroup; // 0xb
	int32_t LODGroupIndex; // 0xc
	bool bMergeMaterials; // 0x10
	FMaterialProxySettings MaterialSettings; // 0x14
	bool bBakeVertexDataToMesh; // 0xa8
	bool bUseVertexDataForBakingMaterial; // 0xa9
	bool bUseTextureBinning; // 0xaa
	bool bCalculateCorrectLODModel; // 0xab
	EMeshLODSelectionType LODSelectionType; // 0xac
	int32_t ExportSpecificLOD; // 0xb0
	int32_t SpecificLOD; // 0xb4
	bool bUseLandscapeCulling; // 0xb8
	bool bExportNormalMap; // 0xb9
	bool bExportMetallicMap; // 0xba
	bool bExportRoughnessMap; // 0xbb
	bool bExportSpecularMap; // 0xbc
	int32_t MergedMaterialAtlasResolution; // 0xc0
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FServerAuthenticateSessionTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FServerGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableIDs; // 0x18
};

struct FAutomationWorkerRequestTestsReply {
	FString DisplayName; // 0x0
	FString FullTestPath; // 0x10
	FString TestName; // 0x20
	FString TestParameter; // 0x30
	FString SourceFile; // 0x40
	int32_t SourceFileLine; // 0x50
	FString AssetPath; // 0x58
	FString OpenCommand; // 0x68
	uint32_t TestFlags; // 0x78
	uint32_t NumParticipantsRequired; // 0x7c
	int32_t TotalNumTests; // 0x80
};

struct FGroupsUpdateGroupRoleResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FClientUnlinkKongregateAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FEconomyGetCatalogConfigResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Config; // 0x8
};

struct FServerSubtractCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
};

struct FNavMeshPolygonDrawData {
	TArray<FVector> Vertices; // 0x0
	char AreaID; // 0x10
};

struct FDLCFilterEntry {
	FText DisplayText; // 0x0
	FName DLCPackage; // 0x18
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FEconomyGetRecipeByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FClientRegisterForIOSPushNotificationResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FCharacterArmourDyeParams {
	FArmourSlotDyeParams Helmet; // 0x0
	FArmourSlotDyeParams Forearms; // 0x10
	FArmourSlotDyeParams Hands; // 0x20
	FArmourSlotDyeParams UpperBody; // 0x30
	FArmourSlotDyeParams LowerBody; // 0x40
	FArmourSlotDyeParams Legs; // 0x50
	FArmourSlotDyeParams Feet; // 0x60
};

struct FMapMarker {
	int32_t ID; // 0x0
	FText Name; // 0x8
	FStringAssetReference Icon; // 0x20
	FVector Location; // 0x30
	FRotator Rotation; // 0x3c
	float ExpiryTime; // 0x48
	UUniqueID* correspondingCorpseID; // 0x50
	uint64_t ClanMemberId; // 0x58
	ETransientMarkerType TransientMarkerType; // 0x60
};

struct FNiagaraConstants {
	TArray<FNiagaraConstant_Float> ScalarConstants; // 0x0
	TArray<FNiagaraConstant_Vector> VectorConstants; // 0x10
	TArray<FNiagaraConstant_Matrix> MatrixConstants; // 0x20
};

struct FAutomationWorkerScreenImage {
	TArray<char> ScreenImage; // 0x0
	FString ScreenShotName; // 0x10
	FAutomationScreenshotMetadata MetaData; // 0x20
};

struct FMultiplayerRequestMultiplayerServerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* BuildAliasParams; // 0x8
	FString BuildId; // 0x10
	FString InitialPlayers; // 0x20
	FString PreferredRegions; // 0x30
	FString SessionCookie; // 0x40
	FString sessionId; // 0x50
};

struct FStatNodeFloat : FStatNode {
	float m_Value; // 0x14
	float m_DefaultValue; // 0x18
	TArray<FStatModifierFloat> m_Modifiers; // 0x20
};

struct FFCDamageParams {
	EFCDamageType FCDamageType; // 0x0
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x18
	float SectionStartTime; // 0x38
};

struct FAdminSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FFeatGroupNode {
	UFeatItem* m_CornerStoneFeat; // 0x0
	TArray<UFeatItem*> m_FeatList; // 0x20
};

struct FServerGetAllSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	int32_t StartPosition; // 0x28
	FString StatisticName; // 0x30
	int32_t Version; // 0x40
	FString XboxToken; // 0x48
};

struct FDataSetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> Objects; // 0x18
};

struct FServerGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FItemTableRowHandle {
	FName ItemTemplateID; // 0x0
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FSpawnTableRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FExperimentationStopExperimentRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
};

struct FCaptureProtocolID {
	FName Identifier; // 0x0
};

struct FSubmixEffectTestSettings {
	float TestVolume; // 0x0
};

struct FAdminGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
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

struct FClientConfirmPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
};

struct FExperimentationGetLatestScorecardsForTitleResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Scorecards; // 0x8
};

struct FLeaderboardsUpdateStatisticsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	UPlayFabJsonObject* Statistics; // 0x18
};

struct FAdminListBuildsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminCreateCloudScriptAzureFunctionsTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FClientConsumeXboxEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FTTFloatTrack : FTTTrackBase {
	UCurveFloat* CurveFloat; // 0x10
};

struct FMultiplayerGetMultiplayerServerLogsRequest : FPlayFabRequestCommon {
	FString Region; // 0x8
	FString ServerId; // 0x18
};

struct FLandClaimChannelDrawData {
	ClaimChannel Channel; // 0x0
	TArray<int64_t> UIDMap; // 0x8
	int32_t MinX; // 0x18
	int32_t MinY; // 0x1c
	int32_t SampleWidth; // 0x20
	TArray<char> TileOwnership; // 0x28
	TArray<FString> TileClaimingActor; // 0x38
	TArray<int32_t> TileRefCount; // 0x48
	FVector Base; // 0x58
	int32_t CellSize; // 0x64
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FClientUpdateCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FNPCGrowthContainer {
	bool m_IsInitialized; // 0x0
	TMap<ECharIntStatID, float> StatGrowth; // 0x8
	TMap<ECharIntStatID, float> FoodGrowthBonus; // 0x58
	TMap<ECharIntStatID, int32_t> BaseStats; // 0xa8
	float baseGrowthRate1; // 0xf8
	float baseGrowthRate2; // 0xfc
	int32_t BaseLevel; // 0x100
	int32_t CurrentFoodBonusTier; // 0x104
};

struct FClientGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FExperimentationStartExperimentRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
};

struct FAdminGetContentUploadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FAdminCreatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString FriendlyName; // 0x8
};

struct FClientConsumePSNEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	int32_t ServiceLabel; // 0x18
};

struct FMultiplayerGetQueueStatisticsResult : FPlayFabResultCommon {
	int32_t NumberOfPlayersMatching; // 0x8
	UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FClientListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
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

struct FKSphylElem : FKShapeElem {
	FMatrix TM; // 0x20
	FVector Center; // 0x60
	FQuat Orientation; // 0x70
	float Radius; // 0x80
	float Length; // 0x84
};

struct FPartyState {
	EPartyType PartyType; // 0x8
	bool bLeaderFriendsOnly; // 0x9
	bool bLeaderInvitesOnly; // 0xa
	bool bInvitesDisabled; // 0xb
};

struct FAdminGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FClientConfirmPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
	FString OrderId; // 0x18
	FString PurchaseDate; // 0x28
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FGroupedStaticMeshOptimizationSettings {
	EStaticMeshLODType LevelOfDetailType; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x8
	FMeshProxySettings ProxySettings; // 0x150
};

struct FAdminGetTaskInstancesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Summaries; // 0x8
};

struct FClientGetWindowsHelloChallengeResponse : FPlayFabResultCommon {
	FString Challenge; // 0x8
};

struct FEconomyReportReviewResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FBoneReference IKBone; // 0x70
	FVector EffectorLocation; // 0x80
	FVector JointTargetLocation; // 0x8c
	FName EffectorSpaceBoneName; // 0x98
	char bTakeRotationFromEffectorSpace : 1; // 0xa0
	char bMaintainEffectorRelRot : 1; // 0xa0
	char bAllowStretching : 1; // 0xa0
	FVector2D StretchLimits; // 0xa4
	float StartStretchRatio; // 0xac
	float MaxStretchScale; // 0xb0
	EBoneControlSpace EffectorLocationSpace; // 0xb4
	EBoneControlSpace JointTargetLocationSpace; // 0xb5
	FName JointTargetSpaceBoneName; // 0xb8
};

struct FClientGetFriendLeaderboardRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	int32_t Version; // 0x30
	FString XboxToken; // 0x38
};

struct FEconomyGrantInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FAttachedModuleData {
	int32_t m_SocketTypes; // 0x10
	int32_t m_TargetSocketTypes; // 0x14
	uint8_t AttachToCost; // 0x18
	uint8_t AttachCost; // 0x19
	uint8_t m_SourceSocketIndex; // 0x1a
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FServerGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerDeleteCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
	bool SaveCharacterInventory; // 0x28
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FServerGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FClientLinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesSignature; // 0x8
	bool ForceLink; // 0x18
};

struct FGfeSDKPermissionsChangedData {
	TMap<EGfeSDKScope, EGfeSDKPermission> ScopePermissions; // 0x0
};

struct FFlsUpdateNativeSessionInfoReply {
	FFlsNativeSessionInfo nativeSessionInfo; // 0x0
};

struct FTTTrackBase {
	FName TrackName; // 0x0
	bool bIsExternalCurve; // 0x8
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x28
};

struct FScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0xc
};

struct FServerSetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FEconomySetVirtualCurrenciesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	FString IdempotencyId; // 0x20
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FAdminDeleteStoreRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FServerUpdateCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FClientUnlinkIOSDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x70
	FVector2D ShadowOffset; // 0x98
	FLinearColor ShadowColorAndOpacity; // 0xa0
	FSlateColor SelectedBackgroundColor; // 0xb0
	FLinearColor HighlightColor; // 0xd8
	FSlateBrush HighlightShape; // 0xe8
	FSlateBrush UnderlineBrush; // 0x178
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FCloudScriptPostFunctionResultForScheduledTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
	UPlayFabJsonObject* ScheduledTaskId; // 0x18
};

struct FEconomyAddVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FServerGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAdminLookupUserAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString userName; // 0x38
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0xc8
	char ActiveEnumValue; // 0xd8
};

struct FServerExecuteCloudScriptServerRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	FString PlayFabId; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x38
	int32_t SpecificRevision; // 0x3c
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float TimeStamp; // 0xc
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x28
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush DisabledBarImage; // 0x98
	FSlateBrush NormalThumbImage; // 0x128
	FSlateBrush DisabledThumbImage; // 0x1b8
	float BarThickness; // 0x248
};

struct FClientGetPurchaseResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString PaymentProvider; // 0x18
	FString PurchaseDate; // 0x28
	FString TransactionId; // 0x38
	FString TransactionStatus; // 0x48
};

struct FClientPurchaseItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FClientLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString XboxToken; // 0x38
};

struct FFlsFlsUserInfo {
	FString m_PlayerId; // 0x0
	FString m_MasterAccountId; // 0x10
	FString m_TitleAccountId; // 0x20
};

struct FEconomyGetSubscriptionByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FServerGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FClientGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FServerLinkServerCustomIdRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString ServerCustomId; // 0x20
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FServerRefreshGameServerInstanceHeartbeatResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FEconomyCreateUploadUrlsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> UploadUrls; // 0x8
};

struct FKeyMappingCategory : FTableRowBase {
	FText LocalizableCategoryName; // 0x8
	TArray<FMappingDisplayName> ActionMappings; // 0x20
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingPtr ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x10
	bool bOverridesDefault; // 0x18
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FAIDamageEvent {
	float amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
};

struct FNpcDebugData {
	FString Target; // 0x8
	FName SpawnName; // 0x18
	FString BtTask; // 0x20
	FString BlackboardInfo; // 0x30
	int32_t NetCullDistanceSquared; // 0x40
	int32_t Distance; // 0x44
	char AILOD; // 0x48
	EAIEngagementBehavior Behaviour; // 0x49
	EAIFollowerTacticType Tactic; // 0x4a
	EMovementMode MovementType; // 0x4b
};

struct FMovieSceneBytePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve ByteCurve; // 0x38
};

struct FCameraTrackingFocusSettings {
	AActor* ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x8
	char bDrawDebugTrackingFocusPoint : 1; // 0x14
};

struct FAdminSetPlayerSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGroupsListGroupBlocksResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BlockedEntities; // 0x8
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FDataSetObjectsResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	TArray<UPlayFabJsonObject*> SetResults; // 0x10
};

struct FTTEventTrack : FTTTrackBase {
	UCurveFloat* CurveKeys; // 0x10
};

struct FGroupsDeleteGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FVaultActorData {
	FString actorName; // 0x0
	FName vaultName; // 0x10
	bool bIsExhausted; // 0x18
	TArray<UGameItem*> itemsInChest; // 0x20
};

struct FClientAndroidDevicePushNotificationRegistrationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FCachedUser {
	FString MasterAccountId; // 0x0
	FString TitlePlayerId; // 0x10
	FString PlatformId; // 0x20
	FString TitleDisplayName; // 0x30
	FString UserToken; // 0x40
};

struct FEquipmentGenderVariations : FTableRowBase {
	CharacterBodySlots SlotType; // 0x8
	USkeletalMesh* MalePath; // 0x10
	USkeletalMesh* FemalePath; // 0x30
	USkeletalMesh* MalePathTucked; // 0x50
	USkeletalMesh* FemalePathTucked; // 0x70
	UPhysicalMaterial* PhysicalMaterial; // 0x90
	int32_t DyeFlags; // 0xb0
	int32_t TuckFlags; // 0xb4
	int32_t HideFlags; // 0xb8
};

struct FAdminAddVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FLeaderboardsIncrementStatisticVersionRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
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

struct FMultiplayerJoinMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Member; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FMovieSceneFloatPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve FloatCurve; // 0x38
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

struct FCharacterTextureLayout {
	int32_t EyebrowTexture; // 0x0
	int32_t EyeTexture; // 0x4
	int32_t LipTexture; // 0x8
	int32_t WarpaintFaceTexture; // 0xc
	int32_t WarpaintBodyTexture; // 0x10
	int32_t WarpaintHandsTexture; // 0x14
	int32_t HairlineTexture; // 0x18
	int32_t FacialHairlineTexture; // 0x1c
};

struct FMultiplayerDeleteRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString userName; // 0x28
	FString VmId; // 0x38
};

struct FAdminUpdateCatalogItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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

struct FServerGetLeaderboardRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	int32_t Version; // 0x30
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType_InstancedStaticMesh* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FDataTableMergeControlRow : FTableRowBase {
	TArray<FName> ColumnsToOverride; // 0x8
	TArray<FName> ColumnsWithArraysToInsert; // 0x18
	TArray<FName> ColumnsWithArraysToRemove; // 0x28
};

struct FClientGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x30
};

struct FClientRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
};

struct FAdminGetContentListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	int32_t ItemCount; // 0x18
	int32_t TotalSize; // 0x1c
};

struct FEconomySearchInStoreByFriendlyIdRequest : FPlayFabRequestCommon {
	FString Filter; // 0x8
	FString FriendlyId; // 0x18
	FString IdempotencyId; // 0x28
	FString OrderBy; // 0x38
	FString Search; // 0x48
	int32_t Skip; // 0x58
	UPlayFabJsonObject* SourceEntityKey; // 0x60
	int32_t Top; // 0x68
};

struct FMultiplayerListQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FClientStartGameResult : FPlayFabResultCommon {
	FString Expires; // 0x8
	FString LobbyId; // 0x18
	FString password; // 0x28
	FString ServerIPV4Address; // 0x38
	FString ServerIPV6Address; // 0x48
	int32_t ServerPort; // 0x58
	FString ServerPublicDNSName; // 0x60
	FString Ticket; // 0x70
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FProfilerServiceCapture {
	bool bRequestedCaptureState; // 0x0
};

struct FEconomyGetStoreByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FEconomyDeleteItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FProfilesSetEntityProfilePolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x8
	TWeakObjectPtr<UWidget> Widget; // 0x10
};

struct FClientCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FClientGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FClientUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
};

struct FAdminListBuildsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Builds; // 0x8
};

struct FEdGraphPinType {
	FString PinCategory; // 0x0
	FString PinSubCategory; // 0x10
	TWeakObjectPtr<UObject> PinSubCategoryObject; // 0x20
	FSimpleMemberReference PinSubCategoryMemberReference; // 0x28
	FEdGraphTerminalType PinValueType; // 0x48
	bool bIsMap; // 0x78
	bool bIsSet; // 0x79
	bool bIsArray; // 0x7a
	bool bIsReference; // 0x7b
	bool bIsConst; // 0x7c
	bool bIsWeakPointer; // 0x7d
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FPendingStreamOperation {
	AConanCharacter* m_Character; // 0x0
	UObject* m_StreamingOperation; // 0x8
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FSpawnerInfo {
	FString Name; // 0x0
	FVector Location; // 0x10
	TArray<FName> SpawnTables; // 0x20
};

struct FServerSetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FClientUnlinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FPurgeData {
	float PurgeTime; // 0x0
	float ClanMeter; // 0x4
	EPurgeEventType PurgeEventType; // 0x8
	FVector PurgeLocation; // 0xc
	bool BuidingRestricted; // 0x18
	float PurgeRadius; // 0x1c
	float MaxTriggerValue; // 0x20
	float RemainingPrepTime; // 0x24
};

struct FServerGetPlayerStatisticsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FMovieSceneEditorData {
	TMap<FString, FMovieSceneExpansionState> ExpansionStates; // 0x0
	FFloatRange WorkingRange; // 0x50
	FFloatRange ViewRange; // 0x60
};

struct FAdminGetMatchmakerGameModesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GameModes; // 0x8
};

struct FEconomyDeleteRecipeByFriendlyIdRequest : FPlayFabRequestCommon {
	FString FriendlyId; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
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

struct FAdminDeleteStoreResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
	UPlayFabJsonObject* PlayerProfile; // 0x18
	UPlayFabJsonObject* PlayStreamEventEnvelope; // 0x20
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FClientModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FCharacterIKCollection {
	float feetIKAlpha; // 0x0
	float hipsAlpha; // 0x4
	FVector rightFootTarget; // 0x8
	FVector leftFootTarget; // 0x14
	FRotator leftFootRotator; // 0x20
	FRotator rightFootRotator; // 0x2c
	FVector rightKneeLocation; // 0x38
	FVector leftKneeLocation; // 0x44
	FVector hipsTarget; // 0x50
	FVector rightHandTarget; // 0x5c
	FVector leftHandTarget; // 0x68
	FVector rightElbowLocation; // 0x74
	FVector leftElbowLocation; // 0x80
};

struct FServerGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FRootMotionSourceGroup {
	bool bHasAdditiveSources; // 0xe8
	bool bHasOverrideSources; // 0xe9
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0xec
	bool bIsAdditiveVelocityApplied; // 0xf8
	FRootMotionSourceSettings LastAccumulatedSettings; // 0xf9
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	UDistributionFloat* Distribution; // 0x30
};

struct FServerGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FSTR_ComboLookupOpeners {
	E_ComboInput ComboInput_9_BAC7B3714CC06BF848ED93A8D50856A7; // 0x0
	FEWeaponComboType WeaponComboTypeLead_27_FAC889E0486638FF3CF6949332FAE577; // 0x8
	FEWeaponComboType WeaponComboTypeSupport_28_C66DF1544FCB01EFAF72C790130AD0B0; // 0x10
};

struct FProfilesGetGlobalPolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FSimplygonChannelCastingSettings {
	ESimplygonMaterialChannel MaterialChannel; // 0x0
	ESimplygonCasterType Caster; // 0x1
	bool bActive; // 0x2
	ESimplygonColorChannels ColorChannels; // 0x3
	int32_t BitsPerChannel; // 0x4
	bool bUseSRGB; // 0x8
	bool bBakeVertexColors; // 0x9
	bool bFlipBackfacingNormals; // 0xa
	bool bUseTangentSpaceNormals; // 0xb
	bool bFlipGreenChannel; // 0xc
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FMultiplayerCreateServerBackfillTicketRequest : FPlayFabRequestCommon {
	int32_t GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
	UPlayFabJsonObject* ServerDetails; // 0x30
};

struct FOrderedServerBuildingEventManager {
	FReplicationRemovedPieces m_ReplicationPendingRemovedIndexes; // 0x0
	TSet<UInstancedBuildingComponent*> m_RequiredComponents; // 0x160
	ABuildingBase* m_TargetBuilding; // 0x1b0
};

struct FLeaderboardsGetEntityLeaderboardRequest : FPlayFabRequestCommon {
	FString ChildName; // 0x8
	FString EntityType; // 0x18
	int32_t MaxResults; // 0x28
	int32_t StartingPosition; // 0x2c
	FString StatisticName; // 0x30
	int32_t StatisticVersion; // 0x40
};

struct FAdminGetPlayerSharedSecretsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMaterialProxySettings {
	FIntPoint TextureSize; // 0x0
	ETextureSizingType TextureSizingType; // 0x8
	float GutterSpace; // 0xc
	EMaterialProxySmaplingQuality SamplingQuality; // 0x10
	EUVStrech UVStrech; // 0x11
	bool bSplitProxyMaterialBasedOnType; // 0x12
	bool bUseTangentSpace; // 0x13
	bool bNormalMap; // 0x14
	bool bMetallicMap; // 0x15
	float MetallicConstant; // 0x18
	bool bRoughnessMap; // 0x1c
	float RoughnessConstant; // 0x20
	bool bSpecularMap; // 0x24
	float SpecularConstant; // 0x28
	bool bEmissiveMap; // 0x2c
	bool bOpacityMap; // 0x2d
	float OpacityConstant; // 0x30
	bool bAmbientOcclusionMap; // 0x34
	float AOConstant; // 0x38
	float AmbientOcclusionConstant; // 0x3c
	bool bOpacityMaskMap; // 0x40
	float OpacityMaskConstant; // 0x44
	FIntPoint DiffuseTextureSize; // 0x48
	FIntPoint NormalTextureSize; // 0x50
	FIntPoint MetallicTextureSize; // 0x58
	FIntPoint RoughnessTextureSize; // 0x60
	FIntPoint SpecularTextureSize; // 0x68
	FIntPoint EmissiveTextureSize; // 0x70
	FIntPoint OpacityTextureSize; // 0x78
	FIntPoint AmbientOcclusionTextureSize; // 0x80
	FIntPoint OpacityMaskTextureSize; // 0x88
	EMaterialMergeType MaterialMergeType; // 0x90
};

struct FEconomyGetBundleByMarketplaceOfferIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	UPlayFabJsonObject* MarketplaceOfferId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x18
};

struct FServerModifyItemUsesRequest : FPlayFabRequestCommon {
	FString ItemInstanceId; // 0x8
	FString PlayFabId; // 0x18
	int32_t UsesToAdd; // 0x28
};

struct FSpawnProbabilityBand {
	float Radius; // 0x0
	int32_t Weight; // 0x4
};

struct FMultiplayerEnablePartiesForTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	FMaterialProxySettings MaterialSettings; // 0x4
	int32_t TextureWidth; // 0x98
	int32_t TextureHeight; // 0x9c
	bool bExportNormalMap; // 0xa0
	bool bExportMetallicMap; // 0xa1
	bool bExportRoughnessMap; // 0xa2
	bool bExportSpecularMap; // 0xa3
	FMaterialSimplificationSettings Material; // 0xa4
	bool bCalculateCorrectLODModel; // 0xe8
	float MergeDistance; // 0xec
	float HardAngleThreshold; // 0xf0
	int32_t LightMapResolution; // 0xf4
	bool bRecalculateNormals; // 0xf8
	bool bBakeVertexData; // 0xf9
	bool bUseLandscapeCulling; // 0xfa
	ELandscapeCullingPrecision LandscapeCullingPrecision; // 0xfb
	bool bAssignLODGroup; // 0xfc
	int32_t LODGroupIndex; // 0x100
	bool bAggregateMeshes; // 0x104
	EChartAggregationMode AggregatorMode; // 0x105
	bool bUseCustomHemisphere; // 0x106
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
	int32_t TrackIndex; // 0xa4
};

struct FMountMovementRatesTableRow : FFCTableRow {
	float AccelToStationary; // 0x8
	float AccelToWalking; // 0xc
	float AccelToRunning; // 0x10
	float AccelToSprinting; // 0x14
	float LeanTurnRateAccel; // 0x18
	float TargetLeanTurnRate; // 0x1c
	float SteepTurnRate; // 0x20
};

struct FClientLoginWithPlayFabRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString password; // 0x10
	FString userName; // 0x20
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

struct FBuildableHealthEntry {
	int32_t IngredientID; // 0x0
	float CurrentAmount; // 0x4
	int32_t MaxAmount; // 0x8
	int32_t Weight; // 0xc
	float HealthContributionPercentage; // 0x10
};

struct FEconomyCreateRecipeRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* recipe; // 0x20
};

struct FMultiplayerCancelServerBackfillTicketRequest : FPlayFabRequestCommon {
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FNiagaraScriptUsageInfo {
	bool bReadsAttriubteData; // 0x0
};

struct FGroupsListGroupInvitationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FLeaderboardsGetLeaderboardAroundEntityRequest : FPlayFabRequestCommon {
	FString ChildName; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	int32_t Offset; // 0x20
	FString StatisticName; // 0x28
	int32_t StatisticVersion; // 0x38
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

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int32_t MessageIndex; // 0x10
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FHotkeyIconKeyIcon {
	FKey Key; // 0x0
	FSlateBrush Icon; // 0x18
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FClientConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
};

struct FServerCommandHistory {
	TArray<FServerConsoleCommandLogEntry> CommandLog; // 0x0
	int32_t CommandLogStartIndex; // 0x10
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FServerLinkServerCustomIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* CharacterStatistics; // 0x8
};

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x28
	char bSuccessfullySensed : 1; // 0x40
};

struct FExperimentationGetLatestScorecardForExperimentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Scorecard; // 0x8
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x8
	ESlateBrushDrawType DrawAs; // 0x10
	FMargin Margin; // 0x14
	FLinearColor Tint; // 0x24
	FSlateColor TintColor; // 0x38
	ESlateBrushTileType Tiling; // 0x60
	ESlateBrushMirrorType Mirroring; // 0x61
	ESlateBrushImageType ImageType; // 0x62
	UObject* ResourceObject; // 0x68
	FName ResourceName; // 0x70
	bool bIsDynamicallyLoaded; // 0x78
	bool bHasUObject; // 0x79
	FBox2D UVRegion; // 0x7c
};

struct FMovieSceneColorSectionTemplate : FMovieSceneEvalTemplate {
	FName PropertyName; // 0x18
	FString PropertyPath; // 0x20
	FRichCurve Curves[0x4]; // 0x30
};

struct FAdminDeleteTitleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FKBoxElem : FKShapeElem {
	FMatrix TM; // 0x20
	FVector Center; // 0x60
	FQuat Orientation; // 0x70
	float X; // 0x80
	float Y; // 0x84
	float Z; // 0x88
};

struct FClientUnlinkSteamAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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
};

struct FMultiplayerListBuildSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FAdminUpdatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FAdminGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	FKey Key; // 0x8
	float Scale; // 0x20
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve ActorGuidIndexCurve; // 0x38
	TArray<FGuid> ActorGuids; // 0xa8
};

struct FAdminGetDataReportRequest : FPlayFabRequestCommon {
	int32_t Day; // 0x8
	int32_t Month; // 0xc
	FString ReportName; // 0x10
	int32_t Year; // 0x20
};

struct FClientReportAdActivityRequest : FPlayFabRequestCommon {
	EAdActivity Activity; // 0x8
	FString PlacementId; // 0x10
	FString RewardId; // 0x20
};

struct FAdminUpdatePlayerSharedSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FClientUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
};

struct FMultiplayerDeleteCertificateRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
};

struct FAdminGetPlayerTagsRequest : FPlayFabRequestCommon {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FCharacterLayout {
	FCharacterMeshLayout MeshLayout; // 0x0
	FCharacterTextureLayout TextureLayout; // 0x28
	FCharacterTintLayout TintLayout; // 0x48
	FCharacterBoolParameters BoolParams; // 0x68
	FCharacterIntParameters IntParams; // 0x6c
	FCharacterScalarParameters ScalarParams; // 0x74
	FCharacterEnumParameters EnumParams; // 0xc0
	FCharacterArmourDyeParams ArmourDyeParams; // 0xc8
};

struct FServerGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString PlayFabId; // 0x28
};

struct FServerSavePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString AndroidPayload; // 0x8
	FString ID; // 0x18
	FString IOSPayload; // 0x28
	UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38
	FString Name; // 0x40
};

struct FServerGetTimeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientGetAdPlacementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AdPlacements; // 0x8
};

struct FAdditionalClassComponent {
	AActor* TargetActorClass; // 0x0
	UActorComponent* ComponentToAdd; // 0x8
	EAdditionalComponentRules AdditionRule; // 0x10
	FName ComponentTag; // 0x18
};

struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	float ConstantX; // 0x3c
	float ConstantY; // 0x40
};

struct FCloudScriptExecuteFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FGroupsUpdateGroupRoleRequest : FPlayFabRequestCommon {
	int32_t ExpectedProfileVersion; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
	FString RoleName; // 0x28
};

struct FLeaderboardsGetEntityLeaderboardResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Rankings; // 0x8
	int32_t StatisticVersion; // 0x18
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TArray<bool> LocalSpacePoseMask; // 0x10
	TArray<float> CurveData; // 0x20
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
	FSlateBrush LeftShadowBrush; // 0x128
	FSlateBrush RightShadowBrush; // 0x1b8
};

struct FAnimationRecordingSettings {
	bool bRecordInWorldSpace; // 0x0
	bool bRemoveRootAnimation; // 0x1
	bool bAutoSaveAsset; // 0x2
	float SampleRate; // 0x4
	float Length; // 0x8
};

struct FAuthenticationCreateAPIKeyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Key; // 0x10
};

struct FClientGetPlayFabIDsFromTwitchIDsRequest : FPlayFabRequestCommon {
	FString TwitchIds; // 0x8
};

struct FClientUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
};

struct FClientRegisterPlayFabUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* EntityToken; // 0x8
	FString PlayFabId; // 0x10
	FString SessionTicket; // 0x20
	UPlayFabJsonObject* SettingsForUser; // 0x30
	FString userName; // 0x38
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
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x0
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x0
	char bOverride_LPVGeometryVolumeBias : 1; // 0x0
	char bOverride_LPVVplInjectionBias : 1; // 0x0
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x0
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
};

struct FEconomyGetVirtualCurrenciesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
};

struct FMultiplayerGetAssetUploadUrlRequest : FPlayFabRequestCommon {
	FString FileName; // 0x8
};

struct FMultiplayerGetMultiplayerServerLogsResponse : FPlayFabResultCommon {
	FString LogDownloadUrl; // 0x8
};

struct FFlsHostInfo {
	FString m_HostId; // 0x0
	FString m_HostType; // 0x10
	FString m_HostUrl; // 0x20
};

struct FClientGetPlayFabIDsFromKongregateIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FDataDeleteFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FServerLoginWithServerCustomIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayerSecret; // 0x18
	FString ServerCustomId; // 0x28
};

struct FAdminGetServerBuildUploadURLResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FAdminGetServerBuildUploadURLRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FExperimentationGetLatestScorecardsForTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
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

struct FBlacklistedUser {
	FUniqueNetIdRepl m_UniqueNetId; // 0x0
	FString m_PlayerName; // 0x18
};

struct FAdminAddLocalizedNewsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientCancelTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FAuthenticationValidateEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	ELoginIdentityProvider IdentityProvider; // 0x10
	UPlayFabJsonObject* Lineage; // 0x18
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FEconomySetInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingId; // 0x0
	uint16_t EvaluationPriority; // 0x10
	EEvaluationMethod EvaluationMethod; // 0x12
	TArray<FMovieSceneSegment> Segments; // 0x18
	TArray<FMovieSceneEvalTemplatePtr> ChildTemplates; // 0x28
	FMovieSceneTrackImplementationPtr TrackTemplate; // 0x38
	FName EvaluationGroup; // 0x70
	char bEvaluateInPreroll : 1; // 0x78
	char bEvaluateInPostroll : 1; // 0x78
};

struct FFlsLocalUserInfoList {
	TArray<FFlsLocalUserInfo> m_LocalUsers; // 0x0
};

struct FMultiplayerBuildAliasDetailsResponse : FPlayFabResultCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	int32_t PageSize; // 0x38
	FString SkipToken; // 0x40
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0x90
};

struct FClientUnlinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	FString PublicKeyHint; // 0x8
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FGameItemVersionsData {
	int32_t NewItemTemplateID; // 0x0
	int32_t NewItemTemplateIDVersion; // 0x4
	bool ResetAllStats; // 0x8
	TArray<EItemIntStatID> IntStatsToReset; // 0x10
	TArray<EItemFloatStatID> FloatStatsToReset; // 0x20
	TMap<EItemIntStatID, int32_t> IntStatsToOverride; // 0x30
	TMap<EItemFloatStatID, float> FloatStatsToOverride; // 0x80
	bool SetStackSizeToMax; // 0xd0
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FFlsLocalSessionList {
	TArray<FFlsLocalSessionInfo> m_LocalSessions; // 0x0
};

struct FAdminSetPublishedRevisionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString StatisticName; // 0x30
};

struct FColorOption : FTableRowBase {
	FLinearColor Color; // 0x8
};

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0x70
	bool bDisableBoneLog; // 0x80
	FVector Translation; // 0x84
	FRotator Rotation; // 0x90
	FVector Scale; // 0x9c
	EBoneModificationMode TranslationMode; // 0xa8
	EBoneModificationMode RotationMode; // 0xa9
	EBoneModificationMode ScaleMode; // 0xaa
	EBoneControlSpace TranslationSpace; // 0xab
	EBoneControlSpace RotationSpace; // 0xac
	EBoneControlSpace ScaleSpace; // 0xad
};

struct FClientUnlinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDeviceId; // 0x8
};

struct FAILODInfo {
	AActor* Actor; // 0x0
	char AILOD; // 0x8
	float NetCullDistanceSquared; // 0xc
};

struct FServerRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FAdminGetPlayerStatisticDefinitionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FClientLoginWithNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString NintendoSwitchDeviceId; // 0x28
	FString PlayerSecret; // 0x38
};

struct FPreviewMeshCollectionEntry {
	USkeletalMesh* SkeletalMesh; // 0x0
};

struct FEdGraphTerminalType {
	FString TerminalCategory; // 0x0
	FString TerminalSubCategory; // 0x10
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x20
	bool bTerminalIsConst; // 0x28
	bool bTerminalIsWeakPointer; // 0x29
};

struct FAdminGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FWidgetSnapshotRequest {
	FGuid TargetInstanceId; // 0x0
	FGuid SnapshotRequestId; // 0x10
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0xa0
	EAlphaBlendOption BlendOption; // 0xb8
	UCurveFloat* CustomCurve; // 0xc0
};

struct FMovieSceneObjectBindingPtr {
	FGuid Guid; // 0x0
};

struct FAdminBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FMultiplayerRolloverContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FClientLoginWithFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	FString FacebookInstantGamesSignature; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FEconomyUpdateSubscriptionRequest : FPlayFabRequestCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Subscription; // 0x18
};

struct FMultiplayerListVirtualMachineSummariesRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	int32_t PageSize; // 0x18
	FString Region; // 0x20
	FString SkipToken; // 0x30
};

struct FClientUnlinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceId; // 0x8
};

struct FExposedValueCopyRecord {
	UProperty* SourceProperty; // 0x0
	FName SourcePropertyName; // 0x8
	FName SourceSubPropertyName; // 0x10
	int32_t SourceArrayIndex; // 0x18
	UProperty* DestProperty; // 0x20
	int32_t DestArrayIndex; // 0x28
	int32_t Size; // 0x2c
	bool bInstanceIsTarget; // 0x30
	EPostCopyOperation PostCopyOperation; // 0x31
	ECopyType CopyType; // 0x32
	UProperty* CachedSourceProperty; // 0x38
	UProperty* CachedSourceStructSubProperty; // 0x40
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FLocalizedSubtitle {
	FString LanguageExt; // 0x0
	TArray<FSubtitleCue> Subtitles; // 0x10
	char bMature : 1; // 0x20
	char bManualWordWrap : 1; // 0x20
	char bSingleLine : 1; // 0x20
};

struct FAdminSetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEconomyCatalogSearchResult : FPlayFabResultCommon {
	int32_t Count; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x10
};

struct FPreviewAttachedObjectPair {
	UObject* AttachedObject; // 0x0
	UObject* Object; // 0x20
	FName AttachedTo; // 0x28
};

struct FPlaceablesInAreaData {
	TArray<APlaceableBase*> PlaceablesInArea; // 0x0
};

struct FEconomyReportItemRequest : FPlayFabRequestCommon {
	EConcernCategory Concern; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString itemID; // 0x18
	FString reason; // 0x28
};

struct FExperimentationGetExperimentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Experiments; // 0x8
};

struct FAnimNode_Base {
	FExposedValueHandler EvaluateGraphExposedInputs; // 0x8
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
	bool bImpartsVelocityOnRemoval; // 0x33
	FRootMotionMovementParams RootMotionParams; // 0x40
};

struct FAdminGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FClientLoginWithWindowsHelloRequest : FPlayFabRequestCommon {
	FString ChallengeSignature; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString PublicKeyHint; // 0x20
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FGroupsAcceptGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FMultiplayerUntagContainerImageRequest : FPlayFabRequestCommon {
	FString ImageName; // 0x8
	FString Tag; // 0x18
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x30
};

struct FServerRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerNotifyMatchmakerPlayerLeftResult : FPlayFabResultCommon {
	EPlayerConnectionState PlayerState; // 0x8
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FGfeSDKHighlightCloseGroupParams {
	FString GroupId; // 0x0
	bool DestroyHighlights; // 0x10
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
	FString TimeStamp; // 0x68
	FString TitleId; // 0x78
};

struct FLeaderboardsGetStatisticDefinitionRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FDataGetObjectsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Objects; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAdminGetTasksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FServerUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FSoundStageAudioDesc {
	USoundBase* SoundAsset; // 0x0
	FName Group; // 0x20
	float Priority; // 0x28
	float FadeInDelay; // 0x2c
	float FadeInDuration; // 0x30
	float FadeInVolume; // 0x34
	float FadeOutDelay; // 0x38
	float FadeOutDuration; // 0x3c
	float FadeOutVolume; // 0x40
};

struct FEconomyCreateBundleRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	UPlayFabJsonObject* Bundle; // 0x10
	FString IdempotencyId; // 0x18
};

struct FMultiplayerGetAssetUploadUrlResponse : FPlayFabResultCommon {
	FString AssetUploadUrl; // 0x8
	FString FileName; // 0x18
};

struct FServerGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FAdminRemovePlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMatchmakerAuthUserRequest : FPlayFabRequestCommon {
	FString AuthorizationTicket; // 0x8
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FClientGetPhotonAuthenticationTokenResult : FPlayFabResultCommon {
	FString PhotonCustomAuthenticationToken; // 0x8
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FAdminGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FServerGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMultiplayerEnableMultiplayerServersForTitleResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FNPCGrowthDataRow : FFCTableRow {
	FName RowType; // 0x8
	int32_t GrowthPoints; // 0x10
	int32_t BaseLevel; // 0x14
	float GrowthRatio; // 0x18
	float baseGrowthRate1; // 0x1c
	float baseGrowthRate2; // 0x20
	int32_t WeightStrength; // 0x24
	int32_t WeightAgility; // 0x28
	int32_t WeightVitality; // 0x2c
	int32_t WeightAccuracy; // 0x30
	int32_t WeightEncumbrance; // 0x34
	int32_t WeightSurvival; // 0x38
	float MaxStrength; // 0x3c
	float MaxAgility; // 0x40
	float MaxVitality; // 0x44
	float MaxAccuracy; // 0x48
	float MaxEncumbrance; // 0x4c
	float MaxSurvival; // 0x50
	int32_t BaseStrength; // 0x54
	int32_t BaseAgility; // 0x58
	int32_t BaseVitality; // 0x5c
	int32_t BaseAccuracy; // 0x60
	int32_t BaseEncumbrance; // 0x64
	int32_t BaseSurvival; // 0x68
	float BonusDamageMeleePercentagePerAttribute; // 0x6c
	float BonusArmorPerAttribute; // 0x70
	float BonusHealthPercentagePerAttribute; // 0x74
	float BonusDamageRangedPercentagePerAttribute; // 0x78
	float BonusEncumbrancePerAttribute; // 0x7c
};

struct FServerGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FMultiplayerCancelMatchmakingTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FStartPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FExilesJourneyTableRow : FGameItemTableRowBase {
	JourneyChapter chapter; // 0x10
	FText Name; // 0x18
	FText Description; // 0x30
	FText DescriptionDiscovered; // 0x48
	UTexture2D* Icon; // 0x60
	TArray<UTexture2D*> IconLayers; // 0x80
	FString AchievementName; // 0x90
	float JourneyXP; // 0xa0
	TArray<UWorld*> MapRestriction; // 0xa8
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FClientGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FMultiplayerCancelServerBackfillTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FServerGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FClientGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FServerMoveItemToCharacterFromCharacterRequest : FPlayFabRequestCommon {
	FString GivingCharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
	FString ReceivingCharacterId; // 0x38
};

struct FMultiplayerListBuildAliasesForTitleResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildAliases; // 0x8
};

struct FFlsReserveSessionRequest : FFlsPeerRegistrationRequest {
	FString GameVersion; // 0x20
	FString Platform; // 0x30
};

struct FAIDataProviderStructValue : FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FClientLinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	FString DeviceName; // 0x8
	bool ForceLink; // 0x18
	FString PublicKey; // 0x20
	FString userName; // 0x30
};

struct FEnergyDataTableRow : FTableRowBase {
	EnergyTypes Type; // 0x8
	float MinValue; // 0xc
	float MaxValue; // 0x10
};

struct FAdminGetPolicyRequest : FPlayFabRequestCommon {
	FString PolicyName; // 0x8
};

struct FFCProgressbarSegment {
	FProgressBarStyle Style; // 0x0
	float EndProgress; // 0x1b8
};

struct FClientUnlinkTwitchAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FProfilesSetDisplayNameResponse : FPlayFabResultCommon {
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
};

struct FAdminDeleteOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
};

struct FOldInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector2D LightmapUVBias; // 0x40
	FVector2D ShadowmapUVBias; // 0x48
};

struct FMultiplayerListServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FRichCurve SlomoCurve; // 0x18
};

struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Quotas; // 0x8
};

struct FClientUnlinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	FString DeviceID; // 0x8
};

struct FClientListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FMovieSceneSpawnable {
	FGuid Guid; // 0x0
	FString Name; // 0x10
	UObject* ObjectTemplate; // 0x20
	TArray<FGuid> ChildPossessables; // 0x28
	ESpawnOwnership Ownership; // 0x38
};

struct FClientGetAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString userName; // 0x38
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FTextureParameterValue {
	FName ParameterName; // 0x0
	UTexture* ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x1c0
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FClientSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FAdminUpdateStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	TArray<UPlayFabJsonObject*> Store; // 0x20
	FString StoreId; // 0x30
};

struct FClientRestoreIOSPurchasesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString ReceiptData; // 0x18
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FMovieSceneEvaluationField {
	TArray<FFloatRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FClientRestoreIOSPurchasesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FServerUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
	FString PlayFabId; // 0x48
};

struct FThrallTierEntry : FTableRowBase {
	EThrallProfession Profession; // 0x8
	TArray<EThrallTier> Tiers; // 0x10
};

struct FAdminGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FAdminGetMatchmakerGameInfoResult : FPlayFabResultCommon {
	FString BuildVersion; // 0x8
	FString EndTime; // 0x18
	FString LobbyId; // 0x28
	FString mode; // 0x38
	FString Players; // 0x48
	ERegion Region; // 0x58
	FString ServerIPV4Address; // 0x60
	FString ServerIPV6Address; // 0x70
	int32_t ServerPort; // 0x80
	FString ServerPublicDNSName; // 0x88
	FString StartTime; // 0x98
	FString TitleId; // 0xa8
};

struct FSTR_ComboLookupChains {
	FName ComboID_34_B64A8E8848C9DA7DF8310DAFBE1E4304; // 0x0
	E_ComboInput ComboInput_35_51F668DF4A47DF921312CABCF17F2FFB; // 0x8
	FEWeaponComboType WeaponComboTypeLead_43_18C626B74534F5AED55C469EC8A9FB93; // 0x10
	FEWeaponComboType WeaponComboTypeSupport_45_35ECC9034899AD62B4CAE891A87DE6A0; // 0x18
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FFloatDistribution {
	FDistributionLookupTable table; // 0x0
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve IntegerCurve; // 0x38
};

struct FEconomyGetDraftItemsResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	int32_t Count; // 0x18
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FGroupsDeleteRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
};

struct FMultiplayerListContainerImagesResponse : FPlayFabResultCommon {
	FString Images; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FPaperSpriteAtlasSlot {
	UPaperSprite* SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x20
	int32_t X; // 0x24
	int32_t Y; // 0x28
	int32_t Width; // 0x2c
	int32_t Height; // 0x30
};

struct FEconomyUpdateInventoryItemsPropertiesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FMultiplayerCreateMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Creator; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x18
	FString QueueName; // 0x28
};

struct FServerGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x8
};

struct FServerSendPushNotificationFromTemplateRequest : FPlayFabRequestCommon {
	FString PushNotificationTemplateId; // 0x8
	FString Recipient; // 0x18
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FRichCurve FadeCurve; // 0x18
	FLinearColor FadeColor; // 0x88
	char bFadeAudio : 1; // 0x98
};

struct FEconomySearchStoresRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t Top; // 0x60
};

struct FRewardsTableRow : FTableRowBase {
	TArray<int32_t> FeatIds; // 0x8
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
	bool bTemporarilyHiddenInGame; // 0xa8
};

struct FServerSendEmailFromTemplateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetStoreItemsServerRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString PlayFabId; // 0x18
	FString StoreId; // 0x28
};

struct FAdminUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
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

struct FClientUninkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FAutomationWorkerRunTests {
	uint32_t ExecutionCount; // 0x0
	int32_t RoleIndex; // 0x4
	FString TestName; // 0x8
	FString BeautifiedTestName; // 0x18
	bool bScreenshotsEnabled; // 0x28
	bool bSendAnalytics; // 0x29
};

struct FServerRemovePlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x40
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FStatNode : FFastArraySerializerItem {
	int32_t m_ID; // 0xc
	int32_t m_Flags; // 0x10
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x410
	FSlateSound SelectionChangeSlateSound; // 0x428
	FName PressedSound; // 0x440
	FName SelectionChangeSound; // 0x448
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
	UStructProperty* VectorProperty; // 0x28
};

struct FClientRemoveGenericIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x30
	USceneComponent* AttachComponent; // 0x38
};

struct FEconomyHelpfulnessVoteRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	bool IsHelpful; // 0x10
	FString ReviewId; // 0x18
};

struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	FColor Constant; // 0x3c
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FWeaponToComboPreset {
	WeaponArcheTypes WeaponType; // 0x0
	int32_t ComboPresetId; // 0x4
};

struct FStringAssetReference {
	FString AssetLongPathname; // 0x0
};

struct FAdminListOpenIdConnectionRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString XboxToken; // 0x18
};

struct FMultiplayerEnableMultiplayerServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FEconomyCreateOrUpdateReviewRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
	UPlayFabJsonObject* Review; // 0x20
};

struct FEconomyGetUgcItemModerationStateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* State; // 0x8
};

struct FPendingInventoryUnregistration {
	UItemInventory* inventory; // 0x0
	TArray<UGameItem*> GameItems; // 0x8
};

struct FClientGetPaymentTokenResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString ProviderToken; // 0x18
};

struct FLootTableWeightedRow : FTableRowBase {
	bool UseWeightTable; // 0x8
	bool UsePercentTable; // 0x9
	FDataTableRowHandle table; // 0x10
	FText ItemName; // 0x20
	int32_t itemID; // 0x38
	int32_t Min; // 0x3c
	int32_t Max; // 0x40
	float Weight; // 0x44
	float MinDurability; // 0x48
	float MaxDurability; // 0x4c
};

struct FRigidBodyErrorCorrection {
	float LinearDeltaThresholdSq; // 0x0
	float LinearInterpAlpha; // 0x4
	float LinearRecipFixTime; // 0x8
	float AngularDeltaThreshold; // 0xc
	float AngularInterpAlpha; // 0x10
	float AngularRecipFixTime; // 0x14
	float BodySpeedThresholdSq; // 0x18
};

struct FServerModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FServerSavePushNotificationTemplateResult : FPlayFabResultCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FDLCEntry {
	FString IconURL; // 0x0
	FString Title; // 0x10
	FString Description; // 0x20
	FString DLCPackageName; // 0x30
	bool IsOwned; // 0x40
	bool IsFree; // 0x41
	bool IsNew; // 0x42
};

struct FGameItemStatModificationRow : FFCTableRow {
	TArray<FGameItemStatModification> Modifications; // 0x8
};

struct FClientCurrentGamesResult : FPlayFabResultCommon {
	int32_t GameCount; // 0x8
	TArray<UPlayFabJsonObject*> Games; // 0x10
	int32_t PlayerCount; // 0x20
};

struct FClientSetPlayerSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetTimeRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
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

struct FServerGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FItemTableRow : FGameItemTableRowBase {
	FText Name; // 0x10
	FText ShortDesc; // 0x28
	FText LongDesc; // 0x40
	UTexture2D* Icon; // 0x58
	TArray<UTexture2D*> IconLayers; // 0x78
	UClass* ItemClass; // 0x88
	UClass* BuildingClass; // 0xa8
	UClass* VisualObject; // 0xc8
	UClass* ActionBlueprint_Use; // 0xe8
	int32_t MaxStackSize; // 0x108
	int32_t EquipLocation; // 0x10c
	EGameItemGUICategory GUICategory; // 0x110
	TArray<FName> ItemTags; // 0x118
	float ArmourValue; // 0x128
	int32_t ArmorType; // 0x12c
	int32_t SoundPhysicalSurface; // 0x130
	WeaponItemTypes WeaponType; // 0x134
	WeaponArcheTypes WeaponArcheType; // 0x135
	TArray<int32_t> CompatableAmmunitions; // 0x138
	int32_t SoundTransmitterType; // 0x148
	bool KnockbackResponseWeapon; // 0x14c
	int32_t WeaponStaminaAttackSingleBasic; // 0x150
	int32_t WeaponStaminaAttackSingleSpecial; // 0x154
	int32_t WeaponStaminaAttackDualBasic; // 0x158
	int32_t WeaponStaminaAttackDualSpecial; // 0x15c
	float WeaponStaminaHeavyChargedRegenModifier; // 0x160
	float WeaponSpeedHeavyChargedModifier; // 0x164
	float EncumbranceWeight; // 0x168
	float ConeAngle; // 0x16c
	float ConeMaxDistance; // 0x170
	int32_t DamageHealthLight_OnHit; // 0x174
	int32_t DamageHealthHeavy_OnHit; // 0x178
	int32_t DamageStaminaLight_OnHit; // 0x17c
	int32_t DamageStaminaHeavy_OnHit; // 0x180
	int32_t DamageHealthLight_OnBlock; // 0x184
	int32_t DamageHealthHeavy_OnBlock; // 0x188
	int32_t DamageStaminaLight_OnBlock; // 0x18c
	int32_t DamageStaminaHeavy_OnBlock; // 0x190
	int32_t HarvestDamage; // 0x194
	int32_t WeaponUsage; // 0x198
	float MaxAttackReach; // 0x19c
	float MinAttackReach; // 0x1a0
	float MinAttackDistance; // 0x1a4
	float WeaponEffectWidth; // 0x1a8
	float WeaponEffectHeight; // 0x1ac
	int32_t ItemTier; // 0x1b0
	float ArmorPen; // 0x1b4
	int32_t DamageConcussiveLightOnHit; // 0x1b8
	int32_t DamageConcussiveHeavyOnHit; // 0x1bc
	int32_t DamageConcussiveLightOnBlock; // 0x1c0
	int32_t DamageConcussiveHeavyOnBlock; // 0x1c4
	EDamageTiers DamageTier; // 0x1c8
	float CoolDownTime; // 0x1cc
	float ReuseTime; // 0x1d0
	int32_t SelectionWeight; // 0x1d4
	int32_t KnockbackOffenseBasic; // 0x1d8
	int32_t KnockbackOffenseSpecial; // 0x1dc
	int32_t KnockbackOffenseBasicOnBlock; // 0x1e0
	int32_t KnockbackOffenseSpecialOnBlock; // 0x1e4
	int32_t KnockbackDefense; // 0x1e8
	UStaticMesh* VisualStaticMesh; // 0x1f0
	USkeletalMesh* VisualSkeletalMesh; // 0x210
	UDestructibleMesh* VisualDestructibleMesh; // 0x230
	int32_t WeaponStatusDefault; // 0x250
	int32_t WeaponStatusCurrent; // 0x254
	int32_t WeaponStatusDecrement; // 0x258
	float PerishRate; // 0x25c
	int32_t PerishTo; // 0x260
	float MaxDurability; // 0x264
	int32_t RepairItem1; // 0x268
	int32_t RepairItem1_Amount; // 0x26c
	int32_t RepairItem1_Weight; // 0x270
	int32_t RepairItem2; // 0x274
	int32_t RepairItem2_Amount; // 0x278
	int32_t RepairItem2_Weight; // 0x27c
	int32_t RepairItem3; // 0x280
	int32_t RepairItem3_Amount; // 0x284
	int32_t RepairItem3_Weight; // 0x288
	int32_t AffectedByDamageTiers; // 0x28c
	int32_t BuildingPieceScore; // 0x290
	int32_t BuildingMaxHealth; // 0x294
	float repairXp; // 0x298
	FText FirstModifier; // 0x2a0
	FText SecondModifier; // 0x2b8
	FText ThirdModifier; // 0x2d0
	FText FourthModifier; // 0x2e8
	int32_t FoodAmount; // 0x300
	int32_t DrinkAmount; // 0x304
	float BurnTime; // 0x308
	int32_t ItemFlags; // 0x30c
	int32_t ItemContainerSize; // 0x310
	UClass* AvatarType; // 0x318
	int32_t DyeColourID; // 0x338
	int32_t WarPaintID; // 0x33c
	float StaminaCostMultiplier; // 0x340
	float StaminaClimbingCostMultiplier; // 0x344
	bool LeavesGhostItem; // 0x348
	FName DLCPackage; // 0x350
	FName SpawnTemplateID; // 0x358
};

struct FFlsLocalSessionInfo {
	FFlsHostInfo m_HostDevice; // 0x0
	FFlsHostConfig m_HostConfig; // 0x30
	FFlsSessionUserInfo m_HostUser; // 0x50
	FString m_HostUserName; // 0xb8
	FFlsSessionUserInfo m_LocalOwner; // 0xc8
	FString m_SessionName; // 0x130
	FString m_SessionId; // 0x140
	FString m_SessionMonitorInstanceId; // 0x150
	TArray<FFlsSessionUserInfo> m_Users; // 0x160
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x30
	FName CachePoseName; // 0x48
};

struct FActionSequence {
	TArray<EAttackTypeSimple> ActionSequence; // 0x0
};

struct FClientValidateIOSReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FAdminRevokeInventoryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
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

struct FQosSearchPass {
	int32_t RegionIdx; // 0x0
	int32_t CurrentSessionIdx; // 0x4
};

struct FAdminUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString PlayFabId; // 0x28
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FAdminDeleteContentRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
};

struct FClientCancelTradeRequest : FPlayFabRequestCommon {
	FString TradeId; // 0x8
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0xa0
	float PoseWeight; // 0xa8
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FPoseData> Poses; // 0x10
	TArray<FName> Tracks; // 0x20
	TMap<FName, int32_t> TrackMap; // 0x30
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FFlsSessionPlayerIds {
	TArray<FString> playerIds; // 0x0
};

struct FGroupsAddMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FServerRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FAdminSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	FVector Constant; // 0x3c
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x48
	int32_t Size; // 0x50
	FName FontName; // 0x58
	EFontHinting Hinting; // 0x60
};

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0x70
	FReferenceBoneFrame TwistFrame; // 0x90
	FAxis TwistPlaneNormalAxis; // 0xb0
	float RangeMax; // 0xc0
	float RemappedMin; // 0xc4
	float RemappedMax; // 0xc8
	FAnimCurveParam Curve; // 0xd0
};

struct FNPCPerksTableRow : FFCTableRow {
	FText DisplayName; // 0x8
	FName PerkType; // 0x20
	FText Description; // 0x28
	UTexture2D* Icon; // 0x40
	int32_t PerkWeight; // 0x48
	bool IsStatPerk; // 0x4c
	int32_t LevelRequirement; // 0x50
	TMap<ECharIntStatID, FAttributeRange> AttributeRange; // 0x58
	TMap<ECharIntStatID, int32_t> GrantedStats; // 0xa8
};

struct FNPCLevelCurve {
	FName Type; // 0x0
	TMap<int32_t, int32_t> XPRequirements; // 0x8
	TMap<int32_t, bool> PerkLevels; // 0x58
};

struct FRadialMenuTableRow : FTableRowBase {
	FText Label; // 0x8
	FText subtitle; // 0x20
	UTexture2D* IconTexture; // 0x38
	FStringAssetReference IconAsset; // 0x40
	int32_t UserCategory; // 0x50
	int32_t UserValue; // 0x54
	FName UserTag; // 0x58
	FName KeyShortcutName; // 0x60
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FPurgeConfigInfo : FTableRowBase {
	FName WaveName; // 0x8
	FText WaveDisplayName; // 0x10
	int32_t BuildingDamageMultiplierTier; // 0x28
	FVector2D AreaMin; // 0x2c
	FVector2D AreaMax; // 0x34
	TArray<FPurgeWave> Waves; // 0x40
	bool IsGlobalFallback; // 0x50
	bool IsStartingWave; // 0x51
	bool BlockPurgeInArea; // 0x52
};

struct FGameEvent {
	int64_t WorldTime; // 0x0
	float ServerTime; // 0x8
	FVector Location; // 0xc
	EGameEventType Type; // 0x18
	int64_t ObjectId; // 0x20
	FString ObjectName; // 0x28
	FGameEventPlayerInfo Owner; // 0x38
	FGameEventPlayerInfo Causer; // 0x68
	FString Details; // 0x98
	FReplicatedTMap ArgsMap; // 0xa8
	int32_t Stack; // 0xf8
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPausedComponent {
	UActorComponent* Component; // 0x8
};

struct FServerUpdatePlayerStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FHitResult {
	char bBlockingHit : 1; // 0x0
	char bStartPenetrating : 1; // 0x0
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
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x5c
	TWeakObjectPtr<AActor> Actor; // 0x64
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x6c
	FName BoneName; // 0x78
	int32_t FaceIndex; // 0x80
};

struct FServerSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
	FString Tags; // 0x28
};

struct FAdminUpdateStoreItemsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FEconomyCreateStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Store; // 0x18
};

struct FMatchmakerUserInfoResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> inventory; // 0x8
	bool IsDeveloper; // 0x18
	FString PlayFabId; // 0x20
	FString SteamId; // 0x30
	FString TitleDisplayName; // 0x40
	FString userName; // 0x50
	UPlayFabJsonObject* VirtualCurrency; // 0x60
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x68
};

struct FAdminRemoveServerBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FTriangleSortSettings {
	ETriangleSortOption TriangleSorting; // 0x0
	ETriangleSortAxis CustomLeftRightAxis; // 0x1
	FName CustomLeftRightBoneName; // 0x8
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerRefreshGameServerInstanceHeartbeatRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
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

struct FWorldContext {
	FURL LastURL; // 0xe8
	FURL LastRemoteURL; // 0x158
	UPendingNetGame* PendingNetGame; // 0x1c8
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x1d0
	TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1f0
	TArray<UObjectReferencer*> ObjectReferencers; // 0x218
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x228
	UGameViewportClient* GameViewport; // 0x238
	UGameInstance* OwningGameInstance; // 0x240
	TArray<FNamedNetDriver> ActiveNetDrivers; // 0x248
};

struct FMultiplayerCreateRemoteUserResponse : FPlayFabResultCommon {
	FString ExpirationTime; // 0x8
	FString password; // 0x18
	FString userName; // 0x28
};

struct FDyeInfo {
	int32_t DyeId; // 0x0
	int32_t StackSize; // 0x4
	FText Name; // 0x8
	FText Description; // 0x20
	UTexture2D* Icon; // 0x38
};

struct FEngineServiceAuthDeny {
	FString userName; // 0x0
	FString UserToDeny; // 0x10
};

struct FMultiplayerListVirtualMachineSummariesResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
	TArray<UPlayFabJsonObject*> VirtualMachines; // 0x20
};

struct FAuthenticationValidateEntityTokenRequest : FPlayFabRequestCommon {
	FString EntityToken; // 0x8
};

struct FAdminGetCloudScriptRevisionResult : FPlayFabResultCommon {
	FString CreatedAt; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool IsPublished; // 0x28
	int32_t Revision; // 0x2c
	int32_t Version; // 0x30
};

struct FProfilesSetAvatarUrlResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	EOperationTypes OperationResult; // 0x10
	int32_t ProfileVersion; // 0x14
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x30
	float Pitch; // 0x48
	float Yaw; // 0x4c
	FRotator MeshToComponent; // 0x50
};

struct FClientGetPaymentTokenRequest : FPlayFabRequestCommon {
	FString TokenProvider; // 0x8
};

struct FClientOpenTradeRequest : FPlayFabRequestCommon {
	FString AllowedPlayerIds; // 0x8
	FString OfferedInventoryInstanceIds; // 0x18
	FString RequestedCatalogItemIds; // 0x28
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

struct FCompactModInfo {
	FString Name; // 0x0
	FString SteamPublishedFileId; // 0x10
	FString MD5Hash; // 0x20
};

struct FGroupsListGroupApplicationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
};

struct FGfeSDKHighlightOpenGroupParams {
	FString GroupId; // 0x0
	TMap<FString, FString> GroupDescriptionTranslationTable; // 0x10
};

struct FEconomyGetCurrencyByIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Currency; // 0x8
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FStatFloatEntry {
	ECharFloatStatID statID; // 0x0
	float Value; // 0x4
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x30
	float Alpha; // 0x48
	FInputScaleBias AlphaScaleBias; // 0x4c
	int32_t LODThreshold; // 0x54
	float ActualAlpha; // 0x58
};

struct FServerGetLeaderboardAroundUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FCharacterIntParameters {
	int32_t Physique; // 0x0
	int32_t Voice; // 0x4
};

struct FKey {
	FName KeyName; // 0x0
};

struct FMultiplayerGetContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FLocationServicesData {
	float TimeStamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
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

struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x0
	FLinearColor SubsurfaceColor; // 0x4
	FLinearColor FalloffColor; // 0x14
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x30
	FPoseLink Additive; // 0x48
	float Alpha; // 0x60
	FInputScaleBias AlphaScaleBias; // 0x64
	int32_t LODThreshold; // 0x6c
	float ActualAlpha; // 0x70
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x878
	FSlateBrush UpArrowImage; // 0x8e0
	FSlateBrush DownArrowImage; // 0x970
	FSlateBrush GlassImage; // 0xa00
	FSlateBrush ClearImage; // 0xa90
	FMargin ImagePadding; // 0xb20
	bool bLeftAlignButtons; // 0xb30
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FSendAzureTextChatMessage {
	FString Text; // 0x0
	FString Recipient; // 0x10
};

struct FAdminRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FExperimentationGetTreatmentAssignmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FServerGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FServerEmptyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FServerGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FGroupsRemoveGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClothPhysicsProperties {
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

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
};

struct FLeaderboardsGetStatisticDefinitionsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticDefinitions; // 0x8
};

struct FComparisonResults {
	FString ApprovedPath; // 0x0
	FString IncomingPath; // 0x10
	FString DeltaPath; // 0x20
	TArray<FImageComparisonResult> Comparisons; // 0x30
	TArray<FString> Added; // 0x40
	TArray<FString> Missing; // 0x50
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

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FServerModMismatchList {
	bool bIsRequiredListComplete; // 0x0
	TArray<FServerModMismatchInfo> Required; // 0x8
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FSimplygonMaterialLODSettings {
	bool bActive; // 0x0
	EMaterialLODType MaterialLODType; // 0x1
	bool bUseAutomaticSizes; // 0x2
	ESimplygonTextureResolution TextureWidth; // 0x3
	ESimplygonTextureResolution TextureHeight; // 0x4
	ESimplygonTextureSamplingQuality SamplingQuality; // 0x5
	int32_t GutterSpace; // 0x8
	ESimplygonTextureStrech TextureStrech; // 0xc
	bool bReuseExistingCharts; // 0xd
	TArray<FSimplygonChannelCastingSettings> ChannelsToCast; // 0x10
	bool bBakeVertexData; // 0x20
	bool bBakeActorData; // 0x21
	bool bAllowMultiMaterial; // 0x22
	bool bPreferTwoSideMaterials; // 0x23
	FOutputMaterialInfo OutputMaterialInfo; // 0x28
};

struct FClientAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FClientGetPlayFabIDsFromGoogleIDsRequest : FPlayFabRequestCommon {
	FString GoogleIDs; // 0x8
};

struct FDataAbortFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0x70
	FBoneReference LeftHandFK; // 0x80
	FBoneReference RightHandIK; // 0x90
	FBoneReference LeftHandIK; // 0xa0
	TArray<FBoneReference> IKBonesToMove; // 0xb0
	float HandFKWeight; // 0xc0
};

struct FSuspendCallbackComponentEntry {
	TArray<FSuspendCallback> Callbacks; // 0x0
};

struct FMultiplayerListMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FServerDeletePushNotificationTemplateResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FImageComparisonResult {
	FString ApprovedFile; // 0x0
	FString IncomingFile; // 0x10
	FString ComparisonFile; // 0x20
	double MaxLocalDifference; // 0x30
	double GlobalDifference; // 0x38
	FText ErrorMessage; // 0x40
	FImageTolerance Tolerance; // 0x58
};

struct FGfeSDKHighlightDefinition {
	FString ID; // 0x0
	bool UserDefaultInterest; // 0x10
	EGfeSDKHighlightType HighlightTags; // 0x11
	EGfeSDKHighlightSignificance Significance; // 0x12
	TMap<FString, FString> NameTranslationTable; // 0x18
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<int32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FAdminRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerSetGameServerInstanceTagsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerMoveItemToUserFromCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FPendingInventoryUpdate {
	UItemInventory* m_Inventory; // 0x0
};

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x30
	TArray<FPoseLink> BlendPoses; // 0x48
	TArray<FInputBlendPose> LayerSetup; // 0x58
	TArray<float> BlendWeights; // 0x68
	bool bMeshSpaceRotationBlend; // 0x78
	ECurveBlendOption CurveBlendOption; // 0x79
	bool bBlendRootMotionBasedOnRootBone; // 0x7a
	bool bHasRelevantPoses; // 0x7b
};

struct FCloudScriptListFunctionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FVisualData {
	TArray<UObject*> VisualObjects; // 0x0
	int32_t AsyncSequenceNumber; // 0x10
};

struct FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FDataGetFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FMultiplayerCancelMatchmakingTicketRequest : FPlayFabRequestCommon {
	FString QueueName; // 0x8
	FString TicketId; // 0x18
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FServerUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FServerSetGameServerInstanceDataRequest : FPlayFabRequestCommon {
	FString GameServerData; // 0x8
	FString LobbyId; // 0x18
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FSpatialObjectSet {
	TSet<USceneComponent*> Set; // 0x0
};

struct FExperimentationCreateExperimentRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	int32_t Duration; // 0x18
	EExperimentType ExperimentType; // 0x1c
	FString Name; // 0x20
	int32_t PopulationPercentage; // 0x30
	FString SegmentId; // 0x38
	FString StartDate; // 0x48
	FString TitlePlayerAccountTestIds; // 0x58
	TArray<UPlayFabJsonObject*> Variants; // 0x68
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FModeMapping {
	FName ActionMapping; // 0x0
	FName KeyboardActionMapping; // 0x8
	FText OverridingLabel; // 0x10
	bool GamepadShowHold; // 0x28
	bool KeyboardShowHold; // 0x29
	FName AlternativeActionMapping; // 0x30
	bool KeyboardOnly; // 0x38
	bool GamepadOnly; // 0x39
};

struct FClientAcceptTradeRequest : FPlayFabRequestCommon {
	FString AcceptedInventoryInstanceIds; // 0x8
	FString OfferingPlayerId; // 0x18
	FString TradeId; // 0x28
};

struct FClientUnlinkFacebookInstantGamesIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FTTLinearColorTrack : FTTTrackBase {
	UCurveLinearColor* CurveLinearColor; // 0x10
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0x130
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FEconomyCraftRecipeByIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Ingredients; // 0x28
	UPlayFabJsonObject* Properties; // 0x38
	int32_t quantity; // 0x40
	FString RecipeId; // 0x48
	bool ReturnInventory; // 0x58
	UPlayFabJsonObject* Store; // 0x60
	FString Uaid; // 0x68
};

struct FAdminEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FSaddleTableRow : FFCTableRow {
	UClass* targetCharacter; // 0x8
	float RiderEnduranceDamageModifier; // 0x28
	float MountEnduranceDamageModifier; // 0x2c
	float WalkSpeed; // 0x30
	float RunSpeed; // 0x34
	float SprintSpeed; // 0x38
	float SprintEnduranceDrain; // 0x3c
	float SwimEnduranceDrain; // 0x40
	float EnduranceRegeneration; // 0x44
	FName AccelerationProfileID; // 0x48
};

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FServerEvaluateRandomResultTableResult : FPlayFabResultCommon {
	FString ResultItemId; // 0x8
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FServerSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FSubmixEffectReverbSettings {
	UReverbEffect* ReverbEffect; // 0x0
};

struct FFlsHostConfig {
	FString m_MapName; // 0x0
	FString m_GameMode; // 0x10
};

struct FAdminCheckLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	int32_t amount; // 0x8
};

struct FClientLoginWithFacebookRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FGroupsGetGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	FString GroupName; // 0x10
};

struct FServerGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FGroupsListMembershipOpportunitiesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
	TArray<UPlayFabJsonObject*> Invitations; // 0x18
};

struct FMatchmakerPlayerJoinedRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FServerGetServerCustomIDsFromPlayFabIDsRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FHistoricServer : FFavoriteServer {
	FDateTime LastConnected; // 0x38
};

struct FClientGetTradeStatusRequest : FPlayFabRequestCommon {
	FString OfferingPlayerId; // 0x8
	FString TradeId; // 0x18
};

struct FAdminUpdatePolicyRequest : FPlayFabRequestCommon {
	bool OverwritePolicy; // 0x8
	FString PolicyName; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x20
};

struct FLeaderboardsDeleteStatisticDefinitionRequest : FPlayFabRequestCommon {
	FString Name; // 0x8
};

struct FFlsBaseMessage {
	int32_t RequestID; // 0x0
	FString recipientType; // 0x8
	FString Recipient; // 0x18
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x58
	int32_t DefaultValue; // 0x68
	bool bUseDefaultValueBeforeFirstKey; // 0x6c
};

struct FGamepadKey : FTableRowBase {
	FName ActionName; // 0x8
	TArray<FKey> Keys; // 0x10
};

struct FMapMarkerTableRow : FTableRowBase {
	FText Name; // 0x8
	UTexture2D* Icon; // 0x20
	FVector Location; // 0x40
	float DiscoveryRadius; // 0x4c
	FName ExilesJourneyEvent; // 0x50
};

struct FGroupsInviteToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingApplication; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
};

struct FServerSetGameServerInstanceTagsRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	UPlayFabJsonObject* Tags; // 0x18
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
};

struct FEventsWriteEventsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> events; // 0x8
};

struct FClientGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : FPlayFabResultCommon {
	FString TitleId; // 0x8
	UPlayFabJsonObject* TitlePlayerAccounts; // 0x18
};

struct FGraniteCpuCache {
	FName PackageName; // 0x0
	int32_t SizeInMegabyte; // 0x8
	int32_t PageSizeInByte; // 0xc
	TArray<FString> TileSets; // 0x10
	int32_t NumLayersUsed; // 0x20
};

struct FServerUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	FString PlayFabId; // 0x20
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	FName Name; // 0x8
	ECollisionResponse DefaultResponse; // 0x10
	bool bTraceType; // 0x11
	bool bStaticObject; // 0x12
};

struct FWeightedSpawnTableRow : FTableRowBase {
	FName WeightedTableID; // 0x8
	FName NextWeightedTableID; // 0x10
	FName SpawnTableId; // 0x18
	float Weight; // 0x20
};

struct FAutomationWorkerImageComparisonResults {
	bool bNew; // 0x0
	bool bSimilar; // 0x1
};

struct FAdminSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FServerUnlinkServerCustomIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FComponentSpacePoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FGroupsRemoveGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueID; // 0x0
	FString ValidationStr; // 0x18
	float ElapsedTime; // 0x28
};

struct FServerGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FReplicationRemovedPieces {
	TArray<UInstancedBuildingComponent*> m_BuildingComponents; // 0x0
	TArray<FReplicationRemovedPiece> m_RemovedData; // 0x10
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FClientUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FString InputName; // 0x8
	int32_t Mask; // 0x18
	int32_t MaskR; // 0x1c
	int32_t MaskG; // 0x20
	int32_t MaskB; // 0x24
	int32_t MaskA; // 0x28
	FName ExpressionName; // 0x30
};

struct FMultiplayerCreateServerMatchmakingTicketRequest : FPlayFabRequestCommon {
	int32_t GiveUpAfterSeconds; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString QueueName; // 0x20
};

struct FClientLinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerSendCustomAccountRecoveryEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FProfilerServiceUnsubscribe {
	FGuid sessionId; // 0x0
	FGuid InstanceID; // 0x10
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x30
};

struct FAdminGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FServerGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FServerWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString TimeStamp; // 0x20
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FMeshReductionSettings {
	int32_t BaseLODModel; // 0x0
	EOptimizationMetric MetricToUse; // 0x4
	float PercentTriangles; // 0x8
	float ScreenSize; // 0xc
	float MaxDeviation; // 0x10
	float PixelError; // 0x14
	float WeldingThreshold; // 0x18
	EMeshFeatureImportance SilhouetteImportance; // 0x1c
	EMeshFeatureImportance TextureImportance; // 0x1d
	EMeshFeatureImportance ShadingImportance; // 0x1e
	EMeshFeatureImportance VertexColorImportance; // 0x1f
	bool bRecalculateNormals; // 0x20
	float HardAngleThreshold; // 0x24
	bool bActive; // 0x28
	bool bGenerateUniqueLightmapUVs; // 0x29
	bool bKeepSymmetry; // 0x2a
	bool bVisibilityAided; // 0x2b
	bool bCullOccluded; // 0x2c
	EMeshFeatureImportance VisibilityAggressiveness; // 0x2d
	bool bUseVertexWeights; // 0x2e
	bool bSimplifyMaterials; // 0x2f
	FSimplygonMaterialLODSettings MaterialLODSettings; // 0x30
	FMaterialProxySettings MaterialProxySettings; // 0xb0
};

struct FAdminModifyServerBuildRequest : FPlayFabRequestCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString CommandLineTemplate; // 0x28
	FString Comment; // 0x38
	FString ExecutablePath; // 0x48
	int32_t MaxGamesPerHost; // 0x58
	int32_t MinFreeGameSlots; // 0x5c
	FString TimeStamp; // 0x60
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FServerListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FEconomyDeleteSubscriptionByIdRequest : FPlayFabRequestCommon {
	FString ID; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FMovieSceneMarginSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve TopCurve; // 0x38
	FRichCurve LeftCurve; // 0xa8
	FRichCurve RightCurve; // 0x118
	FRichCurve BottomCurve; // 0x188
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x30
	FName SlotName; // 0x48
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceID; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunction* Function; // 0x10
};

struct FAdminResolvePurchaseDisputeRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	EResolutionOutcome Outcome; // 0x18
	FString PlayFabId; // 0x20
	FString reason; // 0x30
};

struct FServerGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetPlayFabIDsFromTwitchIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> inventory; // 0x8
	UPlayFabJsonObject* VirtualCurrency; // 0x18
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20
};

struct FDWTickHelper : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
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

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	float ForcedTime; // 0x4
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
	float X; // 0x58
	float Y; // 0x5c
	float Z; // 0x60
	float PlayRate; // 0x64
	bool bLoop; // 0x68
	float StartPosition; // 0x6c
	int32_t ResetInternalTimeCounter; // 0x70
	UBlendSpaceBase* BlendSpace; // 0x78
	FBlendFilter BlendFilter; // 0x80
	TArray<FBlendSampleData> BlendSampleDataCache; // 0x110
	UBlendSpaceBase* PreviousBlendSpace; // 0x120
	int32_t InternalResetInternalTimeCounter; // 0x128
};

struct FClientGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FGroupsUpdateGroupResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FClientLinkIOSDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x8
};

struct FAdminResetUserStatisticsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FEconomySetUgcItemModerationStateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
	FString reason; // 0x20
	EModerationStatus Status; // 0x30
};

struct FNiagaraConstant_Float : FNiagaraConstantBase {
	float Value; // 0x8
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariableInfo> Variables; // 0x10
};

struct FServerUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
};

struct FEconomyUpdateSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Subscription; // 0x18
};

struct FTimelineEventEntry {
	float Time; // 0x0
	DelegateProperty EventFunc; // 0x8
};

struct FGraniteGpuCache {
	FName PackageName; // 0x0
	int32_t SizeInMegabyte; // 0x8
	EGraniteTextureFormat TextureFormat; // 0xc
	EGraniteChannelTransform ChannelTransform; // 0xd
	int32_t TileWidth; // 0x10
	int32_t TileHeight; // 0x14
	TArray<FGraniteTileSetLayer> TileSetLayers; // 0x18
	EGraniteGPUCacheGroup gpuCacheGroup; // 0x28
};

struct FClientAttributeInstallResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEconomyCreateCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Currency; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FEconomySubtractVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FServerCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FServerUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	bool bEnableShadowCasting; // 0x8
	bool bRecomputeTangent; // 0x9
	FName MaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FNiagaraConstant_Matrix : FNiagaraConstantBase {
	FMatrix Value; // 0x10
};

struct FClientGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterName; // 0x18
	FString itemID; // 0x28
};

struct FServerUpdateUserInventoryItemDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString ItemInstanceId; // 0x20
	FString KeysToRemove; // 0x30
	FString PlayFabId; // 0x40
};

struct FAdminRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FEconomyUpdateStoreRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* Store; // 0x20
};

struct FClientLinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FServerAddPlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FClientGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FMovieSceneLevelVisibilitySharedTrack : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FFloatStatUpdateNode {
	int32_t m_ItemID; // 0x0
	EItemFloatStatID m_StatID; // 0x4
	float m_Value; // 0x8
};

struct FServerUnlinkServerCustomIdRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString ServerCustomId; // 0x18
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FClientGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> inventory; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FClientGetAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* AccountInfo; // 0x8
};

struct FProfilesSetDisplayNameRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	int32_t ExpectedVersion; // 0x20
};

struct FAdminUpdateCloudScriptRequest : FPlayFabRequestCommon {
	FString DeveloperPlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool Publish; // 0x28
};

struct FEquipmentTemplateTableRow : FTableRowBase {
	TArray<int32_t> MainHand; // 0x8
	TArray<int32_t> OffHand; // 0x18
	TArray<int32_t> Helmet; // 0x28
	TArray<int32_t> Torso; // 0x38
	TArray<int32_t> Legs; // 0x48
	TArray<int32_t> Hands; // 0x58
	TArray<int32_t> Feet; // 0x68
	TArray<int32_t> Backpack; // 0x78
	FSpawnTableRange durability; // 0x88
};

struct FClientAddGenericIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGameModeName {
	FString Name; // 0x0
	FStringClassReference GameMode; // 0x10
};

struct FEconomyCatalogSearchRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString Filter; // 0x10
	FString OrderBy; // 0x20
	FString Search; // 0x30
	FString Select; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t Top; // 0x60
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

struct FMultiplayerCreateMatchmakingTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FAdminResolvePurchaseDisputeResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FServerSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FAdminGetContentListRequest : FPlayFabRequestCommon {
	FString Prefix; // 0x8
};

struct FMultiplayerGetBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
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

struct FDataGetFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FEndPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FStaminaRegenTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FClientGameServerRegionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Regions; // 0x8
};

struct FGroupsListGroupApplicationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FMultiplayerGetCognitiveServicesTokenResponse : FPlayFabResultCommon {
	FString ExpirationTimeUtc; // 0x8
	FString ServiceEndpoint; // 0x18
	FString Token; // 0x28
};

struct FClientGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FLeaderboardsCreateStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	UPlayFabJsonObject* LeaderboardDefinition; // 0x10
	FString Name; // 0x18
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FClientUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
	FString SharedGroupId; // 0x28
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

struct FBodyInstance {
	FCollisionResponseContainer ResponseToChannels; // 0x14
	FName CollisionProfileName; // 0x38
	FCollisionResponse CollisionResponses; // 0x40
	char bUseCCD : 1; // 0x74
	char bNotifyRigidBodyCollision : 1; // 0x74
	char bSimulatePhysics : 1; // 0x74
	char bOverrideMass : 1; // 0x74
	char bEnableGravity : 1; // 0x74
	char bAutoWeld : 1; // 0x74
	char bStartAwake : 1; // 0x74
	char bGenerateWakeEvents : 1; // 0x74
	char bUpdateMassWhenScaleChanges : 1; // 0x74
	char bLockTranslation : 1; // 0x74
	char bLockRotation : 1; // 0x74
	char bLockXTranslation : 1; // 0x74
	char bLockYTranslation : 1; // 0x74
	char bLockZTranslation : 1; // 0x74
	char bLockXRotation : 1; // 0x74
	char bLockYRotation : 1; // 0x74
	char bLockZRotation : 1; // 0x74
	char bOverrideMaxAngularVelocity : 1; // 0x74
	char bUseAsyncScene : 1; // 0x74
	char bOverrideMaxDepenetrationVelocity : 1; // 0x74
	char bOverrideWalkableSlopeOnInstance : 1; // 0x74
	float MaxDepenetrationVelocity; // 0x78
	float MassInKgOverride; // 0x84
	float LinearDamping; // 0x88
	float AngularDamping; // 0x8c
	FVector CustomDOFPlaneNormal; // 0x90
	FVector COMNudge; // 0x9c
	float MassScale; // 0xa8
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xc0
	UPhysicalMaterial* PhysMaterialOverride; // 0xd0
	EHitlocation HitLocation; // 0xd8
	float MaxAngularVelocity; // 0xdc
	float CustomSleepThresholdMultiplier; // 0xe0
	float PhysicsBlendWeight; // 0xe4
	int32_t PositionSolverIterationCount; // 0xe8
	uint64_t RigidActorSyncId; // 0x118
	uint64_t RigidActorAsyncId; // 0x120
	int32_t VelocitySolverIterationCount; // 0x128
	ESleepFamily SleepFamily; // 0x22c
	EDOFMode DOFMode; // 0x22d
	ECollisionEnabled CollisionEnabled; // 0x22e
	ECollisionChannel ObjectType; // 0x22f
};

struct FBoxElement2D {
	FVector2D Center; // 0x0
	float Width; // 0x8
	float Height; // 0xc
	float Angle; // 0x10
};

struct FEconomyCreateDraftItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Item; // 0x10
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FDataInitiateFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> UploadDetails; // 0x18
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FClientAddOrUpdateContactEmailRequest : FPlayFabRequestCommon {
	FString EmailAddress; // 0x8
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : FPlayFabRequestCommon {
	FString MasterPlayerAccountIds; // 0x8
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FServerBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x30
	TArray<float> DesiredAlphas; // 0x40
	bool bAdditiveNode; // 0x50
	bool bNormalizeAlpha; // 0x51
	FInputScaleBias AlphaScaleBias; // 0x54
};

struct FQosDatacenterInfo {
	FText DisplayName; // 0x0
	FString RegionId; // 0x18
	bool bEnabled; // 0x28
	bool bVisible; // 0x29
	bool bBeta; // 0x2a
	TArray<FQosPingServerInfo> servers; // 0x30
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FClientGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
};

struct FStructSerializerBuiltinTestStruct {
	FGuid Guid; // 0x0
	FName Name; // 0x10
	FString String; // 0x18
	FRotator Rotator; // 0x28
	FText Text; // 0x38
	FVector Vector; // 0x50
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FGfeSDKCreateInputParams {
	FString AppName; // 0x0
	TArray<EGfeSDKScope> RequiredScopes; // 0x10
	bool PollForCallbacks; // 0x20
};

struct FAdminUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FMultiplayerDeleteBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
};

struct FClientPayForPurchaseRequest : FPlayFabRequestCommon {
	FString Currency; // 0x8
	FString OrderId; // 0x18
	FString ProviderName; // 0x28
	FString ProviderTransactionId; // 0x38
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0xb8
};

struct FGroupsEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerAwardSteamAchievementResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AchievementResults; // 0x8
};

struct FGroupsApplyToGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString Expires; // 0x10
	UPlayFabJsonObject* Group; // 0x20
};

struct FAdminGetServerBuildInfoRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FAutomationWorkerRequestTests {
	bool DeveloperDirectoryIncluded; // 0x0
	uint32_t RequestedTestFlags; // 0x4
};

struct FEconomySearchForItemsContainingItemByIdRequest : FPlayFabRequestCommon {
	EContainerType ContainerType; // 0x8
	FString IdempotencyId; // 0x10
	FString Ids; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
};

struct FClientCurrentGamesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString GameMode; // 0x18
	ERegion Region; // 0x28
	FString StatisticName; // 0x30
	UPlayFabJsonObject* TagFilter; // 0x40
};

struct FMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FMultiplayerGetServerBackfillTicketRequest : FPlayFabRequestCommon {
	bool EscapeObject; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FAINewSightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x98
	float RolloutAnimationSeconds; // 0x128
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	ANavigationData* PreferredNavData; // 0x18
};

struct FServerUpdateSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FCloudScriptUnregisterFunctionRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
};

struct FServerGetFriendsListRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString XboxToken; // 0x28
};

struct FClientGetLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	int32_t Version; // 0x38
};

struct FEconomyGrantInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FWeightedTableEntry {
	FName SpawnTableId; // 0x0
	FName NextWeightedTableID; // 0x8
	float Weight; // 0x10
};

struct FCraftingStationNameTableRow : FTableRowBase {
	FText StationName; // 0x8
	UTexture2D* StationIconOverlay; // 0x20
};

struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* FunctionResult; // 0x10
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FEconomyPublishStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
};

struct FCircularProgressbarSegment {
	UTexture2D* Texture; // 0x0
	FLinearColor ColorAndOpacity; // 0x8
	float EndProgress; // 0x18
};

struct FSoundConcurrencySettings {
	int32_t MaxCount; // 0x0
	char bLimitToOwner : 1; // 0x4
	EMaxConcurrentResolutionRule ResolutionRule; // 0x8
	float VolumeScale; // 0xc
};

struct FTTVectorTrack : FTTTrackBase {
	UCurveVector* CurveVector; // 0x10
};

struct FHateDataForTables {
	EHateType HateType; // 0x0
	FHateData HateData; // 0x4
};

struct FSpawnerIndex {
	FName SpawnerName; // 0x0
	int32_t SpawnPointStartIndex; // 0x8
	int32_t RoamingPathStartIndex; // 0xc
};

struct FSoundStageInfo {
	AudioState State; // 0x0
	FName Group; // 0x8
	float Priority; // 0x10
	float RemainingDelay; // 0x14
	float RemainingFade; // 0x18
	float FadeVolume; // 0x1c
};

struct FAdminExportMasterPlayerDataResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
};

struct FClientGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FAnimNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x30
	FPoseLink B; // 0x48
	float Alpha; // 0x60
	FInputScaleBias AlphaScaleBias; // 0x64
	float InternalBlendAlpha; // 0x6c
	bool bAIsRelevant; // 0x70
	bool bBIsRelevant; // 0x71
	bool bResetChildOnActivation; // 0x72
};

struct FEconomyPublishStatusResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> FailedScanResults; // 0x8
	EPublishResult Result; // 0x18
	FString StatusMessage; // 0x20
};

struct FSoundAttenuationSettings : FBaseAttenuationSettings {
	char bAttenuate : 1; // 0xa8
	char bSpatialize : 1; // 0xa8
	char bAttenuateWithLPF : 1; // 0xa8
	char bEnableListenerFocus : 1; // 0xa8
	char bEnableOcclusion : 1; // 0xa8
	char bUseComplexCollisionForOcclusion : 1; // 0xa8
	ESoundDistanceCalc DistanceType; // 0xac
	float OmniRadius; // 0xb0
	float StereoSpread; // 0xb4
	ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb8
	float RadiusMin; // 0xbc
	float RadiusMax; // 0xc0
	float LPFRadiusMin; // 0xc4
	float LPFRadiusMax; // 0xc8
	float LPFFrequencyAtMin; // 0xcc
	float LPFFrequencyAtMax; // 0xd0
	float FocusAzimuth; // 0xd4
	float NonFocusAzimuth; // 0xd8
	float FocusDistanceScale; // 0xdc
	float NonFocusDistanceScale; // 0xe0
	float FocusPriorityScale; // 0xe4
	float NonFocusPriorityScale; // 0xe8
	float FocusVolumeAttenuation; // 0xec
	float NonFocusVolumeAttenuation; // 0xf0
	ECollisionChannel OcclusionTraceChannel; // 0xf4
	float OcclusionLowPassFilterFrequency; // 0xf8
	float OcclusionVolumeAttenuation; // 0xfc
	float OcclusionInterpolationTime; // 0x100
	float ReverbWetLevelMin; // 0x104
	float ReverbWetLevelMax; // 0x108
	float ReverbDistanceMin; // 0x10c
	float ReverbDistanceMax; // 0x110
};

struct FEconomyGetDraftItemsRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	int32_t Count; // 0x18
	UPlayFabJsonObject* Entity; // 0x20
};

struct FGroupsCreateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FMultiplayerGetRemoteLoginEndpointRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString VmId; // 0x28
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x20
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
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

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	FNiagaraConstants ExternalConstants; // 0x8
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x38
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x48
};

struct FClientGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FServerEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBanInfo {
	bool bIsBanned; // 0x0
	bool bIsPermanentBan; // 0x1
	int32_t BanDuration; // 0x4
	EBanInfoReasons BanReasonId; // 0x8
	FString BanReason; // 0x10
	FDateTime BanEndDate; // 0x20
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x18
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x28
	TArray<FColorParameterNameAndCurves> Colors; // 0x38
};

struct FGroupsListGroupInvitationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Invitations; // 0x8
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FClientUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	FString XboxToken; // 0x8
};

struct FServerGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FCustomInput {
	FString InputName; // 0x0
	FExpressionInput Input; // 0x10
};

struct FSlowAIControllerTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FAdminBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x98
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FMultiplayerGetMatchRequest : FPlayFabRequestCommon {
	bool EscapeObject; // 0x8
	FString MatchID; // 0x10
	FString QueueName; // 0x20
	bool ReturnMemberAttributes; // 0x30
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FPetFoodItem {
	FItemTableRowHandle ItemTableRow; // 0x0
	float NutritionAmount; // 0x8
	FFoodBonusData FoodBonus; // 0xc
};

struct FAdminGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FClientRegisterForIOSPushNotificationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FClientWriteClientCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString TimeStamp; // 0x30
};

struct FArmourSlotDyeParams {
	int32_t Channel1; // 0x0
	int32_t Channel2; // 0x4
	int32_t Channel3; // 0x8
	int32_t Channel4; // 0xc
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x20
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
};

struct FAnimNode_SubInstance : FAnimNode_Base {
	FPoseLink InPose; // 0x30
	UAnimInstance* InstanceClass; // 0x48
	UAnimInstance* InstanceToRun; // 0x50
	TArray<UProperty*> InstanceProperties; // 0x58
	TArray<UProperty*> SubInstanceProperties; // 0x68
	TArray<FName> SourcePropertyNames; // 0x78
	TArray<FName> DestPropertyNames; // 0x88
};

struct FProfilesGetEntityProfilesRequest : FPlayFabRequestCommon {
	bool DataAsObject; // 0x8
	TArray<UPlayFabJsonObject*> Entities; // 0x10
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FConvexElement2D {
	TArray<FVector2D> VertexData; // 0x0
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	int32_t SegmentIndex; // 0x8
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FLeaderboardsGetLeaderboardForEntitiesRequest : FPlayFabRequestCommon {
	FString ChildName; // 0x8
	FString Entities; // 0x18
	FString EntityType; // 0x28
	FString StatisticName; // 0x38
	int32_t StatisticVersion; // 0x48
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x1f8
};

struct FAdminIncrementLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString CatalogVersion; // 0x10
	FString itemID; // 0x20
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FMaterialSimplificationSettings {
	FIntPoint BaseColorMapSize; // 0x0
	bool bNormalMap; // 0x8
	FIntPoint NormalMapSize; // 0xc
	float MetallicConstant; // 0x14
	bool bMetallicMap; // 0x18
	FIntPoint MetallicMapSize; // 0x1c
	float RoughnessConstant; // 0x24
	bool bRoughnessMap; // 0x28
	FIntPoint RoughnessMapSize; // 0x2c
	float SpecularConstant; // 0x34
	bool bSpecularMap; // 0x38
	FIntPoint SpecularMapSize; // 0x3c
};

struct FClientUnlinkNintendoSwitchDeviceIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEconomyUpdateBundleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
};

struct FBackgroundLoadingScreenStructure : FTableRowBase {
	FString BackgroundPath; // 0x8
	FString UltraWidePath; // 0x18
};

struct FServerRentalCustomer : FSpsType {
	FString CustomerID; // 0x8
	TArray<FServerRentalGameServer> GamerServerList; // 0x18
};

struct FClientLoginWithSteamRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString EncryptedRequest; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PlayerSecret; // 0x28
	FString SteamTicket; // 0x38
};

struct FStatNodeInt32 : FStatNode {
	int32_t m_Value; // 0x14
	int32_t m_DefaultValue; // 0x18
	TArray<FStatModifierInt32> m_Modifiers; // 0x20
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x8
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
};

struct FEconomyCreateUploadUrlsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FUpdateDecayContext {
	bool DecayPreviouslyDisabled; // 0x0
	bool DecayEnabledNewTimestamp; // 0x1
	bool AllowOverride; // 0x2
	bool PropagateDecay; // 0x3
	bool RegisterDecay; // 0x4
	bool MarkRepDirty; // 0x5
	bool MarkPersistenceDirty; // 0x6
	bool AddTimestampBonus; // 0x7
};

struct FAdminAddLocalizedNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	FString Language; // 0x18
	FString NewsId; // 0x28
	FString Title; // 0x38
};

struct FServerGameTweakValue {
	FName TweakName; // 0x0
	FString TweakValue; // 0x8
};

struct FExpressionOutput {
	FString OutputName; // 0x0
	int32_t Mask; // 0x10
	int32_t MaskR; // 0x14
	int32_t MaskG; // 0x18
	int32_t MaskB; // 0x1c
	int32_t MaskA; // 0x20
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x78
};

struct FTeamMessage {
	FTargetWrapper Target; // 0x0
	AConanCharacter* EventInstigator; // 0x18
	ETeamMessageType MessageType; // 0x20
	FVector EventLocation; // 0x24
};

struct FServerSendPushNotificationRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> AdvancedPlatformDelivery; // 0x8
	FString Message; // 0x18
	UPlayFabJsonObject* Package; // 0x28
	FString Recipient; // 0x30
	FString Subject; // 0x40
	FString TargetPlatforms; // 0x50
};

struct FServerUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FClientRemoveContactEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FMultiplayerDeleteAssetRequest : FPlayFabRequestCommon {
	FString FileName; // 0x8
};

struct FFontParameterValue {
	FName ParameterName; // 0x0
	UFont* FontValue; // 0x8
	int32_t FontPage; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMultiplayerGetMultiplayerServerDetailsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString sessionId; // 0x28
};

struct FMultiplayerUpdateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
};

struct FTimeline {
	ETimelineLengthMode LengthMode; // 0x0
	float Length; // 0x4
	char bLooping : 1; // 0x8
	char bReversePlayback : 1; // 0x8
	char bPlaying : 1; // 0x8
	float PlayRate; // 0xc
	float Position; // 0x10
	TArray<FTimelineEventEntry> events; // 0x18
	TArray<FTimelineVectorTrack> InterpVectors; // 0x28
	TArray<FTimelineFloatTrack> InterpFloats; // 0x38
	TArray<FTimelineLinearColorTrack> InterpLinearColors; // 0x48
	DelegateProperty TimelinePostUpdateFunc; // 0x58
	DelegateProperty TimelineFinishedFunc; // 0x68
	TWeakObjectPtr<UObject> PropertySetObject; // 0xc0
	FName DirectionPropertyName; // 0xc8
	UProperty* DirectionProperty; // 0xd0
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FServerEvaluateRandomResultTableRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableId; // 0x18
};

struct FAuthenticationDeleteAPIKeyRequest : FPlayFabRequestCommon {
	FString APIKeyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
};

struct FSpawnTableRow : FFCTableRow {
	FText Name; // 0x8
	FRaceEntry MaleRaceTemplate; // 0x20
	FRaceEntry FemaleRaceTemplate; // 0x30
	TArray<FName> EquipmentTemplates; // 0x40
	FName ProfessionTemplate; // 0x50
	FName StatTemplate; // 0x58
	TArray<FName> StatModifierTemplate; // 0x60
	TArray<FWeaponToComboPreset> ComboPresets; // 0x70
	UClass* NPCClass; // 0x80
	UBehaviorTree* BehaviorTree; // 0xa0
	UClass* AIController; // 0xc0
	UClass* NPCBehaviorParameters; // 0xe0
	FDataTableRowHandle LootTable; // 0x100
	EHealthBarStyle HealthBarStyle; // 0x110
	float DistanceThresholdRangedWeapon; // 0x114
	float DistanceThresholdMeleeWeapon; // 0x118
	float BlockActionMinDuration; // 0x11c
	float BlockOnAttackedMinDuration; // 0x120
	float BlockMaxDuration; // 0x124
	float BlockChance; // 0x128
	float BlockChanceWhenAttacked; // 0x12c
	int32_t MaxKnockbackChainTime; // 0x130
	int32_t KnockbackImmunityPeriod; // 0x134
	FName LevelCurveID; // 0x138
	FName GrowthID; // 0x140
	FName PerkType; // 0x148
	FName AIDataPreset; // 0x150
	FName MountTypeID; // 0x158
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FAdminCreatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FMapCoordinatesAndSpans {
	FVector2D NorthEastWorld; // 0x0
	FVector2D SouthWestWorld; // 0x8
	FVector2D WorldSpan; // 0x10
	FVector2D NorthEastImage; // 0x18
	FVector2D SouthWestImage; // 0x20
	FVector2D ImageSpan; // 0x28
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	FString Map; // 0x28
	FString RedirectURL; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
	int32_t Valid; // 0x68
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

struct FClientLinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	bool ForceLink; // 0x18
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x130
	int32_t LODThreshold; // 0x148
	bool bIsLODEnabled; // 0x14c
};

struct FDataDeleteFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
	int32_t ProfileVersion; // 0x20
};

struct FStatArrayFloat : FFastArraySerializer {
	TArray<FStatNodeFloat> FloatStatArray; // 0xb0
};

struct FClientRemoveSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x18
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FEconomyPurchaseItemByIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	TArray<UPlayFabJsonObject*> Currencies; // 0x10
	UPlayFabJsonObject* Entity; // 0x20
	FString IdempotencyId; // 0x28
	FString itemID; // 0x38
	UPlayFabJsonObject* Properties; // 0x48
	int32_t quantity; // 0x50
	bool ReturnInventory; // 0x54
	UPlayFabJsonObject* Store; // 0x58
	FString Uaid; // 0x60
};

struct FServerUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	bool ForceUpdate; // 0x8
	FString PlayFabId; // 0x10
	TArray<UPlayFabJsonObject*> Statistics; // 0x20
};

struct FAdminSendAccountRecoveryEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FCaptureResolution {
	uint32_t ResX; // 0x0
	uint32_t ResY; // 0x4
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0xc8
};

struct FServerMoveItemToUserFromCharacterResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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

struct FMovieSceneSequencePlaybackSettings {
	int32_t LoopCount; // 0x0
	float PlayRate; // 0x4
	bool bRandomStartTime; // 0x8
	float StartTime; // 0xc
	bool bRestoreState; // 0x10
	TScriptInterface<Class> BindingOverrides; // 0x18
};

struct FPlayFabLoginResultCommon : FPlayFabResultCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
};

struct FServerAddSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FEconomySearchRecipesRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t Top; // 0x60
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
	FString TimeStamp; // 0x68
	FString TitleId; // 0x78
};

struct FAuthenticationDeleteAPIKeyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString PlayFabId; // 0x30
	FString StatisticName; // 0x40
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

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FAdminUpdateCatalogItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
	FString CatalogVersion; // 0x18
	bool SetAsDefaultCatalog; // 0x28
};

struct FMultiplayerUpdateBuildRegionsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> BuildRegions; // 0x18
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

struct FClientSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FEconomyGetBundleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x20
};

struct FMultiplayerListMultiplayerServersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FClientPurchaseItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString itemID; // 0x28
	int32_t Price; // 0x38
	FString StoreId; // 0x40
	FString VirtualCurrency; // 0x50
};

struct FTargetingWidgetStatus {
	float TimeOfFadeOut; // 0x0
	AActor* TargetedActor; // 0x8
	UConanWidgetComponent* Component; // 0x10
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

struct FClientGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FClientUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	FString KeyItemInstanceId; // 0x38
};

struct FAutomatedTestPassResults {
	int32_t NumSucceeded; // 0x0
	int32_t NumFailed; // 0x4
	int32_t NumNotRun; // 0x8
	TArray<FAutomatedTestResult> TestInformation; // 0x10
};

struct FAdminRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FStatArrayInt32 : FFastArraySerializer {
	TArray<FStatNodeInt32> IntStatArray; // 0xb0
};

struct FEWeaponComboType : FStringEnumValue {
	FName Name; // 0x0
};

struct FEconomyDeleteStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FAdminGetTasksResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Tasks; // 0x8
};

struct FServerRemoveSharedGroupMembersResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminGetDataReportResult : FPlayFabResultCommon {
	FString DownloadUrl; // 0x8
};

struct FClientLoginWithOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	FString IdToken; // 0x30
	UPlayFabJsonObject* InfoRequestParameters; // 0x40
	FString PlayerSecret; // 0x48
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0x38
};

struct FEconomySearchInStoreResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
};

struct FServerCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FAdminDeleteTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAdminGetTaskInstanceRequest : FPlayFabRequestCommon {
	FString TaskInstanceId; // 0x8
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FServerReportPlayerServerResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FRootMotionSource_RadialForce : FRootMotionSource {
	FVector Location; // 0x80
	AActor* LocationActor; // 0x90
	float Radius; // 0x98
	float Strength; // 0x9c
	bool bIsPush; // 0xa0
	bool bNoZForce; // 0xa1
	UCurveFloat* StrengthDistanceFalloff; // 0xa8
	UCurveFloat* StrengthOverTime; // 0xb0
	bool bUseFixedWorldDirection; // 0xb8
	FRotator FixedWorldDirection; // 0xbc
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x48
};

struct FServerGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	int32_t MaxBatchSize; // 0x18
	int32_t SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FOpenTestAsset {
	FFilePath AssetToOpen; // 0x0
	bool bSkipTestWhenUnAttended; // 0x10
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FAnimUpdateRateParameters {
	int32_t UpdateRate; // 0x4
	int32_t EvaluationRate; // 0x8
	bool bInterpolateSkippedFrames; // 0xc
	bool bShouldUseLodMap; // 0xd
	bool bSkipUpdate; // 0xe
	bool bSkipEvaluation; // 0xf
	float TickedPoseOffestTime; // 0x10
	float AdditionalTime; // 0x14
	int32_t BaseNonRenderedUpdateRate; // 0x1c
	TArray<float> BaseVisibleDistanceFactorThesholds; // 0x20
	TMap<int32_t, int32_t> LODToFrameSkipMap; // 0x30
	int32_t MaxEvalRateForInterpolation; // 0x80
	EUpdateRateShiftBucket ShiftBucket; // 0x84
};

struct FServerRentalGameServer : FSpsType {
	int32_t GameServerID; // 0x8
	int32_t LocationID; // 0xc
	FString CustomerID; // 0x10
	FString Name; // 0x20
	FString ServerPassword; // 0x30
	FString AdminPassword; // 0x40
	FString IPAddress; // 0x50
	int32_t Port; // 0x60
	int32_t SlotSize; // 0x64
	int32_t CurrentSlots; // 0x68
	float Expires; // 0x6c
	bool IsOnline; // 0x70
	EGameServerState State; // 0x71
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

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	int32_t Index; // 0x8
	FRichCurve ParameterCurve; // 0x10
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	ESnapshotSourceMode mode; // 0x30
	FName SnapshotName; // 0x38
	FPoseSnapshot Snapshot; // 0x40
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char IsValid; // 0x10
};

struct FAnimNode_SubInput : FAnimNode_Base {
	FExposedValueHandler EvaluateGraphExposedInputs; // 0x8
};

struct FAdminSetupPushNotificationRequest : FPlayFabRequestCommon {
	FString Credential; // 0x8
	FString Key; // 0x18
	FString Name; // 0x28
	bool OverwriteOldARN; // 0x38
	EPushSetupPlatform Platform; // 0x39
};

struct FClientGetTradeStatusResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FMultiplayerCreateServerBackfillTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FPotentialBuildGhost {
	ABuildableBase* TargetBuildable; // 0x0
	int32_t TargetSocketIndex; // 0x8
	int32_t SourceSocketIndex; // 0xc
	ESocketConfiguration configuration; // 0x10
	FTransform ActorTransform; // 0x20
	FTransform MeshTransform; // 0x50
	ECanBePlacedResult CanBePlacedResult; // 0x80
	FString FailReason; // 0x88
	bool SameObjectAlreadyExists; // 0x98
	bool IsTierUpgrade; // 0x99
};

struct FFlsBaseApiMessage : FFlsBaseMessage {
	FString Command; // 0x28
	FString Params; // 0x38
};

struct FAdminAbortTaskInstanceRequest : FPlayFabRequestCommon {
	FString TaskInstanceId; // 0x8
};

struct FAwakeTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FGroupsListMembershipResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Groups; // 0x8
};

struct FMovieScene2DTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FRichCurve Translation[0x2]; // 0x38
	FRichCurve Rotation; // 0x118
	FRichCurve Scale[0x2]; // 0x188
	FRichCurve Shear[0x2]; // 0x268
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0xa0
	FBoneReference SourceBone; // 0xb8
	float RadialScaling; // 0xc8
	bool bIncludeRefPoseAsNeutralPose; // 0xcc
	EPoseDriverType Type; // 0xcd
	EBoneAxis TwistAxis; // 0xce
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FGameEventsFilterParams {
	UUniqueID* PlayerContextUniqueId; // 0x0
	FVector Location; // 0x8
	float LocationRadius; // 0x14
	int32_t Limit; // 0x18
	int32_t TimeDays; // 0x1c
	TArray<EGameEventViewType> EventTypes; // 0x20
};

struct FEconomyDeleteStoreByFriendlyIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FriendlyId; // 0x10
	FString IdempotencyId; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FServerModifyCharacterVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FServerGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
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

struct FMovieSceneAdditiveCameraAnimationTrackTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FEconomyUpdateCatalogConfigResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FItemTemplateTableRow : FFCTableRow {
	int32_t ItemTemplate; // 0x8
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FAnimNode_MeshSpaceRefPose : FAnimNode_Base {
	FExposedValueHandler EvaluateGraphExposedInputs; // 0x8
};

struct FAdminCreatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FEconomyGetRecipeByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FHarvestFoliageInfo {
	FBox AABB; // 0x0
};

struct FClientGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FBaseEnergy {
	EnergyTypes EnergyType; // 0x0
	float Force; // 0x4
	float MinRadius; // 0x8
	float MaxRadius; // 0xc
	bool UseDifferentialForce; // 0x10
	bool UseStatForce; // 0x11
	ECharFloatStatID DynamicForceStat; // 0x12
	bool LimitUpper; // 0x13
	float MaxEnergy; // 0x14
	bool LimitLower; // 0x18
	float MinEnergy; // 0x1c
	bool UseEnergyReceiverMinMax; // 0x20
	bool UseStatMinMax; // 0x21
	ECharFloatStatID StatMinMaxEnergy; // 0x22
	bool SubEnergyMap; // 0x23
	UEnergyHeatmapData* EnergyMap; // 0x28
	UEnergyHeatmapData* EnergyMapPtr; // 0x48
	bool RelativeMapPosition; // 0x50
	FVector2D TopLeft; // 0x54
	FVector2D BottomRight; // 0x5c
	bool IsEnabled; // 0x64
};

struct FClientGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FEngineServiceAuthGrant {
	FString userName; // 0x0
	FString UserToGrant; // 0x10
};

struct FServerSetPlayerSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FStatTemplateTableRow : FTableRowBase {
	FName templateID; // 0x8
	EStatTableType Type; // 0x10
	int32_t statID; // 0x14
	float Value; // 0x18
};

struct FEconomyTakedownReviewsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
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

struct FClientUnlinkCustomIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FImageTolerance {
	char Red; // 0x0
	char Green; // 0x1
	char Blue; // 0x2
	char Alpha; // 0x3
	char MinBrightness; // 0x4
	char MaxBrightness; // 0x5
	bool IgnoreAntiAliasing; // 0x6
	bool IgnoreColors; // 0x7
	float MaximumLocalError; // 0x8
	float MaximumGlobalError; // 0xc
};

struct FClientLoginWithCustomIDRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	FString CustomId; // 0x10
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FProcMeshVertex {
	FVector Position; // 0x0
	FVector Normal; // 0xc
	FProcMeshTangent Tangent; // 0x18
	FColor Color; // 0x28
	FVector2D UV0; // 0x2c
};

struct FAdminGetCloudScriptAzureFunctionsTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FFlsGameSession {
	FString GameVersion; // 0x0
	FString ID; // 0x10
	FString publicSessionId; // 0x20
	FFlsSessionMonitorHostInfo hostInfo; // 0x30
	FFlsServerConfig actualConfig; // 0x60
	FFlsNativeSessionInfo nativeSessionInfo; // 0x80
	TArray<FFlsPeer> peers; // 0x98
	FFlsSessionMonitorIpAddress sessionMonitorIPAddress; // 0xa8
};

struct FClientLinkKongregateAccountRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	bool ForceLink; // 0x18
	FString KongregateId; // 0x20
};

struct FAdminGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FServerRating {
	EStarRating Fun; // 0x0
	EStarRating Reliability; // 0x1
	EStarRating Admin; // 0x2
};

struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FAdminGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	int32_t MaxBatchSize; // 0x18
	int32_t SecondsToLive; // 0x1c
	FString SegmentId; // 0x20
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x30
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

struct FCharacterListData {
	UUniqueID* UID; // 0x0
	bool isAlive; // 0x8
};

struct FServerConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FEmotesMenuCategoryTableRow : FFCTableRow {
	EEmoteCategories Category; // 0x8
	UTexture2D* Icon; // 0x10
	FText Label; // 0x30
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
	char bFormExtendedStructures : 1; // 0x0
};

struct FServerUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	FString PlayFabId; // 0x38
};

struct FEnvironmentArea {
	FVector Center; // 0x0
	AVolume* Volume; // 0x10
	float Priority; // 0x18
	float Radius; // 0x1c
	float FadeExponent; // 0x20
	float CoefficientOverride; // 0x24
};

struct FCharacterResolvedTints {
	FLinearColor SkinColour; // 0x0
	FLinearColor HairColour; // 0x10
	FLinearColor FacialHairColour; // 0x20
	FLinearColor EyeColour; // 0x30
	FLinearColor EyebrowColour; // 0x40
	FLinearColor MakeupEyeColour; // 0x50
	FLinearColor MakeupLipColour; // 0x60
	FLinearColor WarpaintColour; // 0x70
};

struct FProfilerServicePreviewAck {
	FGuid InstanceID; // 0x0
};

struct FAutomatedTestResult {
	FString TestName; // 0x0
	FString TestResult; // 0x10
	TArray<FString> TestInfo; // 0x20
	TArray<FString> TestErrors; // 0x30
	TArray<FString> TestWarnings; // 0x40
};

struct FAdminGetPlayerProfileRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FEconomyGetCurrencyByIdRequest : FPlayFabRequestCommon {
	FString CurrencyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
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
	int32_t MaxParticleCount; // 0x184
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

struct FClientGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FRaceTemplateTableRow : FTableRowBase {
	FName StatModifierTemplate; // 0x8
	TArray<int32_t> Hair; // 0x10
	TArray<int32_t> FacialHair; // 0x20
	TArray<int32_t> Head; // 0x30
	TArray<int32_t> Forearms; // 0x40
	TArray<int32_t> Hands; // 0x50
	TArray<int32_t> UpperBody; // 0x60
	TArray<int32_t> LowerBody; // 0x70
	TArray<int32_t> Legs; // 0x80
	TArray<int32_t> Feet; // 0x90
	TArray<int32_t> EyebrowTexture; // 0xa0
	TArray<int32_t> EyeTexture; // 0xb0
	TArray<int32_t> LipTexture; // 0xc0
	TArray<int32_t> WarpaintFaceTexture; // 0xd0
	TArray<int32_t> WarpaintBodyTexture; // 0xe0
	TArray<int32_t> WarpaintHandsTexture; // 0xf0
	TArray<int32_t> Skin; // 0x100
	TArray<int32_t> HairTint; // 0x110
	TArray<int32_t> FacialHairTint; // 0x120
	TArray<int32_t> Eyes; // 0x130
	TArray<int32_t> Eyebrows; // 0x140
	TArray<int32_t> EyeMakeup; // 0x150
	TArray<int32_t> LipMakeup; // 0x160
	TArray<int32_t> Warpaint; // 0x170
	TArray<bool> IsFemale; // 0x180
	TArray<int32_t> Physique; // 0x190
	TArray<int32_t> Voice; // 0x1a0
	FSpawnTableRange Height; // 0x1b0
	FSpawnTableRange Bust; // 0x1b8
	FSpawnTableRange Dick; // 0x1c0
	FSpawnTableRange EyeAngle; // 0x1c8
	FSpawnTableRange EyeSize; // 0x1d0
	FSpawnTableRange EyeDepth; // 0x1d8
	FSpawnTableRange NoseWidth; // 0x1e0
	FSpawnTableRange NoseSize; // 0x1e8
	FSpawnTableRange NoseCurve; // 0x1f0
	FSpawnTableRange JawWidth; // 0x1f8
	FSpawnTableRange CheekHeight; // 0x200
	FSpawnTableRange CheekWidth; // 0x208
	FSpawnTableRange ChinWidth; // 0x210
	FSpawnTableRange EarAngle; // 0x218
	FSpawnTableRange EarSize; // 0x220
	FSpawnTableRange LipSize; // 0x228
	FSpawnTableRange Pitch; // 0x230
	TArray<CharacterGod> God; // 0x238
	TArray<CharacterRace> Race; // 0x248
};

struct FHitList {
	TArray<FHitResult> Results; // 0x0
};

struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x18
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x28
	TArray<FColorParameterNameAndCurves> Colors; // 0x38
};

struct FAdminGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FClientGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FClientLinkGameCenterAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerLinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCharacterResolvedMeshes {
	USkeletalMesh* Helmet; // 0x0
	USkeletalMesh* Hair; // 0x8
	USkeletalMesh* FacialHair; // 0x10
	USkeletalMesh* Head; // 0x18
	USkeletalMesh* Forearms; // 0x20
	USkeletalMesh* Hands; // 0x28
	USkeletalMesh* UpperBody; // 0x30
	USkeletalMesh* LowerBody; // 0x38
	USkeletalMesh* Legs; // 0x40
	USkeletalMesh* Feet; // 0x48
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x78
	float MOI; // 0x7c
	float DampingRateFullThrottle; // 0x80
	float DampingRateZeroThrottleClutchEngaged; // 0x84
	float DampingRateZeroThrottleClutchDisengaged; // 0x88
};

struct FProfilesSetProfileLanguageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ExpectedVersion; // 0x10
	FString Language; // 0x18
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FServerGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FEmoteTableRow : FGameItemTableRowBase {
	ECharacterEmotes emoteID; // 0x10
	FText Name; // 0x18
	int32_t EmoteFlags; // 0x30
	float BreakTime; // 0x34
	float RandomDeviationFromBreakTime; // 0x38
	UAnimMontage* EmoteAnimMontageMale; // 0x40
	UAnimMontage* EmoteAnimMontageFemale; // 0x60
	USkeleton* CompatibleSkeleton; // 0x80
	UTexture2D* Icon; // 0xa0
	TArray<UTexture2D*> IconLayers; // 0xc0
	EEmoteCategories EmoteCategory; // 0xd0
	FName DLCPackage; // 0xd8
};

struct FWidgetSnapshotResponse {
	FGuid SnapshotRequestId; // 0x0
	TArray<char> SnapshotData; // 0x10
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
};

struct FModControllerCacheList {
	TMap<FString, FModControllerCache> ModControllerCaches; // 0x0
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FEconomyGetStoreByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FMultiplayerMultiplayerEmptyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FEconomySearchSubscriptionsRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t Top; // 0x60
};

struct FStatModifierFloat : FStatModifier {
	float m_Value; // 0x8
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FMotionHistory {
	TArray<FMotionSample> Samples; // 0x0
	float MaxSampleAge; // 0x10
};

struct FCameraFocusSettings {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
	FCameraTrackingFocusSettings TrackingFocusSettings; // 0x8
	char bSmoothFocusChanges : 1; // 0x20
	float FocusSmoothingInterpSpeed; // 0x24
	float FocusOffset; // 0x28
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

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FGroupsRemoveMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x10
	FString RoleId; // 0x20
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

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x108
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

struct FSpatialQueryTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FClientGetWindowsHelloChallengeRequest : FPlayFabRequestCommon {
	FString PublicKeyHint; // 0x8
};

struct FEconomySearchForItemsContainingItemByFriendlyIdRequest : FPlayFabRequestCommon {
	EContainerType ContainerType; // 0x8
	FString FriendlyIds; // 0x10
	FString IdempotencyId; // 0x20
	UPlayFabJsonObject* SourceEntityKey; // 0x30
};

struct FSkeletalMeshOptimizationSettings {
	SkeletalMeshOptimizationType ReductionMethod; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float MaxDeviationPercentage; // 0x8
	int32_t ScreenSize; // 0xc
	float WeldingThreshold; // 0x10
	bool bRecalcNormals; // 0x14
	float NormalsThreshold; // 0x18
	SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x1c
	SkeletalMeshOptimizationImportance TextureImportance; // 0x1d
	SkeletalMeshOptimizationImportance ShadingImportance; // 0x1e
	SkeletalMeshOptimizationImportance SkinningImportance; // 0x1f
	float BoneReductionRatio; // 0x20
	int32_t MaxBonesPerVertex; // 0x24
	bool bTransferMorphTarget; // 0x28
	TArray<FBoneReference> BonesToRemove; // 0x30
	int32_t BaseLOD; // 0x40
	int32_t LODChainLastIndex; // 0x44
	bool bSimplifyMaterials; // 0x48
	FSimplygonMaterialLODSettings MaterialLODSettings; // 0x50
	FMaterialProxySettings MaterialSettings; // 0xd0
	bool bForceRebuild; // 0x164
};

struct FServerDeletePlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	ELevelVisibility Visibility; // 0x18
	TArray<FName> LevelNames; // 0x20
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FAdminGetPolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FClientLinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientWriteClientPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString TimeStamp; // 0x20
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

struct FGameEventPlayerInfo {
	int64_t ID; // 0x0
	FString Name; // 0x8
	int64_t guildId; // 0x18
	FString guildName; // 0x20
};

struct FAdminSetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminGetContentUploadUrlRequest : FPlayFabRequestCommon {
	FString ContentType; // 0x8
	FString Key; // 0x18
};

struct FNiagaraConstantBase {
	FName Name; // 0x0
};

struct FServerGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FPackedNormal Normal; // 0xc
	FColor Color; // 0x10
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FHotkeyIconPlatform {
	EPlatformID Platform; // 0x0
	EPlatformID ParentPlatform; // 0x1
	TArray<FHotkeyIconKeyIcon> Keys; // 0x8
};

struct FMultiplayerGetCognitiveServicesLocalesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Locales; // 0x8
};

struct FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FLobbyOperationStepDescription {
	FText m_Label; // 0x0
};

struct FClientGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	char bApplyToChildren : 1; // 0x10
	float VoiceCenterChannelVolumeAdjuster; // 0x14
};

struct FAdminListVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FEconomyGetBundleByFriendlyIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString FriendlyId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FServerGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FEconomyDeleteBundleResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FPlayFabError {
	bool HasError; // 0x0
	int32_t ErrorCode; // 0x4
	FString ErrorName; // 0x8
	FString ErrorMessage; // 0x18
	FString ErrorDetails; // 0x28
};

struct FGameItemStatModification {
	bool IsFloatStatModification; // 0x0
	EStatModifierOperator operatorID; // 0x1
	int32_t statID; // 0x4
	float ModificationValue; // 0x8
};

struct FMotionSample {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float Time; // 0x18
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

struct FHierarchicalSimplification {
	float TransitionScreenSize; // 0x4
	bool bSimplifyMesh; // 0x8
	FMeshProxySettings ProxySetting; // 0xc
	FMeshMergingSettings MergeSetting; // 0x114
	float DesiredBoundRadius; // 0x1dc
	float DesiredFillingPercentage; // 0x1e0
	int32_t MinNumberOfActorsToBuild; // 0x1e4
};

struct FProfessionTemplateTableRow : FTableRowBase {
	int32_t ThrallType; // 0x8
	int32_t ThrallTier; // 0xc
	EThrallProfession ThrallProfession; // 0x10
	TArray<int32_t> BonusRecipes; // 0x18
	TArray<int32_t> CraftingGroups; // 0x28
	FName StatTemplate; // 0x38
	TArray<FName> StatModifierTemplate; // 0x40
	TArray<FName> ThrallStatModifierTemplate; // 0x50
	UTexture2D* Icon; // 0x60
	FStringAssetReference BuffClass; // 0x80
};

struct FBlueprintLiveStreamInfo {
	FString GameName; // 0x0
	FString StreamName; // 0x10
	FString URL; // 0x20
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x2b0
	FMargin Padding; // 0x4b8
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x80
	float Distance; // 0x8c
	float Height; // 0x90
	bool bDisableTimeout; // 0x94
	UCurveVector* PathOffsetCurve; // 0x98
	UCurveFloat* TimeMappingCurve; // 0xa0
};

struct FMultiplayerGetMatchResult : FPlayFabResultCommon {
	FString MatchID; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RegionPreferences; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FMovieSceneEvaluationTemplate {
	TMap<uint32_t, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FMovieSceneEvaluationField EvaluationField; // 0xa0
	FMovieSceneSequenceHierarchy Hierarchy; // 0xd0
	FMovieSceneGenerationLedger Ledger; // 0x170
	char bHasLegacyTrackInstances : 1; // 0x218
	char bKeepStaleTracks : 1; // 0x218
};

struct FMapMarkerContainer {
	TArray<int32_t> discoveredMarkers; // 0x0
};

struct FServerMoveItemToCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FClientGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FGroupsIsMemberRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
};

struct FAggregateTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FAdminModifyMatchmakerGameModesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FHealthData {
	float HealthAccumulation; // 0x0
	float HealthRegen; // 0x4
	bool HealthRegenInterrupted; // 0x8
	float HealthRegenInterruptedDuration; // 0xc
};

struct FAdminSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
};

struct FCreditsInfo : FFCTableRow {
	FText FirstLine; // 0x8
	FText SecondLine; // 0x20
	int32_t Flag; // 0x38
	int32_t PlatformFlag; // 0x3c
	FText FirstLineJP; // 0x40
	FText SecondLineJP; // 0x58
};

struct FAdminUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
	FString PlayFabId; // 0x18
};

struct FAdminRefundPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	FString PlayFabId; // 0x18
	FString reason; // 0x28
};

struct FClientCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FClientGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x38
	FVector Right; // 0x44
};

struct FServerRentalOffer : FSpsType {
	FString ConsumableID; // 0x8
	int32_t Slots; // 0x18
	int32_t Duration; // 0x1c
	int32_t LocationID; // 0x20
	float ExtraDuration; // 0x24
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FAdminUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FComboAttackData {
	FName ComboRowName; // 0x0
	float AttackRangeMin; // 0x8
	float AttackRangeMax; // 0xc
	FGameplayTagQuery ConditionQuery; // 0x10
};

struct FAdminUpdateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FClientValidateGooglePlayPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FGamepadPreset : FTableRowBase {
	TArray<FGamepadKey> PresetKeys; // 0x10
};

struct FProfilesGetEntityProfileResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Profile; // 0x8
};

struct FLeaderboardsGetStatisticDefinitionResponse : FPlayFabResultCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString Created; // 0x10
	FString LastResetTime; // 0x20
	UPlayFabJsonObject* LeaderboardDefinition; // 0x30
	FString Name; // 0x38
	int32_t Version; // 0x48
};

struct FClientGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FAdminUpdatePolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FServerLinkXboxAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString PlayFabId; // 0x10
	FString XboxToken; // 0x20
};

struct FDebugSpawnProbabilityGroup {
	float NormalizedWeight; // 0x0
	int32_t ActualWeight; // 0x4
	TArray<TScriptInterface<Class>> Members; // 0x8
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FMultiplayerListServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString QueueName; // 0x10
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FIntegralCurve ParticleKeys; // 0x18
};

struct FEconomyGetInventoryItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	FString Receipt; // 0x28
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x38
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

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FGuid CameraGuid; // 0x18
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FLocalizationGetLanguageListResponse : FPlayFabResultCommon {
	FString LanguageList; // 0x8
};

struct FHintsStructure : FTableRowBase {
	FText HintDescription; // 0x8
	int32_t Platform; // 0x20
	TArray<UWorld*> MapRestrictions; // 0x28
};

struct FVaultData {
	FName vaultName; // 0x0
	bool bIsLocked; // 0x8
	int64_t timeVaultIsRefreshedAt; // 0x10
};

struct FClientGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FClientReportPlayerClientResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FAdminGetPlayerStatisticDefinitionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientGetPlayerTradesRequest : FPlayFabRequestCommon {
	ETradeStatus StatusFilter; // 0x8
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FClientGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FClientGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FServerGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
	FString PlayFabId; // 0x28
};

struct FAdminGetTaskInstancesRequest : FPlayFabRequestCommon {
	FString StartedAtRangeFrom; // 0x8
	FString StartedAtRangeTo; // 0x18
	ETaskInstanceStatus StatusFilter; // 0x28
	UPlayFabJsonObject* TaskIdentifier; // 0x30
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType_InstancedStaticMesh* Type; // 0x38
};

struct FAdminDeleteMasterPlayerAccountRequest : FPlayFabRequestCommon {
	FString MetaData; // 0x8
	FString PlayFabId; // 0x18
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x80
	UCurveFloat* StrengthOverTime; // 0x90
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FAnimNode_AnimDynamics : FAnimNode_SkeletalControlBase {
	AnimPhysSimSpaceType SimulationSpace; // 0x70
	FBoneReference RelativeSpaceBone; // 0x78
	bool bChain; // 0x88
	FBoneReference BoundBone; // 0x90
	bool bDisableBoneLog; // 0xa0
	FBoneReference ChainEnd; // 0xa8
	FVector BoxExtents; // 0xb8
	FVector LocalJointOffset; // 0xc4
	float GravityScale; // 0xd0
	bool bLinearSpring; // 0xd4
	bool bAngularSpring; // 0xd5
	float LinearSpringConstant; // 0xd8
	float AngularSpringConstant; // 0xdc
	bool bEnableWind; // 0xe0
	bool bWindWasEnabled; // 0xe1
	float WindScale; // 0xe4
	bool bOverrideLinearDamping; // 0xe8
	float LinearDampingOverride; // 0xec
	bool bOverrideAngularDamping; // 0xf0
	float AngularDampingOverride; // 0xf4
	bool bOverrideAngularBias; // 0xf8
	float AngularBiasOverride; // 0xfc
	bool bDoUpdate; // 0x100
	bool bDoEval; // 0x101
	int32_t NumSolverIterationsPreUpdate; // 0x104
	int32_t NumSolverIterationsPostUpdate; // 0x108
	FAnimPhysConstraintSetup ConstraintSetup; // 0x10c
	bool bUsePlanarLimit; // 0x168
	TArray<FAnimPhysPlanarLimit> PlanarLimits; // 0x170
	bool bUseSphericalLimits; // 0x180
	TArray<FAnimPhysSphericalLimit> SphericalLimits; // 0x188
	AnimPhysCollisionType CollisionType; // 0x198
	float SphereCollisionRadius; // 0x19c
	FVector ExternalForce; // 0x1a0
};

struct FClientSendAccountRecoveryEmailResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FStructSerializerArrayTestStruct {
	TArray<int32_t> Int32Array; // 0x0
	int32_t StaticSingleElement; // 0x10
	int32_t StaticInt32Array[0x3]; // 0x14
	float StaticFloatArray[0x3]; // 0x20
	TArray<FVector> VectorArray; // 0x30
};

struct FFlsSmPeerEventData {
	FString peerId; // 0x0
	FString sessionId; // 0x10
	FString reason; // 0x20
	int32_t code; // 0x30
};

struct FServerConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	FString ItemInstanceId; // 0x20
	FString PlayFabId; // 0x30
};

struct FAITestSpawnInfo {
	APawn* PawnClass; // 0x0
	AAIController* controllerClass; // 0x8
	FGenericTeamId TeamID; // 0x10
	UBehaviorTree* BehaviorTree; // 0x18
	AActor* SpawnLocation; // 0x20
	int32_t NumberToSpawn; // 0x28
	float SpawnDelay; // 0x2c
	float PreSpawnDelay; // 0x30
};

struct FServerGetUserAccountInfoRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FCompositeSubFont {
	FTypeface Typeface; // 0x0
	TArray<FInt32Range> CharacterRanges; // 0x10
	float ScalingFactor; // 0x20
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FAdminModifyMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	TArray<UPlayFabJsonObject*> GameModes; // 0x18
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FEconomyGetReviewsResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	int32_t Count; // 0x18
	UPlayFabJsonObject* Entity; // 0x20
	TArray<UPlayFabJsonObject*> Reviews; // 0x28
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAdminAddNewsResult : FPlayFabResultCommon {
	FString NewsId; // 0x8
};

struct FClientAttributeInstallRequest : FPlayFabRequestCommon {
	FString Adid; // 0x8
	FString Idfa; // 0x18
};

struct FEconomyTakedownReviewsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Reviews; // 0x10
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FEventsWriteEventsResponse : FPlayFabResultCommon {
	FString AssignedEventIds; // 0x8
};

struct FAdminIncrementPlayerStatisticVersionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* StatisticVersion; // 0x8
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FBoneReference TrailBone; // 0x70
	int32_t ChainLength; // 0x80
	EAxis ChainBoneAxis; // 0x84
	bool bInvertChainBoneAxis; // 0x85
	float TrailRelaxation; // 0x88
	FRuntimeFloatCurve TrailRelaxationSpeed; // 0x90
	bool bLimitStretch; // 0x108
	float StretchLimit; // 0x10c
	FVector FakeVelocity; // 0x110
	bool bActorSpaceFakeVel; // 0x11c
	FBoneReference BaseJoint; // 0x120
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x50
};

struct FCloudScriptListQueuedFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FBuildingModuleReference {
	UInstancedBuildingComponent* OwnerComponent; // 0x0
	int32_t InstanceIndex; // 0x8
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0x70
	FBoneReference TargetBone; // 0x80
	bool bCopyTranslation; // 0x90
	bool bCopyRotation; // 0x91
	bool bCopyScale; // 0x92
	EBoneControlSpace ControlSpace; // 0x93
};

struct FPointOfInterestCollection {
	int32_t MemoryLifeTimeSeconds; // 0x0
	int32_t HateInertia; // 0x4
	int32_t HateLimitDistance; // 0x8
	TMap<AActor*, FPointOfInterestData> m_SensedPOIs; // 0x10
	TMap<AActor*, FPointOfInterestData> m_RememberedPOIs; // 0x60
	AActor* m_MostHatedPOI; // 0xb0
};

struct FServerGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FMultiplayerListBuildSummariesRequest : FPlayFabRequestCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x30
};

struct FFlsLocalOssUserInfo {
	int32_t m_UserIndex; // 0x0
	FString m_UserId; // 0x8
	FString m_Nickname; // 0x18
	FString m_DisplayName; // 0x28
};

struct FAdminRemovePlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FIntStatUpdateNode {
	int32_t m_ItemID; // 0x0
	EItemIntStatID m_StatID; // 0x4
	int32_t m_Value; // 0x8
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

struct FServerUnlinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAnimCurveParam {
	FName Name; // 0x0
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

struct FServerGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FServerSetGameServerInstanceDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGfeSDKRequestPermissionsParams {
	TArray<EGfeSDKScope> Scopes; // 0x0
};

struct FProfilerServiceData2 {
	FGuid InstanceID; // 0x0
	int64_t Frame; // 0x10
	int32_t CompressedSize; // 0x18
	int32_t UncompressedSize; // 0x1c
	FString HexData; // 0x20
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	FVector MinValueVec; // 0x30
	FVector MaxValueVec; // 0x3c
	UDistributionVector* Distribution; // 0x48
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
	char bGroup8 : 1; // 0x0
	char bGroup9 : 1; // 0x0
	char bGroup10 : 1; // 0x0
	char bGroup11 : 1; // 0x0
	char bGroup12 : 1; // 0x0
	char bGroup13 : 1; // 0x0
	char bGroup14 : 1; // 0x0
	char bGroup15 : 1; // 0x0
	char bGroup16 : 1; // 0x0
	char bGroup17 : 1; // 0x0
	char bGroup18 : 1; // 0x0
	char bGroup19 : 1; // 0x0
	char bGroup20 : 1; // 0x0
	char bGroup21 : 1; // 0x0
	char bGroup22 : 1; // 0x0
	char bGroup23 : 1; // 0x0
	char bGroup24 : 1; // 0x0
	char bGroup25 : 1; // 0x0
	char bGroup26 : 1; // 0x0
	char bGroup27 : 1; // 0x0
	char bGroup28 : 1; // 0x0
	char bGroup29 : 1; // 0x0
	char bGroup30 : 1; // 0x0
	char bGroup31 : 1; // 0x0
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FAttackOrderHateDataForTables {
	EHateType HateType; // 0x0
	float HateAmount; // 0x4
};

struct FAdminGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FAdminGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FAdminUpdatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	bool Disabled; // 0x8
	FString FriendlyName; // 0x10
	FString SecretKey; // 0x20
};

struct FEconomyDeleteRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FMovieSceneEvaluationGroupLUTIndex {
	bool bRequiresImmediateFlush; // 0x0
	int32_t LUTOffset; // 0x4
	int32_t NumInitPtrs; // 0x8
	int32_t NumEvalPtrs; // 0xc
};

struct FAuthenticationDeactivateAPIKeyRequest : FPlayFabRequestCommon {
	FString APIKeyId; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
};

struct FExperimentationGetLatestScorecardForExperimentRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FServerMoveItemToCharacterFromUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FFCButtonStyleButton {
	FSlateBrush Normal; // 0x0
	FSlateBrush Hovered; // 0x90
	FSlateBrush Pressed; // 0x120
	FSlateBrush PressedHovered; // 0x1b0
	FSlateBrush Disabled; // 0x240
	FMargin NormalPadding; // 0x2d0
	FMargin PressedPadding; // 0x2e0
	FMargin ContentPadding; // 0x2f0
};

struct FEconomyCraftRecipeByFriendlyIdRequest : FPlayFabRequestCommon {
	bool AutoConsume; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Ingredients; // 0x28
	UPlayFabJsonObject* Properties; // 0x38
	int32_t quantity; // 0x40
	FString RecipeFriendlyId; // 0x48
	bool ReturnInventory; // 0x58
	UPlayFabJsonObject* Store; // 0x60
	FString Uaid; // 0x68
};

struct FCompilerNativizationOptions {
	bool ServerOnlyPlatform; // 0x0
	bool ClientOnlyPlatform; // 0x1
};

struct FDialogueEvents {
	UAnimMontage* AnimationMontage; // 0x0
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x98
};

struct FFCDamageEvent : FDamageEvent {
	EFCDamageType FCDamageType; // 0x10
	FVector Origin; // 0x14
};

struct FIngredientEntry {
	int32_t IngredientID; // 0x0
	int32_t IngredientQuantity; // 0x4
	int32_t ResultWeight; // 0x8
	bool IsResult; // 0xc
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FSdp {
	FString handshakeId; // 0x0
	FString Type; // 0x10
	FString Content; // 0x20
};

struct FClientGetPlayFabIDsFromGameCenterIDsRequest : FPlayFabRequestCommon {
	FString GameCenterIDs; // 0x8
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FServerGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FAnimLegIKDefinition {
	FBoneReference IKFootBone; // 0x0
	FBoneReference FKFootBone; // 0x10
	int32_t NumBonesInLimb; // 0x20
	EAxis FootBoneForwardAxis; // 0x24
	bool bEnableRotationLimit; // 0x25
	float MinRotationAngle; // 0x28
	bool bEnableKneeTwistCorrection; // 0x2c
};

struct FWeaponMaterialTableStructure : FTableRowBase {
	USoundCue* SoundToPlay; // 0x8
	UMaterial* DecalToShow; // 0x28
	UParticleSystem* ParticleToShow; // 0x30
};

struct FClientSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	FKey Key; // 0x8
	char bShift : 1; // 0x20
	char bCtrl : 1; // 0x20
	char bAlt : 1; // 0x20
	char bCmd : 1; // 0x20
};

struct FClientGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FFileManifestData {
	FString FileName; // 0x0
	FSHAHashData FileHash; // 0x10
	TArray<FChunkPartData> FileChunkParts; // 0x28
	TArray<FString> InstallTags; // 0x38
	bool bIsUnixExecutable; // 0x48
	FString SymlinkTarget; // 0x50
	bool bIsReadOnly; // 0x60
	bool bIsCompressed; // 0x61
};

struct FServerGetCharacterStatisticsResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FAdminSetPublishedRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FServerGrantItemsToUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FFlsJoinSessionRequest : FFlsPeerRegistrationRequest {
	FFlsMatchmakeResult matchInfo; // 0x40
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FGroupsListGroupMembersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Members; // 0x8
};

struct FServerGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FGroupsListMembershipOpportunitiesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FServerRedeemMatchmakerTicketResult : FPlayFabResultCommon {
	FString Error; // 0x8
	bool TicketIsValid; // 0x18
	UPlayFabJsonObject* UserInfo; // 0x20
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FStreamingTexturePrimitiveInfo {
	UTexture2D* Texture; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
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

struct FServerAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
	FString PlayFabId; // 0x48
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FGraniteTileSetLayer {
	FString TileSet; // 0x0
	int32_t Layer; // 0x10
};

struct FMultiplayerListQosServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FQosRegionInfo {
	FQosDatacenterInfo Region; // 0x0
	EQosCompletionResult Result; // 0x40
	int32_t AvgPingMs; // 0x44
	TArray<int32_t> PingResults; // 0x58
	FDateTime LastCheckTimestamp; // 0x68
};

struct FStatIntEntry {
	ECharIntStatID statID; // 0x0
	float Value; // 0x4
};

struct FClientLinkGameCenterAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString GameCenterId; // 0x10
	FString PublicKeyUrl; // 0x20
	FString Salt; // 0x30
	FString Signature; // 0x40
	FString TimeStamp; // 0x50
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FServerUnlinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGroupsCreateGroupRoleResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FCameraCacheEntry {
	float TimeStamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FEconomySearchRecipesResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Recipes; // 0x18
};

struct FEconomyDeleteSubscriptionByFriendlyIdRequest : FPlayFabRequestCommon {
	FString FriendlyId; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UProperty* PropertyType; // 0x20
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FAuthenticationDeactivateAPIKeyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> inventory; // 0x18
	FString PlayFabId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40
};

struct FServerGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FClientLinkWindowsHelloAccountResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPropertyDestructionHistory {
	TArray<FPropertyDestructionLogEntry> LogEntries; // 0x0
	int32_t LogStartIndex; // 0x10
};

struct FGfeSDKHighlightSummaryParams {
	TArray<FGfeSDKHighlightGroupView> GroupViews; // 0x0
};

struct FClientRegisterPlayFabUserRequest : FPlayFabRequestCommon {
	FString DisplayName; // 0x8
	FString Email; // 0x18
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString password; // 0x40
	FString PlayerSecret; // 0x50
	bool RequireBothUsernameAndEmail; // 0x60
	FString userName; // 0x68
};

struct FEconomyGetMyReviewResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Review; // 0x8
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FFuncomPoseSnapshot {
	TArray<FTransform> LocalAtoms; // 0x0
};

struct FClientLinkSteamAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString SteamTicket; // 0x10
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x0
	bool bOverride_BlendMode; // 0x1
	bool bOverride_ShadingModel; // 0x2
	bool bOverride_DitheredLODTransition; // 0x3
	bool bOverride_TwoSided; // 0x4
	float OpacityMaskClipValue; // 0x8
	EBlendMode BlendMode; // 0xc
	EMaterialShadingModel ShadingModel; // 0xd
	char TwoSided : 1; // 0x10
	char DitheredLODTransition : 1; // 0x10
};

struct FServerUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FActionMappingLabel : FTableRowBase {
	FText ActionLabel; // 0x8
};

struct FMatchmakerStartGameResponse : FPlayFabResultCommon {
	FString GameID; // 0x8
	FString ServerIPV4Address; // 0x18
	FString ServerIPV6Address; // 0x28
	int32_t ServerPort; // 0x38
	FString ServerPublicDNSName; // 0x40
};

struct FClientAddUsernamePasswordResult : FPlayFabResultCommon {
	FString userName; // 0x8
};

struct FThrallInfo {
	FText ThrallName; // 0x0
	FStringAssetReference ThrallIcon; // 0x18
	EThrallTier ThrallTier; // 0x28
	FString ThrallBuff; // 0x30
	EThrallProfession ThrallProfession; // 0x40
	TArray<int32_t> BonusRecipes; // 0x48
	TArray<int32_t> CraftingGroups; // 0x58
	int32_t ThrallTemplateID; // 0x68
	FName SpawnTableId; // 0x70
	bool IsFemale; // 0x78
};

struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
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

struct FServerAddPlayerTagResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerListViewEntry {
	FBlueprintSessionResult m_Session; // 0x0
	UServerInfoBase* m_Widget; // 0xe8
	bool m_ShouldShow; // 0xf0
	bool m_IsFavorite; // 0xf1
	bool m_IsLastPlayedSession; // 0xf2
	bool m_IsSelected; // 0xf3
	EServerPopulation m_Population; // 0xf4
	int32_t m_CharacterLevel; // 0xf8
	int32_t LocalizedRegionIndex; // 0xfc
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FClientGetAdPlacementsRequest : FPlayFabRequestCommon {
	FString AppId; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
};

struct FMovieSceneLegacyTrackInstanceTemplate : FMovieSceneEvalTemplate {
	UMovieSceneTrack* Track; // 0x18
};

struct FServerGetPlayerProfileRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
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

struct FPurgeWave {
	int32_t DifficultyThreshold; // 0x0
	TArray<FName> OffBaseSpawnData; // 0x8
	TArray<FName> OnBaseSpawnData; // 0x18
	FName Boss; // 0x28
	FName InBaseBoss; // 0x30
	float BossSpawnDelay; // 0x38
	int32_t SpawnCap; // 0x3c
	int32_t ActiveCap; // 0x40
	int32_t SpawnLocationCap; // 0x44
	FName NextWave; // 0x48
	float WaveTime; // 0x50
	bool KillPawnNPCsOnPurgeEnd; // 0x54
	int32_t WaveWeight; // 0x58
	FText WaveDisplayName; // 0x60
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FLeaderboardsEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FGroupsUnblockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FAdminGetPlayerIdFromAuthTokenResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetLeaderboardRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	int32_t StartPosition; // 0x18
	FString StatisticName; // 0x20
	int32_t Version; // 0x30
};

struct FInstancedStaticMeshInstanceData3x4 {
	FMatrix3x4 Transform; // 0x0
};

struct FMovieSceneCaptureSettings {
	FDirectoryPath OutputDirectory; // 0x0
	bool bCreateTemporaryCopiesOfLevels; // 0x10
	AGameModeBase* GameModeOverride; // 0x18
	FString OutputFormat; // 0x20
	bool bOverwriteExisting; // 0x30
	bool bUseRelativeFrameNumbers; // 0x31
	int32_t HandleFrames; // 0x34
	char ZeroPadFrameNumbers; // 0x38
	int32_t FrameRate; // 0x3c
	FCaptureResolution Resolution; // 0x40
	bool bEnableTextureStreaming; // 0x48
	bool bCinematicEngineScalability; // 0x49
	bool bCinematicMode; // 0x4a
	bool bAllowMovement; // 0x4b
	bool bAllowTurning; // 0x4c
	bool bShowPlayer; // 0x4d
	bool bShowHUD; // 0x4e
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
	char bEnableProjection : 1; // 0x100
	char bAngularBreakable : 1; // 0x100
	char bLinearBreakable : 1; // 0x100
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FClientLinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FServerNotifyMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString PlayFabId; // 0x18
};

struct FAuthenticationGetEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FEconomyGetSubscriptionByMarketplaceOfferIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	UPlayFabJsonObject* MarketplaceOfferId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x18
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0x8
	FEdGraphPinType VarType; // 0x18
	FString FriendlyName; // 0x98
	FText Category; // 0xa8
	uint64_t PropertyFlags; // 0xc0
	FName RepNotifyFunc; // 0xc8
	ELifetimeCondition ReplicationCondition; // 0xd0
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xd8
	FString DefaultValue; // 0xe8
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x40
	FSimplygonRemeshingSettings RemeshingSettings; // 0x188
	bool bHasBeenSimplified; // 0x230
	FGroupedStaticMeshOptimizationSettings OptimizationSettings; // 0x238
	float LODDistance; // 0x498
	float ScreenSize; // 0x49c
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
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
};

struct FClientGetPlayerTradesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AcceptedTrades; // 0x8
	TArray<UPlayFabJsonObject*> OpenedTrades; // 0x18
};

struct FEconomyConsumeInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FStatModifier {
	EStatModifierID m_ID; // 0x0
	EStatModifierOperator m_Operator; // 0x1
	float m_Multiplier; // 0x4
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x80
	FVector TargetLocation; // 0x8c
	bool bRestrictSpeedToExpected; // 0x98
	UCurveVector* PathOffsetCurve; // 0xa0
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x18
	int32_t PolyFlags; // 0x20
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FAuthenticationActivateAPIKeyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FQueuedDrawDebugItem {
	EDrawDebugItemType ItemType; // 0x0
	FVector StartLoc; // 0x4
	FVector EndLoc; // 0x10
	FVector Center; // 0x1c
	float Radius; // 0x28
	float Size; // 0x2c
	int32_t Segments; // 0x30
	FColor Color; // 0x34
	bool bPersistentLines; // 0x38
	float LifeTime; // 0x3c
	float Thickness; // 0x40
	FString Message; // 0x48
	FVector2D TextScale; // 0x58
};

struct FClientGetPhotonAuthenticationTokenRequest : FPlayFabRequestCommon {
	FString PhotonApplicationId; // 0x8
};

struct FClientValidateAmazonReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptId; // 0x30
	FString UserID; // 0x40
};

struct FVector_NetQuantize : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FClientConsumePSNEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemsGranted; // 0x8
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FFlsLocalUserInfo {
	FString m_World; // 0x0
	FFlsFlsUserInfo m_FlsUserInfo; // 0x10
	FFlsLocalOssUserInfo m_NativeUserInfo; // 0x40
	FFlsLocalOssUserInfo m_DefaultUserInfo; // 0x78
};

struct FServerRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FLeaderboardsDeleteStatisticsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	UPlayFabJsonObject* Statistics; // 0x18
};

struct FAdminGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FAdminCheckLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString itemID; // 0x18
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	TArray<FCompositeSubFont> SubTypefaces; // 0x10
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FMultiplayerUploadCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GameCertificate; // 0x8
};

struct FClientSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString EncryptedRequest; // 0x8
	FString PlayerSecret; // 0x18
};

struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x10
	EAttenuationShape AttenuationShape; // 0x88
	float dBAttenuationAtMax; // 0x8c
	FVector AttenuationShapeExtents; // 0x90
	float ConeOffset; // 0x9c
	float FalloffDistance; // 0xa0
};

struct FRichCurve : FIndexedCurve {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x58
	ERichCurveExtrapolation PostInfinityExtrap; // 0x59
	float DefaultValue; // 0x5c
	TArray<FRichCurveKey> Keys; // 0x60
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

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
	bool bSeparateFillAlpha; // 0x20
};

struct FClientGetPlayFabIDsFromGameCenterIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FEconomySearchSubscriptionsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x18
};

struct FInteriorSettings {
	char bIsWorldSettings : 1; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20
};

struct FEconomyReportReviewRequest : FPlayFabRequestCommon {
	EConcernCategory ConcernCategory; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString ReviewId; // 0x18
};

struct FFlsServerConfig {
	FString Map; // 0x0
	FString GameMode; // 0x10
};

struct FMultiplayerListContainerImageTagsRequest : FPlayFabRequestCommon {
	FString ImageName; // 0x8
};

struct FSessionServicePing {
	FString userName; // 0x0
};

struct FServerGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
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
	char bOverride_ColorContrastShadows : 1; // 0x0
	char bOverride_ColorGammaShadows : 1; // 0x0
	char bOverride_ColorGainShadows : 1; // 0x0
	char bOverride_ColorOffsetShadows : 1; // 0x0
	char bOverride_ColorSaturationMidtones : 1; // 0x0
	char bOverride_ColorContrastMidtones : 1; // 0x0
	char bOverride_ColorGammaMidtones : 1; // 0x0
	char bOverride_ColorGainMidtones : 1; // 0x0
	char bOverride_ColorOffsetMidtones : 1; // 0x0
	char bOverride_ColorSaturationHighlights : 1; // 0x0
	char bOverride_ColorContrastHighlights : 1; // 0x0
	char bOverride_ColorGammaHighlights : 1; // 0x0
	char bOverride_ColorGainHighlights : 1; // 0x0
	char bOverride_ColorOffsetHighlights : 1; // 0x0
	char bOverride_ColorCorrectionShadowsMax : 1; // 0x0
	char bOverride_ColorCorrectionHighlightsMin : 1; // 0x0
	char bOverride_FilmWhitePoint : 1; // 0x0
	char bOverride_FilmSaturation : 1; // 0x0
	char bOverride_FilmChannelMixerRed : 1; // 0x0
	char bOverride_FilmChannelMixerGreen : 1; // 0x0
	char bOverride_FilmChannelMixerBlue : 1; // 0x0
	char bOverride_FilmContrast : 1; // 0x0
	char bOverride_FilmDynamicRange : 1; // 0x0
	char bOverride_FilmHealAmount : 1; // 0x0
	char bOverride_FilmToeAmount : 1; // 0x4
	char bOverride_FilmShadowTint : 1; // 0x4
	char bOverride_FilmShadowTintBlend : 1; // 0x4
	char bOverride_FilmShadowTintAmount : 1; // 0x4
	char bOverride_FilmSlope : 1; // 0x4
	char bOverride_FilmToe : 1; // 0x4
	char bOverride_FilmShoulder : 1; // 0x4
	char bOverride_FilmBlackClip : 1; // 0x4
	char bOverride_FilmWhiteClip : 1; // 0x4
	char bOverride_SceneColorTint : 1; // 0x4
	char bOverride_SceneFringeIntensity : 1; // 0x4
	char bOverride_AmbientCubemapTint : 1; // 0x4
	char bOverride_AmbientCubemapIntensity : 1; // 0x4
	char bOverride_BloomIntensity : 1; // 0x4
	char bOverride_BloomThreshold : 1; // 0x4
	char bOverride_Bloom1Tint : 1; // 0x4
	char bOverride_Bloom1Size : 1; // 0x4
	char bOverride_Bloom2Size : 1; // 0x4
	char bOverride_Bloom2Tint : 1; // 0x4
	char bOverride_Bloom3Tint : 1; // 0x4
	char bOverride_Bloom3Size : 1; // 0x4
	char bOverride_Bloom4Tint : 1; // 0x4
	char bOverride_Bloom4Size : 1; // 0x4
	char bOverride_Bloom5Tint : 1; // 0x4
	char bOverride_Bloom5Size : 1; // 0x4
	char bOverride_Bloom6Tint : 1; // 0x4
	char bOverride_Bloom6Size : 1; // 0x4
	char bOverride_BloomSizeScale : 1; // 0x4
	char bOverride_BloomDirtMaskIntensity : 1; // 0x4
	char bOverride_BloomDirtMaskTint : 1; // 0x4
	char bOverride_BloomDirtMask : 1; // 0x4
	char bOverride_AutoExposureMethod : 1; // 0x4
	char bOverride_AutoExposureLowPercent : 1; // 0x8
	char bOverride_AutoExposureHighPercent : 1; // 0x8
	char bOverride_AutoExposureMinBrightness : 1; // 0x8
	char bOverride_AutoExposureMaxBrightness : 1; // 0x8
	char bOverride_AutoExposureSpeedUp : 1; // 0x8
	char bOverride_AutoExposureSpeedDown : 1; // 0x8
	char bOverride_AutoExposureBias : 1; // 0x8
	char bOverride_HistogramLogMin : 1; // 0x8
	char bOverride_HistogramLogMax : 1; // 0x8
	char bOverride_LensFlareIntensity : 1; // 0x8
	char bOverride_LensFlareTint : 1; // 0x8
	char bOverride_LensFlareTints : 1; // 0x8
	char bOverride_LensFlareBokehSize : 1; // 0x8
	char bOverride_LensFlareBokehShape : 1; // 0x8
	char bOverride_LensFlareThreshold : 1; // 0x8
	char bOverride_VignetteIntensity : 1; // 0x8
	char bOverride_GrainIntensity : 1; // 0x8
	char bOverride_GrainJitter : 1; // 0x8
	char bOverride_AmbientOcclusionIntensity : 1; // 0x8
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x8
	char bOverride_AmbientOcclusionRadius : 1; // 0x8
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x8
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x8
	char bOverride_AmbientOcclusionDistance : 1; // 0x8
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x8
	char bOverride_AmbientOcclusionPower : 1; // 0x8
	char bOverride_AmbientOcclusionBias : 1; // 0x8
	char bOverride_AmbientOcclusionQuality : 1; // 0x8
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x8
	char bOverride_AmbientOcclusionMipScale : 1; // 0x8
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x8
	char bOverride_LPVIntensity : 1; // 0x8
	char bOverride_LPVDirectionalOcclusionIntensity : 1; // 0xc
	char bOverride_LPVDirectionalOcclusionRadius : 1; // 0xc
	char bOverride_LPVDiffuseOcclusionExponent : 1; // 0xc
	char bOverride_LPVSpecularOcclusionExponent : 1; // 0xc
	char bOverride_LPVDiffuseOcclusionIntensity : 1; // 0xc
	char bOverride_LPVSpecularOcclusionIntensity : 1; // 0xc
	char bOverride_LPVSize : 1; // 0xc
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0xc
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0xc
	char bOverride_LPVGeometryVolumeBias : 1; // 0xc
	char bOverride_LPVVplInjectionBias : 1; // 0xc
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0xc
	char bOverride_IndirectLightingColor : 1; // 0xc
	char bOverride_IndirectLightingIntensity : 1; // 0xc
	char bOverride_ColorGradingIntensity : 1; // 0xc
	char bOverride_ColorGradingLUT : 1; // 0xc
	char bOverride_DepthOfFieldFocalDistance : 1; // 0xc
	char bOverride_DepthOfFieldFstop : 1; // 0xc
	char bOverride_DepthOfFieldSensorWidth : 1; // 0xc
	char bOverride_DepthOfFieldDepthBlurRadius : 1; // 0xc
	char bOverride_DepthOfFieldDepthBlurAmount : 1; // 0xc
	char bOverride_DepthOfFieldFocalRegion : 1; // 0xc
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0xc
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0xc
	char bOverride_DepthOfFieldScale : 1; // 0xc
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0xc
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0xc
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0xc
	char bOverride_DepthOfFieldMethod : 1; // 0xc
	char bOverride_MobileHQGaussian : 1; // 0xc
	char bOverride_DepthOfFieldBokehShape : 1; // 0xc
	char bOverride_DepthOfFieldOcclusion : 1; // 0xc
	char bOverride_DepthOfFieldColorThreshold : 1; // 0x10
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0x10
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0x10
	char bOverride_DepthOfFieldVignetteSize : 1; // 0x10
	char bOverride_MotionBlurAmount : 1; // 0x10
	char bOverride_MotionBlurMax : 1; // 0x10
	char bOverride_MotionBlurPerObjectSize : 1; // 0x10
	char bOverride_ScreenPercentage : 1; // 0x10
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0x10
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0x10
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0x10
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0x10
	float WhiteTemp; // 0x14
	float WhiteTint; // 0x18
	FVector4 ColorSaturation; // 0x20
	FVector4 ColorContrast; // 0x30
	FVector4 ColorGamma; // 0x40
	FVector4 ColorGain; // 0x50
	FVector4 ColorOffset; // 0x60
	FVector4 ColorSaturationShadows; // 0x70
	FVector4 ColorContrastShadows; // 0x80
	FVector4 ColorGammaShadows; // 0x90
	FVector4 ColorGainShadows; // 0xa0
	FVector4 ColorOffsetShadows; // 0xb0
	float ColorCorrectionShadowsMax; // 0xc0
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
	FLinearColor FilmWhitePoint; // 0x174
	FLinearColor FilmShadowTint; // 0x184
	float FilmShadowTintBlend; // 0x194
	float FilmShadowTintAmount; // 0x198
	float FilmSaturation; // 0x19c
	FLinearColor FilmChannelMixerRed; // 0x1a0
	FLinearColor FilmChannelMixerGreen; // 0x1b0
	FLinearColor FilmChannelMixerBlue; // 0x1c0
	float FilmContrast; // 0x1d0
	float FilmToeAmount; // 0x1d4
	float FilmHealAmount; // 0x1d8
	float FilmDynamicRange; // 0x1dc
	float FilmSlope; // 0x1e0
	float FilmToe; // 0x1e4
	float FilmShoulder; // 0x1e8
	float FilmBlackClip; // 0x1ec
	float FilmWhiteClip; // 0x1f0
	FLinearColor SceneColorTint; // 0x1f4
	float SceneFringeIntensity; // 0x204
	float BloomIntensity; // 0x208
	float BloomThreshold; // 0x20c
	float BloomSizeScale; // 0x210
	float Bloom1Size; // 0x214
	float Bloom2Size; // 0x218
	float Bloom3Size; // 0x21c
	float Bloom4Size; // 0x220
	float Bloom5Size; // 0x224
	float Bloom6Size; // 0x228
	FLinearColor Bloom1Tint; // 0x22c
	FLinearColor Bloom2Tint; // 0x23c
	FLinearColor Bloom3Tint; // 0x24c
	FLinearColor Bloom4Tint; // 0x25c
	FLinearColor Bloom5Tint; // 0x26c
	FLinearColor Bloom6Tint; // 0x27c
	float BloomDirtMaskIntensity; // 0x28c
	FLinearColor BloomDirtMaskTint; // 0x290
	UTexture* BloomDirtMask; // 0x2a0
	FLinearColor AmbientCubemapTint; // 0x2a8
	float AmbientCubemapIntensity; // 0x2b8
	UTextureCube* AmbientCubemap; // 0x2c0
	EAutoExposureMethod AutoExposureMethod; // 0x2c8
	float AutoExposureLowPercent; // 0x2cc
	float AutoExposureHighPercent; // 0x2d0
	float AutoExposureMinBrightness; // 0x2d4
	float AutoExposureMaxBrightness; // 0x2d8
	float AutoExposureSpeedUp; // 0x2dc
	float AutoExposureSpeedDown; // 0x2e0
	float AutoExposureBias; // 0x2e4
	float HistogramLogMin; // 0x2e8
	float HistogramLogMax; // 0x2ec
	float LensFlareIntensity; // 0x2f0
	FLinearColor LensFlareTint; // 0x2f4
	float LensFlareBokehSize; // 0x304
	float LensFlareThreshold; // 0x308
	UTexture* LensFlareBokehShape; // 0x310
	FLinearColor LensFlareTints[0x8]; // 0x318
	float VignetteIntensity; // 0x398
	float GrainJitter; // 0x39c
	float GrainIntensity; // 0x3a0
	float AmbientOcclusionIntensity; // 0x3a4
	float AmbientOcclusionStaticFraction; // 0x3a8
	float AmbientOcclusionRadius; // 0x3ac
	char AmbientOcclusionRadiusInWS : 1; // 0x3b0
	float AmbientOcclusionFadeDistance; // 0x3b4
	float AmbientOcclusionFadeRadius; // 0x3b8
	float AmbientOcclusionDistance; // 0x3bc
	float AmbientOcclusionPower; // 0x3c0
	float AmbientOcclusionBias; // 0x3c4
	float AmbientOcclusionQuality; // 0x3c8
	float AmbientOcclusionMipBlend; // 0x3cc
	float AmbientOcclusionMipScale; // 0x3d0
	float AmbientOcclusionMipThreshold; // 0x3d4
	FLinearColor IndirectLightingColor; // 0x3d8
	float IndirectLightingIntensity; // 0x3e8
	float ColorGradingIntensity; // 0x3ec
	UTexture* ColorGradingLUT; // 0x3f0
	EDepthOfFieldMethod DepthOfFieldMethod; // 0x3f8
	char bMobileHQGaussian : 1; // 0x3fc
	float DepthOfFieldFstop; // 0x400
	float DepthOfFieldSensorWidth; // 0x404
	float DepthOfFieldFocalDistance; // 0x408
	float DepthOfFieldDepthBlurAmount; // 0x40c
	float DepthOfFieldDepthBlurRadius; // 0x410
	float DepthOfFieldFocalRegion; // 0x414
	float DepthOfFieldNearTransitionRegion; // 0x418
	float DepthOfFieldFarTransitionRegion; // 0x41c
	float DepthOfFieldScale; // 0x420
	float DepthOfFieldMaxBokehSize; // 0x424
	float DepthOfFieldNearBlurSize; // 0x428
	float DepthOfFieldFarBlurSize; // 0x42c
	UTexture* DepthOfFieldBokehShape; // 0x430
	float DepthOfFieldOcclusion; // 0x438
	float DepthOfFieldColorThreshold; // 0x43c
	float DepthOfFieldSizeThreshold; // 0x440
	float DepthOfFieldSkyFocusDistance; // 0x444
	float DepthOfFieldVignetteSize; // 0x448
	float MotionBlurAmount; // 0x44c
	float MotionBlurMax; // 0x450
	float MotionBlurPerObjectSize; // 0x454
	float LPVIntensity; // 0x458
	float LPVVplInjectionBias; // 0x45c
	float LPVSize; // 0x460
	float LPVSecondaryOcclusionIntensity; // 0x464
	float LPVSecondaryBounceIntensity; // 0x468
	float LPVGeometryVolumeBias; // 0x46c
	float LPVEmissiveInjectionIntensity; // 0x470
	float LPVDirectionalOcclusionIntensity; // 0x474
	float LPVDirectionalOcclusionRadius; // 0x478
	float LPVDiffuseOcclusionExponent; // 0x47c
	float LPVSpecularOcclusionExponent; // 0x480
	float LPVDiffuseOcclusionIntensity; // 0x484
	float LPVSpecularOcclusionIntensity; // 0x488
	float ScreenSpaceReflectionIntensity; // 0x48c
	float ScreenSpaceReflectionQuality; // 0x490
	float ScreenSpaceReflectionMaxRoughness; // 0x494
	float ScreenPercentage; // 0x498
	FWeightedBlendables WeightedBlendables; // 0x4a0
	FName GameplayTag; // 0x4b0
	TArray<UObject*> Blendables; // 0x4b8
};

struct FServerSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FGraniteTextureParameterValue {
	FName ParameterName; // 0x0
	UGraniteTexture* ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FBuildingStressTesterTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FCloudScriptRequest {
	FString Content; // 0x0
	TMap<FString, FString> headers; // 0x10
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAdminGetAllSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FDataFinalizeFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FileNames; // 0x10
};

struct FClientWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FGroupsInviteToGroupResponse : FPlayFabResultCommon {
	FString Expires; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	UPlayFabJsonObject* InvitedByEntity; // 0x20
	UPlayFabJsonObject* InvitedEntity; // 0x28
	FString RoleId; // 0x30
};

struct FModeMappings {
	TArray<FModeMapping> ModeMappings; // 0x0
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FMinimalViewInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
	float OrthoWidth; // 0x1c
	float OrthoNearClipPlane; // 0x20
	float OrthoFarClipPlane; // 0x24
	float AspectRatio; // 0x28
	char bConstrainAspectRatio : 1; // 0x2c
	char bUseFieldOfViewForLOD : 1; // 0x2c
	ECameraProjectionMode ProjectionMode; // 0x30
	float PostProcessBlendWeight; // 0x34
	FPostProcessSettings PostProcessSettings; // 0x40
	FVector2D OffCenterProjectionOffset; // 0x510
};

struct FCachedMovieSceneEvaluationTemplate : FMovieSceneEvaluationTemplate {
	TMap<uint32_t, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FMovieSceneEvaluationField EvaluationField; // 0xa0
	FMovieSceneSequenceHierarchy Hierarchy; // 0xd0
	FMovieSceneGenerationLedger Ledger; // 0x170
	char bHasLegacyTrackInstances : 1; // 0x218
	char bKeepStaleTracks : 1; // 0x218
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FAdminCreateCloudScriptTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FString InputName; // 0x8
	int32_t Mask; // 0x18
	int32_t MaskR; // 0x1c
	int32_t MaskG; // 0x20
	int32_t MaskB; // 0x24
	int32_t MaskA; // 0x28
	FName ExpressionName; // 0x30
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x28
};

struct FAdminGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FAggregateGeometry2D {
	TArray<FCircleElement2D> CircleElements; // 0x0
	TArray<FBoxElement2D> BoxElements; // 0x10
	TArray<FConvexElement2D> ConvexElements; // 0x20
};

struct FClientGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FClientGetPlayerStatisticsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FClientGetPlayerProfileRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	UPlayFabJsonObject* ProfileConstraints; // 0x18
};

struct FEconomyUpdateCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Currency; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FServerWriteServerCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	FString EventName; // 0x20
	FString PlayFabId; // 0x30
	FString TimeStamp; // 0x40
};

struct FAdminResetUserStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FIceServerConfig {
	TArray<FIceServer> servers; // 0x0
};

struct FAdminDeletePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString SecretKey; // 0x8
};

struct FLocalizationGetLanguageListRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FEconomyCreateDraftItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FServerWriteServerPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString PlayFabId; // 0x20
	FString TimeStamp; // 0x30
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x30
};

struct FSimplygonRemeshingSettings {
	bool bActive; // 0x0
	int32_t ScreenSize; // 0x4
	bool bRecalculateNormals; // 0x8
	float HardAngleThreshold; // 0xc
	int32_t MergeDistance; // 0x10
	bool bUseClippingPlane; // 0x14
	float ClippingLevel; // 0x18
	int32_t AxisIndex; // 0x1c
	bool bPlaneNegativeHalfspace; // 0x20
	bool bUseMassiveLOD; // 0x21
	bool bUseAggregateLOD; // 0x22
	FSimplygonMaterialLODSettings MaterialLODSettings; // 0x28
};

struct FSelections : FTableRowBase {
	FString Path; // 0x8
};

struct FAttributeRange {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FFlsSessionMonitorIpAddress {
	FString ip; // 0x0
	int32_t Port; // 0x10
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0x10
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
	char bSupportsAgent8 : 1; // 0x1c
	char bSupportsAgent9 : 1; // 0x1c
	char bSupportsAgent10 : 1; // 0x1c
	char bSupportsAgent11 : 1; // 0x1c
	char bSupportsAgent12 : 1; // 0x1c
	char bSupportsAgent13 : 1; // 0x1c
	char bSupportsAgent14 : 1; // 0x1c
	char bSupportsAgent15 : 1; // 0x1c
	char bUseSnapHeight : 1; // 0x20
	char bSnapToCheapestArea : 1; // 0x20
	char bCustomFlag0 : 1; // 0x20
	char bCustomFlag1 : 1; // 0x20
	char bCustomFlag2 : 1; // 0x20
	char bCustomFlag3 : 1; // 0x20
	char bCustomFlag4 : 1; // 0x20
	char bCustomFlag5 : 1; // 0x20
	char bCustomFlag6 : 1; // 0x20
	char bCustomFlag7 : 1; // 0x20
	UNavArea* AreaClass; // 0x28
};

struct FClientLinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	FString DeviceID; // 0x8
	FString DeviceModel; // 0x18
	bool ForceLink; // 0x28
	FString OS; // 0x30
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	bool bIgnoreForRelevancyTest; // 0x30
	int32_t GroupIndex; // 0x34
	EAnimGroupRole GroupRole; // 0x38
	float BlendWeight; // 0x3c
	float InternalTimeAccumulator; // 0x40
};

struct FAdminDeleteTitleRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientConsumeMicrosoftStoreEntitlementsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FClientDeviceInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Info; // 0x8
};

struct FClientRewardAdActivityRequest : FPlayFabRequestCommon {
	FString PlacementId; // 0x8
	FString RewardId; // 0x18
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
};

struct FAdminCreateTaskResult : FPlayFabResultCommon {
	FString TaskId; // 0x8
};

struct FAdminResetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FProfilesGetEntityProfileRequest : FPlayFabRequestCommon {
	bool DataAsObject; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FSavedEntryData {
	URadialMenuEntry* SavedEntry; // 0x0
	FText SavedLabel; // 0x8
};

struct FEconomyGetSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x18
	UPlayFabJsonObject* Subscription; // 0x28
};

struct FServerGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FFCButtonStyleCheckbox {
	FSlateBrush checked; // 0x0
	FSlateBrush CheckedHovered; // 0x90
	FSlateBrush CheckedPressed; // 0x120
	FSlateBrush Unchecked; // 0x1b0
	FSlateBrush UncheckedHovered; // 0x240
	FSlateBrush UncheckedPressed; // 0x2d0
	FMargin NormalPadding; // 0x360
	FMargin PressedPadding; // 0x370
	FMargin ContentPadding; // 0x380
};

struct FAdminRemoveVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FEconomyDeleteSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
};

struct FClientGetPlayFabIDsFromGoogleIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientUpdatePlayerStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminLookupUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FAutomationWorkerRequestNextNetworkCommand {
	uint32_t ExecutionCount; // 0x0
};

struct FServerGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CharacterName; // 0x8
	FString CharacterType; // 0x18
	FString PlayFabId; // 0x28
};

struct FClientLinkTwitchAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerDeregisterGameRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FServerDeleteCharacterFromUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerShutdownMultiplayerServerRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString Region; // 0x18
	FString sessionId; // 0x28
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FNPCProgressionCurveRow : FFCTableRow {
	FName CurveName; // 0x8
	int32_t Level; // 0x10
	int32_t XPRequired; // 0x14
	bool PerkRoll; // 0x18
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x20
	FColor Color; // 0x28
	FVector DefaultQueryExtent; // 0x2c
	ANavigationData* NavigationDataClass; // 0x38
	FStringClassReference NavigationDataClassName; // 0x40
};

struct FMovieScene3DPathSectionTemplate : FMovieSceneEvalTemplate {
	FGuid PathGuid; // 0x18
	FRichCurve TimingCurve; // 0x28
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x98
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x99
	char bFollow : 1; // 0x9c
	char bReverse : 1; // 0x9c
	char bForceUpright : 1; // 0x9c
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FEconomyUpdateCatalogConfigRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Config; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FSocketlessConnection {
	ABuildableBase* Actor; // 0x0
};

struct FClientValidateAmazonReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FGfeSDKHighlightConfigParams {
	TArray<FGfeSDKHighlightDefinition> HighlightDefinitions; // 0x0
	FString DefaultLocale; // 0x10
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0x48
	FStructSerializerArrayTestStruct Arrays; // 0xa8
	FStructSerializerMapTestStruct Maps; // 0xe8
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	float SectionStartTime; // 0x90
	float SectionEndTime; // 0x94
};

struct FNPCGrowthData {
	FName Type; // 0x0
	TMap<ECharIntStatID, int32_t> StatGrowthWeights; // 0x8
	TMap<ECharIntStatID, float> MaxStatGrowths; // 0x58
	TMap<ECharIntStatID, int32_t> BaseStats; // 0xa8
	int32_t BaseLevel; // 0xf8
	float baseGrowthRate1; // 0xfc
	float baseGrowthRate2; // 0x100
	int32_t StatGrowthPoints; // 0x104
	float GrowthRatio; // 0x108
};

struct FConnectionSettings {
	FString m_ServerUrl; // 0x0
	FString m_Protocol; // 0x10
	TMap<FString, FString> m_UpgradeHeaders; // 0x20
};

struct FEconomyReportItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEconomyPublishItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x70
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	float FrameRate; // 0x4
};

struct FClientGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
};

struct FGroupsIsMemberResponse : FPlayFabResultCommon {
	bool IsMember; // 0x8
};

struct FUIModuleTableRow : FTableRowBase {
	UClass* WidgetClass; // 0x8
	FName ToggleActionName; // 0x28
	FSlateSound ToggleActionSound; // 0x30
	bool MustBeBasePlayerChar; // 0x48
	bool CloseOnShortcutRelease; // 0x49
	bool CloseOnESC; // 0x4a
	bool CloseOnEndPlay; // 0x4b
	bool PreloadOnStartup; // 0x4c
	bool NonBlockingLoad; // 0x4d
	bool IsPersistent; // 0x4e
	EGUIModuleCategory Category; // 0x4f
	EFullscreenGUIAction FullscreenGUIAction; // 0x50
	int32_t ZOrder; // 0x54
	bool bHiddenDuringVanityMode; // 0x58
	bool bForceHideShortcutBar; // 0x59
	TArray<EClientState> AutoshownInStates; // 0x60
	bool ShowInStartupState; // 0x70
	bool ShowInMainMenuState; // 0x71
	bool ShowInLoadingScreenState; // 0x72
	bool ShowInPlayingState; // 0x73
	bool ShowInCharacterCreationState; // 0x74
	bool ShowWhenDead; // 0x75
	bool ShowSelect; // 0x76
	bool ShowBack; // 0x77
	bool ShowQuickMove; // 0x78
	TArray<FGamepadHotkeyHelp> OtherHotkeys; // 0x80
	bool DisableShortcutWhenPlayerInputBlocked; // 0x90
	bool TieToBasePlayerCharInput; // 0x91
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	FName ObjectTypeName; // 0x10
	TArray<FResponseChannel> CustomResponses; // 0x18
	FString HelpMessage; // 0x28
	bool bCanModify; // 0x38
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FExperimentationGetExperimentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FEconomyUpdateInventoryPropertiesItemsResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x28
};

struct FServerGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FProfilesSetAvatarUrlRequest : FPlayFabRequestCommon {
	FString AvatarUrl; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	int32_t ProfileVersion; // 0x20
};

struct FClientGameServerRegionsRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAdminModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FCloudScriptExecuteFunctionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Error; // 0x8
	int32_t ExecutionTimeMilliseconds; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionResult; // 0x28
	bool FunctionResultTooLarge; // 0x30
};

struct FAdminUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FEconomyUpdateBundleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
};

struct FGroupsBlockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FEconomyDeleteBundleByFriendlyIdRequest : FPlayFabRequestCommon {
	FString FriendlyId; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FEconomyGetPublishedItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
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

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
};

struct FClientUnlinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FClientUnlinkGoogleAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	UObject* FontFaceAsset; // 0x18
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FAdminRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
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

struct FNiagaraEventGeneratorProperties : FNiagaraDataSetProperties {
	int32_t MaxEventsPerFrame; // 0x20
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FAdminListOpenIdConnectionResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Connections; // 0x8
};

struct FClientValidateGooglePlayPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptJson; // 0x30
	FString Signature; // 0x40
};

struct FAdminIncrementPlayerStatisticVersionRequest : FPlayFabRequestCommon {
	FString StatisticName; // 0x8
};

struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	float StartOffset; // 0x8
	float EndOffset; // 0xc
	float PlayRate; // 0x10
	char bReverse : 1; // 0x14
	FName SlotName; // 0x18
	FRichCurve Weight; // 0x20
};

struct FEconomyGetRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* recipe; // 0x18
	TArray<UPlayFabJsonObject*> ReferencedItems; // 0x20
};

struct FHateData {
	float HateRetentionPerSecond; // 0x0
	float FlatHateLossPerSecond; // 0x4
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve BoolCurve; // 0x38
};

struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
	UField* Field; // 0x18
};

struct FMovieSceneEventSectionData {
	TArray<float> KeyTimes; // 0x0
	TArray<FEventPayload> KeyValues; // 0x10
};

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0x70
	EBoneControlSpace EffectorTransformSpace; // 0xa0
	FBoneReference EffectorTransformBone; // 0xa8
	EBoneRotationSource EffectorRotationSource; // 0xb8
	FBoneReference TipBone; // 0xc0
	FBoneReference RootBone; // 0xd0
	float Precision; // 0xe0
	int32_t MaxIterations; // 0xe4
	bool bEnableDebugDraw; // 0xe8
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FCharacterBoolParameters {
	bool IsFemale; // 0x0
};

struct FClientSetFriendTagsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
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

struct FClientStartPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Items; // 0x18
	FString StoreId; // 0x28
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FEconomyUpdateRecipeRequest : FPlayFabRequestCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* recipe; // 0x18
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FIntegralCurve Curve; // 0x18
};

struct FFlsNativeSessionInfo {
	int64_t Version; // 0x0
	FString nativeSessionId; // 0x8
};

struct FClientGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FClaimOwnershipParams {
	AActor* ClaimingActor; // 0x0
};

struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x30
	TArray<float> BlendTime; // 0x40
	EAlphaBlendOption BlendType; // 0x50
	UCurveFloat* CustomBlendCurve; // 0x58
	UBlendProfile* BlendProfile; // 0x60
	TArray<FAlphaBlend> Blends; // 0x68
	TArray<float> BlendWeights; // 0x78
	TArray<float> RemainingBlendTimes; // 0x88
	int32_t LastActiveChildIndex; // 0x98
	TArray<FBlendSampleData> PerBoneSampleData; // 0xa0
	bool bResetChildOnActivation; // 0xc0
};

struct FMovieScene3DAttachSectionTemplate : FMovieSceneEvalTemplate {
	FGuid AttachGuid; // 0x18
	FName AttachSocketName; // 0x28
	FName AttachComponentName; // 0x30
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x878
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FClientLinkFacebookAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientValidateIOSReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	int32_t PurchasePrice; // 0x28
	FString ReceiptData; // 0x30
};

struct FDataAbortFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FEconomyGetUgcItemModerationStateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FGameItemRef {
	UItemInventory* inventory; // 0x0
	int32_t ItemIndex; // 0x8
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x98
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x58
	bool bLoopAnimation; // 0x60
	float PlayRate; // 0x64
	float StartPosition; // 0x68
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FServerSendCustomAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString EmailTemplateId; // 0x18
	FString userName; // 0x28
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FMeshBuildSettings {
	bool bUseMikkTSpace; // 0x0
	bool bRecomputeNormals; // 0x1
	bool bRecomputeTangents; // 0x2
	bool bRemoveDegenerates; // 0x3
	bool bBuildAdjacencyBuffer; // 0x4
	bool bBuildReversedIndexBuffer; // 0x5
	bool bUseHighPrecisionTangentBasis; // 0x6
	bool bUseFullPrecisionUVs; // 0x7
	bool bGenerateLightmapUVs; // 0x8
	int32_t MinLightmapResolution; // 0xc
	int32_t SrcLightmapIndex; // 0x10
	int32_t DstLightmapIndex; // 0x14
	float BuildScale; // 0x18
	FVector BuildScale3D; // 0x1c
	float DistanceFieldResolutionScale; // 0x28
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x2c
	float DistanceFieldBias; // 0x30
	UStaticMesh* DistanceFieldReplacementMesh; // 0x38
};

struct FChatRpcData {
	uint64_t TimeStamp; // 0x0
	FUniqueNetIdRepl UserID; // 0x8
	int64_t CharacterUniqueID; // 0x20
	int64_t targetUniqueId; // 0x28
	FString userName; // 0x30
	FString Channel; // 0x40
	FString Message; // 0x50
	bool generated; // 0x60
};

struct FAdminResetPasswordRequest : FPlayFabRequestCommon {
	FString password; // 0x8
	FString Token; // 0x18
};

struct FEconomyGetInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	UPlayFabJsonObject* ReceiptData; // 0x20
	bool ShouldGenerateReceipt; // 0x28
};

struct FMovieSceneSkeletalAnimationSharedTrack : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
};

struct FAdminGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FClientAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FClientLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int32_t IssuerId; // 0x1c
	FString RedirectUri; // 0x20
};

struct FGroupsUpdateGroupRequest : FPlayFabRequestCommon {
	FString AdminRoleId; // 0x8
	int32_t ExpectedProfileVersion; // 0x18
	UPlayFabJsonObject* Group; // 0x20
	FString GroupName; // 0x28
	FString MemberRoleId; // 0x38
};

struct FAdminIncrementLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FProfilesGetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FAdminRunTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FServerGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FClientExecuteCloudScriptRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
	UPlayFabJsonObject* FunctionParameter; // 0x18
	bool GeneratePlayStreamEvent; // 0x20
	ECloudScriptRevisionOption RevisionSelection; // 0x21
	int32_t SpecificRevision; // 0x24
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

struct FServerSendPushNotificationResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBuildingPiecesInAreaDataContainer {
	TArray<FBuildingPiecesInAreaData> BuildingPiecesInAreaData; // 0x0
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
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

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FAutomationWorkerFindWorkers {
	int32_t Changelist; // 0x0
	FString GameName; // 0x8
	FString ProcessName; // 0x18
	FGuid sessionId; // 0x28
};

struct FEditedDocumentInfo {
	UObject* EditedObject; // 0x0
	FVector2D SavedViewOffset; // 0x8
	float SavedZoomAmount; // 0x10
};

struct FBoxBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x18
	char bFireEventsWhenForwards : 1; // 0x38
	char bFireEventsWhenBackwards : 1; // 0x38
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FDynamicPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
};

struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	FComponentSpacePoseLink ComponentPose; // 0x30
	float Alpha; // 0x48
	FInputScaleBias AlphaScaleBias; // 0x4c
	int32_t LODThreshold; // 0x54
	float ActualAlpha; // 0x58
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

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0x10
	FExpressionInput HeightInput; // 0x48
	float PreviewWeight; // 0x80
	FVector ConstLayerInput; // 0x84
	float ConstHeightInput; // 0x90
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FEconomySetVirtualCurrenciesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	FString IdempotencyId; // 0x18
};

struct FRedirector {
	FName OldName; // 0x0
	FName newName; // 0x8
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FMultiplayerGetBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
};

struct FAdminDeletePlayerSharedSecretResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEconomyPublishItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString ETag; // 0x10
	FString itemID; // 0x20
};

struct FEconomyReviewSummaryResult : FPlayFabResultCommon {
	UPlayFabJsonObject* LeastFavorableReview; // 0x8
	UPlayFabJsonObject* MostFavorableReview; // 0x10
	UPlayFabJsonObject* rating; // 0x18
	int32_t ReviewsCount; // 0x20
};

struct FTextureWrapper {
	UTexture* m_Texture; // 0x0
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FAdminGetMatchmakerGameInfoRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x38
	FVector LeftEnd; // 0x44
	FVector RightStart; // 0x50
	FVector RightEnd; // 0x5c
};

struct FServerAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FServerDeregisterGameResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerGetPlayerTagsRequest : FPlayFabRequestCommon {
	FString Namespace; // 0x8
	FString PlayFabId; // 0x18
};

struct FMovieSceneSubSequenceData {
	UMovieSceneSequence* Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x8
	FGuid SourceSequenceSignature; // 0x10
	FMovieSceneSequenceID DeterministicSequenceID; // 0x20
};

struct FVector_NetQuantizeNormal : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
};

struct FCloudScriptListFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FWeaponCategory {
	EAttackType AttackType; // 0x0
	float AttackRangeMin; // 0x4
	float AttackRangeMax; // 0x8
	bool HasKnockbackResponse; // 0xc
	TArray<UGameItem*> Weapons; // 0x10
};

struct FEconomyUpdateDraftItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Item; // 0x10
};

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	bool bPlaying; // 0x90
	float DefaultBlendTimeMultiplier; // 0x94
	TArray<int32_t> NextSections; // 0xc0
	TArray<int32_t> PrevSections; // 0xd0
	TArray<FAnimNotifyEvent> ActiveStateBranchingPoints; // 0xf0
	float Position; // 0x100
	float PlayRate; // 0x104
	FAlphaBlend Blend; // 0x108
};

struct FEconomyDeleteBundleByIdRequest : FPlayFabRequestCommon {
	FString ID; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FComboPresetTableRow : FFCTableRow {
	FName Name; // 0x8
	TArray<FActionSequence> Sequences; // 0x10
};

struct FActorComponentTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FClientLinkFacebookAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool ForceLink; // 0x18
};

struct FEconomySearchBundlesRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString Filter; // 0x10
	FString IdempotencyId; // 0x20
	FString OrderBy; // 0x30
	FString Search; // 0x40
	int32_t Skip; // 0x50
	UPlayFabJsonObject* SourceEntityKey; // 0x58
	int32_t Top; // 0x60
};

struct FAdminRunTaskResult : FPlayFabResultCommon {
	FString TaskInstanceId; // 0x8
};

struct FProfilerServiceSubscribe {
	FGuid sessionId; // 0x0
	FGuid InstanceID; // 0x10
};

struct FRawDistribution {
	FDistributionLookupTable table; // 0x0
};

struct FAdminBlankResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FOldThrallInfo {
	FText ThrallName; // 0x0
	FStringAssetReference ThrallIcon; // 0x18
	EThrallTier ThrallTier; // 0x28
	FString ThrallBuff; // 0x30
	EThrallProfession ThrallProfession; // 0x40
	TArray<int32_t> BonusRecipes; // 0x48
	TArray<int32_t> CraftingGroups; // 0x58
	int32_t ThrallTemplateID; // 0x68
	FName SpawnTableId; // 0x70
	bool IsFemale; // 0x78
};

struct FModControllerCache {
	FString MD5Hash; // 0x0
	TArray<FString> ModControllerPaths; // 0x10
};

struct FPendingDelayedSpawn : FAITestSpawnInfo {
	APawn* PawnClass; // 0x0
	AAIController* controllerClass; // 0x8
	FGenericTeamId TeamID; // 0x10
	UBehaviorTree* BehaviorTree; // 0x18
	AActor* SpawnLocation; // 0x20
	int32_t NumberToSpawn; // 0x28
	float SpawnDelay; // 0x2c
	float PreSpawnDelay; // 0x30
};

struct FAdminListVirtualCurrencyTypesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FEconomySearchStoresResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	TArray<UPlayFabJsonObject*> Stores; // 0x18
};

struct FClientLinkNintendoSwitchDeviceIdResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FServerModifyItemUsesResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x258
	FSlateBrush MidVolumeImage; // 0x2e8
	FSlateBrush LowVolumeImage; // 0x378
	FSlateBrush NoVolumeImage; // 0x408
	FSlateBrush MutedImage; // 0x498
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x530
};

struct FFootstepDataTableStructure : FTableRowBase {
	USoundCue* SoundToPlay; // 0x8
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FClientAddUsernamePasswordRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString password; // 0x18
	FString userName; // 0x28
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FIceServer {
	bool Enabled; // 0x0
	FString uri; // 0x8
	int64_t expiry; // 0x18
	FString password; // 0x20
};

struct FAdminAddPlayerTagRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString TagName; // 0x18
};

struct FClientGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString StatisticName; // 0x10
};

struct FClientUnlinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesId; // 0x8
};

struct FClientUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString KeysToRemove; // 0x10
	EUserDataPermission Permission; // 0x20
};

struct FEconomyCreateStoreRequest : FPlayFabRequestCommon {
	bool AllowOverwrite; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* Store; // 0x28
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FAdminGetCloudScriptVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Versions; // 0x8
};

struct FAdminGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x18
};

struct FMatchmakerUserInfoRequest : FPlayFabRequestCommon {
	int32_t MinCatalogVersion; // 0x8
	FString PlayFabId; // 0x10
};

struct FEconomyUpdateCurrencyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Currency; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FBoneReference SpringBone; // 0x70
	bool bLimitDisplacement; // 0x80
	float MaxDisplacement; // 0x84
	float SpringStiffness; // 0x88
	float SpringDamping; // 0x8c
	float ErrorResetThresh; // 0x90
	bool bNoZSpring; // 0x94
	bool bTranslateX; // 0x95
	bool bTranslateY; // 0x96
	bool bTranslateZ; // 0x97
	bool bRotateX; // 0x98
	bool bRotateY; // 0x99
	bool bRotateZ; // 0x9a
};

struct FClientUnlinkAndroidDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCharacterTransferInfo {
	int32_t Version; // 0x0
	FString Name; // 0x8
	FCharacterLayout Layout; // 0x18
	TArray<int32_t> Feats; // 0x150
	TArray<int32_t> FeatsLearnedByNPCs; // 0x160
	TArray<ECharIntStatID> IntStatKeys; // 0x170
	TArray<int32_t> IntStatValues; // 0x180
	TArray<ECharFloatStatID> FloatStatKeys; // 0x190
	TArray<float> FloatStatValues; // 0x1a0
	FProgressionSystemData ProgressionSystemData; // 0x1b0
	TArray<UGameItem*> Items; // 0x1c0
	TArray<UGameItem*> EquipmentItems; // 0x1d0
	TArray<UGameItem*> ShortcutBarItems; // 0x1e0
	TMap<FString, FMapMarkerContainer> AllMapsDiscoveredMarkers; // 0x1f0
	TArray<FExilesJourneyEvent> JourneyEvents; // 0x240
	TArray<int32_t> PickedupLoreItems; // 0x250
	TMap<FString, FTravelPointsContainer> AllMapsDiscoveredTravelPoints; // 0x260
	TArray<int32_t> Emotes; // 0x2b0
};

struct FMultiplayerCreateRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	FString ExpirationTime; // 0x18
	FString Region; // 0x28
	FString userName; // 0x38
	FString VmId; // 0x48
};

struct FPersistenceBuildingInstance {
	ABuildingBase* Class; // 0x0
	FTransform SpawnTransform; // 0x10
	FTransform MeshTransform; // 0x40
	TArray<FBuildableHealthEntry> HealthPool; // 0x70
	bool FoundationOrPillarThatHitGround; // 0x90
};

struct FServerAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FServerBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FEconomySearchForItemsContainingItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Bundles; // 0x8
	FString IdempotencyId; // 0x18
	TArray<UPlayFabJsonObject*> Recipes; // 0x28
	TArray<UPlayFabJsonObject*> Stores; // 0x38
	TArray<UPlayFabJsonObject*> Subscriptions; // 0x48
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x520
	FSplitterStyle ColumnSplitterStyle; // 0xa38
	FSlateBrush BackgroundBrush; // 0xb60
	FSlateColor ForegroundColor; // 0xbf0
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FPlayerInfo {
	FString CharacterName; // 0x0
	FString PlayerNickname; // 0x10
	FUniqueNetIdRepl PlayerNetId; // 0x20
	int32_t Level; // 0x38
	bool IsOnline; // 0x3c
	ERank Rank; // 0x3d
	int64_t PlayerId; // 0x40
};

struct FMultiplayerEmptyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FFileServerReady {
	TArray<FString> AddressList; // 0x0
	FGuid InstanceID; // 0x10
};

struct FClientGetTitlePublicKeyRequest : FPlayFabRequestCommon {
	FString TitleSharedSecret; // 0x8
};

struct FClientAndroidDevicePushNotificationRegistrationResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FAdminCreateActionsOnPlayerSegmentTaskRequest : FPlayFabRequestCommon {
	FString Description; // 0x8
	bool IsActive; // 0x18
	FString Name; // 0x20
	UPlayFabJsonObject* Parameter; // 0x30
	FString Schedule; // 0x38
};

struct FAdminUpdatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FClientLoginWithEmailAddressRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString password; // 0x20
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FClientRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FGroupsListGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FMultiplayerDeleteBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FServerDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FAutomationWorkerFindWorkersResponse {
	FString DeviceName; // 0x0
	FString InstanceName; // 0x10
	FString Platform; // 0x20
	FString OSVersionName; // 0x30
	FString ModelName; // 0x40
	FString GPUName; // 0x50
	FString CPUModelName; // 0x60
	uint32_t RAMInGB; // 0x70
	FString RenderModeName; // 0x78
	FGuid sessionId; // 0x88
};

struct FPropertyDestructionLogEntry {
	FString DestroyedBy; // 0x0
	int32_t ObjectId; // 0x10
	EObjectDestructionObjectType ObjectType; // 0x14
};

struct FClientLinkGoogleAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientGetPlayerSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FActorTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FAdminGetPlayerIdFromAuthTokenRequest : FPlayFabRequestCommon {
	FString Token; // 0x8
	EAuthTokenType TokenType; // 0x18
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FNPCPerk {
	FName PerkID; // 0x0
	FText DisplayName; // 0x8
	FName PerkType; // 0x20
	int32_t PerkWeight; // 0x28
	int32_t LevelRequirement; // 0x2c
	TMap<ECharIntStatID, FAttributeRange> AttributeRanges; // 0x30
};

struct FEconomyAddVirtualCurrenciesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Currencies; // 0x8
	UPlayFabJsonObject* Entity; // 0x18
	FString IdempotencyId; // 0x20
};

struct FAdminUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FLandClaimCellData {
	int32_t X; // 0x70
	int32_t Y; // 0x74
	int32_t RefCount; // 0x78
	FClaimOwnershipParams OwnershipParams; // 0x80
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FEconomySetInventoryItemsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString IdempotencyId; // 0x10
	TArray<UPlayFabJsonObject*> Items; // 0x20
};

struct FServerReportPlayerServerRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
	FString ReporterId; // 0x28
};

struct FTextureLODGroup {
	TextureGroup Group; // 0x0
	int32_t LODBias; // 0xc
	int32_t NumStreamedMips; // 0x14
	TextureMipGenSettings MipGenSettings; // 0x18
	int32_t MinLODSize; // 0x1c
	int32_t MaxLODSize; // 0x20
	FName MinMagFilter; // 0x28
	FName MipFilter; // 0x30
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FEconomyGetSubscriptionByIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	FString ID; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x20
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	FMaterialSimplificationSettings StaticMeshMaterial; // 0x8
	FMaterialProxySettings StaticMeshMaterialSettings; // 0x4c
	bool bOverrideLandscapeExportLOD; // 0xe0
	int32_t LandscapeExportLOD; // 0xe4
	FMaterialSimplificationSettings LandscapeMaterial; // 0xe8
	FMaterialProxySettings LandscapeMaterialSettings; // 0x12c
	bool bBakeFoliageToLandscape; // 0x1c0
	bool bBakeGrassToLandscape; // 0x1c1
	bool bGenerateMeshNormalMap; // 0x1c2
	bool bGenerateMeshMetallicMap; // 0x1c3
	bool bGenerateMeshRoughnessMap; // 0x1c4
	bool bGenerateMeshSpecularMap; // 0x1c5
	bool bGenerateLandscapeNormalMap; // 0x1c6
	bool bGenerateLandscapeMetallicMap; // 0x1c7
	bool bGenerateLandscapeRoughnessMap; // 0x1c8
	bool bGenerateLandscapeSpecularMap; // 0x1c9
	bool bUseLandscapeCulling; // 0x1ca
	ELandscapeCullingPrecision LandscapeCullingPrecision; // 0x1cb
};

struct FGraniteBakerLayerLayout {
	FString PresetName; // 0x0
	FGraniteBakerLayer Layers[0x4]; // 0x10
	bool customEditor; // 0x70
};

struct FQosPingServerInfo {
	FString Address; // 0x0
	int32_t Port; // 0x10
};

struct FClientUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FAdminResetPasswordResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMultiplayerGetCognitiveServicesLocalesRequest : FPlayFabRequestCommon {
	ECognitiveServicesType CognitiveServicesType; // 0x8
	FString Region; // 0x10
};

struct FClientConsumeMicrosoftStoreEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketplaceSpecificData; // 0x20
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x20
};

struct FClientGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FFCButtonStyle {
	FFCButtonStyleButton StyleButton; // 0x0
	FFCButtonStyleCheckbox StyleCheckbox; // 0x300
	FSlateSound PressedSlateSound; // 0x690
	FSlateSound HoveredSlateSound; // 0x6a8
};

struct FServerGetUserInventoryRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x30
};

struct FProgressionSystemData {
	float XP; // 0x0
	int32_t AttributePointsTotal; // 0x4
	int32_t AttributePointsSpent; // 0x8
	int32_t AttributePointsAvailable; // 0xc
};

struct FEconomyCreateRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* recipe; // 0x18
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FMultiplayerListPartyQosServersRequest : FPlayFabRequestCommon {
	FString Version; // 0x8
};

struct FClientLinkCustomIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEnergyEventTableRow : FTableRowBase {
	EnergyTypes Type; // 0x8
	float TriggerValue; // 0xc
	UClass* GUITrigger; // 0x10
	UClass* Buff; // 0x30
	int32_t BuffPotency; // 0x50
};

struct FGroupsListMembershipRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FModInfo {
	FString Name; // 0x0
	FString Description; // 0x10
	FString ChangeNote; // 0x20
	FString Author; // 0x30
	FString AuthorUrl; // 0x40
	FString VersionString; // 0x50
	int32_t VersionMajor; // 0x60
	int32_t VersionMinor; // 0x64
	int32_t VersionBuild; // 0x68
	FString SourcePath; // 0x70
	int32_t LoadOrder; // 0x80
	char bRequiresLoadOnStartup : 1; // 0x84
	char bLoadOnStartup : 1; // 0x84
	char bIsLoaded : 1; // 0x84
	char bWasLoadedOnStartup : 1; // 0x84
	char IsValid : 1; // 0x84
	UTexture2D* PreviewImage; // 0x88
	FString SteamPublishedFileId; // 0x90
	int32_t SteamVisibility; // 0xa0
	FString FolderName; // 0xa8
	FString MD5Hash; // 0xb8
	FString Source; // 0xc8
	int32_t RevisionNumber; // 0xd8
	int32_t SnapshotID; // 0xdc
};

struct FMovieSceneSequenceHierarchy {
	TMap<uint32_t, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<uint32_t, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
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

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	USkeletalMeshComponent* SourceMeshComponent; // 0x30
};

struct FAdminDeletePlayerResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FEconomyCreateCurrencyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* CurrencyMetadata; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FProfilesSetEntityProfilePolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x10
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FServerRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FMovieSceneSequenceTransform {
	float TimeScale; // 0x0
	float Offset; // 0x4
};

struct FAdminGetServerBuildInfoResult : FPlayFabResultCommon {
	FString ActiveRegions; // 0x8
	FString BuildId; // 0x18
	FString Comment; // 0x28
	FString ErrorMessage; // 0x38
	int32_t MaxGamesPerHost; // 0x48
	int32_t MinFreeGameSlots; // 0x4c
	EGameBuildStatus Status; // 0x50
	FString TimeStamp; // 0x58
	FString TitleId; // 0x68
};

struct FBuildingSocketData {
	TArray<FAttachedModuleData> m_AttachedModules; // 0x0
	FQuat WorldRotation; // 0x20
	FVector WorldTranslation; // 0x30
	int32_t m_CurrentSocketTypes; // 0x50
	int32_t m_CurrentTargetSocketTypes; // 0x54
	uint8_t BestAttachStability; // 0x58
};

struct FServerRegisterGameResponse : FPlayFabResultCommon {
	FString LobbyId; // 0x8
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FBlueprintCookedComponentInstancingData {
	bool bIsValid; // 0x0
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x8
};

struct FGamepadHotkeyHelp {
	FString ID; // 0x0
	FText Label; // 0x10
	TArray<FName> ActionMappings; // 0x28
	bool PositionOnLeftSide; // 0x38
	UGamepadHelpEntryBase* m_Widget; // 0x40
};

struct FAdaptiveSystemSettings {
	EExilesMap Map; // 0x0
	float MinViewDistanceScale; // 0x4
	float MaxViewDistanceScale; // 0x8
	float MinShadowDistanceScale; // 0xc
	float MaxShadowDistanceScale; // 0x10
	float MinStaticMeshLODDistanceScale; // 0x14
	float MaxStaticMeshLODDistanceScale; // 0x18
	float MinEmitterSpawnRateScale; // 0x1c
	float MaxEmitterSpawnRateScale; // 0x20
	float MinFoliageLODDistanceScale; // 0x24
	float MaxFoliageLODDistanceScale; // 0x28
	float MinFoliageMinimumScreenSize; // 0x2c
	float MaxFoliageMinimumScreenSize; // 0x30
	float MinMinScreenRadiusForLights; // 0x34
	float MaxMinScreenRadiusForLights; // 0x38
	float MinShadowRadiusThreshold; // 0x3c
	float MaxShadowRadiusThreshold; // 0x40
};

struct FTargetWrapper {
	TScriptInterface<Class> RawTarget; // 0x0
	int32_t SubTargetIndex; // 0x10
};

struct FClientLinkSteamAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FGraniteLightmapFlags {
	char isLQ : 1; // 0x0
	char isHQ : 1; // 0x0
	char isShadow : 1; // 0x0
	char withSkyOcc : 1; // 0x0
	char withAOMask : 1; // 0x0
};

struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	float StartEndFalloff; // 0x3c
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

struct FClientAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
};

struct FMaterialQualityOverrides {
	bool bEnableOverride; // 0x0
	bool bForceFullyRough; // 0x1
	bool bForceNonMetal; // 0x2
	bool bForceDisableLMDirectionality; // 0x3
	bool bForceLQReflections; // 0x4
	EMobileCSMQuality MobileCSMQuality; // 0x5
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FEconomyCreateBundleResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Bundle; // 0x8
	FString IdempotencyId; // 0x10
};

struct FCharacterTintLayout {
	int32_t Skin; // 0x0
	int32_t Hair; // 0x4
	int32_t FacialHair; // 0x8
	int32_t Eyes; // 0xc
	int32_t Eyebrows; // 0x10
	int32_t EyeMakeup; // 0x14
	int32_t LipMakeup; // 0x18
	int32_t Warpaint; // 0x1c
};

struct FFlsPeer {
	FString ID; // 0x0
	FString publicId; // 0x10
	FString ip; // 0x20
	int32_t Port; // 0x30
};

struct FEconomyDeleteItemRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
};

struct FSoundEffectLowPassFilterSettings {
	float CutoffFrequency; // 0x0
	float Q; // 0x4
};

struct FClientGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FClientGetTitlePublicKeyResult : FPlayFabResultCommon {
	FString RSAPublicKey; // 0x8
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

struct FThrallTableRow : FTableRowBase {
	UClass* ThrallActor; // 0x8
	UClass* ThrallComponent; // 0x28
	UBehaviorTree* BehaviorTree; // 0x48
	UClass* NPCBehaviorParameters; // 0x68
	TArray<FPetFoodItem> Diet; // 0x88
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FClanData {
	TArray<ABuildingBase*> ClanBuildings; // 0x48
};

struct FRichPresenceData : FTableRowBase {
	FText PresenceText; // 0x8
};

struct FFlsSmFailureResult {
	char m_failureCode; // 0x0
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
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

struct FServerDeletePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FClientGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FPacketSimulationSettings {
	int32_t PktLoss; // 0x0
	int32_t PktOrder; // 0x4
	int32_t PktDup; // 0x8
	int32_t PktLag; // 0xc
	int32_t PktLagVariance; // 0x10
};

struct FEconomyGetPublishedItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x48
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FFlsSessionMonitorHostInfo {
	FString hostId; // 0x0
	FString hostType; // 0x10
	FString hostUrl; // 0x20
};

struct FLobbyPlayerStateInfoArray : FFastArraySerializer {
	TArray<FLobbyPlayerStateActorInfo> Players; // 0xb0
	ALobbyBeaconState* ParentState; // 0xc0
};

struct FAdminGetPlayerSharedSecretsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> SharedSecrets; // 0x8
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FClientWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString EventName; // 0x10
	FString TimeStamp; // 0x20
};

struct FClientGetFriendsListRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	UPlayFabJsonObject* ProfileConstraints; // 0x10
	FString XboxToken; // 0x18
};

struct FClientGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FGroupsListGroupBlocksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Group; // 0x8
};

struct FLeaderboardsIncrementStatisticVersionResponse : FPlayFabResultCommon {
	int32_t Version; // 0x8
	int32_t VersionToBeDeleted; // 0xc
};

struct FClientGetFriendLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0x70
	FBoneReference SourceBone; // 0x80
	float multiplier; // 0x90
	EBoneAxis RotationAxisToRefer; // 0x94
	bool bIsAdditive; // 0x95
};

struct FServerUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientEmptyResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FExilesJourneyEvent {
	FName Name; // 0x0
	FVector Location; // 0x8
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FClientGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FEconomyGetRecipeByMarketplaceOfferIdRequest : FPlayFabRequestCommon {
	bool ExpandReferencedItems; // 0x8
	UPlayFabJsonObject* MarketplaceOfferId; // 0x10
	UPlayFabJsonObject* SourceEntityKey; // 0x18
};

struct FPlayFabBaseModel {
	FPlayFabError responseError; // 0x0
	UPlayFabJsonObject* responseData; // 0x38
};

struct FClientUnlinkPSNAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkGameCenterAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMappingDisplayName : FTableRowBase {
	FName ActionMapping; // 0x8
	FText DisplayName; // 0x10
	bool Invert; // 0x28
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FBuildingModuleDataView {
	FVector WorldLocation; // 0x0
	UInstancedBuildingComponent* OwnerComponent; // 0x10
	int32_t CurrentHealth; // 0x18
	int32_t Stability; // 0x1c
	TArray<FBuildableHealthEntry> m_HealthPool; // 0x20
	UInstancedBuildingComponent* StabilityProviderOwnerComponent; // 0x30
	int32_t StabilityProviderIndex; // 0x38
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x48
};

struct FAdminUpdateRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	TArray<UPlayFabJsonObject*> Tables; // 0x18
};

struct FAnimNode_CopyBoneDelta : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0x70
	FBoneReference TargetBone; // 0x80
	bool bCopyTranslation; // 0x90
	bool bCopyRotation; // 0x91
	bool bCopyScale; // 0x92
	CopyBoneDeltaMode CopyMode; // 0x93
	float TranslationMultiplier; // 0x94
	float RotationMultiplier; // 0x98
	float ScaleMultiplier; // 0x9c
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FAdminAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FMovieScenePossessable {
	FGuid Guid; // 0x0
	FString Name; // 0x10
	UObject* PossessedObjectClass; // 0x20
	FGuid ParentGuid; // 0x28
};

struct FServerLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	bool ForceLink; // 0x18
	int32_t IssuerId; // 0x1c
	FString PlayFabId; // 0x20
	FString RedirectUri; // 0x30
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0x70
	EBoneControlSpace DisplaySpace; // 0x80
	bool bRelativeToRefPose; // 0x81
	FVector Translation; // 0x84
	FRotator Rotation; // 0x90
	FVector Scale; // 0x9c
};

struct FStructSerializerBooleanTestStruct {
	bool BoolFalse; // 0x0
	bool BoolTrue; // 0x1
	uint32_t Bitfield; // 0x4
};

struct FServerGrantItemsToCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FLandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x0
};

struct FGfeSDKCreateResponse {
	uint16_t VersionMajor; // 0x0
	uint16_t VersionMinor; // 0x2
	FString NVIDIAGfeVersion; // 0x8
	TMap<EGfeSDKScope, EGfeSDKPermission> ScopePermissions; // 0x18
};

struct FEditorMapPerformanceTestDefinition {
	FStringAssetReference PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x10
};

struct FTiltComputeTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FClientLinkKongregateAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientReportAdActivityResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x70
	FSlateBrush BackgroundImageSelected; // 0x98
	FSlateBrush BackgroundImageComposing; // 0x128
	FSlateBrush CaretImage; // 0x1b8
};

struct FAuthenticationGetAPIKeysRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
};

struct FServerUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
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
	char bSupportsAgent8 : 1; // 0x0
	char bSupportsAgent9 : 1; // 0x0
	char bSupportsAgent10 : 1; // 0x0
	char bSupportsAgent11 : 1; // 0x0
	char bSupportsAgent12 : 1; // 0x0
	char bSupportsAgent13 : 1; // 0x0
	char bSupportsAgent14 : 1; // 0x0
	char bSupportsAgent15 : 1; // 0x0
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	EEvaluatorDataSource DataSource; // 0x30
	EEvaluatorMode EvaluatorMode; // 0x31
	int32_t FramesToCachePose; // 0x34
	int32_t CacheFramesRemaining; // 0x70
};

struct FClientAddFriendResult : FPlayFabResultCommon {
	bool Created; // 0x8
};

struct FAuthenticationGetEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityToken; // 0x10
	FString TokenExpiration; // 0x20
};

struct FClientGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	bool Result; // 0x28
};

struct FMultiplayerListAssetSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AssetSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FServerLinkXboxAccountResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FPoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FFlsSessionPlayerIdsJson {
	TArray<FString> playerIds; // 0x0
};

struct FMultiplayerRequestPartyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* BuildAliasParams; // 0x8
	FString PartyId; // 0x10
	FString PreferredRegions; // 0x20
	FString SessionCookie; // 0x30
	FString Version; // 0x40
};

struct FProfilerServiceAuthorize {
	FGuid sessionId; // 0x0
	FGuid InstanceID; // 0x10
};

struct FServerUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FClientReportPlayerClientRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	FString ReporteeId; // 0x18
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x30
};

struct FVector4Distribution {
	FDistributionLookupTable table; // 0x0
};

struct FSuspendCallback {
	float TimeoutSeconds; // 0x0
	FTimerHandle TimerHandle; // 0x8
	DelegateProperty Delegate; // 0x10
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x28
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FAssetEditorRequestOpenAsset {
	FString AssetName; // 0x0
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FProfilerServicePreview {
	bool bRequestedPreviewState; // 0x0
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char block : 1; // 0x0
};

struct FEconomyUpdateRecipeResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* recipe; // 0x18
};

struct FAlphaBlend {
	EAlphaBlendOption BlendOption; // 0x0
	UCurveFloat* CustomCurve; // 0x8
	float BlendTime; // 0x10
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

struct FDialogueNode {
	int32_t ID; // 0x0
	bool IsPlayer; // 0x4
	FText Text; // 0x8
	TArray<int32_t> Links; // 0x20
	FVector2D Coordinates; // 0x30
	bool bHasEvents; // 0x38
	bool bHasConditions; // 0x39
	FDialogueEvents events; // 0x40
	FDialogueConditions Conditions; // 0x48
	USoundBase* Sound; // 0x50
	UDialogueWave* DialogueWave; // 0x58
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0xc8
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

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x18
};

struct FAdminGetMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FEconomyCreateSubscriptionResult : FPlayFabResultCommon {
	FString IdempotencyId; // 0x8
	UPlayFabJsonObject* Subscription; // 0x18
};

struct FMultiplayerListMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	bool bShuffleMode; // 0x30
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x38
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FServerGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* InfoRequestParameters; // 0x8
	FString PlayFabId; // 0x10
};

struct FClientLoginWithTwitchRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	FString EncryptedRequest; // 0x20
	UPlayFabJsonObject* InfoRequestParameters; // 0x30
	FString PlayerSecret; // 0x38
};

struct FEconomyDeleteRecipeByIdRequest : FPlayFabRequestCommon {
	FString ID; // 0x8
	FString IdempotencyId; // 0x18
	UPlayFabJsonObject* SourceEntityKey; // 0x28
};

struct FAdminGetPlayedTitleListResult : FPlayFabResultCommon {
	FString TitleIds; // 0x8
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FMovieSceneGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
};

struct FAdminGetCloudScriptRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FServerRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FServerDeleteSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
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

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FCloudScriptRegisterHttpFunctionRequest : FPlayFabRequestCommon {
	FString FunctionName; // 0x8
	FString FunctionUrl; // 0x18
};

struct FEconomyUpdateDraftItemResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Item; // 0x8
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	float IndirectLightingQuality; // 0x8
	float IndirectLightingSmoothness; // 0xc
	FColor EnvironmentColor; // 0x10
	float EnvironmentIntensity; // 0x14
	float EmissiveBoost; // 0x18
	float DiffuseBoost; // 0x1c
	char bUseAmbientOcclusion : 1; // 0x20
	char bGenerateAmbientOcclusionMaterialMask : 1; // 0x20
	float DirectIlluminationOcclusionFraction; // 0x24
	float IndirectIlluminationOcclusionFraction; // 0x28
	float OcclusionExponent; // 0x2c
	float FullyOccludedSamplesFraction; // 0x30
	float MaxOcclusionDistance; // 0x34
	char bVisualizeMaterialDiffuse : 1; // 0x38
	char bVisualizeAmbientOcclusion : 1; // 0x38
	float VolumeLightSamplePlacementScale; // 0x3c
	char bCompressLightmaps : 1; // 0x40
	EGraniteLightMapQuality GraniteLightMapCompression; // 0x44
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x8
	EInputEvent InputKeyEvent; // 0x10
	FName FunctionNameToBind; // 0x18
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FPlayerListData {
	FString CharacterName; // 0x0
	int64_t CharacterId; // 0x10
	FUniqueNetIdRepl NetId; // 0x18
	int32_t CharacterLevel; // 0x30
	FString CharacterClan; // 0x38
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
	FVector_NetQuantize10 Acceleration; // 0x148
	FVector_NetQuantize10 LinearVelocity; // 0x154
};

struct FEconomyGetReviewsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
	FString OrderBy; // 0x20
	int32_t Skip; // 0x30
	int32_t Top; // 0x34
};

struct FClientRefreshPSNAuthTokenRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	int32_t IssuerId; // 0x18
	FString RedirectUri; // 0x20
};

struct FMultiplayerGetContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString password; // 0x18
	FString userName; // 0x28
};

struct FKSphereElem : FKShapeElem {
	FMatrix TM; // 0x20
	FVector Center; // 0x60
	float Radius; // 0x6c
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
	char bNavFlag8 : 1; // 0x0
	char bNavFlag9 : 1; // 0x0
	char bNavFlag10 : 1; // 0x0
	char bNavFlag11 : 1; // 0x0
	char bNavFlag12 : 1; // 0x0
	char bNavFlag13 : 1; // 0x0
	char bNavFlag14 : 1; // 0x0
	char bNavFlag15 : 1; // 0x0
};

struct FAdminDeleteMasterPlayerAccountResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
	FString TitleIds; // 0x18
};

struct FServerGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FServerGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
	FString StatisticNames; // 0x18
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x28
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FServerMoveItemToCharacterFromCharacterResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
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
	FName PressedSound; // 0x298
	FName HoveredSound; // 0x2a0
};

struct FClientGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FEconomyHelpfulnessVoteResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FDataFinalizeFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FProfilesSetGlobalPolicyResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientLinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString NintendoSwitchDeviceId; // 0x10
};

struct FEconomyReviewSummaryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString itemID; // 0x10
};

struct FMatchmakerPlayerLeftResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FExperimentationDeleteExperimentRequest : FPlayFabRequestCommon {
	FString ExperimentId; // 0x8
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FIntegralCurve EnumCurve; // 0x38
};

struct FNiagaraVariableInfo {
	FName Name; // 0x0
	ENiagaraDataType Type; // 0x8
};

struct FBuildingGeneratorTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FLandscapeEditToolRenderData {
	UMaterialInterface* ToolMaterial; // 0x0
	UMaterialInterface* GizmoMaterial; // 0x8
	int32_t SelectedType; // 0x10
	int32_t DebugChannelR; // 0x14
	int32_t DebugChannelG; // 0x18
	int32_t DebugChannelB; // 0x1c
	UTexture2D* DataTexture; // 0x20
};

struct FClientRegisterWithWindowsHelloRequest : FPlayFabRequestCommon {
	FString DeviceName; // 0x8
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString PublicKey; // 0x40
	FString userName; // 0x50
};

struct FMatchmakerStartGameRequest : FPlayFabRequestCommon {
	FString Build; // 0x8
	FString CustomCommandLineData; // 0x18
	FString ExternalMatchmakerEventEndpoint; // 0x28
	FString GameMode; // 0x38
	ERegion Region; // 0x48
};

struct FStringClassReference : FStringAssetReference {
	FString AssetLongPathname; // 0x0
};

struct FMultiplayerJoinMatchmakingTicketResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClothingAssetData {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties PhysicsProperties; // 0x1c
	TArray<int32_t> ApexToUnrealBoneMapping; // 0x70
};

struct FGrassVariety {
	UStaticMesh* GrassMesh; // 0x0
	float GrassDensity; // 0x8
	bool bUseGrid; // 0xc
	float PlacementJitter; // 0x10
	int32_t StartCullDistance; // 0x14
	int32_t EndCullDistance; // 0x18
	int32_t MinLOD; // 0x1c
	EGrassScaling Scaling; // 0x20
	FFloatInterval ScaleX; // 0x24
	FFloatInterval ScaleY; // 0x2c
	FFloatInterval ScaleZ; // 0x34
	bool RandomRotation; // 0x3c
	bool AlignToSurface; // 0x3d
	bool bUseLandscapeLightmap; // 0x3e
	FLightingChannels LightingChannels; // 0x3f
	bool bReceivesDecals; // 0x42
};

struct FClientGetLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FFlsSecurityCredentials {
	FString Type; // 0x0
	FString SessionTicket; // 0x10
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> array; // 0x0
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FFavoriteServer {
	FString ServerName; // 0x0
	FString IPAddress; // 0x10
	int32_t Port; // 0x20
	FGuid UID; // 0x24
};

struct FIceCandidate {
	FString handshakeId; // 0x0
	FString Mid; // 0x10
	int32_t m_line_index; // 0x20
	FString Content; // 0x28
};

struct FClientGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	FString StatisticNames; // 0x8
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x18
};

struct FMultiplayerCreateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasName; // 0x8
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18
};

struct FEconomySearchBundlesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Bundles; // 0x8
	FString IdempotencyId; // 0x18
};

struct FServerGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x20
	FBox ElemBox; // 0x30
	FTransform Transform; // 0x50
};

struct FEconomySearchInStoreByIdRequest : FPlayFabRequestCommon {
	FString Filter; // 0x8
	FString ID; // 0x18
	FString IdempotencyId; // 0x28
	FString OrderBy; // 0x38
	FString Search; // 0x48
	int32_t Skip; // 0x58
	UPlayFabJsonObject* SourceEntityKey; // 0x60
	int32_t Top; // 0x68
};

struct FLevelSequenceObject {
	UObject* ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FGfeSDKHighlightVideoParams {
	FString GroupId; // 0x0
	FString HighlightId; // 0x10
	int32_t StartDelta; // 0x20
	int32_t EndDelta; // 0x24
};

struct FNiagaraConstant_Vector : FNiagaraConstantBase {
	FVector4 Value; // 0x10
};

struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FEngineServiceTerminate {
	FString userName; // 0x0
};

struct FExperimentationGetTreatmentAssignmentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* TreatmentAssignment; // 0x8
};

struct FAIDataTableRow : FTableRowBase {
	float HearingRadius; // 0x8
	float SightRadius; // 0xc
	float LoseSightRadius; // 0x10
	float DisengagementDistance; // 0x14
	float ProximityHateRange; // 0x18
	EAIEngagementBehavior EngagementBehavior; // 0x1c
	EAIFollowerTacticType Tactic; // 0x1d
	TArray<FHateDataForTables> HateData; // 0x20
};

struct FPurgeSpawnConfig {
	FName SpawnTableName; // 0x0
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

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FServerGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticName; // 0x20
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FPredictedObstacle {
	AActor* ObstacleActor; // 0x0
	FVector ProbeCollisionLocation; // 0x8
	FVector ObstacleCollisionLocation; // 0x14
	float TimeOfCollision; // 0x20
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> array; // 0x0
};

struct FTargetAreaWithSource {
	FTargetArea Area; // 0x0
	USceneComponent* SourceComponent; // 0x20
};

struct FoliageRespawnParams {
	bool InitialReceived; // 0x0
	TArray<int32_t> ComponentEndIndex; // 0x8
	TArray<uint16_t> HiddenOnServer; // 0x18
};

struct FStructSerializerNumericTestStruct {
	uint8_t Int8; // 0x0
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

struct FCloudScriptRegisterQueuedFunctionRequest : FPlayFabRequestCommon {
	FString ConnectionString; // 0x8
	FString FunctionName; // 0x18
	FString QueueName; // 0x28
};

struct FLightingChannels {
	bool bChannel0; // 0x0
	bool bChannel1; // 0x1
	bool bChannel2; // 0x2
};

struct FCharacterResolvedTextures {
	UTexture* EyebrowDiffuse; // 0x0
	UTexture* EyebrowNormal; // 0x8
	UTexture* EyeMask; // 0x10
	UTexture* LipMask; // 0x18
	UTexture* WarpaintFaceMask; // 0x20
	UTexture* WarpaintBodyMask; // 0x28
	UTexture* WarpaintHandsMask; // 0x30
	UTexture* Hairline; // 0x38
	UTexture* FacialHairline; // 0x40
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

struct FReplicatedTMap {
	TMap<FString, FString> Map; // 0x0
};

struct FClientUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	FString KeysToRemove; // 0x20
	EUserDataPermission Permission; // 0x30
};

struct FRecipeTableRow : FGameItemTableRowBase {
	FText RecipeName; // 0x10
	FText ShortDesc; // 0x28
	EGameItemGUICategory RecipeType; // 0x40
	float TimeToCraft; // 0x44
	int32_t tier; // 0x48
	int32_t CraftXP; // 0x4c
	int32_t CraftingStations; // 0x50
	int32_t RequiredFuel; // 0x54
	UTexture2D* Icon; // 0x58
	TArray<UTexture2D*> IconLayers; // 0x78
	UClass* BuildingModule; // 0x88
	bool DestroyStationOnComplete; // 0xa8
	int32_t RecipeItemFlags; // 0xac
	int32_t Ingredient1ID; // 0xb0
	int32_t Ingredient1Quantity; // 0xb4
	int32_t Ingredient2ID; // 0xb8
	int32_t Ingredient2Quantity; // 0xbc
	int32_t Ingredient3ID; // 0xc0
	int32_t Ingredient3Quantity; // 0xc4
	int32_t Ingredient4ID; // 0xc8
	int32_t Ingredient4Quantity; // 0xcc
	int32_t CatalystID; // 0xd0
	int32_t Result1ID; // 0xd4
	int32_t Result1Quantity; // 0xd8
	int32_t Result2ID; // 0xdc
	int32_t Result2Quantity; // 0xe0
	int32_t Result3ID; // 0xe4
	int32_t Result3Quantity; // 0xe8
	int32_t Result4ID; // 0xec
	int32_t Result4Quantity; // 0xf0
	int32_t Result1Weight; // 0xf4
	int32_t Result2Weight; // 0xf8
	int32_t Result3Weight; // 0xfc
	int32_t Result4Weight; // 0x100
	int32_t ThrallRecipeFeatRequirement; // 0x104
	bool IsThrallMachineRecipe; // 0x108
	bool IsRecipeEnabled; // 0x109
	UTexture2D* MapMarkerIcon; // 0x110
	FName ExilesJourneyTrigger; // 0x130
	FName DLCPackage; // 0x138
};

struct FPointOfInterestData {
	int32_t SensingStoppedTime; // 0x0
	FVector LastSensedLocation; // 0x4
	int32_t DamageTotal; // 0x10
};

struct FClientAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString userName; // 0x10
};

struct FMultiplayerListQosServersRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0x10
};

struct FFlsSessionUserInfo {
	FFlsFlsUserInfo m_FlsUserInfo; // 0x0
	FFlsLocalOssUserInfo m_DefaultUserInfo; // 0x30
};

struct FMovieScene3DTransformSectionTemplate : FMovieSceneEvalTemplate {
	FRichCurve TranslationCurve[0x3]; // 0x18
	FRichCurve RotationCurve[0x3]; // 0x168
	FRichCurve ScaleCurve[0x3]; // 0x2b8
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FAdminGetCloudScriptVersionsRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FClientUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
};

struct FMultiplayerListPartyQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FAutomationScreenshotOptions {
	FVector2D Resolution; // 0x0
	float Delay; // 0x8
	bool bDisableNoisyRenderingFeatures; // 0xc
	FName VisualizeBuffer; // 0x10
	EComparisonTolerance Tolerance; // 0x18
	FComparisonToleranceAmount ToleranceAmount; // 0x19
	float MaximumLocalError; // 0x20
	float MaximumGlobalError; // 0x24
	bool bIgnoreAntiAliasing; // 0x28
	bool bIgnoreColors; // 0x29
};

struct FClientGetFriendLeaderboardAroundPlayerRequest : FPlayFabRequestCommon {
	bool IncludeFacebookFriends; // 0x8
	bool IncludeSteamFriends; // 0x9
	int32_t MaxResultsCount; // 0xc
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
	FString StatisticName; // 0x28
	int32_t Version; // 0x38
	FString XboxToken; // 0x40
};

struct FMovieSceneTrackCompilationParams {
	bool bForEditorPreview; // 0x0
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FAutomationWorkerEvent {
	FString Message; // 0x0
	FString Context; // 0x10
	FString FileName; // 0x20
	int32_t LineNumber; // 0x30
};

struct FCloudScriptExecuteEntityCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x29
	int32_t SpecificRevision; // 0x2c
};

struct FAdminGetPlayedTitleListRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FGroupDefinition {
	FName Group; // 0x0
	int32_t NumSimultaneous; // 0x8
	bool ForceCrossfade; // 0xc
};

struct FMovieSceneSectionParameters {
	float StartOffset; // 0x0
	float TimeScale; // 0x4
	float PrerollTime; // 0x8
	float PostrollTime; // 0xc
};

struct FDietFood {
	float Preference; // 0x0
	int32_t tier; // 0x4
	TMap<ECharIntStatID, float> FoodBonuses; // 0x8
};

struct FStaminaData {
	int32_t StaminaDamageOnHit; // 0x0
	int32_t StaminaDamageOnBlock; // 0x4
	bool bIsSprintStaminaCostAffected; // 0x8
	int32_t DefaultStamina; // 0xc
	float StaminaRegenMod; // 0x10
	float StaminaAccumulation; // 0x14
	int32_t StaminaJumpCost; // 0x18
	int32_t StaminaDegenerationSourceBitmask; // 0x1c
	bool StaminaRecentlyConsumed; // 0x20
	FTimerHandle StaminaRecentlyConsumedTimerHandle; // 0x28
	bool StaminaRecentlyExhausted; // 0x30
	FTimerHandle StaminaRecentlyExhaustedTimerHandle; // 0x38
	float ClimbingStaminaCost; // 0x40
	float StaminaClimbingCostMultiplier; // 0x44
	float ChargeHoldStaminaCost; // 0x48
};

struct FClientLinkAndroidDeviceIDResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FClientUnlinkGameCenterAccountRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FServerWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FServerRedeemMatchmakerTicketRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	FString Ticket; // 0x18
};

struct FBuildingRecordingBuilderTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bAllowAggregation : 1; // 0xc
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
	float TickInterval; // 0x3c
};

struct FMapDataRow : FFCTableRow {
	FString MapName; // 0x8
	FText LocalizedMapName; // 0x18
	UWorld* MapWorld; // 0x30
	FName DBName; // 0x50
	UTexture2D* FullscreenMapTexture; // 0x58
	UTexture2D* FullscreenMapMask; // 0x78
	UDataTable* StaticMapMarkersTable; // 0x98
	FMapCoordinatesAndSpans MapCoordinatesAndSpans; // 0xb8
	UDataTable* DungeonLocationsTable; // 0xe8
	UDataTable* FeatBlacklistTable; // 0x108
	UClass* CharacterCreationClass; // 0x128
	UDataTable* PurgeConfigTable; // 0x148
	FName DLCPackage; // 0x168
	TArray<FStringClassReference> MapServiceActors; // 0x170
	TArray<FStringClassReference> MapServerOnlyServiceActors; // 0x180
	TArray<FStringClassReference> MapClientOnlyServiceActors; // 0x190
};

struct FAdminGetCloudScriptTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FServerAddCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t amount; // 0x8
	FString CharacterId; // 0x10
	FString PlayFabId; // 0x20
	FString VirtualCurrency; // 0x30
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

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
	UStructProperty* LinearColorProperty; // 0x28
};

struct FMultiplayerRequestMultiplayerServerResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ConnectedPlayers; // 0x8
	FString FQDN; // 0x18
	FString IPV4Address; // 0x28
	FString LastStateTransitionTime; // 0x38
	TArray<UPlayFabJsonObject*> Ports; // 0x48
	FString Region; // 0x58
	FString ServerId; // 0x68
	FString sessionId; // 0x78
	FString State; // 0x88
	FString VmId; // 0x98
};

struct FServerUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FServerConsoleCommandLogEntry {
	FString Caller; // 0x0
	FString CommandString; // 0x10
};

struct FMatchmakerAuthUserResponse : FPlayFabResultCommon {
	bool Authorized; // 0x8
	FString PlayFabId; // 0x10
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FEconomyGetCatalogConfigRequest : FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FReverbSettings {
	char bApplyReverb : 1; // 0x0
	ReverbPreset ReverbType; // 0x4
	UReverbEffect* ReverbEffect; // 0x8
	float Volume; // 0x10
	float FadeTime; // 0x14
};

struct FClientLinkXboxAccountRequest : FPlayFabRequestCommon {
	bool ForceLink; // 0x8
	FString XboxToken; // 0x10
};

struct FServerAuthenticateSessionTicketRequest : FPlayFabRequestCommon {
	FString SessionTicket; // 0x8
};

struct FServerGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FServerGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FMovieSceneStringPropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x18
	FStringCurve StringCurve; // 0x38
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FDialogueConditions {
	int32_t Money; // 0x0
};

