// Created by BlueFire1337
// Updated 2022-01-19
// Generated 2022-02-02

#pragma once

struct FBuffAddition {
	APrimalCharacter* ForClass; // 0x0
	TArray<APrimalBuff*> BuffAdditions; // 0x8
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FCustomItemDoubles {
	TArray<double> Doubles; // 0x0
};

struct FActiveEventUndeprecatedStructures {
	FName ActiveEvent; // 0x0
	TArray<APrimalStructure*> UndeprecatedStructuresDuringEvent; // 0x8
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
	float DirectIlluminationOcclusionFraction; // 0x24
	float IndirectIlluminationOcclusionFraction; // 0x28
	float OcclusionExponent; // 0x2c
	float FullyOccludedSamplesFraction; // 0x30
	float MaxOcclusionDistance; // 0x34
	char bVisualizeMaterialDiffuse : 1; // 0x38
	char bVisualizeAmbientOcclusion : 1; // 0x38
	float VolumeLightSamplePlacementScale; // 0x3c
	char bCompressLightmaps : 1; // 0x40
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FClimbingAnims {
	FWeaponAnim LeftHandAnchored[0x20]; // 0x0
	FWeaponAnim RightHandAnchored[0x20]; // 0x200
};

struct FWorldDefaultItemSet {
	FName ItemSetName; // 0x0
	TArray<FName> MapName; // 0x8
	bool bFirstTimeEquip; // 0x18
	bool bOnlyGiveItemSetOnce; // 0x19
	bool bEquipOnNewPawn; // 0x1a
	int32_t ForceEquipIfAppID; // 0x1c
	TArray<UPrimalItem*> ItemsToGive; // 0x20
};

struct FDelegateArray {
	TArray<DelegateProperty> Delegates; // 0x0
};

struct FEnvTraceData {
	UNavigationQueryFilter* NavigationFilter; // 0x0
	float ProjectDown; // 0x8
	float ProjectUp; // 0xc
	float ExtentX; // 0x10
	float ExtentY; // 0x14
	float ExtentZ; // 0x18
	ETraceTypeQuery TraceChannel; // 0x1c
	EEnvTraceShape TraceShape; // 0x1d
	EEnvQueryTrace TraceMode; // 0x1e
	char bTraceComplex : 1; // 0x20
	char bOnlyBlockingHits : 1; // 0x20
	char bCanTraceOnNavMesh : 1; // 0x20
	char bCanTraceOnGeometry : 1; // 0x20
	char bCanDisableTrace : 1; // 0x20
	char bCanProjectDown : 1; // 0x20
};

struct FGenericTeamId {
	char TeamId; // 0x0
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FLootTableEntry {
	ELootItemType LootItemType; // 0x0
	TArray<UPrimalItem*> LootItemClasses; // 0x8
	float Weight; // 0x18
	ESimpleCurve QuantityCurve; // 0x1c
	int32_t MinQuantity; // 0x20
	int32_t MaxQuantity; // 0x24
	ESimpleCurve QualityCurve; // 0x28
	FVector2D QualityRange; // 0x2c
};

struct FHordeCrateDifficultyLevel {
	bool bEnabled; // 0x0
	int32_t MaxNumOfEventsForDifficulty; // 0x4
	int32_t DifficultyLevel; // 0x8
	int32_t MinNPCsToStart; // 0xc
	int32_t MaxNPCsToStart; // 0x10
	FHordeCrateNPCGroup StartingNPCs; // 0x18
	TArray<FHordeCrateWave> NPCWavesToComplete; // 0x68
	float MinTimeBeforeSelfDestruct; // 0x78
	float MaxTimeBeforeSelfDestruct; // 0x7c
	AActor* ActorTemplate; // 0x80
	float MinQualityMultiplier; // 0x88
	float MaxQualityMultiplier; // 0x8c
	int32_t MinAmtRewardItems; // 0x90
	int32_t MaxAmtRewardItems; // 0x94
	FLinearColor DifficultyColor; // 0x98
	float MainNodeElementPct; // 0xa8
};

struct FDinoExtraDefaultItemList {
	int32_t MinimumDinoLevel; // 0x0
	float ChanceToGive; // 0x4
	TArray<UPrimalItem*> DefaultItemsToGive; // 0x8
};

struct FClassRedirect {
	FString ObjectName; // 0x0
	FString OldClassName; // 0x10
	FString NewClassName; // 0x20
	FString OldSubobjName; // 0x30
	FString NewSubobjName; // 0x40
	bool InstanceOnly; // 0x50
};

struct FProxyMeshSettings {
	float MaxDrawDistance; // 0x0
	float TransitionDistance; // 0x4
	float TrianglePercent; // 0x8
};

struct FDataListEntryButtonBorderColors {
	FColor Normal; // 0x0
	FColor Hovered; // 0x4
	FColor Pressed; // 0x8
	FColor Disabled; // 0xc
};

struct FBoxElement2D {
	FVector2D Center; // 0x0
	float Width; // 0x8
	float Height; // 0xc
	float Angle; // 0x10
};

struct FReplicatePingData {
	char Rep_PingID; // 0x0
	FVector Rep_PingedLocation; // 0x4
	UPrimitiveComponent* Rep_PingedComponent; // 0x10
	uint32_t Rep_PingedByPlayerID; // 0x18
	AShooterCharacter* Rep_PingedByPlayerChar; // 0x20
};

struct FMissionWorldBuffData {
	FName WorldBuffIdentifier; // 0x0
	int32_t StacksToGive; // 0x8
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
};

struct FPingData {
	char PingID; // 0x0
	FVector PingedLocation; // 0x4
	UPrimitiveComponent* PingedComponent; // 0x10
	UTexture2D* PingIcon; // 0x18
	uint32_t CreatedByPlayerID; // 0x20
	AShooterCharacter* CreatedByPlayerChar; // 0x28
	TArray<AShooterCharacter*> RespondedPlayerChars; // 0x30
	double PingCreationTime; // 0x40
	char bHasBeenViewed : 1; // 0x48
	char bIsDying : 1; // 0x48
	char bIsDead : 1; // 0x48
};

struct FNPCSpawnLimit {
	APrimalDinoCharacter* NPCClass; // 0x0
	FString NPCClassString; // 0x8
	float MaxPercentageOfDesiredNumToAllow; // 0x18
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FProjectileArc {
	FVector StartLocation; // 0x0
	FVector StartDirection; // 0xc
	float LaunchSpeed; // 0x18
	FRotator WorldRotation; // 0x1c
	bool bApplyRotationToGravityDirection; // 0x28
	float OverrideGravityZ; // 0x2c
};

struct FDinoSetupGroup {
	FName GroupName; // 0x0
	float RandomWeight; // 0x8
	TArray<FDinoSetup> Entries; // 0x10
	TArray<int32_t> EntriesSpawnNumberLimits; // 0x20
};

struct FStructuresOnFloor {
	APrimalStructure* FloorStructure; // 0x0
	TArray<APrimalStructure*> StructuresOnFloor; // 0x8
};

struct FTireFrictionScalePair {
	UTireType* TireType; // 0x0
	float FrictionScale; // 0x8
};

struct FEngramEntries {
	TArray<UPrimalEngramEntry*> EngramEntries; // 0x0
};

struct FPrimalCharacterStatusStateDefinition {
	EPrimalCharacterStatusValue StatusValueType; // 0x0
	int32_t StatusValueThresholdIndex; // 0x4
	UTexture2D* StatusStateIcon; // 0x8
	FString StatusStateName; // 0x10
	FString StatusStateDescription; // 0x20
	FColor StatusStateNameColor; // 0x30
	bool bUsed; // 0x34
	bool bDisplayHUDMessage; // 0x35
	FString HUDMessage; // 0x38
	FColor HUDMessageColor; // 0x48
	int32_t BuffType; // 0x4c
};

struct FNameColorPair {
	FName MaterialParamName; // 0x0
	FLinearColor Color; // 0x8
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FWindowStyle : FSlateWidgetStyle {
	FButtonStyle MinimizeButtonStyle; // 0x8
	FButtonStyle MaximizeButtonStyle; // 0x250
	FButtonStyle RestoreButtonStyle; // 0x498
	FButtonStyle CloseButtonStyle; // 0x6e0
	FTextBlockStyle TitleTextStyle; // 0x928
	FSlateBrush ActiveTitleBrush; // 0xa40
	FSlateBrush InactiveTitleBrush; // 0xab8
	FSlateBrush FlashTitleBrush; // 0xb30
	FSlateBrush OutlineBrush; // 0xba8
	FSlateColor OutlineColor; // 0xc20
	FSlateBrush BorderBrush; // 0xc48
	FSlateBrush BackgroundBrush; // 0xcc0
	FSlateBrush ChildBackgroundBrush; // 0xd38
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
};

struct FUI_MainMenuLink {
	FString MapName; // 0x0
	UUI_MainMenu* Class; // 0x10
};

struct FTableRowStyle : FSlateWidgetStyle {
	FSlateBrush SelectorFocusedBrush; // 0x8
	FSlateBrush ActiveHoveredBrush; // 0x80
	FSlateBrush ActiveBrush; // 0xf8
	FSlateBrush InactiveHoveredBrush; // 0x170
	FSlateBrush InactiveBrush; // 0x1e8
	FSlateBrush EvenRowBackgroundHoveredBrush; // 0x260
	FSlateBrush EvenRowBackgroundBrush; // 0x2d8
	FSlateBrush OddRowBackgroundHoveredBrush; // 0x350
	FSlateBrush OddRowBackgroundBrush; // 0x3c8
	FSlateBrush DragDropLineIndicatorBrush; // 0x440
	FSlateBrush DragDropBorderIndicatorBrush; // 0x4b8
	FSlateColor TextColor; // 0x530
	FSlateColor SelectedTextColor; // 0x558
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FEngramEntryOverride {
	FString EngramClassName; // 0x0
	int32_t EngramIndex; // 0x10
	bool EngramHidden; // 0x14
	int32_t EngramPointsCost; // 0x18
	int32_t EngramLevelRequirement; // 0x1c
	bool RemoveEngramPreReq; // 0x20
};

struct FMaterialInstanceBasePropertyOverrides {
	bool bOverride_OpacityMaskClipValue; // 0x0
	bool bOverride_BlendMode; // 0x1
	bool bOverride_ShadingModel; // 0x2
	bool bOverride_TwoSided; // 0x3
	float OpacityMaskClipValue; // 0x4
	EBlendMode BlendMode; // 0x8
	EMaterialShadingModel ShadingModel; // 0x9
	char TwoSided : 1; // 0xc
};

struct FPointDamageEvent : FDamageEvent {
	FVector_NetQuantizeNormal ShotDirection; // 0x20
	FHitResult HitInfo; // 0x30
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FRequiresInventorySubclassMapping {
	UPrimalInventoryComponent* InventoryComponentClassParent; // 0x0
	TArray<UPrimalInventoryComponent*> RequiresInventoryComponentClassChildren; // 0x8
};

struct FBPHarvestResourceMultiplier {
	UPrimalItem* ItemType_13_5FCB3BBE40D81BD655C8F1AF3EAFE518; // 0x0
	float WeightPerLevelMultiplier_7_CBF4E43549210FC676CD9FBC0CC43571; // 0x8
	float AddedValuePerLevelMultiplier_11_E472E23E418CB0A0692E6A8508F3BF50; // 0xc
};

struct FTextBlockStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x28
	FVector2D ShadowOffset; // 0x50
	FLinearColor ShadowColorAndOpacity; // 0x58
	FSlateColor SelectedBackgroundColor; // 0x68
	FLinearColor HighlightColor; // 0x90
	FSlateBrush HighlightShape; // 0xa0
};

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	EEvaluatorDataSource DataSource; // 0x10
	EEvaluatorMode EvaluatorMode; // 0x11
	int32_t FramesToCachePose; // 0x14
	FA2Pose CachedPose; // 0x18
	int32_t CacheFramesRemaining; // 0x28
};

struct FHordeCrateNPCGroup {
	TArray<APrimalDinoCharacter*> NPCClasses; // 0x0
	TArray<UClass*> NPCAssets; // 0x10
	TArray<float> NPCWeights; // 0x20
	TArray<int32_t> MinLevels; // 0x30
	TArray<int32_t> MaxLevels; // 0x40
};

struct FInstantWeaponData {
	float WeaponSpread; // 0x0
	float TargetingSpreadMod; // 0x4
	float FinalWeaponSpreadMultiplier; // 0x8
	float FiringSpreadIncrement; // 0xc
	float FiringSpreadMax; // 0x10
	float WeaponRange; // 0x14
	int32_t HitDamage; // 0x18
	float DamageImpulse; // 0x1c
	UDamageType* DamageType; // 0x20
	float ClientSideHitLeeway; // 0x28
	float AllowedViewDotHitDir; // 0x2c
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FDockTabStyle : FSlateWidgetStyle {
	FButtonStyle CloseButtonStyle; // 0x8
	FSlateBrush NormalBrush; // 0x250
	FSlateBrush ActiveBrush; // 0x2c8
	FSlateBrush ColorOverlayBrush; // 0x340
	FSlateBrush ForegroundBrush; // 0x3b8
	FSlateBrush HoveredBrush; // 0x430
	FSlateBrush ContentAreaBrush; // 0x4a8
	FSlateBrush TabWellBrush; // 0x520
	FMargin TabPadding; // 0x598
	float OverlapWidth; // 0x5a8
	FSlateColor FlashColor; // 0x5b0
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FPrimalItemDefinition {
	UTexture2D* ItemTypeIcon; // 0x0
	FString ItemTypeName; // 0x8
};

struct FTableColumnHeaderStyle : FSlateWidgetStyle {
	FSlateBrush SortPrimaryAscendingImage; // 0x8
	FSlateBrush SortPrimaryDescendingImage; // 0x80
	FSlateBrush SortSecondaryAscendingImage; // 0xf8
	FSlateBrush SortSecondaryDescendingImage; // 0x170
	FSlateBrush NormalBrush; // 0x1e8
	FSlateBrush HoveredBrush; // 0x260
	FSlateBrush MenuDropdownImage; // 0x2d8
	FSlateBrush MenuDropdownNormalBorderBrush; // 0x350
	FSlateBrush MenuDropdownHoveredBorderBrush; // 0x3c8
};

struct FPrimalDroppedItemOnPlatform {
	FVector ItemRelativeLocation; // 0x0
	FRotator ItemRelativeRotation; // 0xc
	FName BoneName; // 0x18
	APrimalStructureItemContainer* MyItem; // 0x20
};

struct FBoneModifier {
	int32_t BoneIndex; // 0x0
	FVector Scale; // 0x4
	FVector Translation; // 0x10
	bool Recursive; // 0x1c
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FCustomItemByteArray {
	TArray<char> Bytes; // 0x0
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bShouldSlide : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0x10
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FItemNetID {
	uint32_t ItemID1; // 0x0
	uint32_t ItemID2; // 0x4
};

struct FEngineServiceTerminate {
	FString UserName; // 0x0
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FMovieSceneObjectBinding {
	FGuid ObjectGuid; // 0x0
	FText BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x38
};

struct FDecalData {
	UMaterialInterface* DecalMaterial; // 0x0
	float DecalSize; // 0x8
	float DecalDepth; // 0xc
	float DecalImpactNormalOffset; // 0x10
	float LifeSpan; // 0x14
	float RandomAngleRange; // 0x18
};

struct FItemStatInfo {
	char bUsed : 1; // 0x0
	char bCalculateAsPercent : 1; // 0x0
	char bDisplayAsPercent : 1; // 0x0
	char bRequiresSubmerged : 1; // 0x0
	char bPreventIfSubmerged : 1; // 0x0
	char bHideStatFromTooltip : 1; // 0x0
	int32_t DefaultModifierValue; // 0x4
	int32_t RandomizerRangeOverride; // 0x8
	float RandomizerRangeMultiplier; // 0xc
	float TheRandomizerPower; // 0x10
	float StateModifierScale; // 0x14
	float InitialValueConstant; // 0x18
	float RatingValueMultiplier; // 0x1c
	float AbsoluteMaxValue; // 0x20
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	FName Name; // 0x4
	ECollisionResponse DefaultResponse; // 0xc
	bool bTraceType; // 0xd
	bool bStaticObject; // 0xe
};

struct FWeaponAnim {
	UAnimMontage* Pawn1P; // 0x0
	UAnimMontage* Pawn3P; // 0x8
};

struct FCanoePassengerSavedInputAxis {
	float Axis_11_2215D3E3486D16DB2348D88BB08FB8AC; // 0x0
	double Timestamp_12_66A19F3F4671199B6AE4449ABE7E0869; // 0x8
};

struct FChatMessage {
	FString SenderName; // 0x0
	FString SenderSteamName; // 0x10
	FString SenderTribeName; // 0x20
	uint32_t SenderId; // 0x30
	FString Message; // 0x38
	FString Receiver; // 0x48
	int32_t SenderTeamIndex; // 0x58
	double ReceivedTime; // 0x60
	EChatSendMode SendMode; // 0x68
	uint32_t RadioFrequency; // 0x6c
	EChatType ChatType; // 0x70
	UTexture2D* SenderIcon; // 0x78
	FString UserId; // 0x80
};

struct FLeaderboardRow {
	FName MissionTag; // 0x0
	FString PlayerNetId; // 0x8
	int32_t TribeId; // 0x18
	double TimestampUtc; // 0x20
	float FloatValue; // 0x28
	int32_t IntValue; // 0x2c
	FName NameValue; // 0x30
	FString StringValue; // 0x38
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x58
};

struct FAtlasAdminCommandTrackingEntry {
	uint32_t ServerUTCTime; // 0x0
	int64_t PlayerId; // 0x8
	FString SteamID; // 0x10
	FString IP; // 0x20
	FVector Location; // 0x30
	FString CommandType; // 0x40
	FString Command; // 0x50
};

struct FTeleportedCharacter {
	APrimalCharacter* Character; // 0x0
	AController* Controller; // 0x8
	FVector OriginalLocation; // 0x10
	FRotator OriginalRotation; // 0x1c
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
};

struct FNPCSpawnEntriesContainerAdditions {
	UNPCSpawnEntriesContainer* SpawnEntriesContainerClass; // 0x0
	TArray<FNPCSpawnEntry> AdditionalNPCSpawnEntries; // 0x8
	TArray<FNPCSpawnLimit> AdditionalNPCSpawnLimits; // 0x18
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FClientMissionSubscriptionData {
	UClass* MissionType; // 0x0
	TArray<FName> Keys; // 0x20
};

struct FSaveLoadDyePaintingItem {
	FItemNetID ItemId; // 0x0
	FString ColorName; // 0x8
	FColor DyeColor; // 0x18
	float MissingPercentage; // 0x1c
	float NeededPercentage; // 0x20
	int16_t ArchIndex; // 0x24
	TArray<int32_t> ColorPixels; // 0x28
};

struct FIKRootAdjustmentInfo {
	FName RootBoneName; // 0x0
	FVector NonBoneRootLocationOffset; // 0x8
	float TraceExtraZBuffer; // 0x14
	float TraceLength; // 0x18
	char bUseActorRootInsteadForNonBone : 1; // 0x1c
	float DistanceTracedFromStartPoint; // 0x20
	FVector CachedDistanceTraced; // 0x24
};

struct FArrayOfStrings {
	TArray<FString> StringArray_3_042E4BCC4FCFD13EE6278BB57BF57A53; // 0x0
};

struct FItemCraftQueueEntry {
	FItemNetID ItemId; // 0x0
	int32_t Quantity; // 0x8
	bool bIsRepair; // 0xc
	bool bIgnoreInventoryRequirement; // 0xd
	float RepairPercentage; // 0x10
	float RepairSpeedMultiplier; // 0x14
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FKConvexElem {
	TArray<FVector> VertexData; // 0x0
	FBox ElemBox; // 0x10
	FTransform Transform; // 0x30
};

struct FPointOfInterestData {
	char PointType; // 0x0
	FName PointTag; // 0x4
	FString PointTitle; // 0x10
	FString PointDescription; // 0x20
	FVector PointLocation; // 0x30
	FRotator PointRotation; // 0x3c
	AActor* PointActor; // 0x48
	float PointVisibleDistance; // 0x50
	float PointVisibleDotProductRange; // 0x54
	UTexture2D* PointIcon; // 0x58
	UParticleSystem* ViewedPointVFX; // 0x60
	USoundCue* ViewedPointSFX; // 0x68
	APointOfInterestCosmeticActor* PointCosmeticActorClass; // 0x70
	FTransform PointCosmeticActorOffsetTransform; // 0x80
	char bHidePointOfInterestTitleBar : 1; // 0xb0
	char bPointTagValidated : 1; // 0xb0
	char bPointTagRequiresValidation : 1; // 0xb0
	char bOnlyVisibleOffScreen : 1; // 0xb0
	char bOnlyVisibleOnScreen : 1; // 0xb0
	char bAlwaysVisible : 1; // 0xb0
	USoundBase* LocationAddedSound; // 0xb8
	USoundBase* LocationReachedSound; // 0xc0
	FVector WidgetLocationOffset; // 0xc8
	float WidgetHiddenDistance; // 0xd4
	FLinearColor IndicatorColor; // 0xd8
	FLinearColor IconColor; // 0xe8
	char bUsePulseAnimation : 1; // 0xf8
	char bShowProgress : 1; // 0xf8
	float ProgressValue; // 0xfc
	FString ProgressLabelText; // 0x100
	FLinearColor ProgressBarColor; // 0x110
	FLinearColor ProgressLabelColor; // 0x120
	char bShowProgressLabelWhenOffScreen : 1; // 0x130
};

struct FRepRootMotionMontage {
	UAnimMontage* AnimMontage; // 0x0
	float Position; // 0x8
	FVector_NetQuantize10 Location; // 0xc
	FRotator Rotation; // 0x18
	UPrimitiveComponent* MovementBase; // 0x28
	FName MovementBaseBoneName; // 0x30
	bool bRelativePosition; // 0x38
	bool bRelativeRotation; // 0x39
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FBPMapCheckEntry {
	EBPMapCheckSeverity Severity; // 0x0
	FString Message; // 0x8
	TArray<AActor*> ActorLinks; // 0x18
};

struct FWorldBuffDefinition {
	FName WorldBuffIdentifier; // 0x0
	FString WorldBuffDisplayTitle; // 0x8
	FLinearColor WorldBuffDisplayTitleColor; // 0x18
	FString WorldBuffDisplayText; // 0x28
	UTexture2D* WorldBuffDisplayIcon; // 0x38
	FString WorldBuffServerNotificationText; // 0x40
	FLinearColor WorldBuffServerNotificationTextColor; // 0x50
	UTexture2D* WorldBuffServerNotificationIcon; // 0x60
	USoundBase* WorldBuffServerNotificationSound; // 0x68
	int32_t StackLimit; // 0x70
	float WorldBuffDuration; // 0x74
	TArray<FName> WorldBuffsToRemoveOnStart; // 0x78
	TArray<FName> WorldBuffsToPreventWhileActive; // 0x88
	float TimeFromEndToAllowReplacement; // 0x98
	FName WorldBuffSetName; // 0x9c
	EWorldBuffDifficultyType BuffDifficulty; // 0xa4
	FString DifficultyDisplayText; // 0xa8
	char bRefreshTimerAtFullStacks : 1; // 0xb8
	char bStacksExtendDuration : 1; // 0xb8
	char bStacksIncreaseEffect : 1; // 0xb8
	char bRemoveAllOtherWorldBuffsOnStart : 1; // 0xb8
	char bPreventAddingAnyOtherWorldBuffs : 1; // 0xb8
	char bForceDisableServerNotifications : 1; // 0xb8
	UPrimalWorldBuffCustomImplement* WorldBuffCustomImplementation; // 0xc0
	TArray<FPropertyModifierDefinition> PropertyModifiers; // 0xc8
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FAppIDItem {
	FString AchievementID; // 0x0
	TArray<FString> AchievementIDs; // 0x10
	FName GiveItemIfEmoteNameUnlocked; // 0x20
	int32_t AppID; // 0x28
	int32_t PlayerBadgeGroup; // 0x2c
	bool bForceNewDefaultCosmetic; // 0x30
	TArray<FString> PlayerIDStrings; // 0x38
	UPrimalItem* ItemClass; // 0x48
	TArray<UPrimalItem*> ItemClasses; // 0x50
};

struct FDefaultTextureParamOverride {
	FName TextureParamName; // 0x0
	UTexture2D* TextureValue; // 0x8
};

struct FTekPistolFireMode_Beam {
	FInstantWeaponData InstantWeaponConfig_37_9826F0EE4079AE597671C3A34954BA73; // 0x0
	UParticleSystem* ChargeFX_4_964F3924460DC339125629ADAD42B868; // 0x30
	UParticleSystem* MuzzleFlashFX_5_805187A04A203CEF7A29A9BE6E230B07; // 0x38
	UParticleSystem* ImpactFX_36_F85CFA904C23D7A7CFD8F7AE4227591C; // 0x40
	UParticleSystem* BeamFX_49_8520843D4E011C0FC1E6089E597E8D2E; // 0x48
	FLinearColor BeamColor_22_FEAC5CFC4EEE58FEB3F3F78FF04D0EE9; // 0x50
	FLinearColor SecondaryColor_23_222C28CF4EF52315538DD3A501684483; // 0x60
	APrimalBuff* BuffToApply_Player_31_DA16D39445395904939778935201587E; // 0x70
	APrimalBuff* BuffToApply_Dino_32_056460DC4C44A1266AC75682D0931E88; // 0x78
	int32_t AmmoPerShot_43_FAA584EC4887BB2845F1C9B3DC60F75A; // 0x80
	float DurabilityPerShot_46_89A28F814989ECF401614182DB896BAD; // 0x84
	UParticleSystem* ImpactFX_Friendly_52_A8825BD6476BFED1EFFA78A29C82FE21; // 0x88
	UParticleSystem* ImpactFX_Enemy_55_1C09033D41FF908759C843B2747616E1; // 0x90
	USoundCue* EngageSound_58_7F03872D4322180C7E11EEB354B6D9D7; // 0x98
	USoundCue* FireSound_61_A6B35B4C40D7095B67A1CFA1A3FDFEE6; // 0xa0
	USoundCue* ImpactSound_64_840F2FD64C1F57B0A266CE9A62ED2698; // 0xa8
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	FKey Key; // 0x8
	char bShift : 1; // 0x20
	char bCtrl : 1; // 0x20
	char bAlt : 1; // 0x20
	char bCmd : 1; // 0x20
};

struct FDinoSelectionGroup {
	TArray<APrimalDinoCharacter*> TheCharacters_3_939F02014B0717EC265861BBC320882C; // 0x0
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
};

struct FBoidBehavior {
	TArray<FAvoidanceArea> AvoidanceAreas; // 0x0
	float DesiredSeparation; // 0x10
	float NeighborDist; // 0x14
	float SeparationMultiplier; // 0x18
	float AlignmentMultiplier; // 0x1c
	float CohesionMultiplier; // 0x20
	float AvoidanceMultiplier; // 0x24
	float TargetingMultiplier; // 0x28
	float MaxDistanceToLeaders; // 0x2c
	float MaxSpeedMultiplier; // 0x30
	float MaxForceMultiplier; // 0x34
	bool bUseBoundsCulling; // 0x38
	float BoundsCullingMultiplier; // 0x3c
};

struct FPlayerCharacterGenderDefinition {
	FString GenderString; // 0x0
	AShooterCharacter* CharacterBlueprint; // 0x10
	TArray<FLinearColor> ColorSetBody; // 0x18
	TArray<FLinearColor> ColorSetHair; // 0x28
	TArray<FLinearColor> ColorSetEyes; // 0x38
	UMaterialInterface* CharacterPreviewMaterial; // 0x48
	TArray<FString> DefaultCharacterNames; // 0x50
	TArray<float> DefaultCharacterNameWeights; // 0x60
	FBoneModifierRangeArray CharacterBoneModifierRanges[0x16]; // 0x70
	FBoneModifierRangeArray ExtraCharacterBoneModifierMax[0x16]; // 0x330
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FPlayerItems {
	AShooterCharacter* Character; // 0x0
	TArray<FItemNetID> ItemIDs; // 0x8
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x90
};

struct FItemMultiplier {
	UPrimalItem* ItemClass; // 0x0
	float ItemMultiplier; // 0x8
};

struct FHUDRichTextOverlayData {
	FString DisplayText; // 0x0
	FLinearColor DefaultTextColor; // 0x10
	char bIgnoreDefaultTextColor : 1; // 0x20
	FVector2D Position; // 0x24
	ETextJustify TextAlignment; // 0x2c
	EHorizontalAlignment HorizontalScreenAnchor; // 0x2d
	EVerticalAlignment VerticalScreenAnchor; // 0x2e
	EHorizontalAlignment HorizontalWidgetAlignment; // 0x2f
	EVerticalAlignment VerticalWidgetAlignment; // 0x30
	float Scale; // 0x34
	char bUseAutoWrap : 1; // 0x38
	FVector2D AutoSizeOverride; // 0x3c
	AActor* Instigator; // 0x48
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

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
	char bValid : 1; // 0x18
};

struct FAnimNode_ModifyBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0x38
	FVector Translation; // 0x44
	FRotator Rotation; // 0x50
	FTransform BoneTransform; // 0x60
	bool bUseRotationTransform; // 0x90
	bool bIgnoreOnDedicatedServer; // 0x91
	bool bAllowUpdatingOutsideOfGameWorld; // 0x92
	FVector Scale; // 0x94
	EBoneModificationMode TranslationMode; // 0xa0
	EBoneModificationMode RotationMode; // 0xa1
	EBoneModificationMode ScaleMode; // 0xa2
	EBoneControlSpace TranslationSpace; // 0xa3
	EBoneControlSpace RotationSpace; // 0xa4
	EBoneControlSpace ScaleSpace; // 0xa5
};

struct FEngramCustomFolder {
	FString FolderName; // 0x0
	TArray<UPrimalItem*> EngramCustomFolderItemClasses; // 0x10
};

struct FAvoidanceArea {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FTransform Transform; // 0x20
	FVector BoxExtents; // 0x50
	float SphereRadius; // 0x5c
	double CreationTime; // 0x60
	char bBlockBox : 1; // 0x68
	char bBlockSphere : 1; // 0x68
	char bIsDynamic : 1; // 0x68
};

struct FActiveEventMainMenuOverride {
	FName ActiveEvent; // 0x0
	UTexture2D* MainMenuBG; // 0x8
	FString MusicFilename; // 0x10
};

struct FBattlePlayerData {
	FString PlayerName; // 0x0
	bool bConnected; // 0x10
	bool bAlive; // 0x11
	int32_t TribeId; // 0x14
	int32_t PlayerId; // 0x18
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FChibiScalarMaterialProperties {
	FName PropertyName_2_488168204B2C007FCB89C9842165137D; // 0x0
	float PropertyValue_5_C50ECAF64930F6F605446AA46AF8C970; // 0x8
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FTTVectorTrack : FTTTrackBase {
	UCurveVector* CurveVector; // 0x10
};

struct FLocalizedSpokenText {
	ELocalizedLanguage LanguageCode; // 0x0
	FString SpokenText; // 0x8
};

struct FMovieSceneSpawnable {
	FGuid Guid; // 0x0
	FText Name; // 0x10
	UObject* GeneratedClass; // 0x38
};

struct FBranchingPoint {
	FName EventName; // 0x0
	float DisplayTime; // 0x8
	float TriggerTimeOffset; // 0xc
};

struct FUnreplicatedEggData {
	TArray<int32_t> EggNumberOfLevelUpPointsApplied; // 0x0
	float EggTamedIneffectivenessModifier; // 0x10
	TArray<int32_t> EggColorSetIndices; // 0x18
	TArray<FDinoAncestorsEntryBlueprint> EggDinoAncestors; // 0x28
	TArray<FDinoAncestorsEntryBlueprint> EggDinoAncestorsMale; // 0x38
	int32_t EggRandomMutationsFemale; // 0x48
	int32_t EggRandomMutationsMale; // 0x4c
	int32_t EggGenderOverride; // 0x50
};

struct FCompressedOffsetData {
	TArray<int32_t> OffsetData; // 0x0
	int32_t StripSize; // 0x10
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

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FLevelExperienceRamp {
	TArray<float> ExperiencePointsForLevel; // 0x0
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FItemMaxItemQuantityOverride {
	UPrimalItem* ItemClass; // 0x0
	FMaxItemQuantityOverride Quantity; // 0x8
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FConfigItemCraftingCostOverride {
	FString ItemClassString; // 0x0
	TArray<FConfigCraftingResourceRequirement> BaseCraftingResourceRequirements; // 0x10
};

struct FArkInventoryData {
	TArray<FArkTributeInventoryItem> ArkItems; // 0x0
	TArray<FARKTributeDino> ArkTamedDinosData; // 0x10
	TArray<FArkTributePlayerData> ArkPlayerData; // 0x20
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
	FRawDistributionVector DynamicColor; // 0x190
	FRawDistributionFloat DynamicAlpha; // 0x1c8
	FRawDistributionVector DynamicColorScale; // 0x200
	FRawDistributionFloat DynamicAlphaScale; // 0x238
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
};

struct FPrimalItemStatDefinition {
	UTexture2D* ItemStatIcon; // 0x0
	FString ItemStatName; // 0x8
};

struct FDinoSpawnWeightMultiplier {
	FName DinoNameTag; // 0x0
	float SpawnWeightMultiplier; // 0x8
	bool OverrideSpawnLimitPercentage; // 0xc
	float SpawnLimitPercentage; // 0x10
};

struct FScalarMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	float Constant; // 0x3c
};

struct FSOTFNotificationInfo {
	bool bIsActive; // 0x0
	TArray<FString> PlayerNames; // 0x8
	FString PlayerDeathReason; // 0x18
	FString TribeName; // 0x28
	FString CustomDrawString; // 0x38
	double StartDisplayTime; // 0x48
	float DisplayInterval; // 0x50
	TArray<FPrimalPlayerCharacterConfigStructReplicated> DisplayData; // 0x58
	bool bLastPlayer; // 0x68
	ESTOFNotificationType Type; // 0x69
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FSublevelOverrideGroup {
	FString ForMapName; // 0x0
	bool bUseSublevelOverrides; // 0x10
	TArray<FSublevelOverrideDefinition> SublevelOverrides; // 0x18
	TArray<FLevelStaticMeshReskinDefinition> StaticMeshReskins; // 0x28
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FDinoOrderID {
	int32_t DinoID1; // 0x0
	int32_t DinoID2; // 0x4
	FString DinoName; // 0x8
};

struct FAmbientSoundSlot {
	USoundNodeWave* Wave; // 0x0
	USoundWave* SoundWave; // 0x8
	float PitchScale; // 0x10
	float VolumeScale; // 0x14
	float Weight; // 0x18
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x1f0
	FSlateBrush MidVolumeImage; // 0x268
	FSlateBrush LowVolumeImage; // 0x2e0
	FSlateBrush NoVolumeImage; // 0x358
	FSlateBrush MutedImage; // 0x3d0
};

struct FAnimNode_SkeletalControlBase : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
	float Alpha; // 0x28
	FInputScaleBias AlphaScaleBias; // 0x2c
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FPrimalPlayerDataStruct {
	uint64_t PlayerDataID; // 0x0
	FUniqueNetIdRepl UniqueID; // 0x8
	FString SavedNetworkAddress; // 0x18
	FString PlayerName; // 0x28
	uint32_t LocalPlayerIndex; // 0x38
	char bFirstSpawned : 1; // 0x3c
	char bUseSpectator : 1; // 0x3c
	FPrimalPlayerCharacterConfigStruct MyPlayerCharacterConfig; // 0x40
	int32_t LastPinCodeUsed; // 0x118
	FPrimalPersistentCharacterStatsStruct MyPersistentCharacterStats; // 0x120
	int32_t NumPersonalDinos; // 0x3e8
	int32_t TribeId; // 0x3ec
	TArray<int32_t> AppIDSet; // 0x3f0
	int32_t PlayerDataVersion; // 0x400
	double NextAllowedRespawnTime; // 0x408
	double LastTimeDiedToEnemyTeam; // 0x410
	double LoginTime; // 0x418
	double LastLoginTime; // 0x420
	float AllowedRespawnInterval; // 0x428
	float NumOfDeaths; // 0x42c
	int32_t SpawnDayNumber; // 0x430
	float SpawnDayTime; // 0x434
	TArray<FLatestMissionScore> LatestMissionScores; // 0x438
};

struct FTaggedString {
	FName Tag; // 0x0
	FString String; // 0x8
};

struct FBannerTextInfo {
	UTextRenderComponent* TextComponent; // 0x0
	UStaticMeshComponent* BackgroundComponent; // 0x8
	bool bActive; // 0x10
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x28
	float Yaw; // 0x2c
	FRotator MeshToComponent; // 0x30
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	EBindingKind Kind; // 0x20
};

struct FObjectInfo {
	UObject* Asset; // 0x0
	UObject* ActorToSpawn; // 0x8
	float HeightOffset; // 0x10
	float Radius; // 0x14
	float MinimumProbability; // 0x18
	float MinimumScale; // 0x1c
	float MaximumScale; // 0x20
	char bAlignToGroundNormal : 1; // 0x24
	char bRandomYaw : 1; // 0x24
	char bScaleByFoliageSettings : 1; // 0x24
};

struct FHitResult {
	char bBlockingHit : 1; // 0x0
	char bStartPenetrating : 1; // 0x0
	float Time; // 0x4
	FVector_NetQuantize Location; // 0x8
	FVector_NetQuantizeNormal Normal; // 0x14
	FVector_NetQuantize ImpactPoint; // 0x20
	FVector_NetQuantizeNormal ImpactNormal; // 0x2c
	FVector_NetQuantize TraceStart; // 0x38
	FVector_NetQuantize TraceEnd; // 0x44
	float PenetrationDepth; // 0x50
	int32_t Item; // 0x54
	TWeakObjectPtr<UPhysicalMaterial> PhysMaterial; // 0x58
	TWeakObjectPtr<AActor> Actor; // 0x60
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x68
	FName BoneName; // 0x78
	int32_t FaceIndex; // 0x80
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FMapSpecificTekArmorBuffs {
	APrimalBuff* TekArmorBuff_2_F5E423204C994EC6354175AE7BC652F7; // 0x0
	FString ForMap_5_BDE018E042331E4B7EC006837145188A; // 0x8
};

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FLandscapeSplineInterpPoint {
	FVector Center; // 0x0
	FVector Left; // 0xc
	FVector Right; // 0x18
	FVector FalloffLeft; // 0x24
	FVector FalloffRight; // 0x30
	float StartEndFalloff; // 0x3c
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FOverrideDamageHarvestingEntry {
	TArray<UPrimalHarvestingComponent*> ForHarvestingComponents; // 0x0
	FDamageHarvestingEntry HarvestEntryOverride; // 0x10
	TArray<FHarvestResourceEntry> HarvestResourceEntriesOverride; // 0x38
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FLandscapeImportLayerInfo {
	FName LayerName; // 0x0
	ULandscapeLayerInfoObject* LayerInfo; // 0x8
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FMissionAlertEntry {
	UTexture2D* Icon; // 0x0
	int32_t Count; // 0x8
	FString Label; // 0x10
	UPrimalItem* ItemType; // 0x20
	char bShowCount : 1; // 0x28
};

struct FAnimNode_LookAt : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0x38
	FBoneReference LookAtBone; // 0x44
	FVector LookAtLocation; // 0x50
	EAxisOption LookAtAxis; // 0x5c
};

struct FTeleportDestination {
	FString DestinationTitle; // 0x0
	FVector DestinationLocation; // 0x10
	FRotator DestinationRotation; // 0x1c
};

struct FPrimalStructureSnapPoint {
	FName SnapPointDescription; // 0x0
	FVector PointLocOffset; // 0x8
	FRotator PointRotOffset; // 0x14
	FRotator PointComparisonExtraRotOffset; // 0x20
	char bAttachToPoint : 1; // 0x2c
	char bAttachFromPoint : 1; // 0x2c
	char bHighPriorityAttachToPoint : 1; // 0x2c
	char bSnapToUseAlternatePlacemenTraceScale : 1; // 0x2c
	char bAttachToDisableEncroachmentCheck : 1; // 0x2c
	char bInvalidForStructureLinking : 1; // 0x2c
	char bSnapForceNoGroundRequirement : 1; // 0x2c
	char bSnapToOnlyAllowSingleAttachment : 1; // 0x2c
	char bPorthole : 1; // 0x2d
	int32_t ToPointSnapTypeFlags; // 0x30
	int32_t ToPointSnapTypeExcludeFlags; // 0x34
	int32_t SnapPointMatchGroup; // 0x38
	FName StaticMeshSnapSocketName; // 0x3c
	TArray<APrimalStructure*> SnapToStructureTypesToExclude; // 0x48
	TArray<APrimalStructure*> SnapFromStructureTypesToExclude; // 0x58
	TArray<APrimalStructure*> SnapToStructureTypesToInclude; // 0x68
	TArray<APrimalStructure*> SnapFromStructureTypesToInclude; // 0x78
	FPrimalStructureSnapTagSettings SnapTags; // 0x88
};

struct FActorClassAttachmentInfo {
	AActor* OwnerActorClassParent; // 0x0
	TArray<FItemAttachmentInfo> ItemAttachmentInfos; // 0x8
	FName PlayerMeshTextureMaskParamName; // 0x18
	UTexture2D* PlayerMeshTextureMask; // 0x20
	UTexture2D* PlayerMeshNoItemDefaultTextureMask; // 0x28
	int32_t PlayerMeshTextureMaskMaterialIndex; // 0x30
	int32_t PlayerMeshTextureMaskMaterialIndexAlt; // 0x34
	FName FPVHandsMeshTextureMaskParamName; // 0x38
	UTexture2D* FPVHandsMeshTextureMask; // 0x40
	int32_t FPVHandsMeshTextureMaskMaterialIndex; // 0x48
	int32_t FPVHandsMeshTextureMaskMaterialIndex2; // 0x4c
};

struct FLeaderboardColumnDefinition {
	float WidthPercent; // 0x0
	FMargin ColumnPadding; // 0x4
	FSlateFontInfo Font; // 0x18
};

struct FEditableTextBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImageNormal; // 0x8
	FSlateBrush BackgroundImageHovered; // 0x80
	FSlateBrush BackgroundImageFocused; // 0xf8
	FSlateBrush BackgroundImageReadOnly; // 0x170
	FMargin Padding; // 0x1e8
	FSlateFontInfo Font; // 0x1f8
	FSlateColor ForegroundColor; // 0x218
	FSlateColor BackgroundColor; // 0x240
	FSlateColor ReadOnlyForegroundColor; // 0x268
	FMargin HScrollBarPadding; // 0x290
	FMargin VScrollBarPadding; // 0x2a0
	FScrollBarStyle ScrollBarStyle; // 0x2b0
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString UserName; // 0x10
};

struct FCropItemPhaseData {
	float NextStageFertilizerCacheThreshold; // 0x0
	UStaticMesh* StageStaticMesh; // 0x8
	TArray<UStaticMesh*> StageStaticMeshes; // 0x10
	UStaticMesh* HasFruitStageStaticMesh; // 0x20
	TArray<UStaticMesh*> HasFruitStageStaticMeshes; // 0x28
	FVector StageStaticMeshScale3D; // 0x38
	FVector StageStaticMeshTranslationOffset; // 0x44
	FRotator StageStaticMeshRotationOffset; // 0x50
	TArray<FVector> StageStaticMeshScales3D; // 0x60
	TArray<FVector> StageStaticMeshTranslationOffsets; // 0x70
	TArray<FRotator> StageStaticMeshRotationOffsets; // 0x80
	TArray<UPrimalItem*> StageReachedItemsToGive; // 0x90
	TArray<float> StageReachedItemsToGiveWeights; // 0xa0
	char StageBlockCollisions; // 0xb0
	bool bUseStageStructure; // 0xb1
	APrimalStructure* StageStructure; // 0xb8
	FVector StageStructureOffset; // 0xc0
};

struct FCustomItemData {
	FName CustomDataName; // 0x0
	TArray<FString> CustomDataStrings; // 0x8
	TArray<float> CustomDataFloats; // 0x18
	TArray<UObject*> CustomDataObjects; // 0x28
	TArray<UObject*> CustomDataClasses; // 0x38
	TArray<FName> CustomDataNames; // 0x48
	FCustomItemByteArrays CustomDataBytes; // 0x58
	FCustomItemDoubles CustomDataDoubles; // 0x68
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FStaticMeshComponentLODInfo {
	TArray<FPaintedVertex> PaintedVertices; // 0x10
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FBPVariableDescription {
	FName VarName; // 0x0
	FGuid VarGuid; // 0x8
	FEdGraphPinType VarType; // 0x18
	FString FriendlyName; // 0x68
	FName Category; // 0x78
	uint64_t PropertyFlags; // 0x80
	char RepCondition; // 0x88
	FName RepNotifyFunc; // 0x8c
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x98
	FString DefaultValue; // 0xa8
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FCreateGrappleTetherData {
	FString WithTag; // 0x0
	FGrappleAnchor WithTetherStartAnchor; // 0x10
	FGrappleAnchor WithTetherEndAnchor; // 0x50
	FGrappleAnchor WithTetherVisualStartAnchor; // 0x90
	FGrappleAnchor WithTetherVisualEndAnchor; // 0xd0
	APrimalBuff_Grappled* WithMasterGrappleBuff; // 0x110
	float WithTetherLifetime; // 0x118
	char bUseVisualAnchor_Start : 1; // 0x11c
	char bUseVisualAnchor_End : 1; // 0x11c
	char bAnyoneCanControl : 1; // 0x11c
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FPrimalStats {
	bool bUsed; // 0x0
	double StartStatsTime; // 0x8
	int32_t PrimalStatsValues[0x7]; // 0x10
};

struct FPostProcessSettings {
	char bOverride_FilmWhitePoint : 1; // 0x0
	char bOverride_FilmSaturation : 1; // 0x0
	char bOverride_FilmChannelMixerRed : 1; // 0x0
	char bOverride_FilmChannelMixerGreen : 1; // 0x0
	char bOverride_FilmChannelMixerBlue : 1; // 0x0
	char bOverride_FilmContrast : 1; // 0x0
	char bOverride_FilmDynamicRange : 1; // 0x0
	char bOverride_FilmHealAmount : 1; // 0x0
	char bOverride_FilmToeAmount : 1; // 0x1
	char bOverride_MinExposureFilmToeAmount : 1; // 0x1
	char bOverride_MinFilmToeAmount : 1; // 0x1
	char bOverride_MaxExposureFilmToeAmount : 1; // 0x1
	char bOverride_MaxFilmToeAmount : 1; // 0x1
	char bOverride_FilmShadowTint : 1; // 0x1
	char bOverride_FilmShadowTintBlend : 1; // 0x1
	char bOverride_FilmShadowTintAmount : 1; // 0x1
	char bOverride_SceneColorTint : 1; // 0x2
	char bOverride_SceneFringeIntensity : 1; // 0x2
	char bOverride_SceneFringeSaturation : 1; // 0x2
	char bOverride_AmbientCubemapTint : 1; // 0x2
	char bOverride_AmbientCubemapIntensity : 1; // 0x2
	char bOverride_BloomIntensity : 1; // 0x2
	char bOverride_BloomThreshold : 1; // 0x2
	char bOverride_Bloom1Tint : 1; // 0x2
	char bOverride_Bloom1Size : 1; // 0x3
	char bOverride_Bloom2Size : 1; // 0x3
	char bOverride_Bloom2Tint : 1; // 0x3
	char bOverride_Bloom3Tint : 1; // 0x3
	char bOverride_Bloom3Size : 1; // 0x3
	char bOverride_Bloom4Tint : 1; // 0x3
	char bOverride_Bloom4Size : 1; // 0x3
	char bOverride_Bloom5Tint : 1; // 0x3
	char bOverride_Bloom5Size : 1; // 0x4
	char bOverride_BloomDirtMaskIntensity : 1; // 0x4
	char bOverride_BloomDirtMaskTint : 1; // 0x4
	char bOverride_BloomDirtMask : 1; // 0x4
	char bOverride_AutoExposureLowPercent : 1; // 0x4
	char bOverride_AutoExposureHighPercent : 1; // 0x4
	char bOverride_AutoExposureMinBrightness : 1; // 0x4
	char bOverride_AutoExposureMaxBrightness : 1; // 0x4
	char bOverride_AutoExposureSpeedUp : 1; // 0x5
	char bOverride_AutoExposureSpeedDown : 1; // 0x5
	char bOverride_AutoExposureBias : 1; // 0x5
	char bOverride_HistogramLogMin : 1; // 0x5
	char bOverride_HistogramLogMax : 1; // 0x5
	char bOverride_LensFlareIntensity : 1; // 0x5
	char bOverride_LensFlareTint : 1; // 0x5
	char bOverride_LensFlareTints : 1; // 0x5
	char bOverride_LensFlareBokehSize : 1; // 0x6
	char bOverride_LensFlareBokehShape : 1; // 0x6
	char bOverride_LensFlareThreshold : 1; // 0x6
	char bOverride_VignetteIntensity : 1; // 0x6
	char bOverride_VignetteColor : 1; // 0x6
	char bOverride_GrainIntensity : 1; // 0x6
	char bOverride_GrainJitter : 1; // 0x6
	char bOverride_AmbientOcclusionIntensity : 1; // 0x6
	char bOverride_AmbientOcclusionStaticFraction : 1; // 0x7
	char bOverride_AmbientOcclusionRadius : 1; // 0x7
	char bOverride_AmbientOcclusionFadeDistance : 1; // 0x7
	char bOverride_AmbientOcclusionFadeRadius : 1; // 0x7
	char bOverride_AmbientOcclusionDistance : 1; // 0x7
	char bOverride_AmbientOcclusionRadiusInWS : 1; // 0x7
	char bOverride_AmbientOcclusionPower : 1; // 0x7
	char bOverride_AmbientOcclusionBias : 1; // 0x7
	char bOverride_AmbientOcclusionQuality : 1; // 0x8
	char bOverride_AmbientOcclusionMipBlend : 1; // 0x8
	char bOverride_AmbientOcclusionMipScale : 1; // 0x8
	char bOverride_AmbientOcclusionMipThreshold : 1; // 0x8
	char bOverride_LPVIntensity : 1; // 0x8
	char bOverride_LPVWarpIntensity : 1; // 0x8
	char bOverride_LPVSize : 1; // 0x8
	char bOverride_LPVSecondaryOcclusionIntensity : 1; // 0x8
	char bOverride_LPVSecondaryBounceIntensity : 1; // 0x9
	char bOverride_LPVGeometryVolumeBias : 1; // 0x9
	char bOverride_LPVVplInjectionBias : 1; // 0x9
	char bOverride_LPVEmissiveInjectionIntensity : 1; // 0x9
	char bOverride_LPVTransmissionIntensity : 1; // 0x9
	char bOverride_IndirectLightingColor : 1; // 0x9
	char bOverride_IndirectLightingIntensity : 1; // 0x9
	char bOverride_ColorGradingIntensity : 1; // 0x9
	char bOverride_ColorGradingLUT : 1; // 0xa
	char bOverride_DepthOfFieldFocalDistance : 1; // 0xa
	char bOverride_DepthOfFieldFocalRegion : 1; // 0xa
	char bOverride_DepthOfFieldNearTransitionRegion : 1; // 0xa
	char bOverride_DepthOfFieldFarTransitionRegion : 1; // 0xa
	char bOverride_DepthOfFieldScale : 1; // 0xa
	char bOverride_DepthOfFieldMaxBokehSize : 1; // 0xa
	char bOverride_DepthOfFieldNearBlurSize : 1; // 0xa
	char bOverride_DepthOfFieldFarBlurSize : 1; // 0xb
	char bOverride_DepthOfFieldMethod : 1; // 0xb
	char bOverride_DepthOfFieldBokehShape : 1; // 0xb
	char bOverride_DepthOfFieldOcclusion : 1; // 0xb
	char bOverride_DepthOfFieldColorThreshold : 1; // 0xb
	char bOverride_DepthOfFieldSizeThreshold : 1; // 0xb
	char bOverride_DepthOfFieldSkyFocusDistance : 1; // 0xb
	char bOverride_MotionBlurAmount : 1; // 0xb
	char bOverride_MotionBlurMax : 1; // 0xc
	char bOverride_MotionBlurPerObjectSize : 1; // 0xc
	char bOverride_ScreenPercentage : 1; // 0xc
	char bOverride_AntiAliasingMethod : 1; // 0xc
	char bOverride_ScreenSpaceReflectionIntensity : 1; // 0xc
	char bOverride_ScreenSpaceReflectionQuality : 1; // 0xc
	char bOverride_ScreenSpaceReflectionMaxRoughness : 1; // 0xc
	char bOverride_ScreenSpaceReflectionRoughnessScale : 1; // 0xc
	char bOverride_UseIBLDrivenSSR : 1; // 0xd
	char bOverride_AdditionalMaterialSetSkyLightMultiplier : 1; // 0xd
	char bOverride_ClutterLayers : 1; // 0xd
	TArray<FOverrideClutterLayer> OverrideClutterLayers; // 0x10
	TArray<FClutterPropertyOverride> ClutterPropertyOverrides; // 0x20
	FLinearColor FilmWhitePoint; // 0x30
	FLinearColor FilmShadowTint; // 0x40
	float FilmShadowTintBlend; // 0x50
	float FilmShadowTintAmount; // 0x54
	float FilmSaturation; // 0x58
	FLinearColor FilmChannelMixerRed; // 0x5c
	FLinearColor FilmChannelMixerGreen; // 0x6c
	FLinearColor FilmChannelMixerBlue; // 0x7c
	float FilmContrast; // 0x8c
	float FilmToeAmount; // 0x90
	float FilmHealAmount; // 0x94
	float FilmDynamicRange; // 0x98
	float MinExposureFilmToeAmount; // 0x9c
	float MinFilmToeAmount; // 0xa0
	float MaxExposureFilmToeAmount; // 0xa4
	float MaxFilmToeAmount; // 0xa8
	FLinearColor SceneColorTint; // 0xac
	float SceneFringeIntensity; // 0xbc
	float SceneFringeSaturation; // 0xc0
	float BloomIntensity; // 0xc4
	float BloomThreshold; // 0xc8
	float Bloom1Size; // 0xcc
	float Bloom2Size; // 0xd0
	float Bloom3Size; // 0xd4
	float Bloom4Size; // 0xd8
	float Bloom5Size; // 0xdc
	FLinearColor Bloom1Tint; // 0xe0
	FLinearColor Bloom2Tint; // 0xf0
	FLinearColor Bloom3Tint; // 0x100
	FLinearColor Bloom4Tint; // 0x110
	FLinearColor Bloom5Tint; // 0x120
	float BloomDirtMaskIntensity; // 0x130
	FLinearColor BloomDirtMaskTint; // 0x134
	UTexture* BloomDirtMask; // 0x148
	float LPVIntensity; // 0x150
	float LPVWarpIntensity; // 0x154
	float LPVVplInjectionBias; // 0x158
	float LPVSize; // 0x15c
	float LPVSecondaryOcclusionIntensity; // 0x160
	float LPVSecondaryBounceIntensity; // 0x164
	float LPVGeometryVolumeBias; // 0x168
	float LPVEmissiveInjectionIntensity; // 0x16c
	float LPVTransmissionIntensity; // 0x170
	FLinearColor AmbientCubemapTint; // 0x174
	float AmbientCubemapIntensity; // 0x184
	UTextureCube* AmbientCubemap; // 0x188
	float AutoExposureLowPercent; // 0x190
	float AutoExposureHighPercent; // 0x194
	float AutoExposureMinBrightness; // 0x198
	float AutoExposureMaxBrightness; // 0x19c
	float AutoExposureSpeedUp; // 0x1a0
	float AutoExposureSpeedDown; // 0x1a4
	float AutoExposureBias; // 0x1a8
	float HistogramLogMin; // 0x1ac
	float HistogramLogMax; // 0x1b0
	float LensFlareIntensity; // 0x1b4
	FLinearColor LensFlareTint; // 0x1b8
	float LensFlareBokehSize; // 0x1c8
	float LensFlareThreshold; // 0x1cc
	UTexture* LensFlareBokehShape; // 0x1d0
	FLinearColor LensFlareTints[0x8]; // 0x1d8
	float VignetteIntensity; // 0x258
	FLinearColor VignetteColor; // 0x25c
	float GrainJitter; // 0x26c
	float GrainIntensity; // 0x270
	float AmbientOcclusionIntensity; // 0x274
	float AmbientOcclusionStaticFraction; // 0x278
	float AmbientOcclusionRadius; // 0x27c
	char AmbientOcclusionRadiusInWS : 1; // 0x280
	float AmbientOcclusionFadeDistance; // 0x284
	float AmbientOcclusionFadeRadius; // 0x288
	float AmbientOcclusionDistance; // 0x28c
	float AmbientOcclusionPower; // 0x290
	float AmbientOcclusionBias; // 0x294
	float AmbientOcclusionQuality; // 0x298
	float AmbientOcclusionMipBlend; // 0x29c
	float AmbientOcclusionMipScale; // 0x2a0
	float AmbientOcclusionMipThreshold; // 0x2a4
	FLinearColor IndirectLightingColor; // 0x2a8
	float IndirectLightingIntensity; // 0x2b8
	float ColorGradingIntensity; // 0x2bc
	UTexture* ColorGradingLUT; // 0x2c0
	EDepthOfFieldMethod DepthOfFieldMethod; // 0x2c8
	float DepthOfFieldFocalDistance; // 0x2cc
	float DepthOfFieldFocalRegion; // 0x2d0
	float DepthOfFieldNearTransitionRegion; // 0x2d4
	float DepthOfFieldFarTransitionRegion; // 0x2d8
	float DepthOfFieldScale; // 0x2dc
	float DepthOfFieldMaxBokehSize; // 0x2e0
	float DepthOfFieldNearBlurSize; // 0x2e4
	float DepthOfFieldFarBlurSize; // 0x2e8
	UTexture* DepthOfFieldBokehShape; // 0x2f0
	float DepthOfFieldOcclusion; // 0x2f8
	float DepthOfFieldColorThreshold; // 0x2fc
	float DepthOfFieldSizeThreshold; // 0x300
	float DepthOfFieldSkyFocusDistance; // 0x304
	float MotionBlurAmount; // 0x308
	float MotionBlurMax; // 0x30c
	float MotionBlurPerObjectSize; // 0x310
	float ScreenPercentage; // 0x314
	EAntiAliasingMethod AntiAliasingMethod; // 0x318
	float ScreenSpaceReflectionIntensity; // 0x31c
	float ScreenSpaceReflectionQuality; // 0x320
	float ScreenSpaceReflectionMaxRoughness; // 0x324
	char IBLDrivenSSR : 1; // 0x328
	float AdditionalMaterialSetSkyLightMultiplier; // 0x32c
	TArray<UObject*> Blendables; // 0x330
	TArray<FPostProcessSettingsMaterialAdjuster> PostProcessSettingsMaterialAdjusters; // 0x340
	USoundBase* PostProcessAmbientSound; // 0x350
};

struct FPrimalImageStyle {
	FName StyleName; // 0x0
	FInlineTextImageStyle ImageStyle; // 0x8
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	int32_t ItemIndex; // 0x10
	char bBlockingHit : 1; // 0x14
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FTextureParameterValue {
	FName ParameterName; // 0x0
	UTexture* ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x10
};

struct FClassRemappingWeight {
	UObject* FromClass; // 0x0
	TArray<UObject*> ToClasses; // 0x8
	TArray<float> Weights; // 0x18
	FName ActiveEvent; // 0x28
	char bExactMatch : 1; // 0x30
};

struct FTributePlayerTribeInfo {
	TArray<uint64_t> PlayerDataIDs; // 0x0
	TArray<uint64_t> TribeIDs; // 0x10
};

struct FDynamicUndermeshVolumes_Root {
	TArray<FDynamicUndermeshVolumes_MapSet> Root; // 0x0
};

struct FSpawnVineRequestData {
	FVector Start_2_FC47A112450269F291063D8425C95D9E; // 0x0
	FVector End_5_0D28BAC44C422A917BB6749E1B8451FD; // 0xc
};

struct FSW_MaterialEffectData {
	FName NotifyName_18_B540047F431340276909B08E18FF4CE2; // 0x0
	FName ParameterName_17_DC38C3EB4C7416578C83C6B936E50232; // 0x8
	float InitValue_8_ABA5CCF64494AFB454FECB8B5428431F; // 0x10
	float FinalValue_11_BF3C30144B7BB722DC78FD81D3C74452; // 0x14
	int32_t ModFrequency_22_B2B8434A43AB23D89D0A34A37689C281; // 0x18
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
	FName DriverClassNameFallback2; // 0x18
};

struct FAssetPathObjectPair {
	FStringAssetReference AssetPath; // 0x0
	UObject* AssetObject; // 0x10
};

struct FInstancedFoligeData {
	UStaticMeshComponent* Component; // 0x0
	UObject* FoliageType; // 0x8
};

struct FSupplyCrateSpawnPointEntry {
	AActor* LinkedSpawnPoint; // 0x0
	ANPCZoneManager* LinkedEnemySpawnZoneManager; // 0x8
	FName LinkedEnemySpawnZoneManagerTag; // 0x10
	char bTraceGroundPoint : 1; // 0x18
	FVector TraceGroundPointDownOffset; // 0x1c
	FVector TraceGroundPointUpOffset; // 0x28
	float SpawnPointWeight; // 0x34
	TArray<FSupplyCrateSpawnEntry> OverrideSupplyCrateEntries; // 0x38
};

struct FHairMetaData {
	FString HairStyleNameString_8_59FC1375448902F8752BF083E928518D; // 0x0
	bool AllowHairSimulation_37_EA7DF01E4BCB91C29CE9EDBF80A4DC82; // 0x10
	TArray<FVector> RestPos_3_C9C310CC4A789B406462C2B9CE2463B1; // 0x18
	TArray<FVector> PivotPos_44_4FBB724349C3E81132566780C1E397F3; // 0x28
	float GravityForce_11_E24D5DA542776710E028FF98BF678DE6; // 0x38
	float DragForce_14_9EFA51F046A6820CCDD810A3FF7EFDB7; // 0x3c
	float Damping_17_183EC7CD4D8F2ACB3F5F808DA235F0DD; // 0x40
	float SpringForce_20_DAA8178C471BA72BFFE2CE9687F8E428; // 0x44
	float HairScale_23_7C673D6C4FC356533C8767B74B66F8CF; // 0x48
	float SpringForceFrontModifier_26_E808F33C40772F9214463B8CA42324E8; // 0x4c
	float DampingFrontModifier_29_FB4BDA1D432A303773971C8C34F23A53; // 0x50
	float SpringForceBack_32_CC1CCA024FC7D522A1E189BCC5366068; // 0x54
	float DampingBack_35_70F79D6A40BF14CD6F8060ABBC263F89; // 0x58
	float MaxRestDistance_40_22F3EB35435CE313C3AAEC855A006D0A; // 0x5c
	bool bPosAsPivot_47_B6FA83974BB12485C7E1F087EF4030CD; // 0x60
	bool bCollideWithNeck_51_17E9F53E47565DB3C1E367ADE714F8A3; // 0x61
	bool bCollideMiddle_52_A3B59A144A6F79F5FFCD88916A60E2FA; // 0x62
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

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x68
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
	EAudioOutputTarget OutputTarget; // 0x20
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FObjectCorrelation {
	UObject* FromObject; // 0x0
	UObject* ToObject; // 0x8
};

struct FFontParameterValue {
	FName ParameterName; // 0x0
	UFont* FontValue; // 0x8
	int32_t FontPage; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FMaxItemQuantityOverride {
	int32_t MaxItemQuantity; // 0x0
	bool bIgnoreMultiplier; // 0x4
};

struct FCustomContextMenuData {
	FName ContextItemName; // 0x0
	FString DisplayString; // 0x8
	FName OptionalKeybindName; // 0x18
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FBlueprintVisualLogEntry {
	FString Category; // 0x0
	FString Key; // 0x10
	FString Value; // 0x20
};

struct FConstraintInstance {
	USceneComponent* OwnerComponent; // 0x8
	FName JointName; // 0x1c
	FName ConstraintBone1; // 0x24
	FName ConstraintBone2; // 0x2c
	FVector Pos1; // 0x34
	FVector PriAxis1; // 0x40
	FVector SecAxis1; // 0x4c
	FVector Pos2; // 0x58
	FVector PriAxis2; // 0x64
	FVector SecAxis2; // 0x70
	char bDisableCollision : 1; // 0x7c
	char bEnableProjection : 1; // 0x7c
	float ProjectionLinearTolerance; // 0x80
	float ProjectionAngularTolerance; // 0x84
	ELinearConstraintMotion LinearXMotion; // 0x88
	ELinearConstraintMotion LinearYMotion; // 0x89
	ELinearConstraintMotion LinearZMotion; // 0x8a
	float LinearLimitSize; // 0x8c
	char bLinearLimitSoft : 1; // 0x90
	float LinearLimitStiffness; // 0x94
	float LinearLimitDamping; // 0x98
	char bLinearBreakable : 1; // 0x9c
	float LinearBreakThreshold; // 0xa0
	char bSwingLimited : 1; // 0xa4
	char bTwistLimited : 1; // 0xa4
	EAngularConstraintMotion AngularSwing1Motion; // 0xa8
	EAngularConstraintMotion AngularTwistMotion; // 0xa9
	EAngularConstraintMotion AngularSwing2Motion; // 0xaa
	char bSwingLimitSoft : 1; // 0xac
	char bTwistLimitSoft : 1; // 0xac
	float Swing1LimitAngle; // 0xb0
	float TwistLimitAngle; // 0xb4
	float Swing2LimitAngle; // 0xb8
	float SwingLimitStiffness; // 0xbc
	float SwingLimitDamping; // 0xc0
	float TwistLimitStiffness; // 0xc4
	float TwistLimitDamping; // 0xc8
	FRotator AngularRotationOffset; // 0xcc
	char bAngularBreakable : 1; // 0xd8
	float AngularBreakThreshold; // 0xdc
	char bLinearXPositionDrive : 1; // 0xe0
	char bLinearXVelocityDrive : 1; // 0xe0
	char bLinearYPositionDrive : 1; // 0xe0
	char bLinearYVelocityDrive : 1; // 0xe0
	char bLinearZPositionDrive : 1; // 0xe0
	char bLinearZVelocityDrive : 1; // 0xe0
	char bLinearPositionDrive : 1; // 0xe0
	char bLinearVelocityDrive : 1; // 0xe0
	FVector LinearPositionTarget; // 0xe4
	FVector LinearVelocityTarget; // 0xf0
	float LinearDriveSpring; // 0xfc
	float LinearDriveDamping; // 0x100
	float LinearDriveForceLimit; // 0x104
	char bSwingPositionDrive : 1; // 0x108
	char bSwingVelocityDrive : 1; // 0x108
	char bTwistPositionDrive : 1; // 0x108
	char bTwistVelocityDrive : 1; // 0x108
	char bAngularSlerpDrive : 1; // 0x108
	char bAngularOrientationDrive : 1; // 0x108
	char bAngularVelocityDrive : 1; // 0x108
	FQuat AngularPositionTarget; // 0x110
	EAngularDriveMode AngularDriveMode; // 0x120
	FRotator AngularOrientationTarget; // 0x124
	FVector AngularVelocityTarget; // 0x130
	float AngularDriveSpring; // 0x13c
	float AngularDriveDamping; // 0x140
	float AngularDriveForceLimit; // 0x144
};

struct FGrinderItemReplacer {
	UPrimalItem* current; // 0x0
	UPrimalItem* replacement; // 0x8
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x20
	FVector Right; // 0x2c
};

struct FBattleTribeData {
	FString TribeName; // 0x0
	int32_t TribeId; // 0x10
};

struct FPrimalStructureSnapTagSettings {
	TArray<FName> SnapToStructureTagsToExclude; // 0x0
	TArray<FName> SnapFromStructureTagsToExclude; // 0x10
	TArray<FName> SnapToStructureTagsToInclude; // 0x20
	TArray<FName> SnapFromStructureTagsToInclude; // 0x30
};

struct FGameIniData {
	FString PropertyName; // 0x0
	FString PropertyValue; // 0x10
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	float FontDrawScalar; // 0x8
	bool EnableOutlineAndGlowInShader; // 0xc
	FName FontName; // 0x10
	int32_t Size; // 0x18
	EFontHinting Hinting; // 0x1c
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
	bool bLockBone; // 0xd
	bool bRemoveBone; // 0xe
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x28
	FSlateBrush BackgroundImageSelected; // 0x50
	FSlateBrush BackgroundImageSelectionTarget; // 0xc8
	FSlateBrush BackgroundImageComposing; // 0x140
	FSlateBrush CaretImage; // 0x1b8
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x58
};

struct FCharacterPreset {
	float BodyColorSliderValue; // 0x0
	float HairColorSliderValue; // 0x4
	float EyeColorSliderValue; // 0x8
	TArray<float> BoneModifierSliderValues; // 0x10
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
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

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FTrackToSkeletonMap {
	int32_t SkeletonIndex; // 0x0
	int32_t BoneTreeIndex; // 0x4
};

struct FBiomeMiniMap {
	UFloatMap* Map; // 0x0
	TArray<FBiomeMiniMapColor> HeightsColors; // 0x8
};

struct FAvailableMission {
	AMissionType* MissionClass; // 0x0
};

struct FActiveVertexAnim {
	UVertexAnimBase* VertAnim; // 0x0
	float Weight; // 0x8
	float Time; // 0xc
};

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FUploadToGpuCommand {
	UReflectionCaptureComponent* CaptureComponent; // 0x0
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

struct FLocalizedSubtitle {
	FString LanguageExt; // 0x0
	TArray<FSubtitleCue> Subtitles; // 0x10
	char bMature : 1; // 0x20
	char bManualWordWrap : 1; // 0x20
	char bSingleLine : 1; // 0x20
};

struct FTimeRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FServerOptions {
	FString MaxStructuresInRange; // 0x0
	FString DifficultyOffset; // 0x10
	FString GlobalVoiceChat; // 0x20
	FString ProximityChat; // 0x30
	FString NoTributeDownloads; // 0x40
	FString AllowThirdPersonPlayer; // 0x50
	FString AlwaysNotifyPlayerLeft; // 0x60
	FString DontAlwaysNotifyPlayerJoined; // 0x70
	FString ServerHardcore; // 0x80
	FString ServerPVE; // 0x90
	FString ServerCrosshair; // 0xa0
	FString ServerForceNoHUD; // 0xb0
	FString ShowMapPlayerLocation; // 0xc0
	FString ServerPassword; // 0xd0
	FString ServerAdminPassword; // 0xe0
	FString SpectatorPassword; // 0xf0
	FString DayCycleSpeedScale; // 0x100
	FString DayTimeSpeedScale; // 0x110
	FString NightTimeSpeedScale; // 0x120
	FString DinoDamageMultiplier; // 0x130
	FString PlayerDamageMultiplier; // 0x140
	FString StructureDamageMultiplier; // 0x150
	FString PlayerResistanceMultiplier; // 0x160
	FString DinoResistanceMultiplier; // 0x170
	FString StructureResistanceMultiplier; // 0x180
	FString XPMultiplier; // 0x190
	FString TamingSpeedMultiplier; // 0x1a0
	FString HarvestAmountMultiplier; // 0x1b0
	FString PlayerCharacterWaterDrainMultiplier; // 0x1c0
	FString PlayerCharacterFoodDrainMultiplier; // 0x1d0
	FString DinoCharacterFoodDrainMultiplier; // 0x1e0
	FString PlayerCharacterStaminaDrainMultiplier; // 0x1f0
	FString DinoCharacterStaminaDrainMultiplier; // 0x200
	FString PlayerCharacterHealthRecoveryMultiplier; // 0x210
	FString DinoCharacterHealthRecoveryMultiplier; // 0x220
	FString DinoCountMultiplier; // 0x230
	FString HarvestHealthMultiplier; // 0x240
	FString PvEStructureDecayPeriodMultiplier; // 0x250
	FString ResourcesRespawnPeriodMultiplier; // 0x260
	FString EnablePvPGamma; // 0x270
	FString DisableStructureDecayPvE; // 0x280
	FString AllowFlyerCarryPvE; // 0x290
};

struct FAINoiseEvent {
	AActor* Instigator; // 0x18
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x28
};

struct FEditorTileInitialState {
	FString LevelName; // 0x0
	bool bWasInitiallyLoaded; // 0x10
	bool bWasInitiallyVisible; // 0x11
};

struct FTribeRankGroup {
	FString RankGroupName; // 0x0
	char RankGroupRank; // 0x10
	char InventoryRank; // 0x11
	char StructureActivationRank; // 0x12
	char NewStructureActivationRank; // 0x13
	char NewStructureInventoryRank; // 0x14
	char PetOrderRank; // 0x15
	char PetRidingRank; // 0x16
	char InviteToGroupRank; // 0x17
	char MaxPromotionGroupRank; // 0x18
	char MaxDemotionGroupRank; // 0x19
	char MaxBanishmentGroupRank; // 0x1a
	char NumInvitesRemaining; // 0x1b
	char bPreventStructureDemolish : 1; // 0x1c
	char bPreventStructureAttachment : 1; // 0x1c
	char bPreventStructureBuildInRange : 1; // 0x1c
	char bPreventUnclaiming : 1; // 0x1c
	char bAllowInvites : 1; // 0x1c
	char bLimitInvites : 1; // 0x1c
	char bAllowDemotions : 1; // 0x1c
	char bAllowPromotions : 1; // 0x1c
	char bAllowBanishments : 1; // 0x1d
	char TeleportMembersRank; // 0x20
	char TeleportDinosRank; // 0x21
	char bDefaultRank : 1; // 0x24
};

struct FPrimalCharacterStatusValueDefinition {
	UTexture2D* StatusValueIcon; // 0x0
	FString StatusValueName; // 0x8
	bool bLevelUpSetToMaxValue; // 0x18
	bool bDisplayHideCurrentValue; // 0x19
	bool bDisplayAsPercent; // 0x1a
};

struct FActiveEventSupplyCrateWeight {
	TArray<UObject*> ReplacementCrateClasses; // 0x0
	TArray<float> Weights; // 0x10
	FName ActiveEvent; // 0x20
};

struct FDamageHarvestingEntry {
	float DamageMultiplier; // 0x0
	float HarvestQuantityMultiplier; // 0x4
	float DamageHarvestAdditionalEffectiveness; // 0x8
	float DamageDurabilityConsumptionMultiplier; // 0xc
	char bAllowUnderwaterHarvesting : 1; // 0x10
	UDamageType* DamageTypeParent; // 0x18
	AActor* HarvestDamageFXOverride; // 0x20
};

struct FRemoteCameraData {
	FString Name_6_B4ADECA1426EB9B7B12F9DB094A4B845; // 0x0
	FVector Position_9_17267DDC4E30DE0C5A63D2AABB1C1A90; // 0x10
};

struct FNPCSpawnEntry {
	FString AnEntryName; // 0x0
	TArray<APrimalDinoCharacter*> NPCsToSpawn; // 0x10
	TArray<FString> NPCsToSpawnStrings; // 0x20
	TArray<FClassRemappingWeight> NPCRandomSpawnClassWeights; // 0x30
	TArray<FVector> NPCsSpawnOffsets; // 0x40
	TArray<float> NPCsToSpawnPercentageChance; // 0x50
	TArray<float> NPCMinLevelOffset; // 0x60
	TArray<float> NPCMaxLevelOffset; // 0x70
	TArray<float> NPCMinLevelMultiplier; // 0x80
	TArray<float> NPCMaxLevelMultiplier; // 0x90
	char bAddLevelOffsetBeforeMultiplier : 1; // 0xa0
	TArray<char> NPCOverrideLevel; // 0xa8
	FVector ExtentCheck; // 0xb8
	FVector GroupSpawnOffset; // 0xc4
	float EntryWeight; // 0xd0
	float ManualSpawnPointSpreadRadius; // 0xd4
	float WaterOnlySpawnMinimumWaterHeight; // 0xd8
	float MaximumWaterHeight; // 0xdc
	UPrimalColorSet* ColorSets; // 0xe0
	TArray<FNPCDifficultyLevelRange> NPCDifficultyLevelRanges; // 0xe8
	float LevelDifficultyTestOverride; // 0xf8
	float SpawnMinDistanceFromStructuresMultiplier; // 0xfc
	float SpawnMinDistanceFromPlayersMultiplier; // 0x100
	float SpawnMinDistanceFromTamedDinosMultiplier; // 0x104
	float RandGroupSpawnOffsetZMin; // 0x108
	float RandGroupSpawnOffsetZMax; // 0x10c
};

struct FLeaderboardDisplayRow {
	UTexture2D* RowIcon; // 0x0
	TArray<FString> Columns; // 0x8
};

struct FARKDinoData {
	UObject* DinoClass; // 0x0
	TArray<char> DinoData; // 0x8
	FString DinoNameInMap; // 0x18
	FString DinoName; // 0x28
	bool bNetInfoFromClient; // 0x38
};

struct FBPNetExecParams {
	int32_t IntParam1; // 0x0
	int32_t IntParam2; // 0x4
	int32_t IntParam3; // 0x8
	float FloatParam1; // 0xc
	float FloatParam2; // 0x10
	float FloatParam3; // 0x14
	UObject* ObjParam1; // 0x18
	UObject* ObjParam2; // 0x20
	UObject* ObjParam3; // 0x28
	FString StringParam1; // 0x30
};

struct FNavigationLinkBase {
	float MaxFallDownLength; // 0x0
	ENavLinkDirection Direction; // 0x4
	float SnapRadius; // 0xc
	UNavArea* AreaClass; // 0x10
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
};

struct FGrappleAnchor {
	FVector AnchorWorldLocation; // 0x0
	USceneComponent* AnchoredComponent; // 0x10
	int32_t AnchoredItemIndex; // 0x18
	FString AnchoredBoneName; // 0x20
	FVector AnchorRelativeOffset; // 0x30
};

struct FLightmassLightSettings {
	float IndirectLightingScale; // 0x0
	float IndirectLightingSaturation; // 0x4
	float ShadowExponent; // 0x8
};

struct FAnimExtractContext {
	bool bExtractRootMotionTranslation; // 0x0
	bool bExtractRootMotionRotation; // 0x1
	float CurrentTime; // 0x4
	ERootMotionRootLock RootMotionRootLock; // 0x8
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundNodeWave* WaveParam; // 0x18
	USoundWave* SoundWaveParam; // 0x20
};

struct FFogOfWarInfoStruct {
	FString MapName; // 0x0
	TArray<char> CompressedVisibilityBuffer; // 0x10
	uint32_t UnCompressedVisibilityBufferSize; // 0x20
	TArray<bool> UnlockMask; // 0x28
};

struct FProxySettings {
	int32_t ScreenSize; // 0x0
	int32_t TextureWidth; // 0x4
	int32_t TextureHeight; // 0x8
	bool bRecalculateNormals; // 0xc
	float HardAngleThreshold; // 0x10
	int32_t MergeDistance; // 0x14
	bool bUseClippingPlane; // 0x18
	float ClippingLevel; // 0x1c
	int32_t AxisIndex; // 0x20
	bool bPlaneNegativeHalfspace; // 0x24
	bool bUseMassiveLOD; // 0x25
	bool bUseAggregateLOD; // 0x26
	bool bFlatterMaterialBeforeProcess; // 0x27
};

struct FTriIndices {
	int32_t v0; // 0x0
	int32_t v1; // 0x4
	int32_t v2; // 0x8
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FExpandedUniqueOctreeNode {
	FBox CurrentBox; // 0x0
	int32_t Children[0x8]; // 0x1c
	char bIsLeaf; // 0x3c
	int32_t InstanceStart; // 0x40
	int32_t InstanceEnd; // 0x44
	int32_t OcclusionIndex; // 0x48
};

struct FMissionWorldIndicator {
	FName DescriptionTagString; // 0x0
	UTexture2D* Icon; // 0x8
	UPrimalItem* ItemType; // 0x10
	FVector WorldPosition; // 0x18
	AActor* TargetActor; // 0x28
	int32_t Priority; // 0x30
	UPrimalStaticData* CustomData; // 0x38
	char bUseTargetActorName : 1; // 0x40
	char bUseTargetActorIcon : 1; // 0x40
	char bUseItemName : 1; // 0x40
	char bUseItemIcon : 1; // 0x40
	char bOnlyVisibleOffScreen : 1; // 0x40
	char bOnlyVisibleOnScreen : 1; // 0x40
	char bAlwaysVisible : 1; // 0x40
	char bCompanionIndicator : 1; // 0x40
	char bShowDistance : 1; // 0x41
	FLinearColor IndicatorColor; // 0x44
	FLinearColor IconColor; // 0x54
	char bUsePulseAnimation : 1; // 0x64
	char bShowProgress : 1; // 0x64
	float ProgressValue; // 0x68
	FString ProgressLabelText; // 0x70
	FLinearColor ProgressBarColor; // 0x80
	FLinearColor ProgressLabelColor; // 0x90
	char bShowProgressLabelWhenOffScreen : 1; // 0xa0
};

struct FClutterData {
	float Density; // 0x0
	float MinSize; // 0x4
	float MaxSize; // 0x8
	int32_t GenerationSeed; // 0xc
	bool bAllowShadows; // 0x10
	UStaticMesh* StaticMesh; // 0x18
	UTexture2D* VisibilityTexture; // 0x20
	int32_t TextureChannel; // 0x28
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FDamageEvent {
	float Impulse; // 0x8
	float OriginalDamage; // 0xc
	int32_t InstanceBodyIndex; // 0x10
	UDamageType* DamageTypeClass; // 0x18
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FTickFunction {
	ETickingGroup TickGroup; // 0x8
	char bTickEvenWhenPaused : 1; // 0xc
	char bCanEverTick : 1; // 0xc
	char bStartWithTickEnabled : 1; // 0xc
	char bAllowTickOnDedicatedServer : 1; // 0xc
};

struct FPropertyModifierDefinition {
	FName PropertyName; // 0x0
	bool bNeedsManualReplication; // 0x8
	EWorldBuffPropertyLocation BuffPropertyLocation; // 0x9
	float ModifierValue; // 0xc
};

struct FMovieSceneEditorData {
	TArray<FString> CollapsedSequencerNodes; // 0x0
};

struct FDinoFoodEffectivenessMultipliers {
	float FoodEffectivenessMultiplier; // 0x0
	float HealthEffectivenessMultiplier; // 0x4
	float TorpidityEffectivenessMultiplier; // 0x8
	float AffinityEffectivenessMultiplier; // 0xc
	float AffinityOverride; // 0x10
	float StaminaEffectivenessMultiplier; // 0x14
	int32_t FoodItemCategory; // 0x18
	UPrimalItem* FoodItemParent; // 0x20
	float UntamedFoodConsumptionPriority; // 0x28
};

struct FItemSpawnActorClassOverride {
	UPrimalItem* ItemClass; // 0x0
	AActor* ActorClassOverride; // 0x8
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FEmoteGroup {
	FName GroupName; // 0x0
	FLinearColor GroupColor; // 0x8
};

struct FFormatTextArgument {
	FText ArgumentName; // 0x0
	FText TextValue; // 0x28
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
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
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
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

struct FVectorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	FVector Constant; // 0x3c
};

struct FMassTeleportData {
	FTeleportDestination MyTeleportDestination; // 0x0
	double MyTeleportStartTime; // 0x28
	float MyTeleportDuration; // 0x30
	float MyTeleportRadius; // 0x34
	AActor* InitiatedByActor; // 0x38
	FTransform InitiatedAtTransform; // 0x40
	APrimalBuff* BuffToApply; // 0x70
	TArray<AActor*> MyTeleportingActors; // 0x78
	char bTeleportSnapsToGround : 1; // 0x88
	TArray<FTransform> MyTeleportingActorTransformOffsets; // 0x90
	TArray<float> MyTeleportingDelays; // 0xa0
	TArray<int32_t> MyTeleportationAttemptMap; // 0xb0
	char bMaintainRotation : 1; // 0xc0
};

struct FHarvestResourceEntry {
	int32_t OverrideQuantityMax; // 0x0
	int32_t OverrideQuantityMin; // 0x4
	float OverrideQuantityRandomPower; // 0x8
	float EntryWeight; // 0xc
	float EffectivenessQuantityMultiplier; // 0x10
	float EffectivenessQualityMultiplier; // 0x14
	UPrimalItem* ResourceItem; // 0x18
	float QualityMin; // 0x20
	float QualityMax; // 0x24
	float XPGainMax; // 0x28
	float XPGainMin; // 0x2c
	TArray<UDamageType*> DamageTypeEntryValuesOverrides; // 0x30
	TArray<float> DamageTypeEntryWeightOverrides; // 0x40
	TArray<float> DamageTypeEntryMinQuantityOverrides; // 0x50
	TArray<float> DamageTypeEntryMaxQuantityOverrides; // 0x60
	char bScaleWithDinoBabyAge : 1; // 0x70
};

struct FPrimalTextStyle {
	FName StyleName; // 0x0
	FTextBlockStyle TextStyle; // 0x8
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x448
	FSplitterStyle ColumnSplitterStyle; // 0x888
	FSlateBrush BackgroundBrush; // 0x980
	FSlateColor ForegroundColor; // 0x9f8
};

struct FSTR_ChargeBeamInfo {
	UParticleSystemComponent* beamParticles_2_86E889F045468D781D6B408096FFC857; // 0x0
	APrimalCharacter* targetCharacter_8_C35E68754619450BAD40379114C9934A; // 0x8
	UParticleSystemComponent* endParticles_24_5A5579A9448F44BD1822E7B3CC310E8B; // 0x10
};

struct FSaddlePassengerSeatDefinition {
	FName AttachBoneName; // 0x0
	FName AttachBoneNameEnemyDino; // 0x8
	FName AttachBoneNameDino; // 0x10
	FString BoardActionText; // 0x18
	FVector UnboardLocationOffset; // 0x28
	UPrimalItem* BoardingRequiresEngram; // 0x38
	FVector FPVCameraLocationOffset; // 0x40
	FVector AttachRelativeLocation; // 0x4c
	FRotator AttachRelativeRotation; // 0x58
	FRotator DinoOverrideAttachRelativeRotation; // 0x64
	UAnimSequence* CharacterAdditiveAnim; // 0x70
	char bHideCharacterLowerBody : 1; // 0x78
	char bUseCharacterPitch : 1; // 0x78
	char bLimitCameraYaw : 1; // 0x78
	char bUseDinoRotationToLimitCameraYaw : 1; // 0x78
	char bWeaponIgnoreDino : 1; // 0x78
	char bHideDinoForLocalPassenger : 1; // 0x78
	char CharacterAdditiveAnimIsNonAdditive : 1; // 0x78
	char bAllowDinoPassenger : 1; // 0x78
	char bPreventManualPassenger : 1; // 0x79
	char bDinoOverrideAttachRelativeRotation : 1; // 0x79
	char bUseBoneNameDinoOverride : 1; // 0x79
	char bSavePassenger : 1; // 0x79
	char bPreventDamageToSeatedDino : 1; // 0x79
	float CameraYawRange; // 0x7c
	float AimOffsetYawFactor; // 0x80
	float AimOffsetPitchFactor; // 0x84
	float AimOffsetYawBias; // 0x88
	float AimOffsetPitchBias; // 0x8c
	float ExtraHypoThermalInsulation; // 0x90
	float ExtraHyperThermalInsulation; // 0x94
	char bIsSaddleTurret : 1; // 0x98
	char bLimitTurretPitch : 1; // 0x98
	float TurretPitchMin; // 0x9c
	float TurretPitchMax; // 0xa0
	char bAllowOrbitCam : 1; // 0xa4
	char bAllowTPV : 1; // 0xa4
	char bPreventPassengerWeapons : 1; // 0xa4
	char bAllowAccessDinoInventory : 1; // 0xa4
	char bUnboardUseLastRotation : 1; // 0xa4
};

struct FReverbSettings {
	char bApplyReverb : 1; // 0x0
	ReverbPreset ReverbType; // 0x4
	UReverbEffect* ReverbEffect; // 0x8
	float Volume; // 0x10
	float FadeTime; // 0x14
};

struct FOverrideMultiuseButtonStyle {
	FButtonStyle Style; // 0x0
	FCustomButtonWidgetStyle ExtendedStyle; // 0x248
};

struct FGlassSettings {
	EGlassTransparencyType TransparencyType; // 0x0
	float Opacity; // 0x4
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

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
};

struct FReplicatedGrappleTetherData {
	FString Rep_TetherTag; // 0x0
	FGrappleAnchor Rep_TetherAnchor_Start; // 0x10
	FGrappleAnchor Rep_TetherAnchor_End; // 0x50
	FGrappleAnchor Rep_TetherAnchor_Visual_Start; // 0x90
	FGrappleAnchor Rep_TetherAnchor_Visual_End; // 0xd0
	APrimalBuff_Grappled* Rep_MasterGrappledBuff; // 0x110
	float Rep_TetherLifetime; // 0x118
	double Rep_TetherCreationTime; // 0x120
	char Rep_bUseVisualAnchor_Start : 1; // 0x128
	char Rep_bUseVisualAnchor_End : 1; // 0x128
	float Rep_TetherLength; // 0x12c
	char Rep_bAnyoneCanControl : 1; // 0x130
	char Rep_bTetherBroken : 1; // 0x130
};

struct FLeaderboardEntry {
	FName MissionTag; // 0x0
	TArray<FLeaderboardRow> Rows; // 0x8
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0xc
};

struct FConvexElement2D {
	TArray<FVector2D> VertexData; // 0x0
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x250
	FSlateBrush MenuBorderBrush; // 0x2c8
	FMargin MenuBorderPadding; // 0x340
};

struct FItemSetup {
	UPrimalItem* ItemType; // 0x0
	FString ItemBlueprintPath; // 0x8
	float MinQuality; // 0x18
	float MaxQuality; // 0x1c
	int32_t Quantity; // 0x20
	char bAutoEquip : 1; // 0x24
	char bDontStack : 1; // 0x24
	char bForceBlueprint : 1; // 0x24
};

struct FAnimNode_SequencePlayer : FAnimNode_Base {
	UAnimSequenceBase* Sequence; // 0x10
	float InternalTimeAccumulator; // 0x18
	bool bLoopAnimation; // 0x1c
	float PlayRate; // 0x20
	int32_t groupIndex; // 0x24
	EAnimGroupRole GroupRole; // 0x28
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
};

struct FSlideData {
	TWeakObjectPtr<USplineComponent> SplineComponent; // 0x0
	UParticleSystemComponent* Emitter; // 0x8
	float CurTime; // 0x10
	float Duration; // 0x14
	TArray<FVector> Points; // 0x18
	TArray<FVector> Tangents; // 0x28
	FVector Location; // 0x38
	FVector Tangent; // 0x44
};

struct FStatusValueModifierDescription {
	UTexture2D* ModifierIcon; // 0x0
	FString ModifierName; // 0x8
	FString ModifierDescription; // 0x18
	FColor ModifierColor; // 0x28
	bool bDisplayHUDMessage; // 0x2c
	FString HUDMessage; // 0x30
	FColor HUDMessageColor; // 0x40
	bool bPreventDrawingBuffDescription; // 0x44
	int32_t BuffType; // 0x48
};

struct FCustomItemByteArrays {
	TArray<FCustomItemByteArray> ByteArrays; // 0x0
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

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FGacha_ResourceStruct {
	UPrimalItemResourceGeneric_C* Class_13_4BFB7F4F42857EB99DD363BD6E7DCBCE; // 0x0
	float BaseQuantity_9_7AE6866C4BF7A38A1906A985E55129CF; // 0x8
};

struct FChibiMeshAttachments {
	FName SocketName_2_700A9C214EAC35955848639A37223A02; // 0x0
	UStaticMesh* StaticMesh_5_8BD1CE2042771926A14BC8A93FD33B3D; // 0x8
	FTransform TransformOffset_17_4B838DBC4A66A9AC09221C89FD357CFA; // 0x10
};

struct FHordeCrateEvent {
	double EventStartTime; // 0x0
	TWeakObjectPtr<AActor> HordeSpawnNetwork; // 0x8
	TWeakObjectPtr<AActor> HordeModeCrate; // 0x10
	bool bHasBeenInitiated; // 0x18
	char EventType; // 0x19
};

struct FFloorSlopeData {
	FVector Location; // 0x0
	FVector SlopeDir; // 0xc
};

struct FMultiUseEntry {
	UActorComponent* ForComponent; // 0x0
	FString UseString; // 0x8
	int32_t UseIndex; // 0x18
	int32_t Priority; // 0x1c
	char bHideFromUI : 1; // 0x20
	char bDisableUse : 1; // 0x20
	char bHideActivationKey : 1; // 0x20
	char bRepeatMultiUse : 1; // 0x20
	char bDisplayOnInventoryUI : 1; // 0x20
	char bDisplayOnInventoryUISecondary : 1; // 0x20
	char bHarvestable : 1; // 0x20
	char bIsSecondaryUse : 1; // 0x20
	char bPersistWheelOnActivation : 1; // 0x21
	char bOverrideUseTextColor : 1; // 0x21
	char bDisplayOnInventoryUITertiary : 1; // 0x21
	char bClientSideOnly : 1; // 0x21
	char bPersistWheelRequiresDirectActivation : 1; // 0x21
	char bDrawTooltip : 1; // 0x21
	int32_t WheelCategory; // 0x24
	FColor DisableUseColor; // 0x28
	FColor UseTextColor; // 0x2c
	float EntryActivationTimer; // 0x30
	float DefaultEntryActivationTimer; // 0x34
	USoundBase* ActivationSound; // 0x38
	int32_t UseInventoryButtonStyleOverrideIndex; // 0x40
	int32_t AdditionalButtonsIndex; // 0x44
};

struct FPreviewAttachedObjectPair {
	UObject* AttachedObject; // 0x0
	UObject* Object; // 0x20
	FName AttachedTo; // 0x28
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FArkTributeEntity {
	int32_t UploadTime; // 0x0
};

struct FMovieSceneBoundObject {
	FGuid PossessableGuid; // 0x0
	TArray<UObject*> Objects; // 0x10
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FSoundWaveAnimTexturePairs {
	FStringAssetReference LocalizedSoundWave; // 0x0
	FStringAssetReference MatchingAnimTexture; // 0x10
};

struct FAnimNode_ApplyAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink additive; // 0x28
	float Alpha; // 0x40
	FInputScaleBias AlphaScaleBias; // 0x44
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	FTransform RootMotionTransform; // 0x10
};

struct FInvalidReferenceRedirector {
	FString InvalidReferenceKey; // 0x0
	UObject* RedirectedClass; // 0x10
	FStringAssetReference RedirectedClassSoftReference; // 0x18
	TArray<FString> LimitedToMaps; // 0x28
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

struct FGameNameRedirect {
	FString OldGameName; // 0x0
	FString NewGameName; // 0x10
};

struct FSublevelOverrideDefinition {
	FName SublevelPackageToReplace; // 0x0
	FName SublevelPackageToActivate; // 0x8
};

struct FFlockPersistentData {
	float AvoidanceAreaDecayRate; // 0x0
	float AvoidanceTraceInterval; // 0x4
	float AvoidanceTraceInferredBoxSize; // 0x8
	float AvoidanceTraceInferredSphereRadius; // 0xc
	float AvoidanceTraceForwardDistance; // 0x10
	float AvoidanceTraceDownDistance; // 0x14
	double LastAvoidanceTraceTime; // 0x18
	int32_t MaxNumAvoidanceAreas; // 0x20
	TArray<FAvoidanceArea> DynamicAvoidanceAreas; // 0x28
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FOverrideCaptureData {
	FStringAssetReference SnapshotAsset; // 0x0
	float Brightness; // 0x10
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FSpawnPointInfo {
	int32_t SpawnPointID; // 0x0
	FString BedName; // 0x8
	ABiomeZoneVolume* SpawnPointVolume; // 0x18
	AActor* SpawnPointActorClass; // 0x20
	FVector AtLocation; // 0x28
	double NextAllowedUseTime; // 0x38
	bool bAllowedUse; // 0x40
};

struct FClassAddition {
	UObject* ForClass; // 0x0
	TArray<UObject*> ClassAdditions; // 0x8
};

struct FLocalizedSoundWaveAnimTexturePairArrays {
	FString TwoLetterISOLanguageName; // 0x0
	TArray<FSoundWaveAnimTexturePairs> SoundWaveAnimTexturePairs; // 0x10
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName VectorPropertyName; // 0x18
	UStructProperty* VectorProperty; // 0x20
};

struct FAnimSetBakeAndPruneStatus {
	FString AnimSetName; // 0x0
	char bReferencedButUnused : 1; // 0x10
	char bSkipBakeAndPrune : 1; // 0x10
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	int32_t CurrentState; // 0x20
	float ElapsedTime; // 0x24
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EEnvQueryParam ParamType; // 0x8
	float Value; // 0xc
};

struct FABRIKChainLink {
	TArray<int32_t> ChildZeroLengthTransformIndices; // 0x18
};

struct FPrimalCharacterStatusStateThresholds {
	TArray<float> HighThresholdStatusStateValues; // 0x0
	TArray<EPrimalCharacterStatusState> HighThresholdStatusStateType; // 0x10
	TArray<float> LowThresholdStatusStateValues; // 0x20
	TArray<EPrimalCharacterStatusState> LowThresholdStatusStateType; // 0x30
	bool StatusStateThresholdValuesAbsolute; // 0x40
};

struct FAliveNameAndLocation {
	FString PlayerName; // 0x0
	FString TribeName; // 0x10
	uint32_t TargetingTeam; // 0x20
	uint64_t PlayerId; // 0x28
	FVector Location; // 0x30
};

struct FCompositeSection {
	FName SectionName; // 0x0
	float StarTime; // 0x8
	float StartTime; // 0xc
	FName NextSectionName; // 0x10
};

struct FTransponderInfo {
	FString TransName; // 0x0
	FVector TransLocation; // 0x10
	float Frequency; // 0x1c
	FColor DrawingColor; // 0x20
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe0
};

struct FDinoOrderGroup {
	FString DinoOrderGroupName; // 0x0
	TArray<APrimalDinoCharacter*> DinoOrderClasses; // 0x10
	TArray<FDinoOrderID> DinoOrderIDs; // 0x20
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FDamageNegatingItem {
	UPrimalItem* ItemSubclass; // 0x0
	float NegationFactor; // 0x8
};

struct FAnimationTransitionBetweenStates : FAnimationStateBase {
	int32_t PreviousState; // 0x8
	int32_t NextState; // 0xc
	float CrossfadeDuration; // 0x10
	int32_t StartNotify; // 0x14
	int32_t EndNotify; // 0x18
	int32_t InterruptNotify; // 0x1c
	ETransitionBlendMode CrossfadeMode; // 0x20
	ETransitionLogicType LogicType; // 0x21
};

struct FARKTributeDino : FArkTributeEntity {
	FString DinoClassName; // 0x8
	UObject* DinoClass; // 0x18
	TArray<char> DinoData; // 0x20
	FString DinoName; // 0x30
	FString DinoNameInMap; // 0x40
	FString DinoStats[0xc]; // 0x50
	float DinoExperiencePoints; // 0x110
	float Version; // 0x114
	uint32_t DinoID1; // 0x118
	uint32_t DinoID2; // 0x11c
};

struct FPrimalPlayerCharacterConfigStructReplicated {
	char bIsFemale : 1; // 0x0
	FLinearColor BodyColors[0x4]; // 0x4
	FString PlayerCharacterName; // 0x48
	float RawBoneModifiers[0x16]; // 0x58
	int32_t PlayerSpawnRegionIndex; // 0xb0
};

struct FCustomInput {
	FString InputName; // 0x0
	FExpressionInput Input; // 0x10
};

struct FResourceTemporaryAmountModifierSet {
	FName SetTag; // 0x0
	TArray<FResourceTemporaryAmountModifiers> Modifiers; // 0x8
};

struct FMissionPhaseData {
	char bPhaseCompleted : 1; // 0x0
};

struct FGroundBoneModifier {
	FName BoneName; // 0x0
	float TraceDistance; // 0x8
	float ZOffset; // 0xc
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x10
	FColor Color; // 0x18
	FVector DefaultQueryExtent; // 0x1c
};

struct FCableParticle {
	bool bFree; // 0x0
	FVector Position; // 0x4
	FVector OldPosition; // 0x10
};

struct FWeightmapLayerAllocationInfo {
	FName LayerName; // 0x0
	ULandscapeLayerInfoObject* LayerInfo; // 0x8
	char WeightmapTextureIndex; // 0x10
	char WeightmapTextureChannel; // 0x11
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FItemNetInfo {
	UPrimalItem* ItemArchetype; // 0x0
	FItemNetID ItemId; // 0x8
	uint32_t ItemQuantity; // 0x10
	int32_t CustomItemID; // 0x14
	int32_t SlotIndex; // 0x18
	double CreationTime; // 0x20
	FString CustomItemName; // 0x28
	FString CustomItemDescription; // 0x38
	double UploadEarliestValidTime; // 0x48
	TArray<uint64_t> SteamUserItemID; // 0x50
	char bIsBlueprint : 1; // 0x60
	char bIsEngram : 1; // 0x60
	char bIsCustomRecipe : 1; // 0x60
	char bIsFoodRecipe : 1; // 0x60
	char bIsRepairing : 1; // 0x60
	char bAllowRemovalFromInventory : 1; // 0x60
	char bHideFromInventoryDisplay : 1; // 0x60
	char bAllowRemovalFromSteamInventory : 1; // 0x60
	char bFromSteamInventory : 1; // 0x61
	char bIsFromAllClustersInventory : 1; // 0x61
	char bForcePreventGrinding : 1; // 0x61
	char bIsEquipped : 1; // 0x61
	char bIsSlot : 1; // 0x61
	char bIsInitialItem : 1; // 0x61
	uint16_t CraftQueue; // 0x64
	double NextCraftCompletionTime; // 0x68
	float CraftingSkill; // 0x70
	float CraftedSkillBonus; // 0x74
	FString CrafterCharacterName; // 0x78
	FString CrafterTribeName; // 0x88
	uint32_t WeaponClipAmmo; // 0x98
	float ItemDurability; // 0x9c
	float ItemRating; // 0xa0
	uint32_t ExpirationTimeUTC; // 0xa4
	char ItemQualityIndex; // 0xa8
	UPrimalItem* ItemCustomClass; // 0xb0
	uint16_t ItemStatValues[0x8]; // 0xb8
	int16_t ItemColorID[0x6]; // 0xc8
	UPrimalItem* ItemSkinTemplate; // 0xd8
	TArray<FCustomItemData> CustomItemDatas; // 0xe0
	TArray<FColor> CustomItemColors; // 0xf0
	TArray<FCraftingResourceRequirement> CustomResourceRequirements; // 0x100
	double NextSpoilingTime; // 0x110
	double LastSpoilingTime; // 0x118
	uint64_t OwnerPlayerDataID; // 0x120
	TWeakObjectPtr<AShooterCharacter> LastOwnerPlayer; // 0x128
	double LastAutoDurabilityDecreaseTime; // 0x130
	float ItemStatClampsMultiplier; // 0x138
	FVector OriginalItemDropLocation; // 0x13c
	int16_t PreSkinItemColorID[0x6]; // 0x148
	char EggNumberOfLevelUpPointsApplied[0xc]; // 0x154
	float EggTamedIneffectivenessModifier; // 0x160
	char EggColorSetIndices[0x6]; // 0x164
	int32_t EggGenderOverride; // 0x16c
	char ItemVersion; // 0x170
	double ClusterSpoilingTimeUTC; // 0x178
	TArray<FDinoAncestorsEntry> EggDinoAncestors; // 0x180
	TArray<FDinoAncestorsEntry> EggDinoAncestorsMale; // 0x190
	int32_t EggRandomMutationsFemale; // 0x1a0
	int32_t EggRandomMutationsMale; // 0x1a4
	char ItemProfileVersion; // 0x1a8
	bool bNetInfoFromClient; // 0x1a9
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FMissionEligibilityData {
	AMissionType* MissionType; // 0x0
	FName IneligibleReasonType; // 0x8
	double LastCompletedUtcTime; // 0x10
	char bIsEligible : 1; // 0x18
	char bCompleted : 1; // 0x18
	char bOnGlobalCooldown : 1; // 0x18
	char bOnPerPlayerCooldown : 1; // 0x18
	float MissionMaxDurationSeconds; // 0x1c
	double MissionStartNetworkTime; // 0x20
};

struct FNamedTeamDefinition {
	FName TeamName; // 0x0
	char bTargetingTeamExclusionList : 1; // 0x8
	char bTargetingTeamInclusionList : 1; // 0x8
	char bAllowTargetsOnOwnTeam : 1; // 0x8
	char bIsCarnivore : 1; // 0x8
	char bTargetPlayersAndTamedOnly : 1; // 0x8
	char bForceTargetPlayersAndTamed : 1; // 0x8
	char bIgnoredByAllTeams : 1; // 0x8
	TArray<FName> TeamNameList; // 0x10
	TArray<FName> TargetingMultiplierTeamNames; // 0x20
	TArray<FName> DontGiveDamageTeamList; // 0x30
	TArray<FName> DontReceiveDamageTeamList; // 0x40
	TArray<FName> MaximumTargetableDistanceTeams; // 0x50
	TArray<float> MaximumTargetableDistances; // 0x60
	TArray<float> TargetingMultiplierTeamWeights; // 0x70
};

struct FPrimalPlayerCharacterConfigStruct {
	char bIsFemale : 1; // 0x0
	FLinearColor BodyColors[0x4]; // 0x4
	FLinearColor OverrideHeadHairColor; // 0x44
	FLinearColor OverrideFacialHairColor; // 0x54
	char FacialHairIndex; // 0x64
	char HeadHairIndex; // 0x65
	FString PlayerCharacterName; // 0x68
	float RawBoneModifiers[0x16]; // 0x78
	int32_t PlayerSpawnRegionIndex; // 0xd0
};

struct FEdGraphPinType {
	FString PinCategory; // 0x0
	FString PinSubCategory; // 0x10
	TWeakObjectPtr<UObject> PinSubCategoryObject; // 0x20
	FSimpleMemberReference PinSubCategoryMemberReference; // 0x28
	bool bIsArray; // 0x48
	bool bIsReference; // 0x49
	bool bIsConst; // 0x4a
	bool bIsWeakPointer; // 0x4b
};

struct FConfigNPCSpawnEntriesContainer {
	FString NPCSpawnEntriesContainerClassString; // 0x0
	TArray<FNPCSpawnEntry> NPCSpawnEntries; // 0x10
	TArray<FNPCSpawnLimit> NPCSpawnLimits; // 0x20
};

struct FExpressionInput {
	UMaterialExpression* Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0x10
	int32_t Mask; // 0x20
	int32_t MaskR; // 0x24
	int32_t MaskG; // 0x28
	int32_t MaskB; // 0x2c
	int32_t MaskA; // 0x30
	int32_t GCC64_Padding; // 0x34
};

struct FVectorParameterValue {
	FName ParameterName; // 0x0
	FLinearColor ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0x18
};

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	UDistributionFloat* Distribution; // 0x30
};

struct FBoneModifierRangeArray {
	char bAffectsLegLength : 1; // 0x0
	char bUseExtraMax : 1; // 0x0
	float MinLegLengthMultiplier; // 0x4
	float MaxLegLengthMultiplier; // 0x8
	TArray<FBoneModifierRange> BoneArray; // 0x10
};

struct FSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalBarImage; // 0x8
	FSlateBrush DisabledBarImage; // 0x80
	FSlateBrush NormalThumbImage; // 0xf8
	FSlateBrush DisabledThumbImage; // 0x170
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FAnimNode_TwoBoneIK : FAnimNode_SkeletalControlBase {
	FBoneReference IKBone; // 0x38
	FVector EffectorLocation; // 0x44
	FVector JointTargetLocation; // 0x50
	FVector2D StretchLimits; // 0x5c
	FName EffectorSpaceBoneName; // 0x64
	char bTakeRotationFromEffectorSpace : 1; // 0x6c
	char bMaintainEffectorRelRot : 1; // 0x6c
	char bAllowStretching : 1; // 0x6c
	EBoneControlSpace EffectorLocationSpace; // 0x70
	EBoneControlSpace JointTargetLocationSpace; // 0x71
	FName JointTargetSpaceBoneName; // 0x74
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float Weight; // 0xc
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
};

struct FLeaderboardsContainer {
	TArray<FLeaderboardEntry> Leaderboards; // 0x0
};

struct FMaxStatScaler {
	EPrimalCharacterStatusValue LevelUpValueType; // 0x0
	float TargetValue; // 0x4
	bool TargetValueIsPercent; // 0x8
};

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FFoliageReskinDefinition {
	FString ForFoliage; // 0x0
	TArray<UMaterialInterface*> NewFoliageMaterials; // 0x10
	TArray<UMaterialInterface*> OverrideDestructionMaterials; // 0x20
};

struct FVineTargetData {
	APrimalCharacter* Target_2_649596D34CBBCA545167FB9FBC431F3B; // 0x0
	FVector InitialLocationOffset_5_000E04F54D5A2E1E438C9A84AAC0DDBC; // 0x8
	float GrabbedAtVineLength_8_4D11BD904700E951AFC78A8F886594BB; // 0x14
};

struct FVehicleEngineDatum {
	float FadeInRPMStart; // 0x0
	float FadeInRPMEnd; // 0x4
	float FadeOutRPMStart; // 0x8
	float FadeOutRPMEnd; // 0xc
	float MaxPitchMultiplier; // 0x10
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FShapeshifter_Large_PounceData {
	APrimalCharacter* Target_3_4527E6E442BC64AE6CF2B9B2A0BFC3F7; // 0x0
};

struct FChibiVectorMaterialProperties {
	FName PropertyName_2_D2A9E5AD4E92DF48F7F585AEE9DC76F3; // 0x0
	FLinearColor PropertyValue_7_97A385A6400FFCC5874966BD07119467; // 0x8
};

struct FMeshBuildSettings {
	bool bUseMikkTSpace; // 0x0
	bool bRecomputeNormals; // 0x1
	bool bRecomputeTangents; // 0x2
	bool bRemoveDegenerates; // 0x3
	bool bUseFullPrecisionUVs; // 0x4
	bool bGenerateLightmapUVs; // 0x5
	int32_t MinLightmapResolution; // 0x8
	int32_t SrcLightmapIndex; // 0xc
	int32_t DstLightmapIndex; // 0x10
	float BuildScale; // 0x14
	FVector BuildScale3D; // 0x18
	float DistanceFieldResolutionScale; // 0x24
	bool bGenerateDistanceFieldAsIfTwoSided; // 0x28
	bool bReallyGenerateDistanceFieldAsIfTwoSided; // 0x29
	UStaticMesh* DistanceFieldReplacementMesh; // 0x30
};

struct FSkeletalMeshOptimizationSettings {
	SkeletalMeshOptimizationType ReductionMethod; // 0x0
	float NumOfTrianglesPercentage; // 0x4
	float MaxDeviationPercentage; // 0x8
	float WeldingThreshold; // 0xc
	bool bRecalcNormals; // 0x10
	float NormalsThreshold; // 0x14
	SkeletalMeshOptimizationImportance SilhouetteImportance; // 0x18
	SkeletalMeshOptimizationImportance TextureImportance; // 0x19
	SkeletalMeshOptimizationImportance ShadingImportance; // 0x1a
	SkeletalMeshOptimizationImportance SkinningImportance; // 0x1b
	float BoneReductionRatio; // 0x1c
	int32_t MaxBonesPerVertex; // 0x20
	TArray<FBoneReference> BonesToRemove; // 0x28
	int32_t BaseLODModel; // 0x38
	int32_t LODChainLastIndex; // 0x3c
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FPrimalChatFontData {
	FName FontName; // 0x0
	int32_t FontSize; // 0x8
	FSlateColor FontColor; // 0x10
};

struct FTribeWar {
	int32_t EnemyTribeID; // 0x0
	int32_t StartDayNumber; // 0x4
	int32_t EndDayNumber; // 0x8
	float StartDayTime; // 0xc
	float EndDayTime; // 0x10
	bool bIsApproved; // 0x14
	int32_t InitiatingTribeID; // 0x18
	FString EnemyTribeName; // 0x20
};

struct FBiomeMiniMapColor {
	float Height; // 0x0
	FLinearColor Color; // 0x4
};

struct FRichCurve : FIndexedCurve {
	TArray<FRichCurveKey> Keys; // 0x58
};

struct FSubsurfaceProfileStruct {
	float ScatterRadius; // 0x0
	FLinearColor SubsurfaceColor; // 0x4
	FLinearColor FalloffColor; // 0x14
};

struct FBoneTransform {
	int32_t BoneIndex; // 0x0
	FTransform Transform; // 0x10
};

struct FCustomContextSubmenu {
	FName SubmenuName; // 0x0
	TArray<FName> SubmenuOptions; // 0x8
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x18
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FTribeAlliance {
	FString AllianceName; // 0x0
	uint32_t AllianceID; // 0x10
	TArray<FString> MembersTribeName; // 0x18
	TArray<uint32_t> MembersTribeID; // 0x28
	TArray<uint32_t> AdminsTribeID; // 0x38
};

struct FGridIndex {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FRacePlayerData {
	AShooterPlayerController* Controller; // 0x0
	AShooterCharacter* Character; // 0x8
	int32_t TargetCheckpoint; // 0x10
	TArray<bool> CheckpointsHit; // 0x18
	TArray<float> CheckpointTimes; // 0x28
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse Response; // 0x8
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FKeyBindingItem {
	char bIsAxisMapping : 1; // 0x0
	FName WidgetName; // 0x4
	FString ActionName; // 0x10
	float Scale; // 0x20
};

struct FOverrideClutterLayer {
	int32_t LayerID; // 0x0
	TArray<FClutterData> ClutterLayers; // 0x8
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x80
};

struct FScalarParameterValue {
	FName ParameterName; // 0x0
	float ParameterValue; // 0x8
	FGuid ExpressionGUID; // 0xc
};

struct FCrateTemporaryQualityModifierSet {
	FName SetTag; // 0x0
	TArray<FCrateTemporaryQualityModifiers> Modifiers; // 0x8
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FColorDefinition {
	FName ColorName; // 0x0
	FLinearColor ColorValue; // 0x8
	bool bHasOverridePriority; // 0x18
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FCanoePassengerClientInputAxes {
	float Forward_15_2215D3E3486D16DB2348D88BB08FB8AC; // 0x0
	float Right_17_579CAB2048FDF2955DF413BAA6468BC2; // 0x4
	double NetworkTimestamp_20_66A19F3F4671199B6AE4449ABE7E0869; // 0x8
};

struct FTTEventTrack : FTTTrackBase {
	UCurveFloat* CurveKeys; // 0x10
};

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x38
	float LODDistance; // 0x58
	float ScreenSize; // 0x5c
};

struct FAlivePlayerDataInfo {
	FString PlayerName; // 0x0
	FString PlayerSteamName; // 0x10
	uint64_t PlayerId; // 0x20
	FString TribeName; // 0x28
	uint64_t TargetingTeamID; // 0x38
};

struct FStruct_ArrayOfMissionModules {
	TArray<UMissionModule_Base_C*> ModulesToRun_76_857EED8E47E02F2718A62B9BD21570FB; // 0x0
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
};

struct FAnimNode_GroundBones : FAnimNode_SkeletalControlBase {
	char bDebug : 1; // 0x38
};

struct FMissionMetaData {
	FName MissionTag; // 0x0
	AMissionType* MissionMetaDataClass; // 0x8
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FStatValuePair {
	EPrimalCharacterStatusValue Stat; // 0x0
	int32_t Value; // 0x4
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FPrimalItemQuality {
	FLinearColor QualityColor; // 0x0
	FString QualityName; // 0x10
	float QualityRandomMultiplierThreshold; // 0x20
	float CraftingXPMultiplier; // 0x24
	float RepairingXPMultiplier; // 0x28
	float CraftingResourceRequirementsMultiplier; // 0x2c
};

struct FEngineServiceAuthDeny {
	FString UserName; // 0x0
	FString UserToDeny; // 0x10
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

struct FARKTributeDinoListing {
	FString DinoName; // 0x0
	FString DinoStats[0xc]; // 0x10
	float DinoExperiencePoints; // 0xd0
	UObject* DinoClass; // 0xd8
	uint32_t DinoID1; // 0xe0
	uint32_t DinoID2; // 0xe4
	uint32_t ExpirationTimeUTC; // 0xe8
};

struct FHitMarkerSettings {
	char bIsVisible : 1; // 0x0
	char bPlayHitSound : 1; // 0x0
	FLinearColor Color; // 0x4
	float DrawDuration; // 0x14
	FVector2D Scale; // 0x18
	USoundBase* HitSound; // 0x20
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x18
	bool bAttached; // 0x20
	float OriginalRadius; // 0x24
};

struct FPaintItem {
	UPrimalInventoryComponent* InventoryComp; // 0x0
	FItemNetID ItemId; // 0x8
	char ColorCode; // 0x10
	float X; // 0x14
	float Y; // 0x18
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x358
	FSlateSound SelectionChangeSlateSound; // 0x370
	FName PressedSound; // 0x388
	FName SelectionChangeSound; // 0x390
};

struct FRadialDamageParams {
	float MinimumDamage; // 0x0
	float InnerRadius; // 0x4
	float OuterRadius; // 0x8
	float DamageFalloff; // 0xc
};

struct FDestructibleDamageParameters {
	float DamageThreshold; // 0x0
	float DamageSpread; // 0x4
	float ImpactDamage; // 0x8
	float ImpactResistance; // 0xc
	int32_t DefaultImpactDamageDepth; // 0x10
};

struct FStructureVariant {
	FString VariantName; // 0x0
	bool bUseBPAllowSwitchToVariant; // 0x10
	UStaticMesh* Mesh; // 0x18
	bool bUseMeshTransform; // 0x20
	FTransform MeshTransform; // 0x30
	UDestructibleMesh* DestroyedMeshOverride; // 0x60
};

struct FNetworkGUID {
	uint32_t Value; // 0x0
};

struct FOceanDinoDepthEntry {
	TArray<FOceanDinoSpawnEntry> OceanDinoSpawnEntries; // 0x0
	FString SectionFriendlyName; // 0x10
	float StartAtDepthZ; // 0x20
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x14
	FDestructibleAdvancedParameters AdvancedParameters; // 0x40
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x50
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x60
	FDestructibleParametersFlag Flags; // 0x70
};

struct FNonClusterCharacterUploadData {
	FArkTributePlayerData PlayerData; // 0x0
	uint64_t TribeId; // 0x120
	TArray<FItemNetInfo> Items; // 0x128
};

struct FAnimationNode_TwoWayBlend : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x28
	float Alpha; // 0x40
	FInputScaleBias AlphaScaleBias; // 0x44
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
};

struct FExtraItemAttachmentInfo {
	UActorComponent* ExtraComponentsToAttach; // 0x0
	FName SocketToAttachTo; // 0x8
};

struct FMissionRelatedActorData {
	AActor* RelatedActor; // 0x0
	FName RelatedActorPropertyName; // 0x8
	EMissionRelatedPropertyType RelatedActorPropertyType; // 0x10
	EMissionRelatedPropertyUsage RelatedActorPropertyUsage; // 0x11
	FLinearColor RelatedActorPropertyTextColor; // 0x14
	FLinearColor LocalIndexMatchColorModifier; // 0x24
	bool bUseLocalIndexMatchColorModifier; // 0x34
	int32_t IndexMatchRangeOffset; // 0x38
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FTekAlarmPINData {
	double LastTimeActivated_2_B73FF631465607C325901B93ABB2CC79; // 0x0
	double LastTimeDeactivated_5_20D82F2B4FDC101DDEE6B0ABA7001BA7; // 0x8
	int32_t PINCode_11_2D3284A44E561BB12BA264A12D6CAAB8; // 0x10
	int32_t BitIndex_10_72E97AA6482E3869F60B92828DF09A5F; // 0x14
	bool IsActive_13_83F386134F498A122054389590C9A865; // 0x18
};

struct FRepCanoePassengerInputs {
	char Forward_2_A5EDE3A34E6C013FC4EC7B958EBE532C; // 0x0
	char Right_5_16F65A1A4075730E57A12F92583CC2C5; // 0x1
};

struct FCompanionReactionData {
	int32_t ReactionPriority; // 0x0
	char ReactionType; // 0x4
	float ReactionTimePadding_Start; // 0x8
	float ReactionTimePadding_End; // 0xc
	float ForceReactionDuration; // 0x10
	UAnimMontage* ReactionAnim; // 0x18
	float ReactionStartDelay_Anim; // 0x20
	float ReactionForceDuration_Anim; // 0x24
	UParticleSystem* ReactionVFX; // 0x28
	float ReactionStartDelay_VFX; // 0x30
	float ReactionForceDuration_VFX; // 0x34
	TArray<FStringAssetReference> ReactionSFXArray; // 0x38
	float ReactionStartDelay_SFX; // 0x48
	float ReactionForceDuration_SFX; // 0x4c
	char bReactionIsMonologue : 1; // 0x50
	char bIsReactionPlaying : 1; // 0x50
	char bIsReactionPlaying_Anim : 1; // 0x50
	char bIsReactionPlaying_VFX : 1; // 0x50
	char bIsReactionPlaying_SFX : 1; // 0x50
	double ReactionStartTime; // 0x58
	double ReactionEndTime; // 0x60
	float RequiredSecondsSincePreviousReactionInOrderToBePlayed; // 0x68
	char bDontCancelWhenGreaterOrEqualPriorityPlays : 1; // 0x6c
	float ChanceToOccur; // 0x70
	FStringAssetReference FallbackSharedAnimTexture; // 0x78
	TArray<FLocalizedSoundWaveAnimTexturePairArrays> LocalizedSoundWaves; // 0x88
	int32_t ExplorerNoteIndexToUnlock; // 0x98
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FMapMarkerPerMapInfo {
	FString MapName; // 0x0
	TArray<FPrimalMapMarkerEntryData> MapMarkers; // 0x10
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
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FEnvIntParam {
	int32_t Value; // 0x0
	FName ParamName; // 0x4
};

struct FSimpleMemberReference {
	UObject* MemberParentClass; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	int16_t LastInitializedContextCounter; // 0x10
	int16_t LastCacheBonesContextCounter; // 0x12
	int16_t LastUpdatedContextCounter; // 0x14
	int16_t LastEvaluatedContextCounter; // 0x16
	FPoseLink Pose; // 0x18
};

struct FClimbingTypeSettings {
	char bIsOneShot : 1; // 0x0
	float WaitTime; // 0x4
	float StaminaConsumption; // 0x8
	float ConsumeDurabilityMultiplier; // 0xc
	float AttachMoveTraceDistance; // 0x10
	float AttachBackTraceDistance; // 0x14
	float AttachForwardTraceDistance; // 0x18
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid InstanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	FName ObjectTypeName; // 0xc
	TArray<FResponseChannel> CustomResponses; // 0x18
	FString HelpMessage; // 0x28
	bool bCanModify; // 0x38
};

struct FMekBackpackData {
	FName BackpackType; // 0x0
	TArray<bool> BoolData; // 0x8
	TArray<float> FloatData; // 0x18
	TArray<double> TimeData; // 0x28
	TArray<FVector> VectorData; // 0x38
	TArray<FString> StringData; // 0x48
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
};

struct FDamageTypeAdjuster {
	UDamageType* DamageTypeClass; // 0x0
	float DamageMultiplier; // 0x8
	char bIgnoreMultiplierIfWildDinoAttacker : 1; // 0xc
	char bIgnoreMultiplierIfTamedDinoAttacker : 1; // 0xc
	char bOnlyUseMultiplierIfWildDinoAttacker : 1; // 0xc
	char bOnlyUseMultiplierIfTamedDinoAttacker : 1; // 0xc
	char bOnlyUseMultiplierIfTamed : 1; // 0xc
};

struct FDinoSaddleStruct {
	USkeletalMeshComponent* Saddle; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	FItemNetID ItemId; // 0x10
	bool bJustRemoved; // 0x18
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
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

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
};

struct FSessionServicePong {
	FString BuildDate; // 0x0
	FString DeviceName; // 0x10
	FGuid InstanceId; // 0x20
	FString InstanceName; // 0x30
	bool IsConsoleBuild; // 0x40
	FString PlatformName; // 0x48
	FGuid SessionId; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FArkTributeInventoryItem : FArkTributeEntity {
	FItemNetInfo ArkTributeItem; // 0x8
	float Version; // 0x1b8
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FConfigMaxItemQuantityOverride {
	FString ItemClassString; // 0x0
	FMaxItemQuantityOverride Quantity; // 0x10
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName FloatPropertyName; // 0x18
	UFloatProperty* FloatProperty; // 0x20
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FBeamTargetData {
	FName TargetName; // 0x0
	float TargetPercentage; // 0x8
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

struct FWorldContext {
	FURL LastURL; // 0xd0
	FURL LastRemoteURL; // 0x130
	UPendingNetGame* PendingNetGame; // 0x190
	TArray<FFullyLoadedPackagesInfo> PackagesToFullyLoad; // 0x198
	TArray<ULevel*> LoadedLevelsForPendingMapChange; // 0x1b8
	TArray<UObjectReferencer*> ObjectReferencers; // 0x1e0
	TArray<FLevelStreamingStatus> PendingLevelStreamingStatusUpdates; // 0x1f0
	UGameViewportClient* GameViewport; // 0x200
	UGameInstance* OwningGameInstance; // 0x208
	TArray<FNamedNetDriver> ActiveNetDrivers; // 0x210
};

struct FDinoBabySetup {
	FName DinoNameTag; // 0x0
	TArray<FBoneModifierRangeArray> BabyBoneModifierRanges; // 0x8
	TArray<float> WildRandomScaleRangeWeights; // 0x18
	TArray<FRandValueRange> WildRandomScaleRanges; // 0x28
};

struct FInt32Array {
	TArray<int32_t> Array; // 0x0
};

struct FAggregateGeometry2D {
	TArray<FCircleElement2D> CircleElements; // 0x0
	TArray<FBoxElement2D> BoxElements; // 0x10
	TArray<FConvexElement2D> ConvexElements; // 0x20
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

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FWeaponData {
	bool bInfiniteAmmo; // 0x0
	bool bNeverReload; // 0x1
	bool bUsesAmmo; // 0x2
	bool bDontTakeAmmoOnReload; // 0x3
	bool bFullReloadFromSingleItem; // 0x4
	bool bShowAmmoInClipAsPercent; // 0x5
	bool bDontReloadEmptyClipOnEquip; // 0x6
	int32_t AmmoPerClip; // 0x8
	int32_t AmmoPerShot; // 0xc
	bool bSilentOverflowReload; // 0x10
	float TimeBetweenShots; // 0x14
	float NoAnimReloadDuration; // 0x18
	bool bForceReloadDuration; // 0x1c
	bool bLoopedReloadAnim; // 0x1d
	float ReloadDurationPerAmmoCount; // 0x20
	float ItemDurabilityToConsumePerShot; // 0x24
	float HarvestResourceMultiplier; // 0x28
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FInAppPurchaseProductInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x28
};

struct FPrimalEquipmentDefinition {
	UTexture2D* EquipmentTypeIcon; // 0x0
	FString EquipmentTypeName; // 0x8
};

struct FActiveEventGlobalStatusAdjustments {
	FName ActiveEvent; // 0x0
	float GlobalStatusAdjustmentRateMultipliersPositive[0xc]; // 0x8
	float GlobalStatusAdjustmentRateMultipliersNegative[0xc]; // 0x38
};

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	float TotalWeight; // 0x4
	float Time; // 0x8
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x20
	FVector LeftEnd; // 0x2c
	FVector RightStart; // 0x38
	FVector RightEnd; // 0x44
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
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

struct FAnimNotifyEvent {
	float DisplayTime; // 0x0
	float TriggerTimeOffset; // 0x4
	float EndTriggerTimeOffset; // 0x8
	float TriggerWeightThreshold; // 0xc
	FName NotifyName; // 0x10
	UAnimNotify* Notify; // 0x18
	UAnimNotifyState* NotifyStateClass; // 0x20
	bool bIgnoreOnDediServer; // 0x28
	float Duration; // 0x2c
};

struct FRandValueRange {
	float MinVal; // 0x0
	float MaxVal; // 0x4
	float RandPower; // 0x8
};

struct FServerCustomFolder {
	int32_t InventoryCompType; // 0x0
	FString FolderName; // 0x8
	TArray<FItemNetID> CustomFolderItemIds; // 0x18
};

struct FDinoAttackInfo {
	FName AttackName; // 0x0
	float AttackWeight; // 0x8
	float AttackRange; // 0xc
	float MinAttackRange; // 0x10
	float ActivateAttackRange; // 0x14
	float AttackInterval; // 0x18
	char bHighQualityAttack : 1; // 0x1c
	char bSkipUntamed : 1; // 0x1c
	char bSkipTamed : 1; // 0x1c
	char bOnlyOnWildDinos : 1; // 0x1c
	char bPreventWhenEncumbered : 1; // 0x1c
	char bRidingOnlyAllowOnGround : 1; // 0x1c
	char bRidingOnlyAllowWhileFlying : 1; // 0x1c
	char bOnlyUseWithPlayersOrRiders : 1; // 0x1c
	char bOnlyUseWithPlayers : 1; // 0x1d
	char bPreventWhenSwimming : 1; // 0x1d
	char bPreventWhenInsufficientStamina : 1; // 0x1d
	char bSkipOnFlyers : 1; // 0x1d
	char bSkipAI : 1; // 0x1d
	char bPreventOnFemale : 1; // 0x1d
	char bPreventOnMale : 1; // 0x1d
	char bPreventWhenDinoCarrying : 1; // 0x1d
	char bUseBlueprintCanRiderAttack : 1; // 0x1e
	char bRequiresWalking : 1; // 0x1e
	char bRequiresSwimming : 1; // 0x1e
	char AttackStatusStarted : 1; // 0x1e
	char bAttackStopsMovement : 1; // 0x1e
	char bAttackStopsMovementAllowFalling : 1; // 0x1e
	char bAttackWithJump : 1; // 0x1e
	char bLocationBasedAttack : 1; // 0x1e
	char bDropCarriedCharacter : 1; // 0x1f
	char bCancelAndDropIfCarriedCharacter : 1; // 0x1f
	char bPreventAttackWhileRunning : 1; // 0x1f
	char ForceUpdateInRange : 1; // 0x1f
	char ForceUpdateMeshSelf : 1; // 0x1f
	char bUseSecondaryAnimationInAir : 1; // 0x1f
	char bUseBlueprintCanAttack : 1; // 0x1f
	char bUseBlueprintAdjustOutputDamage : 1; // 0x1f
	char bDisableRunningWhenAttacking : 1; // 0x20
	char bKeepExecutingWhenAcquiringTarget : 1; // 0x20
	char bPreventWithRider : 1; // 0x20
	char bAIForceAttackDotProductCheck : 1; // 0x20
	char bInstantlyHarvestCorpse : 1; // 0x20
	char bAddPawnVelocityToProjectile : 1; // 0x20
	char bAttackStopsRotation : 1; // 0x20
	char bTamedAISpecialAttack : 1; // 0x20
	char bPreventWhenCarryingExplosive : 1; // 0x21
	char bAllowWhenAnimationPreventsInput : 1; // 0x21
	char bRequireLineOfSight : 1; // 0x21
	char bUseBPOverrideGetAttackAnimationIndex : 1; // 0x21
	char bUseSecondaryAnimationWhenSwimming : 1; // 0x21
	char bUseTertiaryAnimationWhenSwimming : 1; // 0x21
	char bHighQualityAttackOnlyPlayerOrTamed : 1; // 0x21
	char bMeleeTraceForHitBlockers : 1; // 0x21
	char bMeleeTraceForHitBlockersAddHeadsocket : 1; // 0x22
	TArray<int32_t> ChildStateIndexes; // 0x28
	float AttackWithJumpChance; // 0x38
	double LastAttackTime; // 0x40
	double RiderLastAttackTime; // 0x48
	float AttackSelectionExpirationTime; // 0x50
	double AttackSelectionTime; // 0x58
	float AttackRotationRangeDegrees; // 0x60
	float AttackRotationGroundSpeedMultiplier; // 0x64
	FRotator AttackRotationRate; // 0x68
	TArray<FName> MeleeSwingSockets; // 0x78
	FName RangedSocket; // 0x88
	int32_t MeleeDamageAmount; // 0x90
	float MeleeDamageImpulse; // 0x94
	float MeleeSwingRadius; // 0x98
	UDamageType* MeleeDamageType; // 0xa0
	float AttackOffset; // 0xa8
	float StaminaCost; // 0xac
	float RiderAttackInterval; // 0xb0
	float DotProductCheckMin; // 0xb4
	float DotProductCheckMax; // 0xb8
	TArray<UAnimMontage*> AttackAnimations; // 0xc0
	TArray<float> AttackAnimationWeights; // 0xd0
	TArray<float> AttackAnimationsTimeFromEndToConsiderFinished; // 0xe0
	AShooterProjectile* ProjectileClass; // 0xf0
	UPrimalAIState* AttackStateTypeClass; // 0xf8
	float AttackRunningSpeedModifier; // 0x100
	float SwimmingAttackRunningSpeedModifier; // 0x104
	float SetAttackTargetTime; // 0x108
	UPrimalAIState* AttackStateType; // 0x110
	TArray<FVector> LastSocketPositions; // 0x118
	double LastProjectileSpawnTime; // 0x128
};

struct FEngramsSetSoftReferenceMapping {
	TArray<FString> EngramSetToUnlock; // 0x0
};

struct FClothPhysicsProperties {
	float BendResistance; // 0x0
	float ShearResistance; // 0x4
	float StretchLimit; // 0x8
	float Friction; // 0xc
	float Damping; // 0x10
	float Drag; // 0x14
	float GravityScale; // 0x18
	float InertiaBlend; // 0x1c
	float SelfCollisionThickness; // 0x20
};

struct FTTTrackBase {
	FName TrackName; // 0x0
	bool bIsExternalCurve; // 0x8
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	UVertexAnimation* VertexAnimToPlay; // 0x8
	char bSavedLooping : 1; // 0x10
	char bSavedPlaying : 1; // 0x10
	float SavedPosition; // 0x14
	float SavedPlayRate; // 0x18
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FPostProcessSettingsMaterialAdjuster {
	UMaterialInterface* PostProcessParentMaterial; // 0x0
	UMaterialParameterCollection* MaterialParamCollecton; // 0x8
	TArray<FName> ScalarParameterNames; // 0x10
	TArray<float> ScalarParameterValues; // 0x20
	TArray<FName> VectorParameterNames; // 0x30
	TArray<FVector> VectorParameterValues; // 0x40
};

struct FSupplyCrateSpawnEntry {
	float EntryWeight; // 0x0
	APrimalStructureItemContainer_SupplyCrate* CrateTemplate; // 0x8
	UNPCSpawnEntriesContainer* CrateEnemySpawnEntries; // 0x10
};

struct FScoutDamageStageEntry {
	UParticleSystem* ParticleSystem_2_3F70255542366800C3E76C9A704C918C; // 0x0
	float PlayIntervalSeconds_5_C11DF5814C838FEEDC2F7CA80A3DB7A0; // 0x8
};

struct FCraftingResourceRequirement {
	float BaseResourceRequirement; // 0x0
	UPrimalItem* ResourceItemType; // 0x8
	bool bCraftingRequireExactResourceType; // 0x10
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FMeshReductionSettings {
	float PercentTriangles; // 0x0
	float MaxDeviation; // 0x4
	float WeldingThreshold; // 0x8
	float HardAngleThreshold; // 0xc
	EMeshFeatureImportance SilhouetteImportance; // 0x10
	EMeshFeatureImportance TextureImportance; // 0x11
	EMeshFeatureImportance ShadingImportance; // 0x12
	bool bRecalculateNormals; // 0x13
	int32_t BaseLODModel; // 0x14
	bool bGenerateUniqueLightmapUVs; // 0x18
	bool bKeepSymmetry; // 0x19
	bool bVisibilityAided; // 0x1a
	bool bCullOccluded; // 0x1b
	EMeshFeatureImportance VisibilityAggressiveness; // 0x1c
};

struct FAmmoCount {
	UPrimalItem* AmmoItemTemplate_2_C5C44475479690FAE137CE9F7251F4AF; // 0x0
	int32_t Quantity_5_486A6A904B7378A6D63CBBBC82468B9F; // 0x8
};

struct FRangedValues {
	int32_t Range; // 0x0
	int32_t Value; // 0x4
};

struct FCameraShakeInstance {
	UCameraShake* SourceShake; // 0x0
	FName SourceShakeName; // 0x8
	float OscillatorTimeRemaining; // 0x10
	char bBlendingIn : 1; // 0x14
	float CurrentBlendInTime; // 0x18
	char bBlendingOut : 1; // 0x1c
	float CurrentBlendOutTime; // 0x20
	FVector LocSinOffset; // 0x24
	FVector RotSinOffset; // 0x30
	float FOVSinOffset; // 0x3c
	float Scale; // 0x40
	float Speed; // 0x44
	UCameraAnimInst* AnimInst; // 0x48
	ECameraAnimPlaySpace PlaySpace; // 0x50
	FMatrix UserPlaySpaceMatrix; // 0x60
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x80
	FSlateBrush MarqueeImage; // 0xf8
};

struct FStructRedirect {
	FString OldStructName; // 0x0
	FString NewStructName; // 0x10
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FClimbingTransitionParams {
	float LocationInterpSpeed; // 0x0
	float RotationInterpSpeed; // 0x4
	float OvershootDuration; // 0x8
	float OvershootCurveExp; // 0xc
	float OvershootCurveStartOffset; // 0x10
	float OvershootCurveDirectionBias; // 0x14
	float OvershootCurveStartBias; // 0x18
	float OvershootCurveEndOffset; // 0x1c
	float OvershootCurveEndBias; // 0x20
	float CameraLocationInterpSpeed; // 0x24
	float CameraRotationInterpSpeed; // 0x28
	bool bCameraSwitch; // 0x2c
	float CameraTransitionDuration; // 0x30
	FVector CameraSwitchStrength; // 0x34
	float CameraSwitchLocationInterpSpeed; // 0x40
	float CameraSwitchRotationInterpSpeed; // 0x44
	FRotator CameraSwitchOffset; // 0x48
};

struct FJoyAnim {
	UAnimMontage* Anim; // 0x0
	float Chance; // 0x8
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
	FString Category; // 0x10
};

struct FHintReplacementKeysForKeyboardControls {
	FString KeyboardControl; // 0x0
	TArray<FString> ReplacementGamepadControls; // 0x10
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FStructHighlightInfo {
	TWeakObjectPtr<APrimalStructure> Structure; // 0x0
	FLinearColor HighlightColor; // 0x8
};

struct FDinoMapMarkerInfo {
	APrimalDinoCharacter* Dino; // 0x0
	UStaticMeshComponent* MarkerComponent; // 0x8
	FVector DinoLocation; // 0x10
	int32_t PreviousLatitudeNumber; // 0x1c
	int32_t PreviousLongitudeNumber; // 0x20
	FColor MarkerColor; // 0x24
};

struct FEventItem {
	FName EventName; // 0x0
	UPrimalItem* Item; // 0x8
	bool bIsEngram; // 0x10
};

struct FEscapeRoom_RoomItemSetup {
	UPrimalItem* ItemClass; // 0x0
	int32_t NumItems; // 0x8
	UStaticMesh* MeshOverride; // 0x10
	FVector ScaleOverride; // 0x18
	UMaterialInterface* MaterialOverride; // 0x28
};

struct FHibernationZoneInfo {
	ANPCZoneVolume* Volume; // 0x0
	float Weight; // 0x8
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FKBoxElem {
	FMatrix TM; // 0x0
	FVector Center; // 0x40
	FQuat Orientation; // 0x50
	float X; // 0x60
	float Y; // 0x64
	float Z; // 0x68
};

struct FPrimalSaddleStructure {
	FVector DinoRelativeLocation; // 0x0
	FRotator DinoRelativeRotation; // 0xc
	FName BoneName; // 0x18
	APrimalStructure* MyStructure; // 0x20
};

struct FMaterialInstanceUsedWithOverride {
	char bUsedWithSkeletalMesh : 1; // 0x0
	char bUsedWithLandscape : 1; // 0x0
	char bUsedWithParticleSprites : 1; // 0x0
	char bUsedWithBeamTrails : 1; // 0x0
	char bUsedWithMeshParticles : 1; // 0x0
	char bUsedWithInstancedStaticMeshes : 1; // 0x0
	char bUsedWithGroundClutter : 1; // 0x0
	char bUsedWithStaticMesh : 1; // 0x0
};

struct FUberpounceData {
	FName Socket_2_5083A12F491F7162FEFFF2A97F18030D; // 0x0
	FVector WorldGeoLocation_7_ADBE3EC7480595A1AF6B0B9FA97EE3F9; // 0x8
	FRotator WorldGeoRotation_16_C8BC5C724F99806264418FBB303F78E9; // 0x14
	APrimalCharacter* Character_15_A587DB6C415808C1555C65BE528C7559; // 0x20
	UberpounceType Type_23_2964764F48C642C4AF1E538ACB43EA6E; // 0x28
	bool TargetIsFoliage_25_8AA213034D7796CBEA4920B67FBDB774; // 0x29
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	FKey Key; // 0x8
	float Scale; // 0x20
};

struct FCustomWheelEntry {
	TWeakObjectPtr<UObject> Target; // 0x0
	FString TargetFunctionName; // 0x8
	FString Label; // 0x18
	int32_t Priority; // 0x28
	float ActivationTime; // 0x2c
	USoundBase* ActivationSound; // 0x30
	int32_t CustomDataInt; // 0x38
	FName CustomDataName; // 0x3c
	FLinearColor TextColorOverride; // 0x44
	FLinearColor BackgroundColorOverride; // 0x54
	char bUseTextColorOverride : 1; // 0x64
	char bUseBackgroundColorOverride : 1; // 0x64
	char bPersistWheelOnActivation : 1; // 0x64
	char bIsEnabled : 1; // 0x64
};

struct FCheckBoxStyle : FSlateWidgetStyle {
	ESlateCheckBoxType CheckBoxType; // 0x8
	FSlateBrush UncheckedImage; // 0x10
	FSlateBrush UncheckedHoveredImage; // 0x88
	FSlateBrush UncheckedPressedImage; // 0x100
	FSlateBrush CheckedImage; // 0x178
	FSlateBrush CheckedHoveredImage; // 0x1f0
	FSlateBrush CheckedPressedImage; // 0x268
	FSlateBrush UndeterminedImage; // 0x2e0
	FSlateBrush UndeterminedHoveredImage; // 0x358
	FSlateBrush UndeterminedPressedImage; // 0x3d0
	FMargin Padding; // 0x448
	FSlateColor ForegroundColor; // 0x458
	FSlateColor BorderBackgroundColor; // 0x480
	FSlateSound CheckedSlateSound; // 0x4a8
	FSlateSound UncheckedSlateSound; // 0x4c0
	FSlateSound HoveredSlateSound; // 0x4d8
	FName CheckedSound; // 0x4f0
	FName UncheckedSound; // 0x4f8
	FName HoveredSound; // 0x500
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FRepMovement {
	FVector_NetQuantizeLow LinearVelocity; // 0x0
	FVector_NetQuantize AngularVelocity; // 0xc
	FVector_NetQuantize Location; // 0x18
	FRotator Rotation; // 0x24
	char bSimulatedPhysicSleep : 1; // 0x30
	char bRepPhysics : 1; // 0x30
	char bRepCompressedRotation : 1; // 0x30
	char bRepCompressedRotationPitch : 1; // 0x30
	char bRepLinearVelocityHQ : 1; // 0x30
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueID; // 0x0
	FString ValidationStr; // 0x10
	float ElapsedTime; // 0x20
};

struct FInterpGroupActorInfo {
	FName GroupName; // 0x0
	FName ObjectName; // 0x8
	TArray<AActor*> actors; // 0x10
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FEnvBoolParam {
	bool Value; // 0x0
	FName ParamName; // 0x4
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FAnimNode_Base {
	FExposedValueHandler EvaluateGraphExposedInputs; // 0x8
};

struct FTribeGovernment {
	int32_t TribeGovern_PINCode; // 0x0
	int32_t TribeGovern_DinoOwnership; // 0x4
	int32_t TribeGovern_StructureOwnership; // 0x8
	int32_t TribeGovern_DinoTaming; // 0xc
	int32_t TribeGovern_DinoUnclaimAdminOnly; // 0x10
};

struct FARKTributeData {
	FGuid ID; // 0x0
	EPrimalARKTributeDataType DataType; // 0x10
	TArray<char> DataBytes; // 0x18
	FString DataClassName; // 0x28
	FString DataTagName; // 0x38
	FString Name; // 0x48
	TArray<FString> DataStats; // 0x58
	double LastReceiveDataTime; // 0x68
	uint32_t DataID1; // 0x70
	uint32_t DataID2; // 0x74
};

struct FTmAccumulator {
	int32_t Low; // 0x0
	int32_t High; // 0x4
};

struct FDinoDownloadData {
	uint32_t AllowDownloadTimeUTC; // 0x0
	APrimalDinoCharacter* UniqueDino; // 0x8
};

struct FPrimalPersistentCharacterStatsStruct {
	uint16_t CharacterStatusComponent_ExtraCharacterLevel; // 0x0
	float CharacterStatusComponent_ExperiencePoints; // 0x4
	int32_t PlayerState_TotalEngramPoints; // 0x8
	int32_t PlayerState_PurchasedEngramPoints; // 0xc
	int32_t CharacterStatusComponent_HighestExtraCharacterLevel; // 0x10
	int32_t CharacterStatusComponent_LastRespecAtExtraCharacterLevel; // 0x14
	double CharacterStatusComponent_LastRespecUtcTimeSeconds; // 0x18
	TArray<uint32_t> PerMapExplorerNoteUnlocks; // 0x20
	TArray<FName> EmoteUnlocks; // 0x30
	TArray<UPrimalItem*> PlayerState_EngramBlueprints; // 0x40
	char CharacterStatusComponent_NumberOfLevelUpPointsApplied[0xc]; // 0x50
	UPrimalItem* PlayerState_DefaultItemSlotClasses[0xa]; // 0x60
	char PlayerState_DefaultItemSlotEngrams[0xa]; // 0xb0
	FDinoOrderGroup DinoOrderGroups[0xa]; // 0xc0
	int32_t CurrentlySelectedDinoOrderGroup; // 0x2a0
	float PercentageOfHeadHairGrowth; // 0x2a4
	bool bHasUnlockedAllExplorerNotes; // 0x2a8
	float PercentageOfFacialHairGrowth; // 0x2ac
	char FacialHairIndex; // 0x2b0
	char HeadHairIndex; // 0x2b1
	TArray<UPrimalItem*> ForcedUnlockDefaultCosmetics; // 0x2b8
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x30
};

struct FPostProcessMaterialAdjuster {
	UMaterialInterface* PostProcessParentMaterial; // 0x0
	TArray<FName> ScalarParameterNames; // 0x8
	TArray<float> ScalarParameterValues; // 0x18
	TArray<FName> VectorParameterNames; // 0x28
	TArray<FVector> VectorParameterValues; // 0x38
};

struct FAnimNode_BlendSpacePlayer : FAnimNode_Base {
	float X; // 0x10
	float Y; // 0x14
	float Z; // 0x18
	float PlayRate; // 0x1c
	bool bLoop; // 0x20
	UBlendSpaceBase* BlendSpace; // 0x28
	int32_t groupIndex; // 0x30
	EAnimGroupRole GroupRole; // 0x34
	float InternalTimeAccumulator; // 0x38
	FBlendFilter BlendFilter; // 0x40
	TArray<FBlendSampleData> BlendSampleDataCache; // 0xd0
};

struct FAnimNode_SequenceEvaluator : FAnimNode_Base {
	UAnimSequenceBase* Sequence; // 0x10
	float ExplicitTime; // 0x18
};

struct FItemCraftingConsumptionReplenishment {
	TArray<UPrimalItem*> ItemResourceClasses; // 0x0
	UPrimalItem* ToReplaceWithClass; // 0x10
};

struct FActionReportItem {
	FString PlayerName; // 0x0
	FString TribeName; // 0x10
	FString TimeOfDeath; // 0x20
	FString LevelOfDeath; // 0x30
	FString DeathMessage; // 0x40
};

struct FAnimNode_BoneDrivenController : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0x38
	FBoneReference TargetBone; // 0x44
	EComponentType SourceComponent; // 0x50
	EComponentType TargetComponent; // 0x51
	float Multiplier; // 0x54
	bool bUseRange; // 0x58
	float RangeMin; // 0x5c
	float RangeMax; // 0x60
};

struct FMissionGlobalData {
	double LastMissionDeactivatedUtcTime; // 0x0
};

struct FDepthOfFieldSetting {
	float FocalDistance; // 0x0
	float FocalRegion; // 0x4
	float NearTransitionRegion; // 0x8
	float FarTransitionRegion; // 0xc
	float Scale; // 0x10
	float MaxBokehSize; // 0x14
	float Occlusion; // 0x18
	bool UseGaussianBlur; // 0x1c
};

struct FMovieScenePossessable {
	FGuid Guid; // 0x0
	FText Name; // 0x10
	UObject* PossessedObjectClass; // 0x38
};

struct FWorldBuffPersistantData {
	FName WorldBuffIdentifier; // 0x0
	int32_t StackCount; // 0x8
	double WorldBuffStartTime; // 0x10
};

struct FResourceTemporaryAmountModifiers {
	FName CustomTag; // 0x0
	FString HarvestComponentClassString; // 0x8
	float ResourceAmountMultiplierModifier; // 0x18
};

struct FStruct_MissionModule_Travel {
	FString RequirementsTitle; // 0x0
	FName RequirementsMessage; // 0x10
	float DelayAfterModule; // 0x18
	float DelayBeforeModule; // 0x1c
	FName TriggerKeyOfPointToGoTo; // 0x20
	float DistanceFromPointToHideIcon; // 0x28
	FName NavPointLabel; // 0x2c
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FNPCDifficultyLevelRange {
	TArray<float> EnemyLevelsMin; // 0x0
	TArray<float> EnemyLevelsMax; // 0x10
	TArray<float> GameDifficulties; // 0x20
};

struct FPrimalWorldModifierList {
	bool bUseActiveEvent; // 0x0
	TArray<FName> ActiveEventNames; // 0x8
	bool bUseINIStringOptionValue; // 0x18
	TArray<FString> INIStringOptionValues; // 0x20
	bool bHasOverridePriority; // 0x30
	APrimalWorldModifier* WorldModifierClass; // 0x38
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
};

struct FDamagePrimalCharacterStatusValueModifier {
	EPrimalCharacterStatusValue ValueType; // 0x0
	char bSpeedToAddInSeconds : 1; // 0x4
	char bContinueOnUnchangedValue : 1; // 0x4
	char bIgnorePawnDamageAdjusters : 1; // 0x4
	char bResetExistingModifierDescriptionIndex : 1; // 0x4
	char bSetValue : 1; // 0x4
	char bSetAdditionalValue : 1; // 0x4
	float LimitExistingModifierDescriptionToMaxAmount; // 0x8
	int32_t UseAbsoluteDamageAmount; // 0xc
	float DamageMultiplierAmountToAdd; // 0x10
	float SpeedToAdd; // 0x14
	int32_t StatusValueModifierDescriptionIndex; // 0x18
	char bUsePercentualDamage : 1; // 0x1c
	char bMakeUntameable : 1; // 0x1c
	float PercentualDamage; // 0x20
	UDamageType* ScaleValueByCharacterDamageType; // 0x28
};

struct FScrollingTextInfo {
	UTextRenderComponent* TextComponent; // 0x0
	float Time; // 0x8
	bool bActive; // 0xc
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

struct FOverlappedFoliageElement {
	AActor* HarvestActor; // 0x0
	UInstancedStaticMeshComponent* InstancedStaticMeshComponent; // 0x8
	UPrimalHarvestingComponent* HarvestingComponent; // 0x10
	FVector HarvestLocation; // 0x18
	int32_t HitBodyIndex; // 0x24
	float MaxHarvestHealth; // 0x28
	float CurrentHarvestHealth; // 0x2c
	char bIsUnharvestable : 1; // 0x30
	char bIsVisibleAndActive : 1; // 0x30
};

struct FMissionWaypointInfo {
	bool bWaypointActive; // 0x0
	FVector WaypointDestination; // 0x4
	FString WaypointTitle; // 0x10
	FName WaypointID; // 0x20
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FActiveEventUndeprecatedDinos {
	FName ActiveEvent; // 0x0
	TArray<APrimalDinoCharacter*> UndeprecatedDinosDuringEvent; // 0x8
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x28
	float MaxValue; // 0x2c
	UDistributionVector* Distribution; // 0x30
};

struct FEngineServiceAuthGrant {
	FString UserName; // 0x0
	FString UserToGrant; // 0x10
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FPointOfInterestCompanionBehavior {
	float CompanionFocusRange; // 0x0
	float CompanionOrbitWithinRange; // 0x4
	float CompanionOrbitRadius; // 0x8
	FVector OrbitOriginOffset; // 0xc
	float CompanionReachedOrbitWithinDistOverride; // 0x18
	float InterpToOrbitSpeedOverride; // 0x1c
	float InterpAroundOrbitSpeedOverride; // 0x20
	FCompanionReactionData CompanionReaction_WithinRange; // 0x28
	FCompanionReactionData CompanionReaction_StartOrbit; // 0xc8
	FCompanionReactionData CompanionReaction_ReachedOrbit; // 0x168
	FCompanionReactionData CompanionReaction_PointViewed; // 0x208
	char bForceCompanionFocus : 1; // 0x2a8
	char bOrbitingCompanionLooksAtPoint : 1; // 0x2a8
	char bForceCompanionLookAtPointActor : 1; // 0x2a8
	char bRandomlyOrbitAroundAndScan : 1; // 0x2a8
};

struct FExposureSettings {
	int32_t LogOffset; // 0x0
	bool bFixed; // 0x4
};

struct FInventoryComponentDefaultItemsAppend {
	TArray<UPrimalInventoryComponent*> InventoryComponentClasses; // 0x0
	TArray<UPrimalItem*> AddItems; // 0x10
	TArray<UPrimalItem*> RemoveItems; // 0x20
	bool bAddToForceAllowCrafting; // 0x30
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x518
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x250
	FMargin Padding; // 0x368
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

struct FArkTributePlayerDataListing {
	uint64_t PlayerDataID; // 0x0
	FString PlayerName; // 0x8
	FString PlayerStats[0xc]; // 0x18
	bool bWasAllowDPCUpload; // 0xd8
	FString UploadingServerMapName; // 0xe0
	FString UploadingServerName; // 0xf0
	bool bWithItems; // 0x100
	uint32_t ItemCount; // 0x104
	float Version; // 0x108
	uint32_t ExpirationTimeUTC; // 0x10c
};

struct FSupplyCrateItemSet {
	FString SetName; // 0x0
	TArray<FSupplyCrateItemEntry> ItemEntries; // 0x10
	float MinNumItems; // 0x20
	float MaxNumItems; // 0x24
	float NumItemsPower; // 0x28
	float SetWeight; // 0x2c
	bool bItemsRandomWithoutReplacement; // 0x30
	UPrimalSupplyCrateItemSet* ItemSetOverride; // 0x38
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FMountedDLCInfo {
	FString Name; // 0x0
	FString Path; // 0x10
	FString ID; // 0x20
	FString ProductId; // 0x30
	char bAutoMount : 1; // 0x40
	FString StoreProductIdOverride; // 0x48
};

struct FGrappleTether {
	FString TetherTag; // 0x0
	FGrappleAnchor TetherAnchor_Start; // 0x10
	FGrappleAnchor TetherAnchor_End; // 0x50
	FGrappleAnchor TetherAnchor_Visual_Start; // 0x90
	FGrappleAnchor TetherAnchor_Visual_End; // 0xd0
	APrimalCharacter* GrappledParentPrimalChar; // 0x110
	APrimalCharacter* GrappleOwner; // 0x118
	APrimalBuff_Grappled* MasterGrappleBuff; // 0x120
	float TetherLifetime; // 0x128
	double TetherCreationTime; // 0x130
	char bAnyoneCanControl : 1; // 0x140
	char bUseVisualAnchor_Start : 1; // 0x140
	char bUseVisualAnchor_End : 1; // 0x140
	char bTetherBroken : 1; // 0x140
	double LastAboveBreakDistPastTetherLengthTime; // 0x148
	float TetherLength_Current; // 0x150
	FVector DirFromOwner_Current; // 0x154
	float DistToOwner_Current; // 0x160
	float OwnerDistFromTetherLimit_Current; // 0x164
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x58
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FPrimalFolderIcons {
	UTexture2D* NormalFolder; // 0x0
	UTexture2D* CustomFolder; // 0x8
	UTexture2D* Back; // 0x10
	FColor TextColor; // 0x18
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FPlayerDeathReason {
	int32_t PlayerId; // 0x0
	FString DeathReason; // 0x8
	double DiedAtTime; // 0x18
};

struct FMetaTagIDInfo {
	int32_t MetaTagEnumIndex; // 0x0
	FName MetaTagDisplayName; // 0x4
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FExplorerNoteEntry {
	int32_t ExplorerNoteType; // 0x4
	char bIsIsland : 1; // 0x8
	char bIsScorchedEarth : 1; // 0x8
	char bIsAberration : 1; // 0x8
	char bIsExtinction : 1; // 0x8
	char bIsGenesis1 : 1; // 0x8
	char bIsGenesis2 : 1; // 0x8
	char bIsDossier : 1; // 0x8
	char bDontRequireProximityToChest : 1; // 0x8
	char bUnlockIgnorePopup : 1; // 0x9
	char bUnlockIgnoreSound : 1; // 0x9
	FString ExplorerNoteDescription; // 0x10
	FName DossierTameableDinoNameTag; // 0x20
	USkeletalMesh* ExplorerNoteMesh; // 0x28
	UObject* ExplorerNoteAnimBP; // 0x30
	FStringAssetReference ExplorerNoteTexture; // 0x38
	UTexture2D* ExplorerNoteIcon; // 0x48
	UMaterialInterface* ExplorerNoteIconMaterial; // 0x50
	USoundBase* UnlockedSoundOverride; // 0x58
	float ShowExplorerNoteTitleDelayTime; // 0x60
	USoundCue* ExplorerNoteOpenSound; // 0x68
	USoundCue* ExplorerNoteCloseSound; // 0x70
	FString LocalizedSubtitle; // 0x78
	TArray<FLocalizedSoundCueEntry> LocalizedAudio; // 0x88
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FEngramEntryAutoUnlock {
	FString EngramClassName; // 0x0
	int32_t LevelToAutoUnlock; // 0x10
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartOffset; // 0xc
	float AnimEndOffset; // 0x10
	float AnimStartTime; // 0x14
	float AnimEndTime; // 0x18
	float AnimPlayRate; // 0x1c
	int32_t LoopingCount; // 0x20
};

struct FPlayerPreviewImage {
	UStaticMeshComponent* PreviewMesh; // 0x10
	UTextRenderComponent* PlayerNameText; // 0x18
	UTextRenderComponent* TribeComponent; // 0x20
	UTextRenderComponent* DeathInfo; // 0x28
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FBlueprintLiveStreamInfo {
	FString GameName; // 0x0
	FString StreamName; // 0x10
	FString URL; // 0x20
};

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
};

struct FPlayerStatusStateCharacterSound {
	EPrimalCharacterStatusState StateType; // 0x0
	USoundCue* SoundToPlay; // 0x8
};

struct FTimeline {
	ETimelineLengthMode LengthMode; // 0x0
	float Length; // 0x4
	char bLooping : 1; // 0x8
	char bReversePlayback : 1; // 0x8
	char bPlaying : 1; // 0x8
	float PlayRate; // 0xc
	float Position; // 0x10
	TArray<FTimelineEventEntry> Events; // 0x18
	TArray<FTimelineVectorTrack> InterpVectors; // 0x28
	TArray<FTimelineFloatTrack> InterpFloats; // 0x38
	TArray<FTimelineLinearColorTrack> InterpLinearColors; // 0x48
	DelegateProperty TimelinePostUpdateFunc; // 0x58
	DelegateProperty TimelineFinishedFunc; // 0x68
	TWeakObjectPtr<UObject> PropertySetObject; // 0x80
	FName DirectionPropertyName; // 0x88
	UByteProperty* DirectionProperty; // 0x90
};

struct FStruct_ComponentMaterial {
	AActor* Actor_9_A498AECD48E7018FC4108E8897C8A25D; // 0x0
	USceneComponent* Component_2_C4AAE72C49B9190BF215C691BD2398FC; // 0x8
	TArray<UMaterialInterface*> Materials_6_B89DBF944E441AC9E7C60296C629E404; // 0x10
};

struct FDataSet {
	FName DataSetName; // 0x0
	TArray<FName> ListNames; // 0x8
	TArray<FString> ListStrings; // 0x18
	TArray<int32_t> ListInts; // 0x28
	TArray<float> ListFloats; // 0x38
	TArray<UObject*> ListObjects; // 0x48
	TArray<AActor*> ListActors; // 0x58
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x80
};

struct FPenetrationTraceHit {
	FHitResult Hit; // 0x0
	float DistanceFromLastHit; // 0x88
	float TotalDistance; // 0x8c
};

struct FLightmassPrimitiveSettings {
	char bUseTwoSidedLighting : 1; // 0x0
	char bShadowIndirectOnly : 1; // 0x0
	char bUseEmissiveForStaticLighting : 1; // 0x0
	float EmissiveLightFalloffExponent; // 0x4
	float EmissiveLightExplicitInfluenceRadius; // 0x8
	float EmissiveBoost; // 0xc
	float DiffuseBoost; // 0x10
	float FullyOccludedSamplesFraction; // 0x14
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float TransitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FShoulderCannonFireMode {
	AShooterProjectile* ProjectileClass_2_8B3DDF3D49DC18A62A789789567F6AA2; // 0x0
	float MinCharge_5_D1346C1A43B11AD1187D0EBD68545E04; // 0x8
	float TargetCenterBias_8_E53C26164D2B4FFA6C7EB58CB42FD068; // 0xc
	float TargetRetentionBias_11_B13EEB8F449448BC07A21FB7A736A595; // 0x10
	float TargetSearchOffset_17_664E75FA4178A3B82C0D4EA631D141FD; // 0x14
	float AimSpeed_20_4D8AAEA249B3471EDF59D6871AC7A7BA; // 0x18
	int32_t AmmoCost_23_462D04D546497E5B916BB8A73D99A924; // 0x1c
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x80
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	UDialogueSoundWaveProxy* Proxy; // 0x20
};

struct FArkTributePlayerData : FArkTributeEntity {
	uint64_t PlayerDataID; // 0x8
	TArray<char> PlayerDataBytes; // 0x10
	FString PlayerName; // 0x20
	FString PlayerStats[0xc]; // 0x30
	FString UploadingServerMapName; // 0xf0
	FString UploadingServerName; // 0x100
	bool bWasAllowDPCUpload; // 0x110
	bool bWithItems; // 0x111
	uint32_t ItemCount; // 0x114
	bool bForServerTransfer; // 0x118
	float Version; // 0x11c
};

struct FHibernationCountInfo {
	UObject* ClassType; // 0x0
	int32_t Count; // 0x8
};

struct FLevelStaticMeshReskinDefinition {
	FString MaterialNameToReplace; // 0x0
	UMaterialInterface* NewMaterial; // 0x10
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x80
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
};

struct FBiomeZoneImpactEffect {
	AActor* SpawnActors[0x10]; // 0x0
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0x38
	FBoneReference LeftHandFK; // 0x44
	FBoneReference RightHandIK; // 0x50
	FBoneReference LeftHandIK; // 0x5c
	TArray<FBoneReference> IKBonesToMove; // 0x68
	float HandFKWeight; // 0x78
};

struct FTamingWaypointInfo {
	bool bWaypointActive; // 0x0
	FVector WaypointDestination; // 0x4
	FString WaypointTitle; // 0x10
	int32_t WaypointID; // 0x20
	UTexture2D* Icon; // 0x28
	FTamingDinoInfo DinoInfo; // 0x30
	float ProgressBarPercent; // 0x88
	bool bIsTamed; // 0x8c
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FPlayerDeathNotification {
	FString PlayerDeathStringEnemy; // 0x0
	FString PlayerDeathStringAlly; // 0x10
	FString PlayerDeathStringYou; // 0x20
	FString DeathReason; // 0x30
	TArray<FString> DeadPlayerNames; // 0x40
	bool bIsTribeDeath; // 0x50
	FString DeathTribeName; // 0x58
	int32_t TargetingTeam; // 0x68
	int64_t LinkedPlayerID; // 0x70
	TArray<FPrimalPlayerCharacterConfigStructReplicated> PlayersData; // 0x78
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x58
	char ActiveEnumValue; // 0x68
};

struct FIKLegInfo {
	FRotator OldTipRotation; // 0x0
	FQuat OldTipRotationQuat; // 0x10
	TArray<FVector> FabrikPositions; // 0x20
	FName RootBoneName; // 0x30
	FName IKBoneName; // 0x38
	float FeetOffset; // 0x40
	FRotator IKBoneRotationOffset; // 0x44
	FVector HitNormalWS; // 0x50
	FVector HitLocationWS; // 0x5c
	FVector LastTargetHitNormalWS; // 0x68
	FVector LastTargetHitLocationWS; // 0x74
	FTransform EffectorTransformCS; // 0x80
	float IKAlpha; // 0xb0
	FBoneReference TipBone; // 0xb4
	FBoneReference RootBone; // 0xc0
	bool bInit; // 0xcc
	bool bHasGround; // 0xcd
	int32_t Mute; // 0xd0
	float TimeIKStarted; // 0xd4
};

struct FClutterPropertyOverride {
	int32_t LayerID; // 0x0
	int32_t ArrayIndex; // 0x4
	bool OverrideDensity; // 0x8
	float Density; // 0xc
	bool OverrideMinSize; // 0x10
	float MinSize; // 0x14
	bool OverrideMaxSize; // 0x18
	float MaxSize; // 0x1c
	bool OverrideGenerationSeed; // 0x20
	int32_t GenerationSeed; // 0x24
	bool OverrideAllowShadows; // 0x28
	bool bAllowShadows; // 0x29
	bool OverrideStaticMesh; // 0x2a
	UStaticMesh* StaticMesh; // 0x30
	bool OverrideVisibilityTexture; // 0x38
	UTexture2D* VisibilityTexture; // 0x40
	bool OverrideTextureChannel; // 0x48
	int32_t TextureChannel; // 0x4c
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FColorMaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	FColor Constant; // 0x3c
};

struct FHUDElement {
	EHUDElementType Type; // 0x0
	char bIsVisible : 1; // 0x4
	char bIsEditorOnly : 1; // 0x4
	char bRespectPlayerUIScaleSetting : 1; // 0x4
	char bTitleIsExtendedInfo : 1; // 0x4
	char bLabelIsExtendedInfo : 1; // 0x4
	FString Title; // 0x8
	ETextJustify TextAlignment_Title; // 0x18
	FString Label; // 0x20
	ETextJustify TextAlignment_Label; // 0x30
	EHUDElementHorizontalAlignment TextContainerHorizontalAlignment; // 0x31
	EHUDElementVerticalAlignment TextContainerVerticalAlignment; // 0x32
	int32_t ZOrder; // 0x34
	float Progress; // 0x38
	FLinearColor TextColor; // 0x3c
	float TextScale; // 0x4c
	FMargin TextPadding; // 0x50
	FLinearColor BackgroundImageColor; // 0x60
	FLinearColor ProgressColor; // 0x70
	EProgressBarFillType ProgressBarFillType; // 0x80
	EHUDElementAnchorMode AnchorMode; // 0x81
	FAnchors Anchor; // 0x84
	FVector2D Location; // 0x94
	char bOverrideLocationForUIScaling : 1; // 0x9c
	FVector2D LocationAtMinScale; // 0xa0
	FVector2D LocationAtDefaultScale; // 0xa8
	FVector2D LocationAtMaxScale; // 0xb0
	FVector2D Size; // 0xb8
	FVector2D Scale; // 0xc0
	UTexture2D* BackgroundImage; // 0xc8
	UTexture2D* ProgressBarFillImage; // 0xd0
	FMargin ProgressBarPadding; // 0xd8
	FVector2D ProgressBarScale; // 0xe8
	UTexture2D* Icon; // 0xf0
	FVector2D IconSize; // 0xf8
	FVector2D IconScale; // 0x100
	FLinearColor IconColor; // 0x108
	FMargin IconPadding; // 0x118
	float IconRotation; // 0x128
	FMargin ProgressBarFillImageMargin; // 0x12c
	FMargin ProgressBarBackgroundImageMargin; // 0x13c
};

struct FButtonStyle : FSlateWidgetStyle {
	FSlateBrush Normal; // 0x8
	FSlateBrush Hovered; // 0x80
	FSlateBrush Pressed; // 0xf8
	FSlateBrush Disabled; // 0x170
	FMargin NormalPadding; // 0x1e8
	FMargin PressedPadding; // 0x1f8
	FSlateSound PressedSlateSound; // 0x208
	FSlateSound HoveredSlateSound; // 0x220
	FName PressedSound; // 0x238
	FName HoveredSound; // 0x240
};

struct FGameClassShortName {
	FString ShortName; // 0x0
	FString GameClassName; // 0x10
};

struct FGroundBoneChain {
	FName LeafGroundBoneName; // 0x0
	TArray<FGroundBoneModifier> GroundBones; // 0x8
	bool bIsAfterIk; // 0x18
	bool bUpdateRoll; // 0x19
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
};

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FTekBowArrowSetup_Struct {
	APrimalProjectileArrow* Projectile_2_83888AD845C0DA8D6F3202822BAE3DDA; // 0x0
	FString Name_5_B596008341470379BFE0EE8E96F3683C; // 0x8
	UTexture2D* Icon_8_9B59D40B456CD615BB761EB428AA0A98; // 0x18
	int32_t Cost_21_47DA7998495F55708AD5E0ACBF651AF1; // 0x20
	UParticleSystem* MaxPowerFX_FPV_24_CCCB9B8F4E9A10636704429D575D18C9; // 0x28
	UParticleSystem* MaxPowerFX_TPV_25_F771E159461C087D5F98ABAFF543E8F5; // 0x30
	UParticleSystem* MuzzleFX_18_2A559A5A4759E1D85E77A8B21779378B; // 0x38
	UParticleSystem* MuzzleFXInstant_26_B3A1DC404EFA3E1DDE0EA094CC8DD602; // 0x40
	UParticleSystem* TrailFX_29_455196714800FA97820814A60FC584B3; // 0x48
	UParticleSystem* AdditionalImpactFX_35_AC26EF4E4A0A1D68DF50C7A03FAF300F; // 0x50
	APrimalEmitterSpawnable* ReplacementImpactEmitter_37_C759F98D4EA354F7F2A5E9B957610CA4; // 0x58
	FLinearColor StringAndArrowColor_40_928E86694CAC86BCCEEF19B8F8937A3F; // 0x60
	UShooterDamageType* InstantDmgTypeReplacement_43_A55713024440A13F98F81A922A787FA8; // 0x70
	USoundBase* PrintSound_50_374FC4114070952CCF99348CC6C736F7; // 0x78
	USoundBase* FireSound_51_9CDAA57F4EFA16F0CACF53BF04CA5712; // 0x80
	USoundBase* FireInstantSound_52_D827780C4F9D8FDEF7563D824C8DF205; // 0x88
	USoundBase* InstantHitImpactSound_55_96D72A2E46983DAB69C9AE9DB883B4FC; // 0x90
};

struct FConfigSupplyCrateItemsOverride {
	FString SupplyCrateClassString; // 0x0
	int32_t MinItemSets; // 0x10
	int32_t MaxItemSets; // 0x14
	int32_t NumItemSetsPower; // 0x18
	bool bSetsRandomWithoutReplacement; // 0x1c
	TArray<FSupplyCrateItemSet> ItemSets; // 0x20
	bool bAppendItemSets; // 0x30
	bool bAppendPreventIncreasingMinMaxItemSets; // 0x31
};

struct FAnimNode_RotationOffsetBlendSpace : FAnimNode_BlendSpacePlayer {
	FPoseLink BasePose; // 0xe0
};

struct FBoneModifierSlider {
	FName SliderWidgetName; // 0x0
	TArray<FBoneModifierRange> BoneModifierRanges; // 0x8
	EBoneModifierType BoneModifierType; // 0x18
};

struct FVRBattleWaveUnit {
	APrimalDinoCharacter* DinoType; // 0x0
	FString DinoBlueprintPath; // 0x8
	int32_t DinoLevel; // 0x18
	FVector SpawnOffset; // 0x1c
	TArray<EPrimalCharacterStatusValue> PrioritizeStats; // 0x28
};

struct FEscapeRoom_RoomSetup {
	TArray<bool> RoomUnlockRequirements; // 0x0
	TArray<bool> UnlockHintTypes; // 0x10
	float CorrectHintWeight; // 0x20
	TArray<float> MultiplierPerReset; // 0x28
	int32_t NumDinosToKill; // 0x38
	TArray<FDinoSetupGroup> RoomGroupDinoSetups; // 0x40
	FEscapeRoom_RoomItemSetup ItemSetup; // 0x50
	int32_t NumHintFloors; // 0x80
	int32_t NumHintRoomPulses; // 0x84
	float TimeToComplete; // 0x88
	bool TeleportToNextRoomOnUnlock; // 0x8c
	bool TeleportToNextRoomOnCorrectOverlap; // 0x8d
	bool SpawnEnemiesWithoutUnlockReq; // 0x8e
	int32_t NumDinosPerWave; // 0x90
	float WaveInterval; // 0x94
	TArray<bool> ShowIndicatorsForUnlockReqs; // 0x98
	int32_t MaxActiveDinos; // 0xa8
	bool UseClosestDinosSpawnToPlayers; // 0xac
	bool UseForcedTargeting; // 0xad
	float MaxAggroDistance; // 0xb0
	bool ChooseSingleUniqueUnlockReqForRoom; // 0xb4
};

struct FMultiAchievement {
	FString UnlockAchievement; // 0x0
	TArray<FString> RequiredAchievements; // 0x10
};

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0x38
	FBoneReference SourceBone; // 0x44
	float Multiplier; // 0x50
	EBoneAxis RotationAxisToRefer; // 0x54
};

struct FAnimNode_Fabrik : FAnimNode_SkeletalControlBase {
	FTransform EffectorTransform; // 0x40
	EBoneControlSpace EffectorTransformSpace; // 0x70
	FBoneReference EffectorTransformBone; // 0x74
	EBoneRotationSource EffectorRotationSource; // 0x80
	FBoneReference TipBone; // 0x84
	FBoneReference RootBone; // 0x90
	float Precision; // 0x9c
	int32_t MaxIterations; // 0xa0
	bool bEnableDebugDraw; // 0xa4
};

struct FAnimNode_MultiFabrik_Dinos : FAnimNode_SkeletalControlBase {
	float Precision; // 0x38
	bool bEnableDebugDraw; // 0x3c
	float RootOffset; // 0x40
	FRotator RootRotationOffset; // 0x44
	bool bInitOffset; // 0x50
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FClientMissionEligibility {
	char bIsEligible : 1; // 0x0
	char bCompleted : 1; // 0x0
	char bOnGlobalCooldown : 1; // 0x0
	char bOnPerPlayerCooldown : 1; // 0x0
	char bMinLevelRequirement : 1; // 0x0
	double LastUpdateNetworkTime; // 0x8
	double LastCompletedUtcTime; // 0x10
	float MissionMaxDurationSeconds; // 0x18
	double MissionStartNetworkTime; // 0x20
	FString Reason; // 0x28
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FItemToDisplayInStructureTooltip {
	UPrimalItem* PrimalItem; // 0x0
	int32_t Quantity; // 0x8
	FString ModuleGroupHeader; // 0x10
};

struct FHmdUserProfile {
	FString Name; // 0x0
	FString Gender; // 0x10
	float PlayerHeight; // 0x20
	float EyeHeight; // 0x24
	float IPD; // 0x28
	FVector2D NeckToEyeDistance; // 0x2c
	TArray<FHmdUserProfileField> ExtraFields; // 0x38
};

struct FAnimNode_MultiFabrik : FAnimNode_SkeletalControlBase {
	float Precision; // 0x38
	bool bEnableDebugDraw; // 0x3c
	FName NodeName; // 0x40
};

struct FActiveEventUndeprecatedItems {
	FName ActiveEvent; // 0x0
	TArray<UPrimalItem*> UndeprecatedItemsDuringEvent; // 0x8
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bshouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FSkeletalMeshLODInfo {
	float ScreenSize; // 0x0
	float LODHysteresis; // 0x4
	TArray<int32_t> LODMaterialMap; // 0x8
	TArray<bool> bEnableShadowCasting; // 0x18
	TArray<ETriangleSortOption> TriangleSorting; // 0x28
	TArray<FTriangleSortSettings> TriangleSortSettings; // 0x38
	char bHasBeenSimplified : 1; // 0x48
	FSkeletalMeshOptimizationSettings ReductionSettings; // 0x50
	int32_t StaggeredUpdateFrequency; // 0x90
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FTriangleSortSettings {
	ETriangleSortOption TriangleSorting; // 0x0
	ETriangleSortAxis CustomLeftRightAxis; // 0x1
	FName CustomLeftRightBoneName; // 0x4
};

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x8
	APlayerState* PlayerState; // 0x3a0
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	bool bEnableShadowCasting; // 0x8
};

struct FClientMissionData {
	AMissionType* Mission; // 0x0
	TArray<FMissionPhaseRequirement> Requirements; // 0x8
	TArray<FMissionPhaseRequirement> LocalRequirements; // 0x18
	TArray<FMissionWorldIndicator> MissionWorldIndicators; // 0x28
	TArray<FMissionWorldIndicator> LocalWorldIndicators; // 0x38
	TArray<FItemNetInfo> Items; // 0x48
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FAudioEQEffect {
	float HFFrequency; // 0x8
	float HFGain; // 0xc
	float MFCutoffFrequency; // 0x10
	float MFBandwidth; // 0x14
	float MFGain; // 0x18
	float LFFrequency; // 0x1c
	float LFGain; // 0x20
};

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
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

struct FKey {
	FName KeyName; // 0x0
};

struct FActorComponentTickFunction : FTickFunction {
	char bSavedComponentTickState : 1; // 0x50
	char bSavedComponentTickStateValue : 1; // 0x50
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FActorTickFunction : FTickFunction {
	char bSavedActorTickState : 1; // 0x50
	char bSavedActorTickStateValue : 1; // 0x50
};

struct FVector2MaterialInput : FMaterialInput {
	char UseConstant : 1; // 0x38
	float ConstantX; // 0x3c
	float ConstantY; // 0x40
};

struct FPrimalMapMarkerEntryData {
	int32_t coord1; // 0x0
	int32_t coord2; // 0x4
	FString Name; // 0x8
	bool bOverrideMarkerTextColor; // 0x18
	FColor OverrideMarkerTextColor; // 0x1c
	float coord1f; // 0x20
	float coord2f; // 0x24
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float TimeStamp; // 0xc
};

struct FCollisionResponseSet {
	TArray<ECollisionChannel> Channels; // 0x0
	TArray<ECollisionResponse> Responses; // 0x10
};

struct FAttenuationSettings {
	char bAttenuate : 1; // 0x0
	char bSpatialize : 1; // 0x0
	char bAttenuateWithLPF : 1; // 0x0
	ESoundDistanceModel DistanceAlgorithm; // 0x4
	ESoundDistanceCalc DistanceType; // 0x5
	EAttenuationShape AttenuationShape; // 0x6
	float dBAttenuationAtMax; // 0x8
	float OmniRadius; // 0xc
	float RadiusMin; // 0x10
	float RadiusMax; // 0x14
	FVector AttenuationShapeExtents; // 0x18
	float ConeOffset; // 0x24
	float FalloffDistance; // 0x28
	float LPFRadiusMin; // 0x2c
	float LPFRadiusMax; // 0x30
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
	FVector2D LightmapUVBias; // 0x40
	FVector2D ShadowmapUVBias; // 0x48
};

struct FSpaceHazardData {
	FName GroupName_29_6A79C9594CB589DB6D2E5AB36AC9789F; // 0x0
	TArray<FName> SubLevels_28_4B4CCB274B519918988668ACCFFF96F1; // 0x8
	int32_t SkyboxIndex_32_B671741C4FC35C65136B18965B585778; // 0x18
	float Weight_35_5B2B292B4945CBFE1D3D388F4D930163; // 0x1c
};

struct FEditorMapPerformanceTestDefinition {
	FFilePath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x10
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float Weight; // 0x4
	FA2Pose Pose; // 0x8
};

struct FCircleElement2D {
	FVector2D Center; // 0x0
	float Radius; // 0x8
};

struct FCrateTemporaryQualityModifiers {
	FName CustomTag; // 0x0
	FString ClassString; // 0x8
	float QualityMultiplierModifier; // 0x18
};

struct FMissionDinoPath {
	TWeakObjectPtr<AActor> TargetActor; // 0x0
	FVector CurrentTarget; // 0x8
	FVector LastTarget; // 0x14
	float CurrentSplineKeyTarget; // 0x20
	float LastSplineKeyTarget; // 0x24
	double LastUpdateTime; // 0x28
	float UpdateInterval; // 0x30
	TWeakObjectPtr<USplineComponent> ForcePathSpline; // 0x34
	char bReverseAtEnd : 1; // 0x3c
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

struct FExpressionOutput {
	FString OutputName; // 0x0
	int32_t Mask; // 0x10
	int32_t MaskR; // 0x14
	int32_t MaskG; // 0x18
	int32_t MaskB; // 0x1c
	int32_t MaskA; // 0x20
};

struct FBiomeZoneVolumeEffect {
	EBiomeZone BiomeZone; // 0x0
	UParticleSystem* ParticleSystem; // 0x8
	FDecalData DecalData; // 0x10
	char bIsImpactEffect : 1; // 0x30
	char bIsNonImpactEffect : 1; // 0x30
	char bIsUnderwaterEffect : 1; // 0x30
	char bDecalUniformSize : 1; // 0x30
	float Weight; // 0x34
	float MinSpawnDistance; // 0x38
	float MaxSpawnDistance; // 0x3c
	float ScaleAtMinDistance; // 0x40
	float ScaleAtMaxDistance; // 0x44
};

struct FMissionPhaseRequirement {
	FName DescriptionStringTag; // 0x0
	UObject* RelatedType; // 0x8
	char bUseRelatedTypeName : 1; // 0x10
	FMissionRelatedActorData OptionalRelatedActorData; // 0x18
	char bIsComplete : 1; // 0x58
	char bUseCount : 1; // 0x58
	char bUseProgress : 1; // 0x58
	char bAutoCalculateProgressFromCount : 1; // 0x58
	int32_t CurrentCount; // 0x5c
	int32_t MaxCount; // 0x60
	float Progress; // 0x64
	EPhaseRequirementWidgetVisualState PhaseRequirementWidgetVisualState; // 0x68
	FLinearColor CustomPhaseRequirementTextColor; // 0x6c
	FLinearColor CustomPhaseRequirementProgressBarColor; // 0x7c
};

struct FStruct_ClimberSimulatedMoveData {
	FVector ClimberLocation_2_7F62C91949CB933B8245DFA0FF75EC9E; // 0x0
	FRotator ClimberRotation_7_42053DF944C85A07281585932FD27C64; // 0xc
	FVector ClimberVelocity_20_DFB3A2FF40B31D10C25794BEA3475451; // 0x18
};

struct FNetExecParams {
	int32_t IntParam1; // 0x0
	int32_t IntParam2; // 0x4
	float FloatParam1; // 0x8
	UObject* ObjParam1; // 0x10
};

struct FMaterialInput {
	UMaterialExpression* Expression; // 0x0
	int32_t OutputIndex; // 0x8
	FString InputName; // 0x10
	int32_t Mask; // 0x20
	int32_t MaskR; // 0x24
	int32_t MaskG; // 0x28
	int32_t MaskB; // 0x2c
	int32_t MaskA; // 0x30
	int32_t GCC64_Padding; // 0x34
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FClassNameReplacement {
	FString FromClassName; // 0x0
	FString ToClassName; // 0x10
};

struct FNetViewer {
	APlayerController* InViewer; // 0x0
	AActor* Viewer; // 0x8
	FVector ViewLocation; // 0x10
	FVector ViewDir; // 0x1c
};

struct FOpenTestAsset {
	FFilePath AssetToOpen; // 0x0
	bool bSkipTestWhenUnAttended; // 0x10
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunction* Function; // 0x10
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FAIDamageEvent {
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
};

struct FChibiTextureMaterialProperties {
	FName PropertyName_2_82F2C9C8456F80A18BC7E4995D8B0C66; // 0x0
	UTexture* PropertyValue_5_7105FE524B18C11A5C75728E0F6903E6; // 0x8
};

struct FDynamicUndermeshVolumes_Data {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
	int32_t R; // 0xc
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FLocalizedSoundCueEntry {
	FString TwoLetterISOLanguageName; // 0x0
	FStringAssetReference LocalizedSoundCue; // 0x10
};

struct FClothingAssetData {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties PhysicsProperties; // 0x1c
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FAnimMontageInstance {
	UAnimMontage* Montage; // 0x0
	float DesiredWeight; // 0x8
	float Weight; // 0xc
	float BlendTime; // 0x10
	float BlendOutTimeOverride; // 0x14
	bool bPauseOnFinish; // 0x18
	float DefaultBlendTimeMultiplier; // 0x1c
	TArray<int32_t> NextSections; // 0x20
	TArray<int32_t> PrevSections; // 0x30
	bool bPlaying; // 0x40
	float Position; // 0x68
	float PlayRate; // 0x6c
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FAnimNode_SpringBone : FAnimNode_SkeletalControlBase {
	FBoneReference SpringBone; // 0x38
	bool bLimitDisplacement; // 0x44
	float MaxDisplacement; // 0x48
	float SpringStiffness; // 0x4c
	float SpringDamping; // 0x50
	float ErrorResetThresh; // 0x54
	bool bNoZSpring; // 0x58
};

struct FBoid {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Velocity; // 0x18
	FVector Acceleration; // 0x24
	float MaxSpeed; // 0x30
	float MaxForce; // 0x34
	float TurnRate; // 0x38
	char bUseTargeting : 1; // 0x3c
	char bHasReachedTarget : 1; // 0x3c
	char bIsAlive : 1; // 0x3c
	float SpiralTime; // 0x40
	FVector TargetLocation; // 0x44
	EBoidType Type; // 0x50
};

struct FUseItemAddCharacterStatusValue {
	float BaseAmountToAdd; // 0x0
	char bPercentOfMaxStatusValue : 1; // 0x4
	char bPercentOfCurrentStatusValue : 1; // 0x4
	char bUseItemQuality : 1; // 0x4
	char bDontRequireLessThanMaxToUse : 1; // 0x4
	char bAddOverTime : 1; // 0x4
	char bAddOverTimeSpeedInSeconds : 1; // 0x4
	char bContinueOnUnchangedValue : 1; // 0x4
	char bSetValue : 1; // 0x4
	char bSetAdditionalValue : 1; // 0x5
	char bResetExistingModifierDescriptionIndex : 1; // 0x5
	char bForceUseStatOnDinos : 1; // 0x5
	float LimitExistingModifierDescriptionToMaxAmount; // 0x8
	float AddOverTimeSpeed; // 0xc
	float PercentAbsoluteMaxValue; // 0x10
	float PercentAbsoluteMinValue; // 0x14
	int32_t StatusValueModifierDescriptionIndex; // 0x18
	float ItemQualityAddValueMultiplier; // 0x1c
	EPrimalCharacterStatusValue StatusValueType; // 0x20
	EPrimalCharacterStatusValue StopAtValueNearMax; // 0x21
	UDamageType* ScaleValueByCharacterDamageType; // 0x28
};

struct FHmdUserProfileField {
	FString FieldName; // 0x0
	FString FieldValue; // 0x10
};

struct FSupplyCrateItemEntry {
	FString ItemEntryName; // 0x0
	float EntryWeight; // 0x10
	TArray<UPrimalItem*> Items; // 0x18
	TArray<FString> ItemClassStrings; // 0x28
	TArray<float> ItemsWeights; // 0x38
	TArray<int32_t> ItemQuantityOverrides; // 0x48
	float MinQuantity; // 0x58
	float MaxQuantity; // 0x5c
	bool bApplyQuantityToSingleItem; // 0x60
	float QuantityPower; // 0x64
	float MinRandomQuality; // 0x68
	float MinQuality; // 0x6c
	float MaxQuality; // 0x70
	float QualityPower; // 0x74
	char bForceBlueprint : 1; // 0x78
	char bForcePreventGrinding : 1; // 0x78
	float ChanceToBeBlueprintOverride; // 0x7c
	float ItemStatClampsMultiplier; // 0x80
	float ChanceToActuallyGiveItem; // 0x84
	float RequiresMinQuality; // 0x88
};

struct FCustomButtonWidgetStyle : FSlateWidgetStyle {
	FLinearColor NormalChildTintColor; // 0x8
	FLinearColor HoveredChildTintColor; // 0x18
	FLinearColor PressedChildTintColor; // 0x28
	FLinearColor DisabledChildTintColor; // 0x38
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FUnlockableEmoteEntry {
	FName EmoteName; // 0x0
	FString EmoteDescription; // 0x8
	FName EmoteGroup; // 0x18
	FString UseEmoteMessage; // 0x20
	UAnimMontage* MaleAnim; // 0x30
	UAnimMontage* FemaleAnim; // 0x38
	float EmotePlayMinimumInterval; // 0x40
	bool bGiveDefault; // 0x44
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float Sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float timeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	uint64_t ViewportKey; // 0x28
};

struct FKSphereElem {
	FMatrix TM; // 0x0
	FVector Center; // 0x40
	float Radius; // 0x4c
};

struct FConfigCraftingResourceRequirement {
	float BaseResourceRequirement; // 0x0
	FString ResourceItemTypeString; // 0x8
	bool bCraftingRequireExactResourceType; // 0x18
};

struct FProjectileWeaponData {
	float ProjectileLife; // 0x0
	int32_t ExplosionDamage; // 0x4
	float ExplosionImpulse; // 0x8
	int32_t DirectDamage; // 0xc
	float DirectImpulse; // 0x10
	float ExplosionRadius; // 0x14
	UDamageType* DamageType; // 0x18
	UDamageType* DirectDamageType; // 0x20
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
};

struct FDinoBaseLevelWeightEntry {
	float EntryWeight; // 0x0
	float BaseLevelMinRange; // 0x4
	float BaseLevelMaxRange; // 0x8
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FCanoeServerReceivedPassengerSavedInputs {
	float Axis_13_D6560244437B59C6FFA542AB1878A440; // 0x0
	double Timestamp_16_42521CEF4C6D168D5EDF3A98B4ED7BA2; // 0x8
	int32_t PassengerIndex_9_3B570D2D4016B69EEEA75DBA2C542469; // 0x10
};

struct FMountedDLCMapInfo {
	FString ID; // 0x0
	FString Map; // 0x10
};

struct FDinoClassCountStruct {
	APrimalCharacter* DinoClass; // 0x0
	int32_t NumberofTamedClass; // 0x8
	int32_t NumberofWildClass; // 0xc
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

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FTTLinearColorTrack : FTTTrackBase {
	UCurveLinearColor* CurveLinearColor; // 0x10
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	float Offset; // 0x18
	int32_t GridNum; // 0x1c
};

struct FWeightedObjectList {
	TArray<float> Weights; // 0x0
	TArray<UObject*> AssociatedObjects; // 0x10
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

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x20
	FVector Origin; // 0x30
	TArray<FHitResult> ComponentHits; // 0x40
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

struct FIKGroundPlaneOverrideInfo {
	FVector RootLocationOffset; // 0x0
	char bUseActorRootInstead : 1; // 0xc
	FVector HitLocationWS; // 0x10
	FVector HitLocationCS; // 0x1c
	FVector CachedHitLocationWS; // 0x28
	FVector CachedHitLocationCS; // 0x34
	FVector HitLocationTargetWS; // 0x40
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
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

struct FTutorialDefinition {
	FString TutorialTitle; // 0x0
	FString TutorialText; // 0x10
	UTexture2D* TutorialImage; // 0x20
	float TutorialDuration; // 0x28
	int32_t NextTutorialIndex; // 0x2c
};

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FTimelineEventEntry {
	float Time; // 0x0
	DelegateProperty EventFunc; // 0x4
};

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	int32_t DebrisDepth; // 0x8
	int32_t EssentialDepth; // 0xc
};

struct FTamingDinoInfo {
	FString Name; // 0x0
	float TameAffinityPercent; // 0x10
	float HealthPercent; // 0x14
	float HealthCurrent; // 0x18
	float HealthMax; // 0x1c
	float HungerPercent; // 0x20
	float HungerCurrent; // 0x24
	float HungerMax; // 0x28
	float TorpidityPercent; // 0x2c
	float TameEffectivenessPercent; // 0x30
	int32_t TameEffectivenessLvlModifier; // 0x34
	FVector Location; // 0x38
	bool bIsConcious; // 0x44
	bool bUseGender; // 0x45
	bool bIsFemale; // 0x46
	bool bIsTamed; // 0x47
	uint32_t DataID1; // 0x48
	uint32_t DataID2; // 0x4c
	UPrimalDinoEntry* DinoEntry; // 0x50
};

struct FAnimNode_WheelHandler : FAnimNode_SkeletalControlBase {
	UWheeledVehicleMovementComponent* VehicleSimComponent; // 0x38
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FLatestMissionScore {
	FName MissionTag; // 0x0
	FLeaderboardRow LatestScore; // 0x8
	FLeaderboardRow BestScore; // 0x50
	bool bHasValidScore; // 0x98
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x8
};

struct FComponentAttachmentEntry {
	UActorComponent* ActorComponentClass; // 0x0
	FVector ComponentLocationOffset; // 0x8
	FRotator ComponentRotationOffset; // 0x14
};

struct FExplorerNoteAchievement {
	FString AchievementName; // 0x0
	TArray<int32_t> ExplorerNoteIndices; // 0x10
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

struct FMinimalViewInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FRotator AimRotation; // 0x18
	char bUseTPVAim : 1; // 0x24
	float FOV; // 0x28
	float OrthoWidth; // 0x2c
	float AspectRatio; // 0x30
	char bConstrainAspectRatio : 1; // 0x34
	ECameraProjectionMode ProjectionMode; // 0x38
	float PostProcessBlendWeight; // 0x3c
	FPostProcessSettings PostProcessSettings; // 0x40
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FObjectListItem {
	FObjectInfo ObjectInfo; // 0x0
	float Probability; // 0x30
};

struct FItemAttachmentInfo {
	UActorComponent* ComponentToAttach; // 0x0
	TArray<FExtraItemAttachmentInfo> ExtraItemAttachmentInfos; // 0x8
	FName SocketToAttachTo; // 0x18
	char bCanBuildStructuresOn : 1; // 0x20
	char bUseParentAnims : 1; // 0x20
	char bAttachToFirstPersonHands : 1; // 0x20
	char bAttachToThirdPersonWeaponMesh : 1; // 0x20
	char bDisabled : 1; // 0x20
	char bUseItemColors : 1; // 0x20
	char bUseIgnoreAttachmentWhenEquipmentOfType : 1; // 0x20
	char bHideCharacterMesh : 1; // 0x20
	char bAttachmentRequireWeaponSupportShield : 1; // 0x21
	char bForceDediAttachment : 1; // 0x21
	char bForceVisibleInFirstPerson : 1; // 0x21
	char bIgnoreEquipmentForceHideFirstPerson : 1; // 0x21
	char bAttachToFirstPersonCamera : 1; // 0x21
	char bAttachToFirstPersonCameraCapsule : 1; // 0x21
	char bPersistShieldRefreshOnWeaponEquip : 1; // 0x21
	AActor* OnlyUseAttachmentForActorClass; // 0x28
	EPrimalEquipmentType IgnoreAttachmentWhenEquipmentOfType; // 0x30
	FName AttachedCompName; // 0x34
	TWeakObjectPtr<UActorComponent> AttachedCompReference; // 0x3c
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	DelegateProperty InterpFunc; // 0x8
	FName LinearColorPropertyName; // 0x18
	UStructProperty* LinearColorProperty; // 0x20
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t groupIndex; // 0x18
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FCustomWheelSettings {
	FString CenterText; // 0x0
	FLinearColor CenterTextColorOverride; // 0x10
	FVector2D CenterImageSize; // 0x20
	UTexture2D* CenterImage; // 0x28
	int32_t MinNumDivisions; // 0x30
	float InnerDistance; // 0x34
	float OuterDistance; // 0x38
	char bUseCenterTextColorOverride : 1; // 0x3c
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FKSphylElem {
	FMatrix TM; // 0x0
	FVector Center; // 0x40
	FQuat Orientation; // 0x50
	float Radius; // 0x60
	float Length; // 0x64
};

struct FAnimNode_Trail : FAnimNode_SkeletalControlBase {
	FBoneReference TrailBone; // 0x38
	int32_t ChainLength; // 0x44
	EAxis ChainBoneAxis; // 0x48
	bool bInvertChainBoneAxis; // 0x49
	bool bLimitStretch; // 0x4a
	float TrailRelaxation; // 0x4c
	float StretchLimit; // 0x50
	FVector FakeVelocity; // 0x54
	bool bActorSpaceFakeVel; // 0x60
};

struct FPlacementData {
	FVector AdjustedLocation; // 0x0
	FRotator AdjustedRotation; // 0xc
	bool bSnapped; // 0x18
	bool bDisableEncroachmentCheck; // 0x19
	int32_t MySnapToIndex; // 0x1c
	int32_t TheirSnapToIndex; // 0x20
	AActor* FloorHitActor; // 0x28
	APrimalStructure* ParentStructure; // 0x30
	APrimalStructure* ForcePlacedOnFloorParentStructure; // 0x38
	APrimalStructure* ReplacesStructure; // 0x40
	APawn* AttachToPawn; // 0x48
	FName AttachToBone; // 0x50
	APrimalDinoCharacter* DinoCharacter; // 0x58
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FSerializedMissionData {
	FName MissionTag; // 0x0
	FString SerializedData; // 0x8
};

struct FCollisionResponseContainer {
	ECollisionResponse WorldStatic; // 0x0
	ECollisionResponse WorldDynamic; // 0x1
	ECollisionResponse Visibility; // 0x2
	ECollisionResponse PhysicsBody; // 0x3
	ECollisionResponse Destructible; // 0x4
	ECollisionResponse GameTraceChannel1; // 0x5
	ECollisionResponse GameTraceChannel2; // 0x6
	ECollisionResponse GameTraceChannel3; // 0x7
	ECollisionResponse GameTraceChannel4; // 0x8
	ECollisionResponse GameTraceChannel5; // 0x9
	ECollisionResponse GameTraceChannel6; // 0xa
	ECollisionResponse GameTraceChannel7; // 0xb
	ECollisionResponse GameTraceChannel8; // 0xc
	ECollisionResponse GameTraceChannel9; // 0xd
	ECollisionResponse GameTraceChannel10; // 0xe
	ECollisionResponse GameTraceChannel11; // 0xf
	ECollisionResponse GameTraceChannel12; // 0x10
	ECollisionResponse GameTraceChannel13; // 0x11
	ECollisionResponse GameTraceChannel14; // 0x12
	ECollisionResponse GameTraceChannel15; // 0x13
	ECollisionResponse GameTraceChannel16; // 0x14
	ECollisionResponse GameTraceChannel17; // 0x15
	ECollisionResponse GameTraceChannel18; // 0x16
	ECollisionResponse GameTraceChannel19; // 0x17
	ECollisionResponse GameTraceChannel20; // 0x18
	ECollisionResponse GameTraceChannel21; // 0x19
	ECollisionResponse GameTraceChannel22; // 0x1a
	ECollisionResponse GameTraceChannel23; // 0x1b
	ECollisionResponse GameTraceChannel24; // 0x1c
	ECollisionResponse GameTraceChannel25; // 0x1d
	ECollisionResponse GameTraceChannel26; // 0x1e
	ECollisionResponse GameTraceChannel27; // 0x1f
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FAnimNode_LayeredBoneBlend : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	TArray<FPoseLink> BlendPoses; // 0x28
	TArray<FInputBlendPose> LayerSetup; // 0x38
	TArray<float> BlendWeights; // 0x48
	bool bMeshSpaceRotationBlend; // 0x58
};

struct FBoneDamageAdjuster {
	FName BoneName; // 0x0
	float DamageMultiplier; // 0x8
};

struct FItemToDinoStatParams {
	EPrimalItemStat ItemStat; // 0x0
	EPrimalCharacterStatusValue DinoStat; // 0x1
	int32_t MinItemStatValue; // 0x4
	int32_t MaxItemStatValue; // 0x8
	int32_t MinDinoStatValue; // 0xc
	int32_t MaxDinoStatValue; // 0x10
	ESimpleCurve ConversionCurve; // 0x14
};

struct FEditedDocumentInfo {
	UObject* EditedObject; // 0x0
	FVector2D SavedViewOffset; // 0x8
	float SavedZoomAmount; // 0x10
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
};

struct FCameraCacheEntry {
	float TimeStamp; // 0x0
	FMinimalViewInfo POV; // 0x8
};

struct FBodyInstance {
	FVector Scale3D; // 0x4
	char bEnableCollision : 1; // 0x18
	FCollisionResponseContainer ResponseToChannels; // 0x1c
	FName CollisionProfileName; // 0x58
	ECollisionEnabled CollisionEnabled; // 0x60
	ECollisionChannel ObjectType; // 0x61
	FCollisionResponse CollisionResponses; // 0x68
	char bUseCCD : 1; // 0x98
	char bNotifyRigidBodyCollision : 1; // 0x98
	char bSimulatePhysics : 1; // 0x98
	char bAutoWeld : 1; // 0x98
	char bStartAwake : 1; // 0x98
	char bEnableGravity : 1; // 0x98
	char bUseSpecificBodyArmorType : 1; // 0x98
	char bIsShieldHolder : 1; // 0x99
	char bUseAsyncScene : 1; // 0x99
	char bUpdateMassWhenScaleChanges : 1; // 0x99
	ELockedAxis LockedAxisMode; // 0x9c
	FVector CustomLockedAxis; // 0xa0
	char bOverrideWalkableSlopeOnInstance : 1; // 0xc0
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xc4
	char bOverrideMaxDepenetrationVelocity : 1; // 0xcc
	float MaxDepenetrationVelocity; // 0xd0
	UPhysicalMaterial* PhysMaterialOverride; // 0xd8
	FVector COMNudge; // 0xe0
	ESleepFamily SleepFamily; // 0xec
	EPrimalEquipmentType BodyArmorType; // 0xed
	float MassScale; // 0xf0
	float AngularDamping; // 0xf4
	float LinearDamping; // 0xf8
	float MaxAngularVelocity; // 0xfc
	float PhysicsBlendWeight; // 0x100
	int32_t PositionSolverIterationCount; // 0x104
	int32_t VelocitySolverIterationCount; // 0x108
};

struct FTargetClassDamageScaler {
	AActor* TargetClass; // 0x0
	float DamageScale; // 0x8
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FPackedNormal Normal; // 0xc
	FColor Color; // 0x10
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FBoneModifierRange {
	FName BoneName; // 0x0
	FVector MinScale; // 0x8
	FVector MaxScale; // 0x14
	FVector MinTranslation; // 0x20
	FVector MaxTranslation; // 0x2c
	bool Recursive; // 0x38
};

struct FAnimNode_BlendListBase : FAnimNode_Base {
	TArray<FPoseLink> BlendPose; // 0x10
	TArray<float> BlendTime; // 0x20
	TArray<float> BlendWeights; // 0x30
	TArray<float> RemainingBlendTimes; // 0x40
	int32_t LastActiveChildIndex; // 0x50
};

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x80
	FSlateBrush ActiveFillBrush; // 0xf8
	FSlateBrush InactiveFillBrush; // 0x170
	FSlateBrush ArrowsImage; // 0x1e8
	FSlateColor ForegroundColor; // 0x260
	FMargin TextPadding; // 0x288
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x70
	float MOI; // 0x74
	float DampingRateFullThrottle; // 0x78
	float DampingRateZeroThrottleClutchEngaged; // 0x7c
	float DampingRateZeroThrottleClutchDisengaged; // 0x80
};

struct FLightmassMaterialInterfaceSettings {
	char bCastShadowAsMasked : 1; // 0x0
	float EmissiveBoost; // 0x4
	float DiffuseBoost; // 0x8
	float ExportResolutionScale; // 0xc
	float DistanceFieldPenumbraScale; // 0x10
	char bOverrideCastShadowAsMasked : 1; // 0x14
	char bOverrideEmissiveBoost : 1; // 0x14
	char bOverrideDiffuseBoost : 1; // 0x14
	char bOverrideExportResolutionScale : 1; // 0x14
	char bOverrideDistanceFieldPenumbraScale : 1; // 0x14
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FMorphTargetMap {
	FName Name; // 0x0
	UMorphTarget* MorphTarget; // 0x8
};

struct FGamePadKeyName {
	FKey Key; // 0x0
	FString Name; // 0x18
	UTexture2D* KeyIcon; // 0x28
};

struct FScoutVisionDinoAIData {
	APrimalDinoCharacter* Dino_5_3494A8514B761533D8CD4A907BDD7994; // 0x0
	double LastQueryTime_12_6D5D68BD49EA9166FED6B384D863C9FC; // 0x8
	bool IsFleeing_11_25C1975F442E47BAE2CAEA813FA0057E; // 0x10
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FAnimUpdateRateParameters {
	int32_t UpdateRate; // 0x0
	int32_t EvaluationRate; // 0x4
	bool bInterpolateSkippedFrames; // 0x8
	bool bSkipUpdate; // 0x9
	bool bSkipEvaluation; // 0xa
};

struct FOceanDinoSpawnEntry {
	FString EntryFriendlyName; // 0x0
	APrimalDinoCharacter* SpawnDinoClass; // 0x10
	float SpawnDinoWeight; // 0x18
	float EntrySpawnDistanceMultiplier; // 0x1c
	float SpawnZOffset; // 0x20
	float MinimumDepthFromWaterSurface; // 0x24
	float MaxSpawnZ; // 0x28
	float NetworkAndStasisRangeMultiplier; // 0x2c
	float MinimumAllowedFreeDepthForSpawn; // 0x30
	int32_t OverrideMaxValidSpawnPointAttempts; // 0x34
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
	FVector OrigActorLocation; // 0x40
	UFont* Font; // 0x50
	float FontScale; // 0x58
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

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FExtraEggItem {
	UPrimalItem* DropItem; // 0x0
	FName ActiveEventFilter; // 0x8
	APrimalDinoCharacter* ForDinoCharacter; // 0x10
	float DropChance; // 0x18
};

struct FLinkedZoneSpawnVolumeEntry {
	ANPCZoneSpawnVolume* LinkedZoneSpawnVolume; // 0x0
	TArray<AActor*> ZoneSpawnVolumeFloors; // 0x8
	TArray<FName> ZoneSpawnVolumeFloorTags; // 0x18
	float EntryWeight; // 0x28
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionBlueprintSettings BlueprintSettings; // 0x1c0
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1e0
	FFilePath SourceControlMaterial; // 0x200
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

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
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

struct FDinoSetup {
	APrimalDinoCharacter* DinoType; // 0x0
	UClass* DinoSoftReference; // 0x8
	FString DinoBlueprintPath; // 0x28
	FString DinoName; // 0x38
	int32_t DinoLevel; // 0x48
	char BasePointsPerStat[0xc]; // 0x4c
	char PlayerAddedPointsPerStat[0xc]; // 0x58
	FVector SpawnOffset; // 0x64
	EDinoTamedOrder DinoState; // 0x70
	TArray<EPrimalCharacterStatusValue> PrioritizeStats; // 0x78
	TArray<FItemSetup> TamedDinoInventory; // 0x88
	UPrimalItem* SaddleType; // 0x98
	UClass* SaddleSoftReference; // 0xa0
	FString SaddleBlueprintPath; // 0xc0
	float SaddleQuality; // 0xd0
	float SaddleMinRandomQuality; // 0xd4
	float RandomWeight; // 0xd8
	char bIsTamed : 1; // 0xdc
	char bIgnoreMaxTameLimit : 1; // 0xdc
	char bPreventSpawningAtTameLimit : 1; // 0xdc
	char bBlockTamedDialog : 1; // 0xdc
	char bAutoEquipSaddle : 1; // 0xdc
	char bUseFixedSpawnLevel : 1; // 0xdc
	float WildRandomScaleOverride; // 0xe0
	float DinoImprintingQuality; // 0xe4
	bool bNetInfoFromClient; // 0xe8
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
	int32_t CurveTypeFlags; // 0x80
};

struct FManagedBoneSetup {
	FName BoneName; // 0x0
	ETraceType TraceType; // 0x8
	char bNoHitDefaultToCenter : 1; // 0x9
	float StartOffset; // 0xc
	float LineTraceLength; // 0x10
	float LaunchSpeed; // 0x14
	float GravityOverride; // 0x18
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FLandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x0
};

struct FClusterNode {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
};

struct FMissionAudioData {
	FName PhaseName_2_77784CA246DC2280DE5E8F9F9807B4DA; // 0x0
	USoundBase* Intro_7_7E2E6FF74C32DBD90910289076EE0EE9; // 0x8
	USoundBase* Loop_8_762326CA4D0A22F1AE927FB5BF20D67F; // 0x10
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FNameScalarPair {
	FName MaterialParamName; // 0x0
	float Value; // 0x8
};

struct FAdminPlayerDataInfo {
	FString PlayerName; // 0x0
	FString PlayerSteamName; // 0x10
	FString SteamID; // 0x20
	int64_t LinkedPlayerID; // 0x30
	bool IsHost; // 0x38
};

struct FPlane : FVector {
	float W; // 0xc
};

struct FSearchBoxStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle TextBoxStyle; // 0x8
	FSlateFontInfo ActiveFontInfo; // 0x518
	FSlateBrush UpArrowImage; // 0x538
	FSlateBrush DownArrowImage; // 0x5b0
	FSlateBrush GlassImage; // 0x628
	FSlateBrush ClearImage; // 0x6a0
};

struct FGiantTurtle_Crop_Struct {
	char CurrentCropPhase_11_D4A687494C0F476E485D498CAE10DFAC; // 0x0
	UPrimalItemConsumableSeed_C* SeedItem_36_4F69BC5A46851C697E65AA81C01CD60D; // 0x8
	float CurrentFertilizerCache_34_46D423814653B40DC915828CB2ECD7E0; // 0x10
	UPrimalItemConsumableSeed_C* SeedItemClass_45_7CB3DB8949C6DD44EA9E2ABA7CB04AD2; // 0x18
	int32_t AmountOfFruit_48_984F84974133D4439B04DE886368D2E9; // 0x20
	float CropFruitFertilizerCache_51_AAD5EB4D4A251E18A67682A62DFAF98E; // 0x24
	int32_t LocationIndex_54_3BDB86CF45FEC7FE8D9D58AEAA3A505B; // 0x28
};

struct FGameModePrefix {
	FString Prefix; // 0x0
	FString GameMode; // 0x10
};

struct FItemCraftingCostOverride {
	UPrimalItem* ItemClass; // 0x0
	TArray<FCraftingResourceRequirement> BaseCraftingResourceRequirements; // 0x8
};

struct FDinoAncestorsEntryBlueprint {
	FString MaleName; // 0x0
	int32_t MaleDinoID1; // 0x10
	int32_t MaleDinoID2; // 0x14
	FString FemaleName; // 0x18
	int32_t FemaleDinoID1; // 0x28
	int32_t FemaleDinoID2; // 0x2c
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
};

struct FMaterialRelevance {
	char bOpaque : 1; // 0x0
	char bMasked : 1; // 0x0
	char bDistortion : 1; // 0x0
	char bSeparateTranslucency : 1; // 0x0
	char bNormalTranslucency : 1; // 0x0
	char bDisableDepthTest : 1; // 0x0
	char bSubsurfaceProfile : 1; // 0x0
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FSeatingSpot {
	int32_t SeatNumber; // 0x0
	FVector LocationOffset; // 0x4
	FRotator RotationOffset; // 0x10
};

struct FInstancedStaticMeshMappingInfo {
	UTexture2D* LightmapTexture; // 0x0
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
	float ScreenPercentageLerpScalar; // 0x24
	char bUseOldShader : 1; // 0x28
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
};

struct FCompanionEventData {
	char EventType; // 0x0
	FString EventTitle; // 0x8
	TArray<FCompanionEventSegmentData> EventSegmentArray; // 0x18
	float EventTotalDuration; // 0x28
	double EventStartTime; // 0x30
	int32_t CurrentSegmentIndex; // 0x38
	double LastSegmentStartTime; // 0x40
	double EventEndTime; // 0x48
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
};

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FTTFloatTrack : FTTTrackBase {
	UCurveFloat* CurveFloat; // 0x10
};

struct FCharacterAndControllerPair {
	AShooterCharacter* Character; // 0x0
	AShooterPlayerController* Controller; // 0x8
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FDynamicUndermeshVolumes_MapSet {
	FString Map; // 0x0
	TArray<FDynamicUndermeshVolumes_Data> volumes; // 0x10
};

struct FPrimalSnapshotPose {
	FString Name; // 0x0
	UAnimSequence* Sequence; // 0x10
	float Time; // 0x18
	bool Pedestal; // 0x1c
	FString PedestalBone; // 0x20
	FVector RootOffset; // 0x30
};

struct FFlockBehaviorData {
	FBoidBehavior Behavior_2_D6384EC4432A092BAA1F368BC22CCFBA; // 0x0
	float ServerRadius_5_8960461D4A9B615DDD4B5FA4CF38DFBF; // 0x40
	float RadialDamage_9_4C6B4EA04A83900D96B5D593FF1433B4; // 0x44
	UDamageType* RadialDamageType_12_A31156904638A105CDE143A20772A2B4; // 0x48
	float Speed_15_BEAB83254AE3E96568671BAE87A9B6C1; // 0x50
	TArray<FDamageTypeAdjuster> DamageAdjusters_26_DEF381C3447E4F5919917891550268FD; // 0x58
};

struct FScrollBarStyle : FSlateWidgetStyle {
	FSlateBrush HorizontalBackgroundImage; // 0x8
	FSlateBrush VerticalBackgroundImage; // 0x80
	FSlateBrush NormalThumbImage; // 0xf8
	FSlateBrush HoveredThumbImage; // 0x170
	FSlateBrush DraggedThumbImage; // 0x1e8
};

struct FCompanionEventSegmentData {
	float SegmentDuration; // 0x0
	FCompanionReactionData SegmentCompanionReaction; // 0x8
	char bMoveCompanionToLocation : 1; // 0xa8
	char bMakeCompanionLookAtSomething : 1; // 0xa8
	FVector MoveCompanionToLocationOffset; // 0xac
	AActor* MakeCompanionLookAtActor; // 0xb8
	FVector MakeCompanionLookAtLocation; // 0xc0
	float CompanionLocationInterpSpeed; // 0xcc
	float CompanionRotationInterpSpeed; // 0xd0
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FBoneModifierNamed {
	FName TheBoneName; // 0x0
	FBoneModifier TheBoneModifier; // 0x8
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0x38
	FBoneReference SourceBone; // 0x44
	bool bCopyTranslation; // 0x50
	bool bCopyRotation; // 0x51
	bool bCopyScale; // 0x52
};

struct FFishSnareData {
	TWeakObjectPtr<APrimalDinoCharacter> DinoCharacter; // 0x0
	float SnareTime; // 0x8
};

struct FSkyBoxLoadedStatus {
	UTexture2D* LoadedTextureResources[0x3]; // 0x8
};

struct FDinoAncestorsEntry {
	FString MaleName; // 0x0
	uint32_t MaleDinoID1; // 0x10
	uint32_t MaleDinoID2; // 0x14
	FString FemaleName; // 0x18
	uint32_t FemaleDinoID1; // 0x28
	uint32_t FemaleDinoID2; // 0x2c
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

struct FMapDescription {
	UTexture2D* MapImage; // 0x0
	FString MapDescription; // 0x8
	int32_t MinAscensionLevelRequired; // 0x18
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

struct FMeshProxySettings {
	int32_t ScreenSize; // 0x0
	int32_t TextureWidth; // 0x4
	int32_t TextureHeight; // 0x8
	bool bRecalculateNormals; // 0xc
	float HardAngleThreshold; // 0x10
	int32_t MergeDistance; // 0x14
	bool bUseClippingPlane; // 0x18
	float ClippingLevel; // 0x1c
	int32_t AxisIndex; // 0x20
	bool bPlaneNegativeHalfspace; // 0x24
};

struct FHLNALocalizedAudioEntry {
	TArray<FLocalizedSoundCueEntry> LocalizedSoundCues_3_2B6DF2754EEFC3031810EAAA25F6A57D; // 0x0
};

struct FSlateBrush {
	FVector2D ImageSize; // 0x0
	ESlateBrushDrawType DrawAs; // 0x8
	FMargin Margin; // 0xc
	FLinearColor Tint; // 0x1c
	FSlateColor TintColor; // 0x30
	ESlateBrushTileType Tiling; // 0x58
	ESlateBrushMirrorType Mirroring; // 0x59
	ESlateBrushImageType ImageType; // 0x5a
	UObject* ResourceObject; // 0x60
	FName ResourceName; // 0x68
	bool bIsDynamicallyLoaded; // 0x70
	bool bHasUObject; // 0x71
};

struct FStruct_HoverSkiffThrusterData {
	E_HoverSkiffSide ThrusterSide_11_1CE495404B575F3464BFD88D86E7EF41; // 0x0
	UParticleSystemComponent* ThrusterParticleComponent_3_0FF7EAAB4E88ED996811208DC8905C99; // 0x8
	UAudioComponent* ThrusterAudioComponent_5_05A2394C4D1205A92697948A5504A8A0; // 0x10
	UParticleSystemComponent* IntenseParticleComponent_8_4CFF1B66431C148E1D989D9A5A8CC48D; // 0x18
	FVector2D ThrusterVolumeRange_27_CF81D3FD4DE31AAEFA2E1ABB6AFF7F82; // 0x20
	FVector2D ThrusterPitchRange_30_BA43760545C00543D0097389ADA5BCFD; // 0x28
	float ThrusterScaleInterpSpeed_33_200BFEE64B55956F73126288D3F03CF0; // 0x30
	FVector BaseThrusterScale_24_0F972357417E6DFD9EFDE48947251F98; // 0x34
	bool bDidEngineBurst_Start_20_5AE4CDBD437B98DE283D49B8E10DD252; // 0x40
	bool bDidEngineBurst_Run_22_1E63AF1845E21AC78469BDB06EA9DE1F; // 0x41
	UParticleSystem* EngineBurstParticleTemplate_37_3F4A14D04AE1A41AB04AEA9AFB8E86B0; // 0x48
	USoundCue* EngineBurstSound_40_BF9376C84825143C14A88AA2696418B0; // 0x50
	FVector2D EngineBurstVolumeAndPitch_43_A28871D046F055CEC4B623AEB31F4868; // 0x58
};

struct FHotbarIconStruct {
	UTexture* Icon_6_917FA98646C38FB1DD8550A739F01D69; // 0x0
	int32_t Quantity_5_AC984AC14D5FC961A3E9C3BCF32B8EA2; // 0x8
};

struct FHordeCrateWave {
	int32_t MinNumOfNPCs; // 0x0
	int32_t MaxNumOfNPCs; // 0x4
	float TimeToPrepareForWave; // 0x8
	FHordeCrateNPCGroup NPCsToSpawn; // 0x10
};

struct FMissionPhase {
	FName Name; // 0x0
	FString DisplayText; // 0x8
	char bShowInUI : 1; // 0x18
	char bUseBPGetPhaseDisplayText : 1; // 0x18
	char bUseGeneratePhaseRequirements : 1; // 0x18
	char bAutoSwitchToNextPhase : 1; // 0x18
	char bIsLastPhase : 1; // 0x18
	float WaitTimeAfterPhaseCompletes; // 0x1c
	FName NextPhaseName; // 0x20
	FTimeRange AutoSwitchPhaseAttemptInterval; // 0x28
	USoundBase* PhaseStartSound; // 0x30
	USoundBase* PhaseEndSound; // 0x38
	USoundBase* PhaseMusicLoop; // 0x40
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FClassRemapping {
	UObject* FromClass; // 0x0
	UObject* ToClass; // 0x8
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FColorSetDefinition {
	FString RegionName; // 0x0
	TArray<FName> ColorEntryNames; // 0x10
	TArray<float> RandomWeights; // 0x20
	TArray<float> MinLevel; // 0x30
	TArray<float> MaxLevel; // 0x40
};

struct FTerrainInfo {
	AInstancedFoliageActor* FoliageActor; // 0x0
	TArray<FInstancedFoligeData> InstancedFoligeData; // 0x8
	uint16_t PGPropertiesBufferSize; // 0x18
	TArray<char> PGPropertiesBuffer; // 0x20
	int32_t Version; // 0x30
	TArray<float> FromFloatCacheInputs; // 0x38
	TArray<int32_t> FromFloatCacheRawOutputs; // 0x48
};

struct FBossEngramsSoftReferenceMapping {
	TArray<FEngramsSetSoftReferenceMapping> EngramSets; // 0x0
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
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
	float OneMinusFriction; // 0x130
	float RotationRateScale; // 0x134
	float CameraMotionBlurAmount; // 0x138
	EParticleScreenAlignment ScreenAlignment; // 0x13c
	EParticleAxisLock LockAxisFlag; // 0x13d
	FVector2D PivotOffset; // 0x140
};

struct FTribeData {
	FString TribeName; // 0x0
	double LastNameChangeTime; // 0x10
	uint32_t OwnerPlayerDataID; // 0x18
	int32_t TribeId; // 0x1c
	TArray<FString> MembersPlayerName; // 0x20
	TArray<uint32_t> MembersPlayerDataID; // 0x30
	TArray<char> MembersRankGroups; // 0x40
	TArray<double> SlotFreedTime; // 0x50
	TArray<uint32_t> TribeAdmins; // 0x60
	TArray<FTribeAlliance> TribeAlliances; // 0x70
	bool bSetGovernment; // 0x80
	FTribeGovernment TribeGovernment; // 0x84
	TArray<FPrimalPlayerCharacterConfigStruct> MembersConfigs; // 0x98
	TArray<FTribeWar> TribeWars; // 0xa8
	TArray<FString> TribeLog; // 0xb8
	int32_t LogIndex; // 0xc8
	TArray<FTribeRankGroup> TribeRankGroups; // 0xd0
	int32_t NumTribeDinos; // 0xe0
	double LastMergedTime; // 0xe8
};

struct FClassMultiplier {
	FString ClassName; // 0x0
	float Multiplier; // 0x10
};

struct FTriMeshCollisionData {
	TArray<FVector> Vertices; // 0x0
	TArray<FTriIndices> Indices; // 0x10
	char bFlipNormals : 1; // 0x20
};

struct FTekGrenadeLauncherSlot {
	UPrimalItem* AmmoType; // 0x0
	double LastFireTime; // 0x8
	bool bIsLoaded; // 0x10
};

struct FEnvFloatParam {
	float Value; // 0x0
	FName ParamName; // 0x4
};

struct FPointOfInterestData_ForCompanion {
	FPointOfInterestData PointData; // 0x0
	FPointOfInterestCompanionBehavior PointCompanionBehavior; // 0x140
};

struct FBuildPromotionBlueprintSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
};

struct FLandscapeSplineMeshEntry {
	UStaticMesh* Mesh; // 0x0
	TArray<UMaterialInterface*> MaterialOverrides; // 0x8
	char bCenterH : 1; // 0x18
	FVector2D Offset; // 0x1c
	char bScaleToWidth : 1; // 0x24
	FVector Scale; // 0x28
	LandscapeSplineMeshOrientation Orientation; // 0x34
	ESplineMeshAxis ForwardAxis; // 0x35
	ESplineMeshAxis UpAxis; // 0x36
};

struct FSoundClassAdjuster {
	FName SoundClass; // 0x0
	USoundClass* SoundClassObject; // 0x8
	float VolumeAdjuster; // 0x10
	float PitchAdjuster; // 0x14
	char bApplyToChildren : 1; // 0x18
	float VoiceCenterChannelVolumeAdjuster; // 0x1c
};

struct FOverrideAnimBlueprintEntry {
	UObject* FromBPClass; // 0x0
	UObject* ToBPClass; // 0x8
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x80
	FSlateBrush LeftShadowBrush; // 0xf8
	FSlateBrush RightShadowBrush; // 0x170
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	TWeakObjectPtr<USceneComponent> OverrideComponent; // 0x10
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FStringAssetReference {
	FString AssetLongPathname; // 0x0
};

struct FHairStyleDefinition {
	bool bIsHairStyleLocked; // 0x0
	FName UnlockHairStyleName; // 0x4
	FString HairStyleName; // 0x10
	USkeletalMesh* HairMeshMale; // 0x20
	float MaleBeginHairMorphTargetRange; // 0x28
	USkeletalMesh* HairMeshFemale; // 0x30
	float FemaleBeginHairMorphTargetRange; // 0x38
};

struct FEdGraphSchemaAction {
	FText MenuDescription; // 0x8
	FString TooltipDescription; // 0x30
	FString Category; // 0x40
	FString Keywords; // 0x50
	int32_t Grouping; // 0x60
	int32_t SectionID; // 0x64
	FText CachedSearchTitle; // 0x68
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

