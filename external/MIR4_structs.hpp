// Created by BlueFire1337
// Updated 2022-01-10
// Generated 2022-01-23

#pragma once

struct FSynthKnobStyle : FSlateWidgetStyle {
	FSlateBrush LargeKnob; // 0x8
	FSlateBrush LargeKnobOverlay; // 0x90
	FSlateBrush MediumKnob; // 0x118
	FSlateBrush MediumKnobOverlay; // 0x1a0
	float MinValueAngle; // 0x228
	float MaxValueAngle; // 0x22c
	ESynthKnobSize KnobSize; // 0x230
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
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

struct FItemXDRACOSealingTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ID; // 0xc
	int32_t MainType; // 0x10
	int32_t SubType; // 0x14
	int32_t ItemGrade; // 0x18
	int32_t NeedCost01Id; // 0x1c
	int32_t NeedCost01Count; // 0x20
	int32_t NeedCost02Id; // 0x24
	int32_t NeedCost02Count; // 0x28
	int32_t NeedCost03Id; // 0x2c
	int32_t NeedCost03Count; // 0x30
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FSecretDungeonTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t SDgnGroupID; // 0xc
	int32_t SDgnStep; // 0x10
	int32_t StageId; // 0x14
	int32_t SDgnLocationID; // 0x18
	int32_t SDgnIconID; // 0x1c
	int32_t SDgnNameSID; // 0x20
	int32_t SDgnShortDescSID; // 0x24
	int32_t SDgnDescSID; // 0x28
	int32_t SDgnPCPower; // 0x2c
	int32_t NeedEnterType; // 0x30
	int32_t NeedEnterTypeSub; // 0x34
	int32_t NeedEnterCount; // 0x38
	int32_t SDgnTimer; // 0x3c
	int32_t SDgnHelperTitle; // 0x40
	int32_t SDgnHelperDesc; // 0x44
	TArray<int32_t> SDgnEnterTime; // 0x48
	TArray<int32_t> MonsterLevel; // 0x58
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
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

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FItemTemplate : FTableRowBase {
	int32_t ItemId; // 0x8
	int32_t NameSId; // 0xc
	int32_t NoteSid; // 0x10
	TArray<int32_t> MeshID; // 0x18
	int32_t icon; // 0x28
	int32_t Level; // 0x2c
	int32_t MainType; // 0x30
	int32_t SubType; // 0x34
	int32_t SmeltingType; // 0x38
	int32_t SortOrder; // 0x3c
	int32_t ClassID; // 0x40
	int32_t ReqClassLevel; // 0x44
	int32_t Tier; // 0x48
	int32_t Grade; // 0x4c
	int32_t PET_Origin; // 0x50
	int32_t SellType; // 0x54
	int32_t SellPrice; // 0x58
	int32_t Stackable; // 0x5c
	int32_t Attribute1Type; // 0x60
	int32_t Attribute1Value; // 0x64
	int32_t Attribute2Type; // 0x68
	int32_t Attribute2Value; // 0x6c
	int32_t Attribute3Type; // 0x70
	int32_t Attribute3Value; // 0x74
	int32_t Attribute4Type; // 0x78
	int32_t Attribute4Value; // 0x7c
	int32_t Attribute5Type; // 0x80
	int32_t Attribute5Value; // 0x84
	int32_t PassiveId01; // 0x88
	int64_t Cooltime; // 0x90
	TArray<int32_t> BuffId; // 0x98
	int32_t RandomOptionCountMax; // 0xa8
	int32_t RandomOptionGroupId; // 0xac
	int32_t SetGroupId; // 0xb0
	int32_t SmeltingMaxCount; // 0xb4
	int32_t JewelUpgradeType; // 0xb8
	int32_t JewelUpgradeCount; // 0xbc
	int32_t RandomGetInfoId; // 0xc0
	int32_t GetWayId; // 0xc4
	int32_t OverlapEquipAble; // 0xc8
	int32_t UnsealingType; // 0xcc
	int32_t OpenboxRewardType; // 0xd0
	int32_t OpenboxRewardId; // 0xd4
	int32_t RandomGetCnt; // 0xd8
	int32_t Durability; // 0xdc
	int32_t Durability_RepairAble; // 0xe0
	int32_t TradeType; // 0xe4
	int32_t UseTimeType; // 0xe8
	int32_t UseId; // 0xec
	FString UseEndType_Period; // 0xf0
	FString UseEndType_Minute; // 0x100
	int32_t Lockable; // 0x110
	int32_t XDracoDelayMinute; // 0x114
	int32_t GachaTap; // 0x118
	int32_t TranceGroup; // 0x11c
	int32_t EquipGroup; // 0x120
	FString ItemCasting; // 0x128
	int32_t CollectAniType; // 0x138
};

struct FUIParticleProperty {
	EUIParticlePropertyType Type; // 0x0
	float FloatValue; // 0x4
	FRange_Float FloatRangeValue; // 0x8
	FUIParticleFloatCurve FloatCurveValue; // 0x10
	FRange_FloatCurve FloatCurveRangeValue; // 0x98
	FVector2D Vector2DValue; // 0x1a8
	FRange_Vector2D Vector2DRangeValue; // 0x1b0
	FUIParticleLinearColorCurve LinearColorCurveValue; // 0x1c8
	FRange_LinearColorCurve LinearColorCurveRangeValue; // 0x3d0
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
};

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FUserEventGoalTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t eventId; // 0xc
	int32_t GoalCompleteStep; // 0x10
	int32_t GoalCompleteValue; // 0x14
	int32_t Reward1Type; // 0x18
	int32_t Reward1Id; // 0x1c
	int32_t Reward1Count; // 0x20
	int32_t Reward2Type; // 0x24
	int32_t Reward2Id; // 0x28
	int32_t Reward2Count; // 0x2c
	int32_t Reward3Type; // 0x30
	int32_t Reward3Id; // 0x34
	int32_t Reward3Count; // 0x38
	int32_t RetryGoalCostId; // 0x3c
	int32_t RetryGoalCostValue; // 0x40
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe0
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FSmeltEffectTemplate : FTableRowBase {
	int32_t SmeltingEffectType; // 0x8
	int32_t SmeltingCount01; // 0xc
	int32_t EffectId01; // 0x10
	int32_t SmeltingCount02; // 0x14
	int32_t EffectId02; // 0x18
	int32_t SmeltingCount03; // 0x1c
	int32_t EffectId03; // 0x20
	int32_t SmeltingCount04; // 0x24
	int32_t EffectId04; // 0x28
	int32_t SmeltingCount05; // 0x2c
	int32_t EffectId05; // 0x30
	int32_t SmeltingCount06; // 0x34
	int32_t EffectId06; // 0x38
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FOneStoreIapPurchaseData {
	FString OrderId; // 0x0
	FString PackageName; // 0x10
	FString ProductId; // 0x20
	FString PurchaseTime; // 0x30
	FString AcknowlegeState; // 0x40
	FString DeveloperPayload; // 0x50
	FString PurchaseId; // 0x60
	FString PurchaseToken; // 0x70
	FString BillingKey; // 0x80
	FString OriginalPurchaseData; // 0x90
	FString SignatureData; // 0xa0
};

struct FNicknameTemplate : FTableRowBase {
	int32_t ID; // 0x8
	FString NameA; // 0x10
	FString NameB; // 0x20
	FString NameA_W; // 0x30
	FString NameB_W; // 0x40
};

struct FCharacterMasteryTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t ClassID; // 0xc
	int32_t SlotNumber; // 0x10
	int32_t MasteryCount; // 0x14
	int32_t MasteryItemUseId1; // 0x18
	int32_t MasteryItemUseId1Count; // 0x1c
	int32_t MasteryItemUseId2; // 0x20
	int32_t MasteryItemUseId2Count; // 0x24
	int32_t MasteryItemUseId3; // 0x28
	int32_t MasteryItemUseId3Count; // 0x2c
	int32_t MasteryItemUseId4; // 0x30
	int32_t MasteryItemUseId4Count; // 0x34
	int32_t MasteryCostValueType; // 0x38
	int32_t MasteryCostValue; // 0x3c
	int32_t MasterySuccessProbability; // 0x40
	int32_t Status1Type; // 0x44
	int32_t Status1Value; // 0x48
	int32_t Status2Type; // 0x4c
	int32_t Status2Value; // 0x50
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
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

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
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

struct FSteamProfile {
	FString ID; // 0x0
	FString email; // 0x10
	FString FullName; // 0x20
	FString GivenName; // 0x30
	FString FamilyName; // 0x40
	FString ProfileURL; // 0x50
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

struct FPhotoMode_ValueRange {
	float MinValue; // 0x0
	float MaxValue; // 0x4
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x48
	int32_t NumChannelsUsed; // 0x2c8
	EMovieSceneBlendType BlendType; // 0x2cc
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
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

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
};

struct FVector_NetQuantize : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FGuildExpeditionTemplate : FRewardCommonTemplate {
	int32_t ExpdId; // 0x98
	int32_t ExpdNameId; // 0x9c
	bool IsShow; // 0xa0
	int32_t ExpdType; // 0xa4
	int32_t ExpdUnlockDevId; // 0xa8
	int32_t ExpdUnlockDevLevel; // 0xac
	int32_t ExpdBackground; // 0xb0
	int32_t MainBackGroundImg; // 0xb4
	int32_t ReqCombatPoint; // 0xb8
	int32_t PCNum; // 0xbc
	TArray<int32_t> MonsterId; // 0xc0
	int32_t StageId; // 0xd0
	int32_t WarpLocation; // 0xd4
	int32_t ExpireTime; // 0xd8
	int32_t GuildClearRewardType1; // 0xdc
	int32_t GuildClearRewardTypeSub1; // 0xe0
	int32_t GuildClearRewardValue1; // 0xe4
	int32_t GuildClearRewardType2; // 0xe8
	int32_t GuildClearRewardTypeSub2; // 0xec
	int32_t GuildClearRewardValue2; // 0xf0
	int32_t GuildClearRewardType3; // 0xf4
	int32_t GuildClearRewardTypeSub3; // 0xf8
	int32_t GuildClearRewardValue3; // 0xfc
	int32_t GuildMemberClearGiftId; // 0x100
	int32_t ContributeGroup; // 0x104
	int32_t PortraitID; // 0x108
	TArray<int32_t> ClassItemview01; // 0x110
	TArray<int32_t> ClassItemview02; // 0x120
	TArray<int32_t> ClassItemview03; // 0x130
	TArray<int32_t> ClassItemview04; // 0x140
	TArray<int32_t> ClassItemview05; // 0x150
	int32_t Stage_Story; // 0x160
	TArray<int32_t> ContentsOpen; // 0x168
	int32_t ContentsInterval; // 0x178
	int32_t ContentsCreateDay; // 0x17c
	int32_t ContentsCreateTime; // 0x180
	int32_t ContentsCreateDuration; // 0x184
	int32_t GenCostType1; // 0x188
	int32_t GenCostTypeSub1; // 0x18c
	int32_t GenCostValue1; // 0x190
	int32_t GenCostType2; // 0x194
	int32_t GenCostTypeSub2; // 0x198
	int32_t GenCostValue2; // 0x19c
	int32_t GenCostType3; // 0x1a0
	int32_t GenCostTypeSub3; // 0x1a4
	int32_t GenCostValue3; // 0x1a8
	int32_t GenCostTypeAdd; // 0x1ac
	int32_t GenCostTypeSubAdd; // 0x1b0
	int32_t GenCostValueAdd; // 0x1b4
	int32_t ContributeRewardCnt; // 0x1b8
	int32_t AddContributeRewardCnt; // 0x1bc
	int32_t MinLevel; // 0x1c0
	int32_t MaxLevel; // 0x1c4
	TArray<int32_t> MonThumbnail; // 0x1c8
	int32_t GuildChallangeReward01; // 0x1d8
	int32_t GuildChallangeReward02; // 0x1dc
	int32_t GuildChallangeReward03; // 0x1e0
	int32_t GuildChallangeReward04; // 0x1e4
	int32_t GuildChallangeReward05; // 0x1e8
};

struct FColorMaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	float CrushedBits; // 0x4
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FBroadcastTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t BrocastId; // 0xc
	int32_t ContentId; // 0x10
	int32_t MainType; // 0x14
	int32_t SubType; // 0x18
	int32_t Grade; // 0x1c
	int32_t SmeltStep; // 0x20
	int32_t ChatShareOnOff; // 0x24
	int32_t ChatShareGrade; // 0x28
};

struct FRankingSeasonRewardTemplate : FTableRowBase {
	int32_t SeasonRewardId; // 0x8
	int32_t CategoryID; // 0xc
	int32_t RankNumber; // 0x10
	int32_t RankType; // 0x14
	int32_t SeasonRewardType1; // 0x18
	int32_t SeasonRewardId1; // 0x1c
	int32_t SeasonRewardValue1; // 0x20
	int32_t SeasonRewardType2; // 0x24
	int32_t SeasonRewardId2; // 0x28
	int32_t SeasonRewardValue2; // 0x2c
	int32_t SeasonRewardType3; // 0x30
	int32_t SeasonRewardId3; // 0x34
	int32_t SeasonRewardValue3; // 0x38
	int32_t SeasonRewardType4; // 0x3c
	int32_t SeasonRewardId4; // 0x40
	int32_t SeasonRewardValue4; // 0x44
};

struct FServerChangeCostTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t ChangeCondtionType; // 0xc
	int32_t MinLevel; // 0x10
	int32_t MaxLevel; // 0x14
	int32_t ServerChangeCostType; // 0x18
	int32_t NeedMoneyType; // 0x1c
	int32_t NeedMoneyValue; // 0x20
	int32_t NeedItemUseId; // 0x24
	int32_t NeedItemCount; // 0x28
};

struct FSoundTemplate : FTableRowBase {
	int32_t SoundId; // 0x8
	int32_t SoundType; // 0xc
	FString Filename; // 0x10
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FStatusCalculateTemplate : FTableRowBase {
	int32_t StatusId; // 0x8
	FString StatusCode; // 0x10
	int32_t CalculateType; // 0x20
	int32_t ColletStatus1; // 0x24
	int32_t ColletStatus2; // 0x28
	int32_t STDStatus; // 0x2c
	int32_t ResultMIN; // 0x30
	int32_t ResultMAX; // 0x34
	int32_t LimitValue1; // 0x38
	int32_t Value1; // 0x3c
	int32_t LimitValue2; // 0x40
	int32_t Value2; // 0x44
	int32_t LimitValue3; // 0x48
	int32_t Value3; // 0x4c
	int32_t LimitValue4; // 0x50
	int32_t Value4; // 0x54
};

struct FClassTemplate : FTableRowBase {
	int32_t ClassID; // 0x8
	int32_t IsCreate; // 0xc
	int32_t InitMaxLevel; // 0x10
	int32_t MaxLevel; // 0x14
	EGenderType Gender; // 0x18
	TArray<int32_t> ProfileImage; // 0x20
	int32_t icon; // 0x30
	int32_t IconSmall; // 0x34
	int32_t GuildWarIcon; // 0x38
	int32_t GuildWarEnemyIcon; // 0x3c
	int32_t WarFriendIcon; // 0x40
	int32_t WarPartyIcon; // 0x44
	int32_t WarNeutralityIcon; // 0x48
	int32_t WarOther; // 0x4c
	int32_t WarEnemyIcon; // 0x50
	int32_t PhysicalAttack; // 0x54
	int32_t MagicAttack; // 0x58
	int32_t Physicaldefense; // 0x5c
	int32_t Magicdefense; // 0x60
	int32_t ReducePhysicalDef; // 0x64
	int32_t ReduceMagicDef; // 0x68
	int32_t MaxHP; // 0x6c
	int32_t HPRecovery; // 0x70
	int32_t MaxHPPerRecovery; // 0x74
	int32_t MaxMana; // 0x78
	int32_t RegenerationMana; // 0x7c
	int32_t MaxMPPerRecovery; // 0x80
	int32_t MaxVigor; // 0x84
	int32_t RegenerationVigor; // 0x88
	int32_t MaxRage; // 0x8c
	int32_t MaxRagePerRecovery; // 0x90
	int32_t MaxRagePerConsume; // 0x94
	int32_t Accuracy; // 0x98
	int32_t Dodge; // 0x9c
	int32_t Critical; // 0xa0
	int32_t AvoidCritical; // 0xa4
	int32_t CriticalOutcome; // 0xa8
	int32_t DefCriticalOutcome; // 0xac
	int32_t Luck; // 0xb0
	int32_t Firedefense; // 0xb4
	int32_t Frozendefense; // 0xb8
	int32_t Lightningdefense; // 0xbc
	int32_t Poisondefense; // 0xc0
	int32_t Holydefense; // 0xc4
	int32_t Darkdefense; // 0xc8
	int32_t MoveSpeed; // 0xcc
	int32_t HitConGrade; // 0xd0
	int32_t StateConGrade; // 0xd4
	int32_t MoveConGrade; // 0xd8
	int32_t WalkSpeed; // 0xdc
	int32_t RunSpeed; // 0xe0
	int32_t BattleRunSpeed; // 0xe4
	int32_t FastRunSpeed; // 0xe8
	int32_t RideSpeed; // 0xec
	int32_t FastRideSpeed; // 0xf0
	int32_t RollSpeed; // 0xf4
	int32_t InitAttack; // 0xf8
	int32_t RollSkill; // 0xfc
	int32_t BackRollSkill; // 0x100
	int32_t AtkBuffSkill; // 0x104
	int32_t StateID; // 0x108
	int32_t MontageGroup; // 0x10c
	int32_t Portrait; // 0x110
	int32_t ToolFishing; // 0x114
	int32_t ToolMining; // 0x118
	int32_t EnablePKRadius; // 0x11c
	int32_t PKStartAttackId; // 0x120
	int32_t PKStartSkipTime; // 0x124
	int32_t WarpAnimationSec; // 0x128
	int32_t AirGroupID; // 0x12c
	int32_t BattleTime; // 0x130
	TArray<int32_t> MainStatusList; // 0x138
	int32_t DefaultSkeleton; // 0x148
	int32_t DefaultClothes; // 0x14c
	FString PCAutoBehavior; // 0x150
	int32_t GuildBattleClothes; // 0x160
	int32_t GuildCharacterImageId; // 0x164
	int32_t SkillUseCountOpen; // 0x168
	int32_t GuildWarCostum; // 0x16c
	int32_t ServerVisitLifeCount; // 0x170
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
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

struct FDungeonTicketChargeTemplate : FTableRowBase {
	int32_t ChargeId; // 0x8
	int32_t ChargeGroup; // 0xc
	int32_t ChargeCountMin; // 0x10
	int32_t CostType; // 0x14
	int32_t CostValue; // 0x18
};

struct FGachaListTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ListGroupId; // 0xc
	TArray<int32_t> ItemId; // 0x10
	int32_t Value; // 0x20
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
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

struct FStringTemplate : FTableRowBase {
	int32_t StringID; // 0x8
	FString TextKr; // 0x10
	FString CHT; // 0x20
	FString CHS; // 0x30
	FString JPN; // 0x40
	FString ENG; // 0x50
	FString THA; // 0x60
	FString IND; // 0x70
	FString VIE; // 0x80
	FString GER; // 0x90
	FString SPA; // 0xa0
	FString POR; // 0xb0
	FString RUS; // 0xc0
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FClosedTrainingLevelTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t UniqueId; // 0xc
	int32_t TrainingStatusId; // 0x10
	int32_t TrainingLevel; // 0x14
	int32_t AttributeType; // 0x18
	int32_t AttributeValue; // 0x1c
	int32_t Training_NeedCostId; // 0x20
	int32_t Training_NeedCostCount; // 0x24
	int32_t Training_NeedUse01Id; // 0x28
	int32_t Training_NeedItem01Count; // 0x2c
	int32_t Training_NeedUse02Id; // 0x30
	int32_t Training_NeedItem02Count; // 0x34
	int32_t Training_Success; // 0x38
	int32_t Training_Fail; // 0x3c
	int32_t Training_CriticalFail; // 0x40
	int32_t Slot_Bg_Grade; // 0x44
};

struct FPoolActor {
	AActor* pPoolActor; // 0x0
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
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
	int32_t RayTracingAOSamplesPerPixel; // 0x424
	FLinearColor IndirectLightingColor; // 0x428
	float IndirectLightingIntensity; // 0x438
	ERayTracingGlobalIlluminationType RayTracingGIType; // 0x43c
	int32_t RayTracingGIMaxBounces; // 0x440
	int32_t RayTracingGISamplesPerPixel; // 0x444
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
	int32_t MotionBlurTargetFPS; // 0x494
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
	int32_t RayTracingReflectionsMaxBounces; // 0x4e4
	int32_t RayTracingReflectionsSamplesPerPixel; // 0x4e8
	EReflectedAndRefractedRayTracedShadows RayTracingReflectionsShadows; // 0x4ec
	char RayTracingReflectionsTranslucency : 1; // 0x4ed
	ETranslucencyType TranslucencyType; // 0x4ee
	float RayTracingTranslucencyMaxRoughness; // 0x4f0
	int32_t RayTracingTranslucencyRefractionRays; // 0x4f4
	int32_t RayTracingTranslucencySamplesPerPixel; // 0x4f8
	EReflectedAndRefractedRayTracedShadows RayTracingTranslucencyShadows; // 0x4fc
	char RayTracingTranslucencyRefraction : 1; // 0x4fd
	int32_t PathTracingMaxBounces; // 0x500
	int32_t PathTracingSamplesPerPixel; // 0x504
	float LPVFadeRange; // 0x508
	float LPVDirectionalOcclusionFadeRange; // 0x50c
	float ScreenPercentage; // 0x510
	FWeightedBlendables WeightedBlendables; // 0x518
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
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

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FUserProfile {
	FString display_name; // 0x0
	FString photo_url; // 0x10
};

struct FCharacterMasteryLevelLimitTemplate : FTableRowBase {
	int32_t ClassID; // 0x8
	int32_t StepGrade; // 0xc
	int32_t MaxLv; // 0x10
	int32_t CapMaterialUseId1; // 0x14
	int32_t CapMaterialUseId1Count; // 0x18
	int32_t CapMaterialUseId2; // 0x1c
	int32_t CapMaterialUseId2Count; // 0x20
	int32_t CapMaterialUseId3; // 0x24
	int32_t CapMaterialUseId3Count; // 0x28
	int32_t CapMaterialUseId4; // 0x2c
	int32_t CapMaterialUseId4Count; // 0x30
	int32_t CapStepCostType; // 0x34
	int32_t CapStepCost; // 0x38
	int32_t CapStepStatus1; // 0x3c
	int32_t CapStepStatus1Value; // 0x40
	int32_t CapStepStatus2; // 0x44
	int32_t CapStepStatus2Value; // 0x48
	int32_t CapStepStatus3; // 0x4c
	int32_t CapStepStatus3Value; // 0x50
	int32_t CapStepStatus4; // 0x54
	int32_t CapStepStatus4Value; // 0x58
	int32_t CapStepStatus5; // 0x5c
	int32_t CapStepStatus5Value; // 0x60
	int32_t CapStepStatus6; // 0x64
	int32_t CapStepStatus6Value; // 0x68
	int32_t CapStepStatus7; // 0x6c
	int32_t CapStepStatus7Value; // 0x70
	int32_t CapStepStatus8; // 0x74
	int32_t CapStepStatus8Value; // 0x78
	int32_t CapNeedLevel; // 0x7c
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FPetTemplate : FTableRowBase {
	int32_t PetId; // 0x8
	int32_t Tier; // 0xc
	int32_t Origin; // 0x10
	int32_t IconID; // 0x14
	int32_t GachaIconId; // 0x18
	int32_t PETBuffIconId; // 0x1c
	int32_t NameId; // 0x20
	int32_t TagNameId; // 0x24
	int32_t IngameMeshId; // 0x28
	int32_t OutgameMeshId; // 0x2c
	int32_t InGameAnimResourceId; // 0x30
	int32_t OutGameAnimResourceId; // 0x34
	int32_t UnlockNeedItemUseId; // 0x38
	int32_t Global_Attribute1Type; // 0x3c
	int32_t Global_Attribute1Value; // 0x40
	int32_t Global_Attribute2Type; // 0x44
	int32_t Global_Attribute2Value; // 0x48
	int32_t SkillId01; // 0x4c
	int32_t SkillId02; // 0x50
	int32_t SkillId03; // 0x54
	int32_t SkillId04; // 0x58
	TArray<int32_t> SpeechTxtUi; // 0x60
	TArray<int32_t> SpeechTxtEquip; // 0x70
	TArray<int32_t> SpeechTxtDie; // 0x80
};

struct FRankingSchedulerTemplate : FTableRowBase {
	int32_t SchedulerID; // 0x8
	int32_t CategoryID; // 0xc
	FString SeasonStartDay; // 0x10
	FString SeasonEndDay; // 0x20
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FSkillStateTemplate : FTableRowBase {
	int32_t StateID; // 0x8
	int32_t NameId; // 0xc
	int32_t NameIconID; // 0x10
	int32_t StateGroup; // 0x14
	int32_t ControlGrade; // 0x18
	int32_t ActionGrade; // 0x1c
};

struct FAnalyticsParam {
	FString Name; // 0x0
	UFirebaseVariant* Value; // 0x10
};

struct FQuestListTemplate : FTableRowBase {
	FString QuestFileName; // 0x8
};

struct FClassCreateTemplate : FTableRowBase {
	int32_t ClassID; // 0x8
	int32_t ClassNameID; // 0xc
	int32_t icon; // 0x10
	int32_t SubIcon; // 0x14
	int32_t ClassDesc; // 0x18
	int32_t ClassScenario; // 0x1c
	TArray<int32_t> HQ_Weapon_Mesh; // 0x20
	int32_t HQ_Armor_Mesh; // 0x30
	TArray<int32_t> Init_Weapon_Mesh; // 0x38
	int32_t InitBasicMesh; // 0x48
	int32_t Init_Armor_Mesh; // 0x4c
	int32_t UpStyleHairMesh; // 0x50
	int32_t InitWeapon; // 0x54
	int32_t InitArmor_Top; // 0x58
	int32_t InitArmor_Pants; // 0x5c
	int32_t InitCostume; // 0x60
	int32_t InitSkill01; // 0x64
	int32_t InitSkill02; // 0x68
	int32_t InitSkill03; // 0x6c
	int32_t InitSkill04; // 0x70
	int32_t InitSkill05; // 0x74
	int32_t InitSkill06; // 0x78
	int32_t InitStageId; // 0x7c
	TArray<int32_t> InitPosition; // 0x80
	TArray<int32_t> DemoCostume; // 0x90
	TArray<int32_t> DemoWeapon; // 0xa0
	TArray<int32_t> PaletteHair; // 0xb0
	TArray<int32_t> PaletteClothes; // 0xc0
	int32_t QuestStartId; // 0xd0
	int32_t InitVehicle; // 0xd4
	int32_t CreateFaceIcon; // 0xd8
	int32_t ClassMovieID; // 0xdc
	int32_t AnimBP; // 0xe0
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
};

struct FDungeonShopTemplate : FTableRowBase {
	int32_t DGShopId; // 0x8
	int32_t DGShopGroup; // 0xc
	int32_t DGShopGroupName; // 0x10
	int32_t DGShopNo; // 0x14
	int32_t DGShopItemId; // 0x18
	int32_t DGShopItemCnt; // 0x1c
	int32_t DGShopItemBuyCostType; // 0x20
	int32_t DGShopItemBuyCostTypeSub; // 0x24
	int32_t DGShopItemBuyCostValue; // 0x28
};

struct FWeaponMaterialData {
	EWeaponMaterialParameterType m_eParameterType; // 0x0
	FName m_strName; // 0x4
	UCurveBase* m_pCurve; // 0x10
};

struct FTradeItemType {
	int32_t MainType; // 0x0
	TArray<int32_t> SubType; // 0x8
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FPooledCameraShakes {
	TArray<UCameraShake*> PooledShakes; // 0x0
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FSystemDataTemplate : FTableRowBase {
	int32_t Index; // 0x8
	int32_t GuildCreationMembers; // 0xc
	int32_t GuildCreationLevel; // 0x10
	int32_t GuildJoinMaxLevel; // 0x14
	int32_t GuildCreationCostType; // 0x18
	int32_t GuildCreationCostCount; // 0x1c
	int32_t GuildIdentityChangeCostType; // 0x20
	int32_t GuildIdentityCostCount; // 0x24
	int32_t CharacterCostumeTitleItemUseId; // 0x28
	int32_t CharacterCostumeTitleItemCount; // 0x2c
	int32_t CharacterNameChangeItemUseId; // 0x30
	int32_t CharacterNameChangeItemCount; // 0x34
	int32_t CharacterNameChangeCostId; // 0x38
	int32_t CharacterNameChangeCostCount; // 0x3c
	int32_t ForceReflowCureItemId; // 0x40
	int32_t ForceReflowCureUseId; // 0x44
	int32_t Use_Item_Time_CriticalFail_Minute; // 0x48
	int32_t PetAdditionExpPercent; // 0x4c
	int32_t PET_READYSTATE_ENDTIMER; // 0x50
	int32_t UnsealingSlotCount; // 0x54
	int32_t GuildHelpCount; // 0x58
	int32_t Support_Acceleration_Time; // 0x5c
	int32_t CustomizeItemUseId; // 0x60
	int32_t CustomizeItemCount; // 0x64
	int32_t CustomizeCostId; // 0x68
	int32_t CustomizeCostCount; // 0x6c
	int32_t Base_Accuracy; // 0x70
	int32_t Min_Accuracy; // 0x74
	int32_t Per_AccuracyDamage; // 0x78
	int32_t Per_PvP_MinAmplify; // 0x7c
	int32_t Per_PvP_MaxAmplify; // 0x80
	int32_t Per_UserToMonster_MinAmplify; // 0x84
	int32_t Per_UserToMonster_MaxAmplify; // 0x88
	int32_t Per_UserToBoss_MinAmplify; // 0x8c
	int32_t Per_UserToBoss_MaxAmplify; // 0x90
	int32_t Per_MonsterToUser_MinAmplify; // 0x94
	int32_t Per_MonsterToUser_MaxAmplify; // 0x98
	int32_t Per_BossToUser_MinAmplify; // 0x9c
	int32_t Per_BossToUser_MaxAmplify; // 0xa0
	int32_t Per_MonsterToMonster_MinAmplify; // 0xa4
	int32_t Per_MonsterToMonster_MaxAmplify; // 0xa8
	int32_t Per_MonsterToBoss_MinAmplify; // 0xac
	int32_t Per_MonsterToBoss_MaxAmplify; // 0xb0
	int32_t Base_Critical; // 0xb4
	int32_t Base_CriticalOutcome; // 0xb8
	int32_t Base_Smite; // 0xbc
	int32_t HPOverPer; // 0xc0
	int32_t HPOverDamagePer; // 0xc4
	int32_t Damage_Amplify_Max; // 0xc8
	float Per_Damage_Amplify_Max_Apply; // 0xcc
	float Per_Buff_Battle_Diff_Min; // 0xd0
	float Per_Battle_Diff_Min; // 0xd4
	int32_t Per_Critical_Max; // 0xd8
	float Per_Critical_Max_Apply; // 0xdc
	int32_t Smite_Amplify_Max; // 0xe0
	int32_t REVIVAL_SafetyIncreaseReqLv; // 0xe4
	int32_t Trade_SystemTax; // 0xe8
	int32_t Trade_ApplyTax; // 0xec
	int32_t Trade_SalesTime; // 0xf0
	int32_t Trade_OverSalePrice; // 0xf4
	int32_t Trade_OverSaleWaitingTime; // 0xf8
	int32_t Trade_SaleLimitLv; // 0xfc
	int32_t RevivalHP; // 0x100
	int32_t DeathPenalty_EXP_SaveLogMaxCnt; // 0x104
	int32_t DeathPenalty_EXP_FreeRecovery_Limit; // 0x108
	int32_t Dominion_Strongpoint_BlackIron_Limit; // 0x10c
	int32_t Dominion_Tax_SabookCastle_Enable; // 0x110
	int32_t Dominion_Tax_BicheonCastle_Enable; // 0x114
	int32_t Dominion_Tax_StrongPoint_Enable; // 0x118
	int64_t Dominion_Strongpoint_Blackiron_Max; // 0x120
	int64_t Dominion_Tax_BicheonCastle_Gold_Max; // 0x128
	int64_t Dominion_Tax_BicheonCastle_Blackiron_Max; // 0x130
	int64_t GUILD_DOMINION_Bitcheon_Gold_Transfer_Tax; // 0x138
	int32_t DeathPenalty_Injure_GoldExchangeRate; // 0x140
	int32_t DamageLimit_StandardDmg; // 0x144
	int32_t DamageLimit_Denominator; // 0x148
	int32_t Compose_FailPointMax_INT; // 0x14c
	int32_t Compose_FailPoint_INT; // 0x150
	int32_t CharacterMaxSlotCount; // 0x154
	int32_t Training_CriticalFail_Tolerance; // 0x158
	int32_t Server_Visit_Max_Count; // 0x15c
	int32_t Server_Visit_Open_Hour; // 0x160
	int32_t Server_Visit_Open_Min; // 0x164
	int32_t Server_Visit_Keep_Time; // 0x168
	int32_t ServerVisit_PkWin_ADay_Gain_MaxCount_ServerVister; // 0x16c
	int32_t ServerVisit_PkWin_ADay_Gain_MaxCount_NotServerVister; // 0x170
	int32_t Guest_ShopEnter_Enable; // 0x174
	int32_t SaleItemBasket_MaxCount; // 0x178
	int32_t FT_BlackIron_to_Coin_Cost; // 0x17c
	int32_t FT_Coin_to_BlackIron_Cost; // 0x180
	int32_t FT_Coin_to_Balckiron_Sum_Denominator; // 0x184
	int32_t FT_BlackIron_to_Coin_Success_Mail; // 0x188
	int32_t FT_BlackIron_to_Coin_Fail_Mail; // 0x18c
	int32_t FT_Coin_to_BlackIron_Success_Mail; // 0x190
	int32_t FT_Coin_to_BlackIron_Fail_Normal_Mail; // 0x194
	int32_t FT_Coin_to_BlackIron_Fail_DailyLimit_Mail; // 0x198
	int32_t FT_Coin_to_BlackIron_Fail_MaxLimit_Mail; // 0x19c
	int32_t FT_Coin_Derby_StartHour; // 0x1a0
	int32_t FT_Coin_Derby_StartMin; // 0x1a4
	int32_t FT_Coin_Derby_KeepTime; // 0x1a8
	int32_t FT_Coin_DailySmeltLimit; // 0x1ac
	int32_t FT_Coin_DelayTime; // 0x1b0
	int32_t FT_Coin_Delay_BuffId; // 0x1b4
	int32_t DarkSteel_MinimumReserve; // 0x1b8
	int32_t WorldChattingLv; // 0x1bc
	int32_t ItemAutoOptionChangeLevelLimit; // 0x1c0
	int32_t DarkSteel_Block_Buff; // 0x1c4
	int32_t GuildMarkerGlobalCool; // 0x1c8
};

struct FVector2MaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FProceduralFoliageInstance {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
	FVector Normal; // 0x20
	float Age; // 0x2c
	float Scale; // 0x30
	UFoliageType* Type; // 0x38
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

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
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

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FIGPickedMedia {
	UTexture2D* PickedImage; // 0x0
	FString MediaType; // 0x8
	FString FullMediaPath; // 0x18
	FString ReferenceUrl; // 0x28
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	int32_t GroupIndex; // 0x10
	EAnimGroupRole GroupRole; // 0x14
	bool bIgnoreForRelevancyTest; // 0x15
	float BlendWeight; // 0x18
	float InternalTimeAccumulator; // 0x1c
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FMagicSquareStageTemplate : FTableRowBase {
	int32_t MagicSquareStageId; // 0x8
	int32_t MagicSquareId; // 0xc
	int32_t StageId; // 0x10
	int32_t StageInfo; // 0x14
	int32_t StageRatio_2; // 0x18
	int32_t StageRatio_3; // 0x1c
	int32_t StageRatio_4; // 0x20
	TArray<int32_t> PositionLocation; // 0x28
	FString Color; // 0x38
	int32_t Number; // 0x48
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
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

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
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

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FTextBlockStyle : FSlateWidgetStyle {
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
	int32_t NumberOfAssets; // 0x84
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

struct FChildEmitter {
	float ActivityInParentLifeTime; // 0x0
	bool FollowParentPosition; // 0x4
	float FollowParentSpeedPercent; // 0x8
	int32_t ZOrderOffset; // 0xc
	UUIParticleEmitterAsset* ChildrenAsset; // 0x10
};

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
};

struct FFacebookOpenGraphParameter {
	FString Key; // 0x0
	FString Value; // 0x10
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

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	UProperty* BoundObjectProperty; // 0x8
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FGuildWarMonsterTemplate : FTableRowBase {
	int32_t MonsterId; // 0x8
	EGuildWarMonsterKind MonsterKind; // 0xc
	int32_t OwnerShip; // 0x10
	int32_t GetBuffPerOwner_SearchRange; // 0x14
	int32_t GetBuffPerOwner_BuffId; // 0x18
	int32_t SiegeWeaponImgId; // 0x1c
	int32_t SiegeWeaponNoteSId; // 0x20
	int32_t SiegeWeaponGuildDevId; // 0x24
	int32_t SiegeWeaponReqMoneyId01; // 0x28
	int32_t SiegeWeaponReqMoneyCnt01; // 0x2c
	int32_t SiegeWeaponReqMoneyId02; // 0x30
	int32_t SiegeWeaponReqMoneyCnt02; // 0x34
	int32_t SiegeWeaponReqMoneyId03; // 0x38
	int32_t SiegeWeaponReqMoneyCnt03; // 0x3c
	int32_t SiegeWeaponReqMoneyId04; // 0x40
	int32_t SiegeWeaponReqMoneyCnt04; // 0x44
	int32_t ProductionEffectType; // 0x48
	int32_t ProductionTime; // 0x4c
	int32_t ReproductionCoolTime; // 0x50
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FMonsterResourceTemplate : FTableRowBase {
	int32_t MeshLink; // 0x8
	int32_t ABPLink; // 0xc
	int32_t BPLink; // 0x10
	int32_t MonsterThumbnail; // 0x14
	int32_t MarkerHeight; // 0x18
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FTriggerDataTemplate : FTableRowBase {
	int32_t TriggerID; // 0x8
	ETriggerType TriggerType; // 0xc
	FString TriggerLocation; // 0x10
	float TriggerRotation; // 0x20
	TArray<int32_t> LinkID; // 0x28
	TArray<FString> Value1; // 0x38
	TArray<FString> Value2; // 0x48
	TArray<FString> Value3; // 0x58
	TArray<FString> Value4; // 0x68
	TArray<FString> Value5; // 0x78
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

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
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

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName MessageType; // 0x8
	int32_t MessageIndex; // 0x10
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x48
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x78
	EAlphaBlendOption BlendOption; // 0x88
	UCurveFloat* CustomCurve; // 0x90
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
};

struct FItemCollectionTemplate : FTableRowBase {
	int32_t CollectionId; // 0x8
	int32_t PhaseGroupId; // 0xc
	int32_t AccountType; // 0x10
	int32_t TopMenuGroup; // 0x14
	int32_t TopMenuString; // 0x18
	int32_t ListGroup; // 0x1c
	int32_t ListGroupString; // 0x20
	int32_t PeriodType; // 0x24
	FString StartDate; // 0x28
	FString EndDate; // 0x38
	int32_t TitleString; // 0x48
	int32_t ListSort; // 0x4c
	int32_t EffectAttributeType; // 0x50
	int32_t EffectAttributeValue; // 0x54
	int32_t EffectString; // 0x58
	int32_t EffectGroup; // 0x5c
	int32_t EffectGroupString; // 0x60
	int32_t ClassID; // 0x64
	int32_t ItemUseId01; // 0x68
	int32_t Smelting01; // 0x6c
	int32_t ItemUseId02; // 0x70
	int32_t Smelting02; // 0x74
	int32_t ItemUseId03; // 0x78
	int32_t Smelting03; // 0x7c
	int32_t ItemUseId04; // 0x80
	int32_t Smelting04; // 0x84
	int32_t ItemUseId05; // 0x88
	int32_t Smelting05; // 0x8c
	int32_t ItemUseId06; // 0x90
	int32_t Smelting06; // 0x94
	int32_t ItemUseId07; // 0x98
	int32_t Smelting07; // 0x9c
	int32_t ItemUseId08; // 0xa0
	int32_t Smelting08; // 0xa4
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FAGShareEmailData {
	FString Subject; // 0x0
	FString TextBody; // 0x10
	UTexture2D* Image; // 0x20
	TArray<FString> Recipients; // 0x28
	TArray<FString> CCRecepients; // 0x38
	TArray<FString> BCCRecepients; // 0x48
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

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FItemUnsealingAccelerationTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t ItemId; // 0xc
	int32_t AccelerationTime; // 0x10
	int32_t StringID; // 0x14
	int32_t NeedCostId; // 0x18
	int32_t NeedCostValue; // 0x1c
};

struct FMapUIAreaTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t AreaId; // 0xc
	int32_t MiniGroupId; // 0x10
	int32_t MiniGroupStringId; // 0x14
	int32_t MiniGroupIcon; // 0x18
	FVector2D MiniGroupCoordinate; // 0x1c
	int32_t GoodsTabAble; // 0x24
	int32_t DominionIconId; // 0x28
	int32_t DominionId; // 0x2c
	int32_t TouchPosition_X; // 0x30
	int32_t TouchPosition_Y; // 0x34
	int32_t TouchScale_X; // 0x38
	int32_t TouchScale_Y; // 0x3c
	int32_t MonLevelMin; // 0x40
	int32_t MonLevelMax; // 0x44
	int32_t PartyPlay; // 0x48
};

struct FUnderWorldTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t UwID; // 0xc
	int32_t StageId; // 0x10
	int32_t StageSort; // 0x14
	int32_t StageNameID; // 0x18
	int32_t StageNoteID; // 0x1c
	int32_t DirectWarpType; // 0x20
	bool LevelType; // 0x24
	int32_t LevelValue; // 0x28
	int32_t ArrivalLocation; // 0x2c
	int32_t StageThumbnail; // 0x30
	int32_t EventThumbnail; // 0x34
	int32_t BossMonsterID; // 0x38
	bool BossGenType; // 0x3c
	bool CombatPowerType; // 0x3d
	int32_t RecommendedPerson; // 0x40
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FItemMysticalPieceTranceTemplate : FTableRowBase {
	int32_t TranceID; // 0x8
	int32_t TranceStep; // 0xc
	int32_t TranceType; // 0x10
	int32_t AttributeType; // 0x14
	int32_t StatusValue; // 0x18
	int32_t OptionGradeValue01; // 0x1c
	int32_t OptionGradeValue06; // 0x20
	int32_t OptionGradeValue11; // 0x24
	int32_t OptionGradeValue16; // 0x28
	int32_t OptionGradeValue21; // 0x2c
	int32_t OptionGradeValue26; // 0x30
	int32_t OptionGradeValue31; // 0x34
	int32_t OptionGradeValue36; // 0x38
	int32_t OptionGradeValue41; // 0x3c
	int32_t OptionGradeValue46; // 0x40
	int32_t PassiveLv; // 0x44
	int32_t BattlePointPerLv; // 0x48
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
};

struct FPKGradeTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t PkGradeType; // 0xc
	int32_t PkName; // 0x10
	int32_t PkPointMin; // 0x14
	int32_t PkPointMax; // 0x18
	int32_t GetPkPoint; // 0x1c
	int32_t BuffId; // 0x20
	int32_t WantedFamePoint; // 0x24
	int32_t PKGradeAttachBuffId; // 0x28
	int32_t penaltyString; // 0x2c
};

struct FQuestTagSetTemplate : FTableRowBase {
	int32_t TagId; // 0x8
	int32_t ActionIconId; // 0xc
	int32_t TextIconId; // 0x10
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0x98
	FName Layer; // 0xa0
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

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
};

struct FBuffOverlapCallTemplate : FTableRowBase {
	int32_t OverLapCallID; // 0x8
	int32_t OverLapCallGroupID; // 0xc
	int32_t BuffOverlapCntMin; // 0x10
	int32_t BuffOverlapCntMax; // 0x14
	TArray<int32_t> AttachBuffID; // 0x18
	int32_t BuffOverlapLevel; // 0x28
};

struct FRankingRewardTemplate : FTableRowBase {
	int32_t RankingRewardId; // 0x8
	int32_t CategoryID; // 0xc
	int32_t RankNumber; // 0x10
	int32_t RankEnd; // 0x14
	int32_t RankType; // 0x18
	int32_t DailyRewardTitle; // 0x1c
	int32_t DailyRewardBuff1; // 0x20
	int32_t BuffDescStr1; // 0x24
	int32_t BuffValueStr1; // 0x28
	int32_t DailyRewardBuff2; // 0x2c
	int32_t BuffDescStr2; // 0x30
	int32_t BuffValueStr2; // 0x34
	int32_t DailyRewardBuff3; // 0x38
	int32_t BuffDescStr3; // 0x3c
	int32_t BuffValueStr3; // 0x40
	int32_t DailyRewardBuff4; // 0x44
	int32_t BuffDescStr4; // 0x48
	int32_t BuffValueStr4; // 0x4c
	int32_t WeekRewardType1; // 0x50
	int32_t WeekRewardId1; // 0x54
	int32_t WeekRewardValue1; // 0x58
	int32_t WeekRewardType2; // 0x5c
	int32_t WeekRewardId2; // 0x60
	int32_t WeekRewardValue2; // 0x64
	int32_t WeekRewardType3; // 0x68
	int32_t WeekRewardId3; // 0x6c
	int32_t WeekRewardValue3; // 0x70
	int32_t WeekRewardType4; // 0x74
	int32_t WeekRewardId4; // 0x78
	int32_t WeekRewardValue4; // 0x7c
};

struct FServerChangeUITemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t IsShow; // 0xc
	int32_t TitleSId; // 0x10
	int32_t TitleDescId; // 0x14
	int32_t ButtonSid; // 0x18
	int32_t icon; // 0x1c
};

struct FActorTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
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

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
};

struct FFirebaseMessage {
	FString from; // 0x0
	FString to; // 0x10
	FString collapse_key; // 0x20
	TMap<FString, FString> Data; // 0x30
	FString message_id; // 0x80
	FString message_type; // 0x90
	FString Priority; // 0xa0
	int32_t time_to_live; // 0xb0
	FString Error; // 0xb8
	FString error_description; // 0xc8
	bool notification_opened; // 0xd8
	FString link; // 0xe0
	int64_t sent_time; // 0xf0
	bool have_notify; // 0xf8
	FFirebaseNotify Notification; // 0x100
};

struct FGameDefineOptionTemplate : FTableRowBase {
	int32_t ID; // 0x8
	FString Parameter; // 0x10
	FString OptionType; // 0x20
	FString OptionValue; // 0x30
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FCharacterMovementComponentPostPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
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

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FItemTranscendenceDefineTemplate : FTableRowBase {
	int32_t TranID; // 0x8
	int32_t TranceGroup; // 0xc
	int32_t TranceStep; // 0x10
	int32_t ReqCostType1; // 0x14
	int32_t ReqCostValue1; // 0x18
	int32_t ReqCostType2; // 0x1c
	int32_t ReqCostValue2; // 0x20
	int32_t TranceSuccessRatio; // 0x24
	int32_t TranceEffectValue; // 0x28
	int32_t TranceFailItemID1; // 0x2c
	int32_t TranceFailItemRatio1; // 0x30
	int32_t TranceFailItemCntMin1; // 0x34
	int32_t TranceFailItemCntMax1; // 0x38
	int32_t TranceFailItemID2; // 0x3c
	int32_t TranceFailItemRatio2; // 0x40
	int32_t TranceFailItemCntMin2; // 0x44
	int32_t TranceFailItemCntMax2; // 0x48
	int32_t TranceFailItemID3; // 0x4c
	int32_t TranceFailItemRatio3; // 0x50
	int32_t TranceFailItemCntMin3; // 0x54
	int32_t TranceFailItemCntMax3; // 0x58
	int32_t TranceFailItemID4; // 0x5c
	int32_t TranceFailItemRatio4; // 0x60
	int32_t TranceFailItemCntMin4; // 0x64
	int32_t TranceFailItemCntMax4; // 0x68
};

struct FIAPProductData {
	FString PayID; // 0x0
	FString ProductId; // 0x10
	FString PurchaseId; // 0x20
	bool Consumable; // 0x30
	FString ItemName; // 0x38
	FString TotalPrice; // 0x48
	int32_t ItemType; // 0x58
	uint32_t ShopGoodsVersion; // 0x5c
	int32_t ShopGoodsID; // 0x60
	FString Receipt; // 0x68
	int32_t TransactionState; // 0x78
	FString TransactionId; // 0x80
	FString PlayerKey; // 0x90
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FSmallDialog {
	int32_t Count; // 0x0
	int32_t STDId; // 0x4
};

struct FBoneCustomizingData {
	int32_t TapId; // 0x0
	FString ControlName; // 0x8
	TArray<FCustomBoneData> BoneDataArray; // 0x18
};

struct FATTACK_DATA {
	float CombatPoint; // 0x0
	float SkillLevel; // 0x4
	float PhysicalAttack; // 0x8
	float MagicAttack; // 0xc
	float MulDamage; // 0x10
	float LevelUpMulDamage; // 0x14
	float AddDamage; // 0x18
	float LevelUpAddDamage; // 0x1c
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

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
};

struct FGlobalRegionTemplate : FTableRowBase {
	FString RegionKey; // 0x8
	FString RegionGroupKey; // 0x18
	int32_t WSRegionCode; // 0x28
	int32_t RegionName; // 0x2c
	int32_t RegionGroupName; // 0x30
	int32_t RegionUTC; // 0x34
	int32_t RegionIcon; // 0x38
	int32_t RegionOrder; // 0x3c
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
};

struct FWindowStyle : FSlateWidgetStyle {
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

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
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

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FTriangleID : FElementID {
	int32_t IDValue; // 0x0
};

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
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

struct FSkillAttackTemplate : FTableRowBase {
	int32_t AttackID; // 0x8
	int32_t AniIndex; // 0xc
	int32_t SkillId; // 0x10
	int32_t AniType; // 0x14
	int32_t MainAttack; // 0x18
	int32_t NextAttackLink; // 0x1c
	float ImpactStartTime; // 0x20
	int32_t MoveType; // 0x24
	int32_t MoveAngleMin; // 0x28
	int32_t MoveAngleMax; // 0x2c
	float MoveRange; // 0x30
	float DelayMove; // 0x34
	float MoveTime; // 0x38
	int32_t ViewTarget; // 0x3c
	int32_t AttackUseType; // 0x40
	float TargetDistanceMin; // 0x44
	float TargetDistanceMax; // 0x48
	int32_t TargetType; // 0x4c
	int32_t TargetValue; // 0x50
	TARGET_SUBTYPE TargetSubType; // 0x54
	int32_t ImpactType; // 0x58
	int32_t ImpactSpawnType; // 0x5c
	TArray<float> ImpactTime; // 0x60
	float StrikeDelay; // 0x70
	int32_t AttackAngle; // 0x74
	float AttackDistanceMin; // 0x78
	float AttackDistanceMax; // 0x7c
	float AttackWidth; // 0x80
	float AttackHeight; // 0x84
	FVector LocationOffset; // 0x88
	float RotationOffset; // 0x94
	int32_t BulletType; // 0x98
	int32_t BulletMoveType; // 0x9c
	int32_t BulletCount; // 0xa0
	int32_t BulletSpeed; // 0xa4
	float BulletTime; // 0xa8
	FString BulletSocketName; // 0xb0
	float LaunchGapDelay; // 0xc0
	int32_t BulletEffect; // 0xc4
	int32_t BulletEffectScale; // 0xc8
	FString CurveData; // 0xd0
	FString SpeedData; // 0xe0
	int32_t DamageType; // 0xf0
	int32_t MulDamage; // 0xf4
	int32_t LevelUpMulDamage; // 0xf8
	int32_t AddDamage; // 0xfc
	int32_t LevelUpAddDamage; // 0x100
	int32_t DamageAttribute; // 0x104
	int32_t MagicDamage; // 0x108
	int32_t LevelUpMagicDamage; // 0x10c
	int32_t AddMagicDamage; // 0x110
	int32_t LevelUpAddMagicDamage; // 0x114
	int32_t ActType; // 0x118
	int32_t SuperIgnore; // 0x11c
	int32_t SuperArmor; // 0x120
	int32_t CCSTANCE; // 0x124
	int32_t CrowdControlType; // 0x128
	float CrowdControlValue; // 0x12c
	float CrowdControlHeight; // 0x130
	float CrowdControlValueEx; // 0x134
	float CrowdControlTime; // 0x138
	int32_t CCEffect; // 0x13c
	FName CCEffectSocket; // 0x140
	float CCEffectHeight; // 0x148
	float CCEffectScale; // 0x14c
	FString CCMaterialPath; // 0x150
	int32_t HitReactionProb; // 0x160
	int32_t GuideEffectApplyType; // 0x164
	int32_t GuideEffect; // 0x168
	float GuideEffectAliveTime; // 0x16c
	float GuideEffectScalingTime; // 0x170
	int32_t ActEffect; // 0x174
	int32_t HitEffect; // 0x178
	int32_t CriticalHitEffect; // 0x17c
	int32_t HitEffectSound; // 0x180
	int32_t CameraShake; // 0x184
	int32_t DieReaction; // 0x188
	TArray<int32_t> Buff; // 0x190
	FVector BulletRotationOffset; // 0x1a0
	float BulletAngleSpeed; // 0x1ac
	bool MonScaleApply; // 0x1b0
	float AniTime; // 0x1b4
	int32_t AttackRagePoint; // 0x1b8
	int32_t HitRagePoint; // 0x1bc
	int32_t CCDirection; // 0x1c0
	int32_t SkillTotem; // 0x1c4
	int32_t SkillTotemTarget; // 0x1c8
	int32_t SkillTotemTime; // 0x1cc
	int32_t SkillTotemCount; // 0x1d0
	int32_t AggroRate; // 0x1d4
	TArray<float> Emissive_Dcolor; // 0x1d8
	float Fresnel_Exponenth; // 0x1e8
	float Fresnel_BaseReflect; // 0x1ec
	float EmissiveTime; // 0x1f0
	TArray<int32_t> CCBuff; // 0x1f8
	int32_t CCUserCheck; // 0x208
	float BulletCurveTime; // 0x20c
	int32_t BulletHeight; // 0x210
};

struct FDownloadProfileImagData {
	int32_t FailCount; // 0x0
	TArray<UImage*> ImageArray; // 0x8
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FBattlePassGroupTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t GroupId; // 0xc
	int32_t NameStrId; // 0x10
	int32_t Order; // 0x14
	FString WeekOpenTime; // 0x18
	int32_t MissionGroupId; // 0x28
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FChannelTemplate : FTableRowBase {
	int32_t ChannelId; // 0x8
	int32_t StageId; // 0xc
	int32_t Ch_Type; // 0x10
	int32_t Ch_DefaultCount; // 0x14
	int32_t Ch_DefaultAddCnt; // 0x18
	int32_t Ch_MaxCount; // 0x1c
	int32_t Sync_RecommendCount; // 0x20
	int32_t Sync_MaxCount; // 0x24
	int32_t IsWatingCh; // 0x28
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
	char bApplyNormalizationToStereoSounds : 1; // 0xb1
	char bEnableLogFrequencyScaling : 1; // 0xb1
	ESoundSpatializationAlgorithm SpatializationAlgorithm; // 0xb2
	float BinauralRadius; // 0xb4
	EAirAbsorptionMethod AbsorptionMethod; // 0xb8
	ECollisionChannel OcclusionTraceChannel; // 0xb9
	EReverbSendMethod ReverbSendMethod; // 0xba
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
	FSoundAttenuationPluginSettings PluginSettings; // 0x2c0
};

struct FGlobalFontRangeTemplate : FTableRowBase {
	FString StartRange; // 0x8
	FString EndRange; // 0x18
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FStagePreloadTemplate : FTableRowBase {
	int32_t StageId; // 0x8
	TArray<FPreloadData> PreloadData; // 0x10
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FGachaInfoTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ID; // 0xc
	int32_t NameId; // 0x10
	int32_t GachaType; // 0x14
	int32_t BuyItemId; // 0x18
	int32_t BuyItemValue; // 0x1c
	int32_t MoneyId; // 0x20
	int32_t MoneyValue; // 0x24
	int32_t BuyItemId_Many; // 0x28
	int32_t BuyItemValue_Many; // 0x2c
	int32_t MoneyValue_Many; // 0x30
	int32_t GroupId; // 0x34
	int32_t GroupId_UIList; // 0x38
	int32_t GetValue; // 0x3c
	int32_t CountType; // 0x40
	int32_t Count; // 0x44
	int32_t Time; // 0x48
	int32_t DayMaxValue; // 0x4c
	int32_t MileageValue; // 0x50
	int32_t MileageValue_Many; // 0x54
	int32_t EventMileageValue; // 0x58
	int32_t EventMileageValue_Many; // 0x5c
	int32_t EventMileageCost; // 0x60
	int32_t EventMileageReward; // 0x64
	int32_t EventGacha_DailyCount; // 0x68
	int32_t Level_Limited; // 0x6c
	int32_t DirectionType; // 0x70
	int32_t BG_OnOff; // 0x74
	int32_t BG_PointGetGrade; // 0x78
	int32_t BG_PointGetOnce; // 0x7c
	int32_t BG_PointResetType; // 0x80
	int32_t BG_PointResetGrade; // 0x84
	int32_t BG_PointChangeCount; // 0x88
	int32_t BG_SummonCountMax; // 0x8c
	int32_t BG_GroupId; // 0x90
	int32_t BG_PointPlusCount; // 0x94
	int32_t EventContentsId; // 0x98
	int32_t PetId; // 0x9c
	FString EndTime; // 0xa0
	int32_t Fixed_OnOff; // 0xb0
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

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	UStructProperty* ValueHandlerNodeProperty; // 0x20
};

struct FLevelSequenceObject {
	UObject* ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FEdgeID : FElementID {
	int32_t IDValue; // 0x0
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FMapUIMiniTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t MiniGroupId; // 0xc
	int32_t MiniStageId; // 0x10
	int32_t BidoMatrixStageId; // 0x14
	FVector MiniMapCoordinateLT; // 0x18
	FVector MiniMapCoordinateRB; // 0x24
	float MiniMapZoom; // 0x30
	float UserMovingRaderZoom; // 0x34
	FString MiniMapResource; // 0x38
	int32_t ElliteCheck; // 0x48
	int32_t DefaultOpenList; // 0x4c
	int32_t ElliteStageId; // 0x50
};

struct FNpcTemplate : FTableRowBase {
	int32_t NpcID; // 0x8
	int32_t NameTitleSid; // 0xc
	int32_t NameSId; // 0x10
	int32_t NPCColorId; // 0x14
	int32_t DefaultAnimationBP; // 0x18
	FName ResourceId; // 0x1c
	TArray<FName> PartsResourceID; // 0x28
	FString FunctionData; // 0x38
	bool WaypointNPC; // 0x48
	float NPCScale; // 0x4c
	int32_t CinematicAnimationBP; // 0x50
	int32_t AnimationPath; // 0x54
	float InteractionRange; // 0x58
	float SightRange; // 0x5c
	float ViewRange; // 0x60
	float CapsuleHalfHeight; // 0x64
	float CapsuleRadius; // 0x68
	bool HideNameTag; // 0x6c
	int32_t FactionType; // 0x70
	TArray<int32_t> NpcDialogId; // 0x78
	int32_t NpcPortrait; // 0x88
	int32_t NPCBehaviourAiLink; // 0x8c
	FVector CollisionBoxExtend; // 0x90
	FString ContentsUI; // 0xa0
	TArray<int32_t> NPCGroupListID; // 0xb0
	int32_t ContentsType1; // 0xc0
	int32_t TypeValue1; // 0xc4
	int32_t ContentsType2; // 0xc8
	int32_t TypeValue2; // 0xcc
	int32_t ContentsType3; // 0xd0
	int32_t TypeValue3; // 0xd4
	int32_t NpcType; // 0xd8
	int32_t MerchantNpc; // 0xdc
	int32_t SiegeMode; // 0xe0
	int32_t EventContentsId; // 0xe4
};

struct FQuestDropItemTemplate : FTableRowBase {
	int32_t QuestDropId; // 0x8
	int32_t QuestType; // 0xc
	int32_t QuestId; // 0x10
	int32_t ItemId; // 0x14
	int32_t DropRate; // 0x18
};

struct FQuestRequestTemplate : FTableRowBase {
	int32_t RequestID; // 0x8
	int32_t RequestIndex; // 0xc
	int32_t RequestGrade; // 0x10
	int32_t RequestShowType; // 0x14
	int32_t RequestIconType; // 0x18
	int32_t RequestStageVisible; // 0x1c
	int32_t PartyMember; // 0x20
	int32_t StepNo; // 0x24
	int32_t RequestHint; // 0x28
	int32_t RequestStory; // 0x2c
	int32_t StoryNo; // 0x30
	int32_t RequestCombatPower; // 0x34
	int32_t LockInvisible; // 0x38
	int32_t RequestOpenCondition; // 0x3c
	int32_t RequestOpenConditionValue; // 0x40
	int32_t AcceptMoveNPC; // 0x44
	int32_t AcceptNPC; // 0x48
	int32_t AcceptCinematicDialogueID; // 0x4c
	int32_t HintNPC; // 0x50
	int32_t HintCinematicDialogueID; // 0x54
	int32_t MapNpcShowType; // 0x58
	QuestMissionType MissionType; // 0x5c
	QuestHelperType HelperType; // 0x60
	int32_t MissionTarget; // 0x64
	int32_t Parameter1; // 0x68
	int32_t Parameter2; // 0x6c
	int32_t AutoBattleType; // 0x70
	int32_t PcTargetSearchDist; // 0x74
	int32_t CoordinateRange; // 0x78
	int32_t StringMESSAGE; // 0x7c
	int32_t CountIndication; // 0x80
	int32_t RequestGetStageId; // 0x84
	int32_t RequestStageId; // 0x88
	TArray<FVector> ViaCoordinate; // 0x90
	FVector RequestCoordinate; // 0xa0
	int32_t CoordinateShowType; // 0xac
	int32_t EffectId; // 0xb0
	int32_t ContentOpenPage; // 0xb4
	TArray<FSmallDialog> CountSmallTalk; // 0xb8
	int32_t RequestTitleSID; // 0xc8
	int32_t RequestObjectiveSID; // 0xcc
	int32_t RewardExp; // 0xd0
	int32_t RewardGOLD; // 0xd4
	int32_t RewardGoodsType; // 0xd8
	int32_t RewardGoodsCount; // 0xdc
	TArray<int32_t> RewardItemId01; // 0xe0
	int32_t RewardItemCount01; // 0xf0
	TArray<int32_t> RewardItemId02; // 0xf8
	int32_t RewardItemCount02; // 0x108
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x58
	FSlateBrush BackgroundImageSelected; // 0x80
	FSlateBrush BackgroundImageComposing; // 0x108
	FSlateBrush CaretImage; // 0x190
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FInventoryExtendItemTemplate : FTableRowBase {
	int32_t ExtendId; // 0x8
	int32_t InventoryType; // 0xc
	int32_t ExtendItemUseId; // 0x10
	int32_t ExtendValue; // 0x14
	int32_t ExtendSlotCost; // 0x18
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x48
	FMovieSceneFloatChannel LeftCurve; // 0xe8
	FMovieSceneFloatChannel RightCurve; // 0x188
	FMovieSceneFloatChannel BottomCurve; // 0x228
	EMovieSceneBlendType BlendType; // 0x2c8
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FContentsPointLight {
	FVector Location; // 0x0
	float Intensity; // 0xc
	FColor LightColor; // 0x10
	float AttenuationRadius; // 0x14
};

struct FItemViewerTemplate : FTableRowBase {
	int32_t StageId; // 0x8
	TArray<int32_t> Money; // 0x10
	TArray<int32_t> TimeTicket; // 0x20
	TArray<int32_t> ClassItem01; // 0x30
	TArray<int32_t> ClassItem02; // 0x40
	TArray<int32_t> ClassItem03; // 0x50
	TArray<int32_t> ClassItem04; // 0x60
	TArray<int32_t> ClassItem05; // 0x70
	TArray<int32_t> ClassItemCountMin01; // 0x80
	TArray<int32_t> ClassItemCountMin02; // 0x90
	TArray<int32_t> ClassItemCountMin03; // 0xa0
	TArray<int32_t> ClassItemCountMin04; // 0xb0
	TArray<int32_t> ClassItemCountMin05; // 0xc0
	TArray<int32_t> ClassItemCountMax01; // 0xd0
	TArray<int32_t> ClassItemCountMax02; // 0xe0
	TArray<int32_t> ClassItemCountMax03; // 0xf0
	TArray<int32_t> ClassItemCountMax04; // 0x100
	TArray<int32_t> ClassItemCountMax05; // 0x110
};

struct FTutorialTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t TutorialGroupId; // 0xc
	bool StartSelectAble; // 0x10
	bool PauseAble; // 0x11
	FName TargetIndex; // 0x14
	bool BgAble; // 0x1c
	ETutorialUIGuideType UiGuide; // 0x20
	EUIGuideType UIGuideType; // 0x24
	int32_t UiGuideStringId; // 0x28
	ETutorialGuidStrPosType UiGuideStringSide; // 0x2c
	int32_t NpcGuide; // 0x30
	int32_t NpcGuideStringId; // 0x34
	int32_t SoundGuideId; // 0x38
	ETutorialStepEndType StepEndType; // 0x3c
	float StepEndValue; // 0x40
	float StartDelaySec; // 0x44
	float RotationYaw; // 0x48
	FString TutorialProgressData; // 0x50
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x78
	float PoseWeight; // 0x80
};

struct FStreamingLevelsToConsider {
	TArray<FLevelStreamingWrapper> StreamingLevels; // 0x0
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

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingId; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
};

struct FSourceEffectStereoDelaySettings {
	EStereoDelaySourceEffect DelayMode; // 0x0
	float DelayTimeMsec; // 0x4
	float Feedback; // 0x8
	float DelayRatio; // 0xc
	float WetLevel; // 0x10
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x28
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FMonsterColorGroupTemplate : FTableRowBase {
	FString Color01; // 0x8
	FString Color02; // 0x18
	FString Color03; // 0x28
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FGuildShopTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t GuildShopId; // 0xc
	int32_t GuildShopGroup; // 0x10
	int32_t ShopGroupName; // 0x14
	int32_t GuildShopNo; // 0x18
	TArray<int32_t> GuildShopItemUnLockDominionId; // 0x20
	int32_t GuildShopItemUnLockDevId; // 0x30
	int32_t GuildShopItemUnLockDevLevel; // 0x34
	int32_t GuildShopItemId; // 0x38
	int32_t GuildShopItemCnt; // 0x3c
	int32_t GuildShopItemRegCostType; // 0x40
	int32_t GuildShopItemRegCostTypeSub; // 0x44
	int32_t GuildShopItemRegCostValue; // 0x48
	int32_t GuildShopItemBuyCostType; // 0x4c
	int32_t GuildShopItemBuyCostTypeSub; // 0x50
	int32_t GuildShopItemBuyCostValue; // 0x54
};

struct FGhostInfo {
	UMeshComponent* Ghost; // 0x0
	UMaterialInstanceDynamic* DynamMaterial; // 0x8
	float ExistTime; // 0x10
	FVector OrigScale; // 0x14
};

struct FGenTemplate : FTableRowBase {
	int32_t PosID; // 0x8
	int32_t Stage; // 0xc
	int32_t GenObjectID; // 0x10
	int32_t GenObjectType; // 0x14
	int32_t SpawnCount; // 0x18
	int32_t SpawnRange; // 0x1c
	int32_t ActiveType; // 0x20
	int32_t RegMinTime; // 0x24
	int32_t RegMaxTime; // 0x28
	int32_t LinkGroup; // 0x2c
	int32_t LocationX; // 0x30
	int32_t LocationY; // 0x34
	int32_t LocationZ; // 0x38
	int32_t RotationRoll; // 0x3c
	int32_t RotationPitch; // 0x40
	int32_t RotationYaw; // 0x44
	int32_t ScaleX; // 0x48
	int32_t ScaleY; // 0x4c
	int32_t ScaleZ; // 0x50
};

struct FVectorMaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FGuildWarRevivalTemplate : FTableRowBase {
	int32_t GuildWarRevivalId; // 0x8
	int32_t MiniMapResource; // 0xc
	int32_t SafetyWarp01_NameId; // 0x10
	int32_t SafetyWarp01_IconId; // 0x14
	int32_t SafetyWarp01_IconId_List; // 0x18
	int32_t SafetyWarp02_NameId; // 0x1c
	int32_t SafetyWarp02_IconId; // 0x20
	int32_t SafetyWarp02_IconId_List; // 0x24
	int32_t SafetyWarp03_NameId; // 0x28
	int32_t SafetyWarp03_IconId; // 0x2c
	int32_t SafetyWarp03_IconId_List; // 0x30
	int32_t SafetyWarp04_NameId; // 0x34
	int32_t SafetyWarp04_IconId; // 0x38
	int32_t SafetyWarp04_IconId_List; // 0x3c
	int32_t SafetyWarp05_NameId; // 0x40
	int32_t SafetyWarp05_IconId; // 0x44
	int32_t SafetyWarp05_IconId_List; // 0x48
	int32_t Revival01_CheckTargetType; // 0x4c
	int32_t Revival01_CheckTargetId; // 0x50
	int32_t Revival01_WarpId; // 0x54
	int32_t Revival01_NameId; // 0x58
	int32_t Revival01_IconId_None; // 0x5c
	int32_t Revival01_IconId_Mine; // 0x60
	int32_t Revival01_IconId_Other; // 0x64
	int32_t Revival01_IconId_None_List; // 0x68
	int32_t Revival01_IconId_Mine_List; // 0x6c
	int32_t Revival01_IconId_Other_List; // 0x70
	int32_t Revival02_CheckTargetType; // 0x74
	int32_t Revival02_CheckTargetId; // 0x78
	int32_t Revival02_WarpId; // 0x7c
	int32_t Revival02_NameId; // 0x80
	int32_t Revival02_IconId_None; // 0x84
	int32_t Revival02_IconId_Mine; // 0x88
	int32_t Revival02_IconId_Other; // 0x8c
	int32_t Revival02_IconId_None_List; // 0x90
	int32_t Revival02_IconId_Mine_List; // 0x94
	int32_t Revival02_IconId_Other_List; // 0x98
	int32_t Revival03_CheckTargetType; // 0x9c
	int32_t Revival03_CheckTargetId; // 0xa0
	int32_t Revival03_WarpId; // 0xa4
	int32_t Revival03_NameId; // 0xa8
	int32_t Revival03_IconId_None; // 0xac
	int32_t Revival03_IconId_Mine; // 0xb0
	int32_t Revival03_IconId_Other; // 0xb4
	int32_t Revival03_IconId_None_List; // 0xb8
	int32_t Revival03_IconId_Mine_List; // 0xbc
	int32_t Revival03_IconId_Other_List; // 0xc0
	int32_t Revival04_CheckTargetType; // 0xc4
	int32_t Revival04_CheckTargetId; // 0xc8
	int32_t Revival04_WarpId; // 0xcc
	int32_t Revival04_NameId; // 0xd0
	int32_t Revival04_IconId_None; // 0xd4
	int32_t Revival04_IconId_Mine; // 0xd8
	int32_t Revival04_IconId_Other; // 0xdc
	int32_t Revival04_IconId_None_List; // 0xe0
	int32_t Revival04_IconId_Mine_List; // 0xe4
	int32_t Revival04_IconId_Other_List; // 0xe8
	int32_t Revival05_CheckTargetType; // 0xec
	int32_t Revival05_CheckTargetId; // 0xf0
	int32_t Revival05_WarpId; // 0xf4
	int32_t Revival05_NameId; // 0xf8
	int32_t Revival05_IconId_None; // 0xfc
	int32_t Revival05_IconId_Mine; // 0x100
	int32_t Revival05_IconId_Other; // 0x104
	int32_t Revival05_IconId_None_List; // 0x108
	int32_t Revival05_IconId_Mine_List; // 0x10c
	int32_t Revival05_IconId_Other_List; // 0x110
	int32_t Revival06_CheckTargetType; // 0x114
	int32_t Revival06_CheckTargetId; // 0x118
	int32_t Revival06_WarpId; // 0x11c
	int32_t Revival06_NameId; // 0x120
	int32_t Revival06_IconId_None; // 0x124
	int32_t Revival06_IconId_Mine; // 0x128
	int32_t Revival06_IconId_Other; // 0x12c
	int32_t Revival06_IconId_None_List; // 0x130
	int32_t Revival06_IconId_Mine_List; // 0x134
	int32_t Revival06_IconId_Other_List; // 0x138
	int32_t Revival07_CheckTargetType; // 0x13c
	int32_t Revival07_CheckTargetId; // 0x140
	int32_t Revival07_WarpId; // 0x144
	int32_t Revival07_NameId; // 0x148
	int32_t Revival07_IconId_None; // 0x14c
	int32_t Revival07_IconId_Mine; // 0x150
	int32_t Revival07_IconId_Other; // 0x154
	int32_t Revival07_IconId_None_List; // 0x158
	int32_t Revival07_IconId_Mine_List; // 0x15c
	int32_t Revival07_IconId_Other_List; // 0x160
	int32_t Revival08_CheckTargetType; // 0x164
	int32_t Revival08_CheckTargetId; // 0x168
	int32_t Revival08_WarpId; // 0x16c
	int32_t Revival08_NameId; // 0x170
	int32_t Revival08_IconId_None; // 0x174
	int32_t Revival08_IconId_Mine; // 0x178
	int32_t Revival08_IconId_Other; // 0x17c
	int32_t Revival08_IconId_None_List; // 0x180
	int32_t Revival08_IconId_Mine_List; // 0x184
	int32_t Revival08_IconId_Other_List; // 0x188
	int32_t Revival09_CheckTargetType; // 0x18c
	int32_t Revival09_CheckTargetId; // 0x190
	int32_t Revival09_WarpId; // 0x194
	int32_t Revival09_NameId; // 0x198
	int32_t Revival09_IconId_None; // 0x19c
	int32_t Revival09_IconId_Mine; // 0x1a0
	int32_t Revival09_IconId_Other; // 0x1a4
	int32_t Revival09_IconId_None_List; // 0x1a8
	int32_t Revival09_IconId_Mine_List; // 0x1ac
	int32_t Revival09_IconId_Other_List; // 0x1b0
	int32_t Revival10_CheckTargetType; // 0x1b4
	int32_t Revival10_CheckTargetId; // 0x1b8
	int32_t Revival10_WarpId; // 0x1bc
	int32_t Revival10_NameId; // 0x1c0
	int32_t Revival10_IconId_None; // 0x1c4
	int32_t Revival10_IconId_Mine; // 0x1c8
	int32_t Revival10_IconId_Other; // 0x1cc
	int32_t Revival10_IconId_None_List; // 0x1d0
	int32_t Revival10_IconId_Mine_List; // 0x1d4
	int32_t Revival10_IconId_Other_List; // 0x1d8
};

struct FGuildDevLevelTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t DevId; // 0x10
	int32_t Level; // 0x14
	int32_t LevelUpExp; // 0x18
	int32_t DonationMoneyId; // 0x1c
	int32_t DonationMoneyValue; // 0x20
	int32_t DonationMoneyId_Sub; // 0x24
	int32_t DonationMoneyValue_Sub; // 0x28
	int32_t Reward_DevExp; // 0x2c
	int32_t Reward_MoneyId1; // 0x30
	int32_t Reward_MoneyIdValue1; // 0x34
	int32_t Reward_MoneyId2; // 0x38
	int32_t Reward_MoneyIdValue2; // 0x3c
	int32_t Reward_GuildExp; // 0x40
	int32_t Attribute1_Kind; // 0x44
	int32_t Attribute1_Type; // 0x48
	int32_t Attribute1_Value; // 0x4c
	int32_t Attribute1_NameStrId; // 0x50
	int32_t Attribute2_Kind; // 0x54
	int32_t Attribute2_Type; // 0x58
	int32_t Attribute2_Value; // 0x5c
	int32_t Attribute2_NameStrId; // 0x60
	int32_t LevelUpMoneyId1; // 0x64
	int32_t LevelUpMoneyValue1; // 0x68
	int32_t LevelUpMoneyId2; // 0x6c
	int32_t LevelUpMoneyValue2; // 0x70
	int32_t LevelUpMoneyId3; // 0x74
	int32_t LevelUpMoneyValue3; // 0x78
	int32_t LevelUpMoneyId4; // 0x7c
	int32_t LevelUpMoneyValue4; // 0x80
	int32_t LevelUpTime; // 0x84
	int32_t LevelUpSuccessRate; // 0x88
	int32_t LevelUpFailExpDown_Min; // 0x8c
	int32_t LevelUpFailExpDown_Max; // 0x90
	int32_t BonusRate; // 0x94
	int32_t BonusMultiple; // 0x98
	int32_t DevPoint; // 0x9c
	int32_t MaxSkillPoint; // 0xa0
	int32_t Reward_SkillPoint; // 0xa4
	int32_t ActivateTimeMinute; // 0xa8
};

struct FDynamicPropertyPath : FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FStrongPointTemplate : FTableRowBase {
	int32_t StrongPointId; // 0x8
	int32_t TabId; // 0xc
	int32_t NameStrId; // 0x10
	int32_t ThumbnailId; // 0x14
	int32_t StageId; // 0x18
	int32_t WinTargetID; // 0x1c
	int32_t RevivalId; // 0x20
	int32_t Reward_DominionId; // 0x24
	int32_t EnterWarpPortalId_Defense; // 0x28
	int32_t EnterWarpPortalId_Offense; // 0x2c
	int32_t Time_TakeOver; // 0x30
	int32_t Time_TakeOverReady; // 0x34
	int32_t GuildDevId; // 0x38
	int32_t GuildDevLevel; // 0x3c
};

struct FSectorGradeTemplate : FTableRowBase {
	int32_t SectorID; // 0x8
	float SectorRange; // 0xc
	FVector SectorLocation; // 0x10
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3a8
	FSlateSound SelectionChangeSlateSound; // 0x3c0
};

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
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

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FCinematicDialogueTemplate : FTableRowBase {
	int32_t CinematicDialogueID; // 0x8
	int32_t TalkNpcID; // 0xc
	bool DialogueEndCheck; // 0x10
	FString Dialogue_Male; // 0x18
	FString Dialogue_Male_CHT; // 0x28
	FString Dialogue_Male_CHS; // 0x38
	FString Dialogue_Male_JPN; // 0x48
	FString Dialogue_Male_ENG; // 0x58
	FString Dialogue_Male_THA; // 0x68
	FString Dialogue_Male_IND; // 0x78
	FString Dialogue_Male_VIE; // 0x88
	FString Dialogue_Male_GER; // 0x98
	FString Dialogue_Male_SPA; // 0xa8
	FString Dialogue_Male_POR; // 0xb8
	FString Dialogue_Male_RUS; // 0xc8
	FString Dialogue_Female; // 0xd8
	FString Dialogue_Female_CHT; // 0xe8
	FString Dialogue_Female_CHS; // 0xf8
	FString Dialogue_Female_JPN; // 0x108
	FString Dialogue_Female_ENG; // 0x118
	FString Dialogue_Female_THA; // 0x128
	FString Dialogue_Female_IND; // 0x138
	FString Dialogue_Female_VIE; // 0x148
	FString Dialogue_Female_GER; // 0x158
	FString Dialogue_Female_SPA; // 0x168
	FString Dialogue_Female_POR; // 0x178
	FString Dialogue_Female_RUS; // 0x188
	TArray<FCinematicActorAction> ActorAction; // 0x198
	int32_t CameraShake; // 0x1a8
	float CameraShakeDelay; // 0x1ac
	int32_t CameraPresetID; // 0x1b0
	TArray<FActorPlacement> CameraPlacement; // 0x1b8
	float CameraMoveSpeed; // 0x1c8
	float CameraFov; // 0x1cc
	float PlayTime; // 0x1d0
	float DialogueSkipDelay; // 0x1d4
	int32_t Sound_Male; // 0x1d8
	int32_t Sound_Female; // 0x1dc
	FString LevelSequencePath; // 0x1e0
	float DOF_FocalDistance; // 0x1f0
	float DOF_FarTransitionRegion; // 0x1f4
	float DOF_NearBlurSize; // 0x1f8
	float DOF_FarBlurSize; // 0x1fc
	float DOF_Scale; // 0x200
	FVector CoordinateOffset; // 0x204
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FPetSkillTemplate : FTableRowBase {
	int32_t PET_SKILLID; // 0x8
	int32_t SkillType; // 0xc
	int32_t IconID; // 0x10
	int32_t NameSId; // 0x14
	int32_t ExplainSID; // 0x18
	int32_t PETSkillCombatPoint; // 0x1c
	float UiDesValue01; // 0x20
	float AddValue01; // 0x24
	float UiDesValue02; // 0x28
	float AddValue02; // 0x2c
	float UiDesValue03; // 0x30
	float AddValue03; // 0x34
	float UiDesValue04; // 0x38
	float AddValue04; // 0x3c
	float UiDesValue05; // 0x40
	float AddValue05; // 0x44
	int32_t GreatBuildingAttributeType01; // 0x48
	int32_t GreatBuildingAttributeValue01; // 0x4c
	int32_t GreatBuildingAtttributeAddValue01; // 0x50
	int32_t GreatBuildingAttributeType02; // 0x54
	int32_t GreatBuildingAttributeValue02; // 0x58
	int32_t GreatBuildingAtttributeAddValue02; // 0x5c
	int32_t PassiveId01; // 0x60
	int32_t PassiveID02; // 0x64
};

struct FUIStringTemplate : FTableRowBase {
	int32_t StringID; // 0x8
	int32_t ChattingMessageType; // 0xc
	int32_t MessageType; // 0x10
	FString TextKr; // 0x18
	FString CHT; // 0x28
	FString CHS; // 0x38
	FString JPN; // 0x48
	FString ENG; // 0x58
	FString THA; // 0x68
	FString IND; // 0x78
	FString VIE; // 0x88
	FString GER; // 0x98
	FString SPA; // 0xa8
	FString POR; // 0xb8
	FString RUS; // 0xc8
	int32_t TextColorId; // 0xd8
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FPolygonGroupID : FElementID {
	int32_t IDValue; // 0x0
};

struct FServerChangeConditionTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t ChangeCondtionType; // 0xc
	int32_t ChangeCondtionGroupId; // 0x10
	int32_t ChangeCondtionGroupName; // 0x14
	int32_t ChangeCondtionGroupSorting; // 0x18
	int32_t ChangeCondtionType1; // 0x1c
	int32_t ChangeCondtionType1Value; // 0x20
	int32_t ChangeCondtionType2; // 0x24
	int32_t ChangeCondtionType2Value; // 0x28
	int32_t ContentsId; // 0x2c
};

struct FShopGoodsTemplate : FTableRowBase {
	int32_t GoodsGroupId; // 0x8
	int32_t GoodsId; // 0xc
	int32_t GoodsType; // 0x10
	int32_t GoodsCommodityId; // 0x14
	int32_t DisplayOnOff; // 0x18
	int32_t OnOFF; // 0x1c
	int32_t OrderNum; // 0x20
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FBrushLoading_Callback {
	TWeakObjectPtr<UObject> m_CallbackOwnerPtr; // 0x0
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FStageTemplate : FTableRowBase {
	int32_t StageId; // 0x8
	int32_t StageNameSID; // 0xc
	EStageType StageType; // 0x10
	int32_t CameraPreset; // 0x14
	int32_t ChannelId; // 0x18
	int32_t LoadingId; // 0x1c
	int32_t ThemeID; // 0x20
	FString GraphicLevel; // 0x28
	FString TriggerLevel; // 0x38
	float StandardPosition_X; // 0x48
	float StandardPosition_Y; // 0x4c
	EInitialEntrySequenceType SequenceType; // 0x50
	int32_t SequencePlayId; // 0x54
	int32_t Repeat; // 0x58
	int32_t StageRule; // 0x5c
	int32_t RevivalId; // 0x60
	int32_t KickRevivalId; // 0x64
	bool BoardOnOff; // 0x68
	int32_t SpawnDataID; // 0x6c
	int32_t KillZone; // 0x70
	int32_t StageLevel; // 0x74
	float BlockSize; // 0x78
	bool CanMeditation; // 0x7c
	int32_t GuildSanctumId; // 0x80
	int32_t PKGuardOff; // 0x84
	int32_t PKtendency; // 0x88
	int32_t Durability; // 0x8c
	int32_t DeathPenalty_Durability; // 0x90
	int32_t DeathPenalty_Injure; // 0x94
	int32_t DeathPenalty_Steal; // 0x98
	int32_t DeathPenalty_StealValue; // 0x9c
	int32_t DeathPenalty_EXP; // 0xa0
	int32_t DirectWarpNeedCostId; // 0xa4
	int32_t DirectWarpNeedCostCount; // 0xa8
	int32_t DirectWarpNeedItemId; // 0xac
	int32_t DirectWarpNeedItemUseId; // 0xb0
	FString MapMiniInfo; // 0xb8
	FString WayPoint; // 0xc8
	FString SafetyArea; // 0xd8
	FString SectorGrade; // 0xe8
	int32_t AIRWALKBAN; // 0xf8
	int32_t CombatPower; // 0xfc
	int32_t DirectWarpAble; // 0x100
	int32_t EnableLevel; // 0x104
	int32_t EnableQuest; // 0x108
	int32_t EnableCombatPower; // 0x10c
	int32_t EnableGreatBuildingID; // 0x110
	int32_t EnableBuildingStep; // 0x114
	int32_t GetWayType; // 0x118
	FVector GatheringZone; // 0x11c
	FVector MiningZone; // 0x128
	FVector SpiritZone; // 0x134
	FVector GetWayCoordinate; // 0x140
	int32_t DominionId_Inter; // 0x14c
	int32_t DominionId_Siege; // 0x150
	int32_t DominionId_StrongPoint; // 0x154
	bool IsInterServer; // 0x158
	int32_t ReturnWarpLocation; // 0x15c
	int32_t IconID; // 0x160
	int32_t SeverVisit; // 0x164
	int32_t SeverVisitRevivalId; // 0x168
	int32_t SeverVisitNoVitality; // 0x16c
};

struct FStdTemplate : FTableRowBase {
	int32_t STDId; // 0x8
	int32_t Level; // 0xc
	int32_t Class; // 0x10
	int32_t PhysicalDefensePer; // 0x14
	int32_t MagicDefensePer; // 0x18
	int32_t AccuracyPer; // 0x1c
	int32_t DodgePer; // 0x20
	int32_t CriticalPer; // 0x24
	int32_t AvoidCriticalPer; // 0x28
	int32_t CriticalOutcomePer; // 0x2c
	int32_t FiredefensePer; // 0x30
	int32_t FrozendefensePer; // 0x34
	int32_t LightningdefensePer; // 0x38
	int32_t PoisondefensePer; // 0x3c
	int32_t HolydefensePer; // 0x40
	int32_t DarkdefensePer; // 0x44
	int32_t AtkUndeadDamagePer; // 0x48
	int32_t AtkDemonsDamagePer; // 0x4c
	int32_t AtkCreatureDamagePer; // 0x50
	int32_t AtkHumanDamagePer; // 0x54
	int32_t AtkPVPDamagePer; // 0x58
	int32_t DefPVPDamagePer; // 0x5c
	int32_t ReducePhysicalDefPer; // 0x60
	int32_t ReduceMagicDefPer; // 0x64
	int32_t LuckPer; // 0x68
	int32_t ManaCost; // 0x6c
	int32_t RecommendCombatpoint; // 0x70
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x60
};

struct FCameraTrackingFocusSettings {
	AActor* ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FItemSmeltingTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t MainType; // 0x10
	int32_t SubType; // 0x14
	int32_t SmetingCount; // 0x18
	int32_t SmetingSuccessProbability; // 0x1c
	int32_t AddSmeltingSuccessProbability; // 0x20
	int32_t MaterialItemUseId01; // 0x24
	int32_t MaterialItemCount01; // 0x28
	int32_t MaterialItemUseId02; // 0x2c
	int32_t MaterialItemCount02; // 0x30
	int32_t MaterialItemUseId03; // 0x34
	int32_t MaterialItemCount03; // 0x38
	int32_t MaterialItemUseId04; // 0x3c
	int32_t MaterialItemCount04; // 0x40
	int32_t BreakProbability; // 0x44
	int32_t SmeltingOneDownProbability; // 0x48
	int32_t CollectableKeepProbability; // 0x4c
	int32_t CollectableBreakProbability; // 0x50
	int32_t MaterialCostValueType01; // 0x54
	int32_t MaterialCostValue01; // 0x58
	int32_t MaterialCostValueType02; // 0x5c
	int32_t MaterialCostValue02; // 0x60
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
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

struct FTestMovieSceneEvalTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FEffectWidgetTemplate : FTableRowBase {
	int32_t EffectId; // 0x8
	FString Filename; // 0x10
	FString AniName; // 0x20
	float EWScaleX; // 0x30
	float EWScaleY; // 0x34
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

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FGhostTrailData {
	FName ComponentTag; // 0x0
	float m_fSpawnDelay; // 0x8
	float m_fLifeTime; // 0xc
	UMaterialInstance* m_pMaterial; // 0x10
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48
};

struct FMovieSceneEvaluationTrackSegments {
	TArray<int32_t> SegmentIdentifierToIndex; // 0x0
	TArray<FMovieSceneSegment> SortedSegments; // 0x10
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FFirebaseConfigKeyValueVariant {
	FString Key; // 0x0
	UFirebaseVariant* Value; // 0x10
};

struct FShopListTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t ShopId; // 0xc
	int32_t Type; // 0x10
	int32_t GoodsSelect1; // 0x14
	int32_t GoodsSelect2; // 0x18
	int32_t GoodsSelect3; // 0x1c
	int32_t GoodsGroupId1; // 0x20
	int32_t GoodsGroupId2; // 0x24
	int32_t GoodsGroupId3; // 0x28
	int32_t GoodsCount1; // 0x2c
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FWeightedBlendable {
	float Weight; // 0x0
	UObject* Object; // 0x8
};

struct FComboTemplate : FTableRowBase {
	int32_t ComboId; // 0x8
	int32_t ComboMin; // 0xc
	int32_t ComboMax; // 0x10
	int32_t BuffLink; // 0x14
	FString FontColor; // 0x18
};

struct FMovieSceneEasingSettings {
	int32_t AutoEaseInDuration; // 0x0
	int32_t AutoEaseOutDuration; // 0x4
	TScriptInterface<Class> EaseIn; // 0x8
	bool bManualEaseIn; // 0x18
	int32_t ManualEaseInDuration; // 0x1c
	TScriptInterface<Class> EaseOut; // 0x20
	bool bManualEaseOut; // 0x30
	int32_t ManualEaseOutDuration; // 0x34
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

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FSchedulerCycleTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t ScheduleType; // 0xc
	int32_t ScheduleHour; // 0x10
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FSkillSpecialAbilityTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t SkillId; // 0xc
	int32_t SkillMinLv; // 0x10
	int32_t SkillMaxLv; // 0x14
	int32_t TriggerSkillAttackId; // 0x18
	TArray<int32_t> Passive; // 0x20
	TArray<int32_t> PassivePartyBuffID; // 0x30
	TArray<int32_t> PassivePartyBuffLv; // 0x40
	TArray<int32_t> PartyPassive; // 0x50
	TArray<int32_t> SkillOnlyPassive; // 0x60
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
	TMap<FMovieSceneSequenceID, uint32_t> SubTemplateSerialNumbers; // 0x20
};

struct FCustomizingCategoryTemplate : FTableRowBase {
	int32_t CategoryID; // 0x8
	int32_t BelongedCategory; // 0xc
	int32_t UncheckedIconID; // 0x10
	int32_t CheckedIconID; // 0x14
	int32_t NameStringID; // 0x18
	int32_t CameraArrayNumber; // 0x1c
	int32_t CharacterRotation; // 0x20
	int32_t ContentsType; // 0x24
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x58
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

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FWidgetComponentInstanceData : FSceneComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
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

struct FLightmassPointLightSettings : FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FQuestTemplate : FTableRowBase {
	int32_t QuestId; // 0x8
	int32_t QuestLevel; // 0xc
	int32_t StepNo; // 0x10
	FString StartScript; // 0x18
	FString EndScript; // 0x28
	QuestMissionType MissionType; // 0x38
	int32_t AutoBattleType; // 0x3c
	int32_t PcTargetSearchDist; // 0x40
	int32_t CoordinateRange; // 0x44
	int32_t QuestTitleSID; // 0x48
	int32_t QuestMissionSID; // 0x4c
	int32_t MissionTarget; // 0x50
	int32_t Parameter1; // 0x54
	int32_t Parameter2; // 0x58
	TArray<int32_t> ParameterClass; // 0x60
	bool CountIndication; // 0x70
	int32_t MissionStageId; // 0x74
	TArray<FVector> ViaCoordinate; // 0x78
	FVector MissionCoordinate; // 0x88
	FVector PhaseExitCoordinate; // 0x94
	float QuestTrackerType; // 0xa0
	int32_t SoundId; // 0xa4
	float SoundRange; // 0xa8
	int32_t EffectId; // 0xac
	int32_t IconID; // 0xb0
	int32_t RewardExp; // 0xb4
	int32_t RewardGOLD; // 0xb8
	int32_t RewardCostId; // 0xbc
	int32_t RewardCostCount; // 0xc0
	TArray<int32_t> RewardItem01Id; // 0xc8
	int32_t RewardItem01Count; // 0xd8
	TArray<int32_t> RewardItem02Id; // 0xe0
	int32_t RewardItem02Count; // 0xf0
	TArray<FSmallDialog> CountSmallTalk; // 0xf8
	int32_t TutorialGroupId; // 0x108
	int32_t ContentOpenPage; // 0x10c
	int32_t StringMESSAGE; // 0x110
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingId; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
};

struct FCommandMarkTemplate : FTableRowBase {
	int32_t MarkId; // 0x8
	ECommandMarkType CommandMarkType; // 0xc
	int32_t MiniMapIconId; // 0x10
	int32_t IconID; // 0x14
	int32_t NameSId; // 0x18
	int32_t EffectId; // 0x1c
};

struct FStringErrorTemplate : FTableRowBase {
	int32_t ErrorId; // 0x8
	int32_t ErrorType; // 0xc
	int32_t LinkStringId; // 0x10
	FString LinkStringDev; // 0x18
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
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

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FItemOptionGradeTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ItemGrade; // 0xc
	int32_t ItemTier; // 0x10
	int32_t NeedCost01Id; // 0x14
	int32_t NeedCost01Count; // 0x18
	int32_t NeedCost02Id; // 0x1c
	int32_t NeedCost02Count; // 0x20
	int32_t NeedItemUseID01; // 0x24
	int32_t NeedItemCount01; // 0x28
};

struct FMovieSceneCameraShakeSectionData {
	UCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraAnimPlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FPreviewAttachedObjectPair {
	UObject* AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
};

struct FItemUnsealingTemplate : FTableRowBase {
	int32_t UnsealingType; // 0x8
	int32_t UnsealingTime; // 0xc
	int32_t SupportDecreaseTime; // 0x10
	int32_t NeedCostId; // 0x14
	int32_t NeedCostValue; // 0x18
};

struct FLabyrinthTemplate : FTableRowBase {
	int32_t LabyrinthId; // 0x8
	int32_t StageId; // 0xc
	int32_t LevelValue; // 0x10
	int32_t PortalId; // 0x14
	int32_t StageThumbnail; // 0x18
	int32_t StageBoss; // 0x1c
	int32_t StageBossThumbnail; // 0x20
	int32_t StageDesc; // 0x24
	int32_t DirectWarpType; // 0x28
	int32_t ArrivalLocation; // 0x2c
	int32_t RecommendedPerson; // 0x30
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

struct FNpcItemMakeListTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t NpcItemMakeListId; // 0xc
	int32_t ItemMakeId; // 0x10
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FAGAudioAttributes {
	FAGAudioAttributesFlags Flags; // 0x0
	AudioAttributesUsage Usage; // 0x3
	AudioAttributesContentType ContentType; // 0x4
};

struct FBrushLoading {
	FString m_strPath; // 0x0
	bool m_bLoading; // 0x10
	TArray<FBrushLoading_Callback> m_arCallback; // 0x18
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<Class> CurveSource; // 0x30
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
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

struct FFacebookShareLinkContent {
	FString ContentURL; // 0x0
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FEmoteSlotInfo {
	int32_t EmoteID; // 0x0
	int32_t EmoteNameID; // 0x4
	FText EmoteName; // 0x8
	FString EmoteIconPath; // 0x20
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
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

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FGreatBuildingTemplate : FTableRowBase {
	int32_t GreatBuildingId; // 0x8
	int32_t BuildingMaxStep; // 0xc
	int32_t BuildingIcon; // 0x10
	int32_t BuildingName; // 0x14
	int32_t OpenConditionType01; // 0x18
	int32_t OpenConditionValue01; // 0x1c
	int32_t OpenConditionNum01; // 0x20
	int32_t OpenConditionText01; // 0x24
	int32_t OpenConditionContentsId01; // 0x28
	int32_t OpenConditionType02; // 0x2c
	int32_t OpenConditionValue02; // 0x30
	int32_t OpenConditionNum02; // 0x34
	int32_t OpenConditionText02; // 0x38
	int32_t OpenConditionContentsId02; // 0x3c
	int32_t OpenConditionType03; // 0x40
	int32_t OpenConditionValue03; // 0x44
	int32_t OpenConditionNum03; // 0x48
	int32_t OpenConditionText03; // 0x4c
	int32_t OpenConditionContentsId03; // 0x50
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FGuildDonationTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t DonationType; // 0x10
	int32_t DonationId; // 0x14
	int32_t DonationValue; // 0x18
	int32_t DonationCount; // 0x1c
	int32_t ResetCostId; // 0x20
	int32_t ResetCostValue; // 0x24
	int32_t ResetCount; // 0x28
	int32_t RewardGuildExp; // 0x2c
	int32_t RewardType01; // 0x30
	int32_t RewardId01; // 0x34
	int32_t RewardValue01; // 0x38
	int32_t RewardType02; // 0x3c
	int32_t RewardId02; // 0x40
	int32_t RewardValue02; // 0x44
};

struct FRankingCategoryTemplate : FTableRowBase {
	int32_t CategoryID; // 0x8
	int32_t HigherCategoryId; // 0xc
	int32_t CategoryNameStrId; // 0x10
	int32_t CategoryPointStrId; // 0x14
	int32_t CategoryIconId; // 0x18
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

struct FAnimNode_ResetRoot : FAnimNode_SkeletalControlBase {
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

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FMaterialFunctionInfo {
	FGuid StateID; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
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

struct FBrushObject {
	UObject* m_pObjImage; // 0x0
	FVector2D m_vImageSize; // 0x8
	FLinearColor m_ColorOpacity; // 0x10
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
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

struct FSkeletalMeshClothBuildParams {
	TWeakObjectPtr<UClothingAssetBase> TargetAsset; // 0x0
	int32_t TargetLod; // 0x8
	bool bRemapParameters; // 0xc
	FString AssetName; // 0x10
	int32_t LODIndex; // 0x20
	int32_t SourceSection; // 0x24
	bool bRemoveFromMesh; // 0x28
	UPhysicsAsset* PhysicsAsset; // 0x30
};

struct FFameCategoryTemplate : FTableRowBase {
	int32_t CategoryID; // 0x8
	int32_t CategoryType; // 0xc
	int32_t CategoryNameStrId; // 0x10
	int32_t CategoryIconId; // 0x14
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FRevivalTemplate : FTableRowBase {
	int32_t RevivalId; // 0x8
	int32_t StageId; // 0xc
	TArray<int32_t> RevivalType; // 0x10
	int32_t AutoRevivalDelayTime; // 0x20
	int32_t SafetyWarpId01; // 0x24
	int32_t SafetyWarpId02; // 0x28
	int32_t SafetyWarpId03; // 0x2c
	int32_t SafetyWarpId04; // 0x30
	int32_t SafetyWarpId05; // 0x34
	int32_t SafetyWarpRadius; // 0x38
	int32_t SafetyDelayTime; // 0x3c
	int32_t SafetyResetTime; // 0x40
	int32_t SafetyMaxDelayIncreaseCount; // 0x44
	int32_t SafetyIncreaseDelayValue; // 0x48
	int32_t ImmediateCostType; // 0x4c
	int32_t ImmediateCostValue; // 0x50
	int32_t ImmediateMaxCostIncreaseCount; // 0x54
	int32_t ImmediateIncreaseCostValue; // 0x58
	int32_t GuildWarRevivalId; // 0x5c
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
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
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FQuickSlotTemplate : FTableRowBase {
	int32_t SubType; // 0x8
	int32_t AutoUse; // 0xc
	int32_t AutoUseType; // 0x10
	int32_t AutoUseActive; // 0x14
	int32_t ItemAddUp; // 0x18
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
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

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FCharacterForceLevelTemplate : FTableRowBase {
	int32_t ForceLevelID; // 0x8
	int32_t ForcePanelID; // 0xc
	int32_t ForcePanelLevel; // 0x10
	int32_t ForceReward_Attribute01Type; // 0x14
	int32_t ForceReward_Attribute01Value; // 0x18
	int32_t ForceReward_Attribute02Type; // 0x1c
	int32_t ForceReward_Attribute02Value; // 0x20
	int32_t ForceReward_Attribute03Type; // 0x24
	int32_t ForceReward_Attribute03Value; // 0x28
	int32_t ForceReward_Attribute04Type; // 0x2c
	int32_t ForceReward_Attribute04Value; // 0x30
	int32_t ForceReflowTimeMinute; // 0x34
	int32_t HardTraining_NeedLevel; // 0x38
	int32_t HardTraining_NeedCostId; // 0x3c
	int32_t HardTraining_NeedCostCount; // 0x40
	int32_t HardTraining_NeedUseId01; // 0x44
	int32_t HardTraining_NeedItem01Count; // 0x48
	int32_t HardTraining_NeedUseId02; // 0x4c
	int32_t HardTraining_NeedItem02Count; // 0x50
	int32_t HardTraining_NeedUseId03; // 0x54
	int32_t HardTraining_NeedItem03Count; // 0x58
	int32_t HardTraining_NeedUseId04; // 0x5c
	int32_t HardTraining_NeedItem04Count; // 0x60
	int32_t HardTraining_Time; // 0x64
	int32_t HardTraining_Pass_NeedUseId; // 0x68
	int32_t HardTraining_Pass_NeedItem_UseTime; // 0x6c
	int32_t HardTraining_Succecs_ForceLevel; // 0x70
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xb0
	int32_t VisibilityId; // 0xe0
	UPrimitiveComponent* LODParent; // 0xe8
};

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
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

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	AActor* ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FPetDeckTemplate : FTableRowBase {
	int32_t DeckSlotNum; // 0x8
	int32_t OpenConditionType; // 0xc
	int32_t OpenConditionValue; // 0x10
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FNpcGenTemplate : FTableRowBase {
	int32_t TargetID; // 0x8
	int32_t SpawnerID; // 0xc
	int32_t SpawnObjectType; // 0x10
	FString Location; // 0x18
	int32_t Rotation; // 0x28
	TArray<int32_t> Value1; // 0x30
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
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

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FCostumePaletteTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t PaletteGroupId; // 0xc
	int32_t Number; // 0x10
	int32_t Color01Id; // 0x14
	int32_t Color02Id; // 0x18
};

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FWidgetPool {
	EWidgetID m_eWidgetID; // 0x0
	int32_t m_iInitCount; // 0x10
	TArray<TWeakObjectPtr<UWidgetBase>> m_arPool; // 0x18
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
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

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FSoundModulation {
	TArray<USoundModulationPluginSourceSettingsBase*> Settings; // 0x0
};

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventSectionData EventData; // 0x38
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FSoftClassPath : FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FWarpLocationTemplate : FTableRowBase {
	int32_t WarpId; // 0x8
	int32_t Arrival_StageId; // 0xc
	FVector Coordinate; // 0x10
	float RotationYaw; // 0x1c
	float CameraYaw; // 0x20
	float CameraPitch; // 0x24
	float CameraDistance; // 0x28
};

struct FMovieSceneCameraCutSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneObjectBindingID CameraBindingID; // 0x20
	FTransform CutTransform; // 0x40
	bool bHasCutTransform; // 0x70
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FGuildHistoryTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t HistoryId; // 0xc
	int32_t HistoryGroup; // 0x10
	int32_t StringID; // 0x14
};

struct FMapUIWorldTemplate : FTableRowBase {
	int32_t AreaId; // 0x8
	int32_t AreaStringId; // 0xc
	int32_t AreaIconId; // 0x10
	FVector2D AreaCoordinate; // 0x14
	FString AreaMapResource; // 0x20
	int32_t MiniGroupId; // 0x30
	int32_t TouchPosition_X; // 0x34
	int32_t TouchPosition_Y; // 0x38
	int32_t TouchScale_X; // 0x3c
	int32_t TouchScale_Y; // 0x40
	int32_t MonLevelMin; // 0x44
	int32_t MonLevelMax; // 0x48
	int32_t PrevAreaId; // 0x4c
	int32_t NextAreaId; // 0x50
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FMapUINaviTemplate : FTableRowBase {
	FVector StartPoint; // 0x8
	int32_t TileSize; // 0x14
	int32_t TileLineCount; // 0x18
	TArray<bool> NaviTileArray; // 0x20
};

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FIconTemplate : FTableRowBase {
	int32_t IconID; // 0x8
	FString Path; // 0x10
	bool IsMultiLanguage; // 0x20
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FSoundModulationParameter {
	FName Control; // 0x0
	float Value; // 0x8
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FMovieSceneAdditiveCameraAnimationTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FMovieScene2DTransformSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Translation[0x2]; // 0x48
	FMovieSceneFloatChannel Rotation; // 0x188
	FMovieSceneFloatChannel Scale[0x2]; // 0x228
	FMovieSceneFloatChannel Shear[0x2]; // 0x368
	EMovieSceneBlendType BlendType; // 0x4a8
	FMovieScene2DTransformMask Mask; // 0x4ac
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xa8
	FVector EndPos; // 0xb4
	FVector StartTangent; // 0xc0
	FVector EndTangent; // 0xcc
};

struct FEndPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
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

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FQuestMissionTemplate : FTableRowBase {
	int32_t MissionId; // 0x8
	int32_t MissionTapMenu; // 0xc
	int32_t MissionShowType; // 0x10
	int32_t MissionCombatPower; // 0x14
	int32_t MissionOpenCondition; // 0x18
	int32_t MissionOpenConditionValue; // 0x1c
	int32_t StageGroup; // 0x20
	int32_t MissionGetStageId; // 0x24
	int32_t MissionTarget; // 0x28
	int32_t MissionRepeat; // 0x2c
	int32_t MissionRepeatCount; // 0x30
	int32_t MissionStageId; // 0x34
	int32_t MissionIconType; // 0x38
	int32_t PartyMember; // 0x3c
	int32_t StepNo; // 0x40
	QuestMissionType MissionType; // 0x44
	QuestHelperType HelperType; // 0x48
	int32_t MapNpcShowType; // 0x4c
	int32_t AutoBattleType; // 0x50
	int32_t PcTargetSearchDist; // 0x54
	int32_t CoordinateRange; // 0x58
	int32_t Parameter1; // 0x5c
	int32_t Parameter2; // 0x60
	int32_t ContentOpenPage; // 0x64
	int32_t MissionTitleSID; // 0x68
	int32_t MissionObjectiveSID; // 0x6c
	int32_t StringMESSAGE; // 0x70
	TArray<FSmallDialog> CountSmallTalk; // 0x78
	int32_t CountIndication; // 0x88
	TArray<FVector> ViaCoordinate; // 0x90
	FVector MissionCoordinate; // 0xa0
	int32_t CoordinateShowType; // 0xac
	int32_t EffectId; // 0xb0
	int32_t RewardExp; // 0xb4
	int32_t RewardGOLD; // 0xb8
	int32_t RewardGoodsType; // 0xbc
	int32_t RewardGoodsCount; // 0xc0
	TArray<int32_t> RewardItemId01; // 0xc8
	int32_t RewardItemCount01; // 0xd8
	TArray<int32_t> RewardItemId02; // 0xe0
	int32_t RewardItemCount02; // 0xf0
	int32_t TestValue; // 0xf4
	int32_t AutomaticAction; // 0xf8
	int32_t IconKindType; // 0xfc
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	DelegateProperty CustomDelegate; // 0x14
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x48
	EMovieSceneBlendType BlendType; // 0xd8
};

struct FClothConstraintSetup {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
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

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FCustomizingTypeTemplate : FTableRowBase {
	int32_t UniqueId; // 0x8
	int32_t ClassID; // 0xc
	int32_t CustomizingType; // 0x10
	int32_t ValueType; // 0x14
	FString String; // 0x18
	TArray<int32_t> Value; // 0x28
	int32_t ValueInversion; // 0x38
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

struct FAnimNode_AimOffsetLookAt : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0x140
	int32_t LODThreshold; // 0x150
	FName SourceSocketName; // 0x154
	FName PivotSocketName; // 0x15c
	FVector LookAtLocation; // 0x164
	FVector SocketAxis; // 0x170
	float Alpha; // 0x17c
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FCharacterPartsDefinesTemplate : FTableRowBase {
	TArray<int32_t> PartsIndex; // 0x8
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FAutoPathData {
	TArray<bool> AirwalkPoints; // 0x0
	TArray<FVector> PathPoints; // 0x10
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

struct FClientDataTablesTemplate : FTableRowBase {
	FString DataTableJsonFilePath; // 0x8
	FString DataTableAssetFolderPath; // 0x18
	FString DataTableRowStruct; // 0x28
};

struct FGuildWarCostumeTemplate : FTableRowBase {
	int32_t GuildWarCostumeId; // 0x8
	int32_t GuildWarCostumeGroupId; // 0xc
	int32_t Class; // 0x10
	int32_t PartsType; // 0x14
	int32_t ResourceMesh01Id; // 0x18
	int32_t ResourceMesh02Id; // 0x1c
	int32_t DyeingChannel01; // 0x20
	int32_t DyeingChannel02; // 0x24
	int32_t DyeingColor01Id_Ally; // 0x28
	int32_t DyeingColor02Id_Ally; // 0x2c
	int32_t DyeingColor01Id_Enemy; // 0x30
	int32_t DyeingColor02Id_Enemy; // 0x34
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FTradeMenuTemplate : FTableRowBase {
	int32_t TradeId; // 0x8
	int32_t TradeMainGroup; // 0xc
	int32_t TradeMainGroupString; // 0x10
	int32_t TradeSubList; // 0x14
	int32_t TradeSubListString; // 0x18
	int32_t FilterSmelting; // 0x1c
	int32_t FilterClass; // 0x20
	int32_t FilterGrade; // 0x24
	TArray<FTradeItemType> ItemType; // 0x28
};

struct FCameraPresetTemplate : FTableRowBase {
	float Camera1Name_StringID; // 0x8
	float Caemra2Name_StringID; // 0xc
	float Caemra3Name_StringID; // 0x10
	float Common_InterpSpeedReachTime; // 0x14
	float Common_InterpRotationSpeed; // 0x18
	float CollisionPullSpeed; // 0x1c
	float CollisionReturnSpeed; // 0x20
	float AutoCamera_ResetTime; // 0x24
	float AutoCamera_InterpSpeed; // 0x28
	float AutoCamera_DefaultHeight; // 0x2c
	float AutoCamera_DefaultDistance; // 0x30
	float AutoCamera_MinDistance; // 0x34
	float AutoCamera_MaxDistance; // 0x38
	float AutoCamera_DefaultPitch; // 0x3c
	float AutoCamera_MinPitchAngle; // 0x40
	float AutoCamera_MaxPitchAngle; // 0x44
	float AutoCamera_CameraFOV; // 0x48
	float AutoCamera_RotationSensitivity; // 0x4c
	float AutoCamera_ZoomSensitivity; // 0x50
	float NonBattleKeyInput_Delay; // 0x54
	float NonBattleKeyInput_InterpSpeed; // 0x58
	float NonBattleKeyInput_Pitch; // 0x5c
	float NonBattleKeyInput_Height; // 0x60
	float NonBattleKeyInput_Distance; // 0x64
	float AutoMoving_Delay; // 0x68
	float AutoMoving_InterpSpeed; // 0x6c
	float AutoMoving_Pitch; // 0x70
	float AutoMoving_Distance; // 0x74
	float AutoMoving_Height; // 0x78
	float RideAutoMovingFirst_Delay; // 0x7c
	float RideAutoMovingSecond_Delay; // 0x80
	float RideAutoMovingFirst_Distance; // 0x84
	float RideAutoMovingSecond_Distance; // 0x88
	float RideAutoMoving_InterpSpeed; // 0x8c
	float RideAutoMoving_Pitch; // 0x90
	float RideAutoMoving_SideAngle; // 0x94
	float RideAutoMoving_SideDistance; // 0x98
	float RideAutoMoving_Height; // 0x9c
	float ManualBattle_Delay; // 0xa0
	float ManualBattle_InterpSpeed; // 0xa4
	float ManualBattle_Pitch; // 0xa8
	float ManualBattle_Height; // 0xac
	float AutoBattle_Delay; // 0xb0
	float AutoBattle_InterpSpeed; // 0xb4
	float AutoBattle_Pitch; // 0xb8
	float AutoBattle_Distance; // 0xbc
	float AutoBattle_SideAngle; // 0xc0
	float AutoBattle_SlowSpeedDegree; // 0xc4
	float AutoBattle_Height; // 0xc8
	float QuarterView_ResetTime; // 0xcc
	float QuarterView_InterpSpeed; // 0xd0
	float QuarterView_PitchInterpSpeed; // 0xd4
	float QuarterView_DefaultDistance; // 0xd8
	float QuarterView_MinDistance; // 0xdc
	float QuarterView_MaxDistance; // 0xe0
	float QuarterView_DefaultHeight; // 0xe4
	float QuarterView_MinPitch; // 0xe8
	float QuarterView_MaxPitch; // 0xec
	float QuarterView_DefaultPitch; // 0xf0
	float QuarterView_RotationSensitivity; // 0xf4
	float QuarterView_ZoomSensitivity; // 0xf8
	float QuarterView_CameraFOV; // 0xfc
	float ManualMode_InterpSpeed; // 0x100
	float ManualMode_DefaultDistance; // 0x104
	float ManualMode_MinDistance; // 0x108
	float ManualMode_MaxDistance; // 0x10c
	float ManualMode_DefaultHeight; // 0x110
	float ManualMode_DefaultPitch; // 0x114
	float ManualMode_MinPitchAngle; // 0x118
	float ManualMode_MaxPitchAngle; // 0x11c
	float ManualMode_RotationSensitivity; // 0x120
	float ManualMode_ZoomSensitivity; // 0x124
	float ManualMode_CameraFOV; // 0x128
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FPaperSpriteAtlasSlot {
	UPaperSprite* SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
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

struct FItemSmeltingEffectTemplate : FTableRowBase {
	int32_t SmeltingEffectType; // 0x8
	int32_t SmeltingCount01; // 0xc
	int32_t EffectId01; // 0x10
	int32_t SmeltingCount02; // 0x14
	int32_t EffectId02; // 0x18
	int32_t SmeltingCount03; // 0x1c
	int32_t EffectId03; // 0x20
	int32_t SmeltingCount04; // 0x24
	int32_t EffectId04; // 0x28
	int32_t SmeltingCount05; // 0x2c
	int32_t EffectId05; // 0x30
	int32_t SmeltingCount06; // 0x34
	int32_t EffectId06; // 0x38
};

struct FTriggerScriptData {
	ETriggerScriptType ScriptType; // 0x0
	FString ScriptValue; // 0x8
};

struct FSequenceDialogueTemplate : FTableRowBase {
	FString DialogueText; // 0x8
	FString DialogueText_CHT; // 0x18
	FString DialogueText_CHS; // 0x28
	FString DialogueText_JPN; // 0x38
	FString DialogueText_ENG; // 0x48
	FString DialogueText_THA; // 0x58
	FString DialogueText_IND; // 0x68
	FString DialogueText_VIE; // 0x78
	FString DialogueText_GER; // 0x88
	FString DialogueText_SPA; // 0x98
	FString DialogueText_POR; // 0xa8
	FString DialogueText_RUS; // 0xb8
	EDialoguePostion DialogueType; // 0xc8
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FIAPUserRequestData {
	FString ProductId; // 0x0
	FString ItemName; // 0x10
	FString TotalPrice; // 0x20
	int32_t ItemType; // 0x30
	uint32_t ShopGoodsVersion; // 0x34
	int32_t ShopGoodsID; // 0x38
};

struct FStatusTemplate : FTableRowBase {
	int32_t StatusId; // 0x8
	int32_t Status_CalculateID; // 0xc
	int32_t AddStatusType; // 0x10
	int32_t AddStatusID; // 0x14
	int32_t AddStatusValue; // 0x18
	int32_t RateAddStatusID; // 0x1c
	int32_t StringID; // 0x20
	int32_t UpgradeStringId; // 0x24
	int32_t IconBlood; // 0x28
	int32_t IconMasteryOff; // 0x2c
	int32_t IconMasteryOn; // 0x30
	int32_t InfoViewType; // 0x34
	int32_t InfoViewOrder; // 0x38
	TArray<int32_t> InfoViewRate; // 0x40
	TArray<int32_t> InfoFocus; // 0x50
	TArray<int32_t> StatusInfoId; // 0x60
	int32_t IconStatusInfo; // 0x70
	int32_t ValueFormat; // 0x74
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
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
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FGuildDominionTemplate : FTableRowBase {
	int32_t DominionId; // 0x8
	int32_t Type; // 0xc
	int32_t Grade; // 0x10
	int32_t NameId; // 0x18
	int32_t ImageId; // 0x1c
	int32_t TitleNameId; // 0x20
	int32_t TitleMedalIconId; // 0x24
	int32_t MemberGrade1_NameId; // 0x28
	int32_t MemberGrade2_NameId; // 0x2c
	int32_t MemberGrade3_NameId; // 0x30
	int32_t MemberGrade4_NameId; // 0x34
	int32_t MemberGrade5_NameId; // 0x38
	int32_t MemberGrade6_NameId; // 0x3c
	int32_t IsOccupiable; // 0x40
	int32_t OrderNo; // 0x44
	int32_t DominionGoldTaxRate; // 0x48
	int32_t DominionDefaultTaxRate; // 0x4c
	int32_t DominionOccupationId; // 0x50
	bool IsShow; // 0x54
	int32_t GuildShopUnlockIconId; // 0x58
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

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> metadata; // 0x20
};

struct FCullDistanceVolumePreset {
	TArray<FCullDistanceSizePair> CullDistanceVolumePreset; // 0x0
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0xe8
	char bHasOverrideSources : 1; // 0xe8
	char bIsAdditiveVelocityApplied : 1; // 0xe8
	FRootMotionSourceSettings LastAccumulatedSettings; // 0xe9
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0xec
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FRange_FloatCurve {
	FUIParticleFloatCurve Min; // 0x0
	FUIParticleFloatCurve Max; // 0x88
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FBossTemplate : FRewardCommonTemplate {
	int32_t WorldBossId; // 0x98
	int32_t GenAlarmTitleId; // 0x9c
	int32_t GenAlarmMessageId; // 0xa0
	int32_t BossThumbnail; // 0xa4
	int32_t MonsterId; // 0xa8
	int32_t StageId; // 0xac
	TArray<int32_t> GenTime; // 0xb0
	int32_t PositionLocation; // 0xc0
	int32_t ConditionLevel; // 0xc4
	int32_t ConditionReqCombatPoint; // 0xc8
	int32_t NeedUseItemId; // 0xcc
	int32_t NeedItemCount; // 0xd0
	int32_t NeedCostId; // 0xd4
	int32_t NeedCostCount; // 0xd8
	int32_t NeedEnterType; // 0xdc
	int32_t NeedEnterTypeSub; // 0xe0
	int32_t NeedEnterCount; // 0xe4
	int32_t RecommendedCombatPoint; // 0xe8
	int32_t PCNum; // 0xec
	TArray<int32_t> ContributeReward; // 0xf0
	int32_t BaseReward; // 0x100
	int32_t FailReward; // 0x104
	int32_t OccupationID; // 0x108
};

struct FExposedValueCopyRecord {
	FName SourcePropertyName; // 0x0
	FName SourceSubPropertyName; // 0x8
	int32_t SourceArrayIndex; // 0x10
	bool bInstanceIsTarget; // 0x14
	EPostCopyOperation PostCopyOperation; // 0x15
	ECopyType CopyType; // 0x16
	UProperty* DestProperty; // 0x18
	int32_t DestArrayIndex; // 0x20
	int32_t Size; // 0x24
	UProperty* CachedSourceProperty; // 0x28
	UProperty* CachedSourceStructSubProperty; // 0x30
};

struct FWaypointTemplate : FTableRowBase {
	int32_t ActiveRadius; // 0x8
	bool DefaultState; // 0xc
	ECostType WaypointWarpNeedCostId; // 0xd
	int32_t WaypointWarpNeedCostCount; // 0x10
	int32_t WaypointWarpNeedItemId; // 0x14
	int32_t WaypointWarpNeedItemCount; // 0x18
	int32_t WayPointName; // 0x1c
	FVector Location; // 0x20
	FVector WarpCoordinate; // 0x2c
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x7f8
	FSlateBrush UpArrowImage; // 0x848
	FSlateBrush DownArrowImage; // 0x8d0
	FSlateBrush GlassImage; // 0x958
	FSlateBrush ClearImage; // 0x9e0
	FMargin ImagePadding; // 0xa68
	bool bLeftAlignButtons; // 0xa78
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x60
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FStringQuestTemplate : FTableRowBase {
	int32_t StringID; // 0x8
	int32_t BGTextType; // 0xc
	FString TextKr; // 0x10
	FString CHT; // 0x20
	FString CHS; // 0x30
	FString JPN; // 0x40
	FString ENG; // 0x50
	FString THA; // 0x60
	FString IND; // 0x70
	FString VIE; // 0x80
	FString GER; // 0x90
	FString SPA; // 0xa0
	FString POR; // 0xb0
	FString RUS; // 0xc0
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* sound; // 0x8
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
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

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
};

struct FMoneyGetWayTemplate : FTableRowBase {
	int32_t MoneyGetWayId; // 0x8
	int32_t GetMoneyId; // 0xc
	int32_t GetType; // 0x10
	int32_t GetValue1; // 0x14
	int32_t GetValue2; // 0x18
	FString GetValue3; // 0x20
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FItemMakeTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ItemMakeId; // 0xc
	int32_t ContentsId; // 0x10
	int32_t eventType; // 0x14
	int32_t ClassID; // 0x18
	int32_t TabHorizon; // 0x1c
	int32_t NPCGroupListID; // 0x20
	int32_t TabVertical; // 0x24
	int32_t ItemId; // 0x28
	int32_t PreItemId; // 0x2c
	int32_t MakeCount; // 0x30
	int32_t MakeType; // 0x34
	int32_t GetWayType; // 0x38
	int32_t SpecialMaterialType; // 0x3c
	int32_t SpecialMaterialItemMainType; // 0x40
	int32_t SpecialMaterialItemSubType; // 0x44
	int32_t SpecialMaterialItemItemTier; // 0x48
	int32_t SpecialMaterialItemItemGrade; // 0x4c
	int32_t SpecialMaterialItemSmeltingCount; // 0x50
	int32_t SpecialMaterialItemItemCount; // 0x54
	int32_t SpecialMaterialUse01Id; // 0x58
	int32_t SpecialMaterialItem01SmeltingCount; // 0x5c
	int32_t SpecialMaterialUse02Id; // 0x60
	int32_t SpecialMaterialItem02SmeltingCount; // 0x64
	int32_t SpecialMaterialUse03Id; // 0x68
	int32_t SpecialMaterialItem03SmeltingCount; // 0x6c
	int32_t SpecialMaterialUse04Id; // 0x70
	int32_t SpecialMaterialItem04SmeltingCount; // 0x74
	int32_t MaterialUse01Id; // 0x78
	int32_t MaterialItem01Count; // 0x7c
	int32_t MaterialUse02Id; // 0x80
	int32_t MaterialItem02Count; // 0x84
	int32_t MaterialUse03Id; // 0x88
	int32_t MaterialItem03Count; // 0x8c
	int32_t MaterialUse04Id; // 0x90
	int32_t MaterialItem04Count; // 0x94
	int32_t NeedCost01Id; // 0x98
	int32_t NeedCost01Count; // 0x9c
	int32_t NeedCost02Id; // 0xa0
	int32_t NeedCost02Count; // 0xa4
	int32_t SuccessProbability; // 0xa8
	int32_t FailResultType; // 0xac
	int32_t FailReplaceItemId; // 0xb0
	int32_t FailReplaceItemCount; // 0xb4
	int32_t FailMaterialCollectRate; // 0xb8
	int32_t LuckyProbability; // 0xbc
	int32_t LuckyBonusItemId; // 0xc0
	int32_t LuckyBonusCount; // 0xc4
	int32_t DarkSteelCheck; // 0xc8
	int32_t EventSpecialMaterialUse01Id; // 0xcc
	int32_t EventSpecialMaterialItem01SmeltingCount; // 0xd0
	int32_t EventSpecialMaterialUse02Id; // 0xd4
	int32_t EventSpecialMaterialItem02SmeltingCount; // 0xd8
	int32_t EventSpecialMaterialUse03Id; // 0xdc
	int32_t EventSpecialMaterialItem03SmeltingCount; // 0xe0
	int32_t EventSpecialMaterialUse04Id; // 0xe4
	int32_t EventSpecialMaterialItem04SmeltingCount; // 0xe8
	int32_t EventMaterialUse01Id; // 0xec
	int32_t EventMaterialItem01Count; // 0xf0
	int32_t EventMaterialUse02Id; // 0xf4
	int32_t EventMaterialItem02Count; // 0xf8
	int32_t EventMaterialUse03Id; // 0xfc
	int32_t EventMaterialItem03Count; // 0x100
	int32_t EventMaterialUse04Id; // 0x104
	int32_t EventMaterialItem04Count; // 0x108
	int32_t EventNeedCost01Id; // 0x10c
	int32_t EventNeedCost01Count; // 0x110
	int32_t EventNeedCost02Id; // 0x114
	int32_t EventNeedCost02Count; // 0x118
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
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

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	UCurveLinearColor* Curve; // 0x8
	UCurveLinearColorAtlas* Atlas; // 0x30
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FDungeonTicketTemplate : FTableRowBase {
	int32_t DungeonTicketId; // 0x8
	int32_t NameSId; // 0xc
	int32_t icon; // 0x10
	int32_t IconGrade; // 0x14
	int32_t IconSmall; // 0x18
	int32_t ResetTimeHour; // 0x1c
	int32_t ResetTimeMin; // 0x20
	int32_t DefaultMax; // 0x24
	int32_t LimitUserMax; // 0x28
	int32_t LimitSystemMax; // 0x2c
	int32_t ChargeGroup; // 0x30
	int32_t ToolTipID; // 0x34
	int32_t TicketRechargeMax; // 0x38
	int32_t TicketItemId; // 0x3c
	int32_t TicketAutoChargeLimitCount; // 0x40
};

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	TArray<char> TokenBytes; // 0x30
};

struct FUserEventSiegeeveTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t UserEventId; // 0xc
	int32_t RewardOwnerShip; // 0x10
	int32_t Reward_Item; // 0x14
	int32_t Reward_Item_Value; // 0x18
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

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
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

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FMovieSceneComponentTransformSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x20
};

struct FItemMaterialComposePointTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ItemUseId; // 0xc
	int32_t TypeString; // 0x10
	int32_t ComposeGradeString; // 0x14
	int32_t FailPointType; // 0x18
	int32_t FailPoint; // 0x1c
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink Pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FCostumeTemplate : FTableRowBase {
	int32_t CostumeID; // 0x8
	int32_t ClassID; // 0xc
	int32_t CostumeName; // 0x10
	int32_t CostumeIcon; // 0x14
	int32_t CostumeColor01Id; // 0x18
	int32_t CostumeColor02Id; // 0x1c
	int32_t CostumePartsType; // 0x20
	int32_t ResourceMesh01Id; // 0x24
	int32_t ResourceMesh02Id; // 0x28
	int32_t SmeltingEffectId; // 0x2c
	int32_t Attribute01Type; // 0x30
	int32_t Attribute01Value; // 0x34
	int32_t Attribute02Type; // 0x38
	int32_t Attribute02Value; // 0x3c
	int32_t PurchaseAbleLevel; // 0x40
	int32_t PurchaseMoneyType; // 0x44
	int32_t PurchaseMoneyId; // 0x48
	int32_t PurchaseMoneyValue; // 0x4c
	int32_t PurchaseTagIcon; // 0x50
	FString DiscountOpenTime; // 0x58
	FString DiscountCloseTime; // 0x68
	int32_t DiscountPercnetValue; // 0x78
	int32_t DiscountMoneyValue; // 0x7c
	int32_t PaletteGroupType; // 0x80
	int32_t MainPaletteId; // 0x84
	int32_t SubPaletteId; // 0x88
	int32_t PresetGroupId; // 0x8c
	int32_t DyeingCostType; // 0x90
	int32_t DyeingCostId; // 0x94
	int32_t DyeingCostValue; // 0x98
	int32_t BasicType; // 0x9c
	int32_t NewProduct; // 0xa0
};

struct FGuildGiftTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t GiftId; // 0xc
	int32_t GiftTabNo; // 0x10
	int32_t GiftName; // 0x14
	int32_t GiftIcon; // 0x18
	int32_t IconGrade; // 0x1c
	int32_t GiftExp; // 0x20
	int32_t GiftGoldenKey; // 0x24
	int32_t GiftSelectCnt; // 0x28
	int32_t GiftType1; // 0x2c
	int32_t GiftTypeSub1; // 0x30
	int32_t GiftType2; // 0x34
	int32_t GiftTypeSub2; // 0x38
	int32_t GiftType3; // 0x3c
	int32_t GiftTypeSub3; // 0x40
	int32_t GiftType4; // 0x44
	int32_t GiftTypeSub4; // 0x48
	int32_t GiftType5; // 0x4c
	int32_t GiftTypeSub5; // 0x50
	int32_t GiftType6; // 0x54
	int32_t GiftTypeSub6; // 0x58
	int32_t GiftType7; // 0x5c
	int32_t GiftTypeSub7; // 0x60
	int32_t GiftType8; // 0x64
	int32_t GiftTypeSub8; // 0x68
	int32_t GiftType9; // 0x6c
	int32_t GiftTypeSub9; // 0x70
	int32_t GiftType10; // 0x74
	int32_t GiftTypeSub10; // 0x78
	int32_t GiftType11; // 0x7c
	int32_t GiftTypeSub11; // 0x80
	int32_t GiftType12; // 0x84
	int32_t GiftTypeSub12; // 0x88
	int32_t GiftType13; // 0x8c
	int32_t GiftTypeSub13; // 0x90
	int32_t GiftType14; // 0x94
	int32_t GiftTypeSub14; // 0x98
	int32_t GiftType15; // 0x9c
	int32_t GiftTypeSub15; // 0xa0
	int32_t GiftType16; // 0xa4
	int32_t GiftTypeSub16; // 0xa8
	int32_t GiftType17; // 0xac
	int32_t GiftTypeSub17; // 0xb0
	int32_t GiftType18; // 0xb4
	int32_t GiftTypeSub18; // 0xb8
	int32_t GiftType19; // 0xbc
	int32_t GiftTypeSub19; // 0xc0
	int32_t GiftType20; // 0xc4
	int32_t GiftTypeSub20; // 0xc8
};

struct FPortalTemplate : FTableRowBase {
	int32_t PortalTriggerId; // 0x8
	int32_t EnableLevel; // 0xc
	int32_t EnableGreatBuildingID; // 0x10
	int32_t EnableBuildingStep; // 0x14
	int32_t EnableDoingQuestType; // 0x18
	TArray<int32_t> EnableDoingQuest; // 0x20
	int32_t EnableCompleteQuestType; // 0x30
	int32_t EnableCompleteQuest; // 0x34
	int32_t EnableAchievement; // 0x38
	int32_t EnableDoingBuff; // 0x3c
	int32_t ContentsAdminInfoId; // 0x40
	int32_t CurrentStageId; // 0x44
	int32_t WarpId; // 0x48
	int32_t ArrivalStageId; // 0x4c
	int32_t Weigth; // 0x50
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

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
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

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FVertexID : FElementID {
	int32_t IDValue; // 0x0
};

struct FItemTransferTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t TransferId; // 0xc
	int32_t TransferType; // 0x10
	int32_t TransferValue; // 0x14
	int32_t NeedCostId; // 0x18
	int32_t NeedCostCount; // 0x1c
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

struct FAtmospherePrecomputeInstanceData : FSceneComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x58
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

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName MaterialName; // 0x0
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

struct FGuildMoneyExchangeTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ExchangeId; // 0xc
	int32_t ExchangeType; // 0x10
	int32_t MoneyId_Send; // 0x14
	int32_t MoneyId_Receive; // 0x18
	int32_t ExchangeRate; // 0x1c
	int32_t ExchangeStringId; // 0x20
	int32_t PayCommissionRate; // 0x24
	int32_t PayMailPresetId; // 0x28
	int32_t UnLockDevId; // 0x2c
	int32_t UnLockDevLevel; // 0x30
	int32_t DonationReward_MoneyId; // 0x34
	int32_t DonationReward_MoneyRate; // 0x38
	int32_t DonationReward_GuildExpRate; // 0x3c
	int32_t DonationMoneyMinValue; // 0x40
	int32_t PayMoneyMinValue; // 0x44
	int32_t ChangeMoneyMinValue; // 0x48
	int32_t DonationMoneyLimit; // 0x4c
	int32_t DonationLevelLimit; // 0x50
};

struct FNpcShopListTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t ShopId; // 0xc
	int32_t OpenOrder; // 0x10
	int32_t Type; // 0x14
	int32_t OpenTime; // 0x18
	int32_t CloseTime; // 0x1c
	int32_t RefreshTime; // 0x20
	int32_t RefreshPermission; // 0x24
	int32_t RefreshMoneyType; // 0x28
	int32_t RefreshMoneyChain; // 0x2c
	int32_t RefreshMoneyValue; // 0x30
	int32_t RefreshMoneyIncrease; // 0x34
	int32_t DisplayUi; // 0x38
	int32_t GoodsSelect1; // 0x3c
	int32_t GoodsGroupId1; // 0x40
	int32_t GoodsCount1; // 0x44
	int32_t GoodsSelect2; // 0x48
	int32_t GoodsGroupId2; // 0x4c
	int32_t GoodsCount2; // 0x50
	int32_t GoodsSelect3; // 0x54
	int32_t GoodsGroupId3; // 0x58
	int32_t GoodsCount3; // 0x5c
	int32_t eventType; // 0x60
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
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

struct FSoundVariation {
	USoundWave* SoundWave; // 0x0
	float ProbabilityWeight; // 0x8
	FVector2D VolumeRange; // 0xc
	FVector2D PitchRange; // 0x14
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FCostumePresetTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t PresetGroupId; // 0xc
	int32_t OrderNum; // 0x10
	int32_t MainColorNumber; // 0x14
	int32_t MainColorBrightness; // 0x18
	int32_t SubColorNumber; // 0x1c
	int32_t SubColorBrightness; // 0x20
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FSize_Vector2DCurve {
	FUIParticleProperty Min; // 0x0
	FUIParticleProperty Max; // 0x7e8
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5d0
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FBuffGuildDevTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t BuffId; // 0xc
	int32_t BuffType; // 0x10
};

struct FCharacterForceBloodTemplate : FTableRowBase {
	int32_t UniqueId; // 0x8
	int32_t BloodSetID; // 0xc
	int32_t BloodLevel; // 0x10
	int32_t TrainingCost_Spirit; // 0x14
	int32_t Blood1_Training_NeedUse01Id; // 0x18
	int32_t Blood1_Training_NeedItem01Count; // 0x1c
	int32_t Blood1_Training_NeedUse02Id; // 0x20
	int32_t Blood1_Training_NeedItem02Count; // 0x24
	int32_t Blood2_Training_NeedUse01Id; // 0x28
	int32_t Blood2_Training_NeedItem01Count; // 0x2c
	int32_t Blood2_Training_NeedUse02Id; // 0x30
	int32_t Blood2_Training_NeedItem02Count; // 0x34
	int32_t Blood3_Training_NeedUse01Id; // 0x38
	int32_t Blood3_Training_NeedItem01Count; // 0x3c
	int32_t Blood3_Training_NeedUse02Id; // 0x40
	int32_t Blood3_Training_NeedItem02Count; // 0x44
	int32_t Blood4_Training_NeedUse01Id; // 0x48
	int32_t Blood4_Training_NeedItem01Count; // 0x4c
	int32_t Blood4_Training_NeedUse02Id; // 0x50
	int32_t Blood4_Training_NeedItem02Count; // 0x54
	int32_t TrainingChanceSuccess; // 0x58
	int32_t TrainingChanceFail; // 0x5c
	int32_t TrainingChanceCriticalFail; // 0x60
	int32_t Blood1_AttributeType; // 0x64
	int32_t Blood1_AttributeValue; // 0x68
	int32_t Blood2_AttributeType; // 0x6c
	int32_t Blood2_AttributeValue; // 0x70
	int32_t Blood3_AttributeType; // 0x74
	int32_t Blood3_AttributeValue; // 0x78
	int32_t Blood4_AttributeType; // 0x7c
	int32_t Blood4_AttributeValue; // 0x80
	int32_t HardTraining_ForcePanelLevel; // 0x84
};

struct FCombatPointTemplate : FTableRowBase {
	int32_t CommonId; // 0x8
	int32_t Warrior; // 0xc
	int32_t Magician; // 0x10
	int32_t Taoist; // 0x14
	int32_t Assassin; // 0x18
	int32_t Berserker; // 0x1c
	int32_t ColletStatus; // 0x20
	int32_t CalculateType; // 0x24
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FBoneControlData {
	FString ControlName; // 0x0
	float BoneAlpha; // 0x10
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
	UField* Field; // 0x18
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
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

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x48
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

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
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

struct FMovieSceneSectionParameters {
	FFrameNumber StartFrameOffset; // 0x0
	float TimeScale; // 0x4
	int32_t HierarchicalBias; // 0x8
	float StartOffset; // 0xc
	float PrerollTime; // 0x10
	float PostrollTime; // 0x14
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FSequencePlayTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t SequencePlayId; // 0xc
	int32_t SequenceType; // 0x10
	float SequenceSkipDelay; // 0x14
	float FadeOutTime; // 0x18
	float FadeInTime; // 0x1c
	bool ClassCheck; // 0x20
	FString SequenceResourceName; // 0x28
	FVector CoordinateOffset; // 0x38
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

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FGoogleProfile {
	FString ID; // 0x0
	FString email; // 0x10
	FString FullName; // 0x20
	FString GivenName; // 0x30
	FString FamilyName; // 0x40
	FString ProfileURL; // 0x50
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
	UFloatProperty* FloatProperty; // 0x28
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FTriggerGroupTemplate : FTableRowBase {
	int32_t TriggerGroup; // 0x8
	FName TriggerName; // 0xc
};

struct FIAPWSReceiptData {
	FString PayID; // 0x0
	FString ProductId; // 0x10
	FString OrderId; // 0x20
	FString UserAgent; // 0x30
	FString PlayerKey; // 0x40
	int64_t AccountUID; // 0x50
	int64_t CharacterUID; // 0x58
	int32_t ItemType; // 0x60
	uint32_t ShopGoodsVersion; // 0x64
	int32_t ShopGoodsID; // 0x68
	FString PurchaseToken; // 0x70
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FPetPlacement {
	float PetScale; // 0x0
	FVector PetLocation; // 0x4
	FRotator PetRotation; // 0x10
};

struct FVehicleRideTemplate : FTableRowBase {
	int32_t VehicleId; // 0x8
	int32_t UiIndex; // 0xc
	int32_t NameId; // 0x10
	int32_t IconID; // 0x14
	FName MeshResourceId; // 0x18
	float NameTagOffset; // 0x20
	float MeshOffsetZ; // 0x24
	int32_t ColorId; // 0x28
	int32_t AnimType; // 0x2c
	FName AnimClassName; // 0x30
	int32_t RideSpeed; // 0x38
	int32_t FastRideSpeed; // 0x3c
	int32_t FastRideSec; // 0x40
	int32_t PurchaseAbleType; // 0x44
	int32_t PurchaseAbleValue; // 0x48
	int32_t PurchaseAbleStr; // 0x4c
	int32_t UnlockNeedCostType; // 0x50
	int32_t UnlockNeedCostId; // 0x54
	int32_t UnlockNeedCostValue; // 0x58
	int32_t OpenAttributeType; // 0x5c
	int32_t OpenAttributeValue; // 0x60
	int32_t AttributeType01; // 0x64
	int32_t AttributeValue01; // 0x68
	int32_t AttributeType02; // 0x6c
	int32_t AttributeValue02; // 0x70
	int32_t AttributeType03; // 0x74
	int32_t AttributeValue03; // 0x78
	int32_t Grade; // 0x7c
	int32_t NewProduct; // 0x80
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* sound; // 0x10
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	FBox ElemBox; // 0x40
	FTransform Transform; // 0x60
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
};

struct FContentsPostProcessValue {
	float Intensity; // 0x0
	float Threshold; // 0x4
	float Slope; // 0x8
	float Toe; // 0xc
	float EffectBright; // 0x10
	float CharacterBright; // 0x14
	float CharacterIndirect; // 0x18
};

struct FMovieSubtitleInfo {
	int32_t SubtitleNumber; // 0x0
	float SubtitleBegin; // 0x4
	float SubtitleEnd; // 0x8
	FString SubtitleText; // 0x10
};

struct FNpcSpawnTemplate : FTableRowBase {
	int32_t QuestId; // 0x8
	FString Script; // 0x10
};

struct FGuildWarObjectTemplate : FTableRowBase {
	int32_t ObjectID; // 0x8
	EGuildWarObjectKind ObjectKind; // 0xc
	EGuildWarObjectOwnerShip OwnerShip; // 0x10
	int32_t SiegeZoneRange; // 0x14
	int32_t SiegeZone_MaxPoint; // 0x18
	int32_t SiegeZone_AddPoint; // 0x1c
	int32_t SiegeZone_FallPoint; // 0x20
	int32_t SiegeZone_LockTimeSec; // 0x24
	int32_t SiegeRankingPoint; // 0x28
	int32_t SiegeZoneUIHeight; // 0x2c
};

struct FTotalMenuContentsTemplate : FTableRowBase {
	int32_t ContentsId; // 0x8
	int32_t MenuCostMainType1; // 0xc
	int32_t MenuCostSubType1; // 0x10
	int32_t MenuCostMainType2; // 0x14
	int32_t MenuCostSubType2; // 0x18
	int32_t MenuCostMainType3; // 0x1c
	int32_t MenuCostSubType3; // 0x20
};

struct FPageTutorialGroup {
	int32_t GroupId; // 0x0
	bool bSkipEnable; // 0x4
	TArray<FPageTutorialStep> PageTutorialStepArray; // 0x8
};

struct FMovieSceneSequenceHierarchy {
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x0
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0x50
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
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

struct FCustomizingSettingTemplate : FTableRowBase {
	TArray<float> Stiffness; // 0x8
	TArray<float> Damping; // 0x18
	TArray<float> CameraFov; // 0x28
	TArray<FVector> CameraLocation; // 0x38
	TArray<FRotator> CameraRotation; // 0x48
	FVector CharacterScale; // 0x58
};

struct FHLODProxyMesh {
	ALODActor* LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t ChunkId; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
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

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char isValid; // 0x18
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FActorPlacement {
	FVector ActorPos; // 0x0
	FRotator ActorRot; // 0xc
};

struct FGameOptionSettingTemplate : FTableRowBase {
	int32_t Name; // 0x8
	EGameOptionType GameOptionKey; // 0xc
	int32_t DefaultSettingType; // 0x10
	int32_t DefaultSettingValueCommon; // 0x14
	int32_t DefaultSettingValuePCW; // 0x18
	int32_t DefaultSettingValuePCM; // 0x1c
	int32_t DefaultSettingValuePCT; // 0x20
	int32_t DefaultSettingValuePCA; // 0x24
	int32_t DefaultSettingValuePCZ; // 0x28
	int32_t OptionStorageType; // 0x2c
	int32_t MinimumValue; // 0x30
	int32_t MaximumValue; // 0x34
};

struct FItemRandomGetTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RandomGetId; // 0xc
	int32_t OpenEffect; // 0x10
	int32_t ItemId; // 0x14
	int32_t MainType; // 0x18
	int32_t RewardProbability; // 0x1c
	int32_t RewardType; // 0x20
	TArray<int32_t> RewardId; // 0x28
	int32_t RewardValue; // 0x38
};

struct FObjectTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ObjectID; // 0xc
	EGatherObjectType ObjectType; // 0x10
	EObject_GatherType ObjectGatherType; // 0x11
	int32_t GetWayType; // 0x14
	FName ResourceId; // 0x18
	float ObjectScale; // 0x20
	int32_t ObjectNameSid; // 0x24
	bool ObjectNameOnOff; // 0x28
	TArray<EObjectActivateType> CollectActivationType; // 0x30
	TArray<int32_t> CollectActivationValue; // 0x40
	bool AlwaysVisible; // 0x50
	int32_t CollectQualificationType; // 0x54
	int32_t CollectQualificationValue; // 0x58
	int32_t CollectMethod; // 0x5c
	int32_t InteractionRange; // 0x60
	int32_t ProgressRangeInteraction; // 0x64
	int32_t ProgressRange; // 0x68
	int32_t CollectCountMin; // 0x6c
	int32_t CollectCountMax; // 0x70
	int32_t CastingTime; // 0x74
	int32_t CastingDesc; // 0x78
	int32_t CollectAniType; // 0x7c
	float EffectScale; // 0x80
	int32_t ObjectLoopFxId; // 0x84
	int32_t ObjectGenFxId; // 0x88
	bool ObjectAniOnOff; // 0x8c
	int32_t ABPLink; // 0x90
	int32_t ObjectDisappearTime; // 0x94
	int32_t DropItemId; // 0x98
	int32_t CollectIcon; // 0x9c
	FVector IconCoordinate; // 0xa0
	float DecalScale; // 0xac
	int32_t LinkOccupationId; // 0xb0
	int32_t BroadcastingSize; // 0xb4
	bool IsBossDropRewardBox; // 0xb8
};

struct FStructSerializerObjectTestStruct {
	UObject* Class; // 0x0
	Umetadata* SubClass; // 0x8
	UClass* SoftClass; // 0x10
	UObject* Object; // 0x38
	TWeakObjectPtr<Umetadata> WeakObject; // 0x40
	Umetadata* SoftObject; // 0x48
	FSoftClassPath ClassPath; // 0x70
	FSoftObjectPath ObjectPath; // 0x88
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FClientPreloadTemplate : FTableRowBase {
	FString Filename; // 0x8
	bool bInGameLoad; // 0x18
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UProperty* PropertyType; // 0x20
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FUIShopPeriodTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t PeriodId; // 0x10
	int32_t Period; // 0x14
	int32_t FirstRewardKindCount; // 0x18
	TArray<int32_t> FirstRewardType; // 0x20
	TArray<int32_t> FirstRewardId; // 0x30
	TArray<int32_t> FirstRewardCount; // 0x40
	int32_t DailyRewardKindCount; // 0x50
	TArray<int32_t> DailyRewardType; // 0x58
	TArray<int32_t> DailyRewardId; // 0x68
	TArray<int32_t> DailyRewardCount; // 0x78
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
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

struct FPlane : FVector {
	float W; // 0xc
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
};

struct FEliteDungeonTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t EdID; // 0xc
	int32_t StageId; // 0x10
	int32_t StageSort; // 0x14
	int32_t StageNameID; // 0x18
	int32_t StageNoteID; // 0x1c
	bool LevelType; // 0x20
	int32_t LevelValue; // 0x24
	bool DirectWarpType; // 0x28
	int32_t ArrivalLocation; // 0x2c
	int32_t StageThumbnail; // 0x30
	int32_t EventThumbnail; // 0x34
	int32_t BossMonsterID; // 0x38
	bool BossGenType; // 0x3c
	bool CombatPowerType; // 0x3d
	int32_t RecommendedPerson; // 0x40
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FSkeletalMeshLODInfo {
	FPerPlatformFloat ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	FSkeletalMeshBuildSettings BuildSettings; // 0x18
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x28
	TArray<FBoneReference> BonesToRemove; // 0x68
	TArray<FBoneReference> BonesToPrioritize; // 0x78
	float WeightOfPrioritization; // 0x88
	UAnimSequence* BakePose; // 0x90
	UAnimSequence* BakePoseOverride; // 0x98
	FString SourceImportFilename; // 0xa0
	char bHasBeenSimplified : 1; // 0xb0
	char bHasPerLODVertexColors : 1; // 0xb0
	char bAllowCPUAccess : 1; // 0xb0
	char bSupportUniformlyDistributedSampling : 1; // 0xb0
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FStringToolTipTemplate : FTableRowBase {
	int32_t ToolTipID; // 0x8
	EToolTipLocation PopupLocation; // 0xc
	float WidthSize; // 0x10
	FString TextKr; // 0x18
	FString CHT; // 0x28
	FString CHS; // 0x38
	FString JPN; // 0x48
	FString ENG; // 0x58
	FString THA; // 0x68
	FString IND; // 0x78
	FString VIE; // 0x88
	FString GER; // 0x98
	FString SPA; // 0xa8
	FString POR; // 0xb8
	FString RUS; // 0xc8
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
	FName FunctionName; // 0x18
	FName NotifyFunctionName; // 0x20
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FItemMaterialComposeListTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ComposeListID; // 0xc
	int32_t RewardRate; // 0x10
	int32_t RewardItemId; // 0x14
	int32_t RewardItemCount; // 0x18
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FRotationLimit {
	FVector LimitMIN; // 0x0
	FVector LimitMAX; // 0xc
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
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

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
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

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FUserEventBenedictionTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ID; // 0xc
	int32_t Event_Type; // 0x10
	int32_t Slot_Icon; // 0x14
	int32_t Slot_BG; // 0x18
	int32_t Incense_Type; // 0x1c
	int32_t Incense_Grade; // 0x20
	int32_t UseItem_ID; // 0x24
	int32_t Item_Value; // 0x28
	int32_t Reward_Item; // 0x2c
	int32_t Reward_Item_Value; // 0x30
	int32_t RewardOwnerShip; // 0x34
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FPolygonID : FElementID {
	int32_t IDValue; // 0x0
};

struct FGuildContributeRewardTemplate : FTableRowBase {
	int32_t ContributeId; // 0x8
	int32_t ContributeGroup; // 0xc
	int32_t ContributeGrade; // 0x10
	int32_t ContributeMin; // 0x14
	int32_t ContributeMax; // 0x18
	FString ContributeGradeText; // 0x20
	int32_t RewardType; // 0x30
	int32_t RewardCnt; // 0x34
	int32_t ContributeRewardType1; // 0x38
	TArray<int32_t> ContributeRewardTypeSub1; // 0x40
	int32_t ContributeRewardTypeValue1; // 0x50
	int32_t ContributeRewardType2; // 0x54
	TArray<int32_t> ContributeRewardTypeSub2; // 0x58
	int32_t ContributeRewardTypeValue2; // 0x68
	int32_t ContributeRewardType3; // 0x6c
	TArray<int32_t> ContributeRewardTypeSub3; // 0x70
	int32_t ContributeRewardTypeValue3; // 0x80
	int32_t ContributeRewardType4; // 0x84
	TArray<int32_t> ContributeRewardTypeSub4; // 0x88
	int32_t ContributeRewardTypeValue4; // 0x98
	int32_t ContributeRewardType5; // 0x9c
	TArray<int32_t> ContributeRewardTypeSub5; // 0xa0
	int32_t ContributeRewardTypeValue5; // 0xb0
	int32_t ContributeRewardType6; // 0xb4
	TArray<int32_t> ContributeRewardTypeSub6; // 0xb8
	int32_t ContributeRewardTypeValue6; // 0xc8
	int32_t ContributeRewardType7; // 0xcc
	TArray<int32_t> ContributeRewardTypeSub7; // 0xd0
	int32_t ContributeRewardTypeValue7; // 0xe0
	int32_t ContributeRewardType8; // 0xe4
	TArray<int32_t> ContributeRewardTypeSub8; // 0xe8
	int32_t ContributeRewardTypeValue8; // 0xf8
	int32_t ContributeRewardType9; // 0xfc
	TArray<int32_t> ContributeRewardTypeSub9; // 0x100
	int32_t ContributeRewardTypeValue9; // 0x110
	int32_t ContributeRewardType10; // 0x114
	TArray<int32_t> ContributeRewardTypeSub10; // 0x118
	int32_t ContributeRewardTypeValue10; // 0x128
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
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

struct FGuildStatusTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t StatusId; // 0xc
	FString StatusCode; // 0x10
	int32_t StringID; // 0x20
	int32_t ValueFormat; // 0x24
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FChildEventParam {
	UFirebaseDataSnapshot* dataSnapshot; // 0x0
	FString PreviousSiblingKey; // 0x8
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FAnimNode_ApplyMeshSpaceAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	float Alpha; // 0x30
	FInputScaleBias AlphaScaleBias; // 0x34
	int32_t LODThreshold; // 0x3c
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> Actors; // 0x8
};

struct FGuildDominionPBSTemplate : FTableRowBase {
	int32_t DominionPBSId; // 0x8
	int32_t DominionPBSGrade; // 0xc
	int32_t DominionOrder; // 0x10
	int32_t DominionPBSNameId; // 0x14
	int32_t DominionPBSFrameId; // 0x18
	int32_t DominionPBSType; // 0x1c
	int32_t DominionPBSAuthority_Manage; // 0x20
	int32_t DominionPBSAuthority_Tax; // 0x24
	int32_t DominionPBSAuthority_PBS; // 0x28
	int32_t DominionPBSAuthority_Buff; // 0x2c
	int32_t DominionPBSAuthority_PK; // 0x30
	int32_t DominionPBSAuthority_Prize; // 0x34
	int32_t DominionPBSType1; // 0x38
	int32_t DominionPBSType2; // 0x3c
	int32_t DominionPBSType3; // 0x40
	int32_t DominionPBSStatusType1; // 0x44
	int32_t DominionPBSStatusType2; // 0x48
	int32_t DominionPBSStatusType3; // 0x4c
	int32_t DominionPBSStatusValue1; // 0x50
	int32_t DominionPBSStatusValue2; // 0x54
	int32_t DominionPBSStatusValue3; // 0x58
};

struct FContentsLightValue {
	FContentsDirectionalLight DirectionalLightData; // 0x0
	FContentsPointLight PointLight1Data; // 0x14
	FContentsPointLight PointLight2Data; // 0x2c
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FMovieSceneLevelVisibilitySectionTemplate : FMovieSceneEvalTemplate {
	ELevelVisibility Visibility; // 0x20
	TArray<FName> LevelNames; // 0x28
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

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
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

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush HoveredBarImage; // 0x90
	FSlateBrush DisabledBarImage; // 0x118
	FSlateBrush NormalThumbImage; // 0x1a0
	FSlateBrush HoveredThumbImage; // 0x228
	FSlateBrush DisabledThumbImage; // 0x2b0
	float BarThickness; // 0x338
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
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

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FVector_NetQuantizeNormal : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FSmallTalkSettingTemplate : FTableRowBase {
	int32_t UniqueId; // 0x8
	int32_t StageId; // 0xc
	int32_t SmalltTalkDialogueId; // 0x10
	int32_t SmallTalkType; // 0x14
	int32_t Condition; // 0x18
	int32_t Count; // 0x1c
	int32_t MinLevel; // 0x20
	int32_t MaxLevel; // 0x24
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
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

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FIAPMarketProductData {
	FString ProductId; // 0x0
	FString ProductName; // 0x10
	FString TotalPrice; // 0x20
	int32_t Price; // 0x30
	FString CurrencyCode; // 0x38
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
};

struct FItemRandomExchangeTemplate : FTableRowBase {
	int32_t ExchangeId; // 0x8
	int32_t Item_Main_Type; // 0xc
	int32_t Item_Sub_type; // 0x10
	int32_t Item_Grade; // 0x14
	int32_t Exchange_Cost_ItemId; // 0x18
	int32_t Exchange_Cost_ItemValue; // 0x1c
	int32_t Exchange_Cost_Type; // 0x20
	int32_t Exchage_Cost_Value; // 0x24
};

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FItemRandomExchangeEquipTemplate : FTableRowBase {
	int32_t ExchangeId; // 0x8
	int32_t Item_Main_Type; // 0xc
	int32_t Item_Sub_type; // 0x10
	int32_t Item_Grade; // 0x14
	int32_t Item_Tier; // 0x18
	int32_t Item_SmeltingType; // 0x1c
	int32_t Exchange_Cost_ItemId; // 0x20
	int32_t Exchange_Cost_ItemValue; // 0x24
	int32_t Exchange_Cost_Type; // 0x28
	int32_t Exchange_Cost_Value; // 0x2c
	TArray<int32_t> Exchange_Input_Item_List1; // 0x30
	TArray<int32_t> Exchange_Output_Item_List1; // 0x40
	TArray<int32_t> Exchange_Input_Item_List2; // 0x50
	TArray<int32_t> Exchange_Output_Item_List2; // 0x60
	TArray<int32_t> Exchange_Input_Item_List3; // 0x70
	TArray<int32_t> Exchange_Output_Item_List3; // 0x80
	TArray<int32_t> Exchange_Input_Item_List4; // 0x90
	TArray<int32_t> Exchange_Output_Item_List4; // 0xa0
	TArray<int32_t> Exchange_Input_Item_List5; // 0xb0
	TArray<int32_t> Exchange_Output_Item_List5; // 0xc0
};

struct FTotalMenuTemplate : FTableRowBase {
	int32_t MenuId; // 0x8
	int32_t GroupType; // 0xc
	int32_t MenuDepth; // 0x10
	int32_t MenuName; // 0x14
	int32_t MenuSymbol; // 0x18
	TArray<int32_t> ChildMenu; // 0x20
	TArray<int32_t> ChildContentsId; // 0x30
	int32_t LinkContents; // 0x40
	TArray<int32_t> IndicatorContentsId; // 0x48
	bool CheckAbleButton; // 0x58
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
};

struct FTimelineEventEntry {
	float Time; // 0x0
	DelegateProperty EventFunc; // 0x4
};

struct FLevelTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t ClassID; // 0xc
	int32_t Level; // 0x10
	int64_t ReqExp; // 0x18
	int32_t MaxHP; // 0x20
	int32_t MaxMana; // 0x24
	int32_t ManaCost; // 0x28
	int32_t PhysicalAttack; // 0x2c
	int32_t MagicAttack; // 0x30
	int32_t Physicaldefense; // 0x34
	int32_t Magicdefense; // 0x38
	int32_t Accuracy; // 0x3c
	int32_t Dodge; // 0x40
	int32_t Critical; // 0x44
	int32_t AvoidCritical; // 0x48
	int32_t CriticalOutcome; // 0x4c
	int32_t ReducePhysicalDef; // 0x50
	int32_t ReduceMagicDef; // 0x54
	int32_t Luck; // 0x58
	int32_t MeditationMaxSpirit; // 0x5c
	int32_t ActingPointMax; // 0x60
	int32_t ProperPassivePoint; // 0x64
	int32_t BlackIronMax; // 0x68
	int32_t SkillStoneMax; // 0x6c
	int32_t MaxDurabilityDmg; // 0x70
	int32_t AtkBossDamage; // 0x74
	int32_t DefBossDamage; // 0x78
	int32_t AtkPVPDamage; // 0x7c
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float Weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float PlayRateBasis; // 0x38
	float PlayRate; // 0x3c
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x40
	float StartPosition; // 0x70
	bool bLoopAnimation; // 0x74
};

struct FGuideStartTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t GuideId; // 0xc
	int32_t GuideContensId; // 0x10
	int32_t QuestId; // 0x14
	int32_t CharacterLv; // 0x18
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
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
	int32_t MinNumberOfActorsToBuild; // 0x134
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	UClass* NavDataClass; // 0x50
};

struct FGenDataTemplate : FTableRowBase {
	int32_t PosID; // 0x8
	int32_t Refer; // 0xc
	int32_t Stage; // 0x10
	int32_t GenObjectID; // 0x14
	int32_t GenObjectType; // 0x18
	int32_t SpawnCount; // 0x1c
	int32_t SpawnRange; // 0x20
	int32_t ActiveType; // 0x24
	int32_t RegMinTime; // 0x28
	int32_t RegMaxTime; // 0x2c
	int32_t GenType; // 0x30
	int32_t FirstGenDelayMin; // 0x34
	int32_t FirstGenDelayMax; // 0x38
	int32_t GroupGenMemo; // 0x3c
	int32_t GroupGenID; // 0x40
	int32_t GroupGenCountThreshold; // 0x44
	int32_t RoamingId; // 0x48
	int32_t RoamingType; // 0x4c
	int32_t LinkGroup; // 0x50
	int32_t LinkGroupDistance; // 0x54
	int32_t LocationX; // 0x58
	int32_t LocationY; // 0x5c
	int32_t LocationZ; // 0x60
	int32_t RotationRoll; // 0x64
	int32_t RotationPitch; // 0x68
	int32_t RotationYaw; // 0x6c
	int32_t ScaleX; // 0x70
	int32_t ScaleY; // 0x74
	int32_t ScaleZ; // 0x78
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

struct FPlayDataTemplate : FTableRowBase {
	int32_t PlayDataId; // 0x8
	int32_t PlayDataType; // 0xc
	int32_t ConditionType; // 0x10
	int32_t ConditionTypeValue1; // 0x14
	int32_t ConditionTypeValue2; // 0x18
	int32_t AchievementState; // 0x1c
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FGreatBuildingStepTemplate : FTableRowBase {
	int32_t BuildingStepId; // 0x8
	int32_t GreatBuildingId; // 0xc
	int32_t BuildingStep; // 0x10
	int32_t BuildingCombat; // 0x14
	int32_t AchievementIdCondition01; // 0x18
	int32_t AchievementIdConditionString01; // 0x1c
	int32_t AchievementIdContentsId01; // 0x20
	int32_t AchievementIdCondition02; // 0x24
	int32_t AchievementIdConditionString02; // 0x28
	int32_t AchievementIdContentsId02; // 0x2c
	int32_t AchievementIdCondition03; // 0x30
	int32_t AchievementIdConditionString03; // 0x34
	int32_t AchievementIdContentsId03; // 0x38
	int32_t BuildingIdCondition01; // 0x3c
	int32_t BuildingIdCondition02; // 0x40
	int32_t BuildingIdCondition03; // 0x44
	int32_t NeedType01; // 0x48
	int32_t NeedID01; // 0x4c
	int32_t NeedUseID01; // 0x50
	int32_t NeedCount01; // 0x54
	int32_t NeedType02; // 0x58
	int32_t NeedID02; // 0x5c
	int32_t NeedUseID02; // 0x60
	int32_t NeedCount02; // 0x64
	int32_t NeedType03; // 0x68
	int32_t NeedID03; // 0x6c
	int32_t NeedUseID03; // 0x70
	int32_t NeedCount03; // 0x74
	int32_t NeedType04; // 0x78
	int32_t NeedID04; // 0x7c
	int32_t NeedUseID04; // 0x80
	int32_t NeedCount04; // 0x84
	int32_t UpgradeTime; // 0x88
	int32_t GuildHelpTime; // 0x8c
	int32_t EffectType01; // 0x90
	TArray<int32_t> EffectValue01; // 0x98
	TArray<int32_t> EffectNum01; // 0xa8
	TArray<int32_t> EffectString01; // 0xb8
	TArray<int32_t> EffectIcon01; // 0xc8
	int32_t EffectType02; // 0xd8
	TArray<int32_t> EffectValue02; // 0xe0
	TArray<int32_t> EffectString02; // 0xf0
	TArray<int32_t> EffectNum02; // 0x100
	TArray<int32_t> EffectIcon02; // 0x110
	int32_t EffectType03; // 0x120
	TArray<int32_t> EffectValue03; // 0x128
	TArray<int32_t> EffectString03; // 0x138
	TArray<int32_t> EffectNum03; // 0x148
	TArray<int32_t> EffectIcon03; // 0x158
	int32_t EffectType04; // 0x168
	TArray<int32_t> EffectValue04; // 0x170
	TArray<int32_t> EffectString04; // 0x180
	TArray<int32_t> EffectNum04; // 0x190
	TArray<int32_t> EffectIcon04; // 0x1a0
};

struct FItemDurabilityBrokenlvTemplate : FTableRowBase {
	int32_t BrokenID; // 0x8
	int32_t BrokenLV; // 0xc
	bool IsDestroyed; // 0x10
	int32_t DurabilityMinRate; // 0x14
	int32_t Item_StatusPanaltyRate; // 0x18
	bool HUD_Alarm; // 0x1c
	bool IconID; // 0x1d
	int32_t Color_index; // 0x20
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FAGAlarmDaysData {
	bool Sunday; // 0x0
	bool Monday; // 0x1
	bool Tuesday; // 0x2
	bool Wednesday; // 0x3
	bool Thursday; // 0x4
	bool Friday; // 0x5
	bool Saturday; // 0x6
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
};

struct FDailyWorkPlusRewardTemplate : FTableRowBase {
	int32_t PlusRewardId; // 0x8
	int32_t QuestDailyHomeworkGroupId; // 0xc
	int32_t ClearCount; // 0x10
	int32_t RewardGoodsType; // 0x14
	int32_t RewardGoodsCount; // 0x18
	TArray<int32_t> RewardItemId; // 0x20
	int32_t RewardItemCount; // 0x30
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FItemSmeltingRateTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t ItemNumber; // 0xc
	int32_t IncreaseRate; // 0x10
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x48
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

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FDominionStorageHistoryTemplate : FTableRowBase {
	int32_t HistoryId; // 0x8
	int32_t HistoryGroup; // 0xc
	int32_t StringID; // 0x10
};

struct FCancelParam {
	int32_t ErrorCode; // 0x0
	FString ErrorMessage; // 0x8
};

struct FGuildMemberGradeTemplate : FTableRowBase {
	int32_t MemberGradeId; // 0x8
	int32_t GradeStrId; // 0xc
	int32_t GradeNameId; // 0x10
	int32_t GradeNickNameId; // 0x14
	int32_t GradeMemberCount; // 0x18
	int32_t GradeFrameIconId; // 0x1c
	int32_t GradeDistibuteNumber; // 0x20
	int32_t Set_GradeOffice; // 0x24
	int32_t Set_GradeBuff; // 0x28
	int32_t Set_GradePermission; // 0x2c
	int32_t GradeChangeBuffId; // 0x30
	int32_t GradeSymbolId; // 0x34
	int32_t Can_Invite; // 0x38
	int32_t Can_Join_Confirm; // 0x3c
	int32_t Can_Notice; // 0x40
	int32_t Can_Appoint; // 0x44
	int32_t Can_Kick_Member; // 0x48
	int32_t Can_Declaration; // 0x4c
	int32_t Can_Alliance; // 0x50
};

struct FUIShopItemPackageTemplate : FTableRowBase {
	int32_t ShopPackageId; // 0x8
	int32_t RewardType1; // 0xc
	TArray<int32_t> RewardId1; // 0x10
	int32_t RewardType2; // 0x20
	TArray<int32_t> RewardId2; // 0x28
	int32_t RewardType3; // 0x38
	TArray<int32_t> RewardId3; // 0x40
	int32_t RewardType4; // 0x50
	TArray<int32_t> RewardId4; // 0x58
	int32_t RewardType5; // 0x68
	TArray<int32_t> RewardId5; // 0x70
	int32_t RewardType6; // 0x80
	TArray<int32_t> RewardId6; // 0x88
	int32_t RewardType7; // 0x98
	TArray<int32_t> RewardId7; // 0xa0
	int32_t RewardType8; // 0xb0
	TArray<int32_t> RewardId8; // 0xb8
	int32_t RewardType9; // 0xc8
	TArray<int32_t> RewardId9; // 0xd0
	int32_t RewardType10; // 0xe0
	TArray<int32_t> RewardId10; // 0xe8
	int32_t RewardType11; // 0xf8
	TArray<int32_t> RewardId11; // 0x100
	int32_t RewardType12; // 0x110
	TArray<int32_t> RewardId12; // 0x118
	int32_t RewardType13; // 0x128
	TArray<int32_t> RewardId13; // 0x130
	int32_t RewardType14; // 0x140
	TArray<int32_t> RewardId14; // 0x148
	int32_t RewardType15; // 0x158
	TArray<int32_t> RewardId15; // 0x160
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x18
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

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xf0
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0xf8
	TArray<FGuid> CachedStaticLighting; // 0x108
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x118
};

struct FDeathPenaltyExpTemplate : FTableRowBase {
	int32_t DeathPenalty_ExpId; // 0x8
	int32_t MaxLv; // 0xc
	int32_t Penalty_ExpRate; // 0x10
	int32_t FreeRecovery_Limit; // 0x14
	int32_t FreeRecovery_EXPRate; // 0x18
	int32_t GeneralRecovery_CostType; // 0x1c
	int32_t GeneralRecovery_CostCnt; // 0x20
	int32_t GeneralRecovery_EXPRate; // 0x24
	int32_t AdvancedRecovery_CostType; // 0x28
	int32_t AdvancedRecovery_CostCnt; // 0x2c
	int32_t AdvancedRecovery_EXPRate; // 0x30
	int32_t ItemRecovery_ItemUseId; // 0x34
	int32_t ItemRecovery_ItemCnt; // 0x38
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

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xa8
	float AverageBrightness; // 0xb8
};

struct FItemGetWayInfoTemplate : FTableRowBase {
	int32_t UniqueId; // 0x8
	int32_t StageId; // 0xc
	int32_t NpcID; // 0x10
	int32_t LinkID; // 0x14
	EItemGetWayType GetWayType; // 0x18
	EItemGetWayLinkType LinkType; // 0x1c
	FVector Location; // 0x20
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_AssetPlayerBase {
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

struct FScalarMaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
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

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FPKSystemTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t AdditionActionAbleTime; // 0xc
	int32_t WantedRegistCostId; // 0x10
	int32_t WantedRegistCostValue; // 0x14
	int32_t WantedRewardCostId; // 0x18
	int32_t WantedRewardCostValueMin; // 0x1c
	int32_t WantedRewardCostValueMax; // 0x20
	int32_t WantedAdTime; // 0x24
	int32_t WantedMailId; // 0x28
	int32_t FameQuestId; // 0x2c
	int32_t RewardCommission; // 0x30
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FBuffPartyTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ConditionPeople; // 0xc
	int32_t PartyProfitValue1; // 0x10
	int32_t PartyProfitValue2; // 0x14
};

struct FAutoMoveDirectingTemplate : FTableRowBase {
	int32_t StageId; // 0x8
	FVector StartCoordinate; // 0xc
	FVector EndCoordinate; // 0x18
	int32_t JumpAni1; // 0x24
	float JumpDistance1; // 0x28
	float JumpHeight1; // 0x2c
	int32_t JumpAni2; // 0x30
	float JumpDistance2; // 0x34
	float JumpHeight2; // 0x38
	int32_t JumpAni3; // 0x3c
	float JumpDistance3; // 0x40
	float JumpHeight3; // 0x44
};

struct FWidgetMasterTemplate : FTableRowBase {
	FString WidgetPath; // 0x8
	EWidgetLayer LayerGroup; // 0x18
	int32_t LayerPriority; // 0x1c
	bool IsMaintainWidget; // 0x20
	EWidgetOpenAllowTable OpenAllow; // 0x24
	EWidgetPopupType PopupType; // 0x28
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

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FStringBuiltinTemplate : FTableRowBase {
	int32_t StringID; // 0x8
	FString TextKr; // 0x10
	FString CHT; // 0x20
	FString CHS; // 0x30
	FString JPN; // 0x40
	FString ENG; // 0x50
	FString THA; // 0x60
	FString IND; // 0x70
	FString VIE; // 0x80
	FString GER; // 0x90
	FString SPA; // 0xa0
	FString POR; // 0xb0
	FString RUS; // 0xc0
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FClothLODData {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xa8
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FPosotion_Vector2DCurve {
	FUIParticleProperty X; // 0x0
	FUIParticleProperty Y; // 0x7e8
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
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

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
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

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
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

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
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

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FPatchFileInfo {
	FString Name; // 0x0
	FString Version; // 0x10
	int32_t Step; // 0x20
	FString Size; // 0x28
	bool needDecompress; // 0x38
	FString decompressSize; // 0x40
	uint32_t crc; // 0x50
	int64_t downloadTargetSize; // 0x58
	int64_t currentDownloadSize; // 0x60
};

struct FFirebaseSignInResult {
	UFirebaseUser* user; // 0x0
	FAdditionalUserInfo Info; // 0x8
	FUserMetadata meta; // 0x78
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

struct FItemDurabilityRepairCostTemplate : FTableRowBase {
	int32_t RepairCostID; // 0x8
	int32_t ItemMainType; // 0xc
	int32_t ItemSubType; // 0x10
	int32_t Tier; // 0x14
	int32_t Grade; // 0x18
	int32_t ReqCostId01; // 0x1c
	int32_t ReqCostCount01; // 0x20
	int32_t ReqCostId02; // 0x24
	int32_t ReqCostCount02; // 0x28
	int32_t ReqItemId01; // 0x2c
	int32_t ReqItemCount01; // 0x30
};

struct FTimeTicketTemplate : FTableRowBase {
	int32_t TimeTicketId; // 0x8
	int32_t NameSId; // 0xc
	int32_t icon; // 0x10
	int32_t IconSmall; // 0x14
	int32_t ChargeTime; // 0x18
	int32_t ChargeCount; // 0x1c
	int32_t LimitType; // 0x20
	int64_t LimitUserMax; // 0x28
	int64_t LimitSystemMax; // 0x30
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x28
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FMovieSceneParticleChannel : FMovieSceneByteChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FRange_Vector2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	bool RandomKey_X_Y; // 0x10
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

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4e8
};

struct FUIParticleLinearColorCurve {
	FRichCurve ColorCurves[0x4]; // 0x0
	ECurveType CurveType; // 0x200
	bool Loop; // 0x201
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

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FHitPostProcessMaterialData {
	float ControlTime; // 0x0
	UCurveFloat* pWeightCurve; // 0x8
	UCurveFloat* pEffectUseCurve; // 0x10
	UCurveFloat* pPowerCurve; // 0x18
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FHiddenPathTemplate : FTableRowBase {
	int32_t Portal1_ID; // 0x8
	int32_t Portal2_ID; // 0xc
	int32_t AreaName1_ID; // 0x10
	int32_t HiddenPathType; // 0x14
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0x8]; // 0x0
	char Weights[0x8]; // 0x20
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FGuildWarSiegeTemplate : FTableRowBase {
	int32_t SiegeId; // 0x8
	int32_t Siege_StageId; // 0xc
	int32_t NameSId; // 0x10
	TArray<int32_t> SiegeOpenDate; // 0x18
	TArray<int32_t> AuctionOpenStartWeek; // 0x28
	int32_t AuctionStartWeekInterval; // 0x38
	int32_t AuctionStartDayOfWeek; // 0x3c
	TArray<int32_t> AuctionStartTime; // 0x40
	int32_t AuctionRunTimeMinute; // 0x50
	int32_t AuctionExtensionTimeMinute; // 0x54
	int32_t AuctionMoneyId; // 0x58
	int32_t AuctionMoneyValueMin; // 0x5c
	int32_t AuctionIncreaseRate; // 0x60
	int32_t AuctionGuildDevLevel; // 0x64
	int32_t AuctionEndRunTimeMinute; // 0x68
	int32_t SiegeRunTimeMinute; // 0x6c
	int32_t EnterWarpLocationId_Defense; // 0x70
	int32_t EnterWarpRadius_Defencse; // 0x74
	int32_t EnterWarpLocationId_Offense; // 0x78
	int32_t EnterWarpRadius_Offense; // 0x7c
	FVector ReadyZoneLocation_Defense; // 0x80
	float ReadyZoneAxisYaw_Defense; // 0x8c
	int32_t ReadyZoneDistanceX_Defense; // 0x90
	int32_t ReadyZoneDistanceY_Defense; // 0x94
	FVector ReadyZoneLocation_Offense; // 0x98
	float ReadyZoneAxisYaw_Offense; // 0xa4
	int32_t ReadyZoneDistanceX_Offense; // 0xa8
	int32_t ReadyZoneDistanceY_Offense; // 0xac
	int32_t CastleGateIconId; // 0xb0
	int32_t CastleGateBGIconId; // 0xb4
	int32_t CastleGateId; // 0xb8
	FVector CastleGate_DieIconLocation; // 0xbc
	int32_t GateLeverIconId; // 0xc8
	int32_t GateLeverBGIconId; // 0xcc
	int32_t GateLeverId01; // 0xd0
	FVector GateLeverId01_DieIconLocation; // 0xd4
	int32_t GateLeverId02; // 0xe0
	FVector GateLeverId02_DieIconLocation; // 0xe4
	int32_t GateLeverId03; // 0xf0
	FVector GateLeverId03_DieIconLocation; // 0xf4
	int32_t GateLeverId04; // 0x100
	FVector GateLeverId04_DieIconLocation; // 0x104
	int32_t CaptureIconId; // 0x110
	int32_t CaptureId_SiegeWin; // 0x114
	TArray<int32_t> RevivalFlagIconID; // 0x118
	TArray<int32_t> RevivalFlagBGIconId; // 0x128
	int32_t RevivalFlag_Defence; // 0x138
	int32_t RevivalFlag_Offence; // 0x13c
	int32_t RevivalFlag01; // 0x140
	int32_t RevivalFlag02; // 0x144
	int32_t SiegeTowerIdIconID; // 0x148
	int32_t SiegeTowerIdBGIconId; // 0x14c
	int32_t SiegeTowerId01; // 0x150
	int32_t SiegeTowerId02; // 0x154
	int32_t SiegeTowerId03; // 0x158
	int32_t SiegeTowerId04; // 0x15c
	int32_t CatapultIconId; // 0x160
	int32_t CatapultBGIconId; // 0x164
	int32_t CatapultId01; // 0x168
	int32_t CatapultId02; // 0x16c
	int32_t CatapultId03; // 0x170
	int32_t CatapultId04; // 0x174
	FVector SiegeTowerId01_EffectLocation; // 0x178
	float SiegeTowerId01_EffectRotationYaw; // 0x184
	FVector SiegeTowerId02_EffectLocation; // 0x188
	float SiegeTowerId02_EffectRotationYaw; // 0x194
	FVector SiegeTowerId03_EffectLocation; // 0x198
	float SiegeTowerId03_EffectRotationYaw; // 0x1a4
	FVector SiegeTowerId04_EffectLocation; // 0x1a8
	float SiegeTowerId04_EffectRotationYaw; // 0x1b4
	FVector Catapultid01_EffectLocation; // 0x1b8
	float CatapultId01_EffectRotationYaw; // 0x1c4
	FVector Catapultid02_EffectLocation; // 0x1c8
	float CatapultId02_EffectRotationYaw; // 0x1d4
	FVector Catapultid03_EffectLocation; // 0x1d8
	float CatapultId03_EffectRotationYaw; // 0x1e4
	FVector Catapultid04_EffectLocation; // 0x1e8
	float CatapultId04_EffectRotationYaw; // 0x1f4
	int32_t Reward_DominionId; // 0x1f8
	int32_t MailPresetId_RewardGuild; // 0x1fc
	int32_t MailPresetId_Dominion_Return; // 0x200
	int32_t MailPresetId_Dominion_Change; // 0x204
};

struct FQuestCombatDeviationTemplate : FTableRowBase {
	int32_t DeviationId; // 0x8
	int32_t LevelMin; // 0xc
	int32_t LevelMax; // 0x10
	int32_t HighDeviation1; // 0x14
	int32_t HighDeviation2; // 0x18
	int32_t LowDeviation1; // 0x1c
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FClassPhaseTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t Class; // 0xc
	TArray<int32_t> PhaseClass; // 0x10
	int32_t ClassName; // 0x20
	int32_t ClassPortraitIcon; // 0x24
	TArray<int32_t> PhaseCreateCost; // 0x28
	TArray<int64_t> PhaseCreateCost_Value; // 0x38
	int32_t PhaseExceptionOnOff; // 0x48
};

struct FResourceEtcTemplate : FTableRowBase {
	int32_t ResourceId; // 0x8
	FString Filename; // 0x10
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FRBFParams {
	int32_t TargetDimensions; // 0x0
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

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
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

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x48
	EMovieSceneBlendType BlendType; // 0x2c8
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

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
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

struct FGuildLevelTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t Level; // 0xc
	int32_t ReqExp; // 0x10
	int32_t MaxMember; // 0x14
	int32_t MaxAlliance; // 0x18
	int32_t MaxDeclaration; // 0x1c
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FActorComponentTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
	TArray<UProperty*> SourceProperties; // 0x38
	TArray<UProperty*> DestProperties; // 0x48
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
};

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FMovieSceneObjectPathChannelKeyValue {
	UObject* SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FGachaGroupTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t GroupId; // 0xc
	int32_t ListGroupId; // 0x10
};

struct FContentsOpenTemplate : FTableRowBase {
	int32_t ContentsId; // 0x8
	int32_t ClassID; // 0xc
	int32_t ShowOnOff; // 0x10
	int32_t DefaultBtnType; // 0x14
	int32_t OpenConditionType; // 0x18
	int32_t OpenConditionValue; // 0x1c
	int32_t PlanAlramType; // 0x20
	int32_t PlanAlramValue; // 0x24
	int32_t TutorialGroupId; // 0x28
	int32_t LockOnOff; // 0x2c
	int32_t ServerVisitUseContents; // 0x30
};

struct FGameOptionKeySettingTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t KeyId; // 0xc
	int32_t KeyType; // 0x10
	int32_t NameSId; // 0x14
	FString Defaultkey; // 0x18
	FString ActionName; // 0x28
};

struct FGuildGiftLevelTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t GiftLevel; // 0xc
	int32_t ReqExptoNextLevel; // 0x10
	int32_t ReqOpenKeyNum; // 0x14
	int32_t GuildGiftId; // 0x18
};

struct FLoadingTemplate : FTableRowBase {
	int32_t LoadingId; // 0x8
	TArray<FString> LoadingImagePath; // 0x10
	TArray<int32_t> ToolTipTitleStringID; // 0x20
	TArray<int32_t> ToolTipContentStringID; // 0x30
};

struct FSlangTemplate : FTableRowBase {
	FString SlangWord; // 0x8
};

struct FStatusLimitTemplate : FTableRowBase {
	int32_t StatusId; // 0x8
	int32_t LimitMIN; // 0xc
	int32_t LimitMAX; // 0x10
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FGuildInfo {
	uint64_t GuildID; // 0x0
	FString GuildName; // 0x8
	int32_t GuildMarkEdgeIconID; // 0x18
	int32_t GuildMarkIconID; // 0x1c
};

struct FMsgDisplayInfo {
	TWeakObjectPtr<UWidgetBase> m_pSlot; // 0x0
	int32_t m_iCurIndex; // 0x8
	float m_fDestLocY; // 0xc
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

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0xe0
	int32_t LODThreshold; // 0xf0
	float Alpha; // 0xf4
	FInputScaleBias AlphaScaleBias; // 0xf8
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x100
	FName AlphaCurveName; // 0x148
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x150
	EAnimAlphaInputType AlphaInputType; // 0x184
	bool bAlphaBoolEnabled; // 0x185
};

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
};

struct FGuildDailyMissionTemplate : FTableRowBase {
	int32_t Guild_Daily_MissionId; // 0x8
	int32_t Guild_Daily_Mission_Enable; // 0xc
	int32_t Guild_Daily_MissionIcon; // 0x10
	int32_t Guild_Daily_MissionTitle; // 0x14
	int32_t MissionType; // 0x18
	int32_t MissionTarget; // 0x1c
	int32_t Parameter1; // 0x20
	int32_t Parameter2; // 0x24
	int32_t Guild_Reward_Type1; // 0x28
	int32_t Guild_Reward_Value1_2; // 0x2c
	int32_t Guild_Reward_Value1_3; // 0x30
	int32_t Guild_Reward_Type2; // 0x34
	int32_t Guild_Reward_Value2_2; // 0x38
	int32_t Guild_Reward_Value2_3; // 0x3c
	int32_t Guild_Reward_Type3; // 0x40
	int32_t Guild_Reward_Value3_2; // 0x44
	int32_t Guild_Reward_Value3_3; // 0x48
	int32_t Guild_Reward_Type4; // 0x4c
	int32_t Guild_Reward_Value4_2; // 0x50
	int32_t Guild_Reward_Value4_3; // 0x54
	int32_t Guild_Reward_Type5; // 0x58
	int32_t Guild_Reward_Value5_2; // 0x5c
	int32_t Guild_Reward_Value5_3; // 0x60
	int32_t Personal_Reward_Type1; // 0x64
	int32_t Personal_Reward_Value1_2; // 0x68
	int32_t Personal_Reward_Value1_3; // 0x6c
	int32_t Personal_Reward_Type2; // 0x70
	int32_t Personal_Reward_Value2_2; // 0x74
	int32_t Personal_Reward_Value2_3; // 0x78
	int32_t Personal_Reward_Type3; // 0x7c
	int32_t Personal_Reward_Value3_2; // 0x80
	int32_t Personal_Reward_Value3_3; // 0x84
	int32_t Personal_Reward_Type4; // 0x88
	int32_t Personal_Reward_Value4_2; // 0x8c
	int32_t Personal_Reward_Value4_3; // 0x90
	int32_t Personal_Reward_Type5; // 0x94
	int32_t Personal_Reward_Value5_2; // 0x98
	int32_t Personal_Reward_Value5_3; // 0x9c
	int32_t Guild_Daily_Mission_MaxCnt; // 0xa0
	int32_t icon; // 0xa4
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FForceFeedbackAttenuationSettings : FBaseAttenuationSettings {
	EAttenuationDistanceModel DistanceAlgorithm; // 0x8
	EAttenuationShape AttenuationShape; // 0x9
	float dBAttenuationAtMax; // 0xc
	FVector AttenuationShapeExtents; // 0x10
	float ConeOffset; // 0x1c
	float FalloffDistance; // 0x20
	FRuntimeFloatCurve CustomAttenuationCurve; // 0x28
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
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

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FOccupationReward {
	EOccupationRewardType RewardType; // 0x0
	int32_t ID; // 0x4
	int32_t Count; // 0x8
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
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

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xb0
	FGuid LightGuid; // 0xe0
	int32_t PreviewShadowMapChannel; // 0xf0
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

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
	UStructProperty* VectorProperty; // 0x28
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
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

struct FTotemTemplate : FTableRowBase {
	int32_t TotemId; // 0x8
	FName ResourceId; // 0xc
	int32_t PhysicalAttack; // 0x14
	int32_t MagicAttack; // 0x18
	int32_t AccuracyPer; // 0x1c
	int32_t CriticalPer; // 0x20
	int32_t CriticalOutcomePer; // 0x24
	int32_t AttackDelay; // 0x28
	int32_t SkillAttackID; // 0x2c
	int32_t CombatPower; // 0x30
	int32_t Cleartime; // 0x34
	int32_t DetectRange; // 0x38
	FString AniSequence; // 0x40
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
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

struct FRange_LinearColorCurve {
	FUIParticleLinearColorCurve Min; // 0x0
	FUIParticleLinearColorCurve Max; // 0x208
	bool RandomKey_R_G; // 0x410
	bool RandomKey_R_B; // 0x411
	bool RandomKey_R_A; // 0x412
	bool RandomKey_G_B; // 0x413
	bool RandomKey_G_A; // 0x414
	bool RandomKey_B_A; // 0x415
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

struct FMaterialParameterCollectionInfo {
	FGuid StateID; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FItemPackageTemplate : FTableRowBase {
	int32_t PackageId; // 0x8
	int32_t OpenEffect; // 0xc
	int32_t RewardType1; // 0x10
	TArray<int32_t> RewardId1; // 0x18
	int32_t RewardValue1; // 0x28
	int32_t RewardType2; // 0x2c
	TArray<int32_t> RewardId2; // 0x30
	int32_t RewardValue2; // 0x40
	int32_t RewardType3; // 0x44
	TArray<int32_t> RewardId3; // 0x48
	int32_t RewardValue3; // 0x58
	TArray<int32_t> RewardItem1; // 0x60
	int32_t RewardItemValue1; // 0x70
	TArray<int32_t> RewardItem2; // 0x78
	int32_t RewardItemValue2; // 0x88
	TArray<int32_t> RewardItem3; // 0x90
	int32_t RewardItemValue3; // 0xa0
	TArray<int32_t> RewardItem4; // 0xa8
	int32_t RewardItemValue4; // 0xb8
	TArray<int32_t> RewardItem5; // 0xc0
	int32_t RewardItemValue5; // 0xd0
	TArray<int32_t> RewardItem6; // 0xd8
	int32_t RewardItemValue6; // 0xe8
	TArray<int32_t> RewardItem7; // 0xf0
	int32_t RewardItemValue7; // 0x100
};

struct FMonsterRareActionTemplate : FTableRowBase {
	int32_t MonShieldType; // 0x8
	int32_t MonShield; // 0xc
	int32_t RecoverShield; // 0x10
	int32_t UnbeatableShield; // 0x14
	int32_t ShieldBrokenBuff; // 0x18
	int32_t ShieldStance; // 0x1c
	int32_t GetUpAniTime; // 0x20
	int32_t TurnAngleMin; // 0x24
	int32_t TurnAngleSpeed; // 0x28
	int32_t TurnAniTime; // 0x2c
	int32_t BroadcastingSize; // 0x30
	int32_t SleepType; // 0x34
	int32_t AwakeAniTime; // 0x38
	int32_t DamageLimit; // 0x3c
	int32_t ShieldRecoverType; // 0x40
	int32_t ShieldRegeneration; // 0x44
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

struct FPatchId {
	int32_t ID; // 0x0
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FStageSectorTemplate : FTableRowBase {
	int32_t SectorID; // 0x8
	int32_t StageId; // 0xc
	int32_t SectorGrade; // 0x10
	int32_t RewardCostRate; // 0x14
	int32_t LuckyRewardDropRate; // 0x18
	int32_t NameTagDropItemRate; // 0x1c
	int32_t SummonGoblinRate; // 0x20
};

struct FPawnMovementComponentPostPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float Weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FClosedTrainingTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t TrainingGroupID; // 0xc
	int32_t TrainingGroup_NameSID; // 0x10
	int32_t ClassID; // 0x14
	int32_t TrainingGroup_Color; // 0x18
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FGuildDominionPkGradeTemplate : FTableRowBase {
	int32_t DominionPKId; // 0x8
	int32_t DominionPkNameId; // 0xc
	int32_t DominionPkIconId; // 0x10
	int32_t DominionPKRewardType; // 0x14
	int32_t DominionPKRewardTypeSub; // 0x18
	int32_t DominionPKRewardValue; // 0x1c
	int32_t DominionPKDurationTime; // 0x20
	int32_t DominionPKTargetDebuff; // 0x24
	int32_t DominionPKCostType; // 0x28
	int32_t DominionPKCostValue; // 0x2c
};

struct FGuildFameCategoryTemplate : FTableRowBase {
	int32_t CategoryID; // 0x8
	int32_t CategoryType; // 0xc
	int32_t HighCategoryId; // 0x10
	int32_t CategoryNameStrId; // 0x14
	int32_t CategoryIconId; // 0x18
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FCharStatistics {
	int32_t CombatPoint; // 0x0
	int32_t Level; // 0x4
	int32_t HP; // 0x8
	int32_t HPShield; // 0xc
	int32_t MaxHP; // 0x10
	int32_t MP; // 0x14
	int32_t MaxMP; // 0x18
	int32_t SP; // 0x1c
	int32_t MaxSP; // 0x20
	float Rage; // 0x24
	float MaxRage; // 0x28
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FColorIndexTemplate : FTableRowBase {
	int32_t ColorId; // 0x8
	FString HexColor; // 0x10
	int32_t ColorName; // 0x20
};

struct FBoneCustomizingTemplate : FTableRowBase {
	FString ControlName; // 0x8
	TArray<FCustomBoneData> BoneDataArray; // 0x18
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

struct FQuestRelationRewardTemplate : FTableRowBase {
	int32_t RelationRewardId; // 0x8
	int32_t EpisodeType; // 0xc
	TArray<int32_t> RelationIDGroup; // 0x10
	int32_t RewardIcon; // 0x20
	int32_t RewardExp; // 0x24
	int32_t RewardGOLD; // 0x28
	int32_t RewardGoodsType; // 0x2c
	int32_t RewardGoodsCount; // 0x30
	TArray<int32_t> RewardItemId01; // 0x38
	int32_t RewardItemCount01; // 0x48
	TArray<int32_t> RewardItemId02; // 0x50
	int32_t RewardItemCount02; // 0x60
	TArray<int32_t> RewardItemId03; // 0x68
	int32_t RewardItemCount03; // 0x78
	TArray<int32_t> RewardItemId04; // 0x80
	int32_t RewardItemCount04; // 0x90
	TArray<int32_t> RewardItemId05; // 0x98
	int32_t RewardItemCount05; // 0xa8
	TArray<int32_t> RewardItemId06; // 0xb0
	int32_t RewardItemCount06; // 0xc0
};

struct FMovieSceneEventTriggerTemplate : FMovieSceneEventTemplateBase {
	TArray<FFrameNumber> EventTimes; // 0x38
	TArray<FMovieSceneEventPtrs> Events; // 0x48
};

struct FMovieSceneFloatPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel FloatFunction; // 0x48
	EMovieSceneBlendType BlendType; // 0xe8
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

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
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

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FItemInfoSummaryTemplate : FTableRowBase {
	int32_t ItemInfoSummaryID; // 0x8
	int32_t ContentsId; // 0xc
	FString UMGFilePath; // 0x10
	FString ParentsSlotName; // 0x20
	FString ItemSlotName; // 0x30
	int32_t SlotButton; // 0x40
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
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

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FCameraInfoPreset {
	float CameraFov; // 0x0
	float CameraHeight; // 0x4
	float MinDistance; // 0x8
	float MaxDistance; // 0xc
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	UStructProperty* OutputPoseNodeProperty; // 0x38
	TArray<UStructProperty*> InputPoseNodeProperties; // 0x40
	TArray<UProperty*> InputProperties; // 0x50
	bool bImplemented; // 0x60
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
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

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FPreloadData {
	bool bMaintenance; // 0x0
	bool bMaintenanceInLevel; // 0x1
	FString ResourcePath; // 0x8
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaId; // 0x10
	UObject* AreaClass; // 0x18
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
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

struct FCompilerNativizationOptions {
	FName PlatformName; // 0x0
	bool ServerOnlyPlatform; // 0x8
	bool ClientOnlyPlatform; // 0x9
	bool bExcludeMonolithicHeaders; // 0xa
	TArray<FName> ExcludedModules; // 0x10
	TSet<FSoftObjectPath> ExcludedAssets; // 0x20
	TArray<FString> ExcludedFolderPaths; // 0x70
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FAnimNode_PoseDriver : FAnimNode_PoseHandler {
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

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FFacebookFriend {
	FString ID; // 0x0
	FString Name; // 0x10
	FString AvatarURL; // 0x20
};

struct FMoviePlayTemplate : FTableRowBase {
	int32_t MoviePlayId; // 0x8
	int32_t SkipDelay; // 0xc
	FString MoviePath; // 0x10
	FString SubtitlePath; // 0x20
};

struct FMovieSceneSequenceTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FFameLevelTemplate : FTableRowBase {
	int32_t FameId; // 0x8
	int32_t Level; // 0xc
	int32_t ReqExp; // 0x10
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
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

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0x8]; // 0x4
	float BoneWeights[0x8]; // 0x14
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FFontParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UFont* FontValue; // 0x10
	int32_t FontPage; // 0x18
	FGuid ExpressionGUID; // 0x1c
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FShopItemTemplate : FTableRowBase {
	int32_t ShopItemID; // 0x8
	int32_t ShopId; // 0xc
	int32_t NeedCostId01; // 0x10
	int32_t NeedCostCount01; // 0x14
	int32_t NeedCostId02; // 0x18
	int32_t NeedCostCount02; // 0x1c
	int32_t ResultItemId; // 0x20
	int32_t ResultItemIdCount; // 0x24
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FNpcShowScheduleTemplate : FTableRowBase {
	int32_t ViewWeek; // 0x8
	int32_t ViewHour; // 0xc
	int32_t ViewMinute; // 0x10
	int32_t HideHour; // 0x14
	int32_t HideMinute; // 0x18
};

struct FMovieSceneTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FItemExtendTemplate : FTableRowBase {
	int32_t ItemId; // 0x8
	int32_t AddRandomOptionRatio01; // 0xc
	int32_t AddRandomOptionRatio02; // 0x10
	int32_t BattlePoint; // 0x14
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneEvaluationFieldSegmentPtr> SegmentPtrLUT; // 0x10
};

struct FItemGetWayUITemplate : FTableRowBase {
	int32_t GetWayId; // 0x8
	TArray<int32_t> ItemGetWay; // 0x10
	int32_t GetWayFilterType; // 0x20
	int32_t GetWayFilterValueMin; // 0x24
	int32_t GetWayFilterValueMax; // 0x28
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
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

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FUserEventTemplate : FTableRowBase {
	int32_t eventId; // 0x8
	int32_t EventName; // 0xc
	int32_t eventType; // 0x10
	int32_t EventContentsId; // 0x14
	int32_t MaxStep; // 0x18
	int32_t StartCondition; // 0x1c
	FString StartTime; // 0x20
	int32_t CloseCondition; // 0x30
	FString CloseTime; // 0x38
	FString UiButtonUrl; // 0x48
	int32_t UiButtonIcon; // 0x58
	FString UiButtonImg; // 0x60
	int32_t UiButtonName; // 0x70
	FString UiInPresetUrl; // 0x78
	FString UiInPresetLocal; // 0x88
	int32_t UiOrderNum; // 0x98
	int32_t MaterialItemUseId; // 0x9c
	int32_t MaterialItemCnt; // 0xa0
	int32_t RewardLimit; // 0xa4
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FOneStoreIapProductData {
	FString OriginalProductJson; // 0x0
	FString ProductId; // 0x10
	FString Type; // 0x20
	FString Price; // 0x30
	FString PriceCurrencyCode; // 0x40
	FString PriceAmountMicros; // 0x50
	FString Title; // 0x60
};

struct FNpcItemListTemplate : FTableRowBase {
	int32_t NpcItemListGroupId; // 0x8
	int32_t NpcItemListUseType; // 0xc
	int32_t ClassID; // 0x10
	int32_t TargetItemMakeId; // 0x14
};

struct FQueueUITemplate : FTableRowBase {
	int32_t UniqueId; // 0x8
	int32_t Priority; // 0xc
	bool OverTake; // 0x10
	FString Filename; // 0x18
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x50
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FVertexInstanceID : FElementID {
	int32_t IDValue; // 0x0
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	FMaterialProxySettings StaticMeshMaterialSettings; // 0x8
	bool bOverrideLandscapeExportLOD; // 0x7c
	int32_t LandscapeExportLOD; // 0x80
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

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
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

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FMapMiniInfoTemplate : FTableRowBase {
	int32_t Name; // 0x8
	EMapMiniInfoMainType InfoMainType; // 0xc
	int32_t InfoSubType; // 0x10
	int32_t InfoSubTypeValue; // 0x14
	int32_t InfoValue; // 0x18
	int32_t DetailInfoValue; // 0x1c
	int32_t InfoStringId; // 0x20
	EMapMiniInfoStringPosType InfoStringPosType; // 0x24
	FVector InfoCoordinate; // 0x28
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
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

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FContentsAlarmTemplate : FTableRowBase {
	int32_t ContentsAlarmId; // 0x8
	int32_t ContentsId; // 0xc
	int32_t AlarmConditionType; // 0x10
	int32_t ContentAlarmTitle; // 0x14
	int32_t ContentAlarmDesc; // 0x18
	int32_t GameOptionGroup; // 0x1c
};

struct FDropRewardBoxTypeGroupTemplate : FTableRowBase {
	int32_t GroupTypeRewardBoxGroupID; // 0x8
	int32_t Drop_Reward_ObjectGroupID_A; // 0xc
	int32_t Drop_Reward_ObjectGroupID_B; // 0x10
	int32_t Drop_Reward_ObjectGroupID_C; // 0x14
};

struct FMonsterTemplate : FTableRowBase {
	int32_t MonsterId; // 0x8
	int32_t MonsterResourceID; // 0xc
	int32_t GroupId; // 0x10
	int32_t NameSId; // 0x14
	int32_t NameTitleSid; // 0x18
	int32_t Race; // 0x1c
	int32_t MonGrade; // 0x20
	int32_t WaypointAuto; // 0x24
	int32_t Level; // 0x28
	int32_t MonType; // 0x2c
	float MonScale; // 0x30
	int32_t RunSpeed; // 0x34
	int32_t WalkSpeed; // 0x38
	int32_t MaxHP; // 0x3c
	int32_t HpStack; // 0x40
	int32_t CombatPower; // 0x44
	int32_t PierceBody; // 0x48
	EMONSTER_FACTION FactionType; // 0x4c
	int32_t MonColorGroupID; // 0x50
	float CapsuleHalfHeight; // 0x54
	float CapsuleRadius; // 0x58
	float UseAppear; // 0x5c
	int32_t SiegeMode; // 0x60
	FString MonsterFunctionData; // 0x68
	int32_t CollectItemId; // 0x78
	int32_t DropItemId; // 0x7c
	int32_t PhysicalAttack; // 0x80
	int32_t MagicAttack; // 0x84
	int32_t Physicaldefense; // 0x88
	int32_t Magicdefense; // 0x8c
	int32_t Accuracy; // 0x90
	int32_t Dodge; // 0x94
	int32_t AiIndex; // 0x98
	int32_t LongAttackRange; // 0x9c
};

struct FAGAudioAttributesFlags {
	bool AudibilityEnforced; // 0x0
	bool HwAvSync; // 0x1
	bool LowLatency; // 0x2
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FSourceEffectChorusSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x7f8
};

struct FAdsInfoTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t UniqueId; // 0xc
	int32_t adsGetMoneyId; // 0x10
	int32_t adsGetMoneyValue; // 0x14
	int32_t adsViewCountLimit; // 0x18
	int32_t getPointValue; // 0x1c
	int32_t RewardPoint; // 0x20
	int32_t RewardPointMax; // 0x24
	int32_t adsRewardItemId; // 0x28
	int32_t adsViewCoolTime; // 0x2c
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
};

struct FScalarParamFloat {
	FName ScalarParamName; // 0x0
	FRange_Float Value; // 0x8
};

struct FMovieSceneSpawnable {
	FTransform SpawnTransform; // 0x0
	TArray<FName> Tags; // 0x30
	bool bContinuouslyRespawn; // 0x40
	FGuid Guid; // 0x44
	FString Name; // 0x58
	UObject* ObjectTemplate; // 0x68
	TArray<FGuid> ChildPossessables; // 0x70
	ESpawnOwnership OwnerShip; // 0x80
	FName LevelName; // 0x84
};

struct FNpcDialogTemplate : FTableRowBase {
	TArray<int32_t> DialogValue; // 0x8
	TArray<int32_t> DialogVoice; // 0x18
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString ToolTip; // 0x10
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* metadata; // 0x60
};

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentID; // 0x8
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FContentsAdminTemplate : FTableRowBase {
	int32_t ContentsId; // 0x8
	int32_t ContentsIcon; // 0xc
	int32_t ContentsName; // 0x10
	int32_t ContentsOpenName; // 0x14
	int32_t ContentsDesc; // 0x18
	int32_t MenuId; // 0x1c
	int32_t VerTabId; // 0x20
	int32_t HoriTabId; // 0x24
};

struct FPoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FItemRandomGetInfoTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RandomGetInfoId; // 0xc
	int32_t ProbabilityRange1; // 0x10
	int32_t StringId1; // 0x14
	int32_t ProbabilityRange2; // 0x18
	int32_t StringId2; // 0x1c
	int32_t ProbabilityRange3; // 0x20
	int32_t StringId3; // 0x24
	int32_t ProbabilityRange4; // 0x28
	int32_t StringId4; // 0x2c
	int32_t ProbabilityRange5; // 0x30
	int32_t StringId5; // 0x34
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FClothPhysicalMeshData {
	TArray<FVector> Vertices; // 0x0
	TArray<FVector> Normals; // 0x10
	TArray<uint32_t> Indices; // 0x20
	TArray<float> MaxDistances; // 0x30
	TArray<float> BackstopDistances; // 0x40
	TArray<float> BackstopRadiuses; // 0x50
	TArray<float> AnimDriveMultipliers; // 0x60
	TArray<float> InverseMasses; // 0x70
	TArray<FClothVertBoneData> BoneData; // 0x80
	int32_t MaxBoneWeights; // 0x90
	int32_t NumFixedVerts; // 0x94
	TArray<uint32_t> SelfCollisionIndices; // 0x98
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0x48
	EEvaluatorDataSource DataSource; // 0x50
	EEvaluatorMode EvaluatorMode; // 0x51
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	FName ChildActorName; // 0xa8
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xb0
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FSmallTalkDialogueTemplate : FTableRowBase {
	int32_t SmalltTalkDialogueId; // 0x8
	int32_t NpcID; // 0xc
	int32_t NextDialogueID; // 0x10
	float PlayTime; // 0x14
	FString Dialogue_Male; // 0x18
	FString Dialogue_Male_CHT; // 0x28
	FString Dialogue_Male_CHS; // 0x38
	FString Dialogue_Male_JPN; // 0x48
	FString Dialogue_Male_ENG; // 0x58
	FString Dialogue_Male_THA; // 0x68
	FString Dialogue_Male_IND; // 0x78
	FString Dialogue_Male_VIE; // 0x88
	FString Dialogue_Male_GER; // 0x98
	FString Dialogue_Male_SPA; // 0xa8
	FString Dialogue_Male_POR; // 0xb8
	FString Dialogue_Male_RUS; // 0xc8
	FString Dialogue_Female; // 0xd8
	FString Dialogue_Female_CHT; // 0xe8
	FString Dialogue_Female_CHS; // 0xf8
	FString Dialogue_Female_JPN; // 0x108
	FString Dialogue_Female_ENG; // 0x118
	FString Dialogue_Female_THA; // 0x128
	FString Dialogue_Female_IND; // 0x138
	FString Dialogue_Female_VIE; // 0x148
	FString Dialogue_Female_GER; // 0x158
	FString Dialogue_Female_SPA; // 0x168
	FString Dialogue_Female_POR; // 0x178
	FString Dialogue_Female_RUS; // 0x188
	int32_t Sound_Male; // 0x198
	int32_t Sound_Female; // 0x19c
};

struct FInvenItemType {
	int32_t MainType; // 0x0
	TArray<int32_t> SubType; // 0x8
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	float VoxelSize; // 0x4
	FMaterialProxySettings MaterialSettings; // 0x8
	float MergeDistance; // 0x7c
	FColor UnresolvedGeometryColor; // 0x80
	float MaxRayCastDist; // 0x84
	float HardAngleThreshold; // 0x88
	int32_t LightMapResolution; // 0x8c
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

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> Entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
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
	int32_t MinLightmapResolution; // 0x4
	int32_t SrcLightmapIndex; // 0x8
	int32_t DstLightmapIndex; // 0xc
	float BuildScale; // 0x10
	FVector BuildScale3D; // 0x14
	float DistanceFieldResolutionScale; // 0x20
	UStaticMesh* DistanceFieldReplacementMesh; // 0x28
};

struct FEventTimelineTemplate : FTableRowBase {
	int32_t TimelineID; // 0x8
	int32_t TimelineType; // 0xc
	int32_t StartMO; // 0x10
	int32_t StartDD; // 0x14
	int32_t StartHH; // 0x18
	int32_t StartMI; // 0x1c
	int32_t EndMO; // 0x20
	int32_t EndDD; // 0x24
	int32_t EndHH; // 0x28
	int32_t EndMI; // 0x2c
	FString Days_1StartTime; // 0x30
	FString Days_1EndTime; // 0x40
	FString Days_2StartTime; // 0x50
	FString Days_2EndTime; // 0x60
	FString Days_3StartTime; // 0x70
	FString Days_3EndTime; // 0x80
	FString Days_4StartTime; // 0x90
	FString Days_4EndTime; // 0xa0
	FString Days_5StartTime; // 0xb0
	FString Days_5EndTime; // 0xc0
	FString Days_6StartTime; // 0xd0
	FString Days_6EndTime; // 0xe0
	FString Days_7StartTime; // 0xf0
	FString Days_7EndTime; // 0x100
	FString Iterate; // 0x110
	int32_t AlarmWidget; // 0x130
	int32_t AlarmWidget_Message1; // 0x134
	int32_t AlarmWidget_Message2; // 0x138
	int32_t AlarmRangeValue; // 0x13c
	int32_t AlarmWidget_Message3; // 0x140
};

struct FSoundClassProperties {
	float Volume; // 0x0
	float Pitch; // 0x4
	float LowPassFilterFrequency; // 0x8
	float StereoBleed; // 0xc
	float LFEBleed; // 0x10
	float VoiceCenterChannelVolume; // 0x14
	float RadioFilterVolume; // 0x18
	float RadioFilterVolumeThreshold; // 0x1c
	char bApplyEffects : 1; // 0x20
	char bAlwaysPlay : 1; // 0x20
	char bIsUISound : 1; // 0x20
	char bIsMusic : 1; // 0x20
	char bReverb : 1; // 0x20
	float Default2DReverbSendAmount; // 0x24
	char bCenterChannelOnly : 1; // 0x28
	char bApplyAmbientVolumes : 1; // 0x28
	EAudioOutputTarget OutputTarget; // 0x2c
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x2d
};

struct FGuildPositionTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t GroupId; // 0xc
	int32_t PositionId; // 0x10
	int32_t Number; // 0x14
	int32_t Type; // 0x18
	int32_t NameId; // 0x1c
	int32_t IconID; // 0x20
	int32_t FrameId; // 0x24
	int32_t BuffId; // 0x28
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xa8
	FSplineCurves SplineCurves; // 0xb0
	FSplineCurves SplineCurvesPreUCS; // 0x118
};

struct FItemMaterialComposeTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t MainType; // 0xc
	int32_t SubType; // 0x10
	int32_t TabHorizon; // 0x14
	int32_t ComposeGrade; // 0x18
	int32_t FailPointType; // 0x1c
	int32_t FailPointReward; // 0x20
	int32_t SuccessRate; // 0x24
	int32_t GreatSuccessRate; // 0x28
	int32_t SuccessComposeListID1; // 0x2c
	int32_t SuccessComposeListID2; // 0x30
	int32_t SuccessComposeListID3; // 0x34
	int32_t SuccessComposeListID4; // 0x38
	int32_t SuccessComposeListID5; // 0x3c
	int32_t FailComposeListID1; // 0x40
	int32_t FailComposeListID2; // 0x44
	int32_t FailComposeListID3; // 0x48
	int32_t FailComposeListID4; // 0x4c
	int32_t FailComposeListID5; // 0x50
	int32_t FailPointCompseListID1; // 0x54
	int32_t FailPointCompseListID2; // 0x58
	int32_t FailPointCompseListID3; // 0x5c
	int32_t FailPointCompseListID4; // 0x60
	int32_t FailPointCompseListID5; // 0x64
};

struct FItemTagGroupTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t TagGroupId; // 0xc
	int32_t Tag01Rate; // 0x10
	int32_t Tag01Id; // 0x14
	int32_t Tag02Rate; // 0x18
	int32_t Tag02Id; // 0x1c
	int32_t Tag03Rate; // 0x20
	int32_t Tag03Id; // 0x24
	int32_t Tag04Rate; // 0x28
	int32_t Tag04Id; // 0x2c
	int32_t Tag05Rate; // 0x30
	int32_t Tag05Id; // 0x34
	int32_t Tag06Rate; // 0x38
	int32_t Tag06Id; // 0x3c
	int32_t Tag07Rate; // 0x40
	int32_t Tag07Id; // 0x44
	int32_t Tag08Rate; // 0x48
	int32_t Tag08Id; // 0x4c
	int32_t Tag09Rate; // 0x50
	int32_t Tag09Id; // 0x54
	int32_t Tag10Rate; // 0x58
	int32_t Tag10Id; // 0x5c
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
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

struct FClothCollisionPrim_Box {
	int32_t BoneIndex; // 0x0
	FVector LocalMin; // 0x4
	FVector LocalMax; // 0x10
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
};

struct FGuideLinkTemplate : FTableRowBase {
	int32_t GuideLinkID; // 0x8
	int32_t ContentsId; // 0xc
	FString Url_Kr; // 0x10
	FString Url_Cn; // 0x20
};

struct FGuildDominionExchangeTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ExchangeId; // 0xc
	int32_t ExchangeDominionId; // 0x10
	int32_t ExchangeStringId; // 0x14
	int32_t MoneyId_Send; // 0x18
	int32_t MoneyId_Receive; // 0x1c
	int32_t PayCommissionRate; // 0x20
	int32_t PayMailPresetId; // 0x24
	int32_t PayMoneyMinValue; // 0x28
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

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FStatusInfoTemplate : FTableRowBase {
	int32_t StatusInfoId; // 0x8
	int32_t InfoOrder; // 0xc
	int32_t InfoString; // 0x10
	int32_t InfoExpString; // 0x14
	TArray<int32_t> InfoValueAdd; // 0x18
	int32_t ContentsId; // 0x28
	int32_t InfoIconId; // 0x2c
};

struct FUIShopGoodsTemplate : FTableRowBase {
	int32_t GoodsId; // 0x8
	TArray<int32_t> TabId; // 0x10
	int32_t GoodsType; // 0x20
	int32_t GoodsCommodityId; // 0x24
	int32_t DisplayOnOff; // 0x28
	int32_t OnOffType; // 0x2c
	int32_t OrderNum; // 0x30
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> metadata; // 0x48
};

struct FComponentSpacePoseLink : FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FMovieSceneSubSequenceData {
	FSoftObjectPath Sequence; // 0x0
	FMovieSceneSequenceTransform RootToSequenceTransform; // 0x18
	FFrameRate TickResolution; // 0x24
	FMovieSceneSequenceID DeterministicSequenceID; // 0x2c
	FMovieSceneFrameRange PlayRange; // 0x30
	FMovieSceneFrameRange PreRollRange; // 0x40
	FMovieSceneFrameRange PostRollRange; // 0x50
	int32_t HierarchicalBias; // 0x60
	FMovieSceneSequenceInstanceDataPtr InstanceData; // 0x68
	FGuid SubSectionSignature; // 0x88
	FMovieSceneSequenceTransform OuterToInnerTransform; // 0x98
};

struct FInstanceDungeonInfoTemplate : FRewardCommonTemplate {
	int32_t DungeonId; // 0x98
	int32_t Stage_ID; // 0x9c
	bool IsShow; // 0xa0
	int32_t TitleSId; // 0xa4
	int32_t DungeonKind; // 0xa8
	int32_t MemberKind; // 0xac
	int32_t RecommendedPerson; // 0xb0
	int32_t OccupationID; // 0xb4
	int32_t ConditionReqCombatPoint; // 0xb8
	int32_t StartLevel; // 0xbc
	int32_t NeedCost01Id; // 0xc0
	int32_t NeedCost01Count; // 0xc4
	int32_t NeedEnterType; // 0xc8
	int32_t NeedEnterTypeSub; // 0xcc
	int32_t NeedEnterCount; // 0xd0
	int32_t DungeonCoolTime; // 0xd4
	int32_t RecommendedCombatPoint; // 0xd8
	int32_t StageThumbnail; // 0xdc
	int32_t MonsterThumnail; // 0xe0
	int32_t MainBackGroundImg; // 0xe4
	int32_t Timeset; // 0xe8
	int32_t RewardExp; // 0xec
	int32_t RewardCost01Id; // 0xf0
	int32_t RewardCost01Count; // 0xf4
	int32_t RewardCost02Id; // 0xf8
	int32_t RewardCost02Count; // 0xfc
	int32_t PositionLocation1; // 0x100
	int32_t PositionLocation2; // 0x104
	int32_t PositionLocation3; // 0x108
	int32_t PositionLocation4; // 0x10c
	int32_t PositionLocation5; // 0x110
	int32_t PositionLocation6; // 0x114
	int32_t PositionLocation7; // 0x118
	int32_t PositionLocation8; // 0x11c
	int32_t PositionLocation9; // 0x120
	int32_t PositionLocation10; // 0x124
	int32_t PositionLocation11; // 0x128
	int32_t PositionLocation12; // 0x12c
	int32_t PositionLocation13; // 0x130
	int32_t PositionLocation14; // 0x134
	int32_t PositionLocation15; // 0x138
	int32_t LevelofdifficultyGroup; // 0x13c
	int32_t Levelofdifficulty; // 0x140
	int32_t Stage_Story; // 0x144
	TArray<int32_t> DungeonSchedule; // 0x148
	int32_t DropID01; // 0x158
	int32_t DropID02; // 0x15c
	int32_t GuildContributionReward; // 0x160
	int32_t GuildMemberClearGiftId; // 0x164
	int32_t PortraitID; // 0x168
	int32_t GuildClearRewardType1; // 0x16c
	int32_t GuildClearRewardTypeSub1; // 0x170
	int32_t GuildClearRewardValue1; // 0x174
	int32_t GuildClearRewardType2; // 0x178
	int32_t GuildClearRewardTypeSub2; // 0x17c
	int32_t GuildClearRewardValue2; // 0x180
	int32_t GuildClearRewardType3; // 0x184
	int32_t GuildClearRewardTypeSub3; // 0x188
	int32_t GuildClearRewardValue3; // 0x18c
};

struct FStringMailTemplate : FTableRowBase {
	int32_t StringID; // 0x8
	int32_t TextColorId; // 0xc
	FString TextKr; // 0x10
	FString CHT; // 0x20
	FString CHS; // 0x30
	FString JPN; // 0x40
	FString ENG; // 0x50
	FString THA; // 0x60
	FString IND; // 0x70
	FString VIE; // 0x80
	FString GER; // 0x90
	FString SPA; // 0xa0
	FString POR; // 0xb0
	FString RUS; // 0xc0
};

struct FCharacterExpBoosterTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t BoosterExpBonusRate; // 0x10
	int32_t BoosterExpBonusValue; // 0x14
	int32_t EnergyTimeMax; // 0x18
	int32_t EnergyTime_GatherMax; // 0x1c
	int32_t EnergyTime_GatherCharge; // 0x20
	int32_t UiShopGoodsId; // 0x24
	TArray<int32_t> StatusId; // 0x28
};

struct FWidgetInfo {
	EWidgetID m_eWidgetID; // 0x0
	bool m_bUseWidgetPool; // 0x10
	bool m_bAsyncLoading; // 0x11
	bool m_bShowingForAsyncLoading; // 0x12
	TWeakObjectPtr<UWidgetBase> m_pWidget; // 0x14
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x30
	float ExplicitTime; // 0x38
	bool bShouldLoop; // 0x3c
	bool bTeleportToExplicitTime; // 0x3d
	ESequenceEvalReinit ReinitializationBehavior; // 0x3e
	float StartPosition; // 0x40
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
};

struct FGuildWarSiegeRewardTemplate : FTableRowBase {
	int32_t RewardId; // 0x8
	int32_t RewardType; // 0xc
	int32_t SiegePointMin; // 0x10
	int32_t SiegePointMax; // 0x14
	int32_t RewardMoneyId01; // 0x18
	int32_t RewardMoneyCnt01; // 0x1c
	int32_t RewardMoneyId02; // 0x20
	int32_t RewardMoneyCnt02; // 0x24
	int32_t RewardItemUseId01; // 0x28
	int32_t RewardItemCnt01; // 0x2c
	int32_t MailPresetId; // 0x30
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FDropItemTemplate : FTableRowBase {
	int32_t DropItemId; // 0x8
	int32_t ARewardDropRate; // 0xc
	int32_t ARewardLoopCountMin; // 0x10
	int32_t ARewardLoopCountMax; // 0x14
	int32_t ARewardItem01GroupId; // 0x18
	int32_t ARewardItem01GroupRate; // 0x1c
	int32_t ARewardItem02GroupId; // 0x20
	int32_t ARewardItem02GroupRate; // 0x24
	int32_t ARewardItem03GroupId; // 0x28
	int32_t ARewardItem03GroupRate; // 0x2c
	int32_t BRewardDropRate; // 0x30
	int32_t BRewardLoopCountMin; // 0x34
	int32_t BRewardLoopCountMax; // 0x38
	int32_t BRewardItem01GroupId; // 0x3c
	int32_t BRewardItem01GroupRate; // 0x40
	int32_t BRewardItem02GroupId; // 0x44
	int32_t BRewardItem02GroupRate; // 0x48
	int32_t BRewardItem03GroupId; // 0x4c
	int32_t BRewardItem03GroupRate; // 0x50
	int32_t CRewardDropRate; // 0x54
	int32_t CRewardLoopCountMin; // 0x58
	int32_t CRewardLoopCountMax; // 0x5c
	int32_t CRewardItem01GroupId; // 0x60
	int32_t CRewardItem01GroupRate; // 0x64
	int32_t CRewardItem02GroupId; // 0x68
	int32_t CRewardItem02GroupRate; // 0x6c
	int32_t CRewardItem03GroupId; // 0x70
	int32_t CRewardItem03GroupRate; // 0x74
	int32_t DRewardDropRate; // 0x78
	int32_t DRewardLoopCountMin; // 0x7c
	int32_t DRewardLoopCountMax; // 0x80
	int32_t DRewardItem01GroupId; // 0x84
	int32_t DRewardItem01GroupRate; // 0x88
	int32_t DRewardItem02GroupId; // 0x8c
	int32_t DRewardItem02GroupRate; // 0x90
	int32_t DRewardItem03GroupId; // 0x94
	int32_t DRewardItem03GroupRate; // 0x98
	int32_t ERewardDropRate; // 0x9c
	int32_t ERewardLoopCountMin; // 0xa0
	int32_t ERewardLoopCountMax; // 0xa4
	int32_t ERewardItem01GroupId; // 0xa8
	int32_t ERewardItem01GroupRate; // 0xac
	int32_t ERewardItem02GroupId; // 0xb0
	int32_t ERewardItem02GroupRate; // 0xb4
	int32_t ERewardItem03GroupId; // 0xb8
	int32_t ERewardItem03GroupRate; // 0xbc
	int32_t FRewardDropRate; // 0xc0
	int32_t FRewardLoopCountMin; // 0xc4
	int32_t FRewardLoopCountMax; // 0xc8
	int32_t FRewardItem01GroupId; // 0xcc
	int32_t FRewardItem01GroupRate; // 0xd0
	int32_t FRewardItem02GroupId; // 0xd4
	int32_t FRewardItem02GroupRate; // 0xd8
	int32_t FRewardItem03GroupId; // 0xdc
	int32_t FRewardItem03GroupRate; // 0xe0
	int32_t GRewardDropRate; // 0xe4
	int32_t GRewardLoopCountMin; // 0xe8
	int32_t GRewardLoopCountMax; // 0xec
	int32_t GRewardItem01GroupId; // 0xf0
	int32_t GRewardItem01GroupRate; // 0xf4
	int32_t GRewardItem02GroupId; // 0xf8
	int32_t GRewardItem02GroupRate; // 0xfc
	int32_t GRewardItem03GroupId; // 0x100
	int32_t GRewardItem03GroupRate; // 0x104
	int32_t HRewardDropRate; // 0x108
	int32_t HRewardLoopCountMin; // 0x10c
	int32_t HRewardLoopCountMax; // 0x110
	int32_t HRewardItem01GroupId; // 0x114
	int32_t HRewardItem01GroupRate; // 0x118
	int32_t HRewardItem02GroupId; // 0x11c
	int32_t HRewardItem02GroupRate; // 0x120
	int32_t HRewardItem03GroupId; // 0x124
	int32_t HRewardItem03GroupRate; // 0x128
	int32_t IRewardDropRate; // 0x12c
	int32_t IRewardLoopCountMin; // 0x130
	int32_t IRewardLoopCountMax; // 0x134
	int32_t IRewardItem01GroupId; // 0x138
	int32_t IRewardItem01GroupRate; // 0x13c
	int32_t IRewardItem02GroupId; // 0x140
	int32_t IRewardItem02GroupRate; // 0x144
	int32_t IRewardItem03GroupId; // 0x148
	int32_t IRewardItem03GroupRate; // 0x14c
	int32_t JRewardDropRate; // 0x150
	int32_t JRewardLoopCountMin; // 0x154
	int32_t JRewardLoopCountMax; // 0x158
	int32_t JRewardItem01GroupId; // 0x15c
	int32_t JRewardItem01GroupRate; // 0x160
	int32_t JRewardItem02GroupId; // 0x164
	int32_t JRewardItem02GroupRate; // 0x168
	int32_t JRewardItem03GroupId; // 0x16c
	int32_t JRewardItem03GroupRate; // 0x170
	int32_t KRewardDropRate; // 0x174
	int32_t KRewardLoopCountMin; // 0x178
	int32_t KRewardLoopCountMax; // 0x17c
	int32_t KRewardItem01GroupId; // 0x180
	int32_t KRewardItem01GroupRate; // 0x184
	int32_t KRewardItem02GroupId; // 0x188
	int32_t KRewardItem02GroupRate; // 0x18c
	int32_t KRewardItem03GroupId; // 0x190
	int32_t KRewardItem03GroupRate; // 0x194
	int32_t LRewardDropRate; // 0x198
	int32_t LRewardLoopCountMin; // 0x19c
	int32_t LRewardLoopCountMax; // 0x1a0
	int32_t LRewardItem01GroupId; // 0x1a4
	int32_t LRewardItem01GroupRate; // 0x1a8
	int32_t LRewardItem02GroupId; // 0x1ac
	int32_t LRewardItem02GroupRate; // 0x1b0
	int32_t LRewardItem03GroupId; // 0x1b4
	int32_t LRewardItem03GroupRate; // 0x1b8
	int32_t MRewardDropRate; // 0x1bc
	int32_t MRewardLoopCountMin; // 0x1c0
	int32_t MRewardLoopCountMax; // 0x1c4
	int32_t MRewardItem01GroupId; // 0x1c8
	int32_t MRewardItem01GroupRate; // 0x1cc
	int32_t MRewardItem02GroupId; // 0x1d0
	int32_t MRewardItem02GroupRate; // 0x1d4
	int32_t MRewardItem03GroupId; // 0x1d8
	int32_t MRewardItem03GroupRate; // 0x1dc
	int32_t NRewardDropRate; // 0x1e0
	int32_t NRewardLoopCountMin; // 0x1e4
	int32_t NRewardLoopCountMax; // 0x1e8
	int32_t NRewardItem01GroupId; // 0x1ec
	int32_t NRewardItem01GroupRate; // 0x1f0
	int32_t NRewardItem02GroupId; // 0x1f4
	int32_t NRewardItem02GroupRate; // 0x1f8
	int32_t NRewardItem03GroupId; // 0x1fc
	int32_t NRewardItem03GroupRate; // 0x200
	int32_t ORewardDropRate; // 0x204
	int32_t ORewardLoopCountMin; // 0x208
	int32_t ORewardLoopCountMax; // 0x20c
	int32_t ORewardItem01GroupId; // 0x210
	int32_t ORewardItem01GroupRate; // 0x214
	int32_t ORewardItem02GroupId; // 0x218
	int32_t ORewardItem02GroupRate; // 0x21c
	int32_t ORewardItem03GroupId; // 0x220
	int32_t ORewardItem03GroupRate; // 0x224
	int32_t LuckyRewardDropRate; // 0x228
	int32_t LuckyRewardDropItemId; // 0x22c
	int32_t ExcellentRewardDropRate; // 0x230
	int32_t ExcellentRewardDropItemId; // 0x234
	int32_t GreatRewardDropRate; // 0x238
	int32_t GreatRewardDropItemId; // 0x23c
	int32_t RewardCostType01; // 0x240
	int32_t RewardCostRate01; // 0x244
	int32_t RewardCostCountMax01; // 0x248
	int32_t RewardCostType02; // 0x24c
	int32_t RewardCostRate02; // 0x250
	int32_t RewardCostCountMax02; // 0x254
	int32_t RewardCostType03; // 0x258
	int32_t RewardCostRate03; // 0x25c
	int32_t RewardCostCountMax03; // 0x260
	int32_t Expensive01RewardDropItemId; // 0x264
	int32_t Expensive02RewardDropItemId; // 0x268
};

struct FFacebookAchievement {
	FString ID; // 0x0
	FString Title; // 0x10
	FString URL; // 0x20
	FDateTime UnlockTime; // 0x30
};

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	ERichCurveTangentWeightMode TangentWeightMode; // 0x8
	float ArriveTangentWeight; // 0xc
	float LeaveTangentWeight; // 0x10
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FUserMetadata {
	int64_t last_sign_in_timestamp; // 0x0
	int64_t creation_timestamp; // 0x8
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FMultiLanguageTemplate : FTableRowBase {
	int32_t RawId; // 0x8
	int32_t IsShow; // 0xc
	FString ISO639Code; // 0x10
	FString LanguageName; // 0x20
	FString LanguageSelectTitle; // 0x30
	FString LagnuageSelectDesc; // 0x40
	FString LagnuageSelectAccept; // 0x50
	FString LagnuageSelectCancel; // 0x60
	int32_t languageicon; // 0x70
};

struct FStructSerializerArrayTestStruct {
	TArray<int32_t> Int32Array; // 0x0
	int32_t StaticSingleElement; // 0x10
	int32_t StaticInt32Array[0x3]; // 0x14
	float StaticFloatArray[0x3]; // 0x20
	TArray<FVector> VectorArray; // 0x30
	TArray<FStructSerializerBuiltinTestStruct> StructArray; // 0x40
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
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

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
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

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingId; // 0x0
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

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
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

struct FDropRewardBoxTypePIETemplate : FTableRowBase {
	int32_t PieTypeRewardBoxGroupId; // 0x8
	int32_t DROP_REWARD_OBJECTGROUPID; // 0xc
};

struct FBattlePassRewardTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t GroupId; // 0xc
	int32_t NeedPoint; // 0x10
	int32_t Number; // 0x14
	int32_t NameStrId; // 0x18
	int32_t RewardGroup; // 0x1c
	int32_t RewardCategory; // 0x20
	int32_t RewardType; // 0x24
	TArray<int32_t> RewardId; // 0x28
	int32_t RewardCount; // 0x38
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FSlateBrush MenuBorderBrush; // 0x308
	FMargin MenuBorderPadding; // 0x390
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FUIParticleEmitterInfo {
	bool Disable; // 0x0
	float ActiveDelay; // 0x4
	int32_t ZOrder; // 0x8
	UUIParticleEmitterAsset* Asset; // 0x10
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FBossWorldTemplate : FRewardCommonTemplate {
	int32_t WorldBossId; // 0x98
	int32_t StageId; // 0x9c
};

struct FNpcShopGoodsTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t GoodsGroupId; // 0xc
	int32_t GoodsId; // 0x10
	int32_t GoodsCommodityType; // 0x14
	int32_t GoodsCommodityId; // 0x18
	int32_t GoodsCount; // 0x1c
	int32_t GoodsCountAdjustMin; // 0x20
	int32_t GoodsCountAdjustMax; // 0x24
	int32_t MoneyId; // 0x28
	int32_t MoneyIValue; // 0x2c
	int32_t SellType; // 0x30
	int32_t SellId; // 0x34
	int32_t SellValue; // 0x38
	int32_t LimitServer; // 0x3c
	int32_t LimitServerCount; // 0x40
	int32_t LimitCountType; // 0x44
	int32_t LimitCountValue; // 0x48
	int32_t RandomRate; // 0x4c
	int32_t OrderNum; // 0x50
	int32_t DarkSteelCheck; // 0x54
};

struct FSkillTemplate : FTableRowBase {
	int32_t SkillId; // 0x8
	int32_t NameSId; // 0xc
	int32_t GroupNoteSid; // 0x10
	int32_t NoteSid; // 0x14
	int32_t EffectSid; // 0x18
	int32_t icon; // 0x1c
	int32_t Icon_Gray; // 0x20
	TArray<int32_t> NameImgId; // 0x28
	int32_t SkillType; // 0x38
	int32_t ClassID; // 0x3c
	int32_t Group; // 0x40
	int32_t SkillProductType; // 0x44
	float UseControlTime; // 0x48
	int32_t ConditionTarget; // 0x4c
	int32_t ConditionType; // 0x50
	int32_t ConditionValue; // 0x54
	float ConditionRange; // 0x58
	float ConditionCheckTime; // 0x5c
	int32_t ChainUseSkillLv; // 0x60
	int32_t ChainSkillID; // 0x64
	float ChainSkillDelay; // 0x68
	int32_t ChainSkillCount; // 0x6c
	float Cooltime; // 0x70
	float MaxCooltime; // 0x74
	float LevelUpCooltime; // 0x78
	float GlobalCooltime; // 0x7c
	int32_t SkillCostType; // 0x80
	int32_t SkillCost; // 0x84
	int32_t SkillCostType_2; // 0x88
	int32_t SkillCost_2; // 0x8c
	TArray<int32_t> AttackLink; // 0x90
	float AttackAniTime; // 0xa0
	float EndCutAniTime; // 0xa4
	int32_t HitCount; // 0xa8
	TArray<int32_t> NextNormalSkilLink; // 0xb0
	int32_t NextNormalSkilProb; // 0xc0
	int32_t DarkChange; // 0xc4
	int32_t DamageType; // 0xc8
	int32_t MulDamage; // 0xcc
	int32_t LevelUpMulDamage; // 0xd0
	int32_t AddDamage; // 0xd4
	int32_t LevelUpAddDamage; // 0xd8
	int32_t MulDamage_2; // 0xdc
	int32_t LevelUpMulDamage_2; // 0xe0
	int32_t AddDamage_2; // 0xe4
	int32_t LevelUpAddDamage_2; // 0xe8
	int32_t AbilityType_2; // 0xec
	int32_t AbilityValue_2; // 0xf0
	float LevelUpValue_2; // 0xf4
	int32_t AbilityTime_2; // 0xf8
	int32_t AbilityType_3; // 0xfc
	int32_t AbilityValue_3; // 0x100
	float LevelUpValue_3; // 0x104
	int32_t AbilityTime_3; // 0x108
	int32_t AbilityType_4; // 0x10c
	int32_t AbilityValue_4; // 0x110
	float LevelUpValue_4; // 0x114
	int32_t AbilityTime_4; // 0x118
	int32_t AbilityType_5; // 0x11c
	int32_t AbilityValue_5; // 0x120
	float LevelUpValue_5; // 0x124
	int32_t AbilityTime_5; // 0x128
	int32_t ReqClassLevel; // 0x12c
	int32_t MaxSkillLevel; // 0x130
	int32_t LevelUpCostType; // 0x134
	int32_t LevelUpDefaultCost; // 0x138
	int32_t LevelUpCost; // 0x13c
	int32_t LevelUpCostType1; // 0x140
	int32_t LevelUpDefaultCost1; // 0x144
	int32_t LevelUpCost1; // 0x148
	int32_t ItemSmallIcon; // 0x14c
	int32_t CombatPoint; // 0x150
	int32_t LevelUpCombatPoint; // 0x154
	int32_t IndicatorType; // 0x158
	int32_t IndicatorIndex; // 0x15c
	float IndicatorAngle; // 0x160
	float IndicatorMin; // 0x164
	float IndicatorMax; // 0x168
	float IndicatorWidth; // 0x16c
	float IndicatorOffset; // 0x170
	int32_t MainSkillID; // 0x174
	bool Targeting; // 0x178
	float TargetHeight; // 0x17c
	int32_t BlockingCheck; // 0x180
	TArray<int32_t> Passive; // 0x188
	bool StateConUse; // 0x198
	bool MoveConUse; // 0x199
	TArray<int32_t> SmiteBuffID; // 0x1a0
	int32_t SkillCostGroupID; // 0x1b0
	int32_t ReqBloodLevel; // 0x1b4
	int32_t ReqForceLevel; // 0x1b8
	int32_t ReqCheckQuest; // 0x1bc
	int32_t UIViewOrder; // 0x1c0
	TArray<int32_t> AutoLearnPassive; // 0x1c8
	TArray<int32_t> Skill_MODPassive; // 0x1d8
	TArray<int32_t> SpecialLevel; // 0x1e8
	TArray<int32_t> SpecialNoteSid; // 0x1f8
	TArray<int32_t> SpecialToolTipTitle; // 0x208
	TArray<int32_t> SpecialToolTip; // 0x218
	int32_t SkillUseCount; // 0x228
	int32_t SkillUseTime; // 0x22c
	TArray<int32_t> AddCoolTime; // 0x230
	TArray<int32_t> AddSkillCost; // 0x240
};

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
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

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FShopUITemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t TabId; // 0xc
	int32_t Category; // 0x10
	int32_t HigherTabId; // 0x14
	int32_t NameStrId; // 0x18
	int32_t Type; // 0x1c
	int32_t AdvertiseId; // 0x20
	int32_t ShopId; // 0x24
	int32_t OrderNum; // 0x28
	int32_t TagIconId; // 0x2c
	int32_t DisplayOnOff; // 0x30
	int32_t OnOFF; // 0x34
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FResourceABPTemplate : FTableRowBase {
	int32_t AnimationId; // 0x8
	FString Filename; // 0x10
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FFameQuestTemplate : FTableRowBase {
	int32_t FameQuestId; // 0x8
	int32_t QuestTitle; // 0xc
	int32_t CatrgoryId; // 0x10
	int32_t PlayDataId; // 0x14
	int32_t RewardScore; // 0x18
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
};

struct FClothParameterMask_PhysMesh {
	FName MaskName; // 0x0
	MaskTarget_PhysMesh CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x30
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

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
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

struct FMovieSceneVisibilitySectionTemplate : FMovieSceneBoolPropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x48
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
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

struct FCinematicActorAction {
	int32_t NpcID; // 0x0
	bool ActorHidden; // 0x4
	TArray<FActorPlacement> ActorPlacement; // 0x8
	float ActorMoveSpeed; // 0x18
	FString FirstAniName; // 0x20
	FString SecondAniName; // 0x30
	bool bAnimationLoop; // 0x40
	bool bLookAt; // 0x41
	FVector LookAtLocation; // 0x44
};

struct FGuildSupplyTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t NameId; // 0x10
	int32_t IconID; // 0x14
	int32_t Enable; // 0x18
	int32_t OpenConditionType; // 0x1c
	int32_t OpenConditionValueType; // 0x20
	int32_t OpenConditionValue; // 0x24
	int32_t RewardTime; // 0x28
	int32_t RewardItemId; // 0x2c
	int32_t RewardItemCnt; // 0x30
	int32_t MailTemplateId; // 0x34
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FUIShopIAPInfoTemplate : FTableRowBase {
	int32_t IapId; // 0x8
	int32_t IapType; // 0xc
	int32_t GoodsId; // 0x10
	int32_t NameStrId; // 0x14
	int32_t MailType; // 0x18
	int32_t MailPresetId; // 0x1c
	int32_t StoreType; // 0x20
	FString ProductId; // 0x28
	int32_t ProductValue; // 0x38
	int32_t IapGoodsViewType; // 0x3c
};

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x48
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> planes; // 0x0
	int32_t BoneIndex; // 0x10
};

struct FInstanceDungeonSettingTemplate : FTableRowBase {
	int32_t StageId; // 0x8
	int32_t Timer1StringTemplateID; // 0xc
	int32_t Timer1Time; // 0x10
	int32_t Timer1UIshow; // 0x14
	int32_t Timer1UIshowTime; // 0x18
	int32_t Timer2StringTemplateID; // 0x1c
	int32_t Timer2Time; // 0x20
	int32_t Timer2UIshow; // 0x24
	int32_t Timer2UIshowTime; // 0x28
	int32_t Timer3StringTemplateID; // 0x2c
	int32_t Timer3Time; // 0x30
	int32_t Timer3UIshow; // 0x34
	int32_t Timer3UIshowTime; // 0x38
	int32_t Timer4StringTemplateID; // 0x3c
	int32_t Timer4Time; // 0x40
	int32_t Timer4UIshow; // 0x44
	int32_t Timer4UIshowTime; // 0x48
	int32_t BossAppearCutsceneID; // 0x4c
	int32_t BossKillCutsceneID; // 0x50
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FCharacterGrowTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t ContentsId; // 0xc
	int32_t Level; // 0x10
	int32_t ConditionType; // 0x14
	int32_t ConditionValue; // 0x18
	int32_t GrowPercent; // 0x1c
	int32_t GrowGraph; // 0x20
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FGuildAuthorityTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t AuthorityId; // 0xc
	int32_t NameStrId; // 0x10
	int32_t Can_Member; // 0x14
	int32_t Can_Inventory; // 0x18
	int32_t Can_Diplomacy; // 0x1c
	int32_t Can_War; // 0x20
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FAngularRangeLimit {
	FVector LimitMIN; // 0x0
	FVector LimitMAX; // 0xc
	FBoneReference Bone; // 0x18
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> Entries; // 0x10
	bool bShuffleMode; // 0x64
};

struct FItemSubCoolTimeTemplate : FTableRowBase {
	int32_t SubCoolTimeID; // 0x8
	int32_t ItemSubType; // 0xc
	int64_t SubCoolTime; // 0x10
};

struct FPageTutorialStep {
	int32_t TitleStringID; // 0x0
	int32_t TutorialDescription; // 0x4
	UPaperSprite* TutorialImageID; // 0x8
};

struct FAccountLoginInfo {
	FString GuestID; // 0x0
	FString TokenID; // 0x10
	FString LinkID; // 0x20
	FString BuildName; // 0x30
	int32_t ChannelType; // 0x40
	bool IsLinkPW; // 0x44
	bool IsGoogleLinked; // 0x45
	bool IsFacebookLinked; // 0x46
	bool IsAppleLinked; // 0x47
	bool IsSteamLinked; // 0x48
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FAutoFlightData {
	FAutoPathData PathData; // 0x0
	TArray<AAutoFlightTrigger*> LinkTriggers; // 0x20
};

struct FGuildInfoTemplate : FTableRowBase {
	int32_t Index; // 0x8
	int32_t GuildJoinLevel; // 0xc
	int32_t GuildJoinMaxLevel; // 0x10
	int32_t GuildJoinCombatPoint; // 0x14
	int32_t GuildJoinMaxCombatPoint; // 0x18
	int32_t GuildCreationLevel; // 0x1c
	int32_t GuildCreationCostType; // 0x20
	int32_t GuildCreationCostCount; // 0x24
	int32_t GuildCreationMembers; // 0x28
	int32_t GuildOfficerMembers; // 0x2c
	int32_t GuildAllianceCount; // 0x30
	int32_t GuildEnemyCount; // 0x34
	int32_t GuildHuntingCount; // 0x38
	int32_t GuildInventoryCount; // 0x3c
	int32_t GuildInviteMailPresetId; // 0x40
	int32_t GuildAllianceApplicantCount; // 0x44
	int32_t GuildAllianceApplicantMailPresetId; // 0x48
	int32_t GuildHostilityDeclareGuildMoneyId; // 0x4c
	int32_t GuildHostilityDeclareGuildMoneyValue; // 0x50
	int32_t GuildHostilityDeclareTimeHour; // 0x54
	int32_t GuildHostilityDeclareMailPresetId; // 0x58
	int32_t GuildInventoryExchangeRate; // 0x5c
	int32_t GuildProvideMailPresetId; // 0x60
	int32_t GuildPresentMailPresetId; // 0x64
	int32_t GuildUniformColorChangeCostType; // 0x68
	int32_t GuildUniformColorChangeCostCount; // 0x6c
	int32_t GuildUniformIconId_Select; // 0x70
	int32_t GuildUniformIconId_NonSelect; // 0x74
	int32_t GuildUniformPaletteGroupID_PresetMain; // 0x78
	int32_t GuildUniformPaletteGroupID_PresetSub; // 0x7c
	int32_t GuildUniformPaletteGroupID_DyeingMain; // 0x80
	int32_t GuildUniformPaletteGroupID_DyeingSub; // 0x84
	int32_t GuildIdentityChangeCostType; // 0x88
	int32_t GuildIdentityChangeCostCount; // 0x8c
	int32_t GuildNameChangeCostType; // 0x90
	int32_t GuildNameChangeCostCount; // 0x94
	int32_t GuildDailyContributionRankingMailPresetId; // 0x98
	int32_t GuildWeeklyContributionRankingMailPresetId; // 0x9c
	int32_t OccupationEnemyKillGetPoint; // 0xa0
	int32_t Mail_GUILD_Join; // 0xa4
	int32_t Mail_GUILD_Leave; // 0xa8
	int32_t Mail_GUILD_Deport; // 0xac
	int32_t GuildDevLevelUpExpIconID; // 0xb0
	int32_t GuildContributionIconId; // 0xb4
	int32_t GuildExpIconId; // 0xb8
	int32_t GUILD_WAR_SetOnFire_BuffID; // 0xbc
	int32_t GUILD_WAR_HPRepaire_BuffID; // 0xc0
	int32_t GuildDevExpIconId; // 0xc4
	int32_t GuildLevleIconId; // 0xc8
	int32_t GuildExpeditionIconId; // 0xcc
	int32_t Guild_Support_Point_Max; // 0xd0
	int32_t GuildNpcShopSellMoneyMinValue; // 0xd4
	int32_t GuildNpcShopSellMoneyMaxValue; // 0xd8
	int32_t GuildNpcShopBuyMoneyMinValue; // 0xdc
	int32_t GuildNpcShopBuyMoneyMaxValue; // 0xe0
	int32_t GuildNpcShopReopenRate; // 0xe4
	int32_t GuildNpcShopSaveMoneyId; // 0xe8
	int32_t GuildNpcShopCommissionRate; // 0xec
	int32_t GuildEntrustSalesDefaultCount; // 0xf0
	int32_t GuildAllianceUnLockDevId; // 0xf4
	int32_t GuildAllianceUnLockDevLevel; // 0xf8
	int32_t GuildHostilityDeclareUnLockDevId; // 0xfc
	int32_t GuildHostilityDeclareUnLockDevLevel; // 0x100
	int32_t GuildWantedUnLockDevId; // 0x104
	int32_t GuildWantedUnLockDevLevel; // 0x108
	int32_t GUILD_WAR_GuildChangeTime_BuffID; // 0x10c
	int32_t Guild_Donation_DefaultTimeLimit; // 0x110
	int32_t Sanctum_NeedGuildDevId; // 0x114
	int32_t Sanctum_LifetimeBuffid; // 0x118
	int32_t Sanctum_Install_ProtectBuffid; // 0x11c
	int32_t Sanctum_ServiceSeal_Buffid; // 0x120
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FMonsterAITemplate : FTableRowBase {
	int32_t AiId; // 0x8
	int32_t AiIndex; // 0xc
	int32_t AiActionType_2; // 0x10
	int32_t AiActionType_3; // 0x14
	int32_t AiActionType_4; // 0x18
	int32_t AiActionType_5; // 0x1c
	int32_t AiActionValue1_2; // 0x20
	int32_t AiActionValue1_3; // 0x24
	int32_t AiActionValue1_4; // 0x28
	int32_t AiActionValue1_5; // 0x2c
	int32_t AiActionValue2_2; // 0x30
	int32_t AiActionValue2_3; // 0x34
	int32_t AiActionValue2_4; // 0x38
	int32_t AiActionValue2_5; // 0x3c
	int32_t AiActionValue3_2; // 0x40
	int32_t AiActionValue3_3; // 0x44
	int32_t AiActionValue3_4; // 0x48
	int32_t AiActionValue3_5; // 0x4c
	int32_t AiActionValue4_2; // 0x50
	int32_t AiActionValue4_3; // 0x54
	int32_t AiActionValue4_4; // 0x58
	int32_t AiActionValue4_5; // 0x5c
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

struct FInventoryExtendTemplate : FTableRowBase {
	int32_t InventoryMaxCount; // 0x8
	int32_t InventoryOpenCount; // 0xc
	int32_t ExtendValueType; // 0x10
	int32_t ExtendValue; // 0x14
	int32_t InventoryType; // 0x18
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FNodeHierarchyData {
	TArray<FNodeObject> Nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FCharMaterialData {
	ECharMaterialParameterType m_eParameterType; // 0x0
	FName m_strName; // 0x4
	UCurveBase* m_pCurve; // 0x10
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

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
	int32_t ParticleIndex; // 0x1c
};

struct FBattlePassMissionTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t GroupId; // 0xc
	int32_t GroupGrade; // 0x10
	int32_t icon; // 0x14
	int32_t Order; // 0x18
	int32_t Title; // 0x1c
	int32_t Description; // 0x20
	int32_t EventDataId; // 0x24
	int32_t CompleteCount; // 0x28
	int32_t CompleteCountAccrue; // 0x2c
	int32_t MissionPoint; // 0x30
	int32_t ImmediateType; // 0x34
	int32_t ImmediateId; // 0x38
	int32_t Value; // 0x3c
	int32_t ContentId; // 0x40
};

struct FShadingModelMaterialInput : FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FLevelStreamingWrapper {
	ULevelStreaming* StreamingLevel; // 0x0
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FCharacterExpBoosterItemTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ItemId; // 0xc
	int32_t EnergyTime_Charge; // 0x10
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FGuildWantedTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t WantedGrade; // 0xc
	int32_t NameId; // 0x10
	int32_t Time; // 0x14
	int32_t ItemId; // 0x18
	int32_t ItemCount; // 0x1c
	int32_t RewardGuildContribution; // 0x20
	int32_t RewardGuildFameCategory; // 0x24
	int32_t RewardGuildFamePoint; // 0x28
	int32_t ImageId; // 0x2c
	int32_t GuildMoneyId; // 0x30
	int32_t GuildMoneyValue; // 0x34
	int32_t KillCountLimit; // 0x38
	int32_t KillCountLimit2; // 0x3c
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	ERichCurveInterpMode InterpMode; // 0x4
	ERichCurveTangentMode TangentMode; // 0x5
	FMovieSceneTangentData Tangent; // 0x8
};

struct FInventoryTemplate : FTableRowBase {
	int32_t InventoryID; // 0x8
	int32_t TabNameStringID; // 0xc
	int32_t TabSymbol; // 0x10
	int32_t TabSymbolSelected; // 0x14
	TArray<FInvenItemType> ItemType; // 0x18
	int32_t CustomItemFilterType; // 0x28
};

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FQuestRelationTemplate : FTableRowBase {
	int32_t RelationId; // 0x8
	int32_t RelationCategory; // 0xc
	int32_t RelationMenuName; // 0x10
	int32_t RelationMenuIcon; // 0x14
	int32_t RelationListHide; // 0x18
	int32_t RelationQuestStep; // 0x1c
	int32_t RelationQuestGrade; // 0x20
	int32_t RelationViewType; // 0x24
	int32_t RelationTitleSID; // 0x28
	int32_t RelationQuestInfoSID; // 0x2c
	int32_t RelationCompleteInfoSID; // 0x30
	FString StartScript; // 0x38
	TArray<int32_t> ScriptPlayStageID; // 0x48
	FString EndScript; // 0x58
	QuestMissionType MissionType; // 0x68
	int32_t MissionTarget; // 0x6c
	int32_t Parameter1; // 0x70
	int32_t Parameter2; // 0x74
	int32_t Parameter3; // 0x78
	TArray<FSmallDialog> CountSmallTalk; // 0x80
	int32_t MissionStageId; // 0x90
	FVector MissionCoordinate; // 0x94
	FVector PhaseExitCoordinate; // 0xa0
	int32_t EffectId; // 0xac
	int32_t RewardType; // 0xb0
	int32_t RewardExp; // 0xb4
	int32_t RewardGOLD; // 0xb8
	int32_t RewardGoodsType; // 0xbc
	int32_t RewardGoodsCount; // 0xc0
	TArray<int32_t> RewardItemId01; // 0xc8
	int32_t RewardItemCount01; // 0xd8
	TArray<int32_t> RewardItemId02; // 0xe0
	int32_t RewardItemCount02; // 0xf0
	int32_t MissionInfoSID; // 0xf4
	int32_t MissionCountShow; // 0xf8
};

struct FGuildDevUnLockTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t DevId; // 0xc
	int32_t DevLevel; // 0x10
	int32_t UnlockGuildLevel; // 0x14
	int32_t UnlockGuildExpeditionId; // 0x18
	int32_t Unlock1_DevId; // 0x1c
	int32_t Unlock1_DevLevel; // 0x20
	int32_t Unlock2_DevId; // 0x24
	int32_t Unlock2_DevLevel; // 0x28
	int32_t Unlock3_DevId; // 0x2c
	int32_t Unlock3_DevLevel; // 0x30
	int32_t Unlock4_DevId; // 0x34
	int32_t Unlock4_DevLevel; // 0x38
};

struct FSceneCaptureTemplate : FTableRowBase {
	EClassType ClassType; // 0x8
	EContentsSceneType SceneType; // 0x9
	FVector CameraLocation_01; // 0xc
	float CameraPitch_01; // 0x18
	float CameraFOV_01; // 0x1c
	FVector CameraLocation_02; // 0x20
	float CameraPitch_02; // 0x2c
	float CameraFOV_02; // 0x30
	FVector CameraLocation_03; // 0x34
	float CameraPitch_03; // 0x40
	float CameraFOV_03; // 0x44
	int32_t AnimInstanceID; // 0x48
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

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	bool bUseAttachedParent; // 0x18
	bool bCopyCurves; // 0x19
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
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

struct FPointWeightMap {
	FName Name; // 0x0
	char CurrentTarget; // 0x8
	TArray<float> Values; // 0x10
	bool bEnabled; // 0x20
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

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
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

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FEffectTemplate : FTableRowBase {
	int32_t EffectId; // 0x8
	int32_t Class; // 0xc
	int32_t MainType; // 0x10
	int32_t SubType; // 0x14
	FString Filename; // 0x18
	int32_t EffectType; // 0x28
	int32_t LoopType; // 0x2c
	int32_t StartTarget; // 0x30
	int32_t EndTarget; // 0x34
	FString StartSocket; // 0x38
	TArray<int32_t> StartPos; // 0x48
	FString EndSocket; // 0x58
	TArray<int32_t> EndPos; // 0x68
	bool Attach; // 0x78
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FGhostTrailParticleData {
	FName BoneName; // 0x0
	UParticleSystem* EmitterTemplate; // 0x8
	FVector OffsetLocation; // 0x10
};

struct FGuideEffectTemplate : FTableRowBase {
	int32_t GuideEffectID; // 0x8
	int32_t GuideEffectType; // 0xc
	TArray<float> GuideColor1; // 0x10
	TArray<float> GuideColor2; // 0x20
	TArray<float> GuideColor3; // 0x30
	TArray<float> Ally_GuideColor1; // 0x40
	TArray<float> Ally_GuideColor2; // 0x50
	TArray<float> Ally_GuideColor3; // 0x60
	int32_t MaterialPath; // 0x70
};

struct FResourcePoolData {
	UObject* pResourceObject; // 0x8
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FNodeChain {
	TArray<FName> Nodes; // 0x0
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FCustomizingComponentTemplate : FTableRowBase {
	int32_t ComponentID; // 0x8
	int32_t BelongedCategory; // 0xc
	int32_t Order; // 0x10
	ECustomizingComponentType ComponentType; // 0x14
	int32_t ComponetName; // 0x18
	TArray<int32_t> CustomizingType; // 0x20
	TArray<int32_t> ListIconArray; // 0x30
	int32_t RecordType; // 0x40
	int32_t AddComponetID; // 0x44
	int32_t SliderChangesPalette; // 0x48
	int32_t FaceMarkIndex; // 0x4c
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x104
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

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FClosedTrainingCollectTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t CollectId; // 0xc
	int32_t CollectNameSID; // 0x10
	int32_t CollectStep; // 0x14
	int32_t TrainingTotalLevel; // 0x18
	int32_t TrainingTotalMaxLevel; // 0x1c
	int32_t AttributeType01; // 0x20
	int32_t AttributeValue01; // 0x24
	int32_t AttributeType02; // 0x28
	int32_t AttributeValue02; // 0x2c
	int32_t AttributeType03; // 0x30
	int32_t AttributeValue03; // 0x34
	int32_t AttributeType04; // 0x38
	int32_t AttributeValue04; // 0x3c
	int32_t AttributeType05; // 0x40
	int32_t AttributeValue05; // 0x44
	int32_t AttributeType06; // 0x48
	int32_t AttributeValue06; // 0x4c
	int32_t AttributeType07; // 0x50
	int32_t AttributeValue07; // 0x54
	int32_t AttributeType08; // 0x58
	int32_t AttributeValue08; // 0x5c
};

struct FMovieSceneEventTemplateBase : FMovieSceneEvalTemplate {
	TArray<FMovieSceneObjectBindingID> EventReceivers; // 0x20
	char bFireEventsWhenForwards : 1; // 0x30
	char bFireEventsWhenBackwards : 1; // 0x30
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FValueInfo {
	ValueSource Source; // 0x0
	bool conversion_successful; // 0x1
};

struct FBattlePassInfoTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t NameStrId; // 0xc
	int32_t GroupType; // 0x10
	int32_t PurchaseMinLevel; // 0x14
	int32_t PurchaseMaxLevel; // 0x18
	int32_t LevelCondition; // 0x1c
	int32_t SeasonBuffFist1; // 0x20
	int32_t SeasonBuffFist2; // 0x24
	int32_t SeasonBuffSecond1; // 0x28
	int32_t SeasonBuffSecond2; // 0x2c
	int32_t SeasonBuffDesc; // 0x30
	int32_t BattlePassGroupId; // 0x34
	int32_t BattlePassRewardGroupId; // 0x38
	FString Web1; // 0x40
	FString Web2; // 0x50
	FString AosUid1; // 0x60
	FString IosUid1; // 0x70
	FString OneStoreUid1; // 0x80
	FString SamsungUid1; // 0x90
	FString SteamUid1; // 0xa0
	FString XsollaUid1; // 0xb0
	FString MycardUid1; // 0xc0
	FString AosUidValue1; // 0xd0
	FString IosUidValue1; // 0xe0
	FString OneStoreValue1; // 0xf0
	FString SamsungValue1; // 0x100
	FString SteamValue1; // 0x110
	FString XsollaValue1; // 0x120
	FString MycardValue1; // 0x130
	FString AosUid2; // 0x140
	FString IosUid2; // 0x150
	FString OneStoreUid2; // 0x160
	FString SamsungUid2; // 0x170
	FString SteamUid2; // 0x180
	FString XsollaUid2; // 0x190
	FString MycardUid2; // 0x1a0
	FString AosUidValue2; // 0x1b0
	FString IosUidValue2; // 0x1c0
	FString OneStoreValue2; // 0x1d0
	FString SamsungValue2; // 0x1e0
	FString SteamValue2; // 0x1f0
	FString XsollaValue2; // 0x200
	FString MycardValue2; // 0x210
	int32_t LevelText; // 0x220
	int32_t TitleText; // 0x224
};

struct FCharacterEmoteTemplate : FTableRowBase {
	int32_t IconID; // 0x8
	int32_t EmoteID; // 0xc
	int32_t StringID; // 0x10
	bool PlayLoop; // 0x14
	int32_t Class1AnimID; // 0x18
	int32_t Class2AnimID; // 0x1c
	int32_t Class3AnimID; // 0x20
	int32_t Class4AnimID; // 0x24
	int32_t Class5AnimID; // 0x28
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x28
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FCharacterForceTemplate : FTableRowBase {
	int32_t ForcePanelID; // 0x8
	int32_t ClassID; // 0xc
	int32_t BloodSetID; // 0x10
	int32_t ForcePanel_TitleStringID; // 0x14
	int32_t ForcePanel_DescriptionStringID; // 0x18
	int32_t ForcePanel_Icon; // 0x1c
	int32_t ForcePanel_OpenUseId_2; // 0x20
	int32_t ForcePanel_OpenItemValue_2; // 0x24
	int32_t ForcePanel_OpenUseId_3; // 0x28
	int32_t ForcePanel_OpenItemValue_3; // 0x2c
	int32_t ForcePanel_OpenUseId_4; // 0x30
	int32_t ForcePanel_OpenItemValue_4; // 0x34
	int32_t Blood_Name_2; // 0x38
	int32_t Blood_Name_3; // 0x3c
	int32_t Blood_Name_4; // 0x40
	int32_t Blood_Name_5; // 0x44
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
	FEditorImportWorkflowDefinition sound; // 0x100
	FEditorImportWorkflowDefinition SurroundSound; // 0x120
	TArray<FEditorImportWorkflowDefinition> OtherAssetsToImport; // 0x140
};

struct FDropItemGroupTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t DropItemGroupId; // 0xc
	int32_t ItemId01; // 0x10
	int32_t ItemId02; // 0x14
	int32_t ItemId03; // 0x18
	int32_t ItemId04; // 0x1c
	int32_t ItemId05; // 0x20
	int32_t ItemId06; // 0x24
	int32_t ItemId07; // 0x28
	int32_t ItemId08; // 0x2c
	int32_t ItemId09; // 0x30
	int32_t ItemId10; // 0x34
	int32_t ItemId11; // 0x38
	int32_t ItemId12; // 0x3c
	int32_t ItemId13; // 0x40
	int32_t ItemId14; // 0x44
	int32_t ItemId15; // 0x48
	int32_t ItemId16; // 0x4c
	int32_t ItemId17; // 0x50
	int32_t ItemId18; // 0x54
	int32_t ItemId19; // 0x58
	int32_t ItemId20; // 0x5c
	int32_t ItemId21; // 0x60
	int32_t ItemId22; // 0x64
	int32_t ItemId23; // 0x68
	int32_t ItemId24; // 0x6c
	int32_t ItemId25; // 0x70
	int32_t ItemId26; // 0x74
	int32_t ItemId27; // 0x78
	int32_t ItemId28; // 0x7c
	int32_t ItemId29; // 0x80
	int32_t ItemId30; // 0x84
	int32_t ItemId31; // 0x88
	int32_t ItemId32; // 0x8c
	int32_t ItemId33; // 0x90
	int32_t ItemId34; // 0x94
	int32_t ItemId35; // 0x98
	int32_t ItemId36; // 0x9c
	int32_t ItemId37; // 0xa0
	int32_t ItemId38; // 0xa4
	int32_t ItemId39; // 0xa8
	int32_t ItemId40; // 0xac
	int32_t ItemId41; // 0xb0
	int32_t ItemId42; // 0xb4
	int32_t ItemId43; // 0xb8
	int32_t ItemId44; // 0xbc
	int32_t ItemId45; // 0xc0
	int32_t ItemId46; // 0xc4
	int32_t ItemId47; // 0xc8
	int32_t ItemId48; // 0xcc
	int32_t ItemId49; // 0xd0
	int32_t ItemId50; // 0xd4
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FFacebookSharePhotoContent {
	UTexture2D* Image; // 0x0
	EFacebookImageFormat ImageFormat; // 0x8
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FItemXDRACOMakeTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t ItemMakeId; // 0xc
	int32_t ContentsId; // 0x10
	int32_t MakeType; // 0x14
	int32_t ClassID; // 0x18
	int32_t TabHorizon; // 0x1c
	int32_t TabVertical; // 0x20
	int32_t ItemId; // 0x24
	int32_t MakeCount; // 0x28
	int32_t GetWayType; // 0x2c
	int32_t MaterialItem01Id; // 0x30
	int32_t MaterialItem01Count; // 0x34
	int32_t MaterialItem02Id; // 0x38
	int32_t MaterialItem02Count; // 0x3c
	int32_t MaterialItem03Id; // 0x40
	int32_t MaterialItem03Count; // 0x44
	int32_t MaterialItem04Id; // 0x48
	int32_t MaterialItem04Count; // 0x4c
	int32_t NeedCost01Id; // 0x50
	int32_t NeedCost01Count; // 0x54
	int32_t NeedCost02Id; // 0x58
	int32_t NeedCost02Count; // 0x5c
	int32_t SuccessProbability; // 0x60
	int32_t DarkSteelCheck; // 0x64
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
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

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FAirWalkTemplate : FTableRowBase {
	int32_t AirWalkId; // 0x8
	int32_t ClassID; // 0xc
	int32_t AirStep; // 0x10
	float AirCoolTime; // 0x14
	int32_t StandardSpeed; // 0x18
	int32_t AirStandHeight; // 0x1c
	int32_t AirMoveHeight; // 0x20
	float AirWalkTime; // 0x24
	float UnableTime; // 0x28
	float AvailableTime; // 0x2c
	bool AirMotionBlur; // 0x30
	float DashReady; // 0x34
	float DashStart; // 0x38
	float FallStartSpeed; // 0x3c
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FGuildDevUITemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t ListType; // 0x10
	int32_t ListId; // 0x14
	int32_t ListX; // 0x18
	int32_t ListY; // 0x1c
	int32_t DevId; // 0x20
	int32_t DevType; // 0x24
	int32_t DevNameStrId; // 0x28
	int32_t DevExpStrId; // 0x2c
	int32_t DevIconId; // 0x30
	TArray<int32_t> NextDevId; // 0x38
	int32_t DevBoardId; // 0x48
	int32_t RelationDevId; // 0x4c
	int32_t SpecialTextStrId; // 0x50
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FGuildMarkTemplate : FTableRowBase {
	int32_t MarkId; // 0x8
	int32_t MarkType; // 0xc
	int32_t ResourceId; // 0x10
};

struct FItemSPTreasureTranceTemplate : FTableRowBase {
	int32_t TranceID; // 0x8
	int32_t ItemUseId; // 0xc
	int32_t TranceType; // 0x10
	int32_t TranceStep; // 0x14
	int32_t StatusId; // 0x18
	int32_t StatusValue; // 0x1c
	int32_t PassiveLv; // 0x20
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FAutoFlightPathTemplate : FTableRowBase {
	int32_t AutoFlightPathId; // 0x8
	FVector StartCoordinate; // 0xc
	FVector EndCoordinate; // 0x18
	float RandomRange; // 0x24
	int32_t AirStep1; // 0x28
	FVector MoveCoordinate1; // 0x2c
	int32_t AirStep2; // 0x38
	FVector MoveCoordinate2; // 0x3c
	int32_t AirStep3; // 0x48
	FVector MoveCoordinate3; // 0x4c
	int32_t AirStep4; // 0x58
	FVector MoveCoordinate4; // 0x5c
	int32_t AirStep5; // 0x68
	FVector MoveCoordinate5; // 0x6c
};

struct FCharacterPartsMID {
	TArray<UMaterialInstanceDynamic*> MIDArray; // 0x0
};

struct FAGContact {
	FString DisplayName; // 0x0
	TArray<FString> Numbers; // 0x10
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FFacebookHometown {
	FString ID; // 0x0
	FString Name; // 0x10
};

struct FGhostTrailMaterialParameterData {
	FName ParameterName; // 0x0
	float BeginValue; // 0x8
	float EndValue; // 0xc
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FItemMakeFrameTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t UniqueId; // 0xc
	int32_t MakeGroup; // 0x10
	int32_t MakeSubGroup; // 0x14
	int32_t NameSId; // 0x18
};

struct FPKModeTemplate : FTableRowBase {
	int32_t PkType; // 0x8
	int32_t PkMode; // 0xc
	int32_t PkModeName; // 0x10
	int32_t PkModeDesc; // 0x14
	int32_t PkModeIcon; // 0x18
	int32_t HudSelectAble; // 0x1c
	int32_t AttackNotServerVister; // 0x20
	int32_t AttackServerVisterSame; // 0x24
	int32_t AttackServerVisterNotSame; // 0x28
	int32_t AttackGradeType01; // 0x2c
	int32_t AttackGradeType02; // 0x30
	int32_t AttackGradeType03; // 0x34
	int32_t AttackGradeType04; // 0x38
	int32_t AttackGradeType05; // 0x3c
	int32_t AttackParty; // 0x40
	int32_t AttackGuild; // 0x44
	int32_t AttackAllyGuild; // 0x48
	int32_t AttackEnemyGuild; // 0x4c
	int32_t AttackFriend; // 0x50
	int32_t AttackPink; // 0x54
	int32_t AttackEnemyFaction; // 0x58
	int32_t AttackPvP; // 0x5c
	int32_t PkModeColor; // 0x60
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
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

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FRange_Float {
	float Min; // 0x0
	float Max; // 0x4
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
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

struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x0
	int32_t Caption; // 0x4
	int32_t metadata; // 0x8
	int32_t Script; // 0xc
	int32_t Subtitle; // 0x10
	int32_t Text; // 0x14
	int32_t Video; // 0x18
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FGuildSanctumTemplate : FTableRowBase {
	int32_t GuildSanctumId; // 0x8
	int32_t Shrine_ObjectId; // 0xc
	int32_t Shrine_Posid; // 0x10
	int32_t Sanctum_Monsterid; // 0x14
	int32_t Sanctum_Posid; // 0x18
	int32_t RewardBuffid; // 0x1c
	int32_t OwnDominionCheck; // 0x20
	int32_t SanctumLifeTime; // 0x24
	int32_t SanctumLifeTime_DevLevelValue; // 0x28
};

struct FItemMagicStoneTranceTemplate : FTableRowBase {
	int32_t TranceID; // 0x8
	int32_t TranceStep; // 0xc
	int32_t StatusId; // 0x10
	int32_t StatusValue; // 0x14
	int32_t Grade; // 0x18
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float ElapsedTime; // 0x4c
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FItemSetTemplate : FTableRowBase {
	int32_t SetGroupId; // 0x8
	int32_t NameSId; // 0xc
	int32_t ItemId01; // 0x10
	int32_t ItemId02; // 0x14
	int32_t ItemId03; // 0x18
	int32_t ItemId04; // 0x1c
	int32_t ItemId05; // 0x20
	int32_t ItemId06; // 0x24
	int32_t ItemId07; // 0x28
	int32_t ItemId08; // 0x2c
	int32_t Bonus01Count; // 0x30
	int32_t Bonus01AttributeType; // 0x34
	int32_t Bonus01Value; // 0x38
	int32_t Bonus02Count; // 0x3c
	int32_t Bonus02AttributeType; // 0x40
	int32_t Bonus02Value; // 0x44
	int32_t Bonus03Count; // 0x48
	int32_t Bonus03AttributeType; // 0x4c
	int32_t Bonus03Value; // 0x50
};

struct FMonsterPhasingTemplate : FTableRowBase {
	int32_t MonsterId; // 0x8
	int32_t MonsterResourceID; // 0xc
	int32_t GroupId; // 0x10
	int32_t NameSId; // 0x14
	int32_t NameTitleSid; // 0x18
	int32_t Race; // 0x1c
	int32_t MonGrade; // 0x20
	int32_t Level; // 0x24
	int32_t MonType; // 0x28
	float MonScale; // 0x2c
	int32_t MaxHP; // 0x30
	int32_t PhysicalAttack; // 0x34
	int32_t MagicAttack; // 0x38
	int32_t Physicaldefense; // 0x3c
	int32_t Magicdefense; // 0x40
	int32_t Accuracy; // 0x44
	int32_t Dodge; // 0x48
	int32_t Critical; // 0x4c
	int32_t AvoidCritical; // 0x50
	int32_t CriticalOutcome; // 0x54
	int32_t DefCriticalOutcome; // 0x58
	int32_t MonAttackDamage; // 0x5c
	int32_t MonDefense; // 0x60
	int32_t DefSmiteSkillDamage; // 0x64
	int32_t DarkdefenseDamage; // 0x68
	int32_t SkillDamage; // 0x6c
	int32_t DefSkillDamage; // 0x70
	int32_t AtkAllDamage; // 0x74
	int32_t DefAllDamage; // 0x78
	int32_t StunPer; // 0x7c
	int32_t DefStunPer; // 0x80
	int32_t KnockDownPer; // 0x84
	int32_t DefKnockDownPer; // 0x88
	int32_t SmiteBuffPer; // 0x8c
	int32_t DefSmiteBuffPer; // 0x90
	int32_t DeBuffPer; // 0x94
	int32_t DefDeBuffPer; // 0x98
	int32_t CursePer; // 0x9c
	int32_t DefCursePer; // 0xa0
	int32_t AttackLuck; // 0xa4
	int32_t RunSpeed; // 0xa8
	int32_t WalkSpeed; // 0xac
	float AttackDelayMin; // 0xb0
	float AttackDelayMax; // 0xb4
	int32_t FiredefensePer; // 0xb8
	int32_t FrozendefensePer; // 0xbc
	int32_t LightningdefensePer; // 0xc0
	int32_t PoisondefensePer; // 0xc4
	int32_t HolydefensePer; // 0xc8
	int32_t DarkdefensePer; // 0xcc
	int32_t CombatPower; // 0xd0
	int32_t HpStack; // 0xd4
	TArray<int32_t> MonAttack; // 0xd8
	TArray<int32_t> AttackRate_1; // 0xe8
	TArray<int32_t> AttackRate_2; // 0xf8
	TArray<int32_t> AttackRate_3; // 0x108
	TArray<int32_t> AttackRate_4; // 0x118
	TArray<int32_t> LongMonAttack; // 0x128
	TArray<int32_t> LongAttackRate_1; // 0x138
	TArray<int32_t> LongAttackRate_2; // 0x148
	TArray<int32_t> LongAttackRate_3; // 0x158
	TArray<int32_t> LongAttackRate_4; // 0x168
	int32_t TraceGap; // 0x178
	int32_t ViewRange; // 0x17c
	int32_t AttackRange; // 0x180
	int32_t LongAttackRange; // 0x184
	float CapsuleHalfHeight; // 0x188
	float CapsuleRadius; // 0x18c
	float UseAppear; // 0x190
	int32_t HitConGrade; // 0x194
	int32_t StateConGrade; // 0x198
	int32_t MoveConGrade; // 0x19c
	EMONSTER_FACTION FactionType; // 0x1a0
	int32_t MonColorGroupID; // 0x1a4
	int32_t BehaviourAiLink; // 0x1a8
	int32_t TargetingType; // 0x1ac
	int32_t CharacterTargetPriority; // 0x1b0
	int32_t PierceBody; // 0x1b4
	TArray<int32_t> MonNormalAttack; // 0x1b8
	TArray<int32_t> MonNormalLongAttack; // 0x1c8
	int32_t NormalAttackCntMin; // 0x1d8
	int32_t NormalAttackCntMax; // 0x1dc
	int32_t SmiteBuffArmor; // 0x1e0
	int32_t EffectBuffArmor; // 0x1e4
	int32_t TargetValue; // 0x1e8
	FString MonsterFunctionData; // 0x1f0
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FMovieSceneParticleParameterSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x30
	TArray<FColorParameterNameAndCurves> Colors; // 0x40
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x50
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FItemDropInfoTemplate : FTableRowBase {
	int32_t ItemId; // 0x8
	int32_t StageId01; // 0xc
	int32_t StageId02; // 0x10
	int32_t StageId03; // 0x14
	int32_t StageId04; // 0x18
	int32_t StageId05; // 0x1c
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FSkillCameraValue {
	bool UseManualCamera; // 0x0
	float SkillCameraDuration; // 0x4
	UCurveFloat* pZoomCameraCurve; // 0x8
	FName LookAtBoneName; // 0x10
	bool LookAtOffsetCheck; // 0x18
	UCurveVector* pLookAtOffsetCurve; // 0x20
	bool CameraAngleCheck; // 0x28
	bool MaintainCurrentAngle; // 0x29
	UCurveVector* pCameraAngleCurve; // 0x30
	UCurveFloat* pLookAtBoneSpeedCurve; // 0x38
};

struct FPhotoMode_Filter {
	int32_t StringID; // 0x0
	FColor IconColor; // 0x4
	UTexture* LUTTexture; // 0x8
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

struct FIconInfo {
	int32_t m_iIconID; // 0x0
	FVector2D m_vIconSize; // 0x4
};

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FExportTest : FTableRowBase {
	int32_t NpcID; // 0x8
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	DelegateProperty Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
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

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
	UStructProperty* LinearColorProperty; // 0x28
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

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FCustomizingCameraTemplate : FTableRowBase {
	FString CameraName; // 0x8
	FVector CameraLocation; // 0x18
	FRotator CameraRotation; // 0x24
	float CameraFov; // 0x30
	float CharacterYaw; // 0x34
	TArray<int32_t> LinkCategoryArray; // 0x38
};

struct FCharacterMasterySlotTemplate : FTableRowBase {
	int32_t SlotID; // 0x8
	int32_t SlotName; // 0xc
	int32_t SlotIcon; // 0x10
	int32_t SlotMaxLevel; // 0x14
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
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
};

struct FSkeletalMeshComponentEndPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FCharPointLightData {
	float ControlTime; // 0x0
	FLinearColor LightColor; // 0x4
	UCurveFloat* pIntensityCurve; // 0x18
	UCurveFloat* pRadiusCurve; // 0x20
	FVector LightOffset; // 0x28
};

struct FGhostMaterialParam {
	FName ParamName; // 0x0
	UCurveFloat* Curve; // 0x8
	UCurveLinearColor* ColorCurve; // 0x10
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FStartPhysicsTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FFacebookLeaderboard {
	FString UserID; // 0x0
	FString Username; // 0x10
	int32_t Score; // 0x20
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FPhasingTemplate : FTableRowBase {
	int32_t PhasingID; // 0x8
	int32_t StageId; // 0xc
	int32_t TriggerGroup; // 0x10
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FGuildDominionBuffTemplate : FTableRowBase {
	int32_t DominionBuffId; // 0x8
	int32_t DominionType; // 0xc
	int32_t DominionBuffCostType; // 0x10
	int32_t DominionBuffCostValue; // 0x14
	int32_t DominionBuffNameId; // 0x18
	int32_t DominionBuffIconId; // 0x1c
	int32_t DominionBuffDescId; // 0x20
	int32_t DominionWorldBuffId; // 0x24
	int32_t DominionBuffCnt; // 0x28
	int32_t NotifyMessage; // 0x2c
};

struct FItemOptionRandomTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RandomOptionGroupId; // 0xc
	int32_t OptionType; // 0x10
	int32_t OptionTypeValue; // 0x14
	int32_t OptionRate; // 0x18
};

struct FAppleProfile {
	FString ID; // 0x0
	FString email; // 0x10
	FString FullName; // 0x20
	FString GivenName; // 0x30
	FString FamilyName; // 0x40
	FString ProfileURL; // 0x50
};

struct FPhotoMode_Option {
	int32_t StringID; // 0x0
	bool OptionState; // 0x4
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
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

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
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

struct FAchievementTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t AchievementId; // 0xc
	int32_t AchievementGroupId; // 0x10
	int32_t AchievementGroupGrade; // 0x14
	int32_t AchievementCategory; // 0x18
	int32_t AchievementIcon; // 0x1c
	int32_t AchievementShowType; // 0x20
	int32_t AutoCheck; // 0x24
	int32_t AchievementOpenLevel; // 0x28
	int32_t AchievementName; // 0x2c
	int32_t AchievementText; // 0x30
	int32_t PlayDataId; // 0x34
	int32_t CompleteCount; // 0x38
	int64_t CompleteCountAccrue; // 0x40
	int32_t ContentOpenPage; // 0x48
	int32_t MissionId; // 0x4c
	int32_t RewardAchievementExp; // 0x50
	int32_t RewardGOLD; // 0x54
	int32_t RewardGoodsType; // 0x58
	int32_t RewardGoodsCount; // 0x5c
	TArray<int32_t> RewardItemId01; // 0x60
	int32_t RewardItemCount01; // 0x70
	TArray<int32_t> RewardItemId02; // 0x78
	int32_t RewardItemCount02; // 0x88
};

struct FAdaptorTriangleID : FElementID {
	int32_t IDValue; // 0x0
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FScalarParamCurve {
	FName ScalarParamName; // 0x0
	FUIParticleProperty Value; // 0x8
};

struct FGuildDominionPrizeTemplate : FTableRowBase {
	int32_t DominionPrizeId; // 0x8
	int32_t DominionPrizeType; // 0xc
	int32_t DominionPrizeGrade; // 0x10
	int32_t DominionPrizeNameId; // 0x14
	int32_t DominionPrizeIconId; // 0x18
	int32_t DominionPrizeLimit; // 0x1c
	int32_t DominionPrizeCostType; // 0x20
	int32_t DominionPrizeCostValue; // 0x24
	int32_t DominionPrizeItemId; // 0x28
	int32_t DominionPrizeString; // 0x2c
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

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
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

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FFinalBoneOffset {
	FName BoneName; // 0x0
	FVector BoneLocationOffset; // 0x8
	FVector BoneRotationOffset; // 0x14
	FVector BoneScaleOffset; // 0x20
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FItemOptionPassiveTemplate : FTableRowBase {
	int32_t OptionID; // 0x8
	int32_t Option_PassiveGroup; // 0xc
	int32_t PassiveID; // 0x10
	int32_t ClassID; // 0x14
	int32_t IsAble; // 0x18
	int32_t PassiveOptionRate; // 0x1c
	int32_t SortOrder; // 0x20
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
};

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FEvent_SchedulerTemplate : FTableRowBase {
	int32_t SchedulerID; // 0x8
	int32_t UseDatetime; // 0xc
	int32_t StartMO; // 0x10
	int32_t StartDD; // 0x14
	int32_t StartHH; // 0x18
	int32_t StartMI; // 0x1c
	int32_t EndMO; // 0x20
	int32_t EndDD; // 0x24
	int32_t EndHH; // 0x28
	int32_t EndMI; // 0x2c
	int32_t DateIterate; // 0x30
	int32_t DateIterateCnt; // 0x34
	int32_t UseDaysOfTheWeek; // 0x38
	int32_t Days_1StartTime; // 0x3c
	int32_t Days_1EndTime; // 0x40
	int32_t Days_2StartTime; // 0x44
	int32_t Days_2EndTime; // 0x48
	int32_t Days_3StartTime; // 0x4c
	int32_t Days_3EndTime; // 0x50
	int32_t Days_4StartTime; // 0x54
	int32_t Days_4EndTime; // 0x58
	int32_t Days_5StartTime; // 0x5c
	int32_t Days_5EndTime; // 0x60
	int32_t Days_6StartTime; // 0x64
	int32_t Days_6EndTime; // 0x68
	int32_t Days_7StartTime; // 0x6c
	int32_t Days_7EndTime; // 0x70
	int32_t WeekIterate; // 0x74
	int32_t WeekIterateCnt; // 0x78
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
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

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t LUTOffset; // 0x0
	int32_t NumInitPtrs; // 0x4
	int32_t NumEvalPtrs; // 0x8
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FCustomizingPresetTemplate : FTableRowBase {
	int32_t PresetGroup; // 0x8
	int32_t MainType; // 0xc
	int32_t CustomizeValue; // 0x10
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

struct FStringNPCTemplate : FTableRowBase {
	int32_t StringID; // 0x8
	FString TextKr; // 0x10
	FString CHT; // 0x20
	FString CHS; // 0x30
	FString JPN; // 0x40
	FString ENG; // 0x50
	FString THA; // 0x60
	FString IND; // 0x70
	FString VIE; // 0x80
	FString GER; // 0x90
	FString SPA; // 0xa0
	FString POR; // 0xb0
	FString RUS; // 0xc0
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> IDs; // 0x0
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

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
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

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FClosedTrainingStatusTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t TrainingStatusId; // 0xc
	int32_t StatusId; // 0x10
	int32_t TrainingGroupID; // 0x14
	int32_t OrderNum; // 0x18
	int32_t OpenConditionLevel; // 0x1c
	int32_t TrainingMaxLevel; // 0x20
};

struct FSkillPassiveTemplate : FTableRowBase {
	int32_t PassiveID; // 0x8
	int32_t PassiveMainType; // 0xc
	int32_t PassiveName; // 0x10
	int32_t PassiveExplain; // 0x14
	int32_t ItemOptionGrade; // 0x18
	int32_t PassiveIcon; // 0x1c
	int32_t PassiveTranceExplain; // 0x20
	int32_t LearnType; // 0x24
	int32_t ShowUI; // 0x28
	int32_t Class; // 0x2c
	int32_t PassiveGroupID; // 0x30
	int32_t PassiveMaxGrade; // 0x34
	int32_t PassiveMaxLv; // 0x38
	int32_t ReqClassLevel; // 0x3c
	int32_t ReqPassivePoint; // 0x40
	float ReqPassivePointLevelUp; // 0x44
	int32_t ReqPassiveGroupLevel; // 0x48
	int32_t ReqPassiveGroupLevelUp; // 0x4c
	int32_t NeedItem01Id; // 0x50
	int32_t NeedItem01Count; // 0x54
	int32_t NeedCost01Id; // 0x58
	int32_t NeedCost01Count; // 0x5c
	int32_t NeedLevelUpCost01; // 0x60
	int32_t PassiveType; // 0x64
	int32_t TargetType; // 0x68
	int32_t CastingCondition; // 0x6c
	int32_t ConditionValue01; // 0x70
	int32_t ConditionValue02; // 0x74
	float ConditionPer; // 0x78
	float LVConditionPer; // 0x7c
	float Cooltime; // 0x80
	float LVCoolTime; // 0x84
	int32_t BuffTargetType; // 0x88
	int32_t SkillPassiveLevel; // 0x8c
	int32_t BuffLink; // 0x90
	int32_t SpecialAbilityType; // 0x94
	int32_t SpecialAbilityValue01; // 0x98
	int32_t SpecialAbilityValue02; // 0x9c
	int32_t AbilityType_2; // 0xa0
	float AbilityValue_2; // 0xa4
	float LevelUpAbilityValue_2; // 0xa8
	float AbilityValueEx_2; // 0xac
	int32_t AbilityType_3; // 0xb0
	float AbilityValue_3; // 0xb4
	float LevelUpAbilityValue_3; // 0xb8
	float AbilityValueEx_3; // 0xbc
	bool IsSmite; // 0xc0
	float UIDescValue; // 0xc4
	float UIDescLevelUpValue; // 0xc8
	float UIDescValueEx; // 0xcc
	float UIDescLevelUpValueEx; // 0xd0
	float UIDescAbilityTime; // 0xd4
	float UIDescLevelUpTime; // 0xd8
	float UIDescBuffValue; // 0xdc
	float UIDescLevelUpBuffValue; // 0xe0
	float UIDescConditonPer; // 0xe4
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FDailyWorkTemplate : FTableRowBase {
	int32_t QuestDailyHomeworkId; // 0x8
	int32_t QuestDailyHomeworkGroupId; // 0xc
	int32_t QuestDailyHomeworkGroupIndex; // 0x10
	int32_t QuestDailyHomeworkIcon; // 0x14
	int32_t QuestDailyHomeworkTitleSID; // 0x18
	int32_t QuestDailyHomeworkTextSID; // 0x1c
	int32_t MissionType; // 0x20
	int32_t MissionTarget; // 0x24
	int32_t Parameter1; // 0x28
	int32_t Parameter2; // 0x2c
	int32_t ContentOpenPage; // 0x30
	int32_t RewardGOLD; // 0x34
	int32_t RewardGoodsType; // 0x38
	int32_t RewardGoodsCount; // 0x3c
	TArray<int32_t> RewardItem01Id; // 0x40
	int32_t RewardItem01Count; // 0x50
	TArray<int32_t> RewardItem02Id; // 0x58
	int32_t RewardItem02Count; // 0x68
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingId; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FMontageTemplate : FTableRowBase {
	int32_t MontageId; // 0x8
	FString Filename; // 0x10
};

struct FMovieSceneSkeletalAnimationOptimizedSectionTemplate : FMovieSceneEvalTemplate {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FUIParticleFloatCurve {
	FRichCurve CurveData; // 0x0
	ECurveType CurveType; // 0x80
	bool Loop; // 0x81
};

struct FFirebaseNotify {
	FString Title; // 0x0
	FString Body; // 0x10
	FString icon; // 0x20
	FString sound; // 0x30
	FString badge; // 0x40
	FString Tag; // 0x50
	FString Color; // 0x60
	FString click_action; // 0x70
	FString body_loc_key; // 0x80
	TArray<FString> body_loc_args; // 0x90
	FString title_loc_key; // 0xa0
	TArray<FString> title_loc_args; // 0xb0
};

struct FItemBlessIncreaseRateTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t RowId; // 0xc
	int32_t EquipSlotNumber; // 0x10
	int32_t BlessGrade; // 0x14
	int32_t IncreaseRate; // 0x18
	int32_t NameStrId; // 0x1c
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FSkeletalMeshComponentClothTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FVector_NetQuantize10 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FItemEquipSlotTemplate : FTableRowBase {
	int32_t SlotNumber; // 0x8
	int32_t SlotNameId; // 0xc
	int32_t SlotOpenClassLv; // 0x10
	int32_t EquipMainType; // 0x14
	int32_t EquipSubType; // 0x18
	int32_t MasteryMaxCount; // 0x1c
	int32_t GemSlot01Open; // 0x20
	int32_t GemSlot01Type; // 0x24
	int32_t GemSlot02Open; // 0x28
	int32_t GemSlot02Type; // 0x2c
	int32_t GemSlot03Open; // 0x30
	int32_t GemSlot03Type; // 0x34
	int32_t ShadowIcon; // 0x38
	int32_t HolyStuffIcon; // 0x3c
	int32_t HolyStuffSlotNameId; // 0x40
	int32_t TreasureSlotNameId; // 0x44
};

struct FAGProgressDialogData {
	FString Title; // 0x0
	FString Message; // 0x10
	DialogTheme Theme; // 0x20
	int32_t MaxValue; // 0x24
	int32_t Progress; // 0x28
	bool IsIndeterminate; // 0x2c
	bool IsCancellable; // 0x2d
	ProgressDialogStyle Style; // 0x2e
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
};

struct FResizeFontInfo {
	int32_t FromSourceSize; // 0x0
	int32_t ToSourceSize; // 0x4
	int32_t DestSize; // 0x8
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

struct FSourceEffectMidSideSpreaderSettings {
	EStereoChannelMode InputMode; // 0x0
	float SpreadAmount; // 0x4
	EStereoChannelMode OutputMode; // 0x8
	bool bEqualPower; // 0x9
};

struct FCustomBoneData {
	FName BoneName; // 0x0
	EBoneDataType BoneType; // 0x8
	TArray<FBoneMinMaxData> BoneMinMaxDataArray; // 0x10
};

struct FPetLevelTemplate : FTableRowBase {
	int32_t LevelId; // 0x8
	int32_t Tier; // 0xc
	int32_t Level; // 0x10
	int32_t NextLevelId; // 0x14
	int32_t EquipSlotCnt; // 0x18
	int32_t PassiveLv; // 0x1c
	int32_t LvUpNeedPetItemCount; // 0x20
	int32_t LvUpNeedCostType; // 0x24
	int32_t LvUpNeedCostValue; // 0x28
	int32_t LvUpNeedItemUseId01; // 0x2c
	int32_t LvUpNeedItemCount01; // 0x30
	int32_t AddCombatPoint; // 0x34
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
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

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
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

struct FKey {
	FName KeyName; // 0x0
};

struct FBuffAttackTemplate : FTableRowBase {
	int32_t BuffAttackID; // 0x8
	int32_t TargetType; // 0xc
	int32_t TargetValue; // 0x10
	int32_t ImpactType; // 0x14
	int32_t AttackDistanceMax; // 0x18
	int32_t AttackHeight; // 0x1c
	int32_t DamageAttribute; // 0x20
	int32_t MulDamage; // 0x24
	int32_t LevelUpMulDamage; // 0x28
	int32_t AddDamage; // 0x2c
	int32_t LevelUpAddDamage; // 0x30
	int32_t MagicDamage; // 0x34
	int32_t LevelUpMagicDamage; // 0x38
	int32_t AddMagicDamage; // 0x3c
	int32_t LevelUpAddMagicDamage; // 0x40
	int32_t SuperIgnore; // 0x44
	int32_t CCSTANCE; // 0x48
	int32_t CrowdControlType; // 0x4c
	int32_t CCDirection; // 0x50
	int32_t CrowdControlValue; // 0x54
	int32_t CrowdControlHeight; // 0x58
	float CrowdControlValueEx; // 0x5c
	float CrowdControlTime; // 0x60
	int32_t CCEffect; // 0x64
	FName CCEffectSocket; // 0x68
	int32_t CCEffectHeight; // 0x70
	float CCEffectScale; // 0x74
	FString CCMaterialPath; // 0x78
	int32_t HitEffect; // 0x88
	int32_t CriticalHitEffect; // 0x8c
	float HitEffectScale; // 0x90
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
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FBuffTemplate : FTableRowBase {
	int32_t BuffId; // 0x8
	int32_t BuffName; // 0xc
	int32_t BuffExplain; // 0x10
	int32_t ShowDamageFont; // 0x14
	int32_t ShowDamageLog; // 0x18
	TArray<int32_t> PetBuff_IconId; // 0x20
	int32_t PetId; // 0x30
	int32_t BuffUseType; // 0x34
	int32_t ApplyType; // 0x38
	int32_t BuffTarget; // 0x3c
	int32_t ActEffect; // 0x40
	int32_t BuffEffect; // 0x44
	int32_t BuffEffectScale; // 0x48
	int32_t icon; // 0x4c
	int32_t Icon_Big; // 0x50
	float BuffTime; // 0x54
	float LevelUpBuffTime; // 0x58
	int32_t BuffType; // 0x5c
	int32_t BuffIndexType_2; // 0x60
	int32_t BuffIndex_2; // 0x64
	int32_t BuffValue_2; // 0x68
	int32_t LevelUpBuffValue_2; // 0x6c
	int32_t BuffValueEx_2; // 0x70
	int32_t BuffIndexType_3; // 0x74
	int32_t BuffIndex_3; // 0x78
	int32_t BuffValue_3; // 0x7c
	int32_t LevelUpBuffValue_3; // 0x80
	int32_t BuffValueEx_3; // 0x84
	int32_t BuffIndexType_4; // 0x88
	int32_t BuffIndex_4; // 0x8c
	int32_t BuffValue_4; // 0x90
	int32_t LevelUpBuffValue_4; // 0x94
	int32_t BuffValueEx_4; // 0x98
	int32_t BuffOverlap; // 0x9c
	FName EffectSocket; // 0xa0
	EBuffSocketType EffectSocket_Type; // 0xa8
	float EffectHeight; // 0xac
	int32_t BuffArmorType; // 0xb0
	int32_t BuffProbability; // 0xb4
	int32_t UpdateRule; // 0xb8
	TArray<float> Emissive_Dcolor; // 0xc0
	float Fresnel_Exponenth; // 0xd0
	float Fresnel_BaseReflect; // 0xd4
	int32_t BuffAttackID; // 0xd8
	int32_t ExtinctionEffect; // 0xdc
	FName ExtinctionEffectSocket; // 0xe0
	int32_t OverLapCallGroupID; // 0xe8
	int32_t KeepType_Die; // 0xec
	int32_t KeepType_StageOut; // 0xf0
	int32_t KeepType_LogOut; // 0xf4
	int32_t IsHideRemainTime; // 0xf8
	TArray<int32_t> detachBuffID; // 0x100
};

struct FAIDataProviderStructValue : FAIDataProviderValue {
	UProperty* CachedProperty; // 0x8
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x60
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FSpawnObjectDataTemplate : FTableRowBase {
	int32_t TargetID; // 0x8
	FString Location; // 0x10
	float Rotation; // 0x20
	FVector WarpCoordinate; // 0x24
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x48
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FResourceMeshTemplate : FTableRowBase {
	int32_t ResourceId; // 0x8
	int32_t PartsIndex; // 0xc
	TArray<int32_t> HidePartsIndex; // 0x10
	int32_t AnimBlueprintID; // 0x20
	FName SocketName; // 0x24
	FString Filename; // 0x30
	FString CustomizeFileName; // 0x40
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
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

struct FPreviewMeshCollectionEntry {
	USkeletalMesh* SkeletalMesh; // 0x0
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
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

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
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
	int32_t BaseLOD; // 0x38
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FSkillCondition {
	EConditionType ConditionType; // 0x0
	bool EnableConditionTarget; // 0x1
	EConditionTarget ConditionTarget; // 0x2
	bool EnableConditionValue; // 0x3
	int32_t ConditionValue; // 0x4
	int32_t ExecutionProbability; // 0x8
	int32_t SkillId; // 0xc
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
};

struct FClientErrorStringTemplate : FTableRowBase {
	FString ErrorString; // 0x8
};

struct FEventContentsTemplate : FTableRowBase {
	int32_t ID; // 0x8
	int32_t eventType; // 0xc
	FString StartDate; // 0x10
	FString EndDate; // 0x20
	int32_t LinkDataTableName; // 0x30
	TArray<int32_t> LinkDataId; // 0x38
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xa8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xb0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0xf0
	int32_t InstancingRandomSeed; // 0x120
};

struct FInventoryExtendValueTemplate : FTableRowBase {
	int32_t SectionCountMax; // 0x8
	int32_t ExtendValue; // 0xc
	int32_t InventoryType; // 0x10
};

struct FMeshMergingSettings {
	int32_t TargetLightMapResolution; // 0x0
	EUVOutput OutputUVs[0x8]; // 0x4
	FMaterialProxySettings MaterialSettings; // 0xc
	int32_t GutterSize; // 0x80
	int32_t SpecificLOD; // 0x84
	EMeshLODSelectionType LODSelectionType; // 0x88
	char bGenerateLightMapUV : 1; // 0x89
	char bComputedLightMapResolution : 1; // 0x89
	char bPivotPointAtZero : 1; // 0x89
	char bMergePhysicsData : 1; // 0x89
	char bMergeMaterials : 1; // 0x89
	char bCreateMergedMaterial : 1; // 0x89
	char bBakeVertexDataToMesh : 1; // 0x89
	char bUseVertexDataForBakingMaterial : 1; // 0x89
	char bUseTextureBinning : 1; // 0x8a
	char bReuseMeshLightmapUVs : 1; // 0x8a
	char bMergeEquivalentMaterials : 1; // 0x8a
	char bUseLandscapeCulling : 1; // 0x8a
	char bIncludeImposters : 1; // 0x8a
	char bAllowDistanceField : 1; // 0x8a
};

struct FVector_NetQuantize100 : FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
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

struct FMagicSquareTemplate : FTableRowBase {
	int32_t MagicSquareId; // 0x8
	int32_t SquareName; // 0xc
	int32_t SquareInfo; // 0x10
	int32_t SquareThumbnail; // 0x14
	TArray<int32_t> EventTimeline; // 0x18
	TArray<int32_t> StageId; // 0x28
	int32_t StageRatio_2_Terms; // 0x38
	TArray<int32_t> StageRatio_2_TermsValue; // 0x40
	int32_t StageRatio_3_Terms; // 0x50
	TArray<int32_t> StageRatio_3_TermsValue; // 0x58
	int32_t NeedLevel; // 0x68
	int32_t NeedEnterType; // 0x6c
	int32_t NeedEnterTypeSub; // 0x70
	int32_t NeedEnterCount; // 0x74
	int32_t RecommendedCombatPoint; // 0x78
	int32_t ConditionReqCombatPoint; // 0x7c
	TArray<int32_t> MonsterLevel; // 0x80
};

struct FAdditionalUserInfo {
	FString provider_id; // 0x0
	FString user_name; // 0x10
	TMap<UFirebaseVariant*, UFirebaseVariant*> profile; // 0x20
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

struct FFacebookProfile {
	FString ID; // 0x0
	FString Birthday; // 0x10
	FString email; // 0x20
	FString FirstName; // 0x30
	FString MiddleName; // 0x40
	FString LastName; // 0x50
	FString Name; // 0x60
	FString Gender; // 0x70
	FFacebookHometown Hometown; // 0x80
	FString ProfileURL; // 0xa0
	FString AvatarURL; // 0xb0
};

struct FItemSmeltingAttributeTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t Class; // 0xc
	int32_t Grade; // 0x10
	int32_t Tier; // 0x14
	int32_t MainType; // 0x18
	int32_t SubType; // 0x1c
	int32_t SmeltingType; // 0x20
	int32_t SmeltingCount; // 0x24
	int32_t Attribute1Value; // 0x28
	int32_t Attribute2Value; // 0x2c
	int32_t Attribute3Value; // 0x30
	int32_t Attribute4Value; // 0x34
	int32_t Attribute5Value; // 0x38
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
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

struct FTickAnimationSharingFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FItemOptionTemplate : FTableRowBase {
	int32_t Name; // 0x8
	int32_t OptionID; // 0xc
	int32_t AttributeType; // 0x10
	int32_t AttributeGrade; // 0x14
	int32_t OptionGradeRate01; // 0x18
	int32_t OptionGradeRate02; // 0x1c
	int32_t OptionGradeRate03; // 0x20
	int32_t OptionGradeRate04; // 0x24
	int32_t OptionGradeRate05; // 0x28
	int32_t OptionGradeRate06; // 0x2c
	int32_t OptionGradeRate07; // 0x30
	int32_t OptionGradeRate08; // 0x34
	int32_t OptionGradeRate09; // 0x38
	int32_t OptionGradeRate10; // 0x3c
	int32_t OptionGradeValue01; // 0x40
	int32_t OptionGradeValue02; // 0x44
	int32_t OptionGradeValue03; // 0x48
	int32_t OptionGradeValue04; // 0x4c
	int32_t OptionGradeValue05; // 0x50
	int32_t OptionGradeValue06; // 0x54
	int32_t OptionGradeValue07; // 0x58
	int32_t OptionGradeValue08; // 0x5c
	int32_t OptionGradeValue09; // 0x60
	int32_t OptionGradeValue10; // 0x64
	int32_t OptionGradeValue11; // 0x68
	int32_t OptionGradeValue12; // 0x6c
	int32_t OptionGradeValue13; // 0x70
	int32_t OptionGradeValue14; // 0x74
	int32_t OptionGradeValue15; // 0x78
	int32_t OptionGradeValue16; // 0x7c
	int32_t OptionGradeValue17; // 0x80
	int32_t OptionGradeValue18; // 0x84
	int32_t OptionGradeValue19; // 0x88
	int32_t OptionGradeValue20; // 0x8c
	int32_t OptionGradeValue21; // 0x90
	int32_t OptionGradeValue22; // 0x94
	int32_t OptionGradeValue23; // 0x98
	int32_t OptionGradeValue24; // 0x9c
	int32_t OptionGradeValue25; // 0xa0
	int32_t OptionGradeValue26; // 0xa4
	int32_t OptionGradeValue27; // 0xa8
	int32_t OptionGradeValue28; // 0xac
	int32_t OptionGradeValue29; // 0xb0
	int32_t OptionGradeValue30; // 0xb4
	int32_t OptionGradeValue31; // 0xb8
	int32_t OptionGradeValue32; // 0xbc
	int32_t OptionGradeValue33; // 0xc0
	int32_t OptionGradeValue34; // 0xc4
	int32_t OptionGradeValue35; // 0xc8
	int32_t OptionGradeValue36; // 0xcc
	int32_t OptionGradeValue37; // 0xd0
	int32_t OptionGradeValue38; // 0xd4
	int32_t OptionGradeValue39; // 0xd8
	int32_t OptionGradeValue40; // 0xdc
	int32_t OptionGradeValue41; // 0xe0
	int32_t OptionGradeValue42; // 0xe4
	int32_t OptionGradeValue43; // 0xe8
	int32_t OptionGradeValue44; // 0xec
	int32_t OptionGradeValue45; // 0xf0
	int32_t OptionGradeValue46; // 0xf4
	int32_t OptionGradeValue47; // 0xf8
	int32_t OptionGradeValue48; // 0xfc
	int32_t OptionGradeValue49; // 0x100
	int32_t OptionGradeValue50; // 0x104
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

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x30
};

struct FMovieSceneEulerTransformPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieScene3DTransformTemplateData TemplateData; // 0x48
};

struct FUIShopTabTemplate : FTableRowBase {
	int32_t TabId; // 0x8
	int32_t TapType; // 0xc
	int32_t HigherTapId; // 0x10
	int32_t TapName; // 0x14
	int32_t OrderNum; // 0x18
	int32_t ViewType; // 0x1c
	int32_t TagIconType; // 0x20
	int32_t TapOnOff; // 0x24
	int32_t RateAddress; // 0x28
	int32_t GachaInfoId; // 0x2c
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FCollectionReference {
	FName CollectionName; // 0x0
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

struct FRandomPlayerSequenceEntry {
	UAnimSequence* Sequence; // 0x0
	float ChanceToPlay; // 0x8
	int32_t MinLoopCount; // 0xc
	int32_t MaxLoopCount; // 0x10
	float MinPlayRate; // 0x14
	float MaxPlayRate; // 0x18
	FAlphaBlend BlendIn; // 0x20
};

struct FMovieSceneEventRepeaterTemplate : FMovieSceneEventTemplateBase {
	FMovieSceneEventPtrs EventToTrigger; // 0x38
};

struct FContentsDirectionalLight {
	FRotator Rotation; // 0x0
	FColor LightColor; // 0xc
	float Intensity; // 0x10
};

struct FTotalMenuFrameTemplate : FTableRowBase {
	int32_t UniqueId; // 0x8
	int32_t ContentsId; // 0xc
	int32_t TabHorizon; // 0x10
	int32_t NPCGroupListID; // 0x14
	int32_t TabVertical; // 0x18
	int32_t TabName; // 0x1c
	int32_t ItemMainType; // 0x20
	int32_t ItemSubType; // 0x24
	int32_t Vertical_ItemGrade; // 0x28
};

struct FMovieSceneSpawnSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneBoolChannel Curve; // 0x20
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FMoneyTemplate : FTableRowBase {
	int32_t OwnerType; // 0x8
	int32_t MoneyId; // 0xc
	int32_t NameSId; // 0x10
	int32_t NoteID; // 0x14
	int32_t icon; // 0x18
	int32_t IconSmall; // 0x1c
	int64_t LimitUserMax; // 0x20
	int64_t LimitGuildMax; // 0x28
	int64_t LimitSystemMax; // 0x30
	int32_t GetWayId; // 0x38
	int32_t ShopBuyId; // 0x3c
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

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
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

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FRewardCommonTemplate : FTableRowBase {
	int32_t FirstClearRewardType1; // 0x8
	int32_t FirstClearRewardType2; // 0xc
	int32_t FirstClearRewardType3; // 0x10
	int32_t FirstClearRewardType4; // 0x14
	int32_t FirstClearRewardType5; // 0x18
	int32_t FirstClearRewardValue1; // 0x1c
	int32_t FirstClearRewardValue2; // 0x20
	int32_t FirstClearRewardValue3; // 0x24
	int32_t FirstClearRewardValue4; // 0x28
	int32_t FirstClearRewardValue5; // 0x2c
	TArray<int32_t> FirstClearRewardTypeSub1; // 0x30
	TArray<int32_t> FirstClearRewardTypeSub2; // 0x40
	TArray<int32_t> FirstClearRewardTypeSub3; // 0x50
	TArray<int32_t> FirstClearRewardTypeSub4; // 0x60
	TArray<int32_t> FirstClearRewardTypeSub5; // 0x70
};

struct FSkillCostTemplate : FTableRowBase {
	int32_t SkillCostId; // 0x8
	int32_t SkillGroupID; // 0xc
	int32_t SkillLevel; // 0x10
	int32_t PCLevel; // 0x14
	int32_t BloodLevel; // 0x18
	int32_t ForceLevel; // 0x1c
	int32_t SkillGrade; // 0x20
	int32_t ItemGrade; // 0x24
	int32_t ItemIcon; // 0x28
	int32_t LevelUpCostType; // 0x2c
	int32_t LevelUpCostValue; // 0x30
	int32_t LevelUpCostType1; // 0x34
	int32_t LevelUpCostValue1; // 0x38
	int32_t LevelUpItemId; // 0x3c
	int32_t LevelUpUseItemId; // 0x40
	int32_t LevelUpItemValue; // 0x44
	int32_t LevelUpItemId1; // 0x48
	int32_t LevelUpUseItemId1; // 0x4c
	int32_t LevelUpItemValue1; // 0x50
	int32_t SkillLevelUpType; // 0x54
	int32_t SkillCombatPoint; // 0x58
	int32_t ItemMakeId; // 0x5c
	TArray<int32_t> SmiteBuffID; // 0x60
	int32_t SilenceUse; // 0x70
	bool StateConUse; // 0x74
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FDropRewardObjectGroupTemplate : FTableRowBase {
	int32_t Drop_Reward_Object_GroupID; // 0x8
	int32_t ObjectID; // 0xc
	int32_t Object_Drop_Chance; // 0x10
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	DelegateProperty OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
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

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FPhotoMode_Pose {
	int32_t IconID; // 0x0
	int32_t PoseAnimIndex; // 0x4
};

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FContributionSlot {
	UMirTextBlock* txt_Fixed_Lv; // 0x0
	UMirTextBlock* txt_level_01; // 0x8
	UMirImage* icon_class_01; // 0x10
	UMirImage* icon_party_01; // 0x18
	UMirImage* imgSelect; // 0x20
	UMirTextBlock* txtRank; // 0x28
	UMirTextBlock* txt_name_01; // 0x30
	UMirTextBlock* txt_number_01; // 0x38
	UMirTextBlock* txt_percent_01; // 0x40
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
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

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FPorgressColor {
	FLinearColor BackGround; // 0x0
	FLinearColor Contents; // 0x10
	FLinearColor Tail; // 0x20
};

struct FAGDialogData {
	FString Title; // 0x0
	FString Message; // 0x10
	DialogTheme Theme; // 0x20
	FString PositiveButtonText; // 0x28
	FString NegativeButtonText; // 0x38
	FString NeutralButtonText; // 0x48
	TArray<FString> Items; // 0x58
	TArray<FString> SingleChoiceItems; // 0x68
	int32_t SingleChoiceCheckedItem; // 0x78
	TArray<FString> MultiChoiceItems; // 0x80
	TArray<bool> MultiChoiceCheckedItems; // 0x90
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FBoneMinMaxData {
	EBoneVectorType BoneVectorType; // 0x0
	float BoneMinValue; // 0x4
	float BoneMaxValue; // 0x8
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalToTrackingTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FFetchProvidersResult {
	TArray<FString> providers; // 0x0
};

struct FItemMakeAgencyTemplate : FTableRowBase {
	int32_t ItemMakeId; // 0x8
	int32_t MakeLimitType; // 0xc
	int32_t MakeWorldLimitCount; // 0x10
	int32_t MakeTryLimitCount; // 0x14
	int32_t MakeSuccessLimitCount; // 0x18
	int32_t MakePeriodType; // 0x1c
	FString MakePeriodStartDate; // 0x20
	FString MakePeriodEndDate; // 0x30
	int32_t SchedulerCycleId; // 0x40
	int32_t BroadCastType; // 0x44
	int32_t SortOrder; // 0x48
	int32_t MakeFailReward01Rate; // 0x4c
	int32_t MakeFailReward01Type; // 0x50
	int32_t MakeFailReward01Id; // 0x54
	int32_t MakeFailReward01Count; // 0x58
	int32_t MakeFailReward02Rate; // 0x5c
	int32_t MakeFailReward02Type; // 0x60
	int32_t MakeFailReward02Id; // 0x64
	int32_t MakeFailReward02Count; // 0x68
	int32_t MakeFailReward03Rate; // 0x6c
	int32_t MakeFailReward03Type; // 0x70
	int32_t MakeFailReward03Id; // 0x74
	int32_t MakeFailReward03Count; // 0x78
	int32_t MakeFailReward04Rate; // 0x7c
	int32_t MakeFailReward04Type; // 0x80
	int32_t MakeFailReward04Id; // 0x84
	int32_t MakeFailReward04Count; // 0x88
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x28
	TArray<UObject*> ObjReferences; // 0x90
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

struct FItemGetWayListTemplate : FTableRowBase {
	int32_t UniqueId; // 0x8
	EItemGetWayIdType IdType; // 0xc
	TArray<int32_t> LinkGetWayInfoList; // 0x10
};

struct FParticleSystemWorldManagerTickFunction : FTickFunction {
	ETickingGroup TickGroup; // 0x8
	ETickingGroup EndTickGroup; // 0x9
	char bTickEvenWhenPaused : 1; // 0xa
	char bCanEverTick : 1; // 0xa
	char bStartWithTickEnabled : 1; // 0xa
	char bAllowTickOnDedicatedServer : 1; // 0xa
	float TickInterval; // 0xc
};

struct FAreaNameTemplate : FTableRowBase {
	int32_t RowId; // 0x8
	int32_t TargetName; // 0xc
	int32_t Cooltime; // 0x10
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FAGNotificationDefaults {
	bool Lights; // 0x0
	bool sound; // 0x1
	bool Vibrate; // 0x2
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FAnimNode_StateResult : FAnimNode_Root {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

