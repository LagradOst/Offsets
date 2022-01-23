// Created by BlueFire1337
// Updated 2021-10-25
// Generated 2022-01-23

#pragma once

struct FYPlayerSlot {
	FUniqueNetIdRepl m_uniqueId; // 0x0
	FString m_playerName; // 0x28
};

struct FPSCPool {
	TArray<FPSCPoolElem> FreeElements; // 0x0
	TArray<UParticleSystemComponent*> InUseComponents_Auto; // 0x10
	TArray<UParticleSystemComponent*> InUseComponents_Manual; // 0x20
};

struct FRigUnit_SetRelativeTransformForItem : FRigUnitMutable {
	FRigElementKey Child; // 0x68
	FRigElementKey Parent; // 0x74
	bool bParentInitial; // 0x80
	FTransform RelativeTransform; // 0x90
	float weight; // 0xc0
	bool bPropagateToChildren; // 0xc4
	FCachedRigElement CachedChild; // 0xc8
	FCachedRigElement CachedParent; // 0xdc
};

struct FPrimaryAssetRules {
	int32_t Priority; // 0x0
	int32_t chunkID; // 0x4
	bool bApplyRecursively; // 0x8
	EPrimaryAssetCookRule CookRule; // 0x9
};

struct FAdminIncrementPlayerStatisticVersionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FYDebugClearEntitlements {
	FString epicAccountId; // 0x0
};

struct FYUIMissionLineStepInfo {
	FString m_stepId; // 0x0
	FText m_title; // 0x10
	FText m_stepTitle; // 0x28
	FText m_popupDescription; // 0x40
	FText m_missionStepNpcText; // 0x58
	FDataTableRowHandle m_stepEntry; // 0x70
	int32_t m_startProgress; // 0x80
	int32_t m_maxProgress; // 0x84
	UTexture2D* m_stepIcon; // 0x88
	bool shouldShowPopup; // 0x90
	bool m_initialized; // 0x91
	bool m_ismissionCompletedEntry; // 0x92
};

struct FEditorImportExportTestDefinition {
	FFilePath ImportFilePath; // 0x0
	FString ExportFileExtension; // 0x10
	bool bSkipExport; // 0x20
	TArray<FImportFactorySettingValues> FactorySettings; // 0x28
};

struct FMultiplayerListVirtualMachineSummariesResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	FString SkipToken; // 0x10
	TArray<UPlayFabJsonObject*> VirtualMachines; // 0x20
};

struct FGroupsGetGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString GroupName; // 0x18
};

struct FNiagaraParameterScopeInfo {
	ENiagaraParameterScope Scope; // 0x0
	FString NamespaceString; // 0x8
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

struct FYGivePlayerSeasonGamemodeRankRequest {
	FString UserId; // 0x0
	FString GameMode; // 0x10
	int32_t rankIncrement; // 0x20
};

struct FRigUnit_AccumulateQuatMul : FRigUnit_SimBase {
	FQuat Multiplier; // 0x10
	FQuat InitialValue; // 0x20
	bool bFlipOrder; // 0x30
	bool bIntegrateDeltaTime; // 0x31
	FQuat Result; // 0x40
	FQuat AccumulatedValue; // 0x50
};

struct FRigUnit_DeltaFromPreviousVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	FVector Delta; // 0x14
	FVector PreviousValue; // 0x20
	FVector Cache; // 0x2c
};

struct FRigUnit_MathQuaternionEquals : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	bool Result; // 0x30
};

struct FYPlayerMatchBIStats : FYBaseAnalyticsEvent {
	int32_t shots; // 0xa8
	int32_t hits; // 0xac
	int32_t kills; // 0xb0
	int32_t damage_done_to_AI; // 0xb4
	int32_t damage_received_by_AI; // 0xb8
	int32_t damage_received_by_players; // 0xbc
	int32_t shield_damage_received_by_AI; // 0xc0
	int32_t shield_damage_received_by_players; // 0xc4
	int32_t damage_done_to_players; // 0xc8
	int32_t damage_received_by_storm; // 0xcc
	int32_t AI_kills; // 0xd0
	int32_t match_time_death; // 0xd4
	int32_t match_time_escape; // 0xd8
	int32_t time_since_user_joined; // 0xdc
	bool match_left; // 0xe0
	int32_t spawn_location_x; // 0xe4
	int32_t spawn_location_y; // 0xe8
	FString escape_ship_id; // 0xf0
	float current_bag_weight; // 0x100
	float max_bag_weight; // 0x104
	float max_safe_weight; // 0x108
	float current_safe_weight; // 0x10c
};

struct FYActorUIWidgetData {
	TSoftObjectPtr<UTexture2D> m_uiTexture; // 0x0
	FSlateColor m_color; // 0x28
	FText m_playerName; // 0x50
	FText m_title; // 0x68
	float m_renderDistance; // 0x80
	float m_minRenderDistance; // 0x84
	bool m_playAnimation; // 0x88
	bool m_attachPlayerNameToTitle; // 0x89
	bool m_showArrow; // 0x8a
	bool m_overrideColor; // 0x8b
	bool m_attachAmountToTitle; // 0x8c
	bool m_useOwnerTeamColor; // 0x8d
	bool m_calculateDistanceToPlayer; // 0x8e
	FDataTableRowHandle m_dataTableRowHandleContext; // 0x90
};

struct FScrollBoxStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
	FSlateBrush LeftShadowBrush; // 0x118
	FSlateBrush RightShadowBrush; // 0x1a0
};

struct FServerGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
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

struct FParticleReplayTrackKey {
	float Time; // 0x0
	float Duration; // 0x4
	int32_t ClipIDNumber; // 0x8
};

struct FStructRedirect {
	FName OldStructName; // 0x0
	FName NewStructName; // 0x8
};

struct FYVivoxLoginTokenRequest {
	FString Username; // 0x0
};

struct FLevelSequenceBindingReference {
	FString PackageName; // 0x0
	FSoftObjectPath ExternalObjectPath; // 0x10
	FString ObjectPath; // 0x28
};

struct FYDamageEvent {
	int32_t m_hitsCritical; // 0x0
	int32_t m_hitsTotal; // 0x4
	float m_amountDamage; // 0x8
	float m_timestamp; // 0xc
	float m_distance; // 0x10
	AActor* m_damageCauser; // 0x18
	FYDamageOriginInfo m_damageOriginInfo; // 0x20
	FYDamageCauserInfo m_damageCauserInfo; // 0x48
};

struct FHorizonTweenEventWidgetColorFromToParameters : FHorizonTweenEventLinearColorParameters {
	TWeakObjectPtr<UWidget> TweenTargetWeakPtr; // 0x238
};

struct FPhysicalMaterialInput {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	FExpressionInput Input; // 0x8
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

struct FMovieSceneCameraShakeSectionData {
	UMatineeCameraShake* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
};

struct FCurveEdTab {
	FString TabName; // 0x0
	TArray<FCurveEdEntry> Curves; // 0x10
	float ViewStartInput; // 0x20
	float ViewEndInput; // 0x24
	float ViewStartOutput; // 0x28
	float ViewEndOutput; // 0x2c
};

struct FMathRBFInterpolateVectorXform_Target {
	FVector Target; // 0x0
	FTransform Value; // 0x10
};

struct FYBaseModRow : FYItemDataTableRowBase {
	int32_t m_shortModId; // 0x310
	EYModificationSlotType m_modType; // 0x314
	TArray<FYGameplayAttributeModifier> m_attributeMods; // 0x318
	TSoftObjectPtr<UObject> m_mesh; // 0x328
	FDataTableRowHandle m_perkRowHandle; // 0x350
	TArray<FYOverridenModInstanceData> m_perHandlePropertyDefinition; // 0x360
};

struct FRigUnit_TimeOffsetVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	float SecondsAgo; // 0x14
	int32_t BufferSize; // 0x18
	float TimeRange; // 0x1c
	FVector Result; // 0x20
	TArray<FVector> Buffer; // 0x30
	TArray<float> DeltaTimes; // 0x40
	int32_t LastInsertIndex; // 0x50
	int32_t UpperBound; // 0x54
};

struct FYSceneCameraDataAssociation {
	TArray<FYSceneCameraDataRuntimeEntry> m_runtimeEntries; // 0x0
};

struct FYSetActiveCharacterArchetypeResponse {
	bool SUCCESS; // 0x0
	FYCharacterVanity returnVanity; // 0x8
};

struct FRigUnit_ModifyBoneTransforms : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_ModifyBoneTransforms_PerBone> BoneToModify; // 0x68
	float weight; // 0x78
	float WeightMinimum; // 0x7c
	float WeightMaximum; // 0x80
	EControlRigModifyBoneMode Mode; // 0x84
	FRigUnit_ModifyBoneTransforms_WorkData WorkData; // 0x88
};

struct FPlayFabLoginResultCommon : FPlayFabResultCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x8
};

struct FRandomStream {
	int32_t InitialSeed; // 0x0
	int32_t Seed; // 0x4
};

struct FYContractObjective {
	EYContractObjectiveType m_objectiveType; // 0x0
	int32_t m_objectiveMaxProgress; // 0x4
	FText m_objectiveDescription; // 0x8
	FDataTableRowHandle m_deadDropLocation; // 0x20
	FDataTableRowHandle m_deadDropItemRowHandle; // 0x30
	EYKillType m_killTarget; // 0x40
	TArray<EYDeviceCategory> m_allowedWeaponCategories; // 0x48
	TArray<FDataTableRowHandle> m_allowedSpecificWeapons; // 0x58
	EYEnemyType m_specificAIEnemyTypeToKill; // 0x68
	FDataTableRowHandle m_itemToOwnRowHandle; // 0x70
	FYContractObjectiveConditions m_objectiveConditions; // 0x80
};

struct FServerGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FRigUnit_CCDIK_RotationLimit {
	FName Bone; // 0x0
	float Limit; // 0x8
};

struct FYDurabilityAnalyticsEvent : FYBaseAnalyticsEvent {
	FString Status; // 0xa8
	FString item_id; // 0xb8
	FString item_instance_id; // 0xc8
	FString item_name; // 0xd8
	FString item_type; // 0xe8
	FString item_rarity; // 0xf8
	int32_t damage_taken; // 0x108
	int32_t used; // 0x10c
	int32_t current_durability; // 0x110
	int32_t max_durability; // 0x114
};

struct FYCraftedItemModsData {
	TArray<FString> modsIds; // 0x0
	TArray<FString> modsRoll; // 0x10
};

struct FYUserStateChange {
	FString m_userId; // 0x0
	FString m_playfabId; // 0x10
	EYUserStateChangeType m_stateChange; // 0x20
};

struct FWaterBodyHeightmapSettings {
	EWaterBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FWaterFalloffSettings FalloffSettings; // 0x4
	FWaterBrushEffects Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FYOverridenModInstanceData {
	FDataTableRowHandle m_rowHandle; // 0x0
	TArray<FYModAttachEntry> m_meshAttachments; // 0x10
	TArray<FYGameplayAttributeModifier> m_attributeMods; // 0x20
	FDataTableRowHandle m_fxCategoryHandle; // 0x30
	FDataTableRowHandle m_transportHandle; // 0x40
	UCurveFloat* m_overridenRecoilCurve; // 0x50
	FYFullscreenCrosshairData m_crosshairData; // 0x58
	bool m_shouldOffsetScope; // 0x88
	float m_scopeOffset; // 0x8c
};

struct FTrackInstanceInputComponent {
	UMovieSceneSection* Section; // 0x0
	int32_t OutputIndex; // 0x8
};

struct FYSeasonRow : FYDataTableRowBase {
	FString m_startDateTime; // 0x10
	FString m_endDateTime; // 0x20
	TArray<FYSeasonRewardLevel> m_seasonRewardLevels; // 0x30
	FYSeasonRewardLevel m_infiniteSeasonRewardLevel; // 0x40
	FText m_displayName; // 0x68
	FText m_description; // 0x80
	TSoftObjectPtr<UTexture2D> m_itemLogoAssociation; // 0x98
	TSoftObjectPtr<UTexture2D> m_logo; // 0xc0
	TSoftObjectPtr<UTexture2D> m_image; // 0xe8
	TSoftObjectPtr<UTexture2D> m_imageLarge; // 0x110
};

struct FFilterOptionPerAxis {
	bool bX; // 0x0
	bool bY; // 0x1
	bool bZ; // 0x2
};

struct FAIDamageEvent {
	float Amount; // 0x0
	FVector Location; // 0x4
	FVector HitLocation; // 0x10
	AActor* DamagedActor; // 0x20
	AActor* Instigator; // 0x28
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

struct FYGetUserCharacterVisualizationData {
	TArray<FString> UserId; // 0x0
};

struct FCompositionGraphCapturePasses {
	TArray<FString> Value; // 0x0
};

struct FClientValidateAmazonReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptId; // 0x38
	FString UserId; // 0x48
};

struct FNavLinkCustomInstanceData : FActorComponentInstanceData {
	uint32_t NavLinkUserId; // 0x68
};

struct FYPowerUpActivityStats : FYBaseActivityStats {
	int32_t power_up_step; // 0xb8
	FString power_up_id; // 0xc0
	bool contested; // 0xd0
	bool contested_long; // 0xd1
	bool dealt_damage; // 0xd2
	bool dealt_damage_long; // 0xd3
	int32_t time_since_user_joined; // 0xd4
	int32_t puzzle_variation; // 0xd8
};

struct FAnimNode_PowerIK_Ground : FAnimNode_SkeletalControlBase {
	FName CharacterRoot; // 0xc8
	FPowerIKBodyInertia BodyInertia; // 0xd0
	TArray<FPowerIKGroundFoot> Feet; // 0xe8
	float FeetDeltaSmoothSpeed; // 0xf8
	float RootRotationMultiplier; // 0xfc
	FPowerIKGroundCollision GroundCollision; // 0x100
	FPowerIKGroundSlope GroundSlope; // 0x114
	TArray<FPowerIKBoneBendDirection> BendDirections; // 0x1a8
	TArray<FPowerIKExcludedBone> ExcludedBones; // 0x1b8
	TArray<FPowerIKBoneLimit> JointLimits; // 0x1c8
	int32_t MaxSquashIterations; // 0x1e8
	int32_t MaxStretchIterations; // 0x1ec
	int32_t MaxFinalIterations; // 0x1f0
	bool AllowBoneTranslation; // 0x1f4
	float SolverAlpha; // 0x1f8
	float DebugDrawSize; // 0x1fc
};

struct FFrameNumber {
	int32_t Value; // 0x0
};

struct FColorGradePerRangeSettings {
	FVector4 Saturation; // 0x0
	FVector4 Contrast; // 0x10
	FVector4 Gamma; // 0x20
	FVector4 Gain; // 0x30
	FVector4 Offset; // 0x40
};

struct FAnimationSetup {
	UAnimSequence* AnimSequence; // 0x0
	UAnimSharingStateInstance* AnimBlueprint; // 0x8
	FPerPlatformInt NumRandomizedInstances; // 0x10
	FPerPlatformBool Enabled; // 0x14
};

struct FVertexToCreate {
	FMeshElementAttributeList VertexAttributes; // 0x0
	FVertexID OriginalVertexID; // 0x10
};

struct FSingleAnimationPlayData {
	UAnimationAsset* AnimToPlay; // 0x0
	char bSavedLooping : 1; // 0x8
	char bSavedPlaying : 1; // 0x8
	float SavedPosition; // 0xc
	float SavedPlayRate; // 0x10
};

struct FAnimSegment {
	UAnimSequenceBase* AnimReference; // 0x0
	float StartPos; // 0x8
	float AnimStartTime; // 0xc
	float AnimEndTime; // 0x10
	float AnimPlayRate; // 0x14
	int32_t LoopingCount; // 0x18
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

struct FClientGetAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FYBaseAnalyticsEvent {
	FString Event; // 0x8
	FString title_id; // 0x18
	FString room_id; // 0x28
	bool is_valid; // 0x38
	FString squad_id; // 0x40
	FString Timestamp; // 0x50
	FString map_name; // 0x60
	FString Platform; // 0x70
	FString user_id; // 0x80
	FString match_phase_type; // 0x90
	int32_t match_phase_time; // 0xa0
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

struct FAnchorData {
	FMargin Offsets; // 0x0
	FAnchors Anchors; // 0x10
	FVector2D Alignment; // 0x20
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

struct FScalarParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel ParameterCurve; // 0x8
};

struct FRigUnit_SequenceExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
	FControlRigExecuteContext A; // 0x68
	FControlRigExecuteContext B; // 0xc8
	FControlRigExecuteContext C; // 0x128
	FControlRigExecuteContext D; // 0x188
};

struct FRigUnit_AccumulateFloatLerp : FRigUnit_SimBase {
	float TargetValue; // 0x8
	float InitialValue; // 0xc
	float Blend; // 0x10
	bool bIntegrateDeltaTime; // 0x14
	float Result; // 0x18
	float AccumulatedValue; // 0x1c
};

struct FRigUnit_MathIntClamp : FRigUnit_MathIntBase {
	int32_t Value; // 0x8
	int32_t Minimum; // 0xc
	int32_t Maximum; // 0x10
	int32_t Result; // 0x14
};

struct FAREnvironmentProbeUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FAnimSequenceTrackContainer {
	TArray<FRawAnimSequenceTrack> AnimationTracks; // 0x0
	TArray<FName> TrackNames; // 0x10
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

struct FRigConfiguration {
	URig* Rig; // 0x0
	TArray<FNameMapping> BoneMappingTable; // 0x8
};

struct FVectorRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FYDamageNumberEntry {
	UYWidget_DamageNumber* m_widget; // 0x0
};

struct FAdminGetContentListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	int32_t ItemCount; // 0x18
	int32_t TotalSize; // 0x1c
};

struct FInputScaleBias {
	float Scale; // 0x0
	float Bias; // 0x4
};

struct FGeomSelection {
	int32_t Type; // 0x0
	int32_t Index; // 0x4
	int32_t SelectionIndex; // 0x8
};

struct FYDebugActionTowardsUserName {
	FString ownerInternalUserId; // 0x0
	FString friendActionUserName; // 0x10
	int32_t actionRequest; // 0x20
};

struct FYContractFailCondition {
	FText m_failConditionName; // 0x0
};

struct FYAIAudio {
	FYAIBarkAudioInfo m_barkIdle; // 0x0
	FYAIBarkAudioInfo m_barkCombat; // 0x18
	FDataTableRowHandle m_stateEnterIdle; // 0x30
	FDataTableRowHandle m_stateEnterCombat; // 0x40
	FDataTableRowHandle m_death; // 0x50
	FDataTableRowHandle m_deathCritical; // 0x60
	FDataTableRowHandle m_barkCombatAlertBehindPlayer; // 0x70
	FDataTableRowHandle m_attackStartMelee; // 0x80
	FDataTableRowHandle m_attackStartRanged; // 0x90
	FDataTableRowHandle m_attackRangedFired; // 0xa0
	FDataTableRowHandle m_hitReaction; // 0xb0
	FDataTableRowHandle m_buffingStart; // 0xc0
	FDataTableRowHandle m_buffingInterrupt; // 0xd0
	FDataTableRowHandle m_summoningStart; // 0xe0
	FDataTableRowHandle m_summoningInterrupt; // 0xf0
	FDataTableRowHandle m_snipedReaction; // 0x100
	FDataTableRowHandle m_spawning; // 0x110
	FDataTableRowHandle m_spawningProjectile; // 0x120
	FDataTableRowHandle m_flinch; // 0x130
	FDataTableRowHandle m_wingsFlapping; // 0x140
	float m_wingsFlappingFadeIn; // 0x150
	float m_wingsFlappingFadeOut; // 0x154
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

struct FYPlayerAbilitiesAudioData {
	FDataTableRowHandle m_cloakStartSound; // 0x0
	FDataTableRowHandle m_cloakEndSound; // 0x10
};

struct FYPlayerStartCluster {
	TArray<AActor*> m_locations; // 0x0
	FVector m_centroid; // 0x10
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

struct FNiagaraScriptDataInterfaceCompileInfo {
	FName Name; // 0x0
	int32_t UserPtrIdx; // 0x8
	FNiagaraTypeDefinition Type; // 0x10
	FName RegisteredParameterMapRead; // 0x20
	FName RegisteredParameterMapWrite; // 0x28
	bool bIsPlaceholder; // 0x30
};

struct FYInsuredItems {
	FDataTableRowHandle m_handle; // 0x0
	TArray<FString> m_items; // 0x10
};

struct FYMissionReplicatedStateData {
	int32_t m_currentStepIndex; // 0x0
	int32_t m_previousStepIndex; // 0x4
	FString m_missionId; // 0x8
	EYMissionResultType m_resultType; // 0x18
};

struct FYRequestPlayerQuarterUpgradePurchase {
	FString UserId; // 0x0
};

struct FInsightsInsightsGetLimitsResponse : FPlayFabResultCommon {
	int32_t DefaultPerformanceLevel; // 0x8
	int32_t DefaultStorageRetentionDays; // 0xc
	int32_t StorageMaxRetentionDays; // 0x10
	int32_t StorageMinRetentionDays; // 0x14
	TArray<UPlayFabJsonObject*> SubMeters; // 0x18
};

struct FYMutingState {
	bool m_isMuted; // 0x0
	float m_durationMuted; // 0x4
	float m_timeStartedMuted; // 0x8
	int32_t m_amountOfTimeMuted; // 0x18
	EYMuteReason m_reason; // 0x1c
};

struct FDirectLinkMsg_CloseStreamRequest {
	int32_t RecipientStreamPort; // 0x0
};

struct FYLeaveSquadResponse {
	EYSquadActionResult Result; // 0x0
};

struct FYCSVMetaDataEntry {
	FString m_filePath; // 0x0
	int32_t m_settingsRow; // 0x10
	int32_t m_rowDataStart; // 0x14
	int32_t m_rowDataEnd; // 0x18
	int32_t m_widthDataStart; // 0x1c
	int32_t m_widthDataEnd; // 0x20
};

struct FYEzProfileInitializationData {
	FString m_triggerReason; // 0x0
	float m_timeToProfile; // 0x10
	EYEZProfileType m_type; // 0x14
	bool m_forceNewProfile; // 0x15
};

struct FAnimNode_PoseSnapshot : FAnimNode_Base {
	FName SnapshotName; // 0x10
	FPoseSnapshot Snapshot; // 0x18
	ESnapshotSourceMode Mode; // 0x50
};

struct FYFXCategoryMaterialParemeterEntry {
	FVector m_vectorParameter; // 0x0
	FName m_name; // 0xc
};

struct FYCommWheelAudioData {
	FDataTableRowHandle m_onOpenCommWheel; // 0x0
	FDataTableRowHandle m_onOpenSubCommWheel; // 0x10
	FDataTableRowHandle m_onAbortCommWheel; // 0x20
	FDataTableRowHandle m_onHoverOverItem; // 0x30
	FDataTableRowHandle m_onCommandInput; // 0x40
};

struct FServerUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FNiagaraEmitterNameSettingsRef {
	FName SystemName; // 0x0
	FString EmitterName; // 0x8
};

struct FTestDataStruct {
	uint16_t UInt16Field; // 0x0
	int64_t Int64Field; // 0x8
	int8_t Int8Field; // 0x10
};

struct FAdminSetPublishedRevisionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t Revision; // 0x10
	int32_t Version; // 0x14
};

struct FYUserFriendList {
	TArray<FYFriendEntry> entries; // 0x0
	FString ownerFriendInternalUserId; // 0x10
};

struct FRigUnit_SetBoneTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FTransform Transform; // 0x70
	FTransform Result; // 0xa0
	EBoneGetterSetterMode Space; // 0xd0
	float weight; // 0xd4
	bool bPropagateToChildren; // 0xd8
	FCachedRigElement CachedBone; // 0xdc
};

struct FYGameTipRow : FYDataTableRowBase {
	FText m_tipText; // 0x10
	float m_sustainDuration; // 0x28
};

struct FYClientUserInfo {
	FString UserId; // 0x0
	EYUserState State; // 0x10
	int32_t squadSize; // 0x14
};

struct FAnimNode_PowerIK_Walk : FAnimNode_SkeletalControlBase {
	FName CharacterRoot; // 0xc8
	float RootRotationMultiplier; // 0xd0
	FPowerIKBodyInertia BodyInertia; // 0xd4
	TArray<FPowerIKWalkingLimb> Limbs; // 0xe8
	float StepMaxReachDistance; // 0x104
	float StepDurationMultiplier; // 0x108
	float StepHeightMultiplier; // 0x10c
	UCurveFloat* StepHeightCurve; // 0x110
	UCurveFloat* StepSpeedCurve; // 0x118
	float TeleportDistance; // 0x120
	bool PrintTeleportWarning; // 0x124
	ECollisionChannel CollisionChannel; // 0x125
	bool TraceComplex; // 0x126
	TArray<FPowerIKBoneBendDirection> BendDirections; // 0x128
	TArray<FPowerIKExcludedBone> ExcludedBones; // 0x138
	TArray<FPowerIKBoneLimit> JointLimits; // 0x148
	int32_t MaxSquashIterations; // 0x158
	int32_t MaxStretchIterations; // 0x15c
	int32_t MaxFinalIterations; // 0x160
	bool AllowBoneTranslation; // 0x164
	float SolverAlpha; // 0x168
	float DebugDrawSize; // 0x16c
};

struct FClientGetPlayFabIDsFromKongregateIDsRequest : FPlayFabRequestCommon {
	FString KongregateIDs; // 0x8
};

struct FYAnnouncement {
	FString Msg; // 0x0
	EYChannelType ChannelType; // 0x10
};

struct FYUIWeaponAmmoData {
	int32_t m_weaponMagazineSize; // 0x0
	int32_t m_totalAmmoCompatibleWithWeaponInBag; // 0x4
};

struct FCollisionResponse {
	FCollisionResponseContainer ResponseToChannels; // 0x0
	TArray<FResponseChannel> ResponseArray; // 0x20
};

struct FYBossEncounterTrackingData {
	FYBossEncounterActivityStats m_stats; // 0x0
	int32_t m_firstInteractionTimeStamp; // 0xc8
	int32_t m_lastInteractionTimeStamp; // 0xcc
};

struct FRigUnit_GetWorldTime : FRigUnit_AnimBase {
	float Year; // 0x8
	float Month; // 0xc
	float Day; // 0x10
	float WeekDay; // 0x14
	float Hours; // 0x18
	float Minutes; // 0x1c
	float Seconds; // 0x20
	float OverallSeconds; // 0x24
};

struct FTransformConstraint {
	FConstraintDescription Operator; // 0x0
	FName SourceNode; // 0x10
	FName TargetNode; // 0x18
	float weight; // 0x20
	bool bMaintainOffset; // 0x24
};

struct FYClaimGeneratorIncomeRequest {
	FString UserId; // 0x0
	FName generatorId; // 0x10
};

struct FYPersistentSessionResetRequest {
	FString desiredRegion; // 0x0
};

struct FLandscapeComponentMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FYSetMissionActive {
	FString UserId; // 0x0
	FString missionArcId; // 0x10
	FString missionId; // 0x20
	bool newState; // 0x30
};

struct FAttributesForEdge {
	FEdgeID EdgeID; // 0x0
	FMeshElementAttributeList EdgeAttributes; // 0x8
};

struct FServerRedeemMatchmakerTicketResult : FPlayFabResultCommon {
	FString Error; // 0x8
	bool TicketIsValid; // 0x18
	UPlayFabJsonObject* UserInfo; // 0x20
};

struct FYShowItems {
	FString UserId; // 0x0
};

struct FYGetQuestsResponse {
	FString UserId; // 0x0
	TArray<FYQuestState> quests; // 0x10
	int32_t playerNumOfRerollTokens; // 0x20
};

struct FFunctionCaller {
	FName FunctionName; // 0x0
};

struct FYSquadInfo {
	TArray<AYPlayerState*> m_members; // 0x0
	FString m_squadId; // 0x10
	int32_t m_size; // 0x20
};

struct FDataGetFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FYSquadMemberReadyUpNotification {
	FString UserId; // 0x0
	FYUserMatchmakingSettings matchmakingSettings; // 0x10
};

struct FYActivityLocationArray {
	TArray<AYActivityLocation*> m_locations; // 0x0
};

struct FClientGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FAdminUpdatePolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FClientGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FDataGetObjectsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* Objects; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FAdminGetTasksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
};

struct FYGetUsersCurrenciesResult {
	EYGetUsersCurrenciesResult Result; // 0x0
	TArray<FYUserCurrenciesItems> currencyItems; // 0x8
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

struct FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
};

struct FYContractProgress {
	FString contractId; // 0x0
	TArray<int32_t> objectivesProgress; // 0x10
};

struct FServerAuthenticateSessionTicketResult : FPlayFabResultCommon {
	bool IsSessionTicketExpired; // 0x8
	UPlayFabJsonObject* UserInfo; // 0x10
};

struct FNamedInterface {
	FName InterfaceName; // 0x0
	UObject* InterfaceObject; // 0x8
};

struct FMovieSceneRootEvaluationTemplateInstance {
	TWeakObjectPtr<UMovieSceneSequence> WeakRootSequence; // 0x0
	UMovieSceneCompiledDataManager* CompiledDataManager; // 0x8
	UMovieSceneEntitySystemLinker* EntitySystemLinker; // 0x18
	TMap<FMovieSceneSequenceID, UObject*> DirectorInstances; // 0x90
};

struct FHorizonTweenEventCustomCurve {
	FRuntimeFloatCurve CustomTweenCurve; // 0x0
};

struct FHorizonTweenEventSlateWidgetRotatorFromToParameters : FHorizonTweenEventFloatParameters {
	bool bShortestPath; // 0xb8
};

struct FNiagaraDetailsLevelScaleOverrides {
	float Low; // 0x0
	float Medium; // 0x4
	float High; // 0x8
	float Epic; // 0xc
	float Cine; // 0x10
};

struct FMathRBFInterpolateVectorQuat_Target {
	FVector Target; // 0x0
	FQuat Value; // 0x10
};

struct FStructure_HUD_ProgressBars {
	float StartValue_7_C4C15954450AAA4F616FDE8A91A5AC08; // 0x0
	float DesiredValue_3_2C117D094E4B9F91267EFF82B906EAFE; // 0x4
	float Alpha_5_D86EF2224E857BC7B927459986D8A1C8; // 0x8
	UProgressBar* ProgressBar_10_700A577046AAB0A82FA4BF9177426292; // 0x10
	float Speed_13_7B8385DB490AC27EBC94CAB250DF4EC3; // 0x18
	float Delay_15_34041B7E4CCFD62346ED32B285990076; // 0x1c
	EHorizonTweenLerpMode InterpolationMode_20_41F3AC9E428769FF838307B96C4C0791; // 0x20
	bool IsDone_22_CABD3814486E24C2C224A4BA4916C019; // 0x21
};

struct FYCurrentQueueInfo {
	FString GameMode; // 0x0
	FString Region; // 0x10
	int32_t numPlayers; // 0x20
	int32_t roomSize; // 0x24
};

struct FYLootCountData {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_rollCount; // 0x10
};

struct FYBaseWheelEntry : FTableRowBase {
	FText m_displayName; // 0x8
	EYWheelType m_wheelItemType; // 0x20
	FDataTableRowHandle m_uniqueRowHandleReference; // 0x28
	TSoftObjectPtr<UTexture2D> m_iconWheelTexture; // 0x38
};

struct FServerGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FInterpCurvePointFloat {
	float InVal; // 0x0
	float OutVal; // 0x4
	float ArriveTangent; // 0x8
	float LeaveTangent; // 0xc
	EInterpCurveMode InterpMode; // 0x10
};

struct FScalarParameterAtlasInstanceData {
	bool bIsUsedAsAtlasPosition; // 0x0
	TSoftObjectPtr<UCurveLinearColor> Curve; // 0x8
	TSoftObjectPtr<UCurveLinearColorAtlas> Atlas; // 0x30
};

struct FRigUnit_MathIntGreater : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FServerGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FYKilledAIAnalyticsEvents {
	TMap<FName, FYKilledAIAnalyticsEvent> m_killedAIAnalyticsEventsByName; // 0x0
};

struct FExpressionInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FYRemoveAllCustomItems {
	FString UserId; // 0x0
};

struct FRigUnit_MathBoolEquals : FRigUnit_MathBoolBase {
	bool A; // 0x8
	bool B; // 0x9
	bool Result; // 0xa
};

struct FBehaviorInfo {
	UInputBehavior* Behavior; // 0x0
};

struct FServerGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FYCharacterCustomizationMaterialPieceEntry {
	TSoftObjectPtr<UMaterialInterface> m_material; // 0x0
	int32_t m_index; // 0x28
};

struct FYStoreItemData {
	int32_t m_priceSoftCurrency; // 0x0
	int32_t m_priceHardCurrency; // 0x4
	int32_t m_priceRealMoney; // 0x8
	FText m_display_name; // 0x10
	FText m_description; // 0x28
	TSoftObjectPtr<UTexture2D> m_image; // 0x40
};

struct FSpriteCategoryInfo {
	FName Category; // 0x0
	FText DisplayName; // 0x8
	FText Description; // 0x20
};

struct FServerLoginWithXboxIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString Sandbox; // 0x20
	FString XboxId; // 0x30
};

struct FCloudScriptPostFunctionResultForScheduledTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
	UPlayFabJsonObject* ScheduledTaskId; // 0x20
};

struct FServerRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientUnlinkAppleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FBoneMirrorInfo {
	int32_t SourceIndex; // 0x0
	EAxis BoneFlipAxis; // 0x4
};

struct FMovieSceneTrackInstanceEntry {
	UObject* BoundObject; // 0x0
	UMovieSceneTrackInstance* TrackInstance; // 0x8
};

struct FRadialBoxSettings {
	bool bDistributeItemsEvenly; // 0x0
	float AngleBetweenItems; // 0x4
	float StartingAngle; // 0x8
};

struct FARPoseUpdatePayload {
	FTransform WorldTransform; // 0x0
	TArray<FTransform> JointTransforms; // 0x30
};

struct FRigUnit_AccumulateVectorLerp : FRigUnit_SimBase {
	FVector TargetValue; // 0x8
	FVector InitialValue; // 0x14
	float Blend; // 0x20
	bool bIntegrateDeltaTime; // 0x24
	FVector Result; // 0x28
	FVector AccumulatedValue; // 0x34
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

struct FYPlayerRankedSeasonGamemodeData {
	FString UserId; // 0x0
	FString GameMode; // 0x10
	int32_t rank; // 0x20
	int32_t highestRank; // 0x24
};

struct FAdminGetPolicyResponse : FPlayFabResultCommon {
	FString PolicyName; // 0x8
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FYClientConfiguration {
	FString surveyLink; // 0x0
	TArray<FYConfigEntry> dataTablesData; // 0x10
	FString matchmakingExchange; // 0x20
};

struct FProfilesGetEntityProfileResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Profile; // 0x8
};

struct FServerLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString PlayFabId; // 0x18
	FString XboxToken; // 0x28
};

struct FAdminSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FPreviewAttachedObjectPair {
	TSoftObjectPtr<UObject> AttachedObject; // 0x0
	UObject* Object; // 0x28
	FName AttachedTo; // 0x30
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

struct FNiagaraDataSetProperties {
	FNiagaraDataSetID ID; // 0x0
	TArray<FNiagaraVariable> Variables; // 0x10
};

struct FYAIStabilityDefinition {
	FName m_name; // 0x0
	float m_cooldown; // 0x8
	float m_stabilityThreshold; // 0xc
	UCurveFloat* m_stabilityMultiplierAfterTrigger; // 0x10
	float m_stabilityDecreasePerSecond; // 0x18
	bool m_isFlinchAnimation; // 0x1c
	TArray<FDataTableRowHandle> m_perksToApply; // 0x20
};

struct FYVanityUsage : FYBaseAnalyticsEvent {
	int32_t vanity_type; // 0xa8
	FString Location; // 0xb0
	FString item_id; // 0xc0
	FString item_name; // 0xd0
	int32_t time_since_match_start; // 0xe0
};

struct FRigUnit_SetTransform : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	bool bInitial; // 0x75
	FTransform Transform; // 0x80
	float weight; // 0xb0
	bool bPropagateToChildren; // 0xb4
	FCachedRigElement CachedIndex; // 0xb8
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

struct FServerNotifyMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FYUpgradeEntry {
	FString ID; // 0x0
	int32_t desiredLevel; // 0x10
	FYCustomItemInfo desiredItemState; // 0x18
};

struct FFilmStockSettings {
	float Slope; // 0x0
	float Toe; // 0x4
	float Shoulder; // 0x8
	float BlackClip; // 0xc
	float WhiteClip; // 0x10
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

struct FYActiveContractUIData {
	FString contractId; // 0x0
	EYContractStatus contractStatus; // 0x10
};

struct FVector2DParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
};

struct FRigUnit_AimBone_Target {
	float weight; // 0x0
	FVector Axis; // 0x4
	FVector Target; // 0x10
	EControlRigVectorKind Kind; // 0x1c
	FName Space; // 0x20
};

struct FHyperlinkStyle : FSlateWidgetStyle {
	FButtonStyle UnderlineStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x280
	FMargin Padding; // 0x4f0
};

struct FLandmassBrushEffectsList {
	FBrushEffectBlurring Blurring; // 0x0
	FBrushEffectCurlNoise CurlNoise; // 0x8
	FBrushEffectDisplacement Displacement; // 0x18
	FBrushEffectSmoothBlending SmoothBlending; // 0x40
	FBrushEffectTerracing Terracing; // 0x48
};

struct FRigUnit_MathTransformBinaryOp : FRigUnit_MathTransformBase {
	FTransform A; // 0x10
	FTransform B; // 0x40
	FTransform Result; // 0x70
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

struct FGroupsRemoveGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FARVideoFormat {
	int32_t FPS; // 0x0
	int32_t Width; // 0x4
	int32_t Height; // 0x8
};

struct FRigUnit_ItemExists : FRigUnit_ItemBase {
	FRigElementKey Item; // 0x8
	bool Exists; // 0x14
	FCachedRigElement CachedIndex; // 0x18
};

struct FSTR_AimAssistTarget {
	float AngleCOS_13_5D8346FA402979DE03A1E68BD674205F; // 0x0
	float Distance_16_A4030D4F431F92B26824329B80C346DC; // 0x4
	FVector ImpactPoint_5_C197FA754F578D0B7AB35A8CB4867CB7; // 0x8
	AActor* HitActor_8_5DFA8E4E48B6AA2191514D9E68245B1F; // 0x18
	FName HitBoneName_11_28888DC14E898D69B1EA5D90C17C7172; // 0x20
};

struct FClientUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x10
};

struct FRigUnit_NoiseVector : FRigUnit_MathBase {
	FVector Position; // 0x8
	FVector Speed; // 0x14
	FVector Frequency; // 0x20
	float Minimum; // 0x2c
	float Maximum; // 0x30
	FVector Result; // 0x34
	FVector Time; // 0x40
};

struct FServerLinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString PlayFabId; // 0x18
	FString ServerCustomId; // 0x28
};

struct FClientGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	UPlayFabJsonObject* ProfileConstraints; // 0x18
	FString XboxToken; // 0x20
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

struct FYDebugFindDropLocationVectorInfo {
	FVector m_locationContextOrigin; // 0x0
	FVector m_location; // 0xc
	FString m_description; // 0x18
	FColor m_color; // 0x28
};

struct FChaosCollisionEventRequestSettings {
	int32_t MaxNumberResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
	float MaxDistance; // 0x10
	EChaosCollisionSortMethod SortMethod; // 0x14
};

struct FMultiplayerListContainerImageTagsResponse : FPlayFabResultCommon {
	FString Tags; // 0x8
};

struct FAdminRevokeAllBansForUserRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FYClaimCompletedActiveContractRewardsRequest {
	FString UserId; // 0x0
	FString contractId; // 0x10
};

struct FYGameModeConfigurationUpdated {
	FYGameModeConfigEntry updatedData; // 0x0
};

struct FClientGetAdPlacementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AdPlacements; // 0x8
};

struct FClientGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FMultiplayerUpdateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
};

struct FMovieSceneBytePropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel ByteCurve; // 0x38
};

struct FYDebugSetAllCraftingMaterialsAmount {
	FString UserId; // 0x0
	int32_t materialAmount; // 0x10
};

struct FYVanityClearCustomItem {
	FString UserId; // 0x0
	FString custom_id; // 0x10
	int32_t slotId; // 0x20
};

struct FEasingComponentData {
	UMovieSceneSection* Section; // 0x0
};

struct FYDebugSimulateDateTimeShop {
	FString DateTime; // 0x0
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

struct FEyeTrackerGazeData {
	FVector GazeOrigin; // 0x0
	FVector GazeDirection; // 0xc
	FVector FixationPoint; // 0x18
	float ConfidenceValue; // 0x24
};

struct FRigUnit_ToRigSpace_Location : FRigUnit {
	FVector Location; // 0x8
	FVector Global; // 0x14
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

struct FClientUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString SharedGroupId; // 0x30
};

struct FConstraint {
	FBoneReference TargetBone; // 0x0
	EConstraintOffsetOption OffsetOption; // 0x10
	ETransformConstraintType TransformType; // 0x11
	FFilterOptionPerAxis PerAxis; // 0x12
};

struct FDialogueContextMapping {
	FDialogueContext Context; // 0x0
	USoundWave* SoundWave; // 0x18
	FString LocalizationKeyFormat; // 0x20
	UDialogueSoundWaveProxy* Proxy; // 0x30
};

struct FGroupsApplyToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingInvite; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
	UPlayFabJsonObject* Group; // 0x20
};

struct FRigUnit_ConvertTransform : FRigUnit {
	FTransform Input; // 0x10
	FEulerTransform Result; // 0x40
};

struct FServerGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FEngineServiceAuthGrant {
	FString Username; // 0x0
	FString UserToGrant; // 0x10
};

struct FMultiplayerListServerBackfillTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FYPlayerSetItemsEntry {
	FYPlayerSet SetData; // 0x0
	TArray<FYCustomItemInfo> Items; // 0xa0
};

struct FAnimGraphBlendOptions {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
};

struct FIntegralKey {
	float Time; // 0x0
	int32_t Value; // 0x4
};

struct FBlueprintInputAxisDelegateBinding : FBlueprintInputDelegateBinding {
	FName InputAxisName; // 0x4
	FName FunctionNameToBind; // 0xc
};

struct FRigUnit_MathIntToFloat : FRigUnit_MathIntBase {
	int32_t Value; // 0x8
	float Result; // 0xc
};

struct FRigUnit_ProjectTransformToNewParent : FRigUnit {
	FRigElementKey Child; // 0x8
	bool bChildInitial; // 0x14
	FRigElementKey OldParent; // 0x18
	bool bOldParentInitial; // 0x24
	FRigElementKey NewParent; // 0x28
	bool bNewParentInitial; // 0x34
	FTransform Transform; // 0x40
	FCachedRigElement CachedChild; // 0x70
	FCachedRigElement CachedOldParent; // 0x84
	FCachedRigElement CachedNewParent; // 0x98
};

struct FYEntitlementRow : FTableRowBase {
	FString m_entitlementName; // 0x8
	FDataTableRowHandle m_messageId; // 0x18
	TArray<FDataTableRowHandle> m_grants; // 0x28
};

struct FYClientConfiguratonUpdated {
	FYClientConfiguration config; // 0x0
};

struct FYFXCategoryMaterialFloatParemeterEntry {
	float m_floatParameter; // 0x0
	FName m_name; // 0x4
};

struct FYGetCraftingInProgressDataRequest {
	FString UserId; // 0x0
};

struct FRigUnit_MathFloatSelectBool : FRigUnit_MathFloatBase {
	bool Condition; // 0x8
	float IfTrue; // 0xc
	float IfFalse; // 0x10
	float Result; // 0x14
};

struct FYWeaponAnalyticsPerPlayer {
	TMap<FName, FYWeaponAnalyticsEvent> m_weaponAnalytics; // 0x0
};

struct FUpdateLevelStreamingLevelStatus {
	FName PackageName; // 0x0
	int32_t LODIndex; // 0x8
	char bNewShouldBeLoaded : 1; // 0xc
	char bNewShouldBeVisible : 1; // 0xc
	char bNewShouldBlockOnLoad : 1; // 0xc
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

struct FRigUnit_MathQuaternionSwingTwist : FRigUnit_MathQuaternionBase {
	FQuat Input; // 0x10
	FVector TwistAxis; // 0x20
	FQuat Swing; // 0x30
	FQuat Twist; // 0x40
};

struct FEnvDirection {
	UEnvQueryContext* LineFrom; // 0x0
	UEnvQueryContext* LineTo; // 0x8
	UEnvQueryContext* Rotation; // 0x10
	EEnvDirection DirMode; // 0x18
};

struct FYAbilityAnalyticsPerPlayer {
	FString m_playerNetID; // 0x0
	AActor* m_relevantPlayerActor; // 0x10
	TArray<FYAbilityAnalyticsEvent> m_abilities; // 0x18
};

struct FAISenseAffiliationFilter {
	char bDetectEnemies : 1; // 0x0
	char bDetectNeutrals : 1; // 0x0
	char bDetectFriendlies : 1; // 0x0
};

struct FClientAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FYControlsSettingsChangedEvent : FYBaseAnalyticsEvent {
	float sensitivity; // 0xa8
	float ads_sensitivity; // 0xac
	bool invert_x_axis; // 0xb0
	bool invert_y_axis; // 0xb1
	bool mouse_smoothing; // 0xb2
	bool fov_based_sensitivity_scaling; // 0xb3
	bool sprint_toggle; // 0xb4
	bool crouch_toggle; // 0xb5
	bool targeting_toggle; // 0xb6
	bool leaning_toggle; // 0xb7
};

struct FMultiplayerGetMultiplayerServerDetailsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString SessionId; // 0x30
};

struct FYPlayfabStoreItemsResult {
	FString StoreId; // 0x0
	FString CatalogVersion; // 0x10
	TArray<FYPlayfabStoreItemEntry> storeItems; // 0x20
};

struct FRigUnit_MathIntGreaterEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FRigUnit_MultiFABRIK_EndEffector {
	FName Bone; // 0x0
	FVector Location; // 0x8
};

struct FClientUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
};

struct FIntPoint {
	int32_t X; // 0x0
	int32_t Y; // 0x4
};

struct FRigUnit_SetMultiControlInteger : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlInteger_Entry> entries; // 0x68
	float weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FYDataTablePropertyData {
	UDataTable* m_weaponDatatable; // 0x0
	UDataTable* m_meleeWeaponDatatable; // 0x8
	UDataTable* m_abilityDataTable; // 0x10
	UDataTable* m_modDataTable; // 0x18
	UDataTable* m_sceneDataTable; // 0x20
	UDataTable* m_materialsDataTable; // 0x28
	UDataTable* m_keycardsDataTable; // 0x30
	UDataTable* m_currenciesDataTable; // 0x38
	UDataTable* m_ammunitionDataTable; // 0x40
	UDataTable* m_scrapingDataTable; // 0x48
	UDataTable* m_experienceDataTable; // 0x50
	UDataTable* m_loreItemsDataTable; // 0x58
	UDataTable* m_serverPerformanceTuningDataTable; // 0x60
	UDataTable* m_collectiblesTypesDataTable; // 0x68
	UDataTable* m_questItemsTypesDataTable; // 0x70
	UDataTable* m_shieldItemsDataTable; // 0x78
	UDataTable* m_helmetsDataTable; // 0x80
	UDataTable* m_aiArmorDataTable; // 0x88
	UDataTable* m_bagDataTable; // 0x90
	UDataTable* m_prospectorBadgeDataTable; // 0x98
	UDataTable* m_meleeVanityDataTable; // 0xa0
	UDataTable* m_characterCustomizationExplicitDataTable; // 0xa8
	UDataTable* m_characterCustomizationArchetypeDataTable; // 0xb0
	UDataTable* m_keybindingIconsDatatable; // 0xb8
	UDataTable* m_retentionBonusDatatable; // 0xc0
	UDataTable* m_prospectorRankDataTable; // 0xc8
	UDataTable* m_rankedSeasonDataTable; // 0xd0
	UDataTable* m_eosStatsDataTable; // 0xd8
	UDataTable* m_statsCombinationDataTable; // 0xe0
	UDataTable* m_metaDefaultItemsDataTable; // 0xe8
	UDataTable* m_gameSessionDataTable; // 0xf0
	UDataTable* m_impactDataTable; // 0xf8
	UDataTable* m_killImpactEffectsDataTable; // 0x100
	UDataTable* m_shieldBreakImpactEffectsDataTable; // 0x108
	UDataTable* m_fxDataTable; // 0x110
	UDataTable* m_characterCustomizationCategoryDataTable; // 0x118
	UDataTable* m_characterCustomizationDefaultSettingsDataTable; // 0x120
	UDataTable* m_perksDataTable; // 0x128
	UDataTable* m_transportDataTable; // 0x130
	UDataTable* m_lootItemsDataTable; // 0x138
	UDataTable* m_scopeTuningDataTable; // 0x140
	UDataTable* m_notificationDataTable; // 0x148
	UDataTable* m_matchmakingDataTable; // 0x150
	UDataTable* m_factionsDataTable; // 0x158
	UDataTable* m_contractsDataTable; // 0x160
	UDataTable* m_shopOffersDataTable; // 0x168
	UDataTable* m_playFabStoresDataTable; // 0x170
	UDataTable* m_seasonsDataTable; // 0x178
	UDataTable* m_cameraItemDataTable; // 0x180
	UDataTable* m_ammoTypesDataTable; // 0x188
	UDataTable* m_playerQuarterUpgradesDataTable; // 0x190
	UDataTable* m_techTreeNodesDataTable; // 0x198
	UDataTable* m_techTreeCategoriesDataTable; // 0x1a0
	UDataTable* m_passiveGeneratorsCrateRewards0DataTable; // 0x1a8
	UDataTable* m_passiveGeneratorsCrateRewards1DataTable; // 0x1b0
	UDataTable* m_passiveGeneratorsCrateRewards2DataTable; // 0x1b8
	UDataTable* m_passiveGeneratorsCrateRewards3DataTable; // 0x1c0
	UDataTable* m_passiveGeneratorsCrateRewards4DataTable; // 0x1c8
	UDataTable* m_passiveGeneratorsCrateRewards5DataTable; // 0x1d0
	UDataTable* m_passiveGeneratorsCrateRewards6DataTable; // 0x1d8
	UDataTable* m_passiveGeneratorsCrateRewards7DataTable; // 0x1e0
	UDataTable* m_passiveGeneratorsCrateRewards8DataTable; // 0x1e8
	UDataTable* m_passiveGeneratorsCrateRewards9DataTable; // 0x1f0
	UDataTable* m_passiveGeneratorsCrateRewards10DataTable; // 0x1f8
	UDataTable* m_passiveGeneratorsCrateRewardsDataTable; // 0x200
	UDataTable* m_passiveGeneratorsDataTable; // 0x208
	UDataTable* m_activityDataTable; // 0x210
	UDataTable* m_gameModesUIDataTable; // 0x218
	UDataTable* m_inboxMessagesDataTable; // 0x220
	UDataTable* m_grantsDataTable; // 0x228
	UDataTable* m_entitlementsDataTable; // 0x230
	UDataTable* m_weaponVanityDataTable; // 0x238
	TArray<UDataTable*> m_missionDataTables; // 0x240
	UDataTable* m_onboardingDataTable; // 0x250
	UDataTable* m_blockFeatureDueToOnboardingDataTable; // 0x258
	UDataTable* m_vehicleDataTable; // 0x260
	UDataTable* m_rebindableInputActionsDataTable; // 0x268
	UDataTable* m_materialDataTable; // 0x270
	UDataTable* m_materialGameDataTable; // 0x278
	UDataTable* m_metaSettingsDataTable; // 0x280
	UDataTable* m_modSettingsDataTable; // 0x288
	UDataTable* m_promotionsDataTable; // 0x290
	UDataTable* m_globalVanityDefaultsDataTable; // 0x298
	UDataTable* m_bannerDataTable; // 0x2a0
	UDataTable* m_deathEmoteDataTable; // 0x2a8
	UDataTable* m_normalEmotesDataTable; // 0x2b0
	UDataTable* m_defaultConfigurationDataTable; // 0x2b8
	UDataTable* m_popupWidgetsDataTable; // 0x2c0
	UDataTable* m_mapsInfosDataTable; // 0x2c8
	UDataTable* m_vehicleVanityDataTable; // 0x2d0
	UDataTable* m_droppodDataTable; // 0x2d8
	UDataTable* m_defaultFeatureTogglesTable; // 0x2e0
	UDataTable* m_chatSettingsDataTable; // 0x2e8
	UDataTable* m_developerCreditsDataTable; // 0x2f0
	UDataTable* m_awarenessNotificationDataTable; // 0x2f8
	UDataTable* m_playerAwarenessTuningDataTable; // 0x300
	UDataTable* m_statsSettingsDataTable; // 0x308
	UDataTable* m_upgradeDataTable; // 0x310
	UDataTable* m_npcDataTable; // 0x318
	UDataTable* m_npcCharacterArchetypeDatable; // 0x320
	UDataTable* m_npcCharacterArchetypeDatatableSets; // 0x328
	UDataTable* m_npcCharacterArchetypeDatatableItems; // 0x330
	UDataTable* m_socialProfilesDataTable; // 0x338
	UDataTable* m_prospectorLevelProgressionDataTable; // 0x340
	UDataTable* m_prospectorLevelRewardDataTable; // 0x348
	UDataTable* m_sprayVanityDataTable; // 0x350
	UDataTable* m_weaponCharmVanityDataTable; // 0x358
	UDataTable* m_petDataTable; // 0x360
	UDataTable* m_aiTuning; // 0x368
	UDataTable* m_aiSenseTriggerDataTable; // 0x370
	UDataTable* m_statKeysDataTable; // 0x378
	UDataTable* m_playerTuningDataTable; // 0x380
	UDataTable* m_lootTuningDataTable; // 0x388
	UDataTable* m_rarityDataTable; // 0x390
	UDataTable* m_characterCustomizationItemsDataTable; // 0x398
	UDataTable* m_explicitCustomizationDataTable; // 0x3a0
	UDataTable* m_characterCustomizationSetDataTable; // 0x3a8
	UDataTable* m_effortDataTable; // 0x3b0
	UDataTable* m_inventoryInsurancesDataTable; // 0x3b8
	UDataTable* m_bundlesDataTable; // 0x3c0
	UDataTable* m_bundlesPlatformDataTable; // 0x3c8
};

struct FCachedAnimStateArray {
	TArray<FCachedAnimStateData> States; // 0x0
};

struct FPOV {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	float FOV; // 0x18
};

struct FNameCurve : FIndexedCurve {
	TArray<FNameCurveKey> Keys; // 0x68
};

struct FAdminGetTaskInstanceRequest : FPlayFabRequestCommon {
	FString TaskInstanceId; // 0x8
};

struct FClientLinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	FString IdToken; // 0x28
};

struct FRigUnit_GetRelativeBoneTransform : FRigUnit {
	FName Bone; // 0x8
	FName Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedBone; // 0x50
	FCachedRigElement CachedSpace; // 0x64
};

struct FAdminGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FMovieSceneFadeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel FadeCurve; // 0x20
	FLinearColor FadeColor; // 0xc0
	char bFadeAudio : 1; // 0xd0
};

struct FMovieSceneSegmentIdentifier {
	int32_t IdentifierIndex; // 0x0
};

struct FHorizonTweenEventSceneComponentMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr; // 0x138
};

struct FYAbilityAnalyticsEvent : FYBaseAnalyticsEvent {
	FName ability_id; // 0xa8
	FString ability_name; // 0xb0
	int32_t ability_pickup_time; // 0xc0
	int32_t ability_pickup_user_time; // 0xc4
	int32_t ability_use_time; // 0xc8
	int32_t ability_use_user_time; // 0xcc
	int32_t location_x; // 0xd0
	int32_t location_y; // 0xd4
	int32_t location_z; // 0xd8
};

struct FYAimTargetInfo {
	AActor* m_targetActor; // 0x0
	FVector m_targetLocation; // 0x8
};

struct FClientOpenTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FYModItems {
	TArray<int32_t> M; // 0x0
};

struct FYQuestsUpdatedMessage {
	FString UserId; // 0x0
	TArray<FYQuestState> quests; // 0x10
};

struct FClientLoginWithFacebookRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FYAIRangedAttackMontageDefinition {
	FText m_attackName; // 0x0
	TSoftObjectPtr<UAnimMontage> m_animMontageToPlay; // 0x18
};

struct FRigUnit_ChainHarmonics_Reach {
	bool bEnabled; // 0x0
	FVector ReachTarget; // 0x4
	FVector ReachAxis; // 0x10
	float ReachMinimum; // 0x1c
	float ReachMaximum; // 0x20
	EControlRigAnimEasingType ReachEase; // 0x24
};

struct FYCarrouselData {
	TSoftObjectPtr<UTexture2D> m_texture; // 0x0
	FText m_headline; // 0x28
};

struct FWheelSetup {
	UVehicleWheel* WheelClass; // 0x0
	FName BoneName; // 0x8
	FVector AdditionalOffset; // 0x10
	bool bDisableSteering; // 0x1c
};

struct FYResourceSpawnActorRequest {
	TSoftClassPtr<UObject> m_actorClass; // 0x0
	FTransform m_transform; // 0x30
	AActor* m_owner; // 0x60
	FYInventoryItem m_inventoryItem; // 0x68
	TArray<FDataTableRowHandle> m_rowHandles; // 0x100
	UObject* m_specificClass; // 0x110
};

struct FInterpCurveFloat {
	TArray<FInterpCurvePointFloat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FTTVectorTrack : FTTPropertyTrack {
	UCurveVector* CurveVector; // 0x20
};

struct FMovieSceneVector2DKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector2D Vector; // 0x28
};

struct FControlRigDrawContainer {
	TArray<FControlRigDrawInstruction> Instructions; // 0x8
};

struct FYDebugRemoveAllMaterialsFromPlayerResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCustomItemInfo> returnedMaterials; // 0x20
};

struct FRigUnit_MathTransformMakeRelative : FRigUnit_MathTransformBase {
	FTransform Global; // 0x10
	FTransform Parent; // 0x40
	FTransform Local; // 0x70
};

struct FNiagaraGraphViewSettings {
	FVector2D Location; // 0x0
	float zoom; // 0x8
	bool bIsValid; // 0xc
};

struct FServerGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FDatasmithReimportOptions {
	bool bUpdateActors; // 0x0
	bool bRespawnDeletedActors; // 0x1
};

struct FYCraftedBlueprintInfo {
	FName blueprintName; // 0x0
	FString shopItemBelongsTo; // 0x8
	int32_t itemRarity; // 0x18
	FString itemBackendId; // 0x20
	FString baseItemId; // 0x30
	int32_t purchaseAmount; // 0x40
};

struct FTireConfigMaterialFriction {
	UPhysicalMaterial* PhysicalMaterial; // 0x0
	float FrictionScale; // 0x8
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

struct FYForceStartResponse {
	EYForceStartResult Error; // 0x0
};

struct FYClaimGeneratorIncomeResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString generatorId; // 0x20
	int32_t claimedAmount; // 0x30
	TArray<FYCurrencyItem> grantedCurrencies; // 0x38
	TArray<FYCurrencyItem> changedCurrenciesBalances; // 0x48
	TArray<FYCustomItemInfo> changedItems; // 0x58
	TArray<FYCustomItemInfo> changedMaterialsBalances; // 0x68
	TArray<FYCustomItemInfo> GrantedItems; // 0x78
	FYTimestamp lastClaimTime; // 0x88
	EYClaimGeneratorIncomeStatus Status; // 0x90
};

struct FAimTarget {
	float weight; // 0x0
	FTransform Transform; // 0x10
	FVector AlignVector; // 0x40
};

struct FVector4Distribution {
	FDistributionLookupTable Table; // 0x0
};

struct FLastLocationGatherInfo {
	UNetConnection* Connection; // 0x0
	FVector LastLocation; // 0x8
	FVector LastOutOfRangeLocationCheck; // 0x14
};

struct FDestructibleDebrisParameters {
	float DebrisLifetimeMin; // 0x0
	float DebrisLifetimeMax; // 0x4
	float DebrisMaxSeparationMin; // 0x8
	float DebrisMaxSeparationMax; // 0xc
	FBox ValidBounds; // 0x10
};

struct FYUplinkActivityStats : FYBaseActivityStats {
	int32_t time_since_user_joined; // 0xb8
	int32_t last_state; // 0xbc
	FString item_rarity; // 0xc0
	FString uplink_name; // 0xd0
};

struct FRigUnit_TwoBoneIKSimpleVectors : FRigUnit_HighlevelBase {
	FVector Root; // 0x8
	FVector PoleVector; // 0x14
	FVector Effector; // 0x20
	bool bEnableStretch; // 0x2c
	float StretchStartRatio; // 0x30
	float StretchMaximumRatio; // 0x34
	float BoneALength; // 0x38
	float BoneBLength; // 0x3c
	FVector Elbow; // 0x40
};

struct FYDebugResetPlayerRequest {
	FString UserId; // 0x0
};

struct FYStationServerCommandResult {
	EYStationCommandResultType Result; // 0x0
	FString Context; // 0x8
};

struct FRigUnit_DeltaFromPreviousFloat : FRigUnit_SimBase {
	float Value; // 0x8
	float Delta; // 0xc
	float PreviousValue; // 0x10
	float Cache; // 0x14
};

struct FClientGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterName; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ItemId; // 0x30
};

struct FInAppPurchaseProductRequest2 {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FHorizonTweenEventWidgetRotatorFromToParameters : FHorizonTweenEventFloatParameters {
	TWeakObjectPtr<UWidget> TweenTargetWeakPtr; // 0xb0
	bool bShortestPath; // 0xb8
};

struct FHipAdjustment {
	FBoneReference Hips; // 0x0
	float AdjustmentRatio; // 0x10
	float MaxRecoveryRate; // 0x14
};

struct FClientValidateIOSReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptData; // 0x38
};

struct FPrefabricatorPropertyAssetMapping {
	FSoftObjectPath AssetReference; // 0x0
	FString AssetClassName; // 0x18
	FName AssetObjectPath; // 0x28
	bool bUseQuotes; // 0x30
};

struct FYStatsTypeDataEntry {
	EYItemStatsType m_type; // 0x0
	FText m_name; // 0x8
	float m_baseValue; // 0x20
	float m_modifiedValue; // 0x24
	float m_difference; // 0x28
};

struct FMovieSceneVectorKeyStructBase : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FYPlayFabSquad {
	FString squadId; // 0x0
	TArray<FYPlayFabSquadMember> Members; // 0x10
};

struct FRichTextStyleRow : FTableRowBase {
	FTextBlockStyle TextStyle; // 0x8
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

struct FTrackToSkeletonMap {
	int32_t BoneTreeIndex; // 0x0
};

struct FPaperSpriteAtlasSlot {
	TSoftObjectPtr<UPaperSprite> SpriteRef; // 0x0
	int32_t AtlasIndex; // 0x28
	int32_t X; // 0x2c
	int32_t Y; // 0x30
	int32_t Width; // 0x34
	int32_t Height; // 0x38
};

struct FYGetUsersDataByUserIdsRequest {
	TArray<FString> userIds; // 0x0
};

struct FYPlayerRankedGamemodeData {
	FString GameMode; // 0x0
	int32_t rank; // 0x10
	int32_t highestRank; // 0x14
};

struct FNiagaraEventReceiverProperties {
	FName Name; // 0x0
	FName SourceEventGenerator; // 0x8
	FName SourceEmitter; // 0x10
};

struct FMovieSceneActorReferenceData : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneActorReferenceKey> KeyValues; // 0x40
};

struct FYBundleDataTableRowBase : FYDataTableRowBase {
	bool m_isEntitlement; // 0x10
	FYStoreItemData m_storeData; // 0x18
	TArray<FYPlatformStoreEntry> m_platformStoresData; // 0x80
	TArray<FYBundleEntry> m_itemCollection; // 0x90
};

struct FYDebugSocialNotification {
	FString UserId; // 0x0
	int32_t Type; // 0x10
};

struct FRigUnit_Clamp_Float : FRigUnit {
	float Value; // 0x8
	float Min; // 0xc
	float Max; // 0x10
	float Result; // 0x14
};

struct FYWhisper {
	FString from; // 0x0
	FString Msg; // 0x10
	FString to; // 0x20
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

struct FYTimeInDebugMenus : FYBaseAnalyticsEvent {
	float Time; // 0xa8
};

struct FYStatusEffectRuntimeData {
	float m_damagePerTick; // 0x0
	float m_damageTickFrequency; // 0x4
	FYDamageOriginInfo m_damageOriginInfo; // 0x8
	float m_lastDamageTickTimestamp; // 0x30
	TArray<TWeakObjectPtr<AActor>> m_actors; // 0x38
	TArray<FGuid> m_perkGuids; // 0x48
};

struct FRigVMMemoryStatistics {
	uint32_t RegisterCount; // 0x0
	uint32_t DataBytes; // 0x4
	uint32_t TotalBytes; // 0x8
};

struct FYUpdateCustomItemsRequest {
	FString UserId; // 0x0
	TArray<FYCustomItemInfo> itemsToUpdate; // 0x10
};

struct FYMissionState {
	FString missionId; // 0x0
	FString missionArcId; // 0x10
	int32_t Count; // 0x20
	bool Completed; // 0x24
	bool IsActive; // 0x25
	bool acknowledged; // 0x26
	bool receivedReward; // 0x27
};

struct FRigUnit_MathVectorSelectBool : FRigUnit_MathVectorBase {
	bool Condition; // 0x8
	FVector IfTrue; // 0xc
	FVector IfFalse; // 0x18
	FVector Result; // 0x24
};

struct FRigUnit_SetControlBool : FRigUnitMutable {
	FName Control; // 0x68
	bool BoolValue; // 0x70
	FCachedRigElement CachedControlIndex; // 0x74
};

struct FBoneChain {
	TArray<FBoneChainLink> BoneChain; // 0x0
};

struct FYSendAnnouncement {
	FString Msg; // 0x0
};

struct FClientCurrentGamesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	FString GameMode; // 0x18
	ERegion Region; // 0x28
	FString StatisticName; // 0x30
	UPlayFabJsonObject* TagFilter; // 0x40
};

struct FYAnalyticsHardwareStats : FYBaseAnalyticsEvent {
	FString graphic_device_name; // 0xa8
	FString graphic_device_driver_version; // 0xb8
	FString graphic_device_vendor; // 0xc8
	FString graphic_device_id; // 0xd8
	int32_t graphic_memory_size; // 0xe8
	int32_t graphic_memory_size_dedicated; // 0xec
	int32_t graphic_memory_size_shared; // 0xf0
	FString directx_feature_level; // 0xf8
	FString cpu_name; // 0x108
	int32_t cpu_model; // 0x118
	int32_t map_loading_time; // 0x11c
	int32_t cpu_stepping; // 0x120
	int32_t cpu_processor_frequency; // 0x124
	int32_t cpu_processor_count; // 0x128
	int32_t cpu_processor_real_count; // 0x12c
	int32_t cpu_processor_virtual_count; // 0x130
	int32_t system_memory_size; // 0x134
	FString system_memory_type; // 0x138
	FString os_name; // 0x148
	FString os_version; // 0x158
	FString hard_drive_type; // 0x168
	FString machine_name; // 0x178
};

struct FYContractsBoardsSettingsRow : FYDataTableRowBase {
	int32_t m_refreshHours24Utc; // 0x10
};

struct FCloudScriptRegisterQueuedFunctionRequest : FPlayFabRequestCommon {
	FString ConnectionString; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString FunctionName; // 0x20
	FString QueueName; // 0x30
};

struct FYGetOwnedCharacterArchetypesRequest {
	FString UserId; // 0x0
	TArray<FString> archetypeIds; // 0x10
};

struct FYPollMatchmakingStateResult {
	EYPlayfabMatchmakingState m_state; // 0x0
	FString m_matchmakingTicket; // 0x8
	FString m_matchTicket; // 0x18
};

struct FYFeatureToggles : FYDataTableRowBase {
	bool m_playerReplicationgClientSpawnDependency; // 0x10
	bool m_shouldServerRunClientFireRPCValidation; // 0x11
	bool m_isPactEnabledInRankedMode; // 0x12
	bool m_isPactEnabledInNonRankedMode; // 0x13
	bool m_chatEnabled; // 0x14
	bool m_voiceChatEnabled; // 0x15
	bool m_capsuleHitBoxesEnabled; // 0x16
	bool m_autoRequeueingEnabled; // 0x17
	bool m_useIdleDetection; // 0x18
	bool m_isInternalFriendsSystemEnabled; // 0x19
	bool m_enableSixthSenseWarning; // 0x1a
	bool m_enableSixthSenseWarningInRanked; // 0x1b
	bool m_glickoRatingEnabled; // 0x1c
	bool m_friendHandlingEnabled; // 0x1d
	bool m_enableColorBlindOptions; // 0x1e
	bool m_ledgeClimbingSystemEnabled; // 0x1f
	bool m_playerBuffsEnabled; // 0x20
	bool m_automaticImportPlatformFriends; // 0x21
	bool m_eosStatsEnabled; // 0x22
	bool m_canScrapWeapons; // 0x23
	bool m_canCraftWeapons; // 0x24
	bool m_shouldTraceServerRequests; // 0x25
	bool m_shouldTraceClientRequests; // 0x26
	bool m_isModFunctionalityEnabled; // 0x27
	bool m_useLootRandomSeedingLoot; // 0x28
	bool m_enableBugReporter; // 0x29
	bool m_requireOwnedModCrafting; // 0x2a
	bool m_allowMovingItemToBagOverWeightLimit; // 0x2b
	bool m_isProneEnabled; // 0x2c
	bool m_isLeaningEnabled; // 0x2d
	bool m_isSprintDashEnabled; // 0x2e
	bool m_isAccountLinkingEnabled; // 0x2f
	bool m_isFriendsImportEnabled; // 0x30
	bool m_showMatchMapsSelector; // 0x31
	bool m_newMeleeSystemEnabled; // 0x32
	bool m_enableEffortsComponent; // 0x33
	bool m_squadsEnabled; // 0x34
	bool m_socialEnabled; // 0x35
	bool m_sessionServerShutdownEnabled; // 0x36
	bool m_multiplayerStationEnabled; // 0x37
	bool m_replicationGraphEnabled; // 0x38
	bool m_multiRegionEnabled; // 0x39
	bool m_lootCollisionTraceEnabled; // 0x3a
	bool m_splitSoloAndSquadMatches; // 0x3b
	bool m_enableDeployTravelLoadingIndicator; // 0x3c
	bool m_isOnboardingEnabled; // 0x3d
	bool m_isPremiumShopEnabled; // 0x3e
	bool m_timeSliceWeaponAssetLoading; // 0x3f
	bool m_isTutorialEnabled; // 0x40
	bool m_isBiEnabledOldPipeline; // 0x41
	bool m_isBiEnabledNewPipeline; // 0x42
	bool m_flushLevelStreaming; // 0x43
	bool m_playfabCouponsEnabled; // 0x44
	bool m_useMGetForMatchmakingServerDetails; // 0x45
};

struct FPerBoneInterpolation {
	FBoneReference BoneReference; // 0x0
	float InterpolationSpeedPerSec; // 0x10
};

struct FYActivateContractRequest {
	FString UserId; // 0x0
	FString contractId; // 0x10
};

struct FServerGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FHeaderRowStyle : FSlateWidgetStyle {
	FTableColumnHeaderStyle ColumnStyle; // 0x8
	FTableColumnHeaderStyle LastColumnStyle; // 0x4d8
	FSplitterStyle ColumnSplitterStyle; // 0x9a8
	FSlateBrush BackgroundBrush; // 0xac0
	FSlateColor ForegroundColor; // 0xb48
};

struct FYPlayerMeleeData {
	float m_attackDuration; // 0x0
	float m_meleeAttackStrikeTime; // 0x4
	FDataTableRowHandle m_meleeTransportHandle; // 0x8
	EYGameplayContextType m_damageContextType; // 0x18
};

struct FCachedAnimRelevancyData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FMovieSceneAudioSectionTemplate : FMovieSceneEvalTemplate {
	UMovieSceneAudioSection* AudioSection; // 0x20
};

struct FYAITuningCallReinforcementsRow : FTableRowBase {
	float m_callReinforcementRadius; // 0x8
	FDataTableRowHandle m_callReinforcementDatatableRowName; // 0x10
	int32_t m_callReinforcementOnAllyCount; // 0x20
	float m_callReinforcementInterrupDamage; // 0x24
	float m_callReinforcementInterrupTime; // 0x28
	float m_callReinforcementCooldown; // 0x2c
	int32_t m_callReinforcementMaxCount; // 0x30
	int32_t m_callReinforcementWaves; // 0x34
};

struct FSpriteInstanceData {
	FMatrix Transform; // 0x0
	UPaperSprite* SourceSprite; // 0x40
	FColor VertexColor; // 0x48
	int32_t MaterialIndex; // 0x4c
};

struct FServerGrantItemsToUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FBoneFilter {
	bool bExcludeSelf; // 0x0
	FName BoneName; // 0x4
};

struct FAnimPhysSphericalLimit {
	FBoneReference DrivingBone; // 0x0
	FVector SphereLocalOffset; // 0x10
	float LimitRadius; // 0x1c
	ESphericalLimitType LimitType; // 0x20
};

struct FYRecentPlayedEntry {
	FYPlatformEntry m_platformEntry; // 0x0
	FYOutpostFriendInfo m_friendInfo; // 0x18
	int64_t m_timeRegistered; // 0x98
	bool m_friendInfoPending; // 0xa0
	bool m_isDebugEntry; // 0xa1
};

struct FYFriendActionUserName {
	FString desiredUserName; // 0x0
	FYFriendAction friendAction; // 0x10
};

struct FYOutpostFriendInfo {
	FString m_userId; // 0x0
	FYPlatformEntry m_platformEntry; // 0x10
	FString m_playerName; // 0x28
	EYFriendOnlineStatus m_onlineStatus; // 0x38
	EYUserState m_memberState; // 0x39
	EYFriendState m_friendState; // 0x3a
	int32_t m_squadSize; // 0x3c
	bool m_isInLocalPlayerSquad; // 0x40
	FDataTableRowHandle m_socialProfileRow; // 0x48
	FYUserMatchmakingSettings m_matchmakingSettings; // 0x58
};

struct FYShopItem {
	FDataTableRowHandle m_blueprintHandle; // 0x0
	EYItemRarityType m_itemRarity; // 0x10
	FString m_shopItemBelongsTo; // 0x18
};

struct FYItemSetUIData {
	FText m_name; // 0x0
	FText m_description; // 0x18
	FText m_flavorDescription; // 0x30
	TSoftObjectPtr<UTexture2D> m_largeIcon; // 0x48
	TSoftObjectPtr<UTexture2D> m_smallIcon; // 0x70
};

struct FBlueprintComponentChangedPropertyInfo {
	FName PropertyName; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* PropertyScope; // 0x10
};

struct FYGetGlobalVanity {
	FString UserId; // 0x0
};

struct FYPlayerUIHealthBarDeltaSettingsDetails {
	float m_deltaAdjustmentSpeed; // 0x0
	float m_deltaAdjustmentInitialDelay; // 0x4
	int32_t m_segmentSize; // 0x8
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

struct FYGameModeUIData : FYDataTableRowBase {
	EYMatchmakeGameModeType m_matchmakingGameModeType; // 0x10
	bool m_isRanked; // 0x11
	bool m_isTournamentMode; // 0x12
	FText m_gameModeName; // 0x18
	FText m_gameModeDescription; // 0x30
	TSoftObjectPtr<UTexture2D> m_gameModeIcon; // 0x48
	TSoftObjectPtr<UTexture2D> m_gameModeImage; // 0x70
	TSoftObjectPtr<UTexture2D> m_gameModeBackgroundImage; // 0x98
	TSoftObjectPtr<UTexture2D> m_gameModeSelectedBackgroundImageOverride; // 0xc0
	TSoftObjectPtr<UTexture2D> m_gameModeHoverBackgroundImageOverride; // 0xe8
};

struct FRigUnit_ToWorldSpace_Rotation : FRigUnit {
	FQuat Rotation; // 0x10
	FQuat World; // 0x20
};

struct FMovieSceneTrackEvaluationField {
	TArray<FMovieSceneTrackEvaluationFieldEntry> entries; // 0x0
};

struct FYDebugGiveProspectorLevelXP {
	int32_t xpIncrement; // 0x0
};

struct FYWeaponAnimationData {
	UAnimMontage* m_weaponAnimation; // 0x0
	UAnimMontage* m_weaponAnimationThirdPerson; // 0x8
	UAnimMontage* m_playerAnimationFirstPerson; // 0x10
	UAnimMontage* m_playerAnimationThirdPerson; // 0x18
	float m_desiredTuningPlayDuration; // 0x20
	float m_animationRateScaleOverride; // 0x24
};

struct FMediaSoundComponentSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FAnimNode_BlendListByInt : FAnimNode_BlendListBase {
	int32_t ActiveChildIndex; // 0x98
};

struct FServerRegisterGameResponse : FPlayFabResultCommon {
	FString LobbyId; // 0x8
};

struct FControlRigSettingsPerPinBool {
	TMap<FString, bool> Values; // 0x0
};

struct FPointWeightMap {
	TArray<float> Values; // 0x0
};

struct FAdminCreateCloudScriptTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FYWeaponFireDelayStateData {
	float m_fireDelay; // 0x0
	EYPlayerStateBlueprint m_playerState; // 0x4
	EYGameplayAttribute m_gameplayAttribute; // 0x5
};

struct FYTotalGainedCurrencyData {
	int32_t m_startAmount; // 0x0
	EYCurrencyType m_currencyType; // 0x4
	int32_t m_endAmount; // 0x8
	TArray<FYRewardEntry> m_perEntryReward; // 0x10
};

struct FAdminGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FVMFunctionSpecifier {
	FName Key; // 0x0
	FName Value; // 0x8
};

struct FWaterBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FYAISquadSpawnDefinition {
	FVector m_spawnLocation; // 0x0
	TArray<FTransform> m_subSpawnLocations; // 0x10
	FVector m_roamingLocationOverride; // 0x20
	float m_roamingRadiusOverride; // 0x2c
	FRotator m_spawnRotationOverride; // 0x30
	bool m_purgeSquadOnceNoPlayerClose; // 0x3c
	FString m_spawnContextString; // 0x40
	AActor* m_spawnContextActor; // 0x50
	FGameplayTagContainer m_gameplayTags; // 0x58
};

struct FParticleBurst {
	int32_t Count; // 0x0
	int32_t CountLow; // 0x4
	float Time; // 0x8
};

struct FMaterialLayersFunctions {
	TArray<UMaterialFunctionInterface*> Layers; // 0x0
	TArray<UMaterialFunctionInterface*> Blends; // 0x10
	TArray<bool> LayerStates; // 0x20
	FString KeyString; // 0x30
};

struct FYAddFriendResult {
	FString UserId; // 0x0
	FString OperationId; // 0x10
	EYFriendActionResult Result; // 0x20
};

struct FKSphereElem : FKShapeElem {
	FVector Center; // 0x30
	float Radius; // 0x3c
};

struct FRadialDamageEvent : FDamageEvent {
	FRadialDamageParams Params; // 0x10
	FVector Origin; // 0x24
	TArray<FHitResult> ComponentHits; // 0x30
};

struct FAnimNode_CurveSource : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	FName SourceBinding; // 0x20
	float Alpha; // 0x28
	TScriptInterface<ICurveSourceInterface> CurveSource; // 0x30
};

struct FNiagaraVariant {
	UObject* Object; // 0x0
	UNiagaraDataInterface* DataInterface; // 0x8
	TArray<char> Bytes; // 0x10
	ENiagaraVariantMode CurrentMode; // 0x20
};

struct FYDamageCauserInfo {
	FName m_damageCauserId; // 0x0
	FDataTableRowHandle m_damageInfoCauserRowHandle; // 0x8
	bool m_isPlayer; // 0x18
};

struct FAnimNode_PoseHandler : FAnimNode_AssetPlayerBase {
	UPoseAsset* PoseAsset; // 0x38
};

struct FYAbilityDataTableRow : FYWeaponDataTableBase {
	FText m_abilityName; // 0xa48
	FYAbilityActionEntry m_abilityAction; // 0xa60
	bool m_overrideLeftHand; // 0xa78
	TSoftClassPtr<UObject> m_statsWidget; // 0xa80
};

struct FYUpgradeRow : FYBaseModRow {
	TMap<EYItemRarityType, FYRaritySettingsEntry> m_raritySettings; // 0x370
	FYDataTableRowBase m_modTuningDataTableRow; // 0x3c0
};

struct FAnimNode_LinkedAnimGraph : FAnimNode_CustomProperty {
	TArray<FPoseLink> InputPoses; // 0x58
	TArray<FName> InputPoseNames; // 0x68
	UAnimInstance* InstanceClass; // 0x78
	FName Tag; // 0x80
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x9c
	char bPropagateNotifiesToLinkedInstances : 1; // 0x9c
};

struct FYDebugUpdateGlobalVanityData {
	FString UserId; // 0x0
	FString ID; // 0x10
	int32_t variation; // 0x20
};

struct FYInviteToSquad {
	FString fromId; // 0x0
	FString TargetId; // 0x10
};

struct FServerSendEmailFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EmailTemplateId; // 0x10
	FString PlayFabId; // 0x20
};

struct FRigUnit_GetControlRotator : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FRotator Rotator; // 0x14
	FRotator Minimum; // 0x20
	FRotator Maximum; // 0x2c
	FCachedRigElement CachedControlIndex; // 0x38
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

struct FAnimNode_TransitionPoseEvaluator : FAnimNode_Base {
	int32_t FramesToCachePose; // 0xe8
	EEvaluatorDataSource DataSource; // 0xf0
	EEvaluatorMode EvaluatorMode; // 0xf1
};

struct FInstancedStaticMeshComponentInstanceData : FSceneComponentInstanceData {
	UStaticMesh* StaticMesh; // 0xb8
	FInstancedStaticMeshLightMapInstanceData CachedStaticLighting; // 0xc0
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x100
	TArray<float> PerInstanceSMCustomData; // 0x110
	int32_t InstancingRandomSeed; // 0x140
};

struct FAITouchEvent {
	AActor* TouchReceiver; // 0x10
	AActor* OtherActor; // 0x18
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

struct FYSetAllowJoinRequest {
	FString SessionId; // 0x0
	bool allowJoin; // 0x10
};

struct FAIRequestID {
	uint32_t RequestID; // 0x0
};

struct FNavCollisionBox {
	FVector Offset; // 0x0
	FVector Extent; // 0xc
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

struct FAdminDeleteContentRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
};

struct FFrameRate {
	int32_t Numerator; // 0x0
	int32_t Denominator; // 0x4
};

struct FProfilesGetEntityProfilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool DataAsObject; // 0x10
	TArray<UPlayFabJsonObject*> Entities; // 0x18
};

struct FClientOpenTradeRequest : FPlayFabRequestCommon {
	FString AllowedPlayerIds; // 0x8
	FString OfferedInventoryInstanceIds; // 0x18
	FString RequestedCatalogItemIds; // 0x28
};

struct FRigUnit_ConvertEulerTransform : FRigUnit {
	FEulerTransform Input; // 0x8
	FTransform Result; // 0x30
};

struct FMovieSceneSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	TArray<FMovieSceneNestedSequenceTransform> NestedTransforms; // 0x10
};

struct FPhysicalAnimationProfile {
	FName ProfileName; // 0x0
	FPhysicalAnimationData PhysicalAnimationData; // 0x8
};

struct FYVanityAmountUpdatedData {
	TArray<FYVanityBackendItemInfo> updatedVanityItems; // 0x0
};

struct FSplineInstanceData : FSceneComponentInstanceData {
	bool bSplineHasBeenEdited; // 0xb8
	FSplineCurves SplineCurves; // 0xc0
	FSplineCurves SplineCurvesPreUCS; // 0x130
};

struct FClientGetPurchaseResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString PaymentProvider; // 0x18
	FString PurchaseDate; // 0x28
	FString TransactionId; // 0x38
	FString TransactionStatus; // 0x48
};

struct FRigUnit_UnaryQuaternionOp : FRigUnit {
	FQuat Argument; // 0x10
	FQuat Result; // 0x20
};

struct FMovieSceneEvaluationGroup {
	TArray<FMovieSceneEvaluationGroupLUTIndex> LUTIndices; // 0x0
	TArray<FMovieSceneFieldEntry_EvaluationTrack> TrackLUT; // 0x10
	TArray<FMovieSceneFieldEntry_ChildTemplate> SectionLUT; // 0x20
};

struct FServerRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FSubmixEffectDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	float DelayLength; // 0x8
};

struct FAdminResetPasswordRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Password; // 0x10
	FString Token; // 0x20
};

struct FRigUnit_AccumulateVectorRange : FRigUnit_SimBase {
	FVector Value; // 0x8
	FVector Minimum; // 0x14
	FVector Maximum; // 0x20
	FVector AccumulatedMinimum; // 0x2c
	FVector AccumulatedMaximum; // 0x38
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

struct FGroupsDeleteGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FEditorImportWorkflowDefinition {
	FFilePath ImportFilePath; // 0x0
	TArray<FImportFactorySettingValues> FactorySettings; // 0x10
};

struct FYActiveVanityCustomizationInitializatonData {
	TSoftObjectPtr<UStaticMesh> m_staticMesh; // 0x0
	TSoftObjectPtr<USkeletalMesh> m_skeletalMesh; // 0x28
	FDataTableRowHandle m_rowHandle; // 0x50
	FYInventoryItem m_desiredInventoryItem; // 0x60
	EYVanityType m_vanityType; // 0xf8
};

struct FYPlayerAutomationData {
	FYAutomationLoadingMetrics m_loadingMetrics; // 0x0
	bool m_finishedInitialization; // 0x50
};

struct FClientUnlinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FEQSParametrizedQueryExecutionRequest {
	UEnvQuery* QueryTemplate; // 0x0
	TArray<FAIDynamicParam> QueryConfig; // 0x8
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18
	EEnvQueryRunMode RunMode; // 0x40
	char bUseBBKeyForQueryTemplate : 1; // 0x44
};

struct FRigUnit_MathRBFInterpolateVectorBase : FRigUnit_MathRBFInterpolateBase {
	FVector Input; // 0x8
	ERBFVectorDistanceType DistanceFunction; // 0x14
	ERBFKernelType SmoothingFunction; // 0x15
	float SmoothingRadius; // 0x18
	bool bNormalizeOutput; // 0x1c
	FRigUnit_MathRBFInterpolateVectorWorkData WorkData; // 0x20
};

struct FYRepairItemResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCurrencyItem> changedCurrencies; // 0x20
	TArray<FYCustomItemInfo> changedItems; // 0x30
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

struct FPIELoginSettingsInternal {
	FString ID; // 0x0
	FString Token; // 0x10
	FString Type; // 0x20
	EYLoginAuthType m_overridenAuthType; // 0x30
	TArray<char> TokenBytes; // 0x38
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

struct FRecordedTransformTrack {
	TArray<FRecordedFrame> Records; // 0x0
};

struct FARCameraIntrinsics {
	FIntPoint ImageResolution; // 0x0
	FVector2D FocalLength; // 0x8
	FVector2D PrincipalPoint; // 0x10
};

struct FStructSerializerMapTestStruct {
	TMap<int32_t, FString> IntToStr; // 0x0
	TMap<FString, FString> StrToStr; // 0x50
	TMap<FString, FVector> StrToVec; // 0xa0
	TMap<FString, FStructSerializerBuiltinTestStruct> StrToStruct; // 0xf0
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

struct FRigUnit_MathFloatIsNearlyZero : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Tolerance; // 0xc
	bool Result; // 0x10
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

struct FMathRBFInterpolateVectorFloat_Target {
	FVector Target; // 0x0
	float Value; // 0xc
};

struct FControlRigComponentMappedElement {
	FComponentReference ComponentReference; // 0x0
	int32_t TransformIndex; // 0x28
	FName TransformName; // 0x2c
	ERigElementType ElementType; // 0x34
	FName ElementName; // 0x38
	EControlRigComponentMapDirection Direction; // 0x40
	FTransform Offset; // 0x50
	float weight; // 0x80
	EControlRigComponentSpace Space; // 0x84
	USceneComponent* SceneComponent; // 0x88
	int32_t ElementIndex; // 0x90
	int32_t SubIndex; // 0x94
};

struct FBranchingPointMarker {
	int32_t NotifyIndex; // 0x0
	float TriggerTime; // 0x4
	EAnimNotifyEventType NotifyEventType; // 0x8
};

struct FComponentKey {
	UObject* OwnerClass; // 0x0
	FName SCSVariableName; // 0x8
	FGuid AssociatedGuid; // 0x10
};

struct FYContractDynamicData {
	FString m_contractId; // 0x0
	TArray<int32_t> m_contractCurrentProgress; // 0x10
	EYContractStatus m_contractStatus; // 0x20
};

struct FYFriendListBI : FYBaseAnalyticsEvent {
	FString target_user_id; // 0xa8
	FString action_name; // 0xb8
	FString screen; // 0xc8
};

struct FServerLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString XboxToken; // 0x20
};

struct FMovieSceneCameraShakeSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FClientConsumePSNEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t ServiceLabel; // 0x20
};

struct FTimeSynthClipSound {
	USoundWave* SoundWave; // 0x0
	float RandomWeight; // 0x8
	FVector2D DistanceRange; // 0xc
};

struct FCompressedTrack {
	TArray<char> ByteStream; // 0x0
	TArray<float> Times; // 0x10
	float Mins[0x3]; // 0x20
	float Ranges[0x3]; // 0x2c
};

struct FMovieSceneEventTriggerData {
	FMovieSceneEventPtrs Ptrs; // 0x0
	FGuid ObjectBindingID; // 0x28
};

struct FServerUnlinkServerCustomIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString ServerCustomId; // 0x20
};

struct FDirectorTrackCut {
	float Time; // 0x0
	float transitionTime; // 0x4
	FName TargetCamGroup; // 0x8
	int32_t ShotNumber; // 0x10
};

struct FDirectLinkMsg_EndpointLifecycle {
	char LifecycleState; // 0x0
	uint32_t EndpointStateRevision; // 0x4
};

struct FYPlayfabCommonSettings {
	int32_t m_localApiServerTimeout; // 0x0
	int32_t m_normalAzureFunctionTimeout; // 0x4
};

struct FYGlobalVanityData {
	FString UserId; // 0x0
	TArray<FYVanityMaterialItem> bannerItems; // 0x10
	FYVanityMaterialItem deathEmote_item; // 0x20
	TArray<FYVanityMaterialItem> normalEmoteItems; // 0x38
	FYVanityMaterialItem droppod_item; // 0x48
	TArray<FYVanityMaterialItem> sprayItems; // 0x60
	FYVanityMaterialItem pet_item; // 0x70
	int32_t slot_index; // 0x88
};

struct FServerGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayFabId; // 0x18
};

struct FYActiveContractsUIData {
	TArray<FYActiveContractUIData> activeContracts; // 0x0
};

struct FGroupsListGroupBlocksRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FRigUnit_DebugTransformMutable : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	ERigUnitDebugTransformMode Mode; // 0xa0
	FLinearColor Color; // 0xa4
	float Thickness; // 0xb4
	float Scale; // 0xb8
	FName Space; // 0xbc
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FServerRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FRigUnit_GetControlTransform : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FTransform Minimum; // 0x50
	FTransform Maximum; // 0x80
	FCachedRigElement CachedControlIndex; // 0xb0
};

struct FRigUnit_SetMultiControlBool : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlBool_Entry> entries; // 0x68
	TArray<FCachedRigElement> CachedControlIndices; // 0x78
};

struct FYCraftingDiscountDataTableReference {
	UDataTable* m_dataTable; // 0x0
	FString m_sourceFileName; // 0x8
};

struct FYAIMontageStopInfo {
	UAnimMontage* m_montage; // 0x0
	float m_serverTimestamp; // 0x8
	float m_blendOutTime; // 0xc
};

struct FYMineralActivityStats : FYBaseActivityStats {
	FString mineral_type; // 0xb8
	FString mineral_id; // 0xc8
	FString used_tool; // 0xd8
	int32_t remaining_segments; // 0xe8
	int32_t total_segment_count; // 0xec
	int32_t time_since_user_joined; // 0xf0
	int32_t time_spent; // 0xf4
	int32_t total_hit_count; // 0xf8
	bool contested; // 0xfc
};

struct FAdminGetPlayedTitleListResult : FPlayFabResultCommon {
	FString TitleIds; // 0x8
};

struct FServerGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FYActiveInventoryInsurance {
	TArray<FYInsuredItems> m_insured; // 0x0
	TArray<FYInsuredItems> m_pending; // 0x10
};

struct FStatColorMapEntry {
	float In; // 0x0
	FColor Out; // 0x4
};

struct FYInputWidget {
	TWeakObjectPtr<UWidget> m_widget; // 0x0
	FString m_context; // 0x8
	bool m_showCursor; // 0x18
	bool m_uiOnly; // 0x19
	bool m_hideCursorDuringCapture; // 0x1a
};

struct FClientAddOrUpdateContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EmailAddress; // 0x10
};

struct FBlueprintInputTouchDelegateBinding : FBlueprintInputDelegateBinding {
	EInputEvent InputKeyEvent; // 0x4
	FName FunctionNameToBind; // 0x8
};

struct FClientConsumePSNEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemsGranted; // 0x8
};

struct FRigUnit_MathVectorUnaryOp : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector Result; // 0x14
};

struct FCustomChannelSetup {
	ECollisionChannel Channel; // 0x0
	ECollisionResponse DefaultResponse; // 0x1
	bool bTraceType; // 0x2
	bool bStaticObject; // 0x3
	FName Name; // 0x4
};

struct FPropertyAccessSegment {
	FName Name; // 0x0
	UStruct* Struct; // 0x8
	TFieldPath<FProperty> Property; // 0x10
	UFunction* Function; // 0x30
	int32_t ArrayIndex; // 0x38
	uint16_t Flags; // 0x3c
};

struct FYAIHitReactionSetData {
	TMap<EYHitZone, FYAIHitReactionAnimations> m_animationsPerHitZone; // 0x0
};

struct FMovieSceneEventChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneEvent> KeyValues; // 0x18
};

struct FRigUnit_MathQuaternionNotEquals : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	bool Result; // 0x30
};

struct FProfilesSetEntityProfilePolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x18
};

struct FHorizonTweenEventActorParameters {
	FHorizonTweenEventParameters MoveFromToParam; // 0x0
	FHorizonTweenEventActorMoveFromToParameters MoveFromToParamImpl; // 0x38
	bool bMoveFromTo; // 0x188
	FHorizonTweenEventParameters RotatorFromToParam; // 0x190
	FHorizonTweenEventActorRotatorFromToParameters RotatorFromToParamImpl; // 0x1c8
	bool bRotateFromTo; // 0x328
	FHorizonTweenEventParameters ScaleFromToParam; // 0x330
	FHorizonTweenEventActorScaleFromToParameters ScaleFromToParamImpl; // 0x368
	bool bScaleFromTo; // 0x4b8
	FHorizonTweenEventParameters ColorFromToParam; // 0x4c0
	FHorizonTweenEventActorColorFromToParameters ColorFromToParamImpl; // 0x4f8
	bool bColorFromTo; // 0x738
};

struct FControlRigSequenceObjectReference {
	UControlRig* ControlRigClass; // 0x0
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

struct FClientLoginWithGoogleAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString ServerAuthCode; // 0x40
};

struct FYReplicatedRankData {
	int32_t m_rank; // 0x0
	int32_t m_prevRank; // 0x4
	bool m_unplaced; // 0x8
	bool m_receivedBackendData; // 0x9
};

struct FYMatchmakingResponse {
	EYMatchmakingResult Error; // 0x0
	FString GameMode; // 0x8
	FString Region; // 0x18
	bool isRanked; // 0x28
	int32_t estimatedTimeSeconds; // 0x2c
};

struct FMultiplayerDeleteBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FHorizonTweenEventCustomColorCurve {
	FRuntimeCurveLinearColor CustomTweenCurve; // 0x0
};

struct FClientGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
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

struct FRigUnit_DeltaFromPreviousTransform : FRigUnit_SimBase {
	FTransform Value; // 0x10
	FTransform Delta; // 0x40
	FTransform PreviousValue; // 0x70
	FTransform Cache; // 0xa0
};

struct FRigUnit_MathTransformFromSRT : FRigUnit_MathTransformBase {
	FVector Location; // 0x8
	FVector Rotation; // 0x14
	EControlRigRotationOrder RotationOrder; // 0x20
	FVector Scale; // 0x24
	FTransform Transform; // 0x30
	FEulerTransform EulerTransform; // 0x60
};

struct FVectorParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	FLinearColor ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x20
};

struct FYItemStatOldValNewVal {
	int32_t m_itemStatType; // 0x0
	int32_t m_currentVal; // 0x4
	int32_t m_newVal; // 0x8
};

struct FSourceEffectBitCrusherSettings {
	float CrushedSampleRate; // 0x0
	FSoundModulationDestinationSettings SampleRateModulation; // 0x8
	float CrushedBits; // 0x18
	FSoundModulationDestinationSettings BitModulation; // 0x20
};

struct FYSocialNotification {
	FYSocialProfileEntry m_associatedPlayerEntry; // 0x0
	FString m_id; // 0x88
	FText m_overridenMessage; // 0x98
	EYNotifcationType m_type; // 0xb0
	EYNotificationMessageType m_messageType; // 0xb1
	bool m_isPermanent; // 0xb2
};

struct FYConnect {
	FString addr; // 0x0
	FString roomId; // 0x10
};

struct FRigUnit_MathBoolNotEquals : FRigUnit_MathBoolBase {
	bool A; // 0x8
	bool B; // 0x9
	bool Result; // 0xa
};

struct FFindFloorResult {
	char bBlockingHit : 1; // 0x0
	char bWalkableFloor : 1; // 0x0
	char bLineTrace : 1; // 0x0
	float FloorDist; // 0x4
	float LineDist; // 0x8
	FHitResult HitResult; // 0xc
};

struct FInterpCurveVector2D {
	TArray<FInterpCurvePointVector2D> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FSolverCollisionFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinImpulse; // 0xc
};

struct FAnimNode_SingleNode : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
};

struct FExperimentationStopExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
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

struct FConstraintDescriptionEx {
	FFilterOptionPerAxis AxesFilterOption; // 0x8
};

struct FBroadphaseSettings {
	bool bUseMBPOnClient; // 0x0
	bool bUseMBPOnServer; // 0x1
	bool bUseMBPOuterBounds; // 0x2
	FBox MBPBounds; // 0x4
	FBox MBPOuterBounds; // 0x20
	uint32_t MBPNumSubdivs; // 0x3c
};

struct FClientGetTimeResult : FPlayFabResultCommon {
	FString Time; // 0x8
};

struct FRigUnit_MathQuaternionRotateVector : FRigUnit_MathQuaternionBase {
	FQuat Quaternion; // 0x10
	FVector Vector; // 0x20
	FVector Result; // 0x2c
};

struct FChildActorAttachedActorInfo {
	TWeakObjectPtr<AActor> Actor; // 0x0
	FName SocketName; // 0x8
	FTransform RelativeTransform; // 0x10
};

struct FAdminAddLocalizedNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Language; // 0x20
	FString NewsId; // 0x30
	FString Title; // 0x40
};

struct FRigUnit_DrawContainerGetInstruction : FRigUnit {
	FName InstructionName; // 0x8
	FLinearColor Color; // 0x10
	FTransform Transform; // 0x20
};

struct FYDOTDamageEntry {
	AActor* m_initiator; // 0x0
	float m_duration; // 0x8
	float m_deltaTime; // 0xc
	float m_damageInterval; // 0x10
	float m_timeStarted; // 0x14
	float m_damagePerInterval; // 0x18
	int32_t m_ticks; // 0x1c
	FYDamageOriginInfo m_dotAppliedFromOriginInfo; // 0x20
};

struct FExponentialHeightFogData {
	float FogDensity; // 0x0
	float FogHeightFalloff; // 0x4
	float FogHeightOffset; // 0x8
};

struct FAdminUpdateCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeveloperPlayFabId; // 0x10
	TArray<UPlayFabJsonObject*> Files; // 0x20
	bool Publish; // 0x30
};

struct FRigUnit_FitChainToCurve_Rotation {
	FQuat Rotation; // 0x0
	float Ratio; // 0x10
};

struct FYFriendsImportResponse {
	EYFriendsImportResultCode resultCode; // 0x0
	int32_t numOfImportedFriends; // 0x4
};

struct FExperimentationCreateExperimentResult : FPlayFabResultCommon {
	FString ExperimentId; // 0x8
};

struct FYSetUpdated {
	FString UserId; // 0x0
	FYPlayerSetItemsEntry newSet; // 0x10
};

struct FServerGetLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FAnimNode_SaveCachedPose : FAnimNode_Base {
	FPoseLink pose; // 0x10
	FName CachePoseName; // 0x20
};

struct FCustomAttribute {
	FName Name; // 0x0
	int32_t VariantType; // 0x8
	TArray<float> Times; // 0x10
};

struct FYAssetValidatorEntry {
	TArray<FYAssetTagCheckEntry> m_prefixes; // 0x0
	TArray<FYAssetTagCheckEntry> m_suffixes; // 0x10
	bool m_enabled; // 0x20
};

struct FYLootNotificationAudioData {
	EYItemRarityType m_rarity; // 0x0
	FDataTableRowHandle m_lootNotification; // 0x8
};

struct FCaptureResolution {
	int32_t ResX; // 0x0
	int32_t ResY; // 0x4
};

struct FYEnterMatch {
	FString m_matchTicket; // 0x0
};

struct FExposedValueCopyRecord {
	int32_t CopyIndex; // 0x0
	EPostCopyOperation PostCopyOperation; // 0x4
};

struct FYUnlockedShopItem {
	FDataTableRowHandle m_blueprintHandle; // 0x0
	EYItemRarityType m_itemRarity; // 0x10
};

struct FAnimTickRecord {
	UAnimationAsset* SourceAsset; // 0x0
};

struct FRigUnit_MathTransformTransformVector : FRigUnit_MathTransformBase {
	FTransform Transform; // 0x10
	FVector Location; // 0x40
	FVector Result; // 0x4c
};

struct FClientGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FYAISquadDifficultyDefinitionTableRow : FTableRowBase {
	TArray<FYPossibleSquadDefinitions> m_squadsPerDifficulty; // 0x8
};

struct FDatasmithStaticParameterSetTemplate {
	TMap<FName, bool> StaticSwitchParameters; // 0x0
};

struct FPackedRGBA16N {
	int32_t XY; // 0x0
	int32_t ZW; // 0x4
};

struct FInterpCurveQuat {
	TArray<FInterpCurvePointQuat> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FSubdivisionLimitData {
	TArray<FVector> VertexPositions; // 0x0
	TArray<FSubdivisionLimitSection> Sections; // 0x10
	TArray<FSubdividedWireEdge> SubdividedWireEdges; // 0x20
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

struct FYTransportRuntimeInitializationData {
	FYDamageOriginInfo m_damageOriginInfo; // 0x0
	FVector m_startLocation; // 0x28
	FVector m_direction; // 0x34
	FDataTableRowHandle m_transportDataTableRow; // 0x40
	FDataTableRowHandle m_impactDataTableRow; // 0x50
	FDataTableRowHandle m_fxCategoryDataTableRow; // 0x60
	FDataTableRowHandle m_dataTableRowHandleContext; // 0x70
	AActor* m_owner; // 0x80
	int32_t m_transportHandle; // 0x88
	float m_overrideGravity; // 0x8c
	float m_overrideLaunchVelocity; // 0x90
	USceneComponent* m_homingToComponet; // 0x98
	ECollisionChannel m_collisionChannelTrace; // 0xa0
	FYChainReactionDataEntry m_chainReactionData; // 0xa4
	TArray<AActor*> m_actorsToIgnore; // 0xb0
	bool m_replicateSkipAutonomous; // 0xc0
	bool m_skipFindClosestBoneCheck; // 0xc1
	bool m_clientSideProjectile; // 0xc2
	bool m_isTargeting; // 0xc3
	bool m_normalizeDirectionVector; // 0xc4
	int32_t m_randomSeed; // 0xc8
	FVector m_visualOriginTrailLocation; // 0xcc
	FGuid m_shotGuid; // 0xd8
};

struct FAdminCheckLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString ItemId; // 0x18
};

struct FDepthFieldGlowInfo {
	char bEnableGlow : 1; // 0x0
	FLinearColor GlowColor; // 0x4
	FVector2D GlowOuterRadius; // 0x14
	FVector2D GlowInnerRadius; // 0x1c
};

struct FRigUnit_MathFloatClamp : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float Result; // 0x14
};

struct FEditableTextStyle : FSlateWidgetStyle {
	FSlateFontInfo Font; // 0x8
	FSlateColor ColorAndOpacity; // 0x60
	FSlateBrush BackgroundImageSelected; // 0x88
	FSlateBrush BackgroundImageComposing; // 0x110
	FSlateBrush CaretImage; // 0x198
};

struct FServerGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FYInviteToSquadByName {
	FString targetName; // 0x0
};

struct FCRSimLinearSpring {
	int32_t SubjectA; // 0x0
	int32_t SubjectB; // 0x4
	float Coefficient; // 0x8
	float Equilibrium; // 0xc
};

struct FAIDataProviderTypedValue : FAIDataProviderValue {
	UObject* PropertyType; // 0x20
};

struct FS_ReplayInfo {
	FString ReplayName; // 0x0
	FString FriendlyName; // 0x10
	FDateTime Timestamp; // 0x20
	int32_t LengthInMS; // 0x28
	bool bIsValid; // 0x2c
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

struct FNiagaraDeviceProfileStateEntry {
	FName ProfileName; // 0x0
	uint32_t QualityLevelMask; // 0x8
	uint32_t SetQualityLevelMask; // 0xc
};

struct FYUpdateFactionProgressionLocal {
	FString m_faction; // 0x0
	int32_t m_factionProgression; // 0x10
};

struct FAdminGetCloudScriptTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FClientGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FGroupsInviteToGroupRequest : FPlayFabRequestCommon {
	bool AutoAcceptOutstandingApplication; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
	UPlayFabJsonObject* Group; // 0x20
	FString RoleId; // 0x28
};

struct FServerMoveItemToCharacterFromCharacterRequest : FPlayFabRequestCommon {
	FString GivingCharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
	FString ReceivingCharacterId; // 0x38
};

struct FServerSendPushNotificationFromTemplateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PushNotificationTemplateId; // 0x10
	FString Recipient; // 0x20
};

struct FMovieSceneNestedSequenceTransform {
	FMovieSceneTimeTransform LinearTransform; // 0x0
	FMovieSceneTimeWarping Warping; // 0xc
};

struct FResponseChannel {
	FName Channel; // 0x0
	ECollisionResponse response; // 0x8
};

struct FGroupsAddMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RoleId; // 0x28
};

struct FYVehicleRowBase : FYItemDataTableRowBase {
	FDataTableRowHandle m_healthRow; // 0x310
	float m_lifetimeAfterDeath; // 0x320
	float m_MovementSpeedBackwardsMovement; // 0x324
	float m_vehicleSideDirectionFrictionDirection; // 0x328
	float m_vehicleBackwardFrictionDirection; // 0x32c
	float m_vehicleBackwardSpeedMultiplierAccel; // 0x330
	float m_angularAccelerationMultiplierLeft; // 0x334
	float m_vehicleSideMovementSpeedMultiplierAccel; // 0x338
	float m_vehicleTurnSpeedMultiplier; // 0x33c
	float m_vehicleAdditionalMovementSpeedBank; // 0x340
	float m_MovementSpeedSideMovement; // 0x344
	float m_vehicleRotationMaxSpeed; // 0x348
	float m_vehicleGlobalAccelerationModifier; // 0x34c
	float m_vehicleFriction; // 0x350
	float m_vehicleBreaking; // 0x354
	float m_vehicleRotationIncrementSpeed; // 0x358
	float m_vehicleDecrementRotationRate; // 0x35c
	float m_vehicleDeltaPitchRollRotationRate; // 0x360
	float m_vehicleMovementSpeedBackwardsMovement; // 0x364
	float m_vehicleMovementSpeedSideMovement; // 0x368
	float m_vehicleMovementSpeedAccelerationBackwardsMovement; // 0x36c
	float m_vehicleMovementSpeedAccelerationSideMovement; // 0x370
	float m_vehicleMovementSpeed; // 0x374
	float m_vehicleBoostMovementSpeed; // 0x378
	float m_vehicleStandaloneBackwardsFriction; // 0x37c
	float m_vehicleStandaloneMaxSpeed; // 0x380
	float m_vehicleStandaloneJumpOffVelocityMultiplier; // 0x384
	float m_vehicleDamageAtDestruction; // 0x388
	float m_vehicleRadiusDamageAtDestruction; // 0x38c
	float m_vehicleRadiusDamageFallofStartRange; // 0x390
	float m_vehicleRadiusDamageFalloffMultiplier; // 0x394
	float m_vehicleOwnedInteractionTimeMultiplier; // 0x398
	float m_vehicleNotOwnedInteractionTimeMultiplier; // 0x39c
	FVector m_vehicleIdleBaseLocationOffset; // 0x3a0
	FVector m_vehiclePossedLocationOffset; // 0x3ac
	FName m_vehicleAttachSocketName; // 0x3b8
	FDataTableRowHandle m_vehicleImpactRow; // 0x3c0
	float m_minVelocityMaxSpeedInterpDealDamage; // 0x3d0
	float m_damageVelocityStartInterpolate; // 0x3d4
	float m_damageVelocityMaxInterpolate; // 0x3d8
	float m_minimumPerDamageIntervalTime; // 0x3dc
	float m_vehicleTurnBoostSpeedModifier; // 0x3e0
	float m_vehicleJumpVelocity; // 0x3e4
	FDataTableRowHandle m_movementAudioSoundQueue; // 0x3e8
	FDataTableRowHandle m_boostAudioSoundQueue; // 0x3f8
};

struct FServerSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FYActivateContractResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCurrencyItem> changedCurrencies; // 0x20
	FYActiveContractPlayerData activatedContract; // 0x30
	EYActivateContractRequestStatus Status; // 0x50
};

struct FYDebugGivePlayerGamemodeRankRequest {
	int32_t rankIncrement; // 0x0
	FString GameMode; // 0x8
};

struct FGroupsUnblockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FBlueprintWidgetAnimationDelegateBinding {
	EWidgetAnimationEvent Action; // 0x0
	FName AnimationToBind; // 0x4
	FName FunctionNameToBind; // 0xc
	FName UserTag; // 0x14
};

struct FYRepairItemRequest {
	FString instanceId; // 0x0
	FString UserId; // 0x10
};

struct FAdminCreatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString FriendlyName; // 0x8
};

struct FServerGetUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FYDebugRemoveAllMaterialsFromPlayerRequest {
	FString UserId; // 0x0
};

struct FClientSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FDelegateRuntimeBinding {
	FString ObjectName; // 0x0
	FName PropertyName; // 0x10
	FName FunctionName; // 0x18
	FDynamicPropertyPath SourcePath; // 0x20
	EBindingKind Kind; // 0x48
};

struct FNiagaraDataSetID {
	FName Name; // 0x0
	ENiagaraDataSetType Type; // 0x8
};

struct FYCurrencyRow : FYItemDataTableRowBase {
	EYCurrencyType m_currencyType; // 0x310
	TSoftObjectPtr<UTexture2D> m_hudIconBig; // 0x318
	TSoftObjectPtr<UObject> m_mesh; // 0x340
	FRotator m_relativeMeshRotation; // 0x368
	FVector m_relativeMeshLocation; // 0x374
	FVector m_scale; // 0x380
	bool m_shouldUseMaterialRepresentation; // 0x38c
	int32_t m_upperCap; // 0x390
};

struct FFontOutlineSettings {
	int32_t OutlineSize; // 0x0
	bool bSeparateFillAlpha; // 0x4
	bool bApplyOutlineToDropShadows; // 0x5
	UObject* OutlineMaterial; // 0x8
	FLinearColor OutlineColor; // 0x10
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

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FMultiplayerCreateRemoteUserResponse : FPlayFabResultCommon {
	FString ExpirationTime; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FProgressUIData {
	FText m_description; // 0x0
	UTexture2D* m_icon; // 0x18
	FLinearColor m_progressColorTheme; // 0x20
};

struct FYGetCompetitorsDataRequest {
	int32_t playersAbove; // 0x0
	int32_t playersBelow; // 0x4
};

struct FYFPSMatchSummaryServerEvent : FYBaseAnalyticsEvent {
	int32_t time_seconds; // 0xa8
	float frametime_average; // 0xac
	float frametime_quantile_26; // 0xb0
	float frametime_quantile_51; // 0xb4
	float frametime_quantile_76; // 0xb8
	float frametime_max; // 0xbc
	float frametime_min; // 0xc0
	int32_t fps_limit; // 0xc4
	uint32_t physical_memory_max; // 0xc8
	uint32_t virtual_memory_max; // 0xcc
	int32_t players_max; // 0xd0
	float players_avg; // 0xd4
	int32_t ai_max; // 0xd8
	float ai_avg; // 0xdc
	float gc_time_avg; // 0xe0
	float gc_time_max; // 0xe4
	float gc_time_min; // 0xe8
	float gc_time_percent_over_budget; // 0xec
};

struct FUVMapSettings {
	FVector Size; // 0x0
	FVector2D UVTile; // 0xc
	FVector Position; // 0x14
	FRotator Rotation; // 0x20
	FVector Scale; // 0x2c
};

struct FHorizonTweenEventWidgetVector2DParameters : FHorizonTweenEventTweenListImplementParameters {
	TArray<FVector2D> TweenStartList; // 0x8
	TArray<FVector2D> TweenEndList; // 0x18
	EHorizonTweenVector2DConstraints ConstraintType; // 0x28
	EHorizonTweenCoordinateSpace CoordinateSpaceType; // 0x29
	FHorizonTweenEventCustomCurve CustomTweenCurve; // 0x30
};

struct FConstraintTarget {
	FTransform Transform; // 0x0
	float weight; // 0x30
	bool bMaintainOffset; // 0x34
	FTransformFilter Filter; // 0x35
};

struct FYPlayerStateChangeData {
	AActor* m_relevantActor; // 0x0
	FYPlayerRuntimeScoreStateData m_newData; // 0x8
	FYPlayerRuntimeScoreStateData m_oldData; // 0x14
	EYPlayerGameDataStateType m_relevantState; // 0x20
};

struct FYNotificiationDataRequest {
	FText m_message; // 0x0
	float m_duration; // 0x18
	FSlateColor m_color; // 0x20
	EYNotificationType m_type; // 0x48
	EYNotificationPlacement m_placement; // 0x49
};

struct FYStaminaMeleeMontageData {
	UAnimMontage* m_weakenedMeleeMissMontageTPP; // 0x0
	UAnimMontage* m_weakenedMeleeMissMontageFPP; // 0x8
	UAnimMontage* m_weakenedMeleeImpactMontageTPP; // 0x10
	UAnimMontage* m_weakenedMeleeImpactMontageFPP; // 0x18
};

struct FGuid {
	int32_t A; // 0x0
	int32_t B; // 0x4
	int32_t C; // 0x8
	int32_t D; // 0xc
};

struct FYWeaponParticleSystemSelector {
	UParticleSystem* m_defaultPS; // 0x0
	TArray<FYWeaponParticleSystemOverrideByWeaponType> m_overridePsByWeaponType; // 0x8
	TArray<FYWeaponParticleSystemOverrideByDataRowHandle> m_overridePsByDataRowHandle; // 0x18
};

struct FBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
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

struct FYDailyCrateGeneratorInfo {
	FYGeneratorInfo m_generatorInfo; // 0x0
	int32_t m_crateLevel; // 0x10
	TArray<FYRewardDataTableRow> m_crateItems; // 0x18
};

struct FGroupsChangeMemberRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DestinationRoleId; // 0x10
	UPlayFabJsonObject* Group; // 0x20
	TArray<UPlayFabJsonObject*> Members; // 0x28
	FString OriginRoleId; // 0x38
};

struct FRigUnit_ModifyBoneTransforms_PerBone {
	FName Bone; // 0x0
	FTransform Transform; // 0x10
};

struct FYTimestamp {
	int64_t Seconds; // 0x0
};

struct FRigUnit_AnimEasing : FRigUnit_AnimBase {
	float Value; // 0x8
	EControlRigAnimEasingType Type; // 0xc
	float SourceMinimum; // 0x10
	float SourceMaximum; // 0x14
	float TargetMinimum; // 0x18
	float TargetMaximum; // 0x1c
	float Result; // 0x20
};

struct FYCharacterCustomizationSelected : FYBaseAnalyticsEvent {
	bool gender; // 0xa8
	FString head_id; // 0xb0
	int32_t head_color_index; // 0xc0
	FString boots_id; // 0xc8
	int32_t boots_color_index; // 0xd8
	FString chest_id; // 0xe0
	int32_t chest_color_index; // 0xf0
	FString gloves_id; // 0xf8
	int32_t gloves_color_index; // 0x108
	FString base_suit_id; // 0x110
	int32_t base_suit_color_index; // 0x120
	FString archetype_id; // 0x128
	int32_t slot_id; // 0x138
};

struct FRigUnit_DebugTransformArrayMutable_WorkData {
	TArray<FTransform> DrawTransforms; // 0x0
};

struct FYLocallyAcceptedLegalAgreements {
	FString m_userIdPlatform; // 0x0
	int32_t m_NDAVersion; // 0x10
	int32_t m_EULAVersion; // 0x14
	bool m_hasAcceptedNDA; // 0x18
	bool m_hasAcceptedEULA; // 0x19
};

struct FComponentSync {
	FName Name; // 0x0
	ESyncOption SyncOption; // 0x8
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

struct FRigUnit_ConvertRotation : FRigUnit {
	FRotator Input; // 0x8
	FQuat Result; // 0x20
};

struct FYWeaponAnimations {
	TMap<EYWeaponPlayState, FYWeaponAnimationStaticData> m_weaponAnimationAssociation; // 0x0
};

struct FSolverBreakingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FNiagaraVariableAttributeBinding {
	FNiagaraVariableBase ParamMapVariable; // 0x0
	FNiagaraVariable DataSetVariable; // 0x10
	FNiagaraVariable RootVariable; // 0x30
	ENiagaraBindingSource BindingSourceMode; // 0x50
	char bBindingExistsOnSource : 1; // 0x54
	char bIsCachedParticleValue : 1; // 0x54
};

struct FAnimNotifyQueue {
	TArray<FAnimNotifyEventReference> AnimNotifies; // 0x10
	TMap<FName, FAnimNotifyArray> UnfilteredMontageAnimNotifies; // 0x20
};

struct FCachedAnimAssetPlayerData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
};

struct FYLiveEventModifier {
	FString ID; // 0x0
	FString Value; // 0x10
};

struct FLandscapeLayerStruct {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
};

struct FNiagaraScriptDataUsageInfo {
	bool bReadsAttributeData; // 0x0
};

struct FYPlayfabRedeemCouponResult {
	FString UserId; // 0x0
	bool SUCCESS; // 0x10
	TArray<FYCustomItemInfo> GrantedItems; // 0x18
};

struct FYStabilityData {
	float m_currentStabilityValue; // 0x0
	float m_lastTimeTriggered; // 0x4
	float m_lastTimeValueIncreased; // 0x8
	float m_lastTimeValueDecreased; // 0xc
};

struct FRootMotionMovementParams {
	bool bHasRootMotion; // 0x0
	float BlendWeight; // 0x4
	FTransform RootMotionTransform; // 0x10
};

struct FServerRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAttributesForVertexInstance {
	FVertexInstanceID VertexInstanceID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
};

struct FYFactionsContractsData {
	TArray<FYFactionContractsData> boards; // 0x0
	FYTimestamp lastBoardRefreshTimeUtc; // 0x10
};

struct FRigUnit_ToWorldSpace_Location : FRigUnit {
	FVector Location; // 0x8
	FVector World; // 0x14
};

struct FAIDataProviderValue {
	UAIDataProvider* DataBinding; // 0x10
	FName DataField; // 0x18
};

struct FClientGetTitlePublicKeyRequest : FPlayFabRequestCommon {
	FString TitleSharedSecret; // 0x8
};

struct FYClimbingCosmeticDataPerState {
	UMatineeCameraShake* m_cameraShakeStateStarted; // 0x0
};

struct FClientGetPlayFabIDsFromGameCenterIDsRequest : FPlayFabRequestCommon {
	FString GameCenterIDs; // 0x8
};

struct FBuildPromotionTestSettings {
	FFilePath DefaultStaticMeshAsset; // 0x0
	FBuildPromotionImportWorkflowSettings ImportWorkflow; // 0x10
	FBuildPromotionOpenAssetSettings OpenAssets; // 0x160
	FBuildPromotionNewProjectSettings NewProjectSettings; // 0x1c0
	FFilePath SourceControlMaterial; // 0x1e0
};

struct FYUiHofData {
	EYMatchmakeGameModeType m_gameModeToShow; // 0x0
	TMap<FString, FYRankEntries> m_gameModeTopPlayersPerSeasons; // 0x8
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

struct FAdminGetPlayerIdFromAuthTokenResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
};

struct FYPlayFabStoreRowBase : FTableRowBase {
	bool m_isEnabled; // 0x8
	FString m_storeId; // 0x10
	FString m_catalogVersion; // 0x20
	FText m_displayName; // 0x30
	EYGamePlatform m_platform; // 0x48
};

struct FNamedCurveValue {
	FName Name; // 0x0
	float Value; // 0x8
};

struct FMovieSceneEntitySystemGraphNode {
	UMovieSceneEntitySystem* System; // 0x20
};

struct FMovieSceneEvaluationField {
	TArray<FMovieSceneFrameRange> Ranges; // 0x0
	TArray<FMovieSceneEvaluationGroup> Groups; // 0x10
	TArray<FMovieSceneEvaluationMetaData> MetaData; // 0x20
};

struct FTViewTarget {
	AActor* Target; // 0x0
	FMinimalViewInfo POV; // 0x10
	APlayerState* PlayerState; // 0x5f0
};

struct FYCancelActiveContractResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString contractId; // 0x20
};

struct FOverlapResult {
	TWeakObjectPtr<AActor> Actor; // 0x0
	TWeakObjectPtr<UPrimitiveComponent> Component; // 0x8
	char bBlockingHit : 1; // 0x14
};

struct FRigUnit_ToWorldSpace_Transform : FRigUnit {
	FTransform Transform; // 0x10
	FTransform World; // 0x40
};

struct FYRequestUpgradeItemsRequest {
	FString UserId; // 0x0
	TArray<FYUpgradeEntry> upgradeEntries; // 0x10
};

struct FYArmorDataTableRow : FYItemDataTableRowBase {
	int32_t m_armorAmount; // 0x310
	TArray<FDataTableRowHandle> m_armoredHitZones; // 0x318
	TSoftObjectPtr<UObject> m_mesh; // 0x328
	TArray<FYGameplayAttributeModifier> m_attributeModifiers; // 0x350
	TArray<FDataTableRowHandle> m_perks; // 0x360
};

struct FClientAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
};

struct FBlackboardKeySelector {
	TArray<UBlackboardKeyType*> AllowedTypes; // 0x0
	FName SelectedKeyName; // 0x10
	UBlackboardKeyType* SelectedKeyType; // 0x18
	char SelectedKeyID; // 0x20
	char bNoneIsAllowedValue : 1; // 0x24
};

struct FRigUnit_ToRigSpace_Transform : FRigUnit {
	FTransform Transform; // 0x10
	FTransform Global; // 0x40
};

struct FYRarityVisualizationData {
	TSoftObjectPtr<UTexture2D> m_texture; // 0x0
	FSlateColor m_color; // 0x28
};

struct FInterpEdSelKey {
	UInterpGroup* Group; // 0x0
	UInterpTrack* Track; // 0x8
	int32_t KeyIndex; // 0x10
	float UnsnappedPosition; // 0x14
};

struct FYAICombatAnalyticsEvent : FYAIBaseAnalyticsEvent {
	int32_t time_started_when_ai_attacks; // 0xd8
	int32_t ai_damage_dealt; // 0xdc
	int32_t Status; // 0xe0
	FString player_id; // 0xe8
	int32_t shot_by_ai; // 0xf8
	int32_t hits_by_ai; // 0xfc
	int32_t weakspots_hits_by_ai; // 0x100
	int32_t location_x_player; // 0x104
	int32_t location_y_player; // 0x108
	int32_t location_z_player; // 0x10c
	FString type_of_aggro; // 0x110
};

struct FRigUnit_SetMultiControlBool_Entry {
	FName Control; // 0x0
	bool BoolValue; // 0x8
};

struct FYMatchmakingRegionSetupEntry {
	FString Region; // 0x0
	EYMatchmakingRegionOverrideOptions Option; // 0x10
};

struct FBlendTarget {
	FTransform Transform; // 0x0
	float weight; // 0x30
};

struct FYStoredModData {
	TArray<FYModEntry> m_allMods; // 0x0
};

struct FYMapRotationData {
	TArray<FYMapData> maps; // 0x0
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

struct FDestructibleSpecialHierarchyDepths {
	int32_t SupportDepth; // 0x0
	int32_t MinimumFractureDepth; // 0x4
	bool bEnableDebris; // 0x8
	int32_t DebrisDepth; // 0xc
	int32_t EssentialDepth; // 0x10
};

struct FYButtonAudio {
	FDataTableRowHandle m_pressedDTSound; // 0x0
	FDataTableRowHandle m_releasedDTSound; // 0x10
	FDataTableRowHandle m_hoveredDTSound; // 0x20
	FDataTableRowHandle m_unhoveredDTSound; // 0x30
};

struct FAdminGetContentUploadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FAnimNode_Slot : FAnimNode_Base {
	FPoseLink Source; // 0x10
	FName SlotName; // 0x20
	bool bAlwaysUpdateSourcePose; // 0x28
};

struct FYContractsInteractionAnalyticsEvent : FYBaseAnalyticsEvent {
	FString faction_name; // 0xa8
	FString contract1; // 0xb8
	FString contract2; // 0xc8
	FString contract3; // 0xd8
	int32_t Action; // 0xe8
};

struct FYKeyPlatformData : FYDataTableRowBase {
	FKey Key; // 0x10
	TMap<EYKeybindingInputDeviceType, TSoftObjectPtr<UTexture2D>> Icons; // 0x28
};

struct FCloudScriptListFunctionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FYLevelMapRuntimeData {
	FVector2D m_mapBoundsCenter; // 0x0
	FVector2D m_levelSize; // 0x8
	FVector2D m_mapTextureSize; // 0x10
	bool m_initializedLevelData; // 0x18
	float m_zoom; // 0x1c
	int32_t m_handle; // 0x20
};

struct FMultiplayerCreateServerBackfillTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FWrappedStringElement {
	FString Value; // 0x0
	FVector2D LineExtent; // 0x10
};

struct FHLODISMComponentDesc {
	UStaticMesh* StaticMesh; // 0x0
	UMaterialInterface* Material; // 0x8
	TArray<FTransform> Instances; // 0x10
};

struct FEngineServicePong {
	FString CurrentLevel; // 0x0
	int32_t EngineVersion; // 0x10
	bool HasBegunPlay; // 0x14
	FGuid instanceId; // 0x18
	FString InstanceType; // 0x28
	FGuid SessionId; // 0x38
	float WorldTimeSeconds; // 0x48
};

struct FRigUnit_CollectionNameSearch : FRigUnit_CollectionBase {
	FName PartialName; // 0x8
	ERigElementType TypeToSearch; // 0x10
	FRigElementKeyCollection Collection; // 0x18
	FRigElementKeyCollection CachedCollection; // 0x28
	int32_t CachedHierarchyHash; // 0x38
};

struct FAdminGetPlayerIdFromAuthTokenRequest : FPlayFabRequestCommon {
	FString Token; // 0x8
	EAuthTokenType TokenType; // 0x18
};

struct FServerGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x20
};

struct FYGetCharacterVanityResponse {
	bool SUCCESS; // 0x0
	FYCharacterVanity returnVanity; // 0x8
};

struct FFrameNumberRangeBound {
	ERangeBoundTypes Type; // 0x0
	FFrameNumber Value; // 0x4
};

struct FDatasmithStaticMeshImportOptions {
	EDatasmithImportLightmapMin MinLightmapResolution; // 0x0
	EDatasmithImportLightmapMax MaxLightmapResolution; // 0x1
	bool bGenerateLightmapUVs; // 0x2
	bool bRemoveDegenerates; // 0x3
};

struct FMultiplayerGetMatchResult : FPlayFabResultCommon {
	FString MatchID; // 0x8
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RegionPreferences; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FRigUnit_MathRBFInterpolateQuatColor : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatColor_Target> Targets; // 0xd0
	FLinearColor Output; // 0xe0
};

struct FRigUnit_SetControlFloat : FRigUnitMutable {
	FName Control; // 0x68
	float weight; // 0x70
	float FloatValue; // 0x74
	FCachedRigElement CachedControlIndex; // 0x78
};

struct FYSetMissionAcknowledged {
	FString missionArcId; // 0x0
	FString missionId; // 0x10
};

struct FYEOSStatData : FYDataTableRowBase {
	FText m_translateStatName; // 0x10
	EYStatValueDisplayMethod m_displayMethod; // 0x28
	EYStatValueComparison m_comparisonMethod; // 0x29
};

struct FEnumParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneByteChannel ParameterCurve; // 0x8
};

struct FAdminGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FST_EffortData {
	FDataTableRowHandle VO_2_DACCD7C64AEC65EC53F9B7952C5B9399; // 0x0
	bool OnlyPlayOnAutonomousProxy_12_491168E947DFFD7794F07FBE4A0D03AD; // 0x10
};

struct FYSquadInviteExpired {
	FString ID; // 0x0
	FString TargetId; // 0x10
};

struct FServerRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FServerGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	FString PlayFabId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x40
};

struct FAdminUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FNegotiationTransport {
	FString Transport; // 0x0
	TArray<FString> TransferFormats; // 0x10
};

struct FMaterialParameterInfo {
	FName Name; // 0x0
	EMaterialParameterAssociation Association; // 0x8
	int32_t Index; // 0xc
};

struct FServerGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString PlayFabId; // 0x30
	FString StatisticName; // 0x40
};

struct FMultiplayerJoinMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Member; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FSourceEffectWaveShaperSettings {
	float Amount; // 0x0
	float OutputGainDb; // 0x4
};

struct FRigBone : FRigElement {
	FName ParentName; // 0x18
	int32_t ParentIndex; // 0x20
	FTransform InitialTransform; // 0x30
	FTransform GlobalTransform; // 0x60
	FTransform LocalTransform; // 0x90
	TArray<int32_t> Dependents; // 0xc0
	ERigBoneType Type; // 0xd0
};

struct FServerRedeemMatchmakerTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString Ticket; // 0x20
};

struct FAdminUpdateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FYBIHook_GetPvpDamage : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8
	int32_t location_y; // 0xac
	int32_t location_z; // 0xb0
	int32_t location_x_attacker; // 0xb4
	int32_t location_y_attacker; // 0xb8
	int32_t location_z_attacker; // 0xbc
	int32_t time_since_match_start; // 0xc0
	int32_t time_since_user_joined; // 0xc4
	FString equipped_weapon; // 0xc8
	int32_t health_when_attacked; // 0xd8
	int32_t attacker_damage; // 0xdc
	FString attacker_weapon_id; // 0xe0
	FString attacker_user_id; // 0xf0
};

struct FYHoursAndMinutes {
	int32_t hours24; // 0x0
	int32_t Minutes; // 0x4
};

struct FGroupsUpdateGroupRequest : FPlayFabRequestCommon {
	FString AdminRoleId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t ExpectedProfileVersion; // 0x20
	UPlayFabJsonObject* Group; // 0x28
	FString GroupName; // 0x30
	FString MemberRoleId; // 0x40
};

struct FYPlayFabBaseSquadRequest {
	FString squadId; // 0x0
};

struct FYTestBIEventData {
	int32_t IntegerField; // 0x0
	float FloatField; // 0x4
	bool BooleanField; // 0x8
	FString StringField; // 0x10
	TArray<FString> StringArray; // 0x20
	TArray<uint32_t> Blob; // 0x30
	FTestBIDataStruct DataStruct; // 0x40
	TArray<FTestBIStructForArray> ArrayOfStructs; // 0x58
};

struct FInputActionSpeechMapping {
	FName ActionName; // 0x0
	FName SpeechKeyword; // 0x8
};

struct FAdminModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FYGeneratorCrateLevelToRewardsDataTableRow : FYDataTableRowBase {
	FText m_rewardsPackageName; // 0x10
	int32_t m_level; // 0x28
	TSoftObjectPtr<UDataTable> m_rewardsDropTablePath; // 0x30
	TArray<FYRewardsPoolGrantTupleRow> m_rewardsGrants; // 0x58
};

struct FFunctionExpressionOutput {
	UMaterialExpressionFunctionOutput* ExpressionOutput; // 0x0
	FGuid ExpressionOutputId; // 0x8
	FExpressionOutput Output; // 0x18
};

struct FYPickupItem {
	FText m_name; // 0x0
	int32_t m_amount; // 0x18
	FYInventoryItem m_inventoryItem; // 0x20
	TArray<FDataTableRowHandle> m_itemUpgrades; // 0xb8
	ACharacter* m_instigatedBy; // 0xc8
	UObject* m_instigatorObject; // 0xd0
	bool m_canBeSharedWithTeam; // 0xd8
	bool m_isPickUpByPlayerDrop; // 0xd9
	UYWidget_PickupPlate_Base* m_pickupWidgetOverride; // 0xe0
};

struct FYSquadInvite {
	FString ID; // 0x0
	FString fromId; // 0x10
	FString requesterDisplayName; // 0x20
	FString TargetId; // 0x30
	FString squadId; // 0x40
};

struct FRigUnit_DebugLineStrip : FRigUnit_DebugBaseMutable {
	TArray<FVector> Points; // 0x68
	FLinearColor Color; // 0x78
	float Thickness; // 0x88
	FName Space; // 0x8c
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
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

struct FClientRefreshPSNAuthTokenRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	int32_t IssuerId; // 0x18
	FString RedirectUri; // 0x20
};

struct FRigUnit_GetJointTransform : FRigUnitMutable {
	FName Joint; // 0x68
	ETransformGetterType Type; // 0x70
	ETransformSpaceMode TransformSpace; // 0x71
	FTransform BaseTransform; // 0x80
	FName BaseJoint; // 0xb0
	FTransform Output; // 0xc0
};

struct FLandscapeSplineSegmentConnection {
	ULandscapeSplineControlPoint* ControlPoint; // 0x0
	float TangentLen; // 0x8
	FName SocketName; // 0xc
};

struct FPowerIKExcludedBone {
	FName BoneName; // 0x0
};

struct FExternalToolDefinition {
	FString ToolName; // 0x0
	FFilePath ExecutablePath; // 0x10
	FString CommandLineOptions; // 0x20
	FDirectoryPath WorkingDirectory; // 0x30
	FString ScriptExtension; // 0x40
	FDirectoryPath ScriptDirectory; // 0x50
};

struct FAdminRunTaskResult : FPlayFabResultCommon {
	FString TaskInstanceId; // 0x8
};

struct FYMetaDataTableRowSettings : FYDataTableRowBase {
	int32_t m_maximumGenericAwaredSoftCurrency; // 0x10
	FDataTableRowHandle m_defaultScrappingRow; // 0x18
	float m_softCurrencyRerollCost; // 0x28
};

struct FBlueprintInputAxisKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FKey AxisKey; // 0x8
	FName FunctionNameToBind; // 0x20
};

struct FRigVMRegisterOffset {
	TArray<int32_t> Segments; // 0x0
	ERigVMRegisterType Type; // 0x10
	FName CPPType; // 0x14
	UScriptStruct* ScriptStruct; // 0x20
	UScriptStruct* ParentScriptStruct; // 0x28
	int32_t ArrayIndex; // 0x30
	uint16_t ElementSize; // 0x34
	FString CachedSegmentPath; // 0x38
};

struct FYNPCAnimationAssetDataRow : FYDataTableRowBase {
	bool m_randomizeEmoteAnimation; // 0x10
	TArray<FSingleAnimationPlayData> m_animationPlayData; // 0x18
};

struct FVirtualKeyboardOptions {
	bool bEnableAutocorrect; // 0x0
};

struct FAnimNode_PowerIK : FAnimNode_SkeletalControlBase {
	FName CharacterRoot; // 0xc8
	float RootRotationMultiplier; // 0xd0
	FPowerIKBodyInertia BodyInertia; // 0xd4
	TArray<FPowerIKBoneBendDirection> BendDirections; // 0xe8
	TArray<FPowerIKExcludedBone> ExcludedBones; // 0xf8
	TArray<FPowerIKBoneLimit> JointLimits; // 0x108
	TArray<FPowerIKEffector> Effectors; // 0x118
	float SmoothingMaxSpeedMultiplier; // 0x128
	float SmoothingMaxDistanceMultiplier; // 0x12c
	FPowerIKCenterOfGravity CenterOfGravityConstraint; // 0x130
	int32_t MaxSquashIterations; // 0x140
	int32_t MaxStretchIterations; // 0x144
	int32_t MaxFinalIterations; // 0x148
	bool AllowBoneTranslation; // 0x14c
	float SolverAlpha; // 0x150
	float DebugDrawSize; // 0x154
};

struct FYCurrencyItem {
	FString currencyName; // 0x0
	int32_t Amount; // 0x10
};

struct FInputAxisConfigEntry {
	FName AxisKeyName; // 0x0
	FInputAxisProperties AxisProperties; // 0x8
};

struct FYMissionProgressionUpdated {
	FString m_userId; // 0x0
	FString m_currentMissionID; // 0x10
	int32_t m_progress; // 0x20
	TArray<FYCustomItemInfo> m_rewards; // 0x28
	TArray<FYCurrencyItem> m_updatedCurrencies; // 0x38
	bool m_shouldShowPopup; // 0x48
};

struct FRigUnit_CollectionItems : FRigUnit_CollectionBase {
	TArray<FRigElementKey> Items; // 0x8
	FRigElementKeyCollection Collection; // 0x18
};

struct FYAnnouncementRequestAysncLoadData {
	FDataTableRowHandle m_rowHandle; // 0x0
	FYAnnouncementPlaybackOptions m_playbackOptions; // 0x10
};

struct FYGetBatchedRankedSeasonsRequest {
	int32_t numTopPlayers; // 0x0
};

struct FSessionServiceLog {
	FName Category; // 0x0
	FString Data; // 0x8
	FGuid instanceId; // 0x18
	double TimeSeconds; // 0x28
	char Verbosity; // 0x30
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

struct FClientLoginWithPlayFabRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FServerWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
};

struct FPaperTileInfo {
	UPaperTileSet* TileSet; // 0x0
	int32_t PackedTileIndex; // 0x8
};

struct FFloatCurve : FAnimCurveBase {
	FRichCurve FloatCurve; // 0x18
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

struct FRigUnit_VisualDebugTransformItemSpace : FRigUnit_DebugBase {
	FTransform Value; // 0x10
	bool bEnabled; // 0x40
	float Thickness; // 0x44
	float Scale; // 0x48
	FRigElementKey Space; // 0x4c
};

struct FInterpLookupPoint {
	FName GroupName; // 0x0
	float Time; // 0x8
};

struct FYExecuteFriendStateChangeUserName {
	FString internalUserId; // 0x0
	FString Username; // 0x10
	EYFriendState stateToChangeTo; // 0x20
};

struct FBoneReductionSetting {
	TArray<FName> BonesToRemove; // 0x0
};

struct FServerGetPlayerStatisticsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	TArray<UPlayFabJsonObject*> Statistics; // 0x18
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
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

struct FClientLinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceID; // 0x10
	FString DeviceModel; // 0x20
	bool ForceLink; // 0x30
	FString OS; // 0x38
};

struct FBakedDataInfo {
	FName Name; // 0x0
	int32_t Size; // 0x8
};

struct FYOverridenModData {
	UCurveFloat* m_overridenRecoilCurve; // 0x0
	FDataTableRowHandle m_transportHandle; // 0x8
	FDataTableRowHandle m_fxCategory; // 0x18
	FYFullscreenCrosshairData m_crosshairData; // 0x28
};

struct FServerGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FCustomInput {
	FName InputName; // 0x0
	FExpressionInput Input; // 0x8
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

struct FYBIHook_TutorialTnc : FYBaseAnalyticsEvent {
	int32_t step; // 0xa8
	FString Action; // 0xb0
};

struct FRigVMMemoryContainer {
	bool bUseNameMap; // 0x0
	ERigVMMemoryType MemoryType; // 0x1
	TArray<FRigVMRegister> Registers; // 0x8
	TArray<FRigVMRegisterOffset> RegisterOffsets; // 0x18
	TArray<char> Data; // 0x28
	TArray<UScriptStruct*> ScriptStructs; // 0x38
	TMap<FName, int32_t> NameMap; // 0x48
	bool bEncounteredErrorDuringLoad; // 0x98
};

struct FClothingAssetData_Legacy {
	FName AssetName; // 0x0
	FString ApexFileName; // 0x8
	bool bClothPropertiesChanged; // 0x18
	FClothPhysicsProperties_Legacy PhysicsProperties; // 0x1c
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

struct FMultiplayerCreateMatchmakingTicketResult : FPlayFabResultCommon {
	FString TicketId; // 0x8
};

struct FRigUnit_AimBone : FRigUnit_HighlevelBaseMutable {
	FName Bone; // 0x68
	FRigUnit_AimBone_Target primary; // 0x70
	FRigUnit_AimBone_Target secondary; // 0x98
	float weight; // 0xc0
	bool bPropagateToChildren; // 0xc4
	FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
	FCachedRigElement CachedBoneIndex; // 0x110
	FCachedRigElement PrimaryCachedSpace; // 0x124
	FCachedRigElement SecondaryCachedSpace; // 0x138
};

struct FInputAlphaBoolBlend {
	float BlendInTime; // 0x0
	float BlendOutTime; // 0x4
	EAlphaBlendOption BlendOption; // 0x8
	bool bInitialized; // 0x9
	UCurveFloat* CustomCurve; // 0x10
	FAlphaBlend AlphaBlend; // 0x18
};

struct FServerGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FSourceEffectEQSettings {
	TArray<FSourceEffectEQBand> EQBands; // 0x0
};

struct FMyPluginStruct {
	FString TestString; // 0x0
};

struct FCRSimSoftCollision {
	FTransform Transform; // 0x0
	ECRSimSoftCollisionType ShapeType; // 0x30
	float MinimumDistance; // 0x34
	float MaximumDistance; // 0x38
	EControlRigAnimEasingType FalloffType; // 0x3c
	float Coefficient; // 0x40
	bool bInverted; // 0x44
};

struct FRigUnit_MathVectorMakeBezierFourPoint : FRigUnit_MathVectorBase {
	FCRFourPointBezier Bezier; // 0x8
};

struct FEventGraphFastCallPair {
	UFunction* FunctionToPatch; // 0x0
	int32_t EventGraphCallOffset; // 0x8
};

struct FRigUnit_MathFloatBinaryOp : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float Result; // 0x10
};

struct FYItemRecipe {
	TArray<FYItemRecipeIngredient> m_itemRecipeIngredients; // 0x0
	int32_t m_upgradeTimeMinutes; // 0x10
	FYCostEntryRow m_skipCraftingMaxCost; // 0x18
};

struct FSlotEvaluationPose {
	EAdditiveAnimationType AdditiveType; // 0x0
	float weight; // 0x4
};

struct FSubmixEffectSubmixEQSettings {
	TArray<FSubmixEffectEQBand> EQBands; // 0x0
};

struct FServerListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FYSeasonRewardLevel {
	int32_t m_unlockXP; // 0x0
	TArray<FDataTableRowHandle> m_basicRewards; // 0x8
	TArray<FDataTableRowHandle> m_paidRewards; // 0x18
};

struct FScrollBorderStyle : FSlateWidgetStyle {
	FSlateBrush TopShadowBrush; // 0x8
	FSlateBrush BottomShadowBrush; // 0x90
};

struct FYRequestUserChangeStation {
	FString Context; // 0x0
	FYStationConnect connectData; // 0x10
};

struct FYFindActivityLocationsRequestData {
	int32_t m_amount; // 0x0
	EYActivityType m_type; // 0x4
	float m_minimumDistanceToPlayers; // 0x8
	AYActivityLocationLinked* m_areaLinkedLocationFilter; // 0x10
};

struct FRootMotionSourceGroup {
	char bHasAdditiveSources : 1; // 0x28
	char bHasOverrideSources : 1; // 0x28
	char bHasOverrideSourcesWithIgnoreZAccumulate : 1; // 0x28
	char bIsAdditiveVelocityApplied : 1; // 0x28
	FRootMotionSourceSettings LastAccumulatedSettings; // 0x29
	FVector_NetQuantize10 LastPreAdditiveVelocity; // 0x2c
};

struct FYContractsProgress {
	TArray<FYContractProgress> activeContractsProgressClamp; // 0x0
};

struct FYSortingRequest {
	TArray<FDataTableRowHandle> m_items; // 0x0
	FString m_userId; // 0x10
	EYSortingRequestType m_type; // 0x20
	bool m_sortAlphabetical; // 0x21
};

struct FInlineTextImageStyle : FSlateWidgetStyle {
	FSlateBrush Image; // 0x8
	int16_t Baseline; // 0x90
};

struct FControlRigSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FControlRigSequenceObjectReferences> References; // 0x10
};

struct FYInventoryItem {
	FString m_customItemID; // 0x0
	FDataTableRowHandle m_item; // 0x10
	EYItemRarityType m_rarityType; // 0x20
	int32_t m_amount; // 0x24
	int32_t m_durability; // 0x28
	float m_weight; // 0x2c
	FYStoredModData m_mods; // 0x30
	TArray<FDataTableRowHandle> m_vanityEntries; // 0x40
	FYProspectorBadgeData m_prospectorBadgeData; // 0x50
	FDataTableRowHandle m_insurance; // 0x88
};

struct FYPlayerInventory {
	int32_t m_permutationIndex; // 0x0
	int32_t m_inventoryComponentId; // 0x4
	TArray<FYInventoryItem> m_replicatedItems; // 0x8
};

struct FYAIAggroTuning {
	float m_weightDistance; // 0x0
	float m_weightToken; // 0x4
	float m_weightNotInDBNO; // 0x8
	float m_weightTypeBonus; // 0xc
	float m_weightDamageReceived; // 0x10
	float m_weightVisibility; // 0x14
	float m_weightTimeSinceLastSeen; // 0x18
	float m_weightTimeTargetAcquired; // 0x1c
	float m_lastSeenTimeout; // 0x20
	float m_lastSharedSenseTimeout; // 0x24
	float m_lastHeardTimeout; // 0x28
	float m_distanceReference; // 0x2c
	float m_minDistanceToBeInvisibleInsideHideableFoliage; // 0x30
	float m_distancePanicThresholdForPlayer; // 0x34
	float m_distancePanicPlayerMultiplier; // 0x38
	float m_targetTypePlayerBonus; // 0x3c
	float m_acquireTimeMax; // 0x40
	float m_acquireTimeMin; // 0x44
	float m_damageReceivedDecayPerSecond; // 0x48
	float m_damageReceivedMax; // 0x4c
};

struct FYPlayerCharacterStateDelegateBinding {
	FMulticastInlineDelegate OnStateDeActivated; // 0x0
	FMulticastInlineDelegate OnStateActivated; // 0x10
	TArray<FDelegate> m_activationDelegates; // 0x20
	TArray<FDelegate> m_deactivationDelegates; // 0x30
};

struct FClientCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FYActiveWeaponCharacterInitializationData {
	FString m_customItemID; // 0x0
	FDataTableRowHandle m_rowHandle; // 0x10
	FYStoredModData m_mods; // 0x20
	TArray<FDataTableRowHandle> m_gearStoreUpgrades; // 0x30
	TArray<FDataTableRowHandle> m_vanityEntries; // 0x40
};

struct FRigUnit_DebugRectangleItemSpace : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Scale; // 0xb0
	float Thickness; // 0xb4
	FRigElementKey Space; // 0xb8
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FMultiplayerListPartyQosServersResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FYMulticastHitscanReplicationData {
	TArray<FYHitscanTraceEntry> m_traceEntries; // 0x0
	FDataTableRowHandle m_transportDataTableRow; // 0x10
	FDataTableRowHandle m_impactDataTableRow; // 0x20
	FDataTableRowHandle m_damageOriginTableRow; // 0x30
	AActor* m_owner; // 0x40
};

struct FServerUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FClientRegisterPlayFabUserResult : FPlayFabResultCommon {
	UPlayFabJsonObject* EntityToken; // 0x8
	FString PlayFabId; // 0x10
	FString SessionTicket; // 0x20
	UPlayFabJsonObject* SettingsForUser; // 0x30
	FString Username; // 0x38
};

struct FClientGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
	FString OverrideLabel; // 0x18
};

struct FYUpdatePlayerActiveContractsRequest {
	FString UserId; // 0x0
	TArray<FYContractProgressData> contractsProgress; // 0x10
};

struct FAnimSlotInfo {
	FName SlotName; // 0x0
	TArray<float> ChannelWeights; // 0x8
};

struct FYMute {
	FString UserId; // 0x0
	int32_t durationSeconds; // 0x10
	EYMuteReason Reason; // 0x14
};

struct FMovieSceneEventSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneEventSectionData eventData; // 0x20
	char bFireEventsWhenForwards : 1; // 0xa8
	char bFireEventsWhenBackwards : 1; // 0xa8
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

struct FSpinBoxStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundBrush; // 0x8
	FSlateBrush HoveredBackgroundBrush; // 0x90
	FSlateBrush ActiveFillBrush; // 0x118
	FSlateBrush InactiveFillBrush; // 0x1a0
	FSlateBrush ArrowsImage; // 0x228
	FSlateColor ForegroundColor; // 0x2b0
	FMargin TextPadding; // 0x2d8
};

struct FMultiplayerListQosServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeAllRegions; // 0x10
};

struct FYModifyCustomItemResult {
	FString UserId; // 0x0
	bool SUCCESS; // 0x10
	TArray<FYCustomItemInfo> itemsUpdated; // 0x18
	TArray<FString> itemsRemoved; // 0x28
};

struct FRigUnit_DebugArcItemSpace : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Radius; // 0xb0
	float MinimumDegrees; // 0xb4
	float MaximumDegrees; // 0xb8
	float Thickness; // 0xbc
	int32_t Detail; // 0xc0
	FRigElementKey Space; // 0xc4
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FServerRefreshGameServerInstanceHeartbeatRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FAdminDeleteMasterPlayerAccountResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
	FString TitleIds; // 0x18
};

struct FMovieSceneTransformMask {
	uint32_t Mask; // 0x0
};

struct FClientLinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString ServerAuthCode; // 0x18
};

struct FMovieSceneGeometryCacheSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCacheSectionTemplateParameters Params; // 0x20
};

struct FRigUnit_GetControlInteger : FRigUnit {
	FName Control; // 0x8
	int32_t IntegerValue; // 0x10
	int32_t Minimum; // 0x14
	int32_t Maximum; // 0x18
	FCachedRigElement CachedControlIndex; // 0x1c
};

struct FYUpdateReadStateResponse {
	EYUpdateReadStateResult returnResult; // 0x0
	FString messageId; // 0x8
	bool hasRead; // 0x18
};

struct FAdminGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FExperimentationGetExperimentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Experiments; // 0x8
};

struct FTransformParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel Translation[0x3]; // 0x8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x1e8
	FMovieSceneFloatChannel Scale[0x3]; // 0x3c8
};

struct FYPersistentMatchReset {
	FString UserId; // 0x0
};

struct FRigUnit_AlphaInterp : FRigUnit_SimBase {
	float Value; // 0x8
	float Scale; // 0xc
	float Bias; // 0x10
	bool bMapRange; // 0x14
	FInputRange InRange; // 0x18
	FInputRange OutRange; // 0x20
	bool bClampResult; // 0x28
	float ClampMin; // 0x2c
	float ClampMax; // 0x30
	bool bInterpResult; // 0x34
	float InterpSpeedIncreasing; // 0x38
	float InterpSpeedDecreasing; // 0x3c
	float Result; // 0x40
	FInputScaleBiasClamp ScaleBiasClamp; // 0x44
};

struct FYVPToRewarsdDataTableRow : FYDataTableRowBase {
	FText m_rewardsPackageName; // 0x10
	int32_t m_vpThreshold; // 0x28
	TSoftObjectPtr<UDataTable> m_rewardsDropTablePath; // 0x30
};

struct FAnimNode_ModifyCurve : FAnimNode_Base {
	FPoseLink SourcePose; // 0x10
	TArray<float> CurveValues; // 0x20
	TArray<FName> CurveNames; // 0x30
	float Alpha; // 0x50
	EModifyCurveApplyMode ApplyMode; // 0x54
};

struct FNegotiationResponse {
	int32_t NegotiateVersion; // 0x0
	FString ConnectionId; // 0x8
	FString ConnectionToken; // 0x18
	FString URL; // 0x28
	FString AccessToken; // 0x38
	FString Error; // 0x48
	TArray<FNegotiationTransport> AvailableTransports; // 0x58
};

struct FYAbilityActionSurveillanceData : FYAbilityActionDataTableRow {
	float m_radius; // 0x78
};

struct FStructure_DeveloperCredits {
	FText Department_9_0EA9FE534C653A4FD65C78B8B079FD73; // 0x0
	FText Role_10_2FF3DD614F25ED22B8737CA8063EA90C; // 0x18
	FText Name_8_BC4B8E2E41DD181723F964A585391D2D; // 0x30
};

struct FYAIMeleeAttackDefinition {
	FGameplayTag m_requiredComboTag; // 0x0
	bool m_predictProjectilePath; // 0x8
	FPredictProjectilePathParams m_predictProjectilePathParameters; // 0x10
	float m_minDistanceToPredictedHitToAllowAttack; // 0x70
	float m_meleeAttackRangeMin; // 0x74
	float m_meleeAttackRangeMax; // 0x78
	float m_velocityOwnerMin; // 0x7c
	float m_blockTime; // 0x80
	float m_meleeAttackDot2D; // 0x84
	float m_meleeAttackMaxVelocityPredicition; // 0x88
	float m_meleeDamageCheckDistanceOffset; // 0x8c
	FDataTableRowHandle m_meleeAttack; // 0x90
	TArray<TSoftObjectPtr<UAnimMontage>> m_meleeAttackMontages; // 0xa0
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

struct FYSessionUserData {
	FString activeSessionId; // 0x0
	uint64_t utcLastTimeChanged; // 0x10
	int32_t matchState; // 0x18
};

struct FVehicleGearData {
	float Ratio; // 0x0
	float DownRatio; // 0x4
	float UpRatio; // 0x8
};

struct FYLeaderBoardEntryData {
	FString m_playerName; // 0x0
	int32_t m_playerRank; // 0x10
	int32_t m_playerPlacement; // 0x14
	bool m_isPlaced; // 0x18
	bool m_isLocalPlayer; // 0x19
};

struct FNiagaraTypeDefinition {
	UObject* ClassStructOrEnum; // 0x0
	uint16_t UnderlyingType; // 0x8
};

struct FNiagaraMeshMaterialOverride {
	UMaterialInterface* ExplicitMat; // 0x0
	FNiagaraUserParameterBinding UserParamBinding; // 0x8
};

struct FPlayFabBaseModel {
	FPlayFabError responseError; // 0x0
	UPlayFabJsonObject* responseData; // 0x38
};

struct FYPooledActorEntry {
	AActor* m_actor; // 0x0
	char m_isInUse : 1; // 0x8
};

struct FYGetBatchedRankedSeasonsResponse {
	FYRankSeasonsData hofData; // 0x0
	FYPlayersRankedSeasonData topNPlayersActiveRankedSeason; // 0x10
	FYPlayerRankedSeasonData localPlayerRankedSeasonData; // 0x20
};

struct FRigUnit_MapRange_Float : FRigUnit {
	float Value; // 0x8
	float MinIn; // 0xc
	float MaxIn; // 0x10
	float MinOut; // 0x14
	float MaxOut; // 0x18
	float Result; // 0x1c
};

struct FYCharacterCustomizationSlotRow : FYDataTableRowBase {
	FText m_name; // 0x10
	TSoftObjectPtr<UTexture2D> m_icon; // 0x28
	EYCustomizationCategory m_category; // 0x50
	FName m_defaultSocketAttachmentName; // 0x54
	bool m_containColorSelection; // 0x5c
	bool m_visualizedOnlyAtCustomizationItemPreview; // 0x5d
};

struct FYLootItemDataTableRow : FYItemDataTableRowBase {
	EYPickupType m_type; // 0x310
	TSoftClassPtr<UObject> m_pickupActorClass; // 0x318
	FDataTableRowHandle m_additionalRowHandle; // 0x340
	bool m_disableAfterInteractionCompleted; // 0x350
	TArray<TSoftObjectPtr<UObject>> m_meshes; // 0x358
	bool m_showInteractionWidget; // 0x368
	bool m_showNotificationMessage; // 0x369
	bool m_displayItemAmount; // 0x36a
	bool m_showActorUIComponent; // 0x36b
	TSoftClassPtr<UObject> m_widgetClass; // 0x370
	FYActorUIWidgetData m_uiWidgetData; // 0x398
	bool m_blockMovementWhileInteracting; // 0x438
	FDataTableRowHandle m_pickUpSoundRowHandle; // 0x440
};

struct FRigUnit_MathTransformSelectBool : FRigUnit_MathTransformBase {
	bool Condition; // 0x8
	FTransform IfTrue; // 0x10
	FTransform IfFalse; // 0x40
	FTransform Result; // 0x70
};

struct FMultiplayerDeleteCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Name; // 0x10
};

struct FYWeaponTransportPhysicActorData {
	AActor* m_actorClass; // 0x0
	float m_initialActorSpeed; // 0x8
	float m_initialActorOffset; // 0xc
};

struct FServerGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
};

struct FClientAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FPerSkeletonAnimationSharingSetup {
	USkeleton* Skeleton; // 0x0
	USkeletalMesh* SkeletalMesh; // 0x8
	UAnimSharingTransitionInstance* BlendAnimBlueprint; // 0x10
	UAnimSharingAdditiveInstance* AdditiveAnimBlueprint; // 0x18
	UAnimationSharingStateProcessor* StateProcessorClass; // 0x20
	TArray<FAnimationStateEntry> AnimationStates; // 0x28
};

struct FYWeaponSuitableModsCombination {
	TArray<FName> m_modCombinations; // 0x0
};

struct FYShopRelevantDataUpdated {
	FYCurrency Currency; // 0x0
	TArray<FYShopPromotion> shopPromotions; // 0x8
	TArray<FYShopOffer> shopOffers; // 0x18
};

struct FYSetUserDataRequest {
	TMap<FString, FString> m_keysValues; // 0x0
	FString m_playfabId; // 0x50
	bool m_readOnly; // 0x60
};

struct FRigUnit_MathQuaternionRotationOrder : FRigUnit_MathBase {
	EControlRigRotationOrder RotationOrder; // 0x8
};

struct FYCollectibleLootBucketRow : FYDataTableRowBase {
	TArray<FDataTableRowHandle> m_bucketItems; // 0x10
};

struct FYAttachment {
	FString ID; // 0x0
	EYAttachmentType attachmentType; // 0x10
	FString attachmentTypeId; // 0x18
};

struct FProfilesSetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Permissions; // 0x10
};

struct FLevelSequenceCameraSettings {
	bool bOverrideAspectRatioAxisConstraint; // 0x0
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x1
};

struct FYAISquadDefinition {
	float m_spawnWeight; // 0x0
	TArray<FYSpawnTypeInfo> m_ais; // 0x8
};

struct FYCharacterCustomizationRowBase : FYVanityItemRowBase {
	TSoftObjectPtr<USkeletalMesh> m_skelMesh1stP; // 0x378
	UAnimMontage* m_animationToPlayWhenActivated; // 0x3a0
	UAnimSequence* m_animationSequence; // 0x3a8
	TSoftObjectPtr<USkeletalMesh> m_skelMesh3rdP; // 0x3b0
	TArray<FYCharacterCustomizationPieceCollection> m_materialCollections; // 0x3d8
	FName m_socketOverrideAttachName; // 0x3e8
	int32_t m_materialIndexOverride; // 0x3f0
	EYCustomizationBodyType m_bodyType; // 0x3f4
	EYCustomizationCategory m_customizationCategoryType; // 0x3f5
	bool m_shouldMerge; // 0x3f6
	bool m_shouldShowIngame; // 0x3f7
	bool m_ignoreForAutomationTests; // 0x3f8
	bool m_applyRefPoseOverride; // 0x3f9
	float m_duration; // 0x3fc
};

struct FChaosPhysicsSettings {
	EChaosThreadingMode DefaultThreadingModel; // 0x0
	EChaosSolverTickMode DedicatedThreadTickMode; // 0x1
	EChaosBufferMode DedicatedThreadBufferMode; // 0x2
};

struct FRigUnit_SetSpaceInitialTransform : FRigUnitMutable {
	FName SpaceName; // 0x68
	FTransform Transform; // 0x70
	FTransform Result; // 0xa0
	EBoneGetterSetterMode Space; // 0xd0
	FCachedRigElement CachedSpaceIndex; // 0xd4
};

struct FMovieSceneFieldEntry_ChildTemplate {
	uint16_t ChildIndex; // 0x0
	ESectionEvaluationFlags Flags; // 0x2
	FFrameNumber ForcedTime; // 0x4
};

struct FRigUnit_CCDIKPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float weight; // 0xb4
	int32_t MaxIterations; // 0xb8
	bool bStartFromTail; // 0xbc
	float BaseRotationLimit; // 0xc0
	TArray<FRigUnit_CCDIK_RotationLimitPerItem> RotationLimits; // 0xc8
	bool bPropagateToChildren; // 0xd8
	FRigUnit_CCDIK_WorkData WorkData; // 0xe0
};

struct FYProspectorRankRow : FYDataTableRowBase {
	FText m_rankAsText; // 0x10
	int32_t m_startRank; // 0x28
};

struct FRigUnit_BinaryTransformOp : FRigUnit {
	FTransform Argument0; // 0x10
	FTransform Argument1; // 0x40
	FTransform Result; // 0x70
};

struct FBakedCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FBakedStringCustomAttribute> StringAttributes; // 0x8
	TArray<FBakedIntegerCustomAttribute> IntAttributes; // 0x18
	TArray<FBakedFloatCustomAttribute> FloatAttributes; // 0x28
};

struct FSubmixEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FYPendingSquadInvites {
	TArray<FYSquadInvite> invites; // 0x0
};

struct FDataInitiateFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
	TArray<UPlayFabJsonObject*> UploadDetails; // 0x18
};

struct FClientUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
};

struct FYRemoveFriendRequestResult {
	FString UserId; // 0x0
	FString OperationId; // 0x10
	EYFriendActionResult Result; // 0x20
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

struct FPlane : FVector {
	float W; // 0xc
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

struct FBakedStringCustomAttribute {
	FName AttributeName; // 0x0
	FStringCurve StringCurve; // 0x8
};

struct FYGetUserDataRequest {
	TArray<FString> m_keys; // 0x0
	FString m_playfabId; // 0x10
	bool m_readOnly; // 0x20
};

struct FConstraintData {
	FConstraintDescriptor Constraint; // 0x0
	float weight; // 0x10
	bool bMaintainOffset; // 0x14
	FTransform Offset; // 0x20
	FTransform CurrentTransform; // 0x50
};

struct FRigUnit_NoiseFloat : FRigUnit_MathBase {
	float Value; // 0x8
	float Speed; // 0xc
	float Frequency; // 0x10
	float Minimum; // 0x14
	float Maximum; // 0x18
	float Result; // 0x1c
	float Time; // 0x20
};

struct FAdminUpdatePlayerSharedSecretRequest : FPlayFabRequestCommon {
	bool Disabled; // 0x8
	FString FriendlyName; // 0x10
	FString SecretKey; // 0x20
};

struct FAdminDeleteMasterPlayerAccountRequest : FPlayFabRequestCommon {
	FString MetaData; // 0x8
	FString PlayFabId; // 0x18
};

struct FClientAttributeInstallRequest : FPlayFabRequestCommon {
	FString Adid; // 0x8
	FString Idfa; // 0x18
};

struct FSpriteGeometryShape {
	ESpriteShapeType ShapeType; // 0x0
	TArray<FVector2D> Vertices; // 0x8
	FVector2D BoxSize; // 0x18
	FVector2D BoxPosition; // 0x20
	float Rotation; // 0x28
	bool bNegativeWinding; // 0x2c
};

struct FYClientSkillUpdated {
	int32_t skill; // 0x0
	int32_t deviation; // 0x4
};

struct FYMovementCosmeticDataPerState {
	UMatineeCameraShake* m_cameraShakeStateActivated; // 0x0
	UMatineeCameraShake* m_cameraShakeStateDeactivated; // 0x8
};

struct FYRequestServerMapResult {
	FYGameInfo GameInfo; // 0x0
};

struct FYVanityBackendItemInfo {
	FString vanity_id; // 0x0
	int32_t Amount; // 0x10
};

struct FWidgetAnimationBinding {
	FName WidgetName; // 0x0
	FName SlotWidgetName; // 0x8
	FGuid AnimationGuid; // 0x10
	bool bIsRootWidget; // 0x20
};

struct FRigUnit_KalmanTransform : FRigUnit_SimBase {
	FTransform Value; // 0x10
	int32_t BufferSize; // 0x40
	FTransform Result; // 0x50
	TArray<FTransform> Buffer; // 0x80
	int32_t LastInsertIndex; // 0x90
};

struct FYResourceSessionRequestData {
	FYSessionResourceUserEntry m_sessionUserEntry; // 0x0
	bool m_clearResources; // 0x20
	bool m_forceRefreshEvaluateState; // 0x21
};

struct FControlRigComponentMappedCurve {
	FName Source; // 0x0
	FName Target; // 0x8
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

struct FWaterCurveSettings {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FClientWriteClientCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EventName; // 0x28
	FString Timestamp; // 0x38
};

struct FSoundClassAdjuster {
	USoundClass* SoundClassObject; // 0x0
	float VolumeAdjuster; // 0x8
	float PitchAdjuster; // 0xc
	float LowPassFilterFrequency; // 0x10
	char bApplyToChildren : 1; // 0x14
	float VoiceCenterChannelVolumeAdjuster; // 0x18
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

struct FYPlayerAwarenessTuningDataTableRow : FYDataTableRowBase {
	int32_t m_maxNotificationDistance; // 0x10
	int32_t m_targetingMaxNotificationDistance; // 0x14
	float m_dotProduct; // 0x18
	float m_dotScalingDistancePerMeterMultiplier; // 0x1c
	float m_dotMaxmimumThreshold; // 0x20
	float m_requiredAimAtDuration; // 0x24
	float m_requiredAimAtDurationTargeting; // 0x28
};

struct FPurchaseInfo {
	FString Identifier; // 0x0
	FString DisplayName; // 0x10
	FString DisplayDescription; // 0x20
	FString DisplayPrice; // 0x30
};

struct FMediaCaptureDevice {
	FText DisplayName; // 0x0
	FString URL; // 0x18
};

struct FYInviteToSquadByNameResponse {
	EYSquadInviteResult Result; // 0x0
};

struct FYConnectionLatencyData {
	int32_t m_totalSamplesNetSaturated; // 0x0
	TArray<float> m_ue4ExactPing; // 0x8
	TArray<float> m_latencySamples; // 0x18
};

struct FMovieSceneCameraAnimSectionData {
	UCameraAnim* CameraAnim; // 0x0
	float PlayRate; // 0x8
	float PlayScale; // 0xc
	float BlendInTime; // 0x10
	float BlendOutTime; // 0x14
	bool bLooping; // 0x18
};

struct FYRaritySettingsEntry {
	float m_seedChance; // 0x0
	TArray<FYRarityItemRoll> m_rarityItemRolls; // 0x8
};

struct FYCurrentlyOverlappingFoliage {
	EPhysicalSurface m_surface; // 0x0
	UAudioComponent* m_audioComponent; // 0x8
	FDataTableRowHandle m_effect; // 0x10
	float m_timeElapsed; // 0x20
};

struct FRigUnit_MathRBFInterpolateQuatBase : FRigUnit_MathRBFInterpolateBase {
	FQuat Input; // 0x10
	ERBFQuatDistanceType DistanceFunction; // 0x20
	ERBFKernelType SmoothingFunction; // 0x21
	float SmoothingAngle; // 0x24
	bool bNormalizeOutput; // 0x28
	FVector TwistAxis; // 0x2c
	FRigUnit_MathRBFInterpolateQuatWorkData WorkData; // 0x40
};

struct FBlueprintInputActionDelegateBinding : FBlueprintInputDelegateBinding {
	FName inputActionName; // 0x4
	EInputEvent InputKeyEvent; // 0xc
	FName FunctionNameToBind; // 0x10
};

struct FServerLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	int32_t IssuerId; // 0x24
	FString PlayFabId; // 0x28
	FString RedirectUri; // 0x38
};

struct FNamedTransform {
	FTransform Value; // 0x0
	FName Name; // 0x30
};

struct FYButtonClickedEvent : FYBaseAnalyticsEvent {
	FString button_name; // 0xa8
	FString parent_name; // 0xb8
};

struct FAnimBlueprintFunction {
	FName Name; // 0x0
	FName Group; // 0x8
	int32_t OutputPoseNodeIndex; // 0x10
	TArray<FName> InputPoseNames; // 0x18
	TArray<int32_t> InputPoseNodeIndices; // 0x28
	bool bImplemented; // 0x60
};

struct FYGetFactionsProgressionResult {
	TArray<FYPlayerFactionProgressData> factions; // 0x0
};

struct FYRankSeasonData {
	FString seasonId; // 0x0
	TArray<FYPlayerRankedSeasonGamemodeData> playersRankedSeasonData; // 0x10
};

struct FYGetPlayerGlobalVanity {
	FString UserId; // 0x0
};

struct FClientGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
};

struct FServerGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FServerMoveItemToUserFromCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FRigUnit_DistributeRotation_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
	TArray<int32_t> ItemRotationA; // 0x10
	TArray<int32_t> ItemRotationB; // 0x20
	TArray<float> ItemRotationT; // 0x30
	TArray<FTransform> ItemLocalTransforms; // 0x40
};

struct FRigUnit_SlideChain : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	float SlideAmount; // 0x78
	bool bPropagateToChildren; // 0x7c
	FRigUnit_SlideChain_WorkData WorkData; // 0x80
};

struct FRigUnit_MathColorBinaryOp : FRigUnit_MathColorBase {
	FLinearColor A; // 0x8
	FLinearColor B; // 0x18
	FLinearColor Result; // 0x28
};

struct FYUserStatisticsEntry {
	FString Name; // 0x0
	int32_t Value; // 0x10
};

struct FMovieSceneMaterialParameterCollectionTemplate : FMovieSceneParameterSectionTemplate {
	UMaterialParameterCollection* MPC; // 0x80
};

struct FPrimaryAssetRulesCustomOverride {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FDirectoryPath FilterDirectory; // 0x8
	FString FilterString; // 0x18
	FPrimaryAssetRules Rules; // 0x28
};

struct FYRequestMaintenanceModeStateResult {
	bool Enabled; // 0x0
};

struct FClientLinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDevice; // 0x8
	FString AndroidDeviceId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	bool ForceLink; // 0x30
	FString OS; // 0x38
};

struct FPowerIKSmoothing {
	bool SmoothPositionOverTime; // 0x0
	float MaxPositionSpeed; // 0x4
	float MaxPositionDistance; // 0x8
	bool SmoothRotationOverTime; // 0xc
	float MaxDegreesSpeed; // 0x10
	float MaxDegreesDistance; // 0x14
};

struct FRigUnit_MathFloatGreater : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FYCompositeQuestProgress {
	FString parentQuestId; // 0x0
	FString compositeName; // 0x10
	int32_t Count; // 0x20
	bool Completed; // 0x24
};

struct FRigPoseElement {
	FCachedRigElement Index; // 0x0
	FTransform GlobalTransform; // 0x20
	FTransform LocalTransform; // 0x50
	float CurveValue; // 0x80
};

struct FAdminRefundPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	FString PlayFabId; // 0x18
	FString Reason; // 0x28
};

struct FYRegionEndpoints {
	TArray<FYMatchmakingRegionEndpointEntry> entries; // 0x0
};

struct FYNotificationItemDataTableRow : FYDataTableRowBase {
	EYNotificationMessageType m_messageType; // 0x10
	float m_duration; // 0x14
	TSoftObjectPtr<UTexture2D> m_textureToShow; // 0x18
	FText m_message; // 0x40
};

struct FCompositeSection : FAnimLinkableElement {
	FName SectionName; // 0x30
	float StartTime; // 0x38
	FName NextSectionName; // 0x3c
	TArray<UAnimMetaData*> MetaData; // 0x48
};

struct FRigUnit_DistributeRotation : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78
	EControlRigAnimEasingType RotationEaseType; // 0x88
	float weight; // 0x8c
	bool bPropagateToChildren; // 0x90
	FRigUnit_DistributeRotation_WorkData WorkData; // 0x98
};

struct FYSpawnTypeInfo {
	EYEnemyType m_type; // 0x0
	int32_t m_amount; // 0x4
	FGameplayTagContainer m_tags; // 0x8
};

struct FNamedLensPreset {
	FString Name; // 0x0
	FCameraLensSettings LensSettings; // 0x10
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

struct FAnimNode_ControlRig : FAnimNode_ControlRigBase {
	UControlRig* ControlRigClass; // 0x170
	UControlRig* ControlRig; // 0x178
	float Alpha; // 0x180
	EAnimAlphaInputType AlphaInputType; // 0x184
	char bAlphaBoolEnabled : 1; // 0x185
	char bSetRefPoseFromSkeleton : 1; // 0x185
	FInputScaleBias AlphaScaleBias; // 0x188
	FInputAlphaBoolBlend AlphaBoolBlend; // 0x190
	FName AlphaCurveName; // 0x1d8
	FInputScaleBiasClamp AlphaScaleBiasClamp; // 0x1e0
	TMap<FName, FName> InputMapping; // 0x210
	TMap<FName, FName> OutputMapping; // 0x260
	int32_t LODThreshold; // 0x360
};

struct FYItemsRemoved {
	FString UserId; // 0x0
	TArray<FString> removedItems; // 0x10
};

struct FYMissionUpdateResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString currentMissionID; // 0x20
	TArray<FYCustomItemInfo> rewards; // 0x30
	bool shouldShowPopup; // 0x40
	int32_t progress; // 0x44
};

struct FGameplayTagSource {
	FName SourceName; // 0x0
	EGameplayTagSourceType SourceType; // 0x8
	UGameplayTagsList* SourceTagList; // 0x10
	URestrictedGameplayTagsList* SourceRestrictedTagList; // 0x18
};

struct FYRequestShowTemporaryNewSelectionData {
	bool m_shouldShow; // 0x0
	FDataTableRowHandle m_requestedRowHandle; // 0x8
	int32_t m_materialIndex; // 0x18
	EYCharacterItemColumnType m_updateType; // 0x1c
};

struct FYUserData {
	FString epicId; // 0x0
	FString UserId; // 0x10
	FString Username; // 0x20
};

struct FYPlayerInfoUserDataEntry {
	int32_t inventoryStashLimit; // 0x0
	int32_t inventoryBagLimit; // 0x4
	int32_t inventorySafeLimit; // 0x8
};

struct FYPlayerHealthAudioData {
	float m_playLowHealthAlarmAtPercent; // 0x0
	FDataTableRowHandle m_lowHealthAlarmStart; // 0x8
	FDataTableRowHandle m_lowHealthAlarmStop; // 0x18
	FDataTableRowHandle m_lowHealthAlarmStopDBNO; // 0x28
	FDataTableRowHandle m_fallingDamageEvent; // 0x38
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

struct FAdminUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DisplayName; // 0x10
	FString PlayFabId; // 0x20
};

struct FServerCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FMovieSceneMediaPlayerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	UMediaSource* MediaSource; // 0x38
	FFrameNumber SectionStartFrame; // 0x40
	bool bLoop; // 0x44
};

struct FNiagaraEventGeneratorProperties {
	int32_t MaxEventsPerFrame; // 0x0
	FName ID; // 0x4
	FNiagaraDataSetCompiledData DataSetCompiledData; // 0x10
};

struct FYPlayerReportResponseData {
	FString m_response; // 0x0
	EYPlayerSupportResult m_result; // 0x10
};

struct FMovieSceneSkeletalAnimationSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneSkeletalAnimationSectionTemplateParameters Params; // 0x20
};

struct FYSkipTechTreeNodeUpgradeRequest {
	FString UserId; // 0x0
	FName nodeId; // 0x10
};

struct FAdminUpdatePolicyRequest : FPlayFabRequestCommon {
	bool OverwritePolicy; // 0x8
	FString PolicyName; // 0x10
	TArray<UPlayFabJsonObject*> Statements; // 0x20
};

struct FTimelineVectorTrack {
	UCurveVector* VectorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName VectorPropertyName; // 0x20
};

struct FServerAddSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FRigUnit_MathColorLerp : FRigUnit_MathColorBase {
	FLinearColor A; // 0x8
	FLinearColor B; // 0x18
	float T; // 0x28
	FLinearColor Result; // 0x2c
};

struct FYSocialProfileUpdated {
	FYPlayerProfile Entry; // 0x0
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

struct FCollectionVectorParameter : FCollectionParameterBase {
	FLinearColor DefaultValue; // 0x18
};

struct FRigUnit_MathQuaternionToEuler : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	EControlRigRotationOrder RotationOrder; // 0x20
	FVector Result; // 0x24
};

struct FYServerTracingData {
	AActor* m_expectedActor; // 0x0
};

struct FYMatchmakingBeginnerFlagSetup {
	bool Enabled; // 0x0
	int32_t matchesPlayedThreshold; // 0x4
	int32_t evacsThreshold; // 0x8
	int32_t consecutiveDeathsThreshold; // 0xc
};

struct FAnimNotifyTrack {
	FName TrackName; // 0x0
	FLinearColor TrackColor; // 0x8
};

struct FYPopUpEvent : FYBaseAnalyticsEvent {
	FString pop_up_name; // 0xa8
	FString action_type; // 0xb8
	FString player_action; // 0xc8
	FString Content; // 0xd8
	int32_t time_to_action; // 0xe8
	int32_t dont_show_again; // 0xec
};

struct FAutoCompleteCommand {
	FString Command; // 0x0
	FString Desc; // 0x10
};

struct FYStateChangedData {
	int64_t m_state; // 0x0
	int64_t m_eventCounter; // 0x8
};

struct FAdminCreateTaskResult : FPlayFabResultCommon {
	FString TaskId; // 0x8
};

struct FPaperSpriteSocket {
	FTransform LocalTransform; // 0x0
	FName SocketName; // 0x30
};

struct FMultiplayerDeleteAssetRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Filename; // 0x10
};

struct FMovieSceneVectorKeyStruct : FMovieSceneVectorKeyStructBase {
	FVector Vector; // 0x28
};

struct FCachedKeyToActionInfo {
	UPlayerInput* PlayerInput; // 0x0
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

struct FYProspectorBadgeData {
	FString ownerID; // 0x0
	FString killedBy; // 0x10
	FString killedHow; // 0x20
	int32_t rank; // 0x30
};

struct FSimpleCurveKey {
	float Time; // 0x0
	float Value; // 0x4
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

struct FDirectLinkMsg_DeltaMessage {
	int32_t DestinationStreamPort; // 0x0
	int8_t BatchCode; // 0x4
	int32_t MessageCode; // 0x8
	char Kind; // 0xc
	bool CompressedPayload; // 0xd
	TArray<char> Payload; // 0x10
};

struct FInputAxisKeyMapping {
	FName AxisName; // 0x0
	float Scale; // 0x8
	FKey Key; // 0x10
	int32_t R; // 0x28
	int32_t G; // 0x2c
	int32_t B; // 0x30
};

struct FYSetViewTargetData {
	TWeakObjectPtr<AActor> m_newViewTarget; // 0x0
	FViewTargetTransitionParams m_newTargetTransitionParams; // 0x8
	float m_lockTime; // 0x18
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

struct FMovieSceneTangentData {
	float ArriveTangent; // 0x0
	float LeaveTangent; // 0x4
	float ArriveTangentWeight; // 0x8
	float LeaveTangentWeight; // 0xc
	ERichCurveTangentWeightMode TangentWeightMode; // 0x10
};

struct FDatasmithAssetImportOptions {
	FName PackagePath; // 0x0
};

struct FAdminGetPlayerStatisticDefinitionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FInsightsInsightsGetOperationStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OperationId; // 0x10
};

struct FMultiplayerListMultiplayerServersRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t PageSize; // 0x20
	FString Region; // 0x28
	FString SkipToken; // 0x38
};

struct FMovieSceneSubSectionData {
	TWeakObjectPtr<UMovieSceneSubSection> Section; // 0x0
	FGuid ObjectBindingID; // 0x8
	ESectionEvaluationFlags Flags; // 0x18
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

struct FYBoardContractsInitData {
	EYFaction boardFaction; // 0x0
	TArray<FYBoardContractInitData> playerBoardContractsIncludingActiveOnes; // 0x8
};

struct FAnimNode_CopyPoseFromMesh : FAnimNode_Base {
	TWeakObjectPtr<USkeletalMeshComponent> SourceMeshComponent; // 0x10
	char bUseAttachedParent : 1; // 0x18
	char bCopyCurves : 1; // 0x18
	bool bCopyCustomAttributes; // 0x19
	char bUseMeshPose : 1; // 0x1a
	FName RootBoneToCopy; // 0x1c
};

struct FAdminRemovePlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FKTaperedCapsuleElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius0; // 0x48
	float Radius1; // 0x4c
	float Length; // 0x50
};

struct FYDebugAddCustomItem {
	FString UserId; // 0x0
	FString baseItemId; // 0x10
};

struct FMultiplayerListBuildAliasesForTitleResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildAliases; // 0x8
};

struct FYCountPerMap : FYDataTableRowBase {
	int32_t m_count; // 0x10
	TMap<EYMapType, int32_t> m_mapOverride; // 0x18
};

struct FTransformNoScale {
	FVector Location; // 0x0
	FQuat Rotation; // 0x10
};

struct FWaterBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FYPassiveGeneratorType : FYDataTableRowBase {
	FName m_generatorId; // 0x10
	FText m_generatorName; // 0x18
	EYPassiveGeneratorRewardType m_generatorType; // 0x30
	int32_t m_baseGenIntervalMinutes; // 0x34
	int32_t m_baseGenRate; // 0x38
	int32_t m_baseCap; // 0x3c
	EYTechTreeNodePerkType m_capPerkEffector; // 0x40
	EYTechTreeNodePerkType m_genRatePerkEffector; // 0x41
};

struct FHorizonTweenEventWidgetMoveFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	TWeakObjectPtr<UWidget> TweenTargetWeakPtr; // 0xb8
};

struct FYPainTrainActivityStats : FYBaseActivityStats {
	EYPainTrainStatus Status; // 0xb8
	int32_t pain_train_id; // 0xbc
};

struct FYFXCategoryRow : FYBaseFXCategoryRow {
	FName m_trailTargetParameter; // 0xd0
	UParticleSystem* m_trailFX; // 0xd8
	bool m_playTrailVFXEmitterForProjectiles; // 0xe0
	FYWeaponParticleSystemSelector m_trailVFXEmitter; // 0xe8
	UParticleSystem* m_defaultBeamFX; // 0x110
	UParticleSystem* m_defaultSpinupFx; // 0x118
	UParticleSystem* m_projectileParticleSystem; // 0x120
	FYWeaponParticleSystemSelector m_projectileVFXEmitter; // 0x128
	FName m_muzzleSocketName; // 0x150
	FYWeaponParticleSystemSelector m_muzzleVFXEmitter; // 0x158
	FYWeaponParticleSystemSelector m_muzzleVFXEmitter3rdPerson; // 0x180
	FName m_shellEjectSocketName; // 0x1a8
	FYWeaponParticleSystemSelector m_shellEjectVFXEmitter; // 0x1b0
	FName m_beamEndPointParameter; // 0x1d8
	bool m_playImpactEffectOnAutonomous; // 0x1e0
	bool m_fireFxIsLooping; // 0x1e1
	bool m_fireFxIsBeamEndPoint; // 0x1e2
	UCameraShakeBase* m_impactCameraShake; // 0x1e8
	float m_impactShakeInnerRadius; // 0x1f0
	float m_impactShakeOuterRadius; // 0x1f4
};

struct FAimConstraintDescription : FConstraintDescriptionEx {
	FAxis LookAt_Axis; // 0x10
	FAxis LookUp_Axis; // 0x20
	bool bUseLookUp; // 0x30
	FVector LookUpTarget; // 0x34
};

struct FRigUnit_AccumulateFloatAdd : FRigUnit_SimBase {
	float Increment; // 0x8
	float InitialValue; // 0xc
	bool bIntegrateDeltaTime; // 0x10
	float Result; // 0x14
	float AccumulatedValue; // 0x18
};

struct FCameraFilmbackSettings {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
	float SensorAspectRatio; // 0x8
};

struct FAnimNode_CustomProperty : FAnimNode_Base {
	TArray<FName> SourcePropertyNames; // 0x10
	TArray<FName> DestPropertyNames; // 0x20
	UObject* TargetInstance; // 0x30
};

struct FFrameNumberRange {
	FFrameNumberRangeBound LowerBound; // 0x0
	FFrameNumberRangeBound UpperBound; // 0x8
};

struct FRigUnit_CollectionItemAtIndex : FRigUnit_CollectionBase {
	FRigElementKeyCollection Collection; // 0x8
	int32_t Index; // 0x18
	FRigElementKey Item; // 0x1c
};

struct FRigUnit_DebugLineItemSpace : FRigUnit_DebugBaseMutable {
	FVector A; // 0x68
	FVector B; // 0x74
	FLinearColor Color; // 0x80
	float Thickness; // 0x90
	FRigElementKey Space; // 0x94
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FMultiplayerEnableMultiplayerServersForTitleResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
};

struct FYRankedSeasonData {
	FString m_rankedSeasonName; // 0x0
	FDateTime m_endDateTime; // 0x10
	FTimespan m_remainingTime; // 0x18
	bool m_isValidData; // 0x20
	FName m_rowName; // 0x24
};

struct FStreamingTextureBuildInfo {
	uint32_t PackedRelativeBox; // 0x0
	int32_t TextureLevelIndex; // 0x4
	float TexelFactor; // 0x8
};

struct FMovieSceneActorReferenceSectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
	FMovieSceneActorReferenceData ActorReferenceData; // 0x38
};

struct FClientLoginWithNintendoServiceAccountRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString IdentityToken; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FControlRigComponentMappedComponent {
	USceneComponent* Component; // 0x0
	FName ElementName; // 0x8
	ERigElementType ElementType; // 0x10
	EControlRigComponentMapDirection Direction; // 0x11
};

struct FClientLinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FNodeChain {
	TArray<FName> nodes; // 0x0
};

struct FExperimentationGetTreatmentAssignmentResult : FPlayFabResultCommon {
	UPlayFabJsonObject* TreatmentAssignment; // 0x8
};

struct FServerGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FYDebugSetPlayerGamemodeRankRequest {
	int32_t rank; // 0x0
	FString GameMode; // 0x8
};

struct FAnimNode_MakeDynamicAdditive : FAnimNode_Base {
	FPoseLink Base; // 0x10
	FPoseLink Additive; // 0x20
	bool bMeshSpaceAdditive; // 0x30
};

struct FRigUnit_FitChainToCurvePerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FCRFourPointBezier Bezier; // 0x78
	EControlRigCurveAlignment Alignment; // 0xa8
	float Minimum; // 0xac
	float Maximum; // 0xb0
	int32_t SamplingPrecision; // 0xb4
	FVector PrimaryAxis; // 0xb8
	FVector SecondaryAxis; // 0xc4
	FVector PoleVectorPosition; // 0xd0
	TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xe0
	EControlRigAnimEasingType RotationEaseType; // 0xf0
	float weight; // 0xf4
	bool bPropagateToChildren; // 0xf8
	FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100
	FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160
};

struct FAdminGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FYClaimCompletedActiveContractRewardsResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString claimedContractId; // 0x20
	FString newContractId; // 0x30
	TArray<FYCurrencyItem> changedCurrencies; // 0x40
	TArray<FYCustomItemInfo> ItemsGranted; // 0x50
	TArray<FYCustomItemInfo> itemsUpdatedOrRemoved; // 0x60
	FYPlayerFactionProgressData playerFactionProgressData; // 0x70
	EYClaimContractRewardsStatus Status; // 0x88
};

struct FGroupsListMembershipOpportunitiesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FClientReportPlayerClientRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReporteeId; // 0x20
};

struct FYAINavMeshInfo {
	TArray<EYEnemyType> m_supportedEnemyTypes; // 0x0
};

struct FPlatformInterfaceData {
	FName DataName; // 0x0
	EPlatformInterfaceDataType Type; // 0x8
	int32_t IntValue; // 0xc
	float FloatValue; // 0x10
	FString StringValue; // 0x18
	UObject* ObjectValue; // 0x28
};

struct FYBoardsContractsInitData {
	TArray<FYBoardContractsInitData> playerContractsBoards; // 0x0
	FYTimestamp lastBoardRefreshTimeUtc; // 0x10
};

struct FTagAndValue {
	FName Tag; // 0x0
	FString Value; // 0x8
};

struct FSoundWaveEnvelopeTimeData {
	float Amplitude; // 0x0
	float TimeSec; // 0x4
};

struct FRigUnit_TimeOffsetTransform : FRigUnit_SimBase {
	FTransform Value; // 0x10
	float SecondsAgo; // 0x40
	int32_t BufferSize; // 0x44
	float TimeRange; // 0x48
	FTransform Result; // 0x50
	TArray<FTransform> Buffer; // 0x80
	TArray<float> DeltaTimes; // 0x90
	int32_t LastInsertIndex; // 0xa0
	int32_t UpperBound; // 0xa4
};

struct FYPlayerCosmeticReplicatedData {
	FYActiveWeaponCharacterInitializationData m_initData; // 0x0
	int32_t m_selectedWeaponSlot; // 0x50
	bool m_isActive; // 0x54
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

struct FClientAcceptTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FNiagaraVariableLayoutInfo {
	uint32_t FloatComponentStart; // 0x0
	uint32_t Int32ComponentStart; // 0x4
	uint32_t HalfComponentStart; // 0x8
	FNiagaraTypeLayoutInfo LayoutInfo; // 0x10
};

struct FClientGetCharacterStatisticsResult : FPlayFabResultCommon {
	UPlayFabJsonObject* CharacterStatistics; // 0x8
};

struct FRigUnit_FABRIK : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EffectorBone; // 0x70
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float weight; // 0xb4
	bool bPropagateToChildren; // 0xb8
	int32_t MaxIterations; // 0xbc
	FRigUnit_FABRIK_WorkData WorkData; // 0xc0
};

struct FEngineServiceTerminate {
	FString Username; // 0x0
};

struct FPreviewMeshCollectionEntry {
	TSoftObjectPtr<USkeletalMesh> SkeletalMesh; // 0x0
};

struct FTextureFormatSettings {
	TextureCompressionSettings CompressionSettings; // 0x0
	char CompressionNoAlpha : 1; // 0x1
	char CompressionNone : 1; // 0x1
	char CompressionYCoCg : 1; // 0x1
	char SRGB : 1; // 0x1
};

struct FYMatchPhaseData {
	FDataTableRowHandle m_matchFlowRowHandle; // 0x0
	FDataTableRowHandle m_matchPhaseDefinitionRowHandle; // 0x10
	bool m_shouldForcePhaseTransition; // 0x20
};

struct FRigUnit_TwoBoneIKSimple : FRigUnit_HighlevelBaseMutable {
	FName BoneA; // 0x68
	FName BoneB; // 0x70
	FName EffectorBone; // 0x78
	FTransform Effector; // 0x80
	FVector PrimaryAxis; // 0xb0
	FVector SecondaryAxis; // 0xbc
	float SecondaryAxisWeight; // 0xc8
	FVector PoleVector; // 0xcc
	EControlRigVectorKind PoleVectorKind; // 0xd8
	FName PoleVectorSpace; // 0xdc
	bool bEnableStretch; // 0xe4
	float StretchStartRatio; // 0xe8
	float StretchMaximumRatio; // 0xec
	float weight; // 0xf0
	float BoneALength; // 0xf4
	float BoneBLength; // 0xf8
	bool bPropagateToChildren; // 0xfc
	FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x100
	FCachedRigElement CachedBoneAIndex; // 0x140
	FCachedRigElement CachedBoneBIndex; // 0x154
	FCachedRigElement CachedEffectorBoneIndex; // 0x168
	FCachedRigElement CachedPoleVectorSpaceIndex; // 0x17c
};

struct FYPassiveGeneratorCrateResultsReceived {
	FYPassiveGenerator Source; // 0x0
	TArray<FYCurrencyItem> currencies; // 0x18
	TArray<FYCustomItemInfo> customItems; // 0x28
};

struct FKAggregateGeom {
	TArray<FKSphereElem> SphereElems; // 0x0
	TArray<FKBoxElem> BoxElems; // 0x10
	TArray<FKSphylElem> SphylElems; // 0x20
	TArray<FKConvexElem> ConvexElems; // 0x30
	TArray<FKTaperedCapsuleElem> TaperedCapsuleElems; // 0x40
};

struct FNiagaraEmitterScalabilityOverrides {
	TArray<FNiagaraEmitterScalabilityOverride> Overrides; // 0x0
};

struct FYPlayerContractsInitData {
	FString UserId; // 0x0
	FYBoardsContractsInitData playerBoardsContractsIncludingActiveOnes; // 0x10
};

struct FExposureSettings {
	float FixedEV100; // 0x0
	bool bFixed; // 0x4
};

struct FClientLinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString NintendoSwitchDeviceId; // 0x18
};

struct FClientUnlinkGameCenterAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FRigUnit_MathFloatLerp : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float T; // 0x10
	float Result; // 0x14
};

struct FAnimNode_ControlRigInputPose : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
};

struct FAuthenticationValidateEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString EntityToken; // 0x10
};

struct FYEnterMatchResult {
	bool m_succeeded; // 0x0
	FString m_matchTicket; // 0x8
	FString m_ip; // 0x18
	FString m_region; // 0x28
	int32_t m_port; // 0x38
};

struct FYRawStatEntry {
	FString m_statName; // 0x0
	float m_statValue; // 0x10
	float m_oldStatValue; // 0x14
	EYMatchmakeGameModeType m_gameMode; // 0x18
	EYActivityType m_activityType; // 0x19
	FYEOSStatData m_dtStatData; // 0x20
	bool m_isCustomStat; // 0x50
	bool m_hasUpdated; // 0x51
};

struct FYActiveContractAndCorrespondingFaction {
	FString contractId; // 0x0
	FString factionId; // 0x10
};

struct FMultiplayerCreateServerMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString QueueName; // 0x28
};

struct FYWeaponAnimationStaticData {
	TArray<UAnimMontage*> m_weaponAnimationVariations; // 0x0
	TArray<UAnimMontage*> m_playerAnimationThirdPersonVariations; // 0x10
	TArray<UAnimMontage*> m_playerAnimationFirstPersonVariations; // 0x20
	TArray<UAnimMontage*> m_weaponThirdPersonPlayerAnimationVariations; // 0x30
	TArray<UAnimMontage*> m_playerAnimationFirstPersonLowStaminaVariations; // 0x40
	TArray<UAnimMontage*> m_playerAnimationThirdPersonLowStaminaVariations; // 0x50
	float m_desiredTuningPlayDuration; // 0x60
	float m_animationRateScaleOverride; // 0x64
};

struct FYGrantEntry {
	EYGrantType m_grantType; // 0x0
	FDataTableRowHandle m_grantTypeRowHandle; // 0x8
	int32_t m_amount; // 0x18
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

struct FCloudScriptPostFunctionResultForFunctionExecutionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
};

struct FRigUnit_MathRBFInterpolateVectorColor : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorColor_Target> Targets; // 0xb0
	FLinearColor Output; // 0xc0
};

struct FRigUnit_MathRBFInterpolateVectorFloat : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorFloat_Target> Targets; // 0xb0
	float Output; // 0xc0
};

struct FRigUnit_TwistBonesPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FVector TwistAxis; // 0x78
	FVector PoleAxis; // 0x84
	EControlRigAnimEasingType TwistEaseType; // 0x90
	float weight; // 0x94
	bool bPropagateToChildren; // 0x98
	FRigUnit_TwistBones_WorkData WorkData; // 0xa0
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

struct FScreenMessageString {
	uint64_t Key; // 0x0
	FString ScreenMessage; // 0x8
	FColor DisplayColor; // 0x18
	float TimeToDisplay; // 0x1c
	float CurrentTimeDisplayed; // 0x20
	FVector2D TextScale; // 0x24
};

struct FYMissionStepEntry : FYDataTableRowBase {
	FYMissionInitializationData m_missionInitData; // 0x10
};

struct FYContractRewardUIData {
	bool showDivider; // 0x0
	FYContractReward contractReward; // 0x8
};

struct FYItemDetailOverviewData {
	bool m_isItemBlueprint; // 0x0
	FDataTableRowHandle m_itemRowHandle; // 0x8
	EYItemRarityType m_itemRarity; // 0x18
	FString m_shopItemBelongsTo; // 0x20
};

struct FYModAttachEntry {
	TSoftObjectPtr<USkeletalMesh> m_mesh; // 0x0
	FName m_socketAttachmentName; // 0x28
};

struct FDataInitiateFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FYDamageOriginInfo {
	FDataTableRowHandle m_damageOriginTableRowHandle; // 0x0
	FDataTableRowHandle m_damageInfoApplyRowHandle; // 0x10
	EYGameplayContextType m_damageContext; // 0x20
};

struct FRigUnit_BinaryQuaternionOp : FRigUnit {
	FQuat Argument0; // 0x10
	FQuat Argument1; // 0x20
	FQuat Result; // 0x30
};

struct FCompositeSubFont : FCompositeFallbackFont {
	TArray<FInt32Range> CharacterRanges; // 0x18
	FString Cultures; // 0x28
};

struct FYStartItemCraftingRequest {
	FString UserId; // 0x0
	FString blueprintName; // 0x10
	int32_t blueprintRarity; // 0x20
	int32_t purchaseAmount; // 0x24
	FString baseItemId; // 0x28
};

struct FClientGetPlayerSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FStatColorMapping {
	FString StatName; // 0x0
	TArray<FStatColorMapEntry> ColorMap; // 0x10
	char DisableBlend : 1; // 0x20
};

struct FServerGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FMovieSceneWidgetMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FName> BrushPropertyNamePath; // 0x80
};

struct FRigUnit_TwoBoneIKFK : FRigUnitMutable {
	FName StartJoint; // 0x68
	FName EndJoint; // 0x70
	FVector PoleTarget; // 0x78
	float Spin; // 0x84
	FTransform EndEffector; // 0x90
	float IKBlend; // 0xc0
	FTransform StartJointFKTransform; // 0xd0
	FTransform MidJointFKTransform; // 0x100
	FTransform EndJointFKTransform; // 0x130
	float PreviousFKIKBlend; // 0x160
	FTransform StartJointIKTransform; // 0x170
	FTransform MidJointIKTransform; // 0x1a0
	FTransform EndJointIKTransform; // 0x1d0
	int32_t StartJointIndex; // 0x200
	int32_t MidJointIndex; // 0x204
	int32_t EndJointIndex; // 0x208
	float UpperLimbLength; // 0x20c
	float LowerLimbLength; // 0x210
};

struct FYPossibleSquadDefinitions {
	TArray<FYSquadDefinition> m_squads; // 0x0
};

struct FClientGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase {
	FTransform Value; // 0x10
	EAxis Axis; // 0x40
	EControlRigClampSpatialMode Type; // 0x41
	float Minimum; // 0x44
	float Maximum; // 0x48
	FTransform Space; // 0x50
	bool bDrawDebug; // 0x80
	FLinearColor DebugColor; // 0x84
	float DebugThickness; // 0x94
	FTransform Result; // 0xa0
};

struct FClientStartPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> Items; // 0x20
	FString StoreId; // 0x30
};

struct FEnvNamedValue {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
};

struct FYShardData {
	AActor* m_actor; // 0x0
	int32_t m_shardIndex; // 0x8
	bool m_onlyRelevantToSelf; // 0xc
};

struct FRigUnit_SpringIK_WorkData {
	TArray<FCachedRigElement> BoneIndices; // 0x0
	FCachedRigElement CachedPoleVector; // 0x10
	TArray<FTransform> Transforms; // 0x28
	FCRSimPointContainer Simulation; // 0x38
};

struct FARMeshUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	EARObjectClassification ObjectClassification; // 0x50
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

struct FYPlayerActionHistoryData {
	TMap<FString, int32_t> m_timeSameActionTowardsUser; // 0x0
	int32_t m_currentTimeMuted; // 0x50
	int32_t m_amountOfTimesMuted; // 0x54
	bool m_currentlyMuted; // 0x58
	float m_lastTimeTracked; // 0x5c
};

struct FEpicSynth1Patch {
	ESynth1PatchSource PatchSource; // 0x0
	TArray<FSynth1PatchCable> PatchCables; // 0x8
};

struct FYAITuningBuffAlliesTuning : FTableRowBase {
	TArray<FDataTableRowHandle> m_perks; // 0x8
	float m_buffCooldown; // 0x18
	float m_buffRadius; // 0x1c
	AActor* m_buffClasses; // 0x20
	bool m_buffExcludeSelf; // 0x28
	float m_buffInterrupDamage; // 0x2c
	float m_buffInterrupTime; // 0x30
};

struct FYCloakDataRow : FYDataTableRowBase {
	UMaterialInterface* m_cloakMaterial; // 0x10
	FName m_midOptionalParameter; // 0x18
};

struct FYGivePlayerSeasonGamemodeRankResponse {
	bool SUCCESS; // 0x0
};

struct FServerRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FAutomationEvent {
	EAutomationEventType Type; // 0x0
	FString Message; // 0x8
	FString Context; // 0x18
	FGuid Artifact; // 0x28
};

struct FMatchmakerAuthUserRequest : FPlayFabRequestCommon {
	FString AuthorizationTicket; // 0x8
};

struct FYStationInteractionEvent : FYBaseAnalyticsEvent {
	FString station_id; // 0xa8
	FString station_name; // 0xb8
};

struct FYRewardDataTableRow : FYDataTableRowBase {
	EYRewardType m_rewardType; // 0x10
	FName m_rewardId; // 0x14
	int32_t m_amount; // 0x1c
	float m_weight; // 0x20
};

struct FYDeathAnimMontageInfo {
	EYDeathType m_deathType; // 0x0
	UAnimMontage* m_montage; // 0x8
	bool m_deathToRagdoll; // 0x10
	float m_serverTimestamp; // 0x14
	FYDealtDamageData m_lastTimeDamagedData; // 0x18
	FGameplayTagContainer m_deathAnimationGameplayTags; // 0x118
};

struct FEnvQueryInstanceCache {
	UEnvQuery* Template; // 0x0
};

struct FRigUnit_SetControlVector : FRigUnitMutable {
	FName Control; // 0x68
	float weight; // 0x70
	FVector Vector; // 0x74
	EBoneGetterSetterMode Space; // 0x80
	FCachedRigElement CachedControlIndex; // 0x84
};

struct FYRetentionProgress {
	int32_t daysClaimed; // 0x0
	FYTimestamp lastClaimTime; // 0x8
};

struct FYPersistentMatch {
	FString ServerId; // 0x0
	FString SessionId; // 0x10
	FString State; // 0x20
	bool isMatch; // 0x30
	FString mapName; // 0x38
	FString Region; // 0x48
	int64_t transitionTime; // 0x58
	TArray<FString> userIds; // 0x60
	TArray<FString> userNames; // 0x70
};

struct FActorPerceptionBlueprintInfo {
	AActor* Target; // 0x0
	TArray<FAIStimulus> LastSensedStimuli; // 0x8
	char bIsHostile : 1; // 0x18
};

struct FYActiveArmorData {
	FString m_id; // 0x0
	FDataTableRowHandle m_rowHandle; // 0x10
	int32_t m_durability; // 0x20
};

struct FBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FServerAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
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

struct FYRequestStationConnect {
	FString UserId; // 0x0
	bool isDevelopment; // 0x10
	TArray<FYStationUserPings> userPings; // 0x18
	bool isMatch; // 0x28
};

struct FMultiplayerListBuildSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FPaperFlipbookKeyFrame {
	UPaperSprite* Sprite; // 0x0
	int32_t FrameRun; // 0x8
};

struct FYVanitySetCustomItemResultData {
	EYVanityUpdateResult return_result; // 0x0
	FString UserId; // 0x8
	TArray<FYCustomItemInfo> updated_items; // 0x18
	TArray<FYVanityBackendItemInfo> updated_vanity_items; // 0x28
};

struct FYFilterCategoriesDataEntry {
	TArray<EYCustomizationCategory> m_customizationCategories; // 0x0
	TArray<EYItemType> m_itemTypes; // 0x10
	TArray<EYModificationSlotType> m_modSlotTypes; // 0x20
	bool m_filterForTools; // 0x30
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

struct FInAppPurchaseReceiptInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FNDIStaticMeshSectionFilter {
	TArray<int32_t> AllowedMaterialSlots; // 0x0
};

struct FYPlayerStartScoreRule {
	float m_radius; // 0x0
	int32_t m_scorePerPlayerInRadius; // 0x4
};

struct FNiagaraSpawnInfo {
	int32_t Count; // 0x0
	float InterpStartDt; // 0x4
	float IntervalDt; // 0x8
	int32_t SpawnGroup; // 0xc
};

struct FMultiplayerListContainerImagesResponse : FPlayFabResultCommon {
	FString Images; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FServerWriteServerCharacterEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EventName; // 0x28
	FString PlayFabId; // 0x38
	FString Timestamp; // 0x48
};

struct FTransform {
	FQuat Rotation; // 0x0
	FVector Translation; // 0x10
	FVector Scale3D; // 0x20
};

struct FYStationMessage : FYBaseAnalyticsEvent {
	FString message_id; // 0xa8
	FString message_name; // 0xb8
	bool Status; // 0xc8
};

struct FYVanityMaterialItem {
	FString ID; // 0x0
	int32_t material_index; // 0x10
};

struct FYStopItemCraftingResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCustomItemInfo> itemsGrantedOrUpdated; // 0x20
	FString blueprintName; // 0x30
	int32_t itemRarity; // 0x40
	int32_t purchaseAmount; // 0x44
};

struct FClientUnlockContainerItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
	FString UnlockedItemInstanceId; // 0x18
	FString UnlockedWithItemInstanceId; // 0x28
	UPlayFabJsonObject* VirtualCurrency; // 0x38
};

struct FGraphReference {
	UEdGraph* MacroGraph; // 0x0
	UBlueprint* GraphBlueprint; // 0x8
	FGuid GraphGuid; // 0x10
};

struct FYPendingPlayfabMessage {
	FYPlayfabMessage m_message; // 0x0
	bool m_isServer; // 0x40
};

struct FYRewardProgression {
	FString UserId; // 0x0
	TArray<FYPlayerReward> factionProgressionRewards; // 0x10
	int32_t seasonXP; // 0x20
	int32_t prospectorLevelXP; // 0x24
};

struct FRigUnit_AimItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey Item; // 0x68
	FRigUnit_AimItem_Target primary; // 0x74
	FRigUnit_AimItem_Target secondary; // 0xa0
	float weight; // 0xcc
	FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
	FCachedRigElement CachedItem; // 0x110
	FCachedRigElement PrimaryCachedSpace; // 0x124
	FCachedRigElement SecondaryCachedSpace; // 0x138
};

struct FYScrapItem {
	TArray<FString> ids; // 0x0
	FString UserId; // 0x10
	FString factionId; // 0x20
	FYSellInventoryUpdate inventoryUpdateData; // 0x30
};

struct FYStashLimitUpdated {
	FString UserId; // 0x0
	int32_t stashLimit; // 0x10
};

struct FMeshElementAttributeData {
	FName AttributeName; // 0x0
	int32_t AttributeIndex; // 0x8
	FMeshElementAttributeValue AttributeValue; // 0x10
};

struct FClientGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FVertexInstancesForPolygonHole {
	TArray<FVertexIndexAndInstanceID> VertexIndicesAndInstanceIDs; // 0x0
};

struct FRigUnit_MathFloatLess : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FRigUnit_SetMultiControlFloat : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlFloat_Entry> entries; // 0x68
	float weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FServerMoveItemToCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FYPlayerQuarterUpgradeType : FYDataTableRowBase {
	FText m_name; // 0x10
	FText m_description; // 0x28
	int32_t m_level; // 0x40
	int32_t m_nodeUpgradesRequired; // 0x44
	TArray<FYTechTreeCostEntryRow> m_costs; // 0x48
	int32_t m_upgradeTimeMinutes; // 0x58
	TArray<FYTechTreeCostEntryRow> m_initialRushCosts; // 0x60
};

struct FServerGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FCRSimPointConstraint {
	ECRSimConstraintType Type; // 0x0
	int32_t SubjectA; // 0x4
	int32_t SubjectB; // 0x8
	FVector DataA; // 0xc
	FVector DataB; // 0x18
};

struct FClientUnlinkKongregateAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
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

struct FYGetCraftingInProgressDataResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FYItemCurrentlyBeingCrafted itemCurrentlyBeingCrafted; // 0x20
};

struct FSynthSlateStyle : FSlateWidgetStyle {
	ESynthSlateSizeType SizeType; // 0x8
	ESynthSlateColorStyle ColorStyle; // 0x9
};

struct FYPlayerCommWheelUse : FYBaseAnalyticsEvent {
	int32_t time_since_match_start; // 0xa8
	FString command_name; // 0xb0
	int32_t player_location_x; // 0xc0
	int32_t player_location_y; // 0xc4
	int32_t player_location_z; // 0xc8
};

struct FYDamageHelper {
	bool m_isLoggingEnabled; // 0x0
	float m_baseDamage; // 0x4
	float m_multiplierRawAccumulated; // 0x8
};

struct FNiagaraParameterStore {
	UObject* Owner; // 0x8
	TArray<FNiagaraVariableWithOffset> SortedParameterOffsets; // 0x10
	TArray<char> ParameterData; // 0x20
	TArray<UNiagaraDataInterface*> DataInterfaces; // 0x30
	TArray<UObject*> UObjects; // 0x40
};

struct FRigUnit_Control_StaticMesh : FRigUnit_Control {
	FTransform MeshTransform; // 0xd0
};

struct FYUpdatePlayerSetResult {
	FString Error; // 0x0
	FString UserId; // 0x10
};

struct FClientGetPlayFabIDsFromGoogleIDsRequest : FPlayFabRequestCommon {
	FString GoogleIDs; // 0x8
};

struct FClientWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FYPerkActivationData {
	FVector m_contextLocation; // 0x0
	UYGameplayAttributesComponent* m_gpaComponent; // 0x10
	AActor* m_contextActor; // 0x18
	AActor* m_instigator; // 0x20
	EYGameplayContextType m_contextType; // 0x28
};

struct FFloatRangeBound {
	ERangeBoundTypes Type; // 0x0
	float Value; // 0x4
};

struct FRigSpaceHierarchy {
	TArray<FRigSpace> Spaces; // 0x20
	TMap<FName, int32_t> NameToIndexMapping; // 0x30
	TArray<FName> Selection; // 0x80
};

struct FEntityDistanceAndMovementComponent {
	float Distance_4_0883B7A645B6339E19BDA09D82D06C33; // 0x0
	UYPlayerRenderTargetVfxMovementComponent_BP_C* RenderTargetMovementComponent_6_08E54D1B4963FEF770269899C40958C9; // 0x8
};

struct FYInboxMessageRow : FTableRowBase {
	EYInboxMessageType m_messageType; // 0x8
	bool m_autoOpen; // 0x9
	TSoftObjectPtr<UTexture2D> m_bannerImage; // 0x10
	FText m_sender; // 0x38
	FText m_subject; // 0x50
	FText m_message; // 0x68
};

struct FComponentReference {
	AActor* OtherActor; // 0x0
	FName ComponentProperty; // 0x8
	FString PathToComponent; // 0x10
};

struct FYUpdateReadState {
	FString messageId; // 0x0
	bool hasRead; // 0x10
};

struct FYExecuteFriendStateChangeReturnData {
	EYGetFriendListResult Result; // 0x0
	FString internalUserId; // 0x8
	TArray<FYFriendEntry> updatedFriends; // 0x18
};

struct FPhysicalSurfaceName {
	EPhysicalSurface Type; // 0x0
	FName Name; // 0x4
};

struct FYDurabilityAnalyticsPerPlayer {
	TMap<FString, FYDurabilityAnalyticsEvent> m_itemAnalytics; // 0x0
};

struct FYMockAIWorldWrapper {
	UWorld* m_world; // 0x0
};

struct FYLeadboardPlacementRewardDropTableEntry {
	FText m_rewardsPackageName; // 0x0
	int32_t m_leaderboardRank; // 0x18
	UDataTable* m_rewardsDT; // 0x20
	UDataTable* m_prospectorLevelVPRewardsDT; // 0x28
};

struct FServerUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FRigUnit_ModifyTransforms_PerItem {
	FRigElementKey Item; // 0x0
	FTransform Transform; // 0x10
};

struct FPowerIKGroundCollision {
	ECollisionChannel CollisionChannel; // 0x0
	bool TraceComplex; // 0x1
	float RayCastUp; // 0x4
	float RayCastDown; // 0x8
	bool EnableWallCollision; // 0xc
	float WallOffset; // 0x10
};

struct FYWeaponImpactDataTableRow : FYImpactDataTableRow {
	EYImpactActorRotation m_actorSpawnRotation; // 0x20
	FDataTableRowHandle m_tuningDataTableRow; // 0x28
	FDataTableRowHandle m_spawnedActorAssociatedRow; // 0x38
	TSoftClassPtr<UObject> m_replicatedActorToSpawn; // 0x48
	AActor* m_nonReplicatedActorToSpawn; // 0x70
	TArray<FYGameplayAttributeModifier> m_gameplayAttributesToAddOnImpact; // 0x78
	bool m_shouldHaveFxCategory; // 0x88
	FDataTableRowHandle m_aiSenseTriggerRowHandle; // 0x90
};

struct FAnimSyncMarker {
	FName MarkerName; // 0x0
	float Time; // 0x8
};

struct FYPlayerUIHealthBarDeltaSettings {
	FYPlayerUIHealthBarDeltaSettingsDetails m_healthOwn; // 0x0
	FYPlayerUIHealthBarDeltaSettingsDetails m_shieldOwn; // 0xc
	FYPlayerUIHealthBarDeltaSettingsDetails m_healthOnCharacterPlates; // 0x18
	FYPlayerUIHealthBarDeltaSettingsDetails m_shieldOnCharacterPlates; // 0x24
};

struct FPrefabricatorAssetCollectionItem {
	TSoftObjectPtr<UPrefabricatorAsset> PrefabAsset; // 0x0
	float weight; // 0x28
};

struct FYRequestUserStateUpdateBroadcastToFriends {
	TArray<FString> Friends; // 0x0
};

struct FYCachedFactionLevel {
	TArray<FYUnlockedShopItem> m_unlockedShopItems; // 0x0
	TArray<FDataTableRowHandle> m_unlockedContracts; // 0x10
};

struct FRigUnit_MathTransformRotateVector : FRigUnit_MathTransformBase {
	FTransform Transform; // 0x10
	FVector Direction; // 0x40
	FVector Result; // 0x4c
};

struct FYFetchEntitlements {
	FString epicAccountId; // 0x0
	FString epicAccessToken; // 0x10
};

struct FTwistConstraint : FConstraintBaseParams {
	float TwistLimitDegrees; // 0x14
	EAngularConstraintMotion TwistMotion; // 0x18
};

struct FClientWriteClientPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
};

struct FNiagaraSystemScalabilitySettingsArray {
	TArray<FNiagaraSystemScalabilitySettings> Settings; // 0x0
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

struct FServerAddCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
	FString VirtualCurrency; // 0x38
};

struct FYNetPlayerInventoryUpdate {
	TArray<FYInventoryItem> m_itemsToAdd; // 0x0
	TArray<FYInventoryItem> m_itemsToUpdate; // 0x10
	TArray<FString> m_itemsToRemove; // 0x20
};

struct FYCharacterCustomizationSetRow : FYVanityItemRowBase {
	EYCustomizationCategory m_customizationCategoryType; // 0x378
	TArray<TSoftObjectPtr<UTexture2D>> m_colorVariationIcons; // 0x380
	TArray<FYCharacterCustomizationSetItem> m_items; // 0x390
};

struct FYSetQuestCompleted {
	FString UserId; // 0x0
	TArray<FYQuestUpdateDataEntry> entries; // 0x10
};

struct FClientGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FYActorArray {
	TArray<AActor*> m_actors; // 0x0
};

struct FVehicleInputRate {
	float RiseRate; // 0x0
	float FallRate; // 0x4
};

struct FQuartzTimeSignature {
	int32_t NumBeats; // 0x0
	EQuartzTimeSignatureQuantization BeatType; // 0x4
	TArray<FQuartzPulseOverrideStep> OptionalPulseOverride; // 0x8
};

struct FYMatchmakingListDebugUserInfoResult {
	FString UserId; // 0x0
	int32_t userNVR; // 0x10
	TArray<FYUserStatisticsEntry> Statistics; // 0x18
	bool isBeginner; // 0x28
	TArray<FYMatchmakingDebugSessionUserInfo> matchmakingSessionsUserInfo; // 0x30
	int32_t dataTableDeathCooldownMinutes; // 0x40
	bool dataTableBeginnerFlagEnabled; // 0x44
	bool featureToggleSplitSoloAndSquadMatchesEnabled; // 0x45
};

struct FNiagaraCollisionEventPayload {
	FVector CollisionPos; // 0x0
	FVector CollisionNormal; // 0xc
	FVector CollisionVelocity; // 0x18
	int32_t ParticleIndex; // 0x24
	int32_t PhysicalMaterialIndex; // 0x28
};

struct FRigUnit_ChainHarmonics : FRigUnit_HighlevelBaseMutable {
	FName ChainRoot; // 0x68
	FVector Speed; // 0x70
	FRigUnit_ChainHarmonics_Reach Reach; // 0x7c
	FRigUnit_ChainHarmonics_Wave Wave; // 0xa4
	FRuntimeFloatCurve WaveCurve; // 0xe8
	FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170
	bool bDrawDebug; // 0x1ac
	FTransform DrawWorldOffset; // 0x1b0
	FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0
};

struct FYStationConnect {
	FString addr; // 0x0
	FString roomId; // 0x10
	bool connectSinglePlayer; // 0x20
	int32_t shardIndex; // 0x24
	bool isMatch; // 0x28
};

struct FServerRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FCameraPreviewInfo {
	APawn* PawnClass; // 0x0
	UAnimSequence* AnimSeq; // 0x8
	FVector Location; // 0x10
	FRotator Rotation; // 0x1c
	APawn* PawnInst; // 0x28
};

struct FMovieSceneParameterSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FScalarParameterNameAndCurve> Scalars; // 0x20
	TArray<FBoolParameterNameAndCurve> Bools; // 0x30
	TArray<FVector2DParameterNameAndCurves> Vector2Ds; // 0x40
	TArray<FVectorParameterNameAndCurves> Vectors; // 0x50
	TArray<FColorParameterNameAndCurves> Colors; // 0x60
	TArray<FTransformParameterNameAndCurves> Transforms; // 0x70
};

struct FYAbilityActionHealWardData : FYAbilityActionDataTableRow {
	float m_healPerSecond; // 0x78
	float m_healWardFinalRadius; // 0x7c
	bool m_attachToOwner; // 0x80
	bool m_isDestructable; // 0x81
	UMaterialInstance* m_healwardMaterial; // 0x88
	EYDamageApplication m_application; // 0x90
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

struct FYDEPRECATED_PullUpData {
	FVector m_relativePullUpLocation; // 0x0
	bool m_isActive; // 0xc
};

struct FYUserInfosUpdated {
	TArray<FYClientUserInfo> clientUserInfos; // 0x0
};

struct FYRequestUpgradeItemResult {
	bool SUCCESS; // 0x0
	FString UserId; // 0x8
	TArray<FYCustomItemInfo> resultEntries; // 0x18
	TArray<FYInstanceUpdateAmount> instanceUpdate; // 0x28
};

struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase {
	FVector Value; // 0x8
	bool bEnabled; // 0x14
	ERigUnitVisualDebugPointMode Mode; // 0x15
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float Scale; // 0x2c
	FName BoneSpace; // 0x30
};

struct FYGetPlayersActiveRankedSeasonClientRequest {
	TArray<FString> otherPlayersIds; // 0x0
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

struct FTimeSynthFilterSettings {
	ETimeSynthFilterType FilterType; // 0x0
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FYFetchEGSEntitlementsRequest {
	FString epicAccessToken; // 0x0
};

struct FKBoxElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float X; // 0x48
	float Y; // 0x4c
	float Z; // 0x50
};

struct FOverlayItem {
	FTimespan StartTime; // 0x0
	FTimespan EndTime; // 0x8
	FString Text; // 0x10
	FVector2D Position; // 0x20
};

struct FAdminIncrementLimitedEditionItemAvailabilityRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CatalogVersion; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemId; // 0x28
};

struct FClientLinkFacebookAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
};

struct FServerAwardSteamAchievementResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AchievementResults; // 0x8
};

struct FFloatDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FYMissionCompletedResult {
	FString UserId; // 0x0
	FString currentMissionID; // 0x10
	TArray<FYCustomItemInfo> rewards; // 0x20
	TArray<FYCurrencyItem> updatedCurrencies; // 0x30
	int32_t progress; // 0x40
	bool shouldShowPopup; // 0x44
};

struct FBandwidthTestGenerator {
	TArray<FBandwidthTestItem> ReplicatedBuffers; // 0x0
};

struct FColorGradingSettings {
	FColorGradePerRangeSettings Global; // 0x0
	FColorGradePerRangeSettings Shadows; // 0x50
	FColorGradePerRangeSettings Midtones; // 0xa0
	FColorGradePerRangeSettings Highlights; // 0xf0
	float ShadowsMax; // 0x140
	float HighlightsMin; // 0x144
};

struct FYRoomPlayer {
	FString UserId; // 0x0
	FString Name; // 0x10
};

struct FInstancedStaticMeshLightMapInstanceData {
	FTransform Transform; // 0x0
	TArray<FGuid> MapBuildDataIds; // 0x30
};

struct FGerstnerWaveOctave {
	int32_t NumWaves; // 0x0
	float AmplitudeScale; // 0x4
	float MainDirection; // 0x8
	float SpreadAngle; // 0xc
	bool bUniformSpread; // 0x10
};

struct FScalarParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	float ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FHorizonTweenEventTransformParam {
	bool bSweep; // 0x0
	bool bTeleport; // 0x1
	bool bCollideAndFinishEvent; // 0x2
	bool bCollideAndFinishEventTweenToEnd; // 0x3
	EHorizonTweenCoordinateSpace CoordinateSpaceType; // 0x4
	FHitResult SweepHitResult; // 0x8
};

struct FAlphaBlend {
	UCurveFloat* CustomCurve; // 0x0
	float BlendTime; // 0x8
	EAlphaBlendOption BlendOption; // 0x24
};

struct FRigUnit_MathIntLess : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FYRewardsPoolGrantTupleRow : FTableRowBase {
	EYRewardType m_rewardType; // 0x8
	int32_t m_grantAmount; // 0xc
};

struct FAdminGetServerBuildUploadURLRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FYRuntimeInventoryWeightInfo {
	float m_maxBagContainerWeight; // 0x0
	float m_currentBagContainerWeight; // 0x4
	float m_maxSafeContainerWeight; // 0x8
	float m_currentSafeContainerWeight; // 0xc
};

struct FYUpdatePlayerSet {
	FString UserId; // 0x0
	FYPlayerSet newSet; // 0x10
};

struct FMovieSceneEvalTemplate : FMovieSceneEvalTemplateBase {
	EMovieSceneCompletionMode CompletionMode; // 0x10
	TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr; // 0x14
};

struct FAdminUpdatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
};

struct FNiagaraEmitterScalabilitySettings {
	FNiagaraPlatformSet Platforms; // 0x0
	char bScaleSpawnCount : 1; // 0x30
	float SpawnCountScale; // 0x34
};

struct FConstraintNodeData {
	FTransform RelativeParent; // 0x0
	FConstraintOffset ConstraintOffset; // 0x30
	FName LinkedNode; // 0x90
	TArray<FTransformConstraint> Constraints; // 0x98
};

struct FBatchedPoint {
	FVector Position; // 0x0
	FLinearColor Color; // 0xc
	float PointSize; // 0x1c
	float RemainingLifeTime; // 0x20
	char DepthPriority; // 0x24
};

struct FBlueprintInputKeyDelegateBinding : FBlueprintInputDelegateBinding {
	FInputChord InputChord; // 0x8
	EInputEvent InputKeyEvent; // 0x28
	FName FunctionNameToBind; // 0x2c
};

struct FRigUnit_BlendTransform : FRigUnit {
	FTransform Source; // 0x10
	TArray<FBlendTarget> Targets; // 0x40
	FTransform Result; // 0x50
};

struct FYUpdateVanityData {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_materialIndex; // 0x10
};

struct FBoxSphereBounds {
	FVector Origin; // 0x0
	FVector BoxExtent; // 0xc
	float SphereRadius; // 0x18
};

struct FAxis {
	FVector Axis; // 0x0
	bool bInLocalSpace; // 0xc
};

struct FYModifyPlayerSkillsResult {
	bool succeeded; // 0x0
	TArray<FYPlayerSkillData> entries; // 0x8
};

struct FPowerIKCenterOfGravity {
	float Alpha; // 0x0
	float HorizAmount; // 0x4
	float VertAmount; // 0x8
	float PullBodyAmount; // 0xc
};

struct FYTransitionRuntimeData {
	FYTransitionRequestData m_initData; // 0x0
};

struct FVolumeControlStyle : FSlateWidgetStyle {
	FSliderStyle SliderStyle; // 0x8
	FSlateBrush HighVolumeImage; // 0x348
	FSlateBrush MidVolumeImage; // 0x3d0
	FSlateBrush LowVolumeImage; // 0x458
	FSlateBrush NoVolumeImage; // 0x4e0
	FSlateBrush MutedImage; // 0x568
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

struct FAdminGetTaskInstancesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Summaries; // 0x8
};

struct FInsightsInsightsGetPendingOperationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OperationType; // 0x10
};

struct FQuat {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
};

struct FPoseDataContainer {
	TArray<FSmartName> PoseNames; // 0x0
	TArray<FName> Tracks; // 0x10
	TMap<FName, int32_t> TrackMap; // 0x20
	TArray<FPoseData> Poses; // 0x70
	TArray<FAnimCurveBase> Curves; // 0x80
};

struct FYDebugAddRandomFriendsResult {
	EYSocialRequestResult Result; // 0x0
};

struct FAdminCreateOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ClientId; // 0x8
	FString ClientSecret; // 0x18
	FString ConnectionId; // 0x28
	FString IssuerDiscoveryUrl; // 0x38
	UPlayFabJsonObject* IssuerInformation; // 0x48
};

struct FYGetPlayerContractsResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYActiveContractPlayerData> activeContracts; // 0x20
	FYFactionsContractsData factionsContracts; // 0x30
	int32_t refreshHours24UtcFromBackend; // 0x48
};

struct FYContractObjectiveConditions {
	TArray<FDataTableRowHandle> m_locationConditions; // 0x0
};

struct FInsightsInsightsSetPerformanceRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PerformanceLevel; // 0x10
};

struct FYHUDInfoEntry {
	TWeakObjectPtr<UObject> Object; // 0x0
	EYHUDInfoPriorityCategory Category; // 0x8
	EYHUDInfoMessageState messageState; // 0x9
	FText Text; // 0x10
	int32_t Priority; // 0x28
};

struct FYLoreItemsAdded {
	TArray<FYLoreBackendItemInfo> loreItems; // 0x0
};

struct FARSessionStatus {
	FString AdditionalInfo; // 0x0
	EARSessionStatus Status; // 0x10
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

struct FNiagaraScriptHighlight {
	FLinearColor Color; // 0x0
	FText DisplayName; // 0x10
};

struct FSubdivisionLimitSection {
	TArray<FSubdividedQuad> SubdividedQuads; // 0x0
};

struct FSourceEffectFoldbackDistortionSettings {
	float InputGainDb; // 0x0
	float ThresholdDb; // 0x4
	float OutputGainDb; // 0x8
};

struct FMultiplayerGetMultiplayerServerLogsResponse : FPlayFabResultCommon {
	FString LogDownloadUrl; // 0x8
};

struct FRigidBodyContactInfo {
	FVector ContactPosition; // 0x0
	FVector ContactNormal; // 0xc
	float ContactPenetration; // 0x18
	UPhysicalMaterial* PhysMaterial[0x2]; // 0x20
};

struct FRigUnit_EndProfilingTimer : FRigUnit_DebugBaseMutable {
	int32_t NumberOfMeasurements; // 0x68
	FString Prefix; // 0x70
	float AccumulatedTime; // 0x80
	int32_t MeasurementsLeft; // 0x84
};

struct FRigUnit_QuaternionToAngle : FRigUnit {
	FVector Axis; // 0x8
	FQuat Argument; // 0x20
	float Angle; // 0x30
};

struct FPrecomputedLightInstanceData : FSceneComponentInstanceData {
	FTransform Transform; // 0xc0
	FGuid LightGuid; // 0xf0
	int32_t PreviewShadowMapChannel; // 0x100
};

struct FAssetMapping {
	UAnimationAsset* SourceAsset; // 0x0
	UAnimationAsset* TargetAsset; // 0x8
};

struct FClientGameServerRegionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Regions; // 0x8
};

struct FYPurchaseInventoryInsuranceRequest {
	FString m_insuranceId; // 0x0
	TArray<FString> m_itemIds; // 0x10
};

struct FInsightsInsightsGetDetailsResponse : FPlayFabResultCommon {
	int32_t DataUsageMb; // 0x8
	FString ErrorMessage; // 0x10
	UPlayFabJsonObject* Limits; // 0x20
	TArray<UPlayFabJsonObject*> PendingOperations; // 0x28
	int32_t PerformanceLevel; // 0x38
	int32_t RetentionDays; // 0x3c
};

struct FDataAbortFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FNiagaraScriptDataInterfaceInfo {
	UNiagaraDataInterface* DataInterface; // 0x0
	FName Name; // 0x8
	int32_t UserPtrIdx; // 0x10
	FNiagaraTypeDefinition Type; // 0x18
	FName RegisteredParameterMapRead; // 0x28
	FName RegisteredParameterMapWrite; // 0x30
};

struct FYDebugRemoveAllActiveContractsRequest {
	FString UserId; // 0x0
};

struct FYDebugClearSpecificCompletedContractResult {
	FString UserId; // 0x0
	FString Error; // 0x10
};

struct FClothCollisionPrim_Convex {
	TArray<FPlane> Planes; // 0x0
	TArray<FVector> SurfacePoints; // 0x10
	int32_t BoneIndex; // 0x20
};

struct FYPlayFabFriendWithState {
	FYPlayFabFriend PlayerInfo; // 0x0
	EYSocialGameStateType PlayerOnlineState; // 0x28
};

struct FVertexAttributesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists; // 0x8
	TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole; // 0x18
};

struct FRigUnit_OffsetTransformForItem : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	FTransform OffsetTransform; // 0x80
	float weight; // 0xb0
	bool bPropagateToChildren; // 0xb4
	FCachedRigElement CachedIndex; // 0xb8
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

struct FMovieSceneNiagaraVectorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel VectorChannels[0x4]; // 0x40
	int32_t ChannelsUsed; // 0x2c0
};

struct FCachedAnimTransitionData {
	FName StateMachineName; // 0x0
	FName FromStateName; // 0x8
	FName ToStateName; // 0x10
};

struct FExperimentationGetLatestScorecardResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Scorecard; // 0x8
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FNiagaraTypeLayoutInfo {
	TArray<uint32_t> FloatComponentByteOffsets; // 0x0
	TArray<uint32_t> FloatComponentRegisterOffsets; // 0x10
	TArray<uint32_t> Int32ComponentByteOffsets; // 0x20
	TArray<uint32_t> Int32ComponentRegisterOffsets; // 0x30
	TArray<uint32_t> HalfComponentByteOffsets; // 0x40
	TArray<uint32_t> HalfComponentRegisterOffsets; // 0x50
};

struct FYStopItemCraftingRequest {
	FString UserId; // 0x0
	FString blueprintName; // 0x10
	int32_t blueprintRarity; // 0x20
	int32_t purchaseAmount; // 0x24
};

struct FNavDataConfig : FNavAgentProperties {
	FName Name; // 0x30
	FColor Color; // 0x38
	FVector DefaultQueryExtent; // 0x3c
	AActor* NavigationDataClass; // 0x48
	TSoftClassPtr<UObject> NavDataClass; // 0x50
};

struct FYActiveContractPlayerData {
	FString contractId; // 0x0
	TArray<int32_t> progress; // 0x10
};

struct FFastArraySerializer {
	int32_t ArrayReplicationKey; // 0x54
	EFastArraySerializerDeltaFlags DeltaFlags; // 0x100
};

struct FMulticastRecordOptions {
	FString FuncPathName; // 0x0
	bool bServerSkip; // 0x10
	bool bClientSkip; // 0x11
};

struct FAnimSlotDesc {
	FName SlotName; // 0x0
	int32_t NumChannels; // 0x8
};

struct FViewTargetTransitionParams {
	float BlendTime; // 0x0
	EViewTargetBlendFunction BlendFunction; // 0x4
	float BlendExp; // 0x8
	char bLockOutgoing : 1; // 0xc
};

struct FYGlobalVanityUpdateResultData {
	EYUpdateGlobalVanityResult returnResult; // 0x0
	FYGlobalVanityData globalVanity; // 0x8
};

struct FYSquadMatchmakingReady {
	FString squadId; // 0x0
	FYUserMatchmakingSettings matchmakingSettings; // 0x10
};

struct FYPlayerFactionProgressData {
	FString factionId; // 0x0
	int32_t currentProgression; // 0x10
};

struct FLatentActionInfo {
	int32_t Linkage; // 0x0
	int32_t UUID; // 0x4
	FName ExecutionFunction; // 0x8
	UObject* CallbackTarget; // 0x10
};

struct FYBossEncounterActivityStats : FYBaseActivityStats {
	int32_t boss_damage_done; // 0xb8
	int32_t boss_damage_taken; // 0xbc
	int32_t encounter_duration; // 0xc0
};

struct FAIDataProviderIntValue : FAIDataProviderTypedValue {
	int32_t DefaultValue; // 0x30
};

struct FBox2D {
	FVector2D Min; // 0x0
	FVector2D Max; // 0x8
	char bIsValid; // 0x10
};

struct FVertexPair {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
};

struct FCameraCutInfo {
	FVector Location; // 0x0
	float Timestamp; // 0xc
};

struct FAdminCheckLimitedEditionItemAvailabilityResult : FPlayFabResultCommon {
	int32_t Amount; // 0x8
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

struct FAuthenticationGetEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString EntityToken; // 0x10
	FString TokenExpiration; // 0x20
};

struct FYCompleteQuestState {
	FYQuestState questState; // 0x0
};

struct FSubmixEffectFilterSettings {
	ESubmixFilterType FilterType; // 0x0
	ESubmixFilterAlgorithm FilterAlgorithm; // 0x1
	float FilterFrequency; // 0x4
	float FilterQ; // 0x8
};

struct FYShopPromotionRow : FTableRowBase {
	EYPromotionType m_promotionType; // 0x8
	FString m_startDateTime; // 0x10
	int64_t m_utcStartDateTime; // 0x20
	int32_t m_layoutIdx; // 0x28
	TArray<FDataTableRowHandle> m_shopOffers; // 0x30
};

struct FClientLinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceName; // 0x10
	bool ForceLink; // 0x20
	FString PublicKey; // 0x28
	FString Username; // 0x38
};

struct FDataFinalizeFileUploadsResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FMultiplayerBuildAliasDetailsResponse : FPlayFabResultCommon {
	FString AliasId; // 0x8
	FString AliasName; // 0x18
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x28
	int32_t PageSize; // 0x38
	FString SkipToken; // 0x40
};

struct FYUserRawStatsData {
	FString m_productUserId; // 0x0
	TArray<FYRawStatEntry> m_statEntries; // 0x10
};

struct FMultiplayerCancelAllServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FYGamePingEntry {
	UPingIP* m_pinger; // 0x20
};

struct FServerBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FAdminRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FClientGetPhotonAuthenticationTokenRequest : FPlayFabRequestCommon {
	FString PhotonApplicationId; // 0x8
};

struct FPowerIKPoleVector {
	EPoleVectorModeEnum Mode; // 0x0
	FVector Position; // 0x4
	FName BoneName; // 0x10
	float AngleOffset; // 0x1c
};

struct FYDebugAddRandomFriends {
	FString UserId; // 0x0
	int32_t Amount; // 0x10
};

struct FHorizonTweenEventActorColorFromToParameters : FHorizonTweenEventLinearColorParameters {
	TWeakObjectPtr<AActor> TweenTargetWeakPtr; // 0x238
};

struct FYPlayerAnnouncementAudioData {
	FDataTableRowHandle m_gearStoreSuccessfulPurchase; // 0x0
	FDataTableRowHandle m_gearStoreSuccessfulUpgrade; // 0x10
	FDataTableRowHandle m_levelUp; // 0x20
	FDataTableRowHandle m_maxLevel; // 0x30
	FDataTableRowHandle m_pactInviteIssued; // 0x40
	FDataTableRowHandle m_pactInviteReceived; // 0x50
	FDataTableRowHandle m_pactAccepted; // 0x60
	FDataTableRowHandle m_pactDeclined; // 0x70
	FDataTableRowHandle m_pactStartCancellation; // 0x80
	FDataTableRowHandle m_pactEnded; // 0x90
	FDataTableRowHandle m_pactMateRevived; // 0xa0
	FDataTableRowHandle m_suitPactmateDied; // 0xb0
	FDataTableRowHandle m_suitHealthWarningStart; // 0xc0
	FDataTableRowHandle m_BFCEscapeSuccess; // 0xd0
	FDataTableRowHandle m_BFCEscapeFailure; // 0xe0
	FDataTableRowHandle m_BFCPlayerDiedbyMonster; // 0xf0
	FDataTableRowHandle m_BFCPlayedDiedbyPlayer; // 0x100
	FDataTableRowHandle m_BFCYouKilledaPlayer; // 0x110
	FDataTableRowHandle m_SuitPlayerEnterDBNO; // 0x120
	FDataTableRowHandle m_SuitPlayerRevived; // 0x130
	FDataTableRowHandle m_suitStartExecuting; // 0x140
	FDataTableRowHandle m_suitStartReviving; // 0x150
	FDataTableRowHandle m_bountyAnnounced; // 0x160
	FDataTableRowHandle m_localPlayerGottenBounty; // 0x170
	FDataTableRowHandle m_bountyCollected; // 0x180
	FDataTableRowHandle m_localPlayerBountyTaken; // 0x190
	FDataTableRowHandle m_bountyTimedOut; // 0x1a0
	FDataTableRowHandle m_localPlayerBountyTimedOut; // 0x1b0
};

struct FClientCancelTradeResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FRigUnit_DrawContainerSetTransform : FRigUnitMutable {
	FName InstructionName; // 0x68
	FTransform Transform; // 0x70
};

struct FServerGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FServerUpdateUserInventoryItemDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString ItemInstanceId; // 0x28
	FString KeysToRemove; // 0x38
	FString PlayFabId; // 0x48
};

struct FRigUnit_MathTransformFromEulerTransform : FRigUnit_MathTransformBase {
	FEulerTransform EulerTransform; // 0x8
	FTransform Result; // 0x30
};

struct FRigUnit_VerletIntegrateVector : FRigUnit_SimBase {
	FVector Target; // 0x8
	float Strength; // 0x14
	float Damp; // 0x18
	float Blend; // 0x1c
	FVector Position; // 0x20
	FVector Velocity; // 0x2c
	FVector Acceleration; // 0x38
	FCRSimPoint Point; // 0x44
	bool bInitialized; // 0x6c
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

struct FYDebugSetTechTreeNodeLevel {
	FString UserId; // 0x0
	FString nodeId; // 0x10
	int32_t Level; // 0x20
};

struct FAnimNode_RotateRootBone : FAnimNode_Base {
	FPoseLink BasePose; // 0x10
	float Pitch; // 0x20
	float Yaw; // 0x24
	FInputScaleBiasClamp PitchScaleBiasClamp; // 0x28
	FInputScaleBiasClamp YawScaleBiasClamp; // 0x58
	FRotator MeshToComponent; // 0x88
};

struct FYSocialActionRequestEntry {
	bool m_useLocalUID; // 0x0
	FString m_overwriteUID; // 0x8
	TArray<FYFriendAction> m_actions; // 0x18
};

struct FServerListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FEditedDocumentInfo {
	FSoftObjectPath EditedObjectPath; // 0x0
	FVector2D SavedViewOffset; // 0x18
	float SavedZoomAmount; // 0x20
	UObject* EditedObject; // 0x28
};

struct FComponentOverrideRecord {
	UObject* ComponentClass; // 0x0
	UActorComponent* ComponentTemplate; // 0x8
	FComponentKey ComponentKey; // 0x10
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x30
};

struct FCapturedPixelsID {
	TMap<FName, FName> Identifiers; // 0x0
};

struct FServerUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FPredictProjectilePathResult {
	TArray<FPredictProjectilePathPointData> PathData; // 0x0
	FPredictProjectilePathPointData LastTraceDestination; // 0x10
	FHitResult HitResult; // 0x2c
};

struct FServerSendCustomAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
	FString Username; // 0x30
};

struct FYGetPassiveGenerators {
	FString UserId; // 0x0
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FAdminRevokeBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FYDefaultDirectXVersion {
	FText m_label; // 0x0
	FString m_defaultDirectXVersion; // 0x18
};

struct FYActiveCustomizationData {
	FName m_archetypeID; // 0x0
	int32_t m_slotIndex; // 0x8
	EYCustomizationBodyType m_bodyType; // 0xc
	TArray<FYCharacterCustomizationBodyPart> m_bodyParts; // 0x10
};

struct FYCharacterVanityUpdateBodyPart {
	FString UserId; // 0x0
	FString ID; // 0x10
	int32_t material_index; // 0x20
	FString archetypeId; // 0x28
};

struct FRootMotionSourceSettings {
	char Flags; // 0x0
};

struct FYOnboardingBlockedFeaturesDataTableRow : FYDataTableRowBase {
	FText m_featureName; // 0x10
	FText m_headerText; // 0x28
	FText m_bodyText; // 0x40
	FDataTableRowHandle m_relatedScene; // 0x58
	FDataTableRowHandle m_sceneToShow; // 0x68
};

struct FRigInfluenceEntry {
	FRigElementKey Source; // 0x0
	TArray<FRigElementKey> AffectedList; // 0x10
};

struct FRigUnit_FABRIKPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float weight; // 0xb4
	bool bPropagateToChildren; // 0xb8
	int32_t MaxIterations; // 0xbc
	FRigUnit_FABRIK_WorkData WorkData; // 0xc0
};

struct FClientAndroidDevicePushNotificationRegistrationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FServerGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FServerGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FControlRigDrawInstruction {
	FName Name; // 0x0
	EControlRigDrawSettings PrimitiveType; // 0x8
	TArray<FVector> Positions; // 0x10
	FLinearColor Color; // 0x20
	float Thickness; // 0x30
	FTransform Transform; // 0x40
};

struct FVectorDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FClientGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString StatisticName; // 0x10
};

struct FActiveHapticFeedbackEffect {
	UHapticFeedbackEffect_Base* HapticEffect; // 0x0
};

struct FAdminDeleteTitleDataOverrideRequest : FPlayFabRequestCommon {
	FString OverrideLabel; // 0x8
};

struct FServerGetStoreItemsServerRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
	FString StoreId; // 0x30
};

struct FYRewardDropTableEntry {
	FText m_rewardsPackageName; // 0x0
	int32_t m_vpThreshold; // 0x18
	UDataTable* m_rewardsDT; // 0x20
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

struct FRigUnit_MathVectorScale : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Factor; // 0x14
	FVector Result; // 0x18
};

struct FMeshSectionInfoMap {
	TMap<uint32_t, FMeshSectionInfo> Map; // 0x0
};

struct FPlayFabResultCommon {
	UPlayFabJsonObject* Request; // 0x0
};

struct FYEquippedPlayerLoadout {
	FDataTableRowHandle m_weapon; // 0x0
	TArray<FDataTableRowHandle> m_abilities; // 0x10
};

struct FNamedInterfaceDef {
	FName InterfaceName; // 0x0
	FString InterfaceClassName; // 0x8
};

struct FStaticMeshComponentInstanceData : FPrimitiveComponentInstanceData {
	UStaticMesh* StaticMesh; // 0x100
	TArray<FStaticMeshVertexColorLODData> VertexColorLODs; // 0x108
	TArray<FGuid> CachedStaticLighting; // 0x118
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x128
};

struct FFoliageTypeObject {
	UObject* FoliageTypeObject; // 0x0
	UFoliageType* TypeInstance; // 0x8
	bool bIsAsset; // 0x10
	UFoliageType_InstancedStaticMesh* Type; // 0x18
};

struct FAdaptorPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FARSharedWorldReplicationState {
	int32_t PreviewImageOffset; // 0x0
	int32_t ARWorldOffset; // 0x4
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

struct FPackedRGB10A2N {
	int32_t Packed; // 0x0
};

struct FLensSettings {
	FLensBloomSettings Bloom; // 0x0
	FLensImperfectionSettings Imperfections; // 0xb8
	float ChromaticAberration; // 0xd8
};

struct FAdminGetUserDataRequest : FPlayFabRequestCommon {
	int32_t IfChangedFromDataVersion; // 0x8
	FString Keys; // 0x10
	FString PlayFabId; // 0x20
};

struct FNiagaraSystemUpdateContext {
	TArray<UNiagaraComponent*> ComponentsToReset; // 0x0
	TArray<UNiagaraComponent*> ComponentsToReInit; // 0x10
	TArray<UNiagaraComponent*> ComponentsToNotifySimDestroy; // 0x20
	TArray<UNiagaraSystem*> SystemSimsToDestroy; // 0x30
};

struct FYLatencySummaryEvent : FYBaseAnalyticsEvent {
	int32_t latency_average; // 0xa8
	int32_t latency_quantile_26; // 0xac
	int32_t latency_quantile_51; // 0xb0
	int32_t latency_quantile_76; // 0xb4
	int32_t latency_quantile_91; // 0xb8
	int32_t latency_quantile_96; // 0xbc
	int32_t latency_maximum; // 0xc0
	int32_t ue4_ping_average; // 0xc4
	int32_t ue4_ping_quantile_26; // 0xc8
	int32_t ue4_ping_quantile_51; // 0xcc
	int32_t ue4_ping_quantile_76; // 0xd0
	int32_t ue4_ping_quantile_91; // 0xd4
	int32_t ue4_ping_quantile_96; // 0xd8
	int32_t ue4_ping_maximum; // 0xdc
	float inPacketsLost; // 0xe0
	float outPacketsLost; // 0xe4
	int32_t InRate; // 0xe8
	int32_t OutRate; // 0xec
	float NetSaturated; // 0xf0
	FString server; // 0xf8
};

struct FClientSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString EncryptedRequest; // 0x8
	FString PlayerSecret; // 0x18
};

struct FProfilesGetEntityProfilesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Profiles; // 0x8
};

struct FAdminGetTaskInstancesRequest : FPlayFabRequestCommon {
	FString StartedAtRangeFrom; // 0x8
	FString StartedAtRangeTo; // 0x18
	ETaskInstanceStatus StatusFilter; // 0x28
	UPlayFabJsonObject* TaskIdentifier; // 0x30
};

struct FClientGetPlayFabIDsFromSteamIDsRequest : FPlayFabRequestCommon {
	FString SteamStringIDs; // 0x8
};

struct FChangeVertexInstancesForPolygon {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexIndexAndInstanceID> PerimeterVertexIndicesAndInstanceIDs; // 0x8
	TArray<FVertexInstancesForPolygonHole> VertexIndicesAndInstanceIDsForEachHole; // 0x18
};

struct FCollectionParameterBase {
	FName ParameterName; // 0x0
	FGuid ID; // 0x8
};

struct FTTEventTrack : FTTTrackBase {
	FName FunctionName; // 0x18
	UCurveFloat* CurveKeys; // 0x20
};

struct FNetworkEmulationProfileDescription {
	FString ProfileName; // 0x0
	FString Tooltip; // 0x10
};

struct FMultiplayerListContainerImageTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
};

struct FYMissionDataTableRow : FYDataTableRowBase {
	UYMetaQuestPlayerInstanceComponent* m_missionObject; // 0x10
	FText m_missionName; // 0x18
	TArray<FYMissionRuntimeData> m_missionStepEntriesData; // 0x30
	FDataTableRowHandle m_rewards; // 0x40
	FDataTableRowHandle m_nextMissionRow; // 0x50
};

struct FTransformCurve : FAnimCurveBase {
	FVectorCurve TranslationCurve; // 0x18
	FVectorCurve RotationCurve; // 0x1b0
	FVectorCurve ScaleCurve; // 0x348
};

struct FRigUnit_Item : FRigUnit {
	FRigElementKey Item; // 0x8
};

struct FClientLinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
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

struct FYTestResponseData {
	int32_t IntegerField; // 0x0
	float FloatField; // 0x4
	bool BooleanField; // 0x8
	FString StringField; // 0x10
	TArray<FString> StringArray; // 0x20
	TArray<uint32_t> SGD; // 0x30
	FTestDataStruct DataStruct; // 0x40
	TArray<FTestStructForArray> ArrayOfStructs; // 0x58
};

struct FAssetBundleEntry {
	FPrimaryAssetId BundleScope; // 0x0
	FName BundleName; // 0x10
	TArray<FSoftObjectPath> BundleAssets; // 0x18
};

struct FNameCurveKey {
	float Time; // 0x0
	FName Value; // 0x4
};

struct FBoneMirrorExport {
	FName BoneName; // 0x0
	FName SourceBoneName; // 0x8
	EAxis BoneFlipAxis; // 0x10
};

struct FServerGetCharacterDataResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* Data; // 0x18
	int32_t DataVersion; // 0x20
	FString PlayFabId; // 0x28
};

struct FMeshElementAttributeList {
	TArray<FMeshElementAttributeData> Attributes; // 0x0
};

struct FAnimationGroupReference {
	FName GroupName; // 0x0
	EAnimGroupRole GroupRole; // 0x8
	EAnimSyncGroupScope GroupScope; // 0x9
};

struct FGameplayTagQuery {
	int32_t TokenStreamVersion; // 0x0
	TArray<FGameplayTag> TagDictionary; // 0x8
	TArray<char> QueryTokenStream; // 0x18
	FString UserDescription; // 0x28
	FString AutoDescription; // 0x38
};

struct FYWeaponParticleSystemOverrideByDataRowHandle {
	FDataTableRowHandle m_weaponDataTableRowHandle; // 0x0
	UParticleSystem* m_particleSystem; // 0x10
};

struct FOrbitOptions {
	char bProcessDuringSpawn : 1; // 0x0
	char bProcessDuringUpdate : 1; // 0x0
	char bUseEmitterTime : 1; // 0x0
};

struct FDatasmithTessellationOptions {
	float ChordTolerance; // 0x0
	float MaxEdgeLength; // 0x4
	float NormalTolerance; // 0x8
	EDatasmithCADStitchingTechnique StitchingTechnique; // 0xc
};

struct FBranchFilter {
	FName BoneName; // 0x0
	int32_t BlendDepth; // 0x8
};

struct FTransformConstraintDescription : FConstraintDescriptionEx {
	ETransformConstraintType TransformType; // 0x10
};

struct FYMapData {
	FString Name; // 0x0
	int32_t weight; // 0x10
};

struct FHorizonTweenEventFloatParameters : FHorizonTweenEventTweenListImplementParameters {
	TArray<float> TweenStartList; // 0x8
	TArray<float> TweenEndList; // 0x18
	FHorizonTweenEventCustomCurve CustomTweenCurve; // 0x28
};

struct FMovieSceneTrackEvalOptions {
	char bCanEvaluateNearestSection : 1; // 0x0
	char bEvalNearestSection : 1; // 0x0
	char bEvaluateInPreroll : 1; // 0x0
	char bEvaluateInPostroll : 1; // 0x0
	char bEvaluateNearestSection : 1; // 0x0
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

struct FYImpactEffectReceiverData {
	TArray<FYFXCategoryMaterialParemeterEntry> m_fxVectorParameters; // 0x0
	TArray<FYFXCategoryMaterialFloatParemeterEntry> m_fxFloatParameters; // 0x10
};

struct FST_EffortDataTableRow {
	TMap<EN_EffortTypes, FST_EffortData> Efforts_8_70D960094B9CBF7FE719299E4CCEDE62; // 0x0
};

struct FYAISpawnCharacterInfo {
	TSoftClassPtr<UObject> m_aiCharacter; // 0x0
	TSoftClassPtr<UObject> m_aiCharacterPrototypeVersion; // 0x28
};

struct FExposedValueHandler {
	FName BoundFunction; // 0x0
	TArray<FExposedValueCopyRecord> CopyRecords; // 0x8
	UFunction* Function; // 0x18
	TFieldPath<FStructProperty> ValueHandlerNodeProperty; // 0x20
};

struct FRigUnit_MathTransformLerp : FRigUnit_MathTransformBase {
	FTransform A; // 0x10
	FTransform B; // 0x40
	float T; // 0x70
	FTransform Result; // 0x80
};

struct FSlateFontInfo {
	UObject* FontObject; // 0x0
	UObject* FontMaterial; // 0x8
	FFontOutlineSettings OutlineSettings; // 0x10
	FName TypefaceFontName; // 0x40
	int32_t Size; // 0x48
	int32_t LetterSpacing; // 0x4c
};

struct FRigUnit_DebugBezierItemSpace : FRigUnit_DebugBaseMutable {
	FCRFourPointBezier Bezier; // 0x68
	float MinimumU; // 0x98
	float MaximumU; // 0x9c
	FLinearColor Color; // 0xa0
	float Thickness; // 0xb0
	int32_t Detail; // 0xb4
	FRigElementKey Space; // 0xb8
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FForceFeedbackChannelDetails {
	char bAffectsLeftLarge : 1; // 0x0
	char bAffectsLeftSmall : 1; // 0x0
	char bAffectsRightLarge : 1; // 0x0
	char bAffectsRightSmall : 1; // 0x0
	FRuntimeFloatCurve Curve; // 0x8
};

struct FYTravelRequestData {
	FString m_context; // 0x0
	FString m_mapName; // 0x10
	EYTravelInstanceType m_instanceType; // 0x20
	bool m_loadMapDirectly; // 0x21
	bool m_generatedRequest; // 0x22
	bool m_evaluateSessionState; // 0x23
	bool m_cancelExistingTravel; // 0x24
	bool m_waitForResources; // 0x25
	EYMatchmakingDebugOption m_debugMatchmakingOption; // 0x26
};

struct FRigUnit_AimBone_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FTransform WorldOffset; // 0x10
};

struct FYPlayerSeasonGrant {
	int32_t Level; // 0x0
	FString grantRowId; // 0x8
	FString grantId; // 0x18
	FString seasonRowId; // 0x28
};

struct FEventTrackKey {
	float Time; // 0x0
	FName EventName; // 0x4
};

struct FMathRBFInterpolateQuatColor_Target {
	FQuat Target; // 0x0
	FLinearColor Value; // 0x10
};

struct FYWeaponSuitableMods {
	TArray<FName> m_modNames; // 0x0
	EYModificationSlotType m_modificationSlotType; // 0x10
};

struct FAnimNode_HandIKRetargeting : FAnimNode_SkeletalControlBase {
	FBoneReference RightHandFK; // 0xc8
	FBoneReference LeftHandFK; // 0xd8
	FBoneReference RightHandIK; // 0xe8
	FBoneReference LeftHandIK; // 0xf8
	TArray<FBoneReference> IKBonesToMove; // 0x108
	float HandFKWeight; // 0x118
};

struct FYSelectedEmote {
	int32_t m_activeEmoteIndex; // 0x0
	int32_t m_selectedEmoteTimeStamp; // 0x4
};

struct FYGameModeConfigEntry {
	FString Name; // 0x0
	int32_t ranked; // 0x10
	FString jsonData; // 0x18
	FYMapRotationData mapRotationData; // 0x28
};

struct FTimeStretchCurveInstance {
	bool bHasValidData; // 0x0
};

struct FVector {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
};

struct FClientRedeemCouponResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GrantedItems; // 0x8
};

struct FCameraCacheEntry {
	float Timestamp; // 0x0
	FMinimalViewInfo POV; // 0x10
};

struct FServerAwardSteamAchievementRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Achievements; // 0x8
};

struct FYGetAllPlayfabUserData {
	FString UserId; // 0x0
};

struct FNiagaraEmitterScriptProperties {
	UNiagaraScript* Script; // 0x0
	TArray<FNiagaraEventReceiverProperties> EventReceivers; // 0x8
	TArray<FNiagaraEventGeneratorProperties> EventGenerators; // 0x18
};

struct FFunctionExpressionInput {
	UMaterialExpressionFunctionInput* ExpressionInput; // 0x0
	FGuid ExpressionInputId; // 0x8
	FExpressionInput Input; // 0x18
};

struct FRootMotionExtractionStep {
	UAnimSequence* AnimSequence; // 0x0
	float StartPosition; // 0x8
	float EndPosition; // 0xc
};

struct FClientGetWindowsHelloChallengeRequest : FPlayFabRequestCommon {
	FString PublicKeyHint; // 0x8
};

struct FYGrantGrantsRequest {
	FString UserId; // 0x0
	TArray<FYGrantEntry> grantsToGive; // 0x10
};

struct FBoolParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneBoolChannel ParameterCurve; // 0x8
};

struct FDatasmithCameraFocusSettingsTemplate {
	ECameraFocusMethod FocusMethod; // 0x0
	float ManualFocusDistance; // 0x4
};

struct FClientRestoreIOSPurchasesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReceiptData; // 0x20
};

struct FControlRigGizmoDefinition {
	FName GizmoName; // 0x0
	TSoftObjectPtr<UStaticMesh> StaticMesh; // 0x8
	FTransform Transform; // 0x30
};

struct FClientLoginWithFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString FacebookInstantGamesSignature; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FRigUnit_DrawContainerSetColor : FRigUnitMutable {
	FName InstructionName; // 0x68
	FLinearColor Color; // 0x70
};

struct FHorizonTweenEventActorScaleFromToParameters : FHorizonTweenEventVectorParameters {
	TWeakObjectPtr<AActor> TweenTargetWeakPtr; // 0x148
};

struct FYDebugClearSpecificCompletedContractRequest {
	FString UserId; // 0x0
	FString contractId; // 0x10
};

struct FAnimNode_AssetPlayerBase : FAnimNode_Base {
	FName GroupName; // 0x10
	EAnimGroupRole GroupRole; // 0x18
	EAnimSyncGroupScope GroupScope; // 0x19
	bool bIgnoreForRelevancyTest; // 0x1a
	float BlendWeight; // 0x1c
	float InternalTimeAccumulator; // 0x20
};

struct FYDebugSetPlayerQuartersLevelResult {
	FString UserId; // 0x0
	int32_t Level; // 0x10
	EYCheatResult Status; // 0x14
};

struct FYSceneCameraData {
	TArray<FDataTableRowHandle> m_sceneRowHandles; // 0x0
	FString m_cameraPrefix; // 0x10
	bool m_ignoreSceneState; // 0x20
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

struct FNodeItem {
	FName ParentName; // 0x0
	FTransform Transform; // 0x10
};

struct FServerGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FRigUnit_SetRelativeBoneTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FName Space; // 0x70
	FTransform Transform; // 0x80
	float weight; // 0xb0
	bool bPropagateToChildren; // 0xb4
	FCachedRigElement CachedBone; // 0xb8
	FCachedRigElement CachedSpaceIndex; // 0xcc
};

struct FYSetActiveCharacterArchetypeRequest {
	FString UserId; // 0x0
	FString archetypeId; // 0x10
};

struct FMovieSceneColorSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel Curves[0x4]; // 0x38
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FClientGameServerRegionsRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FRigUnit_MathVectorMirror : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector Normal; // 0x14
	FVector Result; // 0x20
};

struct FMovieSceneEntitySystemGraph {
	FMovieSceneEntitySystemGraphNodes nodes; // 0x80
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

struct FNiagaraCompileHashVisitorDebugInfo {
	FString Object; // 0x0
	TArray<FString> PropertyKeys; // 0x10
	TArray<FString> PropertyValues; // 0x20
};

struct FNiagaraRandInfo {
	int32_t Seed1; // 0x0
	int32_t Seed2; // 0x4
	int32_t Seed3; // 0x8
};

struct FYGameDebugState {
	bool m_infiniteAmmo; // 0x0
	bool m_hitboxDebug; // 0x1
	bool m_hitscanDebug; // 0x2
	bool m_infiniteAbilityActive; // 0x3
	bool m_haveGodmodeEnabled; // 0x4
	bool m_haveInfiniteClipEnabled; // 0x5
};

struct FYLootTuningRow : FYDataTableRowBase {
	TMap<EYLootSourceType, FYDespawnPickUpInfo> m_pickUpTypesToDestroyWhenNoPlayerIsClose; // 0x10
	float m_serverPickUpDestructionSafeTime; // 0x60
	float m_pickUpInteractionTimeDefault; // 0x64
	float m_pickUpInteractionTimeWeapon; // 0x68
	float m_pickUpInteractionTimeAbility; // 0x6c
	TMap<EYLootSourceType, float> m_exclusivePickUpTimes; // 0x70
	int32_t m_autoPickupRadius; // 0xc0
	FDataTableRowHandle m_moneyDropRow; // 0xc8
	TMap<EYPickupType, UParticleSystem*> m_highlightParticles; // 0xd8
	TMap<EYPickupType, UParticleSystem*> m_legendaryHighlightParticles; // 0x128
	TMap<EYPickupType, FDataTableRowHandle> m_scannableRows; // 0x178
	TSoftObjectPtr<UStaticMesh> m_defaultAbilityLootMesh; // 0x1c8
	TSoftClassPtr<UObject> m_widgetClass; // 0x1f0
	int32_t m_navMeshRandomPointInRadiusForLootDrops; // 0x218
	TMap<EYLootVelocityType, FYRarityLootVelocitySettings> m_lootVelocitySettings; // 0x220
};

struct FPreviewAssetAttachContainer {
	TArray<FPreviewAttachedObjectPair> AttachedObjects; // 0x0
};

struct FMultiplayerListMatchmakingTicketsForPlayerResult : FPlayFabResultCommon {
	FString TicketIds; // 0x8
};

struct FAbility_Action_GasGrenade {
	FDataTableRowHandle Audio_23_FABA0C5543E0FA95F7E37BA2306A398E; // 0x0
	float DurationAudio_22_8E352E014F8A0DC8A08A19B47534F3B3; // 0x10
	float FadeOutDuration_7_D0758DD34263AD91F9AE839FCA0EFFED; // 0x14
	float Damage_15_58F19B994E4E771D4A6195BE9FA72B0E; // 0x18
	float Radius_21_45B1D3B944793EB7D55B389C3F7ADC03; // 0x1c
	float Interval_32_A6DABB044F11F6F78F09F7A340D2BA02; // 0x20
};

struct FClientGetPlayFabIDsFromGenericIDsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> GenericIDs; // 0x8
};

struct FYHitSphereTraceEntry {
	FVector_NetQuantize m_hitLocation; // 0x0
	FVector_NetQuantizeNormal m_direction; // 0xc
	FVector_NetQuantizeNormal m_impactNormal; // 0x18
	USceneComponent* m_hitComponent; // 0x28
	AActor* m_hitActor; // 0x30
	char m_surfaceType; // 0x38
};

struct FControlRigSequenceObjectReferences {
	TArray<FControlRigSequenceObjectReference> Array; // 0x0
};

struct FJsonObjectWrapper {
	FString JsonString; // 0x0
};

struct FMovieSceneComponentMaterialSectionTemplate : FMovieSceneParameterSectionTemplate {
	int32_t MaterialIndex; // 0x80
};

struct FMovieSceneEvaluationKey {
	FMovieSceneSequenceID SequenceID; // 0x0
	FMovieSceneTrackIdentifier TrackIdentifier; // 0x4
	uint32_t SectionIndex; // 0x8
};

struct FYUIInventoryData {
	int32_t m_componentId; // 0x0
	FYPlayerInventory m_bagInventoryItems; // 0x8
	FYPlayerInventory m_safeContainerInventoryItems; // 0x20
	FYPlayerInventory m_stashInventoryItems; // 0x38
	FYInventoryItem m_bagItem; // 0x50
	TMap<EYPlayerSetType, FYInventoryItem> m_individualInventoryItems; // 0xe8
	TArray<FString> m_removedItemIds; // 0x138
};

struct FYActivityDataTableRow : FYDataTableRowBase {
	EYActivityType m_activityType; // 0x10
	FYCountPerMap m_desiredActivityActorCountPerMap; // 0x18
	TMap<FSoftObjectPath, float> m_perMapMultiplier; // 0x80
	int32_t m_desiredNumActorsToBeAlive; // 0xd0
	float m_multiplierActorsAtMatchStart; // 0xd4
	float m_respawnCheckInterval; // 0xd8
	int32_t m_maxActorsToSpawnPerCheck; // 0xdc
	float m_minimumDistanceToPlayers; // 0xe0
	TSoftClassPtr<UObject> m_activityActorManagerClass; // 0xe8
	TSoftClassPtr<UObject> m_activityActorClass; // 0x110
	TSoftObjectPtr<UTexture2D> m_activityIcon; // 0x138
};

struct FMovieSceneControlRigParameterTemplate : FMovieSceneParameterSectionTemplate {
	TArray<FEnumParameterNameAndCurve> Enums; // 0x80
	TArray<FIntegerParameterNameAndCurve> Integers; // 0x90
};

struct FYSquadInviteAdded {
	FYSquadInvite invite; // 0x0
};

struct FNiagaraStatScope {
	FName FullName; // 0x0
	FName FriendlyName; // 0x8
};

struct FRigUnit_DebugTransformArrayMutable : FRigUnit_DebugBaseMutable {
	TArray<FTransform> Transforms; // 0x68
	ERigUnitDebugTransformMode Mode; // 0x78
	FLinearColor Color; // 0x7c
	float Thickness; // 0x8c
	float Scale; // 0x90
	FName Space; // 0x94
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
	FRigUnit_DebugTransformArrayMutable_WorkData WorkData; // 0xd8
};

struct FAdminGetDataReportResult : FPlayFabResultCommon {
	FString DownloadUrl; // 0x8
};

struct FSolverBreakingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FMovieSceneSkeletalAnimationParams {
	UAnimSequenceBase* Animation; // 0x0
	FFrameNumber FirstLoopStartFrameOffset; // 0x8
	FFrameNumber StartFrameOffset; // 0xc
	FFrameNumber EndFrameOffset; // 0x10
	float PlayRate; // 0x14
	char bReverse : 1; // 0x18
	FName SlotName; // 0x1c
	FMovieSceneFloatChannel weight; // 0x28
	bool bSkipAnimNotifiers; // 0xc8
	bool bForceCustomMode; // 0xc9
	float StartOffset; // 0xcc
	float EndOffset; // 0xd0
};

struct FServerCreateSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FMovieSceneMediaSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneMediaSectionParams Params; // 0x20
};

struct FMultiplayerGetQueueStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
};

struct FPaperTileSetTerrain {
	FString TerrainName; // 0x0
	int32_t CenterTileIndex; // 0x10
};

struct FYDebugResetAllGeneratorsResult {
	FString UserId; // 0x0
	EYCheatResult Status; // 0x10
};

struct FYAIStaggerTriggerHealthPercentage {
	float m_healthPercentage; // 0x0
	float m_time; // 0x4
	FName m_staggerName; // 0x8
};

struct FClientGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FStaticParameterBase {
	FMaterialParameterInfo ParameterInfo; // 0x0
	bool bOverride; // 0x10
	FGuid ExpressionGUID; // 0x14
};

struct FYMuteResult {
	EYMuteResult Result; // 0x0
};

struct FAINoiseEvent {
	FVector NoiseLocation; // 0x4
	float Loudness; // 0x10
	float MaxRange; // 0x14
	AActor* Instigator; // 0x18
	FName Tag; // 0x20
};

struct FNiagaraParameterDataSetBinding {
	int32_t ParameterOffset; // 0x0
	int32_t DataSetComponentOffset; // 0x4
};

struct FRigHierarchyContainer {
	FRigBoneHierarchy BoneHierarchy; // 0x0
	FRigSpaceHierarchy SpaceHierarchy; // 0x98
	FRigControlHierarchy ControlHierarchy; // 0x128
	FRigCurveContainer CurveContainer; // 0x230
	int32_t Version; // 0x2c8
};

struct FYInboxMessageRemoved {
	FString ID; // 0x0
};

struct FAnimNode_ConvertComponentToLocalSpace : FAnimNode_Base {
	FComponentSpacePoseLink ComponentPose; // 0x10
};

struct FYRegisteredStackInput {
	TArray<FYInputStackRuntimeContext> m_runtimeMinorStack; // 0x0
	EYInputUIStackType m_stackType; // 0x10
	bool m_isActive; // 0x11
};

struct FARQRCodeUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Extents; // 0x50
	FString QRCode; // 0x60
};

struct FMultiplayerGetAssetUploadUrlResponse : FPlayFabResultCommon {
	FString AssetUploadUrl; // 0x8
	FString Filename; // 0x18
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

struct FARPose3D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FTransform> JointTransforms; // 0x28
	TArray<bool> IsJointTracked; // 0x38
	EARJointTransformSpace JointTransformSpace; // 0x48
};

struct FYPlayerSeasonGrants {
	FString seasonRowId; // 0x0
	TArray<FYPlayerSeasonGrant> grants; // 0x10
};

struct FTimeSynthEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	ETimeSynthEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FFrameTime {
	FFrameNumber FrameNumber; // 0x0
	float SubFrame; // 0x4
};

struct FFloatRK4SpringInterpolator {
	float StiffnessConstant; // 0x0
	float DampeningRatio; // 0x4
};

struct FYDebugForceRotate {
	EYPromotionType rotationType; // 0x0
};

struct FGroupsApplyToGroupResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	FString Expires; // 0x10
	UPlayFabJsonObject* Group; // 0x20
};

struct FLightingChannels {
	char bChannel0 : 1; // 0x0
	char bChannel1 : 1; // 0x0
	char bChannel2 : 1; // 0x0
};

struct FNiagaraID {
	int32_t Index; // 0x0
	int32_t AcquireTag; // 0x4
};

struct FWidgetTransform {
	FVector2D Translation; // 0x0
	FVector2D Scale; // 0x8
	FVector2D Shear; // 0x10
	float Angle; // 0x18
};

struct FUserWidgetPool {
	TArray<UUserWidget*> ActiveWidgets; // 0x0
	TArray<UUserWidget*> InactiveWidgets; // 0x10
};

struct FYVanityMaterialEntry {
	TSoftObjectPtr<UMaterialInterface> m_material; // 0x0
	int32_t m_index; // 0x28
};

struct FYItemTooltipData {
	EYItemTooltipType m_itemTooltipType; // 0x0
	FName m_baseItemId; // 0x4
	FText m_itemName; // 0x10
	FText m_itemType; // 0x28
	FText m_itemSubType; // 0x40
	FText m_itemDescription; // 0x58
	FText m_itemFlavorText; // 0x70
	TSoftObjectPtr<UTexture2D> m_itemImage; // 0x88
	TSoftObjectPtr<UTexture2D> m_itemImageBig; // 0xb0
	int32_t m_itemPrice; // 0xd8
	int32_t m_itemAmount; // 0xdc
	FYStoredModData m_mods; // 0xe0
	TArray<EYModificationSlotType> m_modSlots; // 0xf0
	FYWeaponTooltipData m_weaponTooltipData; // 0x100
	bool m_isCompatibleMod; // 0x118
};

struct FYPlayerQuartersLevelUpdated {
	FString UserId; // 0x0
	int32_t Level; // 0x10
	FYTimestamp upgradeStartedTime; // 0x18
};

struct FSessionServicePong {
	bool Authorized; // 0x0
	FString BuildDate; // 0x8
	FString DeviceName; // 0x18
	FGuid instanceId; // 0x28
	FString InstanceName; // 0x38
	FString PlatformName; // 0x48
	FGuid SessionId; // 0x58
	FString SessionName; // 0x68
	FString SessionOwner; // 0x78
	bool Standalone; // 0x88
};

struct FServerGetCharacterStatisticsResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	FString PlayFabId; // 0x20
};

struct FYResetCharacterArchetypeRequest {
	FString UserId; // 0x0
	FString archetypeId; // 0x10
};

struct FGroupsListGroupBlocksResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BlockedEntities; // 0x8
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

struct FYPlayerAwarenessNotificationData {
	bool m_isAuthorityTriggered; // 0x0
	bool m_shouldPlayVo; // 0x1
	bool m_shouldPlaySound; // 0x2
	EYPlayerAwarenessNotificationType m_notficationType; // 0x3
	TWeakObjectPtr<AYPlayerCharacter> m_playerCharacterContext; // 0x4
};

struct FYDebugSetActiveContractProgressRequest {
	FString UserId; // 0x0
	FString contractId; // 0x10
	int32_t objectiveIndex; // 0x20
	int32_t newProgress; // 0x24
};

struct FYMissionRuntimeData {
	int32_t m_stepIndex; // 0x0
	FText m_missionName; // 0x8
	FText m_missionStepDescription; // 0x20
	FText m_missionStepNpcText; // 0x38
	bool m_useVoiceOver; // 0x50
	FDataTableRowHandle m_missionStartVoiceOver; // 0x58
	TArray<FDataTableRowHandle> m_featureToUnlock; // 0x68
};

struct FNiagaraTypeDefinitionHandle {
	int32_t RegisteredTypeIndex; // 0x0
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

struct FMovieScene3DScaleKeyStruct : FMovieSceneKeyStruct {
	FVector Scale; // 0x8
	FFrameNumber Time; // 0x14
};

struct FClothVertBoneData {
	int32_t NumInfluences; // 0x0
	uint16_t BoneIndices[0xc]; // 0x4
	float BoneWeights[0xc]; // 0x1c
};

struct FYPlayerSeasonGrantsChanged {
	FString seasonRowId; // 0x0
	TArray<FYPlayerSeasonGrant> grants; // 0x10
};

struct FServerAddFriendRequest : FPlayFabRequestCommon {
	FString FriendEmail; // 0x8
	FString FriendPlayFabId; // 0x18
	FString FriendTitleDisplayName; // 0x28
	FString FriendUsername; // 0x38
	FString PlayFabId; // 0x48
};

struct FNavCollisionCylinder {
	FVector Offset; // 0x0
	float Radius; // 0xc
	float Height; // 0x10
};

struct FAnimNode_Inertialization : FAnimNode_Base {
	FPoseLink Source; // 0x10
};

struct FYQuestState {
	FString questId; // 0x0
	bool Completed; // 0x10
	int32_t Count; // 0x14
	EYMetaMissionType Type; // 0x18
	FYTimestamp updated; // 0x20
	FString backendId; // 0x28
	int32_t remainingUnits; // 0x38
};

struct FRigUnit_ModifyTransforms_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
};

struct FRigidBodyState {
	FVector_NetQuantize100 Position; // 0x0
	FQuat Quaternion; // 0x10
	FVector_NetQuantize100 LinVel; // 0x20
	FVector_NetQuantize100 AngVel; // 0x2c
	char Flags; // 0x38
};

struct FTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	UTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FYWeaponDecalData {
	UMaterialInterface* m_impactMaterial; // 0x0
	float m_decalSize; // 0x8
	float m_lifeSpan; // 0xc
	float m_startDelay; // 0x10
	float m_fadeOutDuration; // 0x14
	float m_fadeScreenSize; // 0x18
};

struct FSkeletalMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FMeshUVChannelInfo UVChannelData; // 0x10
};

struct FYCustomizationExplicitActorInitializationData {
	FYActiveCustomizationData m_customizationData; // 0x0
	FYActiveGlobalRuntimeVanityData m_globalVanityData; // 0x20
	FYCharacterVisualizationRuntimeData m_visualizationData; // 0xa0
	FYInventoryItem m_overrideWeaponHandle; // 0xa8
};

struct FA2CSPose : FA2Pose {
	TArray<char> ComponentSpaceFlags; // 0x18
};

struct FClientDeviceInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Info; // 0x8
};

struct FARPose2D {
	FARSkeletonDefinition SkeletonDefinition; // 0x0
	TArray<FVector2D> JointLocations; // 0x28
	TArray<bool> IsJointTracked; // 0x38
};

struct FClientGetPlayFabIDsFromKongregateIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FMultiplayerUpdateBuildRegionsRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	TArray<UPlayFabJsonObject*> BuildRegions; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FYCraftSuccessfulPopupText {
	FText m_itemName; // 0x0
	FText m_deviceTypeText; // 0x18
};

struct FYAITargetInfo {
	bool m_isVisible; // 0x0
	bool m_isCurrentCombatAggroTarget; // 0x1
	bool m_isPlayer; // 0x2
	bool m_isDBNO; // 0x3
	float m_currentDistance; // 0x4
	float m_damagedReceivedFromTarget; // 0x8
	int32_t m_registeredTokens; // 0xc
	int32_t m_maxTokens; // 0x10
	float m_timeTargetAcquired; // 0x14
	float m_aggroValue; // 0x18
	EYAISenseType m_highestSenseType; // 0x1c
	EYAISenseType m_lastPeceivedSenseType; // 0x1d
	FVector m_lastPerceivedSenseLocation; // 0x20
	TMap<EYAISenseType, float> m_lastTimeTargetWasPerceivedMap; // 0x30
	FYAITargetDetailedAggroInfo m_detailedAggroInfo; // 0x80
};

struct FVOscillator {
	FFOscillator X; // 0x0
	FFOscillator Y; // 0xc
	FFOscillator Z; // 0x18
};

struct FAdminDeleteOpenIdConnectionRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
};

struct FYDebugAIStats {
	TMap<FString, int32_t> m_aiCountPerType; // 0x0
};

struct FHorizonTweenEventImplementParameters {
	bool bUseCustomCurve; // 0x0
};

struct FClientGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
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

struct FTimelineEventEntry {
	float Time; // 0x0
	FDelegate EventFunc; // 0x4
};

struct FMultiplayerShutdownMultiplayerServerRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString SessionId; // 0x30
};

struct FClientConfirmPurchaseRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString OrderId; // 0x10
};

struct FMovieSceneVectorPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel ComponentCurves[0x4]; // 0x38
	int32_t NumChannelsUsed; // 0x2b8
	EMovieSceneBlendType BlendType; // 0x2bc
};

struct FRigUnit_TwoBoneIKSimple_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FTransform WorldOffset; // 0x10
};

struct FYRequestItemReroll {
	FString UserId; // 0x0
	FString ID; // 0x10
	FYCustomItemInfo desiredState; // 0x20
	int32_t itemStatType; // 0x90
	int32_t currentVal; // 0x94
	int32_t newVal; // 0x98
};

struct FShapedTextOptions {
	char bOverride_TextShapingMethod : 1; // 0x0
	char bOverride_TextFlowDirection : 1; // 0x0
	ETextShapingMethod TextShapingMethod; // 0x1
	ETextFlowDirection TextFlowDirection; // 0x2
};

struct FSlotAnimationTrack {
	FName SlotName; // 0x0
	FAnimTrack AnimTrack; // 0x8
};

struct FCloudScriptExecuteFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionParameter; // 0x28
	bool GeneratePlayStreamEvent; // 0x30
};

struct FIntVector {
	int32_t X; // 0x0
	int32_t Y; // 0x4
	int32_t Z; // 0x8
};

struct FExpressionOutput {
	FName OutputName; // 0x0
};

struct FAdminGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
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

struct FYInstanceUpdateAmount {
	FString ID; // 0x0
	int32_t Amount; // 0x10
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

struct FServerGrantCharacterToUserRequest : FPlayFabRequestCommon {
	FString CharacterName; // 0x8
	FString CharacterType; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString PlayFabId; // 0x30
};

struct FProfilesGetEntityProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool DataAsObject; // 0x10
	UPlayFabJsonObject* Entity; // 0x18
};

struct FYUiPopupItemSuccessfulActionPreviewData {
	FDataTableRowHandle m_blueprintHandle; // 0x0
	EYItemRarityType m_itemRarity; // 0x10
	FString m_itemBackendId; // 0x18
	FString m_baseItemId; // 0x28
	FString m_shopItemBelongsTo; // 0x38
	int32_t m_repeatTimes; // 0x48
};

struct FYContractRow : FYDataTableRowBase {
	bool m_isEnabled; // 0x10
	FText m_name; // 0x18
	TSoftObjectPtr<UTexture2D> m_backgroundImage; // 0x30
	TSoftObjectPtr<UTexture2D> m_contractTypeIcon; // 0x58
	FText m_contractDescription; // 0x80
	FText m_contractShortDescription; // 0x98
	FDataTableRowHandle m_factionRowHandle; // 0xb0
	int32_t m_contractCompletedFactionReputationIncrease; // 0xc0
	TArray<FYContractObjective> m_objectives; // 0xc8
	EYObjectivesProgressProcessing m_objectivesProgressProcessing; // 0xd8
	TArray<FYContractFailCondition> m_failConditions; // 0xe0
	int32_t m_contractCost; // 0xf0
	EYContractDifficulty m_contractDifficulty; // 0xf4
	TArray<FYContractReward> m_rewards; // 0xf8
	FYContractProgressionUnlockData m_unlockData; // 0x108
	bool m_isOneTimeOnly; // 0x10c
};

struct FServerGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
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

struct FYAbilityStateInfo {
	FDataTableRowHandle m_abilityRowHandle; // 0x0
	EYAbilityState m_state; // 0x10
	UYCharacterAbilityComponent* m_abilityComponent; // 0x18
};

struct FYActiveOffers {
	TArray<FYShopOffer> shopOffers; // 0x0
};

struct FDataSetObjectsResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	TArray<UPlayFabJsonObject*> SetResults; // 0x10
};

struct FChaosTrailingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
};

struct FYServerShutdown {
	FString Region; // 0x0
};

struct FActorLayer {
	FName Name; // 0x0
};

struct FAdminCreatePlayerSharedSecretResult : FPlayFabResultCommon {
	FString SecretKey; // 0x8
};

struct FYDebugResetAllGenerators {
	FString UserId; // 0x0
};

struct FYExcelReportResult {
	TArray<UPackage*> m_packages; // 0x0
};

struct FYSelectPlayerStart {
	FString m_incommingName; // 0x0
	UObject* m_defaultPawnClass; // 0x10
	UWorld* m_world; // 0x18
	AController* Player; // 0x20
};

struct FCustomProfile {
	FName Name; // 0x0
	TArray<FResponseChannel> CustomResponses; // 0x8
};

struct FRealCurve : FIndexedCurve {
	float DefaultValue; // 0x68
	ERichCurveExtrapolation PreInfinityExtrap; // 0x6c
	ERichCurveExtrapolation PostInfinityExtrap; // 0x6d
};

struct FAdminDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FServerGetFriendsListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool IncludeFacebookFriends; // 0x10
	bool IncludeSteamFriends; // 0x11
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* ProfileConstraints; // 0x28
	FString XboxToken; // 0x30
};

struct FYSceneSetupData {
	ACameraActor* m_detailCameraActor; // 0x0
	ACameraActor* m_cameraActor; // 0x8
	AActor* m_customizationPlacementLocation; // 0x10
};

struct FClientConsumeXboxEntitlementsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FYPreloadEntry {
	bool m_isServer; // 0x0
	bool m_isClient; // 0x1
	TSoftClassPtr<UObject> m_class; // 0x8
};

struct FAnimNode_RandomPlayer : FAnimNode_Base {
	TArray<FRandomPlayerSequenceEntry> entries; // 0x10
	bool bShuffleMode; // 0x70
};

struct FSessionServicePing {
	FString Username; // 0x0
};

struct FLevelSequenceAnimSequenceLinkItem {
	FGuid SkelTrackGuid; // 0x0
	FSoftObjectPath PathToAnimSequence; // 0x10
	bool bExportTransforms; // 0x28
	bool bExportCurves; // 0x29
	bool bRecordInWorldSpace; // 0x2a
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

struct FYChannelSettings {
	FString m_defaultChannelId; // 0x0
	FText m_channelText; // 0x10
	FString m_localizationShortName; // 0x28
	bool m_defaultHaveText; // 0x38
	bool m_defaultHaveAudio; // 0x39
	bool m_isGlobalChatChannel; // 0x3a
	bool m_switchToChannelOnAddIfDesired; // 0x3b
	bool m_alwaysSwitchToChannelOnAdd; // 0x3c
	bool m_shouldCacheMessagesIfNotConnected; // 0x3d
	int32_t m_amountOfAllowedMessagesGivenThreshold; // 0x40
	float m_messagesSpamIntervalCheck; // 0x44
	FYChannelProximityChatSettings m_channelProximityChatSettings; // 0x48
};

struct FYImpactEffectsRow : FYDataTableRowBase {
	bool m_enableFallbackToGenericRow; // 0x10
	bool m_alwaysUseDefaultSurfaceType; // 0x11
	TMap<EPhysicalSurface, FYWeaponImpactEffectsAssociation> m_effects; // 0x18
};

struct FYGetFriendListReturnData {
	FString internalUserId; // 0x0
	FYUserFriendList friendList; // 0x10
};

struct FTTLinearColorTrack : FTTPropertyTrack {
	UCurveLinearColor* CurveLinearColor; // 0x20
};

struct FAdminGetMatchmakerGameInfoRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
};

struct FSpriteDrawCallRecord {
	FVector Destination; // 0x0
	UTexture* BaseTexture; // 0x10
	FColor Color; // 0x48
};

struct FDirectLinkMsg_EndpointState {
	uint32_t StateRevision; // 0x0
	uint32_t MinProtocolVersion; // 0x4
	uint32_t ProtocolVersion; // 0x8
	FString ComputerName; // 0x10
	FString Username; // 0x20
	uint32_t ProcessId; // 0x30
	FString ExecutableName; // 0x38
	FString NiceName; // 0x48
	TArray<FNamedId> Destinations; // 0x58
	TArray<FNamedId> Sources; // 0x68
};

struct FYEnterMatchAzureFunctionResult {
	bool SUCCESS; // 0x0
	FString address; // 0x8
	FString ErrorMessage; // 0x18
	int32_t Port; // 0x28
	FString SessionId; // 0x30
	int32_t shardIndex; // 0x40
	bool singleplayerStation; // 0x44
	bool maintenanceMode; // 0x45
	float sessionTimeJoinDelay; // 0x48
};

struct FMultiplayerCreateBuildWithProcessBasedServerRequest : FPlayFabRequestCommon {
	bool AreAssetsReadonly; // 0x8
	FString BuildName; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	TArray<UPlayFabJsonObject*> GameAssetReferences; // 0x28
	TArray<UPlayFabJsonObject*> GameCertificateReferences; // 0x38
	FString GameWorkingDirectory; // 0x48
	UPlayFabJsonObject* InstrumentationConfiguration; // 0x58
	UPlayFabJsonObject* MetaData; // 0x60
	int32_t MultiplayerServerCountPerVm; // 0x68
	FString OsPlatform; // 0x70
	TArray<UPlayFabJsonObject*> Ports; // 0x80
	TArray<UPlayFabJsonObject*> RegionConfigurations; // 0x90
	FString StartMultiplayerServerCommand; // 0xa0
	bool UseStreamingForAssetDownloads; // 0xb0
	EAzureVmSize VmSize; // 0xb1
};

struct FMovieSceneByteChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	char DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<char> Values; // 0x20
	UEnum* Enum; // 0x30
};

struct FMovieSceneEvaluationMetaData {
	TArray<FMovieSceneSequenceID> ActiveSequences; // 0x0
	TArray<FMovieSceneOrderedEvaluationKey> ActiveEntities; // 0x10
};

struct FNiagaraParameterDataSetBindingCollection {
	TArray<FNiagaraParameterDataSetBinding> FloatOffsets; // 0x0
	TArray<FNiagaraParameterDataSetBinding> Int32Offsets; // 0x10
};

struct FNiagaraDataInterfaceGPUParamInfo {
	FString DataInterfaceHLSLSymbol; // 0x0
	FString DIClassName; // 0x10
	TArray<FNiagaraDataInterfaceGeneratedFunction> GeneratedFunctions; // 0x20
};

struct FRigUnit_MathFloatEquals : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FYImpactData {
	FDataTableRowHandle m_fxCategoryRowHandle; // 0x0
	UObject* m_worldContextObject; // 0x10
	AActor* m_actorHitOptional; // 0x18
	USceneComponent* m_componentHit; // 0x20
	FVector m_location; // 0x28
	FVector m_impactSurfaceNormal; // 0x34
	FVector m_direction; // 0x40
	EPhysicalSurface m_surfaceType; // 0x4c
	FDataTableRowHandle m_impactEffectPerSurfaceTypeRow; // 0x50
	FYWeaponImpactEffectsAssociation m_defaultEffect; // 0x60
	FYDamageOriginInfo m_damageOriginInfo; // 0xf0
	AActor* m_soundOwningActor; // 0x118
	FVector m_visualOriginTrailLocation; // 0x120
};

struct FRigUnit_SetCurveValue : FRigUnitMutable {
	FName Curve; // 0x68
	float Value; // 0x70
	FCachedRigElement CachedCurveIndex; // 0x74
};

struct FMultiplayerGetContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FMovieSceneExpansionState {
	bool bExpanded; // 0x0
};

struct FYStatProperty {
	FString m_propertyKey; // 0x0
	FString m_propertyName; // 0x10
};

struct FYDetailCamera {
	UChildActorComponent* m_childActorComponent; // 0x0
	AActor* m_spawnedCameraActor; // 0x8
};

struct FStringCurveKey {
	float Time; // 0x0
	FString Value; // 0x8
};

struct FGroupsAcceptGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FYBundleEntry {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_quantity; // 0x10
};

struct FYRequestMissionCompleted {
	FString UserId; // 0x0
	FString currentMissionID; // 0x10
};

struct FInterpolationParameter {
	float InterpolationTime; // 0x0
	EFilterInterpolationType InterpolationType; // 0x4
};

struct FIntegralCurve : FIndexedCurve {
	TArray<FIntegralKey> Keys; // 0x68
	int32_t DefaultValue; // 0x78
	bool bUseDefaultValueBeforeFirstKey; // 0x7c
};

struct FClientReportPlayerClientResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FGenericTeamId {
	char TeamID; // 0x0
};

struct FGroupsAcceptGroupInvitationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FRigUnit_DebugTransform : FRigUnit_DebugBase {
	FTransform Transform; // 0x10
	ERigUnitDebugTransformMode Mode; // 0x40
	FLinearColor Color; // 0x44
	float Thickness; // 0x54
	float Scale; // 0x58
	FName Space; // 0x5c
	FTransform WorldOffset; // 0x70
	bool bEnabled; // 0xa0
};

struct FAdminGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FYEventArray {
	TArray<FString> m_entries; // 0x0
};

struct FCustomFieldData {
	FString Key; // 0x0
	FString Value; // 0x10
};

struct FYCloakMaterialsInfo {
	TArray<UMaterialInterface*> m_materials; // 0x0
	UMeshComponent* m_meshComponent; // 0x10
};

struct FYDebugSetSeasonLevel {
	int32_t Level; // 0x0
};

struct FYPlayerReportData : FYBaseAnalyticsEvent {
	FString reported_player_user_id; // 0xa8
	FString reported_player_name; // 0xb8
	FString location_parent; // 0xc8
	FString Category; // 0xd8
};

struct FGroupsListGroupApplicationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
};

struct FYProspectorLevelProgressionDataTableRow : FYDataTableRowBase {
	int32_t m_forLevel; // 0x10
	int32_t m_xpIncrement; // 0x14
	FDataTableRowHandle m_baseRewardRow; // 0x18
	FDataTableRowHandle m_evacRewardRow; // 0x28
	FDataTableRowHandle m_baseXPPerMinuteRewardRow; // 0x38
};

struct FMatrix {
	FPlane XPlane; // 0x0
	FPlane YPlane; // 0x10
	FPlane ZPlane; // 0x20
	FPlane WPlane; // 0x30
};

struct FYVanityMiscData {
	FString V; // 0x0
	FString S; // 0x10
	int32_t L; // 0x20
	int32_t A; // 0x24
	int32_t D; // 0x28
};

struct FRigUnit_MathVectorClampLength : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float MinimumLength; // 0x14
	float MaximumLength; // 0x18
	FVector Result; // 0x1c
};

struct FYDebugResetTechTreeResult {
	FString UserId; // 0x0
	EYCheatResult Status; // 0x10
};

struct FYSessionResourceUserEntry {
	FString m_userId; // 0x0
	FGuid m_instanceId; // 0x10
};

struct FYRequestShowNewCustomizationData {
	FDataTableRowHandle m_requestedRowHandle; // 0x0
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

struct FGroupsUpdateGroupRoleResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
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

struct FRigUnit_MathQuaternionDot : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	float Result; // 0x30
};

struct FYDebugSendInboxMessage {
	FString messageRowId; // 0x0
	EYAttachmentType attachmentType; // 0x10
	FString attachmentTypeRowId; // 0x18
};

struct FYAITurnAnimation {
	UAnimMontage* m_animations; // 0x0
	float m_angle; // 0x8
};

struct FYCharacterVisualizationRuntimeData {
	EYCustomizationCategory m_category; // 0x0
	EYVanityType m_vanityTypeToPreview; // 0x1
};

struct FAnimNode_PoseByName : FAnimNode_PoseHandler {
	FName PoseName; // 0x80
	float PoseWeight; // 0x88
};

struct FVertexToMove {
	FVertexID VertexID; // 0x0
	FVector NewVertexPosition; // 0x4
};

struct FAnimSetMeshLinkup {
	TArray<int32_t> BoneToTrackTable; // 0x0
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

struct FYPlayerAudioDataTableRow : FYDataTableRowBase {
	FYInteractionAudio m_interactionAudio; // 0x10
	FYPlayerHealthAudioData m_healthData; // 0x30
	FYCommWheelAudioData m_commWheelData; // 0x78
	FYPlayerAnnouncementAudioData m_announcementData; // 0xc8
	FYPlayerHUDAudioData m_hudAudioData; // 0x288
	FYPlayerPactHUDAudioData m_pactHUDAudioData; // 0x338
	FDataTableRowHandle m_standEventHandle; // 0x398
	FYPlayerAbilitiesAudioData m_abilities; // 0x3a8
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

struct FAdminRevokeAllBansForUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FYDebugPurchaseOffer {
	FString shopOfferId; // 0x0
	int32_t quantity; // 0x10
};

struct FMovieSceneNiagaraBoolParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneBoolChannel BoolChannel; // 0x40
};

struct FYRequestUpgradePickaxeResult {
	FString ID; // 0x0
	bool SUCCESS; // 0x10
	int32_t ErrorCode; // 0x14
	int32_t Level; // 0x18
};

struct FGeometryCollectionSource {
	FSoftObjectPath SourceGeometryObject; // 0x0
	FTransform LocalTransform; // 0x20
	TArray<UMaterialInterface*> SourceMaterial; // 0x50
};

struct FColorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel RedCurve; // 0x8
	FMovieSceneFloatChannel GreenCurve; // 0xa8
	FMovieSceneFloatChannel BlueCurve; // 0x148
	FMovieSceneFloatChannel AlphaCurve; // 0x1e8
};

struct FComboBoxStyle : FSlateWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x8
	FSlateSound PressedSlateSound; // 0x3c0
	FSlateSound SelectionChangeSlateSound; // 0x3d8
};

struct FChaosTrailingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinAngularSpeed; // 0xc
	float MaxDistance; // 0x10
	EChaosTrailingSortMethod SortMethod; // 0x14
};

struct FRepAttachment {
	AActor* AttachParent; // 0x0
	FVector_NetQuantize100 LocationOffset; // 0x8
	FVector_NetQuantize100 RelativeScale3D; // 0x14
	FRotator RotationOffset; // 0x20
	FName AttachSocket; // 0x2c
	USceneComponent* AttachComponent; // 0x38
};

struct FAdminCreatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString StatisticName; // 0x18
	EStatisticResetIntervalOption VersionChangeInterval; // 0x28
};

struct FYAIHitReactionAnimations {
	float m_maxAngleDifferenceAllowed; // 0x0
	TArray<FYAIHitReactionAnimData> m_animations; // 0x8
};

struct FRigUnit_BinaryFloatOp : FRigUnit {
	float Argument0; // 0x8
	float Argument1; // 0xc
	float Result; // 0x10
};

struct FYStaminaDataTableRow : FYDataTableRowBase {
	float m_maxStamina; // 0x10
	float m_regenerationRate; // 0x14
	float m_regenerationDelay; // 0x18
	TArray<FYStaminaStateOverrides> m_stateOverrides; // 0x20
	float m_jumpConsumption; // 0x30
	float m_jumpNoStaminaScalar; // 0x34
	float m_sprintConsumptionRate; // 0x38
	float m_sprintDashConsumptionRate; // 0x3c
	float m_sprintMinStamina; // 0x40
	float m_sprintDashMinStamina; // 0x44
	float m_slideConsumptionRate; // 0x48
	float m_slideMinStamina; // 0x4c
	float m_climbingInstantConsumption; // 0x50
	float m_climbingDegenerationRate; // 0x54
	bool m_allowMeleeWithoutStamina; // 0x58
	bool m_allowMeleeHeavyWithoutStamina; // 0x59
	float m_StaminaReducedOnTakingHit; // 0x5c
};

struct FRigUnit_MathIntersectPlane : FRigUnit_MathVectorBase {
	FVector Start; // 0x8
	FVector Direction; // 0x14
	FVector PlanePoint; // 0x20
	FVector PlaneNormal; // 0x2c
	FVector Result; // 0x38
	float Distance; // 0x44
};

struct FHorizonTweenEventLinearColorParameters : FHorizonTweenEventTweenListImplementParameters {
	TArray<FLinearColor> TweenStartList; // 0x8
	TArray<FLinearColor> TweenEndList; // 0x18
	bool bSRGB; // 0x28
	FHorizonTweenEventCustomColorCurve CustomTweenCurve; // 0x30
};

struct FMultiplayerCancelMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FReplicatedVehicleState {
	float SteeringInput; // 0x0
	float ThrottleInput; // 0x4
	float BrakeInput; // 0x8
	float HandbrakeInput; // 0xc
	int32_t CurrentGear; // 0x10
};

struct FSTR_AutoAimPresetDesc {
	float MaxDeviationAngle_11_8B096E6945EFC5DDD740F1B709BE2A2B; // 0x0
	float AutoAimAngle_4_5BD8E3884B3952FF9589AABC8AA8AC38; // 0x4
	float AutoAimDistance_8_AF0AE6BC4D4E5E2AE5E76FA94E74A95F; // 0x8
	float AutoAimFalloffDistance_9_F149BE494B56BE328CA08CBA5BA33359; // 0xc
	float AutoAimNearFalloffDistance_10_A081DC6C44416D5B856998886A177939; // 0x10
};

struct FNiagaraSystemScalabilityOverrides {
	TArray<FNiagaraSystemScalabilityOverride> Overrides; // 0x0
};

struct FRigInfluenceMapPerEvent {
	TArray<FRigInfluenceMap> maps; // 0x0
	TMap<FName, int32_t> EventToIndex; // 0x10
};

struct FServerWriteEventResponse : FPlayFabResultCommon {
	FString EventId; // 0x8
};

struct FYFactionProgressionReward {
	FDataTableRowHandle m_currencyTableRowHandle; // 0x0
	int32_t m_amount; // 0x10
};

struct FPhysicsConstraintProfileHandle {
	FConstraintProfileProperties ProfileProperties; // 0x0
	FName ProfileName; // 0x10c
};

struct FRigUnit_GetCurveValue : FRigUnit {
	FName Curve; // 0x8
	float Value; // 0x10
	FCachedRigElement CachedCurveIndex; // 0x14
};

struct FRigUnit_MathTransformUnaryOp : FRigUnit_MathTransformBase {
	FTransform Value; // 0x10
	FTransform Result; // 0x40
};

struct FYInventoryLink {
	int32_t m_id; // 0x0
	UYStateInventoryComponent* m_inventoryComponent; // 0x8
};

struct FYLootListAssetPath {
	FName m_gameModeName; // 0x0
	FSoftObjectPath m_listDefinitionsDTAssetPath; // 0x8
};

struct FYCharacterCustomizationSetItem {
	TArray<EYCharacterCustomizationColorType> m_colorType; // 0x0
	FDataTableRowHandle m_rowHandle; // 0x10
};

struct FRuntimeFloatCurve {
	FRichCurve EditorCurveData; // 0x0
	UCurveFloat* ExternalCurve; // 0x80
};

struct FRigUnit_InverseExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FAudioCaptureDeviceInfo {
	FName DeviceName; // 0x0
	int32_t NumInputChannels; // 0x8
	int32_t SampleRate; // 0xc
};

struct FMatchmakerStartGameRequest : FPlayFabRequestCommon {
	FString Build; // 0x8
	FString CustomCommandLineData; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ExternalMatchmakerEventEndpoint; // 0x30
	FString GameMode; // 0x40
	ERegion Region; // 0x50
};

struct FYInteractionReleaseEntry {
	float m_minInterpValue; // 0x0
	float m_maxinterpValue; // 0x4
	FText m_text; // 0x8
};

struct FYWeaponUIData {
	TSoftObjectPtr<UTexture2D> m_textureUIIcon; // 0x0
	TSoftObjectPtr<UTexture2D> m_textureUISmall; // 0x28
	TSoftObjectPtr<UTexture2D> m_textureUIBig; // 0x50
	EYItemStatsCategory m_itemStatsCategory; // 0x78
};

struct FYTechTreeCategory : FYDataTableRowBase {
	TSoftObjectPtr<UTexture2D> m_categoryNodeIcon; // 0x10
	FText m_categoryNodeName; // 0x38
	EYTechtreeCategoryType m_category; // 0x50
	int32_t m_amountOfNodes; // 0x54
	TArray<EYTechTreeNodePerkType> m_perkTypeOrder; // 0x58
};

struct FMaterialFunctionInfo {
	FGuid StateId; // 0x0
	UMaterialFunctionInterface* Function; // 0x10
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

struct FRigUnit_VisualDebugTransform : FRigUnit_DebugBase {
	FTransform Value; // 0x10
	bool bEnabled; // 0x40
	float Thickness; // 0x44
	float Scale; // 0x48
	FName BoneSpace; // 0x4c
};

struct FEngineServiceAuthDeny {
	FString Username; // 0x0
	FString UserToDeny; // 0x10
};

struct FYDebugRemoveAllItemsFromPlayerRequest {
	FString UserId; // 0x0
};

struct FRigUnit_MathQuaternionFromTwoVectors : FRigUnit_MathQuaternionBase {
	FVector A; // 0x8
	FVector B; // 0x14
	FQuat Result; // 0x20
};

struct FSourceEffectEQBand {
	float Frequency; // 0x0
	float Bandwidth; // 0x4
	float GainDb; // 0x8
	char bEnabled : 1; // 0xc
};

struct FNiagaraHalfVector2 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
};

struct FYRarityLootVelocitySettings {
	TMap<EYItemRarityType, FYLootVelocitySettings> m_rarityVelocitySettings; // 0x0
};

struct FYClaimedContractBackendData {
	FString userIdReceivedFromBackend; // 0x0
	FString claimedContractId; // 0x10
	FString newContractId; // 0x20
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

struct FGameplayTagContainer {
	TArray<FGameplayTag> GameplayTags; // 0x0
	TArray<FGameplayTag> ParentTags; // 0x10
};

struct FConstraintDrive {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float MaxForce; // 0x8
	char bEnablePositionDrive : 1; // 0xc
	char bEnableVelocityDrive : 1; // 0xc
};

struct FYGeneratorInfo {
	int32_t m_currentAmount; // 0x0
	int32_t m_maxAmount; // 0x4
	FName m_generatorId; // 0x8
};

struct FYAcceptSquadInvite {
	FString ID; // 0x0
	FString requesterPlayerId; // 0x10
	FString squadId; // 0x20
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FYInteractionAudio {
	FDataTableRowHandle m_lootContainerOpen; // 0x0
	FDataTableRowHandle m_lootContainerClose; // 0x10
};

struct FYGameModeTuning : FYDataTableRowBase {
	FGameplayTagContainer m_gameplayTagsModifiedXP; // 0x10
	float m_xpModificationOnGameplayTagsMultiplier; // 0x30
	int32_t m_questVictoryConditionQuestList; // 0x34
	float m_addQuestTimerDelay; // 0x38
	int32_t m_amountOfHardQuests; // 0x3c
	int32_t m_amountOfMediumQuests; // 0x40
	float m_scoreSharingMultiplier; // 0x44
	float m_currencySharingMultiplier; // 0x48
	float m_xpSharingMultiplier; // 0x4c
	float m_pactBreakInteractionTime; // 0x50
	bool m_heatmapEnabled; // 0x54
	float m_ownPlayerHeatScore; // 0x58
	float m_pactMateHeatScore; // 0x5c
	float m_nonPlayerHeatScore; // 0x60
	float m_playerHeatScore; // 0x64
	float m_vehicleHeatScore; // 0x68
	float m_recentlyDealtDamageScore; // 0x6c
	float m_recentlyDealDamageHeatMapTimeSpan; // 0x70
	float m_sessionTimeoutCallbackRewards; // 0x74
	bool m_sessionManagesResources; // 0x78
	float m_interactionMultiplier; // 0x7c
	float m_interactionTraceSphere; // 0x80
	bool m_checkRecursiveTrace; // 0x84
	bool m_prioritizeNonPlayerCharacters; // 0x85
	bool m_useSessionTimerShutdown; // 0x86
	float m_damageOutlineHostilePlayersDuration; // 0x88
	int32_t m_DBNOCharges; // 0x8c
};

struct FYUIItemCachedData {
	UYWidget_ItemContainer* m_itemContainerWidget; // 0x0
	int32_t m_previousAmount; // 0x8
};

struct FCRSimPointContainer : FCRSimContainer {
	TArray<FCRSimPoint> Points; // 0x18
	TArray<FCRSimLinearSpring> Springs; // 0x28
	TArray<FCRSimPointForce> Forces; // 0x38
	TArray<FCRSimSoftCollision> CollisionVolumes; // 0x48
	TArray<FCRSimPointConstraint> Constraints; // 0x58
	TArray<FCRSimPoint> PreviousStep; // 0x68
};

struct FClientUnlinkTwitchAccountRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FSourceEffectChorusBaseSettings {
	float Depth; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	float WetLevel; // 0xc
	float DryLevel; // 0x10
	float Spread; // 0x14
};

struct FYDebugMatchmakingSetSessionNVRRequest {
	FString SessionId; // 0x0
	int32_t nvr; // 0x10
};

struct FClientGetPlayerTradesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AcceptedTrades; // 0x8
	TArray<UPlayFabJsonObject*> OpenedTrades; // 0x18
};

struct FClientUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
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

struct FAdminRefundPurchaseResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
};

struct FVisibilityTrackKey {
	float Time; // 0x0
	EVisibilityTrackAction Action; // 0x4
	EVisibilityTrackCondition ActiveCondition; // 0x5
};

struct FServerGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FYTechTreeCostEntryRow : FTableRowBase {
	FDataTableRowHandle m_costType; // 0x8
	int32_t m_costAmount; // 0x18
};

struct FYLeaderBoardEntryLatentCreationData {
	UPanelWidget* m_parentWidgetToAttachTo; // 0x0
	UYWidget_RankedLeaderBoardEntry* m_widgetToCreate; // 0x8
	TMap<int32_t, FYLeaderBoardEntryData> m_leaderBoardEntriesData; // 0x10
};

struct FRawDistributionFloat : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	UDistributionFloat* Distribution; // 0x28
};

struct FYGetSocialProfiles {
	TArray<FYPlatformEntry> entries; // 0x0
	bool includePresence; // 0x10
	FString contextString; // 0x18
	int32_t requestHandle; // 0x28
};

struct FYPlayerRuntimeScoreStateData {
	EYPlayerGameDataStateType m_state; // 0x0
	int32_t m_score; // 0x4
	bool m_isActive; // 0x8
};

struct FYScanParameters {
	UObject* m_worldContextObject; // 0x0
	FVector m_scanLocation; // 0x8
	TArray<FDataTableRowHandle> m_exclusiveScanTypes; // 0x18
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

struct FPlayerReservation {
	FUniqueNetIdRepl UniqueId; // 0x0
	FString ValidationStr; // 0x28
	FString Platform; // 0x38
	bool bAllowCrossplay; // 0x48
	float elapsedTime; // 0x4c
};

struct FRigUnit_DebugArc : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Radius; // 0xb0
	float MinimumDegrees; // 0xb4
	float MaximumDegrees; // 0xb8
	float Thickness; // 0xbc
	int32_t Detail; // 0xc0
	FName Space; // 0xc4
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
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

struct FClientLinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString XboxToken; // 0x18
};

struct FNodeObject {
	FName Name; // 0x0
	FName ParentName; // 0x8
};

struct FYConfigurationKickUser {
	FString UserId; // 0x0
};

struct FYVanityItemRowBase : FYItemDataTableRowBase {
	TSoftObjectPtr<UMaterialInterface> m_parameterOverrideMaterial; // 0x310
	TArray<FYVanityMaterialEntry> m_materials; // 0x338
	EYVanityType m_vanityType; // 0x348
	bool m_requireOwnedItemStatus; // 0x349
	bool m_isReadyToBeReleased; // 0x34a
	TArray<FDataTableRowHandle> m_exclusiveItems; // 0x350
	TArray<FDataTableRowHandle> m_excludedItems; // 0x360
	int32_t m_sortPriority; // 0x370
};

struct FMultiplayerGetTitleMultiplayerServersQuotasResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Quotas; // 0x8
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

struct FLocalizationGetLanguageListResponse : FPlayFabResultCommon {
	FString LanguageList; // 0x8
};

struct FRigElementKey {
	ERigElementType Type; // 0x0
	FName Name; // 0x4
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

struct FRigUnit_SetControlInteger : FRigUnitMutable {
	FName Control; // 0x68
	int32_t weight; // 0x70
	int32_t IntegerValue; // 0x74
	FCachedRigElement CachedControlIndex; // 0x78
};

struct FRigUnit_MathVectorNotEquals : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FYDebugRequestShardStationChange {
	FString UserId; // 0x0
	int32_t shardIndex; // 0x10
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

struct FAnimNode_TwistCorrectiveNode : FAnimNode_SkeletalControlBase {
	FReferenceBoneFrame BaseFrame; // 0xc8
	FReferenceBoneFrame TwistFrame; // 0xe8
	FAxis TwistPlaneNormalAxis; // 0x108
	float RangeMax; // 0x118
	float RemappedMin; // 0x11c
	float RemappedMax; // 0x120
	FAnimCurveParam Curve; // 0x124
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

struct FClientRewardAdActivityResult : FPlayFabResultCommon {
	FString AdActivityEventId; // 0x8
	FString DebugResults; // 0x18
	FString PlacementId; // 0x28
	FString PlacementName; // 0x38
	int32_t PlacementViewsRemaining; // 0x48
	int32_t PlacementViewsResetMinutes; // 0x4c
	UPlayFabJsonObject* RewardResults; // 0x50
};

struct FRigUnit_MultiFABRIK : FRigUnit_HighlevelBaseMutable {
	FName RootBone; // 0x68
	TArray<FRigUnit_MultiFABRIK_EndEffector> Effectors; // 0x70
	float Precision; // 0x80
	bool bPropagateToChildren; // 0x84
	int32_t MaxIterations; // 0x88
	FRigUnit_MultiFABRIK_WorkData WorkData; // 0x90
};

struct FYRuntimeVehicleData {
	AActor* m_relevantAcquisitionActor; // 0x0
	AActor* m_cachedRelatedActor; // 0x8
	EYVehicleStateType m_state; // 0x10
};

struct FSupportedAreaData {
	FString AreaClassName; // 0x0
	int32_t AreaID; // 0x10
	UObject* AreaClass; // 0x18
};

struct FRenderingPolygonGroup {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
};

struct FRestrictedConfigInfo {
	FString RestrictedConfigName; // 0x0
	TArray<FString> Owners; // 0x10
};

struct FNiagaraHalf {
	uint16_t Value; // 0x0
};

struct FBeamModifierOptions {
	char bModify : 1; // 0x0
	char bScale : 1; // 0x0
	char bLock : 1; // 0x0
};

struct FRigVMOperand {
	ERigVMMemoryType MemoryType; // 0x0
	uint16_t RegisterIndex; // 0x2
	uint16_t RegisterOffset; // 0x4
};

struct FYAITurnAnimationsData {
	TArray<FYAITurnAnimation> m_animations; // 0x0
};

struct FParticleCurvePair {
	FString CurveName; // 0x0
	UObject* CurveObject; // 0x10
};

struct FClientLinkSteamAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString SteamTicket; // 0x18
};

struct FAnimNode_TransitionResult : FAnimNode_Base {
	bool bCanEnterTransition; // 0x10
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

struct FProcMeshSection {
	TArray<FProcMeshVertex> ProcVertexBuffer; // 0x0
	TArray<uint32_t> ProcIndexBuffer; // 0x10
	FBox SectionLocalBox; // 0x20
	bool bEnableCollision; // 0x3c
	bool bSectionVisible; // 0x3d
};

struct FRigUnit_MathVectorIsNearlyZero : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Tolerance; // 0x14
	bool Result; // 0x18
};

struct FPoseSnapshot {
	TArray<FTransform> LocalTransforms; // 0x0
	TArray<FName> BoneNames; // 0x10
	FName SkeletalMeshName; // 0x20
	FName SnapshotName; // 0x28
	bool bIsValid; // 0x30
};

struct FRawAnimSequenceTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<FQuat> RotKeys; // 0x10
	TArray<FVector> ScaleKeys; // 0x20
};

struct FSlateSound {
	UObject* ResourceObject; // 0x0
};

struct FAdminAddVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FRigUnit_CollectionUnion : FRigUnit_CollectionBase {
	FRigElementKeyCollection A; // 0x8
	FRigElementKeyCollection B; // 0x18
	FRigElementKeyCollection Collection; // 0x28
};

struct FServerSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FLocalSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FAdminGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FRigUnit_CollectionIntersection : FRigUnit_CollectionBase {
	FRigElementKeyCollection A; // 0x8
	FRigElementKeyCollection B; // 0x18
	FRigElementKeyCollection Collection; // 0x28
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

struct FBuildPromotionNewProjectSettings {
	FDirectoryPath NewProjectFolderOverride; // 0x0
	FString NewProjectNameOverride; // 0x10
};

struct FPluginRedirect {
	FString OldPluginName; // 0x0
	FString NewPluginName; // 0x10
};

struct FYDebugVanityUpdateAmount {
	FString UserId; // 0x0
	FString vanity_id; // 0x10
	int32_t Amount; // 0x20
};

struct FCapturedPropSegment {
	FString PropertyName; // 0x0
	int32_t PropertyIndex; // 0x10
	FString ComponentName; // 0x18
};

struct FRigUnit_DistributeRotation_Rotation {
	FQuat Rotation; // 0x0
	float Ratio; // 0x10
};

struct FYAudioTagRow : FYDataTableRowBase {
	TMap<FGameplayTag, USoundBase*> m_sounds; // 0x10
};

struct FYProspectorLevelXpGained : FYBaseAnalyticsEvent {
	int32_t Amount; // 0xa8
	FString Source; // 0xb0
	int32_t prospector_level; // 0xc0
};

struct FYUIDailyCrateTimerInfo {
	bool m_generatorRewardCanBeCollected; // 0x0
	FTimespan m_timeUntilNextReward; // 0x8
};

struct FROscillator {
	FFOscillator Pitch; // 0x0
	FFOscillator Yaw; // 0xc
	FFOscillator Roll; // 0x18
};

struct FServerUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString KeyItemInstanceId; // 0x40
	FString PlayFabId; // 0x50
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

struct FYReplicatedAttackRuntimeData {
	float m_serverTimestamp; // 0x0
	int32_t m_indexRangedAttack; // 0x4
	EYAIAttackStatus m_attackStatus; // 0x8
};

struct FYGetCurrencyResult {
	FYCurrency Currency; // 0x0
	EYGetCurrencyResult Result; // 0x4
};

struct FIntegerParameterNameAndCurve {
	FName ParameterName; // 0x0
	FMovieSceneIntegerChannel ParameterCurve; // 0x8
};

struct FYVanityItem {
	FDataTableRowHandle m_vanityHandle; // 0x0
	int32_t m_amount; // 0x10
};

struct FMovieSceneTimeTransform {
	float TimeScale; // 0x0
	FFrameTime Offset; // 0x4
};

struct FYBiEventWrapper {
	FString messageType; // 0x0
	FString eventData; // 0x10
};

struct FYTurnAngleData {
	float m_angle; // 0x0
};

struct FPropertyAccessPath {
	int32_t PathSegmentStartIndex; // 0x0
	int32_t PathSegmentCount; // 0x4
	char bHasEvents : 1; // 0x8
};

struct FRigUnit_CollectionReverse : FRigUnit_CollectionBase {
	FRigElementKeyCollection Collection; // 0x8
	FRigElementKeyCollection Reversed; // 0x18
};

struct FYPlayerItemEntry {
	EYPlayerSetType m_setType; // 0x0
	FString m_id; // 0x8
};

struct FAdminGetServerBuildInfoRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FYDamageInfoRow : FYDataTableRowBase {
	FText m_displayName; // 0x10
	TSoftObjectPtr<UTexture2D> m_icon; // 0x28
};

struct FMovieSceneCameraShakeSourceShakeSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneCameraShakeSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FYBIHook_MinimapOpen : FYBaseAnalyticsEvent {
	int32_t time_since_user_joined; // 0xa8
};

struct FWaterBrushEffectCurlNoise {
	float Curl1Amount; // 0x0
	float Curl2Amount; // 0x4
	float Curl1Tiling; // 0x8
	float Curl2Tiling; // 0xc
};

struct FMaterialInput {
	int32_t OutputIndex; // 0x0
	FName ExpressionName; // 0x4
};

struct FMovieSceneGeometryCollectionSectionTemplateParameters : FMovieSceneGeometryCollectionParams {
	FFrameNumber SectionStartTime; // 0x30
	FFrameNumber SectionEndTime; // 0x34
};

struct FClothLODDataCommon {
	FClothPhysicalMeshData PhysicalMeshData; // 0x0
	FClothCollisionData CollisionData; // 0xf8
	bool bUseMultipleInfluences; // 0x138
	float SkinningKernelRadius; // 0x13c
};

struct FYPlayerInteraction {
	AActor* m_interactiveActor; // 0x0
	UYObjectInteractionComponent* m_objectInteractionComponent; // 0x8
	bool m_canBeActive; // 0x10
	bool m_isActive; // 0x11
	bool m_isBlockedDueExclusivePickUp; // 0x12
	bool m_isBlockedDueToWeightLimit; // 0x13
	bool m_isPickupEmpty; // 0x14
	bool m_isCompleted; // 0x15
	float m_currentInteractionStartTimestamp; // 0x18
	FVector m_traceImpactLocation; // 0x1c
};

struct FMovieSceneEventPayloadVariable {
	FString Value; // 0x0
};

struct FYPlayerSupportReportRequestData {
	FString m_context; // 0x0
	FString m_playerName; // 0x10
	FString m_playerUid; // 0x20
	EYReportType m_reportType; // 0x30
};

struct FRootMotionSourceStatus {
	char Flags; // 0x0
};

struct FPowerIKEffector {
	FName BoneName; // 0x0
	FVector Position; // 0x8
	EEffectorSpaceEnum PositionSpace; // 0x14
	FRotator Rotation; // 0x18
	EEffectorSpaceEnum RotationSpace; // 0x24
	float PullWeight; // 0x28
	bool NormalizePulling; // 0x2c
	FVector PositivePullFactor; // 0x30
	FVector NegativePullFactor; // 0x3c
	bool RotateBone; // 0x48
	bool RotateLimb; // 0x49
	float DeltaSmoothSpeed; // 0x4c
	float AngularDeltaSmoothSpeed; // 0x50
	FPowerIKSmoothing Smoothing; // 0x54
	FPowerIKPoleVector PoleVector; // 0x6c
	bool AffectsCenterOfGravity; // 0x8c
	float Alpha; // 0x90
};

struct FVoiceSettings {
	USceneComponent* ComponentToAttachTo; // 0x0
	USoundAttenuation* AttenuationSettings; // 0x8
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x10
};

struct FYPlayfabMessage {
	FString m_userId; // 0x0
	FString m_service; // 0x10
	UScriptStruct* m_desiredStruct; // 0x20
	FString m_jsonData; // 0x28
	int32_t m_requestHandle; // 0x38
};

struct FRigVMInstruction {
	uint64_t ByteCodeIndex; // 0x0
	ERigVMOpCode OpCode; // 0x8
	char OperandAlignment; // 0x9
};

struct FYActiveGlobalRuntimeVanityData {
	TArray<FYGlobalVanityItem> m_banner; // 0x0
	FYGlobalVanityItem m_deathEmote; // 0x10
	TArray<FYGlobalVanityItem> m_emote; // 0x28
	FYGlobalVanityItem m_droppodHandle; // 0x38
	TArray<FYGlobalVanityItem> m_spray; // 0x50
	FYGlobalVanityItem m_petHandle; // 0x60
	int32_t emoteAndBannerCountPerType; // 0x78
};

struct FServerGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FYListPersistentSessionRequestsResult {
	bool SUCCESS; // 0x0
	int32_t numServersShutdown; // 0x4
};

struct FAdminUpdateStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* MarketingData; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
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

struct FGroupsListMembershipOpportunitiesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Applications; // 0x8
	TArray<UPlayFabJsonObject*> Invitations; // 0x18
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

struct FClientSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
};

struct FClientGetPurchaseRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
};

struct FStaticSwitchParameter : FStaticParameterBase {
	bool Value; // 0x24
};

struct FPropertyAccessCopy {
	int32_t AccessIndex; // 0x0
	int32_t DestAccessStartIndex; // 0x4
	int32_t DestAccessEndIndex; // 0x8
	EPropertyAccessCopyType Type; // 0xc
};

struct FYExperienceRow : FYItemDataTableRowBase {
	EYExperienceType m_experienceType; // 0x310
};

struct FYDamagePlayerTrackingData {
	float m_lastTimeTakeDamageFromPlayer; // 0x0
	float m_timeStartedGettingKilledByPlayer; // 0x4
	float m_healthStartedKilledByPlayer; // 0x8
	float m_staminaStartedKilledByPlayer; // 0xc
};

struct FAssetBundleData {
	TArray<FAssetBundleEntry> Bundles; // 0x0
};

struct FSplineMeshInstanceData : FSceneComponentInstanceData {
	FVector StartPos; // 0xb8
	FVector EndPos; // 0xc4
	FVector StartTangent; // 0xd0
	FVector EndTangent; // 0xdc
};

struct FAdminResetUserStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FSceneComponentInstanceData : FActorComponentInstanceData {
	TMap<USceneComponent*, FTransform> AttachedInstanceComponents; // 0x68
};

struct FVertexInstanceToCreate {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexInstanceAttributes; // 0x8
	FVertexInstanceID OriginalVertexInstanceID; // 0x18
};

struct FRuntimeVirtualTextureParameterValue {
	FMaterialParameterInfo ParameterInfo; // 0x0
	URuntimeVirtualTexture* ParameterValue; // 0x10
	FGuid ExpressionGUID; // 0x18
};

struct FYDebugGivePlayerContractRewardsRequest {
	FString UserId; // 0x0
	FString contractId; // 0x10
};

struct FYMovementGroundAttackInfo {
	FVector m_impactLocation; // 0x0
	FVector m_impactDirection; // 0xc
	FVector m_impactNormal; // 0x18
};

struct FYRankedCalculationData {
	int32_t m_rankBeforeMatch; // 0x0
	int32_t m_newRank; // 0x4
	int32_t m_placementPoints; // 0x8
	int32_t m_evacBonus; // 0xc
	int32_t m_vpCount; // 0x10
	float m_vpMultiplier; // 0x14
	int32_t m_calculatedStartPenalty; // 0x18
	int32_t m_leavePenalty; // 0x1c
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

struct FInsightsInsightsEmptyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FCustomDefine {
	FString DefineName; // 0x0
	FString DefineValue; // 0x10
};

struct FGroupsListMembershipResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Groups; // 0x8
};

struct FBakedStateExitTransition {
	int32_t CanTakeDelegateIndex; // 0x0
	int32_t CustomResultNodeIndex; // 0x4
	int32_t TransitionIndex; // 0x8
	bool bDesiredTransitionReturnValue; // 0xc
	bool bAutomaticRemainingTimeRule; // 0xd
	TArray<int32_t> PoseEvaluatorLinks; // 0x10
};

struct FRigUnit_FitChainToCurve : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	FCRFourPointBezier Bezier; // 0x78
	EControlRigCurveAlignment Alignment; // 0xa8
	float Minimum; // 0xac
	float Maximum; // 0xb0
	int32_t SamplingPrecision; // 0xb4
	FVector PrimaryAxis; // 0xb8
	FVector SecondaryAxis; // 0xc4
	FVector PoleVectorPosition; // 0xd0
	TArray<FRigUnit_FitChainToCurve_Rotation> Rotations; // 0xe0
	EControlRigAnimEasingType RotationEaseType; // 0xf0
	float weight; // 0xf4
	bool bPropagateToChildren; // 0xf8
	FRigUnit_FitChainToCurve_DebugSettings DebugSettings; // 0x100
	FRigUnit_FitChainToCurve_WorkData WorkData; // 0x160
};

struct FYVanityItemSelectionInitializationData {
	FYItemVisualAcquisitionData m_acqusitionData; // 0x0
	FDataTableRowHandle m_associatedHandle; // 0x18
	bool m_isOwned; // 0x28
};

struct FTearOffActorInfo {
	AActor* Actor; // 0x8
};

struct FYActivityBigDrillFlyToAnalyticsEvent : FYBaseActivityStats {
	int32_t target_position_x; // 0xb8
	int32_t target_position_y; // 0xbc
};

struct FYSpawnNPCRequestData {
	FTransform m_baseTransform; // 0x0
	AActor* m_owner; // 0x30
	FDataTableRowHandle m_rowHandle; // 0x38
	FDataTableRowHandle m_animationHandle; // 0x48
};

struct FAdminUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FMaterialAttributesInput : FExpressionInput {
	int32_t PropertyConnectedBitmask; // 0xc
};

struct FYDeclineSquadInvite {
	FString ID; // 0x0
};

struct FMovieSceneObjectBindingID {
	int32_t SequenceID; // 0x0
	EMovieSceneObjectBindingSpace Space; // 0x4
	FGuid Guid; // 0x8
};

struct FHorizonTweenEventActorMoveFromToParameters : FHorizonTweenEventVectorParameters {
	TWeakObjectPtr<AActor> TweenTargetWeakPtr; // 0x148
};

struct FYWeaponDataTableBase : FYItemDataTableRowBase {
	FY3dWidgetInfo m_3dWidgetInfo; // 0x310
	FText m_weaponName; // 0x348
	FYWeaponUIData m_uiData; // 0x360
	TSoftObjectPtr<USkeletalMesh> m_skeletalMesh; // 0x3e0
	TSoftClassPtr<UObject> m_animInstance; // 0x408
	FName m_attachSocketOverride; // 0x430
	TSoftObjectPtr<UAnimMontage> m_animEquipPlayerAnimationWeapon; // 0x438
	TSoftObjectPtr<UAnimMontage> m_animEquipPlayerAnimationFirstPerson; // 0x460
	TSoftObjectPtr<UAnimMontage> m_animEquipPlayerAnimationThirdPerson; // 0x488
	TSoftObjectPtr<UAnimMontage> m_animUnEquipPlayerAnimationWeapon; // 0x4b0
	TSoftObjectPtr<UAnimMontage> m_animUnEquipPlayerAnimationFirstPerson; // 0x4d8
	TSoftObjectPtr<UAnimMontage> m_animUnEquipPlayerAnimationThirdPerson; // 0x500
	TSoftObjectPtr<UAnimMontage> m_animFirePlayerAnimationWeapon; // 0x528
	TSoftObjectPtr<UAnimMontage> m_animFirePlayerAnimationFirstPerson; // 0x550
	TSoftObjectPtr<UAnimMontage> m_animFireMissPlayerAnimationFirstPerson; // 0x578
	TSoftObjectPtr<UAnimMontage> m_animFirePlayerAnimationThirdPerson; // 0x5a0
	TSoftObjectPtr<UAnimMontage> m_animFireMissPlayerAnimationThirdPerson; // 0x5c8
	TSoftObjectPtr<UAnimMontage> m_animFireTargetingPlayerAnimationWeapon; // 0x5f0
	TSoftObjectPtr<UAnimMontage> m_animFireTargetingPlayerAnimationFirstPerson; // 0x618
	TSoftObjectPtr<UAnimMontage> m_animFireTargetingPlayerAnimationThirdPerson; // 0x640
	TSoftObjectPtr<UAnimMontage> m_animFireStopPlayerAnimationWeapon; // 0x668
	TSoftObjectPtr<UAnimMontage> m_animFireStopPlayerAnimationFirstPerson; // 0x690
	TSoftObjectPtr<UAnimMontage> m_animFireStopPlayerAnimationThirdPerson; // 0x6b8
	TSoftObjectPtr<UAnimMontage> m_animFireStopTargetingPlayerAnimationWeapon; // 0x6e0
	TSoftObjectPtr<UAnimMontage> m_animFireStopTargetingPlayerAnimationFirstPerson; // 0x708
	TSoftObjectPtr<UAnimMontage> m_animFireStopTargetingPlayerAnimationThirdPerson; // 0x730
	TSoftObjectPtr<UAnimMontage> m_animReloadPlayerAnimationWeapon; // 0x758
	TSoftObjectPtr<UAnimMontage> m_animReloadPlayerAnimationWeaponThirdPerson; // 0x780
	TSoftObjectPtr<UAnimMontage> m_animReloadPlayerAnimationFirstPerson; // 0x7a8
	TSoftObjectPtr<UAnimMontage> m_animReloadPlayerAnimationThirdPerson; // 0x7d0
	TSoftObjectPtr<UAnimMontage> m_animSpinupPlayerAnimationWeapon; // 0x7f8
	TSoftObjectPtr<UAnimMontage> m_animSpinupPlayerAnimationFirstPerson; // 0x820
	TSoftObjectPtr<UAnimMontage> m_animSpinupPlayerAnimationThirdPerson; // 0x848
	TSoftObjectPtr<UAnimMontage> m_animUsePlayerAnimationWeapon; // 0x870
	TSoftObjectPtr<UAnimMontage> m_animUsePlayerAnimationFirstPerson; // 0x898
	TSoftObjectPtr<UAnimMontage> m_animUsePlayerAnimationThirdPerson; // 0x8c0
	TArray<TSoftObjectPtr<USkeletalMesh>> m_weaponVanityMeshAlternatives; // 0x8e8
	TArray<FYWeaponVanityMeshAttachment> m_defaultVanityMeshAttachments; // 0x8f8
	TArray<FYWeaponMaterialData> m_weaponVanityMaterialEntries; // 0x908
	EYCustomizationCategory m_customizationCameraCategory; // 0x918
	float m_pivottOffsetXDistance; // 0x91c
	FRotator m_pivotStartRotation; // 0x920
	TArray<FYDefaultModAttachmentData> m_defaultModAttachmentEntries; // 0x930
	TArray<FYModSlotDefinition> m_modSlots; // 0x940
	float m_defaultScopeOffset; // 0x950
	EYDeviceCategory m_deviceCategory; // 0x954
	float m_weaponTargetingFOV; // 0x958
	bool m_fireAnimationIsLooping; // 0x95c
	bool m_stopFireAnimationWhenInterrupted; // 0x95d
	bool m_hideNormalCrosshairWhenTargeting; // 0x95e
	bool m_showFullscreenCrosshairWhenTargeting; // 0x95f
	bool m_alwaysHideCrosshair; // 0x960
	TSoftClassPtr<UObject> m_fullscreenWidgetPath; // 0x968
	bool m_fireWeaponFromMuzzleLocation; // 0x990
	bool m_forceFireWeaponFromCameraLocationWhenADSing; // 0x991
	bool m_hideGunWhenFinishedTargeting; // 0x992
	bool m_canUseTargeting; // 0x993
	bool m_ignoreForAutomationTest; // 0x994
	bool m_updateBeamFXEveryFrame; // 0x995
	FDataTableRowHandle m_audioDataTableRow; // 0x998
	FDataTableRowHandle m_tuningDataTableRow; // 0x9a8
	FDataTableRowHandle m_defaultFXCategoryRow; // 0x9b8
	FName m_overrideSecondaryWeaponCosmeticAttachmentName; // 0x9c8
	EYVFX_WeaponType m_vfxWeaponType; // 0x9d0
	FDataTableRowHandle m_transportDataTableRow; // 0x9d8
	EYEquipedWeaponPoseType m_animationPose; // 0x9e8
	EYEquipedAnimationWeaponType m_animationWeaponType; // 0x9e9
	bool m_blockAllWeaponInput; // 0x9ea
	bool m_useAnimsForState; // 0x9eb
	bool m_useAnimSectionsFirstPerson; // 0x9ec
	bool m_useAnimSectionsThirdPerson; // 0x9ed
	TMap<EYWeaponPlayState, FYWeaponPlayStateAnimationsEntry> m_animsForState; // 0x9f0
	UYScriptableWeaponComponent* m_scriptableComponent; // 0xa40
};

struct FYPlayerQuarterStatus {
	int32_t Level; // 0x0
	FYTimestamp upgradeStartedTime; // 0x8
};

struct FEdgeToCreate {
	FVertexID VertexID0; // 0x0
	FVertexID VertexID1; // 0x4
	FMeshElementAttributeList EdgeAttributes; // 0x8
	FEdgeID OriginalEdgeID; // 0x18
};

struct FYFriendListUpdated {
	FString internalUserId; // 0x0
	TArray<FYFriendEntry> updatedFriends; // 0x10
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

struct FYRuntimeInitializationContext {
	APlayerController* m_controller; // 0x0
	APlayerState* m_playerState; // 0x8
	APawn* m_pawn; // 0x10
	FString m_userId; // 0x18
	bool m_isAdditionalIntialized; // 0x28
	EYInitializationRequestSettingTypes m_requestSettingType; // 0x29
};

struct FRotationLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
};

struct FRigUnit_TimeOffsetFloat : FRigUnit_SimBase {
	float Value; // 0x8
	float SecondsAgo; // 0xc
	int32_t BufferSize; // 0x10
	float TimeRange; // 0x14
	float Result; // 0x18
	TArray<float> Buffer; // 0x20
	TArray<float> DeltaTimes; // 0x30
	int32_t LastInsertIndex; // 0x40
	int32_t UpperBound; // 0x44
};

struct FHapticFeedbackDetails_Curve {
	FRuntimeFloatCurve Frequency; // 0x0
	FRuntimeFloatCurve Amplitude; // 0x88
};

struct FYMessage {
	FString from; // 0x0
	FString Msg; // 0x10
	EYChannelType ChannelType; // 0x20
};

struct FYContractData {
	FDataTableRowHandle m_contractRowHandle; // 0x0
	FYContractDynamicData m_contractDynamicData; // 0x10
};

struct FInterpLookupTrack {
	TArray<FInterpLookupPoint> Points; // 0x0
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

struct FYMaterialRow : FYItemDataTableRowBase {
	TSoftObjectPtr<UTexture2D> m_hudIconBig; // 0x310
	FYActorUIWidgetData m_uiWidgetData; // 0x338
	FText m_materialLocationDescription; // 0x3d8
	TArray<TSoftObjectPtr<UObject>> m_meshes; // 0x3f0
	FYItemPickUpLightData m_pickUpLightData; // 0x400
	FVector m_meshScale; // 0x41c
	FDataTableRowHandle m_pickUpSoundRowHandle; // 0x428
};

struct FDataAbortFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FAdminGetPolicyRequest : FPlayFabRequestCommon {
	FString PolicyName; // 0x8
};

struct FYActivityLinkedLocations {
	TMap<EYActivityType, FYActivityLocationArray> m_linkedLocations; // 0x0
};

struct FServerUnlockContainerItemRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString PlayFabId; // 0x40
};

struct FRigUnit_GetRelativeTransformForItem : FRigUnit {
	FRigElementKey Child; // 0x8
	bool bChildInitial; // 0x14
	FRigElementKey Parent; // 0x18
	bool bParentInitial; // 0x24
	FTransform RelativeTransform; // 0x30
	FCachedRigElement CachedChild; // 0x60
	FCachedRigElement CachedParent; // 0x74
};

struct FVectorParameterNameAndCurves {
	FName ParameterName; // 0x0
	FMovieSceneFloatChannel XCurve; // 0x8
	FMovieSceneFloatChannel YCurve; // 0xa8
	FMovieSceneFloatChannel ZCurve; // 0x148
};

struct FHorizonTweenEventTweenListImplementParameters : FHorizonTweenEventImplementParameters {
	bool bLoopTweenList; // 0x1
};

struct FSubdividedWireEdge {
	int32_t EdgeVertex0PositionIndex; // 0x0
	int32_t EdgeVertex1PositionIndex; // 0x4
};

struct FYStationServerReady {
	FString serverAddress; // 0x0
};

struct FAdminLookupUserAccountInfoRequest : FPlayFabRequestCommon {
	FString Email; // 0x8
	FString PlayFabId; // 0x18
	FString TitleDisplayName; // 0x28
	FString Username; // 0x38
};

struct FBuilderPoly {
	TArray<int32_t> VertexIndices; // 0x0
	int32_t Direction; // 0x10
	FName ItemName; // 0x14
	int32_t PolyFlags; // 0x1c
};

struct FYAbilityActionKineticShieldData : FYAbilityActionDataTableRow {
	UMaterialInstance* m_kineticShieldMaterialNormal; // 0x78
	UMaterialInstance* m_kineticShieldMaterialPact; // 0x80
	UMaterialInstance* m_kineticShieldMaterialEnemy; // 0x88
	FName m_shieldFadeOutParameter; // 0x90
	FDataTableRowHandle m_healthRowHandle; // 0x98
};

struct FClientSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString VirtualCurrency; // 0x18
};

struct FMovieSceneSkeletalAnimationSectionTemplateParameters : FMovieSceneSkeletalAnimationParams {
	FFrameNumber SectionStartTime; // 0xd8
	FFrameNumber SectionEndTime; // 0xdc
};

struct FYItemUsingVanityInfo {
	FString m_baseItemId; // 0x0
	FString m_customItemID; // 0x10
};

struct FAudioQualitySettings {
	FText DisplayName; // 0x0
	int32_t MaxChannels; // 0x18
};

struct FYLoginEntry {
	FString m_id; // 0x0
	FString m_login; // 0x10
	FString m_password; // 0x20
};

struct FGameModeName {
	FString Name; // 0x0
	FSoftClassPath GameMode; // 0x10
};

struct FYGlobalVanityDefaultsData : FYDataTableRowBase {
	FDataTableRowHandle m_defaultBanner; // 0x10
	FDataTableRowHandle m_defaultDeathEmote; // 0x20
	FDataTableRowHandle m_defaultNormalEmote; // 0x30
	FDataTableRowHandle m_defaultDroppod; // 0x40
	FDataTableRowHandle m_defaultSpray; // 0x50
	FDataTableRowHandle m_defaultPet; // 0x60
};

struct FYScoreData {
	int32_t m_placement; // 0x0
	int32_t m_victoryPoints; // 0x4
};

struct FAdminGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FFloatRange {
	FFloatRangeBound LowerBound; // 0x0
	FFloatRangeBound UpperBound; // 0x8
};

struct FYRawDamageEventContainer {
	TArray<FYDamageEvent> m_events; // 0x0
	int32_t m_index; // 0x10
};

struct FYResetSessionsAndCreateNewRequestResult {
	bool SUCCESS; // 0x0
};

struct FMovieSceneSequenceHierarchyNode {
	FMovieSceneSequenceID ParentID; // 0x0
	TArray<FMovieSceneSequenceID> Children; // 0x8
};

struct FYPlayerKilledEvent : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8
	int32_t location_y; // 0xac
	int32_t location_z; // 0xb0
	int32_t location_x_killer; // 0xb4
	int32_t location_y_killer; // 0xb8
	int32_t location_z_killer; // 0xbc
	int32_t enemy_damage; // 0xc0
	FString enemy_weapon; // 0xc8
	FString enemy_weapon_id; // 0xd8
	int32_t enemy_damage_last_hit; // 0xe8
	FString enemy_weapon_last_hit; // 0xf0
	FString enemy_weapon_id_last_hit; // 0x100
	int32_t time_since_match_start; // 0x110
	int32_t time_since_user_joined; // 0x114
	FString enemy_type; // 0x118
	FString enemy_name; // 0x128
	FString enemy_id; // 0x138
	FString last_hit_id; // 0x148
	FString last_hit_name; // 0x158
	FString enemy_type_last_hit; // 0x168
	int32_t AI_activity; // 0x178
	int32_t time_started_to_get_killed_by_player; // 0x17c
	int32_t health_on_started_to_get_killed_by_player; // 0x180
	int32_t last_time_damaged_by_a_player; // 0x184
	FString last_hit_damage_context; // 0x188
	int32_t stamina_on_started_to_get_killed_by_player; // 0x198
	int32_t stamina_on_death; // 0x19c
};

struct FYAISenseTuningRow : FYDataTableRowBase {
	float m_sightRadius; // 0x10
	float m_loseSightRadiusAdditional; // 0x14
	float m_peripheralVisionAngleDegrees; // 0x18
	float m_hearingRange; // 0x1c
	float m_losHearingRange; // 0x20
	float m_hearingEventsRangeMultiplier; // 0x24
	float m_shareSenseRadius; // 0x28
	FYAIAggroTuning m_aggroTuning; // 0x2c
	TMap<EYAISenseType, FYAISenseTuning> m_senses; // 0x80
};

struct FRigUnit_MathFloatNotEquals : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FCachedPoseIndices {
	TArray<int32_t> OrderedSavedPoseNodeIndices; // 0x0
};

struct FHorizonTweenEventActorMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	TWeakObjectPtr<AActor> TweenTargetWeakPtr; // 0x138
};

struct FSkeletalMeshSamplingRegionBoneFilter {
	FName BoneName; // 0x0
	char bIncludeOrExclude : 1; // 0x8
	char bApplyToChildren : 1; // 0x8
};

struct FYSquadMatchmakingReadyResponse {
	EYSquadActionResult Result; // 0x0
	bool isSquadReadyForMatch; // 0x1
};

struct FYPlayfabTitleDataRetrival {
	TMap<FString, FString> m_keyToData; // 0x0
};

struct FSynth1PatchCable {
	float Depth; // 0x0
	ESynth1PatchDestination Destination; // 0x4
};

struct FPolygonGroupForPolygon {
	FPolygonID PolygonID; // 0x0
	FPolygonGroupID PolygonGroupID; // 0x4
};

struct FYInventoryInsuranceDataTableRow : FYDataTableRowBase {
	float m_cost; // 0x10
	float m_payout; // 0x14
};

struct FRestrictedGameplayTagTableRow : FGameplayTagTableRow {
	bool bAllowNonRestrictedChildren; // 0x20
};

struct FGameplayTag {
	FName TagName; // 0x0
};

struct FYCraftingInProgressData {
	FString ItemId; // 0x0
	int32_t itemRarity; // 0x10
	int32_t purchaseAmount; // 0x14
	int32_t timePassed; // 0x18
};

struct FYPlayerPactHUDAudioData {
	FDataTableRowHandle m_pactInviteIssued; // 0x0
	FDataTableRowHandle m_pactInviteReceived; // 0x10
	FDataTableRowHandle m_pactInviteExpired; // 0x20
	FDataTableRowHandle m_pactStarted; // 0x30
	FDataTableRowHandle m_pactCancelled; // 0x40
	FDataTableRowHandle m_pactEnded; // 0x50
};

struct FServerWriteServerPlayerEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString PlayFabId; // 0x28
	FString Timestamp; // 0x38
};

struct FNetDriverDefinition {
	FName DefName; // 0x0
	FName DriverClassName; // 0x8
	FName DriverClassNameFallback; // 0x10
};

struct FServerSubtractCharacterVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	FString CharacterId; // 0x10
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
	FString VirtualCurrency; // 0x38
};

struct FInAppPurchaseReceiptInfo {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FYRequestLeaveStationInfo {
	FString UserId; // 0x0
	bool isMatch; // 0x10
};

struct FMovieSceneTrackDisplayOptions {
	char bShowVerticalFrames : 1; // 0x0
};

struct FYQuestItemRow : FYItemDataTableRowBase {
	TSoftObjectPtr<UTexture2D> m_hudIconBig; // 0x310
	TSoftObjectPtr<UObject> m_mesh; // 0x338
};

struct FYGetFactionsProgressionRequest {
	FString UserId; // 0x0
	FString Error; // 0x10
};

struct FLandmassTerrainCarvingSettings {
	EBrushBlendType BlendMode; // 0x0
	bool bInvertShape; // 0x1
	FLandmassFalloffSettings FalloffSettings; // 0x4
	FLandmassBrushEffectsList Effects; // 0x18
	int32_t Priority; // 0x78
};

struct FActorSequenceObjectReferenceMap {
	TArray<FGuid> BindingIds; // 0x0
	TArray<FActorSequenceObjectReferences> References; // 0x10
};

struct FYSettingEntryDescriptionDataTableRow : FYDataTableRowBase {
	FText m_description; // 0x10
	TSoftObjectPtr<UTexture2D> m_image; // 0x28
};

struct FPowerIKGroundSlope {
	FVector StrideDirection; // 0x0
	float MaxGroundAngle; // 0xc
	float MaxNormalAngularSpeed; // 0x10
	bool OrientToGround; // 0x14
	float OrientToPitch; // 0x18
	float OrientToRoll; // 0x1c
	bool ScaleStride; // 0x20
	float UphillStrideScale; // 0x24
	float DownhillStrideScale; // 0x28
	float SidehillStrideScale; // 0x2c
	float SidehillPushOuterFeet; // 0x30
	bool Lean; // 0x34
	float UphillLean; // 0x38
	float DownhillLean; // 0x3c
	float SidehillLean; // 0x40
	bool CounterLean; // 0x44
	FName CounterLeanBoneName; // 0x48
	float UphillCounterLean; // 0x54
	float DownhillCounterLean; // 0x58
	float SidehillCounterLean; // 0x5c
	bool MoveRoot; // 0x60
	float UphillVertOffset; // 0x64
	float UphillHorizOffset; // 0x68
	float DownhillVertOffset; // 0x6c
	float DownhillHorizOffset; // 0x70
	float SidehillHorizOffset; // 0x74
	float SidehillVertOffset; // 0x78
	bool RotateFootToGround; // 0x7c
	float PitchFootAmount; // 0x80
	float RollFootAmount; // 0x84
	float FootAngleDeltaSmoothSpeed; // 0x88
	bool OffsetFeetPositions; // 0x8c
	float StaticFootOffset; // 0x90
};

struct FYAISpawnArchetypeData {
	EYNavMeshType m_spawnNavMesh; // 0x0
};

struct FYPlayerMutedEvent : FYBaseAnalyticsEvent {
	FString muted_user; // 0xa8
	int32_t Action; // 0xb8
	int32_t Location; // 0xbc
	FString muted_message; // 0xc0
};

struct FMovieSceneEvaluationFieldEntityMetaData {
	FFrameNumber ForcedTime; // 0x0
	ESectionEvaluationFlags Flags; // 0x8
	char bEvaluateInSequencePreRoll : 1; // 0x9
	char bEvaluateInSequencePostRoll : 1; // 0x9
};

struct FKConvexElem : FKShapeElem {
	TArray<FVector> VertexData; // 0x30
	TArray<int32_t> IndexData; // 0x40
	FBox ElemBox; // 0x50
	FTransform Transform; // 0x70
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

struct FYDropAbilityAnalyticsPerPlayer : FYBaseAnalyticsEvent {
	FString ability_id; // 0xa8
	FString ability_name; // 0xb8
	int32_t time_since_match_start; // 0xc8
	int32_t drop_location_X; // 0xcc
	int32_t drop_location_Y; // 0xd0
	int32_t Source; // 0xd4
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

struct FRigUnit_FramesToSeconds : FRigUnit_AnimBase {
	float Frames; // 0x8
	float Seconds; // 0xc
};

struct FAnimationSharingScalability {
	FPerPlatformBool UseBlendTransitions; // 0x0
	FPerPlatformFloat BlendSignificanceValue; // 0x4
	FPerPlatformInt MaximumNumberConcurrentBlends; // 0x8
	FPerPlatformFloat TickSignificanceValue; // 0xc
};

struct FYFindDropLocationData {
	UObject* m_worldContextObject; // 0x0
	AActor* m_actorContext; // 0x8
	FVector m_locationReachableFrom; // 0x10
	FVector m_preferredDropLocation; // 0x1c
	FVector m_choosenSuitableDropLocation; // 0x28
	int32_t m_navMeshRadius; // 0x34
	FString m_contextInfo; // 0x38
	TArray<FYDebugFindDropLocationVectorInfo> m_additionalDebugInfo; // 0x48
};

struct FServerRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FYRequestServerMapRequest {
	FString SessionId; // 0x0
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

struct FWeightmapLayerAllocationInfo {
	ULandscapeLayerInfoObject* LayerInfo; // 0x0
	char WeightmapTextureIndex; // 0x8
	char WeightmapTextureChannel; // 0x9
};

struct FNamedColor {
	FColor Value; // 0x0
	FName Name; // 0x4
};

struct FLaunchOnTestSettings {
	FFilePath LaunchOnTestmap; // 0x0
	FString DeviceID; // 0x10
};

struct FYPlayerInventoryLimitResultData {
	FString UserId; // 0x0
	int32_t inventoryStashLimit; // 0x10
	int32_t inventoryBagLimit; // 0x14
	int32_t inventorySafeLimit; // 0x18
};

struct FNamedFloat {
	float Value; // 0x0
	FName Name; // 0x4
};

struct FClientGetPaymentTokenRequest : FPlayFabRequestCommon {
	FString TokenProvider; // 0x8
};

struct FRigVMByteCodeStatistics {
	uint32_t InstructionCount; // 0x0
	uint32_t DataBytes; // 0x4
};

struct FMovieSceneTrackInstanceComponent {
	UMovieSceneSection* Owner; // 0x0
	UMovieSceneTrackInstance* TrackInstanceClass; // 0x8
};

struct FRigUnit_NameReplace : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Old; // 0x10
	FName New; // 0x18
	FName Result; // 0x20
};

struct FRigUnit_MathQuaternionScale : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	float Scale; // 0x20
};

struct FYVFXNiagaraMapInfo {
	FVector StormOccusionCenter01; // 0x0
	float StormOcclusionRadius01; // 0xc
	FVector StormOccusionCenter02; // 0x10
	float StormOcclusionRadius02; // 0x1c
};

struct FBTCompositeChild {
	UBTCompositeNode* ChildComposite; // 0x0
	UBTTaskNode* ChildTask; // 0x8
	TArray<UBTDecorator*> Decorators; // 0x10
	TArray<FBTDecoratorLogic> DecoratorOps; // 0x20
};

struct FControlRigIOSettings {
	bool bUpdatePose; // 0x0
	bool bUpdateCurves; // 0x1
};

struct FBlendParameter {
	FString DisplayName; // 0x0
	float Min; // 0x10
	float Max; // 0x14
	int32_t GridNum; // 0x18
};

struct FSkeletonToMeshLinkup {
	TArray<int32_t> SkeletonToMeshTable; // 0x0
	TArray<int32_t> MeshToSkeletonTable; // 0x10
};

struct FYRewardsSent {
	EYRewardResult Status; // 0x0
};

struct FAdminGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FYRequestActiveMissionResult {
	FString UserId; // 0x0
	FString currentMissionID; // 0x10
	int32_t progress; // 0x20
	bool showPopup; // 0x24
};

struct FSoundModulationDefaultSettings {
	FSoundModulationDestinationSettings VolumeModulationDestination; // 0x0
	FSoundModulationDestinationSettings PitchModulationDestination; // 0x10
	FSoundModulationDestinationSettings HighpassModulationDestination; // 0x20
	FSoundModulationDestinationSettings LowpassModulationDestination; // 0x30
};

struct FYEomInventoryData {
	TArray<FYInventoryItem> m_gainedItems; // 0x0
	TArray<FYInventoryItem> m_lostItems; // 0x10
	TArray<EYPlayerSetType> m_lostPlayerSetEntries; // 0x20
	TArray<FYInventoryItem> m_lostPlayerSetItems; // 0x30
	FYPlayerInventory m_lostBagItems; // 0x40
	FYPlayerInventory m_lostSafePocketItems; // 0x58
	bool m_bPlayerSurvived; // 0x70
};

struct FYSocialFriendStateUpdated {
	FString internalUserId; // 0x0
	FYFriendEntry friendEntry; // 0x10
};

struct FDatasmithStaticMaterialTemplate {
	FName MaterialSlotName; // 0x0
	UMaterialInterface* MaterialInterface; // 0x8
};

struct FAnimationState : FAnimationStateBase {
	TArray<FAnimationTransitionRule> Transitions; // 0x8
	int32_t StateRootNodeIndex; // 0x18
	int32_t StartNotify; // 0x1c
	int32_t EndNotify; // 0x20
	int32_t FullyBlendedNotify; // 0x24
};

struct FMovieScene2DTransformMask {
	uint32_t Mask; // 0x0
};

struct FClientUnlinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FacebookInstantGamesId; // 0x10
};

struct FServerUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString KeysToRemove; // 0x28
	EUserDataPermission Permission; // 0x38
	FString PlayFabId; // 0x40
};

struct FAdminResetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
};

struct FMovieSceneEntityComponentField {
	FMovieSceneEvaluationFieldEntityTree PersistentEntityTree; // 0x0
	FMovieSceneEvaluationFieldEntityTree OneShotEntityTree; // 0x60
	TArray<FMovieSceneEvaluationFieldEntity> Entities; // 0xc0
	TArray<FMovieSceneEvaluationFieldEntityMetaData> EntityMetaData; // 0xd0
	TArray<FMovieSceneEvaluationFieldSharedEntityMetaData> SharedMetaData; // 0xe0
};

struct FYQueryFriendsListResponse {
	TArray<FYPlayFabFriendWithState> Friends; // 0x0
};

struct FIndexedCurve {
	FKeyHandleMap KeyHandlesToIndices; // 0x8
};

struct FInterpCurvePointQuat {
	float InVal; // 0x0
	FQuat OutVal; // 0x10
	FQuat ArriveTangent; // 0x20
	FQuat LeaveTangent; // 0x30
	EInterpCurveMode InterpMode; // 0x40
};

struct FYSetActiveMission {
	FString UserId; // 0x0
	FString currentMissionID; // 0x10
	int32_t progress; // 0x20
	bool showPopup; // 0x24
};

struct FYGrantsData {
	TArray<FYGrant> grants; // 0x0
};

struct FDatasmithCameraLensSettingsTemplate {
	float MaxFStop; // 0x0
};

struct FYRetentionBonusEntry {
	EYRetentionBonusEntryType m_rewardType; // 0x0
	FDataTableRowHandle m_rewardHandle; // 0x8
	TArray<FDataTableRowHandle> m_rewardHandles; // 0x18
	bool m_persistent; // 0x28
};

struct FRigUnit_MathRBFInterpolateVectorQuat : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorQuat_Target> Targets; // 0xb0
	FQuat Output; // 0xc0
};

struct FMovieSceneColorKeyStruct : FMovieSceneKeyStruct {
	FLinearColor Color; // 0x8
	FFrameNumber Time; // 0x18
};

struct FGeometryCollectionDebugDrawActorSelectedRigidBody {
	int32_t ID; // 0x0
	AChaosSolverActor* Solver; // 0x8
	AGeometryCollectionActor* GeometryCollection; // 0x10
};

struct FAdminGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FYItemVisualAcquisitionData {
	FName m_seasonId; // 0x0
	char m_level; // 0x8
	bool m_paidPass; // 0x9
	FName m_shopOfferId; // 0xc
};

struct FYDamageInfoDetail {
	FYDamageOriginInfo m_damageOriginInfo; // 0x0
	int32_t m_hitsTotal; // 0x28
	int32_t m_hitsCritical; // 0x2c
	float m_amountDamage; // 0x30
};

struct FYImpactInitializationData {
	FVector m_startLocation; // 0x0
	FVector m_originDamageLineTraceCheckOverride; // 0xc
	FVector m_direction; // 0x18
	FVector m_impactNormal; // 0x24
	AActor* m_owner; // 0x30
	AActor* m_instigator; // 0x38
	float m_damageReduction; // 0x40
	UYDamageComponent* m_componentToDamage; // 0x48
	USceneComponent* m_componentHit; // 0x50
	FDataTableRowHandle m_impactDataTableRow; // 0x58
	FDataTableRowHandle m_fxDataTableRow; // 0x68
	FDataTableRowHandle m_transportDataTableRow; // 0x78
	FDataTableRowHandle m_dataTableRowHandleContext; // 0x88
	int32_t m_transportHandle; // 0x98
	EPhysicalSurface m_surfaceType; // 0x9c
	bool m_isWeakspot; // 0x9d
	bool m_isKillShot; // 0x9e
	bool m_isShieldReducedToZero; // 0x9f
	float m_damageAreaMultiplier; // 0xa0
	bool m_isFriendlyFireAllowed; // 0xa4
	bool m_replicate; // 0xa5
	bool m_replicateToAuthorithy; // 0xa6
	bool m_replicateSkipAutonomous; // 0xa7
	bool m_skipDamageDealing; // 0xa8
	bool m_isTargeting; // 0xa9
	bool m_requiresValidWeaponImpactDataTableRow; // 0xaa
	FYDamageOriginInfo m_damageOriginInfo; // 0xb0
	char m_boneIndexHit; // 0xd8
	FName m_boneNameHit; // 0xdc
	FVector m_visualOriginTrailLocation; // 0xe4
	FGuid m_shotGuid; // 0xf0
};

struct FSoundWaveSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
	float NormalizedMagnitude; // 0x8
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

struct FBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FRigTransformConstraint {
	EConstraintTransform TranformType; // 0x0
	FName ParentSpace; // 0x4
	float weight; // 0xc
};

struct FInterpCurvePointLinearColor {
	float InVal; // 0x0
	FLinearColor OutVal; // 0x4
	FLinearColor ArriveTangent; // 0x14
	FLinearColor LeaveTangent; // 0x24
	EInterpCurveMode InterpMode; // 0x34
};

struct FRigUnit_MathVectorClamp : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector Minimum; // 0x14
	FVector Maximum; // 0x20
	FVector Result; // 0x2c
};

struct FYInventoryInsuranceOffer {
	int32_t m_cost; // 0x0
	int32_t m_payout; // 0x4
	bool m_canAfford; // 0x8
};

struct FXRGestureConfig {
	bool bTap; // 0x0
	bool bHold; // 0x1
	ESpatialInputGestureAxis AxisGesture; // 0x2
	bool bNavigationAxisX; // 0x3
	bool bNavigationAxisY; // 0x4
	bool bNavigationAxisZ; // 0x5
};

struct FServerGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString PlayFabId; // 0x18
};

struct FYAITuningSnipedReactionTuning : FTableRowBase {
	TArray<FDataTableRowHandle> m_perks; // 0x8
	float m_snipedMinimunDamage; // 0x18
	float m_snipedDamagedRange; // 0x1c
	float m_snipedPlayerRadius; // 0x20
};

struct FMovieSceneCameraShakeSourceTriggerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> KeyTimes; // 0x8
	TArray<FMovieSceneCameraShakeSourceTrigger> KeyValues; // 0x18
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

struct FChannelMapInfo {
	int32_t ControlIndex; // 0x0
	int32_t TotalChannelIndex; // 0x4
	int32_t ChannelIndex; // 0x8
	int32_t ParentControlIndex; // 0xc
	FName ChannelTypeName; // 0x10
};

struct FClientGetPlayFabIDsFromFacebookInstantGamesIdsRequest : FPlayFabRequestCommon {
	FString FacebookInstantGamesIds; // 0x8
};

struct FRigCurve : FRigElement {
	float Value; // 0x18
};

struct FRigUnit_BoneHarmonics_BoneTarget {
	FName Bone; // 0x0
	float Ratio; // 0x8
};

struct FYKeybindingAnalyticsEvent : FYBaseAnalyticsEvent {
	FString input_name; // 0xa8
	FString primary_old; // 0xb8
	FString primary_new; // 0xc8
	FString secondary_old; // 0xd8
	FString secondary_new; // 0xe8
};

struct FLandscapeMaterialTextureStreamingInfo {
	FName TextureName; // 0x0
	float TexelFactor; // 0x8
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

struct FRigUnit_ApplyFK : FRigUnitMutable {
	FName Joint; // 0x68
	FTransform Transform; // 0x70
	FTransformFilter Filter; // 0xa0
	EApplyTransformMode ApplyTransformMode; // 0xa9
	ETransformSpaceMode ApplyTransformSpace; // 0xaa
	FTransform BaseTransform; // 0xb0
	FName BaseJoint; // 0xe0
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

struct FRotator {
	float Pitch; // 0x0
	float Yaw; // 0x4
	float Roll; // 0x8
};

struct FRigUnit_SetControlRotator : FRigUnitMutable {
	FName Control; // 0x68
	float weight; // 0x70
	FRotator Rotator; // 0x74
	EBoneGetterSetterMode Space; // 0x80
	FCachedRigElement CachedControlIndex; // 0x84
};

struct FYCustomizationVisualizationState {
	FString m_baseWeaponID; // 0x0
	FString m_customWeaponID; // 0x10
	FYActiveWeaponCharacterInitializationData m_initializationData; // 0x20
};

struct FGizmoFloatParameterChange {
	float InitialValue; // 0x0
	float CurrentValue; // 0x4
};

struct FPlayerMuteList {
	bool bHasVoiceHandshakeCompleted; // 0x30
	int32_t VoiceChannelIdx; // 0x34
};

struct FAnimNode_SequencePlayer : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float PlayRateBasis; // 0x40
	float PlayRate; // 0x44
	FInputScaleBiasClamp PlayRateScaleBiasClamp; // 0x48
	float StartPosition; // 0x78
	bool bLoopAnimation; // 0x7c
};

struct FYDebugGiveSeasonXp {
	int32_t xpIncrement; // 0x0
};

struct FYAudioDataTableRow : FYDataTableRowBase {
	USoundBase* m_prototypeSound; // 0x10
};

struct FYPlayFabAcceptSquadInvite {
	FYPlayFabSquad squadInfo; // 0x0
	EYSquadActionResult Result; // 0x20
};

struct FYClientMapLoadingStats : FYBaseAnalyticsEvent {
	uint32_t map_loading_time; // 0xa8
	uint32_t physical_memory_total; // 0xac
	uint64_t physical_memory_usage; // 0xb0
	uint64_t physical_memory_available; // 0xb8
	uint64_t physical_memory_peak; // 0xc0
	uint64_t page_size; // 0xc8
	uint64_t virtual_memory_total; // 0xd0
	uint64_t virtual_memory_usage; // 0xd8
	uint64_t virtual_memory_available; // 0xe0
	uint64_t virtual_memory_peak; // 0xe8
};

struct FYCancelTechTreeNodeUpgradeRequest {
	FString UserId; // 0x0
	FName nodeId; // 0x10
};

struct FYCodeConventionBlueprintVarGroup {
	float CameraTraceVolumeWidth; // 0x0
	float CameraTraceVolumeHeight; // 0x4
	bool ShowCameraWidget; // 0x8
	bool ShowWeaponWidget; // 0x9
};

struct FYActiveContractsInitData {
	FString UserId; // 0x0
	TArray<FYActiveContractInitData> activeContracts; // 0x10
};

struct FRigUnit_NameConcat : FRigUnit_NameBase {
	FName A; // 0x8
	FName B; // 0x10
	FName Result; // 0x18
};

struct FClientGetPlayFabIDsFromFacebookIDsRequest : FPlayFabRequestCommon {
	FString FacebookIDs; // 0x8
};

struct FHorizonTweenEventSceneComponentMoveFromToParameters : FHorizonTweenEventVectorParameters {
	TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr; // 0x148
};

struct FRigUnit_GetControlBool : FRigUnit {
	FName Control; // 0x8
	bool BoolValue; // 0x10
	FCachedRigElement CachedControlIndex; // 0x14
};

struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	EAxis Axis; // 0x14
	EControlRigClampSpatialMode Type; // 0x15
	float Minimum; // 0x18
	float Maximum; // 0x1c
	FTransform Space; // 0x20
	bool bDrawDebug; // 0x50
	FLinearColor DebugColor; // 0x54
	float DebugThickness; // 0x64
	FVector Result; // 0x68
};

struct FLevelViewportInfo {
	FVector CamPosition; // 0x0
	FRotator CamRotation; // 0xc
	float CamOrthoZoom; // 0x18
	bool CamUpdated; // 0x1c
};

struct FClientGetPlayFabIDsFromGoogleIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FTimelineFloatTrack {
	UCurveFloat* FloatCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName FloatPropertyName; // 0x20
};

struct FMovieSceneNiagaraFloatParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel FloatChannel; // 0x40
};

struct FAdminBanUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FConstraintDescriptor {
	EConstraintType Type; // 0x0
};

struct FMultiplayerDeleteRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString Username; // 0x30
	FString VmId; // 0x40
};

struct FRigUnit_MathVectorIsNearlyEqual : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Tolerance; // 0x20
	bool Result; // 0x24
};

struct FLevelSequenceBindingReferences {
	TMap<FGuid, FLevelSequenceBindingReferenceArray> BindingIdToReferences; // 0x0
	TSet<FGuid> AnimSequenceInstances; // 0x50
};

struct FStreamingLevelsToConsider {
	TArray<ULevelStreaming*> StreamingLevels; // 0x0
};

struct FYDebugSetCompositeProgress {
	FString parentQuestId; // 0x0
	FString compositeName; // 0x10
	int32_t Count; // 0x20
	bool Completed; // 0x24
};

struct FYProspectorBadgeRow : FYItemDataTableRowBase {
	TSoftObjectPtr<UTexture2D> m_hudIconBig; // 0x310
	TSoftObjectPtr<UObject> m_mesh; // 0x338
};

struct FGroupsListGroupInvitationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Invitations; // 0x8
};

struct FNiagaraInt32 {
	int32_t Value; // 0x0
};

struct FRigUnit_Contains : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Search; // 0x10
	bool Result; // 0x18
};

struct FYNPCDataTableRow : FYDataTableRowBase {
	FDataTableRowHandle m_sceneToSpawn; // 0x10
	TSoftClassPtr<UObject> m_classToSpawn; // 0x20
	FDataTableRowHandle m_customizationRowHandle; // 0x48
	bool m_randomizeCustomization; // 0x58
	bool m_canBeToggledForPerfomance; // 0x59
	int32_t m_interactionDistance; // 0x5c
	FText m_name; // 0x60
	FText m_title; // 0x78
	FYActorPlateWidgetCreationData m_plateWidgetData; // 0x90
	TSoftObjectPtr<UTexture2D> m_minimapIcon; // 0x120
	bool m_canInteractWith; // 0x148
	bool m_haveMinimapIcon; // 0x149
	FDataTableRowHandle m_factionRowHandle; // 0x150
	FDataTableRowHandle m_voiceOver; // 0x160
	FDataTableRowHandle m_interactVoiceOver; // 0x170
	FDataTableRowHandle m_interactFinishedVoiceOver; // 0x180
	float m_baseTranslationOffset; // 0x190
};

struct FRigUnit_SetScale : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	FVector Scale; // 0x78
	float weight; // 0x84
	bool bPropagateToChildren; // 0x88
	FCachedRigElement CachedIndex; // 0x8c
};

struct FAdminGetUserBansRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FMultiplayerGetServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FYLoreItemRowBase : FYItemDataTableRowBase {
	FText m_description; // 0x310
	FText m_lore; // 0x328
	TSoftObjectPtr<UTexture2D> m_hudIconBig; // 0x340
};

struct FYDebugSetPlayerQuartersLevel {
	FString UserId; // 0x0
	int32_t Level; // 0x10
};

struct FProfilesSetProfileLanguageResponse : FPlayFabResultCommon {
	EOperationTypes OperationResult; // 0x8
	int32_t VersionNumber; // 0xc
};

struct FRigUnit_SetTranslation : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	FVector Translation; // 0x78
	float weight; // 0x84
	bool bPropagateToChildren; // 0x88
	FCachedRigElement CachedIndex; // 0x8c
};

struct FClientLoginWithWindowsHelloRequest : FPlayFabRequestCommon {
	FString ChallengeSignature; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString PublicKeyHint; // 0x28
};

struct FNiagaraScriptVariableBinding {
	FName Name; // 0x0
};

struct FYStationInfoProto {
	FString stationInfo; // 0x0
	int32_t numUsers; // 0x10
	FString battleServerInfo; // 0x18
	TArray<FString> userIds; // 0x28
	int32_t shardIndex; // 0x38
};

struct FClientRemoveContactEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FYMissionUpdateDataEntry {
	FYMissionState missionState; // 0x0
	TArray<FYCompositeQuestProgress> compositeProgress; // 0x28
};

struct FYGetRoomInfo {
	FString roomId; // 0x0
};

struct FMediaPlayerOptions {
	FMediaPlayerTrackOptions Tracks; // 0x0
	FTimespan SeekTime; // 0x20
	EMediaPlayerOptionBooleanOverride PlayOnOpen; // 0x28
	EMediaPlayerOptionBooleanOverride Loop; // 0x29
};

struct FProfilesSetEntityProfilePolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
};

struct FDatasmithCameraFilmbackSettingsTemplate {
	float SensorWidth; // 0x0
	float SensorHeight; // 0x4
};

struct FRenderingPolygon {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FTriangleID> TriangulatedPolygonTriangleIndices; // 0x8
};

struct FRigUnit_KalmanVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	int32_t BufferSize; // 0x14
	FVector Result; // 0x18
	TArray<FVector> Buffer; // 0x28
	int32_t LastInsertIndex; // 0x38
};

struct FYActorPlateWidgetCreationData {
	UYWidget_ActorPlate* m_widgetClass; // 0x0
	FYWidgetActorPlateInitializationData m_initializationData; // 0x8
};

struct FGizmoVec2ParameterChange {
	FVector2D InitialValue; // 0x0
	FVector2D CurrentValue; // 0x8
};

struct FYSurveillanceNode {
	AActor* m_actor; // 0x0
};

struct FYItemStatsSettingsRow : FYDataTableRowBase {
	TMap<EYItemStatsCategory, FYItemStatsAssociationCollection> m_statsDefinitions; // 0x10
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

struct FAdminAddNewsRequest : FPlayFabRequestCommon {
	FString Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Timestamp; // 0x20
	FString Title; // 0x30
};

struct FCRFourPointBezier {
	FVector A; // 0x0
	FVector B; // 0xc
	FVector C; // 0x18
	FVector D; // 0x24
};

struct FEngineServiceNotification {
	FString Text; // 0x0
	double TimeSeconds; // 0x10
};

struct FYPlayfabExecuteCloudscriptMessage {
	FString m_functionName; // 0x0
	FString m_jsonData; // 0x10
};

struct FYDataTableRowBase : FTableRowBase {
	FName m_rowName; // 0x8
};

struct FYMetaDefaultItemDataTableRow : FTableRowBase {
	EYDefaultItemSlot Slot; // 0x8
	FDataTableRowHandle default_vanity; // 0x10
	FDataTableRowHandle default_secondary_vanity; // 0x20
};

struct FSubTrackGroup {
	FString GroupName; // 0x0
	TArray<int32_t> TrackIndices; // 0x10
	char bIsCollapsed : 1; // 0x20
	char bIsSelected : 1; // 0x20
};

struct FExpandableAreaStyle : FSlateWidgetStyle {
	FSlateBrush CollapsedImage; // 0x8
	FSlateBrush ExpandedImage; // 0x90
	float RolloutAnimationSeconds; // 0x118
};

struct FYAITargetDetailedAggroInfo {
	TMap<EYAIDetailAggroType, float> m_detailedAggroValues; // 0x0
};

struct FCameraShakeDuration {
	float Duration; // 0x0
	ECameraShakeDurationType Type; // 0x4
};

struct FYPlayfabEnviromentData {
	FString m_titleId; // 0x0
	FString m_developmentSecret; // 0x10
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

struct FOrientedBox {
	FVector Center; // 0x0
	FVector AxisX; // 0xc
	FVector AxisY; // 0x18
	FVector AxisZ; // 0x24
	float ExtentX; // 0x30
	float ExtentY; // 0x34
	float ExtentZ; // 0x38
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

struct FRigUnit_AlphaInterpVector : FRigUnit_SimBase {
	FVector Value; // 0x8
	float Scale; // 0x14
	float Bias; // 0x18
	bool bMapRange; // 0x1c
	FInputRange InRange; // 0x20
	FInputRange OutRange; // 0x28
	bool bClampResult; // 0x30
	float ClampMin; // 0x34
	float ClampMax; // 0x38
	bool bInterpResult; // 0x3c
	float InterpSpeedIncreasing; // 0x40
	float InterpSpeedDecreasing; // 0x44
	FVector Result; // 0x48
	FInputScaleBiasClamp ScaleBiasClamp; // 0x54
};

struct FServerDeletePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FNiagaraMaterialOverride {
	UMaterialInterface* Material; // 0x0
	uint32_t MaterialSubIndex; // 0x8
	UNiagaraRendererProperties* EmitterRendererProperty; // 0x10
};

struct FYAISpawnCharactersRow : FYDataTableRowBase {
	bool m_usePrototypeVersionByDefault; // 0x10
	TMap<EYEnemyType, FYAISpawnCharacterInfo> m_aiCharactersPerType; // 0x18
};

struct FRigUnit_VisualDebugQuat : FRigUnit_DebugBase {
	FQuat Value; // 0x10
	bool bEnabled; // 0x20
	float Thickness; // 0x24
	float Scale; // 0x28
	FName BoneSpace; // 0x2c
};

struct FTimeSynthSpectralData {
	float FrequencyHz; // 0x0
	float Magnitude; // 0x4
};

struct FServerGetPlayFabIDsFromFacebookInstantGamesIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FYItemContainerData {
	FString m_itemId; // 0x0
	int32_t m_inventoryId; // 0x10
	EYContainerType m_containerType; // 0x14
};

struct FYItemDataTableRowBase : FYDataTableRowBase {
	TMap<EYItemRarityType, FYLevelItemEntry> m_rarityTypes; // 0x10
	EYItemRarityType m_rarity; // 0x61
	AYPickupActor* m_pickupClassOverride; // 0x68
	FDataTableRowHandle m_scannableRowHandle; // 0x70
	TSoftObjectPtr<UTexture2D> m_largeIcon; // 0x80
	TSoftObjectPtr<UTexture2D> m_hudIcon; // 0xa8
	FText m_name; // 0xd0
	int32_t m_maxAmountPerStack; // 0xe8
	int32_t m_startAmount; // 0xec
	int32_t m_durabilityMax; // 0xf0
	float m_durabilityBrokenPriceModifier; // 0xf4
	int32_t m_repairCostMaxDurability; // 0xf8
	int32_t m_repairCostBase; // 0xfc
	int32_t m_repairCostModifierBroken; // 0x100
	FYMetaItemUIData m_metaUIItem; // 0x108
	EYMiscellaneousType misc_type; // 0x150
	EYDeviceClass device_class; // 0x151
	EYDeviceCategory device_category; // 0x152
	EYAmmoType ammo_type; // 0x153
	bool starter; // 0x154
	TArray<EYModificationSlotType> modification_slots; // 0x158
	EYVanityType vanity_type; // 0x168
	TArray<FDataTableRowHandle> compatible_item_IDs; // 0x170
	TArray<EYItemType> compatible_item_type; // 0x180
	TArray<EYDeviceClass> compatible_device_class; // 0x190
	TArray<EYDeviceCategory> compatible_device_category; // 0x1a0
	TArray<EYAmmoType> compatible_ammo_type; // 0x1b0
	float itemWeight; // 0x1c0
	bool m_isDefaultEntry; // 0x1c4
	EYDefaultItemSlot Slot; // 0x1c5
	FDataTableRowHandle default_vanity; // 0x1c8
	FDataTableRowHandle default_secondary_vanity; // 0x1d8
	bool m_shouldOverrideInteractionTime; // 0x1e8
	float m_overrideInteractionTime; // 0x1ec
	UYWidget_PickupPlate_Base* m_pickupWidgetOverride; // 0x1f0
	TSoftObjectPtr<UTexture2D> m_blueprintIcon; // 0x1f8
	TArray<FYItemCraftingDataPerShop> m_itemShopsCraftingData; // 0x220
	int32_t m_amountPerPurchase; // 0x230
	int32_t m_scrappingFactionProgressionIncrement; // 0x234
	int32_t m_scrappingReturnDefault; // 0x238
	bool m_isBlueprint; // 0x23c
	TMap<EYItemRarityType, int32_t> m_overrideScrappingReturnsPerRarity; // 0x240
	TMap<EYItemRarityType, int32_t> m_overrideScrappingReputationPerRarity; // 0x290
	FYProgressionUnlockCollectionData m_unlockData; // 0x2e0
	float m_collisionSpherePickUpOverride; // 0x2f0
	bool m_useCustomMeshRelativeTranslationOverride; // 0x2f4
	FVector m_meshRelativeTranslation; // 0x2f8
	FRotator m_meshRelativeRotation; // 0x304
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

struct FRigUnit_CCDIK : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EffectorBone; // 0x70
	FTransform EffectorTransform; // 0x80
	float Precision; // 0xb0
	float weight; // 0xb4
	int32_t MaxIterations; // 0xb8
	bool bStartFromTail; // 0xbc
	float BaseRotationLimit; // 0xc0
	TArray<FRigUnit_CCDIK_RotationLimit> RotationLimits; // 0xc8
	bool bPropagateToChildren; // 0xd8
	FRigUnit_CCDIK_WorkData WorkData; // 0xe0
};

struct FRigUnit_TwoBoneIKSimpleTransforms : FRigUnit_HighlevelBase {
	FTransform Root; // 0x10
	FVector PoleVector; // 0x40
	FTransform Effector; // 0x50
	FVector PrimaryAxis; // 0x80
	FVector SecondaryAxis; // 0x8c
	float SecondaryAxisWeight; // 0x98
	bool bEnableStretch; // 0x9c
	float StretchStartRatio; // 0xa0
	float StretchMaximumRatio; // 0xa4
	float BoneALength; // 0xa8
	float BoneBLength; // 0xac
	FTransform Elbow; // 0xb0
};

struct FYGetSocialProfilesResult {
	EYSocialRequestResult Result; // 0x0
	TArray<FYSocialProfileEntry> entries; // 0x8
	bool includePresence; // 0x18
	int32_t requestHandle; // 0x1c
};

struct FSkeletalMeshSamplingInfo {
	TArray<FSkeletalMeshSamplingRegion> Regions; // 0x0
	FSkeletalMeshSamplingBuiltData BuiltData; // 0x10
};

struct FYServerCommand {
	EYServerCommand Command; // 0x0
};

struct FClientGetTitlePublicKeyResult : FPlayFabResultCommon {
	FString RSAPublicKey; // 0x8
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

struct FSourceEffectPhaserSettings {
	float WetLevel; // 0x0
	float Frequency; // 0x4
	float Feedback; // 0x8
	EPhaserLFOType LFOType; // 0xc
	bool UseQuadraturePhase; // 0xd
};

struct FYBaseSocialNotificationResponse {
	FString PlayFabId; // 0x0
	FString DisplayName; // 0x10
};

struct FYRoomInfo {
	FString roomId; // 0x0
	FString ServerId; // 0x10
	TArray<FString> Players; // 0x20
	FString Region; // 0x30
};

struct FGroupsInviteToGroupResponse : FPlayFabResultCommon {
	FString Expires; // 0x8
	UPlayFabJsonObject* Group; // 0x18
	UPlayFabJsonObject* InvitedByEntity; // 0x20
	UPlayFabJsonObject* InvitedEntity; // 0x28
	FString RoleId; // 0x30
};

struct FYDebugResetPlayerResult {
	FString UserId; // 0x0
	bool SUCCESS; // 0x10
};

struct FYAIAllyAlertEvent {
	AYAISquad* m_aiSquad; // 0x0
	AActor* m_target; // 0x8
	AActor* m_characterAISensingTarget; // 0x10
};

struct FYUpdatedFactionProgression {
	FString m_userId; // 0x0
	FString m_faction; // 0x10
	int32_t m_factionProgression; // 0x20
};

struct FServerModifyItemUsesResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FEdGraphPinReference {
	TWeakObjectPtr<UEdGraphNode> OwningNode; // 0x0
	FGuid PinId; // 0x8
};

struct FSoundWaveSpectralDataEntry {
	float Magnitude; // 0x0
	float NormalizedMagnitude; // 0x4
};

struct FGroupsCreateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
	FString RoleName; // 0x28
};

struct FAdminGetContentUploadUrlRequest : FPlayFabRequestCommon {
	FString ContentType; // 0x8
	FString Key; // 0x18
};

struct FYServerReady {
	FString networkAddress; // 0x0
};

struct FYJoinChannelRequestData {
	EYChannelType m_type; // 0x0
	FString m_channelId; // 0x8
};

struct FYSetCraftingMaterialAmount {
	FString UserId; // 0x0
	FString materialName; // 0x10
	int32_t Amount; // 0x20
};

struct FRichHyperlinkRow : FTableRowBase {
	FHyperlinkStyle HyperlinkStyle; // 0x8
};

struct FClientRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
};

struct FRigUnit_DebugPoint : FRigUnit_DebugBase {
	FVector Vector; // 0x8
	ERigUnitDebugPointMode Mode; // 0x14
	FLinearColor Color; // 0x18
	float Scale; // 0x28
	float Thickness; // 0x2c
	FName Space; // 0x30
	FTransform WorldOffset; // 0x40
	bool bEnabled; // 0x70
};

struct FRootMotionSource {
	uint16_t Priority; // 0x10
	uint16_t LocalID; // 0x12
	ERootMotionAccumulateMode AccumulateMode; // 0x14
	FName InstanceName; // 0x18
	float StartTime; // 0x20
	float currentTime; // 0x24
	float PreviousTime; // 0x28
	float Duration; // 0x2c
	FRootMotionSourceStatus Status; // 0x30
	FRootMotionSourceSettings Settings; // 0x31
	bool bInLocalSpace; // 0x32
	FRootMotionMovementParams RootMotionParams; // 0x40
	FRootMotionFinishVelocitySettings FinishVelocityParams; // 0x80
};

struct FYCompleteInventoryUpdateRequest {
	FString UserId; // 0x0
	EYCompleteInventoryUpdateReason Reason; // 0x10
	TArray<FString> itemsToRemove; // 0x18
	TArray<FYCustomItemInfo> itemsToAdd; // 0x28
	FYPlayerSet newSet; // 0x38
	TArray<FYCustomItemInfo> itemsToUpdateAmount; // 0xd8
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

struct FARImageUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	UARCandidateImage* DetectedImage; // 0x50
	FVector2D EstimatedSize; // 0x58
};

struct FRigUnit_MathQuaternionFromRotator : FRigUnit_MathQuaternionBase {
	FRotator Rotator; // 0x8
	FQuat Result; // 0x20
};

struct FAnimSlotGroup {
	FName GroupName; // 0x0
	TArray<FName> SlotNames; // 0x8
};

struct FYResetSession {
	FString ServerId; // 0x0
};

struct FServerLoginWithServerCustomIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x18
	FString PlayerSecret; // 0x20
	FString ServerCustomId; // 0x30
};

struct FMultiplayerMultiplayerEmptyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FWidgetNavigationData {
	EUINavigationRule Rule; // 0x0
	FName WidgetToFocus; // 0x4
	TWeakObjectPtr<UWidget> Widget; // 0xc
	FDelegate CustomDelegate; // 0x14
};

struct FYLevelItemEntry {
	int32_t m_modSlotsUnlocked; // 0x0
	FYItemRecipe m_recipeToUpgradeItemToThisRarity; // 0x8
};

struct FPredictProjectilePathPointData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Time; // 0x18
};

struct FEngineServiceExecuteCommand {
	FString Command; // 0x0
	FString Username; // 0x10
};

struct FPositionHistory {
	TArray<FVector> Positions; // 0x0
	float Range; // 0x10
};

struct FYClaimGrantsResponse {
	TArray<FYClaimGrantsResponseInfo> claimGrantsResponseInfos; // 0x0
};

struct FClientGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FAdminGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FServerSetTitleDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FNiagaraParameters {
	TArray<FNiagaraVariable> Parameters; // 0x0
};

struct FRigUnit_MathFloatRound : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
	int32_t Int; // 0x10
};

struct FYSpawnActivityActorTokenData {
	EYActivityType m_activityType; // 0x0
	AYActivityLocation* m_activityLocation; // 0x8
	AYActivityActorManager* m_activityActorManager; // 0x10
	AActor* m_actorClass; // 0x18
	UYActivityRegisterComponent* m_registerComponentOverride; // 0x20
};

struct FClientGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FStucture_TabData {
	FText TabLabel_5_B14FDBDF4B0CB0F16C92A0B658489894; // 0x0
	bool UseIcon_7_1EBAB2534C0792B29A035696802C24FE; // 0x18
	bool ShowNotification_10_87374DDB4C3DA819C5C811B8950F8058; // 0x19
	EYCustomizationMode CustomizationMode_13_473749A24D62878D244B9383A1ACDB65; // 0x1a
	EYCustomizationCategory CustomizationCategory_17_08D2C6984F40B5E55A7DCC8149351C35; // 0x1b
};

struct FMultiplayerListQosServersForTitleResponse : FPlayFabResultCommon {
	int32_t PageSize; // 0x8
	TArray<UPlayFabJsonObject*> QosServers; // 0x10
	FString SkipToken; // 0x20
};

struct FSkelMeshComponentLODInfo {
	TArray<bool> HiddenMaterials; // 0x0
};

struct FYRewardEntry {
	EYRewardType m_rewardType; // 0x0
	EYPlayerRewardSource m_rewardSource; // 0x1
	FText m_displayText; // 0x8
	FName m_rewardId; // 0x20
	int32_t m_amount; // 0x28
	int32_t m_fromAmount; // 0x2c
};

struct FVirtualBone {
	FName SourceBoneName; // 0x0
	FName TargetBoneName; // 0x8
	FName VirtualBoneName; // 0x10
};

struct FYHeatMapSettings {
	FVector2D m_min; // 0x0
	FVector2D m_max; // 0x8
};

struct FForceFeedbackParameters {
	FName Tag; // 0x0
	bool bLooping; // 0x8
	bool bIgnoreTimeDilation; // 0x9
	bool bPlayWhilePaused; // 0xa
};

struct FMovieSceneSequenceID {
	uint32_t Value; // 0x0
};

struct FClientGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FYChatWindowStyles {
	FButtonStyle Buttonlook; // 0x0
	FSlateBrush ChatBackground; // 0x278
	FSlateBrush InputBackground; // 0x300
	FSlateBrush ChatUserMenuBackground; // 0x388
};

struct FCRSimContainer {
	float TimeStep; // 0x8
	float AccumulatedTime; // 0xc
	float TimeLeftForStep; // 0x10
};

struct FYListPersistentMatchesResult {
	TArray<FYPersistentMatch> Results; // 0x0
};

struct FClientGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	UPlayFabJsonObject* VirtualCurrency; // 0x18
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x20
};

struct FTimeStretchCurveMarker {
	float Time[0x3]; // 0x0
	float Alpha; // 0xc
};

struct FYDebugClearAllCompletedContractsResult {
	FString UserId; // 0x0
	FString Error; // 0x10
};

struct FRigUnit_GetControlFloat : FRigUnit {
	FName Control; // 0x8
	float FloatValue; // 0x10
	float Minimum; // 0x14
	float Maximum; // 0x18
	FCachedRigElement CachedControlIndex; // 0x1c
};

struct FRigUnit_MathRBFInterpolateVectorXform : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorXform_Target> Targets; // 0xb0
	FTransform Output; // 0xc0
};

struct FCameraShakeInfo {
	FCameraShakeDuration Duration; // 0x0
	float BlendIn; // 0x8
	float BlendOut; // 0xc
};

struct FClientGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FYGenericDebuggerShapeEntry {
	FVector m_start; // 0x0
	FVector m_end; // 0xc
	float m_thickness; // 0x18
	FColor m_color; // 0x1c
	FString m_info; // 0x20
};

struct FTranslationTrack {
	TArray<FVector> PosKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FYAbilityActionEntry {
	UYCharacterAbilityComponent* m_abilityClass; // 0x0
	FDataTableRowHandle m_dataRow; // 0x8
};

struct FYResourceManagementState {
	EYResourceAtomicState m_state; // 0x18
};

struct FRigUnit_MathRBFInterpolateQuatVector : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatVector_Target> Targets; // 0xd0
	FVector Output; // 0xe0
};

struct FYRequestItemRerollResult {
	bool SUCCESS; // 0x0
	FString UserId; // 0x8
	FYCustomItemInfo updatedItem; // 0x18
	int32_t itemStatType; // 0x88
	int32_t currentVal; // 0x8c
	int32_t newVal; // 0x90
};

struct FAdminResolvePurchaseDisputeRequest : FPlayFabRequestCommon {
	FString OrderId; // 0x8
	EResolutionOutcome Outcome; // 0x18
	FString PlayFabId; // 0x20
	FString Reason; // 0x30
};

struct FYQueueDetails {
	FString GameMode; // 0x0
	bool isRanked; // 0x10
	FString Region; // 0x18
	TArray<FString> Players; // 0x28
};

struct FRigUnit_HierarchyGetParents : FRigUnit_HierarchyBase {
	FRigElementKey Child; // 0x8
	bool bIncludeChild; // 0x14
	bool bReverse; // 0x15
	FRigElementKeyCollection Parents; // 0x18
	FCachedRigElement CachedChild; // 0x28
	FRigElementKeyCollection CachedParents; // 0x40
};

struct FYRoomSquad {
	FString squadId; // 0x0
	TArray<FString> users; // 0x10
};

struct FYPlayerUITeamInfo {
	FColor m_teamColorID; // 0x0
	int32_t m_teamID; // 0x4
};

struct FServerGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticNames; // 0x20
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x30
};

struct FYDetailedStatisticsDataSettingData {
	TArray<FYStatsTypeDataEntry> m_entires; // 0x0
	FDataTableRowHandle m_rowHandle; // 0x10
	EYItemStatsCategory m_category; // 0x20
};

struct FYMovementStateData {
	float m_currentSpeedReductionPerSecond; // 0x0
	float m_cooldown; // 0x4
	bool m_isActive; // 0x8
	bool m_wantToBeActive; // 0x9
	bool m_haveBeenReset; // 0xa
};

struct FTimerHandle {
	uint64_t Handle; // 0x0
};

struct FRigUnit_MathVectorDot : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Result; // 0x20
};

struct FYGetPlayerSetsResult {
	bool SUCCESS; // 0x0
	TArray<FYPlayerSetItemsEntry> entries; // 0x8
};

struct FLODMappingData {
	TArray<int32_t> Mapping; // 0x0
	TArray<int32_t> InverseMapping; // 0x10
};

struct FYDropWeaponAnalyticsPerPlayer : FYBaseAnalyticsEvent {
	FName weapon_id; // 0xa8
	FString weapon_name; // 0xb0
	int32_t time_since_match_start; // 0xc0
	int32_t drop_location_X; // 0xc4
	int32_t drop_location_Y; // 0xc8
	int32_t Source; // 0xcc
};

struct FAdminResolvePurchaseDisputeResponse : FPlayFabResultCommon {
	FString PurchaseStatus; // 0x8
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

struct FVehicleEngineData {
	FRuntimeFloatCurve TorqueCurve; // 0x0
	float MaxRPM; // 0x88
	float MOI; // 0x8c
	float DampingRateFullThrottle; // 0x90
	float DampingRateZeroThrottleClutchEngaged; // 0x94
	float DampingRateZeroThrottleClutchDisengaged; // 0x98
};

struct FYChannelProximityChatSettings {
	bool m_isProximityVoiceChatEnabled; // 0x0
	int32_t m_audibleDistance; // 0x4
	int32_t m_conversationalDistance; // 0x8
	float m_audioFadeIntensityByDistance; // 0xc
	EYVivoxAudioFadeModel m_audioFadeModel; // 0x10
};

struct FNodeHierarchyData {
	TArray<FNodeObject> nodes; // 0x0
	TArray<FTransform> Transforms; // 0x10
	TMap<FName, int32_t> NodeNameToIndexMapping; // 0x20
};

struct FYClaimGrantsResponseInfo {
	EYClaimGrantResult claimGrantResult; // 0x0
	FYGrant grant; // 0x8
};

struct FSolverTrailingFilterSettings {
	bool FilterEnabled; // 0x0
	float MinMass; // 0x4
	float MinSpeed; // 0x8
	float MinVolume; // 0xc
};

struct FEventPayload {
	FName EventName; // 0x0
	FMovieSceneEventParameters Parameters; // 0x8
};

struct FYDebugSetPickaxeLevelRequest {
	FString UserId; // 0x0
	int32_t Level; // 0x10
};

struct FKey {
	FName KeyName; // 0x0
};

struct FRigUnit_SetMultiControlVector2D_Entry {
	FName Control; // 0x0
	FVector2D Vector; // 0x8
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

struct FRigUnit_DebugLineStripItemSpace : FRigUnit_DebugBaseMutable {
	TArray<FVector> Points; // 0x68
	FLinearColor Color; // 0x78
	float Thickness; // 0x88
	FRigElementKey Space; // 0x8c
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FMovieSceneEvaluationFieldEntityKey {
	TWeakObjectPtr<UObject> EntityOwner; // 0x0
	uint32_t EntityID; // 0x8
};

struct FYDebugGiveCurrenciesResult {
	FString UserId; // 0x0
	TArray<FYCurrencyItem> updatedCurrencies; // 0x10
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

struct FRigPose {
	TArray<FRigPoseElement> Elements; // 0x0
};

struct FServerDeleteSharedGroupRequest : FPlayFabRequestCommon {
	FString SharedGroupId; // 0x8
};

struct FInterpCurveVector {
	TArray<FInterpCurvePointVector> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FInputRange {
	float Min; // 0x0
	float Max; // 0x4
};

struct FDestructibleChunkParameters {
	bool bIsSupportChunk; // 0x0
	bool bDoNotFracture; // 0x1
	bool bDoNotDamage; // 0x2
	bool bDoNotCrumble; // 0x3
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

struct FSkinWeightProfileInfo {
	FName Name; // 0x0
	FPerPlatformBool DefaultProfile; // 0x8
	FPerPlatformInt DefaultProfileFromLODIndex; // 0xc
};

struct FGridBlendSample {
	FEditorElement GridElement; // 0x0
	float BlendWeight; // 0x18
};

struct FYPlayerInitialConnectEvent : FYBaseAnalyticsEvent {
	int32_t time_loaded; // 0xa8
	FString country_code; // 0xb0
};

struct FInlineEditableTextBlockStyle : FSlateWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x8
	FTextBlockStyle TextStyle; // 0x800
};

struct FServerReportPlayerServerResult : FPlayFabResultCommon {
	int32_t SubmissionsRemaining; // 0x8
};

struct FYScrapItemResult {
	FString Error; // 0x0
	FString UserId; // 0x10
	TArray<FString> scrappedItemIds; // 0x20
	TArray<FYCustomItemInfo> changedItems; // 0x30
	TArray<FYCurrencyItem> changedCurrencies; // 0x40
	FYPlayerFactionProgressData playerFactionProgressionData; // 0x50
};

struct FRigUnit_ConvertQuaternion : FRigUnit {
	FQuat Input; // 0x10
	FRotator Result; // 0x20
};

struct FYScopeTuningRow : FYDataTableRowBase {
	EYScopeType m_scopeType; // 0x10
	bool ShouldCreateGlint; // 0x11
	TArray<FYGameplayAttributeModifier> m_attributeMods; // 0x18
};

struct FRigUnit_PrepareForExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FInt32Range {
	FInt32RangeBound LowerBound; // 0x0
	FInt32RangeBound UpperBound; // 0x8
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

struct FYModSettingsDataTableRow : FYDataTableRowBase {
	TMap<EYModificationSlotType, FYModSettingsEntry> m_modSettings; // 0x10
};

struct FXRHMDData {
	bool bValid; // 0x0
	FName DeviceName; // 0x4
	FGuid ApplicationInstanceID; // 0xc
	ETrackingStatus TrackingStatus; // 0x1c
	FVector Position; // 0x20
	FQuat Rotation; // 0x30
};

struct FYRemoveAllCraftingMaterials {
	FString UserId; // 0x0
};

struct FMovieSceneTemplateGenerationLedger {
	FMovieSceneTrackIdentifier LastTrackIdentifier; // 0x0
	TMap<FGuid, FMovieSceneTrackIdentifier> TrackSignatureToTrackIdentifier; // 0x8
	TMap<FGuid, FMovieSceneFrameRange> SubSectionRanges; // 0x58
};

struct FRootMotionSource_MoveToForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector TargetLocation; // 0xa4
	bool bRestrictSpeedToExpected; // 0xb0
	UCurveVector* PathOffsetCurve; // 0xb8
};

struct FYChatLog {
	FString m_sender; // 0x0
	FString m_message; // 0x10
};

struct FSourceEffectMidSideSpreaderSettings {
	float SpreadAmount; // 0x0
	EStereoChannelMode InputMode; // 0x4
	EStereoChannelMode OutputMode; // 0x5
	bool bEqualPower; // 0x6
};

struct FYInviteToSquadResponse {
	EYSquadActionResult Result; // 0x0
	FYSquadInvite invite; // 0x8
};

struct FYMatchmakingSetupMatchEntry : FYMatchmakingSetupEntry {
	bool Enabled; // 0x1c
	FString fullMapName; // 0x20
};

struct FYSceneDataTableRow : FYDataTableRowBase {
	AYScene* m_bpClass; // 0x10
	TSoftClassPtr<UObject> m_widgetClass; // 0x18
	TSoftClassPtr<UObject> m_alternativeWidgetClass; // 0x40
	FName m_preloadDataWidgetName; // 0x68
	bool m_doNotActivateNonVisibleWidget; // 0x70
	bool m_wantTransitionStateChange; // 0x71
	bool m_wantTransitionChangeOnClearing; // 0x72
	bool m_hideCharacterOnTransition; // 0x73
};

struct FYResetMission {
	FString missionArcId; // 0x0
	FString missionId; // 0x10
};

struct FYPlayersRankedSeasonsData {
	TArray<FString> seasonIds; // 0x0
	TArray<FYPlayersRankedSeasonData> playersRankedSeasonsArray; // 0x10
};

struct FCustomAttributePerBoneData {
	int32_t BoneTreeIndex; // 0x0
	TArray<FCustomAttribute> Attributes; // 0x8
};

struct FSoundWaveSpectralTimeData {
	TArray<FSoundWaveSpectralDataEntry> Data; // 0x0
	float TimeSec; // 0x10
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

struct FLinearDriveConstraint {
	FVector PositionTarget; // 0x0
	FVector VelocityTarget; // 0xc
	FConstraintDrive XDrive; // 0x18
	FConstraintDrive YDrive; // 0x28
	FConstraintDrive ZDrive; // 0x38
	char bEnablePositionDrive : 1; // 0x48
};

struct FMovieScenePropertySectionData {
	FName PropertyName; // 0x0
	FString PropertyPath; // 0x8
};

struct FAdminRunTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Identifier; // 0x10
};

struct FRigUnit_ItemHarmonics : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_Harmonics_TargetItem> Targets; // 0x68
	FVector WaveSpeed; // 0x78
	FVector WaveFrequency; // 0x84
	FVector WaveAmplitude; // 0x90
	FVector WaveOffset; // 0x9c
	FVector WaveNoise; // 0xa8
	EControlRigAnimEasingType WaveEase; // 0xb4
	float WaveMinimum; // 0xb8
	float WaveMaximum; // 0xbc
	EControlRigRotationOrder RotationOrder; // 0xc0
	FRigUnit_BoneHarmonics_WorkData WorkData; // 0xc8
};

struct FRootMotionSource_JumpForce : FRootMotionSource {
	FRotator Rotation; // 0x98
	float Distance; // 0xa4
	float Height; // 0xa8
	bool bDisableTimeout; // 0xac
	UCurveVector* PathOffsetCurve; // 0xb0
	UCurveFloat* TimeMappingCurve; // 0xb8
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

struct FSubdividedQuadVertex {
	int32_t VertexPositionIndex; // 0x0
	FVector2D TextureCoordinate0; // 0x4
	FVector2D TextureCoordinate1; // 0xc
	FColor VertexColor; // 0x14
	FVector VertexNormal; // 0x18
	FVector VertexTangent; // 0x24
	float VertexBinormalSign; // 0x30
};

struct FAnchors {
	FVector2D Minimum; // 0x0
	FVector2D Maximum; // 0x8
};

struct FGameplayTagTableRow : FTableRowBase {
	FName Tag; // 0x8
	FString DevComment; // 0x10
};

struct FRuntimeCurveLinearColor {
	FRichCurve ColorCurves[0x4]; // 0x0
	UCurveLinearColor* ExternalCurve; // 0x200
};

struct FMeshSectionInfo {
	int32_t MaterialIndex; // 0x0
	bool bEnableCollision; // 0x4
	bool bCastShadow; // 0x5
	bool bVisibleInRayTracing; // 0x6
	bool bForceOpaque; // 0x7
};

struct FYInventorySnapshot {
	FYInventoryInfo m_inventoryInfo; // 0x0
	FYPlayerInventory m_playerInventory; // 0x18
	FYPlayerInventory m_playerStash; // 0x30
	FYPlayerDataSet m_playerSet; // 0x48
	int32_t m_playerPickaxeLevel; // 0x70
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

struct FMultiplayerGetRemoteLoginEndpointRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
	FString VmId; // 0x30
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

struct FYPlayerLeaderBoardData {
	TMap<EYMatchmakeGameModeType, FYPlayerRankDataEntry> m_playerRankData; // 0x0
};

struct FServerGrantItemsToUserRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString ItemIds; // 0x30
	FString PlayFabId; // 0x40
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

struct FYCharacterArchetypeDefaultItemEntry {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_materialIndex; // 0x10
};

struct FYPlayerRankUpdatedForGameMode {
	FString GameMode; // 0x0
	int32_t oldRank; // 0x10
	int32_t newRank; // 0x14
	int32_t highestRank; // 0x18
};

struct FEventsWriteEventsResponse : FPlayFabResultCommon {
	FString AssignedEventIds; // 0x8
};

struct FInterpGroupActorInfo {
	FName ObjectName; // 0x0
	TArray<AActor*> actors; // 0x8
};

struct FMaterialRemapIndex {
	uint32_t ImportVersionKey; // 0x0
	TArray<int32_t> MaterialRemap; // 0x8
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

struct FYGetSignalRConnection {
	FString UserId; // 0x0
};

struct FMultiplayerCreateMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Creator; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	int32_t GiveUpAfterSeconds; // 0x18
	TArray<UPlayFabJsonObject*> MembersToMatchWith; // 0x20
	FString QueueName; // 0x30
};

struct FYGetActiveContractsResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYActiveContractPlayerData> activeContracts; // 0x20
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

struct FPowerIKBodyInertia {
	bool ApplyInertiaToBody; // 0x0
	float SmoothFactor; // 0x4
	bool UseSpring; // 0x8
	float SpringStrength; // 0xc
	float SpringDamping; // 0x10
};

struct FServerUpdateSharedGroupDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString SharedGroupId; // 0x30
};

struct FYMatchPhaseVisualRow : FYDataTableRowBase {
	float m_blendingDuration; // 0x10
	float m_normalizedWindIntensity; // 0x14
	float m_exponentialHeightFog_FogDensity; // 0x18
	float m_exponentialHeightFog_MaxOpacity; // 0x1c
	float m_exponentialHeightFog_ExtinctionScale; // 0x20
	float m_exponentialHeightFog_HeightFalloff; // 0x24
	FLinearColor m_exponentialHeightFog_InscatteringColor; // 0x28
	FLinearColor m_exponentialHeightFog_DirectionalInscatteringColor; // 0x38
	FLinearColor m_exponentialHeightFog_Albedo; // 0x48
	float m_directionalLight_Intensity; // 0x58
	FLinearColor m_directionalLight_LightColor; // 0x5c
	FLinearColor m_directionalLight_BloomColor; // 0x6c
	float m_directionalLight_BloomScale; // 0x7c
	float m_directionalLight_SourceSoftAngle; // 0x80
	FLinearColor m_directionalLight_CloudScatteredLuminanceScale; // 0x84
	float m_skyLight_Intensity; // 0x94
	float m_skyLight_OcclusionExponent; // 0x98
	FLinearColor m_skyLight_LightColor; // 0x9c
	FLinearColor m_skyLight_LowerHemisphereColor; // 0xac
	UTextureCube* m_skyLight_Cubemap; // 0xc0
	FLinearColor m_skyAtmosphere_MieScattering; // 0xc8
	float m_skyAtmosphere_MieScatteringScale; // 0xd8
	float m_skyAtmosphere_HeightFogContribution; // 0xdc
	float m_postProcess_ColorGradingLUTIntensity; // 0xe0
	float m_postProcess_GrainIntensity; // 0xe4
	float m_postProcess_LensFlareIntensity; // 0xe8
	float m_postProcess_ExposureCompensation; // 0xec
	float m_postProcess_ExposureMinBrightness; // 0xf0
	float m_postProcess_BloomIntensity; // 0xf4
	float m_postProcess_ChromaticAberrationIntensity; // 0xf8
	FLinearColor m_postProcess_IndirectLightingColor; // 0xfc
	float m_cloudManager_CloudAnim; // 0x10c
	float m_cloudManager_LightningAmount; // 0x110
	float m_rainManager_NormalizedRainAmount; // 0x114
	float m_rainManager_Opacity; // 0x118
	float m_stormAmbientManager_NormalizedAtmosphereSpawnRate; // 0x11c
	float m_stormAmbientManager_NormalizedDebrisSpawnRate; // 0x120
	float m_stormLightning_DistantLightningSpawnRate; // 0x124
	float m_mpc_normalizedStormIntensity; // 0x128
	float m_mpc_normalizedStormEmissiveIntensity; // 0x12c
	float m_mpc_normalizedWetnessAmount; // 0x130
	float m_mpc_skyBackgroundObjectsOpacity; // 0x134
	float m_mpc_globalTimeMultiplier; // 0x138
};

struct FNiagaraVariableBase {
	FName Name; // 0x0
	FNiagaraTypeDefinitionHandle TypeDefHandle; // 0x8
};

struct FClientGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FMultiplayerListMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FRigUnit_SetRotation : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	EBoneGetterSetterMode Space; // 0x74
	FQuat Rotation; // 0x80
	float weight; // 0x90
	bool bPropagateToChildren; // 0x94
	FCachedRigElement CachedIndex; // 0x98
};

struct FDataSetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	int32_t ExpectedProfileVersion; // 0x18
	TArray<UPlayFabJsonObject*> Objects; // 0x20
};

struct FRawCurveTracks {
	TArray<FFloatCurve> FloatCurves; // 0x0
};

struct FYSquadAIType {
	FYAICharacterDefinition m_aiCharacter; // 0x0
	FGameplayTagContainer m_gameplayTags; // 0x18
};

struct FYMaintenanceModeState {
	bool bypassMaintenanceMode; // 0x0
};

struct FClientUnlinkIOSDeviceIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DeviceID; // 0x10
};

struct FRigUnit_MathQuaternionUnaryOp : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	FQuat Result; // 0x20
};

struct FMovieSceneEventPtrs {
	UFunction* Function; // 0x0
	TFieldPath<FProperty> BoundObjectProperty; // 0x8
};

struct FAnimNode_StateMachine : FAnimNode_Base {
	int32_t StateMachineIndexInClass; // 0x10
	int32_t MaxTransitionsPerFrame; // 0x14
	bool bSkipFirstUpdateTransition; // 0x18
	bool bReinitializeOnBecomingRelevant; // 0x19
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

struct FRigUnit_SpringIK_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FLinearColor Color; // 0x8
	FTransform WorldOffset; // 0x20
};

struct FClientUnlinkOpenIdConnectRequest : FPlayFabRequestCommon {
	FString ConnectionId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FAudioVolumeSubmixSendSettings {
	EAudioVolumeLocationState ListenerLocationState; // 0x0
	EAudioVolumeLocationState SourceLocationState; // 0x1
	TArray<FSoundSubmixSendInfo> SubmixSends; // 0x8
};

struct FYElasticsearchData {
	TMap<FString, int32_t> metricsNumericData; // 0x0
	TMap<FString, FString> metricsStringData; // 0x50
	TMap<FString, bool> metricsBoolData; // 0xa0
};

struct FYBagLimitUpdated {
	FString UserId; // 0x0
	int32_t bagLimit; // 0x10
};

struct FHorizonTweenEventSceneComponentScaleFromToParameters : FHorizonTweenEventVectorParameters {
	TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr; // 0x148
};

struct FRigUnit_MathVectorDistance : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Result; // 0x20
};

struct FYMatchHasEnded {
	TArray<FString> users; // 0x0
};

struct FClientGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FYVanityUpdateAmountResultData {
	EYVanityUpdateResult returnResult; // 0x0
	FYVanityAmountUpdatedData vanityAmountUpdated; // 0x8
};

struct FYPlayerRankDataEntry {
	FString m_userId; // 0x0
	FString m_playerName; // 0x10
	EYMatchmakeGameModeType m_gameModeType; // 0x20
	int32_t m_rank; // 0x24
	int32_t m_highestRank; // 0x28
	bool m_isLocalPlayer; // 0x2c
};

struct FYGetActiveContractsRequest {
	FString UserId; // 0x0
};

struct FYUpdateCustomItemsResult {
	bool SUCCESS; // 0x0
	FString UserId; // 0x8
};

struct FServerModifyCharacterVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	FString VirtualCurrency; // 0x10
};

struct FYVivoxLoginData {
	FYVivoxLoginTokenRequest Request; // 0x0
	FString Token; // 0x10
};

struct FColor {
	char B; // 0x0
	char G; // 0x1
	char R; // 0x2
	char A; // 0x3
};

struct FAnimNode_ConvertLocalToComponentSpace : FAnimNode_Base {
	FPoseLink LocalPose; // 0x10
};

struct FYClaimGrants {
	TArray<FString> grantIds; // 0x0
};

struct FServerEvaluateRandomResultTableRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableId; // 0x18
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

struct FLimbDefinition {
	FBoneReference Tip; // 0x0
	FBoneReference IkTarget; // 0x10
	int32_t BoneCount; // 0x20
};

struct FYWeaponMaterialData {
	TArray<FYWeaponMaterialEntry> m_materialEntries; // 0x0
};

struct FRigUnit_NameTruncate : FRigUnit_NameBase {
	FName Name; // 0x8
	int32_t Count; // 0x10
	bool FromEnd; // 0x14
	FName Remainder; // 0x18
	FName Chopped; // 0x20
};

struct FClientGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FDebugCameraControllerSettingsViewModeIndex {
	EViewModeIndex ViewModeIndex; // 0x8
};

struct FYEntitlements {
	TArray<FName> entitlements; // 0x0
};

struct FHorizonTweenEventSceneComponentParameters {
	FHorizonTweenEventParameters MoveFromToParam; // 0x0
	FHorizonTweenEventSceneComponentMoveFromToParameters MoveFromToParamImpl; // 0x38
	bool bMoveFromTo; // 0x188
	FHorizonTweenEventParameters RotatorFromToParam; // 0x190
	FHorizonTweenEventSceneComponentRotatorFromToParameters RotatorFromToParamImpl; // 0x1c8
	bool bRotateFromTo; // 0x328
	FHorizonTweenEventParameters ScaleFromToParam; // 0x330
	FHorizonTweenEventSceneComponentScaleFromToParameters ScaleFromToParamImpl; // 0x368
	bool bScaleFromTo; // 0x4b8
	FHorizonTweenEventParameters ColorFromToParam; // 0x4c0
	FHorizonTweenEventSceneComponentColorFromToParameters ColorFromToParamImpl; // 0x4f8
	bool bColorFromTo; // 0x738
};

struct FInterpCurveLinearColor {
	TArray<FInterpCurvePointLinearColor> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FRigUnit_CollectionChildren : FRigUnit_CollectionBase {
	FRigElementKey Parent; // 0x8
	bool bIncludeParent; // 0x14
	bool bRecursive; // 0x15
	ERigElementType TypeToSearch; // 0x16
	FRigElementKeyCollection Collection; // 0x18
	FRigElementKeyCollection CachedCollection; // 0x28
	int32_t CachedHierarchyHash; // 0x38
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

struct FMovieSceneNiagaraSystemTrackImplementation : FMovieSceneTrackImplementation {
	FFrameNumber SpawnSectionStartFrame; // 0x10
	FFrameNumber SpawnSectionEndFrame; // 0x14
	ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior; // 0x18
	ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior; // 0x1c
	ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior; // 0x20
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0x24
};

struct FRigUnit_ToSwingAndTwist : FRigUnit {
	FQuat Input; // 0x10
	FVector TwistAxis; // 0x20
	FQuat Swing; // 0x30
	FQuat Twist; // 0x40
};

struct FYModAttachmentInfo {
	FYModAttachEntry m_modAttachEntryInfo; // 0x0
	bool m_isDefaultAttachment; // 0x30
};

struct FYDistanceTravelledAnalyticsEvent : FYBaseAnalyticsEvent {
	int32_t position_x; // 0xa8
	int32_t position_y; // 0xac
	int32_t time_since_match_start; // 0xb0
	int32_t time_since_user_joined; // 0xb4
	int32_t distance_travelled_total; // 0xb8
	float current_bag_weight; // 0xbc
	float max_bag_weight; // 0xc0
	float max_safe_weight; // 0xc4
	float current_safe_weight; // 0xc8
	float stamina_below_10_percent; // 0xcc
	float stamina_usage; // 0xd0
	FString loot_area_name; // 0xd8
};

struct FDatasmithMeshSectionInfoMapTemplate {
	TMap<uint32_t, FDatasmithMeshSectionInfoTemplate> Map; // 0x0
};

struct FRigUnit_SetMultiControlRotator : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlRotator_Entry> entries; // 0x68
	float weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FYMissionStepProgressEntry {
	int32_t m_stepHandle; // 0x0
	EYMissionResultType m_result; // 0x4
};

struct FMultiplayerCancelServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString QueueName; // 0x10
	FString TicketId; // 0x20
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString MasterPlayerAccountIds; // 0x10
};

struct FUniqueNetIdRepl : FUniqueNetIdWrapper {
	TArray<char> ReplicationBytes; // 0x18
};

struct FAdminGetDataReportRequest : FPlayFabRequestCommon {
	int32_t Day; // 0x8
	int32_t Month; // 0xc
	FString ReportName; // 0x10
	int32_t Year; // 0x20
};

struct FYRerollDailyIncompleteChallengeResponse {
	bool rerollWasSuccessful; // 0x0
	FYQuestState removedChallengeData; // 0x8
	FYQuestState newChallengeData; // 0x48
	int32_t playerNumOfRerollTokens; // 0x88
	FString UserId; // 0x90
};

struct FA2Pose {
	TArray<FTransform> Bones; // 0x0
};

struct FFontCharacter {
	int32_t StartU; // 0x0
	int32_t StartV; // 0x4
	int32_t USize; // 0x8
	int32_t VSize; // 0xc
	char TextureIndex; // 0x10
	int32_t VerticalOffset; // 0x14
};

struct FQuartzQuantizationBoundary {
	EQuartzCommandQuantization Quantization; // 0x0
	float Multiplier; // 0x4
	EQuarztQuantizationReference CountingReferencePoint; // 0x8
};

struct FYDebugSetStashLimit {
	FString UserId; // 0x0
	int32_t stashLimit; // 0x10
};

struct FYExecuteFriendStateChange {
	FString internalUserId; // 0x0
	TArray<FYFriendAction> friendExecutionStates; // 0x10
};

struct FMultiplayerGetMultiplayerServerLogsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ServerId; // 0x10
};

struct FRigUnit_AimConstraint : FRigUnitMutable {
	FName Joint; // 0x68
	EAimMode AimMode; // 0x70
	EAimMode UpMode; // 0x71
	FVector AimVector; // 0x74
	FVector UpVector; // 0x80
	TArray<FAimTarget> AimTargets; // 0x90
	TArray<FAimTarget> UpTargets; // 0xa0
	FRigUnit_AimConstraint_WorkData WorkData; // 0xb0
};

struct FYItemStatsAssociationEntry {
	EYItemStatsType m_type; // 0x0
	float m_maxValue; // 0x4
	float m_minValue; // 0x8
	bool m_inversePercent; // 0xc
	UCurveFloat* m_curveTranspose; // 0x10
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

struct FNiagaraInputConditionMetadata {
	FName InputName; // 0x0
	TArray<FString> TargetValues; // 0x8
};

struct FRigVMParameter {
	ERigVMParameterType Type; // 0x0
	FName Name; // 0x4
	int32_t RegisterIndex; // 0xc
	FString CPPType; // 0x10
	UScriptStruct* ScriptStruct; // 0x20
	FName ScriptStructPath; // 0x28
};

struct FYDebugResetGeneratorResult {
	FString UserId; // 0x0
	FString generatorId; // 0x10
	EYCheatResult Status; // 0x20
};

struct FGraphAssetPlayerInformation {
	TArray<int32_t> PlayerNodeIndices; // 0x0
};

struct FTimeSynthTimeDef {
	int32_t NumBars; // 0x0
	int32_t NumBeats; // 0x4
};

struct FYRankCalculationInitData {
	TArray<AYPlayerState*> m_playerStates; // 0x0
};

struct FMovieScene3DRotationKeyStruct : FMovieSceneKeyStruct {
	FRotator Rotation; // 0x8
	FFrameNumber Time; // 0x14
};

struct FNiagaraEmitterScalabilityOverride : FNiagaraEmitterScalabilitySettings {
	char bOverrideSpawnCountScale : 1; // 0x38
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

struct FLODSoloTrack {
	TArray<char> SoloEnableSetting; // 0x0
};

struct FMovieSceneStringChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FString> Values; // 0x18
	FString DefaultValue; // 0x28
	bool bHasDefaultValue; // 0x38
};

struct FRigUnit_MathBoolUnaryOp : FRigUnit_MathBoolBase {
	bool Value; // 0x8
	bool Result; // 0x9
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

struct FYGetMissions {
	FString UserId; // 0x0
};

struct FAppleImageUtilsImageConversionResult {
	FString Error; // 0x0
	TArray<char> ImageData; // 0x10
};

struct FBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FServerGrantItemsToCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FYMaterialVariationDataRowBase : FYVanityItemRowBase {
	FYCharacterCustomizationPieceCollection m_data; // 0x378
	FDataTableRowHandle m_basePreviewRow; // 0x3c8
};

struct FAnimationHierarchy : FNodeHierarchyWithUserData {
	TArray<FConstraintNodeData> userData; // 0x78
};

struct FRigUnit_MathVectorSetLength : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Length; // 0x14
	FVector Result; // 0x18
};

struct FRigUnit_HierarchyGetParent : FRigUnit_HierarchyBase {
	FRigElementKey Child; // 0x8
	FRigElementKey Parent; // 0x14
	FCachedRigElement CachedChild; // 0x20
	FCachedRigElement CachedParent; // 0x34
};

struct FYOnPlayerPresenceStateChangedEvent {
	FString UserId; // 0x0
	EYSocialGameStateType presenceState; // 0x10
};

struct FRigCurveContainer {
	TArray<FRigCurve> Curves; // 0x20
	TMap<FName, int32_t> NameToIndexMapping; // 0x30
	TArray<FName> Selection; // 0x80
};

struct FGroupsListGroupMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FRigUnit_ConvertQuaternionToVector : FRigUnit {
	FQuat Input; // 0x10
	FVector Result; // 0x20
};

struct FYLootItemAmount {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_amount; // 0x10
};

struct FMovieSceneOrderedEvaluationKey {
	FMovieSceneEvaluationKey Key; // 0x0
	uint16_t SetupIndex; // 0xc
	uint16_t TearDownIndex; // 0xe
};

struct FBandwidthTestItem {
	TArray<char> Kilobyte; // 0x0
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

struct FBatchedLine {
	FVector Start; // 0x0
	FVector End; // 0xc
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float RemainingLifeTime; // 0x2c
	char DepthPriority; // 0x30
};

struct FYModulatorContinuousParams {
	bool m_enableDebugLogging; // 0x0
	FModulatorContinuousParams m_parameter; // 0x4
	FRuntimeFloatCurve m_optionalParameterValueTransformCurve; // 0x28
};

struct FQualifiedFrameTime {
	FFrameTime Time; // 0x0
	FFrameRate Rate; // 0x8
};

struct FNavAgentProperties : FMovementProperties {
	float AgentRadius; // 0x4
	float AgentHeight; // 0x8
	float AgentStepHeight; // 0xc
	float NavWalkingSearchHeightScale; // 0x10
	FSoftClassPath PreferredNavData; // 0x18
};

struct FYGetMissionsResponse {
	FString UserId; // 0x0
	TArray<FYMissionUpdateDataEntry> missions; // 0x10
};

struct FYSetMissionsCount {
	FString UserId; // 0x0
	TArray<FYMissionUpdateDataEntry> entries; // 0x10
};

struct FYAssetValidationStatistics {
	TArray<FYAssetValidatorEntry> m_enabledAssetTypes; // 0x0
	TArray<FYAssetValidatorEntry> m_disabledAssetTypes; // 0x10
};

struct FServerGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
	FString OverrideLabel; // 0x18
};

struct FRigUnit_ParentSwitchConstraint : FRigUnitMutable {
	FRigElementKey Subject; // 0x68
	int32_t ParentIndex; // 0x74
	FRigElementKeyCollection Parents; // 0x78
	FTransform InitialGlobalTransform; // 0x90
	float weight; // 0xc0
	FTransform Transform; // 0xd0
	bool Switched; // 0x100
	FCachedRigElement CachedSubject; // 0x104
	FCachedRigElement CachedParent; // 0x118
	FTransform RelativeOffset; // 0x130
};

struct FYLeaveGameEvent {
	FName m_reason; // 0x0
};

struct FVertexAndAttributes {
	FVertexInstanceID VertexInstanceID; // 0x0
	FVertexID VertexID; // 0x4
	FMeshElementAttributeList PolygonVertexAttributes; // 0x8
};

struct FRigUnit_SendEvent : FRigUnitMutable {
	ERigEvent Event; // 0x68
	FRigElementKey Item; // 0x6c
	float OffsetInSeconds; // 0x78
	bool bEnable; // 0x7c
	bool bOnlyDuringInteraction; // 0x7d
};

struct FYAudioSettingsChangedEvent : FYBaseAnalyticsEvent {
	float master_volume; // 0xa8
	float music_volume; // 0xac
	float sound_effects_volume; // 0xb0
	float dialogue_volume; // 0xb4
	float ui_volume; // 0xb8
	float hitmarker_volume; // 0xbc
	float input_volume; // 0xc0
	float output_volume; // 0xc4
	bool push_to_talk; // 0xc8
};

struct FClientListUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Characters; // 0x8
};

struct FHorizonTweenEventSceneComponentColorFromToParameters : FHorizonTweenEventLinearColorParameters {
	TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr; // 0x238
};

struct FLinearConstraint : FConstraintBaseParams {
	float Limit; // 0x14
	ELinearConstraintMotion XMotion; // 0x18
	ELinearConstraintMotion YMotion; // 0x19
	ELinearConstraintMotion ZMotion; // 0x1a
};

struct FYCharacterVanityResetAppearance {
	FString UserId; // 0x0
};

struct FYWeaponTransportProjectileData {
	AYProjectile* m_projectileClass; // 0x0
	float m_gravityScale; // 0x8
	float m_bounciniess; // 0xc
	bool m_shouldBeArmed; // 0x10
	float m_armingTime; // 0x14
	float m_friction; // 0x18
	bool m_returnPhysMaterialOnMove; // 0x1c
	float m_initialProjectileSpeed; // 0x20
	float m_acceleration; // 0x24
	float m_accelerationApplyDelayTime; // 0x28
	float m_applyAccelerationAdditionalMaxSpeed; // 0x2c
	float m_homingAccelerationMagnitude; // 0x30
	float m_maxSpeed; // 0x34
	bool m_bounce; // 0x38
	float m_collisionRadius; // 0x3c
	float m_maxAllowedDotProductToTurnWhenHoming; // 0x40
	float m_projectileLifetime; // 0x44
	float m_particleAdditionalLifetimeOnImpact; // 0x48
	bool m_playClientSideProjectile; // 0x4c
};

struct FNavGraphNode {
	UObject* Owner; // 0x0
};

struct FYWeaponCompleteAnimationRuntimeDataSet {
	TMap<EYWeaponPlayState, FYWeaponAnimationPlayRuntimeData> m_runtimeData; // 0x0
};

struct FCollisionResponseTemplate {
	FName Name; // 0x0
	ECollisionEnabled CollisionEnabled; // 0x8
	bool bCanModify; // 0xa
	FName ObjectTypeName; // 0x2c
	TArray<FResponseChannel> CustomResponses; // 0x38
};

struct FYGetUserDataResult {
	TMap<FString, FString> m_keyPair; // 0x0
};

struct FYMissionInitializationData {
	FText m_missionStepDescription; // 0x0
	FText m_missionStepNpcText; // 0x18
	UYMetaQuestPlayerInstanceComponent* m_metaQuestInstanceComponent; // 0x30
};

struct FBlackboardEntry {
	FName EntryName; // 0x0
	UBlackboardKeyType* KeyType; // 0x8
	char bInstanceSynced : 1; // 0x10
};

struct FYOnboardingRewardRow : FYDataTableRowBase {
	TArray<FYOnboardingRewardEntry> m_rewards; // 0x10
};

struct FYResetSessionsAndCreateNewRequestRequest {
	FString desiredRegion; // 0x0
	int32_t shutdownType; // 0x10
	int32_t newStationServers; // 0x14
	int32_t newMatchServers; // 0x18
};

struct FMathRBFInterpolateQuatQuat_Target {
	FQuat Target; // 0x0
	FQuat Value; // 0x10
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

struct FHorizonTweenEventWidgetMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	TWeakObjectPtr<UWidget> TweenTargetWeakPtr; // 0x138
	bool bTweenSheer; // 0x140
};

struct FYChartResultData {
	int32_t m_framesCollected; // 0x0
	float m_secondSpent; // 0x4
	float m_secondsDisregarded; // 0x8
	float m_averageFps; // 0xc
	float m_percentMissedVsyncsThirty; // 0x10
	float m_percentMissedVsyncsSixty; // 0x14
	float m_averageGameTime; // 0x18
	float m_minGameTime; // 0x1c
	float m_maxGameTime; // 0x20
	float m_averageDrawTime; // 0x24
	float m_minDrawTime; // 0x28
	float m_maxDrawTime; // 0x2c
	float m_averageGpuTime; // 0x30
	float m_minGpuTime; // 0x34
	float m_maxGpuTime; // 0x38
	float m_boundGameThreadPercent; // 0x3c
	float m_boundRenderThreadPercent; // 0x40
	float m_boundGPUThreadPercent; // 0x44
	float m_maxFps; // 0x48
	float m_minFps; // 0x4c
};

struct FMultiplayerCancelAllMatchmakingTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FRigUnit_GetControlInitialTransform : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedControlIndex; // 0x50
};

struct FInsightsInsightsGetPendingOperationsResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> PendingOperations; // 0x8
};

struct FYSetUserDataResult {
	bool m_success; // 0x0
};

struct FYEnterMatchAzureFunction {
	FString optimalRegion; // 0x0
	bool isMatch; // 0x10
	bool bypassMaintenanceMode; // 0x11
	EYMatchmakingDebugOption debugOption; // 0x12
	FString mapName; // 0x18
	FString squad_id; // 0x28
	TArray<FYPurchaseInventoryInsuranceRequest> purchaseInventoryInsurances; // 0x38
};

struct FAudioComponentParam {
	FName ParamName; // 0x0
	float FloatParam; // 0x8
	bool BoolParam; // 0xc
	int32_t IntParam; // 0x10
	USoundWave* SoundWaveParam; // 0x18
};

struct FYItemStatAndPossibleRange {
	EYItemStatsType m_itemStatType; // 0x0
	float m_currentVal; // 0x4
	float m_worstVal; // 0x8
	float m_bestVal; // 0xc
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

struct FRigUnit_ControlName : FRigUnit {
	FName Control; // 0x8
};

struct FYVehicleVanityDataTableRow : FYVanityItemRowBase {
	FDataTableRowHandle m_overrideVehicleMovementAudioSoundQueue; // 0x378
	FDataTableRowHandle m_overrideVehicleBoostAudioSoundQueue; // 0x388
	TSoftClassPtr<UObject> m_overridenVehicleSubclass; // 0x398
};

struct FYConfigurationUpdated {
	EYUpdateCategory Category; // 0x0
	FYConfigEntry Data; // 0x8
};

struct FQuartzPulseOverrideStep {
	int32_t NumberOfPulses; // 0x0
	EQuartzCommandQuantization PulseDuration; // 0x4
};

struct FYWeaponImpactEffectsAssociation {
	FYWeaponDecalData m_impactDecal; // 0x0
	UParticleSystem* m_impactVfx; // 0x20
	UParticleSystem* m_additionalImpactVfx; // 0x28
	bool m_attachImpactVfx; // 0x30
	bool m_playImpactVfxOnLocallyControlledPawn; // 0x31
	float m_slerpMaxImpactDirectionValue; // 0x34
	float m_slerpMinImpactDirectionValue; // 0x38
	float m_maxRandomImpactDirectionConeAngle; // 0x3c
	FYWeaponDecalData m_takeDamageDecal; // 0x40
	bool m_playImpactSfxOnOwner; // 0x60
	FDataTableRowHandle m_impactSfxHandle; // 0x68
	FDataTableRowHandle m_hitMarkerSfxHandle; // 0x78
	bool m_tryProjectImpactLocationOnSkeletalMesh; // 0x88
};

struct FNamedFilmbackPreset {
	FString Name; // 0x0
	FCameraFilmbackSettings FilmbackSettings; // 0x10
};

struct FClientReportAdActivityRequest : FPlayFabRequestCommon {
	EAdActivity Activity; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlacementId; // 0x18
	FString RewardId; // 0x28
};

struct FRigUnit_ToRigSpace_Rotation : FRigUnit {
	FQuat Rotation; // 0x10
	FQuat Global; // 0x20
};

struct FY3dWidgetInfo {
	TSoftClassPtr<UObject> m_userWidget3d; // 0x0
	FName m_socketNameAttachTo; // 0x28
	float m_widgetScale; // 0x30
};

struct FYPlayerFinishedMatch {
	FString UserId; // 0x0
};

struct FYDebugExecuteSocialPresence {
	FString UserId; // 0x0
	EYSocialGameStateType State; // 0x10
};

struct FClientGetPaymentTokenResult : FPlayFabResultCommon {
	FString OrderId; // 0x8
	FString ProviderToken; // 0x18
};

struct FRigHierarchyCopyPasteContent {
	TArray<ERigElementType> Types; // 0x0
	TArray<FString> Contents; // 0x10
	TArray<FTransform> LocalTransforms; // 0x20
	TArray<FTransform> GlobalTransforms; // 0x30
};

struct FCompositeFallbackFont {
	FTypeface Typeface; // 0x0
	float ScalingFactor; // 0x10
};

struct FRigUnit_PointSimulation_BoneTarget {
	FName Bone; // 0x0
	int32_t TranslationPoint; // 0x8
	int32_t PrimaryAimPoint; // 0xc
	int32_t SecondaryAimPoint; // 0x10
};

struct FYShopOfferRow : FTableRowBase {
	FString m_epicOfferId; // 0x8
	FText m_name; // 0x18
	FText m_description; // 0x30
	FText m_flavor; // 0x48
	FText m_offerCategory; // 0x60
	TSoftObjectPtr<UTexture2D> m_banner; // 0x78
	EYCurrencyType m_currencyType; // 0xa0
	int32_t m_price; // 0xa4
	EYOfferRarity m_offerRarity; // 0xa8
	bool m_isOneTimePurchase; // 0xa9
	bool m_isSeasonLevel; // 0xaa
	FDataTableRowHandle m_grantRowId; // 0xb0
	FDataTableRowHandle m_entitlementRowId; // 0xc0
	TArray<FString> m_requiredOfferIds; // 0xd0
};

struct FYWeaponAttachmentEntry {
	TSoftObjectPtr<USkeletalMesh> m_skeletalMesh; // 0x0
	FName m_socketName; // 0x28
};

struct FAdminSetupPushNotificationResult : FPlayFabResultCommon {
	FString ARN; // 0x8
};

struct FMultiplayerCreateServerBackfillTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t GiveUpAfterSeconds; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString QueueName; // 0x28
	UPlayFabJsonObject* ServerDetails; // 0x38
};

struct FPCSnapConstraintFloor {
	bool AttachX; // 0x0
	bool AttachXNegative; // 0x1
	bool AttachY; // 0x2
	bool AttachYNegative; // 0x3
	bool AttachZ; // 0x4
	bool AttachZNegative; // 0x5
};

struct FServerDeregisterGameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
};

struct FServerGetServerCustomIDsFromPlayFabIDsRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
};

struct FAdminUpdateCloudScriptResult : FPlayFabResultCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FAdminGetMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
};

struct FGroupsRemoveGroupApplicationRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
};

struct FAnimNode_BlendBoneByChannel : FAnimNode_Base {
	FPoseLink A; // 0x10
	FPoseLink B; // 0x20
	TArray<FBlendBoneByChannelEntry> BoneDefinitions; // 0x30
	float Alpha; // 0x50
	FInputScaleBias AlphaScaleBias; // 0x58
	EBoneControlSpace TransformsSpace; // 0x60
};

struct FYUpdateBodyPartRequestData {
	FDataTableRowHandle m_baseHandle; // 0x0
	int32_t m_materialIndex; // 0x10
	EYCharacterItemColumnType m_requestType; // 0x14
	FString m_archetypeID; // 0x18
	bool m_forceIgnoreBackendDebug; // 0x28
};

struct FNiagaraHalfVector3 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
};

struct FClothConstraintSetupNv {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
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

struct FYLeaveSquad {
	FString ID; // 0x0
};

struct FYFactionUnlockRewards {
	TArray<FYUnlockedShopItem> m_unlockedShopItems; // 0x0
	TArray<FDataTableRowHandle> m_unlockedContracts; // 0x10
};

struct FComponentSpacePose {
	TArray<FTransform> Transforms; // 0x0
	TArray<FName> Names; // 0x10
};

struct FGroupsRemoveMembersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	TArray<UPlayFabJsonObject*> Members; // 0x18
	FString RoleId; // 0x28
};

struct FYVOVariationsContainer {
	TArray<FYVOLine> m_voVariations; // 0x0
};

struct FParticleRandomSeedInfo {
	FName ParameterName; // 0x0
	char bGetSeedFromInstance : 1; // 0x8
	char bInstanceSeedIsIndex : 1; // 0x8
	char bResetSeedOnEmitterLooping : 1; // 0x8
	char bRandomlySelectSeedArray : 1; // 0x8
	TArray<int32_t> RandomSeeds; // 0x10
};

struct FServerGetPlayFabIDsFromXboxLiveIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FYItemsUpdated {
	TArray<FYCustomItemInfo> updatedItems; // 0x0
	FString UserId; // 0x10
};

struct FYShowCraftingMaterials {
	FString UserId; // 0x0
};

struct FYAIEndLoopInfo {
	float m_serverTimestamp; // 0x0
	float m_blendOutTime; // 0x4
};

struct FRigUnit_DebugRectangle : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	FLinearColor Color; // 0xa0
	float Scale; // 0xb0
	float Thickness; // 0xb4
	FName Space; // 0xb8
	FTransform WorldOffset; // 0xc0
	bool bEnabled; // 0xf0
};

struct FSourceEffectEnvelopeFollowerSettings {
	float AttackTime; // 0x0
	float ReleaseTime; // 0x4
	EEnvelopeFollowerPeakMode PeakMode; // 0x8
	bool bIsAnalogMode; // 0x9
};

struct FYEndOfMatchEvent : FYBaseAnalyticsEvent {
	FString eom_screen_name; // 0xa8
	int32_t time_spent; // 0xb8
	bool eom_type_evac; // 0xbc
};

struct FBoneNode {
	FName Name; // 0x0
	int32_t ParentIndex; // 0x8
	EBoneTranslationRetargetingMode TranslationRetargetingMode; // 0xc
};

struct FAdminGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FRigUnit_CollectionDifference : FRigUnit_CollectionBase {
	FRigElementKeyCollection A; // 0x8
	FRigElementKeyCollection B; // 0x18
	FRigElementKeyCollection Collection; // 0x28
};

struct FTimelineLinearColorTrack {
	UCurveLinearColor* LinearColorCurve; // 0x0
	FDelegate InterpFunc; // 0x8
	FName TrackName; // 0x18
	FName LinearColorPropertyName; // 0x20
};

struct FClientGetAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* AccountInfo; // 0x8
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

struct FTemplateSequenceBindingOverrideData {
	TWeakObjectPtr<UObject> Object; // 0x0
	bool bOverridesDefault; // 0x8
};

struct FPSCPoolElem {
	UParticleSystemComponent* PSC; // 0x0
};

struct FYTrackedMessageUser {
	FString m_userId; // 0x0
	float m_lastTimeSentMessage; // 0x10
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

struct FYWeaponLocationOffsetData {
	FVector m_offsetLocaton; // 0x0
	FVector m_overrideDirectionMovement; // 0xc
};

struct FSessionInfo {
	FString BuildId; // 0x0
	FString SessionId; // 0x10
	FString ServerId; // 0x20
	FString Region; // 0x30
	TArray<FString> InitialPlayers; // 0x40
};

struct FWorldPSCPool {
	TMap<UParticleSystem*, FPSCPool> WorldParticleSystemPools; // 0x0
};

struct FYGetDailyChallengesResponse {
	FString UserId; // 0x0
	TArray<FYQuestState> quests; // 0x10
	int32_t playerNumOfRerollTokens; // 0x20
};

struct FYAbilityActionBlinkData : FYAbilityActionDataTableRow {
	FDataTableRowHandle m_startSound; // 0x78
	FDataTableRowHandle m_endSound; // 0x88
	UParticleSystem* m_particleSystemBlinkAway; // 0x98
	UParticleSystem* m_particleSystemBlinkInto; // 0xa0
};

struct FYLocationData : FYDataTableRowBase {
	FText m_locationName; // 0x10
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

struct FMediaPlayerTrackOptions {
	int32_t Audio; // 0x0
	int32_t Caption; // 0x4
	int32_t MetaData; // 0x8
	int32_t Script; // 0xc
	int32_t Subtitle; // 0x10
	int32_t Text; // 0x14
	int32_t Video; // 0x18
};

struct FClientGetPlayerTagsResult : FPlayFabResultCommon {
	FString PlayFabId; // 0x8
	FString Tags; // 0x18
};

struct FMultiplayerListAssetSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> AssetSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FYItemPickUpLightData {
	bool m_isLightEnabled; // 0x0
	float m_intensity; // 0x4
	float m_attenuationRadius; // 0x8
	FVector m_relativeTranslationOffset; // 0xc
	FColor m_color; // 0x18
};

struct FYTournamentDataRequest {
	FString UserId; // 0x0
};

struct FAIDataProviderFloatValue : FAIDataProviderTypedValue {
	float DefaultValue; // 0x30
};

struct FMultiplayerGetRemoteLoginEndpointResponse : FPlayFabResultCommon {
	FString IPV4Address; // 0x8
	int32_t Port; // 0x18
};

struct FCloudScriptRegisterHttpFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
	FString FunctionUrl; // 0x20
};

struct FYLeaderBoardEntryCreatedData {
	UYWidget_RankedLeaderBoardEntry* m_widgetToCreate; // 0x0
	TArray<UYWidget_RankedLeaderBoardEntry*> m_createdWidgets; // 0x8
};

struct FRollbackNetStartupActorInfo {
	UObject* Archetype; // 0x8
	ULevel* Level; // 0x38
	TArray<UObject*> ObjReferences; // 0xa0
};

struct FYUserMatchmakingSettings {
	bool isReadyForMatch; // 0x0
	FString selectedMapName; // 0x8
	TArray<FYPurchaseInventoryInsuranceRequest> purchaseInventoryInsurances; // 0x18
};

struct FLevelSimplificationDetails {
	bool bCreatePackagePerAsset; // 0x0
	float DetailsPercentage; // 0x4
	float m_minSquaredBounds; // 0x8
	FMaterialProxySettings StaticMeshMaterialSettings; // 0xc
	bool bOverrideLandscapeExportLOD; // 0x94
	int32_t LandscapeExportLOD; // 0x98
	FMaterialProxySettings LandscapeMaterialSettings; // 0x9c
	bool bBakeFoliageToLandscape; // 0x124
	bool bBakeGrassToLandscape; // 0x125
	bool bGenerateMeshNormalMap; // 0x126
	bool bGenerateMeshMetallicMap; // 0x127
	bool bGenerateMeshRoughnessMap; // 0x128
	bool bGenerateMeshSpecularMap; // 0x129
	bool bGenerateLandscapeNormalMap; // 0x12a
	bool bGenerateLandscapeMetallicMap; // 0x12b
	bool bGenerateLandscapeRoughnessMap; // 0x12c
	bool bGenerateLandscapeSpecularMap; // 0x12d
};

struct FVector2D {
	float X; // 0x0
	float Y; // 0x4
};

struct FYFinalizeAccountLinkingResponse {
	EYAccountLinkingResultCode resultCode; // 0x0
};

struct FAdminSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FYGetQuestsBS {
	FString UserId; // 0x0
};

struct FYWeaponModCombinationWithDamage : FTableRowBase {
	FName m_weaponName; // 0x8
	TArray<FName> m_modCombinations; // 0x10
	FName m_targetName; // 0x20
	float m_damageDealt; // 0x28
	float m_distanceToTarget; // 0x2c
};

struct FHorizonTweenEventVectorParameters : FHorizonTweenEventTweenListImplementParameters {
	TArray<FVector> TweenStartList; // 0x8
	TArray<FVector> TweenEndList; // 0x18
	EHorizonTweenVectorConstraints ConstraintType; // 0x28
	FHorizonTweenEventTransformParam TransformParam; // 0x2c
	FHorizonTweenEventCustomCurve CustomTweenCurve; // 0xc0
};

struct FYGetUsersCurrencies {
	TArray<FString> userIds; // 0x0
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

struct FChaosHandlerSet {
	TSet<UObject*> ChaosHandlers; // 0x8
};

struct FClientCreateSharedGroupResult : FPlayFabResultCommon {
	FString SharedGroupId; // 0x8
};

struct FServerUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString PlayFabId; // 0x30
};

struct FSupportedSubTrackInfo {
	UInterpTrack* SupportedClass; // 0x0
	FString SubTrackName; // 0x8
	int32_t GroupIndex; // 0x18
};

struct FLayerActorStats {
	UObject* Type; // 0x0
	int32_t Total; // 0x8
};

struct FHorizonTweenEventWidgetParameters {
	FHorizonTweenEventParameters MoveFromToParam; // 0x0
	FHorizonTweenEventWidgetMoveFromToParameters MoveFromToParamImpl; // 0x38
	bool bMoveFromTo; // 0xf8
	FHorizonTweenEventParameters RotatorFromToParam; // 0x100
	FHorizonTweenEventWidgetRotatorFromToParameters RotatorFromToParamImpl; // 0x138
	bool bRotateFromTo; // 0x1f8
	FHorizonTweenEventParameters ScaleFromToParam; // 0x200
	FHorizonTweenEventWidgetScaleFromToParameters ScaleFromToParamImpl; // 0x238
	bool bScaleFromTo; // 0x2f8
	FHorizonTweenEventParameters SheerFromToParam; // 0x300
	FHorizonTweenEventWidgetSheerFromToParameters SheerFromToParamImpl; // 0x338
	bool bSheerFromTo; // 0x3f8
	FHorizonTweenEventParameters ColorFromToParam; // 0x400
	FHorizonTweenEventWidgetColorFromToParameters ColorFromToParamImpl; // 0x438
	bool bColorFromTo; // 0x678
};

struct FYInboxMessage {
	FString ID; // 0x0
	FString inboxMessageRowId; // 0x10
	TArray<FYAttachment> attachments; // 0x20
	FYTimestamp receivedDate; // 0x30
	bool hasRead; // 0x38
};

struct FEdGraphSchemaAction_NewNode : FEdGraphSchemaAction {
	UEdGraphNode* NodeTemplate; // 0x100
};

struct FFontData {
	FString FontFilename; // 0x0
	EFontHinting Hinting; // 0x10
	EFontLoadingPolicy LoadingPolicy; // 0x11
	int32_t SubFaceIndex; // 0x14
	UObject* FontFaceAsset; // 0x18
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

struct FRigUnit_SphereTraceWorld : FRigUnit {
	FVector Start; // 0x8
	FVector End; // 0x14
	ECollisionChannel Channel; // 0x20
	float Radius; // 0x24
	bool bHit; // 0x28
	FVector HitLocation; // 0x2c
	FVector HitNormal; // 0x38
};

struct FClientWriteTitleEventRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Body; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EventName; // 0x18
	FString Timestamp; // 0x28
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

struct FWaterSplineCurveDefaults {
	float DefaultDepth; // 0x0
	float DefaultWidth; // 0x4
	float DefaultVelocity; // 0x8
	float DefaultAudioIntensity; // 0xc
};

struct FDebugDisplayProperty {
	UObject* Obj; // 0x0
	UObject* WithinClass; // 0x8
};

struct FYAIEQSPreferedRange : FYDataTableRowBase {
	TMap<FName, float> m_EQSParameters; // 0x10
};

struct FParameterChannelNames {
	FText R; // 0x0
	FText G; // 0x18
	FText B; // 0x30
	FText A; // 0x48
};

struct FInterpCurvePointTwoVectors {
	float InVal; // 0x0
	FTwoVectors OutVal; // 0x4
	FTwoVectors ArriveTangent; // 0x1c
	FTwoVectors LeaveTangent; // 0x34
	EInterpCurveMode InterpMode; // 0x4c
};

struct FRigUnit_ConvertVectorToRotation : FRigUnit {
	FVector Input; // 0x8
	FRotator Result; // 0x14
};

struct FRigUnit_MathVectorLengthSquared : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Result; // 0x14
};

struct FYFullscreenCrosshairData {
	TSoftClassPtr<UObject> m_widget; // 0x0
	EYOverrideShowWeapon m_weaponVisibilityWhileTargetingOverride; // 0x28
};

struct FAdminAbortTaskInstanceRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString TaskInstanceId; // 0x10
};

struct FServerGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FRigUnit_MathFloatCeil : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
	int32_t Int; // 0x10
};

struct FMovieSceneControlRigInstanceData : FMovieSceneSequenceInstanceData {
	bool bAdditive; // 0x8
	bool bApplyBoneFilter; // 0x9
	FInputBlendPose BoneFilter; // 0x10
	FMovieSceneFloatChannel weight; // 0x20
	FMovieSceneEvaluationOperand Operand; // 0xc0
};

struct FClientValidateGooglePlayPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FYLoreBackendItemInfo {
	FString loreItemId; // 0x0
	int32_t Amount; // 0x10
};

struct FYModEntry {
	FDataTableRowHandle m_rowHandle; // 0x0
};

struct FYFriendEntry {
	FString internalUserId; // 0x0
	EYFriendState State; // 0x10
	FYSocialPresenceEntry presence; // 0x18
};

struct FRepMovement {
	FVector LinearVelocity; // 0x0
	FVector AngularVelocity; // 0xc
	FVector Location; // 0x18
	FRotator Rotation; // 0x24
	char bSimulatedPhysicSleep : 1; // 0x30
	char bRepPhysics : 1; // 0x30
	char m_repAngularYawMovement; // 0x31
	float m_angularYawRotation; // 0x34
	EVectorQuantization LocationQuantizationLevel; // 0x38
	EVectorQuantization VelocityQuantizationLevel; // 0x39
	ERotatorQuantization RotationQuantizationLevel; // 0x3a
};

struct FYTechTreeNodesStatuses {
	FString UserId; // 0x0
	TArray<FYTechTreeNodeStatus> nodes; // 0x10
};

struct FYBaseSocialResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
};

struct FInterpCurvePointVector {
	float InVal; // 0x0
	FVector OutVal; // 0x4
	FVector ArriveTangent; // 0x10
	FVector LeaveTangent; // 0x1c
	EInterpCurveMode InterpMode; // 0x28
};

struct FYFactionProgress {
	FName factionId; // 0x0
	int32_t reputation; // 0x8
	int32_t Level; // 0xc
	int32_t standingRank; // 0x10
	int32_t Points; // 0x14
};

struct FYGetTopNPlayersActiveRankedSeasonRequest {
	int32_t numTopPlayers; // 0x0
};

struct FDestructibleParameters {
	FDestructibleDamageParameters DamageParameters; // 0x0
	FDestructibleDebrisParameters DebrisParameters; // 0x1c
	FDestructibleAdvancedParameters AdvancedParameters; // 0x48
	FDestructibleSpecialHierarchyDepths SpecialHierarchyDepths; // 0x58
	TArray<FDestructibleDepthParameters> DepthParameters; // 0x70
	FDestructibleParametersFlag Flags; // 0x80
};

struct FDataTableRowHandle {
	UDataTable* DataTable; // 0x0
	FName RowName; // 0x8
};

struct FMovieSceneTrackLabels {
	TArray<FString> Strings; // 0x0
};

struct FNiagaraVariableWithOffset : FNiagaraVariableBase {
	int32_t Offset; // 0xc
};

struct FYGfxQualityData {
	FText m_label; // 0x0
	EYGfxQualityPreset m_gfxQuality; // 0x18
};

struct FClientGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FYCurrency {
	int32_t hardCurrency; // 0x0
};

struct FYPlayerReportSubmitData {
	FText m_title; // 0x0
	FText m_description; // 0x18
	FText m_email; // 0x30
	FText m_name; // 0x48
	FString m_playerNameReported; // 0x60
	FString m_reportedPlayerId; // 0x70
	EYCustomerServiceRequestType m_reportingType; // 0x80
	EYReportPlayerType m_playerReportType; // 0x81
	FString m_reportContext; // 0x88
};

struct FYDelayedAnnouncementData {
	FDataTableRowHandle m_rowHandle; // 0x0
	FYAnnouncementPlaybackOptions m_playbackOptions; // 0x10
};

struct FServerUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FRigBoneHierarchy {
	TArray<FRigBone> Bones; // 0x20
	TMap<FName, int32_t> NameToIndexMapping; // 0x30
	TArray<FName> Selection; // 0x80
};

struct FSplitterStyle : FSlateWidgetStyle {
	FSlateBrush HandleNormalBrush; // 0x8
	FSlateBrush HandleHighlightBrush; // 0x90
};

struct FServerAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FYMatchmakingSetupRow : FTableRowBase {
	FYMatchmakingSetupEntry stationSetup; // 0x8
	TArray<FYMatchmakingSetupMatchEntry> matchSetups; // 0x28
	EYMatchmakingMapOptions matchMapChoiceOption; // 0x38
	FYMatchmakingBeginnerFlagSetup beginnerFlagRules; // 0x3c
	int32_t rejoinOnDeathCooldownMinutes; // 0x4c
	bool enableJoinConcurrencyTempLock; // 0x50
	int32_t shardsPerStationServer; // 0x54
	FYMatchmakingRegionSetup regionsSetup; // 0x58
	FYMatchmakingNVRSetup nvrSetup; // 0x78
};

struct FAnimCurveBase {
	FName LastObservedName; // 0x0
	FSmartName Name; // 0x8
	int32_t CurveTypeFlags; // 0x14
};

struct FYSocialPresenceEntry {
	EYSocialGameStateType State; // 0x0
	FString squadId; // 0x8
	int32_t squadSize; // 0x18
	FString socialRowId; // 0x20
	int32_t prospectorLevelXP; // 0x30
};

struct FYAISquadSpawnRow : FYDataTableRowBase {
	TArray<FYAISquadDefinition> m_spawnOptions; // 0x10
	TArray<FYAISquadDefinition> m_spawnOptionsStorm; // 0x20
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

struct FKShapeElem {
	float RestOffset; // 0x8
	FName Name; // 0xc
	char bContributeToMass : 1; // 0x18
	ECollisionEnabled CollisionEnabled; // 0x19
};

struct FYDebugSetAllCraftingMaterialsAmountResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCustomItemInfo> changedMaterials; // 0x20
};

struct FYRequestTechTreeNodeUpgradePurchaseRequest {
	FString UserId; // 0x0
	FName nodeId; // 0x10
};

struct FAbility_Action_RoadFlare {
	float Duration_2_C358A3414BA496CA903791A70A14995E; // 0x0
};

struct FRigUnit_BoneHarmonics_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
	FVector WaveTime; // 0x10
};

struct FNavigationFilterArea {
	UNavArea* AreaClass; // 0x0
	float TravelCostOverride; // 0x8
	float EnteringCostOverride; // 0xc
	char bIsExcluded : 1; // 0x10
	char bOverrideTravelCost : 1; // 0x10
	char bOverrideEnteringCost : 1; // 0x10
};

struct FServerGetPlayFabIDsFromNintendoSwitchDeviceIdsRequest : FPlayFabRequestCommon {
	FString NintendoSwitchDeviceIds; // 0x8
};

struct FMovieSceneTimecodeSource {
	FTimecode Timecode; // 0x0
	FFrameNumber DeltaFrame; // 0x14
};

struct FIntMargin {
	int32_t Left; // 0x0
	int32_t Top; // 0x4
	int32_t Right; // 0x8
	int32_t Bottom; // 0xc
};

struct FYLeaderboardPlacementToRewardsDataTableRow : FYDataTableRowBase {
	FText m_rewardsPackageName; // 0x10
	int32_t m_leaderboardRank; // 0x28
	TSoftObjectPtr<UDataTable> m_rewardsDropTablePath; // 0x30
	TSoftObjectPtr<UDataTable> m_prospectorLevelVprewardsTablePath; // 0x58
};

struct FYVOSpeakerRow : FYDataTableRowBase {
	FText m_name; // 0x10
	UTexture2D* m_icon; // 0x28
	FText m_description; // 0x30
};

struct FWeightmapData {
	TArray<UTexture2D*> Textures; // 0x0
	TArray<FWeightmapLayerAllocationInfo> LayerAllocations; // 0x10
	TArray<ULandscapeWeightmapUsage*> TextureUsages; // 0x20
};

struct FAdminSetPlayerSecretRequest : FPlayFabRequestCommon {
	FString PlayerSecret; // 0x8
	FString PlayFabId; // 0x18
};

struct FYCameraTransitionData {
	EYPlayerStateBlueprint m_playerState; // 0x0
	EYStateCancelationBehavior m_stateCancelBehavior; // 0x1
	float m_duration; // 0x4
	bool m_transitionTowardsFirstPerson; // 0x8
	bool m_clearTranslationOffsetOnCompletion; // 0x9
};

struct FClientGetLeaderboardAroundCharacterResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FYTechTreeNodeStatus {
	FString nodeId; // 0x0
	int32_t Level; // 0x10
	FYTimestamp upgradeStartedTime; // 0x18
};

struct FYPickaxeUpgradeLevelUpdated {
	FString m_userId; // 0x0
	int32_t m_upgradeLevel; // 0x10
};

struct FNiagaraPlatformSet {
	int32_t QualityLevelMask; // 0x0
	TArray<FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8
	TArray<FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18
};

struct FRigUnit_TwoBoneIKSimplePerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey ItemA; // 0x68
	FRigElementKey ItemB; // 0x74
	FRigElementKey EffectorItem; // 0x80
	FTransform Effector; // 0x90
	FVector PrimaryAxis; // 0xc0
	FVector SecondaryAxis; // 0xcc
	float SecondaryAxisWeight; // 0xd8
	FVector PoleVector; // 0xdc
	EControlRigVectorKind PoleVectorKind; // 0xe8
	FRigElementKey PoleVectorSpace; // 0xec
	bool bEnableStretch; // 0xf8
	float StretchStartRatio; // 0xfc
	float StretchMaximumRatio; // 0x100
	float weight; // 0x104
	float ItemALength; // 0x108
	float ItemBLength; // 0x10c
	bool bPropagateToChildren; // 0x110
	FRigUnit_TwoBoneIKSimple_DebugSettings DebugSettings; // 0x120
	FCachedRigElement CachedItemAIndex; // 0x160
	FCachedRigElement CachedItemBIndex; // 0x174
	FCachedRigElement CachedEffectorItemIndex; // 0x188
	FCachedRigElement CachedPoleVectorSpaceIndex; // 0x19c
};

struct FClientUnlinkWindowsHelloAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PublicKeyHint; // 0x10
};

struct FClientGetLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FRigUnit_CollectionCount : FRigUnit_CollectionBase {
	FRigElementKeyCollection Collection; // 0x8
	int32_t Count; // 0x18
};

struct FYPlayerQuartersLevelUpBI : FYBaseAnalyticsEvent {
	int32_t quarters_level; // 0xa8
};

struct FRigUnit_MathQuaternionFromEuler : FRigUnit_MathQuaternionBase {
	FVector Euler; // 0x8
	EControlRigRotationOrder RotationOrder; // 0x14
	FQuat Result; // 0x20
};

struct FMultiplayerGetQueueStatisticsResult : FPlayFabResultCommon {
	int32_t NumberOfPlayersMatching; // 0x8
	UPlayFabJsonObject* TimeToMatchStatisticsInSeconds; // 0x10
};

struct FYFinalizeAccountLinkingRequest {
	FString targetUserIdPlayFabMaster; // 0x0
	FString targetUserIdPlatform; // 0x10
	FString targetPlayFabPlatformName; // 0x20
};

struct FYSquad {
	FString ID; // 0x0
	TArray<FYSquadMemberBE> Members; // 0x10
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

struct FAnimNode_OrientationWarp : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float Direction; // 0x20
	float Offset; // 0x24
	float UpperBodyAlpha; // 0x28
	FVector UpAxis; // 0x2c
	float Alpha; // 0x38
	float MaxWarpDelta; // 0x3c
	float Smoothing; // 0x40
	FBoneReference RootBone; // 0x44
	FBoneChain SpineChain; // 0x58
	TArray<FBoneReference> RootBonesToCounterAdjust; // 0x78
};

struct FYWeaponTuningDataTableRow : FYDataTableRowBase {
	FDataTableRowHandle m_AISenseTriggeredOnFire; // 0x10
	float m_staminaConsumptionPerFire; // 0x20
	float m_minNegativeRecoilX; // 0x24
	float m_maxNegativeRecoilX; // 0x28
	float m_minPositiveRecoilX; // 0x2c
	float m_maxPositiveRecoilX; // 0x30
	float m_minRecoilY; // 0x34
	float m_maxRecoilY; // 0x38
	float m_CameraRecoilCompensationSpeedX; // 0x3c
	float m_cameraRecoilCompensationSpeedY; // 0x40
	float m_automaticFireCrosshairRecoilCompensationSpeedX; // 0x44
	float m_automaticFireCrosshairRecoilCompensationSpeedY; // 0x48
	float m_targetingRecoilCompensationSpeedMultiplier; // 0x4c
	float m_singleFireRecoilMultiplierX; // 0x50
	float m_singleFireRecoilMultiplierY; // 0x54
	bool m_useRecoilCompensation; // 0x58
	float m_recoilCompensationStartTime; // 0x5c
	UCameraShakeBase* m_firingCameraShake; // 0x60
	float m_fireWeaponDelay; // 0x68
	float m_unequipTime; // 0x6c
	float m_equipTime; // 0x70
	float m_animationEquipTime; // 0x74
	float m_defaultWeaponSpread; // 0x78
	float m_weaponSpreadIncreaseSpeed; // 0x7c
	float m_weaponSpreadDecreaseSpeed; // 0x80
	float m_weaponSpreadMax; // 0x84
	FDataTableRowHandle m_scopeTuningRow; // 0x88
	float m_targetingTime; // 0x98
	float m_untargetingTimeMultiplier; // 0x9c
	float m_retargetingMinimumNormalizedTime; // 0xa0
	float m_targetingSpreadDefaultMultiplier; // 0xa4
	float m_targetingWeaponSpreadMaxMultiplier; // 0xa8
	float m_targetingSpreadIncreaseMultiplier; // 0xac
	float m_targetingSpreadJumpingMultiplier; // 0xb0
	float m_inAirSpreadMultiplier; // 0xb4
	float m_targetingSpreadInAirMultiplier; // 0xb8
	float m_targetingMovementSpeedMultiplier; // 0xbc
	float m_crouchSpreadDefaultMultiplier; // 0xc0
	float m_movementSpreadDefaultMultiplier; // 0xc4
	float m_movementSpreadTargetingMultiplier; // 0xc8
	float m_sprintingMovementSpreadDefaultMultiplier; // 0xcc
	float m_crouchSpreadIncreaseMultiplier; // 0xd0
	UCurveFloat* m_spreadCurve; // 0xd8
	float m_spreadCurveIncreasePerShot; // 0xe0
	float m_spreadCurveDecreasePerSecond; // 0xe4
	float m_targetingRecoilMultiplier; // 0xe8
	float m_crouchingRecoilMultiplier; // 0xec
	float m_fireInAirRecoilMultiplier; // 0xf0
	float m_reloadAddAmmoTime; // 0xf4
	float m_reloadTime; // 0xf8
	float m_animationReloadTime; // 0xfc
	float m_ammoConsumptionPerShot; // 0x100
	bool m_useSingleReload; // 0x104
	float m_reloadAddFirstAmmoStateTime; // 0x108
	float m_reloadAddFirstAmmoTime; // 0x10c
	float m_reloadAddLoopAmmoTime; // 0x110
	float m_animationReloadAddFirstAmmoTime; // 0x114
	float m_animationReloadAddLoopAmmoTime; // 0x118
	float m_refireTime; // 0x11c
	float m_targetingRefireTime; // 0x120
	float m_weakAreaDamageMultiplier; // 0x124
	float m_weakAreaDamageMultiplierEnemy; // 0x128
	float m_penetration; // 0x12c
	float m_directDamage; // 0x130
	float m_targetingDirectDamage; // 0x134
	float m_directDamagePlayerMultiplier; // 0x138
	float m_directDamageEnemyMultiplier; // 0x13c
	float m_directDamageImpulse; // 0x140
	float m_stabilityDamageForDeathRagdoll; // 0x144
	float m_stabilityDamage; // 0x148
	float m_radialDamage; // 0x14c
	float m_radialDamagePlayerMultiplier; // 0x150
	float m_radialDamageEnemyMultiplier; // 0x154
	float m_radialDamageImpulse; // 0x158
	bool m_damageIgnoreShield; // 0x15c
	float m_radialDamageFalloffStartRange; // 0x160
	float m_radialDamageFalloffMultiplier; // 0x164
	float m_radialDamageRadius; // 0x168
	float m_radialDamageCapsuleRadius; // 0x16c
	float m_radialDamageCapsuleHalfHeight; // 0x170
	float m_directDamageFalloffStartRange; // 0x174
	float m_directDamageFalloffEndRange; // 0x178
	float m_directDamageFalloffMultiplier; // 0x17c
	float m_damageSelfMultiplier; // 0x180
	EYDamageApplication m_damageApplication; // 0x184
	bool m_useDamageCauserForImpactDirection; // 0x185
	float m_spinDownTimeRate; // 0x188
	bool m_canSpinUpDuringInventory; // 0x18c
	float m_projectileAdjustDirectionImpactRange; // 0x190
	float m_weaponSpreadDecreaseSinceLastShotTime; // 0x194
	float m_easeOutMagnitudeRecoilStart; // 0x198
	UCurveFloat* m_recoilCurve; // 0x1a0
	UCurveFloat* m_targetingRecoil; // 0x1a8
	UCurveFloat* m_overridenEaseInRecoil; // 0x1b0
	UCurveFloat* m_easeOutRecoil; // 0x1b8
	UCurveFloat* m_cameraRecoilCompensationSpeedMultiplierCurve; // 0x1c0
	UCurveVector* m_automaticFireWeaponRecoilVector; // 0x1c8
	float m_automaticFireRecoilResetTime; // 0x1d0
	bool m_burstFireUseCompensationStartTime; // 0x1d4
	float m_cameraAffectMultiplierX; // 0x1d8
	float m_cameraAffectMultiplierY; // 0x1dc
	float m_crossHairAffectMultiplierX; // 0x1e0
	float m_crossHairAffectMultiplierY; // 0x1e4
	float m_cameraAffectMultiplierWhileTargetingX; // 0x1e8
	float m_cameraAffectMultiplierWhileTargetingY; // 0x1ec
	float m_crossHairAffectMultiplierWhileTargetingX; // 0x1f0
	float m_crossHairAffectMultiplierWhileTargetingY; // 0x1f4
	bool m_shootAtSocketWhenTargeting; // 0x1f8
	FName m_socketNameShootAtSocketWhenTargeting; // 0x1fc
	float m_burstInterval; // 0x204
	int32_t m_amountOfBurst; // 0x208
	int32_t m_amountOfImmediateFires; // 0x20c
	bool m_immediateFireIncreasesSpread; // 0x210
	float m_movementSpeedMultiplier; // 0x214
	TArray<FYGameplayAttributeModifier> m_attributeModifier; // 0x218
	float m_firingMovementSpeedMultiplier; // 0x228
	float m_firingTurnSpeedMultiplier; // 0x22c
	float m_targetingTurnSpeedMultiplier; // 0x230
	float m_weaponFOVInterpSpeed; // 0x234
	float m_weaponFOVStartInterp; // 0x238
	float m_weaponTargetingInterp; // 0x23c
	int32_t m_startAmmo; // 0x240
	int32_t m_ammoInClip; // 0x244
	bool m_haveInfiniteAmmo; // 0x248
	FDataTableRowHandle m_ammoTypeToUse; // 0x250
	int32_t m_useCooldownTime; // 0x260
	int32_t m_useActionTime; // 0x264
	int32_t m_healAmount; // 0x268
	EYWeaponSlotType m_slotType; // 0x26c
	bool m_canUse; // 0x26d
	bool m_canHealSelf; // 0x26e
	bool m_useRandomSeed; // 0x26f
	bool m_isLooping; // 0x270
	bool m_canEverRefire; // 0x271
	bool m_stopSpinupOnInputRelease; // 0x272
	bool m_spinupUntilRelease; // 0x273
	bool m_instantlyFireOnTimeThresholdReached; // 0x274
	bool m_fireSpinupTimeRegadlessOfDuration; // 0x275
	bool m_clearAllTimeWhenSpinupDone; // 0x276
	bool m_spinupForUse; // 0x277
	bool m_alwaysStopAnimationSpinup; // 0x278
	bool m_stopAnimationOnSpinupInterupt; // 0x279
	bool m_spinUpStopAfterFullDuration; // 0x27a
	bool m_useFireWeaponDelayAtCachedTransform; // 0x27b
	bool m_ignoreDamagePrevention; // 0x27c
	bool m_canDamageSelf; // 0x27d
	bool m_fireAtRelease; // 0x27e
	FGameplayTagContainer m_objectTypesAllowedToDamage; // 0x280
	FYChainReactionDataEntry m_chainReactionData; // 0x2a0
	float m_requiredInputTimeForHeavyAttack; // 0x2ac
	float m_lightAttackRecoveryTime; // 0x2b0
	float m_lowStaminaLightAttackRecoveryTime; // 0x2b4
	float m_lightAttackStaminaConsumption; // 0x2b8
	float m_heavyAttackRecoveryTime; // 0x2bc
	float m_lowStaminaHeavyAttackRecoveryTime; // 0x2c0
	float m_heavyAttackStaminaConsumption; // 0x2c4
	FName m_socketLocation; // 0x2c8
	FDataTableRowHandle m_lightAttackWeaponTransportHandle; // 0x2d0
	FDataTableRowHandle m_lightAttackLowStaminaTransportHandle; // 0x2e0
	FDataTableRowHandle m_heavyAttackWeaponTransportHandle; // 0x2f0
	FDataTableRowHandle m_heavyAttackLowStaminaTransportHandle; // 0x300
	float m_spinupTime; // 0x310
	TArray<FDataTableRowHandle> m_scannableRowHandles; // 0x318
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

struct FSTR_MagnetismSettingsDesc {
	float MagnetismFriction_3_4B02D85E48D8583A8413C88222C30DFF; // 0x0
	float MagnetismFrictionMovementCoeff_11_71F3790D4B0E429D3D273B952E03B3FA; // 0x4
};

struct FYWidgetActorPlateInitializationData {
	FVector m_offsetToActorLocation; // 0x0
	float m_maxRenderDistance; // 0xc
	float m_widgetScaleDistance; // 0x10
	float m_dotProduct; // 0x14
	float m_dotStartRangeDistanceScale; // 0x18
	float m_dotScalingDistancePerMeterMultiplier; // 0x1c
	float m_dotMaxmimumThreshold; // 0x20
	float m_damageTakenVisibilityTime; // 0x24
	float m_forceNonVisibileDurationOnTeleport; // 0x28
	float m_minScaleValue; // 0x2c
	float m_healthBarShowThreshold; // 0x30
	FName m_socket; // 0x34
	FText m_NPCName; // 0x40
	TSoftObjectPtr<UTexture2D> m_NPCIcon; // 0x58
	bool m_alwaysShowLabel; // 0x80
};

struct FMovieSceneMarkedFrame {
	FFrameNumber FrameNumber; // 0x0
	FString Label; // 0x8
};

struct FYFilterRuntimeSettings {
	FString m_archetypeID; // 0x0
	FString m_userId; // 0x10
	EYCustomizationModelType m_modelState; // 0x20
	EYSortingRequestType m_sortingRequest; // 0x21
	bool m_sortAlphabetical; // 0x22
	bool m_onlyShowReleasedItems; // 0x23
	bool m_checkItemStates; // 0x24
};

struct FNode {
	FName Name; // 0x0
	FName ParentName; // 0x8
	FTransform Transform; // 0x10
	FString DisplayName; // 0x40
	bool bAdvanced; // 0x50
};

struct FSpectatorReservation {
	FUniqueNetIdRepl SpectatorId; // 0x0
	FPlayerReservation Spectator; // 0x28
};

struct FYPlayerSet {
	FString ID; // 0x0
	FString UserId; // 0x10
	FString kit; // 0x20
	FString shield; // 0x30
	FString helmet; // 0x40
	FString weaponOne; // 0x50
	FString weaponTwo; // 0x60
	FString bag; // 0x70
	FString bagItemsAsJsonStr; // 0x80
	FString safeItemsAsJsonStr; // 0x90
};

struct FStructSerializerSetTestStruct {
	TSet<FString> StrSet; // 0x0
	TSet<int32_t> IntSet; // 0x50
	TSet<FName> NameSet; // 0xa0
	TSet<FStructSerializerBuiltinTestStruct> StructSet; // 0xf0
};

struct FYEvaluationResult {
	float m_lastTimeEvaluated; // 0x0
	int32_t m_overAllScore; // 0x4
	TMap<EYActivityType, int32_t> m_occupiedLocationsCount; // 0x8
	TMap<EYActivityType, int32_t> m_scorePerType; // 0x58
};

struct FYUIRankedSeasonData {
	FString m_seasonName; // 0x0
	TMap<EYMatchmakeGameModeType, FYRankEntries> m_rankDataPerGameMode; // 0x10
};

struct FPoseData {
	TArray<FTransform> LocalSpacePose; // 0x0
	TMap<int32_t, int32_t> TrackToBufferIndex; // 0x10
	TArray<float> CurveData; // 0x60
};

struct FAnimNode_LegIK : FAnimNode_SkeletalControlBase {
	float ReachPrecision; // 0xc8
	int32_t MaxIterations; // 0xcc
	TArray<FAnimLegIKDefinition> LegsDefinition; // 0xd0
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

struct FChaosBreakingEventRequestSettings {
	int32_t MaxNumberOfResults; // 0x0
	float MinRadius; // 0x4
	float MinSpeed; // 0x8
	float MinMass; // 0xc
	float MaxDistance; // 0x10
	EChaosBreakingSortMethod SortMethod; // 0x14
};

struct FYHitAngleData {
	float m_dotValue; // 0x0
	float m_angle; // 0x4
	bool m_isRight; // 0x8
};

struct FYTechTreeNodesUpdated {
	FString UserId; // 0x0
	TArray<FYTechTreeNodeStatus> updatedNodes; // 0x10
};

struct FYAccountLinking : FYBaseAnalyticsEvent {
	FString platform_user_id; // 0xa8
	FString user_name; // 0xb8
	FString linked_user_id; // 0xc8
	FString linked_platform_user_id; // 0xd8
	FString Error; // 0xe8
};

struct FWaterBodyWeightmapSettings {
	float FalloffWidth; // 0x0
	float EdgeOffset; // 0x4
	UTexture2D* ModulationTexture; // 0x8
	float TextureTiling; // 0x10
	float TextureInfluence; // 0x14
	float Midpoint; // 0x18
	float FinalOpacity; // 0x1c
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

struct FYRerollDailyIncompleteChallengeClient {
	FString challengeName; // 0x0
};

struct FBuoyancyData {
	TArray<FSphericalPontoon> Pontoons; // 0x0
	float BuoyancyCoefficient; // 0x10
	float BuoyancyDamp; // 0x14
	float BuoyancyDamp2; // 0x18
	float BuoyancyRampMinVelocity; // 0x1c
	float BuoyancyRampMaxVelocity; // 0x20
	float BuoyancyRampMax; // 0x24
	float MaxBuoyantForce; // 0x28
	float WaterShorePushFactor; // 0x2c
	float WaterVelocityStrength; // 0x30
	float MaxWaterForce; // 0x34
	float DragCoefficient; // 0x38
	float DragCoefficient2; // 0x3c
	float AngularDragCoefficient; // 0x40
	float MaxDragSpeed; // 0x44
	bool bApplyDragForcesInWater; // 0x48
};

struct FMarkerSyncData {
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x0
};

struct FAnimNode_PoseBlendNode : FAnimNode_PoseHandler {
	FPoseLink SourcePose; // 0x80
	EAlphaBlendOption BlendOption; // 0x90
	UCurveFloat* CustomCurve; // 0x98
};

struct FYDebugAddFactionProgressRequest {
	FString factionId; // 0x0
	int32_t reputationIncrement; // 0x10
};

struct FPowerIKBoneLimit {
	FName BoneName; // 0x0
	float Stiffness; // 0x8
};

struct FInputActionKeyMapping {
	FName ActionName; // 0x0
	char bShift : 1; // 0x8
	char bCtrl : 1; // 0x8
	char bAlt : 1; // 0x8
	char bCmd : 1; // 0x8
	FKey Key; // 0x10
	int32_t R; // 0x28
	int32_t G; // 0x2c
	int32_t B; // 0x30
};

struct FChaosDebugSubstepControl {
	bool bPause; // 0x0
	bool bSubstep; // 0x1
	bool bStep; // 0x2
};

struct FMaterialTextureInfo {
	float SamplingScale; // 0x0
	int32_t UVChannelIndex; // 0x4
	FName TextureName; // 0x8
};

struct FRigUnit_SetControlVisibility : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	FString Pattern; // 0x78
	bool bVisible; // 0x88
	TArray<FCachedRigElement> CachedControlIndices; // 0x90
};

struct FServerGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FHorizonTweenEventRotatorParameters : FHorizonTweenEventTweenListImplementParameters {
	TArray<FRotator> TweenStartList; // 0x8
	TArray<FRotator> TweenEndList; // 0x18
	EHorizonTweenRotatorConstraints ConstraintType; // 0x28
	FHorizonTweenEventTransformParam TransformParam; // 0x2c
	FHorizonTweenEventCustomCurve CustomTweenCurve; // 0xc0
	bool bUseShortestPath; // 0x148
};

struct FYDebugResetFactionProgressResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString factionId; // 0x20
	int32_t reputation; // 0x30
};

struct FYDebugActivateContractRequest {
	FString UserId; // 0x0
	FString contractId; // 0x10
};

struct FRigControl : FRigElement {
	ERigControlType ControlType; // 0x18
	FName DisplayName; // 0x1c
	FName ParentName; // 0x24
	int32_t ParentIndex; // 0x2c
	FName SpaceName; // 0x30
	int32_t SpaceIndex; // 0x38
	FTransform OffsetTransform; // 0x40
	FRigControlValue InitialValue; // 0x70
	FRigControlValue Value; // 0xf0
	ERigControlAxis PrimaryAxis; // 0x170
	bool bIsCurve; // 0x171
	bool bAnimatable; // 0x172
	bool bLimitTranslation; // 0x173
	bool bLimitRotation; // 0x174
	bool bLimitScale; // 0x175
	bool bDrawLimits; // 0x176
	FRigControlValue MinimumValue; // 0x180
	FRigControlValue MaximumValue; // 0x200
	bool bGizmoEnabled; // 0x280
	bool bGizmoVisible; // 0x281
	FName GizmoName; // 0x284
	FTransform GizmoTransform; // 0x290
	FLinearColor GizmoColor; // 0x2c0
	TArray<int32_t> Dependents; // 0x2d0
	bool bIsTransientControl; // 0x2e0
	UEnum* ControlEnum; // 0x2e8
};

struct FRigUnit_FitChainToCurve_WorkData {
	float ChainLength; // 0x0
	TArray<FVector> ItemPositions; // 0x8
	TArray<float> ItemSegments; // 0x18
	TArray<FVector> CurvePositions; // 0x28
	TArray<float> CurveSegments; // 0x38
	TArray<FCachedRigElement> CachedItems; // 0x48
	TArray<int32_t> ItemRotationA; // 0x58
	TArray<int32_t> ItemRotationB; // 0x68
	TArray<float> ItemRotationT; // 0x78
	TArray<FTransform> ItemLocalTransforms; // 0x88
};

struct FYStationReadyResult {
	FString serverAddress; // 0x0
};

struct FStaticComponentMaskValue {
	bool R; // 0x0
	bool G; // 0x1
	bool B; // 0x2
	bool A; // 0x3
};

struct FAdminListVirtualCurrencyTypesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FServerGetPlayerCombinedInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* InfoResultPayload; // 0x8
	FString PlayFabId; // 0x10
};

struct FRigUnit_MathFloatIsNearlyEqual : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float Tolerance; // 0x10
	bool Result; // 0x14
};

struct FGroupsListGroupApplicationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FCustomizedToolMenuSection {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FRigUnit_StartsWith : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Start; // 0x10
	bool Result; // 0x18
};

struct FYGrant {
	FString ID; // 0x0
	FString grantRowId; // 0x10
	EYClaimGrantState claimState; // 0x20
};

struct FTTTrackBase {
	FName TrackName; // 0x8
	bool bIsExternalCurve; // 0x10
};

struct FYPlayerQuartersLevelResultData {
	FString UserId; // 0x0
	int32_t Level; // 0x10
	FYTimestamp upgradeStartedTime; // 0x18
};

struct FPrefabricatorActorData {
	FGuid PrefabItemID; // 0x0
	FTransform RelativeTransform; // 0x10
	FString ClassPath; // 0x40
	FSoftClassPath ClassPathRef; // 0x50
	TArray<UPrefabricatorProperty*> Properties; // 0x68
	TArray<FPrefabricatorComponentData> Components; // 0x78
};

struct FClientGetCharacterLeaderboardResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FMathRBFInterpolateQuatVector_Target {
	FQuat Target; // 0x0
	FVector Value; // 0x10
};

struct FCloudScriptExecuteFunctionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Error; // 0x8
	int32_t ExecutionTimeMilliseconds; // 0x10
	FString FunctionName; // 0x18
	UPlayFabJsonObject* FunctionResult; // 0x28
	bool FunctionResultTooLarge; // 0x30
};

struct FClientGetContentDownloadUrlResult : FPlayFabResultCommon {
	FString URL; // 0x8
};

struct FMultiplayerListContainerImagesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FStaticMaterialLayersParameter : FStaticParameterBase {
	FMaterialLayersFunctions Value; // 0x28
};

struct FHorizonTweenEventParameters {
	FName TweenEventName; // 0x0
	EHorizonTweenLerpMode LerpMode; // 0x8
	TArray<float> LerpModeExtraParameterList; // 0x10
	EHorizonTweenPlayMode PlayMode; // 0x20
	int32_t NumOfLoop; // 0x24
	float Duration; // 0x28
	float DelayInit; // 0x2c
	float DelayLoop; // 0x30
	bool bPauseOnTweenLoop; // 0x34
};

struct FYAIBaseAnalyticsEvent : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8
	int32_t location_y; // 0xac
	int32_t location_z; // 0xb0
	int32_t time_since_match_start; // 0xb4
	FString ai_name; // 0xb8
	FString ai_type; // 0xc8
};

struct FRigUnit_MathTransformToEulerTransform : FRigUnit_MathTransformBase {
	FTransform Value; // 0x10
	FEulerTransform Result; // 0x40
};

struct FYTournamentDataRemoveUser {
	FString UserId; // 0x0
};

struct FMathRBFInterpolateQuatXform_Target {
	FQuat Target; // 0x0
	FTransform Value; // 0x10
};

struct FServerModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FGerstnerWave {
	float WaveLength; // 0x0
	float Amplitude; // 0x4
	float Steepness; // 0x8
	FVector Direction; // 0xc
	FVector2D WaveVector; // 0x18
	float WaveSpeed; // 0x20
	float WKA; // 0x24
	float Q; // 0x28
	float PhaseOffset; // 0x2c
};

struct FClientCurrentGamesResult : FPlayFabResultCommon {
	int32_t GameCount; // 0x8
	TArray<UPlayFabJsonObject*> Games; // 0x10
	int32_t PlayerCount; // 0x20
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

struct FVMExternalFunctionBindingInfo {
	FName Name; // 0x0
	FName OwnerName; // 0x8
	TArray<bool> InputParamLocations; // 0x10
	int32_t NumOutputs; // 0x20
	TArray<FVMFunctionSpecifier> FunctionSpecifiers; // 0x28
};

struct FDialogueWaveParameter {
	UDialogueWave* DialogueWave; // 0x0
	FDialogueContext Context; // 0x8
};

struct FInAppPurchaseProductRequest {
	FString ProductIdentifier; // 0x0
	bool bIsConsumable; // 0x10
};

struct FMovieSceneMarginSectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneFloatChannel TopCurve; // 0x38
	FMovieSceneFloatChannel LeftCurve; // 0xd8
	FMovieSceneFloatChannel RightCurve; // 0x178
	FMovieSceneFloatChannel BottomCurve; // 0x218
	EMovieSceneBlendType BlendType; // 0x2b8
};

struct FUnderwaterPostProcessSettings {
	bool bEnabled; // 0x0
	float Priority; // 0x4
	float BlendRadius; // 0x8
	float BlendWeight; // 0xc
	FPostProcessSettings PostProcessSettings; // 0x10
	UMaterialInterface* UnderwaterPostProcessMaterial; // 0x560
};

struct FYWeaponRarityUpgradesModCollectionEntry {
	TArray<FDataTableRowHandle> m_unlockedMods; // 0x0
	TArray<FDataTableRowHandle> m_potentialUpgrades; // 0x10
};

struct FYRotationObjectEntry {
	FRotator m_originalRotation; // 0x0
	USceneComponent* m_component; // 0x10
};

struct FYDebugAddCurrency {
	int32_t Value; // 0x0
};

struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit {
	FQuat Argument; // 0x10
	FVector Axis; // 0x20
	float Angle; // 0x2c
};

struct FYMovementModeDataChanged {
	EMovementMode m_newMovementMode; // 0x0
	EMovementMode m_oldMovementMode; // 0x1
	float m_timeSinceMovementModeChanged; // 0x4
};

struct FEquirectProps {
	FBox2D LeftUVRect; // 0x0
	FBox2D RightUVRect; // 0x14
	FVector2D LeftScale; // 0x28
	FVector2D RightScale; // 0x30
	FVector2D LeftBias; // 0x38
	FVector2D RightBias; // 0x40
};

struct FYChallengeCompletedEvent : FYBaseAnalyticsEvent {
	FName quest_id; // 0xa8
	int32_t quest_category; // 0xb0
	int32_t season_xp; // 0xb4
};

struct FYOnboardingRewardEntry {
	EYRewardType m_rewardType; // 0x0
	FDataTableRowHandle m_rewardRowHandle; // 0x8
	int32_t m_amount; // 0x18
};

struct FRigUnit_PointSimulation : FRigUnit_SimBaseMutable {
	TArray<FCRSimPoint> Points; // 0x68
	TArray<FCRSimLinearSpring> Links; // 0x78
	TArray<FCRSimPointForce> Forces; // 0x88
	TArray<FCRSimSoftCollision> CollisionVolumes; // 0x98
	float SimulatedStepsPerSecond; // 0xa8
	ECRSimPointIntegrateType IntegratorType; // 0xac
	float VerletBlend; // 0xb0
	TArray<FRigUnit_PointSimulation_BoneTarget> BoneTargets; // 0xb8
	bool bLimitLocalPosition; // 0xc8
	bool bPropagateToChildren; // 0xc9
	FVector PrimaryAimAxis; // 0xcc
	FVector SecondaryAimAxis; // 0xd8
	FRigUnit_PointSimulation_DebugSettings DebugSettings; // 0xf0
	FCRFourPointBezier Bezier; // 0x140
	FRigUnit_PointSimulation_WorkData WorkData; // 0x170
};

struct FYGetPlayerQuartersLevel {
	FString UserId; // 0x0
};

struct FSourceEffectRingModulationSettings {
	ERingModulatorTypeSourceEffect ModulatorType; // 0x0
	float Frequency; // 0x4
	float Depth; // 0x8
	float DryLevel; // 0xc
	float WetLevel; // 0x10
	UAudioBus* AudioBusModulator; // 0x18
};

struct FYPlatformStoreEntry {
	EYGamePlatform m_platform; // 0x0
	FString m_offerId; // 0x8
	FString m_entitlementId; // 0x18
};

struct FYQuestDataDataTableRow : FYDataTableRowBase {
	FText m_questName; // 0x10
	TArray<FDataTableRowHandle> m_questTaskData; // 0x28
	FDataTableRowHandle m_reward; // 0x38
	FDataTableRowHandle m_followQuest; // 0x48
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

struct FRigUnit_DebugHierarchy : FRigUnit_DebugBaseMutable {
	float Scale; // 0x68
	FLinearColor Color; // 0x6c
	float Thickness; // 0x7c
	FTransform WorldOffset; // 0x80
	bool bEnabled; // 0xb0
};

struct FClientLoginWithAppleRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	FString IdentityToken; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FPlatformInterfaceDelegateResult {
	bool bSuccessful; // 0x0
	FPlatformInterfaceData Data; // 0x8
};

struct FNavigationBarOption {
	FText m_buttonLabel; // 0x0
	FName m_buttonId; // 0x18
};

struct FMovieScenePossessable {
	TArray<FName> Tags; // 0x0
	FGuid Guid; // 0x10
	FString Name; // 0x20
	UObject* PossessedObjectClass; // 0x30
	FGuid ParentGuid; // 0x38
};

struct FYProspectorLevelData {
	int32_t m_level; // 0x0
	int32_t m_currentXP; // 0x4
	int32_t m_xpLeftForNextLevel; // 0x8
	int32_t m_xpRequiredForNextLevel; // 0xc
};

struct FClientGetLeaderboardAroundCharacterRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	int32_t MaxResultsCount; // 0x28
	FString StatisticName; // 0x30
};

struct FYRadialDamageEntry {
	AActor* m_hitActor; // 0x0
	UYDamageComponent* m_hitDamageComponent; // 0x8
	FVector m_hitLocation; // 0x10
	FHitResult m_hitResult; // 0x1c
	char m_surfaceType; // 0xa8
};

struct FRigUnit_SetMultiControlFloat_Entry {
	FName Control; // 0x0
	float FloatValue; // 0x8
};

struct FYDebugGiveRerollTokensResponse {
	FString UserId; // 0x0
	int32_t playerNumOfRerollTokens; // 0x10
};

struct FMultiplayerCreateRemoteUserRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ExpirationTime; // 0x20
	FString Region; // 0x30
	FString Username; // 0x40
	FString VmId; // 0x50
};

struct FYCharacterRotationUpdateRequestData {
	float m_deltaTime; // 0x0
	FVector2D m_rotationDelta; // 0x4
	bool m_resetRotation; // 0xc
};

struct FClientLoginWithEmailAddressRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	UPlayFabJsonObject* InfoRequestParameters; // 0x20
	FString Password; // 0x28
};

struct FRigUnit_SetMultiControlRotator_Entry {
	FName Control; // 0x0
	FRotator Rotator; // 0x8
	EBoneGetterSetterMode Space; // 0x14
};

struct FClientUpdateUserTitleDisplayNameRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString DisplayName; // 0x10
};

struct FRigUnit_Timeline : FRigUnit_SimBase {
	float Speed; // 0x8
	float Time; // 0xc
	float AccumulatedValue; // 0x10
};

struct FRigUnit_SetBoneTranslation : FRigUnitMutable {
	FName Bone; // 0x68
	FVector Translation; // 0x70
	EBoneGetterSetterMode Space; // 0x7c
	float weight; // 0x80
	bool bPropagateToChildren; // 0x84
	FCachedRigElement CachedBone; // 0x88
};

struct FLoadingScreenDescription {
	float MinimumLoadingScreenDisplayTime; // 0x0
	bool bAutoCompleteWhenLoadingCompletes; // 0x4
	bool bMoviesAreSkippable; // 0x5
	bool bIndividualMovieSkippable; // 0x6
	bool bWaitForManualStop; // 0x7
	EMoviePlaybackType PlaybackType; // 0x8
	TArray<FString> MoviePaths; // 0x10
	TArray<FString> FirstLoginMoviePaths; // 0x20
	TArray<bool> ForceShowMovies; // 0x30
	bool bShowUIOverlay; // 0x40
	FText LoadingText; // 0x48
	TArray<FSoftObjectPath> Images; // 0x60
	EStretch ImageStretch; // 0x70
	FLinearColor BackgroundColor; // 0x74
	FLinearColor TipBackgroundColor; // 0x84
	bool m_allowEngineTick; // 0x94
	bool m_requireForceStop; // 0x95
};

struct FYGetPlayersActiveRankedSeasonBattleServerRequest {
	TArray<FString> otherPlayersIds; // 0x0
	FString playerOwnId; // 0x10
};

struct FInAppPurchaseRestoreInfo2 {
	FString ItemName; // 0x0
	FString ItemId; // 0x10
	FString ValidationInfo; // 0x20
};

struct FMovieSceneBindingOverrideData {
	FMovieSceneObjectBindingID ObjectBindingID; // 0x0
	TWeakObjectPtr<UObject> Object; // 0x18
	bool bOverridesDefault; // 0x20
};

struct FClientConsumeXboxEntitlementsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString XboxToken; // 0x20
};

struct FYRankedSeasonRow : FYDataTableRowBase {
	FText m_rankedSeasonName; // 0x10
	FString m_startDateTime; // 0x28
	FString m_endDateTime; // 0x38
	int64_t m_utcStartDateTimeTicks; // 0x48
	int64_t m_utcEndDateTimeTicks; // 0x50
	TArray<FYEndOfSeasonReward> m_endSeasonRewards; // 0x58
};

struct FAdminGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FDataTableCategoryHandle {
	UDataTable* DataTable; // 0x0
	FName ColumnName; // 0x8
	FName RowContents; // 0x10
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

struct FClientStartPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Contents; // 0x8
	FString OrderId; // 0x18
	TArray<UPlayFabJsonObject*> PaymentOptions; // 0x28
	UPlayFabJsonObject* VirtualCurrencyBalances; // 0x38
};

struct FNiagaraVariableInfo {
	FNiagaraVariable Variable; // 0x0
	FText Definition; // 0x20
	UNiagaraDataInterface* DataInterface; // 0x38
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

struct FClientUnlockContainerInstanceRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString ContainerItemInstanceId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString KeyItemInstanceId; // 0x40
};

struct FARFaceUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FVector LeftEyePosition; // 0x18
	FVector RightEyePosition; // 0x24
	FVector LookAtTarget; // 0x30
};

struct FMemberReference {
	UObject* MemberParent; // 0x0
	FString MemberScope; // 0x8
	FName MemberName; // 0x18
	FGuid MemberGuid; // 0x20
	bool bSelfContext; // 0x30
	bool bWasDeprecated; // 0x31
};

struct FClientUnlinkPSNAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMultiplayerRolloverContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FClientGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FRigUnit_FitChainToCurve_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	FLinearColor CurveColor; // 0x8
	FLinearColor SegmentsColor; // 0x18
	FTransform WorldOffset; // 0x30
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

struct FYFriendAction {
	FString internalUserId; // 0x0
	EYFriendState stateToChangeTo; // 0x10
};

struct FInputBlendPose {
	TArray<FBranchFilter> BranchFilters; // 0x0
};

struct FDatasmithMeshSectionInfoTemplate {
	int32_t MaterialIndex; // 0x0
};

struct FRigUnit_SlideChainPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	float SlideAmount; // 0x78
	bool bPropagateToChildren; // 0x7c
	FRigUnit_SlideChain_WorkData WorkData; // 0x80
};

struct FCurveTrack {
	FName CurveName; // 0x0
	TArray<float> CurveWeights; // 0x8
};

struct FPackedNormal {
	char X; // 0x0
	char Y; // 0x1
	char Z; // 0x2
	char W; // 0x3
};

struct FDynamicTextureInstance : FStreamableTextureInstance {
	UTexture2D* Texture; // 0x28
	bool bAttached; // 0x30
	float OriginalRadius; // 0x34
};

struct FAnimationActiveTransitionEntry {
	UBlendProfile* BlendProfile; // 0xb8
};

struct FNiagaraScriptExecutionPaddingInfo {
	uint16_t SrcOffset; // 0x0
	uint16_t DestOffset; // 0x2
	uint16_t SrcSize; // 0x4
	uint16_t DestSize; // 0x6
};

struct FClientLinkAppleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString IdentityToken; // 0x18
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

struct FYDebugRemoveAllActiveContractsResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FString> cancelledContractsIds; // 0x20
};

struct FYCollectibleLootBucket {
	float m_weight; // 0x0
	FDataTableRowHandle m_bucketRowHandle; // 0x8
};

struct FRigUnit_MathIntLessEqual : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
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

struct FSkeletalMeshSamplingRegion {
	FName Name; // 0x0
	int32_t LODIndex; // 0x8
	char bSupportUniformlyDistributedSampling : 1; // 0xc
	TArray<FSkeletalMeshSamplingRegionMaterialFilter> MaterialFilters; // 0x10
	TArray<FSkeletalMeshSamplingRegionBoneFilter> BoneFilters; // 0x20
};

struct FYGetInventory {
	FString UserId; // 0x0
};

struct FNiagaraMaterialAttributeBinding {
	FName MaterialParameterName; // 0x0
	FNiagaraVariableBase NiagaraVariable; // 0x8
	FNiagaraVariableBase ResolvedNiagaraVariable; // 0x14
	FNiagaraVariableBase NiagaraChildVariable; // 0x20
};

struct FYDebugResetGenerator {
	FString UserId; // 0x0
	FString generatorId; // 0x10
};

struct FYQueueuingPlayers {
	TArray<FYQueueDetails> queues; // 0x0
	FString exchangeActive; // 0x10
};

struct FYWeaponAnalyticsEvent : FYBaseAnalyticsEvent {
	FName weapon_id; // 0xa8
	FString weapon_name; // 0xb0
	FString item_rarity; // 0xc0
	int32_t pickup_time; // 0xd0
	int32_t pickup_time_since_user_joined; // 0xd4
	int32_t shots_fired; // 0xd8
	int32_t damage_to_player; // 0xdc
	int32_t damage_to_AI; // 0xe0
	int32_t hits; // 0xe4
	int32_t hits_pvp; // 0xe8
	int32_t weakspot_hits; // 0xec
	int32_t weakspot_hits_pvp; // 0xf0
	int32_t num_players_kill; // 0xf4
	int32_t num_AI_kill; // 0xf8
	FString weapon_skin_id; // 0x100
	FString weapon_skin_name; // 0x110
	int32_t out_of_ammo; // 0x120
	int32_t ammo_left; // 0x124
};

struct FInterpCurveTwoVectors {
	TArray<FInterpCurvePointTwoVectors> Points; // 0x0
	bool bIsLooped; // 0x10
	float LoopKeyOffset; // 0x14
};

struct FYPlatformEntry {
	EYPlatformTypes Type; // 0x0
	FString ID; // 0x8
};

struct FServerGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FYGameplayTagToLootPoolAssociation {
	FGameplayTag m_gameplayTag; // 0x0
	TArray<FString> m_lootTags; // 0x8
};

struct FGenericStruct {
	int32_t Data; // 0x0
};

struct FInterpCurvePointVector2D {
	float InVal; // 0x0
	FVector2D OutVal; // 0x4
	FVector2D ArriveTangent; // 0xc
	FVector2D LeaveTangent; // 0x14
	EInterpCurveMode InterpMode; // 0x1c
};

struct FAnimNotifyEventReference {
	UObject* NotifySource; // 0x8
};

struct FAnimCurveParam {
	FName Name; // 0x0
};

struct FMatchmakerStartGameResponse : FPlayFabResultCommon {
	FString GameID; // 0x8
	FString ServerIPV4Address; // 0x18
	FString ServerIPV6Address; // 0x28
	int32_t ServerPort; // 0x38
	FString ServerPublicDNSName; // 0x40
};

struct FServerSetGameServerInstanceDataRequest : FPlayFabRequestCommon {
	FString GameServerData; // 0x8
	FString LobbyId; // 0x18
};

struct FServerGetCatalogItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
};

struct FYContractProgressData {
	FString contractId; // 0x0
	TArray<int32_t> newProgress; // 0x10
};

struct FNiagaraVariableDataInterfaceBinding {
	FNiagaraVariable BoundVariable; // 0x0
};

struct FYEQSParameterFloat {
	FName m_name; // 0x0
	float m_value; // 0x8
};

struct FTrackedGeometryGroup {
	AARActor* ARActor; // 0x0
	UARComponent* ARComponent; // 0x8
	UARTrackedGeometry* TrackedGeometry; // 0x10
};

struct FServerGetRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString TableIDs; // 0x18
};

struct FMovieSceneSequenceHierarchy {
	FMovieSceneSequenceHierarchyNode RootNode; // 0x0
	FMovieSceneSubSequenceTree Tree; // 0x18
	TMap<FMovieSceneSequenceID, FMovieSceneSubSequenceData> SubSequences; // 0x78
	TMap<FMovieSceneSequenceID, FMovieSceneSequenceHierarchyNode> Hierarchy; // 0xc8
};

struct FRigUnit_SetControlVector2D : FRigUnitMutable {
	FName Control; // 0x68
	float weight; // 0x70
	FVector2D Vector; // 0x74
	FCachedRigElement CachedControlIndex; // 0x7c
};

struct FYBIHook_EscapeTriggered : FYBaseAnalyticsEvent {
	int32_t time_since_match_start; // 0xa8
	int32_t time_since_user_joined; // 0xac
	int32_t position_x; // 0xb0
	int32_t position_y; // 0xb4
	int32_t position_z; // 0xb8
	int32_t player_position_x; // 0xbc
	int32_t player_position_y; // 0xc0
	int32_t player_position_z; // 0xc4
	int32_t Status; // 0xc8
	int32_t cooldown_duration; // 0xcc
	FString escape_ship_id; // 0xd0
	FString evac_id; // 0xe0
};

struct FAdminExportMasterPlayerDataResult : FPlayFabResultCommon {
	FString JobReceiptId; // 0x8
};

struct FVirtualTextureBuildSettings {
	int32_t TileSize; // 0x0
	int32_t TileBorderSize; // 0x4
	bool bEnableCompressCrunch; // 0x8
	bool bEnableCompressZlib; // 0x9
};

struct FServerGetPlayFabIDsFromSteamIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FYAITurnAnimationRow : FYDataTableRowBase {
	TMap<EYAIState, FYAITurnAnimationsData> m_turnsAnimationPerState; // 0x10
};

struct FExperimentationGetTreatmentAssignmentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FDirectLinkMsg_OpenStreamAnswer {
	int32_t RecipientStreamPort; // 0x0
	bool bAccepted; // 0x4
	FString Error; // 0x8
	int32_t OpenedStreamPort; // 0x18
};

struct FRigUnit_GetControlVector2D : FRigUnit {
	FName Control; // 0x8
	FVector2D Vector; // 0x10
	FVector2D Minimum; // 0x18
	FVector2D Maximum; // 0x20
	FCachedRigElement CachedControlIndex; // 0x28
};

struct FEngineShowFlagsSetting {
	FString ShowFlagName; // 0x0
	bool Enabled; // 0x10
};

struct FLandscapeInfoLayerSettings {
	ULandscapeLayerInfoObject* LayerInfoObj; // 0x0
	FName LayerName; // 0x8
};

struct FAutoCompleteNode {
	int32_t IndexChar; // 0x0
	TArray<int32_t> AutoCompleteListIndices; // 0x8
};

struct FAnimNode_LinkedInputPose : FAnimNode_Base {
	FName Name; // 0x10
	FName Graph; // 0x18
	FPoseLink InputPose; // 0x20
};

struct FYRemoveInventoryItemRequest {
	FString UserId; // 0x0
	TArray<FString> itemIdsToRemove; // 0x10
};

struct FAdminBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FRigUnit_MathQuaternionSelectBool : FRigUnit_MathQuaternionBase {
	bool Condition; // 0x8
	FQuat IfTrue; // 0x10
	FQuat IfFalse; // 0x20
	FQuat Result; // 0x30
};

struct FYCustomItemInfo {
	FString ItemId; // 0x0
	FString baseItemId; // 0x10
	FString vanityId; // 0x20
	FString secondaryVanityId; // 0x30
	int32_t Level; // 0x40
	int32_t Amount; // 0x44
	int32_t durability; // 0x48
	FYModItems modData; // 0x50
	FString insuranceId; // 0x60
};

struct FServerAuthenticateSessionTicketRequest : FPlayFabRequestCommon {
	FString SessionTicket; // 0x8
};

struct FDelegateArray {
	TArray<FDelegate> Delegates; // 0x0
};

struct FSourceEffectBitCrusherBaseSettings {
	float SampleRate; // 0x0
	float BitDepth; // 0x4
};

struct FRigUnit_MathFloatToInt : FRigUnit_MathFloatBase {
	float Value; // 0x8
	int32_t Result; // 0xc
};

struct FDirectoryPath {
	FString Path; // 0x0
};

struct FRigUnit_MathColorFromFloat : FRigUnit_MathColorBase {
	float Value; // 0x8
	FLinearColor Result; // 0xc
};

struct FRigUnit_Distance_VectorVector : FRigUnit {
	FVector Argument0; // 0x8
	FVector Argument1; // 0x14
	float Result; // 0x20
};

struct FYKilledAIAnalyticsEvent : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8
	int32_t location_y; // 0xac
	int32_t location_z; // 0xb0
	int32_t location_x_killer; // 0xb4
	int32_t location_y_killer; // 0xb8
	int32_t location_z_killer; // 0xbc
	int32_t time_since_match_start; // 0xc0
	int32_t time_since_user_joined; // 0xc4
	int32_t time_started_to_get_killed_by_player; // 0xc8
	int32_t AI_activity; // 0xcc
	FString ai_name; // 0xd0
	FString ai_archetype; // 0xe0
	int32_t ai_damage_dealt; // 0xf0
	int32_t health_on_started_to_get_killed_by_player; // 0xf4
	FString player_item; // 0xf8
	FString player_item_id; // 0x108
	int32_t hits_ai; // 0x118
	int32_t weakspot_hits_ai; // 0x11c
	int32_t squadAI_id; // 0x120
};

struct FYCharacterCustomizationBodyPart {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_materialVariation; // 0x10
};

struct FYSceneCameraDataRuntimeData {
	FYSceneCameraDataAssociation m_defaultDataAssociation; // 0x0
	FString m_desiredSuffix; // 0x10
};

struct FDistanceDatum {
	float FadeInDistanceStart; // 0x0
	float FadeInDistanceEnd; // 0x4
	float FadeOutDistanceStart; // 0x8
	float FadeOutDistanceEnd; // 0xc
	float Volume; // 0x10
};

struct FAIDynamicParam {
	FName ParamName; // 0x0
	EAIParamType ParamType; // 0x8
	float Value; // 0xc
	FBlackboardKeySelector BBKey; // 0x10
};

struct FYAIBarkAudioInfo {
	FDataTableRowHandle m_barkSound; // 0x0
	float m_barkIntervalMin; // 0x10
	float m_barkIntervalMax; // 0x14
};

struct FYOptionsMenuData {
	UYNavigationCommand* m_commandClass; // 0x0
};

struct FYAbilityActionDataTableRow : FYDataTableRowBase {
	FDataTableRowHandle m_transportRow; // 0x10
	AYPlacementActor* m_placementActorClass; // 0x20
	float m_placementSize; // 0x28
	float m_attachSkeletalMeshTime; // 0x2c
	float m_activeTime; // 0x30
	float m_timeToActivateFromReady; // 0x34
	bool m_traceTransportTowardsGround; // 0x38
	float m_directionAdditionalOffset; // 0x3c
	float m_velocityLocationMultiplier; // 0x40
	float m_forwardToUpAddition; // 0x44
	float m_zOffsetAddition; // 0x48
	bool m_startLocationFromOwnerRoot; // 0x4c
	bool m_adjustStartLocationBasedOnTrace; // 0x4d
	bool m_isClientSidePredicted; // 0x4e
	ECollisionChannel m_transportCollisionChannel; // 0x4f
	TArray<FYGameplayAttributeModifier> m_attributeModifiersToApply; // 0x50
	TArray<FYGameplayAttributeModifier> m_attributeModifiersToApplyAtDeactivation; // 0x60
	bool m_removeFromPerceptionSystemWhenActive; // 0x70
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

struct FYModSettingsEntry {
	TSoftObjectPtr<UTexture2D> m_icon; // 0x0
	FDataTableRowHandle m_noDataTableRowHandle; // 0x28
};

struct FMultiplayerListCertificateSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FAdminGetTasksResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Tasks; // 0x8
};

struct FYReplicatedMovementActor {
	AActor* m_actorBase; // 0x0
	float m_actorOffset; // 0x8
};

struct FServerGetUserBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FYBoardContractInitData {
	FString contractId; // 0x0
	bool anotherContractOfTheSameFactionIsActive; // 0x10
	bool contractIsLockedDueToLowFactionReputation; // 0x11
};

struct FElementID {
	int32_t IDValue; // 0x0
};

struct FLightmassDirectionalLightSettings : FLightmassLightSettings {
	float LightSourceAngle; // 0xc
};

struct FAdminGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
};

struct FYWeaponAnimationPlayRuntimeData {
	FYWeaponAnimationStaticData m_staticData; // 0x0
	TArray<UAnimMontage*> m_weaponAnimationsStack; // 0x68
	TArray<UAnimMontage*> m_playerFirstPersonStack; // 0x78
	TArray<UAnimMontage*> m_thirdPersonStack; // 0x88
	TArray<UAnimMontage*> m_thirdPersonWeaponStack; // 0x98
};

struct FYPassiveGenerator {
	FString generatorId; // 0x0
	FYTimestamp lastClaimTime; // 0x10
};

struct FYTournamentDataResponse {
	FString UserId; // 0x0
	bool isAllowed; // 0x10
};

struct FMultiplayerUpdateBuildRegionRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* BuildRegion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
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

struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings {
	char bOverrideDistanceSettings : 1; // 0x48
	char bOverrideInstanceCountSettings : 1; // 0x48
	char bOverridePerSystemInstanceCountSettings : 1; // 0x48
	char bOverrideTimeSinceRendererSettings : 1; // 0x48
};

struct FRigUnit_SetControlTransform : FRigUnitMutable {
	FName Control; // 0x68
	float weight; // 0x70
	FTransform Transform; // 0x80
	EBoneGetterSetterMode Space; // 0xb0
	FCachedRigElement CachedControlIndex; // 0xb4
};

struct FYFPSMatchSummaryEvent : FYBaseAnalyticsEvent {
	int32_t time_seconds; // 0xa8
	int32_t time_disregarded_seconds; // 0xac
	float fps_average; // 0xb0
	float fps_frametime_average; // 0xb4
	float fps_frametime_quantile_26; // 0xb8
	float fps_frametime_quantile_51; // 0xbc
	float fps_frametime_quantile_76; // 0xc0
	float fps_percent_missed_vsyncs_thirty; // 0xc4
	float fps_percent_missed_vsyncs_sixty; // 0xc8
	float thread_game_average; // 0xcc
	float thread_draw_average; // 0xd0
	float thread_gpu_average; // 0xd4
	float bound_percent_thread_game; // 0xd8
	float bound_percent_thread_draw; // 0xdc
	float bound_percent_thread_gpu; // 0xe0
	float fps_frametime_max; // 0xe4
	float fps_frametime_min; // 0xe8
	int32_t fps_limit; // 0xec
	int32_t hitchframecount_game; // 0xf0
	int32_t hitchframecount_draw; // 0xf4
	int32_t hitchframecount_gpu; // 0xf8
	float gc_time_avg; // 0xfc
	float gc_time_max; // 0x100
	float gc_time_min; // 0x104
	float gc_time_percent_over_budget; // 0x108
	FString game_resolution; // 0x110
	int32_t display_mode; // 0x120
	bool vSync; // 0x124
	int32_t Preset; // 0x128
	int32_t resolution_quality; // 0x12c
	int32_t viewDistance_quality; // 0x130
	int32_t antialiasing_quality; // 0x134
	int32_t shadow_quality; // 0x138
	int32_t postprocess_quality; // 0x13c
	int32_t texture_quality; // 0x140
	int32_t effects_quality; // 0x144
	int32_t foliage_quality; // 0x148
	int32_t colorblind_type; // 0x14c
	float colorblind_severity; // 0x150
	bool colorblind_correct_deficiency; // 0x154
	bool colorblind_correction_with_deficiency; // 0x155
};

struct FYServerUsersConnected {
	TArray<FString> userIds; // 0x0
};

struct FMovieSceneGeometryCollectionParams {
	FSoftObjectPath GeometryCollectionCache; // 0x8
	FFrameNumber StartFrameOffset; // 0x20
	FFrameNumber EndFrameOffset; // 0x24
	float PlayRate; // 0x28
};

struct FMovieSceneSequenceReplProperties {
	FFrameTime LastKnownPosition; // 0x0
	EMovieScenePlayerStatus LastKnownStatus; // 0x8
	int32_t LastKnownNumLoops; // 0xc
};

struct FCollisionImpactData {
	TArray<FRigidBodyContactInfo> ContactInfos; // 0x0
	FVector TotalNormalImpulse; // 0x10
	FVector TotalFrictionImpulse; // 0x1c
	bool bIsVelocityDeltaUnderThreshold; // 0x28
};

struct FYSetActiveCharacterVanityRequest {
	FString UserId; // 0x0
	FYCharacterVanity desiredVanity; // 0x10
};

struct FYGrantGrantsResult {
	FString UserId; // 0x0
	TArray<FYCustomItemInfo> changedItems; // 0x10
	TArray<FYCurrencyItem> changedCurrencies; // 0x20
	bool successfullyGranted; // 0x30
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

struct FStructSerializerByteArray {
	int32_t Dummy1; // 0x0
	TArray<char> ByteArray; // 0x8
	int32_t Dummy2; // 0x18
	TArray<int8_t> Int8Array; // 0x20
	int32_t Dummy3; // 0x30
};

struct FBPEditorBookmarkNode {
	FGuid NodeGuid; // 0x0
	FGuid ParentGuid; // 0x10
	FText DisplayName; // 0x20
};

struct FProceduralFoliageInstance {
	FQuat Rotation; // 0x0
	FVector Location; // 0x10
	float Age; // 0x1c
	FVector Normal; // 0x20
	float Scale; // 0x2c
	UFoliageType* Type; // 0x30
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

struct FYInputStackRuntimeContext {
	UWidget* m_widget; // 0x0
	FDataTableRowHandle m_rowHandleAssociation; // 0x8
	bool m_uiOnly; // 0x18
	bool m_showCursor; // 0x19
	bool m_isActive; // 0x1a
	bool m_needToBeForcedClosed; // 0x1b
};

struct FYContractReward {
	FDataTableRowHandle m_rewardRowHandle; // 0x0
	EYItemRarityType m_itemRarity; // 0x10
	int32_t m_amount; // 0x14
	TSoftObjectPtr<UTexture2D> m_contractRewardIcon; // 0x18
};

struct FAIDataProviderBoolValue : FAIDataProviderTypedValue {
	bool DefaultValue; // 0x30
};

struct FRigUnit_MathIntNotEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FYServerReportResult {
	FYServerReport serverData; // 0x0
};

struct FYResetCharacterArchetypeResponse {
	FYCharacterVanity returnVanity; // 0x0
};

struct FYActivityCountEntry {
	FString m_stringIdentifier; // 0x0
	int32_t m_count; // 0x10
};

struct FFontRenderInfo {
	char bClipText : 1; // 0x0
	char bEnableShadow : 1; // 0x0
	FDepthFieldGlowInfo GlowInfo; // 0x4
};

struct FYMeteorActivityStats : FYBaseActivityStats {
	int32_t Status; // 0xb8
	int32_t player_position_x; // 0xbc
	int32_t player_position_y; // 0xc0
	int32_t player_position_z; // 0xc4
	int32_t time_since_user_joined; // 0xc8
};

struct FYMatchmakingRegionEndpointEntry {
	FString Region; // 0x0
	FString endpoint; // 0x10
};

struct FAdminUpdateUserDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	EUserDataPermission Permission; // 0x28
	FString PlayFabId; // 0x30
};

struct FYFindActorDealDamageRequestData {
	AActor* m_damageCauser; // 0x0
	FVector m_startLocation; // 0x8
	FDataTableRowHandle m_transportRowHandle; // 0x18
	float m_radius; // 0x28
	float m_capsuleHalfHeight; // 0x2c
	FVector m_CapsuleUpVector; // 0x30
	bool m_skipFindClosestBoneCheck; // 0x3c
	TArray<AActor*> m_actorsIgnoreDamage; // 0x40
	bool m_skipTraceToVerifyHit; // 0x50
	ECollisionChannel m_collisionChannel; // 0x51
};

struct FNavigationLink : FNavigationLinkBase {
	FVector Left; // 0x30
	FVector Right; // 0x3c
};

struct FStringCurve : FIndexedCurve {
	FString DefaultValue; // 0x68
	TArray<FStringCurveKey> Keys; // 0x78
};

struct FServerSetGameServerInstanceStateRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	EGameInstanceState State; // 0x18
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

struct FYCurrenciesUpdated {
	FString UserId; // 0x0
	TArray<FYCurrencyItem> updatedCurrencies; // 0x10
};

struct FYPlayerSpawnLocationInfo {
	FVector_NetQuantize m_location; // 0x0
	FRotator m_rotation; // 0xc
	AActor* m_playerStart; // 0x18
};

struct FRigUnit_SetMultiControlInteger_Entry {
	FName Control; // 0x0
	int32_t IntegerValue; // 0x8
};

struct FYDeadDropLocationRow : FYDataTableRowBase {
	FText m_name; // 0x10
};

struct FYGetUsersDataResponse {
	TArray<FYUserData> usersData; // 0x0
	EYResponse Result; // 0x10
};

struct FAdminGetCloudScriptRevisionResult : FPlayFabResultCommon {
	FString CreatedAt; // 0x8
	TArray<UPlayFabJsonObject*> Files; // 0x18
	bool IsPublished; // 0x28
	int32_t Revision; // 0x2c
	int32_t Version; // 0x30
};

struct FYAIRangedAttackDefinitionNew : FTableRowBase {
	float m_overrideProjectileGravity; // 0x8
	bool m_shootStraight; // 0xc
	float m_accuracy; // 0x10
	float m_requestedArc; // 0x14
	bool m_shootAtGroundLocationOfTarget; // 0x18
	FDataTableRowHandle m_weaponTransport; // 0x20
};

struct FRigUnit_MathFloatFloor : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
	int32_t Int; // 0x10
};

struct FSkeletalMeshSamplingRegionMaterialFilter {
	FName materialName; // 0x0
};

struct FYListPersistentSessionRequests {
	FString desiredRegion; // 0x0
};

struct FYPlayerFactionProgressionUIData {
	EYFaction m_factionId; // 0x0
	int32_t m_factionLevel; // 0x4
	int32_t m_completeFactionReputation; // 0x8
	int32_t m_currentXpOfCurrentLevel; // 0xc
	int32_t m_maxXpRequiredForCurrentLevel; // 0x10
	float m_relativeProgressBetweenCurrentLevelAndNextLevel; // 0x14
	FString m_nextLevelXp; // 0x18
};

struct FYDebugResetPlayerGamemodeRankRequest {
	FString GameMode; // 0x0
};

struct FClientAcceptTradeRequest : FPlayFabRequestCommon {
	FString AcceptedInventoryInstanceIds; // 0x8
	FString OfferingPlayerId; // 0x18
	FString TradeId; // 0x28
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

struct FAIStimulus {
	float Age; // 0x0
	float ExpirationAge; // 0x4
	float Strength; // 0x8
	FVector StimulusLocation; // 0xc
	FVector ReceiverLocation; // 0x18
	FName Tag; // 0x24
	char bSuccessfullySensed : 1; // 0x38
};

struct FServerGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FConstrainComponentPropName {
	FName ComponentName; // 0x0
};

struct FMathRBFInterpolateVectorColor_Target {
	FVector Target; // 0x0
	FLinearColor Value; // 0xc
};

struct FYAISenseTuning {
	float m_decreasePerSecond; // 0x0
	float m_targetIsCrouchingMultiplier; // 0x4
	TMap<EYAIBehaviorReaction, float> m_behaviorReactionThresholds; // 0x8
	float m_maxIntensity; // 0x58
};

struct FYEditorMetricsData {
	TMap<FString, int32_t> metricsNumericData; // 0x0
	TMap<FString, FString> metricsStringData; // 0x50
	TMap<FString, bool> metricsBoolData; // 0xa0
};

struct FInt32RangeBound {
	ERangeBoundTypes Type; // 0x0
	int32_t Value; // 0x4
};

struct FClientGetTradeStatusRequest : FPlayFabRequestCommon {
	FString OfferingPlayerId; // 0x8
	FString TradeId; // 0x18
};

struct FDataFinalizeFileUploadsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
};

struct FGroupsListGroupMembersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Members; // 0x8
};

struct FServerRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FYRequestUserInfos {
	TArray<FString> userIds; // 0x0
};

struct FRawDistribution {
	FDistributionLookupTable Table; // 0x0
};

struct FDestructibleDepthParameters {
	EImpactDamageOverride ImpactDamageOverride; // 0x0
};

struct FRigControlHierarchy {
	TArray<FRigControl> Controls; // 0x98
	TMap<FName, int32_t> NameToIndexMapping; // 0xa8
	TArray<FName> Selection; // 0xf8
};

struct FAdminGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FYFriendActionMuteSettings {
	int32_t m_maxActionTowardsUser; // 0x0
	int32_t m_minActionCount; // 0x4
	float m_timeAllowanceAdditionalAction; // 0x8
	float m_resetActionTracking; // 0xc
};

struct FDirectLinkMsg_OpenStreamRequest {
	bool bRequestFromSource; // 0x0
	int32_t RequestFromStreamPort; // 0x4
	FGuid SourceGuid; // 0x8
	FGuid DestinationGuid; // 0x18
};

struct FServerGetFriendsListResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Friends; // 0x8
};

struct FHorizonTweenEventSplinePathParameters : FHorizonTweenEventImplementParameters {
	USplineComponent* SplineComponent; // 0x8
	bool bUseConstantVelocity; // 0x10
	bool bTweenLocation; // 0x11
	bool bTweenRotation; // 0x12
	bool bTweenScale; // 0x13
	EHorizonTweenVectorConstraints LocationConstraintType; // 0x14
	EHorizonTweenRotatorConstraints RotatorConstraintType; // 0x15
	EHorizonTweenVectorConstraints ScaleConstraintType; // 0x16
	FHorizonTweenEventTransformParam TransformParam; // 0x18
	FHorizonTweenEventCustomCurve CustomTweenCurve; // 0xb0
};

struct FRigUnit_SetBoneInitialTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FTransform Transform; // 0x70
	FTransform Result; // 0xa0
	EBoneGetterSetterMode Space; // 0xd0
	bool bPropagateToChildren; // 0xd1
	FCachedRigElement CachedBone; // 0xd4
};

struct FClientLinkKongregateAccountRequest : FPlayFabRequestCommon {
	FString AuthTicket; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	FString KongregateId; // 0x28
};

struct FStructure_SelectorData {
	FText DisplayName_6_1D3030FF48F4B027C56D8885BC7ED0CF; // 0x0
	float Value_9_AEB3506B4AFD9C32EA6843BA49965EFA; // 0x18
	FName DataName_12_042E97B04C04EA391C7FDEA763642D53; // 0x1c
};

struct FMovieSceneBoolPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneBoolChannel BoolCurve; // 0x38
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

struct FYItemScrapingRow : FYDataTableRowBase {
	TArray<FYScrapingResultRow> m_scrapingResults; // 0x10
	TArray<FYScrapingResultRow> m_currencyRewards; // 0x20
	float m_factionReward; // 0x30
};

struct FDialogueContext {
	UDialogueVoice* Speaker; // 0x0
	TArray<UDialogueVoice*> Targets; // 0x8
};

struct FMarkerSyncAnimPosition {
	FName PreviousMarkerName; // 0x0
	FName NextMarkerName; // 0x8
	float PositionBetweenMarkers; // 0x10
};

struct FYGetPlayerSkills {
	TArray<FString> uniqueIds; // 0x0
};

struct FComboButtonStyle : FSlateWidgetStyle {
	FButtonStyle ButtonStyle; // 0x8
	FSlateBrush DownArrowImage; // 0x280
	FVector2D ShadowOffset; // 0x308
	FLinearColor ShadowColorAndOpacity; // 0x310
	FSlateBrush MenuBorderBrush; // 0x320
	FMargin MenuBorderPadding; // 0x3a8
};

struct FYSquadUpdated {
	FYSquad squad; // 0x0
};

struct FAdminUpdateBansRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
};

struct FClothConstraintSetup_Legacy {
	float Stiffness; // 0x0
	float StiffnessMultiplier; // 0x4
	float StretchLimit; // 0x8
	float CompressionLimit; // 0xc
};

struct FClientLinkNintendoServiceAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceLink; // 0x10
	FString IdentityToken; // 0x18
};

struct FYGetUserFriendList {
	FString internalUserId; // 0x0
};

struct FYGrantRow : FTableRowBase {
	TArray<FYGrantEntry> m_grants; // 0x8
	bool m_autoClaim; // 0x18
};

struct FServerSetGameServerInstanceTagsRequest : FPlayFabRequestCommon {
	FString LobbyId; // 0x8
	UPlayFabJsonObject* Tags; // 0x18
};

struct FVector4 {
	float X; // 0x0
	float Y; // 0x4
	float Z; // 0x8
	float W; // 0xc
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

struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase {
	FQuat Quaternion; // 0x10
	EAxis Axis; // 0x20
	FVector Result; // 0x24
};

struct FConstructionSystemSavePlayerInfo {
	bool bRestorePlayerInfo; // 0x0
	FTransform Transform; // 0x10
	FRotator ControlRotation; // 0x40
};

struct FYUserCurrenciesItems {
	FString UserId; // 0x0
	TArray<FYCurrencyItem> currencies; // 0x10
};

struct FYCharacterVanity {
	FString UserId; // 0x0
	FYVanityMaterialItem head_item; // 0x10
	FYVanityMaterialItem boots_item; // 0x28
	FYVanityMaterialItem chest_item; // 0x40
	FYVanityMaterialItem glove_item; // 0x58
	FYVanityMaterialItem base_suit_item; // 0x70
	FYVanityMaterialItem melee_weapon_item; // 0x88
	int32_t body_type; // 0xa0
	FString archetype_id; // 0xa8
	int32_t slot_index; // 0xb8
};

struct FYSetQuestsCount {
	FString UserId; // 0x0
	TArray<FYQuestUpdateDataEntry> entries; // 0x10
};

struct FBasicParticleData {
	FVector Position; // 0x0
	float Size; // 0xc
	FVector Velocity; // 0x10
};

struct FMultiplayerGetMatchmakingTicketRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString QueueName; // 0x18
	FString TicketId; // 0x28
};

struct FYPlayfabPurchaseItemResult {
	FString UserId; // 0x0
	bool SUCCESS; // 0x10
	TArray<FString> grantedBundles; // 0x18
	TArray<FYCustomItemInfo> GrantedItems; // 0x28
};

struct FYTutorialFunnelStats : FYBaseAnalyticsEvent {
	FString tutorial_id; // 0xa8
	int32_t time_in_match; // 0xb8
	FString step_name; // 0xc0
	int32_t step; // 0xd0
	float position_x; // 0xd4
	float position_y; // 0xd8
	float position_z; // 0xdc
};

struct FActorSequenceObjectReference {
	EActorSequenceObjectReferenceType Type; // 0x0
	FGuid ActorId; // 0x4
	FString PathToComponent; // 0x18
};

struct FAdminRemoveVirtualCurrencyTypesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> VirtualCurrencies; // 0x8
};

struct FYTechTreeNodeUpgradeDependencyRow : FTableRowBase {
	FDataTableRowHandle m_relatedDependencyRowHandle; // 0x8
	int32_t m_requiredLevel; // 0x18
};

struct FYRadialDamageDealingData {
	FVector m_origin; // 0x0
	FVector m_originDamageLineTraceCheckOverride; // 0xc
	FVector m_impactNormal; // 0x18
	float m_radius; // 0x24
	float m_capsuleRadius; // 0x28
	float m_capsuleHalfHeight; // 0x2c
	float m_falloffStartRange; // 0x30
	float m_falloffDamageMultiplier; // 0x34
	float m_playerDamageMultiplier; // 0x38
	float m_enemyDamageMultiplier; // 0x3c
	float m_damageSelfMultiplier; // 0x40
	float m_healthDamage; // 0x44
	FYDamageHelper m_damage; // 0x48
	AActor* m_damageCauser; // 0x58
	AActor* m_damageInstigator; // 0x60
	FName m_boneNameHit; // 0x68
	float m_stabilityDamage; // 0x70
	float m_radialDamageImpulse; // 0x74
	float m_stabilityDamageForDeathRagdoll; // 0x78
	TArray<AActor*> m_ignoredActors; // 0x80
	FYActorArray m_ignoredActorsForDamage; // 0x90
	ENetRole m_roleToReplicate; // 0xa0
	ECollisionChannel m_damagePreventionChannel; // 0xa1
	bool m_ignoreDamagePrevention; // 0xa2
	bool m_canDamageSelf; // 0xa3
	bool m_affectEnemyHitreaction; // 0xa4
	bool m_useDamageCauserForImpactDirection; // 0xa5
	bool m_damageIgnoreShield; // 0xa6
	float m_penetration; // 0xa8
	bool m_isFriendlyFireAllowed; // 0xac
	FGameplayTagContainer m_objectTypesAllowedToDamage; // 0xb0
	FYDamageOverTimeData m_dotData; // 0xd0
	EYDamageApplication m_damageApplication; // 0xdc
	FYDamageOriginInfo m_damageOriginInfo; // 0xe0
};

struct FYDebugResetTechTree {
	FString UserId; // 0x0
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

struct FToggleTrackKey {
	float Time; // 0x0
	ETrackToggleAction ToggleAction; // 0x4
};

struct FRigUnit_RandomVector : FRigUnit_MathBase {
	int32_t Seed; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float Duration; // 0x14
	FVector Result; // 0x18
	FVector LastResult; // 0x24
	int32_t LastSeed; // 0x30
	float timeLeft; // 0x34
};

struct FYMatchmakingNVRSetup {
	bool Enabled; // 0x0
	int32_t userNVRSamples; // 0x4
	float sessionFillRatioThreshold; // 0x8
	int32_t decayIntervalDays; // 0xc
	float decayEffectPerInterval; // 0x10
};

struct FYSceneCompleteInitializationData {
	FYSceneRuntimeInitializationData m_runtimeInitializationData; // 0x0
	FYSceneRuntimeData m_runtimeData; // 0x90
	int32_t m_uidHandle; // 0xa0
};

struct FYGetPlayerInventoriesResult {
	bool SUCCESS; // 0x0
	TArray<FYInventory> entries; // 0x8
};

struct FYNotifyUpdatedProfanitylist {
	TArray<FString> profanityList; // 0x0
	TArray<FString> regexProfanityList; // 0x10
};

struct FBlendProfileBoneEntry {
	FBoneReference BoneReference; // 0x0
	float BlendScale; // 0x10
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

struct FAdminSubtractUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FClientRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
};

struct FMovieSceneWarpCounter {
	TArray<uint32_t> WarpCounts; // 0x0
};

struct FYWeaponDamageRelevantValues {
	int32_t m_amountOfBursts; // 0x0
	int32_t m_numBursts; // 0x4
	int32_t m_amountOfImmediateFires; // 0x8
	int32_t m_numFiresPerCompleteBurst; // 0xc
	int32_t m_numImpactsPerImmediateFire; // 0x10
	int32_t m_numImpactsPerCompleteBurst; // 0x14
	float m_directDamage; // 0x18
	float m_radialDamage; // 0x1c
	float m_totalDamagePerImpact; // 0x20
	float m_totalDamageCompleteBurst; // 0x24
	float m_spinupTime; // 0x28
	float m_durationBurst; // 0x2c
	float m_burstInterval; // 0x30
	float m_durationOfCompleteBurstIncludingRefireTime; // 0x34
	float m_refireTime; // 0x38
	float m_numCompleteBurstWithRefireTimePerSecond; // 0x3c
	float m_damagePerSecond; // 0x40
	float m_numBurstsIncludeRefireTimePerMinute; // 0x44
	float m_roundsPerMinute; // 0x48
	float m_totalDamagePerFire; // 0x4c
};

struct FMatchmakerPlayerLeftRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FYClientDisconnectedEvent : FYBaseAnalyticsEvent {
	FString GameVersion; // 0xa8
	FString FailureType; // 0xb8
	FString errorString; // 0xc8
	FString lastRoomId; // 0xd8
	FString lastState; // 0xe8
};

struct FYForceStartMatch {
	FString GameMode; // 0x0
	bool isRanked; // 0x10
	FString Region; // 0x18
};

struct FAdminListBuildsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Builds; // 0x8
};

struct FNiagaraUserRedirectionParameterStore : FNiagaraParameterStore {
	TMap<FNiagaraVariable, FNiagaraVariable> UserParameterRedirects; // 0x78
};

struct FYStateDebugData {
	FString m_output; // 0x0
	FColor m_color; // 0x10
	bool m_isActive; // 0x14
};

struct FClientGetPlayFabIDsFromTwitchIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FSoundWaveEnvelopeDataPerSound {
	float Envelope; // 0x0
	float PlaybackTime; // 0x4
	USoundWave* SoundWave; // 0x8
};

struct FClientConfirmPurchaseResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
	FString OrderId; // 0x18
	FString PurchaseDate; // 0x28
};

struct FYDespawnActorInfo {
	AActor* m_actor; // 0x0
	float m_despawnRadius; // 0x8
};

struct FDataGetFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	UPlayFabJsonObject* MetaData; // 0x10
	int32_t ProfileVersion; // 0x18
};

struct FSubdividedQuad {
	FSubdividedQuadVertex QuadVertex0; // 0x0
	FSubdividedQuadVertex QuadVertex1; // 0x34
	FSubdividedQuadVertex QuadVertex2; // 0x68
	FSubdividedQuadVertex QuadVertex3; // 0x9c
};

struct FMultiplayerListPartyQosServersRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FYCostEntryRow {
	FDataTableRowHandle m_costType; // 0x0
	int32_t m_costAmount; // 0x10
};

struct FServerGetPublisherDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
};

struct FBTDecoratorLogic {
	EBTDecoratorLogic Operation; // 0x0
	uint16_t Number; // 0x2
};

struct FYImpactDataTableRow : FYDataTableRowBase {
	FDataTableRowHandle m_fxDefaultDataTableRow; // 0x10
};

struct FClientLoginWithTwitchRequest : FPlayFabRequestCommon {
	FString AccessToken; // 0x8
	bool CreateAccount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString EncryptedRequest; // 0x28
	UPlayFabJsonObject* InfoRequestParameters; // 0x38
	FString PlayerSecret; // 0x40
};

struct FYAIMontagePlayInfo {
	UAnimMontage* m_montage; // 0x0
	float m_rootMotionRotationScale; // 0x8
	float m_serverTimestamp; // 0xc
	bool m_allowPhysicsRotation; // 0x10
	FName m_sectionName; // 0x14
};

struct FAnimNode_SlopeWarp : FAnimNode_SkeletalControlBase {
	FVector SlopeNormal; // 0xc8
	FVector SlopePoint; // 0xd4
	ESlopeDetectionMode SlopeDetectionMode; // 0xe0
	ESlopeRollCompensation SlopeRollCompensation; // 0xe1
	FVector IKRootLeftVector; // 0xe4
	float MaxSlopeAngle; // 0xf0
	float HeightOffset; // 0xf4
	float SlopeSmoothingRate; // 0xf8
	float AllowExtensionPercent; // 0xfc
	float DownSlopeShiftRate; // 0x100
	FBoneReference IkRoot; // 0x104
	FHipAdjustment HipAdjustment; // 0x114
	TArray<FLimbDefinition> Limbs; // 0x130
	TArray<FBoneReference> AdditionalBonesToAdjustWithHips; // 0x140
};

struct FAdminGetPlayersInSegmentResult : FPlayFabResultCommon {
	FString ContinuationToken; // 0x8
	TArray<UPlayFabJsonObject*> PlayerProfiles; // 0x18
	int32_t ProfilesInSegment; // 0x28
};

struct FRigUnit_MathVectorEquals : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FYWeaponCharmVanityItemRowBase : FYVanityItemRowBase {
	TSoftObjectPtr<USkeletalMesh> m_weaponCharmMesh; // 0x378
};

struct FYRequestTechTreeNodeUpgradePurchaseResult {
	FString Error; // 0x0
	FString UserId; // 0x10
	FYTechTreeNodeStatus upgradedNode; // 0x20
	TArray<FYCustomItemInfo> changedItems; // 0x40
	TArray<FString> deletedItems; // 0x50
	TArray<FYCurrencyItem> changedCurrencies; // 0x60
};

struct FRigUnit_ItemReplace : FRigUnit_ItemBase {
	FRigElementKey Item; // 0x8
	FName Old; // 0x14
	FName New; // 0x1c
	FRigElementKey Result; // 0x24
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

struct FYCraftingStationItemDetailOverviewData {
	EYItemRarityType m_itemRarity; // 0x0
	FString m_bpName; // 0x8
};

struct FClientConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemInstanceId; // 0x28
};

struct FAdminDeleteTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* Identifier; // 0x8
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

struct FYTournamentDataUpdatedPushMessage {
	FString UserId; // 0x0
	bool isAllowed; // 0x10
};

struct FYGlobalVanityItem {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_variation; // 0x10
};

struct FMultiplayerGetMultiplayerSessionLogsBySessionIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString SessionId; // 0x10
};

struct FSoundGroup {
	ESoundGroup SoundGroup; // 0x0
	FString DisplayName; // 0x8
	char bAlwaysDecompressOnLoad : 1; // 0x18
	float DecompressedDuration; // 0x1c
};

struct FAutomationExecutionEntry {
	FAutomationEvent Event; // 0x0
	FString Filename; // 0x38
	int32_t LineNumber; // 0x48
	FDateTime Timestamp; // 0x50
};

struct FYMockPlayerActor_Test {
	UWorld* m_world; // 0x0
};

struct FServerRedeemCouponRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	FString CouponCode; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString PlayFabId; // 0x40
};

struct FLensImperfectionSettings {
	UTexture* DirtMask; // 0x0
	float DirtMaskIntensity; // 0x8
	FLinearColor DirtMaskTint; // 0xc
};

struct FRigUnit_MathVectorBezierFourPoint : FRigUnit_MathVectorBase {
	FCRFourPointBezier Bezier; // 0x8
	float T; // 0x38
	FVector Result; // 0x3c
	FVector Tangent; // 0x48
};

struct FYAcceptFriendRequestResult {
	FYPlayFabFriendWithState friendInfo; // 0x0
	FString OperationId; // 0x30
	EYFriendActionResult Result; // 0x40
};

struct FClientPurchaseItemResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
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

struct FSplineIKCachedBoneData {
	FBoneReference Bone; // 0x0
	int32_t RefSkeletonIndex; // 0x10
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

struct FRigUnit_CollectionReplaceItems : FRigUnit_CollectionBase {
	FRigElementKeyCollection Items; // 0x8
	FName Old; // 0x18
	FName New; // 0x20
	bool RemoveInvalidItems; // 0x28
	FRigElementKeyCollection Collection; // 0x30
	FRigElementKeyCollection CachedCollection; // 0x40
	int32_t CachedHierarchyHash; // 0x50
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

struct FReverbSettings {
	bool bApplyReverb; // 0x0
	UReverbEffect* ReverbEffect; // 0x8
	USoundEffectSubmixPreset* ReverbPluginEffect; // 0x10
	float Volume; // 0x18
	float FadeTime; // 0x1c
};

struct FAudioVolumeSubmixOverrideSettings {
	USoundSubmix* Submix; // 0x0
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x8
	float CrossfadeTime; // 0x18
};

struct FMaterialParameterCollectionInfo {
	FGuid StateId; // 0x0
	UMaterialParameterCollection* ParameterCollection; // 0x10
};

struct FServerGetLeaderboardAroundUserResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FRigUnit_DistributeRotationForCollection : FRigUnit_HighlevelBaseMutable {
	FRigElementKeyCollection Items; // 0x68
	TArray<FRigUnit_DistributeRotation_Rotation> Rotations; // 0x78
	EControlRigAnimEasingType RotationEaseType; // 0x88
	float weight; // 0x8c
	FRigUnit_DistributeRotation_WorkData WorkData; // 0x90
};

struct FCollectionReference {
	FName CollectionName; // 0x0
};

struct FNamedEmitterMaterial {
	FName Name; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FCloudScriptListQueuedFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FFormatArgumentData {
	FString ArgumentName; // 0x0
	EFormatArgumentType ArgumentValueType; // 0x10
	FText ArgumentValue; // 0x18
	int32_t ArgumentValueInt; // 0x30
	float ArgumentValueFloat; // 0x34
	ETextGender ArgumentValueGender; // 0x38
};

struct FRigUnit_MathTransformMakeAbsolute : FRigUnit_MathTransformBase {
	FTransform Local; // 0x10
	FTransform Parent; // 0x40
	FTransform Global; // 0x70
};

struct FMovieSceneCameraShakeSourceTrigger {
	UCameraShakeBase* ShakeClass; // 0x0
	float PlayScale; // 0x8
	ECameraShakePlaySpace PlaySpace; // 0xc
	FRotator UserDefinedPlaySpace; // 0x10
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

struct FYCharacterCustomizationPieceCollection {
	EYCharacterCustomizationColorType m_colorType; // 0x0
	TSoftObjectPtr<UTexture2D> m_icon; // 0x8
	FDataTableRowHandle m_materialDataTableReference; // 0x30
	TArray<FYCharacterCustomizationMaterialPieceEntry> m_materials; // 0x40
};

struct FMultiplayerListBuildSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BuildSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FYSquadMessage {
	FString from; // 0x0
	FString Msg; // 0x10
	FString squadId; // 0x20
};

struct FYPlayerLeftMatch {
	FString UserId; // 0x0
};

struct FClientLoginWithNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString NintendoSwitchDeviceId; // 0x30
	FString PlayerSecret; // 0x40
};

struct FMovieSceneEvaluationFieldEntity {
	FMovieSceneEvaluationFieldEntityKey Key; // 0x0
	int32_t SharedMetaDataIndex; // 0xc
};

struct FRigVMRegister {
	ERigVMRegisterType Type; // 0x0
	uint32_t ByteIndex; // 0x4
	uint16_t ElementSize; // 0x8
	uint16_t ElementCount; // 0xa
	uint16_t SliceCount; // 0xc
	char AlignmentBytes; // 0xe
	uint16_t TrailingBytes; // 0x10
	FName Name; // 0x14
	int32_t ScriptStructIndex; // 0x1c
	bool bIsArray; // 0x20
	bool bIsDynamic; // 0x21
};

struct FAdminRevokeBansRequest : FPlayFabRequestCommon {
	FString BanIds; // 0x8
};

struct FRigUnit_ConvertRotationToVector : FRigUnit {
	FRotator Input; // 0x8
	FVector Result; // 0x14
};

struct FYFactionContractData {
	FString contractId; // 0x0
	bool contractIsLockedDueToLowFactionReputation; // 0x10
};

struct FProfilesGetGlobalPolicyResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Permissions; // 0x8
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

struct FGameplayTagRedirect {
	FName OldTagName; // 0x0
	FName NewTagName; // 0x8
};

struct FBakedAnimationStateMachine {
	FName MachineName; // 0x0
	int32_t InitialState; // 0x8
	TArray<FBakedAnimationState> States; // 0x10
	TArray<FAnimationTransitionBetweenStates> Transitions; // 0x20
};

struct FYGetPlayerInventoryLimit {
	FString UserId; // 0x0
};

struct FRigUnit_AccumulateTransformLerp : FRigUnit_SimBase {
	FTransform TargetValue; // 0x10
	FTransform InitialValue; // 0x40
	float Blend; // 0x70
	bool bIntegrateDeltaTime; // 0x74
	FTransform Result; // 0x80
	FTransform AccumulatedValue; // 0xb0
};

struct FRigUnit_MathIntUnaryOp : FRigUnit_MathIntBase {
	int32_t Value; // 0x8
	int32_t Result; // 0xc
};

struct FYWeaponParticleSystemOverrideByWeaponType {
	EYVFX_WeaponType m_weaponType; // 0x0
	UParticleSystem* m_particleSystem; // 0x8
};

struct FIntervalCountdown {
	float Interval; // 0x0
};

struct FLandscapeLayerComponentData {
	FHeightmapData HeightmapData; // 0x0
	FWeightmapData WeightmapData; // 0x8
};

struct FLevelSequenceBindingReferenceArray {
	TArray<FLevelSequenceBindingReference> References; // 0x0
};

struct FLightningTuningDataInfo {
	float DistanceFromPlayerMin_3_F4D76B234A12E2778F754C91D3C00D5F; // 0x0
	float DistanceFromPlayerMax_7_A19470F14CA0202A8DA8928C10300050; // 0x4
	float CooldownMin_10_34238BE249F635E9D30E5D8984C934E5; // 0x8
	float CooldownMax_11_5EB969F24B410BAE7E702BBEA5797E9E; // 0xc
	float LightningWarningTime_17_E4FBC2B9497042C5251E7EAD754139EB; // 0x10
	float Damage_27_5819B0B94E931BEF3EFC4C8C73DF31F3; // 0x14
	float DamageRadius_29_3438EAD94CEF46EF4A0BC0A172A69988; // 0x18
	bool IsDebugForcedEnabled_34_0D770C7A476CD9B6A977AFB2D66EF13C; // 0x1c
};

struct FTestBIStructForArray {
	FTestBIDataStruct InternalDataStruct; // 0x0
	FString InternalStringField; // 0x18
	TArray<FString> InternalStringArray; // 0x28
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

struct FAdminGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FAnimNode_StrideWarp : FAnimNode_SkeletalControlBase {
	float StrideScale; // 0xc8
	float Direction; // 0xcc
	float Twist; // 0xd0
	float AllowExtensionPercent; // 0xd4
	FStridePivot StridePivot; // 0xe0
	FHipAdjustment HipAdjustment; // 0x140
	TArray<FLimbDefinition> Limbs; // 0x158
	TArray<FBoneReference> AdditionalBonesToAdjustWithHips; // 0x168
};

struct FYAbilityInitializationData {
	TArray<FDataTableRowHandle> m_abilities; // 0x0
};

struct FPassiveSoundMixModifier {
	USoundMix* SoundMix; // 0x0
	float MinVolumeThreshold; // 0x8
	float MaxVolumeThreshold; // 0xc
};

struct FYCameraItemRow : FYDataTableRowBase {
	FVector m_bpLocation; // 0x10
	FVector m_bpRotation; // 0x1c
	FVector m_bpScale; // 0x28
	FVector m_meshLocation; // 0x34
	FVector m_meshRotation; // 0x40
	FDataTableRowHandle m_item; // 0x50
	FString m_overridePreviewCamera; // 0x60
	FString m_cameraDefault; // 0x70
	FString m_cameraFaction; // 0x80
};

struct FRigUnit_AnimEvalRichCurve : FRigUnit_AnimBase {
	float Value; // 0x8
	FRuntimeFloatCurve Curve; // 0x10
	float SourceMinimum; // 0x98
	float SourceMaximum; // 0x9c
	float TargetMinimum; // 0xa0
	float TargetMaximum; // 0xa4
	float Result; // 0xa8
};

struct FMultiplayerEnableMultiplayerServersForTitleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FServerGetPlayFabIDsFromXboxLiveIDsRequest : FPlayFabRequestCommon {
	FString Sandbox; // 0x8
	FString XboxLiveAccountIDs; // 0x18
};

struct FClientGetStoreItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString StoreId; // 0x18
};

struct FHorizonTweenEventWidgetScaleFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	TWeakObjectPtr<UWidget> TweenTargetWeakPtr; // 0xb8
};

struct FYBagItems {
	TArray<FString> m_bagItemsIds; // 0x0
};

struct FClientUpdateCharacterDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FTTFloatTrack : FTTPropertyTrack {
	UCurveFloat* CurveFloat; // 0x20
};

struct FClientPayForPurchaseRequest : FPlayFabRequestCommon {
	FString Currency; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString OrderId; // 0x20
	FString ProviderName; // 0x30
	FString ProviderTransactionId; // 0x40
};

struct FYDeathEmoteDataTableRow : FYCharacterCustomizationRowBase {
	FLinearColor m_characterFoamColor; // 0x400
};

struct FYBaseSocialRequest {
	FString targetPlayFabId; // 0x0
};

struct FClientGetTitleNewsRequest : FPlayFabRequestCommon {
	int32_t Count; // 0x8
};

struct FYSellInventoryUpdate {
	TArray<FString> itemsToRemove; // 0x0
	TArray<FYCustomItemInfo> itemsToAdd; // 0x10
	TArray<FYCustomItemInfo> itemsToUpdateAmount; // 0x20
};

struct FClientGetPlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticNames; // 0x10
	TArray<UPlayFabJsonObject*> StatisticNameVersions; // 0x20
};

struct FCustomAttributeSetting {
	FString Name; // 0x0
	FString Meaning; // 0x10
};

struct FPropertyAccessIndirectionChain {
	TFieldPath<FProperty> Property; // 0x0
	int32_t IndirectionStartIndex; // 0x20
	int32_t IndirectionEndIndex; // 0x24
	int32_t EventId; // 0x28
};

struct FAdminSetTitleDataAndOverridesRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> KeyValues; // 0x8
	FString OverrideLabel; // 0x18
};

struct FYPlayfabUserAccountInfo {
	FString UserId; // 0x0
	FString userDisplayName; // 0x10
};

struct FGroupsUpdateGroupRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t ExpectedProfileVersion; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
	FString RoleName; // 0x30
};

struct FSourceEffectSimpleDelaySettings {
	float SpeedOfSound; // 0x0
	float DelayAmount; // 0x4
	float DryAmount; // 0x8
	float WetAmount; // 0xc
	float Feedback; // 0x10
	char bDelayBasedOnDistance : 1; // 0x14
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

struct FCachedPropertyPath {
	TArray<FPropertyPathSegment> Segments; // 0x0
	UFunction* CachedFunction; // 0x18
};

struct FRigUnit_MathBoolBinaryOp : FRigUnit_MathBoolBase {
	bool A; // 0x8
	bool B; // 0x9
	bool Result; // 0xa
};

struct FYActivePromotions {
	TArray<FYShopPromotion> shopPromotions; // 0x0
};

struct FClientGetWindowsHelloChallengeResponse : FPlayFabResultCommon {
	FString Challenge; // 0x8
};

struct FChildActorComponentInstanceData : FSceneComponentInstanceData {
	AActor* ChildActorClass; // 0xb8
	FName ChildActorName; // 0xc0
	TArray<FChildActorAttachedActorInfo> AttachedActors; // 0xc8
};

struct FGroupsIsMemberRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
	FString RoleId; // 0x20
};

struct FServerDeletePlayerRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FYDebugSetActiveContractProgressResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString contractId; // 0x20
	int32_t newProgress; // 0x30
	TArray<FYCustomItemInfo> updatedItems; // 0x38
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

struct FBlendSampleData {
	int32_t SampleDataIndex; // 0x0
	UAnimSequence* Animation; // 0x8
	float TotalWeight; // 0x10
	float Time; // 0x14
	float PreviousTime; // 0x18
	float SamplePlayRate; // 0x1c
};

struct FClientGetPhotonAuthenticationTokenResult : FPlayFabResultCommon {
	FString PhotonCustomAuthenticationToken; // 0x8
};

struct FYCollectibleRow : FYItemDataTableRowBase {
	TSoftObjectPtr<UTexture2D> m_hudIconBig; // 0x310
	TSoftObjectPtr<UObject> m_mesh; // 0x338
};

struct FPrimaryAssetRulesOverride {
	FPrimaryAssetId PrimaryAssetId; // 0x0
	FPrimaryAssetRules Rules; // 0x10
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

struct FDataDeleteFilesResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	int32_t ProfileVersion; // 0x10
};

struct FYHitscanTraceEntry {
	FVector_NetQuantize m_towardsLocation; // 0x0
	FVector_NetQuantize m_startLocation; // 0xc
	FRotator m_impactNormal; // 0x18
	USceneComponent* m_hitComponent; // 0x28
	AActor* m_hitActor; // 0x30
	float m_damageReduction; // 0x38
	char m_surfaceType; // 0x3c
	bool m_isHit; // 0x3d
	bool m_isHeadshot; // 0x3e
	char m_boneIndexHit; // 0x3f
};

struct FYModEntryRollEntry {
	int32_t m_modRollValue; // 0x0
	EYItemRarityType m_modRollRarity; // 0x4
};

struct FYBaseFXCategoryRow : FYDataTableRowBase {
	TArray<FYFXCategoryMaterialParemeterEntry> m_materialParameters; // 0x10
	TArray<FYFXCategoryMaterialFloatParemeterEntry> m_materialFloatParameters; // 0x20
	FDataTableRowHandle m_impactEffectsDataTableRow; // 0x30
	FYWeaponImpactEffectsAssociation m_defaultEffect; // 0x40
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

struct FYPlayerDisconnectNotification {
	FString UserId; // 0x0
};

struct FCustomOutput {
	FName OutputName; // 0x0
	ECustomMaterialOutputType OutputType; // 0x8
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

struct FCloudScriptListFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FGroupsUpdateGroupResponse : FPlayFabResultCommon {
	FString OperationReason; // 0x8
	int32_t ProfileVersion; // 0x18
	EOperationTypes SetResult; // 0x1c
};

struct FYRequestStationConnectResult {
	EYClientStationRequestResult Result; // 0x0
	FYStationConnect connectData; // 0x8
};

struct FMovieSceneTimeWarping {
	FFrameNumber Start; // 0x0
	FFrameNumber End; // 0x4
};

struct FSkelMeshSkinWeightInfo {
	int32_t Bones[0xc]; // 0x0
	char Weights[0xc]; // 0x30
};

struct FAdminGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t MaxBatchSize; // 0x20
	int32_t SecondsToLive; // 0x24
	FString SegmentId; // 0x28
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

struct FClientUnlinkFacebookAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FPerBoneBlendWeights {
	TArray<FPerBoneBlendWeight> BoneBlendWeights; // 0x0
};

struct FAnimGroupInfo {
	FName Name; // 0x0
	FLinearColor Color; // 0x8
};

struct FAdminModifyMatchmakerGameModesRequest : FPlayFabRequestCommon {
	FString BuildVersion; // 0x8
	TArray<UPlayFabJsonObject*> GameModes; // 0x18
};

struct FNiagaraPlatformSetConflictEntry {
	FName ProfileName; // 0x0
	int32_t QualityLevelMask; // 0x8
};

struct FClientValidateGooglePlayPurchaseRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString ReceiptJson; // 0x38
	FString Signature; // 0x48
};

struct FRigUnit_MathVectorOrthogonal : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FRigUnit_TransformConstraint_WorkData {
	TArray<FConstraintData> ConstraintData; // 0x0
	TMap<int32_t, int32_t> ConstraintDataToTargets; // 0x10
};

struct FAssetRegistryDependencyOptions {
	bool bIncludeSoftPackageReferences; // 0x0
	bool bIncludeHardPackageReferences; // 0x1
	bool bIncludeSearchableNames; // 0x2
	bool bIncludeSoftManagementReferences; // 0x3
	bool bIncludeHardManagementReferences; // 0x4
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

struct FHLODProxyMesh {
	LazyObjectProperty LODActor; // 0x0
	UStaticMesh* StaticMesh; // 0x20
	FName Key; // 0x28
};

struct FPrecomputedSkyLightInstanceData : FSceneComponentInstanceData {
	FGuid LightGuid; // 0xb8
	float AverageBrightness; // 0xc8
};

struct FAdminGetCloudScriptRevisionRequest : FPlayFabRequestCommon {
	int32_t Revision; // 0x8
	int32_t Version; // 0xc
};

struct FAnimNode_UseCachedPose : FAnimNode_Base {
	FPoseLink LinkToCachingNode; // 0x10
	FName CachePoseName; // 0x20
};

struct FAdminUpdatePlayerStatisticDefinitionRequest : FPlayFabRequestCommon {
	EStatisticAggregationMethod AggregationMethod; // 0x8
	FString StatisticName; // 0x10
	EStatisticResetIntervalOption VersionChangeInterval; // 0x20
};

struct FBPVariableMetaDataEntry {
	FName DataKey; // 0x0
	FString DataValue; // 0x8
};

struct FMovieSceneParticleSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneParticleChannel ParticleKeys; // 0x20
};

struct FYUnlocksPopupUiData {
	FString factionId; // 0x0
	int32_t newLevel; // 0x10
	bool unlockedShopItemsAvailable; // 0x14
	bool unlockedContractsAvailable; // 0x15
};

struct FServerGetPlayFabIDsFromPSNAccountIDsRequest : FPlayFabRequestCommon {
	int32_t IssuerId; // 0x8
	FString PSNAccountIDs; // 0x10
};

struct FYVivoxJoinData {
	FYVivoxJoinTokenRequest Request; // 0x0
	FString Token; // 0x38
};

struct FYPlayerItemUIData {
	EYPlayerSetTypeSimplified m_inventoryPositionType; // 0x0
	FString m_baseItemId; // 0x8
	FString m_itemBackendId; // 0x18
	EYItemRarityType m_itemRarity; // 0x28
};

struct FYSquadDefinition {
	TArray<FYSquadAIType> m_AIsToSpawn; // 0x0
};

struct FYTechTreeUIData {
	TArray<FYTechTreeNodeType> columnNodes; // 0x0
	int32_t nodeAmount; // 0x10
};

struct FYDebugGivePlayerContractRewardsResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString contractId; // 0x20
	TArray<FYCurrencyItem> changedCurrencies; // 0x30
	TArray<FYCustomItemInfo> itemsGrantedOrUpdated; // 0x40
	FYPlayerFactionProgressData playerFactionProgressData; // 0x50
};

struct FSourceEffectFilterSettings {
	ESourceEffectFilterCircuit FilterCircuit; // 0x0
	ESourceEffectFilterType FilterType; // 0x1
	float CutoffFrequency; // 0x4
	float FilterQ; // 0x8
	TArray<FSourceEffectFilterAudioBusModulationSettings> AudioBusModulation; // 0x10
};

struct FClientGetSharedGroupDataRequest : FPlayFabRequestCommon {
	bool GetMembers; // 0x8
	FString Keys; // 0x10
	FString SharedGroupId; // 0x20
};

struct FRigUnit_AimBoneMath : FRigUnit_HighlevelBase {
	FTransform InputTransform; // 0x10
	FRigUnit_AimItem_Target primary; // 0x40
	FRigUnit_AimItem_Target secondary; // 0x6c
	float weight; // 0x98
	FTransform Result; // 0xa0
	FRigUnit_AimBone_DebugSettings DebugSettings; // 0xd0
	FCachedRigElement PrimaryCachedSpace; // 0x110
	FCachedRigElement SecondaryCachedSpace; // 0x124
};

struct FTimedDataInputEvaluationData {
	float DistanceToNewestSampleSeconds; // 0x0
	float DistanceToOldestSampleSeconds; // 0x4
};

struct FClientCancelTradeRequest : FPlayFabRequestCommon {
	FString TradeId; // 0x8
};

struct FSocketReference {
	FName SocketName; // 0x30
};

struct FAuthenticationValidateEntityTokenResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Entity; // 0x8
	EIdentifiedDeviceType IdentifiedDeviceType; // 0x10
	ELoginIdentityProvider IdentityProvider; // 0x11
	UPlayFabJsonObject* Lineage; // 0x18
};

struct FMovieScene3DLocationKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FFrameNumber Time; // 0x14
};

struct FGroupsCreateGroupRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString GroupName; // 0x18
};

struct FYWeaponPlayStateAnimationsEntry {
	TSoftObjectPtr<UAnimMontage> m_animWeaponFirstPerson; // 0x0
	TSoftObjectPtr<UAnimMontage> m_animWeaponThirdPerson; // 0x28
	TSoftObjectPtr<UAnimMontage> m_animFirstPerson; // 0x50
	TSoftObjectPtr<UAnimMontage> m_animThirdPerson; // 0x78
	TSoftObjectPtr<UAnimMontage> m_animLowStaminaFirstPerson; // 0xa0
	TSoftObjectPtr<UAnimMontage> m_animLowStaminaThirdPerson; // 0xc8
};

struct FServerReportPlayerServerRequest : FPlayFabRequestCommon {
	FString Comment; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString ReporteeId; // 0x20
	FString ReporterId; // 0x30
};

struct FYLootItemAmountRow : FYDataTableRowBase {
	FDataTableRowHandle m_itemRowHandle; // 0x10
	int32_t m_amountMin; // 0x20
	int32_t m_amountMax; // 0x24
};

struct FYSingleModeInfo {
	TArray<FYRoomPlayer> users; // 0x0
};

struct FSlateChildSize {
	float Value; // 0x0
	ESlateSizeRule SizeRule; // 0x4
};

struct FConstructionSystemUIPrefabEntry {
	FText DisplayName; // 0x0
	FText Tooltip; // 0x18
	UTexture2D* Icon; // 0x30
	UPrefabricatorAssetInterface* Prefab; // 0x38
};

struct FClientGetPlayFabIDsFromTwitchIDsRequest : FPlayFabRequestCommon {
	FString TwitchIds; // 0x8
};

struct FServerDeleteCharacterFromUserRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString PlayFabId; // 0x20
	bool SaveCharacterInventory; // 0x30
};

struct FPrefabricatorComponentData {
	FTransform RelativeTransform; // 0x0
	FString ComponentName; // 0x30
	TArray<UPrefabricatorProperty*> Properties; // 0x40
};

struct FAnimNode_SequenceEvaluator : FAnimNode_AssetPlayerBase {
	UAnimSequenceBase* Sequence; // 0x38
	float ExplicitTime; // 0x40
	float NormalizedTime; // 0x44
	bool bShouldLoop; // 0x48
	bool bTeleportToExplicitTime; // 0x49
	ESequenceEvalReinit ReinitializationBehavior; // 0x4a
	float StartPosition; // 0x4c
};

struct FRigUnit_MathQuaternionToAxisAndAngle : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	FVector Axis; // 0x20
	float Angle; // 0x2c
};

struct FYDamageNumberData {
	FVector m_location; // 0x0
	FSlateColor m_color; // 0x10
	FText m_message; // 0x38
	FVector2D m_scale; // 0x50
	float m_duration; // 0x58
	UTexture2D* m_icon; // 0x60
};

struct FMathRBFInterpolateQuatFloat_Target {
	FQuat Target; // 0x0
	float Value; // 0x10
};

struct FSkeletalMeshSamplingBuiltData {
	TArray<FSkeletalMeshSamplingLODBuiltData> WholeMeshBuiltData; // 0x0
	TArray<FSkeletalMeshSamplingRegionBuiltData> RegionBuiltData; // 0x10
};

struct FNiagaraCompileHash {
	TArray<char> DataHash; // 0x0
};

struct FWaterBrushEffectSmoothBlending {
	float InnerSmoothDistance; // 0x0
	float OuterSmoothDistance; // 0x4
};

struct FServerEvaluateRandomResultTableResult : FPlayFabResultCommon {
	FString ResultItemId; // 0x8
};

struct FTestStructForArray {
	FTestDataStruct InternalDataStruct; // 0x0
	FString InternalStringField; // 0x18
	TArray<FString> InternalStringArray; // 0x28
};

struct FServerGetUserInventoryRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FYGetUsersDataByEpicIdsRequest {
	TArray<FString> epicIds; // 0x0
};

struct FRigUnit_AimConstraint_WorkData {
	TArray<FConstraintData> ConstraintData; // 0x0
};

struct FYCharacterExplicitCustomizationDataRow : FYVanityItemRowBase {
	EYCustomizationBodyType m_bodyType; // 0x378
	TMap<EYCustomizationCategory, FYCharacterArchetypeDefaultItemEntry> m_defaultItems; // 0x380
};

struct FRigUnit_AnimRichCurve : FRigUnit_AnimBase {
	FRuntimeFloatCurve Curve; // 0x8
};

struct FYSkipItemCraftingResult {
	FYStopItemCraftingResult stopItemCraftingResult; // 0x0
	TArray<FYCurrencyItem> changedCurrencies; // 0x48
};

struct FRigUnit_AccumulateVectorAdd : FRigUnit_SimBase {
	FVector Increment; // 0x8
	FVector InitialValue; // 0x14
	bool bIntegrateDeltaTime; // 0x20
	FVector Result; // 0x24
	FVector AccumulatedValue; // 0x30
};

struct FMultiplayerGetMatchRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool EscapeObject; // 0x10
	FString MatchID; // 0x18
	FString QueueName; // 0x28
	bool ReturnMemberAttributes; // 0x38
};

struct FRigElement {
	FName Name; // 0x8
	int32_t Index; // 0x10
};

struct FYPaymentEvent : FYBaseAnalyticsEvent {
	FString product_id; // 0xa8
	FString product_name; // 0xb8
	int32_t Price; // 0xc8
	FString reporting_currency; // 0xd0
	int32_t quantity; // 0xe0
};

struct FSTR_MagnetismPresetDesc {
	float MagnetismAngle_5_8B096E6945EFC5DDD740F1B709BE2A2B; // 0x0
	float MagnetismDistance_6_B7C62A7044585A71E22A1B846239BFBC; // 0x4
	float MagnetismFalloffDistance_7_2F2CDE734F88D80D744DD69C5D3688E8; // 0x8
	float MagnetismNearFalloffDistance_8_5DA228F54CEC13B6A73F04B5952C6072; // 0xc
};

struct FCustomMeshTriangle {
	FVector Vertex0; // 0x0
	FVector Vertex1; // 0xc
	FVector Vertex2; // 0x18
};

struct FYPassiveGeneratorsUpdated {
	FString UserId; // 0x0
	TArray<FYPassiveGenerator> updatedGenerators; // 0x10
};

struct FMovieSceneTrackEvaluationFieldEntry {
	UMovieSceneSection* Section; // 0x0
	FFrameNumberRange Range; // 0x8
	FFrameNumber ForcedTime; // 0x18
	ESectionEvaluationFlags Flags; // 0x1c
	int16_t LegacySortOrder; // 0x1e
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

struct FNetAnalyticsDataConfig {
	FName DataName; // 0x0
	bool bEnabled; // 0x8
};

struct FYDamageDealingTriggerData {
	EYWeaponSlotType m_slotTriggerType; // 0x0
	TArray<FDataTableRowHandle> m_dataTableRowHandles; // 0x8
	float m_damageModification; // 0x18
};

struct FClientAddUsernamePasswordResult : FPlayFabResultCommon {
	FString Username; // 0x8
};

struct FYDefaultModAttachmentData {
	TSoftObjectPtr<USkeletalMesh> m_mesh; // 0x0
	FName m_socketAttachmentName; // 0x28
	EYModificationSlotType m_modType; // 0x30
};

struct FYAmmoUpdateInfo {
	int32_t m_ammoLeftInCurrentClip; // 0x0
	float m_ammoPercent; // 0x4
	int32_t m_maxAmmo; // 0x8
	bool m_isAmmoChangeAnIncrement; // 0xc
	int32_t m_ammoLeftOutsideOfCurrentClip; // 0x10
	bool m_haveInfiniteClip; // 0x14
	FName m_ammoTypeID; // 0x18
	UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent; // 0x20
};

struct FBPComponentClassOverride {
	FName ComponentName; // 0x0
	UObject* ComponentClass; // 0x8
};

struct FPolygonToSplit {
	FPolygonID PolygonID; // 0x0
	TArray<FVertexPair> VertexPairsToSplitAt; // 0x8
};

struct FMovieSceneFieldEntry_EvaluationTrack {
	FMovieSceneEvaluationFieldTrackPtr TrackPtr; // 0x0
	uint16_t NumChildren; // 0x8
};

struct FClientGetCharacterLeaderboardRequest : FPlayFabRequestCommon {
	FString CharacterType; // 0x8
	int32_t MaxResultsCount; // 0x18
	int32_t StartPosition; // 0x1c
	FString StatisticName; // 0x20
};

struct FMultiplayerDeleteBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
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

struct FLocalizationGetLanguageListRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMovieSceneEvaluationOperand {
	FGuid ObjectBindingID; // 0x0
	FMovieSceneSequenceID SequenceID; // 0x10
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

struct FYLootRollRow : FYDataTableRowBase {
	TArray<FYWeightedRowHandle> m_rowHandles; // 0x10
};

struct FYSetActiveCharacterVanityResponse {
	FYCharacterVanity returnVanity; // 0x0
};

struct FBlueprintEditorPromotionSettings {
	FFilePath FirstMeshPath; // 0x0
	FFilePath SecondMeshPath; // 0x10
	FFilePath DefaultParticleAsset; // 0x20
};

struct FMultiplayerGetTitleMultiplayerServersQuotasRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FTypeface {
	TArray<FTypefaceEntry> Fonts; // 0x0
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

struct FYInventoryUpdated {
	FYInventory Inventory; // 0x0
};

struct FBrushEffectBlurring {
	bool bBlurShape; // 0x0
	int32_t Radius; // 0x4
};

struct FNiagaraFloat {
	float Value; // 0x0
};

struct FStreamingRenderAssetPrimitiveInfo {
	UStreamableRenderAsset* RenderAsset; // 0x0
	FBoxSphereBounds Bounds; // 0x8
	float TexelFactor; // 0x24
	uint32_t PackedRelativeBox; // 0x28
	char bAllowInvalidTexelFactorWhenUnregistered : 1; // 0x2c
};

struct FYRequestUpgradePickaxe {
	FString UserId; // 0x0
	FString pickaxeId; // 0x10
};

struct FBasedPosition {
	AActor* Base; // 0x0
	FVector Position; // 0x8
	FVector CachedBaseLocation; // 0x14
	FRotator CachedBaseRotation; // 0x20
	FVector CachedTransPosition; // 0x2c
};

struct FCloudScriptUnregisterFunctionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
};

struct FPaperTileMetadata {
	FName UserDataName; // 0x0
	FSpriteGeometryCollection CollisionData; // 0x8
	char TerrainMembership[0x4]; // 0x38
};

struct FYDebugAddFactionProgressResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
	FString factionId; // 0x20
	int32_t reputation; // 0x30
};

struct FYInventoryItems {
	EYCheatResult Status; // 0x0
	TArray<FYCustomItemInfo> Items; // 0x8
};

struct FYStatTypeEntryAssociation {
	TArray<EYGameplayAttribute> m_attributes; // 0x0
	float m_baseValue; // 0x10
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

struct FAdminRemoveServerBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
};

struct FYRetentionBonusRow : FYDataTableRowBase {
	TArray<FYRetentionBonusEntry> m_rewards; // 0x10
	bool m_active; // 0x20
};

struct FAdminCreateInsightsScheduledScalingTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FServerGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FNCPool {
	TArray<FNCPoolElement> FreeElements; // 0x0
	TArray<UNiagaraComponent*> InUseComponents_Auto; // 0x10
	TArray<UNiagaraComponent*> InUseComponents_Manual; // 0x20
};

struct FModularSynthPresetBankEntry {
	FString PresetName; // 0x0
	FModularSynthPreset Preset; // 0x10
};

struct FYPurchaseWeaponShopItemResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCurrencyItem> changedCurrencies; // 0x20
	TArray<FYCustomItemInfo> itemsGrantedOrUpdated; // 0x30
	int32_t itemRarity; // 0x40
	int32_t purchaseAmount; // 0x44
	FString blueprintName; // 0x48
	FString shopItemBelongsTo; // 0x58
};

struct FYQueueDisbanded {
	FString GameMode; // 0x0
	FString Region; // 0x10
};

struct FServerGetPlayFabIDsFromPSNAccountIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FPowerIKWalkingLimb {
	FName StartBone; // 0x0
	FName EndBone; // 0x10
	float LimbMaxLengthMultiplier; // 0x20
	float StepLengthMultiplier; // 0x28
	float StepDuration; // 0x30
	float StepHeight; // 0x38
	TArray<int32_t> RelatedLimbs; // 0x40
	float RotateFootToGround; // 0x50
	float FootCollisionRadius; // 0x54
};

struct FRigVMByteCode {
	TArray<char> ByteCode; // 0x0
	int32_t NumInstructions; // 0x10
	TArray<FRigVMByteCodeEntry> entries; // 0x18
};

struct FYFpsData {
	float m_fps; // 0x0
};

struct FGameplayTagCategoryRemap {
	FString BaseCategory; // 0x0
	TArray<FString> RemapCategories; // 0x10
};

struct FRigUnit_CCDIK_RotationLimitPerItem {
	FRigElementKey Item; // 0x0
	float Limit; // 0xc
};

struct FRBFTarget : FRBFEntry {
	float ScaleFactor; // 0x10
	bool bApplyCustomCurve; // 0x14
	FRichCurve CustomCurve; // 0x18
	ERBFDistanceMethod DistanceMethod; // 0x98
	ERBFFunctionType FunctionType; // 0x99
};

struct FDataGetObjectsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	bool EscapeObject; // 0x18
};

struct FEditorMapPerformanceTestDefinition {
	FSoftObjectPath PerformanceTestmap; // 0x0
	int32_t TestTimer; // 0x18
};

struct FYStaminaStateOverrides {
	TArray<EYPlayerStateBlueprint> m_states; // 0x0
	float m_regenerationRateScalar; // 0x10
};

struct FMovieSceneNiagaraParameterSectionTemplate : FMovieSceneEvalTemplate {
	FNiagaraVariable Parameter; // 0x20
};

struct FFractureMaterial {
	FVector2D UVScale; // 0x0
	FVector2D UVOffset; // 0x8
	FVector Tangent; // 0x10
	float UAngle; // 0x1c
	int32_t InteriorElementIndex; // 0x20
};

struct FMovieSceneCameraShakeSourceTriggerSectionTemplate : FMovieSceneEvalTemplate {
	TArray<FFrameNumber> TriggerTimes; // 0x20
	TArray<FMovieSceneCameraShakeSourceTrigger> TriggerValues; // 0x30
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

struct FNiagaraUserParameterBinding {
	FNiagaraVariable Parameter; // 0x0
};

struct FServerUpdateBansResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> BanData; // 0x8
};

struct FSourceEffectChainEntry {
	USoundEffectSourcePreset* Preset; // 0x0
	char bBypass : 1; // 0x8
};

struct FNiagaraScriptExecutionParameterStore : FNiagaraParameterStore {
	int32_t ParameterSize; // 0x78
	uint32_t PaddedParameterSize; // 0x7c
	TArray<FNiagaraScriptExecutionPaddingInfo> PaddingInfo; // 0x80
	char bInitialized : 1; // 0x90
};

struct FYActiveContractInitData {
	FString UserId; // 0x0
	FString contractId; // 0x10
	TArray<int32_t> contractCurrentProgressBackend; // 0x20
};

struct FServerGetTitleDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FYAISpawnRequest {
	EYSpawnRequestStatus m_status; // 0x0
	AYAICharacter* m_character; // 0x8
	AYAISquad* m_squad; // 0x10
	FVector m_location; // 0x18
	FRotator m_rotation; // 0x24
	FYSquadAIType m_aiType; // 0x30
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

struct FYTransitionRequestData {
	EYTransitionRequest m_requestType; // 0x0
	AActor* m_viewTarget; // 0x8
	FViewTargetTransitionParams m_viewTargetParams; // 0x10
	float m_lockTime; // 0x20
	bool m_withViewTargetParams; // 0x24
	bool m_withTransition; // 0x25
};

struct FSolverTrailingData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	FVector AngularVelocity; // 0x18
	float Mass; // 0x24
	int32_t ParticleIndex; // 0x28
	int32_t ParticleIndexMesh; // 0x2c
};

struct FYPurchaseShopOffer {
	FString shopOfferId; // 0x0
	int32_t quantity; // 0x10
};

struct FServerGetRandomResultTablesResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Tables; // 0x8
};

struct FWaterBrushEffects {
	FWaterBrushEffectBlurring Blurring; // 0x0
	FWaterBrushEffectCurlNoise CurlNoise; // 0x8
	FWaterBrushEffectDisplacement Displacement; // 0x18
	FWaterBrushEffectSmoothBlending SmoothBlending; // 0x40
	FWaterBrushEffectTerracing Terracing; // 0x48
};

struct FYProgressionUnlockData {
	FDataTableRowHandle m_rowHandle; // 0x0
	EYItemRarityType m_rarity; // 0x10
	int32_t m_level; // 0x14
};

struct FWeightedBlendable {
	float weight; // 0x0
	UObject* Object; // 0x8
};

struct FYVivoxJoinTokenRequest {
	FString Username; // 0x0
	FString Channel; // 0x10
	EYChannelType ChannelType; // 0x20
	bool hasText; // 0x21
	bool hasAudio; // 0x22
	FString channelId; // 0x28
};

struct FMatchmakerPlayerJoinedRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString LobbyId; // 0x10
	FString PlayFabId; // 0x20
};

struct FYMissionProgressionInfo {
	FString currentMissionID; // 0x0
	int32_t progress; // 0x10
	bool showPopup; // 0x14
};

struct FServerUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString PlayFabId; // 0x28
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

struct FYMineralDefinitionRow : FYAssetVariationDefinitionRow {
	TSoftObjectPtr<UDestructibleMesh> m_destructibleMesh; // 0x10
	FDataTableRowHandle m_scannableRowHandle; // 0x38
	TArray<TSoftObjectPtr<UMaterialInterface>> m_destructibleMaterialOverrides; // 0x48
	TMap<EYMineralTier, FDataTableRowHandle> m_lootListRoll; // 0x58
};

struct FLinearColor {
	float R; // 0x0
	float G; // 0x4
	float B; // 0x8
	float A; // 0xc
};

struct FClientGetPlayFabIDsFromFacebookIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FYMutedNotification {
	int32_t durationSeconds; // 0x0
	EYMuteReason Reason; // 0x4
};

struct FCameraLensSettings {
	float MinFocalLength; // 0x0
	float MaxFocalLength; // 0x4
	float MinFStop; // 0x8
	float MaxFStop; // 0xc
	float MinimumFocusDistance; // 0x10
	int32_t DiaphragmBladeCount; // 0x14
};

struct FMultiplayerUntagContainerImageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
	FString Tag; // 0x20
};

struct FClothCollisionPrim_Box {
	FVector LocalPosition; // 0x0
	FQuat LocalRotation; // 0x10
	FVector HalfExtents; // 0x20
	int32_t BoneIndex; // 0x2c
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

struct FServerUpdatePlayerStatisticsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	bool ForceUpdate; // 0x10
	FString PlayFabId; // 0x18
	TArray<UPlayFabJsonObject*> Statistics; // 0x28
};

struct FUserActivity {
	FString ActionName; // 0x0
};

struct FClientGetPlayerCombinedInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* InfoRequestParameters; // 0x10
	FString PlayFabId; // 0x18
};

struct FARSessionPayload {
	int32_t ConfigFlags; // 0x0
	UMaterialInterface* DefaultMeshMaterial; // 0x8
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x10
};

struct FYTestRequestData {
	int32_t IntegerField; // 0x0
	float FloatField; // 0x4
	bool BooleanField; // 0x8
	FString StringField; // 0x10
	TArray<FString> StringArray; // 0x20
	TArray<uint32_t> SGD; // 0x30
	FTestDataStruct DataStruct; // 0x40
	TArray<FTestStructForArray> ArrayOfStructs; // 0x58
};

struct FClientGetContentDownloadUrlRequest : FPlayFabRequestCommon {
	FString HttpMethod; // 0x8
	FString Key; // 0x18
	bool ThruCDN; // 0x28
};

struct FClientLoginWithSteamRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString SteamTicket; // 0x40
};

struct FServerGrantItemsToCharacterRequest : FPlayFabRequestCommon {
	FString Annotation; // 0x8
	FString CatalogVersion; // 0x18
	FString CharacterId; // 0x28
	UPlayFabJsonObject* CustomTags; // 0x38
	FString ItemIds; // 0x40
	FString PlayFabId; // 0x50
};

struct FYPlayerContractsInfoUpdated {
	FString UserId; // 0x0
	TArray<FYFactionContractsData> factionsContracts; // 0x10
	FYTimestamp lastBoardRefreshTimeUtc; // 0x20
};

struct FAdminCreateActionsOnPlayerSegmentTaskRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	bool IsActive; // 0x20
	FString Name; // 0x28
	UPlayFabJsonObject* Parameter; // 0x38
	FString Schedule; // 0x40
};

struct FYPlayfabStoreItemEntry {
	FString ItemId; // 0x0
	FString StoreId; // 0x10
	FString Catalog; // 0x20
	TMap<FString, int32_t> virtualCurrencyPrices; // 0x30
};

struct FAdminSendAccountRecoveryEmailRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString EmailTemplateId; // 0x20
};

struct FServerGetCharacterInventoryRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CharacterId; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	FString PlayFabId; // 0x30
};

struct FYFallingDamageInfo {
	float m_distanceFalling; // 0x0
	float m_unmodifiedDamage; // 0x4
	float m_damage; // 0x8
	float m_healthBefore; // 0xc
	float m_healthAfter; // 0x10
	FVector m_fallingStartLocation; // 0x14
	FVector m_fallingImpactLocation; // 0x20
};

struct FYGetOwnedCharacterArchetypesResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FName> archetypeIds; // 0x20
};

struct FYServerReport {
	TArray<FYStationInfoProto> infos; // 0x0
};

struct FPawnActionEvent {
	UPawnAction* Action; // 0x0
};

struct FCustomizedToolMenuEntry {
	ECustomizedToolMenuVisibility Visibility; // 0x0
};

struct FYAuthorithyPlayerState {
	TArray<int64_t> m_acknowledgedPredictedEventCounters; // 0x0
	TArray<int64_t> m_serverEventAuthorithyCounter; // 0x10
	int64_t m_stateBitmask; // 0x20
	int64_t m_lastStateChangeWasInterrupted; // 0x28
};

struct FYAIHitReactionAnimData {
	TArray<UAnimMontage*> m_animMontages; // 0x0
	float m_angle; // 0x10
};

struct FStaticTerrainLayerWeightParameter : FStaticParameterBase {
	int32_t WeightmapIndex; // 0x24
	bool bWeightBasedBlend; // 0x28
};

struct FProgressBarStyle : FSlateWidgetStyle {
	FSlateBrush BackgroundImage; // 0x8
	FSlateBrush FillImage; // 0x90
	FSlateBrush MarqueeImage; // 0x118
};

struct FClientValidateAmazonReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FClientGetPlayerTagsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Namespace; // 0x10
	FString PlayFabId; // 0x20
};

struct FYRebindableInputAction : FYDataTableRowBase {
	EYInputKeyType m_keyType; // 0x10
	FName m_axisNegativeInputAction; // 0x14
	bool m_isRebindable; // 0x1c
	bool m_isRequired; // 0x1d
	EYInputBindingCategory m_inputBindingCategory; // 0x1e
	FText m_keyBindingText; // 0x20
	FText m_keyBindingTextAxisNegative; // 0x38
};

struct FEditorElement {
	int32_t Indices[0x3]; // 0x0
	float Weights[0x3]; // 0xc
};

struct FYLeaderBoardDataPerGameMode {
	EYMatchmakeGameModeType m_gameModeType; // 0x0
	FYRankEntries m_leaderBoardData; // 0x8
};

struct FYDebugRemoveAllItemsFromPlayerResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCustomItemInfo> returnedItems; // 0x20
};

struct FRigUnit_MathVectorRemap : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	FVector SourceMinimum; // 0x14
	FVector SourceMaximum; // 0x20
	FVector TargetMinimum; // 0x2c
	FVector TargetMaximum; // 0x38
	bool bClamp; // 0x44
	FVector Result; // 0x48
};

struct FRootMotionSource_MoveToDynamicForce : FRootMotionSource {
	FVector StartLocation; // 0x98
	FVector InitialTargetLocation; // 0xa4
	FVector TargetLocation; // 0xb0
	bool bRestrictSpeedToExpected; // 0xbc
	UCurveVector* PathOffsetCurve; // 0xc0
	UCurveFloat* TimeMappingCurve; // 0xc8
};

struct FRigControlValue {
	FRigControlValueStorage FloatStorage; // 0x0
	FTransform Storage; // 0x50
};

struct FRigUnit_FABRIK_WorkData {
	TArray<FFABRIKChainLink> Chain; // 0x0
	TArray<FCachedRigElement> CachedItems; // 0x10
	FCachedRigElement CachedEffector; // 0x20
};

struct FPropertyPathSegment {
	FName Name; // 0x0
	int32_t ArrayIndex; // 0x8
	UStruct* Struct; // 0x10
};

struct FRigUnit_MathVectorLerp : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float T; // 0x20
	FVector Result; // 0x24
};

struct FMovieSceneGeometryCacheSectionTemplateParameters : FMovieSceneGeometryCacheParams {
	FFrameNumber SectionStartTime; // 0x40
	FFrameNumber SectionEndTime; // 0x44
};

struct FRigUnitMutable : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FMovieSceneActorReferenceKey {
	FMovieSceneObjectBindingID Object; // 0x0
	FName ComponentName; // 0x18
	FName SocketName; // 0x20
};

struct FYAutonomousMoveData {
	FRotator m_pawnRotation; // 0x0
	FVector m_impulse; // 0xc
	char m_replicatePawnRotation : 1; // 0x18
	char m_wantBoost : 1; // 0x18
	char m_wantClientAuthPosition : 1; // 0x18
	char m_wantToApplyImpulse : 1; // 0x18
	char m_assignClientLocationDirectly : 1; // 0x18
	char m_savedWantsClimb : 1; // 0x18
	FVector m_savedClimbEndLocation; // 0x1c
	FVector m_savedClimbStartLocation; // 0x28
	float m_savedClimbTimer; // 0x34
	float m_savedClimbingSpeed; // 0x38
	char m_savedClimbMoveType; // 0x3c
	float m_savedLeanAngle; // 0x40
	char m_savedLeanTarget; // 0x44
};

struct FMathRBFInterpolateVectorVector_Target {
	FVector Target; // 0x0
	FVector Value; // 0xc
};

struct FEscMenuButtonData {
	UYNavigationCommand* m_commandClass; // 0x0
	UYNavigationCommand* m_command; // 0x8
	FText m_buttonLabel; // 0x10
	USlateWidgetStyleAsset* m_buttonStyle; // 0x28
};

struct FLevelCollection {
	AGameStateBase* GameState; // 0x8
	UNetDriver* NetDriver; // 0x10
	UDemoNetDriver* DemoNetDriver; // 0x18
	ULevel* PersistentLevel; // 0x20
	TSet<ULevel*> Levels; // 0x28
};

struct FYWeaponVanityRow : FYVanityItemRowBase {
	TMap<FName, TSoftObjectPtr<UMaterialInterface>> m_defaultAttachmentMaterials; // 0x378
	TArray<FYWeaponVanityMeshAttachment> m_overrideVanityMeshAttachments; // 0x3c8
};

struct FMultiplayerUploadCertificateRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* GameCertificate; // 0x10
};

struct FRootMotionFinishVelocitySettings {
	ERootMotionFinishVelocityMode Mode; // 0x0
	FVector SetVelocity; // 0x4
	float ClampVelocity; // 0x10
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

struct FYActivitySetsRow : FTableRowBase {
	TArray<EYActivityType> m_activities; // 0x8
};

struct FPrimitiveMaterialRef {
	UPrimitiveComponent* Primitive; // 0x0
	UDecalComponent* Decal; // 0x8
	int32_t ElementIndex; // 0x10
};

struct FRigUnit_MathFloatGreaterEqual : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FYCollectibleLootPoolRow : FYDataTableRowBase {
	TArray<FYCollectibleLootBucket> m_lootBuckets; // 0x10
};

struct FRigUnit_RandomFloat : FRigUnit_MathBase {
	int32_t Seed; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float Duration; // 0x14
	float Result; // 0x18
	float LastResult; // 0x1c
	int32_t LastSeed; // 0x20
	float timeLeft; // 0x24
};

struct FRigUnit_ChainHarmonics_Wave {
	bool bEnabled; // 0x0
	FVector WaveFrequency; // 0x4
	FVector WaveAmplitude; // 0x10
	FVector WaveOffset; // 0x1c
	FVector WaveNoise; // 0x28
	float WaveMinimum; // 0x34
	float WaveMaximum; // 0x38
	EControlRigAnimEasingType WaveEase; // 0x3c
};

struct FMovieSceneObjectPathChannelKeyValue {
	TSoftObjectPtr<UObject> SoftPtr; // 0x0
	UObject* HardPtr; // 0x28
};

struct FYDebugClearAllCompletedContractsRequest {
	FString UserId; // 0x0
};

struct FServerGetServerCustomIDsFromPlayFabIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FInAppPurchaseRestoreInfo {
	FString Identifier; // 0x0
	FString ReceiptData; // 0x10
	FString TransactionIdentifier; // 0x20
};

struct FTransformBaseConstraint {
	TArray<FRigTransformConstraint> TransformConstraints; // 0x0
};

struct FYPlayFabSquadMember {
	FYPlayFabPlayerProfile Profile; // 0x0
	EYUserState onlineState; // 0x30
	FYUserMatchmakingSettings matchmakingSettings; // 0x38
};

struct FBoolTrackKey {
	float Time; // 0x0
	char Value : 1; // 0x4
};

struct FMovieSceneFloatValue {
	float Value; // 0x0
	FMovieSceneTangentData Tangent; // 0x4
	ERichCurveInterpMode InterpMode; // 0x18
	ERichCurveTangentMode TangentMode; // 0x19
	char PaddingByte; // 0x1a
};

struct FBlendSample {
	UAnimSequence* Animation; // 0x0
	FVector SampleValue; // 0x8
	float RateScale; // 0x14
};

struct FYCharacterCustomizationSetCharacterSlot {
	FString UserId; // 0x0
	int32_t requested_slot; // 0x10
};

struct FYGameSessionSettings : FYDataTableRowBase {
	int32_t m_sessionLengthSeconds; // 0x10
	int32_t m_sessionUntilWarning; // 0x14
};

struct FYAIDodgeDefinition {
	float m_dodgeDamagedThreshold; // 0x0
	float m_dodgeMinDot2DToCombatTarget; // 0x4
	float m_dodgeBlockDurationAfterDodge; // 0x8
	float m_chanceCancelHitReactionByDodge; // 0xc
};

struct FTimeSynthQuantizationSettings {
	float BeatsPerMinute; // 0x0
	int32_t BeatsPerBar; // 0x4
	ETimeSynthBeatDivision BeatDivision; // 0x8
	float EventDelaySeconds; // 0xc
	ETimeSynthEventQuantization GlobalQuantization; // 0x10
};

struct FRigUnit_VisualDebugVectorItemSpace : FRigUnit_DebugBase {
	FVector Value; // 0x8
	bool bEnabled; // 0x14
	ERigUnitVisualDebugPointMode Mode; // 0x15
	FLinearColor Color; // 0x18
	float Thickness; // 0x28
	float Scale; // 0x2c
	FRigElementKey Space; // 0x30
};

struct FCrowdAvoidanceSamplingPattern {
	TArray<float> Angles; // 0x0
	TArray<float> Radii; // 0x10
};

struct FAnimPhysPlanarLimit {
	FBoneReference DrivingBone; // 0x0
	FTransform PlaneTransform; // 0x10
};

struct FYDebugGiveSeasonLevel {
	int32_t levelIncrement; // 0x0
};

struct FAdaptorPolygon2Group {
	uint32_t RenderingSectionIndex; // 0x0
	int32_t MaterialIndex; // 0x4
	int32_t MaxTriangles; // 0x8
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

struct FChunkPartData {
	FGuid Guid; // 0x0
	uint32_t Offset; // 0x10
	uint32_t Size; // 0x14
};

struct FAdminGetTitleDataRequest : FPlayFabRequestCommon {
	FString Keys; // 0x8
	FString OverrideLabel; // 0x18
};

struct FNiagaraEmitterHandle {
	FGuid ID; // 0x0
	FName IdName; // 0x10
	bool bIsEnabled; // 0x18
	FName Name; // 0x1c
	UNiagaraEmitter* Instance; // 0x28
};

struct FWalkableSlopeOverride {
	EWalkableSlopeBehavior WalkableSlopeBehavior; // 0x0
	float WalkableSlopeAngle; // 0x4
};

struct FRigUnit_IsInteracting : FRigUnit {
	bool bIsInteracting; // 0x8
};

struct FPartyReservation {
	int32_t TeamNum; // 0x0
	FUniqueNetIdRepl PartyLeader; // 0x8
	TArray<FPlayerReservation> PartyMembers; // 0x30
	TArray<FPlayerReservation> RemovedPartyMembers; // 0x40
};

struct FYCompleteInventoryUpdateResult {
	FString UserId; // 0x0
	EYCompleteInventoryUpdateReason Reason; // 0x10
	TArray<FString> itemsRemoved; // 0x18
	TArray<FYCustomItemInfo> itemsAdded; // 0x28
	TArray<FString> itemsUpdated; // 0x38
	FYPlayerSet newSet; // 0x48
};

struct FYPlayFabFriend {
	FString FriendPlayFabId; // 0x0
	EYFriendState State; // 0x10
	FString TitleDisplayName; // 0x18
};

struct FServerGetLeaderboardForUsersCharactersRequest : FPlayFabRequestCommon {
	int32_t MaxResultsCount; // 0x8
	FString PlayFabId; // 0x10
	FString StatisticName; // 0x20
};

struct FMovieSceneObjectPropertyTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneObjectPathChannel ObjectChannel; // 0x38
};

struct FRigUnit_MathIntEquals : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	bool Result; // 0x10
};

struct FMultiplayerRolloverContainerRegistryCredentialsResponse : FPlayFabResultCommon {
	FString DnsName; // 0x8
	FString Password; // 0x18
	FString Username; // 0x28
};

struct FRigMirrorSettings {
	EAxis MirrorAxis; // 0x0
	EAxis AxisToFlip; // 0x1
	FString OldName; // 0x8
	FString NewName; // 0x18
};

struct FFilePath {
	FString FilePath; // 0x0
};

struct FYAIHitReactionAnimationRow : FYDataTableRowBase {
	TMap<EYHitZone, FName> m_hitZoneToBoneNameMapping; // 0x10
	TMap<FName, FYAIHitReactionSetData> m_hitReactionSetDataPerStabilityLevel; // 0x60
};

struct FYGetPlayerContractsRequest {
	FString UserId; // 0x0
	bool forceBoardsRefresh; // 0x10
};

struct FMultiplayerCreateBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasName; // 0x8
	TArray<UPlayFabJsonObject*> BuildSelectionCriteria; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
};

struct FYLastAcknowledgedFactionProgress {
	FString m_factionId; // 0x0
	int32_t m_factionLevel; // 0x10
	int32_t m_factionLevelXP; // 0x14
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

struct FYWeightedRowHandle {
	FDataTableRowHandle m_rowHandle; // 0x0
	float m_spawnWeight; // 0x10
	float m_spawnChanceInPercent; // 0x14
};

struct FLensBloomSettings {
	FGaussianSumBloomSettings GaussianSum; // 0x0
	FConvolutionBloomSettings Convolution; // 0x88
	EBloomMethod Method; // 0xb0
};

struct FYTechTreeNodeType : FYDataTableRowBase {
	FText m_perkName; // 0x10
	FText m_perkDescription; // 0x28
	TSoftObjectPtr<UTexture2D> m_nodeIcon; // 0x40
	FText m_nodeBonusDescription; // 0x68
	FName m_nodeId; // 0x80
	TArray<EYTechtreeCategoryType> m_categories; // 0x88
	int32_t m_playerQuarterLevelRequired; // 0x98
	int32_t m_tier; // 0x9c
	EYTechTreeNodePerkType m_nodePerkType; // 0xa0
	TArray<FYTechTreeNodeUpgradeLevelRow> m_perkLevels; // 0xa8
	TArray<FYTechTreeNodeUpgradeDependencyRow> m_upgradeDependencies; // 0xb8
};

struct FCustomPrimitiveData {
	TArray<float> Data; // 0x0
};

struct FRigUnit_MathRBFInterpolateQuatFloat : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatFloat_Target> Targets; // 0xd0
	float Output; // 0xe0
};

struct FAdminGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FAdminSetupPushNotificationRequest : FPlayFabRequestCommon {
	FString Credential; // 0x8
	FString Key; // 0x18
	FString Name; // 0x28
	bool OverwriteOldARN; // 0x38
	EPushSetupPlatform Platform; // 0x39
};

struct FStructSerializerTestStruct {
	FStructSerializerNumericTestStruct Numerics; // 0x0
	FStructSerializerBooleanTestStruct Booleans; // 0x30
	FStructSerializerObjectTestStruct Objects; // 0x38
	FStructSerializerBuiltinTestStruct Builtins; // 0xe0
	FStructSerializerArrayTestStruct Arrays; // 0x170
	FStructSerializerMapTestStruct maps; // 0x1d0
	FStructSerializerSetTestStruct Sets; // 0x310
};

struct FYGameModeConfig {
	EYMatchmakeGameModeType m_gameModeType; // 0x0
	bool m_isRanked; // 0x1
	bool m_isEnabled; // 0x2
	bool m_isAlwaysVisible; // 0x3
	bool m_isTournamentMode; // 0x4
};

struct FReferencePose {
	FName PoseName; // 0x0
	TArray<FTransform> ReferencePose; // 0x8
};

struct FYSocialNotificationUpdate {
	FString UserId; // 0x0
	int32_t Type; // 0x10
	FYSocialProfileEntry Entry; // 0x18
};

struct FExperimentationCreateExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	int32_t Duration; // 0x20
	EExperimentType ExperimentType; // 0x24
	FString Name; // 0x28
	FString SegmentId; // 0x38
	FString StartDate; // 0x48
	FString TitlePlayerAccountTestIds; // 0x58
	TArray<UPlayFabJsonObject*> Variants; // 0x68
};

struct FRigUnit_DebugPointMutable : FRigUnit_DebugBaseMutable {
	FVector Vector; // 0x68
	ERigUnitDebugPointMode Mode; // 0x74
	FLinearColor Color; // 0x78
	float Scale; // 0x88
	float Thickness; // 0x8c
	FName Space; // 0x90
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FMeshUVChannelInfo {
	bool bInitialized; // 0x0
	bool bOverrideDensities; // 0x1
	float LocalUVDensities[0x4]; // 0x4
};

struct FNiagaraBool {
	int32_t Value; // 0x0
};

struct FYTournamentDataAddUser {
	FString UserId; // 0x0
};

struct FYControllerCustomizationState {
	FTransform m_worldTransform; // 0x0
	EYCustomizationMode m_customizationMode; // 0x30
	EYCustomizationCategory m_customizationCategory; // 0x31
	bool m_rotationEnabled; // 0x32
};

struct FRigUnit_TransformConstraint : FRigUnit_HighlevelBaseMutable {
	FName Bone; // 0x68
	ETransformSpaceMode BaseTransformSpace; // 0x70
	FTransform BaseTransform; // 0x80
	FName BaseBone; // 0xb0
	TArray<FConstraintTarget> Targets; // 0xb8
	bool bUseInitialTransforms; // 0xc8
	FRigUnit_TransformConstraint_WorkData WorkData; // 0xd0
};

struct FYAIStaggerTriggerWeakspotHealth {
	TArray<FName> m_hitspotNames; // 0x0
	float m_damage; // 0x10
	FName m_staggerName; // 0x14
};

struct FMatchmakerUserInfoRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t MinCatalogVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FNCPoolElement {
	UNiagaraComponent* Component; // 0x0
};

struct FYVivoxSettingsData {
	FString vivoxServer; // 0x0
	FString vivoxDomain; // 0x10
	FString vivoxIssuer; // 0x20
};

struct FRadialDamageParams {
	float BaseDamage; // 0x0
	float MinimumDamage; // 0x4
	float InnerRadius; // 0x8
	float OuterRadius; // 0xc
	float DamageFalloff; // 0x10
};

struct FAdminRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FClientModifyUserVirtualCurrencyResult : FPlayFabResultCommon {
	int32_t Balance; // 0x8
	int32_t BalanceChange; // 0xc
	FString PlayFabId; // 0x10
	FString VirtualCurrency; // 0x20
};

struct FYWeaponTooltipData {
	float m_weaponDamage; // 0x0
	TArray<FName> m_weaponMods; // 0x8
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

struct FAnimationStateBase {
	FName StateName; // 0x0
};

struct FYPlayfabLoginData {
	FString m_userId; // 0x0
	FString m_titleId; // 0x10
	FString m_secretKey; // 0x20
	FString m_username; // 0x30
	FString m_email; // 0x40
	FString m_password; // 0x50
	int32_t m_localUserNum; // 0x60
	EYPlayfabLoginType m_loginType; // 0x64
	bool m_inEditorServer; // 0x65
};

struct FAdminGetStoreItemsResult : FPlayFabResultCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* MarketingData; // 0x18
	EPfSourceType Source; // 0x20
	TArray<UPlayFabJsonObject*> Store; // 0x28
	FString StoreId; // 0x38
};

struct FYInboxMessagesDataUpdated {
	TArray<FYInboxMessage> inboxMessages; // 0x0
};

struct FAdminAddPlayerTagRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	FString TagName; // 0x20
};

struct FYCreditIncomeAnalyticsData : FYBaseAnalyticsEvent {
	FString item_id; // 0xa8
	int32_t item_amount; // 0xb8
	int32_t credit_source; // 0xbc
	bool shared_income; // 0xc0
	int32_t location_x; // 0xc4
	int32_t location_y; // 0xc8
	int32_t time_since_match_start; // 0xcc
	FString instigator_tags; // 0xd0
};

struct FNiagaraScalabilityManager {
	UNiagaraEffectType* EffectType; // 0x0
	TArray<UNiagaraComponent*> ManagedComponents; // 0x8
};

struct FAdminGrantItemsToUsersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> ItemGrantResults; // 0x8
};

struct FRigUnit_MathVectorAngle : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	float Result; // 0x20
};

struct FSimulatedRootMotionReplicatedMove {
	float Time; // 0x0
	FRepRootMotionMontage RootMotion; // 0x8
};

struct FExperimentationStartExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FARObjectUpdatePayload {
	FTransform WorldTransform; // 0x0
};

struct FMultiplayerGetAssetUploadUrlRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Filename; // 0x10
};

struct FYWeaponTransportCapsuleData {
	float m_radius; // 0x0
	float m_halfHeight; // 0x4
	bool m_skipTraceToVerifyHit; // 0x8
	float m_minDot2DThreshold; // 0xc
	bool m_verifyLineOfSight; // 0x10
};

struct FDropNoteInfo {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FString Comment; // 0x18
};

struct FExperimentationUpdateExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Description; // 0x10
	int32_t Duration; // 0x20
	EExperimentType ExperimentType; // 0x24
	FString ID; // 0x28
	FString Name; // 0x38
	FString SegmentId; // 0x48
	FString StartDate; // 0x58
	FString TitlePlayerAccountTestIds; // 0x68
	TArray<UPlayFabJsonObject*> Variants; // 0x78
};

struct FRigUnit_AccumulateFloatRange : FRigUnit_SimBase {
	float Value; // 0x8
	float Minimum; // 0xc
	float Maximum; // 0x10
	float AccumulatedMinimum; // 0x14
	float AccumulatedMaximum; // 0x18
};

struct FClientValidateWindowsReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
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

struct FCameraTrackingFocusSettings {
	TSoftObjectPtr<AActor> ActorToTrack; // 0x0
	FVector RelativeOffset; // 0x28
	char bDrawDebugTrackingFocusPoint : 1; // 0x34
};

struct FServerSavePushNotificationTemplateRequest : FPlayFabRequestCommon {
	FString AndroidPayload; // 0x8
	FString ID; // 0x18
	FString IOSPayload; // 0x28
	UPlayFabJsonObject* LocalizedPushNotificationTemplates; // 0x38
	FString Name; // 0x40
};

struct FRootMotionSource_ConstantForce : FRootMotionSource {
	FVector Force; // 0x98
	UCurveFloat* StrengthOverTime; // 0xa8
};

struct FYPersistentSessionResetResult {
	bool SUCCESS; // 0x0
	int32_t numServersShutdown; // 0x4
};

struct FRigUnit_VisualDebugQuatItemSpace : FRigUnit_DebugBase {
	FQuat Value; // 0x10
	bool bEnabled; // 0x20
	float Thickness; // 0x24
	float Scale; // 0x28
	FRigElementKey Space; // 0x2c
};

struct FMatchStatsMapWrapper {
	TMap<FName, int32_t> MatchStatsMap; // 0x0
};

struct FYChatMessageInputData {
	FYMessage m_message; // 0x0
	bool m_propogateDataToChatAPI; // 0x28
};

struct FStaticMeshVertexColorLODData {
	TArray<FPaintedVertex> PaintedVertices; // 0x0
	TArray<FColor> VertexBufferColors; // 0x10
	uint32_t LODIndex; // 0x20
};

struct FPatchId {
	int32_t ID; // 0x0
};

struct FGameNameRedirect {
	FName OldGameName; // 0x0
	FName NewGameName; // 0x8
};

struct FServerSetFriendTagsRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
	FString Tags; // 0x28
};

struct FYItemShopInfo {
	TArray<FYItemCraftingDataPerShop> m_factions; // 0x0
};

struct FYDroppodDataTableRow : FYVanityItemRowBase {
	TSoftClassPtr<UObject> m_desiredDroppodPath; // 0x378
};

struct FClientGetCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
};

struct FRigInfluenceMap {
	FName EventName; // 0x0
	TArray<FRigInfluenceEntry> entries; // 0x8
	TMap<FRigElementKey, int32_t> KeyToIndex; // 0x18
};

struct FWeightedBlendables {
	TArray<FWeightedBlendable> Array; // 0x0
};

struct FYMatchmakingSetupEntry {
	int32_t maxAmountOfPlayers; // 0x0
	int32_t maxAmountOfPlayersBeginner; // 0x4
	EYMatchmakingUsersAmountOptions usersAmountOption; // 0x8
	int32_t m_sessionTotalLengthUntilShutdown; // 0xc
	int32_t m_sessionUntilNoMatchmaking; // 0x10
	int32_t m_sessionUntilClientWarning; // 0x14
	int32_t m_sessionNoPlayerConnectServerShutdown; // 0x18
};

struct FClientGrantCharacterToUserResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	FString CharacterType; // 0x18
	bool Result; // 0x28
};

struct FRigUnit_Harmonics_TargetItem {
	FRigElementKey Item; // 0x0
	float Ratio; // 0xc
};

struct FConstraintBaseParams {
	float Stiffness; // 0x0
	float Damping; // 0x4
	float Restitution; // 0x8
	float ContactDistance; // 0xc
	char bSoftConstraint : 1; // 0x10
};

struct FRigUnit_QuaternionFromAxisAndAngle : FRigUnit {
	FVector Axis; // 0x8
	float Angle; // 0x14
	FQuat Result; // 0x20
};

struct FYPlayerSeasonsData {
	FName seasonRowId; // 0x0
	FString startDateTime; // 0x8
	FString endDateTime; // 0x18
	int32_t xp; // 0x28
	int32_t Level; // 0x2c
	bool hasPaidPass; // 0x30
};

struct FYGetCharacterVanityRequest {
	FString UserId; // 0x0
};

struct FYGetPlayersSets {
	TArray<FString> userIds; // 0x0
};

struct FAnimationTransitionRule {
	FName RuleToExecute; // 0x0
	bool TransitionReturnVal; // 0x8
	int32_t TransitionIndex; // 0xc
};

struct FYProspectorLevelUp : FYBaseAnalyticsEvent {
	int32_t prospector_level; // 0xa8
};

struct FYVOCategoryRow : FYDataTableRowBase {
	uint32_t m_priority; // 0x10
	FLinearColor m_color; // 0x14
};

struct FYMatchPhaseDefinitionRow : FYDataTableRowBase {
	float m_phaseDuration; // 0x10
	FDataTableRowHandle m_visualRowHandle; // 0x18
	FDataTableRowHandle m_gameplayRowHandle; // 0x28
};

struct FYPlayerSkillData {
	FString UserId; // 0x0
	int32_t skill; // 0x10
	int32_t deviation; // 0x14
};

struct FMultiplayerListAssetSummariesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t PageSize; // 0x10
	FString SkipToken; // 0x18
};

struct FRigUnit_TwistBones : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	FVector TwistAxis; // 0x78
	FVector PoleAxis; // 0x84
	EControlRigAnimEasingType TwistEaseType; // 0x90
	float weight; // 0x94
	bool bPropagateToChildren; // 0x98
	FRigUnit_TwistBones_WorkData WorkData; // 0xa0
};

struct FAssetData {
	FName ObjectPath; // 0x0
	FName PackageName; // 0x8
	FName PackagePath; // 0x10
	FName AssetName; // 0x18
	FName AssetClass; // 0x20
};

struct FRigUnit_MathVectorParallel : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	bool Result; // 0x20
};

struct FReplicatedStaticActorDestructionInfo {
	UObject* ObjClass; // 0x30
};

struct FEyeTrackerStereoGazeData {
	FVector LeftEyeOrigin; // 0x0
	FVector LeftEyeDirection; // 0xc
	FVector RightEyeOrigin; // 0x18
	FVector RightEyeDirection; // 0x24
	FVector FixationPoint; // 0x30
	float ConfidenceValue; // 0x3c
};

struct FYModifyPlayerSkills {
	TArray<FYModifySkillEntry> entries; // 0x0
};

struct FYGetSignalRConnectionResult {
	FString URL; // 0x0
	FString AccessToken; // 0x10
};

struct FRigUnit_MathVectorLength : FRigUnit_MathVectorBase {
	FVector Value; // 0x8
	float Result; // 0x14
};

struct FLightmassLightSettings {
	float IndirectLightingSaturation; // 0x0
	float ShadowExponent; // 0x4
	bool bUseAreaShadowsForStationaryLight; // 0x8
};

struct FYRewardInventory {
	FString UserId; // 0x0
	TArray<FYPlayerReward> Materials; // 0x10
	TArray<FYPlayerReward> currencies; // 0x20
	EYPlayerRewardSource Source; // 0x30
};

struct FYMapErrorInfo {
	TArray<FString> m_errors; // 0x0
};

struct FYMenuCameraCustomizationCategoryAssociation {
	EYCustomizationCategory m_category; // 0x0
	AActor* m_cameraActor; // 0x8
	AActor* m_pointOfInterest; // 0x10
	FVector m_startLocation; // 0x18
	FVector m_startTowardsPointOfInterest; // 0x24
	float m_angleRestriction; // 0x30
	float m_blendTime; // 0x34
	bool m_allowYawRotation; // 0x38
	bool m_allowPitchRotation; // 0x39
	EYCameraIntentionType m_visualizationIntention; // 0x3a
	EYCameraDistanceType m_distanceType; // 0x3b
};

struct FNamedId {
	FString Name; // 0x0
	FGuid ID; // 0x10
	bool bIsPublic; // 0x20
};

struct FYMatchInventoryUpdate {
	TArray<FString> m_idsToRemove; // 0x0
	TArray<FYInventoryItem> m_itemsToUpdate; // 0x10
	TArray<FYInventoryItem> m_itemsToAdd; // 0x20
};

struct FNavigationSegmentLink : FNavigationLinkBase {
	FVector LeftStart; // 0x30
	FVector LeftEnd; // 0x3c
	FVector RightStart; // 0x48
	FVector RightEnd; // 0x54
};

struct FClientGetCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t IfChangedFromDataVersion; // 0x18
	FString Keys; // 0x20
	FString PlayFabId; // 0x30
};

struct FYSearchSocialProfiles {
	FString Username; // 0x0
	int32_t searchRequest; // 0x10
	bool includePresence; // 0x14
};

struct FMovieSceneTrackIdentifier {
	uint32_t Value; // 0x0
};

struct FCameraLookatTrackingSettings {
	char bEnableLookAtTracking : 1; // 0x0
	char bDrawDebugLookAtTrackingPosition : 1; // 0x0
	float LookAtTrackingInterpSpeed; // 0x4
	TSoftObjectPtr<AActor> ActorToTrack; // 0x18
	FVector RelativeOffset; // 0x40
	char bAllowRoll : 1; // 0x4c
};

struct FMatchmakerAuthUserResponse : FPlayFabResultCommon {
	bool Authorized; // 0x8
	FString PlayFabId; // 0x10
};

struct FYSimplePlayerProfile {
	FString PlayFabId; // 0x0
	FString DisplayName; // 0x10
};

struct FYPlayerAimDirectionData {
	FRotator m_aimRotation; // 0x0
	FRotator m_capsuleRotation; // 0xc
	FRotator m_actorRotation; // 0x18
	bool m_isTargeting; // 0x24
	bool m_isPendingTargeting; // 0x25
};

struct FClusterNode_DEPRECATED {
	FVector BoundMin; // 0x0
	int32_t FirstChild; // 0xc
	FVector BoundMax; // 0x10
	int32_t LastChild; // 0x1c
	int32_t FirstInstance; // 0x20
	int32_t LastInstance; // 0x24
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

struct FBlendBoneByChannelEntry {
	FBoneReference SourceBone; // 0x0
	FBoneReference TargetBone; // 0x10
	bool bBlendTranslation; // 0x20
	bool bBlendRotation; // 0x21
	bool bBlendScale; // 0x22
};

struct FMovieSceneBoolChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	bool DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x19
	TArray<bool> Values; // 0x20
};

struct FRigUnit_GetDeltaTime : FRigUnit_AnimBase {
	float Result; // 0x8
};

struct FYCharacterCustomizationDefaultDataRow : FYDataTableRowBase {
	FDataTableRowHandle m_defaultArchetype; // 0x10
	int32_t m_maxAmountOfSlots; // 0x20
};

struct FMovieSceneEventSectionData : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	TArray<FEventPayload> KeyValues; // 0x18
};

struct FRigUnit_CollectionChain : FRigUnit_CollectionBase {
	FRigElementKey FirstItem; // 0x8
	FRigElementKey LastItem; // 0x14
	bool Reverse; // 0x20
	FRigElementKeyCollection Collection; // 0x28
	FRigElementKeyCollection CachedCollection; // 0x38
	int32_t CachedHierarchyHash; // 0x48
};

struct FSphericalPontoon {
	FName CenterSocket; // 0x0
	FVector RelativeLocation; // 0x8
	float Radius; // 0x14
	FVector LocalForce; // 0x18
	FVector CenterLocation; // 0x24
	FQuat SocketRotation; // 0x30
	FVector Offset; // 0x40
	float WaterHeight; // 0x50
	float WaterDepth; // 0x54
	float ImmersionDepth; // 0x58
	FVector WaterPlaneLocation; // 0x5c
	FVector WaterPlaneNormal; // 0x68
	FVector WaterSurfacePosition; // 0x74
	FVector WaterVelocity; // 0x80
	int32_t WaterBodyIndex; // 0x8c
	AWaterBody* CurrentWaterBody; // 0x138
};

struct FAdminExportMasterPlayerDataRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FMovieScenePropertyBinding {
	FName PropertyName; // 0x0
	FName PropertyPath; // 0x8
	bool bCanUseClassLookup; // 0x10
};

struct FInstancedStaticMeshInstanceData {
	FMatrix Transform; // 0x0
};

struct FRigUnit_BinaryVectorOp : FRigUnit {
	FVector Argument0; // 0x8
	FVector Argument1; // 0x14
	FVector Result; // 0x20
};

struct FYPurchaseWeaponShopItemRequest {
	FString UserId; // 0x0
	FString blueprintName; // 0x10
	int32_t blueprintRarity; // 0x20
	int32_t purchaseAmount; // 0x24
	FString baseItemId; // 0x28
	FString shopItemBelongsTo; // 0x38
};

struct FYItemRarityDataTableRow : FYDataTableRowBase {
	TMap<EYItemRarityType, FYRarityVisualizationData> m_visualizationData; // 0x10
};

struct FYDeclineFriendRequestResult {
	FString UserId; // 0x0
	FString OperationId; // 0x10
	EYFriendActionResult Result; // 0x20
};

struct FVertexIndexAndInstanceID {
	int32_t ContourIndex; // 0x0
	FVertexInstanceID VertexInstanceID; // 0x4
};

struct FQuartzClockSettings {
	FQuartzTimeSignature TimeSignature; // 0x0
	bool bIgnoreLevelChange; // 0x18
};

struct FMovieScenePrimitiveMaterialTemplate : FMovieSceneEvalTemplate {
	int32_t MaterialIndex; // 0x20
	FMovieSceneObjectPathChannel MaterialChannel; // 0x28
};

struct FYWeaponMaterialEntry {
	TSoftObjectPtr<UMaterialInterface> m_materialVariation; // 0x0
	int32_t m_materialIndex; // 0x28
};

struct FNetViewer {
	UNetConnection* Connection; // 0x0
	AActor* InViewer; // 0x8
	AActor* ViewTarget; // 0x10
	FVector ViewLocation; // 0x18
	FVector ViewDir; // 0x24
};

struct FBox {
	FVector Min; // 0x0
	FVector Max; // 0xc
	char IsValid; // 0x18
};

struct FBuildPromotionOpenAssetSettings {
	FFilePath BlueprintAsset; // 0x0
	FFilePath MaterialAsset; // 0x10
	FFilePath ParticleSystemAsset; // 0x20
	FFilePath SkeletalMeshAsset; // 0x30
	FFilePath StaticMeshAsset; // 0x40
	FFilePath TextureAsset; // 0x50
};

struct FPrimaryAssetId {
	FPrimaryAssetType PrimaryAssetType; // 0x0
	FName PrimaryAssetName; // 0x8
};

struct FAIPredictionEvent {
	AActor* Requestor; // 0x0
	AActor* PredictedActor; // 0x8
};

struct FPoseDriverTransform {
	FVector TargetTranslation; // 0x0
	FRotator TargetRotation; // 0xc
};

struct FYWidgetUpdateInitializeData {
	int32_t m_zOrder; // 0x0
	AActor* m_actorToInitializeFor; // 0x8
	UUserWidget* m_widgetClass; // 0x10
};

struct FAnimNotifyArray {
	TArray<FAnimNotifyEventReference> Notifies; // 0x0
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

struct FNiagaraVariable : FNiagaraVariableBase {
	TArray<char> VarData; // 0x10
};

struct FYMatchPhaseGameplayRow : FYDataTableRowBase {
	bool m_isStormActive; // 0x10
	float m_cycleSpikeSpawnProbability; // 0x14
	bool m_isPlayerSpawningEnabled; // 0x18
	bool m_isEscapeActivityEnabled; // 0x19
	bool m_isAIUsingStormLoot; // 0x1a
	bool m_useAIStormSquads; // 0x1b
	bool m_isStormMineralsActivityActive; // 0x1c
	bool m_isStormDepositActive; // 0x1d
	bool m_isPowerUpResetAllowed; // 0x1e
	TArray<FDataTableRowHandle> m_activeLightingTypes; // 0x20
};

struct FAdminUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	FString PlayFabId; // 0x28
};

struct FClientAddUsernamePasswordRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString Email; // 0x10
	FString Password; // 0x20
	FString Username; // 0x30
};

struct FAnimNode_BlendSpaceEvaluator : FAnimNode_BlendSpacePlayer {
	float NormalizedTime; // 0xe8
};

struct FYAIStaggerAnimations {
	float m_minAngle; // 0x0
	float m_maxAngle; // 0x4
	TArray<UAnimMontage*> m_animMontages; // 0x8
};

struct FYUpdateGlobalVanity {
	FString UserId; // 0x0
	FString ID; // 0x10
	int32_t variation; // 0x20
	int32_t Slot; // 0x24
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

struct FReferenceBoneFrame {
	FBoneReference Bone; // 0x0
	FAxis Axis; // 0x10
};

struct FClientLinkFacebookInstantGamesIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FacebookInstantGamesSignature; // 0x10
	bool ForceLink; // 0x20
};

struct FYMeshAttachment {
	FName m_socket; // 0x0
	TSoftObjectPtr<USkeletalMesh> m_mesh; // 0x8
	TSoftObjectPtr<UMaterialInterface> m_materialOverride; // 0x30
};

struct FYRetentionBonusResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	FYRetentionProgress playerData; // 0x20
};

struct FServerSetPublisherDataRequest : FPlayFabRequestCommon {
	FString Key; // 0x8
	FString Value; // 0x18
};

struct FRotationTrack {
	TArray<FQuat> RotKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FYWeaponInitializationData {
	TArray<FYInventoryItem> m_inventoryWeapons; // 0x0
	int32_t m_activeWeaponInstance; // 0x10
};

struct FYSocialProfileEntry {
	FString internalUserId; // 0x0
	FString epicId; // 0x10
	FString Username; // 0x20
	FYSocialPresenceEntry presence; // 0x30
	FString productUserId; // 0x68
	FString PlayFabId; // 0x78
};

struct FMovieSceneEvaluationTrack {
	FGuid ObjectBindingID; // 0x0
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

struct FCurveTableRowHandle {
	UCurveTable* CurveTable; // 0x0
	FName RowName; // 0x8
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

struct FYSquadMemberBE {
	FString ID; // 0x0
	EYUserState State; // 0x10
};

struct FYSquadDisbanded {
	FString ID; // 0x0
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

struct FAdminUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FServerAddGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
	FString PlayFabId; // 0x10
};

struct FRigUnit_CollectionLoop : FRigUnit_CollectionBaseMutable {
	FRigElementKeyCollection Collection; // 0x68
	FRigElementKey Item; // 0x78
	int32_t Index; // 0x84
	int32_t Count; // 0x88
	float Ratio; // 0x8c
	bool Continue; // 0x90
	FControlRigExecuteContext Completed; // 0x98
};

struct FYHealthDataTableRow : FYDataTableRowBase {
	float m_maxHealth; // 0x10
	float m_regenerationRate; // 0x14
	float m_regenerationDelay; // 0x18
	float m_degenerationRate; // 0x1c
	float m_damageThresholdToRestartHealthRegenerationDelay; // 0x20
	int32_t m_segments; // 0x24
};

struct FYExecuteSocialPresenceStateResult {
	EYSocialRequestResult Result; // 0x0
	FString UserId; // 0x8
};

struct FAnimNode_BankWarp : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float BankValue; // 0x20
	float Alpha; // 0x24
	FVector UpAxis; // 0x28
	FVector ForwardAxis; // 0x34
	float TwistRate; // 0x40
	float MaxTwist; // 0x44
	float LeanRate; // 0x48
	float MaxLean; // 0x4c
	float Smoothing; // 0x50
	FBoneReference RootBone; // 0x54
	FBoneChain SpineChain; // 0x68
	TArray<FBoneReference> RootBonesToAdjust; // 0x88
};

struct FYInventoryInfo {
	int32_t m_inventoryLimit; // 0x0
	int32_t m_stashLimit; // 0x4
	int32_t m_safeLimit; // 0x8
	int32_t m_baseStashLimit; // 0xc
	int32_t m_baseSafeLimit; // 0x10
};

struct FMovieSceneSequencePlaybackParams {
	FFrameTime Frame; // 0x0
	float Time; // 0x8
	FString MarkedFrame; // 0x10
	EMovieScenePositionType PositionType; // 0x20
	EUpdatePositionMethod UpdateMethod; // 0x21
};

struct FTimecode {
	int32_t Hours; // 0x0
	int32_t Minutes; // 0x4
	int32_t Seconds; // 0x8
	int32_t Frames; // 0xc
	bool bDropFrameFormat; // 0x10
};

struct FServerSavePushNotificationTemplateResult : FPlayFabResultCommon {
	FString PushNotificationTemplateId; // 0x8
};

struct FYPlayFabPlayerProfile {
	FString AvatarUrl; // 0x0
	FString DisplayName; // 0x10
	FString PlayerId; // 0x20
};

struct FGroupsIsMemberResponse : FPlayFabResultCommon {
	bool IsMember; // 0x8
};

struct FCloudScriptPostFunctionResultForEntityTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
};

struct FCloudScriptListHttpFunctionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Functions; // 0x8
};

struct FWaterBrushEffectDisplacement {
	float DisplacementHeight; // 0x0
	float DisplacementTiling; // 0x4
	UTexture2D* Texture; // 0x8
	float Midpoint; // 0x10
	FLinearColor Channel; // 0x14
	float WeightmapInfluence; // 0x24
};

struct FRigUnit_BeginExecution : FRigUnit {
	FControlRigExecuteContext ExecuteContext; // 0x8
};

struct FNiagaraSystemCompileRequest {
	TArray<UObject*> RootObjects; // 0x8
};

struct FYHitZoneDataTableRow : FYDataTableRowBase {
	TArray<FName> m_bones; // 0x10
};

struct FRigInfluenceEntryModifier {
	TArray<FRigElementKey> AffectedList; // 0x0
};

struct FMultiplayerListCertificateSummariesResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> CertificateSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
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

struct FYAutomationLoadingMetrics {
	TMap<FString, int32_t> m_timesLoadedMap; // 0x0
};

struct FSoundWaveSpectralDataPerSound {
	TArray<FSoundWaveSpectralData> SpectralData; // 0x0
	float PlaybackTime; // 0x10
	USoundWave* SoundWave; // 0x18
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

struct FRigUnit_AccumulateFloatMul : FRigUnit_SimBase {
	float Multiplier; // 0x8
	float InitialValue; // 0xc
	bool bIntegrateDeltaTime; // 0x10
	float Result; // 0x14
	float AccumulatedValue; // 0x18
};

struct FYWeaponSwitchTriggerData {
	EYWeaponSlotType m_weaponSlotType; // 0x0
};

struct FMovieSceneNiagaraIntegerParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneIntegerChannel IntegerChannel; // 0x40
};

struct FSlateColor {
	FLinearColor SpecifiedColor; // 0x0
	ESlateColorStylingMode ColorUseRule; // 0x10
};

struct FMovieSceneKeyTimeStruct : FMovieSceneKeyStruct {
	FFrameNumber Time; // 0x8
};

struct FYFilterItemEntry {
	FDataTableRowHandle m_rowHandle; // 0x0
	FYItemVisualAcquisitionData m_acquisitionState; // 0x10
	bool m_isEquippedTemporary; // 0x24
	bool m_isEquippedPersistent; // 0x25
	bool m_isOwned; // 0x26
};

struct FYLeaderBoardData {
	TArray<FYLeaderBoardDataPerGameMode> m_leaderBoardDataPerGameMode; // 0x0
};

struct FYDebugSetBagLimit {
	FString UserId; // 0x0
	int32_t bagLimit; // 0x10
};

struct FYChatSettingsDataTableRow : FYDataTableRowBase {
	float m_mutingDuration; // 0x10
	int32_t m_amountOfUsersToTrackMessages; // 0x14
	int32_t m_amountOfChatMessageToSendAtReport; // 0x18
	float m_msPerAppliedIssueRequest; // 0x1c
	TMap<EYChannelType, FYChannelSettings> m_channelSettings; // 0x20
};

struct FYCloakRuntimeData {
	bool m_isActive; // 0x0
	FDataTableRowHandle m_rowHandle; // 0x8
};

struct FYQuestUpdateDataEntry {
	FString questId; // 0x0
	FString backendId; // 0x10
	int32_t Count; // 0x20
};

struct FYCharacterCustomizationActorActiveVisualizationEntry {
	FDataTableRowHandle m_rowHandle; // 0x0
	int32_t m_materialIndex; // 0x10
	TArray<USkeletalMeshComponent*> m_activeSkeletalMeshComponents; // 0x18
	FTransform m_categoryRelativeTransform; // 0x30
	EYCustomizationCategory m_category; // 0x61
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

struct FExperimentationGetExperimentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FYPlayfabAuthenticationContext {
	FString m_entityId; // 0x0
	FString m_entityType; // 0x10
	FString m_entityToken; // 0x20
	FString m_playfabId; // 0x30
	FString m_platform; // 0x40
	bool m_isConnected; // 0x60
};

struct FSimpleMemberReference {
	UObject* MemberParent; // 0x0
	FName MemberName; // 0x8
	FGuid MemberGuid; // 0x10
};

struct FCustomizedToolMenu {
	FName Name; // 0x0
	TMap<FName, FCustomizedToolMenuEntry> entries; // 0x8
	TMap<FName, FCustomizedToolMenuSection> Sections; // 0x58
	TMap<FName, FCustomizedToolMenuNameArray> EntryOrder; // 0xa8
	TArray<FName> SectionOrder; // 0xf8
};

struct FEdGraphTerminalType {
	FName TerminalCategory; // 0x0
	FName TerminalSubCategory; // 0x8
	TWeakObjectPtr<UObject> TerminalSubCategoryObject; // 0x10
	bool bTerminalIsConst; // 0x18
	bool bTerminalIsWeakPointer; // 0x19
	bool bTerminalIsUObjectWrapper; // 0x1a
};

struct FTentDistribution {
	float TipAltitude; // 0x0
	float TipValue; // 0x4
	float Width; // 0x8
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

struct FLanguageSelectionData {
	FString m_cultureAberration; // 0x0
	FText m_cultureLabel; // 0x10
};

struct FYAmmoTypeDataTableRow : FYItemDataTableRowBase {
	FDataTableRowHandle m_lootDropHandle; // 0x310
	FText m_ammoNamePlayerFacing; // 0x320
	TSoftObjectPtr<UMaterialInstance> m_ammoIcon; // 0x338
	TSoftObjectPtr<UObject> m_mesh; // 0x360
};

struct FAnimNode_LinkedAnimLayer : FAnimNode_LinkedAnimGraph {
	UAnimLayerInterface* Interface; // 0xa0
	FName Layer; // 0xa8
};

struct FServerGetCatalogItemsRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
};

struct FRigUnit_MathFloatRemap : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float SourceMinimum; // 0xc
	float SourceMaximum; // 0x10
	float TargetMinimum; // 0x14
	float TargetMaximum; // 0x18
	bool bClamp; // 0x1c
	float Result; // 0x20
};

struct FYStartItemCraftingResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCurrencyItem> changedCurrencies; // 0x20
	TArray<FYCustomItemInfo> changedItems; // 0x30
	TArray<FString> deletedItemsIds; // 0x40
};

struct FYItemIncrementData {
	TMap<FName, int32_t> m_idToIncrement; // 0x0
};

struct FLandscapeProxyMaterialOverride {
	FPerPlatformInt LODIndex; // 0x0
	UMaterialInterface* Material; // 0x8
};

struct FAdminGetActionsOnPlayersInSegmentTaskInstanceResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Parameter; // 0x8
	UPlayFabJsonObject* Summary; // 0x10
};

struct FAnimNode_BlendListByEnum : FAnimNode_BlendListBase {
	TArray<int32_t> EnumToPoseIndex; // 0x98
	char ActiveEnumValue; // 0xa8
};

struct FYAzureFunctionResult {
	FString m_jsonData; // 0x0
	FString m_errorMessage; // 0x10
	FString m_origin; // 0x20
	FString m_sentJsonData; // 0x30
	bool m_success; // 0x40
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

struct FAnimNode_RotationMultiplier : FAnimNode_SkeletalControlBase {
	FBoneReference TargetBone; // 0xc8
	FBoneReference SourceBone; // 0xd8
	float Multiplier; // 0xe8
	EBoneAxis RotationAxisToRefer; // 0xec
	bool bIsAdditive; // 0xed
};

struct FYPlayfabExecuteEventMessage {
	FString m_userId; // 0x0
	FString m_service; // 0x10
	FString m_eventName; // 0x20
	TMap<FString, int32_t> m_keyToJsons; // 0x30
};

struct FYDeveloperCreditsCategoriesDataTableRow : FYDataTableRowBase {
	FString m_categoryHeadline; // 0x10
	TArray<FString> m_developers; // 0x20
};

struct FNiagaraComponentPropertyBinding {
	FNiagaraVariableAttributeBinding AttributeBinding; // 0x0
	FName PropertyName; // 0x58
	FNiagaraTypeDefinition PropertyType; // 0x60
	FName MetadataSetterName; // 0x70
	FNiagaraVariable WritableValue; // 0x78
};

struct FSourceEffectPannerSettings {
	float Spread; // 0x0
	float Pan; // 0x4
};

struct FRigUnit_MathVectorFromFloat : FRigUnit_MathVectorBase {
	float Value; // 0x8
	FVector Result; // 0xc
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

struct FMargin {
	float Left; // 0x0
	float Top; // 0x4
	float Right; // 0x8
	float Bottom; // 0xc
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

struct FMovieSceneSectionGroup {
	TArray<TWeakObjectPtr<UMovieSceneSection>> Sections; // 0x0
};

struct FYPlayerMovementData {
	bool m_isSprinting; // 0x0
	bool m_isCrouching; // 0x1
	bool m_isSliding; // 0x2
	bool m_isProning; // 0x3
	bool m_isFalling; // 0x4
	FVector m_velocity; // 0x8
	FVector m_lastInputVector; // 0x14
	FVector m_actorForwardVector; // 0x20
};

struct FClientRestoreIOSPurchasesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FClientValidateWindowsReceiptRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	FString CurrencyCode; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	int32_t PurchasePrice; // 0x30
	FString Receipt; // 0x38
};

struct FServerGetPlayersInSegmentRequest : FPlayFabRequestCommon {
	FString ContinuationToken; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t MaxBatchSize; // 0x20
	int32_t SecondsToLive; // 0x24
	FString SegmentId; // 0x28
};

struct FAISightEvent {
	AActor* SeenActor; // 0x8
	AActor* Observer; // 0x10
};

struct FVertexAttributesForPolygonHole {
	TArray<FMeshElementAttributeList> VertexAttributeList; // 0x0
};

struct FYItemModsInfo {
	TArray<EYModificationSlotType> m_availableModSlots; // 0x0
	TMap<EYModificationSlotType, FDataTableRowHandle> m_modInventoryItems; // 0x10
};

struct FAlwaysRelevantActorInfo {
	UNetConnection* Connection; // 0x0
	AActor* LastViewer; // 0x8
	AActor* LastViewTarget; // 0x10
};

struct FYStationLoginUserEntry {
	TArray<FYStationPingEntry> entries; // 0x0
};

struct FClientValidateIOSReceiptResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Fulfillments; // 0x8
};

struct FFullyLoadedPackagesInfo {
	EFullyLoadPackageType FullyLoadType; // 0x0
	FString Tag; // 0x8
	TArray<FName> PackagesToLoad; // 0x18
	TArray<UObject*> LoadedObjects; // 0x28
};

struct FBakedFloatCustomAttribute {
	FName AttributeName; // 0x0
	FSimpleCurve FloatCurve; // 0x8
};

struct FStaticMaterial {
	UMaterialInterface* MaterialInterface; // 0x0
	FName MaterialSlotName; // 0x8
	FName ImportedMaterialSlotName; // 0x10
	FMeshUVChannelInfo UVChannelData; // 0x18
};

struct FPCSnapConstraintWall {
	bool AttachTop; // 0x0
	bool AttachBottom; // 0x1
	bool AttachLeft; // 0x2
	bool AttachRight; // 0x3
};

struct FYContractUiData {
	FYContractData m_contractData; // 0x0
	bool m_contractCanBeInteractedWith; // 0x38
	bool m_contractIsLocked; // 0x39
};

struct FYClearInventory {
	FString UserId; // 0x0
};

struct FMultiplayerGetBuildRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FYAICharacterDefinition {
	EYEnemyType m_type; // 0x0
	TArray<FDataTableRowHandle> m_perks; // 0x8
};

struct FRigUnit_AnimEasingType : FRigUnit_AnimBase {
	EControlRigAnimEasingType Type; // 0x8
};

struct FEmitterDynamicParameter {
	FName ParamName; // 0x0
	char bUseEmitterTime : 1; // 0x8
	char bSpawnTimeOnly : 1; // 0x8
	EEmitterDynamicParameterValue ValueMethod; // 0xc
	char bScaleVelocityByParamValue : 1; // 0x10
	FRawDistributionFloat ParamValue; // 0x18
};

struct FYVanitySetCustomItemData {
	FString UserId; // 0x0
	FString custom_id; // 0x10
	FString vanity_id; // 0x20
	int32_t slotId; // 0x30
};

struct FMovieSceneEvaluationTemplate {
	TMap<FMovieSceneTrackIdentifier, FMovieSceneEvaluationTrack> Tracks; // 0x0
	FGuid SequenceSignature; // 0xa0
	FMovieSceneEvaluationTemplateSerialNumber TemplateSerialNumber; // 0xb0
	FMovieSceneTemplateGenerationLedger TemplateLedger; // 0xb8
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

struct FYCharacterVanityUpdateArchetype {
	FString UserId; // 0x0
	FString archetype_id; // 0x10
};

struct FClientUpdateCharacterStatisticsRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CharacterStatistics; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
};

struct FYScrapingResultRow : FYDataTableRowBase {
	FDataTableRowHandle m_material; // 0x10
	float m_percentageInReturn; // 0x20
};

struct FYFactionContractsData {
	FString factionId; // 0x0
	TArray<FYFactionContractData> contracts; // 0x10
};

struct FSwarmDebugOptions {
	char bDistributionEnabled : 1; // 0x0
	char bForceContentExport : 1; // 0x0
	char bInitialized : 1; // 0x0
};

struct FConstructionSystemUICategory {
	FText DisplayName; // 0x0
	UTexture2D* Icon; // 0x18
	TArray<FConstructionSystemUIPrefabEntry> PrefabEntries; // 0x20
};

struct FDatasmithRetessellationOptions : FDatasmithTessellationOptions {
	EDatasmithCADRetessellationRule RetessellationRule; // 0x10
};

struct FInt32Interval {
	int32_t Min; // 0x0
	int32_t Max; // 0x4
};

struct FYTeleportData {
	FVector m_oldLocation; // 0x0
	FVector m_newLocation; // 0xc
	AActor* m_relevantActor; // 0x18
};

struct FYSocialActorPlacedData {
	UYPlayerSocialComponent* m_socialComponent; // 0x0
	FName m_contextName; // 0x8
};

struct FWaterBrushEffectCurves {
	bool bUseCurveChannel; // 0x0
	UCurveFloat* ElevationCurveAsset; // 0x8
	float ChannelEdgeOffset; // 0x10
	float ChannelDepth; // 0x14
	float CurveRampWidth; // 0x18
};

struct FYLootVelocitySettings {
	float m_maxLootSpeed; // 0x0
	float m_minLootSpeed; // 0x4
	float m_lootSpawnAngleDegrees; // 0x8
};

struct FClothCollisionData {
	TArray<FClothCollisionPrim_Sphere> Spheres; // 0x0
	TArray<FClothCollisionPrim_SphereConnection> SphereConnections; // 0x10
	TArray<FClothCollisionPrim_Convex> Convexes; // 0x20
	TArray<FClothCollisionPrim_Box> Boxes; // 0x30
};

struct FServerConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FYExecuteSocialPresenceState {
	FString UserId; // 0x0
	EYSocialGameStateType State; // 0x10
};

struct FClientGetPlayFabIDsFromNintendoSwitchDeviceIdsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
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

struct FPoseLinkBase {
	int32_t LinkID; // 0x0
};

struct FYShopPromotion {
	FString ID; // 0x0
	FString shopPromotionRowId; // 0x10
	EYPromotionType promotionType; // 0x20
	FString startDateTime; // 0x28
	int32_t layoutIdx; // 0x38
	TArray<FString> shopOfferRowIds; // 0x40
};

struct FRigUnit_MathQuaternionToRotator : FRigUnit_MathQuaternionBase {
	FQuat Value; // 0x10
	FRotator Result; // 0x20
};

struct FYShowBodyTypeCategoryUpdateData {
	EYCustomizationCategory m_requestedCategory; // 0x0
};

struct FYCachedPreloadData {
	FName m_name; // 0x0
	UObject* m_instance; // 0x8
	UObject* m_class; // 0x10
};

struct FImportFactorySettingValues {
	FString SettingName; // 0x0
	FString Value; // 0x10
};

struct FRigUnit_PointSimulation_WorkData {
	FCRSimPointContainer Simulation; // 0x0
	TArray<FCachedRigElement> BoneIndices; // 0x78
};

struct FYRefreshSessionMatchmakingNVRRequest {
	FString SessionId; // 0x0
	TArray<FString> userIds; // 0x10
};

struct FRigUnit_BoneName : FRigUnit {
	FName Bone; // 0x8
};

struct FChaosBreakEvent {
	UPrimitiveComponent* Component; // 0x0
	FVector Location; // 0x8
	FVector Velocity; // 0x14
	FVector AngularVelocity; // 0x20
	float Mass; // 0x2c
};

struct FExperimentationGetLatestScorecardRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FAdminAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString PlayFabId; // 0x18
	FString VirtualCurrency; // 0x28
};

struct FAnimNode_Constraint : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToModify; // 0xc8
	TArray<FConstraint> ConstraintSetup; // 0xd8
	TArray<float> ConstraintWeights; // 0xe8
};

struct FLevelSequenceSnapshotSettings {
	char ZeroPadAmount; // 0x0
	FFrameRate FrameRate; // 0x4
};

struct FMultiplayerDeleteContainerImageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ImageName; // 0x10
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

struct FYDebugModifyUserSkills {
	FString UserId; // 0x0
	int32_t skill; // 0x10
	int32_t deviation; // 0x14
};

struct FYInitializationRequestEntry {
	AActor* m_relevantContext; // 0x0
	FDelegate m_bpDelegate; // 0x18
	EYInitializationRequestSettingTypes m_requestType; // 0x28
};

struct FSTR_AimAssistPresetDesc {
	FString PresetName_2_D4E25D0B43133DE51189979C1C8A65F0; // 0x0
	float HoldTargetTime_5_81BDCDCC4E08ABFB4E0D8ABE65FDCC7C; // 0x10
	bool ApplyAutoAim_8_92D63579442B59F48DF4E2BA76E80C93; // 0x14
	bool AutoAimWithGamepadOnly_10_6DE4FD204C2E283D7EBCC4ACD1C7CEB0; // 0x15
	bool ApplyMagnetism_12_CD725E92491B8D32DD9FE28444D50F08; // 0x16
	UCurveFloat* MagnetismInputSense_27_3D16323E4B722D7ED5E407AE82AB8207; // 0x18
	FSTR_MagnetismSettingsDesc MagnetismSettingsInBlindState_18_1CAD4B1F4963283BF5CC40A6C997333B; // 0x20
	FSTR_MagnetismSettingsDesc MagnetismSettingsInAimState_19_DD72A238482DEB2C6FCF5D8DE8F517FC; // 0x28
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

struct FMovieSceneCameraAnimSectionTemplate : FMovieSceneAdditiveCameraAnimationTemplate {
	FMovieSceneCameraAnimSectionData SourceData; // 0x20
	FFrameNumber SectionStartTime; // 0x40
};

struct FYLootCollectedAnalyticsEvent : FYBaseAnalyticsEvent {
	FString item_id; // 0xa8
	FString item_name; // 0xb8
	int32_t pickup_location_X; // 0xc8
	int32_t pickup_location_Y; // 0xcc
	int32_t Source; // 0xd0
	int32_t item_amount; // 0xd4
	int32_t time_since_match_start; // 0xd8
	int32_t time_since_user_joined; // 0xdc
	FString instigator_tags; // 0xe0
	float current_bag_weight; // 0xf0
	float max_bag_weight; // 0xf4
	float max_safe_weight; // 0xf8
	float current_safe_weight; // 0xfc
	float weight; // 0x100
	FString Action; // 0x108
	FString item_rarity; // 0x118
	bool loot_area; // 0x128
	bool in_loot_container; // 0x129
};

struct FMovieSceneEvaluationTemplateSerialNumber {
	uint32_t Value; // 0x0
};

struct FYCheatResponse {
	EYCheatResult Status; // 0x0
};

struct FDebugFloatHistory {
	TArray<float> Samples; // 0x0
	float MaxSamples; // 0x10
	float MinValue; // 0x14
	float MaxValue; // 0x18
	bool bAutoAdjustMinMax; // 0x1c
};

struct FClientExecuteCloudScriptRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString FunctionName; // 0x10
	UPlayFabJsonObject* FunctionParameter; // 0x20
	bool GeneratePlayStreamEvent; // 0x28
	ECloudScriptRevisionOption RevisionSelection; // 0x29
	int32_t SpecificRevision; // 0x2c
};

struct FYAICombatAnalyticsData {
	FYAICombatAnalyticsEvent m_aiCombatAnalyticsEvent; // 0x0
	TMap<FUniqueNetIdRepl, FYAIPerPlayerCombatData> m_aiCombatDataPerPlayer; // 0x120
};

struct FMaterialEditorPromotionSettings {
	FFilePath DefaultMaterialAsset; // 0x0
	FFilePath DefaultDiffuseTexture; // 0x10
	FFilePath DefaultNormalTexture; // 0x20
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

struct FPlatformRuntimeAudioCompressionOverrides {
	bool bOverrideCompressionTimes; // 0x0
	float DurationThreshold; // 0x4
	int32_t MaxNumRandomBranches; // 0x8
	int32_t SoundCueQualityIndex; // 0xc
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

struct FHardwareCursorReference {
	FName CursorPath; // 0x0
	FVector2D HotSpot; // 0x8
};

struct FSimpleCurve : FRealCurve {
	ERichCurveInterpMode InterpMode; // 0x70
	TArray<FSimpleCurveKey> Keys; // 0x78
};

struct FRigUnit_MathRBFInterpolateQuatXform : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatXform_Target> Targets; // 0xd0
	FTransform Output; // 0xe0
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

struct FYAbilityTransportInitializationData {
	FVector m_startLocation; // 0x0
	FVector m_direction; // 0xc
	FDataTableRowHandle m_abilityActionRowHandle; // 0x18
	FDataTableRowHandle m_itemRowHandle; // 0x28
	AActor* m_owner; // 0x38
};

struct FConstraintOffset {
	FVector Translation; // 0x0
	FQuat Rotation; // 0x10
	FVector Scale; // 0x20
	FTransform Parent; // 0x30
};

struct FYSquadInviteResponse {
	EYSquadActionResult Result; // 0x0
	FString inviteId; // 0x8
	FYPlayFabSquad squad; // 0x18
};

struct FServerGetUserAccountInfoRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FRigUnit_DrawContainerSetThickness : FRigUnitMutable {
	FName InstructionName; // 0x68
	float Thickness; // 0x70
};

struct FYWeaponVanityMeshAttachment {
	FName m_attachmentSocket; // 0x0
	TSoftObjectPtr<USkeletalMesh> m_meshAttachmentSK; // 0x8
	TArray<FYVanityMaterialEntry> m_meshAttachmentMaterialOverrides; // 0x30
};

struct FRigUnit_MathQuaternionSlerp : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	float T; // 0x30
	FQuat Result; // 0x40
};

struct FActorSequenceObjectReferences {
	TArray<FActorSequenceObjectReference> Array; // 0x0
};

struct FYChainReactionDataEntry {
	float m_chainReactionRadius; // 0x0
	float m_chainReactionDamageReduction; // 0x4
	bool m_applyChainReaction; // 0x8
};

struct FClientRewardAdActivityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlacementId; // 0x10
	FString RewardId; // 0x20
};

struct FWaterFalloffSettings {
	EWaterBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FYGetTechTreeNodes {
	FString UserId; // 0x0
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

struct FActiveCameraShakeInfo {
	UCameraShakeBase* ShakeInstance; // 0x0
	TWeakObjectPtr<UCameraShakeSourceComponent> ShakeSource; // 0x8
};

struct FUdpMockMessage {
	TArray<char> Data; // 0x0
};

struct FYInventory {
	FString UserId; // 0x0
	FYUserCurrenciesItems Currency; // 0x10
	TArray<FYCustomItemInfo> Items; // 0x30
	TArray<FYVanityBackendItemInfo> vanity; // 0x40
	TArray<FYLoreBackendItemInfo> loreItems; // 0x50
};

struct FYFilterWordEntry {
	FString m_local; // 0x0
	FString m_culture; // 0x10
	FString m_replacement; // 0x20
};

struct FLandscapeSplineConnection {
	ULandscapeSplineSegment* Segment; // 0x0
	char End : 1; // 0x8
};

struct FPowerIKGroundFoot {
	FName BoneName; // 0x0
	float PullWeight; // 0x8
	bool NormalizePulling; // 0xc
	FVector PositivePullFactor; // 0x10
	FVector NegativePullFactor; // 0x1c
};

struct FCloudScriptPostFunctionResultForPlayerTriggeredActionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* FunctionResult; // 0x18
	UPlayFabJsonObject* PlayerProfile; // 0x20
	UPlayFabJsonObject* PlayStreamEventEnvelope; // 0x28
};

struct FServerGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FYGameInfo {
	FString roomId; // 0x0
	FString matchMap; // 0x10
	FString GameMode; // 0x20
	bool hasSquads; // 0x30
	bool beginnerServer; // 0x31
	bool isRanked; // 0x32
	bool useReplicationGraph; // 0x33
};

struct FMovementProperties {
	char bCanCrouch : 1; // 0x0
	char bCanJump : 1; // 0x0
	char bCanWalk : 1; // 0x0
	char bCanSwim : 1; // 0x0
	char bCanFly : 1; // 0x0
};

struct FYUpdatePlayerActiveContractsResult {
	FString UserId; // 0x0
	FString Error; // 0x10
};

struct FYGetPlayersInventoriesLimitsRequest {
	TArray<FString> userIds; // 0x0
};

struct FEventsWriteEventsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	TArray<UPlayFabJsonObject*> Events; // 0x10
};

struct FRigUnit_AccumulateTransformMul : FRigUnit_SimBase {
	FTransform Multiplier; // 0x10
	FTransform InitialValue; // 0x40
	bool bFlipOrder; // 0x70
	bool bIntegrateDeltaTime; // 0x71
	FTransform Result; // 0x80
	FTransform AccumulatedValue; // 0xb0
};

struct FDrawToRenderTargetContext {
	UTextureRenderTarget2D* RenderTarget; // 0x0
};

struct FYEndOfSeasonReward {
	FDataTableRowHandle m_messageId; // 0x0
	TArray<FDataTableRowHandle> m_grants; // 0x10
};

struct FEnvQueryResult {
	UEnvQueryItemType* ItemType; // 0x10
	int32_t OptionIndex; // 0x2c
	int32_t QueryID; // 0x30
};

struct FMovieSceneEvaluationFieldSegmentPtr : FMovieSceneEvaluationFieldTrackPtr {
	FMovieSceneSegmentIdentifier SegmentId; // 0x8
};

struct FRigUnit_DebugLine : FRigUnit_DebugBaseMutable {
	FVector A; // 0x68
	FVector B; // 0x74
	FLinearColor Color; // 0x80
	float Thickness; // 0x90
	FName Space; // 0x94
	FTransform WorldOffset; // 0xa0
	bool bEnabled; // 0xd0
};

struct FRigUnit_ForLoopCount : FRigUnitMutable {
	int32_t Count; // 0x68
	int32_t Index; // 0x6c
	float Ratio; // 0x70
	bool Continue; // 0x74
	FControlRigExecuteContext Completed; // 0x78
};

struct FYProjectileInititalizationData {
	FYDamageOriginInfo m_damageOriginInfo; // 0x0
	FVector m_initialVelocity; // 0x28
	FVector m_spawnPosition; // 0x34
	FDataTableRowHandle m_impactHandleRow; // 0x40
	FDataTableRowHandle m_transportHandleRow; // 0x50
	FDataTableRowHandle m_fxHandleRow; // 0x60
	float m_overrideGravity; // 0x70
	int32_t m_transportHandle; // 0x74
	USceneComponent* m_homingToComponet; // 0x78
	float m_armingTime; // 0x80
	bool m_clientSideProjectile; // 0x84
	bool m_isTargeting; // 0x85
	FVector m_visualOriginTrailLocation; // 0x88
	FGuid m_shotGuid; // 0x94
};

struct FAnimationEventBinding {
	UWidgetAnimation* Animation; // 0x0
	FDelegate Delegate; // 0x8
	EWidgetAnimationEvent AnimationEvent; // 0x18
	FName UserTag; // 0x1c
};

struct FClientUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FServerGetPlayersSegmentsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
};

struct FYFactionsDataTableRow : FYDataTableRowBase {
	FText m_name; // 0x10
	FText m_description; // 0x28
	FText m_detailedDescription; // 0x40
	bool m_showFactionLevelInShop; // 0x58
	FText m_factionLeaderName; // 0x60
	FText m_factionLeaderTitle; // 0x78
	FText m_factionHeadline; // 0x90
	FText m_factionProgressionRewardDescriptions; // 0xa8
	TSoftObjectPtr<UTexture2D> m_icon; // 0xc0
	TSoftObjectPtr<UTexture2D> m_iconSmall; // 0xe8
	UMaterialInterface* m_vendorIcon; // 0x110
	UMaterialInterface* m_backgroundMaterial; // 0x118
	TSoftObjectPtr<UTexture2D> m_alternativeBackgroundImage; // 0x120
	TSoftObjectPtr<UTexture2D> m_alternativeVendorIcon; // 0x148
	TArray<FYFactionLevel> m_levelsData; // 0x170
	bool m_requireUnlockRequirementsForItemsInShop; // 0x180
};

struct FRigUnit_TransformConstraintPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey Item; // 0x68
	ETransformSpaceMode BaseTransformSpace; // 0x74
	FTransform BaseTransform; // 0x80
	FRigElementKey BaseItem; // 0xb0
	TArray<FConstraintTarget> Targets; // 0xc0
	bool bUseInitialTransforms; // 0xd0
	FRigUnit_TransformConstraint_WorkData WorkData; // 0xd8
};

struct FYLandingEventInfo {
	EYLandingType m_landingType; // 0x0
	float m_fallingDistance; // 0x4
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

struct FAITeamStimulusEvent {
	AActor* Broadcaster; // 0x28
	AActor* Enemy; // 0x30
};

struct FYPlayerEquippedWeaponData {
	EYEquipedWeaponPoseType m_equippedWeaponPoseType; // 0x0
	EYEquipedAnimationWeaponType m_equippedAnimationWeaponType; // 0x1
	EYDeviceCategory m_equippedDeviceCategory; // 0x2
};

struct FCompositeFont {
	FTypeface DefaultTypeface; // 0x0
	FCompositeFallbackFont FallbackTypeface; // 0x10
	TArray<FCompositeSubFont> SubTypefaces; // 0x28
};

struct FCustomizedToolMenuNameArray {
	TArray<FName> Names; // 0x0
};

struct FGrassInput {
	FName Name; // 0x0
	ULandscapeGrassType* GrassType; // 0x8
	FExpressionInput Input; // 0x10
};

struct FProfilesSetProfileLanguageRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	int32_t ExpectedVersion; // 0x18
	FString Language; // 0x20
};

struct FYDebugResetFactionProgressRequest {
	FString factionId; // 0x0
};

struct FBPInterfaceDescription {
	UInterface* Interface; // 0x0
	TArray<UEdGraph*> Graphs; // 0x8
};

struct FAnimNode_ApplyLimits : FAnimNode_SkeletalControlBase {
	TArray<FAngularRangeLimit> AngularRangeLimits; // 0xc8
	TArray<FVector> AngularOffsets; // 0xd8
};

struct FRigSpace : FRigElement {
	ERigSpaceType SpaceType; // 0x18
	FName ParentName; // 0x1c
	int32_t ParentIndex; // 0x24
	FTransform InitialTransform; // 0x30
	FTransform LocalTransform; // 0x60
};

struct FClothCollisionPrim_SphereConnection {
	int32_t SphereIndices[0x2]; // 0x0
};

struct FYMetaItemUIData {
	FText display_name; // 0x0
	FText Description; // 0x18
	FText flavor_text; // 0x30
};

struct FMovieSceneEnumPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneByteChannel EnumCurve; // 0x38
};

struct FRigVMByteCodeEntry {
	FName Name; // 0x0
	int32_t InstructionIndex; // 0x8
};

struct FAuthenticationGetEntityTokenRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FPropertyAccessCopyBatch {
	TArray<FPropertyAccessCopy> Copies; // 0x0
};

struct FRigUnit_AccumulateQuatLerp : FRigUnit_SimBase {
	FQuat TargetValue; // 0x10
	FQuat InitialValue; // 0x20
	float Blend; // 0x30
	bool bIntegrateDeltaTime; // 0x34
	FQuat Result; // 0x40
	FQuat AccumulatedValue; // 0x50
};

struct FNamedNetDriver {
	UNetDriver* NetDriver; // 0x0
};

struct FNodeHierarchyWithUserData {
	FNodeHierarchyData Hierarchy; // 0x8
};

struct FYDebugGiveCurrenciesRequest {
	FString UserId; // 0x0
	FString userPlatform; // 0x10
	TArray<FYCurrencyItem> currencies; // 0x20
};

struct FAdminListOpenIdConnectionResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Connections; // 0x8
};

struct FAdminGrantItemsToUsersRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> ItemGrants; // 0x20
};

struct FNiagaraBoundParameter {
	FNiagaraVariable Parameter; // 0x0
	int32_t SrcOffset; // 0x20
	int32_t DestOffset; // 0x24
};

struct FYBaseActivityStats : FYBaseAnalyticsEvent {
	int32_t position_x; // 0xa8
	int32_t position_y; // 0xac
	int32_t position_z; // 0xb0
	int32_t time_since_match_start; // 0xb4
};

struct FYConfigurationRow : FYDataTableRowBase {
	FString m_surveyLink; // 0x10
};

struct FYServerPerformanceData {
	float m_frameTime; // 0x0
	float m_frameTimeHighest; // 0x4
	uint32_t m_memory; // 0x8
	uint32_t m_memoryHighest; // 0xc
	uint32_t m_numPlayers; // 0x10
	uint32_t m_numAIs; // 0x14
};

struct FActiveForceFeedbackEffect {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x0
};

struct FNiagaraMatrix {
	FVector4 Row0; // 0x0
	FVector4 Row1; // 0x10
	FVector4 Row2; // 0x20
	FVector4 Row3; // 0x30
};

struct FYFireTransportEntry {
	FVector_NetQuantize m_location; // 0x0
	FVector_NetQuantizeNormal m_direction; // 0xc
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

struct FNiagaraHalfVector4 {
	uint16_t X; // 0x0
	uint16_t Y; // 0x2
	uint16_t Z; // 0x4
	uint16_t W; // 0x6
};

struct FClientGetPlayerStatisticsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Statistics; // 0x8
};

struct FAttributesForVertex {
	FVertexID VertexID; // 0x0
	FMeshElementAttributeList VertexAttributes; // 0x8
};

struct FYProgressionUnlockCollectionData {
	TArray<FYProgressionUnlockData> m_factionUnlockData; // 0x0
};

struct FYSocialPresenceUpdated {
	FString UserId; // 0x0
	FYSocialPresenceEntry Entry; // 0x10
};

struct FBlueprintComponentDelegateBinding {
	FName ComponentPropertyName; // 0x0
	FName DelegatePropertyName; // 0x8
	FName FunctionNameToBind; // 0x10
};

struct FClientGetFriendLeaderboardAroundPlayerResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
	FString NextReset; // 0x18
	int32_t Version; // 0x28
};

struct FYGetUsersDataByNamesRequest {
	TArray<FString> userNames; // 0x0
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

struct FLevelVisibilityComponentData {
	UMovieSceneLevelVisibilitySection* Section; // 0x0
};

struct FYItemCraftingDataPerShop {
	FDataTableRowHandle m_shop; // 0x0
	TMap<EYItemRarityType, FYItemRecipe> m_craftingPricesPerRarity; // 0x10
};

struct FClientGetCharacterInventoryResult : FPlayFabResultCommon {
	FString CharacterId; // 0x8
	TArray<UPlayFabJsonObject*> Inventory; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FYProspectorLevelRewardsDataTableRow : FYVanityItemRowBase {
	int32_t m_startLevel; // 0x378
	FText m_title; // 0x380
	TSoftObjectPtr<UTexture2D> m_borderPath; // 0x398
	TSoftObjectPtr<UTexture2D> m_iconPath; // 0x3c0
};

struct FDirectLinkMsg_HaveListMessage {
	int32_t SourceStreamPort; // 0x0
	int32_t SyncCycle; // 0x4
	int32_t MessageCode; // 0x8
	char Kind; // 0xc
	TArray<char> Payload; // 0x10
	TArray<int32_t> NodeIds; // 0x20
	TArray<int32_t> Hashes; // 0x30
};

struct FYGetPlayerInventories {
	TArray<FString> userIds; // 0x0
};

struct FYDebugSetTechTreeNodeLevelResult {
	FString UserId; // 0x0
	FString nodeId; // 0x10
	int32_t Level; // 0x20
	EYCheatResult Status; // 0x24
};

struct FYPlayerAwarenessNotificationDataTableRow : FYDataTableRowBase {
	bool m_ignoreLocallyControlled; // 0x10
	EYPlayerAwarenessNotificationType m_notficationType; // 0x11
	bool m_shouldPlayVo; // 0x12
	FDataTableRowHandle m_notificationVoRowHandle; // 0x18
	bool m_shouldPlaySound; // 0x28
	FDataTableRowHandle m_notificationSoundRowHandle; // 0x30
	float m_notificationCooldown; // 0x40
};

struct FNameMapping {
	FName NodeName; // 0x0
	FName BoneName; // 0x8
};

struct FRichImageRow : FTableRowBase {
	FSlateBrush Brush; // 0x8
};

struct FYStoredInventoryWeaponData {
	FYStoredRuntimeWeaponInformation m_runtimeInformation; // 0x0
	FYStoredModData m_storedMods; // 0xe0
	TArray<FDataTableRowHandle> m_vanityEntries; // 0xf0
	TArray<FDataTableRowHandle> m_gearStoreUpgrades; // 0x100
};

struct FYModifySkillEntry {
	FString UserId; // 0x0
	int32_t skill; // 0x10
	int32_t deviation; // 0x14
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

struct FClientGetAdPlacementsRequest : FPlayFabRequestCommon {
	FString AppId; // 0x8
	UPlayFabJsonObject* Identifier; // 0x18
};

struct FRigUnit_ChainHarmonicsPerItem : FRigUnit_HighlevelBaseMutable {
	FRigElementKey ChainRoot; // 0x68
	FVector Speed; // 0x74
	FRigUnit_ChainHarmonics_Reach Reach; // 0x80
	FRigUnit_ChainHarmonics_Wave Wave; // 0xa8
	FRuntimeFloatCurve WaveCurve; // 0xe8
	FRigUnit_ChainHarmonics_Pendulum Pendulum; // 0x170
	bool bDrawDebug; // 0x1ac
	FTransform DrawWorldOffset; // 0x1b0
	FRigUnit_ChainHarmonics_WorkData WorkData; // 0x1e0
};

struct FRigUnit_BoneHarmonics : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_BoneHarmonics_BoneTarget> Bones; // 0x68
	FVector WaveSpeed; // 0x78
	FVector WaveFrequency; // 0x84
	FVector WaveAmplitude; // 0x90
	FVector WaveOffset; // 0x9c
	FVector WaveNoise; // 0xa8
	EControlRigAnimEasingType WaveEase; // 0xb4
	float WaveMinimum; // 0xb8
	float WaveMaximum; // 0xbc
	EControlRigRotationOrder RotationOrder; // 0xc0
	bool bPropagateToChildren; // 0xc1
	FRigUnit_BoneHarmonics_WorkData WorkData; // 0xc8
};

struct FAdminUpdateRandomResultTablesRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	TArray<UPlayFabJsonObject*> Tables; // 0x20
};

struct FMTDResult {
	FVector Direction; // 0x0
	float Distance; // 0xc
};

struct FYRequestActiveMission {
	FString UserId; // 0x0
};

struct FPolygonGroupToCreate {
	FMeshElementAttributeList PolygonGroupAttributes; // 0x0
	FPolygonGroupID OriginalPolygonGroupID; // 0x10
};

struct FSmartName {
	FName DisplayName; // 0x0
};

struct FNiagaraModuleDependency {
	FName ID; // 0x0
	ENiagaraModuleDependencyType Type; // 0x8
	ENiagaraModuleDependencyScriptConstraint ScriptConstraint; // 0x9
	FText Description; // 0x10
};

struct FAngularDriveConstraint {
	FConstraintDrive TwistDrive; // 0x0
	FConstraintDrive SwingDrive; // 0x10
	FConstraintDrive SlerpDrive; // 0x20
	FRotator OrientationTarget; // 0x30
	FVector AngularVelocityTarget; // 0x3c
	EAngularDriveMode AngularDriveMode; // 0x48
};

struct FYInteractionUpdateData {
	UYPlayerInteractionComponent* m_playerInteractionComponent; // 0x0
	FYPlayerInteraction m_interactionData; // 0x8
	EYInteractionUpdateType m_interactionUpdateType; // 0x30
	bool m_perfectInteraction; // 0x31
};

struct FChunkInfoData {
	FGuid Guid; // 0x0
	uint64_t Hash; // 0x10
	FSHAHashData ShaHash; // 0x18
	int64_t FileSize; // 0x30
	char GroupNumber; // 0x38
};

struct FRigUnit_ChainHarmonics_WorkData {
	FVector Time; // 0x0
	TArray<FCachedRigElement> Items; // 0x10
	TArray<float> Ratio; // 0x20
	TArray<FVector> LocalTip; // 0x30
	TArray<FVector> PendulumTip; // 0x40
	TArray<FVector> PendulumPosition; // 0x50
	TArray<FVector> PendulumVelocity; // 0x60
	TArray<FVector> HierarchyLine; // 0x70
	TArray<FVector> VelocityLines; // 0x80
};

struct FVirtualTextureSpacePoolConfig {
	int32_t MinTileSize; // 0x0
	int32_t MaxTileSize; // 0x4
	TArray<EPixelFormat> Formats; // 0x8
	int32_t SizeInMegabyte; // 0x18
	bool bAllowSizeScale; // 0x1c
	uint32_t ScalabilityGroup; // 0x20
};

struct FParameterGroupData {
	FString GroupName; // 0x0
	int32_t GroupSortPriority; // 0x10
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

struct FClientLinkPSNAccountRequest : FPlayFabRequestCommon {
	FString AuthCode; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	bool ForceLink; // 0x20
	int32_t IssuerId; // 0x24
	FString RedirectUri; // 0x28
};

struct FYAbilityActionBombardmentData : FYAbilityActionDataTableRow {
	float m_radius; // 0x78
	float m_damageCapsuleRadius; // 0x7c
	float m_damageCapsuleHalfHeight; // 0x80
	float m_damage; // 0x84
	float m_damageDuration; // 0x88
	float m_warmUpDuration; // 0x8c
	UParticleSystem* m_bombardmentStartParticleSystem; // 0x90
	UParticleSystem* m_bombardmentEndParticleSystem; // 0x98
	FDataTableRowHandle m_playerActivationSFX; // 0xa0
	FDataTableRowHandle m_incomingSFX; // 0xb0
	FDataTableRowHandle m_impactSFX; // 0xc0
	int32_t m_amountOfStrikes; // 0xd0
	EYDamageApplication m_application; // 0xd4
};

struct FYLootContainerDefinitionRow : FYAssetVariationDefinitionRow {
	FText m_containerName; // 0x10
	TSoftObjectPtr<USoundBase> m_soundOpen; // 0x28
	TSoftObjectPtr<USoundBase> m_soundClose; // 0x50
	TSoftObjectPtr<USkeletalMesh> m_skeletalMesh; // 0x78
	TArray<TSoftObjectPtr<UMaterialInterface>> m_skeletalMeshMaterialOverrides; // 0xa0
	TSoftObjectPtr<UAnimSequenceBase> m_openAnimation; // 0xb0
	int32_t m_weightLimit; // 0xd8
	TMap<EYLootContainerTier, FDataTableRowHandle> m_lootTiers; // 0xe0
};

struct FClientGetPlayFabIDsFromGameCenterIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FHorizonTweenEventWidgetSheerFromToParameters : FHorizonTweenEventWidgetVector2DParameters {
	TWeakObjectPtr<UWidget> TweenTargetWeakPtr; // 0xb8
};

struct FRigUnit_AccumulateVectorMul : FRigUnit_SimBase {
	FVector Multiplier; // 0x8
	FVector InitialValue; // 0x14
	bool bIntegrateDeltaTime; // 0x20
	FVector Result; // 0x24
	FVector AccumulatedValue; // 0x30
};

struct FSoundModulationDefaultRoutingSettings : FSoundModulationDefaultSettings {
	EModulationRouting VolumeRouting; // 0x40
	EModulationRouting PitchRouting; // 0x41
	EModulationRouting HighpassRouting; // 0x42
	EModulationRouting LowpassRouting; // 0x43
};

struct FFloatInterval {
	float Min; // 0x0
	float Max; // 0x4
};

struct FProfilesGetGlobalPolicyRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FTextureSourceBlock {
	int32_t BlockX; // 0x0
	int32_t BlockY; // 0x4
	int32_t SizeX; // 0x8
	int32_t SizeY; // 0xc
	int32_t NumSlices; // 0x10
	int32_t NumMips; // 0x14
};

struct FRigUnit_DebugTransformMutableItemSpace : FRigUnit_DebugBaseMutable {
	FTransform Transform; // 0x70
	ERigUnitDebugTransformMode Mode; // 0xa0
	FLinearColor Color; // 0xa4
	float Thickness; // 0xb4
	float Scale; // 0xb8
	FRigElementKey Space; // 0xbc
	FTransform WorldOffset; // 0xd0
	bool bEnabled; // 0x100
};

struct FYDebugSetCraftingMaterialAmount {
	FString UserId; // 0x0
	FString materialName; // 0x10
	int32_t materialAmount; // 0x20
};

struct FYBackendInitializationData {
	FString m_token; // 0x0
	FString m_jwt; // 0x10
	FString m_commandLine; // 0x20
	FString m_host; // 0x30
	FString m_region; // 0x40
	FString m_port; // 0x50
	FString m_loginAuth; // 0x60
	FString m_loginName; // 0x70
	FString m_networkAdress; // 0x80
	FString m_loginPassword; // 0x90
	bool m_isDevelopment; // 0xa0
	int32_t m_instanceType; // 0xa4
	FString m_playfabId; // 0xa8
	FString m_userId; // 0xb8
};

struct FRigVMStatistics {
	uint32_t BytesForCDO; // 0x0
	uint32_t BytesPerInstance; // 0x4
	FRigVMMemoryStatistics LiteralMemory; // 0x8
	FRigVMMemoryStatistics WorkMemory; // 0x14
	uint32_t BytesForCaching; // 0x20
	FRigVMByteCodeStatistics ByteCode; // 0x24
};

struct FYAssetTagCheckEntry {
	FString m_tag; // 0x0
	bool m_specificTagEnabled; // 0x10
	TArray<FString> m_onlyCheckSpecificFolders; // 0x18
	TArray<FString> m_ignoreSpecificFolders; // 0x28
};

struct FYContractProgressionUnlockData {
	int32_t m_level; // 0x0
};

struct FYAbilityUIData {
	FYInventoryItem m_inventoryItem; // 0x0
	int32_t m_chargeAmount; // 0x98
	float m_timeRatio; // 0x9c
	float m_remainingTime; // 0xa0
	EYAbilityState m_abilityState; // 0xa4
};

struct FYDeclineSquadInviteResponse {
	EYSquadActionResult Result; // 0x0
	FString inviteId; // 0x8
};

struct FAdminUpdateCatalogItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Catalog; // 0x8
	FString CatalogVersion; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x28
	bool SetAsDefaultCatalog; // 0x30
};

struct FTapDelayInfo {
	ETapLineMode TapLineMode; // 0x0
	float DelayLength; // 0x4
	float Gain; // 0x8
	int32_t OutputChannel; // 0xc
	float PanInDegrees; // 0x10
	int32_t TapId; // 0x14
};

struct FCollectionScalarParameter : FCollectionParameterBase {
	float DefaultValue; // 0x18
};

struct FDataDeleteFilesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString FileNames; // 0x18
	int32_t ProfileVersion; // 0x28
};

struct FYDebugSetCraftingMaterialAmountResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
	FYCustomItemInfo changedMaterial; // 0x20
};

struct FYStoredRuntimeWeaponInformation {
	FYInventoryItem inventoryItem; // 0x0
	FString m_customItemID; // 0x98
	EYItemRarityType m_rarityType; // 0xa8
	FDataTableRowHandle m_rowHandle; // 0xb0
	int32_t m_ammoInClip; // 0xc0
	int32_t m_maxAmmo; // 0xc4
	float m_lastTimeFiresShot; // 0xc8
	FName m_ammoTypeID; // 0xcc
	int32_t m_weaponTransportHandle; // 0xd4
	EYWeaponSlotType m_slotType; // 0xd8
	int32_t m_zoomLevel; // 0xdc
};

struct FSHAHashData {
	char Hash[0x14]; // 0x0
};

struct FMS_HintMarkerReplicatedData_ST {
	FName ActiveMarkerId_9_7B44AE714CA2F178985EFB893A89AE89; // 0x0
	TArray<FTransform> HintTransforms_17_4C1A67004B0583AF2B9C328BF93AF29A; // 0x8
};

struct FYPlayerReward {
	FString RewardId; // 0x0
	int32_t Amount; // 0x10
	EYPlayerRewardSource Source; // 0x14
};

struct FMovieSceneBinding {
	FGuid ObjectGuid; // 0x0
	FString BindingName; // 0x10
	TArray<UMovieSceneTrack*> Tracks; // 0x20
};

struct FYFactionLevel {
	int32_t m_level; // 0x0
	int32_t m_reputation; // 0x4
};

struct FChaosBreakingEventData {
	FVector Location; // 0x0
	FVector Velocity; // 0xc
	float Mass; // 0x18
};

struct FYItemCurrentlyBeingCrafted {
	FString ItemId; // 0x0
	int32_t itemRarity; // 0x10
	int32_t purchaseAmount; // 0x14
	FYTimestamp utcTimestampWhenCraftingStarted; // 0x18
};

struct FGroupsBlockEntityRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	UPlayFabJsonObject* Group; // 0x18
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

struct FStaticComponentMaskParameter : FStaticParameterBase {
	bool R; // 0x24
	bool G; // 0x25
	bool B; // 0x26
	bool A; // 0x27
};

struct FRigUnit_SetBoneRotation : FRigUnitMutable {
	FName Bone; // 0x68
	FQuat Rotation; // 0x70
	EBoneGetterSetterMode Space; // 0x80
	float weight; // 0x84
	bool bPropagateToChildren; // 0x88
	FCachedRigElement CachedBone; // 0x8c
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

struct FStructure_InputKeyNav {
	FText NavLabel_3_1D3030FF48F4B027C56D8885BC7ED0CF; // 0x0
	FText PCLabel_6_CB42A76C49016385686DDBA2B3B9382A; // 0x18
	FDataTableRowHandle InputBinding_10_56D77B2944E1FDD4F600E88178F6424B; // 0x30
	bool InfoOnly_12_27D855974032CC7E1BB229ABA8E16CB0; // 0x40
};

struct FConstructionSystemSaveConstructedItem {
	UPrefabricatorAssetInterface* PrefabAsset; // 0x0
	int32_t Seed; // 0x8
	FTransform Transform; // 0x10
};

struct FAdminGetCloudScriptVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Versions; // 0x8
};

struct FInterpControlPoint {
	FVector PositionControlPoint; // 0x0
	bool bPositionIsRelative; // 0xc
};

struct FVertexOffsetUsage {
	int32_t Usage; // 0x0
};

struct FYModifyCustomItem {
	FString UserId; // 0x0
	FYCustomItemInfo itemToUpdate; // 0x10
	FString modIdUsed; // 0x80
};

struct FMultiplayerGetContainerRegistryCredentialsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FMovieSceneObjectBindingIDs {
	TArray<FMovieSceneObjectBindingID> ids; // 0x0
};

struct FYRankSeasonsData {
	TArray<FYRankSeasonData> rankSeasons; // 0x0
};

struct FSoundVariation {
	USoundWave* SoundWave; // 0x0
	float ProbabilityWeight; // 0x8
	FVector2D VolumeRange; // 0xc
	FVector2D PitchRange; // 0x14
};

struct FRigUnit_HierarchyGetSiblings : FRigUnit_HierarchyBase {
	FRigElementKey Item; // 0x8
	bool bIncludeItem; // 0x14
	FRigElementKeyCollection Siblings; // 0x18
	FCachedRigElement CachedItem; // 0x28
	FRigElementKeyCollection CachedSiblings; // 0x40
};

struct FYDebugStartMission {
	FString missionArcId; // 0x0
	FString missionId; // 0x10
};

struct FRigUnit_GetControlVector : FRigUnit {
	FName Control; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FVector Vector; // 0x14
	FVector Minimum; // 0x20
	FVector Maximum; // 0x2c
	FCachedRigElement CachedControlIndex; // 0x38
};

struct FLandmassFalloffSettings {
	EBrushFalloffMode FalloffMode; // 0x0
	float FalloffAngle; // 0x4
	float FalloffWidth; // 0x8
	float EdgeOffset; // 0xc
	float ZOffset; // 0x10
};

struct FServerGetPlayerProfileResult : FPlayFabResultCommon {
	UPlayFabJsonObject* PlayerProfile; // 0x8
};

struct FYCancelActiveContractRequest {
	FString UserId; // 0x0
	FString contractId; // 0x10
};

struct FRedirector {
	FName OldName; // 0x0
	FName NewName; // 0x8
};

struct FYItemStatsAssociationCollection {
	TSoftClassPtr<UObject> m_defaultItemContainer; // 0x0
	TArray<FYItemStatsAssociationEntry> m_data; // 0x28
	TArray<EYItemStatsType> m_detailedStatisticsTypes; // 0x38
	bool m_wantsToShowDetailStatistics; // 0x48
};

struct FYAIAttackPhaseDefinition {
	FName m_namePhase; // 0x0
	float m_durationFixed; // 0x8
	bool m_durationNeedsToBeCalculatedAtRuntime; // 0xc
	int32_t m_numTimesToPlayThisPhase; // 0x10
	int32_t m_numShots; // 0x14
	float m_firingDelayAfterPhaseStart; // 0x18
	float m_refireTime; // 0x1c
	bool m_isAffectedByGPAModifierAIAmountAttackPhaseCount; // 0x20
};

struct FInputAxisProperties {
	float DeadZone; // 0x0
	float sensitivity; // 0x4
	float Exponent; // 0x8
	char bInvert : 1; // 0xc
};

struct FAdminRevokeInventoryItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	FString ItemInstanceId; // 0x18
	FString PlayFabId; // 0x28
};

struct FMovieSceneEvaluationFieldSharedEntityMetaData {
	FGuid ObjectBindingID; // 0x0
};

struct FTwoVectors {
	FVector v1; // 0x0
	FVector v2; // 0xc
};

struct FCachedAnimStateData {
	FName StateMachineName; // 0x0
	FName StateName; // 0x8
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

struct FYStatusEffectAreaRow : FYDataTableRowBase {
	float m_damagePerTick; // 0x10
	float m_damageTickFrequency; // 0x14
	TArray<FDataTableRowHandle> m_perksToApply; // 0x18
	FYDamageOriginInfo m_damageOriginInfo; // 0x28
};

struct FSplineCurves {
	FInterpCurveVector Position; // 0x0
	FInterpCurveQuat Rotation; // 0x18
	FInterpCurveVector Scale; // 0x30
	FInterpCurveFloat ReparamTable; // 0x48
	USplineMetadata* MetaData; // 0x60
	uint32_t Version; // 0x68
};

struct FBlueprintInputDelegateBinding {
	char bConsumeInput : 1; // 0x0
	char bExecuteWhenPaused : 1; // 0x0
	char bOverrideParentBinding : 1; // 0x0
};

struct FRigUnit_PowerIK : FRigUnitMutable {
	FName CharacterRoot; // 0x68
	float RootRotationMultiplier; // 0x70
	TArray<FPowerIKEffector> Effectors; // 0x78
	TArray<FPowerIKBoneBendDirection> BendDirections; // 0x88
	TArray<FPowerIKExcludedBone> ExcludedBones; // 0x98
	TArray<FPowerIKBoneLimit> JointLimits; // 0xa8
	FPowerIKCenterOfGravity CenterOfGravityConstraint; // 0xb8
	FPowerIKBodyInertia Inertia; // 0xc8
	int32_t MaxSquashIterations; // 0xdc
	int32_t MaxStretchIterations; // 0xe0
	int32_t MaxFinalIterations; // 0xe4
	bool AllowBoneTranslation; // 0xe8
	float SolverAlpha; // 0xec
	FPowerIKCore Core; // 0xf0
};

struct FAdminGetUserInventoryResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Inventory; // 0x8
	FString PlayFabId; // 0x18
	UPlayFabJsonObject* VirtualCurrency; // 0x28
	UPlayFabJsonObject* VirtualCurrencyRechargeTimes; // 0x30
};

struct FServerGetSharedGroupDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	FString Members; // 0x10
};

struct FARSkeletonDefinition {
	int32_t NumJoints; // 0x0
	TArray<FName> JointNames; // 0x8
	TArray<int32_t> ParentIndices; // 0x18
};

struct FMaterialShadingModelField {
	uint16_t ShadingModelField; // 0x0
};

struct FClientUpdateUserTitleDisplayNameResult : FPlayFabResultCommon {
	FString DisplayName; // 0x8
};

struct FAnimParentNodeAssetOverride {
	UAnimationAsset* NewAsset; // 0x0
	FGuid ParentNodeGuid; // 0x8
};

struct FYSquadInviteDeclined {
	FString TargetId; // 0x0
};

struct FGroupsDeleteRoleRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
	FString RoleId; // 0x18
};

struct FNiagaraCompileEvent {
	FNiagaraCompileEventSeverity Severity; // 0x0
	FString Message; // 0x8
	FGuid NodeGuid; // 0x18
	FGuid PinGuid; // 0x28
	TArray<FGuid> StackGuids; // 0x38
};

struct FYRemoveCustomItem {
	FString UserId; // 0x0
	FString ItemId; // 0x10
};

struct FRigUnit_GetInitialBoneTransform : FRigUnit {
	FName Bone; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedBone; // 0x50
};

struct FRigUnit_GetSpaceTransform : FRigUnit {
	FName Space; // 0x8
	EBoneGetterSetterMode SpaceType; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedSpaceIndex; // 0x50
};

struct FYProfanityTableRow : FTableRowBase {
	FName m_name; // 0x8
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

struct FMultiplayerListVirtualMachineSummariesRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	int32_t PageSize; // 0x20
	FString Region; // 0x28
	FString SkipToken; // 0x38
};

struct FServerRevokeInventoryItemsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Errors; // 0x8
};

struct FSoftObjectPath {
	FName AssetPathName; // 0x0
	FString SubPathString; // 0x8
};

struct FMovieSceneTrackInstanceInput {
	UMovieSceneSection* Section; // 0x0
};

struct FBehaviorTreeTemplateInfo {
	UBehaviorTree* Asset; // 0x0
	UBTCompositeNode* Template; // 0x8
};

struct FYCharacterCustomizationArchetypeRow : FYVanityItemRowBase {
	FText m_description; // 0x378
	EYCustomizationBodyType m_bodyType; // 0x390
	TArray<FDataTableRowHandle> m_headItems; // 0x398
	TArray<FDataTableRowHandle> m_baseSuitItems; // 0x3a8
	TMap<EYCustomizationCategory, FDataTableRowHandle> m_defaultItems; // 0x3b8
	TMap<EYCustomizationCategory, FYCharacterArchetypeDefaultItemEntry> m_startingItems; // 0x408
};

struct FInsightsInsightsSetStorageRetentionRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	int32_t RetentionDays; // 0x10
};

struct FNamedVector {
	FVector Value; // 0x0
	FName Name; // 0xc
};

struct FYModSlotDefinition {
	EYModificationSlotType m_slotType; // 0x0
	FGameplayTag m_modSlotTag; // 0x4
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

struct FYMatchmakingRegionSetup {
	FString defaultRegion; // 0x0
	TArray<FYMatchmakingRegionSetupEntry> Overrides; // 0x10
};

struct FServerBanUsersRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Bans; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FSectionEvaluationData {
	int32_t ImplIndex; // 0x0
	FFrameNumber ForcedTime; // 0x4
	ESectionEvaluationFlags Flags; // 0x8
};

struct FAnimNode_BlendListByBool : FAnimNode_BlendListBase {
	bool bActiveValue; // 0x98
};

struct FMaterialSpriteElement {
	UMaterialInterface* Material; // 0x0
	UCurveFloat* DistanceToOpacityCurve; // 0x8
	char bSizeIsInScreenSpace : 1; // 0x10
	float BaseSizeX; // 0x14
	float BaseSizeY; // 0x18
	UCurveFloat* DistanceToSizeCurve; // 0x20
};

struct FDatasmithCameraLookatTrackingSettingsTemplate {
	char bEnableLookAtTracking : 1; // 0x0
	char bAllowRoll : 1; // 0x0
	TSoftObjectPtr<AActor> ActorToTrack; // 0x8
};

struct FYMatchFlowRow : FYDataTableRowBase {
	TArray<FDataTableRowHandle> m_matchFlow; // 0x10
};

struct FServerGetPlayFabIDsFromGenericIDsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Data; // 0x8
};

struct FClientGetLeaderboardForUsersCharactersResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Leaderboard; // 0x8
};

struct FRigUnit_MathFloatConstant : FRigUnit_MathFloatBase {
	float Value; // 0x8
};

struct FRigUnit_ChainHarmonics_Pendulum {
	bool bEnabled; // 0x0
	float PendulumStiffness; // 0x4
	FVector PendulumGravity; // 0x8
	float PendulumBlend; // 0x14
	float PendulumDrag; // 0x18
	float PendulumMinimum; // 0x1c
	float PendulumMaximum; // 0x20
	EControlRigAnimEasingType PendulumEase; // 0x24
	FVector UnwindAxis; // 0x28
	float UnwindMinimum; // 0x34
	float UnwindMaximum; // 0x38
};

struct FYAudioSettingsRow : FYDataTableRowBase {
	float m_announcementInterruptSoundFadeoutTime; // 0x10
	float m_fallbackSoundDuration; // 0x14
	float m_minDurationAnnouncement; // 0x18
	float m_maxDurationAnnouncement; // 0x1c
	float m_maxQueueTime; // 0x20
	FName m_factionIdFallback; // 0x24
	USoundAttenuation* m_soundAttenuationCommWheelVOInWorld; // 0x30
	USoundAttenuation* m_soundAttenuationEffortsVOInWorld; // 0x38
	TMap<EYVolumeBusType, USoundClass*> m_soundClassesPerVolumeBusType; // 0x40
};

struct FYGetAllPlayfabUserDataResult {
	FString UserId; // 0x0
	bool SUCCESS; // 0x10
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

struct FYUiPopupItemSuccessfulTunedPreviewData {
	FDataTableRowHandle m_blueprintHandle; // 0x0
	EYItemRarityType m_itemRarity; // 0x10
	FString m_itemBackendId; // 0x18
	FString m_baseItemId; // 0x28
	int32_t m_oldValue; // 0x38
	int32_t m_newValue; // 0x3c
};

struct FYUpgradeDebugChange {
	FYInventoryItem m_desiredItem; // 0x0
};

struct FMovieSceneEvaluationGroupLUTIndex {
	int32_t NumInitPtrs; // 0x0
	int32_t NumEvalPtrs; // 0x4
};

struct FAdminDeletePlayerSharedSecretRequest : FPlayFabRequestCommon {
	FString SecretKey; // 0x8
};

struct FYPurchaseShopOfferResponse {
	EYPurchaseOfferResult returnResult; // 0x0
	FYShopOffer shopOffer; // 0x8
	FString TransactionId; // 0x20
};

struct FMovieSceneStringPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneStringChannel StringCurve; // 0x38
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

struct FYPlayerMatched {
	FString matchTicketId; // 0x0
};

struct FYStationServerPlayerLeft {
	FString UserId; // 0x0
};

struct FHorizonTweenEventSlateWidgetMoveSplinePathParameters : FHorizonTweenEventSplinePathParameters {
	bool bTweenSheer; // 0x140
};

struct FServerUpdateAvatarUrlRequest : FPlayFabRequestCommon {
	FString ImageUrl; // 0x8
	FString PlayFabId; // 0x18
};

struct FImageWriteOptions {
	EDesiredImageFormat Format; // 0x0
	FDelegate OnComplete; // 0x4
	int32_t CompressionQuality; // 0x14
	bool bOverwriteFile; // 0x18
	bool bAsync; // 0x19
};

struct FMultiplayerDeleteBuildRegionRequest : FPlayFabRequestCommon {
	FString BuildId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString Region; // 0x20
};

struct FRigUnit_AddBoneTransform : FRigUnitMutable {
	FName Bone; // 0x68
	FTransform Transform; // 0x70
	float weight; // 0xa0
	bool bPostMultiply; // 0xa4
	bool bPropagateToChildren; // 0xa5
	FCachedRigElement CachedBone; // 0xa8
};

struct FRBFEntry {
	TArray<float> Values; // 0x0
};

struct FYPastSeasonSummary {
	FString seasonId; // 0x0
	FYPlayersRankedSeasonData Summary; // 0x10
};

struct FYSceneCameraDataRuntimeEntry {
	AActor* m_cameraActor; // 0x0
	EYSceneState m_sceneState; // 0x8
};

struct FXRDeviceId {
	FName SystemName; // 0x0
	int32_t DeviceID; // 0x8
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

struct FMeshTriCoordinate {
	int32_t Tri; // 0x0
	FVector BaryCoord; // 0x4
};

struct FMovieSceneNiagaraColorParameterSectionTemplate : FMovieSceneNiagaraParameterSectionTemplate {
	FMovieSceneFloatChannel RedChannel; // 0x40
	FMovieSceneFloatChannel GreenChannel; // 0xe0
	FMovieSceneFloatChannel BlueChannel; // 0x180
	FMovieSceneFloatChannel AlphaChannel; // 0x220
};

struct FYGetPlayerInventoriesLimitsResult {
	bool SUCCESS; // 0x0
	TArray<FYPlayerInventoryLimitResultData> entries; // 0x8
};

struct FFOscillator {
	float Amplitude; // 0x0
	float Frequency; // 0x4
	EInitialOscillatorOffset InitialOffset; // 0x8
	EOscillatorWaveform Waveform; // 0x9
};

struct FProcMeshTangent {
	FVector TangentX; // 0x0
	bool bFlipTangentY; // 0xc
};

struct FYPlayerRankedSeasonData {
	FString UserId; // 0x0
	TArray<FYPlayerRankedGamemodeData> playerRankedGamemodesData; // 0x10
};

struct FAdminCreatePlayerStatisticDefinitionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Statistic; // 0x8
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

struct FRigUnit_GetBoneTransform : FRigUnit {
	FName Bone; // 0x8
	EBoneGetterSetterMode Space; // 0x10
	FTransform Transform; // 0x20
	FCachedRigElement CachedBone; // 0x50
};

struct FClientRegisterForIOSPushNotificationRequest : FPlayFabRequestCommon {
	FString ConfirmationMessage; // 0x8
	FString DeviceToken; // 0x18
	bool SendPushNotificationConfirmation; // 0x28
};

struct FMovieSceneEvent {
	FMovieSceneEventPtrs Ptrs; // 0x0
};

struct FRigUnit_MathQuaternionBinaryOp : FRigUnit_MathQuaternionBase {
	FQuat A; // 0x10
	FQuat B; // 0x20
	FQuat Result; // 0x30
};

struct FParticleEditorPromotionSettings {
	FFilePath DefaultParticleAsset; // 0x0
};

struct FYFriendsImportRequest {
	FString loginIdentityProviderString; // 0x0
	TArray<FString> userIdsPlatform; // 0x10
};

struct FYScannableRow : FYDataTableRowBase {
	float m_minScanDistance; // 0x10
	float m_maxScanDistance; // 0x14
	FString m_debugString; // 0x18
	FColor m_color; // 0x28
};

struct FMultiplayerGetTitleEnabledForMultiplayerServersStatusResponse : FPlayFabResultCommon {
	ETitleMultiplayerServerEnabledStatus Status; // 0x8
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

struct FTTPropertyTrack : FTTTrackBase {
	FName PropertyName; // 0x18
};

struct FYSearchSocialProfilesResult {
	EYSocialRequestResult Result; // 0x0
	TArray<FYSocialProfileEntry> entries; // 0x8
	int32_t searchRequest; // 0x18
	bool includePresence; // 0x1c
};

struct FRigUnit_PropagateTransform : FRigUnitMutable {
	FRigElementKey Item; // 0x68
	bool bRecomputeGlobal; // 0x74
	bool bApplyToChildren; // 0x75
	bool bRecursive; // 0x76
	FCachedRigElement CachedIndex; // 0x78
};

struct FAIMoveRequest {
	AActor* GoalActor; // 0x0
};

struct FMovieSceneSequenceCompilerMaskStruct {
	char bHierarchy : 1; // 0x0
	char bEvaluationTemplate : 1; // 0x0
	char bEvaluationTemplateField : 1; // 0x0
	char bEntityComponentField : 1; // 0x0
};

struct FYDespawnPickUpInfo {
	float m_minAlivePickUpTime; // 0x0
	float m_minPlayerDistance; // 0x4
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

struct FTransformFilter {
	FFilterOptionPerAxis TranslationFilter; // 0x0
	FFilterOptionPerAxis RotationFilter; // 0x3
	FFilterOptionPerAxis ScaleFilter; // 0x6
};

struct FHorizonTweenEventActorRotatorFromToParameters : FHorizonTweenEventRotatorParameters {
	TWeakObjectPtr<AActor> TweenTargetWeakPtr; // 0x150
	bool bShortestPath; // 0x158
};

struct FRigUnit_MathVectorBinaryOp : FRigUnit_MathVectorBase {
	FVector A; // 0x8
	FVector B; // 0x14
	FVector Result; // 0x20
};

struct FLevelSequenceObject {
	LazyObjectProperty ObjectOrOwner; // 0x0
	FString ComponentName; // 0x20
	TWeakObjectPtr<UObject> CachedComponent; // 0x30
};

struct FAnimNode_MultiWayBlend : FAnimNode_Base {
	TArray<FPoseLink> Poses; // 0x10
	TArray<float> DesiredAlphas; // 0x20
	FInputScaleBias AlphaScaleBias; // 0x40
	bool bAdditiveNode; // 0x48
	bool bNormalizeAlpha; // 0x49
};

struct FYCosmeticStringVisualizationRequest {
	FString m_finalString; // 0x0
	int32_t m_iterationCount; // 0x10
	float m_iterationDelay; // 0x14
	int32_t m_handle; // 0x18
	int32_t m_charPerIteration; // 0x1c
	FString m_currentString; // 0x30
	int32_t m_currentIterationCount; // 0x40
	float m_currentIterationDelay; // 0x44
	bool m_isFinished; // 0x48
};

struct FRigControlValueStorage {
	float Float00; // 0x0
	float Float01; // 0x4
	float Float02; // 0x8
	float Float03; // 0xc
	float Float10; // 0x10
	float Float11; // 0x14
	float Float12; // 0x18
	float Float13; // 0x1c
	float Float20; // 0x20
	float Float21; // 0x24
	float Float22; // 0x28
	float Float23; // 0x2c
	float Float30; // 0x30
	float Float31; // 0x34
	float Float32; // 0x38
	float Float33; // 0x3c
	bool bValid; // 0x40
};

struct FTimeStretchCurve {
	float SamplingRate; // 0x0
	float CurveValueMinPrecision; // 0x4
	TArray<FTimeStretchCurveMarker> Markers; // 0x8
	float Sum_dT_i_by_C_i[0x3]; // 0x18
};

struct FRigUnit_SecondsToFrames : FRigUnit_AnimBase {
	float Seconds; // 0x8
	float Frames; // 0xc
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

struct FYPlayerTuningDataTableRow : FYDataTableRowBase {
	float m_wheelSelectionTapTime; // 0x10
	float m_wheelMouseMoveDelay; // 0x14
	FDataTableRowHandle m_damageInfoApplyForDamageSelf; // 0x18
	FDataTableRowHandle m_weaponCharmRowHandle; // 0x28
	int32_t m_amountOfToolSlots; // 0x38
	bool m_cancelReloadWhenStartSprinting; // 0x3c
	int32_t m_heatMapMaxPositionElement; // 0x40
	float m_durationDamagePlayerCountsa; // 0x44
	float m_walkSpeedMaximum; // 0x48
	float m_sprintSpeedModifier; // 0x4c
	float m_walkSpeedMaximumInStation; // 0x50
	float m_sprintSpeedModifierInStation; // 0x54
	float m_sprintDashSpeedModifier; // 0x58
	bool m_switchToToolState; // 0x5c
	bool m_switchBackAutomatically; // 0x5d
	float m_onlyFallingVelocityZReduction; // 0x60
	float m_dotTresholdConsideredSprinting; // 0x64
	float m_doubleTapTimeMoveKeys; // 0x68
	TMap<EYPlayerStateBlueprint, FYMovementCosmeticDataPerState> m_stateChangedCosmeticData; // 0x70
	float m_doubleTapSprintDashKeyTime; // 0xc0
	bool m_sprintDashToggleUsesDoubleTapKeyTime; // 0xc4
	bool m_canStartSlidingFromFalling; // 0xc5
	float m_slideVelocityReduction; // 0xc8
	float m_minSlideSpeed; // 0xcc
	float m_maxSlideSpeed; // 0xd0
	float m_startSlideSpeed; // 0xd4
	float m_startSlideSpeedFatgiued; // 0xd8
	float m_slideFatgiueDuration; // 0xdc
	UCurveFloat* m_slideVelocityChangeBasedOnSlope; // 0xe0
	float m_slideStrafeInputMultiplier; // 0xe8
	float m_slideCooldown; // 0xec
	float m_slideSlopeEffect; // 0xf0
	float m_slideBufferTime; // 0xf4
	bool m_cameraTraceComplexCollision; // 0xf8
	float m_cameraBoxThirdPersonCollision; // 0xfc
	float m_climbingVerticalDistance; // 0x100
	float m_climbingHorizontalDistance; // 0x104
	float m_climbingMaxWallDistance; // 0x108
	float m_climbingDesiredWallDistance; // 0x10c
	float m_additionalEndLocationZOffset; // 0x110
	float m_additionalVerticalLocationZOffset; // 0x114
	float m_additionalViewDirectionOffset; // 0x118
	float m_colliderScalarDuringMove; // 0x11c
	TMap<EYClimbingStateInternal, FYClimbingCosmeticDataPerState> m_climbingCosmeticsPerState; // 0x120
	TMap<EYObstacleType, float> m_obstacleHeightData; // 0x170
	float m_climbingDefaultSpeed; // 0x1c0
	TMap<EYClimbingStateInternal, float> m_climbingSpeedPerState; // 0x1c8
	TMap<EYClimbingStateInternal, float> m_vaultingSpeedPerState; // 0x218
	UCurveFloat* m_movementSpeedMultiplierByVelocity; // 0x268
	UCurveFloat* m_movementLerpCurve; // 0x270
	float m_climbingStaminaEmptyMovementMultiplier; // 0x278
	float m_climbingCooldownTime; // 0x27c
	float m_climbingDotThreshold; // 0x280
	float m_climbingSurfaceSteepnessDotThreshold; // 0x284
	float m_climbingCancelStateDotThreshold; // 0x288
	bool m_climbingCancelStateBasedOnDotThreshold; // 0x28c
	float m_ledgeClimbingFallDistanceMultiplier; // 0x290
	TArray<FName> m_excludedTags; // 0x298
	bool m_lockViewDirection; // 0x2a8
	bool m_softLockViewDirection; // 0x2a9
	float m_softLockToleranceAngle; // 0x2ac
	bool m_vaultingEnabled; // 0x2b0
	float m_vaultingVerticalDistance; // 0x2b4
	bool m_vaultingRequiresGround; // 0x2b8
	bool m_vaultingApplyDownVelocity; // 0x2b9
	float m_maxLeaningAngleFirstPerson; // 0x2bc
	float m_maxLeaningAngleThirdPerson; // 0x2c0
	float m_maxLeaningTranslationFirstPerson; // 0x2c4
	float m_maxLeaningTranslationThirdPerson; // 0x2c8
	TArray<EYPlayerStateBlueprint> m_leaningCancelStates; // 0x2d0
	bool m_leaningLerpMethod; // 0x2e0
	float m_leaningRotationSpeed; // 0x2e4
	UCurveFloat* m_leaningLerpMapping; // 0x2e8
	bool m_leaningVelocityMethod; // 0x2f0
	float m_leaningMaxVelocity; // 0x2f4
	float m_leaningAcceleration; // 0x2f8
	UCurveFloat* m_leaningMaxVelocityCurve; // 0x300
	bool m_leaningEnabledCollisionCheck; // 0x308
	float m_leaningTraceHeight; // 0x30c
	float m_leaningTraceDistance; // 0x310
	float m_leaningSphereTraceRadius; // 0x314
	float m_leaningAngleOffset; // 0x318
	float m_minFOV; // 0x31c
	float m_maxFOV; // 0x320
	float m_cameraSprintingFOV; // 0x324
	float m_cameraSprintDashFOV; // 0x328
	float m_cameraSlideFOV; // 0x32c
	float m_cameraDefaultFOV; // 0x330
	float m_backwardMovementSpeedReduction; // 0x334
	float m_sideMovementSpeedMultiplier; // 0x338
	float m_cameraInterpolationTargetingReturnFOVSpeed; // 0x33c
	float m_cameraInterpolationSprintingReturnFOVSpeed; // 0x340
	float m_cameraInterpolationSprintDashReturnFOVSpeed; // 0x344
	float m_cameraInterpolationSlideReturnFOVSpeed; // 0x348
	float m_cameraInterpolationSprintingFOVSpeed; // 0x34c
	float m_cameraInterpolationSprintDashFOVSpeed; // 0x350
	float m_cameraInterpolationTargetingFOVSpeed; // 0x354
	float m_cameraInterpolationSlideFOVSpeed; // 0x358
	float m_cameraInterpolationDefaultFOVSpeed; // 0x35c
	float m_defaultFOVAdjustmentSpeed; // 0x360
	float m_TurnInputMultiplierSprinting; // 0x364
	float m_TurnInputMultiplierSprintDashing; // 0x368
	float m_fireInputBufferTime; // 0x36c
	float m_firstPersonWeaponFOVDefaultType; // 0x370
	int32_t m_numWeaponSlots; // 0x374
	TSoftObjectPtr<USkeletalMesh> m_meleeAttackSkeletalMesh; // 0x378
	FName m_meleeFirstPersonSocketAttachName; // 0x3a0
	FName m_meleeThirdPersonSocketAttachName; // 0x3a8
	FName m_meleeWeaponCosmeticAttachmentName; // 0x3b0
	FName m_meleeWeaponSocketAttackPointName; // 0x3b8
	FYPlayerMeleeData m_normalMeleeData; // 0x3c0
	float m_interactionDamageInterupTime; // 0x3e0
	float m_interactionTraceDistance; // 0x3e4
	int32_t m_maxTeamSize; // 0x3e8
	int32_t m_socialInviteSpamCount; // 0x3ec
	float m_socialInviteMaxDistance; // 0x3f0
	float m_socialInviteCounterDecrementTime; // 0x3f4
	float m_pactCancellationSafeTimer; // 0x3f8
	float m_pactInviteExpireTime; // 0x3fc
	float m_pactBetrayalSwitchTime; // 0x400
	float m_teamPactDuration; // 0x404
	float m_pactInviteTraceDistance; // 0x408
	float m_pactInvitePlayerSphereRadius; // 0x40c
	float m_pactInviteMaxAngle; // 0x410
	TArray<FYGameplayAttributeModifier> m_gameplayAttributesSolo; // 0x418
	TArray<FYGameplayAttributeModifier> m_gameplayAttributesInPact; // 0x428
	TArray<FYGameplayAttributeModifier> m_gameplayAttributesInPrePact; // 0x438
	TArray<FYGameplayAttributeModifier> m_gameplayAttributesInSquad; // 0x448
	TArray<FYGameplayAttributeModifier> m_gameplayAttributesReload; // 0x458
	TArray<FYGameplayAttributeModifier> m_gameplayAttributesToApplyInRevive; // 0x468
	FDataTableRowHandle m_dbnoAbility; // 0x478
	float m_timeBetweenEachAnnouncement; // 0x488
	UYDefaultInventoryDataAsset* m_defaultPIEinventoryDataAsset; // 0x490
	UYDefaultInventoryDataAsset* m_tutorialInventory; // 0x498
	int32_t m_maxAbilityUpgrades; // 0x4a0
	FVector m_localSpaceThirdPersonCameraOffset; // 0x4a4
	FVector m_overridenTestTHirdPersonCameraOffset; // 0x4b0
	float m_defaultTimeMoveToThirdPersonCamera; // 0x4bc
	FVector m_localSpaceCrouchOffset; // 0x4c0
	FDataTableRowHandle m_defaultHealthRow; // 0x4d0
	float m_cameraDeathOffset; // 0x4e0
	float m_spectateDistanceStep; // 0x4e4
	float m_minSpectateDistance; // 0x4e8
	float m_maxSpectateDistance; // 0x4ec
	FVector m_cameraSpectate3rdPersonViewOffset; // 0x4f0
	FDataTableRowHandle m_leavingMatchDamageInfoRowHandle; // 0x500
	float m_fallingDamageStartDistance; // 0x510
	float m_fallingDamageUUToDamagee; // 0x514
	FDataTableRowHandle m_fallingDamageInfoApplyRowHandle; // 0x518
	bool m_fallingDamageIgnoresShield; // 0x528
	float m_hardLandingFallingDistanceMin; // 0x52c
	float m_hardLandingStateActiveDuration; // 0x530
	float m_hardLandingResetCameraPitchAndRollTime; // 0x534
	UCurveVector* m_hardLandingMovementAndLookSpeedCurve; // 0x538
	UCurveVector* m_mediumLandingMovementAndLookSpeedCurve; // 0x540
	float m_mediumLandingFallingDistanceMin; // 0x548
	UMatineeCameraShake* m_mediumLandingCameraShake; // 0x550
	TArray<FYGameplayAttributeModifier> m_attributeModifierDBMO; // 0x558
	FYGameplayAttributeModifier m_attributeModifierWhileGettingExexcuted; // 0x568
	float m_DBNODuration; // 0x5d8
	float m_DBNODurationPact; // 0x5dc
	float m_healthPercentAfterDBNO; // 0x5e0
	float m_reviveDurationBase; // 0x5e4
	float m_reviveDurationCameraTransition; // 0x5e8
	float m_reviveBlockMovementDuration; // 0x5ec
	float m_reviveCameraTransitionHeadSafeZoneRadius; // 0x5f0
	float m_dbnoShieldMaxHealth; // 0x5f4
	float m_recoilCompensationPitchValueDeadzone; // 0x5f8
	float m_recoilCompensationYawValueDeadzone; // 0x5fc
	float m_timeToRevealPlayersExecuted; // 0x600
	float m_timeToTeleportDBNO; // 0x604
	float m_DBNOCooldownUsedTeleport; // 0x608
	float m_DBNOTeleportBlackScreenDuration; // 0x60c
	float m_DBNOTeleportFadeFromBlackDuration; // 0x610
	float m_spectateDeadPawnTime; // 0x614
	float m_spectateRotationAnimationTime; // 0x618
	float m_spectateRotationAnimationRadius; // 0x61c
	float m_spectateRotationAnimationStartZOffset; // 0x620
	float m_specateEaseOutTime; // 0x624
	float m_spectateEaseOutMultiplier; // 0x628
	float m_socialActorTraceDistance; // 0x62c
	float m_pingableActorMaxAngle; // 0x630
	int32_t m_commWheelMaxEvents; // 0x634
	float m_commWheelRecuceEventCountSpamDuration; // 0x638
	FSlateColor m_teamMateNotificationDiedColor; // 0x640
	FSlateColor m_teamMateNotificationLeftColor; // 0x668
	FSlateColor m_teamMateNotificationCancelledColor; // 0x690
	FSlateColor m_pickupItemNotificationColor; // 0x6b8
	FSlateColor m_gearStorePurchaseNotificationColor; // 0x6e0
	float m_damageNumberLocationZOffset; // 0x708
	FYPlayerUIHealthBarDeltaSettings m_uiHealthBarAdjustmentDeltaSettings; // 0x70c
	AYPlacementActor* m_placementActorVisualization; // 0x740
	TArray<FYWeaponFireDelayStateData> m_fireDelaysAfterStateTransitions; // 0x748
	float m_damageOverTimeAccumulativeMultiplier; // 0x758
	UPhysicsAsset* m_thirdPersonBasePhysicsAsset; // 0x760
	UObject* m_thirdPersonAnimationClass; // 0x768
	UObject* m_stationAnimationClass; // 0x770
	UObject* m_alternativeAnimationClass; // 0x778
	UPhysicsAsset* m_firstPersonBasePhysicsAsset; // 0x780
	USkeleton* m_baseSkeletonToUse; // 0x788
	UObject* m_firstPersonAnimationClass; // 0x790
	float m_cameraCustomizationRotatingAngleRotatingSpeed; // 0x798
	float m_cameraCustomizationRotationMomentumSlowdown; // 0x79c
	float m_cameraCustomizationAutoRotationSpeed; // 0x7a0
	int32_t m_maxDamageEventsToStore; // 0x7a4
	int32_t m_timeToLookBackForDamageEvents; // 0x7a8
	int32_t m_maxNumEventsToUseForDamageRecap; // 0x7ac
	int32_t m_maxNumCondensedEventsToShow; // 0x7b0
	int32_t m_maxNumDetailsEntriesToShow; // 0x7b4
	float m_maxHealthPercentWipeData; // 0x7b8
	FText m_damageRecapDoTSuffix; // 0x7c0
	int32_t m_timeToLookBackForDamageEventsDebug; // 0x7d8
	int32_t m_maxNumEventsToUseForDamageRecapDebug; // 0x7dc
	float m_findFloorWhileInAirTraceOffsetZEnd; // 0x7e0
	float m_findFloorForPreferredDropLocationOffsetZStart; // 0x7e4
	float m_findFloorForPreferredDropLocationOffsetZEnd; // 0x7e8
	float m_findFloorForDropsOffsetZStart; // 0x7ec
	float m_findFloorForDropsOffsetZEnd; // 0x7f0
	float m_offsetZNavMeshProjectedReachableCheck; // 0x7f4
	float m_vehicleMoveToThirdPersonPerspectiveTime; // 0x7f8
	float m_vehicleMoveBackToFirstPersonTime; // 0x7fc
	float m_vehicleLeavingTime; // 0x800
	float m_vehicleBoostFOV; // 0x804
	float m_vehicleMovingFOV; // 0x808
	float m_vehicleSpeedFOV; // 0x80c
	float m_vehicleIdleFOV; // 0x810
	float m_vehicleHeightAlignmentRollAngleMax; // 0x814
	float m_vehicleHeightAlignmentPitchAngleMax; // 0x818
	float m_vehicleInterpRotationSpeed; // 0x81c
	float m_boostDuration; // 0x820
	float m_boostCooldown; // 0x824
	float m_vehicleMaxPitch; // 0x828
	FDataTableRowHandle m_boostLackingCooldownSound; // 0x830
	TSoftClassPtr<UObject> m_defaultVehicleAsset; // 0x840
	FRotator m_vehicleCustomizationRotation; // 0x868
	float m_vehicleStopMovementAtPossession; // 0x874
	float m_lootMovementSpeedStart; // 0x878
	float m_lootMovementSpeedIncreasePerSecond; // 0x87c
	float m_lootDistanceCollectDistance; // 0x880
	float m_maxDistanceLootingContainerBeforeCancel; // 0x884
	bool m_blockPlayerMovementInputWhileLootingContainer; // 0x888
	bool m_blockPlayerLookInputWhileLootingContainer; // 0x889
	float m_durationInBannerState; // 0x88c
	float m_timeToSpawnBanner; // 0x890
	AYBannerActor* m_bannerPlacementActor; // 0x898
	AYVehicle* m_vehiclePlacementActor; // 0x8a0
	FVector m_bannerPlacementOffsetLocalSpace; // 0x8a8
	float m_bannerTransitionBackTime; // 0x8b4
	float m_bannerTransitionBackDuration; // 0x8b8
	float m_bannerSpawnCooldownTimer; // 0x8bc
	AYMeleeActor* m_meleePlacementActor; // 0x8c0
	AYSprayActor* m_sprayPlacementActor; // 0x8c8
	float m_sprayDistance; // 0x8d0
	int32_t m_amountOfSpraysToPlace; // 0x8d4
	float m_emoteTransitionBackToFirstPersonDuration; // 0x8d8
	FName m_meshSocketAttachBanner; // 0x8dc
	UCurveFloat* m_recoilCompensationEaseIn; // 0x8e8
	FLinearColor m_defaultControllerKeyboardLighting; // 0x8f0
	int32_t m_numRandomizedMissions; // 0x900
	int32_t m_numMissionShowedUpAsTracked; // 0x904
	FName m_firstPersonWeaponAttachmentName; // 0x908
	FName m_thirdPersonWeaponAttachmentName; // 0x910
	FName m_thirdPersonCosmeticSocketAttachNameDefault; // 0x918
	FName m_thirdPersonCosmeticSecondaryWeaponDefault; // 0x920
	FName m_firstPersonCarryingItemAttachmentName; // 0x928
	FName m_thirdPersonCarryingItemAttachmentName; // 0x930
	float m_spawnOffsetMagnitude; // 0x938
	FVector m_heightOffsetSpawn; // 0x93c
	float m_fadeInDurationAtSpawn; // 0x948
	TArray<FYPlayerStartScoreRule> m_playerStartScoreRules; // 0x950
	float m_seamlessTravelTimeout; // 0x960
	float m_transitionToMapCosmeticFadeTime; // 0x964
	float m_timeoutStationSingleplayerNoConnect; // 0x968
	float m_timeoutServerNoConnection; // 0x96c
	FString m_defaultSeamlessMatchMap; // 0x970
	FString m_defaultStationMap; // 0x980
	FString m_defaultOutpostMap; // 0x990
	FString m_defaultTutorialMap; // 0x9a0
	FString m_tutorialIdentifier; // 0x9b0
	TArray<FString> m_tutorialAdditionalURLOptions; // 0x9c0
	FDataTableRowHandle m_quickMatchInfoHandle; // 0x9d0
	FDataTableRowHandle m_missionSelectionSceneHandle; // 0x9e0
	FDataTableRowHandle m_inboxSelectionSceneHandle; // 0x9f0
	FViewTargetTransitionParams m_stationViewTargetParameter; // 0xa00
	FViewTargetTransitionParams m_stationQuickMathInfoViewParameter; // 0xa10
	float m_minImpulseZ; // 0xa20
	float m_defaultAbilityPlacementVisualizationTraceDistance; // 0xa24
	float m_abilityStateDuration; // 0xa28
	TArray<EYPlayerStateBlueprint> m_statesAllowedInStation; // 0xa30
	UYWidget* m_transitionClass; // 0xa40
	int32_t m_consumableSlotAmount; // 0xa48
	TMap<EYContractObjectiveType, FText> m_defaultContractObjectiveTexts; // 0xa50
};

struct FRigUnit_Control : FRigUnit {
	FEulerTransform Transform; // 0x8
	FTransform Base; // 0x30
	FTransform InitTransform; // 0x60
	FTransform Result; // 0x90
	FTransformFilter Filter; // 0xc0
};

struct FPlayFabError {
	bool HasError; // 0x0
	int32_t ErrorCode; // 0x4
	FString ErrorName; // 0x8
	FString ErrorMessage; // 0x18
	FString ErrorDetails; // 0x28
};

struct FAdminDeleteStoreRequest : FPlayFabRequestCommon {
	FString CatalogVersion; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	FString StoreId; // 0x20
};

struct FClientUpdateCharacterDataRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
	UPlayFabJsonObject* Data; // 0x20
	FString KeysToRemove; // 0x28
	EUserDataPermission Permission; // 0x38
};

struct FYActiveContractsInfoUpdated {
	FString UserId; // 0x0
	TArray<FYActiveContractPlayerData> activeContracts; // 0x10
};

struct FPerPlatformFloat {
	float Default; // 0x0
};

struct FMultiplayerListServerBackfillTicketsForPlayerRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
	FString QueueName; // 0x18
};

struct FHorizonTweenEventSceneComponentRotatorFromToParameters : FHorizonTweenEventRotatorParameters {
	TWeakObjectPtr<USceneComponent> TweenTargetWeakPtr; // 0x150
	bool bShortestPath; // 0x158
};

struct FMovieSceneSlomoSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneFloatChannel SlomoCurve; // 0x20
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

struct FMovieSceneGeometryCollectionSectionTemplate : FMovieSceneEvalTemplate {
	FMovieSceneGeometryCollectionSectionTemplateParameters Params; // 0x20
};

struct FTestBIDataStruct {
	uint16_t UInt16Field; // 0x0
	int64_t Int64Field; // 0x8
	int8_t Int8Field; // 0x10
};

struct FYServerPerformanceTuningRow : FYDataTableRowBase {
	int32_t m_maxServerTickRate; // 0x10
	int32_t m_playerUpdateFrequency; // 0x14
	float m_serverGCInterval; // 0x18
	float m_serverGCBudget; // 0x1c
	float m_clientGCInterval; // 0x20
	float m_clientGCBudget; // 0x24
	float m_streamingTimeout; // 0x28
	float m_streamingExtraLoadingTime; // 0x2c
	float m_priorityLevelStreamingActorsTimeDroppod; // 0x30
	TMap<FName, FYPreloadEntry> m_nameToPreloadClass; // 0x38
};

struct FAbility_Action_AudioDecoy {
	FDataTableRowHandle DecoyAudio_2_FABA0C5543E0FA95F7E37BA2306A398E; // 0x0
	float Duration_5_8E352E014F8A0DC8A08A19B47534F3B3; // 0x10
	float FadeOutDuration_7_D0758DD34263AD91F9AE839FCA0EFFED; // 0x14
};

struct FMovieScene3DTransformKeyStruct : FMovieSceneKeyStruct {
	FVector Location; // 0x8
	FRotator Rotation; // 0x14
	FVector Scale; // 0x20
	FFrameNumber Time; // 0x2c
};

struct FAnimNode_Root : FAnimNode_Base {
	FPoseLink Result; // 0x10
	FName Name; // 0x20
	FName Group; // 0x28
};

struct FClientUnlinkNintendoServiceAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FFastArraySerializerItem {
	int32_t ReplicationID; // 0x0
	int32_t ReplicationKey; // 0x4
	int32_t MostRecentArrayReplicationKey; // 0x8
};

struct FYAttributeTriggerData {
	EYGameplayAttribute m_attribute; // 0x0
	EYPerkBool m_bool; // 0x1
	float m_value; // 0x4
};

struct FARTraceResult {
	float DistanceFromCamera; // 0x0
	EARLineTraceChannels TraceChannel; // 0x4
	FTransform LocalTransform; // 0x10
	UARTrackedGeometry* TrackedGeometry; // 0x40
};

struct FYDebugActivateContractResult {
	FString UserId; // 0x0
	FString Error; // 0x10
	TArray<FYCurrencyItem> changedCurrencies; // 0x20
	FYActiveContractPlayerData activatedContract; // 0x30
	EYActivateContractRequestStatus Status; // 0x50
};

struct FClientUnlinkGoogleAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FYStatCombinationPair {
	FDataTableRowHandle m_statRowHandle; // 0x0
	EYMatchmakeGameModeType m_gameMode; // 0x10
	EYActivityType m_activityType; // 0x11
	EYStatOperator m_statOperator; // 0x12
};

struct FMovieSceneIntegerPropertySectionTemplate : FMovieScenePropertySectionTemplate {
	FMovieSceneIntegerChannel IntegerCurve; // 0x38
	EMovieSceneBlendType BlendType; // 0xc8
};

struct FYRequestUserUnlockedTechTreeNodes {
	FString UserId; // 0x0
};

struct FClientGetPlayerProfileRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString PlayFabId; // 0x10
	UPlayFabJsonObject* ProfileConstraints; // 0x20
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

struct FVariantDependency {
	TSoftObjectPtr<UVariantSet> VariantSet; // 0x0
	TSoftObjectPtr<UVariant> Variant; // 0x28
	bool bEnabled; // 0x50
};

struct FYWeaponTransportHitscanData {
	float m_maxTraceDistance; // 0x0
	bool m_traceGroundWhenMaxDistanceHit; // 0x4
	bool m_traceGround; // 0x5
	bool m_traceComplexCollision; // 0x6
	EYTraceShapeType m_traceType; // 0x7
	float m_capsuleRadius; // 0x8
	float m_capsuleHalfHeight; // 0xc
	float m_collisionShapeMultiplierForGroundTrace; // 0x10
};

struct FYGetQueueStatisticsResult {
	int32_t m_usersSearching; // 0x0
	float m_averageSearchTime; // 0x4
};

struct FRigUnit_MathBoolConstant : FRigUnit_MathBoolBase {
	bool Value; // 0x8
};

struct FYTopMenuBarButtonEntry {
	FText m_buttonName; // 0x0
	UYScreenCommand* m_commandBP; // 0x18
	bool m_isLandingScreen; // 0x20
	bool m_isShopScreen; // 0x21
	bool m_includeInShippingBuild; // 0x22
	float m_timerDuration; // 0x24
};

struct FClientUnlinkAndroidDeviceIDRequest : FPlayFabRequestCommon {
	FString AndroidDeviceId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FYAITuningRow : FTableRowBase {
	TMap<EYAIState, float> m_movementSpeedPerState; // 0x8
	float m_characterMovementSpeed; // 0x58
	float m_resetRadius; // 0x5c
	TArray<FYAIMeleeAttackDefinition> m_meleeAttacks; // 0x60
	float m_meleeAttackBlockTimeOnTargetGlobal; // 0x70
	float m_meleeStrafeMoveDistance; // 0x74
	float m_meleeBackOffDistance; // 0x78
	float m_weakAreaDamageMultiplier; // 0x7c
	float m_stabilityDamageRagdollThresholds; // 0x80
	TArray<FYAIRangedAttackDefinition> m_rangedAttacks; // 0x88
	TArray<FYAIRangedAttackMontageDefinition> m_rangedAttackMontages; // 0x98
	FYAIDodgeDefinition m_dodgeMove; // 0xa8
	TArray<FYAIStabilityDefinition> m_stabilityLevels; // 0xb8
	FDataTableRowHandle m_eqsPreferredRange; // 0xc8
	EYEnemyType m_type; // 0xd8
	FText m_characterAIName; // 0xe0
	FYAITuningBuffAlliesTuning m_buffAllyTuning; // 0xf8
	FYAITuningCallReinforcementsRow m_callReinforcementTuning; // 0x130
	FYAITuningSnipedReactionTuning m_snipedTuning; // 0x168
	TArray<FDataTableRowHandle> m_defaultPerks; // 0x190
	FGameplayTagContainer m_defaultGameplayTags; // 0x1a0
	int32_t m_xpAmountOnKill; // 0x1c0
	FName m_navMeshToUse; // 0x1c4
	FYAISpawnArchetypeData m_spawnArchetypeData; // 0x1cc
	FDataTableRowHandle m_senseTuningRow; // 0x1d0
	FDataTableRowHandle m_lootRow; // 0x1e0
	FDataTableRowHandle m_lootRowStorm; // 0x1f0
	int32_t m_defaultArmor; // 0x200
	TArray<FDataTableRowHandle> m_armorRows; // 0x208
};

struct FYDebugRevokeEntitlement {
	FString entitlementName; // 0x0
};

struct FAdminGetPlayedTitleListRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
};

struct FClientGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
};

struct FRigUnit_MathFloatUnaryOp : FRigUnit_MathFloatBase {
	float Value; // 0x8
	float Result; // 0xc
};

struct FRigUnit_PointSimulation_DebugSettings {
	bool bEnabled; // 0x0
	float Scale; // 0x4
	float CollisionScale; // 0x8
	bool bDrawPointsAsSpheres; // 0xc
	FLinearColor Color; // 0x10
	FTransform WorldOffset; // 0x20
};

struct FRigUnit_MathRBFInterpolateQuatQuat : FRigUnit_MathRBFInterpolateQuatBase {
	TArray<FMathRBFInterpolateQuatQuat_Target> Targets; // 0xd0
	FQuat Output; // 0xe0
};

struct FYVOLine {
	FText m_subtitle; // 0x0
	TSoftObjectPtr<USoundWave> m_sound; // 0x18
	TSoftObjectPtr<USoundCue> m_soundCue; // 0x40
};

struct FServerGetAllSegmentsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> Segments; // 0x8
};

struct FAnimNode_CopyBone : FAnimNode_SkeletalControlBase {
	FBoneReference SourceBone; // 0xc8
	FBoneReference TargetBone; // 0xd8
	bool bCopyTranslation; // 0xe8
	bool bCopyRotation; // 0xe9
	bool bCopyScale; // 0xea
	EBoneControlSpace ControlSpace; // 0xeb
};

struct FRigUnit_DeltaFromPreviousQuat : FRigUnit_SimBase {
	FQuat Value; // 0x10
	FQuat Delta; // 0x20
	FQuat PreviousValue; // 0x30
	FQuat Cache; // 0x40
};

struct FYPlayerDataSet {
	int32_t m_permutationIndex; // 0x0
	FString m_id; // 0x8
	TArray<FYPlayerItemEntry> m_setItems; // 0x18
};

struct FYModRow : FYBaseModRow {
	FText m_modName; // 0x370
	TArray<FDataTableRowHandle> m_scopeTuningRow; // 0x388
	TArray<EYDeviceCategory> m_compatibleDeviceCategories; // 0x398
	TArray<EYAmmoType> m_compatibleAmmoCategories; // 0x3a8
	bool m_compatibleAll; // 0x3b8
	FGameplayTagContainer m_compatibleModSlots; // 0x3c0
	FDataTableRowHandle m_fxCategoryHandle; // 0x3e0
	bool m_isFlashlight; // 0x3f0
	FDataTableRowHandle m_overridenBaseHandle; // 0x3f8
	FDataTableRowHandle m_transportHandle; // 0x408
	UCurveFloat* m_overridenRecoilCurve; // 0x418
	FYFullscreenCrosshairData m_crosshairData; // 0x420
	FName m_socketLocation; // 0x450
	TArray<FDataTableRowHandle> m_scannableRowHandles; // 0x458
};

struct FYWeaponTransportSphereData {
	float m_radius; // 0x0
	bool m_skipTraceToVerifyHit; // 0x4
	float m_minDot2DThreshold; // 0x8
	bool m_verifyLineOfSight; // 0xc
};

struct FYGameplayAttributeModifier : FYDataTableRowBase {
	EYGameplayAttribute m_attribute; // 0x10
	EYGPAModifierType m_modifierType; // 0x11
	float m_modifierValue; // 0x14
	float m_minAttributeValue; // 0x18
	float m_duration; // 0x1c
	float m_lerpTime; // 0x20
	float m_timestampActivated; // 0x24
	float m_lerpStartModifierValue; // 0x28
	float m_lerpEndModifierValue; // 0x2c
	float m_runtimeAttributeValue; // 0x30
	FString m_context; // 0x38
	APawn* m_instigator; // 0x48
	EYGameplayContextType m_overridenContextType; // 0x50
	EYGameplayContextType m_specifiedContextType; // 0x51
};

struct FPointDamageEvent : FDamageEvent {
	float Damage; // 0x10
	FVector_NetQuantizeNormal ShotDirection; // 0x14
	FHitResult HitInfo; // 0x20
};

struct FPowerIKBoneBendDirection {
	FName BoneName; // 0x0
	FVector BendDirection; // 0x8
};

struct FYTechTreeNodeUpgradeLevelRow : FTableRowBase {
	int32_t m_perkAmount; // 0x8
	TArray<FYTechTreeCostEntryRow> m_upgradeCosts; // 0x10
	int32_t m_upgradeTimeMinutes; // 0x20
	TArray<FYTechTreeCostEntryRow> m_initialRushCosts; // 0x28
};

struct FClientGetPlayerTradesRequest : FPlayFabRequestCommon {
	ETradeStatus StatusFilter; // 0x8
};

struct FYAIStaggerDefinition {
	float m_cooldown; // 0x0
	TArray<FYAIStaggerAnimations> m_animationOptions; // 0x8
};

struct FYReplayMarker {
	FString m_nameID; // 0x0
	int32_t m_timeInSeconds; // 0x10
	FVector m_cameraLocation; // 0x14
	FRotator m_cameraRotation; // 0x20
};

struct FRigUnit_GetTransform : FRigUnit {
	FRigElementKey Item; // 0x8
	EBoneGetterSetterMode Space; // 0x14
	bool bInitial; // 0x15
	FTransform Transform; // 0x20
	FCachedRigElement CachedIndex; // 0x50
};

struct FYPlayerFactionLevelUpData {
	TArray<FYUnlockedShopItem> unlockedShopItems; // 0x0
	TArray<FDataTableRowHandle> unlockedContracts; // 0x10
	EYFaction factionId; // 0x20
	int32_t newLevel; // 0x24
};

struct FMovieSceneIntegerChannel : FMovieSceneChannel {
	TArray<FFrameNumber> Times; // 0x8
	int32_t DefaultValue; // 0x18
	bool bHasDefaultValue; // 0x1c
	TArray<int32_t> Values; // 0x20
};

struct FRigUnit_ModifyTransforms : FRigUnit_HighlevelBaseMutable {
	TArray<FRigUnit_ModifyTransforms_PerItem> ItemToModify; // 0x68
	float weight; // 0x78
	float WeightMinimum; // 0x7c
	float WeightMaximum; // 0x80
	EControlRigModifyBoneMode Mode; // 0x84
	FRigUnit_ModifyTransforms_WorkData WorkData; // 0x88
};

struct FRigUnit_SetControlOffset : FRigUnitMutable {
	FName Control; // 0x68
	FTransform Offset; // 0x70
	EBoneGetterSetterMode Space; // 0xa0
	FCachedRigElement CachedControlIndex; // 0xa4
};

struct FPooledCameraShakes {
	TArray<UCameraShakeBase*> PooledShakes; // 0x0
};

struct FMovieSceneSequenceLoopCount {
	int32_t Value; // 0x0
};

struct FAdminLookupUserAccountInfoResult : FPlayFabResultCommon {
	UPlayFabJsonObject* UserInfo; // 0x8
};

struct FAdminIncrementPlayerStatisticVersionResult : FPlayFabResultCommon {
	UPlayFabJsonObject* StatisticVersion; // 0x8
};

struct FBoneChainLink {
	FBoneReference Bone; // 0x0
	float weight; // 0x10
};

struct FYChallengeProgressedEvent : FYBaseAnalyticsEvent {
	FName quest_id; // 0xa8
	int32_t quest_category; // 0xb0
	int32_t progress_count; // 0xb4
	int32_t max_progress; // 0xb8
};

struct FBoneReference {
	FName BoneName; // 0x0
};

struct FYAbilityActionCloakData : FYAbilityActionDataTableRow {
	FDataTableRowHandle m_cloakData; // 0x78
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

struct FAssetEditorOrbitCameraPosition {
	bool bIsSet; // 0x0
	FVector CamOrbitPoint; // 0x4
	FVector CamOrbitZoom; // 0x10
	FRotator CamOrbitRotation; // 0x1c
};

struct FClothCollisionPrim_Sphere {
	int32_t BoneIndex; // 0x0
	float Radius; // 0x4
	FVector LocalPosition; // 0x8
};

struct FAdminGetServerBuildUploadURLResult : FPlayFabResultCommon {
	FString URL; // 0x8
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

struct FYCondensedDamageData {
	FYDamageCauserInfo m_damageCauserInfo; // 0x0
	TArray<FYDamageInfoDetail> m_details; // 0x20
};

struct FYPopupWidgetRow : FYDataTableRowBase {
	TSoftClassPtr<UObject> m_associatedWidgetBP; // 0x10
	FString m_startDateTime; // 0x38
	FString m_endDateTime; // 0x48
};

struct FProfilesGetTitlePlayersFromMasterPlayerAccountIdsResponse : FPlayFabResultCommon {
	FString TitleId; // 0x8
	UPlayFabJsonObject* TitlePlayerAccounts; // 0x18
};

struct FRigUnit_SetControlColor : FRigUnitMutable {
	FName Control; // 0x68
	FLinearColor Color; // 0x70
	FCachedRigElement CachedControlIndex; // 0x80
};

struct FStaticParameterSet {
	TArray<FStaticSwitchParameter> StaticSwitchParameters; // 0x0
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameters; // 0x10
	TArray<FStaticTerrainLayerWeightParameter> TerrainLayerWeightParameters; // 0x20
	TArray<FStaticMaterialLayersParameter> MaterialLayersParameters; // 0x30
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

struct FYDebugMatchmakingSetUserNVRRequest {
	int32_t nvr; // 0x0
};

struct FYShopOffer {
	FString shopOfferRowId; // 0x0
	EYPurchaseOfferState purchaseState; // 0x10
};

struct FYSetMissionsCompleted {
	FString UserId; // 0x0
	TArray<FYMissionUpdateDataEntry> entries; // 0x10
};

struct FYHitflashData {
	TArray<UMeshComponent*> m_hitflashComponents; // 0x0
	FName m_scalarParameter; // 0x10
	FName m_scalarParameterWeakspot; // 0x18
	UCurveFloat* m_hitflashCurve; // 0x20
	bool m_haveHitflashEnabled; // 0x28
	bool m_haveHitflashEnabledForAllDamage; // 0x29
};

struct FYShopBlueprintData {
	FDataTableRowHandle m_bpShopRowHandle; // 0x0
	EYItemRarityType m_itemRarity; // 0x10
	int32_t m_factionLevelRequirement; // 0x14
	FString m_shopItemBelongsTo; // 0x18
	int32_t m_requiredFactionLevel; // 0x28
};

struct FHeightmapData {
	UTexture2D* Texture; // 0x0
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

struct FYRequestMissionUpdate {
	FString UserId; // 0x0
	FString currentMissionID; // 0x10
	FString currentStepName; // 0x20
	int32_t progress; // 0x30
};

struct FClientRemoveGenericIDRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* GenericId; // 0x8
};

struct FServerNotifyMatchmakerPlayerLeftResult : FPlayFabResultCommon {
	EPlayerConnectionState PlayerState; // 0x8
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

struct FYGetPlayerSkillsResult {
	bool succeeded; // 0x0
	TArray<FYPlayerSkillData> Data; // 0x8
};

struct FClientUnlinkCustomIDRequest : FPlayFabRequestCommon {
	FString CustomId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FYPlayerMutelistEntry {
	FString m_mutedPlayerId; // 0x0
	bool m_chatMuted; // 0x10
	bool m_voicechatMuted; // 0x11
};

struct FAdminGetMatchmakerGameModesResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> GameModes; // 0x8
};

struct FRigUnit_KalmanFloat : FRigUnit_SimBase {
	float Value; // 0x8
	int32_t BufferSize; // 0xc
	float Result; // 0x10
	TArray<float> Buffer; // 0x18
	int32_t LastInsertIndex; // 0x28
};

struct FYReplicatedMovementData {
	float m_serverDistance; // 0x0
	float m_serverSpeed; // 0x4
	float m_predictedServerSpeed; // 0x8
};

struct FYHeatMapReplicatedData {
	FVector m_gridLocation; // 0x0
	char m_score; // 0xc
	char m_type; // 0xd
};

struct FYRequestPlayerQuarterUpgradePurchaseResult {
	FString Error; // 0x0
	FString UserId; // 0x10
	int32_t newLevel; // 0x20
	FYTimestamp upgradeStartedTime; // 0x28
	TArray<FYCustomItemInfo> changedItems; // 0x30
	TArray<FString> deletedItems; // 0x40
	TArray<FYCurrencyItem> changedCurrencies; // 0x50
};

struct FYWeaponAudioDataTableRow : FYDataTableRowBase {
	TSoftObjectPtr<USoundBase> m_startSpinUpSound; // 0x10
	float m_spinUpSoundFadeOut; // 0x38
	TSoftObjectPtr<USoundBase> m_startFiringSound; // 0x40
	float m_firingSoundFadeOut; // 0x68
	TSoftObjectPtr<USoundBase> m_weaponFiredSound; // 0x70
	TSoftObjectPtr<USoundBase> m_weaponTailSound; // 0x98
	TSoftObjectPtr<USoundBase> m_weaponSilencedFiredSound; // 0xc0
	TSoftObjectPtr<USoundBase> m_weaponSilencedTailSound; // 0xe8
	TSoftObjectPtr<USoundBase> m_stopFiringSound; // 0x110
	float m_stopFiringDelay; // 0x138
	TSoftObjectPtr<USoundBase> m_burstCompleteSound; // 0x140
	TSoftObjectPtr<USoundBase> m_equipWeaponSound; // 0x168
	TSoftObjectPtr<USoundBase> m_unequipWeaponSound; // 0x190
	TSoftObjectPtr<USoundBase> m_outOfAmmoInClipSound; // 0x1b8
	TSoftObjectPtr<USoundBase> m_outOfAmmoSound; // 0x1e0
	TSoftObjectPtr<USoundBase> m_targetingCompleteSound; // 0x208
	TArray<TSoftObjectPtr<USoundBase>> m_reloadSounds; // 0x230
	bool m_runAutomationTest; // 0x240
};

struct FYSceneRuntimeInitializationData {
	FDataTableRowHandle m_rowHandle; // 0x0
	FYSceneSetupData m_setupData; // 0x10
	FViewTargetTransitionParams m_viewTargetParameters; // 0x28
	bool m_requireTransitionOverlay; // 0x38
	FTransform m_baseDetailTransformData; // 0x40
	bool m_doCameraTransition; // 0x70
	EYSceneState m_startingSceneState; // 0x71
	FString m_contextActivationString; // 0x78
};

struct FYItemRecipeIngredient {
	FDataTableRowHandle m_currency; // 0x0
	int32_t m_amount; // 0x10
};

struct FScaleTrack {
	TArray<FVector> ScaleKeys; // 0x0
	TArray<float> Times; // 0x10
};

struct FCRSimPointForce {
	ECRSimPointForceType ForceType; // 0x0
	FVector Vector; // 0x4
	float Coefficient; // 0x10
	bool bNormalize; // 0x14
};

struct FServerUpdateUserDataResult : FPlayFabResultCommon {
	int32_t DataVersion; // 0x8
};

struct FTTTrackId {
	int32_t TrackType; // 0x0
	int32_t TrackIndex; // 0x4
};

struct FYAnnouncementPlaybackOptions {
	EYAnnouncementType m_announcementType; // 0x0
	FVector m_locationInWorld; // 0x4
	AYPlayerState* m_speakerPlayerState; // 0x10
	bool m_isSpokenViaRadio; // 0x18
	bool m_useSoundAttenuation; // 0x19
	bool m_resolveVORowByContext; // 0x1a
	bool m_shouldHideAnnouncementWidget; // 0x1b
	FDataTableRowHandle m_contextRowHandle; // 0x20
};

struct FYLootCountRow : FYDataTableRowBase {
	TArray<FYLootCountData> m_lootRolls; // 0x10
};

struct FRawDistributionVector : FRawDistribution {
	float MinValue; // 0x20
	float MaxValue; // 0x24
	FVector MinValueVec; // 0x28
	FVector MaxValueVec; // 0x34
	UDistributionVector* Distribution; // 0x40
};

struct FFrameMetrics {
	float TotalElapsedTime; // 0x0
	float FrameDelta; // 0x4
	int32_t FrameNumber; // 0x8
	int32_t NumDroppedFrames; // 0xc
};

struct FRigUnit_MathIntBinaryOp : FRigUnit_MathIntBase {
	int32_t A; // 0x8
	int32_t B; // 0xc
	int32_t Result; // 0x10
};

struct FRigUnit_DebugBezier : FRigUnit_DebugBaseMutable {
	FCRFourPointBezier Bezier; // 0x68
	float MinimumU; // 0x98
	float MaximumU; // 0x9c
	FLinearColor Color; // 0xa0
	float Thickness; // 0xb0
	int32_t Detail; // 0xb4
	FName Space; // 0xb8
	FTransform WorldOffset; // 0xc0
	bool bEnabled; // 0xf0
};

struct FClientAddFriendResult : FPlayFabResultCommon {
	bool Created; // 0x8
};

struct FAdminGetUserDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
	int32_t DataVersion; // 0x10
	FString PlayFabId; // 0x18
};

struct FServerRevokeInventoryItemsRequest : FPlayFabRequestCommon {
	TArray<UPlayFabJsonObject*> Items; // 0x8
};

struct FAnimNode_ObserveBone : FAnimNode_SkeletalControlBase {
	FBoneReference BoneToObserve; // 0xc8
	EBoneControlSpace DisplaySpace; // 0xd8
	bool bRelativeToRefPose; // 0xd9
	FVector Translation; // 0xdc
	FRotator Rotation; // 0xe8
	FVector Scale; // 0xf4
};

struct FYSprayVanityItemRowBase : FYVanityItemRowBase {
	TSoftObjectPtr<USoundBase> m_sound; // 0x378
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

struct FSubmixEffectDynamicProcessorFilterSettings {
	char bEnabled : 1; // 0x0
	float Cutoff; // 0x4
	float GainDb; // 0x8
};

struct FRigUnit_SetSpaceTransform : FRigUnitMutable {
	FName Space; // 0x68
	float weight; // 0x70
	FTransform Transform; // 0x80
	EBoneGetterSetterMode SpaceType; // 0xb0
	FCachedRigElement CachedSpaceIndex; // 0xb4
};

struct FSoundTrackKey {
	float Time; // 0x0
	float Volume; // 0x4
	float Pitch; // 0x8
	USoundBase* Sound; // 0x10
};

struct FYPlayersRankedSeasonData {
	TArray<FYPlayerRankedSeasonGamemodeData> playersRankedSeasonArray; // 0x0
};

struct FAdminAddNewsResult : FPlayFabResultCommon {
	FString NewsId; // 0x8
};

struct FClothParameterMask_Legacy {
	FName MaskName; // 0x0
	EWeightMapTargetCommon CurrentTarget; // 0x8
	float MaxValue; // 0xc
	float MinValue; // 0x10
	TArray<float> Values; // 0x18
	bool bEnabled; // 0x28
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

struct FYInventoryInfoUserEntry {
	int32_t inventoryStashLimit; // 0x0
	int32_t inventoryBagLimit; // 0x4
};

struct FMovieSceneSectionEvalOptions {
	bool bCanEditCompletionMode; // 0x0
	EMovieSceneCompletionMode CompletionMode; // 0x1
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

struct FGroupsCreateGroupRoleResponse : FPlayFabResultCommon {
	int32_t ProfileVersion; // 0x8
	FString RoleId; // 0x10
	FString RoleName; // 0x20
};

struct FMultiplayerListMultiplayerServersResponse : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> MultiplayerServerSummaries; // 0x8
	int32_t PageSize; // 0x18
	FString SkipToken; // 0x20
};

struct FMovieSceneObjectPathChannel : FMovieSceneChannel {
	UObject* PropertyClass; // 0x8
	TArray<FFrameNumber> Times; // 0x10
	TArray<FMovieSceneObjectPathChannelKeyValue> Values; // 0x20
	FMovieSceneObjectPathChannelKeyValue DefaultValue; // 0x30
};

struct FNiagaraPlatformSetConflictInfo {
	int32_t SetAIndex; // 0x0
	int32_t SetBIndex; // 0x4
	TArray<FNiagaraPlatformSetConflictEntry> Conflicts; // 0x8
};

struct FPerBoneBlendWeight {
	int32_t SourceIndex; // 0x0
	float BlendWeight; // 0x4
};

struct FGroupsListMembershipRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Entity; // 0x10
};

struct FAnimNode_ControlRigBase : FAnimNode_CustomProperty {
	FPoseLink Source; // 0x58
	TMap<FName, uint16_t> ControlRigBoneMapping; // 0x68
	TMap<FName, uint16_t> ControlRigCurveMapping; // 0xb8
	TMap<FName, uint16_t> InputToCurveMappingUIDs; // 0x108
	TWeakObjectPtr<UNodeMappingContainer> NodeMappingContainer; // 0x158
	FControlRigIOSettings InputSettings; // 0x160
	FControlRigIOSettings OutputSettings; // 0x162
	bool bExecute; // 0x164
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

struct FSynth2DSliderStyle : FSlateWidgetStyle {
	FSlateBrush NormalThumbImage; // 0x8
	FSlateBrush DisabledThumbImage; // 0x90
	FSlateBrush NormalBarImage; // 0x118
	FSlateBrush DisabledBarImage; // 0x1a0
	FSlateBrush BackgroundImage; // 0x228
	float BarThickness; // 0x2b0
};

struct FRigVMInstructionArray {
	TArray<FRigVMInstruction> Instructions; // 0x0
};

struct FYPlayerLeaningData {
	float m_leanAngleFirstPerson; // 0x0
	float m_leanAngleThirdPerson; // 0x4
	float m_leaningTranslationFirstPerson; // 0x8
	float m_leaningTranslationThirdPerson; // 0xc
	float m_leaningMaxAngleFirstPerson; // 0x10
	float m_leaningMaxAngleThirdPerson; // 0x14
	bool m_isLeaning; // 0x18
};

struct FMaterialCachedParameterEntry {
	TArray<uint64_t> NameHashes; // 0x0
	TArray<FMaterialParameterInfo> ParameterInfos; // 0x10
	TArray<FGuid> ExpressionGuids; // 0x20
	TArray<bool> Overrides; // 0x30
};

struct FCachedRigElement {
	FRigElementKey Key; // 0x0
	uint16_t Index; // 0xc
	int32_t ContainerVersion; // 0x10
};

struct FYAnnouncementPlayEntryData {
	FDataTableRowHandle m_rowHandle; // 0x0
	float m_timestampAnnounceRequested; // 0x10
	FYAnnouncementPlaybackOptions m_playbackOptions; // 0x18
};

struct FYSkipItemCraftingRequest {
	FString UserId; // 0x0
	FString blueprintName; // 0x10
	int32_t blueprintRarity; // 0x20
	int32_t purchaseAmount; // 0x24
};

struct FRigUnit_SetMultiControlVector2D : FRigUnitMutable {
	TArray<FRigUnit_SetMultiControlVector2D_Entry> entries; // 0x68
	float weight; // 0x78
	TArray<FCachedRigElement> CachedControlIndices; // 0x80
};

struct FDestructibleAdvancedParameters {
	float DamageCap; // 0x0
	float ImpactVelocityThreshold; // 0x4
	float MaxChunkSpeed; // 0x8
	float FractureImpulseScale; // 0xc
};

struct FAdminGetPlayerStatisticVersionsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> StatisticVersions; // 0x8
};

struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase {
	FVector Axis; // 0x8
	float Angle; // 0x14
	FQuat Result; // 0x20
};

struct FKSphylElem : FKShapeElem {
	FVector Center; // 0x30
	FRotator Rotation; // 0x3c
	float Radius; // 0x48
	float Length; // 0x4c
};

struct FSTR_AimAssistWPNPresetDesc {
	FSTR_AutoAimPresetDesc AutoAimInBlindState_5_847152EE4ED5926D0330ADBAE7B3B297; // 0x0
	FSTR_AutoAimPresetDesc AutoAimInAimState_7_A47B617849A62A40601C0BB7A423A5B9; // 0x14
	FSTR_MagnetismPresetDesc MagnetismInBlindState_10_28A0FF9D47605D61C42402BB59B42F43; // 0x28
	FSTR_MagnetismPresetDesc MagnetismInAimState_12_F755CE754395431A1BDE94B2FC3E2842; // 0x38
};

struct FCullDistanceSizePair {
	float Size; // 0x0
	float CullDistance; // 0x4
};

struct FNiagaraEmitterScalabilitySettingsArray {
	TArray<FNiagaraEmitterScalabilitySettings> Settings; // 0x0
};

struct FYBIHook_LootAreaPhases : FYBaseAnalyticsEvent {
	int32_t location_x; // 0xa8
	int32_t location_y; // 0xac
	int32_t Radius; // 0xb0
	int32_t time_since_match_start; // 0xb4
	int32_t Status; // 0xb8
	FString threshold_values; // 0xc0
	FString loot_area_name; // 0xd0
};

struct FLevelNameAndTime {
	FString LevelName; // 0x0
	uint32_t LevelChangeTimeInMS; // 0x10
};

struct FPawnActionStack {
	UPawnAction* TopAction; // 0x0
};

struct FYDebugResetAllFactionsProgressionResponse {
	FString UserId; // 0x0
	FString Error; // 0x10
};

struct FYStateInputFrameCachedData {
	FRotator m_inputRotation; // 0x0
	FRotator m_deltaRotation; // 0xc
};

struct FYKeybindingData {
	FName BindingName; // 0x0
	FName OriginalBindingName; // 0x8
	FText BindingText; // 0x10
	FInputChord PrimaryKey; // 0x28
	FInputChord SecondaryKey; // 0x48
	FInputChord GamepadKey; // 0x68
	float Scale; // 0x88
	bool IsDefault; // 0x8c
	bool IsAxis; // 0x8d
	EYInputBindingCategory InputBindingCategory; // 0x8e
};

struct FSubmixEffectTapDelaySettings {
	float MaximumDelayLength; // 0x0
	float InterpolationTime; // 0x4
	TArray<FTapDelayInfo> Taps; // 0x8
};

struct FYPendingFriendRequestsResponse {
	TArray<FYSimplePlayerProfile> invites; // 0x0
};

struct FRigUnit_TwistBones_WorkData {
	TArray<FCachedRigElement> CachedItems; // 0x0
	TArray<float> ItemRatios; // 0x10
	TArray<FTransform> ItemTransforms; // 0x20
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

struct FRigUnit_AimItem_Target {
	float weight; // 0x0
	FVector Axis; // 0x4
	FVector Target; // 0x10
	EControlRigVectorKind Kind; // 0x1c
	FRigElementKey Space; // 0x20
};

struct FYRankEntries {
	TArray<FYPlayerRankDataEntry> m_rankEntries; // 0x0
};

struct FYChatHistoryEntry {
	FYChatMessageInputData m_data; // 0x0
	float m_timeSent; // 0x30
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

struct FUpdateLevelVisibilityLevelInfo {
	FName PackageName; // 0x0
	FName Filename; // 0x8
	char bIsVisible : 1; // 0x10
};

struct FYActivityAnalyticsEvent : FYBaseActivityStats {
	EYActivityType Activity; // 0xb8
	FString activitySubType; // 0xc0
};

struct FPrimaryAssetType {
	FName Name; // 0x0
};

struct FRigUnit_MathFloatLawOfCosine : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	float C; // 0x10
	float AlphaAngle; // 0x14
	float BetaAngle; // 0x18
	float GammaAngle; // 0x1c
	bool bValid; // 0x20
};

struct FInputChord {
	FKey Key; // 0x0
	char bShift : 1; // 0x18
	char bCtrl : 1; // 0x18
	char bAlt : 1; // 0x18
	char bCmd : 1; // 0x18
};

struct FCRSimPoint {
	float Mass; // 0x0
	float Size; // 0x4
	float LinearDamping; // 0x8
	float InheritMotion; // 0xc
	FVector Position; // 0x10
	FVector LinearVelocity; // 0x1c
};

struct FAnimNode_AccelerationWarp : FAnimNode_Base {
	FPoseLink InputPose; // 0x10
	float Acceleration; // 0x20
	float Direction; // 0x24
	float Alpha; // 0x28
	FVector UpAxis; // 0x2c
	float TorsoBendRatio; // 0x38
	float MaxTorsoBend; // 0x3c
	float Smoothing; // 0x40
	FBoneChain SpineChain; // 0x48
};

struct FAnimNode_RefPose : FAnimNode_Base {
	ERefPoseType RefPoseType; // 0x10
};

struct FExperimentationDeleteExperimentRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ExperimentId; // 0x10
};

struct FBakedIntegerCustomAttribute {
	FName AttributeName; // 0x0
	FIntegralCurve IntCurve; // 0x8
};

struct FTypefaceEntry {
	FName Name; // 0x0
	FFontData Font; // 0x8
};

struct FYPlayerProfile {
	FString internalUserId; // 0x0
	FString rowId; // 0x10
	int32_t prospectorLevelXP; // 0x20
};

struct FRigUnit_SpringIK : FRigUnit_HighlevelBaseMutable {
	FName StartBone; // 0x68
	FName EndBone; // 0x70
	float HierarchyStrength; // 0x78
	float EffectorStrength; // 0x7c
	float EffectorRatio; // 0x80
	float RootStrength; // 0x84
	float RootRatio; // 0x88
	float Damping; // 0x8c
	FVector PoleVector; // 0x90
	bool bFlipPolePlane; // 0x9c
	EControlRigVectorKind PoleVectorKind; // 0x9d
	FName PoleVectorSpace; // 0xa0
	FVector PrimaryAxis; // 0xa8
	FVector SecondaryAxis; // 0xb4
	bool bLiveSimulation; // 0xc0
	int32_t Iterations; // 0xc4
	bool bLimitLocalPosition; // 0xc8
	bool bPropagateToChildren; // 0xc9
	FRigUnit_SpringIK_DebugSettings DebugSettings; // 0xd0
	FRigUnit_SpringIK_WorkData WorkData; // 0x120
};

struct FPerPlatformBool {
	bool Default; // 0x0
};

struct FYPerk : FYDataTableRowBase {
	FText m_displayName; // 0x10
	TArray<UTexture2D*> m_hudIcons; // 0x28
	EYPerkTrigger m_trigger; // 0x38
	FYAttributeTriggerData m_attributeTriggerData; // 0x3c
	FYWeaponSwitchTriggerData m_weaponSwitchTriggerData; // 0x44
	AActor* m_instigator; // 0x48
	EYPerkTarget m_target; // 0x50
	EYGameplayContextType m_contextType; // 0x51
	TArray<FYGameplayAttributeModifier> m_attributeModifiers; // 0x58
	bool m_refreshAttributes; // 0x68
	bool m_resetAttributeDurationOnReTrigger; // 0x69
	TArray<TSoftClassPtr<UObject>> m_perkActionsSoftRef; // 0x70
	float m_perkDuration; // 0x80
	FYDamageDealingTriggerData m_damageTriggeringData; // 0x88
	FGuid m_guid; // 0xa8
	bool m_isActive; // 0xb8
	TArray<UYPerkAction*> m_perkActionInstances; // 0xc0
};

struct FMeshInstancingSettings {
	AActor* ActorClassToUse; // 0x0
	int32_t InstanceReplacementThreshold; // 0x8
	EMeshInstancingReplacementMethod MeshReplacementMethod; // 0xc
	bool bSkipMeshesWithVertexColors; // 0xd
	bool bUseHLODVolumes; // 0xe
	UInstancedStaticMeshComponent* ISMComponentToUse; // 0x10
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

struct FYRooms {
	TArray<FYRoomInfo> waitingRooms; // 0x0
	TArray<FYRoomInfo> playingRooms; // 0x10
};

struct FCanvasIcon {
	UTexture* Texture; // 0x0
	float U; // 0x8
	float V; // 0xc
	float UL; // 0x10
	float VL; // 0x14
};

struct FYKeybindings {
	TMap<FName, FYKeybindingData> Keybindings; // 0x0
	bool HasUpdates; // 0x50
	bool IsNew; // 0x51
	TArray<FYKeybindingData> m_addedKeybindings; // 0x58
	TArray<FYKeybindingData> m_removedKeybindings; // 0x68
};

struct FYStationPingEntry {
	FString Region; // 0x0
	FString endpoint; // 0x10
};

struct FYCommWheelEntry : FTableRowBase {
	FText m_displayName; // 0x8
	FText m_textMessageInChat; // 0x20
	FColor m_colorText; // 0x38
	UTexture2D* m_iconTexture; // 0x40
	UDataTable* m_subCommWheel; // 0x48
	FDataTableRowHandle m_voiceLine; // 0x50
	EYActivityType m_associatedActivity; // 0x60
	bool m_onlyVisibleIfDBNO; // 0x61
	TArray<EYPlayerStateBlueprint> m_onlyVisibleIfInPlayerStates; // 0x68
	bool m_onlyVisibleIfInATeam; // 0x78
	EYCommWheelEntryTutorialSetting m_tutorialVisibility; // 0x79
	bool m_colorizeSocialActorWidgetIconByPlayerRole; // 0x7a
	FColor m_colorSocialActorWidget; // 0x7c
	float m_minSocialActorLifeSpan; // 0x80
	float m_maxSocialActorLifeSpan; // 0x84
	FDataTableRowHandle m_socialActorSpawnAudio; // 0x88
};

struct FRigUnit_CCDIK_WorkData {
	TArray<FCCDIKChainLink> Chain; // 0x0
	TArray<FCachedRigElement> CachedItems; // 0x10
	TArray<int32_t> RotationLimitIndex; // 0x20
	TArray<float> RotationLimitsPerItem; // 0x30
	FCachedRigElement CachedEffector; // 0x40
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

struct FSoundSubmixSpectralAnalysisBandSettings {
	float BandFrequency; // 0x0
	int32_t AttackTimeMsec; // 0x4
	int32_t ReleaseTimeMsec; // 0x8
	float QFactor; // 0xc
};

struct FYMissionRuntimeInitializationData {
	FYMissionState m_missionState; // 0x0
	int32_t m_progress; // 0x28
	bool m_shouldShowPopup; // 0x2c
};

struct FYAISenseTriggerRow : FYDataTableRowBase {
	float m_intensity; // 0x10
	float m_maxRange; // 0x14
	EYAISenseType m_type; // 0x18
};

struct FAnimTrack {
	TArray<FAnimSegment> AnimSegments; // 0x0
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

struct FYSquadModeInfo {
	TArray<FYRoomSquad> squads; // 0x0
	TArray<FYRoomPlayer> users; // 0x10
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

struct FBrushEffectTerracing {
	float TerraceAlpha; // 0x0
	float TerraceSpacing; // 0x4
	float TerraceSmoothness; // 0x8
	float MaskLength; // 0xc
	float MaskStartOffset; // 0x10
};

struct FFoliageVertexColorChannelMask {
	char UseMask : 1; // 0x0
	float MaskThreshold; // 0x4
	char InvertMask : 1; // 0x8
};

struct FYResourceManagerRequestEntry {
	int32_t m_handle; // 0x0
};

struct FClientListUsersCharactersRequest : FPlayFabRequestCommon {
	FString PlayFabId; // 0x8
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

struct FSoundModulationDestinationSettings {
	float Value; // 0x0
	USoundModulatorBase* Modulator; // 0x8
};

struct FAdminGetContentListRequest : FPlayFabRequestCommon {
	FString Prefix; // 0x8
};

struct FFractureEffect {
	UParticleSystem* ParticleSystem; // 0x0
	USoundBase* Sound; // 0x8
};

struct FYMeleeAttackBI : FYBaseAnalyticsEvent {
	int32_t attack_type; // 0xa8
	bool Hit; // 0xac
	bool backstab; // 0xad
	bool out_of_stamina; // 0xae
	int32_t damage_done; // 0xb0
	FString enemy_id; // 0xb8
	FString enemy_name; // 0xc8
	FString enemy_status; // 0xd8
	int32_t time_since_user_joined; // 0xe8
};

struct FYMapInfoRow : FTableRowBase {
	FText m_name; // 0x8
	FText m_description; // 0x20
	FText m_tooltip; // 0x38
	TSoftObjectPtr<UTexture2D> m_image; // 0x50
	TSoftObjectPtr<UTexture2D> m_mapSelectionImage; // 0x78
	TSoftObjectPtr<UObject> m_persistentMap; // 0xa0
	EYMatchMapDifficulty m_difficulty; // 0xc8
	TSoftObjectPtr<UMaterialInterface> m_hologramMaterial; // 0xd0
	FYVFXNiagaraMapInfo m_VFXNiagaraMapInfo; // 0xf8
};

struct FYAIRangedAttackDefinition {
	FName m_nameAttack; // 0x0
	float m_overrideProjectileGravity; // 0x8
	float m_requestedArc; // 0xc
	float m_accuracy; // 0x10
	FDataTableRowHandle m_weaponTransport; // 0x18
	bool m_shootAtGroundLocationOfTarget; // 0x28
	TArray<FYAIAttackPhaseDefinition> m_attackPhases; // 0x30
};

struct FYDebugResetOnboaringProgress {
	FString UserId; // 0x0
};

struct FServerUpdateUserInternalDataRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Data; // 0x10
	FString KeysToRemove; // 0x18
	FString PlayFabId; // 0x28
};

struct FLocationBoneSocketInfo {
	FName BoneSocketName; // 0x0
	FVector Offset; // 0x8
};

struct FYDragStateData {
	UDragDropOperation* m_operation; // 0x0
	bool m_state; // 0x8
};

struct FYRequestNewHeatMapData {
	FVector2D m_worldLocation; // 0x0
	FVector2D m_gridLocation; // 0x8
	float m_duration; // 0x10
	float m_timestampActivated; // 0x14
	int32_t m_runtimeHandle; // 0x18
	char m_type; // 0x1c
};

struct FBranchingPoint : FAnimLinkableElement {
	FName EventName; // 0x30
	float DisplayTime; // 0x38
	float TriggerTimeOffset; // 0x3c
};

struct FPerPlatformInt {
	int32_t Default; // 0x0
};

struct FControlRigComponentMappedBone {
	FName Source; // 0x0
	FName Target; // 0x8
};

struct FYQuestTaskDataDataTableRow : FYDataTableRowBase {
	EYOnboardingQuestType m_questType; // 0x10
	FText m_questTaskText; // 0x18
	FString customData; // 0x30
	int32_t currentProgress; // 0x40
	int32_t maxProgress; // 0x44
};

struct FClientLoginWithXboxRequest : FPlayFabRequestCommon {
	bool CreateAccount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString EncryptedRequest; // 0x18
	UPlayFabJsonObject* InfoRequestParameters; // 0x28
	FString PlayerSecret; // 0x30
	FString XboxToken; // 0x40
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

struct FStaticMeshSourceModel {
	FMeshBuildSettings BuildSettings; // 0x0
	FMeshReductionSettings ReductionSettings; // 0x30
	float LODDistance; // 0x54
	FPerPlatformFloat ScreenSize; // 0x58
	FString SourceImportFilename; // 0x60
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

struct FTimeSynthClipHandle {
	FName ClipName; // 0x0
	int32_t ClipId; // 0x8
};

struct FYPlayerHUDAudioData {
	FDataTableRowHandle m_gearStoreSuccessfulPurchase; // 0x0
	FDataTableRowHandle m_matchStarted; // 0x10
	FDataTableRowHandle m_levelUp; // 0x20
	FDataTableRowHandle m_maxLevel; // 0x30
	FDataTableRowHandle m_scoreFromTeammate; // 0x40
	FDataTableRowHandle m_scoreFromSelf; // 0x50
	FDataTableRowHandle m_socialActorPing; // 0x60
	TArray<FYLootNotificationAudioData> m_lootNotifications; // 0x70
	FDataTableRowHandle m_abilityActivationDeniedDueCooldown; // 0x80
	FDataTableRowHandle m_weaponDropFromInventory; // 0x90
	FDataTableRowHandle m_abilityDropFromInventory; // 0xa0
};

struct FAdminGetPlayerSharedSecretsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> SharedSecrets; // 0x8
};

struct FClientAddUserVirtualCurrencyRequest : FPlayFabRequestCommon {
	int32_t Amount; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x10
	FString VirtualCurrency; // 0x18
};

struct FSoundAttenuationPluginSettings {
	TArray<USpatializationPluginSourceSettingsBase*> SpatializationPluginSettingsArray; // 0x0
	TArray<UOcclusionPluginSourceSettingsBase*> OcclusionPluginSettingsArray; // 0x10
	TArray<UReverbPluginSourceSettingsBase*> ReverbPluginSettingsArray; // 0x20
};

struct FConeConstraint : FConstraintBaseParams {
	float Swing1LimitDegrees; // 0x14
	float Swing2LimitDegrees; // 0x18
	EAngularConstraintMotion Swing1Motion; // 0x1c
	EAngularConstraintMotion Swing2Motion; // 0x1d
};

struct FClientGetPublisherDataResult : FPlayFabResultCommon {
	UPlayFabJsonObject* Data; // 0x8
};

struct FClientRemoveSharedGroupMembersRequest : FPlayFabRequestCommon {
	FString PlayFabIds; // 0x8
	FString SharedGroupId; // 0x18
};

struct FConnectionAlwaysRelevantNodePair {
	UNetConnection* NetConnection; // 0x0
	UReplicationGraphNode_AlwaysRelevant_ForConnection* Node; // 0x8
};

struct FAnimNode_ControlRig_ExternalSource : FAnimNode_ControlRigBase {
	TWeakObjectPtr<UControlRig> ControlRig; // 0x170
};

struct FYBroadcast {
	FString from; // 0x0
	FString Msg; // 0x10
};

struct FYPlayerQuitEvent : FYBaseAnalyticsEvent {
	FString Reason; // 0xa8
	FString game_situation; // 0xb8
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

struct FClientGetTradeStatusResponse : FPlayFabResultCommon {
	UPlayFabJsonObject* Trade; // 0x8
};

struct FYFullscreenScopeData {
	UObject* m_widgetClass; // 0x0
};

struct FYConfiguration {
	TArray<FYGameModeConfigEntry> GameModes; // 0x0
};

struct FBlueprintCookedComponentInstancingData {
	TArray<FBlueprintComponentChangedPropertyInfo> ChangedPropertyList; // 0x0
	bool bHasValidCookedData; // 0x21
};

struct FBeamTargetData {
	FName targetName; // 0x0
	float TargetPercentage; // 0x8
};

struct FTransformBase {
	FName Node; // 0x0
	FTransformBaseConstraint Constraints[0x2]; // 0x8
};

struct FAngularRangeLimit {
	FVector LimitMin; // 0x0
	FVector LimitMax; // 0xc
	FBoneReference Bone; // 0x18
};

struct FEulerTransform {
	FVector Location; // 0x0
	FRotator Rotation; // 0xc
	FVector Scale; // 0x18
};

struct FRigUnit_HierarchyGetChildren : FRigUnit_HierarchyBase {
	FRigElementKey Parent; // 0x8
	bool bIncludeParent; // 0x14
	bool bRecursive; // 0x15
	FRigElementKeyCollection Children; // 0x18
	FCachedRigElement CachedParent; // 0x28
	FRigElementKeyCollection CachedChildren; // 0x40
};

struct FSubtitleCue {
	FText Text; // 0x0
	float Time; // 0x18
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

struct FClientConsumeItemResult : FPlayFabResultCommon {
	FString ItemInstanceId; // 0x8
	int32_t RemainingUses; // 0x18
};

struct FRigUnit_ConvertVectorToQuaternion : FRigUnit {
	FVector Input; // 0x8
	FQuat Result; // 0x20
};

struct FYStatWidgets {
	TArray<UYWidget*> m_widgets; // 0x0
};

struct FAnimBlueprintFunctionData {
	TFieldPath<FStructProperty> OutputPoseNodeProperty; // 0x0
	TArray<TFieldPath<FStructProperty>> InputPoseNodeProperties; // 0x20
	TArray<TFieldPath<FProperty>> InputProperties; // 0x30
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

struct FYDebugSimulateDateTimeSeasons {
	FString DateTime; // 0x0
};

struct FYMatchmakingDebugSessionUserInfo {
	FString SessionId; // 0x0
	FString mapName; // 0x10
	int32_t playersCount; // 0x20
	bool allowsJoinDueToStorm; // 0x24
	bool activeDeathCooldown; // 0x25
	bool isBeginnerSession; // 0x26
	int64_t transitionTime; // 0x28
	FString Region; // 0x30
	EYMatchServerSocialAdmissionType socialAdmissionType; // 0x40
	int32_t nvr; // 0x44
};

struct FDamageEvent {
	UDamageType* DamageTypeClass; // 0x8
};

struct FClientGetPlayerStatisticVersionsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString StatisticName; // 0x10
};

struct FRigUnit_SpaceName : FRigUnit {
	FName Space; // 0x8
};

struct FClientUnlinkXboxAccountRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
};

struct FPlayFabRequestCommon {
	UPlayFabAuthenticationContext* AuthenticationContext; // 0x0
};

struct FYStatCombinationData : FYEOSStatData {
	TArray<FYStatCombinationPair> m_statCalculation; // 0x30
	bool m_anyGameMode; // 0x40
	bool m_anyActivity; // 0x41
	EYMatchmakeGameModeType m_gameModeType; // 0x42
	EYActivityType m_activityType; // 0x43
};

struct FMovieSceneVector4KeyStruct : FMovieSceneVectorKeyStructBase {
	FVector4 Vector; // 0x30
};

struct FRichCurve : FRealCurve {
	TArray<FRichCurveKey> Keys; // 0x70
};

struct FGroupsListGroupInvitationsRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	UPlayFabJsonObject* Group; // 0x10
};

struct FClientUnlinkNintendoSwitchDeviceIdRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString NintendoSwitchDeviceId; // 0x10
};

struct FClientGetTitleNewsResult : FPlayFabResultCommon {
	TArray<UPlayFabJsonObject*> News; // 0x8
};

struct FRigUnit_MathFloatLessEqual : FRigUnit_MathFloatBase {
	float A; // 0x8
	float B; // 0xc
	bool Result; // 0x10
};

struct FMultiplayerGetBuildAliasRequest : FPlayFabRequestCommon {
	FString AliasId; // 0x8
	UPlayFabJsonObject* CustomTags; // 0x18
};

struct FVectorCurve : FAnimCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x18
};

struct FServerRemoveFriendRequest : FPlayFabRequestCommon {
	FString FriendPlayFabId; // 0x8
	FString PlayFabId; // 0x18
};

struct FARPlaneUpdatePayload {
	FARSessionPayload SessionPayload; // 0x0
	FTransform WorldTransform; // 0x20
	FVector Center; // 0x50
	FVector Extents; // 0x5c
	TArray<FVector> BoundaryVertices; // 0x68
	EARObjectClassification ObjectClassification; // 0x78
};

struct FCollisionProfileName {
	FName Name; // 0x0
};

struct FYBagDataTableRow : FYItemDataTableRowBase {
	int32_t m_weightLimit; // 0x310
	FYMeshAttachment m_bagBase; // 0x318
	TArray<FYMeshAttachment> m_bagAttachments; // 0x370
};

struct FYLiveEventModifiersConfiguration {
	TArray<FYLiveEventModifier> liveEventModifiers; // 0x0
};

struct FRigUnit_EndsWith : FRigUnit_NameBase {
	FName Name; // 0x8
	FName Ending; // 0x10
	bool Result; // 0x18
};

struct FYBannerVanityRow : FYVanityItemRowBase {
	TSoftObjectPtr<UParticleSystem> m_particleSystem; // 0x378
	TArray<TSoftObjectPtr<USoundBase>> m_sounds; // 0x3a0
	FLinearColor m_particleSystemColor; // 0x3b0
	FText m_secondPlateText; // 0x3c0
	bool m_isPublished; // 0x3d8
};

struct FYDebugGiveRerollTokens {
	int32_t numOfTokensToGiveToThePlayer; // 0x0
};

struct FPrimitiveComponentInstanceData : FSceneComponentInstanceData {
	FTransform ComponentTransform; // 0xc0
	int32_t VisibilityId; // 0xf0
	UPrimitiveComponent* LODParent; // 0xf8
};

struct FOptionalMovieSceneBlendType {
	EMovieSceneBlendType BlendType; // 0x0
	bool bIsValid; // 0x1
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

struct FSubmixEffectFlexiverbSettings {
	float PreDelay; // 0x0
	float DecayTime; // 0x4
	float RoomDampening; // 0x8
	int32_t Complexity; // 0xc
};

struct FStridePivot {
	FBoneReference Root; // 0x0
	bool bProjectToGround; // 0x10
	float Offset; // 0x14
	EStrideVectorMethod StrideVectorMethod; // 0x18
	float Smoothing; // 0x1c
	bool bChooseNearestAxis; // 0x20
};

struct FRigUnit_SlideChain_WorkData {
	float ChainLength; // 0x0
	TArray<float> ItemSegments; // 0x8
	TArray<FCachedRigElement> CachedItems; // 0x18
	TArray<FTransform> Transforms; // 0x28
	TArray<FTransform> BlendedTransforms; // 0x38
};

struct FYAIPerPlayerCombatData {
	int32_t ai_damage_dealt; // 0x0
	int32_t hits_by_ai; // 0x4
	int32_t weakspots_hits_by_ai; // 0x8
};

struct FYKeyOverrideColorData {
	FLinearColor m_colorOverride; // 0x0
	int32_t m_handle; // 0x10
	int32_t m_isOverrideVisible; // 0x14
	int32_t m_lerpStartSign; // 0x18
	float m_deltaTime; // 0x1c
	float m_duration; // 0x20
	float m_interval; // 0x24
	float m_multiplier; // 0x28
	EYLerpBehavior m_lerpBehavior; // 0x2c
	bool m_isActive; // 0x2d
};

struct FLevelStreamingStatus {
	FName PackageName; // 0x0
	char bShouldBeLoaded : 1; // 0x8
	char bShouldBeVisible : 1; // 0x8
	uint32_t LODIndex; // 0xc
};

struct FServerModifyItemUsesRequest : FPlayFabRequestCommon {
	UPlayFabJsonObject* CustomTags; // 0x8
	FString ItemInstanceId; // 0x10
	FString PlayFabId; // 0x20
	int32_t UsesToAdd; // 0x30
};

struct FNamedSlotBinding {
	FName Name; // 0x0
	UWidget* Content; // 0x8
};

struct FRigUnit_MathRBFInterpolateVectorVector : FRigUnit_MathRBFInterpolateVectorBase {
	TArray<FMathRBFInterpolateVectorVector_Target> Targets; // 0xb0
	FVector Output; // 0xc0
};

struct FYStationUserPings {
	FString Region; // 0x0
	int32_t Ping; // 0x10
};

struct FServerConsumeItemRequest : FPlayFabRequestCommon {
	FString CharacterId; // 0x8
	int32_t ConsumeCount; // 0x18
	UPlayFabJsonObject* CustomTags; // 0x20
	FString ItemInstanceId; // 0x28
	FString PlayFabId; // 0x38
};

struct FBoneSocketTarget {
	bool bUseSocket; // 0x0
	FBoneReference BoneReference; // 0x4
	FSocketReference SocketReference; // 0x20
};

struct FYDealtDamageData {
	FVector m_fromDirection; // 0x0
	FVector m_hitLocation; // 0xc
	FYDamageOverTimeData m_dotData; // 0x18
	FYDamageOriginInfo m_damageOriginInfo; // 0x28
	UYDamageComponent* m_componentToDamage; // 0x50
	AActor* m_originalDamageCauser; // 0x58
	AActor* m_damageCauser; // 0x60
	AActor* m_damageInstigator; // 0x68
	FYDamageHelper m_damage; // 0x70
	float m_shieldDamage; // 0x7c
	float m_healthDamage; // 0x80
	float m_vehicleDamage; // 0x84
	float m_overkillDamage; // 0x88
	float m_stabilityDamage; // 0x8c
	float m_stabilityDamageForDeathRagdoll; // 0x90
	float m_impulseDamage; // 0x94
	EYDamageApplication m_damageApplication; // 0x98
	bool m_isFriendlyFireAllowed; // 0x99
	FGameplayTagContainer m_objectTypesAllowedToDamage; // 0xa0
	bool m_preventBeingLethalAndPreventEnteringDBNO; // 0xc0
	bool m_hitDBNOPlayer; // 0xc1
	bool m_isDamageDot; // 0xc2
	bool m_isWeakspotDamage; // 0xc3
	float m_damageAreaMultiplier; // 0xc4
	float m_penetration; // 0xc8
	bool m_isFromRadialDamage; // 0xcc
	bool m_shieldReducedToZero; // 0xcd
	bool m_diedOfThisDamage; // 0xce
	bool m_teleportedBecauseOfThisDamage; // 0xcf
	bool m_causedDBNO; // 0xd0
	bool m_allowDBNO; // 0xd1
	bool m_produceHitFeedback; // 0xd2
	bool m_isHealDamage; // 0xd3
	bool m_canDamageSelf; // 0xd4
	bool m_shouldInterrupInteraction; // 0xd5
	bool m_childActorInitiated; // 0xd6
	bool m_affectEnemyHitreaction; // 0xd7
	bool m_ignoreShield; // 0xd8
	bool m_isPropagatedData; // 0xd9
	bool m_excludeFromBIData; // 0xda
	ENetRole m_roleToReplicate; // 0xdb
	FGenericTeamId m_damageTeamID; // 0xdc
	char m_boneIndexHit; // 0xdd
	FName m_boneNameHit; // 0xe0
	EPhysicalSurface m_surfaceTypeHit; // 0xe8
	FGuid m_shotGuid; // 0xec
};

struct FInsightsInsightsOperationResponse : FPlayFabResultCommon {
	FString Message; // 0x8
	FString OperationId; // 0x18
	FString OperationType; // 0x28
};

struct FClientReceiveData {
	APlayerController* LocalPC; // 0x0
	FName messageType; // 0x8
	int32_t MessageIndex; // 0x10
	FString MessageString; // 0x18
	APlayerState* RelatedPlayerState_2; // 0x28
	APlayerState* RelatedPlayerState_3; // 0x30
	UObject* OptionalObject; // 0x38
};

struct FYConfigEntry {
	FString Name; // 0x0
	FString jsonData; // 0x10
};

struct FYUpdatePlayerPresenceStateRequest {
	bool inMatch; // 0x0
};

struct FEnvQueryRequest {
	UEnvQuery* QueryTemplate; // 0x0
	UObject* Owner; // 0x8
	UWorld* World; // 0x10
};

struct FYVOAudioDatatableRow : FYAudioDataTableRow {
	FString m_uniqueName; // 0x18
	FDataTableRowHandle m_category; // 0x28
	EYVoRowType m_rowType; // 0x38
	FString m_notes; // 0x40
	bool m_requiresSubtitles; // 0x50
	FYVOVariationsContainer m_voVariationContainer; // 0x58
	FDataTableRowHandle m_speaker; // 0x68
	float m_cooldownDuration; // 0x78
	bool m_allowedToQueueSound; // 0x7c
	bool m_debugDisable; // 0x7d
	bool m_isDeprecatedAndShouldBeRemoved; // 0x7e
};

struct FPaintedVertex {
	FVector Position; // 0x0
	FColor Color; // 0xc
	FVector4 Normal; // 0x10
};

struct FActorPerceptionUpdateInfo {
	int32_t TargetId; // 0x0
	TWeakObjectPtr<AActor> Target; // 0x4
	FAIStimulus Stimulus; // 0xc
};

struct FYRarityItemRoll {
	EYGameplayAttribute m_attribute; // 0x0
	EYGPAModifierType m_modifierType; // 0x1
	float m_minValue; // 0x4
	float m_maxValue; // 0x8
	int32_t m_randomizationSteps; // 0xc
};

struct FYMovementImpulseData {
	FVector m_impulseToApply; // 0x0
	bool m_isActive; // 0xc
};

struct FYWeaponTransportDataTableRow : FYDataTableRowBase {
	FName m_muzzleSocketName; // 0x10
	FDataTableRowHandle m_impactDataTableRow; // 0x18
	FYWeaponTransportHitscanData m_hitscanData; // 0x28
	FYWeaponTransportProjectileData m_projectileData; // 0x40
	FYWeaponTransportPhysicActorData m_pysicActorData; // 0x90
	FYWeaponTransportSphereData m_sphereData; // 0xa0
	FYWeaponTransportCapsuleData m_capsuleData; // 0xb0
	TArray<FYWeaponLocationOffsetData> m_startLocationOffset; // 0xc8
	FDataTableRowHandle m_defaultFXCategoryDataTableRow; // 0xd8
	FVector m_shootingOffsetDefaultDirection; // 0xe8
	float m_scaleOffsetDirection; // 0xf4
	bool m_shouldHaveFxCategory; // 0xf8
	bool m_useShootingOffsetRandomization; // 0xf9
	bool m_shootTroughDynamicObjects; // 0xfa
	bool m_produceImpactRegadlessOfHit; // 0xfb
	EYWeaponTransportType m_transportType; // 0xfc
	FDataTableRowHandle m_damageInfoApplyRowHandle; // 0x100
};

struct FAssetManagerRedirect {
	FString Old; // 0x0
	FString New; // 0x10
};

struct FMovieScenePropertySectionTemplate : FMovieSceneEvalTemplate {
	FMovieScenePropertySectionData PropertyData; // 0x20
};

struct FPolygonToCreate {
	FPolygonGroupID PolygonGroupID; // 0x0
	TArray<FVertexAndAttributes> PerimeterVertices; // 0x8
	FPolygonID OriginalPolygonID; // 0x18
	EPolygonEdgeHardness PolygonEdgeHardness; // 0x1c
};

