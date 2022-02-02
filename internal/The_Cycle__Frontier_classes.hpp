// Created by BlueFire1337
// Updated 2021-10-25
// Generated 2022-02-02

namespace off {
	constexpr auto GNames = 0x5cc74c0;
	constexpr auto GObjects = 0x5cdfca8;
	constexpr auto GWorld = 0x5e16a80;
}

struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	FGuid ObjectGuid; // 0x88
};

struct UFoliageType_Actor : UFoliageType {
	AActor* ActorClass; // 0x3a8
	bool bShouldAttachToBaseComponent; // 0x3b0
};

struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UOpenBugReporterCommand_BP_C : UYNavigationCommand {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
};

struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UYWidget_ModalDialogOKCancelItem : UYWidget_ModalDialogOkCancel {
	UYWidget_ItemContainer* m_itemWidget; // 0x338
};

struct UYHealthComponent : UYResourceComponent {
	FMulticastInlineDelegate HealthDataChangedDelegate; // 0xd0
	FMulticastInlineDelegate CurrentHealthChangedDelegate; // 0xe0
	FMulticastInlineDelegate HealthEmptyDelegate; // 0xf0
	FMulticastInlineDelegate DebugDiedInImmortalMode; // 0x100
	bool m_immortalmodeActivated; // 0x110
	FYActorPlateWidgetCreationData m_plateWidgetData; // 0x118
	bool m_canDieByDamageOverTime; // 0x1a8
	FDataTableRowHandle m_healthData; // 0x1b0
	float m_currentHealth; // 0x1c0
	AActor* m_healthChangeInstigator; // 0x1c8
	float m_timstampServerTakenRegenRelevantDamage; // 0x1e8
	UYGameplayAttributesComponent* m_gameplayAttributeComponent; // 0x1f0
};

struct UPaperGroupedSpriteComponent : UMeshComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x468
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x478
};

struct UTimeSynthVolumeGroup : UObject {
	float DefaultVolume; // 0x28
};

struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UTextRenderComponent : UPrimitiveComponent {
	FText Text; // 0x440
	UMaterialInterface* TextMaterial; // 0x458
	UFont* Font; // 0x460
	EHorizTextAligment HorizontalAlignment; // 0x468
	EVerticalTextAligment VerticalAlignment; // 0x469
	FColor TextRenderColor; // 0x46c
	float XScale; // 0x470
	float YScale; // 0x474
	float WorldSize; // 0x478
	float InvDefaultSize; // 0x47c
	float HorizSpacingAdjust; // 0x480
	float VertSpacingAdjust; // 0x484
	char bAlwaysRenderAsText : 1; // 0x488
};

struct UDLSSSettings : UObject {
	bool bEnableDLSSD3D12; // 0x28
	bool bEnableDLSSD3D11; // 0x29
	bool bEnableDLSSVulkan; // 0x2a
	bool bEnableDLSSInEditorViewports; // 0x2b
	bool bEnableScreenpercentageManipulationInDLSSEditorViewports; // 0x2c
	bool bEnableDLSSInPlayInEditorViewports; // 0x2d
	bool bShowDLSSSDebugOnScreenMessages; // 0x2e
	FString GenericDLSSBinaryPath; // 0x30
	bool bGenericDLSSBinaryExists; // 0x40
	uint32_t NVIDIANGXApplicationId; // 0x44
	FString CustomDLSSBinaryPath; // 0x48
	bool bCustomDLSSBinaryExists; // 0x58
};

struct UYAnalyticsSender : UObject {
	FString m_url; // 0x50
};

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct AYGameState_Login_BP_C : AYGameState_Station {
	USceneComponent* DefaultSceneRoot; // 0x328
};

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct UAnimSequence : UAnimSequenceBase {
	int32_t NumFrames; // 0xa8
	TArray<FTrackToSkeletonMap> TrackToSkeletonMapTable; // 0xb0
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xd0
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd8
	EAdditiveAnimationType AdditiveAnimType; // 0x150
	EAdditiveBasePoseType RefPoseType; // 0x151
	UAnimSequence* RefPoseSeq; // 0x158
	int32_t RefFrameIndex; // 0x160
	FName RetargetSource; // 0x164
	EAnimInterpolationType Interpolation; // 0x16c
	bool bEnableRootMotion; // 0x16d
	ERootMotionRootLock RootMotionRootLock; // 0x16e
	bool bForceRootLock; // 0x16f
	bool bUseNormalizedRootMotionScale; // 0x170
	bool bRootMotionSettingsCopiedFromMontage; // 0x171
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x178
	TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData; // 0x1a0
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct UAnimSharingAdditiveInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct UYTutorialComponent_BP_C : UYPlayerTutorialComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UWBP_Tutorial_Menu_C* TutorialMenu; // 0xb8
	APRO_PlayerController_C* OwningController; // 0xc0
	UYWidgetProvider_Missions* WidgetProvider_Missions; // 0xc8
	int32_t MissionStepID; // 0xd0
	TArray<FDataTableRowHandle> contracts; // 0xd8
	FDataTableRowHandle VOTutorial1; // 0xe8
	FDataTableRowHandle VOTutorial2; // 0xf8
	UYTutorialStepsPlayerComponent_BP_C* TutorialStepsComponent; // 0x108
};

struct UYIdleDetectionComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FVector WorldLocation_Previous; // 0xb8
	bool IsInStation; // 0xc4
	float matchMaxIdleTime; // 0xc8
	float stationMaxIdleTime; // 0xcc
	int32_t TimesCheckedDuringWarning; // 0xd0
	FTimerHandle TH_ShowKickWarning; // 0xd8
	FMulticastInlineDelegate ShowIdleKickWarning; // 0xe0
	FMulticastInlineDelegate HideIdleKickWarning; // 0xf0
	APRO_PlayerCharacter_C* Character; // 0x100
};

struct UEditableTextBox : UWidget {
	FText Text; // 0x108
	FDelegate TextDelegate; // 0x120
	FEditableTextBoxStyle WidgetStyle; // 0x130
	USlateWidgetStyleAsset* Style; // 0x928
	FText HintText; // 0x930
	FDelegate HintTextDelegate; // 0x948
	FSlateFontInfo Font; // 0x958
	FLinearColor ForegroundColor; // 0x9b0
	FLinearColor BackgroundColor; // 0x9c0
	FLinearColor ReadOnlyForegroundColor; // 0x9d0
	bool IsReadOnly; // 0x9e0
	bool IsPassword; // 0x9e1
	float MinimumDesiredWidth; // 0x9e4
	FMargin Padding; // 0x9e8
	bool IsCaretMovedWhenGainFocus; // 0x9f8
	bool SelectAllTextWhenFocused; // 0x9f9
	bool RevertTextOnEscape; // 0x9fa
	bool ClearKeyboardFocusOnCommit; // 0x9fb
	bool SelectAllTextOnCommit; // 0x9fc
	bool AllowContextMenu; // 0x9fd
	EVirtualKeyboardType KeyboardType; // 0x9fe
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x9ff
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0xa00
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xa01
	ETextJustify Justification; // 0xa02
	FShapedTextOptions ShapedTextOptions; // 0xa03
	FMulticastInlineDelegate OnTextChanged; // 0xa08
	FMulticastInlineDelegate OnTextCommitted; // 0xa18
};

struct APaperCharacter : ACharacter {
	UPaperFlipbookComponent* Sprite; // 0x4e0
};

struct UMaterialExpressionNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	FExpressionInput FilterWidth; // 0x54
	float Scale; // 0x68
	int32_t Quality; // 0x6c
	ENoiseFunction NoiseFunction; // 0x70
	char bTurbulence : 1; // 0x74
	int32_t Levels; // 0x78
	float OutputMin; // 0x7c
	float OutputMax; // 0x80
	float LevelScale; // 0x84
	char bTiling : 1; // 0x88
	uint32_t RepeatSize; // 0x8c
};

struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48
};

struct UAnimSharingTransitionInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct UMapMarker_SurveillanceBubble_WBP_C : UYWidget_AreaMapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f8
	UImage* m_offscreenArrow; // 0x300
	UCanvasPanel* WidgetContainer; // 0x308
	float areaWidgetScale; // 0x310
	FVector2D MapWorldBounds; // 0x314
	FVector2D MapPixelSize; // 0x31c
	float SurveillanceRadius; // 0x324
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UTestScreen2 : UTestState2 {
	TSoftClassPtr<UObject> m_widgetBp; // 0x58
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct UControlRigGizmoLibrary : UObject {
	FControlRigGizmoDefinition DefaultGizmo; // 0x30
	TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x90
	FName MaterialColorParameter; // 0xb8
	TArray<FControlRigGizmoDefinition> Gizmos; // 0xc0
};

struct UPlayFabGroupsAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x218
	UPlayFabJsonObject* RequestJsonObj; // 0x220
	UPlayFabJsonObject* ResponseJsonObj; // 0x228
};

struct UYWidget_SetItemActiveSetView : UYWidget {
	UYWidget_SetItem* m_pistolSlot; // 0x2c0
	UYWidget_SetItem* m_kitSlot; // 0x2c8
	UYWidget_SetItem* m_weaponOneSlot; // 0x2d0
	UYWidget_SetItem* m_weaponTwoSlot; // 0x2d8
	UYWidget_SetItem* m_toolOneSlot; // 0x2e0
	UYWidget_SetItem* m_toolTwoSlot; // 0x2e8
	UYWidget_SetItem* m_abilityOneSlot; // 0x2f0
	UYWidget_SetItem* m_abilityTwoSlot; // 0x2f8
	UYWidget_SetItem* m_bagSlot; // 0x300
	UYWidget_SetItem* m_helmetSlot; // 0x308
	UYWidget_ItemContainer* m_selectedItem; // 0x310
	FMulticastInlineDelegate OnInventoryItemClickedDelegate; // 0x318
	FMulticastInlineDelegate OnInventoryItemDetailView; // 0x328
	FMulticastInlineDelegate OnInventoryItemHoveredDelegate; // 0x338
	FMulticastInlineDelegate OnInventoryItemUnhoveredDelegate; // 0x348
	FMulticastInlineDelegate OnInventoryItemDraggingItem; // 0x358
	EYPlayerSetType m_slotType; // 0x369
};

struct UBlueprint : UBlueprintCore {
	UObject* ParentClass; // 0x50
	EBlueprintType BlueprintType; // 0x58
	char bRecompileOnLoad : 1; // 0x59
	char bHasBeenRegenerated : 1; // 0x59
	char bIsRegeneratingOnLoad : 1; // 0x59
	int32_t BlueprintSystemVersion; // 0x5c
	USimpleConstructionScript* SimpleConstructionScript; // 0x60
	TArray<UActorComponent*> ComponentTemplates; // 0x68
	TArray<UTimelineTemplate*> Timelines; // 0x78
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x88
	UInheritableComponentHandler* InheritableComponentHandler; // 0x98
};

struct UYWidget_CurrencyOffersOverview : UYWidget {
	FMulticastInlineDelegate OnGoToFounderPacksOffers; // 0x2c0
	UYWidget_OfferListContainer* m_currencyListContainer; // 0x2d0
	TArray<FDataTableRowHandle> m_dummyCurrencyOffers; // 0x2d8
};

struct UYWidget_Inventory_Base : UYWidget {
	FMulticastInlineDelegate OnInventoryScreenOpened; // 0x2c0
	FMulticastInlineDelegate OnInventoryScreenClosed; // 0x2d0
	FMulticastInlineDelegate OnMoveItemToSlotDelegate; // 0x2e0
	bool m_isCustomInitialized; // 0x2f0
};

struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
};

struct UVehiclePlate_WBP_C : UYWidget_ActorPlate {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8
	UCanvasPanel* CanvasPanel_2; // 0x3b0
	UYTextBlock* TextBlock_Name; // 0x3b8
	UWBP_HealthBar_HUD_Item_C* UI_HealthBarWithDelta_WBP; // 0x3c0
};

struct UBTDecorator_DistanceToTarget_C : UBTDecorator_BlueprintBase {
	FBlackboardKeySelector combatTarget; // 0xa0
	float MaxDistance; // 0xc8
};

struct UYVehicleMovementComponent : UCharacterMovementComponent {
	FRotator m_cachedVehicleHeightAlignmentData; // 0xb20
};

struct UShapeComponent : UPrimitiveComponent {
	UBodySetup* ShapeBodySetup; // 0x440
	UNavAreaBase* AreaClass; // 0x448
	FColor ShapeColor; // 0x450
	char bDrawOnlyIfSelected : 1; // 0x454
	char bShouldCollideWhenPlacing : 1; // 0x454
	char bDynamicObstacle : 1; // 0x454
};

struct AYPlayerStart : APlayerStart {
	USkeletalMeshComponent* visualizerMesh; // 0x270
};

struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	AActor* SourceLandscape; // 0x38
};

struct UMovieSceneEnumSection : UMovieSceneSection {
	FMovieSceneByteChannel EnumCurve; // 0xe8
};

struct ASkeletalMeshActor : AActor {
	char bShouldDoAnimNotifies : 1; // 0x248
	char bWakeOnLevelStart : 1; // 0x248
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x250
	USkeletalMesh* ReplicatedMesh; // 0x258
	UPhysicsAsset* ReplicatedPhysAsset; // 0x260
	UMaterialInterface* ReplicatedMaterial0; // 0x268
	UMaterialInterface* ReplicatedMaterial1; // 0x270
};

struct UClothLODDataCommon_Legacy : UObject {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct UYRewardsRollManagerComponent : UActorComponent {
	TArray<FYRewardDropTableEntry> m_staticRewards; // 0xb0
	TArray<FYLeadboardPlacementRewardDropTableEntry> m_leaderboardPlacementRewards; // 0xc0
	UDataTable* m_evacuationBonusDataTable; // 0xd0
	UDataTable* m_diedBonusTable; // 0xd8
	UDataTable* m_matchPlayedBonusDataTable; // 0xe0
	UDataTable* m_leaderboardPlacementRewardDataTable; // 0xe8
};

struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct UTreeView : UListView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UInputBehaviorSet : UObject {
	TArray<FBehaviorInfo> Behaviors; // 0x28
};

struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct UVehicleWheel : UObject {
	UStaticMesh* CollisionMesh; // 0x28
	bool bDontCreateShape; // 0x30
	bool bAutoAdjustCollisionSize; // 0x31
	FVector Offset; // 0x34
	float ShapeRadius; // 0x40
	float ShapeWidth; // 0x44
	float Mass; // 0x48
	float DampingRate; // 0x4c
	float SteerAngle; // 0x50
	bool bAffectedByHandbrake; // 0x54
	UTireType* TireType; // 0x58
	UTireConfig* TireConfig; // 0x60
	float LatStiffMaxLoad; // 0x68
	float LatStiffValue; // 0x6c
	float LongStiffValue; // 0x70
	float SuspensionForceOffset; // 0x74
	float SuspensionMaxRaise; // 0x78
	float SuspensionMaxDrop; // 0x7c
	float SuspensionNaturalFrequency; // 0x80
	float SuspensionDampingRatio; // 0x84
	EWheelSweepType SweepType; // 0x88
	float MaxBrakeTorque; // 0x8c
	float MaxHandBrakeTorque; // 0x90
	UWheeledVehicleMovementComponent* VehicleSim; // 0x98
	int32_t WheelIndex; // 0xa0
	float DebugLongSlip; // 0xa4
	float DebugLatSlip; // 0xa8
	float DebugNormalizedTireLoad; // 0xac
	float DebugWheelTorque; // 0xb4
	float DebugLongForce; // 0xb8
	float DebugLatForce; // 0xbc
	FVector Location; // 0xc0
	FVector OldLocation; // 0xcc
	FVector Velocity; // 0xd8
};

struct UWBP_Notification_Center_HUD_C : UUserWidget {
	UWidgetAnimation* WidgetIn_Anim; // 0x260
	UImage* Gfx_Backer; // 0x268
	URichTextBlock* RichTxt_Headline; // 0x270
};

struct UYEnvQueryTest_TraceMaterial : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderFloatValue ItemHeightOffset; // 0x228
	UEnvQueryContext* Context; // 0x260
	TArray<EPhysicalSurface> AllowedSurfaceTypes; // 0x268
	FAIDataProviderFloatValue TraceStartOffset; // 0x278
	FAIDataProviderFloatValue TraceEndOffset; // 0x2b0
};

struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38
	bool bRequireCurrentFrameData; // 0x3c
};

struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UYWidget_ModSelection : UYWidget {
	FMulticastInlineDelegate OnSelectionClosed; // 0x2c0
	UYWidget_ItemsOverview* m_itemsOverviewWidget; // 0x2d0
	UYWidgetController_ItemsOverviewMods* m_itemsOverviewWidgetController; // 0x2d8
	UYWidget_ItemActionsPanel* m_itemActionsPanel; // 0x2e0
	URichTextBlock* m_headlineText; // 0x2e8
	UYWidget_ItemContainer* m_itemContainerToMod; // 0x2f8
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40
};

struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	FGuid EvaluationFieldGuid; // 0x58
	FMovieSceneTrackEvaluationField EvaluationField; // 0x68
};

struct UNiagaraComponentSettings : UObject {
	TSet<FName> SuppressActivationList; // 0x28
	TSet<FName> ForceAutoPooolingList; // 0x78
	TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8
};

struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	char bDisablePartialParticleUpdate : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct UYInputKeySelector : UInputKeySelector {
	FButtonStyle m_conflictingInputButtonStyle; // 0x738
};

struct UYShopManager : UObject {
	FMulticastInlineDelegate PlayfabShopItemPurchaseCompleted; // 0x40
	FMulticastInlineDelegate PlayfabCouponRedeemed; // 0x50
	FMulticastInlineDelegate OnPlayFabStoresFetched; // 0x60
	FMulticastInlineDelegate OnPlayFabCouponRedeemed; // 0x70
	FMulticastInlineDelegate CurrenciesAdded; // 0x80
	FMulticastInlineDelegate CustomItemsUpdated; // 0x90
	TMap<FString, FYPlayfabStoreItemsResult> m_cachedStoresMap; // 0xa0
};

struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct UMapMarker_DebugActivityLocation_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* Warning; // 0x2e8
	UCanvasPanel* CanvasPanel_Root; // 0x2f0
	UImage* Image_Circle; // 0x2f8
	UImage* Image_Icon; // 0x300
	UTextBlock* TextBlock_DebugDescription; // 0x308
	AYActivityLocation* ActivityLocationOwner; // 0x310
	UYDebugActivityLocationMapMarkerData_BP_C* DebugLocationData; // 0x318
	float LinkRadiusUUToUISize; // 0x320
};

struct UMaterialExpressionReflectionCapturePassSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Reflection; // 0x54
};

struct UYActorPoolingManager : UObject {
	TArray<FYPooledActorEntry> m_pooledActors; // 0x28
};

struct UAnimSharingInstance : UObject {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
};

struct UYWidget_DamageNumber : UYWidget {
	UTextBlock* m_damageText; // 0x2c0
	UImage* m_damageIcon; // 0x2c8
	FSlateColor m_dbnoColor; // 0x2d0
	FSlateColor m_headshotColor; // 0x2f8
	FSlateColor m_normalColor; // 0x320
	FSlateColor m_shieldDamage; // 0x348
	FSlateColor m_healColor; // 0x370
	FSlateColor m_xpColor; // 0x398
	FVector2D m_damageNumberScale; // 0x3c0
	FVector2D m_headshotDamageNumberScale; // 0x3c8
	float m_duration; // 0x3d0
	float m_xpDuration; // 0x3d4
	float m_distanceLocation; // 0x3d8
	bool m_isHeadshot; // 0x3dc
	FVector2D m_xpScale; // 0x3e0
	UCanvasPanelSlot* m_canvasPanel; // 0x400
	bool m_animateLeft; // 0x408
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
};

struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x100
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
	ENiagaraGpuBufferFormat BufferFormat; // 0x128
};

struct AYAbilityActor : AActor {
	FDataTableRowHandle m_spawnedRowHandle; // 0x248
};

struct UYInventoryManager : UObject {
	TMap<FString, UYBackendInventoryModel*> m_playerModels; // 0x28
	TMap<FString, int32_t> m_pendingCompleteInventoryUpdates; // 0x78
	FMulticastInlineDelegate updatedFactionProgression; // 0xc8
	FMulticastInlineDelegate CurrenciesUpdated; // 0xd8
	FMulticastInlineDelegate OnItemSuccessfullyScrapped; // 0xe8
	FMulticastInlineDelegate OnItemRepaired; // 0xf8
	bool m_rawInventoryDataReceived; // 0x108
	bool m_rawPlayerSetDataReceived; // 0x109
	FYInventory m_rawInventoryData; // 0x110
	FYPlayerSet m_rawPlayerSetData; // 0x170
};

struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4d0
};

struct UWBP_AimAssistDebugUI_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* text_AutoAimAngleCoeff; // 0x268
	UTextBlock* text_AutoAimAngleCoeff_2; // 0x270
	UTextBlock* text_AutoAimAngleCoeff_3; // 0x278
	UTextBlock* text_AutoAimAngleCoeff_4; // 0x280
	UTextBlock* text_AutoAimAngleCoeff_5; // 0x288
	UTextBlock* text_AutoAimAngleCoeff_6; // 0x290
	UTextBlock* text_AutoAimAngleCoeff_7; // 0x298
	UTextBlock* text_AutoAimAngleCoeff_8; // 0x2a0
	UTextBlock* text_AutoAimAngleCoeff_9; // 0x2a8
	UTextBlock* text_AutoAimAngleCoeff_10; // 0x2b0
	UTextBlock* text_AutoAimAngleCoeff_11; // 0x2b8
	UTextBlock* text_AutoAimAngleCoeff_12; // 0x2c0
	UTextBlock* text_AutoAimAngleCoeff_13; // 0x2c8
	UTextBlock* text_AutoAimAngleCoeff_14; // 0x2d0
	UTextBlock* text_AutoAimAngleCoeff_15; // 0x2d8
	UTextBlock* text_AutoAimAngleCoeff_16; // 0x2e0
	UTextBlock* text_AutoAimAngleCoeff_17; // 0x2e8
	UTextBlock* text_AutoAimAngleCoeff_18; // 0x2f0
	UTextBlock* text_AutoAimAngleCoeff_19; // 0x2f8
	UTextBlock* text_AutoAimAngleCoeff_20; // 0x300
	UTextBlock* text_AutoAimAngleCoeff_21; // 0x308
	UTextBlock* text_AutoAimAngleCoeff_22; // 0x310
	UTextBlock* text_AutoAimAngleCoeff_23; // 0x318
	UTextBlock* text_AutoAimAngleCoeff_24; // 0x320
	UTextBlock* TextBlock; // 0x328
	UTextBlock* TextBlock_2; // 0x330
	UTextBlock* TextBlock_3; // 0x338
	UTextBlock* TextBlock_4; // 0x340
	UTextBlock* TextBlock_5; // 0x348
	UTextBlock* TextBlock_6; // 0x350
	UTextBlock* TextBlock_7; // 0x358
	UTextBlock* TextBlock_8; // 0x360
	UTextBlock* TextBlock_12; // 0x368
	UTextBlock* TextBlock_13; // 0x370
	UTextBlock* TextBlock_14; // 0x378
	UTextBlock* TextBlock_377; // 0x380
	UBP_AimAssist_C* AimAssist; // 0x388
};

struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	USpectatorBeaconState* State; // 0x268
	bool bLogoutOnSessionTimeout; // 0x2d0
	float SessionTimeoutSecs; // 0x2d4
	float TravelSessionTimeoutSecs; // 0x2d8
};

struct UYBTService_EvaluateMeleeAttacks : UBTService {
	FBlackboardKeySelector m_keyCombatTarget; // 0xc0
	FBlackboardKeySelector m_keyMeleeAttack; // 0xe8
	FBlackboardKeySelector m_keyIsInComboWindow; // 0x110
	FBlackboardKeySelector m_keyAttackOutAnimMontage; // 0x138
	UAnimMontage* m_cachedAttackMontage; // 0x160
};

struct UPlayMontageCallbackProxy : UObject {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
};

struct UYWidget_Ammo : UYWidget {
	UTextBlock* m_ammoText; // 0x2c0
	UTextBlock* m_activeWeaponText; // 0x2c8
	UTextBlock* m_activeWeaponRow; // 0x2d0
	FText m_ammoString; // 0x2d8
	UYWeaponPlayerControllerRuntimeComponent* m_weaponControllerRuntimeComponent; // 0x2f0
};

struct UMaterialExpressionReroute : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleRequired : UParticleModule {
	UMaterialInterface* Material; // 0x30
	float MinFacingCameraBlendDistance; // 0x38
	float MaxFacingCameraBlendDistance; // 0x3c
	FVector EmitterOrigin; // 0x40
	FRotator EmitterRotation; // 0x4c
	EParticleScreenAlignment ScreenAlignment; // 0x58
	char bUseLocalSpace : 1; // 0x59
	char bKillOnDeactivate : 1; // 0x59
	char bKillOnCompleted : 1; // 0x59
	EParticleSortMode SortMode; // 0x5a
	char bUseLegacyEmitterTime : 1; // 0x5b
	char bRemoveHMDRoll : 1; // 0x5b
	char bEmitterDurationUseRange : 1; // 0x5b
	float EmitterDuration; // 0x5c
	FRawDistributionFloat SpawnRate; // 0x60
	TArray<FParticleBurst> BurstList; // 0x90
	float EmitterDelay; // 0xa0
	float EmitterDelayLow; // 0xa4
	char bDelayFirstLoopOnly : 1; // 0xa8
	EParticleSubUVInterpMethod InterpolationMethod; // 0xa9
	char bScaleUV : 1; // 0xaa
	char bEmitterDelayUseRange : 1; // 0xaa
	EParticleBurstMethod ParticleBurstMethod; // 0xab
	char bOverrideSystemMacroUV : 1; // 0xac
	char bUseMaxDrawCount : 1; // 0xac
	EOpacitySourceMode OpacitySourceMode; // 0xad
	EEmitterNormalsMode EmitterNormalsMode; // 0xae
	char bOrbitModuleAffectsVelocityAlignment : 1; // 0xaf
	int32_t SubImages_Horizontal; // 0xb0
	int32_t SubImages_Vertical; // 0xb4
	float RandomImageTime; // 0xb8
	int32_t RandomImageChanges; // 0xbc
	FVector MacroUVPosition; // 0xc0
	float MacroUVRadius; // 0xcc
	EParticleUVFlipMode UVFlippingMode; // 0xd0
	ESubUVBoundingVertexCount BoundingMode; // 0xd1
	char bDurationRecalcEachLoop : 1; // 0xd2
	FVector NormalsSphereCenter; // 0xd4
	float AlphaThreshold; // 0xe0
	int32_t EmitterLoops; // 0xe4
	UTexture2D* CutoutTexture; // 0xe8
	int32_t MaxDrawCount; // 0xf0
	float EmitterDurationLow; // 0xf4
	FVector NormalsCylinderDirection; // 0xf8
	TArray<FName> NamedMaterialOverrides; // 0x108
};

struct UTextBlock : UTextLayoutWidget {
	FText Text; // 0x128
	FDelegate TextDelegate; // 0x140
	FSlateColor ColorAndOpacity; // 0x150
	FDelegate ColorAndOpacityDelegate; // 0x178
	FSlateFontInfo Font; // 0x188
	FSlateBrush StrikeBrush; // 0x1e0
	FVector2D ShadowOffset; // 0x268
	FLinearColor ShadowColorAndOpacity; // 0x270
	FDelegate ShadowColorAndOpacityDelegate; // 0x280
	float MinDesiredWidth; // 0x290
	bool bWrapWithInvalidationPanel; // 0x294
	bool bAutoWrapText; // 0x295
	ETextTransformPolicy TextTransformPolicy; // 0x296
	bool bSimpleTextMode; // 0x297
};

struct UYWidget_OfferListContainer : UYWidget {
	TArray<TSoftClassPtr<UObject>> m_offerOverviewLayouts; // 0x2d8
	UWidgetSwitcher* m_layoutWidgetSwitcher; // 0x2e8
	UUserWidget* m_currentLayoutUserWidget; // 0x2f8
	TArray<UYWidget_ItemContainer*> m_itemContainers; // 0x300
};

struct UYControllerContractsBoardsDataComponent_BP_C : UYControllerContractsBoardsDataComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x130
};

struct USettingsMenu_SBP_C : UYScreenBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
};

struct ABrush : AActor {
	EBrushType BrushType; // 0x240
	FColor BrushColor; // 0x244
	int32_t PolyFlags; // 0x248
	char bColored : 1; // 0x24c
	char bSolidWhenSelected : 1; // 0x24c
	char bPlaceableFromClassBrowser : 1; // 0x24c
	char bNotForClientOrServer : 1; // 0x24c
	UModel* Brush; // 0x250
	UBrushComponent* BrushComponent; // 0x258
	char bInManipulation : 1; // 0x260
	TArray<FGeomSelection> SavedSelections; // 0x268
};

struct UYPlayerBIDataComponent : UActorComponent {
	bool m_haveUsedVehicleOnce; // 0xb0
	float m_timeStampLastTimeLevel; // 0xb8
	int32_t m_localCacheMountID; // 0xbc
};

struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct UYWeaponPlayerControllerRuntimeComponent : UActorComponent {
	int32_t m_ammoInClip; // 0xc0
	int32_t m_ammoConsumptionPendingInPercent; // 0xc4
	FName m_ammoTypeID; // 0xc8
	int32_t m_activeWeaponIndex; // 0xec
	FYStoredRuntimeWeaponInformation m_activeWeaponStoredInformation; // 0x110
	FYStoredModData m_weaponModsData; // 0x1f0
	FVector2D m_recoilToUndo; // 0x260
	bool m_isCameraFollowingRecoil; // 0x269
	FMulticastInlineDelegate OnActiveWeaponChanged; // 0x270
	FMulticastInlineDelegate OnAmmoChanged; // 0x280
	FMulticastInlineDelegate OnHealSelfAvaliable; // 0x290
	FMulticastInlineDelegate OnStoredModsChanged; // 0x2a0
	FMulticastInlineDelegate OnSpinupPercentChanged; // 0x2b0
	FMulticastInlineDelegate OnWeaponFired; // 0x2c0
	FMulticastInlineDelegate OnWeaponCantBeFired; // 0x2d0
	FMulticastInlineDelegate OnWeaponRefireCooldownTimeChanged; // 0x2e0
	FMulticastInlineDelegate OnWeaponRefireCooldownTimeFinished; // 0x2f0
	FMulticastInlineDelegate BP_OnSelectedToolChanged; // 0x300
	FMulticastInlineDelegate BP_OnSelectedConsumableChanged; // 0x310
	FYInventoryItem m_selectedToolItem; // 0x320
	FYInventoryItem m_selectedConsumableItem; // 0x3b8
	int32_t m_weaponTransportHandle; // 0x490
	UYPlayerCharacterStateComponent* m_characterStateComponent; // 0x4b0
	UYPlayerCharacterWeaponComponent* m_characterWeaponComponent; // 0x4b8
	UYPlayerMovementComponent* m_characterMovementComponent; // 0x4c0
	UYControllerStateInputComponent* m_controllerInputStateComponent; // 0x4c8
	UYStaminaComponent* m_characterStaminaComponent; // 0x4d0
	UYMeleeAttackComponent* m_characterMeleeComponent; // 0x4d8
	UYControllerInventoryAbilityComponent* m_controllerAbilityComponent; // 0x4e0
	FMulticastInlineDelegate OnFinishedTargetingDelegate; // 0x4e8
	FMulticastInlineDelegate OnMeleeLightAttackEvent; // 0x4f8
	FMulticastInlineDelegate OnMeleeHeavyAttackEvent; // 0x508
	FHitResult m_aimingAtHitResult; // 0x51c
	FVector m_shootingDirection; // 0x5ac
	UYGameplayAttributesComponent* m_characterGPAComponent; // 0x5c8
	UYPerkComponent* m_characterPerkComponent; // 0x5d0
	UYScriptableWeaponComponent* m_scriptableComponent; // 0x5d8
	bool m_locallyWeaponTransportHandleUsed; // 0x614
	float m_maxFovConsideredAsScoped; // 0x618
	float m_adsSensitivityMultiplierScaling; // 0x61c
	float m_scopedSensitivityMultiplierScaling; // 0x620
	float m_minTimeIntervalAllowedBetweenFireRPCS; // 0x624
	float m_lastTimeWeaponFiredRPCValidation; // 0x628
};

struct UYWidgetView_StationHUD : UYWidgetView {
	UCanvasPanel* m_popUpCanvasPanel; // 0x338
};

struct UARPin : UObject {
	UARTrackedGeometry* TrackedGeometry; // 0x28
	USceneComponent* PinnedComponent; // 0x30
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0
	FMulticastInlineDelegate OnARTransformUpdated; // 0xd0
};

struct AYPlayersMapDataManager : AActor {
	TArray<UYControllerPlayerMapMarkerComponent*> m_controllerMarkerComponentsQueue; // 0x240
	TArray<FYSurveillanceNode> m_allSurveillanceActors; // 0x250
	TArray<UYMapMarkerData*> m_replicatedMarkersData; // 0x270
	TArray<UYMapMarkerData*> m_clientMarkersData; // 0x280
};

struct UMapMarker_Escape_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* EvacDisabled_Anim; // 0x2e8
	UWidgetAnimation* Warning_Anim; // 0x2f0
	UYTextBlock* CountdownText; // 0x2f8
	UImage* m_iconImage; // 0x300
	UTextBlock* Txt_StormWarning; // 0x308
	EYMapMarkerState IconState; // 0x310
	UBP_EscapeMarkerData_C* MarkerDataEscape; // 0x318
	FName MatchPhase; // 0x320
};

struct UMaterialExpressionMakeMaterialAttributes : UMaterialExpression {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Metallic; // 0x54
	FExpressionInput Specular; // 0x68
	FExpressionInput Roughness; // 0x7c
	FExpressionInput Anisotropy; // 0x90
	FExpressionInput EmissiveColor; // 0xa4
	FExpressionInput Opacity; // 0xb8
	FExpressionInput OpacityMask; // 0xcc
	FExpressionInput Normal; // 0xe0
	FExpressionInput Tangent; // 0xf4
	FExpressionInput WorldPositionOffset; // 0x108
	FExpressionInput WorldDisplacement; // 0x11c
	FExpressionInput TessellationMultiplier; // 0x130
	FExpressionInput SubsurfaceColor; // 0x144
	FExpressionInput ClearCoat; // 0x158
	FExpressionInput ClearCoatRoughness; // 0x16c
	FExpressionInput AmbientOcclusion; // 0x180
	FExpressionInput Refraction; // 0x194
	FExpressionInput CustomizedUVs[0x8]; // 0x1a8
	FExpressionInput PixelDepthOffset; // 0x248
	FExpressionInput ShadingModel; // 0x25c
};

struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct UWBP_Station_HUD_C : UYWidgetView_StationHUD {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* ScreenIn_Anim; // 0x348
	UImage* Gfx_Gradient; // 0x350
	UVerticalBox* LeftInfoPanels; // 0x358
	UCanvasPanel* MainCanvas; // 0x360
	UCanvasPanel* MiniMap; // 0x368
	UNotificationsManager_WBP_C* NotificationsManager_WBP; // 0x370
	UUI_RadialStationMinimap_WBP_C* UI_RadialStationMinimap_WBP; // 0x378
	UWBP_Rewards_Popup_C* UI_RewardsPopup_WBP; // 0x380
	UWBP_Chat_C* WBP_Chat; // 0x388
	UWBP_Contracts_Active_C* WBP_Contracts_Active; // 0x390
	UWBP_Currency_Btn_C* WBP_Currency_Btn_Hard; // 0x398
	UWBP_Currency_Btn_C* WBP_Currency_Btn_Soft; // 0x3a0
	UWBP_FPS_Counter_HUD_Panel_C* WBP_FPS_Counter_HUD_Panel; // 0x3a8
	UWBP_Friends_MiniWidget_C* WBP_Friends_MiniWidget; // 0x3b0
	UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x3b8
	UWBP_FTUE_NextStep_Widget_C* WBP_MissionMiniWidget; // 0x3c0
	UWBP_Notification_Center_HUD_C* WBP_Notification_Center_HUD; // 0x3c8
	UWBP_Notification_Panel_C* WBP_Notification_Panel; // 0x3d0
	UWBP_PlayerQuartersLevel_C* WBP_PlayerQuartersLevel; // 0x3d8
	UWBP_RadialSelection_Panel_C* WBP_RadialSelection_Panel; // 0x3e0
	UWBP_SocialOverview_C* WBP_SocialOverview; // 0x3e8
	UWBP_Subtitles_C* WBP_Subtitles; // 0x3f0
	bool IsContractWidgetShown; // 0x3f8
	bool ShouldShowContractWidget; // 0x3f9
	bool IsContractWidgetManuallyOpened; // 0x3fa
	float ContractsPanelOnScreenDuration; // 0x3fc
};

struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UWBP_Headline_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UNamedSlot* TextSlot; // 0x2c8
	FText HeadlineLabel; // 0x2d0
};

struct UMovieSceneIntegerSection : UMovieSceneSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe8
};

struct UYEncumbranceEffects_DataAsset : UDataAsset {
	UCurveFloat* m_walkSpeedEffectCurve; // 0x30
	UCurveFloat* m_maxStaminaEffectCurve; // 0x38
	float m_disableSprintThreshold; // 0x40
	float m_disableSprintLedgeGrabThreshold; // 0x44
	float m_disableSprintWallRunThreshold; // 0x48
};

struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct AAL_Base_BP_C : AYActivityLocationLinked {
	FPointerToUberGraphFrame UberGraphFrame; // 0x448
	UBillboardComponent* BillboardEditor; // 0x450
	USceneComponent* Scene; // 0x458
};

struct UPlayerBotEvacuateTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UMaterialExpressionHairColor : UMaterialExpression {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
};

struct UBuoyancyComponent : UActorComponent {
	TArray<FSphericalPontoon> Pontoons; // 0xb0
	FMulticastInlineDelegate OnEnteredWaterDelegate; // 0xc0
	FMulticastInlineDelegate OnExitedWaterDelegate; // 0xd0
	FBuoyancyData BuoyancyData; // 0xe0
	TArray<AWaterBody*> CurrentWaterBodies; // 0x130
	UPrimitiveComponent* SimulatingComponent; // 0x140
};

struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
};

struct UWheeledVehicleMovementComponent : UPawnMovementComponent {
	char bDeprecatedSpringOffsetMode : 1; // 0x140
	char bReverseAsBrake : 1; // 0x140
	char bUseRVOAvoidance : 1; // 0x140
	char bRawHandbrakeInput : 1; // 0x140
	char bRawGearUpInput : 1; // 0x140
	char bRawGearDownInput : 1; // 0x140
	char bWasAvoidanceUpdated : 1; // 0x144
	float Mass; // 0x148
	TArray<FWheelSetup> WheelSetups; // 0x150
	float DragCoefficient; // 0x160
	float ChassisWidth; // 0x164
	float ChassisHeight; // 0x168
	float DragArea; // 0x16c
	float EstimatedMaxEngineSpeed; // 0x170
	float MaxEngineRPM; // 0x174
	float DebugDragMagnitude; // 0x178
	FVector InertiaTensorScale; // 0x17c
	float MinNormalizedTireLoad; // 0x188
	float MinNormalizedTireLoadFiltered; // 0x18c
	float MaxNormalizedTireLoad; // 0x190
	float MaxNormalizedTireLoadFiltered; // 0x194
	float ThresholdLongitudinalSpeed; // 0x198
	int32_t LowForwardSpeedSubStepCount; // 0x19c
	int32_t HighForwardSpeedSubStepCount; // 0x1a0
	TArray<UVehicleWheel*> Wheels; // 0x1a8
	float RVOAvoidanceRadius; // 0x1d0
	float RVOAvoidanceHeight; // 0x1d4
	float AvoidanceConsiderationRadius; // 0x1d8
	float RVOSteeringStep; // 0x1dc
	float RVOThrottleStep; // 0x1e0
	int32_t AvoidanceUID; // 0x1e4
	FNavAvoidanceMask AvoidanceGroup; // 0x1e8
	FNavAvoidanceMask GroupsToAvoid; // 0x1ec
	FNavAvoidanceMask GroupsToIgnore; // 0x1f0
	float AvoidanceWeight; // 0x1f4
	FVector PendingLaunchVelocity; // 0x1f8
	FReplicatedVehicleState ReplicatedState; // 0x204
	float RawSteeringInput; // 0x21c
	float RawThrottleInput; // 0x220
	float RawBrakeInput; // 0x224
	float SteeringInput; // 0x228
	float ThrottleInput; // 0x22c
	float BrakeInput; // 0x230
	float HandbrakeInput; // 0x234
	float IdleBrakeInput; // 0x238
	float StopThreshold; // 0x23c
	float WrongDirectionThreshold; // 0x240
	FVehicleInputRate ThrottleInputRate; // 0x244
	FVehicleInputRate BrakeInputRate; // 0x24c
	FVehicleInputRate HandbrakeInputRate; // 0x254
	FVehicleInputRate SteeringInputRate; // 0x25c
	AController* OverrideController; // 0x288
};

struct UStrider_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_PowerIK_Ground AnimGraphNode_PowerIK_Ground; // 0x2f8
	FAnimNode_LookAt AnimGraphNode_LookAt; // 0x690
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x840
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x860
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x880
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x8a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x948
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0xaa0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0xac8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xaf0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0xb10
	FAnimNode_Slot AnimGraphNode_Slot; // 0xbb0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xbf8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0xd50
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0xdf0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xe08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xe28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0xe50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0xe78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xea0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xec8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xef0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xf18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0xf40
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0xfc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0xff0
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1070
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x10a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x1188
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1238
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1320
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1408
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1438
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x14e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1568
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x15e8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1618
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x16c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x16e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x17a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x17c8
	float Speed; // 0x1868
	float Direction; // 0x186c
	AYAICharacter* CharacterAIOwner; // 0x1870
	UAnimMontage* DeathMontage; // 0x1878
	FDataTableRowHandle TurnAnimationRow; // 0x1880
	char aiState; // 0x1890
	bool LookAtBool; // 0x1891
	FVector LookAtTarget; // 0x1894
	bool Is Dedicated Server; // 0x18a0
	float LookAtDistance; // 0x18a4
	FName PhysBaseBone; // 0x18a8
};

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
};

struct UMovieSceneControlRigParameterSection : UMovieSceneParameterSection {
	UControlRig* ControlRig; // 0x148
	TArray<bool> ControlsMask; // 0x150
	FMovieSceneTransformMask TransformMask; // 0x160
	bool bAdditive; // 0x164
	bool bApplyBoneFilter; // 0x165
	FInputBlendPose BoneFilter; // 0x168
	FMovieSceneFloatChannel weight; // 0x178
	TMap<FName, FChannelMapInfo> ControlChannelMap; // 0x218
	TArray<FEnumParameterNameAndCurve> EnumParameterNamesAndCurves; // 0x268
	TArray<FIntegerParameterNameAndCurve> IntegerParameterNamesAndCurves; // 0x278
};

struct UParticleModuleTrailSource : UParticleModuleTrailBase {
	ETrail2SourceMethod SourceMethod; // 0x30
	FName SourceName; // 0x34
	FRawDistributionFloat SourceStrength; // 0x40
	char bLockSourceStength : 1; // 0x70
	int32_t SourceOffsetCount; // 0x74
	TArray<FVector> SourceOffsetDefaults; // 0x78
	EParticleSourceSelectionMethod SelectionMethod; // 0x88
	char bInheritRotation : 1; // 0x8c
};

struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa40
};

struct UGraphNodeContextMenuContext : UObject {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UYGameStateSessionComponent : UActorComponent {
	FMulticastInlineDelegate OnSessionStateChangedDelegate; // 0xb0
	TArray<EYSessionEventType> m_completedStates; // 0xc0
	uint64_t m_startUtcTime; // 0xd0
	uint64_t m_lastTimeUserConnectedUtcTime; // 0xd8
	float m_logSendInterval; // 0xe0
};

struct AGameMode : AGameModeBase {
	FName matchState; // 0x2e0
	char bDelayedStart : 1; // 0x2e8
	int32_t NumSpectators; // 0x2ec
	int32_t numPlayers; // 0x2f0
	int32_t NumBots; // 0x2f4
	float MinRespawnDelay; // 0x2f8
	int32_t NumTravellingPlayers; // 0x2fc
	ULocalMessage* EngineMessageClass; // 0x300
	TArray<APlayerState*> InactivePlayerArray; // 0x308
	float InactivePlayerStateLifeSpan; // 0x318
	int32_t MaxInactivePlayers; // 0x31c
	bool bHandleDedicatedServerReplays; // 0x320
};

struct UYWidget_ItemActionsPanel : UYWidget {
	bool m_chooseEquipSlot; // 0x300
	bool m_equipOnDoubleClick; // 0x301
	bool m_craftOnDoubleClick; // 0x302
	bool m_goToDetailsOnDoubleClick; // 0x303
	bool m_concealSelectedItemName; // 0x304
	TArray<EYItemActionType> m_availableItemActions; // 0x308
	UYWidget_ItemContainer* m_selectedItemWidget; // 0x318
	UYWidget_ItemContainer* m_offerItemWidget; // 0x320
	UWidgetSwitcher* m_informationPanelsWidgetSwitcher; // 0x328
	UWidget* m_emptyWidgetSwitcherElement; // 0x330
	UWidget* m_selectItemWidgetSwitcherElement; // 0x338
	UWidget* m_itemNameWidgetSwitcherElement; // 0x340
	UWidget* m_itemNameAndCraftingPriceWidgetSwitcherElement; // 0x348
	UWidget* m_craftingInProgressWidgetSwitcherElement; // 0x350
	UWidget* m_craftingFinishedWidgetSwitcherElement; // 0x358
	UWidget* m_offerPurchaseWidgetSwitcherElement; // 0x360
	FDataTableRowHandle m_audioEquipItem; // 0x368
	FDataTableRowHandle m_audioSetMod; // 0x378
	FDataTableRowHandle m_audioClearMod; // 0x388
	FDataTableRowHandle m_audioCraftingInProgress; // 0x398
	FDataTableRowHandle m_audioCraftingCanceled; // 0x3a8
	FDataTableRowHandle m_audioCraftingFinished; // 0x3b8
	UAudioComponent* m_audioComponentCraftingInProgress; // 0x3d0
	TMap<EYItemActionType, UYWidget_ItemActionButton*> m_itemActionButtons; // 0x3d8
};

struct UControlRigValidator : UObject {
	TArray<UControlRigValidationPass*> Passes; // 0x28
};

struct UBTTask_HandleResetFailure_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FBlackboardKeySelector KeyHomeLocation; // 0xb0
	UYPathFollowingComponent* PathFollowingComponent; // 0xd8
	APawn* ControlledPawn; // 0xe0
	AAIController* Controller; // 0xe8
	FString SquadString; // 0xf0
	FString MontageString; // 0x100
	bool CanPathfindToHomeLoc; // 0x110
};

struct UWBP_Friends_MiniWidget_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* SquadActive_Anim; // 0x2c8
	UWidgetAnimation* FadeIn; // 0x2d0
	UImage* Gfx_Background; // 0x2d8
	UWBP_SocialToggle_C* OutpostSocialToggle_WBP; // 0x2e0
	UWBP_SquadOverview_C* OutpostSquadToggle_WBP; // 0x2e8
	UOverlay* squad; // 0x2f0
	UOverlay* SquadBacker; // 0x2f8
	UWBP_Dummy_Btn_C* WBP_Dummy_Btn; // 0x300
	UWBP_InputKey_C* WBP_InputKey; // 0x308
	UWBP_SquadStatus_C* WBP_SquadStatus; // 0x310
	FText headline; // 0x318
	FMulticastInlineDelegate WidgetClicked; // 0x330
};

struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
};

struct UPrefabricatorConstructionSnapComponent : UBoxComponent {
	EPrefabricatorConstructionSnapType SnapType; // 0x468
	FPCSnapConstraintFloor FloorConstraint; // 0x469
	FPCSnapConstraintWall WallConstraint; // 0x46f
	bool bAlignToGroundSlope; // 0x473
	bool bUseMaxGroundSlopeConstraint; // 0x474
	float MaxGroundPlacementSlope; // 0x478
};

struct UConstructionSystemItemUserData : UAssetUserData {
	int32_t Seed; // 0x28
};

struct UYWidget_CommWheelItem : UYWidget {
	FDataTableRowHandle m_selectionWheelDataTableRowHandle; // 0x2c0
	FMulticastInlineDelegate OnMouseHoverStateChanged; // 0x2d0
	FMulticastInlineDelegate OnIconTexture; // 0x2e0
	int32_t m_wheelEntryID; // 0x2f0
	EYVanityType m_vanityType; // 0x2f4
	TSoftObjectPtr<UTexture2D> m_cachedWheelTexture; // 0x2f8
	bool m_useUpperCaseName; // 0x320
	EYPlayerSetType m_consumableSlot; // 0x321
};

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	UVolumeTexture* Texture; // 0x38
};

struct UYVivoxComponent : UActorComponent {
	FMulticastInlineDelegate OnMicrophoneInputEnergyChangedDelegate; // 0x100
	FMulticastInlineDelegate OnRefreshCurrentActiveChannels; // 0x110
	int32_t m_reconnectAttemptsCounter; // 0x130
};

struct UGameNetworkManagerSettings : UObject {
	int32_t MinDynamicBandwidth; // 0x28
	int32_t MaxDynamicBandwidth; // 0x2c
	int32_t TotalNetBandwidth; // 0x30
	int32_t BadPingThreshold; // 0x34
	char bIsStandbyCheckingEnabled : 1; // 0x38
	float StandbyRxCheatTime; // 0x3c
	float StandbyTxCheatTime; // 0x40
	float PercentMissingForRxStandby; // 0x44
	float PercentMissingForTxStandby; // 0x48
	float PercentForBadPing; // 0x4c
	float JoinInProgressStandbyWaitTime; // 0x50
};

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct UYWidget_MenuTestScreen2Widget : UYWidget {
	UButton* m_openScreenButton; // 0x2c0
	UButton* m_closeScreenButton; // 0x2c8
};

struct AYPickup_Ammo_BP_C : AYPickup_Base_BP_C {
	bool IsDisabled; // 0x48c
};

struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x80
	ENiagaraRendererSourceDataMode SourceMode; // 0x88
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x90
	ENiagaraSpriteAlignment Alignment; // 0xb0
	ENiagaraSpriteFacingMode FacingMode; // 0xb1
	FVector2D PivotInUVSpace; // 0xb4
	ENiagaraSortMode SortMode; // 0xbc
	FVector2D SubImageSize; // 0xc0
	char bSubImageBlend : 1; // 0xc8
	char bRemoveHMDRollInVR : 1; // 0xc8
	char bSortOnlyWhenTranslucent : 1; // 0xc8
	char bGpuLowLatencyTranslucency : 1; // 0xc8
	float MinFacingCameraBlendDistance; // 0xcc
	float MaxFacingCameraBlendDistance; // 0xd0
	char bEnableCameraDistanceCulling : 1; // 0xd4
	float MinCameraDistance; // 0xd8
	float MaxCameraDistance; // 0xdc
	uint32_t RendererVisibility; // 0xe0
	FNiagaraVariableAttributeBinding PositionBinding; // 0xe8
	FNiagaraVariableAttributeBinding ColorBinding; // 0x140
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x198
	FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1f0
	FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x248
	FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x2a0
	FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x2f8
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x350
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3a8
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x400
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x458
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4b0
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x508
	FNiagaraVariableAttributeBinding UVScaleBinding; // 0x560
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x5b8
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x610
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x668
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x6c0
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x718
};

struct UYObjectCustomizationRotationComponent : UActorComponent {
	TArray<FYRotationObjectEntry> m_sceneComponentsToRotate; // 0xb0
};

struct UYWidget_VanityCategoryListSelection : UYWidget_ItemContainer {
	EYVanityType m_activeCategory; // 0x580
	UPanelWidget* m_panel; // 0x588
	UYWidget_SimpleHeadline* m_headline; // 0x590
	UYWidget_ItemContainer* m_customizationEntryClass; // 0x598
	FMulticastInlineDelegate OnBackButtonClicked; // 0x5a0
	FMulticastInlineDelegate OnVanityItemClicked; // 0x5b0
	FMulticastInlineDelegate OnVanityItemHovered; // 0x5c0
	bool m_containEmptyItem; // 0x5d0
};

struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0
};

struct UAIHitReactionComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TMap<FName, float> BonePhysBlendTimeMap; // 0xb8
	UCurveFloat* PhysicsBlendOutCurve; // 0x108
	AYAICharacter* OwningChar; // 0x110
	FName Bone Name Hit; // 0x118
	FVector From Direction; // 0x120
	float PhysImpulseMultiplier; // 0x12c
	FVector PhysicsImpulse; // 0x130
	bool Allow Physics; // 0x13c
	TArray<FName> ExcludedBones; // 0x140
	FYDealtDamageData CurrentDamageData; // 0x150
};

struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x48
};

struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue CircleRadius; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	FAIDataProviderIntValue NumberOfPoints; // 0xf0
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x128
	FEnvDirection ArcDirection; // 0x130
	FAIDataProviderFloatValue ArcAngle; // 0x150
	float AngleRadians; // 0x188
	UEnvQueryContext* CircleCenter; // 0x190
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x198
	FAIDataProviderFloatValue CircleCenterZOffset; // 0x1a0
	FEnvTraceData TraceData; // 0x1d8
	char bDefineArc : 1; // 0x208
};

struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
};

struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct UYWidget_ItemComponentDragAndDropable : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnMouseButtonClicked; // 0x300
	FMulticastInlineDelegate OnMouseButtonReleased; // 0x310
	UImage* m_image; // 0x320
};

struct UYPlayerInteractionComponent : UActorComponent {
	UYPlayerCharacterStateComponent* m_cachedOwnerStateComponent; // 0xb0
	FMulticastInlineDelegate OnInteractionUpdate; // 0xb8
	FMulticastInlineDelegate OnInteractionDetected; // 0xc8
	FYPlayerInteraction m_currentInteraction; // 0xd8
	FYServerTracingData m_serverTracingData; // 0x110
	APlayerController* m_debugInfiniteInteractionPlayer; // 0x128
};

struct UYEditableTextBox : UEditableTextBox {
	FMulticastInlineDelegate OnTabPressed; // 0xa38
	FMulticastInlineDelegate OnShiftTabPressed; // 0xa48
	FMulticastInlineDelegate OnUpDownArrowPressed; // 0xa58
	bool m_upDownArrowInputEnabled; // 0xa68
	int32_t m_textLimit; // 0xa6c
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct UEnvQueryTest_InsideWaterBody : UEnvQueryTest {
	bool bIncludeWaves; // 0x1f8
	bool bSimpleWaves; // 0x1f9
	bool bIgnoreExclusionVolumes; // 0x1fa
};

struct UYWidget_ItemComponentTextAmount : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnComponentTextAmountUpdated; // 0x300
	int32_t m_amount; // 0x310
	bool m_useBackendData; // 0x314
	bool m_useMinThreshold; // 0x315
	int32_t m_minAmountThresholdToShowWidget; // 0x318
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct UMaterialExpressionMaterialAttributeLayers : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
	FMaterialAttributesInput Input; // 0x58
	FMaterialLayersFunctions DefaultLayers; // 0x70
	TArray<UMaterialExpressionMaterialFunctionCall*> LayerCallers; // 0xb0
	int32_t NumActiveLayerCallers; // 0xc0
	TArray<UMaterialExpressionMaterialFunctionCall*> BlendCallers; // 0xc8
	int32_t NumActiveBlendCallers; // 0xd8
	bool bIsLayerGraphBuilt; // 0xdc
};

struct AAIController : AController {
	char bStartAILogicOnPossess : 1; // 0x310
	char bStopAILogicOnUnposses : 1; // 0x310
	char bLOSflag : 1; // 0x310
	char bSkipExtraLOSChecks : 1; // 0x310
	char bAllowStrafe : 1; // 0x310
	char bWantsPlayerState : 1; // 0x310
	char bSetControlRotationFromPawnOrientation : 1; // 0x310
	UPathFollowingComponent* PathFollowingComponent; // 0x318
	UBrainComponent* BrainComponent; // 0x320
	UAIPerceptionComponent* PerceptionComponent; // 0x328
	UPawnActionsComponent* ActionsComp; // 0x330
	UBlackboardComponent* Blackboard; // 0x338
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x340
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x348
	FMulticastInlineDelegate ReceiveMoveCompleted; // 0x350
};

struct APaperSpriteActor : AActor {
	UPaperSpriteComponent* RenderComponent; // 0x240
};

struct AYAITurretController : AAIController {
	bool m_canTargetHumanPlayers; // 0x368
	bool m_canTargetOtherTurrets; // 0x369
	FMulticastInlineDelegate BP_OnAimTargetChanged; // 0x370
	FName m_aimAtCharacterSocketName; // 0x380
	FRotator m_initialAimRotation; // 0x388
	AYTurretPawn* m_controlledTurret; // 0x398
	UBehaviorTree* m_behaviorTree; // 0x3a0
	UAISenseConfig_Sight* m_sightConfig; // 0x3a8
	FYAimTargetInfo m_aimTargetInfo; // 0x3b0
	TArray<AActor*> m_seenEnemyActors; // 0x3c8
};

struct UConstructionSystemUIAsset : UDataAsset {
	FText MenuTitle; // 0x30
	TArray<FConstructionSystemUICategory> Categories; // 0x48
};

struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UYAIAnalyticsComponent : UActorComponent {
	TMap<FUniqueNetIdRepl, FYKilledAIAnalyticsEvents> m_killedAIEvents; // 0xb0
	TMap<AYAICharacter*, FYAICombatAnalyticsData> m_aiAnalyticsDataEnties; // 0x100
};

struct UInteractiveTool : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
};

struct UParticleSystem : UFXSystemAsset {
	bool m_isForcingParticleSystemComponentWorldScaleOfOne; // 0x30
	float UpdateTime_FPS; // 0x34
	float UpdateTime_Delta; // 0x38
	float WarmupTime; // 0x3c
	float WarmupTickRate; // 0x40
	TArray<UParticleEmitter*> Emitters; // 0x48
	UParticleSystemComponent* PreviewComponent; // 0x58
	UInterpCurveEdSetup* CurveEdSetup; // 0x60
	float LODDistanceCheckTime; // 0x68
	float MacroUVRadius; // 0x6c
	TArray<float> LODDistances; // 0x70
	TArray<FParticleSystemLOD> LODSettings; // 0x80
	FBox FixedRelativeBoundingBox; // 0x90
	float SecondsBeforeInactive; // 0xac
	float Delay; // 0xb0
	float DelayLow; // 0xb4
	char bOrientZAxisTowardCamera : 1; // 0xb8
	char bUseFixedRelativeBoundingBox : 1; // 0xb8
	char bShouldResetPeakCounts : 1; // 0xb8
	char bHasPhysics : 1; // 0xb8
	char bUseRealtimeThumbnail : 1; // 0xb8
	char ThumbnailImageOutOfDate : 1; // 0xb8
	char bUseDelayRange : 1; // 0xb9
	char bAllowManagedTicking : 1; // 0xb9
	char bAutoDeactivate : 1; // 0xb9
	char bRegenerateLODDuplicate : 1; // 0xb9
	EParticleSystemUpdateMode SystemUpdateMode; // 0xba
	ParticleSystemLODMethod LODMethod; // 0xbb
	EParticleSystemInsignificanceReaction InsignificantReaction; // 0xbc
	EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xbd
	EParticleSignificanceLevel MaxSignificanceLevel; // 0xbf
	uint32_t MinTimeBetweenTicks; // 0xc0
	float InsignificanceDelay; // 0xc4
	FVector MacroUVPosition; // 0xc8
	FBox CustomOcclusionBounds; // 0xd4
	TArray<FLODSoloTrack> SoloTracking; // 0xf0
	TArray<FNamedEmitterMaterial> NamedMaterialSlots; // 0x100
};

struct UWBP_InteractionPlate_C : UActorPlate_WBP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b8
	UWidgetAnimation* ScreenOut_Anim; // 0x3c0
	UWidgetAnimation* ScreenIn_Anim; // 0x3c8
	UWidgetAnimation* Label_FadeIn_InteractionPrompt; // 0x3d0
	UWidgetAnimation* Anim_OnInteraction; // 0x3d8
	UWidgetAnimation* Label_FadeIn; // 0x3e0
	UTextBlock* ActionLabel; // 0x3e8
	UImage* Gfx_Backer; // 0x3f0
	UImage* Gfx_Line; // 0x3f8
	UImage* Img_NPCIcon; // 0x400
	UTextBlock* NameLabel; // 0x408
	UCanvasPanel* PlateLayoutCanvas; // 0x410
	UWBP_InputKey_C* WBP_InputKey; // 0x418
	int32_t showButtonPromptThreshold; // 0x420
	bool isLabelVisible; // 0x424
	AController* PlayerController; // 0x428
	bool isInteractionHintVisible; // 0x430
	bool IsWidgetVisible; // 0x431
	UYControllerStationComponent* controllerStationComponent; // 0x438
	bool AlwaysShowLabel; // 0x440
};

struct AWorldSettings : AInfo {
	int32_t VisibilityCellSize; // 0x248
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x24c
	char bPrecomputeVisibility : 1; // 0x24d
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x24d
	char bEnableWorldBoundsChecks : 1; // 0x24d
	char bEnableNavigationSystem : 1; // 0x24d
	char bEnableAISystem : 1; // 0x24d
	char bEnableWorldComposition : 1; // 0x24d
	char bUseClientSideLevelStreamingVolumes : 1; // 0x24d
	char bEnableWorldOriginRebasing : 1; // 0x24d
	char bWorldGravitySet : 1; // 0x24e
	char bGlobalGravitySet : 1; // 0x24e
	char bMinimizeBSPSections : 1; // 0x24e
	char bForceNoPrecomputedLighting : 1; // 0x24e
	char bHighPriorityLoading : 1; // 0x24e
	char bHighPriorityLoadingLocal : 1; // 0x24e
	char bOverrideDefaultBroadphaseSettings : 1; // 0x24e
	UNavigationSystemConfig* NavigationSystemConfig; // 0x250
	UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x258
	float WorldToMeters; // 0x260
	float KillZ; // 0x264
	UDamageType* KillZDamageType; // 0x268
	float WorldGravityZ; // 0x270
	float GlobalGravityZ; // 0x274
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x278
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x280
	AGameModeBase* DefaultGameMode; // 0x288
	AGameNetworkManager* GameNetworkManagerClass; // 0x290
	int32_t PackedLightAndShadowMapTextureSize; // 0x298
	FVector DefaultColorScale; // 0x29c
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x2a8
	float GlobalDistanceFieldViewDistance; // 0x2ac
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x2b0
	FReverbSettings DefaultReverbSettings; // 0x2b8
	FInteriorSettings DefaultAmbientZoneSettings; // 0x2d8
	float MonoCullingDistance; // 0x2fc
	USoundMix* DefaultBaseSoundMix; // 0x300
	float TimeDilation; // 0x308
	float MatineeTimeDilation; // 0x30c
	float DemoPlayTimeDilation; // 0x310
	float MinGlobalTimeDilation; // 0x314
	float MaxGlobalTimeDilation; // 0x318
	float MinUndilatedFrameTime; // 0x31c
	float MaxUndilatedFrameTime; // 0x320
	FBroadphaseSettings BroadphaseSettings; // 0x324
	APlayerState* Pauser; // 0x368
	TArray<FNetViewer> ReplicationViewers; // 0x370
	TArray<UAssetUserData*> AssetUserData; // 0x380
	APlayerState* PauserPlayerState; // 0x390
	int32_t MaxNumberOfBookmarks; // 0x398
	UBookmarkBase* DefaultBookmarkClass; // 0x3a0
	TArray<UBookmarkBase*> BookmarkArray; // 0x3a8
	UBookmarkBase* LastBookmarkClass; // 0x3b8
};

struct AYLootContainer_Base_BP_C : AYLootContainer {
	UMaterialInstanceDynamic* CrateMaterialInstanceDynamic; // 0x470
	UYObjectInteractionComponent* ObjectInteraction; // 0x478
};

struct UYDismissedPopups : UObject {
	TArray<FString> m_dismissedPopups; // 0x28
};

struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct ALandscapeProxy : AActor {
	ULandscapeSplinesComponent* SplineComponent; // 0x240
	FGuid LandscapeGuid; // 0x248
	FIntPoint LandscapeSectionOffset; // 0x258
	int32_t MaxLODLevel; // 0x260
	float LODDistanceFactor; // 0x264
	ELandscapeLODFalloff LODFalloff; // 0x268
	float ComponentScreenSizeToUseSubSections; // 0x26c
	float LOD0ScreenSize; // 0x270
	float LOD0DistributionSetting; // 0x274
	float LODDistributionSetting; // 0x278
	float TessellationComponentScreenSize; // 0x27c
	bool UseTessellationComponentScreenSizeFalloff; // 0x280
	float TessellationComponentScreenSizeFalloff; // 0x284
	int32_t OccluderGeometryLOD; // 0x288
	int32_t StaticLightingLOD; // 0x28c
	UPhysicalMaterial* DefaultPhysMaterial; // 0x290
	float StreamingDistanceMultiplier; // 0x298
	UMaterialInterface* LandscapeMaterial; // 0x2a0
	UMaterialInterface* LandscapeHoleMaterial; // 0x2c8
	TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2d0
	bool bMeshHoles; // 0x2e0
	char MeshHolesMaxLod; // 0x2e1
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2e8
	int32_t VirtualTextureNumLods; // 0x2f8
	int32_t VirtualTextureLodBias; // 0x2fc
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x300
	float NegativeZBoundsExtension; // 0x304
	float PositiveZBoundsExtension; // 0x308
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x310
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x320
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x330
	bool bHasLandscapeGrass; // 0x3a4
	float StaticLightingResolution; // 0x3a8
	char CastShadow : 1; // 0x3ac
	char bCastDynamicShadow : 1; // 0x3ac
	char bCastStaticShadow : 1; // 0x3ac
	char bCastFarShadow : 1; // 0x3b0
	char bCastHiddenShadow : 1; // 0x3b4
	char bCastShadowAsTwoSided : 1; // 0x3b8
	char bAffectDistanceFieldLighting : 1; // 0x3bc
	FLightingChannels LightingChannels; // 0x3bd
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3c0
	char bRenderCustomDepth : 1; // 0x3c0
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x3c4
	int32_t CustomDepthStencilValue; // 0x3c8
	float LDMaxDrawDistance; // 0x3cc
	FLightmassPrimitiveSettings LightmassSettings; // 0x3d0
	int32_t CollisionMipLevel; // 0x3e8
	int32_t SimpleCollisionMipLevel; // 0x3ec
	float CollisionThickness; // 0x3f0
	FBodyInstance BodyInstance; // 0x3f8
	char bGenerateOverlapEvents : 1; // 0x550
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x550
	int32_t ComponentSizeQuads; // 0x554
	int32_t SubsectionSizeQuads; // 0x558
	int32_t NumSubsections; // 0x55c
	char bUsedForNavigation : 1; // 0x560
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x560
	bool bUseDynamicMaterialInstance; // 0x564
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x565
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x566
	bool bHasLayersContent; // 0x567
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x568
};

struct APRO_ProjectileBounce_BP_C : AYProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	FVector storePlayerActorLocation; // 0x3a0
	FVector storeTargetLocation; // 0x3ac
	FYAbilityActionBlinkData BlinkInitializationData; // 0x3b8
	FDataTableRowHandle LandingSfx; // 0x460
	float minVelocityPlayLandSfx; // 0x470
	float landingSfxCooldown; // 0x474
	float nextLandingSfxPlayTime; // 0x478
};

struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x58
};

struct UYWidget_ActorPlate : UYWidget {
	UCanvasPanel* m_offscreenRotationContainer; // 0x2c8
	FYWidgetActorPlateInitializationData m_widgetPlateData; // 0x2d0
	UYHealthComponent* m_healthComponent; // 0x360
	UYCharacterDBNOComponent* m_dbnoComponent; // 0x368
	UYPerkComponent* m_perkComponent; // 0x370
	AActor* m_associatedActor; // 0x378
	float m_healthRatio; // 0x380
	bool m_isWorldLocationProjectedOnScreen; // 0x384
	float m_offscreenPositionEdgePercent; // 0x388
	FVector2D m_leftAndUpperEdgePercent; // 0x38c
	FVector2D m_rightAndLowerEdgePercent; // 0x394
	float m_distanceToPlayer; // 0x39c
	bool m_recentlyDamaged; // 0x3a0
	bool m_alwaysVisibleEvenOffScreen; // 0x3a1
	bool m_isInTeam; // 0x3a2
	bool m_isNPCActorPlate; // 0x3a3
	bool m_autoCleanUpOnZeroHealth; // 0x3a4
	bool m_hideOnZeroHealth; // 0x3a5
	bool m_forceNonVisibile; // 0x3a6
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x58
};

struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData eventData; // 0x160
};

struct UYWidget_PlayerQuickAction : UYWidget {
	FString m_relatedUID; // 0x2c0
	FString m_playerName; // 0x2d0
	EYQuickActionClick m_action; // 0x2e0
};

struct UGeneralProjectSettings : UObject {
	FString CompanyName; // 0x28
	FString CompanyDistinguishedName; // 0x38
	FString CopyrightNotice; // 0x48
	FString Description; // 0x58
	FString Homepage; // 0x68
	FString LicensingTerms; // 0x78
	FString PrivacyPolicy; // 0x88
	FGuid ProjectID; // 0x98
	FString ProjectName; // 0xa8
	FString ProjectVersion; // 0xb8
	FString SupportContact; // 0xc8
	FText ProjectDisplayedTitle; // 0xd8
	FText ProjectDebugTitleInfo; // 0xf0
	bool bShouldWindowPreserveAspectRatio; // 0x108
	bool bUseBorderlessWindow; // 0x109
	bool bStartInVR; // 0x10a
	bool bAllowWindowResize; // 0x10b
	bool bAllowClose; // 0x10c
	bool bAllowMaximize; // 0x10d
	bool bAllowMinimize; // 0x10e
};

struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct UYMenuLevelActorContainer : UYLevelActorContainer {
	AActor* m_mainCameraActor; // 0x28
	TArray<FYMenuCameraCustomizationCategoryAssociation> m_cameraCustomizationCategorySetup; // 0x30
};

struct UBillboardComponent : UPrimitiveComponent {
	UTexture2D* Sprite; // 0x440
	char bIsScreenSizeScaled : 1; // 0x448
	float ScreenSize; // 0x44c
	float U; // 0x450
	float UL; // 0x454
	float V; // 0x458
	float VL; // 0x45c
};

struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x280
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x288
};

struct UPhysicsSpringComponent : USceneComponent {
	float SpringStiffness; // 0x1f8
	float SpringDamping; // 0x1fc
	float SpringLengthAtRest; // 0x200
	float SpringRadius; // 0x204
	ECollisionChannel SpringChannel; // 0x208
	bool bIgnoreSelf; // 0x209
	float SpringCompression; // 0x20c
};

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct AYWorldSettings : AWorldSettings {
	bool m_mapHaveLobby; // 0x3c0
	EYMapType m_mapTypeOverride; // 0x3c1
	APlayerStart* m_tutorialStart; // 0x3c8
	FString m_infoDebugString; // 0x3d0
};

struct ADP_Base_BP_C : AYPodActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	UYMapMarkerComponent* YMapMarker; // 0x290
	UYSkeletalMeshComponentFOV* DopPodComponentFOV; // 0x298
	USphereComponent* Sphere; // 0x2a0
	UPointLightComponent* PointLight; // 0x2a8
	UPointLightComponent* lightOrange; // 0x2b0
	UDecalComponent* CraterDecal; // 0x2b8
	UStaticMeshComponent* HiddenShadowCaster; // 0x2c0
	UParticleSystemComponent* window_PS; // 0x2c8
	UParticleSystemComponent* retroThruster_PS; // 0x2d0
	USphereComponent* SphereCollision; // 0x2d8
	UParticleSystemComponent* ground_PS; // 0x2e0
	UPointLightComponent* light_green; // 0x2e8
	UPointLightComponent* light_redFlashing; // 0x2f0
	float Timeline_1_HiddenShadowCaster_2AD71DC7452E2068EE6B52B28D961CF2; // 0x2f8
	ETimelineDirection Timeline_1__Direction_2AD71DC7452E2068EE6B52B28D961CF2; // 0x2fc
	UTimelineComponent* Timeline_2; // 0x300
	FVector Timeline_0_location_3668E36A4761944F15CDCB9D1CE453C5; // 0x308
	float Timeline_0_lightRed_3668E36A4761944F15CDCB9D1CE453C5; // 0x314
	float Timeline_0_lightGreen_3668E36A4761944F15CDCB9D1CE453C5; // 0x318
	float Timeline_0_lightRedFlashing_3668E36A4761944F15CDCB9D1CE453C5; // 0x31c
	ETimelineDirection Timeline_0__Direction_3668E36A4761944F15CDCB9D1CE453C5; // 0x320
	UTimelineComponent* Timeline_1; // 0x328
	FVector StartPosition; // 0x330
	AYPlayerCharacter* CachedPlayerCharacter; // 0x340
	FDataTableRowHandle Landing SFX 1; // 0x348
	FDataTableRowHandle Landing SFX 3; // 0x358
	FDataTableRowHandle retroThrusters; // 0x368
	UAnimMontage* PodOpenHatchAnim; // 0x378
	AYPlayerState* RelevantState; // 0x380
	USoundBase* DropPodMusic; // 0x388
};

struct UYPlayerUIAudioTriggerComponent : UActorComponent {
	UAudioComponent* m_audioComponentLocalLowHealth; // 0xb0
};

struct UWebBrowserAssetManager : UObject {
	TSoftObjectPtr<UMaterial> DefaultMaterial; // 0x28
};

struct UHoverBike_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x2c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x310
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x338
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x360
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x388
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x3b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x3d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x400
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x428
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x450
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x470
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x490
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x598
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x618
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x648
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x668
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x688
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x790
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x810
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x840
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x8c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x8f0
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x9d8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0xa08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0xad0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0xb50
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xc38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0xc68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0xd50
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xdf0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xeb8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0xf38
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1020
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1050
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1100
	FAnimNode_Root AnimGraphNode_Root; // 0x1148
	float Direction; // 0x1178
	float Speed; // 0x117c
	FRotator DeltaWorldRotation; // 0x1180
	float TurnSpeedYaw; // 0x118c
	float MoveForwardInputFloat; // 0x1190
	bool TRUE; // 0x1194
	bool doBoost; // 0x1195
	AYVehicle* owningVehicle; // 0x1198
	UYCharacterVehicleComponent* OwningCharVehicleComp; // 0x11a0
};

struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
};

struct UPawnAction : UObject {
	UPawnAction* ChildAction; // 0x28
	UPawnAction* ParentAction; // 0x30
	UPawnActionsComponent* OwnerComponent; // 0x38
	UObject* Instigator; // 0x40
	UBrainComponent* BrainComp; // 0x48
	char bAllowNewSameClassInstance : 1; // 0x80
	char bReplaceActiveSameClassInstance : 1; // 0x80
	char bShouldPauseMovement : 1; // 0x80
	char bAlwaysNotifyOnFinished : 1; // 0x80
};

struct UYDefaultKitDataAsset : UDataAsset {
	bool m_useDefaultKit; // 0x30
	FDataTableRowHandle m_DefaultKit; // 0x38
};

struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct UVOIPTalker : UActorComponent {
	FVoiceSettings Settings; // 0xb0
};

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
};

struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UPawnAction_Move : UPawnAction {
	AActor* GoalActor; // 0x98
	FVector GoalLocation; // 0xa0
	float AcceptableRadius; // 0xac
	UNavigationQueryFilter* FilterClass; // 0xb0
	char bAllowStrafe : 1; // 0xb8
	char bFinishOnOverlap : 1; // 0xb8
	char bUsePathfinding : 1; // 0xb8
	char bAllowPartialPath : 1; // 0xb8
	char bProjectGoalToNavigation : 1; // 0xb8
	char bUpdatePathToGoal : 1; // 0xb8
	char bAbortChildActionOnPathChange : 1; // 0xb8
};

struct UYControllerItemHoverComponent : UActorComponent {
	UYWidget_ItemContainer* m_currentHoveredItemContainer; // 0xb0
};

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa8
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb8
	USoundClass* ParentClass; // 0xc8
};

struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct UYFallingDamageComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnLanded; // 0xc0
	FMulticastInlineDelegate BP_OnLandingDamage; // 0xd0
	FMulticastInlineDelegate BP_OnResetFalling; // 0xe0
	FYFallingDamageInfo m_latestFallDamage; // 0xf0
};

struct UYWidget_ItemTooltipEntryImage : UYWidget_ItemTooltipEntryBase {
	UYWidget_ImageBase* m_image; // 0x2c0
};

struct UYHierarchicalStateMachine : UObject {
	TArray<UYHierarchicalStateBase*> m_stateStack; // 0x28
};

struct UYAudioManager : UObject {
	TArray<UObject*> m_referencingAysncLoadedVoiceLines; // 0x28
	float m_multiplierTransientMasterVolumeDucking; // 0x38
	TArray<FSoftObjectPath> m_audioDataTablesToLoadAsync; // 0x40
	TArray<UDataTable*> m_loadedDatatables; // 0x50
	TMap<FString, FDataTableRowHandle> m_cachedVORowHandles; // 0x68
};

struct UYWidget_GeneralGameSettings : UYWidget {
	UYWidget_SettingsToggle* m_minimapRotationToggle; // 0x2c0
};

struct UYProgressDisplayComponent : UActorComponent {
	FMulticastInlineDelegate OnProgressDisplayReqeuest; // 0xb0
	UYProgressComponent* m_currentProgress; // 0xc0
	TArray<UYProgressComponent*> m_progressStack; // 0xc8
};

struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct AYHUD : AHUD {
	UYWidget* m_loadingIndicatorWBPClass; // 0x330
	UYProgressDisplayComponent* m_progressDisplayComponent; // 0x338
	FMulticastInlineDelegate OnHudBegunPlay; // 0x340
	UYWidgetUpdater* m_widgetUpdater; // 0x350
	UYScreenSystemRoot* m_screenSystemRoot; // 0x358
	UYScreenBase* m_startScreenClass; // 0x360
	UYHierarchicalStateBase* m_escStateClass; // 0x368
	UYWidgetRootContainer* m_mainContainerClass; // 0x370
	UYLevelActorContainer* m_levelActorContainerClass; // 0x378
	UYDialogContainerBase* m_dialogContainerClass; // 0x380
	UYWidget* m_loadingIndicator; // 0x388
	UYWidgetRootContainer* m_mainContainer; // 0x390
	TArray<UYWidgetProvider*> m_widgetProviders; // 0x3a8
};

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x48
};

struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	BeamModifierType modifierType; // 0x30
	FBeamModifierOptions PositionOptions; // 0x34
	FRawDistributionVector Position; // 0x38
	FBeamModifierOptions TangentOptions; // 0x80
	FRawDistributionVector Tangent; // 0x88
	char bAbsoluteTangent : 1; // 0xd0
	FBeamModifierOptions StrengthOptions; // 0xd4
	FRawDistributionFloat Strength; // 0xd8
};

struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct UGeometryCacheComponent : UMeshComponent {
	UGeometryCache* GeometryCache; // 0x468
	bool bRunning; // 0x470
	bool bLooping; // 0x471
	float StartTimeOffset; // 0x474
	float PlaybackSpeed; // 0x478
	int32_t NumTracks; // 0x47c
	float elapsedTime; // 0x480
	float Duration; // 0x4b4
	bool bManualTick; // 0x4b8
};

struct UYWidget_Map : UYWidget {
	UTextureRenderTarget2D* m_levelTextureRender; // 0x2c0
	FVector2D m_maximizedSize; // 0x2c8
	FVector2D m_minimapSize; // 0x2d0
	float m_minimapViewportSize; // 0x2d8
	float m_fogOfWarUncoverSmoothEdge; // 0x2dc
	float m_playersSeeingRadius; // 0x2e0
	bool m_maximizedByDefault; // 0x2e4
	bool m_orientationPictureVisible; // 0x2e5
	bool m_allowUserInput; // 0x2e6
	UMaterialInterface* m_minimapMaterial; // 0x2e8
	UCanvasPanel* m_mapCanvas; // 0x2f0
	UCanvasPanel* m_projectionCanvas; // 0x2f8
	UCanvasPanel* m_fullscreenCanvas; // 0x300
	UImage* m_mapBackground; // 0x308
	UImage* m_imageOrientationIcon; // 0x310
	UYWidget_HeatMap* m_heatMapWidget; // 0x318
	bool m_hideCursor; // 0x320
	bool m_isFogOfWarActive; // 0x321
	float m_cachedRotationAngle; // 0x324
	UTextureRenderTarget2D* m_fogOfWarMaskRenderTarget2D; // 0x328
	UMaterial* m_fogOfWarDrawMaskMaterial; // 0x330
	UMaterialInstanceDynamic* m_fogOfWarDrawMaskMaterialInstance; // 0x338
	UMaterialInstanceDynamic* m_fogOfWarTextureMaterial; // 0x340
	float m_minimizedAutoZoomLevel; // 0x348
	float m_maximizedAutoZoomLevel; // 0x34c
	bool m_isMaximized; // 0x350
	TMap<EYMapMarkerType, UYWidget_MapMarker*> m_widgetTypeToClassMap; // 0x358
	TMap<UYMapMarkerData*, UYWidget_MapMarker*> m_widgetMap; // 0x3a8
	UYWidget_MapMarker* m_defaultMapMarkerType; // 0x3f8
	UYWidgetPool* m_widgetPool; // 0x400
	UTexture* m_levelTexture; // 0x408
	float m_borderIconOffsetFactor; // 0x464
};

struct UMovieSceneBuiltInEasingFunction : UObject {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UYWidget_PerformantScroll : UYWidget {
	UYWidget* m_entryWBP; // 0x2c0
	UVerticalBox* m_entriesBox; // 0x2c8
	USpacer* m_frontSpacer; // 0x2d0
	USpacer* m_backSpacer; // 0x2d8
	bool m_dummyMode; // 0x2e0
	bool m_debugMode; // 0x2e1
	int32_t m_debugVisibleEntriesAmount; // 0x2e4
	int32_t m_debugMaxEntriesAmount; // 0x2e8
};

struct UYWidget_TopMenuSubButton : UYWidget {
	UYWidget_TopMenuBarButton* m_topMenuButton; // 0x2d0
	UBorder* m_borderDivider; // 0x2d8
};

struct UOnboarding_03_MatchPickUpAndEscape_C : UMS_Line_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1b0
	FName SceneToInteract; // 0x1b8
	TArray<FTransform> EscapeTerminalTransforms; // 0x1c0
	TArray<EYContractStatus> ContractStatusToCheck; // 0x1d0
	bool hintIndicatorCreated; // 0x1e0
	TArray<FYContractRow> Contract Config Data; // 0x1e8
	TArray<FTransform> ContractActorTransforms; // 0x1f8
	FDataTableRowHandle launchTerminalSceneRowHandle; // 0x208
	FDataTableRowHandle icaNPCRowName; // 0x218
	FDataTableRowHandle korolevNPCRowName; // 0x228
	FDataTableRowHandle osirisNPCRowName; // 0x238
};

struct UARComponent : USceneComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct UNiagaraScript : UNiagaraScriptBase {
	ENiagaraScriptUsage Usage; // 0x28
	int32_t UsageIndex; // 0x2c
	FGuid UsageId; // 0x30
	FNiagaraParameterStore RapidIterationParameters; // 0x40
	FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xb8
	TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150
	FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160
	FNiagaraVMExecutableData CachedScriptVM; // 0x1b8
	TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x298
	TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2a8
};

struct UPaperTileLayer : UObject {
	FText LayerName; // 0x28
	int32_t LayerWidth; // 0x40
	int32_t LayerHeight; // 0x44
	char bHiddenInGame : 1; // 0x48
	char bLayerCollides : 1; // 0x48
	char bOverrideCollisionThickness : 1; // 0x48
	char bOverrideCollisionOffset : 1; // 0x48
	float CollisionThicknessOverride; // 0x4c
	float CollisionOffsetOverride; // 0x50
	FLinearColor LayerColor; // 0x54
	int32_t AllocatedWidth; // 0x64
	int32_t AllocatedHeight; // 0x68
	TArray<FPaperTileInfo> AllocatedCells; // 0x70
	UPaperTileSet* TileSet; // 0x80
	TArray<int32_t> AllocatedGrid; // 0x88
};

struct UYWidget_MapMarker : UYWidget {
	EYMapLayerIndex m_zOrderIndex; // 0x2c1
	UYMapMarkerData* m_markerInfo; // 0x2c8
	UTextBlock* m_distanceText; // 0x2d0
};

struct UYPowerUpMapMarkerData : UYMapMarkerData {
	int32_t m_powerUpProgress; // 0x148
	int32_t m_powerUpSteps; // 0x14c
	FText m_powerUpText; // 0x150
};

struct UARFaceComponent : UARComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
};

struct UAREnvironmentProbeComponent : UARComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct AARSharedWorldGameState : AGameState {
	TArray<char> PreviewImageData; // 0x2b0
	TArray<char> ARWorldData; // 0x2c0
	int32_t PreviewImageBytesTotal; // 0x2d0
	int32_t ARWorldBytesTotal; // 0x2d4
	int32_t PreviewImageBytesDelivered; // 0x2d8
	int32_t ARWorldBytesDelivered; // 0x2dc
};

struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x448
	char bDrawPolyEdges : 1; // 0x448
	char bDrawFilledPolys : 1; // 0x448
	char bDrawNavMeshEdges : 1; // 0x448
	char bDrawTileBounds : 1; // 0x448
	char bDrawPathCollidingGeometry : 1; // 0x448
	char bDrawTileLabels : 1; // 0x448
	char bDrawPolygonLabels : 1; // 0x448
	char bDrawDefaultPolygonCost : 1; // 0x449
	char bDrawLabelsOnPathNodes : 1; // 0x449
	char bDrawNavLinks : 1; // 0x449
	char bDrawFailedNavLinks : 1; // 0x449
	char bDrawClusters : 1; // 0x449
	char bDrawOctree : 1; // 0x449
	char bDrawOctreeDetails : 1; // 0x449
	char bDrawMarkedForbiddenPolys : 1; // 0x449
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x44a
	float DrawOffset; // 0x44c
	char bFixedTilePoolSize : 1; // 0x450
	int32_t TilePoolSize; // 0x454
	float TileSizeUU; // 0x458
	float CellSize; // 0x45c
	float CellHeight; // 0x460
	float AgentRadius; // 0x464
	float AgentHeight; // 0x468
	float AgentMaxSlope; // 0x46c
	float AgentMaxStepHeight; // 0x470
	float MinRegionArea; // 0x474
	float MergeRegionSize; // 0x478
	float MaxSimplificationError; // 0x47c
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x480
	int32_t TileNumberHardLimit; // 0x484
	int32_t PolyRefTileBits; // 0x488
	int32_t PolyRefNavPolyBits; // 0x48c
	int32_t PolyRefSaltBits; // 0x490
	FVector NavMeshOriginOffset; // 0x494
	float DefaultDrawDistance; // 0x4a0
	float DefaultMaxSearchNodes; // 0x4a4
	float DefaultMaxHierarchicalSearchNodes; // 0x4a8
	ERecastPartitioning RegionPartitioning; // 0x4ac
	ERecastPartitioning LayerPartitioning; // 0x4ad
	int32_t RegionChunkSplits; // 0x4b0
	int32_t LayerChunkSplits; // 0x4b4
	char bSortNavigationAreasByCost : 1; // 0x4b8
	char bPerformVoxelFiltering : 1; // 0x4b8
	char bMarkLowHeightAreas : 1; // 0x4b8
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x4b8
	char bFilterLowSpanSequences : 1; // 0x4b8
	char bFilterLowSpanFromTileCache : 1; // 0x4b8
	char bDoFullyAsyncNavDataGathering : 1; // 0x4b8
	char bUseBetterOffsetsFromCorners : 1; // 0x4b8
	char bStoreEmptyTileLayers : 1; // 0x4b9
	char bUseVirtualFilters : 1; // 0x4b9
	char bAllowNavLinkAsPathEnd : 1; // 0x4b9
	char bUseVoxelCache : 1; // 0x4b9
	float TileSetUpdateInterval; // 0x4bc
	float HeuristicScale; // 0x4c0
	float VerticalDeviationFromGroundCompensation; // 0x4c4
};

struct UYPlayerRenderTargetVfxMovementComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FVector lastTrailPos; // 0xb8
	FVector ParentPosition; // 0xc4
	float DeltaTime; // 0xd0
	float Size; // 0xd4
	bool isLocalPlayerPawn; // 0xd8
	float OpacityPerStepSize; // 0xdc
	float OpacityPerSecondWhenStanding; // 0xe0
	float frequencyScaling; // 0xe4
	bool isPlayerPawn; // 0xe8
	UYHealthComponent* healthComponent; // 0xf0
	UYUserSettings* userSettings; // 0xf8
	bool isGrassEnabled; // 0x100
	FVector ParentPositionLastTick; // 0x104
	FVector ParentPositionLast2Ticks; // 0x110
	EMovementMode lastMovementState; // 0x11c
	AYPlayerCharacter* Player; // 0x120
	TArray<FVector> parentPositions; // 0x128
	int32_t currentParentPositionIndex; // 0x138
	int32_t rememberParentPositions; // 0x13c
	TArray<FVector> trailPositions; // 0x140
	int32_t currentTrailPositionIndex; // 0x150
	TArray<bool> Landing; // 0x158
	TArray<float> movementDelta; // 0x168
	FVector LastLandingPosition; // 0x178
	float LastUpdate; // 0x184
	FVector CurrentParentPosition; // 0x188
};

struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct UWBP_Notification_Item_C : UUserWidget {
	UWidgetAnimation* WidgetOut_Anim; // 0x260
	UWidgetAnimation* WidgetIn_Anim; // 0x268
	UImage* Gfx_BackerFill; // 0x270
	UImage* Gfx_BackerFillColorA; // 0x278
	UImage* Gfx_BackerFillColorB; // 0x280
	UImage* Gfx_BackerFillGradient; // 0x288
	UImage* Gfx_BackerFillLight; // 0x290
	UImage* Gfx_Chevrons; // 0x298
	UImage* Icn_NotificationType; // 0x2a0
	UImage* Icn_NotificationType_Shadow; // 0x2a8
	URichTextBlock* RichTxt_Headline; // 0x2b0
	URichTextBlock* RichTxt_Subline; // 0x2b8
	UWBP_ProgressBar_C* WBP_ProgressBar; // 0x2c0
};

struct UWBP_DragAndDrop_HighlightArea_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* Anim_Highlight; // 0x2c8
	UWidgetAnimation* ScreenIn_Anim; // 0x2d0
	UImage* Mat_DragDrop; // 0x2d8
};

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UYWidget_MatchmakingInfo : UYWidget {
	UYWidget_Timer* m_matchmakingQueuingTimeTimer; // 0x2c0
};

struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x4d0
	TArray<FIntPoint> ProxyComponentBases; // 0x4e0
	int8_t ProxyLOD; // 0x4f0
};

struct UARTextureCameraDepth : UARTexture {
	EARDepthQuality DepthQuality; // 0xf8
	EARDepthAccuracy DepthAccuracy; // 0xf9
	bool bIsTemporallySmoothed; // 0xfa
};

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28
};

struct UYGlobalAudio : UObject {
	UAudioComponent* m_worldMusicComponent; // 0x28
};

struct UYWidget_InventorySlotItem : UYWidget {
	int32_t m_indexWeaponInventorySlot; // 0x2c0
};

struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UYWidget_BinaryOptionToggle : UYWidget {
	UButton* m_leftOptionButton; // 0x2d0
	UButton* m_rightOptionButton; // 0x2d8
	UTextBlock* m_leftOptionTextBlock; // 0x2e0
	UTextBlock* m_leftOptionTextBlockSelected; // 0x2e8
	UTextBlock* m_rightOptionTextBlock; // 0x2f0
	UTextBlock* m_rightOptionTextBlockSelected; // 0x2f8
	FText m_leftOptionText; // 0x300
	FText m_rightOptionText; // 0x318
};

struct UAICharacterPlate_WBP_C : UYWidget_ActorPlate {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8
	UWidgetAnimation* FadeOutOnDeath; // 0x3b0
	UWidgetAnimation* FadeIn; // 0x3b8
	UWidgetAnimation* FadeOut; // 0x3c0
	UHorizontalBox* buffs; // 0x3c8
	UCanvasPanel* CanvasPanel_DeathIcon; // 0x3d0
	UCanvasPanel* ContentHolder; // 0x3d8
	UImage* EvacIcon; // 0x3e0
	UImage* HuntIcon; // 0x3e8
	UHorizontalBox* Top; // 0x3f0
	UWBP_HealthBar_HUD_Item_C* UI_HealthBarWithDelta_WBP; // 0x3f8
	FLinearColor Color_Nameplate_Name; // 0x400
	FString PerkString; // 0x410
	TArray<UUI_ImageBase_WBP_C*> PerkIconContainers; // 0x420
	TArray<TSoftObjectPtr<UTexture2D>> activePerkIcons; // 0x430
	TArray<FDataTableRowHandle> AI_RanksToHide; // 0x440
	FText String_Context; // 0x450
	UYUserSettings* userSettings; // 0x468
};

struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct URendererSettings : UDeveloperSettings {
	char bMobileDisableVertexFog : 1; // 0x38
	int32_t MaxMobileCascades; // 0x3c
	EMobileMSAASampleCount MobileMSAASampleCount; // 0x40
	char bMobileAllowDitheredLODTransition : 1; // 0x44
	char bMobileAllowSoftwareOcclusionCulling : 1; // 0x44
	char bMobileVirtualTextures : 1; // 0x44
	char bDiscardUnusedQualityLevels : 1; // 0x44
	char bOcclusionCulling : 1; // 0x44
	float MinScreenRadiusForLights; // 0x48
	float MinScreenRadiusForEarlyZPass; // 0x4c
	float MinScreenRadiusForCSMdepth; // 0x50
	char bPrecomputedVisibilityWarning : 1; // 0x54
	char bTextureStreaming : 1; // 0x54
	char bUseDXT5NormalMaps : 1; // 0x54
	char bVirtualTextures : 1; // 0x54
	char bVirtualTexturedLightmaps : 1; // 0x54
	uint32_t VirtualTextureTileSize; // 0x58
	uint32_t VirtualTextureTileBorderSize; // 0x5c
	uint32_t VirtualTextureFeedbackFactor; // 0x60
	char bVirtualTextureEnableCompressZlib : 1; // 0x64
	char bVirtualTextureEnableCompressCrunch : 1; // 0x64
	char bClearCoatEnableSecondNormal : 1; // 0x64
	int32_t ReflectionCaptureResolution; // 0x68
	char bReflectionCaptureCompression : 1; // 0x6c
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x6c
	char bForwardShading : 1; // 0x6c
	char bVertexFoggingForOpaque : 1; // 0x6c
	char bAllowStaticLighting : 1; // 0x6c
	char bUseNormalMapsForStaticLighting : 1; // 0x6c
	char bGenerateMeshDistanceFields : 1; // 0x6c
	char bEightBitMeshDistanceFields : 1; // 0x6c
	char bGenerateLandscapeGIData : 1; // 0x6d
	char bCompressMeshDistanceFields : 1; // 0x6d
	float TessellationAdaptivePixelsPerTriangle; // 0x70
	char bSeparateTranslucency : 1; // 0x74
	ETranslucentSortPolicy TranslucentSortPolicy; // 0x78
	FVector TranslucentSortAxis; // 0x7c
	ECustomDepthStencil CustomDepthStencil; // 0x88
	char bCustomDepthTaaJitter : 1; // 0x8c
	EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0x90
	char bDefaultFeatureBloom : 1; // 0x94
	char bDefaultFeatureAmbientOcclusion : 1; // 0x94
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x94
	char bDefaultFeatureAutoExposure : 1; // 0x94
	EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x98
	float DefaultFeatureAutoExposureBias; // 0x9c
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xa0
	char bUsePreExposure : 1; // 0xa0
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xa0
	char bDefaultFeatureMotionBlur : 1; // 0xa0
	char bDefaultFeatureLensFlare : 1; // 0xa0
	char bTemporalUpsampling : 1; // 0xa0
	char bSSGI : 1; // 0xa0
	EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xa4
	ELightUnits DefaultLightUnits; // 0xa5
	EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xa6
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xa8
	char bStencilForLODDither : 1; // 0xa8
	EEarlyZPass EarlyZPass; // 0xac
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xb0
	char bDBuffer : 1; // 0xb0
	EClearSceneOptions ClearSceneMethod; // 0xb4
	char bBasePassOutputsVelocity : 1; // 0xb8
	char bVertexDeformationOutputsVelocity : 1; // 0xb8
	char bSelectiveBasePassOutputs : 1; // 0xb8
	char bDefaultParticleCutouts : 1; // 0xb8
	int32_t GPUSimulationTextureSizeX; // 0xbc
	int32_t GPUSimulationTextureSizeY; // 0xc0
	char bGlobalClipPlane : 1; // 0xc4
	EGBufferFormat GBufferFormat; // 0xc8
	char bUseGPUMorphTargets : 1; // 0xcc
	char bNvidiaAftermathEnabled : 1; // 0xcc
	bool m_enableRhiThread; // 0xd0
	char bMultiView : 1; // 0xd4
	char bMobilePostProcessing : 1; // 0xd4
	char bMobileMultiView : 1; // 0xd4
	char bMobileUseHWsRGBEncoding : 1; // 0xd4
	char bRoundRobinOcclusion : 1; // 0xd4
	char bODSCapture : 1; // 0xd4
	char bMeshStreaming : 1; // 0xd4
	float WireframeCullThreshold; // 0xd8
	char bEnableRayTracing : 1; // 0xdc
	char bEnableRayTracingTextureLOD : 1; // 0xdc
	char bSupportStationarySkylight : 1; // 0xdc
	char bSupportLowQualityLightmaps : 1; // 0xdc
	char bSupportPointLightWholeSceneShadows : 1; // 0xdc
	char bSupportAtmosphericFog : 1; // 0xdc
	char bSupportSkyAtmosphere : 1; // 0xdc
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xdc
	char bSupportSkinCacheShaders : 1; // 0xdd
	ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xe0
	float SkinCacheSceneMemoryLimitInMB; // 0xe4
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xe8
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xe8
	char bMobileAllowDistanceFieldShadows : 1; // 0xe8
	char bMobileAllowMovableDirectionalLights : 1; // 0xe8
	uint32_t MobileNumDynamicPointLights; // 0xec
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xf0
	char bMobileAllowMovableSpotlights : 1; // 0xf0
	char bMobileAllowMovableSpotlightShadows : 1; // 0xf0
	char bSupport16BitBoneIndex : 1; // 0xf0
	char bGPUSkinLimit2BoneInfluences : 1; // 0xf0
	char bSupportDepthOnlyIndexBuffers : 1; // 0xf0
	char bSupportReversedIndexBuffers : 1; // 0xf0
	char bLPV : 1; // 0xf0
	char bMobileAmbientOcclusion : 1; // 0xf1
	char bUseUnlimitedBoneInfluences : 1; // 0xf1
	int32_t UnlimitedBonInfluencesThreshold; // 0xf4
	EMobilePlanarReflectionMode MobilePlanarReflectionMode; // 0xf8
	FPerPlatformBool bStreamSkeletalMeshLODs; // 0xf9
	FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0xfa
	FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0x100
	FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x118
	FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x130
};

struct UUI_AnnouncementIndicator_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_Icon; // 0x268
	UObject* AssociatedPlayerState; // 0x270
};

struct UContextMenu_FriendsList_WBP_C : UYWidget_ChatUserMenu {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* FadeIn; // 0x2f8
	UHorizontalBox* addFriendPanel; // 0x300
	UYButton* addFriendYButton; // 0x308
	UYTextBlock* addFriendYTextBlock; // 0x310
	UHorizontalBox* blockUserPanel; // 0x318
	UYButton* blockUserYButton; // 0x320
	UYTextBlock* blockUserYTextBlock; // 0x328
	UHorizontalBox* ChatMutePanel; // 0x330
	UYButton* chatMuteYButton; // 0x338
	UYTextBlock* chatMuteYTextBlock; // 0x340
	UYButton* closeMenuYButton; // 0x348
	UHorizontalBox* inviteToSquadPanel; // 0x350
	UYButton* inviteToSquadYButton; // 0x358
	UYTextBlock* inviteToSquadYTextBlock; // 0x360
	UHorizontalBox* leaveSquadPanel; // 0x368
	UYButton* leaveSquadYButton; // 0x370
	UYTextBlock* leaveSquadYTextBlock; // 0x378
	UYTextBlock* playerNameYTextBlock; // 0x380
	UHorizontalBox* removeFriendPanel; // 0x388
	UYButton* removeFriendYButton; // 0x390
	UYTextBlock* removeFriendYTextBlock; // 0x398
	UHorizontalBox* ReportPanel; // 0x3a0
	UYButton* reportYButton; // 0x3a8
	UYTextBlock* reportYTextBlock; // 0x3b0
	UHorizontalBox* VoiceChatMutePanel; // 0x3b8
	UYButton* voicechatMuteYButton; // 0x3c0
	UYTextBlock* voiceChatMuteYTextBlock; // 0x3c8
	UYTextBlock* YTextBlock_2; // 0x3d0
};

struct UWBP_SettingEntry_Item_C : UYWidgetView_SettingEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x348
	UWidgetAnimation* HighlightBracket_Anim; // 0x350
	UButton* ButtonComponent; // 0x358
	UNamedSlot* ButtonSlot; // 0x360
	UImage* Gfx_BackerDisable; // 0x368
	UImage* Gfx_BackerFill_Dark; // 0x370
	UImage* Gfx_BackerFill_Light; // 0x378
	UInvalidationBox* InvalidationBox_1; // 0x380
	UTextBlock* Txt_SettingLabel; // 0x388
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x390
	FText SettingLabel; // 0x398
	bool Disabled; // 0x3b0
};

struct UYPermanentAssetData : UDataAsset {
	TArray<UObject*> m_hardReferencedObjects; // 0x30
};

struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct UWBP_CelebrationBacker_Panel_B_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UCanvasPanel* ArrowAnims; // 0x2c8
	UBackgroundBlur* Bg_Blur; // 0x2d0
	UBorder* BG_ColorTint; // 0x2d8
	UImage* Gfx_BackerDark; // 0x2e0
	UImage* Gfx_BackerTint; // 0x2e8
	UImage* Gfx_BackerTint_2; // 0x2f0
	UImage* Gfx_BackerTint_3; // 0x2f8
	UImage* Gfx_BackerTint_4; // 0x300
	UImage* Gfx_BackerTint_5; // 0x308
	UImage* Gfx_CelebrationBacker; // 0x310
	UImage* Gfx_CelebrationBacker2; // 0x318
	UImage* Gfx_CelebrationBacker3; // 0x320
	UImage* Gfx_CelebrationBacker4; // 0x328
	UImage* M_Pattern; // 0x330
	UImage* M_Pattern_Blurred; // 0x338
	FColor BG_Color; // 0x340
	float BlurOpacity; // 0x344
	float BGTintOpacity; // 0x348
	bool UseArrowAnim; // 0x34c
};

struct UBlendSpace : UBlendSpaceBase {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
};

struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
};

struct UYBTTask_PlayAnimation : UBTTask_BlueprintBase {
	AYAICharacter* m_characterAIOwner; // 0xa8
	UAnimInstance* m_animInstance; // 0xb0
	UAnimMontage* m_animationMontage; // 0xb8
	EYAnimTaskFinishCondition m_taskFinishCondition; // 0xc0
	FBlackboardKeySelector m_blackboardValueToObserve; // 0xc8
	bool m_expectedValueAfterChange; // 0xf0
	float m_timeBeforeMontageEnds; // 0xf4
	FName m_montageSectionToPlay; // 0xf8
};

struct UWBP_HealthBar_HUD_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* HitFlash_AI; // 0x268
	UWidgetAnimation* HitFlash; // 0x270
	UProgressBar* HealthBarProgress_Delta; // 0x278
	UProgressBar* HealthProgressBar; // 0x280
	UYCharacterDBNOComponent* dbnoComp; // 0x288
	float HealthTimeLeftUntilProgressDeltaStarts; // 0x290
	float ShieldTimeLeftUntilProgressDeltaStarts; // 0x294
	AYCharacter* Character; // 0x298
	bool UseAIColorScheme; // 0x2a0
	AActor* ActorOwner; // 0x2a8
	float LastTImeDeltaBarTicked; // 0x2b0
	float TimeThresholdSinceLastUpdateToResetDeltaProgression; // 0x2b4
};

struct UMapMarker_NPC_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* Warning; // 0x2e8
	UUI_ImageBase_WBP_C* Image; // 0x2f0
	UTextBlock* Title; // 0x2f8
	bool CanGetFinalUpdate; // 0x300
	bool ApplyFinalUpdate; // 0x301
	bool IsOwnedByLocalPlayer; // 0x302
	bool IsOwnedByTeamMateOfLocalPlayer; // 0x303
	bool WasPreviouslyOwnedByLocalPlayer; // 0x304
	bool WasPreviouslyOwnedByTeamMateOfLocalPlayer; // 0x305
	APlayerState* LocalPlayerState; // 0x308
	bool AssignedIcon; // 0x310
};

struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28
};

struct UPhononOcclusionSourceSettings : UOcclusionPluginSourceSettingsBase {
	EIplDirectOcclusionMode DirectOcclusionMode; // 0x28
	EIplDirectOcclusionMethod DirectOcclusionMethod; // 0x29
	float DirectOcclusionSourceRadius; // 0x2c
	bool DirectAttenuation; // 0x30
	bool AirAbsorption; // 0x31
};

struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct UYAIManager : UActorComponent {
	TArray<AYAICharacter*> m_aiCharacters; // 0xb0
	TArray<FYAISpawnRequest> m_spawnRequests; // 0xc0
	TArray<FSoftObjectPath> m_objectsRequestedAsyncLoadFor; // 0xd0
	TArray<UObject*> m_objectsLoaded; // 0xe8
	FMulticastInlineDelegate BP_OnAICharacterAdded; // 0x108
	FMulticastInlineDelegate BP_OnAICharacterRemoved; // 0x118
	FMulticastInlineDelegate BP_OnAISquadDetermineAIsToSpawn; // 0x128
	bool m_shouldSpawnPrototypeAIVersions; // 0x138
	FDataTableRowHandle m_rowHandleForAISpawnCharacters; // 0x140
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x250
};

struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
};

struct UMaterialExpressionInverseLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Value; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstValue; // 0x84
	bool bClampResult; // 0x88
};

struct UYWidget_EomRewardsPanel : UYWidget {
	UHorizontalBox* m_mainHorizontalBox; // 0x2c0
	TArray<UYWidget_ItemContainer*> m_rewardEntries; // 0x2c8
	bool m_expandElementsToFullWidth; // 0x2d8
	bool m_displayRarityHeaders; // 0x2d9
};

struct UNavigationSystemConfig : UObject {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct UYWidget_ItemComponentRarityColor : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnItemRarityColorSet; // 0x300
	FSlateColor m_rarityColor; // 0x310
};

struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UMaterialInterface : UObject {
	bool m_canBeOverridenWithCloakMaterial; // 0x38
	bool m_validationOfUsedMaterials; // 0x39
	USubsurfaceProfile* SubsurfaceProfile; // 0x40
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x58
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x68
	TArray<UAssetUserData*> AssetUserData; // 0x78
};

struct UMovieSceneCameraAnimSection : UMovieSceneSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xe8
	UCameraAnim* CameraAnim; // 0x108
	float PlayRate; // 0x110
	float PlayScale; // 0x114
	float BlendInTime; // 0x118
	float BlendOutTime; // 0x11c
	bool bLooping; // 0x120
};

struct UConstructionSystemRemoveTool : UConstructionSystemTool {
	float TraceDistance; // 0x30
	TWeakObjectPtr<APrefabActor> FocusedActor; // 0x34
};

struct UPlatformGameInstance : UGameInstance {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0x1a8
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0x1b8
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0x1c8
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0x1d8
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0x1e8
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x1f8
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x208
	FMulticastInlineDelegate ApplicationRegisteredForRemoteNotificationsDelegate; // 0x218
	FMulticastInlineDelegate ApplicationRegisteredForUserNotificationsDelegate; // 0x228
	FMulticastInlineDelegate ApplicationFailedToRegisterForRemoteNotificationsDelegate; // 0x238
	FMulticastInlineDelegate ApplicationReceivedRemoteNotificationDelegate; // 0x248
	FMulticastInlineDelegate ApplicationReceivedLocalNotificationDelegate; // 0x258
	FMulticastInlineDelegate ApplicationReceivedScreenOrientationChangedNotificationDelegate; // 0x268
};

struct UYWidget_ModalDialogScrapItem : UYWidget_ModalDialogOkCancel {
	UYWidget_ValueCompareDisplay* m_materialDisplayClass; // 0x338
};

struct ANavSystemConfigOverride : AActor {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x240
	ENavSystemOverridePolicy OverridePolicy; // 0x248
	char bLoadOnClient : 1; // 0x249
};

struct UInteractionAnimComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	USkeletalMeshComponent* FirstPersonSkeletalMeshComponent; // 0xb8
	AStaticMeshActor* SpawnedPickupMeshVisualActor; // 0xc0
	UAnimMontage* PickUpAnimationMontage; // 0xc8
};

struct UParticleModuleLocationPrimitiveBase : UParticleModuleLocationBase {
	char Positive_X : 1; // 0x30
	char Positive_Y : 1; // 0x30
	char Positive_Z : 1; // 0x30
	char Negative_X : 1; // 0x30
	char Negative_Y : 1; // 0x30
	char Negative_Z : 1; // 0x30
	char SurfaceOnly : 1; // 0x30
	char Velocity : 1; // 0x30
	FRawDistributionFloat VelocityScale; // 0x38
	FRawDistributionVector StartLocation; // 0x68
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct UConstantQNRT : UAudioSynesthesiaNRT {
	UConstantQNRTSettings* Settings; // 0x78
};

struct UWBP_RetentionBonusItem_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Claimed_Anim; // 0x268
	UNamedSlot* ContentSlot; // 0x270
	UBorder* Day; // 0x278
	UImage* Gfx_Bg_Gradient; // 0x280
	UImage* Gfx_Bg_Gradient_Anim; // 0x288
	UImage* Gfx_Preview; // 0x290
	UImage* Gfx_Success; // 0x298
	UImage* Gfx_Success_Bg; // 0x2a0
	UImage* Gfx_Success_Stroke; // 0x2a8
	UWBP_Item_Preview_Btn_C* ItemPreview; // 0x2b0
	USizeBox* ItemSize; // 0x2b8
	UTextBlock* Txt_Day; // 0x2c0
	FText SetDay; // 0x2c8
	float SetWidth; // 0x2e0
	float SetHeight; // 0x2e4
	FDataTableRowHandle ClaimedSoundFx; // 0x2e8
};

struct UBrushBaseProperties : UInteractiveToolPropertySet {
	float BrushSize; // 0x60
	bool bSpecifyRadius; // 0x64
	float BrushRadius; // 0x68
	float BrushStrength; // 0x6c
	float BrushFalloffAmount; // 0x70
	bool bShowStrength; // 0x74
	bool bShowFalloff; // 0x75
};

struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct UWBP_SettingsContent_Video_C : UWBP_SettingsContentBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Antialiasing; // 0x348
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_ColorblindMode; // 0x350
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_DLSSMode; // 0x358
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Foliage; // 0x360
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_FullscreenMode; // 0x368
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Postprocess; // 0x370
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Resolution; // 0x378
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Shadow; // 0x380
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Texture; // 0x388
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_ViewDistance; // 0x390
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_VisualEffects; // 0x398
	UWBP_Dropdown_Btn_C* WBP_Dropdown_VideoQuality_Btn; // 0x3a0
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ColorblindIntensity; // 0x3a8
	UWBP_Selector_Btn_C* WBP_Selector_Btn_Fov; // 0x3b0
	UWBP_Selector_Btn_C* WBP_Selector_Btn_Gamma; // 0x3b8
	UWBP_Selector_Btn_C* WBP_Selector_Btn_MaxFps; // 0x3c0
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ResolutionQuality; // 0x3c8
	UWBP_Selector_Btn_C* WBP_Selector_Btn_UIScale; // 0x3d0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_AntiAliasingQuality; // 0x3d8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_AutoDetect; // 0x3e0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ColorblindMode; // 0x3e8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_CorrectDeficiency; // 0x3f0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_CrashDebugging; // 0x3f8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_DLSSMode; // 0x400
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_FoilageQuality; // 0x408
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_FOV; // 0x410
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_FullscreenMode; // 0x418
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Gamma; // 0x420
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ImageSharpening; // 0x428
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MaxFPS; // 0x430
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MotionBlur; // 0x438
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MultiThreadRendering; // 0x440
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_PostProcessQuality; // 0x448
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Resolution; // 0x450
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ResolutionQuality; // 0x458
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ShadowQuality; // 0x460
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ShowFPS; // 0x468
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_TextureQuality; // 0x470
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_UIScale; // 0x478
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_VideoQuality; // 0x480
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ViewDistanceQuality; // 0x488
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_VisualEffectsQuality; // 0x490
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_VSync; // 0x498
	UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_Accessibility; // 0x4a0
	UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_VideoQuality; // 0x4a8
	UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_VideoQuality_2; // 0x4b0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_AutoDetect; // 0x4b8
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_GpuCrashDebugging; // 0x4c0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_ImageSharpening; // 0x4c8
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MotionBlur; // 0x4d0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MultithreadedRendering; // 0x4d8
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_ShowFps; // 0x4e0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_Vsync; // 0x4e8
	FText Label; // 0x4f0
	TMap<FString, EYGfxQualityPreset> GFXSettings; // 0x508
};

struct UYAbilityAnalyticsComponent : UActorComponent {
	TArray<FYAbilityAnalyticsPerPlayer> m_abilityPerPlayerAnalytics; // 0xb0
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UYSoundNodeLocalPlayer : USoundNode {
	bool m_previewPlayForceOutputLocal; // 0x48
};

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UYWidget_SetItemList : UYWidget {
	FMulticastInlineDelegate OnAllItemsSpawnedEvent; // 0x2c8
	FYPlayerInventory m_cachedStash; // 0x2d8
	bool m_inventoryWidgetsInitialized; // 0x2f0
	TMap<int32_t, FYInventoryItem> m_itemUiData; // 0x2f8
	TMap<FString, int32_t> m_cachedIdToRequestHandle; // 0x348
	TMap<FString, EYItemRarityType> m_cachedRarities; // 0x398
	TMap<FString, int32_t> m_cachedItemAmount; // 0x3e8
};

struct UCullingField : UFieldNodeBase {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct UCrowdManager : UCrowdManagerBase {
	ANavigationData* MyNavData; // 0x28
	TArray<FCrowdAvoidanceConfig> AvoidanceConfig; // 0x30
	TArray<FCrowdAvoidanceSamplingPattern> SamplingPatterns; // 0x40
	int32_t MaxAgents; // 0x50
	float MaxAgentRadius; // 0x54
	int32_t MaxAvoidedAgents; // 0x58
	int32_t MaxAvoidedWalls; // 0x5c
	float NavmeshCheckInterval; // 0x60
	float PathOptimizationInterval; // 0x64
	float SeparationDirClamp; // 0x68
	float PathOffsetRadiusMultiplier; // 0x6c
	char bResolveCollisions : 1; // 0x70
};

struct UBTTask_PlaySpawnAnimation_C : UYBTTask_PlayAnimation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110
	FBlackboardKeySelector KeySpawnAnimationPlayed; // 0x118
};

struct UEdGraphPin_Deprecated : UObject {
	FString PinName; // 0x28
	FString PinToolTip; // 0x38
	EEdGraphPinDirection Direction; // 0x48
	FEdGraphPinType PinType; // 0x50
	FString DefaultValue; // 0xa8
	FString AutogeneratedDefaultValue; // 0xb8
	UObject* DefaultObject; // 0xc8
	FText DefaultTextValue; // 0xd0
	TArray<UEdGraphPin_Deprecated*> LinkedTo; // 0xe8
	TArray<UEdGraphPin_Deprecated*> SubPins; // 0xf8
	UEdGraphPin_Deprecated* ParentPin; // 0x108
	UEdGraphPin_Deprecated* ReferencePassThroughConnection; // 0x110
};

struct UWBP_Objective_HUD_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Txt_Objective; // 0x268
	UWBP_Checkbox_C* WBP_Checkbox; // 0x270
	UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_VarA_Panel; // 0x278
	FText ObjectiveText; // 0x280
	bool ShowDivide; // 0x298
};

struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
};

struct UYAssetCheckerDataAsset : UDataAsset {
	TMap<UObject*, FYAssetValidatorEntry> m_validationEntries; // 0x30
	TSoftObjectPtr<UDataAsset> m_dataValidatorPath; // 0x80
};

struct UYActorWidgetSimple : UYActorWidget {
	UImage* m_image; // 0x388
	UTextBlock* m_title; // 0x390
	UTextBlock* m_playerName; // 0x398
	UTextBlock* m_distanceText; // 0x3a0
};

struct AGeometryCollectionDebugDrawActor : AActor {
	FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x240
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x248
	bool bDebugDrawWholeCollection; // 0x260
	bool bDebugDrawHierarchy; // 0x261
	bool bDebugDrawClustering; // 0x262
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x263
	bool bShowRigidBodyId; // 0x264
	bool bShowRigidBodyCollision; // 0x265
	bool bCollisionAtOrigin; // 0x266
	bool bShowRigidBodyTransform; // 0x267
	bool bShowRigidBodyInertia; // 0x268
	bool bShowRigidBodyVelocity; // 0x269
	bool bShowRigidBodyForce; // 0x26a
	bool bShowRigidBodyInfos; // 0x26b
	bool bShowTransformIndex; // 0x26c
	bool bShowTransform; // 0x26d
	bool bShowParent; // 0x26e
	bool bShowLevel; // 0x26f
	bool bShowConnectivityEdges; // 0x270
	bool bShowGeometryIndex; // 0x271
	bool bShowGeometryTransform; // 0x272
	bool bShowBoundingBox; // 0x273
	bool bShowFaces; // 0x274
	bool bShowFaceIndices; // 0x275
	bool bShowFaceNormals; // 0x276
	bool bShowSingleFace; // 0x277
	int32_t SingleFaceIndex; // 0x278
	bool bShowVertices; // 0x27c
	bool bShowVertexIndices; // 0x27d
	bool bShowVertexNormals; // 0x27e
	bool bUseActiveVisualization; // 0x27f
	float PointThickness; // 0x280
	float LineThickness; // 0x284
	bool bTextShadow; // 0x288
	float TextScale; // 0x28c
	float NormalScale; // 0x290
	float AxisScale; // 0x294
	float ArrowScale; // 0x298
	FColor RigidBodyIdColor; // 0x29c
	float RigidBodyTransformScale; // 0x2a0
	FColor RigidBodyCollisionColor; // 0x2a4
	FColor RigidBodyInertiaColor; // 0x2a8
	FColor RigidBodyVelocityColor; // 0x2ac
	FColor RigidBodyForceColor; // 0x2b0
	FColor RigidBodyInfoColor; // 0x2b4
	FColor TransformIndexColor; // 0x2b8
	float TransformScale; // 0x2bc
	FColor LevelColor; // 0x2c0
	FColor ParentColor; // 0x2c4
	float ConnectivityEdgeThickness; // 0x2c8
	FColor GeometryIndexColor; // 0x2cc
	float GeometryTransformScale; // 0x2d0
	FColor BoundingBoxColor; // 0x2d4
	FColor FaceColor; // 0x2d8
	FColor FaceIndexColor; // 0x2dc
	FColor FaceNormalColor; // 0x2e0
	FColor SingleFaceColor; // 0x2e4
	FColor VertexColor; // 0x2e8
	FColor VertexIndexColor; // 0x2ec
	FColor VertexNormalColor; // 0x2f0
	UBillboardComponent* SpriteComponent; // 0x2f8
};

struct UTransformProxy : UObject {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct UBTService_AIState_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	EYAIState NewAIState; // 0xa0
	FBlackboardKeySelector AIStateKey; // 0xa8
};

struct USlateAccessibleWidgetData : UObject {
	bool bCanChildrenBeAccessible; // 0x28
	ESlateAccessibleBehavior AccessibleBehavior; // 0x29
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a
	FText AccessibleText; // 0x30
	FDelegate AccessibleTextDelegate; // 0x48
	FText AccessibleSummaryText; // 0x58
	FDelegate AccessibleSummaryTextDelegate; // 0x70
};

struct AYActivityLocation : AActor {
	EYActivityLocationStatus m_status; // 0x240
	float m_respawnBlockTime; // 0x244
	UYMapMarkerComponent* m_debugMapMarkerComponent; // 0x248
	TArray<EYActivityType> m_compatibleActivities; // 0x250
	EYActivityType m_activityType; // 0x260
	float m_spawnWeight; // 0x264
	FTimerHandle m_timerHandleFreeLocation; // 0x268
	FMulticastInlineDelegate BP_OnStatusChanged; // 0x270
	bool m_isGenericActivityLocation; // 0x280
	float m_spawnRadiusOverride; // 0x284
};

struct UMovieSceneCompiledData : UObject {
	FMovieSceneEvaluationTemplate EvaluationTemplate; // 0x28
	FMovieSceneSequenceHierarchy Hierarchy; // 0x188
	FMovieSceneEntityComponentField EntityComponentField; // 0x2a0
	FMovieSceneEvaluationField TrackTemplateField; // 0x390
	TArray<FFrameTime> DeterminismFences; // 0x3c0
	FGuid CompiledSignature; // 0x3d0
	FGuid CompilerVersion; // 0x3e0
	FMovieSceneSequenceCompilerMaskStruct AccumulatedMask; // 0x3f0
	FMovieSceneSequenceCompilerMaskStruct AllocatedMask; // 0x3f1
	EMovieSceneSequenceFlags AccumulatedFlags; // 0x3f2
};

struct UYWidgetPoolManager : UObject {
	TMap<FSoftObjectPath, int32_t> m_widgetClassToPoolInMenuMap; // 0x28
	TMap<FSoftObjectPath, int32_t> m_widgetClassToPoolInGameMap; // 0x78
	TArray<UUserWidget*> m_pooledWidgets; // 0xc8
};

struct UMovieSceneAudioSection : UMovieSceneSection {
	USoundBase* Sound; // 0xe8
	FFrameNumber StartFrameOffset; // 0xf0
	float StartOffset; // 0xf4
	float AudioStartTime; // 0xf8
	float AudioDilationFactor; // 0xfc
	float AudioVolume; // 0x100
	FMovieSceneFloatChannel SoundVolume; // 0x108
	FMovieSceneFloatChannel PitchMultiplier; // 0x1a8
	FMovieSceneActorReferenceData AttachActorData; // 0x248
	bool bLooping; // 0x2f8
	bool bSuppressSubtitles; // 0x2f9
	bool bOverrideAttenuation; // 0x2fa
	USoundAttenuation* AttenuationSettings; // 0x300
	FDelegate OnQueueSubtitles; // 0x308
	FMulticastInlineDelegate OnAudioFinished; // 0x318
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x328
};

struct UGizmoPlaneScaleParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float ScaleMultiplier; // 0xb0
	FVector2D Parameter; // 0xb4
	FGizmoVec2ParameterChange LastChange; // 0xbc
	FVector CurScaleOrigin; // 0xcc
	FVector CurScaleNormal; // 0xd8
	FVector CurScaleAxisX; // 0xe4
	FVector CurScaleAxisY; // 0xf0
	FTransform InitialTransform; // 0x100
};

struct UWBP_ItemTooltip_C : UYWidgetView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UWidgetAnimation* ScreenIn_Anim; // 0x340
	UImage* Gfx_BottomEdge; // 0x348
	UImage* Gfx_BottomEdge_Triangle; // 0x350
	UImage* Gfx_BottomEdge_Triangle_Outer; // 0x358
	UImage* Gfx_Shadow; // 0x360
	UImage* Gfx_TopEdge; // 0x368
	UImage* Gfx_TopEdge_Triangle; // 0x370
	UImage* Gfx_TopEdge_Triangle_Outer; // 0x378
	UImage* m_Gfx_Item_Dynamic_2; // 0x380
	UWBP_BlurBacker_Panel_C* WBP_Deco_BlurPanel; // 0x388
	UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x390
	UWBP_ItemDetails_C* WBP_ItemDetails; // 0x398
	UYWidget_ItemContainer* parentItemContainer; // 0x3a0
	FDataTableRowHandle AttachmentScreenRebindableInput; // 0x3a8
	bool bShowAttachmentScreenKey; // 0x3b8
	bool CanBeCleared; // 0x3b9
};

struct UYMetaQuestPlayerInstanceComponent : UActorComponent {
	FMulticastInlineDelegate OnMissionStateUpdated; // 0xb0
	FYMissionRuntimeInitializationData m_runtimeInitializationData; // 0xc0
	FDataTableRowHandle m_rowHandle; // 0xf0
	TMap<int32_t, FYMissionStepProgressEntry> m_stepEntries; // 0x108
	FYMissionReplicatedStateData m_missionReplicatedStateData; // 0x160
};

struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28
};

struct UOnboarding_01_TalkToBadum_C : UMS_Line_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1b0
	FName SceneToInteract; // 0x1b8
	TArray<FName> ContractNPCS; // 0x1c0
	TArray<EYContractStatus> ContractStatusToCheck; // 0x1d0
	FDataTableRowHandle missionSceneRowHandle; // 0x1e0
	FDataTableRowHandle contractSceneRowHandle; // 0x1f0
	FName badumId; // 0x200
	FName contractsId; // 0x208
};

struct AGeometryCollectionRenderLevelSetActor : AActor {
	UVolumeTexture* TargetVolumeTexture; // 0x240
	UMaterial* RayMarchMaterial; // 0x248
	float SurfaceTolerance; // 0x250
	float Isovalue; // 0x254
	bool Enabled; // 0x258
	bool RenderVolumeBoundingBox; // 0x259
};

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UAnimationSharingSetup : UObject {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct UCameraComponent : USceneComponent {
	float FieldOfView; // 0x1f8
	float OrthoWidth; // 0x1fc
	float OrthoNearClipPlane; // 0x200
	float OrthoFarClipPlane; // 0x204
	float AspectRatio; // 0x208
	char bConstrainAspectRatio : 1; // 0x20c
	char bUseFieldOfViewForLOD : 1; // 0x20c
	char bLockToHmd : 1; // 0x20c
	char bUsePawnControlRotation : 1; // 0x20c
	ECameraProjectionMode ProjectionMode; // 0x20d
	float PostProcessBlendWeight; // 0x240
	FPostProcessSettings PostProcessSettings; // 0x270
};

struct UYActivityComponent : UActorComponent {
	bool m_destroySkeletalMeshesOnDedicatedServer; // 0xb0
	bool m_isPlacedInWorld; // 0xb1
	AYActivityActorManager* m_activityActorManager; // 0xb8
	UYActivityRegisterComponent* m_registerComponent; // 0xc0
	AYActivityLocation* m_activityLocation; // 0xc8
	bool m_isMarkedAsDepleted; // 0xd0
	FString m_activitySubType; // 0xd8
	FString m_actorBIName; // 0xe8
	FMulticastInlineDelegate OnActivityActorDepleted; // 0xf8
	FMulticastInlineDelegate OnActivitySetupComplete; // 0x108
	FMulticastInlineDelegate OnActivitySetupCompletePlacedInWorld; // 0x118
};

struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UMaterial : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x90
	UPhysicalMaterialMask* PhysMaterialMask; // 0x98
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0xa0
	FScalarMaterialInput Metallic; // 0xe0
	FScalarMaterialInput Specular; // 0xf4
	FScalarMaterialInput Anisotropy; // 0x108
	FVectorMaterialInput Normal; // 0x11c
	FVectorMaterialInput Tangent; // 0x130
	FColorMaterialInput EmissiveColor; // 0x144
	EMaterialDomain MaterialDomain; // 0x158
	EBlendMode BlendMode; // 0x159
	EDecalBlendMode DecalBlendMode; // 0x15a
	EMaterialDecalResponse MaterialDecalResponse; // 0x15b
	EMaterialShadingModel ShadingModel; // 0x15c
	char bCastDynamicShadowAsMasked : 1; // 0x15d
	FMaterialShadingModelField ShadingModels; // 0x15e
	float OpacityMaskClipValue; // 0x160
	FVectorMaterialInput WorldPositionOffset; // 0x164
	FScalarMaterialInput Refraction; // 0x178
	FMaterialAttributesInput MaterialAttributes; // 0x18c
	FScalarMaterialInput PixelDepthOffset; // 0x1a4
	FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x1b8
	char bEnableSeparateTranslucency : 1; // 0x1cc
	char bEnableResponsiveAA : 1; // 0x1cc
	char bScreenSpaceReflections : 1; // 0x1cc
	char bContactShadows : 1; // 0x1cc
	char TwoSided : 1; // 0x1cc
	char DitheredLODTransition : 1; // 0x1cc
	char DitherOpacityMask : 1; // 0x1cc
	char bAllowNegativeEmissiveColor : 1; // 0x1cc
	ETranslucencyLightingMode TranslucencyLightingMode; // 0x1cd
	char bEnableMobileSeparateTranslucency : 1; // 0x1ce
	int32_t NumCustomizedUVs; // 0x1d0
	float TranslucencyDirectionalLightingIntensity; // 0x1d4
	float TranslucentShadowDensityScale; // 0x1d8
	float TranslucentSelfShadowDensityScale; // 0x1dc
	float TranslucentSelfShadowSecondDensityScale; // 0x1e0
	float TranslucentSelfShadowSecondOpacity; // 0x1e4
	float TranslucentBackscatteringExponent; // 0x1e8
	FLinearColor TranslucentMultipleScatteringExtinction; // 0x1ec
	float TranslucentShadowStartOffset; // 0x1fc
	char bDisableDepthTest : 1; // 0x200
	char bWriteOnlyAlpha : 1; // 0x200
	char bGenerateSphericalParticleNormals : 1; // 0x200
	char bTangentSpaceNormal : 1; // 0x200
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x200
	char bBlockGI : 1; // 0x200
	char bUsedAsSpecialEngineMaterial : 1; // 0x200
	char bUsedWithSkeletalMesh : 1; // 0x200
	char bUsedWithEditorCompositing : 1; // 0x201
	char bUsedWithParticleSprites : 1; // 0x201
	char bUsedWithBeamTrails : 1; // 0x201
	char bUsedWithMeshParticles : 1; // 0x201
	char bUsedWithNiagaraSprites : 1; // 0x201
	char bUsedWithNiagaraRibbons : 1; // 0x201
	char bUsedWithNiagaraMeshParticles : 1; // 0x201
	char bUsedWithGeometryCache : 1; // 0x201
	char bUsedWithStaticLighting : 1; // 0x202
	char bUsedWithMorphTargets : 1; // 0x202
	char bUsedWithSplineMeshes : 1; // 0x202
	char bUsedWithInstancedStaticMeshes : 1; // 0x202
	char bUsedWithGeometryCollections : 1; // 0x202
	char bUsesDistortion : 1; // 0x202
	char bUsedWithClothing : 1; // 0x202
	char bUsedWithWater : 1; // 0x204
	char bUsedWithHairStrands : 1; // 0x204
	char bUsedWithLidarPointCloud : 1; // 0x204
	char bUsedWithVirtualHeightfieldMesh : 1; // 0x204
	char bUsedWithUI : 1; // 0x208
	char bAutomaticallySetUsageInEditor : 1; // 0x208
	char bFullyRough : 1; // 0x208
	char bUseFullPrecision : 1; // 0x208
	char bUseLightmapDirectionality : 1; // 0x208
	char bUseAlphaToCoverage : 1; // 0x208
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x20c
	char bUseHQForwardReflections : 1; // 0x210
	char bUsePlanarForwardReflections : 1; // 0x210
	char bNormalCurvatureToRoughness : 1; // 0x210
	EMaterialTessellationMode D3D11TessellationMode; // 0x211
	char bEnableCrackFreeDisplacement : 1; // 0x212
	char bEnableAdaptiveTessellation : 1; // 0x212
	char AllowTranslucentCustomDepthWrites : 1; // 0x212
	char Wireframe : 1; // 0x212
	EMaterialShadingRate ShadingRate; // 0x213
	char bCanMaskedBeAssumedOpaque : 1; // 0x214
	char bIsMasked : 1; // 0x214
	char bIsPreviewMaterial : 1; // 0x214
	char bIsFunctionPreviewMaterial : 1; // 0x214
	char bUseMaterialAttributes : 1; // 0x214
	char bCastRayTracedShadows : 1; // 0x214
	char bUseTranslucencyVertexFog : 1; // 0x214
	char bApplyCloudFogging : 1; // 0x214
	char bIsSky : 1; // 0x215
	char bComputeFogPerPixel : 1; // 0x215
	char bOutputTranslucentVelocity : 1; // 0x215
	char bAllowDevelopmentShaderCompile : 1; // 0x215
	char bIsMaterialEditorStatsMaterial : 1; // 0x215
	EBlendableLocation BlendableLocation; // 0x216
	char BlendableOutputAlpha : 1; // 0x217
	char bEnableStencilTest : 1; // 0x217
	EMaterialStencilCompare StencilCompare; // 0x218
	char StencilRefValue; // 0x219
	ERefractionMode RefractionMode; // 0x21a
	int32_t BlendablePriority; // 0x21c
	char bIsBlendable : 1; // 0x220
	uint32_t UsageFlagWarnings; // 0x224
	float RefractionDepthBias; // 0x228
	FGuid StateId; // 0x22c
	float MaxDisplacement; // 0x23c
	FMaterialCachedExpressionData CachedExpressionData; // 0x270
};

struct UYWeaponAnalyticsComponent : UActorComponent {
	TMap<FUniqueNetIdRepl, FYWeaponAnalyticsPerPlayer> m_weaponAnalyticsPerPlayer; // 0xb0
};

struct UTestScreen1 : UTestState1 {
	TSoftClassPtr<UObject> m_widgetBp; // 0x58
};

struct UActorSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
};

struct AYAISquad : AActor {
	TArray<AYAICharacter*> m_squadCharacters; // 0x250
	UYPersistentDataAISquad* m_persistentSquadData; // 0x260
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct AYNPCObject : AActor {
	FYSceneSetupData m_sceneSetupData; // 0x240
	UStaticMeshComponent* m_staticMesh; // 0x258
	FDataTableRowHandle m_npcRowHandle; // 0x260
	FViewTargetTransitionParams m_cameraData; // 0x270
	USceneComponent* m_rootComponent; // 0x280
	EYNPCType m_npcType; // 0x288
	bool m_shouldPlayVoiceOverOnInteraction; // 0x289
};

struct UYWidget_EscapeMenuItem : UYWidget {
	UYButton* m_button; // 0x2d0
};

struct UYCharacterVanityDataComponent : UActorComponent {
	FYActiveGlobalRuntimeVanityData m_activeData; // 0xb0
	FDataTableRowHandle m_socialRow; // 0x130
	FMulticastInlineDelegate OnGlobalVanityUpdatedDelegate; // 0x140
	FMulticastInlineDelegate OnAsyncloadingStateChanged; // 0x150
	FMulticastInlineDelegate OnGlobalVanityEntryUpdatedDelegate; // 0x160
	FMulticastInlineDelegate OnSocialRowChanged; // 0x170
	TArray<UObject*> m_hardReferenedAsyncloadData; // 0x188
	bool m_shouldAsyncloadData; // 0x198
	bool m_finishedAsyncloading; // 0x199
};

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct UYWidget_SocialUserEntry : UYWidget {
	FYOutpostFriendInfo m_cachedUserInfo; // 0x2c0
};

struct UWBP_FlashFeedback_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* Flash_Anim; // 0x2c8
	UImage* Gfx_Flash_Angle; // 0x2d0
	UImage* Gfx_InnerGlow; // 0x2d8
	UImage* Gfx_Stroke; // 0x2e0
	FLinearColor SetColor; // 0x2e8
};

struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30
};

struct UYProjectileMovementComponent : UProjectileMovementComponent {
	float m_acceleration; // 0x1d0
	float m_accelerationDelay; // 0x1d4
	float m_accelerationAdditionalMaxSpeed; // 0x1d8
	FMulticastInlineDelegate OnImpactStillRetrace; // 0x1e0
	FDataTableRowHandle m_cachedSpawnedTransportRowHandle; // 0x1f0
	UYGameplayAttributesComponent* m_cachedGameplayAttributeComponent; // 0x200
	EYGameplayContextType m_gameplayContextType; // 0x208
};

struct UParticleLODLevel : UObject {
	int32_t Level; // 0x28
	char bEnabled : 1; // 0x2c
	UParticleModuleRequired* RequiredModule; // 0x30
	TArray<UParticleModule*> Modules; // 0x38
	UParticleModuleTypeDataBase* TypeDataModule; // 0x48
	UParticleModuleSpawn* SpawnModule; // 0x50
	UParticleModuleEventGenerator* EventGenerator; // 0x58
	TArray<UParticleModuleSpawnBase*> SpawningModules; // 0x60
	TArray<UParticleModule*> SpawnModules; // 0x70
	TArray<UParticleModule*> UpdateModules; // 0x80
	TArray<UParticleModuleOrbit*> OrbitModules; // 0x90
	TArray<UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa0
	char ConvertedModules : 1; // 0xb0
	int32_t PeakActiveParticles; // 0xb4
};

struct UBTTask_ClearAllAggroTargets_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	TArray<FBlackboardKeySelector> KeysToClear; // 0xb0
};

struct UAnimNotify_PlayEffort_C : UAnimNotify {
	EN_EffortTypes Effort; // 0x38
	bool NetMulticast; // 0x39
};

struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x440
	int32_t SectionBaseY; // 0x444
	int32_t ComponentSizeQuads; // 0x448
	int32_t SubsectionSizeQuads; // 0x44c
	int32_t NumSubsections; // 0x450
	UMaterialInterface* OverrideMaterial; // 0x458
	UMaterialInterface* OverrideHoleMaterial; // 0x460
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x468
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x478
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x488
	TArray<int8_t> LODIndexToMaterialIndex; // 0x498
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4a8
	UTexture2D* XYOffsetmapTexture; // 0x4b8
	FVector4 WeightmapScaleBias; // 0x4c0
	float WeightmapSubsectionOffset; // 0x4d0
	FVector4 HeightmapScaleBias; // 0x4e0
	FBox CachedLocalBox; // 0x4f0
	LazyObjectProperty CollisionComponent; // 0x50c
	UTexture2D* HeightmapTexture; // 0x528
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x530
	TArray<UTexture2D*> WeightmapTextures; // 0x540
	ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x550
	FGuid MapBuildDataId; // 0x558
	TArray<FGuid> IrrelevantLights; // 0x568
	int32_t CollisionMipLevel; // 0x578
	int32_t SimpleCollisionMipLevel; // 0x57c
	float NegativeZBoundsExtension; // 0x580
	float PositiveZBoundsExtension; // 0x584
	float StaticLightingResolution; // 0x588
	int32_t ForcedLOD; // 0x58c
	int32_t LODBias; // 0x590
	FGuid StateId; // 0x594
	FGuid BakedTextureMaterialGuid; // 0x5a4
	UTexture2D* GIBakedBaseColorTexture; // 0x5b8
	char MobileBlendableLayerMask; // 0x5c0
	UMaterialInterface* MobileMaterialInterface; // 0x5c8
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x5d0
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x5e0
};

struct UActorPlate_WBP_C : UYWidget_ActorPlate {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8
	UWBP_HealthBar_HUD_Item_C* UI_HealthBarWithDelta_WBP; // 0x3b0
};

struct UWBP_Transition_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* TransitionOut_Anim; // 0x2c8
	UWidgetAnimation* TransitionIn_Anim; // 0x2d0
	UImage* Gfx_Logo; // 0x2d8
	FMulticastInlineDelegate AnimationFinished; // 0x2e0
	int32_t NewVar_1; // 0x2f0
	float DurationBeforeTransition; // 0x2f4
};

struct UModularSynthPresetBank : UObject {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct UWBP_Bug_Form_Menu_C : UYWidgetView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UWidgetAnimation* ScreenIn_Anim; // 0x340
	UMultiLineEditableText* EditTxtMulti_PlayerBehaviour; // 0x348
	UMultiLineEditableText* EditTxtMulti_ReproSteps; // 0x350
	UEditableTextBox* EditTxtSingle_BugSummary; // 0x358
	UImage* Gfx_Backer_2; // 0x360
	UImage* Gfx_Backer_3; // 0x368
	UImage* Gfx_BG_DarkColor; // 0x370
	UImage* Gfx_BG_LightColor; // 0x378
	UImage* Gfx_Grid_Helper; // 0x380
	UImage* HACKCLICKBLOCK; // 0x388
	UOverlay* LoadingOverlay; // 0x390
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x398
	UWBP_Common_Btn_C* WBP_Common_Btn_AttachFile; // 0x3a0
	UWBP_Common_Btn_C* WBP_Common_Btn_Cancel; // 0x3a8
	UWBP_Common_Btn_C* WBP_Common_Btn_Submit; // 0x3b0
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x3b8
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn; // 0x3c0
	UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x3c8
	UWBP_Toast_C* WBP_Toast; // 0x3d0
	UWBP_BugReporter_Provider_C* BugReporterProvider; // 0x3d8
	FText FailureAlphanumeric; // 0x3e0
	FText FailureMissingText; // 0x3f8
	float SuccessAnimDelay; // 0x410
};

struct UWidgetAnimationPlayCallbackProxy : UObject {
	FMulticastInlineDelegate Finished; // 0x28
};

struct UWBP_Contract_Active_Entry_C : UYWidget_FactionContract {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UOverlay* ContractExpired; // 0x348
	UVerticalBox* ContractObjectives; // 0x350
	USizeBox* Description; // 0x358
	UImage* Gfx_AlternativeBacker; // 0x360
	UImage* Gfx_Expired_Backer; // 0x368
	UImage* Icn_Faction; // 0x370
	UImage* Icn_Timer; // 0x378
	UImage* Icn_TimerExpired; // 0x380
	USizeBox* InfoIcon; // 0x388
	UHorizontalBox* TimerHolder; // 0x390
	UTextBlock* Txt_ContractName; // 0x398
	UTextBlock* Txt_Expired; // 0x3a0
	UTextBlock* Txt_Timer; // 0x3a8
	UWBP_Headline_Panel_C* WBP_Headline_Panel; // 0x3b0
	UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue; // 0x3b8
	UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_2; // 0x3c0
	UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_3; // 0x3c8
	UYTextBlock* YTxt_ContractDescription; // 0x3d0
	bool UseAlternateBacker; // 0x3d8
};

struct UYWidget_ItemComponentTextUpgradePrice : UYWidget_ItemComponentBase {
	UYWidget_PriceGeneric* m_priceWidget; // 0x300
};

struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	UTexture* Texture; // 0x38
};

struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct UYKeybindingsModel : UObject {
	FMulticastInlineDelegate OnKeyReassigned; // 0x28
	FMulticastInlineDelegate OnKeySet; // 0x38
	FMulticastInlineDelegate OnKeybindingDataChanged; // 0x48
	EYKeybindingInputDeviceType m_activeInputDevice; // 0x58
	FYKeybindings m_keybindings; // 0x60
	TArray<FYKeybindingData> m_addedBindings; // 0xd8
	TArray<FYKeybindingData> m_removedBindings; // 0xe8
};

struct UAnimCompress_RemoveLinearKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
	float MaxEffectorDiff; // 0x4c
	float MinEffectorDiff; // 0x50
	float EffectorDiffSocket; // 0x54
	float ParentKeyScale; // 0x58
	char bRetarget : 1; // 0x5c
	char bActuallyFilterLinearKeys : 1; // 0x5c
};

struct UWBP_SelectionHighlight_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Idle_Anim; // 0x268
	UImage* Gfx_HighlightLeft; // 0x270
	UImage* Gfx_HighlightRight; // 0x278
};

struct UBoundsCopyComponent : UActorComponent {
	TSoftObjectPtr<AActor> BoundsSourceActor; // 0xb0
	bool bUseCollidingComponentsForSourceBounds; // 0xd8
	bool bKeepOwnBoundsScale; // 0xd9
	bool bUseCollidingComponentsForOwnBounds; // 0xda
	FTransform PostTransform; // 0xe0
	bool bCopyXBounds; // 0x110
	bool bCopyYBounds; // 0x111
	bool bCopyZBounds; // 0x112
};

struct UYWidget_ItemComponentRecipeModTune : UYWidget_ItemComponentBase {
	TMap<FString, UYWidget_ItemContainer*> m_materialsMap; // 0x300
};

struct UPawnSensingComponent : UActorComponent {
	float HearingThreshold; // 0xb0
	float LOSHearingThreshold; // 0xb4
	float SightRadius; // 0xb8
	float SensingInterval; // 0xbc
	float HearingMaxSoundAge; // 0xc0
	char bEnableSensingUpdates : 1; // 0xc4
	char bOnlySensePlayers : 1; // 0xc4
	char bSeePawns : 1; // 0xc4
	char bHearNoises : 1; // 0xc4
	FMulticastInlineDelegate OnSeePawn; // 0xd0
	FMulticastInlineDelegate OnHearNoise; // 0xe0
	float PeripheralVisionAngle; // 0xf0
	float PeripheralVisionCosine; // 0xf4
};

struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct UYAIAnimationComponent : UActorComponent {
	FYAIMontagePlayInfo m_playMontageInfo; // 0xb0
	FYAIMontageStopInfo m_stopMontageInfo; // 0xd0
	FYAIEndLoopInfo m_endLoopInfo; // 0xe0
};

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
};

struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x270
	TArray<AOnlineBeaconClient*> ClientActors; // 0x278
};

struct UYPlayerProximityManagerComponent : UActorComponent {
	TArray<UYLocalPlayerProximityComponent*> m_proximityComponents; // 0xb0
};

struct UYWidget_Composite : UYWidget {
	FName m_registeredName; // 0x2c0
};

struct UYMissionManager : UObject {
	FMulticastInlineDelegate OnMissionRewardsReceived; // 0x28
	FMulticastInlineDelegate OnMissionDataUpdated; // 0x38
	FMulticastInlineDelegate OnCurrenciesUpdate; // 0x48
};

struct UYWidget_FactionShop : UYWidget_WeaponShop {
	UYWidget_ItemDetailOverview* m_itemDetailOverviewWidget; // 0x328
};

struct UMRMeshComponent : UPrimitiveComponent {
	UMaterialInterface* Material; // 0x450
	UMaterialInterface* WireframeMaterial; // 0x458
	bool bCreateMeshProxySections; // 0x460
	bool bUpdateNavMeshOnMeshUpdate; // 0x461
	bool bNeverCreateCollisionMesh; // 0x462
	UBodySetup* CachedBodySetup; // 0x468
	TArray<UBodySetup*> BodySetups; // 0x470
};

struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x240
};

struct UWBP_SquadOverview_C : UYWidget_OutpostSquadToggle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UButton* Btn_LeaveSquad; // 0x2f0
};

struct AFieldSystemActor : AActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x240
};

struct UYWidget_ItemComponentTextRarity : UYWidget_ItemComponentBase {
	UTextBlock* m_rarityText; // 0x300
};

struct UMovieSceneFadeSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UYWidget_RankedLeaderboardSmall : UYWidget_RankedLeaderboardBase {
	FMulticastInlineDelegate OnClickedExpandRanked; // 0x2c8
};

struct USkeletalMesh : UStreamableRenderAsset {
	USkeleton* Skeleton; // 0x80
	FBoxSphereBounds ImportedBounds; // 0x88
	FBoxSphereBounds ExtendedBounds; // 0xa4
	FVector PositiveBoundsExtension; // 0xc0
	FVector NegativeBoundsExtension; // 0xcc
	TArray<FSkeletalMaterial> Materials; // 0xd8
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xe8
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0xf8
	FPerPlatformInt MinLOD; // 0x158
	FPerPlatformBool DisableBelowMinLodStripping; // 0x15c
	EAxis SkelMirrorAxis; // 0x15d
	EAxis SkelMirrorFlipAxis; // 0x15e
	char bUseFullPrecisionUVs : 1; // 0x15f
	char bUseHighPrecisionTangentBasis : 1; // 0x15f
	char bHasBeenSimplified : 1; // 0x15f
	char bHasVertexColors : 1; // 0x15f
	char bEnablePerPolyCollision : 1; // 0x15f
	UBodySetup* BodySetup; // 0x160
	UPhysicsAsset* PhysicsAsset; // 0x168
	UPhysicsAsset* ShadowPhysicsAsset; // 0x170
	TArray<UNodeMappingContainer*> NodeMappingData; // 0x178
	TArray<UMorphTarget*> MorphTargets; // 0x188
	UAnimInstance* PostProcessAnimBlueprint; // 0x310
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x318
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x328
	TArray<UAssetUserData*> AssetUserData; // 0x358
	TArray<USkeletalMeshSocket*> Sockets; // 0x368
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x388
};

struct UNavLinkCustomComponent : UNavRelevantComponent {
	uint32_t NavLinkUserId; // 0xe8
	UNavArea* EnabledAreaClass; // 0xf0
	UNavArea* DisabledAreaClass; // 0xf8
	FNavAgentSelector SupportedAgents; // 0x100
	FVector LinkRelativeStart; // 0x104
	FVector LinkRelativeEnd; // 0x110
	ENavLinkDirection LinkDirection; // 0x11c
	char bLinkEnabled : 1; // 0x120
	char bNotifyWhenEnabled : 1; // 0x120
	char bNotifyWhenDisabled : 1; // 0x120
	char bCreateBoxObstacle : 1; // 0x120
	FVector ObstacleOffset; // 0x124
	FVector ObstacleExtent; // 0x130
	UNavArea* ObstacleAreaClass; // 0x140
	float BroadcastRadius; // 0x148
	float BroadcastInterval; // 0x14c
	ECollisionChannel BroadcastChannel; // 0x150
};

struct AYExtractionActor : AActor {
	UYObjectInteractionComponent* m_interactionComponent; // 0x250
	float m_activationTime; // 0x258
	float m_activationDuration; // 0x25c
	EYExtractionActorState m_state; // 0x260
};

struct UYWidget_PlayerItemsOverview : UYWidget {
	FMulticastInlineDelegate OnItemDroppedOnAreaSignature; // 0x2c8
	TArray<UYWidget_ItemContainer*> m_itemEntries; // 0x2d8
	TMap<int32_t, FYPlayerItemUIData> m_playerItemsData; // 0x2e8
};

struct UYWidget_CurrentRankedSeasonTopPlayers : UYWidget {
	int32_t m_amountofTopPlayersToShow; // 0x2c0
	EYMatchmakeGameModeType m_matchmakeGameModeType; // 0x2c4
	FYPlayersRankedSeasonData m_cachedPlayersRankedSeasonData; // 0x2c8
};

struct UYWidget_Popup_BeforeMatch_Warning : UYWidget {
	bool m_configShouldSkipBeforeMatchWarning; // 0x2c0
};

struct UPhononSpatializationSourceSettings : USpatializationPluginSourceSettingsBase {
	EIplSpatializationMethod SpatializationMethod; // 0x28
	EIplHrtfInterpolationMethod HrtfInterpolationMethod; // 0x29
};

struct UAudioImpulseResponse : UObject {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct UPropertyValue : UObject {
	TArray<TFieldPath<FProperty>> Properties; // 0x88
	TArray<int32_t> PropertyIndices; // 0x98
	TArray<FCapturedPropSegment> CapturedPropSegments; // 0xa8
	FString FullDisplayString; // 0xb8
	FName PropertySetterName; // 0xc8
	TMap<FString, FString> PropertySetterParameterDefaults; // 0xd0
	bool bHasRecordedData; // 0x120
	UObject* LeafPropertyClass; // 0x128
	TArray<char> ValueBytes; // 0x138
	EPropertyValueCategory PropCategory; // 0x148
};

struct UYWidget_LaunchGameModeEntry : UYWidget {
	UYWidget_ImageBase* m_gameModeIcon; // 0x2d8
	UYWidget_ImageBase* m_gameModeImage; // 0x2e0
	UYWidget_ImageBase* m_gameModeBackgroundImage; // 0x2e8
	UYWidget_ImageBase* m_gameModeSelectedBackgroundImage; // 0x2f0
	UYWidget_ImageBase* m_gameModeHoverBackgroundImage; // 0x2f8
	UTextBlock* m_gameModeNameTextBlock; // 0x300
	UTextBlock* m_gameModeDescriptionTextBlock; // 0x308
	UButton* m_gameModeButton; // 0x310
	bool m_isSelected; // 0x318
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x440
	char bEnableMaterialParameterCaching : 1; // 0x460
};

struct UAISystem : UAISystemBase {
	FSoftClassPath PerceptionSystemClassName; // 0x58
	FSoftClassPath HotSpotManagerClassName; // 0x70
	float AcceptanceRadius; // 0x88
	float PathfollowingRegularPathPointAcceptanceRadius; // 0x8c
	float PathfollowingNavLinkAcceptanceRadius; // 0x90
	bool bFinishMoveOnGoalOverlap; // 0x94
	bool bAcceptPartialPaths; // 0x95
	bool bAllowStrafing; // 0x96
	bool bEnableBTAITasks; // 0x97
	bool bAllowControllersAsEQSQuerier; // 0x98
	bool bEnableDebuggerPlugin; // 0x99
	bool bForgetStaleActors; // 0x9a
	bool bAddBlackboardSelfKey; // 0x9b
	ECollisionChannel DefaultSightCollisionChannel; // 0x9c
	UBehaviorTreeManager* BehaviorTreeManager; // 0xa0
	UEnvQueryManager* EnvironmentQueryManager; // 0xa8
	UAIPerceptionSystem* PerceptionSystem; // 0xb0
	TArray<UAIAsyncTaskBlueprintProxy*> AllProxyObjects; // 0xb8
	UAIHotSpotManager* HotSpotManager; // 0xc8
	UNavLocalGridManager* NavLocalGrids; // 0xd0
};

struct UMovieSceneMediaSection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLooping; // 0xf0
	FFrameNumber StartFrameOffset; // 0xf4
	UMediaTexture* MediaTexture; // 0xf8
	UMediaSoundComponent* MediaSoundComponent; // 0x100
	bool bUseExternalMediaPlayer; // 0x108
	UMediaPlayer* ExternalMediaPlayer; // 0x110
};

struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x240
	USceneComponent* SceneComponent; // 0x248
};

struct UAnimNotify_PlayNiagaraEffect : UAnimNotify {
	UNiagaraSystem* Template; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	bool bAbsoluteScale; // 0x64
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UYWidget_OutpostSquadToggle : UYWidget {
	UYWidget_OutpostSquadOverviewEntry* m_memberEntry_Self; // 0x2c0
	UYWidget_OutpostSquadOverviewEntry* m_memberEntry1; // 0x2c8
	UYWidget_OutpostSquadOverviewEntry* m_memberEntry2; // 0x2d0
	FMulticastInlineDelegate OnSquadToggleClicked; // 0x2d8
};

struct UMultiLineEditableText : UTextLayoutWidget {
	FText Text; // 0x128
	FText HintText; // 0x140
	FDelegate HintTextDelegate; // 0x158
	FTextBlockStyle WidgetStyle; // 0x168
	bool bIsReadOnly; // 0x3d8
	FSlateFontInfo Font; // 0x3e0
	bool SelectAllTextWhenFocused; // 0x438
	bool ClearTextSelectionOnFocusLoss; // 0x439
	bool RevertTextOnEscape; // 0x43a
	bool ClearKeyboardFocusOnCommit; // 0x43b
	bool AllowContextMenu; // 0x43c
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x43d
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x43e
	FMulticastInlineDelegate OnTextChanged; // 0x440
	FMulticastInlineDelegate OnTextCommitted; // 0x450
};

struct UYTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle m_textBlockStyle; // 0x30
};

struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UYServerPerformanceDataComponent : UActorComponent {
	FYServerPerformanceData m_replicatedData; // 0xb0
};

struct UTacticalFlashLightComponent_BP_C : UYTacticalFlashlightComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	USpotLightComponent* FlashLightComponent; // 0xb8
	bool bIsEnabled; // 0xc0
	USoundBase* SFX_TorchButton; // 0xc8
};

struct ACharacter : APawn {
	USkeletalMeshComponent* Mesh; // 0x2a0
	UCharacterMovementComponent* CharacterMovement; // 0x2a8
	UCapsuleComponent* CapsuleComponent; // 0x2b0
	FBasedMovementInfo BasedMovement; // 0x2b8
	FBasedMovementInfo ReplicatedBasedMovement; // 0x2e8
	float AnimRootMotionTranslationScale; // 0x318
	FVector BaseTranslationOffset; // 0x31c
	FQuat BaseRotationOffset; // 0x330
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x340
	float ReplayLastTransformUpdateTimeStamp; // 0x344
	char ReplicatedMovementMode; // 0x348
	bool bInBaseReplication; // 0x349
	float CrouchedEyeHeight; // 0x34c
	char bIsCrouched : 1; // 0x350
	char bProxyIsJumpForceApplied : 1; // 0x350
	char bPressedJump : 1; // 0x350
	char bClientUpdating : 1; // 0x350
	char bClientWasFalling : 1; // 0x350
	char bClientResimulateRootMotion : 1; // 0x350
	char bClientResimulateRootMotionSources : 1; // 0x350
	char bSimGravityDisabled : 1; // 0x350
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x351
	char bServerMoveIgnoreRootMotion : 1; // 0x351
	char bWasJumping : 1; // 0x351
	float JumpKeyHoldTime; // 0x354
	float JumpForceTimeRemaining; // 0x358
	float ProxyJumpForceStartedTime; // 0x35c
	float JumpMaxHoldTime; // 0x360
	int32_t JumpMaxCount; // 0x364
	int32_t JumpCurrentCount; // 0x368
	int32_t JumpCurrentCountPreJump; // 0x36c
	FMulticastInlineDelegate OnReachedJumpApex; // 0x378
	FMulticastInlineDelegate MovementModeChangedDelegate; // 0x398
	FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x3a8
	FRootMotionSourceGroup SavedRootMotion; // 0x3b8
	FRootMotionMovementParams ClientRootMotionParams; // 0x3f0
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x430
	FRepRootMotionMontage RepRootMotion; // 0x440
	float m_rootMotionRotationScale; // 0x4d8
	bool m_isRootMotionRotationScalingEnabled; // 0x4dc
};

struct ABandwidthTestActor : AActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x240
};

struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0x98
	UPawnAction* RecentActionCopy; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
};

struct UWBP_DropdownBase_Btn_C : UYWidget_DropDown {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	TArray<FText> DefaultOptions; // 0x2d0
	FMulticastInlineDelegate OnSelectedOptionDelegate; // 0x2e0
};

struct UYFactionsProgressionManager : UObject {
	FMulticastInlineDelegate OnFactionProgressDataReceived; // 0x28
};

struct UYWidget_ItemComponentTextAmountCompare : UYWidget_ItemComponentTextAmount {
	UTextBlock* m_compareValueText; // 0x320
	int32_t m_compareValue; // 0x328
};

struct UYCharacterScopeGlintComponent_BP_C : UYCharacterWeaponGlintComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UParticleSystemComponent* GlintPS; // 0xb8
	UCurveFloat* GlintEffectCurve; // 0xc0
};

struct UPrefabricatorAssetInterface : UObject {
	UPrefabricatorEventListener* EventListener; // 0x28
	bool bReplicates; // 0x30
};

struct USequenceCameraShake : UCameraShakeBase {
	UCameraAnimationSequence* Sequence; // 0x98
	float PlayRate; // 0xa0
	float Scale; // 0xa4
	float BlendInTime; // 0xa8
	float BlendOutTime; // 0xac
	float RandomSegmentDuration; // 0xb0
	bool bRandomSegment; // 0xb4
	USequenceCameraShakeSequencePlayer* Player; // 0xb8
	USequenceCameraShakeCameraStandIn* CameraStandIn; // 0xc0
};

struct UYWidgetProvider_HUDInfo : UYWidgetProvider {
	FMulticastInlineDelegate OnUpdateHUDInfo; // 0x40
	FMulticastInlineDelegate OnUpdateHUDInfoCategory; // 0x50
	FMulticastInlineDelegate OnUpdateHUDProgress; // 0x60
	TArray<FYHUDInfoEntry> m_infoEntries; // 0x70
	TArray<EYHUDInfoPriorityCategory> m_customHandledCategories; // 0x80
};

struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	UTexture2DArray* Texture; // 0x38
};

struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct USoundCue : USoundBase {
	char bPrimeOnLoad : 1; // 0x1b8
	USoundNode* FirstNode; // 0x1c0
	float VolumeMultiplier; // 0x1c8
	float PitchMultiplier; // 0x1cc
	FSoundAttenuationSettings AttenuationOverrides; // 0x1d0
	float SubtitlePriority; // 0x570
	char bOverrideAttenuation : 1; // 0x578
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x578
	int32_t CookedQualityIndex; // 0x57c
	char bHasPlayWhenSilent : 1; // 0x580
};

struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct UYWidget_ItemComponentVanity : UYWidget_ItemComponentBase {
	FYExchangeVanityIdContextInfo m_exchangceVanityIdContextInfo; // 0x300
	UTextBlock* m_textHoveredItemInfo; // 0x330
	UCanvasPanel* m_canvasPanelHoveredItemInfo; // 0x338
	EYVanityType m_vanityType; // 0x340
};

struct UYWidget_ItemDetailOverview : UYWidget {
	FMulticastInlineDelegate OnBackButtonClicked; // 0x2c8
	UYWidget_ItemContainer* m_itemDetailWidget; // 0x2d8
	UYWidget_ItemContainer* m_blueprintDetailWidget; // 0x2e0
	UYWidget_VanitySwap* m_vanitySwapWidget; // 0x2e8
	bool m_isRequestingCustomizationModeChanges; // 0x2f0
};

struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
};

struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x240
	float CraneYaw; // 0x244
	float CraneArmLength; // 0x248
	bool bLockMountPitch; // 0x24c
	bool bLockMountYaw; // 0x24d
	USceneComponent* TransformComponent; // 0x250
	USceneComponent* CraneYawControl; // 0x258
	USceneComponent* CranePitchControl; // 0x260
	USceneComponent* CraneCameraMount; // 0x268
};

struct UNetConnection : UPlayer {
	TArray<UChildConnection*> Children; // 0x48
	UNetDriver* Driver; // 0x58
	UPackageMap* PackageMapClass; // 0x60
	UPackageMap* PackageMap; // 0x68
	TArray<UChannel*> OpenChannels; // 0x70
	TArray<AActor*> SentTemporaries; // 0x80
	AActor* ViewTarget; // 0x90
	AActor* OwningActor; // 0x98
	int32_t MaxPacket; // 0xa0
	char InternalAck : 1; // 0xa4
	FUniqueNetIdRepl PlayerId; // 0x160
	double LastReceiveTime; // 0x1d0
	TArray<UChannel*> ChannelsToTick; // 0x1518
};

struct AWaterBodyRiver : AWaterBody {
	URiverGenerator* RiverGenerator; // 0xe00
	UMaterialInterface* LakeTransitionMaterial; // 0xe08
	UMaterialInstanceDynamic* LakeTransitionMID; // 0xe10
	UMaterialInterface* OceanTransitionMaterial; // 0xe18
	UMaterialInstanceDynamic* OceanTransitionMID; // 0xe20
};

struct UToIntegerField : UFieldNodeInt {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct USkyLightComponent : ULightComponentBase {
	bool bRealTimeCapture; // 0x228
	ESkyLightSourceType SourceType; // 0x229
	UTextureCube* Cubemap; // 0x230
	float SourceCubemapAngle; // 0x238
	int32_t CubemapResolution; // 0x23c
	float SkyDistanceThreshold; // 0x240
	bool bCaptureEmissiveOnly; // 0x244
	bool bLowerHemisphereIsBlack; // 0x245
	FLinearColor LowerHemisphereColor; // 0x248
	float OcclusionMaxDistance; // 0x258
	float Contrast; // 0x25c
	float OcclusionExponent; // 0x260
	float MinOcclusion; // 0x264
	FColor OcclusionTint; // 0x268
	char bCloudAmbientOcclusion : 1; // 0x26c
	float CloudAmbientOcclusionStrength; // 0x270
	float CloudAmbientOcclusionExtent; // 0x274
	float CloudAmbientOcclusionMapResolutionScale; // 0x278
	float CloudAmbientOcclusionApertureScale; // 0x27c
	EOcclusionCombineMode OcclusionCombineMode; // 0x280
	UTextureCube* BlendDestinationCubemap; // 0x338
};

struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct ULeaderboardQueryCallbackProxy : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UYExcelConverterDataAsset : UDataAsset {
	TMap<EYMetaConverterTypes, FYCSVMetaDataEntry> m_data; // 0x30
	TSoftObjectPtr<UDataAsset> m_excelDataConverterPath; // 0x80
};

struct UTextureRenderTargetVolume : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	int32_t SizeZ; // 0xe8
	FLinearColor ClearColor; // 0xec
	EPixelFormat OverrideFormat; // 0xfc
	char bHDR : 1; // 0xfd
	char bForceLinearGamma : 1; // 0xfd
};

struct UARPoseComponent : UARComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct UYWidget_ItemComponentUpgradeButton : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnGotEnoughResourcesForUpgrade; // 0x300
};

struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x2b0
	bool bCaptureRotation; // 0x2b8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2c0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2d0
	float IPD; // 0x2d8
};

struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	FString Filename; // 0x58
};

struct UYLightManagerComponent : UActorComponent {
	TArray<AYLight*> m_lights; // 0xb0
};

struct UWBP_ItemDetails_C : UYWidget_ItemContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x580
	UWidgetAnimation* ScreenIn_Anim; // 0x588
	USizeBox* AmmoIconSizeBox; // 0x590
	UHorizontalBox* Amount; // 0x598
	UOverlay* CollapsedComponents; // 0x5a0
	UVerticalBox* CompatibleWeapons; // 0x5a8
	UUniformGridPanel* CompatibleWeaponsUniformGrid; // 0x5b0
	UOverlay* ComponentsContainer; // 0x5b8
	USizeBox* CurrencyHolder; // 0x5c0
	USizeBox* FactionPoints; // 0x5c8
	UImage* Gfx_ArrowNegative; // 0x5d0
	UImage* Gfx_ArrowPositive; // 0x5d8
	UImage* Gfx_DurabilityIcon; // 0x5e0
	UImage* Icn_Faction; // 0x5e8
	USizeBox* IconDurabilitySizeBox; // 0x5f0
	UNamedSlot* ImageHolder_Slot; // 0x5f8
	UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x600
	UItemComponent_ImageAmmoType_WBP_C* ItemComponent_ImageAmmoType_WBP; // 0x608
	UItemComponent_Mods_WBP_C* ItemComponent_Mods_WBP; // 0x610
	UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x618
	UItemComponent_StackAmountText_WBP_C* ItemComponent_StackAmountText_WBP; // 0x620
	UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Ammo; // 0x628
	UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Armor; // 0x630
	UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Bag; // 0x638
	UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_DPS; // 0x640
	UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Durability; // 0x648
	UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_Penetration; // 0x650
	UItemComponent_StatsEntryText_WBP_C* ItemComponent_StatsEntryText_WBP_C_RateOfFire; // 0x658
	UItemComponent_TextDescription_WBP_C* ItemComponent_TextDescription_WBP; // 0x660
	UItemComponent_TextName_WBP_C* ItemComponent_TextName_WBP; // 0x668
	UItemComponent_Weight_C* ItemComponent_Weight; // 0x670
	USizeBox* ItemImage; // 0x678
	UImage* m_Gfx_AmmoIcon; // 0x680
	UImage* m_Gfx_Item_Dynamic; // 0x688
	UHorizontalBox* Price; // 0x690
	UVerticalBox* StatAttachments; // 0x698
	UVerticalBox* StatPerks; // 0x6a0
	USizeBox* StatsDescription; // 0x6a8
	USizeBox* StatsPrimary; // 0x6b0
	UVerticalBox* StatsSecondary; // 0x6b8
	UYTextBlock* Txt_Attachments; // 0x6c0
	UTextBlock* Txt_Description; // 0x6c8
	UTextBlock* Txt_Durability; // 0x6d0
	UTextBlock* Txt_DurabilityAmount; // 0x6d8
	UTextBlock* Txt_Label; // 0x6e0
	UTextBlock* Txt_Label_2; // 0x6e8
	UTextBlock* Txt_Rarity; // 0x6f0
	UTextBlock* Txt_StackAmount; // 0x6f8
	UWBP_Attachments_List_C* WBP_Attachments_List; // 0x700
	UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry; // 0x708
	UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry_2; // 0x710
	UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry_3; // 0x718
	UWBP_CompatibleWeapon_Entry_C* WBP_CompatibleWeapon_Entry_4; // 0x720
	UWBP_DividerHorizontal_Panel_C* WBP_Deco_Divider_A; // 0x728
	UWBP_DividerHorizontal_Panel_C* WBP_Deco_Divider_B; // 0x730
	UWBP_DividerHorizontal_Panel_C* WBP_Deco_Divider_C; // 0x738
	UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_Var_A; // 0x740
	UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_Var_B; // 0x748
	UWBP_ItemStatBonus_Entry_C* WBP_ItemStatBonus; // 0x750
	UWBP_ItemStatBonus_Entry_C* WBP_ItemStatBonus_2; // 0x758
	UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary; // 0x760
	UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary_2; // 0x768
	UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary_3; // 0x770
	UWBP_ItemStatPrimary_Entry_C* WBP_ItemStatPrimary_4; // 0x778
	UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue; // 0x780
	UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_2; // 0x788
	UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_3; // 0x790
	UWBP_ProgressBarNameValue_C* WBP_ProgressBarNameValue_4; // 0x798
	UWBP_Common_Btn_C* WBP_UnequipAllMods_Btn; // 0x7a0
	UWBP_Weight_C* WBP_Weight; // 0x7a8
	UYTextBlock* YTxt_ItemName; // 0x7b0
	bool UseStatDescription; // 0x7b8
	bool UseStatPrimary; // 0x7b9
	bool UseStatSecondary; // 0x7ba
	bool UseStatPerks; // 0x7bb
	bool UseStatAttachments; // 0x7bc
	bool UseItemImage; // 0x7bd
	bool UseAmount; // 0x7be
	bool UseCompatibleWeapons; // 0x7bf
	bool UsePrice; // 0x7c0
	TArray<EYItemType> ItemTypesToShowStatsFor; // 0x7c8
	TArray<EYDeviceClass> DeviceClassesToHideStatsFor; // 0x7d8
	bool UseAttachemntsUnequipButton; // 0x7e8
	bool IsToolTipVariant; // 0x7e9
};

struct UYWidget_ChatMessage : UYWidget {
	URichTextBlock* m_richTextBlock; // 0x2d0
	FText m_chatMessageFormattedRichText; // 0x2d8
	TMap<EYChannelType, FString> m_channelTypeStyleMap; // 0x2f0
	FString m_userNameStyle; // 0x340
	FString m_messageStyle; // 0x350
	FString m_cachedPlayerName; // 0x360
};

struct UWBP_TabNavigation_C : UWBP_TabNavigationBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* WidgetIn_Anim; // 0x2f8
	UHorizontalBox* TabHolder_hBox; // 0x300
	UWBP_InputKey_C* WBP_InputKey_TabL; // 0x308
	UWBP_InputKey_C* WBP_InputKey_TabR; // 0x310
	TArray<FStucture_TabData> Tabs; // 0x318
	bool IsInitialized; // 0x328
};

struct UYControllerCustomizationComponent : UActorComponent {
	FMulticastInlineDelegate OnRequestCustomizationPartChange; // 0xb0
	FMulticastInlineDelegate OnSelectedNewCustomizationRowHandle; // 0xc0
	FMulticastInlineDelegate OnTemporaryShowCustomizationEntryUpdateDelegate; // 0xd0
	FMulticastInlineDelegate OnNewCustomizatonData; // 0xe0
	FMulticastInlineDelegate OnResetRequest; // 0xf0
	FMulticastInlineDelegate OnRequestRotationState; // 0x100
	FMulticastInlineDelegate OnRequestWeaponVanityTemporaryVisualization; // 0x110
	FMulticastInlineDelegate OnWeaponCustomizationSetWeapon; // 0x120
	FMulticastInlineDelegate OnGlobalVanityDataChanged; // 0x130
};

struct UWBP_Attachments_List_C : UYWidget_Inventory_Base {
	FPointerToUberGraphFrame UberGraphFrame; // 0x448
	UWBP_FullMessage_C* WBP_FullMessage; // 0x450
	UWBP_Inventory_PlayerSet_DropArea_Attachments_C* WBP_Inventory_PlayerSet_DropArea_Attachments; // 0x458
	UWrapBox* WrapBox_1; // 0x460
	bool IsTooltip; // 0x468
	TMap<EYModificationSlotType, UWBP_Item_Preview_Attachments_Btn_C*> ModificationSlotItemContainers; // 0x470
	FYItemModsInfo CachedModsInfo; // 0x4c0
	FYInventoryItem CachedInventoryItem; // 0x520
	EYInsuranceStatus CachedIsParentWeaponInsured; // 0x5b8
	TMap<int32_t, EYModificationSlotType> ExecutionData; // 0x5c0
};

struct UListViewBase : UWidget {
	UUserWidget* EntryWidgetClass; // 0x108
	float WheelScrollMultiplier; // 0x110
	bool bEnableScrollAnimation; // 0x114
	bool bEnableFixedLineOffset; // 0x115
	float FixedLineScrollOffset; // 0x118
	FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120
	FMulticastInlineDelegate BP_OnEntryReleased; // 0x130
	FUserWidgetPool EntryWidgetPool; // 0x140
};

struct UNiagaraComponent : UFXSystemComponent {
	UNiagaraSystem* Asset; // 0x440
	ENiagaraTickBehavior TickBehavior; // 0x448
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x450
	char bForceSolo : 1; // 0x518
	char bEnableGpuComputeDebug : 1; // 0x518
	char bAutoDestroy : 1; // 0x544
	char bRenderingEnabled : 1; // 0x544
	char bAutoManageAttachment : 1; // 0x544
	char bAutoAttachWeldSimulatedBodies : 1; // 0x544
	float MaxTimeBeforeForceUpdateTransform; // 0x548
	TArray<FNiagaraMaterialOverride> EmitterMaterials; // 0x550
	FMulticastInlineDelegate OnSystemFinished; // 0x568
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x578
	FName AutoAttachSocketName; // 0x580
	EAttachmentRule AutoAttachLocationRule; // 0x588
	EAttachmentRule AutoAttachRotationRule; // 0x589
	EAttachmentRule AutoAttachScaleRule; // 0x58a
};

struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x240
};

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UYUiManager : UObject {
	UUserWidget* m_itemTooltipWidget; // 0x28
};

struct AGeometryCollectionActor : AActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x240
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x248
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28
};

struct UYFoliageAudioComponent : UActorComponent {
	FDataTableRowHandle m_defaultWalkingEffect; // 0xb0
	FDataTableRowHandle m_crouchingEffect; // 0xc0
	FDataTableRowHandle m_sprintingEffect; // 0xd0
	float m_minEffectTime; // 0xe0
	float m_fadeOutDuration; // 0xe4
	FYCurrentlyOverlappingFoliage m_currentFoliage; // 0xe8
};

struct UWBP_Footer_A_Panel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* ScreenIn_Anim; // 0x268
	UImage* Gfx_ArrowLarge; // 0x270
	UImage* Gfx_ArrowLarge_2; // 0x278
	UImage* Gfx_ArrowSmall; // 0x280
	UImage* Gfx_FillLeft; // 0x288
	UImage* Gfx_FillRight; // 0x290
	UImage* Gfx_Left; // 0x298
	UImage* Gfx_Right; // 0x2a0
};

struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	USceneComponent* ComponentType; // 0x80
	uint32_t ComponentCountLimit; // 0x88
	FNiagaraVariableAttributeBinding EnabledBinding; // 0x90
	bool bAssignComponentsOnParticleID; // 0xe8
	bool bOnlyCreateComponentsOnParticleSpawn; // 0xe9
	USceneComponent* TemplateComponent; // 0xf0
	TArray<FNiagaraComponentPropertyBinding> PropertyBindings; // 0xf8
};

struct UYWidget_Register : UYWidget {
	FMulticastInlineDelegate OnRegister; // 0x2c0
	FMulticastInlineDelegate OnGoBackRequest; // 0x2d0
	UEditableTextBox* m_passwordTextBox; // 0x2e0
	UEditableTextBox* m_repeatPasswordTextBox; // 0x2e8
	UEditableTextBox* m_usernameTextBox; // 0x2f0
	UButton* m_registerButton; // 0x2f8
	UButton* m_backButton; // 0x300
	UTextBlock* m_errorTextBlock; // 0x308
};

struct UYWidget_NavigationBar : UYWidget {
	FMulticastInlineDelegate OnButtonClickedDelegate; // 0x2c0
	TArray<FNavigationBarOption> m_navigationOptions; // 0x2d0
	UHorizontalBox* m_horizontalButtonContainer; // 0x2e0
	UYWidget_TopMenuSubButton* m_menuButtonBP; // 0x2e8
	TArray<UYWidget_TopMenuSubButton*> m_menuButtons; // 0x2f0
};

struct UVectorFieldAnimated : UVectorField {
	UTexture2D* Texture; // 0x48
	EVectorFieldConstructionOp ConstructionOp; // 0x50
	int32_t VolumeSizeX; // 0x54
	int32_t VolumeSizeY; // 0x58
	int32_t VolumeSizeZ; // 0x5c
	int32_t SubImagesX; // 0x60
	int32_t SubImagesY; // 0x64
	int32_t FrameCount; // 0x68
	float FramesPerSecond; // 0x6c
	char bLoop : 1; // 0x70
	UVectorFieldStatic* NoiseField; // 0x78
	float NoiseScale; // 0x80
	float NoiseMax; // 0x84
};

struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0xb0
};

struct UDynamicEntryBoxBase : UWidget {
	EDynamicBoxType EntryBoxType; // 0x108
	FVector2D EntrySpacing; // 0x10c
	TArray<FVector2D> SpacingPattern; // 0x118
	FSlateChildSize EntrySizeRule; // 0x128
	EHorizontalAlignment EntryHorizontalAlignment; // 0x130
	EVerticalAlignment EntryVerticalAlignment; // 0x131
	int32_t MaxElementSize; // 0x134
	FRadialBoxSettings RadialBoxSettings; // 0x138
	FUserWidgetPool EntryWidgetPool; // 0x158
};

struct UAssetManager : UObject {
	TArray<UObject*> ObjectReferenceList; // 0x2c0
	bool bIsGlobalAsyncScanEnvironment; // 0x2d0
	bool bShouldGuessTypeAndName; // 0x2d1
	bool bShouldUseSynchronousLoad; // 0x2d2
	bool bIsLoadingFromPakFiles; // 0x2d3
	bool bShouldAcquireMissingChunksOnLoad; // 0x2d4
	bool bOnlyCookProductionAssets; // 0x2d5
	bool bIsBulkScanning; // 0x2d6
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2d7
	bool bIsManagementDatabaseCurrent; // 0x2d8
	bool bUpdateManagementDatabaseAfterScan; // 0x2d9
	bool bIncludeOnlyOnDiskAssets; // 0x2da
	bool bHasCompletedInitialScan; // 0x2db
	int32_t NumberOfSpawnedNotifications; // 0x2dc
};

struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct UWBP_AccountLinking_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UCanvasPanel* CanvasPanel_1; // 0x2c8
	UWidgetSwitcher* ContentSwitcher; // 0x2d0
	UWBP_Common_Btn_C* WBP_Common_Btn_EGS; // 0x2d8
	UWBP_Common_Btn_C* WBP_Common_Btn_Steam; // 0x2e0
	UWBP_Generic_Modal_C* WBP_Generic_Modal_ChooseAccount; // 0x2e8
	UWBP_Generic_Modal_C* WBP_Generic_Modal_ConfirmLink; // 0x2f0
	UWBP_Generic_Modal_C* WBP_Generic_Modal_LinkAccounts; // 0x2f8
	UWBP_Generic_Modal_C* WBP_Generic_Modal_LinkingInProgress; // 0x300
	UWBP_Generic_Modal_C* WBP_Generic_Modal_Result; // 0x308
	UYTextBlock* YTextBlock_ProcessingTime; // 0x310
	FName EGS_Platform_Selected; // 0x318
	FName Steam_Platform_Selected; // 0x320
	FName cachedPlatform; // 0x328
};

struct UYDamageNumberComponent : UActorComponent {
	FMulticastInlineDelegate OnRequestDamageNumber; // 0xb0
};

struct AYTestActorWithMarker : AActor {
	UYMapMarkerComponent* m_markerComponent; // 0x240
};

struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct AYPlayerCameraManager : APlayerCameraManager {
	UYPlayerCameraFoVComponent* m_fovComponent; // 0x27d0
	AActor* m_currentViewTarget; // 0x27d8
	bool m_runCollisionCheck; // 0x27e0
};

struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct UYTextBlock : UTextBlock {
	USlateWidgetStyleAsset* m_normalTextBlockStyleAsset; // 0x2a8
	USlateWidgetStyleAsset* m_hoveredTextBlockStyleAsset; // 0x2b0
	bool m_overrideColorAndOpacity; // 0x2b8
	char m_isChildOfButton : 1; // 0x2bc
};

struct UYBackendInstance : UObject {
	UYPlayfabInstance* m_playfabInstance; // 0x28
};

struct UParticleModuleEventReceiverSpawn : UParticleModuleEventReceiverBase {
	FRawDistributionFloat SpawnCount; // 0x40
	char bUseParticleTime : 1; // 0x70
	char bUsePSysLocation : 1; // 0x70
	char bInheritVelocity : 1; // 0x70
	FRawDistributionVector InheritVelocityScale; // 0x78
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xc0
	char bBanPhysicalMaterials : 1; // 0xd0
};

struct UYWidget_UserEntry : UYWidget {
	FYOutpostFriendInfo m_cachedUserInfo; // 0x2c0
};

struct UWBP_ProgressBarBase_C : UYWidget_ProgressBar {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	FProgressBarStyle MainStyle; // 0x2d8
	FProgressBarStyle DeltaStyle; // 0x478
	FStructure_HUD_ProgressBars UpdateDataMain; // 0x618
	FStructure_HUD_ProgressBars UpdateDataDelta; // 0x640
	float DelayIncrease; // 0x668
	float DelayDecrease; // 0x66c
	float DelayMain; // 0x670
	float DurationIncrease; // 0x674
	float DurationDecrease; // 0x678
	float DurationMain; // 0x67c
	FLinearColor DeltaColorIncrease; // 0x680
	FLinearColor DeltaColorDecrease; // 0x690
	FLinearColor MainColor; // 0x6a0
	FMulticastInlineDelegate OnAnimationDone; // 0x6b0
	float ProgressMain; // 0x6c0
	float ProgressDelta; // 0x6c4
	float ProgressAbsolute; // 0x6c8
};

struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
};

struct UAITask_MoveTo : UAITask {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UYWidget_ProspectorLevel_Small_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* Border_1; // 0x268
	UYTextBlock* prospectorLevelText; // 0x270
};

struct UMaterialExpressionArctangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UDatasmithC4DImportOptions : UDatasmithOptionsBase {
	bool bImportEmptyMesh; // 0x28
	bool bOptimizeEmptySingleChildActors; // 0x29
	bool bAlwaysGenerateNormals; // 0x2a
	float ScaleVertices; // 0x2c
};

struct UYAnalytics : UObject {
	UYAnalyticsSender* m_analyticsSender; // 0x28
};

struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleAttractorParticle : UParticleModuleAttractorBase {
	FName EmitterName; // 0x30
	FRawDistributionFloat Range; // 0x38
	char bStrengthByDistance : 1; // 0x68
	FRawDistributionFloat Strength; // 0x70
	char bAffectBaseVelocity : 1; // 0xa0
	EAttractorParticleSelectionMethod SelectionMethod; // 0xa4
	char bRenewSource : 1; // 0xa8
	char bInheritSourceVel : 1; // 0xa8
	int32_t LastSelIndex; // 0xac
};

struct ULocalPlayer : UPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UParticleModuleTypeDataGpu : UParticleModuleTypeDataBase {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct UWBP_Common_Simple_Btn_C : UWBP_ButtonBase_Btn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UWidgetAnimation* Release_Anim; // 0x3a0
	UWidgetAnimation* Press_Anim; // 0x3a8
	UWidgetAnimation* HighlightSheen_Anim; // 0x3b0
	UWidgetAnimation* Selected_Anim; // 0x3b8
	UWidgetAnimation* Idle_Anim; // 0x3c0
	UWidgetAnimation* HighlightBracket_Anim; // 0x3c8
	UImage* Gfx_Fill; // 0x3d0
	UImage* Gfx_FillDisabled; // 0x3d8
	UImage* Gfx_Stroke; // 0x3e0
	UImage* Icn_Lock; // 0x3e8
	UOverlay* Layout_ButtonDisabled; // 0x3f0
	UNamedSlot* Layout_ContentSlot; // 0x3f8
	UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x400
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x408
	FLinearColor ButtonColorPrimary; // 0x410
	bool IsDisabled; // 0x420
};

struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct URigVM : UObject {
	FRigVMMemoryContainer WorkMemoryStorage; // 0x28
	FRigVMMemoryContainer LiteralMemoryStorage; // 0xd0
	FRigVMByteCode ByteCodeStorage; // 0x178
	FRigVMInstructionArray Instructions; // 0x1b0
	FRigVMExecuteContext Context; // 0x1c0
	TArray<FName> FunctionNamesStorage; // 0x218
	TArray<FRigVMParameter> Parameters; // 0x248
	TMap<FName, int32_t> ParametersNameMap; // 0x258
	URigVM* DeferredVMToCopy; // 0x2f0
};

struct UYControllerAnnouncementComponent : UActorComponent {
	UAudioComponent* m_audioAnnouncementComponent; // 0xb8
	FMulticastInlineDelegate BP_OnAnnouncementStarted; // 0xc0
	FMulticastInlineDelegate BP_OnAnnouncementStopped; // 0xd0
	FYAnnouncementPlayEntryData m_currentAnnouncementPlaying; // 0xe0
	TArray<FYAnnouncementPlayEntryData> m_queuedAnnouncements; // 0x128
};

struct UYCharacterRevivingComponent : UActorComponent {
	TArray<FGuid> m_appliedAttributeModifiers; // 0xb0
};

struct UYWidget_FpsCounter : UYWidget {
	TWeakObjectPtr<UYUserSettings> m_userSettings; // 0x2c8
};

struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x48
};

struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x280
	float Priority; // 0x7d0
	float BlendRadius; // 0x7d4
	float BlendWeight; // 0x7d8
	char bEnabled : 1; // 0x7dc
	char bUnbound : 1; // 0x7dc
};

struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28
};

struct UYAISenseConfig_AllyAlert : UAISenseConfig {
	UYAISense_AllyAlert* m_implementationClass; // 0x48
};

struct UYWidget_OutpostSquadNotificationOverview : UYWidget {
	TMap<int32_t, UYWidget_OutpostSquadNotification*> m_squadNotifications; // 0x2c0
};

struct UWBP_Contract_Tooltip_C : UYWidget_FactionContract {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* WidgetIn_Anim; // 0x348
	UImage* Gfx_BottomEdge; // 0x350
	UImage* Gfx_BottomEdge_Triangle; // 0x358
	UImage* Gfx_BottomEdge_Triangle_Outer; // 0x360
	UImage* Gfx_Shadow; // 0x368
	UImage* Gfx_TopEdge; // 0x370
	UImage* Gfx_TopEdge_Triangle; // 0x378
	UImage* Gfx_TopEdge_Triangle_Outer; // 0x380
	UHorizontalBox* RewardList; // 0x388
	UVerticalBox* RewardsList; // 0x390
	UTextBlock* Txt_Rewards; // 0x398
	UTextBlock* Txt_TooltipHeader; // 0x3a0
	UWBP_Common_Btn_C* WBP_Cancel_Btn; // 0x3a8
	UWBP_BlurBacker_Panel_C* WBP_Deco_BlurPanel; // 0x3b0
	UWBP_Cost_Entry_C* WBP_FactionProgression_Entry; // 0x3b8
	UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x3c0
	UYTextBlock* YTxt_ContractDescription; // 0x3c8
};

struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x340
	float LightFalloffExponent; // 0x344
	float SourceRadius; // 0x348
	float SoftSourceRadius; // 0x34c
	float SourceLength; // 0x350
};

struct ASocialActor_BP_C : AYSocialActor {
	USceneComponent* DefaultSceneRoot; // 0x2a8
};

struct UModalDialogConnectionLost_WBP_C : UYWidget_ConnectionLost {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* TimerBlink_anim; // 0x2c8
};

struct UYWidget_Shop : UYWidget {
	UYWidget_CurrencyOffersOverview* m_currencyOffersOverview; // 0x2c0
	UYWidget_SeasonOffersOverview* m_seasonOffersOverview; // 0x2c8
	UYWidget_PackOffersOverview* m_packOffersOverview; // 0x2d0
	UYWidget_OfferDetailOverview* m_offerDetailOverview; // 0x2d8
	UYWidget_ShopCategories* m_shopCategories; // 0x2e0
	UWidgetSwitcher* m_widgetSwitcher; // 0x2e8
	UYWidget_SpecialOffersOverview* m_dailyOffersOverview; // 0x2f0
	UYWidget_SpecialOffersOverview* m_weeklyOffersOverview; // 0x2f8
};

struct UModalDialogExitGame_WBP_C : UYWidget_ModalDialogExitGame {
	FPointerToUberGraphFrame UberGraphFrame; // 0x318
	UWidgetAnimation* animateIn; // 0x320
	UWidgetAnimation* AnimateOut; // 0x328
	UBorder* Border_1; // 0x330
	UImage* Image_66; // 0x338
};

struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	UDataTable* ImageSet; // 0x28
};

struct UYWidget_Chat : UYWidget {
	FYChatWindowStyles m_IsInStationSkin; // 0x2c0
	FYChatWindowStyles m_IsInMatchSkin; // 0x6d0
	bool m_hideChatWhenInactive; // 0xae0
	float m_minDurationToKeepChatVisibleAfterMessageShown; // 0xae4
	float m_timeStampLastAcitivity; // 0xae8
	float m_chatIngameWidth; // 0xaec
	bool m_isInMatch; // 0xaf0
	UTextBlock* m_channelTypeTextBlock; // 0xaf8
	UTextBlock* m_chatNotActiveText; // 0xb00
	UTextBlock* m_chatInputDisabled; // 0xb08
	USizeBox* m_channelTypeContainer; // 0xb10
	UYEditableTextBox* m_inputEditableTextBox; // 0xb18
	UCanvasPanel* m_chatMessagesCanvasPanel; // 0xb20
	UVerticalBox* m_chatMessagesVerticalBox; // 0xb28
	UScrollBox* m_chatMessagesScrollBox; // 0xb30
	USizeBox* m_chatSizeBox; // 0xb38
	USizeBox* m_chatTextSizeBox; // 0xb40
	UYWidget_ChatUserMenu* m_chatUserMenu; // 0xb48
	FVector2D m_chatDimensionsResized; // 0xb50
	UYWidget_ChatMessage* m_chatMessageWBPClass; // 0xb58
	TMap<FString, EYChannelType> m_channelTypeAbbreviationMap; // 0xb60
	TMap<EYChannelType, FSlateColor> m_channelTypeColorMap; // 0xbb0
	int32_t m_editableTextBoxMaxCharacterCount; // 0xc00
	UYPlayerMutelist* m_playerMutelistObj; // 0xc40
};

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct USpacer : UWidget {
	FVector2D Size; // 0x108
};

struct USpinBox : UWidget {
	float Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	FSpinBoxStyle WidgetStyle; // 0x120
	USlateWidgetStyleAsset* Style; // 0x408
	int32_t MinFractionalDigits; // 0x410
	int32_t MaxFractionalDigits; // 0x414
	bool bAlwaysUsesDeltaSnap; // 0x418
	float Delta; // 0x41c
	float SliderExponent; // 0x420
	FSlateFontInfo Font; // 0x428
	ETextJustify Justification; // 0x480
	float MinDesiredWidth; // 0x484
	bool ClearKeyboardFocusOnCommit; // 0x488
	bool SelectAllTextOnCommit; // 0x489
	FSlateColor ForegroundColor; // 0x490
	FMulticastInlineDelegate OnValueChanged; // 0x4b8
	FMulticastInlineDelegate OnValueCommitted; // 0x4c8
	FMulticastInlineDelegate OnBeginSliderMovement; // 0x4d8
	FMulticastInlineDelegate OnEndSliderMovement; // 0x4e8
	char bOverride_MinValue : 1; // 0x4f8
	char bOverride_MaxValue : 1; // 0x4f8
	char bOverride_MinSliderValue : 1; // 0x4f8
	char bOverride_MaxSliderValue : 1; // 0x4f8
	float MinValue; // 0x4fc
	float MaxValue; // 0x500
	float MinSliderValue; // 0x504
	float MaxSliderValue; // 0x508
};

struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x98
};

struct UMaterialExpressionPanner : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	FExpressionInput Speed; // 0x68
	float SpeedX; // 0x7c
	float SpeedY; // 0x80
	uint32_t ConstCoordinate; // 0x84
	bool bFractionalPart; // 0x88
};

struct ABanner_BP_C : AYBannerActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
	UChildActorComponent* SeasonDetailView; // 0x260
	UChildActorComponent* SeasonFirstView; // 0x268
	UBoxComponent* BoxToTriggerOverlaps; // 0x270
	UTextRenderComponent* SecondPlate; // 0x278
	UParticleSystemComponent* Banner_PS; // 0x280
	USkeletalMeshComponent* Prop_Banner_SK; // 0x288
	UTextRenderComponent* NamePlate; // 0x290
	USceneComponent* DefaultSceneRoot; // 0x298
	APlayerState* PlayerState; // 0x2a0
	float ParticleSize; // 0x2a8
	FVector ParticleOffset; // 0x2ac
	FLinearColor ParticleSystemColor; // 0x2b8
	FDataTableRowHandle BannerDTRow; // 0x2c8
	FYBannerVanityRow BannerVanityRow; // 0x2d8
	FText BannerNameOverride; // 0x6b8
	float LineTraceCeilingDistance; // 0x6d0
	TArray<UObject*> SoundsLoaded; // 0x6d8
};

struct UParticleModuleSpawnPerUnit : UParticleModuleSpawnBase {
	float UnitScalar; // 0x38
	float MovementTolerance; // 0x3c
	FRawDistributionFloat SpawnPerUnit; // 0x40
	float MaxFrameDistance; // 0x70
	char bIgnoreSpawnRateWhenMoving : 1; // 0x74
	char bIgnoreMovementAlongX : 1; // 0x74
	char bIgnoreMovementAlongY : 1; // 0x74
	char bIgnoreMovementAlongZ : 1; // 0x74
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58
};

struct UWBP_ItemStatPrimary_Entry_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* Feedback_Anim; // 0x2c8
	UWidgetAnimation* ScreenIn_Anim; // 0x2d0
	USizeBox* ChangeMaxSize; // 0x2d8
	UImage* Gfx_ArrowNegative; // 0x2e0
	UImage* Gfx_ArrowPositive; // 0x2e8
	UImage* Gfx_Flash; // 0x2f0
	UScaleBox* StatValueChangeScaleBox; // 0x2f8
	UScaleBox* StatValueScaleBox; // 0x300
	UTextBlock* Txt_StatLabel; // 0x308
	UTextBlock* Txt_StatValue; // 0x310
	UTextBlock* Txt_StatValueChange; // 0x318
	UWBP_Divider_Vertical_Panel_C* WBP_Divider_Vertical_Panel; // 0x320
	FText Value; // 0x328
	FText Label; // 0x340
	bool ShowDivide; // 0x358
	bool ShowChange; // 0x359
};

struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct UYControllerVehicleComponent : UActorComponent {
	UYPlayerCharacterStateComponent* m_characterStateComponent; // 0xd0
	UYCharacterVehicleComponent* m_vehicleCharacterComponent; // 0xd8
};

struct ACameraShakeSourceActor : AActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x240
};

struct UBTDecorator_Cooldown : UBTDecorator {
	float CoolDownTime; // 0x68
};

struct UDebug_ReplaySlot_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* DeleteReplayButton; // 0x268
	UButton* PlayButton; // 0x270
	UEditableTextBox* ReplayNameTextBox; // 0x278
	FString ReplayName; // 0x280
	FString ReplayFriendlyName; // 0x290
	FS_ReplayInfo ReplayInfo; // 0x2a0
};

struct UYResourceComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnResourceRegeneratingChanged; // 0xb0
	FMulticastInlineDelegate BP_OnResourceDataChanged; // 0xc0
};

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x288
	float DamagePerSec; // 0x28c
	UDamageType* DamageType; // 0x290
	float PainInterval; // 0x298
	char bEntryPain : 1; // 0x29c
	char BACKUP_bPainCausing : 1; // 0x29c
	AController* DamageInstigator; // 0x2a0
};

struct UPlayFabAuthenticationContext : UObject {
	FString ClientSessionTicket; // 0x28
	FString EntityToken; // 0x38
	FString DeveloperSecretKey; // 0x48
	FString PlayFabId; // 0x58
};

struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38
};

struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct USkeletalMeshLODSettings : UDataAsset {
	FPerPlatformInt MinLOD; // 0x30
	FPerPlatformBool DisableBelowMinLodStripping; // 0x34
	bool bOverrideLODStreamingSettings; // 0x35
	FPerPlatformBool bSupportLODStreaming; // 0x36
	FPerPlatformInt MaxNumStreamedLODs; // 0x38
	FPerPlatformInt MaxNumOptionalLODs; // 0x3c
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x40
};

struct UWebBrowser : UWidget {
	FMulticastInlineDelegate OnUrlChanged; // 0x108
	FMulticastInlineDelegate OnBeforePopup; // 0x118
	FString InitialURL; // 0x128
	bool bSupportsTransparency; // 0x138
};

struct UAnimationSettings : UDeveloperSettings {
	int32_t CompressCommandletVersion; // 0x38
	TArray<FString> KeyEndEffectorsMatchNameArray; // 0x40
	bool ForceRecompression; // 0x50
	bool bForceBelowThreshold; // 0x51
	bool bFirstRecompressUsingCurrentOrDefault; // 0x52
	bool bRaiseMaxErrorToExisting; // 0x53
	bool bEnablePerformanceLog; // 0x54
	bool bStripAnimationDataOnDedicatedServer; // 0x55
	bool bTickAnimationOnSkeletalMeshInit; // 0x56
	TArray<FCustomAttributeSetting> BoneCustomAttributesNames; // 0x58
	TArray<FString> BoneNamesWithCustomAttributes; // 0x68
	TMap<FName, ECustomAttributeBlendType> AttributeBlendModes; // 0x78
	ECustomAttributeBlendType DefaultAttributeBlendMode; // 0xc8
};

struct AYActivityActorManager : AActor {
	UYActivityRegisterComponent* m_registerComponent; // 0x240
	EYActivityType m_activityType; // 0x248
	UObject* m_defaultActivityActorClass; // 0x250
	FMulticastInlineDelegate BP_OnInitialActorSpawningFinished; // 0x2b0
};

struct AWaterBodyCustom : AWaterBody {
	UCustomMeshGenerator* CustomGenerator; // 0xe00
};

struct UYMapMarkerComponent : UActorComponent {
	EYMapMarkerType m_markerType; // 0xb0
	bool m_autoGenerateMarkerData; // 0xb1
	bool m_markerAlwaysVisible; // 0xb2
	bool m_visibleDuringLobby; // 0xb3
	bool m_onlyRelevantInLobby; // 0xb4
	bool m_onlyRelevantToOwner; // 0xb5
	bool m_onlyRelevantToOwnerTeam; // 0xb6
	bool m_staysRelevantOnceDiscovered; // 0xb7
	bool m_autoRemoveWhenHealthEmpty; // 0xb8
	bool m_canChangeStateDuringEvacuation; // 0xb9
	bool m_shouldFollowActorPosition; // 0xba
	bool m_shouldShowLocalDistanceTowardsPlayer; // 0xbb
	bool m_onlyFollowActorPositionForAlly; // 0xbc
	bool m_isClientOnly; // 0xbd
	bool m_centerMinimapOnThisMarker; // 0xbe
	float m_timeOutDuration; // 0xc0
	float m_timeLeft; // 0xc4
	UYMapMarkerData* m_markerDataClass; // 0xc8
	bool m_overrideMarkerWidgetClass; // 0xd0
	UYWidget_MapMarker* m_markerWidgetClass; // 0xd8
	bool m_hideFromOwner; // 0xe0
	int32_t m_markerVisibilityDistance; // 0xe4
	FText m_markerTitle; // 0xe8
	UYMapMarkerData* m_markerData; // 0x100
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
};

struct UMovieSceneMarginSection : UMovieSceneSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
};

struct UYWidget_ApperenceOverview : UYWidget {
	UYWidget_ApperenceCategories* m_itemCategories; // 0x2c8
	TMap<EYApperenceCategoriesTypes, UYWidget*> m_widgetPerType; // 0x2d0
};

struct UYBossHuntMapMarkerData : UYMapMarkerData {
	float m_stateDuration; // 0x148
};

struct UYButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle m_buttonStyle; // 0x30
	FYButtonAudio m_widgetAudio; // 0x2a8
};

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct UYWidget_Inbox : UYWidget {
	UButton* m_closeButton; // 0x2c0
	int32_t m_BITimeWhenInboxShown; // 0x2c8
	int32_t m_BITimeWhenMessageShown; // 0x2cc
	UTextBlock* m_messageSenderText; // 0x2d0
	UTextBlock* m_messageSubjectText; // 0x2d8
	URichTextBlock* m_messageContentText; // 0x2e0
	UYWidget_ImageBase* m_messageBannerImage; // 0x2e8
	TMap<FString, UYWidget_InboxMessageEntry*> m_cachedMessages; // 0x2f0
};

struct UARPlaneGeometry : UARTrackedGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
};

struct UReplicationGraphNode_TearOff_ForConnection : UReplicationGraphNode {
	TArray<FTearOffActorInfo> TearOffActors; // 0x50
};

struct APlayerCustomizationPreview_BP_C : AYCharacterCustomizationPlayerActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5a0
	USkeletalMeshComponent* DBNO_FoamMesh_SK; // 0x5a8
	FName CurrentArchetype; // 0x5b0
	FName AttachWeaponBoneName; // 0x5b8
	EYCustomizationCategory MontageActiveCategory; // 0x5c0
	bool IsEndOfMatch; // 0x5c1
	UAnimMontage* DeathAnimMontage; // 0x5c8
	UAnimSequence* EmoteAnimSequence; // 0x5d0
};

struct UYControllerPlayerQuarterComponent : UActorComponent {
	FMulticastInlineDelegate OnPlayerQuartersLevelUpdated; // 0xc8
	FMulticastInlineDelegate OnPlayerTechtreeNodesUpdated; // 0xd8
	FMulticastInlineDelegate PlayerQuarterPurchaseFailed; // 0xe8
	FMulticastInlineDelegate OnPlayerQuarterLevelUp; // 0xf8
	bool m_playerLeveledUp; // 0x158
};

struct UAnimBoneCompressionCodec : UObject {
	FString Description; // 0x28
};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UPlayFabMatchmakerAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xd8
	UPlayFabJsonObject* RequestJsonObj; // 0xe0
	UPlayFabJsonObject* ResponseJsonObj; // 0xe8
};

struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UMapMarker_StaticIcon_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* HighlightAnimation; // 0x2e8
	UTextBlock* m_label; // 0x2f0
	UImage* m_markerIcon; // 0x2f8
	EYMapMarkerType m_markerDataType; // 0x300
	EYMapMarkerState m_markerState; // 0x301
	bool ShowQuestionMarkWhenUnknown; // 0x302
	bool IsMaximized; // 0x303
	EYSeasonalEvent CurrentSeasonalEvent; // 0x304
};

struct UYWidget_ItemTooltipContainer : UYWidget {
	UYWidget_ItemTooltipEntryHeader* m_headerWidget; // 0x2c0
	UYWidget_ItemTooltipEntryDescription* m_descriptionWidget; // 0x2c8
	UYWidget_ItemTooltipEntryDescription* m_flavorTextWidget; // 0x2d0
	UYWidget_ItemTooltipEntryImage* m_imageWidget; // 0x2d8
	UTextBlock* m_incompatibleModTextBlock; // 0x2e0
	EYItemTooltipType m_itemTooltipType; // 0x2e8
};

struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x240
};

struct UYWidget_PlayerSupport : UYWidget {
	UComboBoxString* m_comboBox; // 0x2c0
	FTimerHandle m_timerHandleCustomerResponse; // 0x2c8
	FMulticastInlineDelegate OnSubmitSupportData; // 0x2d0
	FMulticastInlineDelegate OnClosePlayerSupportWidget; // 0x2e0
	FYPlayerSupportReportRequestData m_cachedData; // 0x2f0
	FMulticastInlineDelegate OnShowSupportDialogDelegate; // 0x328
};

struct UWBP_Contract_Entry_C : UYWidget_FactionContract {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* ActiveButtonState_Anim; // 0x348
	UWidgetAnimation* InActiveState_Anim; // 0x350
	UWidgetAnimation* Clear_Anim; // 0x358
	UWidgetAnimation* ActiveState_Anim; // 0x360
	UWidgetAnimation* CompletedState_Anim; // 0x368
	UWidgetAnimation* LockedState_Anim; // 0x370
	UWidgetAnimation* ScreenIn_Anim; // 0x378
	UUI_ImageBase_WBP_C* BackgroundImage; // 0x380
	UOverlay* ButtonHolder; // 0x388
	UOverlay* CompletedHighlight; // 0x390
	UOverlay* ContractActiveHighlight; // 0x398
	UHorizontalBox* ContractCostHolder; // 0x3a0
	UHorizontalBox* ContractCostHolder_2; // 0x3a8
	USizeBox* ContractEntrySize; // 0x3b0
	UOverlay* ContractFailed; // 0x3b8
	USizeBox* ContractImageSize; // 0x3c0
	UOverlay* ContractLock_Layout; // 0x3c8
	USizeBox* Description; // 0x3d0
	UImage* Gfx_Completed_L; // 0x3d8
	UImage* Gfx_Completed_R; // 0x3e0
	UImage* Gfx_Contract_Icn; // 0x3e8
	UImage* Gfx_FactionLogo; // 0x3f0
	UImage* Gfx_Fail_Bg; // 0x3f8
	UImage* Gfx_Lock_Bg; // 0x400
	UImage* Gfx_Lock_Bg_Highlight_2; // 0x408
	UImage* Gfx_Notch; // 0x410
	UImage* Gfx_ResourcePlaceholder; // 0x418
	UImage* Gfx_ResourcePlaceholder_2; // 0x420
	UImage* Icn_Info; // 0x428
	UImage* Icn_Info_Pulse; // 0x430
	UImage* Icn_Lock; // 0x438
	UImage* Icn_Swap; // 0x440
	UImage* Icn_Timer; // 0x448
	UImage* Image_26; // 0x450
	USizeBox* InfoButton; // 0x458
	UVerticalBox* ObjectivesList; // 0x460
	UHorizontalBox* RewardList; // 0x468
	UVerticalBox* RewardsList; // 0x470
	USizeBox* RightSide; // 0x478
	USpacer* SwapBtnSpacer; // 0x480
	UHorizontalBox* TimerHolder; // 0x488
	UTextBlock* Txt_BtnLabel; // 0x490
	UTextBlock* Txt_ContractName; // 0x498
	UTextBlock* Txt_ContractUnavailable; // 0x4a0
	UTextBlock* Txt_CostCurrencyLabel; // 0x4a8
	UTextBlock* Txt_CostCurrencyLabel_2; // 0x4b0
	UTextBlock* Txt_Difficulty; // 0x4b8
	UTextBlock* Txt_Failed; // 0x4c0
	UTextBlock* Txt_LockedReason; // 0x4c8
	UTextBlock* Txt_LockedReasonNumber; // 0x4d0
	UTextBlock* Txt_Refresh; // 0x4d8
	UTextBlock* Txt_Rewards; // 0x4e0
	UTextBlock* Txt_Timer; // 0x4e8
	UWBP_BlurBackerSimple_Panel_C* WBP_BlurBackerSimple_Panel; // 0x4f0
	UWBP_Common_Empty_Btn_C* WBP_ContractAction_Btn; // 0x4f8
	UWBP_Common_Empty_Btn_C* WBP_ContractSwap_Btn; // 0x500
	UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_VarA_Panel; // 0x508
	UWBP_Cost_Entry_C* WBP_FactionProgression_Entry; // 0x510
	UWBP_HeaderComplex_Panel_C* WBP_HeaderComplex_Panel; // 0x518
	UYTextBlock* YTxt_ContractDescription; // 0x520
	FText ContractLabel; // 0x528
	bool ShowButton; // 0x540
	bool ShowInfoButton; // 0x541
	FText DifficultyLabel; // 0x548
	bool is Locked; // 0x560
	FLinearColor ButtonStateColorInactiveOrCompleted; // 0x564
	FLinearColor ButtonStateColorActive; // 0x574
	FLinearColor ButtonStateColorInactiveNotPurchasable; // 0x584
	bool ShowImage; // 0x594
	bool ShowFactionIcon; // 0x595
	bool ShowDescription; // 0x596
	bool ShowRewards; // 0x597
	int32_t ContractCost_Cached; // 0x598
	bool ShowObjectives; // 0x59c
	bool ContractIsLocked; // 0x59d
	FMulticastInlineDelegate PressedClaimButton; // 0x5a0
};

struct UGameplayTagsManager : UObject {
	TArray<FGameplayTagSource> TagSources; // 0xc0
	TArray<UDataTable*> GameplayTagTables; // 0x1b0
};

struct UYGameInstance_BP_C : UYGameInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x4e0
};

struct UNetDriver : UObject {
	FString NetConnectionClassName; // 0x30
	FString ReplicationDriverClassName; // 0x40
	int32_t MaxDownloadSize; // 0x50
	char bClampListenServerTickRate : 1; // 0x54
	int32_t NetServerMaxTickRate; // 0x58
	int32_t MaxNetTickRate; // 0x5c
	int32_t MaxInternetClientRate; // 0x60
	int32_t MaxClientRate; // 0x64
	float ServerTravelPause; // 0x68
	float SpawnPrioritySeconds; // 0x6c
	float RelevantTimeout; // 0x70
	float KeepAliveTime; // 0x74
	float InitialConnectTimeout; // 0x78
	float ConnectionTimeout; // 0x7c
	float TimeoutMultiplierForUnoptimizedBuilds; // 0x80
	bool bNoTimeouts; // 0x84
	bool bNeverApplyNetworkEmulationSettings; // 0x85
	UNetConnection* ServerConnection; // 0x88
	TArray<UNetConnection*> ClientConnections; // 0x90
	int32_t RecentlyDisconnectedTrackingTime; // 0x100
	UWorld* World; // 0x140
	UPackage* WorldPackage; // 0x148
	UObject* NetConnectionClass; // 0x170
	UObject* ReplicationDriverClass; // 0x178
	FName NetDriverName; // 0x190
	TArray<FChannelDefinition> ChannelDefinitions; // 0x198
	TMap<FName, FChannelDefinition> ChannelDefinitionMap; // 0x1a8
	TArray<UChannel*> ActorChannelPool; // 0x1f8
	float Time; // 0x210
	UReplicationDriver* ReplicationDriver; // 0x6e8
};

struct UYBugReporterComponent_BP_C : UYBugReportingComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	AYPlayerController* PlayerControllerOwner; // 0xb8
	FGuid perkId; // 0xc0
	FDataTableRowHandle perk; // 0xd0
	bool IsRequestingToeTrap; // 0xe0
	float LastTimeToeTrapReported; // 0xe4
	float ToeTrapCooldown; // 0xe8
	FString ScreenShotPath; // 0xf0
	UWBP_Bug_Form_Menu_C* BugReportForm; // 0x100
};

struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UYWidget_ItemComponentTextDescription : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnItemComponentTextDescription; // 0x300
	UTextBlock* m_descriptionText; // 0x310
};

struct UDatasmithVREDSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48
	bool bOptimizeDuplicatedNodes; // 0x49
	bool bImportMats; // 0x4a
	FString MatsPath; // 0x50
	bool bImportVar; // 0x60
	bool bCleanVar; // 0x61
	FString VarPath; // 0x68
	bool bImportLightInfo; // 0x78
	FString LightInfoPath; // 0x80
	bool bImportClipInfo; // 0x90
	FString ClipInfoPath; // 0x98
};

struct ULocalizedOverlays : UOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
};

struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UYVivoxManager : UObject {
	FMulticastInlineDelegate OnInitializedVivox; // 0x28
	TArray<UYVivoxComponent*> m_vivoxComponents; // 0x1c0
};

struct UChat_UserMenu_WBP_C : UYWidget_ChatUserMenu {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* FadeIn; // 0x2f8
	UWidgetAnimation* FadeOut; // 0x300
	UHorizontalBox* addFriendPanel; // 0x308
	UYButton* addFriendYButton; // 0x310
	UYTextBlock* addFriendYTextBlock; // 0x318
	UImage* BackgroundImage; // 0x320
	UHorizontalBox* blockUserPanel; // 0x328
	UYButton* blockUserYButton; // 0x330
	UYTextBlock* blockUserYTextBlock; // 0x338
	UImage* chatMutedImage; // 0x340
	UImage* chatMuteImage; // 0x348
	UHorizontalBox* ChatMutePanel; // 0x350
	UYButton* chatMuteYButton; // 0x358
	UYTextBlock* chatMuteYTextBlock; // 0x360
	UYButton* closeMenuYButton; // 0x368
	UHorizontalBox* inviteToSquadPanel; // 0x370
	UCanvasPanel* mainCanvasPanel; // 0x378
	UYTextBlock* playerNameYTextBlock; // 0x380
	UHorizontalBox* removeFriendPanel; // 0x388
	UYButton* removeFriendYButton; // 0x390
	UYTextBlock* removeFriendYTextBlock; // 0x398
	UHorizontalBox* reportBox; // 0x3a0
	UImage* reportImage; // 0x3a8
	UHorizontalBox* ReportPanel; // 0x3b0
	UImage* reportSentImage; // 0x3b8
	UYTextBlock* reportUserYTextBlock; // 0x3c0
	UYButton* reportYButton; // 0x3c8
	UImage* Separator; // 0x3d0
	UImage* Separator_2; // 0x3d8
	UImage* Separator_3; // 0x3e0
	UImage* Separator_4; // 0x3e8
	UHorizontalBox* squadInviteBox; // 0x3f0
	UImage* squadInviteSentImage; // 0x3f8
	UYButton* squadInviteYButton; // 0x400
	UYTextBlock* squadInviteYTextBlock; // 0x408
	UImage* voicechatMutedImage; // 0x410
	UImage* voicechatMuteImage; // 0x418
	UHorizontalBox* VoiceChatMutePanel; // 0x420
	UYButton* voicechatMuteYButton; // 0x428
	UYTextBlock* voiceChatMuteYTextBlock; // 0x430
};

struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x250
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x260
	UNavLinkCustomComponent* SmartLinkComp; // 0x270
	bool bSmartLinkIsRelevant; // 0x278
	FMulticastInlineDelegate OnSmartLinkReached; // 0x280
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct UBookMark : UBookmarkBase {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct ASprayActor_BP_C : AYSprayActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
};

struct UYSkeletalMeshComponentFOV : USkeletalMeshComponent {
	float m_defaultFOV; // 0xed0
	float m_lerpFOVSpeed; // 0xed4
	float m_desiredFOV; // 0xed8
	float m_currentFOV; // 0xee0
	bool m_useCustomFOV; // 0xee4
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	int32_t MaxElements; // 0x40
};

struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	FString EmitterName; // 0xf8
	FString DIName; // 0x108
};

struct UNiagaraDataInterfaceFieldSystem : UNiagaraDataInterface {
	UBlueprint* BlueprintSource; // 0x38
	AActor* SourceActor; // 0x40
	FIntVector FieldDimensions; // 0x48
	FVector MinBounds; // 0x54
	FVector MaxBounds; // 0x60
};

struct UYWidget_ItemComponentStatsContainer : UYWidget_ItemComponentBase {
	bool m_buildItemsFromRelatedItemHandleAttributes; // 0x300
	FDataTableRowHandle m_relatedItemDataTableRow; // 0x308
};

struct UYWidget_ItemComponentTextOfferCategory : UYWidget_ItemComponentBase {
	UTextBlock* m_offerCategoryText; // 0x300
};

struct USoundSubmix : USoundSubmixWithParentBase {
	char bMuteWhenBackgrounded : 1; // 0x40
	TArray<USoundEffectSubmixPreset*> SubmixEffectChain; // 0x48
	USoundfieldEncodingSettingsBase* AmbisonicsPluginSettings; // 0x58
	int32_t EnvelopeFollowerAttackTime; // 0x60
	int32_t EnvelopeFollowerReleaseTime; // 0x64
	EGainParamMode GainMode; // 0x68
	float OutputVolume; // 0x6c
	float WetLevel; // 0x70
	float DryLevel; // 0x74
	FMulticastInlineDelegate OnSubmixRecordedFileDone; // 0x78
};

struct UYWidget_ReleaseNotes : UYWidget {
	UTextBlock* m_outputText; // 0x2c0
};

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct AYProjectile : AActor {
	UProjectileMovementComponent* m_movementComponent; // 0x240
	USphereComponent* m_collisionComp; // 0x248
	UParticleSystemComponent* m_particleComponent; // 0x250
	FYProjectileInititalizationData m_initData; // 0x258
	bool m_destroyOnImpact; // 0x309
	float m_traceBehindDistanceOffset; // 0x30c
	FVector m_groundTraceLocation; // 0x310
	bool m_traceToFindGround; // 0x31c
	bool m_drawTraceResult; // 0x31d
	bool m_isLockedOnHomingTarget; // 0x388
	UYWeaponTransportComponent* m_weaponTransportComponent; // 0x390
};

struct UYKilledEventAnalyticsComponent : UActorComponent {
	TMap<FUniqueNetIdRepl, FYPlayerKilledEvent> m_killedEventInfos; // 0xb0
	FMulticastInlineDelegate BP_OnTrySendingKilledEvent; // 0x100
};

struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct USynthSound : USoundWaveProcedural {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UCrowdFollowingComponent : UPathFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28
	TArray<UObject*> References; // 0x30
	char bStripFromClientBuilds : 1; // 0x90
	char bIgnoreExtraFields : 1; // 0x90
	char bIgnoreMissingFields : 1; // 0x90
	FString ImportKeyField; // 0x98
};

struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
};

struct ADatasmithAreaLightActor : AActor {
	EDatasmithAreaLightActorType LightType; // 0x240
	EDatasmithAreaLightActorShape LightShape; // 0x241
	FVector2D Dimensions; // 0x244
	float Intensity; // 0x24c
	ELightUnits IntensityUnits; // 0x250
	FLinearColor Color; // 0x254
	float Temperature; // 0x264
	UTextureLightProfile* IESTexture; // 0x268
	bool bUseIESBrightness; // 0x270
	float IESBrightnessScale; // 0x274
	FRotator Rotation; // 0x278
	float SourceRadius; // 0x284
	float SourceLength; // 0x288
	float AttenuationRadius; // 0x28c
	float SpotlightInnerAngle; // 0x290
	float SpotlightOuterAngle; // 0x294
};

struct UYMapMarkerData : UObject {
	TArray<APlayerController*> m_discoveredPlayers; // 0x28
	AActor* m_owner; // 0x38
	UYCharacterCloakComponent* m_cloakComponent; // 0x40
	TArray<APlayerController*> m_forcedVisibilityPlayers; // 0x48
	EYMapMarkerType m_markerType; // 0x58
	EYMapMarkerState m_markerState; // 0x59
	FText m_markerTitle; // 0x60
	UYWidget_MapMarker* m_markerWidgetClass; // 0x88
	bool m_onlyRelevantToOwner; // 0x90
	bool m_onlyRelevantToOwnerTeam; // 0x91
	bool m_alwaysVisible; // 0x92
	bool m_visibleDuringLobby; // 0x93
	bool m_onlyRelevantInLobby; // 0x94
	bool m_staysRelevantOnceDiscovered; // 0x95
	bool m_centerMinimapOnThisMarker; // 0x96
	bool m_shouldFollowActorPosition; // 0x97
	bool m_onlyFollowActorPositionForAlly; // 0x98
	bool m_autoRemoveWhenHealthEmpty; // 0x99
	bool m_canChangeStateDuringEvacuation; // 0x9a
	float m_timeLeft; // 0xa0
	float m_timeOutDuration; // 0xa4
	bool m_hideFromOwner; // 0xa8
	bool m_ownerIsDead; // 0xa9
	float m_distanceTowardsLocalPlayer; // 0xac
	bool m_shouldShowLocalDistanceTowardsPlayer; // 0xb0
	int32_t m_visibilityDistance; // 0xb4
	FVector m_initialLocation; // 0xb8
	FVector m_worldLocation; // 0xc4
	FVector m_authorithyLastCachedLocation; // 0xd0
	FRotator m_authorithyLastCachedRotation; // 0xdc
	float m_surveilledActorTimeOutDuration; // 0xe8
	float m_surveilledActorRefreshTime; // 0xec
	int32_t m_localEvaluationHandle; // 0xf0
	FRotator m_worldRotation; // 0x114
};

struct APlayerCameraManager : AActor {
	APlayerController* PCOwner; // 0x240
	USceneComponent* TransformComponent; // 0x248
	float DefaultFOV; // 0x258
	float DefaultOrthoWidth; // 0x260
	float DefaultAspectRatio; // 0x268
	FCameraCacheEntry CameraCache; // 0x2b0
	FCameraCacheEntry LastFrameCameraCache; // 0x8a0
	FTViewTarget ViewTarget; // 0xe90
	FTViewTarget PendingViewTarget; // 0x1490
	FCameraCacheEntry CameraCachePrivate; // 0x1ac0
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x20b0
	TArray<UCameraModifier*> ModifierList; // 0x26a0
	TArray<UCameraModifier*> DefaultModifiers; // 0x26b0
	float FreeCamDistance; // 0x26c0
	FVector FreeCamOffset; // 0x26c4
	FVector ViewTargetOffset; // 0x26d0
	FMulticastInlineDelegate OnAudioFadeChangeEvent; // 0x26e0
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x2700
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2710
	UCameraAnimInst* AnimInstPool[0x8]; // 0x2718
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x2758
	TArray<UCameraAnimInst*> ActiveAnims; // 0x2778
	TArray<UCameraAnimInst*> FreeAnims; // 0x2788
	ACameraActor* AnimCameraActor; // 0x2798
	char bIsOrthographic : 1; // 0x27a0
	char bDefaultConstrainAspectRatio : 1; // 0x27a0
	char bClientSimulatingViewTarget : 1; // 0x27a0
	char bUseClientSideCameraUpdates : 1; // 0x27a0
	char bGameCameraCutThisFrame : 1; // 0x27a1
	float ViewPitchMin; // 0x27a4
	float ViewPitchMax; // 0x27a8
	float ViewYawMin; // 0x27ac
	float ViewYawMax; // 0x27b0
	float ViewRollMin; // 0x27b4
	float ViewRollMax; // 0x27b8
	float ServerUpdateCameraTimeout; // 0x27c0
};

struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x1b8
	int32_t StreamingPriority; // 0x1bc
	ESoundwaveSampleRateSettings SampleRateQuality; // 0x1c0
	ESoundGroup SoundGroup; // 0x1c2
	char bLooping : 1; // 0x1c3
	char bStreaming : 1; // 0x1c3
	char bSeekableStreaming : 1; // 0x1c3
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x1c4
	char bMature : 1; // 0x1c5
	char bManualWordWrap : 1; // 0x1c5
	char bSingleLine : 1; // 0x1c6
	char bIsAmbisonics : 1; // 0x1c6
	TArray<float> FrequenciesToAnalyze; // 0x1c8
	TArray<FSoundWaveSpectralTimeData> CookedSpectralTimeData; // 0x1d8
	TArray<FSoundWaveEnvelopeTimeData> CookedEnvelopeTimeData; // 0x1e8
	int32_t InitialChunkSize; // 0x1f8
	FString SpokenText; // 0x240
	float SubtitlePriority; // 0x250
	float Volume; // 0x254
	float Pitch; // 0x258
	int32_t NumChannels; // 0x25c
	int32_t SampleRate; // 0x260
	TArray<FSubtitleCue> Subtitles; // 0x270
	UCurveTable* Curves; // 0x280
	UCurveTable* InternalCurves; // 0x288
};

struct UGerstnerWaterWaves : UWaterWaves {
	UGerstnerWaterWaveGeneratorBase* GerstnerWaveGenerator; // 0x28
	TArray<FGerstnerWave> GerstnerWaves; // 0x30
	float MaxWaveHeight; // 0x40
};

struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
};

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct UPlayFabRuntimeSettings : UObject {
	FString ProductionEnvironmentURL; // 0x28
	FString TitleId; // 0x38
	FString DeveloperSecretKey; // 0x48
};

struct UAnimBlueprintGeneratedClass : UBlueprintGeneratedClass {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x330
	USkeleton* TargetSkeleton; // 0x340
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x348
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x358
	TArray<FName> SyncGroupNames; // 0x428
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x438
	TMap<FName, FGraphAssetPlayerInformation> GraphAssetPlayerInformation; // 0x448
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x498
	FPropertyAccessLibrary PropertyAccessLibrary; // 0x4e8
};

struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct UWBP_Inventory_PlayerSet_DropArea_Attachments_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWBP_Inventory_PlayerSet_DropArea_C* UI_Inventory_PlayerSet_DropArea_WBP; // 0x268
	FString weaponItemId; // 0x270
};

struct AMatineeActor : AActor {
	UInterpData* MatineeData; // 0x240
	FName MatineeControllerName; // 0x248
	float PlayRate; // 0x250
	char bPlayOnLevelLoad : 1; // 0x254
	char bForceStartPos : 1; // 0x254
	float ForceStartPosition; // 0x258
	char bLooping : 1; // 0x25c
	char bRewindOnPlay : 1; // 0x25c
	char bNoResetOnRewind : 1; // 0x25c
	char bRewindIfAlreadyPlaying : 1; // 0x25c
	char bDisableRadioFilter : 1; // 0x25c
	char bClientSideOnly : 1; // 0x25c
	char bSkipUpdateIfNotVisible : 1; // 0x25c
	char bIsSkippable : 1; // 0x25c
	int32_t PreferredSplitScreenNum; // 0x260
	char bDisableMovementInput : 1; // 0x264
	char bDisableLookAtInput : 1; // 0x264
	char bHidePlayer : 1; // 0x264
	char bHideHud : 1; // 0x264
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x268
	char bShouldShowGore : 1; // 0x278
	TArray<UInterpGroupInst*> GroupInst; // 0x280
	TArray<FCameraCutInfo> CameraCuts; // 0x290
	char bIsPlaying : 1; // 0x2a0
	char bReversePlayback : 1; // 0x2a0
	char bPaused : 1; // 0x2a0
	char bPendingStop : 1; // 0x2a0
	float InterpPosition; // 0x2a4
	char ReplicationForceIsPlaying; // 0x2ac
	FMulticastInlineDelegate OnPlay; // 0x2b0
	FMulticastInlineDelegate OnStop; // 0x2c0
	FMulticastInlineDelegate OnPause; // 0x2d0
};

struct AYPlayerStateBase : APlayerState {
	FMulticastInlineDelegate OnCanSeeSeasonPopupStateChangedDelegate; // 0x360
	UYPlayerBIDataComponent* m_playerBIComponent; // 0x370
	UYPlatformAnalyticsComponent* m_platformAnalyticsComponent; // 0x378
	UYStateInventoryComponent* m_stateInventoryComponent; // 0x380
	UYStateQuestComponent* m_stateQuestComponent; // 0x388
	UYPlayerEOSStatsComponent* m_playerEOSStatsComponent; // 0x390
	bool m_seeSeasonRewardPopup; // 0x398
};

struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x268
	bool bLogoutOnSessionTimeout; // 0x2d0
	float SessionTimeoutSecs; // 0x2d4
	float TravelSessionTimeoutSecs; // 0x2d8
};

struct UYWidget_MatchTimer : UYWidget {
	UTextBlock* m_matchTimerTextBlock; // 0x2c0
	EYMatchState m_exclusiveMatchState; // 0x2c8
	FText m_fallbackTimerText; // 0x2d0
};

struct UAxisAngleGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoFloatParameterSource> AngleSource; // 0x58
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78
	bool bInInteraction; // 0x88
	FVector RotationOrigin; // 0x8c
	FVector RotationAxis; // 0x98
	FVector RotationPlaneX; // 0xa4
	FVector RotationPlaneY; // 0xb0
	FVector InteractionStartPoint; // 0xbc
	FVector InteractionCurPoint; // 0xc8
	float InteractionStartAngle; // 0xd4
	float InteractionCurAngle; // 0xd8
};

struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
};

struct ADeposit_Pickup_BP_C : AYPickup_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	USphereComponent* ExtraPickupColl; // 0x498
};

struct UPrefabricatorSettings : UDeveloperSettings {
	EPrefabricatorPivotPosition PivotPosition; // 0x38
	bool bAllowDynamicUpdate; // 0x39
	TSet<UObject*> IgnoreBoundingBoxForObjects; // 0x40
	float DefaultThumbnailPitch; // 0x90
	float DefaultThumbnailYaw; // 0x94
	float DefaultThumbnailZoom; // 0x98
};

struct UWBP_Generic_Modal_C : UYWidget_ConfirmationModal {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UWidgetAnimation* ScreenIn_Anim; // 0x2f0
	UHorizontalBox* ButtonHolder; // 0x2f8
	UCanvasPanel* ConfirmationLayout; // 0x300
	UNamedSlot* CustomContentSlot; // 0x308
	USizeBox* LoadingSpinner; // 0x310
	URichTextBlock* RichTxt_Info; // 0x318
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker; // 0x320
	UWBP_Common_Btn_C* WBP_Btn_Common_Primary; // 0x328
	UWBP_Common_Btn_C* WBP_Btn_Common_Secondary; // 0x330
	UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel; // 0x338
	UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel_Confirmation; // 0x340
	UWBP_LoadingSpinner_C* WBP_LoadingSpinner; // 0x348
	UYTextBlock* YTxt_FauxHeadline; // 0x350
	UYTextBlock* YTxt_Info_3; // 0x358
	UYTextBlock* YTxt_Timer; // 0x360
	FText HeadlineText; // 0x368
	FText ContentText; // 0x380
	bool ShowLoading; // 0x398
	FText PrimaryButtonText; // 0x3a0
	FText SecondaryButtonText; // 0x3b8
	bool isConfirmationModal; // 0x3d0
	bool isCancelationModal; // 0x3d1
	bool isNoButtonModal; // 0x3d2
	bool CloseOnClick; // 0x3d3
	bool HideBackgroundBlur; // 0x3d4
	FString PrimaryButtonBIName; // 0x3d8
	FString ButtonBILocation; // 0x3e8
	FString SecondaryButtonBIName; // 0x3f8
};

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x270
	float CaptureDistanceScale; // 0x274
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
};

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28
};

struct UParticleModule : UObject {
	char bSpawnModule : 1; // 0x28
	char bUpdateModule : 1; // 0x28
	char bFinalUpdateModule : 1; // 0x28
	char bUpdateForGPUEmitter : 1; // 0x28
	char bCurvesAsColor : 1; // 0x28
	char b3DDrawMode : 1; // 0x28
	char bSupported3DDrawMode : 1; // 0x28
	char bEnabled : 1; // 0x28
	char bEditable : 1; // 0x29
	char LODDuplicate : 1; // 0x29
	char bSupportsRandomSeed : 1; // 0x29
	char bRequiresLoopingNotification : 1; // 0x29
	char LODValidity; // 0x2a
};

struct UDatasmithMesh : UObject {
	FString MeshName; // 0x28
	bool bIsCollisionMesh; // 0x38
	TArray<FDatasmithMeshSourceModel> SourceModels; // 0x40
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> nodes; // 0x40
};

struct AIntervalGizmoActor : AGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x240
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x248
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x250
};

struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UParticleModuleTypeDataRibbon : UParticleModuleTypeDataBase {
	int32_t MaxTessellationBetweenParticles; // 0x30
	int32_t SheetsPerTrail; // 0x34
	int32_t MaxTrailCount; // 0x38
	int32_t MaxParticleInTrailCount; // 0x3c
	char bDeadTrailsOnDeactivate : 1; // 0x40
	char bDeadTrailsOnSourceLoss : 1; // 0x40
	char bClipSourceSegement : 1; // 0x40
	char bEnablePreviousTangentRecalculation : 1; // 0x40
	char bTangentRecalculationEveryFrame : 1; // 0x40
	char bSpawnInitialParticle : 1; // 0x40
	ETrailsRenderAxisOption RenderAxis; // 0x44
	float TangentSpawningScalar; // 0x48
	char bRenderGeometry : 1; // 0x4c
	char bRenderSpawnPoints : 1; // 0x4c
	char bRenderTangents : 1; // 0x4c
	char bRenderTessellation : 1; // 0x4c
	float TilingDistance; // 0x50
	float DistanceTessellationStepSize; // 0x54
	char bEnableTangentDiffInterpScale : 1; // 0x58
	float TangentTessellationScalar; // 0x5c
};

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UWidgetAnimation : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct ALevelVariantSetsActor : AActor {
	FSoftObjectPath LevelVariantSets; // 0x240
};

struct UYWidget_InputKeySelector : UYWidget {
	UTextBlock* m_actionTextBlock; // 0x2c0
	UYInputKeySelector* m_mainBinding; // 0x2c8
	UYInputKeySelector* m_alternateBinding; // 0x2d0
};

struct UBTDecorator_SetSenseTuning_C : UBTDecorator_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa0
	FYAISenseTuningRow SavedSenseTuning; // 0xa8
	FDataTableRowHandle SenseTurningRow; // 0x178
};

struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x840
	float CheckpointSaveMaxMSPerFrame; // 0x9ec
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa10
	bool bIsLocalReplay; // 0xa20
	TArray<APlayerController*> SpectatorControllers; // 0xa28
};

struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x90
	FName TrackName; // 0xa0
};

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct UYWidget_MenuTestRootWidget : UYWidget {
	UButton* m_openScreenButton; // 0x2c0
	UButton* m_closeScreenButton; // 0x2c8
	UEditableTextBox* m_textBox01; // 0x2d0
	UEditableTextBox* m_textBox02; // 0x2d8
};

struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x1f8
};

struct UEngineMessage : ULocalMessage {
	FString FailedPlaceMessage; // 0x28
	FString MaxedOutMessage; // 0x38
	FString EnteredMessage; // 0x48
	FString LeftMessage; // 0x58
	FString GlobalNameChange; // 0x68
	FString SpecEnteredMessage; // 0x78
	FString NewPlayerMessage; // 0x88
	FString NewSpecMessage; // 0x98
};

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UARPlaneComponent : UARComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	EFireEventsAtPosition EventPosition; // 0x84
	TArray<UMovieSceneSection*> Sections; // 0x88
};

struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct UYInventoryAssociationComponent : UActorComponent {
	FYInventoryItem m_itemHandle; // 0xb0
	FMulticastInlineDelegate OnItemDataChanged; // 0x148
};

struct ALevelBounds : AActor {
	UBoxComponent* BoxComponent; // 0x240
	bool bAutoUpdateBounds; // 0x248
};

struct UYWidget_Lobby : UYWidget {
	UWidgetSwitcher* m_topInfoWidgetSwitcher; // 0x2c0
	UTextBlock* m_matchCountdownTextBlock; // 0x2c8
	UWidget* m_countDownPanel; // 0x2d0
};

struct UYControllerTravelComponent : UActorComponent {
	FYTravelRequestData m_currentTravelRequest; // 0xb0
	EYTravelState m_currentTravelState; // 0xf8
	bool m_requestScreenChangeOnLogin; // 0xfc
	bool m_requestedMatchConnection; // 0xfd
};

struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48
	bool WarnOnInvalidTags; // 0x49
	bool FastReplication; // 0x4a
	FString InvalidTagCharacters; // 0x50
	TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x60
	TArray<FSoftObjectPath> GameplayTagTableList; // 0x70
	TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x80
	TArray<FName> CommonlyReplicatedTags; // 0x90
	int32_t NumBitsForContainerSize; // 0xa0
	int32_t NetIndexFirstBitSegment; // 0xa4
	TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8
};

struct UMapMarker_Social_WBP_C : UYWidget_SocialMapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UWidgetAnimation* DropPin; // 0x2f0
	UImage* AcknowledgeWidgetImage; // 0x2f8
	UImage* CloseWidgetImage; // 0x300
	UImage* m_iconImage; // 0x308
	UEditableText* m_markerLabel; // 0x310
	UTextBlock* Name; // 0x318
	bool CalculatedMarkerColor; // 0x320
	bool IsLocalPawn; // 0x321
};

struct ANPC_Object_BP_C : AYNPCObject {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UYObjectInteractionComponent* YObjectInteraction; // 0x298
};

struct UWBP_Item_Preview_Attachments_Btn_C : UWBP_ItemTileBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5d8
	UWidgetAnimation* Release_Anim; // 0x5e0
	UWidgetAnimation* Press_Anim; // 0x5e8
	UWidgetAnimation* HighlightSheen_Anim; // 0x5f0
	UWidgetAnimation* Selected_Anim; // 0x5f8
	UWidgetAnimation* Idle_Anim; // 0x600
	UWidgetAnimation* Highlight_Anim; // 0x608
	USizeBox* AttachmentName; // 0x610
	UOverlay* CollapsedComponents; // 0x618
	UOverlay* ComponentsContainer; // 0x620
	UImage* Gfx_Add; // 0x628
	UImage* Gfx_Edge; // 0x630
	UImage* Gfx_FillEdge; // 0x638
	UImage* Gfx_Gradient; // 0x640
	UImage* Gfx_Stroke; // 0x648
	UImage* Gfx_StrokeSelected; // 0x650
	UImage* Gfx_Triangle; // 0x658
	UScaleBox* Image_Centered; // 0x660
	UInvalidationBox* InvalidationBox_1; // 0x668
	UItemComponent_Highlight_Stash_WBP_C* ItemComponent_Highlight_Stash_WBP_84; // 0x670
	UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x678
	UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x680
	UOverlay* Layout_ButtonArtwork; // 0x688
	UCanvasPanel* Layout_ButtonImageContent; // 0x690
	USizeBox* Layout_ButtonSizeBox; // 0x698
	UOverlay* Layout_EmptySlot; // 0x6a0
	USizeBox* Layout_HighlightsSizeBox; // 0x6a8
	UOverlay* Layout_UnavailableSlot; // 0x6b0
	UButton* m_button; // 0x6b8
	UImage* m_Image_ItemCenter; // 0x6c0
	USizeBox* rarity; // 0x6c8
	UBorder* RarityBorder; // 0x6d0
	UNamedSlot* Slot_AdditionalComponents; // 0x6d8
	UTextBlock* Txt_AttachmentName; // 0x6e0
	UWBP_Item_InsuranceTag_C* WBP_Item_InsuranceTag; // 0x6e8
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x6f0
	UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x6f8
	FText AttachmentLabel; // 0x700
	bool UseTooltipVariant; // 0x718
	bool ShowEmptySlot; // 0x719
	bool ShowUnavailableSlot; // 0x71a
	bool IsDisabled; // 0x71b
	EYPlayerSetType slotType; // 0x71c
	EY_AttachmentItemState VisibilityState; // 0x71d
	EYModificationSlotType modType; // 0x71e
};

struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat startRotation; // 0x30
};

struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x28
	bool LowLatency; // 0x29
	bool NativeAudioOut; // 0x2a
	bool HardwareAcceleratedVideoDecoding; // 0x2b
};

struct UYProgressBarProspectorLevel_WBP_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* UpdateWhiteRadialProgressBar; // 0x2c8
	UWidgetAnimation* UpdateWhiteProgressBar_Reverse; // 0x2d0
	UWidgetAnimation* DifferencePulse; // 0x2d8
	UWidgetAnimation* UpdateYellowProgressBar; // 0x2e0
	UWidgetAnimation* UpdateWhiteProgressBar; // 0x2e8
	UImage* img_Border; // 0x2f0
	UImage* img_RadialBar_BG; // 0x2f8
	UImage* img_RadialBar_Delta; // 0x300
	UImage* img_RadialBar_Main; // 0x308
	UYProgressBar* RedProgressBar; // 0x310
	UYTextBlock* text_CurrentAddText; // 0x318
	UYTextBlock* text_CurrentXP; // 0x320
	UYTextBlock* text_LevelXP; // 0x328
	UUI_ImageBase_WBP_C* UI_ImageBase_WBP; // 0x330
	UYProgressBar* WhiteProgBar; // 0x338
	UWidgetSwitcher* WidgetSwitcher_BarType; // 0x340
	UHorizontalBox* XP_Display_Container; // 0x348
	UYProgressBar* YellowProgBar; // 0x350
	UYWidget_ProspectorLevel_Small_WBP_C* YWidget_ProspectorLevel_Small_WBP; // 0x358
	float CachedPercentage; // 0x360
	float PendingPercentage; // 0x364
	float AnimDuration; // 0x368
	float PlaybackSpeed; // 0x36c
	UAudioComponent* ProgressBarAnim_SoundComponent; // 0x370
	bool PlaySoundDuringAnimation; // 0x378
	bool ProgressBarAnimationReachedFull; // 0x379
	bool ProgressBarAnimationReachedEmpty; // 0x37a
	int32_t ProgressBar_Type; // 0x37c
	int32_t ProgressBar_ParentValue; // 0x380
	FSlateBrush ProgressBar_IconImg; // 0x388
	int32_t ProgressBar_CurrentValue; // 0x410
	int32_t ProgressBar_MaxValue; // 0x414
	bool ShowDetailedInfo; // 0x418
	UMaterialInterface* RadialBar_Material; // 0x420
	bool ShowParentValue; // 0x428
	bool Show_ImgIcon; // 0x429
	int32_t ProgressBar_DeltaValue; // 0x42c
	bool ShowDetailedInfo_AddText; // 0x430
	FMulticastInlineDelegate OnProgressBarAnimFinished; // 0x438
	FLinearColor ProspectorLevelProgressBarColor; // 0x448
	bool ShowRadialProgressBar; // 0x458
};

struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct UMediaPlayer : UObject {
	FMulticastInlineDelegate OnEndReached; // 0x28
	FMulticastInlineDelegate OnMediaClosed; // 0x38
	FMulticastInlineDelegate OnMediaOpened; // 0x48
	FMulticastInlineDelegate OnMediaOpenFailed; // 0x58
	FMulticastInlineDelegate OnPlaybackResumed; // 0x68
	FMulticastInlineDelegate OnPlaybackSuspended; // 0x78
	FMulticastInlineDelegate OnSeekCompleted; // 0x88
	FMulticastInlineDelegate OnTracksChanged; // 0x98
	FTimespan CacheAhead; // 0xa8
	FTimespan CacheBehind; // 0xb0
	FTimespan CacheBehindGame; // 0xb8
	bool NativeAudioOut; // 0xc0
	bool PlayOnOpen; // 0xc1
	char Shuffle : 1; // 0xc4
	char Loop : 1; // 0xc4
	UMediaPlaylist* Playlist; // 0xc8
	int32_t PlaylistIndex; // 0xd0
	FTimespan TimeDelay; // 0xd8
	float HorizontalFieldOfView; // 0xe0
	float VerticalFieldOfView; // 0xe4
	FRotator ViewRotation; // 0xe8
	FGuid PlayerGuid; // 0x120
};

struct UYWidget_ButtonExitToStation : UYWidget {
	FMulticastInlineDelegate OnButtonClicked; // 0x2c0
	UButton* m_button; // 0x2d0
};

struct UMovieSceneSubSection : UMovieSceneSection {
	FMovieSceneSectionParameters Parameters; // 0xe8
	float StartOffset; // 0x10c
	float TimeScale; // 0x110
	float PrerollTime; // 0x114
	UMovieSceneSequence* SubSequence; // 0x118
	LazyObjectProperty ActorToRecord; // 0x120
	FString TargetSequenceName; // 0x140
	FDirectoryPath TargetPathToRecordTo; // 0x150
};

struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UYGameEngine : UGameEngine {
	UYEZProfileManager* m_ezProfile; // 0xe90
	FString m_uploadLLMShare; // 0xe98
};

struct UHelmetGoggleComponent_BP_C : UYHelmetGoggleComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UMaterialInstanceDynamic* GoggleMat; // 0xb8
	bool IsEnabled; // 0xc0
};

struct ULevelStreaming : UObject {
	TSoftObjectPtr<UWorld> WorldAsset; // 0x28
	FName PackageNameToLoad; // 0x50
	TArray<FName> LODPackageNames; // 0x58
	FTransform LevelTransform; // 0x80
	int32_t LevelLODIndex; // 0xb0
	int32_t StreamingPriority; // 0xb4
	char bShouldBeVisible : 1; // 0xba
	char bShouldBeLoaded : 1; // 0xba
	char bLocked : 1; // 0xba
	char bIsStatic : 1; // 0xba
	char bShouldBlockOnLoad : 1; // 0xba
	char bShouldBlockOnUnload : 1; // 0xbb
	char bDisableDistanceStreaming : 1; // 0xbb
	char bDrawOnLevelStatusMap : 1; // 0xbb
	FLinearColor LevelColor; // 0xbc
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0
	FMulticastInlineDelegate OnLevelLoaded; // 0xe8
	FMulticastInlineDelegate OnLevelUnloaded; // 0xf8
	FMulticastInlineDelegate OnLevelShown; // 0x108
	FMulticastInlineDelegate OnLevelHidden; // 0x118
	ULevel* LoadedLevel; // 0x128
	ULevel* PendingUnloadLevel; // 0x130
};

struct USceneCaptureComponent2D : USceneCaptureComponent {
	ECameraProjectionMode ProjectionType; // 0x2b0
	float FOVAngle; // 0x2b4
	float OrthoWidth; // 0x2b8
	UTextureRenderTarget2D* TextureTarget; // 0x2c0
	ESceneCaptureCompositeMode CompositeMode; // 0x2c8
	FPostProcessSettings PostProcessSettings; // 0x2d0
	float PostProcessBlendWeight; // 0x820
	char bOverride_CustomNearClippingPlane : 1; // 0x824
	float CustomNearClippingPlane; // 0x828
	bool bUseCustomProjectionMatrix; // 0x82c
	FMatrix CustomProjectionMatrix; // 0x830
	bool bEnableClipPlane; // 0x870
	FVector ClipPlaneBase; // 0x874
	FVector ClipPlaneNormal; // 0x880
	char bCameraCutThisFrame : 1; // 0x88c
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x88c
	bool bDisableFlipCopyGLES; // 0x890
};

struct UWBP_SocialToggle_C : UYWidget_OutpostSocialToggle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* HighlightBracket_Anim; // 0x2c8
	UNotificationNumber_WBP_C* notificationNumber; // 0x2d0
	UYTextBlock* onlineNumberYTextBlock; // 0x2d8
	UYButton* socialYToggleButton; // 0x2e0
	UWBP_Notification_C* WBP_Notification; // 0x2e8
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x2f0
	FMulticastInlineDelegate OnSocialToggleClicked; // 0x2f8
};

struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UWBP_Contracts_Active_C : UYWidget_ActiveContracts {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* WidgetIn_Anim; // 0x2c8
	UOverlay* Background; // 0x2d0
	UVerticalBox* ContractEntries; // 0x2d8
	UImage* Gfx_Edge; // 0x2e0
	UOverlay* Header; // 0x2e8
	UOverlay* HeaderRightAlign; // 0x2f0
	UVerticalBox* Layout_Panel; // 0x2f8
	UTextBlock* Txt_ContractLimit; // 0x300
	UTextBlock* Txt_ContractLimit_2; // 0x308
	UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x310
	UWBP_Contract_Active_Entry_C* WBP_Contract_Active_Entry_ICA; // 0x318
	UWBP_Contract_Active_Entry_C* WBP_Contract_Active_Entry_Korolev; // 0x320
	UWBP_Contract_Active_Entry_C* WBP_Contract_Active_Entry_Osiris; // 0x328
	UWBP_Header_Left_Panel_C* WBP_Header_Left_Panel; // 0x330
	UWBP_Header_Panel_C* WBP_Header_Panel; // 0x338
	UYControllerContractsActivesDataComponent* ContractComponent; // 0x340
	bool ShowDescriptions; // 0x348
	bool UseAlternateHeader; // 0x349
	bool HideInfoTooltip; // 0x34a
};

struct AYActivityLocationLinked : AYActivityLocationEQS {
	float m_linkRadius; // 0x2f0
	int32_t m_scoreSpawnThreshold; // 0x2f4
	TMap<EYActivityType, int32_t> m_scorePerType; // 0x2f8
	TMap<EYActivityType, int32_t> m_debugInfoActorsInRadius; // 0x348
	EYLinkType m_linkType; // 0x398
	FYEvaluationResult m_lastEvaluationResult; // 0x3a0
};

struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UStaticMesh : UStreamableRenderAsset {
	FPerPlatformInt MinLOD; // 0x80
	float LpvBiasMultiplier; // 0x84
	TArray<FStaticMaterial> StaticMaterials; // 0x88
	float LightmapUVDensity; // 0x98
	int32_t LightMapResolution; // 0x9c
	bool m_forceVelocityDrawing; // 0xa0
	int32_t LightMapCoordinateIndex; // 0xa4
	float DistanceFieldSelfShadowBias; // 0xa8
	UBodySetup* BodySetup; // 0xb0
	int32_t LODForCollision; // 0xb8
	char bGenerateMeshDistanceField : 1; // 0xbc
	char bStripComplexCollisionForConsole : 1; // 0xbc
	char bHasNavigationData : 1; // 0xbc
	char bSupportUniformlyDistributedSampling : 1; // 0xbc
	char bSupportPhysicalMaterialMasks : 1; // 0xbc
	char bIsBuiltAtRuntime : 1; // 0xbc
	char bAllowCPUAccess : 1; // 0xbc
	char bSupportGpuUniformlyDistributedSampling : 1; // 0xbd
	TArray<UStaticMeshSocket*> Sockets; // 0xe0
	FVector PositiveBoundsExtension; // 0x100
	FVector NegativeBoundsExtension; // 0x10c
	FBoxSphereBounds ExtendedBounds; // 0x118
	int32_t ElementToIgnoreForTexFactor; // 0x134
	TArray<UAssetUserData*> AssetUserData; // 0x138
	UObject* EditableMesh; // 0x148
	UNavCollisionBase* NavCollision; // 0x150
};

struct UYWidget_LobbyFactionDetail : UYWidget {
	FMulticastInlineDelegate OnFactionSelected; // 0x2c0
	FYFactionsDataTableRow m_factionData; // 0x2d0
	FYFactionProgress m_factionProgress; // 0x458
	int32_t m_pointsForNextLevel; // 0x470
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UBTTask_SetAIReactionContext_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	EYAIReactionContext AIReactionState; // 0xb0
};

struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x240
	char bEnabled : 1; // 0x248
};

struct UYWidget_ItemComponentCraftingPrice : UYWidget_ItemComponentBase {
	bool m_showCurrencies; // 0x300
	bool m_useBackendData; // 0x301
	TMap<FName, UYWidget_ItemContainer*> m_currenciesMap; // 0x308
	TMap<FString, UYWidget_ItemContainer*> m_materialsMap; // 0x358
};

struct UModalDialogOkCancel_WBP_C : UYWidget_ModalDialogOkCancel {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UWidgetAnimation* animateIn; // 0x340
	UWidgetAnimation* AnimateOut; // 0x348
	UBorder* Border_1; // 0x350
	UCommonBackground_WBP_C* CommonBackround_WBP; // 0x358
	UImage* Image_12; // 0x360
	USpacer* Spacer_1; // 0x368
	USpacer* Spacer_2; // 0x370
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UNavAreaMeta_SwitchByAgent : UNavAreaMeta {
	UNavArea* Agent0Area; // 0x48
	UNavArea* Agent1Area; // 0x50
	UNavArea* Agent2Area; // 0x58
	UNavArea* Agent3Area; // 0x60
	UNavArea* Agent4Area; // 0x68
	UNavArea* Agent5Area; // 0x70
	UNavArea* Agent6Area; // 0x78
	UNavArea* Agent7Area; // 0x80
	UNavArea* Agent8Area; // 0x88
	UNavArea* Agent9Area; // 0x90
	UNavArea* Agent10Area; // 0x98
	UNavArea* Agent11Area; // 0xa0
	UNavArea* Agent12Area; // 0xa8
	UNavArea* Agent13Area; // 0xb0
	UNavArea* Agent14Area; // 0xb8
	UNavArea* Agent15Area; // 0xc0
};

struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x1f8
};

struct UWBP_Common_Btn_C : UWBP_ButtonBase_Btn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UWidgetAnimation* ScreenIn_Anim; // 0x3a0
	UWidgetAnimation* Release_Anim; // 0x3a8
	UWidgetAnimation* Press_Anim; // 0x3b0
	UWidgetAnimation* HighlightSheen_Anim; // 0x3b8
	UWidgetAnimation* Selected_Anim; // 0x3c0
	UWidgetAnimation* Idle_Anim; // 0x3c8
	UWidgetAnimation* HighlightBracket_Anim; // 0x3d0
	UImage* Gfx_BtnBacker; // 0x3d8
	UImage* Gfx_Deco_TR; // 0x3e0
	UImage* Gfx_DecoGradient; // 0x3e8
	UImage* Gfx_Edge; // 0x3f0
	UImage* Gfx_Fill; // 0x3f8
	UImage* Gfx_FillDisabled; // 0x400
	UImage* Gfx_Stroke; // 0x408
	UImage* Icn_Lock; // 0x410
	UImage* Icn_Placeholder; // 0x418
	UOverlay* Layout_ButtonDisabled; // 0x420
	UTextBlock* Txt_Label; // 0x428
	UTextBlock* Txt_Label_Light; // 0x430
	UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x438
	UWBP_InputKey_C* WBP_InputKey; // 0x440
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x448
	FLinearColor ButtonColorPrimary; // 0x450
	FLinearColor ButtonColorSecondary; // 0x460
	FText BtnLabel; // 0x470
	bool UseKeyBinding; // 0x488
	bool UseIcon; // 0x489
	bool IsDisabled; // 0x48a
	bool UseLightText; // 0x48b
};

struct UPlayerBotAimAtTargetTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FName combatTarget; // 0xb0
	FVector2D maxAngleError; // 0xb8
	FVector2D maxAngleLongRange; // 0xc0
	FVector2D maxAngleShortRange; // 0xc8
	FName InteractTarget; // 0xd0
	UObject* targetActor; // 0xd8
	FName TimeStampLastTP; // 0xe0
	UBlackboardComponent* Blackboard; // 0xe8
	FName IsCombatTargetClose; // 0xf0
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct UYPlayerEOSStatsDataComponent : UActorComponent {
	FDataTableRowHandle m_eosStatNumberOfMatchesEscapedRowHandle; // 0xb0
	FDataTableRowHandle m_eosStatNumberOfMatchesDiedRowHandle; // 0xc0
	FDataTableRowHandle m_eosStatNumberOfMatchesWonRowHandle; // 0xd0
	FDataTableRowHandle m_eosStatNumberOfMatchesPlayedWithContract; // 0xe0
	FDataTableRowHandle m_eosTotalPlacementRowHandle; // 0xf0
	FDataTableRowHandle m_eosActivityTotalVP; // 0x100
	FDataTableRowHandle m_eosActivityHighestVP; // 0x110
	FDataTableRowHandle m_eosStatNumberOfDeaths; // 0x120
	FDataTableRowHandle m_eosStatNumberOfKills; // 0x130
	FDataTableRowHandle m_eosStatHighestNumberOfKills; // 0x140
	FDataTableRowHandle m_eosStatNumberOfVP; // 0x150
	FDataTableRowHandle m_eosStatHighestNumberOfVP; // 0x160
	FDataTableRowHandle m_eosDailyChallengesCompleted; // 0x170
	FDataTableRowHandle m_eosWeeklyChallengesCompleted; // 0x180
	FDataTableRowHandle m_eosSeasonalChallengesCompleted; // 0x190
};

struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	FString SourceMeshName; // 0x28
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28
};

struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UInAppPurchaseQueryCallbackProxy : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct URiverGenerator : UWaterBodyGenerator {
	TArray<USplineMeshComponent*> SplineMeshComponents; // 0x28
};

struct UPhononGeometryComponent : USceneComponent {
	bool ExportAllChildren; // 0x1f8
	uint32_t NumVertices; // 0x1fc
	uint32_t NumTriangles; // 0x200
};

struct UYCustomizationCameraComponent : UActorComponent {
	TArray<FYSceneCameraData> m_cameraData; // 0xb0
	FYSceneCameraDataRuntimeData m_runtimeData; // 0xc0
	FMulticastInlineDelegate OnRuntimeCustomizationCameraStateChangedDelegate; // 0xe0
};

struct UYDefaultInventoryDataAsset : UDataAsset {
	bool m_bOverrideBackendInventoryInPIE; // 0x30
	bool m_bOverrideStationBackendInventoryInPIE; // 0x31
	int32_t m_defaultStashSize; // 0x34
	int32_t m_defaultBagSize; // 0x38
	int32_t m_defaultSafeSize; // 0x3c
	int32_t m_defaultPlayerQuarterLevel; // 0x40
	FDataTableRowHandle m_defaultWeaponOne; // 0x48
	TArray<FDataTableRowHandle> m_defaultWeaponOneMods; // 0x58
	FDataTableRowHandle m_defaultWeaponTwo; // 0x68
	TArray<FDataTableRowHandle> m_defaultWeaponTwoMods; // 0x78
	FDataTableRowHandle m_defaultShield; // 0x88
	FDataTableRowHandle m_defaultHelmet; // 0x98
	FDataTableRowHandle m_defaultBag; // 0xa8
	bool m_addBagItems; // 0xb8
	TArray<FDataTableRowHandle> m_bagItems; // 0xc0
};

struct UConstructionSystemBuildTool : UConstructionSystemTool {
	float TraceDistance; // 0x30
	float CursorRotationStepAngle; // 0x34
	UConstructionSystemCursor* Cursor; // 0x38
	UPrefabricatorAssetInterface* ActivePrefabAsset; // 0x40
};

struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x40
};

struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x240
};

struct UYControllerPlayerMapMarkerComponent : UActorComponent {
	FMulticastInlineDelegate OnMarkerDataUpdated; // 0xb0
	TArray<UYMapMarkerData*> m_mapMarkerData; // 0xc0
	TArray<UYMapMarkerData*> m_clientMarkersData; // 0xd0
};

struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x240
	AActor* ConstraintActor1; // 0x248
	AActor* ConstraintActor2; // 0x250
	char bDisableCollision : 1; // 0x258
};

struct UYReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode {
	AActor* LastPawn; // 0x278
	TArray<FAlwaysRelevantActorInfo> PastRelevantActors; // 0x280
};

struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	TArray<FLinearColor> ColorData; // 0x50
};

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28
};

struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x2a0
	float BaseLookUpRate; // 0x2a4
	UPawnMovementComponent* MovementComponent; // 0x2a8
	USphereComponent* CollisionComponent; // 0x2b0
	UStaticMeshComponent* MeshComponent; // 0x2b8
	char bAddDefaultMovementBindings : 1; // 0x2c0
};

struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	char bNotForDedicatedServer : 1; // 0x7c
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
};

struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28
};

struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Specular; // 0x54
	FExpressionInput Roughness; // 0x68
	FExpressionInput Normal; // 0x7c
	FExpressionInput WorldHeight; // 0x90
	FExpressionInput Opacity; // 0xa4
	FExpressionInput Mask; // 0xb8
};

struct UReplicationGraphNode_GridCell : UReplicationGraphNode_ActorList {
	UReplicationGraphNode* DynamicNode; // 0x140
	UReplicationGraphNode_DormancyNode* DormancyNode; // 0x148
};

struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70
};

struct UYFootstepComponent : UActorComponent {
	UYPlayerCharacterStateComponent* m_optionalPlayerCharacterStateComponent; // 0xb0
	float m_traceStartOffsetZ; // 0xb8
	float m_traceStartOffsetZCrouching; // 0xbc
	float m_traceDistance; // 0xc0
	float m_traceDistanceLanded; // 0xc4
	float m_traceDistanceSlide; // 0xc8
	float m_speedMaxAudioParameter; // 0xcc
	float m_fallingDistanceMaxAudioParameter; // 0xd0
	bool m_isTracingAsync; // 0xd4
	bool m_isTracingComplex; // 0xd5
	bool m_playFootstepVFXFromAnimNotifier; // 0xd7
	bool m_playSimplifiedFootsteps; // 0xd8
	float m_traceCooldownPhysMaterial; // 0xdc
	FDataTableRowHandle m_footstepRowWalk; // 0xe0
	FDataTableRowHandle m_footstepRowCrouch; // 0xf0
	FDataTableRowHandle m_footstepRowSprint; // 0x100
	FDataTableRowHandle m_footstepRowSprintDash; // 0x110
	FDataTableRowHandle m_footstepRowSoftLanding; // 0x120
	FDataTableRowHandle m_footstepRowMediumLanding; // 0x130
	FDataTableRowHandle m_footstepRowHardLanding; // 0x140
	FDataTableRowHandle m_footstepRowSlideInto; // 0x150
	FDataTableRowHandle m_footstepRowSlideLoop; // 0x160
	FDataTableRowHandle m_footstepRowSlideOut; // 0x170
	UMatineeCameraShake* m_cameraShakePerFootstepCrouch; // 0x180
	UMatineeCameraShake* m_cameraShakePerFootstepWalk; // 0x188
	UMatineeCameraShake* m_cameraShakePerFootstepSprint; // 0x190
	UMatineeCameraShake* m_cameraShakePerFootstepSprintDash; // 0x198
	TMap<EYFeet, FName> m_socketOrBoneNamePerFeetType; // 0x1a0
	FMulticastInlineDelegate BP_OnPlayFootstep; // 0x1f0
	UPhysicalMaterial* m_physMaterialBeneathActor; // 0x200
};

struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6c0
};

struct UYWidget_ItemComponentBaseMods : UYWidget_ItemComponentBase {
	TArray<UYWidget_ModEntry*> m_itemModWidgets; // 0x300
};

struct UARImageComponent : UARComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x78
};

struct UChaosDestructionListener : USceneComponent {
	char bIsCollisionEventListeningEnabled : 1; // 0x1f8
	char bIsBreakingEventListeningEnabled : 1; // 0x1f8
	char bIsTrailingEventListeningEnabled : 1; // 0x1f8
	FChaosCollisionEventRequestSettings CollisionEventRequestSettings; // 0x1fc
	FChaosBreakingEventRequestSettings BreakingEventRequestSettings; // 0x214
	FChaosTrailingEventRequestSettings TrailingEventRequestSettings; // 0x22c
	TSet<AChaosSolverActor*> ChaosSolverActors; // 0x248
	TSet<AGeometryCollectionActor*> GeometryCollectionActors; // 0x298
	FMulticastInlineDelegate OnCollisionEvents; // 0x2e8
	FMulticastInlineDelegate OnBreakingEvents; // 0x2f8
	FMulticastInlineDelegate OnTrailingEvents; // 0x308
};

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30
};

struct UBasicReplicationGraph : UReplicationGraph {
	UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x498
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4a0
	TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x4a8
	TArray<AActor*> ActorsWithoutNetConnection; // 0x4b8
};

struct UPhysicsSettings : UPhysicsSettingsCore {
	FRigidBodyErrorCorrection PhysicErrorCorrection; // 0xe0
	ESettingsLockedAxis LockedAxis; // 0x114
	ESettingsDOF DefaultDegreesOfFreedom; // 0x115
	bool bSuppressFaceRemapTable; // 0x116
	bool bSupportUVFromHitResults; // 0x117
	bool bDisableActiveActors; // 0x118
	bool bDisableKinematicStaticPairs; // 0x119
	bool bDisableKinematicKinematicPairs; // 0x11a
	bool bDisableCCD; // 0x11b
	bool bEnableEnhancedDeterminism; // 0x11c
	float AnimPhysicsMinDeltaTime; // 0x120
	bool bSimulateAnimPhysicsAfterReset; // 0x124
	float MaxPhysicsDeltaTime; // 0x128
	bool bSubstepping; // 0x12c
	bool bSubsteppingAsync; // 0x12d
	float MaxSubstepDeltaTime; // 0x130
	int32_t MaxSubsteps; // 0x134
	float SyncSceneSmoothingFactor; // 0x138
	float InitialAverageFrameRate; // 0x13c
	int32_t PhysXTreeRebuildRate; // 0x140
	TArray<FPhysicalSurfaceName> PhysicalSurfaces; // 0x148
	FBroadphaseSettings DefaultBroadphaseSettings; // 0x158
	float MinDeltaVelocityForHitEvents; // 0x198
	FChaosPhysicsSettings ChaosSettings; // 0x19c
};

struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x5b8
};

struct UStreamingSettings : UDeveloperSettings {
	char AsyncLoadingThreadEnabled : 1; // 0x38
	char WarnIfTimeLimitExceeded : 1; // 0x38
	float TimeLimitExceededMultiplier; // 0x3c
	float TimeLimitExceededMinTime; // 0x40
	int32_t MinBulkDataSizeForAsyncLoading; // 0x44
	char UseBackgroundLevelStreaming : 1; // 0x48
	char AsyncLoadingUseFullTimeLimit : 1; // 0x48
	float AsyncLoadingTimeLimit; // 0x4c
	float PriorityAsyncLoadingExtraTime; // 0x50
	float LevelStreamingActorsUpdateTimeLimit; // 0x54
	float PriorityLevelStreamingActorsUpdateExtraTime; // 0x58
	int32_t LevelStreamingComponentsRegistrationGranularity; // 0x5c
	float LevelStreamingUnregisterComponentsTimeLimit; // 0x60
	int32_t LevelStreamingComponentsUnregistrationGranularity; // 0x64
	char FlushStreamingOnExit : 1; // 0x68
	char EventDrivenLoaderEnabled : 1; // 0x68
};

struct AYGameState_Base : AGameStateBase {
	FString m_battleServerId; // 0x290
	bool m_battleServerBeginnerFlag; // 0x2a0
	FName m_gameModeName; // 0x2a4
	bool m_useBackendGearset; // 0x2ac
	bool m_allowsDroppingMoney; // 0x2ad
	TArray<FDataTableRowHandle> m_blockedVoicelineCategories; // 0x2b0
	AYPlayersMapDataManager* m_playersMapDataManager; // 0x2c0
	bool m_haveMinimapManager; // 0x2c8
	bool m_travelPostAuthorization; // 0x2c9
	float m_introDuration; // 0x2cc
	FDataTableRowHandle m_gameModeTuningHandle; // 0x2d0
	FDataTableRowHandle m_performanceHandleOverride; // 0x2e0
	UYSceneManager* m_sceneManager; // 0x2f8
	UYPlayerEOSStatsDataComponent* m_playerEosStatsDataComponent; // 0x300
	UYPlayersStatsComponent* m_playersStatsComponent; // 0x308
	UYGameStateCustomizationComponent* m_customizationStateComponent; // 0x310
	AYPerformanceResourceManager* m_resourceManager; // 0x318
	UYInventoryComponentManager* m_inventoryComponentsManager; // 0x320
};

struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UNiagaraDataInterfaceStaticMesh : UNiagaraDataInterface {
	ENDIStaticMesh_SourceMode SourceMode; // 0x38
	UStaticMesh* DefaultMesh; // 0x40
	AActor* Source; // 0x48
	UStaticMeshComponent* SourceComponent; // 0x50
	FNDIStaticMeshSectionFilter SectionFilter; // 0x58
	bool bUsePhysicsBodyVelocity; // 0x68
	TArray<FName> FilteredSockets; // 0x70
};

struct UYDestructibleMeshComponent : UDestructibleComponent {
	FMulticastInlineDelegate OnChunkDestroyed; // 0x768
};

struct UWBP_LoadingOverlay_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UCanvasPanel* LoadingOverlay; // 0x268
	UTextBlock* Txt_Message; // 0x270
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x278
	UWBP_LoadingSpinner_C* WBP_LoadingSpinner; // 0x280
	bool shouldShow; // 0x288
	bool ShowText; // 0x289
	FText Description; // 0x290
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct USoundNodeRandom : USoundNode {
	TArray<float> Weights; // 0x48
	TArray<bool> HasBeenUsed; // 0x58
	int32_t NumRandomUsed; // 0x68
	int32_t PreselectAtLevelLoad; // 0x6c
	char bShouldExcludeFromBranchCulling : 1; // 0x70
	char bSoundCueExcludedFromBranchCulling : 1; // 0x70
	char bRandomizeWithoutReplacement : 1; // 0x70
};

struct UAnimationSharingStateProcessor : UObject {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	FName VoiceSubsystemNameOverride; // 0x28
};

struct UYGameSessionManager : UObject {
	FMulticastInlineDelegate OnPlayedMultiplayerStateChanged; // 0x28
};

struct UYMenuScreenHomeSubScreen : UYScreenBase {
	UYScreenBase* m_entryScreenBP; // 0xb0
};

struct UYPlayerControllerHelperComponent : UActorComponent {
	TMap<EYActivityType, UYActorUIComponent*> m_uiComponents; // 0xb0
};

struct UPlayFabDataAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xf8
	UPlayFabJsonObject* RequestJsonObj; // 0x100
	UPlayFabJsonObject* ResponseJsonObj; // 0x108
};

struct UARSessionConfig : UDataAsset {
	bool bGenerateMeshDataFromTrackedGeometry; // 0x30
	bool bGenerateCollisionForMeshData; // 0x31
	bool bGenerateNavMeshForMeshData; // 0x32
	bool bUseMeshDataForOcclusion; // 0x33
	bool bRenderMeshDataInWireframe; // 0x34
	bool bTrackSceneObjects; // 0x35
	bool bUsePersonSegmentationForOcclusion; // 0x36
	bool bUseSceneDepthForOcclusion; // 0x37
	bool bUseAutomaticImageScaleEstimation; // 0x38
	bool bUseStandardOnboardingUX; // 0x39
	EARWorldAlignment WorldAlignment; // 0x3a
	EARSessionType SessionType; // 0x3b
	EARPlaneDetectionMode PlaneDetectionMode; // 0x3c
	bool bHorizontalPlaneDetection; // 0x3d
	bool bVerticalPlaneDetection; // 0x3e
	bool bEnableAutoFocus; // 0x3f
	EARLightEstimationMode LightEstimationMode; // 0x40
	EARFrameSyncMode FrameSyncMode; // 0x41
	bool bEnableAutomaticCameraOverlay; // 0x42
	bool bEnableAutomaticCameraTracking; // 0x43
	bool bResetCameraTracking; // 0x44
	bool bResetTrackedObjects; // 0x45
	TArray<UARCandidateImage*> CandidateImages; // 0x48
	int32_t MaxNumSimultaneousImagesTracked; // 0x58
	EAREnvironmentCaptureProbeType EnvironmentCaptureProbeType; // 0x5c
	TArray<char> WorldMapData; // 0x60
	TArray<UARCandidateObject*> CandidateObjects; // 0x70
	FARVideoFormat DesiredVideoFormat; // 0x80
	bool bUseOptimalVideoFormat; // 0x8c
	EARFaceTrackingDirection FaceTrackingDirection; // 0x8d
	EARFaceTrackingUpdate FaceTrackingUpdate; // 0x8e
	int32_t MaxNumberOfTrackedFaces; // 0x90
	TArray<char> SerializedARCandidateImageDatabase; // 0x98
	EARSessionTrackingFeature EnabledSessionTrackingFeature; // 0xa8
	EARSceneReconstruction SceneReconstructionMethod; // 0xa9
	UARPlaneComponent* PlaneComponentClass; // 0xb0
	UARPointComponent* PointComponentClass; // 0xb8
	UARFaceComponent* FaceComponentClass; // 0xc0
	UARImageComponent* ImageComponentClass; // 0xc8
	UARQRCodeComponent* QRCodeComponentClass; // 0xd0
	UARPoseComponent* PoseComponentClass; // 0xd8
	UAREnvironmentProbeComponent* EnvironmentProbeComponentClass; // 0xe0
	UARObjectComponent* ObjectComponentClass; // 0xe8
	UARMeshComponent* MeshComponentClass; // 0xf0
	UARGeoAnchorComponent* GeoAnchorComponentClass; // 0xf8
	UMaterialInterface* DefaultMeshMaterial; // 0x100
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x108
};

struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct UTextLayoutWidget : UWidget {
	FShapedTextOptions ShapedTextOptions; // 0x108
	ETextJustify Justification; // 0x10b
	ETextWrappingPolicy WrappingPolicy; // 0x10c
	char AutoWrapText : 1; // 0x10d
	float WrapTextAt; // 0x110
	FMargin Margin; // 0x114
	float LineHeightPercentage; // 0x124
};

struct UParticleModuleOrbit : UParticleModuleOrbitBase {
	EOrbitChainMode ChainMode; // 0x38
	FRawDistributionVector OffsetAmount; // 0x40
	FOrbitOptions OffsetOptions; // 0x88
	FRawDistributionVector RotationAmount; // 0x90
	FOrbitOptions RotationOptions; // 0xd8
	FRawDistributionVector RotationRateAmount; // 0xe0
	FOrbitOptions RotationRateOptions; // 0x128
};

struct UYWidget_QuestInfo : UYWidget {
	UTextBlock* m_questName; // 0x2c0
	UTextBlock* m_questTaskText; // 0x2c8
	UTextBlock* m_questCurrentProgress; // 0x2d0
	UTextBlock* m_questMaxProgress; // 0x2d8
};

struct UGizmoBoxComponent : UGizmoBaseComponent {
	FVector Origin; // 0x460
	FQuat Rotation; // 0x470
	FVector Dimensions; // 0x480
	float LineThickness; // 0x48c
	bool bRemoveHiddenLines; // 0x490
	bool bEnableAxisFlip; // 0x491
};

struct UPlayerBotStopPerformanceCaptureTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FString playerRotation; // 0xb0
	FString PlayerPosition; // 0xc0
	FString playerGamemode; // 0xd0
	TArray<FString> questsArray; // 0xe0
	FString playerQuests; // 0xf0
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct UPartyBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	int32_t NumTeams; // 0x38
	int32_t NumPlayersPerTeam; // 0x3c
	FName TeamAssignmentMethod; // 0x40
	int32_t ReservedHostTeamNum; // 0x48
	int32_t ForceTeamNum; // 0x4c
	bool bRestrictCrossConsole; // 0x50
	bool bEnableRemovalRequests; // 0x51
	TArray<FPartyReservation> Reservations; // 0x58
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct AEmitter : AActor {
	UParticleSystemComponent* ParticleSystemComponent; // 0x240
	char bDestroyOnSystemFinish : 1; // 0x248
	char bPostUpdateTickGroup : 1; // 0x248
	char bCurrentlyActive : 1; // 0x248
	FMulticastInlineDelegate OnParticleSpawn; // 0x250
	FMulticastInlineDelegate OnParticleBurst; // 0x260
	FMulticastInlineDelegate OnParticleDeath; // 0x270
	FMulticastInlineDelegate OnParticleCollide; // 0x280
};

struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct UEngine : UObject {
	UFont* TinyFont; // 0x30
	FSoftObjectPath TinyFontName; // 0x38
	UFont* SmallFont; // 0x50
	FSoftObjectPath SmallFontName; // 0x58
	UFont* MediumFont; // 0x70
	FSoftObjectPath MediumFontName; // 0x78
	UFont* LargeFont; // 0x90
	FSoftObjectPath LargeFontName; // 0x98
	UFont* SubtitleFont; // 0xb0
	FSoftObjectPath SubtitleFontName; // 0xb8
	TArray<UFont*> AdditionalFonts; // 0xd0
	TArray<FString> AdditionalFontNames; // 0xe0
	UConsole* ConsoleClass; // 0xf0
	FSoftClassPath ConsoleClassName; // 0xf8
	UGameViewportClient* GameViewportClientClass; // 0x110
	FSoftClassPath GameViewportClientClassName; // 0x118
	ULocalPlayer* LocalPlayerClass; // 0x130
	FSoftClassPath LocalPlayerClassName; // 0x138
	AWorldSettings* WorldSettingsClass; // 0x150
	FSoftClassPath WorldSettingsClassName; // 0x158
	FSoftClassPath NavigationSystemClassName; // 0x170
	UNavigationSystemBase* NavigationSystemClass; // 0x188
	FSoftClassPath NavigationSystemConfigClassName; // 0x190
	UNavigationSystemConfig* NavigationSystemConfigClass; // 0x1a8
	FSoftClassPath AvoidanceManagerClassName; // 0x1b0
	UAvoidanceManager* AvoidanceManagerClass; // 0x1c8
	FSoftClassPath AIControllerClassName; // 0x1d0
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x1e8
	FSoftClassPath PhysicsCollisionHandlerClassName; // 0x1f0
	FSoftClassPath GameUserSettingsClassName; // 0x208
	UGameUserSettings* GameUserSettingsClass; // 0x220
	UGameUserSettings* GameUserSettings; // 0x228
	ALevelScriptActor* LevelScriptActorClass; // 0x230
	FSoftClassPath LevelScriptActorClassName; // 0x238
	FSoftClassPath DefaultBlueprintBaseClassName; // 0x250
	FSoftClassPath GameSingletonClassName; // 0x268
	UObject* GameSingleton; // 0x280
	FSoftClassPath AssetManagerClassName; // 0x288
	UAssetManager* AssetManager; // 0x2a0
	UTexture2D* DefaultTexture; // 0x2a8
	FSoftObjectPath DefaultTextureName; // 0x2b0
	UTexture* DefaultDiffuseTexture; // 0x2c8
	FSoftObjectPath DefaultDiffuseTextureName; // 0x2d0
	UTexture2D* DefaultBSPVertexTexture; // 0x2e8
	FSoftObjectPath DefaultBSPVertexTextureName; // 0x2f0
	UTexture2D* HighFrequencyNoiseTexture; // 0x308
	FSoftObjectPath HighFrequencyNoiseTextureName; // 0x310
	UTexture2D* DefaultBokehTexture; // 0x328
	FSoftObjectPath DefaultBokehTextureName; // 0x330
	UTexture2D* DefaultBloomKernelTexture; // 0x348
	FSoftObjectPath DefaultBloomKernelTextureName; // 0x350
	UMaterial* WireframeMaterial; // 0x368
	FString WireframeMaterialName; // 0x370
	UMaterial* DebugMeshMaterial; // 0x380
	FSoftObjectPath DebugMeshMaterialName; // 0x388
	UMaterial* EmissiveMeshMaterial; // 0x3a0
	FSoftObjectPath EmissiveMeshMaterialName; // 0x3a8
	UMaterial* LevelColorationLitMaterial; // 0x3c0
	FString LevelColorationLitMaterialName; // 0x3c8
	UMaterial* LevelColorationUnlitMaterial; // 0x3d8
	FString LevelColorationUnlitMaterialName; // 0x3e0
	UMaterial* LightingTexelDensityMaterial; // 0x3f0
	FString LightingTexelDensityName; // 0x3f8
	UMaterial* ShadedLevelColorationLitMaterial; // 0x408
	FString ShadedLevelColorationLitMaterialName; // 0x410
	UMaterial* ShadedLevelColorationUnlitMaterial; // 0x420
	FString ShadedLevelColorationUnlitMaterialName; // 0x428
	UMaterial* RemoveSurfaceMaterial; // 0x438
	FSoftObjectPath RemoveSurfaceMaterialName; // 0x440
	UMaterial* VertexColorMaterial; // 0x458
	FString VertexColorMaterialName; // 0x460
	UMaterial* VertexColorViewModeMaterial_ColorOnly; // 0x470
	FString VertexColorViewModeMaterialName_ColorOnly; // 0x478
	UMaterial* VertexColorViewModeMaterial_AlphaAsColor; // 0x488
	FString VertexColorViewModeMaterialName_AlphaAsColor; // 0x490
	UMaterial* VertexColorViewModeMaterial_RedOnly; // 0x4a0
	FString VertexColorViewModeMaterialName_RedOnly; // 0x4a8
	UMaterial* VertexColorViewModeMaterial_GreenOnly; // 0x4b8
	FString VertexColorViewModeMaterialName_GreenOnly; // 0x4c0
	UMaterial* VertexColorViewModeMaterial_BlueOnly; // 0x4d0
	FString VertexColorViewModeMaterialName_BlueOnly; // 0x4d8
	FSoftObjectPath DebugEditorMaterialName; // 0x4e8
	UMaterial* ConstraintLimitMaterial; // 0x500
	UMaterialInstanceDynamic* ConstraintLimitMaterialX; // 0x508
	UMaterialInstanceDynamic* ConstraintLimitMaterialXAxis; // 0x510
	UMaterialInstanceDynamic* ConstraintLimitMaterialY; // 0x518
	UMaterialInstanceDynamic* ConstraintLimitMaterialYAxis; // 0x520
	UMaterialInstanceDynamic* ConstraintLimitMaterialZ; // 0x528
	UMaterialInstanceDynamic* ConstraintLimitMaterialZAxis; // 0x530
	UMaterialInstanceDynamic* ConstraintLimitMaterialPrismatic; // 0x538
	UMaterial* InvalidLightmapSettingsMaterial; // 0x540
	FSoftObjectPath InvalidLightmapSettingsMaterialName; // 0x548
	UMaterial* PreviewShadowsIndicatorMaterial; // 0x560
	FSoftObjectPath PreviewShadowsIndicatorMaterialName; // 0x568
	UMaterial* ArrowMaterial; // 0x580
	UMaterialInstanceDynamic* ArrowMaterialYellow; // 0x588
	FSoftObjectPath ArrowMaterialName; // 0x590
	FLinearColor LightingOnlyBrightness; // 0x5a8
	TArray<FLinearColor> ShaderComplexityColors; // 0x5b8
	TArray<FLinearColor> QuadComplexityColors; // 0x5c8
	TArray<FLinearColor> LightComplexityColors; // 0x5d8
	TArray<FLinearColor> StationaryLightOverlapColors; // 0x5e8
	TArray<FLinearColor> LODColorationColors; // 0x5f8
	TArray<FLinearColor> HLODColorationColors; // 0x608
	TArray<FLinearColor> StreamingAccuracyColors; // 0x618
	float MaxPixelShaderAdditiveComplexityCount; // 0x628
	float MaxES3PixelShaderAdditiveComplexityCount; // 0x62c
	float MinLightMapDensity; // 0x630
	float IdealLightMapDensity; // 0x634
	float MaxLightMapDensity; // 0x638
	char bRenderLightMapDensityGrayscale : 1; // 0x63c
	float RenderLightMapDensityGrayscaleScale; // 0x640
	float RenderLightMapDensityColorScale; // 0x644
	FLinearColor LightMapDensityVertexMappedColor; // 0x648
	FLinearColor LightMapDensitySelectedColor; // 0x658
	TArray<FStatColorMapping> StatColorMappings; // 0x668
	UPhysicalMaterial* DefaultPhysMaterial; // 0x678
	FSoftObjectPath DefaultPhysMaterialName; // 0x680
	TArray<FGameNameRedirect> ActiveGameNameRedirects; // 0x698
	TArray<FClassRedirect> ActiveClassRedirects; // 0x6a8
	TArray<FPluginRedirect> ActivePluginRedirects; // 0x6b8
	TArray<FStructRedirect> ActiveStructRedirects; // 0x6c8
	UTexture2D* PreIntegratedSkinBRDFTexture; // 0x6d8
	FSoftObjectPath PreIntegratedSkinBRDFTextureName; // 0x6e0
	UTexture2D* BlueNoiseTexture; // 0x6f8
	FSoftObjectPath BlueNoiseTextureName; // 0x700
	UTexture2D* MiniFontTexture; // 0x718
	FSoftObjectPath MiniFontTextureName; // 0x720
	UTexture* WeightMapPlaceholderTexture; // 0x738
	FSoftObjectPath WeightMapPlaceholderTextureName; // 0x740
	UTexture2D* LightMapDensityTexture; // 0x758
	FSoftObjectPath LightMapDensityTextureName; // 0x760
	UGameViewportClient* GameViewport; // 0x780
	TArray<FString> DeferredCommands; // 0x788
	float NearClipPlane; // 0x798
	char bSubtitlesEnabled : 1; // 0x79c
	char bSubtitlesForcedOff : 1; // 0x79c
	int32_t MaximumLoopIterationCount; // 0x7a0
	char bCanBlueprintsTickByDefault : 1; // 0x7a4
	char bOptimizeAnimBlueprintMemberVariableAccess : 1; // 0x7a4
	char bAllowMultiThreadedAnimationUpdate : 1; // 0x7a4
	char bEnableEditorPSysRealtimeLOD : 1; // 0x7a4
	char bSmoothFrameRate : 1; // 0x7a4
	char bUseFixedFrameRate : 1; // 0x7a4
	float FixedFrameRate; // 0x7a8
	FFloatRange SmoothedFrameRateRange; // 0x7ac
	UEngineCustomTimeStep* CustomTimeStep; // 0x7c0
	FSoftClassPath CustomTimeStepClassName; // 0x7e8
	UTimecodeProvider* TimecodeProvider; // 0x800
	FSoftClassPath TimecodeProviderClassName; // 0x828
	bool bGenerateDefaultTimecode; // 0x840
	FFrameRate GenerateDefaultTimecodeFrameRate; // 0x844
	float GenerateDefaultTimecodeFrameDelay; // 0x84c
	char bCheckForMultiplePawnsSpawnedInAFrame : 1; // 0x850
	int32_t NumPawnsAllowedToBeSpawnedInAFrame; // 0x854
	char bShouldGenerateLowQualityLightmaps : 1; // 0x858
	FColor C_WorldBox; // 0x85c
	FColor C_BrushWire; // 0x860
	FColor C_AddWire; // 0x864
	FColor C_SubtractWire; // 0x868
	FColor C_SemiSolidWire; // 0x86c
	FColor C_NonSolidWire; // 0x870
	FColor C_WireBackground; // 0x874
	FColor C_ScaleBoxHi; // 0x878
	FColor C_VolumeCollision; // 0x87c
	FColor C_BSPCollision; // 0x880
	FColor C_OrthoBackground; // 0x884
	FColor C_Volume; // 0x888
	FColor C_BrushShape; // 0x88c
	float StreamingDistanceFactor; // 0x890
	FDirectoryPath GameScreenshotSaveDirectory; // 0x898
	ETransitionType TransitionType; // 0x8a8
	FString TransitionDescription; // 0x8b0
	FString TransitionGameMode; // 0x8c0
	char bAllowMatureLanguage : 1; // 0x8d0
	float CameraRotationThreshold; // 0x8d4
	float CameraTranslationThreshold; // 0x8d8
	float PrimitiveProbablyVisibleTime; // 0x8dc
	float MaxOcclusionPixelsFraction; // 0x8e0
	char bPauseOnLossOfFocus : 1; // 0x8e4
	int32_t MaxParticleResize; // 0x8e8
	int32_t MaxParticleResizeWarn; // 0x8ec
	TArray<FDropNoteInfo> PendingDroppedNotes; // 0x8f0
	float NetClientTicksPerSecond; // 0x900
	float DisplayGamma; // 0x904
	float MinDesiredFrameRate; // 0x908
	FLinearColor DefaultSelectedMaterialColor; // 0x90c
	FLinearColor SelectedMaterialColor; // 0x91c
	FLinearColor SelectionOutlineColor; // 0x92c
	FLinearColor SubduedSelectionOutlineColor; // 0x93c
	FLinearColor SelectedMaterialColorOverride; // 0x94c
	bool bIsOverridingSelectedColor; // 0x95c
	char bEnableOnScreenDebugMessages : 1; // 0x960
	char bEnableOnScreenDebugMessagesDisplay : 1; // 0x960
	char bSuppressMapWarnings : 1; // 0x960
	char bDisableAILogging : 1; // 0x960
	uint32_t bEnableVisualLogRecordingOnStart; // 0x964
	int32_t ScreenSaverInhibitorSemaphore; // 0x968
	char bLockReadOnlyLevels : 1; // 0x96c
	FString ParticleEventManagerClassPath; // 0x970
	float SelectionHighlightIntensity; // 0x980
	float BSPSelectionHighlightIntensity; // 0x984
	float SelectionHighlightIntensityBillboards; // 0x988
	TArray<FNetDriverDefinition> NetDriverDefinitions; // 0xbf8
	TArray<FString> ServerActors; // 0xc08
	TArray<FString> RuntimeServerActors; // 0xc18
	float NetErrorLogInterval; // 0xc28
	char bStartedLoadMapMovie : 1; // 0xc2c
	int32_t NextWorldContextHandle; // 0xc48
};

struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
};

struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x80
};

struct UYUserSettings : UGameUserSettings {
	FMulticastInlineDelegate OnGfxPresetApplied; // 0x140
	FMulticastInlineDelegate OnSettingsAppliedMulticastDelegate; // 0x170
	float m_mouseSensitivity; // 0x180
	float m_baseSensitivity; // 0x184
	float m_adsSensitivity; // 0x188
	float m_scopedSensitivity; // 0x18c
	bool m_usePerScopeSensitivity; // 0x190
	float m_onePointFiveTimesScopeSensitivity; // 0x194
	float m_twoTimesScopeSensitivity; // 0x198
	float m_fourTimesScopeSensitivity; // 0x19c
	float m_eightTimesScopeSensitivity; // 0x1a0
	float m_sixteenTimesScopeSensitivity; // 0x1a4
	float m_minSensitivityGamepad; // 0x1a8
	float m_maxSensitivityGamepad; // 0x1ac
	bool m_enableMouseSmoothing; // 0x1b0
	bool m_enableFovBasedSensitivtyScaling; // 0x1b1
	float m_masterVolume; // 0x1b4
	float m_musicVolume; // 0x1b8
	float m_VOVolume; // 0x1bc
	float m_HitMarkerVolume; // 0x1c0
	float m_sfxVolume; // 0x1c4
	float m_UISoundVolume; // 0x1c8
	FString m_audioDevice; // 0x1d0
	FString m_audioInputDevice; // 0x1e0
	float m_desiredFOV; // 0x1f0
	bool m_applyFOVToScreenYAxis; // 0x1f4
	bool m_allowMovementToChangeFOV; // 0x1f5
	int32_t m_keyboardSettingsVersion; // 0x1f8
	int32_t m_globalSettingsVersion; // 0x1fc
	int32_t m_mouseSensitivityVersion; // 0x200
	FString m_defaultGraphicsRHI; // 0x208
	bool m_haveAppliedAutoGraphicSettings; // 0x218
	bool m_useMotionBlur; // 0x219
	bool m_useImageSharpening; // 0x21a
	bool m_invertX; // 0x21b
	bool m_invertY; // 0x21c
	bool m_isRotatingMinimapEnabled; // 0x21d
	bool m_showSubtitles; // 0x21e
	bool m_isToggleInputModeEnabledForSprint; // 0x21f
	bool m_isToggleInputModeEnabledForCrouch; // 0x220
	bool m_isToggleInputModeEnabledForTargeting; // 0x221
	bool m_isToggleInputModeEnabledForLeaning; // 0x222
	bool m_isQuickBuyEnabled; // 0x223
	bool m_isHideHudShortcutEnabled; // 0x224
	bool m_showDamageNumbersForAI; // 0x225
	bool m_showDamageNumbersForPlayers; // 0x226
	bool m_showCreditsOnKill; // 0x227
	bool m_showKillIndicator; // 0x228
	bool m_showFpsCounter; // 0x229
	bool m_enableGpuCrashDebugging; // 0x22a
	bool m_enableMultiThreadedRendering; // 0x22b
	EYGfxQualityPreset m_gfxQuality; // 0x22c
	UDLSSMode m_dlssQualityMode; // 0x22d
	float m_resolutionQuality; // 0x230
	bool m_voiceChatMuteInput; // 0x234
	bool m_voiceChatMuteOutput; // 0x235
	float m_voiceChatInputVolume; // 0x238
	float m_voiceChatOutputVolume; // 0x23c
	float m_voiceChatMicSensitivity; // 0x240
	bool m_isChatEnabled; // 0x244
	bool m_isInGlobalChannelEN; // 0x245
	bool m_isInGlobalChannelGER; // 0x246
	bool m_isInGlobalChannelRU; // 0x247
	bool m_isInGlobalChannelFR; // 0x248
	bool m_isInGlobalChannelES; // 0x249
	bool m_isInGlobalChannelPTBR; // 0x24a
	bool m_isInGlobalChannelPL; // 0x24b
	bool m_isInGlobalChannelTR; // 0x24c
	bool m_isInGlobalChannelZH; // 0x24d
	bool m_isSocialNotificationsEnabled; // 0x24e
	bool m_initialChatChannelAssignment; // 0x24f
	bool m_voiceChatPushToTalk; // 0x250
	UYPlayerMutelist* m_playerMutelist; // 0x258
	int32_t m_colorVisionDeficiency; // 0x260
	float m_severity; // 0x264
	bool m_correctDeficiency; // 0x268
	bool m_showCorrectionWithDeficiency; // 0x269
	float m_gamma; // 0x26c
};

struct UUserInterfaceSettings : UDeveloperSettings {
	ERenderFocusRule RenderFocusRule; // 0x38
	TMap<EMouseCursor, FHardwareCursorReference> HardwareCursors; // 0x40
	TMap<EMouseCursor, FSoftClassPath> SoftwareCursors; // 0x90
	FSoftClassPath DefaultCursor; // 0xe0
	FSoftClassPath TextEditBeamCursor; // 0xf8
	FSoftClassPath CrosshairsCursor; // 0x110
	FSoftClassPath HandCursor; // 0x128
	FSoftClassPath GrabHandCursor; // 0x140
	FSoftClassPath GrabHandClosedCursor; // 0x158
	FSoftClassPath SlashedCircleCursor; // 0x170
	float ApplicationScale; // 0x188
	EUIScalingRule UIScaleRule; // 0x18c
	FSoftClassPath CustomScalingRuleClass; // 0x190
	FRuntimeFloatCurve UIScaleCurve; // 0x1a8
	bool bAllowHighDPIInGameMode; // 0x230
	FIntPoint DesignScreenSize; // 0x234
	bool bLoadWidgetsOnDedicatedServer; // 0x23c
	TArray<UObject*> CursorClasses; // 0x240
	UObject* CustomScalingRuleClassInstance; // 0x250
	UDPICustomScalingRule* CustomScalingRule; // 0x258
};

struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	AActor* Source; // 0x38
};

struct UWidgetInteractionComponent : USceneComponent {
	FMulticastInlineDelegate OnHoveredWidgetChanged; // 0x1f8
	int32_t VirtualUserIndex; // 0x218
	int32_t PointerIndex; // 0x21c
	ECollisionChannel TraceChannel; // 0x220
	float InteractionDistance; // 0x224
	EWidgetInteractionSource InteractionSource; // 0x228
	bool bEnableHitTesting; // 0x229
	bool bShowDebug; // 0x22a
	float DebugSphereLineThickness; // 0x22c
	float DebugLineThickness; // 0x230
	FLinearColor DebugColor; // 0x234
	FHitResult CustomHitResult; // 0x2c0
	FVector2D LocalHitLocation; // 0x34c
	FVector2D LastLocalHitLocation; // 0x354
	UWidgetComponent* HoveredWidgetComponent; // 0x360
	FHitResult LastHitResult; // 0x368
	bool bIsHoveredWidgetInteractable; // 0x3f4
	bool bIsHoveredWidgetFocusable; // 0x3f5
	bool bIsHoveredWidgetHitTestVisible; // 0x3f6
};

struct USkeletalMeshComponent : USkinnedMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x690
	UAnimInstance* AnimClass; // 0x698
	UAnimInstance* AnimScriptInstance; // 0x6a0
	UAnimInstance* PostProcessAnimInstance; // 0x6a8
	FSingleAnimationPlayData AnimationData; // 0x6b0
	FVector RootBoneTranslation; // 0x6d8
	FVector LineCheckBoundsScale; // 0x6e4
	TArray<UAnimInstance*> LinkedInstances; // 0x720
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x730
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x740
	float GlobalAnimRateScale; // 0x8a0
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x8a4
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x8a5
	EAnimationMode AnimationMode; // 0x8a7
	char bDisablePostProcessBlueprint : 1; // 0x8a9
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x8a9
	char bHasValidBodies : 1; // 0x8a9
	char bBlendPhysics : 1; // 0x8a9
	char bEnablePhysicsOnDedicatedServer : 1; // 0x8a9
	char bUpdateJointsFromAnimation : 1; // 0x8a9
	char bDisableClothSimulation : 1; // 0x8aa
	char bDisableRigidBodyAnimNode : 1; // 0x8b0
	char bAllowAnimCurveEvaluation : 1; // 0x8b0
	char bDisableAnimCurves : 1; // 0x8b0
	char bCollideWithEnvironment : 1; // 0x8b0
	char bCollideWithAttachedChildren : 1; // 0x8b1
	char bLocalSpaceSimulation : 1; // 0x8b1
	char bResetAfterTeleport : 1; // 0x8b1
	char bDeferKinematicBoneUpdate : 1; // 0x8b1
	char bNoSkeletonUpdate : 1; // 0x8b1
	char bPauseAnims : 1; // 0x8b1
	char bUseRefPoseOnInitAnim : 1; // 0x8b1
	char bEnablePerPolyCollision : 1; // 0x8b2
	char bForceRefpose : 1; // 0x8b2
	char bOnlyAllowAutonomousTickPose : 1; // 0x8b2
	char bIsAutonomousTickPose : 1; // 0x8b2
	char bOldForceRefPose : 1; // 0x8b2
	char bShowPrePhysBones : 1; // 0x8b2
	char bRequiredBonesUpToDate : 1; // 0x8b2
	char bAnimTreeInitialised : 1; // 0x8b2
	char bIncludeComponentLocationIntoBounds : 1; // 0x8b3
	char bEnableLineCheckWithBounds : 1; // 0x8b3
	char bUseBendingElements : 1; // 0x8b3
	char bUseTetrahedralConstraints : 1; // 0x8b3
	char bUseThinShellVolumeConstraints : 1; // 0x8b3
	char bUseSelfCollisions : 1; // 0x8b3
	char bUseContinuousCollisionDetection : 1; // 0x8b3
	char bPropagateCurvesToSlaves : 1; // 0x8b3
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x8b4
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x8b4
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x8b4
	uint16_t CachedAnimCurveUidVersion; // 0x8b6
	EClothMassMode MassMode; // 0x8b8
	float UniformMass; // 0x8bc
	float TotalMass; // 0x8c0
	float Density; // 0x8c4
	float MinPerParticleMass; // 0x8c8
	float ClothBlendWeight; // 0x8cc
	float EdgeStiffness; // 0x8d0
	float BendingStiffness; // 0x8d4
	float AreaStiffness; // 0x8d8
	float VolumeStiffness; // 0x8dc
	float StrainLimitingStiffness; // 0x8e0
	float ShapeTargetStiffness; // 0x8e4
	bool bWaitForParallelClothTask; // 0x8e8
	TArray<FName> DisallowedAnimCurves; // 0x8f0
	UBodySetup* BodySetup; // 0x900
	FMulticastInlineDelegate OnConstraintBroken; // 0x910
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x920
	float TeleportDistanceThreshold; // 0x9f8
	float TeleportRotationThreshold; // 0x9fc
	uint32_t LastPoseTickFrame; // 0xa08
	UClothingSimulationInteractor* ClothingInteractor; // 0xa60
	FMulticastInlineDelegate OnAnimInitialized; // 0xb30
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; // 0x60
};

struct USoundNodeEnveloper : USoundNode {
	float LoopStart; // 0x48
	float LoopEnd; // 0x4c
	float DurationAfterLoop; // 0x50
	int32_t LoopCount; // 0x54
	char bLoopIndefinitely : 1; // 0x58
	char bLoop : 1; // 0x58
	UDistributionFloatConstantCurve* VolumeInterpCurve; // 0x60
	UDistributionFloatConstantCurve* PitchInterpCurve; // 0x68
	FRuntimeFloatCurve VolumeCurve; // 0x70
	FRuntimeFloatCurve PitchCurve; // 0xf8
	float PitchMin; // 0x180
	float PitchMax; // 0x184
	float VolumeMin; // 0x188
	float VolumeMax; // 0x18c
};

struct UFieldSystemComponent : UPrimitiveComponent {
	UFieldSystem* FieldSystem; // 0x440
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x458
};

struct UYWidget_DismissivePopup : UYWidget {
	UCheckBox* m_dontShowAgainCheckbox; // 0x2d8
	int32_t m_BITimeWhenShown; // 0x2e0
	FDataTableRowHandle m_audioAnimateIn; // 0x2e8
	FDataTableRowHandle m_audioAnimateOut; // 0x2f8
};

struct ABP_ImpactMarkerHeavy01_BP_C : AYPlacementActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	float decalAnim_anim_opacity_E9D529874D32FD51EFB5B497FD1FC1D0; // 0x250
	ETimelineDirection decalAnim__Direction_E9D529874D32FD51EFB5B497FD1FC1D0; // 0x254
	UTimelineComponent* decalAnim; // 0x258
	UMaterialInstanceDynamic* decalMID; // 0x260
	float markerSize; // 0x268
	UParticleSystemComponent* particle; // 0x270
	UDecalComponent* Decal; // 0x278
};

struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x300
	FPartyReservation PendingReservation; // 0x310
	EClientRequestType RequestType; // 0x360
	bool bPendingReservationSent; // 0x361
	bool bCancelReservation; // 0x362
};

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UYWidget_LootNotificationsContainer : UYWidget {
	UVerticalBox* m_notificationsContainer; // 0x2c0
	UYWidget_LootNotification* m_lootNotificationClass; // 0x2c8
	TArray<EYPickupType> m_typesTriggeringNotification; // 0x2d0
	TArray<UYWidget_LootNotification*> m_lootNotificationWidgets; // 0x2e0
};

struct UYScreenManager : UObject {
	TMap<UYScreenBase*, UYScreenBase*> m_activeScreens; // 0x28
};

struct UWBP_Footer_C_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UImage* Gfx_LineworkEdge_Left; // 0x2d0
	UImage* Gfx_LineworkEdge_Right; // 0x2d8
};

struct UPlanarReflectionComponent : USceneCaptureComponent {
	UBoxComponent* PreviewBox; // 0x2b0
	float NormalDistortionStrength; // 0x2b8
	float PrefilterRoughness; // 0x2bc
	float PrefilterRoughnessDistance; // 0x2c0
	int32_t ScreenPercentage; // 0x2c4
	float ExtraFOV; // 0x2c8
	float DistanceFromPlaneFadeStart; // 0x2cc
	float DistanceFromPlaneFadeEnd; // 0x2d0
	float DistanceFromPlaneFadeoutStart; // 0x2d4
	float DistanceFromPlaneFadeoutEnd; // 0x2d8
	float AngleFromPlaneFadeStart; // 0x2dc
	float AngleFromPlaneFadeEnd; // 0x2e0
	bool bShowPreviewPlane; // 0x2e4
	bool bRenderSceneTwoSided; // 0x2e5
};

struct UYDamageRecapComponent : UActorComponent {
	bool m_showDamageRecap; // 0xb0
	APawn* m_ownerPawn; // 0xc8
	FYRawDamageEventContainer m_rawTakeDamageEvents; // 0xd0
	FYRawDamageEventContainer m_rawDealDamageEvents; // 0xe8
	TArray<FYCondensedDamageData> m_condensedDamageInfo; // 0x100
	TArray<FYDamageEvent> m_debugUncondensedDamageInfo; // 0x110
	FMulticastInlineDelegate BP_OnCondensedDamageInfoReceived; // 0x120
	FMulticastInlineDelegate BP_OnDebugUncondensedDamageInfoReceived; // 0x130
	FMulticastInlineDelegate BP_OnToggleDamageRecapVisibility; // 0x140
};

struct UDA_Escape : UDataAsset {
	float m_escapeTime; // 0x30
	int32_t m_escapeLocations; // 0x34
	USkeletalMesh* m_escapeShipSK; // 0x38
	UAnimationAsset* m_flyingAnim; // 0x40
	UAnimationAsset* m_hoverAnim; // 0x48
	UAnimationAsset* m_landedAnim; // 0x50
	UAnimationAsset* m_takingOffAnim; // 0x58
	float m_landingPauzeTime; // 0x60
	float m_landingTime; // 0x64
	float m_landedTime; // 0x68
	float m_departureAlarmTime; // 0x6c
	UStaticMesh* m_escapeConsoleSM; // 0x70
	float m_consoleCooldownTime; // 0x78
};

struct UGizmoAxisRotationParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Angle; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurRotationAxis; // 0xbc
	FVector CurRotationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct UYWidget_ShopContainer : UYWidget {
	UYWidget_ShopItemEntry* m_entryWBP; // 0x2c0
};

struct ULoudnessNRT : UAudioSynesthesiaNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
};

struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
};

struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct USoundfieldSubmix : USoundSubmixWithParentBase {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct UWBP_LanguageSelection_C : UYWidget_LanguageSelection {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
};

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UWeaponScopeComponent_BP_C : UYWeaponScopeComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UMaterialInstanceDynamic* ThermalScopeMat; // 0xb8
};

struct UDialogContainer_WBP_C : UYDialogContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	UWBP_Form_Menu_C* CustomerSupportForm; // 0x328
	UWBP_Generic_Modal_C* ExitGameConfirmationModal; // 0x330
	UWBP_Generic_Modal_C* ExitGameSurveyConfirmationModal; // 0x338
	UWBP_Generic_Modal_C* OkCancelConfirmationModal; // 0x340
	UWBP_LoadingOverlay_C* WBP_LoadingOverlay; // 0x348
	UWBP_StartupMessagesContainer_C* WBP_StartupMessagesContainer; // 0x350
};

struct UWBP_Credits_Headline_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Txt_Headline; // 0x268
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel_TextA; // 0x270
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel_TextA_2; // 0x278
	FText headline; // 0x280
};

struct UAudioCaptureComponent : USynthComponent {
	int32_t JitterLatencyFrames; // 0x6c0
};

struct UWBP_LegalAgreements_Menu_C : UYWidget_LegalAgreements {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	UWidgetAnimation* LegalIn_Anim; // 0x308
	UWidgetAnimation* LegalOut_Anim; // 0x310
	UImage* Gfx_BackgroundFill; // 0x318
	UWBP_LanguageSelection_C* languageSelection; // 0x320
	UOverlay* SelectionAction; // 0x328
	UWBP_Common_Btn_C* WBP_Common_Btn_Accept; // 0x330
	UWBP_Common_Btn_C* WBP_Common_Btn_Cancel; // 0x338
	UWBP_LoadingOverlay_C* WBP_LoadingOverlay; // 0x340
	UWBP_SingleRowScroll_Panel_C* WBP_SingleRowScroll_Panel; // 0x348
	UWBP_Toggle_Btn_C* WBP_Toggle_Btn; // 0x350
};

struct UPacketHandlerProfileConfig : UObject {
	TArray<FString> Components; // 0x28
};

struct UYWidget_SocialOverviewDEPRECATED : UYWidget {
	UButton* m_closeButton; // 0x2c0
	UTextBlock* m_playerName; // 0x2c8
	UYWidget_ChatUserMenu* m_localUserContextMenu; // 0x2d0
};

struct UUniformGridSlot : UPanelSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t row; // 0x3c
	int32_t Column; // 0x40
};

struct UYScannableComponent : UActorComponent {
	FMulticastInlineDelegate OnWasScanned; // 0xb0
	FDataTableRowHandle m_dataTableHandle; // 0xc0
	bool m_autoDeactivateOnDeath; // 0xd8
	bool m_isScannable; // 0xda
};

struct ANavigationData : AActor {
	UPrimitiveComponent* RenderingComp; // 0x248
	FNavDataConfig NavDataConfig; // 0x250
	char bEnableDrawing : 1; // 0x2c8
	char bForceRebuildOnLoad : 1; // 0x2c8
	char bAutoDestroyWhenNoNavigation : 1; // 0x2c8
	char bCanBeMainNavData : 1; // 0x2c8
	char bCanSpawnOnRebuild : 1; // 0x2c8
	char bRebuildAtRuntime : 1; // 0x2c8
	ERuntimeGenerationType RuntimeGeneration; // 0x2cc
	float ObservedPathsTickInterval; // 0x2d0
	uint32_t DataVersion; // 0x2d4
	TArray<FSupportedAreaData> SupportedAreas; // 0x3e0
};

struct UParticleModuleBeamSource : UParticleModuleBeamBase {
	Beam2SourceTargetMethod SourceMethod; // 0x30
	FName SourceName; // 0x34
	char bSourceAbsolute : 1; // 0x3c
	FRawDistributionVector Source; // 0x40
	char bLockSource : 1; // 0x88
	Beam2SourceTargetTangentMethod SourceTangentMethod; // 0x8c
	FRawDistributionVector SourceTangent; // 0x90
	char bLockSourceTangent : 1; // 0xd8
	FRawDistributionFloat SourceStrength; // 0xe0
	char bLockSourceStength : 1; // 0x110
};

struct ALODActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x240
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x248
	UHLODProxy* Proxy; // 0x298
	FName Key; // 0x2a0
	float LODDrawDistance; // 0x2a8
	int32_t LODLevel; // 0x2ac
	TArray<AActor*> SubActors; // 0x2b0
	char CachedNumHLODLevels; // 0x2c0
};

struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x328
};

struct UAudioSettings : UDeveloperSettings {
	FSoftObjectPath DefaultSoundClassName; // 0x38
	FSoftObjectPath DefaultMediaSoundClassName; // 0x50
	FSoftObjectPath DefaultSoundConcurrencyName; // 0x68
	FSoftObjectPath DefaultBaseSoundMix; // 0x80
	FSoftObjectPath VoiPSoundClass; // 0x98
	FSoftObjectPath MasterSubmix; // 0xb0
	FSoftObjectPath ReverbSubmix; // 0xc8
	FSoftObjectPath EQSubmix; // 0xe0
	EVoiceSampleRate VoiPSampleRate; // 0xf8
	float DefaultReverbSendLevel; // 0xfc
	int32_t MaximumConcurrentStreams; // 0x100
	float GlobalMinPitchScale; // 0x104
	float GlobalMaxPitchScale; // 0x108
	TArray<FAudioQualitySettings> QualityLevels; // 0x110
	char bAllowPlayWhenSilent : 1; // 0x120
	char bDisableMasterEQ : 1; // 0x120
	char bAllowCenterChannel3DPanning : 1; // 0x120
	uint32_t NumStoppingSources; // 0x124
	EPanningMethod PanningMethod; // 0x128
	EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x129
	FString DialogueFilenameFormat; // 0x130
};

struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108
};

struct UYPlayerBuffsComponent : UActorComponent {
	UCurveFloat* m_playerBuffIntensityCurve; // 0xb0
	TMap<EYBuffTypes, UCurveFloat*> m_buffCurves; // 0xb8
	TMap<EYBuffTypes, float> m_cachedBuffMultipliers; // 0x108
};

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0x60
};

struct UMovieSceneParticleSection : UMovieSceneSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
	UPawnAction* RecentActionCopy; // 0xb0
};

struct UYWidget_LootNotification : UYWidget {
	UTextBlock* m_itemNameTextBlock; // 0x2c0
	UTextBlock* m_amountTextBlock; // 0x2c8
	UBorder* m_rarityImageBorders; // 0x2d0
	UImage* m_itemImage; // 0x2d8
	float m_notificationDuration; // 0x2e0
	float m_itemImageSizeY; // 0x2e4
};

struct AYPlayerState : AYPlayerStateBase {
	FMulticastInlineDelegate OnPlayerMatchStateChangedDelegate; // 0x3a0
	FMulticastInlineDelegate OnPlayerCharacterSetDelegate; // 0x3b0
	AYPlayerCharacter* m_playerCharacter; // 0x3d0
	FMulticastInlineDelegate OnFactionSelected; // 0x3f0
	FMulticastInlineDelegate OnUniqueIdSetEvent; // 0x400
	FMulticastInlineDelegate OnFactionProgressUpdated; // 0x410
	FMulticastInlineDelegate OnBeforeFinishedMatch; // 0x420
	FMulticastInlineDelegate OnFinishedMatchResult; // 0x430
	FMulticastInlineDelegate OnAfterFinishedMatchResult; // 0x440
	int32_t m_matchPlayerID; // 0x450
	float m_lastImpactSurveillanceTimestamp; // 0x454
	bool m_hasTrophy; // 0x458
	bool m_hasRedTrophy; // 0x459
	bool m_hasGreenTrophy; // 0x45a
	bool m_isDummyPlayerState; // 0x45b
	bool m_rewardsReceived; // 0x45c
	bool m_leftMatch; // 0x45d
	bool m_leftMatchWithoutFinishing; // 0x45e
	TWeakObjectPtr<AYPlayerState> m_killer; // 0x460
	TArray<TWeakObjectPtr<AYPlayerState>> m_alliesAtDeath; // 0x468
	FYDealtDamageData m_deathData; // 0x478
	FMulticastInlineDelegate OnCosmeticStateChanged; // 0x578
	FYPlayerCosmeticReplicatedData m_replicatedCosmeticData; // 0x588
	float m_timeFinished; // 0x5e0
	UYPlayerBuffsComponent* m_playerBuffsComponent; // 0x5f8
	UYPlayerStatsDeathsComponent* m_playerStatsDeathsComponent; // 0x600
	UYPlayerStatsKillsComponent* m_playerStatsKillsComponent; // 0x608
	UYPlayerStatsChallengesComponent* m_playerStatsChallengesComponent; // 0x610
	EYPlayerMatchState m_playerMatchState; // 0x618
	EYPlayerMatchFinishedResult m_playerMatchFinishedResult; // 0x619
	UYPlayerRewardsComponent* m_playerRewardsComponent; // 0x620
	FName m_factionId; // 0x628
	FYActiveWeaponCharacterInitializationData m_equippedWeaponData; // 0x660
};

struct UYWidget_RankedLeaderboardBase : UYWidget {
	int32_t m_amountOfFriendsToShow; // 0x2c0
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UGerstnerWaterWaveGeneratorSimple : UGerstnerWaterWaveGeneratorBase {
	int32_t NumWaves; // 0x28
	int32_t Seed; // 0x2c
	float Randomness; // 0x30
	float MinWavelength; // 0x34
	float MaxWavelength; // 0x38
	float WavelengthFalloff; // 0x3c
	float MinAmplitude; // 0x40
	float MaxAmplitude; // 0x44
	float AmplitudeFalloff; // 0x48
	float WindAngleDeg; // 0x4c
	float DirectionAngularSpreadDeg; // 0x50
	float SmallWaveSteepness; // 0x54
	float LargeWaveSteepness; // 0x58
	float SteepnessFalloff; // 0x5c
};

struct UAISystemBase : UObject {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
	bool bInstantiateAISystemOnClientForNonShipping; // 0x51
};

struct UBTService_Bot_NoMovement_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	EYAIState aiState; // 0xa0
};

struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28
};

struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UWBP_Item_InsuranceTag_C : UYWidget {
	UWidgetAnimation* WidgetIn_Anim; // 0x2c0
	UImage* Gfx_SlantFlash; // 0x2c8
	UImage* Gfx_SlantPrimary; // 0x2d0
	UImage* Icn_Insurance; // 0x2d8
	UOverlay* InsuranceMarker; // 0x2e0
};

struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UTemplateSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct UMovieSceneSection : UMovieSceneSignedObject {
	FMovieSceneSectionEvalOptions EvalOptions; // 0x50
	FMovieSceneEasingSettings Easing; // 0x58
	FMovieSceneFrameRange SectionRange; // 0x90
	FFrameNumber PreRollFrames; // 0xa0
	FFrameNumber PostRollFrames; // 0xa4
	int32_t RowIndex; // 0xa8
	int32_t OverlapPriority; // 0xac
	char bIsActive : 1; // 0xb0
	char bIsLocked : 1; // 0xb0
	float StartTime; // 0xb4
	float EndTime; // 0xb8
	float PrerollTime; // 0xbc
	float PostrollTime; // 0xc0
	char bIsInfinite : 1; // 0xc4
	bool bSupportsInfiniteRange; // 0xc8
	FOptionalMovieSceneBlendType BlendType; // 0xc9
};

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
};

struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x240
	bool bStaticMeshReplicateMovement; // 0x248
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x249
};

struct UAbility_Action_Stim_BP_C : UYCharacterAbilityComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x180
	FDataTableRowHandle StimSpinupLoopAudioRowHandle; // 0x188
	UAudioComponent* StimLoopingAudioComponent; // 0x198
	float FadeOutAudioLoopSound; // 0x1a0
	FDataTableRowHandle StimFinishAudioRowHandle; // 0x1a8
};

struct UWBP_InputKeyNavigation_Btn_C : UWBP_ButtonBase_Btn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UWidgetAnimation* Release_Anim; // 0x3a0
	UWidgetAnimation* Press_Anim; // 0x3a8
	UWidgetAnimation* Selected_Anim; // 0x3b0
	UWidgetAnimation* HighlightBracket_Anim; // 0x3b8
	UImage* Gfx_HighlightBottom; // 0x3c0
	UImage* Gfx_HighlightTop; // 0x3c8
	UTextBlock* TxtLabel; // 0x3d0
	UWBP_InputKey_C* WBP_InputKeyCombo; // 0x3d8
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x3e0
	FStructure_InputKeyNav NavItemSetup; // 0x3e8
};

struct UYWidget_ItemTooltipEntryHeader : UYWidget_ItemTooltipEntryBase {
	UTextBlock* m_itemTypeTextBlock; // 0x2c0
	UTextBlock* m_itemNameTextBlock; // 0x2c8
	UTextBlock* m_itemSubTypeTextBlock; // 0x2d0
	UYWidget_ValueDisplay* m_itemPrice; // 0x2d8
	UTextBlock* m_itemAmount; // 0x2e0
};

struct UReplicationGraphNode : UObject {
	TArray<UReplicationGraphNode*> AllChildNodes; // 0x28
};

struct URetainerBox : UContentWidget {
	bool bRetainRender; // 0x120
	bool RenderOnInvalidation; // 0x121
	bool RenderOnPhase; // 0x122
	int32_t Phase; // 0x124
	int32_t PhaseCount; // 0x128
	UMaterialInterface* EffectMaterial; // 0x130
	FName TextureParameter; // 0x138
};

struct UYWidget_SeasonOffersOverview : UYWidget {
	UYWidget_OfferListContainer* m_seasonOfferListContainer; // 0x2e0
	UYWidget_Timer* m_seasonOffersTimer; // 0x2e8
	TArray<FDataTableRowHandle> m_dummySeasonOffers; // 0x2f0
};

struct UYProgressComponent : UActorComponent {
	FMulticastInlineDelegate OnProgressUpdated; // 0xb0
	FProgressUIData m_uiData; // 0xc0
	float m_totalTime; // 0xf8
	float m_timeLeft; // 0xfc
};

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct UPrefabricatorAsset : UPrefabricatorAssetInterface {
	TArray<FPrefabricatorActorData> ActorData; // 0x38
	EComponentMobility PrefabMobility; // 0x48
	FGuid LastUpdateID; // 0x4c
	UThumbnailInfo* ThumbnailInfo; // 0x60
	uint32_t Version; // 0x68
};

struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x458
	float LineThickness; // 0x464
};

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct UYCommWheelVOComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnCommWheelUse; // 0xb8
	FTimerHandle m_timerHandleReduceSpamCount; // 0xc8
	FText m_spamMessage; // 0xd0
	UDataTable* m_commWheelItemsDatatable; // 0xe8
};

struct UYMatchChatManagerComponent : UActorComponent {
	FString m_serverName; // 0xd0
	FString m_currentEnvironmentName; // 0xe0
};

struct UVirtualTextureBuilder : UObject {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct UWBP_VirtualCursor_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* WidgetIn_Anim; // 0x268
	UWidgetAnimation* Hover_Anim; // 0x270
	UWidgetAnimation* Idle_Anim; // 0x278
	UImage* Gfx_BackerDark; // 0x280
	UImage* Gfx_BackerLight; // 0x288
	UImage* Gfx_CenterDot; // 0x290
	UImage* Gfx_Flash; // 0x298
	UImage* Gfx_VirtualCursor_Main; // 0x2a0
	UImage* Gfx_VirtualCursor_Secondary; // 0x2a8
	EYVirtualCursorState State; // 0x2b0
	bool isSpawning; // 0x2b1
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0x80
};

struct UYWidget_EscapeMenu : UYWidget {
	TArray<FEscMenuButtonData> m_defaultOptions; // 0x2c0
	UYWidget_EscapeMenuItem* m_itemClass; // 0x2d0
	UVerticalBox* m_itemsVerticalBox; // 0x2d8
	FDataTableRowHandle m_audioAnimateIn; // 0x2e0
	FDataTableRowHandle m_audioAnimateOut; // 0x2f0
};

struct UCH_PlayerNPC_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x378
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3f8
	FAnimNode_Root AnimGraphNode_Root; // 0x478
	EYCustomizationBodyType bodyType; // 0x4a8
	EYCustomizationCategory PreviewBodyPart; // 0x4a9
	FName archetypeId; // 0x4ac
	bool IsPreviewedPlayerInEOM; // 0x4b4
	EYEquipedWeaponPoseType EquippedWeaponPose; // 0x4b5
	EYCameraIntentionType CameraState; // 0x4b6
	AnimArchetypeEnum Archetype; // 0x4b7
	UAnimSequence* EmoteSequence; // 0x4b8
	UAnimSequence* AnimationSequence; // 0x4c0
	NPC_States ActiveNPCState; // 0x4c8
};

struct UYPlayfabSettings : UDeveloperSettings {
	bool m_enabled; // 0x38
	FString m_titleId; // 0x40
	FString DeveloperSecretKey; // 0x50
	EYPlayfabLoginType m_playfabLoginType; // 0x60
	FString m_username; // 0x68
	FString m_password; // 0x78
	FString m_email; // 0x88
};

struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UNotificationNumber_WBP_C : UYWidget_NotificationNumber {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UCanvasPanel* notificationCanvasPanel; // 0x2d0
	UYTextBlock* notificationNumberText; // 0x2d8
	int32_t upperThresholdValue; // 0x2e0
};

struct UYWidget_OnboardingOverlay : UYWidget {
	UButton* m_closeButton; // 0x2c0
	UBackgroundBlur* m_backgroundBlur; // 0x2c8
	int32_t m_BITimeWhenShown; // 0x2d0
	UYDismissedOverlays* m_dismissedOverlays; // 0x2d8
};

struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	UNiagaraScript* Script; // 0x28
	FName SimulationStageName; // 0x30
	char bEnabled : 1; // 0x38
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x58
};

struct UYRichTextBlockHyperlinkDecorator : URichTextBlockDecorator {
	UDataTable* HyperlinkSet; // 0x28
};

struct UYServerResourceManagerComponent : UActorComponent {
	TArray<UObject*> m_hardRefrencedObjects; // 0xb0
};

struct AYStationLocationActor : AActor {
	FDataTableRowHandle m_npcRowHandle; // 0x240
	FDataTableRowHandle m_animationHandle; // 0x250
	UChildActorComponent* m_childActorComponent; // 0x260
	FYSceneSetupData m_setupData; // 0x268
	EYNPCType m_npcType; // 0x280
};

struct UARMeshComponent : UARComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
};

struct UGizmoComponentHitTarget : UObject {
	UPrimitiveComponent* Component; // 0x30
};

struct UBTService_Dodge_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector KeyDodgeMontage; // 0xa0
	UAnimInstance* AnimInstanceOwner; // 0xc8
	float DodgeValueCurrent; // 0xd0
	FBlackboardKeySelector KeyTimeLastDodge; // 0xd8
	AYAICharacter* AICharacterOwner; // 0x100
	float MaxCurrentPossibleDodgeDistance; // 0x108
	FBlackboardKeySelector KeyCombatTarget; // 0x110
	FBlackboardKeySelector KeyIsDodgeBlocked; // 0x138
	FBlackboardKeySelector KeyStabilityAnimationInfo; // 0x160
	bool MostRecentDodgeIsRight; // 0x188
	float DodgeEvalDistanceConsidereEqual; // 0x18c
};

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58
};

struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x248
	float BeaconConnectionTimeout; // 0x24c
	UNetDriver* NetDriver; // 0x250
};

struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	UObject* PropertyClass; // 0xb0
};

struct UYWidgetController_Login : UYWidgetController {
	UYAuthorization* m_authorization; // 0x30
};

struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38
};

struct UWBP_SettingSectionHeader_Item_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTextBlock* Txt_SettingLabel; // 0x268
	FText SettingSectionLabel; // 0x270
};

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UYWidget_ApperenceCategories : UYWidget {
	TArray<EYApperenceCategoriesTypes> m_supportedCategories; // 0x2d0
	UYWidget_ItemCategoryEntry* m_selectedItemCategory; // 0x2e0
};

struct UGizmoArrowComponent : UGizmoBaseComponent {
	FVector Direction; // 0x460
	float Gap; // 0x46c
	float Length; // 0x470
	float Thickness; // 0x474
};

struct UYVehicleMarkerData : UYMapMarkerData {
	AActor* m_owningActor; // 0x148
	EYVehicleStateType m_vehicleStateType; // 0x150
};

struct UARTrackedImage : UARTrackedGeometry {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
};

struct UYCharacterDeathComponent : UActorComponent {
	bool m_isExplodingOnDeath; // 0xb0
	FYDeathAnimMontageInfo m_deathInfo; // 0xc8
	float m_minRagdollDuration; // 0x200
	float m_maxRagdollDuration; // 0x204
	float m_minDotRagdollCleanUp; // 0x208
	float m_minDistanceRagdollCleanUp; // 0x20c
	float m_freezeRagdollDelay; // 0x210
	float m_intervalRetryRagdollCleanUp; // 0x214
	float m_destroyOwnerDelay; // 0x218
	FGameplayTag m_gameplayTagKeepCollisionPostDeath; // 0x21c
	FMulticastInlineDelegate BP_OnDeathPreUnpossess; // 0x228
	FMulticastInlineDelegate BP_OnDeath; // 0x238
	FMulticastInlineDelegate BP_OnBlendToRagdollOnDeathWithoutDeathAnim; // 0x248
	FMulticastInlineDelegate BP_OnBlendToRagdoll; // 0x258
};

struct AOnboardingHintIndicator_C : AActor {
	UYActorUIComponent* YActorUIComponent; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
};

struct UWaterWavesAssetReference : UWaterWavesBase {
	UWaterWavesAsset* WaterWavesAsset; // 0x28
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
};

struct UUI_ChatMessage_WBP_C : UYWidget_ChatMessage {
	UYButton* m_button; // 0x380
	EYChannelType cachedChannelType; // 0x388
};

struct UPlaneFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Distance; // 0xc0
	FVector Position; // 0xc4
	FVector Normal; // 0xd0
	EFieldFalloffType Falloff; // 0xdc
};

struct UYWidget_SoftCurrencyDisplay : UYWidget {
	UYWidget_PriceGeneric* m_priceWidget; // 0x2c0
	FDataTableRowHandle m_softCurrencyRowHandle; // 0x2c8
};

struct USoundNodeOscillator : USoundNode {
	char bModulateVolume : 1; // 0x48
	char bModulatePitch : 1; // 0x48
	float AmplitudeMin; // 0x4c
	float AmplitudeMax; // 0x50
	float FrequencyMin; // 0x54
	float FrequencyMax; // 0x58
	float OffsetMin; // 0x5c
	float OffsetMax; // 0x60
	float CenterMin; // 0x64
	float CenterMax; // 0x68
};

struct UZipFileFunctionInternalCallback : UObject {
	EZipUtilityCompressionFormat CompressionFormat; // 0x30
	FString File; // 0x38
	FString DestinationFolder; // 0x48
	int32_t FileIndex; // 0x58
	UObject* Callback; // 0x60
	bool bSingleFile; // 0x68
	bool bFileFound; // 0x69
	bool bUnzipto; // 0x6a
};

struct UVariantObjectBinding : UObject {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xb0
};

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
};

struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28
};

struct UCameraAnim : UObject {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFOV; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5b0
};

struct UImage : UWidget {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UYWidgetContainer : UYWidget {
	UPanelWidget* m_rootPanel; // 0x2c0
	UPanelWidget* m_backgroundLayerPanel; // 0x2c8
};

struct UBTDecorator_TimeLimit : UBTDecorator {
	float timeLimit; // 0x68
};

struct UInteractiveGizmo : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct UWBP_GenericContent_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UImage* Gfx_Edge; // 0x2d0
	UImage* Gfx_EdgeGradient; // 0x2d8
	UNamedSlot* HeaderSlot; // 0x2e0
	UNamedSlot* Layout_ContentSlot; // 0x2e8
	UNamedSlot* Layout_FooterSlot; // 0x2f0
	UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x2f8
	UWBP_Header_Panel_C* WBP_Header_Panel; // 0x300
	FText HeadlineMasterLabel; // 0x308
};

struct UWBP_SettingsContent_Keybindings_C : UYWidgetView_Keybindings {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UImage* Gfx_Controller; // 0x340
	UVerticalBox* KeybindingList; // 0x348
	UTextBlock* Txt_Gamepad; // 0x350
	UTextBlock* Txt_Input; // 0x358
	UTextBlock* Txt_Primary; // 0x360
	UTextBlock* Txt_Secondary; // 0x368
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x370
	UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn; // 0x378
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Default; // 0x380
};

struct UMapCursor_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* CursorImage; // 0x268
	UMaterialInstanceDynamic* CursorImage_MID; // 0x270
};

struct ULandscapeWeightmapUsage : UObject {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct ALight : AActor {
	ULightComponent* LightComponent; // 0x240
	char bEnabled : 1; // 0x248
};

struct AEQSTestingPawn : ACharacter {
	UEnvQuery* QueryTemplate; // 0x4e8
	TArray<FEnvNamedValue> QueryParams; // 0x4f0
	TArray<FAIDynamicParam> QueryConfig; // 0x500
	float TimeLimitPerStep; // 0x510
	int32_t StepToDebugDraw; // 0x514
	EEnvQueryHightlightMode HighlightMode; // 0x518
	char bDrawLabels : 1; // 0x51c
	char bDrawFailedItems : 1; // 0x51c
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x51c
	char bShouldBeVisibleInGame : 1; // 0x51c
	char bTickDuringGame : 1; // 0x51c
	EEnvQueryRunMode QueryingMode; // 0x520
	FNavAgentProperties NavAgentProperties; // 0x528
};

struct UWBP_LoadingSpinner_C : UUserWidget {
	UImage* Gfx_Spinner; // 0x260
};

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x48
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UOnsetNRT : UAudioSynesthesiaNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UMapMarker_PlayerSpawn_WBP_C : UYWidget_MapMarker {
	UImage* m_iconImage; // 0x2e0
	UImage* m_offscreenArrow; // 0x2e8
};

struct UYLocalPlayerProximityComponent : UActorComponent {
	FMulticastInlineDelegate OnPlayerClose; // 0xb0
	FMulticastInlineDelegate OnPlayerNotCloseAnymore; // 0xc0
	float m_distanceMin; // 0xd0
	bool m_isPlayerClose; // 0xd4
};

struct UCompositionGraphCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58
	bool bCaptureFramesInHDR; // 0x68
	int32_t HDRCompressionQuality; // 0x6c
	EHDRCaptureGamut CaptureGamut; // 0x70
	FSoftObjectPath PostProcessingMaterial; // 0x78
	bool bDisableScreenPercentage; // 0x90
	UMaterialInterface* PostProcessingMaterialPtr; // 0x98
};

struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UYWidget_AbilitySlot : UYWidget {
	UYCharacterAbilityComponent* m_abilityComponent; // 0x2c0
	UYWidget_ImageBase* m_abilityImageBase; // 0x2c8
	UTextBlock* m_abilityCooldownText; // 0x2d0
	UTextBlock* m_abilityActiveTimeLeftText; // 0x2d8
	EYAbilityState m_currentAbilityState; // 0x2e0
};

struct UYWidgetController_EscapeMenu : UYWidgetController {
	TArray<FEscMenuButtonData> m_menuOptions; // 0x30
};

struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28
};

struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
};

struct UYGamePingManager : UObject {
	TArray<FYGamePingEntry> m_pingEntries; // 0x28
	float m_timeoutPingType; // 0xd8
	int32_t m_maxAmountOfPingRetries; // 0xdc
	FMulticastInlineDelegate OnPingTypeComplete; // 0xe0
};

struct UWBP_SettingsContent_Audio_C : UWBP_SettingsContentBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_InputDevice; // 0x348
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_OutputDevice; // 0x350
	UWBP_Selector_Btn_C* WBP_Selector_Btn_DialogueVolume; // 0x358
	UWBP_Selector_Btn_C* WBP_Selector_Btn_HitmarkerVolume; // 0x360
	UWBP_Selector_Btn_C* WBP_Selector_Btn_InputVolume; // 0x368
	UWBP_Selector_Btn_C* WBP_Selector_Btn_MasterVolume; // 0x370
	UWBP_Selector_Btn_C* WBP_Selector_Btn_MicrophoneSensitivity; // 0x378
	UWBP_Selector_Btn_C* WBP_Selector_Btn_MusicVolume; // 0x380
	UWBP_Selector_Btn_C* WBP_Selector_Btn_OutputVolume; // 0x388
	UWBP_Selector_Btn_C* WBP_Selector_Btn_SfxVolume; // 0x390
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_DialogueVolume; // 0x398
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_HitmarkerVolume; // 0x3a0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InputDevice; // 0x3a8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InputVolume; // 0x3b0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MasterVolume; // 0x3b8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MicrophoneSensitivity; // 0x3c0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MusicVolume; // 0x3c8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MuteInputAudio; // 0x3d0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MuteOutputAudio; // 0x3d8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_OutputDevice; // 0x3e0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_OutputVolume; // 0x3e8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_PushToTalk; // 0x3f0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_SoundEffectsVolume; // 0x3f8
	UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_VoiceChat; // 0x400
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MuteInputAudio; // 0x408
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MuteOutputAudio; // 0x410
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_PushToTalk; // 0x418
};

struct UDatasmithDeltaGenSceneImportData : UDatasmithFBXSceneImportData {
	bool bMergeNodes; // 0x48
	bool bOptimizeDuplicatedNodes; // 0x49
	bool bRemoveInvisibleNodes; // 0x4a
	bool bSimplifyNodeHierarchy; // 0x4b
	bool bImportVar; // 0x4c
	FString VarPath; // 0x50
	bool bImportPos; // 0x60
	FString PosPath; // 0x68
	bool bImportTml; // 0x78
	FString TmlPath; // 0x80
};

struct UYPlayerControllerAwarenessComponent : UActorComponent {
	FMulticastInlineDelegate m_onNotificationTriggered; // 0xb0
};

struct UScrollBar : UWidget {
	FScrollBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x5d8
	bool bAlwaysShowScrollbar; // 0x5e0
	bool bAlwaysShowScrollbarTrack; // 0x5e1
	EOrientation Orientation; // 0x5e2
	FVector2D Thickness; // 0x5e4
	FMargin Padding; // 0x5ec
};

struct UInterpGroup : UObject {
	TArray<UInterpTrack*> InterpTracks; // 0x30
	FName GroupName; // 0x40
	FColor GroupColor; // 0x48
	char bCollapsed : 1; // 0x4c
	char bVisible : 1; // 0x4c
	char bIsFolder : 1; // 0x4c
	char bIsParented : 1; // 0x4c
	char bIsSelected : 1; // 0x4c
};

struct UYProspectSingleton : UObject {
	UYWeaponTransportManager* m_transportManager; // 0x28
	UYImpactManager* m_impactManager; // 0x30
	UDataTable* m_playerTuningDataTable; // 0x38
	UDataTable* m_audioSettingsDataTable; // 0x48
	UDataAsset* m_notificationDataAsset; // 0x58
	FSoftObjectPath m_playerTuningDataTablePath; // 0x68
	FSoftObjectPath m_playerLevelUpAssetPath; // 0x80
	FSoftObjectPath m_notificationsTuningAssetPath; // 0x98
	FSoftObjectPath m_audioSettingsDatatablePath; // 0xb0
};

struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x440
};

struct UYCharacterBagComponent : UActorComponent {
	FMulticastInlineDelegate OnBagMeshChangedEvent; // 0xb0
	TArray<UMeshComponent*> m_bagMeshes; // 0xc0
};

struct UYWidget_TabElement : UYWidget {
	UYWidget_Button* m_button; // 0x2c0
};

struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x250
	bool bShowPreviewPlane; // 0x258
};

struct ADatasmithImportedSequencesActor : AActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x240
};

struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30
};

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UItemComponent_DragAndDropable_WBP_C : UYWidget_ItemComponentDragAndDropable {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UWidgetAnimation* DragDetectedAnim; // 0x330
	UImage* DragUX; // 0x338
	EYPlayerSetType slotType; // 0x340
	FMulticastInlineDelegate OnHover; // 0x348
	FMulticastInlineDelegate OnUnhover; // 0x358
	FMulticastInlineDelegate OnMouseUp; // 0x368
	EYInventoryPlace inventoryPlace; // 0x378
	TArray<EYItemType> CompatibleItemTypes; // 0x380
	TArray<EYDeviceClass> CompatibleDeviceTypes; // 0x390
	FDataTableRowHandle UI_InventoryHover; // 0x3a0
	FDataTableRowHandle UI_InventoryUnhover; // 0x3b0
	FDataTableRowHandle SFX_CompatibleDragOverSoundEffect; // 0x3c0
	EYItemImprovementScreenSlotType uiSlotType; // 0x3d0
	int32_t inventoryId; // 0x3d4
	bool dragUXOn; // 0x3d8
	bool Test; // 0x3d9
	FMulticastInlineDelegate OnDragDone; // 0x3e0
	bool IsDraggable; // 0x3f0
	FString instanceId; // 0x3f8
	bool CreateNewItem; // 0x408
};

struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct UItemComponent_Tooltip_C : UYWidget_ItemComponentBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	UWBP_ItemTooltip_C* Tooltip; // 0x308
	bool AddSellInfo; // 0x310
	bool AddPriceInfo; // 0x311
	FName factionId; // 0x314
	bool AddAttachmentScreenInfo; // 0x31c
};

struct ULightComponentBase : USceneComponent {
	FGuid LightGuid; // 0x1f8
	float Brightness; // 0x208
	float Intensity; // 0x20c
	FColor LightColor; // 0x210
	char bAffectsWorld : 1; // 0x214
	char CastShadows : 1; // 0x214
	char CastStaticShadows : 1; // 0x214
	char CastDynamicShadows : 1; // 0x214
	char bAffectTranslucentLighting : 1; // 0x214
	char bTransmission : 1; // 0x214
	char bCastVolumetricShadow : 1; // 0x214
	char bCastDeepShadow : 1; // 0x214
	char bCastRaytracedShadow : 1; // 0x215
	char bAffectReflection : 1; // 0x215
	char bAffectGlobalIllumination : 1; // 0x215
	float DeepShadowLayerDistribution; // 0x218
	float IndirectLightingIntensity; // 0x21c
	float VolumetricScatteringIntensity; // 0x220
	int32_t SamplesPerPixel; // 0x224
};

struct UPlayerBotCloseAllWidgetsTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	AActor* Owner; // 0xb0
	FName InteractTarget; // 0xb8
	APRO_PlayerController_C* PROPlayerController; // 0xc0
	FName IsCombatTargetClose; // 0xc8
};

struct USoftCurrencyDisplay_WBP_C : UYWidget_SoftCurrencyDisplay {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d8
	UImage* Border; // 0x2e0
	UImage* border_red; // 0x2e8
	UCanvasPanel* maxContainer; // 0x2f0
	UYTextBlock* ToolTip_Text; // 0x2f8
	UYButton* YButton; // 0x300
	UWBP_Generic_ToolTip_C* Button_ToolTipWidget; // 0x308
};

struct UBTTask_Dodge_C : UYBTTask_PlayAnimation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110
	FBlackboardKeySelector KeyTimeDodgeFinished; // 0x118
	FBlackboardKeySelector KeyDodgeMontage; // 0x140
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct UReplicationGraph : UReplicationDriver {
	UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28
	UNetDriver* NetDriver; // 0x30
	TArray<UNetReplicationGraphConnection*> Connections; // 0x38
	TArray<UNetReplicationGraphConnection*> PendingConnections; // 0x48
	TArray<UReplicationGraphNode*> GlobalGraphNodes; // 0x98
	TArray<UReplicationGraphNode*> PrepareForReplicationNodes; // 0xa8
};

struct UYControllerReplicationComponent : UActorComponent {
	FYPlayerSpawnLocationInfo m_selectedSpawnLocation; // 0xb0
	int32_t m_latencySample; // 0xd0
	FMulticastInlineDelegate OnSpawnLocationSet; // 0xe0
	FMulticastInlineDelegate OnLatencySampleReceived; // 0xf0
	UYMapMarkerData* m_mapMarkerData; // 0x100
	FMulticastInlineDelegate BP_OnAnyPlayerDBNOTeleported; // 0x108
};

struct UParticleModuleLocationBoneSocket : UParticleModuleLocationBase {
	ELocationBoneSocketSource SourceType; // 0x30
	FVector UniversalOffset; // 0x34
	TArray<FLocationBoneSocketInfo> SourceLocations; // 0x40
	ELocationBoneSocketSelectionMethod SelectionMethod; // 0x50
	char bUpdatePositionEachFrame : 1; // 0x54
	char bOrientMeshEmitters : 1; // 0x54
	char bInheritBoneVelocity : 1; // 0x54
	float InheritVelocityScale; // 0x58
	FName SkelMeshActorParamName; // 0x5c
	int32_t NumPreSelectedIndices; // 0x64
};

struct UYPopUpManager : UObject {
	TArray<FName> m_sessionPopUpIds; // 0x78
	UYDismissedPopups* m_dismissedPopups; // 0x88
};

struct UYMatchScreenLobby : UYScreenBase {
	UYScreenBase* m_hudMatchScreenClass; // 0xb0
};

struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x80
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x88
	ENiagaraRibbonFacingMode FacingMode; // 0xa8
	FNiagaraRibbonUVSettings UV0Settings; // 0xac
	FNiagaraRibbonUVSettings UV1Settings; // 0xd0
	ENiagaraRibbonDrawDirection DrawDirection; // 0xf4
	float CurveTension; // 0xf8
	ENiagaraRibbonTessellationMode TessellationMode; // 0xfc
	int32_t TessellationFactor; // 0x100
	bool bUseConstantFactor; // 0x104
	float TessellationAngle; // 0x108
	bool bScreenSpaceTessellation; // 0x10c
	FNiagaraVariableAttributeBinding PositionBinding; // 0x110
	FNiagaraVariableAttributeBinding ColorBinding; // 0x168
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1c0
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x218
	FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x270
	FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2c8
	FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x320
	FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x378
	FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3d0
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x428
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x480
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x4d8
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x530
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x588
	FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x5e0
	FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x638
	FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x690
	FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x6e8
};

struct UMaterialExpressionIf : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput AGreaterThanB; // 0x68
	FExpressionInput AEqualsB; // 0x7c
	FExpressionInput ALessThanB; // 0x90
	float EqualsThreshold; // 0xa4
	float ConstB; // 0xa8
	float ConstAEqualsB; // 0xac
};

struct UWBP_Checkbox_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Clear_Anim; // 0x268
	UWidgetAnimation* Fail_Anim; // 0x270
	UWidgetAnimation* Success_Anim; // 0x278
	UWidgetAnimation* ScreenIn_Anim; // 0x280
	UImage* Gfx_Backer; // 0x288
	UImage* Gfx_Backer_FTUE; // 0x290
	UImage* Gfx_Bg; // 0x298
	UImage* Gfx_FailHighlight; // 0x2a0
	UImage* Gfx_SuccessHighlight; // 0x2a8
	UImage* Icn_Check; // 0x2b0
	UImage* Icn_Cross; // 0x2b8
	UImage* M_Backer; // 0x2c0
	bool Show FTUE Diamond; // 0x2c8
};

struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x78
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UWaterWavesAsset : UObject {
	UWaterWaves* WaterWaves; // 0x28
};

struct UInAppPurchaseCallbackProxy : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UBTTask_PreShareSenseBool_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float Distance; // 0xb0
	FBlackboardKeySelector WillShareSense Key; // 0xb8
};

struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	TArray<FQuat> QuatData; // 0x50
};

struct UYWidget_ItemComponentLore : UYWidget_ItemComponentBase {
	UTextBlock* m_loreText; // 0x300
};

struct UCineCameraComponent : UCameraComponent {
	FCameraFilmbackSettings FilmbackSettings; // 0x7c0
	FCameraFilmbackSettings Filmback; // 0x7cc
	FCameraLensSettings LensSettings; // 0x7d8
	FCameraFocusSettings FocusSettings; // 0x7f0
	float CurrentFocalLength; // 0x848
	float CurrentAperture; // 0x84c
	float CurrentFocusDistance; // 0x850
	TArray<FNamedFilmbackPreset> FilmbackPresets; // 0x860
	TArray<FNamedLensPreset> LensPresets; // 0x870
	FString DefaultFilmbackPresetName; // 0x880
	FString DefaultFilmbackPreset; // 0x890
	FString DefaultLensPresetName; // 0x8a0
	float DefaultLensFocalLength; // 0x8b0
	float DefaultLensFStop; // 0x8b4
};

struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	FVector Min; // 0x38
	FVector Max; // 0x44
};

struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UYCharacterDBNOComponent : UYResourceComponent {
	FMulticastInlineDelegate OnTeleportStateChanged; // 0xd0
	AYGameState_Match* m_gameStateMatch; // 0xe0
	FMulticastInlineDelegate OnRevived; // 0xe8
	FMulticastInlineDelegate OnPreExecuted; // 0xf8
	FMulticastInlineDelegate OnExecuted; // 0x108
	FMulticastInlineDelegate OnTeleported; // 0x118
	FMulticastInlineDelegate OnEnterDBNOEvent; // 0x128
	FMulticastInlineDelegate OnLeaveDBNOEvent; // 0x138
	FMulticastInlineDelegate OnPreTeleportedDBNO; // 0x148
	FMulticastInlineDelegate OnTeleportedDBNO; // 0x158
	FMulticastInlineDelegate CurrentDBNOShieldHealthChangedDelegate; // 0x168
	FMulticastInlineDelegate BP_OnTeleportChargsAmountChanged; // 0x178
	FMulticastInlineDelegate OnRecoveredDBNO; // 0x188
	float m_timestampEnteredDBNO; // 0x19c
	int32_t m_dbnoTeleportChargesLeft; // 0x1a0
	float m_dbnoShieldHealth; // 0x1a4
	float m_currentDBNOTotalDuration; // 0x1a8
};

struct UActorChannel : UChannel {
	AActor* Actor; // 0x70
	TArray<UObject*> CreateSubObjects; // 0x160
};

struct UARObjectComponent : UARComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
};

struct UInterpData : UObject {
	float InterpLength; // 0x28
	float PathBuildTime; // 0x2c
	TArray<UInterpGroup*> InterpGroups; // 0x30
	UInterpCurveEdSetup* CurveEdSetup; // 0x40
	float EdSectionStart; // 0x48
	float EdSectionEnd; // 0x4c
	char bShouldBakeAndPrune : 1; // 0x50
	UInterpGroupDirector* CachedDirectorGroup; // 0x58
	TArray<FName> AllEventNames; // 0x60
};

struct USplineMeshComponent : UStaticMeshComponent {
	FSplineMeshParams SplineParams; // 0x4d8
	FVector SplineUpDir; // 0x530
	float SplineBoundaryMin; // 0x53c
	FGuid CachedMeshBodySetupGuid; // 0x540
	UBodySetup* BodySetup; // 0x550
	float SplineBoundaryMax; // 0x558
	char bAllowSplineEditingPerInstance : 1; // 0x55c
	char bSmoothInterpRollScale : 1; // 0x55c
	char bMeshDirty : 1; // 0x55c
	ESplineMeshAxis ForwardAxis; // 0x55d
	float VirtualTextureMainPassMaxDrawDistance; // 0x560
};

struct UNiagaraDataInterfaceWater : UNiagaraDataInterface {
	AWaterBody* SourceBody; // 0x38
};

struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98
};

struct AYProjectile_Bullet_BP_C : AYProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UStaticMeshComponent* tracer_MESHCOMP; // 0x3a0
	float DeltaAccumulated; // 0x3a8
	float DeltaCurrent; // 0x3ac
	float PositionInterpolationSpeed; // 0x3b0
	FVector MuzzleWorldPosition; // 0x3b4
	float ScalingInterpolationSpeed; // 0x3c0
	UParticleSystemComponent* particle_COMP; // 0x3c8
	APlayerController* LocalPlayerController; // 0x3d0
	float DistanceScaling_distance; // 0x3d8
	FVector TracerScale_near; // 0x3dc
	FVector TracerScale_far; // 0x3e8
	FVector TracerScale_intial; // 0x3f4
	bool SpawnSmokeTrail; // 0x400
	UParticleSystem* SmokeTrailTemplate; // 0x408
	UMaterialInterface* TracerMaterial; // 0x410
	bool hasFXCategoryProjPS; // 0x418
	FVector LocalPlayerCameraLocation; // 0x41c
};

struct UYWidget_ItemComponentButtonModTune : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnItemAndItemIdSet; // 0x300
};

struct AYMissionLocationActor : AActor {
	FName m_id; // 0x240
	bool m_isAvailable; // 0x248
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb0
};

struct UWBP_ToggleText_Btn_C : UYWidget_Composite {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UWidgetAnimation* SelectionToggle_Anim; // 0x2d0
	UWidgetAnimation* HighlightRight_Anim; // 0x2d8
	UWidgetAnimation* HighlightLeft_Anim; // 0x2e0
	UButton* Btn_InputLeft; // 0x2e8
	UButton* Btn_InputRight; // 0x2f0
	UImage* Gfx_ButtonBackerLeft; // 0x2f8
	UImage* Gfx_ButtonBackerRight; // 0x300
	UImage* Gfx_DecoGradientLeft; // 0x308
	UImage* Gfx_DecoGradientRight; // 0x310
	UImage* Gfx_SelectionBarLeft; // 0x318
	UImage* Gfx_SelectionBarRight; // 0x320
	UTextBlock* Txt_LeftValue; // 0x328
	UTextBlock* Txt_RightValue; // 0x330
	UWBP_SelectionBracket_C* WBP_SelectionBracketLeft; // 0x338
	UWBP_SelectionBracket_C* WBP_SelectionBracketRight; // 0x340
	TArray<FText> SelectorOptions; // 0x348
	FMulticastInlineDelegate OnToggleChanged; // 0x358
	bool toggled; // 0x368
	FDataTableRowHandle SoundFX_ButtonHover; // 0x370
	FDataTableRowHandle SoundFX_ButtonPress; // 0x380
};

struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x340
	float SourceHeight; // 0x344
	float BarnDoorAngle; // 0x348
	float BarnDoorLength; // 0x34c
	UTexture* SourceTexture; // 0x350
};

struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x240
	bool bLockOrientationToRail; // 0x244
	USceneComponent* TransformComponent; // 0x248
	USplineComponent* RailSplineComponent; // 0x250
	USceneComponent* RailCameraMount; // 0x258
};

struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
};

struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x148
};

struct AAICtrl_Base_BP_C : AYAIController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3d8
	UAIAggroComponent_BP_C* AIAggroComponent_BP; // 0x3e0
	UYAIPerceptionComponent* YAIPerception; // 0x3e8
	AAICharacter_Base_BP_C* PossesedAICharacter; // 0x3f0
};

struct UMediaTimeStampInfo : UObject {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
};

struct UControlRigNumericalValidationPass : UControlRigValidationPass {
	bool bCheckControls; // 0x28
	bool bCheckBones; // 0x29
	bool bCheckCurves; // 0x2a
	float TranslationPrecision; // 0x2c
	float RotationPrecision; // 0x30
	float ScalePrecision; // 0x34
	float CurvePrecision; // 0x38
	FName EventNameA; // 0x3c
	FName EventNameB; // 0x44
	FRigPose pose; // 0x50
};

struct UYPlayersStatsComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnTrySendingPlayerStatsEvent; // 0xd0
};

struct UYWidget_VanityCustomizationCategory : UYWidget_ItemContainer {
	EYVanityType m_vanityType; // 0x580
	int32_t m_slotId; // 0x584
};

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x440
	float FrustumAngle; // 0x444
	float FrustumAspectRatio; // 0x448
	float FrustumStartDist; // 0x44c
	float FrustumEndDist; // 0x450
	UTexture* Texture; // 0x458
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct ASoakTestAutomationManager_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	bool automationRunning; // 0x250
	bool recordProfiles; // 0x251
	AYAIBotController* YAIBotController; // 0x258
};

struct USoundSubmixWithParentBase : USoundSubmixBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UDestructibleComponent : USkinnedMeshComponent {
	char bFractureEffectOverride : 1; // 0x690
	TArray<FFractureEffect> FractureEffects; // 0x698
	bool bEnableHardSleeping; // 0x6a8
	float LargeChunkThreshold; // 0x6ac
	FMulticastInlineDelegate OnComponentFracture; // 0x6c0
};

struct UPlayerStationComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TArray<float> Angles; // 0xb8
	FDataTableRowHandle Scene_Appearance; // 0xc8
	FDataTableRowHandle Scene_Loadout; // 0xd8
	FTimerHandle TimerHandleHidePlayers; // 0xe8
	TArray<AYPlayerCharacter*> Players; // 0xf0
	float HideOtherPlayersDistance; // 0x100
	TArray<AActor*> NPCs; // 0x108
	FDataTableRowHandle Scene_QuickMenu; // 0x118
	TArray<FDataTableRowHandle> StacksToIgnoreHiding; // 0x128
	bool ShouldGameplayBeHidden; // 0x138
	UUI_MasterBackButton_WBP_C* MasterBackButton; // 0x140
	FDataTableRowHandle Scene_Play; // 0x148
	FDataTableRowHandle Scene_WeaponPurchasing; // 0x158
	FDataTableRowHandle Scene_WeaponCrafting; // 0x168
	TArray<AOnboardingHintIndicator_C*> FtueHintIndicators; // 0x178
	bool ShouldHideFtueMarker; // 0x188
};

struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct UYWidget_TopMenuBar : UYWidget {
	FMulticastInlineDelegate OnTopMenuButtonClickedDelegate; // 0x2c0
	UHorizontalBox* m_horizontalButtonContainer; // 0x2d0
	TArray<FYTopMenuBarButtonEntry> m_buttonData; // 0x2d8
	UYWidget_TopMenuBarButton* m_topMenuBarButtonWidgetClass; // 0x2e8
	TArray<UYWidget_TopMenuBarButton*> m_menuButtons; // 0x2f0
	UYWidget_TopMenuBarButton* m_currentSelectedButton; // 0x300
	UYWidget_TopMenuBarButton* m_landingScreenButton; // 0x308
	UYWidget_TopMenuBarButton* m_shopScreenButton; // 0x310
};

struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
};

struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
};

struct UPlayFabLocalizationAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x98
	UPlayFabJsonObject* RequestJsonObj; // 0xa0
	UPlayFabJsonObject* ResponseJsonObj; // 0xa8
};

struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FString ShotDisplayName; // 0x160
	FText DisplayName; // 0x170
};

struct ULakeCollisionComponent : UPrimitiveComponent {
	UBodySetup* CachedBodySetup; // 0x440
	FVector BoxExtent; // 0x448
};

struct UYScreenChangeButton : UYButton {
	UYScreenCommand* m_screenCommandBP; // 0x4c8
	bool m_forceScreenChangeManually; // 0x4d0
	UYScreenCommand* m_screenCommand; // 0x4d8
};

struct UYWidget_CommWheel : UYWidget {
	EYWheelType m_activeWheelType; // 0x2c0
	float m_distanceFromCenter; // 0x2c4
	float m_deadZoneCenter; // 0x2c8
	UCanvasPanel* m_commWheelItemsPanel; // 0x2d0
	UImage* m_selectorWidget; // 0x2d8
	TArray<UPanelSlot*> Slots; // 0x2e0
	UYWidget_CommWheelItem* m_commWheelItemWidgetClass; // 0x2f0
	UUserWidget* m_separatorWidgetClass; // 0x2f8
	TArray<UDataTable*> m_subCommWheelStack; // 0x300
	UYWidget_CommWheelItem* m_centralWheelItem; // 0x310
	UYWidget_CommWheelItem* m_selectedWheelItem; // 0x318
	UYPlayerSocialStationComponent* m_socialComponent; // 0x328
};

struct UYRebuildNavMeshReportComponent : UActorComponent {
	FName m_tagWhiteListedNavMeshRebuilder; // 0xb0
	TMap<FName, int32_t> m_invokeCounts; // 0xb8
	TMap<FName, int32_t> m_invokeCountsUnauthorized; // 0x108
};

struct UAnimNotifyState_TargetConvergence_C : UYAnimNotifyState_TargetConverge {
	float DesiredDistance; // 0x30
	float MaxScale; // 0x34
	float MinScale; // 0x38
	float MaxTargetDistance; // 0x3c
	float MaxAngleToTarget; // 0x40
};

struct UTexture2DDynamic : UTexture {
	EPixelFormat Format; // 0xe0
};

struct UPawnNoiseEmitterComponent : UActorComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb0
	FVector LastRemoteNoisePosition; // 0xb4
	float NoiseLifetime; // 0xc0
	float LastRemoteNoiseVolume; // 0xc4
	float LastRemoteNoiseTime; // 0xc8
	float LastLocalNoiseVolume; // 0xcc
	float LastLocalNoiseTime; // 0xd0
};

struct UYWidget_PackOffersOverview : UYWidget {
	UYWidget_OfferListContainer* m_packOfferListContainer; // 0x2d0
	TArray<FDataTableRowHandle> m_packWeeklyOffers; // 0x2d8
};

struct AYBagContainer_BP_C : AYLootContainer_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x480
	float LifeTime; // 0x488
	bool OffsetEnabled; // 0x48c
};

struct UCharacterMovementComponent : UPawnMovementComponent {
	ACharacter* CharacterOwner; // 0x148
	float GravityScale; // 0x150
	float MaxStepHeight; // 0x154
	float JumpZVelocity; // 0x158
	float JumpOffJumpZFactor; // 0x15c
	bool m_moveServerCorrectionClientAuth; // 0x160
	float WalkableFloorAngle; // 0x164
	float WalkableFloorZ; // 0x168
	EMovementMode MovementMode; // 0x16c
	char CustomMovementMode; // 0x16d
	ENetworkSmoothingMode NetworkSmoothingMode; // 0x16e
	float GroundFriction; // 0x170
	float MaxWalkSpeed; // 0x19c
	float MaxWalkSpeedCrouched; // 0x1a0
	float MaxSwimSpeed; // 0x1a4
	float MaxFlySpeed; // 0x1a8
	float MaxCustomMovementSpeed; // 0x1ac
	float MaxAcceleration; // 0x1b0
	float MinAnalogWalkSpeed; // 0x1b4
	float BrakingFrictionFactor; // 0x1b8
	float BrakingFriction; // 0x1bc
	float BrakingSubStepTime; // 0x1c0
	float BrakingDecelerationWalking; // 0x1c4
	float BrakingDecelerationFalling; // 0x1c8
	float BrakingDecelerationSwimming; // 0x1cc
	float BrakingDecelerationFlying; // 0x1d0
	float AirControl; // 0x1d4
	float AirControlBoostMultiplier; // 0x1d8
	float AirControlBoostVelocityThreshold; // 0x1dc
	float FallingLateralFriction; // 0x1e0
	float CrouchedHalfHeight; // 0x1e4
	float Buoyancy; // 0x1e8
	float PerchRadiusThreshold; // 0x1ec
	float PerchAdditionalHeight; // 0x1f0
	FRotator RotationRate; // 0x1f4
	char bUseSeparateBrakingFriction : 1; // 0x200
	char bApplyGravityWhileJumping : 1; // 0x200
	char bUseControllerDesiredRotation : 1; // 0x200
	char bOrientRotationToMovement : 1; // 0x200
	char bSweepWhileNavWalking : 1; // 0x200
	char bMovementInProgress : 1; // 0x200
	char bEnableScopedMovementUpdates : 1; // 0x200
	char bEnableServerDualMoveScopedMovementUpdates : 1; // 0x201
	char bForceMaxAccel : 1; // 0x201
	char bRunPhysicsWithNoController : 1; // 0x201
	char bForceNextFloorCheck : 1; // 0x201
	char bShrinkProxyCapsule : 1; // 0x201
	char bCanWalkOffLedges : 1; // 0x201
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x201
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x202
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x202
	char bDeferUpdateMoveComponent : 1; // 0x202
	char bEnablePhysicsInteraction : 1; // 0x202
	char bTouchForceScaledToMass : 1; // 0x202
	char bPushForceScaledToMass : 1; // 0x202
	char bPushForceUsingZOffset : 1; // 0x202
	char bScalePushForceToVelocity : 1; // 0x203
	USceneComponent* DeferredUpdatedMoveComponent; // 0x208
	float MaxOutOfWaterStepHeight; // 0x210
	float OutofWaterZ; // 0x214
	float Mass; // 0x218
	float StandingDownwardForceScale; // 0x21c
	float InitialPushForceFactor; // 0x220
	float PushForceFactor; // 0x224
	float PushForcePointZOffsetFactor; // 0x228
	float TouchForceFactor; // 0x22c
	float MinTouchForce; // 0x230
	float MaxTouchForce; // 0x234
	float RepulsionForce; // 0x238
	FVector Acceleration; // 0x23c
	FQuat LastUpdateRotation; // 0x250
	FVector LastUpdateLocation; // 0x260
	FVector LastUpdateVelocity; // 0x26c
	float ServerLastTransformUpdateTimeStamp; // 0x278
	float ServerLastClientGoodMoveAckTime; // 0x27c
	float ServerLastClientAdjustmentTime; // 0x280
	FVector PendingImpulseToApply; // 0x284
	FVector PendingForceToApply; // 0x290
	float AnalogInputModifier; // 0x29c
	float MaxSimulationTimeStep; // 0x2ac
	int32_t MaxSimulationIterations; // 0x2b0
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x2b4
	float MaxDepenetrationWithGeometry; // 0x2b8
	float MaxDepenetrationWithGeometryAsProxy; // 0x2bc
	float MaxDepenetrationWithPawn; // 0x2c0
	float MaxDepenetrationWithPawnAsProxy; // 0x2c4
	float NetworkSimulatedSmoothLocationTime; // 0x2c8
	float NetworkSimulatedSmoothRotationTime; // 0x2cc
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2d0
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2d4
	float NetProxyShrinkRadius; // 0x2d8
	float NetProxyShrinkHalfHeight; // 0x2dc
	float NetworkMaxSmoothUpdateDistance; // 0x2e0
	float NetworkNoSmoothUpdateDistance; // 0x2e4
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x2e8
	float NetworkMinTimeBetweenClientAdjustments; // 0x2ec
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x2f0
	float NetworkLargeClientCorrectionDistance; // 0x2f4
	float LedgeCheckThreshold; // 0x2f8
	float JumpOutOfWaterPitch; // 0x2fc
	FFindFloorResult CurrentFloor; // 0x300
	EMovementMode DefaultLandMovementMode; // 0x398
	EMovementMode DefaultWaterMovementMode; // 0x399
	EMovementMode GroundMovementMode; // 0x39a
	char bMaintainHorizontalGroundVelocity : 1; // 0x39b
	char bImpartBaseVelocityX : 1; // 0x39b
	char bImpartBaseVelocityY : 1; // 0x39b
	char bImpartBaseVelocityZ : 1; // 0x39b
	char bImpartBaseAngularVelocity : 1; // 0x39b
	char bJustTeleported : 1; // 0x39b
	char bNetworkUpdateReceived : 1; // 0x39b
	char bNetworkMovementModeChanged : 1; // 0x39b
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x39c
	char bServerAcceptClientAuthoritativePosition : 1; // 0x39c
	char bNotifyApex : 1; // 0x39c
	char bCheatFlying : 1; // 0x39c
	char bWantsToCrouch : 1; // 0x39c
	char bCrouchMaintainsBaseLocation : 1; // 0x39c
	char bIgnoreBaseRotation : 1; // 0x39c
	char bFastAttachedMove : 1; // 0x39c
	char bAlwaysCheckFloor : 1; // 0x39d
	char bUseFlatBaseForFloorChecks : 1; // 0x39d
	char bPerformingJumpOff : 1; // 0x39d
	char bWantsToLeaveNavWalking : 1; // 0x39d
	char bUseRVOAvoidance : 1; // 0x39d
	char bRequestedMoveUseAcceleration : 1; // 0x39d
	char bWasSimulatingRootMotion : 1; // 0x39d
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x39e
	char bHasRequestedVelocity : 1; // 0x39e
	char bRequestedMoveWithMaxSpeed : 1; // 0x39e
	char bWasAvoidanceUpdated : 1; // 0x39e
	char bProjectNavMeshWalking : 1; // 0x39e
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x39e
	float AvoidanceConsiderationRadius; // 0x3b0
	FVector RequestedVelocity; // 0x3b4
	int32_t AvoidanceUID; // 0x3c0
	FNavAvoidanceMask AvoidanceGroup; // 0x3c4
	FNavAvoidanceMask GroupsToAvoid; // 0x3c8
	FNavAvoidanceMask GroupsToIgnore; // 0x3cc
	float AvoidanceWeight; // 0x3d0
	FVector PendingLaunchVelocity; // 0x3d4
	float NavMeshProjectionInterval; // 0x484
	float NavMeshProjectionTimer; // 0x488
	float NavMeshProjectionInterpSpeed; // 0x48c
	float NavMeshProjectionHeightScaleUp; // 0x490
	float NavMeshProjectionHeightScaleDown; // 0x494
	float NavWalkingFloorDistTolerance; // 0x498
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x4a0
	float MinTimeBetweenTimeStampResets; // 0x4f8
	FRootMotionSourceGroup CurrentRootMotion; // 0x9a8
	FRootMotionSourceGroup ServerCorrectionRootMotion; // 0x9e0
	FRootMotionMovementParams RootMotionParams; // 0xab0
	FVector AnimRootMotionVelocity; // 0xaf0
};

struct UItemComponent_Clickable_WBP_C : UYWidget_ItemComponentClickable {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FButtonStyle NormalButtonStyle; // 0x318
	FButtonStyle HoveredButtonStyle; // 0x590
};

struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x240
};

struct UYCommand_TopMenuButton_ChangeScreen : UYScreenCommand {
	UYScreenBase* m_screenToTriggerBP; // 0x28
	FDataTableRowHandle m_sceenChange; // 0x30
};

struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x270
	UNetConnection* BeaconConnection; // 0x278
	EBeaconConnectionState ConnectionState; // 0x280
};

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct ULevel : UObject {
	UWorld* OwningWorld; // 0xb8
	UModel* Model; // 0xc0
	TArray<UModelComponent*> ModelComponents; // 0xc8
	ULevelActorContainer* ActorCluster; // 0xd8
	int32_t NumTextureStreamingUnbuiltComponents; // 0xe0
	int32_t NumTextureStreamingDirtyResources; // 0xe4
	ALevelScriptActor* LevelScriptActor; // 0xe8
	ANavigationObjectBase* NavListStart; // 0xf0
	ANavigationObjectBase* NavListEnd; // 0xf8
	TArray<UNavigationDataChunk*> NavDataChunks; // 0x100
	float LightmapTotalSize; // 0x110
	float ShadowmapTotalSize; // 0x114
	TArray<FVector> StaticNavigableGeometry; // 0x118
	TArray<FGuid> StreamingTextureGuids; // 0x128
	FGuid LevelBuildDataId; // 0x1d0
	UMapBuildDataRegistry* MapBuildData; // 0x1e0
	FIntVector LightBuildLevelOffset; // 0x1e8
	char bIsLightingScenario : 1; // 0x1f4
	char bTextureStreamingRotationChanged : 1; // 0x1f4
	char bStaticComponentsRegisteredInStreamingManager : 1; // 0x1f4
	char bIsVisible : 1; // 0x1f4
	AWorldSettings* WorldSettings; // 0x258
	TArray<UAssetUserData*> AssetUserData; // 0x268
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x288
};

struct UYWidgetController_EndOfMatch : UYWidgetController {
	AYPlayerState* m_currentlyViewedPlayerState; // 0x30
};

struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x1f8
	char bStopWhenOwnerDestroyed : 1; // 0x1f8
	char bAllowSpatialization : 1; // 0x1f8
	char bOverrideAttenuation : 1; // 0x1f8
	char bOutputToBusOnly : 1; // 0x1fc
	USoundAttenuation* AttenuationSettings; // 0x200
	FSoundAttenuationSettings AttenuationOverrides; // 0x208
	USoundConcurrency* ConcurrencySettings; // 0x5a8
	TSet<USoundConcurrency*> ConcurrencySet; // 0x5b0
	USoundClass* SoundClass; // 0x600
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x608
	USoundSubmixBase* SoundSubmix; // 0x610
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x618
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x628
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x638
	char bIsUISound : 1; // 0x648
	char bIsPreviewSound : 1; // 0x648
	int32_t EnvelopeFollowerAttackTime; // 0x64c
	int32_t EnvelopeFollowerReleaseTime; // 0x650
	FMulticastInlineDelegate OnAudioEnvelopeValue; // 0x658
	USynthSound* Synth; // 0x688
	UAudioComponent* AudioComponent; // 0x690
};

struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
};

struct UWBP_ItemTileBase_C : UYWidget_ItemContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x580
	FDataTableRowHandle DoubleLeftClickAudioHandle; // 0x588
	FDataTableRowHandle RightClickAudioHandle; // 0x598
	bool IsInInventoryView; // 0x5a8
	FMulticastInlineDelegate SellScreenDoubleClickOfStashItem; // 0x5b0
	bool ItemWidgetIsPartOfSellList; // 0x5c0
	FMulticastInlineDelegate SellScreenDoubleClickOfSellListItem; // 0x5c8
};

struct UBrushStampIndicator : UInteractiveGizmo {
	float BrushRadius; // 0x38
	float BrushFalloff; // 0x3c
	FVector BrushPosition; // 0x40
	FVector BrushNormal; // 0x4c
	bool bDrawIndicatorLines; // 0x58
	bool bDrawRadiusCircle; // 0x59
	int32_t SampleStepCount; // 0x5c
	FLinearColor LineColor; // 0x60
	float LineThickness; // 0x70
	bool bDepthTested; // 0x74
	bool bDrawSecondaryLines; // 0x75
	float SecondaryLineThickness; // 0x78
	FLinearColor SecondaryLineColor; // 0x7c
	UPrimitiveComponent* AttachedComponent; // 0x90
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	FMovieSceneEvent Event; // 0xf0
};

struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct UWBP_PlayerCharacterPlate_C : UYWidget_PlayerCharacterPlate {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c0
	UWidgetAnimation* FadeOut; // 0x3c8
	UWidgetAnimation* FadeIn; // 0x3d0
	UCanvasPanel* CanvasPanel_Offscreen; // 0x3d8
	UCanvasPanel* CanvasPanel_OnScreen; // 0x3e0
	UTextBlock* DistanceText; // 0x3e8
	UImage* Gfx_Backer_Main; // 0x3f0
	UImage* Gfx_Backer_Secondary; // 0x3f8
	UImage* HighlightLeader; // 0x400
	UHorizontalBox* HorizontalBox_InviteToPact; // 0x408
	UHorizontalBox* HorizontalBox_PlayerInfo; // 0x410
	UImage* Offscreen_PactImage; // 0x418
	UUI_TeamInfo_WBP_C* OffScreen_TeamInfo_WBP; // 0x420
	UImage* OffscreenArrow; // 0x428
	UImage* OnScreen_PactImage; // 0x430
	UUI_TeamInfo_WBP_C* OnScreen_TeamInfo_WBP; // 0x438
	UCanvasPanel* ParentCanvasPanel; // 0x440
	UHorizontalBox* ProspectorLevelHBox; // 0x448
	UYTextBlock* ProspectorTitleText; // 0x450
	UHorizontalBox* SocialInfo; // 0x458
	UTextBlock* Text_OffscreenNamePactMate; // 0x460
	UTextBlock* Text_Player_VictoryPoints; // 0x468
	UTextBlock* Text_PlayerName; // 0x470
	UTextBlock* TextBlock_FarDistancePlayerName; // 0x478
	UTextBlock* TextBlock_InvitePending; // 0x480
	UTextBlock* TextBlock_Offscreen_DBNO; // 0x488
	UUI_AnnouncementIndicator_WBP_C* UI_AnnouncementIndicator_WBP; // 0x490
	UUI_PlayerHealthBar_WBP_C* UI_HealthBar_WBP; // 0x498
	UUI_KeyShortcut_WBP_C* UI_KeyShortcut_WBP_TeamInvite; // 0x4a0
	UWBP_InputKeyNavigation_Btn_C* WBP_InputKeyNavigation_Btn; // 0x4a8
	UWBP_SquadTalking_C* WBP_SquadTalking; // 0x4b0
	UYWidget_ProspectorLevel_Small_WBP_C* YWidget_ProspectorLevel_Small_WBP; // 0x4b8
	int32_t OwnerVictoryPoints; // 0x4c0
	int32_t LocalVictoryPoints; // 0x4c4
	FLinearColor Color_Name_InPactWithLocalPlayer; // 0x4c8
	FLinearColor Color_Name_LessVPThanLocalPlayer; // 0x4d8
	FLinearColor Color_Name_MoreVPThanLocalPlayer; // 0x4e8
	FLinearColor Color_Name_EqualVPThanLocalPlayer; // 0x4f8
	bool IsSquadMode; // 0x508
	FTimerHandle UpdateDistanceTimerHandle; // 0x510
	bool ShouldHighlightLeader; // 0x518
	FLinearColor Color_Name_HighlightPlayer; // 0x51c
	FTimerHandle UpdateSocialInteractionsTimerHandle; // 0x530
	bool ShouldShowHealthBar; // 0x538
};

struct UYCharacterCustomizationManager : UObject {
	TMap<FString, UYCharacterCustomizationModel*> m_models; // 0x28
};

struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UYPlayerSupportComponent : UActorComponent {
	FMulticastInlineDelegate OnServerResponseDelegate; // 0xf0
	FMulticastInlineDelegate OnSentPlayerReport; // 0x100
	FMulticastInlineDelegate OnActiveStateRequestDelegate; // 0x110
};

struct UAutoDestroySubsystem : UWorldSubsystem {
	TArray<AActor*> ActorsToPoll; // 0x38
};

struct USynth2DSlider : UWidget {
	float ValueX; // 0x108
	float ValueY; // 0x10c
	FDelegate ValueXDelegate; // 0x110
	FDelegate ValueYDelegate; // 0x120
	FSynth2DSliderStyle WidgetStyle; // 0x130
	FLinearColor SliderHandleColor; // 0x3e8
	bool IndentHandle; // 0x3f8
	bool Locked; // 0x3f9
	float StepSize; // 0x3fc
	bool IsFocusable; // 0x400
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438
	FMulticastInlineDelegate OnValueChangedX; // 0x448
	FMulticastInlineDelegate OnValueChangedY; // 0x458
};

struct UPaperTileMap : UObject {
	int32_t MapWidth; // 0x28
	int32_t MapHeight; // 0x2c
	int32_t TileWidth; // 0x30
	int32_t TileHeight; // 0x34
	float PixelsPerUnrealUnit; // 0x38
	float SeparationPerTileX; // 0x3c
	float SeparationPerTileY; // 0x40
	float SeparationPerLayer; // 0x44
	TSoftObjectPtr<UPaperTileSet> SelectedTileSet; // 0x48
	UMaterialInterface* Material; // 0x70
	TArray<UPaperTileLayer*> TileLayers; // 0x78
	float CollisionThickness; // 0x88
	ESpriteCollisionMode SpriteCollisionDomain; // 0x8c
	ETileMapProjectionMode ProjectionMode; // 0x8d
	int32_t HexSideLength; // 0x90
	UBodySetup* BodySetup; // 0x98
	int32_t LayerNameIndex; // 0xa0
};

struct UYRankedSeasonsDataManager : UObject {
	FMulticastInlineDelegate OnTopPlayersPastSeasonsUpdatedEvent; // 0x28
	FMulticastInlineDelegate OnTopPlayersActiveRankedSeasonDataUpdatedEvent; // 0x38
	FMulticastInlineDelegate OnLocalPlayerAndFriendsActiveRankedSeasonDataUpdatedEvent; // 0x48
	TArray<EYMatchmakeGameModeType> m_supportedGameModes; // 0x58
};

struct UMaterialExpressionSign : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct AYHealthTestActor : AActor {
	UYHealthComponent* m_healthComponent; // 0x240
	UYDamageComponent* m_damageableComponent; // 0x248
};

struct UPhononSourceComponent : USceneComponent {
	float BakingRadius; // 0x1f8
	FName UniqueIdentifier; // 0x1fc
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct UYBackendInventoryModel : UObject {
	FMulticastInlineDelegate OnInitialized; // 0x28
	FMulticastInlineDelegate OnInventoryStateChanged; // 0x38
	FString m_userId; // 0x48
	int32_t m_status; // 0x58
	FYPlayerInventory m_backendRawInventory; // 0x60
	FYInventorySnapshot m_data; // 0x78
};

struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	FNiagaraPlatformSet Platforms; // 0x38
};

struct UYWidget_SeasonOverview : UYWidget {
	FMulticastInlineDelegate OnRewardItemClicked; // 0x2c8
	FMulticastInlineDelegate OnRewardItemHovered; // 0x2d8
	FMulticastInlineDelegate OnPurchaseSeasonPass; // 0x2e8
	FMulticastInlineDelegate OnPurchaseSeasonLevel; // 0x2f8
	UYWidget_ItemContainer* m_itemInfoDetailContainer; // 0x308
	UYWidget_ImageBase* m_seasonLogoImage; // 0x310
};

struct UBlendSpaceBase : UAnimationAsset {
	bool bRotationBlendInMeshSpace; // 0x88
	float AnimLength; // 0x8c
	FInterpolationParameter InterpolationParam[0x3]; // 0x90
	float TargetWeightInterpolationSpeedPerSec; // 0xa8
	ENotifyTriggerMode NotifyTriggerMode; // 0xac
	TArray<FPerBoneInterpolation> PerBoneBlend; // 0xb0
	int32_t SampleIndexWithMarkers; // 0xc0
	TArray<FBlendSample> SampleData; // 0xc8
	TArray<FEditorElement> GridSamples; // 0xd8
	FBlendParameter BlendParameters[0x3]; // 0xe8
};

struct UMovementComponent : UActorComponent {
	USceneComponent* UpdatedComponent; // 0xb0
	UPrimitiveComponent* UpdatedPrimitive; // 0xb8
	FVector Velocity; // 0xc4
	FVector PlaneConstraintNormal; // 0xd0
	FVector PlaneConstraintOrigin; // 0xdc
	char bUpdateOnlyIfRendered : 1; // 0xe8
	char bAutoUpdateTickRegistration : 1; // 0xe8
	char bTickBeforeOwner : 1; // 0xe8
	char bAutoRegisterUpdatedComponent : 1; // 0xe8
	char bConstrainToPlane : 1; // 0xe8
	char bSnapToPlaneAtStart : 1; // 0xe8
	char bAutoRegisterPhysicsVolumeUpdates : 1; // 0xe8
	char bComponentShouldUpdatePhysicsVolume : 1; // 0xe8
	char m_disableCharacterMovementUpdate : 1; // 0xe9
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0xec
};

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0xd8
	int32_t FirstResourceMemMip; // 0xdc
	char bTemporarilyDisableStreaming : 1; // 0xe0
	TextureAddress AddressX; // 0xe1
	TextureAddress AddressY; // 0xe2
	FIntPoint ImportedSize; // 0xe4
};

struct USoundEffectSourcePresetChain : UObject {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct UWBP_RadialSelection_Panel_C : UYWidget_CommWheel {
	FPointerToUberGraphFrame UberGraphFrame; // 0x330
	UWidgetAnimation* WidgetIn_Anim; // 0x338
	UImage* Gfx_Backer_DarkMain_2; // 0x340
	UImage* Gfx_Backer_Light; // 0x348
	UImage* Gfx_Backer_Light_2; // 0x350
	UImage* Gfx_Backer_Light_3; // 0x358
	UImage* Gfx_Friend; // 0x360
	UImage* Gfx_HeaderBacker; // 0x368
	UImage* Gfx_HeaderSecondaryBacker; // 0x370
	UImage* Gfx_Ring_DarkGlow_2; // 0x378
	UImage* Gfx_Ring_DarkGlow_3; // 0x380
	UImage* Gfx_Squadmate; // 0x388
	UOverlay* HeaderContainer; // 0x390
	UImage* Image; // 0x398
	UImage* Image_2; // 0x3a0
	UImage* Image_3; // 0x3a8
	UImage* Image_4; // 0x3b0
	UImage* Image_5; // 0x3b8
	UImage* Image_6; // 0x3c0
	UImage* Image_7; // 0x3c8
	UImage* Image_370; // 0x3d0
	USizeBox* SizeBox_Friend; // 0x3d8
	USizeBox* SizeBox_Squadmate; // 0x3e0
	UTextBlock* Txt_Title; // 0x3e8
	bool IsSocialWheel; // 0x3f0
};

struct ADatasmithSceneActor : AActor {
	UDatasmithScene* Scene; // 0x240
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x248
};

struct UMapMarker_Vehicle_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* Warning; // 0x2e8
	UImage* m_iconImage; // 0x2f0
	bool CanGetFinalUpdate; // 0x2f8
	bool ApplyFinalUpdate; // 0x2f9
	bool IsOwnedByLocalPlayer; // 0x2fa
	bool IsOwnedByTeamMateOfLocalPlayer; // 0x2fb
	bool WasPreviouslyOwnedByLocalPlayer; // 0x2fc
	bool WasPreviouslyOwnedByTeamMateOfLocalPlayer; // 0x2fd
	APlayerState* LocalPlayerState; // 0x300
};

struct UYControllerCustomizationRotationComponent : UActorComponent {
	FMulticastInlineDelegate OnRotationDeltaDelegate; // 0xb0
	FMulticastInlineDelegate OnRotationResetDelegate; // 0xc0
};

struct UGameMapsSettings : UObject {
	FString LocalMapOptions; // 0x28
	FSoftObjectPath TransitionMap; // 0x38
	bool bUseSplitscreen; // 0x50
	ETwoPlayerSplitScreenType TwoPlayerSplitscreenLayout; // 0x51
	EThreePlayerSplitScreenType ThreePlayerSplitscreenLayout; // 0x52
	EFourPlayerSplitScreenType FourPlayerSplitscreenLayout; // 0x53
	bool bOffsetPlayerGamepadIds; // 0x54
	FSoftClassPath GameInstanceClass; // 0x58
	FSoftObjectPath GameDefaultMap; // 0x70
	FSoftObjectPath ServerDefaultMap; // 0x88
	FSoftClassPath GlobalDefaultGameMode; // 0xa0
	FSoftClassPath GlobalDefaultServerGameMode; // 0xb8
	TArray<FGameModeName> GameModeMapPrefixes; // 0xd0
	TArray<FGameModeName> GameModeClassAliases; // 0xe0
};

struct UItemComponent_TextOfferPrice_WBP_C : UYWidget_ItemComponentTextOfferPrice {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308
	UYTextBlock* associatedOffersYTextBlock; // 0x310
	UHorizontalBox* purchasedHorizontalBox; // 0x318
	UYTextBlock* unavailableReasonYTextBlock; // 0x320
	UYTextBlock* unavailableSeparatorYTextBlock; // 0x328
	UYTextBlock* unavailableYTextBlock; // 0x330
	bool displayPurchasedText; // 0x338
	bool displayUnavailableText; // 0x339
	bool displayUnavailableReasonText; // 0x33a
	bool displayAssociatedOffers; // 0x33b
};

struct AWaterBodyOcean : AWaterBody {
	UOceanGenerator* OceanGenerator; // 0xe00
	FVector CollisionExtents; // 0xe08
	float HeightOffset; // 0xe14
};

struct ARectLight : ALight {
	URectLightComponent* RectLightComponent; // 0x250
};

struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
	char bOverrideFormat : 1; // 0x119
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170
};

struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct UMovieSceneCaptureProtocolBase : UObject {
	EMovieSceneCaptureProtocolState State; // 0x50
};

struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; // 0x240
	float SeverePacketLossThreshold; // 0x244
	int32_t BadPingThreshold; // 0x248
	int32_t SeverePingThreshold; // 0x24c
	int32_t AdjustedNetSpeed; // 0x250
	float LastNetSpeedUpdateTime; // 0x254
	int32_t TotalNetBandwidth; // 0x258
	int32_t MinDynamicBandwidth; // 0x25c
	int32_t MaxDynamicBandwidth; // 0x260
	char bIsStandbyCheckingEnabled : 1; // 0x264
	char bHasStandbyCheatTriggered : 1; // 0x264
	float StandbyRxCheatTime; // 0x268
	float StandbyTxCheatTime; // 0x26c
	float PercentMissingForRxStandby; // 0x270
	float PercentMissingForTxStandby; // 0x274
	float PercentForBadPing; // 0x278
	float JoinInProgressStandbyWaitTime; // 0x27c
	float MoveRepSize; // 0x280
	float MAXPOSITIONERRORSQUARED; // 0x284
	float MAXNEARZEROVELOCITYSQUARED; // 0x288
	float CLIENTADJUSTUPDATECOST; // 0x28c
	float MAXCLIENTUPDATEINTERVAL; // 0x290
	float MaxClientForcedUpdateDuration; // 0x294
	float ServerForcedUpdateHitchThreshold; // 0x298
	float ServerForcedUpdateHitchCooldown; // 0x29c
	float MaxMoveDeltaTime; // 0x2a0
	float MaxClientSmoothingDeltaTime; // 0x2a4
	float ClientNetSendMoveDeltaTime; // 0x2a8
	float ClientNetSendMoveDeltaTimeThrottled; // 0x2ac
	float ClientNetSendMoveDeltaTimeStationary; // 0x2b0
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x2b4
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x2b8
	bool ClientAuthorativePosition; // 0x2bc
	float ClientErrorUpdateRateLimit; // 0x2c0
	float ClientNetCamUpdateDeltaTime; // 0x2c4
	float ClientNetCamUpdatePositionLimit; // 0x2c8
	bool bMovementTimeDiscrepancyDetection; // 0x2cc
	bool bMovementTimeDiscrepancyResolution; // 0x2cd
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2d0
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2d4
	float MovementTimeDiscrepancyResolutionRate; // 0x2d8
	float MovementTimeDiscrepancyDriftAllowance; // 0x2dc
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2e0
	bool bUseDistanceBasedRelevancy; // 0x2e1
};

struct UYWidget_SetItemOverview : UYWidget {
	UYWidget_SetItemList* m_fullInventoryList; // 0x2c0
	UYWidget_InventoryItemDetail* m_itemDetail; // 0x2c8
	bool m_isDetail; // 0x2d0
};

struct UYPlayerMapMarkerData : UYMapMarkerData {
	bool m_isDebugEnabled; // 0x148
	bool m_isCloaked; // 0x149
	AActor* m_associatedPlayerState; // 0x150
};

struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UYMatchScreenHUD : UYScreenBase {
	UYScreenBase* m_endOfMatchHUDBP; // 0xb0
	UYScreenBase* m_spectateHUDBP; // 0xb8
	float m_openSpectateScreenDelay; // 0xc0
	float m_openEndOfMatchScreenDelay; // 0xc4
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct UYSocialManager : UObject {
	TMap<FString, FYOutpostFriendInfo> m_socialEntries; // 0x28
	TMap<EYFriendState, FYPlayerActionHistoryData> m_actionHistoryData; // 0x78
	FMulticastInlineDelegate OnPlayfabFriendsUpdated; // 0xc8
	TMap<FString, FYPlayFabFriendWithState> m_playFabFriends; // 0xd8
	TArray<FYPlayFabFriendWithState> m_inboundFriendRequests; // 0x128
	TArray<FYPlayFabFriendWithState> m_outboundFriendRequests; // 0x138
	FMulticastInlineDelegate OnPendingFriendRequestsResponse; // 0x148
	FMulticastInlineDelegate OnSocialEntriesUpdated; // 0x158
	FMulticastInlineDelegate OnUserSearchResponse; // 0x168
	FMulticastInlineDelegate OnRecentPlayerUpdated; // 0x178
	FMulticastInlineDelegate OnFriendActionExecuted; // 0x188
	FMulticastInlineDelegate OnProspectorLevelDataCalculated; // 0x198
	bool m_recievedInternalFriendListOnce; // 0x320
	bool m_recievedEGSFriendListOnce; // 0x321
	bool m_automaticImportPlatformFriends; // 0x322
	FYProspectorLevelData m_prospectorLevelData; // 0x324
	FYPlayfabUserAccountInfo m_searchedUser; // 0x338
	FYOutpostFriendInfo m_localUserEntry; // 0x358
};

struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UVolumetricCloudComponent : USceneComponent {
	float LayerBottomAltitude; // 0x1f8
	float LayerHeight; // 0x1fc
	float TracingStartMaxDistance; // 0x200
	float TracingMaxDistance; // 0x204
	float PlanetRadius; // 0x208
	FColor GroundAlbedo; // 0x20c
	UMaterialInterface* Material; // 0x210
	char bUsePerSampleAtmosphericLightTransmittance : 1; // 0x218
	float SkyLightCloudBottomOcclusion; // 0x21c
	float ViewSampleCountScale; // 0x220
	float ReflectionSampleCountScale; // 0x224
	float ShadowViewSampleCountScale; // 0x228
	float ShadowReflectionSampleCountScale; // 0x22c
	float ShadowTracingDistance; // 0x230
};

struct UCompositeCurveTable : UCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct UYActorWidgetController : UYWidgetController {
	AActor* m_actor; // 0x38
};

struct UYActorDamageNormalizationComponent : UActorComponent {
	TArray<AYAIController*> m_tokenHolderAIs; // 0xb0
	int32_t m_currentMaxTokenCount; // 0xc0
};

struct UARPointComponent : UARComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
};

struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x240
};

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct AYPlayerController_Match : AYPlayerController {
	FMulticastInlineDelegate OnPlayerLeftMatch; // 0x778
	FMulticastInlineDelegate OnInputBound; // 0x788
	FMulticastInlineDelegate BP_OnShowAdditionalHUD; // 0x798
	bool m_isShowingAdditioanlHud; // 0x7a8
	UYControllerInventoryInteractionComponent* m_inventoryInteractionComponent; // 0x7b0
	FMulticastInlineDelegate OnToggleAttachmentScreenEvent; // 0x7b8
	bool m_randomizeWeaponInventory; // 0x7c8
	bool m_randomizeAbilities; // 0x7c9
	UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent; // 0x7e8
	UYWeaponPlayerControllerInventoryComponent* m_inventoryWeaponController; // 0x7f0
	UYControllerInventoryAbilityComponent* m_abilityInventoryComponent; // 0x7f8
	UYPlayerInteractionComponent* m_playerInteractionComponent; // 0x800
	UYSpectateComponent* m_spectateComponent; // 0x808
	UYPlayerSocialComponent* m_socialComponent; // 0x810
	UYPlayerSocialStationComponent* m_socialStationComponent; // 0x818
	UYControllerStationComponent* m_stationComponent; // 0x820
	UYControllerStateInputComponent* m_inputControllerComponent; // 0x828
	TArray<FDataTableRowHandle> m_weaponToInitialize; // 0x830
	TArray<FDataTableRowHandle> m_deviceWeaponToInitialize; // 0x840
	TArray<FDataTableRowHandle> m_pistolHandles; // 0x850
	FDataTableRowHandle m_firstAbility; // 0x860
	FDataTableRowHandle m_secondAbility; // 0x870
	FDataTableRowHandle m_thirdAbility; // 0x880
	FDataTableRowHandle m_fourthAbility; // 0x890
	UYControllerReplicationComponent* m_controllerReplicationComponent; // 0x8b0
	UCurveFloat* m_damageOverTimeCurve; // 0x8b8
};

struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
};

struct UYWidget : UUserWidget {
	UYWidgetController* m_controllerClass; // 0x290
	ESlateVisibility m_shownVisibility; // 0x298
	ESlateVisibility m_hiddenVisibility; // 0x299
	bool m_shouldOverrideRootZLayer; // 0x29a
	EYRootZLayer m_rootZLayerOverride; // 0x29b
	UYWidgetController* m_controller; // 0x2a0
	UYScreenSystemRoot* m_screenSystemRoot; // 0x2b0
	bool m_shouldHandleInput; // 0x2b8
};

struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct UYScreenSystemRoot : UObject {
	FMulticastInlineDelegate OnLevelActorContainerSet; // 0x28
	UYWidgetManager* m_widgetManager; // 0x68
	UYScreenManager* m_screenManager; // 0x70
	UYHierarchicalStateMachine* m_stateMachine; // 0x78
	UYWidgetRootContainer* m_widgetRootContainer; // 0x80
	UYDialogContainerBase* m_dialogContainer; // 0x88
	UYLevelActorContainer* m_levelActorContainer; // 0x90
};

struct USystemTimeTimecodeProvider : UTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct AAIChar_Strider_BP_C : AAICharacter_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x9e8
	USphereComponent* WeaponCollision_1; // 0x9f0
};

struct UYWidget_ItemComponentModEntry : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnModSelected; // 0x300
	UYWidget_ItemContainer* m_setItemContainerWidget; // 0x310
	UYWidget_ItemContainer* m_emptyItemContainerWidget; // 0x318
	UTextBlock* m_modTypeText; // 0x320
	EYModificationSlotType m_modType; // 0x328
	int32_t m_modSlotIdx; // 0x32c
};

struct UWBP_Inventory_SplitItem_Modal_C : UYWidget_ItemContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x580
	UWidgetAnimation* ScreenIn_Anim; // 0x588
	UImage* Gfx_Backer_2; // 0x590
	UImage* Gfx_Deco_Corner_Bottom_Center; // 0x598
	UImage* Gfx_Deco_Corner_Bottom_Center_2; // 0x5a0
	UImage* Gfx_Grid_Helper; // 0x5a8
	UImage* Gfx_ItemPreview; // 0x5b0
	UWBP_Common_Btn_C* WBP_Common_Btn; // 0x5b8
	UWBP_Common_Btn_C* WBP_Common_Btn_2; // 0x5c0
	UWBP_Footer_C_Panel_C* WBP_Footer_C_Panel; // 0x5c8
	UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x5d0
	UWBP_Item_Preview_Btn_C* WBP_Item_Preview_Btn; // 0x5d8
	UWBP_Selector_Btn_C* WBP_Selector_Btn; // 0x5e0
	FYInventoryItem Item; // 0x5e8
	EYPlayerSetType TargetPlayerSetType; // 0x680
	int32_t OriginComponentId; // 0x684
	int32_t TargetComponentId; // 0x688
	bool ShouldDrop; // 0x68c
	FMulticastInlineDelegate OnExecuteItemSplitting; // 0x690
	FDataTableRowHandle StationQuickMenu; // 0x6a0
};

struct UWBP_Notification_Panel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeIn; // 0x268
	UVerticalBox* NotificationList; // 0x270
	UWBP_Notification_Item_C* WBP_Notification_Item; // 0x278
	UWBP_Notification_Item_C* WBP_Notification_Item_2; // 0x280
	UWBP_Notification_Item_C* WBP_Notification_Item_3; // 0x288
};

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40
	float G; // 0x44
};

struct USkyAtmosphereComponent : USceneComponent {
	ESkyAtmosphereTransformMode TransformMode; // 0x1f8
	float BottomRadius; // 0x1fc
	FColor GroundAlbedo; // 0x200
	float AtmosphereHeight; // 0x204
	float MultiScatteringFactor; // 0x208
	float TraceSampleCountScale; // 0x20c
	float RayleighScatteringScale; // 0x210
	FLinearColor RayleighScattering; // 0x214
	float RayleighExponentialDistribution; // 0x224
	float MieScatteringScale; // 0x228
	FLinearColor MieScattering; // 0x22c
	float MieAbsorptionScale; // 0x23c
	FLinearColor MieAbsorption; // 0x240
	float MieAnisotropy; // 0x250
	float MieExponentialDistribution; // 0x254
	float OtherAbsorptionScale; // 0x258
	FLinearColor OtherAbsorption; // 0x25c
	FTentDistribution OtherTentDistribution; // 0x26c
	FLinearColor SkyLuminanceFactor; // 0x278
	float AerialPespectiveViewDistanceScale; // 0x288
	float HeightFogContribution; // 0x28c
	float TransmittanceMinLightElevationAngle; // 0x290
	float AerialPerspectiveStartDepth; // 0x294
	FGuid bStaticLightingBuiltGUID; // 0x2bc
};

struct UPlayerBotRotateClockwiseTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UShopOfferPrice_WBP_C : UYWidget_ItemContainer {
	UItemComponent_TextOfferPrice_WBP_C* ItemComponent_TextOfferPrice_WBP; // 0x580
	URichTextBlock* RichTextBlock_47; // 0x588
};

struct USoundfieldEffectBase : UObject {
	USoundfieldEffectSettingsBase* Settings; // 0x28
};

struct UYWidget_LanguageSelection : UYWidget {
	FMulticastInlineDelegate OnLanguageSelectionChanged; // 0x2c0
	bool m_applyCultureChanges; // 0x2d0
	UYWidget_DropDown* m_dropDownWBP; // 0x2d8
};

struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct UWBP_Tutorial_Menu_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Escape_Anim; // 0x268
	UWidgetAnimation* Died_Anim; // 0x270
	UWidgetAnimation* ScreenIn_Anim; // 0x278
	UImage* Gfx_Backer; // 0x280
	UImage* Gfx_Exclaim; // 0x288
	UImage* Gfx_Vignette; // 0x290
	URichTextBlock* Txt_Rich_TutorialDetails; // 0x298
	UTextBlock* Txt_TutorialDetails; // 0x2a0
	UTextBlock* Txt_TutorialMain; // 0x2a8
	UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B; // 0x2b0
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x2b8
	UWBP_FlashFeedback_C* WBP_FlashFeedback; // 0x2c0
	UWBP_Generic_Modal_C* WBP_Generic_Modal; // 0x2c8
	FDataTableRowHandle SoundFX_ScreenIn; // 0x2d0
	FDataTableRowHandle SoundFX_Transition; // 0x2e0
};

struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve Curve; // 0x70
};

struct UYPlayerRewardsComponent : UActorComponent {
	TArray<FYRewardEntry> m_inMatchRewards; // 0xb0
	TArray<FYRewardEntry> m_matchResultRewards; // 0xc0
	float m_materialsMultiplier; // 0xd0
	float m_currenciesMultiplier; // 0xd4
	float m_factionProgressMutiplier; // 0xd8
	float m_seasonXPMutiplier; // 0xdc
	FMulticastInlineDelegate OnMatchResultRewardsUpdated; // 0xf0
};

struct AYTCCodeConventionActor : ACharacter {
	USkeletalMeshComponent* AdditionalMesh; // 0x4e0
};

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x270
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct URuntimeVirtualTexture : UObject {
	int32_t TileCount; // 0x28
	int32_t TileSize; // 0x2c
	int32_t TileBorderSize; // 0x30
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x34
	bool bCompressTextures; // 0x35
	bool bClearTextures; // 0x36
	bool bSinglePhysicalSpace; // 0x37
	bool bPrivateSpace; // 0x38
	bool bAdaptive; // 0x39
	bool bContinuousUpdate; // 0x3a
	int32_t RemoveLowMips; // 0x3c
	TextureGroup LODGroup; // 0x40
	int32_t Size; // 0x44
	URuntimeVirtualTextureStreamingProxy* StreamingTexture; // 0x48
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x278
	TArray<AActor*> OverrideInvisibleActors; // 0x288
	TArray<FName> OverrideInvisibleLevels; // 0x298
};

struct UYControllerCraftingComponent : UActorComponent {
	FMulticastInlineDelegate OnItemScrapped; // 0xc0
};

struct UWBP_Common_Empty_Btn_C : UWBP_ButtonBase_Btn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UWidgetAnimation* Release_Anim; // 0x3a0
	UWidgetAnimation* Press_Anim; // 0x3a8
	UWidgetAnimation* HighlightSheen_Anim; // 0x3b0
	UWidgetAnimation* Selected_Anim; // 0x3b8
	UWidgetAnimation* Idle_Anim; // 0x3c0
	UWidgetAnimation* HighlightBracket_Anim; // 0x3c8
	UImage* Gfx_DecoGradient; // 0x3d0
	UImage* Gfx_Edge; // 0x3d8
	UImage* Gfx_Fill; // 0x3e0
	UImage* Gfx_FillDisabled; // 0x3e8
	UImage* Gfx_Stroke; // 0x3f0
	UImage* Icn_Lock; // 0x3f8
	UOverlay* Layout_ButtonDisabled; // 0x400
	UNamedSlot* Layout_ContentSlot; // 0x408
	UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x410
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x418
	FLinearColor ButtonColorPrimary; // 0x420
	FLinearColor ButtonColorSecondary; // 0x430
	bool IsDisabled; // 0x440
};

struct UWaterSubsystem : UWorldSubsystem {
	FMulticastInlineDelegate OnCameraUnderwaterStateChanged; // 0x70
	FMulticastInlineDelegate OnWaterScalabilityChanged; // 0x80
	UStaticMesh* DefaultRiverMesh; // 0x90
	UStaticMesh* DefaultLakeMesh; // 0x98
	AWaterMeshActor* WaterMeshActor; // 0xa0
	UMaterialParameterCollection* MaterialParameterCollection; // 0xd0
};

struct UStaticMeshSimulationComponent : UActorComponent {
	bool Simulating; // 0xb8
	bool bNotifyCollisions; // 0xb9
	EObjectStateTypeEnum ObjectType; // 0xba
	float Mass; // 0xbc
	ECollisionTypeEnum CollisionType; // 0xc0
	EImplicitTypeEnum ImplicitType; // 0xc1
	int32_t MinLevelSetResolution; // 0xc4
	int32_t MaxLevelSetResolution; // 0xc8
	EInitialVelocityTypeEnum InitialVelocityType; // 0xcc
	FVector InitialLinearVelocity; // 0xd0
	FVector InitialAngularVelocity; // 0xdc
	float DamageThreshold; // 0xe8
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xf0
	AChaosSolverActor* ChaosSolverActor; // 0xf8
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x100
	TArray<UPrimitiveComponent*> SimulatedComponents; // 0x120
};

struct UYWidget_InboxTopMenu : UYWidget {
	UYWidget_NotificationNumber* m_notificationNumber; // 0x2c0
};

struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct UAnimNotifyState_RotationControl_C : UAnimNotifyState {
	float RotationRateYawOverride; // 0x30
	bool AllowRotation; // 0x34
};

struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct UYBugReporter : UObject {
	FString LogFilePath; // 0x70
	FString ScreenshotFilePath; // 0x80
	TArray<FString> CurrentBugReportFiles; // 0x90
	FString JiraURL; // 0xa0
	FMulticastInlineDelegate OnJiraTicketCreatedEvent; // 0xb0
	FMulticastInlineDelegate OnInitializingBugReport; // 0xc0
	FString AuthKey; // 0xd0
};

struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	EFieldResolutionType ResolutionType; // 0xb0
};

struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct AMapAreaLocation_BP_C : AYConditionLocationActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
	USceneComponent* DefaultSceneRoot; // 0x258
	TArray<ATriggerVolume*> LinkedTriggers; // 0x260
	bool ShowMapMarker; // 0x270
	bool AnnounceArea; // 0x271
	FText AreaName; // 0x278
	float TimeShowAreaAnnouncementOnHud; // 0x290
	bool IsAlreadyAnnounced; // 0x294
};

struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UBaseBrushTool : UMeshSurfacePointTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x190
	UBrushStampIndicator* BrushStampIndicator; // 0x1b8
};

struct UPlayerBotMoveToInteractibleTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	int32_t counter; // 0xb0
	AActor* Owner; // 0xb8
	FName InteractTarget; // 0xc0
	FName IsCombatTargetClose; // 0xc8
	UYObjectInteractionComponent* interactComponent; // 0xd0
	FName TimeStampNoWaypoint; // 0xd8
	AActor* ownerActor; // 0xe0
	APRO_PlayerController_C* PROPlayerController; // 0xe8
	AActor* InteractTargetActor; // 0xf0
	FYDealtDamageData NewVar_1; // 0xf8
};

struct AYProjectile_Rocket_BP_C : AYProjectile_BP_C {
	UAudioComponent* Audio_Rocket; // 0x3a0
};

struct UStreamableRenderAsset : UObject {
	double ForceMipLevelsToBeResidentTimestamp; // 0x40
	int32_t NumCinematicMipLevels; // 0x48
	int32_t StreamingIndex; // 0x4c
	int32_t CachedCombinedLODBias; // 0x50
	char NeverStream : 1; // 0x54
	char bGlobalForceMipLevelsToBeResident : 1; // 0x54
	char bHasStreamingUpdatePending : 1; // 0x54
	char bForceMiplevelsToBeResident : 1; // 0x54
	char bIgnoreStreamingMipBias : 1; // 0x54
	char bUseCinematicMipLevels : 1; // 0x54
};

struct UYWidget_SeasonCategories : UYWidget {
	FMulticastInlineDelegate OnCategorySelected; // 0x2c0
	TArray<EYSeasonCategory> m_supportedCategories; // 0x2d0
	UYWidget_ItemCategoryEntry* m_selectedItemCategory; // 0x2e0
	UYWidget_ItemCategoryEntry* m_fortunaPassCategoryEntry; // 0x2e8
	UYWidget_ItemCategoryEntry* m_seasonalChallengesCategoryEntry; // 0x2f0
	UYWidget_ItemCategoryEntry* m_dailyWeeklyChallengesCategoryEntry; // 0x2f8
};

struct AYGameModeBase : AGameModeBase {
	bool m_enableReplicationGraph; // 0x2e8
	TArray<FYPlayerSlot> m_playerSlots; // 0x2f0
	TMap<FString, FString> m_playerIdToSquadId; // 0x308
};

struct UVRNotificationsComponent : UActorComponent {
	FMulticastInlineDelegate HMDTrackingInitializingAndNeedsHMDToBeTrackedDelegate; // 0xb0
	FMulticastInlineDelegate HMDTrackingInitializedDelegate; // 0xc0
	FMulticastInlineDelegate HMDRecenteredDelegate; // 0xd0
	FMulticastInlineDelegate HMDLostDelegate; // 0xe0
	FMulticastInlineDelegate HMDReconnectedDelegate; // 0xf0
	FMulticastInlineDelegate HMDConnectCanceledDelegate; // 0x100
	FMulticastInlineDelegate HMDPutOnHeadDelegate; // 0x110
	FMulticastInlineDelegate HMDRemovedFromHeadDelegate; // 0x120
	FMulticastInlineDelegate VRControllerRecenteredDelegate; // 0x130
};

struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UYAIUpdateManager : UActorComponent {
	TArray<UYAIAggroComponent*> m_aiAggroComponents; // 0xb0
};

struct UBTDecorator_CompareBBEntries : UBTDecorator {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct USignificanceManager : UObject {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct ULocalLightComponent : ULightComponent {
	ELightUnits IntensityUnits; // 0x328
	float Radius; // 0x32c
	float AttenuationRadius; // 0x330
	FLightmassPointLightSettings LightmassSettings; // 0x334
};

struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x278
	int32_t Priority; // 0x27c
	float FluidFriction; // 0x280
	char bWaterVolume : 1; // 0x284
	char bPhysicsOnContact : 1; // 0x284
};

struct UYBTDecorator_DoesPathExist : UBTDecorator_DoesPathExist {
	float m_maxPathLength; // 0xc8
};

struct UMovieScene2DTransformSection : UMovieSceneSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	FIntPoint Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe0
	char bOverrideFormat : 1; // 0xe1
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108
};

struct UMaterialExpressionCustom : UMaterialExpression {
	FString code; // 0x40
	ECustomMaterialOutputType OutputType; // 0x50
	FString Description; // 0x58
	TArray<FCustomInput> Inputs; // 0x68
	TArray<FCustomOutput> AdditionalOutputs; // 0x78
	TArray<FCustomDefine> AdditionalDefines; // 0x88
	TArray<FString> IncludeFilePaths; // 0x98
};

struct UYPlayerCharacterEffortsComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FDataTableRowHandle Default_Efforts_Row; // 0xb8
	FST_EffortDataTableRow CurrentLoadedEffortRow; // 0xc8
	float HeavyDamageTreshold; // 0x118
	bool bPrintDebug?; // 0x11c
	float maxStamina; // 0x120
	float MaxHealth; // 0x124
	float PrevHealth; // 0x128
	float PrevStamina; // 0x12c
	TArray<EN_EffortTypes> DisabledEffortTypes; // 0x130
	TArray<FDataTableRowHandle> ThrowableAbilities; // 0x140
	bool WentLowStamina; // 0x150
	float RequiredDiff; // 0x154
	bool WentLowHealth; // 0x158
	UYStaminaComponent* StaminaComp; // 0x160
	UAudioComponent* StaminaAudioComp; // 0x168
	float StaminaBreathThreshold; // 0x170
	USoundBase* SFX_Female_StaminaLow; // 0x178
	USoundBase* SFX_Male_StaminaLow; // 0x180
	float MediumDamageTreshold; // 0x188
};

struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct UWaterSplineComponent : USplineComponent {
	FWaterSplineCurveDefaults WaterSplineDefaults; // 0x538
	FWaterSplineCurveDefaults PreviousWaterSplineDefaults; // 0x548
};

struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct UInAppPurchaseCallbackProxy2 : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct AYPodActor : AActor {
	bool m_startedIntro; // 0x244
	bool m_introFinished; // 0x245
	FMulticastInlineDelegate OnIntroSequenceFinished; // 0x248
	EYPodSpawningTypeContext m_spawnContext; // 0x258
	UYDataTableRowAssociationComponent* m_rowAssociationComponent; // 0x260
	FMulticastInlineDelegate OnSpawnContextAssigned; // 0x268
	float m_despawnCheckDelay; // 0x280
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct UPlayFabServerAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x8c8
	UPlayFabJsonObject* RequestJsonObj; // 0x8d0
	UPlayFabJsonObject* ResponseJsonObj; // 0x8d8
};

struct APrefabDebugActor : AActor {
	AActor* Actor; // 0x240
	TArray<char> ActorData; // 0x248
};

struct UPlayerBotTPInRangeTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	int32_t counter; // 0xb0
	AActor* Owner; // 0xb8
	FName combatTarget; // 0xc0
	float ClosestDist; // 0xc8
	AActor* ClosestActor; // 0xd0
	FString debugStr; // 0xd8
	FName TimeStampLastTP; // 0xe8
	float TimeToTP; // 0xf0
	float InRange; // 0xf4
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct UListView : UListViewBase {
	EOrientation Orientation; // 0x2d8
	ESelectionMode SelectionMode; // 0x2d9
	EConsumeMouseWheel ConsumeMouseWheel; // 0x2da
	bool bClearSelectionOnClick; // 0x2db
	bool bIsFocusable; // 0x2dc
	float EntrySpacing; // 0x2e0
	bool bReturnFocusToSelection; // 0x2e4
	TArray<UObject*> ListItems; // 0x2e8
	FMulticastInlineDelegate BP_OnEntryInitialized; // 0x308
	FMulticastInlineDelegate BP_OnItemClicked; // 0x318
	FMulticastInlineDelegate BP_OnItemDoubleClicked; // 0x328
	FMulticastInlineDelegate BP_OnItemIsHoveredChanged; // 0x338
	FMulticastInlineDelegate BP_OnItemSelectionChanged; // 0x348
	FMulticastInlineDelegate BP_OnItemScrolledIntoView; // 0x358
};

struct UYWidget_UserList : UYWidget {
	UYWidget_ChatUserMenu* m_contextMenu; // 0x2c0
	UYWidget_UserEntry* m_entryWBP; // 0x2c8
};

struct UFont : UObject {
	EFontCacheType FontCacheType; // 0x30
	TArray<FFontCharacter> Characters; // 0x38
	TArray<UTexture2D*> Textures; // 0x48
	int32_t IsRemapped; // 0x58
	float EmScale; // 0x5c
	float Ascent; // 0x60
	float Descent; // 0x64
	float Leading; // 0x68
	int32_t Kerning; // 0x6c
	FFontImportOptionsData ImportOptions; // 0x70
	int32_t NumCharacters; // 0x120
	TArray<int32_t> MaxCharHeight; // 0x128
	float ScalingFactor; // 0x138
	int32_t LegacyFontSize; // 0x13c
	FName LegacyFontName; // 0x140
	FCompositeFont CompositeFont; // 0x148
};

struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	TArray<int32_t> IntData; // 0x50
};

struct UYActorWidget : UYWidget {
	UCanvasPanel* m_offscreenCanvasPanel; // 0x2c0
	UCanvasPanel* m_offscreenRotationContainer; // 0x2c8
	bool m_offScreenArrowEnabled; // 0x2d0
	UYActorWidgetController* m_actorWidgetController; // 0x2d8
	AActor* m_actor; // 0x2e0
	FYActorUIWidgetData m_widgetData; // 0x2e8
};

struct UYAITokenComponent : UActorComponent {
	bool m_hasDamageTokenForCurrentTarget; // 0xb0
};

struct UUI_GenericChat_WBP_C : UYWidget_Chat {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc48
	UWidgetAnimation* FadeIn; // 0xc50
	UImage* ChatInputBackgroundImage; // 0xc58
	UImage* DividerBottom; // 0xc60
	UImage* DividerTop; // 0xc68
	FVector2D MinSizeOverride; // 0xc70
};

struct UGizmoAxisTranslationParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Parameter; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurTranslationAxis; // 0xbc
	FVector CurTranslationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct UBTTask_PlayScanAnimation_C : UYBTTask_PlayAnimation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110
};

struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
};

struct USplineComponent : UPrimitiveComponent {
	FSplineCurves SplineCurves; // 0x440
	FInterpCurveVector SplineInfo; // 0x4b0
	FInterpCurveQuat SplineRotInfo; // 0x4c8
	FInterpCurveVector SplineScaleInfo; // 0x4e0
	FInterpCurveFloat SplineReparamTable; // 0x4f8
	bool bAllowSplineEditingPerInstance; // 0x510
	int32_t ReparamStepsPerSegment; // 0x514
	float Duration; // 0x518
	bool bStationaryEndpoints; // 0x51c
	bool bSplineHasBeenEdited; // 0x51d
	bool bModifiedByConstructionScript; // 0x51e
	bool bInputSplinePointsToConstructionScript; // 0x51f
	bool bDrawDebug; // 0x520
	bool bClosedLoop; // 0x521
	bool bLoopPositionOverride; // 0x522
	float LoopPosition; // 0x524
	FVector DefaultUpVector; // 0x528
};

struct UIntSerialization : UObject {
	uint16_t UnsignedInt16Variable; // 0x28
	uint32_t UnsignedInt32Variable; // 0x2c
	uint64_t UnsignedInt64Variable; // 0x30
	int8_t SignedInt8Variable; // 0x38
	int16_t SignedInt16Variable; // 0x3a
	int64_t SignedInt64Variable; // 0x40
	char UnsignedInt8Variable; // 0x48
	int32_t SignedInt32Variable; // 0x4c
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct USoundSourceBus : USoundWave {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct UMyPluginObject : UObject {
	FMyPluginStruct MyStruct; // 0x28
};

struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x468
	bool bAttachEnd; // 0x469
	FComponentReference AttachEndTo; // 0x470
	FName AttachEndToSocketName; // 0x498
	FVector EndLocation; // 0x4a0
	float CableLength; // 0x4ac
	int32_t NumSegments; // 0x4b0
	float SubstepTime; // 0x4b4
	int32_t SolverIterations; // 0x4b8
	bool bEnableStiffness; // 0x4bc
	bool bUseSubstepping; // 0x4bd
	bool bSkipCableUpdateWhenNotVisible; // 0x4be
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4bf
	bool bEnableCollision; // 0x4c0
	float CollisionFriction; // 0x4c4
	FVector CableForce; // 0x4c8
	float CableGravityScale; // 0x4d4
	float CableWidth; // 0x4d8
	int32_t NumSides; // 0x4dc
	float TileMaterial; // 0x4e0
};

struct UYWidget_MenuTestScreen1Widget : UYWidget {
	UButton* m_openScreenButton; // 0x2c0
	UButton* m_closeScreenButton; // 0x2c8
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct UChaosClothConfig : UClothConfigCommon {
	EClothMassMode MassMode; // 0x28
	float UniformMass; // 0x2c
	float TotalMass; // 0x30
	float Density; // 0x34
	float MinPerParticleMass; // 0x38
	float EdgeStiffness; // 0x3c
	float BendingStiffness; // 0x40
	bool bUseBendingElements; // 0x44
	float AreaStiffness; // 0x48
	float VolumeStiffness; // 0x4c
	float StrainLimitingStiffness; // 0x50
	float LimitScale; // 0x54
	EChaosClothTetherMode TetherMode; // 0x58
	bool bUseGeodesicDistance; // 0x59
	float ShapeTargetStiffness; // 0x5c
	float CollisionThickness; // 0x60
	float FrictionCoefficient; // 0x64
	bool bUseSelfCollisions; // 0x68
	float SelfCollisionThickness; // 0x6c
	bool bUseLegacyBackstop; // 0x70
	float DampingCoefficient; // 0x74
	bool bUsePointBasedWindModel; // 0x78
	float DragCoefficient; // 0x7c
	float LiftCoefficient; // 0x80
	bool bUseGravityOverride; // 0x84
	float GravityScale; // 0x88
	FVector Gravity; // 0x8c
	float AnimDriveSpringStiffness; // 0x98
	FVector LinearVelocityScale; // 0x9c
	float AngularVelocityScale; // 0xa8
	bool bUseTetrahedralConstraints; // 0xac
	bool bUseThinShellVolumeConstraints; // 0xad
	bool bUseContinuousCollisionDetection; // 0xae
};

struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct UVectorField : UObject {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UYCharacterCustomizationModel : UObject {
	FMulticastInlineDelegate OnCharacterUpdated; // 0x28
	FYCharacterVanity m_characterVanity; // 0x38
	FYCharacterVanity m_pendingCharacterVanity; // 0xf8
	TMap<FName, FYCharacterVanity> m_persistentArchetypeToVanity; // 0x1b8
	TArray<FName> m_ownedArchetypes; // 0x208
};

struct USizeBox : UContentWidget {
	float WidthOverride; // 0x130
	float HeightOverride; // 0x134
	float MinDesiredWidth; // 0x138
	float MinDesiredHeight; // 0x13c
	float MaxDesiredWidth; // 0x140
	float MaxDesiredHeight; // 0x144
	float MinAspectRatio; // 0x148
	float MaxAspectRatio; // 0x14c
	char bOverride_WidthOverride : 1; // 0x150
	char bOverride_HeightOverride : 1; // 0x150
	char bOverride_MinDesiredWidth : 1; // 0x150
	char bOverride_MinDesiredHeight : 1; // 0x150
	char bOverride_MaxDesiredWidth : 1; // 0x150
	char bOverride_MaxDesiredHeight : 1; // 0x150
	char bOverride_MinAspectRatio : 1; // 0x150
	char bOverride_MaxAspectRatio : 1; // 0x150
};

struct UAnimMontage : UAnimCompositeBase {
	FAlphaBlend BlendIn; // 0xa8
	float BlendInTime; // 0xd8
	FAlphaBlend BlendOut; // 0xe0
	float BlendOutTime; // 0x110
	float BlendOutTriggerTime; // 0x114
	FName SyncGroup; // 0x118
	int32_t SyncSlotIndex; // 0x120
	FMarkerSyncData MarkerData; // 0x128
	TArray<FCompositeSection> CompositeSections; // 0x148
	TArray<FSlotAnimationTrack> SlotAnimTracks; // 0x158
	TArray<FBranchingPoint> BranchingPoints; // 0x168
	bool bEnableRootMotionTranslation; // 0x178
	bool bEnableRootMotionRotation; // 0x179
	bool bEnableAutoBlendOut; // 0x17a
	ERootMotionRootLock RootMotionRootLock; // 0x17b
	TArray<FBranchingPointMarker> BranchingPointMarkers; // 0x180
	TArray<int32_t> BranchingPointStateNotifyIndices; // 0x190
	FTimeStretchCurve TimeStretchCurve; // 0x1a0
	FName TimeStretchCurveName; // 0x1c8
};

struct UYPlayerEOSStatsComponent : UActorComponent {
	FMulticastInlineDelegate OnStatUpdatedForUserEvent; // 0xb0
	bool m_isInitialized; // 0xc0
};

struct UYGameInventoryManager : UObject {
	FMulticastInlineDelegate OnLocalPlayerCurrenciesDelegate; // 0x28
	FMulticastInlineDelegate OnCurrenciesUpdated; // 0x38
};

struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct UGerstnerWaterWaveGeneratorSpectrum : UGerstnerWaterWaveGeneratorBase {
	EWaveSpectrumType SpectrumType; // 0x28
	TArray<FGerstnerWaveOctave> Octaves; // 0x30
};

struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct UPlayerBotBuyGearsetTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct AYGameMode_Login_BP_C : AYGameModeBase {
	USceneComponent* DefaultSceneRoot; // 0x360
};

struct UBTService_ResetCheck_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FBlackboardKeySelector KeyWantsToReset; // 0xa0
	FBlackboardKeySelector KeyHomeLocation; // 0xc8
	FVector LastLocationChecked; // 0xf0
	float LastTimeChecked; // 0xfc
	float LastDistanceResultChecked; // 0x100
};

struct UActorSequenceComponent : UActorComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct UYDataTableRowAssociationComponent : UActorComponent {
	FDataTableRowHandle m_rowHandle; // 0xb0
	FMulticastInlineDelegate OnRowHandleChanged; // 0xc0
};

struct UYSoundNodeIsFriendly : USoundNode {
	bool m_previewPlayForceFriendly; // 0x48
};

struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x278
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38
};

struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
};

struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct UYWidget_OutpostSquadNotification : UYWidget {
	UTextBlock* m_messageText; // 0x308
	UButton* m_closeButton; // 0x310
	UButton* m_acceptSquadInviteButton; // 0x318
	UButton* m_declineSquadInviteButton; // 0x320
};

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x270
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xb0
};

struct UEnvQueryGenerator : UEnvQueryNode {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UYCharacterAbilityComponent : UActorComponent {
	FMulticastInlineDelegate OnCharacterAbilityConsumed; // 0xb0
	FMulticastInlineDelegate OnAbilityStateChanged; // 0xc0
	FMulticastInlineDelegate OnCooldownInputPressed; // 0xd0
	FString m_abilityItemID; // 0xe0
	FDataTableRowHandle m_abilityRowHandle; // 0xf0
	FDataTableRowHandle m_abilityActionRowHandle; // 0x108
	EYAbilityState m_abilityState; // 0x120
	UYPlayerCharacterStateComponent* m_characterStateComponent; // 0x130
	AYPlacementActor* m_placementActor; // 0x138
};

struct UYControllerCharacterCustomizationPersistentComponent : UActorComponent {
	FMulticastInlineDelegate OnNewCustomizationDataDelegate; // 0xb0
	FDataTableRowHandle m_pendingArchetypeSwitchRequestRow; // 0xc0
};

struct UMaterialExpressionStep : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x48
};

struct UWBP_Form_Menu_C : UYWidgetView_CustomerSupport {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a8
	UWidgetAnimation* ScreenIn_Anim; // 0x3b0
	UMultiLineEditableText* EditTxtMulti_Description; // 0x3b8
	UEditableTextBox* EditTxtSingle_Email; // 0x3c0
	UEditableTextBox* EditTxtSingle_PlayerName; // 0x3c8
	UImage* Gfx_Backer; // 0x3d0
	UImage* Gfx_BG_DarkColor; // 0x3d8
	UImage* Gfx_BG_LightColor; // 0x3e0
	UImage* Gfx_Grid_Helper; // 0x3e8
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x3f0
	UWBP_Common_Btn_C* WBP_Common_Btn_Cancel; // 0x3f8
	UWBP_Common_Btn_C* WBP_Common_Btn_Submit; // 0x400
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x408
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_ReportReason; // 0x410
	UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x418
	UWBP_Toast_C* WBP_Toast; // 0x420
	FText FailureMissingText; // 0x428
	FText FailureEmail; // 0x440
	TArray<FString> ReportReasonTypes; // 0x458
};

struct UYWidget_SetItem : UYWidget_ItemContainer {
	FMulticastInlineDelegate OnSetItemDetailView; // 0x580
	bool m_isSmallBagPreview; // 0x590
	FYInventoryItem m_inventoryItem; // 0x598
	EYPlayerSetType m_itemSlotType; // 0x630
};

struct ULandscapeGrassType : UObject {
	TArray<FGrassVariety> GrassVarieties; // 0x28
	char bEnableDensityScaling : 1; // 0x38
	UStaticMesh* GrassMesh; // 0x40
	float GrassDensity; // 0x48
	float PlacementJitter; // 0x4c
	int32_t StartCullDistance; // 0x50
	int32_t EndCullDistance; // 0x54
	bool RandomRotation; // 0x58
	bool AlignToSurface; // 0x59
};

struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct UYGameplayAttributesComponent : UActorComponent {
	FMulticastInlineDelegate GPAChangedDelegate; // 0xb0
	FMulticastInlineDelegate GPAModifierChangedEvent; // 0xc0
	TArray<FYGameplayAttributeModifier> m_activeOverrideModifiers; // 0xd0
	TArray<FYGameplayAttributeModifier> m_activePreAddModifiers; // 0xe0
	TArray<FYGameplayAttributeModifier> m_activeAddModifiers; // 0xf0
	TArray<FYGameplayAttributeModifier> m_activePostAddModifiers; // 0x100
};

struct ULightMapVirtualTexture2D : UTexture2D {
	TArray<int8_t> TypeToLayer; // 0x100
};

struct UUserDefinedStruct : UScriptStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UYWidget_DeveloperCredits : UYWidget {
	UScrollBox* m_creditsScrollBox; // 0x2c0
	float m_scrollingSpeed; // 0x2c8
	float m_fastScrollingMultiplier; // 0x2cc
};

struct UYStateCharacterCustomizationDataComponent : UActorComponent {
	FYActiveCustomizationData m_activeCustomizationData; // 0xb0
	FYActiveCustomizationData m_cachedLocalCreatedMesh; // 0xd0
	FMulticastInlineDelegate OnCustomizationSetDataUpdated; // 0xf0
	FMulticastInlineDelegate OnFinishedLoadingAssets; // 0x100
	TArray<UObject*> m_hardReferenceAssets; // 0x110
	USkeletalMesh* m_mergedSkeletalMesh; // 0x120
};

struct ASoakTestStationAutomationManager_BP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	AYPlayerController* YPlayerController; // 0x250
	bool automationRunning; // 0x258
	FString commandLine; // 0x260
	EYMatchmakingResult MatchamkingResult; // 0x270
	float MatchmakingWaitTimeout; // 0x274
};

struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	Beam2SourceTargetMethod TargetMethod; // 0x30
	FName targetName; // 0x34
	FRawDistributionVector Target; // 0x40
	char bTargetAbsolute : 1; // 0x88
	char bLockTarget : 1; // 0x88
	Beam2SourceTargetTangentMethod TargetTangentMethod; // 0x8c
	FRawDistributionVector TargetTangent; // 0x90
	char bLockTargetTangent : 1; // 0xd8
	FRawDistributionFloat TargetStrength; // 0xe0
	char bLockTargetStength : 1; // 0x110
	float LockRadius; // 0x114
};

struct UYLedgeClimbingComponent : UActorComponent {
	FMulticastInlineDelegate OnInternalClimbingStateChangedEvent; // 0xb0
	FMulticastInlineDelegate OnCooldownStateChangedEvent; // 0xc0
	FMulticastInlineDelegate OnCanClimbChangedEvent; // 0xd0
	UYPlayerMovementComponent* m_playerMovementComponent; // 0x168
	UYPlayerCharacterStateComponent* m_playerCharacterStateComponent; // 0x170
	UYFallingDamageComponent* m_fallingDamageComponent; // 0x178
	AYPlayerCharacter* m_ownerCharacter; // 0x180
	UCapsuleComponent* m_characterCapsuleComponent; // 0x188
};

struct UHLODProxy : UObject {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
};

struct UProjectileMovementComponent : UMovementComponent {
	float InitialSpeed; // 0xf0
	float MaxSpeed; // 0xf4
	char bRotationFollowsVelocity : 1; // 0xf8
	char bRotationRemainsVertical : 1; // 0xf8
	char bShouldBounce : 1; // 0xf8
	char bInitialVelocityInLocalSpace : 1; // 0xf8
	char bForceSubStepping : 1; // 0xf8
	char bSimulationEnabled : 1; // 0xf8
	char bSweepCollision : 1; // 0xf8
	char bIsHomingProjectile : 1; // 0xf8
	char bBounceAngleAffectsFriction : 1; // 0xf9
	char bIsSliding : 1; // 0xf9
	char bInterpMovement : 1; // 0xf9
	char bInterpRotation : 1; // 0xf9
	float PreviousHitTime; // 0xfc
	FVector PreviousHitNormal; // 0x100
	float ProjectileGravityScale; // 0x10c
	float Buoyancy; // 0x110
	float Bounciness; // 0x114
	float Friction; // 0x118
	float BounceVelocityStopSimulatingThreshold; // 0x11c
	float MinFrictionFraction; // 0x120
	FMulticastInlineDelegate OnProjectileBounce; // 0x128
	FMulticastInlineDelegate OnProjectileStop; // 0x138
	float HomingAccelerationMagnitude; // 0x148
	TWeakObjectPtr<USceneComponent> HomingTargetComponent; // 0x14c
	float MaxSimulationTimeStep; // 0x154
	int32_t MaxSimulationIterations; // 0x158
	int32_t BounceAdditionalIterations; // 0x15c
	float InterpLocationTime; // 0x160
	float InterpRotationTime; // 0x164
	float InterpLocationMaxLagDistance; // 0x168
	float InterpLocationSnapToTargetDistance; // 0x16c
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x40
};

struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct UWorld : UObject {
	ULevel* PersistentLevel; // 0x30
	UNetDriver* NetDriver; // 0x38
	ULineBatchComponent* LineBatcher; // 0x40
	ULineBatchComponent* PersistentLineBatcher; // 0x48
	ULineBatchComponent* ForegroundLineBatcher; // 0x50
	AGameNetworkManager* NetworkManager; // 0x58
	UPhysicsCollisionHandler* PhysicsCollisionHandler; // 0x60
	TArray<UObject*> ExtraReferencedObjects; // 0x68
	TArray<UObject*> PerModuleDataObjects; // 0x78
	TArray<ULevelStreaming*> StreamingLevels; // 0x88
	FStreamingLevelsToConsider StreamingLevelsToConsider; // 0x98
	FString StreamingLevelsPrefix; // 0xc0
	ULevel* CurrentLevelPendingVisibility; // 0xd0
	ULevel* CurrentLevelPendingInvisibility; // 0xd8
	UDemoNetDriver* DemoNetDriver; // 0xe0
	AParticleEventManager* MyParticleEventManager; // 0xe8
	APhysicsVolume* DefaultPhysicsVolume; // 0xf0
	char bAreConstraintsDirty : 1; // 0x10e
	UNavigationSystemBase* NavigationSystem; // 0x110
	AGameModeBase* AuthorityGameMode; // 0x118
	AGameStateBase* GameState; // 0x120
	UAISystemBase* AISystem; // 0x128
	UAvoidanceManager* AvoidanceManager; // 0x130
	TArray<ULevel*> Levels; // 0x138
	TArray<FLevelCollection> LevelCollections; // 0x148
	UGameInstance* OwningGameInstance; // 0x180
	TArray<UMaterialParameterCollectionInstance*> ParameterCollectionInstances; // 0x188
	UCanvas* CanvasForRenderingToTarget; // 0x198
	UCanvas* CanvasForDrawMaterialToRenderTarget; // 0x1a0
	TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync; // 0x1f8
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x248
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x258
	UWorldComposition* WorldComposition; // 0x5d8
	FWorldPSCPool PSCPool; // 0x668
};

struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UInterpToMovementComponent : UMovementComponent {
	float Duration; // 0xf0
	char bPauseOnImpact : 1; // 0xf4
	bool bSweep; // 0xf8
	ETeleportType TeleportType; // 0xf9
	EInterpToBehaviourType BehaviourType; // 0xfa
	bool bCheckIfStillInWorld; // 0xfb
	char bForceSubStepping : 1; // 0xfc
	FMulticastInlineDelegate OnInterpToReverse; // 0x100
	FMulticastInlineDelegate OnInterpToStop; // 0x110
	FMulticastInlineDelegate OnWaitBeginDelegate; // 0x120
	FMulticastInlineDelegate OnWaitEndDelegate; // 0x130
	FMulticastInlineDelegate OnResetDelegate; // 0x140
	float MaxSimulationTimeStep; // 0x150
	int32_t MaxSimulationIterations; // 0x154
	TArray<FInterpControlPoint> ControlPoints; // 0x158
};

struct UYWidget_ItemComponentTextType : UYWidget_ItemComponentBase {
	UTextBlock* m_typeText; // 0x300
};

struct UWBP_Toggle_Btn_C : UWBP_ButtonBase_Btn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UWidgetAnimation* HighlightSheen_Anim; // 0x3a0
	UWidgetAnimation* Selected_Anim; // 0x3a8
	UWidgetAnimation* Idle_Anim; // 0x3b0
	UWidgetAnimation* HighlightBracket_Anim; // 0x3b8
	UImage* Gfx_DecoGradient; // 0x3c0
	UImage* Gfx_Edge; // 0x3c8
	UImage* Gfx_Fill; // 0x3d0
	UImage* Gfx_SelectedFill; // 0x3d8
	UImage* Gfx_Stroke; // 0x3e0
	UImage* Icn_Selected; // 0x3e8
	UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x3f0
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x3f8
	FLinearColor ButtonColorPrimary; // 0x400
	FLinearColor ButtonColorSecondary; // 0x410
	bool Selected; // 0x420
};

struct UNotificationSocialEntry_WBP_C : UYWidget_Notification {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
	UWidgetAnimation* NotificationOut_Anim; // 0x3b8
	UWidgetAnimation* NotificationIn_Anim; // 0x3c0
	UYButton* closeButton; // 0x3c8
	UImage* Gfx_Backer; // 0x3d0
	UImage* Gfx_BackerHighlight; // 0x3d8
	UUI_ImageBase_WBP_C* Image; // 0x3e0
	URichTextBlock* messageText; // 0x3e8
};

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct URadialFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Radius; // 0xc0
	FVector Position; // 0xc4
	EFieldFalloffType Falloff; // 0xd0
};

struct UGizmoComponentAxisSource : UObject {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct UNetAnalyticsAggregatorConfig : UObject {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UDialogueVoice : UObject {
	EGrammaticalGender gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct UYPlayerQuarterManager : UObject {
	FMulticastInlineDelegate TechTreeNodesUpdated; // 0x28
	FMulticastInlineDelegate PlayerQuarterPurchaseFailure; // 0x38
	FMulticastInlineDelegate CustomItemsUpdated; // 0x48
	FMulticastInlineDelegate itemsRemoved; // 0x58
	FMulticastInlineDelegate CurrenciesUpdated; // 0x68
	FMulticastInlineDelegate PlayerQuartersLevelAvailable; // 0x78
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UGarbageCollectionSettings : UDeveloperSettings {
	float TimeBetweenPurgingPendingKillObjects; // 0x38
	char FlushStreamingOnGC : 1; // 0x3c
	char AllowParallelGC : 1; // 0x3c
	char IncrementalBeginDestroyEnabled : 1; // 0x3c
	char MultithreadedDestructionEnabled : 1; // 0x3c
	char CreateGCClusters : 1; // 0x3c
	char AssetClusteringEnabled : 1; // 0x3c
	char ActorClusteringEnabled : 1; // 0x3c
	char BlueprintClusteringEnabled : 1; // 0x3c
	char UseDisregardForGCOnDedicatedServers : 1; // 0x3d
	int32_t MinGCClusterSize; // 0x40
	int32_t NumRetriesBeforeForcingGC; // 0x44
	int32_t MaxObjectsNotConsideredByGC; // 0x48
	int32_t SizeOfPermanentObjectPool; // 0x4c
	int32_t MaxObjectsInGame; // 0x50
	int32_t MaxObjectsInEditor; // 0x54
};

struct UCameraShakeSourceComponent : USceneComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
};

struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UPriceGeneric_WBP_C : UYWidget_PriceGeneric {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UUI_ImageBase_WBP_C* CurrencyImage; // 0x2c8
	UYTextBlock* priceValueYTextBlock; // 0x2d0
	UTexture2D* softCurrencyTexture; // 0x2d8
	UTexture2D* hardCurrencyTexture; // 0x2e0
	EYCurrencyType debugCurrencyType; // 0x2e8
};

struct UAnimationDataSourceRegistry : UObject {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct UYWidget_PlayerCharacterPlate : UYWidget_ActorPlate {
	AYPlayerCharacter* m_associatedPlayerCharacter; // 0x3a8
	AYPlayerState* m_playerState; // 0x3b0
	UTextBlock* m_levelText; // 0x3b8
};

struct UMapMarkerPlayer_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* Anim_Ping; // 0x2e8
	UCanvasPanel* CanvasPanel_Base; // 0x2f0
	UImage* Gfx_Pulse; // 0x2f8
	UImage* m_markerIcon; // 0x300
	UOverlay* OverlayArrow; // 0x308
	UImage* Ping; // 0x310
	UUI_TeamInfo_WBP_C* UI_TeamInfo_WBP; // 0x318
	FSlateColor OwnPlayerColor; // 0x320
	FSlateColor FriendlyPlayerColor; // 0x348
	bool isLocalPlayer; // 0x370
	UYPlayerMapMarkerData* PlayerMapMarkerData; // 0x378
	AYPlayerState* AsoociatedYPlayerState; // 0x380
	FSlateColor EnemyPlayerColor; // 0x388
	float PlayPingAnimationTriggerTime; // 0x3b0
};

struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x1af0
};

struct UEnvQueryTest_Volume : UEnvQueryTest {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UYDebugFindDropLocationComponent : UActorComponent {
	TArray<FYFindDropLocationData> m_findDropLocationEvaulationData; // 0xb0
};

struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x588
	int32_t NumBuiltInstances; // 0x598
	FBox BuiltInstanceBounds; // 0x5a0
	FBox UnbuiltInstanceBounds; // 0x5bc
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x5d8
	char bEnableDensityScaling : 1; // 0x5e8
	int32_t OcclusionLayerNumNodes; // 0x5f0
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x5f4
	bool bDisableCollision; // 0x610
	int32_t InstanceCountToRender; // 0x614
};

struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct UYWidgetProvider_BugReporter : UYWidgetProvider {
	FString m_jiraURL; // 0x40
	FString m_issueType; // 0x50
	FString m_jiraProject; // 0x60
	FString m_newLine; // 0x70
	FString m_separator; // 0x80
};

struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
};

struct UActorComponent : UObject {
	FActorComponentTickFunction PrimaryComponentTick; // 0x30
	TArray<FName> ComponentTags; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
	int32_t UCSSerializationIndex; // 0x84
	char bNetAddressable : 1; // 0x88
	char bReplicates : 1; // 0x88
	char bAutoActivate : 1; // 0x89
	char bIsActive : 1; // 0x8a
	char bEditableWhenInherited : 1; // 0x8a
	char bCanEverAffectNavigation : 1; // 0x8a
	char bIsEditorOnly : 1; // 0x8a
	EComponentCreationMethod CreationMethod; // 0x8c
	FMulticastSparseDelegate OnComponentActivated; // 0x8d
	FMulticastSparseDelegate OnComponentDeactivated; // 0x8e
	TArray<FSimpleMemberReference> UCSModifiedProperties; // 0x90
};

struct UBTService_PlayBark_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	bool UseIdleBark; // 0xa0
	FYAIBarkAudioInfo BarkDataCached; // 0xa8
	float LastTimeBarked; // 0xc0
	float NextTimeAllowedToBark; // 0xc4
};

struct UParticleModuleBeamNoise : UParticleModuleBeamBase {
	char bLowFreq_Enabled : 1; // 0x30
	int32_t Frequency; // 0x34
	int32_t Frequency_LowRange; // 0x38
	FRawDistributionVector NoiseRange; // 0x40
	FRawDistributionFloat NoiseRangeScale; // 0x88
	char bNRScaleEmitterTime : 1; // 0xb8
	FRawDistributionVector NoiseSpeed; // 0xc0
	char bSmooth : 1; // 0x108
	float NoiseLockRadius; // 0x10c
	char bNoiseLock : 1; // 0x110
	char bOscillate : 1; // 0x110
	float NoiseLockTime; // 0x114
	float NoiseTension; // 0x118
	char bUseNoiseTangents : 1; // 0x11c
	FRawDistributionFloat NoiseTangentStrength; // 0x120
	int32_t NoiseTessellation; // 0x150
	char bTargetNoise : 1; // 0x154
	float FrequencyDistance; // 0x158
	char bApplyNoiseScale : 1; // 0x15c
	FRawDistributionFloat NoiseScale; // 0x160
};

struct UDialogueWave : UObject {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UEditableMesh : UObject {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UYWidget_FactionContract : UYWidget {
	FString m_contractId; // 0x2c8
	EYContractStatus m_currentContractStatus; // 0x2d8
	FMulticastInlineDelegate OnPressedAcceptButton; // 0x2e0
};

struct UMovieSceneByteSection : UMovieSceneSection {
	FMovieSceneByteChannel ByteCurve; // 0xe8
};

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	UMaterialParameterCollection* MPC; // 0x90
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct ASwitchActor : AActor {
	USceneComponent* SceneComponent; // 0x258
	int32_t LastSelectedOption; // 0x260
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate onSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UScrollBox : UPanelWidget {
	FScrollBoxStyle WidgetStyle; // 0x120
	FScrollBarStyle WidgetBarStyle; // 0x348
	USlateWidgetStyleAsset* Style; // 0x818
	USlateWidgetStyleAsset* BarStyle; // 0x820
	EOrientation Orientation; // 0x828
	ESlateVisibility ScrollBarVisibility; // 0x829
	EConsumeMouseWheel ConsumeMouseWheel; // 0x82a
	FVector2D ScrollbarThickness; // 0x82c
	FMargin ScrollbarPadding; // 0x834
	bool AlwaysShowScrollbar; // 0x844
	bool AlwaysShowScrollbarTrack; // 0x845
	bool AllowOverscroll; // 0x846
	bool bAnimateWheelScrolling; // 0x847
	EDescendantScrollDestination NavigationDestination; // 0x848
	float NavigationScrollPadding; // 0x84c
	EScrollWhenFocusChanges ScrollWhenFocusChanges; // 0x850
	bool bAllowRightClickDragScrolling; // 0x851
	float WheelScrollMultiplier; // 0x854
	FMulticastInlineDelegate OnUserScrolled; // 0x858
};

struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x2a0
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x2a8
};

struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct UYWidget_MatchRewards : UYWidget {
	UYWidget_EomFactionProgressPanel* m_factionProgressPanel; // 0x2c0
	UYWidget_EomRewardsPanel* m_matchResultsMaterialRewardsPanel; // 0x2c8
	UYWidget_EomRewardsPanel* m_InMatchRewardsPanel; // 0x2d0
	UYWidget_CurrencyRewardsPanel* m_currencyRewardsPanel; // 0x2d8
	UYWidget_ProspectorLevel* m_prospectorLevelRewardsPanel; // 0x2e0
	UTextBlock* m_noInMatchRewardsHint; // 0x2e8
	URichTextBlock* m_headlineRichText; // 0x2f0
	URichTextBlock* m_sublineRichText; // 0x2f8
};

struct UYWidget_LegalAgreements : UYWidget {
	FMulticastInlineDelegate OnLegalAgreementsAcceptedDelegate; // 0x2c0
	FMulticastInlineDelegate OnLegalAgreementsAnimatedOut; // 0x2d0
	FDataTableRowHandle m_audioAnimateIn; // 0x2e0
	FDataTableRowHandle m_audioAnimateOut; // 0x2f0
};

struct UYWidget_ItemComponentImage : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnComponentImageLoaded; // 0x300
	bool m_useLargeIcon; // 0x310
	UMaterialInterface* m_blueprintMaterial; // 0x318
};

struct UARFaceGeometry : UARTrackedGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct UGeometryCollection : UObject {
	TArray<FGeometryCollectionSource> GeometrySource; // 0x30
	TArray<UMaterialInterface*> Materials; // 0x40
	ECollisionTypeEnum CollisionType; // 0x50
	EImplicitTypeEnum ImplicitType; // 0x51
	int32_t MinLevelSetResolution; // 0x54
	int32_t MaxLevelSetResolution; // 0x58
	int32_t MinClusterLevelSetResolution; // 0x5c
	int32_t MaxClusterLevelSetResolution; // 0x60
	float CollisionObjectReductionPercentage; // 0x64
	bool bMassAsDensity; // 0x68
	float Mass; // 0x6c
	float MinimumMassClamp; // 0x70
	float CollisionParticlesFraction; // 0x74
	int32_t MaximumCollisionParticles; // 0x78
	TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0x80
	bool EnableRemovePiecesOnFracture; // 0x90
	TArray<UMaterialInterface*> RemoveOnFractureMaterials; // 0x98
	FGuid PersistentGuid; // 0xa8
	FGuid StateGuid; // 0xb8
	int32_t BoneSelectedMaterialIndex; // 0xc8
};

struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct UWBP_SelectionBracket_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Idle_Anim; // 0x268
	UImage* Gfx_CornerBracket_BL; // 0x270
	UImage* Gfx_CornerBracket_TR; // 0x278
	UImage* Gfx_CornerBracketShadow_BL; // 0x280
	UImage* Gfx_CornerBracketShadow_TR; // 0x288
};

struct UYHierarchicalStateBase : UObject {
	FMulticastInlineDelegate RequestStateChangeDelegate; // 0x28
	FMulticastInlineDelegate RequestStatePopDelegate; // 0x38
	FMulticastInlineDelegate StateExitedDelegate; // 0x48
	FMulticastInlineDelegate StateEnteredDelegate; // 0x58
	bool m_pushOnStack; // 0x68
	bool m_currentlyActive; // 0x69
};

struct UYDeadDropComponent : UActorComponent {
	FDataTableRowHandle m_deadDropLocationRowHandle; // 0xb0
	bool m_consumeAllItemsOnDeposit; // 0xc0
};

struct UYNotificationSettings : UDataAsset {
	TArray<EYNotifcationType> m_notificationsShowSocialDisabled; // 0x30
	TArray<EYNotifcationType> m_notificationsToDisregardMaximum; // 0x40
	int32_t m_maximumAmountOfNotifications; // 0x50
	int32_t m_maxNumbersToTrackRecentlyPlayed; // 0x54
	int32_t m_shrinkNumberRecentlyPlayed; // 0x58
	float m_minAllowedNewSearchTimeThreshold; // 0x5c
	TMap<EYFriendState, FYFriendActionMuteSettings> m_actionMuteSettings; // 0x60
};

struct UYCharacterCosmeticVisualizationComponent : UActorComponent {
	UYSkeletalMeshComponentFOV* m_cosmeticSecondaryWeaponMesh; // 0xb0
	UYSkeletalMeshComponentFOV* m_cosmeticMeleeMesh; // 0xb8
	FDataTableRowHandle m_equippedSecondaryWeapon; // 0xc0
	FMulticastInlineDelegate OnCosmeticStateChangedDelegate; // 0xd8
};

struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct AControlRigControlActor : AActor {
	AActor* ActorToTrack; // 0x240
	UControlRig* ControlRigClass; // 0x248
	bool bRefreshOnTick; // 0x250
	bool bIsSelectable; // 0x251
	UMaterialInterface* MaterialOverride; // 0x258
	FString ColorParameter; // 0x260
	bool bCastShadows; // 0x270
	USceneComponent* ActorRootComponent; // 0x278
	UControlRig* ControlRig; // 0x280
	TArray<FName> ControlNames; // 0x288
	TArray<FTransform> GizmoTransforms; // 0x298
	TArray<UStaticMeshComponent*> Components; // 0x2a8
	TArray<UMaterialInstanceDynamic*> Materials; // 0x2b8
	FName ColorParameterName; // 0x2c8
};

struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
};

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
};

struct UYAnimNotifyState_PlayLoopingSound : UAnimNotifyState {
	USoundBase* m_sound; // 0x30
	float m_fadeOutTime; // 0x38
};

struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UYControllerContractsBoardsDataComponent : UActorComponent {
	FMulticastInlineDelegate OnBackendContractStatusChangeResponseReceived; // 0xd0
};

struct UCommonBackground_WBP_C : UUserWidget {
	UImage* DarkBackground; // 0x260
};

struct UModalDialogOkCancelItem_WBP_C : UYWidget_ModalDialogOKCancelItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* animateIn; // 0x348
	UWidgetAnimation* AnimateOut; // 0x350
	UBorder* Border_1; // 0x358
	UCommonBackground_WBP_C* CommonBackround_WBP; // 0x360
	UImage* Image_12; // 0x368
	USpacer* Spacer_1; // 0x370
	USpacer* Spacer_2; // 0x378
};

struct UPlayerCharacterCombatAwarenessComponent_BP_C : UYPlayerCharacterAwarenessComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	AYPlayerCharacter* PlayerCharacterOwner; // 0xb8
	bool HasShield; // 0xc0
};

struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x80
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct USceneComponent : UActorComponent {
	TWeakObjectPtr<APhysicsVolume> PhysicsVolume; // 0xb8
	USceneComponent* AttachParent; // 0xc0
	FName AttachSocketName; // 0xc8
	TArray<USceneComponent*> AttachChildren; // 0xd0
	TArray<USceneComponent*> ClientAttachedChildren; // 0xe0
	FVector RelativeLocation; // 0x11c
	FRotator RelativeRotation; // 0x128
	FVector RelativeScale3D; // 0x134
	FVector ComponentVelocity; // 0x140
	char bComponentToWorldUpdated : 1; // 0x14c
	char bAbsoluteLocation : 1; // 0x14c
	char bAbsoluteRotation : 1; // 0x14c
	char bAbsoluteScale : 1; // 0x14c
	char bVisible : 1; // 0x14c
	char bShouldBeAttached : 1; // 0x14c
	char bShouldSnapLocationWhenAttached : 1; // 0x14c
	char bShouldSnapRotationWhenAttached : 1; // 0x14d
	char bShouldUpdatePhysicsVolume : 1; // 0x14d
	char bHiddenInGame : 1; // 0x14d
	char bBoundsChangeTriggersStreamingDataRebuild : 1; // 0x14d
	char bUseAttachParentBound : 1; // 0x14d
	EComponentMobility Mobility; // 0x14f
	EDetailMode DetailMode; // 0x150
	FMulticastSparseDelegate PhysicsVolumeChangedDelegate; // 0x151
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct ASkyAtmosphere : AInfo {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x240
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UYSocialCompatibilityManager : UObject {
	FMulticastInlineDelegate OnSuccessfulSocialProfileRequestDelegate; // 0x28
	FMulticastInlineDelegate OnRequestSocialProfilesDelegate; // 0x38
};

struct UYWidget_ItemComponentTextDeviceCategory : UYWidget_ItemComponentBase {
	UTextBlock* m_deviceCategoryText; // 0x300
};

struct UMediaTexture : UTexture {
	TextureAddress AddressX; // 0xd8
	TextureAddress AddressY; // 0xd9
	bool AutoClear; // 0xda
	FLinearColor ClearColor; // 0xdc
	bool EnableGenMips; // 0xec
	char NumMips; // 0xed
	bool NewStyleOutput; // 0xee
	MediaTextureOutputFormat OutputFormat; // 0xef
	float CurrentAspectRatio; // 0xf0
	MediaTextureOrientation CurrentOrientation; // 0xf4
	UMediaPlayer* MediaPlayer; // 0xf8
};

struct UAtmosphericFogComponent : USceneComponent {
	float SunMultiplier; // 0x1f8
	float FogMultiplier; // 0x1fc
	float DensityMultiplier; // 0x200
	float DensityOffset; // 0x204
	float DistanceScale; // 0x208
	float AltitudeScale; // 0x20c
	float DistanceOffset; // 0x210
	float GroundOffset; // 0x214
	float StartDistance; // 0x218
	float SunDiscScale; // 0x21c
	float DefaultBrightness; // 0x220
	FColor DefaultLightColor; // 0x224
	char bDisableSunDisk : 1; // 0x228
	char bAtmosphereAffectsSunIlluminance : 1; // 0x228
	char bDisableGroundScattering : 1; // 0x228
	FAtmospherePrecomputeParameters PrecomputeParams; // 0x22c
	UTexture2D* TransmittanceTexture; // 0x258
	UTexture2D* IrradianceTexture; // 0x260
};

struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UYCameraInteractionComponent : UActorComponent {
	USceneComponent* m_cameraFocusComponent; // 0xb0
	FTransform m_baseTransform; // 0xc0
	bool m_allowRotation; // 0xf0
};

struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UYControllerHeatMapComponent : UActorComponent {
	TArray<FYHeatMapReplicatedData> m_replicatedHeatMapData; // 0xb0
	FMulticastInlineDelegate OnDataUpdated; // 0xc0
};

struct AYPickUp_Mineral_BP_C : AYPickup_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
};

struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
};

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct UAnimNotifyState_AIMeleeAttack_C : UAnimNotifyState {
	FString contextInfo; // 0x30
	FName AttackLocation_BoneName; // 0x40
	FDataTableRowHandle WeaponTransport; // 0x48
};

struct UYWidget_Login : UYWidget {
	FMulticastInlineDelegate OnRegister; // 0x2c0
	FMulticastInlineDelegate OnLogin; // 0x2d0
	FMulticastInlineDelegate OnResetPassword; // 0x2e0
	UEditableTextBox* m_passwordTextBox; // 0x2f0
	UEditableTextBox* m_usernameTextBox; // 0x2f8
	UButton* m_loginButton; // 0x300
	UButton* m_registerButton; // 0x308
	UButton* m_resetPasswordButton; // 0x310
	UTextBlock* m_errorTextBlock; // 0x318
};

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UGizmoConstantAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UYWidget_ProspectorLevelRewardsPopup : UYWidget {
	EYProspectorLevelRewardType m_prospectorLevelRewardType; // 0x2c0
	UYWidget_ItemContainer* m_itemEntryWidget; // 0x2c8
	UYWidget_ImageBase* m_bgImage; // 0x2d0
	TArray<FString> m_unclaimedActiveProspectorLevelGrantIds; // 0x2d8
	FDataTableRowHandle m_audioShow; // 0x2e8
	FDataTableRowHandle m_audioClose; // 0x2f8
	TSoftObjectPtr<UTexture2D> m_borderReward; // 0x308
	TSoftObjectPtr<UTexture2D> m_iconReward; // 0x330
	TArray<UYWidget_ItemContainer*> m_itemWidgetEntries; // 0x358
	UAudioComponent* m_audioComponentCraftingInProgress; // 0x368
	FYProspectorLevelData m_cachedPlayerProfileData; // 0x370
};

struct UParticleModuleTypeDataAnimTrail : UParticleModuleTypeDataBase {
	char bDeadTrailsOnDeactivate : 1; // 0x30
	char bEnablePreviousTangentRecalculation : 1; // 0x30
	char bTangentRecalculationEveryFrame : 1; // 0x30
	float TilingDistance; // 0x34
	float DistanceTessellationStepSize; // 0x38
	float TangentTessellationStepSize; // 0x3c
	float WidthTessellationStepSize; // 0x40
};

struct UYControllerContractsActivesDataComponent : UActorComponent {
	FMulticastInlineDelegate OnContractStatusChanged; // 0xb0
	FMulticastInlineDelegate OnActiveContractsProgressUpdated; // 0xc0
	FMulticastInlineDelegate BP_OnDeadDropResult; // 0xd0
	FYActiveContractsUIData m_activeContractsUIData; // 0xe0
	FYContractsProgress m_contractsBackendProgressClamp; // 0xf0
	FYContractsProgress m_contractsCurrentProgressClamp; // 0x100
};

struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UYWidgetController_FriendsUserList : UYWidgetController_UserList {
	TArray<UYWidget_UserEntry*> m_onlineEntries; // 0x30
	TArray<UYWidget_UserEntry*> m_offlineEntries; // 0x40
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UYActivities_DeveloperSettings : UDeveloperSettings {
	EYDebugActivitySpawnMode m_debugSpawnActivityMode; // 0x38
	FDataTableRowHandle m_debugSet; // 0x40
	TArray<EYActivityType> m_debugActivities; // 0x50
	bool m_bEnableRandomSeedOverride; // 0x60
	int32_t m_randomizationSeed; // 0x64
};

struct UYHideableBushManagerComponent : UActorComponent {
	TArray<AActor*> m_actorsInsideHideableBush; // 0xb0
	TMap<EYHideableBushType, float> m_hideableRadiusPerType; // 0xc0
	TMap<EYHideableBushType, float> m_playerZOffsetPerType; // 0x110
};

struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> Items; // 0x28
};

struct UPlayFabEventsAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xa8
	UPlayFabJsonObject* RequestJsonObj; // 0xb0
	UPlayFabJsonObject* ResponseJsonObj; // 0xb8
};

struct UAnimNotify_SlideFX_C : UAnimNotify {
	EYFeet FeetType; // 0x38
	EYSlideAnimationState slideAnimState; // 0x39
};

struct UControlRigSequence : ULevelSequence {
	TSoftObjectPtr<UAnimSequence> LastExportedToAnimationSequence; // 0x1c8
	TSoftObjectPtr<USkeletalMesh> LastExportedUsingSkeletalMesh; // 0x1f0
	float LastExportedFrameRate; // 0x218
};

struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UYActivityProgressActorWidget : UYActorWidget {
	UEditableText* m_statusText; // 0x388
	UProgressBar* m_progressBar; // 0x390
};

struct ULightComponent : ULightComponentBase {
	float Temperature; // 0x228
	float MaxDrawDistance; // 0x22c
	float MaxDistanceFadeRange; // 0x230
	char bUseTemperature : 1; // 0x234
	int32_t ShadowMapChannel; // 0x238
	float MinRoughness; // 0x240
	float SpecularScale; // 0x244
	float ShadowResolutionScale; // 0x248
	float ShadowBias; // 0x24c
	float ShadowSlopeBias; // 0x250
	float ShadowSharpen; // 0x254
	float ContactShadowLength; // 0x258
	char ContactShadowLengthInWS : 1; // 0x25c
	char InverseSquaredFalloff : 1; // 0x25c
	char CastTranslucentShadows : 1; // 0x25c
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x25c
	char bAffectDynamicIndirectLighting : 1; // 0x25c
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x25c
	FLightingChannels LightingChannels; // 0x260
	UMaterialInterface* LightFunctionMaterial; // 0x268
	FVector LightFunctionScale; // 0x270
	UTextureLightProfile* IESTexture; // 0x280
	char bUseIESBrightness : 1; // 0x288
	float IESBrightnessScale; // 0x28c
	float LightFunctionFadeDistance; // 0x290
	float DisabledBrightness; // 0x294
	char bEnableLightShaftBloom : 1; // 0x298
	float BloomScale; // 0x29c
	float BloomThreshold; // 0x2a0
	float BloomMaxBrightness; // 0x2a4
	FColor BloomTint; // 0x2a8
	bool bUseRayTracedDistanceFieldShadows; // 0x2ac
	float RayStartOffsetDepthScale; // 0x2b0
};

struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct UYSkeletalMeshComponent : USkeletalMeshComponent {
	bool m_preventPhysicsStateCreationOnDedicatedServer; // 0xed0
};

struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
};

struct UYWidget_ItemComponentTextFlavor : UYWidget_ItemComponentBase {
	UTextBlock* m_flavorText; // 0x300
};

struct UPlayerBotAquireTargetTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	int32_t counter; // 0xb0
	AActor* Owner; // 0xb8
	FName combatTarget; // 0xc0
	float ClosestDist; // 0xc8
	AActor* ClosestActor; // 0xd0
	FString debugStr; // 0xd8
	FName SelfActor; // 0xe8
	float ClosestDistIn; // 0xf0
	FName InteractTarget; // 0xf4
};

struct UPlayerSupport_WBP_C : UYWidget_PlayerSupport {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UCanvasPanel* CanvasPanel_CreateBug; // 0x340
	UYTextBlock* CategorryTextBlock; // 0x348
	UCommonBackground_WBP_C* CommonBackround_WBP; // 0x350
	UYTextBlock* ContactDetails; // 0x358
	UEditableTextBox* ContactDetailsEditable; // 0x360
	UYTextBlock* Description; // 0x368
	UEditableTextBox* EditableText_SupportTitle; // 0x370
	UImage* imgBG_Description; // 0x378
	UMultiLineEditableText* MultiEditable_SupportDescription; // 0x380
	UEditableTextBox* PlayerNameToReport; // 0x388
	UYTextBlock* PlayerReportName; // 0x390
	UYTextBlock* Title; // 0x398
	UYButton* YButton_Cancel; // 0x3a0
	UYButton* YButton_InputDescription; // 0x3a8
	UYButton* YButton_Submit; // 0x3b0
	FMulticastInlineDelegate OnCancel; // 0x3b8
	FMulticastInlineDelegate OnSubmit; // 0x3c8
	FMulticastInlineDelegate OnWidgetSubmitConfirmationEnded; // 0x3d8
	FTimerHandle TimerHandleOnWidgetSubmitConfirmation; // 0x3e8
	int32_t titleMaxCharCount; // 0x3f0
	int32_t descriptionMaxCharCount; // 0x3f4
	TArray<FString> BugLabels; // 0x3f8
	bool ValidReport; // 0x408
	UMaterialInstanceDynamic* ImgBG_Description_Material; // 0x410
};

struct UEQSContext_HigherBetweenCombatTargetAndQuerier_C : UEnvQueryContext_BlueprintBase {
	FName KeyNameCombatTarget; // 0x30
};

struct UInputKeySelector : UWidget {
	FButtonStyle WidgetStyle; // 0x108
	FTextBlockStyle TextStyle; // 0x380
	FInputChord SelectedKey; // 0x5f0
	FSlateFontInfo Font; // 0x610
	FMargin Margin; // 0x668
	FLinearColor ColorAndOpacity; // 0x678
	FText KeySelectionText; // 0x688
	FText NoKeySpecifiedText; // 0x6a0
	FText ActiveTextBoxText; // 0x6b8
	bool bAllowModifierKeys; // 0x6d0
	bool bAllowGamepadKeys; // 0x6d1
	TArray<FKey> EscapeKeys; // 0x6d8
	FMulticastInlineDelegate OnKeySelected; // 0x6e8
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6f8
};

struct UWBP_DividerHorizontal_VarA_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UImage* Gfx_Center; // 0x2d0
	UImage* Gfx_DivideImage; // 0x2d8
	UImage* Gfx_DivideImage_L; // 0x2e0
	UImage* Gfx_DivideImage_R; // 0x2e8
};

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UBTTask_PlayMontageAnimation_C : UYBTTask_PlayAnimation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110
	UAnimMontage* PlayMontage; // 0x118
	bool Allow Physics Rotation During Animation; // 0x120
};

struct UClothPhysicalMeshDataBase_Legacy : UObject {
	TArray<FVector> Vertices; // 0x28
	TArray<FVector> Normals; // 0x38
	TArray<uint32_t> Indices; // 0x48
	TArray<float> InverseMasses; // 0x58
	TArray<FClothVertBoneData> BoneData; // 0x68
	int32_t NumFixedVerts; // 0x78
	int32_t MaxBoneWeights; // 0x7c
	TArray<uint32_t> SelfCollisionIndices; // 0x80
};

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	FName NotifyName; // 0x38
};

struct UYWidget_ItemComponentTextForArchetype : UYWidget_ItemComponentBase {
	UTextBlock* m_archetypeText; // 0x300
};

struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct ULakeGenerator : UWaterBodyGenerator {
	UStaticMeshComponent* LakeMeshComp; // 0x28
	UBoxComponent* LakeCollisionComp; // 0x30
	ULakeCollisionComponent* LakeCollision; // 0x38
};

struct UYWidget_ItemComponentClickable : UYWidget_ItemComponentBase {
	UYButton* m_button; // 0x300
	bool m_allowHoverOnly; // 0x308
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UVH_EvacShip_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x2f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x320
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x370
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x398
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x3c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x3e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x410
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x438
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x460
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x488
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x4b0
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x530
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x560
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x5e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x610
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x6c0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x740
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x770
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x7f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x820
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x8a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x8d0
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x950
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x980
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0xa00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0xa30
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0xab0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0xae0
	AAC_EvacShip_BP_C* EvacShipOwner; // 0xb90
	AC_EscapeShip_State EvacShipState; // 0xb98
	bool IsFlying; // 0xb99
	bool isLanding; // 0xb9a
	bool isLanded; // 0xb9b
	bool isPreparingTakeOff; // 0xb9c
	bool isLeaving; // 0xb9d
};

struct UPaperSpriteComponent : UMeshComponent {
	UPaperSprite* SourceSprite; // 0x468
	UMaterialInterface* MaterialOverride; // 0x470
	FLinearColor SpriteColor; // 0x478
};

struct UYWidget_VanitySwap : UYWidget {
	UYWidget_ItemContainer* m_itemContainerClass; // 0x2c0
	UUserWidget* m_unequipButtonClass; // 0x2c8
	TArray<UYWidget_ItemContainer*> m_itemEntries; // 0x2d0
	UYWidget_ItemContainer* m_selectedVanity; // 0x2e0
};

struct AYCharacter : ACharacter {
	FMulticastInlineDelegate BP_OnTeleport; // 0x4e0
	UYHealthComponent* m_healthComponent; // 0x4f0
	UYDamageComponent* m_damageComponent; // 0x4f8
	UYCharacterDeathComponent* m_deathComponent; // 0x500
	UYGameplayAttributesComponent* m_gameplayAttributesComponent; // 0x508
	UYPerkComponent* m_perkComponent; // 0x510
	FMulticastInlineDelegate OnMovementInputInitiated; // 0x518
	char bIsProning : 1; // 0x52c
};

struct UMaterialExpressionShadingModel : UMaterialExpression {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct UVerticalBoxSlot : UPanelSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UYWidget_StatusPage : UYWidget {
	FString m_statusPageURL; // 0x2c0
};

struct UPlatformEventsComponent : UActorComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct UYControllerDropComponent : UActorComponent {
	FMulticastInlineDelegate OnDropStateChanged; // 0xb0
	FYDragStateData m_currentState; // 0xc0
};

struct UYActivityRegisterComponent : UActorComponent {
	TArray<UYActivityComponent*> m_spawnedActivityComponents; // 0xb0
	FMulticastInlineDelegate BP_OnActivityComponentAdded; // 0xc0
};

struct UDamageType : UObject {
	char bCausedByWorld : 1; // 0x28
	char bScaleMomentumByMass : 1; // 0x28
	char bRadialDamageVelChange : 1; // 0x28
	float DamageImpulse; // 0x2c
	float DestructibleImpulse; // 0x30
	float DestructibleDamageSpreadScale; // 0x34
	float DamageFalloff; // 0x38
};

struct UMapMarkerMovementNoise_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UImage* m_markerIcon; // 0x2e8
	EYMapMarkerState cachedState; // 0x2f0
};

struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
};

struct UARQRCodeComponent : UARComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
};

struct URichTextBlock : UTextLayoutWidget {
	FText Text; // 0x128
	UDataTable* TextStyleSet; // 0x140
	TArray<URichTextBlockDecorator*> DecoratorClasses; // 0x148
	bool bOverrideDefaultStyle; // 0x158
	FTextBlockStyle DefaultTextStyleOverride; // 0x160
	float MinDesiredWidth; // 0x3d0
	ETextTransformPolicy TextTransformPolicy; // 0x3d4
	FTextBlockStyle DefaultTextStyle; // 0x3d8
	TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x648
};

struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0
};

struct UYTCCodeConventionComponent : USceneComponent {
	UYTCCodeConventionComponent* MyInstance; // 0x1f8
	FYCodeConventionBlueprintVarGroup BlueprintGroup; // 0x200
};

struct UAISenseConfig_Sight : UAISenseConfig {
	UAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
	float AutoSuccessRangeFromLastSeenLocation; // 0x60
	float PointOfViewBackwardOffset; // 0x64
	float NearClippingRadius; // 0x68
};

struct UGizmoPlaneTranslationParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	FVector2D Parameter; // 0xb0
	FGizmoVec2ParameterChange LastChange; // 0xb8
	FVector CurTranslationOrigin; // 0xc8
	FVector CurTranslationNormal; // 0xd4
	FVector CurTranslationAxisX; // 0xe0
	FVector CurTranslationAxisY; // 0xec
	FTransform InitialTransform; // 0x100
};

struct UWBP_Chat_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* ChatPanel_Anim; // 0x268
	USizeBox* ChatPanelOverride; // 0x270
	UImage* Gfx_Arrow; // 0x278
	UImage* Gfx_DecoGradient; // 0x280
	UImage* Gfx_Edge; // 0x288
	UImage* Gfx_Fill; // 0x290
	UImage* Gfx_Shadow; // 0x298
	UImage* Gfx_Stroke; // 0x2a0
	UImage* Icn_Chat; // 0x2a8
	UYEditableTextBox* m_inputEditableTextBox; // 0x2b0
	URichTextBlock* RichTxt_Message_01; // 0x2b8
	URichTextBlock* RichTxt_Message_02; // 0x2c0
	URichTextBlock* RichTxt_Message_03; // 0x2c8
	URichTextBlock* RichTxt_Message_04; // 0x2d0
	URichTextBlock* RichTxt_Message_05; // 0x2d8
	URichTextBlock* RichTxt_Message_06; // 0x2e0
	URichTextBlock* RichTxt_Message_07; // 0x2e8
	UUI_GenericChat_WBP_C* UI_GenericChat_WBP; // 0x2f0
	UWBP_BlurBackerSimple_Panel_C* WBP_BlurBackerSimple_Panel; // 0x2f8
	UWBP_Common_Empty_Btn_C* WBP_Common_Empty_ShowHide; // 0x300
	UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x308
	UWBP_Dummy_Btn_C* WBP_Dummy_Btn; // 0x310
	UWBP_Footer_C_Panel_C* WBP_Footer_C_Panel; // 0x318
	UWBP_HeaderSlim_Panel_C* WBP_HeaderSlim_Panel; // 0x320
	UWBP_InputKey_C* WBP_InputKey; // 0x328
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x330
	bool ShowChatPanel; // 0x338
};

struct UTimelineTemplate : UObject {
	float TimelineLength; // 0x28
	ETimelineLengthMode LengthMode; // 0x2c
	char bAutoPlay : 1; // 0x2d
	char bLoop : 1; // 0x2d
	char bReplicated : 1; // 0x2d
	char bIgnoreTimeDilation : 1; // 0x2d
	TArray<FTTEventTrack> EventTracks; // 0x30
	TArray<FTTFloatTrack> FloatTracks; // 0x40
	TArray<FTTVectorTrack> VectorTracks; // 0x50
	TArray<FTTLinearColorTrack> LinearColorTracks; // 0x60
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0x70
	FGuid TimelineGuid; // 0x80
	FName VariableName; // 0x90
	FName DirectionPropertyName; // 0x98
	FName UpdateFunctionName; // 0xa0
	FName FinishedFunctionName; // 0xa8
};

struct ULeaderboardFlushCallbackProxy : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue InnerRadius; // 0x80
	FAIDataProviderFloatValue OuterRadius; // 0xb8
	FAIDataProviderIntValue NumberOfRings; // 0xf0
	FAIDataProviderIntValue PointsPerRing; // 0x128
	FEnvDirection ArcDirection; // 0x160
	FAIDataProviderFloatValue ArcAngle; // 0x180
	bool bUseSpiralPattern; // 0x1b8
	UEnvQueryContext* Center; // 0x1c0
	char bDefineArc : 1; // 0x1c8
};

struct UYPlayerCharacterWeaponComponent : UActorComponent {
	UYWidgetComponentFOV* m_widgetComponent; // 0xc0
	FYWeaponCompleteAnimationRuntimeDataSet m_runtimeAnimationData; // 0xc8
	FYActiveWeaponCharacterInitializationData m_activeInstanceData; // 0x120
	FYActiveWeaponCharacterInitializationData m_previouslyActiveInstanceData; // 0x170
	UYSkeletalMeshComponentFOV* m_weaponMesh; // 0x1c0
	UAudioComponent* m_spinUpWeaponSoundAudioComponent; // 0x1c8
	UAudioComponent* m_weaponFiringSoundAudioComponent; // 0x1d0
	FMulticastInlineDelegate OnNewWeaponAdded; // 0x1d8
	UYParticleSystemComponentFOV* m_fireParticleSystem; // 0x1e8
	UParticleSystemComponent* m_beamParticleSystem; // 0x1f0
	FYFullscreenScopeData m_fullscreenTargetingData; // 0x1f8
	UParticleSystemComponent* m_spinupParticle; // 0x230
	TArray<UObject*> m_loadedWeaponAssets; // 0x238
	TArray<UYSkeletalMeshComponentFOV*> m_fovAffectedMeshFOVComponents; // 0x250
	EYWeaponVisualState m_visualState; // 0x260
	FMulticastInlineDelegate OnVisualStateChanged; // 0x268
	int32_t m_missingAmmo; // 0x27c
};

struct UAnimInstance : UObject {
	USkeleton* CurrentSkeleton; // 0x28
	ERootMotionMode RootMotionMode; // 0x30
	char bUseMultiThreadedAnimationUpdate : 1; // 0x31
	char bUsingCopyPoseFromMesh : 1; // 0x31
	char bReceiveNotifiesFromLinkedInstances : 1; // 0x31
	char bPropagateNotifiesToLinkedInstances : 1; // 0x31
	char bQueueMontageEvents : 1; // 0x31
	FMulticastInlineDelegate OnMontageBlendingOut; // 0x38
	FMulticastInlineDelegate OnMontageStarted; // 0x48
	FMulticastInlineDelegate OnMontageEnded; // 0x58
	FMulticastInlineDelegate OnAllMontageInstancesEnded; // 0x68
	FAnimNotifyQueue NotifyQueue; // 0x100
	TArray<FAnimNotifyEvent> ActiveAnimNotifyState; // 0x170
};

struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct UClothingAssetBase : UObject {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x668
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x678
	FGuid GenerationGuid; // 0x688
};

struct UYWidget_HardCurrencyDisplay : UYWidget {
	UYWidget_PriceGeneric* m_priceWidget; // 0x2c0
};

struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xe0
};

struct UAssetExportTask : UObject {
	UObject* Object; // 0x28
	UExporter* Exporter; // 0x30
	FString Filename; // 0x38
	bool bSelected; // 0x48
	bool bReplaceIdentical; // 0x49
	bool bPrompt; // 0x4a
	bool bAutomated; // 0x4b
	bool bUseFileArchive; // 0x4c
	bool bWriteEmptyFiles; // 0x4d
	TArray<UObject*> IgnoreObjectList; // 0x50
	UObject* Options; // 0x60
	TArray<FString> Errors; // 0x68
};

struct AYLight : AActor {
	UStaticMeshComponent* StaticMesh; // 0x240
	UYSpotlightComponent* YSpotlight; // 0x248
};

struct UGizmoUniformScaleParameterSource : UGizmoBaseVec2ParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58
	float ScaleMultiplier; // 0x68
	FVector2D Parameter; // 0x6c
	FGizmoVec2ParameterChange LastChange; // 0x74
	FVector CurScaleOrigin; // 0x84
	FVector CurScaleNormal; // 0x90
	FVector CurScaleAxisX; // 0x9c
	FVector CurScaleAxisY; // 0xa8
	FTransform InitialTransform; // 0xc0
};

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct UNiagaraParameterCollection : UObject {
	FName Namespace; // 0x28
	TArray<FNiagaraVariable> Parameters; // 0x30
	UMaterialParameterCollection* SourceMaterialCollection; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
};

struct UYWidgetComponentFOV : UWidgetComponent {
	float m_defaultFOV; // 0x594
	float m_nearClipDistance; // 0x598
};

struct UARLifeCycleComponent : USceneComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct UClothingAssetCommon : UClothingAssetBase {
	UPhysicsAsset* PhysicsAsset; // 0x48
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x50
	UClothConfigBase* ClothSharedSimConfig; // 0xa0
	UClothConfigBase* ClothSimConfig; // 0xa8
	UClothConfigBase* ChaosClothSimConfig; // 0xb0
	TArray<UClothLODDataCommon_Legacy*> ClothLODData; // 0xb8
	TArray<FClothLODDataCommon> LODData; // 0xc8
	TArray<int32_t> LodMap; // 0xd8
	TArray<FName> UsedBoneNames; // 0xe8
	TArray<int32_t> UsedBoneIndices; // 0xf8
	int32_t ReferenceBoneIndex; // 0x108
	UClothingAssetCustomData* customData; // 0x110
	FClothConfig_Legacy ClothConfig; // 0x118
};

struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	FLinearColor Min; // 0x38
	FLinearColor Max; // 0x48
};

struct UFontFace : UObject {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
};

struct UAssetManagerSettings : UDeveloperSettings {
	TArray<FPrimaryAssetTypeInfo> PrimaryAssetTypesToScan; // 0x38
	TArray<FDirectoryPath> DirectoriesToExclude; // 0x48
	TArray<FPrimaryAssetRulesOverride> PrimaryAssetRules; // 0x58
	TArray<FPrimaryAssetRulesCustomOverride> CustomPrimaryAssetRules; // 0x68
	bool bOnlyCookProductionAssets; // 0x78
	bool bShouldManagerDetermineTypeAndName; // 0x79
	bool bShouldGuessTypeAndNameInEditor; // 0x7a
	bool bShouldAcquireMissingChunksOnLoad; // 0x7b
	TArray<FAssetManagerRedirect> PrimaryAssetIdRedirects; // 0x80
	TArray<FAssetManagerRedirect> PrimaryAssetTypeRedirects; // 0x90
	TArray<FAssetManagerRedirect> AssetPathRedirects; // 0xa0
	TSet<FName> MetaDataTagsForAssetRegistry; // 0xb0
};

struct UYDismissedOverlays : UObject {
	TArray<FString> m_dismissedOverlays; // 0x28
};

struct UYWidget_Compass : UYWidget {
	UCanvasPanel* m_movingCanvas; // 0x2c0
	APawn* m_pawn; // 0x2c8
	UCanvasPanelSlot* m_canvasSlot; // 0x2d0
};

struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x250
};

struct UMeshSelectionSet : USelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
};

struct UARTrackedGeometry : UObject {
	FGuid UniqueId; // 0x28
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	UMRMeshComponent* UnderlyingMesh; // 0xb0
	EARObjectClassification ObjectClassification; // 0xb8
	int32_t LastUpdateFrameNumber; // 0xd0
	FName DebugName; // 0xe0
};

struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
};

struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct APrefabRandomizer : AActor {
	bool bRandomizeOnBeginPlay; // 0x240
	int32_t SeedOffset; // 0x244
	float MaxBuildTimePerFrame; // 0x248
	FMulticastInlineDelegate OnRandomizationComplete; // 0x250
	bool bFastSyncBuild; // 0x260
	TArray<APrefabActor*> ActorsToRandomize; // 0x268
};

struct UYInventoryComponentManager : UActorComponent {
	TMap<int32_t, FYInventoryLink> m_inventoryComponents; // 0xb8
};

struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UWBP_Settings_Menu_C : UYWidgetView_Settings {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* InfoPanel_Anim; // 0x348
	UWidgetAnimation* TabChange_Anim; // 0x350
	UWidgetAnimation* ScreenIn_Anim; // 0x358
	UImage* Gfx_Backer; // 0x360
	UImage* Gfx_BottomEdge_ComplexPanel; // 0x368
	UImage* Gfx_DarkenFill; // 0x370
	UImage* Gfx_Grid_Helper; // 0x378
	UImage* Gfx_Image; // 0x380
	URichTextBlock* RichText_SettingDesc; // 0x388
	USizeBox* SettingImage; // 0x390
	UScaleBox* SettingInfoScaleBox; // 0x398
	UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x3a0
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x3a8
	UWBP_Generic_Modal_C* WBP_Confirmation_Menu_TESTONLY; // 0x3b0
	UWBP_BlurBacker_Panel_C* WBP_Deco_BlurPanel; // 0x3b8
	UWBP_GenericContent_Panel_C* WBP_GenericContent_SettingInfo; // 0x3c0
	UWBP_Header_Panel_C* WBP_Header_Panel; // 0x3c8
	UWBP_Headline_Panel_C* WBP_Headline_Panel; // 0x3d0
	UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x3d8
	UWBP_SettingsContent_Audio_C* WBP_SettingsContent_Audio; // 0x3e0
	UWBP_SettingsContent_Controls_C* WBP_SettingsContent_Controls; // 0x3e8
	UWBP_SettingsContent_Game_C* WBP_SettingsContent_Game; // 0x3f0
	UWBP_SettingsContent_Keybindings_C* WBP_SettingsContent_Keybindings; // 0x3f8
	UWBP_SettingsContent_Video_C* WBP_SettingsContent_Video; // 0x400
	UWBP_TabNavigation_C* WBP_TabNavigation_Header; // 0x408
	UWBP_TabNavigation_C* WBP_TabNavigation_Primary; // 0x410
	UWBP_Toast_C* WBP_Toast; // 0x418
	UWidgetSwitcher* WidgetSwitcher_Settings; // 0x420
	UYTextBlock* YTxt_SettingName; // 0x428
	UWBP_Settings_Provider_C* SettingsProvider; // 0x430
	bool IsSettingInfoActive; // 0x438
};

struct UARTexture : UTexture {
	EARTextureType TextureType; // 0xd8
	float Timestamp; // 0xdc
	FGuid ExternalTextureGuid; // 0xe0
	FVector2D Size; // 0xf0
};

struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
};

struct UYWidget_RankedLeaderboardsOverview : UYWidget {
	UWidgetSwitcher* m_widgetSwitcher; // 0x2c0
	UYWidget_RankedCategories* m_rankedCategories; // 0x2c8
};

struct AYGameState_Match_BP_C : AYGameState_Match {
	FPointerToUberGraphFrame UberGraphFrame; // 0x508
	UMatchPhaseListenerComponent_BP_C* MatchPhaseListenerComponent_BP; // 0x510
	UMatchPhaseDirectorComponent_BP_C* MatchPhaseDirectorComponent_BP; // 0x518
	UYPlayerRenderTargetVfxManagerComponent_BP_C* YPlayerRenderTargetVfxManagerComponent_BP; // 0x520
	USceneComponent* DefaultSceneRoot; // 0x528
	bool HasEscapeShipTerminals; // 0x530
	AActor* IntroActorClass; // 0x538
	float MultiplierMaxValue; // 0x540
	TArray<ACharacter*> PlayerCharArray; // 0x548
	int32_t playercharindex; // 0x558
	int32_t MinAllowedStartingRank; // 0x55c
	int32_t MaxAllowedStartingRank; // 0x560
	int32_t DifficultyToRankFactor; // 0x564
	int32_t MaxDifficulty; // 0x568
	int32_t CalculatedStartPenalty; // 0x56c
	int32_t BaseStartPenalty; // 0x570
	int32_t StartingCredits; // 0x574
	int32_t MatchLoopCounter; // 0x578
	FMulticastInlineDelegate OnReplicatedMatchPhaseDataUpdated; // 0x580
	FMulticastInlineDelegate OnMatchPhaseVisualsUpdated; // 0x590
};

struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	FIntVector NumCells; // 0xd8
	float CellSize; // 0xe4
	int32_t NumCellsMaxAxis; // 0xe8
	ESetResolutionMethod SetResolutionMethod; // 0xec
	FVector WorldBBoxSize; // 0xf0
};

struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct UYMenuScreenLegalAgreements : UYScreenBase {
	UYScreenBase* m_homeScreenBP; // 0xb0
	UYAuthorization* m_authorization; // 0xb8
};

struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct UYWidget_SetItemFilterButton : UYWidget {
	FMulticastInlineDelegate OnSetItemFilterButtonClicked; // 0x2c0
	EYItemType m_typeToShow; // 0x2d0
	FText m_labelText; // 0x2d8
	bool m_showItemAmount; // 0x2f0
};

struct UChaosPhysicalMaterial : UObject {
	float Friction; // 0x28
	float StaticFriction; // 0x2c
	float Restitution; // 0x30
	float LinearEtherDrag; // 0x34
	float AngularEtherDrag; // 0x38
	float SleepingLinearVelocityThreshold; // 0x3c
	float SleepingAngularVelocityThreshold; // 0x40
};

struct UYWidget_SpectatorHUD : UYWidget {
	float m_timeBeforeExitToStationEnables; // 0x2c0
	UTextBlock* m_spectatingReasonText; // 0x2c8
};

struct UWBP_InputKey_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Feedback_Anim; // 0x268
	UTextBlock* TxtDivide; // 0x270
	UWBP_InputKeyGamepad_C* WBP_InputKeyGamepad; // 0x278
	UWBP_InputKeyPC_C* WBP_InputKeyPC; // 0x280
	bool Gamepad; // 0x288
	bool Keyboard; // 0x289
	bool Divide; // 0x28a
	bool isLight; // 0x28b
	FText LabelOverride; // 0x290
	FDataTableRowHandle InputHandle; // 0x2a8
};

struct UYWidgetView_SettingEntry : UYWidgetView {
	FDataTableRowHandle m_settingDescriptionHandle; // 0x338
};

struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UNiagaraDataInterfaceChaosDestruction : UNiagaraDataInterface {
	TSet<AChaosSolverActor*> ChaosSolverActorSet; // 0x38
	EDataSourceTypeEnum DataSourceType; // 0x88
	int32_t DataProcessFrequency; // 0x8c
	int32_t MaxNumberOfDataEntriesToSpawn; // 0x90
	bool DoSpawn; // 0x94
	FVector2D SpawnMultiplierMinMax; // 0x98
	float SpawnChance; // 0xa0
	FVector2D ImpulseToSpawnMinMax; // 0xa4
	FVector2D SpeedToSpawnMinMax; // 0xac
	FVector2D MassToSpawnMinMax; // 0xb4
	FVector2D ExtentMinToSpawnMinMax; // 0xbc
	FVector2D ExtentMaxToSpawnMinMax; // 0xc4
	FVector2D VolumeToSpawnMinMax; // 0xcc
	FVector2D SolverTimeToSpawnMinMax; // 0xd4
	int32_t SurfaceTypeToSpawn; // 0xdc
	ELocationFilteringModeEnum LocationFilteringMode; // 0xe0
	ELocationXToSpawnEnum LocationXToSpawn; // 0xe1
	FVector2D LocationXToSpawnMinMax; // 0xe4
	ELocationYToSpawnEnum LocationYToSpawn; // 0xec
	FVector2D LocationYToSpawnMinMax; // 0xf0
	ELocationZToSpawnEnum LocationZToSpawn; // 0xf8
	FVector2D LocationZToSpawnMinMax; // 0xfc
	EDataSortTypeEnum DataSortingType; // 0x104
	bool bGetExternalCollisionData; // 0x105
	bool DoSpatialHash; // 0x106
	FVector SpatialHashVolumeMin; // 0x108
	FVector SpatialHashVolumeMax; // 0x114
	FVector SpatialHashVolumeCellSize; // 0x120
	int32_t MaxDataPerCell; // 0x12c
	bool bApplyMaterialsFilter; // 0x130
	TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet; // 0x138
	bool bGetExternalBreakingData; // 0x188
	bool bGetExternalTrailingData; // 0x189
	FVector2D RandomPositionMagnitudeMinMax; // 0x18c
	float InheritedVelocityMultiplier; // 0x194
	ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType; // 0x198
	FVector2D RandomVelocityMagnitudeMinMax; // 0x19c
	float SpreadAngleMax; // 0x1a4
	FVector VelocityOffsetMin; // 0x1a8
	FVector VelocityOffsetMax; // 0x1b4
	FVector2D FinalVelocityMagnitudeMinMax; // 0x1c0
	float MaxLatency; // 0x1c8
	EDebugTypeEnum DebugType; // 0x1cc
	int32_t LastSpawnedPointID; // 0x1d0
	float LastSpawnTime; // 0x1d4
	float SolverTime; // 0x1e8
	float TimeStampOfLastProcessedData; // 0x1ec
};

struct UMaterialExpressionSpeedTree : UMaterialExpression {
	FExpressionInput GeometryInput; // 0x40
	FExpressionInput WindInput; // 0x54
	FExpressionInput LODInput; // 0x68
	FExpressionInput ExtraBendWS; // 0x7c
	ESpeedTreeGeometryType GeometryType; // 0x90
	ESpeedTreeWindType WindType; // 0x91
	ESpeedTreeLODType LODType; // 0x92
	float BillboardThreshold; // 0x94
	bool bAccurateWindVelocities; // 0x98
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct UGeometryCacheCodecBase : UObject {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct UYWidgetProvider_Station : UYWidgetProvider {
	FMulticastInlineDelegate OnStashOpened; // 0x40
	FMulticastInlineDelegate OnInventoryToggledEvent; // 0x50
};

struct UWBP_ItemStatBonus_Entry_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	URichTextBlock* RichTxt_BonusStat; // 0x268
	FText Label; // 0x270
};

struct UYWidget_ProgressBar : UYWidget {
	UProgressBar* m_progressBarMain; // 0x2c0
	UProgressBar* m_progressBarDelta; // 0x2c8
};

struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct AYPerformanceResourceManager : AActor {
	TMap<int32_t, FYResourceSpawnActorRequest> m_spawnRequests; // 0x270
	TMap<int32_t, FYResourceSpawnActorRequest> m_finishedLoadResourceClass; // 0x2c0
};

struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x470
	bool bUseAsyncCooking; // 0x471
	UBodySetup* ProcMeshBodySetup; // 0x478
	TArray<FProcMeshSection> ProcMeshSections; // 0x480
	TArray<FKConvexElem> CollisionConvexElems; // 0x490
	FBoxSphereBounds LocalBounds; // 0x4a0
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x4c0
};

struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UYMatchPhaseDirectorComponent : UActorComponent {
	FYMatchPhaseData m_currentMatchPhaseData; // 0xb0
	FTimerHandle m_startNextMatchPhaseTimeHandle; // 0xd8
};

struct UYMatchScreenSpectator : UYScreenBase {
	UYScreenBase* m_eomScreenBP; // 0xb0
};

struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x460
	float HandleSize; // 0x46c
	float Thickness; // 0x470
	FVector Direction; // 0x474
	float Length; // 0x480
	bool bImageScale; // 0x484
};

struct APaperTerrainActor : AActor {
	USceneComponent* DummyRoot; // 0x240
	UPaperTerrainSplineComponent* SplineComponent; // 0x248
	UPaperTerrainComponent* RenderComponent; // 0x250
};

struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct AYHUD_Match : AYHUD {
	FMulticastInlineDelegate OnToggleMap; // 0x3b8
	UYScreenBase* m_hudScreenClass; // 0x3c8
};

struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct AYPowerUpPedestal : AActor {
	TArray<AActor*> m_connectedActors; // 0x240
	TArray<AActor*> m_connectedCables; // 0x250
	AActor* m_cableActorClass; // 0x260
};

struct UGizmoConstantFrameAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UPhysicalMaterial : UObject {
	float Friction; // 0x28
	float StaticFriction; // 0x2c
	EFrictionCombineMode FrictionCombineMode; // 0x30
	bool bOverrideFrictionCombineMode; // 0x31
	float Restitution; // 0x34
	EFrictionCombineMode RestitutionCombineMode; // 0x38
	bool bOverrideRestitutionCombineMode; // 0x39
	float Density; // 0x3c
	float SleepLinearVelocityThreshold; // 0x40
	float SleepAngularVelocityThreshold; // 0x44
	int32_t SleepCounterThreshold; // 0x48
	float RaiseMassToPower; // 0x4c
	float DestructibleDamageThresholdScale; // 0x50
	UPhysicalMaterialPropertyBase* PhysicalMaterialProperty; // 0x58
	EPhysicalSurface surfaceType; // 0x60
};

struct UAmbisonicsEncodingSettings : USoundfieldEncodingSettingsBase {
	int32_t AmbisonicsOrder; // 0x28
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct UTouchInterface : UObject {
	TArray<FTouchInputControl> Controls; // 0x28
	float ActiveOpacity; // 0x38
	float InactiveOpacity; // 0x3c
	float TimeUntilDeactive; // 0x40
	float TimeUntilReset; // 0x44
	float ActivationDelay; // 0x48
	bool bPreventRecenter; // 0x4c
	float StartupDelay; // 0x50
};

struct UBP_EscapeMarkerData_C : UYMapMarkerData {
	int32_t TimeUntilReady; // 0x148
};

struct UPlayerDBNOComponent_BP_C : UYCharacterDBNOComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1d8
	bool MIDsSetUp; // 0x1e0
	APRO_PlayerCharacter_C* PlayerCharacterOwner; // 0x1e8
	TArray<UMaterialInstanceDynamic*> PlayerMeshMIDArray; // 0x1f0
	FDataTableRowHandle DBNO_ShieldActivateSfx; // 0x200
	UAudioComponent* DBNOAudioComponent; // 0x210
	FDataTableRowHandle DBNO_ExecutedSfx; // 0x218
	FDataTableRowHandle DBNO_ReviveSfx; // 0x228
	int32_t DBNOHighlight; // 0x238
	float foamAnimationSlider; // 0x23c
	FYDeathEmoteDataTableRow deathEmoteRow; // 0x240
	FDataTableRowHandle VO_Revived; // 0x650
	bool UsedRecallRecently; // 0x660
};

struct UNiagaraSystem : UFXSystemAsset {
	bool bDumpDebugSystemInfo; // 0x30
	bool bDumpDebugEmitterInfo; // 0x31
	bool bRequireCurrentFrameData; // 0x32
	char bFixedBounds : 1; // 0x34
	UNiagaraEffectType* EffectType; // 0x38
	bool bOverrideScalabilitySettings; // 0x40
	TArray<FNiagaraSystemScalabilityOverride> ScalabilityOverrides; // 0x48
	FNiagaraSystemScalabilityOverrides SystemScalabilityOverrides; // 0x58
	TArray<FNiagaraEmitterHandle> EmitterHandles; // 0x68
	TArray<UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides; // 0x78
	UNiagaraScript* SystemSpawnScript; // 0x88
	UNiagaraScript* SystemUpdateScript; // 0x90
	FNiagaraSystemCompiledData SystemCompiledData; // 0xa8
	FNiagaraUserRedirectionParameterStore ExposedParameters; // 0x2c0
	FBox FixedBounds; // 0x388
	bool bAutoDeactivate; // 0x3a4
	float WarmupTime; // 0x3a8
	int32_t WarmupTickCount; // 0x3ac
	float WarmupTickDelta; // 0x3b0
	bool bHasSystemScriptDIsWithPerInstanceData; // 0x3b4
	TArray<FName> UserDINamesReadInSystemScripts; // 0x3b8
};

struct UYStormSurgeMapMarkerData : UYAreaMapMarkerData {
	float m_stateDuration; // 0x158
};

struct UPrimitiveComponent : USceneComponent {
	float MinDrawDistance; // 0x200
	float LDMaxDrawDistance; // 0x204
	float CachedMaxDrawDistance; // 0x208
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x20c
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x20d
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x20e
	ELightmapType LightmapType; // 0x20f
	char bUseMaxLODAsImposter : 1; // 0x210
	char bBatchImpostersAsInstances : 1; // 0x210
	char bNeverDistanceCull : 1; // 0x210
	char bAlwaysCreatePhysicsState : 1; // 0x210
	char bGenerateOverlapEvents : 1; // 0x211
	char bMultiBodyOverlap : 1; // 0x211
	char bTraceComplexOnMove : 1; // 0x211
	char bReturnMaterialOnMove : 1; // 0x211
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x211
	char bAllowCullDistanceVolume : 1; // 0x211
	char bHasMotionBlurVelocityMeshes : 1; // 0x211
	char bVisibleInReflectionCaptures : 1; // 0x211
	char bVisibleInRealTimeSkyCaptures : 1; // 0x212
	char bVisibleInRayTracing : 1; // 0x212
	char bRenderInMainPass : 1; // 0x212
	char bRenderInDepthPass : 1; // 0x212
	char bReceivesDecals : 1; // 0x212
	char bOwnerNoSee : 1; // 0x212
	char bOnlyOwnerSee : 1; // 0x212
	char bTreatAsBackgroundForOcclusion : 1; // 0x212
	char bUseAsOccluder : 1; // 0x213
	char bSelectable : 1; // 0x213
	char bForceMipStreaming : 1; // 0x213
	char bHasPerInstanceHitProxies : 1; // 0x213
	char CastShadow : 1; // 0x213
	char bAffectDynamicIndirectLighting : 1; // 0x213
	char bAffectDistanceFieldLighting : 1; // 0x213
	char bCastDynamicShadow : 1; // 0x213
	char bCastStaticShadow : 1; // 0x214
	char bCastVolumetricTranslucentShadow : 1; // 0x214
	char bCastContactShadow : 1; // 0x214
	char bSelfShadowOnly : 1; // 0x214
	char bCastFarShadow : 1; // 0x214
	char bCastInsetShadow : 1; // 0x214
	char bCastCinematicShadow : 1; // 0x214
	char bCastHiddenShadow : 1; // 0x214
	char bCastShadowAsTwoSided : 1; // 0x215
	char bLightAsIfStatic : 1; // 0x215
	char bLightAttachmentsAsGroup : 1; // 0x215
	char bExcludeFromLightAttachmentGroup : 1; // 0x215
	char bReceiveMobileCSMShadows : 1; // 0x215
	char bSingleSampleShadowFromStationaryLights : 1; // 0x215
	char bIgnoreRadialImpulse : 1; // 0x215
	char bIgnoreRadialForce : 1; // 0x215
	char bApplyImpulseOnDamage : 1; // 0x216
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x216
	char bFillCollisionUnderneathForNavmesh : 1; // 0x216
	char AlwaysLoadOnClient : 1; // 0x216
	char AlwaysLoadOnServer : 1; // 0x216
	char bUseEditorCompositing : 1; // 0x216
	char bRenderCustomDepth : 1; // 0x216
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x217
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x219
	FLightingChannels LightingChannels; // 0x21a
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x21b
	int32_t CustomDepthStencilValue; // 0x21c
	FCustomPrimitiveData CustomPrimitiveData; // 0x220
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x230
	int32_t TranslucencySortPriority; // 0x248
	int32_t VisibilityId; // 0x24c
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x250
	int8_t VirtualTextureLodBias; // 0x260
	int8_t VirtualTextureCullMips; // 0x261
	int8_t VirtualTextureMinCoverage; // 0x262
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x263
	float LpvBiasMultiplier; // 0x268
	float BoundsScale; // 0x274
	TArray<AActor*> MoveIgnoreActors; // 0x288
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x298
	FBodyInstance BodyInstance; // 0x2b8
	FMulticastSparseDelegate OnComponentHit; // 0x410
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x411
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x412
	FMulticastSparseDelegate OnComponentWake; // 0x413
	FMulticastSparseDelegate OnComponentSleep; // 0x414
	FMulticastSparseDelegate OnBeginCursorOver; // 0x416
	FMulticastSparseDelegate OnEndCursorOver; // 0x417
	FMulticastSparseDelegate OnClicked; // 0x418
	FMulticastSparseDelegate OnReleased; // 0x419
	FMulticastSparseDelegate OnInputTouchBegin; // 0x41a
	FMulticastSparseDelegate OnInputTouchEnd; // 0x41b
	FMulticastSparseDelegate OnInputTouchEnter; // 0x41c
	FMulticastSparseDelegate OnInputTouchLeave; // 0x41d
	UPrimitiveComponent* LODParentPrimitive; // 0x438
};

struct UGizmoBaseComponent : UPrimitiveComponent {
	FLinearColor Color; // 0x440
	float HoverSizeMultiplier; // 0x450
	float PixelHitDistanceThreshold; // 0x454
};

struct UAnimationSharingManager : UObject {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct UYWidgetView : UYWidget {
	UYWidgetProvider* m_widgetProviderClass; // 0x2c0
	TMap<FName, UYWidget*> m_registeredWidgets; // 0x2c8
	UYWidgetProvider* m_widgetProvider; // 0x318
	TArray<TWeakObjectPtr<UYWidgetProvider>> m_requestedProviders; // 0x320
	bool m_wantsToAnimateVisibilityWithParent; // 0x330
};

struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x448
};

struct APRO_PlayerCharacter_C : AYPlayerCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6e0
	UPlayerDBNOComponent_BP_C* PlayerDBNOComponent_BP; // 0x6e8
	UPlayer_InventoryAudioComponent_BP_C* Player_InventoryAudioComponent_BP; // 0x6f0
	UTakeDamageBloodDecalComponent_BP_C* TakeDamageBloodDecalComponent_BP; // 0x6f8
	UWeaponScopeComponent_BP_C* WeaponScopeComponent_BP; // 0x700
	UFlinchesComponent_BP_C* FlinchesComponent_BP; // 0x708
	UYPlayerCharacterEffortsComponent_BP_C* YPlayerCharacterEffortsComponent_BP; // 0x710
	UHelmetGoggleComponent_BP_C* HelmetGoggleComponent_BP; // 0x718
	UTacticalFlashLightComponent_BP_C* TacticalFlashLightComponent_BP; // 0x720
	UPlayer_MeleeAttackComponent_BP_C* Player_MeleeAttackComponent_BP; // 0x728
	UPlayerCarryingComponent_BP_C* PlayerCarryingComponent_BP; // 0x730
	UInteractionAnimComponent_BP_C* InteractionAnimComponent_BP; // 0x738
	UYCharacterScopeGlintComponent_BP_C* ScopeGlintComponent_BP; // 0x740
	UAudioComponent* SFX_PlayerEfforts_Stamina; // 0x748
	UYPlayerTriggerAISenseComponent_BP_C* YPlayerTriggerAISenseComponent_BP; // 0x750
	UYPlayerConsumableComponent_BP_C* YPlayerConsumableComponent_BP; // 0x758
	UParticleSystemComponent* FX_PlayedEvacuateCharging_PS; // 0x760
	UYPingableComponent* YPingable; // 0x768
	UPlayerCharacterOutlineComponent_C* PlayerCharacterOutlineComponent; // 0x770
	UYPlayerRenderTargetVfxMovementComponent_BP_C* YPlayerRenderTargetVfxMovementComponent_BP; // 0x778
	UYPlayerSFXComponent_BP_C* YPlayerSFXComponent_BP; // 0x780
	UPlayerCharacterCombatAwarenessComponent_BP_C* PlayerCharacterCombatAwarenessComponent_BP; // 0x788
	UYPlayerVFXComponent_BP_C* PRO_PlayerCharacter_VFXComponent; // 0x790
	USkeletalMeshComponent* DBNO_FoamMesh_SK; // 0x798
	UYPlayerEscapeComponent_BP_C* YPlayerEscapeComponent_BP; // 0x7a0
	UYPlayerAnimEvalComponent_BP_C* YPlayerAnimEvalComponent_BP; // 0x7a8
	UYAIPerceptionStimuliSourceComp* YAIPerceptionStimuliSourceComp; // 0x7b0
	UParticleSystemComponent* Trail; // 0x7b8
	UPostProcessComponent* PostProcess; // 0x7c0
	float STE_ChargeVFX_TL_NewTrack_0_E03AF13C4D6D893B0E8DC58C085F8278; // 0x7c8
	ETimelineDirection STE_ChargeVFX_TL__Direction_E03AF13C4D6D893B0E8DC58C085F8278; // 0x7cc
	UTimelineComponent* STE_ChargeVFX_TL; // 0x7d0
	bool IsTagged; // 0x7d8
	float SlowdownResetTime; // 0x7dc
	float SlowdownMaxSpeed; // 0x7e0
	float SlowdownDuration; // 0x7e4
	float SlowdownImmunityThreshold; // 0x7e8
	bool IsSlowdown; // 0x7ec
	FGuid AddedSlowdown; // 0x7f0
	FGuid AttributeModifierMovement; // 0x800
	bool IsHOT; // 0x810
	FGuid AddedHOT; // 0x814
	AYPlayerController* YPlayerCtrl; // 0x828
	UParticleSystemComponent* DamageOverTime_PS; // 0x830
	UTextRenderComponent* BugReportingTextComponent; // 0x838
	bool IsCharacterNinja; // 0x840
	bool IsSlowdownImmune; // 0x841
	float SlowdownBuildUp; // 0x844
	float LastDamageTaken; // 0x848
	FTimerHandle TimerHandleClearSlowdown; // 0x850
	UMaterialInstanceDynamic* EoM_Post_MID; // 0x858
	AMapAreaLocation_BP_C* LocationConditionChallengeDBNO; // 0x860
	float PvPTargetResetTime; // 0x868
	AActor* DamageCauser; // 0x870
	int32_t MaxCreditsToDropOnDeathOrRecall; // 0x878
	FDataTableRowHandle VO_RecallChargeLost; // 0x880
	FDataTableRowHandle LeanRowHandle; // 0x890
	FVector LastDamageDirection; // 0x8a0
	FVector LastDamageHitLocation; // 0x8ac
	float PawnCleanUpDelay; // 0x8b8
};

struct UWBP_Keybinding_Btn_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UInputKeySelector* AlternateKeyBinding; // 0x2c8
	UInputKeySelector* GamepadKeyBinding; // 0x2d0
	UImage* Gfx_DecoGradientLeft; // 0x2d8
	UImage* Gfx_DecoGradientRight; // 0x2e0
	UImage* Gfx_DecoGradientRight_2; // 0x2e8
	UInputKeySelector* MainKeyBinding; // 0x2f0
	UWBP_InputKey_C* WBP_InputKey_Gamepad; // 0x2f8
	UWBP_InputKey_C* WBP_InputKey_GamepadAlternate; // 0x300
	UWBP_InputKey_C* WBP_InputKey_Main; // 0x308
	UWBP_SelectionBracket_C* WBP_SelectionBracketGamepad; // 0x310
	UWBP_SelectionBracket_C* WBP_SelectionBracketMain; // 0x318
	UWBP_SelectionBracket_C* WBP_SelectionBracketSecondary; // 0x320
	FName MappingName; // 0x328
	FDataTableRowHandle SoundFX_ButtonSelect; // 0x330
	FDataTableRowHandle SoundFX_ButtonChanged; // 0x340
	FDataTableRowHandle SoundFX_ButtonHover; // 0x350
	FYKeybindingData Keybindings; // 0x360
};

struct UYPlayerSocialComponent : UActorComponent {
	FDataTableRowHandle m_socialActorCommWheelEntry_Default; // 0xb0
	FDataTableRowHandle m_socialActorCommWheelEntry_Enemies; // 0xc0
	FDataTableRowHandle m_socialActorCommWheelEntry_Acknowledge; // 0xd0
	FDataTableRowHandle m_socialActorCommWheelEntry_CancelPing; // 0xe0
	float m_socialActorPingableRadius; // 0xf0
	FMulticastInlineDelegate OnSocialActorUsed; // 0xf8
	AYSocialActor* m_socialActorClass; // 0x108
	TMap<FName, AYSocialActor*> m_socialActorsActive; // 0x110
	TMap<FName, AYSocialActor*> m_acknowledgedSocalActors; // 0x160
	ECollisionChannel m_traceChannel; // 0x1b0
};

struct ACameraActor : AActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x240
	UCameraComponent* CameraComponent; // 0x248
	USceneComponent* SceneComponent; // 0x250
	char bConstrainAspectRatio : 1; // 0x260
	float AspectRatio; // 0x264
	float FOVAngle; // 0x268
	float PostProcessBlendWeight; // 0x26c
	FPostProcessSettings PostProcessSettings; // 0x270
};

struct UItemComponent_StatsEntryText_WBP_C : UYWidget_ItemComponentStatsEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x438
	UYTextBlock* Difference; // 0x440
	UCanvasPanel* DifferenceCanvas; // 0x448
	UYTextBlock* Number; // 0x450
	UYTextBlock* Title; // 0x458
	UYTextBlock* YTextBlock_4; // 0x460
	UYTextBlock* YTextBlock_5; // 0x468
	FText TitleOverride; // 0x470
	FMulticastInlineDelegate StatsNumberSet; // 0x488
};

struct APhononProbeVolume : AVolume {
	EPhononProbePlacementStrategy PlacementStrategy; // 0x278
	float HorizontalSpacing; // 0x27c
	float HeightAboveFloor; // 0x280
	int32_t NumProbes; // 0x284
	int32_t ProbeDataSize; // 0x288
	TArray<FBakedDataInfo> BakedDataInfo; // 0x290
	UPhononProbeComponent* PhononProbeComponent; // 0x2a0
	FString ProbeBoxFileName; // 0x2a8
	FString ProbeBatchFileName; // 0x2b8
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct USubmixEffectReverbPluginPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbPluginSettings Settings; // 0x91
};

struct UWBP_Inventory_DragItem_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* OnDragStarted; // 0x268
	UTextBlock* amountText; // 0x270
	UImage* DragImage; // 0x278
	UImage* Image_179; // 0x280
	USizeBox* ImageSizeBox; // 0x288
	FYInventoryItem Item; // 0x290
	FDataTableRowHandle SFX_WeaponDragSound; // 0x328
	FDataTableRowHandle SFX_ConsumableDragSound; // 0x338
	FDataTableRowHandle SFX_MaterialDragSound; // 0x348
	FDataTableRowHandle SFX_AmmoDragSound; // 0x358
	FDataTableRowHandle SFX_GenericDragSound; // 0x368
	bool DragAmount; // 0x378
	int32_t AmountToDrag; // 0x37c
	TSoftObjectPtr<UTexture2D> LargeItemSoftReference; // 0x380
	int32_t inventoryId; // 0x3a8
};

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct UMenuAnchor : UContentWidget {
	UUserWidget* MenuClass; // 0x120
	FDelegate OnGetMenuContentEvent; // 0x128
	FDelegate OnGetUserMenuContentEvent; // 0x138
	EMenuPlacement Placement; // 0x148
	bool bFitInWindow; // 0x149
	bool ShouldDeferPaintingAfterWindowContent; // 0x14a
	bool UseApplicationMenuStack; // 0x14b
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x150
};

struct UCH_Player_ABP_Clean_C : UYPlayerCharacterAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_40; // 0x358
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_293; // 0x380
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x400
	FAnimNode_StateResult AnimGraphNode_StateResult_56; // 0x4a0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_17; // 0x4d0
	FAnimNode_Slot AnimGraphNode_Slot_19; // 0x580
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_22; // 0x5c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_39; // 0x720
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x748
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_292; // 0x7e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_291; // 0x868
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_290; // 0x8e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_289; // 0x968
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_38; // 0x9e8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0xa10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0xab0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0xb50
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0xbf0
	FAnimNode_StateResult AnimGraphNode_StateResult_55; // 0xc90
	FAnimNode_StateMachine AnimGraphNode_StateMachine_16; // 0xcc0
	FAnimNode_Slot AnimGraphNode_Slot_18; // 0xd70
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0xdb8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0xdd8
	FAnimNode_Slot AnimGraphNode_Slot_17; // 0xdf8
	FAnimNode_Slot AnimGraphNode_Slot_16; // 0xe40
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_21; // 0xe88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_37; // 0xfe0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_75; // 0x1008
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_74; // 0x1030
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_73; // 0x1058
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_72; // 0x1080
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_71; // 0x10a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_70; // 0x10d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_69; // 0x10f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_68; // 0x1120
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_67; // 0x1148
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_66; // 0x1170
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_65; // 0x1198
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_288; // 0x11c0
	FAnimNode_StateResult AnimGraphNode_StateResult_54; // 0x1240
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_125; // 0x1270
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_124; // 0x1358
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_123; // 0x1440
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_88; // 0x1528
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_122; // 0x15d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_121; // 0x16c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_120; // 0x17a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_119; // 0x1890
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_118; // 0x1978
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_117; // 0x1a60
	FAnimNode_StateResult AnimGraphNode_StateResult_53; // 0x1b48
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_18; // 0x1b78
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_17; // 0x1c68
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_16; // 0x1d58
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_87; // 0x1e48
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_15; // 0x1ef8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_14; // 0x1fe8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_13; // 0x20d8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_12; // 0x21c8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_11; // 0x22b8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_10; // 0x23a8
	FAnimNode_StateResult AnimGraphNode_StateResult_52; // 0x2498
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_116; // 0x24c8
	FAnimNode_StateResult AnimGraphNode_StateResult_51; // 0x25b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_287; // 0x25e0
	FAnimNode_StateResult AnimGraphNode_StateResult_50; // 0x2660
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_286; // 0x2690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_285; // 0x2710
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_115; // 0x2790
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_114; // 0x2878
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_113; // 0x2960
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_112; // 0x2a48
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_111; // 0x2b30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_284; // 0x2c18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_283; // 0x2c98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_282; // 0x2d18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_281; // 0x2d98
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_86; // 0x2e18
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_85; // 0x2ec8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x2f78
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x3018
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_110; // 0x30b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_109; // 0x31a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_108; // 0x3288
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_107; // 0x3370
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_106; // 0x3458
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_105; // 0x3540
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_280; // 0x3628
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_279; // 0x36a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_278; // 0x3728
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_277; // 0x37a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_276; // 0x3828
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_275; // 0x38a8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_84; // 0x3928
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_83; // 0x39d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_274; // 0x3a88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_273; // 0x3b08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_272; // 0x3b88
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_104; // 0x3c08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_103; // 0x3cf0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_102; // 0x3dd8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_82; // 0x3ec0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_101; // 0x3f70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_271; // 0x4058
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_81; // 0x40d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_270; // 0x4188
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_269; // 0x4208
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_268; // 0x4288
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_267; // 0x4308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_266; // 0x4388
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_100; // 0x4408
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_99; // 0x44f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_98; // 0x45d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_97; // 0x46c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_96; // 0x47a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_265; // 0x4890
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_95; // 0x4910
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_264; // 0x49f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x4a78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_94; // 0x4b18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x4c00
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_93; // 0x4ca0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_263; // 0x4d88
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_92; // 0x4e08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_262; // 0x4ef0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_261; // 0x4f70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_260; // 0x4ff0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_80; // 0x5070
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x5120
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_79; // 0x51c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_259; // 0x5270
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_91; // 0x52f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_90; // 0x53d8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_89; // 0x54c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_88; // 0x55a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x5690
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x5730
	FAnimNode_StateResult AnimGraphNode_StateResult_49; // 0x57d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_87; // 0x5800
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_86; // 0x58e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_85; // 0x59d0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_78; // 0x5ab8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_84; // 0x5b68
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_83; // 0x5c50
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_82; // 0x5d38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_81; // 0x5e20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_80; // 0x5f08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_79; // 0x5ff0
	FAnimNode_StateResult AnimGraphNode_StateResult_48; // 0x60d8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_9; // 0x6108
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_8; // 0x61f8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_7; // 0x62e8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_77; // 0x63d8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_6; // 0x6488
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_5; // 0x6578
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_4; // 0x6668
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_3; // 0x6758
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x6848
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x6938
	FAnimNode_StateResult AnimGraphNode_StateResult_47; // 0x6a28
	FAnimNode_StateMachine AnimGraphNode_StateMachine_15; // 0x6a58
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_10; // 0x6b08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_36; // 0x6bc8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_20; // 0x6bf0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9; // 0x6d48
	FAnimNode_Slot AnimGraphNode_Slot_15; // 0x6e08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x6e50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_64; // 0x6ef0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_63; // 0x6f18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_62; // 0x6f40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_61; // 0x6f68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_60; // 0x6f90
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_59; // 0x6fb8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_58; // 0x6fe0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_258; // 0x7008
	FAnimNode_StateResult AnimGraphNode_StateResult_46; // 0x7088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_257; // 0x70b8
	FAnimNode_StateResult AnimGraphNode_StateResult_45; // 0x7138
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_256; // 0x7168
	FAnimNode_StateResult AnimGraphNode_StateResult_44; // 0x71e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_78; // 0x7218
	FAnimNode_StateResult AnimGraphNode_StateResult_43; // 0x7300
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0x7330
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_255; // 0x73f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_77; // 0x7478
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0x7560
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_254; // 0x7628
	FAnimNode_StateResult AnimGraphNode_StateResult_42; // 0x76a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_76; // 0x76d8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x77c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_253; // 0x7860
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x78e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_75; // 0x79a8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x7a90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_252; // 0x7b58
	FAnimNode_StateResult AnimGraphNode_StateResult_41; // 0x7bd8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_14; // 0x7c08
	FAnimNode_Slot AnimGraphNode_Slot_14; // 0x7cb8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_19; // 0x7d00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_35; // 0x7e58
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_18; // 0x7e80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0x7fd8
	FAnimNode_Slot AnimGraphNode_Slot_13; // 0x8000
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_251; // 0x8048
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0x80c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_250; // 0x8188
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_249; // 0x8208
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_248; // 0x8288
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_247; // 0x8308
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0x8388
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0x83b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0x83d8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_7; // 0x8400
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_6; // 0x8590
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0x8720
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_76; // 0x8748
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0x87f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0x8820
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x8848
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x88e8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_5; // 0x8988
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_4; // 0x8b18
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x8ca8
	FAnimNode_StateResult AnimGraphNode_StateResult_40; // 0x8e38
	FAnimNode_StateMachine AnimGraphNode_StateMachine_13; // 0x8e68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0x8f18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0x8f40
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_17; // 0x8f68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x90c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0x9160
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16; // 0x9188
	FAnimNode_Root AnimGraphNode_Root_3; // 0x92e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0x9310
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x9418
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0x9438
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x9460
	FAnimNode_Slot AnimGraphNode_Slot_12; // 0x9480
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x94c8
	FAnimNode_Slot AnimGraphNode_Slot_11; // 0x9590
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0x95d8
	FAnimNode_Slot AnimGraphNode_Slot_10; // 0x9698
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_15; // 0x96e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x9838
	FAnimNode_Slot AnimGraphNode_Slot_9; // 0x9860
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x98a8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x9948
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0x9a10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x9b68
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0x9b90
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x9bd8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x9c98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x9cc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x9e18
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0x9e40
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0x9f98
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0xa0a0
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0xa0c0
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0xa108
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0xa150
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0xa1f0
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0xa218
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0xa260
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0xa288
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0xa328
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0xa480
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0xa4a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0xa4d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_246; // 0xa4f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0xa578
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0xa5a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_75; // 0xa5c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0xa670
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0xa698
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0xa6e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0xa7a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0xa7d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_57; // 0xa890
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_56; // 0xa8b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_55; // 0xa8e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_54; // 0xa908
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_53; // 0xa930
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_52; // 0xa958
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_51; // 0xa980
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_50; // 0xa9a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0xa9d0
	FAnimNode_StateResult AnimGraphNode_StateResult_39; // 0xa9f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_245; // 0xaa28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_244; // 0xaaa8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_243; // 0xab28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_242; // 0xaba8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_241; // 0xac28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_240; // 0xaca8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_239; // 0xad28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_238; // 0xada8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_237; // 0xae28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_236; // 0xaea8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_235; // 0xaf28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_234; // 0xafa8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_233; // 0xb028
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_232; // 0xb0a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_231; // 0xb128
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_230; // 0xb1a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_229; // 0xb228
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_228; // 0xb2a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_227; // 0xb328
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_226; // 0xb3a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_225; // 0xb428
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_224; // 0xb4a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_223; // 0xb528
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_222; // 0xb5a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_221; // 0xb628
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_220; // 0xb6a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_219; // 0xb728
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_218; // 0xb7a8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_74; // 0xb828
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_73; // 0xb8d8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_72; // 0xb988
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_71; // 0xba38
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_70; // 0xbae8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_69; // 0xbb98
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_68; // 0xbc48
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_67; // 0xbcf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_217; // 0xbda8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0xbe28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_216; // 0xbec8
	FAnimNode_StateResult AnimGraphNode_StateResult_38; // 0xbf48
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_52; // 0xbf78
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_51; // 0xbfc8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_50; // 0xc018
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_49; // 0xc068
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_48; // 0xc0b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_47; // 0xc108
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_46; // 0xc158
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_45; // 0xc1a8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_44; // 0xc1f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_43; // 0xc248
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_42; // 0xc298
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_41; // 0xc2e8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_40; // 0xc338
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_39; // 0xc388
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_38; // 0xc3d8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_37; // 0xc428
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_36; // 0xc478
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_35; // 0xc4c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_34; // 0xc518
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_33; // 0xc568
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_32; // 0xc5b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_31; // 0xc608
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_30; // 0xc658
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_29; // 0xc6a8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_28; // 0xc6f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_27; // 0xc748
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_26; // 0xc798
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_25; // 0xc7e8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_24; // 0xc838
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_66; // 0xc888
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_65; // 0xc938
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_64; // 0xc9e8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_63; // 0xca98
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_62; // 0xcb48
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_61; // 0xcbf8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_60; // 0xcca8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_59; // 0xcd58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0xce08
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_23; // 0xcea8
	FAnimNode_StateResult AnimGraphNode_StateResult_37; // 0xcef8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_12; // 0xcf28
	FAnimNode_StateResult AnimGraphNode_StateResult_36; // 0xcfd8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_22; // 0xd008
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_21; // 0xd058
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_20; // 0xd0a8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_19; // 0xd0f8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_18; // 0xd148
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_17; // 0xd198
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_16; // 0xd1e8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_15; // 0xd238
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_14; // 0xd288
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_13; // 0xd2d8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_12; // 0xd328
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_11; // 0xd378
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_10; // 0xd3c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_9; // 0xd418
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_8; // 0xd468
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7; // 0xd4b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6; // 0xd508
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5; // 0xd558
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0xd5a8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0xd5f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_58; // 0xd648
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_57; // 0xd6f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_56; // 0xd7a8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_55; // 0xd858
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_54; // 0xd908
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_53; // 0xd9b8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_52; // 0xda68
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_51; // 0xdb18
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xdbc8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xdc18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0xdc68
	FAnimNode_StateResult AnimGraphNode_StateResult_35; // 0xdd08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0xdd38
	FAnimNode_StateResult AnimGraphNode_StateResult_34; // 0xdd60
	FAnimNode_StateMachine AnimGraphNode_StateMachine_11; // 0xdd90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0xde40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_49; // 0xde68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_48; // 0xde90
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_47; // 0xdeb8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_46; // 0xdee0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_215; // 0xdf08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_214; // 0xdf88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_213; // 0xe008
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_212; // 0xe088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_211; // 0xe108
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_210; // 0xe188
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_209; // 0xe208
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_208; // 0xe288
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_207; // 0xe308
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_206; // 0xe388
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_50; // 0xe408
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_205; // 0xe4b8
	FAnimNode_StateResult AnimGraphNode_StateResult_33; // 0xe538
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_74; // 0xe568
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_73; // 0xe650
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_72; // 0xe738
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_71; // 0xe820
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_70; // 0xe908
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_69; // 0xe9f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_68; // 0xead8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_67; // 0xebc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_66; // 0xeca8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_65; // 0xed90
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_49; // 0xee78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_64; // 0xef28
	FAnimNode_StateResult AnimGraphNode_StateResult_32; // 0xf010
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_204; // 0xf040
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_203; // 0xf0c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_202; // 0xf140
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_201; // 0xf1c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_200; // 0xf240
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_199; // 0xf2c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_198; // 0xf340
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_197; // 0xf3c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_196; // 0xf440
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_195; // 0xf4c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_48; // 0xf540
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_194; // 0xf5f0
	FAnimNode_StateResult AnimGraphNode_StateResult_31; // 0xf670
	FAnimNode_StateMachine AnimGraphNode_StateMachine_10; // 0xf6a0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0xf750
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_45; // 0xf8a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_44; // 0xf8d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43; // 0xf8f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42; // 0xf920
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41; // 0xf948
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_40; // 0xf970
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39; // 0xf998
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38; // 0xf9c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37; // 0xf9e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36; // 0xfa10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0xfa38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0xfa60
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0xfa88
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0xfab0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0xfad8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0xfb00
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0xfb28
	FAnimNode_StateResult AnimGraphNode_StateResult_30; // 0xfb50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_193; // 0xfb80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_192; // 0xfc00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_191; // 0xfc80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_190; // 0xfd00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_189; // 0xfd80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_188; // 0xfe00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_187; // 0xfe80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_186; // 0xff00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_185; // 0xff80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_184; // 0x10000
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_47; // 0x10080
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_183; // 0x10130
	FAnimNode_StateResult AnimGraphNode_StateResult_29; // 0x101b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_182; // 0x101e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_181; // 0x10260
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_180; // 0x102e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_179; // 0x10360
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_178; // 0x103e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_177; // 0x10460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_176; // 0x104e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_175; // 0x10560
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_174; // 0x105e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_173; // 0x10660
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_46; // 0x106e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_172; // 0x10790
	FAnimNode_StateResult AnimGraphNode_StateResult_28; // 0x10810
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_171; // 0x10840
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_170; // 0x108c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_169; // 0x10940
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_168; // 0x109c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_167; // 0x10a40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_166; // 0x10ac0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_165; // 0x10b40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_164; // 0x10bc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_163; // 0x10c40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_162; // 0x10cc0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_45; // 0x10d40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_161; // 0x10df0
	FAnimNode_StateResult AnimGraphNode_StateResult_27; // 0x10e70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_160; // 0x10ea0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_159; // 0x10f20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_158; // 0x10fa0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_157; // 0x11020
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_156; // 0x110a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_155; // 0x11120
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_154; // 0x111a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_153; // 0x11220
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_152; // 0x112a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_151; // 0x11320
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_44; // 0x113a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_150; // 0x11450
	FAnimNode_StateResult AnimGraphNode_StateResult_26; // 0x114d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_149; // 0x11500
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_148; // 0x11580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_147; // 0x11600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_146; // 0x11680
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_145; // 0x11700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_144; // 0x11780
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_143; // 0x11800
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_142; // 0x11880
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_141; // 0x11900
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_140; // 0x11980
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_43; // 0x11a00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_139; // 0x11ab0
	FAnimNode_StateResult AnimGraphNode_StateResult_25; // 0x11b30
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x11b60
	FAnimNode_StateResult AnimGraphNode_StateResult_24; // 0x11b88
	FAnimNode_StateMachine AnimGraphNode_StateMachine_9; // 0x11bb8
	FAnimNode_StateResult AnimGraphNode_StateResult_23; // 0x11c68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x11c98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x11cc0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x11ce8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x11d10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x11d38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x11d60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_63; // 0x11d88
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_62; // 0x11e70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_61; // 0x11f58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_60; // 0x12040
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_59; // 0x12128
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_58; // 0x12210
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_57; // 0x122f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_56; // 0x123e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_55; // 0x124c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_54; // 0x125b0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_42; // 0x12698
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_53; // 0x12748
	FAnimNode_StateResult AnimGraphNode_StateResult_22; // 0x12830
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_138; // 0x12860
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_137; // 0x128e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_136; // 0x12960
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_135; // 0x129e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_134; // 0x12a60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_133; // 0x12ae0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_132; // 0x12b60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_131; // 0x12be0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_130; // 0x12c60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_129; // 0x12ce0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_41; // 0x12d60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_128; // 0x12e10
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x12e90
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_52; // 0x12ec0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_51; // 0x12fa8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_50; // 0x13090
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_49; // 0x13178
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_48; // 0x13260
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_47; // 0x13348
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_46; // 0x13430
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_45; // 0x13518
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_44; // 0x13600
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_43; // 0x136e8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_40; // 0x137d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_42; // 0x13880
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x13968
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x13998
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x139c0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_8; // 0x139f0
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x13aa0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_7; // 0x13ad0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x13b80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x13cd8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x13d00
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x13d28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x13d50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x13d78
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x13da0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x13dd0
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x13e80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x13eb0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x13ed8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x13f00
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x13f28
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x13f50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x13f78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_127; // 0x13fa0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_126; // 0x14020
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_125; // 0x140a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_124; // 0x14120
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_123; // 0x141a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_122; // 0x14220
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_121; // 0x142a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_120; // 0x14320
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_119; // 0x143a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_118; // 0x14420
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_117; // 0x144a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_116; // 0x14520
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_115; // 0x145a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_114; // 0x14620
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_39; // 0x146a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_38; // 0x14750
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_37; // 0x14800
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_36; // 0x148b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_113; // 0x14960
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x149e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_112; // 0x14a10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_111; // 0x14a90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_110; // 0x14b10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_109; // 0x14b90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_108; // 0x14c10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_107; // 0x14c90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_106; // 0x14d10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_105; // 0x14d90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_104; // 0x14e10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_103; // 0x14e90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_102; // 0x14f10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_101; // 0x14f90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_100; // 0x15010
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_99; // 0x15090
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_35; // 0x15110
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_34; // 0x151c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_33; // 0x15270
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_32; // 0x15320
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_98; // 0x153d0
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x15450
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_97; // 0x15480
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96; // 0x15500
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_95; // 0x15580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94; // 0x15600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_93; // 0x15680
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_92; // 0x15700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_91; // 0x15780
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_90; // 0x15800
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_89; // 0x15880
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_88; // 0x15900
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_87; // 0x15980
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_86; // 0x15a00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_85; // 0x15a80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_84; // 0x15b00
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_31; // 0x15b80
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_30; // 0x15c30
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_29; // 0x15ce0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_28; // 0x15d90
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83; // 0x15e40
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x15ec0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x15ef0
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x15f18
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x15f48
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x15ff8
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x16028
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x16058
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x16108
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x16260
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x16288
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x162b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x162d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_82; // 0x16300
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_81; // 0x16380
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_80; // 0x16400
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79; // 0x16480
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78; // 0x16500
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77; // 0x16580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_76; // 0x16600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_75; // 0x16680
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_74; // 0x16700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_73; // 0x16780
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_27; // 0x16800
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72; // 0x168b0
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x16930
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_41; // 0x16960
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_40; // 0x16a48
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_39; // 0x16b30
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_38; // 0x16c18
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_37; // 0x16d00
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_36; // 0x16de8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_35; // 0x16ed0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_34; // 0x16fb8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_33; // 0x170a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_26; // 0x17188
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_32; // 0x17238
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_31; // 0x17320
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x17408
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_71; // 0x17438
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x174b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x17538
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x175b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x17638
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x176b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x17738
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x177b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x17838
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x178b8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_25; // 0x17938
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x179e8
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x17a68
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x17a98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x17b48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x17ca0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x17cc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x17cf0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x17d18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x17d40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x17dc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x17e40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x17ec0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x17f40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x17fc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x18040
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x180c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x18140
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x181c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x18240
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x182c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x18340
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x183c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_24; // 0x18440
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_23; // 0x184f0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_22; // 0x185a0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_21; // 0x18650
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x18700
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x18780
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_30; // 0x187b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_29; // 0x18898
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_28; // 0x18980
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_27; // 0x18a68
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_26; // 0x18b50
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_25; // 0x18c38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_24; // 0x18d20
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_23; // 0x18e08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_22; // 0x18ef0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0x18fd8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0x190c0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x191a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x19290
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x19378
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_20; // 0x19460
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_19; // 0x19510
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_18; // 0x195c0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_17; // 0x19670
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x19720
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x19808
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0x19838
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0x198b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0x19938
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0x199b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0x19a38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0x19ab8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0x19b38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0x19bb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0x19c38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0x19cb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0x19d38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0x19db8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x19e38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x19eb8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_16; // 0x19f38
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_15; // 0x19fe8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_14; // 0x1a098
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_13; // 0x1a148
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x1a1f8
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x1a278
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x1a2a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x1a358
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x1a4b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x1a4d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x1a500
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x1a528
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x1a550
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x1a5d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x1a650
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x1a6d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x1a750
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x1a7d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x1a850
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x1a8d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x1a950
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x1a9d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x1aa50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x1aad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x1ab50
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x1abd0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_12; // 0x1ac50
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_11; // 0x1ad00
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_10; // 0x1adb0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_9; // 0x1ae60
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x1af10
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1af90
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x1afc0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x1b0a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x1b190
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x1b278
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x1b360
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x1b448
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x1b530
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x1b618
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x1b700
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x1b7e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x1b8d0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x1b9b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x1baa0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1bb88
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_8; // 0x1bc70
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_7; // 0x1bd20
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_6; // 0x1bdd0
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_5; // 0x1be80
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1bf30
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1c018
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x1c048
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x1c0c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x1c148
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x1c1c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x1c248
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x1c2c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x1c348
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x1c3c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x1c448
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x1c4c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1c548
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1c5c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x1c648
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1c6c8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x1c748
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x1c7f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x1c8a8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1c958
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1ca08
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1ca88
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1cab8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x1cb68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1ccc0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x1cce8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x1ce40
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x1cf00
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x1d090
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x1d220
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1d240
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x1d2e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x1d3a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1d440
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1d468
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x1d5c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x1d5e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x1d740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x1d768
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1d788
	FAnimNode_Root AnimGraphNode_Root_2; // 0x1d8e0
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x1d910
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x1d958
	FAnimNode_Slot AnimGraphNode_Slot; // 0x1d9a0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1d9e8
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x1daa8
	FAnimNode_Root AnimGraphNode_Root; // 0x1dac0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1daf0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0x1dbb0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x1dcb8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x1ddc0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x1dec8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x1dfd0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x1dff0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x1e0f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x1e200
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x1e308
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x1e328
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x1e3c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x1e3e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x1e4e8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x1e5f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x1e6f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x1e800
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1e908
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1ea10
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1eb18
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1ec20
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ec40
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; // 0x1ec60
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x1ed10
	float FinterpDeltaPitch; // 0x1edc0
	float FinterpDeltaYaw; // 0x1edc4
	bool IsAiming; // 0x1edc8
	float LowerbodyBlend; // 0x1edcc
	bool DoRotationReset; // 0x1edd0
	float Speed; // 0x1edd4
	bool IsJumping; // 0x1edd8
	bool IsCrouching; // 0x1edd9
	float Direction; // 0x1eddc
	float DeltaWorldRotationYaw; // 0x1ede0
	bool IsDBNO; // 0x1ede4
	bool IsSprinting; // 0x1ede5
	bool doJump; // 0x1ede6
	float JumpTime; // 0x1ede8
	float AimPitch; // 0x1edec
	FRotator DeltaWorldRotation; // 0x1edf0
	bool IsFirstPerson; // 0x1edfc
	float LeftHandOverrideAlpha; // 0x1ee00
	bool overrideLeftArm; // 0x1ee04
	bool isInteracting; // 0x1ee05
	UAnimMontage* AbilityMontage; // 0x1ee08
	float DeltaTimeX; // 0x1ee10
	AYPlayerCharacter* ShooterChar; // 0x1ee18
	float DeltaSpeed; // 0x1ee20
	float SpeedZ; // 0x1ee24
	float DeltaSpeedInterp; // 0x1ee28
	float CrouchAlpha; // 0x1ee2c
	FRotator AimRotation; // 0x1ee30
	float AimYaw; // 0x1ee3c
	bool IsRunOnDedicatedServer; // 0x1ee40
	EYEquipedWeaponPoseType EquipedPoseType; // 0x1ee41
	float AimposeAlpha; // 0x1ee44
	float leftHandOverrideBlendInTime; // 0x1ee48
	float leftHandOverrideBlendOutTime; // 0x1ee4c
	bool ForceFullbody; // 0x1ee50
	UAnimMontage* EmoteVariable; // 0x1ee58
	bool IsSliding; // 0x1ee60
	UAnimMontage* FlinchMontage; // 0x1ee68
	bool isEmoting; // 0x1ee70
	bool doAimTransition; // 0x1ee71
	bool stopAimTransition; // 0x1ee72
	float ActiveTargetingTime; // 0x1ee74
	EYEquipedAnimationWeaponType EquipedWeaponType; // 0x1ee78
	float BasePosePlayRate; // 0x1ee7c
	bool isLeftHandBlocked; // 0x1ee80
	float FlinchAlpha; // 0x1ee84
	float JumpSpeedZ; // 0x1ee88
	float InitialJumpVelocity; // 0x1ee8c
	float isJumpAimingInterp; // 0x1ee90
	UAnimMontage* 3rdPSlideMontage; // 0x1ee98
	EYDeviceCategory EquipedDeviceCategory; // 0x1eea0
	bool IsVehicle; // 0x1eea1
	UHoverBike_ABP_C* VehicleVim; // 0x1eea8
	FRotator CapsuleRotation; // 0x1eeb0
	FRotator cameraPawnDelta; // 0x1eebc
	UYPlayerMovementComponent* PlayerMoveComponent; // 0x1eec8
	float MoveForwardInputFloat; // 0x1eed0
	bool doBoost; // 0x1eed4
	float VehicleBoostAlpha; // 0x1eed8
	UAnimMontage* DeathEmote; // 0x1eee0
	float AdditiveAlphaFloat; // 0x1eee8
	float RecoilWeaponOffsetLeftRight; // 0x1eeec
	float RecoilWeaponOffsetUpDown; // 0x1eef0
	UYWeaponPlayerControllerRuntimeComponent* WeaponRuntimeComponentRef; // 0x1eef8
	FRotator WeaponAimUpRot; // 0x1ef00
	float RecoilSystemAlpha; // 0x1ef0c
	float FInterpDeltaSpringYaw; // 0x1ef10
	FFloatSpringState YawSpringState; // 0x1ef14
	float FinterpDeltaSpringPitch; // 0x1ef1c
	FFloatSpringState PitchSpringState; // 0x1ef20
	bool IsClimbing; // 0x1ef28
	float ClimbingAlpha; // 0x1ef2c
	float ClimbingNormalOffsetYaw; // 0x1ef30
	float ClimbingNormalYawInterp; // 0x1ef34
	FRotator ClimbingDeltaYawRot; // 0x1ef38
	float AimPoseStabilizeAlpha; // 0x1ef44
	float FirstPersonAlpha; // 0x1ef48
	bool IsIdle; // 0x1ef4c
	bool IsTurning; // 0x1ef4d
	bool IsTurningLeft; // 0x1ef4e
	float JumpUpNormalizedTime; // 0x1ef50
	float JumpDownNormalizedTime; // 0x1ef54
	bool Is Proning; // 0x1ef58
	FVector 1stPersonProneOffset; // 0x1ef5c
	float LeanCounterRotateAngleFirstPerson; // 0x1ef68
	float LeanCounterRotateAngleThirdPerson; // 0x1ef6c
	bool QuickInteraction; // 0x1ef70
	UAnimMontage* CommWheelMontage; // 0x1ef78
	float ScopeOffset; // 0x1ef80
	UBlendSpaceBase* 1PDefaultAO; // 0x1ef88
	UBlendSpaceBase* 1PAimAO; // 0x1ef90
	FRotator AimPitchRotator; // 0x1ef98
	float LeaningAlpha; // 0x1efa4
	FRotator LeaningRotator; // 0x1efa8
	FVector LeaningVectorFirstPerson; // 0x1efb4
	FRotator LeanAngleFirstPersonRotator; // 0x1efc0
	USceneComponent* CurrentWeaponMagazineSK; // 0x1efd0
	FVector LeftHandReloadOffsetVector; // 0x1efd8
	FRotator LeftHandReloadOffsetRotator; // 0x1efe4
	bool IsReloading; // 0x1eff0
	float InitialRotationYawF; // 0x1eff4
	float CurrentRotationYawF; // 0x1eff8
	float DeltaRotationYawF; // 0x1effc
	float CurrentRotationPitchF; // 0x1f000
	float DeltaRotationPitchF; // 0x1f004
};

struct UOnboarding_05_CraftingStation_C : UMS_Line_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1b0
	FDataTableRowHandle badumSceneRowHandle; // 0x1b8
	FName badumId; // 0x1c8
	FName SceneToInteract; // 0x1d0
	FDataTableRowHandle craftingStationSceneRowHandle; // 0x1d8
	FDataTableRowHandle craftingStationNpcRowHandle; // 0x1e8
	FName craftingStationId; // 0x1f8
};

struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	TArray<bool> BoolData; // 0x50
};

struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct USynthSamplePlayer : USynthComponent {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
};

struct UYWidgetController_Timer : UYWidgetController {
	float m_timerFirstDelay; // 0x48
	float m_timerUpdateRate; // 0x4c
	float m_timerDurationInSeconds; // 0x50
	bool m_countUpwards; // 0x54
	EYTimerDisplayType m_timerDisplayType; // 0x55
};

struct UOnboarding_04_PlayerQuarter_C : UMS_Line_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1b0
	FName SceneToInteract; // 0x1b8
	FDataTableRowHandle techTreeSceneRowHandle; // 0x1c0
	FDataTableRowHandle generatorsSceneRowHandle; // 0x1d0
	FName badumId; // 0x1e0
	FDataTableRowHandle badumSceneRowHandle; // 0x1e8
	FDataTableRowHandle techTreeNpcRowHandle; // 0x1f8
	FDataTableRowHandle generatorsNpcRowHandle; // 0x208
	FDataTableRowHandle techtreeNodeToUnlock; // 0x218
};

struct UFriendUserEntry_WBP_C : UYWidget_UserEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UYButton* contextMenuYButton; // 0x348
	UImage* Image_94; // 0x350
	UYTextBlock* onlineStatusText; // 0x358
	UWidgetSwitcher* onlineStatusWidgetSwitcher; // 0x360
	UImage* selectedBG; // 0x368
	UImage* SquadBG; // 0x370
	UImage* SquadIcon; // 0x378
	UYTextBlock* squadSize; // 0x380
	UYTextBlock* statusSeparatorText; // 0x388
	UUI_ImageBase_WBP_C* UI_ImageBase_WBP; // 0x390
	UYTextBlock* Username; // 0x398
	UYTextBlock* userStatusText; // 0x3a0
	UYProgressBarProspectorLevel_WBP_C* YProgressBarProspectorLevel_WBP; // 0x3a8
	FMulticastInlineDelegate OpenContextMenu; // 0x3b0
};

struct UWBP_SquadTalking_C : UYWidget_TalkingIcon {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d8
	UImage* Gfx_Circle; // 0x2e0
	UCanvasPanel* GraphicHolder; // 0x2e8
	UImage* Icn_Talking; // 0x2f0
	bool ShowBacker; // 0x2f8
};

struct UYPlayerVFXComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UParticleSystemComponent* interaction01_PS; // 0xb8
	UYPlayerCharacterStateComponent* playerCharacter_StateComp; // 0xc0
	APRO_PlayerCharacter_C* playerCharacter; // 0xc8
	UParticleSystemComponent* gearStore01_PS; // 0xd0
	int32_t ForwardDash_jumpCounter; // 0xd8
};

struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct AYAIEQSTargetDummy : AActor {
	AYAIEQSTestingPawn* m_associatedEqsTestingPawn; // 0x240
};

struct AYExtractionActivationActor : AActor {
	UYObjectInteractionComponent* m_interactionComponent; // 0x240
	AYExtractionActor* m_extractionActor; // 0x248
};

struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct UMaterialExpressionRuntimeVirtualTextureSample : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	FExpressionInput WorldPosition; // 0x54
	FExpressionInput MipValue; // 0x68
	URuntimeVirtualTexture* VirtualTexture; // 0x80
	ERuntimeVirtualTextureMaterialType MaterialType; // 0x88
	bool bSinglePhysicalSpace; // 0x89
	bool bAdaptive; // 0x8a
	ERuntimeVirtualTextureMipValueMode MipValueMode; // 0x8b
	ERuntimeVirtualTextureTextureAddressMode TextureAddressMode; // 0x8c
};

struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UYAIAttackComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnFired; // 0xb0
	int32_t m_currentPhasePlayCount; // 0xc0
	float m_currentPhaseDuration; // 0xc4
	FYReplicatedAttackRuntimeData m_replicatedRuntimeData; // 0xc8
	int32_t m_numShotsFiredInCurrentPhase; // 0xd4
	FMulticastInlineDelegate BP_OnAttackStarted; // 0xf0
	FMulticastInlineDelegate BP_OnAttackEnded; // 0x100
	FMulticastInlineDelegate BP_OnNewPhaseStarted; // 0x110
};

struct UInteractiveToolManager : UObject {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
};

struct UAnimNotify_AICombo_C : UAnimNotify {
	FGameplayTagContainer PossibleComboAttackTags; // 0x38
};

struct UWBP_StartupMessagesContainer_C : UYWidgetView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UVerticalBox* Box_AddedBindings; // 0x340
	UScrollBox* Box_Content; // 0x348
	UVerticalBox* Box_RemovedBindings; // 0x350
	UImage* HACK_InputBlocker; // 0x358
	UImage* HACK_InputBlocker_2; // 0x360
	UOverlay* Overlay_AddedBindings; // 0x368
	UOverlay* Overlay_RemovedBindings; // 0x370
	URichTextBlock* RichTxt_KeybindsInfo; // 0x378
	UTextBlock* Txt_Added; // 0x380
	UTextBlock* Txt_Removed; // 0x388
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Bottom; // 0x390
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Top; // 0x398
	UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn; // 0x3a0
	UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_2; // 0x3a8
	UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_3; // 0x3b0
	UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_4; // 0x3b8
	UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_5; // 0x3c0
	UWBP_Keybinding_Btn_C* WBP_Keybinding_Btn_6; // 0x3c8
	UWBP_Generic_Modal_C* WBP_Keybindings_Modal; // 0x3d0
	UWBP_RetentionBonus_C* WBP_RetentionBonus; // 0x3d8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item; // 0x3e0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_2; // 0x3e8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_3; // 0x3f0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_4; // 0x3f8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_5; // 0x400
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_6; // 0x408
	UWidgetSwitcher* WidgetSwitcher_27; // 0x410
};

struct UWBP_SquadOverview_Entry_C : UYWidget_OutpostSquadOverviewEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x360
	UWidgetAnimation* HighlightBracket_Anim; // 0x368
	UImage* addMemberImage; // 0x370
	UImage* Gfx_PlayerBackground; // 0x378
	UImage* Gfx_PlayerBackgroundStroke; // 0x380
	UImage* Gfx_StatusNotReady; // 0x388
	UImage* Gfx_StatusNotReadyBacker; // 0x390
	UImage* Gfx_StatusReady; // 0x398
	UImage* Gfx_StatusReadyBacker; // 0x3a0
	UImage* Gfx_StatusReadyUnder; // 0x3a8
	UImage* Icn_Avatar; // 0x3b0
	UUI_ImageBase_WBP_C* Image; // 0x3b8
	UOverlay* ReadyStatus; // 0x3c0
	UWidgetSwitcher* StatusSwitcher; // 0x3c8
	UWBP_SquadTalking_C* talkingIcon_Image; // 0x3d0
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x3d8
	UYWidget_ProspectorLevel_Small_WBP_C* YWidget_ProspectorLevel_Small_WBP; // 0x3e0
	UWBP_Generic_ToolTip_C* Add_ToolTipWidget; // 0x3e8
	UWBP_Generic_ToolTip_C* Player_ToolTipWidget; // 0x3f0
	FText Player Name; // 0x3f8
	bool IsOwnPlayer; // 0x410
};

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct UYWebBrowser : UWebBrowser {
	FString m_limitDomain; // 0x150
	bool m_bShowInDesigner; // 0x160
};

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98
};

struct UBTNode : UObject {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UARCandidateImage : UDataAsset {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct UYCharacterBannerComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnBannerSpawned; // 0xb0
	EYVanityType m_selectedVanityType; // 0xc0
	FYGlobalVanityItem m_SelectedVanityItem; // 0xc8
	AYBannerActor* m_localBannerAttachActor; // 0x100
	AYBannerActor* m_spawnedBannerAuthority; // 0x108
	TArray<AYSprayActor*> m_spawnedSpraysAuthority; // 0x110
	int32_t m_spawnedSprayCounter; // 0x120
};

struct UYPlayerEscapeComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	bool CanEscape; // 0xb8
	bool IsOwnerInDBNO; // 0xb9
	bool WasAbleToEscapePriorToDBNO; // 0xba
	bool HasShownNotification; // 0xbb
	FDataTableRowHandle VOHandle_ReadyToEscape; // 0xc0
};

struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UDatasmithAreaLightActorTemplate : UDatasmithObjectTemplate {
	EDatasmithAreaLightActorType LightType; // 0x30
	EDatasmithAreaLightActorShape LightShape; // 0x31
	FVector2D Dimensions; // 0x34
	FLinearColor Color; // 0x3c
	float Intensity; // 0x4c
	ELightUnits IntensityUnits; // 0x50
	float Temperature; // 0x54
	TSoftObjectPtr<UTextureLightProfile> IESTexture; // 0x58
	bool bUseIESBrightness; // 0x80
	float IESBrightnessScale; // 0x84
	FRotator Rotation; // 0x88
	float SourceRadius; // 0x94
	float SourceLength; // 0x98
	float AttenuationRadius; // 0x9c
};

struct UYWidget_ItemsOverview : UYWidget {
	UYWidget_ItemListContainer* m_itemsContainer; // 0x300
	UYWidget_ItemListContainer* m_specialCraftingBlueprintsContainer; // 0x308
	TArray<UYWidget_ItemListContainer*> m_factionCraftingBlueprintListContainers; // 0x310
	UComboBoxString* m_sortByComboBox; // 0x320
	UComboBoxString* m_deviceCategoryFilterComboBox; // 0x328
	UComboBoxString* m_miscCategoryFilterComboBox; // 0x330
	UComboBoxString* m_factionsFilterComboBox; // 0x338
	bool m_hideItems; // 0x340
	bool m_hideBlueprints; // 0x341
	UYWidget_ItemCategories* m_itemCategoriesClass; // 0x348
	UYWidget_ItemContainer* m_selectedItem; // 0x350
};

struct UNavArea : UNavAreaBase {
	float DefaultCost; // 0x30
	float FixedAreaEnteringCost; // 0x34
	FColor DrawColor; // 0x38
	FNavAgentSelector SupportedAgents; // 0x3c
	char bSupportsAgent0 : 1; // 0x40
	char bSupportsAgent1 : 1; // 0x40
	char bSupportsAgent2 : 1; // 0x40
	char bSupportsAgent3 : 1; // 0x40
	char bSupportsAgent4 : 1; // 0x40
	char bSupportsAgent5 : 1; // 0x40
	char bSupportsAgent6 : 1; // 0x40
	char bSupportsAgent7 : 1; // 0x40
	char bSupportsAgent8 : 1; // 0x41
	char bSupportsAgent9 : 1; // 0x41
	char bSupportsAgent10 : 1; // 0x41
	char bSupportsAgent11 : 1; // 0x41
	char bSupportsAgent12 : 1; // 0x41
	char bSupportsAgent13 : 1; // 0x41
	char bSupportsAgent14 : 1; // 0x41
	char bSupportsAgent15 : 1; // 0x41
};

struct UAISubsystem : UObject {
	UAISystem* AISystem; // 0x30
};

struct UYPlayerInputStackComponent : UActorComponent {
	FMulticastInlineDelegate OnStackTypeChanged; // 0xb0
	FMulticastInlineDelegate OnStackDataChanged; // 0xc0
	FMulticastInlineDelegate OnInputModeChanged; // 0xd0
	TArray<FYInputWidget> m_inputWidgets; // 0xe0
	TArray<FYRegisteredStackInput> m_stackInput; // 0xf0
};

struct UHorizonTweenEvent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnTweenStart; // 0x30
	FMulticastInlineDelegate OnTweenUpdate; // 0x40
	FMulticastInlineDelegate OnTweenLoop; // 0x50
	FMulticastInlineDelegate OnTweenFinished; // 0x60
};

struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct UYWidget_MessageGrantEntry : UYWidget {
	UButton* m_claimButton; // 0x2c0
	UTextBlock* m_claimButtonText; // 0x2c8
	UTextBlock* m_claimErrorText; // 0x2d0
};

struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x440
	TArray<ULandscapeSplineSegment*> Segments; // 0x450
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x460
};

struct UPrefabricatorAssetUserData : UAssetUserData {
	TWeakObjectPtr<APrefabActor> PrefabActor; // 0x28
	FGuid ItemId; // 0x30
};

struct UPaperTileMapComponent : UMeshComponent {
	int32_t MapWidth; // 0x468
	int32_t MapHeight; // 0x46c
	int32_t TileWidth; // 0x470
	int32_t TileHeight; // 0x474
	UPaperTileSet* DefaultLayerTileSet; // 0x478
	UMaterialInterface* Material; // 0x480
	TArray<UPaperTileLayer*> TileLayers; // 0x488
	FLinearColor TileMapColor; // 0x498
	int32_t UseSingleLayerIndex; // 0x4a8
	bool bUseSingleLayer; // 0x4ac
	UPaperTileMap* TileMap; // 0x4b0
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct UPlayerCharacterOutlineComponent_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FTimerHandle TimerHandle_ShowLastDamagedPawn; // 0xb8
	float TimeWhenLastDamagedLocal; // 0xc0
	bool ShowRedOutlineDueDamage; // 0xc4
	float DurationShowHostileOutline; // 0xc8
	AYPlayerState* YPlayerStateOwner; // 0xd0
	AYPlayerCharacter* YPlayerCharacterOwner; // 0xd8
	bool ShowGoldOutline; // 0xe0
};

struct UYWidgetView_CustomerSupport : UYWidgetView {
	FMulticastInlineDelegate OnSubmitSupportData; // 0x338
	FMulticastInlineDelegate OnShowSupportDialogDelegate; // 0x348
	FMulticastInlineDelegate OnClosePlayerSupportWidget; // 0x358
	FYPlayerSupportReportRequestData m_cachedData; // 0x368
	FTimerHandle m_timerHandleCustomerResponse; // 0x3a0
};

struct ALevelSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x250
	ULevelSequencePlayer* SequencePlayer; // 0x268
	FSoftObjectPath LevelSequence; // 0x270
	FLevelSequenceCameraSettings CameraSettings; // 0x288
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x290
	UMovieSceneBindingOverrides* BindingOverrides; // 0x298
	char bAutoPlay : 1; // 0x2a0
	char bOverrideInstanceData : 1; // 0x2a0
	char bReplicatePlayback : 1; // 0x2a0
	UObject* DefaultInstanceData; // 0x2a8
	ULevelSequenceBurnIn* BurnInInstance; // 0x2b0
	bool bShowBurnin; // 0x2b8
};

struct UYWidget_GameTipPanel : UYWidget {
	UYWidget_GameTipItem* m_itemWidgetClass; // 0x2c0
	UPanelWidget* m_itemContainer; // 0x2c8
	TSoftObjectPtr<UDataTable> m_tipDataTablePath; // 0x2d0
	UDataTable* m_tipDataTable; // 0x2f8
};

struct UYWidget_ItemCategoryEntry : UYWidget {
	UYButton* m_button; // 0x2d0
	UYTextBlock* m_text; // 0x2d8
};

struct UMovieSceneEntitySystem : UObject {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
};

struct UYPlayerGameDataComponent : UActorComponent {
	TArray<FYPlayerRuntimeScoreStateData> m_scoreData; // 0xb0
	FMulticastInlineDelegate OnStateChanged; // 0xc0
};

struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct USynthComponentMonoWaveTable : USynthComponent {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
};

struct UWBP_Selector_Btn_C : UYWidget_Composite {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UWidgetAnimation* Highlight_Anim; // 0x2d0
	UWidgetAnimation* PressRight_Anim; // 0x2d8
	UWidgetAnimation* PressLeft_Anim; // 0x2e0
	UButton* Btn_InputLeft; // 0x2e8
	UButton* Btn_InputRight; // 0x2f0
	UImage* Gfx_Arrow_Left; // 0x2f8
	UImage* Gfx_Arrow_Right; // 0x300
	UImage* Gfx_Backer; // 0x308
	UImage* Gfx_DecoGradient; // 0x310
	UProgressBar* ProgressBar_SelectorValue; // 0x318
	UTextBlock* Txt_SelectorValue; // 0x320
	USizeBox* ValueHolder; // 0x328
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x330
	bool UseProgressBar; // 0x338
	TArray<FStructure_SelectorData> SelectorData; // 0x340
	float ValueMin; // 0x350
	float ValueMax; // 0x354
	float StepSize; // 0x358
	int32_t SelectedIndex; // 0x35c
	float SelectedValue; // 0x360
	FTimerHandle ValueChangeTimerHandle; // 0x368
	FMulticastInlineDelegate OnValueChanged; // 0x370
	float ValueDisplayMultiplier; // 0x380
	FDataTableRowHandle SoundFX_ButtonHover; // 0x388
	FDataTableRowHandle SoundFX_ButtonPress; // 0x398
	bool bAllowFloat; // 0x3a8
};

struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x120
};

struct UYPlayerRankComponent : UActorComponent {
	FMulticastInlineDelegate OnRankInitialized; // 0xb0
	FMulticastInlineDelegate OnRankCalcDataReceived; // 0xc0
	FMulticastInlineDelegate OnRankUpdated; // 0xd0
	FYReplicatedRankData m_playerRankData; // 0xe0
	FYRankedCalculationData m_rankCalcData; // 0xec
	FYReplicatedRankData m_rankDataReceivedFromBackend; // 0x10c
	bool m_hasReceivedRankCalcData; // 0x118
	bool m_hasRankUpdated; // 0x119
	bool m_receivedRankUpdatePushMessage; // 0x11a
};

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct AVolumetricCloud : AInfo {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x240
};

struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
};

struct UMovieSceneEntitySystemLinker : UObject {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x238
};

struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UYWidget_Launch : UYWidget {
	TArray<UYWidget_LaunchGameModeEntry*> m_gameModeEntries; // 0x2c0
	UYWidget_LaunchGameModeEntry* m_cachedSelectedGameModeEntry; // 0x2d0
	int32_t m_cachedEstimatedTimeSeconds; // 0x2d8
	bool m_squadReadyForMatchmaking; // 0x2dc
};

struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x410
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x420
};

struct AHUD : AActor {
	APlayerController* PlayerOwner; // 0x240
	char bLostFocusPaused : 1; // 0x248
	char bShowHUD : 1; // 0x248
	char bShowDebugInfo : 1; // 0x248
	int32_t CurrentTargetIndex; // 0x24c
	char bShowHitBoxDebugInfo : 1; // 0x250
	char bShowOverlays : 1; // 0x250
	char bEnableDebugTextShadow : 1; // 0x250
	TArray<AActor*> PostRenderedActors; // 0x258
	TArray<FName> DebugDisplay; // 0x270
	TArray<FName> ToggledDebugCategories; // 0x280
	UCanvas* Canvas; // 0x290
	UCanvas* DebugCanvas; // 0x298
	TArray<FDebugTextInfo> DebugTextList; // 0x2a0
	AActor* ShowDebugTargetDesiredClass; // 0x2b0
	AActor* ShowDebugTargetActor; // 0x2b8
};

struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct UYWidgetProvider : UObject {
	FMulticastInlineDelegate OnDataChanged; // 0x28
	TWeakObjectPtr<APlayerController> m_playerController; // 0x38
};

struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UScannerWeaponComponent_BP_C : UYScriptableWeaponComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UYWeaponPlayerControllerRuntimeComponent* Controller Weapon Runtime Component; // 0xb8
	UYPlayerCharacterWeaponComponent* Character Weapon Component; // 0xc0
	USoundBase* SFX_ScannerReady; // 0xc8
	USoundBase* SFX_ScannerCharge; // 0xd0
	UAudioComponent* Recharge2DSound; // 0xd8
	USoundBase* SFX_ScannerNotReady; // 0xe0
	float ScanDelayMaxRange; // 0xe8
	float ScanTravelTime; // 0xec
	bool LatestScanResult; // 0xf0
	float PlayScanResultFXDelayTime; // 0xf4
	FTimerHandle TimerPlayScanResult; // 0xf8
};

struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x240
};

struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct AYBannerActor : AActor {
	bool m_isLocalAttachedBanner; // 0x240
	UYDataTableRowAssociationComponent* m_rowAssociationComponent; // 0x248
	bool m_isCustomizationBanner; // 0x250
};

struct UYWidget_DamageNumberManager : UYWidget {
	UYWidget_DamageNumber* m_damageNumberClass; // 0x2c0
	TArray<FYDamageNumberEntry> m_damageNumberWidgets; // 0x2c8
	UCanvasPanel* m_damageNumberContainer; // 0x2d8
};

struct UFixedFrameRateCustomTimeStep : UEngineCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x28
};

struct UInputComponent : UActorComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct UNavigationPath : UObject {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct UEditableText : UWidget {
	FText Text; // 0x108
	FDelegate TextDelegate; // 0x120
	FText HintText; // 0x130
	FDelegate HintTextDelegate; // 0x148
	FEditableTextStyle WidgetStyle; // 0x158
	USlateWidgetStyleAsset* Style; // 0x378
	USlateBrushAsset* BackgroundImageSelected; // 0x380
	USlateBrushAsset* BackgroundImageComposing; // 0x388
	USlateBrushAsset* CaretImage; // 0x390
	FSlateFontInfo Font; // 0x398
	FSlateColor ColorAndOpacity; // 0x3f0
	bool IsReadOnly; // 0x418
	bool IsPassword; // 0x419
	float MinimumDesiredWidth; // 0x41c
	bool IsCaretMovedWhenGainFocus; // 0x420
	bool SelectAllTextWhenFocused; // 0x421
	bool RevertTextOnEscape; // 0x422
	bool ClearKeyboardFocusOnCommit; // 0x423
	bool SelectAllTextOnCommit; // 0x424
	bool AllowContextMenu; // 0x425
	EVirtualKeyboardType KeyboardType; // 0x426
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0x427
	EVirtualKeyboardTrigger VirtualKeyboardTrigger; // 0x428
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0x429
	ETextJustify Justification; // 0x42a
	FShapedTextOptions ShapedTextOptions; // 0x42b
	FMulticastInlineDelegate OnTextChanged; // 0x430
	FMulticastInlineDelegate OnTextCommitted; // 0x440
};

struct AYGPATestActor : AActor {
	UYGameplayAttributesComponent* m_gameplayAttributesComponent; // 0x240
	UYGPATestComponent* m_gpaTestComponent; // 0x248
	float m_floatAttribute; // 0x250
	int32_t m_intAttribute; // 0x254
};

struct ULevelSequenceDirector : UObject {
	ULevelSequencePlayer* Player; // 0x28
};

struct UYWidget_ProgressBarWithDelta : UYWidget {
	UProgressBar* m_progressBar; // 0x2c0
	UProgressBar* m_deltaProgressBar; // 0x2c8
	float m_step; // 0x2d0
};

struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x2e8
};

struct UYPlayerCharacterStateComponent : UActorComponent {
	FMulticastInlineDelegate OnAnyStateChanged; // 0xb0
	FMulticastInlineDelegate OnAnyStateChangedWithCancel; // 0xc0
	bool m_bypassEncumbrance; // 0xd8
	FYAuthorithyPlayerState m_playerStateAuthorithy; // 0x120
	UYEncumbranceEffects_DataAsset* m_encumbranceEffectDataAsset; // 0x158
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UPlayerBotFireTaskNoTP_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	int32_t counter; // 0xb0
	AActor* Owner; // 0xb8
	float FireTimeout; // 0xc0
	FName TimeStampStartFire; // 0xc4
	FName combatTarget; // 0xcc
};

struct UWBP_TabNavigationBase_C : UYWidget_Composite {
	TArray<UWBP_TabElementBase_TabElem_C*> TabElements; // 0x2c8
	UWBP_TabElementBase_TabElem_C* LastTabElemClicked; // 0x2d8
	FMulticastInlineDelegate OnTabChanged; // 0x2e0
};

struct UReflectionCaptureComponent : USceneComponent {
	UBillboardComponent* CaptureOffsetComponent; // 0x1f8
	EReflectionSourceType ReflectionSourceType; // 0x200
	EMobileReflectionCompression MobileReflectionCompression; // 0x201
	UTextureCube* Cubemap; // 0x208
	float SourceCubemapAngle; // 0x210
	float Brightness; // 0x214
	bool bModifyMaxValueRGBM; // 0x218
	float MaxValueRGBM; // 0x21c
	FVector CaptureOffset; // 0x220
	FGuid MapBuildDataId; // 0x22c
	UTextureCube* CachedEncodedHDRCubemap; // 0x250
};

struct UARCandidateObject : UDataAsset {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct UWBP_PlayerQuartersLevel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UImage* Gfx_DecoGradient; // 0x2c8
	UImage* Gfx_Edge; // 0x2d0
	UImage* Gfx_FillDark; // 0x2d8
	UImage* Gfx_FillLight; // 0x2e0
	UImage* Gfx_Underline; // 0x2e8
	UImage* Icn_Station; // 0x2f0
	USizeBox* Icon; // 0x2f8
	UTextBlock* Txt_Value; // 0x300
	UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x308
};

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38
};

struct UWBP_InputKeyGamepad_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* m_Icn_Gamepad_Placeholder; // 0x268
	bool isLight; // 0x270
};

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UParticleModuleLocationSkelVertSurface : UParticleModuleLocationBase {
	ELocationSkelVertSurfaceSource SourceType; // 0x30
	FVector UniversalOffset; // 0x34
	char bUpdatePositionEachFrame : 1; // 0x40
	char bOrientMeshEmitters : 1; // 0x40
	char bInheritBoneVelocity : 1; // 0x40
	float InheritVelocityScale; // 0x44
	FName SkelMeshActorParamName; // 0x48
	TArray<FName> ValidAssociatedBones; // 0x50
	char bEnforceNormalCheck : 1; // 0x60
	FVector NormalToCompare; // 0x64
	float NormalCheckToleranceDegrees; // 0x70
	float NormalCheckTolerance; // 0x74
	TArray<int32_t> ValidMaterialIndices; // 0x78
	char bInheritVertexColor : 1; // 0x88
	char bInheritUV : 1; // 0x88
	uint32_t InheritUVChannel; // 0x8c
};

struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xe38
	float ServerFlushLogInterval; // 0xe3c
	UGameInstance* GameInstance; // 0xe40
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x520
};

struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	FString SourceGlobalId; // 0x28
};

struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct AYCharacterCustomizationPreviewActor : AYCharacterCustomizationActor {
	AActor* m_relevantCameraActor; // 0x5a0
	UYCharacterCustomizationModel* m_model; // 0x5a8
};

struct USoundBase : UObject {
	USoundClass* SoundClassObject; // 0x30
	char bDebug : 1; // 0x38
	char bOverrideConcurrency : 1; // 0x38
	char bOutputToBusOnly : 1; // 0x38
	char bHasDelayNode : 1; // 0x38
	char bHasConcatenatorNode : 1; // 0x38
	char bBypassVolumeScaleForPriority : 1; // 0x38
	EVirtualizationMode VirtualizationMode; // 0x39
	TSet<USoundConcurrency*> ConcurrencySet; // 0x90
	FSoundConcurrencySettings ConcurrencyOverrides; // 0xe0
	float Duration; // 0x108
	float MaxDistance; // 0x10c
	float TotalSamples; // 0x110
	float Priority; // 0x114
	USoundAttenuation* AttenuationSettings; // 0x118
	FSoundModulationDefaultRoutingSettings ModulationSettings; // 0x120
	USoundSubmixBase* SoundSubmixObject; // 0x168
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x170
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x180
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x188
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x198
	TArray<UAssetUserData*> AssetUserData; // 0x1a8
};

struct UMovieScene : UMovieSceneSignedObject {
	TArray<FMovieSceneSpawnable> Spawnables; // 0x50
	TArray<FMovieScenePossessable> Possessables; // 0x60
	TArray<FMovieSceneBinding> ObjectBindings; // 0x70
	TMap<FName, FMovieSceneObjectBindingIDs> BindingGroups; // 0x80
	TArray<UMovieSceneTrack*> MasterTracks; // 0xd0
	UMovieSceneTrack* CameraCutTrack; // 0xe0
	FMovieSceneFrameRange SelectionRange; // 0xe8
	FMovieSceneFrameRange PlaybackRange; // 0xf8
	FFrameRate TickResolution; // 0x108
	FFrameRate DisplayRate; // 0x110
	EMovieSceneEvaluationType EvaluationType; // 0x118
	EUpdateClockSource ClockSource; // 0x119
	FSoftObjectPath CustomClockSourcePath; // 0x120
	TArray<FMovieSceneMarkedFrame> MarkedFrames; // 0x138
};

struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	FVector2D Min; // 0x38
	FVector2D Max; // 0x40
};

struct UYDebugActivityLocationMapMarkerData : UYMapMarkerData {
	float m_linkRadius; // 0x148
	EYActivityType m_activityType; // 0x14c
	EYActivityLocationStatus m_locationStatus; // 0x14d
	float m_currentScore; // 0x150
	float m_evaluationScoreThreshold; // 0x154
	int32_t m_additionalDebugInfo; // 0x158
};

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct UYDurabilityAnalyticsComponent : UActorComponent {
	TMap<FUniqueNetIdRepl, FYDurabilityAnalyticsPerPlayer> m_dataPerPlayer; // 0xb0
};

struct AGameStateBase : AInfo {
	AGameModeBase* GameModeClass; // 0x240
	AGameModeBase* AuthorityGameMode; // 0x248
	ASpectatorPawn* SpectatorClass; // 0x250
	TArray<APlayerState*> PlayerArray; // 0x258
	bool bReplicatedHasBegunPlay; // 0x268
	float ReplicatedWorldTimeSeconds; // 0x26c
	float ServerWorldTimeSecondsDelta; // 0x270
	float ServerWorldTimeSecondsUpdateFrequency; // 0x274
};

struct UYWidget_ArchetypesOverview : UYWidget {
	bool m_isInFirstTimeUserExperienceContext; // 0x2d0
	UTextBlock* m_description; // 0x2d8
	UVerticalBox* m_archetypeVerticalBox; // 0x2e0
};

struct UYWidget_FactionDiscountTable : UYWidget {
	FName m_factionId; // 0x2c0
	bool m_showOnlyCurrentStandingDiscounts; // 0x2c8
};

struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; // 0x28
	bool bIsFileData; // 0x29
	uint32_t AppId; // 0x2c
	FString AppName; // 0x30
	FString BuildVersion; // 0x40
	FString LaunchExe; // 0x50
	FString LaunchCommand; // 0x60
	TSet<FString> PrereqIds; // 0x70
	FString PrereqName; // 0xc0
	FString PrereqPath; // 0xd0
	FString PrereqArgs; // 0xe0
	TArray<FFileManifestData> FileManifestList; // 0xf0
	TArray<FChunkInfoData> ChunkList; // 0x100
	TArray<FCustomFieldData> CustomFields; // 0x110
};

struct UYImpactManager : UObject {
	FMulticastInlineDelegate BP_OnPlayImpactSound; // 0x28
};

struct UInteractiveToolsContext : UObject {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
};

struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38
};

struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct UParticleModuleVectorFieldLocal : UParticleModuleVectorFieldBase {
	UVectorField* VectorField; // 0x30
	FVector RelativeTranslation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale3D; // 0x50
	float Intensity; // 0x5c
	float Tightness; // 0x60
	char bIgnoreComponentTransform : 1; // 0x64
	char bTileX : 1; // 0x64
	char bTileY : 1; // 0x64
	char bTileZ : 1; // 0x64
	char bUseFixDT : 1; // 0x64
};

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct UAnimClassData : UObject {
	TArray<FBakedAnimationStateMachine> BakedStateMachines; // 0x30
	USkeleton* TargetSkeleton; // 0x40
	TArray<FAnimNotifyEvent> AnimNotifies; // 0x48
	TMap<FName, FCachedPoseIndices> OrderedSavedPoseIndicesMap; // 0x58
	TArray<FAnimBlueprintFunction> AnimBlueprintFunctions; // 0xa8
	TArray<FAnimBlueprintFunctionData> AnimBlueprintFunctionData; // 0xb8
	TArray<TFieldPath<FStructProperty>> AnimNodeProperties; // 0xc8
	TArray<TFieldPath<FStructProperty>> LinkedAnimGraphNodeProperties; // 0xe8
	TArray<TFieldPath<FStructProperty>> LinkedAnimLayerNodeProperties; // 0x108
	TArray<TFieldPath<FStructProperty>> PreUpdateNodeProperties; // 0x128
	TArray<TFieldPath<FStructProperty>> DynamicResetNodeProperties; // 0x148
	TArray<TFieldPath<FStructProperty>> StateMachineNodeProperties; // 0x168
	TArray<TFieldPath<FStructProperty>> InitializationNodeProperties; // 0x188
	TMap<FName, FGraphAssetPlayerInformation> GraphNameAssetPlayers; // 0x1a8
	TArray<FName> SyncGroupNames; // 0x1f8
	TArray<FExposedValueHandler> EvaluateGraphExposedInputs; // 0x208
	TMap<FName, FAnimGraphBlendOptions> GraphBlendOptions; // 0x218
	FPropertyAccessLibrary PropertyAccessLibrary; // 0x268
};

struct UYWidget_ItemComponentSetItem : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnSetItemDetailView; // 0x300
	FMulticastInlineDelegate OnComponentAmmoSet; // 0x310
};

struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct UMaterialExpressionSmoothStep : UMaterialExpression {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
};

struct URadialForceComponent : USceneComponent {
	float Radius; // 0x1f8
	ERadialImpulseFalloff Falloff; // 0x1fc
	float ImpulseStrength; // 0x200
	char bImpulseVelChange : 1; // 0x204
	char bIgnoreOwningActor : 1; // 0x204
	float ForceStrength; // 0x208
	float DestructibleDamage; // 0x20c
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x210
};

struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x3a8
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b0
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c0
};

struct UARTrackedQRCode : UARTrackedImage {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
};

struct UYPersistentDataAISquad : UYPersistentData {
	FYAISquadSpawnDefinition m_spawnDefinition; // 0x78
	TArray<FYSquadAIType> m_AIsToSpawn; // 0xf0
	TArray<FYSquadAIType> m_AIsStillAlive; // 0x100
	FMulticastInlineDelegate OnAIDied; // 0x110
	FMulticastInlineDelegate OnSquadDied; // 0x120
	FMulticastInlineDelegate OnAISpawned; // 0x130
};

struct UYWidget_ValueDisplay : UYWidget {
	FSlateColor m_positiveColor; // 0x2d0
	FSlateColor m_negativeColor; // 0x2f8
	UTextBlock* m_hasValueText; // 0x320
	UYWidget_ImageBase* m_imageWidget; // 0x328
};

struct UHierarchicalLODSetup : UObject {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct UWBP_SocialOverview_C : UYWidget_SocialOverview {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* AnimOut; // 0x2c8
	UWidgetAnimation* AnimIn; // 0x2d0
	UWidgetSwitcher* ContentSwitcher; // 0x2d8
	UEditableTextBox* EditTxtSingle_UserName; // 0x2e0
	UScrollBox* Friends_ScrollBox; // 0x2e8
	UScrollBox* Search_ScrollBox; // 0x2f0
	USocialUserList_WBP_C* SocialUsersList_WBP_Blocked; // 0x2f8
	USocialUserList_WBP_C* SocialUsersList_WBP_FriendInvites; // 0x300
	USocialUserList_WBP_C* SocialUsersList_WBP_Offline; // 0x308
	USocialUserList_WBP_C* SocialUsersList_WBP_Online; // 0x310
	USocialUserList_WBP_C* SocialUsersList_WBP_SearchResults; // 0x318
	USocialUserList_WBP_C* SocialUsersList_WBP_SquadInvites; // 0x320
	UVerticalBox* VerticalBox_Search_Initial; // 0x328
	UVerticalBox* VerticalBox_Search_NoMatchFound; // 0x330
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x338
	UWBP_Common_Btn_C* WBP_Close_Btn; // 0x340
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel; // 0x348
	UWBP_Common_Empty_Btn_C* WBP_Search_Btn; // 0x350
	UWBP_Common_Empty_Btn_C* WBP_SearchClear_Btn; // 0x358
	UWBP_TabNavigation_C* WBP_TabNavigation; // 0x360
	UWBP_Toast_C* WBP_Toast; // 0x368
};

struct UYWidget_ItemCategories : UYWidget {
	TArray<EYVanityType> m_supportedVanityClasses; // 0x2d8
	TArray<EYMiscellaneousType> m_supportedMiscClasses; // 0x2e8
	TArray<EYDeviceClass> m_supportedDeviceClasses; // 0x2f8
	TArray<EYItemType> m_supportedItemTypes; // 0x308
	UYWidget_ItemCategoryEntry* m_selectedItemCategory; // 0x318
	TMap<UYWidget_ItemCategoryEntry*, EYDeviceClass> m_categoryEntryToDeviceClassMap; // 0x320
	TMap<EYDeviceClass, UYWidget_ItemCategoryEntry*> m_deviceClassToCategoryEntryMap; // 0x370
	TMap<UYWidget_ItemCategoryEntry*, EYItemType> m_categoryEntryToItemTypeMap; // 0x3c0
	TMap<EYItemType, UYWidget_ItemCategoryEntry*> m_itemTypeToCategoryEntryMap; // 0x410
	TMap<UYWidget_ItemCategoryEntry*, EYMiscellaneousType> m_categoryEntryToMiscItemTypeMap; // 0x460
	TMap<EYMiscellaneousType, UYWidget_ItemCategoryEntry*> m_miscItemTypeToCategoryEntryMap; // 0x4b0
	TMap<UYWidget_ItemCategoryEntry*, EYVanityType> m_categoryEntryVanityItemTypeMap; // 0x500
	TMap<EYVanityType, UYWidget_ItemCategoryEntry*> m_vanityItemTypeToCategoryEntryMap; // 0x550
};

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UPlayFabExperimentationAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x108
	UPlayFabJsonObject* RequestJsonObj; // 0x110
	UPlayFabJsonObject* ResponseJsonObj; // 0x118
};

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct APlayerController : AController {
	UPlayer* Player; // 0x2d8
	APawn* AcknowledgedPawn; // 0x2e0
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2e8
	AHUD* MyHUD; // 0x2f0
	APlayerCameraManager* PlayerCameraManager; // 0x2f8
	APlayerCameraManager* PlayerCameraManagerClass; // 0x300
	bool bAutoManageActiveCameraTarget; // 0x308
	FRotator TargetViewRotation; // 0x30c
	float SmoothTargetViewRotationSpeed; // 0x324
	TArray<AActor*> HiddenActors; // 0x330
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x340
	float LastSpectatorStateSynchTime; // 0x354
	FVector LastSpectatorSyncLocation; // 0x358
	FRotator LastSpectatorSyncRotation; // 0x364
	int32_t ClientCap; // 0x370
	UCheatManager* CheatManager; // 0x378
	UCheatManager* CheatClass; // 0x380
	UPlayerInput* PlayerInput; // 0x388
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x390
	char bPlayerIsWaiting : 1; // 0x410
	char NetPlayerIndex; // 0x414
	UNetConnection* PendingSwapConnection; // 0x450
	UNetConnection* NetConnection; // 0x458
	float InputYawScale; // 0x46c
	float InputPitchScale; // 0x470
	float InputRollScale; // 0x474
	char bShowMouseCursor : 1; // 0x478
	char bEnableClickEvents : 1; // 0x478
	char bEnableTouchEvents : 1; // 0x478
	char bEnableMouseOverEvents : 1; // 0x478
	char bEnableTouchOverEvents : 1; // 0x478
	char bForceFeedbackEnabled : 1; // 0x478
	float ForceFeedbackScale; // 0x47c
	TArray<FKey> ClickEventKeys; // 0x480
	EMouseCursor DefaultMouseCursor; // 0x490
	EMouseCursor CurrentMouseCursor; // 0x491
	ECollisionChannel DefaultClickTraceChannel; // 0x492
	ECollisionChannel CurrentClickTraceChannel; // 0x493
	float HitResultTraceDistance; // 0x494
	uint16_t SeamlessTravelCount; // 0x498
	uint16_t LastCompletedSeamlessTravelCount; // 0x49a
	UInputComponent* InactiveStateInputComponent; // 0x510
	char bShouldPerformFullTickWhenPaused : 1; // 0x518
	UTouchInterface* CurrentTouchInterface; // 0x530
	ASpectatorPawn* SpectatorPawn; // 0x588
	bool bIsLocalPlayerController; // 0x594
	FVector SpawnLocation; // 0x598
};

struct UMockDataMeshTrackerComponent : USceneComponent {
	FMulticastInlineDelegate OnMeshTrackerUpdated; // 0x1f8
	bool ScanWorld; // 0x208
	bool RequestNormals; // 0x209
	bool RequestVertexConfidence; // 0x20a
	EMeshTrackerVertexColorMode VertexColorMode; // 0x20b
	TArray<FColor> BlockVertexColors; // 0x210
	FLinearColor VertexColorFromConfidenceZero; // 0x220
	FLinearColor VertexColorFromConfidenceOne; // 0x230
	float UpdateInterval; // 0x240
	UMRMeshComponent* MRMesh; // 0x248
};

struct UPlayFabAdminAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x798
	UPlayFabJsonObject* RequestJsonObj; // 0x7a0
	UPlayFabJsonObject* ResponseJsonObj; // 0x7a8
};

struct UDefaultLevelSequenceInstanceData : UObject {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
};

struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38
	int32_t Max; // 0x3c
};

struct UEQSContext_AllyLocationAndCombatLocations_C : UEnvQueryContext_BlueprintBase {
	FName KeyCombatMoveToLocation; // 0x30
	float NearbyAIRadius; // 0x38
};

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30
};

struct UMovieSceneCapture : UObject {
	FSoftClassPath ImageCaptureProtocolType; // 0x38
	FSoftClassPath AudioCaptureProtocolType; // 0x50
	UMovieSceneImageCaptureProtocolBase* ImageCaptureProtocol; // 0x68
	UMovieSceneAudioCaptureProtocolBase* AudioCaptureProtocol; // 0x70
	FMovieSceneCaptureSettings Settings; // 0x78
	bool bUseSeparateProcess; // 0xe8
	bool bCloseEditorWhenCaptureStarts; // 0xe9
	FString AdditionalCommandLineArguments; // 0xf0
	FString InheritedCommandLineArguments; // 0x100
};

struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct UDataAsset : UObject {
	UDataAsset* NativeClass; // 0x28
};

struct UYWidget_VanityOverview : UYWidget {
	FMulticastInlineDelegate OnCategorySlotClicked; // 0x2c8
	UYWidget_VanityCategoryListSelection* m_listSelection; // 0x2d8
	UPanelWidget* m_categoriesPanel; // 0x2e0
	UTextBlock* m_vanityDescriptionText; // 0x2e8
	FMulticastInlineDelegate BP_OnBackButtonPressed; // 0x2f0
	bool m_setCameraForVanityItemOnCategoryHover; // 0x300
	EYApperenceCategoriesTypes m_apperenceCategory; // 0x302
	int32_t m_currentSelectedSlotId; // 0x304
};

struct UYWidget_Button : UYWidget {
	UButton* m_button; // 0x2c0
};

struct UMovieSceneControlRigParameterTrack : UMovieSceneNameableTrack {
	UControlRig* ControlRig; // 0x88
	UMovieSceneSection* SectionToKey; // 0x90
	TArray<UMovieSceneSection*> Sections; // 0x98
	FName TrackName; // 0xa8
};

struct UDirectionalLightComponent : ULightComponent {
	float ShadowCascadeBiasDistribution; // 0x328
	char bEnableLightShaftOcclusion : 1; // 0x32c
	float OcclusionMaskDarkness; // 0x330
	float OcclusionDepthRange; // 0x334
	FVector LightShaftOverrideDirection; // 0x338
	float WholeSceneDynamicShadowRadius; // 0x344
	float DynamicShadowDistanceMovableLight; // 0x348
	float DynamicShadowDistanceStationaryLight; // 0x34c
	int32_t DynamicShadowCascades; // 0x350
	float CascadeDistributionExponent; // 0x354
	float CascadeTransitionFraction; // 0x358
	float ShadowDistanceFadeoutFraction; // 0x35c
	char bUseInsetShadowsForMovableObjects : 1; // 0x360
	int32_t FarShadowCascadeCount; // 0x364
	float FarShadowDistance; // 0x368
	float DistanceFieldShadowDistance; // 0x36c
	float LightSourceAngle; // 0x370
	float LightSourceSoftAngle; // 0x374
	float ShadowSourceAngleFactor; // 0x378
	float TraceDistance; // 0x37c
	char bUsedAsAtmosphereSunLight : 1; // 0x380
	int32_t AtmosphereSunLightIndex; // 0x384
	FLinearColor AtmosphereSunDiskColorScale; // 0x388
	char bPerPixelAtmosphereTransmittance : 1; // 0x398
	char bCastShadowsOnClouds : 1; // 0x398
	char bCastShadowsOnAtmosphere : 1; // 0x398
	char bCastCloudShadows : 1; // 0x398
	float CloudShadowStrength; // 0x39c
	float CloudShadowOnAtmosphereStrength; // 0x3a0
	float CloudShadowOnSurfaceStrength; // 0x3a4
	float CloudShadowDepthBias; // 0x3a8
	float CloudShadowExtent; // 0x3ac
	float CloudShadowMapResolutionScale; // 0x3b0
	float CloudShadowRaySampleCountScale; // 0x3b4
	FLinearColor CloudScatteredLuminanceScale; // 0x3b8
	FLightmassDirectionalLightSettings LightmassSettings; // 0x3c8
	char bCastModulatedShadows : 1; // 0x3d8
	FColor ModulatedShadowColor; // 0x3dc
	float ShadowAmount; // 0x3e0
};

struct UTransformGizmo : UInteractiveGizmo {
	UTransformProxy* ActiveTarget; // 0x40
	bool bSnapToWorldGrid; // 0x48
	bool bGridSizeIsExplicit; // 0x49
	FVector ExplicitGridSize; // 0x4c
	bool bRotationGridSizeIsExplicit; // 0x58
	FRotator ExplicitRotationGridSize; // 0x5c
	bool bSnapToWorldRotGrid; // 0x68
	bool bUseContextCoordinateSystem; // 0x69
	EToolContextCoordinateSystem CurrentCoordinateSystem; // 0x6c
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x100
	TArray<UPrimitiveComponent*> NonuniformScaleComponents; // 0x110
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x120
	UGizmoConstantFrameAxisSource* CameraAxisSource; // 0x140
	UGizmoComponentAxisSource* AxisXSource; // 0x148
	UGizmoComponentAxisSource* AxisYSource; // 0x150
	UGizmoComponentAxisSource* AxisZSource; // 0x158
	UGizmoComponentAxisSource* UnitAxisXSource; // 0x160
	UGizmoComponentAxisSource* UnitAxisYSource; // 0x168
	UGizmoComponentAxisSource* UnitAxisZSource; // 0x170
	UGizmoTransformChangeStateTarget* StateTarget; // 0x178
	UGizmoScaledTransformSource* ScaledTransformSource; // 0x180
};

struct AGeometryCacheActor : AActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x240
};

struct UYDeveloperSettings : UDeveloperSettings {
	FName m_yagerDataTableEditorName; // 0x38
	bool m_useEpicsDataTableEditor; // 0x40
	bool m_forceMatchIntroDropPod; // 0x41
	bool m_forceDelayedPlayerInitialization; // 0x42
	bool m_forceTutorial; // 0x43
	bool m_flushAsyncLoadingInPIE; // 0x44
	bool m_showBuildSafetyPrompt; // 0x45
	FString m_matchPhaseFlowRow; // 0x48
};

struct UYWidget_EomActionsPanel : UYWidget {
	UWidgetSwitcher* m_matchmakingContextWidgetSwitcher; // 0x2c0
	UYWidget_Timer* m_matchmakingQueuingTimeTimer; // 0x2c8
	UPanelWidget* m_estimatedMmTimeContainer; // 0x2d0
	UTextBlock* m_estimatedMmTimeTextBlock; // 0x2d8
	UWidgetSwitcher* m_startMatchmakingButtonWidgetSwitcher; // 0x2e0
	UButton* m_goToStationButton; // 0x2e8
	UButton* m_startMatchmakingButton; // 0x2f0
	UButton* m_cancelMatchmakingButton; // 0x2f8
	UTextBlock* m_matchmakingInfoText; // 0x300
	UYWidget_Timer* m_goToStationTimer; // 0x308
	FDataTableRowHandle m_audioMatchmakingStarted; // 0x310
	FDataTableRowHandle m_audioMatchmakingCanceled; // 0x320
	FDataTableRowHandle m_audioMatchStarted; // 0x330
	float m_delayBeforeTransitionToStation; // 0x340
};

struct UYWidget_HeatMap : UUserWidget {
	UImage* m_imageMaterial; // 0x260
};

struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct UAsyncExecutePreparedQuery : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct AControlRigGizmoActor : AActor {
	USceneComponent* ActorRootComponent; // 0x240
	UStaticMeshComponent* StaticMeshComponent; // 0x248
	uint32_t ControlRigIndex; // 0x250
	FName ControlName; // 0x254
	FName ColorParameterName; // 0x25c
	char bEnabled : 1; // 0x264
	char bSelected : 1; // 0x264
	char bSelectable : 1; // 0x264
	char bHovered : 1; // 0x264
};

struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	float EventRangeMultiplier; // 0x58
	char bUseLoSHearing : 1; // 0x5c
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x60
};

struct APrefabSeedLinker : AActor {
	TArray<TWeakObjectPtr<APrefabActor>> LinkedActors; // 0x240
	UPrefabSeedLinkerComponent* SeedLinkerComponent; // 0x250
};

struct AYSocialActor : AActor {
	UYMapMarkerComponent* m_mapmarkerComponent; // 0x240
	UYActorUIComponent* m_actorUIComponent; // 0x248
	UYPingableComponent* m_pingableComponent; // 0x250
	FDataTableRowHandle m_commWheelContext; // 0x258
	AActor* m_contextActorPinged; // 0x268
	TArray<AYPlayerState*> m_acknowledgedPlayerStates; // 0x270
	FMulticastInlineDelegate BP_OnAcknowledgedPlayerStatesChanged; // 0x280
	float m_proximityCheckFrequency; // 0x290
	float m_destroyDistance; // 0x294
};

struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x440
	EControllerHand Hand; // 0x444
	FName MotionSource; // 0x448
	char bDisableLowLatencyUpdate : 1; // 0x450
	ETrackingStatus CurrentTrackingStatus; // 0x454
	bool bDisplayDeviceModel; // 0x455
	FName DisplayModelSource; // 0x458
	UStaticMesh* CustomDisplayMesh; // 0x460
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x468
	UPrimitiveComponent* DisplayComponent; // 0x4e0
};

struct AYLootContainer_Variation_BP_C : AYLootContainer_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x480
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x488
	UYAssetVariationComponent* YAssetVariation; // 0x490
	FDataTableRowHandle LootContainerDefinition; // 0x498
	UAnimSequenceBase* OpenAnimation; // 0x4a8
	bool IsOpened; // 0x4b0
	bool IsEmpty; // 0x4b1
	TArray<UMaterialInstanceDynamic*> DynamicMaterialInstances; // 0x4b8
	FName MaterialParameterNameGleam; // 0x4c8
	FDataTableRowHandle LootContainerDefinition_PlacedInWorld; // 0x4d0
	EYLootContainerTier LootTier; // 0x4e0
};

struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UMaterialExpressionSpriteTextureSampler : UMaterialExpressionTextureSampleParameter2D {
	bool bSampleAdditionalTextures; // 0x80
	int32_t AdditionalSlotIndex; // 0x84
	FText SlotDisplayName; // 0x88
};

struct AYAIBotController : AYAIController {
	TArray<FVector> m_currentPath; // 0x3d8
	AYPlayerCharacter* m_controlledPlayerCharacter; // 0x3f0
	AYPlayerController_Match* m_controlledPlayerController; // 0x3f8
};

struct UStereoLayerComponent : USceneComponent {
	char bLiveTexture : 1; // 0x1f8
	char bSupportsDepth : 1; // 0x1f8
	char bNoAlphaChannel : 1; // 0x1f8
	UTexture* Texture; // 0x200
	UTexture* LeftTexture; // 0x208
	char bQuadPreserveTextureRatio : 1; // 0x210
	FVector2D QuadSize; // 0x214
	FBox2D UVRect; // 0x21c
	float CylinderRadius; // 0x230
	float CylinderOverlayArc; // 0x234
	int32_t CylinderHeight; // 0x238
	FEquirectProps EquirectProps; // 0x23c
	EStereoLayerType StereoLayerType; // 0x284
	EStereoLayerShape StereoLayerShape; // 0x285
	UStereoLayerShape* Shape; // 0x288
	int32_t Priority; // 0x290
};

struct UWBP_Social_User_Entry_C : UYWidget_SocialUserEntry {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* WidgetOut_Anim; // 0x348
	UImage* Gfx_Backer; // 0x350
	UImage* Gfx_Gradient; // 0x358
	UImage* Gfx_OnlineStatus; // 0x360
	UImage* Icn_ChatMute; // 0x368
	UImage* Icn_Friend; // 0x370
	UImage* Icn_Profile; // 0x378
	UImage* Icn_SquadState; // 0x380
	UImage* Icn_VoiceMute; // 0x388
	UHorizontalBox* OnlineStatus; // 0x390
	UOverlay* SquadOverlay; // 0x398
	UHorizontalBox* SquadStatus; // 0x3a0
	UTextBlock* Txt_OnlineStatus; // 0x3a8
	UTextBlock* Txt_SeparatorState; // 0x3b0
	UTextBlock* Txt_SquadMembers; // 0x3b8
	UTextBlock* Txt_UserName; // 0x3c0
	UTextBlock* Txt_UserState; // 0x3c8
	UWBP_Common_Simple_Btn_C* WBP_Accept_Btn; // 0x3d0
	UWBP_Common_Empty_Btn_C* WBP_ChatMute_Btn; // 0x3d8
	UWBP_Common_Simple_Btn_C* WBP_Decline_Btn; // 0x3e0
	UWBP_Common_Simple_Btn_C* WBP_Report_Btn; // 0x3e8
	UWBP_Common_Simple_Btn_C* WBP_Social_Btn; // 0x3f0
	UWBP_Common_Simple_Btn_C* WBP_Squad_Btn; // 0x3f8
	UWBP_Common_Simple_Btn_C* WBP_SquadLeave_Btn; // 0x400
	UWBP_Common_Simple_Btn_C* WBP_VoiceMute_Btn; // 0x408
	bool HideOnlineStatus; // 0x410
	bool HideSquadStatus; // 0x411
	bool CanShowInviteButtons; // 0x412
	bool CanShowSocialButton; // 0x413
	bool CanShowSquadButton; // 0x414
	bool CanShowChatMuteButton; // 0x415
	bool CanShowVoiceMuteButton; // 0x416
	bool CanShowReportButton; // 0x417
	bool CanShowBlockButton; // 0x418
	bool DebugShowInviteButtons; // 0x419
	bool DebugShowSocialButton; // 0x41a
	bool DebugShowSquadButton; // 0x41b
	bool DebugShowChatMuteButton; // 0x41c
	bool DebugShowVoiceMuteButton; // 0x41d
	bool DebugShowReportButton; // 0x41e
	bool DebugShowBlockButton; // 0x41f
	bool CanShowOnlineStatusButton; // 0x420
	UWBP_Generic_ToolTip_C* TooltipAccept; // 0x428
	UWBP_Generic_ToolTip_C* TooltipDecline; // 0x430
	UWBP_Generic_ToolTip_C* TooltipSquad; // 0x438
	UWBP_Generic_ToolTip_C* TooltipFriend; // 0x440
	UWBP_Generic_ToolTip_C* TooltipMuteVoice; // 0x448
	UWBP_Generic_ToolTip_C* TooltipMuteChat; // 0x450
	UWBP_Generic_ToolTip_C* TooltipReport; // 0x458
	UWBP_Generic_ToolTip_C* TooltipLeaveSquad; // 0x460
};

struct USoundSubmixBase : UObject {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
};

struct AVolumetricLightmapDensityVolume : AVolume {
	FInt32Interval AllowedMipLevelRange; // 0x278
};

struct UYKeybindingsManager : UObject {
	FMulticastInlineDelegate OnKeybindingsLoaded; // 0x28
	FMulticastInlineDelegate OnKeybindingsSaved; // 0x38
	UYKeybindingsModel* m_model; // 0x48
	UInputSettings* m_oldInputSettingsCached; // 0x50
};

struct UUserWidget : UWidget {
	FLinearColor ColorAndOpacity; // 0x110
	FDelegate ColorAndOpacityDelegate; // 0x120
	FSlateColor ForegroundColor; // 0x130
	FDelegate ForegroundColorDelegate; // 0x158
	FMulticastInlineDelegate OnVisibilityChanged; // 0x168
	FMargin Padding; // 0x190
	TArray<UUMGSequencePlayer*> ActiveSequencePlayers; // 0x1a0
	UUMGSequenceTickManager* AnimationTickManager; // 0x1b0
	TArray<UUMGSequencePlayer*> StoppedSequencePlayers; // 0x1b8
	TArray<FNamedSlotBinding> NamedSlotBindings; // 0x1c8
	UWidgetTree* WidgetTree; // 0x1d8
	int32_t Priority; // 0x1e0
	char bSupportsKeyboardFocus : 1; // 0x1e4
	char bIsFocusable : 1; // 0x1e4
	char bStopAction : 1; // 0x1e4
	char bHasScriptImplementedTick : 1; // 0x1e4
	char bHasScriptImplementedPaint : 1; // 0x1e4
	EWidgetTickFrequency TickFrequency; // 0x1f0
	UInputComponent* InputComponent; // 0x1f8
	TArray<FAnimationEventBinding> AnimationCallbacks; // 0x200
};

struct AYHUD_Outpost : AYHUD {
	FMulticastInlineDelegate OnPlayerTraveledFrom; // 0x3b8
};

struct UInteractiveToolPropertySet : UObject {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
};

struct UApplicationLifecycleComponent : UActorComponent {
	FMulticastInlineDelegate ApplicationWillDeactivateDelegate; // 0xb0
	FMulticastInlineDelegate ApplicationHasReactivatedDelegate; // 0xc0
	FMulticastInlineDelegate ApplicationWillEnterBackgroundDelegate; // 0xd0
	FMulticastInlineDelegate ApplicationHasEnteredForegroundDelegate; // 0xe0
	FMulticastInlineDelegate ApplicationWillTerminateDelegate; // 0xf0
	FMulticastInlineDelegate ApplicationShouldUnloadResourcesDelegate; // 0x100
	FMulticastInlineDelegate ApplicationReceivedStartupArgumentsDelegate; // 0x110
	FMulticastInlineDelegate OnTemperatureChangeDelegate; // 0x120
	FMulticastInlineDelegate OnLowPowerModeDelegate; // 0x130
};

struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
	FRichCurve WCurve; // 0x1f0
};

struct UYNotificationComponent : UActorComponent {
	UYNotificationDataCollection* m_playerActionNotifications; // 0xb0
};

struct UYPlayerRenderTargetVfxManagerComponent_BP_C : UYPlayerRenderTargetVfxManagerComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	TArray<FVector> posArray; // 0xb8
	TArray<float> sizeArray; // 0xc8
	TArray<float> opacityArray; // 0xd8
	FVector currentPlayerPosition; // 0xe8
	FVector currentRenderCenterPosition; // 0xf4
	int32_t currentRenderTarget; // 0x100
	FVector prevRenderCenterPosition; // 0x104
	UMaterialInstanceDynamic* MaterialBatched_MID; // 0x110
	TArray<float> sizeArray_temp; // 0x118
	TArray<FVector> posArray_temp; // 0x128
	TArray<float> opacityArray_temp; // 0x138
	int32_t batchSize; // 0x148
	TArray<FString> drawPosition_ParamNameArray; // 0x150
	TArray<FString> drawSize_ParamNameArray; // 0x160
	TArray<FString> drawOpacity_ParamNameArray; // 0x170
	UMaterialInterface* MaterialBatched; // 0x180
	FVector currentPos; // 0x188
	float currentSize; // 0x194
	float currentOpacity; // 0x198
	bool resetCurrentParameter; // 0x19c
	int32_t CurrentIndex; // 0x1a0
	UYUserSettings* userSettings; // 0x1a8
	bool isGrassEnabled; // 0x1b0
	TArray<UYPlayerRenderTargetVfxMovementComponent_BP_C*> requestUpdate; // 0x1b8
	TArray<FEntityDistanceAndMovementComponent> EntityDistanceAndMovementComponent; // 0x1c8
	int32_t DebugCounter; // 0x1d8
	float 123; // 0x1dc
	float 234dist; // 0x1e0
	ACharacter* playerCharacter; // 0x1e8
	int32_t PosArrayLength; // 0x1f0
	int32_t RequestUpdateLength; // 0x1f4
};

struct UYDialogContainerBase : UYWidget {
	UYWidget_ModalDialogOkCancel* m_modalDialogOkCancel; // 0x2c0
};

struct UGizmoRectangleComponent : UGizmoBaseComponent {
	FVector DirectionX; // 0x460
	FVector DirectionY; // 0x46c
	float OffsetX; // 0x478
	float OffsetY; // 0x47c
	float LengthX; // 0x480
	float LengthY; // 0x484
	float Thickness; // 0x488
	char SegmentFlags; // 0x48c
};

struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x240
};

struct UYPlayerControllerDebugComponent : UActorComponent {
	TMap<EYDebugEventType, FYEventArray> m_eventsPerType; // 0xb0
	int32_t m_maxDebugEntries; // 0x100
	FMulticastInlineDelegate OnSpawnBackgroundDropPod; // 0x108
	FMulticastInlineDelegate OnReceivedPlayfabUserData; // 0x118
	FMulticastInlineDelegate OnRequestIdleKick; // 0x128
};

struct UYSquadManager : UObject {
	FMulticastInlineDelegate OnSquadInfoUpdated; // 0x28
	int32_t m_maxNumOfSquadmates; // 0x58
	FString m_squadId; // 0x60
	TArray<FYOutpostFriendInfo> m_otherSquadMembers; // 0x70
	TArray<FString> m_squadInviteTargets; // 0x80
	bool m_shouldSendNewInvites; // 0x90
};

struct AYLootContainer : AYPickupActor {
	FMulticastInlineDelegate OnContainerOpenedEvent; // 0x430
	FMulticastInlineDelegate OnContainerClosedEvent; // 0x440
	TArray<AYPlayerState*> m_interactingPlayerStates; // 0x450
	UYStateInventoryComponent* m_inventoryComponent; // 0x460
	EYLootContainerWidgetType m_lootContainerWidgetType; // 0x468
};

struct AYPickup_QuestItem_BP_C : AYPickup_Base_BP_C {
	UParticleSystemComponent* ParticleSystem; // 0x490
	UAudioComponent* QuestAudioLoop; // 0x498
};

struct UMovieSceneCompiledDataManager : UObject {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct USoundNodeQualityLevel : USoundNode {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct UYPlayfabInstance : UObject {
	FYPlayfabAuthenticationContext m_authContext; // 0xa0
	TArray<FYPlayfabMessage> m_completedMessages; // 0x108
	TArray<FYPlayfabMessage> m_notifyMessages; // 0x118
	TMap<int32_t, FYPendingPlayfabMessage> m_pendingMessages; // 0x128
	FMulticastInlineDelegate OnLoginCompleted; // 0x178
	TMap<FString, UYPlayfabService*> m_serviceToExchange; // 0x188
};

struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct AYGameMode_Station : AYGameModeBase {
	UYMissionGameManagerComponent* m_missionManagerComponent; // 0x360
	float m_timeUntilStationShutdownNoPlayers; // 0x368
	float m_timeUntilStationShutdown; // 0x36c
	float m_timeStampHadPlayers; // 0x370
	bool m_requestedEnd; // 0x374
};

struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28
};

struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x48
};

struct UUdpMessagingSettings : UObject {
	bool EnabledByDefault; // 0x28
	bool EnableTransport; // 0x29
	bool bAutoRepair; // 0x2a
	bool bStopServiceWhenAppDeactivates; // 0x2b
	FString UnicastEndpoint; // 0x30
	FString MulticastEndpoint; // 0x40
	EUdpMessageFormat MessageFormat; // 0x50
	char MulticastTimeToLive; // 0x51
	TArray<FString> StaticEndpoints; // 0x58
	bool EnableTunnel; // 0x68
	FString TunnelUnicastEndpoint; // 0x70
	FString TunnelMulticastEndpoint; // 0x80
	TArray<FString> RemoteTunnelEndpoints; // 0x90
};

struct UMapMarker_NoiseSource_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UImage* m_noiseIcon; // 0x2e8
	UImage* m_offscreenArrow; // 0x2f0
	EYMapMarkerState m_markerState; // 0x2f8
	float m_timeLeft; // 0x2fc
};

struct UWBP_SettingsContent_Controls_C : UWBP_SettingsContentBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UVerticalBox* VerticalBox_PerScopeSensitivity; // 0x348
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ADSSensitivity; // 0x350
	UWBP_Selector_Btn_C* WBP_Selector_Btn_MouseSensitivity; // 0x358
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity; // 0x360
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_16x; // 0x368
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_1_5x; // 0x370
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_2x; // 0x378
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_4x; // 0x380
	UWBP_Selector_Btn_C* WBP_Selector_Btn_ScopedSensitivity_8x; // 0x388
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_AdsSensitivity; // 0x390
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_CrouchToggle; // 0x398
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_EnablePerScopeSensitivity; // 0x3a0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_FOVBasedSensitivity; // 0x3a8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InvertXAxis; // 0x3b0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_InvertYAxis; // 0x3b8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_LeaningToggle; // 0x3c0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_MouseSmoothing; // 0x3c8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity; // 0x3d0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_3; // 0x3d8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_5; // 0x3e0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_9; // 0x3e8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_16; // 0x3f0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ScopedSensitivity_17; // 0x3f8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Sensitivity; // 0x400
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_SprintToggle; // 0x408
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_TargetingToggle; // 0x410
	UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_AimSensitivity; // 0x418
	UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_InputOptions; // 0x420
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_CrouchToggle; // 0x428
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_FOVBasedSensitivityScaling; // 0x430
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_InvertX; // 0x438
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_InvertY; // 0x440
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_LeaningToggle; // 0x448
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_MouseSmoothing; // 0x450
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_PerScopeSensitivity; // 0x458
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_SprintToggle; // 0x460
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_TargettingToggle; // 0x468
};

struct UYActivityLocationsManager : UActorComponent {
	TMap<EYActivityType, FYActivityLocationArray> m_locations; // 0xb0
	TMap<AYActivityLocationLinked*, FYActivityLinkedLocations> m_locationToNearbyLocations; // 0x100
	TMap<AYActivityLocation*, AYActivityLocationLinked*> m_locationToArea; // 0x150
};

struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct UBP_AimAssistDebug_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FSTR_AimAssistWPNPresetDesc Aim Assist WPN Preset; // 0xb8
	bool IsAimState?; // 0x100
	FVector CameraLocation; // 0x104
	FVector CameraDirectionVector; // 0x110
	bool Toggle Visible Cones?; // 0x11c
	UWBP_AimAssistDebugUI_C* DebugUI; // 0x120
	UBP_AimAssist_C* AimAssistRef; // 0x128
	bool Toggle Visible Circles?; // 0x130
	bool Toggle Visible Influence Point?; // 0x131
	bool Toggle Visible Auto Aim Point?; // 0x132
};

struct UYWidget_CraftItemDetailOverview : UYWidget {
	FMulticastInlineDelegate OnBackButtonClicked; // 0x2c8
};

struct UWBP_Cost_Entry_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UNamedSlot* CostImageSlot; // 0x2c8
	USizeBox* CostItem; // 0x2d0
	UImage* Gfx_Backer; // 0x2d8
	UImage* Gfx_ResourcePlaceholder; // 0x2e0
	UTextBlock* Txt_CostAmount; // 0x2e8
	USizeBox* VertDivide; // 0x2f0
	UWBP_Divider_Vertical_Panel_C* WBP_Divider_Vertical_Panel; // 0x2f8
	bool ShowDivide; // 0x300
	FText Value; // 0x308
	bool ShowTooltip; // 0x320
	UWBP_Generic_ToolTip_C* Tooltip; // 0x328
	FText TooltipHeader; // 0x330
	FText TooltipDescription; // 0x348
	FText TooltipAdditionalHeaderText; // 0x360
	bool ShowDisabled; // 0x378
};

struct UMaterialExpressionViewProperty : UMaterialExpression {
	EMaterialExposedViewProperty Property; // 0x40
};

struct UPlayerBotMoveToTargetTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	int32_t counter; // 0xb0
	AActor* Owner; // 0xb8
	FName combatTarget; // 0xc0
	FName IsCombatTargetClose; // 0xc8
	AYPlayerController* YPlayerController; // 0xd0
	AActor* ownerActor; // 0xd8
};

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle ButtonStyle; // 0x30
};

struct UGeometryCollectionComponent : UMeshComponent {
	AChaosSolverActor* ChaosSolverActor; // 0x470
	UGeometryCollection* RestCollection; // 0x558
	TArray<AFieldSystemActor*> InitializationFields; // 0x560
	bool Simulating; // 0x570
	EObjectStateTypeEnum ObjectType; // 0x578
	bool EnableClustering; // 0x579
	int32_t ClusterGroupIndex; // 0x57c
	int32_t MaxClusterLevel; // 0x580
	TArray<float> DamageThreshold; // 0x588
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x598
	int32_t CollisionGroup; // 0x59c
	float CollisionSampleFraction; // 0x5a0
	float LinearEtherDrag; // 0x5a4
	float AngularEtherDrag; // 0x5a8
	UChaosPhysicalMaterial* PhysicalMaterial; // 0x5b0
	EInitialVelocityTypeEnum InitialVelocityType; // 0x5b8
	FVector InitialLinearVelocity; // 0x5bc
	FVector InitialAngularVelocity; // 0x5c8
	UPhysicalMaterial* PhysicalMaterialOverride; // 0x5d8
	FGeomComponentCacheParameters CacheParameters; // 0x5e0
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x630
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x640
	FMulticastInlineDelegate OnChaosBreakEvent; // 0x668
	float DesiredCacheTime; // 0x678
	bool CachePlayback; // 0x67c
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x680
	bool bNotifyBreaks; // 0x690
	bool bNotifyCollisions; // 0x691
	bool bEnableReplication; // 0x692
	bool bEnableAbandonAfterLevel; // 0x693
	int32_t ReplicationAbandonClusterLevel; // 0x694
	FGeometryCollectionRepData RepData; // 0x698
	UBodySetup* DummyBodySetup; // 0x8c8
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct AYProjectile_CreatureGrenade_BP_C : AYProjectile_BP_C {
	UAudioComponent* Audio_AI_GrenadeLoop; // 0x3a0
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct UTestMovieSceneSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct UMovieScene3DAttachSection : UMovieScene3DConstraintSection {
	FName AttachSocketName; // 0x118
	FName AttachComponentName; // 0x120
	EAttachmentRule AttachmentLocationRule; // 0x128
	EAttachmentRule AttachmentRotationRule; // 0x129
	EAttachmentRule AttachmentScaleRule; // 0x12a
	EDetachmentRule DetachmentLocationRule; // 0x12b
	EDetachmentRule DetachmentRotationRule; // 0x12c
	EDetachmentRule DetachmentScaleRule; // 0x12d
};

struct UOceanGenerator : UWaterBodyGenerator {
	TArray<UOceanBoxCollisionComponent*> CollisionBoxes; // 0x28
	TArray<UOceanCollisionComponent*> CollisionHullSets; // 0x38
};

struct UYPersistentData : UObject {
	float m_spawnRadiusSquare; // 0x28
	float m_despawnRadiusSquare; // 0x2c
	AActor* m_actor; // 0x30
	AActor* m_classToSpawn; // 0x38
	FVector m_location; // 0x40
	FRotator m_rotation; // 0x4c
	bool m_shouldActorRespawn; // 0x58
	FMulticastInlineDelegate OnPersistentDataPurged; // 0x60
};

struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xb0
};

struct UYWidget_RebindKeys : UYWidget {
	UButton* m_restoreHotkeysButton; // 0x2e0
	UYWidget_InputKeySelector* m_inputSelectorWidgetClass; // 0x2e8
	UPanelWidget* m_keySelectorPanel; // 0x2f0
	TArray<UYWidget_InputKeySelector*> m_keySelectorList; // 0x2f8
	TArray<UYInputKeySelector*> m_requestedBindings; // 0x308
	TArray<FName> m_missingBindings; // 0x368
};

struct AIntroActor_Base_BP_C : AActor {
	USceneComponent* DefaultSceneRoot; // 0x240
	FMulticastInlineDelegate IntroSequenceFinished; // 0x248
	bool IntroStarted; // 0x258
	bool IntroFinished; // 0x259
};

struct USynthKnob : UWidget {
	float Value; // 0x108
	float StepSize; // 0x10c
	float MouseSpeed; // 0x110
	float MouseFineTuneSpeed; // 0x114
	char ShowTooltipInfo : 1; // 0x118
	FText ParameterName; // 0x120
	FText ParameterUnits; // 0x138
	FDelegate ValueDelegate; // 0x150
	FSynthKnobStyle WidgetStyle; // 0x160
	bool Locked; // 0x398
	bool IsFocusable; // 0x399
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0
	FMulticastInlineDelegate OnValueChanged; // 0x3e0
};

struct UBTTask_RunEQSQuery : UBTTask_BlackboardBase {
	UEnvQuery* QueryTemplate; // 0x98
	TArray<FEnvNamedValue> QueryParams; // 0xa0
	TArray<FAIDynamicParam> QueryConfig; // 0xb0
	EEnvQueryRunMode RunMode; // 0xc0
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
	bool bUseBBKey; // 0xf0
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8
};

struct UEnvelopeFollowerListener : UActorComponent {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct UDebugCameraControllerSettings : UDeveloperSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct UParticleSystemComponent : UFXSystemComponent {
	UParticleSystem* Template; // 0x440
	TArray<UMaterialInterface*> EmitterMaterials; // 0x448
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x458
	char bResetOnDetach : 1; // 0x469
	char bUpdateOnDedicatedServer : 1; // 0x469
	char bAllowRecycling : 1; // 0x469
	char bAutoManageAttachment : 1; // 0x469
	char bAutoAttachWeldSimulatedBodies : 1; // 0x469
	char bWarmingUp : 1; // 0x46a
	char bOverrideLODMethod : 1; // 0x46a
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x46a
	ParticleSystemLODMethod LODMethod; // 0x475
	EParticleSignificanceLevel RequiredSignificance; // 0x476
	TArray<FParticleSysParam> InstanceParameters; // 0x478
	FMulticastInlineDelegate OnParticleSpawn; // 0x488
	FMulticastInlineDelegate OnParticleBurst; // 0x498
	FMulticastInlineDelegate OnParticleDeath; // 0x4a8
	FMulticastInlineDelegate OnParticleCollide; // 0x4b8
	bool bOldPositionValid; // 0x4c8
	FVector OldPosition; // 0x4cc
	FVector PartSysVelocity; // 0x4d8
	float WarmupTime; // 0x4e4
	float WarmupTickRate; // 0x4e8
	float m_runtimeParticleLifetime; // 0x4ec
	float SecondsBeforeInactive; // 0x4f4
	float MaxTimeBeforeForceUpdateTransform; // 0x4fc
	TArray<UParticleSystemReplay*> ReplayClips; // 0x520
	float CustomTimeDilation; // 0x538
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x590
	FName AutoAttachSocketName; // 0x598
	EAttachmentRule AutoAttachLocationRule; // 0x5a0
	EAttachmentRule AutoAttachRotationRule; // 0x5a1
	EAttachmentRule AutoAttachScaleRule; // 0x5a2
	FMulticastInlineDelegate OnSystemFinished; // 0x5d0
};

struct ULandscapeSplineControlPoint : UObject {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	float Width; // 0x40
	float LayerWidthRatio; // 0x44
	float SideFalloff; // 0x48
	float LeftSideFalloffFactor; // 0x4c
	float RightSideFalloffFactor; // 0x50
	float LeftSideLayerFalloffFactor; // 0x54
	float RightSideLayerFalloffFactor; // 0x58
	float EndFalloff; // 0x5c
	TArray<FLandscapeSplineConnection> ConnectedSegments; // 0x60
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	UControlPointMeshComponent* LocalMeshComponent; // 0xa0
};

struct URestrictedGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
	bool bUseLegacySectionIndexBlend; // 0x90
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98
	bool bBlendFirstChildOfRoot; // 0xc8
};

struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	FString EmitterName; // 0xd8
};

struct UPrefabComponent : USceneComponent {
	TSoftObjectPtr<UPrefabricatorAssetInterface> PrefabAssetInterface; // 0x1f8
};

struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x748
	char AllowPlayerPortUnreach : 1; // 0x748
	uint32_t MaxPortCountToTry; // 0x74c
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x75c
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x760
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x764
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x768
	double MaxSecondsInReceive; // 0x770
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x778
	float ResolutionConnectionTimeout; // 0x77c
};

struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UYAuthorization : UObject {
	FMulticastInlineDelegate OnRegistered; // 0x28
	FMulticastInlineDelegate OnAuthServerLoginResult; // 0x38
	FMulticastInlineDelegate OnMaintenanceModeStateReceived; // 0x58
	FString m_authBaseUrlSteam; // 0x70
	FString m_authBaseUrlEos; // 0x80
	UYPlayfabInstance* m_playfabInstance; // 0x90
};

struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UYWidget_EomFactionProgressPanel : UYWidget {
	UTextBlock* m_maxLevelText; // 0x2c0
};

struct UYWidget_OutpostSquadOverviewEntry : UYWidget {
	UWidgetSwitcher* m_stateWidgetSwitcher; // 0x2c0
	UButton* m_addMemberButton; // 0x2c8
	UButton* m_squadMemberButton; // 0x2d0
	FYOutpostFriendInfo m_friendInfo; // 0x2d8
	bool m_isOwnPlayer; // 0x358
};

struct UWBP_Divider_Vertical_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UImage* Gfx_VertDivide; // 0x2d0
	UImage* Gfx_VertDivide_2; // 0x2d8
};

struct UYWidget_ItemComponentTextBlueprintPrice : UYWidget_ItemComponentBase {
	UYWidget_PriceGeneric* m_priceWidget; // 0x300
};

struct UOpenDebugMenuCommand_BP_C : UYNavigationCommand {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
};

struct UYPlayerSFXComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UParticleSystemComponent* interaction01_PS; // 0xb8
	UYPlayerCharacterStateComponent* playerCharacter_StateComp; // 0xc0
	APRO_PlayerCharacter_C* playerCharacter; // 0xc8
	UParticleSystemComponent* gearStore01_PS; // 0xd0
	UParticleSystemComponent* kitHeavy_charge01_PS; // 0xd8
	UParticleSystemComponent* KitNinja_Dodge_PS; // 0xe0
	UParticleSystemComponent* KitNinja_Jump_PS; // 0xe8
	int32_t ForwardDash_jumpCounter; // 0xf0
	FDataTableRowHandle SFX_ChargingAttack; // 0xf8
	UAudioComponent* ChargingAttackAudioComponent; // 0x108
	FTimerHandle TimerHandle_StartChargingMeleeAttackSound; // 0x110
};

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
};

struct UYWidgetUpdater : UActorComponent {
	TArray<UUserWidget*> m_pendingAddToUIBackgroundWidgets; // 0xb0
	TArray<UUserWidget*> m_widgets; // 0xc0
	TArray<UUserWidget*> m_previousFrameShownWidgets; // 0xd0
};

struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28
	int32_t SubdivisionCount; // 0x2c
	float SelfCollisionThickness; // 0x30
	float CollisionThickness; // 0x34
	bool bUseDampingOverride; // 0x38
	float Damping; // 0x3c
	bool bUseGravityOverride; // 0x40
	float GravityScale; // 0x44
	FVector Gravity; // 0x48
	bool bUseLocalSpaceSimulation; // 0x54
	bool bUseXPBDConstraints; // 0x55
};

struct UNiagaraComponentPool : UObject {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28
};

struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
};

struct UMediaSoundComponent : USynthComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
};

struct UYBTService_AIActionContextName : UBTService {
	FBlackboardKeySelector m_keyAIActionContextName; // 0x70
	FName m_aiContextActionName; // 0x98
};

struct AYTurretPawn : APawn {
	bool m_isSharingGlobalTurretAbilityActorLimit; // 0x2b0
	FMulticastInlineDelegate TurretDestroyedDelegate; // 0x2b8
	FMulticastInlineDelegate TurretFiredWeaponDelegate; // 0x2c8
	FMulticastInlineDelegate TurretStateChangedDelegate; // 0x2d8
	AActor* m_cachedAssociatedPlayerState; // 0x2e8
	UCapsuleComponent* m_capsuleComponent; // 0x2f0
	USkeletalMeshComponent* m_meshComponent; // 0x2f8
	UYHealthComponent* m_healthComponent; // 0x300
	UYDamageComponent* m_damageComponent; // 0x308
	AYAITurretController* m_owningAIController; // 0x310
	bool m_aimAtControllerTarget; // 0x318
	FRotator m_currentAimRotation; // 0x31c
	FRotator m_desiredAimRotation; // 0x328
	bool m_interpAimRotation; // 0x334
	float m_aimRotationInterpSpeed; // 0x338
	float m_sightArc; // 0x33c
	float m_sightRange; // 0x340
	FVector m_targetLocation; // 0x344
	EYTurretState m_turretState; // 0x350
	FDataTableRowHandle m_weaponTransport; // 0x358
	FVector m_muzzleOffset; // 0x368
	FDataTableRowHandle m_abilityRowHandle; // 0x378
};

struct UNavCollision : UNavCollisionBase {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct ABP_Door_Transition_BP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UStaticMeshComponent* StaticMesh; // 0x248
	USceneComponent* DefaultSceneRoot; // 0x250
	UYObjectInteractionComponent* YObjectInteraction; // 0x258
	APlayerStart* DestinationPoint; // 0x260
	FString blueprintName; // 0x268
	FYWidgetActorPlateInitializationData PlateData; // 0x278
	bool AssignShardRelevanSelfData; // 0x300
	float DelayUntilLocationTransfer; // 0x304
};

struct UCommandlet : UObject {
	FString HelpDescription; // 0x28
	FString HelpUsage; // 0x38
	FString HelpWebLink; // 0x48
	TArray<FString> HelpParamNames; // 0x58
	TArray<FString> HelpParamDescriptions; // 0x68
	char IsServer : 1; // 0x78
	char IsClient : 1; // 0x78
	char IsEditor : 1; // 0x78
	char LogToConsole : 1; // 0x78
	char ShowErrorCount : 1; // 0x78
	char ShowProgress : 1; // 0x78
};

struct UDestructibleMesh : USkeletalMesh {
	FDestructibleParameters DefaultDestructibleParameters; // 0x398
	TArray<FFractureEffect> FractureEffects; // 0x420
};

struct UEnvQueryManager : UAISubsystem {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0xa8
	TArray<UEnvQueryContext*> LocalContexts; // 0xb8
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8
	float MaxAllowedTestingTime; // 0x12c
	bool bTestQueriesUsingBreadth; // 0x130
	int32_t QueryCountWarningThreshold; // 0x134
	double QueryCountWarningInterval; // 0x138
};

struct UYLiveEventModifiersManager : UObject {
	float m_matchFactionXPMultiplier; // 0x40
	float m_matchSeasonXPMultiplier; // 0x44
	float m_matchProspectorLevelXPMultiplier; // 0x48
	float m_matchSoftCurrencyMultiplier; // 0x4c
	EYSeasonalEvent m_currentSeasonalEvent; // 0x50
};

struct UYWidget_ItemComponentTextName : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnComponentTextSet; // 0x300
	bool m_useRarityColor; // 0x310
};

struct UReplicationGraphNode_AlwaysRelevant_ForConnection : UReplicationGraphNode_ActorList {
	TArray<FAlwaysRelevantActorInfo> PastRelevantActors; // 0x110
};

struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct AYHUD_Login_BP_C : AYHUD {
	UYNotificationComponent* YNotification; // 0x3b8
	USceneComponent* DefaultSceneRoot; // 0x3c0
};

struct UWBP_BlurBackerSimple_Panel_C : UUserWidget {
	UImage* Gfx_DarkenFillColor; // 0x260
};

struct UPlayFabClientAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xad8
	UPlayFabJsonObject* RequestJsonObj; // 0xae0
	UPlayFabJsonObject* ResponseJsonObj; // 0xae8
};

struct UYAIStabilityComponent : UActorComponent {
	FDataTableRowHandle m_hitReactions; // 0xb0
	TMap<FName, FYStabilityData> m_stabilityData; // 0xd0
	float m_tickTimeDecreaseStability; // 0x120
	TArray<FGuid> m_appliedPerks; // 0x128
};

struct UYBlockableComponent : UActorComponent {
	bool m_isBlocked; // 0xb0
	bool m_canBlock; // 0xb1
};

struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
};

struct UDebug_ReplayMenu_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UScrollBox* AllReplaysScrollBox; // 0x268
	UYButton* YRefresh; // 0x270
	UYButton* YStartRecording; // 0x278
	UYButton* YStartRecordingForAutomationTest; // 0x280
	UYButton* YStopRecording; // 0x288
};

struct UYPlayerPassiveGeneratorsComponent : UActorComponent {
	FMulticastInlineDelegate OnGeneratorCollectionSuccessful; // 0xb0
	FMulticastInlineDelegate OnFailedCollectGenerator; // 0xc0
};

struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x240
};

struct UInterpTrack : UObject {
	TArray<UInterpTrack*> SubTracks; // 0x38
	UInterpTrackInst* TrackInstClass; // 0x48
	ETrackActiveCondition ActiveCondition; // 0x50
	FString TrackTitle; // 0x58
	char bOnePerGroup : 1; // 0x68
	char bDirGroupOnly : 1; // 0x68
	char bDisableTrack : 1; // 0x68
	char bIsSelected : 1; // 0x68
	char bIsAnimControlTrack : 1; // 0x68
	char bSubTrackOnly : 1; // 0x68
	char bVisible : 1; // 0x68
	char bIsRecording : 1; // 0x68
};

struct UYWidget_InventoryWeaponReorderButton : UYWidget {
	EReOrderButtonType ReOrderButtonType; // 0x2c0
	UYWeaponPlayerControllerInventoryComponent* m_weaponInventoryComponent; // 0x2c8
};

struct UWBP_FTUE_NextStep_Widget_C : UYWidgetView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UWidgetAnimation* Success_Anim; // 0x340
	UWidgetAnimation* WidgetIn_Anim; // 0x348
	UOverlay* contracts; // 0x350
	UImage* Gfx_ArrowSmall; // 0x358
	UImage* Gfx_Background_Color; // 0x360
	UImage* Gfx_Background_Gradient; // 0x368
	UImage* Gfx_Background_HeaderColor; // 0x370
	UImage* Gfx_Chevrons; // 0x378
	UImage* Gfx_Complete_2; // 0x380
	UImage* Gfx_Flash; // 0x388
	UImage* Gfx_Flash_2; // 0x390
	UImage* Gfx_Flash_3; // 0x398
	UImage* Gfx_SlantMain; // 0x3a0
	UImage* Gfx_SlantSecondary; // 0x3a8
	UImage* Gfx_SuccessHighlight; // 0x3b0
	URichTextBlock* RichTxt_Info; // 0x3b8
	USizeBox* RightSide; // 0x3c0
	UTextBlock* Txt_Headline; // 0x3c8
	UWBP_Checkbox_C* WBP_Checkbox; // 0x3d0
	UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel; // 0x3d8
	UWBP_Objective_HUD_Item_C* WBP_Objective_HUD_Item_A; // 0x3e0
	UWBP_Objective_HUD_Item_C* WBP_Objective_HUD_Item_B; // 0x3e8
	UWBP_Objective_HUD_Item_C* WBP_Objective_HUD_Item_C; // 0x3f0
	UYTextBlock* YTxt_Info_3; // 0x3f8
	UYWidgetProvider_Missions* MissionProvider; // 0x400
	bool IsCompleteAnimPlaying; // 0x408
	float ReappearanceDelay; // 0x40c
	float StepCompleteDelay; // 0x410
	FDataTableRowHandle StepCompletedSound; // 0x418
	FTimerHandle VisibilityHandle; // 0x428
};

struct UMaterialFunction : UMaterialFunctionInterface {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UYSoundNodeInteriorSetting : USoundNode {
	bool m_previewIsInInterior; // 0x48
};

struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UAudioBus : UObject {
	EAudioBusChannels AudioBusChannels; // 0x28
	bool bIsAutomatic; // 0x29
};

struct AWaterMeshActor : AActor {
	UTexture2D* WaterVelocityTexture; // 0x240
	UWaterMeshComponent* WaterMesh; // 0x248
};

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38
};

struct UWBP_Header_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* Anim_FadeIn; // 0x2c8
	UImage* Gfx_ArrowSmall; // 0x2d0
	UImage* Gfx_Background; // 0x2d8
	UImage* Gfx_Background_Gradient; // 0x2e0
	UImage* Gfx_Chevrons; // 0x2e8
	UImage* Gfx_SlantA; // 0x2f0
	UImage* Gfx_SlantB; // 0x2f8
	UImage* Gfx_SlantC; // 0x300
	UTextBlock* Txt_Headline; // 0x308
	FText HeadlineLabel; // 0x310
};

struct AYAIPlayerController_Match : AYAIController {
	TArray<FDataTableRowHandle> m_weaponToInitialize; // 0x3d8
	TArray<FDataTableRowHandle> m_pistolHandles; // 0x3e8
	bool m_randomizeWeaponInventory; // 0x3f8
	FDataTableRowHandle m_firstAbility; // 0x400
	FDataTableRowHandle m_secondAbility; // 0x410
	FDataTableRowHandle m_thirdAbility; // 0x420
	FDataTableRowHandle m_fourthAbility; // 0x430
	bool m_randomizeAbilities; // 0x440
	UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent; // 0x448
	UYWeaponPlayerControllerInventoryComponent* m_inventoryWeaponController; // 0x450
	UYControllerInventoryAbilityComponent* m_abilityInventoryComponent; // 0x458
	UYPlayerInteractionComponent* m_playerInteractionComponent; // 0x460
};

struct UScaleBox : UContentWidget {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct UMovieSceneVectorSection : UMovieSceneSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe8
	int32_t ChannelsUsed; // 0x368
};

struct UDragDropOperation : UObject {
	FString Tag; // 0x28
	UObject* Payload; // 0x38
	UWidget* DefaultDragVisual; // 0x40
	EDragPivot Pivot; // 0x48
	FVector2D Offset; // 0x4c
	FMulticastInlineDelegate OnDrop; // 0x58
	FMulticastInlineDelegate OnDragCancelled; // 0x68
	FMulticastInlineDelegate OnDragged; // 0x78
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30
};

struct UNiagaraDataInterfaceCurveBase : UNiagaraDataInterface {
	TArray<float> ShaderLUT; // 0x38
	float LUTMinTime; // 0x48
	float LUTMaxTime; // 0x4c
	float LUTInvTimeRange; // 0x50
	float LUTNumSamplesMinusOne; // 0x54
	char bUseLUT : 1; // 0x58
	char bExposeCurve : 1; // 0x58
	FName ExposedName; // 0x5c
	UTexture2D* ExposedTexture; // 0x68
};

struct UYBBObject_StabilityAnimationInfo : UObject {
	bool m_canBeInterruptedByDodge; // 0x28
	UAnimMontage* m_animMontage; // 0x30
	float m_yawRotationGoal; // 0x38
	FName m_stabilityDefinitionName; // 0x3c
	float m_stabilityPriorityLevel; // 0x44
};

struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct UOceanCollisionComponent : UPrimitiveComponent {
	UBodySetup* CachedBodySetup; // 0x440
};

struct UYControllerInventoryInteractionComponent : UActorComponent {
	AActor* m_interactingActorContext; // 0xc0
	UYStateInventoryComponent* m_interactingInventoryComponent; // 0xc8
};

struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct USceneCaptureComponent : USceneComponent {
	ESceneCapturePrimitiveRenderMode PrimitiveRenderMode; // 0x1f8
	ESceneCaptureSource CaptureSource; // 0x1f9
	char bCaptureEveryFrame : 1; // 0x1fa
	char bCaptureOnMovement : 1; // 0x1fa
	bool bAlwaysPersistRenderingState; // 0x1fb
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenComponents; // 0x200
	TArray<AActor*> HiddenActors; // 0x210
	TArray<TWeakObjectPtr<UPrimitiveComponent>> ShowOnlyComponents; // 0x220
	TArray<AActor*> ShowOnlyActors; // 0x230
	float LODDistanceFactor; // 0x240
	float MaxViewDistanceOverride; // 0x244
	int32_t CaptureSortPriority; // 0x248
	bool bUseRayTracingIfEnabled; // 0x24c
	TArray<FEngineShowFlagsSetting> ShowFlagSettings; // 0x250
	FString ProfilingEventName; // 0x290
};

struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x458
};

struct UEnvQueryTest : UEnvQueryNode {
	int32_t TestOrder; // 0x30
	EEnvTestPurpose TestPurpose; // 0x34
	FString TestComment; // 0x38
	EEnvTestFilterOperator MultipleContextFilterOp; // 0x48
	EEnvTestScoreOperator MultipleContextScoreOp; // 0x49
	EEnvTestFilterType FilterType; // 0x4a
	FAIDataProviderBoolValue BoolValue; // 0x50
	FAIDataProviderFloatValue FloatValueMin; // 0x88
	FAIDataProviderFloatValue FloatValueMax; // 0xc0
	EEnvTestScoreEquation ScoringEquation; // 0xf9
	EEnvQueryTestClamping ClampMinType; // 0xfa
	EEnvQueryTestClamping ClampMaxType; // 0xfb
	EEQSNormalizationType NormalizationType; // 0xfc
	FAIDataProviderFloatValue ScoreClampMin; // 0x100
	FAIDataProviderFloatValue ScoreClampMax; // 0x138
	FAIDataProviderFloatValue ScoringFactor; // 0x170
	FAIDataProviderFloatValue ReferenceValue; // 0x1a8
	bool bDefineReferenceValue; // 0x1e0
	char bWorkOnFloatValues : 1; // 0x1f0
};

struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x278
};

struct UWBP_Item_Preview_Btn_C : UWBP_ItemTileBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5d8
	UWidgetAnimation* Sell_Anim; // 0x5e0
	UWidgetAnimation* Release_Anim; // 0x5e8
	UWidgetAnimation* Press_Anim; // 0x5f0
	UWidgetAnimation* HighlightSheen_Anim; // 0x5f8
	UWidgetAnimation* Selected_Anim; // 0x600
	UWidgetAnimation* Idle_Anim; // 0x608
	UWidgetAnimation* Highlight_Anim; // 0x610
	UCanvasPanel* AdditionalInfo; // 0x618
	UHorizontalBox* AmountHB; // 0x620
	UOverlay* CollapsedComponents; // 0x628
	UOverlay* ComponentsContainer; // 0x630
	UNamedSlot* ContentSlot_CenterImage; // 0x638
	UTextBlock* CurrencyReturn; // 0x640
	UTextBlock* FactionProgressionIncrement; // 0x648
	UImage* Gfx_DurabilityIcon; // 0x650
	UImage* Gfx_Edge; // 0x658
	UImage* Gfx_FillEdge; // 0x660
	UImage* Gfx_FillEdge_Old; // 0x668
	UImage* Gfx_Gradient; // 0x670
	UImage* Gfx_Stroke; // 0x678
	UImage* Gfx_StrokeSelected; // 0x680
	UImage* Gfx_Triangle; // 0x688
	UImage* Icn_WeaponImage; // 0x690
	UNamedSlot* Icon_Slot; // 0x698
	USizeBox* IconDurabilitySizeBox; // 0x6a0
	UScaleBox* Image_Centered; // 0x6a8
	UScaleBox* ImageRotated; // 0x6b0
	UInvalidationBox* InvalidationBox_1; // 0x6b8
	UItemComponent_AmmoAmountText_WBP_C* ItemComponent_AmmoAmountText_WBP; // 0x6c0
	UItemComponent_Highlight_Stash_WBP_C* ItemComponent_Highlight_Stash_WBP_84; // 0x6c8
	UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x6d0
	UItemComponent_ImageAmmoType_WBP_C* ItemComponent_ImageAmmoType_WBP; // 0x6d8
	UItemComponent_Insured_C* ItemComponent_Insured; // 0x6e0
	UItemComponent_LostOnDeath_C* ItemComponent_LostOnDeath; // 0x6e8
	UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x6f0
	UItemComponent_TextName_WBP_C* ItemComponent_TextName_WBP; // 0x6f8
	UItemComponent_Weight_C* ItemComponent_Weight; // 0x700
	UOverlay* Layout_ButtonArtwork; // 0x708
	UCanvasPanel* Layout_ButtonContent; // 0x710
	UOverlay* Layout_ButtonDisabled; // 0x718
	UOverlay* Layout_ButtonLoading; // 0x720
	UOverlay* Layout_Searching; // 0x728
	UButton* m_button; // 0x730
	UImage* m_Gfx_AmmoIcon; // 0x738
	UImage* m_Gfx_CurrencyIcon; // 0x740
	UImage* m_Gfx_FactionIcon; // 0x748
	UImage* m_Image_ItemCenter; // 0x750
	USizeBox* rarity; // 0x758
	UBorder* RarityBorder; // 0x760
	UCanvasPanel* SellingInfo; // 0x768
	USizeBox* SizeBox_Ammo; // 0x770
	USizeBox* SizeBox_Currency; // 0x778
	USizeBox* SizeBox_Faction; // 0x780
	UNamedSlot* Slot_AdditionalComponents; // 0x788
	UOverlay* Slot_TypePreview; // 0x790
	UTextBlock* Txt_ItemRarity; // 0x798
	UTextBlock* Txt_SearchingTime; // 0x7a0
	UTextBlock* Txt_Value; // 0x7a8
	UWBP_Item_Death_C* WBP_Item_Death; // 0x7b0
	UWBP_Item_InsuranceTag_C* WBP_Item_InsuranceTag; // 0x7b8
	UWBP_LoadingSpinner_C* WBP_LoadingSpinner; // 0x7c0
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x7c8
	UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x7d0
	UWBP_Weight_C* WBP_Weight; // 0x7d8
	UOverlay* weight; // 0x7e0
	FLinearColor rarityColor; // 0x7e8
	FText RarityLabel; // 0x7f8
	bool IsDisabled; // 0x810
	bool IsItemVisible; // 0x811
	bool ShowAdditionalInfo; // 0x812
	bool ShowRarity; // 0x813
	bool ShowSlotPreview; // 0x814
	bool ShowEmptySlot; // 0x815
	EYPlayerSetType slotType; // 0x816
	bool InspectedWeaponOverride; // 0x817
};

struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100
};

struct UYFriendsImportManager : UObject {
	FMulticastInlineDelegate OnFriendsImportResult; // 0x28
};

struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
};

struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
};

struct UUI_KeyShortcut_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* m_background; // 0x268
	UYTextBlock* TextBlock_Hold; // 0x270
	UTextBlock* TextBlock_Key; // 0x278
	FText keyText; // 0x280
	bool ShowHoldHint; // 0x298
	FDataTableRowHandle InputActions; // 0x2a0
	TMap<FKey, FText> KeyToTextMap; // 0x2b0
};

struct UYWidget_HitIndicator : UYWidget {
	UImage* m_hitOverlayImage; // 0x2c0
	UImage* m_contextHitImage; // 0x2c8
	float m_dotProductDoNotShowDamageIndicator; // 0x2d0
	UYDamageComponent* m_damagingComponent; // 0x2d8
};

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x40
};

struct UYWidget_Notification : UYWidget {
	FMulticastInlineDelegate OnRequestRemoveNotification; // 0x2c0
	FMulticastInlineDelegate OnNotificationActionDelegate; // 0x2d0
	FYSocialNotification m_data; // 0x2e0
	int32_t m_notificationCounter; // 0x398
	FTimerHandle m_notificationTimerHandle; // 0x3a0
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UNiagaraRendererProperties : UNiagaraMergeable {
	FNiagaraPlatformSet Platforms; // 0x28
	int32_t SortOrderHint; // 0x58
	bool bIsEnabled; // 0x5c
	bool bMotionBlurEnabled; // 0x5d
};

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UChaosSolverSettings : UDeveloperSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
};

struct UAbility_Action_Cloak_BP_C : UYCharacterAbilityComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x180
	AActor* Owner; // 0x188
	float velocityMagnitude; // 0x190
	float velocityFade; // 0x194
	FVector OldVelocity; // 0x198
	FVector targetVector; // 0x1a4
	FVector currentVector; // 0x1b0
	bool IsActiveNow; // 0x1bc
};

struct UYResourceFarmingMapMarkerData : UYMapMarkerData {
	AYPlayerState* m_owningPlayer; // 0x148
	AYPlayerState* m_previousOwner; // 0x150
	bool m_showWarningForOwner; // 0x158
	int32_t m_heatLevel; // 0x15c
};

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x440
	int32_t SectionBaseX; // 0x450
	int32_t SectionBaseY; // 0x454
	int32_t CollisionSizeQuads; // 0x458
	float CollisionScale; // 0x45c
	int32_t SimpleCollisionSizeQuads; // 0x460
	TArray<char> CollisionQuadFlags; // 0x468
	FGuid HeightfieldGuid; // 0x478
	FBox CachedLocalBox; // 0x488
	LazyObjectProperty RenderComponent; // 0x4a4
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4d0
};

struct USoundSimple : USoundBase {
	TArray<FSoundVariation> Variations; // 0x1b8
	USoundWave* SoundWave; // 0x1c8
};

struct UYHeatMapActorComponent : UActorComponent {
	FYRequestNewHeatMapData m_data; // 0xb0
	bool m_useOwnerLocation; // 0xd0
	bool m_updateLocationOnMove; // 0xd1
};

struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct UARTrackedPose : UARTrackedGeometry {
	FARPose3D TrackedPose; // 0xf8
};

struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct UYWidget_Progress : UYWidget {
	UProgressBar* m_progressBar; // 0x2c0
	UImage* m_icon; // 0x2c8
	UTextBlock* m_infoText; // 0x2d0
	UYProgressComponent* m_progressToShow; // 0x2d8
	UYProgressDisplayComponent* m_hudProgressComponent; // 0x2e0
};

struct UYWidget_EndOfMatch : UYWidget {
	bool m_showDeathRecap; // 0x2c0
	UYWidget_MatchResult* m_matchResults; // 0x2c8
	UYWidget_MatchRewards* m_matchRewards; // 0x2d0
	UYWidget_TopMenuBar* m_topMenuBar; // 0x2d8
	UYSpectateComponent* m_spectateComponent; // 0x2e0
};

struct AActor : UObject {
	FActorTickFunction PrimaryActorTick; // 0x28
	char bShouldNeverSeamlessTravel : 1; // 0x58
	char bNetTemporary : 1; // 0x58
	char bNetStartup : 1; // 0x58
	char bOnlyRelevantToOwner : 1; // 0x58
	char bAlwaysRelevant : 1; // 0x58
	char bReplicateMovement : 1; // 0x58
	char bHidden : 1; // 0x58
	char bTearOff : 1; // 0x58
	char bExchangedRoles : 1; // 0x59
	char bNetLoadOnClient : 1; // 0x59
	char bNetUseOwnerRelevancy : 1; // 0x59
	char bRelevantForNetworkReplays : 1; // 0x59
	char bRelevantForLevelBounds : 1; // 0x59
	char bReplayRewindable : 1; // 0x59
	char bAllowTickBeforeBeginPlay : 1; // 0x59
	char bAutoDestroyWhenFinished : 1; // 0x59
	char bCanBeDamaged : 1; // 0x5a
	char bBlockInput : 1; // 0x5a
	char bCollideWhenPlacing : 1; // 0x5a
	char bFindCameraComponentWhenViewTarget : 1; // 0x5a
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x5a
	char bIgnoresOriginShifting : 1; // 0x5a
	char bEnableAutoLODGeneration : 1; // 0x5a
	char bIsEditorOnlyActor : 1; // 0x5a
	char bActorSeamlessTraveled : 1; // 0x5b
	char bReplicates : 1; // 0x5b
	char bCanBeInCluster : 1; // 0x5b
	char bAllowReceiveTickEventOnDedicatedServer : 1; // 0x5b
	char bActorEnableCollision : 1; // 0x5c
	char bActorIsBeingDestroyed : 1; // 0x5c
	EActorUpdateOverlapsMethod UpdateOverlapsMethodDuringLevelStreaming; // 0x5d
	EActorUpdateOverlapsMethod DefaultUpdateOverlapsMethodDuringLevelStreaming; // 0x5e
	ENetRole RemoteRole; // 0x5f
	FRepMovement ReplicatedMovement; // 0x60
	float InitialLifeSpan; // 0x9c
	float CustomTimeDilation; // 0xa0
	FRepAttachment AttachmentReplication; // 0xa8
	AActor* Owner; // 0xe8
	FName NetDriverName; // 0xf0
	ENetRole Role; // 0xf8
	ENetDormancy NetDormancy; // 0xf9
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xfa
	EAutoReceiveInput AutoReceiveInput; // 0xfb
	int32_t InputPriority; // 0xfc
	UInputComponent* InputComponent; // 0x100
	float NetCullDistanceSquared; // 0x108
	int32_t NetTag; // 0x10c
	float m_safeForceNetUpdateFrequency; // 0x110
	float NetUpdateFrequency; // 0x118
	float MinNetUpdateFrequency; // 0x11c
	float NetPriority; // 0x120
	APawn* Instigator; // 0x130
	TArray<AActor*> Children; // 0x138
	USceneComponent* RootComponent; // 0x148
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x150
	TArray<FName> Layers; // 0x168
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x178
	TArray<FName> Tags; // 0x188
	char m_shouldNeverUpdateNavigationTransform : 1; // 0x198
	FMulticastSparseDelegate OnTakeAnyDamage; // 0x199
	FMulticastSparseDelegate OnTakePointDamage; // 0x19a
	FMulticastSparseDelegate OnTakeRadialDamage; // 0x19b
	FMulticastSparseDelegate OnActorBeginOverlap; // 0x19c
	FMulticastSparseDelegate OnActorEndOverlap; // 0x19d
	FMulticastSparseDelegate OnBeginCursorOver; // 0x19e
	FMulticastSparseDelegate OnEndCursorOver; // 0x19f
	FMulticastSparseDelegate OnClicked; // 0x1a0
	FMulticastSparseDelegate OnReleased; // 0x1a1
	FMulticastSparseDelegate OnInputTouchBegin; // 0x1a2
	FMulticastSparseDelegate OnInputTouchEnd; // 0x1a3
	FMulticastSparseDelegate OnInputTouchEnter; // 0x1a4
	FMulticastSparseDelegate OnInputTouchLeave; // 0x1a5
	FMulticastSparseDelegate OnActorHit; // 0x1a6
	FMulticastSparseDelegate OnDestroyed; // 0x1a7
	FMulticastSparseDelegate OnEndPlay; // 0x1a8
	TArray<UActorComponent*> InstanceComponents; // 0x210
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x220
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	FLinearColor ClearColor; // 0xe4
	EPixelFormat OverrideFormat; // 0xf4
	char bHDR : 1; // 0xf5
	char bForceLinearGamma : 1; // 0xf5
};

struct UYWidget_ModalDialogOkCancel : UYWidget {
	UTextBlock* m_msgHeadline; // 0x2e0
	URichTextBlock* m_msgRichText; // 0x2e8
	UTextBlock* m_okButtonText; // 0x2f0
	UTextBlock* m_cancelButtonText; // 0x2f8
	UButton* m_okButton; // 0x300
	UButton* m_cancelButton; // 0x308
	FDataTableRowHandle m_audioAnimateIn; // 0x310
	FDataTableRowHandle m_audioAnimateOut; // 0x320
};

struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
};

struct UParticleModuleTypeDataMesh : UParticleModuleTypeDataBase {
	UStaticMesh* Mesh; // 0x30
	float LODSizeScale; // 0x40
	char bUseStaticMeshLODs : 1; // 0x44
	char CastShadows : 1; // 0x44
	char DoCollisions : 1; // 0x44
	EMeshScreenAlignment MeshAlignment; // 0x45
	char bOverrideMaterial : 1; // 0x46
	char bOverrideDefaultMotionBlurSettings : 1; // 0x46
	char bEnableMotionBlur : 1; // 0x46
	FRawDistributionVector RollPitchYawRange; // 0x48
	EParticleAxisLock AxisLockOption; // 0x90
	char bCameraFacing : 1; // 0x91
	EMeshCameraFacingUpAxis CameraFacingUpAxisOption; // 0x92
	EMeshCameraFacingOptions CameraFacingOption; // 0x93
	char bApplyParticleRotationAsSpin : 1; // 0x94
	char bFaceCameraDirectionRatherThanPosition : 1; // 0x94
	char bCollisionsConsiderPartilceSize : 1; // 0x94
};

struct AYCharacterCustomizationActor : ACharacter {
	UYCameraInteractionComponent* m_interactionComponent; // 0x4f0
	UYCustomizationCameraComponent* m_customizationCameraComponent; // 0x4f8
	TArray<FYCharacterCustomizationActorActiveVisualizationEntry> m_activeVisualizedCustomizationEntries; // 0x510
	FDataTableRowHandle m_equippedWeaponHandle; // 0x520
	TArray<FDataTableRowHandle> m_equippedVanityHandles; // 0x530
	TArray<AYCharacterCustomizationActor*> m_childCustomizationActors; // 0x540
	bool m_clearMaterial; // 0x550
	bool m_reactToGLobalVanityUpdates; // 0x551
	bool m_attachToLocalPlayerAtStart; // 0x552
	bool m_useMeshMerging; // 0x553
	bool m_shouldSkelMeshComponentsSyncAttachParrentLOD; // 0x554
	TArray<USkeletalMesh*> m_meshToUseForMeshMerging; // 0x558
	TArray<EYCustomizationCategory> m_visualizationCategoriesToDisable; // 0x570
	AActor* m_explicitCustomizationActor; // 0x588
	AActor* m_playerCharacterCustomizationActor; // 0x590
	bool m_bindToPlayerStateData; // 0x598
};

struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	TArray<FVector4> FloatData; // 0x50
};

struct UYAITurnComponent : UActorComponent {
	float m_turnYawThreshold; // 0xb0
	float m_turnAnimatBlockTime; // 0xb4
	bool m_turnEnabled; // 0xbc
};

struct AYGameMode_Match : AYGameModeBase {
	UYMatchDifficultyComponent* m_matchDifficultyComponent; // 0x368
	UYAIManager* m_aiManager; // 0x370
	UYWeaponAnalyticsComponent* m_weaponAnalytics; // 0x378
	UYKilledEventAnalyticsComponent* m_killedEventsAnalytics; // 0x380
	UYPlayerStatsDeathsComponent* m_playerStatsDeathsComponent; // 0x388
	UYAIAnalyticsComponent* m_aiAnalyticsComponent; // 0x390
	UYAbilityAnalyticsComponent* m_abilityAnalytics; // 0x398
	UYCommWheelAnalyticsComponent* m_commWheelAnalytics; // 0x3a0
	UYDurabilityAnalyticsComponent* m_durabilityAnalytics; // 0x3a8
	UYServerResourceManagerComponent* m_serverResourceManager; // 0x3b0
	UYMissionGameManagerComponent* m_missionManagerComponent; // 0x3b8
	UYSkillCalcManagerComponent* m_skillCalcManagerComponent; // 0x3c0
	UYSpawnManagerComponent* m_spawnManager; // 0x3c8
	UYHeatMapManager* m_heatMapManager; // 0x3d0
	UYHideableBushManagerComponent* m_hideableBushManager; // 0x3d8
	UYGameSquadsComponent* m_gameSquadsComponent; // 0x3e0
	UYGamePlayerStartComponent* m_gamePlayerStartComponent; // 0x3e8
	bool m_useLobby; // 0x410
	bool m_shouldStartAutomation; // 0x411
	bool m_shouldStartPlaytestAutomation; // 0x412
	float m_checkShouldEndMatchRate; // 0x414
	float m_safetyShutdownTimerPostMatch; // 0x418
	float m_disconnectPlayerStatesDelay; // 0x41c
	float m_regularShutdownTimerPostMatchAllPlayersFinishedMatch; // 0x420
	int32_t m_blockBlockablesAroundUsedPlayerStartTime; // 0x428
	int32_t m_blockBlockablesAroundPlayerStartDistance; // 0x42c
};

struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve RedCurve; // 0x70
	FRichCurve GreenCurve; // 0xf0
	FRichCurve BlueCurve; // 0x170
	FRichCurve AlphaCurve; // 0x1f0
};

struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68
};

struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x248
	UBillboardComponent* GoodSprite; // 0x250
	UBillboardComponent* BadSprite; // 0x258
	char bIsPIEPlayerStart : 1; // 0x260
};

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct UYAutomationManager : UObject {
	FYAutomationLoadingMetrics m_automationMetrics; // 0x28
};

struct AScannerProjectile_BP_C : AYProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UPostProcessComponent* PostProcess; // 0x3a0
	float AnimationTimeline_scan_animSlider_2F90A4414F348CDBE3A862A55B787712; // 0x3a8
	ETimelineDirection AnimationTimeline__Direction_2F90A4414F348CDBE3A862A55B787712; // 0x3ac
	UTimelineComponent* AnimationTimeline; // 0x3b0
	UMaterialInstanceDynamic* ScannerPPMat; // 0x3b8
	float ScanTravelTime; // 0x3c0
};

struct UYObjectInteractionComponent : UActorComponent {
	EYInteractionType m_interactionType; // 0xb0
	bool m_showInteractionWidget; // 0xb1
	bool m_disableAfterInteractionCompleted; // 0xb2
	bool m_displayItemCountOnInteractionText; // 0xb3
	bool m_usePerfectInteraction; // 0xb4
	float m_maxInteractionDistance; // 0xb8
	bool m_blockMovementWhileInteracting; // 0xbc
	bool m_requiresPerfectLineOfSight; // 0xbd
	bool m_currentSelectedRelevantInteraction; // 0xbe
	TArray<FYInteractionReleaseEntry> m_perfectInteractionReleaseEntries; // 0xc0
	FMulticastInlineDelegate OnPlayerInteractionCompleted; // 0xd0
	FMulticastInlineDelegate OnPlayerInteractionStarted; // 0xe0
	FMulticastInlineDelegate OnPlayerInteractionStopped; // 0xf0
	FMulticastInlineDelegate OnEvaluateInteractionTimeDelegate; // 0x100
	FMulticastInlineDelegate OnObjectInteractionMessageUpdated; // 0x110
	FMulticastInlineDelegate OnObjectInteractionDetected; // 0x120
	bool m_notifyAllClients; // 0x130
	bool m_currentlyBeingInteracted; // 0x131
	FText m_interactionMessage; // 0x138
	FText m_interactionBlockedMessage; // 0x150
	TArray<UYPlayerInteractionComponent*> m_currentInteractors; // 0x168
	FMulticastInlineDelegate BP_OnCurrentlyBeingInteractedWithChanged; // 0x178
	float m_interactionDuration; // 0x188
	TArray<UPrimitiveComponent*> m_visualizationComponentInteractions; // 0x190
	bool m_includeChildsInInteractionVisualization; // 0x1a0
	bool m_isActive; // 0x1a1
};

struct UYCharacterVehicleComponent : UActorComponent {
	bool m_boostStateReplicated; // 0xb0
	bool m_boostStateActiveLocal; // 0xb1
	FMulticastInlineDelegate OnDataTableRowHandleChanged; // 0xb8
	FMulticastInlineDelegate OnVehiclePossesionChangedDelegate; // 0xc8
	FMulticastInlineDelegate OnBoostStateChanged; // 0xd8
	AYVehicle* m_vehicle; // 0xe8
};

struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0xd8
};

struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct ANiagaraPreviewGrid : AActor {
	UNiagaraSystem* System; // 0x240
	ENiagaraPreviewGridResetMode ResetMode; // 0x248
	UNiagaraPreviewAxis* PreviewAxisX; // 0x250
	UNiagaraPreviewAxis* PreviewAxisY; // 0x258
	ANiagaraPreviewBase* PreviewClass; // 0x260
	float SpacingX; // 0x268
	float SpacingY; // 0x26c
	int32_t NumX; // 0x270
	int32_t NumY; // 0x274
	TArray<UChildActorComponent*> PreviewComponents; // 0x278
};

struct UYGameShardComponent : UActorComponent {
	TArray<FYShardData> m_shardData; // 0xb0
};

struct UYSpawnManagerComponent : UActorComponent {
	TArray<UYPersistentData*> m_infosAboutDespawnedActors; // 0xb0
	TArray<UYPersistentData*> m_infosAboutSpawnedActors; // 0xc0
	float m_defaultSpawnRadius; // 0xd0
	float m_defaultDespawnRadiusBonus; // 0xd4
};

struct UYWidget_ItemComponentBase : UYWidget {
	UYWidget_ItemContainer* m_parentItemContainer; // 0x2c0
	TArray<EYItemType> m_exclusiveTypesToShowWidgetFor; // 0x2c8
	TArray<EYItemType> m_itemTypesToHideWidgetFor; // 0x2d8
	TArray<EYDeviceClass> m_exlcudingDeviceClasses; // 0x2e8
	bool m_showOnlyForItemsWithItemBackendIdSet; // 0x2f8
	bool m_useOutsideOfItemContainer; // 0x2f9
	bool m_removeFromHierarchy; // 0x2fa
};

struct UYAIAggroComponent : UActorComponent {
	AActor* m_aggroTarget; // 0xb0
	EYAISenseType m_highestSenseType; // 0xb8
	FVector m_lastPerceivedSenseLocation; // 0xbc
	TMap<AActor*, FYAITargetInfo> m_targets; // 0xc8
	FMulticastInlineDelegate OnActorRemovedFromPerception; // 0x170
	FMulticastInlineDelegate OnActorAggroChangeRequested; // 0x180
};

struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UYPlayerDropPodIntroComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	AYPlayerController_Match* YPlayerController; // 0xb8
	AIntroActor_Base_BP_C* IntroActor; // 0xc0
	bool HasStartedPlayingIntro; // 0xc8
	AActor* IntroActorClass; // 0xd0
};

struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	FLinearColor ClearColor; // 0xe8
	TextureAddress AddressX; // 0xf8
	TextureAddress AddressY; // 0xf9
	char bForceLinearGamma : 1; // 0xfa
	char bHDR : 1; // 0xfa
	char bGPUSharedFlag : 1; // 0xfa
	ETextureRenderTargetFormat RenderTargetFormat; // 0xfb
	char bAutoGenerateMips : 1; // 0xfc
	TextureFilter MipsSamplerFilter; // 0xfd
	TextureAddress MipsAddressU; // 0xfe
	TextureAddress MipsAddressV; // 0xff
	EPixelFormat OverrideFormat; // 0x100
};

struct ARuntimeVirtualTextureVolume : AActor {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x240
};

struct UYAuthenticationManager : UObject {
	UYLegalAgreementsManager* m_legalAgreementsManager; // 0x28
};

struct AReplicationGraphDebugActor : AActor {
	UReplicationGraph* ReplicationGraph; // 0x240
	UNetReplicationGraphConnection* ConnectionManager; // 0x248
};

struct UYWidget_ItemComponentStatsEntry : UYWidget_ItemComponentBase {
	FYInventoryItem m_itemToCompare; // 0x300
	FYInventoryItem m_relatedInventoryItem; // 0x398
	EYItemStatsType m_statsType; // 0x430
};

struct UYBigDrillMapMarkerData : UYMapMarkerData {
	float m_stateDuration; // 0x148
	AYPlayerState* m_owningPlayer; // 0x150
	bool m_isOnlyLocationMarker; // 0x158
};

struct UMovieSceneSkeletalAnimationSection : UMovieSceneSection {
	FMovieSceneSkeletalAnimationParams Params; // 0xe8
	UAnimSequence* AnimSequence; // 0x1c0
	UAnimSequenceBase* Animation; // 0x1c8
	float StartOffset; // 0x1d0
	float EndOffset; // 0x1d4
	float PlayRate; // 0x1d8
	char bReverse : 1; // 0x1dc
	FName SlotName; // 0x1e0
	FVector StartLocationOffset; // 0x1e8
	FRotator StartRotationOffset; // 0x1f4
	bool bMatchWithPrevious; // 0x200
	FName MatchedBoneName; // 0x204
	FVector MatchedLocationOffset; // 0x20c
	FRotator MatchedRotationOffset; // 0x218
	bool bMatchTranslation; // 0x224
	bool bMatchIncludeZHeight; // 0x225
	bool bMatchRotationYaw; // 0x226
	bool bMatchRotationPitch; // 0x227
	bool bMatchRotationRoll; // 0x228
};

struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct UBTDecorator_SetAIState_C : UBTDecorator_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa0
	EYAIState NewAIState; // 0xa8
	FBlackboardKeySelector AIStateKey; // 0xb0
};

struct UYWidgetProvider_WeaponShops : UYWidgetProvider {
	FName m_shopId; // 0x40
	FMulticastInlineDelegate OnItemsReceived; // 0x48
	FMulticastInlineDelegate OnItemsUpdatedResponseReceived; // 0x58
	FMulticastInlineDelegate OnCurrenciesUpdatedResponseReceived; // 0x68
	FMulticastInlineDelegate OnItemPurchasedResponseReceived; // 0x78
	FMulticastInlineDelegate OnItemClaimedReceived; // 0x88
	FMulticastInlineDelegate OnItemCraftingStartedResponseReceived; // 0x98
	FMulticastInlineDelegate OnItemCraftingStoppedResponseReceived; // 0xa8
	FMulticastInlineDelegate OnTimerUpdated; // 0xb8
	FMulticastInlineDelegate OnItemCraftingStartedFail; // 0xc8
	FMulticastInlineDelegate OnCraftedItemClaimFail; // 0xd8
	FMulticastInlineDelegate OnItemPurchasingFail; // 0xe8
	TArray<FYShopBlueprintData> m_blueprintsUiData; // 0xf8
};

struct UWBP_BlurBacker_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UImage* Gfx_BlackFill; // 0x2d0
	UImage* Gfx_DarkenFillColor; // 0x2d8
};

struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UYGPATestComponent : UActorComponent {
	UYGameplayAttributesComponent* m_gameplayAttributesComponent; // 0xb0
	float m_maxHealth; // 0xb8
};

struct UYInitializationManager : UObject {
	TMap<int32_t, FYInitializationRequestEntry> m_requests; // 0x28
};

struct UYAIStaggerComponent : UActorComponent {
	TMap<FName, FYAIStaggerDefinition> m_staggers; // 0xb0
	TArray<FYAIStaggerTriggerHealthPercentage> m_percentageTriggers; // 0x100
	TArray<FYAIStaggerTriggerWeakspotHealth> m_weakspotTriggers; // 0x110
	UAnimMontage* m_forcedStaggerAnimation; // 0x128
	bool m_isStaggering; // 0x130
	FMulticastInlineDelegate BP_OnStaggerTriggered; // 0x138
	AYAICharacter* m_character; // 0x150
	UYAIAnimationComponent* m_animationComponent; // 0x158
	UAnimInstance* m_animInstance; // 0x160
};

struct ALevelSequenceMediaController : AActor {
	ALevelSequenceActor* Sequence; // 0x248
	UMediaComponent* MediaComponent; // 0x250
	float ServerStartTimeSeconds; // 0x258
};

struct UCustomMeshGenerator : UWaterBodyGenerator {
	UStaticMeshComponent* MeshComp; // 0x28
};

struct UYMatchDifficultyComponent : UActorComponent {
	int32_t m_currentDifficultyLevel; // 0xb0
};

struct UWaterSplineMetadata : USplineMetadata {
	FInterpCurveFloat Depth; // 0x28
	FInterpCurveFloat WaterVelocityScalar; // 0x40
	FInterpCurveFloat RiverWidth; // 0x58
	FInterpCurveFloat AudioIntensity; // 0x70
	FInterpCurveVector WaterVelocity; // 0x88
};

struct UYWidget_AreaMapMarker : UYWidget_MapMarker {
	UImage* m_icon; // 0x2e0
	UImage* m_area; // 0x2e8
	UYAreaMapMarkerData* m_areaMarkerInfo; // 0x2f0
};

struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x5b0
	char bIsFrozenRendering : 1; // 0x5b0
	char bIsOrbitingSelectedActor : 1; // 0x5b0
	char bOrbitPivotUseCenter : 1; // 0x5b0
	char bEnableBufferVisualization : 1; // 0x5b0
	char bEnableBufferVisualizationFullMode : 1; // 0x5b0
	char bIsBufferVisualizationInputSetup : 1; // 0x5b0
	char bLastDisplayEnabled : 1; // 0x5b0
	UDrawFrustumComponent* DrawFrustum; // 0x5b8
	AActor* SelectedActor; // 0x5c0
	UPrimitiveComponent* SelectedComponent; // 0x5c8
	FHitResult SelectedHitPoint; // 0x5d0
	APlayerController* OriginalControllerRef; // 0x660
	UPlayer* OriginalPlayer; // 0x668
	float SpeedScale; // 0x670
	float InitialMaxSpeed; // 0x674
	float InitialAccel; // 0x678
	float InitialDecel; // 0x67c
};

struct UYWidget_ItemComponentImageAmmoType : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnComponentImageLoaded; // 0x300
};

struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x250
};

struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct UYGameStateCustomizationComponent : UActorComponent {
	TMap<EYCustomizationMode, FYCustomizationModeAssociation> m_customizationModeToActors; // 0xb0
	FMulticastInlineDelegate OnCustomizationModeActorChanged; // 0x100
};

struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	TArray<FVector2D> FloatData; // 0x50
};

struct UInterpFilter : UObject {
	FString Caption; // 0x28
};

struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UYInventoryDragAndDropPayload : UObject {
	FYInventoryItem m_item; // 0x28
	EYPlayerSetType m_draggedItemSlot; // 0xc0
	bool m_dropAmount; // 0xc1
	int32_t m_amountToDrop; // 0xc4
	EYItemImprovementScreenSlotType m_itemImprovementScreenSlotType; // 0xc8
	int32_t m_inventoryId; // 0xcc
	bool m_shouldCreateNewItem; // 0xd0
};

struct AYMissionActor : AYAbstractMissionActor {
	FYMissionInitializationData m_replicatedInitializationData; // 0x240
	int32_t m_stepHandle; // 0x278
	int32_t m_actorHandle; // 0x27c
	FMulticastInlineDelegate OnActorMissionStatusDelegate; // 0x280
	EYMissionResultType m_missionStatus; // 0x290
	USkeletalMeshComponent* m_skeletalMeshComponent; // 0x298
	UStaticMeshComponent* m_staticMeshComponent; // 0x2a0
};

struct UEdGraphNode : UObject {
	TArray<UEdGraphPin_Deprecated*> DeprecatedPins; // 0x38
	int32_t NodePosX; // 0x48
	int32_t NodePosY; // 0x4c
	int32_t NodeWidth; // 0x50
	int32_t NodeHeight; // 0x54
	ENodeAdvancedPins AdvancedPinDisplay; // 0x58
	ENodeEnabledState EnabledState; // 0x59
	char bDisplayAsDisabled : 1; // 0x5b
	char bUserSetEnabledState : 1; // 0x5b
	char bIsNodeEnabled : 1; // 0x5b
	char bHasCompilerMessage : 1; // 0x5b
	FString NodeComment; // 0x60
	int32_t ErrorType; // 0x70
	FString ErrorMsg; // 0x78
	FGuid NodeGuid; // 0x88
};

struct UDropPod_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x2c8
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x310
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x320
	FAnimNode_Root AnimGraphNode_Root; // 0x340
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x370
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x478
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x498
	float IsCustomizationFloat; // 0x4b8
	AYPodActor* podActor; // 0x4c0
};

struct UYWeaponPlayerControllerInventoryComponent : UActorComponent {
	FMulticastInlineDelegate OnWeaponRemoved; // 0xb0
	FMulticastInlineDelegate OnWeaponAdded; // 0xc0
	FMulticastInlineDelegate OnWeaponDropped; // 0xd0
	FMulticastInlineDelegate OnWeaponEntriesUpdated; // 0xe0
	UYPlayerCharacterWeaponComponent* m_characterWeaponComponent; // 0xf0
	UYPlayerCharacterStateComponent* m_characterStateComponent; // 0xf8
	UYWeaponPlayerControllerRuntimeComponent* m_runtimeWeaponComponent; // 0x100
	UYCharacterCosmeticVisualizationComponent* m_cosmeticComponent; // 0x108
	TArray<FYStoredInventoryWeaponData> m_weaponEntries; // 0x110
	TArray<FGuid> m_perksApplied; // 0x120
	TArray<FGuid> m_attributesApplied; // 0x130
	FDataTableRowHandle m_meleeWeaponRowHandle; // 0x158
	FDataTableRowHandle m_pickAxeWeaponRowHandle; // 0x168
	FYInventoryItem m_pickAxeInventoryItem; // 0x178
};

struct UYWidget_PlayerDetail : UYWidget {
	UTextBlock* m_playerName; // 0x2c0
	UTextBlock* m_rankTextBlock; // 0x2c8
};

struct AMeleeWeaponCustomization_BP_C : AYMeleeActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x270
	FYMeleeVanityDataTableRow MeleeWeaponRow; // 0x278
	FDataTableRowHandle MeleeDTRow; // 0x678
};

struct UPlayerBotResetRotatorTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UTileView : UListView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct APaperFlipbookActor : AActor {
	UPaperFlipbookComponent* RenderComponent; // 0x240
};

struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UBackgroundBlur : UContentWidget {
	FMargin Padding; // 0x120
	EHorizontalAlignment HorizontalAlignment; // 0x130
	EVerticalAlignment VerticalAlignment; // 0x131
	bool bApplyAlphaToBlur; // 0x132
	float BlurStrength; // 0x134
	bool bOverrideAutoRadiusCalculation; // 0x138
	int32_t BlurRadius; // 0x13c
	FSlateBrush LowQualityFallbackBrush; // 0x140
};

struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct UMovieSceneSequenceTickManager : UObject {
	TArray<AActor*> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct AYGameState_Match : AYGameState_Base {
	FMulticastInlineDelegate OnLevelsOfTypeLoadedDelegate; // 0x328
	FMulticastInlineDelegate OnPlayerGameStateChanged; // 0x338
	FMulticastInlineDelegate OnPlayerTeleported; // 0x348
	FMulticastInlineDelegate OnPlayerSpawnedAt; // 0x358
	int32_t m_waitingToStartTimeout; // 0x368
	int32_t m_prematchDuration; // 0x36c
	int32_t m_matchLaunchCountdown; // 0x370
	int32_t m_matchDuration; // 0x374
	int32_t m_persistentMatchDuration; // 0x378
	int32_t m_matchFinishingDuration; // 0x37c
	EYMatchmakeGameModeType m_gameModeType; // 0x380
	int32_t m_aiCharacterCount; // 0x384
	FMulticastInlineDelegate OnMatchTimerElapsed; // 0x388
	FMulticastInlineDelegate OnMatchTimerUpdated; // 0x398
	FMulticastInlineDelegate OnDebugSetNewMatchTime; // 0x3a8
	FMulticastInlineDelegate OnMatchTimerVisibility; // 0x3b8
	FMulticastInlineDelegate OnMapInfoUpdated; // 0x3c8
	FMulticastInlineDelegate OnMatchStateUpdated; // 0x3d8
	FMulticastInlineDelegate OnPlayerJoined; // 0x3f8
	FMulticastInlineDelegate OnPlayerLeftMatch; // 0x408
	FMulticastInlineDelegate OnGamePlayerDeath; // 0x418
	FSoftObjectPath m_evacuationBonusDataTablePath; // 0x428
	FSoftObjectPath m_diedBonusDataTablePath; // 0x440
	FSoftObjectPath m_matchPlayedBonusDataTablePath; // 0x458
	FSoftObjectPath m_leadboardPlacementRewardsDataTablePath; // 0x470
	FDataTableRowHandle m_gameModeUIHandle; // 0x488
	UYLatencyAnalyticsComponent* m_latencyAnalyticsComponent; // 0x498
	UYActivitiesManager* m_activitiesManager; // 0x4a0
	UYActivityLocationsManager* m_activityLocationsManager; // 0x4a8
	EYMatchState m_matchState; // 0x4bc
	int32_t m_matchTimer; // 0x4c0
	bool m_matchTimerVisibility; // 0x4c4
	UYItemActorSpawner* m_itemActorSpawnerComponent; // 0x4c8
	UYRewardsRollManagerComponent* m_rewardsRollManager; // 0x4d0
	UYFPSSummaryAnalyticsComponent* m_fpsSummaryAnalyticsComponent; // 0x4d8
	UYKeybindingAnalyticsComponent* m_keybindingAnalyticsComponent; // 0x4e0
	UYMatchChatManagerComponent* m_matchChatManagerComponent; // 0x4e8
	FString m_mapInfoRowId; // 0x4f8
};

struct USteamAudioSettings : UObject {
	FSoftObjectPath OutputSubmix; // 0x28
	EIplAudioEngine AudioEngine; // 0x40
	EIplRayTracerType RayTracer; // 0x41
	EIplConvolutionType ConvolutionType; // 0x42
	bool ExportBSPGeometry; // 0x43
	bool ExportLandscapeGeometry; // 0x44
	EPhononMaterial StaticMeshMaterialPreset; // 0x45
	float StaticMeshLowFreqAbsorption; // 0x48
	float StaticMeshMidFreqAbsorption; // 0x4c
	float StaticMeshHighFreqAbsorption; // 0x50
	float StaticMeshLowFreqTransmission; // 0x54
	float StaticMeshMidFreqTransmission; // 0x58
	float StaticMeshHighFreqTransmission; // 0x5c
	float StaticMeshScattering; // 0x60
	EPhononMaterial BSPMaterialPreset; // 0x64
	float BSPLowFreqAbsorption; // 0x68
	float BSPMidFreqAbsorption; // 0x6c
	float BSPHighFreqAbsorption; // 0x70
	float BSPLowFreqTransmission; // 0x74
	float BSPMidFreqTransmission; // 0x78
	float BSPHighFreqTransmission; // 0x7c
	float BSPScattering; // 0x80
	EPhononMaterial LandscapeMaterialPreset; // 0x84
	float LandscapeLowFreqAbsorption; // 0x88
	float LandscapeMidFreqAbsorption; // 0x8c
	float LandscapeHighFreqAbsorption; // 0x90
	float LandscapeLowFreqTransmission; // 0x94
	float LandscapeMidFreqTransmission; // 0x98
	float LandscapeHighFreqTransmission; // 0x9c
	float LandscapeScattering; // 0xa0
	int32_t OcclusionSampleCount; // 0xa4
	EIplSimulationType ListenerReverbSimulationType; // 0xa8
	float ListenerReverbContribution; // 0xac
	int32_t IndirectImpulseResponseOrder; // 0xb0
	float IndirectImpulseResponseDuration; // 0xb4
	EIplSpatializationMethod IndirectSpatializationMethod; // 0xb8
	float IrradianceMinDistance; // 0xbc
	uint32_t MaxSources; // 0xc0
	EQualitySettings RealtimeQualityPreset; // 0xc4
	int32_t RealTimeCPUCoresPercentage; // 0xc8
	int32_t RealtimeBounces; // 0xcc
	int32_t RealtimeRays; // 0xd0
	int32_t RealtimeSecondaryRays; // 0xd4
	EQualitySettings BakedQualityPreset; // 0xd8
	int32_t BakingCPUCoresPercentage; // 0xdc
	int32_t BakedBounces; // 0xe0
	int32_t BakedRays; // 0xe4
	int32_t BakedSecondaryRays; // 0xe8
	int32_t MaxComputeUnits; // 0xec
	float FractionComputeUnitsForIRUpdate; // 0xf0
	int32_t TANIndirectImpulseResponseOrder; // 0xf4
	float TANIndirectImpulseResponseDuration; // 0xf8
	uint32_t TANMaxSources; // 0xfc
	int32_t RadeonRaysBakingBatchSize; // 0x100
};

struct UWidget : UVisual {
	UPanelSlot* Slot; // 0x28
	FDelegate bIsEnabledDelegate; // 0x30
	FText ToolTipText; // 0x40
	FDelegate ToolTipTextDelegate; // 0x58
	UWidget* ToolTipWidget; // 0x68
	FDelegate ToolTipWidgetDelegate; // 0x70
	FDelegate VisibilityDelegate; // 0x80
	FWidgetTransform RenderTransform; // 0x90
	FVector2D RenderTransformPivot; // 0xac
	char bIsVariable : 1; // 0xb4
	char bCreatedByConstructionScript : 1; // 0xb4
	char bIsEnabled : 1; // 0xb4
	char bOverride_Cursor : 1; // 0xb4
	USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8
	char bIsVolatile : 1; // 0xc0
	EMouseCursor Cursor; // 0xc1
	EWidgetClipping Clipping; // 0xc2
	ESlateVisibility Visibility; // 0xc3
	float RenderOpacity; // 0xc4
	UWidgetNavigation* Navigation; // 0xc8
	EFlowDirectionPreference FlowDirectionPreference; // 0xd0
	TArray<UPropertyBinding*> NativeBindings; // 0xf8
};

struct UYAssetVariationComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnRowLoaded; // 0xb0
	TArray<UObject*> m_loadedAssets; // 0xc0
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct UYMatchLevelActorContainer : UYLevelActorContainer {
	FMulticastInlineDelegate OnMatchCameraUpdated; // 0x28
	AActor* m_matchLobbyCameraActor; // 0x38
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UNiagaraParameterCollectionInstance : UObject {
	UNiagaraParameterCollection* Collection; // 0x28
	TArray<FNiagaraVariable> OverridenParameters; // 0x30
	FNiagaraParameterStore ParameterStorage; // 0x40
};

struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UDA_Uplink : UDataAsset {
	float m_durationUpdateCommon; // 0x30
	float m_durationUpdateUnCommon; // 0x34
	float m_durationUpdateRare; // 0x38
	float m_durationUpdateEpic; // 0x3c
	USkeletalMesh* m_uplinkSkeletalMesh; // 0x40
	USoundBase* m_soundUpdateStart; // 0x48
	USoundBase* m_soundUpdateInterupt; // 0x50
	USoundBase* m_soundUpdateCompleted; // 0x58
	USoundBase* m_soundUpdateWhile; // 0x60
	USoundBase* m_soundPowerGain; // 0x68
	USoundBase* m_soundPowerLoss; // 0x70
	float m_durationInteractConsole; // 0x78
	UStaticMesh* m_consoleMesh; // 0x80
	USoundBase* m_soundConsoleStartUpdate; // 0x88
	USoundBase* m_soundConsoleInteruptUpdate; // 0x90
	USoundBase* m_soundConsoleCompleteUpdate; // 0x98
	USoundBase* m_soundConsolePowerGain; // 0xa0
	USoundBase* m_soundConsolePowerLoss; // 0xa8
	float m_durationFuseBoxInteract; // 0xb0
	UStaticMesh* m_FuseBoxMesh; // 0xb8
	USoundBase* m_SoundEnable; // 0xc0
	USoundBase* m_SoundDisable; // 0xc8
};

struct AYAICharacter : AYCharacter {
	AYAIController* m_aiController; // 0x540
	FYAIAudio m_audioAIData; // 0x560
	FDataTableRowHandle m_audioTagRowHandle; // 0x6b8
	FGameplayTagContainer m_gameplayTags; // 0x6c8
	UYAIDataComponent* m_aiDataComponent; // 0x6e8
	UYAIAnimationComponent* m_animationComponent; // 0x6f0
	UYAIStaggerComponent* m_staggerComponent; // 0x6f8
	UYArmorComponent* m_armorComponent; // 0x700
	FText m_characterNameOverride; // 0x708
	FVector m_rangedAttackOriginLocationOffset; // 0x720
	bool m_isPlacedInWorld; // 0x72c
	FDataTableRowHandle m_aiTuningDataHandle; // 0x730
	FMulticastInlineDelegate BPOnAttackNotifyDelegate; // 0x740
	FMulticastInlineDelegate BP_OnRangeAttack; // 0x750
	FMulticastInlineDelegate OnMeleeAttack; // 0x760
	FMulticastInlineDelegate BP_OnReceivedGameplayTags; // 0x770
	FVector m_overrideTargetLocation; // 0x780
	AYProjectile* m_attachedProjectile; // 0x790
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct AStationLocationActor_BP_C : AYStationLocationActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	bool IsSpeaking; // 0x290
	USoundBase* VO_Line; // 0x298
};

struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x240
	char bEnabled : 1; // 0x248
};

struct AAICharacter_Base_BP_C : AYAICharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x7a0
	USphereComponent* WeaponCollision; // 0x7a8
	UAIHitReactionComponent_BP_C* AIHitReactionComponent_BP; // 0x7b0
	UYFoliageAudioComponent* YFoliageAudio; // 0x7b8
	UAI_MeleeAttackComponent_BP_C* MeleeAttackComponent_BP; // 0x7c0
	UYFootstepComponent* YFootstep; // 0x7c8
	UYPlayerRenderTargetVfxMovementComponent_BP_C* YPlayerRenderTargetVfxMovementComponent_BP; // 0x7d0
	UAIAttackComponent_BP_C* AIAttackComponent_BP; // 0x7d8
	UParticleSystemComponent* buffEffect; // 0x7e0
	UAudioComponent* AudioStateComponent; // 0x7e8
	float Timeline_Desaturation_0_0_1_0_2F5C408C423463E2A9D8D797D39FEDCA; // 0x7f0
	ETimelineDirection Timeline_Desaturation__Direction_2F5C408C423463E2A9D8D797D39FEDCA; // 0x7f4
	UTimelineComponent* Timeline_Desaturation; // 0x7f8
	UParticleSystemComponent* DamageOverTime_PS; // 0x800
	float LastTimeTriggeredBuffAllies; // 0x808
	float LastTimeTriggeredSummonAllies; // 0x80c
	float SummonStartTimestamp; // 0x810
	bool ShowInstigatorBuffEffect; // 0x814
	int32_t SuccessfulSummonCount; // 0x818
	bool ShowBuffEffect; // 0x81c
	bool UseMasterBehavior; // 0x81d
	UBehaviorTree* CombatBehavior; // 0x820
	AActor* EvaluatedTarget; // 0x828
	TMap<AActor*, FYAITargetInfo> PerceivedTargets; // 0x830
	UPrimitiveComponent* NewVar_1; // 0x880
	UPrimitiveComponent* NewVar_2; // 0x888
	int32_t OutlineColorValue; // 0x890
	char DummyVariable- Delete Me; // 0x894
	UMaterialInstance* UpdatedMaterial; // 0x898
	TArray<UMaterialInstance*> TempMaterialArray_Updated; // 0x8a0
	UMaterialInstance* PowerLevel_2; // 0x8b0
	TArray<UMaterialInstance*> TempMaterialArray_P1; // 0x8b8
	UMaterialInstance* PowerLevel_3; // 0x8c8
	TArray<UMaterialInstance*> TempMaterialArray_P2; // 0x8d0
	UMaterialInstance* Hunt; // 0x8e0
	TArray<UMaterialInstance*> TempMaterialArray_Hunt; // 0x8e8
	UMaterialInstance* Alpha; // 0x8f8
	TArray<UMaterialInstance*> TempMaterialArray_Alpha; // 0x900
	UMaterialInstance* Weak; // 0x910
	TArray<UMaterialInstance*> TempMaterialArray_Weak; // 0x918
	UMaterialInstance* Season; // 0x928
	TArray<UMaterialInstance*> TempMaterialArray_Season; // 0x930
	EYAISpawnContexts IdentifiedContext; // 0x940
	UParticleSystem* UpdatedFX; // 0x948
	UParticleSystem* Fx_Stormy; // 0x950
	UParticleSystem* Fx_Thunderous; // 0x958
	UParticleSystem* Fx_Hunt; // 0x960
	UParticleSystem* Fx_Weak; // 0x968
	UParticleSystem* Fx_Alpha; // 0x970
	UParticleSystem* Fx_Season; // 0x978
	UParticleSystemComponent* Ref_UpdatedFX_PSC; // 0x980
	FRotator DefaultRotationRate; // 0x988
	FVector From Direction; // 0x994
	FName Bone Name Hit; // 0x9a0
	FName DamageOrigin; // 0x9a8
	TArray<FName> ExcludedDamageOriginArray; // 0x9b0
	float VelocityMultiplier; // 0x9c0
	TArray<FName> ExplosivesArray; // 0x9c8
	float PhysImpulseMultiplier; // 0x9d8
	FVector PhysicsImpulse; // 0x9dc
};

struct UYGrantsManager : UObject {
	float m_claimingDelay; // 0x28
	int32_t m_claimsPerRequest; // 0x2c
};

struct UMaterialExpressionVolumetricAdvancedMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput PhaseG; // 0x40
	FExpressionInput PhaseG2; // 0x54
	FExpressionInput PhaseBlend; // 0x68
	FExpressionInput MultiScatteringContribution; // 0x7c
	FExpressionInput MultiScatteringOcclusion; // 0x90
	FExpressionInput MultiScatteringEccentricity; // 0xa4
	FExpressionInput ConservativeDensity; // 0xb8
	float ConstPhaseG; // 0xcc
	float ConstPhaseG2; // 0xd0
	float ConstPhaseBlend; // 0xd4
	bool PerSamplePhaseEvaluation; // 0xd8
	uint32_t MultiScatteringApproximationOctaveCount; // 0xdc
	float ConstMultiScatteringContribution; // 0xe0
	float ConstMultiScatteringOcclusion; // 0xe4
	float ConstMultiScatteringEccentricity; // 0xe8
	bool bGroundContribution; // 0xec
	bool bGrayScaleMaterial; // 0xed
	bool bRayMarchVolumeShadow; // 0xee
};

struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct UYHeatMapManager : UObject {
	TArray<FYRequestNewHeatMapData> m_runtimeActiveData; // 0x28
};

struct UYWidget_ItemComponentUpgradePrice : UYWidget_ItemComponentBase {
	TMap<FString, UYWidget_ItemContainer*> m_materialsMap; // 0x300
};

struct UWBP_SettingsContentBase_C : UYWidgetView {
	UWBP_Settings_Provider_C* SettingsProvider; // 0x338
};

struct UParticleModuleTypeDataBeam2 : UParticleModuleTypeDataBase {
	EBeam2Method BeamMethod; // 0x30
	int32_t TextureTile; // 0x34
	float TextureTileDistance; // 0x38
	int32_t Sheets; // 0x3c
	int32_t MaxBeamCount; // 0x40
	float Speed; // 0x44
	int32_t InterpolationPoints; // 0x48
	char bAlwaysOn : 1; // 0x4c
	int32_t UpVectorStepSize; // 0x50
	FName BranchParentName; // 0x54
	FRawDistributionFloat Distance; // 0x60
	EBeamTaperMethod TaperMethod; // 0x90
	FRawDistributionFloat TaperFactor; // 0x98
	FRawDistributionFloat TaperScale; // 0xc8
	char RenderGeometry : 1; // 0xf8
	char RenderDirectLine : 1; // 0xf8
	char RenderLines : 1; // 0xf8
	char RenderTessellation : 1; // 0xf8
};

struct UOnboarding_06_TalkToBadumCraftingStation_C : UMS_Line_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1b0
	FDataTableRowHandle badumSceneRowHandle; // 0x1b8
	FName badumId; // 0x1c8
	FName SceneToInteract; // 0x1d0
	FDataTableRowHandle craftingStationSceneRowHandle; // 0x1d8
	FDataTableRowHandle craftingStationNpcRowHandle; // 0x1e8
	FName craftingStationId; // 0x1f8
};

struct UWBP_ProgressBar_C : UWBP_ProgressBarBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x6d0
	UWidgetAnimation* Clear_Anim; // 0x6d8
	UWidgetAnimation* Fail_Anim; // 0x6e0
	UWidgetAnimation* Success_Anim; // 0x6e8
	UImage* Gfx_ActionHighlight; // 0x6f0
};

struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UGizmoAxisScaleParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58
	float ScaleMultiplier; // 0x68
	float Parameter; // 0x6c
	FGizmoFloatParameterChange LastChange; // 0x70
	FVector CurScaleAxis; // 0x78
	FVector CurScaleOrigin; // 0x84
	FTransform InitialTransform; // 0x90
};

struct UAIAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct UYWidget_Interaction : UYWidget {
	UImage* m_progressBarXHair; // 0x2c0
};

struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct UWBP_RetentionBonus_C : UYWidgetView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UWidgetAnimation* DummyPlayAudio_Anim; // 0x340
	UWidgetAnimation* ScreenIn_Anim; // 0x348
	UImage* Gfx_BackerHeaderFull; // 0x350
	UImage* Gfx_Bg; // 0x358
	UImage* Gfx_Bg_GradientFade; // 0x360
	UImage* Gfx_Deco; // 0x368
	UImage* Gfx_GlowBacker; // 0x370
	UImage* Gfx_Gradient; // 0x378
	UImage* Image; // 0x380
	UImage* Image_2; // 0x388
	UImage* Image_3; // 0x390
	UImage* Image_85; // 0x398
	UImage* Image_238; // 0x3a0
	UTextBlock* Txt_DaysLoggedIn; // 0x3a8
	UTextBlock* Txt_Description; // 0x3b0
	UTextBlock* Txt_Header; // 0x3b8
	UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B; // 0x3c0
	UWBP_Common_Btn_C* WBP_Common_Btn; // 0x3c8
	UWBP_Footer_C_Panel_C* WBP_Footer_C_Panel; // 0x3d0
	UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x3d8
	UWBP_ProgressBar_C* WBP_ProgressBar_2; // 0x3e0
	UWBP_RetentionBonusItem_C* WBP_Retention_Day1; // 0x3e8
	UWBP_RetentionBonusItem_C* WBP_Retention_Day2; // 0x3f0
	UWBP_RetentionBonusItem_C* WBP_Retention_Day3; // 0x3f8
	UWBP_RetentionBonusItem_C* WBP_Retention_Day4; // 0x400
	UWBP_RetentionBonusItem_C* WBP_Retention_Day5; // 0x408
	UWBP_RetentionBonusItem_C* WBP_Retention_Day6; // 0x410
	UWBP_RetentionBonusItem_C* WBP_Retention_Day7; // 0x418
	FMulticastInlineDelegate OnDismissed; // 0x420
	bool IsAnyRewardClaimed; // 0x430
	FDataTableRowHandle ClaimedSoundFx; // 0x438
};

struct UControlRigObjectHolder : UObject {
	TArray<UObject*> Objects; // 0x28
};

struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38
	float Max; // 0x3c
};

struct APaperTileMapActor : AActor {
	UPaperTileMapComponent* RenderComponent; // 0x240
};

struct ULightningComponent_BP_C : UYLightningComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb8
	UDataTable* DataTable; // 0xc0
	TArray<ULightningTypeManager_BP_C*> LightningSpawners; // 0xc8
	ETraceTypeQuery TraceChannel; // 0xd8
	TSoftClassPtr<UObject> LightningBlueprintClass; // 0xe0
	AActor* ActorClassLightning; // 0x108
};

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct AYMeleeActor : AActor {
	UYDataTableRowAssociationComponent* m_rowAssociationComponent; // 0x240
	USceneComponent* m_rootComponent; // 0x248
	USceneComponent* m_sceneBase; // 0x250
	USceneComponent* m_sceneRotationComponent; // 0x258
	USkeletalMeshComponent* m_skeletalMeshComponent; // 0x260
	UYCameraInteractionComponent* m_cameraInteractionComponent; // 0x268
};

struct UYTutorialStepsPlayerComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	int32_t CurrentStep; // 0xb8
	UYWidgetProvider_Missions* WidgetProviderMissions; // 0xc0
	AOnboardingHintIndicator_C* HintMarkerGoTo; // 0xc8
	AYPlayerController_Match* PlayerController; // 0xd0
	FTimerHandle DistanceToAiCheck_TH; // 0xd8
	float FindStridersMaxRange; // 0xe0
	TArray<AOnboardingHintIndicator_C*> HintMarkerStriders; // 0xe8
	TArray<FText> TutorialStepDescription; // 0xf8
	bool TrackToolSwapping; // 0x108
	FString ToolSwapGoal; // 0x110
	TArray<UActorComponent*> MineralScanResults; // 0x120
	AOnboardingHintIndicator_C* HintMarkerMineral; // 0x130
	FTimerHandle DistanceToMineral_TH; // 0x138
	AOnboardingHintIndicator_C* HintMarkerEvac; // 0x140
	FTimerHandle DistanceToEvac_TH; // 0x148
	AAC_EvacShip_BP_C* EvacShipRef; // 0x150
	TArray<FText> TutorialStepTitles; // 0x158
	float DelayBeforeMineralMarker; // 0x168
	TArray<FVector> EvacMarkerLocations; // 0x170
	int32_t EvacMarkerStep; // 0x180
	FDataTableRowHandle VOTutorial1; // 0x188
	FDataTableRowHandle VOTutorial2; // 0x198
	FMulticastInlineDelegate ToolButtonHighlightUpdate; // 0x1a8
};

struct UWBP_SingleRowScroll_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* WidgetIn_Anim; // 0x2c8
	UNamedSlot* Content_Prefix; // 0x2d0
	UNamedSlot* Content_Primary; // 0x2d8
	UNamedSlot* Content_Secondary; // 0x2e0
	UScrollBox* ScrollBox_1; // 0x2e8
	UWBP_GenericContent_Panel_C* WBP_FactionItems_SingleRow; // 0x2f0
	UWBP_Footer_B_Panel_C* WBP_Footer_B_Panel; // 0x2f8
	FText HeadlineOverride; // 0x300
};

struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct AYConditionLocationActor : AYActorWithMapCheck {
	FDataTableRowHandle m_rowHandle; // 0x240
};

struct UUI_MasterBackButton_WBP_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UYButton* Button_Back; // 0x2c8
	UYTextBlock* buttonPromptYTextBlock; // 0x2d0
	FText DefaultBackText_ToStation; // 0x2d8
	FText DefaultBackText_Generic; // 0x2f0
	FText DefaultBackText_ToQuickMenu; // 0x308
};

struct UModalDialogScrapItem_WBP_C : UYWidget_ModalDialogScrapItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* AnimateOut; // 0x348
	UWidgetAnimation* animateIn; // 0x350
	UCanvasPanel* CanvasPanel_3; // 0x358
	UCommonBackground_WBP_C* CommonBackround_WBP; // 0x360
	USpacer* Spacer_1; // 0x368
	USpacer* Spacer_2; // 0x370
};

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct UWBP_HeaderSlim_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* WidgetIn_Anim; // 0x2c8
	UImage* Gfx_Background; // 0x2d0
	UImage* Gfx_Background_Gradient; // 0x2d8
	UImage* Gfx_SlantMain; // 0x2e0
	UImage* Gfx_SlantSecondary; // 0x2e8
};

struct UYChatFilterDataObject : UObject {
	TArray<FYFilterWordEntry> m_cachedWords; // 0x28
	TArray<FYFilterWordEntry> m_regexWords; // 0x38
};

struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28
};

struct UYCharacterLandingComponent : UActorComponent {
	float m_moveSpeedModifier; // 0xb0
	UCurveVector* m_currentActviveMoveAndLookSpeedCurve; // 0xc8
	float m_timestampCurveSet; // 0xd0
	FMulticastInlineDelegate BP_OnLanding; // 0xd8
};

struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90
};

struct AControlPointMeshActor : AActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x240
};

struct UPlayerBotDoPerformanceCaptureTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
};

struct UYWheelInputComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnWheelOpenRequest; // 0xb0
	FMulticastInlineDelegate BP_OnWheelCloseRequest; // 0xc0
	FMulticastInlineDelegate BP_OnWheelTriggerAndCloseRequest; // 0xd0
};

struct AGameState : AGameStateBase {
	FName matchState; // 0x290
	FName PreviousMatchState; // 0x298
	int32_t elapsedTime; // 0x2a0
};

struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct UYWidget_SeasonRewardsPopup : UYWidget {
	UYWidget_ItemContainer* m_itemEntryWidget; // 0x2c0
	UYWidget_ItemContainer* m_itemNameWidget; // 0x2c8
	UYWidget_ItemContainer* m_itemImageWidget; // 0x2d0
	UYWidget_ImageBase* m_seasonImage; // 0x2d8
	UYDismissedSeasonPassPurchases* m_dismissedSeasonPassPurchases; // 0x2e0
	TArray<FString> m_unclaimedActiveSeasonGrantIds; // 0x2e8
	int32_t m_BITimeWhenShown; // 0x2f8
	FDataTableRowHandle m_audioShow; // 0x300
	FDataTableRowHandle m_audioClose; // 0x310
	TArray<UYWidget_ItemContainer*> m_itemWidgetEntries; // 0x320
	UAudioComponent* m_audioComponentCraftingInProgress; // 0x340
	FYPlayerSeasonsData m_cachedPlayerSeasonsData; // 0x348
};

struct UWBP_Subtitles_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Gfx_SubtitleBacker; // 0x268
	UTextBlock* Txt_Subtitles; // 0x270
};

struct UAsyncConnectToDatabase : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90
};

struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x440
	float Intensity; // 0x448
	float Tightness; // 0x44c
	char bPreviewVectorField : 1; // 0x450
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
};

struct USoundfieldEndpointSubmix : USoundSubmixBase {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UYSprintDashComponent : UActorComponent {
	UYPlayerCharacterStateComponent* m_ownerStateComponent; // 0xc0
};

struct UYWidget_SettingsMain : UYWidget {
	UButton* m_closeButton; // 0x2c8
	UButton* m_applyButton; // 0x2d0
	UButton* m_restoreDefaultsButton; // 0x2d8
	UYUserSettings* m_userSettings; // 0x2e0
};

struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
};

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UMovieScene3DTransformSection : UMovieSceneSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct UYParticleModuleSizeMultiplyLife : UParticleModuleSizeMultiplyLife {
	char bEmitterTime : 1; // 0x80
};

struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct AServerStatReplicator : AInfo {
	bool bUpdateStatNet; // 0x240
	bool bOverwriteClientStats; // 0x241
	uint32_t Channels; // 0x244
	uint32_t InRate; // 0x248
	uint32_t OutRate; // 0x24c
	uint32_t MaxPacketOverhead; // 0x254
	uint32_t InRateClientMax; // 0x258
	uint32_t InRateClientMin; // 0x25c
	uint32_t InRateClientAvg; // 0x260
	uint32_t InPacketsClientMax; // 0x264
	uint32_t InPacketsClientMin; // 0x268
	uint32_t InPacketsClientAvg; // 0x26c
	uint32_t OutRateClientMax; // 0x270
	uint32_t OutRateClientMin; // 0x274
	uint32_t OutRateClientAvg; // 0x278
	uint32_t OutPacketsClientMax; // 0x27c
	uint32_t OutPacketsClientMin; // 0x280
	uint32_t OutPacketsClientAvg; // 0x284
	uint32_t NetNumClients; // 0x288
	uint32_t InPackets; // 0x28c
	uint32_t OutPackets; // 0x290
	uint32_t InBunches; // 0x294
	uint32_t OutBunches; // 0x298
	uint32_t OutLoss; // 0x29c
	uint32_t InLoss; // 0x2a0
	uint32_t VoiceBytesSent; // 0x2a4
	uint32_t VoiceBytesRecv; // 0x2a8
	uint32_t VoicePacketsSent; // 0x2ac
	uint32_t VoicePacketsRecv; // 0x2b0
	uint32_t PercentInVoice; // 0x2b4
	uint32_t PercentOutVoice; // 0x2b8
	uint32_t NumActorChannels; // 0x2bc
	uint32_t NumConsideredActors; // 0x2c0
	uint32_t PrioritizedActors; // 0x2c4
	uint32_t NumRelevantActors; // 0x2c8
	uint32_t NumRelevantDeletedActors; // 0x2cc
	uint32_t NumReplicatedActorAttempts; // 0x2d0
	uint32_t NumReplicatedActors; // 0x2d4
	uint32_t NumActors; // 0x2d8
	uint32_t NumNetActors; // 0x2dc
	uint32_t NumDormantActors; // 0x2e0
	uint32_t NumInitiallyDormantActors; // 0x2e4
	uint32_t NumNetGUIDsAckd; // 0x2e8
	uint32_t NumNetGUIDsPending; // 0x2ec
	uint32_t NumNetGUIDsUnAckd; // 0x2f0
	uint32_t ObjPathBytes; // 0x2f4
	uint32_t NetGUIDOutRate; // 0x2f8
	uint32_t NetGUIDInRate; // 0x2fc
	uint32_t NetSaturated; // 0x300
};

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x40
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UBTService_Bot_AquireRandomStationTarget_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	FName InteractTarget; // 0xa0
	TArray<AActor*> StationActors; // 0xa8
};

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
};

struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x318
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UPlayFabInsightsAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xe8
	UPlayFabJsonObject* RequestJsonObj; // 0xf0
	UPlayFabJsonObject* ResponseJsonObj; // 0xf8
};

struct AYCharacterCustomizationExplicitCustomizationActor : AYCharacterCustomizationActor {
	FString m_cameraSuffix; // 0x5a0
	FString m_previewCameraSuffix; // 0x5b0
	FYCustomizationExplicitActorInitializationData m_initializationData; // 0x5c0
	bool m_registerCustomizationModeAssociation; // 0x701
};

struct AYVanityCustomizationActor : AActor {
	UDataTable* m_CameraDataTable; // 0x240
	UStaticMeshComponent* m_meshComponent; // 0x248
	UStaticMeshComponent* m_baseMeshComponent; // 0x250
	UYCustomizationCameraComponent* m_customizationCameraComponent; // 0x258
	AYBannerActor* m_bannerActor; // 0x260
	AYSprayActor* m_sprayActor; // 0x268
	AYVehicle* m_vehicleActor; // 0x270
	AYPodActor* m_droppodActor; // 0x278
	AYMeleeActor* m_meleeActor; // 0x280
	FYActiveVanityCustomizationInitializatonData m_initializationData; // 0x288
	TMap<EYVanityType, FDataTableRowHandle> m_cameraRowHandles; // 0x390
};

struct UFlinchesComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
};

struct AYVehicle : ACharacter {
	FYRuntimeVehicleData m_runtimeState; // 0x4e0
	FYRuntimeVehicleData m_runtimeStateAcknowledged; // 0x4f8
	float m_activeRotationDelta; // 0x510
	FMulticastInlineDelegate OnVehicleInteracted; // 0x518
	FMulticastInlineDelegate m_onVehicleStateChanged; // 0x528
	FMulticastInlineDelegate m_onHardLanding; // 0x538
	UYObjectInteractionComponent* m_interactionComponent; // 0x548
	UYVehicleMovementComponent* m_vehicleMovementComponent; // 0x550
	UYDamageComponent* m_damageComponent; // 0x558
	UYHealthComponent* m_healthComponent; // 0x560
	UYMapMarkerComponent* m_mapmarkerComponent; // 0x568
	UAudioComponent* m_mainAudioComponent; // 0x570
	UYInventoryAssociationComponent* m_inventoryAssociationComponent; // 0x578
	FMulticastInlineDelegate OnRuntimeDataChangedDelegate; // 0x580
	float m_angularVelocity; // 0x590
	float m_speedCurrentTick; // 0x594
	bool m_isCosmeticState; // 0x598
	FRotator m_cachedVehicleHeightAlignmentData; // 0x5a0
};

struct UMaterialInstance : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x90
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x98
	UMaterialInterface* Parent; // 0xd8
	char bHasStaticPermutationResource : 1; // 0xe0
	char bOverrideSubsurfaceProfile : 1; // 0xe0
	TArray<FScalarParameterValue> ScalarParameterValues; // 0xe8
	TArray<FVectorParameterValue> VectorParameterValues; // 0xf8
	TArray<FTextureParameterValue> TextureParameterValues; // 0x108
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x118
	TArray<FFontParameterValue> FontParameterValues; // 0x128
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x138
	FStaticParameterSet StaticParameters; // 0x150
	FMaterialCachedParameters CachedLayerParameters; // 0x190
	TArray<UObject*> CachedReferencedTextures; // 0x330
};

struct APlayerState : AInfo {
	float Score; // 0x240
	int32_t PlayerId; // 0x244
	char Ping; // 0x248
	char bShouldUpdateReplicatedPing : 1; // 0x24a
	char bIsSpectator : 1; // 0x24a
	char bOnlySpectator : 1; // 0x24a
	char bIsABot : 1; // 0x24a
	char bIsInactive : 1; // 0x24a
	char bFromPreviousLevel : 1; // 0x24a
	int32_t StartTime; // 0x24c
	ULocalMessage* EngineMessageClass; // 0x250
	FString SavedNetworkAddress; // 0x260
	FUniqueNetIdRepl UniqueId; // 0x270
	FMulticastInlineDelegate OnFinishedCopyProperties; // 0x2a0
	FMulticastInlineDelegate OnInitializePlayerSession; // 0x2b0
	APawn* PawnPrivate; // 0x2c0
	FString PlayerNamePrivate; // 0x340
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UAIAttackComponent_BP_C : UYAIAttackComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x120
	UMeshComponent* AttachFXComponentOverride; // 0x128
	AYAICharacter* AICharOwner; // 0x130
};

struct UYControllerInventoryAbilityComponent : UActorComponent {
	FDataTableRowHandle m_emptyAbility; // 0xb0
	TArray<UYCharacterAbilityComponent*> m_runtimeAbilityComponents; // 0xc0
	FMulticastInlineDelegate OnAbilityEquipped; // 0xd0
	FMulticastInlineDelegate OnAbilityUnequipped; // 0xe0
	FMulticastInlineDelegate OnAbilityActivated; // 0xf0
	FMulticastInlineDelegate OnControllerAbilityConsumed; // 0x100
	FMulticastInlineDelegate OnSelectedConsumableChanged; // 0x110
	FMulticastInlineDelegate OnAbilityComponentsChanged; // 0x120
	FMulticastInlineDelegate OnAbilityDropped; // 0x130
	UYCharacterAbilityComponent* m_activeAbilityComponent; // 0x140
};

struct UParticleEmitter : UObject {
	FName EmitterName; // 0x28
	int32_t SubUVDataOffset; // 0x30
	EEmitterRenderMode EmitterRenderMode; // 0x34
	EParticleSignificanceLevel SignificanceLevel; // 0x35
	char bUseLegacySpawningBehavior : 1; // 0x37
	char ConvertedModules : 1; // 0x37
	char bIsSoloing : 1; // 0x37
	char bCookedOut : 1; // 0x37
	char bDisabledLODsKeepEmitterAlive : 1; // 0x37
	char bDisableWhenInsignficant : 1; // 0x38
	TArray<UParticleLODLevel*> LODLevels; // 0x40
	int32_t PeakActiveParticles; // 0x50
	int32_t InitialAllocationCount; // 0x54
	float QualityLevelSpawnRateScale; // 0x58
	uint32_t DetailModeBitmask; // 0x5c
};

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28
};

struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	FDatasmithTessellationOptions Options; // 0x28
};

struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x90
};

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct UYWidget_DropDown : UYWidget {
	UComboBoxString* m_comboBox; // 0x2c0
};

struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UPaperTerrainMaterial : UDataAsset {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x750
	float BlendRadius; // 0x754
	float BlendWeight; // 0x758
	char bEnabled : 1; // 0x75c
	char bUnbound : 1; // 0x75c
};

struct UConstructionSystemCursor : UObject {
	APrefabActor* CursorGhostActor; // 0x28
	int32_t CursorSeed; // 0x30
	UMaterialInterface* CursorMaterial; // 0x38
	UMaterialInterface* CursorInvalidMaterial; // 0x40
	TArray<UPrefabricatorConstructionSnapComponent*> SnapComponents; // 0x48
	int32_t ActiveSnapComponentIndex; // 0x58
};

struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
};

struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108
};

struct UWBP_Transition_B_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* TransitionOut_Anim; // 0x2c8
	UWidgetAnimation* TransitionIn_Anim; // 0x2d0
	UImage* Gfx_Arrow; // 0x2d8
	UImage* Gfx_Arrow_2; // 0x2e0
	UImage* Gfx_Arrow_3; // 0x2e8
	UImage* Gfx_Arrow_4; // 0x2f0
	UImage* Gfx_Arrow_5; // 0x2f8
	UImage* Gfx_BlackBg; // 0x300
	UImage* Gfx_BlackBg_3; // 0x308
	UImage* Gfx_BlackBg_4; // 0x310
	UImage* Gfx_BlackBg_5; // 0x318
	UImage* Gfx_BlackBg_6; // 0x320
	UImage* Gfx_Logo_3; // 0x328
	FMulticastInlineDelegate AnimationFinished; // 0x330
	int32_t NewVar_1; // 0x340
	float DurationBeforeTransition; // 0x344
	FDataTableRowHandle SoundFX_Transition; // 0x348
};

struct UInterpTrackMove : UInterpTrack {
	FInterpCurveVector PosTrack; // 0x70
	FInterpCurveVector EulerTrack; // 0x88
	FInterpLookupTrack LookupTrack; // 0xa0
	FName LookAtGroupName; // 0xb0
	float LinCurveTension; // 0xb8
	float AngCurveTension; // 0xbc
	char bUseQuatInterpolation : 1; // 0xc0
	char bShowArrowAtKeys : 1; // 0xc0
	char bDisableMovement : 1; // 0xc0
	char bShowTranslationOnCurveEd : 1; // 0xc0
	char bShowRotationOnCurveEd : 1; // 0xc0
	char bHide3DTrack : 1; // 0xc0
	EInterpTrackMoveRotMode RotMode; // 0xc4
};

struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UYWidget_Seasons : UYWidget {
	UYWidget_SpecificOffersOverview* m_specificOffersOverview; // 0x2c0
	float m_onLeftFortunaPassToShopMenuFadeOutDuration; // 0x2c8
	float m_onLeftFortunaPassToShopMenuFadeInDelay; // 0x2cc
	float m_onLeftFortunaPassToShopMenuFadeInDuration; // 0x2d0
	FViewTargetTransitionParams m_transitionParams; // 0x2d4
	FDataTableRowHandle m_seasonLevelOffer; // 0x2f0
	FDataTableRowHandle m_goToCurrencyOffersRowHandle; // 0x300
};

struct AAL_Location_Escape_BP_C : AAL_Generic_BP_C {
	UCameraComponent* PreviewCamera; // 0x4a8
	USceneComponent* CamScene; // 0x4b0
	UArrowComponent* Arrow1; // 0x4b8
	UStaticMeshComponent* PreviewMesh; // 0x4c0
	UStaticMeshComponent* CallRangeVisualizer_Sphere; // 0x4c8
	UStaticMeshComponent* CallRangeVisualizer_Cylinder; // 0x4d0
	UStaticMeshComponent* large_antenna; // 0x4d8
	ALevelSequenceActor* ArrivalSequenceActor; // 0x4e0
	FTransform ShipLandingLocation; // 0x4f0
	bool showRangePreview; // 0x520
	TArray<TSoftObjectPtr<AEscape_Beacon_BP_C>> BeaconActors; // 0x528
	bool showFlightPathPreview; // 0x538
	FTransform EvacCamTransform; // 0x540
	bool isTutorialEvac; // 0x570
	float MaxBeaconDistanceRadius; // 0x574
};

struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UNiagaraEffectType : UObject {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
	ENiagaraCullReaction CullReaction; // 0x2c
	UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
};

struct UYWidget_PlayerList : UYWidget {
	UYWidget_SquadContainer* m_squadContainerWidgetClass; // 0x2c0
	UVerticalBox* m_playersOrSquadsVBox; // 0x2c8
	UYWidget_PlayerDetail* m_playerDetailClass; // 0x2d0
	TMap<FString, UYWidget_PlayerDetail*> m_players; // 0x2d8
};

struct UMaterialExpressionShadowReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct URuntimeVirtualTextureComponent : USceneComponent {
	TSoftObjectPtr<AActor> BoundsAlignActor; // 0x1f8
	bool bSetBoundsButton; // 0x220
	bool bSnapBoundsToLandscape; // 0x221
	URuntimeVirtualTexture* VirtualTexture; // 0x228
	bool bEnableScalability; // 0x230
	uint32_t ScalabilityGroup; // 0x234
	bool bHidePrimitives; // 0x238
	UVirtualTextureBuilder* StreamingTexture; // 0x240
	int32_t StreamLowMips; // 0x248
	bool bBuildStreamingMipsButton; // 0x24c
	bool bEnableCompressCrunch; // 0x24d
	bool bUseStreamingLowMipsInEditor; // 0x24e
	bool bBuildDebugStreamingMips; // 0x24f
};

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
};

struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UPhysicsConstraintComponent : USceneComponent {
	AActor* ConstraintActor1; // 0x1f8
	FConstrainComponentPropName ComponentName1; // 0x200
	AActor* ConstraintActor2; // 0x208
	FConstrainComponentPropName ComponentName2; // 0x210
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x228
	FMulticastInlineDelegate OnConstraintBroken; // 0x230
	FConstraintInstance ConstraintInstance; // 0x240
};

struct UYWidget_SocialMapMarker : UYWidget_MapMarker {
	bool m_isOwnedByLocalPlayerState; // 0x2e0
};

struct AYAIController : AAIController {
	bool m_delayBehaviorSpawning; // 0x368
	FMulticastInlineDelegate BP_OnAnyAIAttackStarted; // 0x370
	FMulticastInlineDelegate OnComboWindowStartedDelegate; // 0x380
	FGameplayTagContainer m_possibleComboTags; // 0x390
	UYAITurnComponent* m_turnComponent; // 0x3b0
	AYAICharacter* m_controlledCharacter; // 0x3b8
	FName m_keyHomeLocation; // 0x3c0
	FName m_keyNameCombatTarget; // 0x3c8
	FName m_keyStabilityAnimationInfo; // 0x3d0
};

struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
};

struct AHorizonTweenSystem : AInfo {
	FMulticastInlineDelegate OnAddTweenEvent; // 0x240
	TMap<FName, UHorizonTweenEvent*> TweenEventMap; // 0x268
	TArray<UHorizonTweenEvent*> PendingKillTweenEvenList; // 0x2b8
	TArray<UHorizonTweenEvent*> PendingAddTweenEvenList; // 0x2c8
};

struct UYWidget_ItemComponentStats : UYWidget_ItemComponentBase {
	bool m_detailStatisticsEnabled; // 0x300
	UYWidget_ItemComponentStatsContainer* m_activeBaseStatsWidget; // 0x308
	UCanvasPanel* m_canvasPanelStats; // 0x310
	UCanvasPanel* m_canvasPanelDetailStats; // 0x318
	UYButton* m_simpleStatsButton; // 0x320
	UYButton* m_detailStatisticsButton; // 0x328
	EYItemStatsState m_statsState; // 0x330
};

struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0x100
	TArray<UCurveLinearColor*> GradientCurves; // 0x108
};

struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UCheckBox : UContentWidget {
	ECheckBoxState CheckedState; // 0x120
	FDelegate CheckedStateDelegate; // 0x124
	FCheckBoxStyle WidgetStyle; // 0x138
	USlateWidgetStyleAsset* Style; // 0x6b8
	USlateBrushAsset* UncheckedImage; // 0x6c0
	USlateBrushAsset* UncheckedHoveredImage; // 0x6c8
	USlateBrushAsset* UncheckedPressedImage; // 0x6d0
	USlateBrushAsset* CheckedImage; // 0x6d8
	USlateBrushAsset* CheckedHoveredImage; // 0x6e0
	USlateBrushAsset* CheckedPressedImage; // 0x6e8
	USlateBrushAsset* UndeterminedImage; // 0x6f0
	USlateBrushAsset* UndeterminedHoveredImage; // 0x6f8
	USlateBrushAsset* UndeterminedPressedImage; // 0x700
	EHorizontalAlignment HorizontalAlignment; // 0x708
	FMargin Padding; // 0x70c
	FSlateColor BorderBackgroundColor; // 0x720
	EButtonClickMethod ClickMethod; // 0x748
	EButtonTouchMethod TouchMethod; // 0x749
	EButtonPressMethod PressMethod; // 0x74a
	bool IsFocusable; // 0x74b
	FMulticastInlineDelegate OnCheckStateChanged; // 0x750
};

struct UYWidget_ActivityBar : UYWidget {
	UProgressBar* m_progressBar; // 0x2d0
};

struct AVH_Base_BP_C : AYVehicle {
	FPointerToUberGraphFrame UberGraphFrame; // 0x5c0
	UParticleSystemComponent* FX_MountThrusterBoost01_Main_PS; // 0x5c8
	UParticleSystemComponent* FX_MountThrusterBoost01_Right_PS; // 0x5d0
	UParticleSystemComponent* FX_MountThrusterBoost01_Left_PS; // 0x5d8
	UParticleSystemComponent* FX_MountWoosh01_PS; // 0x5e0
	UParticleSystemComponent* FX_MountThruster01_Main_PS; // 0x5e8
	UYActorUIComponent* YActorUI; // 0x5f0
	USphereComponent* WeakAreaCollision; // 0x5f8
	UBoxComponent* MainWeaponCollision; // 0x600
	UParticleSystemComponent* FX_MountThruster01_Right_PS; // 0x608
	UParticleSystemComponent* FX_MountThruster01_Left_PS; // 0x610
	UParticleSystemComponent* FX_MountHover01_PS; // 0x618
	UNiagaraComponent* TrailRight01; // 0x620
	UNiagaraComponent* TrailLeft01; // 0x628
	float MaxSpeed; // 0x630
	float speedCurrentTick; // 0x634
	FDataTableRowHandle ExplodeAudio; // 0x638
	FDataTableRowHandle LandingAudio; // 0x648
	float TimeSincePlayedLastImpact; // 0x658
	bool BoostActive; // 0x65c
	float minTimeBetweenHardLandings; // 0x660
	bool thrusterActive_left; // 0x664
	bool thrusterActive_leftBoost; // 0x665
	bool thrusterActive_right; // 0x666
	bool thrusterActive_rightBoost; // 0x667
	float thrusterActive_angularVelocityMinValue; // 0x668
	bool thrusterActive_showWoosh; // 0x66c
	float thrusterActive_showWooshMinValue; // 0x670
	FDataTableRowHandle AudioBoostSound; // 0x678
	bool thrusterActive_main; // 0x688
	FLinearColor ThrusterColor_Trail; // 0x68c
	FLinearColor ThrusterColor_Regular; // 0x69c
	FLinearColor ThrusterColor_Boost; // 0x6ac
};

struct UGameUserSettings : UObject {
	bool bUseVSync; // 0x28
	bool bUseDynamicResolution; // 0x29
	uint32_t ResolutionSizeX; // 0x80
	uint32_t ResolutionSizeY; // 0x84
	uint32_t LastUserConfirmedResolutionSizeX; // 0x88
	uint32_t LastUserConfirmedResolutionSizeY; // 0x8c
	int32_t WindowPosX; // 0x90
	int32_t WindowPosY; // 0x94
	int32_t FullscreenMode; // 0x98
	int32_t LastConfirmedFullscreenMode; // 0x9c
	int32_t PreferredFullscreenMode; // 0xa0
	uint32_t Version; // 0xa4
	int32_t AudioQualityLevel; // 0xa8
	int32_t LastConfirmedAudioQualityLevel; // 0xac
	float FrameRateLimit; // 0xb0
	int32_t DesiredScreenWidth; // 0xb8
	bool bUseDesiredScreenHeight; // 0xbc
	int32_t DesiredScreenHeight; // 0xc0
	int32_t LastUserConfirmedDesiredScreenWidth; // 0xc4
	int32_t LastUserConfirmedDesiredScreenHeight; // 0xc8
	float LastRecommendedScreenWidth; // 0xcc
	float LastRecommendedScreenHeight; // 0xd0
	float LastCPUBenchmarkResult; // 0xd4
	float LastGPUBenchmarkResult; // 0xd8
	TArray<float> LastCPUBenchmarkSteps; // 0xe0
	TArray<float> LastGPUBenchmarkSteps; // 0xf0
	float LastGPUBenchmarkMultiplier; // 0x100
	bool bUseHDRDisplayOutput; // 0x104
	int32_t HDRDisplayOutputNits; // 0x108
	FMulticastInlineDelegate OnGameUserSettingsUINeedsUpdate; // 0x110
};

struct UOpenDeveloperCreditsCommand_BP_C : UYOpenSettingsCommand {
	FPointerToUberGraphFrame UberGraphFrame; // 0x38
};

struct UUI_LoginScreen_WBP_C : UYWidget_Login {
	UWidgetAnimation* FadeIn; // 0x320
};

struct USkeleton : UObject {
	TArray<FBoneNode> BoneTree; // 0x38
	TArray<FTransform> RefLocalPoses; // 0x48
	FGuid VirtualBoneGuid; // 0x170
	TArray<FVirtualBone> VirtualBones; // 0x180
	TArray<USkeletalMeshSocket*> Sockets; // 0x190
	FSmartNameContainer SmartNames; // 0x1f0
	TArray<UBlendProfile*> BlendProfiles; // 0x270
	TArray<FAnimSlotGroup> SlotGroups; // 0x280
	TArray<UAssetUserData*> AssetUserData; // 0x358
};

struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x368
};

struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UFoliageType : UObject {
	FGuid UpdateGuid; // 0x28
	float Density; // 0x38
	float DensityAdjustmentFactor; // 0x3c
	float Radius; // 0x40
	bool bSingleInstanceModeOverrideRadius; // 0x44
	float SingleInstanceModeRadius; // 0x48
	EFoliageScaling Scaling; // 0x4c
	FFloatInterval ScaleX; // 0x50
	FFloatInterval ScaleY; // 0x58
	FFloatInterval ScaleZ; // 0x60
	FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68
	FoliageVertexColorMask VertexColorMask; // 0x98
	float VertexColorMaskThreshold; // 0x9c
	char VertexColorMaskInvert : 1; // 0xa0
	FFloatInterval ZOffset; // 0xa4
	char AlignToNormal : 1; // 0xac
	float AlignMaxAngle; // 0xb0
	char RandomYaw : 1; // 0xb4
	float RandomPitchAngle; // 0xb8
	FFloatInterval GroundSlopeAngle; // 0xbc
	FFloatInterval Height; // 0xc4
	TArray<FName> LandscapeLayers; // 0xd0
	float MinimumLayerWeight; // 0xe0
	TArray<FName> ExclusionLandscapeLayers; // 0xe8
	float MinimumExclusionLayerWeight; // 0xf8
	FName LandscapeLayer; // 0xfc
	char CollisionWithWorld : 1; // 0x104
	FVector CollisionScale; // 0x108
	FBoxSphereBounds MeshBounds; // 0x114
	FVector LowBoundOriginRadius; // 0x130
	EComponentMobility Mobility; // 0x13c
	FInt32Interval CullDistance; // 0x140
	char bEnableStaticLighting : 1; // 0x148
	char CastShadow : 1; // 0x148
	char bAffectDynamicIndirectLighting : 1; // 0x148
	char bAffectDistanceFieldLighting : 1; // 0x148
	char bCastDynamicShadow : 1; // 0x148
	char bCastStaticShadow : 1; // 0x148
	char bCastShadowAsTwoSided : 1; // 0x148
	char bReceivesDecals : 1; // 0x148
	char bOverrideLightMapRes : 1; // 0x149
	int32_t OverriddenLightMapRes; // 0x14c
	ELightmapType LightmapType; // 0x150
	char bUseAsOccluder : 1; // 0x154
	FBodyInstance BodyInstance; // 0x158
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x2b0
	FLightingChannels LightingChannels; // 0x2b1
	char bRenderCustomDepth : 1; // 0x2b4
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x2b8
	int32_t CustomDepthStencilValue; // 0x2bc
	int32_t TranslucencySortPriority; // 0x2c0
	float CollisionRadius; // 0x2c4
	float ShadeRadius; // 0x2c8
	int32_t NumSteps; // 0x2cc
	float InitialSeedDensity; // 0x2d0
	float AverageSpreadDistance; // 0x2d4
	float SpreadVariance; // 0x2d8
	int32_t SeedsPerStep; // 0x2dc
	int32_t DistributionSeed; // 0x2e0
	float MaxInitialSeedOffset; // 0x2e4
	bool bCanGrowInShade; // 0x2e8
	bool bSpawnsInShade; // 0x2e9
	float MaxInitialAge; // 0x2ec
	float MaxAge; // 0x2f0
	float OverlapPriority; // 0x2f4
	FFloatInterval ProceduralScale; // 0x2f8
	FRuntimeFloatCurve ScaleCurve; // 0x300
	int32_t ChangeCount; // 0x388
	char ReapplyDensity : 1; // 0x38c
	char ReapplyRadius : 1; // 0x38c
	char ReapplyAlignToNormal : 1; // 0x38c
	char ReapplyRandomYaw : 1; // 0x38c
	char ReapplyScaling : 1; // 0x38c
	char ReapplyScaleX : 1; // 0x38c
	char ReapplyScaleY : 1; // 0x38c
	char ReapplyScaleZ : 1; // 0x38c
	char ReapplyRandomPitchAngle : 1; // 0x38d
	char ReapplyGroundSlope : 1; // 0x38d
	char ReapplyHeight : 1; // 0x38d
	char ReapplyLandscapeLayers : 1; // 0x38d
	char ReapplyZOffset : 1; // 0x38d
	char ReapplyCollisionWithWorld : 1; // 0x38d
	char ReapplyVertexColorMask : 1; // 0x38d
	char bEnableDensityScaling : 1; // 0x38d
	char bEnableDiscardOnLoad : 1; // 0x38e
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x390
	int32_t VirtualTextureCullMips; // 0x3a0
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3a4
};

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x58
};

struct ANavigationTestingActor : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x250
	UNavigationInvokerComponent* InvokerComponent; // 0x258
	char bActAsNavigationInvoker : 1; // 0x260
	FNavAgentProperties NavAgentProps; // 0x268
	FVector QueryingExtent; // 0x298
	ANavigationData* MyNavData; // 0x2a8
	FVector ProjectedLocation; // 0x2b0
	char bProjectedLocationValid : 1; // 0x2bc
	char bSearchStart : 1; // 0x2bc
	float CostLimitFactor; // 0x2c0
	float MinimumCostLimit; // 0x2c4
	char bBacktracking : 1; // 0x2c8
	char bUseHierarchicalPathfinding : 1; // 0x2c8
	char bGatherDetailedInfo : 1; // 0x2c8
	char bDrawDistanceToWall : 1; // 0x2c8
	char bShowNodePool : 1; // 0x2c8
	char bShowBestPath : 1; // 0x2c8
	char bShowDiffWithPreviousStep : 1; // 0x2c8
	char bShouldBeVisibleInGame : 1; // 0x2c8
	ENavCostDisplay CostDisplayMode; // 0x2cc
	FVector2D TextCanvasOffset; // 0x2d0
	char bPathExist : 1; // 0x2d8
	char bPathIsPartial : 1; // 0x2d8
	char bPathSearchOutOfNodes : 1; // 0x2d8
	float PathfindingTime; // 0x2dc
	float PathCost; // 0x2e0
	int32_t PathfindingSteps; // 0x2e4
	ANavigationTestingActor* OtherActor; // 0x2e8
	UNavigationQueryFilter* FilterClass; // 0x2f0
	int32_t ShowStepIndex; // 0x2f8
	float OffsetFromCornersDistance; // 0x2fc
};

struct UYControllerReleaseNotesComponent : UActorComponent {
	bool m_releaseNotesVisibility; // 0xb0
	FMulticastInlineDelegate OnReleaseNotesVisibilityStateChanged; // 0xb8
};

struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UYPlayerDropComponent : UActorComponent {
	FMulticastInlineDelegate OnPlayerDropItem; // 0xb0
	float m_offsetDropSpawnLocation; // 0xc0
	float m_offsetDropLocationDistance; // 0xc4
	float m_angleRotationOffsetPerItemDrop; // 0xc8
	float m_maxTraceDistanceDown; // 0xcc
	FDataTableRowHandle m_pickUpItemMoneyDefinition; // 0xd8
	bool m_dropWeaponOnDeath; // 0xec
	bool m_dropAbilityOnDeath; // 0xed
	bool m_dropConsumablesOnDeath; // 0xee
	bool m_dropAmmoOnDeath; // 0xef
	FDataTableRowHandle m_prospectorBadgeRowHandle; // 0xf0
	AYLootContainer* m_corpseContainerToSpawn; // 0x100
};

struct ULevelVariantSets : UObject {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
};

struct UYWidget_NotificationsManager : UYWidget {
	FMulticastInlineDelegate OnTriggerNotificationDelegate; // 0x2c0
	TMap<int32_t, UYWidget_Notification*> m_notificationWidgets; // 0x2d0
	UVerticalBox* m_notificationPanel; // 0x320
};

struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct UGizmoWorldAxisSource : UObject {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
};

struct UYWidget_ValueCompareDisplay : UYWidget_ValueDisplay {
	UTextBlock* m_shouldValueText; // 0x338
};

struct UYWidget_FounderPacks : UYWidget {
	UYWidget_ItemContainer* m_founderPackSmall; // 0x2c0
	UYWidget_ItemContainer* m_founderPackMedium; // 0x2c8
	UYWidget_ItemContainer* m_founderPackLarge; // 0x2d0
};

struct APodStart_BP_C : AIntroActor_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	AYPodActor* SpawnPodActor; // 0x268
};

struct UPlayerBotStationInteractWithActorTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	AActor* Owner; // 0xb0
	FName InteractTarget; // 0xb8
	APRO_PlayerController_C* PROPlayerController; // 0xc0
	FName IsCombatTargetClose; // 0xc8
	FName TimeStampLastTP; // 0xd0
	UBlackboardComponent* Blackboard; // 0xd8
};

struct UWBP_Options_Menu_C : UYWidgetView_Options {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWidgetAnimation* ScreenIn_Anim; // 0x348
	UImage* Gfx_BG_DarkColor; // 0x350
	UImage* Gfx_BG_LightColor; // 0x358
	UImage* Gfx_Grid_Helper; // 0x360
	UWBP_AccountLinking_C* WBP_AccountLinking; // 0x368
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x370
	UWBP_Common_Btn_C* WBP_Common_Btn_Credits; // 0x378
	UWBP_Common_Btn_C* WBP_Common_Btn_CustomerService; // 0x380
	UWBP_Common_Btn_C* WBP_Common_Btn_Debug; // 0x388
	UWBP_Common_Btn_C* WBP_Common_Btn_ExitGame; // 0x390
	UWBP_Common_Btn_C* WBP_Common_Btn_LinkAccounts; // 0x398
	UWBP_Common_Btn_C* WBP_Common_Btn_ReportBug; // 0x3a0
	UWBP_Common_Btn_C* WBP_Common_Btn_Resume; // 0x3a8
	UWBP_Common_Btn_C* WBP_Common_Btn_ReturnToStation; // 0x3b0
	UWBP_Common_Btn_C* WBP_Common_Btn_Settings; // 0x3b8
	UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x3c0
	UWBP_Options_Provider_C* OptionsProvider; // 0x3c8
};

struct UYWidget_SimpleHeadline : UYWidget {
	UTextBlock* m_headlineTextBlock; // 0x2c0
	UYWidget_ImageBase* m_headlineIcon; // 0x2c8
	FText m_headlineText; // 0x2d0
	TSoftObjectPtr<UTexture2D> m_headlineIconTexture; // 0x2e8
};

struct UYControllerStationComponent : UActorComponent {
	FMulticastInlineDelegate OnToggleHudVisibility; // 0xb0
	FMulticastInlineDelegate OnToggleQuickMenuVisibility; // 0xc0
	FMulticastInlineDelegate OnToggleStationInventory; // 0xd0
	FMulticastInlineDelegate OnFactionSet; // 0xe0
	float m_onLeftSubMenuFromQuickMenuFadeOutDuration; // 0xf0
	float m_onLeftSubMenuFromQuickMenuFadeInDelay; // 0xf4
	float m_onLeftSubMenuFromQuickMenuFadeInDuration; // 0xf8
	FYSceneSetupData m_loadoutSetupData; // 0x108
	FYSceneSetupData m_shopSetupData; // 0x120
	FYSceneSetupData m_fortunaPassSetupData; // 0x138
	FYSceneSetupData m_factionICASetupData; // 0x150
	FYSceneSetupData m_factionKorolevSetupData; // 0x168
	FYSceneSetupData m_factionOsirisSetupData; // 0x180
	FYSceneSetupData m_playSetupData; // 0x198
	AActor* m_currentNPCActor; // 0x1b0
	FName m_factionSetHandle; // 0x1b8
	FDataTableRowHandle m_requestedScene; // 0x1c0
};

struct UPlayerBotTeleportToTargetTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FName IsCombatTargetClose; // 0xb0
	AYPlayerController* YPlayerController; // 0xb8
	AActor* ownerActor; // 0xc0
	FName InteractTarget; // 0xc8
	FName TimeStampLastTP; // 0xd0
};

struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct AEscape_Beacon_BP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UParticleSystemComponent* BloomParticle; // 0x248
	UPointLightComponent* PointLight; // 0x250
	UStaticMeshComponent* BeaconMesh; // 0x258
	USceneComponent* DefaultSceneRoot; // 0x260
	float BeaconFlash_TL_EmissiveLerp_F4825EA24AE53EDB88DAFFB041D78275; // 0x268
	ETimelineDirection BeaconFlash_TL__Direction_F4825EA24AE53EDB88DAFFB041D78275; // 0x26c
	UTimelineComponent* BeaconFlash-TL; // 0x270
	int32_t MeshVariation; // 0x278
	FLinearColor NewColour; // 0x27c
	bool IsFlashing; // 0x28c
	float FlashPlayrate; // 0x290
};

struct UOpenSettingsCommand_BP_C : UYOpenSettingsCommand {
	FPointerToUberGraphFrame UberGraphFrame; // 0x38
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct UYWidget_ItemComponentTextModType : UYWidget_ItemComponentBase {
	UTextBlock* m_modTypeText; // 0x300
};

struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa8
};

struct UYBTService_Stability : UBTService {
	FBlackboardKeySelector m_keyStabilityAnimationInfo; // 0x70
	FBlackboardKeySelector m_keyStabilityAnimationIsBlocked; // 0x98
	FBlackboardKeySelector m_keyCurrentAIAction; // 0xc0
};

struct UPlayerBotDoScreenshotTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
};

struct UAvoidanceManager : UObject {
	float DefaultTimeToLive; // 0x30
	float LockTimeAfterAvoid; // 0x34
	float LockTimeAfterClean; // 0x38
	float DeltaTimeToPredict; // 0x3c
	float ArtificialRadiusExpansion; // 0x40
	float TestHeightDifference; // 0x44
	float HeightCheckMargin; // 0x48
};

struct UAnimNotify_FootStepFX_C : UAnimNotify {
	EYFeet FeetType; // 0x38
};

struct UVariant : UObject {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40
};

struct UWBP_ProgressBarNameValue_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* Clear_Anim; // 0x2c8
	UWidgetAnimation* ScreenIn_Anim; // 0x2d0
	UImage* Gfx_ActionHighlight; // 0x2d8
	UImage* Gfx_Backer; // 0x2e0
	UHorizontalBox* TextHolder; // 0x2e8
	UTextBlock* Txt_Amount; // 0x2f0
	UTextBlock* Txt_Label; // 0x2f8
	UWBP_Checkbox_C* WBP_Checkbox_71; // 0x300
	UWBP_ProgressBar_C* WBP_ProgressBar; // 0x308
	FText Label; // 0x310
	bool ShowText; // 0x328
	bool ShowCheckbox; // 0x329
	bool ShowDelta; // 0x32a
	FLinearColor ProgressBarFillColor; // 0x32c
	FLinearColor ProgressBarDeltaColor; // 0x33c
	bool PlayedContractAnimation; // 0x34c
	bool ReverseProgressBarShear; // 0x34d
	FMulticastInlineDelegate OnProgressBarFull; // 0x350
	bool PlayedStepCompletedSound; // 0x360
};

struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate {
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct UYStateInventoryComponent : UActorComponent {
	FMulticastInlineDelegate OnInventoryInfoUpdated; // 0xb0
	FMulticastInlineDelegate OnPlayerInventoryUpdated; // 0xc0
	FMulticastInlineDelegate OnPlayerStashUpdated; // 0xd0
	FMulticastInlineDelegate OnPlayerSetUpdated; // 0xe0
	FMulticastInlineDelegate OnPlayerPickaxeLevelUpdated; // 0xf0
	FMulticastInlineDelegate OnPlayerSetItemAdded; // 0x100
	FMulticastInlineDelegate OnPlayerSetItemUpdated; // 0x110
	FMulticastInlineDelegate OnPlayerSetItemRemoved; // 0x120
	FMulticastInlineDelegate OnPlayerSetItemMoved; // 0x130
	FMulticastInlineDelegate OnPlayerStashItemAdded; // 0x140
	FMulticastInlineDelegate OnPlayerStashItemUpdated; // 0x150
	FMulticastInlineDelegate OnPlayerStashItemRemoved; // 0x160
	FMulticastInlineDelegate OnPlayerItemSwapPerformed; // 0x170
	FYPlayerInventory m_playerInventory; // 0x180
	FYPlayerDataSet m_playerSet; // 0x198
	FYInventorySnapshot m_serverSnapshot; // 0x1c0
	FYInventoryInfo m_inventoryInfo; // 0x238
	FYPlayerInventory m_predictedPlayerInventory; // 0x250
	FYPlayerDataSet m_predictedPlayerSet; // 0x268
	FYPlayerInventory m_playerStash; // 0x290
	int32_t m_playerPickaxeLevel; // 0x2a8
	int32_t m_componentId; // 0x2ac
	FYRuntimeInventoryWeightInfo m_runtimeInventoryWeightInfo; // 0x2b0
};

struct UYButton : UButton {
	FMulticastInlineDelegate OnYClicked; // 0x438
	USlateWidgetStyleAsset* m_buttonStyleAsset; // 0x448
	USlateWidgetStyleAsset* m_buttonIsSelectedStyleAsset; // 0x450
	FString m_biButtonName; // 0x458
	FString m_biLocationName; // 0x468
	USlateWidgetStyleAsset* m_currentlyUsedStyleAsset; // 0x478
};

struct AYSprayActor : AActor {
	UYDataTableRowAssociationComponent* m_rowAssociationComponent; // 0x240
	UDecalComponent* m_sprayDecal; // 0x248
	UMaterialInterface* m_decalMaterial; // 0x250
	TSoftObjectPtr<UStaticMesh> m_previewMesh; // 0x258
	UStaticMeshComponent* m_previewStaticMeshComponent; // 0x280
	TSoftObjectPtr<USoundBase> m_cachedSoundToPlay; // 0x288
	TSoftObjectPtr<UMaterialInterface> m_cachedDecalMaterial; // 0x2b0
	float m_fadeDuration; // 0x2d8
	FVector m_decalSize; // 0x2dc
	USceneComponent* m_rootComponent; // 0x2e8
};

struct UYControllerCustomizationPreviewComponent : UActorComponent {
	FMulticastInlineDelegate OnCustomizationModeChangedDelegate; // 0xb0
	FMulticastInlineDelegate OnRotationModeChanged; // 0xc0
	FMulticastInlineDelegate OnWorldLocationChanged; // 0xd0
	FYControllerCustomizationState m_state; // 0xe0
};

struct UDatasmithImportOptions : UDatasmithOptionsBase {
	EDatasmithImportSearchPackagePolicy SearchPackagePolicy; // 0x28
	EDatasmithImportAssetConflictPolicy MaterialConflictPolicy; // 0x29
	EDatasmithImportAssetConflictPolicy TextureConflictPolicy; // 0x2a
	EDatasmithImportActorPolicy StaticMeshActorImportPolicy; // 0x2b
	EDatasmithImportActorPolicy LightImportPolicy; // 0x2c
	EDatasmithImportActorPolicy CameraImportPolicy; // 0x2d
	EDatasmithImportActorPolicy OtherActorImportPolicy; // 0x2e
	EDatasmithImportMaterialQuality MaterialQuality; // 0x2f
	FDatasmithImportBaseOptions BaseOptions; // 0x34
	FDatasmithReimportOptions ReimportOptions; // 0x48
	FString Filename; // 0x50
	FString FilePath; // 0x60
};

struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UYWidget_ItemContainer : UYWidgetView_Item {
	FMulticastInlineDelegate OnItemSet; // 0x338
	FMulticastInlineDelegate OnItemReset; // 0x348
	FMulticastInlineDelegate OnCraftingBlueprintRowHandleItemSet; // 0x358
	FMulticastInlineDelegate OnItemClicked; // 0x368
	FMulticastInlineDelegate OnItemDoubleClicked; // 0x378
	FMulticastInlineDelegate OnItemPressed; // 0x388
	FMulticastInlineDelegate OnItemReleased; // 0x398
	FMulticastInlineDelegate OnItemSelected; // 0x3a8
	FMulticastInlineDelegate OnItemHovered; // 0x3b8
	FMulticastInlineDelegate OnItemActiveChanged; // 0x3c8
	FMulticastInlineDelegate OnItemDragDetected; // 0x3d8
	FMulticastInlineDelegate OnItemDropSignature; // 0x3e8
	FMulticastInlineDelegate OnSetItemClickedDelegate; // 0x3f8
	FMulticastInlineDelegate OnSetItemHoveredDelegate; // 0x408
	FMulticastInlineDelegate OnSetItemUnhoveredDelegate; // 0x418
	FYItemContainerData m_itemContainerData; // 0x428
	FYInventoryItem m_assignedInventoryItem; // 0x440
	FString m_itemBackendId; // 0x4d8
	FString m_offerId; // 0x4e8
	EYItemType m_itemType; // 0x4f8
	EYItemRarityType m_itemRarity; // 0x4f9
	FString m_shopItemBelongsTo; // 0x500
	float m_weight; // 0x510
	FDataTableRowHandle m_itemRowHandle; // 0x518
	FDataTableRowHandle m_relatedItemRowHandle; // 0x528
	FString m_relatedCustomItemId; // 0x538
	bool m_resetItemType; // 0x548
	int32_t m_purchaseAmount; // 0x54c
	int32_t m_maxPurchaseAmount; // 0x550
	int32_t m_purchasePrice; // 0x554
	bool m_isSelected; // 0x559
	bool m_isItemActive; // 0x55a
	FMulticastInlineDelegate OnDisplayMaterialItemInfo; // 0x560
	TArray<UYWidget_ItemComponentBase*> m_itemComponentsOutsideHierarchy; // 0x570
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UYWidget_OfferDetailOverview : UYWidget {
	FMulticastInlineDelegate OnBackButtonClicked; // 0x2c0
	UYWidget_ItemContainer* m_offerDetailWidget; // 0x2e0
	UYWidget_ItemContainer* m_itemInfoWidget; // 0x2e8
	UYWidget_ItemActionsPanel* m_itemActionsPanel; // 0x2f0
};

struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x80
};

struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct USequenceCameraShakeSequencePlayer : UObject {
	UObject* BoundObjectOverride; // 0x480
	UMovieSceneSequence* Sequence; // 0x488
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x490
};

struct UWBP_RadialSelection_Item_C : UYWidget_CommWheelItem {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	UWidgetAnimation* onClick_Anim; // 0x330
	UWidgetAnimation* WidgetIn_Anim; // 0x338
	UWidgetAnimation* Hover_Anim; // 0x340
	UImage* Gfx_Backer; // 0x348
	UImage* Gfx_Item; // 0x350
	UScaleBox* IconScaleBox; // 0x358
	USizeBox* SizeOvveride; // 0x360
	UOverlay* StackAmount; // 0x368
	UTextBlock* Txt_ItemName; // 0x370
	UTextBlock* Txt_StackAmount; // 0x378
	FText ItemName; // 0x380
	bool Is Selected; // 0x398
	bool ShowText; // 0x399
};

struct AARSkyLight : ASkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x250
};

struct AYProjectile_Crusher_RockHeavy_BP_C : AYProjectile_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0
	UStaticMeshComponent* StaticMesh; // 0x3a8
	bool hasBeenThrown; // 0x3b0
};

struct UYDismissedSeasonPassPurchases : UObject {
	TArray<FString> m_dismissedSeasonPassPurchases; // 0x28
};

struct UWBP_Rewards_Popup_C : UYWidget_RewardsPopup {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	UWidgetAnimation* LevelUp_Anim; // 0x328
	UWidgetAnimation* BackgroundIn_Anim; // 0x330
	UWidgetAnimation* ScreenIn_Anim; // 0x338
	UVerticalBox* ContractsRewards; // 0x340
	UImage* Gfx_BackerHeader; // 0x348
	UImage* Gfx_BackerHeader_Secondary; // 0x350
	UImage* Gfx_BackerHeaderFull; // 0x358
	UImage* Gfx_BackerLvlUp; // 0x360
	UImage* Gfx_BackerLvlUp_Flash; // 0x368
	UImage* Gfx_BackerLvlUp_Full; // 0x370
	UImage* Gfx_BackerLvlUp_Full_DotPattern; // 0x378
	UImage* Gfx_BackerLvlUp_Full_Flash; // 0x380
	UImage* Gfx_BackerLvlUp_Full_Stroke; // 0x388
	UImage* Gfx_BackerLvlUp_GradientBacker; // 0x390
	UImage* Gfx_BackerLvlUp_Secondary; // 0x398
	UImage* Gfx_BackerLvlUp_Stroke; // 0x3a0
	UImage* Gfx_Grid_Helper; // 0x3a8
	USizeBox* LevelMaxSize; // 0x3b0
	UWrapBox* RewardItemsContainer; // 0x3b8
	UWrapBox* RewardList_Contracts; // 0x3c0
	UYTextBlock* Txt_FactionLevelUp; // 0x3c8
	UYTextBlock* Txt_Level; // 0x3d0
	UYTextBlock* Txt_LevelLarge; // 0x3d8
	UYTextBlock* Txt_RewardsContracts; // 0x3e0
	UYTextBlock* Txt_RewardsItems; // 0x3e8
	UYTextBlock* Txt_Title; // 0x3f0
	UWBP_Common_Btn_C* WBP_Accept_Btn; // 0x3f8
	UWBP_BlurFullScreenBacker_Panel_C* WBP_BlurFullScreenBacker_Panel; // 0x400
	UWBP_CelebrationBacker_Panel_C* WBP_CelebrationBacker_Panel; // 0x408
	UWBP_CelebrationBacker_Panel_B_C* WBP_CelebrationBacker_Panel_B; // 0x410
	UWBP_CelebrationBacker_Panel_C_C* WBP_CelebrationBacker_Panel_C; // 0x418
	UWBP_DividerHorizontal_Panel_C* WBP_DividerHorizontal_Panel_2; // 0x420
	UWBP_Footer_A_Panel_C* WBP_Footer_A_Panel; // 0x428
	UWBP_GenericContent_Panel_C* WBP_GenericContent_Panel; // 0x430
	UWelcomePackage_Category_Item_C* WelcomePackage_Category_Item; // 0x438
	FDataTableRowHandle SoundFX_ScreenIn; // 0x440
	FDataTableRowHandle SoundFX_LevelUp; // 0x450
	bool UseArrowsAnim; // 0x460
	bool UseCelebrationBackerC; // 0x461
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UBlueprintGeneratedClass : UClass {
	int32_t NumReplicatedProperties; // 0x230
	char bHasNativizedParent : 1; // 0x234
	char bHasCookedComponentInstancingData : 1; // 0x234
	TArray<UDynamicBlueprintBinding*> DynamicBindingObjects; // 0x238
	TArray<UActorComponent*> ComponentTemplates; // 0x248
	TArray<UTimelineTemplate*> Timelines; // 0x258
	TArray<FBPComponentClassOverride> ComponentClassOverrides; // 0x268
	USimpleConstructionScript* SimpleConstructionScript; // 0x278
	UInheritableComponentHandler* InheritableComponentHandler; // 0x280
	UStructProperty* UberGraphFramePointerProperty; // 0x288
	UFunction* UberGraphFunction; // 0x298
	TMap<FName, FBlueprintCookedComponentInstancingData> CookedComponentInstancingData; // 0x2a0
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x108
	TWeakObjectPtr<UWorld> World; // 0x118
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x120
};

struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x80
};

struct UYControllerChatComponent : UActorComponent {
	FMulticastInlineDelegate OnMutedStateChanged; // 0xb0
	FMulticastInlineDelegate OnChannelTypeChanged; // 0xc0
};

struct UReverbEffect : UObject {
	bool bBypassEarlyReflections; // 0x28
	float ReflectionsDelay; // 0x2c
	float GainHF; // 0x30
	float ReflectionsGain; // 0x34
	bool bBypassLateReflections; // 0x38
	float LateDelay; // 0x3c
	float DecayTime; // 0x40
	float Density; // 0x44
	float Diffusion; // 0x48
	float AirAbsorptionGainHF; // 0x4c
	float DecayHFRatio; // 0x50
	float LateGain; // 0x54
	float Gain; // 0x58
	float RoomRolloffFactor; // 0x5c
};

struct UYAICharacterMovementComponent : UCharacterMovementComponent {
	bool m_alignMeshToFloor; // 0xb20
	float m_maxAllowedRotationValue; // 0xb24
	float m_interpRotationRate; // 0xb28
	float m_maxTraceToFloorDistance; // 0xb2c
};

struct UIntervalGizmo : UInteractiveGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UYCharacterCustomizationComponent : UActorComponent {
	FMulticastInlineDelegate OnMeshInitializedDelegate; // 0xb0
	TArray<USkeletalMeshComponent*> m_meshComponents; // 0xc8
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x358
	float OuterConeAngle; // 0x35c
};

struct UYControllerInventoryInsuranceComponent : UActorComponent {
	FMulticastInlineDelegate OnActiveInsuranceUpdated; // 0xb0
	FDataTableRowHandle m_pendingInsuranceForLoadout; // 0xc0
	FYActiveInventoryInsurance m_activeInsurance; // 0xd0
};

struct UYWidget_Disconnected : UYWidget {
	UTextBlock* m_errorTextBlock; // 0x2c0
	FTimerHandle m_loginRetryTimerHandle; // 0x2c8
};

struct UYWidget_ItemComponentMods : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnModSlotDataAvailableEvent; // 0x300
	FYInventoryItem m_parentInventoryItem; // 0x310
};

struct UCompositeDataTable : UDataTable {
	TArray<UDataTable*> ParentTables; // 0xd8
	TArray<UDataTable*> OldParentTables; // 0xe8
};

struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UYWidget_ModalDialogShopOfferPurchase : UYWidget_ModalDialogOkCancel {
	UPanelWidget* m_modalDialog; // 0x348
	EYShopOfferPurchaseDialogState m_currentOfferPurchaseDialogState; // 0x350
	UYEditableTextBox* m_quantityEditableTextBox; // 0x358
	UButton* m_quantityUpButton; // 0x360
	UButton* m_quantityDownButton; // 0x368
	UTextBlock* m_unavailableReason; // 0x370
	UYWidget_PriceGeneric* m_priceWidget; // 0x378
	int32_t m_maxAllowedQuantity; // 0x380
};

struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UYWidget_BlueprintsOverview : UYWidget {
	UYWidget_ItemContainer* m_blueprintEntryWBP; // 0x2e8
	bool m_onlyBlueprints; // 0x2f0
	TArray<EYItemType> m_filterOutItemTypes; // 0x2f8
	EYItemType m_itemTypeFilter; // 0x308
	TArray<UYWidget_ItemContainer*> m_itemEntries; // 0x310
	TMap<int32_t, FYShopBlueprintData> m_blueprintsUiData; // 0x320
};

struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0
};

struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x268
};

struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x1e8
	bool bHandlingDisconnect; // 0x1e9
};

struct UPhononMaterialComponent : UActorComponent {
	int32_t MaterialIndex; // 0xb0
	EPhononMaterial MaterialPreset; // 0xb4
	float LowFreqAbsorption; // 0xb8
	float MidFreqAbsorption; // 0xbc
	float HighFreqAbsorption; // 0xc0
	float LowFreqTransmission; // 0xc4
	float MidFreqTransmission; // 0xc8
	float HighFreqTransmission; // 0xcc
	float Scattering; // 0xd0
};

struct UBTService_Bot_AquireCloseTarget_C : UBTService_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	EYAIState aiState; // 0xa0
	float ClosestDist; // 0xa4
	float MaxTargetDist; // 0xa8
	AActor* ClosestActor; // 0xb0
	FName combatTarget; // 0xb8
};

struct UWBP_BugReporter_Provider_C : UYWidgetProvider_BugReporter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x90
	FString AdditionalFilePath; // 0x98
};

struct UMovieSceneSlomoSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UWBP_Tab_Btn_C : UWBP_TabElementBase_TabElem_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* HighlightSheen_Anim; // 0x2e8
	UWidgetAnimation* Selected_Anim; // 0x2f0
	UWidgetAnimation* Idle_Anim; // 0x2f8
	UWidgetAnimation* HighlightBracket_Anim; // 0x300
	UImage* Gfx_DecoGradient; // 0x308
	UImage* Gfx_EdgeSelected_Selected; // 0x310
	UImage* Gfx_UnderlineFill; // 0x318
	UImage* Gfx_UnderlineFillStatic; // 0x320
	UImage* Icn_Placeholder; // 0x328
	USizeBox* Layout_Icon_SizeBox; // 0x330
	USizeBox* notification; // 0x338
	UTextBlock* Txt_Label; // 0x340
	UTextBlock* Txt_Selected_Label; // 0x348
	UBorder* Underline; // 0x350
	UWBP_SelectionBracket_C* WBP_Deco_SelectionBracket; // 0x358
	UWBP_SelectionHighlight_C* WBP_Deco_SelectionHighlight; // 0x360
	UWBP_Notification_C* WBP_Notification; // 0x368
	FStucture_TabData TabSetup; // 0x370
};

struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x458
	float CapsuleRadius; // 0x45c
};

struct UYWidget_MatchResult : UYWidget {
	UYWidget_EomResultHeader* m_resultHeader; // 0x2c0
};

struct UYWidget_StationHome : UYWidget {
	UCanvasPanel* m_popUpCanvasPanel; // 0x2c0
};

struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	FRawDistributionFloat Resilience; // 0x30
	FRawDistributionFloat ResilienceScaleOverLife; // 0x60
	float Friction; // 0x90
	float RandomSpread; // 0x94
	float RandomDistribution; // 0x98
	float RadiusScale; // 0x9c
	float RadiusBias; // 0xa0
	EParticleCollisionResponse response; // 0xa4
	EParticleCollisionMode CollisionMode; // 0xa5
};

struct UDestructibleFractureSettings : UObject {
	int32_t CellSiteCount; // 0x28
	FFractureMaterial FractureMaterialDesc; // 0x2c
	int32_t randomSeed; // 0x50
	TArray<FVector> VoronoiSites; // 0x58
	int32_t OriginalSubmeshCount; // 0x68
	TArray<UMaterialInterface*> Materials; // 0x70
	TArray<FDestructibleChunkParameters> ChunkParameters; // 0x80
};

struct AWaterBodyExclusionVolume : APhysicsVolume {
	bool bIgnoreAllOverlappingWaterBodies; // 0x288
	TArray<AWaterBody*> WaterBodiesToIgnore; // 0x290
};

struct UYSocialActorWidget : UYActorWidgetSimple {
	AYSocialActor* m_socialActor; // 0x3b0
	bool m_isSocialActorFromLocalOwner; // 0x3b8
	bool m_isSocialActorFromTeam; // 0x3b9
};

struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct UWBP_Toast_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* ToastFailure_Anim; // 0x268
	UWidgetAnimation* ToastSuccess_Anim; // 0x270
	UImage* Gfx_ColorFeedback; // 0x278
	UImage* Gfx_Highlight; // 0x280
	UImage* Gfx_SlantPrimary; // 0x288
	UImage* Gfx_SlantSecondary; // 0x290
	UTextBlock* Txt_PrimaryLabel; // 0x298
	UTextBlock* Txt_SecondaryLabel; // 0x2a0
	FText PrimaryLabel; // 0x2a8
	FText SecondaryLabel; // 0x2c0
	bool ShowSecondaryLabel; // 0x2d8
	FDataTableRowHandle ScreenInSoundFX_Success; // 0x2e0
	FDataTableRowHandle ScreenInSoundFX_Fail; // 0x2f0
};

struct UYAreaMapMarkerData : UYMapMarkerData {
	float m_searchRadius; // 0x148
	float m_randAngleRad; // 0x14c
	float m_randRadius; // 0x150
};

struct UYWeaponTransportComponent : UActorComponent {
	FMulticastInlineDelegate OnActivateWeaponTransport; // 0xb0
	FMulticastInlineDelegate OnDeactivateWeaponTransport; // 0xc0
	FMulticastInlineDelegate OnHitImpact; // 0xd0
	FMulticastInlineDelegate OnHitNotify; // 0xe0
	FMulticastInlineDelegate OnOwnerInstigatorItemRemoved; // 0xf0
	FMulticastInlineDelegate OnWeaponTransportComponentDestroyed; // 0x100
	TArray<FDataTableRowHandle> m_onlyProduceImpactDatatableRows; // 0x110
	int32_t m_nonReplicatedTransportHandle; // 0x120
	EYTransportHitType m_hitTransportType; // 0x124
	EYWeaponTransportHitResultType m_hitResultReaction; // 0x125
	bool m_spawnActorsOnImpact; // 0x126
};

struct UYReplicationGraph : UReplicationGraph {
	TArray<UObject*> NonSpatializedChildClasses; // 0x498
	TArray<UObject*> SpatializedChildClasses; // 0x4a8
	UReplicationGraphNode_GridSpatialization2D* GridSpatializationNode; // 0x4b8
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4c0
	UYReplicationGraphNode_PlayerStateFrequencyLimiter* PlayerStateFrequencyLimiterNode; // 0x4c8
};

struct UYActorUIComponent : UActorComponent {
	FVector m_offsetToActorLocation; // 0xb0
	FVector2D m_alignment; // 0xbc
	float m_maxRenderDistance; // 0xc4
	float m_overrideScaleDistance; // 0xc8
	float m_minRenderDistance; // 0xcc
	float m_minScaleValue; // 0xd0
	bool m_visibleThroughObstacles; // 0xd4
	EYUIComponentType m_componentType; // 0xd5
	bool m_isEnabled; // 0xd6
	bool m_gameplayTemporaryDisabled; // 0xd7
	bool m_isSpawningActorAndShouldBeHidden; // 0xd8
	USceneComponent* m_overridenSceneComponent; // 0xe0
	FYActorUIWidgetData m_uiWidgetData; // 0xe8
	EYActivityType m_activityContext; // 0x188
	TSoftClassPtr<UObject> m_widgetClass; // 0x190
	UYActorWidget* m_widget; // 0x1b8
	EYMapMarkerType m_markerType; // 0x1c0
	FMulticastInlineDelegate BP_OnWidgetLoaded; // 0x1c8
	FVector m_worldWidgetLocation; // 0x1d8
};

struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	FName NotifyName; // 0x30
};

struct ASceneBase_BP_C : AYScene {
	FPointerToUberGraphFrame UberGraphFrame; // 0x420
	USceneComponent* DefaultSceneRoot; // 0x428
};

struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct UYRichTextBlockDecorator_InputAction : URichTextBlockDecorator {
	UUserWidget* m_inputWidgetClass; // 0x28
	FMargin m_defaultPadding; // 0x30
};

struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30
};

struct UYWidget_TopMenuBarButton : UYWidget {
	FMulticastInlineDelegate OnButtonClickedDelegate; // 0x2c0
	int32_t m_buttonIndex; // 0x2d0
	FText m_label; // 0x2d8
	UCheckBox* m_buttonCheckedCheckBox; // 0x2f0
	UTextBlock* m_buttonTextBlock; // 0x2f8
	FLinearColor m_activeTextColor; // 0x300
	FLinearColor m_inactiveTextColor; // 0x310
	FLinearColor m_hoverTextColor; // 0x320
	UYScreenCommand* m_command; // 0x330
	UYProgressBar* m_buttonProgressBar; // 0x338
	float m_progressAnimDuration; // 0x340
};

struct UAxisPositionGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoFloatParameterSource> ParameterSource; // 0x58
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78
	bool bEnableSignedAxis; // 0x88
	bool bInInteraction; // 0x89
	FVector InteractionOrigin; // 0x8c
	FVector InteractionAxis; // 0x98
	FVector InteractionStartPoint; // 0xa4
	FVector InteractionCurPoint; // 0xb0
	float InteractionStartParameter; // 0xbc
	float InteractionCurParameter; // 0xc0
	float ParameterSign; // 0xc4
};

struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	FSourceEffectChorusSettings Settings; // 0x108
};

struct AChaosSolverActor : AActor {
	FChaosSolverConfiguration Properties; // 0x240
	float TimeStepMultiplier; // 0x2a8
	int32_t CollisionIterations; // 0x2ac
	int32_t PushOutIterations; // 0x2b0
	int32_t PushOutPairIterations; // 0x2b4
	float ClusterConnectionFactor; // 0x2b8
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2bc
	bool DoGenerateCollisionData; // 0x2bd
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2c0
	bool DoGenerateBreakingData; // 0x2d0
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2d4
	bool DoGenerateTrailingData; // 0x2e4
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2e8
	float MassScale; // 0x2f8
	bool bGenerateContactGraph; // 0x2fc
	bool bHasFloor; // 0x2fd
	float FloorHeight; // 0x300
	FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x304
	UBillboardComponent* SpriteComponent; // 0x308
	UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x328
};

struct UBTTask_MoveTo : UBTTask_BlackboardBase {
	float AcceptableRadius; // 0x98
	UNavigationQueryFilter* FilterClass; // 0xa0
	float ObservedBlackboardValueTolerance; // 0xa8
	char bObserveBlackboardValue : 1; // 0xac
	char bAllowStrafe : 1; // 0xac
	char bAllowPartialPath : 1; // 0xac
	char bTrackMovingGoal : 1; // 0xac
	char bProjectGoalLocation : 1; // 0xac
	char bReachTestIncludesAgentRadius : 1; // 0xac
	char bReachTestIncludesGoalRadius : 1; // 0xac
	char bStopOnOverlap : 1; // 0xac
	char bStopOnOverlapNeedsUpdate : 1; // 0xad
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UOnboarding_02_Stash_C : UMS_Line_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x1b0
	TArray<EYPlayerSetType> SlotsToCheck; // 0x1b8
	EYItemType itemTypeToCheck; // 0x1c8
	FName SceneToInteract; // 0x1cc
	bool stepActive; // 0x1d4
	FDataTableRowHandle loadSceneRowHandle; // 0x1d8
	FDataTableRowHandle quickMenuRowHandle; // 0x1e8
	bool checkForTools; // 0x1f8
};

struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28
	bool bDeterminism; // 0x29
	int32_t randomSeed; // 0x2c
	EParticleAllocationMode AllocationMode; // 0x30
	int32_t PreAllocationCount; // 0x34
	FNiagaraEmitterScriptProperties UpdateScriptProps; // 0x38
	FNiagaraEmitterScriptProperties SpawnScriptProps; // 0x60
	ENiagaraSimTarget SimTarget; // 0x88
	FBox FixedBounds; // 0x8c
	int32_t MinDetailLevel; // 0xa8
	int32_t MaxDetailLevel; // 0xac
	FNiagaraDetailsLevelScaleOverrides GlobalSpawnCountScaleOverrides; // 0xb0
	FNiagaraPlatformSet Platforms; // 0xc8
	FNiagaraEmitterScalabilityOverrides ScalabilityOverrides; // 0xf8
	char bInterpolatedSpawning : 1; // 0x108
	char bFixedBounds : 1; // 0x108
	char bUseMinDetailLevel : 1; // 0x108
	char bUseMaxDetailLevel : 1; // 0x108
	char bOverrideGlobalSpawnCountScale : 1; // 0x108
	char bRequiresPersistentIDs : 1; // 0x108
	char bCombineEventSpawn : 1; // 0x108
	float MaxDeltaTimePerTick; // 0x10c
	uint32_t DefaultShaderStageIndex; // 0x110
	uint32_t MaxUpdateIterations; // 0x114
	TSet<uint32_t> SpawnStages; // 0x118
	char bSimulationStagesEnabled : 1; // 0x168
	char bDeprecatedShaderStagesEnabled : 1; // 0x168
	char bLimitDeltaTime : 1; // 0x168
	FString UniqueEmitterName; // 0x170
	TArray<UNiagaraRendererProperties*> RendererProperties; // 0x180
	TArray<FNiagaraEventScriptProperties> EventHandlerScriptProps; // 0x190
	TArray<UNiagaraSimulationStageBase*> SimulationStages; // 0x1a0
	UNiagaraScript* GPUComputeScript; // 0x1b0
	TArray<FName> SharedEventGeneratorIds; // 0x1b8
};

struct AHorizonSpline : AActor {
	USplineComponent* SplineComponent; // 0x240
};

struct UYParticleSystemComponentFOV : UParticleSystemComponent {
	float m_defaultFOV; // 0x6a8
	float m_nearClipDistance; // 0x6ac
	float m_currentFOV; // 0x6b0
	bool m_useCustomFOV; // 0x6b4
};

struct UYGameInstance : UGameInstance {
	UYGlobalAudio* m_globalAudio; // 0x1d8
	UYAudioManager* m_audioManager; // 0x1e0
	UYWeaponResources* m_weaponResources; // 0x1e8
	UYSquadManager* m_squadManager; // 0x1f0
	UYSignalRInstance* m_signalrInstance; // 0x1f8
	UYBackendInstance* m_backendInstance; // 0x200
	UYSocialCompatibilityManager* m_socialCompatabilityManager; // 0x208
	UYGameInventoryManager* m_gameInventoryManager; // 0x210
	UYContractsManager* m_contractsManager; // 0x218
	UYFactionsProgressionManager* m_factionsProgressionManager; // 0x220
	UYInstanceSessionReconnectionManager* m_sessionReconnectionManager; // 0x228
	UYManagerSessionResource* m_resourceSessionManager; // 0x230
	UYPlayerQuarterManager* m_playerQuarterManager; // 0x238
	UYMissionManager* m_missionManager; // 0x240
	UYPassiveGeneratorsManager* m_passiveGeneratorsManager; // 0x248
	UYUserDataManager* m_userDataManager; // 0x250
	UYInitializationManager* m_initializationManager; // 0x258
	UYMatchmakingManager* m_matchmakingManager; // 0x260
	UYAzureFunctionsManager* m_azureFunctionsManager; // 0x268
	UYPlayfabCommonRequestsManager* m_commonFunctionsManager; // 0x270
	UYStaticItemLookupManager* m_staticItemLookupManager; // 0x278
	UYQuestManager* m_questManager; // 0x280
	UYGrantsManager* m_grantsManager; // 0x288
	UYNotificationsManager* m_notificationsManager; // 0x290
	UYGameSessionManager* m_gameSessionManager; // 0x298
	UYCharacterCustomizationManager* m_characterCustomizationManager; // 0x2a0
	UYKeybindingsManager* m_keybindingsManager; // 0x2a8
	UYUiManager* m_uiManager; // 0x2b0
	FString m_prevMapName; // 0x2b8
	AActor* YCrasher; // 0x2c8
	UYActorPoolingManager* m_actorPoolManager; // 0x2e0
	UYAuthorization* m_authorization; // 0x2e8
	FMulticastInlineDelegate OnNewLoadTimesData; // 0x2f0
	UYVivoxManager* m_vivoxManager; // 0x300
	UYVivoxIssueRequestManager* m_vivoxIssueManager; // 0x308
	UYGamePingManager* m_pingManager; // 0x310
	UYPlayerOnboardingManager* m_onboardingManager; // 0x318
	UYInventoryManager* m_inventoryManager; // 0x320
	UYCraftingManager* m_craftingManager; // 0x328
	UYAutomationManager* m_automationManager; // 0x330
	UMaterialParameterCollection* m_globalMaterialParameterCollection; // 0x338
	TSoftObjectPtr<UMaterialParameterCollection> m_globalMaterialParameterCollectionPath; // 0x340
	UYAnalytics* m_gameAnalytics; // 0x370
	UTexture2D* m_defaultPlayerAvatar; // 0x378
	FSoftObjectPath m_defaultPlayerAvatarPath; // 0x380
	int32_t m_startRank; // 0x398
	bool m_disableRankedFeature; // 0x39c
	bool m_returningToStation; // 0x39d
	UYDataTableManager* m_dataTableManager; // 0x3a0
	UYWidgetPoolManager* m_widgetPoolManager; // 0x3a8
	UYMessageManager* m_messageManager; // 0x3b0
	UYPopUpManager* m_popUpManager; // 0x3b8
	UYRankedSeasonsDataManager* m_rankedSeasonsDataManager; // 0x3c0
	UYShopManager* m_shopManager; // 0x3c8
	UYSocialManager* m_socialManager; // 0x3d0
	UYLiveEventModifiersManager* m_liveEventModifiersManager; // 0x3d8
	UYAuthenticationManager* m_authenticationManager; // 0x3e0
	UYAccountLinkingManager* m_accountLinkingManager; // 0x3e8
	UYFriendsImportManager* m_friendsImportManager; // 0x3f0
	int32_t m_chatLogSize; // 0x498
};

struct UYWidget_FounderPackEntry : UYWidget {
	FDataTableRowHandle m_founderPackRowHandle; // 0x2c0
	FString m_url; // 0x2d0
	FString m_offerId; // 0x2e0
	UYWidget_ItemContainer* m_itemContainer; // 0x2f0
};

struct UExporter : UObject {
	UObject* SupportedClass; // 0x28
	UObject* ExportRootScope; // 0x30
	TArray<FString> FormatExtension; // 0x38
	TArray<FString> FormatDescription; // 0x48
	int32_t PreferredFormatIndex; // 0x58
	int32_t TextIndent; // 0x5c
	char bText : 1; // 0x60
	char bSelectedOnly : 1; // 0x60
	char bForceFileOperations : 1; // 0x60
	UAssetExportTask* ExportTask; // 0x68
};

struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	FMovieSceneEventChannel EventChannel; // 0xf0
};

struct UYWidget_Timer : UYWidget {
	float m_audioTimerElapsingSoonThreshold; // 0x2c0
	bool m_isPasAudioTimerElapsingSoonThreshold; // 0x2c4
	FDataTableRowHandle m_audioTimerElapsingSoon; // 0x2c8
	FDataTableRowHandle m_audioTimerFinished; // 0x2d8
};

struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct UExpandableArea : UWidget {
	FExpandableAreaStyle Style; // 0x110
	FSlateBrush BorderBrush; // 0x230
	FSlateColor BorderColor; // 0x2b8
	bool bIsExpanded; // 0x2e0
	float MaxHeight; // 0x2e4
	FMargin HeaderPadding; // 0x2e8
	FMargin AreaPadding; // 0x2f8
	FMulticastInlineDelegate OnExpansionChanged; // 0x308
	UWidget* HeaderContent; // 0x318
	UWidget* BodyContent; // 0x320
};

struct UPhysicsHandleComponent : UActorComponent {
	UPrimitiveComponent* GrabbedComponent; // 0xb0
	char bSoftAngularConstraint : 1; // 0xc0
	char bSoftLinearConstraint : 1; // 0xc0
	char bInterpolateTarget : 1; // 0xc0
	float LinearDamping; // 0xc4
	float LinearStiffness; // 0xc8
	float AngularDamping; // 0xcc
	float AngularStiffness; // 0xd0
	float InterpolationSpeed; // 0x140
};

struct UBTDecorator_ShouldAIRoar_C : UBTDecorator_BlueprintBase {
	float AllyCheckRadius; // 0xa0
};

struct ASpectatorBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x300
	FSpectatorReservation PendingReservation; // 0x310
	ESpectatorClientRequestType RequestType; // 0x388
	bool bPendingReservationSent; // 0x389
	bool bCancelReservation; // 0x38a
};

struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UReplicationGraphNode_AlwaysRelevant : UReplicationGraphNode {
	UReplicationGraphNode* ChildNode; // 0x50
};

struct UWelcomePackage_Category_Item_C : UUserWidget {
	UWrapBox* RewardItemsContainer; // 0x260
	UYTextBlock* Txt_RewardsItemCategory; // 0x268
};

struct APawn : AActor {
	char bUseControllerRotationPitch : 1; // 0x248
	char bUseControllerRotationYaw : 1; // 0x248
	char bUseControllerRotationRoll : 1; // 0x248
	char bCanAffectNavigationGeneration : 1; // 0x248
	float BaseEyeHeight; // 0x24c
	EAutoReceiveInput AutoPossessPlayer; // 0x250
	EAutoPossessAI AutoPossessAI; // 0x251
	char RemoteViewPitch; // 0x252
	AController* AIControllerClass; // 0x258
	APlayerState* PlayerState; // 0x260
	AController* LastHitBy; // 0x270
	AController* Controller; // 0x278
	FVector ControlInputVector; // 0x284
	FVector LastControlInputVector; // 0x290
};

struct UYWidget_AlivePlayers : UYWidget {
	UTextBlock* m_alivePlayersText; // 0x2c0
};

struct UMS_Line_Base_C : UYMetaQuestPlayerInstanceComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x180
	TArray<AActor*> HintIndicators; // 0x188
	FMS_HintMarkerReplicatedData_ST HintData; // 0x198
};

struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct AYPickup_Base_BP_C : AYPickupActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x428
	UParticleSystemComponent* LootFeedbackVFX; // 0x430
	float MeshScaleTimeline_Rotation_9B7B943048FDE1CBBA26CA93EBC05C27; // 0x438
	float MeshScaleTimeline_Size_9B7B943048FDE1CBBA26CA93EBC05C27; // 0x43c
	ETimelineDirection MeshScaleTimeline__Direction_9B7B943048FDE1CBBA26CA93EBC05C27; // 0x440
	UTimelineComponent* MeshScaleTimeline; // 0x448
	FDataTableRowHandle SFXLanding; // 0x450
	FDataTableRowHandle SFXLegendarySpawn; // 0x460
	FDataTableRowHandle RarityDT; // 0x470
	FVector DesiedMeshScale; // 0x480
};

struct UYLegalAgreementsManager : UObject {
	TArray<FYLocallyAcceptedLegalAgreements> m_locallyAcceptedLegalAgreements; // 0x28
};

struct USoundMix : UObject {
	char bApplyEQ : 1; // 0x28
	float EQPriority; // 0x2c
	FAudioEQEffect EQSettings; // 0x30
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x70
	float InitialDelay; // 0x80
	float FadeInTime; // 0x84
	float Duration; // 0x88
	float FadeOutTime; // 0x8c
};

struct UConstantQNRTSettings : UAudioSynesthesiaNRTSettings {
	float StartingFrequency; // 0x28
	int32_t NumBands; // 0x2c
	float NumBandsPerOctave; // 0x30
	float AnalysisPeriod; // 0x34
	bool bDownmixToMono; // 0x38
	EConstantQFFTSizeEnum FFTSize; // 0x39
	EFFTWindowType WindowType; // 0x3a
	EAudioSpectrumType SpectrumType; // 0x3b
	float BandWidthStretch; // 0x3c
	EConstantQNormalizationEnum CQTNormalization; // 0x40
	float NoiseFloorDb; // 0x44
};

struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x80
	char bAffectsTranslucency : 1; // 0x80
	float RadiusScale; // 0x84
	FVector ColorAdd; // 0x88
	FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0x98
	FNiagaraVariableAttributeBinding LightExponentBinding; // 0xf0
	FNiagaraVariableAttributeBinding PositionBinding; // 0x148
	FNiagaraVariableAttributeBinding ColorBinding; // 0x1a0
	FNiagaraVariableAttributeBinding RadiusBinding; // 0x1f8
	FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x250
};

struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UPlayerBotUpdateTargetVisibilityTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	FName combatTarget; // 0xb0
	FName IsCombatTargetVisible; // 0xb8
	UBlackboardComponent* BlackboardComponent; // 0xc0
};

struct UWBP_Authorization_Screen_C : UYWidget_LoginRegister {
	UWBP_LoadingSpinner_C* WBP_LoadingSpinner; // 0x338
};

struct AYProjectile_BP_C : AYProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
};

struct UEndpointSubmix : USoundSubmixBase {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct USkeletalMeshSimulationComponent : UActorComponent {
	UChaosPhysicalMaterial* PhysicalMaterial; // 0xb8
	AChaosSolverActor* ChaosSolverActor; // 0xc0
	UPhysicsAsset* OverridePhysicsAsset; // 0xc8
	bool bSimulating; // 0xd0
	bool bNotifyCollisions; // 0xd1
	EObjectStateTypeEnum ObjectType; // 0xd2
	float Density; // 0xd4
	float MinMass; // 0xd8
	float MaxMass; // 0xdc
	ECollisionTypeEnum CollisionType; // 0xe0
	float ImplicitShapeParticlesPerUnitArea; // 0xe4
	int32_t ImplicitShapeMinNumParticles; // 0xe8
	int32_t ImplicitShapeMaxNumParticles; // 0xec
	int32_t MinLevelSetResolution; // 0xf0
	int32_t MaxLevelSetResolution; // 0xf4
	int32_t CollisionGroup; // 0xf8
	EInitialVelocityTypeEnum InitialVelocityType; // 0xfc
	FVector InitialLinearVelocity; // 0x100
	FVector InitialAngularVelocity; // 0x10c
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x118
};

struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	UMovieSceneSection* SectionToKey; // 0x78
	FMovieScenePropertyBinding PropertyBinding; // 0x80
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UWBP_Dropdown_Btn_C : UWBP_DropdownBase_Btn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	UWidgetAnimation* Highlight_Anim; // 0x2f8
	UImage* Gfx_DecoGradient; // 0x300
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x308
	FDataTableRowHandle SoundFX_ButtonHover; // 0x310
	FDataTableRowHandle Ui Event Row Handle; // 0x320
	FDataTableRowHandle SoundFX_ButtonPress; // 0x330
};

struct USpectatorBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x240
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
	int32_t GPUAllocationFixedSize; // 0x5c
	float GPUAllocationPerParticleSize; // 0x60
};

struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
};

struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
};

struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	UStaticMesh* ParticleMesh; // 0x80
	ENiagaraSortMode SortMode; // 0x88
	char bOverrideMaterials : 1; // 0x8c
	char bSortOnlyWhenTranslucent : 1; // 0x8c
	TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0x90
	FVector2D SubImageSize; // 0xa0
	char bSubImageBlend : 1; // 0xa8
	ENiagaraMeshFacingMode FacingMode; // 0xac
	char bLockedAxisEnable : 1; // 0xb0
	FVector LockedAxis; // 0xb4
	ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xc0
	FVector PivotOffset; // 0xc4
	ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0xd0
	char bEnableFrustumCulling : 1; // 0xd4
	char bEnableCameraDistanceCulling : 1; // 0xd4
	float MinCameraDistance; // 0xd8
	float MaxCameraDistance; // 0xdc
	uint32_t RendererVisibility; // 0xe0
	FNiagaraVariableAttributeBinding PositionBinding; // 0xe8
	FNiagaraVariableAttributeBinding ColorBinding; // 0x140
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x198
	FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1f0
	FNiagaraVariableAttributeBinding ScaleBinding; // 0x248
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x2a0
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2f8
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x350
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x3a8
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x400
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x458
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x4b0
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x508
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x560
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5b8
};

struct UBasicOverlays : UOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> skeletalMeshes; // 0x40
};

struct UYWidget_ItemComponentTextOfferPrice : UYWidget_ItemComponentBase {
	UYWidget_PriceGeneric* m_priceWidget; // 0x300
};

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct UARTrackableNotifyComponent : UActorComponent {
	FMulticastInlineDelegate OnAddTrackedGeometry; // 0xb0
	FMulticastInlineDelegate OnUpdateTrackedGeometry; // 0xc0
	FMulticastInlineDelegate OnRemoveTrackedGeometry; // 0xd0
	FMulticastInlineDelegate OnAddTrackedPlane; // 0xe0
	FMulticastInlineDelegate OnUpdateTrackedPlane; // 0xf0
	FMulticastInlineDelegate OnRemoveTrackedPlane; // 0x100
	FMulticastInlineDelegate OnAddTrackedPoint; // 0x110
	FMulticastInlineDelegate OnUpdateTrackedPoint; // 0x120
	FMulticastInlineDelegate OnRemoveTrackedPoint; // 0x130
	FMulticastInlineDelegate OnAddTrackedImage; // 0x140
	FMulticastInlineDelegate OnUpdateTrackedImage; // 0x150
	FMulticastInlineDelegate OnRemoveTrackedImage; // 0x160
	FMulticastInlineDelegate OnAddTrackedFace; // 0x170
	FMulticastInlineDelegate OnUpdateTrackedFace; // 0x180
	FMulticastInlineDelegate OnRemoveTrackedFace; // 0x190
	FMulticastInlineDelegate OnAddTrackedEnvProbe; // 0x1a0
	FMulticastInlineDelegate OnUpdateTrackedEnvProbe; // 0x1b0
	FMulticastInlineDelegate OnRemoveTrackedEnvProbe; // 0x1c0
	FMulticastInlineDelegate OnAddTrackedObject; // 0x1d0
	FMulticastInlineDelegate OnUpdateTrackedObject; // 0x1e0
	FMulticastInlineDelegate OnRemoveTrackedObject; // 0x1f0
};

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UYWidget_InteractionMessage : UYWidget {
	UTextBlock* m_interactionMessage; // 0x2c0
};

struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
};

struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x88
};

struct UYAISense_AllyAlert : UAISense {
	TArray<FYAIAllyAlertEvent> m_registeredEvents; // 0x80
};

struct UYMultiDataTableRowAssociationComponent : UActorComponent {
	TArray<FDataTableRowHandle> m_rowHandles; // 0xb0
	FMulticastInlineDelegate OnRowHandleChanged; // 0xc0
};

struct UWBP_Notification_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Gfx_NotifBacker; // 0x268
	UImage* Gfx_NotifBackerLarge; // 0x270
	UImage* Gfx_Pulse; // 0x278
	UImage* Gfx_Pulse_Large; // 0x280
	USizeBox* NotificationSimple; // 0x288
	USizeBox* NotificationValue; // 0x290
	UTextBlock* Txt_NotificationValue; // 0x298
	bool UseValueVariant; // 0x2a0
	FText Value; // 0x2a8
	FLinearColor SetColor; // 0x2c0
	bool ShowPulse; // 0x2d0
};

struct UBackgroundDropPodSpawner_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	AActor* LoadedDropPodClass; // 0xb8
	AActor* CLassToLoad; // 0xc0
	TSoftClassPtr<UObject> AssetClass; // 0xc8
	APlayerState* ReturnValue; // 0xf0
};

struct UBTTask_FindIdleMoveToLocation_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float DistanceMax; // 0xb0
	FBlackboardKeySelector KeyIdleMoveToLocation; // 0xb8
	FVector Location; // 0xe0
	FBlackboardKeySelector KeyHomeLocation; // 0xf0
	FVector HomeLocation; // 0x118
};

struct UForceFeedbackComponent : USceneComponent {
	UForceFeedbackEffect* ForceFeedbackEffect; // 0x1f8
	char bAutoDestroy : 1; // 0x200
	char bStopWhenOwnerDestroyed : 1; // 0x200
	char bLooping : 1; // 0x200
	char bIgnoreTimeDilation : 1; // 0x200
	char bOverrideAttenuation : 1; // 0x200
	float IntensityMultiplier; // 0x204
	UForceFeedbackAttenuation* AttenuationSettings; // 0x208
	FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x210
	FMulticastInlineDelegate OnForceFeedbackFinished; // 0x2c0
};

struct UYWidget_ArchetypeEntry : UYWidget {
	FMulticastInlineDelegate OnItemClicked; // 0x2c0
};

struct UMovieSceneSequencePlayer : UObject {
	FMulticastInlineDelegate OnPlay; // 0x410
	FMulticastInlineDelegate OnPlayReverse; // 0x420
	FMulticastInlineDelegate OnStop; // 0x430
	FMulticastInlineDelegate OnPause; // 0x440
	FMulticastInlineDelegate OnFinished; // 0x450
	EMovieScenePlayerStatus Status; // 0x460
	char bReversePlayback : 1; // 0x464
	UMovieSceneSequence* Sequence; // 0x468
	FFrameNumber StartTime; // 0x470
	int32_t DurationFrames; // 0x474
	float DurationSubFrames; // 0x478
	int32_t CurrentNumLoops; // 0x47c
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x480
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x498
	FMovieSceneSequenceReplProperties NetSyncProps; // 0x5e8
	TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x5f8
	UMovieSceneSequenceTickManager* TickManager; // 0x608
};

struct UEnvQueryTest_Distance : UEnvQueryTest {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct AYPickup_HealingItems_BP_C : AYPickup_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x490
	USkeletalMeshComponent* medicalItem; // 0x498
	FTransform MedKitLocation; // 0x4a0
};

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
};

struct UAnimStreamable : UAnimSequenceBase {
	int32_t NumFrames; // 0xa8
	EAnimInterpolationType Interpolation; // 0xac
	FName RetargetSource; // 0xb0
	UAnimBoneCompressionSettings* BoneCompressionSettings; // 0xc8
	UAnimCurveCompressionSettings* CurveCompressionSettings; // 0xd0
	bool bEnableRootMotion; // 0xd8
	ERootMotionRootLock RootMotionRootLock; // 0xd9
	bool bForceRootLock; // 0xda
	bool bUseNormalizedRootMotionScale; // 0xdb
};

struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x680
};

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x440
	float ArrowSize; // 0x444
	float ArrowLength; // 0x448
	float ScreenSize; // 0x44c
	char bIsScreenSizeScaled : 1; // 0x450
	char bTreatAsASprite : 1; // 0x450
};

struct UGameplayTask_WaitDelay : UGameplayTask {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x40
};

struct UPrimaryAssetLabel : UPrimaryDataAsset {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct UYPerkAction : UObject {
	AYPlayerCharacter* m_owningPlayerCharacter; // 0x28
	AYPlayerController_Match* m_owningPlayerController; // 0x30
	EYItemStatsType m_statsType; // 0x38
};

struct UTireType : UDataAsset {
	float FrictionScale; // 0x30
};

struct UYWidgetRootContainer : UYWidget {
	UCanvasPanel* m_rootPanel; // 0x2c0
	UCanvasPanel* m_backgroundPanel; // 0x2c8
	TWeakObjectPtr<UCanvasPanel> m_subScreenPanel; // 0x2d0
};

struct UYPlayerMutelist : UObject {
	TArray<FYPlayerMutelistEntry> m_mutelist; // 0x38
};

struct UButton : UContentWidget {
	USlateWidgetStyleAsset* Style; // 0x120
	FButtonStyle WidgetStyle; // 0x128
	FLinearColor ColorAndOpacity; // 0x3a0
	FLinearColor BackgroundColor; // 0x3b0
	EButtonClickMethod ClickMethod; // 0x3c0
	EButtonTouchMethod TouchMethod; // 0x3c1
	EButtonPressMethod PressMethod; // 0x3c2
	bool IsFocusable; // 0x3c3
	FMulticastInlineDelegate OnClicked; // 0x3c8
	FMulticastInlineDelegate OnDoubleClicked; // 0x3d8
	FMulticastInlineDelegate OnPressed; // 0x3e8
	FMulticastInlineDelegate OnReleased; // 0x3f8
	FMulticastInlineDelegate OnHovered; // 0x408
	FMulticastInlineDelegate OnUnhovered; // 0x418
};

struct UYMineralActorWidget : UYActorWidget {
	UEditableText* m_statusText; // 0x388
	UProgressBar* m_progressBar; // 0x390
};

struct UPlayer_InventoryAudioComponent_BP_C : UYInventoryAudioComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FDataTableRowHandle InventoryInteractionRowHandle; // 0xb8
	FDataTableRowHandle ConsumableInteractionRowHandle; // 0xc8
	FDataTableRowHandle WeaponInteractionRowHandle; // 0xd8
	FDataTableRowHandle SwapInteractionRowHandle; // 0xe8
	FDataTableRowHandle DropInteractionRowHandle; // 0xf8
};

struct UNodeMappingContainer : UObject {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct UCarryableComponent_BP_C : UYCarryableComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	UPlayerCarryingComponent_BP_C* PlayerCarryingComponent; // 0xb8
	FMulticastInlineDelegate OnStartedGettingCarried; // 0xc0
	FMulticastInlineDelegate OnStoppedGettingCarried; // 0xd0
	float ThrowSpeed; // 0xe0
	float DesiredDistance; // 0xe4
	float CollisionSphereRadiusOverride; // 0xe8
	FVector LastFrame; // 0xec
};

struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct UYMenuScreenDisconnected : UYScreenBase {
	UYScreenBase* m_entryScreenBP; // 0xb0
	UYScreenBase* m_homeScreenBP; // 0xb8
	UYScreenBase* m_legalAgreementsScreenBP; // 0xc0
};

struct ULayer : UObject {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct UWaterMeshComponent : UMeshComponent {
	int32_t ForceCollapseDensityLevel; // 0x468
	float TileSize; // 0x46c
	FIntPoint ExtentInTiles; // 0x470
	UMaterialInterface* FarDistanceMaterial; // 0x478
	float FarDistanceMeshExtent; // 0x480
	FVector RTWorldLocation; // 0x484
	FVector RTWorldSizeVector; // 0x490
	int32_t TessellationFactor; // 0x580
	float LODScale; // 0x584
};

struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UMaterialExpressionSceneColor : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct USlider : UWidget {
	float Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	float MinValue; // 0x11c
	float MaxValue; // 0x120
	FSliderStyle WidgetStyle; // 0x128
	EOrientation Orientation; // 0x468
	FLinearColor SliderBarColor; // 0x46c
	FLinearColor SliderHandleColor; // 0x47c
	bool IndentHandle; // 0x48c
	bool Locked; // 0x48d
	bool MouseUsesStep; // 0x48e
	bool RequiresControllerLock; // 0x48f
	float StepSize; // 0x490
	bool IsFocusable; // 0x494
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x498
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x4a8
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x4b8
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x4c8
	FMulticastInlineDelegate OnValueChanged; // 0x4d8
};

struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e8
	FConstraintProfileProperties DefaultProfile; // 0x1f8
};

struct UBTTask_FinishWithResult : UBTTaskNode {
	EBTNodeResult Result; // 0x70
};

struct UProgressBar : UWidget {
	FProgressBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x2a8
	USlateBrushAsset* BackgroundImage; // 0x2b0
	USlateBrushAsset* FillImage; // 0x2b8
	USlateBrushAsset* MarqueeImage; // 0x2c0
	float percent; // 0x2c8
	EProgressBarFillType BarFillType; // 0x2cc
	bool bIsMarquee; // 0x2cd
	FVector2D BorderPadding; // 0x2d0
	FDelegate PercentDelegate; // 0x2d8
	FLinearColor FillColorAndOpacity; // 0x2e8
	FDelegate FillColorAndOpacityDelegate; // 0x2f8
};

struct UBTTask_ClearKeys_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	TArray<FBlackboardKeySelector> KeysToClear; // 0xb0
};

struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
};

struct UCurveLinearColor : UCurveBase {
	FRichCurve FloatCurves[0x4]; // 0x30
	float AdjustHue; // 0x230
	float AdjustSaturation; // 0x234
	float AdjustBrightness; // 0x238
	float AdjustBrightnessCurve; // 0x23c
	float AdjustVibrance; // 0x240
	float AdjustMinAlpha; // 0x244
	float AdjustMaxAlpha; // 0x248
};

struct AAICtrl_Strider_BP_C : AAICtrl_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3f8
};

struct USlateWidgetStyleAsset : UObject {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct ASceneQuickMenuBase_BP_C : ASceneBase_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x430
	UWBP_Transition_C* TransitionWidget; // 0x438
};

struct UPlayFabMultiplayerAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x408
	UPlayFabJsonObject* RequestJsonObj; // 0x410
	UPlayFabJsonObject* ResponseJsonObj; // 0x418
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xb0
};

struct UMapMarker_DeliveryStation_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* Warning; // 0x2e8
	UImage* m_iconImage; // 0x2f0
	EYMapMarkerState IconState; // 0x2f8
};

struct UBTTask_ShareSense_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	float Distance; // 0xb0
	FBlackboardKeySelector TargetKey; // 0xb8
};

struct UYWidget_ItemComponentTextOfferItemsCategory : UYWidget_ItemComponentBase {
	UTextBlock* m_offerItemsCategoryText; // 0x300
};

struct UMovieSceneSequence : UMovieSceneSignedObject {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	FName Param; // 0x28
	int32_t Count; // 0x30
};

struct UMovieSceneTrackInstance : UObject {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct UYBTService_Aggro : UBTService_BlueprintBase {
	AYAIController* m_controllerAIOwner; // 0x98
	UYAIAggroComponent* m_cachedAIDataComponent; // 0xa0
	FBlackboardKeySelector m_combatActorKey; // 0xa8
};

struct UYOpenSettingsCommand : UYNavigationCommand {
	UYCommand_TopMenuButton_ChangeScreen* m_changeScreenCommandClass; // 0x28
	UYCommand_TopMenuButton_ChangeScreen* m_changeScreenCommand; // 0x30
};

struct UYWidget_SettingsToggle : UYWidget {
	UTextBlock* m_textBlock; // 0x2c0
	UCheckBox* m_checkBox; // 0x2c8
	FText m_labelText; // 0x2d0
	FMulticastInlineDelegate BP_OnNativeCheckboxStateChanged; // 0x2e8
};

struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct UDatasmithAssetUserData : UAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x458
};

struct UYWidget_ImageBase : UUserWidget {
	FMulticastInlineDelegate OnImageLoaded; // 0x260
	UImage* m_loadingIndicator; // 0x270
	bool m_loadingIndicatorVisible; // 0x278
	TSoftObjectPtr<UTexture2D> m_texture; // 0x280
	UMaterialInterface* m_material; // 0x2a8
	UImage* m_image; // 0x2b0
};

struct UYPlayerTriggerAISenseComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	AYPlayerCharacter* OwnerPlayerCharacter; // 0xb8
	FDataTableRowHandle Sense_Sprinting; // 0xc0
	FDataTableRowHandle Sense_Walking; // 0xd0
	FDataTableRowHandle Sense_Crouching; // 0xe0
	FDataTableRowHandle Sense_Smell; // 0xf0
	FDataTableRowHandle Sense_Landing; // 0x100
};

struct USequenceCameraShakeCameraStandIn : UObject {
	float FieldOfView; // 0x30
};

struct UYSoundNodeModulatorContinuous : USoundNode {
	FYModulatorContinuousParams m_volumeModulationParams; // 0x48
	FYModulatorContinuousParams m_pitchModulationParams; // 0xf8
};

struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct UBTTask_MeleeAttackCombo_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	UAnimMontage* AttackMontage; // 0xb0
	AYAICharacter* aiCharacter; // 0xb8
	AYAIController* AIController; // 0xc0
	FName MontageSectionToPlay; // 0xc8
	UAnimMontage* MontageToPlay; // 0xd0
	bool wasAborted; // 0xd8
};

struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct ULightningTypeManager_BP_C : UObject {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
	FLightningTuningDataInfo LightningTuningData; // 0x30
	bool IsLightningActive; // 0x50
	ULightningComponent_BP_C* LightningComponent; // 0x58
	FDataTableRowHandle LightningRowHandle; // 0x60
	FTimerHandle TimerHandle_InitialDelay; // 0x70
	float CurrentPhaseBlendDuration; // 0x78
};

struct UUI_RadialStationMinimap_WBP_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UImage* image_PlayerAngleCone; // 0x2c8
	UMap_WBP_C* Map_WBP; // 0x2d0
	URetainerBox* RetainerBox_Radial; // 0x2d8
	UMaterialInstanceDynamic* AngleCone_MID; // 0x2e0
	UYUserSettings* userSettings; // 0x2e8
};

struct UMovieSceneColorSection : UMovieSceneSection {
	FMovieSceneFloatChannel RedCurve; // 0xe8
	FMovieSceneFloatChannel GreenCurve; // 0x188
	FMovieSceneFloatChannel BlueCurve; // 0x228
	FMovieSceneFloatChannel AlphaCurve; // 0x2c8
};

struct UYGameRankComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnMatchFinished; // 0xb0
	FMulticastInlineDelegate BP_OnPlayerRankUpdated; // 0xc0
};

struct UConstructionSystemSaveGame : USaveGame {
	FString SaveSlotName; // 0x28
	uint32_t UserIndex; // 0x38
	FConstructionSystemSavePlayerInfo PlayerInfo; // 0x40
	TArray<FConstructionSystemSaveConstructedItem> ConstructedItems; // 0x90
};

struct UYPerkComponent : UActorComponent {
	FMulticastInlineDelegate PerkChangedDelegate; // 0xb0
	FMulticastInlineDelegate BP_PerkActivatedDelegate; // 0xc0
	FMulticastInlineDelegate BP_PerkDeactivatedDelegate; // 0xd0
	TArray<FYPerk> m_activePerks; // 0xe8
	TArray<FYPerk> m_activePerksPrev; // 0xf8
	UYGameplayAttributesComponent* m_gpaComponent; // 0x108
	UYPlayerCharacterStateComponent* m_playerStateComponent; // 0x110
	UYHealthComponent* m_healthComponent; // 0x118
	UCharacterMovementComponent* m_characterMovementComponent; // 0x120
	TArray<UYPerkAction*> m_perkActionInstances; // 0x128
	TArray<UYPerkAction*> m_loadedPerkActions; // 0x138
};

struct UYWidget_SquadContainer : UYWidget {
	UVerticalBox* m_squadVBox; // 0x2c8
	UTextBlock* m_squadName; // 0x2d0
};

struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
};

struct UToFloatField : UFieldNodeFloat {
	UFieldNodeInt* IntField; // 0xb0
};

struct UGranularSynth : USynthComponent {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct UYPlayerMovementComponent : UCharacterMovementComponent {
	FYMovementStateData m_slideData; // 0xb20
	FYMovementStateData m_vehicleBoostData; // 0xb2c
	char bWantsToProne : 1; // 0xb38
	float PronedHalfHeight; // 0xb3c
	float MaxWalkSpeedProne; // 0xb40
	FMulticastInlineDelegate OnMovementImpact; // 0xb48
	FMulticastInlineDelegate OnMovementModeChangeData; // 0xb58
	FMulticastInlineDelegate OnJumpOff; // 0xb68
	UYPlayerCharacterStateComponent* m_ownerStateComponent; // 0xb98
	UYLedgeClimbingComponent* m_ledgeClimbingComponent; // 0xba0
	UYLeaningComponent* m_leaningComponent; // 0xba8
	UYGameplayAttributesComponent* m_ownerGameplayAttributeComponent; // 0xbb0
	bool m_disregardStateChanges; // 0xbcb
	float JumpZVelocityInAirJump; // 0xbcc
	float JumpXYMaxInAirJump; // 0xbd0
	UYEncumbranceEffects_DataAsset* m_encumbranceEffectDataAsset; // 0xbf8
};

struct UYWidgetProvider_Settings : UYWidgetProvider {
	TMap<FName, float> m_floatSettings; // 0x40
	TMap<FName, bool> m_boolSettings; // 0x90
	TMap<FName, int32_t> m_intSettings; // 0xe0
};

struct UMediaComponent : UActorComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
};

struct ASceneQuickMenuInventory_BP_C : ASceneQuickMenuBase_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x440
};

struct UPaperSprite : UObject {
	TArray<UTexture*> AdditionalSourceTextures; // 0x38
	FVector2D BakedSourceUV; // 0x48
	FVector2D BakedSourceDimension; // 0x50
	UTexture2D* BakedSourceTexture; // 0x58
	UMaterialInterface* DefaultMaterial; // 0x60
	UMaterialInterface* AlternateMaterial; // 0x68
	TArray<FPaperSpriteSocket> Sockets; // 0x70
	ESpriteCollisionMode SpriteCollisionDomain; // 0x80
	float PixelsPerUnrealUnit; // 0x84
	UBodySetup* BodySetup; // 0x88
	int32_t AlternateMaterialSplitIndex; // 0x90
	TArray<FVector4> BakedRenderData; // 0x98
};

struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct UControlRig : UObject {
	ERigExecutionType ExecutionType; // 0x45
	URigVM* VM; // 0x48
	FRigHierarchyContainer Hierarchy; // 0x50
	TSoftObjectPtr<UControlRigGizmoLibrary> GizmoLibrary; // 0x3b8
	TMap<FName, FCachedPropertyPath> InputProperties; // 0x3f0
	TMap<FName, FCachedPropertyPath> OutputProperties; // 0x440
	FControlRigDrawContainer DrawContainer; // 0x490
	UAnimationDataSourceRegistry* DataSourceRegistry; // 0x4c0
	TArray<FName> EventQueue; // 0x4c8
	FRigInfluenceMapPerEvent Influences; // 0x550
	UControlRig* InteractionRig; // 0x5b0
	UControlRig* InteractionRigClass; // 0x5b8
	TArray<UAssetUserData*> AssetUserData; // 0x5c0
};

struct UYLiveEventModifiers_DeveloperSettings : UDeveloperSettings {
	bool m_bEnableDebugLiveEventModifiers; // 0x38
	float m_matchFactionXPMultiplier; // 0x3c
	float m_matchSeasonXPMultiplier; // 0x40
	float m_matchProspectorLevelXPMultiplier; // 0x44
	float m_matchSoftCurrencyMultiplier; // 0x48
	EYSeasonalEvent m_currentSeasonalEvent; // 0x4c
};

struct UPlayerBotAquireInteractibleTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	int32_t counter; // 0xb0
	AActor* Owner; // 0xb8
	FName InteractTarget; // 0xc0
	float ClosestDist; // 0xc8
	AActor* ClosestActor; // 0xd0
	FString debugStr; // 0xd8
	FName SelfActor; // 0xe8
	float ClosestDistIn; // 0xf0
	TArray<AActor*> closeInteractibles; // 0xf8
	bool foundAny; // 0x108
	TArray<AActor*> AllInteractable; // 0x110
	FName IdleMoveToLocation; // 0x120
};

struct UWBP_CelebrationBacker_Panel_C_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UBackgroundBlur* BackgroundBlur_305; // 0x2c8
	UBorder* BG_ColorTint; // 0x2d0
	UImage* Gfx_BackerDark; // 0x2d8
	UImage* Gfx_BackerTint; // 0x2e0
	UImage* Gfx_BackerTint_2; // 0x2e8
	UImage* Gfx_BackerTint_3; // 0x2f0
	UImage* Gfx_BackerTint_4; // 0x2f8
	UImage* Gfx_BackerTint_5; // 0x300
	UImage* Gfx_CelebrationBacker; // 0x308
	UImage* Gfx_CelebrationBacker2; // 0x310
	UImage* Gfx_CelebrationBacker3; // 0x318
	UImage* Gfx_CelebrationBacker4; // 0x320
	UImage* Gfx_CelebrationBacker_Anim; // 0x328
	UImage* Gfx_CelebrationBacker_Anim2; // 0x330
	UImage* Gfx_CelebrationBacker_Anim3; // 0x338
	UImage* Gfx_CelebrationBacker_Anim4; // 0x340
	FColor BG_Color; // 0x348
	float BlurOpacity; // 0x34c
	float BGTintOpacity; // 0x350
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x80
};

struct UWBP_ScannerInterface_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FeedbackPositive_Anim; // 0x268
	UWidgetAnimation* FeedbackNegative_Anim; // 0x270
	UOverlay* FeedbackNegative; // 0x278
	UOverlay* FeedbackPositive; // 0x280
	UImage* Gfx_Background; // 0x288
	UImage* Gfx_Fill; // 0x290
	UImage* Gfx_Scanning; // 0x298
	UOverlay* Ready; // 0x2a0
	UOverlay* Scanning; // 0x2a8
	UOverlay* ScanningEmpty; // 0x2b0
	UWidgetSwitcher* States; // 0x2b8
	UWBP_InputKey_C* WBP_InputKey; // 0x2c0
	UMaterialInstanceDynamic* DMI_MainFrame; // 0x2c8
	ScannerInterfaceStates IsShowingScanResults; // 0x2d0
};

struct UWBP_Weight_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UImage* Icn_Weight_Lg; // 0x2c8
	UImage* Icn_Weight_Sm; // 0x2d0
	USizeBox* IconWeightSizeLg; // 0x2d8
	USizeBox* IconWeightSizeSm; // 0x2e0
	UTextBlock* Txt_WeightLg; // 0x2e8
	UTextBlock* Txt_WeightLoca; // 0x2f0
	UTextBlock* Txt_WeightSm; // 0x2f8
	UHorizontalBox* WeightLayout; // 0x300
	float IconOpacity; // 0x308
	bool UseLargeVariant; // 0x30c
	FText WeightVariantText; // 0x310
};

struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct UPlayFabCloudScriptAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0x158
	UPlayFabJsonObject* RequestJsonObj; // 0x160
	UPlayFabJsonObject* ResponseJsonObj; // 0x168
};

struct UControlRigComponent : UPrimitiveComponent {
	UControlRig* ControlRigClass; // 0x440
	FMulticastInlineDelegate OnPostInitializeDelegate; // 0x448
	FMulticastInlineDelegate OnPreSetupDelegate; // 0x458
	FMulticastInlineDelegate OnPostSetupDelegate; // 0x468
	FMulticastInlineDelegate OnPreUpdateDelegate; // 0x478
	FMulticastInlineDelegate OnPostUpdateDelegate; // 0x488
	TArray<FControlRigComponentMappedElement> MappedElements; // 0x498
	bool bResetTransformBeforeTick; // 0x4a8
	bool bResetInitialsBeforeSetup; // 0x4a9
	bool bUpdateRigOnTick; // 0x4aa
	bool bUpdateInEditor; // 0x4ab
	bool bDrawBones; // 0x4ac
	UControlRig* ControlRig; // 0x4b0
};

struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58
};

struct UEQSContext_CombatTarget_C : UEnvQueryContext_BlueprintBase {
	FName KeyNameCombatTarget; // 0x30
};

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct UInputSettings : UObject {
	TArray<FInputAxisConfigEntry> AxisConfig; // 0x28
	char bAltEnterTogglesFullscreen : 1; // 0x38
	char bF11TogglesFullscreen : 1; // 0x38
	char bUseMouseForTouch : 1; // 0x38
	char bEnableMouseSmoothing : 1; // 0x38
	char bEnableFOVScaling : 1; // 0x38
	char bCaptureMouseOnLaunch : 1; // 0x38
	char bDefaultViewportMouseLock : 1; // 0x38
	char bAlwaysShowTouchInterface : 1; // 0x38
	char bShowConsoleOnFourFingerTap : 1; // 0x39
	char bEnableGestureRecognizer : 1; // 0x39
	bool bUseAutocorrect; // 0x3a
	TArray<FString> ExcludedAutocorrectOS; // 0x40
	TArray<FString> ExcludedAutocorrectCultures; // 0x50
	TArray<FString> ExcludedAutocorrectDeviceModels; // 0x60
	EMouseCaptureMode DefaultViewportMouseCaptureMode; // 0x70
	EMouseLockMode DefaultViewportMouseLockMode; // 0x71
	float FOVScale; // 0x74
	float DoubleClickTime; // 0x78
	TArray<FInputActionKeyMapping> ActionMappings; // 0x80
	TArray<FInputAxisKeyMapping> AxisMappings; // 0x90
	TArray<FInputActionSpeechMapping> SpeechMappings; // 0xa0
	TSoftClassPtr<UObject> DefaultPlayerInputClass; // 0xb0
	TSoftClassPtr<UObject> DefaultInputComponentClass; // 0xd8
	FSoftObjectPath DefaultTouchInterface; // 0x100
	FKey ConsoleKey; // 0x118
	TArray<FKey> ConsoleKeys; // 0x130
};

struct UWBP_Collapsable_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* HighlightBracket_Anim; // 0x268
	UWidgetAnimation* Collapse_Anim; // 0x270
	USizeBox* ContentSizeOveride; // 0x278
	UNamedSlot* ItemHolder; // 0x280
	UTextBlock* Txt_Category; // 0x288
	UWBP_Dummy_Btn_C* WBP_Dummy_Btn; // 0x290
	FText HeadlineText; // 0x298
};

struct UYControllerSessionComponent : UActorComponent {
	FGuid m_instanceGuid; // 0xb0
	bool m_initiatedTravel; // 0xc8
};

struct UPlayerCarryingComponent_BP_C : UYPlayerCarryingComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x200
	float TimestampStartedCarrying; // 0x208
	float CurrentDistanceToOptimalLocation; // 0x20c
	float DesiredDistance; // 0x210
	float TraceRadius; // 0x214
	FHitResult LastHitResult; // 0x218
	UCarryableComponent_BP_C* CarryableComponent; // 0x2a8
	float MaxAllowedDistanceToOptimalLocation; // 0x2b0
	FVector CurrentCarryActorLocation; // 0x2b4
	FVector DesriedLocation; // 0x2c0
	FVector OptimalCarryActorLocation; // 0x2cc
	float GracePeriodPreventDrop; // 0x2d8
	FVector OffsetDragVector; // 0x2dc
	FYGameplayAttributeModifier CarryGPAModifier; // 0x2e8
	FGuid GuidAppliedGPAModifier; // 0x358
	float MaxDragVectorLength; // 0x368
	FVector DesriedLocation_LastFrame; // 0x36c
	FVector DragVelocity; // 0x378
	UCurveFloat* VelocityDistranceCurve; // 0x388
	float DragVelocityBase; // 0x390
};

struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UMovieSceneCameraCutSection : UMovieSceneSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct APaperGroupedSpriteActor : AActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x240
};

struct UYWidget_WeaponShop : UYWidget {
	UYWidget_BlueprintsOverview* m_blueprintsOverviewWidget; // 0x2c8
};

struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UMaterialExpressionHairAttributes : UMaterialExpression {
	char bUseTangentSpace : 1; // 0x40
};

struct UUI_TeamInfo_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBorder* PlayerTeamIDColor; // 0x268
	UTextBlock* PlayerTeamIDNumber; // 0x270
	UCanvasPanel* TeamInfoContainer; // 0x278
	AYPlayerState* AssociatedPlayerState; // 0x280
	FMulticastInlineDelegate OnTeamInfoInitialized; // 0x288
};

struct UMapMarker_Sabotage_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWidgetAnimation* Warning; // 0x2e8
	UImage* IconImage; // 0x2f0
	UTextBlock* MarkerText; // 0x2f8
};

struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UAnimCurveCompressionSettings : UObject {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct UYWidget_ItemListContainer : UYWidget {
	UTextBlock* m_headlineTextBlock; // 0x2c0
	UPanelWidget* m_listPanel; // 0x2c8
	int32_t m_identifyingFactionLevel; // 0x2d0
};

struct UMapMarker_AreaName_WBP_C : UYWidget_MapMarker {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	URichTextBlock* Txt_TitleLabel; // 0x2e8
	EYMapMarkerType m_markerDataType; // 0x2f0
	EYMapMarkerState m_markerState; // 0x2f1
};

struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UYPlayerIntroComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnReadyToStartTutorialIntro; // 0xb0
	FMulticastInlineDelegate BP_OnDropPodIntroStarted; // 0xc0
	FMulticastInlineDelegate BP_OnIntroFinished; // 0xd0
};

struct UItemComponent_StackAmountBase_WBP_C : UYWidget_ItemComponentTextAmount {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
};

struct UReportPlayerButtonType_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UYButton* Button; // 0x268
	UYTextBlock* Text; // 0x270
	EYReportPlayerType Type; // 0x278
	FMulticastInlineDelegate OnReportTypeClicked; // 0x280
};

struct ATemplateSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x248
	UTemplateSequencePlayer* SequencePlayer; // 0x260
	FSoftObjectPath TemplateSequence; // 0x268
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x280
};

struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x240
	int32_t MaxPlayers; // 0x244
	int32_t MaxPartySize; // 0x248
	char MaxSplitscreensPerConnection; // 0x24c
	bool bRequiresPushToTalk; // 0x24d
	FName SessionName; // 0x250
};

struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1b40
};

struct UNiagaraDataInterfaceSkeletalMesh : UNiagaraDataInterface {
	ENDISkeletalMesh_SourceMode SourceMode; // 0x38
	AActor* Source; // 0x40
	FNiagaraUserParameterBinding MeshUserParameter; // 0x48
	USkeletalMeshComponent* SourceComponent; // 0x68
	ENDISkeletalMesh_SkinningMode SkinningMode; // 0x70
	TArray<FName> SamplingRegions; // 0x78
	int32_t WholeMeshLOD; // 0x88
	TArray<FName> FilteredBones; // 0x90
	TArray<FName> FilteredSockets; // 0xa0
	FName ExcludeBoneName; // 0xb0
	char bExcludeBone : 1; // 0xb8
	bool bRequireCurrentFrameData; // 0xb9
};

struct UYAIDataComponent : UActorComponent {
	AYAISquad* m_squad; // 0xb0
	bool m_peacefull; // 0xb8
	AActor* m_combatTargetReplicated; // 0xc0
	EYAIState m_aiState; // 0xc8
	bool m_isAngry; // 0xc9
	FMulticastInlineDelegate AIStateChanged; // 0xd0
	FMulticastInlineDelegate BP_OnHitReactionStartedDelegate; // 0xe0
	FMulticastInlineDelegate BP_OnCombatTargetActorChanged; // 0xf0
	FMulticastInlineDelegate BP_OnDodgeStartedDelegate; // 0x100
	FMulticastInlineDelegate BP_OnProjectileSpawnedDelegate; // 0x110
};

struct AYLevelScript : ALevelScriptActor {
	FMulticastInlineDelegate OnIntentionTypeChangedDelegate; // 0x258
	FMulticastInlineDelegate OnScreenTypeChanged; // 0x268
	FMulticastInlineDelegate OnEOMLevelLoadedEvent; // 0x278
	UTexture2D* m_minimapBackground; // 0x288
	AYCharacterCustomizationExplicitCustomizationActor* m_explicitCustomizationActor; // 0x290
	AYCharacterCustomizationActor* m_playerCharacterCustomizationActor; // 0x298
	EYCameraIntentionType m_intention; // 0x2ac
	EYScreenType m_activeScreen; // 0x2ad
	EYApperenceCategoriesTypes m_activeApperenceMenu; // 0x2ae
	TArray<FYLevelMapRuntimeData> m_minimapData; // 0x2b0
};

struct UBTTask_FinishMontage_C : UYBTTask_PlayAnimation {
	FPointerToUberGraphFrame UberGraphFrame; // 0x110
	FBlackboardKeySelector MustFinishMontage; // 0x118
};

struct UYReplicationConnectionGraph : UNetReplicationGraphConnection {
	UYReplicationGraphNode_AlwaysRelevant_ForTeam* TeamConnectionNode; // 0x238
	UYReplicationGraphNode_AlwaysRelevant_ForOwner* OwnerConnectionNode; // 0x240
	UYReplicationGraphNode_GridSpatialization2D_ForOwner* SpatializatedOwnerConnetionNode; // 0x248
};

struct UYWidget_QuickMatchInfo : UYWidget {
	FMulticastInlineDelegate OnQuickMatchInfoToggled; // 0x2c0
	UYWidget_MatchResult* m_matchResults; // 0x2d0
};

struct UYWidget_SocialUserList : UYWidget {
	UYWidget_SocialUserEntry* m_entryWBP; // 0x2c0
	EYSocialUICategory m_socialUICategory; // 0x2c8
	TArray<UYWidget_SocialUserEntry*> m_entries; // 0x2d0
};

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct ATransformGizmoActor : AGizmoActor {
	UPrimitiveComponent* TranslateX; // 0x240
	UPrimitiveComponent* TranslateY; // 0x248
	UPrimitiveComponent* TranslateZ; // 0x250
	UPrimitiveComponent* TranslateYZ; // 0x258
	UPrimitiveComponent* TranslateXZ; // 0x260
	UPrimitiveComponent* TranslateXY; // 0x268
	UPrimitiveComponent* RotateX; // 0x270
	UPrimitiveComponent* RotateY; // 0x278
	UPrimitiveComponent* RotateZ; // 0x280
	UPrimitiveComponent* UniformScale; // 0x288
	UPrimitiveComponent* AxisScaleX; // 0x290
	UPrimitiveComponent* AxisScaleY; // 0x298
	UPrimitiveComponent* AxisScaleZ; // 0x2a0
	UPrimitiveComponent* PlaneScaleYZ; // 0x2a8
	UPrimitiveComponent* PlaneScaleXZ; // 0x2b0
	UPrimitiveComponent* PlaneScaleXY; // 0x2b8
};

struct UYSplineMovementComponent : UActorComponent {
	float m_replicateMovementFrequency; // 0xc0
	float m_minMovementSpeed; // 0xc4
	float m_maxMovementDescrepency; // 0xc8
	float m_movementSpeedCatchupMultiplier; // 0xcc
	float m_moveAheadMultiplier; // 0xd0
	TArray<FYReplicatedMovementActor> m_movementActors; // 0xd8
	FYReplicatedMovementData m_movementData; // 0xe8
	USplineComponent* m_splineComponent; // 0xf8
	float m_serverMovementSpeed; // 0x110
};

struct UExponentialHeightFogComponent : USceneComponent {
	float FogDensity; // 0x1f8
	float FogHeightFalloff; // 0x1fc
	FExponentialHeightFogData SecondFogData; // 0x200
	FLinearColor FogInscatteringColor; // 0x20c
	UTextureCube* InscatteringColorCubemap; // 0x220
	float InscatteringColorCubemapAngle; // 0x228
	FLinearColor InscatteringTextureTint; // 0x22c
	float FullyDirectionalInscatteringColorDistance; // 0x23c
	float NonDirectionalInscatteringColorDistance; // 0x240
	float DirectionalInscatteringExponent; // 0x244
	float DirectionalInscatteringStartDistance; // 0x248
	FLinearColor DirectionalInscatteringColor; // 0x24c
	float FogMaxOpacity; // 0x25c
	float StartDistance; // 0x260
	float FogCutoffDistance; // 0x264
	bool bEnableVolumetricFog; // 0x268
	float VolumetricFogScatteringDistribution; // 0x26c
	FColor VolumetricFogAlbedo; // 0x270
	FLinearColor VolumetricFogEmissive; // 0x274
	float VolumetricFogExtinctionScale; // 0x284
	float VolumetricFogDistance; // 0x288
	float VolumetricFogStaticLightingScatteringIntensity; // 0x28c
	bool bOverrideLightColorsWithFogInscatteringColors; // 0x290
};

struct UUI_ScannerPing_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Ping; // 0x268
	UImage* PingImage_01; // 0x270
	UImage* PingImageBlue; // 0x278
	float WidgetOpacity; // 0x280
	UMaterialInstanceDynamic* Material; // 0x288
	float Delay; // 0x290
	FVector Location; // 0x294
	FTimerHandle FakeTickTimerHandle; // 0x2a0
	USoundBase* SFX_PingSound; // 0x2a8
};

struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct UDecalComponent : USceneComponent {
	UMaterialInterface* DecalMaterial; // 0x1f8
	int32_t SortOrder; // 0x200
	float FadeScreenSize; // 0x204
	float FadeStartDelay; // 0x208
	float FadeDuration; // 0x20c
	float FadeInDuration; // 0x210
	float FadeInStartDelay; // 0x214
	char bDestroyOwnerAfterFade : 1; // 0x218
	FVector DecalSize; // 0x21c
};

struct UYGameViewportClient : UGameViewportClient {
	ETravelFailure m_cachedTravelFailureType; // 0x38a
	ENetworkFailure m_cachedNetworkFailureType; // 0x38b
};

struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UConstructionSystemComponent : UActorComponent {
	UMaterialInterface* CursorMaterial; // 0xb0
	UMaterialInterface* CursorInvalidMaterial; // 0xb8
	float TraceStartDistance; // 0xc0
	float TraceSweepRadius; // 0xc4
	AActor* ConstructionCameraActor; // 0xc8
	float ConstructionCameraTransitionTime; // 0xd0
	float ConstructionCameraTransitionExp; // 0xd4
	UUserWidget* BuildMenuUI; // 0xd8
	UConstructionSystemUIAsset* BuildMenuData; // 0xe0
	UUserWidget* BuildMenuUIInstance; // 0xe8
	EConstructionSystemToolType ActiveToolType; // 0xf0
	TMap<EConstructionSystemToolType, UConstructionSystemTool*> Tools; // 0xf8
};

struct AInteractiveFoliageActor : AStaticMeshActor {
	UCapsuleComponent* CapsuleComponent; // 0x250
	FVector TouchingActorEntryPosition; // 0x258
	FVector FoliageVelocity; // 0x264
	FVector FoliageForce; // 0x270
	FVector FoliagePosition; // 0x27c
	float FoliageDamageImpulseScale; // 0x288
	float FoliageTouchImpulseScale; // 0x28c
	float FoliageStiffness; // 0x290
	float FoliageStiffnessQuadratic; // 0x294
	float FoliageDamping; // 0x298
	float MaxDamageImpulse; // 0x29c
	float MaxTouchImpulse; // 0x2a0
	float MaxForce; // 0x2a4
	float Mass; // 0x2a8
};

struct UYWidget_NotificationItem : UYWidget {
	UTextBlock* instInfoText; // 0x2d0
	UYNotificationData* m_notificationData; // 0x2d8
	FDataTableRowHandle m_onItemShownSFX; // 0x2e0
};

struct UWBP_Dummy_Btn_C : UWBP_ButtonBase_Btn_C {
	UNamedSlot* ButtonContent; // 0x398
};

struct UWBP_Pickups_HUD_Item_C : UYWidget_ItemContainer {
	FPointerToUberGraphFrame UberGraphFrame; // 0x580
	UWidgetAnimation* WidgetOut_Anim; // 0x588
	UWidgetAnimation* WidgetIn_Anim; // 0x590
	UImage* Gfx_Chevrons; // 0x598
	UImage* Gfx_RarityMain; // 0x5a0
	UImage* Gfx_RarityOver; // 0x5a8
	UImage* Icn_WeaponImage_2; // 0x5b0
	UScaleBox* Image_Centered; // 0x5b8
	UScaleBox* ImageWeapon; // 0x5c0
	UItemComponent_Image_WBP_C* ItemComponent_Image_WBP; // 0x5c8
	UItemComponent_RarityColor_C* ItemComponent_RarityColor; // 0x5d0
	UItemComponent_StackAmountText_WBP_C* ItemComponent_StackAmountText_WBP; // 0x5d8
	UItemComponent_TextName_WBP_C* ItemComponent_TextName_WBP; // 0x5e0
	UImage* m_Image_ItemCenter; // 0x5e8
	UBorder* RarityColorBorder; // 0x5f0
	UTextBlock* Txt_Amount; // 0x5f8
	UTextBlock* Txt_ItemName; // 0x600
	FLinearColor rarityColor; // 0x608
	bool isWeapon; // 0x618
	float OnScreenDuration; // 0x61c
	FMulticastInlineDelegate OnFadedOut; // 0x620
};

struct UMatineeCameraShake : UCameraShakeBase {
	float OscillationDuration; // 0x98
	float OscillationBlendInTime; // 0x9c
	float OscillationBlendOutTime; // 0xa0
	FROscillator RotOscillation; // 0xa4
	FVOscillator LocOscillation; // 0xc8
	FFOscillator FOVOscillation; // 0xec
	float AnimPlayRate; // 0xf8
	float AnimScale; // 0xfc
	float AnimBlendInTime; // 0x100
	float AnimBlendOutTime; // 0x104
	float RandomAnimSegmentDuration; // 0x108
	UCameraAnim* Anim; // 0x110
	char bRandomAnimSegment : 1; // 0x118
	float OscillatorTimeRemaining; // 0x11c
	UCameraAnimInst* AnimInst; // 0x120
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	bool m_playParticlesOnInvisibleMesh; // 0x64
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct AAC_EvacShip_BP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UStaticMeshComponent* Cotech_LuggageBagClosed; // 0x248
	UStaticMeshComponent* Storage_CrateSmall; // 0x250
	UStaticMeshComponent* Storage_CrateLong; // 0x258
	UBoxComponent* Box1; // 0x260
	UBoxComponent* Box; // 0x268
	UStaticMeshComponent* InteriorProps_Crate_Closed; // 0x270
	USceneComponent* LuggageBase; // 0x278
	UYDamageComponent* YDamage; // 0x280
	UBoxComponent* KillCollision; // 0x288
	UBoxComponent* EscapePromptCollision; // 0x290
	UAudioComponent* IMA_EscapeShip_Engine_Burner; // 0x298
	UYActivityComponent* YActivityComponent; // 0x2a0
	UAudioComponent* IMA_EscapeShip_Engine; // 0x2a8
	UAudioComponent* ShipLeavingSoonAlarm; // 0x2b0
	UAudioComponent* UI_EoM_Timer; // 0x2b8
	UAudioComponent* IMA_EscapeShip_start; // 0x2c0
	UAudioComponent* IMA_EscapeShip_spawn; // 0x2c8
	UAudioComponent* IMA_EscapeShip_landing; // 0x2d0
	UAudioComponent* IMA_EscapeShip_idle; // 0x2d8
	UYProgressComponent* EscapeProgress; // 0x2e0
	UBoxComponent* EscapeCollision; // 0x2e8
	UPointLightComponent* AlarmLight1; // 0x2f0
	UPointLightComponent* AlarmLight; // 0x2f8
	UYMapMarkerComponent* YMapMarker; // 0x300
	UStaticMeshComponent* SM_EvacShip_Collision; // 0x308
	USkeletalMeshComponent* SkeletalMesh; // 0x310
	USceneComponent* DefaultSceneRoot; // 0x318
	FVector DropShipTakeOff_TL_ShipFlight_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x320
	float DropShipTakeOff_TL_ShipRotation_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x32c
	float DropShipTakeOff_TL_ScaleLerp_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x330
	ETimelineDirection DropShipTakeOff_TL__Direction_F38C9E804C580FC23AB45DBF14E3F6AB; // 0x334
	UTimelineComponent* DropShipTakeOff_TL; // 0x338
	FVector DropShipLanding_TL_ShipFlightLocation_742B6C39488045FC9A9406874B4AD948; // 0x340
	float DropShipLanding_TL_LandingLerp_742B6C39488045FC9A9406874B4AD948; // 0x34c
	ETimelineDirection DropShipLanding_TL__Direction_742B6C39488045FC9A9406874B4AD948; // 0x350
	UTimelineComponent* DropShipLanding_TL; // 0x358
	float DepartureAlarm_TL_LightAlarmLerp_23BAEFC841DA46A10E0DC0B6BD18E253; // 0x360
	ETimelineDirection DepartureAlarm_TL__Direction_23BAEFC841DA46A10E0DC0B6BD18E253; // 0x364
	UTimelineComponent* DepartureAlarm_TL; // 0x368
	FVector DropShipFlight_TL_ShipFlightRotation_BD22B96543FC2EDAB8593F996B438AE0; // 0x370
	FVector DropShipFlight_TL_ShipFlightLocation_BD22B96543FC2EDAB8593F996B438AE0; // 0x37c
	float DropShipFlight_TL_ShipScale_BD22B96543FC2EDAB8593F996B438AE0; // 0x388
	ETimelineDirection DropShipFlight_TL__Direction_BD22B96543FC2EDAB8593F996B438AE0; // 0x38c
	UTimelineComponent* DropShipFlight_TL; // 0x390
	AC_EscapeShip_State EvacShipState; // 0x398
	AYPlayerState* EscapingPlayerState; // 0x3a0
	float LandedTime; // 0x3a8
	float DepartureAlarmTime; // 0x3ac
	FMulticastInlineDelegate OnShipLeaving; // 0x3b0
	float EscapeTime; // 0x3c0
	TMap<AYPlayerCharacter*, float> EscapingPlayersMap; // 0x3c8
	FTimerHandle EscapeTH; // 0x418
	float PlayerEscapeUpdateFreq; // 0x420
	float EscapingPlayerCheckFreq; // 0x424
	float LandingTime; // 0x428
	float PauzeBeforeLandingTime; // 0x42c
	FString BIActorID; // 0x430
	FTimerHandle CurrentStateTimerHandle; // 0x440
	FMulticastInlineDelegate PlayDepartureAlarmOnTerminal; // 0x448
	float ShipScale; // 0x458
	FVector ShipFlightLocation; // 0x45c
	FVector ShipFlightRotation; // 0x468
	float GameTimePrevious; // 0x474
	FVector ShipFlightLocationPrevious; // 0x478
	FVector ShipFlightRotationPrevious; // 0x484
	bool isArriving; // 0x490
	float LandingLerp; // 0x494
	bool isLanding; // 0x498
	float LandingLerpPrevious; // 0x49c
	TArray<AYPlayerController*> EscapingControllers; // 0x4a0
	FMulticastInlineDelegate OnShipLanded; // 0x4b0
	AAA_EscapeShipTerminal_BP_C* TerminalActor; // 0x4c0
	APlayerController* PlayerControllerInstigator; // 0x4c8
	bool isLocalPlayerInShip; // 0x4d0
	FMulticastInlineDelegate OnStateChange; // 0x4d8
};

struct AYAudioVolume : AAudioVolume {
	TSoftObjectPtr<USoundCue> m_onEnterSoundCue; // 0x2e8
	USoundClass* m_soundClass; // 0x310
	float m_volumeMultiplier; // 0x318
	float m_pitchMultiplier; // 0x31c
	FVector m_soundLocation; // 0x320
	float m_fadeInDuration; // 0x32c
	float m_fadeVolumeLevel; // 0x330
	float m_fadeOutDuration; // 0x334
	float m_fadeOutVolumeLevel; // 0x338
	UAudioComponent* m_audioComponent; // 0x340
	AYPlayerCharacter* m_listeningPlayer; // 0x348
};

struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
};

struct UYWidget_ItemActionButton : UYWidget {
	UButton* m_itemActionButton; // 0x2d0
	UTextBlock* m_itemActionButtonText; // 0x2d8
	EYItemActionType m_itemActionType; // 0x2e0
	USlateWidgetStyleAsset* m_deactivatedButtonStyleAsset; // 0x2e8
	USlateWidgetStyleAsset* m_neutralButtonStyleAsset; // 0x2f0
	USlateWidgetStyleAsset* m_dangerButtonStyleAsset; // 0x2f8
	USlateWidgetStyleAsset* m_highlightButtonStyleAsset; // 0x300
};

struct UInterpGroupInst : UObject {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UMap_WBP_C : UYWidget_Map {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	UWidgetAnimation* Maximize; // 0x478
	UMapCursor_WBP_C* MapCursor_WBP; // 0x480
	UImage* MapOverlay_2_Img; // 0x488
	bool EnableSocialMarkers; // 0x490
	bool DisableMinimapSpecificElems; // 0x491
};

struct UYWidgetProvider_InMatchHUD : UYWidgetProvider {
	FMulticastInlineDelegate InventoryItemAdded; // 0x40
	FMulticastInlineDelegate HealthStimStateChanged; // 0x50
	TMap<FName, float> m_progressBarData; // 0x60
	TArray<FYStoredInventoryWeaponData> m_weaponsData; // 0xb0
	TArray<FYAbilityUIData> m_abilitiesData; // 0xc0
	TArray<UYCharacterAbilityComponent*> m_healthStimAbilityClasses; // 0xd0
};

struct UMatchPhaseListenerComponent_BP_C : USceneComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x200
	FMulticastInlineDelegate OnReplicatedMatchPhaseDataUpdated; // 0x208
	FMulticastInlineDelegate OnMatchPhaseVisualsUpdated; // 0x218
};

struct UYMetaQuestPlayerDataComponent : UActorComponent {
	TArray<UYMetaQuestPlayerInstanceComponent*> m_activeMetaQuestsInstances; // 0xb0
	FMulticastInlineDelegate OnMissionLineStepCreated; // 0xc0
	FMulticastInlineDelegate OnMissionLineStepCompleted; // 0xd0
	FMulticastInlineDelegate OnMissionCompleted; // 0xe0
	FMulticastInlineDelegate OnRewardsReceivedFromMetaQuest; // 0xf0
	UYMetaQuestPlayerInstanceComponent* m_missionInstanceComponent; // 0x100
	FYMissionRuntimeData m_missionRuntimeData; // 0x108
};

struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
};

struct UYActorDespawningComponent : UActorComponent {
	TArray<FYDespawnActorInfo> m_actorsToDespawn; // 0xb0
	float m_defaultDespawnDistance; // 0xc0
};

struct UYOnlineSubsystemPlayfabExternalFunctions : UObject {
	FYPlayfabCommonSettings m_commonSettings; // 0x28
};

struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UNavigationSystemV1 : UNavigationSystemBase {
	ANavigationData* MainNavData; // 0x38
	ANavigationData* AbstractNavData; // 0x40
	FName DefaultAgentName; // 0x48
	TSoftClassPtr<UObject> CrowdManagerClass; // 0x50
	char bAutoCreateNavigationData : 1; // 0x78
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x78
	char bAllowClientSideNavigation : 1; // 0x78
	char bShouldDiscardSubLevelNavData : 1; // 0x78
	char bTickWhilePaused : 1; // 0x78
	char bSupportRebuilding : 1; // 0x78
	char bInitialBuildingLocked : 1; // 0x78
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x79
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x79
	float ActiveTilesUpdateInterval; // 0x7c
	ENavDataGatheringModeConfig DataGatheringMode; // 0x80
	float DirtyAreaWarningSizeThreshold; // 0x84
	TArray<FNavDataConfig> SupportedAgents; // 0x88
	FNavAgentSelector SupportedAgentsMask; // 0x98
	TArray<ANavigationData*> NavDataSet; // 0xa0
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xb0
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xd0
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xe0
	FNavigationSystemRunMode OperationMode; // 0x1cc
	float DirtyAreasUpdateFreq; // 0x15cc
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct UYEZProfileManager : UObject {
	FString m_uploadShare; // 0x28
	FYEzProfileInitializationData m_initializationData; // 0x38
	FYEzProfileRuntimeData m_runtimeData; // 0x50
	float m_defaultEZProfileTime; // 0xd0
	float m_defaultEZNetProfileTime; // 0xd4
};

struct AYPlayerController : APlayerController {
	FMulticastInlineDelegate OnInputStackChanged; // 0x5b0
	UInputComponent* m_genericInputComponent; // 0x5c0
	UYControllerPlayerMapMarkerComponent* m_mapmarkerComponent; // 0x5c8
	FMulticastInlineDelegate OnMatchmakingResponseEvent; // 0x5d0
	AController* m_parentController; // 0x630
	UYVivoxComponent* m_vivoxComponent; // 0x638
	UYPlayerInitializationComponent* m_initializationComponent; // 0x640
	UYControllerInventoryBackendComponent* m_controllerInventoryBackendComponent; // 0x648
	UYControllerQuestComponent* m_questComponent; // 0x650
	UYControllerPlayerQuarterComponent* m_playerQuarterComponent; // 0x658
	UYPlayerPassiveGeneratorsComponent* m_playerPassiveGeneratorsComponent; // 0x660
	UYControllerInventoryRuntimeComponent* m_controllerInventoryRuntimeComponent; // 0x668
	UYControllerInventoryInsuranceComponent* m_controllerInventoryInsuranceComponent; // 0x670
	UYPlayerFactionsProgressionComponent* m_playerFactionsProgressionComponent; // 0x678
	FMulticastInlineDelegate OnInputToggleMasteDebugWidgetBP; // 0x680
	FMulticastInlineDelegate OnItemAddedToInventory; // 0x690
	FMulticastInlineDelegate OnChatInputPressedDelegate; // 0x6b0
	FMulticastInlineDelegate OnCommWheelSelectedSignature; // 0x6c0
	FMulticastInlineDelegate OnNetCleanupDelegate; // 0x6d0
	TSoftClassPtr<UObject> m_debugComponentClassReference; // 0x6e0
	UInputComponent* m_preMatchInput; // 0x708
	UInputComponent* m_inMatchInput; // 0x710
	UInputComponent* m_endOfMatchInput; // 0x718
	UYControllerReleaseNotesComponent* m_releaseNoteComponent; // 0x720
	float m_analogCursorAcceleration; // 0x728
	float m_analogCursorMaxSpeed; // 0x72c
	float m_analogCursorStickySlowdown; // 0x730
	bool m_bugreporterOpen; // 0x734
	UYControllerTravelComponent* m_travelComponent; // 0x738
};

struct UYWidget_TechTreeColumn : UYWidget {
	TMap<int32_t, FYTechTreeNodeType> m_nodeUiData; // 0x2c8
	FMulticastInlineDelegate OnNodesCreated; // 0x318
};

struct USCS_Node : UObject {
	UObject* ComponentClass; // 0x28
	UActorComponent* ComponentTemplate; // 0x30
	FBlueprintCookedComponentInstancingData CookedComponentInstancingData; // 0x38
	FName AttachToName; // 0x80
	FName ParentComponentOrVariableName; // 0x88
	FName ParentComponentOwnerClassName; // 0x90
	bool bIsParentComponentNative; // 0x98
	TArray<USCS_Node*> ChildNodes; // 0xa0
	TArray<FBPVariableMetaDataEntry> MetaDataArray; // 0xb0
	FGuid VariableGuid; // 0xc0
	FName InternalVariableName; // 0xd0
};

struct UMaterialExpressionWorldPosition : UMaterialExpression {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UYWidget_ConfirmationModal : UYWidget_Composite {
	FMulticastInlineDelegate OnButtonPrimary; // 0x2c8
	FMulticastInlineDelegate OnButtonSecondary; // 0x2d8
};

struct UBP_AimAssist_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	USceneComponent* CameraManagerTransformComponent; // 0xb8
	ENUM_CharacterAimState CharacterAimState; // 0xc0
	FSTR_AimAssistWPNPresetDesc AimAssistWPNPresetLib; // 0xc4
	int32_t TraceSegments; // 0x10c
	float TraceRate; // 0x110
	float TargetPrecision; // 0x114
	FSTR_AimAssistTarget CurrentTarget; // 0x118
	float CurrentHoldTargetTime; // 0x140
	FRotator AutoAimRotator; // 0x144
	FVector CentralLineEndPoint; // 0x150
	FSTR_AimAssistPresetDesc AimAssistPresetLib; // 0x160
	float PreviousTargetAngle; // 0x190
	APawn* Pawn; // 0x198
	UCurveFloat* CurveMagnetismSens; // 0x1a0
	float AddedControlRotationAngleYaw; // 0x1a8
	float AddedControlRotationAnglePitch; // 0x1ac
	float AutoAimCoefficient; // 0x1b0
	float AutoAimAngle; // 0x1b4
	float MagnetismCoefficient; // 0x1b8
	float FinalMagnetismCoefficient; // 0x1bc
	float AutoAimDistanceCoefficient; // 0x1c0
	float MagnetismAngleCoefficient; // 0x1c4
	float MagnetismDistanceCoefficient; // 0x1c8
	float AutoAimAngleCoefficient; // 0x1cc
	float AngularVelocityYaw; // 0x1d0
	float AngularVelocityPitch; // 0x1d4
	float PlayerInputMax; // 0x1d8
	float MagnetismSensCoefficient; // 0x1dc
	float FrictionFraction; // 0x1e0
	FVector CameraVelocity; // 0x1e4
	FVector TargetVelocity; // 0x1f0
	float AdhesionFraction; // 0x1fc
	float ControllerYawInput; // 0x200
	float ControllerPitchInput; // 0x204
	float MouseYawInput; // 0x208
	float MousePitchInput; // 0x20c
	float FinalYawInput; // 0x210
	float FinalPitchInput; // 0x214
	EDrawDebugTrace DrawConeTraces; // 0x218
	TArray<EObjectTypeQuery> ObjectTypeForConeTrace; // 0x220
	FName Aim Assist WPN Preset Name; // 0x230
	bool Found Valid Target?; // 0x238
	bool Scanning?; // 0x239
	FName Default Aim Preset ; // 0x23c
	FTimerHandle DefiningTargetTimerHandle; // 0x248
};

struct UWBP_InputKeyNavigation_C : UWBP_InputKeyNavigationBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UImage* Gfx_Backer; // 0x288
	UHorizontalBox* m_NavigationKeyHolder_HorizontalBox; // 0x290
	UWBP_InputKeyNavigation_Btn_C* WBP_InputKeyNavigationItem; // 0x298
	TArray<FStructure_InputKeyNav> Nav Items; // 0x2a0
	bool ShowBacker; // 0x2b0
};

struct ULoadingScreenSettings : UDeveloperSettings {
	bool bShowFirstLoginVideo; // 0x38
	FLoadingScreenDescription SpinupScreen; // 0x40
	FLoadingScreenDescription DefaultSpinupScreen; // 0xd8
	FLoadingScreenDescription SeamlessTravelScreen; // 0x170
	FLoadingScreenDescription TutorialLoadingScreen; // 0x208
	FLoadingScreenDescription FirstMapLoadingScreen; // 0x2a0
	FLoadingScreenDescription SecondMapLoadingScreen; // 0x338
	FSlateFontInfo TipFont; // 0x3d0
	FSlateFontInfo LoadingFont; // 0x428
	float TipWrapAt; // 0x480
	TArray<FText> Tips; // 0x488
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x278
	char bEnabled : 1; // 0x288
};

struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
};

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct UYPingableComponent : UActorComponent {
	FDataTableRowHandle m_socialActorCommWheelEntry; // 0xb0
	bool m_isEnabled; // 0xc0
	FVector m_actorLocationOffset; // 0xc4
	float m_pingableRadius; // 0xd0
	bool m_disregardIfInSameTeam; // 0xd4
	AActor* m_teamRelevantActor; // 0xd8
	FMulticastInlineDelegate BP_OnPinged; // 0xe0
};

struct UYControllerInventoryRuntimeComponent : UActorComponent {
	UYPlayerDropComponent* m_cachedDropComponent; // 0xb0
	FMulticastInlineDelegate OnInventoryFull; // 0xb8
	FMulticastInlineDelegate OnInventoryWeightChanged; // 0xc8
};

struct UDynamicEntryBox : UDynamicEntryBoxBase {
	UUserWidget* EntryWidgetClass; // 0x1d8
};

struct UYWidget_ItemComponentLostOnDeath : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnItemLostOnDeathSet; // 0x300
};

struct UParticleModuleLight : UParticleModuleLightBase {
	bool bUseInverseSquaredFalloff; // 0x30
	bool bAffectsTranslucency; // 0x31
	bool bPreviewLightRadius; // 0x32
	float SpawnFraction; // 0x34
	FRawDistributionVector ColorScaleOverLife; // 0x38
	FRawDistributionFloat BrightnessOverLife; // 0x80
	FRawDistributionFloat RadiusScale; // 0xb0
	FRawDistributionFloat LightExponent; // 0xe0
	FLightingChannels LightingChannels; // 0x110
	float VolumetricScatteringIntensity; // 0x114
	bool bHighQualityLights; // 0x118
	bool bShadowCastingLights; // 0x119
};

struct UYDamageComponent : UActorComponent {
	TArray<AActor*> m_actorsToIgnoreDamage; // 0xb0
	FMulticastInlineDelegate BP_PreOnTakeDamage; // 0xc0
	FMulticastInlineDelegate OnTakeDamage; // 0xd0
	FMulticastInlineDelegate OnTakeDamagePost; // 0xe0
	FDataTableRowHandle m_damageInfoCauserRowHandle; // 0xf0
	EYDamageComponentType m_damageComponentType; // 0x100
	FYHitflashData m_hitflashData; // 0x108
	FYDOTDamageEntry m_dotEntry; // 0x138
	FYDealtDamageData m_lastDamageData; // 0x180
	FYDealtDamageData m_lastDealtDamageData; // 0x280
	FMulticastInlineDelegate OnDotStateChanged; // 0x380
	FMulticastInlineDelegate OnDealDamage; // 0x390
	FMulticastInlineDelegate OnDamageArrayUpdated; // 0x3c0
	float m_hitFlashDelta; // 0x3f0
	float m_lastTimeTakeDamage; // 0x3f4
	float m_lastTimeTakeDamageLocallyControlledActor; // 0x408
	float m_lastTimeDealtDamage; // 0x410
	float m_lastTimeDealtPlayerDamage; // 0x414
	float m_lastTimeAIMeleeAttackPerformed; // 0x418
	bool m_canBeDamaged; // 0x41c
	bool m_godmodeActivated; // 0x41d
	bool m_canBeDamagedByPlayers; // 0x41e
	bool m_canBeDamagedByAI; // 0x41f
	bool m_canBeDamagedByTurrets; // 0x420
	bool m_canOnlyBeDamageByFilteredTypes; // 0x421
	TMap<FGameplayTag, float> m_damageFilterObjectTypeMultipliers; // 0x428
	bool m_relevantForKillFeed; // 0x478
	bool m_relevantPerkOnKill; // 0x479
	bool m_produceHitFeedback; // 0x47a
	bool m_canBeHealedRegardlessOfTeam; // 0x47b
	bool m_canHealRegardlessOfTeam; // 0x47c
	bool m_canEverBeHealed; // 0x47d
	bool m_isDotActive; // 0x47e
	bool m_hitFlashActive; // 0x47f
	bool m_alwaysShowDamageNumbers; // 0x480
	TMap<FName, float> m_damageAreas; // 0x488
	FString m_weakSpotComponentIdentifier; // 0x4d8
	TArray<FDataTableRowHandle> m_weakSpotHitZones; // 0x4e8
};

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UWBP_BlurFullScreenBacker_Panel_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UBackgroundBlur* BlurFX; // 0x268
	UImage* Gfx_DarkenFillColor; // 0x270
	float BlurIntensity; // 0x278
};

struct AYWeaponCustomizationActor : AActor {
	EYVanityType m_currentVanityType; // 0x241
	UYSkeletalMeshComponentFOV* m_skeletalMeshComponentFOV; // 0x248
	USceneComponent* m_rootComponent; // 0x250
	USceneComponent* m_sceneBase; // 0x258
	USceneComponent* m_sceneRotationComponent; // 0x260
	UYCustomizationCameraComponent* m_customizationCameraComponent; // 0x268
	FYCustomizationVisualizationState m_visualizationState; // 0x270
	FDataTableRowHandle m_weaponPreviewEditorOnly; // 0x2e0
	FDataTableRowHandle m_vanityPreviewEditorOnly; // 0x2f0
	UDataTable* m_CameraDataTable; // 0x300
	FDataTableRowHandle m_charmCameraRowHandle; // 0x308
	FString m_charmSocketName; // 0x318
	FName m_currentFactionId; // 0x328
};

struct UAIPerceptionSystem : UAISubsystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct UWBP_CelebrationBacker_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* WidgetIdle_Anim; // 0x2c8
	UWidgetAnimation* WidgetIn_Anim; // 0x2d0
	UBorder* BG_ColorTint; // 0x2d8
	FColor BG_Color; // 0x2e0
};

struct UCH_PlayerStation_ABP_C : UYPlayerCharacterAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x350
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x358
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x380
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x4d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x500
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x580
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x680
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x700
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x7a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x840
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x8e0
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x980
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x9b0
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0xa60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xaa8
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0xad0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xb18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0xc70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0xc98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0xcc0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0xce8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0xd10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0xd38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0xd60
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0xd88
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0xdb0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0xdd8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0xe00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xe28
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0xea8
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0xf68
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x1058
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x1088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1108
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x1188
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x1228
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x1310
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x13f8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x1498
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x1560
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x1648
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x1678
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x1728
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x17c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x17f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x1878
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x1938
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x1a20
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1a50
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x1ad0
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x1b90
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x1c80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x1cb0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x1d30
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x1df0
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x1ed8
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x1f08
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x1fb8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x2000
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x2190
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x2320
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x23c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x2408
	FAnimNode_Root AnimGraphNode_Root_2; // 0x2430
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x2460
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x24a8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x24f0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x2538
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_3; // 0x25f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2610
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x26d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2790
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x27c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x28c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x28e8
	FAnimNode_RefPose AnimGraphNode_LocalRefPose_2; // 0x2988
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x29a0
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x2aa8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x2b58
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2b78
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x2b98
	FAnimNode_RefPose AnimGraphNode_LocalRefPose; // 0x2ca0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2cb8
	float FinterpDeltaPitch; // 0x2cd8
	float FinterpDeltaYaw; // 0x2cdc
	bool IsAiming; // 0x2ce0
	float LowerbodyBlend; // 0x2ce4
	bool DoRotationReset; // 0x2ce8
	float Speed; // 0x2cec
	bool IsJumping; // 0x2cf0
	bool IsCrouching; // 0x2cf1
	float Direction; // 0x2cf4
	float DeltaWorldRotationYaw; // 0x2cf8
	bool IsSprintng; // 0x2cfc
	bool doJump; // 0x2cfd
	float JumpTime; // 0x2d00
	float AimPitch; // 0x2d04
	float AimPitchMultiplier; // 0x2d08
	FRotator DeltaWorldRotation; // 0x2d0c
	bool isHacking; // 0x2d18
	UAnimMontage* AbilityMontage; // 0x2d20
	FRotator InitialRotationYaw; // 0x2d28
	FRotator CurrentRotationYaw; // 0x2d34
	FRotator CurrentRotationPitch; // 0x2d40
	float DeltaTimeX; // 0x2d4c
	AYPlayerCharacter* ShooterChar; // 0x2d50
	float DeltaSpeed; // 0x2d58
	float SpeedZ; // 0x2d5c
	float DeltaSpeedInterp; // 0x2d60
	float CrouchAlpha; // 0x2d64
	FRotator AimRotation; // 0x2d68
	FRotator DeltaRotationYaw; // 0x2d74
	float AimYaw; // 0x2d80
	FRotator DeltaRotationPitch; // 0x2d84
	bool IsRunOnDedicatedServer; // 0x2d90
	float IKAlpha; // 0x2d94
	FVector RHandIKEffector; // 0x2d98
	FVector LHandEffector; // 0x2da4
	FVector LHAndEffectorInterp; // 0x2db0
	FVector RHandEffectorInterp; // 0x2dbc
	bool IKHandEnabled; // 0x2dc8
	EYEquipedWeaponPoseType EquipedPoseType; // 0x2dc9
	bool IsDedicatedServer; // 0x2dca
	float AimposeAlpha; // 0x2dcc
	bool ForceFullbody; // 0x2dd0
	UAnimMontage* EmoteVariable; // 0x2dd8
	bool IsSliding; // 0x2de0
	float 3rdPLegIK; // 0x2de4
	bool isEmoting; // 0x2de8
	EYEquipedAnimationWeaponType EquipedWeaponType; // 0x2de9
	float JumpSpeedZ; // 0x2dec
	float InitialJumpVelocity; // 0x2df0
	EYDeviceCategory EquipedDeviceCategory; // 0x2df4
	bool force3rdPLanding; // 0x2df5
	bool IsVehicle; // 0x2df6
	FRotator Rotator; // 0x2df8
	FRotator CapsuleRotation; // 0x2e04
	FRotator cameraPawnDelta; // 0x2e10
	UYPlayerMovementComponent* PlayerMoveComponent; // 0x2e20
	UAnimMontage* DeathEmote; // 0x2e28
	bool IsStation; // 0x2e30
	float DirectionFlipped; // 0x2e34
	float SlideTiltADSAlpha; // 0x2e38
	float AdditiveAlphaFloat; // 0x2e3c
	UYWeaponPlayerControllerRuntimeComponent* WeaponRuntimeComponentRef; // 0x2e40
	float TurningDirection; // 0x2e48
	float FInterpDeltaSpringYaw; // 0x2e4c
	FFloatSpringState YawSpringState; // 0x2e50
	bool doJumpReset; // 0x2e58
	float FinterpDeltaSpringPitch; // 0x2e5c
	FFloatSpringState PitchSpringState; // 0x2e60
	UYPlayerCharacterStateComponent* CharStateComponent; // 0x2e68
	FRotator CameraAim1PPRotator; // 0x2e70
	FRotator InvertedDeltaWorldRotation; // 0x2e7c
	bool IsIdle; // 0x2e88
	float JumpUpNormTIme; // 0x2e8c
	float JumpDownNormTIme; // 0x2e90
	float TurnFinterpDeltaYaw; // 0x2e94
	bool IsTurningLeft; // 0x2e98
	bool IsTurning; // 0x2e99
};

struct UYNotificationsManager : UObject {
	TMap<FString, FYSocialNotification> m_pendingNotifications; // 0x28
	TMap<FString, FYSocialNotification> m_permamentPendingNotifications; // 0x78
};

struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7c0
};

struct UPaperFlipbookComponent : UMeshComponent {
	UPaperFlipbook* SourceFlipbook; // 0x468
	UMaterialInterface* Material; // 0x470
	float PlayRate; // 0x478
	char bLooping : 1; // 0x47c
	char bReversePlayback : 1; // 0x47c
	char bPlaying : 1; // 0x47c
	float AccumulatedTime; // 0x480
	int32_t CachedFrameIndex; // 0x484
	FLinearColor SpriteColor; // 0x488
	UBodySetup* CachedBodySetup; // 0x498
	FMulticastInlineDelegate OnFinishedPlaying; // 0x4a0
};

struct UWBP_UpgradeNode_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* inProgress_Anim; // 0x2c8
	UWidgetAnimation* Selected_Anim; // 0x2d0
	UWidgetAnimation* ScreenIn_Anim; // 0x2d8
	UWidgetAnimation* onHover_Anim; // 0x2e0
	UImage* Gfx_Bg_Fill; // 0x2e8
	UImage* Gfx_Bg_Highlight_Gradient; // 0x2f0
	UImage* Gfx_Bg_Lock; // 0x2f8
	UImage* Gfx_Bg_MaxLevel_Highlight; // 0x300
	UImage* Gfx_Bg_Stroke; // 0x308
	UImage* Gfx_Bg_Stroke_Selected; // 0x310
	UImage* Gfx_EmptyState_Line; // 0x318
	UImage* Gfx_inProgress_Highlight; // 0x320
	UImage* Gfx_Tier_Bg; // 0x328
	UImage* Gfx_Timer_Bg; // 0x330
	UImage* Gfx_Timer_Icn; // 0x338
	UImage* GfX_Upgrade_Icn; // 0x340
	UOverlay* Node; // 0x348
	UOverlay* Tier; // 0x350
	UTextBlock* TierNumber; // 0x358
	UCanvasPanel* Timer; // 0x360
	UTextBlock* TimerTxt; // 0x368
	USizeBox* UpgradeNode; // 0x370
	UProgressBar* UpgradeProgressBar; // 0x378
	UWBP_DragAndDrop_HighlightArea_C* WBP_DragAndDrop_HighlightArea; // 0x380
	UWBP_Dummy_Btn_C* WBP_Dummy_Btn_237; // 0x388
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x390
	bool IsLocked; // 0x398
	bool IsEmpty; // 0x399
	FText TierTxt; // 0x3a0
	bool IsDisabled; // 0x3b8
	bool isInProgress; // 0x3b9
	FYTechTreeNodeType Node Data; // 0x3c0
	FMulticastInlineDelegate OnNodeClicked; // 0x488
	bool IsSelected; // 0x498
	float UpdateTimer; // 0x49c
	bool ShowName; // 0x4a0
	UWBP_Generic_ToolTip_C* Tooltip; // 0x4a8
	FText TooltipUpgradeName; // 0x4b0
	bool ShowTooltip; // 0x4c8
	bool isMaxLevel; // 0x4c9
	FDataTableRowHandle onboardingRowHandle; // 0x4d0
	FDataTableRowHandle onboardingNodesRowHandle; // 0x4e0
};

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector startRotation; // 0x30
	char bInheritParent : 1; // 0x78
};

struct UYWidgetController_ItemsOverview : UYWidgetController {
	UYWidget_ItemContainer* m_cachedSelectedItemContainer; // 0x38
	TMap<FString, UYWidget_ItemContainer*> m_blueprintItemWidgetsMap; // 0x58
	TMap<FString, UYWidget_ItemContainer*> m_itemWidgetsMap; // 0xa8
};

struct UAnimBoneCompressionSettings : UObject {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x50
	double TilesStreamingTimeThreshold; // 0x60
	bool bLoadAllTilesDuringCinematic; // 0x68
	bool bRebaseOriginIn3DSpace; // 0x69
	float RebaseOriginDistance; // 0x6c
};

struct UTestScreenRoot : URootState {
	TSoftClassPtr<UObject> m_widgetBp; // 0x58
};

struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UYWidget_ItemComponentInsured : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnItemInsuredSet; // 0x300
};

struct UProceduralFoliageSpawner : UObject {
	int32_t randomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct UGameplayTask : UObject {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UYBBObject_MeleeAttackInfo : UObject {
	int32_t m_attackIndex; // 0x28
	UAnimMontage* m_animMontage; // 0x30
	FVector m_attackLocation; // 0x38
};

struct UTexture2DArray : UTexture {
	TextureAddress AddressX; // 0x130
	TextureAddress AddressY; // 0x131
	TextureAddress AddressZ; // 0x132
};

struct UVirtualTexture2D : UTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x100
	bool bContinuousUpdate; // 0x10c
	bool bSinglePhysicalSpace; // 0x10d
};

struct AYPlayerCharacter : AYCharacter {
	bool m_isJumpInputEnabled; // 0x540
	float m_maxDistanceDBNOReviveInteraction; // 0x544
	float m_maxDistanceSocialInteraction; // 0x548
	FName m_cameraComponentAttachName; // 0x550
	EYMeshViewState m_overridenViewState; // 0x558
	FMulticastInlineDelegate OnMeshViewStateChanged; // 0x560
	FVector m_baseCollisionBoxExtentCached; // 0x570
	FVector m_baseCollisionBoxExtentCrouched; // 0x57c
	FVector m_baseCollisionInitialRelativeLocation; // 0x588
	FVector m_baseCollisionCrouchedRelativeLocation; // 0x594
	FMulticastInlineDelegate YOnPlayerStateSet; // 0x5c8
	FMulticastInlineDelegate BP_OnJumped; // 0x5d8
	USkeletalMeshComponent* m_firstPersonMesh; // 0x5e8
	UYPlayerCharacterWeaponComponent* m_characterWeaponComponent; // 0x5f0
	UYPlayerCharacterStateComponent* m_stateComponent; // 0x5f8
	UYMapMarkerComponent* m_markerComponent; // 0x600
	AYPlayerController* m_associatedPlayerController; // 0x608
	UYObjectInteractionComponent* m_interactionComponent; // 0x610
	UYCommWheelVOComponent* m_commWheelVOComponent; // 0x618
	UYPlayerDropComponent* m_playerDropComponent; // 0x620
	UYCharacterEmoteComponent* m_emoteComponent; // 0x628
	UYCharacterCustomizationComponent* m_characterCustomizationComponent; // 0x630
	UYFootstepComponent* m_footstepComponent; // 0x638
	UYFoliageAudioComponent* m_foliageAudioComponent; // 0x640
	UYCharacterBagComponent* m_characterBagComponent; // 0x648
	UYArmorComponent* m_armorComponent; // 0x650
	UYPlayerMovementComponent* m_playerMovementComponent; // 0x658
	UYLedgeClimbingComponent* m_ledgeClimbingComponent; // 0x660
	UYFallingDamageComponent* m_fallingDamageComponent; // 0x668
	UCameraComponent* m_cameraComponent; // 0x670
	UBoxComponent* m_weakAreaComponent; // 0x678
	UBoxComponent* m_baseWeaponCollision; // 0x680
	UYCharacterLocationComponent* m_locationComponent; // 0x688
	UArrowComponent* m_deatchCameraAnimationTargetTransform; // 0x690
	UYStaminaComponent* m_staminaComponent; // 0x698
	UPhysicalMaterial* m_defaultPhysicalMaterial; // 0x6a0
	UPhysicalMaterial* m_defaultWeakSpotPhysicalMaterial; // 0x6a8
	UPhysicalMaterial* m_shieldPhysicalMaterial; // 0x6b0
	UPhysicalMaterial* m_shieldWeakSpotPhysicalMaterial; // 0x6b8
	FMulticastInlineDelegate BP_OnControllerChanged; // 0x6c0
	FMulticastInlineDelegate OnAbilityStateChanged; // 0x6d0
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UWBP_Settings_Provider_C : UYWidgetProvider_Settings {
	FPointerToUberGraphFrame UberGraphFrame; // 0x130
	TArray<FName> QualitySettings; // 0x138
	TMap<FString, FString> LanguagesToCultures; // 0x148
	FString OriginalCulture; // 0x198
	TMap<FString, FIntPoint> Resolutions; // 0x1a8
	int32_t OriginalResolutionIndex; // 0x1f8
	FMulticastInlineDelegate OnSettingInfoSet; // 0x200
	FMulticastInlineDelegate OnCloseSettingInfo; // 0x210
};

struct UItemComponent_Weight_C : UYWidget_ItemComponentBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	FMulticastInlineDelegate OnWeightTextSet; // 0x308
	FYInventoryItem UpdatedInventoryItem; // 0x318
};

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct AYPerkComponentTestActor : AYGPAComponentTestActor {
	UYPerkComponent* m_perkComponent; // 0x250
	UYDamageComponent* m_damageComponent; // 0x258
};

struct UBrushBuilder : UObject {
	FString BitmapFilename; // 0x28
	FString Tooltip; // 0x38
	char NotifyBadParams : 1; // 0x48
	TArray<FVector> Vertices; // 0x50
	TArray<FBuilderPoly> Polys; // 0x60
	FName Layer; // 0x70
	char MergeCoplanars : 1; // 0x78
};

struct UNiagaraPrecompileContainer : UObject {
	TArray<UNiagaraScript*> Scripts; // 0x28
	UNiagaraSystem* System; // 0x38
};

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct UGridSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
	int32_t row; // 0x4c
	int32_t RowSpan; // 0x50
	int32_t Column; // 0x54
	int32_t ColumnSpan; // 0x58
	int32_t Layer; // 0x5c
	FVector2D Nudge; // 0x60
};

struct UYVirtualCursorSettings : UDeveloperSettings {
	UUserWidget* VirtualCursorClass; // 0x38
	FRuntimeFloatCurve AccelerationCurve; // 0x40
	float MaxSpeed; // 0xc8
	float MaxSpeedHover; // 0xcc
	float DragCoefficient; // 0xd0
	float DragCoefficientHover; // 0xd4
	float MinSpeed; // 0xd8
	float DeadZone; // 0xdc
	float AccelerationMultiplier; // 0xe0
	float Size; // 0xe4
	int32_t MaxWidgetDepthToCheckForInteraction; // 0xe8
};

struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct UUI_RegisterScreen_WBP_C : UYWidget_Register {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	UWidgetAnimation* FadeIn; // 0x318
};

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28
};

struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct UMultiLineEditableTextBox : UTextLayoutWidget {
	FText Text; // 0x128
	FText HintText; // 0x140
	FDelegate HintTextDelegate; // 0x158
	FEditableTextBoxStyle WidgetStyle; // 0x168
	FTextBlockStyle TextStyle; // 0x960
	bool bIsReadOnly; // 0xbd0
	bool AllowContextMenu; // 0xbd1
	FVirtualKeyboardOptions VirtualKeyboardOptions; // 0xbd2
	EVirtualKeyboardDismissAction VirtualKeyboardDismissAction; // 0xbd3
	USlateWidgetStyleAsset* Style; // 0xbd8
	FSlateFontInfo Font; // 0xbe0
	FLinearColor ForegroundColor; // 0xc38
	FLinearColor BackgroundColor; // 0xc48
	FLinearColor ReadOnlyForegroundColor; // 0xc58
	FMulticastInlineDelegate OnTextChanged; // 0xc68
	FMulticastInlineDelegate OnTextCommitted; // 0xc78
};

struct UPhononReverbSourceSettings : UReverbPluginSourceSettingsBase {
	EIplSimulationType SourceReverbSimulationType; // 0x28
	float SourceReverbContribution; // 0x2c
};

struct UYAccountLinkingManager : UObject {
	FMulticastInlineDelegate OnAccountLinkingResult; // 0x28
	FMulticastInlineDelegate OnAccountLinkingResultAfterTimeout; // 0x38
	FMulticastInlineDelegate OnAccountLinkingResultBI; // 0x48
	FMulticastInlineDelegate OnAccountLinkingProcessUpdate; // 0x58
	FName m_targetSubsystemName; // 0x90
	FString m_targetPlatformName; // 0x98
	FString m_targetPlatformUserId; // 0xa8
	FString m_targetUserIdPlayFabMaster; // 0xb8
	FString m_sessionToken; // 0xc8
};

struct UYWidget_ItemComponentSubItems : UYWidget_ItemComponentBase {
	FMulticastInlineDelegate OnSubItemClicked; // 0x300
	FMulticastInlineDelegate OnSubItemHovered; // 0x310
	FMulticastInlineDelegate OnModificationSlotChangedEvent; // 0x330
	UPanelWidget* m_itemListPanelWidget; // 0x340
	UYWidget_ItemContainer* m_itemEntryWidget; // 0x348
	EYItemType m_exclusiveItemTypeOfSubItems; // 0x350
	EYVanityType m_exclusiveVanityTypeOfSubItems; // 0x351
	UPanelWidget* m_panelWidget; // 0x358
	bool m_forceSelectFirtEntry; // 0x360
	TArray<UYWidget_ItemContainer*> m_itemEntries; // 0x368
	UYWidget_ItemContainer* m_cachedSelectedItemContainer; // 0x378
	int32_t m_createdShopItemCount; // 0x384
};

struct AYScene : AActor {
	FYSceneRuntimeInitializationData m_initializationData; // 0x250
	FYSceneRuntimeData m_runtimeData; // 0x2e0
	FYSceneCompleteInitializationData m_completeData; // 0x2f0
	EYSceneState m_currentState; // 0x3a0
	AYCharacterCustomizationExplicitCustomizationActor* m_characterCustomizationActor; // 0x3b0
	TMap<EYSceneState, AActor*> m_overrideCameraActors; // 0x3b8
	UYWidget* m_activeWidget; // 0x408
};

struct UARTrackedObject : UARTrackedGeometry {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x278
	char bEditorPreVisOnly : 1; // 0x288
	char bDisabled : 1; // 0x288
	EStreamingVolumeUsage StreamingUsage; // 0x28c
};

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
};

struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UPrefabricatorProperty : UObject {
	FString PropertyName; // 0x28
	FString ExportedValue; // 0x38
	TArray<FPrefabricatorPropertyAssetMapping> AssetSoftReferenceMappings; // 0x48
	bool bIsCrossReferencedActor; // 0x58
	FGuid CrossReferencePrefabActorId; // 0x5c
};

struct UYControllerWeaponInspectionComponent : UActorComponent {
	FMulticastInlineDelegate OnInspectedInventoryItemUpdatedEvent; // 0xb0
};

struct UComboBoxString : UWidget {
	TArray<FString> DefaultOptions; // 0x108
	FString SelectedOption; // 0x118
	FComboBoxStyle WidgetStyle; // 0x128
	FTableRowStyle ItemStyle; // 0x518
	FMargin ContentPadding; // 0xce0
	float MaxListHeight; // 0xcf0
	bool HasDownArrow; // 0xcf4
	bool EnableGamepadNavigationMode; // 0xcf5
	FSlateFontInfo Font; // 0xcf8
	FSlateColor ForegroundColor; // 0xd50
	bool bIsFocusable; // 0xd78
	FDelegate OnGenerateWidgetEvent; // 0xd7c
	FMulticastInlineDelegate OnSelectionChanged; // 0xd90
	FMulticastInlineDelegate OnOpening; // 0xda0
};

struct UNavMovementComponent : UMovementComponent {
	FNavAgentProperties NavAgentProps; // 0xf0
	float FixedPathBrakingDistance; // 0x120
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x124
	char bUseAccelerationForPaths : 1; // 0x124
	char bUseFixedBrakingDistanceForPaths : 1; // 0x124
	FMovementProperties MovementState; // 0x125
	UObject* PathFollowingComp; // 0x128
};

struct UAICharExplosionComponent_BP_C : UActorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	FDataTableRowHandle ExplosionImpactHandle; // 0xb8
	FMulticastInlineDelegate OnAboutToExplode; // 0xc8
	UMaterialInterface* DecalMaterialBase; // 0xd8
	UMaterialInstanceDynamic* decalMID; // 0xe0
	FDataTableRowHandle PreExplodeAudio; // 0xe8
	AActor* ExplosionCauser; // 0xf8
	bool spawnDecal; // 0x100
	bool spawnAIonDeath; // 0x101
	FDataTableRowHandle Damage Info Apply Row Handle; // 0x108
};

struct UYWidget_ItemsImprovementScreen : UYWidget {
	UYWidget_PlayerItemsOverview* m_playerAllItemsWindow; // 0x2c0
	UYWidget_ItemContainer* m_priceAndRecipeInfo; // 0x2c8
};

struct AAL_Generic_BP_C : AAL_Base_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x460
	UArrowComponent* Arrow; // 0x468
	UTextRenderComponent* TextRender; // 0x470
	FText LocationName; // 0x478
	FText LocationSpecificID; // 0x490
};

struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
};

struct UChannel : UObject {
	UNetConnection* Connection; // 0x28
};

struct UPlayFabAuthenticationAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xa8
	UPlayFabJsonObject* RequestJsonObj; // 0xb0
	UPlayFabJsonObject* ResponseJsonObj; // 0xb8
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UYPlayerSocialStationComponent : UActorComponent {
	UDataTable* m_socialWheelEntriesDatatable; // 0xb0
	APlayerState* m_interactedPlayerState; // 0xb8
	FDataTableRowHandle m_squadInvite; // 0xc0
	FDataTableRowHandle m_squadInviteAccept; // 0xd0
	FDataTableRowHandle m_squadLeave; // 0xe0
	FDataTableRowHandle m_friendAdd; // 0xf0
	FDataTableRowHandle m_friendInvitePending; // 0x100
	FDataTableRowHandle m_friendInviteAccept; // 0x110
	FDataTableRowHandle m_friendRemove; // 0x120
	FDataTableRowHandle m_chatMute; // 0x130
	FDataTableRowHandle m_chatUnmute; // 0x140
	FDataTableRowHandle m_voiceChatMute; // 0x150
	FDataTableRowHandle m_voiceChatUnmute; // 0x160
	FDataTableRowHandle m_userReport; // 0x170
	FString m_targetUserId; // 0x180
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28
};

struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0x100
	float TextureMultiplier; // 0x104
};

struct UYWidgetController_ItemsOverviewMods : UYWidgetController_ItemsOverview {
	UYWidget_ItemContainer* m_cachedItemContainerToMod; // 0x2c0
};

struct USlateSettings : UObject {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x370
	char bIsLayerThumbnail : 1; // 0x380
	char bDisableTessellation : 1; // 0x380
	char bMobile : 1; // 0x380
	char bEditorToolUsage : 1; // 0x380
};

struct UYWidget_SpecificOffersOverview : UYWidget {
	FMulticastInlineDelegate OnBackButtonClicked; // 0x2d0
	UYWidget_OfferListContainer* m_offerListContainer; // 0x2f0
	TArray<FDataTableRowHandle> m_dummyOffers; // 0x2f8
	bool m_overrideOfferLayout; // 0x308
	int32_t m_overrideOfferLayoutIndex; // 0x30c
	EYPromotionType m_exclusivePromotionType; // 0x310
	EYGrantType m_exclusiveGrantType; // 0x311
};

struct UBTComposite_SimpleParallel : UBTCompositeNode {
	EBTParallelMode FinishMode; // 0x90
};

struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	UWorld* World; // 0x58
};

struct UStationDropPod_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x2f8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3b8
};

struct UYNotificationDataCollection : UObject {
	TArray<UYNotificationData*> m_notificationData; // 0x48
};

struct UYWidget_RankedCategories : UYWidget {
	TArray<EYRankedCategory> m_supportedCategories; // 0x2d0
	UYWidget_ItemCategoryEntry* m_selectedItemCategory; // 0x2e0
	TMap<UYWidget_ItemCategoryEntry*, EYRankedCategory> m_categoryEntryToRankedCategoryMap; // 0x2e8
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UYCharacterCloakComponent : UActorComponent {
	UMaterialInstanceDynamic* m_cloakMaterialMID; // 0xb0
	FYCloakRuntimeData m_runtimeData; // 0xb8
	TArray<FYCloakMaterialsInfo> m_nonCloakedMaterialInfos; // 0xd8
	FMulticastInlineDelegate OnCloakMIDStateChanged; // 0xe8
	FMulticastInlineDelegate OnCloakStateChanged; // 0xf8
};

struct UYWeaponResources : UObject {
	TMap<FName, FYWeaponAnimations> m_animationsPerWeaponRowName; // 0x28
};

struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x440
	UBodySetup* BrushBodySetup; // 0x448
};

struct UParticleModuleCollision : UParticleModuleCollisionBase {
	FRawDistributionVector DampingFactor; // 0x30
	FRawDistributionVector DampingFactorRotation; // 0x78
	FRawDistributionFloat MaxCollisions; // 0xc0
	EParticleCollisionComplete CollisionCompletionOption; // 0xf0
	TArray<EObjectTypeQuery> CollisionTypes; // 0xf8
	char bApplyPhysics : 1; // 0x110
	char bIgnoreTriggerVolumes : 1; // 0x110
	FRawDistributionFloat ParticleMass; // 0x118
	float DirScalar; // 0x148
	char bPawnsDoNotDecrementCount : 1; // 0x14c
	char bOnlyVerticalNormalsDecrementCount : 1; // 0x14c
	float VerticalFudgeFactor; // 0x150
	FRawDistributionFloat DelayAmount; // 0x158
	char bDropDetail : 1; // 0x188
	char bCollideOnlyIfVisible : 1; // 0x188
	char bIgnoreSourceActor : 1; // 0x188
	float MaxCollisionDistance; // 0x18c
};

struct UYMatchmakingManager : UObject {
	FMulticastInlineDelegate OnMatchmakingSettingsUpdated; // 0x28
};

struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	TArray<FVector> FloatData; // 0x50
};

struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70
};

struct UYSpotlightComponent : USpotLightComponent {
	float shadowCastDistance; // 0x360
	bool bCanEverCastShadow; // 0x364
	bool bCanEverAffectTranslucency; // 0x365
};

struct AController : AActor {
	APlayerState* PlayerState; // 0x248
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x258
	FName StateName; // 0x268
	APawn* Pawn; // 0x270
	ACharacter* Character; // 0x280
	USceneComponent* TransformComponent; // 0x288
	FRotator ControlRotation; // 0x2a8
	char bAttachToPawn : 1; // 0x2b4
	FMulticastInlineDelegate OnPawnStateChanged; // 0x2b8
	FMulticastInlineDelegate BP_OnPlayerStateChangedDelegate; // 0x2c8
};

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct UMovieSceneEasingExternalCurve : UObject {
	UCurveFloat* Curve; // 0x30
};

struct ANiagaraActor : AActor {
	UNiagaraComponent* NiagaraComponent; // 0x240
	char bDestroyOnSystemFinish : 1; // 0x248
};

struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UUI_ImageBase_WBP_C : UYWidget_ImageBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
};

struct AGameModeBase : AInfo {
	FString OptionsString; // 0x240
	AGameSession* GameSessionClass; // 0x250
	AGameStateBase* GameStateClass; // 0x258
	APlayerController* PlayerControllerClass; // 0x260
	APlayerState* PlayerStateClass; // 0x268
	AHUD* HUDClass; // 0x270
	APawn* DefaultPawnClass; // 0x278
	ASpectatorPawn* SpectatorClass; // 0x280
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x288
	AServerStatReplicator* ServerStatReplicatorClass; // 0x290
	AGameSession* GameSession; // 0x298
	AGameStateBase* GameState; // 0x2a0
	AServerStatReplicator* ServerStatReplicator; // 0x2a8
	FText DefaultPlayerName; // 0x2b0
	char bUseSeamlessTravel : 1; // 0x2c8
	char bStartPlayersAsSpectators : 1; // 0x2c8
	char bPauseable : 1; // 0x2c8
};

struct UYWidget_FullScreenCrosshairManager : UYWidget {
	UYWidget_FullScreenCrosshair* m_fullscreenCrosshairWidget; // 0x2c0
	UCanvasPanel* m_fullscreenCrosshairPanel; // 0x2c8
	UYWeaponPlayerControllerRuntimeComponent* m_weaponPlayerRuntimeComponent; // 0x2d0
};

struct UYPlayerCharacterAnimInstance : UAnimInstance {
	float m_relativeTargetingTransition; // 0x2b8
	bool m_adjustedTargeting; // 0x2bc
	FVector2D m_recoilForWeaponAnimation; // 0x2c0
	UAnimInstance* m_weaponAnimInstance; // 0x2c8
	FYPlayerMovementData m_playerMovementData; // 0x2d0
	FYPlayerAimDirectionData m_playerAimDirectionData; // 0x2fc
	FYPlayerEquippedWeaponData m_playerEquippedWeaponData; // 0x324
	FYPlayerLeaningData m_playerLeaningData; // 0x328
};

struct AYProjectile_Crusher_RockLight_BP_C : AYProjectile_BP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3a0
	UStaticMeshComponent* StaticMesh; // 0x3a8
	bool hasBeenThrown; // 0x3b0
};

struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct UTexture : UStreamableRenderAsset {
	FGuid LightingGuid; // 0x68
	int32_t LODBias; // 0x78
	TextureCompressionSettings CompressionSettings; // 0x7c
	TextureFilter Filter; // 0x7d
	ETextureMipLoadOptions MipLoadOptions; // 0x7e
	TextureGroup LODGroup; // 0x7f
	FPerPlatformFloat Downscale; // 0x80
	ETextureDownscaleOptions DownscaleOptions; // 0x84
	char SRGB : 1; // 0x85
	char bNoTiling : 1; // 0x85
	char VirtualTextureStreaming : 1; // 0x85
	char CompressionYCoCg : 1; // 0x85
	char bNotOfflineProcessed : 1; // 0x85
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x85
	TArray<UAssetUserData*> AssetUserData; // 0x88
};

struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
};

struct UYWidget_RankedHallOfFame : UYWidget {
	int32_t m_amountofTopPlayersToShow; // 0x2c0
	EYMatchmakeGameModeType m_gameModeToShow; // 0x2c4
	FYRankSeasonsData m_cachedPlayersRankedSeasonsData; // 0x2c8
};

struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	TArray<float> FloatData; // 0x50
};

struct UReportPlayer_WBP_C : UYWidget_PlayerSupport {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UCanvasPanel* CanvasPanel_CreateBug; // 0x340
	UCanvasPanel* CanvasPanel_QuickBug; // 0x348
	UCommonBackground_WBP_C* CommonBackround_WBP; // 0x350
	UYTextBlock* ContactDetails_2; // 0x358
	UYTextBlock* Description; // 0x360
	UEditableTextBox* EditableText_SupportTitle; // 0x368
	UImage* Image; // 0x370
	UImage* Image_1; // 0x378
	UImage* Image_12; // 0x380
	UImage* Image_Background; // 0x388
	UMultiLineEditableText* MultiEditable_SupportDescription; // 0x390
	UEditableTextBox* PlayerNameToReport; // 0x398
	UImage* QuickBug_Background; // 0x3a0
	UVerticalBox* ReportTypesVerticalBox; // 0x3a8
	UYTextBlock* Title; // 0x3b0
	UYButton* YButton_Cancel; // 0x3b8
	UYButton* YButton_Submit; // 0x3c0
	FMulticastInlineDelegate OnCancel; // 0x3c8
	FMulticastInlineDelegate OnSubmit; // 0x3d8
	FMulticastInlineDelegate OnWidgetSubmitConfirmationEnded; // 0x3e8
	int32_t titleMaxCharCount; // 0x3f8
	int32_t descriptionMaxCharCount; // 0x3fc
	bool ValidReport; // 0x400
	TArray<EYReportPlayerType> Types; // 0x408
	TArray<UReportPlayerButtonType_WBP_C*> RequestWidget; // 0x418
	EYReportPlayerType SelectedType; // 0x428
};

struct UWBP_FPS_Counter_HUD_Panel_C : UYWidget_FpsCounter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UTextBlock* fpsTextBlock; // 0x2d8
};

struct UWaterRuntimeSettings : UDeveloperSettings {
	ECollisionChannel CollisionChannelForWaterTraces; // 0x38
	TSoftObjectPtr<UMaterialParameterCollection> MaterialParameterCollection; // 0x40
	float WaterBodyIconWorldSize; // 0x68
	float WaterBodyIconWorldZOffset; // 0x6c
	FName DefaultWaterCollisionProfileName; // 0x70
};

struct UInteractiveGizmoManager : UObject {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
};

struct UYCharacterEmoteComponent : UActorComponent {
	FMulticastInlineDelegate BP_OnEmoted; // 0xb0
	FYSelectedEmote m_selectedEmote; // 0xc0
};

struct UGameplayTask_SpawnActor : UGameplayTask {
	FMulticastInlineDelegate SUCCESS; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x240
};

struct UEscMenu_SBP_C : UYScreenBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
};

struct AYGPAComponentTestActor : AActor {
	UYGameplayAttributesComponent* m_gameplayAttributesComponent; // 0x240
};

struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UAIAggroComponent_BP_C : UYAIAggroComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0x190
	UBlackboardComponent* BlackboardComponent; // 0x198
};

struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	FMulticastInlineDelegate onSuccess; // 0x28
	FMulticastInlineDelegate onFailure; // 0x38
};

struct UUI_PlayerHealthBar_WBP_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	USizeBox* BarContainerSizeBox; // 0x268
	UProgressBar* DBNOProgressBar; // 0x270
	UYTextBlock* TextBlock_DBNO; // 0x278
	UWBP_HealthBar_HUD_Item_C* UI_HealthBarWithDelta_WBP; // 0x280
	UYCharacterDBNOComponent* dbnoComp; // 0x288
	AYPlayerCharacter* playerCharacter; // 0x290
};

struct UYControllerStateInputComponent : UActorComponent {
	FMulticastInlineDelegate OnInputStateChanged; // 0xb0
	FYStateInputFrameCachedData m_inputData; // 0xc0
	UYPlayerCharacterStateComponent* m_characterStateComponent; // 0x128
};

struct UYStaminaComponent : UYResourceComponent {
	FMulticastInlineDelegate CurrentStaminaChangedDelegate; // 0xd0
	FMulticastInlineDelegate MaxStaminaChangedDelegate; // 0xe0
	FMulticastInlineDelegate StaminaUseAttemptedDelegate; // 0xf0
	int32_t m_staminaBelowTenPercent; // 0x100
	bool m_infiniteStaminaActivated; // 0x104
	FDataTableRowHandle m_staminaData; // 0x108
	float m_currentStamina; // 0x118
	UYPlayerCharacterStateComponent* m_characterStateComponent; // 0x120
	AYPlayerCharacter* m_character; // 0x128
	UYGameplayAttributesComponent* m_ownerGameplayAttributeComponent; // 0x130
};

struct UYWidget_ContractsMenu : UYWidgetView {
	EYFaction m_faction; // 0x340
	TMap<int32_t, FYContractUiData> m_contractsUiData; // 0x348
};

struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x40
};

struct UMovieSceneStringSection : UMovieSceneSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UWBP_SettingsContent_Game_C : UWBP_SettingsContentBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x340
	UWBP_Dropdown_Btn_C* WBP_Dropdown_Btn_Language; // 0x348
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_ChatEnabled; // 0x350
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_FOVMovementChanges; // 0x358
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinBrazilianPortugueseChannel; // 0x360
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinChineseChannel; // 0x368
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinEnglishChannel; // 0x370
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinFrenchChannel; // 0x378
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinGermanChannel; // 0x380
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinPolishChannel; // 0x388
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinRussianChannel; // 0x390
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinSpanishChannel; // 0x398
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_JoinTurkishChannel; // 0x3a0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Language; // 0x3a8
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_RotateMinimap; // 0x3b0
	UWBP_SettingEntry_Item_C* WBP_SettingEntry_Item_Subtitles; // 0x3b8
	UWBP_SettingSectionHeader_Item_C* WBP_SettingSectionHeader_Chat; // 0x3c0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_BrazilianPortugueseChannel; // 0x3c8
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_ChatEnabled; // 0x3d0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_ChineseChannel; // 0x3d8
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_EnglishChannel; // 0x3e0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_FOVMovementChanges; // 0x3e8
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_FrenchChannel; // 0x3f0
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_GermanChannel; // 0x3f8
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_PolishChannel; // 0x400
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_RotateMinimap; // 0x408
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_RussianChannel; // 0x410
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_SpanishChannel; // 0x418
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_Subtitles; // 0x420
	UWBP_ToggleText_Btn_C* WBP_ToggleText_Btn_TurkishChannel; // 0x428
};

struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct UYWidget_NotificationNumber : UYWidget {
	int32_t m_value; // 0x2c0
};

struct UGizmoCircleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x460
	float Radius; // 0x46c
	float Thickness; // 0x470
	int32_t NumSides; // 0x474
	bool bViewAligned; // 0x478
	bool bOnlyAllowFrontFacingHits; // 0x479
};

struct UMapBuildDataRegistry : UObject {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct UStereoLayerShapeEquirect : UStereoLayerShape {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UTimeSynthClip : UObject {
	TArray<FTimeSynthClipSound> Sounds; // 0x28
	FVector2D VolumeScaleDb; // 0x38
	FVector2D PitchScaleSemitones; // 0x40
	FTimeSynthTimeDef FadeInTime; // 0x48
	bool bApplyFadeOut; // 0x50
	FTimeSynthTimeDef FadeOutTime; // 0x54
	FTimeSynthTimeDef ClipDuration; // 0x5c
	ETimeSynthEventClipQuantization ClipQuantization; // 0x64
};

struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
};

struct AYSpline : AActor {
	bool bCheckCorrectLevel; // 0x240
	TArray<FName> Socketnames; // 0x248
};

struct UYBackendAuthorizationSettings : UDeveloperSettings {
	bool m_bUseAuth; // 0x38
	EYAuthorizationUsageType m_authType; // 0x39
	bool m_bBypassLoginScreen; // 0x3a
	bool m_autoLogin; // 0x3b
	FYLoginEntry m_loginUser; // 0x40
	bool m_useDevAuthTool; // 0x70
	TArray<FString> m_DevAuthToolCredentials; // 0x78
	bool m_enableBackendServer; // 0x88
};

struct UMaterialExpressionSobol : UMaterialExpression {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct UYWidget_ItemComponentImageFaction : UYWidget_ItemComponentBase {
	UYWidget_ImageBase* m_factionImage; // 0x300
	bool m_useLargeIcon; // 0x308
};

struct UDeveloperCreditsMenu_SBP_C : UYScreenBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
};

struct UAutomationTestSettings : UObject {
	TArray<FString> EngineTestModules; // 0x28
	TArray<FString> EditorTestModules; // 0x38
	FSoftObjectPath AutomationTestmap; // 0x48
	TArray<FEditorMapPerformanceTestDefinition> EditorPerformanceTestMaps; // 0x60
	TArray<FSoftObjectPath> AssetsToOpen; // 0x70
	TArray<FString> MapsToPIETest; // 0x80
	FBuildPromotionTestSettings BuildPromotionTest; // 0x90
	FMaterialEditorPromotionSettings MaterialEditorPromotionTest; // 0x280
	FParticleEditorPromotionSettings ParticleEditorPromotionTest; // 0x2b0
	FBlueprintEditorPromotionSettings BlueprintEditorPromotionTest; // 0x2c0
	TArray<FString> TestLevelFolders; // 0x2f0
	TArray<FExternalToolDefinition> ExternalTools; // 0x300
	TArray<FEditorImportExportTestDefinition> ImportExportTestDefinitions; // 0x310
	TArray<FLaunchOnTestSettings> LaunchOnSettings; // 0x320
	FIntPoint DefaultScreenshotResolution; // 0x330
	float PIETestDuration; // 0x338
};

struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct UMaterialFunctionInstance : UMaterialFunctionInterface {
	UMaterialFunctionInterface* Parent; // 0x40
	UMaterialFunctionInterface* Base; // 0x48
	TArray<FScalarParameterValue> ScalarParameterValues; // 0x50
	TArray<FVectorParameterValue> VectorParameterValues; // 0x60
	TArray<FTextureParameterValue> TextureParameterValues; // 0x70
	TArray<FFontParameterValue> FontParameterValues; // 0x80
	TArray<FStaticSwitchParameter> StaticSwitchParameterValues; // 0x90
	TArray<FStaticComponentMaskParameter> StaticComponentMaskParameterValues; // 0xa0
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0xb0
};

struct UYOSSFunctionLibrary : UObject {
	FMulticastInlineDelegate OnPlayerIdQueryDone; // 0x28
};

struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UGizmoTransformChangeStateTarget : UObject {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct UCameraShakeBase : UObject {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	APlayerCameraManager* CameraManager; // 0x30
};

struct UPaperTileSet : UObject {
	FIntPoint TileSize; // 0x28
	UTexture2D* TileSheet; // 0x30
	TArray<UTexture*> AdditionalSourceTextures; // 0x38
	FIntMargin BorderMargin; // 0x48
	FIntPoint PerTileSpacing; // 0x58
	FIntPoint DrawingOffset; // 0x60
	int32_t WidthInTiles; // 0x68
	int32_t HeightInTiles; // 0x6c
	int32_t AllocatedWidth; // 0x70
	int32_t AllocatedHeight; // 0x74
	TArray<FPaperTileMetadata> PerTileData; // 0x78
	TArray<FPaperTileSetTerrain> Terrains; // 0x88
	int32_t TileWidth; // 0x98
	int32_t TileHeight; // 0x9c
	int32_t Margin; // 0xa0
	int32_t Spacing; // 0xa4
};

struct UModalDialogShopOfferPurchase_WBP_C : UYWidget_ModalDialogShopOfferPurchase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3c8
	UWidgetAnimation* AnimateOut; // 0x3d0
	UWidgetAnimation* animateIn; // 0x3d8
	UWidgetAnimation* Purchase_Successfull_anim; // 0x3e0
	UWidgetAnimation* Purchase_Pending_anim; // 0x3e8
	UCanvasPanel* CanvasPanel_3; // 0x3f0
	UCommonBackground_WBP_C* CommonBackround_WBP; // 0x3f8
	UWidgetSwitcher* CurrencySwitcher; // 0x400
	UImage* glow; // 0x408
	UImage* glow2; // 0x410
	UImage* gradient; // 0x418
	UHardCurrencyDisplay_WBP_C* HardCurrencyDisplay_WBP; // 0x420
	UImage* Image_2; // 0x428
	UImage* Image_12; // 0x430
	UImage* Image_79; // 0x438
	UImage* Image_81; // 0x440
	UYTextBlock* quantityLimitTextBlock; // 0x448
	UHorizontalBox* quantitySelectionHorizontalBox; // 0x450
	USoftCurrencyDisplay_WBP_C* SoftCurrencyDisplay_WBP; // 0x458
	USpacer* Spacer_1; // 0x460
	USpacer* Spacer_2; // 0x468
	UImage* whiteflash; // 0x470
	FDataTableRowHandle purchaseSuccessfulSound; // 0x478
	FDataTableRowHandle purchaseFailedSound; // 0x488
	FDataTableRowHandle popupOpenedSound; // 0x498
};

struct UClothConfigNv : UClothConfigCommon {
	EClothingWindMethodNv ClothingWindMethod; // 0x28
	FClothConstraintSetupNv VerticalConstraint; // 0x2c
	FClothConstraintSetupNv HorizontalConstraint; // 0x3c
	FClothConstraintSetupNv BendConstraint; // 0x4c
	FClothConstraintSetupNv ShearConstraint; // 0x5c
	float SelfCollisionRadius; // 0x6c
	float SelfCollisionStiffness; // 0x70
	float SelfCollisionCullScale; // 0x74
	FVector Damping; // 0x78
	float Friction; // 0x84
	float WindDragCoefficient; // 0x88
	float WindLiftCoefficient; // 0x8c
	FVector LinearDrag; // 0x90
	FVector AngularDrag; // 0x9c
	FVector LinearInertiaScale; // 0xa8
	FVector AngularInertiaScale; // 0xb4
	FVector CentrifugalInertiaScale; // 0xc0
	float SolverFrequency; // 0xcc
	float StiffnessFrequency; // 0xd0
	float GravityScale; // 0xd4
	FVector GravityOverride; // 0xd8
	bool bUseGravityOverride; // 0xe4
	float TetherStiffness; // 0xe8
	float TetherLimit; // 0xec
	float CollisionThickness; // 0xf0
	float AnimDriveSpringStiffness; // 0xf4
	float AnimDriveDamperStiffness; // 0xf8
	EClothingWindMethod_Legacy WindMethod; // 0xfc
	FClothConstraintSetup_Legacy VerticalConstraintConfig; // 0x100
	FClothConstraintSetup_Legacy HorizontalConstraintConfig; // 0x110
	FClothConstraintSetup_Legacy BendConstraintConfig; // 0x120
	FClothConstraintSetup_Legacy ShearConstraintConfig; // 0x130
};

struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x240
};

struct USkinnedMeshComponent : UMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x470
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x478
	TArray<ESkinCacheUsage> SkinCacheUsage; // 0x480
	TArray<FVertexOffsetUsage> VertexOffsetUsage; // 0x490
	UPhysicsAsset* PhysicsAssetOverride; // 0x598
	int32_t ForcedLodModel; // 0x5a0
	int32_t MinLodModel; // 0x5a4
	float StreamingDistanceMultiplier; // 0x5b0
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x5c0
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x5f4
	char bOverrideMinLod : 1; // 0x5f6
	char bUseBoundsFromMasterPoseComponent : 1; // 0x5f6
	char bForceWireframe : 1; // 0x5f6
	char bDisplayBones : 1; // 0x5f6
	char bDisableMorphTarget : 1; // 0x5f6
	char bHideSkin : 1; // 0x5f7
	char bPerBoneMotionBlur : 1; // 0x5f7
	char bComponentUseFixedSkelBounds : 1; // 0x5f7
	char bConsiderAllBodiesForBounds : 1; // 0x5f7
	char bSyncAttachParentLOD : 1; // 0x5f7
	char bCanHighlightSelectedSections : 1; // 0x5f7
	char bRecentlyRendered : 1; // 0x5f7
	char bCastCapsuleDirectShadow : 1; // 0x5f7
	char bCastCapsuleIndirectShadow : 1; // 0x5f8
	char bCPUSkinning : 1; // 0x5f8
	char bEnableUpdateRateOptimizations : 1; // 0x5f8
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x5f8
	char bRenderStatic : 1; // 0x5f8
	char bIgnoreMasterPoseComponentLOD : 1; // 0x5f8
	char bCachedLocalBoundsUpToDate : 1; // 0x5f9
	char bForceMeshObjectUpdate : 1; // 0x5f9
	float CapsuleIndirectShadowMinVisibility; // 0x5fc
	FBoxSphereBounds CachedWorldSpaceBounds; // 0x610
	FMatrix CachedWorldToLocalTransform; // 0x630
};

struct UYWidgetController : UObject {
	UYWidget* m_ownerWidget; // 0x28
};

struct UYWidgetController_InvitesUserList : UYWidgetController_UserList {
	TArray<UYWidget_UserEntry*> m_outboundInviteEntries; // 0x30
	TArray<UYWidget_UserEntry*> m_inboundInviteEntries; // 0x40
	TArray<UYWidget_UserEntry*> m_searchResultEntries; // 0x50
	TArray<UYWidget_UserEntry*> m_recentlyPlayedEntries; // 0x60
};

struct UYWidget_Home : UYWidget {
	UCanvasPanel* m_subScreenPanel; // 0x2d0
	UYWidget_TopMenuBar* m_topMenuBar; // 0x2d8
	UYWidget_OutpostSquadNotificationOverview* m_outpostSquadNotificationOverview; // 0x2e0
	UYWidget_Inbox* m_inboxWidget; // 0x2e8
	UYWidget_InboxTopMenu* m_inboxTopMenu; // 0x2f0
};

struct AWaterBodyLake : AWaterBody {
	ULakeGenerator* LakeGenerator; // 0xe00
};

struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40
};

struct ADestructibleActor : AActor {
	UDestructibleComponent* DestructibleComponent; // 0x240
	FMulticastInlineDelegate OnActorFracture; // 0x248
};

struct ULevelActorContainer : UObject {
	TArray<AActor*> actors; // 0x28
};

struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x248
};

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UAsyncExecuteQuery : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UBorder : UContentWidget {
	EHorizontalAlignment HorizontalAlignment; // 0x120
	EVerticalAlignment VerticalAlignment; // 0x121
	char bShowEffectWhenDisabled : 1; // 0x122
	FLinearColor ContentColorAndOpacity; // 0x124
	FDelegate ContentColorAndOpacityDelegate; // 0x134
	FMargin Padding; // 0x144
	FSlateBrush Background; // 0x158
	FDelegate BackgroundDelegate; // 0x1e0
	FLinearColor BrushColor; // 0x1f0
	FDelegate BrushColorDelegate; // 0x200
	FVector2D DesiredSizeScale; // 0x210
	bool bFlipForRightToLeftFlowDirection; // 0x218
	FDelegate OnMouseButtonDownEvent; // 0x21c
	FDelegate OnMouseButtonUpEvent; // 0x22c
	FDelegate OnMouseMoveEvent; // 0x23c
	FDelegate OnMouseDoubleClickEvent; // 0x24c
};

struct UYSkillCalcManagerComponent : UActorComponent {
	FDataTableRowHandle m_glickoRatingStatHandle; // 0xb0
	FDataTableRowHandle m_glickoDerivationStatHandle; // 0xc0
	AYGameState_Match* m_cachedYGameState; // 0xd0
};

struct UYWidget_RewardsPopup : UYWidget {
	UYWidget_ItemContainer* m_itemEntryWidget; // 0x2c8
	TMap<int32_t, FYInventoryItem> m_itemsToShow; // 0x2d0
};

struct AWaterBody : AActor {
	UPhysicalMaterial* PhysicalMaterial; // 0x250
	float TargetWaveMaskDepth; // 0x258
	float MaxWaveHeightOffset; // 0x25c
	int32_t WaterBodyIndex; // 0x260
	bool bFillCollisionUnderWaterBodiesForNavmesh; // 0x264
	FUnderwaterPostProcessSettings UnderwaterPostProcessSettings; // 0x270
	EWaterBodyType WaterBodyType; // 0x7e0
	FWaterCurveSettings CurveSettings; // 0x7e8
	UMaterialInterface* WaterMaterial; // 0x808
	UMaterialInterface* UnderwaterPostProcessMaterial; // 0x810
	bool bAffectsLandscape; // 0x818
	bool bGenerateCollisions; // 0x819
	bool m_forceRefreshPhysicsGUID; // 0x81a
	UPhysicalMaterial* m_collisionPhysicsMaterial; // 0x820
	bool bOverrideWaterMesh; // 0x828
	UStaticMesh* WaterMeshOverride; // 0x830
	int32_t OverlapMaterialPriority; // 0x838
	FName CollisionProfileName; // 0x83c
	UWaterSplineComponent* SplineComp; // 0x848
	UWaterSplineMetadata* WaterSplineMetadata; // 0x850
	UMaterialInstanceDynamic* WaterMID; // 0x858
	UMaterialInstanceDynamic* UnderwaterPostProcessMID; // 0x860
	TArray<LazyObjectProperty> Islands; // 0x868
	TArray<LazyObjectProperty> ExclusionVolumes; // 0x878
	TWeakObjectPtr<ALandscapeProxy> Landscape; // 0x888
	FPostProcessSettings CurrentPostProcessSettings; // 0x890
	bool bCanAffectNavigation; // 0xde0
	UNavAreaBase* WaterNavAreaClass; // 0xde8
	UWaterWavesBase* WaterWaves; // 0xdf0
	bool bHasWaveSpectrumSettings; // 0xdf8
	bool bHasTerrainCarvingSettingsSettings; // 0xdf9
};

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct UYWidget_NotificationPanel : UYWidget {
	TMap<EYNotificationType, UYWidget_NotificationItem*> m_itemMap; // 0x2c0
	UVerticalBox* m_rightMiddleVerticalBox; // 0x310
	UVerticalBox* m_topRightVerticalBox; // 0x318
	UVerticalBox* m_centerVerticalBox; // 0x320
	UVerticalBox* m_leftMiddleVerticalBox; // 0x328
};

struct ANPC_Base_BP_C : AYNPCCharacter {
	FPointerToUberGraphFrame UberGraphFrame; // 0x740
	UYMapMarkerComponent* YMapMarker; // 0x748
	UYObjectInteractionComponent* YObjectInteraction; // 0x750
	UAudioComponent* Emote_Lobby_HollogramSpawn; // 0x758
	FName CurrentArchetype; // 0x760
	EYCustomizationBodyType bodyType; // 0x768
	float interactionPointerRotation; // 0x76c
	float DisableAnimUpdateDistance; // 0x770
	APawn* localPlayerChar; // 0x778
	TArray<USkeletalMeshComponent*> SkeletalMeshComponents; // 0x780
	bool IsOptimizationEnabled; // 0x790
	bool QuestCompleted; // 0x791
};

struct UPlayerBotTPTask_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	int32_t counter; // 0xb0
	AActor* Owner; // 0xb8
	FName combatTarget; // 0xc0
	float ClosestDist; // 0xc8
	AActor* ClosestActor; // 0xd0
	FString debugStr; // 0xd8
	FName TimeStampLastTP; // 0xe8
	float TimeToTP; // 0xf0
};

struct UAnimNotifier_PlayAISoundByTag_C : UAnimNotify {
	FGameplayTag AudioTag; // 0x38
	bool SuppressWhenDead; // 0x40
};

struct APRO_PlayerController_Login_BP_C : AYPlayerController {
	FPointerToUberGraphFrame UberGraphFrame; // 0x750
	FString commandLine; // 0x758
	float LoginTravelTimeout; // 0x768
};

struct UOpenPlayerSupportCommand_BP_C : UYNavigationCommand {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
};

struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x4d0
	int32_t NumCustomDataFloats; // 0x4e0
	TArray<float> PerInstanceSMCustomData; // 0x4e8
	int32_t InstancingRandomSeed; // 0x4f8
	int32_t InstanceStartCullDistance; // 0x4fc
	int32_t InstanceEndCullDistance; // 0x500
	TArray<int32_t> InstanceReorderTable; // 0x508
	int32_t NumPendingLightmaps; // 0x560
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x568
};

struct UWidgetComponent : UMeshComponent {
	EWidgetSpace Space; // 0x468
	EWidgetTimingPolicy TimingPolicy; // 0x469
	UUserWidget* WidgetClass; // 0x470
	FIntPoint DrawSize; // 0x478
	bool bManuallyRedraw; // 0x480
	bool bRedrawRequested; // 0x481
	float RedrawTime; // 0x484
	FIntPoint CurrentDrawSize; // 0x490
	bool bDrawAtDesiredSize; // 0x498
	FVector2D Pivot; // 0x49c
	bool bReceiveHardwareInput; // 0x4a4
	bool bWindowFocusable; // 0x4a5
	EWindowVisibility WindowVisibility; // 0x4a6
	bool bApplyGammaCorrection; // 0x4a7
	ULocalPlayer* OwnerPlayer; // 0x4a8
	FLinearColor BackgroundColor; // 0x4b0
	FLinearColor TintColorAndOpacity; // 0x4c0
	float OpacityFromTexture; // 0x4d0
	EWidgetBlendMode BlendMode; // 0x4d4
	bool bIsTwoSided; // 0x4d5
	bool TickWhenOffscreen; // 0x4d6
	UBodySetup* BodySetup; // 0x4d8
	UMaterialInterface* TranslucentMaterial; // 0x4e0
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x4e8
	UMaterialInterface* OpaqueMaterial; // 0x4f0
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x4f8
	UMaterialInterface* MaskedMaterial; // 0x500
	UMaterialInterface* MaskedMaterial_OneSided; // 0x508
	UTextureRenderTarget2D* RenderTarget; // 0x510
	UMaterialInstanceDynamic* MaterialInstance; // 0x518
	bool bAddedToScreen; // 0x520
	bool bEditTimeUsable; // 0x521
	FName SharedLayerName; // 0x524
	int32_t LayerZOrder; // 0x52c
	EWidgetGeometryMode GeometryMode; // 0x530
	float CylinderArcAngle; // 0x534
	ETickMode TickMode; // 0x538
	UUserWidget* Widget; // 0x560
};

struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x240
};

struct UYControllerTransitionComponent : UActorComponent {
	FYTransitionRuntimeData m_runtimeData; // 0xb0
	UYWidget* m_transitionObject; // 0xd8
	bool m_useTransitionWidget; // 0xf0
};

struct UYWidget_EomResultHeader : UYWidget {
	UTextBlock* m_localPlayerResultText; // 0x2c0
};

struct UWBP_ButtonBase_Btn_C : UYWidget_Button {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	FMulticastInlineDelegate OnClicked; // 0x2d0
	FMulticastInlineDelegate OnDoubleClicked; // 0x2e0
	FMulticastInlineDelegate OnHovered; // 0x2f0
	FMulticastInlineDelegate OnUnhovered; // 0x300
	FDataTableRowHandle ClickedSound; // 0x310
	FDataTableRowHandle HoveredSound; // 0x320
	FDataTableRowHandle UnhoveredSound; // 0x330
	FDataTableRowHandle PressedSound; // 0x340
	FDataTableRowHandle ReleasedSound; // 0x350
	FDataTableRowHandle DoubleClickedSound; // 0x360
	FString BIEventName; // 0x370
	FString BIEventLocation; // 0x380
	bool ConstructBIEventLocation; // 0x390
};

struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90
};

struct AYProjectile_NoPawnCollision_BP_C : AYProjectile {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
};

struct AYPickupActor : AActor {
	FString m_instigatorTagBI; // 0x240
	bool m_offsetSpawnLocationBySphereRadius; // 0x250
	EYPickupType m_pickupType; // 0x251
	FYPickupItem m_item; // 0x258
	EYLootSourceType m_lootSourceType; // 0x340
	FDataTableRowHandle m_pickUpSoundRowHandle; // 0x348
	FColor m_rarityColor; // 0x358
	bool m_showNotificationMessage; // 0x35c
	TSoftClassPtr<UObject> m_uiWidgetComponentClass; // 0x360
	UMeshComponent* m_meshComponent; // 0x388
	FVector m_meshScale; // 0x390
	FVector m_relativeMeshLocation; // 0x39c
	FRotator m_relativeMeshRotation; // 0x3a8
	USphereComponent* m_sphereComponent; // 0x3b8
	UYObjectInteractionComponent* m_objectInteractionComponent; // 0x3c0
	UYScannableComponent* m_scannableComponent; // 0x3c8
	UProjectileMovementComponent* m_projectileMovementComponent; // 0x3d0
	UYMapMarkerComponent* m_mapmarkerComponent; // 0x3d8
	UYActorUIComponent* m_actorUIComponent; // 0x3e0
	ACharacter* m_characterCollectingPickUpActor; // 0x3e8
	AYPlayerState* m_exclusivePlayerState; // 0x3f0
	FMulticastInlineDelegate BP_OnCollectedByPlayer; // 0x3f8
	bool m_isCollected; // 0x419
	float m_lastTimeReceivedMovementUpdate; // 0x41c
	float m_netUpdateFrequency; // 0x420
	bool m_LootToLootCollisionEnabled; // 0x424
};

struct UParticleModuleAttractorPoint : UParticleModuleAttractorBase {
	FRawDistributionVector Position; // 0x30
	FRawDistributionFloat Range; // 0x78
	FRawDistributionFloat Strength; // 0xa8
	char StrengthByDistance : 1; // 0xd8
	char bAffectBaseVelocity : 1; // 0xd8
	char bOverrideVelocity : 1; // 0xd8
	char bUseWorldSpacePosition : 1; // 0xd8
	char Positive_X : 1; // 0xd8
	char Positive_Y : 1; // 0xd8
	char Positive_Z : 1; // 0xd8
	char Negative_X : 1; // 0xd8
	char Negative_Y : 1; // 0xd9
	char Negative_Z : 1; // 0xd9
};

struct UWBP_Station_Provider_C : UYWidgetProvider_Station {
	FPointerToUberGraphFrame UberGraphFrame; // 0x68
};

struct UWBP_Generic_ToolTip_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* In_Anim; // 0x2c8
	UImage* Gfx_Shadow; // 0x2d0
	UTextBlock* Txt_Header; // 0x2d8
	UTextBlock* Txt_Header_Additional; // 0x2e0
	URichTextBlock* TxtRich_Description; // 0x2e8
	UWBP_BlurBacker_Panel_C* WBP_BlurBacker_Panel; // 0x2f0
	UWBP_Footer_C_Panel_C* WBP_BottomDeco; // 0x2f8
	UWBP_DividerHorizontal_VarA_Panel_C* WBP_DividerHorizontal_VarA_Panel; // 0x300
	UWBP_Footer_C_Panel_C* WBP_TopDeco; // 0x308
	FText Text; // 0x310
	bool showHeader; // 0x328
	bool ShowAdditionalHeader; // 0x329
	FText HeaderText; // 0x330
	FText AdditionalHeaderText; // 0x348
};

struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UYArmorComponent : UActorComponent {
	FMulticastInlineDelegate OnArmorUpdated; // 0xb0
	FMulticastInlineDelegate OnArmorDurabilityUpdated; // 0xc0
	FMulticastInlineDelegate OnArmorBrokenEvent; // 0xd0
	float m_effectiveHealthPerArmorConstant; // 0xe0
	float m_damageReductionScalarMin; // 0xe4
	float m_damageReductionScalarMax; // 0xe8
	TArray<FYActiveArmorData> m_activeArmor; // 0xf0
	TArray<FGuid> m_perksApplied; // 0x100
	TArray<FGuid> m_attributesApplied; // 0x110
};

struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct UWBP_FullMessage_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* WidgetIn_Anim; // 0x2c8
	UImage* Gfx_ColorFeedback; // 0x2d0
	UImage* Gfx_Shadow; // 0x2d8
	UImage* Gfx_SlantSecondary; // 0x2e0
	UTextBlock* Txt_PrimaryMessage; // 0x2e8
	FText Message; // 0x2f0
	bool bPlayAnimation; // 0x308
};

struct UBTDecorator_MinDistance_C : UBTDecorator_BlueprintBase {
	FBlackboardKeySelector Key Location; // 0xa0
	FBlackboardKeySelector Key Actor; // 0xc8
	float MinDistance; // 0xf0
	APawn* Controlled Pawn; // 0xf8
};

struct USocialUserList_WBP_C : UYWidget_SocialUserList {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UVerticalBox* entriesVerticalBox; // 0x2e8
	UWBP_Collapsable_C* WBP_Collapsable; // 0x2f0
	UYWidgetPoolManager* WidgetPoolManager; // 0x2f8
	UFriendUserEntry_WBP_C* cachedSelectedEntryWBP; // 0x300
	FMulticastInlineDelegate ContextMenuOpened; // 0x308
};

struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
};

struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0xb0
};

struct UYMeleeAttackComponent : UActorComponent {
	FDataTableRowHandle m_cachedWeaponTransportHandle; // 0xb0
	FDataTableRowHandle m_cachedImpactTransportHandle; // 0xc0
	EYWeaponTransportType m_weaponTransportType; // 0xd0
	bool m_canExecuteOnAuthority; // 0xd1
	bool m_canExecuteOnAutonomousProxy; // 0xd2
	bool m_canExecuteOnSimulatedProxy; // 0xd3
	bool m_enableSphereTraceInterpolation; // 0xd4
	int32_t m_sphereTraceInterpolationIterations; // 0xd8
	FMulticastInlineDelegate OnMeleeAttackStartedEvent; // 0xe0
	FMulticastInlineDelegate OnMeleeHitResultEvent; // 0xf0
	USkeletalMeshComponent* m_cachedSkeletalMeshComponent; // 0x100
	TArray<AActor*> m_actorsAlreadyHit; // 0x138
};

struct UYWidget_ModalDialogExitGame : UYWidget {
	UButton* m_giveFeedbackButton; // 0x2e0
	UButton* m_leaveGameButton; // 0x2e8
	UButton* m_backToGameButton; // 0x2f0
	FDataTableRowHandle m_audioAnimateIn; // 0x2f8
	FDataTableRowHandle m_audioAnimateOut; // 0x308
};

struct UWBP_CompatibleWeapon_Entry_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UImage* Gfx_WeaponIcon; // 0x2d0
	UWBP_Divider_Vertical_Panel_C* WBP_Divider_Vertical_Panel; // 0x2d8
	UTextBlock* WeaponLabel; // 0x2e0
	FText Label; // 0x2e8
	bool ShowDivide; // 0x300
	TSoftObjectPtr<UTexture2D> WeaponImage; // 0x308
};

struct UYWidget_TalkingIcon : UYWidget {
	bool m_isTalking; // 0x2c0
};

struct UDatasmithLightComponentTemplate : UDatasmithObjectTemplate {
	char bVisible : 1; // 0x30
	char CastShadows : 1; // 0x34
	char bUseTemperature : 1; // 0x34
	char bUseIESBrightness : 1; // 0x34
	float Intensity; // 0x38
	float Temperature; // 0x3c
	float IESBrightnessScale; // 0x40
	FLinearColor LightColor; // 0x44
	UMaterialInterface* LightFunctionMaterial; // 0x58
	UTextureLightProfile* IESTexture; // 0x60
};

struct UBodySetup : UBodySetupCore {
	FKAggregateGeom AggGeom; // 0x48
	char bAlwaysFullAnimWeight : 1; // 0xa0
	char bConsiderForBounds : 1; // 0xa0
	char bMeshCollideAll : 1; // 0xa0
	char bDoubleSidedGeometry : 1; // 0xa0
	char bGenerateNonMirroredCollision : 1; // 0xa0
	char bSharedCookedData : 1; // 0xa0
	char bGenerateMirroredCollision : 1; // 0xa0
	char bSupportUVsAndFaceRemap : 1; // 0xa0
	UPhysicalMaterial* PhysMaterial; // 0xa8
	FWalkableSlopeOverride WalkableSlopeOverride; // 0xb0
	FBodyInstance DefaultInstance; // 0x128
	FVector BuildScale3D; // 0x288
};

struct UPlayFabProfilesAPI : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnPlayFabResponse; // 0x30
	UPlayFabAuthenticationContext* CallAuthenticationContext; // 0xf8
	UPlayFabJsonObject* RequestJsonObj; // 0x100
	UPlayFabJsonObject* ResponseJsonObj; // 0x108
};

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UYMenuScreenEntry : UYScreenBase {
	UYScreenBase* m_homeScreenBP; // 0xb0
	UYScreenBase* m_legalAgreementsScreenBP; // 0xb8
	UYScreenBase* m_serverUnavailableScreenBP; // 0xc0
};

struct UBaseMediaSource : UMediaSource {
	FName playerName; // 0x80
};

struct UYWidget_RankedLeaderboardBig : UYWidget_RankedLeaderboardBase {
	int32_t m_amountofTopPlayersToShow; // 0x2d0
	TArray<FYLeaderBoardEntryLatentCreationData> m_leaderBoardEntryHandles; // 0x2d8
	TArray<FYLeaderBoardEntryCreatedData> m_cachedWidgets; // 0x2e8
};

struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UMonoWaveTableSynthPreset : UObject {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UYWidget_LobbyFactionList : UYWidget {
	FMulticastInlineDelegate OnFactionSelected; // 0x2c0
	UHorizontalBox* m_factionsContainer; // 0x2d0
	TMap<FName, UYWidget_LobbyFactionDetail*> m_factionsWidgets; // 0x2d8
};

struct UARGeoAnchorComponent : UARComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct UWBP_Options_Provider_C : UYWidgetProvider_Options {
	FPointerToUberGraphFrame UberGraphFrame; // 0x90
};

struct UItemComponent_Highlight_Stash_WBP_C : UYWidget_ItemComponentImageBackground {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	UWidgetAnimation* Anim_Highlight; // 0x308
	UImage* BackgroundImage; // 0x310
};

struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UYScreenBase : UYHierarchicalStateBase {
	UYWidget* m_screenWidgetClass; // 0x70
	UYWidget* m_alternativeWidgetClass; // 0x78
	UYWidget* m_screenWidgetInstance; // 0x80
	UYScreenSystemRoot* m_screenSystemRoot; // 0x88
	bool m_isSubScreen; // 0x90
	bool m_clearWidgetOnExit; // 0x91
	EYScreenType m_screenType; // 0x92
};

struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x240
};

struct UYLeaningComponent : UActorComponent {
	FMulticastInlineDelegate OnLeanDirectionSwitchedEvent; // 0xb0
	float m_leanTargetAngle; // 0xc0
	EYLeanTarget m_leanTarget; // 0xc4
	UYPlayerMovementComponent* m_playerMovementComponent; // 0xf0
	UYPlayerCharacterStateComponent* m_playerCharacterStateComponent; // 0xf8
};

struct UYWidget_TechTree : UYWidget {
	TMap<int32_t, FYTechTreeUIData> m_techtreeUiData; // 0x2c8
	TArray<UYWidget_TechTreeColumn*> m_columns; // 0x318
	FMulticastInlineDelegate OnNodesCreated; // 0x328
};

struct UWBP_SquadStatus_C : UYWidget {
	UWidgetAnimation* Ready_Anim; // 0x2c0
	UWidgetAnimation* WidgetIn_Anim; // 0x2c8
	UImage* Gfx_Backer; // 0x2d0
	UImage* Gfx_ReadyFlash; // 0x2d8
	UOverlay* StatusBadgeHolder; // 0x2e0
	UTextBlock* Txt_SquadStatus; // 0x2e8
};

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct APrefabricatorConstructionSnap : AActor {
	UPrefabricatorConstructionSnapComponent* ConstructionSnapComponent; // 0x240
};

struct UWBP_Inventory_PlayerSet_DropArea_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* DragDetected; // 0x268
	UImage* DropAreaImage; // 0x270
	FDataTableRowHandle SFX_DropSound; // 0x278
	FDataTableRowHandle SFX_CompatibleDragOverSoundEffect; // 0x288
	FMulticastInlineDelegate OnItemDropped; // 0x298
	FYInventoryItem DragDropItem; // 0x2a8
	int32_t DragDropItemComponentId; // 0x340
	TArray<EYItemType> StationUncompatibleItems; // 0x348
	TArray<EYItemType> MatchUncompatibleItems; // 0x358
	UYWidget_Inventory_Base* ParentWidget; // 0x368
	UUserWidget* ParentDropArea; // 0x370
	FMulticastInlineDelegate OnItemDroppedWithDragDropOperation; // 0x378
	FMulticastInlineDelegate OnInvalidDragDropOperationDetected; // 0x388
	FMulticastInlineDelegate OnValidDragDropOperationDetected; // 0x398
	FMulticastInlineDelegate OnItemSplitAfterDragBegun; // 0x3a8
};

struct AAA_EscapeShipTerminal_BP_C : AActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UParticleSystemComponent* BloomParticle; // 0x248
	UPointLightComponent* PointLight; // 0x250
	UAudioComponent* IMA_EVAC_TransmissionLoop; // 0x258
	USceneComponent* Scene1; // 0x260
	UStaticMeshComponent* large_antenna; // 0x268
	UMatchPhaseListenerComponent_BP_C* MatchPhaseListenerComponent_BP; // 0x270
	UYActivityComponent* YActivityComponent; // 0x278
	UTextRenderComponent* TextRender; // 0x280
	UStaticMeshComponent* Console1; // 0x288
	USceneComponent* Scene; // 0x290
	UYMapMarkerComponent* YMapMarker; // 0x298
	UYObjectInteractionComponent* YObjectInteraction; // 0x2a0
	float BeaconFlash_TL_EmissiveLerp_BD89A1DA4658AA6E946CE98710E7AAEA; // 0x2a8
	ETimelineDirection BeaconFlash_TL__Direction_BD89A1DA4658AA6E946CE98710E7AAEA; // 0x2ac
	UTimelineComponent* BeaconFlash-TL; // 0x2b0
	FMulticastInlineDelegate OnTerminalActivated; // 0x2b8
	AC_EscapeShipTerminal_Actor_ENUM EscapeShipTerminal_State; // 0x2c8
	FText TerminalActive_Text; // 0x2d0
	FText TerminalCanBeUsed_Text; // 0x2e8
	AYPlayerController_Match* interactingPlayer; // 0x300
	float StartOfMatchDownTime; // 0x308
	FTimerHandle MapMarkerCountdownTH; // 0x310
	UBP_EscapeMarkerData_C* MarkerDataEscape; // 0x318
	float TerminalCooldownTime; // 0x320
	AAC_EvacShip_BP_C* EvacShip; // 0x328
	TArray<AYPlayerController*> PlayersRegisteredToThisTerminal; // 0x330
	bool isRegistered; // 0x340
	TArray<AYPlayerController*> PlayersToBeRemoved; // 0x348
	bool isLocalPlayerRegistered; // 0x358
	bool isShipArriving; // 0x359
	bool DEBUG_IgnoreRegistration; // 0x35a
	TMap<AYPlayerController*, bool> PlayersInProximity; // 0x360
	bool wasInProximity; // 0x3b0
	bool isInProximity; // 0x3b1
	bool useProximityToInteract; // 0x3b2
	bool isEvacActive; // 0x3b3
	float ActivationDistance; // 0x3b4
	float MinHeightActivationDistance; // 0x3b8
	float MaxHeightActivationDistance; // 0x3bc
	FString BIActorID; // 0x3c0
	FString BIHookName; // 0x3d0
	FTransform LandingLocation; // 0x3e0
	FTransform CamTransform; // 0x410
	TArray<AYPlayerController*> PlayersToPlayEvacMusicFor; // 0x440
	bool isTutorialEvac; // 0x450
	FLinearColor BeaconLightColour; // 0x454
	AC_EscapeShip_State EscapeShipState; // 0x464
	FLinearColor BeaconColourArriving; // 0x468
	FLinearColor BeaconColourLanded; // 0x478
	FLinearColor BeaconColourAlmostLeaving; // 0x488
	FLinearColor BeaconColourShipLeft; // 0x498
	bool ShouldBeaconFlash; // 0x4a8
	float BeaconFlashPlayRate; // 0x4ac
	TArray<AEscape_Beacon_BP_C*> BeaconMeshes; // 0x4b0
	FLinearColor PlayerNearbyBeaconColour; // 0x4c0
	float PlayerNearbyBeaconFlashRate; // 0x4d0
	int32_t PlayersInProximityInt; // 0x4d4
	FLinearColor BeaconLightColourDefault; // 0x4d8
	FLinearColor BeaconColourDisabled; // 0x4e8
};

struct UPhononProbeComponent : USceneComponent {
	TArray<FVector> ProbeLocations; // 0x1f8
};

struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a0
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
};

struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x240
};

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50
};

struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct UPrefabricatorAssetCollection : UPrefabricatorAssetInterface {
	TArray<FPrefabricatorAssetCollectionItem> Prefabs; // 0x38
	uint32_t Version; // 0x48
};

struct UWBP_Item_Death_C : UYWidget {
	UWidgetAnimation* WidgetIn_Anim; // 0x2c0
	UImage* Icn_Death; // 0x2c8
	UOverlay* LostOverlay; // 0x2d0
};

struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UWBP_Credits_Entry_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	USpacer* Spacer_Center; // 0x2c8
	UYTextBlock* Txt_Name; // 0x2d0
	UYTextBlock* Txt_Role; // 0x2d8
	FStructure_DeveloperCredits CreditItemSetup; // 0x2e0
};

struct UYMatchScreenEndOfMatch : UYScreenBase {
	UYWidget* m_transitionWidgetClass; // 0xb0
};

struct UComboBox : UWidget {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
};

struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UMatineeCameraShake* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct UMaterialExpressionFunctionInput : UMaterialExpression {
	FExpressionInput Preview; // 0x40
	FName InputName; // 0x54
	FString Description; // 0x60
	FGuid ID; // 0x70
	EFunctionInputType inputType; // 0x80
	FVector4 PreviewValue; // 0x90
	char bUsePreviewValueAsDefault : 1; // 0xa0
	int32_t SortPriority; // 0xa4
	char bCompilingFunctionPreview : 1; // 0xa8
};

struct USpringArmComponent : USceneComponent {
	float TargetArmLength; // 0x1f8
	FVector SocketOffset; // 0x1fc
	FVector TargetOffset; // 0x208
	float ProbeSize; // 0x214
	ECollisionChannel ProbeChannel; // 0x218
	char bDoCollisionTest : 1; // 0x21c
	char bUsePawnControlRotation : 1; // 0x21c
	char bInheritPitch : 1; // 0x21c
	char bInheritYaw : 1; // 0x21c
	char bInheritRoll : 1; // 0x21c
	char bEnableCameraLag : 1; // 0x21c
	char bEnableCameraRotationLag : 1; // 0x21c
	char bUseCameraLagSubstepping : 1; // 0x21c
	char bDrawDebugLagMarkers : 1; // 0x21d
	float CameraLagSpeed; // 0x220
	float CameraRotationLagSpeed; // 0x224
	float CameraLagMaxTimeStep; // 0x228
	float CameraLagMaxDistance; // 0x22c
};

struct UYGamePlayerStartComponent : UActorComponent {
	float m_clusterRadius; // 0xb0
	TArray<FYPlayerStartCluster> m_clusters; // 0xb8
};

struct UYWidget_InboxMessageEntry : UYWidget {
	UButton* m_button; // 0x2e8
	UTextBlock* m_messageSenderText; // 0x2f0
	UTextBlock* m_messageSubjectText; // 0x2f8
};

struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct UMaterialExpressionSceneDepthWithoutWater : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
};

struct UTextureRenderTarget2DArray : UTextureRenderTarget {
	int32_t SizeX; // 0xe0
	int32_t SizeY; // 0xe4
	int32_t Slices; // 0xe8
	FLinearColor ClearColor; // 0xec
	EPixelFormat OverrideFormat; // 0xfc
	char bHDR : 1; // 0xfd
	char bForceLinearGamma : 1; // 0xfd
};

struct UYActivitiesManager : UActorComponent {
	TArray<UYActivityComponent*> m_activityComponents; // 0xb0
	int32_t m_spawnRequestsAllowedPerFrame; // 0xc0
	TArray<FYSpawnActivityActorTokenData> m_spawnTokens; // 0xc8
	TArray<EYActivityType> m_activeActivityTypes; // 0xd8
	FDataTableRowHandle m_activitySet; // 0xe8
	TArray<AYActivityActorManager*> m_activities; // 0xf8
	FMulticastInlineDelegate OnActivitiesSpawned; // 0x110
	FMulticastInlineDelegate OnSpawnTokensEmpty; // 0x120
};

struct UPaperTerrainComponent : UPrimitiveComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x440
	bool bClosedSpline; // 0x448
	bool bFilledSpline; // 0x449
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x450
	int32_t randomSeed; // 0x458
	float SegmentOverlapAmount; // 0x45c
	FLinearColor TerrainColor; // 0x460
	int32_t ReparamStepsPerSegment; // 0x470
	ESpriteCollisionMode SpriteCollisionDomain; // 0x474
	float CollisionThickness; // 0x478
	UBodySetup* CachedBodySetup; // 0x480
};

struct UYWidget_LimitedSpaceGrantEntry : UYWidget_GrantEntry {
	int32_t m_maxSpace; // 0x2e0
	int32_t m_spaceUsedByBigEntry; // 0x2e4
	int32_t m_spaceUsedBySmallEntry; // 0x2e8
	int32_t m_cachedNumGrantEntries; // 0x2ec
	int32_t m_maxIndexAllowedForBigEntry; // 0x2f0
};

struct UYSabotageMapMarkerData : UYMapMarkerData {
	float m_stateDuration; // 0x148
};

struct ULODSyncComponent : UActorComponent {
	int32_t NumLODs; // 0xb0
	int32_t ForcedLOD; // 0xb4
	TArray<FComponentSync> ComponentsToSync; // 0xb8
	TMap<FName, FLODMappingData> CustomLODMapping; // 0xc8
	int32_t CurrentLOD; // 0x118
	int32_t CurrentNumLODs; // 0x11c
	TArray<UPrimitiveComponent*> DriveComponents; // 0x120
	TArray<UPrimitiveComponent*> SubComponents; // 0x130
};

struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UNiagaraDataInterfaceAudioPlayer : UNiagaraDataInterface {
	USoundBase* SoundToPlay; // 0x38
	USoundAttenuation* Attenuation; // 0x40
	USoundConcurrency* Concurrency; // 0x48
	TArray<FName> ParameterNames; // 0x50
	bool bLimitPlaysPerTick; // 0x60
	int32_t MaxPlaysPerTick; // 0x64
	bool bStopWhenComponentIsDestroyed; // 0x68
};

struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct UYControllerUIActivityComponent : UActorComponent {
	FMulticastInlineDelegate OnInterpolationStateChanged; // 0xb0
	FMulticastInlineDelegate OnInterpolationInitialization; // 0xc0
	FMulticastInlineDelegate OnInterpolationPercentStateChanged; // 0xd0
	FMulticastInlineDelegate OnBarVisibility; // 0xe0
};

struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
};

struct UYOpenDeveloperCreditsCommand : UYNavigationCommand {
	UYCommand_TopMenuButton_ChangeScreen* m_changeScreenCommandClass; // 0x28
	UYCommand_TopMenuButton_ChangeScreen* m_changeScreenCommand; // 0x30
};

struct UPaperRuntimeSettings : UObject {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UDLSSOverrideSettings : UObject {
	EDLSSSettingOverride EnableDLSSInEditorViewportsOverride; // 0x28
	EDLSSSettingOverride EnableScreenpercentageManipulationInDLSSEditorViewportsOverride; // 0x29
	EDLSSSettingOverride EnableDLSSInPlayInEditorViewportsOverride; // 0x2a
	bool bShowDLSSIncompatiblePluginsToolsWarnings; // 0x2b
	EDLSSSettingOverride ShowDLSSSDebugOnScreenMessages; // 0x2c
};

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct UWBP_Disconnected_Menu_C : UYWidget_Disconnected {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e0
	UWBP_Common_Empty_Btn_C* Btn_GiveFeedback; // 0x2e8
	UWBP_Common_Empty_Btn_C* Btn_JoinCommunity; // 0x2f0
	UWBP_Common_Empty_Btn_C* Btn_VisitWebsite; // 0x2f8
	UWBP_Common_Btn_C* WBP_ExitGame; // 0x300
	FTimerHandle UpdateSecondsLeftTimer; // 0x308
};

struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x240
};

struct UHardCurrencyDisplay_WBP_C : UYWidget_HardCurrencyDisplay {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UYButton* YButton; // 0x2d0
};

struct UCH_PlayerCustomization_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_4; // 0x2f8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_3; // 0x3a8
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x458
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x4a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x4e8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x588
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x690
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x6b0
	FAnimNode_Slot AnimGraphNode_Slot; // 0x730
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x778
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x798
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x848
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x8c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x988
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xa08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0xb60
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0xb88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0xbb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0xc30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0xcb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0xd30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0xdb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0xe30
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0xeb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0xf30
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0xfb0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x1060
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x10e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x1160
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x11e0
	EYCustomizationBodyType bodyType; // 0x1260
	EYCustomizationCategory PreviewBodyPart; // 0x1261
	FName archetypeId; // 0x1264
	bool IsPreviewedPlayerInEOM; // 0x126c
	EYEquipedWeaponPoseType EquippedWeaponPose; // 0x126d
	EYCameraIntentionType CameraState; // 0x126e
	AnimArchetypeEnum Archetype; // 0x126f
	UAnimSequence* EmoteSequence; // 0x1270
};

struct UYItemActorSpawner : UActorComponent {
	FMulticastInlineDelegate BP_OnLootCreated; // 0xb0
	FMulticastInlineDelegate BP_OnPlayerCollectedLoot; // 0xc0
	AYPickupActor* m_defaultPickupActorClass; // 0xd0
	TArray<AYPickupActor*> m_allSpawnedPickUpActors; // 0xd8
};

struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x468
	int32_t PreviousLODLevel; // 0x46c
	int32_t MinLOD; // 0x470
	int32_t SubDivisionStepSize; // 0x474
	UStaticMesh* StaticMesh; // 0x478
	FColor WireframeColorOverride; // 0x480
	char bEvaluateWorldPositionOffset : 1; // 0x484
	char bOverrideWireframeColor : 1; // 0x484
	char bOverrideMinLod : 1; // 0x484
	char bOverrideNavigationExport : 1; // 0x484
	char bForceNavigationObstacle : 1; // 0x484
	char bDisallowMeshPaintPerInstance : 1; // 0x484
	char bIgnoreInstanceForTextureStreaming : 1; // 0x484
	char bOverrideLightMapRes : 1; // 0x484
	char bCastDistanceFieldIndirectShadow : 1; // 0x485
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x485
	char bUseSubDivisions : 1; // 0x485
	char bUseDefaultCollision : 1; // 0x485
	char bReverseCulling : 1; // 0x485
	int32_t OverriddenLightMapRes; // 0x488
	float DistanceFieldIndirectShadowMinVisibility; // 0x48c
	float DistanceFieldSelfShadowBias; // 0x490
	float StreamingDistanceMultiplier; // 0x494
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x498
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x4a8
	FLightmassPrimitiveSettings LightmassSettings; // 0x4b8
};

struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	UNiagaraSystem* Template; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UYWidget_Vanity_View : UYWidgetView {
	EYVanityViewDialogOptions m_lastViewOption; // 0x338
};

struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x240
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30
};

struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct UNiagaraSettings : UDeveloperSettings {
	FSoftObjectPath DefaultEffectType; // 0x38
	TArray<FText> QualityLevels; // 0x50
	TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x60
	ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xb8
};

struct UNetReplicationGraphConnection : UReplicationConnectionDriver {
	UNetConnection* NetConnection; // 0x28
	AReplicationGraphDebugActor* DebugActor; // 0x170
	TArray<FLastLocationGatherInfo> LastGatherLocations; // 0x188
	TArray<UReplicationGraphNode*> ConnectionGraphNodes; // 0x1a0
	UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1b0
};

struct UBP_RichTextDecorator_InputAction_C : UYRichTextBlockDecorator_InputAction {
	FPointerToUberGraphFrame UberGraphFrame; // 0x40
};

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UYWidget_LoginRegister : UYWidget {
	UYWidget* m_invalidGameLaunchWidget; // 0x300
	UWidget* m_loadingWidget; // 0x308
	UYWidget_Login* m_loginWidget; // 0x310
	UYWidget_Register* m_registerWidget; // 0x318
	UWidgetAnimation* m_animateInAnimation; // 0x320
	UWidgetAnimation* m_animateOutAnimation; // 0x328
};

struct UNotificationYesNo_WBP_C : UYWidget_Notification {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3b0
	UWidgetAnimation* NotificationWarning_Anim; // 0x3b8
	UWidgetAnimation* NotificationIn_Anim; // 0x3c0
	UWidgetAnimation* NotificationOut_Anim; // 0x3c8
	UYButton* AcceptButton; // 0x3d0
	UImage* checkNoIcon; // 0x3d8
	UImage* checkYesIcon; // 0x3e0
	UYButton* closeButton; // 0x3e8
	UYButton* DeclineButton; // 0x3f0
	UImage* Gfx_Backer; // 0x3f8
	UImage* Gfx_BackerHighlight; // 0x400
	UUI_ImageBase_WBP_C* Image; // 0x408
	URichTextBlock* MesageText; // 0x410
	UWBP_Generic_ToolTip_C* AcceptButton_ToolTipWidget; // 0x418
	UWBP_Generic_ToolTip_C* DeclineButton_ToolTipWidget; // 0x420
};

struct UTimeSynthComponent : USynthComponent {
	FTimeSynthQuantizationSettings QuantizationSettings; // 0x6c0
	char bEnableSpectralAnalysis : 1; // 0x6d4
	TArray<float> FrequenciesToAnalyze; // 0x6d8
	ETimeSynthFFTSize FFTSize; // 0x6e8
	FMulticastInlineDelegate OnPlaybackTime; // 0x6f0
	char bIsFilterAEnabled : 1; // 0x700
	char bIsFilterBEnabled : 1; // 0x700
	FTimeSynthFilterSettings FilterASettings; // 0x704
	FTimeSynthFilterSettings FilterBSettings; // 0x710
	char bIsEnvelopeFollowerEnabled : 1; // 0x71c
	FTimeSynthEnvelopeFollowerSettings EnvelopeFollowerSettings; // 0x720
	int32_t MaxPoolSize; // 0x72c
};

struct UYPassiveGeneratorsManager : UObject {
	FMulticastInlineDelegate OnGeneratorCollectionSuccessfulBackend; // 0x28
	FMulticastInlineDelegate OnFailedCollectGenerator; // 0x38
};

struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
};

struct UYWidgetProvider_Options : UYWidgetProvider {
	TMap<FName, FYOptionsMenuData> m_menuData; // 0x40
};

struct UFKControlRig : UControlRig {
	TArray<bool> IsControlActive; // 0x650
	EControlRigFKRigExecuteMode ApplyMode; // 0x660
};

struct UItem_Component_ScrapValue_WBP_C : UYWidget_ItemComponentBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	UHorizontalBox* HorizontalBox_3; // 0x308
	UYTextBlock* scrapValue; // 0x310
	UUI_ImageBase_WBP_C* UI_ImageBase_WBP; // 0x318
	FYInventoryItem UpdatedInventoryItem; // 0x320
};

struct AYNPCCharacter : AYCharacterCustomizationExplicitCustomizationActor {
	UYMultiDataTableRowAssociationComponent* m_multiRowAssociationComponent; // 0x708
	FDataTableRowHandle m_npcDataTableRow; // 0x710
	FDataTableRowHandle m_animationDataTableRow; // 0x720
	AYStationLocationActor* m_locationActor; // 0x730
};

struct UYWidget_Crosshair : UYWidget {
	UImage* m_leftCrosshairImage; // 0x2c0
	UImage* m_rightCrosshairImage; // 0x2c8
	UImage* m_topCrosshairImage; // 0x2d0
	UImage* m_bottomCrosshairImage; // 0x2d8
	UImage* m_spreadCrosshairImage; // 0x2e0
	UImage* m_sprintingCrosshairImage; // 0x2e8
	TArray<UImage*> m_crosshairImages; // 0x2f0
	FSlateColor m_hostileColorTarget; // 0x300
	FSlateColor m_regularAim; // 0x328
	FSlateColor m_friendlyColorTarget; // 0x350
	FSlateColor m_sprintingCrosshairColor; // 0x378
	UYWeaponPlayerControllerRuntimeComponent* m_playerWeaponComponent; // 0x3a0
	float m_crosshairBaseDistance; // 0x3a8
};

struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	FNiagaraVariable Parameter; // 0x88
};

struct UGeometryCollectionCache : UObject {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UAnimSet : UObject {
	char bAnimRotationOnly : 1; // 0x28
	TArray<FName> TrackBoneNames; // 0x30
	TArray<FAnimSetMeshLinkup> LinkupCache; // 0x40
	TArray<char> BoneUseAnimTranslation; // 0x50
	TArray<char> ForceUseMeshTranslation; // 0x60
	TArray<FName> UseTranslationBoneNames; // 0x70
	TArray<FName> ForceMeshTranslationBoneNames; // 0x80
	FName PreviewSkelMeshName; // 0x90
	FName BestRatioSkelMeshName; // 0x98
};

struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1b90
};

struct AYActivityLocationEQS : AYActivityLocation {
	UEnvQuery* QueryTemplate; // 0x290
	TArray<FEnvNamedValue> QueryParams; // 0x298
	TArray<FAIDynamicParam> QueryConfig; // 0x2a8
	float TimeLimitPerStep; // 0x2b8
	int32_t StepToDebugDraw; // 0x2bc
	EYEnvQueryHightlightMode HighlightMode; // 0x2c0
	char bDrawLabels : 1; // 0x2c4
	char bDrawFailedItems : 1; // 0x2c4
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x2c4
	char bShouldBeVisibleInGame : 1; // 0x2c4
	char bTickDuringGame : 1; // 0x2c4
	EEnvQueryRunMode QueryingMode; // 0x2c8
};

struct APrefabActor : AActor {
	UPrefabComponent* PrefabComponent; // 0x240
	FGuid LastUpdateID; // 0x248
	int32_t Seed; // 0x258
};

struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120
};

struct UPingIP : UObject {
	FMulticastInlineDelegate OnPingComplete; // 0x50
	FMulticastInlineDelegate OnPingFailure; // 0x60
};

struct UAnimNotify_PlayDTSound_C : UAnimNotify {
	FString Attach Name; // 0x38
	bool Follow; // 0x48
	FDataTableRowHandle Event DT Row; // 0x50
	int32_t Reload Event Idx; // 0x60
};

struct UYGlobalAudio_BP_C : UYGlobalAudio {
	FPointerToUberGraphFrame UberGraphFrame; // 0x30
	FDataTableRowHandle Music_Station; // 0x38
	UYGameInstance* OwningGameInstance; // 0x48
	USoundBase* SFX_EvacShip; // 0x50
	UAudioComponent* SFX_SpaceShip_Component; // 0x58
	FString GlobalAudioContext; // 0x60
	USoundMix* DropPodIntroMix; // 0x70
	USoundMix* MatchJoinedSoundMix; // 0x78
};

struct UWBP_Currency_Btn_C : UWBP_ButtonBase_Btn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x398
	UWidgetAnimation* Release_Anim; // 0x3a0
	UWidgetAnimation* Press_Anim; // 0x3a8
	UWidgetAnimation* HighlightSheen_Anim; // 0x3b0
	UWidgetAnimation* Selected_Anim; // 0x3b8
	UWidgetAnimation* Idle_Anim; // 0x3c0
	UWidgetAnimation* Highlight_Anim; // 0x3c8
	USizeBox* CurrencyIcon; // 0x3d0
	UImage* Gfx_DecoGradient; // 0x3d8
	UImage* Gfx_Edge; // 0x3e0
	UImage* Gfx_FillDark; // 0x3e8
	UImage* Gfx_FillLight; // 0x3f0
	UImage* Gfx_Underline; // 0x3f8
	UImage* Icn_Placeholder; // 0x400
	UTextBlock* Txt_Value; // 0x408
	UWBP_SelectionBracket_C* WBP_SelectionBracket; // 0x410
	UWBP_SelectionHighlight_C* WBP_SelectionHighlight; // 0x418
	FText LabelPrimary; // 0x420
	FSlateBrush Image; // 0x438
	EYCurrencyType currencyType; // 0x4c0
};

struct AAudioVolume : AVolume {
	float Priority; // 0x278
	char bEnabled : 1; // 0x27c
	FReverbSettings Settings; // 0x280
	FInteriorSettings AmbientZoneSettings; // 0x2a0
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2c8
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2d8
};

struct UCanvas : UObject {
	float OrgX; // 0x28
	float OrgY; // 0x2c
	float ClipX; // 0x30
	float ClipY; // 0x34
	FColor DrawColor; // 0x38
	char bCenterX : 1; // 0x3c
	char bCenterY : 1; // 0x3c
	char bNoSmooth : 1; // 0x3c
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FPlane ColorModulate; // 0x50
	UTexture2D* DefaultTexture; // 0x60
	UTexture2D* GradientTexture0; // 0x68
	UReporterGraph* ReporterGraph; // 0x70
};

struct UUMGSequenceTickManager : UObject {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70
};

struct UWBP_Footer_B_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* WidgetIn_Anim; // 0x2c8
	UImage* Gfx_ArrowSmall; // 0x2d0
	UImage* Gfx_LineworkEdge; // 0x2d8
};

struct UYSpectateComponent : UActorComponent {
	float m_SpectateNetworkMaxSmoothUpdateDistance; // 0xb0
	float m_SpectateNetworkNoSmoothUpdateDistance; // 0xb4
	float m_SpectateNetworkSimulatedSmoothLocationTime; // 0xb8
	float m_SpectateNetworkSimulatedSmoothRotationTime; // 0xbc
	float m_onFinishMatchFadeInDuration; // 0xc0
	float m_onSwitchSpectateTargetFadeInDuration; // 0xc4
	float m_evacSwitchToSpectateTimeDelay; // 0xc8
	float m_spectateTargetEvacedTimeDelay; // 0xcc
	float m_spectateTargetDeadTimeDelay; // 0xd0
	float m_setSpectateTargetTimeDelay; // 0xd4
	float m_spectatePawnAdjustLocationTimeInterval; // 0xd8
	EYActivityType m_evacSpectateActivityType; // 0xdc
	FMulticastInlineDelegate BP_OnEscapeSequenceComplete; // 0xe0
	FMulticastInlineDelegate BP_OnSpectateTargetChanged; // 0xf0
	FMulticastInlineDelegate BP_OnInputBlockReleased; // 0x100
	FMulticastInlineDelegate BP_OnNoValidSpectateTargetAvailable; // 0x110
	bool m_blockInput; // 0x120
	AYPlayerState* m_playerStateToMakeNetRelevant; // 0x128
	AYPlayerState* m_cachedSpectateTargetPlayerState; // 0x190
	AActor* m_cachedSpectateTarget; // 0x198
	AYPlayerController_Match* m_cachedPlayerController; // 0x1a0
	ACameraActor* m_cachedEndOfMatchResultsScreenCameraActor; // 0x228
};

struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x278
};

struct AYPerformanceCaptureCameraActor : ACameraActor {
	FName m_capturePointName; // 0x7c0
};

struct APRO_PlayerController_C : AYPlayerController_Match {
	FPointerToUberGraphFrame UberGraphFrame; // 0x8c8
	UYControllerCraftingComponent_BP_C* YControllerCraftingComponent_BP; // 0x8d0
	UYPlayerDropPodIntroComponent_BP_C* YPlayerDropPodIntroComponent_BP; // 0x8d8
	UBP_AimAssistDebug_C* BP_AimAssistDebug; // 0x8e0
	UBP_AimAssist_C* BP_AimAssist; // 0x8e8
	UYTutorialComponent_BP_C* YTutorialComponent_BP; // 0x8f0
	UYControllerContractsActivesDataComponent_BP_C* YControllerContractsActivesDataComponent_BP; // 0x8f8
	UYControllerTrackerInventoryComponent_BP_C* YControllerTrackerInventoryComponent_BP; // 0x900
	UYControllerTrackerKillsComponent_BP_C* YControllerTrackerKillsComponent_BP; // 0x908
	UYControllerContractsBoardsDataComponent_BP_C* YControllerContractsBoardsDataComponent_BP; // 0x910
	UYControllerContractsCheatsComponent_BP_C* YControllerContractsCheatsComponent_BP; // 0x918
	UBackgroundDropPodSpawner_BP_C* BackgroundDropPodSpawner_BP; // 0x920
	UYIdleDetectionComponent_BP_C* YIdleDetectionComponent_BP; // 0x928
	ULightningComponent_BP_C* LightningComponent_BP; // 0x930
	UPlayerStationComponent_BP_C* PlayerStationComponent_BP; // 0x938
	UPlayerControllerCombatAwarenessComponent_BP_C* CombatAwarenessComponent; // 0x940
	UYBugReporterComponent_BP_C* YBugItComponent_BP; // 0x948
	FString commandLine; // 0x950
	bool recordProfiles; // 0x960
	int32_t performanceLoop; // 0x964
	FTransform default location; // 0x970
	bool isSoaktestRunning; // 0x9a0
	bool isCraftingMaterialsReceived; // 0x9a1
	FString CraftItemName; // 0x9a8
	bool isCraftingWorks; // 0x9b8
	ASoakTestStationAutomationManager_BP_C* SoaktestStationManagerActor; // 0x9c0
	bool IsSmokecheckAutomationRunning; // 0x9c8
	bool SmokecheckPlayedMP Map; // 0x9c9
	FMulticastInlineDelegate OnHasZeal; // 0x9d0
	bool isStationAutomationReconectRunning; // 0x9e0
	bool isFunctionalTestRunning; // 0x9e1
	bool IsPerformanceAutomationRunning; // 0x9e2
	bool isPerformanceCapturingRunning; // 0x9e3
	bool isStationAutomationIDLE Running; // 0x9e4
	FMulticastInlineDelegate CallEvacPressed; // 0x9e8
};

struct UAudioComponent : USceneComponent {
	USoundBase* Sound; // 0x1f8
	TArray<FAudioComponentParam> InstanceParameters; // 0x200
	USoundClass* SoundClassOverride; // 0x210
	char bAutoDestroy : 1; // 0x218
	char bStopWhenOwnerDestroyed : 1; // 0x218
	char bShouldRemainActiveIfDropped : 1; // 0x218
	char bAllowSpatialization : 1; // 0x218
	char bOverrideAttenuation : 1; // 0x218
	char bOverrideSubtitlePriority : 1; // 0x218
	char bIsUISound : 1; // 0x218
	char bEnableLowPassFilter : 1; // 0x218
	char bOverridePriority : 1; // 0x219
	char bSuppressSubtitles : 1; // 0x219
	char bAutoManageAttachment : 1; // 0x21a
	FName AudioComponentUserID; // 0x220
	float PitchModulationMin; // 0x228
	float PitchModulationMax; // 0x22c
	float VolumeModulationMin; // 0x230
	float VolumeModulationMax; // 0x234
	float VolumeMultiplier; // 0x238
	int32_t EnvelopeFollowerAttackTime; // 0x23c
	int32_t EnvelopeFollowerReleaseTime; // 0x240
	float Priority; // 0x244
	float SubtitlePriority; // 0x248
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x250
	float PitchMultiplier; // 0x258
	float LowPassFilterFrequency; // 0x25c
	USoundAttenuation* AttenuationSettings; // 0x268
	FSoundAttenuationSettings AttenuationOverrides; // 0x270
	USoundConcurrency* ConcurrencySettings; // 0x610
	TSet<USoundConcurrency*> ConcurrencySet; // 0x618
	EAttachmentRule AutoAttachLocationRule; // 0x674
	EAttachmentRule AutoAttachRotationRule; // 0x675
	EAttachmentRule AutoAttachScaleRule; // 0x676
	FSoundModulationDefaultRoutingSettings ModulationRouting; // 0x678
	FMulticastInlineDelegate OnAudioPlayStateChanged; // 0x6c0
	FMulticastInlineDelegate OnAudioVirtualizationChanged; // 0x6e8
	FMulticastInlineDelegate OnAudioFinished; // 0x710
	FMulticastInlineDelegate OnAudioPlaybackPercent; // 0x738
	FMulticastInlineDelegate OnAudioSingleEnvelopeValue; // 0x760
	FMulticastInlineDelegate OnAudioMultiEnvelopeValue; // 0x788
	FDelegate OnQueueSubtitles; // 0x7b0
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x7c0
	FName AutoAttachSocketName; // 0x7c8
};

struct UWBP_HeaderComplex_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UNamedSlot* ContentSlotLeft; // 0x2d0
	UNamedSlot* ContentSlotRight; // 0x2d8
	UImage* Gfx_ArrowSmall; // 0x2e0
	UImage* Gfx_Background; // 0x2e8
	UImage* Gfx_Deco; // 0x2f0
	UImage* Gfx_SlantAccent; // 0x2f8
	UImage* Gfx_SlantMain; // 0x300
	UTextBlock* Txt_Headline; // 0x308
	UTextBlock* Txt_Subline; // 0x310
	FText HeadlineLabel; // 0x318
};

struct UYWidget_ImageCarrousel : UYWidget {
	int32_t m_numOfVisibleEntries; // 0x2c0
	bool m_selectAll; // 0x2c4
	bool m_selectRandom; // 0x2c5
	TArray<FYCarrouselData> m_sourceData; // 0x2c8
};

struct AWaterBodyIsland : AActor {
	UWaterSplineComponent* SplineComp; // 0x248
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UYControllerInventoryBackendComponent : UActorComponent {
	FMulticastInlineDelegate OnInventoryInitializationCompletedDelegate; // 0xb0
	FMulticastInlineDelegate OnEndOfMatchDataAvailable; // 0xc0
	FMulticastInlineDelegate OnCompleteInventoryRequestDelegate; // 0xd0
	UYBackendInventoryModel* m_backendInventoryModel; // 0xe0
	FYEomInventoryData m_endOfMatchData; // 0xe8
};

struct UYTestConfigClass : UObject {
	FString m_dataTableFolderPath; // 0x28
	FSoftObjectPath m_characterAssetPath; // 0x38
	FSoftObjectPath m_controllerAssetPath; // 0x50
	FSoftObjectPath m_interactiveActorAssetPath; // 0x68
	FString m_weaponDataTablePath; // 0x80
	FString m_weaponTransportDataTablePath; // 0x90
	FString m_weaponImpactDataTablePath; // 0xa0
	FString m_testWeaponRow; // 0xb0
	FString m_secondTestWeaponRow; // 0xc0
	FString m_playerTuningDataTablePath; // 0xd0
	FString m_playerAudioDataTablePath; // 0xe0
	FString m_voiceoverDatatablePath; // 0xf0
	FString m_voiceoverSpeakerDatatablePath; // 0x100
	FString m_weaponAudioDataTablePath; // 0x110
	FString m_healthDataTablePath; // 0x120
	FSoftObjectPath m_gameModeAssetPath; // 0x130
	FString m_abilityDataTablePath; // 0x148
	FString m_abilityDataTableRowOne; // 0x158
	FString m_abilityDataTableRowTwo; // 0x168
	FString m_activityTuningDataTablePath; // 0x178
	FString m_activitySetsTablePath; // 0x188
	FString m_abilityRowNameBombardment; // 0x198
	FString m_abilityRowNameBlink; // 0x1a8
	FSoftObjectPath m_gameStateAssetPath; // 0x1b8
	TSoftObjectPtr<UDataTable> m_factionsDataTablePath; // 0x1d0
	TSoftObjectPtr<UDataTable> m_contractsDataTablePath; // 0x1f8
	TSoftObjectPtr<UDataTable> m_lootDataTablePathList; // 0x220
	TSoftObjectPtr<UDataTable> m_lootDataTablePathPools; // 0x248
	TSoftObjectPtr<UDataTable> m_missionLinesDataTablePath; // 0x270
	TSoftObjectPtr<UDataTable> m_craftingBlueprintsDataTablePath; // 0x298
	TSoftObjectPtr<UDataTable> m_materialsDataTablePath; // 0x2c0
	TSoftObjectPtr<UDataTable> m_questItemsTypesDataTablePath; // 0x2e8
	TSoftObjectPtr<UDataTable> m_modsDataTablePath; // 0x310
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards0DataTablePath; // 0x338
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards1DataTablePath; // 0x360
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards2DataTablePath; // 0x388
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards3DataTablePath; // 0x3b0
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards4DataTablePath; // 0x3d8
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards5DataTablePath; // 0x400
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards6DataTablePath; // 0x428
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards7DataTablePath; // 0x450
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards8DataTablePath; // 0x478
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards9DataTablePath; // 0x4a0
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards10DataTablePath; // 0x4c8
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewardsDataTablePath; // 0x4f0
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsDataTablePath; // 0x518
	TSoftObjectPtr<UDataTable> m_modsMetaDataTablePath; // 0x540
	TSoftObjectPtr<UDataTable> m_grantsDataTablePath; // 0x568
	TSoftObjectPtr<UDataTable> m_entitlementsDataTablePath; // 0x590
	TSoftObjectPtr<UDataTable> m_weaponVanityDataTablePath; // 0x5b8
	TSoftObjectPtr<UDataTable> m_rebindableInputActionsDataTablePath; // 0x5e0
	TSoftObjectPtr<UDataTable> m_currenciesDataTablePath; // 0x608
	TSoftObjectPtr<UDataTable> m_shopOffersDataTablePath; // 0x630
	TSoftObjectPtr<UDataTable> m_shopPromotionsDataTablePath; // 0x658
	TSoftObjectPtr<UDataTable> m_playFabStoresDataTablePath; // 0x680
	TSoftObjectPtr<UDataTable> m_bundlesDataTablePath; // 0x6a8
	TSoftObjectPtr<UDataTable> m_bundlesPlatformDataTablePath; // 0x6d0
	TSoftObjectPtr<UDataTable> m_seasonsDataTablePath; // 0x6f8
	TArray<TSoftObjectPtr<UDataTable>> m_challengeDataTablePaths; // 0x720
	TSoftObjectPtr<UDataTable> m_prospectorRankDataTablePath; // 0x730
	TSoftObjectPtr<UDataTable> m_rankedSeasonDataTablePath; // 0x758
	TSoftObjectPtr<UDataTable> m_statsDataTablePath; // 0x780
	TSoftObjectPtr<UDataTable> m_popupWidgetsDataTablePath; // 0x7a8
	TSoftObjectPtr<UDataTable> m_mapsInfosDataTablePath; // 0x7d0
};

struct UMaterialFunctionInterface : UObject {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct UYSceneManager : UObject {
	FMulticastInlineDelegate OnSceneWidgetRequested; // 0x28
	FMulticastInlineDelegate OnSceneAdded; // 0x38
	FMulticastInlineDelegate OnSceneRemoved; // 0x48
	TMap<int32_t, AYScene*> m_activeScenes; // 0x58
	FYSceneRuntimeData m_sceneRuntimeData; // 0xa8
	TArray<AYScene*> m_nonActiveScenes; // 0xb8
	FYSceneCompleteInitializationData m_lastInitializationData; // 0xd0
};

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UAB_OSI_Syringe_SK_Skeleton_ABP_C : UAnimInstance {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
};

struct UYDialogContainer : UYDialogContainerBase {
	UYWidget_ModalDialogOKCancelItem* m_modalDialogOkCancelItem; // 0x2c8
	UYWidget_ModalDialogOkCancel* m_notificationWidget; // 0x2d0
	UYWidget_ModalDialogScrapItem* m_scrapItemModalDialog; // 0x2d8
	UYWidget_ModalDialogShopOfferPurchase* m_shopOfferPurchaseModalDialog; // 0x2e0
	UYWidget_ModalDialogExitGame* m_exitGameModalDialog; // 0x2e8
	UYWidget_PlayerSupport* m_playerSupportWidget; // 0x2f0
	UYWidget_PlayerSupport* m_reportPlayerWidget; // 0x2f8
	UYWidget_ConnectionLost* m_connectionLostWidget; // 0x300
	EYReportType m_reportType; // 0x308
	float m_connectionTimerIntervalSeconds; // 0x318
};

struct UVariantSet : UObject {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct UYDataTableManager : UObject {
	FMulticastInlineDelegate OnNewDataTableData; // 0x28
	FMulticastInlineDelegate OnDataTablesInitialized; // 0x38
	FSoftObjectPath m_weaponDataTablePath; // 0x48
	FSoftObjectPath m_meleeWeaponDataTablePath; // 0x60
	FSoftObjectPath m_meleeVanityDataTablePath; // 0x78
	FSoftObjectPath m_abilityDataTablePath; // 0x90
	FSoftObjectPath m_modDataTablePath; // 0xa8
	TSoftObjectPtr<UDataTable> m_sceneDataTablePath; // 0xc0
	TSoftObjectPtr<UDataTable> m_materialsDataTablePath; // 0xe8
	TSoftObjectPtr<UDataTable> m_keycardsDataTablePath; // 0x110
	TSoftObjectPtr<UDataTable> m_materialsGameDataTablePath; // 0x138
	TSoftObjectPtr<UDataTable> m_currenciesDataTablePath; // 0x160
	FSoftObjectPath m_scrapingDataTablePath; // 0x188
	FSoftObjectPath m_loreItemsDataTablePath; // 0x1a0
	TSoftObjectPtr<UDataTable> m_serverPerformanceTuningDataTablePath; // 0x1b8
	TSoftObjectPtr<UDataTable> m_experienceDataTablePath; // 0x1e0
	TSoftObjectPtr<UDataTable> m_collectiblesTypesDataTablePath; // 0x208
	TSoftObjectPtr<UDataTable> m_questItemsTypesDataTablePath; // 0x230
	TSoftObjectPtr<UDataTable> m_shieldItemsDataTablePath; // 0x258
	TSoftObjectPtr<UDataTable> m_helmetsDataTablePath; // 0x280
	TSoftObjectPtr<UDataTable> m_aiArmorDataTablePath; // 0x2a8
	TSoftObjectPtr<UDataTable> m_bagDataTablePath; // 0x2d0
	TSoftObjectPtr<UDataTable> m_prospectorBadgeDataTablePath; // 0x2f8
	TSoftObjectPtr<UDataTable> m_rarityDataTablePath; // 0x320
	TSoftObjectPtr<UDataTable> m_lootTuningDataTablePath; // 0x348
	TSoftObjectPtr<UDataTable> m_characterCustomizationCategoryDataTablePath; // 0x370
	FSoftObjectPath m_prospectorRankDataTablePath; // 0x398
	FSoftObjectPath m_rankedSeasonDataTablePath; // 0x3b0
	TSoftObjectPtr<UDataTable> m_eosStatsDataTablePath; // 0x3c8
	TSoftObjectPtr<UDataTable> m_statsCombinationDataTablePath; // 0x3f0
	TSoftObjectPtr<UDataTable> m_metaDefaultItemsDataTablePath; // 0x418
	FSoftObjectPath m_impactDataTablePath; // 0x440
	FSoftObjectPath m_killImpactEffectsDataTablePath; // 0x458
	FSoftObjectPath m_shieldBreakImpactEffectsDataTablePath; // 0x470
	FSoftObjectPath m_fxDataTablePath; // 0x488
	FSoftObjectPath m_perksDataTablePath; // 0x4a0
	FSoftObjectPath m_transportDataTablePath; // 0x4b8
	TSoftObjectPtr<UDataTable> m_lootItemsDataTablePath; // 0x4d0
	FSoftObjectPath m_scopeTuningDataTablePath; // 0x4f8
	TSoftObjectPtr<UDataTable> m_notificationDataTablePath; // 0x510
	TSoftObjectPtr<UDataTable> m_matchmakingDataTablePath; // 0x538
	TSoftObjectPtr<UDataTable> m_characterCustomizationItemsDataTablePath; // 0x560
	TSoftObjectPtr<UDataTable> m_characterCustomizationExplicitDataTablePath; // 0x588
	TSoftObjectPtr<UDataTable> m_characterCustomizationDefaultSettingsPath; // 0x5b0
	TSoftObjectPtr<UDataTable> m_factionsDataTablePath; // 0x5d8
	TSoftObjectPtr<UDataTable> m_blueprintsDataTablePath; // 0x600
	TSoftObjectPtr<UDataTable> m_contractLicencesDataTablePath; // 0x628
	TSoftObjectPtr<UDataTable> m_shopOffersDataTablePath; // 0x650
	TSoftObjectPtr<UDataTable> m_playFabStoresDataTableAssetPath; // 0x678
	TSoftObjectPtr<UDataTable> m_seasonsDataTablePath; // 0x6a0
	TSoftObjectPtr<UDataTable> m_cameraItemDataTablePath; // 0x6c8
	TSoftObjectPtr<UDataTable> m_ammoTypesDataTablePath; // 0x6f0
	TSoftObjectPtr<UDataTable> m_playerQuarterUpgradesDataTablePath; // 0x718
	TSoftObjectPtr<UDataTable> m_techTreeNodesDataTablePath; // 0x740
	TSoftObjectPtr<UDataTable> m_techTreeCategoriesDataTablePath; // 0x768
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards0DataTablePath; // 0x790
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards1DataTablePath; // 0x7b8
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards2DataTablePath; // 0x7e0
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards3DataTablePath; // 0x808
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards4DataTablePath; // 0x830
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards5DataTablePath; // 0x858
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards6DataTablePath; // 0x880
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards7DataTablePath; // 0x8a8
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards8DataTablePath; // 0x8d0
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards9DataTablePath; // 0x8f8
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewards10DataTablePath; // 0x920
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsCrateRewardsDataTablePath; // 0x948
	TSoftObjectPtr<UDataTable> m_passiveGeneratorsDataTablePath; // 0x970
	FSoftObjectPath m_activityDataTablePath; // 0x998
	FSoftObjectPath m_gameModesUIDataTablepath; // 0x9b0
	FSoftObjectPath m_inboxMessagesDataTablePath; // 0x9c8
	FSoftObjectPath m_grantsDataTablePath; // 0x9e0
	FSoftObjectPath m_entitlementsDataTablePath; // 0x9f8
	TSoftObjectPtr<UDataTable> m_weaponVanityDataTablePath; // 0xa10
	TSoftObjectPtr<UDataTable> m_onboardingDataTablePath; // 0xa38
	TSoftObjectPtr<UDataTable> m_blockFeatureDueToOnboardingDataTablePath; // 0xa60
	TSoftObjectPtr<UDataTable> m_onboardingMissionsDataTablePath; // 0xa88
	TSoftObjectPtr<UDataTable> m_vehicleDataTablePath; // 0xab0
	TSoftObjectPtr<UDataTable> m_rebindableInputActionsDataTablePath; // 0xad8
	TSoftObjectPtr<UDataTable> m_materialDataTablePath; // 0xb00
	TSoftObjectPtr<UDataTable> m_metaSettingsDataTablePath; // 0xb28
	TSoftObjectPtr<UDataTable> m_modSettingsDataTablePath; // 0xb50
	TSoftObjectPtr<UDataTable> m_promotionDataTablePath; // 0xb78
	TSoftObjectPtr<UDataTable> m_globalVanityDefaultsPath; // 0xba0
	TSoftObjectPtr<UDataTable> m_bannerDefaultsPath; // 0xbc8
	TSoftObjectPtr<UDataTable> m_deathEmoteDataTablePath; // 0xbf0
	TSoftObjectPtr<UDataTable> m_normalEmoteDataTablePath; // 0xc18
	TSoftObjectPtr<UDataTable> m_defaultConfigurationDataTablePath; // 0xc40
	TSoftObjectPtr<UDataTable> m_popupWidgetsDataTablePath; // 0xc68
	TSoftObjectPtr<UDataTable> m_mapsInfosDataTablePath; // 0xc90
	TSoftObjectPtr<UDataTable> m_vehicleVanityDataTablePath; // 0xcb8
	TSoftObjectPtr<UDataTable> m_droppodDataTablePath; // 0xce0
	TSoftObjectPtr<UDataTable> m_defaultFeatureTogglesTablePath; // 0xd08
	UYChatFilterDataObject* m_profanityDataObject; // 0xd30
	TSoftObjectPtr<UDataTable> m_chatSettingsDataTablePath; // 0xd38
	TSoftObjectPtr<UDataTable> m_developerCreditsDataTablePath; // 0xd60
	TSoftObjectPtr<UDataTable> m_awarenessNotificationDataTablePath; // 0xd88
	TSoftObjectPtr<UDataTable> m_playerAwarenessTuningDataTablePath; // 0xdb0
	TSoftObjectPtr<UDataTable> m_statsSettingsDataTablePath; // 0xdd8
	TSoftObjectPtr<UDataTable> m_upgradeDataTablePath; // 0xe00
	TSoftObjectPtr<UDataTable> m_npcDataTablePath; // 0xe28
	TSoftObjectPtr<UDataTable> m_npcCharacterArchetypeDatablePath; // 0xe50
	TSoftObjectPtr<UDataTable> m_npcCharacterArchetypeDatatableSetsPath; // 0xe78
	TSoftObjectPtr<UDataTable> m_npcCharacterArchetypeDatatableItemsPath; // 0xea0
	TSoftObjectPtr<UDataTable> m_socialProfileDataTablePath; // 0xec8
	TSoftObjectPtr<UDataTable> m_prospectorLevelProgressionDataTablePath; // 0xef0
	TSoftObjectPtr<UDataTable> m_prospectorLevelRewardDataTablePath; // 0xf18
	TSoftObjectPtr<UDataTable> m_sprayVanityDataTablePath; // 0xf40
	TSoftObjectPtr<UDataTable> m_weaponCharmVanityDataTablePath; // 0xf68
	TSoftObjectPtr<UDataTable> m_petDataTablePath; // 0xf90
	TSoftObjectPtr<UDataTable> m_aiTuningDataTablePath; // 0xfb8
	TSoftObjectPtr<UDataTable> m_aiSenseTriggerDataTablePath; // 0xfe0
	TSoftObjectPtr<UDataTable> m_statKeysDataTablePath; // 0x1008
	FSoftObjectPath m_playerTuningDataTablePath; // 0x1030
	TSoftObjectPtr<UDataAsset> m_metaDataConverterAssetPath; // 0x1048
	TSoftObjectPtr<UDataTable> m_characterCustomizationArchetypePath; // 0x1070
	TSoftObjectPtr<UDataTable> m_characterCustomizationArchetypeSetPath; // 0x1098
	TSoftObjectPtr<UDataTable> m_effortDataTableAssetPath; // 0x10c0
	TSoftObjectPtr<UDataTable> m_inventoryInsurancesDataTableAssetPath; // 0x10e8
	TSoftObjectPtr<UDataTable> m_bundlesDataTableAssetPath; // 0x1110
	TSoftObjectPtr<UDataTable> m_bundlesPlatformDataTableAssetPath; // 0x1138
	TSoftObjectPtr<UDataTable> m_characterCustomizationExplicitPath; // 0x1160
	TSoftObjectPtr<UDataTable> m_gameSessionDataTablePath; // 0x1188
	TSoftObjectPtr<UDataTable> m_keybindingsIconsDataTablePath; // 0x11b0
	TSoftObjectPtr<UDataTable> m_retentionBonusDataTablePath; // 0x11d8
	FYDataTablePropertyData m_propertyData; // 0x1200
	FMulticastInlineDelegate OnFeatureTogglesReceived; // 0x15e8
};

struct UYPlayerFactionsProgressionComponent : UActorComponent {
	FMulticastInlineDelegate OnLocalPlayerFactionProgressDataReceived; // 0xb0
	FMulticastInlineDelegate OnLocalPlayerFactionLevelUp; // 0xc0
};

struct UWBP_Header_Left_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* Anim_FadeIn; // 0x2c8
	UImage* Gfx_ArrowSmall; // 0x2d0
	UImage* Gfx_Background_Gradient; // 0x2d8
	UImage* Gfx_Chevrons; // 0x2e0
	UImage* Gfx_SlantA; // 0x2e8
	UImage* Gfx_SlantB; // 0x2f0
	UImage* Gfx_SlantC; // 0x2f8
	UNamedSlot* Slot_Right; // 0x300
	UTextBlock* Txt_Headline; // 0x308
	FText HeadlineLabel; // 0x310
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct UShadowMapTexture2D : UTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x100
};

struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
};

struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate onSuccess; // 0x30
	FMulticastInlineDelegate onFailure; // 0x40
};

struct UYWidget_ShopCategories : UYWidget {
	TArray<EYShopCategory> m_supportedCategories; // 0x2d0
	UYWidget_ItemCategoryEntry* m_selectedItemCategory; // 0x2e0
};

struct UConsoleSettings : UObject {
	int32_t MaxScrollbackSize; // 0x28
	TArray<FAutoCompleteCommand> ManualAutoCompleteList; // 0x30
	TArray<FString> AutoCompleteMapPaths; // 0x40
	float BackgroundOpacityPercentage; // 0x50
	bool bOrderTopToBottom; // 0x54
	bool bDisplayHelpInAutoComplete; // 0x55
	FColor InputColor; // 0x58
	FColor HistoryColor; // 0x5c
	FColor AutoCompleteCommandColor; // 0x60
	FColor AutoCompleteCVarColor; // 0x64
	FColor AutoCompleteFadedColor; // 0x68
};

struct UPhysicsSettingsCore : UDeveloperSettings {
	float DefaultGravityZ; // 0x38
	float DefaultTerminalVelocity; // 0x3c
	float DefaultFluidFriction; // 0x40
	int32_t SimulateScratchMemorySize; // 0x44
	int32_t RagdollAggregateThreshold; // 0x48
	float TriangleMeshTriangleMinAreaThreshold; // 0x4c
	bool bEnableShapeSharing; // 0x50
	bool bEnablePCM; // 0x51
	bool bEnableStabilization; // 0x52
	bool bWarnMissingLocks; // 0x53
	bool bEnable2DPhysics; // 0x54
	bool bDefaultHasComplexCollision; // 0x55
	float BounceThresholdVelocity; // 0x58
	EFrictionCombineMode FrictionCombineMode; // 0x5c
	EFrictionCombineMode RestitutionCombineMode; // 0x5d
	float MaxAngularVelocity; // 0x60
	float MaxDepenetrationVelocity; // 0x64
	float ContactOffsetMultiplier; // 0x68
	float MinContactOffset; // 0x6c
	float MaxContactOffset; // 0x70
	bool bSimulateSkeletalMeshOnDedicatedServer; // 0x74
	ECollisionTraceFlag DefaultShapeComplexity; // 0x75
	FChaosSolverConfiguration SolverOptions; // 0x78
};

struct AEmitterCameraLensEffectBase : AEmitter {
	UParticleSystem* PS_CameraEffect; // 0x290
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x298
	APlayerCameraManager* BaseCamera; // 0x2a0
	FTransform RelativeTransform; // 0x2b0
	float BaseFOV; // 0x2e0
	char bAllowMultipleInstances : 1; // 0x2e4
	char bResetWhenRetriggered : 1; // 0x2e4
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2e8
	float DistFromCamera; // 0x2f8
};

struct UMatchPhaseDirectorComponent_BP_C : UYMatchPhaseDirectorComponent {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe0
	FDataTableRowHandle MatchFlowRowHandle; // 0xe8
	TArray<FDataTableRowHandle> MatchFlowPhaseHandles; // 0xf8
	bool useNewMatchPhaseFlow; // 0x108
	bool shouldSkipBlending; // 0x109
	UDataTable* MatchFlowsDataTable; // 0x110
};

struct UPaperFlipbook : UObject {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UWBP_InputKeyPC_C : UUserWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Gfx_PCBacker; // 0x268
	UTextBlock* Txt_PCKey; // 0x270
	FText Label; // 0x278
	bool isLight; // 0x290
};

struct UBTTask_SetBB_Bool_C : UBTTask_BlueprintBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0xa8
	bool New Value; // 0xb0
	FBlackboardKeySelector Key Bool; // 0xb8
};

struct UWBP_Credits_Menu_C : UYWidgetView {
	FPointerToUberGraphFrame UberGraphFrame; // 0x338
	UWidgetAnimation* Background_Idle_Anim; // 0x340
	UWidgetAnimation* ScreenOut_Anim; // 0x348
	UWidgetAnimation* ScreenIn_Anim; // 0x350
	UScrollBox* Content_Scrollbox; // 0x358
	UVerticalBox* CreditsDynamicVertList; // 0x360
	UImage* Gfx_ColorTint; // 0x368
	UImage* Gfx_CycleLogo; // 0x370
	UImage* Gfx_YagerLogo; // 0x378
	UTextBlock* Txt_Headline; // 0x380
	UWBP_Credits_Entry_C* WBP_Credits_Entry; // 0x388
	UWBP_Credits_Headline_C* WBP_Credits_Headline; // 0x390
	UWBP_InputKeyNavigation_C* WBP_InputKeyNavigation; // 0x398
	TArray<FStructure_DeveloperCredits> CreditEntries; // 0x3a0
};

struct UCameraModifier : UObject {
	char bDebug : 1; // 0x28
	char bExclusive : 1; // 0x28
	char Priority; // 0x2c
	APlayerCameraManager* CameraOwner; // 0x30
	float AlphaInTime; // 0x38
	float AlphaOutTime; // 0x3c
	float Alpha; // 0x40
};

struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
};

struct UBodySetupCore : UObject {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	EARTextureType TextureType; // 0x130
	float Timestamp; // 0x134
	FGuid ExternalTextureGuid; // 0x138
	FVector2D Size; // 0x148
};

struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x250
};

struct USourceEffectEQPreset : USoundEffectSourcePreset {
	FSourceEffectEQSettings Settings; // 0xa0
};

struct UPlanePositionGizmo : UInteractiveGizmo {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoVec2ParameterSource> ParameterSource; // 0x58
	TScriptInterface<IGizmoClickTarget> HitTarget; // 0x68
	TScriptInterface<IGizmoStateTarget> StateTarget; // 0x78
	bool bEnableSignedAxis; // 0x88
	bool bFlipX; // 0x89
	bool bFlipY; // 0x8a
	bool bInInteraction; // 0x8b
	FVector InteractionOrigin; // 0x8c
	FVector InteractionNormal; // 0x98
	FVector InteractionAxisX; // 0xa4
	FVector InteractionAxisY; // 0xb0
	FVector InteractionStartPoint; // 0xbc
	FVector InteractionCurPoint; // 0xc8
	FVector2D InteractionStartParameter; // 0xd4
	FVector2D InteractionCurParameter; // 0xdc
	FVector2D ParameterSigns; // 0xe4
};

struct ABP_ImpactMarkerLight01_BP_C : AYPlacementActor {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	float Timeline_0_anim_opacity_D96A41994CC682769C8B099829D1EECA; // 0x250
	ETimelineDirection Timeline_0__Direction_D96A41994CC682769C8B099829D1EECA; // 0x254
	UTimelineComponent* Timeline_1; // 0x258
	UMaterialInstanceDynamic* decalMID; // 0x260
	float markerSize; // 0x268
	UParticleSystemComponent* particle; // 0x270
	UDecalComponent* Decal; // 0x278
};

struct UMovieSceneFloatSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct UWBP_DividerHorizontal_Panel_C : UYWidget {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UWidgetAnimation* ScreenIn_Anim; // 0x2c8
	UImage* Edge; // 0x2d0
	UImage* FillBase; // 0x2d8
	UImage* FillOver; // 0x2e0
	UImage* Gfx_Center; // 0x2e8
	UImage* Gfx_CenterTrapezoid; // 0x2f0
	UImage* Gfx_DecoBottom_Shape; // 0x2f8
	UImage* Gfx_DecoTop_Shape; // 0x300
	UImage* Gfx_DivideImage; // 0x308
	bool ShowDecoBottom; // 0x310
	bool ShowDecoTop; // 0x311
};

struct UWBP_TabElementBase_TabElem_C : UYWidget_TabElement {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	FMulticastInlineDelegate OnClicked; // 0x2d0
};

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UYWidget_SpecialOffersOverview : UYWidget {
	EYPromotionType m_promotionType; // 0x2d0
	UYWidget_OfferListContainer* m_offerListContainer; // 0x2d8
	UYWidget_Timer* m_offersTimer; // 0x2e0
	TArray<FDataTableRowHandle> m_dummyOffers; // 0x2e8
};

struct UWBP_InputKeyNavigationBase_C : UUserWidget {
	TArray<UWBP_InputKeyNavigation_Btn_C*> InputKeys; // 0x260
	FMulticastInlineDelegate OnInputKeyClicked; // 0x270
};

struct UYWidget_ItemTooltipEntryDescription : UYWidget_ItemTooltipEntryBase {
	UTextBlock* m_itemDescriptionTextBlock; // 0x2c0
};

struct UAnimCompress_PerTrackCompression : UAnimCompress_RemoveLinearKeys {
	float MaxZeroingThreshold; // 0x60
	float MaxPosDiffBitwise; // 0x64
	float MaxAngleDiffBitwise; // 0x68
	float MaxScaleDiffBitwise; // 0x6c
	TArray<AnimationCompressionFormat> AllowedRotationFormats; // 0x70
	TArray<AnimationCompressionFormat> AllowedTranslationFormats; // 0x80
	TArray<AnimationCompressionFormat> AllowedScaleFormats; // 0x90
	char bResampleAnimation : 1; // 0xa0
	float ResampledFramerate; // 0xa4
	int32_t MinKeysForResampling; // 0xa8
	char bUseAdaptiveError : 1; // 0xac
	char bUseOverrideForEndEffectors : 1; // 0xac
	int32_t TrackHeightBias; // 0xb0
	float ParentingDivisor; // 0xb4
	float ParentingDivisorExponent; // 0xb8
	char bUseAdaptiveError2 : 1; // 0xbc
	float RotationErrorSourceRatio; // 0xc0
	float TranslationErrorSourceRatio; // 0xc4
	float ScaleErrorSourceRatio; // 0xc8
	float MaxErrorPerTrackRatio; // 0xcc
	float PerturbationProbeSize; // 0xd0
};

