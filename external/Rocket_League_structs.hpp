// Created by BlueFire1337
// Updated 2022-01-26
// Generated 2022-02-02

#pragma once

struct FMarketplaceProductImage {
	FString Id; // 0x0
	int32_t Height; // 0x10
	int32_t Width; // 0x14
	FString Purpose; // 0x18
	TArray<FString> Purposes; // 0x28
	FString ResizeURL; // 0x38
};

struct FFunctionExpressionInput {
	ObjectProperty ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FESportEventData {
	FString Image; // 0x0
	FString Title; // 0x10
	FString Description; // 0x20
	FString URL; // 0x30
	FString UTCStartTime; // 0x40
	FString UTCEndTime; // 0x50
	uint32_t bStartingSoon : 1; // 0x60
	uint32_t bLiveNow : 1; // 0x60
	ObjectProperty ImageTexture; // 0x68
	int32_t ImageTextureSizeX; // 0x70
	int32_t ImageTextureSizeY; // 0x74
	FString StartTime; // 0x78
	FString EndTime; // 0x88
	QWordProperty EpochSoonStartTime; // 0x98
	QWordProperty EpochStartTime; // 0xa0
	QWordProperty EpochEndTime; // 0xa8
};

struct FManualCoverTypeInfo {
	char SlotIndex; // 0x0
	ECoverType ManualCoverType; // 0x1
};

struct FMcpGroup {
	FString OwnerId; // 0x0
	FString GroupId; // 0x10
	FString GroupName; // 0x20
	EMcpGroupAccessLevel AccessLevel; // 0x30
	TArray<FMcpGroupMember> Members; // 0x38
};

struct FFilterProductAttribute {
	FString Label; // 0x0
	uint32_t bSelected : 1; // 0x10
	FNone* AttributeClass; // 0x18
	int32_t PreviewQuantity; // 0x20
	uint32_t bHidden : 1; // 0x24
};

struct FFloatParamPair {
	FName Key; // 0x0
	float Value; // 0x8
};

struct FSoundNodeEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FPendingRPC {
	ObjectProperty RPC; // 0x0
	int32_t UniqueId; // 0x8
	float CreationTime; // 0xc
	int32_t Failures; // 0x10
	float NextSendTime; // 0x14
	ObjectProperty PendingError; // 0x18
};

struct FSpecialEventStore {
	int32_t EventID; // 0x0
	TArray<FSpecialEventReward> Rewards; // 0x8
};

struct FTeamSeeds {
	TArray<QWordProperty> Seeds; // 0x0
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	ObjectProperty InterfaceObject; // 0x8
};

struct FSpeechRecognizedWord {
	int32_t WordId; // 0x0
	FString WordText; // 0x8
	float Confidence; // 0x18
};

struct FPlayerVoiceRoomCredentials : FVoiceRoomCredentials {
	FUniqueNetId PlayerID; // 0x30
};

struct FVanityLoadout {
	int32_t VanityType; // 0x0
	FProductInstanceID InstanceID; // 0x8
	int32_t UserColor; // 0x18
};

struct FRocketPassStore {
	TArray<FRocketPassBundleInfo> Tiers; // 0x0
	TArray<FRocketPassBundleInfo> Bundles; // 0x10
};

struct FPlayerActorIDPair {
	int32_t ActorID; // 0x0
	FUniqueNetId PlayerID; // 0x8
};

struct FTimedLock {
	FName Name; // 0x0
	float ReleaseTime; // 0x8
	uint32_t bLockedOneFrame : 1; // 0xc
};

struct FReplayHeadersCountTask {
	FString Path; // 0x0
	TArray<FString> FileNameFilters; // 0x10
	TArray<FReplayTypeData> Replays; // 0x20
	ObjectProperty Error; // 0x30
};

struct FStaticMeshComponentLODInfo {
	TArray<ObjectProperty> ShadowMaps; // 0x0
	TArray<ObjectProperty> ShadowVertexBuffers; // 0x10
	FPointer LightMap; // 0x20
	FPointer OverrideVertexColors; // 0x28
	TArray<FPaintedVertex> PaintedVertices; // 0x30
};

struct FTitleSafeZoneArea {
	float MaxPercentX; // 0x0
	float MaxPercentY; // 0x4
	float RecommendedPercentX; // 0x8
	float RecommendedPercentY; // 0xc
};

struct FDebugTextInfo {
	ObjectProperty SrcActor; // 0x0
	FVector SrcActorOffset; // 0x8
	FVector SrcActorDesiredOffset; // 0x14
	FString DebugText; // 0x20
	float TimeRemaining; // 0x30
	float Duration; // 0x34
	FColor TextColor; // 0x38
	uint32_t bAbsoluteLocation : 1; // 0x3c
	uint32_t bKeepAttachedToActor : 1; // 0x3c
	FVector OrigActorLocation; // 0x40
	ObjectProperty Font; // 0x50
	FVector2D TextScale; // 0x58
};

struct FRecogVocabulary {
	TArray<FRecognisableWord> WhoDictionary; // 0x0
	TArray<FRecognisableWord> WhatDictionary; // 0x10
	TArray<FRecognisableWord> WhereDictionary; // 0x20
	FString VocabName; // 0x30
	TArray<char> VocabData; // 0x40
	TArray<char> WorkingVocabData; // 0x50
};

struct FPlayerDataStoreGroup {
	ObjectProperty PlayerOwner; // 0x0
	TArray<ObjectProperty> DataStores; // 0x8
};

struct FSaveDataDeleteTask : FSaveDataTask {
	int32_t KeepNewestFileCount; // 0x18
};

struct FCacheIOTaskBase {
	ObjectProperty CacheObject; // 0x0
	TArray<char> Data; // 0x8
	FString Path; // 0x18
	ObjectProperty Error; // 0x28
};

struct FMcpUserStatus {
	FString McpId; // 0x0
	FString SecretKey; // 0x10
	FString Ticket; // 0x20
	FString UDID; // 0x30
	FString RegisteredDate; // 0x40
	FString LastActiveDate; // 0x50
	int32_t DaysInactive; // 0x60
	uint32_t bIsBanned : 1; // 0x64
};

struct FUISavedKeyValue {
	FName Key; // 0x0
	FString Value; // 0x8
};

struct FBugReportSubmitterData {
	ObjectProperty Submitter; // 0x0
	FString Name; // 0x8
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
};

struct FTradeIn {
	FProductHashID HashID; // 0x0
};

struct FShopDiscount {
	int32_t Id; // 0x0
	int32_t ShopItemCostID; // 0x4
	QWordProperty StartDate; // 0x8
	QWordProperty EndDate; // 0x10
	TArray<FShopPrice> Price; // 0x18
	int32_t Quantity; // 0x28
};

struct FParticleSysParam {
	FName Name; // 0x0
	EParticleSysParamType ParamType; // 0x8
	float Scalar; // 0xc
	float Scalar_Low; // 0x10
	FVector Vector; // 0x14
	FVector Vector_Low; // 0x20
	FColor Color; // 0x2c
	ObjectProperty Actor; // 0x30
	ObjectProperty Material; // 0x38
	ObjectProperty Mesh; // 0x40
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FOnlinePlayerMapPrefs {
	FUniqueNetId PlayerID; // 0x0
	TArray<FName> MapLikes; // 0x48
	TArray<FName> MapDislikes; // 0x58
};

struct FBugReportPathData {
	FString OutputPath; // 0x0
	FString LogName; // 0x10
	FString LogPath; // 0x20
	FString ScreenShotPath; // 0x30
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
	FRawDistributionFloat FadeInDistance; // 0x18
	FRawDistributionFloat FadeOutDistance; // 0x40
};

struct FAnimTag {
	FString Tag; // 0x0
	TArray<FString> Contains; // 0x10
};

struct FAdHocAccessPointInfo {
	FString Ipv4Addr; // 0x0
	FString Username; // 0x10
	FString AdvertiseData; // 0x20
	int32_t ScanResultIndex; // 0x30
	int32_t NetworkNodeIndex; // 0x34
};

struct FAnimatedVectorParam : FAnimatedParam {
	FInterpCurveVector ValueOverTime; // 0x8
};

struct FRotationCameraKnock : FCameraKnockBase {
	FRotator Amount; // 0x10
};

struct FASColorTransform {
	FLinearColor Multiply; // 0x0
	FLinearColor Add; // 0x10
};

struct FEventStringParam {
	FString ParamName; // 0x0
	FString ParamValue; // 0x10
};

struct FEffectsMapping {
	ObjectProperty PhysicalMaterial; // 0x0
	ObjectProperty Particle; // 0x8
};

struct FRPCTestItem {
	uint32_t BoolItem : 1; // 0x0
	int32_t IntItem; // 0x4
	float FloatItem; // 0x8
	FString StringItem; // 0x10
	FUniqueNetId PlayerItem; // 0x20
	TArray<FString> StringItems; // 0x68
};

struct FSeasonMatch {
	int32_t Week; // 0x0
	int32_t Team0; // 0x4
	int32_t Team1; // 0x8
	int32_t Score0; // 0xc
	int32_t Score1; // 0x10
	int32_t Winner; // 0x14
	uint32_t bBye : 1; // 0x18
};

struct FDemolishData {
	ObjectProperty Attacker; // 0x0
	ObjectProperty Victim; // 0x8
	FVector AttackerVelocity; // 0x10
	FVector VictimVelocity; // 0x1c
};

struct FWaveParams {
	float Frequency; // 0x0
	float Amplitude; // 0x4
};

struct FReplayExportTask : FReplayIOTaskBase {
	TArray<char> Data; // 0x28
	uint32_t bDebug : 1; // 0x38
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPerBoneMaskInfo {
	TArray<FBranchInfo> BranchList; // 0x0
	float DesiredWeight; // 0x10
	float BlendTimeToGo; // 0x14
	TArray<FWeightRule> WeightRuleList; // 0x18
	uint32_t bWeightBasedOnNodeRules : 1; // 0x28
	uint32_t bDisableForNonLocalHumanPlayers : 1; // 0x28
	uint32_t bPendingBlend : 1; // 0x28
	TArray<float> PerBoneWeights; // 0x30
	TArray<char> TransformReqBone; // 0x40
	int32_t TransformReqBoneIndex; // 0x50
};

struct FOnlineProductDrop {
	FUniqueNetId PlayerID; // 0x0
	TArray<FOnlineProductData> ProductData; // 0x48
	TArray<FCurrency> CurrencyData; // 0x58
	TArray<FOnlineXPReward> RewardDrops; // 0x68
};

struct FMcpClashMobPushNotification {
	TArray<FString> device_tokens; // 0x0
	FString badge_type; // 0x10
	FString Sound; // 0x20
	FString Message; // 0x30
	FMcpClashMobPushNotificationParams Params; // 0x40
};

struct FShowFlags_Mirror {
	QWordProperty flags0; // 0x0
	QWordProperty flags1; // 0x8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	uint32_t bLockOutgoing : 1; // 0xc
};

struct FOnlineGameSearchORClause {
	TArray<FOnlineGameSearchParameter> OrParams; // 0x0
};

struct FBasicLobbyInfo {
	FUniqueLobbyId LobbyUID; // 0x0
	TArray<FLobbyMetaData> LobbySettings; // 0x10
};

struct FActorHistory {
	FName Name; // 0x0
	EHistory Type; // 0x8
	FString SerializedHistory; // 0x10
};

struct FSoundEventMapping {
	FName SoundEventName; // 0x0
	ObjectProperty SoundToPlay; // 0x8
};

struct FReservationPlayerData {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
	float SkillMu; // 0x58
	float SkillSigma; // 0x5c
	int32_t Tier; // 0x60
	uint32_t bRemotePlayer : 1; // 0x64
	TArray<int32_t> Loadout; // 0x68
	TArray<FName> MapLikes; // 0x78
	TArray<FName> MapDislikes; // 0x88
	QWordProperty ClubID; // 0x98
};

struct FEngineAudioNativeState {
	ComponentProperty Component; // 0x0
	ObjectProperty Profile; // 0x8
	ObjectProperty Car; // 0x10
	FCarStateData OldCarState; // 0x18
	FCarStateData CarState; // 0x28
};

struct FCrowdNoiseModifierInstance {
	float Value; // 0x0
	float Duration; // 0x4
};

struct FTourLeaderboard {
	TArray<FTourPlacementInfo> TeamGoals; // 0x0
	TArray<FTourPlacementInfo> PlayerGoals; // 0x10
	TArray<FTourPlacementInfo> PlayerAssists; // 0x20
	TArray<FTourPlacementInfo> PlayerSaves; // 0x30
};

struct FTerrainDecoration {
	ObjectProperty Factory; // 0x0
	float MinScale; // 0x8
	float MaxScale; // 0xc
	float Density; // 0x10
	float SlopeRotationBlend; // 0x14
	int32_t RandSeed; // 0x18
	TArray<FTerrainDecorationInstance> Instances; // 0x20
};

struct FScreenMessageString {
	QWordProperty Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
};

struct FCalculateShotOnGoalLocationInParams {
	float BallRadius; // 0x0
	float HorizontalGoalPosition; // 0x4
	float VerticalGoalPosition; // 0x8
	FVector GoalLocalExtent; // 0xc
	FVector GoalWorldFrontCenter; // 0x18
	FVector GoalRight; // 0x24
	FVector GoalUp; // 0x30
};

struct FGFxPlayerBannerRef {
	FProductHashID HashID; // 0x0
	ObjectProperty PlayerBanner; // 0x8
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FOnlinePlayerStorageSyncResult {
	FNone* DataClass; // 0x0
	ObjectProperty RemoteData; // 0x8
	int32_t ServerTick; // 0x10
	int32_t Checksum; // 0x14
	uint32_t bChecksumMatch : 1; // 0x18
	EObjectEncoding Encoding; // 0x1c
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	FVector ContactVelocity[0x2]; // 0x1c
	ObjectProperty PhysMaterial[0x2]; // 0x38
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetId PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x50
};

struct FLocalizedStringSettingMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0x10
	TArray<FStringIdToStringMapping> ValueMappings; // 0x20
};

struct FMaxActorCallback {
	ObjectProperty Actor; // 0x0
	TArray<DelegateProperty> EnabledDelegates; // 0x8
	TArray<DelegateProperty> DisabledDelegates; // 0x18
	uint32_t bEnabled : 1; // 0x28
	float Distance; // 0x2c
};

struct FChildBoneBlendInfo {
	TArray<float> TargetPerBoneWeight; // 0x0
	FName InitTargetStartBone; // 0x10
	float InitPerBoneIncrease; // 0x18
	FName OldStartBone; // 0x1c
	float OldBoneIncrease; // 0x24
	TArray<char> TargetRequiredBones; // 0x28
};

struct FClientAdjustment {
	float TimeStamp; // 0x0
	EPhysics newPhysics; // 0x4
	FVector NewLoc; // 0x8
	FVector NewVel; // 0x14
	ObjectProperty NewBase; // 0x20
	FVector NewFloor; // 0x28
	char bAckGoodMove; // 0x34
};

struct FPlayerClubSyncResult {
	FUniqueNetId PlayerID; // 0x0
	ObjectProperty Error; // 0x48
};

struct FAttachment {
	ComponentProperty Component; // 0x0
	FName BoneName; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	FVector RelativeScale; // 0x28
};

struct FPreCombinedStaticMeshActor {
	ObjectProperty Mesh; // 0x0
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector PrePivot; // 0x20
	float DrawScale; // 0x2c
	FVector DrawScale3D; // 0x30
	FVector ComponentScale3D; // 0x3c
};

struct FRocketPassTierBonusRange {
	int32_t Start; // 0x0
	int32_t End; // 0x4
	int32_t Bonus; // 0x8
};

struct FColorMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x38
	FColor Constant; // 0x3c
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FPolySegmentSpan {
	FPointer Poly; // 0x0
	FVector P1; // 0x8
	FVector P2; // 0x14
};

struct FBindingPreset {
	FName PresetName; // 0x0
	FString DisplayName; // 0x8
};

struct FUserBugReportCategory {
	FName Id; // 0x0
	FName ParentId; // 0x8
	EUserBugReportCategoryType Type; // 0x10
	FString Label; // 0x18
};

struct FRPCTestParam {
	FRPCTestItem TestItem; // 0x0
	TArray<FRPCTestItem> TestItems; // 0x78
};

struct FCarStateData {
	float Throttle; // 0x0
	float WheelSpeed; // 0x4
	float EngineRPM; // 0x8
	float EngineLoad; // 0xc
};

struct FEmitterBaseInfo {
	ComponentProperty PSC; // 0x0
	ObjectProperty Base; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	uint32_t bInheritBaseScale : 1; // 0x28
};

struct FComponentTemplate {
	DelegateProperty Condition; // 0x0
	ObjectProperty Object; // 0x18
};

struct FRBVehicleSnapshot {
	FVehicleInputs Input; // 0x0
	FWheelContactData WheelContact0; // 0x20
	FWheelContactData WheelContact1; // 0x70
	FWheelContactData WheelContact2; // 0xc0
	FWheelContactData WheelContact3; // 0x110
	FCarInteractionData CarInteraction; // 0x160
	float OutputHandbrake; // 0x170
	int32_t LastHitBallFrame; // 0x174
};

struct FCovPosInfo {
	ObjectProperty Link; // 0x0
	int32_t LtSlotIdx; // 0x8
	int32_t RtSlotIdx; // 0xc
	float LtToRtPct; // 0x10
	FVector Location; // 0x14
	FVector Normal; // 0x20
	FVector Tangent; // 0x2c
};

struct FSoundThemeBinding {
	FName ThemeName; // 0x0
	ObjectProperty Theme; // 0x8
	FString ThemeClassName; // 0x10
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FLandscapeAddCollision {
	FVector Corners[0x4]; // 0x0
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	FVector ArriveWeight; // 0x28
	FVector LeaveWeight; // 0x34
	EInterpCurveMode InterpMode; // 0x40
};

struct FFieldSetupWave {
	TArray<FFieldSpawnInfoPair> SpawnList; // 0x0
	int32_t MaxWaveLoops; // 0x10
};

struct FClientConnectionStats {
	int32_t ConnectionCount; // 0x0
	int32_t PingTotal; // 0x4
	int32_t PingMin; // 0x8
	int32_t PingMax; // 0xc
	float CurrentAckTime; // 0x10
	float TotalAckTime; // 0x14
	float CurrentReceiveTime; // 0x18
	float TotalReceiveTime; // 0x1c
	int32_t TotalPacketsLost; // 0x20
	int32_t TotalPacketsInOut; // 0x24
	float InPacketLossPerSecMin; // 0x28
	float InPacketLossPerSecMax; // 0x2c
	float OutPacketLossPerSecMin; // 0x30
	float OutPacketLossPerSecMax; // 0x34
	int32_t MaxInBPS; // 0x38
	int32_t TotalInBPS; // 0x3c
	int32_t TotalInBytes; // 0x40
	int32_t MaxOutBPS; // 0x44
	int32_t TotalOutBPS; // 0x48
	int32_t TotalOutBytes; // 0x4c
	float CurrentLatency; // 0x50
	float CurrentJitter; // 0x54
};

struct FNxDestructibleDepthParameters {
	uint32_t TAKE_IMPACT_DAMAGE : 1; // 0x0
	uint32_t IGNORE_POSE_UPDATES : 1; // 0x0
	uint32_t IGNORE_RAYCAST_CALLBACKS : 1; // 0x0
	uint32_t IGNORE_CONTACT_CALLBACKS : 1; // 0x0
	uint32_t USER_FLAG_1 : 1; // 0x0
	uint32_t USER_FLAG_2 : 1; // 0x0
	uint32_t USER_FLAG_3 : 1; // 0x0
	uint32_t USER_FLAG_4 : 1; // 0x0
	EImpactDamageOverride ImpactDamageOverride; // 0x4
};

struct FFriendInfoCounts {
	int32_t OnlinePlatform; // 0x0
	int32_t InGamePlatform; // 0x4
	int32_t OnlineEpic; // 0x8
	int32_t InGameEpic; // 0xc
};

struct FDynamicallyLoadedPackage {
	FString Tag; // 0x0
	FString PackageName; // 0x10
};

struct FAchievementTitleAssociation {
	FString LocalizedTitleName; // 0x0
	int32_t TitleId; // 0x10
};

struct FParticleSystemLOD {
	uint32_t bLit : 1; // 0x0
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FLinearDOFSetup {
	char bLimited; // 0x0
	float LimitSize; // 0x4
};

struct FLoadingMovieMapInfo {
	EInputPlatformType InputType; // 0x0
	FString MapBaseName; // 0x8
	FString PlaylistName; // 0x18
	FString MapVariantName; // 0x28
	FString MaximumPlayerCounts; // 0x38
	FString ProtipMessage; // 0x48
	FString Language; // 0x58
	FString BuildEdition; // 0x68
	FString ProtipTitle; // 0x78
	EWeatherVariant WeatherVariant; // 0x88
	ObjectProperty LargeMapImage; // 0x90
	uint32_t bSetBackgroundVisible : 1; // 0x98
	uint32_t bDisplayGenericBackground : 1; // 0x98
};

struct FSimilarLogoGroup {
	TArray<ObjectProperty> SimilarLogoColorAssets; // 0x0
};

struct FPaintMaterialGroup {
	TArray<ObjectProperty> Materials; // 0x0
};

struct FPendingError {
	ObjectProperty Error; // 0x0
	DelegateProperty Callback; // 0x8
	FNone* ModalClass; // 0x20
};

struct FVoter {
	ObjectProperty PRI; // 0x0
	EVoteStatus Status; // 0x8
};

struct FShopAdData {
	FString IdleImageURL; // 0x0
	FString HoverImageURL; // 0x10
	FString ClickImageURL; // 0x20
	ObjectProperty IdleImage; // 0x30
	ObjectProperty HoverImage; // 0x38
	ObjectProperty ClickImage; // 0x40
	uint32_t bOpenURLInCoherent : 1; // 0x48
	FName Section; // 0x4c
	FString Link; // 0x58
};

struct FTraceHitInfo {
	ObjectProperty Material; // 0x0
	ObjectProperty PhysMaterial; // 0x8
	int32_t Item; // 0x10
	int32_t LevelIndex; // 0x14
	FName BoneName; // 0x18
	ComponentProperty HitComponent; // 0x20
};

struct Fuint {
	int32_t dummyint; // 0x0
};

struct FTitleFileCacheEntry : FTitleFile {
	FString LogicalName; // 0x28
	FString Hash; // 0x38
	ETitleFileFileOp FileOp; // 0x48
	FPointer Ar; // 0x50
};

struct FCurrentPostProcessVolumeInfo {
	FPostProcessSettings LastSettings; // 0x0
	ObjectProperty LastVolumeUsed; // 0x168
	float BlendStartTime; // 0x170
	float LastBlendTime; // 0x174
};

struct FGFxChatMessage {
	int32_t Team; // 0x0
	FString PlayerName; // 0x8
	FString Message; // 0x18
	EChatChannel ChatChannel; // 0x28
	uint32_t bLocalPlayer : 1; // 0x2c
	uint32_t bTransient : 1; // 0x2c
	FUniqueNetId SenderId; // 0x30
	uint32_t bPreset : 1; // 0x78
	EChatMessageType MessageType; // 0x7c
};

struct FReplayTypeData {
	FString FilePath; // 0x0
	FString ClassPath; // 0x10
};

struct FGFxRewardDrop {
	FName RewardName; // 0x0
	int32_t Total; // 0x8
	int32_t Base; // 0xc
	int32_t BaseLevel; // 0x10
	int32_t Level; // 0x14
};

struct FParticleEmitterReplayFrame {
	int32_t EmitterType; // 0x0
	int32_t OriginalEmitterIndex; // 0x4
	FPointer FrameState; // 0x8
};

struct FFindPrivateServerResult {
	FString IP; // 0x0
	FString ServerName; // 0x10
	FCustomMatchSettings Settings; // 0x20
	FString Host; // 0xb0
	int32_t Port; // 0xc0
};

struct FMcpUserCloudFilesEntry {
	FString UserId; // 0x0
	TArray<FTitleFileWeb> DownloadedFiles; // 0x10
	TArray<FMcpUserCloudFileInfo> EnumeratedFiles; // 0x20
	ObjectProperty HTTPRequestEnumerateFiles; // 0x30
};

struct FRandomStream_Mirror {
	int32_t Seed; // 0x0
};

struct FSetPlayerStorageRequestItem {
	FName Category; // 0x0
	int32_t Tick; // 0x8
	int32_t Checksum; // 0xc
	FString Data; // 0x10
	EObjectEncoding Encoding; // 0x20
};

struct FRigidBodyState {
	FVector Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector LinVel; // 0x20
	FVector AngVel; // 0x2c
	char bNewData; // 0x38
};

struct FSoundStateItem {
	FName StateName; // 0x0
	ObjectProperty Shell; // 0x8
	ESoundStatePriority Priority; // 0x10
};

struct FReplayImportCallbackData {
	FPointer Task; // 0x0
	DelegateProperty Callback; // 0x8
};

struct FEpicConvertFriendsSaveData {
	OnlinePlatform Platform; // 0x0
	QWordProperty LastPromptTime; // 0x8
	uint32_t bConvertPlatformFriends : 1; // 0x10
};

struct FGarageSlotCost {
	int32_t Id; // 0x0
	int32_t Amount; // 0x4
};

struct FMcpMessageList {
	FString ToUniqueUserId; // 0x0
	TArray<FMcpMessage> Messages; // 0x10
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	float ArriveWeight; // 0x10
	float LeaveWeight; // 0x14
	EInterpCurveMode InterpMode; // 0x18
};

struct FPsyNetBeaconReservation {
	FString ReservationID; // 0x0
	int32_t Playlist; // 0x10
	uint32_t IsBackfill : 1; // 0x14
	uint32_t IsBotMatch : 1; // 0x14
	TArray<FString> BotNames; // 0x18
	TArray<FPsyNetBeaconPlayerReservation> Players; // 0x28
	TArray<FPsyNetBeaconPartyReservation> Parties; // 0x38
};

struct FBeamTraceProps {
	float NextTraceTime; // 0x0
	FVector LastWorldLocation; // 0x4
	uint32_t LastWorldHit : 1; // 0x10
	ComponentProperty PSC; // 0x18
};

struct FCameraSettings {
	float XOffsetDistance; // 0x0
	float CameraOffsetPitch; // 0x4
};

struct FSaveSlotRequestState {
	FString McpId; // 0x0
	FString SaveSlotId; // 0x10
	ObjectProperty Request; // 0x20
};

struct FServerSetLoadoutParams {
	FName Title; // 0x0
	FServerSetLoadoutTeam Loadouts[0x2]; // 0x8
};

struct FMatchData {
	FUniqueNetId PlayerID; // 0x0
	int32_t ConsecutiveMatchesPlayed; // 0x48
};

struct FFilterProductSeries {
	FString Label; // 0x0
	uint32_t bSelected : 1; // 0x10
	int32_t SeriesID; // 0x14
};

struct FSaveObjectResult {
	ObjectProperty ObjectData; // 0x0
	ObjectProperty Error; // 0x8
	ESaveGameResult Code; // 0x10
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	FQuat ArriveWeight; // 0x40
	FQuat LeaveWeight; // 0x50
	EInterpCurveMode InterpMode; // 0x60
};

struct FPitchTekCarBodyContactData {
	uint32_t bHasContact : 1; // 0x0
	FVector Location; // 0x4
};

struct FVoiceRoomMemberStatus {
	uint32_t bLocal : 1; // 0x0
	uint32_t bSpeaking : 1; // 0x0
	uint32_t bSelfMuted : 1; // 0x0
	uint32_t bLocalMuted : 1; // 0x0
	uint32_t bAdminMuted : 1; // 0x0
	uint32_t bBlocked : 1; // 0x0
};

struct FDirtyObject {
	ObjectProperty Object; // 0x0
	ObjectProperty Property; // 0x8
	int32_t Index; // 0x10
};

struct FFakeData3 {
	TArray<FFakeData2> array1; // 0x0
	FString string1; // 0x10
	FFakeData1 struct1; // 0x20
	FName name1; // 0x58
	TArray<FFakeData2> array2; // 0x60
	TArray<FFakeData2> array3; // 0x70
	uint32_t bool1 : 1; // 0x80
	QWordProperty qword1; // 0x88
	float float1; // 0x90
	char byte1; // 0x94
	int32_t int1; // 0x98
	FakeDataEnum enum1; // 0x9c
	FFakeData2 struct2; // 0xa0
};

struct FSoftBodySpecialBoneInfo {
	FName BoneName; // 0x0
	SoftBodyBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0x10
};

struct FSceNpId {
	FSceNpOnlineId Handle; // 0x0
	QWordProperty Opt; // 0x18
	QWordProperty Reserved; // 0x20
};

struct FLegalTextVersion {
	int32_t TextHash; // 0x0
};

struct FSkeletalMeshLODDistanceInfo {
	float DisplayFactor; // 0x0
	float LODHysteresis; // 0x4
};

struct FGarageTeam {
	FString Label; // 0x0
	int32_t TeamColorID; // 0x10
	int32_t CustomColorID; // 0x14
	FProductHashID TeamFinishHashID; // 0x18
	FProductHashID CustomFinishHashID; // 0x1c
};

struct FSeasonPlayerStat {
	int32_t PlayerIndex; // 0x0
	FString StatName; // 0x8
	int32_t StatValue; // 0x18
};

struct FMarketplaceInventoryItem {
	FString ProductID; // 0x0
	EMediaItemType MediaItemType; // 0x10
	EInventoryItemState ItemState; // 0x11
	int32_t ConsumableBalance; // 0x14
	int32_t TitleId; // 0x18
	TArray<FString> ContainerIds; // 0x20
	QWordProperty StartDate; // 0x30
	QWordProperty EndDate; // 0x38
	QWordProperty RightsObtainedDate; // 0x40
	FString URL; // 0x48
	FString ConsumableUrl; // 0x58
};

struct FActorReference {
	ObjectProperty Actor; // 0x0
	FGuid Guid; // 0x8
};

struct FGarageComplexRow {
	int32_t RowID; // 0x0
	int32_t ProductID; // 0x4
};

struct FOnlinePlayerScore {
	FUniqueNetId PlayerID; // 0x0
	int32_t TeamID; // 0x48
	int32_t Score; // 0x4c
};

struct FShopCurrencyInfo {
	int32_t Id; // 0x0
	int32_t Amount; // 0x4
};

struct FSimTimeAdjustDebugData {
	float TimeLastSimTimeAdjustStarted; // 0x0
	int32_t NumSimTimeAdjustFrames; // 0x4
};

struct FCarSpawnData {
	ObjectProperty Controller; // 0x0
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
};

struct FLightmassPrimitiveSettings {
	uint32_t bUseTwoSidedLighting : 1; // 0x0
	uint32_t bShadowIndirectOnly : 1; // 0x0
	uint32_t bUseEmissiveForStaticLighting : 1; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float SpecularBoost; // 0x14
	float FullyOccludedSamplesFraction; // 0x18
};

struct FSimTimeScaleSettings {
	float FixedAdjustSimTimeRate; // 0x0
};

struct FPartyInfo {
	FUniqueNetId LeaderID; // 0x0
	TArray<FUniqueNetId> FollowerIds; // 0x48
	ObjectProperty VoterOwner; // 0x58
};

struct FLightmassLightSettings {
	float IndirectLightingScale; // 0x0
	float IndirectLightingSaturation; // 0x4
	float ShadowExponent; // 0x8
};

struct FTrajectorySplineFX {
	ObjectProperty Spline; // 0x0
};

struct FAnimBlendChild {
	FName Name; // 0x0
	ObjectProperty Anim; // 0x8
	float Weight; // 0x10
	float BlendWeight; // 0x14
	uint32_t bMirrorSkeleton : 1; // 0x18
	uint32_t bIsAdditive : 1; // 0x18
	int32_t DrawY; // 0x1c
};

struct FCrowdDefense {
	float DefenseZoneTime; // 0x0
	float DefenseZoneDistance; // 0x4
	float ReplayDelay; // 0x8
};

struct FSparseArray_Mirror {
	TArray<int32_t> Elements; // 0x0
	FBitArray_Mirror AllocationFlags; // 0x10
	int32_t FirstFreeIndex; // 0x30
	int32_t NumFreeIndices; // 0x34
};

struct FSwitchClassInfo {
	FName ClassName; // 0x0
	char bFallThru; // 0x8
};

struct FPBScope2D {
	FMatrix ScopeFrame; // 0x0
	float DimX; // 0x40
	float DimZ; // 0x44
};

struct FScheduledTournament {
	QWordProperty Time; // 0x0
	QWordProperty ScheduleID; // 0x8
	FString Description; // 0x10
	uint32_t bUpdateSkill : 1; // 0x20
	TArray<ObjectProperty> Tournaments; // 0x28
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FScalarParameterInterpStruct {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	float InterpTime; // 0xc
	float WarmupTime; // 0x10
};

struct FSeasonTeam {
	FString Name; // 0x0
	FName LogoAsset; // 0x10
	int32_t EliminationWeek; // 0x18
};

struct FRocketPassProduct {
	FProductHashID HashID; // 0x0
	int32_t Tier; // 0x4
};

struct FOnlineProductData {
	int32_t ProductID; // 0x0
	FProductInstanceID InstanceID; // 0x8
	int32_t SeriesID; // 0x18
	TArray<FOnlineProductAttribute> Attributes; // 0x20
	int32_t TradeHold; // 0x30
	QWordProperty AddedTimestamp; // 0x38
};

struct FDifficultyInfo {
	TArray<FFieldSetupWave> FieldSetupList; // 0x0
	int32_t TotalGameEventRounds; // 0x10
	int32_t TotalGameEventRoundsToWin; // 0x14
	float ResetCheckTime; // 0x18
	float ResetCheckTimeAfterBallTouch; // 0x1c
	float MinBallVelocityForDestroy; // 0x20
	float BallStartTime; // 0x24
};

struct FContinuousSimTimeScaleSettings {
	float TimeDilations[0x5]; // 0x0
	int32_t Inputs_Starved; // 0x14
	int32_t Inputs_Good; // 0x18
	int32_t Inputs_Saturated; // 0x1c
	int32_t Inputs_ExtremelySaturated; // 0x20
	int32_t Inputs_Max; // 0x24
	int32_t ExtraBufferMax; // 0x28
	float ExtraBufferHistorySeconds; // 0x2c
	float ExtraBufferUpdatePeriod; // 0x30
};

struct FDeferredPartToSpawn {
	int32_t ChunkIndex; // 0x0
	FVector InitialVel; // 0x4
	FVector InitialAngVel; // 0x10
	float RelativeScale; // 0x1c
	uint32_t bExplosion : 1; // 0x20
};

struct FBallPredictionInfo {
	float Time; // 0x0
	float ArchTopTime; // 0x4
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector ArchTop; // 0x20
	FVector ArchTopVelocity; // 0x2c
	uint32_t bHitWall : 1; // 0x38
	uint32_t bHitGround : 1; // 0x38
};

struct FLocalizedNameData {
	FString Name; // 0x0
	FString Position; // 0x10
};

struct FTourServerSettings {
	QWordProperty TournamentID; // 0x0
	int32_t MatchID; // 0x8
	FString GameTags; // 0x10
	EMatchTieBreaker TieBreaker; // 0x20
	char GameMode; // 0x21
	TArray<FName> DisabledMaps; // 0x28
	FName MapSetName; // 0x38
	int32_t SeriesLength; // 0x40
	int32_t TeamSize; // 0x44
	TArray<FTourTeam> Teams; // 0x48
	TArray<QWordProperty> BotTeams; // 0x58
	TArray<FTourMatchGame> Games; // 0x68
	TArray<FUniqueNetId> SpectatorPlayerIDs; // 0x78
	FUniqueNetId CreatorPlayerID; // 0x88
	char MinPlayersPerTeam; // 0xd0
	QWordProperty MatchExpireTimestamp; // 0xd8
	int32_t MinPlayersMetWaitTimeSeconds; // 0xe0
};

struct FAppliedBreakoutDamage {
	char Id; // 0x0
	FVector Location; // 0x4
	int32_t DamageIndex; // 0x10
	int32_t TotalDamage; // 0x14
};

struct FMTCatalogInfo {
	int32_t Id; // 0x0
	FString Title; // 0x8
	FString Description; // 0x18
	FString ImageURL; // 0x28
	FString TabTitle; // 0x38
	TArray<FOnlineProductData> Items; // 0x48
	TArray<FCurrency> Currencies; // 0x58
	FString PlatformProductID; // 0x68
	FString Category; // 0x78
	int32_t Price; // 0x88
	int32_t OriginalPrice; // 0x8c
	int32_t DiscountPercentage; // 0x90
	uint32_t bIsOwned : 1; // 0x94
};

struct FMTCartItem {
	int32_t CatalogID; // 0x0
	int32_t Count; // 0x4
};

struct FTerrainFilteredMaterial {
	uint32_t UseNoise : 1; // 0x0
	float NoiseScale; // 0x4
	float NoisePercent; // 0x8
	FFilterLimit MinHeight; // 0xc
	FFilterLimit MaxHeight; // 0x1c
	FFilterLimit MinSlope; // 0x2c
	FFilterLimit MaxSlope; // 0x3c
	float Alpha; // 0x4c
	ObjectProperty Material; // 0x50
};

struct FTrainingModeType {
	ETrainingType Type; // 0x0
};

struct FSHVector {
	float V[0x9]; // 0x0
	float Padding[0x3]; // 0x24
};

struct FAkRevSimUpdateParams {
	float Throttle; // 0x0
	float Brake; // 0x4
	float EngineFrictionScale; // 0x8
	float GroundFrictionScale; // 0xc
	float ClutchedGearRatio; // 0x10
	uint32_t bEnableUpShifting : 1; // 0x14
	FAkRevSimPhysicsControls Controls; // 0x18
	FAkRevSimFrame frame; // 0x38
};

struct FAvatarKey {
	FUniqueNetId PlayerID; // 0x0
	AvatarSize Size; // 0x48
};

struct FFireLinkItem {
	ECoverType SrcType; // 0x0
	ECoverAction SrcAction; // 0x1
	ECoverType DestType; // 0x2
	ECoverAction DestAction; // 0x3
};

struct FTeamUpdateInfo {
	QWordProperty TeamID; // 0x0
	int32_t Difficulty; // 0x8
};

struct FPBMeshCompInfo {
	ComponentProperty MeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FCameraTransition {
	ObjectProperty CameraState; // 0x0
	FViewTargetTransitionParams BlendParams; // 0x8
	float RemainingTime; // 0x18
	FCameraOrientation SnapshotPOV; // 0x1c
	uint32_t bStarted : 1; // 0x48
};

struct FOrbitCarData {
	ObjectProperty CarHit; // 0x0
	FVector OrbitAxis; // 0x8
	FVector OrbitLocation; // 0x14
	float RotationAngleRadians; // 0x20
	uint32_t bShouldOrbit : 1; // 0x24
};

struct FInlinePointerArray_Mirror {
	FPointer InlineData; // 0x0
	FArray_Mirror SecondaryData; // 0x8
};

struct FProjectileClassEventData {
	FName ProjectileClassName; // 0x0
};

struct FGFxPartyMember {
	FUniqueNetId PersonaId; // 0x0
	FString PlayerName; // 0x48
	FString ProfileId; // 0x58
	ObjectProperty PlayerAvatarTexture; // 0x68
	QWordProperty ClubID; // 0x70
	uint32_t bSplitScreen : 1; // 0x78
	uint32_t bLocalSplitScreen : 1; // 0x78
	uint32_t bHasProfile : 1; // 0x78
	uint32_t bPartyLeader : 1; // 0x78
	uint32_t bIsPlayerTrading : 1; // 0x78
	uint32_t bIsPlayerInMatch : 1; // 0x78
	uint32_t bPlayerCanTrade : 1; // 0x78
};

struct FActivateOp {
	ObjectProperty ActivatorOp; // 0x0
	ObjectProperty Op; // 0x8
	int32_t InputIdx; // 0x10
	float RemainingDelay; // 0x14
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
};

struct FBoostMeshOverride {
	ComponentProperty Mesh; // 0x0
	ObjectProperty CarType; // 0x8
	FString CarTypePath; // 0x10
};

struct FShopTabData {
	int32_t FromShopID; // 0x0
	int32_t NewShopID; // 0x4
	QWordProperty StartTimestamp; // 0x8
	QWordProperty EndTimestamp; // 0x10
	TArray<FShopItemData> ItemMetrics; // 0x18
};

struct FFontParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty FontValue; // 0x30
	int32_t FontPage; // 0x38
};

struct FVideoCardMetrics {
	FString Type; // 0x0
	int32_t RAM; // 0x10
};

struct FParticleParameterSet {
	TArray<FParticleSysParam> Parameters; // 0x0
	TArray<FParticleSysParam> DrivingParameters; // 0x10
};

struct FActivateFreeplayCommandOutParams {
	FFreeplayCommandsMetricsData PreActivationData; // 0x0
	ObjectProperty ExecutionError; // 0x58
};

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x0
	TArray<FPlane> PermutedVertexData; // 0x10
	TArray<int32_t> FaceTriData; // 0x20
	TArray<FVector> EdgeDirections; // 0x30
	TArray<FVector> FaceNormalDirections; // 0x40
	TArray<FPlane> FacePlaneData; // 0x50
	FBox ElemBox; // 0x60
};

struct FReverbSettings {
	uint32_t bApplyReverb : 1; // 0x0
	ReverbPreset ReverbType; // 0x4
	float Volume; // 0x8
	float FadeTime; // 0xc
};

struct FServerReservationData {
	FString BeaconURL; // 0x0
	FString ServerName; // 0x10
	int32_t Playlist; // 0x20
	FString Region; // 0x28
	FString ReservationID; // 0x38
	FString DSRToken; // 0x48
	ObjectProperty Keys; // 0x58
	FString JoinName; // 0x60
	FString JoinPassword; // 0x70
};

struct FChatBanInfo {
	QWordProperty Expiration; // 0x0
	uint32_t bPermanentlyBanned : 1; // 0x8
};

struct FSessionMemberInfo {
	FUniqueNetId PlayerNetId; // 0x0
	ESessionMemberStatus MemberStatus; // 0x48
};

struct FSwitchDLCInfo {
	FString Key; // 0x0
	FName Value; // 0x10
};

struct FRBPhysicsSnapshot {
	FReplicatedRBState RBState; // 0x0
	FWorldContactData WorldContact; // 0x40
	ObjectProperty PhysicsVolume; // 0x68
};

struct FPrivacySettings {
	FString ReceiveInvites; // 0x0
};

struct FCurrency {
	ECurrency Type; // 0x0
	FName Name; // 0x4
	uint32_t bCanBeTraded : 1; // 0xc
	int32_t TradeHold; // 0x10
	FCurrencyProductData ProductData; // 0x18
	int32_t CurrencyID; // 0x28
	int32_t Id; // 0x2c
	int32_t Amount; // 0x30
	ObjectProperty LargeImage; // 0x38
	ObjectProperty SmallImage; // 0x40
	FString LocalizedName; // 0x48
	QWordProperty UpdatedTimestamp; // 0x58
};

struct FExpressionInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0x10
	int32_t Mask; // 0x20
	int32_t MaskR; // 0x24
	int32_t MaskG; // 0x28
	int32_t MaskB; // 0x2c
	int32_t MaskA; // 0x30
	int32_t GCC64_Padding; // 0x34
};

struct FLoadObjectResult {
	FString FilePath; // 0x0
	ObjectProperty ObjectData; // 0x10
	ObjectProperty Error; // 0x18
	EBasicLoadResult Code; // 0x20
};

struct FMcpMessage {
	FString MessageId; // 0x0
	FString ToUniqueUserId; // 0x10
	FString FromUniqueUserId; // 0x20
	FString FromFriendlyName; // 0x30
	FString MessageType; // 0x40
	FString ValidUntil; // 0x50
	EMcpMessageCompressionType MessageCompressionType; // 0x60
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FCurveParameterPoint {
	FName ParameterName; // 0x0
	float InVal; // 0x8
	FVector OutVal; // 0xc
	FVector LeaveTangent; // 0x18
	FVector ArriveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x30
};

struct FSetSaveDataCallbackStruct {
	int32_t SlotIndex; // 0x0
	DelegateProperty Callback; // 0x8
};

struct FFriendHistoryKey {
	TArray<char> Key; // 0x0
	FString Name; // 0x10
};

struct FPhysXVerticalProperties {
	FPhysXEmitterVerticalProperties Emitters; // 0x0
};

struct FVehicleAxleData {
	float WheelRadius; // 0x0
	float WheelWidth; // 0x4
	FVector LocalRestPosition; // 0x8
};

struct FCachedDataRequest {
	FString URL; // 0x0
	FString Path; // 0x10
	ComponentProperty Headers; // 0x20
	ObjectProperty CachedWebData; // 0x28
	uint32_t bZipResponse : 1; // 0x30
	DelegateProperty Callback; // 0x38
};

struct FSteamPlayerDLCOwnershipState {
	FName Name; // 0x0
	QWordProperty AppID; // 0x8
	DLCOwnershipState State; // 0x10
};

struct FHostMigrationState {
	EHostMigrationProgress HostMigrationProgress; // 0x0
	float HostMigrationElapsedTime; // 0x4
	float HostMigrationTravelCountdown; // 0x8
	FString HostMigrationTravelURL; // 0x10
	uint32_t bHostMigrationEnabled : 1; // 0x20
};

struct FPlayerPermissionsList {
	FUniqueNetId PlayerID; // 0x0
	TArray<EOnlinePlayerPermission> Permissions; // 0x48
};

struct FWeightRule {
	FWeightNodeRule FirstNode; // 0x0
	FWeightNodeRule SecondNode; // 0x20
};

struct FGFxMusicPlaylist {
	FString Label; // 0x0
	ObjectProperty Icon; // 0x10
	uint32_t bSelected : 1; // 0x18
	FName PlaylistName; // 0x1c
	ObjectProperty Playlist; // 0x28
};

struct FGFxMapSelectionData {
	FName Name; // 0x0
	uint32_t bSelected : 1; // 0x8
};

struct FPartnerMapping {
	int32_t Id; // 0x0
	FString Name; // 0x8
};

struct FExternalTexture {
	FString Resource; // 0x0
	ObjectProperty Texture; // 0x10
};

struct FEncryptedKeyIndex {
	int32_t Index; // 0x0
};

struct FManagedValueSaveSlot {
	FString OwningMcpId; // 0x0
	FString SaveSlot; // 0x10
	TArray<FManagedValue> Values; // 0x20
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FVectorMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<FVector> MICResetVectors; // 0x10
};

struct FReportedPlayerInfo {
	FUniqueNetId Reporter; // 0x0
	FUniqueNetId Offender; // 0x48
	TArray<int32_t> ReasonIDs; // 0x90
	float ReportTimeStamp; // 0xa0
};

struct FGarageComplexSlot {
	int32_t SlotID; // 0x0
	FString Name; // 0x8
	uint32_t bUnlocked : 1; // 0x18
	int32_t TeamIndex; // 0x1c
	FRotator Rotation; // 0x20
	FGarageComplexLoadout SlotLoadouts[0x2]; // 0x30
};

struct FGraphLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
};

struct FViewData {
	int32_t ExitedViewID; // 0x0
	int32_t EnteredViewID; // 0x4
	QWordProperty StartTimestamp; // 0x8
	QWordProperty EndTimestamp; // 0x10
	TArray<FInteractableData> InteractableMetrics; // 0x18
};

struct FDebugCategory {
	FString Name; // 0x0
	TArray<FDebugHelpItem> Items; // 0x10
};

struct FGetLeaderboardBaseData {
	FString PlayerName; // 0x0
	FUniqueNetId PlayerID; // 0x10
	int32_t Value; // 0x58
	float MMR; // 0x5c
};

struct FAimOffsetProfile {
	FName ProfileName; // 0x0
	FVector2D HorizontalRange; // 0x8
	FVector2D VerticalRange; // 0x10
	TArray<FAimComponent> AimComponents; // 0x18
	FName AnimName_LU; // 0x28
	FName AnimName_LC; // 0x30
	FName AnimName_LD; // 0x38
	FName AnimName_CU; // 0x40
	FName AnimName_CC; // 0x48
	FName AnimName_CD; // 0x50
	FName AnimName_RU; // 0x58
	FName AnimName_RC; // 0x60
	FName AnimName_RD; // 0x68
};

struct FDynamicResourceProviderDefinition {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	FNone* ProviderClass; // 0x18
};

struct FSkeletalMeshOptimizationSettings {
	float MaxDeviationPercentage; // 0x0
	SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x4
	SkeletalMeshOptimizationImportance TextureImportance; // 0x5
	SkeletalMeshOptimizationImportance ShadingImportance; // 0x6
	SkeletalMeshOptimizationImportance SkinningImportance; // 0x7
	SkeletalMeshOptimizationNormalMode NormalMode; // 0x8
	float BoneReductionRatio; // 0xc
	int32_t MaxBonesPerVertex; // 0x10
	SkeletalMeshOptimizationType ReductionMethod; // 0x14
	float NumOfTrianglesPercentage; // 0x18
	float WeldingThreshold; // 0x1c
	uint32_t bRecalcNormals : 1; // 0x20
	float NormalsThreshold; // 0x24
};

struct FCustomInput {
	FString InputName; // 0x0
	FExpressionInput Input; // 0x10
};

struct FBTDynamicLinkData {
	FName LinkName; // 0x0
	ObjectProperty Node; // 0x8
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FApexClothingAssetInfo {
	TArray<FApexClothingLodInfo> ClothingLodInfo; // 0x0
	FName ClothingAssetName; // 0x10
};

struct FClientBandwidthTestData {
	EMeshBeaconBandwidthTestType TestType; // 0x0
	EMeshBeaconBandwidthTestState CurrentState; // 0x1
	int32_t NumBytesToSendTotal; // 0x4
	int32_t NumBytesSentTotal; // 0x8
	int32_t NumBytesSentLast; // 0xc
	float ElapsedTestTime; // 0x10
};

struct FPlayerDLCInfo {
	FUniqueNetId PlayerID; // 0x0
	TArray<FSteamPlayerDLCOwnershipState> DLCs; // 0x48
	DelegateProperty ValidationReadyDelegate; // 0x58
	float TimeLastOwnershipRequest; // 0x70
};

struct FMcpClashMobPushNotificationParams {
	int32_t bah; // 0x0
};

struct FFileNameToURLMapping {
	FName Filename; // 0x0
	FName UrlMapping; // 0x8
};

struct FLocalizedPostCreditData {
	TArray<FString> Lines; // 0x0
	TArray<OnlinePlatform> Platforms; // 0x10
};

struct FFTEGroup {
	FName GroupName; // 0x0
	FString RequirementInfo; // 0x8
	TArray<ObjectProperty> TriggerClumps; // 0x18
	uint32_t bCanBeDoneAgain : 1; // 0x28
	FTELegacyGroupType GroupUserType; // 0x2c
	int32_t GroupVersion; // 0x30
	TArray<FName> Checkpoints; // 0x38
};

struct FSteamJsonResponseGetPublisherAppOwnership {
	FSteamJsonResponseGetPublisherAppOwnership2 AppOwnership; // 0x0
};

struct FGFxDLCData {
	FString PackName; // 0x0
	FName Id; // 0x10
	int32_t ProductID; // 0x18
	FString SubItems; // 0x20
	FString Price; // 0x30
	FString DiscountPrice; // 0x40
	int32_t DiscountPercentage; // 0x50
	int32_t LabelSlotIndex; // 0x54
	uint32_t bUnlocked : 1; // 0x58
	uint32_t bIsNew : 1; // 0x58
	int32_t PurchaseTime; // 0x5c
};

struct FCachedLeaderboardData {
	FName LeaderboardId; // 0x0
	TArray<FLeaderboardData> DataList; // 0x8
	QWordProperty LastLeaderboardSyncTime; // 0x18
};

struct FReplicatedRBState {
	FQuat Quaternion; // 0x0
	FVector Location; // 0x10
	FVector LinearVelocity; // 0x1c
	FVector AngularVelocity; // 0x28
	float Time; // 0x34
	uint32_t bSleeping : 1; // 0x38
	uint32_t bNewData : 1; // 0x38
};

struct FPathSizeInfo {
	FName Desc; // 0x0
	float Radius; // 0x8
	float Height; // 0xc
	float CrouchHeight; // 0x10
	char PathColor; // 0x14
};

struct FRotator {
	int32_t Pitch; // 0x0
	int32_t Yaw; // 0x4
	int32_t Roll; // 0x8
};

struct FActorToLookAt {
	ObjectProperty Actor; // 0x0
	float Rating; // 0x8
	float EnteredTime; // 0xc
	float LastKnownDistance; // 0x10
	float StartTimeBeingLookedAt; // 0x14
	uint32_t CurrentlyBeingLookedAt : 1; // 0x18
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FBoneAngleMorph {
	float Angle; // 0x0
	float TargetWeight; // 0x4
};

struct FWorldAttractorData {
	uint32_t bEnabled : 1; // 0x0
	FVector Location; // 0x4
	EWorldAttractorFalloffType FalloffType; // 0x10
	float FalloffExponent; // 0x14
	float Range; // 0x18
	float Strength; // 0x1c
};

struct FCarInteractionConfig {
	float PushFactor; // 0x0
	FInterpCurveFloat BumperPushFactorCurveGround; // 0x8
	FInterpCurveFloat BumperPushFactorCurveAir; // 0x20
	FInterpCurveFloat ZPushFactorCurve; // 0x38
	float BumpInterval; // 0x50
	FBumpAngleCheckConfig COMAngleCheck; // 0x54
	FBumpAngleCheckConfig VictimHitAngleCheck; // 0x68
	FBumpAngleCheckConfig AttackerHitAngleCheck; // 0x7c
	FBumpAngleCurveCheckConfig VictimHitAngleCurveCheck; // 0x90
	uint32_t bCheckImpactNormal : 1; // 0xf8
	float ImpactNormalDotProductDemo; // 0xfc
	float ImpactNormalDotProductBump; // 0x100
};

struct FProductWithSettings {
	ObjectProperty Product; // 0x0
	ObjectProperty Paint; // 0x8
	ObjectProperty ESportsTeam; // 0x10
};

struct FInteriorSettings {
	uint32_t bIsWorldInfo : 1; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	uint32_t DisableBlend : 1; // 0x20
};

struct FLobbyMember {
	FUniqueNetId PlayerUID; // 0x0
	TArray<FLobbyMetaData> PlayerSettings; // 0x48
	FString OnlineName; // 0x58
};

struct FRenderThumbnailScene {
	ObjectProperty Thumbnail; // 0x0
	ObjectProperty Asset; // 0x8
	ObjectProperty OnlineProduct; // 0x10
	ObjectProperty Scene; // 0x18
	int32_t TextureWidth; // 0x20
	int32_t TextureHeight; // 0x24
	float NextRenderTime; // 0x28
	uint32_t bBeingRendered : 1; // 0x2c
	uint32_t bCanceled : 1; // 0x2c
};

struct FNetworkAdapterMetrics {
	TArray<FString> Types; // 0x0
};

struct FSaveDataTask {
	int32_t ControllerIndex; // 0x0
	FString Path; // 0x8
};

struct FPhysXSimulationProperties {
	uint32_t bUseHardware : 1; // 0x0
	uint32_t bFixedTimeStep : 1; // 0x0
	float TimeStep; // 0x4
	int32_t MaxSubSteps; // 0x8
};

struct FScalarParameterValueOverTime : FParameterValueOverTime {
	float ParameterValue; // 0x30
	FInterpCurveFloat ParameterValueCurve; // 0x38
};

struct FParticleEventDeathData : FParticleEventData {
	float ParticleTime; // 0x34
};

struct FPathStore {
	TArray<FEdgePointer> EdgeList; // 0x0
};

struct FSkillRating {
	float Mu; // 0x0
	float Sigma; // 0x4
};

struct FClientLoadoutOnlineDatas {
	FClientLoadoutOnlineData Loadouts[0x2]; // 0x0
	uint32_t bLoadoutSet : 1; // 0x20
	uint32_t bDeprecated : 1; // 0x20
};

struct FLocalizedStringSetting {
	int32_t Id; // 0x0
	int32_t ValueIndex; // 0x4
	EOnlineDataAdvertisementType AdvertisementType; // 0x8
};

struct FSoundClassAdjuster {
	ESoundClassName SoundClassName; // 0x0
	FName SoundClass; // 0x4
	float VolumeAdjuster; // 0xc
	float PitchAdjuster; // 0x10
	uint32_t bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FFTEChallengeInfo {
	FName GroupName; // 0x0
	FName CheckpointName; // 0x8
};

struct FBotLoadout {
	TArray<int32_t> Products; // 0x0
	TArray<int32_t> Paints; // 0x10
	FColor PrimaryColor; // 0x20
	FColor SecondaryColor; // 0x24
};

struct FWaveformSample {
	char LeftAmplitude; // 0x0
	char RightAmplitude; // 0x1
	char LeftTriggerAmplitude; // 0x2
	char RightTriggerAmplitude; // 0x3
	EWaveformFunction LeftFunction; // 0x4
	EWaveformFunction RightFunction; // 0x5
	EWaveformFunction LeftTriggerFunction; // 0x6
	EWaveformFunction RightTriggerFunction; // 0x7
	float Duration; // 0x8
};

struct FSpecialEventReward {
	int32_t StoreProductID; // 0x0
	int32_t ProductID; // 0x4
	int32_t SeriesID; // 0x8
	int32_t Cost; // 0xc
	int32_t CurrencyID; // 0x10
	int32_t MaxQuantityPerPlayer; // 0x14
	int32_t PurchasedQuantity; // 0x18
	TArray<FOnlineProductAttribute> Attributes; // 0x20
	FXPRewardData XPReward; // 0x30
};

struct FFakeData2 {
	FFakeData1 struct1; // 0x0
	FString string1; // 0x38
	FName name1; // 0x48
	uint32_t bool1 : 1; // 0x50
	QWordProperty qword1; // 0x58
	float float1; // 0x60
	char byte1; // 0x64
	int32_t int1; // 0x68
	FakeDataEnum enum1; // 0x6c
	TArray<FFakeData1> array1; // 0x70
	TArray<FString> array2; // 0x80
};

struct FTurningCircle {
	FVector Center; // 0x0
	float Radius; // 0xc
};

struct FActiveServerData {
	FServerReservationData Reservation; // 0x0
	FString BeaconURL; // 0x80
	FString PingURL; // 0x90
	FString GameURL; // 0xa0
	FString JoinCredentials; // 0xb0
};

struct FKCachedConvexData {
	TArray<FKCachedConvexDataElement> CachedConvexElements; // 0x0
};

struct FClubMember {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FOnlineProfileSetting {
	EOnlineProfilePropertyOwner Owner; // 0x0
	FSettingsProperty ProfileSetting; // 0x8
};

struct FParticleEventKismetData : FParticleEventData {
	uint32_t UsePSysCompLocation : 1; // 0x34
	FVector Normal; // 0x38
};

struct FTerrainDecoLayer {
	FString Name; // 0x0
	TArray<FTerrainDecoration> Decorations; // 0x10
	int32_t AlphaMapIndex; // 0x20
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FEventUploadConfig {
	EEventUploadType UploadType; // 0x0
	FString UploadUrl; // 0x8
	float Timeout; // 0x18
	uint32_t bUseCompression : 1; // 0x1c
};

struct FClubColorSet {
	char TeamColorID; // 0x0
	char CustomColorID; // 0x1
	uint32_t bTeamColorSet : 1; // 0x4
	uint32_t bCustomColorSet : 1; // 0x4
};

struct FMapPrefsMetric {
	int32_t Playlist; // 0x0
	TArray<FName> Likes; // 0x8
	TArray<FName> Dislikes; // 0x18
};

struct FPsyNetRequest {
	FName Id; // 0x0
	ObjectProperty Task; // 0x8
	float TimeoutTime; // 0x10
	float SendTime; // 0x14
};

struct FShopItem {
	int32_t ShopItemID; // 0x0
	uint32_t Purchasable : 1; // 0x4
	int32_t PurchasedQuantity; // 0x8
	int32_t MaxQuantityPerPlayer; // 0xc
	QWordProperty StartDate; // 0x10
	QWordProperty EndDate; // 0x18
	TArray<FShopDeliverable> DeliverableProducts; // 0x20
	TArray<FShopCurrencyInfo> DeliverableCurrencies; // 0x30
	TArray<FShopCost> Costs; // 0x40
	TArray<FString> FeaturedCollections; // 0x50
	TArray<int32_t> ShopItemLocations; // 0x60
	FString Title; // 0x70
	FString Description; // 0x80
	TArray<FOnlineShopAttribute> Attributes; // 0x90
	FString ImageURL; // 0xa0
	ObjectProperty ItemTexture; // 0xb0
	uint32_t bOwnsAllUntradeableProducts : 1; // 0xb8
};

struct FLensFlareElement {
	FName ElementName; // 0x0
	float RayDistance; // 0x8
	uint32_t bIsEnabled : 1; // 0xc
	uint32_t bUseSourceDistance : 1; // 0xc
	uint32_t bNormalizeRadialDistance : 1; // 0xc
	uint32_t bModulateColorBySource : 1; // 0xc
	FVector Size; // 0x10
	TArray<ObjectProperty> LFMaterials; // 0x20
	FRawDistributionFloat LFMaterialIndex; // 0x30
	FRawDistributionFloat Scaling; // 0x58
	FRawDistributionVector AxisScaling; // 0x80
	FRawDistributionFloat Rotation; // 0xa8
	uint32_t bOrientTowardsSource : 1; // 0xd0
	FRawDistributionVector Color; // 0xd8
	FRawDistributionFloat Alpha; // 0x100
	FRawDistributionVector Offset; // 0x128
	FRawDistributionVector DistMap_Scale; // 0x150
	FRawDistributionVector DistMap_Color; // 0x178
	FRawDistributionFloat DistMap_Alpha; // 0x1a0
};

struct FNavReference {
	ObjectProperty Nav; // 0x0
	FGuid Guid; // 0x8
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FSteamJsonResponseGetPublisherAppOwnership3 {
	QWordProperty AppID; // 0x0
	QWordProperty OwnerSteamID; // 0x8
	uint32_t OwnsApp : 1; // 0x10
	uint32_t Permanent : 1; // 0x10
	FString TimeStamp; // 0x18
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FBeamModifierOptions {
	uint32_t bModify : 1; // 0x0
	uint32_t bScale : 1; // 0x0
	uint32_t bLock : 1; // 0x0
};

struct FPartyByTeam {
	FUniqueNetId PartyID; // 0x0
	char Team; // 0x48
	int32_t Size; // 0x4c
};

struct FServiceSubscription {
	FNone* Class; // 0x0
	DelegateProperty Callback; // 0x8
};

struct FVehicleInputs {
	float Throttle; // 0x0
	float Steer; // 0x4
	float Pitch; // 0x8
	float Yaw; // 0xc
	float Roll; // 0x10
	float DodgeForward; // 0x14
	float DodgeRight; // 0x18
	uint32_t bHandbrake : 1; // 0x1c
	uint32_t bJump : 1; // 0x1c
	uint32_t bActivateBoost : 1; // 0x1c
	uint32_t bHoldingBoost : 1; // 0x1c
	uint32_t bJumped : 1; // 0x1c
	uint32_t bGrab : 1; // 0x1c
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0x10
	FExpressionInput HeightInput; // 0x48
	float PreviewWeight; // 0x80
	FPointer InstanceOverride; // 0x88
};

struct FServerConnectionInfo {
	FString ServerAddress; // 0x0
	FString BeaconAddress; // 0x10
	FString PingAddress; // 0x20
	FString ServerName; // 0x30
};

struct FWordFilterPair {
	FString Id; // 0x0
	FString Key; // 0x10
	FString Value; // 0x20
	EWordFilterUsage Usage; // 0x30
	uint32_t bPending : 1; // 0x34
	float LastRequestTime; // 0x38
	ObjectProperty Error; // 0x40
	DelegateProperty Callback; // 0x48
	DelegateProperty ErrorCallback; // 0x60
};

struct FBumpAngleCurveCheckConfig {
	uint32_t bEnabled : 1; // 0x0
	FInterpCurveFloat BumpAngleCurveYaw; // 0x8
	FInterpCurveFloat BumpAngleCurvePitch; // 0x20
	FInterpCurveFloat DemolishAngleCurveYaw; // 0x38
	FInterpCurveFloat DemolishAngleCurvePitch; // 0x50
};

struct FFireLink {
	TArray<char> Interactions; // 0x0
	int32_t PackedProperties_CoverPairRefAndDynamicInfo; // 0x10
	uint32_t bFallbackLink : 1; // 0x14
	uint32_t bDynamicIndexInited : 1; // 0x14
};

struct FIntroCarInfo {
	int32_t TemplateIndex; // 0x0
	FString TemplateName; // 0x8
	FString TemplateDescription; // 0x18
};

struct FUIPlayerBinding : FPlayerBinding {
	FString UIKey; // 0x30
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FOnlinePersonaData {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
	FString PresenceInfo; // 0x58
	FString PresenceState; // 0x68
	FPsyTag PsyTag; // 0x78
};

struct FNamedObjectProperty {
	FName ObjectPropertyName; // 0x0
	FString ObjectPropertyValue; // 0x8
};

struct FEulaVersion {
	int32_t TextHash; // 0x0
};

struct FObjectProviderSubscription {
	FNone* ObjClass; // 0x0
	DelegateProperty Callback; // 0x8
	uint32_t bFireOnce : 1; // 0x20
};

struct FMcpGroupMember {
	FString MemberId; // 0x0
	EMcpGroupAcceptState AcceptState; // 0x10
};

struct FCategorySettingPair {
	FName Category; // 0x0
	FName Setting; // 0x8
};

struct FWeaponClassEventData {
	FName WeaponClassName; // 0x0
};

struct FSMMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x8
};

struct FTeamInformation {
	int32_t TeamIndex; // 0x0
	FString TeamName; // 0x8
	FColor TeamColor; // 0x18
	int32_t MaxSize; // 0x1c
};

struct FPlayerStorageArrayProvider {
	int32_t PlayerStorageId; // 0x0
	ObjectProperty Provider; // 0x8
};

struct FPickupData {
	ObjectProperty Instigator; // 0x0
	uint32_t bPickedUp : 1; // 0x8
};

struct FReplacementProduct {
	int32_t ProhibitedID; // 0x0
	uint32_t bShowForOwningClient : 1; // 0x4
	FOnlineProductData Replacement; // 0x8
	ObjectProperty ReplacementInstance; // 0x48
};

struct FTrajectorySetup {
	float TotalSimulateTime; // 0x0
	uint32_t bAlwaysEnabled : 1; // 0x4
	uint32_t bUpdatePathEveryFrame : 1; // 0x4
	int32_t TotalPoints; // 0x8
	int32_t MaxStepsPerFrame; // 0xc
	int32_t QuickTrajectorySteps; // 0x10
};

struct FLightmassMaterialInterfaceSettings {
	uint32_t bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float SpecularBoost; // 0xc
	float ExportResolutionScale; // 0x10
	float DistanceFieldPenumbraScale; // 0x14
	uint32_t bOverrideCastShadowAsMasked : 1; // 0x18
	uint32_t bOverrideEmissiveBoost : 1; // 0x18
	uint32_t bOverrideDiffuseBoost : 1; // 0x18
	uint32_t bOverrideSpecularBoost : 1; // 0x18
	uint32_t bOverrideExportResolutionScale : 1; // 0x18
	uint32_t bOverrideDistanceFieldPenumbraScale : 1; // 0x18
};

struct FEOSPermissionsResult {
	uint32_t Disabled : 1; // 0x0
	uint32_t AllowedToAcquire : 1; // 0x0
	uint32_t AllowedToMakePurchases : 1; // 0x0
	uint32_t CanSeeMatureLanguage : 1; // 0x0
	uint32_t CanAcceptFriendRequest : 1; // 0x0
	uint32_t CanRecieveInGameItems : 1; // 0x0
	uint32_t CanSeeThirdPartyNames : 1; // 0x0
	uint32_t CanDisplayMyUserName : 1; // 0x0
	uint32_t CanSeeOtherPlayersNames : 1; // 0x0
	uint32_t CanUseVoiceChat : 1; // 0x0
	uint32_t CanVoiceChatWithUnknowns : 1; // 0x0
	uint32_t CanUseHousepartyCasting : 1; // 0x0
	FString PlaytimeReportingFrequency; // 0x8
	uint32_t PurchaseReportingEnabled : 1; // 0x18
	uint32_t CanUseTextChat : 1; // 0x18
	FString UgcViewing; // 0x20
	FString UgcSharing; // 0x30
	FString VoiceChat; // 0x40
	FString TextChat; // 0x50
};

struct FActiveSound {
	ObjectProperty Sound; // 0x0
	int32_t PlayId; // 0x8
	int32_t StopId; // 0xc
};

struct FPartyMemberServer {
	FString ServerName; // 0x0
	FString BeaconAddress; // 0x10
	FString CustomPassword; // 0x20
	FString JoinName; // 0x30
	FString JoinPassword; // 0x40
	int32_t PlaylistId; // 0x50
};

struct FOnlineMapData {
	ObjectProperty Map; // 0x0
	float Frequency; // 0x8
};

struct FGFxPsyTagSearchResult {
	FUniqueNetId PersonaId; // 0x0
	int32_t NumFriendsInCommon; // 0x48
};

struct FTourTeam {
	QWordProperty TeamID; // 0x0
	FCustomMatchTeamSettings Settings; // 0x8
	TArray<FTourPlayer> Players; // 0x28
	QWordProperty Seed; // 0x38
	int32_t Difficulty; // 0x40
};

struct FPreviewSkelMeshStruct {
	FName DisplayName; // 0x0
	ObjectProperty PreviewSkelMesh; // 0x8
	TArray<ObjectProperty> PreviewMorphSets; // 0x10
};

struct FGameSettingsCfg {
	FNone* GameSettingsClass; // 0x0
	ObjectProperty Provider; // 0x8
	ObjectProperty GameSettings; // 0x10
	FName SettingsName; // 0x18
};

struct FMobileColorGradingParams {
	float TransitionTime; // 0x0
	float Blend; // 0x4
	float Desaturation; // 0x8
	FLinearColor HighLights; // 0xc
	FLinearColor MidTones; // 0x1c
	FLinearColor Shadows; // 0x2c
};

struct FAttachToParameterWithUnlockAxes {
	FName Parameter; // 0x0
	EAttachActorLocationUnlockFlags IgnoredAxis; // 0x8
};

struct FIntPair {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FOrbitOptions {
	uint32_t bProcessDuringSpawn : 1; // 0x0
	uint32_t bProcessDuringUpdate : 1; // 0x0
	uint32_t bUseEmitterTime : 1; // 0x0
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FFileUploadData {
	ObjectProperty BugReport; // 0x0
	FString BugID; // 0x8
	FString Folder; // 0x18
	FString FilePath; // 0x28
	EFileTruncateType TruncateType; // 0x38
};

struct FFilterProductPaint {
	FString Label; // 0x0
	uint32_t bSelected : 1; // 0x10
	int32_t PaintID; // 0x14
	int32_t PreviewQuantity; // 0x18
};

struct FDepartmentData {
	FString DepartmentTitle; // 0x0
	FString Name; // 0x10
	FString Position; // 0x20
};

struct FEOSPermissionsResponse {
	FEOSPermissionsResult Result; // 0x0
	FEOSPermissionsResult NamespaceSetting; // 0x60
	FEOSPermissionsResult UserSetting; // 0xc0
};

struct FPlaylistPopulation {
	int32_t PlaylistId; // 0x0
	int32_t WorldwideTotal; // 0x4
	int32_t RegionTotal; // 0x8
};

struct FAimComponent {
	FName BoneName; // 0x0
	FAimTransform LU; // 0x10
	FAimTransform LC; // 0x30
	FAimTransform LD; // 0x50
	FAimTransform CU; // 0x70
	FAimTransform CC; // 0x90
	FAimTransform CD; // 0xb0
	FAimTransform RU; // 0xd0
	FAimTransform RC; // 0xf0
	FAimTransform RD; // 0x110
};

struct FRawAxisValue {
	float Value; // 0x0
	QWordProperty LastFrameChanged; // 0x8
};

struct FClientConnectionRequest {
	FUniqueNetId PlayerNetId; // 0x0
	ENATType NatType; // 0x48
	uint32_t bCanHostVs : 1; // 0x4c
	float GoodHostRatio; // 0x50
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0x58
	int32_t MinutesSinceLastTest; // 0x68
};

struct FPsyNetKeys {
	FString Environment; // 0x0
	FString PsyNetAuth; // 0x10
	FString SteamPublisher; // 0x20
};

struct FSceNpOnlineId {
	QWordProperty Data[0x2]; // 0x0
	char Term; // 0x10
	char Dummy[0x3]; // 0x11
};

struct FFakeData4 {
	FFakeData2 struct2; // 0x0
	TArray<FFakeData3> array1; // 0x90
	FFakeData1 struct1; // 0xa0
	TArray<FFakeData2> array2; // 0xd8
	FString string1; // 0xe8
	FName name1; // 0xf8
	uint32_t bool1 : 1; // 0x100
	QWordProperty qword1; // 0x108
	float float1; // 0x110
	char byte1; // 0x114
	int32_t int1; // 0x118
	FakeDataEnum enum1; // 0x11c
};

struct FTextureCoordinates {
	float U; // 0x0
	float V; // 0x4
	float UL; // 0x8
	float VL; // 0xc
};

struct FHatPointer {
	QWordProperty Dummy; // 0x0
};

struct FMenuSequencePair {
	FName MenuSequence; // 0x0
	FName MenuID; // 0x8
};

struct FCrosshairExtentInfo {
	FVector Extent; // 0x0
	float minDot; // 0xc
};

struct FVanityQuerySet {
	TArray<FUniqueNetId> PlayerIDs; // 0x0
	EVanityType VanityType; // 0x10
	uint32_t bForced : 1; // 0x14
};

struct FGFxPlaylistType {
	FName PlaylistTypeID; // 0x0
	FString Label; // 0x8
};

struct FCalculateLaunchVectorInParams {
	FVector StartLocation; // 0x0
	FVector TargetLocation; // 0xc
	float Gravity; // 0x18
	float HorizontalSpeed; // 0x1c
	float MaxVerticalLaunchSpeedRatio; // 0x20
};

struct FInstanceToSlotRow {
	FProductInstanceID InstanceID; // 0x0
	int32_t SlotIndex; // 0x10
	int32_t TeamIndex; // 0x14
};

struct FImageLayout {
	TArray<char> Data; // 0x0
	int32_t SizeX; // 0x10
	int32_t SizeY; // 0x14
};

struct FTrailSamplePoint {
	float RelativeTime; // 0x0
	FTrailSocketSamplePoint FirstEdgeSample; // 0x4
	FTrailSocketSamplePoint ControlPointSample; // 0x1c
	FTrailSocketSamplePoint SecondEdgeSample; // 0x34
};

struct FPickupReplacement {
	ObjectProperty Body; // 0x0
	ObjectProperty Pickup; // 0x8
};

struct FGFxDirtyTable {
	FName Name; // 0x0
	TArray<FGFxDirtyRow> DirtyRows; // 0x8
};

struct FOnlineImageDownload {
	FString URL; // 0x0
	ObjectProperty HTTPRequest; // 0x10
	EOnlineImageDownloadState Status; // 0x18
	ObjectProperty Texture; // 0x20
	DelegateProperty DecodedCallbacks; // 0x28
};

struct FSeriesTeam {
	TArray<FUniqueNetId> Players; // 0x0
	int32_t GamesWon; // 0x10
};

struct FGoalPenetrationData {
	ComponentProperty Goal; // 0x0
	FVector PlaneLocation; // 0x8
	FVector PlaneNormal; // 0x14
	float PenetrationDistance; // 0x20
};

struct FPrimitiveComponentProfile {
	FString ContentName; // 0x0
	TArray<ComponentProperty> Components; // 0x10
	FRenderProfile InclusiveProfile; // 0x20
	FRenderProfile ExclusiveProfile; // 0x48
};

struct FLocalTalker {
	FUniqueNetId TalkerId; // 0x0
	uint32_t bHasVoice : 1; // 0x48
	uint32_t bHasNetworkedVoice : 1; // 0x48
	uint32_t bIsRecognizingSpeech : 1; // 0x48
	uint32_t bWasTalking : 1; // 0x48
	uint32_t bIsTalking : 1; // 0x48
	uint32_t bIsRegistered : 1; // 0x48
};

struct FTierSkillRating : FSkillRating {
	int32_t Tier; // 0x8
	int32_t Division; // 0xc
	int32_t MatchesPlayed; // 0x10
	int32_t PlacementMatchesPlayed; // 0x14
	int32_t WinStreak; // 0x18
	float MMR; // 0x1c
};

struct FThrowSetting {
	float Pitch; // 0x0
	float LinearScale; // 0x4
	float AngularScale; // 0x8
	float MinLinearForce; // 0xc
	float MaxLinearForce; // 0x10
	float MinAngularForce; // 0x14
	float MaxAngularForce; // 0x18
};

struct FAddMappingRequest {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
	ObjectProperty Request; // 0x30
};

struct FLUTBlender {
	TArray<ObjectProperty> LUTTextures; // 0x0
	TArray<float> LUTWeights; // 0x10
	uint32_t bHasChanged : 1; // 0x20
};

struct FLensFlareElementMaterials {
	TArray<ObjectProperty> ElementMaterials; // 0x0
};

struct FRenderCommandFence {
	int32_t NumPendingFences; // 0x0
};

struct FGFxDataStoreTable {
	FName Name; // 0x0
	TArray<FGFxDataStoreColumn> Columns; // 0x8
	TArray<FGFxDataStoreRow> Rows; // 0x18
	uint32_t bLevelTransitionPersistent : 1; // 0x28
	FMap_Mirror PrimaryKeyMap; // 0x30
};

struct FVehicleAxleSettings {
	float WheelMeshRadius; // 0x0
	float WheelWidth; // 0x4
	float WheelMeshOffsetSide; // 0x8
	FVehicleWheelSettings LeftWheel; // 0xc
	FVehicleWheelSettings RightWheel; // 0x14
	float WheelRadius; // 0x1c
	float WheelOffsetForward; // 0x20
	float WheelOffsetSide; // 0x24
};

struct FAdHocStationInfo {
	FString Username; // 0x0
};

struct FPitchTekTextureDecalSettings {
	uint32_t bDrawColorDecal : 1; // 0x0
	float ColorTextureScale; // 0x4
	ObjectProperty ColorTexture; // 0x8
	uint32_t bDrawDataDecal : 1; // 0x10
	float DataTextureScale; // 0x14
	ObjectProperty DataTexture; // 0x18
};

struct FContainerInfo {
	int32_t SeriesID; // 0x0
	int32_t ProductID; // 0x4
	FString PossibleContents; // 0x8
};

struct FGFxUserBugReportCategory {
	FName Id; // 0x0
	EUserBugReportCategoryType Type; // 0x8
	FString Label; // 0x10
};

struct FReplayPlayerStats {
	FString Name; // 0x0
	OnlinePlatform Platform; // 0x10
	QWordProperty OnlineID; // 0x18
	int32_t Team; // 0x20
	int32_t Score; // 0x24
	int32_t Goals; // 0x28
	int32_t Assists; // 0x2c
	int32_t Saves; // 0x30
	int32_t Shots; // 0x34
	uint32_t bBot : 1; // 0x38
};

struct FPlaylist {
	TArray<FConfiguredGameSetting> ConfiguredGames; // 0x0
	int32_t PlaylistId; // 0x10
	int32_t LoadBalanceId; // 0x14
	FString LocalizationString; // 0x18
	TArray<int32_t> ContentIds; // 0x28
	int32_t TeamSize; // 0x38
	int32_t TeamCount; // 0x3c
	int32_t MaxPartySize; // 0x40
	FString Name; // 0x48
	FString URL; // 0x58
	int32_t MatchType; // 0x68
	uint32_t bDisableDedicatedServerSearches : 1; // 0x6c
	TArray<FName> MapCycle; // 0x70
};

struct FStatData {
	FName EventName; // 0x0
	int32_t Count; // 0x8
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FStringIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
	uint32_t bIsWildcard : 1; // 0xc
};

struct FPredictedPosition {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
};

struct FChatPresetMessageGroup {
	uint32_t bTeam : 1; // 0x0
	FString Label; // 0x8
};

struct FOrientation {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FPartyMember {
	FUniqueNetId PrimaryMemberId; // 0x0
	FUniqueNetId MemberId; // 0x48
	FString MemberName; // 0x90
	int32_t MatchmakeRestrictions; // 0xa0
	int32_t LocalControllerId; // 0xa4
	ECrossPlatformChatState CrossChatState; // 0xa8
	uint32_t bDisableCrossPlay : 1; // 0xac
	FUniqueNetId TradingMemberId; // 0xb0
	FGuid TradeId; // 0xf8
	uint32_t bReadyToLockTrade : 1; // 0x108
	uint32_t bReadyToConfirmTrade : 1; // 0x108
	FPartyMemberServer Server; // 0x110
	FUniqueLobbyId PlatformParty; // 0x168
};

struct FAudioGear {
	FAudioMinMax RPMShiftDownRange; // 0x0
	FAudioMinMax RPMShiftUpRange; // 0x8
};

struct FSpecialEventData {
	int32_t Id; // 0x0
	FString Name; // 0x8
	QWordProperty StartTime; // 0x18
	QWordProperty EndTime; // 0x20
	int32_t CurrencyID; // 0x28
};

struct FObjectProviderPendingCallback {
	DelegateProperty Callback; // 0x0
	ObjectProperty Value; // 0x18
};

struct FMaterialScalarParam {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FShopCurrency {
	ECurrency Type; // 0x0
	int32_t Id; // 0x4
	ObjectProperty SmallImage; // 0x8
	ObjectProperty LargeImage; // 0x10
	int32_t Amount; // 0x18
	FString Name; // 0x20
	FString LocalizedName; // 0x30
	uint32_t bCanBeTraded : 1; // 0x40
	int32_t TradeHold; // 0x44
	FCurrencyProductData ProductData; // 0x48
};

struct FChatPresetGroupOverride {
	int32_t GroupIndex; // 0x0
	FString GroupName; // 0x8
	int32_t MessageIDOffset; // 0x18
	uint32_t bTeam : 1; // 0x1c
};

struct FDestructionProductValue {
	FProductInstanceID ProductInstanceID; // 0x0
	TArray<FShopCurrencyInfo> Value; // 0x10
};

struct FCalculateRedirectPassLocationInParams {
	FVector BallStartLocation; // 0x0
	FVector CarStartLocation; // 0xc
	FVector CarStartVelocity; // 0x18
	FVector BestGoalLocation; // 0x24
	float VelocityWeight; // 0x30
	float VelocityZWeight; // 0x34
	float GoalWeight; // 0x38
	float BallHorizontalSpeed; // 0x3c
	float MaxGoalLeading; // 0x40
	float AdditionalTargetHeight; // 0x44
	int32_t Iterations; // 0x48
};

struct FPhysXSceneProperties {
	FPhysXSimulationProperties PrimaryScene; // 0x0
	FPhysXSimulationProperties CompartmentRigidBody; // 0xc
	FPhysXSimulationProperties CompartmentFluid; // 0x18
	FPhysXSimulationProperties CompartmentCloth; // 0x24
	FPhysXSimulationProperties CompartmentSoftBody; // 0x30
};

struct FDamagePair {
	FName DamageCauserName; // 0x0
	FDamageParameters Params; // 0x8
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	FColor EnvironmentColor; // 0x8
	float EnvironmentIntensity; // 0xc
	uint32_t bEnableAdvancedEnvironmentColor : 1; // 0x10
	FColor EnvironmentSunColor; // 0x14
	float EnvironmentSunIntensity; // 0x18
	float EnvironmentLightTerminatorAngle; // 0x1c
	FVector EnvironmentLightDirection; // 0x20
	float EmissiveBoost; // 0x2c
	float DiffuseBoost; // 0x30
	float SpecularBoost; // 0x34
	float IndirectNormalInfluenceBoost; // 0x38
	uint32_t bUseAmbientOcclusion : 1; // 0x3c
	uint32_t bEnableImageReflectionShadowing : 1; // 0x3c
	float DirectIlluminationOcclusionFraction; // 0x40
	float IndirectIlluminationOcclusionFraction; // 0x44
	float OcclusionExponent; // 0x48
	float FullyOccludedSamplesFraction; // 0x4c
	float MaxOcclusionDistance; // 0x50
	uint32_t bVisualizeMaterialDiffuse : 1; // 0x54
	uint32_t bVisualizeAmbientOcclusion : 1; // 0x54
	uint32_t bCompressShadowmap : 1; // 0x54
};

struct FOnlineMessageHandler {
	FNone* MessageClass; // 0x0
	TArray<DelegateProperty> Delegates; // 0x8
};

struct FChatSpamData {
	float RiseAmount; // 0x0
	float RiseMultiplier; // 0x4
	float DecayRate; // 0x8
	float MaxValue; // 0xc
	float Value; // 0x10
	float LastChatTime; // 0x14
};

struct FThreadSafeCounter {
	int32_t Value; // 0x0
};

struct FRocketPassUnlock {
	int32_t Tier; // 0x0
	TArray<FOnlineProductData> ProductData; // 0x8
	TArray<FOnlineXPReward> RewardDrops; // 0x18
	TArray<FCurrency> CurrencyDrops; // 0x28
};

struct FBallData {
	ObjectProperty Ball; // 0x0
	float Altitude; // 0x8
	float AerialSkill; // 0xc
	ObjectProperty LastHitBy; // 0x10
	float LastHitTime; // 0x18
};

struct FSoftBodyTetraLink {
	int32_t Index; // 0x0
	FVector Bary; // 0x4
};

struct FMetricsEvent {
	FUniqueNetId PlayerID; // 0x0
	float TimeSeconds; // 0x48
	int32_t Version; // 0x4c
	FString EventName; // 0x50
	FString EventData; // 0x60
};

struct FNetworkLimit {
	float Min; // 0x0
	float Max; // 0x4
	float OldMin; // 0x8
	float OldMax; // 0xc
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FAnimSetBakeAndPruneStatus {
	FString AnimSetName; // 0x0
	uint32_t bReferencedButUnused : 1; // 0x10
	uint32_t bSkipBakeAndPrune : 1; // 0x10
	uint32_t bSkipCooking : 1; // 0x10
};

struct FObjectPropertyInjection {
	ObjectProperty Subscriber; // 0x0
	ObjectProperty Property; // 0x8
};

struct FBugReportDescriptionData {
	FString Title; // 0x0
	FString ShortTitle; // 0x10
	FString MetaTitle; // 0x20
	FString Description; // 0x30
	FString Email; // 0x40
};

struct FWorldFractureSettings {
	float ChanceOfPhysicsChunkOverride; // 0x0
	uint32_t bEnableChanceOfPhysicsChunkOverride : 1; // 0x4
	uint32_t bLimitExplosionChunkSize : 1; // 0x4
	float MaxExplosionChunkSize; // 0x8
	uint32_t bLimitDamageChunkSize : 1; // 0xc
	float MaxDamageChunkSize; // 0x10
	int32_t MaxNumFacturedChunksToSpawnInAFrame; // 0x14
	float FractureExplosionVelScale; // 0x18
};

struct FAuthSession : FBaseAuthSession {
	EAuthStatus AuthStatus; // 0x60
	int32_t AuthTicketUID; // 0x64
};

struct FExposedLink {
	FCoverReference TargetActor; // 0x0
	char ExposedScale; // 0x20
};

struct FOnlineStatusMappingEOS {
	int32_t StatusId; // 0x0
	FString StatusString; // 0x8
};

struct FMcpInventorySaveSlot {
	FString OwningMcpId; // 0x0
	FString SaveSlotId; // 0x10
	TArray<FMcpInventoryItem> Items; // 0x20
};

struct FInputBufferStats {
	char OverBufferFrames; // 0x0
	char UnderBufferFrames; // 0x1
	char InputBufferLow; // 0x2
	char InputBufferHigh; // 0x3
	char InputBufferTarget; // 0x4
};

struct FPaintColorParameterOverride {
	FName PaintParameterName; // 0x0
	EPaintColorVariant PaintType; // 0x8
	ObjectProperty Paint; // 0x10
	FLinearColor CustomColor; // 0x18
};

struct FRedefinedInfo {
	FTERedefinitionAction RedefinedAction; // 0x0
	FTERedefinitionType RedefinedType; // 0x1
	FName GroupName; // 0x4
	TArray<FName> CheckpointNames; // 0x10
	TArray<ObjectProperty> TriggerClumps; // 0x20
	FName NameValue; // 0x30
	int32_t IntValue; // 0x38
	uint32_t bValue : 1; // 0x3c
};

struct FPlayerIdArray {
	TArray<FUniqueNetId> Players; // 0x0
};

struct FLensFlareElementCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FPBParamSwatch {
	FName SwatchName; // 0x0
	TArray<FPBMaterialParam> Params; // 0x8
};

struct FLinkedAccountData {
	uint32_t bSuccess : 1; // 0x0
	FUniqueNetId OriginalId; // 0x8
	FUniqueNetId LinkedId; // 0x50
	FString LinkedDisplayName; // 0x98
};

struct FGamepadInfo {
	EInputAPI InputAPI; // 0x0
	uint32_t bConnected : 1; // 0x4
};

struct FMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FEditorRoundData {
	float TimeLimit; // 0x0
	TArray<FString> SerializedArchetypes; // 0x8
};

struct FTourMatch {
	int32_t MatchID; // 0x0
	QWordProperty Teams[0x2]; // 0x8
	QWordProperty Winner; // 0x18
	TArray<FTourMatchGame> Games; // 0x20
};

struct FOnlineContent {
	EOnlineContentType ContentType; // 0x0
	char UserIndex; // 0x1
	uint32_t bIsCorrupt : 1; // 0x4
	int32_t DeviceID; // 0x8
	int32_t LicenseMask; // 0xc
	FString FriendlyName; // 0x10
	FString Filename; // 0x20
	FString ContentPath; // 0x30
	TArray<FString> ContentPackages; // 0x40
	TArray<FString> ContentFiles; // 0x50
};

struct FGetTargetLocationFromFlightTimeInParams {
	FVector TargetStartLocation; // 0x0
	FVector TargetVelocity; // 0xc
	float FlightTime; // 0x18
	float VelocityWeight; // 0x1c
	float VelocityZWeight; // 0x20
};

struct FAccumulatedRigidBodyCollision {
	ObjectProperty Actor; // 0x0
	ComponentProperty Component; // 0x8
	ObjectProperty PhysMat; // 0x10
	FVector Velocity; // 0x18
	FVector OtherVelocity; // 0x24
	FVector Location; // 0x30
	FVector Normal; // 0x3c
	FVector NormalForce; // 0x48
	FVector FrictionForce; // 0x54
	FVector NormalVelocity; // 0x60
	FVector FrictionVelocity; // 0x6c
	int32_t NumCollisions; // 0x78
	int32_t NumContacts; // 0x7c
};

struct FProductReplacement {
	TArray<EConsoleType> Platforms; // 0x0
	ObjectProperty Replacement; // 0x10
};

struct FPlatformInterfaceDelegateResult {
	uint32_t bSuccessful : 1; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FColumnMetaData {
	int32_t Id; // 0x0
	FString Name; // 0x8
	FString ColumnName; // 0x18
};

struct FAccountSettings {
	FPrivacySettings Privacy; // 0x0
};

struct FMetricEventJsonStruct {
	TArray<ObjectProperty> Events; // 0x0
};

struct FCrowdExcitementSound {
	ObjectProperty Sound; // 0x0
	float Value; // 0x8
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FPsyNetBeaconPartyReservation {
	TArray<FUniqueNetId> Members; // 0x0
};

struct FSaveDataImportTask : FSaveDataTask {
	ObjectProperty SaveDataObject; // 0x18
	EBasicLoadResult Result; // 0x20
	TArray<char> Data; // 0x28
	uint32_t bExactFileMatch : 1; // 0x38
	uint32_t bPlayerSaveData : 1; // 0x38
};

struct FCachedPodiumCar {
	ObjectProperty Car; // 0x0
	FVector Location; // 0x8
};

struct FVanityQueryRequest {
	ObjectProperty Shell; // 0x0
	EVanityType VanityType; // 0x8
	TArray<FUniqueNetId> PlayerIDs; // 0x10
	DelegateProperty VanityCallback; // 0x20
	int32_t NumIdsToQuery; // 0x38
	int32_t NumQueriesCompleted; // 0x3c
	uint32_t bForced : 1; // 0x40
};

struct FBracketRequest {
	QWordProperty TourID; // 0x0
	ObjectProperty Task; // 0x8
	DelegateProperty Callback; // 0x10
};

struct FFaceFXTrackKey {
	float StartTime; // 0x0
	FString FaceFXGroupName; // 0x8
	FString FaceFXSeqName; // 0x18
};

struct FGameResourceDataProvider {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	uint32_t bExpandProviders : 1; // 0x18
	FNone* ProviderClass; // 0x20
};

struct FMobilePostProcessSettings {
	uint32_t bOverride_Mobile_BlurAmount : 1; // 0x0
	uint32_t bOverride_Mobile_TransitionTime : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Scale : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Threshold : 1; // 0x0
	uint32_t bOverride_Mobile_Bloom_Tint : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_Distance : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_MinRange : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_MaxRange : 1; // 0x0
	uint32_t bOverride_Mobile_DOF_FarBlurFactor : 1; // 0x0
	float Mobile_BlurAmount; // 0x4
	float Mobile_TransitionTime; // 0x8
	float Mobile_Bloom_Scale; // 0xc
	float Mobile_Bloom_Threshold; // 0x10
	FLinearColor Mobile_Bloom_Tint; // 0x14
	float Mobile_DOF_Distance; // 0x24
	float Mobile_DOF_MinRange; // 0x28
	float Mobile_DOF_MaxRange; // 0x2c
	float Mobile_DOF_FarBlurFactor; // 0x30
};

struct FTemporarySpawnSpot {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Velocity; // 0x18
	float Time; // 0x24
};

struct FSkillMatchParty {
	int32_t PartyID; // 0x0
	float PctTimePlayed; // 0x4
	uint32_t bQuitter : 1; // 0x8
	TArray<FUniqueNetId> Players; // 0x10
};

struct FLandscapeLayerStruct {
	ObjectProperty LayerInfoObj; // 0x0
	ObjectProperty ThumbnailMIC; // 0x8
	ObjectProperty Owner; // 0x10
	int32_t DebugColorChannel; // 0x18
	uint32_t bSelected : 1; // 0x1c
	FString SourceFilePath; // 0x20
};

struct FCalculateRedirectHorizontalLaunchSpeedInParams {
	FVector BallLocation; // 0x0
	FVector CarLocation; // 0xc
	FVector CarVelocity; // 0x18
	float MaxHorizontalLaunchSpeed; // 0x24
	float SpeedDropoffMaxRange; // 0x28
};

struct FPRIRemoteUserData {
	FString UserId; // 0x0
};

struct FAutoFlipData {
	float Torque; // 0x0
	float Force; // 0x4
};

struct FTCameraCache {
	float TimeStamp; // 0x0
	FTPOV POV; // 0x4
};

struct FCalculateVerticalLaunchSpeedInParams {
	float TargetHeight; // 0x0
	float StartHeight; // 0x4
	float FlightTime; // 0x8
	float Gravity; // 0xc
};

struct FParticleEventCollideData : FParticleEventData {
	float ParticleTime; // 0x34
	FVector Normal; // 0x38
	float Time; // 0x44
	int32_t Item; // 0x48
	FName BoneName; // 0x4c
};

struct FCarComponentSnapshot {
	uint32_t bActive : 1; // 0x0
	float ActivityTime; // 0x4
	char ComponentData; // 0x8
};

struct FMaterialReferenceList {
	ObjectProperty TargetMaterial; // 0x0
	TArray<FPrimitiveMaterialRef> AffectedMaterialRefs; // 0x8
	TArray<FPostProcessMaterialRef> AffectedPPChainMaterialRefs; // 0x18
};

struct FUIInputKeyData {
	FRawInputKeyEventData InputKeyData; // 0x0
	FString ButtonFontMarkupString; // 0x10
};

struct FBillboardUpdateRequestData {
	int32_t ZoneID; // 0x0
	int32_t MaterialIndex; // 0x4
	FString MaterialName; // 0x8
	ComponentProperty Mesh; // 0x18
};

struct FOnlineRegistrant {
	FUniqueNetId PlayerNetId; // 0x0
};

struct FOnlineGameSearchQuery {
	TArray<FOnlineGameSearchORClause> OrClauses; // 0x0
	TArray<FOnlineGameSearchSortClause> SortClauses; // 0x10
};

struct FSkeletalMeshLODInfo {
	float DisplayFactor; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	TArray<char> bEnableShadowCasting; // 0x18
	TArray<TriangleSortOption> TriangleSorting; // 0x28
	TArray<FTriangleSortSettings> TriangleSortSettings; // 0x38
	uint32_t bDisableCompressions : 1; // 0x48
	uint32_t bHasBeenSimplified : 1; // 0x48
};

struct FNewsCacheEntry {
	FString NewsUrl; // 0x0
	EOnlineEnumerationReadState ReadState; // 0x10
	EOnlineNewsType NewsType; // 0x11
	FString NewsItem; // 0x18
	float Timeout; // 0x28
	uint32_t bIsUnicode : 1; // 0x2c
	FPointer HttpDownloader; // 0x30
};

struct FCachedObstaclesData {
	FVector CarLocation; // 0x0
	FVector CarNavMeshLocation; // 0xc
	TArray<FCachedObstaclePoly> Polys; // 0x18
};

struct FClientOnlineProductStat {
	FProductInstanceID InstanceID; // 0x0
	int32_t Value; // 0x10
};

struct FClothingLodInfo {
	TArray<int32_t> LODMaterialMap; // 0x0
};

struct FChallengeProgress {
	int32_t Id; // 0x0
	uint32_t bIsHidden : 1; // 0x4
	int32_t CompleteCount; // 0x8
	uint32_t bNotifyCompleted : 1; // 0xc
	uint32_t bNotifyAvailable : 1; // 0xc
	uint32_t bNotifyNewInfo : 1; // 0xc
	uint32_t bRewardsAvailable : 1; // 0xc
	uint32_t bComplete : 1; // 0xc
	QWordProperty ProgressResetTimeUTC; // 0x10
	TArray<FChallengeRequirementProgress> RequirementProgress; // 0x18
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FSortedProductData {
	FProductInstanceID Id; // 0x0
	FProductHashID HashID; // 0x10
	ObjectProperty Product; // 0x18
	ObjectProperty OnlineProduct; // 0x20
	int32_t BlueprintSortWeight; // 0x28
	int32_t Quantity; // 0x2c
	uint32_t bUnlocked : 1; // 0x30
	uint32_t bIsFavorited : 1; // 0x30
	uint32_t bCurrency : 1; // 0x30
};

struct FPreviewParticleOverride {
	ObjectProperty Template; // 0x0
	FName FXAttachmentName; // 0x8
};

struct FRewardsRequest {
	QWordProperty TourID; // 0x0
	ObjectProperty Task; // 0x8
	DelegateProperty Callback; // 0x10
};

struct FLevelStreamingData {
	uint32_t bShouldBeLoaded : 1; // 0x0
	uint32_t bShouldBeVisible : 1; // 0x0
	uint32_t bShouldBlockOnLoad : 1; // 0x0
	ObjectProperty Level; // 0x8
};

struct FEmsFile {
	FString Hash; // 0x0
	FString DLName; // 0x10
	FString Filename; // 0x20
	int32_t FileSize; // 0x30
};

struct FPaintAttributeParameter {
	EPaintColorVariant PaintVariant; // 0x0
	FName ParameterName; // 0x4
	uint32_t bEnabled : 1; // 0xc
	uint32_t bGammaCorrect : 1; // 0xc
};

struct FTrajectoryFX {
	ComponentProperty Particle; // 0x0
};

struct FViewParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror EmitterInstanceMBInfoMap; // 0x0
};

struct FGetPopulationData {
	int32_t Playlist; // 0x0
	int32_t PlayerCount; // 0x4
};

struct FScoreboardStat {
	FName Name; // 0x0
	int32_t Value; // 0x8
};

struct FProductSlotNewDrawScale {
	float DrawScaleToApply; // 0x0
	ObjectProperty ProductSlotToApplyTo; // 0x8
};

struct FBracketResult {
	QWordProperty TourID; // 0x0
	FTourBracket Bracket; // 0x8
	float RetrieveTime; // 0x80
	DelegateProperty BracketChangedCallback; // 0x88
	DelegateProperty ErrorCallback; // 0xa0
};

struct FBindingAction {
	FName Action; // 0x0
	FName Category; // 0x8
	FName Axis; // 0x10
	EAxisSign AxisSign; // 0x18
	FString Command; // 0x20
	uint32_t bDisableRemapping : 1; // 0x30
	int32_t Priority; // 0x34
};

struct FPreviewAnimSetsStruct {
	FName DisplayName; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
};

struct FTerrainLayer {
	FString Name; // 0x0
	ObjectProperty Setup; // 0x10
	int32_t AlphaMapIndex; // 0x18
	uint32_t Highlighted : 1; // 0x1c
	uint32_t WireframeHighlighted : 1; // 0x1c
	uint32_t Hidden : 1; // 0x1c
	FColor HighlightColor; // 0x20
	FColor WireframeColor; // 0x24
	int32_t MinX; // 0x28
	int32_t MinY; // 0x2c
	int32_t MaxX; // 0x30
	int32_t MaxY; // 0x34
};

struct FPendingStorage {
	ObjectProperty Data; // 0x0
	FNone* DataClass; // 0x8
	int32_t Tick; // 0x10
};

struct FBreakoutDamageState {
	char State; // 0x0
	ObjectProperty Causer; // 0x8
	FVector DamageLocation; // 0x10
	uint32_t bDirectDamage : 1; // 0x1c
	uint32_t bImmediate : 1; // 0x1c
};

struct FVectorMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x38
	FVector Constant; // 0x3c
};

struct FBulletBodyData {
	int32_t SceneIndex; // 0x0
	FPointer Body; // 0x8
};

struct FDamageClassEventData {
	FName DamageClassName; // 0x0
};

struct FManagedValue {
	FName ValueId; // 0x0
	int32_t Value; // 0x8
};

struct FGameEventData {
	ObjectProperty Archetype; // 0x0
	FString LaunchOption; // 0x8
	uint32_t bDestroyCurrentGame : 1; // 0x18
	uint32_t bAddAllPlayers : 1; // 0x18
};

struct FTournamentResult {
	int32_t Difficulty; // 0x0
	int32_t Placement; // 0x4
	int32_t Score; // 0x8
	int32_t ResultStanding; // 0xc
};

struct FGameSearchCfg {
	FNone* GameSearchClass; // 0x0
	FNone* DefaultGameSettingsClass; // 0x8
	FNone* SearchResultsProviderClass; // 0x10
	ObjectProperty DesiredSettingsProvider; // 0x18
	ObjectProperty Search; // 0x20
	FName SearchName; // 0x28
};

struct FIntVector3 {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FTournamentWeek {
	TArray<FTournamentResult> Results; // 0x0
};

struct FMcpCompressMessageRequest {
	TArray<char> SourceBuffer; // 0x0
	TArray<char> DestBuffer; // 0x10
	int32_t OutCompressedSize; // 0x20
	ObjectProperty Request; // 0x28
	FPointer CompressionWorker; // 0x30
};

struct FSeqOpOutputInputLink {
	ObjectProperty LinkedOp; // 0x0
	int32_t InputLinkIdx; // 0x8
};

struct FReplayExportCallbackData {
	FPointer Task; // 0x0
	DelegateProperty Callback; // 0x8
};

struct FFilterProductSorting {
	FString Label; // 0x0
	EProductFilterSortType SortType; // 0x10
};

struct FFacebookFriend {
	FString Name; // 0x0
	FString Id; // 0x10
};

struct FLocalizedAction : FBindingAction {
	FString Label; // 0x38
	FString Description; // 0x48
	uint32_t bRebindable : 1; // 0x58
};

struct FTrainingRoundProgress {
	int32_t RoundNumber; // 0x0
	ETrainingRoundAttempt Status; // 0x4
};

struct FReplayLogItem {
	int32_t frame; // 0x0
	FString PlayerName; // 0x8
	FString Text; // 0x18
};

struct FTourMatchGame {
	int32_t GameTimeSeconds; // 0x0
	uint32_t bOverTime : 1; // 0x4
	uint32_t bAborted : 1; // 0x4
	QWordProperty Winner; // 0x8
	int32_t Scores[0x2]; // 0x10
};

struct FTimerOptions {
	uint32_t bLooping : 1; // 0x0
};

struct FVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x18
};

struct FBasedPosition {
	ObjectProperty Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FSettingsProperty {
	int32_t PropertyId; // 0x0
	FSettingsData Data; // 0x8
	EOnlineDataAdvertisementType AdvertisementType; // 0x18
};

struct FConsoleMessage {
	FString Text; // 0x0
	FColor TextColor; // 0x10
	float MessageLife; // 0x14
	ObjectProperty PRI; // 0x18
};

struct FPlaylistSkillData {
	int32_t Playlist; // 0x0
	int32_t Tier; // 0x4
	int32_t MatchesPlayed; // 0x8
};

struct FClientPacketData {
	float TimeStamp; // 0x0
	FVector CameraLoc; // 0x4
	FRotator CameraRot; // 0x10
	TArray<FClientFrameData> Frames; // 0x20
};

struct FSoundClassEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FPhysXEmitterVerticalProperties {
	uint32_t bDisableLod : 1; // 0x0
	int32_t ParticlesLodMin; // 0x4
	int32_t ParticlesLodMax; // 0x8
	int32_t PacketsPerPhysXParticleSystemMax; // 0xc
	uint32_t bApplyCylindricalPacketCulling : 1; // 0x10
	float SpawnLodVsFifoBias; // 0x14
};

struct FKSphereElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	uint32_t bNoRBCollision : 1; // 0x44
	uint32_t bPerPolyShape : 1; // 0x44
};

struct FScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0xc
};

struct FPlayerMember {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FLoadoutTeamPaint : FLoadoutTeamColor {
	int32_t TeamFinishID; // 0x8
	int32_t CustomFinishID; // 0xc
};

struct FWeldingInfo {
	ObjectProperty RBActor; // 0x0
	FVector Offset; // 0x8
	float Mass; // 0x14
	FRotator Rotation; // 0x18
};

struct FBugReportSystemData {
	FString ComputerName; // 0x0
	FString GameName; // 0x10
	FString NetMode; // 0x20
	uint32_t bClient : 1; // 0x30
};

struct FUIMenuInputMap {
	FName FieldName; // 0x0
	FName Set; // 0x8
	FString MappedText; // 0x10
};

struct FAimAssistSettings {
	uint32_t bOverride : 1; // 0x0
	float ControlAlpha; // 0x4
	float MinSteerDot; // 0x8
	float MaxSteerDot; // 0xc
	float MinVelocity; // 0x10
	float MaxVelocity; // 0x14
	float MinPlayerInputDrive; // 0x18
	float MinDistanceToBallXY; // 0x1c
	float MaxDistanceToBallXY; // 0x20
	float MinDistanceToBallZ; // 0x24
	float MaxDistanceToBallZ; // 0x28
	float MinDotAngleFromBall; // 0x2c
	float MaxDotAngleFromBall; // 0x30
};

struct FGarageFolderData {
	TArray<int32_t> FolderIDs; // 0x0
	FMap_Mirror ProductIDToFolderID; // 0x10
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector2D LightmapUVBias; // 0x40
	FVector2D ShadowmapUVBias; // 0x48
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	uint32_t bUseEmitterTime : 1; // 0x8
	uint32_t bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	uint32_t bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FRPCContainerDropTable {
	int32_t SeriesID; // 0x0
	int32_t ProductID; // 0x4
	TArray<FOnlineProductData> Drops; // 0x8
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FCompartmentRunList {
	uint32_t RigidBody : 1; // 0x0
	uint32_t Fluid : 1; // 0x0
	uint32_t Cloth : 1; // 0x0
	uint32_t SoftBody : 1; // 0x0
};

struct FFieldSpawnInfoPair {
	FFieldSpawnInfo PlayerSpawn; // 0x0
	FFieldSpawnInfo BallSpawn; // 0x3c
};

struct FReplayActorChannel {
	ObjectProperty Actor; // 0x0
	FNone* ActorClass; // 0x8
	FName actorName; // 0x10
	TArray<char> Recent; // 0x18
	TArray<int32_t> StillDirty; // 0x28
	float CloseTime; // 0x38
	uint32_t bNetInitial : 1; // 0x3c
	uint32_t bPlaybackPersistent : 1; // 0x3c
};

struct FShopPrice {
	int32_t Id; // 0x0
	int32_t Amount; // 0x4
};

struct FGCReference {
	ObjectProperty m_object; // 0x0
	int32_t m_count; // 0x8
	int32_t m_statid; // 0xc
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FCollisionEffectData {
	ObjectProperty PhysMat; // 0x0
	ObjectProperty PhysMatProp; // 0x8
	FEffectsMapping ImpactEffects; // 0x10
	FVector HitLocation; // 0x20
	FVector HitNormal; // 0x2c
	FVector Momentum; // 0x38
	float ImpactMomentum; // 0x44
	float SlideMomentum; // 0x48
	int32_t PhysicsFrame; // 0x4c
	ObjectProperty HitActor; // 0x50
};

struct FBallInfo {
	ObjectProperty Ball; // 0x0
	ComponentProperty ShotGoal; // 0x8
	ComponentProperty RedZoneGoal; // 0x10
	ObjectProperty RedZonePRI; // 0x18
	int32_t RedZoneHitID; // 0x20
	float GroundHitTime; // 0x24
	float JuggleTime; // 0x28
	float SpecialHitTime; // 0x2c
	float BallHitTime; // 0x30
	float SaveTime; // 0x34
	float ShotTime; // 0x38
};

struct FRenderThumbnailRequest {
	FProductThumbnailResult Result; // 0x0
	DelegateProperty Callback; // 0x18
};

struct FIpAddr {
	int32_t AddrA; // 0x0
	int32_t AddrB; // 0x4
	int32_t AddrC; // 0x8
	int32_t AddrD; // 0xc
	int32_t Port; // 0x10
};

struct FTimerData {
	uint32_t bLoop : 1; // 0x0
	uint32_t bPaused : 1; // 0x0
	uint32_t bStateTimer : 1; // 0x0
	FName FuncName; // 0x4
	float Rate; // 0xc
	float Count; // 0x10
	float TimerTimeDilation; // 0x14
	ObjectProperty TimerObj; // 0x18
	int32_t StateGeneration; // 0x20
};

struct FSettingEvent {
	FUniqueNetId PlayerID; // 0x0
	FName Id; // 0x48
	FString Value; // 0x50
};

struct FParticleEvent_GenerateInfo {
	EParticleEventType Type; // 0x0
	int32_t Frequency; // 0x4
	int32_t LowFreq; // 0x8
	int32_t ParticleFrequency; // 0xc
	uint32_t FirstTimeOnly : 1; // 0x10
	uint32_t LastTimeOnly : 1; // 0x10
	uint32_t UseReflectedImpactVector : 1; // 0x10
	FName CustomName; // 0x14
	TArray<ObjectProperty> ParticleModuleEventsToSendToGame; // 0x20
};

struct FPlayerReservation {
	FUniqueNetId NetId; // 0x0
	int32_t Skill; // 0x48
	int32_t XpLevel; // 0x4c
	FDouble Mu; // 0x50
	FDouble Sigma; // 0x58
	float ElapsedSessionTime; // 0x60
};

struct FDebugMicroEventPlaylistID {
	int32_t Id; // 0x0
};

struct FNamedNetDriver {
	FName NetDriverName; // 0x0
	FPointer NetDriver; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FSeriesGroup {
	int32_t SeriesID; // 0x0
	TArray<EProductQuality> ExcludedQualities; // 0x8
};

struct FCarFrameSettings {
	FString PlayerName; // 0x0
	FClientLoadoutData CarLoadout; // 0x10
	FLinearColor TeamColor; // 0x20
	FLinearColor AccentColor; // 0x30
	TArray<int32_t> PaintIDs; // 0x40
	TArray<int32_t> EsportsIDs; // 0x50
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FClientLoadoutOnlineData {
	TArray<FClientLoadoutOnlineProduct> Products; // 0x0
};

struct FPlayerNickMetaData {
	FName PlayerNickName; // 0x0
	FString PlayerNickColumnName; // 0x8
};

struct FOnlineStatsColumn {
	int32_t ColumnNo; // 0x0
	FSettingsData StatValue; // 0x8
};

struct FAssetLoadRequest {
	FAssetLoadResult Result; // 0x0
	ObjectProperty Product; // 0x20
	int32_t LoadOrder; // 0x28
	EAssetLoadState LoadState; // 0x2c
	uint32_t bIsThumbnailRequest : 1; // 0x30
	DelegateProperty OnLoadedCallback; // 0x38
};

struct FMobileDistanceFieldParams {
	float Gamma; // 0x0
	float AlphaRefVal; // 0x4
	float SmoothWidth; // 0x8
	uint32_t EnableShadow : 1; // 0xc
	FVector2D ShadowDirection; // 0x10
	FLinearColor ShadowColor; // 0x18
	float ShadowSmoothWidth; // 0x28
	FDepthFieldGlowInfo GlowInfo; // 0x2c
	int32_t BlendMode; // 0x50
};

struct FKCachedConvexDataElement {
	TArray<char> ConvexElementData; // 0x0
};

struct FFlockAgent {
	uint32_t bWaitingForOtherAgents : 1; // 0x0
	float DistanceAlongSpline; // 0x4
	float Scale; // 0x8
	FVector Position; // 0xc
	FVector Velocity; // 0x18
	FVector NormalizedSplineOffset; // 0x24
	ObjectProperty CurrentSplineActor; // 0x30
};

struct FDominantShadowInfo {
	FMatrix WorldToLight; // 0x0
	FMatrix LightToWorld; // 0x40
	FBox LightSpaceImportanceBounds; // 0x80
	int32_t ShadowMapSizeX; // 0x9c
	int32_t ShadowMapSizeY; // 0xa0
};

struct FStorageMaxSize {
	FName Category; // 0x0
	int32_t MaxSizeBytes; // 0x8
};

struct FOnlineProductStat {
	FProductInstanceID InstanceID; // 0x0
	ObjectProperty ProductStat; // 0x10
};

struct FTViewTarget {
	ObjectProperty Target; // 0x0
	ObjectProperty Controller; // 0x8
	FTPOV POV; // 0x10
	float AspectRatio; // 0x2c
	ObjectProperty PRI; // 0x30
};

struct FAttractLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FRPCResponse {
	int32_t Id; // 0x0
	FRPCError Error; // 0x8
	ObjectProperty Result; // 0x28
};

struct FSupportedSubTrackInfo {
	FNone* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FPPEffectDefaults {
	FName EffectName; // 0x0
	uint32_t bEnabled : 1; // 0x8
};

struct FIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
};

struct FPropertyOverride {
	FString Class; // 0x0
	FString Property; // 0x10
	FString Value; // 0x20
};

struct FSourceTexture2DRegion {
	int32_t OffsetX; // 0x0
	int32_t OffsetY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t DestOffsetX; // 0x10
	int32_t DestOffsetY; // 0x14
	ObjectProperty Texture2D; // 0x18
};

struct FPostProcessSettings {
	uint32_t bOverride_EnableBloom : 1; // 0x0
	uint32_t bOverride_EnableDOF : 1; // 0x0
	uint32_t bOverride_EnableMotionBlur : 1; // 0x0
	uint32_t bOverride_EnableSceneEffect : 1; // 0x0
	uint32_t bOverride_AllowAmbientOcclusion : 1; // 0x0
	uint32_t bOverride_OverrideRimShaderColor : 1; // 0x0
	uint32_t bOverride_Bloom_Scale : 1; // 0x0
	uint32_t bOverride_Bloom_Threshold : 1; // 0x0
	uint32_t bOverride_Bloom_Tint : 1; // 0x0
	uint32_t bOverride_Bloom_ScreenBlendThreshold : 1; // 0x0
	uint32_t bOverride_Bloom_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_DOF_FalloffExponent : 1; // 0x0
	uint32_t bOverride_DOF_BlurKernelSize : 1; // 0x0
	uint32_t bOverride_DOF_BlurBloomKernelSize : 1; // 0x0
	uint32_t bOverride_DOF_MaxNearBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_MinBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_MaxFarBlurAmount : 1; // 0x0
	uint32_t bOverride_DOF_FocusType : 1; // 0x0
	uint32_t bOverride_DOF_FocusInnerRadius : 1; // 0x0
	uint32_t bOverride_DOF_FocusDistance : 1; // 0x0
	uint32_t bOverride_DOF_FocusPosition : 1; // 0x0
	uint32_t bOverride_DOF_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_DOF_BokehTexture : 1; // 0x0
	uint32_t bOverride_MotionBlur_MaxVelocity : 1; // 0x0
	uint32_t bOverride_MotionBlur_Amount : 1; // 0x0
	uint32_t bOverride_MotionBlur_FullMotionBlur : 1; // 0x0
	uint32_t bOverride_MotionBlur_CameraRotationThreshold : 1; // 0x0
	uint32_t bOverride_MotionBlur_CameraTranslationThreshold : 1; // 0x0
	uint32_t bOverride_MotionBlur_InterpolationDuration : 1; // 0x0
	uint32_t bOverride_Scene_Desaturation : 1; // 0x0
	uint32_t bOverride_Scene_Colorize : 1; // 0x0
	uint32_t bOverride_Scene_TonemapperScale : 1; // 0x0
	uint32_t bOverride_Scene_ImageGrainScale : 1; // 0x4
	uint32_t bOverride_Scene_HighLights : 1; // 0x4
	uint32_t bOverride_Scene_MidTones : 1; // 0x4
	uint32_t bOverride_Scene_Shadows : 1; // 0x4
	uint32_t bOverride_Scene_InterpolationDuration : 1; // 0x4
	uint32_t bOverride_Scene_ColorGradingLUT : 1; // 0x4
	uint32_t bOverride_RimShader_Color : 1; // 0x4
	uint32_t bOverride_RimShader_InterpolationDuration : 1; // 0x4
	uint32_t bOverride_MobileColorGrading : 1; // 0x4
	uint32_t bEnableBloom : 1; // 0x4
	uint32_t bEnableDOF : 1; // 0x4
	uint32_t bEnableMotionBlur : 1; // 0x4
	uint32_t bEnableSceneEffect : 1; // 0x4
	uint32_t bAllowAmbientOcclusion : 1; // 0x4
	uint32_t bOverrideRimShaderColor : 1; // 0x4
	float Bloom_Scale; // 0x8
	float Bloom_Threshold; // 0xc
	FColor Bloom_Tint; // 0x10
	float Bloom_ScreenBlendThreshold; // 0x14
	float Bloom_InterpolationDuration; // 0x18
	float DOF_BlurBloomKernelSize; // 0x1c
	float DOF_FalloffExponent; // 0x20
	float DOF_BlurKernelSize; // 0x24
	float DOF_MaxNearBlurAmount; // 0x28
	float DOF_MinBlurAmount; // 0x2c
	float DOF_MaxFarBlurAmount; // 0x30
	EFocusType DOF_FocusType; // 0x34
	float DOF_FocusInnerRadius; // 0x38
	float DOF_FocusDistance; // 0x3c
	FVector DOF_FocusPosition; // 0x40
	float DOF_InterpolationDuration; // 0x4c
	ObjectProperty DOF_BokehTexture; // 0x50
	float MotionBlur_MaxVelocity; // 0x58
	float MotionBlur_Amount; // 0x5c
	uint32_t MotionBlur_FullMotionBlur : 1; // 0x60
	float MotionBlur_CameraRotationThreshold; // 0x64
	float MotionBlur_CameraTranslationThreshold; // 0x68
	float MotionBlur_InterpolationDuration; // 0x6c
	float Scene_Desaturation; // 0x70
	FVector Scene_Colorize; // 0x74
	float Scene_TonemapperScale; // 0x80
	float Scene_ImageGrainScale; // 0x84
	FVector Scene_HighLights; // 0x88
	FVector Scene_MidTones; // 0x94
	FVector Scene_Shadows; // 0xa0
	float Scene_InterpolationDuration; // 0xac
	FLinearColor RimShader_Color; // 0xb0
	float RimShader_InterpolationDuration; // 0xc0
	ObjectProperty ColorGrading_LookupTable; // 0xc8
	FLUTBlender ColorGradingLUT; // 0xd0
	FMobileColorGradingParams MobileColorGrading; // 0xf8
	FMobilePostProcessSettings MobilePostProcess; // 0x134
};

struct FAudioEQEffect {
	FDouble RootTime; // 0x0
	float HFFrequency; // 0x8
	float HFGain; // 0xc
	float MFCutoffFrequency; // 0x10
	float MFBandwidth; // 0x14
	float MFGain; // 0x18
	float LFFrequency; // 0x1c
	float LFGain; // 0x20
};

struct FBoneAtom {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	float Scale; // 0x1c
};

struct FTextureParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FCrumbRedefinedInfo {
	CrumbRedefinitionType RedefinedType; // 0x0
	CrumbAction RedefinedAction; // 0x1
	FCrumbTrailData CrumbData; // 0x8
};

struct FColorOverride {
	uint32_t bOverride : 1; // 0x0
	FLinearColor Color; // 0x4
};

struct FOnlineFriendMessage {
	FUniqueNetId SendingPlayerId; // 0x0
	FString SendingPlayerNick; // 0x48
	uint32_t bIsFriendInvite : 1; // 0x58
	uint32_t bIsGameInvite : 1; // 0x58
	uint32_t bWasAccepted : 1; // 0x58
	uint32_t bWasDenied : 1; // 0x58
	FString Message; // 0x60
};

struct FPsyTag {
	FString Name; // 0x0
	int32_t Code; // 0x10
};

struct FSeqEventLink {
	FNone* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedEvents; // 0x8
	FString LinkDesc; // 0x18
	int32_t DrawX; // 0x28
	uint32_t bHidden : 1; // 0x2c
	uint32_t bMoving : 1; // 0x2c
	uint32_t bClampedMax : 1; // 0x2c
	uint32_t bClampedMin : 1; // 0x2c
	int32_t OverrideDelta; // 0x30
};

struct FModifyRBStateInParams {
	FReplicatedRBState InRBState; // 0x0
	FVector NewLocation; // 0x40
	FVector NewLinearVelocity; // 0x4c
	FVector NewAngularVelocity; // 0x58
};

struct FTrainingModeTag {
	ETrainingTag Tag; // 0x0
};

struct FProductHashID {
	int32_t Id; // 0x0
};

struct FRankMetaData {
	FName RankName; // 0x0
	FString RankColumnName; // 0x8
};

struct FTextureParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty ParameterValue; // 0x30
};

struct FMcpUncompressMessageRequest {
	FString MessageId; // 0x0
	TArray<char> SourceBuffer; // 0x10
	TArray<char> DestBuffer; // 0x20
	int32_t OutUncompressedSize; // 0x30
	FPointer UncompressionWorker; // 0x38
};

struct FClientMeshBeaconConnection {
	FUniqueNetId PlayerNetId; // 0x0
	float ElapsedHeartbeatTime; // 0x48
	FPointer Socket; // 0x50
	uint32_t bConnectionAccepted : 1; // 0x58
	FClientConnectionBandwidthTestData BandwidthTest; // 0x60
	ENATType NatType; // 0x90
	uint32_t bCanHostVs : 1; // 0x94
	float GoodHostRatio; // 0x98
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0xa0
	int32_t MinutesSinceLastTest; // 0xb0
};

struct FCheckpointRecord {
	uint32_t bCollideActors : 1; // 0x0
};

struct FDecalReceiver {
	ComponentProperty Component; // 0x0
	FPointer RenderData; // 0x8
};

struct FLobbyMetaData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FStaticMeshLODElement {
	ObjectProperty Material; // 0x0
	uint32_t bEnableShadowCasting : 1; // 0x8
	uint32_t bEnableCollision : 1; // 0x10
};

struct FReplayScoreData {
	ObjectProperty ScoredBy; // 0x0
	ObjectProperty AssistedBy; // 0x8
	float Speed; // 0x10
	float Time; // 0x14
	char ScoreTeam; // 0x18
};

struct FGameplayEventMetaData {
	int32_t EventID; // 0x0
	FName EventName; // 0x4
	FGameStatGroup StatGroup; // 0xc
	int32_t EventDataType; // 0x14
};

struct FProfileProduct {
	FProductInstanceID InstanceID; // 0x0
	TArray<ObjectProperty> Attributes; // 0x10
};

struct FGameClassShortName {
	FString ShortName; // 0x0
	FString GameClassName; // 0x10
};

struct FQuickChatGroup {
	FString Key; // 0x0
	int32_t Count; // 0x10
};

struct FSpawnCarColorSet {
	ObjectProperty ColorSet; // 0x0
	uint32_t bRender : 1; // 0x8
};

struct FSkinBodySettings {
	ObjectProperty Body; // 0x0
	FMaterialParams Parameters; // 0x8
	TArray<FAssociativeMaterialParams> AdditionalBodyParameters; // 0x38
};

struct FQWORDPair {
	QWordProperty A; // 0x0
	QWordProperty B; // 0x8
};

struct FSkelControlModifier {
	FName SkelControlName; // 0x0
	TArray<FTimeModifier> Modifiers; // 0x8
};

struct FDynamicLinkInfo {
	FVector LastTargetLocation; // 0x0
	FVector LastSrcLocation; // 0xc
};

struct FReplicatedLogoData {
	int32_t LogoID; // 0x0
	uint32_t bSwapColors : 1; // 0x4
};

struct FSubscriptionInfo {
	QWordProperty Id; // 0x0
};

struct FCalculateBallInFrontLocationInParams {
	float BallRadius; // 0x0
	float BallInFrontDistance; // 0x4
	FRotator CarRotation; // 0x8
	FVector CarLocalCollisionExtent; // 0x14
	FVector CarLocation; // 0x20
};

struct FTourSearchSettings {
	FString Text; // 0x0
	int32_t RankMin; // 0x10
	int32_t RankMax; // 0x14
	TArray<int32_t> GameModes; // 0x18
	TArray<FString> Regions; // 0x28
	int32_t TeamSize; // 0x38
	int32_t BracketSize; // 0x3c
	uint32_t bEnableCrossplay : 1; // 0x40
	QWordProperty StartTime; // 0x48
	QWordProperty EndTime; // 0x50
	uint32_t bShowFull : 1; // 0x58
	uint32_t bShowIneligibleRank : 1; // 0x58
};

struct FPostProcessOverride {
	FPostProcessSettings Settings; // 0x0
	ObjectProperty Volume; // 0x168
	FName Id; // 0x170
	float BlendInTime; // 0x178
	float BlendOutTime; // 0x17c
	uint32_t bEnabled : 1; // 0x180
	uint32_t bDefaultEnabled : 1; // 0x180
};

struct FSynchGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty MasterNode; // 0x10
	FName GroupName; // 0x18
	uint32_t bFireSlaveNotifies : 1; // 0x20
	float RateScale; // 0x24
};

struct FWheelSkelControlSet {
	ComponentProperty Wheel; // 0x0
	ObjectProperty TranslationControl; // 0x8
	ObjectProperty SteerControl; // 0x10
	ObjectProperty RollControl; // 0x18
};

struct FMemoryMetrics {
	float Physical; // 0x0
};

struct FClientFrameData {
	FVehicleInputs VehicleInput; // 0x0
	int32_t frame; // 0x20
	float TimeStamp; // 0x24
};

struct FConnectedPeerInfo {
	FUniqueNetId PlayerID; // 0x0
	ENATType NatType; // 0x48
	uint32_t bLostConnectionToHost : 1; // 0x4c
};

struct FPartyMemberSkill {
	FUniqueNetId PlayerID; // 0x0
	TArray<FPlayerSkillRating> Skills; // 0x48
};

struct FStatCooldown {
	ObjectProperty Stat; // 0x0
	float UnlockWorldTime; // 0x8
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FApexModuleDestructibleSettings {
	int32_t MaxChunkIslandCount; // 0x0
	int32_t MaxShapeCount; // 0x4
	int32_t MaxRrbActorCount; // 0x8
	float MaxChunkSeparationLOD; // 0xc
	uint32_t bOverrideMaxChunkSeparationLOD : 1; // 0x10
};

struct FMcpClashMobChallengeEvent {
	FString unique_challenge_id; // 0x0
	FString visible_date; // 0x10
	FString start_date; // 0x20
	FString end_date; // 0x30
	FString completed_date; // 0x40
	FString purge_date; // 0x50
	FString challenge_type; // 0x60
	int32_t num_attempts; // 0x70
	int32_t num_successful_attempts; // 0x74
	int32_t goal_value; // 0x78
	int32_t goal_start_value; // 0x7c
	int32_t goal_current_value; // 0x80
	uint32_t has_started : 1; // 0x84
	uint32_t is_visible : 1; // 0x84
	uint32_t has_completed : 1; // 0x84
	uint32_t was_successful : 1; // 0x84
	TArray<FMcpClashMobChallengeFile> file_list; // 0x88
	int32_t facebook_likes; // 0x98
	int32_t facebook_comments; // 0x9c
	float facebook_like_scaler; // 0xa0
	float facebook_comment_scaler; // 0xa4
	int32_t facebook_like_goal_progress; // 0xa8
	int32_t facebook_comment_goal_progress; // 0xac
	FString facebook_id; // 0xb0
	int32_t twitter_retweets; // 0xc0
	float twitter_retweets_scaler; // 0xc4
	int32_t twitter_goal_progress; // 0xc8
	FString twitter_id; // 0xd0
};

struct FMusicSyncEvent {
	FString CueName; // 0x0
	EMusicSyncType CueType; // 0x10
};

struct FMcpGroupList {
	FString RequesterId; // 0x0
	TArray<FMcpGroup> Groups; // 0x10
};

struct FPresetGeneratedPoint {
	float KeyIn; // 0x0
	float KeyOut; // 0x4
	uint32_t TangentsValid : 1; // 0x8
	float TangentIn; // 0xc
	float TangentOut; // 0x10
	EInterpCurveMode IntepMode; // 0x14
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	uint32_t bGetSeedFromInstance : 1; // 0x8
	uint32_t bInstanceSeedIsIndex : 1; // 0x8
	uint32_t bResetSeedOnEmitterLooping : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FGFxLevelThreshold {
	int32_t TotalXP; // 0x0
};

struct FBreakoutDamage {
	float Time; // 0x0
	int32_t Damage; // 0x4
};

struct FSocialPostPrivileges {
	uint32_t bCanPostImage : 1; // 0x0
	uint32_t bCanPostLink : 1; // 0x0
};

struct FRotatorDegrees {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FPerPlayerSplitscreenData {
	float SizeX; // 0x0
	float SizeY; // 0x4
	float OriginX; // 0x8
	float OriginY; // 0xc
};

struct FCurrentPlayerMet {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FUseAction {
	FString ActionName; // 0x0
	FString LocalizedActionName; // 0x10
};

struct FBoostMeshMaterialOverride {
	ObjectProperty Material; // 0x0
	TArray<int32_t> Index; // 0x8
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FQueryMappingRequest {
	FString ExternalType; // 0x0
	ObjectProperty Request; // 0x10
};

struct FRecogUserData {
	int32_t ActiveVocabularies; // 0x0
	TArray<char> UserData; // 0x8
};

struct FBoolTrackKey {
	float Time; // 0x0
	uint32_t Value : 1; // 0x4
};

struct FMcpInventoryItemContainer {
	FString GlobalItemId; // 0x0
	int32_t Quantity; // 0x10
};

struct FCacheImportCallbackData {
	FPointer Task; // 0x0
	DelegateProperty Callback; // 0x8
};

struct FCachedTargetData {
	ObjectProperty Target; // 0x0
	int32_t Index; // 0x8
	FAIProxyData Data; // 0x10
	float CacheTime; // 0x58
};

struct FGetPlayerStorageRequestItem {
	FName Category; // 0x0
	int32_t Tick; // 0x8
	int32_t Checksum; // 0xc
	ObjectProperty LocalRef; // 0x10
};

struct FMemberTitleStat {
	ObjectProperty Category; // 0x0
	ObjectProperty Title; // 0x8
	int32_t PointsEarned; // 0x10
	int32_t StatCount; // 0x14
	ObjectProperty MemberPRI; // 0x18
};

struct FBoostAttachmentToggle {
	FName BoostAttachment; // 0x0
	TArray<ObjectProperty> AttachAny; // 0x8
	TArray<ObjectProperty> DetachAny; // 0x18
};

struct FCarGoalData {
	float Distance; // 0x0
	float Dot; // 0x4
	float DotBetweenBall; // 0x8
};

struct FRootMotionCurve {
	FName AnimName; // 0x0
	FInterpCurveVector Curve; // 0x8
	float MaxCurveTime; // 0x20
};

struct FMaterialVectorParam {
	FName Name; // 0x0
	FLinearColor Value; // 0x8
};

struct FTouchTracker {
	int32_t Handle; // 0x0
	int32_t TouchpadIndex; // 0x4
	FVector2D Location; // 0x8
	EInputEvent EventType; // 0x10
	uint32_t bTrapInput : 1; // 0x14
};

struct FSetPlayerStorageResultItem {
	FName Category; // 0x0
	int32_t Tick; // 0x8
	uint32_t bOutOfSync : 1; // 0xc
};

struct FLandscapeWeightmapUsage {
	ComponentProperty ChannelUsage[0x4]; // 0x0
};

struct FBeaconMessageHandler {
	FNone* MessageClass; // 0x0
	TArray<DelegateProperty> Delegates; // 0x8
};

struct FOnlineStatus {
	FUniqueNetId PlayerID; // 0x0
	FString PresenceInfo; // 0x48
	EOnlineFriendState PresenceState; // 0x58
};

struct FCachedAdImageData {
	FString ImageURL; // 0x0
	QWordProperty CacheEndTime; // 0x10
	ObjectProperty ImageTexture; // 0x18
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	FPointer RenderInfo; // 0x40
	uint32_t bSkipCloseAndParallelChecks : 1; // 0x48
	uint32_t bSimpleCollisionPlane : 1; // 0x48
};

struct FAICachedGoalInfo {
	ComponentProperty Goal; // 0x0
	FVector FieldSize; // 0x8
};

struct FDownloadedImage {
	FString URL; // 0x0
	ObjectProperty Texture; // 0x10
};

struct FPlaylistTierSkillRating : FTierSkillRating {
	int32_t Playlist; // 0x20
};

struct FProductStatInfo {
	FString ProductStatLabel; // 0x0
	FString ProductStatDescription; // 0x10
	FString ProductStatValue; // 0x20
	FString CertifiedStatLabel; // 0x30
};

struct FMultiCueSplineSoundSlot {
	ObjectProperty SoundCue; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	int32_t StartPoint; // 0x10
	int32_t EndPoint; // 0x14
	FDouble LastUpdateTime; // 0x18
	float SourceInteriorVolume; // 0x20
	float SourceInteriorLPF; // 0x24
	float CurrentInteriorVolume; // 0x28
	float CurrentInteriorLPF; // 0x2c
	uint32_t bPlaying : 1; // 0x30
};

struct FEdgePointer {
	FPointer Dummy; // 0x0
};

struct FTimelineKeyframe {
	FName Type; // 0x0
	int32_t frame; // 0x8
};

struct FGFxBotData {
	FString PlayerName; // 0x0
	FString Id; // 0x10
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<ObjectProperty> LoadedObjects; // 0x28
};

struct FClientBeaconConnection {
	FUniqueNetId PartyLeader; // 0x0
	float ElapsedHeartbeatTime; // 0x48
	FPointer Socket; // 0x50
};

struct FMeshInfo {
	ComponentProperty Meshes; // 0x0
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	int32_t PointIndex; // 0x20
	FVector MoveDirection; // 0x24
	float DistanceAlongPath; // 0x30
	uint32_t bCrossedZero : 1; // 0x34
};

struct FBothWheelAssets {
	ComponentProperty Left; // 0x0
	ComponentProperty Right; // 0x8
};

struct FWeightNodeRule {
	FName NodeName; // 0x0
	ObjectProperty CachedNode; // 0x8
	ObjectProperty CachedSlotNode; // 0x10
	EWeightCheck WeightCheck; // 0x18
	int32_t ChildIndex; // 0x1c
};

struct FGFxDebugRect {
	float TopLeftX; // 0x0
	float TopLeftY; // 0x4
	float BottomRightX; // 0x8
	float BottomRightY; // 0xc
};

struct FGFxDataStoreRow {
	TArray<FASValue> Values; // 0x0
	ObjectProperty BoundObject; // 0x10
};

struct FRecognisableWord {
	int32_t Id; // 0x0
	FString ReferenceWord; // 0x8
	FString PhoneticWord; // 0x18
};

struct FHonorDuelChallenge {
	FUniqueNetId Challenger; // 0x0
	FUniqueNetId Defender; // 0x48
};

struct FEpicDLCInfo {
	FString Key; // 0x0
	FName Value; // 0x10
};

struct FTeamEditionOverrides {
	ObjectProperty ESportsTeam; // 0x0
	TArray<ObjectProperty> Overrides; // 0x8
	TArray<FPaintWithOverride> PaintOverrides; // 0x18
};

struct FMapImageLoadRequest {
	ObjectProperty MapData; // 0x0
	FName PackageName; // 0x8
	FString AssetPath; // 0x10
	DelegateProperty Callback; // 0x20
};

struct FCompensationItem {
	FProductHashID HashID; // 0x0
};

struct FParticleBodyParameterSet {
	FName AttachmentName; // 0x0
	TArray<FParticleSysParam> Parameters; // 0x8
};

struct FCachedProxyData {
	ObjectProperty Type; // 0x0
	int32_t Index; // 0x8
	FAIProxyData Data; // 0x10
	float CacheTime; // 0x58
};

struct FEngineAudioNativeState_Clutched : FEngineAudioNativeState {
	uint32_t bUsingRevLimiter : 1; // 0x38
};

struct FPickupInfo_TA {
	ObjectProperty AvailablePickups[0x3]; // 0x0
	uint32_t bItemsArePreview : 1; // 0x18
};

struct FShakeReceiver {
	ObjectProperty Player; // 0x0
	float Scale; // 0x8
};

struct FSHVectorRGB {
	FSHVector R; // 0x0
	FSHVector G; // 0x30
	FSHVector B; // 0x60
};

struct FTitleFile {
	FString Filename; // 0x0
	EOnlineEnumerationReadState AsyncState; // 0x10
	TArray<char> Data; // 0x18
};

struct FFloatMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<float> MICResetFloats; // 0x10
};

struct FOnlinePlayerMatchData {
	ObjectProperty PRI; // 0x0
	FUniqueNetId PlayerID; // 0x8
	float GameSecondsPlayed; // 0x50
	int32_t GameScore; // 0x54
	int32_t MatchGoals; // 0x58
	int32_t MatchAssists; // 0x5c
	int32_t MatchSaves; // 0x60
	int32_t MatchShots; // 0x64
	int32_t XPGained; // 0x68
	TArray<FOnlineProductData> Loadout; // 0x70
	uint32_t bCompletedMatch : 1; // 0x80
	uint32_t bForfeit : 1; // 0x80
	uint32_t bMvp : 1; // 0x80
	uint32_t bWinner : 1; // 0x80
	uint32_t bLeaver : 1; // 0x80
	uint32_t bInParty : 1; // 0x80
	uint32_t bJoinedInProgress : 1; // 0x80
	int32_t ConsecutiveMatchesPlayed; // 0x84
	FUniqueNetId PartyLeader; // 0x88
	float DistanceDrivenKM; // 0xd0
	uint32_t bPartyLeaderValid : 1; // 0xd4
	int32_t TeamIndex; // 0xd8
	TArray<FStatData> Stats; // 0xe0
	TArray<FLoadoutData> TeamLoadouts; // 0xf0
	TArray<FQuickChatGroup> QuickChat; // 0x100
};

struct FSaveSlotOperation {
	int32_t SlotIndex; // 0x0
	SaveSlotOperationEnum SlotOperation; // 0x4
};

struct FSubscribedInputEventParameters : FInputEventParameters {
	FName InputAliasName; // 0x20
};

struct FBuildingMatOverrides {
	TArray<ObjectProperty> MaterialOptions; // 0x0
};

struct FChallengeRequirementProgress {
	int32_t ProgressCount; // 0x0
	int32_t ProgressChange; // 0x4
};

struct FOnlineReward {
	int32_t Id; // 0x0
	TArray<FOnlineProductData> ProductData; // 0x8
	TArray<FOnlineXPReward> RewardDrops; // 0x18
};

struct FIniLocFileEntry {
	FString Filename; // 0x0
	FString DLName; // 0x10
	FString HashCode; // 0x20
	uint32_t bIsUnicode : 1; // 0x30
	EOnlineEnumerationReadState ReadState; // 0x34
};

struct FBallHitInfo {
	ObjectProperty PRI; // 0x0
	ObjectProperty AttackerPRI; // 0x8
	FName CarName; // 0x10
	int32_t TeamNum; // 0x18
	FReplicatedRBState PreHitCarPhysics; // 0x20
	FReplicatedRBState PreHitBallPhysics; // 0x60
	FReplicatedRBState PostHitBallPhysics; // 0xa0
	float Distance; // 0xe0
	float Time; // 0xe4
	FVector HitLocation; // 0xe8
	FVector HitNormal; // 0xf4
	uint32_t bDodging : 1; // 0x100
	uint32_t bWheelsTouching : 1; // 0x100
	uint32_t bWorldTouching : 1; // 0x100
	EBallHitType HitType; // 0x104
	int32_t HitID; // 0x108
};

struct FCheckReservationResponse {
	FString IP; // 0x0
	FString ServerName; // 0x10
	int32_t Playlist; // 0x20
	FString Region; // 0x28
	FString Host; // 0x38
	int32_t Port; // 0x48
	FString ReservationID; // 0x50
	FString DSConnectToken; // 0x60
	ObjectProperty Keys; // 0x70
	uint32_t IsServerKey : 1; // 0x78
};

struct FBTStatusLog {
	ObjectProperty Node; // 0x0
	int32_t Depth; // 0x8
	EBTStatus Status; // 0xc
	FString Message; // 0x10
	uint32_t bSetMessage : 1; // 0x20
	uint32_t bCondition : 1; // 0x20
	float LastEvalTime; // 0x24
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FProductThumbnailResult {
	ObjectProperty Asset; // 0x0
	ObjectProperty OnlineProduct; // 0x8
	ObjectProperty Thumbnail; // 0x10
};

struct FFontRenderInfo {
	uint32_t bClipText : 1; // 0x0
	uint32_t bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FCachedNavMeshLocation {
	ObjectProperty Actor; // 0x0
	FVector NavMeshLocation; // 0x8
	FVector OldActorLocation; // 0x14
};

struct FBodyChassisOverride {
	ObjectProperty Body; // 0x0
	ObjectProperty MaterialOverride; // 0x8
};

struct FDingoContentCache {
	QWordProperty UserXUID; // 0x0
};

struct FSaveDataExportTask : FSaveDataTask {
	TArray<char> Data; // 0x18
	uint32_t bExactFileMatch : 1; // 0x28
	uint32_t bPlayerSaveData : 1; // 0x28
	uint32_t bEncryptAndCRC : 1; // 0x28
	ESaveGameResult Result; // 0x2c
	int32_t KeepNewestSaveFileCount; // 0x30
};

struct FTourResult {
	QWordProperty TournamentID; // 0x0
	int32_t Difficulty; // 0x8
	int32_t Placement; // 0xc
};

struct FInteractableData {
	FName InteractableDescriptor; // 0x0
	int32_t InteractableID; // 0x8
	int32_t NumInteractions; // 0xc
};

struct FSkelMeshComponentLODInfo {
	TArray<char> HiddenMaterials; // 0x0
	uint32_t bNeedsInstanceWeightUpdate : 1; // 0x10
	uint32_t bAlwaysUseInstanceWeights : 1; // 0x10
	EInstanceWeightUsage InstanceWeightUsage; // 0x14
	int32_t InstanceWeightIdx; // 0x18
};

struct FTourMatchNode {
	int32_t MatchID; // 0x0
	int32_t Round; // 0x4
	int32_t Order; // 0x8
	FQWORDPair Teams; // 0x10
	int32_t NextMatchID; // 0x20
	FIntPair PrevMatch; // 0x24
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	ObjectProperty WaveParam; // 0x10
};

struct FOnlineProductAttribute {
	FName Key; // 0x0
	FString Value; // 0x8
};

struct FCustomMatchTeamSettings {
	FString Name; // 0x0
	FClubColorSet Colors; // 0x10
	int32_t GameScore; // 0x18
};

struct FPlayerSeasonRewardProgress {
	FUniqueNetId PlayerID; // 0x0
	int32_t SeasonLevel; // 0x48
	int32_t SeasonLevelWins; // 0x4c
};

struct FProductDrop {
	FProductHashID GroupId; // 0x0
	FProductInstanceID DropID; // 0x8
	QWordProperty DropTime; // 0x18
	uint32_t bCanEquipNow : 1; // 0x20
};

struct FActiveLobbyInfo : FBasicLobbyInfo {
	TArray<FLobbyMember> Members; // 0x20
};

struct FLevelStreamingNameCombo {
	ObjectProperty Level; // 0x0
	FName LevelName; // 0x8
};

struct FClientConnectionBandwidthTestData {
	EMeshBeaconBandwidthTestState CurrentState; // 0x0
	EMeshBeaconBandwidthTestType TestType; // 0x1
	int32_t BytesTotalNeeded; // 0x4
	int32_t BytesReceived; // 0x8
	FDouble RequestTestStartTime; // 0x10
	FDouble TestStartTime; // 0x18
	FConnectionBandwidthStats BandwidthStats; // 0x20
};

struct FFaceItReservationMatchInfo {
	int32_t PartnerID; // 0x0
	int32_t ServerId; // 0x4
	uint32_t bIsCrossPlatform : 1; // 0x8
};

struct FDateTimeStruct {
	int32_t Year; // 0x0
	int32_t Month; // 0x4
	int32_t Day; // 0x8
	int32_t WeekDay; // 0xc
	int32_t Hour; // 0x10
	int32_t Minute; // 0x14
	int32_t Second; // 0x18
	ETimeZone TimeZone; // 0x1c
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FLoadoutData : FClientLoadoutData {
	FLoadoutTeamPaint TeamPaint; // 0x10
	FName Title; // 0x20
	int32_t TeamIndex; // 0x28
	TArray<FProductInstanceID> OnlineProducts; // 0x30
};

struct FTeamGameStats {
	int32_t Goals; // 0x0
};

struct FRPCIntroCar {
	int32_t TemplateIndex; // 0x0
	FString TemplateName; // 0x8
	FString TemplateDescription; // 0x18
	TArray<int32_t> ProductsList; // 0x28
};

struct FCarInteractionData {
	ObjectProperty LastHitCar; // 0x0
	float LastHitTime; // 0x8
};

struct FDebugNavCost {
	FString Desc; // 0x0
	int32_t Cost; // 0x10
};

struct FAnimatedParam {
	FName ParamName; // 0x0
};

struct FXPRewardData {
	FName Name; // 0x0
	float Amount; // 0x8
};

struct FTeamPaintFinish {
	ObjectProperty TeamFinish; // 0x0
	ObjectProperty CustomFinish; // 0x8
};

struct FBlueprintPreviewProduct {
	int32_t BlueprintProductID; // 0x0
	FProductHashID BlueprintHashID; // 0x4
	ObjectProperty OnlineProduct; // 0x8
	TArray<FProductHashID> PossibleHashIDsForThisProduct; // 0x10
};

struct FTrailSample {
	float RelativeTime; // 0x0
	FVector FirstEdgeSample; // 0x4
	FVector ControlPointSample; // 0x10
	FVector SecondEdgeSample; // 0x1c
};

struct FCartInfo {
	int32_t CatalogID; // 0x0
	int32_t Count; // 0x4
};

struct FStickyForceData {
	float Ground; // 0x0
	float Wall; // 0x4
};

struct FAnimatedLinearColorParam : FAnimatedParam {
	FInterpCurveLinearColor ValueOverTime; // 0x8
};

struct FAkParamSet {
	FMap_Mirror RTCPs; // 0x0
	FMap_Mirror Switches; // 0x50
};

struct FGetLeaderboardPlatformBaseData {
	FString Platform; // 0x0
	TArray<FGetLeaderboardBaseData> Players; // 0x10
};

struct FVoiceAudioDevice {
	FString Id; // 0x0
	FString Name; // 0x10
	uint32_t bDefault : 1; // 0x20
};

struct FRBCollisionChannelContainer {
	uint32_t Default : 1; // 0x0
	uint32_t Nothing : 1; // 0x0
	uint32_t Pawn : 1; // 0x0
	uint32_t Vehicle : 1; // 0x0
	uint32_t Water : 1; // 0x0
	uint32_t GameplayPhysics : 1; // 0x0
	uint32_t EffectPhysics : 1; // 0x0
	uint32_t Ball : 1; // 0x0
	uint32_t VehicleBlocker : 1; // 0x0
	uint32_t BallBlocker : 1; // 0x0
	uint32_t Untitled4 : 1; // 0x0
	uint32_t Cloth : 1; // 0x0
	uint32_t FluidDrain : 1; // 0x0
	uint32_t SoftBody : 1; // 0x0
	uint32_t FracturedMeshPart : 1; // 0x0
	uint32_t BlockingVolume : 1; // 0x0
	uint32_t DeadPawn : 1; // 0x0
	uint32_t Clothing : 1; // 0x0
	uint32_t ClothingCollision : 1; // 0x0
};

struct FPlayerInformation {
	FName ControllerName; // 0x0
	FString PlayerName; // 0x8
	FUniqueNetId UniqueId; // 0x18
	uint32_t bIsBot : 1; // 0x60
};

struct FFontParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty FontValue; // 0x8
	int32_t FontPage; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FPsyNetPartyMember {
	FString PartyID; // 0x0
	FUniqueNetId UserId; // 0x10
	FString Username; // 0x58
	QWordProperty JoinedAt; // 0x68
	FString Role; // 0x70
};

struct FProfileSliderLimits {
	float Min; // 0x0
	float Max; // 0x4
	float interval; // 0x8
};

struct FShopDeliverable {
	int32_t Count; // 0x0
	FProductInstanceID Id; // 0x8
	FProductHashID HashID; // 0x18
	uint32_t bOwned : 1; // 0x1c
	uint32_t bOwnedUntradeable : 1; // 0x1c
	FOnlineProductData Product; // 0x20
};

struct FGFxPlayerAvatarRef {
	FProductHashID HashID; // 0x0
	ObjectProperty PlayerAvatar; // 0x8
};

struct FAmbientSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	float Weight; // 0x10
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FPackedNormal Normal; // 0xc
	FColor Color; // 0x10
};

struct FPlayerClubPair {
	FUniqueNetId PlayerID; // 0x0
	QWordProperty ClubID; // 0x48
};

struct FOnlineXPModifier {
	FName Name; // 0x0
	float Modifier; // 0x8
	EOnlineXPModifierType ModifierType; // 0xc
	int32_t Value; // 0x10
	FString LocalizedText; // 0x18
	uint32_t bPremium : 1; // 0x28
	uint32_t bPenalty : 1; // 0x28
	uint32_t bPromo : 1; // 0x28
	int32_t Remaining; // 0x2c
	int32_t Count; // 0x30
	int32_t MaxCount; // 0x34
};

struct FBitArray_Mirror {
	FPointer IndirectData; // 0x0
	int32_t InlineData[0x4]; // 0x8
	int32_t NumBits; // 0x18
	int32_t MaxBits; // 0x1c
};

struct FNxDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float MassScaleExponent; // 0xc
	float MassScale; // 0x10
	float FractureImpulseScale; // 0x14
};

struct FAnimNotifyEvent {
	float Time; // 0x0
	ObjectProperty Notify; // 0x8
	FName Comment; // 0x10
	float Duration; // 0x18
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
	TArray<FPointer> ChildNodes; // 0x18
};

struct FMessageUpdate {
	int32_t DelayFromStart; // 0x0
	FString MessageKey; // 0x8
};

struct FSkelControlListHead {
	FName BoneName; // 0x0
	ObjectProperty ControlHead; // 0x8
	int32_t DrawY; // 0x10
};

struct FPostProcessSettingsOverride {
	FPostProcessSettings Settings; // 0x0
	uint32_t bBlendingIn : 1; // 0x168
	uint32_t bBlendingOut : 1; // 0x168
	float CurrentBlendInTime; // 0x16c
	float CurrentBlendOutTime; // 0x170
	float BlendInDuration; // 0x174
	float BlendOutDuration; // 0x178
	float BlendStartTime; // 0x17c
	FInterpCurveFloat TimeAlphaCurve; // 0x180
};

struct FPingStats {
	float Min; // 0x0
	float Max; // 0x4
	float Average; // 0x8
	float Median; // 0xc
};

struct FFaceItMatchInfo {
	int32_t MatchID; // 0x0
	int32_t ServerId; // 0x4
	FString TeamNameA; // 0x8
	FString TeamNameB; // 0x18
	uint32_t bIsSpectator : 1; // 0x28
	uint32_t bIsCrossPlatform : 1; // 0x28
	int32_t TeamSize; // 0x2c
	int32_t PartnerID; // 0x30
	FUniqueNetId PlayerID; // 0x38
};

struct FStatGroupCollection {
	ObjectProperty Wins; // 0x0
	ObjectProperty Losses; // 0x8
	ObjectProperty Goals; // 0x10
	ObjectProperty Saves; // 0x18
	ObjectProperty Shots; // 0x20
	ObjectProperty Assists; // 0x28
};

struct FPBEdgeInfo {
	FVector EdgeEnd; // 0x0
	FVector EdgeStart; // 0xc
	int32_t ScopeAIndex; // 0x18
	EScopeEdge ScopeAEdge; // 0x1c
	int32_t ScopeBIndex; // 0x20
	EScopeEdge ScopeBEdge; // 0x24
	float EdgeAngle; // 0x28
};

struct FProductHashSource {
	int32_t ProductID; // 0x0
	FProductInstanceID InstanceID; // 0x8
	ObjectProperty OnlineProduct; // 0x18
};

struct FGFxSpecialEventReward {
	int32_t ProductID; // 0x0
	FProductHashID HashID; // 0x4
	int32_t StoreProductID; // 0x8
	int32_t Cost; // 0xc
	int32_t Remaining; // 0x10
	FXPRewardData XPReward; // 0x14
};

struct FWheelContactData {
	uint32_t bHasContact : 1; // 0x0
	uint32_t bHasContactWithWorldGeometry : 1; // 0x0
	float HasContactChangeTime; // 0x4
	ObjectProperty Actor; // 0x8
	ComponentProperty Component; // 0x10
	FVector Location; // 0x18
	FVector Normal; // 0x24
	FVector LatDirection; // 0x30
	FVector LongDirection; // 0x3c
	ObjectProperty PhysMatProp; // 0x48
};

struct FMessagePacket {
	ObjectProperty Message; // 0x0
	TArray<FMessageValue> Values; // 0x8
};

struct FUIAxisEmulationDefinition {
	FName AxisInputKey; // 0x0
	FName AdjacentAxisInputKey; // 0x8
	uint32_t bEmulateButtonPress : 1; // 0x10
	FName InputKeyToEmulate[0x2]; // 0x14
};

struct FGFxTournamentReward {
	int32_t Placement; // 0x0
	FProductInstanceID InstanceID; // 0x8
};

struct FXPInfo {
	int32_t TotalXP; // 0x0
	int32_t XpLevel; // 0x4
	FString XPTitle; // 0x8
	int32_t XPProgressInCurrentLevel; // 0x18
	int32_t XPRequiredForNextLevel; // 0x1c
};

struct FGFxRegion {
	FString Id; // 0x0
	FString Name; // 0x10
	uint32_t bSelected : 1; // 0x20
};

struct FOnlinePartyMember {
	FUniqueNetId UniqueId; // 0x0
	FString NickName; // 0x48
	char LocalUserNum; // 0x58
	ENATType NatType; // 0x59
	int32_t TitleId; // 0x5c
	uint32_t bIsLocal : 1; // 0x60
	uint32_t bIsInPartyVoice : 1; // 0x60
	uint32_t bIsTalking : 1; // 0x60
	uint32_t bIsInGameSession : 1; // 0x60
	uint32_t bIsPlayingThisGame : 1; // 0x60
	QWordProperty SessionId; // 0x68
	int32_t Data1; // 0x70
	int32_t Data2; // 0x74
	int32_t Data3; // 0x78
	int32_t Data4; // 0x7c
};

struct FPlayerStats {
	int32_t Score; // 0x0
	int32_t Goals; // 0x4
	int32_t OwnGoals; // 0x8
	int32_t Assists; // 0xc
	int32_t Saves; // 0x10
	int32_t Shots; // 0x14
	int32_t Demolitions; // 0x18
};

struct FTournamentEndData {
	QWordProperty CycleID; // 0x0
	int32_t WeekIndex; // 0x8
	TArray<FTournamentResult> OldWeeklyResults; // 0x10
	FTournamentResult Result; // 0x20
	TArray<FShopCurrencyInfo> CurrencyRewards; // 0x30
	TArray<FShopCurrencyInfo> OldWeeklyCurrencies; // 0x40
	TArray<FShopCurrencyInfo> WeeklyCurrencies; // 0x50
	TArray<FShopCurrencyInfo> FinalCurrencies; // 0x60
};

struct FAudioClassInfo {
	int32_t NumResident; // 0x0
	int32_t SizeResident; // 0x4
	int32_t NumRealTime; // 0x8
	int32_t SizeRealTime; // 0xc
};

struct FJoinMatchSettings {
	EJoinMatchType MatchType; // 0x0
	int32_t PlaylistId; // 0x4
	uint32_t bFriendJoin : 1; // 0x8
	uint32_t bMigration : 1; // 0x8
	uint32_t bRankedReconnect : 1; // 0x8
	FString Password; // 0x10
};

struct FAnimGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty SynchMaster; // 0x10
	ObjectProperty NotifyMaster; // 0x18
	FName GroupName; // 0x20
	float RateScale; // 0x28
	float SynchPctPosition; // 0x2c
};

struct FTAlphaBlend {
	float AlphaIn; // 0x0
	float AlphaOut; // 0x4
	float AlphaTarget; // 0x8
	float BlendTime; // 0xc
	float BlendTimeToGo; // 0x10
	AlphaBlendType BlendType; // 0x14
};

struct FClothSpecialBoneInfo {
	FName BoneName; // 0x0
	ClothBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0x10
};

struct FSocialPostImageInfo {
	FSocialPostImageFlags Flags; // 0x0
	FString MessageText; // 0x8
	FString TitleText; // 0x18
	FString PictureCaption; // 0x28
	FString PictureDescription; // 0x38
};

struct FInputKeyAction {
	FName InputKeyName; // 0x0
	EInputEvent InputKeyState; // 0x8
	TArray<FSeqOpOutputInputLink> TriggeredOps; // 0x10
	TArray<ObjectProperty> ActionsToExecute; // 0x20
};

struct FConfiguredGameSetting {
	int32_t GameSettingId; // 0x0
	FString GameSettingsClassName; // 0x8
	FString URL; // 0x18
	ObjectProperty GameSettings; // 0x28
};

struct FRandomWeight {
	ObjectProperty Obj; // 0x0
	float Weight; // 0x8
	float OrigWeight; // 0xc
};

struct FSeasonPlayer {
	int32_t Team; // 0x0
	FString Name; // 0x8
	FString Id; // 0x18
	uint32_t bBot : 1; // 0x28
};

struct FPersonaDataId {
	FUniqueNetId PersonaId; // 0x0
};

struct FEventData {
	ObjectProperty _this; // 0x0
	ObjectProperty Target; // 0x8
	FString Type; // 0x10
	int32_t Data; // 0x20
	int32_t mouseIndex; // 0x24
	int32_t Button; // 0x28
	int32_t Index; // 0x2c
	int32_t lastIndex; // 0x30
};

struct FActiveDecalInfo {
	ComponentProperty Decal; // 0x0
	float LifetimeRemaining; // 0x8
};

struct FPBRuleLink {
	ObjectProperty NextRule; // 0x0
	FName LinkName; // 0x8
	int32_t DrawY; // 0x10
};

struct FExpressionOutput {
	FString OutputName; // 0x0
	int32_t Mask; // 0x10
	int32_t MaskR; // 0x14
	int32_t MaskG; // 0x18
	int32_t MaskB; // 0x1c
	int32_t MaskA; // 0x20
};

struct FPBFaceUVInfo {
	FVector2D Offset; // 0x0
	FVector2D Size; // 0x8
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FSeasonTeamRank {
	int32_t Team; // 0x0
	int32_t Wins; // 0x4
	int32_t Losses; // 0x8
	int32_t PointsFor; // 0xc
	int32_t PointsAgainst; // 0x10
	int32_t PointsDifferential; // 0x14
	int32_t EliminationWeek; // 0x18
};

struct FSkillRange {
	float Easy; // 0x0
	float Hard; // 0x4
	float Value; // 0x8
};

struct FRewardsResult {
	QWordProperty TourID; // 0x0
	TArray<FTourReward> Rewards; // 0x8
};

struct FSeqOpInputLink {
	FString LinkDesc; // 0x0
	uint32_t bHasImpulse : 1; // 0x10
	int32_t QueuedActivations; // 0x14
	uint32_t bDisabled : 1; // 0x18
	uint32_t bDisabledPIE : 1; // 0x18
	ObjectProperty LinkedOp; // 0x20
	int32_t DrawY; // 0x28
	uint32_t bHidden : 1; // 0x2c
	float ActivateDelay; // 0x30
	uint32_t bMoving : 1; // 0x34
	uint32_t bClampedMax : 1; // 0x34
	uint32_t bClampedMin : 1; // 0x34
	int32_t OverrideDelta; // 0x38
};

struct FHeadTrackingKey {
	float Time; // 0x0
	EHeadTrackingAction Action; // 0x4
};

struct FLensFlareFloatParamCurve {
	FName MaterialParamName; // 0x0
	int32_t MaterialParamIndex; // 0x8
	FRawDistributionFloat ValueOverTime; // 0x10
};

struct FUIRangeData {
	float CurrentValue; // 0x0
	float MinValue; // 0x4
	float MaxValue; // 0x8
	float NudgeValue; // 0xc
	uint32_t bIntRange : 1; // 0x10
};

struct FLoadingPlayer {
	FUniqueNetId PlayerID; // 0x0
	int32_t NumPlayers; // 0x48
	float TimeoutTime; // 0x4c
};

struct FFreeplayCommandsMetricsData {
	FVector BallLocation; // 0x0
	FVector BallVelocity; // 0xc
	FVector CarLocation; // 0x18
	FVector CarVelocity; // 0x24
	FRotatorRadians CarRotation; // 0x30
	FString MapName; // 0x40
	uint32_t bCarOnGround : 1; // 0x50
};

struct FBillboardData {
	FString MaterialName; // 0x0
	int32_t ZoneID; // 0x10
};

struct FSynchronizedActorVisibilityHistory {
	FPointer State; // 0x0
	FPointer CriticalSection; // 0x8
};

struct FTestStructEvent {
	DelegateProperty Callback; // 0x0
};

struct FVanityProductInfo {
	FUniqueNetId PlayerID; // 0x0
	TArray<int32_t> VanityTypes; // 0x48
	TArray<FOnlineProductData> ProductData; // 0x58
};

struct FDepthFieldGlowInfo {
	uint32_t bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FMusicConfigTrack {
	FName Name; // 0x0
	FString ExternalUrl; // 0x8
};

struct FSoundPackSoundRef {
	ObjectProperty Sound; // 0x0
	FName Name; // 0x8
};

struct FKeyboardAxisBlendSettings {
	FName Axis; // 0x0
	float BlendTime; // 0x8
};

struct FInterpEdSelKey {
	ObjectProperty Group; // 0x0
	ObjectProperty Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FSimpleSpringSettings {
	FVector Strength; // 0x0
	FVector Damping; // 0xc
	FVector MaxDisplacement; // 0x18
	uint32_t bUseMinDisplacement : 1; // 0x24
	FVector MinDisplacement; // 0x28
	float Mass; // 0x34
	FVector MassOffset; // 0x38
	float MaxSpeed; // 0x44
	uint32_t bDebug : 1; // 0x48
	float DrawDebugOffset; // 0x4c
};

struct FPPChainInfo {
	FName ChainName; // 0x0
	ObjectProperty ChainReference; // 0x8
};

struct FWordFilterRequest {
	ObjectProperty Request; // 0x0
	FString Comment; // 0x8
	FString Sanitized; // 0x18
	DelegateProperty Callback; // 0x28
};

struct FSteamWebRequestData {
	ObjectProperty Request; // 0x0
	FUniqueNetId PlayerID; // 0x8
};

struct FCoverMeshes {
	ObjectProperty Base; // 0x0
	ObjectProperty LeanLeft; // 0x8
	ObjectProperty LeanRight; // 0x10
	ObjectProperty LeanLeftPref; // 0x18
	ObjectProperty LeanRightPref; // 0x20
	ObjectProperty Climb; // 0x28
	ObjectProperty Mantle; // 0x30
	ObjectProperty SlipLeft; // 0x38
	ObjectProperty SlipRight; // 0x40
	ObjectProperty SwatLeft; // 0x48
	ObjectProperty SwatRight; // 0x50
	ObjectProperty PopUp; // 0x58
	ObjectProperty PlayerOnly; // 0x60
};

struct FClientLoadoutOnlineProduct {
	TArray<ObjectProperty> Attributes; // 0x0
};

struct FRemoteTalker {
	FUniqueNetId TalkerId; // 0x0
	float LastNotificationTime; // 0x48
	uint32_t bWasTalking : 1; // 0x4c
	uint32_t bIsTalking : 1; // 0x4c
	uint32_t bIsRegistered : 1; // 0x4c
};

struct FKismetDrawTextInfo {
	FString MessageText; // 0x0
	FString AppendedText; // 0x10
	ObjectProperty MessageFont; // 0x20
	FVector2D MessageFontScale; // 0x28
	FVector2D MessageOffset; // 0x30
	FColor MessageColor; // 0x38
	float MessageEndTime; // 0x3c
};

struct FTextureGroupContainer {
	uint32_t TEXTUREGROUP_World : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_WorldSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Character : 1; // 0x0
	uint32_t TEXTUREGROUP_CharacterNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_CharacterSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Weapon : 1; // 0x0
	uint32_t TEXTUREGROUP_WeaponNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_WeaponSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Vehicle : 1; // 0x0
	uint32_t TEXTUREGROUP_VehicleNormalMap : 1; // 0x0
	uint32_t TEXTUREGROUP_VehicleSpecular : 1; // 0x0
	uint32_t TEXTUREGROUP_Cinematic : 1; // 0x0
	uint32_t TEXTUREGROUP_Effects : 1; // 0x0
	uint32_t TEXTUREGROUP_EffectsNotFiltered : 1; // 0x0
	uint32_t TEXTUREGROUP_Skybox : 1; // 0x0
	uint32_t TEXTUREGROUP_UI : 1; // 0x0
	uint32_t TEXTUREGROUP_Lightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_RenderTarget : 1; // 0x0
	uint32_t TEXTUREGROUP_MobileFlattened : 1; // 0x0
	uint32_t TEXTUREGROUP_ProcBuilding_Face : 1; // 0x0
	uint32_t TEXTUREGROUP_ProcBuilding_LightMap : 1; // 0x0
	uint32_t TEXTUREGROUP_Shadowmap : 1; // 0x0
	uint32_t TEXTUREGROUP_ColorLookupTable : 1; // 0x0
	uint32_t TEXTUREGROUP_Terrain_Heightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_Terrain_Weightmap : 1; // 0x0
	uint32_t TEXTUREGROUP_ImageBasedReflection : 1; // 0x0
	uint32_t TEXTUREGROUP_Bokeh : 1; // 0x0
};

struct FProductLevelData {
	int32_t Level; // 0x0
	int32_t SoftCurrency; // 0x4
	int32_t HardCurrency; // 0x8
	float UnlockWeight; // 0xc
};

struct FVehicleWheelSettings {
	FName BoneName; // 0x0
};

struct FSceneFrameCapture {
	FName SceneName; // 0x0
	FName CameraModeName; // 0x8
	FString FocusActorName; // 0x10
	float TimeCaptured; // 0x20
	float CameraFOV; // 0x24
	FVector CameraLocation; // 0x28
	FRotator CameraRotation; // 0x34
	TArray<FCarFrameSettings> PlayerCarSettings; // 0x40
};

struct FSequenceData {
	ObjectProperty Slot; // 0x0
	float AnimDelay; // 0x8
	uint32_t bAssetLoaded : 1; // 0xc
};

struct FMarketplaceProductAvailability {
	TArray<FString> AcceptablePaymentInstrumentTypes; // 0x0
	FString Description; // 0x10
	FString ContentId; // 0x20
	FString CurrencyCode; // 0x30
	FString DisplayListPrice; // 0x40
	FString DisplayPrice; // 0x50
	FString DistributionType; // 0x60
	uint32_t bIsPurchasable : 1; // 0x70
	float ListPrice; // 0x74
	float Price; // 0x78
	FString PromotionalText; // 0x80
	FString SignedOffer; // 0x90
};

struct FCurveEdEntry {
	ObjectProperty CurveObject; // 0x0
	FColor CurveColor; // 0x8
	FString CurveName; // 0x10
	int32_t bHideCurve; // 0x20
	int32_t bColorCurve; // 0x24
	int32_t bFloatingPointColorCurve; // 0x28
	int32_t bClamp; // 0x2c
	float ClampLow; // 0x30
	float ClampHigh; // 0x34
};

struct FShopCurrencyData {
	int32_t Id; // 0x0
	int32_t Amount; // 0x4
};

struct FLocalizedQuickChatBinding {
	FString MessageId; // 0x0
	FString Message; // 0x10
	int32_t Group; // 0x20
	FString Action; // 0x28
};

struct FCameraShakeInstance {
	ObjectProperty SourceShake; // 0x0
	FName SourceShakeName; // 0x8
	float OscillatorTimeRemaining; // 0x10
	uint32_t bBlendingIn : 1; // 0x14
	float CurrentBlendInTime; // 0x18
	uint32_t bBlendingOut : 1; // 0x1c
	float CurrentBlendOutTime; // 0x20
	FVector LocSinOffset; // 0x24
	FVector RotSinOffset; // 0x30
	float FOVSinOffset; // 0x3c
	float Scale; // 0x40
	ObjectProperty AnimInst; // 0x48
	ECameraAnimPlaySpace PlaySpace; // 0x50
	FMatrix UserPlaySpaceMatrix; // 0x60
};

struct FParameterValueOverTime {
	FGuid ExpressionGUID; // 0x0
	float StartTime; // 0x10
	FName ParameterName; // 0x14
	uint32_t bLoop : 1; // 0x1c
	uint32_t bAutoActivate : 1; // 0x1c
	float CycleTime; // 0x20
	uint32_t bNormalizeTime : 1; // 0x24
	float OffsetTime; // 0x28
	uint32_t bOffsetFromEnd : 1; // 0x2c
};

struct FLocalizedDepartmentData {
	FString DepartmentTitle; // 0x0
	TArray<FLocalizedNameData> Names; // 0x10
};

struct FServiceMetricsData {
	FString Service; // 0x0
	int32_t Attempts; // 0x10
	int32_t Failures; // 0x14
	float MinLatency; // 0x18
	float MaxLatency; // 0x1c
	float AvgLatency; // 0x20
};

struct FMessageInfo {
	FString Title; // 0x0
	FString Body; // 0x10
	TArray<FButtonInfo> Buttons; // 0x20
	TArray<FActionNameInfo> ActionNameList; // 0x30
};

struct FRumbleItemIndex {
	ObjectProperty PC; // 0x0
	int32_t ItemIndex; // 0x8
};

struct FCanvasIcon {
	ObjectProperty Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FMcpMessageContents {
	FString MessageId; // 0x0
	TArray<char> MessageContents; // 0x10
};

struct FSteamJsonResponseGetPublisherAppOwnership2 {
	TArray<FSteamJsonResponseGetPublisherAppOwnership3> Apps; // 0x0
};

struct FButtonInfo {
	FString Text; // 0x0
	DelegateProperty ClickDelegate; // 0x10
	uint32_t bCorrectAnswer : 1; // 0x28
};

struct FLandscapeLayerInfo {
	FName LayerName; // 0x0
	float Hardness; // 0x8
	uint32_t bNoWeightBlend : 1; // 0xc
	ObjectProperty PhysMaterial; // 0x10
	ObjectProperty ThumbnailMIC; // 0x18
	uint32_t bSelected : 1; // 0x20
	int32_t DebugColorChannel; // 0x24
	FString LayerSourceFile; // 0x28
};

struct FSlapbackActorSetup {
	FName Bus; // 0x0
	EPinnedAxisType Axis; // 0x8
	FVector FieldLocation; // 0xc
};

struct FNamedSession {
	FName SessionName; // 0x0
	FPointer SessionInfo; // 0x8
	ObjectProperty GameSettings; // 0x10
	TArray<FOnlineRegistrant> Registrants; // 0x18
	TArray<FOnlineArbitrationRegistrant> ArbitrationRegistrants; // 0x28
};

struct FMMStats_Timer {
	uint32_t bInProgress : 1; // 0x0
	FDouble MSecs; // 0x8
};

struct FPBScopeProcessInfo {
	ObjectProperty OwningBuilding; // 0x0
	ObjectProperty Ruleset; // 0x8
	FName RulesetVariation; // 0x10
	uint32_t bGenerateLODPoly : 1; // 0x18
	uint32_t bPartOfNonRect : 1; // 0x18
};

struct FHighlight {
	int32_t frame; // 0x0
	FName CarName; // 0x4
	FName BallName; // 0xc
};

struct FLocalAuthSession : FBaseAuthSession {
	int32_t SessionUID; // 0x60
};

struct FRumblePickupData {
	ObjectProperty ActiveIcon; // 0x0
	ObjectProperty InactiveIcon; // 0x8
	FString PickupName; // 0x10
	int32_t CooldownSeconds; // 0x20
	ObjectProperty Item; // 0x28
};

struct FEditorIntroCar {
	FIntroCarInfo Info; // 0x0
	TArray<ObjectProperty> ProductList; // 0x28
};

struct FMatchCompleteHistory {
	FString MatchGUID; // 0x0
	TArray<FUniqueNetId> Players; // 0x10
	float MatchCompleteTime; // 0x20
};

struct FEpochTimer {
	DelegateProperty Callback; // 0x0
	QWordProperty EpochTime; // 0x18
};

struct FActionNameInfo {
	TArray<FName> ActionNames; // 0x0
};

struct FCachedPlayerData {
	FUniqueNetId PlayerID; // 0x0
	TArray<FName> Titles; // 0x48
	float CacheTime; // 0x58
	ObjectProperty RPC; // 0x60
	TArray<DelegateProperty> Callbacks; // 0x68
};

struct FSplitscreenData {
	TArray<FPerPlayerSplitscreenData> PlayerData; // 0x0
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalForceVector; // 0x10
	FVector TotalFrictionForceVector; // 0x1c
};

struct FSavedTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FStatEventCollection {
	ObjectProperty Win; // 0x0
	ObjectProperty Loss; // 0x8
	ObjectProperty TimePlayed; // 0x10
	ObjectProperty Shot; // 0x18
	ObjectProperty Assist; // 0x20
	ObjectProperty Center; // 0x28
	ObjectProperty Clear; // 0x30
	ObjectProperty PoolShot; // 0x38
	ObjectProperty Goal; // 0x40
	ObjectProperty AerialGoal; // 0x48
	ObjectProperty BicycleGoal; // 0x50
	ObjectProperty BulletGoal; // 0x58
	ObjectProperty BackwardsGoal; // 0x60
	ObjectProperty LongGoal; // 0x68
	ObjectProperty OvertimeGoal; // 0x70
	ObjectProperty TurtleGoal; // 0x78
	ObjectProperty AerialHit; // 0x80
	ObjectProperty BicycleHit; // 0x88
	ObjectProperty BulletHit; // 0x90
	ObjectProperty JuggleHit; // 0x98
	ObjectProperty FirstTouch; // 0xa0
	ObjectProperty BallHit; // 0xa8
	ObjectProperty Save; // 0xb0
	ObjectProperty EpicSave; // 0xb8
	ObjectProperty FreezeSave; // 0xc0
	ObjectProperty HatTrick; // 0xc8
	ObjectProperty Savior; // 0xd0
	ObjectProperty Playmaker; // 0xd8
	ObjectProperty MVP; // 0xe0
	ObjectProperty FastestGoal; // 0xe8
	ObjectProperty SlowestGoal; // 0xf0
	ObjectProperty FurthestGoal; // 0xf8
	ObjectProperty OwnGoal; // 0x100
	ObjectProperty MostBallTouches; // 0x108
	ObjectProperty FewestBallTouches; // 0x110
	ObjectProperty MostBoostPickups; // 0x118
	ObjectProperty FewestBoostPickups; // 0x120
	ObjectProperty BoostPickups; // 0x128
	ObjectProperty CarTouches; // 0x130
	ObjectProperty Demolition; // 0x138
	ObjectProperty Demolish; // 0x140
	ObjectProperty LowFive; // 0x148
	ObjectProperty HighFive; // 0x150
};

struct FApexClothingLodInfo {
	TArray<int32_t> ClothingSectionInfo; // 0x0
};

struct FRegistryKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FValueRequestState : FSaveSlotRequestState {
	FName ValueId; // 0x28
};

struct FOverrideSkill {
	int32_t LeaderboardId; // 0x0
	TArray<FUniqueNetId> Players; // 0x8
	TArray<FDouble> Mus; // 0x18
	TArray<FDouble> Sigmas; // 0x28
};

struct FRawInputKeyEventData {
	FName InputKeyName; // 0x0
	char ModifierKeyFlags; // 0x8
};

struct FGameplayEventsHeader {
	int32_t EngineVersion; // 0x0
	int32_t StatsWriterVersion; // 0x4
	int32_t StreamOffset; // 0x8
	int32_t AggregateOffset; // 0xc
	int32_t FooterOffset; // 0x10
	int32_t TotalStreamSize; // 0x14
	int32_t FileSize; // 0x18
	FString FilterClass; // 0x20
	int32_t Flags; // 0x30
};

struct FContentPair {
	FName KeyName; // 0x0
	FString Content; // 0x8
	FEncryptedKeyIndex Index; // 0x18
};

struct FRandomRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FQueuedPsyNetMessage {
	ObjectProperty Message; // 0x0
	ObjectProperty Task; // 0x8
	float TimeoutTime; // 0x10
};

struct FSimplePartyMember {
	FUniqueNetId MemberId; // 0x0
	FString MemberName; // 0x48
};

struct FCachedRegionPing {
	FName Name; // 0x0
	float Ping; // 0x8
};

struct FGFxMapPlaylist {
	FName PlaylistId; // 0x0
	FName PlaylistTypeID; // 0x8
	FString Label; // 0x10
	int32_t LikesRemaining; // 0x20
	int32_t DislikesRemaining; // 0x24
	uint32_t bOverrideGlobal : 1; // 0x28
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FProductTradeInFilter {
	int32_t Id; // 0x0
	FString Label; // 0x8
	TArray<int32_t> SeriesIDs; // 0x18
	uint32_t bBlueprint : 1; // 0x28
	TArray<EProductQuality> TradeInQualities; // 0x30
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FProductInstanceID {
	QWordProperty UpperBits; // 0x0
	QWordProperty LowerBits; // 0x8
};

struct FServerResponseLine {
	int32_t ServerId; // 0x0
	FString IP; // 0x8
	int32_t Port; // 0x18
	int32_t QueryPort; // 0x1c
	FString ServerName; // 0x20
	FString MapName; // 0x30
	FString GameType; // 0x40
	int32_t CurrentPlayers; // 0x50
	int32_t MaxPlayers; // 0x54
	int32_t Ping; // 0x58
	TArray<FKeyValuePair> ServerInfo; // 0x60
	TArray<FPlayerResponseLine> PlayerInfo; // 0x70
};

struct FBankLoadState {
	EBankLoadStatus Status; // 0x0
	float AsyncLoadBegin; // 0x4
	float AsyncLoadTimeout; // 0x8
};

struct FNavMeshPathConstraintCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x8
};

struct FNavMeshPathParams {
	FPointer Interface; // 0x0
	uint32_t bCanMantle : 1; // 0x8
	uint32_t bNeedsMantleValidityTest : 1; // 0x8
	uint32_t bAbleToSearch : 1; // 0x8
	FVector SearchExtent; // 0xc
	float SearchLaneMultiplier; // 0x18
	FVector SearchStart; // 0x1c
	float MaxDropHeight; // 0x28
	float MinWalkableZ; // 0x2c
	float MaxHoverDistance; // 0x30
};

struct FProductFilter {
	TArray<ObjectProperty> OnlineProducts; // 0x0
	TArray<ObjectProperty> Products; // 0x10
	TArray<FProductHashID> ArchivedProducts; // 0x20
	FString Label; // 0x30
	TArray<int32_t> Slots; // 0x40
	TArray<ObjectProperty> ProhibitedSlots; // 0x50
	TArray<EProductQuality> ExclusiveQualities; // 0x60
	TArray<EProductQuality> ProhibitedQualities; // 0x70
	TArray<EUnlockMethod> UnlockMethods; // 0x80
	TArray<EProductTradeRestriction> TradeRestrictions; // 0x90
	TArray<int32_t> TradeHoldRestrictions; // 0xa0
	TArray<FNone*> ExclusiveAttributes; // 0xb0
	TArray<FNone*> ProhibitedAttributes; // 0xc0
	EProductFilterSortType SortType; // 0xd0
	TArray<int32_t> SeriesIDs; // 0xd8
	FProductHashID PackHashID; // 0xe8
	uint32_t bExcludePacks : 1; // 0xec
	uint32_t bIgnoreEquipped : 1; // 0xec
	uint32_t bIgnoreLicensedCars : 1; // 0xec
	uint32_t bStackProducts : 1; // 0xec
	uint32_t bAllowEquippedArchivedProducts : 1; // 0xec
	TArray<int32_t> Loadout; // 0xf0
	TArray<FProductHashID> EquippedHashIDs; // 0x100
	char LogLevel; // 0x110
	EArchiveProductFilter ArchivedProductFilter; // 0x111
	TArray<EBlueprintType> ProhibitedBlueprints; // 0x118
	TArray<EProductFilterSortType> ProhibitedSortTypes; // 0x128
	TArray<FNone*> ProhibitedAttributeSortTypes; // 0x138
};

struct FFpsBucketData {
	int32_t FPS; // 0x0
	float TotalTime; // 0x4
	float GameThreadTime; // 0x8
	float RenderThreadTime; // 0xc
	float GPUFrameTime; // 0x10
	float AvgFPS; // 0x14
	int32_t Count; // 0x18
};

struct FTimeModifier {
	float Time; // 0x0
	float TargetStrength; // 0x4
};

struct FPointer {
	int32_t Dummy; // 0x0
};

struct FTeamColor {
	FLinearColor FontColor; // 0x0
	TArray<FLinearColor> Colors; // 0x10
};

struct FSlotMoveRef {
	FPolyReference Poly; // 0x0
	FBasedPosition Dest; // 0x28
	int32_t Direction; // 0x60
};

struct FParameterInformation {
	ObjectProperty PaintFinishToApply; // 0x0
	TArray<FTextureParameterValue> TextureParameterValues; // 0x8
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x18
	TArray<FVectorParameterValue> VectorParameterValues; // 0x28
};

struct FSpecialEditionConfig {
	ObjectProperty SpecialEdition; // 0x0
	ObjectProperty SpecialEditionProductAsset; // 0x8
};

struct FNetViewer {
	ObjectProperty InViewer; // 0x0
	ObjectProperty Viewer; // 0x8
	FVector ViewLocation; // 0x10
	FVector ViewDir; // 0x1c
};

struct FPlatformParam {
	FName ParamName; // 0x0
	FInterpCurveFloat ValueOverTime; // 0x8
};

struct FRawDistributionVector : FRawDistribution {
	ComponentProperty Distribution; // 0x20
};

struct FOctreeElementId {
	FPointer Node; // 0x0
	int32_t ElementIndex; // 0x8
};

struct FSeasonWeek {
	uint32_t bWinner : 1; // 0x0
};

struct FLinearColorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveLinearColor ParameterValueCurve; // 0x40
};

struct FFilterLimit {
	uint32_t Enabled : 1; // 0x0
	float Base; // 0x4
	float NoiseScale; // 0x8
	float NoiseAmount; // 0xc
};

struct FFreeplayCommandEvent {
	QWordProperty ActivationTimestamp; // 0x0
	EFreeplayCommand ActivatedCommand; // 0x8
	FFreeplayCommandsMetricsData PreActivationData; // 0x10
	FName CommandExecutionError; // 0x68
};

struct FLocOverride {
	FString Section; // 0x0
	FString Key; // 0x10
	FString Value; // 0x20
	FString Package; // 0x30
};

struct FJiggleCarData {
	ObjectProperty HitVehicle; // 0x0
	FVector JiggleAxis; // 0x8
	FVector JiggleStartLocation; // 0x14
	float JiggleStartTime; // 0x20
	EPhysics OriginalPhysics; // 0x24
};

struct FAchievementDetails {
	int32_t Id; // 0x0
	FString StringId; // 0x8
	FString AchievementName; // 0x18
	FString Description; // 0x28
	FString HowTo; // 0x38
	ObjectProperty Image; // 0x48
	char MonthEarned; // 0x50
	char DayEarned; // 0x51
	char YearEarned; // 0x52
	char DayOfWeekEarned; // 0x53
	int32_t GamerPoints; // 0x54
	uint32_t bIsSecret : 1; // 0x58
	uint32_t bWasAchievedOnline : 1; // 0x58
	uint32_t bWasAchievedOffline : 1; // 0x58
	EAchievementUnlockType UnlockType; // 0x5c
	QWordProperty ChallengeWindowBegin; // 0x60
	QWordProperty ChallengeWindowEnd; // 0x68
	FString DeepLink; // 0x70
	QWordProperty EstimatedUnlockTime; // 0x80
	uint32_t bIsRevoked : 1; // 0x88
	EAchievementParticipationType ParticipationType; // 0x8c
	TArray<FString> PlatformsAvailableOn; // 0x90
	EAchievementProgressState ProgressState; // 0xa0
	TArray<FAchievementReward> Rewards; // 0xa8
	TArray<FAchievementMediaAsset> MediaAssets; // 0xb8
	FString ProductID; // 0xc8
	FString ServiceConfigurationID; // 0xd8
	TArray<FAchievementTitleAssociation> TitleAssociations; // 0xe8
};

struct FScoredGoal {
	int32_t frame; // 0x0
	FString PlayerName; // 0x8
	int32_t PlayerTeam; // 0x18
};

struct FReplicatedRBStateNoQuat {
	float QuatX; // 0x0
	float QuatY; // 0x4
	float QuatZ; // 0x8
	float QuatW; // 0xc
	FVector Location; // 0x10
	FVector LinearVelocity; // 0x1c
	FVector AngularVelocity; // 0x28
	uint32_t bSleeping : 1; // 0x34
};

struct FChatMessage {
	ObjectProperty PRI; // 0x0
	ObjectProperty Team; // 0x8
	FString PlayerName; // 0x10
	FString Message; // 0x20
	EChatChannel ChatChannel; // 0x30
	uint32_t bPreset : 1; // 0x34
	FUniqueNetId Recipient; // 0x38
};

struct FMarketplaceProductDetails {
	FString StandardId; // 0x0
	EMediaItemType MediaItemType; // 0x10
	FString ProductName; // 0x18
	FString ProductID; // 0x28
	QWordProperty ReleaseDate; // 0x38
	FString SandboxId; // 0x40
	int32_t TitleId; // 0x50
	TArray<FMarketplaceProductImage> Images; // 0x58
	EOnlineEnumerationReadState DetailsReadState; // 0x68
	TArray<FMarketplaceProductAvailability> Availabilities; // 0x70
	FString ProductDescription; // 0x80
};

struct FGFxMapType {
	FName MapTypeID; // 0x0
	FString Label; // 0x8
	ObjectProperty MapSet; // 0x18
};

struct FUIKeyRepeatData {
	FName CurrentRepeatKey; // 0x0
	FDouble NextRepeatTime; // 0x8
};

struct FMapSelectorPair {
	ObjectProperty MapSet; // 0x0
	ComponentProperty Selector; // 0x8
};

struct FSkelMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x8
};

struct FTitleFileMcp : FTitleFile {
	FPointer HttpDownloader; // 0x28
};

struct FStaticMeshLODInfo {
	TArray<FStaticMeshLODElement> Elements; // 0x0
};

struct FInterpVector {
	float Rate; // 0x0
	float MaxDistance; // 0x4
	FVector Location; // 0x8
	uint32_t bInitialized : 1; // 0x14
	float Rate_Old; // 0x18
	FVector Velocity; // 0x1c
};

struct FShopItemData {
	int32_t ShopItemID; // 0x0
	int32_t NumTimesPreviewed; // 0x4
};

struct FPlayerTitleData {
	FName Id; // 0x0
	FString Text; // 0x8
	FName Category; // 0x18
	FColor Color; // 0x20
	FColor GlowColor; // 0x24
};

struct FReplicatedReservationData {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
	EReservationStatus Status; // 0x58
};

struct FDecodeImageRequest {
	FString RequestURL; // 0x0
	DelegateProperty OnFinishedCallback; // 0x10
	FPointer Task; // 0x28
};

struct FSearchCacheData {
	float TimeoutTime; // 0x0
	TArray<ObjectProperty> TrainingModes; // 0x8
};

struct FSuperSonicConfig {
	float Speed; // 0x0
	float TurnoffSpeedBuffer; // 0x4
	float TurnoffTime; // 0x8
};

struct FBallHitCrowdNoise {
	float RelativeSpeed; // 0x0
	ObjectProperty Noise; // 0x8
};

struct FOSMetrics {
	FString Type; // 0x0
	FString Bits; // 0x10
};

struct FVectorInterpRate {
	float MaxDistance; // 0x0
	float InterpRate; // 0x4
	float ForwardScale; // 0x8
	float BackwardScale; // 0xc
	float SideScale; // 0x10
	float UpDownScale; // 0x14
};

struct FAxisConversion {
	uint32_t bEnabled : 1; // 0x0
	ECopyAxis Source; // 0x4
	float Scale; // 0x8
};

struct FMcpUserCloudFileInfo : FEmsFile {
	FString CreationDate; // 0x38
	FString LastUpdateDate; // 0x48
	FString CompressionType; // 0x58
};

struct FVisiblePortalInfo {
	ObjectProperty Source; // 0x0
	ObjectProperty Destination; // 0x8
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FLevelGridCellCoordinate {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FInventoryItemRequestState : FSaveSlotRequestState {
	FString ItemID; // 0x28
};

struct FMigrationReservationData {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
	FUniqueNetId PartyID; // 0x58
	EReservationStatus Status; // 0xa0
	uint32_t bDisableCrossPlay : 1; // 0xa4
	char Team; // 0xa8
	FSkillRating Skill; // 0xac
	TArray<FName> MapLikes; // 0xb8
	TArray<FName> MapDislikes; // 0xc8
	ObjectProperty SecurityKey; // 0xd8
};

struct FMessageValue {
	FString StringValue; // 0x0
	int32_t IntValue; // 0x10
	ObjectProperty ObjectValue; // 0x18
	FName NameValue; // 0x20
	int32_t ValueType; // 0x28
};

struct FRotatorRadians {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FColorPosition {
	int32_t Row; // 0x0
	int32_t Column; // 0x4
};

struct FExplosionDataExtended {
	ComponentProperty Goal; // 0x0
	FVector Location; // 0x8
	ObjectProperty Scorer; // 0x18
};

struct FMaterialParams {
	TArray<FMaterialTextureParam> TextureParameters; // 0x0
	TArray<FMaterialVectorParam> VectorParameters; // 0x10
	TArray<FMaterialScalarParam> ScalarParameters; // 0x20
};

struct FScreenLocation {
	FVector ScreenPos; // 0x0
	uint32_t bOffScreen : 1; // 0xc
};

struct FGraphSummaryMethod {
	EGraphSummaryType Type; // 0x0
	float MaxSampleAge; // 0x4
	uint32_t bAbsoluteValue : 1; // 0x8
};

struct FASDisplayInfo {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float Rotation; // 0xc
	float XRotation; // 0x10
	float YRotation; // 0x14
	float XScale; // 0x18
	float YScale; // 0x1c
	float ZScale; // 0x20
	float Alpha; // 0x24
	uint32_t Visible : 1; // 0x28
	uint32_t hasX : 1; // 0x28
	uint32_t hasY : 1; // 0x28
	uint32_t hasZ : 1; // 0x28
	uint32_t hasRotation : 1; // 0x28
	uint32_t hasXRotation : 1; // 0x28
	uint32_t hasYRotation : 1; // 0x28
	uint32_t hasXScale : 1; // 0x28
	uint32_t hasYScale : 1; // 0x28
	uint32_t hasZScale : 1; // 0x28
	uint32_t hasAlpha : 1; // 0x28
	uint32_t hasVisible : 1; // 0x28
};

struct FEOSAccountInfo {
	FString AccountId; // 0x0
	FString Created; // 0x10
	uint32_t Favorite : 1; // 0x20
	FString NickName; // 0x28
};

struct FTemporaryProduct {
	FString AssetPath; // 0x0
	FName SlotName; // 0x10
};

struct FParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror ParticleMBInfoMap; // 0x0
};

struct FCacheExportCallbackData {
	FPointer Task; // 0x0
	DelegateProperty Callback; // 0x8
};

struct FKeyBind {
	FName Name; // 0x0
	FString Command; // 0x8
	uint32_t Control : 1; // 0x18
	uint32_t Shift : 1; // 0x18
	uint32_t Alt : 1; // 0x18
	uint32_t bIgnoreCtrl : 1; // 0x18
	uint32_t bIgnoreShift : 1; // 0x18
	uint32_t bIgnoreAlt : 1; // 0x18
};

struct FCustomGameSetting {
	FString MutatorCategoryName; // 0x0
	FString MutatorCategoryDesc; // 0x10
	FString SettingsName; // 0x20
	int32_t SettingIndex; // 0x30
	FName InternalName; // 0x34
	int32_t GameSettingCategoryIndex; // 0x3c
	TArray<FName> SettingNameExplicit; // 0x40
	uint32_t bPresetLocked : 1; // 0x50
};

struct FSplineSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	int32_t StartPoint; // 0x10
	int32_t EndPoint; // 0x14
	float Weight; // 0x18
	FDouble LastUpdateTime; // 0x20
	float SourceInteriorVolume; // 0x28
	float SourceInteriorLPF; // 0x2c
	float CurrentInteriorVolume; // 0x30
	float CurrentInteriorLPF; // 0x34
};

struct FNxDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	float ImpactDamage; // 0x8
	float ImpactResistance; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
};

struct FShopCost {
	int32_t ShopItemCostID; // 0x0
	TArray<FShopPrice> Price; // 0x8
	FShopDiscount Discount; // 0x18
	QWordProperty StartDate; // 0x48
	QWordProperty EndDate; // 0x50
	TArray<FShopDiscount> BulkDiscounts; // 0x58
	EItemDisplayType DisplayTypeID; // 0x68
};

struct FMergePartyReplicatedData {
	FUniqueNetId LeaderID; // 0x0
	FUniqueNetId InviteeIDs[0x7]; // 0x48
};

struct FStateParams {
	ObjectProperty State; // 0x0
	EStatePriority Priority; // 0x8
};

struct FAIProxyData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector Gravity; // 0x18
	FRotator Rotation; // 0x24
	float Radius; // 0x30
	float Bounce; // 0x34
	ObjectProperty Actor; // 0x38
	ObjectProperty Vehicle; // 0x40
};

struct FCredentialItem {
	QWordProperty TourID; // 0x0
	FTourPrivateCredentials Credentials; // 0x8
};

struct FInputMatchRequest {
	TArray<FInputEntry> Inputs; // 0x0
	ObjectProperty MatchActor; // 0x10
	FName MatchFuncName; // 0x18
	DelegateProperty MatchDelegate; // 0x20
	FName FailedFuncName; // 0x38
	FName RequestName; // 0x40
	int32_t MatchIdx; // 0x48
	float LastMatchTime; // 0x4c
};

struct FUserRequest {
	FString McpId; // 0x0
	ObjectProperty Request; // 0x10
};

struct FNxDestructibleParameters {
	FNxDestructibleDamageParameters DamageParameters; // 0x0
	FNxDestructibleDebrisParameters DebrisParameters; // 0x14
	FNxDestructibleAdvancedParameters AdvancedParameters; // 0x40
	float DamageThreshold; // 0x58
	float DamageToRadius; // 0x5c
	float DamageCap; // 0x60
	float ForceToDamage; // 0x64
	float ImpactVelocityThreshold; // 0x68
	float MaterialStrength; // 0x6c
	float DamageToPercentDeformation; // 0x70
	float DeformationPercentLimit; // 0x74
	uint32_t bFormExtendedStructures : 1; // 0x78
	int32_t SupportDepth; // 0x7c
	int32_t MinimumFractureDepth; // 0x80
	int32_t DebrisDepth; // 0x84
	int32_t EssentialDepth; // 0x88
	float DebrisLifetimeMin; // 0x8c
	float DebrisLifetimeMax; // 0x90
	float DebrisMaxSeparationMin; // 0x94
	float DebrisMaxSeparationMax; // 0x98
	FBox ValidBounds; // 0x9c
	float MaxChunkSpeed; // 0xb8
	float MassScaleExponent; // 0xbc
	FNxDestructibleParametersFlag Flags; // 0xc0
	float GrbVolumeLimit; // 0xc4
	float GrbParticleSpacing; // 0xc8
	float FractureImpulseScale; // 0xcc
	TArray<FNxDestructibleDepthParameters> DepthParameters; // 0xd0
	int32_t DynamicChunksDominanceGroup; // 0xe0
	uint32_t UseDynamicChunksGroupsMask : 1; // 0xe4
	ERBCollisionChannel DynamicChunksChannel; // 0xe8
	FRBCollisionChannelContainer DynamicChunksCollideWithChannels; // 0xec
};

struct FPaintWithOverride {
	ObjectProperty PaintToOverride; // 0x0
	TArray<ObjectProperty> Overrides; // 0x8
};

struct FTourCreateSettings {
	ObjectProperty Settings; // 0x0
	FTourPrivateCredentials PrivateSettings; // 0x8
	TArray<FTourReward> Rewards; // 0x28
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FRenderCommandFence_Mirror {
	int32_t NumPendingFences; // 0x0
};

struct FGetSaveDataCallbackStruct {
	int32_t SlotIndex; // 0x0
	DelegateProperty Callback; // 0x8
};

struct FNxDestructibleParametersFlag {
	uint32_t ACCUMULATE_DAMAGE : 1; // 0x0
	uint32_t ASSET_DEFINED_SUPPORT : 1; // 0x0
	uint32_t WORLD_SUPPORT : 1; // 0x0
	uint32_t DEBRIS_TIMEOUT : 1; // 0x0
	uint32_t DEBRIS_MAX_SEPARATION : 1; // 0x0
	uint32_t CRUMBLE_SMALLEST_CHUNKS : 1; // 0x0
	uint32_t ACCURATE_RAYCASTS : 1; // 0x0
	uint32_t USE_VALID_BOUNDS : 1; // 0x0
	uint32_t FORM_EXTENDED_STRUCTURES : 1; // 0x0
};

struct FArenaStatSound {
	ObjectProperty StatEvent; // 0x0
	ObjectProperty Sound; // 0x8
};

struct FSummaryLabel {
	FString Label; // 0x0
	int32_t LabelWidth; // 0x10
	FLinearColor Color; // 0x14
};

struct FPaintMetricsData {
	char TeamColorID; // 0x0
	int32_t TeamProductID; // 0x4
	char CustomColorID; // 0x8
	int32_t CustomProductID; // 0xc
};

struct FClientLoadoutData {
	TArray<int32_t> Products; // 0x0
};

struct FGFxStatData {
	FString Id; // 0x0
	FString Name; // 0x10
	FString DisplayValue; // 0x20
	ObjectProperty Texture; // 0x30
	FString Description; // 0x38
	FNone* DisplayProductStatClass; // 0x48
};

struct FOnlineGameSearchParameter {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchComparisonType ComparisonType; // 0xd
};

struct FEngineAudioNativeState_OnGround : FEngineAudioNativeState {
	float GearSwitchTimeRemaining; // 0x38
	float RPMShiftUp; // 0x3c
	float RPMShiftDown; // 0x40
	int32_t Gear; // 0x44
};

struct FGFxTourPlatformGroup {
	TArray<OnlinePlatform> Platforms; // 0x0
	FString Label; // 0x10
	uint32_t bSelected : 1; // 0x20
};

struct FPolyReference {
	FActorReference OwningPylon; // 0x0
	int32_t PolyId; // 0x18
	FPointer CachedPoly; // 0x20
};

struct FASValue {
	ASType Type; // 0x0
	uint32_t B : 1; // 0x4
	float N; // 0x8
	int32_t I; // 0xc
	FString S; // 0x10
	ObjectProperty T; // 0x20
};

struct FParticleAttractorCollisionAction {
	ParticleAttractorActionType Type; // 0x0
	FString EventName; // 0x8
};

struct FControllerLayout {
	FName Name; // 0x0
	int32_t Priority; // 0x8
};

struct FTourBracket {
	QWordProperty TournamentID; // 0x0
	TArray<FTourTeam> Teams; // 0x8
	TArray<FTourMatch> Matches; // 0x18
	FTourLeaderboard Leaderboard; // 0x28
	TArray<FShopCurrencyInfo> CurrentPayouts; // 0x68
};

struct FNetPacketStats {
	int32_t OutPackets; // 0x0
	int32_t InPackets; // 0x4
	int32_t OutPacketsLost; // 0x8
	int32_t InPacketsLost; // 0xc
	int32_t OutOfOrderPackets; // 0x10
	int32_t OutBytes; // 0x14
	int32_t InBytes; // 0x18
};

struct FMatchSkillUpdate {
	uint32_t bValid : 1; // 0x0
	float Mu; // 0x4
	float Sigma; // 0x8
	int32_t Tier; // 0xc
	int32_t Division; // 0x10
	float PrevMu; // 0x14
	float PrevSigma; // 0x18
	int32_t PrevTier; // 0x1c
	int32_t PrevDivision; // 0x20
};

struct FPartyMergeResult {
	FUniqueNetId PlayerID; // 0x0
	FUniqueNetId LeaderID; // 0x48
	uint32_t bSuccess : 1; // 0x90
	FName FailReason; // 0x94
};

struct FAkActorEnvironment {
	TArray<FAkEnvironment> Environments; // 0x0
	ObjectProperty TargetActor; // 0x10
};

struct FPartyInvite {
	FUniqueNetId UserId; // 0x0
	FString Username; // 0x48
	FString PartyID; // 0x58
	QWordProperty InvitedAt; // 0x68
	QWordProperty AcceptedAt; // 0x70
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FSkelMeshActorControlTarget {
	FName ControlName; // 0x0
	ObjectProperty TargetActor; // 0x8
};

struct FCameraPreviewInfo {
	FNone* PawnClass; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
	FName AnimSeqName; // 0x18
	FVector Location; // 0x20
	FRotator Rotation; // 0x2c
	ObjectProperty PawnInst; // 0x38
};

struct FOnlineGameSearchResult {
	ObjectProperty GameSettings; // 0x0
	FPointer PlatformData; // 0x8
};

struct FSwitchRange {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FMultiMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FSwitchObjectCase {
	ObjectProperty ObjectValue; // 0x0
	uint32_t bFallThru : 1; // 0x8
	uint32_t bDefaultValue : 1; // 0x8
};

struct FServerResult {
	FString Address; // 0x0
	FString ServerName; // 0x10
	FCustomMatchSettings Settings; // 0x20
};

struct FColorParamPair {
	FName Key; // 0x0
	FLinearColor Value; // 0x8
};

struct FRecentParty {
	FUniqueNetId PartyLeader; // 0x0
	TArray<FUniqueNetId> PartyMembers; // 0x48
};

struct FPlayerChatMessage {
	float MessageTimeStamp; // 0x0
	FUniqueNetId PlayerID; // 0x8
	EChatChannel ChatChannel; // 0x50
	int32_t Team; // 0x54
	FString Message; // 0x58
};

struct FRawDistribution {
	char Type; // 0x0
	char Op; // 0x1
	char LookupTableNumElements; // 0x2
	char LookupTableChunkSize; // 0x3
	TArray<float> LookupTable; // 0x8
	float LookupTableTimeScale; // 0x18
	float LookupTableStartTime; // 0x1c
};

struct FFaceFXSoundCueKey {
	ObjectProperty FaceFXSoundCue; // 0x0
	ObjectProperty FaceFXAkEvent; // 0x8
};

struct FBlockedListRequestData {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
};

struct FTourMatchTeamDetails {
	QWordProperty TeamID; // 0x0
	TArray<int32_t> GoalsPerGame; // 0x8
	TArray<FTourMatchPlayerStats> CumulativePlayerStats; // 0x18
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FCameraTrackRotationPoint {
	float Time; // 0x0
	FRotator Rotation; // 0x4
};

struct FActorTouchRecordData {
	ObjectProperty Actor; // 0x0
	FVector TouchDirection; // 0x8
};

struct FProductMetricsData {
	int32_t Id; // 0x0
	TArray<FOnlineProductAttribute> Attributes; // 0x8
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	FTwoVectors ArriveWeight; // 0x4c
	FTwoVectors LeaveWeight; // 0x64
	EInterpCurveMode InterpMode; // 0x7c
};

struct FTrailSocketSamplePoint {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
};

struct FCalculateBallOnCarLocationInParams {
	FRotator CarRotation; // 0x0
	FVector CarLocation; // 0xc
	FVector CarAcceleration; // 0x18
	float CarSpeedPerc; // 0x24
	float CarTurnPerc; // 0x28
	float BaseForwardOffset; // 0x2c
	float BaseUpOffset; // 0x30
	float ForwardOffsetFromTurn; // 0x34
	float AccelerationEffectMultiplier; // 0x38
	float MaxRightOffset; // 0x3c
	float SlowRightOffsetPerc; // 0x40
	float MinUpOffsetPerc; // 0x44
};

struct FPlayerGameID {
	FUniqueNetId PlayerID; // 0x0
	FString GameID; // 0x48
};

struct FAnimatedMaterialParam {
	FName ParamName; // 0x0
};

struct FMcpChallengeRequest {
	FString UniqueChallengeId; // 0x0
	ObjectProperty HTTPRequest; // 0x10
};

struct FMaterialViewRelevance {
	uint32_t bOpaque : 1; // 0x0
	uint32_t bTranslucent : 1; // 0x0
	uint32_t bDistortion : 1; // 0x0
	uint32_t bOneLayerDistortionRelevance : 1; // 0x0
	uint32_t bLit : 1; // 0x0
	uint32_t bUsesSceneColor : 1; // 0x0
};

struct FTerrainMaterialMask {
	QWordProperty BitMask; // 0x0
	int32_t NumBits; // 0x8
};

struct FFColorVertexBuffer_Mirror {
	FPointer VfTable; // 0x0
	FPointer VertexData; // 0x8
	int32_t Data; // 0x10
	int32_t Stride; // 0x14
	int32_t NumVertices; // 0x18
};

struct FMcpIdMapping {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
};

struct FGetLeaderboardRankForUserData {
	FString PlayerName; // 0x0
	FUniqueNetId PlayerID; // 0x10
	int32_t Value; // 0x58
	float MMR; // 0x5c
};

struct FGetGameServerPingListData {
	FString Region; // 0x0
	FString IP; // 0x10
	FString Host; // 0x20
	int32_t Port; // 0x30
	FString Address; // 0x38
};

struct FAdInfo {
	FString URL; // 0x0
	int32_t ZoneID; // 0x10
	QWordProperty UTCEndTime; // 0x18
};

struct FStatCrowdNoise {
	ObjectProperty StatEvent; // 0x0
	ObjectProperty Noise; // 0x8
};

struct FCarComponentHistory {
	ObjectProperty CarComponent; // 0x0
	TArray<FCarComponentSnapshot> Snapshots; // 0x8
	FCarComponentSnapshot BackupSnapshot; // 0x18
};

struct FNavigationOctreeObject {
	FBox BoundingBox; // 0x0
	FVector BoxCenter; // 0x1c
	FPointer OctreeNode; // 0x28
	ObjectProperty Owner; // 0x30
	char OwnerType; // 0x38
};

struct FMapPrefs {
	TArray<FName> Likes; // 0x0
	TArray<FName> Dislikes; // 0x10
};

struct FPlayerReportReason {
	int32_t ReasonID; // 0x0
	FString Reason; // 0x8
};

struct FUniqueNetIdGroup4 {
	FUniqueNetId PlayerIDs[0x4]; // 0x0
};

struct FPendingMessage {
	FUniqueLobbyId LobbyId; // 0x0
	TArray<FString> Messages; // 0x10
};

struct FInheritedParameter {
	FName ParentParameterName; // 0x0
	FName AssetParameterName; // 0x8
};

struct FSet_Mirror {
	FSparseArray_Mirror Elements; // 0x0
	int32_t InlineHash; // 0x38
	FPointer Hash; // 0x40
	int32_t HashSize; // 0x48
};

struct FNameParamPair {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FLobbyFilter {
	FString Key; // 0x0
	FString Value; // 0x10
	EOnlineGameSearchComparisonType Operator; // 0x20
	uint32_t bNumeric : 1; // 0x24
};

struct FAnimatedMaterialParamColor : FAnimatedMaterialParamVector {
	ComponentProperty AlphaValue; // 0x10
};

struct FRandomAnimInfo {
	float Chance; // 0x0
	char LoopCountMin; // 0x4
	char LoopCountMax; // 0x5
	float BlendInTime; // 0x8
	FVector2D PlayRateRange; // 0xc
	uint32_t bStillFrame : 1; // 0x14
	char LoopCount; // 0x18
	float LastPosition; // 0x1c
};

struct FPlaylistTitleTrack : FPlaylistTrack {
	float StartupLogoDisplayDurationMS; // 0x10
};

struct FPlayerPermissionsReponse {
	FUniqueNetId PlayerID; // 0x0
	TArray<FName> Permissions; // 0x48
};

struct FLaunchNotificationInfo {
	uint32_t bWasLaunchedViaNotification : 1; // 0x0
	FNotificationInfo Notification; // 0x8
};

struct FParticleSystemReplayFrame {
	TArray<FParticleEmitterReplayFrame> Emitters; // 0x0
};

struct FAkEventTrackKey {
	float Time; // 0x0
	ObjectProperty Event; // 0x8
};

struct FReplayClassTask : FReplayIOTaskBase {
	FString ClassPath; // 0x28
};

struct FCalculateBallOnCarInAirLocationInParams {
	float BallRadius; // 0x0
	float BallOnCarDistance; // 0x4
	float CarLocalCollisionZ; // 0x8
	FRotator CarRotation; // 0xc
	FVector CarLocation; // 0x18
	FVector CarCurrentLinearVelocity; // 0x24
};

struct FReservationLoadout {
	FUniqueNetId PlayerID; // 0x0
	TArray<int32_t> ProductIDs; // 0x48
};

struct FMusicTrackStruct {
	ObjectProperty TheSoundCue; // 0x0
	uint32_t bAutoPlay : 1; // 0x8
	uint32_t bPersistentAcrossLevels : 1; // 0x8
	float FadeInTime; // 0xc
	float FadeInVolumeLevel; // 0x10
	float FadeOutTime; // 0x14
	float FadeOutVolumeLevel; // 0x18
	FString MP3Filename; // 0x20
};

struct FMaterialAndMaterialOverride {
	ObjectProperty MICToOverride; // 0x0
	ObjectProperty MICTOOverrideWith; // 0x8
};

struct FImpactInfo {
	ObjectProperty HitActor; // 0x0
	FVector HitLocation; // 0x8
	FVector HitNormal; // 0x14
	FVector RayDir; // 0x20
	FVector StartTrace; // 0x2c
	FTraceHitInfo HitInfo; // 0x38
};

struct FTextSizingParameters {
	float DrawX; // 0x0
	float DrawY; // 0x4
	float DrawXL; // 0x8
	float DrawYL; // 0xc
	FVector2D Scaling; // 0x10
	ObjectProperty DrawFont; // 0x18
	FVector2D SpacingAdjust; // 0x20
	float ViewportHeight; // 0x28
};

struct FGameSessionInformation {
	int32_t AppTitleID; // 0x0
	int32_t PlatformType; // 0x4
	FString Language; // 0x8
	FString GameplaySessionTimestamp; // 0x18
	float GameplaySessionStartTime; // 0x28
	float GameplaySessionEndTime; // 0x2c
	uint32_t bGameplaySessionInProgress : 1; // 0x30
	FString GameplaySessionID; // 0x38
	FString GameClassName; // 0x48
	FString MapName; // 0x58
	FString MapURL; // 0x68
	int32_t SessionInstance; // 0x78
	int32_t GameTypeId; // 0x7c
	FUniqueNetId OwningNetId; // 0x80
	int32_t PlaylistId; // 0xc8
};

struct FCrowdScoreState {
	int32_t MaxIncreaseScoreSeparation; // 0x0
	int32_t MaxDecreaseScoreSeparation; // 0x4
	FName StateName; // 0x8
};

struct FGameModeData {
	int32_t GameMode; // 0x0
	FString LocalizedName; // 0x8
};

struct FPBMemUsageInfo {
	ObjectProperty Building; // 0x0
	ObjectProperty Ruleset; // 0x8
	int32_t NumStaticMeshComponent; // 0x10
	int32_t NumInstancedStaticMeshComponents; // 0x14
	int32_t NumInstancedTris; // 0x18
	int32_t LightmapMemBytes; // 0x1c
	int32_t ShadowmapMemBytes; // 0x20
	int32_t LODDiffuseMemBytes; // 0x24
	int32_t LODLightingMemBytes; // 0x28
};

struct FCrumbTrailName {
	FName CrumbName; // 0x0
};

struct FQueuedActivationInfo {
	ObjectProperty ActivatedEvent; // 0x0
	ObjectProperty InOriginator; // 0x8
	ObjectProperty InInstigator; // 0x10
	TArray<int32_t> ActivateIndices; // 0x18
	uint32_t bPushTop : 1; // 0x28
};

struct FRocketPassRewardData {
	int32_t Tier; // 0x0
	TArray<FOnlineProductData> ProductData; // 0x8
	TArray<FXPRewardData> XPRewards; // 0x18
	TArray<FCurrency> CurrencyDrops; // 0x28
};

struct FBaseAuthSession {
	FIpAddr EndPointIP; // 0x0
	int32_t EndPointPort; // 0x14
	FUniqueNetId EndPointUID; // 0x18
};

struct FPhysXEmitterVerticalLodProperties {
	float WeightForFifo; // 0x0
	float WeightForSpawnLod; // 0x4
	float SpawnLodRateVsLifeBias; // 0x8
	float RelativeFadeoutTime; // 0xc
};

struct FPauserData {
	ObjectProperty PC; // 0x0
	int32_t PauseNum; // 0x8
};

struct FPlaylistState {
	FName Playlist; // 0x0
	uint32_t bEnabled : 1; // 0x8
};

struct FSwivelExtent {
	int32_t PitchMin; // 0x0
	int32_t PitchMax; // 0x4
	int32_t YawMax; // 0x8
};

struct FEventCurrencyData {
	int32_t CurrencyID; // 0x0
	int32_t PsyonixID; // 0x4
	int32_t Total; // 0x8
	QWordProperty ExpirationTime; // 0x10
};

struct FCameraOrientation {
	FVector Focus; // 0x0
	FRotator Rotation; // 0xc
	float Distance; // 0x18
	float FOV; // 0x1c
	FVector CalculatedLocation; // 0x20
};

struct FSettingsPropertyPropertyMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0x10
	EPropertyValueMappingType MappingType; // 0x20
	TArray<FIdToStringMapping> ValueMappings; // 0x28
	TArray<FSettingsData> PredefinedValues; // 0x38
	float MinVal; // 0x48
	float MaxVal; // 0x4c
	float RangeIncrement; // 0x50
};

struct FNotificationMessageInfo {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FReplayHeaderLoadResult {
	ObjectProperty Header; // 0x0
	ObjectProperty Error; // 0x8
};

struct FUpdatedPlayerSkillRating : FPlayerSkillRating {
	float PrevMu; // 0x70
	float PrevSigma; // 0x74
	int32_t PrevTier; // 0x78
	int32_t PrevDivision; // 0x7c
};

struct FVoiceRoomCredentials {
	FString RoomId; // 0x0
	FString BaseUrl; // 0x10
	FString Token; // 0x20
};

struct FTPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FTourPlacementInfo {
	int32_t Placement; // 0x0
	FString Name; // 0x8
	int32_t Value; // 0x18
	QWordProperty TeamID; // 0x20
	FUniqueNetId PlayerID; // 0x28
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	uint32_t bIsCollapsed : 1; // 0x20
	uint32_t bIsSelected : 1; // 0x20
};

struct FProfileAutoCamSettings {
	float FOV; // 0x0
	float Height; // 0x4
	float Distance; // 0x8
	float MoveSpeed; // 0xc
	float MoveSpeedZ; // 0x10
	float RotateSpeed; // 0x14
	float AerialDistance; // 0x18
	float FocusBlendSpeed; // 0x1c
	float AerialPrediction; // 0x20
	uint32_t bUseReplayCamera : 1; // 0x24
	uint32_t bFocusOnGoals : 1; // 0x24
};

struct FFTELevelData {
	FString LevelId; // 0x0
	FNone* SequenceClass; // 0x10
	FString MapName; // 0x18
	FString MatchType; // 0x28
	TArray<FString> AddedInfo; // 0x38
};

struct FFilterProductQuality {
	FString Label; // 0x0
	uint32_t bSelected : 1; // 0x10
	EProductQuality Quality; // 0x14
	int32_t PreviewQuantity; // 0x18
};

struct FFXActorEventCheck {
	ObjectProperty Event; // 0x0
	uint32_t bHasTicked : 1; // 0x8
};

struct FAddProductAttribute {
	FName Key; // 0x0
	FString Value; // 0x8
};

struct FBumpAngleCheckConfig {
	uint32_t bEnabled : 1; // 0x0
	float BumpAngleYaw; // 0x4
	float BumpAnglePitch; // 0x8
	float DemolishAngleYaw; // 0xc
	float DemolishAnglePitch; // 0x10
};

struct FOptionsValue {
	FName Id; // 0x0
	FString Value; // 0x8
};

struct FPsyNetPartyInfo {
	FString PartyID; // 0x0
	QWordProperty CreatedAt; // 0x10
	FUniqueNetId CreatedByUserId; // 0x18
	FString JoinID; // 0x60
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FLoadoutAttributesArray {
	TArray<FProductAttributesArray> Products; // 0x0
};

struct FTourPrivateCredentials {
	FString Title; // 0x0
	FString Password; // 0x10
};

struct FModeMapPair {
	int32_t GameMode; // 0x0
	FName MapName; // 0x4
};

struct FAkEnvironment {
	FString Id; // 0x0
	int32_t Priority; // 0x10
	float WetValue; // 0x14
	float DryValue; // 0x18
	Fuint HashedEnvID; // 0x1c
};

struct FAssetLoadResult {
	int32_t ProductID; // 0x0
	FName AssetName; // 0x4
	ObjectProperty Asset; // 0x10
	ObjectProperty ThumbnailAsset; // 0x18
};

struct FAchievementReward {
	FString RewardName; // 0x0
	FString Description; // 0x10
	FString Data; // 0x20
	EAchievementRewardType RewardType; // 0x30
};

struct FTexture2DMipMap {
	FUntypedBulkData_Mirror Data; // 0x0
	int32_t SizeX; // 0x58
	int32_t SizeY; // 0x5c
};

struct FWorldColorData {
	FLinearColor EnvironmentA; // 0x0
	FLinearColor EnvironmentB; // 0x10
	FLinearColor SunLight; // 0x20
	FLinearColor WorldLight; // 0x30
};

struct FReplayKeyframe {
	float Time; // 0x0
	int32_t frame; // 0x4
	int32_t Position; // 0x8
};

struct FCompletedFTEInfo {
	FName GroupName; // 0x0
	uint32_t bHasCompletedGroup : 1; // 0x8
	TArray<FName> CompletedCheckpoints; // 0x10
	int32_t GroupVersion; // 0x20
};

struct FDouble {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FConnectionBandwidthStats {
	int32_t UpstreamRate; // 0x0
	int32_t DownstreamRate; // 0x4
	int32_t RoundtripLatency; // 0x8
};

struct FPlayerTitleCategory {
	FName Id; // 0x0
	FString Color; // 0x8
	FString GlowColor; // 0x18
};

struct FFXEventSubscription {
	ObjectProperty Event; // 0x0
	DelegateProperty OnPushed; // 0x8
	DelegateProperty OnPopped; // 0x20
};

struct FPsyNetOnlineStatus {
	FUniqueNetId PlayerID; // 0x0
	FString PresenceInfo; // 0x48
	FString PresenceState; // 0x58
};

struct FOnlineArbitrationRegistrant : FOnlineRegistrant {
	QWordProperty MachineId; // 0x48
	int32_t Trustworthiness; // 0x50
};

struct FFakeData1 {
	FString string1; // 0x0
	FName name1; // 0x10
	uint32_t bool1 : 1; // 0x18
	QWordProperty qword1; // 0x20
	float float1; // 0x28
	char byte1; // 0x2c
	int32_t int1; // 0x30
	FakeDataEnum enum1; // 0x34
};

struct FPreviewAnimKeyframe {
	FRotator Rotation; // 0x0
	FVector Translation; // 0xc
	FViewTargetTransitionParams BlendParams; // 0x18
	FVector BouncyChassisForce; // 0x28
	uint32_t bAddRotation : 1; // 0x34
	uint32_t bAddTranslation : 1; // 0x34
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FTAPlayerStat {
	ObjectProperty StatEvent; // 0x0
	int32_t Count; // 0x8
};

struct FTourPlayerStats {
	FUniqueNetId PlayerID; // 0x0
	int32_t Score; // 0x48
	int32_t Saves; // 0x4c
	int32_t Shots; // 0x50
	int32_t Goals; // 0x54
	int32_t Assists; // 0x58
};

struct FBodyToEngineAudioPair {
	ObjectProperty Body; // 0x0
	ObjectProperty EngineAudio; // 0x8
};

struct FLightmassDebugOptions {
	uint32_t bDebugMode : 1; // 0x0
	uint32_t bStatsEnabled : 1; // 0x0
	uint32_t bGatherBSPSurfacesAcrossComponents : 1; // 0x0
	float CoplanarTolerance; // 0x4
	uint32_t bUseDeterministicLighting : 1; // 0x8
	uint32_t bUseImmediateImport : 1; // 0x8
	uint32_t bImmediateProcessMappings : 1; // 0x8
	uint32_t bSortMappings : 1; // 0x8
	uint32_t bDumpBinaryFiles : 1; // 0x8
	uint32_t bDebugMaterials : 1; // 0x8
	uint32_t bPadMappings : 1; // 0x8
	uint32_t bDebugPaddings : 1; // 0x8
	uint32_t bOnlyCalcDebugTexelMappings : 1; // 0x8
	uint32_t bUseRandomColors : 1; // 0x8
	uint32_t bColorBordersGreen : 1; // 0x8
	uint32_t bColorByExecutionTime : 1; // 0x8
	float ExecutionTimeDivisor; // 0xc
	uint32_t bInitialized : 1; // 0x10
};

struct FPartyMetricsData {
	int32_t LocalPlayers; // 0x0
	int32_t RemotePlayers; // 0x4
	uint32_t bPartyLeader : 1; // 0x8
};

struct FLocalizedCameraMode {
	FName Name; // 0x0
	uint32_t bDisabled : 1; // 0x8
	FString Label; // 0x10
	FString Description; // 0x20
};

struct FVoiceRoomTokenRequest {
	FString RoomId; // 0x0
	TArray<FUniqueNetId> PlayerIDs; // 0x10
};

struct FMapSkillSettings {
	FName MapName; // 0x0
	float MinimumSkill; // 0x8
};

struct FSaveDataListFilesTask : FSaveDataTask {
	FString Pattern; // 0x18
	TArray<FString> Files; // 0x28
	EBasicLoadResult Result; // 0x38
};

struct FOnlineGameSearchSortClause {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchSortType SortType; // 0xd
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FNetStats {
	float PingMin; // 0x0
	float Jitter; // 0x4
	float LossPct; // 0x8
};

struct FModifierSubscription {
	FNone* ObjClass; // 0x0
	DelegateProperty OnAdd; // 0x8
	DelegateProperty OnRemove; // 0x20
};

struct FSpawnArchetypeData {
	ObjectProperty Archetype; // 0x0
	int32_t MaxSpawnCount; // 0x8
};

struct FDemolishDataGoalExplosion : FDemolishData {
	ObjectProperty GoalExplosionOwner; // 0x28
};

struct FInputEntry {
	EInputTypes Type; // 0x0
	float Value; // 0x4
	float TimeDelta; // 0x8
	EInputMatchAction Action; // 0xc
};

struct FGFxClubServer {
	ObjectProperty Server; // 0x0
	FString ServerName; // 0x8
};

struct FAkRevSimFrame {
	float RPM; // 0x0
	int32_t Gear; // 0x4
	int32_t RevGear; // 0x8
	float Velocity; // 0xc
};

struct FSkillSyncRequest {
	ObjectProperty RPC; // 0x0
	FUniqueNetId PlayerID; // 0x8
	DelegateProperty Callback; // 0x50
};

struct FGFxTeamColor {
	FColor Value; // 0x0
	int32_t ColorID; // 0x4
	int32_t X; // 0x8
	int32_t Y; // 0xc
};

struct FSpeedTreeStaticLight {
	FGuid Guid; // 0x0
	ObjectProperty BranchShadowMap; // 0x10
	ObjectProperty FrondShadowMap; // 0x18
	ObjectProperty LeafMeshShadowMap; // 0x20
	ObjectProperty LeafCardShadowMap; // 0x28
	ObjectProperty BillboardShadowMap; // 0x30
};

struct FAnimBlendInfo {
	FName AnimName; // 0x0
	FAnimInfo AnimInfo; // 0x8
	float Weight; // 0x20
};

struct FXboxOneDLCInfo {
	FString Key; // 0x0
	FName Value; // 0x10
	uint32_t bDiscUnlock : 1; // 0x18
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FNavMeshPathGoalEvaluatorCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x8
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FLoadoutTeamColor {
	char Team; // 0x0
	char TeamColorID; // 0x1
	char CustomColorID; // 0x2
	uint32_t bSet : 1; // 0x4
};

struct FGFxMapPreference {
	FName MapID; // 0x0
	FName MapTypeID; // 0x8
	FName PlaylistId; // 0x10
	FString Label; // 0x18
	ObjectProperty Thumbnail; // 0x28
	EMapPrefType Preference; // 0x30
};

struct FRocketPassReward {
	int32_t CurrencyID; // 0x0
	FName Name; // 0x4
	float Amount; // 0xc
	int32_t Tier; // 0x10
};

struct FPawnClassEventData {
	FName PawnClassName; // 0x0
};

struct FRawDistributionFloat : FRawDistribution {
	ComponentProperty Distribution; // 0x20
};

struct FOnlineUser {
	FUniqueNetId UniqueId; // 0x0
	FString NickName; // 0x48
	TArray<FString> AttrName; // 0x58
	TArray<FString> AttrValue; // 0x68
};

struct FTeamPairHistory {
	FUniqueNetId PartyA; // 0x0
	FUniqueNetId PartyB; // 0x48
	int32_t Count; // 0x90
};

struct FPermissionPair {
	FString PermissionLabel; // 0x0
	EChatPermissionLevel Level; // 0x10
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	ObjectProperty Function; // 0x10
};

struct FActorParamPair {
	FName Key; // 0x0
	ObjectProperty Value; // 0x8
};

struct FMapImageLoadResult {
	ObjectProperty Image; // 0x0
	FName MapName; // 0x8
};

struct FDemolishData2 : FDemolishData {
	ObjectProperty CustomDemoFX; // 0x28
};

struct FSettingsData {
	ESettingsDataType Type; // 0x0
	int32_t Value1; // 0x4
	FPointer Value2; // 0x8
};

struct FPlaylistTrack {
	ObjectProperty Track; // 0x0
	ObjectProperty Icon; // 0x8
};

struct FProductReplacement2 {
	TArray<EConsoleType> Platforms; // 0x0
	ObjectProperty Replacement; // 0x10
};

struct FUIAxisEmulationData : FUIKeyRepeatData {
	uint32_t bEnabled : 1; // 0x10
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FKSphylElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	float Length; // 0x44
	uint32_t bNoRBCollision : 1; // 0x48
	uint32_t bPerPolyShape : 1; // 0x48
};

struct FCoverInfo {
	ObjectProperty Link; // 0x0
	int32_t SlotIdx; // 0x8
};

struct FBranchInfo {
	FName BoneName; // 0x0
	float PerBoneWeightIncrease; // 0x8
};

struct FCrowdValueState {
	float Value; // 0x0
	FName StateName; // 0x4
};

struct FLeaderboardData {
	FUniqueNetId PlayerID; // 0x0
	FString UnSanitizedPlayerName; // 0x48
	FString PlayerName; // 0x58
	uint32_t bPsyNetUser : 1; // 0x68
	int32_t Rank; // 0x6c
	int32_t Value; // 0x70
	float MMR; // 0x74
	int32_t Division; // 0x78
	uint32_t bIsPrimaryPlayer : 1; // 0x7c
};

struct FLocationCameraKnock : FCameraKnockBase {
	FVector Amount; // 0x10
};

struct FUploadStatData {
	FUniqueNetId PlayerID; // 0x0
	int32_t Value; // 0x48
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	FString Map; // 0x28
	TArray<FString> Op; // 0x38
	FString Portal; // 0x48
	int32_t Valid; // 0x58
};

struct FStorageMetadata {
	FName Category; // 0x0
	int32_t Checksum; // 0x8
	EObjectEncoding Encoding; // 0xc
};

struct FReplayFocusCar {
	float Time; // 0x0
	float Duration; // 0x4
	FName CarName; // 0x8
	int32_t BallHitIndex; // 0x10
};

struct FServerSetLoadoutTeam {
	TArray<FLoadoutProductData> Products; // 0x0
	FLoadoutTeamPaint TeamPaint; // 0x10
};

struct FUploadStatDataSet {
	FName StatId; // 0x0
	TArray<FUploadStatData> Data; // 0x8
};

struct FCachedObstaclePoly {
	FPointer Poly; // 0x0
	FPlane Plane; // 0x10
};

struct FTriangleSortSettings {
	TriangleSortOption TriangleSorting; // 0x0
	TriangleSortAxis CustomLeftRightAxis; // 0x1
	FName CustomLeftRightBoneName; // 0x4
};

struct FSample {
	float Low; // 0x0
	float High; // 0x4
};

struct FTourMatchPlayerStats {
	FName Name; // 0x0
	FUniqueNetId Id; // 0x8
	int32_t Score; // 0x50
	int32_t Goals; // 0x54
	int32_t Assists; // 0x58
	int32_t Saves; // 0x5c
	int32_t Shots; // 0x60
};

struct FOnlineCrossTitleContent : FOnlineContent {
	int32_t TitleId; // 0x60
};

struct FTerrainBVTree {
	TArray<int32_t> Nodes; // 0x0
};

struct FOnlineMapSet {
	FName SetName; // 0x0
	TArray<FOnlineMapData> Maps; // 0x8
	ObjectProperty MapSet; // 0x18
};

struct FKCachedConvexData_Mirror {
	TArray<int32_t> CachedConvexElements; // 0x0
};

struct FFragmentGroup {
	TArray<int32_t> FragmentIndices; // 0x0
	uint32_t bGroupIsRooted : 1; // 0x10
};

struct FAnimInfo {
	FName AnimSeqName; // 0x0
	ObjectProperty AnimSeq; // 0x8
	int32_t AnimLinkupIndex; // 0x10
};

struct FGameTypePrefix {
	FString Prefix; // 0x0
	uint32_t bUsesCommonPackage : 1; // 0x10
	FString GameType; // 0x18
	TArray<FString> AdditionalGameTypes; // 0x28
	TArray<FString> ForcedObjects; // 0x38
};

struct FWorldContactData {
	uint32_t bHasContact : 1; // 0x0
	FVector Location; // 0x4
	FVector Velocity; // 0x10
	FVector Normal; // 0x1c
};

struct FVectorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveVector ParameterValueCurve; // 0x40
};

struct FGameStatGroup {
	EGameStatGroups Group; // 0x0
	int32_t Level; // 0x4
};

struct FGFxPlayerAvatarBorderRef {
	FProductHashID HashID; // 0x0
	ObjectProperty PlayerAvatarBorder; // 0x8
};

struct FBiasedGoalActor {
	ObjectProperty Goal; // 0x0
	int32_t ExtraCost; // 0x8
};

struct FInputEventParameters {
	int32_t PlayerIndex; // 0x0
	int32_t ControllerId; // 0x4
	FName InputKeyName; // 0x8
	EInputEvent EventType; // 0x10
	float InputDelta; // 0x14
	float DeltaTime; // 0x18
	uint32_t bAltPressed : 1; // 0x1c
	uint32_t bCtrlPressed : 1; // 0x1c
	uint32_t bShiftPressed : 1; // 0x1c
};

struct FExplosionData {
	ComponentProperty Goal; // 0x0
	FVector Location; // 0x8
};

struct FPostProcessMaterialRef {
	ObjectProperty Effect; // 0x0
};

struct FFontImportOptionsData {
	FString FontName; // 0x0
	float Height; // 0x10
	uint32_t bEnableAntialiasing : 1; // 0x14
	uint32_t bEnableBold : 1; // 0x14
	uint32_t bEnableItalic : 1; // 0x14
	uint32_t bEnableUnderline : 1; // 0x14
	uint32_t bAlphaOnly : 1; // 0x14
	EFontImportCharacterSet CharacterSet; // 0x18
	FString Chars; // 0x20
	FString UnicodeRange; // 0x30
	FString CharsFilePath; // 0x40
	FString CharsFileWildcard; // 0x50
	uint32_t bCreatePrintableOnly : 1; // 0x60
	uint32_t bIncludeASCIIRange : 1; // 0x60
	FLinearColor ForegroundColor; // 0x64
	uint32_t bEnableDropShadow : 1; // 0x74
	int32_t TexturePageWidth; // 0x78
	int32_t TexturePageMaxHeight; // 0x7c
	int32_t XPadding; // 0x80
	int32_t YPadding; // 0x84
	int32_t ExtendBoxTop; // 0x88
	int32_t ExtendBoxBottom; // 0x8c
	int32_t ExtendBoxRight; // 0x90
	int32_t ExtendBoxLeft; // 0x94
	uint32_t bEnableLegacyMode : 1; // 0x98
	int32_t Kerning; // 0x9c
	uint32_t bUseDistanceFieldAlpha : 1; // 0xa0
	int32_t DistanceFieldScaleFactor; // 0xa4
	float DistanceFieldScanRadiusScale; // 0xa8
};

struct FMcpInventoryItem {
	FString InstanceItemId; // 0x0
	FString GlobalItemId; // 0x10
	int32_t Quantity; // 0x20
	int32_t QuantityIAP; // 0x24
	float Scalar; // 0x28
	FString LastUpdateTime; // 0x30
	TArray<FMcpInventoryItemAttribute> Attributes; // 0x40
};

struct FPBFracMeshCompInfo {
	ComponentProperty FracMeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FGetGenericDataAllData {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FWheelFX {
	ComponentProperty PSC; // 0x0
	FVector Velocity; // 0x8
	uint32_t bHasContact : 1; // 0x14
	ObjectProperty SupersonicFXActor; // 0x18
	FName BoneName; // 0x20
	FVector BoneOffset; // 0x28
};

struct FSocialPostLinkInfo : FSocialPostImageInfo {
	FString TitleURL; // 0x48
	FString PictureURL; // 0x58
};

struct FOnlineFriend : FOnlineUser {
	FUniqueNetId PlayerID; // 0x78
	QWordProperty SessionId; // 0xc0
	OnlinePlatform PlatformOverride; // 0xc8
	FString PlayerName; // 0xd0
	FString SecondaryPlayerName; // 0xe0
	OnlinePlatform SecondaryPlatform; // 0xf0
	FString PresenceInfo; // 0xf8
	EOnlineFriendState FriendState; // 0x108
	uint32_t bIsOnline : 1; // 0x10c
	uint32_t bIsPlaying : 1; // 0x10c
	uint32_t bIsPlayingThisGame : 1; // 0x10c
	uint32_t bIsJoinable : 1; // 0x10c
	uint32_t bHasVoiceSupport : 1; // 0x10c
	uint32_t bHaveInvited : 1; // 0x10c
	uint32_t bHasInvitedYou : 1; // 0x10c
	int32_t GroupId; // 0x110
	FPsyTag PsyTag; // 0x118
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float StereoBleed; // 0x8
	float LFEBleed; // 0xc
	float VoiceCenterChannelVolume; // 0x10
	float RadioFilterVolume; // 0x14
	float RadioFilterVolumeThreshold; // 0x18
	uint32_t bApplyEffects : 1; // 0x1c
	uint32_t bAlwaysPlay : 1; // 0x1c
	uint32_t bIsUISound : 1; // 0x1c
	uint32_t bIsMusic : 1; // 0x1c
	uint32_t bReverb : 1; // 0x1c
	uint32_t bCenterChannelOnly : 1; // 0x1c
	uint32_t bApplyAmbientVolumes : 1; // 0x1c
};

struct FInterpPointOnSpline {
	FVector Position; // 0x0
	float InVal; // 0xc
	float Length; // 0x10
};

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	FName AnimSeqName; // 0x4
	float AnimStartOffset; // 0xc
	float AnimEndOffset; // 0x10
	float AnimPlayRate; // 0x14
	uint32_t bLooping : 1; // 0x18
	uint32_t bReverse : 1; // 0x18
};

struct FProductAttachment {
	ObjectProperty StaticMesh; // 0x0
	ObjectProperty SkeletalMesh; // 0x8
	ObjectProperty ParticleSystem; // 0x10
	ObjectProperty Material; // 0x18
	float Scale; // 0x20
	FVector Translation; // 0x24
	FRotator Rotation; // 0x30
	EProductAttachmentSocket Socket; // 0x3c
	ComponentProperty Antenna; // 0x40
	TArray<ObjectProperty> Behaviors; // 0x48
	ObjectProperty InheritCarAttribute; // 0x58
	ComponentProperty Component; // 0x60
	ObjectProperty FXActor; // 0x68
};

struct FPickupData2 {
	ObjectProperty Instigator; // 0x0
	char PickedUp; // 0x8
};

struct FGoalData {
	ComponentProperty Goal; // 0x0
	FVector GoalFront; // 0x8
	FVector GoalForward; // 0x14
	float DotToBall; // 0x20
	float DistToBall; // 0x24
	float BallSpeedTowardsGoal; // 0x28
	float DotToBallVelocity; // 0x2c
	float RawScorability; // 0x30
	float Scorability; // 0x34
	float Defense; // 0x38
	int32_t NumDefensiveCars; // 0x3c
	float Offense; // 0x40
	int32_t NumOffensiveCars; // 0x44
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FGFxMapData {
	FName Name; // 0x0
	FString FriendlyName; // 0x8
	ObjectProperty Thumbnail; // 0x18
	ObjectProperty LargeImage; // 0x20
	ObjectProperty Data; // 0x28
	int32_t GameMode; // 0x30
};

struct FScheduleRegion {
	FString Id; // 0x0
	FString Label; // 0x10
};

struct FCarBallInteractionSettings {
	uint32_t bSkipScriptForces : 1; // 0x0
	FInterpCurveFloat PushFactorCurve; // 0x8
	float PushZScale; // 0x20
	float PushForwardScale; // 0x24
	float MaxRelativeSpeed; // 0x28
	float Restitution; // 0x2c
	float Friction; // 0x30
};

struct FEngineAudioNativeState_InAir : FEngineAudioNativeState_Clutched {
	float TimeInAir; // 0x40
};

struct FAggregateInput {
	int32_t Count; // 0x0
	float AverageHeld; // 0x4
	float CurrentDuration; // 0x8
	uint32_t bLastHeld : 1; // 0xc
};

struct FSkillMatchData {
	QWordProperty ServerId; // 0x0
	int32_t Playlist; // 0x8
	int32_t WinningTeam; // 0xc
	int32_t Team0Score; // 0x10
	int32_t Team1Score; // 0x14
	uint32_t bOverTime : 1; // 0x18
};

struct FRocketPassInfo {
	int32_t TierLevel; // 0x0
	uint32_t bOwnsPremium : 1; // 0x4
	float XPMultiplier; // 0x8
};

struct FThumbnailComponent {
	ComponentProperty Component; // 0x0
	FMatrix BaseTransform; // 0x10
	FName Tag; // 0x50
};

struct FMaterialInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0x10
	int32_t Mask; // 0x20
	int32_t MaskR; // 0x24
	int32_t MaskG; // 0x28
	int32_t MaskB; // 0x2c
	int32_t MaskA; // 0x30
	int32_t GCC64_Padding; // 0x34
};

struct FCommunityContentFile {
	int32_t ContentId; // 0x0
	FString RemoteContentPath; // 0x8
	int32_t FileId; // 0x18
	int32_t ContentType; // 0x1c
	int32_t FileSize; // 0x20
	FUniqueNetId Owner; // 0x28
	int32_t DownloadCount; // 0x70
	float AverageRating; // 0x74
	int32_t RatingCount; // 0x78
	int32_t LastRatingGiven; // 0x7c
	FString LocalFilePath; // 0x80
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FPostCreditData {
	FString Line0; // 0x0
	FString Line1; // 0x10
	FString Line2; // 0x20
	FString Line3; // 0x30
};

struct FAngleSelectData {
	float MaxDegreeAngle; // 0x0
	float MaxDistance; // 0x4
};

struct FReplayIOTaskBase {
	ObjectProperty Replay; // 0x0
	FString Path; // 0x8
	ObjectProperty Error; // 0x18
	FPointer Ar; // 0x20
};

struct FCommunityContentMetadata {
	int32_t ContentType; // 0x0
	TArray<FSettingsProperty> MetadataItems; // 0x8
	FString RemotePath; // 0x18
	FString DisplayName; // 0x28
};

struct FMorphNodeConn {
	TArray<ObjectProperty> ChildNodes; // 0x0
	FName ConnName; // 0x10
	int32_t DrawY; // 0x18
};

struct FDamageParameters {
	EDamageParameterOverrideMode OverrideMode; // 0x0
	float BaseDamage; // 0x4
	float Radius; // 0x8
	float Momentum; // 0xc
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FMatineeRawDistributionFloat : FRawDistributionFloat {
	float MatineeValue; // 0x28
	uint32_t bInMatinee : 1; // 0x2c
};

struct FPriorityCandidate {
	ObjectProperty Candidate; // 0x0
	int32_t Priority; // 0x8
	TArray<FString> BonusReasons; // 0x10
};

struct FOnlineSaveObject {
	FString Path; // 0x0
	FString Data; // 0x10
	ObjectProperty DataObj; // 0x20
};

struct FAnimatedFloatParam : FAnimatedParam {
	FInterpCurveFloat ValueOverTime; // 0x8
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FAkRevSimPhysicsControls {
	float Weight; // 0x0
	float EngineTorque; // 0x4
	float BreakingHorsePower; // 0x8
	TArray<float> GearRatios; // 0x10
};

struct FCameraKnockBase {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	float Falloff; // 0x8
	float Time; // 0xc
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	FString StringValue2; // 0x28
	ObjectProperty ObjectValue; // 0x38
};

struct FUniqueLobbyId {
	QWordProperty Uid; // 0x0
	OnlinePlatform Platform; // 0x8
};

struct FOnlineStatsRow {
	FUniqueNetId PlayerID; // 0x0
	FSettingsData Rank; // 0x48
	FString NickName; // 0x58
	TArray<FOnlineStatsColumn> Columns; // 0x68
	TArray<FSettingsData> StatValues; // 0x78
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPitchTekClearSettings {
	uint32_t bClearColorTargetEveryFrame : 1; // 0x0
	FColor ColorTargetClearColor; // 0x4
	uint32_t bClearDataTargetEveryFrame : 1; // 0x8
	FColor DataTargetClearColor; // 0xc
};

struct FPlayerBinding {
	FName Action; // 0x0
	FName Key; // 0x8
	EAxisSign AxisSign; // 0x10
	EButtonPressType PressType; // 0x11
	float Speed; // 0x14
	uint32_t bRequired : 1; // 0x18
	ERemappable Remappable; // 0x1c
	float PressedTime; // 0x20
	float ReleasedTime; // 0x24
	uint32_t bTapped : 1; // 0x28
	uint32_t bToggled : 1; // 0x28
};

struct FMICSwapParameters {
	ObjectProperty MICToChange; // 0x0
	FName FirstParameter; // 0x8
	FName SecondParameter; // 0x10
};

struct FCrossplayGroup {
	TArray<OnlinePlatform> Platforms; // 0x0
};

struct FSwarmDebugOptions {
	uint32_t bDistributionEnabled : 1; // 0x0
	uint32_t bForceContentExport : 1; // 0x0
	uint32_t bInitialized : 1; // 0x0
};

struct FScalarMaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x38
	float Constant; // 0x3c
};

struct FUIDataStoreInputAlias {
	FName AliasName; // 0x0
	FUIInputKeyData PlatformInputKeys[0x7]; // 0x8
};

struct FProductAttributesArray {
	TArray<ObjectProperty> Attributes; // 0x0
};

struct FProductTradeHoldOverride {
	int32_t ProductID; // 0x0
	TArray<EProductTradeRestriction> TradeRestrictions; // 0x8
	TArray<EProductTradeRestriction> DefaultRestrictions; // 0x18
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	ObjectProperty Sound; // 0x10
};

struct FSkillMatchPlayer {
	FUniqueNetId PlayerID; // 0x0
	float PctTimePlayed; // 0x48
	uint32_t bQuitter : 1; // 0x4c
	int32_t PartyID; // 0x50
	int32_t Score; // 0x54
	int32_t Team; // 0x58
};

struct FMcpChallengeUserRequest {
	FString UniqueUserId; // 0x0
	TArray<FMcpChallengeRequest> ChallengeStatusRequests; // 0x10
	TArray<FMcpChallengeRequest> ChallengeAcceptRequests; // 0x20
	TArray<FMcpChallengeRequest> ChallengeUpdateProgressRequests; // 0x30
	TArray<FMcpChallengeRequest> ChallengeUpdateRewardRequests; // 0x40
};

struct FWheelAttachment {
	ComponentProperty Component; // 0x0
	TArray<ObjectProperty> Behaviors; // 0x8
	FName Socket; // 0x18
	TArray<ObjectProperty> PaintableMaterials; // 0x20
};

struct FRocketPassBundleInfo {
	int32_t PurchasableID; // 0x0
	int32_t KeyCost; // 0x4
	int32_t OriginalKeyCost; // 0x8
	int32_t OriginalCurrencyCost; // 0xc
	int32_t CurrencyID; // 0x10
	int32_t CurrencyCost; // 0x14
	int32_t Tiers; // 0x18
	int32_t Savings; // 0x1c
	ObjectProperty Image; // 0x20
	FString ImageURL; // 0x28
};

struct FNxDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FOnlineXPReward {
	FName RewardName; // 0x0
	float Total; // 0x8
	int32_t Base; // 0xc
	int32_t BaseLevel; // 0x10
	int32_t Level; // 0x14
	int32_t CapAdjustment; // 0x18
	TArray<int32_t> LevelThresholds; // 0x20
	TArray<FOnlineXPModifier> RewardModifiers; // 0x30
};

struct FAnimatedMaterialParamFloat : FAnimatedMaterialParam {
	ComponentProperty Value; // 0x8
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	uint32_t bShouldBeLoaded : 1; // 0x8
	uint32_t bShouldBeVisible : 1; // 0x8
};

struct FTitleFileWeb : FTitleFile {
	FString StringData; // 0x28
	ObjectProperty HTTPRequest; // 0x38
	EMcpFileCompressionType FileCompressionType; // 0x40
};

struct FCachedTerrainMaterialArray {
	TArray<FPointer> CachedMaterials; // 0x0
};

struct FVelocityObstacleStat {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
	float Radius; // 0x18
	int32_t Priority; // 0x1c
};

struct FVector2MaterialInput : FMaterialInput {
	uint32_t UseConstant : 1; // 0x38
	float ConstantX; // 0x3c
	float ConstantY; // 0x40
};

struct FLoginDelegates {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FLocalizedSubtitle {
	FString LanguageExt; // 0x0
	TArray<FSubtitleCue> Subtitles; // 0x10
	uint32_t bMature : 1; // 0x20
	uint32_t bManualWordWrap : 1; // 0x20
	uint32_t bSingleLine : 1; // 0x20
};

struct FMcpClashMobChallengeFile {
	uint32_t should_keep_post_challenge : 1; // 0x0
	FString title_id; // 0x8
	FString file_name; // 0x18
	FString dl_name; // 0x28
	FString hash_code; // 0x38
	FString Type; // 0x48
	McpChallengeFileStatus Status; // 0x58
};

struct FPartyUpMergeError {
	FUniqueNetId PlayerID; // 0x0
	FUniqueNetId LeaderID; // 0x48
	ObjectProperty Error; // 0x90
};

struct FCarData {
	ObjectProperty Car; // 0x0
	float Dot; // 0x8
	float DistToBall; // 0xc
	float SpeedTowardsBall; // 0x10
	float TimeToBall; // 0x14
	FCarGoalData OffensiveGoal; // 0x18
	FCarGoalData DefensiveGoal; // 0x24
	FString LastEvent; // 0x30
	float BallHitProbability; // 0x40
	float Offense; // 0x44
	float Defense; // 0x48
	float Aerial; // 0x4c
	float PredictedDistToBall; // 0x50
	float TimeInAir; // 0x54
};

struct FAnimatedMaterialMesh {
	FName MeshAttachmentName; // 0x0
	ObjectProperty Material; // 0x8
	int32_t MaterialIndex; // 0x10
	TArray<FBoostMeshOverride> MeshOverrides; // 0x18
	TArray<FAnimatedMaterialParamFloat> FloatParams; // 0x28
	TArray<FAnimatedMaterialParamVector> VectorParams; // 0x38
	TArray<FAnimatedMaterialParamColor> ColorParams; // 0x48
	ComponentProperty Mesh; // 0x58
	float ElapsedTime; // 0x60
};

struct FTerrainDecorationInstance {
	ComponentProperty Component; // 0x0
	float X; // 0x8
	float Y; // 0xc
	float Scale; // 0x10
	int32_t Yaw; // 0x14
};

struct FSpecialEventStoreConfigs {
	int32_t EventID; // 0x0
	FString TabTitle; // 0x8
	ObjectProperty TabIconTexture; // 0x18
	QWordProperty StartTime; // 0x20
	QWordProperty EndTime; // 0x28
	FString TabIconImageURL; // 0x30
};

struct FPlaylistRestrictionPlayer {
	FUniqueNetId PlayerID; // 0x0
	int32_t Tier; // 0x48
};

struct FAnimatedMaterialParamVector : FAnimatedMaterialParam {
	ComponentProperty Value; // 0x8
};

struct FFXAttachment {
	FName Name; // 0x0
	FName SkeletalMeshAttachName; // 0x8
	FName SocketOrBoneName; // 0x10
	FName AttachToParameter; // 0x18
	float AttachDelay; // 0x20
	float DetachDelay; // 0x24
	float LifeTime; // 0x28
	EFXComponentTarget Target; // 0x2c
	ComponentProperty Component; // 0x30
	TArray<ObjectProperty> AttachAny; // 0x38
	TArray<ObjectProperty> DetachAny; // 0x48
	TArray<ObjectProperty> AttachAll; // 0x58
	TArray<ObjectProperty> RuntimeParameters; // 0x68
	TArray<ObjectProperty> Traits; // 0x78
	FAttachToParameterWithUnlockAxes AttachToParameterActor; // 0x88
	uint32_t bCreateDuplicates : 1; // 0x94
	uint32_t bWantsAttachment : 1; // 0x94
	uint32_t bInitializedTraits : 1; // 0x94
	uint32_t bExistingComponent : 1; // 0x94
	uint32_t bExistingAttachment : 1; // 0x94
	float AttachedTime; // 0x98
	EFXComponentState State; // 0x9c
	float WantsAttachmentChangeTime; // 0xa0
	ComponentProperty AttachedToMesh; // 0xa8
	FMatrix RelativeTransform; // 0xb0
	int32_t BoneIndex; // 0xf0
	ObjectProperty AttachToActor; // 0xf8
	FVector OffsetToAttachActor; // 0x100
};

struct FServiceErrorData {
	FName Type; // 0x0
	int32_t Count; // 0x8
};

struct FCoverReplicationInfo {
	ObjectProperty Link; // 0x0
	TArray<char> SlotsEnabled; // 0x8
	TArray<char> SlotsDisabled; // 0x18
	TArray<char> SlotsAdjusted; // 0x28
	TArray<FManualCoverTypeInfo> SlotsCoverTypeChanged; // 0x38
};

struct FAssociativeMaterialParams {
	ObjectProperty Material; // 0x0
	FMaterialParams Params; // 0x8
};

struct FReservationData {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
	FUniqueNetId PartyID; // 0x58
	EReservationStatus Status; // 0xa0
	float TimeoutTime; // 0xa4
	uint32_t bDisableCrossPlay : 1; // 0xa8
	ObjectProperty PRI; // 0xb0
	char Team; // 0xb8
	ObjectProperty ReservationMessage; // 0xc0
	TScriptInterface<Class> Connection; // 0xc8
	uint32_t bIgnoreBeaconDisconnect : 1; // 0xd8
	FSkillRating Skill; // 0xdc
	TArray<FName> MapLikes; // 0xe8
	TArray<FName> MapDislikes; // 0xf8
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	FVector2D ArriveWeight; // 0x1c
	FVector2D LeaveWeight; // 0x24
	EInterpCurveMode InterpMode; // 0x2c
};

struct FUserReportVideoSetting {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FAimTransform {
	FQuat Quaternion; // 0x0
	FVector Translation; // 0x10
};

struct FSeqOpOutputLink {
	TArray<FSeqOpOutputInputLink> Links; // 0x0
	FString LinkDesc; // 0x10
	uint32_t bHasImpulse : 1; // 0x20
	uint32_t bDisabled : 1; // 0x20
	uint32_t bDisabledPIE : 1; // 0x20
	ObjectProperty LinkedOp; // 0x28
	float ActivateDelay; // 0x30
	int32_t DrawY; // 0x34
	uint32_t bHidden : 1; // 0x38
	uint32_t bMoving : 1; // 0x38
	uint32_t bClampedMax : 1; // 0x38
	uint32_t bClampedMin : 1; // 0x38
	int32_t OverrideDelta; // 0x3c
	float PIEActivationTime; // 0x40
	uint32_t bIsActivated : 1; // 0x44
};

struct FFunctionExpressionOutput {
	ObjectProperty ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FCheckReplacementDedicatedServerData {
	QWordProperty ServerId; // 0x0
	FString IP; // 0x8
	FString Host; // 0x18
	int32_t Port; // 0x28
};

struct FMapGroup {
	TArray<ObjectProperty> Maps; // 0x0
};

struct FCrowdExcitementSounds {
	FName Name; // 0x0
	float Cooldown; // 0x8
	TArray<FCrowdExcitementSound> Sounds; // 0x10
	ECrowdValueType CompareType; // 0x20
	float LastPlayed; // 0x24
};

struct FInviteTarget {
	FUniqueNetId ToPlayer; // 0x0
	DelegateProperty InviteHandler; // 0x48
};

struct FSanitizeCallbackData {
	int32_t Id; // 0x0
	DelegateProperty Callback; // 0x8
	FString Comment; // 0x20
};

struct FRenderingPerformanceOverrides {
	uint32_t bAllowAmbientOcclusion : 1; // 0x0
	uint32_t bAllowDominantWholeSceneDynamicShadows : 1; // 0x0
	uint32_t bAllowMotionBlurSkinning : 1; // 0x0
	uint32_t bAllowTemporalAA : 1; // 0x0
	uint32_t bAllowLightShafts : 1; // 0x0
};

struct FUntypedBulkData_Mirror {
	FPointer VfTable; // 0x0
	int32_t BulkDataFlags; // 0x8
	int32_t ElementCount; // 0xc
	QWordProperty BulkDataOffsetInFile; // 0x10
	int32_t BulkDataSizeOnDisk; // 0x18
	int32_t SavedBulkDataFlags; // 0x1c
	int32_t SavedElementCount; // 0x20
	QWordProperty SavedBulkDataOffsetInFile; // 0x28
	int32_t SavedBulkDataSizeOnDisk; // 0x30
	FPointer BulkData; // 0x38
	int32_t LockStatus; // 0x40
	FPointer AttachedAr; // 0x48
	int32_t bShouldFreeOnEmpty; // 0x50
};

struct FClientLoadoutDatas {
	FClientLoadoutData Loadouts[0x2]; // 0x0
};

struct FNetworkSyncSettingsData {
	float LocationFixRate; // 0x0
	float AngularFixRate; // 0x4
	float MinDeltaLocation; // 0x8
	float WeldedLerpRate; // 0xc
	int32_t MinDeltaRotation; // 0x10
	float MinDeltaLinearVelocity; // 0x14
	float ForceReplicationDelay; // 0x18
	uint32_t bDebug : 1; // 0x1c
};

struct FCarSplineData {
	ObjectProperty Car; // 0x0
	ObjectProperty Spline; // 0x8
	float DistanceAlongSpline; // 0x10
	uint32_t bReachedSpline : 1; // 0x14
};

struct FCrowdDefenseSettings {
	float DefenseZoneTime; // 0x0
	float DefenseZoneDistance; // 0x4
	ObjectProperty Sound; // 0x8
	float ReplayDelay; // 0x10
};

struct FFXAttachmentSoundOverride {
	FName FXName; // 0x0
	ObjectProperty SoundCue; // 0x8
};

struct FFavoritedFileMetaData {
	FString Code; // 0x0
	QWordProperty UpdatedAt; // 0x10
	FString Filename; // 0x18
};

struct FGFXNotificationInfo {
	int32_t NotificationID; // 0x0
	FString TableName; // 0x8
	ObjectProperty Notification; // 0x18
};

struct FStatValue {
	FName Id; // 0x0
	int32_t Values[0x3]; // 0x8
};

struct FInterfacePropertyInjection {
	ObjectProperty Subscriber; // 0x0
	ObjectProperty Property; // 0x8
};

struct FOnlineProfile {
	FString UserId; // 0x0
	EOnlineAccountTier AccountTier; // 0x10
	int32_t Gamerscore; // 0x14
	FString ApplicationDisplayName; // 0x18
	FString GameDisplayName; // 0x28
	FString DisplayPictureURL; // 0x38
	FString ApplicationDisplayPictureResizeURL; // 0x48
	FString PublicGamerPictureURL; // 0x58
	FString GameDisplayPictureResizeURL; // 0x68
};

struct FPrimitiveMaterialRef {
	ComponentProperty Primitive; // 0x0
	int32_t MaterialIndex; // 0x8
};

struct FCpuMetrics {
	FString Type; // 0x0
	FString Desc; // 0x10
	FString Cores; // 0x20
	FString Threads; // 0x30
};

struct FOnlinePlayerStorageSyncRequest {
	ObjectProperty DataObj; // 0x0
	int32_t ClientTick; // 0x8
	EObjectEncoding Encoding; // 0xc
};

struct FTrainingPackProgress {
	FString PackCode; // 0x0
	TArray<FTrainingRoundProgress> Progress; // 0x10
};

struct FReplayImportTask : FReplayIOTaskBase {
	TArray<char> Data; // 0x28
};

struct FProfileCameraSettings {
	float FOV; // 0x0
	float Height; // 0x4
	float Pitch; // 0x8
	float Distance; // 0xc
	float Stiffness; // 0x10
	float SwivelSpeed; // 0x14
	float TransitionSpeed; // 0x18
};

struct FSocialPostImageFlags {
	uint32_t bIsUserGeneratedImage : 1; // 0x0
	uint32_t bIsGameGeneratedImage : 1; // 0x0
	uint32_t bIsAchievementImage : 1; // 0x0
	uint32_t bIsMediaImage : 1; // 0x0
};

struct FAchievementMediaAsset {
	FString AssetName; // 0x0
	EAchievementMediaAssetType AssetType; // 0x10
	FString AssetURL; // 0x18
};

struct FListener {
	ObjectProperty PortalVolume; // 0x0
	FVector Location; // 0x8
	FVector Up; // 0x14
	FVector Right; // 0x20
	FVector Front; // 0x2c
	FVector Velocity; // 0x38
};

struct FPressedAxis {
	FName Key; // 0x0
	EAxisSign AxisSign; // 0x8
	float PressTime; // 0xc
};

struct FVectorParamPair {
	FName Key; // 0x0
	FVector Value; // 0x8
};

struct FRBSplitInfo {
	uint32_t bFixSize : 1; // 0x0
	float FixedSize; // 0x4
	float ExpandRatio; // 0x8
	FName SplitName; // 0xc
};

struct FKBoxElem {
	FMatrix TM; // 0x0
	float X; // 0x40
	float Y; // 0x44
	float Z; // 0x48
	uint32_t bNoRBCollision : 1; // 0x4c
	uint32_t bPerPolyShape : 1; // 0x4c
};

struct FAutomatedTestingDatum {
	int32_t NumberOfMatchesPlayed; // 0x0
	int32_t NumMapListCyclesDone; // 0x4
};

struct FPsyNetBeaconPlayerReservation {
	FUniqueNetId PlayerID; // 0x0
	ObjectProperty Keys; // 0x48
	FString DSConnectToken; // 0x50
};

struct FDecodeImageTask {
	FString RequestURL; // 0x0
	EImageType ImageType; // 0x10
	TArray<char> ImageData; // 0x18
	FImageLayout Result; // 0x28
};

struct FIgnoredGoalRotations {
	uint32_t bIgnorePitch : 1; // 0x0
	uint32_t bIgnoreYaw : 1; // 0x0
	uint32_t bIgnoreRoll : 1; // 0x0
};

struct FContactInformation {
	FVector ContactLocation; // 0x0
	FVector ContactVelocity; // 0xc
	float ContactTime; // 0x18
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

struct FLobbySortFilter {
	FString Key; // 0x0
	int32_t TargetValue; // 0x10
};

struct FMcpInventoryItemAttribute {
	FString AttributeId; // 0x0
	int32_t Value; // 0x10
};

struct FInviteDatabind {
	FUniqueLobbyId LobbyId; // 0x0
	FUniqueNetId FromUser; // 0x10
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FGFxDataStoreColumn {
	ASType Type; // 0x0
	FName Name; // 0x4
};

struct FLocalizedQuickChat {
	FString MessageId; // 0x0
	FString Message; // 0x10
	EQuickChatState QuickChatState; // 0x20
};

struct FCachedDownloadedFile {
	FString Filename; // 0x0
	FString Code; // 0x10
};

struct FTextureLinkedListMirror {
	FPointer Element; // 0x0
	FPointer Next; // 0x8
	FPointer PrevLink; // 0x10
};

struct FIndirectArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FOnlineShopAttribute {
	FName Key; // 0x0
	FString Value; // 0x8
};

struct FVanityProductData {
	FUniqueNetId PlayerID; // 0x0
	TArray<int32_t> VanityTypes; // 0x48
	TArray<ObjectProperty> VanityProducts; // 0x58
};

struct FBonePair {
	FName Bones[0x2]; // 0x0
};

struct FPendingReservation {
	TScriptInterface<Class> Connection; // 0x0
	ObjectProperty Message; // 0x10
};

struct FFilterProductSlot {
	FName SlotName; // 0x0
	FString Label; // 0x8
	FString PluralLabel; // 0x18
	ObjectProperty Icon; // 0x28
	uint32_t bSelected : 1; // 0x30
	uint32_t bHasNewItems : 1; // 0x30
	int32_t SlotIndex; // 0x34
	int32_t PreviewQuantity; // 0x38
	uint32_t bHidden : 1; // 0x3c
};

struct FBinaryInput {
	int32_t ChangeCount; // 0x0
	uint32_t bLastInput : 1; // 0x4
};

struct FPsyNetPersonaData {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
	FString PresenceInfo; // 0x58
	FString PresenceState; // 0x68
	FPsyTag PsyTag; // 0x78
};

struct FRBCornerAngleInfo {
	float Angle; // 0x0
	float CornerSize; // 0x4
};

struct FUniqueNetId {
	QWordProperty Uid; // 0x0
	FSceNpId NpId; // 0x8
	FString EpicAccountId; // 0x30
	OnlinePlatform Platform; // 0x40
	char SplitscreenID; // 0x41
};

struct FWordFilterResult {
	EWordFilterCensorship Censorship; // 0x0
	FString Original; // 0x8
	FString Sanitized; // 0x18
	FString ErrorMessage; // 0x28
};

struct FInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FSubtitleCue {
	FString Text; // 0x0
	float Time; // 0x10
};

struct FNotificationInfo {
	uint32_t bIsLocal : 1; // 0x0
	FString MessageBody; // 0x8
	int32_t BadgeNumber; // 0x18
	TArray<FNotificationMessageInfo> MessageInfo; // 0x20
};

struct FCrumbTrailData {
	FName CrumbTrailId; // 0x0
	TArray<FName> CrumbNames; // 0x8
	TArray<ObjectProperty> ActivationTriggers; // 0x18
	TArray<ObjectProperty> CompletionOverride; // 0x28
	uint32_t bCompleteOnlyWhenActive : 1; // 0x38
	uint32_t bRepeatable : 1; // 0x38
	uint32_t bManualStart : 1; // 0x38
	ObjectProperty ActivationCondition; // 0x40
	ObjectProperty CompletionCondition; // 0x48
};

struct FRegionSecret {
	FString Region; // 0x0
	FString Secret; // 0x10
};

struct FPlaylistMapPrefs : FMapPrefs {
	FName Playlist; // 0x20
	uint32_t bOverrideGlobal : 1; // 0x28
};

struct FRenderProfile {
	float GameThreadTime; // 0x0
	float RenderThreadTime; // 0x4
	float GPUTime; // 0x8
	float FrameTime; // 0xc
	float FPS; // 0x10
	float AccumGameThreadTime; // 0x14
	float AccumRenderThreadTime; // 0x18
	float AccumGPUTime; // 0x1c
	float AccumFrameTime; // 0x20
	int32_t NumSamples; // 0x24
};

struct FInheritedObjects {
	ObjectProperty Asset; // 0x0
	ObjectProperty ObjectToEdit; // 0x8
	ObjectProperty InheritSetting; // 0x10
};

struct FCylinder {
	float Radius; // 0x0
	float Height; // 0x4
};

struct FLightMapRef {
	FPointer Reference; // 0x0
};

struct FTerrainPatchBounds {
	float MinHeight; // 0x0
	float MaxHeight; // 0x4
	float MaxDisplacement; // 0x8
};

struct FMaterialTextureParam {
	FName Name; // 0x0
	ObjectProperty Value; // 0x8
};

struct FGizmoSelectData {
	float Ratio; // 0x0
	float HeightData; // 0x4
	TMap<None, None> WeightDataMap; // 0x8
};

struct FPlayerResponseLine {
	int32_t PlayerNum; // 0x0
	int32_t PlayerID; // 0x4
	FString PlayerName; // 0x8
	int32_t Ping; // 0x18
	int32_t Score; // 0x1c
	int32_t StatsID; // 0x20
	TArray<FKeyValuePair> PlayerInfo; // 0x28
};

struct FCanvasUVTri {
	FVector2D V0_Pos; // 0x0
	FVector2D V0_UV; // 0x8
	FVector2D V1_Pos; // 0x10
	FVector2D V1_UV; // 0x18
	FVector2D V2_Pos; // 0x20
	FVector2D V2_UV; // 0x28
};

struct FActiveChatTab {
	EChatChannel Channel; // 0x0
	FUniqueNetId PersonaId; // 0x8
};

struct FWeightmapLayerAllocationInfo {
	FName LayerName; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FCoverSlot {
	ObjectProperty SlotOwner; // 0x0
	float SlotValidAfterTime; // 0x8
	ECoverType ForceCoverType; // 0xc
	ECoverType CoverType; // 0xd
	ECoverLocationDescription LocationDescription; // 0xe
	FVector LocationOffset; // 0x10
	FRotator RotationOffset; // 0x1c
	TArray<ECoverAction> Actions; // 0x28
	TArray<FFireLink> FireLinks; // 0x38
	TArray<FFireLink> RejectedFireLinks; // 0x48
	TArray<int32_t> ExposedCoverPackedProperties; // 0x58
	int32_t TurnTargetPackedProperties; // 0x68
	TArray<FSlotMoveRef> SlipRefs; // 0x70
	TArray<FCoverInfo> OverlapClaimsList; // 0x80
	uint32_t bLeanLeft : 1; // 0x90
	uint32_t bLeanRight : 1; // 0x90
	uint32_t bForceCanPopUp : 1; // 0x90
	uint32_t bCanPopUp : 1; // 0x90
	uint32_t bCanMantle : 1; // 0x90
	uint32_t bCanClimbUp : 1; // 0x90
	uint32_t bForceCanCoverSlip_Left : 1; // 0x90
	uint32_t bForceCanCoverSlip_Right : 1; // 0x90
	uint32_t bCanCoverSlip_Left : 1; // 0x90
	uint32_t bCanCoverSlip_Right : 1; // 0x90
	uint32_t bCanSwatTurn_Left : 1; // 0x90
	uint32_t bCanSwatTurn_Right : 1; // 0x90
	uint32_t bEnabled : 1; // 0x90
	uint32_t bAllowPopup : 1; // 0x90
	uint32_t bAllowMantle : 1; // 0x90
	uint32_t bAllowCoverSlip : 1; // 0x90
	uint32_t bAllowClimbUp : 1; // 0x90
	uint32_t bAllowSwatTurn : 1; // 0x90
	uint32_t bForceNoGroundAdjust : 1; // 0x90
	uint32_t bPlayerOnly : 1; // 0x90
	uint32_t bPreferLeanOverPopup : 1; // 0x90
	uint32_t bDestructible : 1; // 0x90
	uint32_t bSelected : 1; // 0x90
	uint32_t bFailedToFindSurface : 1; // 0x90
};

struct FKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FRBEdgeAngleInfo {
	float Angle; // 0x0
};

struct FFPSBucketMetrics {
	int32_t FPS; // 0x0
	int32_t FrameCount; // 0x4
};

struct FSeqVarLink {
	FNone* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedVariables; // 0x8
	FString LinkDesc; // 0x18
	FName LinkVar; // 0x28
	FName PropertyName; // 0x30
	uint32_t bWriteable : 1; // 0x38
	uint32_t bSequenceNeverReadsOnlyWritesToThisVar : 1; // 0x38
	uint32_t bModifiesLinkedObject : 1; // 0x38
	uint32_t bHidden : 1; // 0x38
	int32_t MinVars; // 0x3c
	int32_t MaxVars; // 0x40
	int32_t DrawX; // 0x44
	ObjectProperty CachedProperty; // 0x48
	uint32_t bAllowAnyType : 1; // 0x50
	uint32_t bMoving : 1; // 0x50
	uint32_t bClampedMax : 1; // 0x50
	uint32_t bClampedMin : 1; // 0x50
	int32_t OverrideDelta; // 0x54
};

struct FGFxWidgetBinding {
	FName WidgetName; // 0x0
	FNone* WidgetClass; // 0x8
};

struct FCoverReference : FActorReference {
	int32_t SlotIdx; // 0x18
};

struct FMusicAnalysisInfo {
	float LowEnergy; // 0x0
	TArray<float> Frequencies; // 0x8
	float HighEnergy; // 0x18
};

struct FCurrencyProductData {
	ObjectProperty Product; // 0x0
	ObjectProperty OnlineProduct; // 0x8
};

struct FGFxLogoData {
	FName AssetName; // 0x0
	ObjectProperty Logo; // 0x8
	int32_t TeamColor; // 0x10
	int32_t CustomColor; // 0x14
	FString DefaultTeamName; // 0x18
	uint32_t bIsBotTeam : 1; // 0x28
};

struct FPlaneSelectData {
	float YExtent; // 0x0
	float ZExtent; // 0x4
	float MaxDegreeAngle; // 0x8
	float MaxDistance; // 0xc
};

struct FPPPersistentEffectDefaults {
	FName EffectName; // 0x0
	FName MaterialEffectName; // 0x8
	FName MaterialParamName; // 0x10
	float DefaultValue; // 0x18
};

struct FPlayerAggregateStats {
	ObjectProperty PRI; // 0x0
	FUniqueNetId PlayerID; // 0x8
	FAggregateInput Throttle; // 0x50
	FAggregateInput Jump; // 0x60
	FAggregateInput Handbrake; // 0x70
	FAggregateInput Boost; // 0x80
	FAggregateInput AirRoll; // 0x90
	FAggregateInput CameraRotate; // 0xa0
	FBinaryInput CameraMode; // 0xb0
	int32_t BallTouches; // 0xb8
	int32_t Clears; // 0xbc
	int32_t AerialHits; // 0xc0
	int32_t JuggleHits; // 0xc4
	int32_t BicycleHits; // 0xc8
	int32_t BoostPickupPills; // 0xcc
	int32_t BoostPickupPads; // 0xd0
	int32_t AveDistSamples; // 0xd4
	float AveDistanceToBall; // 0xd8
	float TimeDrivingTowardsBall; // 0xdc
	float AveSpeed; // 0xe0
	int32_t AveSpeedSampleCount; // 0xe4
	float TotalIdleSeconds; // 0xe8
	float TotalTime; // 0xec
};

struct FParticleEventData {
	int32_t Type; // 0x0
	FName EventName; // 0x4
	float EmitterTime; // 0xc
	FVector Location; // 0x10
	FVector Direction; // 0x1c
	FVector Velocity; // 0x28
};

struct FFriendsQuery {
	FUniqueNetId UniqueId; // 0x0
	uint32_t bIsFriend : 1; // 0x48
};

struct FLightingChannelContainer {
	uint32_t bInitialized : 1; // 0x0
	uint32_t BSP : 1; // 0x0
	uint32_t Static : 1; // 0x0
	uint32_t Dynamic : 1; // 0x0
	uint32_t CompositeDynamic : 1; // 0x0
	uint32_t Skybox : 1; // 0x0
	uint32_t Unnamed_2 : 1; // 0x0
	uint32_t Unnamed_3 : 1; // 0x0
	uint32_t Unnamed_4 : 1; // 0x0
	uint32_t Unnamed_5 : 1; // 0x0
	uint32_t Unnamed_6 : 1; // 0x0
	uint32_t Unnamed_7 : 1; // 0x0
	uint32_t Cinematic_2 : 1; // 0x0
	uint32_t Cinematic_3 : 1; // 0x0
	uint32_t Cinematic_4 : 1; // 0x0
	uint32_t Cinematic_5 : 1; // 0x0
	uint32_t Cinematic_6 : 1; // 0x0
	uint32_t Cinematic_7 : 1; // 0x0
	uint32_t Cinematic_8 : 1; // 0x0
	uint32_t Cinematic_9 : 1; // 0x0
	uint32_t Cinematic_10 : 1; // 0x0
	uint32_t Cinematic_11 : 1; // 0x0
	uint32_t Gameplay_2 : 1; // 0x0
	uint32_t Gameplay_3 : 1; // 0x0
	uint32_t Gameplay_4 : 1; // 0x0
	uint32_t Gameplay_5 : 1; // 0x0
	uint32_t Crowd : 1; // 0x0
};

struct FPremiumSkinSetItem {
	ObjectProperty PremiumSkin; // 0x0
};

struct FCodeTimePair {
	FString Code; // 0x0
	QWordProperty UpdatedAt; // 0x10
};

struct FTrainingModeDifficulty {
	EDifficulty Difficulty; // 0x0
};

struct FBugReportUploadTask {
	FFileUploadData Data; // 0x0
	FBugReportSystemData SystemData; // 0x40
	ObjectProperty HTTPRequest; // 0x78
	FString TaskName; // 0x80
	FString Error; // 0x90
};

struct FActiveMorph {
	ObjectProperty Target; // 0x0
	float Weight; // 0x8
};

struct FDebugDisplayProperty {
	ObjectProperty Obj; // 0x0
	FName PropertyName; // 0x8
	uint32_t bSpecialProperty : 1; // 0x10
};

struct FAudioMinMax {
	float Min; // 0x0
	float RandRange; // 0x4
};

struct FPBVariationInfo {
	FName VariationName; // 0x0
	uint32_t bMeshOnTopOfFacePoly : 1; // 0x8
};

struct FInstancedStaticMeshMappingInfo {
	FPointer Mapping; // 0x0
	FPointer LightMap; // 0x8
	ObjectProperty LightmapTexture; // 0x10
	ObjectProperty ShadowmapTexture; // 0x18
};

struct FSplineConnection {
	ComponentProperty SplineComponent; // 0x0
	ObjectProperty ConnectTo; // 0x8
};

struct FSteamDLCInfo {
	QWordProperty AppID; // 0x0
	FName Value; // 0x8
};

struct FCustomMatchSettings {
	FString GameTags; // 0x0
	FName MapName; // 0x10
	char GameMode; // 0x18
	int32_t MaxPlayerCount; // 0x1c
	FString ServerName; // 0x20
	FString Password; // 0x30
	uint32_t bPublic : 1; // 0x40
	FCustomMatchTeamSettings TeamSettings[0x2]; // 0x48
	uint32_t bClubServer : 1; // 0x88
};

struct FRPCError {
	FString Type; // 0x0
	FString Message; // 0x10
};

struct FPreviewSocketStruct {
	FName DisplayName; // 0x0
	FName SocketName; // 0x8
	ObjectProperty PreviewSkelMesh; // 0x10
	ObjectProperty PreviewStaticMesh; // 0x18
};

struct FDebugColor {
	FLinearColor Color; // 0x0
	uint32_t bPreview : 1; // 0x10
};

struct FCurveKey {
	FName CurveName; // 0x0
	float Weight; // 0x8
};

struct FMcpClashMobChallengeUserStatus {
	FString unique_challenge_id; // 0x0
	FString unique_user_id; // 0x10
	int32_t num_attempts; // 0x20
	int32_t num_successful_attempts; // 0x24
	int32_t goal_progress; // 0x28
	uint32_t did_complete : 1; // 0x2c
	FString last_update_time; // 0x30
	int32_t user_award_given; // 0x40
	FString accept_time; // 0x48
	uint32_t did_preregister : 1; // 0x58
	FString facebook_like_time; // 0x60
	uint32_t enrolled_via_facebook : 1; // 0x70
	uint32_t liked_via_facebook : 1; // 0x70
	uint32_t commented_via_facebook : 1; // 0x70
	FString twitter_retweet_time; // 0x78
	uint32_t enrolled_via_twitter : 1; // 0x88
	uint32_t retweeted : 1; // 0x88
};

struct FFieldSpawnInfo {
	FVector ExtentLoc; // 0x0
	FVector Extent; // 0xc
	float Speed; // 0x18
	FRotator Rotation; // 0x1c
	ERotationType RotationType; // 0x28
	FVector MaxFieldExtentScale; // 0x2c
	uint32_t bSpawnCannon : 1; // 0x38
	uint32_t bDrawDebug : 1; // 0x38
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FTitleInfo {
	FName Title; // 0x0
	int32_t TitleCap; // 0x8
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
};

struct FPBMaterialParam {
	FName ParamName; // 0x0
	FLinearColor Color; // 0x8
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float TimeStamp; // 0xc
};

struct FUIProductSlotData {
	ObjectProperty Slot; // 0x0
	ObjectProperty Texture; // 0x8
	ObjectProperty Sound; // 0x10
};

struct FChatPresetMessage {
	int32_t GroupIndex; // 0x0
	FName Id; // 0x4
	uint32_t bTeam : 1; // 0xc
	FString Label; // 0x10
};

struct FGFxDirtyRow {
	int32_t RowNum; // 0x0
	TArray<FName> DirtyValues; // 0x8
};

struct FLocalizedBindingCategory {
	FName Category; // 0x0
	FString Label; // 0x8
	FString Description; // 0x18
};

struct FTourPlayer {
	FUniqueNetId PlayerID; // 0x0
	FString PlayerName; // 0x48
	ObjectProperty Avatar; // 0x58
};

struct FPartyJoinMatchSettings {
	FString ServerName; // 0x0
	FString BeaconAddress; // 0x10
	int32_t PlaylistId; // 0x20
	uint32_t bFriendJoin : 1; // 0x24
	FString CustomPassword; // 0x28
	FString ReservationID; // 0x38
	FString JoinName; // 0x48
	FString JoinPassword; // 0x58
};

struct FDebugHelpItem {
	FString Key; // 0x0
	FString Command; // 0x10
	FString Description; // 0x20
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	FLinearColor ArriveWeight; // 0x34
	FLinearColor LeaveWeight; // 0x44
	EInterpCurveMode InterpMode; // 0x54
};

struct FTourStatus {
	QWordProperty Id; // 0x0
	ETourStatus Status; // 0x8
	QWordProperty PlayerTeamID; // 0x10
	FString TeamName; // 0x18
};

struct FGFxLoadoutSet {
	FString Name; // 0x0
	int32_t Index; // 0x10
	uint32_t bEquipped : 1; // 0x14
};

struct FPlayerPermissions {
	EChatPermissionLevel TextChat; // 0x0
	EChatPermissionLevel VoiceChat; // 0x1
};

struct FAsyncDelegateInfo {
	int32_t CallbackId; // 0x0
	DelegateProperty AsyncDelegate; // 0x8
};

struct FMTXPurchaseInfo {
	int32_t CatalogID; // 0x0
	FString Title; // 0x8
	FString Description; // 0x18
	FString TabTitle; // 0x28
	ObjectProperty Image; // 0x38
	FString PurchasePrice; // 0x40
	FString OriginalPrice; // 0x50
	int32_t DiscountPercentage; // 0x60
	FString ProductHashIDs; // 0x68
	FString BundleCurrencies; // 0x78
	uint32_t bCanBePlayerTraded : 1; // 0x88
	uint32_t bIsOwned : 1; // 0x88
	FString ImageURL; // 0x90
};

struct FGFxCustomTeamSettings {
	FString Name; // 0x0
	int32_t TeamColorID; // 0x10
	int32_t CustomColorID; // 0x14
};

struct FPS4DLCInfo {
	FString Key; // 0x0
	FName Value; // 0x10
};

struct FGamepadDeadzoneSettings {
	EInputPlatformType Type; // 0x0
	FName Key; // 0x4
	float Deadzone; // 0xc
};

struct FGarageComplexLoadout {
	FLoadoutTeamPaint TeamPaint; // 0x0
	TArray<FProductInstanceID> OnlineProducts; // 0x10
};

struct FCurrencyProduct {
	FProductHashID HashID; // 0x0
	int32_t CurrencyID; // 0x4
	int32_t Quantity; // 0x8
};

struct FSkillMatchPartyRating : FTierSkillRating {
	int32_t PartyID; // 0x20
};

struct FArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FBuildingMeshInfo {
	ObjectProperty Mesh; // 0x0
	float DimX; // 0x8
	float DimZ; // 0xc
	float Chance; // 0x10
	ComponentProperty Translation; // 0x18
	ComponentProperty Rotation; // 0x20
	uint32_t bMeshScaleTranslation : 1; // 0x28
	uint32_t bOverrideMeshLightMapRes : 1; // 0x28
	int32_t OverriddenMeshLightMapRes; // 0x2c
	TArray<ObjectProperty> MaterialOverrides; // 0x30
	TArray<FBuildingMatOverrides> SectionOverrides; // 0x40
};

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float LightSourceRadius; // 0xc
};

struct FPhysEffectInfo {
	float Threshold; // 0x0
	float ReFireDelay; // 0x4
	ObjectProperty Effect; // 0x8
	ObjectProperty Sound; // 0x10
};

struct FNotifyTrackKey {
	float Time; // 0x0
	ObjectProperty Notify; // 0x8
};

struct FAuthCodeRequest {
	FUniqueNetId PlayerID; // 0x0
	DelegateProperty Callback; // 0x48
	int32_t RequestID; // 0x60
};

struct FPlayerSkillRating : FPlaylistSkillRating {
	FUniqueNetId PlayerID; // 0x28
};

struct FPlaylistSkillRating : FTierSkillRating {
	int32_t Playlist; // 0x20
};

struct FLoadoutProductData {
	int32_t SlotIndex; // 0x0
	int32_t ProductID; // 0x4
	FProductInstanceID InstanceID; // 0x8
	TArray<ObjectProperty> Attributes; // 0x18
};

struct FSelectedTerrainVertex {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Weight; // 0x8
};

struct FSkillTierData {
	char Tier; // 0x0
	char PlacementMatchesPlayed; // 0x1
	uint32_t bReplicated : 1; // 0x4
};

struct FTimeOfImpactData {
	float Fraction; // 0x0
	FVector Location; // 0x4
	FRotator Rotation; // 0x10
	FVector OtherLocation; // 0x1c
	FRotator OtherRotation; // 0x28
	FVector ImpactLocation; // 0x34
	FVector ImpactNormal; // 0x40
};

struct FSchematicResourceData {
	FProductInstanceID InstanceID; // 0x0
	int32_t Resources; // 0x10
};

struct FShopData {
	int32_t Id; // 0x0
	FString Name; // 0x8
	FString Title; // 0x18
	FString Type; // 0x28
	QWordProperty StartDate; // 0x38
	QWordProperty EndDate; // 0x40
	FString LogoURL; // 0x48
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
	FString CurrencyType; // 0x40
};

struct FPendingChannelService {
	ObjectProperty Service; // 0x0
	int32_t MessageId; // 0x8
	ObjectProperty Task; // 0x10
	float ReceiveTime; // 0x18
};

struct FProductStat {
	int32_t ProductID; // 0x0
	int32_t Value; // 0x4
};

struct FDownloadedWorkshopData {
	QWordProperty ItemID; // 0x0
	FString Title; // 0x8
	FString AuthorName; // 0x18
	FUniqueNetId AuthorNetID; // 0x28
	ObjectProperty Preview; // 0x70
	ObjectProperty Avatar; // 0x78
	FString Description; // 0x80
	FString PreviewURL; // 0x90
	FString ItemPath; // 0xa0
	FString Filename; // 0xb0
	FString FullPath; // 0xc0
};

struct FTourReward {
	TArray<FOnlineProductData> Rewards; // 0x0
	int32_t Placement; // 0x10
};

