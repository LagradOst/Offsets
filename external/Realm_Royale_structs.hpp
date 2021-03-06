// Created by BlueFire1337
// Updated 2021-11-28
// Generated 2022-02-02

#pragma once

struct FEdgePointer {
	FPointer Dummy; // 0x0
};

struct FMarketplaceInventoryItem {
	FString ProductID; // 0x0
	EMediaItemType MediaItemType; // 0x10
	EInventoryItemState ItemState; // 0x11
	int32_t ConsumableBalance; // 0x14
	int32_t TitleId; // 0x18
	TArray<FString> ContainerIds; // 0x1c
	FQWord StartDate; // 0x2c
	FQWord EndDate; // 0x34
	FQWord RightsObtainedDate; // 0x3c
	FString URL; // 0x44
	FString ConsumableUrl; // 0x54
};

struct FBasedPosition {
	ObjectProperty Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FEmsFile {
	FString Hash; // 0x0
	FString DLName; // 0x10
	FString Filename; // 0x20
	int32_t FileSize; // 0x30
};

struct FServerResponseLine {
	int32_t ServerID; // 0x0
	FString IP; // 0x4
	int32_t Port; // 0x14
	int32_t QueryPort; // 0x18
	FString ServerName; // 0x1c
	FString MapName; // 0x2c
	FString GameType; // 0x3c
	int32_t CurrentPlayers; // 0x4c
	int32_t MaxPlayers; // 0x50
	int32_t Ping; // 0x54
	TArray<FKeyValuePair> ServerInfo; // 0x58
	TArray<FPlayerResponseLine> PlayerInfo; // 0x68
};

struct FCachedTerrainMaterialArray {
	TArray<FPointer> CachedMaterials; // 0x0
};

struct FMaterialStackInstance {
	int32_t nId; // 0x0
	int32_t nPriority; // 0x4
	TArray<ObjectProperty> MICs; // 0x8
};

struct FMcpInventorySaveSlot {
	FString OwningMcpId; // 0x0
	FString SaveSlotId; // 0x10
	TArray<FMcpInventoryItem> Items; // 0x20
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

struct FChildBoneBlendInfo {
	TArray<float> TargetPerBoneWeight; // 0x0
	FName InitTargetStartBone; // 0x10
	float InitPerBoneIncrease; // 0x18
	FName OldStartBone; // 0x1c
	float OldBoneIncrease; // 0x24
	TArray<char> TargetRequiredBones; // 0x28
};

struct FDeferredLeaderboardWrite {
	FString LeaderboardName; // 0x0
	int32_t Score; // 0x10
	TArray<int32_t> LeaderboardData; // 0x14
};

struct FNxDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	float ImpactDamage; // 0x8
	float ImpactResistance; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FPhysXVerticalProperties {
	FPhysXEmitterVerticalProperties Emitters; // 0x0
};

struct FFootstepSoundInfo {
	FName MaterialType; // 0x0
	ObjectProperty Sound; // 0x8
};

struct FUIGroupObject {
	int32_t nLocX; // 0x0
	int32_t nLocY; // 0x4
	int32_t nWidth; // 0x8
	int32_t nHeight; // 0xc
	ObjectProperty pGroup; // 0x10
	ObjectProperty pObj; // 0x18
	ObjectProperty pCursorHoverObj; // 0x20
};

struct FChildBlendParam {
	int32_t FromChild; // 0x0
	int32_t ToChild; // 0x4
	float BlendTime; // 0x8
	float MaxBlendTime; // 0xc
};

struct FKCachedConvexDataElement {
	TArray<char> ConvexElementData; // 0x0
};

struct FPComPerformanceCaptureStatsPerNode {
	ObjectProperty Node; // 0x0
	TArray<FPComPerformanceCaptureStat> Stats; // 0x8
};

struct FSwitchRange {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FPrimitiveMaterialRef {
	ComponentProperty Primitive; // 0x0
	int32_t MaterialIndex; // 0x8
};

struct FViewParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror EmitterInstanceMBInfoMap; // 0x0
};

struct FPlayerMember {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FNavigationQueueEntry {
	ObjectProperty TargetPawn; // 0x0
	ObjectProperty TargetActor; // 0x8
	FVector TargetLocation; // 0x10
	char bNewEntry : 1; // 0x1c
	char bCanCacheLOS : 1; // 0x1c
	char bCachedLOS : 1; // 0x1c
	char bLookAtTarget : 1; // 0x1c
	char bMustHaveLOS : 1; // 0x1c
	char bStopNavOnReachedDestination : 1; // 0x1c
	float DistanceTolerance; // 0x20
	int32_t NodeToken; // 0x24
	int32_t TeleportIndex; // 0x28
};

struct FGameSessionInformation {
	int32_t AppTitleID; // 0x0
	int32_t PlatformType; // 0x4
	FString Language; // 0x8
	FString GameplaySessionTimestamp; // 0x18
	float GameplaySessionStartTime; // 0x28
	float GameplaySessionEndTime; // 0x2c
	char bGameplaySessionInProgress : 1; // 0x30
	FString GameplaySessionID; // 0x34
	FString GameClassName; // 0x44
	FString MapName; // 0x54
	FString MapURL; // 0x64
	int32_t SessionInstance; // 0x74
	int32_t GameTypeId; // 0x78
	FUniqueNetId OwningNetId; // 0x7c
	int32_t PlaylistId; // 0x84
};

struct FPreviewSocketStruct {
	FName DisplayName; // 0x0
	FName SocketName; // 0x8
	ObjectProperty PreviewSkelMesh; // 0x10
	ObjectProperty PreviewStaticMesh; // 0x18
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x4
	TArray<FPointer> ChildNodes; // 0x14
};

struct FJointConstraintInformation {
	float AngleConstraint; // 0x0
	float StretchConstraint; // 0x4
};

struct FSeqEventLink {
	USequenceEvent* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedEvents; // 0x8
	FString LinkDesc; // 0x18
	int32_t DrawX; // 0x28
	char bHidden : 1; // 0x2c
	char bMoving : 1; // 0x2c
	char bClampedMax : 1; // 0x2c
	char bClampedMin : 1; // 0x2c
};

struct FRoyaleStart {
	int32_t nPlayer; // 0x0
	char eTeamNum; // 0x4
	ObjectProperty pStart; // 0x8
};

struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x0
	char bShadowIndirectOnly : 1; // 0x0
	char bUseEmissiveForStaticLighting : 1; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float SpecularBoost; // 0x14
	float FullyOccludedSamplesFraction; // 0x18
};

struct FDynamicCardInfo {
	int32_t nDeviceId; // 0x0
	int32_t nDeviceInstanceId; // 0x4
	int32_t nDeviceLevel; // 0x8
	char eEquipSlot; // 0xc
};

struct FOnlinePartyMember {
	FUniqueNetId UniqueId; // 0x0
	FString NickName; // 0x8
	char LocalUserNum; // 0x18
	ENATType NatType; // 0x19
	int32_t TitleId; // 0x1c
	char bIsLocal : 1; // 0x20
	char bIsInPartyVoice : 1; // 0x20
	char bIsTalking : 1; // 0x20
	char bIsInGameSession : 1; // 0x20
	char bIsPlayingThisGame : 1; // 0x20
	FQWord SessionId; // 0x24
	int32_t Data1; // 0x2c
	int32_t Data2; // 0x30
	int32_t Data3; // 0x34
	int32_t Data4; // 0x38
};

struct FLocalizedStringSettingMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0xc
	TArray<FStringIdToStringMapping> ValueMappings; // 0x1c
};

struct FPropertyDecayState {
	float PropertyLevel; // 0x0
	float PropertyMax; // 0x4
	float LastDecayTimestamp; // 0x8
};

struct FSmoothScrollingAxis {
	char bEnable : 1; // 0x0
	float fDelay; // 0x4
	float fMargin; // 0x8
	int32_t nTarget; // 0xc
	int32_t nVelocity; // 0x10
	float fBufferPos; // 0x14
	float fSpan; // 0x18
	float fAnimTime; // 0x1c
};

struct FWeightRule {
	FWeightNodeRule FirstNode; // 0x0
	FWeightNodeRule SecondNode; // 0x20
};

struct FRenderCommandFence_Mirror {
	int32_t NumPendingFences; // 0x0
};

struct FScalarParameterValueOverTime : FParameterValueOverTime {
	float ParameterValue; // 0x30
	FInterpCurveFloat ParameterValueCurve; // 0x34
};

struct FMusicEvent {
	FName EventName; // 0x0
	FMusicTrackStruct EventTrack; // 0x8
	float EventDuration; // 0x34
};

struct FHudProjectile {
	int32_t nId; // 0x0
	char bIsActive : 1; // 0x4
	char bInRange : 1; // 0x4
	FVector vProjLoc; // 0x8
	float fScaleMult; // 0x14
	ObjectProperty pObj; // 0x18
	ObjectProperty pPointer; // 0x20
	ObjectProperty pIconTinted; // 0x28
	ObjectProperty pIcon; // 0x30
	ObjectProperty pArrow; // 0x38
};

struct FPlayOfTheGameEventData {
	EPlayOfTheGameEventType EventType; // 0x0
	float TimeStamp; // 0x4
	float WeightedRating; // 0x8
};

struct FThreatEntry {
	ObjectProperty attacker; // 0x0
	float ThreatLevel; // 0x8
};

struct FEffectQueueEntry {
	int32_t nEffectGroupID; // 0x0
	int32_t nExtraInfo; // 0x4
	FVector vHitLocation; // 0x8
	FRotator rHitNormal; // 0x14
};

struct FEffectSpotFXInfo {
	ObjectProperty Fx; // 0x0
	int32_t nFXIndex; // 0x8
};

struct FBranchInfo {
	FName BoneName; // 0x0
	float PerBoneWeightIncrease; // 0x8
};

struct FGameClassShortName {
	FString ShortName; // 0x0
	FString GameClassName; // 0x10
};

struct FMcpUncompressMessageRequest {
	FString MessageId; // 0x0
	TArray<char> SourceBuffer; // 0x10
	TArray<char> DestBuffer; // 0x20
	int32_t OutUncompressedSize; // 0x30
	FPointer UncompressionWorker; // 0x34
};

struct FAimAssistKeyframeData {
	FName KeyframeName; // 0x0
	float Distance; // 0x8
};

struct FUITargetableOverlay {
	int32_t nLastColorFrame; // 0x0
	int32_t nTargetId; // 0x4
	char bInit : 1; // 0x8
	char bEnemy : 1; // 0x8
	char bVisible : 1; // 0x8
	char bOnEdge : 1; // 0x8
	char bReviving : 1; // 0x8
	char bHighlight : 1; // 0x8
	char bTraceResult : 1; // 0x8
	float fRoll; // 0xc
	float fTimer; // 0x10
	float fAlpha; // 0x14
	float fScale; // 0x18
	float fTraceTimer; // 0x1c
	float fHighlightTimer; // 0x20
	FVector vWorldLoc; // 0x24
	FVector vScreenLoc; // 0x30
	FString CachedName; // 0x3c
	ObjectProperty pClip; // 0x4c
	ObjectProperty pName; // 0x54
	ObjectProperty pCarat; // 0x5c
	ObjectProperty pPointer; // 0x64
	ObjectProperty pIcon; // 0x6c
	ObjectProperty pVoiceIcon; // 0x74
	ObjectProperty pReviving; // 0x7c
	ObjectProperty pRevivingIcon; // 0x84
	ObjectProperty pRevivingMask; // 0x8c
	ObjectProperty pRevivingPointer; // 0x94
	int32_t nDepth; // 0x9c
	EPointerDirection ePointerDir; // 0xa0
};

struct FMountSkinChildInfo {
	int32_t nMountSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FSplineConnection {
	ComponentProperty SplineComponent; // 0x0
	ObjectProperty ConnectTo; // 0x8
};

struct FTerrainBVTree {
	TArray<int32_t> Nodes; // 0x0
};

struct FUIFORGETAB {
	ObjectProperty pObj; // 0x0
	ObjectProperty pTF; // 0x8
	ObjectProperty pHover; // 0x10
	ObjectProperty pButton; // 0x18
};

struct FCachedTalentTree {
	int32_t nProfileId; // 0x0
	int32_t nTalent[0x28]; // 0x4
};

struct FSeqOpInputLink {
	FString LinkDesc; // 0x0
	char bHasImpulse : 1; // 0x10
	int32_t QueuedActivations; // 0x14
	char bDisabled : 1; // 0x18
	char bDisabledPIE : 1; // 0x18
	ObjectProperty LinkedOp; // 0x1c
	int32_t DrawY; // 0x24
	char bHidden : 1; // 0x28
	float ActivateDelay; // 0x2c
	char bMoving : 1; // 0x30
	char bClampedMax : 1; // 0x30
	char bClampedMin : 1; // 0x30
};

struct FPSE_BotData {
	int32_t nBotId; // 0x0
	ObjectProperty SoundCue; // 0x4
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

struct FAvoidOtherSampleItem {
	int32_t RotOffset; // 0x0
	char NumMagSamples; // 0x4
	char bFallbackOnly : 1; // 0x8
};

struct FParticleEventCollideData : FParticleEventData {
	float ParticleTime; // 0x34
	FVector Normal; // 0x38
	float Time; // 0x44
	int32_t Item; // 0x48
	FName BoneName; // 0x4c
};

struct FSessionMemberInfo {
	FUniqueNetId PlayerNetId; // 0x0
	ESessionMemberStatus MemberStatus; // 0x8
	FString SecureAddress; // 0xc
	FString NickName; // 0x1c
	char Muted : 1; // 0x2c
};

struct FDragElementInfo {
	char bIsDragging : 1; // 0x0
	int32_t IndexFrom; // 0x4
	char bIsOver : 1; // 0x8
	int32_t IndexOver; // 0xc
	char bCanDropInOver : 1; // 0x10
	FVector2D OrigTouch; // 0x14
	FVector2D CurTouch; // 0x1c
	ETouchType EventType; // 0x24
};

struct FDominantShadowInfo {
	FMatrix WorldToLight; // 0x0
	FMatrix LightToWorld; // 0x40
	FBox LightSpaceImportanceBounds; // 0x80
	int32_t ShadowMapSizeX; // 0x9c
	int32_t ShadowMapSizeY; // 0xa0
};

struct FOptionData {
	float fValue; // 0x0
	float fOther; // 0x4
	FString sName; // 0x8
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FMcpClashMobChallengeUserStatus {
	FString unique_challenge_id; // 0x0
	FString unique_user_id; // 0x10
	int32_t num_attempts; // 0x20
	int32_t num_successful_attempts; // 0x24
	int32_t goal_progress; // 0x28
	char did_complete : 1; // 0x2c
	FString last_update_time; // 0x30
	int32_t user_award_given; // 0x40
	FString accept_time; // 0x44
	char did_preregister : 1; // 0x54
	FString facebook_like_time; // 0x58
	char enrolled_via_facebook : 1; // 0x68
	char liked_via_facebook : 1; // 0x68
	char commented_via_facebook : 1; // 0x68
	FString twitter_retweet_time; // 0x6c
	char enrolled_via_twitter : 1; // 0x7c
	char retweeted : 1; // 0x7c
};

struct FQueuedSubtitle {
	char CurrentlyPlaying : 1; // 0x0
	int32_t SubtitleMessageId; // 0x4
	FString SubtitleText; // 0x8
	ObjectProperty SubtitleSound; // 0x18
	int32_t AkId; // 0x20
};

struct FControllerConnectionState {
	int32_t bIsControllerConnected; // 0x0
	int32_t bLastIsControllerConnected; // 0x4
};

struct FMcpClashMobPushNotification {
	TArray<FString> device_tokens; // 0x0
	FString badge_type; // 0x10
	FString Sound; // 0x20
	FString Message; // 0x30
	FMcpClashMobPushNotificationParams Params; // 0x40
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FClothSpecialBoneInfo {
	FName BoneName; // 0x0
	ClothBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0xc
};

struct FPhysXSceneProperties {
	FPhysXSimulationProperties PrimaryScene; // 0x0
	FPhysXSimulationProperties CompartmentRigidBody; // 0xc
	FPhysXSimulationProperties CompartmentFluid; // 0x18
	FPhysXSimulationProperties CompartmentCloth; // 0x24
	FPhysXSimulationProperties CompartmentSoftBody; // 0x30
};

struct FInventoryItemRequestState : FSaveSlotRequestState {
	FString ItemId; // 0x28
};

struct FLinearColorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveLinearColor ParameterValueCurve; // 0x40
};

struct FPComImageDownload {
	FString URL; // 0x0
	FString FilePath; // 0x10
	FPointer HttpDownloader; // 0x20
	EOnlineImageDownloadState State; // 0x28
	TArray<char> Data; // 0x2c
	char bPendingRemoval : 1; // 0x3c
};

struct FTitleSafeZoneArea {
	float MaxPercentX; // 0x0
	float MaxPercentY; // 0x4
	float RecommendedPercentX; // 0x8
	float RecommendedPercentY; // 0xc
};

struct FTrackingSettings {
	char bUsesTracking : 1; // 0x0
	ObjectProperty mTarget; // 0x4
	float fTurnStrength; // 0xc
	float fVertTurnStrength; // 0x10
	char bIgnoreNonTargets : 1; // 0x14
	char bIgnoreWorldIfSeeking : 1; // 0x14
	char bIgnoreWorldIfNotSeeking : 1; // 0x14
};

struct FChildAnimParameters {
	FString SlotName; // 0x0
	TG_EQUIP_POINT EquipSlot; // 0x10
	int32_t ChildIndex; // 0x14
	char bBlendInOnTargeting : 1; // 0x18
	char bBlendInOnBuildup : 1; // 0x18
	char bBlendInOnStartFire : 1; // 0x18
	char bBlendInOnFire : 1; // 0x18
	char bBlendOutIfStopped : 1; // 0x18
	char bBlendOutOnAnimEnd : 1; // 0x18
	char bBlendOutOnChildNotification : 1; // 0x18
	char bEndCurrentAnimIfNoChild : 1; // 0x18
	char bAddToStackIfOtherAnimInterrupted : 0; // 0x18
	char bAddToStackOnCeaseRelevant : 0; // 0x18
	char bIgnoreSwapLogicIfNotRelevant : 0; // 0x18
	char bReplayIfActivatedFromStack : 0; // 0x18
	char bReplayIfActive : 0; // 0x18
	char bAutoScaleByDuration : 0; // 0x18
	float fAutoScaledPlayRateMultiplier; // 0x1c
	char bInterruptOtherAnims : 1; // 0x20
	TArray<int32_t> nInterruptExceptionsByChildIndex; // 0x24
	int32_t nCustomRetrieveIndex; // 0x34
};

struct FMetaDataKeyFrame {
	float Time; // 0x0
	float TargetValue; // 0x4
};

struct FObstacleQueryCache {
	FVector RealGoalPos; // 0x0
	FVector ModifiedGoalPos; // 0xc
	TArray<FVector> IntermediatePoints; // 0x18
	EObstacleAvoidanceStatus PathStatus; // 0x28
};

struct FTextureCoordinates {
	float U; // 0x0
	float V; // 0x4
	float UL; // 0x8
	float VL; // 0xc
};

struct FRecoilParams {
	ERecoilStart X; // 0x0
	ERecoilStart Y; // 0x1
	ERecoilStart Z; // 0x2
	char Padding; // 0x3
};

struct FKeyBind {
	FName Name; // 0x0
	FString Command; // 0x8
	char Control : 1; // 0x18
	char Shift : 1; // 0x18
	char Alt : 1; // 0x18
	char bIgnoreCtrl : 1; // 0x18
	char bIgnoreShift : 1; // 0x18
	char bIgnoreAlt : 1; // 0x18
	char LeftShoulder : 1; // 0x18
	char LeftTrigger : 1; // 0x18
	char RightShoulder : 0; // 0x18
	char RightTrigger : 0; // 0x18
	char LeftThumbStick : 0; // 0x18
	char RightThumbStick : 0; // 0x18
	char bIgnorePadModifier : 0; // 0x18
};

struct FPawnDamagerStruct {
	ObjectProperty DamagerPawn; // 0x0
	float fTimestamp; // 0x8
};

struct FMolotovStrandInfo {
	FVector vStartDirection; // 0x0
	float fAllowanceWeight; // 0xc
	int32_t nHeadIndex; // 0x10
	int32_t nAllowableSize; // 0x14
	TArray<int32_t> nStrandTrace; // 0x18
};

struct FPendingLoot {
	int32_t nDeviceId; // 0x0
	FVector vLocation; // 0x4
	FRotator rRotation; // 0x10
	char bRandomizeAngle : 1; // 0x1c
	int32_t AmmoCount; // 0x20
};

struct FMeshPlacement {
	int32_t nSkinId; // 0x0
	int32_t nMeshId; // 0x4
	FName SocketName; // 0x8
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FHudBuffEffect {
	int32_t nGroup; // 0x0
	float fPercent; // 0x4
	int32_t nIcon; // 0x8
	FString sName; // 0xc
};

struct FLayerIndex {
	TArray<int32_t> Entries; // 0x0
};

struct FGetSaveDataCallbackStruct {
	int32_t SlotIndex; // 0x0
	DelegateProperty Callback; // 0x4
};

struct FChestSpawnConfig {
	int32_t nDeployableId; // 0x0
	int32_t nWeight; // 0x4
	int32_t nMin; // 0x8
};

struct FAggregateEventMapping {
	int32_t EventID; // 0x0
	int32_t AggregateID; // 0x4
	int32_t TargetAggregateID; // 0x8
};

struct FTrackedFiringAmmoConsumption {
	int32_t FiringRequestID; // 0x0
	int32_t AmmoConsumed; // 0x4
};

struct FLandscapeLayerInfo {
	FName LayerName; // 0x0
	float Hardness; // 0x8
	char bNoWeightBlend : 1; // 0xc
	ObjectProperty PhysMaterial; // 0x10
	char bSelected : 1; // 0x18
};

struct FMobileDistanceFieldParams {
	float Gamma; // 0x0
	float AlphaRefVal; // 0x4
	float SmoothWidth; // 0x8
	char EnableShadow : 1; // 0xc
	FVector2D ShadowDirection; // 0x10
	FLinearColor ShadowColor; // 0x18
	float ShadowSmoothWidth; // 0x28
	FDepthFieldGlowInfo GlowInfo; // 0x2c
	int32_t BlendMode; // 0x50
};

struct FParticleEmitterReplayFrame {
	int32_t EmitterType; // 0x0
	int32_t OriginalEmitterIndex; // 0x4
	FPointer FrameState; // 0x8
};

struct FOnlineProfileSetting {
	EOnlineProfilePropertyOwner Owner; // 0x0
	FSettingsProperty ProfileSetting; // 0x4
};

struct FInstancedStaticMeshMappingInfo {
	FPointer Mapping; // 0x0
	FPointer LightMap; // 0x8
	ObjectProperty LightmapTexture; // 0x10
	ObjectProperty ShadowmapTexture; // 0x18
};

struct FTrailSample {
	float RelativeTime; // 0x0
	FVector FirstEdgeSample; // 0x4
	FVector ControlPointSample; // 0x10
	FVector SecondEdgeSample; // 0x1c
};

struct FMcpGroupList {
	FString RequesterId; // 0x0
	TArray<FMcpGroup> Groups; // 0x10
};

struct FPotentialTargetInfo {
	ObjectProperty Target; // 0x0
	int32_t NumHits; // 0x8
	float Dist; // 0xc
};

struct FOctreeElementId {
	FPointer Node; // 0x0
	int32_t ElementIndex; // 0x8
};

struct FRegistryKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FDamageClassEventData {
	FName DamageClassName; // 0x0
};

struct FGameCrowdAttachmentList {
	FName SocketName; // 0x0
	TArray<FGameCrowdAttachmentInfo> List; // 0x8
};

struct FTitleFileMcp : FTitleFile {
	FPointer HttpDownloader; // 0x24
};

struct FCompositeTextureType {
	ObjectProperty CompTexture; // 0x0
	FName TextureParamName; // 0x8
};

struct FActiveDecalInfo {
	ComponentProperty Decal; // 0x0
	float LifetimeRemaining; // 0x8
};

struct FCollisionSettingsDeployable {
	AdvancedCollisionMode mCollisionMode; // 0x0
	char bUseMeshForCollision : 1; // 0x4
	char bPawnsCanBaseOnMe : 1; // 0x4
	char bAutoRegisterObstacle : 1; // 0x4
	char bHasRegisteredObstacle : 1; // 0x4
	char bOnlyBlockShotsFromFront : 1; // 0x4
	char bBlockFriendlyFire : 1; // 0x4
	float fProjectileAllowanceRadius; // 0x8
	float fExplosionAllowanceRadius; // 0xc
};

struct FSettingOption {
	ObjectProperty Obj; // 0x0
	ObjectProperty Base; // 0x8
	ObjectProperty Type; // 0x10
	ObjectProperty TypeTF; // 0x18
	ObjectProperty Left; // 0x20
	ObjectProperty Right; // 0x28
	ObjectProperty Focus; // 0x30
	ObjectProperty Color; // 0x38
	ObjectProperty Slider; // 0x40
	ObjectProperty SliderTF; // 0x48
	ObjectProperty SliderTitle; // 0x50
};

struct FMiniMapServerEntity {
	FVector vLocation; // 0x0
	MiniMapEntityType eType; // 0xc
	int32_t nSubType; // 0x10
	int32_t nProfileId; // 0x14
	TgMapTeam Team; // 0x18
	int32_t nVisionRange; // 0x1c
	char bIsDead : 1; // 0x20
	ObjectProperty RepInfo; // 0x24
	int32_t nIdx; // 0x2c
	char bMarked : 1; // 0x30
	char bVisibleOnMap; // 0x34
	char bVisibleBySentinel; // 0x35
	char bVisibleByDetector : 1; // 0x38
	float fLastPingTime; // 0x3c
	char bRequireLOS : 1; // 0x40
	char bDetector : 1; // 0x40
	char bSentinel : 1; // 0x40
	char byVisionMask; // 0x44
	float fHealthPCT; // 0x48
	ObjectProperty FogOfWarArea; // 0x4c
	char FogOfWarAreaRevealed : 1; // 0x54
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
	char bCenterChannelOnly : 1; // 0x1c
	char bApplyAmbientVolumes : 1; // 0x1c
	char bApplyInsulationVolumes : 1; // 0x1c
	FName m_nmSoundMode; // 0x20
	float m_fNonLocalPriorityBoost; // 0x28
	float m_fLocalPriorityBoost; // 0x2c
};

struct FSet_Mirror {
	FSparseArray_Mirror Elements; // 0x0
	int32_t InlineHash; // 0x38
	FPointer Hash; // 0x3c
	int32_t HashSize; // 0x44
};

struct FEnergyStunStackEntry {
	ObjectProperty Effect; // 0x0
};

struct FUntypedBulkData_Mirror {
	FPointer VfTable; // 0x0
	int32_t BulkDataFlags; // 0x8
	int32_t ElementCount; // 0xc
	int32_t BulkDataOffsetInFile; // 0x10
	int32_t BulkDataSizeOnDisk; // 0x14
	int32_t SavedBulkDataFlags; // 0x18
	int32_t SavedElementCount; // 0x1c
	int32_t SavedBulkDataOffsetInFile; // 0x20
	int32_t SavedBulkDataSizeOnDisk; // 0x24
	FPointer BulkData; // 0x28
	int32_t LockStatus; // 0x30
	FPointer AttachedAr; // 0x34
	int32_t bShouldFreeOnEmpty; // 0x3c
};

struct FChargeHitInfo {
	ObjectProperty HitActor; // 0x0
	float TimeStamp; // 0x8
};

struct FTerrainLayer {
	FString Name; // 0x0
	ObjectProperty Setup; // 0x10
	int32_t AlphaMapIndex; // 0x18
	char Highlighted : 1; // 0x1c
	char WireframeHighlighted : 1; // 0x1c
	char Hidden : 1; // 0x1c
	FColor HighlightColor; // 0x20
	FColor WireframeColor; // 0x24
	int32_t MinX; // 0x28
	int32_t MinY; // 0x2c
	int32_t MaxX; // 0x30
	int32_t MaxY; // 0x34
};

struct FSteamUserCloudMetadata {
	FString UserId; // 0x0
	TArray<FEmsFile> UserCloudMetadata; // 0x10
};

struct FSlotMoveRef {
	FPolyReference Poly; // 0x0
	FBasedPosition Dest; // 0x24
	int32_t Direction; // 0x5c
};

struct FNavMeshPathGoalEvaluatorCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x4
};

struct FSteamUserCloud {
	FString UserId; // 0x0
	TArray<FTitleFile> UserCloudFileData; // 0x10
};

struct FTeamState {
	int32_t TeamIndex; // 0x0
	TArray<int32_t> PlayerIndices; // 0x4
};

struct FRequiredMobileInputConfig {
	FString GroupName; // 0x0
	TArray<FString> RequireZoneNames; // 0x10
	char bIsAttractModeGroup : 1; // 0x20
};

struct FEEmoteCategoryChance {
	float fDefault; // 0x0
	float fPlayerVGS; // 0x4
	float fAbilityOnCooldown; // 0x8
	float fTakingDamage; // 0xc
	float fCelebration; // 0x10
	float fKills; // 0x14
	float fAction; // 0x18
	float fContext; // 0x1c
	float fUltimate; // 0x20
	float fOverride; // 0x24
	float fMovement; // 0x28
};

struct FRecoilProfile {
	FRecoilDef Recoil; // 0x0
	FName ProfileName; // 0x70
	char bActive : 1; // 0x78
};

struct FSplineSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	int32_t StartPoint; // 0x10
	int32_t EndPoint; // 0x14
	float Weight; // 0x18
	FDouble LastUpdateTime; // 0x1c
	float SourceInteriorVolume; // 0x24
	float SourceInteriorLPF; // 0x28
	float CurrentInteriorVolume; // 0x2c
	float CurrentInteriorLPF; // 0x30
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FVisiblePortalInfo {
	ObjectProperty Source; // 0x0
	ObjectProperty Destination; // 0x8
};

struct FLightMapRef {
	FPointer Reference; // 0x0
};

struct FBehaviorEntry {
	ObjectProperty BehaviorArchetype; // 0x0
	ObjectProperty LookAtActor; // 0x8
	float BehaviorFrequency; // 0x10
	char bNeverRepeat : 1; // 0x14
	char bHasBeenUsed : 1; // 0x14
	char bCanBeUsed : 1; // 0x14
};

struct FLobbyMeshInfo {
	FVector Translation; // 0x0
	FRotator Rotation; // 0xc
	float Scale; // 0x18
	ObjectProperty SkelMesh; // 0x1c
	ObjectProperty PhysAsset; // 0x24
	ObjectProperty AnimTreeTemplate; // 0x2c
	TArray<ObjectProperty> AnimSets; // 0x34
	ObjectProperty MorphTargetSet; // 0x44
	char bOnlySelfShadow : 1; // 0x4c
	TArray<ObjectProperty> MaterialOverrides; // 0x50
	char bUseIndividualLightEnvironment : 1; // 0x60
	char bUseOverlayMesh : 1; // 0x60
};

struct FSHVectorRGB {
	FSHVector R; // 0x0
	FSHVector G; // 0x30
	FSHVector B; // 0x60
};

struct FParticleEventKismetData : FParticleEventData {
	char UsePSysCompLocation : 1; // 0x34
	FVector Normal; // 0x38
};

struct FSeqOpOutputInputLink {
	ObjectProperty LinkedOp; // 0x0
	int32_t InputLinkIdx; // 0x8
};

struct FInterpPointOnSpline {
	FVector Position; // 0x0
	float InVal; // 0xc
	float Length; // 0x10
};

struct FAlternateMaterialOverride {
	ObjectProperty MaterialToFind; // 0x0
	ObjectProperty MaterialToReplace; // 0x8
};

struct FServerAuthRetry {
	FUniqueNetId ClientUID; // 0x0
	int32_t AuthRetryCount; // 0x8
};

struct FStaticMeshComponentLODInfo {
	TArray<ObjectProperty> ShadowMaps; // 0x0
	TArray<ObjectProperty> ShadowVertexBuffers; // 0x10
	FPointer LightMap; // 0x20
	FPointer OverrideVertexColors; // 0x28
	TArray<FPaintedVertex> PaintedVertices; // 0x30
};

struct FViewOffsetData {
	FVector OffsetHigh; // 0x0
	FVector OffsetMid; // 0xc
	FVector OffsetLow; // 0x18
};

struct FOffhandAnimation {
	FName m_OffhandUseType; // 0x0
	FName m_AnimName; // 0x8
	char m_bFullBody : 1; // 0x10
};

struct FPlayerReservation {
	FUniqueNetId NetId; // 0x0
	int32_t Skill; // 0x8
	int32_t XpLevel; // 0xc
	FDouble Mu; // 0x10
	FDouble Sigma; // 0x18
	float ElapsedSessionTime; // 0x20
};

struct FAnimBlendInfo {
	FName AnimName; // 0x0
	FAnimInfo AnimInfo; // 0x8
	float Weight; // 0x1c
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FMarkedTargetInfo {
	int32_t PawnId; // 0x0
	int32_t Count; // 0x4
};

struct FSoundClassEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FForgeUse {
	int32_t nIndex; // 0x0
	int32_t nPlayerId; // 0x4
};

struct FGFxWidgetBinding {
	FName WidgetName; // 0x0
	UGFxObject* WidgetClass; // 0x8
};

struct FMcpGroup {
	FString OwnerId; // 0x0
	FString GroupID; // 0x10
	FString GroupName; // 0x20
	EMcpGroupAccessLevel AccessLevel; // 0x30
	TArray<FMcpGroupMember> Members; // 0x34
};

struct FTCameraCache {
	float TimeStamp; // 0x0
	FTPOV POV; // 0x4
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
	char bRecalcNormals : 1; // 0x20
	float NormalsThreshold; // 0x24
};

struct FArcingInfo {
	float ArcTime; // 0x0
	float RemainingArcTime; // 0x4
	int32_t JumpsRemaining; // 0x8
	ObjectProperty PreviousArcTarget; // 0xc
	TArray<ObjectProperty> PreviousTargets; // 0x14
	ObjectProperty ArcFiremode; // 0x24
};

struct FChannelChatData {
	TArray<ObjectProperty> ChatData; // 0x0
};

struct FDamageOverlayData : FOverlayData {
	float fTimestamp; // 0x44
	int32_t nTargetId; // 0x48
	int32_t nSourceOwnerId; // 0x4c
	int32_t nSourceItemId; // 0x50
	EDamageNumberSourceType eType; // 0x54
	int32_t nDamage; // 0x58
	int32_t nCount; // 0x5c
	FVector vTargetWorldLoc; // 0x60
	float fIntroTimer; // 0x6c
	float fHeadShotTimer; // 0x70
	int32_t nAdvancedSlot; // 0x74
};

struct FTgQueuedSimulatedProjectileSpawn {
	float TimeStampToSpawn; // 0x0
	int32_t FireRequestId; // 0x4
	ObjectProperty FireMode; // 0x8
	FVector ProjectileSpawnLocation; // 0x10
	FVector ProjectileSpawnDir; // 0x1c
	int32_t ProjectileIndex; // 0x28
	int32_t ProjectileIdOverride; // 0x2c
	float Range; // 0x30
	ObjectProperty trackingTarget; // 0x34
	FVector EndTrace; // 0x3c
	float ClientMovementTimeStamp; // 0x48
	float AccuracyRandomValue1; // 0x4c
	float AccuracyRandomValue2; // 0x50
	float AccuracyValue; // 0x54
};

struct FSkelMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x4
};

struct FPSE_SkinAk {
	int32_t nSkinId; // 0x0
	ObjectProperty AkEvent; // 0x4
};

struct FUICShopListSection {
	ObjectProperty m_mcContainer; // 0x0
	ObjectProperty m_pHeader; // 0x8
	int32_t m_nNavXStart; // 0x10
	int32_t m_nNavWidth; // 0x14
	float m_fXStart; // 0x18
	float m_fTotalWidth; // 0x1c
	ObjectProperty m_pLTI; // 0x20
	UISHOPLIST_SECTION_TYPE m_eType; // 0x28
	TArray<FUICListEntry> m_ListItems; // 0x2c
};

struct FMobileInputZoneClassMap {
	FString Name; // 0x0
	UMobileInputZone* ClassType; // 0x10
};

struct FDebugTextInfo {
	ObjectProperty SrcActor; // 0x0
	FVector SrcActorOffset; // 0x8
	FVector SrcActorDesiredOffset; // 0x14
	FString DebugText; // 0x20
	float TimeRemaining; // 0x30
	float Duration; // 0x34
	FColor TextColor; // 0x38
	char bAbsoluteLocation : 1; // 0x3c
	char bKeepAttachedToActor : 1; // 0x3c
	FVector OrigActorLocation; // 0x40
	ObjectProperty Font; // 0x4c
};

struct FTitleFile {
	FString Filename; // 0x0
	EOnlineEnumerationReadState AsyncState; // 0x10
	TArray<char> Data; // 0x14
};

struct FECustomEmoteData {
	int32_t nIndex; // 0x0
	ObjectProperty AnimOverride; // 0x4
	char bIsLooping : 1; // 0xc
	char bAccelBreaks : 1; // 0xc
};

struct FSwappedMeshResetInfo {
	ComponentProperty SkelMeshComp; // 0x0
	int32_t MaterialIndex; // 0x8
	ObjectProperty OrigMatInst; // 0xc
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
	FRawDistributionFloat FadeInDistance; // 0x14
	FRawDistributionFloat FadeOutDistance; // 0x38
};

struct FOnlineRegistrant {
	FUniqueNetId PlayerNetId; // 0x0
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FCachedTgAnimNodeStanceInfo {
	int32_t Index; // 0x0
	ObjectProperty Node; // 0x4
};

struct FOnlineGameSearchQuery {
	TArray<FOnlineGameSearchORClause> OrClauses; // 0x0
	TArray<FOnlineGameSearchSortClause> SortClauses; // 0x10
};

struct FCloseChestData {
	float fTimer; // 0x0
	ObjectProperty pCrate; // 0x4
};

struct FSocialPostLinkInfo : FSocialPostImageInfo {
	FString TitleURL; // 0x44
	FString PictureURL; // 0x54
};

struct FFaceFXSoundCueKey {
	ObjectProperty FaceFXSoundCue; // 0x0
	ObjectProperty FaceFXAkEvent; // 0x8
};

struct FSavedTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FPatchNotesData {
	FPatchVersionNumber PatchVersion; // 0x0
	FPatchVersionNumber PatchRelevantVersion; // 0x10
	TMap<None, None> PatchNotes; // 0x20
};

struct FCoverReference : FActorReference {
	int32_t SlotIdx; // 0x18
};

struct FClothingLodInfo {
	TArray<int32_t> LODMaterialMap; // 0x0
};

struct FMolotovPointInfo {
	FVector vLocation; // 0x0
	FRotator rRotation; // 0xc
	int32_t nEffectSpotIndex; // 0x18
	float fHeatLevel; // 0x1c
	TArray<int32_t> nTriNeighbors; // 0x20
};

struct FSoftBodyTetraLink {
	int32_t Index; // 0x0
	FVector Bary; // 0x4
};

struct FRBCornerAngleInfo {
	float Angle; // 0x0
	float CornerSize; // 0x4
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FHeadSkinChildInfo {
	int32_t nHeadSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector2D LightmapUVBias; // 0x40
	FVector2D ShadowmapUVBias; // 0x48
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float TimeStamp; // 0xc
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FPlayerState {
	int32_t PlayerIndex; // 0x0
	int32_t CurrentTeamIndex; // 0x4
	float TimeSpawned; // 0x8
	float TimeAliveSinceLastDeath; // 0xc
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

struct FLootData {
	int32_t nBot; // 0x0
	int32_t nTier; // 0x4
	int32_t nType; // 0x8
	int32_t nDevice; // 0xc
};

struct FRewardInfo {
	int32_t RequestedReward; // 0x0
	int32_t BoostReward; // 0x4
	int32_t ActualReward; // 0x8
	int32_t ActualRewardAccum; // 0xc
	int32_t BoostRewardAccum; // 0x10
	int32_t ErrorMessage; // 0x14
};

struct FTOHInfo {
	ObjectProperty pTarget; // 0x0
	int32_t fAccumulator; // 0x8
	float fResetTimer; // 0xc
};

struct FDynamicLinkInfo {
	FVector LastTargetLocation; // 0x0
	FVector LastSrcLocation; // 0xc
};

struct FMcpClashMobChallengeFile {
	char should_keep_post_challenge : 1; // 0x0
	FString title_id; // 0x4
	FString file_name; // 0x14
	FString dl_name; // 0x24
	FString hash_code; // 0x34
	FString Type; // 0x44
	McpChallengeFileStatus Status; // 0x54
};

struct FInterpEdSelKey {
	ObjectProperty Group; // 0x0
	ObjectProperty Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FObjectiveMICInfo {
	int32_t MyTeam; // 0x0
	float AmountFilled; // 0x4
	int32_t ObjStatus; // 0x8
	int32_t IsContested; // 0xc
	int32_t Flip; // 0x10
};

struct FReverbSettings {
	char bApplyReverb : 1; // 0x0
	ReverbPreset ReverbType; // 0x4
	float Volume; // 0x8
	float FadeTime; // 0xc
};

struct FStateVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
};

struct FKeybindOption {
	ObjectProperty Obj; // 0x0
	ObjectProperty Base; // 0x8
	ObjectProperty Focus; // 0x10
	ObjectProperty Command; // 0x18
	ObjectProperty Key[0x2]; // 0x20
	ObjectProperty KeyButton[0x2]; // 0x30
};

struct FAdjustDamageParams {
	ObjectProperty Dev; // 0x0
	FImpactInfo Impact; // 0x8
	float fBaseDamage; // 0x88
	int32_t nPropertyId; // 0x8c
	char bCritical : 1; // 0x90
	char bInterval : 1; // 0x90
	FExtraDamageInfo ExtraInfo; // 0x94
};

struct FUITASKFORCE_DATA {
	int32_t nTaskForceId; // 0x0
	TArray<int32_t> PRIList; // 0x4
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
};

struct FFollowLaneState {
	int32_t LastLaneIndex; // 0x0
	char bFinalApproach : 1; // 0x4
	char bLockedToMarker : 1; // 0x4
};

struct FPendingTeleportInfo {
	ObjectProperty PendingActor; // 0x0
	float TouchTimestamp; // 0x8
	char HasPlayedPreTeleport : 1; // 0xc
};

struct FGameEvent {
	TArray<float> EventCountByTimePeriod; // 0x0
};

struct FGraphData {
	int32_t XP; // 0x0
	int32_t Gold; // 0x4
	int32_t Time; // 0x8
};

struct FTextureGroupContainer {
	char TEXTUREGROUP_World : 1; // 0x0
	char TEXTUREGROUP_WorldNormalMap : 1; // 0x0
	char TEXTUREGROUP_WorldSpecular : 1; // 0x0
	char TEXTUREGROUP_Character : 1; // 0x0
	char TEXTUREGROUP_CharacterNormalMap : 1; // 0x0
	char TEXTUREGROUP_CharacterSpecular : 1; // 0x0
	char TEXTUREGROUP_Weapon : 1; // 0x0
	char TEXTUREGROUP_WeaponNormalMap : 1; // 0x0
	char TEXTUREGROUP_WeaponSpecular : 0; // 0x0
	char TEXTUREGROUP_Vehicle : 0; // 0x0
	char TEXTUREGROUP_VehicleNormalMap : 0; // 0x0
	char TEXTUREGROUP_VehicleSpecular : 0; // 0x0
	char TEXTUREGROUP_Cinematic : 0; // 0x0
	char TEXTUREGROUP_Effects : 0; // 0x0
	char TEXTUREGROUP_EffectsNotFiltered : 0; // 0x0
	char TEXTUREGROUP_Skybox : 0; // 0x0
	char TEXTUREGROUP_UI : 0; // 0x0
	char TEXTUREGROUP_Lightmap : 0; // 0x0
	char TEXTUREGROUP_RenderTarget : 0; // 0x0
	char TEXTUREGROUP_MobileFlattened : 0; // 0x0
	char TEXTUREGROUP_ProcBuilding_Face : 0; // 0x0
	char TEXTUREGROUP_ProcBuilding_LightMap : 0; // 0x0
	char TEXTUREGROUP_Shadowmap : 0; // 0x0
	char TEXTUREGROUP_ColorLookupTable : 0; // 0x0
	char TEXTUREGROUP_Terrain_Heightmap : 0; // 0x0
	char TEXTUREGROUP_Terrain_Weightmap : 0; // 0x0
	char TEXTUREGROUP_ImageBasedReflection : 0; // 0x0
	char TEXTUREGROUP_Bokeh : 0; // 0x0
	char TEXTUREGROUP_NPC : 0; // 0x0
	char TEXTUREGROUP_NPCNormalMap : 0; // 0x0
	char TEXTUREGROUP_NPCSpecular : 0; // 0x0
	char TEXTUREGROUP_WorldDetail : 0; // 0x0
	char TEXTUREGROUP_TitleScreenPreview : 1; // 0x4
	char TEXTUREGROUP_UIStreamable : 1; // 0x4
};

struct FMcpUserStatus {
	FString McpId; // 0x0
	FString UDID; // 0x10
	FString CountryCode; // 0x20
	FString LastActiveDate; // 0x30
	int32_t DaysInactive; // 0x40
	char bIsBanned : 1; // 0x44
};

struct FDeviceIdCache {
	int32_t DeviceID; // 0x0
	DelegateProperty DeviceSelectionMulticast; // 0x4
	TArray<DelegateProperty> DeviceSelectionDelegates; // 0x14
};

struct FSkinStrengthOverride {
	int32_t nSkinId; // 0x0
	float fDesiredStrength; // 0x4
};

struct FAcquisitionCarouselItem {
	ObjectProperty mcPurchaseItem; // 0x0
	ObjectProperty mcPurchaseChest; // 0x8
	ObjectProperty mcPurchaseCard; // 0x10
	ObjectProperty mcPurchaseItemDisplay; // 0x18
	ObjectProperty mcPurchaseItemIcon; // 0x20
	ObjectProperty mcPurchaseItemCardIcon; // 0x28
	ObjectProperty mcPurchaseItemCurrency; // 0x30
	ObjectProperty mcPurchaseItemRarityFrame; // 0x38
	ObjectProperty mcPurchaseItemRarityText; // 0x40
	ObjectProperty mcPurchaseItemTypeIcon; // 0x48
	ObjectProperty mcPurchaseItemTitle; // 0x50
	ObjectProperty mcPurchaseItemSubtitle; // 0x58
	ObjectProperty mcPurchaseItemChampion; // 0x60
	ObjectProperty mcPurchaseItemChampionIcon; // 0x68
	ObjectProperty mcPurchaseItemChampionLarge; // 0x70
	ObjectProperty mcPurchaseItemChampionTitle; // 0x78
	ObjectProperty mcPurchaseItemChampionImage; // 0x80
	ObjectProperty mcPurchaseItemAudio; // 0x88
};

struct FGameSpecialMoveInfo {
	FName SpecialMoveName; // 0x0
	UGameSpecialMove* SpecialMoveClass; // 0x8
	ObjectProperty SpecialMoveInstance; // 0x10
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FPropertyDecayParams {
	float LambdaImpulse; // 0x0
	float LambdaAccumulation; // 0x4
	float DecayImpulse; // 0x8
	float DecayAccumulation; // 0xc
	float AccumulationImpulseMix; // 0x10
};

struct FPBMeshCompInfo {
	ComponentProperty MeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FFunctionExpressionOutput {
	ObjectProperty ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FPresetGeneratedPoint {
	float KeyIn; // 0x0
	float KeyOut; // 0x4
	char TangentsValid : 1; // 0x8
	float TangentIn; // 0xc
	float TangentOut; // 0x10
	EInterpCurveMode IntepMode; // 0x14
};

struct FWeaponClassEventData {
	FName WeaponClassName; // 0x0
};

struct FBiasedGoalActor {
	ObjectProperty Goal; // 0x0
	int32_t ExtraCost; // 0x8
};

struct FCameraPitchInfo {
	float ZHeight; // 0x0
	float Pitch; // 0x4
};

struct FNotificationInfo {
	char bIsLocal : 1; // 0x0
	FString MessageBody; // 0x4
	int32_t BadgeNumber; // 0x14
	TArray<FNotificationMessageInfo> MessageInfo; // 0x18
};

struct FUniqueNetId {
	FQWord Uid; // 0x0
};

struct FParticleSystemInfo {
	ObjectProperty ParticleSystem; // 0x0
	FName SocketName; // 0x8
};

struct FActorToLookAt {
	ObjectProperty Actor; // 0x0
	float Rating; // 0x8
	float EnteredTime; // 0xc
	float LastKnownDistance; // 0x10
	float StartTimeBeingLookedAt; // 0x14
	char CurrentlyBeingLookedAt : 1; // 0x18
};

struct FPRIAudioDeviceInfo {
	char Valid : 1; // 0x0
	EAudioDeviceCategory DeviceCategory; // 0x4
	EAudioDeviceType DeviceType; // 0x5
	FString Id; // 0x8
	EAudioDeviceSharing Sharing; // 0x18
};

struct FStunStackEntry {
	ObjectProperty Effect; // 0x0
	EStunType StunType; // 0x8
};

struct FCylinder {
	float Radius; // 0x0
	float Height; // 0x4
};

struct FMcpInventoryItemAttribute {
	FString AttributeId; // 0x0
	int32_t Value; // 0x10
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FChargeTouchData {
	ObjectProperty Other; // 0x0
	ObjectProperty InstigatorPawn; // 0x8
	FVector HitLocation; // 0x10
	FVector HitNormal; // 0x1c
	int32_t TouchCount; // 0x28
	int32_t UntouchCount; // 0x2c
};

struct FPostProcessMaterialRef {
	ObjectProperty Effect; // 0x0
};

struct FOnlineArbitrationRegistrant : FOnlineRegistrant {
	FQWord MachineId; // 0x8
	int32_t Trustworthiness; // 0x10
};

struct FRigidBodyImpactInfo {
	float LastImpactTime; // 0x0
	ObjectProperty PhysMat; // 0x4
};

struct FUtilityFunctionList {
	FPointer UtilityFunctionList; // 0x0
	int32_t UtilityFunctionListCount; // 0x8
	FPointer StaticMemory; // 0xc
	FPointer CachedUtilities; // 0x14
	FPointer DynamicStorageMemory; // 0x1c
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FUIAnimData {
	char eType; // 0x0
	char eQuad; // 0x1
	float fOrig; // 0x4
	float fDelay; // 0x8
	float fTarget; // 0xc
	float fDuration; // 0x10
	float fTimeLeft; // 0x14
	ObjectProperty mcObject; // 0x18
	ObjectProperty akSound; // 0x20
};

struct Fm_TransitionAnimSet {
	TG_POSTURE m_TransitionToPosture; // 0x0
	FName m_TransitionAnimName; // 0x4
};

struct FTeamInformation {
	int32_t TeamIndex; // 0x0
	FString TeamName; // 0x4
	FColor TeamColor; // 0x14
	int32_t MaxSize; // 0x18
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FPBScope2D {
	FMatrix ScopeFrame; // 0x0
	float DimX; // 0x40
	float DimZ; // 0x44
};

struct FSoftBodySpecialBoneInfo {
	FName BoneName; // 0x0
	SoftBodyBoneType BoneType; // 0x8
	TArray<int32_t> AttachedVertexIndices; // 0xc
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FMcpChallengeRequest {
	FString UniqueChallengeId; // 0x0
	ObjectProperty HTTPRequest; // 0x10
};

struct FMobileColorGradingParams {
	float TransitionTime; // 0x0
	float Blend; // 0x4
	float Desaturation; // 0x8
	FLinearColor HighLights; // 0xc
	FLinearColor MidTones; // 0x1c
	FLinearColor Shadows; // 0x2c
};

struct FFx_Material {
	int32_t nFxMatId; // 0x0
	ObjectProperty c_MITV; // 0x4
	int32_t nFxMatTypeCode; // 0xc
	FName nmMIC; // 0x10
	char bApplyIfSameTeam : 1; // 0x18
};

struct FNodeNameToChildIndex {
	FName NodeName; // 0x0
	int32_t ChildIndex; // 0x8
};

struct FKSphereElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	char bNoRBCollision : 1; // 0x44
	char bPerPolyShape : 1; // 0x44
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

struct FRecoilDef {
	float TimeToGo; // 0x0
	float TimeDuration; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FVector RotSinOffset; // 0x20
	FRecoilParams RotParams; // 0x2c
	FRotator RotOffset; // 0x30
	FVector LocAmplitude; // 0x3c
	FVector LocFrequency; // 0x48
	FVector LocSinOffset; // 0x54
	FRecoilParams LocParams; // 0x60
	FVector LocOffset; // 0x64
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
	char Visible : 1; // 0x28
	char hasX : 1; // 0x28
	char hasY : 1; // 0x28
	char hasZ : 1; // 0x28
	char hasRotation : 1; // 0x28
	char hasXRotation : 1; // 0x28
	char hasYRotation : 1; // 0x28
	char hasXScale : 1; // 0x28
	char hasYScale : 0; // 0x28
	char hasZScale : 0; // 0x28
	char hasAlpha : 0; // 0x28
	char hasVisible : 0; // 0x28
};

struct FSkeletalMeshLODInfo {
	float DisplayFactor; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	TArray<char> bEnableShadowCasting; // 0x18
	TArray<TriangleSortOption> TriangleSorting; // 0x28
	TArray<FTriangleSortSettings> TriangleSortSettings; // 0x38
	char bDisableCompressions : 1; // 0x48
	char bHasBeenSimplified : 1; // 0x48
	TArray<FBoneToRemove> BonesToRemove; // 0x4c
};

struct FManagedValueSaveSlot {
	FString OwningMcpId; // 0x0
	FString SaveSlot; // 0x10
	TArray<FManagedValue> Values; // 0x20
};

struct FWeightmapLayerAllocationInfo {
	FName LayerName; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FWeaponDOF {
	char IsActive : 1; // 0x0
	EDOFType DOFType; // 0x4
	float Falloff; // 0x8
	float BlurKernelSize; // 0xc
	EFocusType FocusType; // 0x10
	float FocusInnerRadius; // 0x14
	float FocusDistance; // 0x18
	float MaxNearBlurAmount; // 0x1c
	float MinBlurAmount; // 0x20
	float MaxFarBlurAmount; // 0x24
};

struct FSynchGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty MasterNode; // 0x10
	FName GroupName; // 0x18
	char bFireSlaveNotifies : 1; // 0x20
	float RateScale; // 0x24
};

struct FTgQueuedInstantFireShot {
	int32_t FireRequestId; // 0x0
	FAimData Aim; // 0x4
	FImpactToValidate PrimaryImpact; // 0x38
	TArray<FImpactToValidate> Impacts; // 0xc0
	int32_t AmmoToConsume; // 0xd0
	float AccuracyRandomValue1; // 0xd4
	float AccuracyRandomValue2; // 0xd8
	float AccuracyValue; // 0xdc
};

struct FPComPerformanceCaptureStat {
	FName StatName; // 0x0
	FDouble StatValue; // 0x8
};

struct FUICOMBATENTRY {
	float fTimer; // 0x0
	ObjectProperty pObj; // 0x4
};

struct FLobbySMAMeterBus {
	Fdword dwBusID; // 0x0
	LobbyMeterBusIntent eIntent; // 0x4
	ObjectProperty akOnStop; // 0x8
};

struct FRootMotionCurve {
	FName AnimName; // 0x0
	FInterpCurveVector Curve; // 0x8
	float MaxCurveTime; // 0x1c
};

struct FECustomSprayData {
	int32_t nIndex; // 0x0
	ObjectProperty SprayMIC; // 0x4
	ObjectProperty SprayFx; // 0xc
};

struct FCurveEdEntry {
	ObjectProperty CurveObject; // 0x0
	FColor CurveColor; // 0x8
	FString CurveName; // 0xc
	int32_t bHideCurve; // 0x1c
	int32_t bColorCurve; // 0x20
	int32_t bFloatingPointColorCurve; // 0x24
	int32_t bClamp; // 0x28
	float ClampLow; // 0x2c
	float ClampHigh; // 0x30
};

struct FFColorVertexBuffer_Mirror {
	FPointer VfTable; // 0x0
	FPointer VertexData; // 0x8
	int32_t Data; // 0x10
	int32_t Stride; // 0x14
	int32_t NumVertices; // 0x18
};

struct FClientMeshBeaconConnection {
	FUniqueNetId PlayerNetId; // 0x0
	float ElapsedHeartbeatTime; // 0x8
	FPointer Socket; // 0xc
	char bConnectionAccepted : 1; // 0x14
	FClientConnectionBandwidthTestData BandwidthTest; // 0x18
	ENATType NatType; // 0x40
	char bCanHostVs : 1; // 0x44
	float GoodHostRatio; // 0x48
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0x4c
	int32_t MinutesSinceLastTest; // 0x5c
};

struct FGameTipInfo {
	int32_t nTipId; // 0x0
	int32_t nPriority; // 0x4
	char bSelfSuppress : 1; // 0x8
	float fDuration; // 0xc
	float fRemainingTime; // 0x10
	float fTimeOnTop; // 0x14
	float fMinSecondsBetweenVisible; // 0x18
	char bRemoveOnTimer : 1; // 0x1c
	char bDismissed : 1; // 0x1c
	char bWaitForDismiss : 1; // 0x1c
	char bDisplayAlways : 1; // 0x1c
	char bPopupDisplay : 1; // 0x1c
	ObjectProperty PopupSoundCue; // 0x20
	ObjectProperty HelpTipActor; // 0x28
	int32_t PropertyId; // 0x30
};

struct FSelectedMenuItem {
	int32_t Index; // 0x0
	float Offset; // 0x4
	char bEndOfList : 1; // 0x8
};

struct FOnlineContent {
	EOnlineContentType ContentType; // 0x0
	char UserIndex; // 0x1
	char bIsCorrupt : 1; // 0x4
	int32_t DeviceID; // 0x8
	int32_t LicenseMask; // 0xc
	FString FriendlyName; // 0x10
	FString Filename; // 0x20
	FString ContentPath; // 0x30
	TArray<FString> ContentPackages; // 0x40
	TArray<FString> ContentFiles; // 0x50
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
	FString CurrencyType; // 0x40
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FOnlineProfile {
	FString UserId; // 0x0
	EOnlineAccountTier AccountTier; // 0x10
	int32_t Gamerscore; // 0x14
	FString ApplicationDisplayName; // 0x18
	FString GameDisplayName; // 0x28
	FString ApplicationDisplayPictureResizeURL; // 0x38
	FString GameDisplayPictureResizeURL; // 0x48
};

struct FRBSplitInfo {
	char bFixSize : 1; // 0x0
	float FixedSize; // 0x4
	float ExpandRatio; // 0x8
	FName SplitName; // 0xc
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FActiveMorph {
	ObjectProperty Target; // 0x0
	float Weight; // 0x8
};

struct FLootCrateInfo {
	int32_t nDeployableId; // 0x0
	int32_t nTable; // 0x4
	char bFirst : 1; // 0x8
	float fChance; // 0xc
};

struct FLerpToInstruction {
	FString Id; // 0x0
	float Time; // 0x10
	FString LerpToId; // 0x14
};

struct FParticleEmitterInstanceMotionBlurInfo {
	FMap_Mirror ParticleMBInfoMap; // 0x0
};

struct FMICStateParams {
	FName nmStateName; // 0x0
	TArray<FStateScalarParameterValue> ScalarParameterValues; // 0x8
	TArray<FStateVectorParameterValue> VectorParameterValues; // 0x18
};

struct FFooterOption {
	int32_t nOption; // 0x0
	ObjectProperty pObj; // 0x4
	ObjectProperty pKey; // 0xc
	ObjectProperty pKeyTF; // 0x14
	ObjectProperty pGlow; // 0x1c
	ObjectProperty pGlowTF; // 0x24
	ObjectProperty pTitle; // 0x2c
	ObjectProperty pTitleTF; // 0x34
	ObjectProperty pFrame; // 0x3c
};

struct FExposedLink {
	FCoverReference TargetActor; // 0x0
	char ExposedScale; // 0x1c
};

struct FParameterValueOverTime {
	FGuid ExpressionGUID; // 0x0
	float StartTime; // 0x10
	FName ParameterName; // 0x14
	char bLoop : 1; // 0x1c
	char bAutoActivate : 1; // 0x1c
	float CycleTime; // 0x20
	char bNormalizeTime : 1; // 0x24
	float OffsetTime; // 0x28
	char bOffsetFromEnd : 1; // 0x2c
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FOnlineGameSearchParameter {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchComparisonType ComparisonType; // 0xd
};

struct FLightmassDebugOptions {
	char bDebugMode : 1; // 0x0
	char bStatsEnabled : 1; // 0x0
	char bGatherBSPSurfacesAcrossComponents : 1; // 0x0
	float CoplanarTolerance; // 0x4
	char bUseDeterministicLighting : 1; // 0x8
	char bUseImmediateImport : 1; // 0x8
	char bImmediateProcessMappings : 1; // 0x8
	char bSortMappings : 1; // 0x8
	char bDumpBinaryFiles : 1; // 0x8
	char bDebugMaterials : 1; // 0x8
	char bPadMappings : 1; // 0x8
	char bDebugPaddings : 1; // 0x8
	char bOnlyCalcDebugTexelMappings : 0; // 0x8
	char bUseRandomColors : 0; // 0x8
	char bColorBordersGreen : 0; // 0x8
	char bColorByExecutionTime : 0; // 0x8
	float ExecutionTimeDivisor; // 0xc
	char bInitialized : 1; // 0x10
};

struct FSpeedTreeStaticLight {
	FGuid Guid; // 0x0
	ObjectProperty BranchShadowMap; // 0x10
	ObjectProperty FrondShadowMap; // 0x18
	ObjectProperty LeafMeshShadowMap; // 0x20
	ObjectProperty LeafCardShadowMap; // 0x28
	ObjectProperty BillboardShadowMap; // 0x30
};

struct FExitInfo {
	ObjectProperty Exit; // 0x0
	float Rating; // 0x8
	char bEnemyHasLOS : 1; // 0xc
	char bIsOpenSpot : 1; // 0xc
};

struct FHealingInfo {
	ObjectProperty HealerPawn; // 0x0
	float HealAmount; // 0x8
	float TimeStamp; // 0xc
};

struct FPostProcessSettings {
	char bOverride_EnableBloom : 1; // 0x0
	char bOverride_EnableDOF : 1; // 0x0
	char bOverride_EnableMotionBlur : 1; // 0x0
	char bOverride_EnableSceneEffect : 1; // 0x0
	char bOverride_AllowAmbientOcclusion : 1; // 0x0
	char bOverride_OverrideRimShaderColor : 1; // 0x0
	char bOverride_Bloom_Scale : 1; // 0x0
	char bOverride_Bloom_Threshold : 1; // 0x0
	char bOverride_Bloom_Tint : 0; // 0x0
	char bOverride_Bloom_ScreenBlendThreshold : 0; // 0x0
	char bOverride_Bloom_InterpolationDuration : 0; // 0x0
	char bOverride_DOF_FalloffExponent : 0; // 0x0
	char bOverride_DOF_BlurKernelSize : 0; // 0x0
	char bOverride_DOF_BlurBloomKernelSize : 0; // 0x0
	char bOverride_DOF_MaxNearBlurAmount : 0; // 0x0
	char bOverride_DOF_MinBlurAmount : 0; // 0x0
	char bOverride_DOF_MaxFarBlurAmount : 0; // 0x0
	char bOverride_DOF_FocusType : 0; // 0x0
	char bOverride_DOF_FocusInnerRadius : 0; // 0x0
	char bOverride_DOF_FocusDistance : 0; // 0x0
	char bOverride_DOF_FocusPosition : 0; // 0x0
	char bOverride_DOF_InterpolationDuration : 0; // 0x0
	char bOverride_DOF_BokehTexture : 0; // 0x0
	char bOverride_MotionBlur_MaxVelocity : 0; // 0x0
	char bOverride_MotionBlur_Amount : 0; // 0x0
	char bOverride_MotionBlur_FullMotionBlur : 0; // 0x0
	char bOverride_MotionBlur_CameraRotationThreshold : 0; // 0x0
	char bOverride_MotionBlur_CameraTranslationThreshold : 0; // 0x0
	char bOverride_MotionBlur_InterpolationDuration : 0; // 0x0
	char bOverride_Scene_Desaturation : 0; // 0x0
	char bOverride_Scene_Colorize : 0; // 0x0
	char bOverride_Scene_TonemapperScale : 0; // 0x0
	char bOverride_Scene_ImageGrainScale : 1; // 0x4
	char bOverride_Scene_HighLights : 1; // 0x4
	char bOverride_Scene_MidTones : 1; // 0x4
	char bOverride_Scene_Shadows : 1; // 0x4
	char bOverride_Scene_InterpolationDuration : 1; // 0x4
	char bOverride_Scene_ColorGradingLUT : 1; // 0x4
	char bOverride_RimShader_Color : 1; // 0x4
	char bOverride_RimShader_InterpolationDuration : 1; // 0x4
	char bOverride_MobileColorGrading : 0; // 0x4
	char bEnableBloom : 0; // 0x4
	char bEnableDOF : 0; // 0x4
	char bEnableMotionBlur : 0; // 0x4
	char bEnableSceneEffect : 0; // 0x4
	char bAllowAmbientOcclusion : 0; // 0x4
	char bOverrideRimShaderColor : 0; // 0x4
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
	char MotionBlur_FullMotionBlur : 1; // 0x60
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
	ObjectProperty ColorGrading_LookupTable; // 0xc4
	FLUTBlender ColorGradingLUT; // 0xcc
	FMobileColorGradingParams MobileColorGrading; // 0xf0
	FMobilePostProcessSettings MobilePostProcess; // 0x12c
	char Death_Enable : 1; // 0x164
	float Death_DesatAlpha; // 0x168
	char Hit_Enable : 1; // 0x16c
	float Hit_FadeAlpha; // 0x170
	char ColorBlind_Enable : 1; // 0x174
	int32_t ColorBlind_Mode; // 0x178
	float ColorBlind_Intensity; // 0x17c
};

struct FMcpCompressMessageRequest {
	TArray<char> SourceBuffer; // 0x0
	TArray<char> DestBuffer; // 0x10
	int32_t OutCompressedSize; // 0x20
	ObjectProperty Request; // 0x24
	FPointer CompressionWorker; // 0x2c
};

struct FUIPingOverlay {
	char bOnEdge : 1; // 0x0
	char bActive : 1; // 0x0
	int32_t nDepth; // 0x4
	int32_t nPlayerId; // 0x8
	FVector vWorldLocation; // 0xc
	FVector vScreenLocation; // 0x18
	ObjectProperty pClip; // 0x24
	ObjectProperty pIcon; // 0x2c
	ObjectProperty pPointer; // 0x34
	ObjectProperty pDistance; // 0x3c
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FGameResourceDataProvider {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	char bExpandProviders : 1; // 0x18
	UUIResourceDataProvider* ProviderClass; // 0x1c
};

struct FMusicTrackStruct {
	ObjectProperty TheSoundCue; // 0x0
	char bAutoPlay : 1; // 0x8
	char bPersistentAcrossLevels : 1; // 0x8
	float FadeInTime; // 0xc
	float FadeInVolumeLevel; // 0x10
	float FadeOutTime; // 0x14
	float FadeOutVolumeLevel; // 0x18
	FString MP3Filename; // 0x1c
};

struct FIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FSettingsPropertyPropertyMetaData {
	int32_t Id; // 0x0
	FName Name; // 0x4
	FString ColumnHeaderText; // 0xc
	EPropertyValueMappingType MappingType; // 0x1c
	TArray<FIdToStringMapping> ValueMappings; // 0x20
	TArray<FSettingsData> PredefinedValues; // 0x30
	float MinVal; // 0x40
	float MaxVal; // 0x44
	float RangeIncrement; // 0x48
};

struct FOnlineGameSearchResult {
	ObjectProperty GameSettings; // 0x0
	FPointer PlatformData; // 0x8
};

struct FDeferredAnimNotifyTickInformation {
	ObjectProperty Notify; // 0x0
	float CurrentTime; // 0x8
	float TimeStep; // 0xc
	float TotalDuration; // 0x10
};

struct FSetSaveDataCallbackStruct {
	int32_t SlotIndex; // 0x0
	DelegateProperty Callback; // 0x4
};

struct FActorReference {
	ObjectProperty Actor; // 0x0
	FGuid Guid; // 0x8
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
	FName AnimSeqName; // 0x18
	FVector Location; // 0x20
	FRotator Rotation; // 0x2c
	ObjectProperty PawnInst; // 0x38
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x14
};

struct FUserAccountInfo {
	FString DateOfBirth; // 0x0
	FString Email; // 0x10
	FString FirstName; // 0x20
	FString LastName; // 0x30
	FString Gamertag; // 0x40
};

struct FLOCALPROPERTY {
	int32_t nPropId; // 0x0
	float fValue; // 0x4
};

struct FMaterialReferenceList {
	ObjectProperty TargetMaterial; // 0x0
	TArray<FPrimitiveMaterialRef> AffectedMaterialRefs; // 0x8
	TArray<FPostProcessMaterialRef> AffectedPPChainMaterialRefs; // 0x18
};

struct FFontParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty FontValue; // 0x30
	int32_t FontPage; // 0x38
};

struct FOnlineStatusMapping {
	int32_t StatusId; // 0x0
	FString StatusString; // 0x4
};

struct FTPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
	FVector2D HUDOffset; // 0x1c
};

struct FWallSpawnInfo {
	char bIsValidLocation : 1; // 0x0
	FVector vSpawnLocation; // 0x4
};

struct FHeadTrackingKey {
	float Time; // 0x0
	EHeadTrackingAction Action; // 0x4
};

struct FAimAssistTargetWeight {
	TScriptInterface<Class> Target; // 0x0
	float Weight; // 0x10
	float horizAssistVal; // 0x14
	float vertAssistVal; // 0x18
	float lastUpdateTimestamp; // 0x1c
};

struct FBonePair {
	FName Bones[0x2]; // 0x0
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	FPointer RenderInfo; // 0x40
	char bSkipCloseAndParallelChecks : 1; // 0x48
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0xc
};

struct FUIDisplayData {
	char eType; // 0x0
	ObjectProperty pObj; // 0x4
};

struct FGFxObjectPoolEntry {
	char bActive : 1; // 0x0
	FString sSymbolName; // 0x4
	char byTypeId; // 0x14
	UGFxObject* pType; // 0x18
	ObjectProperty pObj; // 0x20
};

struct FClientConnectionRequest {
	FUniqueNetId PlayerNetId; // 0x0
	ENATType NatType; // 0x8
	char bCanHostVs : 1; // 0xc
	float GoodHostRatio; // 0x10
	TArray<FConnectionBandwidthStats> BandwidthHistory; // 0x14
	int32_t MinutesSinceLastTest; // 0x24
};

struct FKSphylElem {
	FMatrix TM; // 0x0
	float Radius; // 0x40
	float Length; // 0x44
	char bNoRBCollision : 1; // 0x48
	char bPerPolyShape : 1; // 0x48
};

struct FTgKeyBind {
	FPointer pCommand; // 0x0
	char bOverrides : 1; // 0x8
	TArray<FString> sKeys; // 0xc
};

struct FSocialPostImageInfo {
	FSocialPostImageFlags Flags; // 0x0
	FString MessageText; // 0x4
	FString TitleText; // 0x14
	FString PictureCaption; // 0x24
	FString PictureDescription; // 0x34
};

struct FPComPipViewDesc {
	FName ViewName; // 0x0
	FVector ViewLocation; // 0x8
	FRotator ViewRotation; // 0x14
	FBox Viewport; // 0x20
	ObjectProperty PostProcessChain; // 0x3c
	FPostProcessSettings PostProcessSettings; // 0x44
	float FOV; // 0x1c4
	FColor ClearColor; // 0x1c8
	char bDebugRenderTranslucent : 1; // 0x1cc
	char bAlwaysRender : 1; // 0x1cc
	FDouble RequestRenderTime; // 0x1d0
	FDouble LastRenderedTime; // 0x1d8
	int32_t NumFramesSinceRender; // 0x1e0
};

struct FPlatformInterfaceDelegateResult {
	char bSuccessful : 1; // 0x0
	FPlatformInterfaceData Data; // 0x4
};

struct FParticleSystemLOD {
	char bLit : 1; // 0x0
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FAttenuationGroup {
	FName GroupName; // 0x0
	float AttenuationDistance; // 0x8
};

struct FChampionEntry {
	int32_t m_nId; // 0x0
	float m_fLastDeltaTime; // 0x4
};

struct FRenderElementInfo {
	char bIsDragItem : 1; // 0x0
	int32_t Index; // 0x4
};

struct FDataField {
	FString FieldName; // 0x0
	FASValue Value; // 0x10
	FASValue Last; // 0x30
	char bDirty : 1; // 0x50
};

struct FSocialPostImageFlags {
	char bIsUserGeneratedImage : 1; // 0x0
	char bIsGameGeneratedImage : 1; // 0x0
	char bIsAchievementImage : 1; // 0x0
	char bIsMediaImage : 1; // 0x0
};

struct FPlayOfTheGameInfo {
	ObjectProperty PRI; // 0x0
	float Rating; // 0x8
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	ObjectProperty InterfaceObject; // 0x8
};

struct FDeviceNodeCameraAnimation {
	int32_t ChildIndex; // 0x0
	ObjectProperty CameraAnim; // 0x4
	ObjectProperty CameraAnimInstance; // 0xc
	float Rate; // 0x14
	float Scale; // 0x18
	float BlendInTime; // 0x1c
	float BlendOutTime; // 0x20
	char bLoop : 1; // 0x24
	char bRandomStartTime : 1; // 0x24
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FIndirectArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FConsoleMessage {
	FString Text; // 0x0
	FColor TextColor; // 0x10
	float MessageLife; // 0x14
	ObjectProperty PRI; // 0x18
};

struct FMcpUserCloudFileInfo : FEmsFile {
	FString CreationDate; // 0x34
	FString LastUpdateDate; // 0x44
	FString CompressionType; // 0x54
};

struct FForceFeedbackPlayingInfo {
	ObjectProperty WaveForm; // 0x0
	ObjectProperty Instigator; // 0x8
	int32_t CurrentSample; // 0x10
	float ElapsedTime; // 0x14
	float ScaleDuration; // 0x18
	float ScaleMagnitude; // 0x1c
};

struct FsSimProjectileFireInfo {
	int32_t nOwnerFireModeId; // 0x0
	FVector vLocation; // 0x4
	FVector vVelocity; // 0x10
	FVector vDirectionMunged; // 0x1c
	int32_t nActorID; // 0x28
	int32_t nClientFireRequestId; // 0x2c
	CMTargetType ActorType; // 0x30
	float fGeneric1; // 0x34
	float fGeneric2; // 0x38
};

struct FPBMaterialParam {
	FName ParamName; // 0x0
	FLinearColor Color; // 0x8
};

struct FGameplayEventMetaData {
	int32_t EventID; // 0x0
	FName EventName; // 0x4
	FGameStatGroup StatGroup; // 0xc
	int32_t EventDataType; // 0x14
};

struct FDilationData {
	float fValue; // 0x0
	FString sName; // 0x4
};

struct FOnlineCrossTitleContent : FOnlineContent {
	int32_t TitleId; // 0x60
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalForceVector; // 0x10
	FVector TotalFrictionForceVector; // 0x1c
};

struct FSeqVarLink {
	USequenceVariable* ExpectedType; // 0x0
	TArray<ObjectProperty> LinkedVariables; // 0x8
	FString LinkDesc; // 0x18
	FName LinkVar; // 0x28
	FName PropertyName; // 0x30
	char bWriteable : 1; // 0x38
	char bSequenceNeverReadsOnlyWritesToThisVar : 1; // 0x38
	char bModifiesLinkedObject : 1; // 0x38
	char bHidden : 1; // 0x38
	int32_t MinVars; // 0x3c
	int32_t MaxVars; // 0x40
	int32_t DrawX; // 0x44
	ObjectProperty CachedProperty; // 0x48
	char bAllowAnyType : 1; // 0x50
	char bMoving : 1; // 0x50
	char bClampedMax : 1; // 0x50
	char bClampedMin : 1; // 0x50
};

struct FCommunityContentFile {
	int32_t ContentId; // 0x0
	FString RemoteContentPath; // 0x4
	EOnlineFileType ContentType; // 0x14
	int32_t FileSize; // 0x18
	FUniqueNetId Owner; // 0x1c
	int32_t DownloadCount; // 0x24
	float AverageRating; // 0x28
	int32_t RatingCount; // 0x2c
	int32_t LastRatingGiven; // 0x30
	FString LocalFilePath; // 0x34
};

struct Fdword {
	int32_t A; // 0x0
};

struct FPlayerDataStoreGroup {
	ObjectProperty PlayerOwner; // 0x0
	TArray<ObjectProperty> DataStores; // 0x8
};

struct FChatterEvent {
	int32_t nChatterTypeId; // 0x0
	int32_t nAkEventSuffixId; // 0x4
};

struct FMolotovTriangleInfo {
	int32_t index1; // 0x0
	int32_t index2; // 0x4
	int32_t index3; // 0x8
	int32_t neighborIndex1; // 0xc
	int32_t neighborIndex2; // 0x10
	int32_t neighborIndex3; // 0x14
	int32_t nRank; // 0x18
	float fHeatLevel; // 0x1c
	FVector vTriCenter; // 0x20
	FVector vCenterDirection; // 0x2c
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FAchievementMediaAsset {
	FString AssetName; // 0x0
	EAchievementMediaAssetType AssetType; // 0x10
	FString AssetURL; // 0x14
};

struct FRoyaleRoundInfo {
	float PreConvergeTime; // 0x0
	float ConvergeTime; // 0x4
	float TargetConvergeRadius; // 0x8
};

struct FDragHistoryData {
	float TouchTime; // 0x0
	float TouchCoord; // 0x4
};

struct FMarketplaceProductImage {
	FString Id; // 0x0
	int32_t Height; // 0x10
	int32_t Width; // 0x14
	FString Purpose; // 0x18
	TArray<FString> Purposes; // 0x28
	FString ResizeURL; // 0x38
};

struct FTgTimerData {
	int32_t nIndex; // 0x0
	char byTimer; // 0x4
	float fStartTime; // 0x8
	float fRemaining; // 0xc
	char bRepeat : 1; // 0x10
	char bPausedByGame : 1; // 0x10
	float Rate; // 0x14
	FTGT_REG_LINK CallbackRegistry; // 0x18
};

struct FSkelControlGateChild {
	ObjectProperty SkelControl; // 0x0
	float DrawY; // 0x8
};

struct FTeleportParams {
	FVector vTargetLocation; // 0x0
	FRotator rTargetRotation; // 0xc
	char bPlayFx : 1; // 0x18
	char bDoBackTrace : 1; // 0x18
	FVector vBackTraceDir; // 0x1c
	float fBackTraceIncrement; // 0x28
	float fBackTraceMaxDist; // 0x2c
	char bLookForGround : 1; // 0x30
	float fGroundSearchHeight; // 0x34
	float fGroundSearchRayRadius; // 0x38
	char bCheckLineOfSight : 1; // 0x3c
	float fMovementCorrectionDisableTime; // 0x40
	int32_t nTeleportEnterState; // 0x44
	int32_t nTeleportExitState; // 0x48
	char bFakeTeleport : 1; // 0x4c
};

struct FPendingPlayerStats {
	FUniqueNetId Player; // 0x0
	FString PlayerName; // 0x8
	FString StatGuid; // 0x18
	TArray<FPlayerStat> Stats; // 0x28
	FOnlinePlayerScore Score; // 0x38
	FString Place; // 0x48
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	ObjectProperty Sound; // 0xc
};

struct FAccoladeStruct {
	int32_t AccoladeId; // 0x0
	int32_t ActivityId; // 0x4
	int32_t Type; // 0x8
	int32_t Value; // 0xc
};

struct FTextureParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0xc
};

struct FUIPlayerOverlay : FUITargetableOverlay {
	int32_t nMarked; // 0xa4
	int32_t nStreak; // 0xa8
	ObjectProperty pMarked; // 0xac
	ObjectProperty pStreak; // 0xb4
	ObjectProperty pRespawnMask; // 0xbc
	ObjectProperty pChickenIcon; // 0xc4
	ObjectProperty pClassIcon; // 0xcc
	float fHideTimer; // 0xd4
	char bInParty : 1; // 0xd8
	EPlayerIconState eIconState; // 0xdc
	char bShowPlayerName : 1; // 0xe0
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
	FString Chars; // 0x1c
	FString UnicodeRange; // 0x2c
	FString CharsFilePath; // 0x3c
	FString CharsFileWildcard; // 0x4c
	char bCreatePrintableOnly : 1; // 0x5c
	char bIncludeASCIIRange : 1; // 0x5c
	FLinearColor ForegroundColor; // 0x60
	char bEnableDropShadow : 1; // 0x70
	int32_t TexturePageWidth; // 0x74
	int32_t TexturePageMaxHeight; // 0x78
	int32_t XPadding; // 0x7c
	int32_t YPadding; // 0x80
	int32_t ExtendBoxTop; // 0x84
	int32_t ExtendBoxBottom; // 0x88
	int32_t ExtendBoxRight; // 0x8c
	int32_t ExtendBoxLeft; // 0x90
	char bEnableLegacyMode : 1; // 0x94
	int32_t Kerning; // 0x98
	char bUseDistanceFieldAlpha : 1; // 0x9c
	int32_t DistanceFieldScaleFactor; // 0xa0
	float DistanceFieldScanRadiusScale; // 0xa4
};

struct FInlinePointerArray_Mirror {
	FPointer InlineData; // 0x0
	FArray_Mirror SecondaryData; // 0x8
};

struct FOverlayData {
	int32_t nId; // 0x0
	char bInit : 1; // 0x4
	float fRoll; // 0x8
	float fScale; // 0xc
	float fTimer; // 0x10
	float fAnimX; // 0x14
	float fAnimY; // 0x18
	float fStartX; // 0x1c
	float fStartY; // 0x20
	FVector vWorldLoc; // 0x24
	FVector vScreenLoc; // 0x30
	ObjectProperty pClip; // 0x3c
};

struct FResurrectionInfo {
	float fDuration; // 0x0
	int32_t nResurrectionOwner; // 0x4
};

struct FQueryMappingRequest {
	FString ExternalType; // 0x0
	ObjectProperty Request; // 0x10
};

struct FConfiguredGameSetting {
	int32_t GameSettingId; // 0x0
	FString GameSettingsClassName; // 0x4
	FString URL; // 0x14
	ObjectProperty GameSettings; // 0x24
};

struct FPreviewAnimSetsStruct {
	FName DisplayName; // 0x0
	TArray<ObjectProperty> PreviewAnimSets; // 0x8
};

struct FMcpMessageList {
	FString ToUniqueUserId; // 0x0
	TArray<FMcpMessage> Messages; // 0x10
};

struct FRawDistributionVector : FRawDistribution {
	ComponentProperty Distribution; // 0x1c
};

struct FFireLinkItem {
	ECoverType SrcType; // 0x0
	ECoverAction SrcAction; // 0x1
	ECoverType DestType; // 0x2
	ECoverAction DestAction; // 0x3
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FDeathInfo {
	char bDead : 1; // 0x0
	FVector Momentum; // 0x4
	UDamageType* dmgType; // 0x10
	FVector HitLoc; // 0x18
};

struct FTgQueuedRefire {
	int32_t ClientFireRequestId; // 0x0
	char DesiredFireMode; // 0x4
	float AttackSpeedPercChange; // 0x8
	FAimData Aim; // 0xc
};

struct FAimOffsetProfile {
	FName ProfileName; // 0x0
	FVector2D HorizontalRange; // 0x8
	FVector2D VerticalRange; // 0x10
	TArray<FAimComponent> AimComponents; // 0x18
	FVector2D AdditionalAimOffset; // 0x28
	FName AnimName_LU; // 0x30
	FName AnimName_LC; // 0x38
	FName AnimName_LD; // 0x40
	FName AnimName_CU; // 0x48
	FName AnimName_CC; // 0x50
	FName AnimName_CD; // 0x58
	FName AnimName_RU; // 0x60
	FName AnimName_RC; // 0x68
	FName AnimName_RD; // 0x70
};

struct FManualCoverTypeInfo {
	char SlotIndex; // 0x0
	ECoverType ManualCoverType; // 0x1
};

struct FPresenceDoTInstanceInfo {
	float fTimestamp; // 0x0
	float fDamageValue; // 0x4
};

struct FTgDeployableFactoryGroupList {
	int32_t GroupNum; // 0x0
	TArray<ObjectProperty> m_GroupFactories; // 0x4
	int32_t SpawnNum; // 0x14
};

struct FHudLocalizedMessage {
	ULocalMessage* Message; // 0x0
	FString StringMessage; // 0x8
	int32_t Switch; // 0x18
	float EndOfLife; // 0x1c
	float Lifetime; // 0x20
	float PosY; // 0x24
	FColor DrawColor; // 0x28
	int32_t FontSize; // 0x2c
	ObjectProperty StringFont; // 0x30
	float DX; // 0x38
	float DY; // 0x3c
	char Drawn : 1; // 0x40
	int32_t Count; // 0x44
	ObjectProperty OptionalObject; // 0x48
};

struct FSkelMeshActorControlTarget {
	FName ControlName; // 0x0
	ObjectProperty TargetActor; // 0x8
};

struct FDeckCardData {
	int32_t nDeviceId; // 0x0
	int32_t nPlayerId; // 0x4
};

struct FUIDataValue {
	UIID eType; // 0x0
	char bDirty : 1; // 0x4
	float fValue; // 0x8
	FString sValue; // 0xc
};

struct FSurrenderData {
	float fLastSurrenderTime; // 0x0
	TArray<FSurrenderVote> SurrenderVotes; // 0x4
	int32_t nSurrenderTotal; // 0x14
	int32_t nSurrenderNeeded; // 0x18
	int32_t nSurrenderVoteCount; // 0x1c
	int32_t nNoSurrenderVoteCount; // 0x20
};

struct FPawnClassEventData {
	FName PawnClassName; // 0x0
};

struct FUIMenuInputMap {
	FName FieldName; // 0x0
	FName Set; // 0x8
	FString MappedText; // 0x10
};

struct FSetAndLerpInstruction : FLerpToInstruction {
	FString LerpFromId; // 0x24
};

struct FSkelControlModifier {
	FName SkelControlName; // 0x0
	TArray<FTimeModifier> Modifiers; // 0x8
};

struct FEffectListEntry {
	int32_t nEffectGroupID; // 0x0
	char nInstanceCount; // 0x4
	char byNumStacks; // 0x5
	float fInitTimeRemaining; // 0x8
	int32_t nExtraInfo; // 0xc
};

struct FNotificationMessageInfo {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FLightValues {
	float StartTime; // 0x0
	float Radius; // 0x4
	float Brightness; // 0x8
	FColor LightColor; // 0xc
	FColor EnemyLightColor; // 0x10
	FColor LocalLightColor; // 0x14
};

struct FInputKeyEvent {
	FName nmKey; // 0x0
	EInputEvent eEvent; // 0x8
	FString sDisplayName; // 0xc
};

struct FCrowdSpawnerPlayerInfo {
	FVector ViewLocation; // 0x0
	FRotator ViewRotation; // 0xc
	FVector PredictLocation; // 0x18
	ObjectProperty PC; // 0x24
};

struct FMorphNodeConn {
	TArray<ObjectProperty> ChildNodes; // 0x0
	FName ConnName; // 0x10
	int32_t DrawY; // 0x18
};

struct FDiminishedEffectInfo {
	float fMaxPosValue; // 0x0
	float fPosTotal; // 0x4
	float fMaxNegValue; // 0x8
	float fNegTotal; // 0xc
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
	char bFormExtendedStructures : 1; // 0x78
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
	char UseDynamicChunksGroupsMask : 1; // 0xe4
	ERBCollisionChannel DynamicChunksChannel; // 0xe8
	FRBCollisionChannelContainer DynamicChunksCollideWithChannels; // 0xec
};

struct Fm_PhaseTransitionAnimSet {
	int32_t m_TransitionToPhase; // 0x0
	FName m_TransitionAnimName; // 0x4
};

struct FSMMaterialSetterDatum {
	int32_t MaterialIndex; // 0x0
	ObjectProperty TheMaterial; // 0x4
};

struct FInteriorSettings {
	char bIsWorldInfo : 1; // 0x0
	float ExteriorVolume; // 0x4
	float ExteriorTime; // 0x8
	float ExteriorLPF; // 0xc
	float ExteriorLPFTime; // 0x10
	float InteriorVolume; // 0x14
	float InteriorTime; // 0x18
	float InteriorLPF; // 0x1c
	float InteriorLPFTime; // 0x20
	float InsulationDistanceMin; // 0x24
	float InsulationDistanceMax; // 0x28
	float InsulationTime; // 0x2c
};

struct FTG_HUD_INFO {
	char bEnemy : 1; // 0x0
	char bShowNameplate : 1; // 0x0
	char bShowOverlays : 1; // 0x0
	char bIsTargeted : 1; // 0x0
	char bLocalPlayerHasLOS : 1; // 0x0
};

struct FWaterFxData {
	int32_t nEnterFxId; // 0x0
	ObjectProperty EnterFx; // 0x4
	int32_t nWadeFxId; // 0xc
	ObjectProperty WadeFx; // 0x10
	int32_t nExitFxId; // 0x18
	ObjectProperty ExitFx; // 0x1c
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
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

struct FNavigationOctreeObject {
	FBox BoundingBox; // 0x0
	FVector BoxCenter; // 0x1c
	FPointer OctreeNode; // 0x28
	ObjectProperty Owner; // 0x30
	char OwnerType; // 0x38
};

struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x34
	float ConstantX; // 0x38
	float ConstantY; // 0x3c
};

struct FTG_LAST_PURCHASE {
	int32_t nItemId; // 0x0
	int32_t nCount; // 0x4
};

struct FDeviceTimer {
	int32_t nDeviceId; // 0x0
	ObjectProperty pTimer; // 0x4
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x4
	TArray<FName> PackagesToLoad; // 0x14
	TArray<ObjectProperty> LoadedObjects; // 0x24
};

struct FUIRangeData {
	float CurrentValue; // 0x0
	float MinValue; // 0x4
	float MaxValue; // 0x8
	float NudgeValue; // 0xc
	char bIntRange : 1; // 0x10
};

struct FAgentArchetypeInfo {
	ObjectProperty AgentArchetype; // 0x0
	float FrequencyModifier; // 0x8
	int32_t MaxAllowed; // 0xc
	int32_t CurrSpawned; // 0x10
	TArray<ObjectProperty> GroupMembers; // 0x14
};

struct FPComPerformanceCaptureStatsPerSkin {
	FString CharacterName; // 0x0
	FString SkinName; // 0x10
	FString SkeletalMeshPathName; // 0x20
	FString SkeletalMeshPathNameHead; // 0x30
	FString SkeletalMeshPathNameBody; // 0x40
	FString SkeletalMeshPathNameWeapon; // 0x50
	TArray<FPComPerformanceCaptureStat> Stats; // 0x60
};

struct FFoundLootGoblinInfo {
	int32_t nPawnId; // 0x0
	int32_t nCount; // 0x4
	int32_t nGoblinPawnId; // 0x8
};

struct FTgSettingsSet {
	TArray<FTgKeyBind> Keybinds; // 0x0
	FPointer CaseSet; // 0x10
};

struct FTgAbilityInfo {
	int32_t DeviceIds[0x11]; // 0x0
};

struct FWorldFractureSettings {
	float ChanceOfPhysicsChunkOverride; // 0x0
	char bEnableChanceOfPhysicsChunkOverride : 1; // 0x4
	char bLimitExplosionChunkSize : 1; // 0x4
	float MaxExplosionChunkSize; // 0x8
	char bLimitDamageChunkSize : 1; // 0xc
	float MaxDamageChunkSize; // 0x10
	int32_t MaxNumFacturedChunksToSpawnInAFrame; // 0x14
	float FractureExplosionVelScale; // 0x18
};

struct FPermissionsResultByUniqueNetId {
	FUniqueNetId User; // 0x0
	char bHasPermission : 1; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FRenderCommandFence {
	int32_t NumPendingFences; // 0x0
};

struct FCrowdSpawnInfoItem {
	ObjectProperty SeqSpawner; // 0x0
	char bSpawningActive : 1; // 0x8
	float SpawnRate; // 0xc
	int32_t SpawnNum; // 0x10
	float Remainder; // 0x14
	TArray<ObjectProperty> ActiveAgents; // 0x18
	TArray<FAgentArchetypeInfo> AgentArchetypes; // 0x28
	float AgentFrequencySum; // 0x38
	float MaxSpawnDist; // 0x3c
	float MaxSpawnDistSq; // 0x40
	float MinBehindSpawnDist; // 0x44
	float MinBehindSpawnDistSq; // 0x48
	float AgentWarmupTime; // 0x4c
	char bForceObstacleChecking : 1; // 0x50
	char bForceNavMeshPathing : 1; // 0x50
	char bEnableCrowdLightEnvironment : 1; // 0x50
	char bCastShadows : 1; // 0x50
	FLightingChannelContainer AgentLightingChannel; // 0x54
	int32_t NumAgentsToTickPerFrame; // 0x58
	int32_t LastAgentTickedIndex; // 0x5c
	TArray<ObjectProperty> PotentialSpawnPoints; // 0x60
	float SpawnPrioritizationInterval; // 0x70
	int32_t PrioritizationIndex; // 0x74
	int32_t PrioritizationUpdateIndex; // 0x78
	TArray<ObjectProperty> PrioritizedSpawnPoints; // 0x7c
	float PlayerPositionPredictionTime; // 0x8c
};

struct FTgRandomAnimInfo {
	float Chance; // 0x0
	char LoopCountMin; // 0x4
	char LoopCountMax; // 0x5
	float BlendInTime; // 0x8
	char bCanRepeat : 1; // 0xc
	char LoopCount; // 0x10
	char bCallOnAnimEndOnParent : 1; // 0x14
	char m_bChooseNewNodeOnAnimEnd : 1; // 0x14
	FVector2D m_ChildActiveTime; // 0x18
};

struct FOnHealedParams {
	ObjectProperty Healer; // 0x0
	ObjectProperty Dev; // 0x8
	ObjectProperty eg; // 0x10
	FImpactInfo Impact; // 0x18
	float fHealAmount; // 0x98
	float fHealthChange; // 0x9c
	int32_t nPropertyId; // 0xa0
	char bPlayCameraHealEffect : 1; // 0xa4
};

struct FCastingInfo {
	int32_t nWidth; // 0x0
	char bActive : 1; // 0x4
	float fPercent; // 0x8
	ObjectProperty pObj; // 0xc
	ObjectProperty pText; // 0x14
	ObjectProperty pAnim; // 0x1c
};

struct FMcpMessage {
	FString MessageId; // 0x0
	FString TitleId; // 0x10
	FString ToUniqueUserId; // 0x20
	FString FromUniqueUserId; // 0x30
	FString FromFriendlyName; // 0x40
	FString MessageType; // 0x50
	FString ValidUntil; // 0x60
	EMcpMessageCompressionType MessageCompressionType; // 0x70
};

struct FAnimBlendChild {
	FName Name; // 0x0
	ObjectProperty Anim; // 0x8
	float Weight; // 0x10
	float BlendWeight; // 0x14
	char bMirrorSkeleton : 1; // 0x18
	char bIsAdditive : 1; // 0x18
};

struct FFacebookFriend {
	FString Name; // 0x0
	FString Id; // 0x10
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

struct FPComPerformanceCaptureStatCollection {
	FName ProfileName; // 0x0
	TArray<FPComPerformanceCaptureStat> Stats; // 0x8
};

struct FUserEdgeData {
	FVector StartA; // 0x0
	FVector EndA; // 0xc
	FVector StartB; // 0x18
	FVector EndB; // 0x24
	char TraversalType; // 0x30
	float EdgeCost; // 0x34
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

struct FGameEvents {
	FMap_Mirror Events; // 0x0
};

struct FClientConnectionBandwidthTestData {
	EMeshBeaconBandwidthTestState CurrentState; // 0x0
	EMeshBeaconBandwidthTestType TestType; // 0x1
	int32_t BytesTotalNeeded; // 0x4
	int32_t BytesReceived; // 0x8
	FDouble RequestTestStartTime; // 0xc
	FDouble TestStartTime; // 0x14
	FConnectionBandwidthStats BandwidthStats; // 0x1c
};

struct FSkillLevelRawData {
	float NumDeaths; // 0x0
	float Damage; // 0x4
	float Kills; // 0x8
	float SoloKills; // 0xc
	float Assists; // 0x10
	float Healing; // 0x14
	float Credits; // 0x18
	float Killstreak; // 0x1c
	float ObjectiveTime; // 0x20
	float Shielding; // 0x24
};

struct FAnimationEndInformation {
	TArray<ObjectProperty> TreeBranchToLeaf; // 0x0
	float PlayedTime; // 0x10
	float ExcessTime; // 0x14
};

struct FShakeParams {
	EShakeParam X; // 0x0
	EShakeParam Y; // 0x1
	EShakeParam Z; // 0x2
	char Padding; // 0x3
};

struct FAdjustedFiringInstance {
	int32_t nFiringInstance; // 0x0
	int32_t nDeviceId; // 0x4
};

struct FTerrainFilteredMaterial {
	char UseNoise : 1; // 0x0
	float NoiseScale; // 0x4
	float NoisePercent; // 0x8
	FFilterLimit MinHeight; // 0xc
	FFilterLimit MaxHeight; // 0x1c
	FFilterLimit MinSlope; // 0x2c
	FFilterLimit MaxSlope; // 0x3c
	float Alpha; // 0x4c
	ObjectProperty Material; // 0x50
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FUVCoords {
	char bCustomCoords : 1; // 0x0
	float U; // 0x4
	float V; // 0x8
	float UL; // 0xc
	float VL; // 0x10
};

struct FPlaylistPopulation {
	int32_t PlaylistId; // 0x0
	int32_t WorldwideTotal; // 0x4
	int32_t RegionTotal; // 0x8
};

struct FLobbyPreviewData {
	FPointer pBot; // 0x0
	FPointer pSkin; // 0x8
	FPointer pHead; // 0x10
	FPointer pDevice; // 0x18
	FPointer pDeployable; // 0x20
	FPointer pMarker; // 0x28
	FPointer pWeaponSkin; // 0x30
	char animPose; // 0x38
	FPointer pMVPDevice; // 0x3c
	FPointer pContrailSkin; // 0x44
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FPlayerEvents {
	FGameEvents TotalEvents; // 0x0
	FWeaponEvents WeaponEvents; // 0x48
	FDamageEvents DamageAsPlayerEvents; // 0xa0
	FDamageEvents DamageAsTargetEvents; // 0xf8
	FProjectileEvents ProjectileEvents; // 0x150
	FPawnEvents PawnEvents; // 0x1a8
};

struct FMobileInputGroup {
	FString GroupName; // 0x0
	TArray<ObjectProperty> AssociatedZones; // 0x10
};

struct FUIKeyCommand {
	int32_t nMessage; // 0x0
	FString sCommand; // 0x4
};

struct FTrailSocketSamplePoint {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
};

struct FForceFaceTargetActor {
	ObjectProperty TargetActor; // 0x0
	float HeightOffset; // 0x8
	FQuat InitialQuat; // 0x10
	float InterpTime; // 0x20
	float StartTime; // 0x24
	float Duration; // 0x28
	ObjectProperty ForceRotationInstigator; // 0x2c
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FLocalTalkerSteam : FLocalTalker {
	EMuteType MuteType; // 0x8
};

struct FAchievementTitleAssociation {
	FString LocalizedTitleName; // 0x0
	int32_t TitleId; // 0x10
};

struct FEffectMeshInfo {
	ComponentProperty Mesh; // 0x0
	int32_t nMeshId; // 0x8
	FName DisplayGroup; // 0xc
	char AbsoluteTranslation : 1; // 0x14
	char AbsoluteRotation : 1; // 0x14
	char AbsoluteScale : 1; // 0x14
	char bWillSelfDestruct : 1; // 0x14
	FVector vAdditiveTranslation; // 0x18
	FRotator rAdditiveRotation; // 0x24
	float fScaleMultipler; // 0x30
};

struct FRemoteTalker {
	FUniqueNetId TalkerId; // 0x0
	float LastNotificationTime; // 0x8
	char bWasTalking : 1; // 0xc
	char bIsTalking : 1; // 0xc
	char bIsRegistered : 1; // 0xc
	float TimeSinceLastPacket; // 0x10
	float TimeSinceJoining; // 0x14
};

struct FCommunityContentMetadata {
	EOnlineFileType ContentType; // 0x0
	FString RemotePath; // 0x4
	FString DisplayName; // 0x14
};

struct FExpressionInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0xc
	int32_t Mask; // 0x1c
	int32_t MaskR; // 0x20
	int32_t MaskG; // 0x24
	int32_t MaskB; // 0x28
	int32_t MaskA; // 0x2c
	int32_t GCC64_Padding; // 0x30
};

struct FFx_AssemblyData {
	FName m_nmSocketName; // 0x0
	FName m_nmDisplayGroup; // 0x8
	int32_t m_nDisplayMode; // 0x10
	int32_t m_nSpecialFxId; // 0x14
	int32_t m_nIndex; // 0x18
	int32_t m_nEquipmentSlot; // 0x1c
	char m_bAppliesToAllModes : 1; // 0x20
	char m_bAttachToGround : 1; // 0x20
};

struct FDiminishingReturnsStackInfo {
	EDiminshingReturnsStackType StackType; // 0x0
	TArray<int32_t> DevicesApplyingThisTick; // 0x4
	TArray<float> Timestamps; // 0x14
	int32_t nStackCount; // 0x24
	float fRelevancyTime; // 0x28
};

struct FTAlphaBlend {
	float AlphaIn; // 0x0
	float AlphaOut; // 0x4
	float AlphaTarget; // 0x8
	float BlendTime; // 0xc
	float BlendTimeToGo; // 0x10
	AlphaBlendType BlendType; // 0x14
};

struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x34
	FColor Constant; // 0x38
};

struct FLocalAuthSession : FBaseAuthSession {
	int32_t SessionUID; // 0x20
};

struct FValueRequestState : FSaveSlotRequestState {
	FName ValueId; // 0x28
};

struct FGCReference {
	ObjectProperty m_object; // 0x0
	int32_t m_count; // 0x8
	int32_t m_statid; // 0xc
};

struct FParticleAttractorCollisionAction {
	ParticleAttractorActionType Type; // 0x0
	FString EventName; // 0x4
};

struct FPComPerformanceCaptureProfile {
	FName ProfileName; // 0x0
	int32_t ScalabilityBucket; // 0x8
	int32_t ResolutionX; // 0xc
	int32_t ResolutionY; // 0x10
	int32_t VsyncInterval; // 0x14
	char bFullScreen : 1; // 0x18
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FOnlineImageDownload {
	FString URL; // 0x0
	ObjectProperty HTTPRequest; // 0x10
	EOnlineImageDownloadState State; // 0x18
	char bPendingRemoval : 1; // 0x1c
	ObjectProperty Texture; // 0x20
};

struct FInventoryChangeFlags {
	char bDevice : 1; // 0x0
	char bComponent : 1; // 0x0
	char bEquipped : 1; // 0x0
	char bDeviceFailed : 1; // 0x0
};

struct FRoundMatchup {
	ObjectProperty pTaskforceA; // 0x0
	ObjectProperty pTaskforceB; // 0x8
	ObjectProperty pWinner; // 0x10
	ObjectProperty pTournamentObjective; // 0x18
	ObjectProperty pConvergeActor; // 0x20
};

struct FSpawnQueueEntry {
	float fSpawnTime; // 0x0
	int32_t nBotId; // 0x4
	int32_t nSkinId; // 0x8
	int32_t nWeaponSkinId; // 0xc
	int32_t nSpawnTableDetailId; // 0x10
	FName BehaviorTreeOverride; // 0x14
};

struct FMolotovEligibilityRecord {
	char bIsEligible : 1; // 0x0
	FVector vLocation; // 0x4
	FVector vHitNormal; // 0x10
};

struct FBuildingMatOverrides {
	TArray<ObjectProperty> MaterialOptions; // 0x0
};

struct FMolotovCenterInfo {
	int32_t ChildrenFront[0x3]; // 0x0
	int32_t ChildrenFrontLeft[0x3]; // 0xc
	int32_t ChildrenFrontRight[0x3]; // 0x18
	int32_t ChildrenBack[0x3]; // 0x24
	int32_t ChildrenBackLeft[0x3]; // 0x30
	int32_t ChildrenBackRight[0x3]; // 0x3c
};

struct FSynchronizedActorVisibilityHistory {
	FPointer State; // 0x0
	FPointer CriticalSection; // 0x8
};

struct FInterpolatingCameraInfo {
	char m_bInterpLocation : 1; // 0x0
	char m_bInterpRotation : 1; // 0x0
	char m_bInterpFOVAngle : 1; // 0x0
	FVector m_BaseLocation; // 0x4
	FVector m_TargetLocation; // 0x10
	FRotator m_BaseRotation; // 0x1c
	FRotator m_TargetRotation; // 0x28
	float m_fBaseFOVAngle; // 0x34
	float m_fTargetFOVAngle; // 0x38
	float m_fInterpSpeed; // 0x3c
};

struct FVelocityObstacleStat {
	FVector Position; // 0x0
	FVector Velocity; // 0xc
	float Radius; // 0x18
	int32_t Priority; // 0x1c
};

struct FBoneAtom {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	float Scale; // 0x1c
};

struct FLocalizedStringSetting {
	int32_t Id; // 0x0
	int32_t ValueIndex; // 0x4
	EOnlineDataAdvertisementType AdvertisementType; // 0x8
};

struct FOnlineGameSearchSortClause {
	int32_t EntryId; // 0x0
	FName ObjectPropertyName; // 0x4
	EOnlineGameSearchEntryType EntryType; // 0xc
	EOnlineGameSearchSortType SortType; // 0xd
};

struct FVectorMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<FVector> MICResetVectors; // 0x10
};

struct FDeviceParameters {
	FString SlotName; // 0x0
	char bShouldInterruptIfStopped : 1; // 0x10
	char bShouldInterruptIfInterrupted : 1; // 0x10
	char bShouldInterruptIfJumping : 1; // 0x10
};

struct FLeaderboardEntry {
	FUniqueNetId PlayerUID; // 0x0
	int32_t Rank; // 0x8
	int32_t Score; // 0xc
	TArray<int32_t> LeaderboardData; // 0x10
};

struct FAimData {
	FVector StartTrace; // 0x0
	FVector EndTrace; // 0xc
	FVector AimVector; // 0x18
	ObjectProperty HitActor; // 0x24
	float ClientMovementTimeStamp; // 0x2c
	char bResult : 1; // 0x30
};

struct FFloatMaterialParamMICData {
	TArray<ObjectProperty> MICs; // 0x0
	TArray<float> MICResetFloats; // 0x10
};

struct FTgKeyCommand {
	char bAllowGamepadAxis : 1; // 0x0
	int32_t nPropId; // 0x4
	FString sKeyCommand; // 0x8
	FString sMirroredCommand; // 0x18
	TArray<FString> sDefaultKeys; // 0x28
	char bShowForGamepad : 1; // 0x38
	char bShowForKeyboard : 1; // 0x38
};

struct FRawDistributionFloat : FRawDistribution {
	ComponentProperty Distribution; // 0x1c
};

struct FMcpChallengeUserRequest {
	FString UniqueUserId; // 0x0
	TArray<FMcpChallengeRequest> ChallengeStatusRequests; // 0x10
	TArray<FMcpChallengeRequest> ChallengeAcceptRequests; // 0x20
	TArray<FMcpChallengeRequest> ChallengeUpdateProgressRequests; // 0x30
	TArray<FMcpChallengeRequest> ChallengeUpdateRewardRequests; // 0x40
};

struct FScalarParameterInterpStruct {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	float InterpTime; // 0xc
	float WarmupTime; // 0x10
};

struct FSaveSlotOperation {
	int32_t SlotIndex; // 0x0
	SaveSlotOperationEnum SlotOperation; // 0x4
};

struct FTakeHitInfo {
	FVector HitLocation; // 0x0
	FVector Momentum; // 0xc
	UDamageType* DamageType; // 0x18
	ObjectProperty InstigatedBy; // 0x20
	char HitBoneIndex; // 0x28
	ObjectProperty PhysicalMaterial; // 0x2c
	float Damage; // 0x34
	FVector RadialDamageOrigin; // 0x38
};

struct FRecoilSettings {
	char bUsesRecoil : 1; // 0x0
	float fRecoilReductionPerSec; // 0x4
	float fRecoilCenterDelay; // 0x8
	float fRecoilSmoothRate; // 0xc
};

struct FLandscapeLayerStruct {
	ObjectProperty LayerInfoObj; // 0x0
	char bSelected : 1; // 0x8
};

struct FSwitchClassInfo {
	FName ClassName; // 0x0
	char bFallThru; // 0x8
};

struct FMatineeRawDistributionFloat : FRawDistributionFloat {
	float MatineeValue; // 0x24
	char bInMatinee : 1; // 0x28
};

struct FASValue {
	ASType Type; // 0x0
	char B : 1; // 0x4
	float N; // 0x8
	int32_t I; // 0xc
	FString S; // 0x10
};

struct FCachedPathItem {
	int32_t CachedKey; // 0x0
	FVector Location; // 0x4
	EHavokEdgeType EdgeType; // 0x10
	char bTerminatedPath : 1; // 0x14
};

struct FTerrainDecoLayer {
	FString Name; // 0x0
	TArray<FTerrainDecoration> Decorations; // 0x10
	int32_t AlphaMapIndex; // 0x20
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FChildrenBlendInfo {
	EPhysics m_PhysicsState; // 0x0
	TArray<FChildBlendInfo> m_ChildBlendInfo; // 0x4
};

struct FDisplayGroupInfo {
	FName DisplayGroupName; // 0x0
	DisplayGroupOnType WhenDisplayGroupOn; // 0x8
	float Strength; // 0xc
	char bOn : 1; // 0x10
	char ForceOffIfMeshHidden : 1; // 0x10
};

struct FTgFxLight {
	FPointer m_FxEmitter; // 0x0
	ObjectProperty m_OwnerSpecialFx; // 0x8
	float m_Score; // 0x10
};

struct FProductInfo {
	FString ProductID; // 0x0
	FString ProductName; // 0x10
	FString ProductDescription; // 0x20
	FString ProductImage; // 0x30
	FString DisplayListPrice; // 0x40
	FString DisplayPrice; // 0x50
	float ListPrice; // 0x60
	float Price; // 0x64
	FString CurrencyCode; // 0x68
	FString SignedOffer; // 0x78
};

struct FDamageInstance {
	float fDamage; // 0x0
	float fTimestamp; // 0x4
};

struct FQueuedActivationInfo {
	ObjectProperty ActivatedEvent; // 0x0
	ObjectProperty InOriginator; // 0x8
	ObjectProperty InInstigator; // 0x10
	TArray<int32_t> ActivateIndices; // 0x18
	char bPushTop : 1; // 0x28
};

struct FArmorTransitionInfo {
	float fTimer; // 0x0
	int32_t nEquipSlot; // 0x4
	char bFadeIn : 1; // 0x8
};

struct FAttachment {
	ComponentProperty Component; // 0x0
	FName BoneName; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	FVector RelativeScale; // 0x28
};

struct FBoneAngleMorph {
	float Angle; // 0x0
	float TargetWeight; // 0x4
};

struct FPBVariationInfo {
	FName VariationName; // 0x0
	char bMeshOnTopOfFacePoly : 1; // 0x8
};

struct FNavMeshPathParams {
	FPointer Interface; // 0x0
	char bCanMantle : 1; // 0x8
	char bNeedsMantleValidityTest : 1; // 0x8
	char bAbleToSearch : 1; // 0x8
	FVector SearchExtent; // 0xc
	float SearchLaneMultiplier; // 0x18
	FVector SearchStart; // 0x1c
	float MaxDropHeight; // 0x28
	float MinWalkableZ; // 0x2c
	float MaxHoverDistance; // 0x30
	float MaxPathLength; // 0x34
};

struct FEventStringParam {
	FString ParamName; // 0x0
	FString ParamValue; // 0x10
};

struct Fm_PhaseProfile {
	int32_t m_Phase; // 0x0
	TArray<Fm_PhaseTransitionAnimSet> m_TransitionAnimSets; // 0x4
};

struct FIMPACT_FX {
	FName nmMaterialType; // 0x0
	ObjectProperty Sound; // 0x8
	ObjectProperty DecalMaterial; // 0x10
	float fDecalWidth; // 0x18
	float fDecalHeight; // 0x1c
	char bRandomRotation : 1; // 0x20
	ObjectProperty Particles; // 0x24
	ObjectProperty SpecialFx; // 0x2c
};

struct FTouchTracker {
	int32_t Handle; // 0x0
	int32_t TouchpadIndex; // 0x4
	FVector2D Location; // 0x8
	EInputEvent EventType; // 0x10
	char bTrapInput : 1; // 0x14
};

struct FInputKeyAction {
	FName InputKeyName; // 0x0
	EInputEvent InputKeyState; // 0x8
	TArray<FSeqOpOutputInputLink> TriggeredOps; // 0xc
	TArray<ObjectProperty> ActionsToExecute; // 0x1c
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
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

struct FDriftInfo {
	float fStartTime; // 0x0
	float fEndTime; // 0x4
};

struct FDeviceTeamInfo {
	int32_t Power; // 0x0
	int32_t Level; // 0x4
	int32_t CurrentDeviceId; // 0x8
	int32_t LastKnownDeviceId[0x3]; // 0xc
	int32_t CurrentDeviceCount; // 0x18
	int32_t LastKnownDeviceCount[0x3]; // 0x1c
};

struct FNamedObjectProperty {
	FName ObjectPropertyName; // 0x0
	FString ObjectPropertyValue; // 0x8
};

struct FResetSynchGroup {
	FName AnimNodeSynchName; // 0x0
	ObjectProperty SynchNode; // 0x8
	FName GroupName; // 0x10
	TArray<int32_t> ResetChannels; // 0x18
};

struct FFx_PSC {
	int32_t c_nId; // 0x0
	ComponentProperty c_PSC; // 0x4
	ObjectProperty c_PSCTemplate; // 0xc
	float c_fScale; // 0x14
	int32_t c_nScaleType; // 0x18
	char c_bRunning : 1; // 0x1c
	char c_bReturnedToPool : 1; // 0x1c
	FName c_nmSocketDisplayGrp; // 0x20
	FName c_nmSocket; // 0x28
	ObjectProperty c_pCameraEffect; // 0x30
};

struct FAppliedStatEffect {
	int32_t m_nDeviceId; // 0x0
	int32_t m_nEffectGroupId; // 0x4
	float m_fDamageDeactivateDuration; // 0x8
};

struct FFunctionWrapperInfo {
	FPointer FunctionWrapper; // 0x0
	char CallbackType; // 0x8
	ObjectProperty HandleOwner; // 0xc
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	ObjectProperty Function; // 0x10
};

struct FEffectSpotTarget {
	ObjectProperty Target; // 0x0
	char bNeedsRefresh : 1; // 0x8
};

struct FSkinChildInfo {
	int32_t nSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FLevelGridCellCoordinate {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FSwitchObjectCase {
	ObjectProperty ObjectValue; // 0x0
	char bFallThru : 1; // 0x8
	char bDefaultValue : 1; // 0x8
};

struct FLightmassMaterialInterfaceSettings {
	char bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float SpecularBoost; // 0xc
	float ExportResolutionScale; // 0x10
	float DistanceFieldPenumbraScale; // 0x14
	char bOverrideCastShadowAsMasked : 1; // 0x18
	char bOverrideEmissiveBoost : 1; // 0x18
	char bOverrideDiffuseBoost : 1; // 0x18
	char bOverrideSpecularBoost : 1; // 0x18
	char bOverrideExportResolutionScale : 1; // 0x18
	char bOverrideDistanceFieldPenumbraScale : 1; // 0x18
};

struct FNamedNetDriver {
	FName NetDriverName; // 0x0
	FPointer NetDriver; // 0x8
};

struct FOnlinePlayerScore {
	FUniqueNetId PlayerID; // 0x0
	int32_t TeamID; // 0x8
	int32_t Score; // 0xc
};

struct FPPE_Skin {
	int32_t nSkinId; // 0x0
	ObjectProperty PSTemplate; // 0x4
};

struct FSkillLevelPercentageData {
	float NumDeathsPercentage; // 0x0
	float DamagePercentage; // 0x4
	float KillsPercentage; // 0x8
	float SoloKillsPercentage; // 0xc
	float AssistsPercentage; // 0x10
	float HealingPercentage; // 0x14
	float CreditsPercentage; // 0x18
	float ObjectiveTimePercentage; // 0x1c
	float ShieldingPercentage; // 0x20
	float KillstreakMultiplier; // 0x24
};

struct FDebugDisplayProperty {
	ObjectProperty Obj; // 0x0
	FName PropertyName; // 0x8
	FString PropertyString[0x5]; // 0x10
	int32_t nNumPropertyStrings; // 0x60
	EDebugDisplayType eDisplayType; // 0x64
};

struct FMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FRBCollisionChannelContainer {
	char Default : 1; // 0x0
	char Nothing : 1; // 0x0
	char Pawn : 1; // 0x0
	char Vehicle : 1; // 0x0
	char Water : 1; // 0x0
	char GameplayPhysics : 1; // 0x0
	char EffectPhysics : 1; // 0x0
	char Untitled1 : 1; // 0x0
	char Untitled2 : 0; // 0x0
	char Untitled3 : 0; // 0x0
	char Untitled4 : 0; // 0x0
	char Cloth : 0; // 0x0
	char FluidDrain : 0; // 0x0
	char SoftBody : 0; // 0x0
	char FracturedMeshPart : 0; // 0x0
	char BlockingVolume : 0; // 0x0
	char DeadPawn : 0; // 0x0
	char Clothing : 0; // 0x0
	char ClothingCollision : 0; // 0x0
};

struct FFlagMeshData {
	FlagContentDataType ContentDataType; // 0x0
	ObjectProperty MainMeshInfo; // 0x4
};

struct FGameSearchCfg {
	UOnlineGameSearch* GameSearchClass; // 0x0
	UOnlineGameSettings* DefaultGameSettingsClass; // 0x8
	UUIDataProvider_Settings* SearchResultsProviderClass; // 0x10
	ObjectProperty DesiredSettingsProvider; // 0x18
	ObjectProperty Search; // 0x20
	FName SearchName; // 0x28
};

struct FApexClothingAssetInfo {
	TArray<FApexClothingLodInfo> ClothingLodInfo; // 0x0
	FName ClothingAssetName; // 0x10
};

struct FUIMarkInfo {
	ObjectProperty Target; // 0x0
	int32_t nUIMarkCount; // 0x8
};

struct FFileNameToURLMapping {
	FName Filename; // 0x0
	FName UrlMapping; // 0x8
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetId PartyLeader; // 0x4
	TArray<FPlayerReservation> PartyMembers; // 0xc
};

struct FCurrentPostProcessVolumeInfo {
	FPostProcessSettings LastSettings; // 0x0
	ObjectProperty LastVolumeUsed; // 0x180
	float BlendStartTime; // 0x188
	float LastBlendTime; // 0x18c
};

struct FScreenShakeAnimStruct {
	ObjectProperty Anim; // 0x0
	char bUseDirectionalAnimVariants : 1; // 0x8
	ObjectProperty Anim_Left; // 0xc
	ObjectProperty Anim_Right; // 0x14
	ObjectProperty Anim_Rear; // 0x1c
	float AnimPlayRate; // 0x24
	float AnimScale; // 0x28
	float AnimBlendInTime; // 0x2c
	float AnimBlendOutTime; // 0x30
	char bRandomSegment : 1; // 0x34
	float RandomSegmentDuration; // 0x38
	char bSingleInstance : 1; // 0x3c
};

struct FOverlayMICList {
	TArray<ObjectProperty> MICs; // 0x0
};

struct FAttractLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FMcpUserCloudFilesEntry {
	FString UserId; // 0x0
	TArray<FTitleFileWeb> DownloadedFiles; // 0x10
	TArray<FMcpUserCloudFileInfo> EnumeratedFiles; // 0x20
	ObjectProperty HTTPRequestEnumerateFiles; // 0x30
};

struct FMenuListDragInfo {
	char bIsDragging : 1; // 0x0
	ObjectProperty TouchedItem; // 0x4
	FSelectedMenuItem OrigSelectedItem; // 0xc
	FVector2D StartTouch; // 0x18
	float TouchTime; // 0x20
	float ScrollAmount; // 0x24
	float AbsScrollAmount; // 0x28
	FDragHistoryData UpdateHistory[0x4]; // 0x2c
	int32_t NumUpdates; // 0x4c
	char bHasSelectedChanged : 1; // 0x50
};

struct FLensFlareElementMaterials {
	TArray<ObjectProperty> ElementMaterials; // 0x0
};

struct FWorldAttractorData {
	char bEnabled : 1; // 0x0
	FVector Location; // 0x4
	EWorldAttractorFalloffType FalloffType; // 0x10
	float FalloffExponent; // 0x14
	float Range; // 0x18
	float Strength; // 0x1c
};

struct FArcingFXInfo {
	ObjectProperty Source; // 0x0
	ObjectProperty Target; // 0x8
	ObjectProperty ArcingFX; // 0x10
	float fRemainingActiveTime; // 0x18
};

struct FCurrencyBonus {
	char m_eBonusSourceType; // 0x0
	char m_eBonusType; // 0x1
	float m_fBonusValue; // 0x4
	float m_fBonusTotal; // 0x8
};

struct FExtraDamageInfo {
	char bCritical : 1; // 0x0
	char bHeadShot : 1; // 0x0
	char bKillingBlow : 1; // 0x0
	char bCombo : 1; // 0x0
	char bLatent : 1; // 0x0
	char bMarked : 1; // 0x0
	char bChickeningBlow : 1; // 0x0
	char bNoInstigator : 1; // 0x0
};

struct FInstancedMeshStreamCookerHelper {
	int32_t Dummy; // 0x0
};

struct FSplitscreenData {
	TArray<FPerPlayerSplitscreenData> PlayerData; // 0x0
};

struct FApexClothingLodInfo {
	TArray<int32_t> ClothingSectionInfo; // 0x0
};

struct FMcpGroupMember {
	FString MemberId; // 0x0
	EMcpGroupAcceptState AcceptState; // 0x10
};

struct FSpeechRecognizedWord {
	int32_t WordId; // 0x0
	FString WordText; // 0x4
	float Confidence; // 0x14
};

struct FKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FSubtitleCue {
	FString Text; // 0x0
	float Time; // 0x10
	int32_t m_nMsgId; // 0x14
};

struct FInternalChestInfo {
	ObjectProperty V; // 0x0
	TArray<ObjectProperty> Factories; // 0x8
};

struct FSZombieInfo {
	char bEnabled : 1; // 0x0
	char bHasChangedClass : 1; // 0x0
	int32_t nBotId; // 0x4
	int32_t Mode; // 0x8
	char RemoveNextTime : 1; // 0xc
	int32_t TicksUntilCheckLocation; // 0x10
	FVector LastLocation; // 0x14
	float VelocityCap; // 0x20
	FRotator Rotation; // 0x24
	float fLastMoveTime; // 0x30
	float fSecondsUntilInhandFireStateChange; // 0x34
	char bFiringInhand : 1; // 0x38
	float fSecondsUntilAbility1FireStateChange; // 0x3c
	char bFiringAbility1 : 1; // 0x40
	float fSecondsUntilAbility2FireStateChange; // 0x44
	char bFiringAbility2 : 1; // 0x48
	float fSecondsUntilAltFireFireStateChange; // 0x4c
	char bFiringAltFire : 1; // 0x50
	float fSecondsUntilChangeMove; // 0x54
	float fDeployPct; // 0x58
};

struct FHealAccumulator {
	int32_t nProfileId; // 0x0
	float fRawAmount; // 0x4
	float fChangeAmount; // 0x8
	char bHealingReduced : 1; // 0xc
};

struct FRegisterUserRequest {
	FString UDID; // 0x0
	FString McpId; // 0x10
	ObjectProperty Request; // 0x20
};

struct FNxDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FRecogVocabulary {
	TArray<FRecognisableWord> WhoDictionary; // 0x0
	TArray<FRecognisableWord> WhatDictionary; // 0x10
	TArray<FRecognisableWord> WhereDictionary; // 0x20
	FString VocabName; // 0x30
	TArray<char> VocabData; // 0x40
	TArray<char> WorkingVocabData; // 0x50
};

struct FSkelControlSkinGateChild {
	ObjectProperty SkelControl; // 0x0
	int32_t nSkinId; // 0x8
	int32_t nSkinLevel; // 0xc
	float DrawY; // 0x10
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FSHVector {
	float V[0x9]; // 0x0
	float Padding[0x3]; // 0x24
};

struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x34
	FVector Constant; // 0x38
};

struct FVectorParameterValueOverTime : FParameterValueOverTime {
	FLinearColor ParameterValue; // 0x30
	FInterpCurveVector ParameterValueCurve; // 0x40
};

struct FASColorTransform {
	FLinearColor Multiply; // 0x0
	FLinearColor Add; // 0x10
};

struct FParticleChannelContainer {
	char bInitialized : 1; // 0x0
	char Default : 1; // 0x0
	char Friendly : 1; // 0x0
	char Enemy : 1; // 0x0
	char LocalOwner : 1; // 0x0
	char Channel5 : 1; // 0x0
	char Channel6 : 1; // 0x0
	char Channel7 : 1; // 0x0
	char Channel8 : 0; // 0x0
	char VerticalTargeter : 0; // 0x0
	char Filter2 : 0; // 0x0
	char NotLocalOwner : 0; // 0x0
	char CustomFilter1 : 0; // 0x0
	char CustomFilter2 : 0; // 0x0
	char CustomFilter3 : 0; // 0x0
	char CustomFilter4 : 0; // 0x0
	char CustomFilter5 : 0; // 0x0
	char CustomFilter6 : 0; // 0x0
	char CustomFilter7 : 0; // 0x0
};

struct FDebugAimAssist {
	ObjectProperty lastAimAssistTarget; // 0x0
	float targetDist; // 0x8
	float assistValX; // 0xc
	float assistValY; // 0x10
	FName curveMin[0x8]; // 0x14
	FName curveMax[0x8]; // 0x54
	float curveMinVal[0x8]; // 0x94
	float curveMaxVal[0x8]; // 0xb4
	float curveInterpAmt[0x8]; // 0xd4
	float rawVal[0x8]; // 0xf4
	float boundsUsedX; // 0x114
	float boundsUsedY; // 0x118
	float trackingScaledStrengthFinalX; // 0x11c
	float trackingScaledStrengthFinalY; // 0x120
};

struct FServerCorrectionSmoothingParams {
	float fServerCorrectSnapDist; // 0x0
	float fMinBaseSpeed; // 0x4
	float fMaxBaseSpeed; // 0x8
	float fBaseSpeedMultiplier; // 0xc
	float fNewInfoWeight; // 0x10
	float fMinCorrectionModifier; // 0x14
	float fMaxCorrectionModifier; // 0x18
	float fCorrectionModifierMultiplier; // 0x1c
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FRankMetaData {
	FName RankName; // 0x0
	FString RankColumnName; // 0x8
};

struct FPhysXEmitterVerticalLodProperties {
	float WeightForFifo; // 0x0
	float WeightForSpawnLod; // 0x4
	float SpawnLodRateVsLifeBias; // 0x8
	float RelativeFadeoutTime; // 0xc
};

struct FTgDeployableFactoryGroupSpawnData {
	int32_t GroupNum; // 0x0
	int32_t MinSpawnNum; // 0x4
	int32_t MaxSpawnNum; // 0x8
};

struct FFilterLimit {
	char Enabled : 1; // 0x0
	float Base; // 0x4
	float NoiseScale; // 0x8
	float NoiseAmount; // 0xc
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FIncomingDamageEntry {
	ObjectProperty attacker; // 0x0
	TG_EQUIP_POINT DeviceSlot; // 0x8
	FVector SourceInitialLocation; // 0xc
	FRotator SourceInitialAim; // 0x18
	float ExpireTime; // 0x24
	float RemovalTime; // 0x28
	float Weight; // 0x2c
};

struct FSkelControlListHead {
	FName BoneName; // 0x0
	ObjectProperty ControlHead; // 0x8
};

struct FUICListEntry {
	ObjectProperty pDisplay; // 0x0
	ObjectProperty pInteractable; // 0x8
	float fOrigX; // 0x10
	float fOrigY; // 0x14
	int32_t nPosX; // 0x18
	int32_t nPosY; // 0x1c
	int32_t nWidth; // 0x20
	int32_t nHeight; // 0x24
};

struct FAppliedMaterialHandle {
	int32_t nHandle; // 0x0
	ComponentProperty pAppliedMesh; // 0x4
};

struct FInputEventParameters {
	int32_t PlayerIndex; // 0x0
	int32_t ControllerId; // 0x4
	FName InputKeyName; // 0x8
	EInputEvent EventType; // 0x10
	float InputDelta; // 0x14
	float DeltaTime; // 0x18
	char bAltPressed : 1; // 0x1c
	char bCtrlPressed : 1; // 0x1c
	char bShiftPressed : 1; // 0x1c
};

struct FLightmassWorldInfoSettings {
	float StaticLightingLevelScale; // 0x0
	int32_t NumIndirectLightingBounces; // 0x4
	FColor EnvironmentColor; // 0x8
	float EnvironmentIntensity; // 0xc
	char bEnableAdvancedEnvironmentColor : 1; // 0x10
	FColor EnvironmentSunColor; // 0x14
	float EnvironmentSunIntensity; // 0x18
	float EnvironmentLightTerminatorAngle; // 0x1c
	FVector EnvironmentLightDirection; // 0x20
	float EmissiveBoost; // 0x2c
	float DiffuseBoost; // 0x30
	float SpecularBoost; // 0x34
	float IndirectNormalInfluenceBoost; // 0x38
	char bUseAmbientOcclusion : 1; // 0x3c
	char bEnableImageReflectionShadowing : 1; // 0x3c
	float DirectIlluminationOcclusionFraction; // 0x40
	float IndirectIlluminationOcclusionFraction; // 0x44
	float OcclusionExponent; // 0x48
	float FullyOccludedSamplesFraction; // 0x4c
	float MaxOcclusionDistance; // 0x50
	char bVisualizeMaterialDiffuse : 1; // 0x54
	char bVisualizeAmbientOcclusion : 1; // 0x54
	char bCompressShadowmap : 1; // 0x54
};

struct FProjectileClassEventData {
	FName ProjectileClassName; // 0x0
};

struct FSurrenderVote {
	int32_t nPlayerId; // 0x0
	char bSurrender : 1; // 0x4
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
	TArray<FSlotMoveRef> SlipRefs; // 0x6c
	TArray<FCoverInfo> OverlapClaimsList; // 0x7c
	char bLeanLeft : 1; // 0x8c
	char bLeanRight : 1; // 0x8c
	char bForceCanPopUp : 1; // 0x8c
	char bCanPopUp : 1; // 0x8c
	char bCanMantle : 1; // 0x8c
	char bCanClimbUp : 1; // 0x8c
	char bForceCanCoverSlip_Left : 1; // 0x8c
	char bForceCanCoverSlip_Right : 1; // 0x8c
	char bCanCoverSlip_Left : 0; // 0x8c
	char bCanCoverSlip_Right : 0; // 0x8c
	char bCanSwatTurn_Left : 0; // 0x8c
	char bCanSwatTurn_Right : 0; // 0x8c
	char bEnabled : 0; // 0x8c
	char bAllowPopup : 0; // 0x8c
	char bAllowMantle : 0; // 0x8c
	char bAllowCoverSlip : 0; // 0x8c
	char bAllowClimbUp : 0; // 0x8c
	char bAllowSwatTurn : 0; // 0x8c
	char bForceNoGroundAdjust : 0; // 0x8c
	char bPlayerOnly : 0; // 0x8c
	char bPreferLeanOverPopup : 0; // 0x8c
	char bDestructible : 0; // 0x8c
	char bSelected : 0; // 0x8c
	char bFailedToFindSurface : 0; // 0x8c
};

struct FTerrainMaterialMask {
	FQWord BitMask; // 0x0
	int32_t NumBits; // 0x8
};

struct FSilhouettePulseSettings {
	char bUsesPulse : 1; // 0x0
	char bUsePulseAlpha : 1; // 0x0
	char bPulseMaintainsDistanceDimming : 1; // 0x0
	FVector2D vPulseAlpha; // 0x4
	char bPulseUseCustomColor : 1; // 0xc
	FColor PulseCustomColor; // 0x10
	char bUsePulseThicknessMultiplier : 1; // 0x14
	FVector2D vPulseThicknessMultiplier; // 0x18
	float fPulseElapsedTime; // 0x20
	float fPulseDuration; // 0x24
	float fPulseWaveTime; // 0x28
};

struct FChildBlendInfo {
	EPhysics m_PhysicsState; // 0x0
	float m_fBlendTime; // 0x4
};

struct FOverlayInfo {
	ComponentProperty OverlayMesh; // 0x0
	ComponentProperty ParentMesh; // 0x8
	char bIs1POverlay : 1; // 0x10
	char bIsVisible : 1; // 0x10
	FOverlayMICList OverlayMICInstances[0x6]; // 0x14
};

struct FLeaderboardHandle {
	FQWord Dud; // 0x0
};

struct FAccuracySettings {
	char bUsesAdvancedAccuracy : 1; // 0x0
	float fMaxAccuracy; // 0x4
	float fMinAccuracy; // 0x8
	float fAccuracyLossPerShot; // 0xc
	float fAccuracyGainPerSec; // 0x10
	float fAccuracyGainDelay; // 0x14
	int32_t nNumFreeShots; // 0x18
};

struct FAmmoBlendParams {
	int32_t MinAmmo; // 0x0
	int32_t MaxAmmo; // 0x4
	int32_t ChildNum; // 0x8
};

struct FThreadSafeCounter {
	int32_t Value; // 0x0
};

struct FPathStore {
	TArray<FEdgePointer> EdgeList; // 0x0
};

struct FNearbyDynamicItem {
	ObjectProperty Dynamic; // 0x0
};

struct FColorDefinition {
	FString Id; // 0x0
	char R; // 0x10
	char G; // 0x11
	char B; // 0x12
};

struct FBaseAuthSession {
	FIpAddr EndPointIP; // 0x0
	int32_t EndPointPort; // 0x14
	FUniqueNetId EndPointUID; // 0x18
};

struct FTgAIBotPlayersToSpawn {
	FString fsName; // 0x0
	int32_t nBotId; // 0x10
	Fdword dwPlayerId; // 0x14
	int32_t nTaskForceId; // 0x18
	int32_t nSpawnTableDetailId; // 0x1c
};

struct FSilhouetteInfo {
	SafeObjectProperty Silhouette; // 0x0
	ComponentProperty ParentMesh; // 0xc
	OverlayState CurrentState; // 0x14
};

struct FGameCrowdAttachmentInfo {
	ObjectProperty StaticMesh; // 0x0
	float Chance; // 0x8
	FVector Scale3D; // 0xc
};

struct FCanvasUVTri {
	FVector2D V0_Pos; // 0x0
	FVector2D V0_UV; // 0x8
	FVector2D V1_Pos; // 0x10
	FVector2D V1_UV; // 0x18
	FVector2D V2_Pos; // 0x20
	FVector2D V2_UV; // 0x28
};

struct FImpactInfo {
	ObjectProperty HitActor; // 0x0
	FVector HitLocation; // 0x8
	FVector HitNormal; // 0x14
	FVector RayDir; // 0x20
	FVector StartTrace; // 0x2c
	FTraceHitInfo HitInfo; // 0x38
	float PercAbsorbedDamage; // 0x60
	ObjectProperty DeviceModeReference; // 0x64
	ObjectProperty Projectile; // 0x6c
	char bDirectHit : 1; // 0x74
	int32_t nFiringInstance; // 0x78
	char nShotsHit; // 0x7c
};

struct FTrackedCollision {
	char IsColliding : 1; // 0x0
	ObjectProperty Target; // 0x4
	ComponentProperty TargetComp; // 0xc
	int32_t NumTouches; // 0x14
};

struct FWeightNodeRule {
	FName NodeName; // 0x0
	ObjectProperty CachedNode; // 0x8
	ObjectProperty CachedSlotNode; // 0x10
	EWeightCheck WeightCheck; // 0x18
	int32_t ChildIndex; // 0x1c
};

struct FMcpClashMobPushNotificationParams {
	int32_t bah; // 0x0
};

struct FRecoilInfo {
	FRecoilDef Min; // 0x0
	FRecoilDef Max; // 0x70
};

struct FCompositePartInfo {
	int32_t MeshAsmId; // 0x0
	int32_t DestOffsetX; // 0x4
	int32_t DestOffsetY; // 0x8
	int32_t RegionSizeX; // 0xc
	int32_t RegionSizeY; // 0x10
};

struct FComboInfo {
	ObjectProperty Target; // 0x0
	ObjectProperty Instigator; // 0x8
	float fMarkTime; // 0x10
};

struct FCustomInput {
	FString InputName; // 0x0
	FExpressionInput Input; // 0x10
};

struct FSettingsProperty {
	int32_t PropertyId; // 0x0
	FSettingsData Data; // 0x4
	EOnlineDataAdvertisementType AdvertisementType; // 0x14
};

struct FBuffMonsterMIC {
	ObjectProperty SpawnedMIC; // 0x0
	ObjectProperty DroppedMIC; // 0x8
	ObjectProperty TimerMIC; // 0x10
};

struct FTgPropertyInstance {
	int32_t m_nPropIndex; // 0x0
	int32_t m_nPropertyId; // 0x4
	float m_fBase; // 0x8
	float m_fRaw; // 0xc
	float m_fMinimum; // 0x10
	float m_fMaximum; // 0x14
	float m_fScalingFactor; // 0x18
};

struct FCamFocusPointParams {
	ObjectProperty FocusActor; // 0x0
	FName FocusBoneName; // 0x8
	FVector FocusWorldLoc; // 0x10
	float CameraFOV; // 0x1c
	FVector2D InterpSpeedRange; // 0x20
	FVector2D InFocusFOV; // 0x28
	char bAlwaysFocus : 1; // 0x30
	char bAdjustCamera : 1; // 0x30
	char bIgnoreTrace : 1; // 0x30
	float FocusPitchOffsetDeg; // 0x34
};

struct FWeaponSwapTypeData {
	FName nAnimSetPackageName; // 0x0
	int32_t iChildIndex; // 0x8
};

struct FWallPlacementInfo {
	char bIsValidLocation : 1; // 0x0
	FVector vSpawnLocation; // 0x4
};

struct FDynamicResourceProviderDefinition {
	FName ProviderTag; // 0x0
	FString ProviderClassName; // 0x8
	UUIResourceCombinationProvider* ProviderClass; // 0x18
};

struct FAutomatedTestingDatum {
	int32_t NumberOfMatchesPlayed; // 0x0
	int32_t NumMapListCyclesDone; // 0x4
};

struct FPerPlayerSplitscreenData {
	float SizeX; // 0x0
	float SizeY; // 0x4
	float OriginX; // 0x8
	float OriginY; // 0xc
};

struct FStanceTransitionParam {
	int32_t FromChild; // 0x0
	int32_t ToChild; // 0x4
};

struct FTargetAimTrackingDebugVals {
	int32_t DebugState; // 0x0
	FName trackingCurveSetName; // 0x4
	float strengthMultiplier[0x2]; // 0xc
	float strengthByAccuracy[0x2]; // 0x14
	float strengthByDesiredAngle[0x2]; // 0x1c
	float strengthFinal[0x2]; // 0x24
	float rawDesiredTurnAmt[0x2]; // 0x2c
	float rawDesiredTurnAmtPerSec[0x2]; // 0x34
};

struct FUIAxisEmulationDefinition {
	FName AxisInputKey; // 0x0
	FName AdjacentAxisInputKey; // 0x8
	char bEmulateButtonPress : 1; // 0x10
	FName InputKeyToEmulate[0x2]; // 0x14
};

struct FRotator {
	int32_t Pitch; // 0x0
	int32_t Yaw; // 0x4
	int32_t Roll; // 0x8
};

struct FUIDataDeck {
	int32_t nId; // 0x0
	char bTemplate : 1; // 0x4
	FString sName; // 0x8
	FString sDesc; // 0x18
	int32_t nDevice[0x5]; // 0x28
};

struct FTouchDataEvent {
	ETouchType EventType; // 0x0
	char TouchpadIndex; // 0x1
	FVector2D Location; // 0x4
	FDouble DeviceTime; // 0xc
};

struct FAmmoCount {
	int32_t ClipAmmoCount; // 0x0
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

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FClientBeaconConnection {
	FUniqueNetId PartyLeader; // 0x0
	float ElapsedHeartbeatTime; // 0x8
	FPointer Socket; // 0xc
};

struct FBehaviorStateData {
	float LastTickTime; // 0x0
	int32_t NodeToken; // 0x4
	EBehaviorStatus Status; // 0x8
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FTerrainDecoration {
	ObjectProperty Factory; // 0x0
	float MinScale; // 0x8
	float MaxScale; // 0xc
	float Density; // 0x10
	float SlopeRotationBlend; // 0x14
	int32_t RandSeed; // 0x18
	TArray<FTerrainDecorationInstance> Instances; // 0x1c
};

struct FMessageToken {
	int32_t msgId; // 0x0
	int32_t MsgIdRed; // 0x4
	int32_t MsgIdBlue; // 0x8
	FString Token; // 0xc
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FSpectatorCommand {
	int32_t nFrame; // 0x0
	char bUseIndex : 1; // 0x4
	float fSpeed; // 0x8
};

struct FAttackSpeedModifier {
	int32_t nSourceId; // 0x0
	float fPercChange; // 0x4
	float fExpirationTime; // 0x8
	char bReplicated : 1; // 0xc
	char bHasLeniencyApplied : 1; // 0xc
};

struct FNewsCacheEntry {
	FString NewsUrl; // 0x0
	EOnlineEnumerationReadState ReadState; // 0x10
	EOnlineNewsType NewsType; // 0x11
	FString NewsItem; // 0x14
	float TimeOut; // 0x24
	char bIsUnicode : 1; // 0x28
	FPointer HttpDownloader; // 0x2c
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
	FName ValueName; // 0x40
};

struct FPhysEffectInfo {
	float Threshold; // 0x0
	float ReFireDelay; // 0x4
	ObjectProperty Effect; // 0x8
	ObjectProperty Sound; // 0x10
};

struct FPComInputLightingPreset {
	FName PresetName; // 0x0
	FInterpCurveLinearColor Curve; // 0x8
	FLinearColor ColorTint; // 0x1c
	int32_t LoopCount; // 0x2c
	float PlaybackRate; // 0x30
	float BlendInTime; // 0x34
	int32_t Priority; // 0x38
};

struct FUIITEM_CLIP {
	ObjectProperty pObj; // 0x0
	ObjectProperty pSelected; // 0x8
	ObjectProperty pButton; // 0x10
	ObjectProperty pSaleBanner; // 0x18
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	FVector ContactVelocity[0x2]; // 0x1c
	ObjectProperty PhysMaterial[0x2]; // 0x34
};

struct FSkelMeshComponentLODInfo {
	TArray<char> HiddenMaterials; // 0x0
	char bNeedsInstanceWeightUpdate : 1; // 0x10
	char bAlwaysUseInstanceWeights : 1; // 0x10
	EInstanceWeightUsage InstanceWeightUsage; // 0x14
	int32_t InstanceWeightIdx; // 0x18
};

struct FInventoryData {
	FQWord nInvId; // 0x0
	int32_t nItemId; // 0x8
	int32_t nPower; // 0xc
	int32_t nLevel; // 0x10
	int32_t nInstanceCount; // 0x14
	char bBoundFlag : 1; // 0x18
	float fAcquiredDatetime; // 0x1c
	int32_t nEquipSlotValueId; // 0x20
	int32_t nPendingDelete; // 0x24
};

struct FQueuedImpactEffect {
	FVector HitLocation; // 0x0
	char bSuccessfulHit : 1; // 0xc
	ObjectProperty HitActor; // 0x10
	FVector HitNormal; // 0x18
	FVector FireOrigin; // 0x24
	int32_t nEquipSlot; // 0x30
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

struct FOnlineFriend {
	FUniqueNetId UniqueId; // 0x0
	FQWord SessionId; // 0x8
	FString NickName; // 0x10
	FString PresenceInfo; // 0x20
	FString AdditionalPresenceInfo; // 0x30
	EOnlineFriendState FriendState; // 0x40
	char bIsOnline : 1; // 0x44
	char bIsPlaying : 1; // 0x44
	char bIsPlayingThisGame : 1; // 0x44
	char bIsPlayingPartnerGame : 1; // 0x44
	char bIsJoinable : 1; // 0x44
	char bHasVoiceSupport : 1; // 0x44
	char bHaveInvited : 1; // 0x44
	char bHasInvitedYou : 1; // 0x44
};

struct FUITITLESET {
	ObjectProperty pObj; // 0x0
	ObjectProperty pNode[0x7]; // 0x8
	ObjectProperty pLock[0x7]; // 0x40
	ObjectProperty pTitle[0x7]; // 0x78
	ObjectProperty pFrame[0xa]; // 0xb0
	ObjectProperty pTexture[0xa]; // 0x100
	ObjectProperty pNodeLine[0x7]; // 0x150
};

struct FDecalReceiver {
	ComponentProperty Component; // 0x0
	FPointer RenderData; // 0x8
};

struct FSpecialMoveStruct {
	FName SpecialMoveName; // 0x0
	ObjectProperty InteractionPawn; // 0x8
	ObjectProperty InteractionActor; // 0x10
	int32_t Flags; // 0x18
};

struct FTimeModifier {
	float Time; // 0x0
	float TargetStrength; // 0x4
};

struct FPerBoneMaskInfo {
	TArray<FBranchInfo> BranchList; // 0x0
	float DesiredWeight; // 0x10
	float BlendTimeToGo; // 0x14
	TArray<FWeightRule> WeightRuleList; // 0x18
	char bWeightBasedOnNodeRules : 1; // 0x28
	char bDisableForNonLocalHumanPlayers : 1; // 0x28
	char bPendingBlend : 1; // 0x28
	TArray<float> PerBoneWeights; // 0x2c
	TArray<char> TransformReqBone; // 0x3c
	int32_t TransformReqBoneIndex; // 0x4c
};

struct FApexModuleDestructibleSettings {
	int32_t MaxChunkIslandCount; // 0x0
	int32_t MaxShapeCount; // 0x4
	int32_t MaxRrbActorCount; // 0x8
	float MaxChunkSeparationLOD; // 0xc
	char bOverrideMaxChunkSeparationLOD : 1; // 0x10
};

struct FInputEntry {
	EInputTypes Type; // 0x0
	float Value; // 0x4
	float TimeDelta; // 0x8
	EInputMatchAction Action; // 0xc
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FTitleFileWeb : FTitleFile {
	FString StringData; // 0x24
	ObjectProperty HTTPRequest; // 0x34
	EMcpFileCompressionType FileCompressionType; // 0x3c
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FSteamPlayerClanData {
	FString ClanName; // 0x0
	FString ClanTag; // 0x10
};

struct FFogMaskData {
	int32_t nSize; // 0x0
	int32_t nMapDrawLocationX; // 0x4
	int32_t nMapDrawLocationY; // 0x8
	char bLocationChanged : 1; // 0xc
	char bVisionRangeChanged : 1; // 0xc
	FBitArray_Mirror m_MaskPoints; // 0x10
};

struct FActivityGoal {
	int32_t nTargetValue; // 0x0
	int32_t nProgressValue; // 0x4
	FString sDescription; // 0x8
	FString sName; // 0x18
	char bClaimed : 1; // 0x28
	int32_t nGoalId; // 0x2c
	TArray<FGoalRewardItem> pLootItems; // 0x30
};

struct FLocalizedSubtitle {
	FString LanguageExt; // 0x0
	TArray<FSubtitleCue> Subtitles; // 0x10
	char bMature : 1; // 0x20
	char bManualWordWrap : 1; // 0x20
	char bSingleLine : 1; // 0x20
};

struct FMenuListMovementInfo {
	char bIsMoving : 1; // 0x0
	FSelectedMenuItem OrigSelectedItem; // 0x4
	float FullMovement; // 0x10
	float TotalTime; // 0x14
	float CurrentTime; // 0x18
};

struct FRawInputKeyEventData {
	FName InputKeyName; // 0x0
	char ModifierKeyFlags; // 0x8
};

struct FAcquiredItem {
	int32_t nType; // 0x0
	int32_t nItem; // 0x4
	int32_t nCount; // 0x8
	int32_t nQuest; // 0xc
};

struct FCardInfo {
	int32_t Id; // 0x0
	int32_t Count; // 0x4
	int32_t Owner; // 0x8
	FString sOwner; // 0xc
};

struct FMaterialInput {
	ObjectProperty Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0xc
	int32_t Mask; // 0x1c
	int32_t MaskR; // 0x20
	int32_t MaskG; // 0x24
	int32_t MaskB; // 0x28
	int32_t MaskA; // 0x2c
	int32_t GCC64_Padding; // 0x30
};

struct FParticleEventDeathData : FParticleEventData {
	float ParticleTime; // 0x34
};

struct FUINODESET {
	ObjectProperty pObj; // 0x0
	ObjectProperty pNode[0xa]; // 0x8
	ObjectProperty pLock[0xa]; // 0x58
	ObjectProperty pIcon[0xa]; // 0xa8
	ObjectProperty pTexture[0xa]; // 0xf8
	ObjectProperty pNodeLine[0xa]; // 0x148
};

struct FPlayerInformation {
	FName ControllerName; // 0x0
	FString PlayerName; // 0x8
	FUniqueNetId UniqueId; // 0x18
	char bIsBot : 1; // 0x20
	int32_t BotId; // 0x24
	FString BotName; // 0x28
	int32_t Taskforce; // 0x38
};

struct FTgQueuedProjectileExplosion {
	int32_t ClientFireRequestId; // 0x0
	ObjectProperty Target; // 0x4
	FVector HitLocation; // 0xc
	FVector HitNormal; // 0x18
	float ProjectileAliveTime; // 0x24
	float MovementTimeStamp; // 0x28
	float AoeRewindTimeStamp; // 0x2c
	float VelocityZ; // 0x30
};

struct FNamedSession {
	FName SessionName; // 0x0
	FPointer SessionInfo; // 0x8
	ObjectProperty GameSettings; // 0x10
	TArray<FOnlineRegistrant> Registrants; // 0x18
	TArray<FOnlineArbitrationRegistrant> ArbitrationRegistrants; // 0x28
};

struct FSeqOpOutputLink {
	TArray<FSeqOpOutputInputLink> Links; // 0x0
	FString LinkDesc; // 0x10
	char bHasImpulse : 1; // 0x20
	char bDisabled : 1; // 0x20
	char bDisabledPIE : 1; // 0x20
	ObjectProperty LinkedOp; // 0x24
	float ActivateDelay; // 0x2c
	int32_t DrawY; // 0x30
	char bHidden : 1; // 0x34
	char bMoving : 1; // 0x34
	char bClampedMax : 1; // 0x34
	char bClampedMin : 1; // 0x34
	char bIsActivated : 1; // 0x34
};

struct FKCachedConvexData_Mirror {
	TArray<int32_t> CachedConvexElements; // 0x0
};

struct FStaticMeshLODElement {
	ObjectProperty Material; // 0x0
	char bEnableShadowCasting : 1; // 0x8
	char bEnableCollision : 1; // 0x10
};

struct FMeshAssets {
	FString m_sSkeletalMesh; // 0x0
	FString m_sPhysicsAsset; // 0x10
	FString m_sAnimTreeTemplate; // 0x20
	FString m_sAnimSets; // 0x30
};

struct FDialogueEvent {
	float fRequestTime; // 0x0
	int32_t nPriority; // 0x4
	float fRelevance; // 0x8
	int32_t ExtraInfo; // 0xc
	float fPause; // 0x10
	EEmote EEmote; // 0x14
	EEmoteCategory eCat; // 0x15
};

struct FBroadcastChannel {
	ESpectatorMode Channel; // 0x0
	int32_t PlayerID; // 0x4
};

struct FBurningMarkInfo {
	ObjectProperty Target; // 0x0
	int32_t nMarkCount; // 0x8
};

struct FDouble {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FFragmentGroup {
	TArray<int32_t> FragmentIndices; // 0x0
	char bGroupIsRooted : 1; // 0x10
};

struct FStaticMeshLODInfo {
	TArray<FStaticMeshLODElement> Elements; // 0x0
};

struct FSaveSlotRequestState {
	FString McpId; // 0x0
	FString SaveSlotId; // 0x10
	ObjectProperty Request; // 0x20
};

struct FArray_Mirror {
	FPointer Data; // 0x0
	int32_t ArrayNum; // 0x8
	int32_t ArrayMax; // 0xc
};

struct FRelevantNodeNameNodes {
	ObjectProperty CachedNode; // 0x0
	int32_t ChildIndex; // 0x8
};

struct FMolotovGeneralSettings {
	FVector vBiasDirection; // 0x0
	float fUpFactor; // 0xc
	float fSpotRadius; // 0x10
	float fSpotHeight; // 0x14
};

struct FExpressionOutput {
	FString OutputName; // 0x0
	int32_t Mask; // 0x10
	int32_t MaskR; // 0x14
	int32_t MaskG; // 0x18
	int32_t MaskB; // 0x1c
	int32_t MaskA; // 0x20
};

struct FTrackedProjectileUpdateData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float UpdateServerTime; // 0x18
};

struct FThreatStruct {
	ObjectProperty Threatener; // 0x0
	float fThreat; // 0x8
};

struct FVertexColorPhysicalMaterialMapping {
	ObjectProperty PhysMat; // 0x0
	FColor MappingColor; // 0x8
};

struct FPenetrationAvoidanceFeeler {
	FRotator AdjustmentRot; // 0x0
	float WorldWeight; // 0xc
	float PawnWeight; // 0x10
	FVector Extent; // 0x14
	int32_t TraceInterval; // 0x20
	int32_t FramesUntilNextTrace; // 0x24
};

struct FNxDestructibleParametersFlag {
	char ACCUMULATE_DAMAGE : 1; // 0x0
	char ASSET_DEFINED_SUPPORT : 1; // 0x0
	char WORLD_SUPPORT : 1; // 0x0
	char DEBRIS_TIMEOUT : 1; // 0x0
	char DEBRIS_MAX_SEPARATION : 1; // 0x0
	char CRUMBLE_SMALLEST_CHUNKS : 1; // 0x0
	char ACCURATE_RAYCASTS : 1; // 0x0
	char USE_VALID_BOUNDS : 1; // 0x0
	char FORM_EXTENDED_STRUCTURES : 0; // 0x0
};

struct FNotification {
	NotificationType eType; // 0x0
	FString sTitle; // 0x4
	FString sDescription; // 0x14
	Fdword dwIconIndex; // 0x24
	FString sIconId; // 0x28
	Fdword dwItemId; // 0x38
	FQWord qwTimeStamp; // 0x3c
	Fdword dwCount; // 0x44
	Fdword dwItemType; // 0x48
	Fdword dwItemSubType; // 0x4c
	char bNavigable : 1; // 0x50
	char bShowDescription : 1; // 0x50
	char bUseTreasureStack : 1; // 0x50
	char bSeen : 1; // 0x50
};

struct FActivityGoalIds {
	Fdword dwActivityId; // 0x0
	Fdword dwGoalId; // 0x4
};

struct FTrailSamplePoint {
	float RelativeTime; // 0x0
	FTrailSocketSamplePoint FirstEdgeSample; // 0x4
	FTrailSocketSamplePoint ControlPointSample; // 0x1c
	FTrailSocketSamplePoint SecondEdgeSample; // 0x34
};

struct FDebugNavCost {
	FString Desc; // 0x0
	int32_t Cost; // 0x10
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

struct FRecentInteraction {
	FName InteractionTag; // 0x0
	float InteractionDelay; // 0x8
};

struct FStringIdToStringMapping {
	int32_t Id; // 0x0
	FName Name; // 0x4
	char bIsWildcard : 1; // 0xc
};

struct FHelmetMorphRestrictions {
	FName MorphName; // 0x0
	float Weight; // 0x8
};

struct FTitleFileCacheEntry : FTitleFile {
	FString LogicalName; // 0x24
	FString Hash; // 0x34
	ETitleFileFileOp FileOp; // 0x44
	FPointer Ar; // 0x48
};

struct FMarketplaceProductDetails {
	FString StandardId; // 0x0
	EMediaItemType MediaItemType; // 0x10
	FString ProductName; // 0x14
	FString ProductID; // 0x24
	FQWord ReleaseDate; // 0x34
	FString SandboxId; // 0x3c
	int32_t TitleId; // 0x4c
	char bIsBundle : 1; // 0x50
	char bIsPartOfAnyBundle : 1; // 0x50
	FString ReducedName; // 0x54
	TArray<FMarketplaceProductImage> Images; // 0x64
	EOnlineEnumerationReadState DetailsReadState; // 0x74
	TArray<FMarketplaceProductAvailability> Availabilities; // 0x78
	FString ProductDescription; // 0x88
	FString IncludeTaxMessage; // 0x98
};

struct FV2DOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
};

struct FTargetMark {
	ObjectProperty Target; // 0x0
	float fTimeLeft; // 0x8
	int32_t nNumMarks; // 0xc
	TArray<ObjectProperty> AppliedEffects; // 0x10
};

struct FTriangleSortSettings {
	TriangleSortOption TriangleSorting; // 0x0
	TriangleSortAxis CustomLeftRightAxis; // 0x1
	FName CustomLeftRightBoneName; // 0x4
};

struct FUIFORGEENTRYGFX {
	ObjectProperty pObj; // 0x0
	ObjectProperty m_mcIcon; // 0x8
	ObjectProperty m_mcTitle; // 0x10
	ObjectProperty m_mcError; // 0x18
	ObjectProperty m_mcShards; // 0x20
	ObjectProperty m_mcHighlight; // 0x28
	ObjectProperty m_mcForged; // 0x30
};

struct FBitArray_Mirror {
	FPointer IndirectData; // 0x0
	int32_t InlineData[0x4]; // 0x8
	int32_t NumBits; // 0x18
	int32_t MaxBits; // 0x1c
};

struct FChatMessage {
	FString sMessage; // 0x0
	char bIsVIP : 1; // 0x10
	Fdword dwVIPTier; // 0x14
};

struct FCoverInfo {
	ObjectProperty Link; // 0x0
	int32_t SlotIdx; // 0x8
};

struct FSoundClassAdjuster {
	ESoundClassName SoundClassName; // 0x0
	FName SoundClass; // 0x4
	float VolumeAdjuster; // 0xc
	float PitchAdjuster; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FPComOpenBroadcasterSettings {
	char bAllowWebcam : 1; // 0x0
	char bAllowMicrophone : 1; // 0x0
	char bAllowDesktopAudio : 1; // 0x0
};

struct FRawDistribution {
	char Type; // 0x0
	char Op; // 0x1
	char LookupTableNumElements; // 0x2
	char LookupTableChunkSize; // 0x3
	TArray<float> LookupTable; // 0x4
	float LookupTableTimeScale; // 0x14
	float LookupTableStartTime; // 0x18
};

struct FViewTargetInfo {
	ObjectProperty Pawn; // 0x0
	int32_t Rating; // 0x8
	float DistSqToClosestEnemy; // 0xc
	float DistSqToClosestFriend; // 0x10
	float DistSqToGoldFury; // 0x14
	float DistSqToEnemyTower; // 0x18
	int32_t NumCloseEnemies; // 0x1c
	int32_t NumCloseFriends; // 0x20
};

struct FsInventoryReq {
	char m_bLevelFail : 1; // 0x0
	char m_bSkillFail : 1; // 0x0
	int32_t m_nSkillLevelReq; // 0x4
	int32_t m_nSkillIdReq; // 0x8
	char m_bFlairFail : 1; // 0xc
	char m_bLocationFail : 1; // 0xc
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FAnimNotifyEvent {
	float Time; // 0x0
	ObjectProperty Notify; // 0x4
	float Duration; // 0xc
};

struct FTerrainDecorationInstance {
	ComponentProperty Component; // 0x0
	float X; // 0x8
	float Y; // 0xc
	float Scale; // 0x10
	int32_t Yaw; // 0x14
};

struct FRecentParty {
	FUniqueNetId PartyLeader; // 0x0
	TArray<FUniqueNetId> PartyMembers; // 0x8
};

struct FCurrentPlayerMet {
	int32_t TeamNum; // 0x0
	int32_t Skill; // 0x4
	FUniqueNetId NetId; // 0x8
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FUtilityPair {
	TMap<None, None> FilteredAnnotationPoints; // 0x0
};

struct FGameplayEventsHeader {
	int32_t EngineVersion; // 0x0
	int32_t StatsWriterVersion; // 0x4
	int32_t StreamOffset; // 0x8
	int32_t AggregateOffset; // 0xc
	int32_t FooterOffset; // 0x10
	int32_t TotalStreamSize; // 0x14
	int32_t FileSize; // 0x18
	FString FilterClass; // 0x1c
	int32_t Flags; // 0x2c
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FPBFaceUVInfo {
	FVector2D Offset; // 0x0
	FVector2D Size; // 0x8
};

struct FPlayerStat {
	int32_t ViewId; // 0x0
	int32_t ColumnId; // 0x4
	FSettingsData Data; // 0x8
};

struct FGFxStoredViewportParams {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Width; // 0x8
	int32_t Height; // 0xc
	char bInitialized : 1; // 0x10
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FEmitterBaseInfo {
	ComponentProperty PSC; // 0x0
	ObjectProperty Base; // 0x8
	FVector RelativeLocation; // 0x10
	FRotator RelativeRotation; // 0x1c
	char bInheritBaseScale : 1; // 0x28
};

struct FVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x18
};

struct FLeaderboardTemplate {
	FString LeaderboardName; // 0x0
	ELeaderboardUpdateType UpdateType; // 0x10
	int32_t LeaderboardSize; // 0x14
	ELeaderboardSortType SortType; // 0x18
	ELeaderboardFormat DisplayFormat; // 0x19
	FLeaderboardHandle LeaderboardRef; // 0x1c
	char bLeaderboardInitializing : 1; // 0x24
	char bLeaderboardInitiated : 1; // 0x24
};

struct FActivateOp {
	ObjectProperty ActivatorOp; // 0x0
	ObjectProperty Op; // 0x8
	int32_t InputIdx; // 0x10
	float RemainingDelay; // 0x14
};

struct FFx_Sound {
	int32_t c_nId; // 0x0
	ObjectProperty c_SoundObject; // 0x4
	ComponentProperty c_acSound; // 0xc
	char c_bAllowSoundToFinishFlag : 1; // 0x14
	char c_bCanHearThroughStealth : 1; // 0x14
	char c_bForceAudioComponent : 1; // 0x14
	ObjectProperty c_AkEvent; // 0x18
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
	char bPlaying : 1; // 0x30
};

struct FRenderingPerformanceOverrides {
	char bAllowAmbientOcclusion : 1; // 0x0
	char bAllowDominantWholeSceneDynamicShadows : 1; // 0x0
	char bAllowMotionBlurSkinning : 1; // 0x0
	char bAllowTemporalAA : 1; // 0x0
	char bAllowLightShafts : 1; // 0x0
};

struct FNavMeshLayerInfo {
	FName Desc; // 0x0
	float Radius; // 0x8
	float Height; // 0xc
	float CrouchHeight; // 0x10
	char PathColor; // 0x14
};

struct FDeferredPartToSpawn {
	int32_t ChunkIndex; // 0x0
	FVector InitialVel; // 0x4
	FVector InitialAngVel; // 0x10
	float RelativeScale; // 0x1c
	char bExplosion : 1; // 0x20
};

struct FDeferredLeaderboardRead {
	FString LeaderboardName; // 0x0
	char RequestType; // 0x10
	int32_t Start; // 0x14
	int32_t End; // 0x18
	TArray<FUniqueNetId> PlayerList; // 0x1c
};

struct FBadgeStruct {
	int32_t BadgeId; // 0x0
	int32_t ActivityId; // 0x4
	int32_t Icon; // 0x8
	int32_t Tier; // 0xc
	int32_t Progress; // 0x10
	int32_t MaxValue; // 0x14
	int32_t Category; // 0x18
	FString Title; // 0x1c
	FString Description; // 0x2c
};

struct FMcpClashMobChallengeEvent {
	FString unique_challenge_id; // 0x0
	FString Description; // 0x10
	FString visible_date; // 0x20
	FString start_date; // 0x30
	FString end_date; // 0x40
	FString completed_date; // 0x50
	FString purge_date; // 0x60
	int32_t repeat_after_days; // 0x70
	int32_t repeat_count; // 0x74
	FString challenge_type; // 0x78
	int32_t num_attempts; // 0x88
	int32_t num_successful_attempts; // 0x8c
	int32_t goal_value; // 0x90
	int32_t goal_start_value; // 0x94
	int32_t goal_current_value; // 0x98
	char has_started : 1; // 0x9c
	char is_visible : 1; // 0x9c
	char has_completed : 1; // 0x9c
	char was_successful : 1; // 0x9c
	TArray<FMcpClashMobChallengeFile> file_list; // 0xa0
	FMcpClashMobPushNotification start_notification; // 0xb0
	FMcpClashMobPushNotification end_notification; // 0xf4
	int32_t facebook_likes; // 0x138
	FString facebook_comments; // 0x13c
	float facebook_like_scaler; // 0x14c
	float facebook_comment_scaler; // 0x150
	int32_t facebook_like_goal_progress; // 0x154
	int32_t facebook_comment_goal_progress; // 0x158
	FString facebook_id; // 0x15c
	FString facebook_post_message; // 0x16c
	char wants_facebook_posting : 1; // 0x17c
	int32_t twitter_retweets; // 0x180
	float twitter_retweets_scaler; // 0x184
	int32_t twitter_goal_progress; // 0x188
	FString twitter_id; // 0x18c
	FString twitter_message; // 0x19c
	char wants_twitter_posting : 1; // 0x1ac
};

struct FGoalRewardItem {
	int32_t nItemId; // 0x0
	int32_t nQuantity; // 0x4
	int32_t nEntitlementRequired; // 0x8
	char bRental : 1; // 0xc
};

struct FScoreKillData {
	ObjectProperty Killer; // 0x0
	ObjectProperty KillerPRI; // 0x8
	ObjectProperty KillerPawn; // 0x10
	FPointer KillerBotAssembly; // 0x18
	char bKillerIsGod : 1; // 0x20
	char bKillerIsMinion : 1; // 0x20
	char bKillerIsTower : 1; // 0x20
	ObjectProperty Victim; // 0x24
	ObjectProperty VictimPawn; // 0x2c
	ObjectProperty VictimPRI; // 0x34
	ObjectProperty VictimTaskForce; // 0x3c
	FPointer VictimBotAssembly; // 0x44
	char VictimCanScore : 1; // 0x4c
	char bVictimIsGod : 1; // 0x4c
	char bVictimIsMinion : 1; // 0x4c
	char bVictimIsTower : 1; // 0x4c
	ObjectProperty Scorer; // 0x50
	ObjectProperty ScorerPawn; // 0x58
	ObjectProperty ScorerPRI; // 0x60
	ObjectProperty ScorerTaskForce; // 0x68
	char ScorerCanScore : 1; // 0x70
	char bSuicide : 1; // 0x70
	TArray<ObjectProperty> AssistingPlayers; // 0x74
};

struct FMarkedTargetHook {
	ObjectProperty aActor; // 0x0
	float fTime; // 0x8
	char bFiredSince : 1; // 0xc
};

struct FDamageParameters {
	EDamageParameterOverrideMode OverrideMode; // 0x0
	float BaseDamage; // 0x4
	float Radius; // 0x8
	float Momentum; // 0xc
};

struct FLocalTalker {
	char bHasVoice : 1; // 0x0
	char bHasNetworkedVoice : 1; // 0x0
	char bIsRecognizingSpeech : 1; // 0x0
	char bWasTalking : 1; // 0x0
	char bIsTalking : 1; // 0x0
	char bIsRegistered : 1; // 0x0
	float TimeSinceLastPacket; // 0x4
};

struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x34
	float Constant; // 0x38
};

struct FOnlineStatsRow {
	FUniqueNetId PlayerID; // 0x0
	FSettingsData Rank; // 0x8
	FString NickName; // 0x18
	TArray<FSettingsData> StatValues; // 0x28
};

struct FMcpInventoryItemContainer {
	FString GlobalItemId; // 0x0
	int32_t Quantity; // 0x10
};

struct FRecogUserData {
	int32_t ActiveVocabularies; // 0x0
	TArray<char> UserData; // 0x4
};

struct FPlayerStorageArrayProvider {
	int32_t PlayerStorageId; // 0x0
	ObjectProperty Provider; // 0x4
};

struct FKBoxElem {
	FMatrix TM; // 0x0
	float X; // 0x40
	float Y; // 0x44
	float Z; // 0x48
	char bNoRBCollision : 1; // 0x4c
	char bPerPolyShape : 1; // 0x4c
};

struct FFLOOD {
	int32_t m_nCount; // 0x0
	float m_fLastUpdate; // 0x4
};

struct FAimAssistTargetWeightVars {
	float CurrentTargetBonus; // 0x0
	float NotCurrentTargetPenalty; // 0x4
	float MinAccuracyBonus; // 0x8
	float MaxAccuracyBonus; // 0xc
	float MinInaccuracyPenalty; // 0x10
	float MaxInaccuracyPenalty; // 0x14
	float MaxWeight; // 0x18
};

struct FPolyReference {
	FActorReference OwningPylon; // 0x0
	int32_t PolyId; // 0x18
	FPointer CachedPoly; // 0x1c
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
};

struct FUIAxisEmulationData : FUIKeyRepeatData {
	char bEnabled : 1; // 0x10
};

struct FIpAddr {
	int32_t AddrA; // 0x0
	int32_t AddrB; // 0x4
	int32_t AddrC; // 0x8
	int32_t AddrD; // 0xc
	int32_t Port; // 0x10
};

struct FPSE_Skin {
	int32_t nSkinId; // 0x0
	ObjectProperty SoundCue; // 0x4
};

struct FRotTransitionInfo {
	float RotationOffset; // 0x0
	FName TransName; // 0x4
};

struct FSparseArray_Mirror {
	TArray<int32_t> Elements; // 0x0
	FBitArray_Mirror AllocationFlags; // 0x10
	int32_t FirstFreeIndex; // 0x30
	int32_t NumFreeIndices; // 0x34
};

struct FDateTimeWrapper {
	FQWord qTime; // 0x0
};

struct FSpectatorBookmark {
	ObjectProperty ViewTarget; // 0x0
	SpectatorCameraMode ViewMode; // 0x8
	FTPOV POV; // 0xc
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FBinocularSettings {
	int32_t nTargets; // 0x0
	FRotator rHeading; // 0x4
	float fRange; // 0x10
	float fTimer1; // 0x14
	float fTimer2; // 0x18
	float fTimer3; // 0x1c
	float fTimerDuration; // 0x20
	float fRefireTimerPercent; // 0x24
	float fDurationPercent; // 0x28
};

struct FEffectSpotInfo {
	char bIsActive : 1; // 0x0
	FVector vLocation; // 0x4
	FRotator rRotation; // 0x10
	float fRadius; // 0x1c
	float fHeight; // 0x20
	int32_t nFXIndex; // 0x24
	int32_t nIntensityLevel; // 0x28
};

struct FUITEAMMATE {
	int32_t nId; // 0x0
	int32_t nClass; // 0x4
	int32_t nLives; // 0x8
	int32_t nShards; // 0xc
	int32_t nStreak; // 0x10
	int32_t nItem[0x5]; // 0x14
	char bMute : 1; // 0x28
	char bChicken : 1; // 0x28
	float fArmor; // 0x2c
	float fArmorMax; // 0x30
	float fHealth; // 0x34
	float fChickenPulse; // 0x38
	ObjectProperty pObj; // 0x3c
	ObjectProperty pDead; // 0x44
	ObjectProperty pIcon; // 0x4c
	ObjectProperty pMute; // 0x54
	ObjectProperty pClass; // 0x5c
	ObjectProperty pArmor; // 0x64
	ObjectProperty pHealth; // 0x6c
	ObjectProperty pArmorBar; // 0x74
	ObjectProperty pLives; // 0x7c
	ObjectProperty pShards; // 0x84
	ObjectProperty pStreak; // 0x8c
	ObjectProperty pChicken; // 0x94
	ObjectProperty pVoiceIcon; // 0x9c
	ObjectProperty pItem[0x5]; // 0xa4
	ObjectProperty pItemIcon[0x5]; // 0xcc
	ObjectProperty pItemFrame[0x5]; // 0xf4
};

struct FWeaponSkinChildInfo {
	int32_t nWeaponSkinId; // 0x0
	int32_t nChildIndex; // 0x4
};

struct FWeaponFireResults {
	char bDidServerValidation : 1; // 0x0
	FImpactInfo Impact; // 0x4
};

struct FSceneInfo {
	int32_t nDepth; // 0x0
	FName nmName; // 0x4
	FString sPath; // 0xc
};

struct FPreviewSkelMeshStruct {
	FName DisplayName; // 0x0
	ObjectProperty PreviewSkelMesh; // 0x8
	TArray<ObjectProperty> PreviewMorphSets; // 0x10
};

struct FNavMeshPathConstraintCacheDatum {
	int32_t ListIdx; // 0x0
	ObjectProperty List[0x5]; // 0x4
};

struct FTextureParameterValueOverTime : FParameterValueOverTime {
	ObjectProperty ParameterValue; // 0x30
};

struct FTipSavedState {
	int32_t nTipId; // 0x0
	int32_t nMatchVisibleCount; // 0x4
	int32_t nTotalVisibleCount; // 0x8
	float fLastVisibleTime; // 0xc
	char nCompletedCount : 1; // 0x10
	char bSuppressed : 1; // 0x10
};

struct FFireLink {
	TArray<char> Interactions; // 0x0
	int32_t PackedProperties_CoverPairRefAndDynamicInfo; // 0x10
	char bFallbackLink : 1; // 0x14
	char bDynamicIndexInited : 1; // 0x14
};

struct FPlayOfTheGameEventCounter {
	EPlayOfTheGameEventType EventType; // 0x0
	float Threshold; // 0x4
	float Counter; // 0x8
	float TimeOut; // 0xc
	float Timer; // 0x10
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FPackedNormal Normal; // 0xc
	FColor Color; // 0x10
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAICmdHistoryItem {
	UGameAICommand* CmdClass; // 0x0
	float TimeStamp; // 0x8
	FString VerboseString; // 0xc
};

struct FMarketplaceProductAvailability {
	TArray<FString> AcceptablePaymentInstrumentTypes; // 0x0
	FString Description; // 0x10
	FString Title; // 0x20
	int32_t ConsumableQuantity; // 0x30
	FString ContentId; // 0x34
	FString CurrencyCode; // 0x44
	FString DisplayListPrice; // 0x54
	FString DisplayPrice; // 0x64
	FString DistributionType; // 0x74
	char bIsPurchasable : 1; // 0x84
	float ListPrice; // 0x88
	FString OfferId; // 0x8c
	float Price; // 0x9c
	FString PromotionalText; // 0xa0
	FString SignedOffer; // 0xb0
};

struct FNxDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float MassScaleExponent; // 0xc
	float MassScale; // 0x10
	float FractureImpulseScale; // 0x14
};

struct FViewIdToLeaderboardName {
	int32_t ViewId; // 0x0
	FString LeaderboardName; // 0x4
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x14
	FString StringValue2; // 0x24
	ObjectProperty ObjectValue; // 0x34
};

struct FFx_Decal {
	int32_t c_nId; // 0x0
	ObjectProperty c_MITV; // 0x4
	float c_fWidth; // 0xc
	float c_fHeight; // 0x10
	float c_fThickness; // 0x14
	char c_bNoClip : 1; // 0x18
	char c_bAttach : 1; // 0x18
	ComponentProperty c_Decal; // 0x1c
	float c_fLifetime; // 0x24
	float c_fFadeOutTime; // 0x28
	EManagedDecalState c_eState; // 0x2c
	float c_fHideAtTimeSeconds; // 0x30
};

struct FDeferredNode {
	float WorldTime; // 0x0
	FPointer CurrentNode; // 0x4
	FPointer CachedStatus; // 0xc
	FPointer StorageMemory; // 0x14
	FPointer WorkingMemory; // 0x1c
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

struct FPostureStack {
	TArray<int32_t> GUIDs; // 0x0
	TArray<TG_POSTURE> Postures; // 0x10
	int32_t NewPostureGUID; // 0x20
};

struct FCameraStackInfo {
	TG_CAMERAPOSTURE ePosture; // 0x0
	int32_t nStackId; // 0x4
};

struct FMiniMapPingInfo {
	float fServerStartTime; // 0x0
	float fClientStartTime; // 0x4
	ObjectProperty pingedPri; // 0x8
	FVector vPingedLoc; // 0x10
	char bIsPinging : 1; // 0x1c
	PING_TYPE eType; // 0x20
	int32_t nIconSize; // 0x24
	ObjectProperty pingMIC; // 0x28
	ObjectProperty sourcePRI; // 0x30
	int32_t SourceIndex; // 0x38
	FVector vSourceWorldLocation; // 0x3c
};

struct FLandscapeWeightmapUsage {
	ComponentProperty ChannelUsage[0x4]; // 0x0
};

struct FImpactToValidate {
	int32_t PackedAssociatedShotIDs; // 0x0
	float ImpactTimeStamp; // 0x4
	FImpactInfo Impact; // 0x8
};

struct FOnDamagedParams {
	ObjectProperty attacker; // 0x0
	ObjectProperty Dev; // 0x8
	ObjectProperty eg; // 0x10
	FImpactInfo Impact; // 0x18
	float fBuffedDamage; // 0x98
	float fMitigatedDamage; // 0x9c
	float fPreDamageHealth; // 0xa0
	float fShieldDamage; // 0xa4
	FExtraDamageInfo ExtraInfo; // 0xa8
	int32_t nPropertyId; // 0xac
};

struct FCrackShotBonusDamageTarget {
	ObjectProperty pTarget; // 0x0
	float fBonusDamageEndTime; // 0x8
};

struct FPBFracMeshCompInfo {
	ComponentProperty FracMeshComp; // 0x0
	int32_t TopLevelScopeIndex; // 0x8
};

struct FPathSizeInfo {
	FName Desc; // 0x0
	float Radius; // 0x8
	float Height; // 0xc
	float CrouchHeight; // 0x10
	char PathColor; // 0x14
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FMcpMessageContents {
	FString MessageId; // 0x0
	TArray<char> MessageContents; // 0x10
};

struct FBlendByPercentValues {
	float fPercent; // 0x0
};

struct FPlayerNickMetaData {
	FName PlayerNickName; // 0x0
	FString PlayerNickColumnName; // 0x8
};

struct FFunctionExpressionInput {
	ObjectProperty ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FAnimSetMeshLinkup {
	FQWord SkelMeshRUID; // 0x0
	TArray<int32_t> BoneToTrackTable; // 0x8
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

struct FMobilePostProcessSettings {
	char bOverride_Mobile_BlurAmount : 1; // 0x0
	char bOverride_Mobile_TransitionTime : 1; // 0x0
	char bOverride_Mobile_Bloom_Scale : 1; // 0x0
	char bOverride_Mobile_Bloom_Threshold : 1; // 0x0
	char bOverride_Mobile_Bloom_Tint : 1; // 0x0
	char bOverride_Mobile_DOF_Distance : 1; // 0x0
	char bOverride_Mobile_DOF_MinRange : 1; // 0x0
	char bOverride_Mobile_DOF_MaxRange : 1; // 0x0
	char bOverride_Mobile_DOF_NearBlurFactor : 0; // 0x0
	char bOverride_Mobile_DOF_FarBlurFactor : 0; // 0x0
	float Mobile_BlurAmount; // 0x4
	float Mobile_TransitionTime; // 0x8
	float Mobile_Bloom_Scale; // 0xc
	float Mobile_Bloom_Threshold; // 0x10
	FLinearColor Mobile_Bloom_Tint; // 0x14
	float Mobile_DOF_Distance; // 0x24
	float Mobile_DOF_MinRange; // 0x28
	float Mobile_DOF_MaxRange; // 0x2c
	float Mobile_DOF_NearBlurFactor; // 0x30
	float Mobile_DOF_FarBlurFactor; // 0x34
};

struct FUIInputKeyData {
	FRawInputKeyEventData InputKeyData; // 0x0
	FString ButtonFontMarkupString; // 0xc
};

struct FGameSettingsCfg {
	UOnlineGameSettings* GameSettingsClass; // 0x0
	ObjectProperty Provider; // 0x8
	ObjectProperty GameSettings; // 0x10
	FName SettingsName; // 0x18
};

struct FAkMeterCallbackState {
	Fdword dwBusID; // 0x0
	char bActive : 1; // 0x4
	float fLevel; // 0x8
	float fTimestamp; // 0xc
};

struct FBoneToRemove {
	FName BoneName; // 0x0
	char BoneId; // 0x8
};

struct FLightmassLightSettings {
	float IndirectLightingScale; // 0x0
	float IndirectLightingSaturation; // 0x4
	float ShadowExponent; // 0x8
};

struct FCameraShakeInstance {
	ObjectProperty SourceShake; // 0x0
	FName SourceShakeName; // 0x8
	float OscillatorTimeRemaining; // 0x10
	char bBlendingIn : 1; // 0x14
	float CurrentBlendInTime; // 0x18
	char bBlendingOut : 1; // 0x1c
	float CurrentBlendOutTime; // 0x20
	FVector LocSinOffset; // 0x24
	FVector RotSinOffset; // 0x30
	float FOVSinOffset; // 0x3c
	FVector2D HUDSinOffset; // 0x40
	float Scale; // 0x48
	ObjectProperty AnimInst; // 0x4c
	ECameraAnimPlaySpace PlaySpace; // 0x54
	FMatrix UserPlaySpaceMatrix; // 0x60
};

struct FLensFlareElement {
	FName ElementName; // 0x0
	float RayDistance; // 0x8
	char bIsEnabled : 1; // 0xc
	char bUseSourceDistance : 1; // 0xc
	char bNormalizeRadialDistance : 1; // 0xc
	char bModulateColorBySource : 1; // 0xc
	FVector Size; // 0x10
	TArray<ObjectProperty> LFMaterials; // 0x1c
	FRawDistributionFloat LFMaterialIndex; // 0x2c
	FRawDistributionFloat Scaling; // 0x50
	FRawDistributionVector AxisScaling; // 0x74
	FRawDistributionFloat Rotation; // 0x98
	char bOrientTowardsSource : 1; // 0xbc
	FRawDistributionVector Color; // 0xc0
	FRawDistributionFloat Alpha; // 0xe4
	FRawDistributionVector Offset; // 0x108
	FRawDistributionVector DistMap_Scale; // 0x12c
	FRawDistributionVector DistMap_Color; // 0x150
	FRawDistributionFloat DistMap_Alpha; // 0x174
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FManagedValue {
	FName ValueId; // 0x0
	int32_t Value; // 0x8
};

struct FNetViewer {
	ObjectProperty InViewer; // 0x0
	ObjectProperty Viewer; // 0x8
	FVector ViewLocation; // 0x10
	FVector AlternateViewLocation; // 0x1c
	FVector ViewDir; // 0x28
	char bHasAlternateViewLocation : 1; // 0x34
};

struct FAnimInfo {
	FName AnimSeqName; // 0x0
	ObjectProperty AnimSeq; // 0x8
	int32_t AnimLinkupIndex; // 0x10
};

struct FBoosterFlightInfo {
	float fStartTime; // 0x0
	float fEndTime; // 0x4
};

struct FLightingChannelContainer {
	char bInitialized : 1; // 0x0
	char BSP : 1; // 0x0
	char Static : 1; // 0x0
	char Dynamic : 1; // 0x0
	char CompositeDynamic : 1; // 0x0
	char Skybox : 1; // 0x0
	char Unnamed_2 : 1; // 0x0
	char Unnamed_3 : 1; // 0x0
	char Unnamed_4 : 0; // 0x0
	char Unnamed_5 : 0; // 0x0
	char Unnamed_6 : 0; // 0x0
	char Unnamed_7 : 0; // 0x0
	char Cinematic_2 : 0; // 0x0
	char Cinematic_3 : 0; // 0x0
	char Cinematic_4 : 0; // 0x0
	char Cinematic_5 : 0; // 0x0
	char Cinematic_6 : 0; // 0x0
	char Cinematic_7 : 0; // 0x0
	char Cinematic_8 : 0; // 0x0
	char Cinematic_9 : 0; // 0x0
	char Cinematic_10 : 0; // 0x0
	char Cinematic_11 : 0; // 0x0
	char Gameplay_2 : 0; // 0x0
	char Gameplay_3 : 0; // 0x0
	char Gameplay_4 : 0; // 0x0
	char Gameplay_5 : 0; // 0x0
	char Crowd : 0; // 0x0
};

struct FEEmoteAbilityChance {
	float fDefault; // 0x0
	float fAbility1; // 0x4
	float fAbility2; // 0x8
	float fAbility3; // 0xc
	float fMount; // 0x10
};

struct FShowFlags_Mirror {
	FQWord flags0; // 0x0
	FQWord flags1; // 0x8
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FTViewTarget {
	ObjectProperty Target; // 0x0
	ObjectProperty Controller; // 0x8
	FTPOV POV; // 0x10
	float AspectRatio; // 0x34
	ObjectProperty PRI; // 0x38
};

struct FSilhouetteFadeSettings {
	char bUsesDistanceFade : 1; // 0x0
	float fAlphaFadeNearDist; // 0x4
	float fAlphaFadeNear; // 0x8
	float fAlphaFadeFarDist; // 0xc
	float fAlphaFadeFar; // 0x10
};

struct FPropertyPair {
	int32_t PropertyId; // 0x0
	int32_t Value; // 0x4
};

struct FCurrencyEntry {
	Fdword m_dwCurrencyId; // 0x0
	float m_fTotal; // 0x4
	TArray<FCurrencyBonus> m_vCurrencyBonuses; // 0x8
	char m_eCurrencyType; // 0x18
	FCurrencyBonus m_NullBonus; // 0x1c
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FHudMarker {
	float fOrigBotY; // 0x0
	float fOrigTopY; // 0x4
	float fValue; // 0x8
	float fTime; // 0xc
	float fAngle; // 0x10
	float fOffset; // 0x14
	char bActive : 1; // 0x18
	FVector vHitLoc; // 0x1c
	FVector vPawnLoc; // 0x28
	ObjectProperty pObj; // 0x34
	ObjectProperty pTop; // 0x3c
	ObjectProperty pBot; // 0x44
};

struct FAnimByRotation {
	FRotator DesiredRotation; // 0x0
	FName AnimName; // 0xc
};

struct FCanvasIcon {
	ObjectProperty Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FIniLocFileEntry {
	FString Filename; // 0x0
	FString DLName; // 0x10
	FString HashCode; // 0x20
	char bIsUnicode : 1; // 0x30
	EOnlineEnumerationReadState ReadState; // 0x34
};

struct FCurveKey {
	FName CurveName; // 0x0
	float Weight; // 0x8
};

struct FHealSource {
	int32_t nPawnId; // 0x0
	ObjectProperty mcIconParent; // 0x4
	ObjectProperty mcIcon; // 0xc
	ObjectProperty mcGlow; // 0x14
	float fHideTimer; // 0x1c
	float fGlowTimer; // 0x20
	TArray<ObjectProperty> ActiveEntries; // 0x24
};

struct FLeaderboardTeam {
	int32_t nTeam; // 0x0
	int32_t nKills; // 0x4
	FString sPlayerA; // 0x8
	FString sPlayerB; // 0x18
	FString sPlayerC; // 0x28
	FString sPlayerD; // 0x38
};

struct FAnimGroup {
	TArray<ObjectProperty> SeqNodes; // 0x0
	ObjectProperty SynchMaster; // 0x10
	ObjectProperty NotifyMaster; // 0x18
	FName GroupName; // 0x20
	float RateScale; // 0x28
	float SynchPctPosition; // 0x2c
	char bOnlyFireNotifiesOnBestGroupMember : 1; // 0x30
};

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float LightSourceRadius; // 0xc
};

struct FTexture2DMipMap {
	FUntypedBulkData_Mirror Data; // 0x0
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FPointer FileNameOverride; // 0x48
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FScreenMessageString {
	FQWord Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct Fm_PostureProfile {
	TG_POSTURE m_Posture; // 0x0
	TArray<Fm_TransitionAnimSet> m_TransitionAnimSets; // 0x4
	ObjectProperty m_CameraAnim; // 0x14
	float m_fCameraAnimBlendInTime; // 0x1c
	float m_fCameraAnimBlendOutTime; // 0x20
	char m_bCameraAnimBlendInOnTransitionIn : 1; // 0x24
	char m_bCameraAnimBlendOutAfterTransitionOut : 1; // 0x24
	ObjectProperty m_CameraAnimInst; // 0x28
	char m_bPlayingCameraAnim : 1; // 0x30
	char m_bResetBlendByFireToIdleOnTransition : 1; // 0x30
};

struct FPBScopeProcessInfo {
	ObjectProperty OwningBuilding; // 0x0
	ObjectProperty Ruleset; // 0x8
	FName RulesetVariation; // 0x10
	char bGenerateLODPoly : 1; // 0x18
	char bPartOfNonRect : 1; // 0x18
};

struct FPlayOfTheGameEventConfig {
	EPlayOfTheGameEventType EventType; // 0x0
	float BaseRating; // 0x4
	float MultMod; // 0x8
	float MaxTimeDiff; // 0xc
	char ScaleByTimeDiff : 1; // 0x10
	int32_t MaxMultInstances; // 0x14
	float Threshold; // 0x18
	float ThresholdTimeOut; // 0x1c
};

struct FConvergeInfo {
	float TargetConvergeRadius; // 0x0
	float CurrentConvergeRadius; // 0x4
};

struct FCoverReplicationInfo {
	ObjectProperty Link; // 0x0
	TArray<char> SlotsEnabled; // 0x8
	TArray<char> SlotsDisabled; // 0x18
	TArray<char> SlotsAdjusted; // 0x28
	TArray<FManualCoverTypeInfo> SlotsCoverTypeChanged; // 0x38
};

struct FPlayerResponseLine {
	int32_t PlayerNum; // 0x0
	int32_t PlayerID; // 0x4
	FString PlayerName; // 0x8
	int32_t Ping; // 0x18
	int32_t Score; // 0x1c
	int32_t StatsID; // 0x20
	TArray<FKeyValuePair> PlayerInfo; // 0x24
};

struct FInitialFogInfo {
	FVector vInitialFogEpicenterLoc; // 0x0
	float fInitialFogRadius; // 0xc
};

struct FMaterialViewRelevance {
	char bOpaque : 1; // 0x0
	char bTranslucent : 1; // 0x0
	char bDistortion : 1; // 0x0
	char bOneLayerDistortionRelevance : 1; // 0x0
	char bLit : 1; // 0x0
	char bUsesSceneColor : 1; // 0x0
};

struct FPagedEntry {
	int32_t nValue; // 0x0
	FString sText; // 0x4
};

struct FInventorySwap {
	FName Original; // 0x0
	FString SwapTo; // 0x8
};

struct FWidgetClassReplacementPair {
	UGFxObject* ReplacedClass; // 0x0
	UGFxObject* NewClass; // 0x8
};

struct FLaunchNotificationInfo {
	char bWasLaunchedViaNotification : 1; // 0x0
	FNotificationInfo Notification; // 0x4
};

struct FTouchData {
	int32_t Handle; // 0x0
	char TouchpadIndex; // 0x4
	FVector2D Location; // 0x8
	float TotalMoveDistance; // 0x10
	FDouble InitialDeviceTime; // 0x14
	float TouchDuration; // 0x1c
	FDouble MoveEventDeviceTime; // 0x20
	float MoveDeltaTime; // 0x28
	char bInUse : 1; // 0x2c
	ObjectProperty Zone; // 0x30
	ETouchType State; // 0x38
	TArray<FTouchDataEvent> Events; // 0x3c
	float LastActiveTime; // 0x4c
};

struct FEventUploadConfig {
	EEventUploadType UploadType; // 0x0
	FString UploadUrl; // 0x4
	float TimeOut; // 0x14
	char bUseCompression : 1; // 0x18
};

struct FParticleEvent_GenerateInfo {
	EParticleEventType Type; // 0x0
	int32_t Frequency; // 0x4
	int32_t LowFreq; // 0x8
	int32_t ParticleFrequency; // 0xc
	char FirstTimeOnly : 1; // 0x10
	char LastTimeOnly : 1; // 0x10
	char UseReflectedImpactVector : 1; // 0x10
	FName CustomName; // 0x14
	TArray<ObjectProperty> ParticleModuleEventsToSendToGame; // 0x1c
};

struct FNavReference {
	ObjectProperty Nav; // 0x0
	FGuid Guid; // 0x8
};

struct FMiniMapEntity {
	FVector vLocation; // 0x0
	MiniMapEntityType eType; // 0xc
	int32_t nSubType; // 0x10
	int32_t nProfileId; // 0x14
	TgMapTeam Team; // 0x18
	int32_t nVisionRange; // 0x1c
	char bIsDead : 1; // 0x20
	ObjectProperty RepInfo; // 0x24
	int32_t GenericState; // 0x2c
	int32_t nIdx; // 0x30
	char bMarked : 1; // 0x34
	char bVisibleOnMap : 1; // 0x34
	char bValidTarget : 1; // 0x34
	char bHovered : 1; // 0x34
	char bFlashHighlight : 1; // 0x34
	char bVisible : 1; // 0x34
	float fAlpha; // 0x38
	float fHealthPCT; // 0x3c
	ObjectProperty MIC; // 0x40
	char bHasNoIcon : 1; // 0x48
	int32_t nDrawSize; // 0x4c
	int32_t nHitSize; // 0x50
	FVector vRect; // 0x54
	FFogMaskData FogMaskData; // 0x60
};

struct FReduceActiveCooldownEntry {
	int32_t nDeviceId; // 0x0
	float fValue; // 0x4
	char bPercent : 1; // 0x8
	float fApplicationTime; // 0xc
	float fCooldownFloor; // 0x10
};

struct FUtilitySet {
	FUtilityFunctionList Functions; // 0x0
	FUtilityFunctionList Filters; // 0x24
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FTextureUVs {
	float U; // 0x0
	float V; // 0x4
	float UL; // 0x8
	float VL; // 0xc
};

struct FTerrainPatchBounds {
	float MinHeight; // 0x0
	float MaxHeight; // 0x4
	float MaxDisplacement; // 0x8
};

struct FHatPointer {
	int32_t Dummy; // 0x0
};

struct FMcpInventoryItem {
	FString InstanceItemId; // 0x0
	FString GlobalItemId; // 0x10
	int32_t Quantity; // 0x20
	int32_t QuantityIAP; // 0x24
	float Scalar; // 0x28
	FString LastUpdateTime; // 0x2c
	TArray<FMcpInventoryItemAttribute> Attributes; // 0x3c
};

struct FFontParameterValue {
	FName ParameterName; // 0x0
	ObjectProperty FontValue; // 0x8
	int32_t FontPage; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FInstancedMeshStreamGroup {
	char bDataInSeperateFile : 1; // 0x0
	char bAddedToStreamingSystem : 1; // 0x0
	int32_t FilenameIndex; // 0x4
	int32_t FileOffset; // 0x8
	int32_t FileSize; // 0xc
	int32_t UncompressedSize; // 0x10
	FBoxSphereBounds Bounds; // 0x14
	TArray<ComponentProperty> Components; // 0x30
	TArray<FVector4> BufferData; // 0x40
	EInstancedMeshStreamState State; // 0x50
	int32_t ExpirationFrameCount; // 0x54
	float DistanceSq; // 0x58
	float StreamInDistanceSq; // 0x5c
	float StreamOutDistanceSq; // 0x60
	int32_t MeshOffset; // 0x64
	int32_t MeshSize; // 0x68
};

struct FAchievementReward {
	FString RewardName; // 0x0
	FString Description; // 0x10
	FString Data; // 0x20
	EAchievementRewardType RewardType; // 0x30
};

struct FMcpIdMapping {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
};

struct FMeshAccessoryStorage {
	ComponentProperty m_Accessory; // 0x0
	ObjectProperty m_Source; // 0x8
};

struct FAmbientSoundSlot {
	ObjectProperty Wave; // 0x0
	float PitchScale; // 0x8
	float VolumeScale; // 0xc
	float Weight; // 0x10
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	EInterpMethodType InterpMethod; // 0x10
};

struct FPComActiveInputLightingPreset {
	int32_t LoopCount; // 0x0
	float CurrentTime; // 0x4
	float PlaybackRate; // 0x8
};

struct FPermissionsResult {
	FSessionMemberInfo User; // 0x0
	char bHasPermission : 1; // 0x30
};

struct FLUTBlender {
	TArray<ObjectProperty> LUTTextures; // 0x0
	TArray<float> LUTWeights; // 0x10
	char bHasChanged : 1; // 0x20
};

struct FCombatMessageInfo {
	int32_t nMsgId; // 0x0
	int32_t nSourceId; // 0x4
	CMTargetType eSourceType; // 0x8
	int32_t nSourceOwnerId; // 0xc
	int32_t nTargetId; // 0x10
	int32_t nTargetOwnerId; // 0x14
	CMTargetType eTargetType; // 0x18
	int32_t nAmount1; // 0x1c
	int32_t nAmount2; // 0x20
	int32_t nAmount3; // 0x24
	int32_t nSourceItemId; // 0x28
	int32_t nDamageTypeId; // 0x2c
	int32_t nLocationId; // 0x30
	int32_t nEventIndex; // 0x34
	int32_t nLocationX; // 0x38
	int32_t nLocationY; // 0x3c
};

struct FBotDifficultyDebugData {
	char CurrentlyActive : 1; // 0x0
	char DisparityDetected : 1; // 0x0
	char ChangesLockedOut : 1; // 0x0
	int32_t TimeBeforeTrigger; // 0x4
	EBotDifficultyLevel TaskForce1BotDifficulty; // 0x8
	EBotDifficultyLevel TaskForce2BotDifficulty; // 0x9
	float TaskForce1Skill; // 0xc
	float TaskForce2Skill; // 0x10
	FSkillLevelPercentageData SkillPercentages[0x2]; // 0x14
};

struct FUIFORGEENTRYDATA {
	char m_bActive : 1; // 0x0
	char m_bCanAfford : 1; // 0x0
	char m_bCanResurrect : 1; // 0x0
	char m_bIsDisabled : 1; // 0x0
	char m_bIsEquipped : 1; // 0x0
	char m_bIsMaxUpgraded : 1; // 0x0
	char m_bWasForged : 1; // 0x0
	char m_bIsAvailable : 1; // 0x0
	int32_t m_nRarityIndex; // 0x4
	int32_t m_nIconIndex; // 0x8
	int32_t m_nNameId; // 0xc
	int32_t m_nDescId; // 0x10
	int32_t m_nTypeId; // 0x14
	int32_t m_nTime; // 0x18
	int32_t m_nCost; // 0x1c
};

struct FPoisonBoltInfo {
	ObjectProperty pawnTarget; // 0x0
	ObjectProperty DeployableTarget; // 0x8
	char bEffectActive : 1; // 0x10
};

struct FPhysXEmitterVerticalProperties {
	char bDisableLod : 1; // 0x0
	int32_t ParticlesLodMin; // 0x4
	int32_t ParticlesLodMax; // 0x8
	int32_t PacketsPerPhysXParticleSystemMax; // 0xc
	char bApplyCylindricalPacketCulling : 1; // 0x10
	float SpawnLodVsFifoBias; // 0x14
};

struct FRandomAnimInfo {
	float Chance; // 0x0
	char LoopCountMin; // 0x4
	char LoopCountMax; // 0x5
	float BlendInTime; // 0x8
	FVector2D PlayRateRange; // 0xc
	char bStillFrame : 1; // 0x14
	char LoopCount; // 0x18
	float LastPosition; // 0x1c
};

struct FUIPING_DATA {
	char bActive : 1; // 0x0
	float fTimer; // 0x4
	FVector vLocation; // 0x8
	ObjectProperty pObj; // 0x14
};

struct FStateScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
};

struct FTimerData {
	char bLoop : 1; // 0x0
	char bPaused : 1; // 0x0
	FName FuncName; // 0x4
	float Rate; // 0xc
	float Count; // 0x10
	float TimerTimeDilation; // 0x14
	ObjectProperty TimerObj; // 0x18
};

struct FSelectedTerrainVertex {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Weight; // 0x8
};

struct FEquipDeviceInfo {
	int32_t nDeviceId; // 0x0
	int32_t nDeviceInstanceId; // 0x4
	int32_t nMode; // 0x8
	int32_t eDeviceSubtype; // 0xc
	int32_t eMovementType; // 0x10
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
};

struct FScreenShakeStruct {
	float TimeToGo; // 0x0
	float TimeDuration; // 0x4
	FVector RotAmplitude; // 0x8
	FVector RotFrequency; // 0x14
	FVector RotSinOffset; // 0x20
	FShakeParams RotParam; // 0x2c
	FVector LocAmplitude; // 0x30
	FVector LocFrequency; // 0x3c
	FVector LocSinOffset; // 0x48
	FShakeParams LocParam; // 0x54
	float FOVAmplitude; // 0x58
	float FOVFrequency; // 0x5c
	float FOVSinOffset; // 0x60
	EShakeParam FOVParam; // 0x64
	FName ShakeName; // 0x68
	char bOverrideTargetingDampening : 1; // 0x70
	float TargetingDampening; // 0x74
};

struct FFaceFXTrackKey {
	float StartTime; // 0x0
	FString FaceFXGroupName; // 0x4
	FString FaceFXSeqName; // 0x14
};

struct FStickyHitInfo {
	ObjectProperty HitActor; // 0x0
	int32_t NumHits; // 0x8
};

struct FGameStatGroup {
	EGameStatGroups Group; // 0x0
	int32_t Level; // 0x4
};

struct FTimedMarkedTarget {
	ObjectProperty Target; // 0x0
	float EndTimestamp; // 0x8
};

struct FVoxConversation {
	FString sTypeSpokenFirst; // 0x0
	FString sTypeSpokenSecond; // 0x10
	int32_t nTypeSpokenFirst; // 0x20
	int32_t nTypeSpokenSecond; // 0x24
};

struct FNxDestructibleDepthParameters {
	char TAKE_IMPACT_DAMAGE : 1; // 0x0
	char IGNORE_POSE_UPDATES : 1; // 0x0
	char IGNORE_RAYCAST_CALLBACKS : 1; // 0x0
	char IGNORE_CONTACT_CALLBACKS : 1; // 0x0
	char USER_FLAG_1 : 1; // 0x0
	char USER_FLAG_2 : 1; // 0x0
	char USER_FLAG_3 : 1; // 0x0
	char USER_FLAG_4 : 1; // 0x0
	EImpactDamageOverride ImpactDamageOverride; // 0x4
};

struct FLevelStreamingData {
	char bShouldBeLoaded : 1; // 0x0
	char bShouldBeVisible : 1; // 0x0
	char bShouldBlockOnLoad : 1; // 0x0
	ObjectProperty Level; // 0x4
};

struct FListener {
	ObjectProperty PortalVolume; // 0x0
	FVector Location; // 0x8
	FVector Up; // 0x14
	FVector Right; // 0x20
	FVector Front; // 0x2c
	FVector Velocity; // 0x38
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FTargetedBounceInfo {
	ObjectProperty PreviousTarget; // 0x0
	FVector BounceNormal; // 0x8
};

struct FUIKeyRepeatData {
	FName CurrentRepeatKey; // 0x0
	FDouble NextRepeatTime; // 0x8
};

struct FTgPlayerLoadoutData {
	int32_t nLoadoutTypeId; // 0x0
	int32_t nItemId; // 0x4
};

struct FTIP_Transition {
	FName TransName; // 0x0
	FName AnimName; // 0x8
};

struct FPotentialBounceInfo {
	ObjectProperty Target; // 0x0
	float Dist; // 0x8
};

struct FLensFlareElementCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	ObjectProperty WaveParam; // 0xc
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FUIAcquiredItem {
	ObjectProperty Card; // 0x0
	ObjectProperty mcEquipButton; // 0x8
	ObjectProperty mcEquippedText; // 0x10
	ObjectProperty mcEquipPrompt; // 0x18
	ObjectProperty mcStoreItemContainer; // 0x20
	ObjectProperty mcItemContainer; // 0x28
	ObjectProperty mcBoostContainer; // 0x30
	ObjectProperty mcBoostQuantity; // 0x38
	ObjectProperty mcChestContainer; // 0x40
	ObjectProperty mcChestQuantityText; // 0x48
	ObjectProperty mcChestChampionPortrait; // 0x50
	ObjectProperty mcChestChampionPortraitTexture; // 0x58
	ObjectProperty mcChestCardQuantity; // 0x60
	ObjectProperty mcChampionIcon; // 0x68
	ObjectProperty mcChampionImage; // 0x70
	ObjectProperty mcChampionTitle; // 0x78
	ObjectProperty mcItemIcon; // 0x80
	ObjectProperty mcCardIcon; // 0x88
	ObjectProperty mcCurrency; // 0x90
	ObjectProperty mcTexture; // 0x98
	ObjectProperty mcRarityFrame; // 0xa0
	ObjectProperty mcRarityText; // 0xa8
	ObjectProperty mcItemTitle; // 0xb0
	ObjectProperty mcItemAudio; // 0xb8
	ObjectProperty mcItemChampion; // 0xc0
	ObjectProperty mcItemChampionIcon; // 0xc8
	ObjectProperty mcItemQuantityText; // 0xd0
	ObjectProperty mcOwnedText; // 0xd8
	ObjectProperty mcOwnedCheckmark; // 0xe0
	ObjectProperty mcQuestIcon; // 0xe8
};

struct FMessageClip {
	int32_t nIcon; // 0x0
	int32_t nType; // 0x4
	int32_t nValue; // 0x8
	float fTimer; // 0xc
	float fDuration; // 0x10
	ObjectProperty pMovie; // 0x14
	ObjectProperty pTimer; // 0x1c
	ObjectProperty pTimerBar; // 0x24
};

struct FPointer {
	int32_t Dummy; // 0x0
};

struct FTraceHitInfo {
	ObjectProperty Material; // 0x0
	ObjectProperty PhysMaterial; // 0x8
	int32_t Item; // 0x10
	int32_t LevelIndex; // 0x14
	FName BoneName; // 0x18
	ComponentProperty HitComponent; // 0x20
};

struct FOverrideSkill {
	int32_t LeaderboardId; // 0x0
	TArray<FUniqueNetId> Players; // 0x4
	TArray<FDouble> Mus; // 0x14
	TArray<FDouble> Sigmas; // 0x24
};

struct FPendingClientAuth {
	ObjectProperty ClientConnection; // 0x0
	FUniqueNetId ClientUID; // 0x8
	float AuthTimestamp; // 0x10
	int32_t AuthRetryCount; // 0x14
};

struct FKeyParams {
	int32_t nValue; // 0x0
	char bDirect : 1; // 0x4
	char bCentered : 1; // 0x4
	char bFrameless : 1; // 0x4
	FString sMessage; // 0x8
	FString sCommand; // 0x18
	FString sValue; // 0x28
};

struct FPComPositionHistoryData {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Velocity; // 0x18
	EPhysics Physics; // 0x24
	char bWasFalling : 1; // 0x28
	char bCollideActors : 1; // 0x28
	char bBlockActors : 1; // 0x28
};

struct FPolySegmentSpan {
	FPointer Poly; // 0x0
	FVector P1; // 0x8
	FVector P2; // 0x14
};

struct FPhysXSimulationProperties {
	char bUseHardware : 1; // 0x0
	char bFixedTimeStep : 1; // 0x0
	float TimeStep; // 0x4
	int32_t MaxSubSteps; // 0x8
};

struct FAnimNotifyParticleCacheEntry {
	char bCached : 1; // 0x0
	ObjectProperty Notify; // 0x4
	ComponentProperty PSC; // 0xc
};

struct FJsonFeatureData {
	FString sId; // 0x0
	FString sHeader; // 0x10
	FString sSubheader; // 0x20
	FString sDesc; // 0x30
	FString sData; // 0x40
	FString sData2; // 0x50
	int32_t nMinLevel; // 0x60
	int32_t nMaxLevel; // 0x64
	int32_t nProbability; // 0x68
	int32_t nVersion; // 0x6c
	int32_t nNumForcedPresentations; // 0x70
	int32_t nType; // 0x74
	int32_t nXpos; // 0x78
	int32_t nYpos; // 0x7c
	int32_t nWidth; // 0x80
	int32_t nHeight; // 0x84
	char bIsUsed : 1; // 0x88
	char bIsLive : 1; // 0x88
	ObjectProperty Texture; // 0x8c
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FDeferredAnimNotifyEndInformation {
	ObjectProperty Notify; // 0x0
	float CurrentTime; // 0x8
};

struct FManagerImage {
	FString strImageName; // 0x0
	ObjectProperty pTexture; // 0x10
};

struct FQWord {
	int32_t A; // 0x0
	int32_t B; // 0x4
};

struct FAudioClassInfo {
	int32_t NumResident; // 0x0
	int32_t SizeResident; // 0x4
	int32_t NumRealTime; // 0x8
	int32_t SizeRealTime; // 0xc
};

struct FVehicleState {
	FRigidBodyState RBState; // 0x0
	char ServerBrake; // 0x40
	char ServerGas; // 0x41
	char ServerSteering; // 0x42
	char ServerRise; // 0x43
	char bServerHandbrake : 1; // 0x44
	int32_t ServerView; // 0x48
};

struct FHostMigrationState {
	EHostMigrationProgress HostMigrationProgress; // 0x0
	float HostMigrationElapsedTime; // 0x4
	float HostMigrationTravelCountdown; // 0x8
	FString HostMigrationTravelURL; // 0xc
	char bHostMigrationEnabled : 1; // 0x1c
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FAoeActorInRangeData {
	ObjectProperty Actor; // 0x0
	FVector Location; // 0x8
};

struct FSimulatedProjectileOverrides {
	int32_t FireModeID; // 0x0
	float RemoteProximityDist; // 0x4
	float Range; // 0x8
	float Speed; // 0xc
	float GravityScale; // 0x10
	float FireAngle; // 0x14
};

struct FLayerBlendInput {
	FName LayerName; // 0x0
	ELandscapeLayerBlendType BlendType; // 0x8
	FExpressionInput LayerInput; // 0xc
	FExpressionInput HeightInput; // 0x40
	float PreviewWeight; // 0x74
	FPointer InstanceOverride; // 0x78
};

struct FColumnMetaData {
	FString ColumnName; // 0x0
	FString StatName; // 0x10
};

struct FAddMappingRequest {
	FString McpId; // 0x0
	FString ExternalId; // 0x10
	FString ExternalType; // 0x20
	ObjectProperty Request; // 0x30
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

struct FBotSpawnCounter {
	int32_t BotId; // 0x0
	int32_t CurrentCount; // 0x4
};

struct FAimAssistKeyframeDebugVals {
	int32_t DebugState; // 0x0
	FName curveMin[0x8]; // 0x4
	FName curveMax[0x8]; // 0x44
	float valMin[0x8]; // 0x84
	float valMax[0x8]; // 0xa4
	float valInterp[0x8]; // 0xc4
	float valFinal[0x8]; // 0xe4
};

struct FSilhouetteColorSettings {
	char bUsesMultipleColors : 1; // 0x0
	char bUsesEnemyRangeColorVariance : 1; // 0x0
	FColor BlueColor; // 0x4
	FColor EnemyColor; // 0x8
	FColor PurpleColor; // 0xc
	FColor OrangeColor; // 0x10
	FColor EnemyTargetedEffectiveRangeColor; // 0x14
	FColor EnemyTargetedMaxRangeColor; // 0x18
	FColor RedColor; // 0x1c
};

struct FConnectedPeerInfo {
	FUniqueNetId PlayerID; // 0x0
	ENATType NatType; // 0x8
	char bLostConnectionToHost : 1; // 0xc
};

struct FKCachedConvexData {
	TArray<FKCachedConvexDataElement> CachedConvexElements; // 0x0
};

struct FTGT_REG_LINK {
	FPointer NextLink; // 0x0
	ObjectProperty RegObject; // 0x8
	ObjectProperty RegFunction; // 0x10
};

struct FMMStats_Timer {
	char bInProgress : 1; // 0x0
	FDouble MSecs; // 0x4
};

struct FSceneData {
	FName nmSceneName; // 0x0
	ObjectProperty pData; // 0x8
};

struct FRigidBodyState {
	FVector Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector LinVel; // 0x20
	FVector AngVel; // 0x2c
	char bNewData; // 0x38
};

struct FAchievementDetails {
	int32_t Id; // 0x0
	FString StringId; // 0x4
	FString AchievementName; // 0x14
	FString Description; // 0x24
	FString HowTo; // 0x34
	ObjectProperty Image; // 0x44
	char MonthEarned; // 0x4c
	char DayEarned; // 0x4d
	char YearEarned; // 0x4e
	char DayOfWeekEarned; // 0x4f
	int32_t GamerPoints; // 0x50
	char bIsSecret : 1; // 0x54
	char bWasAchievedOnline : 1; // 0x54
	char bWasAchievedOffline : 1; // 0x54
	EAchievementUnlockType UnlockType; // 0x58
	FQWord ChallengeWindowBegin; // 0x5c
	FQWord ChallengeWindowEnd; // 0x64
	FString DeepLink; // 0x6c
	FQWord EstimatedUnlockTime; // 0x7c
	char bIsRevoked : 1; // 0x84
	EAchievementParticipationType ParticipationType; // 0x88
	TArray<FString> PlatformsAvailableOn; // 0x8c
	EAchievementProgressState ProgressState; // 0x9c
	TArray<FAchievementReward> Rewards; // 0xa0
	TArray<FAchievementMediaAsset> MediaAssets; // 0xb0
	FString ProductID; // 0xc0
	FString ServiceConfigurationID; // 0xd0
	TArray<FAchievementTitleAssociation> TitleAssociations; // 0xe0
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FCachedTgAnimNodeStanceTransitionInfo {
	int32_t Index; // 0x0
	ObjectProperty Node; // 0x4
};

struct FParticleEventData {
	int32_t Type; // 0x0
	FName EventName; // 0x4
	float EmitterTime; // 0xc
	FVector Location; // 0x10
	FVector Direction; // 0x1c
	FVector Velocity; // 0x28
};

struct FOnlineGameSearchORClause {
	TArray<FOnlineGameSearchParameter> OrParams; // 0x0
};

struct FSoundEventMapping {
	FName SoundEventName; // 0x0
	ObjectProperty SoundToPlay; // 0x8
};

struct FWeaponMeshSwapStrategy {
	char bPlayPutAway : 1; // 0x0
	EWeaponMeshSwapRetrieveStrategy RetrieveStrategy; // 0x4
	char bClearEquipPoint : 1; // 0x8
};

struct FMultiMap_Mirror {
	FSet_Mirror Pairs; // 0x0
};

struct FAkEventTrackKey {
	float Time; // 0x0
	ObjectProperty Event; // 0x4
};

struct FNotifyTrackKey {
	float Time; // 0x0
	ObjectProperty Notify; // 0x4
};

struct FMeshData {
	MenuContentDataType ContentDataType; // 0x0
	ObjectProperty MainMeshInfo; // 0x4
	FName CameraName; // 0xc
};

struct FSocialPostPrivileges {
	char bCanPostImage : 1; // 0x0
	char bCanPostLink : 1; // 0x0
};

struct FSoundThemeBinding {
	FName ThemeName; // 0x0
	ObjectProperty Theme; // 0x8
	FString ThemeClassName; // 0x10
};

struct FLevelStreamingNameCombo {
	ObjectProperty Level; // 0x0
	FName LevelName; // 0x8
};

struct FDebugPropertyMod {
	FString sProperty; // 0x0
	float fModifier; // 0x10
	char bPercent : 1; // 0x14
	ObjectProperty pEffect; // 0x18
};

struct FSettingsData {
	ESettingsDataType Type; // 0x0
	int32_t Value1; // 0x4
	FPointer Value2; // 0x8
};

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	FString Map; // 0x24
	TArray<FString> Op; // 0x34
	FString Portal; // 0x44
	FString SecureAddress; // 0x54
	int32_t Valid; // 0x64
};

struct FInputMatchRequest {
	TArray<FInputEntry> Inputs; // 0x0
	ObjectProperty MatchActor; // 0x10
	FName MatchFuncName; // 0x18
	DelegateProperty MatchDelegate; // 0x20
	FName FailedFuncName; // 0x30
	FName RequestName; // 0x38
	int32_t MatchIdx; // 0x40
	float LastMatchTime; // 0x44
};

struct FSessionUpdateInfo {
	TArray<FSessionMemberInfo> MembersJoined; // 0x0
	TArray<FSessionMemberInfo> MembersLeft; // 0x10
	char bHostDeviceTokenChanged : 1; // 0x20
	char bInitializationStateChanged : 1; // 0x20
	char bMatchmakingStatusChanged : 1; // 0x20
	char bMemberJoinedOrLeft : 1; // 0x20
	char bMemberStatusChanged : 1; // 0x20
	char bSessionJoinabilityChanged : 1; // 0x20
	char bCustomPropertyChange : 1; // 0x20
	char bMemberCustomPropertyChange : 1; // 0x20
};

struct FAnimControlTrackKey {
	float StartTime; // 0x0
	FName AnimSeqName; // 0x4
	float AnimStartOffset; // 0xc
	float AnimEndOffset; // 0x10
	float AnimPlayRate; // 0x14
	char bLooping : 1; // 0x18
	char bReverse : 1; // 0x18
};

struct FEffectInstanceInfo {
	float fTimestamp; // 0x0
	float fDamageValue; // 0x4
};

struct FQueueMessage {
	int32_t Id; // 0x0
	TG_CHAT_PRIORITY Priority; // 0x4
	char bHasPlayedSound : 1; // 0x8
	int32_t VoicePackId; // 0xc
	int32_t VoiceBotId; // 0x10
	int32_t VoiceSkinId; // 0x14
	FString VoicePackCustomSuffix; // 0x18
	ObjectProperty SoundObject; // 0x28
};

struct FSubscribedInputEventParameters : FInputEventParameters {
	FName InputAliasName; // 0x20
};

struct FAchievementProgressStat {
	int32_t AchievementId; // 0x0
	int32_t Progress; // 0x4
	int32_t MaxProgress; // 0x8
	char bUnlock : 1; // 0xc
};

struct FGoblinLootInfo {
	int32_t nTable; // 0x0
	float fChance; // 0x4
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FPropertyInfo {
	FName PropertyName; // 0x0
	char bModifyProperty : 1; // 0x8
	FString PropertyValue; // 0xc
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FAdjustHealParams {
	ObjectProperty Dev; // 0x0
	FImpactInfo Impact; // 0x8
	float fBaseHeal; // 0x88
	int32_t nPropertyId; // 0x8c
};

struct FHitReactionInfo {
	FVector2D vDesiredAngle; // 0x0
	float fHitTime; // 0x8
};

struct FLifeTimeCalcInfo {
	char bInitialized : 1; // 0x0
	float fReductionFromPawnProtections; // 0x4
	float fReductionFromCCProtectionsPerc; // 0x8
	float fReductionFromDoTProtections; // 0xc
	float fReductionFromDoTProtectionsPerc; // 0x10
	int32_t nCrowdControlCount; // 0x14
	char bCrowdControlImmune : 1; // 0x18
	float m_fCalculatedLifeTime; // 0x1c
};

struct FCheckpointRecord {
	char bCollideActors : 1; // 0x0
};

struct FExternalTexture {
	FString Resource; // 0x0
	ObjectProperty Texture; // 0x10
};

struct FBuildingMeshInfo {
	ObjectProperty Mesh; // 0x0
	float DimX; // 0x8
	float DimZ; // 0xc
	float Chance; // 0x10
	ComponentProperty Translation; // 0x14
	ComponentProperty Rotation; // 0x1c
	char bMeshScaleTranslation : 1; // 0x24
	char bOverrideMeshLightMapRes : 1; // 0x24
	int32_t OverriddenMeshLightMapRes; // 0x28
	TArray<ObjectProperty> MaterialOverrides; // 0x2c
	TArray<FBuildingMatOverrides> SectionOverrides; // 0x3c
};

struct FsPingInfo {
	ObjectProperty pingedPri; // 0x0
	float fStartTime; // 0x8
	FVector vPingedLoc; // 0xc
	char bPinging : 1; // 0x18
	PING_TYPE eType; // 0x1c
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FDifficultyConfig {
	EBotDifficultyLevel DifficultyLevel; // 0x0
	float DamageMitigationPct; // 0x4
	float FireRatePct; // 0x8
	float InstantFireAccuracyReduction; // 0xc
	float ProjectileAccuracyReduction; // 0x10
};

struct FGameTypePrefix {
	FString Prefix; // 0x0
	char bUsesCommonPackage : 1; // 0x10
	FString GameType; // 0x14
	TArray<FString> AdditionalGameTypes; // 0x24
	TArray<FString> ForcedObjects; // 0x34
};

struct FPBParamSwatch {
	FName SwatchName; // 0x0
	TArray<FPBMaterialParam> Params; // 0x8
};

struct FAnimTag {
	FString Tag; // 0x0
	TArray<FString> Contains; // 0x10
};

struct FAnimSetBakeAndPruneStatus {
	FString AnimSetName; // 0x0
	char bReferencedButUnused : 1; // 0x10
	char bSkipBakeAndPrune : 1; // 0x10
	char bSkipCooking : 1; // 0x10
};

struct FFriendsQuery {
	FUniqueNetId UniqueId; // 0x0
	char bIsFriend : 1; // 0x8
};

struct FPostProcessSettingsOverride {
	FPostProcessSettings Settings; // 0x0
	char bBlendingIn : 1; // 0x180
	char bBlendingOut : 1; // 0x180
	float CurrentBlendInTime; // 0x184
	float CurrentBlendOutTime; // 0x188
	float BlendInDuration; // 0x18c
	float BlendOutDuration; // 0x190
	float BlendStartTime; // 0x194
	FInterpCurveFloat TimeAlphaCurve; // 0x198
};

struct FParticleSystemReplayFrame {
	TArray<FParticleEmitterReplayFrame> Emitters; // 0x0
};

struct FTalentInfo {
	int32_t m_nDeviceId; // 0x0
	float m_fCustomValue1; // 0x4
	float m_fCustomValue2; // 0x8
	float m_fCustomValue3; // 0xc
	float m_fCustomValue4; // 0x10
	float m_fCustomValue5; // 0x14
	int32_t m_nEffectGroupId; // 0x18
};

struct FTrackedProjectileInitData {
	int32_t FireModeID; // 0x0
	int32_t ProjectileId; // 0x4
	FVector SpawnLocation; // 0x8
	FVector SpawnRotation; // 0x14
	FVector SpawnVelocity; // 0x20
	float SpawnServerTime; // 0x2c
};

struct FRBEdgeAngleInfo {
	float Angle; // 0x0
};

struct FAmmoTransaction {
	float TransactionTimestamp; // 0x0
	int32_t TransactionId; // 0x4
	int32_t ClipAmountChanged; // 0x8
	int32_t CarriedAmountChanged; // 0xc
	char FilledClip : 1; // 0x10
};

struct FDeviceToCharacterID {
	int32_t CharacterID; // 0x0
	int32_t DeviceID; // 0x4
};

struct FLinearDOFSetup {
	char bLimited; // 0x0
	float LimitSize; // 0x4
};

struct FUIDataStoreInputAlias {
	FName AliasName; // 0x0
	FUIInputKeyData PlatformInputKeys[0x3]; // 0x8
};

struct FEventsBase {
	FGameEvents TotalEvents; // 0x0
	TArray<FGameEvents> EventsByClass; // 0x48
};

struct FSoundNodeEditorData {
	int32_t NodePosX; // 0x0
	int32_t NodePosY; // 0x4
};

struct FTeamEvents {
	FGameEvents TotalEvents; // 0x0
	FWeaponEvents WeaponEvents; // 0x48
	FDamageEvents DamageAsPlayerEvents; // 0xa0
	FDamageEvents DamageAsTargetEvents; // 0xf8
	FProjectileEvents ProjectileEvents; // 0x150
	FPawnEvents PawnEvents; // 0x1a8
};

struct FQueuedAvatarRequest {
	float CheckTime; // 0x0
	int32_t NumberOfAttempts; // 0x4
	FUniqueNetId PlayerNetId; // 0x8
	int32_t Size; // 0x10
	DelegateProperty ReadOnlineAvatarCompleteDelegate; // 0x14
};

struct FUICustomItemData {
	ObjectProperty pButton; // 0x0
	char bUnlockable : 1; // 0x8
	char bChest : 1; // 0x8
	char bCollection : 1; // 0x8
	char bVIPExclusive : 1; // 0x8
	char bVIPReward : 1; // 0x8
};

struct FAimTransform {
	FQuat Quaternion; // 0x0
	FVector Translation; // 0x10
};

struct FCompartmentRunList {
	char RigidBody : 1; // 0x0
	char Fluid : 1; // 0x0
	char Cloth : 1; // 0x0
	char SoftBody : 1; // 0x0
};

struct FPBRuleLink {
	ObjectProperty NextRule; // 0x0
	FName LinkName; // 0x8
};

struct FDefaultRepulsorData {
	char TargetType; // 0x0
	float MaxEnemyWeight; // 0x4
	float MaxFriendlyWeight; // 0x8
	ERepulsorWeightMethod SolverType; // 0xc
};

struct FDamagePair {
	FName DamageCauserName; // 0x0
	FDamageParameters Params; // 0x8
};

struct FProfileSettingsCache {
	ObjectProperty Profile; // 0x0
	TArray<DelegateProperty> ReadDelegates; // 0x8
	TArray<DelegateProperty> WriteDelegates; // 0x18
	TArray<DelegateProperty> ProfileDataChangedDelegates; // 0x28
};

struct FTgSilhouetteInfo {
	SafeObjectProperty Silhouette; // 0x0
	ComponentProperty ParentMesh; // 0xc
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
	FString Name; // 0x44
	FString URL; // 0x54
	int32_t MatchType; // 0x64
	char bDisableDedicatedServerSearches : 1; // 0x68
	TArray<FName> MapCycle; // 0x6c
	TArray<FInventorySwap> InventorySwaps; // 0x7c
};

struct FAchievementMappingInfo {
	int32_t AchievementId; // 0x0
	FName AchievementName; // 0x4
	int32_t ViewId; // 0xc
	int32_t ProgressCount; // 0x10
	int32_t MaxProgress; // 0x14
	char bAutoUnlock : 1; // 0x18
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	ObjectProperty CurveObject; // 0x10
};

struct FHitMarkerInfo {
	char bPlayed : 1; // 0x0
	float DamageAmount; // 0x4
	float fMaxDamageAmount; // 0x8
	TArray<FString> HitActors; // 0xc
	char bIsShieldHit : 1; // 0x1c
	FExtraDamageInfo ExtraInfo; // 0x20
	float fAccumulatedDamage; // 0x24
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FForgeItem {
	int32_t nTime; // 0x0
	int32_t nShards; // 0x4
	int32_t nLootTable; // 0x8
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FTournamentRound {
	TArray<FRoundMatchup> pMatchups; // 0x0
};

struct FCIHStack {
	ObjectProperty pTarget; // 0x0
	int32_t nStackCount; // 0x8
	float fLifetime; // 0xc
};

struct FConnectionBandwidthStats {
	int32_t UpstreamRate; // 0x0
	int32_t DownstreamRate; // 0x4
	int32_t RoundtripLatency; // 0x8
};

struct FCollisionSettingsProjectile {
	char bPassThroughFriends : 1; // 0x0
	char bPassThroughEnemies : 1; // 0x0
	char bPassThroughShields : 1; // 0x0
	char bPassThroughBlocker : 1; // 0x0
	char bPassThroughPickups : 1; // 0x0
	char bExplodeOnShields : 1; // 0x0
	char bExplodeOnBlockers : 1; // 0x0
	char bHitAndPassThrough : 1; // 0x0
	char bHitOnTick : 0; // 0x0
	char bOnlyHitOnceOnPassThrough : 0; // 0x0
};

struct FPatchVersionNumber {
	int32_t nVersionMajor; // 0x0
	int32_t nVersionMinor; // 0x4
	int32_t nVersionPatch; // 0x8
	int32_t nVersionBuild; // 0xc
};

struct FClientBandwidthTestData {
	EMeshBeaconBandwidthTestType TestType; // 0x0
	EMeshBeaconBandwidthTestState CurrentState; // 0x1
	int32_t NumBytesToSendTotal; // 0x4
	int32_t NumBytesSentTotal; // 0x8
	int32_t NumBytesSentLast; // 0xc
	float ElapsedTestTime; // 0x10
};

struct FModeData {
	float c_fBuildupTime; // 0x0
	char c_bContinuousFire : 1; // 0x4
	char c_FxInstantFire : 1; // 0x4
	FName c_nmOffhandAnimationType; // 0x8
	char c_bScaleFireAnimsWithRefire : 1; // 0x10
	char c_bInterruptAnimOnRefire : 1; // 0x10
	float c_fEffectRadius; // 0x14
	float c_fMaxRange; // 0x18
	float c_fZoomFOV; // 0x1c
	ObjectProperty c_WhileFiringCameraAnim; // 0x20
};

struct FMolotovGrowthInfo {
	int32_t nStrandAllotment; // 0x0
	int32_t nMaxSpots; // 0x4
	int32_t nMaxInitialStrands; // 0x8
	float fStrandGrowthFraction; // 0xc
	char bStrandsAreSaturated : 1; // 0x10
	int32_t nCenterGrowthVariance; // 0x14
	int32_t nSpreadsPerTick; // 0x18
};

struct FTextureLinkedListMirror {
	FPointer Element; // 0x0
	FPointer Next; // 0x8
	FPointer PrevLink; // 0x10
};

struct FTGEQUIP_SLOTS_STRUCT {
	int32_t SlotIndices[0x14]; // 0x0
	int32_t MiscItems[0x14]; // 0x50
};

struct FOnlineFriendMessage {
	FUniqueNetId SendingPlayerId; // 0x0
	FString SendingPlayerNick; // 0x8
	char bIsFriendInvite : 1; // 0x18
	char bIsGameInvite : 1; // 0x18
	char bWasAccepted : 1; // 0x18
	char bWasDenied : 1; // 0x18
	FString Message; // 0x1c
};

struct FRecognisableWord {
	int32_t Id; // 0x0
	FString ReferenceWord; // 0x4
	FString PhoneticWord; // 0x14
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FAuthSession : FBaseAuthSession {
	EAuthStatus AuthStatus; // 0x20
	int32_t AuthTicketUID; // 0x24
};

