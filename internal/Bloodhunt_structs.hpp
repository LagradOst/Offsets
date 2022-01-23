// Created by BlueFire1337
// Updated 2021-11-22
// Generated 2022-01-23

#pragma once

struct FTigerSeasonConfigResponse_DailyFinalReward {
	TArray<FString> DailyFinalRewardIds; // 0x0
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FINTLLocalNotification {
	int32_t NotificationID; // 0x0
	int32_t ActionType; // 0x4
	int32_t SoundEnabled; // 0x8
	int32_t Lights; // 0xc
	int32_t Vibrate; // 0x10
	int32_t FireTime; // 0x14
	FString Title; // 0x18
	FString Content; // 0x28
	FString TickerText; // 0x38
	FString ActionParameter; // 0x48
	FString RingUri; // 0x58
	FString SmallIcon; // 0x68
};

struct FINTLComplianceResult : FINTLBaseResult {
	int32_t AdultStatus; // 0x40
	int32_t ParentCertificateStatus; // 0x44
	FString ParentCertificateStatusExpiration; // 0x48
	int32_t EUUserAgreeStatus; // 0x58
	FString CountryCode; // 0x60
	int32_t AdultAge; // 0x70
	int32_t GameGrade; // 0x74
	int32_t CertificateType; // 0x78
	FString AdultStatusExpiration; // 0x80
	FString TS; // 0x90
	bool IsEEA; // 0xa0
};

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
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

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FIntervalCountdown {
	float Interval; // 0x0
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

struct FTigerPatrollingHelicopterEventTicket {
	TWeakObjectPtr<ATigerPlayer> BloodHuntTarget; // 0x0
};

struct FTigerTelemetryEventAcePlayerConnectEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	int8_t Gender; // 0xb0
	int64_t Experience; // 0xb8
	int64_t money; // 0xc0
	char connect_flag; // 0xc8
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FTigerWaveData {
	FTigerRevealedWave RevealData; // 0x58
};

struct FTigerTelemetryEventMatchSession_ItemDrop : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	FString ItemId; // 0x40
	int32_t ItemDropQuantity; // 0x50
	FString DropLocation; // 0x58
};

struct FShMapInfo {
	FString sacc_token; // 0x0
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

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FTigerPlayerPresenceInfo {
	FString PlayerId; // 0x0
	FString PlayerLocation; // 0x10
	bool bIsOnline; // 0x20
};

struct FTigerResponse_GetVersionIsValid : FTigerResponseEnvelope {
	bool VersionIsValid; // 0x18
	FString PublicIpv4; // 0x20
	FString PublicIpv6; // 0x30
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
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

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
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

struct FTigerElysiumNpcData {
	TSoftObjectPtr<USkeletalMesh> BodyMesh; // 0x0
	TSoftObjectPtr<USkeletalMesh> HeadMesh; // 0x28
	TSoftObjectPtr<USkeletalMesh> HairMesh; // 0x50
	TSoftObjectPtr<USkeletalMesh> HoodieMesh; // 0x78
	FTigerElysiumNpcProp FirstPropAsset; // 0xa0
	FTigerElysiumNpcProp SecondPropAsset; // 0x130
	FTigerElysiumNpcAnimationData AnimationData; // 0x1c0
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
};

struct FSharkTokenBucket {
	float Capacity; // 0x4
	float TokenFillRatePerSecond; // 0x8
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FAkAudioSession {
	EAkAudioSessionCategory AudioSessionCategory; // 0x0
	uint32_t AudioSessionCategoryOptions; // 0x4
	EAkAudioSessionMode AudioSessionMode; // 0x8
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
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

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FTigerResponse_Character {
	char CharacterId; // 0x0
	FString Data; // 0x8
	int64_t LastUsedAt; // 0x18
};

struct FTigerTelemetryEventSocial_FriendRequestResponse : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString IDRequestSentFrom; // 0x58
	int32_t RequestResponse; // 0x68
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FAkMidiGeneric : FAkMidiEventBase {
	char Param1; // 0x2
	char Param2; // 0x3
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
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

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FTigerFriendsAccountIdSet {
	FString PlatformUserId; // 0x0
	FString PlayerId; // 0x10
	FString SharkmobUserId; // 0x20
};

struct FTigerGraphicsQualityPreset {
	int32_t ViewDistanceQuality; // 0x0
	int32_t MaterialQuality; // 0x4
	int32_t TextureQuality; // 0x8
	int32_t TextureFilteringQuality; // 0xc
	int32_t VisualEffectQuality; // 0x10
	int32_t FoliageQuality; // 0x14
	int32_t LightingQuality; // 0x18
	int32_t VolumetricFogQuality; // 0x1c
	int32_t AmbientOcclusionQuality; // 0x20
	int32_t ScreenSpaceReflectionQuality; // 0x24
	int32_t ShadowQuality; // 0x28
	int32_t AntiAliasingQuality; // 0x2c
	int32_t SubSurfaceScatteringQuality; // 0x30
	int32_t MotionBlurQuality; // 0x34
	int32_t BloomQuality; // 0x38
	int32_t LensFlareQuality; // 0x3c
	bool bUseChromaticAberration; // 0x40
	bool bUseFilmGrain; // 0x41
	bool bUseLightShafts; // 0x42
};

struct FTigerTooltipAction {
	FText ActionText; // 0x0
	FName InputAction; // 0x18
	bool bIsHoldAction; // 0x20
	bool bListenForOnPreviewKeyDown; // 0x21
	bool bShouldConsumeInput; // 0x22
	EHorizontalAlignment HAlign; // 0x23
	FDelegate OnPressed; // 0x24
	FDelegate OnReleased; // 0x34
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FTigerTelemetryEventProgression_BattlepassLevelUp : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString BattlepassExperienceSource; // 0x58
	int32_t BattlepassLevelBefore; // 0x68
	int32_t BattlepassLevelAfter; // 0x6c
	int32_t BattlepassExperienceBefore; // 0x70
	int32_t BattlepassExperienceAfter; // 0x74
	int32_t ChangedBattlepassExperience; // 0x78
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
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

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FTigerEntityCheckpointsSettings {
	int32_t MinEntityCheckpoints; // 0x0
	int32_t MaxEntityCheckpoints; // 0x4
	float MinAutomaticSupplyDropCallInDelay; // 0x8
	float MaxAutomaticSupplyDropCallInDelay; // 0xc
};

struct FResponse_StartMatchmaking {
	bool OK; // 0x0
	FString Error; // 0x8
};

struct FTigerClientCategoryDefinition {
	ETigerPersistentStoreCategory Category; // 0x0
	TArray<FTigerClientItemDefinition> AvailableItems; // 0x8
};

struct FInAppPurchaseProductInfo {
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DISPLAYNAME; // 0x20
	FString DisplayDescription; // 0x30
	FString DisplayPrice; // 0x40
	float RawPrice; // 0x50
	FString CurrencyCode; // 0x58
	FString CurrencySymbol; // 0x68
	FString DecimalSeparator; // 0x78
	FString GroupingSeparator; // 0x88
	FString ReceiptData; // 0x98
};

struct FTigerShockwaveWallData {
	TArray<UCurveFloat*> SpeedCurve; // 0x0
	TArray<UCurveVector*> EffectExtentCurve; // 0x10
	TArray<FVector> TerrainSweepBoxExtent; // 0x20
	TArray<float> TravelDistance; // 0x30
	TArray<float> Damage; // 0x40
	TArray<UTigerBuff*> OnHitBuff; // 0x50
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

struct FTigerAnimationStatistic {
	FString Name; // 0x0
	int32_t RelativeTimePlayed; // 0x10
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FTigerResponseEnvelope {
	bool OK; // 0x0
	bool Retryable; // 0x1
	FString Error; // 0x8
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
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

struct FTigerInvestigationTicket {
	TArray<TWeakObjectPtr<ATigerNPC>> WaitList; // 0x0
	TWeakObjectPtr<ATigerNPC> CurrentInvestigator; // 0x10
};

struct FTigerInventoryCombinedItemValue {
	FTigerInventoryItemOwnerType Key; // 0x0
	UTigerInventoryItemBase* Value; // 0x8
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FTigerTelemetryEventStore_CurrencySpend : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString Country; // 0x58
	FString StoreEntryID; // 0x68
	int32_t Count; // 0x78
	int32_t CurrencyType; // 0x7c
	int32_t Price; // 0x80
	int32_t DiscountedPrice; // 0x84
	int32_t TotalDiscountedPrice; // 0x88
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
};

struct FTigerGraphicsSettingsPS5 {
	ETigerGraphicsQualityPS5 QualityPreset; // 0x0
	float Gamma; // 0x4
	bool bUseMotionBlur; // 0x8
	bool bUseChromaticAberration; // 0x9
	bool bUseFilmGrain; // 0xa
	int32_t SavedVersion; // 0xc
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FTigerVendorStoreCategoryItem {
	FTigerMetaStoreEntry StoreEntry; // 0x0
	TSoftClassPtr<UObject> ItemClassPath; // 0x50
	UTigerInventoryItemBase* BaseItem; // 0x78
	int32_t Cost; // 0x80
	int32_t InventoryCount; // 0x84
	FTigerItemId SoftCurrencyId; // 0x88
	int32_t StorePriority; // 0x90
};

struct FSharkRandomDeviation {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
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

struct FTigerDamageSource {
	FVector DamageSourceDirection; // 0x0
	FVector DamageSourceLocation; // 0xc
	float NewHealth; // 0x18
	float DamageAmount; // 0x1c
	bool bIsRedGasDamage; // 0x20
	bool bHasDirection; // 0x21
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

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
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

struct FTigerResponse_GetGameSessionDsData : FTigerResponseEnvelope {
	int32_t GameSessionPlayerCount; // 0x18
	FString GameSessionId; // 0x20
	ETigerGroupingMode GROUPINGMODE; // 0x30
	FString GroupID; // 0x38
	FString Ip; // 0x48
	int32_t Port; // 0x58
	bool EnableFakeMatchmakingDelay; // 0x5c
	uint32_t GameSessionBotCount; // 0x60
	int32_t GroupSize; // 0x64
	bool MatchSettingsVariationElected; // 0x68
	FTigerResponse_MatchSettingsVariationConfig MatchSettingsVariationConfig; // 0x70
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FShChannelInfo {
	FShMapInfo map_info; // 0x0
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

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FTigerChallengeRequirementClan : FTigerChallengeRequirementBase {
	bool bSpecificClan; // 0x8
	ETigerClan RequiredClan; // 0x9
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

struct FTigerPersistentItemDefinition {
	FTigerItemId ItemId; // 0x0
	FSoftObjectPath ItemClassPath; // 0x8
	int32_t Cost; // 0x20
	int32_t StorePriority; // 0x24
	FTigerItemId SoftCurrencyId; // 0x28
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FTigerPersistentPlayerData {
	FTigerQuestPersistentProgress QuestProgress; // 0x0
	FTigerDailyChallengePersistentProgress DailyChallengeProgress; // 0x50
	FTigerWeeklyChallengePersistentProgress WeeklyChallengeProgress; // 0xa8
	FTigerMasteryChallengePersistentProgress MasteryChallengeProgress; // 0x108
	FTigerPersistentSeasonMatchStats SeasonMatchStats; // 0x168
	int32_t MatchesPlayed; // 0x188
	TArray<int32_t> MatchesPlayedPerArchetype; // 0x190
	TArray<FTigerGrimoireEntryStatusStruct> GrimoireEntries; // 0x1a0
	TArray<int32_t> ReadDialogues; // 0x1b0
	TArray<FTigerPersistentThrallData> PersistentThrallData; // 0x1c0
	TArray<FTigerPersistentMissionData> PersistentThrallMissions; // 0x1d0
	TArray<FTigerPersistentCollectibleData> PersistentCollectibleData; // 0x1e0
	int32_t SharedThrallExp; // 0x1f0
	FTigerSuggestedArticlesData GrimoireSuggestedArticlesData; // 0x1f8
	TArray<FTigerReadDialogueCategoryWrapper> ReadDialogueCategoriesContainer; // 0x210
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FTigerTelemetryEventMatchSession_ItemConsumption : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	FString ItemId; // 0x40
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FTigerDamageContext {
	UObject* DamagingUObject; // 0x8
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	bool bClientRelevant; // 0x50
	bool bDedicatedServerRelevant; // 0x51
	bool bListenServerRelevant; // 0x52
	bool bStandaloneRelevant; // 0x53
	TSoftClassPtr<UObject> NavDataClass; // 0x58
};

struct FTigerReplicatedCharacterStats {
	FTigerCharacterSingleStatModification Health; // 0x0
	FTigerCharacterSingleStatModification MovementSpeed; // 0x8
	float ClimbSpeedMultiplier; // 0x10
	float ReviveSpeedMultiplier; // 0x14
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FTS_InWorldIconDistanceScaling {
	float DistanceScaleMultiplier_18_B802FE5145F4B5AAB015F2B73FF838AA; // 0x0
	float ScaleBase_9_EFE7C66846BC6471CC902C8099EDAD66; // 0x4
	float ScaleClampMin_10_ABC2BF3442F72A4C06E25CB009387534; // 0x8
	float ScaleClampMax_11_592CDC1644BF74452E911AB988450499; // 0xc
	float OpacityBaseValue_8_A867B2F347F2044ABBA9A4A90D8510F1; // 0x10
	float OpacityClampMin_14_D3BC160C483E2870EDF55D9CEDC7DF73; // 0x14
	float OpacityClampMax_15_155032E744CA04FD6ED3338F64781689; // 0x18
};

struct FTigerSignificanceBudget {
	TArray<FTigerSignificancePlayerBucket> PlayerBuckets; // 0x0
	TArray<FTigerSignificanceElysiumNpcBucket> ElysiumNpcBuckets; // 0x10
	TArray<float> PlayerUroScreenSizeThresholds; // 0x20
	TArray<float> NpcUroScreenSizeThresholds; // 0x30
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FTigerRequest_UpdatePlayerData {
	FString Data; // 0x0
	FString CardData; // 0x10
};

struct FSharkAccountRegistrationData {
	FString Email; // 0x0
	FString Password; // 0x10
	int32_t RegionId; // 0x20
	FString UserName; // 0x28
	FString VerificationCode; // 0x38
	int32_t RecieveEmail; // 0x48
};

struct FTigerMeleeAimAssistCandidate {
	ATigerCharacter* TigerCharacter; // 0x0
	FVector PredictedLocation; // 0x8
	bool bCanSweepToPredictedLocation; // 0x14
	bool bIsKindred; // 0x15
	float DistanceFromCrosshair; // 0x18
	float DistanceFromPlayerSquared; // 0x1c
	float AngleFromPlayer; // 0x20
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
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

struct FTigerVoEvent {
	FName Category; // 0x0
	AActor* EventActor; // 0x8
	bool bPlayFacialAnimFromCategory; // 0x10
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FTigerCharacterHolsteredWeaponTransforms {
	FTransform MeleeWeaponHolsteredTransform; // 0x0
	FTransform MeleeWeaponSecondaryHolsteredTransform; // 0x30
};

struct FTigerPingServerConfig {
	FString PingServerIpV4; // 0x0
	uint16_t PingServerPort; // 0x10
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

struct FStaticPhysicsPiercingData {
	UStaticMeshComponent* PiercingStaticMesh; // 0x0
	FVector PreviousLocation; // 0x8
	FTransform CachedRelativeTransform; // 0x20
};

struct FTigerInventoryStats {
	float MeleeDamage; // 0x0
	float ShootingDamage; // 0x4
	float AbilityDamageBonus; // 0x8
	float MeleeDefense; // 0xc
	float ShootingDefense; // 0x10
	float AbilityDefense; // 0x14
	float AbilityHaste; // 0x18
};

struct FCutoutRect {
	int32_t Top; // 0x0
	int32_t Bottom; // 0x4
	int32_t Left; // 0x8
	int32_t Right; // 0xc
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FSessionServicePing {
	FString UserName; // 0x0
};

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FTigerTelemetryTutorialLocationsContainer {
	TArray<FTigerTelemetryTutorialLocation> Locations; // 0x0
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FTigerStatusEffect {
	bool bBlockInteraction; // 0x0
	bool bInvulnerable; // 0x1
	bool bInvisible; // 0x2
	bool bHidden; // 0x3
	bool bLogicHidden; // 0x4
	bool bDisableSprint; // 0x5
	bool bDisableClimb; // 0x6
	bool bDisableDisciplines; // 0x7
	bool bDisableRotation; // 0x8
	bool bDisableHeightenedSenses; // 0x9
	bool bBlockAILogic; // 0xa
};

struct FTigerFullCharacterAppearance {
	FTigerCharacterAppearance PartialCharacterAppearance; // 0x0
	FTigerPersistentPlayerCardData PlayerCardData; // 0x80
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FTigerAnimMetaData {
	UAnimMontage* Montage; // 0x0
	UAnimMetaData* MetaData; // 0x8
	float BlendWeight; // 0x10
	ETigerAnimBlendState BlendState; // 0x14
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FTigerRangedWeaponData : FTableRowBase {
	int32_t MaxAmmoInClips[0x4]; // 0x8
	int32_t AmmoOnPickup; // 0x18
	bool bCanHeadshot; // 0x1c
	float BodyPartDamageModifiers[0x6]; // 0x20
	float NPCBulletDamage; // 0x38
	float OverrideReloadTime; // 0x3c
	float ReloadCooldown; // 0x40
	float ReloadSpeedMultiplier; // 0x44
	float ActivationTime; // 0x48
	bool bEnableFireModeSwitchByDefault; // 0x4c
	TArray<FTigerFireSettings> FireSettings; // 0x50
	TArray<UTigerRangedModItemAsset*> BarrelMods; // 0x60
	TArray<UTigerRangedModItemAsset*> AmmoMods; // 0x70
	TArray<UTigerRangedModItemAsset*> ScopeMods; // 0x80
	TArray<UTigerRangedModItemAsset*> StockMods; // 0x90
	TArray<UTigerRangedModItemAsset*> SpecialMods; // 0xa0
	UTigerBuff* InAirMomentumDrainBuff; // 0xb0
	float InAirMomentumDrainBuffSpeedMultiplier; // 0xb8
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
};

struct FTigerNpcReactionEvent {
	float Intensity; // 0x0
	ETigerAIMasqueradeState PreState; // 0x4
	ETigerAIMasqueradeState PostState; // 0x5
	FVector EventLocation; // 0x8
	bool bIsVisual; // 0x14
};

struct FTigerPlayerMatchMetaStats {
	FTigerSeasonSessionExperience SeasonSessionExperienceAccumulated; // 0x0
	int32_t SeasonExpBeforeSession; // 0x18
	int32_t ArchetypeExpBeforeSession; // 0x1c
	int32_t ArchetypeExperienceAccumulated; // 0x20
	int32_t SoftCurrencyBeforeSession; // 0x24
	int32_t SoftCurrencyAccumulated; // 0x28
	FTigerItemId SoftCurrencyItemId; // 0x30
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FTigerTelemetryEventMatchSession_KatanaReflectUse : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t TotalTimeInKatanaReflectState; // 0x40
	int32_t TotalDamageNullified; // 0x44
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FTigerSeasonConfig_ChallengeCollection {
	TArray<FTigerSeasonalChallengeInstanceDefinition> ChallengeDefinitions; // 0x0
	TArray<FTigerItemId> RewardIds; // 0x10
	FDateTime UnlockDate; // 0x20
	FDateTime LockDate; // 0x28
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FTigerTelemetryEventStore_AquiredInventoryItems : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString UnlockedItems; // 0x58
	int32_t UnlockSource; // 0x68
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

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
};

struct FTigerMetaStoreBuyPayload {
	TArray<FTigerMetaStoreBuyPayloadElement> EntriesToBuy; // 0x0
	uint32_t TotalCost; // 0x10
};

struct FTigerPingWrapper {
	UTigerPingClientData* ClientData; // 0x0
	UTigerPingWorldInstanceUI* InnerWidget; // 0x8
	UTigerPingMarkerProxy* MapMarkerProxy; // 0x10
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FAkGeometryData {
	TArray<FVector> Vertices; // 0x0
	TArray<FAkAcousticSurface> Surfaces; // 0x10
	TArray<FAkTriangle> Triangles; // 0x20
	TArray<UPhysicalMaterial*> ToOverrideAcousticTexture; // 0x30
	TArray<UPhysicalMaterial*> ToOverrideOcclusion; // 0x40
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FDamageTriggerOverlapData {
	ATigerCharacter* Character; // 0x0
	float TimerAccumulator; // 0x8
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

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FTigerSignificancePlayerBucket {
	int32_t BucketSize; // 0x0
	float TickRate; // 0x4
	float MoveCompTickRate; // 0x8
	uint32_t VisibleMeshesBitMask; // 0xc
	bool bEnableClothSim; // 0x10
	bool bEnableFootIk; // 0x11
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FTigerRangedHitInfo {
	FVector_NetQuantize100 End; // 0x0
	EBodyPart BodyPart; // 0xc
	ATigerCharacter* HitCharacter; // 0x10
	int32_t ProjectileId; // 0x18
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
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

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FTigerTelemetryEventPlayerLogin : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameAppid; // 0x10
	int32_t AreaId; // 0x20
	FString Uin; // 0x28
	int32_t Level; // 0x38
	FString ClientIP; // 0x40
	int32_t LoginWay; // 0x50
	int32_t PlatID; // 0x54
	int32_t SMFriendsNum; // 0x58
	int32_t PlatformFriendsNum; // 0x5c
	FString ClientVersion; // 0x60
	int16_t ScreenWidth; // 0x70
	int16_t ScreenHeight; // 0x72
	FString CpuHardware; // 0x78
	FString ClientIPV6; // 0x88
	int32_t DeviceType; // 0x98
	FString OperatingSys; // 0xa0
	FString DeviceModel; // 0xb0
	int32_t SysRAM; // 0xc0
	int32_t VRAM; // 0xc4
	FString VideoCard; // 0xc8
	FString Microphone; // 0xd8
	int32_t AvlHardDiskSpace; // 0xe8
	int32_t AllHardDiskSpace; // 0xec
	FString ClientLanguage; // 0xf0
	FString Country; // 0x100
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FTigerConsequenceUpdateData {
	int32_t ConsequenceId; // 0x0
	float ExpectedTimeLeft; // 0x4
	FVector_NetQuantize VectorData; // 0x8
};

struct FTigerTelemetryEventAcePlayerRebornEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	char rebirth_type; // 0xb0
};

struct FTigerRewardWithQuantity {
	FTigerItemId ItemId; // 0x0
	int32_t Quantity; // 0x8
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
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

struct FTigerKickPlayerPush {
	FString PlayerId; // 0x0
	char BanReason; // 0x10
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FTigerResponse_GetPlayers : FTigerResponseEnvelope {
	TArray<FPresenceInfo> InterestedPlayers; // 0x18
	bool ResendData; // 0x28
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FTigerWallJumpBlendBundle {
	float InputBlendScale; // 0x0
	float NormalBlendScale; // 0x4
	float VelocityDirectionBlendScale; // 0x8
	float VelocityForceScale; // 0xc
};

struct FAkXboxOneGDKApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FOnlinePresencePush {
	FString PlayerId; // 0x0
	bool IsOnline; // 0x10
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FTigerNetworkedDebugShape {
	FColor Color; // 0x0
	FVector Location; // 0x4
	FVector ShapeSpecificData; // 0x10
	FQuat Rotation; // 0x20
	float Thickness; // 0x30
	float LifeTime; // 0x34
	char Shape; // 0x38
	char DepthPriority; // 0x39
	bool bPersistentLines; // 0x3a
};

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FTigerPersistentCharacterID {
	char SlotIndex; // 0x0
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FTigerSeasonalItemLink : FTableRowBase {
	uint64_t ItemId; // 0x8
	TSoftClassPtr<UObject> ItemPath; // 0x10
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

struct FTigerTelemetryResponse {
	FString Error; // 0x0
	bool OK; // 0x10
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FTigerAnimNode_RandomPlayer : FAnimNode_AssetPlayerBase {
	bool bShuffleMode; // 0x38
	UTigerRandomSequenceList* SequenceList; // 0x40
	UTigerRandomSequenceList* ActiveSequenceList; // 0x90
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> Entries; // 0x0
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FAkAdvancedInitializationSettingsWithMultiCoreRendering : FAkAdvancedInitializationSettings {
	bool EnableMultiCoreRendering; // 0x2c
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
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

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
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

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DISPLAYNAME; // 0x40
	bool bAdvanced; // 0x50
};

struct FCutoutInfoResult : FINTLBaseResult {
	bool HasCutout; // 0x40
	bool IsCutoutHidden; // 0x41
	int32_t ScreenHeight; // 0x44
	int32_t ScreenWidth; // 0x48
	int32_t StatusBarHeight; // 0x4c
	TArray<FCutoutRect> CutoutRects; // 0x50
	FCutoutRect SafeArea; // 0x60
};

struct FPlayerStatistic {
	FString Name; // 0x0
	int32_t Count; // 0x10
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FTigerTelemetryEventMatchSession_PlayerRedGasStats : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t TotalTimeInRedGas; // 0x40
	int32_t TotalTimeInRedGasWithStimulant; // 0x44
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FMyPluginStruct {
	FString TestString; // 0x0
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

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DISPLAYNAME; // 0x20
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

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FSharkServerMetricsConfig {
	float UploadIntervalSeconds; // 0x0
	FString UploadURI; // 0x8
	FString Database; // 0x18
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
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

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FTigerPreviewerData {
	TSoftClassPtr<UObject> Outfit; // 0x0
	int32_t OutfitHoodieIndex; // 0x28
	TSoftClassPtr<UObject> Head; // 0x30
	int32_t SkinColorIndex; // 0x58
	TSoftClassPtr<UObject> HairStyle; // 0x60
	TSoftClassPtr<UObject> HairColor; // 0x88
	TSoftClassPtr<UObject> Beard; // 0xb0
	TSoftClassPtr<UObject> BeardColor; // 0xd8
	TSoftClassPtr<UObject> EyeColor; // 0x100
	TSoftClassPtr<UObject> Eyebrow; // 0x128
	TSoftClassPtr<UObject> EyebrowColor; // 0x150
	TSoftClassPtr<UObject> Tattoo; // 0x178
	TSoftClassPtr<UObject> FacePaint; // 0x1a0
	TSoftClassPtr<UObject> Headgear; // 0x1c8
	TSoftClassPtr<UObject> Eyewear; // 0x1f0
	TSoftClassPtr<UObject> PiercingSet; // 0x218
	TArray<TSoftClassPtr<UObject>> Emotes; // 0x240
	TSoftClassPtr<UObject> CurrentOutfitConfig; // 0x250
	TSoftClassPtr<UObject> CombinedItem; // 0x278
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FTigerPropAttachmentInfo {
	FName AttachIdentifier; // 0x0
	UStreamableRenderAsset* Prop; // 0x8
	FName SocketName; // 0x10
	FTransform Transform; // 0x20
	UMeshComponent* PropCompClass; // 0x50
};

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FAkMidiNoteAftertouch : FAkMidiEventBase {
	char Note; // 0x2
	char Value; // 0x3
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

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
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

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FTigerThrallMissionTableRow : FTableRowBase {
	UTigerThrallMission* Mission; // 0x8
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
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

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FTigerMapInfo {
	FMapLandmarkPoint FirstLandmark; // 0x0
	FMapLandmarkPoint SecondLandmark; // 0x18
	UTexture2D* MapTexture; // 0x30
	FString LevelName; // 0x38
	TArray<FPointOfInterest> PointsOfInterest; // 0x48
	FVector2D MinimapSize; // 0x58
	float CachedScale; // 0x60
	TMap<UUserWidget*, EMapMarkerType> BotMarkerTypes; // 0x68
};

struct FTigerPartyTravelPush {
	FString SESSIONTYPE; // 0x0
	FString PartyId; // 0x10
	FString GameSessionToken; // 0x20
	FString Host; // 0x30
	int32_t Port; // 0x40
	uint32_t StateUpdateId; // 0x44
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FTigerPaperDollHighlightComponents {
	TMap<USpotLightComponent*, float> SpotLightIntensities; // 0x0
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FTigerProjectileAreaEffect {
	ATigerAreaEffect* AreaEffect; // 0x0
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FTigerPlayerBlendSpace1DByClan {
	UBlendSpace1D* AnimationObjects[0x4]; // 0x0
};

struct FTigerDesiredSpawnLocation {
	ATigerPlayerController* PlayerController; // 0x0
	AActor* AssignedSpawnPoint; // 0x8
};

struct FSharkTelemetryHTTPSRequestHeader {
	FString app_id; // 0x0
	FString app_name; // 0x10
	FString Timestamp; // 0x20
	FString seq_id; // 0x30
	FString retry_times; // 0x40
	FString key_x; // 0x50
	FString key_y; // 0x60
	FString key_z; // 0x70
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FTigerTelemetryItemSpawnAmounts {
	TMap<uint64_t, int32_t> ItemAmounts; // 0x0
};

struct FTigerAnimNotifyIKData {
	FVector IKTarget; // 0x0
	FVector RelativeTargetJointTarget; // 0xc
	float CurrentIKAlphaBlend; // 0x18
	bool bShouldBeUsed; // 0x1c
};

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FTigerSeasonConfigResponse_ChallengeCollection {
	TArray<FTigerSeasonConfigResponse_SeasonalChallengeDefinition> ChallengeDefinitions; // 0x0
	TArray<FString> RewardIds; // 0x10
	FDateTime UnlockDate; // 0x20
	FDateTime LockDate; // 0x28
};

struct FTigerInputPresetData {
	FString ConfigFileName; // 0x0
	bool bUseAutoSprint; // 0x10
	bool bHoldForHeightenedSenses; // 0x11
	bool bHoldForInventory; // 0x12
};

struct FINTLDirTreeResult : FINTLBaseResult {
	int32_t TreeId; // 0x40
	int32_t NodeId; // 0x44
	FString TreeInfo; // 0x48
	FString RoleInfo; // 0x58
	int32_t ExpireTime; // 0x68
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
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

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
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

struct FURL {
	FString Protocol; // 0x0
	FString Host; // 0x10
	int32_t Port; // 0x20
	int32_t Valid; // 0x24
	FString Map; // 0x28
	FString RedirectUrl; // 0x38
	TArray<FString> Op; // 0x48
	FString Portal; // 0x58
};

struct FTigerResponse_GetLonelyFishTicket : FTigerResponseEnvelope {
	FString Ticket; // 0x18
	FString PlayerId; // 0x28
	float DesiredRefreshIntervalMinutes; // 0x38
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
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

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
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

struct FTigerResponse_Presence : FTigerResponseEnvelope {
	bool ResendData; // 0x18
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FINTLVerifyCodeStatusResult : FINTLBaseResult {
	int32_t VerifyCodeExpireTime; // 0x40
};

struct FTigerItemIdWithPriceJSON {
	FString ItemId; // 0x0
	FTigerItemPriceJSON Price; // 0x10
};

struct FTigerPlayerIdWithPlacement {
	FString PlayerId; // 0x0
	int32_t Placement; // 0x10
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FTigerPersistentPlayerCharacterData {
	ETigerPowerKitType ArchetypeType; // 0x0
	FTigerSavedBloodTrackData BloodTrack; // 0x8
	FTigerCharacterAppearance CharacterAppearance; // 0x18
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FTigerThrallStatModifier {
	int32_t InjuryLevel; // 0x0
	FText ModifierName; // 0x8
	uint32_t TurnsRemaining; // 0x20
	FTigerThrallStats StatModifiers; // 0x28
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
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

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FTigerPersistentCollectibleData {
	uint32_t CollectibleId; // 0x0
	char CollectibleCount; // 0x4
};

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FTigerClientItemDefinition {
	FTigerItemId ItemId; // 0x0
	int32_t Cost; // 0x8
	FTigerItemId SoftCurrencyId; // 0x10
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

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
};

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FTigerMetaStoreEntriesKeeper {
	TArray<FDelegate> ConfigEventSubscribers; // 0x0
	FTigerMetaStoreEntriesConfig StoreEntryConfig; // 0x10
	ETigerMetaStoreEventType LastEventStatus; // 0x38
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FINTLNoticeResult : FINTLBaseResult {
	FString SeqId; // 0x40
	TArray<FINTLNoticeInfo> NoticeInfoList; // 0x50
};

struct FTutorialTrainerReviveData {
	bool bIsGettingRevived; // 0x0
	float ReviveTimeInSeconds; // 0x4
	float CurrentReviveTime; // 0x8
	float RotationSpeed; // 0xc
	TWeakObjectPtr<ATigerPlayer> CurrentRevivingPlayer; // 0x10
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FTigerTelemetryIDBundle {
	UObject* FoundObject; // 0x0
	uint64_t PersistentID; // 0x8
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FTigerResponse_GetCreatePlayer : FTigerResponseEnvelope {
	FTigerResponse_TransactionalPlayerData Transactional; // 0x18
	FString Data; // 0x130
	FString CardData; // 0x140
	bool Banned; // 0x150
	char BanReason; // 0x151
	FString BanEndsAt; // 0x158
	bool Muted; // 0x168
	char MutedReason; // 0x169
	FString MutedEndsAt; // 0x170
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FTigerCharacterCustomizationScalarParameter {
	ETigerCharacterDynamicMeshType DynamicMeshType; // 0x0
	ETigerCharacterMeshPart Part; // 0x1
	FName Name; // 0x4
	float Value; // 0xc
};

struct FTigerRoofSystemFreeTransformableMaterialCache {
	TArray<FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding> MaterialBindings; // 0x0
	bool bStaticMeshComponent; // 0x10
};

struct FTigerResponse_MatchSettingsVariationParameterSet {
	TArray<FString> Parameters; // 0x0
	double Probability; // 0x10
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingId; // 0x28
};

struct FTigerQuestObjectivePersistentProgressEntry {
	FString Guid; // 0x0
	int32_t Progress; // 0x10
};

struct FTigerCharacterPoseableMeshBoneSetupData {
	ETigerCharacterMeshPart BodyPart; // 0x0
	FName ParentBone; // 0x4
	FName MeshBone; // 0xc
	FVector RelativeLocation; // 0x14
	FRotator RelativeRotation; // 0x20
};

struct FTigerRequest_SetCustomizationConfigs {
	TArray<FString> Keys; // 0x0
	TArray<FString> Values; // 0x10
};

struct FTigerWeaponCrosshairSlot {
	FVector2D Direction; // 0x0
	FVector2D Offset; // 0x8
	FVector2D Alignment; // 0x10
	FSlateBrush Brush; // 0x18
	FLinearColor Color; // 0xa0
	float RenderAngle; // 0xb0
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
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

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
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

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
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

struct FMagicLeapSharedWorldLocalData {
	TArray<FMagicLeapSharedWorldPinData> LocalPins; // 0x0
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FTigerTelemetryEventMatchSession_MeleeWeaponUse : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	FString ItemId; // 0x40
	int32_t DurationMeleeWeaponHeldFor; // 0x50
	int32_t NumberOfTimesMeleeWeaponDrawn; // 0x54
	int32_t NumberOfAttacksWithMeleeWeapon; // 0x58
	int32_t NumberOfHitsWithMeleeWeapon; // 0x5c
	int32_t TotalDamageDoneWithMeleeWeapon; // 0x60
	int32_t TotalNumberOfDownsWithMeleeWeapon; // 0x64
	int32_t TotalNumberOfKillsWithMeleeWeapon; // 0x68
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FINTLAccountProfile {
	FString UserName; // 0x0
	FString Birthday; // 0x10
	int32_t BirthdayYear; // 0x20
	int32_t BirthdayMonth; // 0x24
	int32_t BirthdayDay; // 0x28
	int32_t IsReceiveEmail; // 0x2c
	FString Region; // 0x30
	FString LangType; // 0x40
	FString ExtraJson; // 0x50
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

struct FTigerSpawnGroupBudget {
	int32_t MaxSpawned; // 0x0
	int32_t MinSpawned; // 0x4
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FLocationPresencePush {
	FString PlayerId; // 0x0
	FString Location; // 0x10
};

struct FTigerTelemetryEventElysium_Enter : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString EntryPointName; // 0x20
	FString GameAppid; // 0x30
	FString ClientVersion; // 0x40
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FTigerQuestLinePersistentProgress {
	TMap<FString, FTigerQuestPersistentProgressEntry> Progress; // 0x0
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
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

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FTigerItemId {
	uint64_t Value; // 0x0
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
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

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
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

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FTigerTelemetryEventMatchSession_PlayerRankChanges : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t PlayerResult; // 0x40
	int32_t TeamRank; // 0x44
	int32_t ChangedKillRatingValue; // 0x48
	int32_t KillRatingValueAfterChanged; // 0x4c
	int32_t ChangedWinRatingValue; // 0x50
	int32_t WinRatingValueAfterChanged; // 0x54
	FString PreviousRankedBracket; // 0x58
	FString NewRankedBracket; // 0x68
	int32_t TotalPoint; // 0x78
	int32_t RatingLevel; // 0x7c
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FTigerReadDialogueCategoryWrapper {
	FString NpcIdentifier; // 0x0
	TArray<char> ReadCategories; // 0x10
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FTigerSeasonConfig_RewardTier {
	TArray<FTigerItemId> ItemIds; // 0x0
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FTigerTelemetryEventStore_FlashStoreRefresh : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString ClientIP; // 0x58
	FString Country; // 0x68
	FString StoreEntryList; // 0x78
};

struct FTigerQueuedTextPrompt {
	UTigerSimpleTextPrompt* Prompt; // 0x0
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FTigerJudgeSwingCollisionInstant {
	float TimeInSwing; // 0x0
	FVector SwordStartSweepLoc; // 0x4
	FVector SwordEndSweepLoc; // 0x10
	FQuat SwordRot; // 0x20
};

struct FAkCommunicationSettings {
	uint32_t PoolSize; // 0x0
	uint16_t DiscoveryBroadcastPort; // 0x4
	uint16_t CommandPort; // 0x6
	uint16_t NotificationPort; // 0x8
	FString NetworkName; // 0x10
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FTigerAIMasqueradeEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	ATigerCharacter* TargetActor; // 0x20
	ATigerPlayer* Instigator; // 0x28
	FTigerAIPlayerAction PlayerAction; // 0x30
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FTigerBuildingSystemWallPieceInstancingData {
	TArray<FTigerBuildingSystemWallPieceInstancingDataEntry> Entries; // 0x0
};

struct FTigerResponse_ConvertedIds : FTigerResponseEnvelope {
	TArray<FTigerFriendsAccountIdSet> PlayerIds; // 0x18
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
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
	char bUseLastLOD : 1; // 0xa6
	char bOverrideVoxelSize : 1; // 0xa6
	char bOverrideTransferDistance : 1; // 0xa6
	char bUseHardAngleThreshold : 1; // 0xa6
	char bComputeLightMapResolution : 1; // 0xa6
	char bRecalculateNormals : 1; // 0xa6
	char bUseLandscapeCulling : 1; // 0xa6
	char bAllowAdjacency : 1; // 0xa7
	char bAllowDistanceField : 1; // 0xa7
	char bReuseMeshLightmapUVs : 1; // 0xa7
	char bCreateCollision : 1; // 0xa7
	char bAllowVertexColors : 1; // 0xa7
	char bGenerateLightmapUVs : 1; // 0xa7
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

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FTigerBloodResonanceBuffs {
	TArray<UTigerBuff*> Buffs; // 0x0
};

struct FTigerResponse_IdleGameServerHeartbeat : FTigerResponseEnvelope {
	bool HasSwitchedToRunning; // 0x18
	FTigerDsGameSessionDetails SessionDetails; // 0x20
};

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FTigerTelemetryIDCollisionBundle {
	UObject* CollidingObject1; // 0x0
	UObject* CollidingObject2; // 0x8
};

struct FTigerItemData {
	UTigerItemAsset* ItemAsset; // 0x0
	int32_t Count; // 0x8
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FTigerRevealedWave {
	ATigerHaven* RevealedHaven; // 0x0
	int32_t Index; // 0x8
	TArray<int32_t> DeformIndices; // 0x10
	TArray<float> TargetArea; // 0x20
};

struct FSharkRandomDeviationInt {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FTigerDsPushRegisterReq : FTigerPushMessage {
	FString ClientProtocolVersion; // 0x10
	FString ServerSecret; // 0x20
	FString DsInstanceId; // 0x30
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
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

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FMagicLeapSharedWorldAlignmentTransforms {
	TArray<FTransform> AlignmentTransforms; // 0x0
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FAkBoolPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FTigerPreMatchStateInfo {
	int32_t StateData; // 0x0
	ETigerPreMatchState State; // 0x4
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FTigerRequest_IdleGameServerHeartbeat {
	FString OverrideIp; // 0x0
	int32_t Port; // 0x10
	FString DsVersionId; // 0x18
	int32_t PlayerCount; // 0x28
};

struct FTigerRewardsWithReasons {
	TArray<FTigerItemId> ItemRewards; // 0x0
	TArray<FTigerRewardReason> Reasons; // 0x10
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FTigerResponse_MultiplayHeartbeat : FTigerResponseEnvelope {
	bool IsDraining; // 0x18
	bool ShouldForceStop; // 0x19
};

struct FTigerMultiplayServerInfo {
	FString SessionId; // 0x0
};

struct FTigerSeasonConfigResponse_DailyRewardCollection {
	TArray<FString> TrackRewardIds; // 0x0
	TArray<FTigerSeasonConfigResponse_DailyFinalReward> DailyFinalRewardWeeks; // 0x10
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

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
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

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FAkAndroidAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t AudioAPI; // 0x30
	bool RoundFrameSizeToHardwareSize; // 0x34
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FPresenceInfo {
	FString PlayerId; // 0x0
	FString Location; // 0x10
	bool IsOnline; // 0x20
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FTigerChallengePersistentProgressEntry {
	int32_t Progress; // 0x0
	bool bHasDistributedReward; // 0x4
	bool bIsPersistentChallenge; // 0x5
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FTigerResponse_GetStoreEntries : FTigerResponseEnvelope {
	TArray<FTigerResponse_StoreEntry> StoreEntries; // 0x18
	int64_t Checksum; // 0x28
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
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

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
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

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
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

struct FTigerMatchStats {
	FTigerPlayerMatchStats PlayerMatchStats; // 0x0
	FTigerPlayerMatchMetaStats OwnPlayerStats; // 0x38
	TArray<FTigerProgressedChallengeWrapper> ProgressedChallenges; // 0x70
	char InitialGroupCount; // 0x80
	ETigerGroupingMode GROUPINGMODE; // 0x81
	FGuid MatchID; // 0x84
	FString MatchReporterId; // 0x98
};

struct FMagicLeapSharedWorldSharedData {
	TArray<FGuid> PinIDs; // 0x0
};

struct FTigerRemovedFromPartyPush {
	FString PartyId; // 0x0
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FTigerAudioSettings {
	float MasterVolume; // 0x0
	float SFXVolume; // 0x4
	float MusicVolume; // 0x8
	float VideoVolume; // 0xc
	float DialogueVolume; // 0x10
	float VoiceChatVolume; // 0x14
	float MicVolume; // 0x18
	float ControllerSpeakerVolume; // 0x1c
	bool bEnableVoiceChat; // 0x20
	bool bPushToTalk; // 0x21
	bool bAllowBackgroundAudio; // 0x22
	bool bEnableDolbyAtmos; // 0x23
	FString VoipInputDevice; // 0x28
	FString VoipOutputDevice; // 0x38
	int32_t SavedVersion; // 0x48
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FTigerTelemetryEventStore_Exit : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
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

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FTigerPingWorldNetData : FTigerPingNotificationNetData {
	FVector WorldLocation; // 0x18
};

struct FTigerMeleeAttack {
	FName AttackName; // 0x0
	int32_t AttackGroup; // 0x8
	FName SwingAnimationMontageName; // 0xc
	FName SwingAnimationNoTargetMontageName; // 0x14
	FName RecoveryAnimationMontageName; // 0x1c
	FName RecoveryAnimationNoTargetMontageName; // 0x24
	FName HitAnimationMontageName; // 0x2c
	FName DirectionalHitAnimationMontageNames[0x4]; // 0x34
	float HitEffectAngle; // 0x54
	UMatineeCameraShake* HitCameraShake; // 0x58
	UCurveFloat* InputMultiplierCurve; // 0x60
	float AttackCooldown; // 0x68
	bool bAllowMultipleHits; // 0x6c
	float TargetingAttackMinimumDistance; // 0x70
	float AerialAttackAbortedBlendOutTime; // 0x74
	UCurveFloat* DamageScalingCurve; // 0x78
	int32_t AttackIndex; // 0x80
	ETigerWeaponMeleeAttackType AttackType; // 0x84
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
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

struct FTigerTelemetryDefinition {
	FString EnumName; // 0x0
	FString VariableType; // 0x10
	int32_t ActualDataSize; // 0x20
	TMap<FString, int32_t> KeyValuePairs; // 0x28
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FTigerMasteryChallengesConfig {
	TArray<FTigerMasterChallengeCollection> Seasons; // 0x0
};

struct FTigerAnimNode_ApplyAdditiveFiltered : FAnimNode_ApplyAdditive {
	UTigerAnimationFilter* FilterAsset; // 0xc8
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FTigerInvitePush {
	FString InviteId; // 0x0
	FString HostPlayerId; // 0x10
	FString HostPlayerName; // 0x20
	FString PartyInviteToken; // 0x30
	FString UserData; // 0x40
};

struct FTigerConsequenceData {
	UTigerMasqueradeConsequence* ConsequenceClass; // 0x0
	FTigerConsequenceUpdateData UpdateData; // 0x8
	ETigerAIPlayerAction PlayerAction; // 0x1c
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

struct FSubmixEffectMultibandCompressorSettings {
	ESubmixEffectDynamicsProcessorType DynamicsProcessorType; // 0x0
	ESubmixEffectDynamicsPeakMode PeakMode; // 0x1
	float LookAheadMsec; // 0x4
	bool bLinkChannels; // 0x8
	bool bAnalogMode; // 0x9
	bool bFourPole; // 0xa
	TArray<FDynamicsBandSettings> Bands; // 0x10
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
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

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
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

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FTigerTelemetryEventServerDelay : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	FString ClientVersion; // 0x28
	FString Uin; // 0x38
	FString BattleID; // 0x48
	int32_t PlatID; // 0x58
	FString GameAppid; // 0x60
	int32_t NetworkType; // 0x70
	int32_t UploadSeq; // 0x74
	int32_t AvgDelay; // 0x78
	int32_t MaxDelay; // 0x7c
	int32_t MinDelay; // 0x80
	int32_t OutPacketLossPercent; // 0x84
	int32_t InPacketLossPercent; // 0x88
	int8_t MapID; // 0x8c
};

struct FTigerItemPriceJSON {
	int32_t Amount; // 0x0
	FString SoftCurrencyId; // 0x8
};

struct FTigerThrallCharacterCardInformation {
	FText ThrallName; // 0x0
	UTexture2D* ThrallPortrait; // 0x18
	int32_t ThrallExp; // 0x20
	float ThrallExpNormalised; // 0x24
	float ThrallHealthNormalised; // 0x28
	TArray<FTigerThrallAbility> ThrallAbilities; // 0x30
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FTigerRequest_DeclineInvite {
	FString PartyInviteToken; // 0x0
};

struct FTigerTelemetryEventMatchSession_RangedWeaponUse : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	FString ItemId; // 0x40
	int32_t NumberOfRangedHits; // 0x50
	int32_t NumberOfRangedShots; // 0x54
	int32_t DamageDealtWithWeapon; // 0x58
	int32_t EnemiesDownedWithWeapon; // 0x5c
	int32_t NumberOfTimesOutOfAmmoWithWeapon; // 0x60
	int32_t NumberHeadshotsWithWeapon; // 0x64
};

struct FTigerTimedAnimationTrigger {
	FName Name; // 0x0
	float TriggerTime; // 0x8
	ETigerTimedAnimationType AnimationType; // 0xc
};

struct FTigerRoofSystemFreeTransformableMaterialCacheMaterialBinding {
	int32_t MaterialIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FTigerThrallMissionMapMarker {
	FVector2D Position; // 0x0
	UTexture2D* Icon; // 0x8
	FVector2D Size; // 0x10
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
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

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	EStaticMeshTranslucencyResolutionMode TranslucencyResolution; // 0x4
	bool bEnableCollision; // 0x5
	bool bCastShadow; // 0x6
	bool bVisibleInRayTracing; // 0x7
	bool bForceOpaque; // 0x8
	bool bIsVisible; // 0x9
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FTigerFireSettings {
	float BulletDamage; // 0x0
	ETigerWeaponFireMode FireMode; // 0x4
	int32_t BurstCount; // 0x8
	float ShotsFiredPerSecondInBurst; // 0xc
	int32_t BulletsFiredSimultaneously; // 0x10
	float ShotsFiredPerSecond; // 0x14
	ATigerAreaEffect* AreaEffect; // 0x18
	float FireStickyTime; // 0x20
	float VerticalRecoilAmount; // 0x24
	float HorizontalRecoilAmount; // 0x28
	float StartingSpread; // 0x2c
	FTigerSpreadModifier SpreadModifiers[0x7]; // 0x30
	float TimeUntilSpreadDecreases; // 0x84
	float BaseMovementSpeedMultiplier; // 0x88
	float AimingMovementSpeedMultiplier; // 0x8c
	float HipFireMovementSpeedMultiplier; // 0x90
	UCurveFloat* SpreadIncreaseCurve; // 0x98
	UCurveFloat* SpreadDecreaseCurve; // 0xa0
	UCurveFloat* FireRateIncreaseCurve; // 0xa8
	UCurveFloat* FireRateDecreaseCurve; // 0xb0
	float MasqueradeNoiseEventRadius; // 0xb8
	bool ReverseSpreadChange; // 0xbc
	bool bPierceCivilians; // 0xbd
	bool bUsesScope; // 0xbe
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FTigerGrimoireSubEntry {
	FName EntryName; // 0x4
	UTigerGrimoireEntry* Entry; // 0x10
};

struct FTigerCustomizableKeybindData {
	FText DISPLAYNAME; // 0x0
	bool DebugOnly; // 0x18
	bool AllowDebugOnConsoleShipping; // 0x19
};

struct FAkXboxOneAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x30
	bool UseHardwareCodecLowLatencyMode; // 0x32
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
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

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid InstanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionId; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FTigerDsGameSessionDetails {
	FString GameSessionData; // 0x0
	int32_t MaxPlayers; // 0x10
	bool AllowsJoin; // 0x14
	char GROUPINGMODE; // 0x15
};

struct FTigerTelemetryEventMatchSession_PlayerTraversal : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t TotalMoveDistance; // 0x40
	int32_t WalkingDistance; // 0x44
	int32_t DisciplineTravelDistance; // 0x48
	int32_t CrouchingTime; // 0x4c
	int32_t ClimbingTime; // 0x50
	int32_t TimeInside; // 0x54
	int32_t WallHangTime; // 0x58
	int32_t WallGrindTime; // 0x5c
	int32_t SlideTime; // 0x60
	int32_t AirTime; // 0x64
	int32_t NotMovingTime; // 0x68
	int32_t TotalJumps; // 0x6c
	int32_t TotalWallJumps; // 0x70
	int32_t TotalSlideJumps; // 0x74
	int32_t TotalLedgeGrabs; // 0x78
	int32_t TotalLowVaults; // 0x7c
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FTigerMasterChallengeCollection {
	uint32_t SeasonId; // 0x0
	TArray<FTigerMasteryChallengeInstanceDefinition> ChallengeDefinitions; // 0x8
	TArray<FTigerItemId> RewardIds; // 0x18
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FINTLNoticePicture {
	FString URL; // 0x0
	FString Hash; // 0x10
	FString RedirectUrl; // 0x20
	FString ExtraData; // 0x30
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

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FTigerTelemetryEventAcePlayerDamageProcessEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	int32_t Index; // 0xb0
	FString attacker_player_position; // 0xb8
	int64_t attacker_weapon_id; // 0xc8
	uint32_t attacker_weapon_type; // 0xd0
	FString attacker_player_direction; // 0xd8
	uint32_t attacker_blood_left; // 0xe8
	FString victim_Uin; // 0xf0
	uint16_t victim_account_type_; // 0x100
	FString victim_player_position; // 0x108
	FString visible_body_part; // 0x118
	uint32_t victim_blood_left; // 0x128
	int64_t hit_part; // 0x130
	int64_t DamageCauseID; // 0x138
	int32_t DamageTypeID; // 0x140
	int32_t DamageDone; // 0x144
	char death_type; // 0x148
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FTigerRequest_MultiplayHeartbeat {
	FString GameSessionId; // 0x0
	int32_t PlayerCount; // 0x10
	FString MetaData; // 0x18
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

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FTigerTrackedPlayerData {
	APlayerState* PlayerState; // 0x0
	ATigerBestialTrailVisualizer* Visualizer; // 0x8
	int32_t TrackingBuffID; // 0x10
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
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

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FTigerBuildingSystemCornerOverrides {
	UStaticMesh* GroundFloorCorners; // 0x0
	UStaticMesh* ColumnsFloor1; // 0x8
	UStaticMesh* ColumnsFloor2; // 0x10
	UStaticMesh* ColumnsFloor3; // 0x18
	UStaticMesh* ColumnsFloor4; // 0x20
	UStaticMesh* ColumnsFloor5; // 0x28
	UStaticMesh* ColumnsFloor6; // 0x30
	UStaticMesh* ColumnsFloor7; // 0x38
};

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FTigerExpLevelRequirements {
	TArray<int32_t> ExpRequirements; // 0x0
	bool bClampAtMaxLevel; // 0x10
	int32_t ExpRequirementIncreasePostMaxLevel; // 0x14
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

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
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

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FTigerResponse_BuyStoreEntries : FTigerResponseEnvelope {
	FTigerResponse_TransactionalPlayerData Transactional; // 0x18
	TArray<FTigerBoughtItemElement> BoughtItems; // 0x130
	char BuyResult; // 0x140
};

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FTigerElysiumNpcProp {
	TSoftObjectPtr<UObject> PropAsset; // 0x0
	TSoftClassPtr<UObject> PropActorAsset; // 0x28
	FTransform LocalTransform; // 0x50
	FName AttachmentPoint; // 0x80
};

struct FTigerRandomVisualAsset {
	UTigerNPCVisualAsset* VisualAsset; // 0x0
	float Weight; // 0x8
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
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

struct FTigerPersistentSeasonMatchStats {
	TArray<FTigerSeasonMatchStat> Stats; // 0x0
	int32_t MatchesPlayed; // 0x10
	int64_t SeasonId; // 0x18
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FINTLNoticeContent {
	int32_t ContentId; // 0x0
	FString AppContentId; // 0x8
	FString Title; // 0x18
	FString Content; // 0x28
	FString LangType; // 0x38
	int32_t UpdateTime; // 0x48
	FString ExtraData; // 0x50
	TArray<FINTLNoticePicture> PictureList; // 0x60
};

struct FTigerTelemetryKeyValuePair {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FAkWinGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHeadMountedDisplayAudioDevice; // 0x30
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
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

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FTigerMeshData {
	bool bIsVisibile; // 0x0
	bool bVisibilityIsAllowed; // 0x1
};

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FTigerRequest_Presence {
	FString Location; // 0x0
	TArray<FString> InterestedPlayers; // 0x10
};

struct FTigerTelemetryEventTutorial_Exit : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	int32_t TutorialStartTime; // 0x58
	int32_t TutorialEndTime; // 0x5c
	int32_t TutorialFinished; // 0x60
	FString ObjectiveDuration; // 0x68
	FString ObjectiveLocation; // 0x78
};

struct FTigerSensitivitySetting {
	float MasterSensitivity; // 0x0
	float HorizontalSensitivity; // 0x4
	float VerticalSensitivity; // 0x8
	float AimingSensitivity; // 0xc
	float ScopedSensitivity; // 0x10
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FINTLDeviceLevelResult : FINTLBaseResult {
	int32_t DeviceLevel; // 0x40
};

struct FTigerDisableHSenseTarget {
	TSoftClassPtr<UObject> Actor; // 0x0
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
};

struct FTigerCharacterCustomizationHeadData {
	TSoftClassPtr<UObject> ItemClassPath; // 0x0
};

struct FTigerVoCategoryData {
	char Prio; // 0x0
	float TriggerChance; // 0x4
	float Cooldown; // 0x8
};

struct FTigerAiMovementBudget {
	int32_t NpcMoveBudget[0x3]; // 0x0
	float MinAllotedMoveTime; // 0xc
	float MaxAllotedMoveTime; // 0x10
	bool bRestrictMovementTimePerTicket; // 0x14
};

struct FTigerPremiumCurrencyPackData {
	int32_t CurrencyAmount; // 0x0
	int32_t CurrencyBonusAmount; // 0x4
	float RealCurrencyCost; // 0x8
	FString DisplayImagePath; // 0x10
	FText CurrencyType; // 0x20
};

struct FTigerTelemetryEventMatchSession_EndGameEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	FString GameAppid; // 0x20
	FString WinningPlayerID; // 0x30
	int32_t SeasonId; // 0x40
	FString ClanID; // 0x48
	FString ArchetypeId; // 0x58
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FThrallMissionRequirements {
	int32_t MinRequiredThalls; // 0x0
	int32_t MaxRequiredThralls; // 0x4
	FTigerThrallStats TotalRequiredStats; // 0x8
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FTigerGraphicsSettings {
	FTigerGraphicsQualityPreset QualityPreset; // 0x0
	bool bUseDX12; // 0x44
	int32_t SavedVersion; // 0x48
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FTigerNiagaraAttachment {
	FSoftObjectPath NiagaraPath; // 0x0
	FName AttachPointName; // 0x20
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	EAttachLocation AttachLocationRule; // 0x40
	bool bOnlySpawnOnLocalPlayer; // 0x41
	bool bUseAbsoluteRotation; // 0x42
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
};

struct FTigerSeasonConfig_DailyFinalReward {
	FTigerItemId DailyFinalRewardIds[0x7]; // 0x0
};

struct FTigerQuestPersistentProgress {
	TMap<FString, FTigerQuestLinePersistentProgress> Progress; // 0x0
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FTS_PlayerInfo {
	FText MyPlayerName_2_C506DF344F5FBC5B4C3DEDA611CCEE54; // 0x0
	ATigerCharacter* MyPlayerCharacter_7_FB0044754B2EDEBD5AD9B7B0CF85B717; // 0x18
	FText MyPlayerStatus_11_87E31C724F815776AC6D729D70E07B10; // 0x20
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
};

struct FTigerResponse_GetSeasonConfigs : FTigerResponseEnvelope {
	TMap<uint32_t, FString> ConfigsBySeasonId; // 0x18
	FString PublicIpv4; // 0x68
	FString PublicIpv6; // 0x78
	FDateTime CurrentDateTime; // 0x88
};

struct FTigerRequest_AcknowledgeStateUpdate {
	uint32_t StateUpdateId; // 0x0
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FTigerCharacterMeshData : FTigerMeshData {
	USkeletalMeshComponent* MeshComponent; // 0x8
	USkeletalMesh* RegisteredMesh; // 0x10
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FTigerMasteryChallengePersistentProgress {
	TMap<FTigerChallengeInstanceID, FTigerChallengePersistentProgressEntry> Progress; // 0x0
	TArray<int32_t> LastRewardTrackIndices; // 0x50
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
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

struct FMaterialCachedParameters {
	FMaterialCachedParameterEntry RuntimeEntries[0x5]; // 0x0
	TArray<float> ScalarValues; // 0x140
	TArray<FLinearColor> VectorValues; // 0x150
	TArray<UTexture*> TextureValues; // 0x160
	TArray<UFont*> FontValues; // 0x170
	TArray<int32_t> FontPageValues; // 0x180
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextureValues; // 0x190
};

struct FTigerFriendServiceFriend {
	FString DISPLAYNAME; // 0x0
	FString SharkmobUserId; // 0x10
};

struct FTigerTelemetryEventMatchSession_MatchData : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	FString ClientVersion; // 0x28
	FString BattleID; // 0x38
	FString GameAppid; // 0x48
	int32_t TeamSize; // 0x58
	int32_t NumPlayers; // 0x5c
	int32_t NumBots; // 0x60
	FString ItemTypeAmounts; // 0x68
	FString PlayerArchetypesAmounts; // 0x78
	FString SafeZoneLocations; // 0x88
	int32_t NumberofTeams; // 0x98
	int8_t GameplayMode; // 0x9c
	int8_t RankMode; // 0x9d
	int8_t MapID; // 0x9e
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FTigerTelemetryEventStore_FlashStorePurchase : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString Country; // 0x58
	FString StoreEntryID; // 0x68
	FString StoreEntryName; // 0x78
	int32_t CurrencyType; // 0x88
	int32_t Price; // 0x8c
	int32_t DiscountPrice; // 0x90
	int32_t DiscountTotalPrice; // 0x94
	int32_t DiscountTimeLeft; // 0x98
	FString LocalizedStoreEntryName; // 0xa0
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FTigerRequest_GetPlayerInfoFromTicket {
	FString Ticket; // 0x0
};

struct FAkPS4AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint32_t ACPBatchBufferSize; // 0x30
	bool UseHardwareCodecLowLatencyMode; // 0x34
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FTigerThrallMissionObjective {
	ETigerMissionType MissionType; // 0x0
	ETigerMissionObjectiveType ObjectiveType; // 0x4
	FName ObjectiveName; // 0x8
	FString ObjectiveDescription; // 0x10
	TArray<ETigerThrallStatId> SuccessStatIds; // 0x20
	int32_t PercentReductionIfDiscovered; // 0x30
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FTS_LoadingTip {
	FText Header_2_DC439F08493095A3800949BF6AFDCE42; // 0x0
	FText LoadingTip_4_4F09BA0245C1C207813F39B58C16EE19; // 0x18
};

struct FTigerBuffReplicatedInstanceData {
	UTigerBuff* BuffType; // 0x0
	int32_t BuffID; // 0x8
	float TimeLeft; // 0xc
	float BuffStrength; // 0x10
	TWeakObjectPtr<ATigerCharacter> BuffCaster; // 0x14
};

struct FTigerPersistentPlayerID {
	FString UniqueID; // 0x0
};

struct FTigerQueuedTextPromptPriorityEntry {
	FName PropertyName; // 0x0
	UTigerSimpleTextPrompt* PromptClass; // 0x8
	FName VisibleName; // 0x10
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FTigerUniquePingId {
	uint32_t Value; // 0x0
};

struct FAkMidiProgramChange : FAkMidiEventBase {
	char ProgramNum; // 0x2
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FTigerSwingCollisionInstant {
	FTransform Transform; // 0x0
	float TimeInSwing; // 0x30
	int32_t HitboxNotifyIndexForWeapon; // 0x34
	int32_t WeaponIndex; // 0x38
};

struct FINTLUpdateOptionalRepoInitResult : FINTLBaseResult {
	EINTLUpdateActionType ActionType; // 0x40
	int32_t RepoID; // 0x44
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

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FTigerCharacterHeadPiercingSocket {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FINTLUpdateProgress {
	int32_t MethodId; // 0x0
	EINTLUpdateActionType ActionType; // 0x4
	int32_t UpdateStep; // 0x8
	int32_t RepoID; // 0xc
	int32_t TaskID; // 0x10
	int32_t FinishedSize; // 0x14
	int32_t TotalSize; // 0x18
	int32_t Speed; // 0x1c
	int32_t RemainTime; // 0x20
	float StepProgress; // 0x24
	float TotalProgress; // 0x28
	FString ErrorMsg; // 0x30
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

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FEarthshockUseDataNetworked {
	FVector StartLocation; // 0x0
	FVector TargetLocation; // 0xc
	FVector SurfaceNormal; // 0x18
	FVector ConeDirection; // 0x24
	bool bTargetIsWall; // 0x30
};

struct FTigerShotProjectileData {
	UTigerRangedWeapon* RangedWeapon; // 0x28
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FTigerRequest_LoginToken {
	FString Token; // 0x0
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FTigerBuildingSystemSideFloorEnables {
	bool bFront; // 0x0
	bool bLeft; // 0x1
	bool bBack; // 0x2
	bool bRight; // 0x3
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FSharkTelemetrySettings {
	FString DomainURL; // 0x0
	FString SecretKey; // 0x10
	FString ApplicationName; // 0x20
	FString ApplicationID; // 0x30
	int32_t DefaultRequestRetryCount; // 0x40
	int32_t ChunkDispatchMaxBodySizeBytes; // 0x44
	int32_t ChunkDispatchAmountThreshold; // 0x48
	float ChunkDispatchTimeSecondsThreshold; // 0x4c
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FTigerSpreadModifier {
	ETigerSpreadIncreaseMode Mode; // 0x0
	float Speed; // 0x4
	float Amount; // 0x8
};

struct FTigerAnimInstanceProxy : FAnimInstanceProxy {
	TArray<UAnimMetaData*> MetaData; // 0x770
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
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

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
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

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FTigerResponse_GetPlayerInfoFromTicket : FTigerResponseEnvelope {
	FString PlayerId; // 0x18
	FString SharkmobUserId; // 0x28
	FString PlayerName; // 0x38
	char Channel; // 0x48
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaId; // 0x10
	UObject* AreaClass; // 0x18
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
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

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FINTLPersonInfo {
	FString OpenId; // 0x0
	FString UserName; // 0x10
	int32_t Gender; // 0x20
	FString PictureUrl; // 0x28
	FString Country; // 0x38
	FString Province; // 0x48
	FString City; // 0x58
	FString Language; // 0x68
	FString ExtraJson; // 0x78
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
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

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
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

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
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

struct FTigerLootLocationEntry {
	UTigerItemLootTable* LootTable; // 0x0
	int32_t MinimumItemCount; // 0x8
	int32_t MaximumItemCount; // 0xc
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

struct FTigerRequest_StoreEntryConfig {
	char Show; // 0x0
};

struct FTigerResponse_MatchSettingsVariationConfig {
	double GasSpeedFactor; // 0x0
	int32_t CivilianResonance; // 0x8
	bool SwapLootTable; // 0xc
	bool DisableEntity; // 0xd
	int32_t StartingResonance; // 0x10
	int32_t BloodhuntedTimeSeconds; // 0x14
	bool AllHighTierLootActive; // 0x18
	bool BrokenMasqueradeAtStart; // 0x19
	TArray<FTigerResponse_MatchSettingsVariationParameterSet> ParameterSets; // 0x20
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FTigerNearCameraFadeMaterialMasterData {
	UMaterialInterface* MasterMaterial; // 0x0
	FName UseCameraDitherFadeName; // 0x8
	FName FadeLengthName; // 0x10
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
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

struct FTigerSeasonConfigResponse_RewardTier {
	TArray<FString> ItemIds; // 0x0
};

struct FTigerPreSpawnSettings {
	int32_t GroupSyncSettleTime; // 0x0
	int32_t InitialArchetypeSelectCountDown; // 0x4
	int32_t PostArchetypeSelectTime; // 0x8
	int32_t PreSpawnSelectionTime; // 0xc
	int32_t SpawnSelectionTime; // 0x10
	int32_t TimeUntilAutomaticSpawnAssignment; // 0x14
	int32_t PostSpawnSelectionTime; // 0x18
	int32_t ArchetypeSelectTimePerPlayer; // 0x1c
	int32_t TeamViewTime; // 0x20
	int32_t FreeLookPreparationTime; // 0x24
};

struct FTigerCollectibleTableRow : FTableRowBase {
	UTigerCollectibleData* Collectible; // 0x8
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

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
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

struct FTigerLoginQueueToken {
	FString Content; // 0x0
};

struct FTigerNpcDialogue {
	FText DialogueHeader; // 0x0
	TArray<FText> DialogueText; // 0x18
	bool bRandomiseText; // 0x28
	ETigerDialoguePriority DialoguePriority; // 0x29
	ETigerDialogueIdleAnimation IdleAnimation; // 0x2a
	TArray<UTigerDialogueCondition*> DialogueConditions; // 0x30
	ETigerDialogueRepeatability Repeatability; // 0x40
	ETigerDialogueCategory DialogueCategory; // 0x41
	bool bIgnoreCategoryRestrictions; // 0x42
	FTigerQuestIdentifier QuestToStartId; // 0x48
	TArray<UTigerGrimoireEntry*> EntriesToUnlock; // 0x78
	UAkAudioEvent* DialogueAudio; // 0x88
	UAnimMontage* AnimationToPlay; // 0x90
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
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

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
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

struct FTigerMatchmakingPush {
	ETigerMatchResult Result; // 0x0
	FString Host; // 0x8
	int32_t Port; // 0x18
	FString GameSessionId; // 0x20
	FString GameSessionToken; // 0x30
	uint32_t MatchRequestId; // 0x40
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData EventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
};

struct FTigerRequest_DsPresence {
	FString DsInstanceId; // 0x0
	TArray<FString> PlayerIds; // 0x10
};

struct FTigerRequest_SetLocation {
	FString Location; // 0x0
};

struct FTigerRequest_SetInterestedPlayers {
	TArray<FString> InterestedPlayers; // 0x0
};

struct FTigerFeedingMontages {
	FTigerFeedingDescription FemaleTargetDescription; // 0x0
	FTigerFeedingDescription MaleTargetDescription; // 0x30
	FTigerFeedingDescription EntityTargetDescription; // 0x60
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FMapLandmarkPoint {
	FName LandmarkName; // 0x0
	FVector2D PositionInWorld; // 0x8
	FVector2D PositionOnMap; // 0x10
};

struct FTigerItemNotification {
	UTigerItemAsset* Item; // 0x0
	int32_t ItemCount; // 0x8
	FText OverrideName; // 0x10
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FTigerPlayerGridCell {
	TArray<int32_t> CellIndexOffsets; // 0x0
	FVector2D WorldPosition; // 0x10
	int32_t PlayersInCellArea; // 0x18
	int32_t ClosestPlayerCellDistance; // 0x1c
	TArray<TWeakObjectPtr<ATigerPlayer>> PlayersInCell; // 0x20
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FTigerResponse_GetSupportedCurrencyCode : FTigerResponseEnvelope {
	FString Type; // 0x18
};

struct FTigerAIGroupCapCommandWrapper {
	FTigerAIGroupCapCondition Condition; // 0x0
	UTigerAICommandBase* Command; // 0x10
};

struct FTigerDeltaCorrectionData {
	UAnimMontage* CurrentAnimation; // 0x38
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
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

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FTigerMetaStoreEntriesConfig {
	ETigerMetaStoreCategoryType ConfigCategory; // 0x0
	TArray<FTigerMetaStoreEntry> StoreEntries; // 0x8
	int64_t Checksum; // 0x18
	bool bIsValid; // 0x20
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FAnimCurveParam {
	FName Name; // 0x0
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

struct FSplinePoint {
	float InputKey; // 0x0
	FVector Position; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	FRotator Rotation; // 0x28
	FVector Scale; // 0x34
	ESplinePointType Type; // 0x40
};

struct FTigerDisplaySettings {
	int32_t ResolutionX; // 0x0
	int32_t ResolutionY; // 0x4
	float ResolutionScale; // 0x8
	int32_t WindowMode; // 0xc
	float Gamma; // 0x10
	float FrameRateLimit; // 0x14
	bool bEnableFrameRateSmoothing; // 0x18
	bool bEnableVSync; // 0x19
	int32_t FsrQualityLevel; // 0x1c
	float FsrSharpening; // 0x20
	int32_t SavedVersion; // 0x24
};

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FTigerCharacterClientHit {
	ATigerCharacter* TigerChar; // 0x0
	FVector_NetQuantize VictimLocation; // 0x8
	char BoneIndexHit; // 0x14
	FSharkInt8Vector ImpactOffset; // 0x15
	FVector_NetQuantizeNormal SwingDirection; // 0x18
	char WeaponIndex; // 0x24
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FTigerRequest_UpdateLastUse {
	char CharacterId; // 0x0
};

struct FTigerThrallUpgradeScreenInformation {
	TArray<int32_t> ThrallStatsArray; // 0x0
};

struct FTigerInventoryItemOwnerType {
	ETigerClan Clan; // 0x0
	ETigerPowerKitType Archetype; // 0x1
	ETigerGender Gender; // 0x2
};

struct FTigerTelemetryTutorialTimeStampContainer {
	TArray<FTigerTelemetryTutorialTimeStamp> TimeStamps; // 0x0
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
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

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FAkSpatialAudioSettings {
	uint32_t MaxSoundPropagationDepth; // 0x0
	float MovementThreshold; // 0x4
	uint32_t NumberOfPrimaryRays; // 0x8
	uint32_t ReflectionOrder; // 0xc
	float MaximumPathLength; // 0x10
	float CPULimitPercentage; // 0x14
	bool EnableDiffractionOnReflections; // 0x18
	bool EnableGeometricDiffractionAndTransmission; // 0x19
	bool CalcEmitterVirtualPosition; // 0x1a
	bool UseObstruction; // 0x1b
	bool UseOcclusion; // 0x1c
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FTigerCharacterCustomizationColorParameter {
	ETigerCharacterDynamicMeshType DynamicMeshType; // 0x0
	ETigerCharacterMeshPart Part; // 0x1
	FName Name; // 0x4
	FLinearColor Color; // 0xc
};

struct FTigerHolyIncenseSettings {
	EMatchBalanceMode BalanceMode; // 0x0
	float TimeScale; // 0x4
};

struct FTigerMeleeAimAssistData {
	float ConeAngle; // 0x0
	float ConeLength; // 0x4
};

struct FTigerTelemetryEventMatchMaking_BattleInfo : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString LeaderID; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	int32_t TeamSize; // 0x58
	int32_t NumPremadeMembers; // 0x5c
	int32_t MatchMakingID; // 0x60
	int32_t PlayerELO; // 0x64
	FString GameAppid; // 0x68
	int8_t ClanID; // 0x78
	int8_t ArchetypeId; // 0x79
	int8_t GameplayMode; // 0x7a
	int8_t RankMode; // 0x7b
	int8_t MapID; // 0x7c
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

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FTigerRoofSystemFreeTransformableCorner {
	UPoseableMeshComponent* CornerComponent; // 0x0
	UStaticMeshComponent* StaticComponent; // 0x8
	UProceduralMeshComponent* CollisionComponent; // 0x10
	FVector TopBoneLocation; // 0x18
	FVector LeftBoneLocation; // 0x24
	FVector RightBoneLocation; // 0x30
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FTigerRequest_AcceptInvite {
	FString PartyInviteToken; // 0x0
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FINTLUpdateInitInfo {
	EINTLUpdateActionType ActionType; // 0x0
	int32_t RepoID; // 0x4
	int32_t ResourceCopyType; // 0x8
	FString ResourceSavePath; // 0x10
	FString FirstResourceDirPath; // 0x20
};

struct FTigerFacePoseData {
	TSoftObjectPtr<USkeletalMesh> HeadMesh; // 0x0
	UPoseAsset* PoseAsset; // 0x28
	UAnimSequence* PoseSourceAnimation; // 0x30
};

struct FTigerLootItemType {
	UTigerItemAsset* LootAsset; // 0x0
	int32_t AmmoCount; // 0x8
	int32_t DropChanceWeight; // 0xc
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
};

struct FTigerDailyChallengePersistentProgress {
	TMap<FTigerChallengeTypeID, FTigerChallengePersistentProgressEntry> Progress; // 0x0
	int32_t Date; // 0x50
	int32_t LastRewardTrackIndex; // 0x54
};

struct FAkPropertyToControl {
	FString ItemProperty; // 0x0
};

struct FMediaCaptureDevice {
	FText DISPLAYNAME; // 0x0
	FString URL; // 0x18
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
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

struct FTigerEmoteTableRow : FTableRowBase {
	FText EmoteName; // 0x8
	UTexture2D* EmoteIcon; // 0x20
	UAnimMontage* EmoteMontage; // 0x28
	bool bStopsMovement; // 0x30
	bool bAlwaysUnlocked; // 0x31
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FTigerClanPassiveAndDefault {
	UActorComponent* PassiveLogic; // 0x0
	UTigerPassiveConfig* PassiveConfig; // 0x8
};

struct FAkExternalSourceInfo {
	FString ExternalSrcName; // 0x0
	AkCodecId CodecID; // 0x10
	FString Filename; // 0x18
	UAkExternalMediaAsset* ExternalSourceAsset; // 0x28
	bool IsStreamed; // 0x30
};

struct FTigerAISplinePathData {
	TArray<FVector> PathWaypoints; // 0x0
	TArray<FVector> PathWaypointsRightVectors; // 0x10
	FTigerAISplinePathConnection StartingPoint; // 0x20
	FTigerAISplinePathConnection EndPoint; // 0x50
	TArray<FTigerAISplinePathConnection> AdditionalPathConnections; // 0x80
	bool bLooping; // 0x90
	int32_t ExtraRows; // 0x94
	float RowDistance; // 0x98
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FDisplayedItemWidget {
	UUserWidget* Widget; // 0x0
};

struct FTigerBoughtItemElement {
	FString ItemId; // 0x0
	uint32_t Quantity; // 0x10
};

struct FTigerMemberLeftPush {
	FString PartyId; // 0x0
	FString DepartingPlayerId; // 0x10
	FString NewLeaderPlayerId; // 0x20
};

struct FTigerTelemetryEventChallenge_Progress : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString DailyChallengeProgress; // 0x58
	FString WeeklyChallengeProgress; // 0x68
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

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FTigerBattleRoyalePlayerSpawnSettings {
	float MinimumDistanceCentimetersBetweenGroups; // 0x0
	float DesiredDistanceCentimetersBetweenGroups; // 0x4
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
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

struct FTigerMasteryChallengeInstanceDefinition {
	FTigerChallengeInstanceID ChallengeInstanceID; // 0x0
	FTigerChallengeTypeID ChallengeTypeID; // 0x4
	FTigerItemId RewardId; // 0x8
};

struct FINTLUpdateResult : FINTLBaseResult {
	EINTLUpdateActionType ActionType; // 0x40
	int32_t RepoID; // 0x44
	int32_t TaskID; // 0x48
};

struct FTigerMatchSettingsVariationConfig {
	double GasSpeedFactor; // 0x0
	int32_t CivilianResonance; // 0x8
	bool SwapLootTable; // 0xc
	bool DisableEntity; // 0xd
	int32_t StartingResonance; // 0x10
	double BloodhuntedTimeSeconds; // 0x18
	bool AllHighTierLootActive; // 0x20
	bool BrokenMasqueradeAtStart; // 0x21
	TArray<FTigerMatchSettingsVariationParameterSet> ParameterSets; // 0x28
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
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

struct FTigerThrallStats {
	TArray<int32_t> Stats; // 0x0
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

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
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

struct FAkOutputSettings {
	FString AudioDeviceSharesetName; // 0x0
	int32_t IdDevice; // 0x10
	PanningRule PanRule; // 0x14
	AkChannelConfiguration ChannelConfig; // 0x15
};

struct FAkCommunicationSettingsWithSystemInitialization : FAkCommunicationSettings {
	bool InitializeSystemComms; // 0x20
};

struct FTigerOutfitCustomizationConfigValue {
	int32_t HoodieIndex; // 0x0
};

struct FTigerPersistentThrallData {
	FTigerThrallStats ThrallStats; // 0x0
	char ThrallAbilities; // 0x10
	ETigerThrallId ThrallId; // 0x11
	int8_t ThrallInjuryLevel; // 0x12
	int8_t ThrallRating; // 0x13
	TArray<FTigerThrallStatModifier> ThrallStatModifiers; // 0x18
	int32_t ThrallExp; // 0x28
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FTigerPlayerEventToSeasonExperienceSource {
	ETigerSeasonExperienceSource ExperienceSource; // 0x0
	int32_t ExperienceAmount; // 0x4
};

struct FTigerTelemetryEventSocial_DeleteFriend : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString IDDeleted; // 0x58
};

struct FSharkTelemetryHTTPSRequest {
	FSharkTelemetryHTTPSRequestHeader Title; // 0x0
	TArray<FSharkTelemetryHTTPSRequestDataChunk> Data; // 0x80
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FBlendParameter {
	FString DISPLAYNAME; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
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

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FAkAcousticSurface {
	uint32_t Texture; // 0x0
	float Occlusion; // 0x4
	FString Name; // 0x8
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

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FTigerStoreEntryAndQuantity {
	FString ItemId; // 0x0
	uint32_t Quantity; // 0x10
};

struct FTigerTelemetryEventMatchSession_DisciplineUse : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	FString DisciplinesUseLocation; // 0x40
	int8_t DisciplineID; // 0x50
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FAkWwiseObjectDetails {
	FString ItemName; // 0x0
	FString ItemPath; // 0x10
	FString ItemId; // 0x20
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
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

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FPresencePush {
	FString PlayerId; // 0x0
	FString Location; // 0x10
	bool IsOnline; // 0x20
};

struct FTigerResponse_FriendInvites : FTigerResponseEnvelope {
	TArray<FTigerFriendServiceFriend> Invites; // 0x18
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
	FVector LastOutOfRangeLocationCheck; // 0x14
};

struct FTigerRandomizedLootResult {
	UTigerItemAsset* PrimaryItem; // 0x0
	int32_t PrimaryItemCount; // 0x8
	UTigerItemAsset* SecondaryItem; // 0x10
	int32_t SecondaryItemCount; // 0x18
};

struct FTigerCharacterHeadEyewearOffset {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FTigerResponse_GenericExp {
	uint32_t Level; // 0x0
	uint32_t Exp; // 0x4
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
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

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FTigerMeleeFlinchData {
	UCurveFloat* HorizontalFlinch; // 0x0
	UCurveFloat* VerticalFlinch; // 0x8
	float HorizontalStrength; // 0x10
	float VerticalStrength; // 0x14
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FTigerPlayerMatchStats {
	ETigerKillerType KillerType; // 0x0
	FString KillerName; // 0x8
	FTigerPlayerPostMatchScreenHighlightStat Placement; // 0x18
	TArray<FTigerPlayerPostMatchScreenHighlightStat> Stats; // 0x28
};

struct FTigerRequest_GetLonelyFishTicket {
	FString AuthenticationOpenId; // 0x0
	FString AuthenticationToken; // 0x10
	char AuthenticationChannelId; // 0x20
	FString LoginToken; // 0x28
	FString Location; // 0x38
	FString DevPlayerName; // 0x48
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FTigerPersistentArchetypeTransactionalData {
	int64_t ArchetypeLevel; // 0x0
	int64_t ArchetypeLevelExp; // 0x8
};

struct FTigerOnlineStatusMessageEntry {
	FTigerOnlineErrorCode ErrorCode; // 0x0
	FText Message; // 0x8
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FTigerTelemetryTutorialTimeStamp {
	FString ObjectiveId; // 0x0
	float Timestamp; // 0x10
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FTigerGroupId {
	FGuid ID; // 0x0
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FAutoInitializedWidget {
	UUserWidget* WidgetClass; // 0x0
	FString AssignToPropertyName; // 0x8
	bool bAddToViewportOnPlayerSpawn; // 0x18
	bool bAddToOnScreenWidgets; // 0x19
	int32_t ZOrder; // 0x1c
};

struct FTigerGameClientPushRegisterReq : FTigerPushMessage {
	FString ClientProtocolVersion; // 0x10
	FString Ticket; // 0x20
};

struct FTigerTelemetryEventStore_BattlepassPurchase : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	int32_t BattlepassType; // 0x58
	int32_t OriginalBattlepassPrice; // 0x5c
	int32_t DiscountedBattlepassPrice; // 0x60
	int32_t BattlepassLevelAtPurchase; // 0x64
	int32_t BattlepassLevelAfterPurchase; // 0x68
	int32_t AccountLevelAtPurchase; // 0x6c
	FString Country; // 0x70
	int32_t Season; // 0x80
	int32_t SeasonDay; // 0x84
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FSharkTelemetryHTTPSRequestDataChunk {
	FString log_name; // 0x0
	FString log_fields; // 0x10
};

struct FTigerInputSettings {
	FTigerControllerSettings KeyboardMouseSettings; // 0x0
	FTigerControllerSettings GamepadSettings; // 0x20
	bool bUseAutoSprint; // 0x40
	bool bHoldForHeightenedSenses; // 0x41
	bool bHoldForInventory; // 0x42
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FTigerLanguageSettings {
	FString AudioLanguage; // 0x0
	FString TextLanguage; // 0x10
	bool bUseSubtitles; // 0x20
	int32_t SavedVersion; // 0x24
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FTigerTelemetryEventPlayerRevived : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Location; // 0x10
	FString PlayerId; // 0x20
	int32_t was_helped; // 0x30
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

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
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

struct FTigerResponse_IncrementSeasonExp : FTigerResponseEnvelope {
	uint32_t OldExp; // 0x18
	uint32_t NewExp; // 0x1c
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
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

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FTigerRequest_MultiplayDeallocate {
	FString FleetId; // 0x0
	FString GameSessionId; // 0x10
};

struct FTigerRequest_AddCharacter {
	char Archetype; // 0x0
};

struct FTigerSavedBloodTrackData {
	TArray<FString> SelectedPassives; // 0x0
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
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

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FTigerGrimoireEntryStatusStruct {
	uint32_t EntryId; // 0x0
	char State; // 0x4
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

struct FTigerNPCMasqueradeStateMessage {
	ATigerNPC* NPC; // 0x0
	ETigerAIMasqueradeState MasqueradeState; // 0x8
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FTigerThrallMissionRewardItem {
	TSoftClassPtr<UObject> ItemClassPath; // 0x0
	int32_t Count; // 0x28
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
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

struct FTigerCharacterCustomizationParameters {
	TArray<FTigerCharacterCustomizationScalarParameter> Scalars; // 0x0
	TArray<FTigerCharacterCustomizationColorParameter> Colors; // 0x10
	TArray<FTigerCharacterCustomizationTextureParameter> Textures; // 0x20
	FName MaterialSlotName; // 0x30
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FSharkTelemtryEventData {
	UStruct* StaticPropertyStruct; // 0x18
};

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
	bool bUseLod0Lightmap; // 0x70
};

struct FAkPluginInfo {
	FString Name; // 0x0
	uint32_t PluginID; // 0x10
	FString dll; // 0x18
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FTigerRequest_PremiumCurrencyPack {
	FString CurrencyType; // 0x0
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FTigerCharacterCustomizationItem {
	TSoftClassPtr<UObject> ItemClassPath; // 0x0
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

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FAkAcousticTextureParams {
	FVector4 AbsorptionValues; // 0x0
};

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FTigerNonReplicatedCharacterStats {
	FTigerCharacterSingleStatModification MovementAcceleration; // 0x0
	float JumpForceMultiplier; // 0x8
	float WallJumpForceMultiplier; // 0xc
	float MeleeDamageDealtMultiplier; // 0x10
	float AbilityDamageDealtMultiplier; // 0x14
	float DamageTakenMultiplier; // 0x18
	float MeleeDamageTakenMultiplier; // 0x1c
	float AbilityDamageTakenMultiplier; // 0x20
	float ShootingDamageTakenMultiplier; // 0x24
	float CooldownMultiplier; // 0x28
	float CooldownSpeedMultiplier; // 0x2c
	float RechargeMultiplier; // 0x30
	float RechargeSpeedMultiplier; // 0x34
	float MasqueradePointMultiplier; // 0x38
	float ClanSkillCooldownMultiplier; // 0x3c
	float ArchetypeSkillCooldownMultiplier; // 0x40
	float AttackSpeedMultiplier; // 0x44
	float ReloadSpeedMultiplier; // 0x48
	float ShootingDamageDealtMultiplier; // 0x4c
	float ShotgunDamageDealtMultiplier; // 0x50
	float StaminaCostMultiplier; // 0x54
	float AmmoFindMultiplier; // 0x58
	float FeedSpeedMultiplier; // 0x5c
	float MosquitoDamageTakenMultiplier; // 0x60
	float LoudnessMultiplier; // 0x64
	float ExperienceGainMultiplier; // 0x68
	float AimSensitivityMultiplier; // 0x6c
	float DamageDealtMultiplier; // 0x70
	float DamageDealtToCiviliansMultiplier; // 0x74
};

struct FTigerPingContext {
	UDataAsset* Asset; // 0x0
	int32_t Argument; // 0x8
	char TelemetryTypeId; // 0xc
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

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FINTLCustomerUserProfile {
	FString LangType; // 0x0
	FString Sign; // 0x10
	FString OpenId; // 0x20
	FString GameLevel; // 0x30
	FString NickName; // 0x40
	FString RoleId; // 0x50
	FString AreaId; // 0x60
	FString ZoneId; // 0x70
	FString GameSvrId; // 0x80
	FString Region; // 0x90
	FString PictureUrl; // 0xa0
	FString CustomParam1; // 0xb0
	FString CustomParam2; // 0xc0
	FString CustomParam3; // 0xd0
	FString CustomParam4; // 0xe0
	FString CustomParam5; // 0xf0
};

struct FTigerStreamableBuildingSides {
	TArray<FTigerStreamableBuildingSide> BuildingWalls; // 0x0
};

struct FTigerPropAttachment {
	FName AttachIdentifier; // 0x0
	TScriptInterface<ITigerPropCompInterface> Prop; // 0x8
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

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
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

struct FTigerOnlineErrorCode {
	ETigerOnlineErrorCategory Category; // 0x0
	int32_t ID; // 0x4
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
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

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
};

struct FTSSClientDataReport {
	TArray<char> Data; // 0x0
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
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

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FAIRequestID {
	uint32_t RequestId; // 0x0
};

struct FTigerResponse_GetServerMetricsConfig : FTigerResponseEnvelope {
	FString MetricsConfig; // 0x18
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FShMidasPremiumCurrencyPack {
	FString ID; // 0x0
	int32_t Amount; // 0x10
	FString Currency; // 0x18
	FString ImagePath; // 0x28
	int16_t Bonus; // 0x38
	double Price; // 0x40
	FString CurrencyType; // 0x48
};

struct FTigerPerformanceStateLatchData {
	FTigerPerformanceState State; // 0x0
};

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FTigerTelemetryArchetypeAmounts {
	TMap<int32_t, int32_t> ArchetypeAmounts; // 0x0
};

struct FTigerResponse_GetParty : FTigerResponseEnvelope {
	bool PartyFound; // 0x18
	FString PartyId; // 0x20
	TArray<FString> PlayerIds; // 0x30
	int32_t LeaderIndex; // 0x40
	int32_t MaxMembers; // 0x44
	FString HostAddr; // 0x48
	int32_t HostPort; // 0x58
	FString GameSessionToken; // 0x60
	bool MaintenanceMode; // 0x70
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
};

struct FINTLCustomerResult : FINTLBaseResult {
	int32_t MsgType; // 0x40
};

struct FTigerCommandQueue {
	TArray<UTigerAICommandBase*> Commands; // 0x0
};

struct FTigerCompressedRotation {
	char Yaw; // 0x0
	char Pitch; // 0x1
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
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

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
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

struct FTigerRecentlyStreamedCellEntries {
	UTigerWorldCompositionCellComponent* Cell; // 0x0
};

struct FTigerTelemetryEventMatchSession_EndPlayerResults : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t PlayerQuitBeforeEnd; // 0x40
	int32_t KillCount; // 0x44
	int32_t AssistCount; // 0x48
	int32_t TotalSurvivalTime; // 0x4c
	int32_t NumberOfAlliedRevives; // 0x50
	int32_t TotalAmountOfHealing; // 0x54
	int32_t TotalNumberOfHealingEvents; // 0x58
	int32_t TotalFeedingAbortsByDamage; // 0x5c
	int32_t TotalFeedingAbortsByPlayer; // 0x60
};

struct FTigerTelemetryEventSocial_FriendList : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	int32_t SharkmobFriendNumber; // 0x58
	FString SharkmobFriendIDList; // 0x60
	FString PlatformFriendNumber; // 0x70
};

struct FClientDebugInfo {
	uint32_t ClientUid; // 0x0
	FVector2D Location; // 0x4
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FTigerHeightenedSensesAudioVisualization {
	UParticleSystemComponent* ParticleSystem; // 0x0
};

struct FTigerPhysicalInteractionMontages {
	FTigerPhysicalInteractionDescription DescriptionByTargetGender[0x2]; // 0x0
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FTigerBuildingSystemBalconyVolumeDefaults {
	FVector BottomVolumeOffset; // 0x0
	FVector BottomVolumeScale; // 0xc
	FVector LeftVolumeOffset; // 0x18
	FVector LeftVolumeScale; // 0x24
	FVector RightVolumeOffset; // 0x30
	FVector RightVolumeScale; // 0x3c
};

struct FTigerCharacterCustomizationOutfitData {
	TSoftClassPtr<UObject> ItemClassPath; // 0x0
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FTigerHandIkData {
	FName HandBoneName; // 0x0
	FVector HandLocation; // 0x8
	float ToWallDistance; // 0x14
	bool bTraceSuccessful; // 0x18
};

struct FINTLNoticeInfo {
	int32_t NoticeId; // 0x0
	FString AppId; // 0x8
	FString AppNoticeId; // 0x18
	int32_t Status; // 0x28
	int32_t StartTime; // 0x2c
	int32_t EndTime; // 0x30
	int32_t UpdateTime; // 0x34
	FString AreaList; // 0x38
	TArray<FINTLNoticePicture> PictureList; // 0x48
	FString ExtraData; // 0x58
	TArray<FINTLNoticeContent> ContentList; // 0x68
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

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FTigerTelemetryEventMatchSession_PlayerStart : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t PlatID; // 0x40
	FString LeaderID; // 0x48
	FString ClientVersion; // 0x58
	int32_t SquadNum; // 0x68
	FString SquadMembers; // 0x70
	FString SpawnLocation; // 0x80
	int32_t MatchMakingID; // 0x90
	int8_t ClanID; // 0x94
	int8_t ArchetypeId; // 0x95
};

struct FSharkInt8Vector {
	int8_t X; // 0x0
	int8_t Y; // 0x1
	int8_t Z; // 0x2
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FTigerHavenCapturePointSettings {
	float TimeUntilEnableCapturePoint; // 0x0
	float TimeUntilRevealEveryoneAndSpeedupCapturePercentages; // 0x4
	float CaptureSpeedPercentageIncreasePerSecondWhenEveryoneIsRevealed; // 0x8
	float MaxCaptureSpeedPercentagePerSecondWhenEveryoneIsRevealed; // 0xc
	float CaptureTime; // 0x10
	float CapturePercentageIncreasePerSecond; // 0x14
	float FastDecrementPercentageDropPerSecond; // 0x18
	float SlowDecrementPercentageDropPerSecond; // 0x1c
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
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

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
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

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FTigerTelemetryEventAcePlayerDisconnectEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	char disconnect_flag; // 0x98
};

struct FTigerBuildingSystemMaterialCache {
	TArray<FTigerBuildingSystemMaterialCacheMaterialBinding> MaterialBindings; // 0x0
	bool bStaticMeshComponent; // 0x10
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FMovieSceneAkAudioRTPCTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioRTPCSection* Section; // 0x20
};

struct FTigerBuyStoreEntryResponsePayload {
	TArray<FTigerItemId> BoughtItems; // 0x0
	TArray<uint32_t> BoughtItemQuantities; // 0x10
	ETigerBuyStoreEntryResponseCode ResponseCode; // 0x20
	bool bSuccess; // 0x21
};

struct FTigerTelemetryEventMatchSession_EndPlayerMasquerad : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t TotalTimeBloodHunted; // 0x40
	int32_t TotalBloodHuntsByFeeding; // 0x44
	int32_t TotalBloodHuntsByKilling; // 0x48
	int32_t TotalNumberAreaMarkerConsequences; // 0x4c
	int32_t TotalNumberMapMarkerConsequences; // 0x50
};

struct FTigerRegionConfig {
	FString RegionName; // 0x0
	FString RegionId; // 0x10
	TArray<FTigerPingServerConfig> PingServers; // 0x20
};

struct FTigerTelemetryData {
	FString PlayerId; // 0x0
	FString EventName; // 0x10
	FString Universe; // 0x20
	FString PlatformType; // 0x30
	FString ApplicationVersion; // 0x40
	FString EventTimestamp; // 0x50
	FString SessionId; // 0x60
	TArray<FTigerTelemetryKeyValuePair> Data; // 0x70
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FTigerItemPrice {
	int32_t Amount; // 0x0
	FTigerItemId SoftCurrencyId; // 0x8
};

struct FTigerItemDatabaseCategoryEntry {
	uint64_t ItemId; // 0x0
	TSoftClassPtr<UObject> ItemPath; // 0x8
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
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

struct FTigerDeferredBuffInstantiation {
	ATigerCharacter* BuffCaster; // 0x8
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FTigerResponse_GetPremiumCurrencyBalance : FTigerResponseEnvelope {
	uint64_t Balance; // 0x18
};

struct FTigerLoginFailedInfo {
	ETigerLoginResult FailReason; // 0x0
	FTigerBanInfo BanInfo; // 0x8
};

struct FTigerSeasonExperiences {
	TMap<ETigerPlayerEvent, FTigerPlayerEventToSeasonExperienceSource> PlayerEventBasedExperiences; // 0x0
	TArray<int32_t> TopPlacementExperience; // 0x50
	FTigerSeasonExperienceSourceModifiers ExperienceSourceModifiers[0xd]; // 0x60
};

struct FTigerMetaStoreBuyPayloadElement {
	uint64_t EntryToBuy; // 0x0
	int32_t QuantityToBuy; // 0x8
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FTigerAIGroupCapCondition {
	int32_t Slot; // 0x0
	int32_t CommandIndex; // 0x4
	ETigerAiConditionCheckTiming ConditionCheckTiming; // 0x8
	ETigerAiFailedCAPConditionAction FailedConditionAction; // 0x9
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FTigerResponse_InvitePlayer : FTigerResponseEnvelope {
	FString InviteId; // 0x18
};

struct FTigerAnimNode_BlendByBoolWSettle : FAnimNode_BlendListByBool {
	ETigerBoolSettleTriggerDirection SettleTriggerDirection; // 0xa0
	float SettleTriggerValue; // 0xa4
	char SettleEventEnum; // 0xa8
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

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FTigerAttackingNPCCollection {
	TArray<TWeakObjectPtr<ATigerNPC>> AttackingNPCs; // 0x0
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FTigerPlayerBlendSpaceByClan {
	UBlendSpace* AnimationObjects[0x4]; // 0x0
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FTigerRichIconRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
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

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FAkMidiPitchBend : FAkMidiEventBase {
	char ValueLsb; // 0x2
	char ValueMsb; // 0x3
	int32_t FullValue; // 0x4
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FGrainTableEntry {
	int32_t SampleIndex; // 0x0
	float RPM; // 0x4
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

struct FTigerItemIdWithPrice {
	FTigerItemId ItemId; // 0x0
	FTigerItemPrice Price; // 0x8
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FTigerResponse_FriendsList : FTigerResponseEnvelope {
	TArray<FTigerFriendServiceFriend> Friends; // 0x18
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FTigerPersistentMissionData {
	int32_t MissionId; // 0x0
	TArray<ETigerThrallId> ThrallsOnMission; // 0x8
	int32_t Progress; // 0x18
};

struct FSmartName {
	FName DISPLAYNAME; // 0x0
};

struct FTigerTelemetryEventStore_ItemExit : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString ItemId; // 0x58
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
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

struct FTigerPlayerMeshMaterialData {
	TArray<UMaterialInterface*> OriginalMaterials; // 0x0
};

struct FTigerClusteredItem : FFastArraySerializerItem {
	FTransform Transform; // 0x10
	FVector Velocity; // 0x40
	UTigerItemAsset* Item; // 0x50
	int32_t ItemCount; // 0x58
	uint32_t ItemUID; // 0x5c
	TWeakObjectPtr<ATigerPlayerState> PlayerWhoDroppedItem; // 0x60
	float DropTime; // 0x68
	ETigerTelemetryItemSourceID ItemSource; // 0x6c
};

struct FTigerInventoryWeapon {
	UTigerItemAsset* ItemAsset; // 0x0
};

struct FTigerSeasonConfig_DailyRewardCollection {
	TArray<FTigerItemId> TrackRewardIds; // 0x0
	TArray<FTigerSeasonConfig_DailyFinalReward> DailyFinalRewardWeeks; // 0x10
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
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

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FSharkRoundRobinClassSettings {
	TSoftClassPtr<UObject> Class; // 0x0
	ETickingGroup TickingGroup; // 0x28
	uint32_t FramesBetweenUpdates; // 0x2c
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FTigerPlayerMontageByClan {
	UAnimMontage* AnimationObjects[0x4]; // 0x0
};

struct FTigerRatSpawnpointSettings {
	int32_t MinRatSpawnpoints; // 0x0
	int32_t MaxRatSpawnpoints; // 0x4
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
};

struct FAudioQualitySettings {
	FText DISPLAYNAME; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueID; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FTigerPushMessage {
	FString MsgType; // 0x0
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
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

struct FWeaponDistanceDesc {
	float MinDistSquared; // 0x0
	float MaxDistSquared; // 0x4
};

struct FTigerRegionsConfigResponse : FTigerResponseEnvelope {
	TArray<FTigerRegionConfig> AvailableRegions; // 0x18
};

struct FTigerPromotionalUiData {
	FDateTime LastShowDateTime; // 0x0
	int32_t LastShowVersion; // 0x8
};

struct FSharkLoginResult : FSharkAccountActionResult {
	FString UserName; // 0x30
	FString OpenId; // 0x40
	FString Token; // 0x50
	FString PfKey; // 0x60
	FString Pf; // 0x70
	FString SharkmobToken; // 0x80
	EShAccountChannel AuthenticationChannelId; // 0x90
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
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

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
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

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FINTLIDTokenResult : FINTLBaseResult {
	FString IdToken; // 0x40
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FTigerRequest_BuyStoreEntries {
	TArray<FTigerStoreEntryAndQuantity> StoreEntriesToBuy; // 0x0
	uint32_t TotalCost; // 0x10
	char Channel; // 0x14
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

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FINTLDNSResult : FINTLBaseResult {
	FString V4; // 0x40
	FString V6; // 0x50
	FString Host; // 0x60
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FTigerResponse_StoreEntryItem {
	FString ItemId; // 0x0
	uint32_t Quantity; // 0x10
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
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

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
};

struct FTigerRequest_BuyItems {
	TArray<FTigerItemIdWithQuantity> ItemsToBuy; // 0x0
	TArray<FString> CustomizationKeys; // 0x10
	TArray<FString> CustomizationValues; // 0x20
	int32_t TotalCost; // 0x30
	int32_t CurrencyAmountToAdd; // 0x34
	uint32_t SeasonPlacementExpBoostPercentageToAdd; // 0x38
	char Channel; // 0x3c
	TArray<FTigerItemIdWithQuantity> ItemsToConsume; // 0x40
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

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	UMetaData* Subclass; // 0x8
	TSoftClassPtr<UObject> SoftClass; // 0x10
	UObject* Object; // 0x38
	TWeakObjectPtr<UMetaData> WeakObject; // 0x40
	TSoftObjectPtr<UMetaData> SoftObject; // 0x48
	FSoftClassPath ClassPath; // 0x70
	FSoftObjectPath ObjectPath; // 0x88
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FTigerSeasonMatchStat {
	int32_t SeasonTotal; // 0x0
	int32_t SeasonBest; // 0x4
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FTigerResponse_GetCharactersForPlayer : FTigerResponseEnvelope {
	TArray<FTigerResponse_Character> Characters; // 0x18
};

struct FTigerDsLoginElsewherePush {
	FString PlayerId; // 0x0
	FString OtherDsInstanceId; // 0x10
};

struct FTigerTelemetryEventMatchSession_ItemPickups : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	FString ItemId; // 0x40
	int32_t ItemPickUpQuantity; // 0x50
	FString PickUpLocation; // 0x58
	int32_t ItemSourceID; // 0x68
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

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
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

struct FItemClusterArray : FFastArraySerializer {
	TArray<FTigerClusteredItem> Items; // 0x108
	ATigerItemCluster* Parent; // 0x118
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
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

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FTigerNpcVoCategory {
	FName Category; // 0x0
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

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
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

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FTigerPingIconData {
	UTexture2D* Texture; // 0x0
	float Scale; // 0x8
	ETigerUIColor TintColor; // 0xc
};

struct FTigerGroupInvitation {
	FTigerGroupId GroupID; // 0x0
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FTigerChallengeRequirementDisciplineSlot : FTigerChallengeRequirementBase {
	bool bUseSpecificSlot; // 0x8
	ETigerDisciplineSlot RequiredSlot; // 0x9
};

struct FTigerChallengeRequirementGameMode : FTigerChallengeRequirementBase {
	bool bSpecificGameMode; // 0x8
	EMatchBalanceMode RequiredGameMode; // 0x9
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FTigerAnimNode_AddMetaData : FAnimNode_Base {
	FPoseLink Base; // 0x10
	UTigerAnimMetaDataAsset* AnimMetaDataAsset; // 0x20
	FName AnimMetaDataName; // 0x28
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FTigerPersistentOutfitSetup {
	TSoftClassPtr<UObject> OutfitConfig; // 0x0
	int32_t OutfitId; // 0x28
	int32_t HoodieIndex; // 0x2c
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
};

struct FAkMainOutputSettings {
	FString AudioDeviceShareset; // 0x0
	uint32_t DeviceID; // 0x10
	EAkPanningRule PanningRule; // 0x14
	EAkChannelConfigType ChannelConfigType; // 0x18
	uint32_t ChannelMask; // 0x1c
	uint32_t NumberOfChannels; // 0x20
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FTigerStreamableBuildingSide {
	TArray<UStaticMeshComponent*> SideSegments; // 0x0
	FVector Normal; // 0x10
	FVector Center; // 0x1c
	bool bVisible; // 0x28
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FTutorialTrainerDiablerizeData {
	float DiablerizeTimeLeft; // 0x8
	float TimeToGetInPositionforDiablerize; // 0xc
	bool bIsGettingDiablerized; // 0x10
	TWeakObjectPtr<ATigerCharacter> DiablerizingCharacter; // 0x14
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FClassReplicationInfo {
	float DistancePriorityScale; // 0x0
	float StarvationPriorityScale; // 0x4
	float AccumulatedNetPriorityBias; // 0x8
	uint16_t ReplicationPeriodFrame; // 0xc
	uint16_t FastPath_ReplicationPeriodFrame; // 0xe
	uint16_t ActorChannelFrameTimeout; // 0x10
	float CullDistance; // 0x68
	float CullDistanceSquared; // 0x6c
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FTigerMultiplayMetaData {
	bool FakeMatchmakingEnabled; // 0x0
	int32_t BuildChangeList; // 0x4
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FTigerTelemetryEventStore_PremiumCurrencyIncrease : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString ClientIP; // 0x58
	FString Country; // 0x68
	int32_t CurrencySource; // 0x78
	FString PremiumCurrencyBefore; // 0x80
	FString PremiumCurrencyAfter; // 0x90
	int32_t IncreasedPremiumCurrency; // 0xa0
	FString CurrencyPackID; // 0xa8
	int32_t OriginalCurrencyPackPrice; // 0xb8
	int32_t DiscountedCurrencyPackPrice; // 0xbc
	FString PlayerPayCurrency; // 0xc0
	FString PurchasingPlatform; // 0xd0
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
};

struct FINTLBaseResult {
	int32_t MethodId; // 0x0
	int32_t RetCode; // 0x4
	FString RetMsg; // 0x8
	int32_t ThirdCode; // 0x18
	FString ThirdMsg; // 0x20
	FString ExtraJson; // 0x30
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FTigerInviteResponsePush {
	FString InviteId; // 0x0
	bool Accepted; // 0x10
	FString PartyId; // 0x18
	FString GuestPlayerId; // 0x28
	TArray<FString> PlayerIds; // 0x38
	int32_t LeaderIndex; // 0x48
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FTigerTelemetryEventChallenge_Completed : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString ChallengeID; // 0x58
	int32_t ChallengeType; // 0x68
};

struct FTigerTelemetryEventPlayerRegister : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameAppid; // 0x10
	int32_t AreaId; // 0x20
	FString Uin; // 0x28
	FString ClientIP; // 0x38
	int32_t RegWay; // 0x48
	FString ClientVersion; // 0x50
	FString Country; // 0x60
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

struct FTigerChatMessage {
	FText PlayerName; // 0x0
	FText Message; // 0x18
	FSharkUserId SharkUserId; // 0x30
	FTigerPersistentPlayerID PlayerId; // 0x40
	ETigerChatMessageCategory MessageCategory; // 0x50
	char GroupPlayerId; // 0x51
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingId; // 0x0
};

struct FTigerTelemetryEventGameServerState : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int64_t AreaId; // 0x20
	FString ServerIP; // 0x28
	FString GameAppid; // 0x38
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FTigerAISplinePathConnection {
	int32_t Index; // 0x0
	TArray<ETigerNPCType> RestrictedTypes; // 0x8
	ATigerAiSplinePathHub* ConnectedHub; // 0x18
	ATigerAISplinePath* OwningSpline; // 0x20
	float Weight; // 0x28
	bool bAlwaysSwitchSpline; // 0x2c
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FINTLFriendResult : FINTLBaseResult {
	TArray<FINTLPersonInfo> FriendInfoList; // 0x40
};

struct FAkXboxOneGDKAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	uint16_t MaximumNumberOfXMAVoices; // 0x30
	bool UseHardwareCodecLowLatencyMode; // 0x32
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
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

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FTigerNPCSpawningPoint {
	UTigerNPCAsset* NPCAsset; // 0x0
	FVector SpawnPoint; // 0x8
	FRotator Rotation; // 0x14
};

struct FTigerProgressedObjectiveWrapper {
	int32_t TargetValue; // 0x0
	int32_t PostSessionProgress; // 0x4
	int32_t PreSessionProgress; // 0x8
};

struct FTigerSignificanceElysiumNpcBucket {
	int32_t BucketSize; // 0x0
	float TickRate; // 0x4
	uint32_t VisibleMeshesBitMask; // 0x8
	bool bForceLastLod; // 0xc
	bool bEnableClothSim; // 0xd
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FTigerTelemetryEventAcePlayerChangeWeaponEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	int64_t ori_weapon; // 0xb0
	int64_t dst_weapon; // 0xb8
};

struct FTigerNpcReactionData {
	float ReactionExpireTime; // 0x0
	float ReactionCompensationAngle; // 0x4
	bool bCanMoveDuringReaction; // 0x8
};

struct FRequest_CancelMatchmaking {
	FString SESSIONTYPE; // 0x0
	FString DsVersion; // 0x10
	uint32_t MatchRequestId; // 0x20
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FTSSAccountInfo {
	FString AccountId; // 0x0
	ETSSAccountType AccountType; // 0x10
	ETSSClientPlatformType PlatformType; // 0x14
	uint32_t WorldId; // 0x18
	uint32_t ChannelID; // 0x1c
	uint64_t RoleId; // 0x20
	uint32_t GameID; // 0x28
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
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
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FTigerLodSplitMesh {
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x0
	TSoftObjectPtr<USkeletalMesh> Mesh_Lod0; // 0x28
	TSoftObjectPtr<USkeletalMesh> Mesh_NoLod0; // 0x50
};

struct FMovieSceneFloatValueSerializationHelper {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentDataSerializationHelper Tangent; // 0x8
};

struct FTigerNearCameraFadeDebugData {
	bool bDebugNearCameraFade; // 0x0
	UMaterialInterface* NearCameraFadeDebugMaterial; // 0x8
	UMaterialInterface* DebugVisualizationMaterialEnabled; // 0x10
	UMaterialInterface* DebugVisualizationMaterialNoMaster; // 0x18
	UMaterialInterface* DebugVisualizationMaterialNoSimpleCollision; // 0x20
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FTigerFeedingDescription {
	UAnimMontage* AttackerApproach; // 0x0
	UAnimMontage* AttackerFeeding; // 0x8
	UAnimMontage* AttackerDecouple; // 0x10
	UAnimMontage* VictimApproach; // 0x18
	UAnimMontage* VictimFeeding; // 0x20
	UAnimMontage* VictimDecouple; // 0x28
};

struct FTigerBuildingSystemGroundFloorOverrides {
	UTigerBuildingWallPreset* Preset; // 0x0
	int32_t Index; // 0x8
	bool bOverrideScaling; // 0xc
	float MeshWidth; // 0x10
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FTigerSeasonConfig {
	FDateTime SeasonStartDate; // 0x0
	FDateTime SeasonEndDate; // 0x8
	FDateTime BattlepassStartDate; // 0x10
	FDateTime BattlepassEndDate; // 0x18
	FTigerItemId BattlePassItemId; // 0x20
	uint32_t BattlePassPrice; // 0x28
	TSoftObjectPtr<UTexture2D> BattlepassBannerTexture; // 0x30
	TArray<FTigerItemIdWithPrice> SpecialItemPrices; // 0x58
	TArray<FTigerSeasonConfig_RewardTier> FreeRewards; // 0x68
	TArray<FTigerSeasonConfig_RewardTier> BattlepassRewards; // 0x78
	TArray<FTigerSeasonConfig_ChallengeCollection> WeeklyChallenges; // 0x88
	FTigerItemId DailyChallengeExpReward; // 0x98
	FTigerItemId PersistentDailyChallengeTokenReward; // 0xa0
	FTigerSeasonConfig_DailyRewardCollection DailyRewards; // 0xa8
	FName DefaultVendorSubLevelName; // 0xc8
	FTigerItemId SoftCurrencyMatchRewardItemId; // 0xd0
	float SoftCurrencyMatchRewardMultiplier; // 0xd8
	FRuntimeFloatCurve SoftCurrencyPlacementBonus; // 0xe0
	FTigerSeasonExperiences SeasonExperiences; // 0x168
	FTigerExpLevelRequirements SeasonExpRequirements; // 0x230
	FTigerExpLevelRequirements ArchetypeExpRequirements; // 0x248
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

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FTigerPersistentCategoryGroupDefinition {
	TArray<FTigerPersistentCategoryDefinition> CategoryDefinitions; // 0x0
};

struct FTigerRequest_GetMatchmakingToken {
	TArray<FString> PlayerIds; // 0x0
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FAkAudioEventTrackKey {
	float Time; // 0x0
	UAkAudioEvent* AkAudioEvent; // 0x8
	FString EventName; // 0x10
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FAkWaapiUri {
	FString Uri; // 0x0
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes Nodes; // 0x80
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

struct FTigerThrallStatModifiersTableRow : FTableRowBase {
	FText Name; // 0x8
	int32_t StartingTurnsAffecting; // 0x20
	int32_t InjuryLevel; // 0x24
	FTigerThrallStats StatModifier; // 0x28
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FTigerRoofSystemPrimitiveData {
	FVector4 Color; // 0x0
	float Desaturation; // 0x10
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FTigerMeleeWeaponAttackIdentifier {
	ETigerWeaponMeleeAttackType AttackType; // 0x0
	char AttackIndex; // 0x1
};

struct FTigerCharacterCardData {
	TSoftClassPtr<UObject> CharacterIcon; // 0x0
	TSoftClassPtr<UObject> CharacterCardShape; // 0x28
	TSoftClassPtr<UObject> CharacterCardBackground; // 0x50
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FTigerJudgePlayerDamage {
	ATigerPlayer* Player; // 0x0
	TArray<float> DamageCollection; // 0x8
	float DamageOverLastSecond; // 0x18
	float TotalDamage; // 0x1c
};

struct FTigerTelemetryEventPlayerDied : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString player_location; // 0x10
	FString damage_causer; // 0x20
	FString damage_reason; // 0x30
};

struct FTigerPartyPokePush {
	FString PartyId; // 0x0
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FPointOfInterest {
	FText Name; // 0x0
	UTexture2D* Image; // 0x18
	FVector2D MapPosition; // 0x20
	FText TooltipTitle; // 0x28
	FLinearColor TooltipTitleColor; // 0x40
	FText TooltipDescription; // 0x50
	ETigerItemRarity LootRarity; // 0x68
	UTigerPingBase* PingType; // 0x70
	TSoftClassPtr<UObject> HighTierLootGroup; // 0x78
};

struct FTigerPromotionalPopupConfig {
	TMap<FString, FString> PromoPopup_BgImage; // 0x0
	TMap<FString, FString> PromoPopup_Title; // 0x50
	TMap<FString, FString> PromoPopup_Paragraph; // 0xa0
	int32_t PopupTriggerInterval; // 0xf0
	int32_t PopupVersion; // 0xf4
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
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

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
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

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FTigerPlayerAnimationSets {
	UTigerAnimationSetAsset* AnimationSetByClan[0x4]; // 0x0
};

struct FTigerMasqueradeState {
	TWeakObjectPtr<ATigerBaseNPC> NPC; // 0x4
	TWeakObjectPtr<ATigerPlayer> TigerPlayer; // 0xc
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FTigerPlayerSequenceByClan {
	UAnimSequence* AnimationObjects[0x4]; // 0x0
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FTigerTimedAnimationTriggerWrapper {
	TArray<FTigerTimedAnimationTrigger> AnimationTriggers; // 0x0
	float ElapsedTime; // 0x10
	bool bIsActive; // 0x14
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FTigerTelemetryEventAcePlayerReportCrimeEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	FString reported_Uin; // 0x78
	uint16_t reported_account_type_; // 0x88
	FString report_type; // 0x90
	FString report_reason; // 0xa0
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FTigerRequest_RegisterNewIdle {
	FString OverrideIp; // 0x0
	int32_t Port; // 0x10
	FString DsVersionId; // 0x18
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FTigerPersistentInventoryItem {
	TSoftClassPtr<UObject> ItemClassPath; // 0x0
	int32_t Count; // 0x28
};

struct FTigerGameplaySettings {
	bool bSwapOutDefaultWeapon; // 0x0
	bool bMuteGeneralChat; // 0x1
	int32_t SavedVersion; // 0x4
};

struct FTigerTelemetryEventElysium_Exit : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString ExitPointName; // 0x20
	int32_t TotalElysiumTime; // 0x30
	int32_t TotalMoveDistance; // 0x34
	int32_t WallGrindTime; // 0x38
	int32_t SlideTime; // 0x3c
	int32_t AirTime; // 0x40
	int32_t NotMovingTime; // 0x44
	int32_t TotalJumps; // 0x48
	int32_t TotalLedgeGrabs; // 0x4c
	int32_t TotalLowVaults; // 0x50
	int32_t TotalSlideJumps; // 0x54
	FString AggregatedMenuTimes; // 0x58
	FString GameAppid; // 0x68
	FString ClientVersion; // 0x78
};

struct FAkWindowsAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHeadMountedDisplayAudioDevice; // 0x30
	uint32_t MaxSystemAudioObjects; // 0x34
};

struct FTigerResponse_AcceptInvite : FTigerResponseEnvelope {
	FString HostPlayerId; // 0x18
	FString PartyId; // 0x28
	TArray<FString> PartyPlayerIds; // 0x38
	int32_t LeaderIndex; // 0x48
	FString HostAddr; // 0x50
	int32_t HostPort; // 0x60
	FString GameSessionToken; // 0x68
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FTigerContextualHelpContext {
	ATigerPlayerController* PlayerController; // 0x0
	UTigerPowerKit* PowerKit; // 0x8
	int32_t NumMatchesPlayedTotal; // 0x10
	int32_t NumMatchesWithArchetype; // 0x14
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FTigerBaseThrallTableRow : FTableRowBase {
	ETigerThrallId ThrallId; // 0x8
	UTigerBaseThrallData* BaseThrall; // 0x10
};

struct FTigerThrallDetailsScreenInformation {
	FText ThrallInjuries; // 0x0
	FText ThrallDescription; // 0x18
	FText ThrallHintText; // 0x30
	UTexture2D* ThrallKeepsakePortrait; // 0x48
	TArray<int32_t> ThrallStatsArray; // 0x50
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FTigerStaticMeshData : FTigerMeshData {
	UStaticMeshComponent* MeshComponent; // 0x8
};

struct FTigerAiGroupCapSlot {
	FVector Location; // 0x0
	float Yaw; // 0xc
	UTigerNPCAsset* NpcAssetToSpawn; // 0x10
	TArray<ETigerNPCType> RestrictedNpcTypesForSlot; // 0x18
	TArray<FTigerAIGroupCapCommandWrapper> SlotCommands; // 0x28
	bool bLoopCommands; // 0x38
	ATigerNPC* OccupyingNPC; // 0x40
	int32_t CommandIndex; // 0x48
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

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
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

struct FTigerQuestItemLocationDetails {
	FTigerQuestIdentifier QuestIdentifier; // 0x0
	FVector Location; // 0x30
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FTigerSettleEvent {
	char SettleEventEnum; // 0x0
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FTigerGroupSettingsData {
	UTexture2D* CompassMarkerTexture; // 0x0
	UUserWidget* MapMarkerWidgetType; // 0x8
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FTigerPerformanceStates {
	bool bEnabled; // 0x0
	FTigerPerformanceStateLatchData ServerPerformance; // 0x4
	FTigerPerformanceStateLatchData FramesPerSecond; // 0x10
	FTigerPerformanceStateLatchData PacketLoss; // 0x1c
	FTigerPerformanceStateLatchData Latency; // 0x28
	FTigerPerformanceStateLatchData LatencyVariation; // 0x34
	FTigerPerformanceStateLatchData RefreshRate; // 0x40
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

struct FTigerSightConfigData {
	TMap<ETigerAIMasqueradeState, FTigerSightConfigProperties> SightProperties; // 0x0
};

struct FTigerSwingCollisionInfo {
	TArray<FTigerSwingCollisionInstant> CollisionInstants; // 0x0
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

struct FTigerItemIdWithQuantity {
	FString ID; // 0x0
	uint32_t Quantity; // 0x10
};

struct FTigerBanInfo {
	char Reason; // 0x0
	FString EndsAt; // 0x8
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

struct FTigerInputBindings {
	TArray<FInputActionKeyMapping> KeyboardMouseMappings; // 0x0
	TArray<FInputAxisKeyMapping> KeyboardMouseAxisMappings; // 0x10
	TArray<FInputActionKeyMapping> GamepadMappings; // 0x20
	TArray<FInputAxisKeyMapping> GamepadAxisMappings; // 0x30
};

struct FTigerGrimoireCardBorderQualityRow : FTableRowBase {
	float DamageAmount; // 0x8
	float ExtraDamage; // 0xc
	float ExtraDamageOnEdges; // 0x10
};

struct FAkWwiseItemToControl {
	FAkWwiseObjectDetails ItemPicked; // 0x0
	FString ItemPath; // 0x30
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

struct FTigerControllerSettings {
	float RumbleIntensity; // 0x0
	int32_t WeaponCyclePreset; // 0x4
	FTigerSensitivitySetting SensitivitySettings; // 0x8
	bool bInvertedYAxis; // 0x1c
	bool bHoldJumpToClimb; // 0x1d
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
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

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
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

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
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

struct FTigerMeleeWeaponAttackData : FTableRowBase {
	float SwingDepth; // 0x8
	float SwingOffsetX; // 0xc
	float SwingOffsetY; // 0x10
	float SwingOffsetZ; // 0x14
	float SwingDamageAmount; // 0x18
	FVector2D FlinchStrengthMin; // 0x1c
	FVector2D FlinchStrengthMax; // 0x24
	float AimAssistConeAngle; // 0x2c
	float AimAssistConeLength; // 0x30
	float StopAimAssistTime; // 0x34
	float EnableMeleeRecoveryMoveTime; // 0x38
	float CanStartNextAttackTime; // 0x3c
	float WorldStaticCollisionRadius; // 0x40
	float WorldStaticCollisionHalfHeight; // 0x44
};

struct FKey {
	FName KeyName; // 0x0
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

struct FTigerThrallAbility {
	FText AbilityName; // 0x0
	UTexture2D* AbilityIcon; // 0x18
	ETigerThrallAbilityId AbilityId; // 0x20
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FTigerRequest_FriendAction {
	FString SharkmobUserId; // 0x0
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FTigerMemberJoinedPush {
	FString PartyId; // 0x0
	FString JoiningPlayerId; // 0x10
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FTigerTelemetryEventMatchSession_PlayerMetaChange : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t SeasonExperienceGained; // 0x40
	int32_t SeasonLevelBeforeChange; // 0x44
	int32_t SeasonLevelAfterChange; // 0x48
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FTigerSeasonalChallengeInstanceDefinition {
	FTigerChallengeInstanceID ChallengeInstanceID; // 0x0
	FTigerChallengeTypeID ChallengeTypeID; // 0x4
	FTigerItemId RewardId; // 0x8
};

struct FTigerGrimoireSearchEntry {
	FString Name; // 0x0
	UTigerGrimoireCategory* Category; // 0x18
	FString EntryIdAsString; // 0x20
};

struct FTS_PingableActorInfo {
	ENUM_TelemetryPingType Type_6_6B464D494A7564A4F08D50940E122A4C; // 0x0
	FVector WorldLocation_10_251C20C44A63FACD1E5EE28C9A4AE2D2; // 0x4
	AActor* Actor_9_80708A3A45A68E5C237EE8A4F45D7CA4; // 0x10
};

struct FTigerCharacterSingleStatModification {
	float AdditiveChange; // 0x0
	float MultiplicativeChange; // 0x4
};

struct FTigerAIMoveToLocationData {
	FVector Location; // 0x0
	float AcceptanceRadius; // 0xc
	float Yaw; // 0x10
	bool bSetRotation; // 0x14
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FTigerItemLootEntry {
	UTigerItemAsset* ItemAsset; // 0x0
	int32_t MinItemCount; // 0x8
	int32_t MaxItemCount; // 0xc
	float Weight; // 0x10
	UTigerItemLootTable* SpawnsWith; // 0x18
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

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FTigerRequest_RunningGameServerHeartbeat {
	FString OverrideIp; // 0x0
	int32_t Port; // 0x10
	FString DsVersionId; // 0x18
	int32_t PlayerCount; // 0x28
	FTigerDsGameSessionDetails SessionDetails; // 0x30
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FTigerFireProjectileData {
	FVector_NetQuantize100 ProjectileSpawnLocation; // 0x0
	float ShootDirPitch; // 0xc
	float ShootDirYaw; // 0x10
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FINTLAccountResult : FINTLBaseResult {
	int32_t ChannelID; // 0x40
	FString Channel; // 0x48
	FString SeqId; // 0x58
	FString UserName; // 0x68
	FString UID; // 0x78
	FString Token; // 0x88
	FString ExpireTime; // 0x98
	int32_t IsRegister; // 0xa8
	int32_t IsSetPassword; // 0xac
	int32_t IsReceiveEmail; // 0xb0
	int32_t VerifyCodeExpireTime; // 0xb4
	int32_t CanBind; // 0xb8
	FString PpAcceptanceVersion; // 0xc0
	FString TosAcceptanceVersion; // 0xd0
	FDateTime PpAcceptanceTime; // 0xe0
	FDateTime TosAcceptanceTime; // 0xe8
	int32_t IsUserNameAvailable; // 0xf0
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
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

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float Zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FTigerContextualAnimationWrapper {
	FName AnimationName; // 0x0
	float Chance; // 0x8
};

struct FTigerTelemetryEventPlayerLogout : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	FString GameAppid; // 0x20
	int32_t AreaId; // 0x30
	FString Uin; // 0x38
	int32_t Level; // 0x48
	FString ClientIP; // 0x50
	int32_t OnlineTime; // 0x60
	int32_t PlayTime; // 0x64
	int32_t LoginWay; // 0x68
	int32_t PlatID; // 0x6c
	int32_t SMFriendsNum; // 0x70
	int32_t PlatformFriendsNum; // 0x74
	FString ClientVersion; // 0x78
	FString ClientLanguage; // 0x88
	FString Country; // 0x98
	FString OperatingSys; // 0xa8
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FTigerSeasonConfigResponse_SeasonalChallengeDefinition {
	FTigerChallengeInstanceID ChallengeInstanceID; // 0x0
	FTigerChallengeTypeID ChallengeTypeID; // 0x4
	FString RewardId; // 0x8
};

struct FAkCommonInitializationSettingsWithSampleRate : FAkCommonInitializationSettings {
	uint32_t SampleRate; // 0x60
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
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

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
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

struct FTigerResponse_LoginToken : FTigerResponseEnvelope {
	uint16_t EstimatedTimeInSeconds; // 0x18
	FString Token; // 0x20
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

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FTigerSubItemLootTable {
	UTigerItemLootTable* SubLootTable; // 0x0
	ETigerItemRarity MinimumRarity; // 0x8
	ETigerItemRarity MaximumRarity; // 0x9
	float WeightMultiplier; // 0xc
	float WeightMultiplierByRarity[0x5]; // 0x10
	float OverrideTotalWeight; // 0x24
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FTigerFakeGameSessionToken {
	FString Ip; // 0x0
	uint16_t Port; // 0x10
	char GROUPINGMODE; // 0x12
	int32_t GroupSize; // 0x14
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FTigerResponse_GetPremiumCurrencyPacks : FTigerResponseEnvelope {
	TArray<FTigerResponse_PremiumCurrencyPack> CurrencyPacks; // 0x18
};

struct FDisciplineUse {
	ETigerDisciplinesEnum DisciplineUsed; // 0x0
	FVector Location; // 0x4
	FVector Direction; // 0x10
	TArray<ATigerCharacter*> Targets; // 0x20
	FVector DisciplineSpecificVector1; // 0x30
	FVector DisciplineSpecificVector2; // 0x3c
	bool bDisciplineSpecificBool1; // 0x48
	bool bDisciplineSpecificBool2; // 0x49
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

struct FAkHololensAdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHeadMountedDisplayAudioDevice; // 0x30
};

struct FTigerResponse_GetMatchmakingToken : FTigerResponseEnvelope {
	FString MatchmakingDataToken; // 0x18
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FTigerResponse_GetPartyMaintenanceMode : FTigerResponseEnvelope {
	bool MaintenanceMode; // 0x18
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
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

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FTigerClientSpawnLocationInfo {
	ATigerPlayerState* PlayerState; // 0x0
	FVector2D DesiredSpawnLocation; // 0x8
	float Orientation; // 0x10
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FTigerResponse_TransactionalPlayerData {
	int32_t Version; // 0x0
	uint32_t SeasonId; // 0x4
	uint32_t SeasonLevel; // 0x8
	uint32_t SeasonLevelExp; // 0xc
	uint32_t SeasonPlacementExpBonusPercentage; // 0x10
	TMap<FString, FTigerResponse_GenericExp> GenericExps; // 0x18
	TMap<FString, int32_t> InventoryItems; // 0x68
	TMap<FString, FString> CustomizationConfigs; // 0xb8
	float Rating; // 0x108
	uint64_t PremiumCurrencyBalance; // 0x110
};

struct FAkChannelMask {
	int32_t ChannelMask; // 0x0
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FTigerPingCoordinatorEntry {
	FTigerUniquePingId UniqueID; // 0x0
	UTigerPingBase* PingClass; // 0x8
	TWeakObjectPtr<AActor> ContextActor; // 0x10
	UDataAsset* ContextObject; // 0x18
	char TelemetryTypeId; // 0x20
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
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

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FTigerBloodTrack {
	TArray<UTigerBloodTrackPassiveConfig*> Passives; // 0x0
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FTigerQuestPersistentProgressEntry {
	bool bHasDistributedReward; // 0x0
	TArray<FTigerQuestObjectivePersistentProgressEntry> ObjectivesProgress; // 0x8
};

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DISPLAYNAME; // 0x10
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

struct FAkGeometrySurfaceOverride {
	UAkAcousticTexture* AcousticTexture; // 0x0
	char bEnableOcclusionOverride : 1; // 0x8
	float OcclusionValue; // 0xc
	float SurfaceArea; // 0x10
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

struct FTigerResponse_UpdateSeasonProgress : FTigerResponseEnvelope {
	uint32_t OldSeasonExp; // 0x18
	uint32_t NewSeasonExp; // 0x1c
	uint32_t OldSeasonLevel; // 0x20
	uint32_t NewSeasonLevel; // 0x24
	TMap<FString, FTigerResponse_GenericExp> NewGenericExps; // 0x28
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

struct FActorLayer {
	FName Name; // 0x0
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

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FTigerTelemetryEventMatchMaking_Succeeded : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	int32_t MatchMakingID; // 0xc
	FString Uin; // 0x10
	FString GameAppid; // 0x20
};

struct FInAppPurchaseProductInfo2 {
	FString Identifier; // 0x0
	FString TransactionIdentifier; // 0x10
	FString DISPLAYNAME; // 0x20
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

struct FTigerPromotionalPopupConfigEntry {
	FString ImageUrl; // 0x0
	FText Title; // 0x10
	FText Paragraph; // 0x28
};

struct FMagicLeapSharedWorldPinData {
	FGuid PinId; // 0x0
	FMagicLeapARPinState PinState; // 0x10
};

struct FTigerTelemetryEventChallenge_List : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString DailyChallengeID; // 0x58
	FString WeeklyChallengeID; // 0x68
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FMagicLeapARPinObjectIdList {
	TSet<FString> ObjectIdList; // 0x0
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

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DISPLAYNAME; // 0x8
	FText Description; // 0x20
};

struct FTigerQuestIdentifier {
	FString QuestLineId; // 0x0
	FString QuestId; // 0x10
	FGuid ObjectiveId; // 0x20
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

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
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

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FINTLIsReceiveEmailResult : FINTLBaseResult {
	int32_t IsReceiveEmail; // 0x40
};

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
};

struct FTigerProgressedQuestWrapper {
	FText QuestDescription; // 0x0
	TArray<FTigerProgressedObjectiveWrapper> ProgressedObjectives; // 0x18
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
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

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FTigerDummyPropAttachment {
	FTigerPropAttachmentInfo AttachmentInfo; // 0x0
	bool bShow; // 0x60
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FTigerFeedingDataByGender {
	FTigerFeedingMontages FeedingDataByVampireGender[0x2]; // 0x0
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FTigerSeasonSessionExperience {
	TArray<int32_t> SeasonExperienceAccumulatedSources; // 0x0
	int32_t SeasonExperienceAccumulated; // 0x10
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FTigerItemPreviewCamera {
	ACineCameraActor* CameraActor; // 0x0
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FMagicLeapARPinState {
	float Confidence; // 0x0
	float ValidRadius; // 0x4
	float RotationError; // 0x8
	float TranslationError; // 0xc
	EMagicLeapARPinType PinType; // 0x10
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
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

struct FTigerPartyInviteToken {
	FString Content; // 0x0
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
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

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FTigerSeasonalData {
	uint32_t OldExp; // 0x0
	uint32_t NewExp; // 0x4
	uint32_t OldLevel; // 0x8
	uint32_t NewLevel; // 0xc
};

struct FTigerTelemetryEventMatchSession_DamageEvents : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	FString UinSource; // 0x20
	FString UinTarget; // 0x30
	FString GameAppid; // 0x40
	FString DamageCauseID; // 0x50
	int32_t DamageDone; // 0x60
	int32_t KilledTarget; // 0x64
	int32_t KnockedDownTarget; // 0x68
	FString TargetDamageLocation; // 0x70
	FString SourceDamageLocation; // 0x80
	int32_t TargetWasBloodHunted; // 0x90
	int32_t DamageEventWasHeadshot; // 0x94
	int8_t DamageTypeID; // 0x98
	int8_t SourceType; // 0x99
	int8_t TargetType; // 0x9a
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

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FTigerRequest_GetSupportedCurrencyCode {
	FString UserId; // 0x0
};

struct FTigerPoseableMeshData : FTigerMeshData {
	USkeletalMeshComponent* MeshComponent; // 0x8
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FTigerPhysicalInteractionDescription {
	UAnimMontage* PrimeStart; // 0x0
	UAnimMontage* PrimeMid; // 0x8
	UAnimMontage* PrimeEnd; // 0x10
	UAnimMontage* SecondaryStart; // 0x18
	UAnimMontage* SecondaryMid; // 0x20
	UAnimMontage* SecondaryEnd; // 0x28
};

struct FAkPoly {
	UAkAcousticTexture* Texture; // 0x0
	float Occlusion; // 0x8
	bool EnableSurface; // 0xc
	float SurfaceArea; // 0x10
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

struct FTigerMatchSettingsVariationParameterSet {
	TArray<ETigerMatchSettingsVariationParameter> Parameters; // 0x0
	double Probability; // 0x10
};

struct FTigerCombinedItemCustomizations {
	TArray<FTigerCharacterCustomizationItem> CombinedItems; // 0x0
};

struct FTigerRequest_RegisterGameSessionResults {
	TArray<FTigerPlayerIdWithPlacement> Result; // 0x0
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FSharkTelemetryHTTPSResponse {
	FSharkTelemetryHTTPSRequestHeader Title; // 0x0
	FSharkTelemetryHTTPSResponseDataChunk Data; // 0x80
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

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FTigerPersistentPlayerTransactionalData {
	int64_t SeasonId; // 0x0
	int64_t SeasonLevel; // 0x8
	int64_t SeasonLevelExp; // 0x10
	int32_t SeasonPlacementExpBonusPercentage; // 0x18
	TArray<FTigerPersistentInventoryItem> InventoryItems; // 0x20
	TArray<FTigerPersistentOutfitSetup> Outfits; // 0x30
	TArray<FTigerPersistentArchetypeTransactionalData> ArchetypeData; // 0x40
	float Rating; // 0x50
	int64_t PremiumCurrencyBalance; // 0x58
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

struct FTigerModSlotInfo {
	UTigerRangedModItemAsset* Mod; // 0x0
	bool IsUnlocked; // 0x8
};

struct FTigerJudgeRotationSettings {
	ETigerJudgeRotationMode RotationMode; // 0x0
	float RotationSpeed; // 0x4
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FAkMidiCc : FAkMidiEventBase {
	EAkMidiCcValues Cc; // 0x2
	char Value; // 0x3
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FINTLPushResult : FINTLBaseResult {
	int32_t Type; // 0x40
	FString Notification; // 0x48
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
};

struct FTigerTelemetryEventElysium_NpcInteract : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString NpcName; // 0x20
	int32_t InteractionDuration; // 0x30
	FString GameAppid; // 0x38
	FString ClientVersion; // 0x48
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

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
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

struct FTigerRequest_UpdateSeasonProgressGenericExp {
	uint32_t Level; // 0x0
	uint32_t Exp; // 0x4
};

struct FTigerTelemetryDefinitionMaster {
	TMap<FString, FTigerTelemetryDefinition> Definitions; // 0x0
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
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

struct FINTLUpdateOptionalRepoFilesStatus {
	FString FilePath; // 0x0
	int32_t TotalFileNum; // 0x10
	int32_t ValidFileNum; // 0x14
	int32_t NeedDownloadSize; // 0x18
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FTigerSuggestedArticlesData {
	int32_t Day; // 0x0
	TArray<FString> EntryIds; // 0x8
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FTigerGeneratedLootTable {
	TArray<FTigerItemLootEntry> Items; // 0x0
};

struct FTigerResponse_AdminMessagesConfigs : FTigerResponseEnvelope {
	FString MessagesJson; // 0x18
};

struct FTigerCharacterHeadHeadgearOffset {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
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

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
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

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FTigerRangedRandomState {
	uint64_t RandomState; // 0x0
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FTigerGrimoireCardColorRow : FTableRowBase {
	FColor Color; // 0x8
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> Ids; // 0x0
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
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

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DISPLAYNAME; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FTigerBloodHuntPositionWrapper {
	ATigerPlayerState* PlayerState; // 0x0
	FVector_NetQuantize WorldPosition; // 0x8
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

struct FTigerRewardReason {
	ETigerRewardReason ReasonType; // 0x0
	int32_t Level; // 0x4
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FTigerChallengeRequirementWeaponType : FTigerChallengeRequirementBase {
	bool bAnyRangedWeapon; // 0x8
	bool bAnyMeleeWeapon; // 0x9
	UTigerItemAsset* RequiredWeaponAsAsset; // 0x10
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FTigerBloodVeinBranchMovementSettings {
	float LaunchPower; // 0x0
	float SimulationTimeScale; // 0x4
	float YawRotationSpeed; // 0x8
	float PitchDownRotationSpeed; // 0xc
	float PitchUpRotationSpeed; // 0x10
	float TargetPitchOffset; // 0x14
	float MaxTargetPitch; // 0x18
	float MaxSpeed; // 0x1c
	float MaximumMovementYawAdjustment; // 0x20
};

struct FTigerCharacterPoseableMeshBoneData {
	ETigerCharacterMeshPart BodyPart; // 0x0
	FName ParentBone; // 0x4
	FVector RelativeLocation; // 0xc
	FRotator RelativeRotation; // 0x18
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FTigerCharacterStatModification {
	float ClanSkillCooldownMultiplier; // 0x0
	float ArchetypeSkillCooldownMultiplier; // 0x4
	float CooldownMultiplier; // 0x8
	float CooldownSpeedMultiplier; // 0xc
	float RechargeMultiplier; // 0x10
	float RechargeSpeedMultiplier; // 0x14
	FTigerCharacterSingleStatModification MovementSpeed; // 0x18
	float ClimbSpeedMultiplier; // 0x20
	float MasqueradePointMultiplier; // 0x24
	FTigerCharacterSingleStatModification MovementAcceleration; // 0x28
	FTigerCharacterSingleStatModification Health; // 0x30
	float JumpForceMultiplier; // 0x38
	float WallJumpForceMultiplier; // 0x3c
	float AttackSpeedMultiplier; // 0x40
	float ReloadSpeedMultiplier; // 0x44
	float StaminaCostMultiplier; // 0x48
	float AmmoFindMultiplier; // 0x4c
	float FeedSpeedMultiplier; // 0x50
	float MeleeDamageDealtMultiplier; // 0x54
	float DamageDealtMultiplier; // 0x58
	float DamageDealtToCiviliansMultiplier; // 0x5c
	float AbilityDamageDealtMultiplier; // 0x60
	float ShotgunDamageDealtMultiplier; // 0x64
	float ShootingDamageDealtMultiplier; // 0x68
	float DamageTakenMultiplier; // 0x6c
	float MeleeDamageTakenMultiplier; // 0x70
	float AbilityDamageTakenMultiplier; // 0x74
	float ShootingDamageTakenMultiplier; // 0x78
	float MosquitoDamageTakenMultiplier; // 0x7c
	float LoudnessMultiplier; // 0x80
	float ReviveSpeedMultiplier; // 0x84
	float ExperienceGainMultiplier; // 0x88
	float AimSensitivityMultiplier; // 0x8c
};

struct FTigerTelemetryEventMatchSession_ScourgeDashUse : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameAppid; // 0x10
	FString Uin; // 0x20
	FString BattleID; // 0x30
	int32_t TotalDistanceScourgeDashed; // 0x40
	FString ScourgeDashStartLocation; // 0x48
	FString ScourgeDashEndLocation; // 0x58
	int32_t DidDamageTarget; // 0x68
};

struct FTigerFilteredLayeredBlend : FAnimNode_LayeredBoneBlend {
	UTigerAnimationFilter* FilterAsset; // 0xc0
};

struct FTigerCharacterServerHit {
	ATigerCharacter* TigerChar; // 0x0
	FVector_NetQuantize VictimLocation; // 0x8
	char BoneIndexHit; // 0x14
	FSharkInt8Vector ImpactOffset; // 0x15
	FVector_NetQuantizeNormal SwingDirection; // 0x18
	UAnimMontage* KnockbackMontage; // 0x28
	bool bAbortAttack; // 0x30
	char CompressedActorYaw; // 0x31
};

struct FAkMidiChannelAftertouch : FAkMidiEventBase {
	char Value; // 0x2
};

struct FTigerJudgeSwingCollisionInfo {
	TArray<FTigerJudgeSwingCollisionInstant> CollisionInstants; // 0x0
};

struct FTigerAdminMessagesConfig {
	FString MessagesJson; // 0x0
};

struct FTigerSpawnGroupBudgetTableRow : FTableRowBase {
	FTigerSpawnGroupBudget Budgets[0x2]; // 0x8
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
};

struct FTigerResponse_BuyItem : FTigerResponseEnvelope {
	FTigerResponse_TransactionalPlayerData Transactional; // 0x18
};

struct FTigerItemPreviewData {
	ATigerBattlepassRewardPreview* PreviewActorClass; // 0x0
	TArray<UTigerInventoryItemBase*> ItemClasses; // 0x8
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FTigerSeasonExperienceSourceModifiers {
	int32_t ExperienceCap; // 0x0
	float ExperienceMultiplier; // 0x4
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FSharkTelemetryHTTPSResponseDataChunk {
	int32_t code; // 0x0
	FString Msg; // 0x8
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

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FTigerItemDatabaseCategory {
	TArray<FTigerItemDatabaseCategoryEntry> Items; // 0x0
};

struct FTigerTelemetryTutorialLocation {
	FString ObjectiveId; // 0x0
	FString Location; // 0x10
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
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

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FTigerChallengeTypeID {
	uint32_t UID; // 0x0
};

struct FTigerQuestCollectionEntry {
	int32_t UniqueQuestID; // 0x0
	UTigerQuest* ReferenceQuest; // 0x8
};

struct FTigerTelemetryEventAccount_Customization : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString CharacterCard; // 0x58
};

struct FTigerRequest_UpdateSeasonProgress {
	uint32_t ExpGained; // 0x0
	uint32_t ExpRemovedDueToConversion; // 0x4
	uint32_t LevelCount; // 0x8
	FString ArchetypeId; // 0x10
	uint32_t PlayedSeconds; // 0x20
	bool IncrementMatchesPlayed; // 0x24
	TMap<FString, FTigerRequest_UpdateSeasonProgressGenericExp> GenericExps; // 0x28
};

struct FAkWaapiFieldNames {
	FString FieldName; // 0x0
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

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FTigerSidePieceMaterialOverrideCache {
	UStaticMesh* OldMesh; // 0x0
	TArray<UMaterialInterface*> Materials; // 0x8
	TArray<FName> SlotNames; // 0x18
};

struct FResponseEnvelope {
	bool OK; // 0x0
	FString Error; // 0x8
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FTigerTelemetryEventMatchSession_PlayerPings : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Uin; // 0x10
	FString BattleID; // 0x20
	FString GameAppid; // 0x30
	int32_t PingType; // 0x40
	FString PingTarget; // 0x48
	int32_t AgreementsReceived; // 0x58
	int32_t CauseOfPingRemoval; // 0x5c
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FTigerPartyId {
	FGuid Guid; // 0x0
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
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

struct FTigerTelemetryEventSocial_FriendRequest : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString IDRequestRecipient; // 0x58
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FTigerRequest_IncrementSeasonExp {
	uint32_t Exp; // 0x0
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FINTLExtendResult : FINTLBaseResult {
	EINTLLoginChannel Channel; // 0x40
	FString ExtendMethodName; // 0x48
};

struct FTigerRegionPingerSettings {
	int32_t PingNumSamples; // 0x0
	int32_t NumPingsToDisregard; // 0x4
	float PingTimeoutSeconds; // 0x8
	int32_t AllowedConsecutiveFailures; // 0xc
	float WaitSecondsOnUnreachable; // 0x10
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
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

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FClientSpawnData {
	uint32_t ClientUid; // 0x0
	UObject* SpawnClass; // 0x8
	FTransform Transform; // 0x10
	TArray<char> ClassSpecificData; // 0x40
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FTigerPostProcessSettingsSetup {
	TArray<UMaterialInterface*> PostProcessMaterials; // 0x0
};

struct FTigerParty {
	FTigerPartyId ID; // 0x0
	TArray<FString> PlayerIds; // 0x10
	FString LeaderPlayerId; // 0x20
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

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FAkCommunicationSettingsWithCommSelection : FAkCommunicationSettings {
	EAkCommSystem CommunicationSystem; // 0x20
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

struct FTigerBuildingSystemMaterialCacheMaterialBinding {
	int32_t MaterialIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAkMidiNoteOnOff : FAkMidiEventBase {
	char Note; // 0x2
	char Velocity; // 0x3
};

struct FTigerPersistentCategoryDefinition : FTableRowBase {
	ETigerPersistentStoreCategory Category; // 0x8
	TArray<FTigerPersistentItemDefinition> AvailableItems; // 0x10
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FTigerTelemetryEventAcePlayerGameSummaryEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	int8_t Result; // 0xb0
	int32_t Duration; // 0xb4
	uint16_t rank; // 0xb8
	int32_t KillCount; // 0xbc
	uint16_t death_num; // 0xc0
	int32_t AssistCount; // 0xc4
	uint32_t Score; // 0xc8
	int32_t Bonus; // 0xcc
	int32_t Experience; // 0xd0
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

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
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

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FCountryCodesStructure {
	FText EngShortName_30_4FA7368A4BA615F766DFB498F6698D6D; // 0x0
	FString Alpha2_34_25B20CD7465570AE3971969A148CF3D0; // 0x18
	FString Alpha3_35_1AC300E84D094E5B5627C78FF8B82A06; // 0x28
	int32_t Numeric_6_D1F7737B4C626805B0DF2DA04809A099; // 0x38
	int32_t AgeMin_28_5DEBFC344DBC0796EE420AA78DABABE3; // 0x3c
	int32_t AgeRating_23_6BCDC7EF4FDF62E92236C1915ECBFF82; // 0x40
	int32_t ExportGate_33_FE59B7C44305415F9CC992955C904F18; // 0x44
};

struct FINTLLBSIPInfoResult : FINTLBaseResult {
	FString Region; // 0x40
	FString Alpha2; // 0x50
	int32_t Timestamp; // 0x60
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
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

struct FTigerStreamerModeSettings {
	ETigerStreamerModeLevel StreamerModeLevel; // 0x0
	bool bEnableAnonymousMode; // 0x1
	bool bEnablePlayerScramble; // 0x2
	bool bDisableKillFeed; // 0x3
	bool bDisableMiniMap; // 0x4
	bool bDisableNotifications; // 0x5
	bool bDisablePlayerMessages; // 0x6
	int32_t SavedVersion; // 0x8
};

struct FAkTriangle {
	uint16_t Point0; // 0x0
	uint16_t Point1; // 0x2
	uint16_t Point2; // 0x4
	uint16_t Surface; // 0x6
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FTigerBuildingSystemWallPieceInstancingDataEntry {
	UStaticMeshComponent* Component; // 0x0
	TArray<float> Data; // 0x8
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

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FTigerScoutedCharacter {
	ATigerCharacter* ScoutedCharacter; // 0x0
	UTigerMapMarkerProxy* MarkerProxy; // 0x8
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
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

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FTigerBattlepassRewardPreviewRow : FTableRowBase {
	TSoftClassPtr<UObject> ItemClass; // 0x8
	TSoftClassPtr<UObject> PreviewActorClass; // 0x30
	FName CameraTag; // 0x58
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
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

struct FTigerPingNotificationNetData {
	UTigerPingBase* PingClass; // 0x0
	FTigerPingContext Context; // 0x8
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FINTLUpdateStartRepoNewVersionInfo {
	int32_t MethodId; // 0x0
	EINTLUpdateActionType ActionType; // 0x4
	int32_t NewVersionType; // 0x8
	FString Version; // 0x10
	int32_t NeedDownloadSize; // 0x20
	FString GameDefinedStr; // 0x28
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DISPLAYNAME; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FDistrictDataAnchor {
	FVector2D WorldPosition; // 0x0
	FVector2D MapPosition; // 0x8
};

struct FMovieSceneTangentDataSerializationHelper {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FTigerResponse_PremiumCurrencyPack : FTigerResponseEnvelope {
	int64_t ID; // 0x18
	int32_t Amount; // 0x20
	FString ImagePath; // 0x28
	int16_t Bonus; // 0x38
	double Price; // 0x40
	FString CurrencyType; // 0x48
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
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

struct FTigerTooltipStatChange {
	FText StatName; // 0x0
	ETigerTooltipStatChangeAmount Amount; // 0x18
	bool bIsNegativeChange; // 0x19
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FTigerBuildingSystemFloorComponents {
	TArray<UStaticMeshComponent*> SidePieceComponents; // 0x0
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
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

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FSharkUserId {
	FString ID; // 0x0
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FTigerResponse_StoreEntry {
	FString StoreEntryID; // 0x0
	uint32_t PremiumPrice; // 0x10
	FString ImagePath; // 0x18
	uint32_t Discount; // 0x28
	FDateTime StartAt; // 0x30
	FDateTime EndsAt; // 0x38
	uint32_t Slot; // 0x40
	TArray<FTigerResponse_StoreEntryItem> Items; // 0x48
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
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

struct FTigerTelemetryEventAceBulletShotEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	int64_t shot_id; // 0xb0
	int64_t weapon_id; // 0xb8
	uint32_t weapon_type; // 0xc0
	FString player_position; // 0xc8
	FString attacker_player_direction; // 0xd8
	char bullets_cost; // 0xe8
	uint16_t bullets_left; // 0xea
	FString victim_player_position; // 0xf0
	FString shot_dst_position; // 0x100
	char hit_part; // 0x110
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FTigerPersistentPlayerCardData {
	int32_t CharacterIconId; // 0x0
	int32_t CharacterCardShapeMaskId; // 0x4
	int32_t CharacterCardBackgroundTextureId; // 0x8
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FLocationServicesData {
	float Timestamp; // 0x0
	float Longitude; // 0x4
	float Latitude; // 0x8
	float HorizontalAccuracy; // 0xc
	float VerticalAccuracy; // 0x10
	float Altitude; // 0x14
};

struct FTigerHighTierLootSettings {
	FSharkRandomDeviationInt NumberOfHighTierLootLocations; // 0x0
	TSoftObjectPtr<UTigerItemLootTable> HighTierLootTable; // 0x8
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

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
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

struct FTigerResponse_GetCharacter : FTigerResponseEnvelope {
	FTigerResponse_Character Character; // 0x18
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FTigerWeaponScalingCrosshairSlot {
	FSlateBrush Brush; // 0x0
	float RenderAngle; // 0x88
	float AdditionalSize; // 0x8c
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

struct FTigerRequest_GetGameSessionDsData {
	FString GameSessionToken; // 0x0
	int32_t DsPort; // 0x10
	FString PlayerUniqueId; // 0x18
	FString OverrideIp; // 0x28
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FTigerMuteInfo {
	bool bIsMuted; // 0x0
	char Reason; // 0x1
	FString EndsAt; // 0x8
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FTigerSHPBSettings {
	int32_t StartMinSHPBNPCs; // 0x0
	int32_t StartMaxSHPBNPCs; // 0x4
	int32_t IntervalMinSHPBNPCs; // 0x8
	int32_t IntervalMaxSHPBNPCs; // 0xc
	float MinSpawnInterval; // 0x10
	float MaxSpawnInterval; // 0x14
	float LastIntervalSpawnMatchTime; // 0x18
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	bool bShouldLoop; // 0x44
	bool bTeleportToExplicitTime; // 0x45
	ESequenceEvalReinit ReinitializationBehavior; // 0x46
	float StartPosition; // 0x48
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FTigerRoofSystemFreeTransformablePrimitiveData {
	FVector4 Color; // 0x0
	float Desaturation; // 0x10
};

struct FTigerInventorySlotContent {
	ETigerInventoryItemType Type; // 0x0
	UTigerItemAsset* ItemAsset; // 0x8
	int32_t StackCount; // 0x10
};

struct FTigerNewNotificationSaveLoadStruct {
	TArray<FTigerNewNotificationNodeEntry> SaveLoadEntries; // 0x0
	int64_t LatestLoginDaysFromEpoch; // 0x10
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FTigerTelemetryEventMatchMaking_Cancelled : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	int32_t MatchMakingID; // 0xc
	FString Uin; // 0x10
	FString GameAppid; // 0x20
	int8_t CancelReason; // 0x30
};

struct FTigerResponse_GetStoreItemConfigs : FTigerResponseEnvelope {
	TMap<FString, FTigerResponse_CategoryGroupDefinition> CategoryGroups; // 0x18
};

struct FTigerPlayerStateFriendPair {
	ATigerPlayerState* PlayerState; // 0x0
	UTigerFriend* Friend; // 0x8
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FINTLAuthResult : FINTLBaseResult {
	FString OpenId; // 0x40
	FString Token; // 0x50
	int32_t TokenExpireTime; // 0x60
	int32_t FirstLogin; // 0x64
	FString RegChannelDis; // 0x68
	FString UserName; // 0x78
	int32_t Gender; // 0x88
	FString Birthday; // 0x90
	FString PicUrl; // 0xa0
	FString Pf; // 0xb0
	FString PfKey; // 0xc0
	bool NeedRealNameAuth; // 0xd0
	int32_t ChannelID; // 0xd4
	EINTLLoginChannel ChannelName; // 0xd8
	FString ChannelInfo; // 0xe0
	FString ConfirmCode; // 0xf0
	int32_t ConfirmCodeExpireTime; // 0x100
	FString BindList; // 0x108
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
};

struct FTigerNpcThatCanSeePlayerWrapper_Client {
	TWeakObjectPtr<ATigerBaseNPC> NPC; // 0x0
	float LastTimeReactingToPlayerAction; // 0x8
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FTigerThrallMissionReward {
	int32_t XpReward; // 0x0
	TArray<FTigerThrallMissionRewardItem> Rewards; // 0x8
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FTigerReadyToPlayState {
	TWeakObjectPtr<ATigerPlayerController> PlayerController; // 0x0
	bool bIsReadyToPlay; // 0x8
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FINTLFriendReqInfo {
	int32_t Type; // 0x0
	FString User; // 0x8
	FString Title; // 0x18
	FString Description; // 0x28
	FString ImagePath; // 0x38
	FString ThumbPath; // 0x48
	FString MediaPath; // 0x58
	FString Link; // 0x68
	FString ExtraJson; // 0x78
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
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

struct FTigerBpFindSessionResultList {
	TArray<FString> AlternativeStrings; // 0x18
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

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
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

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FTigerAIPlayerAction {
	ETigerAIPlayerAction Action; // 0x4
	ATigerCharacter* AffectedTarget; // 0x8
	FVector Location; // 0x10
	bool bUseCustomLocation; // 0x1c
	float HearingRangeSquared; // 0x20
	float VisionRangeSquared; // 0x24
	float MustReactRangeSquared; // 0x28
	float FearMultiplier; // 0x2c
	float MasqueradeMultiplier; // 0x30
	bool bProcessOnlyByAffectedTarget; // 0x34
	bool bMustBeProcessedByAffectedTarget; // 0x35
	bool bDontProcessForAffectedTarget; // 0x36
	bool bIgnoreInvisibility; // 0x37
	bool bShouldDistanceScaleFearValue; // 0x38
	bool bShouldDistanceScaleMasqueradePoints; // 0x39
};

struct FTigerPlayerActionProcessData {
	ATigerPlayer* TigerPlayer; // 0x0
	ATigerBaseNPC* NPC; // 0x8
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
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

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FTigerMetaStoreEntryItem {
	FTigerItemId ItemId; // 0x0
	uint32_t Quantity; // 0x8
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

struct FMutePush {
	FString PlayerId; // 0x0
	bool IsMuted; // 0x10
	char MutedReason; // 0x11
	FString MutedEndsAt; // 0x18
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

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FTigerRequest_CreateGameSession {
	FString GameSessionToken; // 0x0
	FString SESSIONTYPE; // 0x10
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FTigerTelemetryEventStore_Preview : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
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

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FTigerCharacterCustomizationTextureParameter {
	ETigerCharacterDynamicMeshType DynamicMeshType; // 0x0
	ETigerCharacterMeshPart Part; // 0x1
	FName Name; // 0x4
	UTexture* Texture; // 0x10
};

struct FTigerDisciplineLevelInfo {
	FText StatName; // 0x0
	TArray<float> StatChanges; // 0x18
	FText StatChangeSuffix; // 0x28
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FTigerWeeklyChallengePersistentProgress {
	TMap<FTigerChallengeInstanceID, FTigerChallengePersistentProgressEntry> Progress; // 0x0
	TArray<int32_t> LastRewardTrackIndices; // 0x50
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FTigerTelemetryEventCharacter_Customization : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	int32_t ArchetypeId; // 0x58
	int32_t CharacterId; // 0x5c
	FString OutfitId; // 0x60
	FString Accessories; // 0x70
	FString Body; // 0x80
	FString Hair; // 0x90
	FString Eye; // 0xa0
	FString MakeupID; // 0xb0
	FString TattooId; // 0xc0
	FString FacialHair; // 0xd0
	FString EmotesID; // 0xe0
	int32_t TotalTimeSpend; // 0xf0
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FTigerCustomizableAxisKeybindData {
	FText DISPLAYNAME; // 0x0
	FText OptionalReverseDisplayName; // 0x18
	bool DebugOnly; // 0x30
	bool AllowDebugOnConsoleShipping; // 0x31
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

struct FAkGeometrySurfacePropertiesToMap {
	TSoftObjectPtr<UAkAcousticTexture> AcousticTexture; // 0x0
	float OcclusionValue; // 0x28
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
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

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FTigerPingNotificationUIData {
	FText NotificationText; // 0x0
	FTigerPingIconData IconData; // 0x18
};

struct FTigerRequest_GetSharkmobAccountIds {
	uint32_t ChannelID; // 0x0
	TArray<FString> PlatformUserIds; // 0x8
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FTigerFireProjectileDataInterpolated : FTigerFireProjectileData {
	float LocationAlpha; // 0x14
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FTigerPingResponse {
	char PlayerGroupIndex; // 0x0
	bool bIsInterested; // 0x1
};

struct FTigerResponse_CategoryGroupDefinition {
	FString CategoryDefinitions; // 0x0
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FINTLWebViewResult : FINTLBaseResult {
	int32_t MsgType; // 0x40
	FString MsgJsonData; // 0x48
	float EmbedProgress; // 0x58
	FString EmbedUrl; // 0x60
};

struct FTigerPersistentPlayerCharacter {
	FTigerPersistentCharacterID UniqueCharacterID; // 0x0
	FTigerPersistentPlayerCharacterData Data; // 0x8
	int64_t LastUsedAt; // 0xa0
};

struct FTigerCurrentContextualHelp {
	UTigerContextualHelp* ContextualHelp; // 0x0
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
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

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FTigerTelemetryEventAcePlayerGameSummaryEvent2 : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	int32_t Duration; // 0xb0
	uint16_t rank; // 0xb4
	uint16_t NumberOfRangedShots; // 0xb6
	uint16_t NumberOfRangedHits; // 0xb8
	int32_t KillCount; // 0xbc
	uint16_t death_num; // 0xc0
	int32_t AssistCount; // 0xc4
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

struct FMovieSceneAkAudioEventTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAkAudioEventSection* Section; // 0x20
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FStatChangeDescription {
	FText StatName; // 0x0
	FString StatChange; // 0x18
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FAkPS5AdvancedInitializationSettings : FAkAdvancedInitializationSettingsWithMultiCoreRendering {
	bool UseHardwareCodecLowLatencyMode; // 0x30
	bool bVorbisHwAcceleration; // 0x31
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FRequest_StartMatchmaking {
	FString SESSIONTYPE; // 0x0
	FString DsVersion; // 0x10
	FString MATCHMAKINGTOKEN; // 0x20
	FString REGIONPINGS; // 0x30
	int32_t GROUPINGMODE; // 0x40
	FString GroupID; // 0x48
	uint32_t MatchRequestId; // 0x58
};

struct FMagicLeapARPinQuery {
	TSet<EMagicLeapARPinType> Types; // 0x0
	int32_t MaxResults; // 0x50
	FVector TargetPoint; // 0x54
	float Radius; // 0x60
	bool bSorted; // 0x64
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
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

struct FTigerResponse_IncrementPremiumCurrency : FTigerResponseEnvelope {
	uint64_t OldAmount; // 0x18
	uint64_t NewAmount; // 0x20
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FTigerBuildingSystemSideOverrides {
	UTigerBuildingWallPreset* GroundFloorPreset; // 0x0
	UTigerBuildingWallPreset* FloorPreset1; // 0x8
	UTigerBuildingWallPreset* FloorPreset2; // 0x10
	UTigerBuildingWallPreset* FloorPreset3; // 0x18
	UTigerBuildingWallPreset* FloorPreset4; // 0x20
	UTigerBuildingWallPreset* FloorPreset5; // 0x28
	UTigerBuildingWallPreset* FloorPreset6; // 0x30
	UTigerBuildingWallPreset* FloorPreset7; // 0x38
};

struct FINTLRegisterStatusResult : FINTLBaseResult {
	int32_t IsRegistered; // 0x40
	int32_t IsSetPassword; // 0x44
	int32_t IsReceiveEmail; // 0x48
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FTigerPlayerPostMatchScreenHighlightStat {
	int32_t MatchStatValue; // 0x0
	float SeasonAverage; // 0x4
	ETigerSeasonMatchStatType MatchStatType; // 0x8
	bool bIsNewSeasonBest; // 0x9
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FTigerRewardsCollection {
	TArray<FTigerRewardWithQuantity> InventoryRewards; // 0x0
	int32_t PremiumCurrency; // 0x10
	int32_t SeasonExp; // 0x14
	int32_t ArchetypeExp; // 0x18
	int32_t SeasonPlacementExpBoostPercentage; // 0x1c
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FTigerSplatmapSplatHistoryItem {
	UTexture* Textures[0x4]; // 0x0
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
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

struct FTigerCapSpawnData {
	UTigerNPCAsset* SpawnAsset; // 0x0
	FTransform SpawnTransform; // 0x10
};

struct FTigerBuildingSystemTransformableCorner {
	UPoseableMeshComponent* Component; // 0x0
	UStaticMeshComponent* StaticComponent; // 0x8
	FRotator MiddleBoneRotation; // 0x10
	FVector EndBoneLocation; // 0x1c
	FVector StartNormal; // 0x28
	FVector NextNormal; // 0x34
};

struct FTigerTelemetryEventServerLog : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString Country; // 0x10
	FString GameSvrId; // 0x20
	int32_t AreaId; // 0x30
	int32_t OnlineCountPC; // 0x34
	int32_t OnlineCountPS; // 0x38
	int32_t OnlineCountXbox; // 0x3c
	int32_t UserCount; // 0x40
	FString GameAppid; // 0x48
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FTigerProgressedChallengeWrapper {
	FText ChallengeDescription; // 0x0
	int32_t TargetValue; // 0x18
	int32_t PostSessionProgress; // 0x1c
	int32_t PreSessionProgress; // 0x20
	ETigerProgressedChallengeType ChallengeType; // 0x24
	FTigerChallengeTypeID ChallengeTypeID; // 0x28
	FTigerChallengeInstanceID ChallengeInstanceID; // 0x2c
};

struct FTigerJudgeTargetConsideration {
	ATigerPlayer* Player; // 0x0
	TArray<UTigerJudgeBaseAttackState*> ApplicableAttacks; // 0x8
	float DamageDoneSinceReset; // 0x18
	float DistanceToPlayer; // 0x1c
	float TargetValue; // 0x20
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FTigerCharacterOutfitHoodieVariation {
	bool bEnableHairAnimDynamics; // 0x0
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x8
	TMap<int32_t, TSoftObjectPtr<UMaterialInterface>> Materials; // 0x30
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x80
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FTigerWaveDataRow : FTableRowBase {
	float WaitTime; // 0x8
	float ClosingTime; // 0xc
	float DamageTickInterval; // 0x10
	float DamagePerTick; // 0x14
	float CoveragePercentage; // 0x18
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FTigerChallengeInstanceID {
	int32_t UID; // 0x0
};

struct FTigerCharacterPiercingSetCustomizationItem {
	UStaticMesh* Mesh; // 0x0
	FName FaceSlot; // 0x8
};

struct FTigerMatchSettingsVariationElectedConfig {
	float GasSpeedFactor; // 0x0
	bool GasSpeedFactorElected; // 0x4
	int32_t CivilianResonance; // 0x8
	bool CivilianResonanceElected; // 0xc
	float SwapLootTableElected; // 0x10
	bool DisableEntityElected; // 0x14
	int32_t StartingResonance; // 0x18
	bool StartingResonanceElected; // 0x1c
	float BloodhuntedTimeSeconds; // 0x20
	bool BloodhuntedTimeSecondsElected; // 0x24
	bool AllHighTierLootActiveElected; // 0x25
	bool BrokenMasqueradeAtStartElected; // 0x26
};

struct FTigerElysiumNpcAnimationData {
	UAnimSequenceBase* AnimationToPlay; // 0x0
	float AnimationOffset; // 0x8
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FTigerTelemetryMenuToTimeMapping {
	TMap<FString, int32_t> MenuToTimeMapping; // 0x0
};

struct FTigerMetaStoreEntry {
	uint64_t StoreEntryID; // 0x0
	uint32_t PremiumPrice; // 0x8
	FString ImagePath; // 0x10
	uint32_t Discount; // 0x20
	FDateTime StartDate; // 0x28
	FDateTime EndDate; // 0x30
	int32_t FlashStoreSlot; // 0x38
	TArray<FTigerMetaStoreEntryItem> Items; // 0x40
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
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

struct FTigerRequest_UpdateCharacter {
	FTigerPersistentPlayerCharacterData CharacterData; // 0x0
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FAkMidiEventBase {
	EAkMidiEventType Type; // 0x0
	char Chan; // 0x1
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FTigerChallengeCollectionEntry {
	FTigerChallengeTypeID ChallengeTypeID; // 0x0
	UTigerChallenge* ReferenceChallenge; // 0x8
	ETigerChallengeCategory ChallengeCategory; // 0x10
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FTigerPlayingEmote {
	UAnimMontage* Montage; // 0x0
	float StartTime; // 0x8
	bool StopsMovement; // 0xc
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FTigerGrimoireEntryRow : FTableRowBase {
	UTigerGrimoireEntry* Entry; // 0x10
	TArray<FTigerGrimoireSubEntry> SubEntries; // 0x18
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FTigerDamageImmunitySelector {
	UDamageType* DamageType; // 0x0
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FTigerSubLevelBackground {
	FSoftObjectPath SubLevel; // 0x0
	FText UiName; // 0x18
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

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FINTLLocalNotificationIOS {
	int32_t RepeatType; // 0x0
	int32_t FireTime; // 0x4
	int32_t Badge; // 0x8
	FString AlertBody; // 0x10
	FString AlertAction; // 0x20
	TMap<FString, FString> UserInfo; // 0x30
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FTigerScouterCharacterData {
	TArray<FTigerScoutedCharacter> ScoutedCharacters; // 0x0
	TArray<FTigerScoutedCharacter> GroupScoutedCharacters; // 0x10
	UUserWidget* ScoutedPlayerMapMarkerClass; // 0x20
	UUserWidget* ScoutedNpcMapMarkerClass; // 0x28
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FTigerTelemetryEventAcePlayerDieEvent : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString BattleID; // 0x10
	int32_t MapID; // 0x20
	int32_t GameplayMode; // 0x24
	int32_t RankMode; // 0x28
	uint32_t game_id_; // 0x2c
	int32_t PlatID; // 0x30
	FString GameSvrId; // 0x38
	int32_t AreaId; // 0x48
	int64_t ZoneId; // 0x50
	uint32_t channel_id; // 0x58
	FString Uin; // 0x60
	uint16_t account_type_; // 0x70
	int32_t NumPlayers; // 0x74
	int64_t role_id_; // 0x78
	char rolename_len; // 0x80
	FString rolename; // 0x88
	int32_t Level; // 0x98
	FString team_id; // 0xa0
	FString victim_player_position; // 0xb0
	int64_t victim_weapon_id; // 0xc0
	uint32_t victim_weapon_type; // 0xc8
	uint32_t victim_blood_left; // 0xcc
	FString attacker_Uin; // 0xd0
	uint16_t attacker_account_type_; // 0xe0
	FString attacker_player_position; // 0xe8
	int64_t attacker_weapon_id; // 0xf8
	uint32_t attacker_weapon_type; // 0x100
	uint32_t attacker_blood_left; // 0x104
	char hit_part; // 0x108
	int64_t die_reason; // 0x110
	int64_t death_type; // 0x118
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
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

struct FPlane : FVector {
	float W; // 0xc
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

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FTigerBotNameData : FTableRowBase {
	FText BotNames; // 0x8
};

struct FTigerRequest_InvitePlayer {
	FString GuestPlayerId; // 0x0
	FString GameSessionToken; // 0x10
	FString LanSessionUrl; // 0x20
	FString UserData; // 0x30
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
};

struct FTigerOwnedConsumable {
	UTigerConsumableAsset* ConsumableAsset; // 0x0
	int32_t Count; // 0x8
};

struct FAkXboxOneApuHeapInitializationSettings {
	uint32_t CachedSize; // 0x0
	uint32_t NonCachedSize; // 0x4
};

struct FBloodHuntMarker {
	UTigerCompassMarkerWidget* CompassMarker; // 0x0
	UTigerMapMarkerProxy* MapMarkerProxy; // 0x8
};

struct FTigerPlayerSavedLocation {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FTigerNewNotificationNodeEntry {
	char EnumMenuOption; // 0x0
	TArray<FString> Ids; // 0x8
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
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

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FTigerMeshCollection {
	TSoftObjectPtr<USkeletalMesh> HeadMesh; // 0x0
	TSoftObjectPtr<USkeletalMesh> HairMesh; // 0x28
	TSoftObjectPtr<UTigerColorSetAsset> ColorSetAsset; // 0x50
	TSoftObjectPtr<UTigerLinearColorSetAsset> HairColorSetAsset; // 0x78
	TSoftObjectPtr<UTigerNPCVisualAsset> VisualAsset; // 0xa0
	TSoftObjectPtr<UTigerNpcPropAsset> PropAsset; // 0xc8
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

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FTigerStreamingPlayer {
	APlayerController* PlayerController; // 0x0
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FTigerTelemetryEventStore_ItemPreview : FSharkTelemetryEventBase {
	FSharkTelemetryDateTime dtEventTime; // 0x8
	FString GameSvrId; // 0x10
	int32_t AreaId; // 0x20
	int32_t PlatID; // 0x24
	FString GameAppid; // 0x28
	FString Uin; // 0x38
	FString ClientVersion; // 0x48
	FString ItemId; // 0x58
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FTigerThrallAbilityTableRow : FTableRowBase {
	ETigerThrallAbilityId AbilityId; // 0x8
	UTexture2D* AbilityIcon; // 0x10
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FTigerTelemetryIDExportFilter {
	UObject* FilterClass; // 0x0
};

struct FTigerSightConfigProperties {
	float SightRadius; // 0x0
	float LoseSightRadius; // 0x4
	float PeripheralVisionAngleDegrees; // 0x8
	float CloseSightRadius; // 0xc
	float CloseLoseSightRadius; // 0x10
	float ClosePeripheralVisionAngleDegrees; // 0x14
	float HeightDifference; // 0x18
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
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

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
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

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FTigerRequest_IncrementPremiumCurrency {
	uint64_t Amount; // 0x0
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
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

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FMovieSceneFloatChannelSerializationHelper {
	ERichCurveExtrapolation PreInfinityExtrap; // 0x0
	ERichCurveExtrapolation PostInfinityExtrap; // 0x1
	TArray<int32_t> Times; // 0x8
	TArray<FMovieSceneFloatValueSerializationHelper> Values; // 0x18
	float DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x2c
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FSharkAccountActionResult {
	bool Success; // 0x0
	FString InternalErrorMessage; // 0x8
	FString InternalThirdPartyErrorMessage; // 0x18
	int32_t ErrorCode; // 0x28
	int32_t ThirdPartyErrorCode; // 0x2c
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
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

struct FTigerCharacterAppearance {
	FTigerPersistentOutfitSetup PersistentAppearance; // 0x0
	int32_t HeadId; // 0x30
	int32_t SkinColorIndex; // 0x34
	int32_t HairId; // 0x38
	int32_t HairColorId; // 0x3c
	int32_t EyeColorId; // 0x40
	int32_t TattooId; // 0x44
	int32_t FacePaintId; // 0x48
	int32_t HeadgearId; // 0x4c
	int32_t EyewearId; // 0x50
	int32_t PiercingSetId; // 0x54
	int32_t EyebrowShapeId; // 0x58
	int32_t EyebrowColorId; // 0x5c
	int32_t BeardId; // 0x60
	int32_t BeardColorId; // 0x64
	ETigerGender BodyType; // 0x68
	TArray<int32_t> EmoteIds; // 0x70
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

struct FTigerHandIkWallTraceData {
	FTigerHandIkData RightHandIkData; // 0x0
	FTigerHandIkData LeftHandIkData; // 0x28
	ETraceTypeQuery InTraceChannel; // 0x50
	float TraceLength; // 0x54
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

