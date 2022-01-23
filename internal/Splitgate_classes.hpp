// Created by BlueFire1337
// Updated 2022-01-07
// Generated 2022-01-23

namespace off {
	constexpr auto GNames = 0x52607c0;
	constexpr auto GObjects = 0x529ccf0;
	constexpr auto GWorld = 0x53e10f0;
}

struct USlateSettings : UObject {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct APhysicsConstraintActor : ARigidBodyBase {
	UPhysicsConstraintComponent* ConstraintComp; // 0x220
	AActor* ConstraintActor1; // 0x228
	AActor* ConstraintActor2; // 0x230
	char bDisableCollision : 1; // 0x238
};

struct UPortalWarsRoundIntermissionWidget : UUserWidget {
	UTextBlock* NumRoundsText; // 0x260
	UTextBlock* CurrentRoundText; // 0x268
	URichTextBlock* RoundWinnerText; // 0x270
	UImage* LeftStarImage; // 0x278
	UImage* RightStarImage; // 0x280
	UTextBlock* CountdownText; // 0x288
};

struct APortalWarsRaceHUD : APortalWarsHUD {
	UPortalWarsRaceHUDOverlay* RaceHUDOverlayWidget; // 0x400
	UPortalWarsRaceHUDOverlay* RaceHUDOverlayWidgetClass; // 0x408
	UPortalWarsIndicatorWidget* GateIndicatorWidgetClass; // 0x410
};

struct APortalWarsGameMode : APortalWarsBaseGameMode {
	AActor* LastStartSpot; // 0x378
	int32_t KillScore; // 0x380
	int32_t AssistScore; // 0x384
	int32_t DeathScore; // 0x388
	int32_t SuicideScore; // 0x38c
	int32_t FriendlyFireScore; // 0x390
	int32_t TeabagScore; // 0x394
	int32_t NumAllowedSuicides; // 0x398
	TArray<TSoftClassPtr<UObject>> DefaultInventoryClasses; // 0x638
	bool bAllowReplayRecording; // 0x648
	bool bObjectiveGame; // 0x649
	TArray<FString> RelevantStats; // 0x650
};

struct UMovieSceneNiagaraSystemSpawnSection : UMovieSceneSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct UNiagaraDataInterfaceCurlNoise : UNiagaraDataInterface {
	uint32_t Seed; // 0x38
};

struct UPawnAction_Wait : UPawnAction {
	float TimeToWait; // 0x90
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

struct UPortalWarsComboBoxString : UComboBoxString {
	UAkAudioEvent* PressedEvent; // 0xe00
	UAkAudioEvent* SelectionChangedEvent; // 0xe08
};

struct UControlPointMeshComponent : UStaticMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4e0
};

struct USourceEffectRingModulationPreset : USoundEffectSourcePreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct UInterpGroupCamera : UInterpGroup {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
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

struct UDistributionVectorConstantCurve : UDistributionVector {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct UMovieSceneNiagaraVectorParameterTrack : UMovieSceneNiagaraParameterTrack {
	int32_t ChannelsUsed; // 0xb0
};

struct UPortalWarsKillStackEntryWidget : UUserWidget {
	UWidgetAnimation* FadeInAnimation; // 0x268
	UWidgetAnimation* FadeOutAnimation; // 0x270
	URichTextBlock* KilledText; // 0x278
	UTextBlock* DamageText; // 0x280
};

struct APortalWarsTeamStart : APlayerStart {
	int32_t SpawnTeam; // 0x250
	bool bNotForPlayers; // 0x254
	bool bNotForBots; // 0x255
	bool bInitialSpawn; // 0x256
};

struct UTextureLightProfile : UTexture2D {
	float Brightness; // 0x1a0
	float TextureMultiplier; // 0x1a4
};

struct UPortalWarsCareerWidget : UPortalWarsMenuWidget {
	UPortalWarsMenuWidget* StatsWidget; // 0x338
	UPortalWarsButtonWidget* StatsButton; // 0x340
	UPortalWarsMenuWidget* LeaderboardsWidget; // 0x348
	UPortalWarsButtonWidget* LeaderboardsButton; // 0x350
	UPortalWarsMenuWidget* ReplaysWidget; // 0x358
	UPortalWarsButtonWidget* ReplaysButton; // 0x360
};

struct UPortalWarsRoundHUDOverlayWidget : UUserWidget {
	UHorizontalBox* TopPlayerStatusHorizontalBox; // 0x260
	UHorizontalBox* BottomPlayerStatusHorizontalBox; // 0x268
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
	bool locked; // 0x48d
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

struct UPortalWarsServerEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* ServerNameText; // 0x420
	UTextBlock* ServerTypeText; // 0x428
	UTextBlock* MapText; // 0x430
	UImage* MapImage; // 0x438
	UTextBlock* ModeText; // 0x440
	UTextBlock* RegionText; // 0x448
	UWidget* PrivateRoot; // 0x450
	UImage* PrivateImage; // 0x458
	UTextBlock* PlayersText; // 0x460
	UTextBlock* SpectatorsText; // 0x468
	UWidget* CrossplayIndicator; // 0x470
	UPanelWidget* CreatedByPanel; // 0x478
	UPortalWarsPlayerEntryWidget* CreatedByEntryWidgetClass; // 0x480
	UWidgetSwitcher* BackgroundSwitcher; // 0x5e8
};

struct UComponentDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct UMaterialExpressionTextureProperty : UMaterialExpression {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct AAmbientSound : AActor {
	UAudioComponent* AudioComponent; // 0x220
};

struct UParticleModulePivotOffset : UParticleModuleLocationBase {
	FVector2D PivotOffset; // 0x30
};

struct UAnimationSharingStateProcessor : UObject {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct APhysicsVolume : AVolume {
	float TerminalVelocity; // 0x258
	int32_t Priority; // 0x25c
	float FluidFriction; // 0x260
	char bWaterVolume : 1; // 0x264
	char bPhysicsOnContact : 1; // 0x264
};

struct UGizmoArrowComponent : UGizmoBaseComponent {
	FVector Direction; // 0x470
	float Gap; // 0x47c
	float Length; // 0x480
	float Thickness; // 0x484
};

struct UStereoLayerShapeEquirect : UStereoLayerShape {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UMaterialExpressionStaticSwitch : UMaterialExpression {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
};

struct UAkWwiseTreeSelector : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
};

struct UMovieSceneCameraShakeSourceTriggerSection : UMovieSceneSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct AIntervalGizmoActor : AGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x220
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x228
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x230
};

struct UNoiseField : UFieldNodeFloat {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct AAkAcousticPortal : AVolume {
	AkAcousticPortalState InitialState; // 0x258
	float ObstructionRefreshInterval; // 0x25c
	ECollisionChannel ObstructionCollisionChannel; // 0x260
};

struct UCapsuleComponent : UShapeComponent {
	float CapsuleHalfHeight; // 0x468
	float CapsuleRadius; // 0x46c
};

struct UPawnMovementComponent : UNavMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UPortalWarsLobbyPlayerEntryWidget : UPortalWarsPlayerEntryWidget {
	UWidget* AdminIndicator; // 0x640
	UWidget* SpectatorIndicator; // 0x648
	UPortalWarsPlayerEntryWidget* PlayerEntry; // 0x878
	UBorder* TeamBorder; // 0x880
	UImage* TeamImage; // 0x888
};

struct UMaterialExpressionViewProperty : UMaterialExpression {
	EMaterialExposedViewProperty Property; // 0x40
};

struct UPortalWarsTeamCheckboxWidget : UPortalWarsInputWidget {
	UPortalWarsCheckBoxWidget* GlobalCheckbox; // 0x368
	UPortalWarsCheckBoxWidget* AlphaCheckbox; // 0x370
	UPortalWarsCheckBoxWidget* BravoCheckbox; // 0x378
	UPortalWarsCheckBox* TeamCheckbox; // 0x380
	FKey GamepadKey; // 0x390
	UImage* StandardIcon; // 0x3a8
	UImage* GamepadIcon; // 0x3b0
	UWidgetSwitcher* ConsoleSwitcher; // 0x3b8
	FLinearColor IconDefaultColor; // 0x3c0
	FLinearColor IconHoveredColor; // 0x3d0
};

struct UAkEventCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30
	int32_t EventId; // 0x34
};

struct UAkLateReverbComponent : USceneComponent {
	char bEnable : 1; // 0x1f8
	UAkAuxBus* AuxBus; // 0x200
	FString AuxBusName; // 0x208
	float SendLevel; // 0x218
	float FadeRate; // 0x21c
	float Priority; // 0x220
	UAkLateReverbComponent* NextLowerPriorityComponent; // 0x228
};

struct UMaterialExpressionNamedRerouteDeclaration : UMaterialExpressionNamedRerouteBase {
	FExpressionInput Input; // 0x40
	FName Name; // 0x54
	FGuid VariableGuid; // 0x5c
};

struct UMovieSceneFadeSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UAISenseConfig_Blueprint : UAISenseConfig {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UEnvQueryTest_GameplayTags : UEnvQueryTest {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
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

struct UARComponent : USceneComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct USpectatorBeaconState : UObject {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct UMaterialBillboardComponent : UPrimitiveComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x450
};

struct UParticleModuleVelocityBase : UParticleModule {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct AVectorFieldVolume : AActor {
	UVectorFieldComponent* VectorFieldComponent; // 0x220
};

struct UPortalWarsLowAmmoIndicatorWidget : UUserWidget {
	UWidgetAnimation* WarningFlashAnimation; // 0x260
	UTextBlock* AmmoText; // 0x268
	UPortalWarsInputDecoratorWidget* ActionInput; // 0x270
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter : UMaterialExpressionRuntimeVirtualTextureSample {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct APortalWarsMediaSoundActor : AActor {
	UMediaSoundComponent* MediaSoundComponent; // 0x220
	float VolumeMultiplier; // 0x228
};

struct UNavigationPath : UObject {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct AMagicLeapARPinInfoActor_C : AMagicLeapARPinInfoActorBase {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UStaticMeshComponent* Right; // 0x240
	UStaticMeshComponent* Forward; // 0x248
	UStaticMeshComponent* Up; // 0x250
	USphereComponent* ValidRadiusVisualizer; // 0x258
	USceneComponent* AxisRoot; // 0x260
	USceneComponent* VisualizerRoot; // 0x268
	UTextRenderComponent* TypeValue; // 0x270
	UTextRenderComponent* TransErrValue; // 0x278
	UTextRenderComponent* RotErrValue; // 0x280
	UTextRenderComponent* ConfidenceValue; // 0x288
	UTextRenderComponent* TransErrLabel; // 0x290
	UTextRenderComponent* RotErrLabel; // 0x298
	UTextRenderComponent* ConfidenceLabel; // 0x2a0
	UTextRenderComponent* PinIDValue; // 0x2a8
	USceneComponent* InfoRoot; // 0x2b0
	USceneComponent* Root; // 0x2b8
	float RotationSmoothSpeed; // 0x2c0
};

struct ULevelSequencePlayer : UMovieSceneSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x6a0
};

struct UTransformProxy : UObject {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
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

struct UPortalWarsRaceMatchResultWidget : UPortalWarsMatchResultWidget {
	UTextBlock* FinalTimeText; // 0x2a8
	UTextBlock* MapNameText; // 0x2b0
};

struct APWReplayPlayerController : APortalWarsPlayerController {
	APlayerState* ReplayPlayerState; // 0x6d0
	UPortalWarsReplayHUDOverlayWidget* ReplayHUDWidget; // 0x6e0
	TSoftClassPtr<UObject> ReplayHUDWidgetClass; // 0x6f8
	USpringArmComponent* CameraBoom; // 0x790
	UCameraComponent* FollowCamera; // 0x798
	FLinearColor AlphaTeamColor; // 0x7a0
	FLinearColor BravoTeamColor; // 0x7b0
};

struct UInterpTrackFloatBase : UInterpTrack {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct UAsyncActionLoadPrimaryAssetList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UMaterialExpressionStaticBoolParameter : UMaterialExpressionParameter {
	char DefaultValue : 1; // 0x58
};

struct UAchievementQueryCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneTrackInstanceSystem : UMovieSceneEntitySystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct UMovieSceneMarginSection : UMovieSceneSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
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

struct AChaosSolverActor : AActor {
	FChaosSolverConfiguration Properties; // 0x220
	float TimeStepMultiplier; // 0x288
	int32_t CollisionIterations; // 0x28c
	int32_t PushOutIterations; // 0x290
	int32_t PushOutPairIterations; // 0x294
	float ClusterConnectionFactor; // 0x298
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x29c
	bool DoGenerateCollisionData; // 0x29d
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2a0
	bool DoGenerateBreakingData; // 0x2b0
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2b4
	bool DoGenerateTrailingData; // 0x2c4
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2c8
	float MassScale; // 0x2d8
	bool bGenerateContactGraph; // 0x2dc
	bool bHasFloor; // 0x2dd
	float FloorHeight; // 0x2e0
	FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x2e4
	UBillboardComponent* SpriteComponent; // 0x2e8
	UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x308
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

struct USkeletalMeshSimplificationSettings : UDeveloperSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamFloat : UNiagaraPreviewAxis_InterpParamBase {
	float Min; // 0x38
	float Max; // 0x3c
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

struct UBTDecorator_CheckGameMode : UBTDecorator {
	APortalWarsGameMode* GameModeClass; // 0x68
};

struct UNavLinkDefinition : UObject {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UPortalWarsLeaderboardEntryWidget : UPortalWarsPlayerEntryWidget {
	UTextBlock* PositionText; // 0x640
	UImage* PositionImage; // 0x648
	UWidgetSwitcher* PositionSwitcher; // 0x650
	TMap<int32_t, UTexture2D*> PositionImages; // 0x658
	FButtonStyle DefaultButtonStyle; // 0x6a8
	FButtonStyle PlacementButtonStyle; // 0x920
};

struct UMovieSceneSlomoSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct USynthComponent : USceneComponent {
	char bAutoDestroy : 1; // 0x1f8
	char bStopWhenOwnerDestroyed : 1; // 0x1f8
	char bAllowSpatialization : 1; // 0x1f8
	char bOverrideAttenuation : 1; // 0x1f8
	char bEnableBusSends : 1; // 0x1fc
	char bEnableBaseSubmix : 1; // 0x1fc
	char bEnableSubmixSends : 1; // 0x1fc
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

struct UModularSynthPresetBank : UObject {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct UPortalWarsTutorialVideoReminderWidget : UPortalWarsUserWidget {
	UWidgetAnimation* FadeInAnimation; // 0x2a8
	UWidgetAnimation* FadeOutAnimation; // 0x2b0
};

struct UGizmoCircleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x470
	float Radius; // 0x47c
	float Thickness; // 0x480
	int32_t NumSides; // 0x484
	bool bViewAligned; // 0x488
	bool bOnlyAllowFrontFacingHits; // 0x489
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
	char bVisibleInSceneCaptureOnly : 1; // 0x216
	char bHiddenInSceneCapture : 1; // 0x217
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x218
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x21a
	FLightingChannels LightingChannels; // 0x21b
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x21c
	int32_t CustomDepthStencilValue; // 0x220
	FCustomPrimitiveData CustomPrimitiveData; // 0x228
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x238
	int32_t TranslucencySortPriority; // 0x250
	float TranslucencySortDistanceOffset; // 0x254
	int32_t VisibilityId; // 0x258
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x260
	int8_t VirtualTextureLodBias; // 0x270
	int8_t VirtualTextureCullMips; // 0x271
	int8_t VirtualTextureMinCoverage; // 0x272
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x273
	float LpvBiasMultiplier; // 0x278
	float BoundsScale; // 0x284
	TArray<AActor*> MoveIgnoreActors; // 0x298
	TArray<UPrimitiveComponent*> MoveIgnoreComponents; // 0x2a8
	FBodyInstance BodyInstance; // 0x2c8
	FMulticastSparseDelegate OnComponentHit; // 0x420
	FMulticastSparseDelegate OnComponentBeginOverlap; // 0x421
	FMulticastSparseDelegate OnComponentEndOverlap; // 0x422
	FMulticastSparseDelegate OnComponentWake; // 0x423
	FMulticastSparseDelegate OnComponentSleep; // 0x424
	FMulticastSparseDelegate OnBeginCursorOver; // 0x426
	FMulticastSparseDelegate OnEndCursorOver; // 0x427
	FMulticastSparseDelegate OnClicked; // 0x428
	FMulticastSparseDelegate OnReleased; // 0x429
	FMulticastSparseDelegate OnInputTouchBegin; // 0x42a
	FMulticastSparseDelegate OnInputTouchEnd; // 0x42b
	FMulticastSparseDelegate OnInputTouchEnter; // 0x42c
	FMulticastSparseDelegate OnInputTouchLeave; // 0x42d
	UPrimitiveComponent* LODParentPrimitive; // 0x448
};

struct UInterpTrackEvent : UInterpTrack {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct UMovieSceneEntitySystem : UObject {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
};

struct UMaterialExpressionCosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UMaterialExpressionFresnel : UMaterialExpression {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct UUniformScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0
};

struct AOnlineBeacon : AActor {
	float BeaconConnectionInitialTimeout; // 0x228
	float BeaconConnectionTimeout; // 0x22c
	UNetDriver* NetDriver; // 0x230
};

struct APortalWarsVotingGameState : APortalWarsLobbyGameState {
	TArray<APortalWarsVoteInfo*> VoteInfoList; // 0x840
};

struct UMaterialExpressionAbs : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UPortalWarsDailyCheckInWidget : UPortalWarsMenuWidget {
	UPanelWidget* RewardPanel; // 0x338
	UPortalWarsCheckInRewardWidget* Day7Reward; // 0x340
	UWidgetSwitcher* ActionSwitcher; // 0x348
	UPortalWarsButtonWidget* ClaimButton; // 0x350
	UPortalWarsRedeemableButtonWidget* RepairButton; // 0x358
	UPortalWarsCheckInDialogWidget* CheckInDialogWidgetClass; // 0x360
	UTextBlock* CurrentDayText; // 0x368
};

struct UNavCollision : UNavCollisionBase {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct UIpConnection : UNetConnection {
	float SocketErrorDisconnectDelay; // 0x1bf8
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded : UParticleModuleLocationPrimitiveCylinder {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct USourceEffectPannerPreset : USoundEffectSourcePreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UMovieSceneNiagaraParameterTrack : UMovieSceneNiagaraTrack {
	FNiagaraVariable Parameter; // 0x88
};

struct UDatasmithStaticMeshTemplate : UDatasmithObjectTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
};

struct USpotLightComponent : UPointLightComponent {
	float InnerConeAngle; // 0x358
	float OuterConeAngle; // 0x35c
};

struct UBTTask_SetTagCooldown : UBTTaskNode {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
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

struct UDistributionFloatUniform : UDistributionFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UTextPropertyTestObject : UObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct USoundNodeBranch : USoundNode {
	FName BoolParameterName; // 0x48
};

struct UPhysicalAnimationComponent : UActorComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UBTDecorator_Cooldown : UBTDecorator {
	float CooldownTime; // 0x68
};

struct UGizmoComponentWorldTransformSource : UGizmoBaseTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
};

struct UUMGSequenceTickManager : UObject {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct UMaterialExpressionRotateAboutAxis : UMaterialExpression {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct APortalWarsOddballHUD : APortalWarsHUD {
	UPortalWarsOddballIndicator* BallIndicator; // 0x400
	UPortalWarsIndicatorWidget* BallIndicatorWidgetClass; // 0x408
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

struct UBreakpoint : UObject {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UMeshSelectionSet : USelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
};

struct UARPlaneComponent : UARComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UParticleModuleVelocityInheritParent : UParticleModuleVelocityBase {
	FRawDistributionVector Scale; // 0x38
};

struct UPortalWarsProgressionUpdateDialogWidget : UPortalWarsDialogWidget {
	UPortalWarsXPUpdateWidget* XPUpdateWidget; // 0x390
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

struct APortalWarsTutorialGameMode : APortalWarsGameMode {
	TArray<FDefaultInventoryClass> TutorialDefaultInventoryClasses; // 0x6a8
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

struct UNiagaraScript : UNiagaraScriptBase {
	ENiagaraScriptUsage Usage; // 0x28
	FGuid UsageId; // 0x2c
	FNiagaraParameterStore RapidIterationParameters; // 0x40
	FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore; // 0xb8
	TArray<FNiagaraBoundParameter> ScriptExecutionBoundParameters; // 0x150
	FNiagaraVMExecutableDataId CachedScriptVMId; // 0x160
	FNiagaraVMExecutableData CachedScriptVM; // 0x1c8
	TArray<UNiagaraParameterCollection*> CachedParameterCollectionReferences; // 0x2b8
	TArray<FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces; // 0x2c8
};

struct UEnvQueryInstanceBlueprintWrapper : UObject {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct APortalWarsRaceGameMode : APortalWarsGameMode {
	UAkAudioEvent* NewRecordEvent; // 0x6e0
};

struct UMaterialInstanceConstant : UMaterialInstance {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x360
};

struct UBTTask_PlaySound : UBTTaskNode {
	USoundCue* SoundToPlay; // 0x70
};

struct UCompressedImageSequenceProtocol : UImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
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

struct ALight : AActor {
	ULightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct APortalWarsContaminationHUD : APortalWarsRoundHUD {
	UPortalWarsContaminationHUDOverlayWidget* ContaminationHUDOverlayWidget; // 0x440
	UPortalWarsIndicatorWidget* ContaminationNameIndicatorWidgetClass; // 0x448
};

struct UNiagaraBakerSettings : UObject {
	float StartSeconds; // 0x28
	float DurationSeconds; // 0x2c
	int32_t FramesPerSecond; // 0x30
	char bPreviewLooping : 1; // 0x34
	FIntPoint FramesPerDimension; // 0x38
	TArray<FNiagaraBakerTextureSettings> OutputTextures; // 0x40
	ENiagaraBakerViewMode CameraViewportMode; // 0x50
	FVector CameraViewportLocation[0x7]; // 0x54
	FRotator CameraViewportRotation[0x7]; // 0xa8
	float CameraOrbitDistance; // 0xfc
	float CameraFOV; // 0x100
	float CameraOrthoWidth; // 0x104
	char bUseCameraAspectRatio : 1; // 0x108
	float CameraAspectRatio; // 0x10c
	char bRenderComponentOnly : 1; // 0x110
};

struct UARFaceComponent : UARComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
};

struct UInputBehaviorSet : UObject {
	TArray<FBehaviorInfo> Behaviors; // 0x28
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

struct UBTTask_MakeNoise : UBTTaskNode {
	float Loudnes; // 0x70
};

struct UPacketHandlerProfileConfig : UObject {
	TArray<FString> Components; // 0x28
};

struct UWorldComposition : UObject {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
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

struct USignificanceManager : UObject {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct UPortalWarsDOMHillIndicator : UPortalWarsHillIndicatorWidget {
	float DisplayCaptureProgress; // 0x2f0
	UProgressBar* OnScreenProgressBar; // 0x2f8
	UProgressBar* OffScreenProgressBar; // 0x300
};

struct UMovieSceneGeometryCollectionTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UMotionControllerComponent : UPrimitiveComponent {
	int32_t PlayerIndex; // 0x450
	EControllerHand Hand; // 0x454
	FName MotionSource; // 0x458
	char bDisableLowLatencyUpdate : 1; // 0x460
	ETrackingStatus CurrentTrackingStatus; // 0x464
	bool bDisplayDeviceModel; // 0x465
	FName DisplayModelSource; // 0x468
	UStaticMesh* CustomDisplayMesh; // 0x470
	TArray<UMaterialInterface*> DisplayMeshMaterialOverrides; // 0x478
	UPrimitiveComponent* DisplayComponent; // 0x4f0
};

struct APortalWarsRoundGameState : APortalWarsGameState {
	int32_t CurrentRound; // 0x7c8
	int32_t ReplicatedElapsedServerTime; // 0x7d0
	TArray<int32_t> TeamRoundScores; // 0x7d8
	TArray<int32_t> RoundWinners; // 0x7e8
	ACameraActor* IntermissionCam; // 0x800
};

struct USoundSourceBus : USoundWave {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct UPortalWarsCustomGameWidget : UPortalWarsMenuWidget {
	UPortalWarsHostMenuWidget* HostWidget; // 0x338
	UPortalWarsServerBrowserWidget* BrowserWidget; // 0x340
	bool bUseLAN; // 0x348
};

struct UBTNode : UObject {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct APortalWarsTutorialCharacter : APortalWarsCharacter {
	int32_t StageID; // 0xda0
	int32_t GoalID; // 0xda4
	TArray<APortalWarsTutorialGoal*> Goals; // 0xda8
	int32_t HiddenUntilGoal; // 0xdb8
	TArray<APortalWall*> PortalWalls; // 0xdc0
};

struct UAnimBlueprint : UBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct UInterpTrackColorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UEnvQueryGenerator_ActorsOfClass : UEnvQueryGenerator {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
};

struct APortalWarsPlayerController : APortalWarsBasePlayerController {
	APortal* leftPortal; // 0x608
	APortal* rightPortal; // 0x610
	APortalSceneCapture2D* leftPortalSceneCapture; // 0x618
	APortalSceneCapture2D* rightPortalSceneCapture; // 0x620
	APortalSceneCapture2D* portalSceneCaptureClass; // 0x628
	UTextureRenderTarget2D* leftPortalRenderTarget; // 0x630
	UTextureRenderTarget2D* rightPortalRenderTarget; // 0x638
	UPortalWarsDialogWidget* PauseMenu; // 0x648
	UPortalWarsPauseMenuWidget* PauseMenuWidgetClass; // 0x650
	float PredictionFudgeFactor; // 0x658
	float MaxPredictionPing; // 0x65c
	float MaxMeleePredictionPing; // 0x660
	TArray<FActorOriginAndExtent> actorOriginAndExtentList; // 0x668
	UPortalWarsKillcam* Killcam; // 0x6a8
	UMaterial* OutlinePPMaterial; // 0x6c0
};

struct UAkWinGDKInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct USourceEffectSimpleDelayPreset : USoundEffectSourcePreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
};

struct UParticleModuleLocation : UParticleModuleLocationBase {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct UPortalWarsPickupZoneAnimInstance : UAnimInstance {
	bool bIsActive; // 0x2b8
	APortalWarsGunPickupZone* PickupZone; // 0x2c0
};

struct UMaterialFunctionInterface : UObject {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct UGizmoRectangleComponent : UGizmoBaseComponent {
	FVector DirectionX; // 0x470
	FVector DirectionY; // 0x47c
	float OffsetX; // 0x488
	float OffsetY; // 0x48c
	float LengthX; // 0x490
	float LengthY; // 0x494
	float Thickness; // 0x498
	char SegmentFlags; // 0x49c
};

struct UPhysicsThrusterComponent : USceneComponent {
	float ThrustStrength; // 0x1f8
};

struct AAkAmbientSound : AActor {
	UAkAudioEvent* AkAudioEvent; // 0x220
	UAkComponent* AkComponent; // 0x228
	bool StopWhenOwnerIsDestroyed; // 0x230
	bool AutoPost; // 0x231
};

struct UBTDecorator_TimeLimit : UBTDecorator {
	float TimeLimit; // 0x68
};

struct USynthSound : USoundWaveProcedural {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UPortalWarsChallengeButtonWidget : UPortalWarsEntryWidget {
	EChallengeType ChallengeType; // 0x420
	int32_t ChallengeGroupId; // 0x424
	UTextBlock* ChallengeProgressText; // 0x428
	UProgressBar* ChallengeProgressBar; // 0x430
	UWidgetSwitcher* CompleteIndicatorSwitcher; // 0x438
	UPortalWarsClaimChallengeIndicatorWidget* ClaimIndicator; // 0x440
	UTextBlock* TimeDescriptionText; // 0x450
	UTextBlock* NoteText; // 0x458
	UWidget* NoteRoot; // 0x460
	UImage* ThumbnailImage; // 0x468
	UTexture2D* DefaultImage; // 0x470
};

struct ABat : AGun {
	float BatteryPercentagePerSwing; // 0x698
	UParticleSystem* MeleeImpact1PFX; // 0x6a8
	UParticleSystem* MeleeImpact3PFX; // 0x6b0
	FLinearColor ElectricityInEffectsRangeColor; // 0x6b8
	FLinearColor ElectricityInMeleeRangeColor; // 0x6c8
	FLinearColor BatInEffectsRangeEmissiveColor; // 0x6d8
	FLinearColor BatInMeleeRangeEmissiveColor; // 0x6e8
	float EffectsRange; // 0x6f8
	float MaxOpenPercentInEffectsRange; // 0x700
	float FullyOpenInterpSpeed; // 0x704
	float FullyClosedInterpSpeed; // 0x708
	float EffectsRangeInterpSpeed; // 0x70c
	float PlateInterpToVisibleSpeed; // 0x710
	float PlateInterpToHiddenSpeed; // 0x714
	UMaterialInstanceDynamic* BatDynamicMaterial; // 0x718
	UMaterialInstanceDynamic* ElectricityDynamicMaterial; // 0x720
	UMaterialInstanceDynamic* PlatesDynamicMaterial; // 0x728
	UMaterialInstanceDynamic* ThirdPersonBatDynamicMaterial; // 0x730
	UMaterialInstanceDynamic* ThirdPersonElectricityDynamicMaterial; // 0x738
	UAkAudioEvent* BatAmbientStartEvent; // 0x748
	UAkAudioEvent* BatAmbientStopEvent; // 0x750
	UAkAudioEvent* BatOpenedSFX; // 0x758
	UAkAudioEvent* OutOfAmmoMeleeHitSound; // 0x760
	UAkAudioEvent* OutOfAmmoSwingEvent; // 0x768
	UForceFeedbackEffect* OutOfAmmoMeleeForceFeedback; // 0x778
};

struct AEmitter : AActor {
	UParticleSystemComponent* ParticleSystemComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
	char bPostUpdateTickGroup : 1; // 0x228
	char bCurrentlyActive : 1; // 0x228
	FMulticastInlineDelegate OnParticleSpawn; // 0x230
	FMulticastInlineDelegate OnParticleBurst; // 0x240
	FMulticastInlineDelegate OnParticleDeath; // 0x250
	FMulticastInlineDelegate OnParticleCollide; // 0x260
};

struct UMaterialExpressionChannelMaskParameter : UMaterialExpressionVectorParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct UMaterialExpressionReflectionCapturePassSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Reflection; // 0x54
};

struct UDistributionVectorConstant : UDistributionVector {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct UPortalWarsChatEntryWidget : UUserWidget {
	UTextBlock* PlayerNameText; // 0x260
	UImage* AvatarImage; // 0x268
	UBorder* AvatarBorder; // 0x270
	UTextBlock* ChatText; // 0x278
	FTextChatData ChatData; // 0x288
};

struct UInterpGroupInst : UObject {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct APortalWarsGGHUD : APortalWarsHUD {
	UPortalWarsGGHUDOverlayWidget* GGHUDOverlayWidget; // 0x400
	UPortalWarsGGHUDOverlayWidget* GGHUDOverlayWidgetClass; // 0x408
};

struct UParticleModuleVectorFieldRotation : UParticleModuleVectorFieldBase {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct AGun : ABaseGun {
	EBodyPart BodyPartTargetForBots; // 0x2b8
	float TimeBetweenShotsForBots; // 0x2bc
	FWeaponData WeaponConfig; // 0x2c0
	APortalWarsPickup* PickupClass; // 0x2f0
	char gunValue; // 0x2f8
	int32_t CurrentAmmo; // 0x2fc
	int32_t CurrentAmmoInClip; // 0x300
	float EquipTime; // 0x318
	char bAutoEquip : 1; // 0x31c
	bool bCanFirePortalsWhileEquipped; // 0x324
	bool bIsChargingWeapon; // 0x340
	FRecoilData recoilConfig; // 0x344
	UCameraShakeBase* SpectatorCameraShake; // 0x380
	UAkAudioEvent* MeleeSwingEvent; // 0x3b8
	UAkAudioEvent* MeleeHitEvent; // 0x3c0
	bool isMeleeWeapon; // 0x3d4
	UDamageType* MeleeDamageType; // 0x3d8
	float MinTimeBeforeApplyingMeleeDmg; // 0x3e0
	float MeleeRangeScaleOverride; // 0x3e4
	float MeleeHitCameraShakeScale; // 0x3e8
	float MeleeCameraShakeDelay; // 0x3ec
	UCameraShakeBase* MeleeHitCameraShake; // 0x3f8
	UCameraShakeBase* MeleeCameraShake; // 0x400
	int32_t GunID; // 0x410
	FString InternalName; // 0x418
	FText DisplayName; // 0x428
	FText ShortDisplayName; // 0x440
	UTexture2D* GunIcon; // 0x458
	FAutoAimData AutoAimConfig; // 0x460
	EWeaponState CurrentState; // 0x498
	FShotInfo ShotInfo; // 0x499
	UForceFeedbackEffect* FireForceFeedback; // 0x4a0
	UForceFeedbackEffect* MeleeForceFeedback; // 0x4a8
	FWeaponAnimMontage EquipAnim; // 0x4b0
	FWeaponAnimMontage FireAnim; // 0x4c0
	FWeaponAnimMontage ReloadAnim; // 0x4d0
	FWeaponAnimMontage ReloadShortAnim; // 0x4e0
	TArray<FWeaponAnimMontage> MeleeAnims; // 0x4f0
	FWeaponAnimMontage ThrowGrenadeAnim; // 0x500
	FWeaponAnimMontage FirePortalAnim; // 0x510
	FWeaponAnimMontage SprintingFirePortalAnim; // 0x520
	FWeaponAnimMontage ClosePortalAnim; // 0x530
	FWeaponAnimMontage SprintingClosePortalAnim; // 0x540
	FWeaponAnimMontage InspectWeaponAnim; // 0x550
	FWeaponAnimList WeaponSpecificAnimations; // 0x560
	UAkAudioEvent* FireEvent; // 0x5c8
	UAkAudioEvent* OutOfAmmoEvent; // 0x5d0
	UAkAudioEvent* FireStopEvent; // 0x5d8
	UAkAudioEvent* ZoomInEvent; // 0x5e0
	UAkAudioEvent* ZoomOutEvent; // 0x5e8
	UAkAudioEvent* AmmoPickupEvent; // 0x5f0
	UAkAudioEvent* GunCollisionEvent; // 0x5f8
	UAkAudioEvent* EquipEvent; // 0x600
	UAmmoCounterWidgetComponent* AmmoCounter; // 0x610
	FFuzzyConfig FuzzyConfig[0x9]; // 0x680
};

struct UMagicLeapARPinComponent : USceneComponent {
	FString ObjectUID; // 0x1f8
	int32_t UserIndex; // 0x208
	EMagicLeapAutoPinType AutoPinType; // 0x20c
	bool bShouldPinActor; // 0x20d
	UMagicLeapARPinSaveGame* PinDataClass; // 0x210
	TSet<EMagicLeapARPinType> SearchPinTypes; // 0x218
	USphereComponent* SearchVolume; // 0x268
	FMulticastInlineDelegate OnPersistentEntityPinned; // 0x270
	FMulticastInlineDelegate OnPersistentEntityPinLost; // 0x280
	FMulticastInlineDelegate OnPinDataLoadAttemptCompleted; // 0x290
	FGuid PinnedCFUID; // 0x2a0
	USceneComponent* PinnedSceneComponent; // 0x2b0
	UMagicLeapARPinSaveGame* PinData; // 0x2b8
};

struct UDatasmithMaterialInstanceTemplate : UDatasmithObjectTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct AAmbianceVolume : ATriggerVolume {
	UAkAudioEvent* EventOnEnter; // 0x258
	UAkAudioEvent* EventOnExit; // 0x260
	FString StateGroup; // 0x268
	FString StateOnEnter; // 0x278
	FString StateOnExit; // 0x288
};

struct ATriggerBase : AActor {
	UShapeComponent* CollisionComponent; // 0x220
};

struct UTextureLODSettings : UObject {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct UMovieSceneCameraAnimTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x80
};

struct UEnvQueryGenerator_SimpleGrid : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue GridSize; // 0xb8
	FAIDataProviderFloatValue SpaceBetween; // 0xf0
	UEnvQueryContext* GenerateAround; // 0x128
};

struct UDistributionFloatConstant : UDistributionFloat {
	float Constant; // 0x38
};

struct UPortalWarsGGNotificationWidget : UUserWidget {
	UImage* KillImage; // 0x260
	UHorizontalBox* RootHorizontalBox; // 0x268
	UTexture2D* BlueKillImage; // 0x270
};

struct UPortalWarsGamepadBindingMissingDialogWidget : UPortalWarsDialogWidget {
	FMulticastInlineDelegate OnWarningButtonClickedDelegate; // 0x390
	UPortalWarsButtonWidget* AcceptButton; // 0x3a0
	UTextBlock* TitleText; // 0x3a8
	UTextBlock* SubtitleText; // 0x3b0
	UTextBlock* MissingText; // 0x3b8
};

struct ULightmassPrimitiveSettingsObject : UObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct USoundSubmixBase : UObject {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
};

struct UPortalWarsInputDecoratorWidget : UPortalWarsUserWidget {
	UPanelWidget* MainPanel; // 0x2a8
	FText RichText; // 0x2b0
	TArray<FString> InputActions; // 0x2c8
	bool KeyboardBrackets; // 0x2d8
	FVector2D IconSize; // 0x2dc
	UDataTable* TextStyleSet; // 0x2e8
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

struct APortalWarsGameState : APortalWarsBaseGameState {
	UAnnouncerInterface* AnnouncerInterface; // 0x6d0
	UPortalWarsCustomAntiCheat* AntiCheat; // 0x6d8
	char bTeamGame : 1; // 0x6f8
	TArray<int32_t> TeamScores; // 0x700
	TArray<APortalWarsPickup*> Pickups; // 0x780
	TArray<AOutOfBoundsVolume*> OOBVolumes; // 0x790
	TArray<APlayAreaVolume*> PlayAreaVolumes; // 0x7a0
	APortalWarsCrowd* Crowd; // 0x7b0
	TArray<APortal*> Portals; // 0x7b8
};

struct UMaterialExpressionSceneDepth : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct ACullDistanceVolume : AVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x258
	char bEnabled : 1; // 0x268
};

struct UPortalWarsRecentPlayersWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* RefreshButton; // 0x340
	UPanelWidget* RecentPlayersPanel; // 0x348
	UPortalWarsSocialPlayerEntry* PlayerEntryWidgetClass; // 0x350
	UPortalWarsPlayerActionsWidget* PlayerActionsWidgetClass; // 0x358
	UTextBlock* ErrorText; // 0x368
};

struct UTcpMessagingSettings : UObject {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
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
	char bVisibleInRayTracing : 1; // 0x158
	char bEvaluateWorldPositionOffset : 1; // 0x158
	FBodyInstance BodyInstance; // 0x160
	EHasCustomNavigableGeometry CustomNavigableGeometry; // 0x2b8
	FLightingChannels LightingChannels; // 0x2b9
	char bRenderCustomDepth : 1; // 0x2bc
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x2c0
	int32_t CustomDepthStencilValue; // 0x2c4
	int32_t TranslucencySortPriority; // 0x2c8
	float CollisionRadius; // 0x2cc
	float ShadeRadius; // 0x2d0
	int32_t NumSteps; // 0x2d4
	float InitialSeedDensity; // 0x2d8
	float AverageSpreadDistance; // 0x2dc
	float SpreadVariance; // 0x2e0
	int32_t SeedsPerStep; // 0x2e4
	int32_t DistributionSeed; // 0x2e8
	float MaxInitialSeedOffset; // 0x2ec
	bool bCanGrowInShade; // 0x2f0
	bool bSpawnsInShade; // 0x2f1
	float MaxInitialAge; // 0x2f4
	float MaxAge; // 0x2f8
	float OverlapPriority; // 0x2fc
	FFloatInterval ProceduralScale; // 0x300
	FRuntimeFloatCurve ScaleCurve; // 0x308
	int32_t ChangeCount; // 0x390
	char ReapplyDensity : 1; // 0x394
	char ReapplyRadius : 1; // 0x394
	char ReapplyAlignToNormal : 1; // 0x394
	char ReapplyRandomYaw : 1; // 0x394
	char ReapplyScaling : 1; // 0x394
	char ReapplyScaleX : 1; // 0x394
	char ReapplyScaleY : 1; // 0x394
	char ReapplyScaleZ : 1; // 0x394
	char ReapplyRandomPitchAngle : 1; // 0x395
	char ReapplyGroundSlope : 1; // 0x395
	char ReapplyHeight : 1; // 0x395
	char ReapplyLandscapeLayers : 1; // 0x395
	char ReapplyZOffset : 1; // 0x395
	char ReapplyCollisionWithWorld : 1; // 0x395
	char ReapplyVertexColorMask : 1; // 0x395
	char bEnableDensityScaling : 1; // 0x395
	char bEnableDiscardOnLoad : 1; // 0x396
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x398
	int32_t VirtualTextureCullMips; // 0x3a8
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x3ac
};

struct ULandscapeMaterialInstanceConstant : UMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x368
	char bIsLayerThumbnail : 1; // 0x378
	char bDisableTessellation : 1; // 0x378
	char bMobile : 1; // 0x378
	char bEditorToolUsage : 1; // 0x378
};

struct AProjectileGun : AGun {
	FProjectileWeaponData ProjectileConfig; // 0x698
	float LocalHitDetectionDuration; // 0x6b8
	bool bSpawnsLocalProjectiles; // 0x6bc
	TArray<AProjectile*> LocalProjectiles; // 0x6c8
};

struct UGizmoWorldAxisSource : UObject {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
};

struct ALODActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	TMap<FHLODInstancingKey, UInstancedStaticMeshComponent*> InstancedStaticMeshComponents; // 0x228
	UHLODProxy* Proxy; // 0x278
	FName Key; // 0x280
	float LODDrawDistance; // 0x288
	int32_t LODLevel; // 0x28c
	TArray<AActor*> SubActors; // 0x290
	char CachedNumHLODLevels; // 0x2a0
};

struct APortalWarsPlayerState : APlayerState {
	char TeamNum; // 0x338
	char KillStreak; // 0x358
	char MultiKillCounter; // 0x359
	TMap<APortalWarsPlayerState*, float> DamagePlayers; // 0x3b8
	FPlayerStatsInfo_InDepth PlayerStats; // 0x4f8
	FEndGamePlayerInfo PostGameStats; // 0x5c0
	bool bIsAdmin; // 0x800
	TArray<FCustomizationId> PlayerCustomizations; // 0x808
	TArray<UObject*> CachedCustomizationObjects; // 0x830
	UTexture* PlayerAvatar; // 0x878
	UTexture* SavedPlayerAvatar; // 0x880
	UTexture* SavedBotAvatar; // 0x888
	TArray<FUserRankInfo> PlayerRanks; // 0x890
	FUserProgressionInfo Progression; // 0x8b8
	FUserDailyStreakInfo DailyStreak; // 0x8d8
	bool bHideNames; // 0x948
	char bAnonymousMode : 1; // 0x949
	char bPartyChatOnly : 1; // 0x949
	APortalWarsCharacter* CachedCharacter; // 0x970
	char bQuitter : 1; // 0x978
	int32_t InactiveTime; // 0x97c
	bool bJoinedInProgress; // 0x980
	bool bIsFlagged; // 0x9ad
	bool bIsReadyForNextMatch; // 0x9c8
	FBotProfileData DefaultProfile; // 0xa00
	float SimulatedFOV; // 0xac0
};

struct UPortalWarsChallengesInspectWidget : UPortalWarsInspectWidget {
	UWidget* ItemsRoot; // 0x3c0
	UPortalWarsCustomScrollWidget* ItemsPanel; // 0x3c8
	UPortalWarsChallengeEntryWidget* ItemEntryWidgetClass; // 0x3d0
	UPortalWarsChallengeEntryWidget* ChallengeEntry; // 0x3d8
};

struct APortalWarsTeabagZone : AActor {
	APlayerState* KilledPlayerState; // 0x220
	APortalWarsCharacter* KilledCharacter; // 0x228
	UStaticMeshComponent* TeabagMesh; // 0x250
};

struct UMasterAudioSubmixCaptureProtocol : UMovieSceneAudioCaptureProtocolBase {
	FString Filename; // 0x58
};

struct ARailGun : AMultiKillGun {
	FWeaponAnimMontage ChargeAnim; // 0x780
	FWeaponAnimMontage DischargeAnim; // 0x790
	UAkAudioEvent* ChargeStartEvent; // 0x7a0
	UAkAudioEvent* ChargeStopEvent; // 0x7a8
	UAkAudioEvent* DischargeEvent; // 0x7b0
	UParticleSystem* ChargeFX_1P; // 0x7b8
	UParticleSystem* ChargeFX_3P; // 0x7c0
	UParticleSystemComponent* ChargePSC_1P; // 0x7c8
	UParticleSystemComponent* ChargePSC_3P; // 0x7d0
	float timeToCharge; // 0x7d8
	float BatteryPercentagePerShot; // 0x7dc
	UAmmoCounterWidgetComponent* ChargeCounter; // 0x7e0
};

struct UPortalWarsCareerProgressWidget : UPortalWarsUserWidget {
	UTextBlock* PlayerNameText; // 0x2a8
	UImage* AvatarImage; // 0x2b0
	UPortalWarsProgressionIconWidget* ProgressionLevelIcon; // 0x2b8
	UTextBlock* ProgressionLevelText; // 0x2c0
	UProgressBar* ProgressionProgressBar; // 0x2c8
	UTextBlock* ProgressionLevelProgressText; // 0x2d0
	UTextBlock* ProgressionLevelTotalText; // 0x2d8
	UWidget* ProgressionProgressRoot; // 0x2e0
	UPortalWarsProgressionIconWidget* BattlePassLevelIcon; // 0x2f8
	UTextBlock* BattlePassLevelText; // 0x300
	UProgressBar* BattlePassProgressBar; // 0x308
	UTextBlock* BattlePassLevelProgressText; // 0x310
	UTextBlock* BattlePassLevelTotalText; // 0x318
	UWidget* BattlePassProgressRoot; // 0x320
	UWidgetSwitcher* BattlePassSwitcher; // 0x328
	UTextBlock* RankText; // 0x330
	UImage* RankIcon; // 0x338
	UWidget* RankRoot; // 0x340
	bool bShowRank; // 0x348
};

struct UProxyLODMeshSimplificationSettings : UDeveloperSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
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

struct UPortalWarsGateIndicatorWidget : UPortalWarsIndicatorWidget {
	UWidget* Pointer; // 0x2b8
	FVector Offset; // 0x2c0
};

struct UPortalWarsItemShopInspectWidget : UPortalWarsInspectWidget {
	UWidget* ItemsRoot; // 0x3c0
	UPortalWarsCustomScrollWidget* ItemsPanel; // 0x3c8
	UPortalWarsItemShopEntry* ItemEntryWidgetClass; // 0x3d0
	UPortalWarsItemShopPurchasePanel* PurchasePanel; // 0x3d8
	UPortalWarsItemShopPurchasePanel* IndividualPurchasePanel; // 0x3e0
	UWidget* PurchasableDescriptionRoot; // 0x3e8
	UTextBlock* PurchasableDescriptionText; // 0x3f0
	UPortalWarsItemPurchaseDialog* PurchaseDialogWidgetClass; // 0x3f8
};

struct UParticleModuleAccelerationConstant : UParticleModuleAccelerationBase {
	FVector Acceleration; // 0x38
};

struct UMovieScene2DTransformSection : UMovieSceneSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UMaterialExpressionRotator : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct AOddballItem : ASpecialItem {
	APortalWarsOddballGameState* OddballGameState; // 0x6a0
};

struct UInterpTrackSound : UInterpTrackVectorBase {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UPortalWarsStatsPlaylistWidget : UPortalWarsMenuWidget {
	UPortalWarsStatsEntryWidget* TotalStats; // 0x338
	UTextBlock* PlayerNameText; // 0x340
	UImage* AvatarImage; // 0x348
	UTextBlock* RankNameText; // 0x350
	UImage* RankIcon; // 0x358
	UTextBlock* RankXPText; // 0x360
	UWidget* RankRoot; // 0x368
	UTextBlock* PlaylistText; // 0x370
	UPortalWarsButtonWidget* ChangePlaylistButton; // 0x378
	UComboBoxString* PlaylistComboBox; // 0x380
	EPlaylistType PlaylistType; // 0x438
};

struct UMaterialExpressionLandscapeLayerBlend : UMaterialExpression {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
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

struct AARSharedWorldGameState : AGameState {
	TArray<char> PreviewImageData; // 0x290
	TArray<char> ARWorldData; // 0x2a0
	int32_t PreviewImageBytesTotal; // 0x2b0
	int32_t ARWorldBytesTotal; // 0x2b4
	int32_t PreviewImageBytesDelivered; // 0x2b8
	int32_t ARWorldBytesDelivered; // 0x2bc
};

struct UEndMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UOperatorField : UFieldNodeBase {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
};

struct ULoudnessNRTSettings : UAudioSynesthesiaNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
};

struct UMovieSceneCinematicShotSection : UMovieSceneSubSection {
	FString ShotDisplayName; // 0x168
	FText DisplayName; // 0x178
};

struct AGameStateBase : AInfo {
	AGameModeBase* GameModeClass; // 0x220
	AGameModeBase* AuthorityGameMode; // 0x228
	ASpectatorPawn* SpectatorClass; // 0x230
	TArray<APlayerState*> PlayerArray; // 0x238
	bool bReplicatedHasBegunPlay; // 0x248
	float ReplicatedWorldTimeSeconds; // 0x24c
	float ServerWorldTimeSecondsDelta; // 0x250
	float ServerWorldTimeSecondsUpdateFrequency; // 0x254
};

struct UPortalWarsDOMControlledHillWidget : UUserWidget {
	UTextBlock* HillLetterText; // 0x260
	UImage* HillImage; // 0x268
	float PaddingBetweenEntries; // 0x270
};

struct UAnimBoneCompressionCodec : UObject {
	FString Description; // 0x28
};

struct UInputKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UCrowdFollowingComponent : UPathFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct UShowLoginUICallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTimelineComponent : UActorComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct UNiagaraParameterCollectionInstance : UObject {
	UNiagaraParameterCollection* Collection; // 0x28
	TArray<FNiagaraVariable> OverridenParameters; // 0x30
	FNiagaraParameterStore ParameterStorage; // 0x40
};

struct APhysicsThruster : ARigidBodyBase {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x220
};

struct UPortalWarsCustomGameFiltersWidget : UPortalWarsDialogWidget {
	UPortalWarsButtonWidget* ApplyButton; // 0x390
	FPWTableRowBase AnyOption; // 0x398
	UPortalWarsTextInputWidget* ServerName; // 0x410
	UPortalWarsRadioGroupWidget* RegionRadioGroup; // 0x418
	UPortalWarsGlobalCarouselWidget* MapSelector; // 0x420
	UPortalWarsGlobalCarouselWidget* ModeSelector; // 0x428
	UPortalWarsTextCarouselWidget* LobbySizeSelector; // 0x430
	TArray<FText> LobbySizeOptions; // 0x438
	UPortalWarsCheckBoxWidget* PrivateCheckBox; // 0x448
	UPortalWarsCheckBoxWidget* FullCheckBox; // 0x450
};

struct UPortalWarsCurrencyStoreWidget : UPortalWarsItemShopSectionWidget {
	UPortalWarsButtonWidget* RetryButton; // 0x398
	UWidgetSwitcher* StoreSwitcher; // 0x3a0
	TArray<UPortalWarsCurrencyStoreEntry*> StoreEntries; // 0x3a8
	UPortalWarsCurrencyPurchaseDialog* CurrencyDialogWidgetClass; // 0x3c0
};

struct UParticleModuleVelocity : UParticleModuleVelocityBase {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
};

struct UMaterialExpressionSaturate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UPortalWarsRaceHUDOverlay : UUserWidget {
	URaceBookmarkWidget* BookmarkWidget; // 0x260
	UTextBlock* CurrentGateNumText; // 0x268
	UTextBlock* MapNameText; // 0x270
	UTextBlock* CurrentTimeText; // 0x278
	UTextBlock* RecordHolderNameText; // 0x280
	UTextBlock* RecordTimeText; // 0x288
	UWidget* RaceRoot; // 0x2b8
};

struct UMaterialExpressionDDY : UMaterialExpression {
	FExpressionInput Value; // 0x40
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

struct UPortalWarsGamepadBindingCustomizeButtonWidget : UPortalWarsUserWidget {
	FMulticastInlineDelegate OnCustomizeGamepadBinds; // 0x2a8
	UPortalWarsButton* CustomizeButton; // 0x2b8
	UTextBlock* ValueText; // 0x2c0
	UWidget* HoveredIndicator; // 0x2c8
	FSlateColor StandardColor; // 0x2d0
	FSlateColor ActiveColor; // 0x2f8
};

struct UPortalWarsScoreboardPlayerWidget : UPortalWarsUserWidget {
	UImage* BackgroundImage; // 0x2a8
	UTexture2D* BlueBackgroundImage; // 0x2b0
	UTexture2D* RedBackgroundImage; // 0x2b8
	UTexture2D* SelfBackgroundImage; // 0x2c0
	UImage* ArmorCustomizationImage; // 0x2c8
	UTextBlock* ScoreText; // 0x2d0
	UTextBlock* KillsText; // 0x2d8
	UTextBlock* DeathsText; // 0x2e0
	UTextBlock* DamageText; // 0x2e8
	UWidget* StatsRoot; // 0x2f0
	UImage* PrimaryWeaponImage; // 0x2f8
	UImage* SecondaryWeaponImage; // 0x300
	UWidget* InventoryPanel; // 0x308
	USizeBox* PrimaryWeaponImageSizeBox; // 0x310
	USizeBox* SecondaryWeaponImageSizeBox; // 0x318
	UTextBlock* RespawnTimeText; // 0x320
	UWidget* DeathRoot; // 0x328
	UWidget* PlayerRoot; // 0x330
	UImage* ZombieImage; // 0x338
	UTexture2D* BlueZombieImage; // 0x340
	UTexture2D* RedZombieImage; // 0x348
	UPortalWarsPlayerEntryWidget* PlayerEntry; // 0x350
};

struct UMRMeshComponent : UPrimitiveComponent {
	UMaterialInterface* Material; // 0x460
	UMaterialInterface* WireframeMaterial; // 0x468
	bool bCreateMeshProxySections; // 0x470
	bool bUpdateNavMeshOnMeshUpdate; // 0x471
	bool bNeverCreateCollisionMesh; // 0x472
	UBodySetup* CachedBodySetup; // 0x478
	TArray<UBodySetup*> BodySetups; // 0x480
};

struct UAnimationSharingManager : UObject {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct UParticleModuleSpawnBase : UParticleModule {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct UFileMediaSource : UBaseMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct UARPoseComponent : UARComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionDecalMipmapLevel : UMaterialExpression {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
};

struct UWheeledVehicleMovementComponent4W : UWheeledVehicleMovementComponent {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UPortalWarsNumericCarouselWidget : UPortalWarsInputCarouselWidget {
	int32_t Value; // 0x3a0
	int32_t MinValue; // 0x3a4
	int32_t MaxValue; // 0x3a8
	int32_t StepSize; // 0x3ac
	bool bAllowWrap; // 0x3b0
	UTextBlock* ConsoleValueText; // 0x3b8
	UIntegerSpinBox* SpinBox; // 0x3c0
	bool bDisplayAsTime; // 0x3c8
};

struct UMaterialExpressionTextureSampleParameterSubUV : UMaterialExpressionTextureSampleParameter2D {
	char bBlend : 1; // 0x80
};

struct UNiagaraSimulationStageBase : UNiagaraMergeable {
	UNiagaraScript* Script; // 0x28
	FName SimulationStageName; // 0x30
	char bEnabled : 1; // 0x38
};

struct AFieldSystemActor : AActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x220
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
	FString ProfilingEventName; // 0x2a0
};

struct UInterpTrackInstDirector : UInterpTrackInst {
	AActor* OldViewTarget; // 0x28
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
	TArray<FTransform> RetargetSourceAssetReferencePose; // 0x170
	EAnimInterpolationType Interpolation; // 0x180
	bool bEnableRootMotion; // 0x181
	ERootMotionRootLock RootMotionRootLock; // 0x182
	bool bForceRootLock; // 0x183
	bool bUseNormalizedRootMotionScale; // 0x184
	bool bRootMotionSettingsCopiedFromMontage; // 0x185
	TArray<FAnimSyncMarker> AuthoredSyncMarkers; // 0x188
	TArray<FBakedCustomAttributePerBoneData> BakedPerBoneCustomAttributeData; // 0x1b0
};

struct UTextureRenderTargetVolume : UTextureRenderTarget {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	int32_t SizeZ; // 0x188
	FLinearColor ClearColor; // 0x18c
	EPixelFormat OverrideFormat; // 0x19c
	char bHDR : 1; // 0x19d
	char bForceLinearGamma : 1; // 0x19d
};

struct ABurstLineTraceGun : ALineTraceGun {
	FBurstLineTraceGunData BurstLineTraceGunConfig; // 0x768
};

struct UMaterialExpressionTextureSample : UMaterialExpressionTextureBase {
	FExpressionInput Coordinates; // 0x48
};

struct UPortalWarsRewardEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* RewardTitleText; // 0x420
	UTextBlock* RewardValueText; // 0x428
	UTextBlock* RewardDescriptionText; // 0x430
	UImage* RarityIcon; // 0x438
	UImage* RarityBG; // 0x440
	UImage* RarityBorder; // 0x448
	UImage* RarityScrim; // 0x450
	TMap<ECustomizationRarity, UTexture2D*> RarityBackgrounds; // 0x458
	TMap<ECustomizationRarity, UTexture2D*> RarityScrims; // 0x4a8
	TMap<ECustomizationRarity, FLinearColor> RarityTitleColors; // 0x4f8
	TMap<ECustomizationRarity, FLinearColor> RarityBorderColors; // 0x548
	UImage* RewardImage; // 0x598
	UWidgetSwitcher* ThumbnailSwitcher; // 0x5c8
	UBorder* NameTagBorder; // 0x5d0
	UWidget* XPRewardRoot; // 0x5d8
	UWidget* DropRewardRoot; // 0x5e0
	TMap<ECustomizationType, FMargin> CustomizationThumbnailPaddings; // 0x5e8
	TMap<ERewardType, FMargin> RewardThumbnailPaddings; // 0x638
	TMap<ECustomizationType, float> CustomizationRenderAngles; // 0x688
	TMap<ERewardType, float> RewardRenderAngles; // 0x6d8
};

struct UPortalWarsChallengeDialogWidget : UPortalWarsDialogWidget {
	UPortalWarsChallengeEntryWidget* ChallengeEntryWidgetClass; // 0x390
	UPortalWarsChallengeEntryWidget* CompletedChallengeEntryWidgetClass; // 0x398
	UPanelWidget* EntriesPanel; // 0x3a0
	TArray<UPortalWarsChallengeEntryWidget*> ChallengeEntries; // 0x3b8
};

struct APortalWarsTakedown : APortalWarsRoundGameMode {
	APortalWarsTakedownGameState* TakedownGameState; // 0x6b8
	int32_t RespawnChangePerKill; // 0x6c0
	int32_t RespawnChangePerDeath; // 0x6c4
	int32_t MinRespawnTime; // 0x6c8
	int32_t MaxRespawnTime; // 0x6cc
	int32_t FinalKillScore; // 0x6d0
};

struct UPortalWarsRadioGroupWidget : UPortalWarsInputWidget {
	TArray<FText> DefaultOptions; // 0x370
	int32_t DefaultIndex; // 0x380
	UPanelWidget* RadioGroupPanel; // 0x388
	UPortalWarsEntryWidget* RadioButtonWidgetClass; // 0x390
};

struct UInterpTrackInstBoolProp : UInterpTrackInstProperty {
	bool ResetBool; // 0x60
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

struct UAnimSequenceBase : UAnimationAsset {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct UInterpTrackLinearColorBase : UInterpTrack {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UCompositeDataTable : UDataTable {
	TArray<UDataTable*> ParentTables; // 0xb0
	TArray<UDataTable*> OldParentTables; // 0xc0
};

struct APortalWarsDOMGameState : APortalWarsGameState {
	TArray<ADominationHill*> Hills; // 0x7c8
};

struct UVariantObjectBinding : UObject {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct UWaveScalar : UFieldNodeFloat {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
	float Wavelength; // 0xc0
	float Period; // 0xc4
	EWaveFunctionType Function; // 0xc8
	EFieldFalloffType Falloff; // 0xc9
};

struct UInheritableComponentHandler : UObject {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct UNiagaraComponent : UFXSystemComponent {
	UNiagaraSystem* Asset; // 0x450
	ENiagaraTickBehavior TickBehavior; // 0x458
	int32_t RandomSeedOffset; // 0x45c
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x460
	char bForceSolo : 1; // 0x528
	char bEnableGpuComputeDebug : 1; // 0x528
	char bAutoDestroy : 1; // 0x558
	char bRenderingEnabled : 1; // 0x558
	char bAutoManageAttachment : 1; // 0x558
	char bAutoAttachWeldSimulatedBodies : 1; // 0x558
	float MaxTimeBeforeForceUpdateTransform; // 0x55c
	TArray<FNiagaraMaterialOverride> EmitterMaterials; // 0x560
	FMulticastInlineDelegate OnSystemFinished; // 0x578
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x588
	FName AutoAttachSocketName; // 0x590
	EAttachmentRule AutoAttachLocationRule; // 0x598
	EAttachmentRule AutoAttachRotationRule; // 0x599
	EAttachmentRule AutoAttachScaleRule; // 0x59a
};

struct UARCandidateImage : UDataAsset {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct UOverlaySlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UPortalWarsEvolutionGunStatusWidget : UPortalWarsUserWidget {
	UImage* WeaponImage; // 0x2b0
	USizeBox* IconSizeBox; // 0x2b8
};

struct UGizmoConstantAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
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

struct UParticleModuleSubUV : UParticleModuleSubUVBase {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UPortalWarsUISettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsCheckBoxWidget* FPS; // 0x358
	UPortalWarsCheckBoxWidget* GPU; // 0x360
	UPortalWarsCheckBoxWidget* Ping; // 0x368
	UPortalWarsCheckBoxWidget* NetInfo; // 0x370
	UPortalWarsCheckBoxWidget* Subtitles; // 0x378
	UPortalWarsCheckBoxWidget* DamageNumbers; // 0x380
	UPortalWarsCheckBoxWidget* LowAmmo; // 0x388
	UPortalWarsColorPickerWidget* CrosshairColor; // 0x390
	UPortalWarsColorPickerWidget* EnemyCrosshairColor; // 0x398
	UPanelWidget* CrosshairPanel; // 0x3a0
	UPortalWarsCheckBoxWidget* SprintCrosshair; // 0x3a8
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct ANavLinkProxy : AActor {
	TArray<FNavigationLink> PointLinks; // 0x230
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x240
	UNavLinkCustomComponent* SmartLinkComp; // 0x250
	bool bSmartLinkIsRelevant; // 0x258
	FMulticastInlineDelegate OnSmartLinkReached; // 0x260
};

struct UPortalWarsMedalEntryWidget : UUserWidget {
	UWidget* ContentRoot; // 0x280
	UTextBlock* LabelText; // 0x288
	UImage* MedalImage; // 0x290
	UWidgetAnimation* FadeInAnimation; // 0x298
	UWidgetAnimation* FadeInToMiddleAnimation; // 0x2a0
	UWidgetAnimation* FadeOutAnimation; // 0x2a8
	UWidgetAnimation* SlideToLeftAnimation; // 0x2b0
	UWidgetAnimation* SlideToMiddleAnimation; // 0x2b8
	float LifeTime; // 0x2c8
	FWidgetTransform LeftTransfrom; // 0x2d8
	FWidgetTransform MiddleTransform; // 0x2f4
	FWidgetTransform RightTransform; // 0x310
};

struct ADatasmithAreaLightActor : AActor {
	EComponentMobility Mobility; // 0x220
	EDatasmithAreaLightActorType LightType; // 0x221
	EDatasmithAreaLightActorShape LightShape; // 0x222
	FVector2D Dimensions; // 0x224
	float Intensity; // 0x22c
	ELightUnits IntensityUnits; // 0x230
	FLinearColor Color; // 0x234
	float Temperature; // 0x244
	UTextureLightProfile* IESTexture; // 0x248
	bool bUseIESBrightness; // 0x250
	float IESBrightnessScale; // 0x254
	FRotator Rotation; // 0x258
	float SourceRadius; // 0x264
	float SourceLength; // 0x268
	float AttenuationRadius; // 0x26c
	float SpotlightInnerAngle; // 0x270
	float SpotlightOuterAngle; // 0x274
};

struct APortal : ACullableActor {
	FVector PortalGrow_Scale_Start; // 0x228
	float portalGrow_TotalSeconds; // 0x234
	char DoRep_portalGrow_StartAnim; // 0x23c
	char DoRep_portalShrink_StartAnim; // 0x23d
	bool isLeftPortal; // 0x23e
	UPortalWarsAkComponent* AkPortal; // 0x240
	UAkAudioEvent* PortalAmb_PlayEvent; // 0x248
	UAkAudioEvent* PortalAmb_StopEvent; // 0x250
	UAkAudioEvent* PortalOpen_Event; // 0x258
	UAkAudioEvent* PortalClose_Event; // 0x260
	char DoRep_initPortalColor; // 0x269
	APortalWarsCharacter* MyPawn; // 0x270
	APortalWarsPlayerState* MyPlayerState; // 0x278
	APortal* linkedPortal; // 0x288
	FLinearColor UnlinkedPortalColor; // 0x290
	FLinearColor LeftPortalColor; // 0x2a0
	FLinearColor RightPortalColor; // 0x2b0
	UStaticMeshComponent* PortalMesh; // 0x2c0
	UStaticMeshComponent* portalCollisionFrameMesh; // 0x2c8
	UStaticMeshComponent* portalRingMesh; // 0x2d0
	UStaticMeshComponent* PortalThruPortalMesh; // 0x2d8
	APortalWall* PortalWall; // 0x2e0
	UStaticMeshComponent* smallPortalOverlapBox; // 0x2f0
	UStaticMeshComponent* largePortalOverlapBox; // 0x2f8
	UMaterialInstanceDynamic* portalDynamicMaterial; // 0x300
	UMaterialInstance* DefaultPortalMaterial; // 0x308
	UMaterialInstance* DefaultPortalRingMaterial; // 0x310
	UMaterial* renderedPortalMaterial; // 0x318
	FLinearColor EnemyPortalColor; // 0x334
	FLinearColor AlphaTeamPortalColor; // 0x344
	FLinearColor BravoTeamPortalColor; // 0x354
	UPortalWarsIndicatorWidget* PortalIndicatorWidget; // 0x388
};

struct USoundNodeWaveParam : USoundNode {
	FName WaveParameterName; // 0x48
};

struct ASplineMeshActor : AActor {
	USplineMeshComponent* SplineMeshComponent; // 0x220
};

struct UPortalWarsAnimInstance : UAnimInstance {
	EAnimationType AnimationType; // 0x2c8
	float AimPitch; // 0x2cc
	float Yaw; // 0x2d0
	float YawLastTick; // 0x2d4
	float YawChangeOverFrame; // 0x2d8
	bool bIsMoving; // 0x2dc
	bool bIsSprinting; // 0x2dd
	bool bIsJumping; // 0x2de
	bool bIsFalling; // 0x2df
	bool bIsCrouching; // 0x2e0
	bool bIsAccelerating; // 0x2e1
	FVector Velocity; // 0x2e4
	float MoveSpeed; // 0x2f0
	float NormalizedMoveSpeed; // 0x2f4
	float SpeedHorizontal; // 0x2f8
	float SpeedVertical; // 0x2fc
	float Direction; // 0x300
	float HeadScale; // 0x304
	float MovementModifier; // 0x308
	bool bIsPlayingEmote; // 0x30c
	UAnimSequence* EmoteAnimSequence; // 0x310
	UBlendSpace1D* WalkBlendSpace; // 0x318
	UAnimSequence* SprintAnim; // 0x320
	UAnimSequence* JumpStartAnim; // 0x328
	UAnimSequence* JumpLoopAnim; // 0x330
	UAnimSequence* JumpEndAnim; // 0x338
	UPortalWarsAkComponent* AkFoot; // 0x340
};

struct APortalWarsGG : APortalWarsGameMode {
	TArray<AGun*> WeaponClasses; // 0x6a8
	bool bHumiliationEnabled; // 0x6b8
};

struct UMaterialExpressionMapARPassthroughCameraUV : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
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

struct UGeometryCacheTrack_FlipbookAnimation : UGeometryCacheTrack {
	uint32_t NumMeshSamples; // 0x58
};

struct UMovieSceneAudioTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x80
};

struct UMapBuildDataRegistry : UObject {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct UAkCallbackInfo : UObject {
	UAkComponent* AkComponent; // 0x28
};

struct UBTTask_BlackboardBase : UBTTaskNode {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UPendingNetGame : UObject {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UMaterialExpressionDDX : UMaterialExpression {
	FExpressionInput Value; // 0x40
};

struct USynth2DSlider : UWidget {
	float ValueX; // 0x108
	float ValueY; // 0x10c
	FDelegate ValueXDelegate; // 0x110
	FDelegate ValueYDelegate; // 0x120
	FSynth2DSliderStyle WidgetStyle; // 0x130
	FLinearColor SliderHandleColor; // 0x3e8
	bool IndentHandle; // 0x3f8
	bool locked; // 0x3f9
	float StepSize; // 0x3fc
	bool IsFocusable; // 0x400
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x408
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x418
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x428
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x438
	FMulticastInlineDelegate OnValueChangedX; // 0x448
	FMulticastInlineDelegate OnValueChangedY; // 0x458
};

struct AProjectile : ACullableActor {
	UPWProjectileMovementComponent* MovementComp; // 0x220
	USphereComponent* CollisionComp; // 0x228
	USphereComponent* PawnCollisionComp; // 0x230
	char ProjectileID; // 0x238
	char bIsInitialProjectile : 1; // 0x239
	FVector_NetQuantize InitialProjectileCameraLocation; // 0x23c
	UPortalWarsAkComponent* AkComp; // 0x250
	UParticleSystemComponent* ParticleComp; // 0x258
	UStaticMeshComponent* MeshComp; // 0x260
	UParticleSystem* ExplosionFX; // 0x268
	UAkAudioEvent* ExplosionEvent; // 0x270
	UAkAudioEvent* ProjectileLoopStartEvent; // 0x278
	UAkAudioEvent* ProjectileLoopStopEvent; // 0x280
	FDecalData Decal; // 0x288
	bool canTeleport; // 0x298
	bool bExploded; // 0x2c8
	bool bDestroyed; // 0x2c9
	float OverlapSphereGrowthRate; // 0x2cc
	float MaxPawnOverlapSphereSize; // 0x2d0
};

struct UPortalWarsCustomAntiCheat : UObject {
	TMap<APortalWarsPlayerState*, FCheatViolations> PlayerViolations; // 0x28
};

struct UDatasmithPointLightComponentTemplate : UDatasmithObjectTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct UVivoxSubsystem : ULocalPlayerSubsystem {
	TArray<UVivoxChannel*> Channels; // 0xa0
};

struct UFieldSystemMetaDataFilter : UFieldSystemMetaData {
	EFieldFilterType FilterType; // 0xb0
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

struct UParticleModuleKillBox : UParticleModuleKillBase {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct UMaterialExpressionShaderStageSwitch : UMaterialExpression {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
};

struct UParticleModuleLocationEmitter : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct APortalWarsGunPickupZone : APortalWarsGunPickup {
	float AmmoClips; // 0x2cc
	bool bIsActive; // 0x2d0
	int32_t TimeToSpawn; // 0x2d4
	int32_t ReplicatedTimeToSpawn; // 0x2d8
	int32_t TimeBetweenSpawns; // 0x2dc
	USkeletalMeshComponent* PickupPlatformMesh; // 0x2f8
	UAnimMontage* PlatformOpenMontage; // 0x300
	UAnimMontage* PlatformCloseMontage; // 0x308
	UParticleSystemComponent* PickupGlow; // 0x310
	UMaterialInterface* InactiveMaterial; // 0x318
	TArray<UMaterialInterface*> ActiveMaterials; // 0x320
	UPortalWarsPickupZoneIndicator* PickupIndicatorWidget; // 0x330
	UPortalWarsAkComponent* AkComponent; // 0x338
	UAkAudioEvent* PlayAmbientLoopEvent; // 0x340
	UAkAudioEvent* StopAmbientLoopEvent; // 0x348
	bool bHidePickupPlatform; // 0x354
};

struct UPortalWarsKeybindSettingsWidget : UPortalWarsSettingsSubWidget {
	TArray<UPortalWarsKeybindWidget*> KeybindItems; // 0x358
	UWidget* WarningRoot; // 0x368
	UTextBlock* WarningText; // 0x388
};

struct UBTTask_WaitBlackboardTime : UBTTask_Wait {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct AProceduralFoliageVolume : AVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x258
};

struct UWindowTitleBarArea : UContentWidget {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct AGeometryCacheActor : AActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x220
};

struct UVirtualTexturePoolConfig : UObject {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
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

struct UMaterialExpressionAtmosphericFogColor : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct UPortalWarsAddFriendsWidget : UPortalWarsMenuWidget {
	UPanelWidget* IncomingFriendRequestPanel; // 0x338
	UPanelWidget* OutgoingFriendRequestPanel; // 0x340
	UScrollBox* ItemsScrollBox; // 0x348
	UPortalWarsFriendRequestEntry* FriendRequestEntryWidgetClass; // 0x350
	UPortalWarsFriendRequestDialog* FriendRequestDialogWidgetClass; // 0x358
	UPortalWarsTextInputWidget* FriendCodeTextInput; // 0x360
	UTextBlock* FriendCodeText; // 0x368
	UPortalWarsButtonWidget* SendRequestButton; // 0x370
	UPortalWarsButtonWidget* CopyButton; // 0x378
	UTextBlock* ErrorText; // 0x380
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

struct UMaterialExpressionQualitySwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct UScaleBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UPortalWarsTeamGlobalCarouselWidget : UPortalWarsInputWidget {
	UPortalWarsGlobalCarouselWidget* GlobalCarousel; // 0x368
	UPortalWarsGlobalCarouselWidget* AlphaCarousel; // 0x370
	UPortalWarsGlobalCarouselWidget* BravoCarousel; // 0x378
	UPortalWarsCheckBox* TeamCheckbox; // 0x380
	FKey GamepadKey; // 0x3c0
	UImage* StandardIcon; // 0x3d8
	UImage* GamepadIcon; // 0x3e0
	UWidgetSwitcher* ConsoleSwitcher; // 0x3e8
	FLinearColor IconDefaultColor; // 0x3f0
	FLinearColor IconHoveredColor; // 0x400
};

struct ASpectatorBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FSpectatorReservation PendingReservation; // 0x2f0
	ESpectatorClientRequestType RequestType; // 0x368
	bool bPendingReservationSent; // 0x369
	bool bCancelReservation; // 0x36a
};

struct UPortalWarsChallengesSubWidget : UPortalWarsMenuWidget {
	UPortalWarsChallengeEntryWidget* ChallengeEntryWidgetClass; // 0x338
	UPortalWarsChallengeEntryWidget* FeaturedChallengeEntryWidgetClass; // 0x340
	UPortalWarsBPPurchaseDialogWidget* BuyPremiumDialogWidgetClass; // 0x348
	UPanelWidget* EntriesPanel; // 0x350
	UPanelWidget* PremiumEntriesPanel; // 0x358
	UPanelWidget* FeaturedEntriesPanel; // 0x360
	UPortalWarsChallengesInspectWidget* InspectWidget; // 0x368
	UTextBlock* TitleText; // 0x370
	UTextBlock* TimeDescriptionText; // 0x380
	UPortalWarsButtonWidget* BuyPremiumButton; // 0x388
	EChallengeType ChallengeType; // 0x391
	int32_t GroupId; // 0x394
};

struct UWrapBox : UPanelWidget {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct UPortalWarsRaceScoreboardWidget : UPortalWarsScoreboardWidget {
	UTextBlock* PlayerNameText; // 0x340
	UTextBlock* CurrentTimeText; // 0x348
	UTextBlock* RecordHolderNameText; // 0x350
	UTextBlock* RecordTimeText; // 0x358
};

struct AServerStatReplicator : AInfo {
	bool bUpdateStatNet; // 0x220
	bool bOverwriteClientStats; // 0x221
	uint32_t Channels; // 0x224
	uint32_t InRate; // 0x228
	uint32_t OutRate; // 0x22c
	uint32_t MaxPacketOverhead; // 0x234
	uint32_t InRateClientMax; // 0x238
	uint32_t InRateClientMin; // 0x23c
	uint32_t InRateClientAvg; // 0x240
	uint32_t InPacketsClientMax; // 0x244
	uint32_t InPacketsClientMin; // 0x248
	uint32_t InPacketsClientAvg; // 0x24c
	uint32_t OutRateClientMax; // 0x250
	uint32_t OutRateClientMin; // 0x254
	uint32_t OutRateClientAvg; // 0x258
	uint32_t OutPacketsClientMax; // 0x25c
	uint32_t OutPacketsClientMin; // 0x260
	uint32_t OutPacketsClientAvg; // 0x264
	uint32_t NetNumClients; // 0x268
	uint32_t InPackets; // 0x26c
	uint32_t OutPackets; // 0x270
	uint32_t InBunches; // 0x274
	uint32_t OutBunches; // 0x278
	uint32_t OutLoss; // 0x27c
	uint32_t InLoss; // 0x280
	uint32_t VoiceBytesSent; // 0x284
	uint32_t VoiceBytesRecv; // 0x288
	uint32_t VoicePacketsSent; // 0x28c
	uint32_t VoicePacketsRecv; // 0x290
	uint32_t PercentInVoice; // 0x294
	uint32_t PercentOutVoice; // 0x298
	uint32_t NumActorChannels; // 0x29c
	uint32_t NumConsideredActors; // 0x2a0
	uint32_t PrioritizedActors; // 0x2a4
	uint32_t NumRelevantActors; // 0x2a8
	uint32_t NumRelevantDeletedActors; // 0x2ac
	uint32_t NumReplicatedActorAttempts; // 0x2b0
	uint32_t NumReplicatedActors; // 0x2b4
	uint32_t NumActors; // 0x2b8
	uint32_t NumNetActors; // 0x2bc
	uint32_t NumDormantActors; // 0x2c0
	uint32_t NumInitiallyDormantActors; // 0x2c4
	uint32_t NumNetGUIDsAckd; // 0x2c8
	uint32_t NumNetGUIDsPending; // 0x2cc
	uint32_t NumNetGUIDsUnAckd; // 0x2d0
	uint32_t ObjPathBytes; // 0x2d4
	uint32_t NetGUIDOutRate; // 0x2d8
	uint32_t NetGUIDInRate; // 0x2dc
	uint32_t NetSaturated; // 0x2e0
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
	char bShowDisabledEffects : 1; // 0xb4
	char bOverride_Cursor : 1; // 0xb4
	USlateAccessibleWidgetData* AccessibleWidgetData; // 0xb8
	char bIsVolatile : 1; // 0xc0
	char bCullEnabled : 1; // 0xc0
	EMouseCursor Cursor; // 0xc1
	EWidgetClipping Clipping; // 0xc2
	ESlateVisibility Visibility; // 0xc3
	float RenderOpacity; // 0xc4
	UWidgetNavigation* Navigation; // 0xc8
	EFlowDirectionPreference FlowDirectionPreference; // 0xd0
	TArray<UPropertyBinding*> NativeBindings; // 0xf8
};

struct UMaterialExpressionMax : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct APortalWarsGrenadePickupZone : APortalWarsGunPickupZone {
	FText GrenadeName; // 0x358
	UAkAudioEvent* PickupEvent; // 0x370
};

struct UMaterialExpressionTextureBase : UMaterialExpression {
	UTexture* Texture; // 0x40
};

struct UMaterialExpressionSmoothStep : UMaterialExpression {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
};

struct UPortalWarsRewardPassWidget : UPortalWarsInspectWidget {
	UPortalWarsRewardPassEntryWidget* EntryWidgetClass; // 0x3b8
	TMap<ECustomizationType, UPortalWarsRewardPassEntryWidget*> EntryWidgetClassOverrides; // 0x3c0
	UPortalWarsCustomScrollWidget* ItemsPanel; // 0x410
	TArray<FRewardPassEntryData> RewardPassEntries; // 0x418
	UTextBlock* CurrentLevelText; // 0x428
};

struct UMovieSceneCameraShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UCameraShakeBase* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct UPortalWarsGamepadBindingWidget : UPortalWarsUserWidget {
	FMulticastInlineDelegate OnGamepadKeyBound; // 0x2a8
	UPortalWarsButton* BindingButton; // 0x2b8
	UTextBlock* BindingText; // 0x2c0
	UImage* ButtonBackground; // 0x2c8
	UWidget* ButtonIconBox; // 0x2d0
	UWidget* HoveredIndicator; // 0x2d8
	FSlateColor StandardColor; // 0x2e0
	FSlateColor ActiveColor; // 0x308
	UPortalWarsGamepadBindingOverlayWidget* BindingOverlayClass; // 0x368
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

struct URequestPermissionsAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct AAkSpotReflector : AActor {
	UAkAuxBus* AuxBus; // 0x220
	FString AuxBusName; // 0x228
	UAkAcousticTexture* AcousticTexture; // 0x238
	float DistanceScalingFactor; // 0x240
	float Level; // 0x244
};

struct UWidgetTree : UObject {
	UWidget* RootWidget; // 0x28
};

struct UBTService_RefreshFocus : UBTService {
	float MaxLongRangeRadius; // 0x70
	float MaxCloseRangeRadius; // 0x74
	float MaxAimAngle; // 0x78
};

struct UEnvQueryGenerator_PathGridOffset : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0x130
	UNavigationQueryFilter* NavigationFilter; // 0x168
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x170
	FAIDataProviderFloatValue OffsetSize; // 0x1a8
	FAIDataProviderBoolValue RandomizeProjectionData; // 0x1e0
	FAIDataProviderFloatValue ProjectDownRandomMultiplier; // 0x218
	FAIDataProviderFloatValue ProjectUpRandomMultiplier; // 0x250
	FAIDataProviderFloatValue ExtentXRandomMultiplier; // 0x288
};

struct UAISenseEvent_Hearing : UAISenseEvent {
	FAINoiseEvent Event; // 0x28
};

struct UMaterialExpressionHairAttributes : UMaterialExpression {
	char bUseTangentSpace : 1; // 0x40
};

struct UDistributionVectorParameterBase : UDistributionVectorConstant {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
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

struct UParticleModuleSubUVMovie : UParticleModuleSubUV {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct UPortalWarsInputCarouselWidget : UPortalWarsInputWidget {
	UButton* LeftButton; // 0x368
	UButton* RightButton; // 0x370
	UPortalWarsButtonWidget* LeftGamepadButton; // 0x378
	UPortalWarsButtonWidget* RightGamepadButton; // 0x380
	FMulticastInlineDelegate OnCarouselValueChangedDelegate; // 0x388
	UWidgetSwitcher* ConsoleSwitcher; // 0x398
};

struct UPortalWarsUnlockDialogWidget : UPortalWarsDialogWidget {
	UTextBlock* TitleText; // 0x398
	UTextBlock* MessageText; // 0x3a0
	UImage* MedalImage; // 0x3a8
	UImage* UnlockImage; // 0x3b0
	UImage* IconImage; // 0x3b8
	UVerticalBox* NotesVerticalBox; // 0x3c0
	UPortalWarsButtonWidget* QueueButton; // 0x3c8
	UPortalWarsButtonWidget* ViewButton; // 0x3d0
	UWidgetSwitcher* ButtonWidgetSwitcher; // 0x3d8
	UPortalWarsUnlockNoteEntryWidget* NoteEntryWidgetClass; // 0x3e0
	float PaddingBetweenNoteEntries; // 0x3e8
	UAkAudioEvent* UnlockEvent; // 0x3f8
};

struct UAudioBus : UObject {
	EAudioBusChannels AudioBusChannels; // 0x28
	bool bIsAutomatic; // 0x29
};

struct APortalSceneCapture2D : ASceneCapture2D {
	APortal* Portal; // 0x238
};

struct UPortalWarsControllerPresetWidget : UPortalWarsUserWidget {
	FMulticastInlineDelegate OnSwapToCustomBindings; // 0x2a8
	UPortalWarsGamepadBindingWidget* FaceButtonBottomBinding; // 0x2b8
	UPortalWarsGamepadBindingWidget* FaceButtonTopBinding; // 0x2c0
	UPortalWarsGamepadBindingWidget* FaceButtonRightBinding; // 0x2c8
	UPortalWarsGamepadBindingWidget* FaceButtonLeftBinding; // 0x2d0
	UPortalWarsGamepadBindingWidget* RightShoulderBinding; // 0x2d8
	UPortalWarsGamepadBindingWidget* LeftShoulderBinding; // 0x2e0
	UPortalWarsGamepadBindingWidget* RightTriggerBinding; // 0x2e8
	UPortalWarsGamepadBindingWidget* LeftTriggerBinding; // 0x2f0
	UPortalWarsGamepadBindingWidget* DPadUpBinding; // 0x2f8
	UPortalWarsGamepadBindingWidget* DPadDownBinding; // 0x300
	UPortalWarsGamepadBindingWidget* DPadRightBinding; // 0x308
	UPortalWarsGamepadBindingWidget* DPadLeftBinding; // 0x310
	UTextBlock* SpecialRightText; // 0x318
	UPortalWarsGamepadBindingWidget* SpecialLeftBinding; // 0x320
	UTextBlock* LeftStickText; // 0x328
	UPortalWarsGamepadBindingWidget* LeftStickDownBinding; // 0x330
	UTextBlock* RightStickText; // 0x338
	UPortalWarsGamepadBindingWidget* RightStickDownBinding; // 0x340
};

struct UNiagaraSpriteRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x88
	ENiagaraRendererSourceDataMode SourceMode; // 0x90
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x98
	ENiagaraSpriteAlignment Alignment; // 0xb8
	ENiagaraSpriteFacingMode FacingMode; // 0xb9
	FVector2D PivotInUVSpace; // 0xbc
	ENiagaraSortMode SortMode; // 0xc4
	FVector2D SubImageSize; // 0xc8
	char bSubImageBlend : 1; // 0xd0
	char bRemoveHMDRollInVR : 1; // 0xd0
	char bSortOnlyWhenTranslucent : 1; // 0xd0
	char bGpuLowLatencyTranslucency : 1; // 0xd0
	float MinFacingCameraBlendDistance; // 0xd4
	float MaxFacingCameraBlendDistance; // 0xd8
	char bEnableCameraDistanceCulling : 1; // 0xdc
	float MinCameraDistance; // 0xe0
	float MaxCameraDistance; // 0xe4
	uint32_t RendererVisibility; // 0xe8
	FNiagaraVariableAttributeBinding PositionBinding; // 0xf0
	FNiagaraVariableAttributeBinding ColorBinding; // 0x148
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1a0
	FNiagaraVariableAttributeBinding SpriteRotationBinding; // 0x1f8
	FNiagaraVariableAttributeBinding SpriteSizeBinding; // 0x250
	FNiagaraVariableAttributeBinding SpriteFacingBinding; // 0x2a8
	FNiagaraVariableAttributeBinding SpriteAlignmentBinding; // 0x300
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x358
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x3b0
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x408
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x460
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x4b8
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x510
	FNiagaraVariableAttributeBinding UVScaleBinding; // 0x568
	FNiagaraVariableAttributeBinding PivotOffsetBinding; // 0x5c0
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x618
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x670
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x6c8
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x720
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x778
	FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x788
	FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7e0
	FNiagaraVariableAttributeBinding PrevSpriteRotationBinding; // 0x838
	FNiagaraVariableAttributeBinding PrevSpriteSizeBinding; // 0x890
	FNiagaraVariableAttributeBinding PrevSpriteFacingBinding; // 0x8e8
	FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding; // 0x940
	FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x998
	FNiagaraVariableAttributeBinding PrevPivotOffsetBinding; // 0x9f0
};

struct AEmitterCameraLensEffectBase : AEmitter {
	UParticleSystem* PS_CameraEffect; // 0x270
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x278
	APlayerCameraManager* BaseCamera; // 0x280
	FTransform RelativeTransform; // 0x290
	float BaseFOV; // 0x2c0
	char bAllowMultipleInstances : 1; // 0x2c4
	char bResetWhenRetriggered : 1; // 0x2c4
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2c8
	float DistFromCamera; // 0x2d8
};

struct UBackgroundBlurSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UInterpTrackInstLinearColorProp : UInterpTrackInstProperty {
	FLinearColor ResetColor; // 0x58
};

struct UPortalWarsNewsFeedEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* DescriptionText; // 0x420
	UImage* NewsImage; // 0x428
};

struct UParticleModuleAcceleration : UParticleModuleAccelerationBase {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct UPortalWarsNotificationEntryWidget : UPortalWarsPlayerEntryWidget {
	UWidget* ButtonRoot; // 0x660
	UPortalWarsButtonWidget* AcceptButton; // 0x668
	UPortalWarsButtonWidget* DeclineButton; // 0x670
	UPortalWarsButtonWidget* ViewButton; // 0x678
	UWidgetSwitcher* SelectedSwitcher; // 0x680
	UTextBlock* DescriptionText; // 0x688
	float MaxLifetime; // 0x690
	UProgressBar* LifetimeProgressBar; // 0x698
};

struct UImgMediaPlaybackComponent : UActorComponent {
	float Width; // 0xb0
	float LODBias; // 0xb4
};

struct UCameraAnimInst : UObject {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
};

struct UPortalWarsPlaylistActiveDialog : UPortalWarsDialogWidget {
	UTextBlock* TitleText; // 0x390
	UTextBlock* DescriptionText; // 0x398
	UTextBlock* XPBoostText; // 0x3a0
	UPortalWarsButtonWidget* QueueButton; // 0x3a8
};

struct APortalWarsVIPHUD : APortalWarsHUD {
	UPortalWarsVIPHUDOverlayWidget* VIPHUDOverlayWidget; // 0x400
	UPortalWarsVIPHUDOverlayWidget* VIPHUDOverlayWidgetClass; // 0x408
	UPortalWarsIndicatorWidget* VIPNameIndicatorWidgetClass; // 0x410
	UAkAudioEvent* VipAlertEvent; // 0x418
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

struct UPortalWarsSeasonRewardsWidget : UUserWidget {
	UHorizontalBox* GamesPanel; // 0x260
	UImage* RankIcon; // 0x268
	UTextBlock* RankText; // 0x270
	URichTextBlock* WinsText; // 0x278
	UTexture2D* IncompleteImage; // 0x280
	UTexture2D* CompleteImage; // 0x288
	UTexture2D* SeparatorImage; // 0x290
};

struct UBTDecorator_SetTagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct APortalWarsBot : APortalWarsCharacter {
	UBehaviorTree* BotBehavior; // 0xda8
	bool bUseNavRecovery; // 0xdb0
	ENavRecoveryType NavRecoveryType; // 0xdb1
	FNavRecoverySettings NavRecoverySettingsOffMesh; // 0xdb4
	FNavRecoverySettings NavRecoverySettingsOnIslands; // 0xdd8
	float NavRecoveryMaxLaunchSize; // 0xdfc
	float NavRecoveryMinJumpArc; // 0xe00
	float NavRecoveryMaxJumpArc; // 0xe04
	FVector NavRecoveryTestExtent; // 0xe08
	float StuckCheckInterval; // 0xe44
	float StuckDistanceTolerance; // 0xe48
	float WeaponSelectionFrequency; // 0xe58
	float WeaponSelectionCooldown; // 0xe5c
	FBotDebugInfo DebugInfo; // 0xe60
};

struct APortalWarsNeutralCTFGameState : APortalWarsGameState {
	AActor* Flag; // 0x7c8
	EFlagState FlagState; // 0x7d0
	float CapturedFlagRespawnTime; // 0x7d4
};

struct UPortalWarsKeybindWidget : UPortalWarsInputWidget {
	UButton* PrimaryButton; // 0x368
	UButton* SecondaryButton; // 0x370
	UTextBlock* PrimaryText; // 0x378
	UTextBlock* SecondaryText; // 0x380
	UPortalWarsKeybindOverlayWidget* KeybindOverlayClass; // 0x3b8
	FString KeyBindAction; // 0x450
};

struct UMaterialExpressionParameter : UMaterialExpression {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UAkXboxOneGDKInitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xc0
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

struct AWorldSettings : AInfo {
	int32_t VisibilityCellSize; // 0x228
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x22c
	char bPrecomputeVisibility : 1; // 0x22d
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x22d
	char bEnableWorldBoundsChecks : 1; // 0x22d
	char bEnableNavigationSystem : 1; // 0x22d
	char bEnableAISystem : 1; // 0x22d
	char bEnableWorldComposition : 1; // 0x22d
	char bUseClientSideLevelStreamingVolumes : 1; // 0x22d
	char bEnableWorldOriginRebasing : 1; // 0x22d
	char bWorldGravitySet : 1; // 0x22e
	char bGlobalGravitySet : 1; // 0x22e
	char bMinimizeBSPSections : 1; // 0x22e
	char bForceNoPrecomputedLighting : 1; // 0x22e
	char bHighPriorityLoading : 1; // 0x22e
	char bHighPriorityLoadingLocal : 1; // 0x22e
	char bOverrideDefaultBroadphaseSettings : 1; // 0x22e
	UNavigationSystemConfig* NavigationSystemConfig; // 0x230
	UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x238
	float WorldToMeters; // 0x240
	float KillZ; // 0x244
	UDamageType* KillZDamageType; // 0x248
	float WorldGravityZ; // 0x250
	float GlobalGravityZ; // 0x254
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x258
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x260
	AGameModeBase* DefaultGameMode; // 0x268
	AGameNetworkManager* GameNetworkManagerClass; // 0x270
	int32_t PackedLightAndShadowMapTextureSize; // 0x278
	FVector DefaultColorScale; // 0x27c
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x288
	float GlobalDistanceFieldViewDistance; // 0x28c
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x290
	FReverbSettings DefaultReverbSettings; // 0x298
	FInteriorSettings DefaultAmbientZoneSettings; // 0x2b8
	float MonoCullingDistance; // 0x2dc
	USoundMix* DefaultBaseSoundMix; // 0x2e0
	float TimeDilation; // 0x2e8
	float MatineeTimeDilation; // 0x2ec
	float DemoPlayTimeDilation; // 0x2f0
	float MinGlobalTimeDilation; // 0x2f4
	float MaxGlobalTimeDilation; // 0x2f8
	float MinUndilatedFrameTime; // 0x2fc
	float MaxUndilatedFrameTime; // 0x300
	FBroadphaseSettings BroadphaseSettings; // 0x304
	APlayerState* Pauser; // 0x348
	TArray<FNetViewer> ReplicationViewers; // 0x350
	TArray<UAssetUserData*> AssetUserData; // 0x360
	APlayerState* PauserPlayerState; // 0x370
	int32_t MaxNumberOfBookmarks; // 0x378
	UBookmarkBase* DefaultBookmarkClass; // 0x380
	TArray<UBookmarkBase*> BookmarkArray; // 0x388
	UBookmarkBase* LastBookmarkClass; // 0x398
};

struct UMovieSceneEventRepeaterSection : UMovieSceneEventSectionBase {
	FMovieSceneEvent Event; // 0xf0
};

struct UBTTask_StrafeQuick : UBTTask_MoveTo {
	float MinStrafeDistance; // 0xb0
	float MaxStrafeDistance; // 0xb4
	float TolerableRadius; // 0xb8
	float ProbabilityToCrouch; // 0xbc
	float MinCrouchedTime; // 0xc0
	float MaxCrouchedTime; // 0xc4
	float MinTimeBetweenCrouch; // 0xc8
	float MaxTimeBetweenCrouch; // 0xcc
	float MaxAngleForAimedAtTest; // 0xd0
	float MinDifficultyForQuickStraffing; // 0xd4
	float MinDifficultyForOccasionalQuickStraffing; // 0xd8
	float ProbabilityForOccasionalQuickStraffing; // 0xdc
	bool bUseLazyWhenNotAimedAt; // 0xe0
	float IdealRangeForNonTraceWeapon; // 0xe4
	float MinStrafeDistanceLazy; // 0xe8
	float MaxStrafeDistanceLazy; // 0xec
	float RandomConeAngleLazy; // 0xf0
};

struct UDatasmithAssetUserData : UAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct ULandscapeLayerInfoObject : UObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct UMaterialFunction : UMaterialFunctionInterface {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct UPortalWarsKillcamKilledByWidget : UUserWidget {
	UTextBlock* NameText; // 0x260
	UImage* AvatarImage; // 0x268
	UImage* RankImage; // 0x270
	UImage* WeaponImage; // 0x278
	float WeaponImageMaxWidth; // 0x288
};

struct UPortalWarsTrainingWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* TutorialButton; // 0x338
	UPortalWarsButtonWidget* RangeButton; // 0x340
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

struct AAIController : AController {
	char bStartAILogicOnPossess : 1; // 0x2d0
	char bStopAILogicOnUnposses : 1; // 0x2d0
	char bLOSflag : 1; // 0x2d0
	char bSkipExtraLOSChecks : 1; // 0x2d0
	char bAllowStrafe : 1; // 0x2d0
	char bWantsPlayerState : 1; // 0x2d0
	char bSetControlRotationFromPawnOrientation : 1; // 0x2d0
	UPathFollowingComponent* PathFollowingComponent; // 0x2d8
	UBrainComponent* BrainComponent; // 0x2e0
	UAIPerceptionComponent* PerceptionComponent; // 0x2e8
	UPawnActionsComponent* ActionsComp; // 0x2f0
	UBlackboardComponent* Blackboard; // 0x2f8
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x300
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x308
	FMulticastInlineDelegate ReceiveMoveCompleted; // 0x310
};

struct UAkXboxOneInitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct USoundNodeDoppler : USoundNode {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UNiagaraDataInterfaceAudioSubmix : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
};

struct ANiagaraActor : AActor {
	UNiagaraComponent* NiagaraComponent; // 0x220
	char bDestroyOnSystemFinish : 1; // 0x228
};

struct UMaterialExpressionFmod : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UParticleModuleBeamModifier : UParticleModuleBeamBase {
	BeamModifierType ModifierType; // 0x30
	FBeamModifierOptions PositionOptions; // 0x34
	FRawDistributionVector Position; // 0x38
	FBeamModifierOptions TangentOptions; // 0x80
	FRawDistributionVector Tangent; // 0x88
	char bAbsoluteTangent : 1; // 0xd0
	FBeamModifierOptions StrengthOptions; // 0xd4
	FRawDistributionFloat Strength; // 0xd8
};

struct UPortalWarsButton : UButton {
	FMulticastInlineDelegate OnDoubleClicked; // 0x428
	bool bDebounce; // 0x464
	float DebounceTime; // 0x468
	UAkAudioEvent* PressedEvent; // 0x470
	UAkAudioEvent* HoveredEvent; // 0x478
};

struct UMaterialExpressionSobol : UMaterialExpression {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct UAnimSingleNodeInstance : UAnimInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct URig : UObject {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
};

struct UNiagaraLightRendererProperties : UNiagaraRendererProperties {
	char bUseInverseSquaredFalloff : 1; // 0x88
	char bAffectsTranslucency : 1; // 0x88
	char bAlphaScalesBrightness : 1; // 0x88
	float RadiusScale; // 0x8c
	float DefaultExponent; // 0x90
	FVector ColorAdd; // 0x94
	int32_t RendererVisibility; // 0xa0
	FNiagaraVariableAttributeBinding LightRenderingEnabledBinding; // 0xa8
	FNiagaraVariableAttributeBinding LightExponentBinding; // 0x100
	FNiagaraVariableAttributeBinding PositionBinding; // 0x158
	FNiagaraVariableAttributeBinding ColorBinding; // 0x1b0
	FNiagaraVariableAttributeBinding RadiusBinding; // 0x208
	FNiagaraVariableAttributeBinding VolumetricScatteringBinding; // 0x260
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x2b8
};

struct UMovieSceneByteSection : UMovieSceneSection {
	FMovieSceneByteChannel ByteCurve; // 0xf0
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

struct UPortalWarsGamepadBindingActionWidget : UPortalWarsUserWidget {
	UPortalWarsButton* ActionButton; // 0x2a8
	UTextBlock* ActionText; // 0x2b0
	UImage* ButtonBackground; // 0x2b8
	UImage* ButtonIcon; // 0x2c0
	FMulticastInlineDelegate OnActionSelected; // 0x2c8
	FSlateColor StandardTextColor; // 0x2f8
	FSlateColor ActiveTextColor; // 0x320
	FLinearColor StandardBackgroundColor; // 0x348
	FLinearColor ActiveBackgroundColor; // 0x358
};

struct UPortalWarsNavButtonWidget : UPortalWarsEntryWidget {
	FLinearColor NewColor; // 0x420
};

struct UGridPanel : UPanelWidget {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
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

struct USoundNodeParamCrossFade : USoundNodeDistanceCrossFade {
	FName ParamName; // 0x58
};

struct UMaterialExpressionFunctionInput : UMaterialExpression {
	FExpressionInput Preview; // 0x40
	FName InputName; // 0x54
	FString Description; // 0x60
	FGuid ID; // 0x70
	EFunctionInputType InputType; // 0x80
	FVector4 PreviewValue; // 0x90
	char bUsePreviewValueAsDefault : 1; // 0xa0
	int32_t SortPriority; // 0xa4
	char bCompilingFunctionPreview : 1; // 0xa8
};

struct UMeshSimplificationSettings : UDeveloperSettings {
	FName MeshReductionModuleName; // 0x38
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

struct ULandscapeInfo : UObject {
	LazyObjectProperty LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
};

struct UMediaComponent : UActorComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct UEnvQueryTest_Volume : UEnvQueryTest {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
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

struct UGenlockedTimecodeProvider : UTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
};

struct ABrush : AActor {
	EBrushType BrushType; // 0x220
	FColor BrushColor; // 0x224
	int32_t PolyFlags; // 0x228
	char bColored : 1; // 0x22c
	char bSolidWhenSelected : 1; // 0x22c
	char bPlaceableFromClassBrowser : 1; // 0x22c
	char bNotForClientOrServer : 1; // 0x22c
	UModel* Brush; // 0x230
	UBrushComponent* BrushComponent; // 0x238
	char bInManipulation : 1; // 0x240
	TArray<FGeomSelection> SavedSelections; // 0x248
};

struct UMovieSceneSequenceTickManager : UObject {
	TArray<AActor*> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct UMotoSynthSource : UObject {
	bool bConvertTo8Bit; // 0x28
	float DownSampleFactor; // 0x2c
	FRuntimeFloatCurve RPMCurve; // 0x30
	TArray<float> SourceData; // 0xb8
	TArray<int16_t> SourceDataPCM; // 0xc8
	int32_t SourceSampleRate; // 0xd8
	TArray<FGrainTableEntry> GrainTable; // 0xe0
};

struct APortalWarsKOTHGameState : APortalWarsGameState {
	APortalWarsKOTHHill* ActiveHill; // 0x7c8
	APortalWarsKOTHHill* NextHill; // 0x7d0
};

struct UMaterialExpressionDistanceFieldGradient : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct ULevelSequenceBurnInOptions : UObject {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct UNodeMappingContainer : UObject {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct USoundNodeModulatorContinuous : USoundNode {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct ASkyAtmosphere : AInfo {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x220
};

struct UPortalWarsContaminationPlayerStatusWidget : UPortalWarsRoundPlayerStatusWidget {
	UTexture2D* SelfPlayerImage; // 0x2a8
	UTexture2D* RedZombieImage; // 0x2b0
	UTexture2D* BlueZombieImage; // 0x2b8
	UTexture2D* SelfZombieImage; // 0x2c0
};

struct UMaterialExpressionVirtualTextureFeatureSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UReplaySubsystem : UGameInstanceSubsystem {
	bool bLoadDefaultMapOnStop; // 0x30
};

struct UPortalWarsChallengesWidget : UPortalWarsMenuWidget {
	UPortalWarsChallengesSubWidget* InspectWidget; // 0x338
	UPanelWidget* WeaponPanel; // 0x340
	UPortalWarsChallengeButtonWidget* WeaponChallengeButtonWidgetClass; // 0x348
	UPortalWarsChallengeButtonWidget* FeaturedChallengeButton; // 0x350
	TMap<EChallengeType, UPortalWarsChallengesSubWidget*> ChallengeInspectWidgetClasses; // 0x358
};

struct UPortalWarsDOMHUDOverlayWidget : UUserWidget {
	UPortalWarsDOMHillStatusWidget* DOMHillStatus; // 0x260
	UHorizontalBox* TopHills; // 0x268
	UHorizontalBox* BottomHills; // 0x270
	UPortalWarsDOMControlledHillWidget* ControlledHillWidgetClass; // 0x278
};

struct APortalWarsGGPlayerState : APortalWarsPlayerState {
	char CurrentWeaponIndex; // 0xac8
};

struct UAISenseConfig_Hearing : UAISenseConfig {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct UMaterialExpressionNormalize : UMaterialExpression {
	FExpressionInput VectorInput; // 0x40
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

struct AGameSession : AInfo {
	int32_t MaxSpectators; // 0x220
	int32_t MaxPlayers; // 0x224
	int32_t MaxPartySize; // 0x228
	char MaxSplitscreensPerConnection; // 0x22c
	bool bRequiresPushToTalk; // 0x22d
	FName SessionName; // 0x230
};

struct UBTDecorator_PortalIsNearSelf : UBTDecorator {
	float IdealXYRange; // 0x68
	bool bLinkedPortalsOnly; // 0x6c
};

struct UMediaPlaylist : UObject {
	TArray<UMediaSource*> Items; // 0x28
};

struct ALightmassPortal : AActor {
	ULightmassPortalComponent* PortalComponent; // 0x220
};

struct APWTutorialPlayerController : APortalWarsPlayerController {
	float TimeBetweenStages; // 0x6d0
	float TimeBeforeFreezingPlayer; // 0x6d4
	float TimeBeforeUnfreezingPlayer; // 0x6d8
	float TimeBeforeReturningToMainMenu; // 0x6dc
	float TimeBeforePlayingTutorialCompleteVideo; // 0x6e0
	FVector PlayableArea1; // 0x6e8
	FVector PlayableArea2; // 0x6f4
	FVector PlayableAreaLoc1; // 0x700
	FVector PlayableAreaLoc2; // 0x70c
	UMaterialParameterCollection* FloorMPC; // 0x718
	float FloorRevealStep; // 0x728
	TArray<float> SideRevealMax; // 0x730
	float RevealMax; // 0x740
};

struct UImgMediaSettings : UObject {
	FFrameRate DefaultFrameRate; // 0x28
	float CacheBehindPercentage; // 0x30
	float CacheSizeGB; // 0x34
	int32_t CacheThreads; // 0x38
	int32_t CacheThreadStackSizeKB; // 0x3c
	float GlobalCacheSizeGB; // 0x40
	bool UseGlobalCache; // 0x44
	uint32_t ExrDecoderThreads; // 0x48
	FString DefaultProxy; // 0x50
	bool UseDefaultProxy; // 0x60
};

struct UMaterialExpressionDivide : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UParticleModuleMeshMaterial : UParticleModuleMaterialBase {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UPortalWarsBattlePassWidget : UPortalWarsRewardPassWidget {
	UWidget* PremiumActiveRoot; // 0x438
	UPortalWarsBPRedeemableButton* PurchaseButton; // 0x440
};

struct UMaterialExpressionBumpOffset : UMaterialExpression {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
};

struct UPortalWarsCustomLobbyWidget : UPortalWarsLobbyWidget {
	UPortalWarsButtonWidget* StartGameButton; // 0x2f8
	UPortalWarsButtonWidget* InviteButton; // 0x300
	UPortalWarsDialogWidget* InviteDialogWidgetClass; // 0x308
	UPanelWidget* SettingsMenuPanel; // 0x310
	UWidgetAnimation* OpenSettingsAnimation; // 0x318
	UWidget* ActiveSettingsMenu; // 0x320
	UTextBlock* CustomGameText; // 0x330
	UPortalWarsLobbySelectorButtonWidget* SettingsSelectorButton; // 0x338
	UPortalWarsMenuWidget* SettingsMenuClass; // 0x340
	UPortalWarsLobbySelectorButtonWidget* MapSelectorButton; // 0x348
	UPortalWarsMenuWidget* MapSelectorMenuClass; // 0x350
	UPortalWarsLobbySelectorButtonWidget* ModeSelectorButton; // 0x358
	UPortalWarsMenuWidget* ModeSelectorMenuClass; // 0x360
	UPortalWarsLobbySelectorButtonWidget* LastUsedSelector; // 0x368
};

struct UAISenseEvent_Damage : UAISenseEvent {
	FAIDamageEvent Event; // 0x28
};

struct UAISense : UObject {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UClothingSimulationInteractor : UObject {
	TMap<FName, UClothingInteractor*> ClothingInteractors; // 0x28
};

struct UBlendProfile : UObject {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct ADebugCameraController : APlayerController {
	char bShowSelectedInfo : 1; // 0x570
	char bIsFrozenRendering : 1; // 0x570
	char bIsOrbitingSelectedActor : 1; // 0x570
	char bOrbitPivotUseCenter : 1; // 0x570
	char bEnableBufferVisualization : 1; // 0x570
	char bEnableBufferVisualizationFullMode : 1; // 0x570
	char bIsBufferVisualizationInputSetup : 1; // 0x570
	char bLastDisplayEnabled : 1; // 0x570
	UDrawFrustumComponent* DrawFrustum; // 0x578
	AActor* SelectedActor; // 0x580
	UPrimitiveComponent* SelectedComponent; // 0x588
	FHitResult SelectedHitPoint; // 0x590
	APlayerController* OriginalControllerRef; // 0x618
	UPlayer* OriginalPlayer; // 0x620
	float SpeedScale; // 0x628
	float InitialMaxSpeed; // 0x62c
	float InitialAccel; // 0x630
	float InitialDecel; // 0x634
};

struct UPortalWarsMatchResultWidget : UUserWidget {
	UTextBlock* TitleText; // 0x260
	UImage* LeftStarImage; // 0x268
	UImage* RightStarImage; // 0x270
	UImage* TopBorderImage; // 0x278
	UImage* BottomBorderImage; // 0x280
	UWidgetAnimation* FadeInAnimation; // 0x2a0
};

struct UInterpTrackInstSlomo : UInterpTrackInst {
	float OldTimeDilation; // 0x28
};

struct UMaterialExpressionPreviousFrameSwitch : UMaterialExpression {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct UMaterialExpressionStaticComponentMaskParameter : UMaterialExpressionParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
};

struct ULevelVariantSets : UObject {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
};

struct UMaterialExpressionLandscapePhysicalMaterialOutput : UMaterialExpressionCustomOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct UMaterialExpressionVectorNoise : UMaterialExpression {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
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

struct UInterpTrackFade : UInterpTrackFloatBase {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct UPortalWarsPlaylistGameModeSelect : UPortalWarsMenuWidget {
	UPortalWarsPlaylistGameModeEntry* GameModeEntryWidgetClass; // 0x338
	UPanelWidget* ModesPanel; // 0x340
	UPortalWarsButtonWidget* PlayButton; // 0x348
	UTextBlock* NoteText; // 0x350
};

struct UMaterialParameterCollectionInstance : UObject {
	UMaterialParameterCollection* Collection; // 0x30
};

struct UPortalWarsStatsEntryWidget : UPortalWarsUserWidget {
	UTextBlock* GamesWonText; // 0x2a8
	UTextBlock* GamesPlayedText; // 0x2b0
	UTextBlock* KillsText; // 0x2b8
	UTextBlock* AssistsText; // 0x2c0
	UTextBlock* DeathsText; // 0x2c8
	UTextBlock* KdText; // 0x2d0
	UTextBlock* KadText; // 0x2d8
	UTextBlock* SuicidesText; // 0x2e0
	UTextBlock* TeabagsText; // 0x2e8
	UTextBlock* MeleeKillsText; // 0x2f0
	UTextBlock* PortalKillsText; // 0x2f8
	UTextBlock* KillsThruPortalText; // 0x300
	UTextBlock* DoubleKillsText; // 0x308
	UTextBlock* TripleKillsText; // 0x310
	UTextBlock* QuadKillsText; // 0x318
	UTextBlock* QuintKillsText; // 0x320
	UTextBlock* KillStreak1Text; // 0x328
	UTextBlock* KillStreak2Text; // 0x330
	UTextBlock* KillStreak3Text; // 0x338
	UTextBlock* KillStreak4Text; // 0x340
	UTextBlock* KillStreak5Text; // 0x348
	UTextBlock* KillStreak6Text; // 0x350
	UTextBlock* DamageDealtText; // 0x358
	bool bUseGoldStyle; // 0x3d0
	UImage* BackgroundImage; // 0x3d8
	UTexture2D* DefaultBackgroundImage; // 0x3e0
	UTexture2D* GoldBackgroundImage; // 0x3e8
	FLinearColor DefaultFeatureTextColor; // 0x3f0
	FLinearColor GoldFeatureTextColor; // 0x400
	FLinearColor DefaultTitleTextColor; // 0x410
	FLinearColor GoldTitleTextColor; // 0x420
	FLinearColor DefaultSmallTitleTextColor; // 0x430
	FLinearColor GoldSmallTitleTextColor; // 0x440
};

struct UPortalWarsVIPHUDOverlayWidget : UUserWidget {
	float TimeBeforeFading; // 0x260
	float SpectatorShowPopupMaxTimeAlive; // 0x264
	UWidgetAnimation* FadeOutAnimation; // 0x268
	UWidgetSwitcher* OvertimeSwitcher; // 0x270
	UScaleBox* NoticeScaleBox; // 0x278
	UScaleBox* BannerScaleBox; // 0x280
	UCanvasPanel* RootCanvas; // 0x288
};

struct UActorSequenceComponent : UActorComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct UBlueprintCore : UObject {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
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

struct ANavigationObjectBase : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x228
	UBillboardComponent* GoodSprite; // 0x230
	UBillboardComponent* BadSprite; // 0x238
	char bIsPIEPlayerStart : 1; // 0x240
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

struct UMaterialExpressionSquareRoot : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UPortalWarsOutOfBoundsWidget : UUserWidget {
	UCanvasPanel* OutOfBoundsPanel; // 0x260
	UTextBlock* CountdownText; // 0x268
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

struct UGizmoComponentAxisSource : UObject {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct UUniformVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct UGizmoBoxComponent : UGizmoBaseComponent {
	FVector Origin; // 0x470
	FQuat Rotation; // 0x480
	FVector Dimensions; // 0x490
	float LineThickness; // 0x49c
	bool bRemoveHiddenLines; // 0x4a0
	bool bEnableAxisFlip; // 0x4a1
};

struct UMaterialExpressionDotProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UPortalWarsServerBrowserWidget : UPortalWarsMenuWidget {
	UPortalWarsServerEntryWidget* ServerEntryWidgetClass; // 0x350
	UPanelWidget* ServerList; // 0x358
	UPortalWarsNumericCarouselWidget* PaginatorCarousel; // 0x360
	int32_t NumEntriesPerPage; // 0x368
	UPortalWarsButtonWidget* FilterButton; // 0x370
	UPortalWarsCustomGameFiltersWidget* ServerFiltersDialogWidgetClass; // 0x378
	UWidget* FilterIndicator; // 0x380
	UPortalWarsButtonWidget* RefreshButton; // 0x388
	FMulticastInlineDelegate OnCreateButtonClickedDelegate; // 0x390
	UPortalWarsButtonWidget* CreateButton; // 0x3a0
	UPortalWarsServerEntryWidget* PreviewServerEntry; // 0x3a8
	UPortalWarsButtonWidget* JoinButton; // 0x3b0
	UPortalWarsJoinServerDialogWidget* JoinServerDialogWidgetClass; // 0x3b8
	int32_t MaxVisibleEntries; // 0x3c4
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
	bool locked; // 0x398
	bool IsFocusable; // 0x399
	FMulticastInlineDelegate OnMouseCaptureBegin; // 0x3a0
	FMulticastInlineDelegate OnMouseCaptureEnd; // 0x3b0
	FMulticastInlineDelegate OnControllerCaptureBegin; // 0x3c0
	FMulticastInlineDelegate OnControllerCaptureEnd; // 0x3d0
	FMulticastInlineDelegate OnValueChanged; // 0x3e0
};

struct AGeometryCollectionActor : AActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x220
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x228
};

struct UWidgetSwitcher : UPanelWidget {
	int32_t ActiveWidgetIndex; // 0x120
};

struct UMovieScene3DPathSection : UMovieScene3DConstraintSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
};

struct USpinBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UAISenseConfig_Damage : UAISenseConfig {
	UAISense_Damage* Implementation; // 0x48
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UPortalWarsJoinInProgressWidget : UUserWidget {
	UWidgetAnimation* FadeOutAnimation; // 0x260
	float TimeBeforeFadingOut; // 0x268
};

struct UGizmoAxisIntervalParameterSource : UGizmoBaseFloatParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
};

struct UUMGSequencePlayer : UObject {
	UWidgetAnimation* Animation; // 0x418
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x428
};

struct UNiagaraPreviewAxis_InterpParamVector : UNiagaraPreviewAxis_InterpParamBase {
	FVector Min; // 0x38
	FVector Max; // 0x44
};

struct APlanarReflection : ASceneCapture {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x230
	bool bShowPreviewPlane; // 0x238
};

struct UNiagaraDataInterfaceVector4Curve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
	FRichCurve WCurve; // 0x1f0
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

struct UNavigationDataChunk : UObject {
	FName NavigationDataName; // 0x28
};

struct UMaterialExpressionSamplePhysicsScalarField : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
	EFieldScalarType FieldTarget; // 0x54
};

struct UPortalWarsTxnDialogWidget : UPortalWarsDialogWidget {
	UWidgetSwitcher* TransactionSwitcher; // 0x3a0
	UPortalWarsButtonWidget* ConfirmButton; // 0x3a8
	UTextBlock* ProcessingText; // 0x3b0
	UTextBlock* SuccessText; // 0x3b8
};

struct UHighlightsSummaryAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UAnimNotify_PlayMontageNotifyWindow : UAnimNotifyState {
	FName NotifyName; // 0x30
};

struct UDistributionVector : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UEditableStaticMeshAdapter : UEditableMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamInt32 : UNiagaraPreviewAxis_InterpParamBase {
	int32_t Min; // 0x38
	int32_t Max; // 0x3c
};

struct APortalWarsVIP : APortalWarsGameMode {
	TArray<TSoftClassPtr<UObject>> VIPDefaultInventoryClasses; // 0x6a8
	int32_t VIPKillScore; // 0x6b8
	int32_t VIPSuicideScore; // 0x6bc
};

struct UPortalWarsRankLeaderboardWidget : UPortalWarsMenuWidget {
	UPortalWarsLeaderboardWidget* Leaderboard; // 0x338
	UTextBlock* PlaylistText; // 0x340
	UPortalWarsButtonWidget* ChangePlaylistButton; // 0x348
	UPortalWarsButtonWidget* ToggleCrossPlayButton; // 0x350
	UComboBoxString* PlaylistComboBox; // 0x358
	TArray<int32_t> PlaylistIDs; // 0x360
};

struct UMovieSceneCameraCutTrack : UMovieSceneNameableTrack {
	bool bCanBlend; // 0x78
	TArray<UMovieSceneSection*> Sections; // 0x80
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

struct UEditableGameplayTagQueryExpression_AllTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UPortalWarsMapSelectorWidget : UPortalWarsMenuWidget {
	UPanelWidget* ItemsPanel; // 0x338
	UPortalWarsMapSelectorEntryWidget* MapSelectorEntryClass; // 0x340
	UImage* MapImage; // 0x348
	UTextBlock* MapName; // 0x350
	UTextBlock* MapDescription; // 0x358
};

struct UInputAxisDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UPortalWarsBPPurchaseDialogWidget : UPortalWarsTxnDialogWidget {
	UPanelWidget* RewardsPanel; // 0x3c8
	UPortalWarsBattlePassEntryWidget* RewardEntryWidgetClass; // 0x3d0
	UPortalWarsButtonWidget* BuyPremiumButton; // 0x3d8
	UPortalWarsButtonWidget* BuyBundleButton; // 0x3e0
	UPortalWarsButtonWidget* BuyLevelsButton; // 0x3e8
	UWidgetSwitcher* ActionSwitcher; // 0x3f0
	UPortalWarsButtonWidget* ViewBattlePassButton; // 0x3f8
};

struct UPortalWarsFileOptionsDialogWidget : UPortalWarsDialogWidget {
	UPortalWarsButtonWidget* SaveButton; // 0x390
	UPortalWarsButtonWidget* SaveAsButton; // 0x398
	UPortalWarsButtonWidget* RenameButton; // 0x3a0
	UPortalWarsButtonWidget* DeleteButton; // 0x3a8
	UTextBlock* ManageText; // 0x3b0
	UPortalWarsTextInputWidget* SaveAsInput; // 0x3b8
	UTextBlock* SaveAsText; // 0x3c0
	UPortalWarsTextInputWidget* RenameInput; // 0x3c8
	UTextBlock* RenameText; // 0x3d0
	UTextBlock* DeleteText; // 0x3d8
	UPortalWarsButtonWidget* AcceptButton; // 0x3e0
};

struct UMaterialExpressionSetMaterialAttributes : UMaterialExpression {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct UInterpTrackInstVectorMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
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

struct UNavigationSystemV1 : UNavigationSystemBase {
	ANavigationData* MainNavData; // 0x28
	ANavigationData* AbstractNavData; // 0x30
	FName DefaultAgentName; // 0x38
	TSoftClassPtr<UObject> CrowdManagerClass; // 0x40
	char bAutoCreateNavigationData : 1; // 0x68
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x68
	char bAllowClientSideNavigation : 1; // 0x68
	char bShouldDiscardSubLevelNavData : 1; // 0x68
	char bTickWhilePaused : 1; // 0x68
	char bSupportRebuilding : 1; // 0x68
	char bInitialBuildingLocked : 1; // 0x68
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x69
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x69
	float ActiveTilesUpdateInterval; // 0x6c
	ENavDataGatheringModeConfig DataGatheringMode; // 0x70
	float DirtyAreaWarningSizeThreshold; // 0x74
	TArray<FNavDataConfig> SupportedAgents; // 0x78
	FNavAgentSelector SupportedAgentsMask; // 0x88
	TArray<ANavigationData*> NavDataSet; // 0x90
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xa0
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc0
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd0
	FNavigationSystemRunMode OperationMode; // 0x1bc
	float DirtyAreasUpdateFreq; // 0x15bc
};

struct UBTService_RandomJump : UBTService {
	float MinDistanceToEnd; // 0x70
	float MinVelocity; // 0x74
	float EpsilonVelocityParallelToPath; // 0x78
};

struct UPortalWarsModeSelectorEntryWidget : UPortalWarsEntryWidget {
	UWidget* CustomIndicator; // 0x420
	UPortalWarsButton* EditButton; // 0x680
};

struct UMovieSceneCameraShakeSourceTriggerTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UPortalWarsRoundScoreboardWidget : UUserWidget {
	UTextBlock* TopNameText; // 0x260
	UTextBlock* BottomNameText; // 0x268
	UTextBlock* TopScoreText; // 0x270
	UTextBlock* BottomScoreText; // 0x278
	UHorizontalBox* RoundEntries; // 0x280
	UPortalWarsRoundScoreboardEntryWidget* RoundEntryWidgetClass; // 0x288
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

struct APortalWarsRaceLobbyGameMode : APortalWarsLobbyGameMode {
	FString RaceGameModeAlias; // 0x378
};

struct UMaterialExpressionCurveAtlasRowParameter : UMaterialExpressionScalarParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
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

struct USoundNodeMixer : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct UARTextureCameraDepth : UARTexture {
	EARDepthQuality DepthQuality; // 0x198
	EARDepthAccuracy DepthAccuracy; // 0x199
	bool bIsTemporallySmoothed; // 0x19a
};

struct ULandscapeWeightmapUsage : UObject {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct UDialogueVoice : UObject {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct UDistributionFloatUniformCurve : UDistributionFloat {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UBodySetupCore : UObject {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct UCanvasRenderTarget2D : UTextureRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x1a8
	TWeakObjectPtr<UWorld> World; // 0x1b8
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x1c0
};

struct USubmixEffectDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct UPortalWarsPauseMenuWidget : UPortalWarsMenuSelectWidget {
	UPortalWarsButtonWidget* ResumeButton; // 0x3b0
	UPortalWarsButtonWidget* SettingsButton; // 0x3b8
	UPortalWarsButtonWidget* PlayersButton; // 0x3c0
	UPortalWarsButtonWidget* ExitButton; // 0x3c8
	UPortalWarsButtonWidget* SwitchTeamsButton; // 0x3d0
	UPortalWarsButtonWidget* EndMatchButton; // 0x3d8
	UPortalWarsButtonWidget* RestartRaceButton; // 0x3e0
	UPortalWarsButtonWidget* RestartStageButton; // 0x3e8
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

struct USlateWidgetStyleAsset : UObject {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UMovieScene3DConstraintSection : UMovieSceneSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UInAppPurchaseRestoreCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
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

struct UMaterialExpressionLandscapeGrassOutput : UMaterialExpressionCustomOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct AScoreboardComponent : ACullableActor {
	TArray<FString> TextArray; // 0x228
	UMaterialInterface* TextMaterial; // 0x238
	UDataTable* FontTable; // 0x240
	TArray<UStaticMesh*> AlwaysLoadedCharacterMeshes; // 0x248
	float FieldWidth; // 0x258
	float SpaceWidth; // 0x25c
	float Kerning; // 0x260
	float LineHeight; // 0x264
	ETextAlignment TextAlignment; // 0x268
	TArray<UStaticMeshComponent*> CharacterMeshComponents; // 0x270
};

struct UProceduralFoliageTile : UObject {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct UTireConfig : UDataAsset {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct UNavigationSystemConfig : UObject {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UBTDecorator_CompareBBEntries : UBTDecorator {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct UMaterialExpressionDesaturation : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct UParticleModuleAttractorLine : UParticleModuleAttractorBase {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct UParticleModuleLocationPrimitiveCylinder : UParticleModuleLocationPrimitiveBase {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UMaterialExpressionDynamicParameter : UMaterialExpression {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct UMovieSceneCameraCutSection : UMovieSceneSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct UEnvQueryGenerator_Cone : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0xb8
	FAIDataProviderFloatValue ConeDegrees; // 0xf0
	FAIDataProviderFloatValue AngleStep; // 0x128
	FAIDataProviderFloatValue Range; // 0x160
	UEnvQueryContext* CenterActor; // 0x198
	char bIncludeContextLocation : 1; // 0x1a0
};

struct UNiagaraDataInterfaceGrid3D : UNiagaraDataInterfaceRWBase {
	FIntVector NumCells; // 0xd8
	float CellSize; // 0xe4
	int32_t NumCellsMaxAxis; // 0xe8
	ESetResolutionMethod SetResolutionMethod; // 0xec
	FVector WorldBBoxSize; // 0xf0
};

struct UInterpTrackAnimControl : UInterpTrackFloatBase {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct APortalWarsTakedownVIPHUD : APortalWarsTakedownHUD {
	UPortalWarsVIPHUDOverlayWidget* VIPHUDOverlayWidget; // 0x450
	UPortalWarsVIPHUDOverlayWidget* VIPHUDOverlayWidgetClass; // 0x458
	UPortalWarsIndicatorWidget* VIPNameIndicatorWidgetClass; // 0x460
	UAkAudioEvent* VipAlertEvent; // 0x468
};

struct UProgressWidgetStyle : USlateWidgetStyleContainerBase {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UNiagaraComponentSettings : UObject {
	TSet<FName> SuppressActivationList; // 0x28
	TSet<FName> ForceAutoPooolingList; // 0x78
	TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8
};

struct UMovieSceneAkAudioRTPCSection : UMovieSceneSection {
	FString Name; // 0xe8
	FRichCurve FloatCurve; // 0xf8
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x178
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

struct UWmfMediaSettings : UObject {
	bool AllowNonStandardCodecs; // 0x28
	bool LowLatency; // 0x29
	bool NativeAudioOut; // 0x2a
	bool HardwareAcceleratedVideoDecoding; // 0x2b
};

struct UBTDecorator_BlackboardBase : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UPortalWarsBattlePassEntryWidget : UPortalWarsRewardPassEntryWidget {
	UProgressBar* XPProgressBar; // 0x798
	UWidget* FreeIndicator; // 0x7b0
};

struct UBTService_FindPickup : UBTService {
	float NearPickupRadius; // 0x70
	float NeedWeaponPickupRadius; // 0x74
	APortalWarsPickup* SubClassRestriction; // 0x78
	float MinDifficulty; // 0x80
};

struct UPortalWarsRadarWidget : UUserWidget {
	UPortalWarsRadarMarkerWidget* RadarMarkerWidgetClass; // 0x260
	float RadarRadius; // 0x268
	UCanvasPanel* RadarPanel; // 0x270
	UWidgetSwitcher* Quadrant1Switcher; // 0x278
	UWidgetSwitcher* Quadrant2Switcher; // 0x280
	UWidgetSwitcher* Quadrant3Switcher; // 0x288
	UWidgetSwitcher* Quadrant4Switcher; // 0x290
};

struct UNiagaraDataInterfaceGrid2D : UNiagaraDataInterfaceRWBase {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
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

struct UPortalWarsDialogWidget : UPortalWarsMenuWidget {
	FMulticastInlineDelegate OnDialogClosed; // 0x338
	FMulticastInlineDelegate OnDialogClosedPointer; // 0x348
	float MaxLifetime; // 0x358
	UProgressBar* LifetimeProgressBar; // 0x360
	float MinLifetime; // 0x370
	UPortalWarsButtonWidget* CloseButton; // 0x380
	UWidgetAnimation* OpenAnimation; // 0x388
};

struct UPortalWarsRespawnWidget : UUserWidget {
	UTextBlock* RespawnText; // 0x260
};

struct UWidgetAnimationPlayCallbackProxy : UObject {
	FMulticastInlineDelegate Finished; // 0x28
};

struct APawn : AActor {
	char bUseControllerRotationPitch : 1; // 0x228
	char bUseControllerRotationYaw : 1; // 0x228
	char bUseControllerRotationRoll : 1; // 0x228
	char bCanAffectNavigationGeneration : 1; // 0x228
	float BaseEyeHeight; // 0x22c
	EAutoReceiveInput AutoPossessPlayer; // 0x230
	EAutoPossessAI AutoPossessAI; // 0x231
	char RemoteViewPitch; // 0x232
	AController* AIControllerClass; // 0x238
	APlayerState* PlayerState; // 0x240
	AController* LastHitBy; // 0x250
	AController* Controller; // 0x258
	FVector ControlInputVector; // 0x264
	FVector LastControlInputVector; // 0x270
};

struct UBoxComponent : UShapeComponent {
	FVector BoxExtent; // 0x468
	float LineThickness; // 0x474
};

struct UPlayMontageCallbackProxy : UObject {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
};

struct UMoviePlayerSettings : UObject {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct UFindSessionsCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTileView : UListView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct UNiagaraDataInterfaceMeshRendererInfo : UNiagaraDataInterface {
	UNiagaraMeshRendererProperties* MeshRenderer; // 0x38
};

struct UNiagaraComponentPool : UObject {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28
};

struct UPWVoiceNotifications : UUserWidget {
	UVerticalBox* PlayersVerticalBox; // 0x260
	UPWVoiceNotificationItem* VoiceNotificationItemClass; // 0x268
};

struct USubmixEffectConvolutionReverbPreset : USoundEffectSubmixPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct UBTDecorator_KeepInCone : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct UNavLinkComponent : UPrimitiveComponent {
	TArray<FNavigationLink> Links; // 0x458
};

struct UAnimNotify_PlayMontageNotify : UAnimNotify {
	FName NotifyName; // 0x38
};

struct UMovieSceneLevelVisibilityTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UPortalWarsLoadingScreenWidget : UPortalWarsUserWidget {
	URichTextBlock* TipRichTextBlock; // 0x2a8
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

struct UNiagaraDataInterfaceArray : UNiagaraDataInterface {
	int32_t MaxElements; // 0x40
};

struct UPortalWarsKillcam : UObject {
	UDemoNetDriver* DemoNetDriver; // 0x28
	APortalWarsPlayerController* OwningPlayerController; // 0x30
};

struct UEnvQueryGenerator : UEnvQueryNode {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct APortalWarsBaseGameState : AGameState {
	TArray<APlayerState*> InactivePlayerArray; // 0x2d8
	int32_t RemainingTime; // 0x300
	int32_t ReplicatedRemainingTime; // 0x304
	FString PlaylistType; // 0x308
	EServerType ServerType; // 0x318
	FGameConfig GameConfig; // 0x320
	int32_t MaxPlayers; // 0x47c
};

struct UBTService_RunEQS : UBTService_BlackboardBase {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct ASkeletalMeshActor : AActor {
	char bShouldDoAnimNotifies : 1; // 0x228
	char bWakeOnLevelStart : 1; // 0x228
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x230
	USkeletalMesh* ReplicatedMesh; // 0x238
	UPhysicsAsset* ReplicatedPhysAsset; // 0x240
	UMaterialInterface* ReplicatedMaterial0; // 0x248
	UMaterialInterface* ReplicatedMaterial1; // 0x250
};

struct APortalWarsLobbyGameMode : APortalWarsBaseGameMode {
	TArray<APortalWarsLobbyPlayerStart*> PlayerStarts; // 0x340
	TArray<APortalWarsLineUpCharacter*> LineUpCharacters; // 0x350
	APortalWarsLineUpCharacter* LineUpCharacterClass; // 0x360
	ACameraActor* LobbyCam; // 0x368
};

struct UPawnAction_Sequence : UPawnAction {
	TArray<UPawnAction*> ActionSequence; // 0x90
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa0
	UPawnAction* RecentActionCopy; // 0xa8
};

struct USoundfieldEndpointSubmix : USoundSubmixBase {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UParticleModuleVectorFieldScale : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct UPortalWarsDropsMenuWidget : UPortalWarsMenuWidget {
	UTextBlock* DropsText; // 0x338
	UPortalWarsButtonWidget* OpenButton; // 0x340
	UWidgetSwitcher* ActionSwitcher; // 0x348
};

struct UInputComponent : UActorComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct UPortalWarsReportPlayerWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* ReportButton; // 0x338
	UPortalWarsDropdownWidget* ReportCategoryDropdown; // 0x340
	UPortalWarsTextInputWidget* ReportDescription; // 0x348
	UTextBlock* ReportTitleText; // 0x350
	UPortalWarsPlayerEntryWidget* PlayerEntry; // 0x358
};

struct AExplosiveProjectile : AProjectile {
	float ExplosionRadius; // 0x2d8
	float ExplosionInnerRadius; // 0x2dc
};

struct UPlatformMediaSource : UMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UVirtualTexture2D : UTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x1a0
	bool bContinuousUpdate; // 0x1ac
	bool bSinglePhysicalSpace; // 0x1ad
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

struct APortalWarsEvolutionGameState : APortalWarsShowdownGameState {
	TArray<char> TeamWeaponIndexes; // 0x838
};

struct UDatasmithDecalComponentTemplate : UDatasmithObjectTemplate {
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct UEnvQueryNode : UObject {
	int32_t VerNum; // 0x28
};

struct UBlackboardKeyType_Object : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
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

struct UFloatingPawnMovement : UPawnMovementComponent {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct UAkXSXInitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXSXApuHeapInitializationSettings ApuHeapSettings; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkXSXAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UIntervalGizmo : UInteractiveGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UPortalWarsVIPNameIndicatorWidget : UPortalWarsNameIndicatorWidget {
	UWidget* Pointer; // 0x308
	USizeBox* OffscreenSizeBox; // 0x310
};

struct UInteractiveToolPropertySet : UObject {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
};

struct UBlackboardData : UDataAsset {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct APortalWarsPickup : ATeleportableActor {
	float PickupLifetime; // 0x22c
	float InitVelocityMultiplier; // 0x230
	bool validForAI; // 0x234
	bool AllowAutoPickup; // 0x235
	bool AllowManualPickup; // 0x236
	UStaticMeshComponent* PickupMesh; // 0x238
	bool bIsGravityEnabled; // 0x240
	float PickupDistance; // 0x244
	APortalWarsTutorialGoal* Goal; // 0x260
	int32_t HiddenUntilGoal; // 0x268
};

struct UMaterialExpressionOneMinus : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UDistributionFloatParameterBase : UDistributionFloatConstant {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UNiagaraDataInterfaceAudioSpectrum : UNiagaraDataInterfaceAudioSubmix {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct AEQSTestingPawn : ACharacter {
	UEnvQuery* QueryTemplate; // 0x4c0
	TArray<FEnvNamedValue> QueryParams; // 0x4c8
	TArray<FAIDynamicParam> QueryConfig; // 0x4d8
	float TimeLimitPerStep; // 0x4e8
	int32_t StepToDebugDraw; // 0x4ec
	EEnvQueryHightlightMode HighlightMode; // 0x4f0
	char bDrawLabels : 1; // 0x4f4
	char bDrawFailedItems : 1; // 0x4f4
	char bReRunQueryOnlyOnFinishedMove : 1; // 0x4f4
	char bShouldBeVisibleInGame : 1; // 0x4f4
	char bTickDuringGame : 1; // 0x4f4
	EEnvQueryRunMode QueryingMode; // 0x4f8
	FNavAgentProperties NavAgentProperties; // 0x500
};

struct UFoliageInstancedStaticMeshComponent : UHierarchicalInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x678
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x688
	FGuid GenerationGuid; // 0x698
};

struct ACameraRig_Crane : AActor {
	float CranePitch; // 0x220
	float CraneYaw; // 0x224
	float CraneArmLength; // 0x228
	bool bLockMountPitch; // 0x22c
	bool bLockMountYaw; // 0x22d
	USceneComponent* TransformComponent; // 0x230
	USceneComponent* CraneYawControl; // 0x238
	USceneComponent* CranePitchControl; // 0x240
	USceneComponent* CraneCameraMount; // 0x248
};

struct USoundNodeSoundClass : USoundNode {
	USoundClass* SoundClassOverride; // 0x48
};

struct UPortalWarsFlagIndicatorWidget : UPortalWarsIndicatorWidget {
	UWidget* Pointer; // 0x2b8
	UTexture2D* NeutralBackground; // 0x2d0
	UTexture2D* RedBackground; // 0x2d8
	UTexture2D* BlueBackground; // 0x2e0
	UProgressBar* OnScreenProgressBar; // 0x2e8
	UProgressBar* OffScreenProgressBar; // 0x2f0
	float DisplayResetProgress; // 0x2f8
};

struct UNiagaraBaselineController : UObject {
	float TestDuration; // 0x28
	UNiagaraEffectType* EffectType; // 0x30
	ANiagaraPerfBaselineActor* Owner; // 0x38
	TSoftObjectPtr<UNiagaraSystem> System; // 0x40
};

struct UVOIPTalker : UActorComponent {
	FVoiceSettings Settings; // 0xb0
};

struct UARMeshComponent : UARComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
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

struct UPortalWarsTeamSelectWidget : UPortalWarsInputCarouselWidget {
	int32_t Value; // 0x3a0
	FMulticastInlineDelegate OnTeamChangedDelegate; // 0x3a8
};

struct UMaterialExpressionConstant4Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct AHUD : AActor {
	APlayerController* PlayerOwner; // 0x220
	char bLostFocusPaused : 1; // 0x228
	char bShowHUD : 1; // 0x228
	char bShowDebugInfo : 1; // 0x228
	int32_t CurrentTargetIndex; // 0x22c
	char bShowHitBoxDebugInfo : 1; // 0x230
	char bShowOverlays : 1; // 0x230
	char bEnableDebugTextShadow : 1; // 0x230
	TArray<AActor*> PostRenderedActors; // 0x238
	TArray<FName> DebugDisplay; // 0x250
	TArray<FName> ToggledDebugCategories; // 0x260
	UCanvas* Canvas; // 0x270
	UCanvas* DebugCanvas; // 0x278
	TArray<FDebugTextInfo> DebugTextList; // 0x280
	AActor* ShowDebugTargetDesiredClass; // 0x290
	AActor* ShowDebugTargetActor; // 0x298
};

struct UNiagaraPreviewAxis_InterpParamVector2D : UNiagaraPreviewAxis_InterpParamBase {
	FVector2D Min; // 0x38
	FVector2D Max; // 0x40
};

struct ALevelScriptActor : AActor {
	char bInputEnabled : 1; // 0x220
};

struct UDataDrivenConsoleVariableSettings : UDeveloperSettings {
	TArray<FDataDrivenConsoleVariable> CVarsArray; // 0x50
};

struct UProceduralFoliageComponent : UActorComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
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

struct USourceEffectPhaserPreset : USoundEffectSourcePreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
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

struct UPortalWarsKilledByBannerWidget : UUserWidget {
	UOverlay* BannerOverlay; // 0x260
	UTextBlock* KilledByText; // 0x268
	UTextBlock* HealthText; // 0x270
	UWidgetAnimation* FadeOutAnimation; // 0x280
};

struct UPortalWarsGamepadBindingCategoryWidget : UUserWidget {
	UTextBlock* CategoryText; // 0x260
};

struct UMicroTransactionBase : UPlatformInterfaceBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct UMaterialExpressionPower : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UCompositeCurveTable : UCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct UPortalWarsKillFeedEntryWidget : UUserWidget {
	UTextBlock* KillerNameText; // 0x268
	UTextBlock* VictimNameText; // 0x270
	USizeBox* IconSizeBox; // 0x278
	UImage* KillIcon; // 0x280
	UImage* HeadshotIcon; // 0x288
	FLinearColor FriendlyTeamColor; // 0x290
	FLinearColor EnemyTeamColor; // 0x2a0
	FLinearColor OwnColor; // 0x2b0
	FLinearColor DefaultColor; // 0x2c0
	FLinearColor AlphaTeamColor; // 0x2d0
	FLinearColor BravoTeamColor; // 0x2e0
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

struct ANavModifierVolume : AVolume {
	UNavArea* AreaClass; // 0x260
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x268
};

struct UVariant : UObject {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct UViewport : UContentWidget {
	FLinearColor BackgroundColor; // 0x120
};

struct USoundNodeDistanceCrossFade : USoundNode {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct UFontFace : UObject {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
};

struct UAIAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct UPortalWarsMatchCanceledWidget : UUserWidget {
	UTextBlock* CountdownText; // 0x260
};

struct UPortalWarsReticleWidget : UUserWidget {
	float HitMarkerDisplayTime; // 0x268
	AGun* EquippedWeapon; // 0x270
	FReticleData CurrentReticleData; // 0x278
	UCanvasPanel* ReticlePanel; // 0x2f8
	UWidgetSwitcher* ReticleSwitcher; // 0x300
	UBorder* ReticleBorder; // 0x308
	UCanvasPanel* ReticleCanvas; // 0x310
	UImage* OuterCircle; // 0x318
	UImage* InnerCircle; // 0x320
	UImage* dot; // 0x328
	UCanvasPanel* CrosshairWrapper; // 0x330
	UImage* CrosshairRight; // 0x338
	UImage* CrosshairLeft; // 0x340
	UImage* CrosshairTop; // 0x348
	UImage* CrosshairBottom; // 0x350
	UWidgetSwitcher* MarkerSwitcher; // 0x358
	UImage* HitMarker; // 0x360
	UImage* HeadshotMarker; // 0x368
	UImage* KillMarker; // 0x370
	UImage* ZoomImage; // 0x378
	UCanvasPanel* ChargePanel; // 0x380
	UProgressBar* OverheatProgressBar; // 0x388
	UImage* SprintCrosshair; // 0x390
	float ChargeUpdateInterval; // 0x39c
	FLinearColor ReticleBaseColor; // 0x3a0
	FLinearColor ReticleAimColor; // 0x3b0
	float HitSoundDelayTime; // 0x3c0
	UAkAudioEvent* HitEnemyEvent; // 0x3c8
	UAkAudioEvent* HeadshotEnemyEvent; // 0x3d0
	UAkAudioEvent* KillEnemyEvent; // 0x3d8
	UAkAudioEvent* AssistKillEnemyEvent; // 0x3e0
	bool bPreviewOnly; // 0x3e8
};

struct UParticleModuleVectorFieldGlobal : UParticleModuleVectorFieldBase {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct UMovieSceneFolder : UObject {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct ALineTraceGun : AGun {
	FLineTraceGunData LineTraceGunConfig; // 0x698
	AGunImpactEffectManager* ImpactTemplate; // 0x6d8
	AGunImpactEffectManager* ImpactManager; // 0x6e0
	float MaxImpactEffectDistance; // 0x6e8
	float MaxSimulatedImpactEffectDistance; // 0x6ec
	TArray<FLineTraceInfo> BulletNotify; // 0x6f0
	UParticleSystem* TrailFX; // 0x700
	FName TrailTargetParam; // 0x708
	FName ColorParam; // 0x710
	char tracerFrequency; // 0x718
	UAkAudioEvent* BulletWhizEvent; // 0x728
	float MaxBulletWhizDist; // 0x730
	float BulletWhizDelay; // 0x734
	FVector BulletWhizStart; // 0x738
	FVector BulletWhizEnd; // 0x744
	FVector BulletWhizClosestPoint; // 0x750
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

struct UBTDecorator_CheckGameplayTagsOnActor : UBTDecorator {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct UAnimNotifyState_TimedNiagaraEffect : UAnimNotifyState {
	UNiagaraSystem* Template; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UMaterialExpressionMaterialProxyReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UParticleModuleLifetime : UParticleModuleLifetimeBase {
	FRawDistributionFloat LifeTime; // 0x30
};

struct APortalWarsRoundHUD : APortalWarsHUD {
	UPortalWarsRoundResultWidget* RoundResultWidget; // 0x400
	UPortalWarsRoundResultWidget* RoundResultWidgetClass; // 0x408
	UPortalWarsRoundIntermissionWidget* RoundIntermissionWidget; // 0x410
	UPortalWarsRoundIntermissionWidget* RoundIntermissionWidgetClass; // 0x418
	UPortalWarsRoundHUDOverlayWidget* RoundHUDOverlayWidget; // 0x420
	UPortalWarsRoundHUDOverlayWidget* RoundHUDOverlayWidgetClass; // 0x428
	UPortalWarsRoundPlayerStatusWidget* PlayerStatusWidgetClass; // 0x430
	bool bMinimalIntermissionScoreboard; // 0x438
};

struct UFoliageType_Actor : UFoliageType {
	AActor* ActorClass; // 0x3b0
	bool bShouldAttachToBaseComponent; // 0x3b8
};

struct UBaseMediaSource : UMediaSource {
	FName PlayerName; // 0x80
};

struct UPortalWarsItemShopPurchasePanel : UPortalWarsUserWidget {
	UTextBlock* TitleText; // 0x2a8
	UTextBlock* ItemTitleText; // 0x2b0
	UTextBlock* ItemSubtitleText; // 0x2b8
	UPortalWarsItemShopEntry* ItemShopEntry; // 0x2c0
	UWidgetSwitcher* OwnedSwitcher; // 0x2c8
	UPortalWarsPurchaseButtonWidget* PurchaseButton; // 0x2e0
	FKey GamepadKey; // 0x2e8
};

struct UPWProjectileMovementComponent : UProjectileMovementComponent {
	TArray<UPrimitiveComponent*> AddlUpdatedComponents; // 0x1d0
};

struct UPortalWarsWaitingAreaHUDWidget : UUserWidget {
	UTextBlock* SessionQueryTitleText; // 0x260
	UWidget* WaitingAreaPanel; // 0x268
	UPortalWarsGameInstance* GameInstanceRef; // 0x270
};

struct APreviewItem : AActor {
	USceneCaptureComponent2D* SceneCaptureComponent; // 0x268
	TMap<ECustomizationType, FTransform> SceneCaptureTransforms; // 0x270
	TMap<ERewardType, FTransform> SceneCaptureRewardTransforms; // 0x2c0
	USceneComponent* SceneRoot; // 0x310
	USceneComponent* CustomizationSceneComponent; // 0x318
	USkeletalMeshComponent* Suit; // 0x320
	USkeletalMeshComponent* JetpackAttached; // 0x328
	TArray<UStaticMeshComponent*> JetpackFlameMeshes; // 0x330
	USkeletalMeshComponent* JetpackAlone; // 0x340
	UStaticMeshComponent* PortalGun; // 0x348
	UStaticMeshComponent* PortalGunStandalone; // 0x350
	UAnimSequence* DefaultAnim; // 0x358
	UStaticMeshComponent* Weapon; // 0x360
	UStaticMeshComponent* Portal; // 0x368
	UStaticMeshComponent* PortalInside; // 0x370
	UStaticMeshComponent* PortalFrameBase; // 0x378
	UStaticMeshComponent* SprayMesh; // 0x380
	UDecalComponent* SprayDecal; // 0x388
	UStaticMeshComponent* XPMesh; // 0x390
	UStaticMeshComponent* CurrencyMesh; // 0x398
	UStaticMeshComponent* DropMesh; // 0x3a0
	UAnimSequence* JetpackOpenAnimation; // 0x3a8
	UAnimSequence* JetpackIdleAnimation; // 0x3b0
};

struct APortalWarsContamination : APortalWarsRoundGameMode {
	TArray<TSoftClassPtr<UObject>> ContaminationDefaultInventoryClasses; // 0x6c0
};

struct UAITask : UGameplayTask {
	AAIController* OwnerController; // 0x68
};

struct UPortalWarsLobbyWidget : UPortalWarsUserWidget {
	UPortalWarsButtonWidget* PrevGameStatsButton; // 0x2a8
	UPortalWarsPostGameStatsWidget* PostGameStatsWidgetClass; // 0x2b0
	UPortalWarsButtonWidget* EmoteButton; // 0x2b8
	UPortalWarsButtonWidget* SwitchWeaponButton; // 0x2c0
	UPortalWarsChatWidget* LobbyChat; // 0x2c8
	UPanelWidget* PlayersPanel; // 0x2e0
	UPortalWarsLobbyPlayerEntryWidget* LobbyPlayerWidgetClass; // 0x2e8
	UPortalWarsButtonWidget* SaveReplayButton; // 0x2f0
};

struct UPlatformInterfaceBase : UObject {
	TArray<FDelegateArray> AllDelegates; // 0x28
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

struct UPortalWarsPurchaseButtonWidget : UPortalWarsEntryWidget {
	bool bGoToStoreIfNotEnough; // 0x420
	UWidgetSwitcher* PurchaseSwitcher; // 0x428
	UTextBlock* CurrencyText; // 0x430
};

struct UBTTask_ChoosePortal : UBTTaskNode {
	float PortalTraceRadius; // 0x70
};

struct UNiagaraPreviewAxis_InterpParamBase : UNiagaraPreviewAxis {
	FName Param; // 0x28
	int32_t Count; // 0x30
};

struct UScaleBox : UContentWidget {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct UBehaviorTree : UObject {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct UBTService_AssignTarget : UBTService {
	float ShotByEnemyRelevantTime; // 0x70
	float PortalRelevantDistance; // 0x74
	float MinTimeBeforeSwitchingTargets; // 0x78
	float MinThreatDifferenceToSwitch; // 0x7c
};

struct UAISenseConfig : UObject {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UEdGraph : UObject {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
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

struct UPawnActionsComponent : UActorComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct UPortalWarsTeamDecimalCarouselWidget : UPortalWarsInputWidget {
	UPortalWarsDecimalCarouselWidget* GlobalCarousel; // 0x368
	UPortalWarsDecimalCarouselWidget* AlphaCarousel; // 0x370
	UPortalWarsDecimalCarouselWidget* BravoCarousel; // 0x378
	UPortalWarsCheckBox* TeamCheckbox; // 0x380
	float Value; // 0x38c
	float MinValue; // 0x390
	float MaxValue; // 0x394
	float StepSize; // 0x398
	FKey GamepadKey; // 0x3a0
	UImage* StandardIcon; // 0x3b8
	UImage* GamepadIcon; // 0x3c0
	UWidgetSwitcher* ConsoleSwitcher; // 0x3c8
	FLinearColor IconDefaultColor; // 0x3d0
	FLinearColor IconHoveredColor; // 0x3e0
};

struct APortalWarsVoteInfo : AInfo {
	FVoteOption VoteOption; // 0x220
	TArray<APortalWarsPlayerState*> Voters; // 0x260
};

struct AARSkyLight : ASkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x230
};

struct ALandscapeMeshProxyActor : AActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x220
};

struct ULightmappedSurfaceCollection : UObject {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct UParticleModuleParameterDynamic : UParticleModuleParameterBase {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct UPortalWarsIndicatorWidget : UUserWidget {
	float UpdateInterval; // 0x264
	float EdgePercentage; // 0x2a8
	float OpacityAtCenter; // 0x2ac
	UWidgetSwitcher* IndicatorSwitcher; // 0x2b0
};

struct UMovieSceneMaterialTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UHapticFeedbackEffect_SoundWave : UHapticFeedbackEffect_Base {
	USoundWave* SoundWave; // 0x28
};

struct UQuitMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UEndTurnCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
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

struct UEditableTextWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct APortalWarsVIPGameState : APortalWarsGameState {
	TMap<int32_t, APortalWarsPlayerState*> VIPs; // 0x7c8
	TMap<int32_t, APortalWarsPlayerState*> PreviousVIPs; // 0x818
};

struct UNiagaraBaselineController_Basic : UNiagaraBaselineController {
	int32_t NumInstances; // 0x68
	TArray<UNiagaraComponent*> SpawnedComponents; // 0x70
};

struct UWaveOscillatorCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x38
	float LocationFrequencyMultiplier; // 0x3c
	FWaveOscillator X; // 0x40
	FWaveOscillator Y; // 0x4c
	FWaveOscillator Z; // 0x58
	float RotationAmplitudeMultiplier; // 0x64
	float RotationFrequencyMultiplier; // 0x68
	FWaveOscillator Pitch; // 0x6c
	FWaveOscillator Yaw; // 0x78
	FWaveOscillator Roll; // 0x84
	FWaveOscillator FOV; // 0x90
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

struct APortalWall : AActor {
	UStaticMeshComponent* PortalWallMesh; // 0x220
	bool validForAI; // 0x228
	bool isDoubleSided; // 0x229
	bool shouldDisableForCTF; // 0x22a
	APortalWarsTutorialGoal* Goal; // 0x230
	TArray<AStaticMeshActor*> Blocks; // 0x238
	int32_t HiddenUntilGoal; // 0x248
};

struct USynthComponentMoto : USynthComponent {
	UMotoSynthPreset* MotoSynthPreset; // 0x6c0
	float RPM; // 0x6c8
};

struct USoundWave : USoundBase {
	int32_t CompressionQuality; // 0x170
	int32_t StreamingPriority; // 0x174
	ESoundwaveSampleRateSettings SampleRateQuality; // 0x178
	ESoundGroup SoundGroup; // 0x17a
	char bLooping : 1; // 0x17b
	char bStreaming : 1; // 0x17b
	char bSeekableStreaming : 1; // 0x17b
	ESoundWaveLoadingBehavior LoadingBehavior; // 0x17c
	char bMature : 1; // 0x17d
	char bManualWordWrap : 1; // 0x17d
	char bSingleLine : 1; // 0x17e
	char bIsAmbisonics : 1; // 0x17e
	FSoundModulationDefaultRoutingSettings ModulationSettings; // 0x180
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

struct UPortalWarsVoteEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* MapNameText; // 0x428
	UImage* MapImage; // 0x430
	UTexture2D* DefaultImage; // 0x438
	UTextBlock* ModeNameText; // 0x448
	UTextBlock* NumVotesText; // 0x450
	UTextBlock* VotesText; // 0x458
	UWidget* VotedIndicator; // 0x468
	UWidgetAnimation* VotedAnimation; // 0x470
	FButtonStyle DefaultButtonStyle; // 0x478
	FButtonStyle SelectedButtonStyle; // 0x6f0
	UImage* FadeScrim; // 0x968
	UTexture2D* DefaultFadeScrim; // 0x970
	UTexture2D* SelectedFadeScrim; // 0x978
};

struct UMaterialExpressionLandscapeLayerSwitch : UMaterialExpression {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UMaterialExpressionArctangentFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct AVolumetricCloud : AInfo {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x220
};

struct UPortalWarsStatsOverviewWidget : UPortalWarsMenuWidget {
	UPortalWarsCareerProgressWidget* CareerProgress; // 0x338
	UPortalWarsStatsEntryWidget* TotalStats; // 0x340
	UPortalWarsStatsEntryWidget* SeasonStats; // 0x348
	UTextBlock* SeasonText; // 0x350
	UPortalWarsButtonWidget* ChangeSeasonButton; // 0x358
	UComboBoxString* SeasonComboBox; // 0x360
};

struct UBTDecorator_Loop : UBTDecorator {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UGizmoScaledTransformSource : UGizmoBaseTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
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

struct USubmixEffectTapDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct ANavSystemConfigOverride : AActor {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x220
	ENavSystemOverridePolicy OverridePolicy; // 0x228
	char bLoadOnClient : 1; // 0x229
};

struct UFieldSystemMetaDataProcessingResolution : UFieldSystemMetaData {
	EFieldResolutionType ResolutionType; // 0xb0
};

struct UParticleModuleAttractorPointGravity : UParticleModuleAttractorBase {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct ARuntimeVirtualTextureVolume : AActor {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x220
};

struct UPortalWarsRoundPlayerStatusWidget : UUserWidget {
	bool bShowRespawnTimer; // 0x260
	UTextBlock* RespawnTimeText; // 0x268
	UImage* BackgroundImage; // 0x270
	UTexture2D* RedPlayerImage; // 0x288
	UTexture2D* BluePlayerImage; // 0x290
	UTexture2D* DeadPlayerImage; // 0x298
	float PaddingBetweenEntries; // 0x2a0
};

struct APlasmaRifle : AProjectileGun {
	float currentHeatLevel; // 0x6e0
	float heatIncreasePerShot; // 0x6e4
	float coolDownRate; // 0x6e8
	float totalHeatCapacity; // 0x6ec
	UAkAudioEvent* OverHeatChargeEvent; // 0x6f0
	UAkAudioEvent* OverHeatChargeStopEvent; // 0x6f8
};

struct UPortalWarsCrosshairSelectWidget : UPortalWarsInputWidget {
	UPortalWarsReticleWidget* ReticleWidget; // 0x368
	UPortalWarsComboBoxString* CrosshairComboBox; // 0x370
	int32_t WeaponID; // 0x378
};

struct UShapeComponent : UPrimitiveComponent {
	UBodySetup* ShapeBodySetup; // 0x450
	UNavAreaBase* AreaClass; // 0x458
	FColor ShapeColor; // 0x460
	char bDrawOnlyIfSelected : 1; // 0x464
	char bShouldCollideWhenPlacing : 1; // 0x464
	char bDynamicObstacle : 1; // 0x464
};

struct UImage : UWidget {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UInterpTrackFloatProp : UInterpTrackFloatBase {
	FName PropertyName; // 0x90
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

struct UNiagaraDataInterfaceVectorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
};

struct UAkSettingsPerUser : UObject {
	FDirectoryPath WwiseWindowsInstallationPath; // 0x28
	FFilePath WwiseMacInstallationPath; // 0x38
	FString WaapiIPAddress; // 0x48
	uint32_t WaapiPort; // 0x58
	bool SuppressWwiseProjectPathWarnings; // 0x5c
};

struct UInterpTrackFloatAnimBPParam : UInterpTrackFloatBase {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
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

struct UAkSurfaceReflectorSetComponent : USceneComponent {
	char bEnableSurfaceReflectors : 1; // 0x1f8
	TArray<FAkPoly> AcousticPolys; // 0x200
	char bEnableDiffraction : 1; // 0x210
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x210
	AActor* AssociatedRoom; // 0x218
};

struct UMovieSceneIntegerSection : UMovieSceneSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xf0
};

struct UMaterialExpressionStaticBool : UMaterialExpression {
	char Value : 1; // 0x40
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
	float StopTracingTransmittanceThreshold; // 0x234
};

struct UMediaTimeStampInfo : UObject {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
};

struct UMovieSceneColorTrack : UMovieScenePropertyTrack {
	bool bIsSlateColor; // 0xa8
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

struct UMatineeCameraShake : UCameraShakeBase {
	float OscillationDuration; // 0xa8
	float OscillationBlendInTime; // 0xac
	float OscillationBlendOutTime; // 0xb0
	FROscillator RotOscillation; // 0xb4
	FVOscillator LocOscillation; // 0xd8
	FFOscillator FOVOscillation; // 0xfc
	float AnimPlayRate; // 0x108
	float AnimScale; // 0x10c
	float AnimBlendInTime; // 0x110
	float AnimBlendOutTime; // 0x114
	float RandomAnimSegmentDuration; // 0x118
	UCameraAnim* Anim; // 0x120
	UCameraAnimationSequence* AnimSequence; // 0x128
	char bRandomAnimSegment : 1; // 0x130
	float OscillatorTimeRemaining; // 0x134
	UCameraAnimInst* AnimInst; // 0x138
	USequenceCameraShakePattern* SequenceShakePattern; // 0x180
};

struct USoundNodeQualityLevel : USoundNode {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct UAsyncTaskDownloadImage : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UMaterialExpressionSphericalParticleOpacity : UMaterialExpression {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct UCableComponent : UMeshComponent {
	bool bAttachStart; // 0x478
	bool bAttachEnd; // 0x479
	FComponentReference AttachEndTo; // 0x480
	FName AttachEndToSocketName; // 0x4a8
	FVector EndLocation; // 0x4b0
	float CableLength; // 0x4bc
	int32_t NumSegments; // 0x4c0
	float SubstepTime; // 0x4c4
	int32_t SolverIterations; // 0x4c8
	bool bEnableStiffness; // 0x4cc
	bool bUseSubstepping; // 0x4cd
	bool bSkipCableUpdateWhenNotVisible; // 0x4ce
	bool bSkipCableUpdateWhenNotOwnerRecentlyRendered; // 0x4cf
	bool bEnableCollision; // 0x4d0
	float CollisionFriction; // 0x4d4
	FVector CableForce; // 0x4d8
	float CableGravityScale; // 0x4e4
	float CableWidth; // 0x4e8
	int32_t NumSides; // 0x4ec
	float TileMaterial; // 0x4f0
};

struct UGeometryCacheTrack : UObject {
	float Duration; // 0x28
};

struct UGeometryCollectionDebugDrawComponent : UActorComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct UInputActionDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct AOddballSpawnPoint : AActor {
	UStaticMeshComponent* Mesh; // 0x220
	USceneComponent* BallSpawnPoint; // 0x228
	AOddballItemPickup* OddballPickupClass; // 0x230
	APortalWarsOddballGameState* OddballGameState; // 0x238
};

struct UDestroySessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UBTTask_Crouch : UBTTaskNode {
	bool shouldCrouch; // 0x70
};

struct UMaterialExpressionTime : UMaterialExpression {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct APortalWarsCharacter : ACharacter {
	APortalWarsGameState* GameStateRef; // 0x4d8
	float Health; // 0x4ec
	float MaxHealth; // 0x4f0
	float healthRechargeDelay; // 0x4fc
	UAkAudioEvent* HealthRechargeStartEvent; // 0x500
	UAkAudioEvent* HealthRechargeStopEvent; // 0x508
	UAkAudioEvent* LowHealthStartEvent; // 0x510
	UAkAudioEvent* LowHealthStopEvent; // 0x518
	UAkAudioEvent* KillHealthLoopEvents; // 0x520
	FHitInfo LastCausedHitInfo; // 0x620
	UAnimMontage* upperBodyFlinchMontage; // 0x720
	UAnimMontage* lowerBodyFlinchMontage; // 0x728
	UAnimMontage* headFlinchMontage; // 0x730
	UDamageType* SuicideDamageType; // 0x740
	UDamageType* portalDamageType; // 0x748
	UAkAudioEvent* PlayerTakeDamageEvent; // 0x750
	UAkAudioEvent* RagdollCollisionEvent; // 0x758
	float RagdollImpactSFXThreshold; // 0x760
	float PostDeathPortalLifetime; // 0x764
	float RagdollLifetime; // 0x768
	TArray<APortalWarsAIController*> TargetingBots; // 0x770
	UCameraComponent* ThirdPersonCamera; // 0x780
	USpringArmComponent* ThirdPersonCameraArm; // 0x788
	UCameraComponent* SpectatorFirstPersonCamera; // 0x798
	USpringArmComponent* SpectatorFirstPersonCameraArm; // 0x7a0
	TArray<TSoftClassPtr<UObject>> DefaultInventoryClasses; // 0x7d0
	TArray<AGun*> Inventory; // 0x7e0
	AGun* CurrentWeapon; // 0x7f0
	AGun* Fists; // 0x800
	AGun* FistsClass; // 0x808
	AGun* CurrentWeaponClass; // 0x810
	FName WeaponAttachPoint; // 0x850
	FName GrendadeAttachPoint; // 0x858
	APortalLauncher* portalLauncherClass; // 0x860
	APortalLauncher* PortalLauncher; // 0x868
	FName PortalLauncherAttachPoint; // 0x870
	USceneComponent* FirstPersonArmsRoot; // 0x880
	USkeletalMeshComponent* Mesh1P; // 0x898
	USkeletalMeshComponent* Jetpack; // 0x8a0
	TMap<FName, UStaticMeshComponent*> JetpackFlameMeshes; // 0x8a8
	int32_t FriendlyStencilValue; // 0x910
	int32_t EnemyStencilValue; // 0x914
	int32_t AlphaTeamStencilValue; // 0x918
	int32_t BravoTeamStencilValue; // 0x91c
	FLinearColor BlueOutlineColor; // 0x920
	FLinearColor RedOutlineColor; // 0x930
	float ColorIntensity3P; // 0x940
	float ColorIntensity1P; // 0x944
	UMaterialInstance* EnemyCharacterMaterialOverride; // 0x948
	FCustomizationId EnemyCharacterCustomizationOverride; // 0x950
	UAnimSequence* EmoteSequenceCurrentlyPlayingInMenu; // 0x9d8
	float SprayRange; // 0x9e0
	float SprayLifetime; // 0x9e4
	float TimeBetweenSprays; // 0x9e8
	TArray<FSavedPosition> SavedPositions; // 0x9f0
	char bIsSprinting : 1; // 0xa08
	UMatineeCameraShake* SprintCamShake; // 0xa10
	float SprintingSpeedModifier; // 0xa1c
	APortalWarsTeabagZone* TeabagZone; // 0xa30
	float CrouchCameraSpeed; // 0xa40
	UAkAudioEvent* CrouchEvent; // 0xa48
	UAkAudioEvent* UncrouchEvent; // 0xa50
	float BaseTurnRate; // 0xa58
	float BaseLookUpRate; // 0xa5c
	float ControllerMaxAccelMultiplier; // 0xaf8
	AController* OwnerOfLastPortalUsed; // 0xb60
	float rotateToUprightSpeed; // 0xb6c
	char DoRep_collisionProfile; // 0xb70
	UAkAudioEvent* TeleportEvent; // 0xb88
	UAkAudioEvent* LocalPlayerTeleportEvent; // 0xb90
	AGrenadeLauncher* GrenadeLauncher; // 0xba8
	AGrenadeLauncher* GrenadeLauncherClass; // 0xbb0
	UAkAudioEvent* ThrowGrenadeEvent; // 0xbb8
	FIgnoreMovementCorrections IgnoreServerCorrections; // 0xbc0
	float MeleeApplyDmgRange; // 0xbc8
	float MeleeApplyDmgRangeXY; // 0xbcc
	float MeleeApplyDmgAngle; // 0xbd0
	float MeleeRange; // 0xbd4
	float TimeBetweenMelee; // 0xbd8
	float MeleeConeHalfAngle; // 0xbdc
	float MeleeMaxRotationAngle; // 0xc14
	UDamageType* MeleeDamageType; // 0xc28
	char bIsThrusting : 1; // 0xc39
	float thrustAmountPerTick; // 0xc3c
	float thrusterVelocityThreshhold; // 0xc40
	float thrusterRechargeDelay; // 0xc44
	float thrusterTotalTime; // 0xc48
	float thrusterCurrentTime; // 0xc4c
	UAkAudioEvent* JetPackStartEvent; // 0xc58
	UAkAudioEvent* JetPackEndEvent; // 0xc60
	UAnimSequence* JetpackOpenAnimation; // 0xc70
	UAnimSequence* JetpackIdleAnimation; // 0xc78
	char bIsClambering : 1; // 0xc80
	float ClamberCameraShakeDelay; // 0xc84
	UCameraShakeBase* ClamberCameraShake; // 0xc88
	char bIsZooming : 1; // 0xc90
	float maxTimeOutOfBounds; // 0xc94
	float curTimeOutOfBounds; // 0xc98
	UAkAudioEvent* OutOfBoundsStartEvent; // 0xca0
	UAkAudioEvent* OutofBoundsEndEvent; // 0xca8
	UPortalWarsAnimInstanceV2* Animation; // 0xcb8
	UAkAudioEvent* DeathEvent; // 0xce0
	UAkAudioEvent* RespawnEvent; // 0xce8
	UAkAudioEvent* SprayEvent; // 0xcf0
	UAkAudioEvent* Footstep3pEvent; // 0xcf8
	UAkAudioEvent* Footstep1pEvent; // 0xd00
	UAkAudioEvent* Land3pEvent; // 0xd08
	UAkAudioEvent* Land1pEvent; // 0xd10
	UAkAudioEvent* Jump3pEvent; // 0xd18
	UAkAudioEvent* Jump1pEvent; // 0xd20
	UPortalWarsAkComponent* AkFirstPerson; // 0xd28
	UPortalWarsAkComponent* AkThirdPerson; // 0xd30
	UPortalWarsAkComponent* AkFoot; // 0xd38
	UPortalWarsAkComponent* AkJetPack; // 0xd40
	UPortalWarsAkComponent* AkGunLocation; // 0xd48
	UPortalWarsAkComponent* AkMoveable; // 0xd50
	UAkAudioEvent* RespawnCountdownEvent; // 0xd58
	UAkAudioEvent* RespawnCountdownStopEvent; // 0xd60
	float FootstepLoudnessForBots; // 0xd68
	float ThrusterLoudnessForBots; // 0xd6c
	UPortalWarsIndicatorWidget* NameIndicatorWidget; // 0xd78
	UPortalWarsRadarMarkerWidget* RadarMarkerWidget; // 0xd80
	APortalWarsPlayerState* LastPlayerState; // 0xd88
	uint16_t RemotePitch; // 0xd94
	uint16_t RemoteYaw; // 0xd96
	uint16_t RemoteRoll; // 0xd98
};

struct UPortalWarsRadarMarkerWidget : UPortalWarsIndicatorWidget {
	UWidgetSwitcher* MarkerSwitcher; // 0x2d8
	float ZOffsetTrigger; // 0x2e0
	UImage* AboveImage; // 0x2e8
	UImage* BelowImage; // 0x2f0
};

struct UParticleModuleCameraOffset : UParticleModuleCameraBase {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct UWidgetNavigation : UObject {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UMovieSceneFloatSection : UMovieSceneSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct AMagicLeapSharedWorldGameState : AGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x290
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a0
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b0
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c0
};

struct UHighlightsSetVideoAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct USourceEffectFilterPreset : USoundEffectSourcePreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct USizeBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UPortalWarsMenuSelectWidget : UPortalWarsDialogWidget {
	UTextBlock* HoveredEntryText; // 0x390
	UWidget* HoveredEntryRoot; // 0x398
	UPanelWidget* NavPanel; // 0x3a8
};

struct USoundNodeAttenuation : USoundNode {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct UNiagaraDataInterfaceRWBase : UNiagaraDataInterface {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct USystemTimeTimecodeProvider : UTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
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

struct UAkAudioBank : UObject {
	bool AutoLoad; // 0x28
};

struct UBTDecorator_Blackboard : UBTDecorator_BlackboardBase {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UPortalWarsEvolutionHUDOverlayWidget : UPortalWarsTakedownHUDOverlayWidget {
	UPortalWarsEvolutionGunStatusWidget* EnemyGunStatus; // 0x280
};

struct UAchievementWriteCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UPortalWarsDropdownWidget : UPortalWarsInputWidget {
	TArray<FText> DefaultOptions; // 0x368
	int32_t DefaultIndex; // 0x378
	UComboBoxString* ComboBox; // 0x380
};

struct UNiagaraDataInterfaceIntRenderTarget2D : UNiagaraDataInterfaceRWBase {
	FIntPoint Size; // 0xd8
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe0
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x100
};

struct UVehicleAnimInstance : UAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa50
};

struct UMovieSceneEventTrack : UMovieSceneNameableTrack {
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	EFireEventsAtPosition EventPosition; // 0x84
	TArray<UMovieSceneSection*> Sections; // 0x88
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

struct UParticleModuleMeshRotation : UParticleModuleRotationBase {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
};

struct UMaterialExpressionDistanceFieldsRenderingSwitch : UMaterialExpression {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UPortalWarsDOMHillStatusWidget : UUserWidget {
	UProgressBar* HillProgressBar; // 0x260
	UImage* OutlineImage; // 0x268
	UTextBlock* HillLetterText; // 0x270
	UTextBlock* HillStatusText; // 0x278
	UHorizontalBox* RootHorizontalBox; // 0x280
	UWidgetAnimation* RotateAnimation; // 0x288
	UTexture2D* BlueHillImage; // 0x290
	UTexture2D* WhiteHillImage; // 0x298
	UTexture2D* RedHillImage; // 0x2a0
	UTexture2D* BlueFillImage; // 0x2a8
	UTexture2D* RedFillImage; // 0x2b0
};

struct UHighlightsGetNumberAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UGameplayTask_TimeLimitedExecution : UGameplayTask {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct AMagicLeapARPinInfoActorBase : AActor {
	FGuid PinId; // 0x220
	bool bVisibilityOverride; // 0x230
};

struct APartyBeaconClient : AOnlineBeaconClient {
	FString DestSessionId; // 0x2e0
	FPartyReservation PendingReservation; // 0x2f0
	EClientRequestType RequestType; // 0x340
	bool bPendingReservationSent; // 0x341
	bool bCancelReservation; // 0x342
};

struct UMaterialExpressionReroute : UMaterialExpressionRerouteBase {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleColor_Seeded : UParticleModuleColor {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UAkMarkerCallbackInfo : UAkEventCallbackInfo {
	int32_t Identifier; // 0x38
	int32_t Position; // 0x3c
	FString Label; // 0x40
};

struct UNiagaraMeshRendererProperties : UNiagaraRendererProperties {
	TArray<FNiagaraMeshRendererMeshProperties> Meshes; // 0x88
	ENiagaraRendererSourceDataMode SourceMode; // 0x98
	ENiagaraSortMode SortMode; // 0x99
	char bOverrideMaterials : 1; // 0x9c
	char bSortOnlyWhenTranslucent : 1; // 0x9c
	char bSubImageBlend : 1; // 0x9c
	char bEnableFrustumCulling : 1; // 0x9c
	char bEnableCameraDistanceCulling : 1; // 0x9c
	char bEnableMeshFlipbook : 1; // 0x9c
	TArray<FNiagaraMeshMaterialOverride> OverrideMaterials; // 0xa0
	FVector2D SubImageSize; // 0xb0
	ENiagaraMeshFacingMode FacingMode; // 0xb8
	char bLockedAxisEnable : 1; // 0xbc
	FVector LockedAxis; // 0xc0
	ENiagaraMeshLockedAxisSpace LockedAxisSpace; // 0xcc
	float MinCameraDistance; // 0xd0
	float MaxCameraDistance; // 0xd4
	uint32_t RendererVisibility; // 0xd8
	FNiagaraVariableAttributeBinding PositionBinding; // 0xe0
	FNiagaraVariableAttributeBinding ColorBinding; // 0x138
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x190
	FNiagaraVariableAttributeBinding MeshOrientationBinding; // 0x1e8
	FNiagaraVariableAttributeBinding ScaleBinding; // 0x240
	FNiagaraVariableAttributeBinding SubImageIndexBinding; // 0x298
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x2f0
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x348
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x3a0
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x3f8
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x450
	FNiagaraVariableAttributeBinding CustomSortingBinding; // 0x4a8
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x500
	FNiagaraVariableAttributeBinding CameraOffsetBinding; // 0x558
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0x5b0
	FNiagaraVariableAttributeBinding MeshIndexBinding; // 0x608
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x660
	FNiagaraVariableAttributeBinding PrevPositionBinding; // 0x670
	FNiagaraVariableAttributeBinding PrevScaleBinding; // 0x6c8
	FNiagaraVariableAttributeBinding PrevMeshOrientationBinding; // 0x720
	FNiagaraVariableAttributeBinding PrevCameraOffsetBinding; // 0x778
	FNiagaraVariableAttributeBinding PrevVelocityBinding; // 0x7d0
	UStaticMesh* ParticleMesh; // 0x890
	FVector PivotOffset; // 0x898
	ENiagaraMeshPivotOffsetSpace PivotOffsetSpace; // 0x8a4
};

struct UPortalWarsKillcamWidget : UUserWidget {
	UPortalWarsKillcamKilledByWidget* KilledBy; // 0x260
	UPortalWarsKillPlayerEntryWidget* KillerPlayerEntry; // 0x268
	UUserWidget* KillcamSkip; // 0x270
};

struct UPortalWarsSaveGame : USaveGame {
	float FOV; // 0x34
	int32_t ColorblindMode; // 0x38
	float ColorblindModeIntensity; // 0x3c
	float MasterVolume; // 0x40
	float MusicVolume; // 0x44
	float GameplayVolume; // 0x48
	float AnnouncerVolume; // 0x4c
	float AmbientVolume; // 0x50
	float VOIPVolume; // 0x54
	bool bOpenMic; // 0x58
	bool bProximityEnabled; // 0x59
	FString VoiceChatInputDevice; // 0x60
	FString VoiceChatOutputDevice; // 0x70
	bool bMuteWhileMinimized; // 0x80
	bool ToggleCrouch; // 0x81
	bool ToggleZoom; // 0x82
	bool ToggleSprint; // 0x83
	float HorizontalMouseSensitivity; // 0x84
	float VerticalMouseSensitivity; // 0x88
	float MouseZoomSensitivityMultiplier; // 0x8c
	bool MouseInverted; // 0x90
	bool MouseAutosprint; // 0x91
	bool EnableMouseSmoothing; // 0x92
	TArray<FKeyConfigurationInfo> KeyBindings; // 0x98
	float HorizontalControllerSensitivity; // 0xa8
	float VerticalControllerSensitivity; // 0xac
	float ControllerAccelerationSensitivity; // 0xb0
	float ControllerZoomSensitivityMultiplier; // 0xb4
	float ControllerInnerDeadzone; // 0xb8
	float ControllerOuterDeadzone; // 0xbc
	float ControllerAimAssistStrength; // 0xc0
	bool ControllerInverted; // 0xc4
	bool ControllerAutosprint; // 0xc5
	bool ControllerVibrationEnabled; // 0xc6
	int32_t ControllerGameplayPreset; // 0xc8
	FControllerKeybindPreset CustomControllerBindings; // 0xd0
	bool ShouldShowBlood; // 0x140
	int32_t PlayKillcamMode; // 0x144
	bool ShouldPlayKillcam; // 0x148
	bool ShouldRecordReplay; // 0x149
	int32_t ClamberMode; // 0x14c
	int32_t InputDevice; // 0x150
	FLinearColor EnemyColor; // 0x154
	FLinearColor EnemyOutlineColor; // 0x164
	FLinearColor AllyOutlineColor; // 0x174
	FLinearColor AllyColorThroughWalls; // 0x184
	bool ShowFPS; // 0x194
	bool ShowLatency; // 0x195
	bool ShowPing; // 0x196
	bool ShowNetInfo; // 0x197
	bool ShowSubtitles; // 0x198
	bool ShowDamageNumbers; // 0x199
	bool ShowLowAmmo; // 0x19a
	bool ShowSprintCrosshair; // 0x19b
	TMap<int32_t, int32_t> CustomCrosshairs; // 0x1a0
	FLinearColor CustomCrosshairColor; // 0x1f0
	FLinearColor EnemyCustomCrosshairColor; // 0x200
	bool WantsToCrossPlay; // 0x210
	bool bAnonymousMode; // 0x211
	bool bHideNames; // 0x212
	bool bPartyChatOnly; // 0x213
	bool bHasCompletedTutorial; // 0x214
	int32_t TutorialStageID; // 0x218
	bool bHasWatchedIntroVideo; // 0x21c
	bool bHasSeenBattlePassDialog; // 0x21d
	TArray<FCustomizationId> EquippedCustomizations; // 0x220
	TArray<FCustomizationId> ViewedCustomizations; // 0x230
	TSet<FCustomizationCategory> ViewedCustomizationCategories; // 0x240
	bool bHasSeenLocker; // 0x290
	TSet<FCustomizationId> PrevNewCustomizations; // 0x298
	bool bHasSyncedNewCustomizations; // 0x2e8
	TArray<FStoreItemInfo> ViewedStoreItems; // 0x2f0
	TArray<FString> ViewedLimitedTimeOffers; // 0x300
	TArray<FStoreItemInfo> LastViewedStore; // 0x310
	TArray<FChallengeData> ViewedChallenges; // 0x320
	TArray<FString> MuteList; // 0x330
	FDateTime LastLoginTime; // 0x340
	FString LoginAuthToken; // 0x348
	int32_t PreferredMatchmakingRegionID; // 0x358
	int32_t PreferredCustomRegionID; // 0x35c
	TArray<FString> UnselectedPlaylists; // 0x360
	TMap<FString, FPlaylistPreference> PlaylistPreferences; // 0x370
	FCustomGameBrowserFilters CustomGamesFilters; // 0x3c0
	TMap<FString, FGameModeData> CustomGamePresets; // 0x3f0
	FString LastGameVersion; // 0x440
};

struct UInterpTrackMoveAxis : UInterpTrackFloatBase {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct USplineComponent : UPrimitiveComponent {
	FSplineCurves SplineCurves; // 0x450
	FInterpCurveVector SplineInfo; // 0x4c0
	FInterpCurveQuat SplineRotInfo; // 0x4d8
	FInterpCurveVector SplineScaleInfo; // 0x4f0
	FInterpCurveFloat SplineReparamTable; // 0x508
	bool bAllowSplineEditingPerInstance; // 0x520
	int32_t ReparamStepsPerSegment; // 0x524
	float Duration; // 0x528
	bool bStationaryEndpoints; // 0x52c
	bool bSplineHasBeenEdited; // 0x52d
	bool bModifiedByConstructionScript; // 0x52e
	bool bInputSplinePointsToConstructionScript; // 0x52f
	bool bDrawDebug; // 0x530
	bool bClosedLoop; // 0x531
	bool bLoopPositionOverride; // 0x532
	float LoopPosition; // 0x534
	FVector DefaultUpVector; // 0x538
};

struct UInterpTrackInstAkAudioRTPC : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UProgressBar : UWidget {
	FProgressBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x2a8
	USlateBrushAsset* BackgroundImage; // 0x2b0
	USlateBrushAsset* FillImage; // 0x2b8
	USlateBrushAsset* MarqueeImage; // 0x2c0
	float Percent; // 0x2c8
	EProgressBarFillType BarFillType; // 0x2cc
	bool bIsMarquee; // 0x2cd
	FVector2D BorderPadding; // 0x2d0
	FDelegate PercentDelegate; // 0x2d8
	FLinearColor FillColorAndOpacity; // 0x2e8
	FDelegate FillColorAndOpacityDelegate; // 0x2f8
	FWidgetTransform FillRenderTransform; // 0x308
};

struct UMaterialExpressionConstantBiasScale : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct UVectorField : UObject {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UNiagaraDataInterfaceRenderTarget2D : UNiagaraDataInterfaceRWBase {
	FIntPoint Size; // 0xd8
	ENiagaraMipMapGeneration MipMapGeneration; // 0xe0
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe1
	char bInheritUserParameterSettings : 1; // 0xe2
	char bOverrideFormat : 1; // 0xe2
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x158
};

struct UParticleModuleMeshRotation_Seeded : UParticleModuleMeshRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UPortalWarsCheckBox : UCheckBox {
	UAkAudioEvent* CheckedEvent; // 0x770
	UAkAudioEvent* UncheckedEvent; // 0x778
	UAkAudioEvent* HoveredEvent; // 0x780
};

struct UMaterialExpressionLogarithm10 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct UParticleModuleSourceMovement : UParticleModuleLocationBase {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct APortalWarsLobbyPlayerController : APortalWarsPlayerController {
	UPortalWarsLobbyWidget* LobbyMenuWidget; // 0x6c8
	UPortalWarsLobbyWidget* LobbyMenuWidgetClass; // 0x6d0
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

struct UPortalWarsTextInputWidget : UPortalWarsInputWidget {
	UEditableTextBox* TextBox; // 0x368
	UMultiLineEditableTextBox* MultiLineTextBox; // 0x370
	FText HintText; // 0x378
	bool bIsPassword; // 0x390
	int32_t MaxTextLength; // 0x394
};

struct ATemplateSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x228
	UTemplateSequencePlayer* SequencePlayer; // 0x240
	FSoftObjectPath TemplateSequence; // 0x248
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x260
};

struct UMovieSceneGeometryCollectionSection : UMovieSceneSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct UNavigationInvokerComponent : UActorComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct UTimeSynchronizableMediaSource : UBaseMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct UGameEngine : UEngine {
	float MaxDeltaTime; // 0xde0
	float ServerFlushLogInterval; // 0xde4
	UGameInstance* GameInstance; // 0xde8
};

struct UBTDecorator_PortalIsNearTarget : UBTDecorator_BlackboardBase {
	float XYRange; // 0x90
	float MinZRange; // 0x94
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

struct UDatasmithCineCameraActorTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct UARBasicLightEstimate : UARLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
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

struct USubmixEffectFilterPreset : USoundEffectSubmixPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct URestrictedGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct UMaterialExpressionArctangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
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

struct UMaterialExpressionSkyAtmosphereLightDirection : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UPortalWarsStreakIncreaseWidget : UPortalWarsDialogWidget {
	UPortalWarsPlayStreakRewardWidget* RewardEntry; // 0x390
	UWidget* RepairRoot; // 0x398
	UTextBlock* RepairStreakText; // 0x3a0
	UPortalWarsRedeemableButtonWidget* RepairButton; // 0x3a8
	UPortalWarsPlayStreakDialogWidget* PlayStreakDialogWidgetClass; // 0x3b0
	UAkAudioEvent* StreakIncreasedEvent; // 0x3c0
};

struct ULoudnessNRT : UAudioSynesthesiaNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct USourceEffectWaveShaperPreset : USoundEffectSourcePreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
};

struct UAkSwitchInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettings CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct UMediaSoundComponent : USynthComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
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

struct UFoliageType_InstancedStaticMesh : UFoliageType {
	UStaticMesh* Mesh; // 0x3b0
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b8
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c8
};

struct UProceduralFoliageSpawner : UObject {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct ALandscapeProxy : AActor {
	ULandscapeSplinesComponent* SplineComponent; // 0x220
	FGuid LandscapeGuid; // 0x228
	FIntPoint LandscapeSectionOffset; // 0x238
	int32_t MaxLODLevel; // 0x240
	float LODDistanceFactor; // 0x244
	ELandscapeLODFalloff LODFalloff; // 0x248
	float ComponentScreenSizeToUseSubSections; // 0x24c
	float LOD0ScreenSize; // 0x250
	float LOD0DistributionSetting; // 0x254
	float LODDistributionSetting; // 0x258
	float TessellationComponentScreenSize; // 0x25c
	bool UseTessellationComponentScreenSizeFalloff; // 0x260
	float TessellationComponentScreenSizeFalloff; // 0x264
	int32_t OccluderGeometryLOD; // 0x268
	int32_t StaticLightingLOD; // 0x26c
	UPhysicalMaterial* DefaultPhysMaterial; // 0x270
	float StreamingDistanceMultiplier; // 0x278
	UMaterialInterface* LandscapeMaterial; // 0x280
	UMaterialInterface* LandscapeHoleMaterial; // 0x2a8
	TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b0
	bool bMeshHoles; // 0x2c0
	char MeshHolesMaxLod; // 0x2c1
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2c8
	int32_t VirtualTextureNumLods; // 0x2d8
	int32_t VirtualTextureLodBias; // 0x2dc
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e0
	float NegativeZBoundsExtension; // 0x2e4
	float PositiveZBoundsExtension; // 0x2e8
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x2f0
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x300
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x310
	bool bHasLandscapeGrass; // 0x384
	float StaticLightingResolution; // 0x388
	char CastShadow : 1; // 0x38c
	char bCastDynamicShadow : 1; // 0x38c
	char bCastStaticShadow : 1; // 0x38c
	char bCastFarShadow : 1; // 0x390
	char bCastHiddenShadow : 1; // 0x394
	char bCastShadowAsTwoSided : 1; // 0x398
	char bAffectDistanceFieldLighting : 1; // 0x39c
	FLightingChannels LightingChannels; // 0x39d
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3a0
	char bRenderCustomDepth : 1; // 0x3a0
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x3a4
	int32_t CustomDepthStencilValue; // 0x3a8
	float LDMaxDrawDistance; // 0x3ac
	FLightmassPrimitiveSettings LightmassSettings; // 0x3b0
	int32_t CollisionMipLevel; // 0x3c8
	int32_t SimpleCollisionMipLevel; // 0x3cc
	float CollisionThickness; // 0x3d0
	FBodyInstance BodyInstance; // 0x3d8
	char bGenerateOverlapEvents : 1; // 0x530
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x530
	int32_t ComponentSizeQuads; // 0x534
	int32_t SubsectionSizeQuads; // 0x538
	int32_t NumSubsections; // 0x53c
	char bUsedForNavigation : 1; // 0x540
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x540
	bool bUseDynamicMaterialInstance; // 0x544
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x545
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x546
	bool bHasLayersContent; // 0x547
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x548
};

struct UPortalWarsKOTHHUDOverlayWidget : UUserWidget {
	UPortalWarsKOTHHillStatusWidget* KOTHHillStatus; // 0x260
};

struct ACameraShakeSourceActor : AActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x220
};

struct UOnlineSessionClient : UOnlineSession {
	bool bIsFromInvite; // 0x1c0
	bool bHandlingDisconnect; // 0x1c1
};

struct UParticleModuleRotation_Seeded : UParticleModuleRotation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
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

struct UIpNetDriver : UNetDriver {
	char LogPortUnreach : 1; // 0x758
	char AllowPlayerPortUnreach : 1; // 0x758
	uint32_t MaxPortCountToTry; // 0x75c
	uint32_t ServerDesiredSocketReceiveBufferBytes; // 0x76c
	uint32_t ServerDesiredSocketSendBufferBytes; // 0x770
	uint32_t ClientDesiredSocketReceiveBufferBytes; // 0x774
	uint32_t ClientDesiredSocketSendBufferBytes; // 0x778
	double MaxSecondsInReceive; // 0x780
	int32_t NbPacketsBetweenReceiveTimeTest; // 0x788
	float ResolutionConnectionTimeout; // 0x78c
};

struct UInAppPurchaseCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UWidgetAnimationDelegateBinding : UDynamicBlueprintBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct ULandscapeSplinesComponent : UPrimitiveComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x450
	TArray<ULandscapeSplineSegment*> Segments; // 0x460
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x470
};

struct UForceFeedbackAttenuation : UObject {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UGranularSynth : USynthComponent {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct UPawnAction_Repeat : UPawnAction {
	UPawnAction* ActionToRepeat; // 0x90
	UPawnAction* RecentActionCopy; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa0
};

struct UPortalWarsTutorialBookmarkWidget : UUserWidget {
	UHorizontalBox* MarksHorizontalBox; // 0x260
	UTexture2D* CurrentMarkTexture; // 0x268
	UTexture2D* IncompleteMarkTexture; // 0x270
	UTexture2D* CompleteMarkTexture; // 0x278
};

struct UPathFollowingComponent : UActorComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct UFXSystemAsset : UObject {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct UAnimCurveCompressionSettings : UObject {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct USingleClickInputBehavior : UAnyButtonInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UCheatManager : UObject {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
	TArray<UCheatManagerExtension*> CheatManagerExtensions; // 0x78
};

struct UAnimSharingInstance : UObject {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
};

struct UGenlockedFixedRateCustomTimeStep : UGenlockedCustomTimeStep {
	FFrameRate FrameRate; // 0x28
};

struct UBTTask_FindPickup : UBTTaskNode {
	float NearPickupRadius; // 0x70
};

struct UMaterialExpressionArcsine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct USlateBrushAsset : UObject {
	FSlateBrush Brush; // 0x28
};

struct UNiagaraDataInterfaceRenderTargetVolume : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bInheritUserParameterSettings : 1; // 0xe5
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108
};

struct UPortalWarsLeaderboardsWidget : UPortalWarsMenuWidget {
	UPortalWarsMenuWidget* RankLeaderboardWidget; // 0x338
};

struct UMovieSceneEventTriggerSection : UMovieSceneEventSectionBase {
	FMovieSceneEventChannel EventChannel; // 0xf0
};

struct AVolumetricLightmapDensityVolume : AVolume {
	FInt32Interval AllowedMipLevelRange; // 0x258
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

struct UPortalWarsInspectWidget : UPortalWarsMenuWidget {
	float PreviewDelayTime; // 0x340
	UPortalWarsInspectItemWidget* InspectItemWidgetClass; // 0x350
	UCanvasPanel* InspectPanel; // 0x358
	UTextBlock* DisplayNameText; // 0x360
	UTextBlock* RarityText; // 0x368
	UImage* RarityIcon; // 0x370
	UWidget* ItemInfoRoot; // 0x378
	UPortalWarsButtonWidget* EquipButton; // 0x380
	UWidgetSwitcher* EquipSwitcher; // 0x388
	AMainMenuGameState* GameStateRef; // 0x3b0
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

struct UPortalWarsKeybindOverlayWidget : UPortalWarsDialogWidget {
	UTextBlock* TitleText; // 0x3a0
};

struct UParticleModuleMeshRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UBTTask_Strafe : UBTTaskNode {
	float IdealRange; // 0x70
	float MinStrafeDistance; // 0x74
	float MaxStrafeDistance; // 0x78
	float RandomConeAngle; // 0x7c
};

struct UVideoCaptureProtocol : UFrameGrabberProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct UMovieSceneMediaTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x80
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

struct UAutoDestroySubsystem : UTickableWorldSubsystem {
	TArray<AActor*> ActorsToPoll; // 0x40
};

struct UButtonStyleAsset : UObject {
	FButtonStyle ButtonStyle; // 0x28
};

struct UPortalWarsGGHUDOverlayWidget : UUserWidget {
	UPortalWarsGGGunStatusWidget* GunStatus; // 0x260
	UPortalWarsGGNotificationWidget* GunGameNotification; // 0x268
};

struct UNiagaraDataInterfaceGrid2DCollectionReader : UNiagaraDataInterfaceGrid2D {
	FString EmitterName; // 0xf8
	FString DIName; // 0x108
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct UMovieSceneParticleSection : UMovieSceneSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct UMovieSceneSkeletalAnimationTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
	bool bUseLegacySectionIndexBlend; // 0x90
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98
	bool bBlendFirstChildOfRoot; // 0xc8
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
	ETickingGroup TimelineTickGroup; // 0x90
	FName VariableName; // 0x94
	FName DirectionPropertyName; // 0x9c
	FName UpdateFunctionName; // 0xa4
	FName FinishedFunctionName; // 0xac
};

struct UPortalWarsPriceWidget : UUserWidget {
	UPanelWidget* PricePanel; // 0x260
	UPortalWarsPriceEntryWidget* PriceEntryWidgetClass; // 0x268
	UWidget* DiscountRoot; // 0x270
	URichTextBlock* DiscountText; // 0x278
	bool bShowDiscounts; // 0x280
};

struct UClothingAssetBase : UObject {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
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

struct AGameState : AGameStateBase {
	FName MatchState; // 0x270
	FName PreviousMatchState; // 0x278
	int32_t ElapsedTime; // 0x280
};

struct UInAppPurchaseQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UPortalWarsQuitMenuWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* QuitButton; // 0x338
	UWidget* WarningRoot; // 0x340
	UPortalWarsCheckBoxWidget* AcceptWarningCheckBox; // 0x348
	UPortalWarsButtonWidget* AcceptWarningButton; // 0x350
};

struct UVerticalBoxSlot : UPanelSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UMaterialExpressionComment : UMaterialExpression {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
};

struct UBlackboardKeyType_Enum : UBlackboardKeyType {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
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

struct UPoseAsset : UAnimationAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
	TArray<FTransform> RetargetSourceAssetReferencePose; // 0x120
};

struct UAkItemBoolProperties : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct UBTTask_RunBehaviorDynamic : UBTTaskNode {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct UMaterialExpressionFrac : UMaterialExpression {
	FExpressionInput Input; // 0x40
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
	TArray<UChannel*> ChannelsToTick; // 0x1510
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
	char bVirtualTextureEnableAutoImport : 1; // 0x54
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
	char bEnableVRS : 1; // 0x88
	char bEnableImageVRS : 1; // 0x88
	EFixedFoveationLevels HMDFixedFoveationLevel; // 0x8c
	ECustomDepthStencil CustomDepthStencil; // 0x8d
	char bCustomDepthTaaJitter : 1; // 0x90
	EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0x94
	char bDefaultFeatureBloom : 1; // 0x98
	char bDefaultFeatureAmbientOcclusion : 1; // 0x98
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x98
	char bDefaultFeatureAutoExposure : 1; // 0x98
	EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0x9c
	float DefaultFeatureAutoExposureBias; // 0xa0
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xa4
	char bUsePreExposure : 1; // 0xa4
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xa4
	char bDefaultFeatureMotionBlur : 1; // 0xa4
	char bDefaultFeatureLensFlare : 1; // 0xa4
	char bTemporalUpsampling : 1; // 0xa4
	char bSSGI : 1; // 0xa4
	EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xa8
	ELightUnits DefaultLightUnits; // 0xa9
	EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xaa
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xac
	char bStencilForLODDither : 1; // 0xac
	EEarlyZPass EarlyZPass; // 0xb0
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xb4
	char bDBuffer : 1; // 0xb4
	EClearSceneOptions ClearSceneMethod; // 0xb8
	char bBasePassOutputsVelocity : 1; // 0xbc
	char bVertexDeformationOutputsVelocity : 1; // 0xbc
	char bSelectiveBasePassOutputs : 1; // 0xbc
	char bDefaultParticleCutouts : 1; // 0xbc
	int32_t GPUSimulationTextureSizeX; // 0xc0
	int32_t GPUSimulationTextureSizeY; // 0xc4
	char bGlobalClipPlane : 1; // 0xc8
	EGBufferFormat GBufferFormat; // 0xcc
	char bUseGPUMorphTargets : 1; // 0xd0
	char bNvidiaAftermathEnabled : 1; // 0xd0
	char bMultiView : 1; // 0xd0
	char bMobilePostProcessing : 1; // 0xd0
	char bMobileMultiView : 1; // 0xd0
	char bMobileUseHWsRGBEncoding : 1; // 0xd0
	char bRoundRobinOcclusion : 1; // 0xd0
	char bODSCapture : 1; // 0xd0
	char bMeshStreaming : 1; // 0xd1
	float WireframeCullThreshold; // 0xd4
	char bEnableRayTracing : 1; // 0xd8
	char bEnableRayTracingTextureLOD : 1; // 0xd8
	char bSupportStationarySkylight : 1; // 0xd8
	char bSupportLowQualityLightmaps : 1; // 0xd8
	char bSupportPointLightWholeSceneShadows : 1; // 0xd8
	char bSupportAtmosphericFog : 1; // 0xd8
	char bSupportSkyAtmosphere : 1; // 0xd8
	char bSupportSkyAtmosphereAffectsHeightFog : 1; // 0xd8
	char bSupportSkinCacheShaders : 1; // 0xd9
	ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0xdc
	float SkinCacheSceneMemoryLimitInMB; // 0xe0
	char bMobileEnableStaticAndCSMShadowReceivers : 1; // 0xe4
	char bMobileEnableMovableLightCSMShaderCulling : 1; // 0xe4
	char bMobileAllowDistanceFieldShadows : 1; // 0xe4
	char bMobileAllowMovableDirectionalLights : 1; // 0xe4
	uint32_t MobileNumDynamicPointLights; // 0xe8
	char bMobileDynamicPointLightsUseStaticBranch : 1; // 0xec
	char bMobileAllowMovableSpotlights : 1; // 0xec
	char bMobileAllowMovableSpotlightShadows : 1; // 0xec
	char bSupport16BitBoneIndex : 1; // 0xec
	char bGPUSkinLimit2BoneInfluences : 1; // 0xec
	char bSupportDepthOnlyIndexBuffers : 1; // 0xec
	char bSupportReversedIndexBuffers : 1; // 0xec
	char bLPV : 1; // 0xec
	char bMobileAmbientOcclusion : 1; // 0xed
	char bUseUnlimitedBoneInfluences : 1; // 0xed
	int32_t UnlimitedBonInfluencesThreshold; // 0xf0
	FPerPlatformInt MaxSkinBones; // 0xf4
	EMobilePlanarReflectionMode MobilePlanarReflectionMode; // 0xf8
	char bMobileTemporalAAMethod : 1; // 0xfc
	FPerPlatformBool bStreamSkeletalMeshLODs; // 0x100
	FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0x101
	FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0x108
	FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x120
	FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x138
};

struct UMaterialExpressionRuntimeVirtualTextureReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
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

struct UDatasmithStaticMeshIFCImportData : UDatasmithStaticMeshImportData {
	FString SourceGlobalId; // 0x28
};

struct USourceEffectStereoDelayPreset : USoundEffectSourcePreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
};

struct UPortalWarsDamageIndicatorWidget : UUserWidget {
	UImage* HitImage; // 0x260
	UMaterialInterface* ThruPortalMaterial; // 0x268
};

struct UNavigationGraphNodeComponent : USceneComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
};

struct UAnimSharingAdditiveInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct UPortalWarsNewsFeedWidget : UPortalWarsMenuCarouselWidget {
	UPortalWarsButtonWidget* ActionButton; // 0x310
	UWidget* NewsFeedRoot; // 0x318
	UPortalWarsNewsFeedEntryWidget* NewsFeedEntryWidgetClass; // 0x320
};

struct UNiagaraDataInterfaceSpline : UNiagaraDataInterface {
	AActor* Source; // 0x38
	FNiagaraUserParameterBinding SplineUserParameter; // 0x40
};

struct UHierarchicalLODSetup : UObject {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct URadialVector : UFieldNodeVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
};

struct APortalWarsBaseGameMode : AGameMode {
	int32_t MaxPlayers; // 0x308
	APawn* BotPawnClass; // 0x310
	APortalWarsAIController* AIControllerClass; // 0x318
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

struct UAsyncActionLoadPrimaryAssetClass : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct APortalWarsForcedTeleportTrigger : ATriggerBox {
	APortalWall* TargetPortalWall; // 0x228
};

struct APlayerState : AInfo {
	float Score; // 0x220
	int32_t PlayerId; // 0x224
	char Ping; // 0x228
	char bShouldUpdateReplicatedPing : 1; // 0x22a
	char bIsSpectator : 1; // 0x22a
	char bOnlySpectator : 1; // 0x22a
	char bIsABot : 1; // 0x22a
	char bIsInactive : 1; // 0x22a
	char bFromPreviousLevel : 1; // 0x22a
	int32_t StartTime; // 0x22c
	ULocalMessage* EngineMessageClass; // 0x230
	FString SavedNetworkAddress; // 0x240
	FUniqueNetIdRepl UniqueId; // 0x250
	APawn* PawnPrivate; // 0x280
	FString PlayerNamePrivate; // 0x300
};

struct UMaterialExpressionDepthOfFieldFunction : UMaterialExpression {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct ALandscapeStreamingProxy : ALandscapeProxy {
	LazyObjectProperty LandscapeActor; // 0x598
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

struct URectLightComponent : ULocalLightComponent {
	float SourceWidth; // 0x340
	float SourceHeight; // 0x344
	float BarnDoorAngle; // 0x348
	float BarnDoorLength; // 0x34c
	UTexture* SourceTexture; // 0x350
};

struct UGameInstance : UObject {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct UMaterialExpressionGetMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UParticleModuleRotationOverLifetime : UParticleModuleRotationBase {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct UNiagaraParameterCollection : UObject {
	FName Namespace; // 0x28
	TArray<FNiagaraVariable> Parameters; // 0x30
	UMaterialParameterCollection* SourceMaterialCollection; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
};

struct UEnvQueryGenerator_OnCircle : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue CircleRadius; // 0xb8
	FAIDataProviderFloatValue SpaceBetween; // 0xf0
	FAIDataProviderIntValue NumberOfPoints; // 0x128
	EPointOnCircleSpacingMethod PointOnCircleSpacingMethod; // 0x160
	FEnvDirection ArcDirection; // 0x168
	FAIDataProviderFloatValue ArcAngle; // 0x188
	float AngleRadians; // 0x1c0
	UEnvQueryContext* CircleCenter; // 0x1c8
	bool bIgnoreAnyContextActorsWhenGeneratingCircle; // 0x1d0
	FAIDataProviderFloatValue CircleCenterZOffset; // 0x1d8
	FEnvTraceData TraceData; // 0x210
	char bDefineArc : 1; // 0x240
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

struct UMaterialExpressionStep : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct USourceEffectBitCrusherPreset : USoundEffectSourcePreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct UNiagaraDataInterfaceArrayFloat2 : UNiagaraDataInterfaceArray {
	TArray<FVector2D> FloatData; // 0x50
};

struct AMatineeActor : AActor {
	UInterpData* MatineeData; // 0x220
	FName MatineeControllerName; // 0x228
	float PlayRate; // 0x230
	char bPlayOnLevelLoad : 1; // 0x234
	char bForceStartPos : 1; // 0x234
	float ForceStartPosition; // 0x238
	char bLooping : 1; // 0x23c
	char bRewindOnPlay : 1; // 0x23c
	char bNoResetOnRewind : 1; // 0x23c
	char bRewindIfAlreadyPlaying : 1; // 0x23c
	char bDisableRadioFilter : 1; // 0x23c
	char bClientSideOnly : 1; // 0x23c
	char bSkipUpdateIfNotVisible : 1; // 0x23c
	char bIsSkippable : 1; // 0x23c
	int32_t PreferredSplitScreenNum; // 0x240
	char bDisableMovementInput : 1; // 0x244
	char bDisableLookAtInput : 1; // 0x244
	char bHidePlayer : 1; // 0x244
	char bHideHud : 1; // 0x244
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x248
	char bShouldShowGore : 1; // 0x258
	TArray<UInterpGroupInst*> GroupInst; // 0x260
	TArray<FCameraCutInfo> CameraCuts; // 0x270
	char bIsPlaying : 1; // 0x280
	char bReversePlayback : 1; // 0x280
	char bPaused : 1; // 0x280
	char bPendingStop : 1; // 0x280
	float InterpPosition; // 0x284
	char ReplicationForceIsPlaying; // 0x28c
	FMulticastInlineDelegate OnPlay; // 0x290
	FMulticastInlineDelegate OnStop; // 0x2a0
	FMulticastInlineDelegate OnPause; // 0x2b0
};

struct UPortalWarsNotificationManager : UObject {
	UPortalWarsDialogWidget* MessageDialogWidgetClass; // 0x30
	UPortalWarsDialogWidget* RewardReceivedWidgetClass; // 0x38
	UPortalWarsDialogWidget* ChallengeDialogWidgetClass; // 0x40
	UPortalWarsDialogWidget* StreakIncreaseWidgetClass; // 0x48
	UPortalWarsUnlockDialogWidget* UnlockDialogWidgetClass; // 0x50
	UPortalWarsProgressionUpdateDialogWidget* ProgressionDialogWidgetClass; // 0x58
	UPortalWarsBPPurchaseDialogWidget* BattlePassPurchaseDialogWidgetClass; // 0x60
	UPortalWarsDialogWidget* HappyHourWidgetClass; // 0x68
	UPortalWarsDialogWidget* PlaylistActiveWidgetClass; // 0x70
	UPortalWarsDialogWidget* GameSessionReconnectWidgetClass; // 0x78
	UPortalWarsDialogWidget* LimitedTimeOfferWidgetClass; // 0x80
	UPortalWarsDialogWidget* PostGameOverviewWidgetClass; // 0x88
	UPortalWarsDialogWidget* RankUpdateWidgetClass; // 0x90
	TArray<UPortalWarsDialogWidget*> DialogObjects; // 0xa0
};

struct UPortalWarsPickupZoneIndicator : UPortalWarsPickupIndicatorWidget {
	UTextBlock* TimeText; // 0x2d0
};

struct UChildActorComponent : USceneComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UMaterialExpressionMaterialFunctionCall : UMaterialExpression {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct UDatasmithGLTFSceneImportData : UDatasmithSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
};

struct APortalWarsTakedownPlayerState : APortalWarsRoundPlayerState {
	char RespawnTime; // 0xac8
};

struct UMaterialExpressionArccosineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleBeamTarget : UParticleModuleBeamBase {
	Beam2SourceTargetMethod TargetMethod; // 0x30
	FName TargetName; // 0x34
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

struct UShaderPlatformQualitySettings : UObject {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct UMaterialExpressionConstant : UMaterialExpression {
	float R; // 0x40
};

struct UPortalWarsCustomSettingsWidget : UPortalWarsMenuWidget {
	UPortalWarsTeamSelectWidget* TeamSelector; // 0x338
	UPortalWarsTextInputWidget* AlphaName; // 0x348
	UPortalWarsTextInputWidget* BravoName; // 0x350
	UPortalWarsTeamNumericCarouselWidget* ScoreLimitSelector; // 0x358
	UPortalWarsNumericCarouselWidget* TimeLimitSelector; // 0x360
	UPortalWarsTeamNumericCarouselWidget* RespawnTimeSelector; // 0x368
	UPortalWarsTeamGlobalCarouselWidget* PrimaryWeaponSelector; // 0x370
	UPortalWarsTeamGlobalCarouselWidget* SecondaryWeaponSelector; // 0x378
	UPortalWarsCheckBoxWidget* PickupsEnabledCheckBox; // 0x380
	UPortalWarsCheckBoxWidget* BotsEnabledCheckBox; // 0x388
	UPortalWarsDifficultySelectWidget* BotDifficultySelector; // 0x390
	UPortalWarsTeamCheckboxWidget* BoundariesEnabledCheckBox; // 0x398
	UPortalWarsTeamCheckboxWidget* RadarEnabledCheckBox; // 0x3a0
	UPortalWarsTeamCheckboxWidget* JetpackEnabledCheckBox; // 0x3a8
	UPortalWarsTeamCheckboxWidget* SprintEnabledCheckBox; // 0x3b0
	UPortalWarsTeamCheckboxWidget* PortalGunEnabledCheckBox; // 0x3b8
	UPortalWarsTeamCheckboxWidget* MeleeEnabledCheckBox; // 0x3c0
	UPortalWarsTeamCheckboxWidget* HeadshotsOnlyCheckBox; // 0x3c8
	UPortalWarsTeamCheckboxWidget* BigHeadModeCheckBox; // 0x3d0
	UPortalWarsTeamCheckboxWidget* UnlimitedAmmoCheckBox; // 0x3d8
	UPortalWarsTeamCheckboxWidget* UnlimitedClipSizeCheckBox; // 0x3e0
	UPortalWarsCheckBoxWidget* RandomHillsEnabledCheckBox; // 0x3e8
	UPortalWarsCheckBoxWidget* KillcamEnabledCheckBox; // 0x3f0
	UPortalWarsTeamCheckboxWidget* RandomWeaponsCheckBox; // 0x3f8
	UPortalWarsCheckBoxWidget* SwitchTeamsCheckBox; // 0x400
	UPortalWarsTeamCheckboxWidget* WeaponDropsCheckBox; // 0x408
	UPortalWarsTeamDecimalCarouselWidget* WalkSpeedModifier; // 0x410
	UPortalWarsTeamDecimalCarouselWidget* JumpHeightModifier; // 0x418
	UPortalWarsTeamDecimalCarouselWidget* GravityModifier; // 0x420
	UPortalWarsTeamDecimalCarouselWidget* JetpackFuelModifier; // 0x428
	UPortalWarsTeamDecimalCarouselWidget* JetpackBoostModifier; // 0x430
	UPortalWarsTeamDecimalCarouselWidget* MeleeDmgModifier; // 0x438
	UPortalWarsTeamDecimalCarouselWidget* HealthModifier; // 0x440
	UPortalWarsButtonWidget* PresetOptionsButton; // 0x448
	UPortalWarsFileOptionsDialogWidget* PresetOptionsDialogClass; // 0x450
	UPortalWarsButtonWidget* TeamNamesButton; // 0x458
	UPortalWarsButtonWidget* ModeSettingsButton; // 0x460
	UPortalWarsButtonWidget* BotSettingsButton; // 0x468
	UPortalWarsButtonWidget* MapOptionsButton; // 0x470
	UPortalWarsButtonWidget* ModeOptionsButton; // 0x478
	UPortalWarsButtonWidget* TeamOptionsButton; // 0x480
	UPortalWarsButtonWidget* WeaponOptionsButton; // 0x488
	UPortalWarsButtonWidget* PlayerAttributesButton; // 0x490
	UPortalWarsButtonWidget* AbilityOptionsButton; // 0x498
	UTextBlock* MatchOptionsText; // 0x4a0
	UScrollBox* SettingsScrollBox; // 0x4a8
};

struct UParticleModuleAccelerationDrag : UParticleModuleAccelerationBase {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UPortalWarsFlagZoneIndicator : UPortalWarsIndicatorWidget {
	UWidget* Pointer; // 0x2b8
};

struct UBrushComponent : UPrimitiveComponent {
	UModel* Brush; // 0x450
	UBodySetup* BrushBodySetup; // 0x458
};

struct UMovieSceneEvaluationHookSystem : UMovieSceneEntitySystem {
	TMap<FMovieSceneEvaluationInstanceKey, FMovieSceneEvaluationHookEventContainer> PendingEventsByRootInstance; // 0x40
};

struct ASphereReflectionCapture : AReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x228
};

struct UMediaTexture : UTexture {
	TextureAddress AddressX; // 0x178
	TextureAddress AddressY; // 0x179
	bool AutoClear; // 0x17a
	FLinearColor ClearColor; // 0x17c
	bool EnableGenMips; // 0x18c
	char NumMips; // 0x18d
	bool NewStyleOutput; // 0x18e
	MediaTextureOutputFormat OutputFormat; // 0x18f
	float CurrentAspectRatio; // 0x190
	MediaTextureOrientation CurrentOrientation; // 0x194
	UMediaPlayer* MediaPlayer; // 0x198
};

struct AMagicLeapARPinRenderer : AActor {
	bool bInfoActorsVisibilityOverride; // 0x220
	TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x228
	AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x280
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

struct UPortalWarsNavBarWidget : UPortalWarsUserWidget {
	FMulticastInlineDelegate OnNavBarStateChanged; // 0x2a8
	char CurrentState; // 0x2b8
	TArray<FNavBarItem> ItemArray; // 0x2c0
	FMargin ItemPadding; // 0x2d0
	UPanelWidget* ButtonPanel; // 0x2e0
	UPortalWarsNavButtonWidget* NavButtonWidgetClass; // 0x2e8
	UPortalWarsInputWidget* NavSubHeaderWidgetClass; // 0x2f0
	bool bSelectOnControllerHover; // 0x2f8
	TArray<UPortalWarsNavButtonWidget*> ButtonArray; // 0x300
	FLinearColor NewColor; // 0x310
	UPortalWarsButtonWidget* PrevGamepadButton; // 0x320
	UPortalWarsButtonWidget* NextGamepadButton; // 0x328
	FKey PrevGamepadKey; // 0x330
	FKey NextGamepadKey; // 0x348
	UAkAudioEvent* TabNextEvent; // 0x360
	UAkAudioEvent* TabPrevEvent; // 0x368
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

struct UHierarchicalInstancedStaticMeshComponent : UInstancedStaticMeshComponent {
	TArray<int32_t> SortedInstances; // 0x598
	int32_t NumBuiltInstances; // 0x5a8
	FBox BuiltInstanceBounds; // 0x5b0
	FBox UnbuiltInstanceBounds; // 0x5cc
	TArray<FBox> UnbuiltInstanceBoundsList; // 0x5e8
	char bEnableDensityScaling : 1; // 0x5f8
	int32_t OcclusionLayerNumNodes; // 0x600
	FBoxSphereBounds CacheMeshExtendedBounds; // 0x604
	bool bDisableCollision; // 0x620
	int32_t InstanceCountToRender; // 0x624
};

struct UDebugCameraControllerSettings : UDeveloperSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
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

struct UNiagaraPreviewAxis_InterpParamVector4 : UNiagaraPreviewAxis_InterpParamBase {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct USkeletalMeshComponent : USkinnedMeshComponent {
	UObject* AnimBlueprintGeneratedClass; // 0x6a0
	UAnimInstance* AnimClass; // 0x6a8
	UAnimInstance* AnimScriptInstance; // 0x6b0
	UAnimInstance* PostProcessAnimInstance; // 0x6b8
	FSingleAnimationPlayData AnimationData; // 0x6c0
	FVector RootBoneTranslation; // 0x6e8
	FVector LineCheckBoundsScale; // 0x6f4
	TArray<UAnimInstance*> LinkedInstances; // 0x730
	TArray<FTransform> CachedBoneSpaceTransforms; // 0x740
	TArray<FTransform> CachedComponentSpaceTransforms; // 0x750
	float GlobalAnimRateScale; // 0x8b0
	EKinematicBonesUpdateToPhysics KinematicBonesUpdateType; // 0x8b4
	EPhysicsTransformUpdateMode PhysicsTransformUpdateMode; // 0x8b5
	EAnimationMode AnimationMode; // 0x8b7
	char bDisablePostProcessBlueprint : 1; // 0x8b9
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x8b9
	char bHasValidBodies : 1; // 0x8b9
	char bBlendPhysics : 1; // 0x8b9
	char bEnablePhysicsOnDedicatedServer : 1; // 0x8b9
	char bUpdateJointsFromAnimation : 1; // 0x8b9
	char bDisableClothSimulation : 1; // 0x8ba
	char bDisableRigidBodyAnimNode : 1; // 0x8c0
	char bAllowAnimCurveEvaluation : 1; // 0x8c0
	char bDisableAnimCurves : 1; // 0x8c0
	char bCollideWithEnvironment : 1; // 0x8c0
	char bCollideWithAttachedChildren : 1; // 0x8c1
	char bLocalSpaceSimulation : 1; // 0x8c1
	char bResetAfterTeleport : 1; // 0x8c1
	char bDeferKinematicBoneUpdate : 1; // 0x8c1
	char bNoSkeletonUpdate : 1; // 0x8c1
	char bPauseAnims : 1; // 0x8c1
	char bUseRefPoseOnInitAnim : 1; // 0x8c1
	char bEnablePerPolyCollision : 1; // 0x8c2
	char bForceRefpose : 1; // 0x8c2
	char bOnlyAllowAutonomousTickPose : 1; // 0x8c2
	char bIsAutonomousTickPose : 1; // 0x8c2
	char bOldForceRefPose : 1; // 0x8c2
	char bShowPrePhysBones : 1; // 0x8c2
	char bRequiredBonesUpToDate : 1; // 0x8c2
	char bAnimTreeInitialised : 1; // 0x8c2
	char bIncludeComponentLocationIntoBounds : 1; // 0x8c3
	char bEnableLineCheckWithBounds : 1; // 0x8c3
	char bUseBendingElements : 1; // 0x8c3
	char bUseTetrahedralConstraints : 1; // 0x8c3
	char bUseThinShellVolumeConstraints : 1; // 0x8c3
	char bUseSelfCollisions : 1; // 0x8c3
	char bUseContinuousCollisionDetection : 1; // 0x8c3
	char bPropagateCurvesToSlaves : 1; // 0x8c3
	char bSkipKinematicUpdateWhenInterpolating : 1; // 0x8c4
	char bSkipBoundsUpdateWhenInterpolating : 1; // 0x8c4
	char bNeedsQueuedAnimEventsDispatched : 1; // 0x8c4
	uint16_t CachedAnimCurveUidVersion; // 0x8c6
	EClothMassMode MassMode; // 0x8c8
	float UniformMass; // 0x8cc
	float TotalMass; // 0x8d0
	float Density; // 0x8d4
	float MinPerParticleMass; // 0x8d8
	float ClothBlendWeight; // 0x8dc
	float EdgeStiffness; // 0x8e0
	float BendingStiffness; // 0x8e4
	float AreaStiffness; // 0x8e8
	float VolumeStiffness; // 0x8ec
	float StrainLimitingStiffness; // 0x8f0
	float ShapeTargetStiffness; // 0x8f4
	bool bWaitForParallelClothTask; // 0x8f8
	TArray<FName> DisallowedAnimCurves; // 0x900
	UBodySetup* BodySetup; // 0x910
	FMulticastInlineDelegate OnConstraintBroken; // 0x920
	UClothingSimulationFactory* ClothingSimulationFactory; // 0x930
	float TeleportDistanceThreshold; // 0xa08
	float TeleportRotationThreshold; // 0xa0c
	uint32_t LastPoseTickFrame; // 0xa18
	UClothingSimulationInteractor* ClothingInteractor; // 0xa70
	FMulticastInlineDelegate OnAnimInitialized; // 0xb40
};

struct UParticleModuleSize : UParticleModuleSizeBase {
	FRawDistributionVector StartSize; // 0x30
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

struct ATransformGizmoActor : AGizmoActor {
	UPrimitiveComponent* TranslateX; // 0x220
	UPrimitiveComponent* TranslateY; // 0x228
	UPrimitiveComponent* TranslateZ; // 0x230
	UPrimitiveComponent* TranslateYZ; // 0x238
	UPrimitiveComponent* TranslateXZ; // 0x240
	UPrimitiveComponent* TranslateXY; // 0x248
	UPrimitiveComponent* RotateX; // 0x250
	UPrimitiveComponent* RotateY; // 0x258
	UPrimitiveComponent* RotateZ; // 0x260
	UPrimitiveComponent* UniformScale; // 0x268
	UPrimitiveComponent* AxisScaleX; // 0x270
	UPrimitiveComponent* AxisScaleY; // 0x278
	UPrimitiveComponent* AxisScaleZ; // 0x280
	UPrimitiveComponent* PlaneScaleYZ; // 0x288
	UPrimitiveComponent* PlaneScaleXZ; // 0x290
	UPrimitiveComponent* PlaneScaleXY; // 0x298
};

struct UPortalWarsDropIndicatorWidget : UUserWidget {
	UTextBlock* DropsText; // 0x260
	bool bHideWhenEmpty; // 0x26c
};

struct UBTTask_FindTeabag : UBTTaskNode {
	float nearTeaBagRadius; // 0x70
};

struct UPlanarReflectionComponent : USceneCaptureComponent {
	UBoxComponent* PreviewBox; // 0x2c0
	float NormalDistortionStrength; // 0x2c8
	float PrefilterRoughness; // 0x2cc
	float PrefilterRoughnessDistance; // 0x2d0
	int32_t ScreenPercentage; // 0x2d4
	float ExtraFOV; // 0x2d8
	float DistanceFromPlaneFadeStart; // 0x2dc
	float DistanceFromPlaneFadeEnd; // 0x2e0
	float DistanceFromPlaneFadeoutStart; // 0x2e4
	float DistanceFromPlaneFadeoutEnd; // 0x2e8
	float AngleFromPlaneFadeStart; // 0x2ec
	float AngleFromPlaneFadeEnd; // 0x2f0
	bool bShowPreviewPlane; // 0x2f4
	bool bRenderSceneTwoSided; // 0x2f5
};

struct UButtonSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct UAnimNotifyState_Trail : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct UPortalWarsLineupAnimInstance : UAnimInstance {
	APortalWarsLineUpCharacter* Character; // 0x2b8
	bool bIsPlayingEmote; // 0x2c0
	UAnimSequence* EmoteAnimSequence; // 0x2c8
};

struct UMagicLeapARPinSettings : UObject {
	float UpdateCheckFrequency; // 0x28
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c
};

struct UParticleModuleSizeScaleBySpeed : UParticleModuleSizeBase {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct USoundSubmixWithParentBase : USoundSubmixBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UMovieSceneMediaPlayerPropertySection : UMovieSceneSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct UPlayerInput : UObject {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct USubUVAnimation : UObject {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct UPortalWarsLocalPlayer : ULocalPlayer {
	UTexture* PlayerAvatar; // 0x288
	TArray<UObject*> CachedCustomizationObjects; // 0x440
	UPortalWarsNotificationManager* NotificationManager; // 0x490
	UPortalWarsNotificationManager* NotificationManagerClass; // 0x498
	UPortalWarsInviteManager* InviteManager; // 0x4a0
	UPortalWarsInviteManager* InviteManagerClass; // 0x4a8
	UPortalWarsDialogWidget* ControllerDisconnectedWidget; // 0x4b8
	UPortalWarsDialogWidget* ControllerDisconnectWidgetClass; // 0x4c0
	UPortalWarsSaveGame* UserSaveGameData; // 0x500
};

struct UPortalWarsCTFHUDOverlayWidget : UUserWidget {
	UPortalWarsFlagResetStatusWidget* FlagResetStatus; // 0x260
};

struct UPortalWarsGoalIndicatorWidget : UPortalWarsIndicatorWidget {
	UWidget* Pointer; // 0x2b8
	FVector StandardOffset; // 0x2c0
	FVector DummyPlayerOffset; // 0x2cc
	FVector PortalWallOffset; // 0x2d8
};

struct UBehaviorTreeComponent : UBrainComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
};

struct UMaterialExpressionVertexInterpolator : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct AReflectionCapture : AActor {
	UReflectionCaptureComponent* CaptureComponent; // 0x220
};

struct UTestMovieSceneSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct UBillboardComponent : UPrimitiveComponent {
	UTexture2D* Sprite; // 0x450
	char bIsScreenSizeScaled : 1; // 0x458
	float ScreenSize; // 0x45c
	float U; // 0x460
	float UL; // 0x464
	float V; // 0x468
	float VL; // 0x46c
};

struct UPortalWarsMenuWidget : UPortalWarsUserWidget {
	UPortalWarsNavBarWidget* NavBar; // 0x2b0
	UWidgetSwitcher* WidgetSwitcher; // 0x2b8
	FMulticastInlineDelegate OnBackButtonClicked; // 0x2c0
	UPortalWarsButtonWidget* BackButton; // 0x2d0
	UWidget* ButtonPanel; // 0x2d8
	UUserWidget* ParentWidget; // 0x2e0
	UWidgetAnimation* FadeInAnimation; // 0x300
	bool bTrackMenuEvents; // 0x308
	FString MenuInternalName; // 0x310
	UAkAudioEvent* MenuOpenedEvent; // 0x320
	UAkAudioEvent* MenuClosedEvent; // 0x328
};

struct AProceduralFoliageBlockingVolume : AVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x258
};

struct UPortalWarsCancelButtonWidget : UPortalWarsButtonWidget {
	UImage* RankIcon; // 0x3c0
	UWidget* RankRoot; // 0x3c8
	UTextBlock* QueryTitleText; // 0x3d0
	UTextBlock* QueryDescriptionText; // 0x3d8
};

struct UToFloatField : UFieldNodeFloat {
	UFieldNodeInt* IntField; // 0xb0
};

struct UNiagaraDataInterfaceNeighborGrid3D : UNiagaraDataInterfaceGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100
};

struct UDynamicEntryBox : UDynamicEntryBoxBase {
	UUserWidget* EntryWidgetClass; // 0x1d8
};

struct ADatasmithSceneActor : AActor {
	UDatasmithScene* Scene; // 0x220
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x228
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

struct UVectorFieldComponent : UPrimitiveComponent {
	UVectorField* VectorField; // 0x450
	float Intensity; // 0x458
	float Tightness; // 0x45c
	char bPreviewVectorField : 1; // 0x460
};

struct UPortalWarsEscapeMenuWidget : UPortalWarsMenuSelectWidget {
	UPortalWarsButtonWidget* RewardCenterButton; // 0x3b0
	UPortalWarsButtonWidget* SettingsButton; // 0x3b8
	UPortalWarsButtonWidget* RedeemCodeButton; // 0x3c0
	UPortalWarsButtonWidget* SwitchProfileButton; // 0x3c8
	UPortalWarsButtonWidget* LeavePartyButton; // 0x3d0
	UPortalWarsButtonWidget* ExitButton; // 0x3d8
	UPortalWarsDialogWidget* SettingsDialogWidgetClass; // 0x3e0
	UPortalWarsDialogWidget* RedeemKeyDialogWidgetClass; // 0x3e8
	UPortalWarsDialogWidget* QuitGameDialogWidgetClass; // 0x3f0
};

struct UParticleModuleColorOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
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
	FVector2D LocalHitLocation; // 0x348
	FVector2D LastLocalHitLocation; // 0x350
	UWidgetComponent* HoveredWidgetComponent; // 0x358
	FHitResult LastHitResult; // 0x360
	bool bIsHoveredWidgetInteractable; // 0x3e8
	bool bIsHoveredWidgetFocusable; // 0x3e9
	bool bIsHoveredWidgetHitTestVisible; // 0x3ea
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

struct ULayer : UObject {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct APortalWarsKOTH : APortalWarsGameMode {
	APortalWarsKOTHHill* ActiveHill; // 0x6a8
	APortalWarsKOTHHill* NextHill; // 0x6b0
	APortalWarsKOTHGameState* KOTHGameState; // 0x6b8
	int32_t HillScore; // 0x6c0
	int32_t HillTime; // 0x6c4
	int32_t NextHillTime; // 0x6c8
	TArray<APortalWarsKOTHHill*> Hills; // 0x6d8
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

struct UInterpTrackVectorProp : UInterpTrackVectorBase {
	FName PropertyName; // 0x90
};

struct UStereoLayerShapeCylinder : UStereoLayerShape {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct UMovieSceneTrack : UMovieSceneSignedObject {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	FGuid EvaluationFieldGuid; // 0x58
	FMovieSceneTrackEvaluationField EvaluationField; // 0x68
};

struct UNiagaraRibbonRendererProperties : UNiagaraRendererProperties {
	UMaterialInterface* Material; // 0x88
	FNiagaraUserParameterBinding MaterialUserParamBinding; // 0x90
	ENiagaraRibbonFacingMode FacingMode; // 0xb0
	FNiagaraRibbonUVSettings UV0Settings; // 0xb4
	FNiagaraRibbonUVSettings UV1Settings; // 0xd8
	ENiagaraRibbonDrawDirection DrawDirection; // 0xfc
	ENiagaraRibbonShapeMode Shape; // 0xfd
	int32_t WidthSegmentationCount; // 0x100
	int32_t MultiPlaneCount; // 0x104
	int32_t TubeSubdivisions; // 0x108
	TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices; // 0x110
	float CurveTension; // 0x120
	ENiagaraRibbonTessellationMode TessellationMode; // 0x124
	int32_t TessellationFactor; // 0x128
	bool bUseConstantFactor; // 0x12c
	float TessellationAngle; // 0x130
	bool bScreenSpaceTessellation; // 0x134
	FNiagaraVariableAttributeBinding PositionBinding; // 0x138
	FNiagaraVariableAttributeBinding ColorBinding; // 0x190
	FNiagaraVariableAttributeBinding VelocityBinding; // 0x1e8
	FNiagaraVariableAttributeBinding NormalizedAgeBinding; // 0x240
	FNiagaraVariableAttributeBinding RibbonTwistBinding; // 0x298
	FNiagaraVariableAttributeBinding RibbonWidthBinding; // 0x2f0
	FNiagaraVariableAttributeBinding RibbonFacingBinding; // 0x348
	FNiagaraVariableAttributeBinding RibbonIdBinding; // 0x3a0
	FNiagaraVariableAttributeBinding RibbonLinkOrderBinding; // 0x3f8
	FNiagaraVariableAttributeBinding MaterialRandomBinding; // 0x450
	FNiagaraVariableAttributeBinding DynamicMaterialBinding; // 0x4a8
	FNiagaraVariableAttributeBinding DynamicMaterial1Binding; // 0x500
	FNiagaraVariableAttributeBinding DynamicMaterial2Binding; // 0x558
	FNiagaraVariableAttributeBinding DynamicMaterial3Binding; // 0x5b0
	FNiagaraVariableAttributeBinding RibbonUVDistance; // 0x608
	FNiagaraVariableAttributeBinding U0OverrideBinding; // 0x660
	FNiagaraVariableAttributeBinding V0RangeOverrideBinding; // 0x6b8
	FNiagaraVariableAttributeBinding U1OverrideBinding; // 0x710
	FNiagaraVariableAttributeBinding V1RangeOverrideBinding; // 0x768
	TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings; // 0x7c0
};

struct UPropertyBinding : UObject {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UPrimaryAssetLabel : UPrimaryDataAsset {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
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
	EPhysicalSurface SurfaceType; // 0x60
};

struct UMaterialExpressionMin : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UMaterialExpressionBlendMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct USynthComponentToneGenerator : USynthComponent {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
};

struct UEnvQueryTest_Distance : UEnvQueryTest {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct UNiagaraPreviewAxis_InterpParamLinearColor : UNiagaraPreviewAxis_InterpParamBase {
	FLinearColor Min; // 0x38
	FLinearColor Max; // 0x48
};

struct URotatingMovementComponent : UMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct AMainMenuGameState : AGameStateBase {
	APortalWarsCharacter* MyCharacter; // 0x298
	AStaticMeshActor* MainPlatform; // 0x2a0
	APortal* MyPortal; // 0x2c0
	TArray<APortalWarsCharacter*> PartyCharacters; // 0x2c8
	APreviewItem* LootboxItem; // 0x2d8
	ACameraActor* LootboxCam; // 0x2e0
	APortalWarsCharacter* LootboxCharacter; // 0x2e8
	TArray<APortal*> LootboxPortals; // 0x2f0
	AStaticMeshActor* LootboxGlow; // 0x300
	APreviewItem* InspectItem; // 0x308
	ACameraActor* MainCam; // 0x310
	ACameraActor* InspectCam; // 0x318
	ALevelSequenceActor* LootboxSequence; // 0x320
};

struct UShadowMapTexture2D : UTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x1a0
};

struct UDemoNetDriver : UNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x850
	float CheckpointSaveMaxMSPerFrame; // 0x9fc
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa20
	bool bIsLocalReplay; // 0xa30
	TArray<APlayerController*> SpectatorControllers; // 0xa38
};

struct UPortalWarsCheckInRewardWidget : UPortalWarsRewardEntryWidget {
	UTextBlock* DayText; // 0x728
	UWidgetSwitcher* RewardBackgroundSwitcher; // 0x730
	UWidget* MissedIndicator; // 0x738
	UWidgetAnimation* CompletedAnimation; // 0x740
	UAkAudioEvent* CompleteEvent; // 0x748
};

struct UPortalWarsLockerButtonWidget : UPortalWarsEntryWidget {
	ECustomizationType CustomizationType; // 0x420
	UTextBlock* EquippedText; // 0x428
	UImage* ThumbnailImage; // 0x430
	UTexture2D* DefaultImage; // 0x438
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

struct UMovieSceneActorReferenceSection : UMovieSceneSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct ALevelVariantSetsActor : AActor {
	FSoftObjectPath LevelVariantSets; // 0x220
	TMap<UObject*, ULevelVariantSetsFunctionDirector*> DirectorInstances; // 0x238
};

struct UInteractiveGizmo : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct UDeviceProfile : UTextureLODSettings {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
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
	char bSupportRayTracing : 1; // 0x188
	TArray<UMorphTarget*> MorphTargets; // 0x190
	UAnimInstance* PostProcessAnimBlueprint; // 0x318
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x320
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x330
	TArray<UAssetUserData*> AssetUserData; // 0x360
	TArray<USkeletalMeshSocket*> Sockets; // 0x370
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x390
};

struct UBTService_BlueprintBase : UBTService {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UWidgetComponent : UMeshComponent {
	EWidgetSpace Space; // 0x478
	EWidgetTimingPolicy TimingPolicy; // 0x479
	UUserWidget* WidgetClass; // 0x480
	FIntPoint DrawSize; // 0x488
	bool bManuallyRedraw; // 0x490
	bool bRedrawRequested; // 0x491
	float RedrawTime; // 0x494
	FIntPoint CurrentDrawSize; // 0x4a0
	bool bDrawAtDesiredSize; // 0x4a8
	FVector2D Pivot; // 0x4ac
	bool bReceiveHardwareInput; // 0x4b4
	bool bWindowFocusable; // 0x4b5
	EWindowVisibility WindowVisibility; // 0x4b6
	bool bApplyGammaCorrection; // 0x4b7
	ULocalPlayer* OwnerPlayer; // 0x4b8
	FLinearColor BackgroundColor; // 0x4c0
	FLinearColor TintColorAndOpacity; // 0x4d0
	float OpacityFromTexture; // 0x4e0
	EWidgetBlendMode BlendMode; // 0x4e4
	bool bIsTwoSided; // 0x4e5
	bool TickWhenOffscreen; // 0x4e6
	UBodySetup* BodySetup; // 0x4e8
	UMaterialInterface* TranslucentMaterial; // 0x4f0
	UMaterialInterface* TranslucentMaterial_OneSided; // 0x4f8
	UMaterialInterface* OpaqueMaterial; // 0x500
	UMaterialInterface* OpaqueMaterial_OneSided; // 0x508
	UMaterialInterface* MaskedMaterial; // 0x510
	UMaterialInterface* MaskedMaterial_OneSided; // 0x518
	UTextureRenderTarget2D* RenderTarget; // 0x520
	UMaterialInstanceDynamic* MaterialInstance; // 0x528
	bool bAddedToScreen; // 0x530
	bool bEditTimeUsable; // 0x531
	FName SharedLayerName; // 0x534
	int32_t LayerZOrder; // 0x53c
	EWidgetGeometryMode GeometryMode; // 0x540
	float CylinderArcAngle; // 0x544
	ETickMode TickMode; // 0x548
	UUserWidget* Widget; // 0x570
};

struct UAREnvironmentProbeComponent : UARComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct UGizmoConstantFrameAxisSource : UObject {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UMovieSceneVectorTrack : UMovieScenePropertyTrack {
	int32_t NumChannelsUsed; // 0xa8
};

struct ULightMapVirtualTexture2D : UTexture2D {
	TArray<int8_t> TypeToLayer; // 0x1a0
};

struct UParticleModuleSpawn : UParticleModuleSpawnBase {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct UParticleModuleRotation : UParticleModuleRotationBase {
	FRawDistributionFloat StartRotation; // 0x30
};

struct UChannel : UObject {
	UNetConnection* Connection; // 0x28
};

struct ALevelBounds : AActor {
	UBoxComponent* BoxComponent; // 0x220
	bool bAutoUpdateBounds; // 0x228
};

struct UBTTask_MoveDirectlyToward : UBTTask_MoveTo {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
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

struct UNiagaraSimulationStageGeneric : UNiagaraSimulationStageBase {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	char bDisablePartialParticleUpdate : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct UInterpTrackLinearColorProp : UInterpTrackLinearColorBase {
	FName PropertyName; // 0x90
};

struct UAIDataProvider_QueryParams : UAIDataProvider {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct UBlendSpace : UBlendSpaceBase {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct UParticleModuleLocationPrimitiveTriangle : UParticleModuleLocationBase {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
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

struct UMovieScenePropertySystem : UMovieSceneEntitySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40
};

struct USoundNodeSwitch : USoundNode {
	FName IntParameterName; // 0x48
};

struct UAmbisonicsEncodingSettings : USoundfieldEncodingSettingsBase {
	int32_t AmbisonicsOrder; // 0x28
};

struct UPortalWarsRoundCountdownWidget : UPortalWarsCountdownWidget {
	UTextBlock* RoundText; // 0x2a0
	UTextBlock* MatchPointText; // 0x2a8
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

struct APortalWarsOITC : APortalWarsGameMode {
	bool bAllowAmmoStacking; // 0x6a8
	bool bMeleeRequiredForAmmoStacking; // 0x6a9
	int32_t MaxAmmo; // 0x6ac
};

struct UNiagaraDataInterface2DArrayTexture : UNiagaraDataInterface {
	UTexture2DArray* Texture; // 0x38
};

struct UPortalWarsSocialPlayerEntry : UPortalWarsPlayerEntryWidget {
	UWidgetSwitcher* OnlineSwitcher; // 0x650
};

struct UMaterialExpressionLandscapeLayerWeight : UMaterialExpression {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct ULeaderboardQueryCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
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

struct UInterpTrackBoolProp : UInterpTrack {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UAIPerceptionStimuliSourceComponent : UActorComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct UPortalWarsItemShopSectionWidget : UPortalWarsUserWidget {
	UTextBlock* TitleText; // 0x2a8
	UTextBlock* ExpiresInText; // 0x2b0
	FMulticastInlineDelegate OnItemEntrySelected; // 0x2b8
	TMap<EStoreSectionType, UPortalWarsItemShopEntry*> ItemShopEntryWidgetClasses; // 0x2c8
	UWrapBox* ItemsPanel; // 0x318
	UWidget* LeftSeparator; // 0x320
	UWidget* RightSeparator; // 0x328
};

struct USourceEffectEQPreset : USoundEffectSourcePreset {
	FSourceEffectEQSettings Settings; // 0xa0
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

struct UPortalWarsReplayEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* NameText; // 0x420
	UTextBlock* DateText; // 0x428
	UTextBlock* LengthText; // 0x430
	UTextBlock* MapText; // 0x438
	UTextBlock* ModeText; // 0x440
	UImage* MapImage; // 0x448
	UTextBlock* ScoreText; // 0x450
	UTextBlock* KillsText; // 0x458
	UTextBlock* DeathsText; // 0x460
	FLinearColor WinScoreColor; // 0x468
	FLinearColor LossScoreColor; // 0x478
	FLinearColor TieScoreColor; // 0x488
	UWidgetSwitcher* BackgroundSwitcher; // 0x4e0
	UPortalWarsReplaysWidget* ParentWidget; // 0x528
};

struct UPortalWarsHostMenuWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* HostButton; // 0x338
	UPortalWarsRadioGroupWidget* RegionRadioGroup; // 0x340
	UPortalWarsTextInputWidget* ServerName; // 0x348
	UPortalWarsTextInputWidget* ServerPassword; // 0x350
	UPortalWarsCheckBoxWidget* PrivateCheckBox; // 0x358
	UPortalWarsNumericCarouselWidget* MaxPlayersInput; // 0x360
	UPortalWarsRadioGroupWidget* TypeRadioGroup; // 0x368
	UPortalWarsGameInstance* GameInstanceRef; // 0x378
};

struct USoundNodeWavePlayer : USoundNodeAssetReferencer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
};

struct UDatasmithCineCameraComponentTemplate : UDatasmithObjectTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct ULevelSequenceBurnIn : UUserWidget {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x318
};

struct APointLight : ALight {
	UPointLightComponent* PointLightComponent; // 0x230
};

struct UGeometryCollectionCache : UObject {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UForceFeedbackEffect : UObject {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct UPortalWarsJoinServerDialogWidget : UPortalWarsDialogWidget {
	UWidgetSwitcher* JoinSwitcher; // 0x390
	UTextBlock* DisabledText; // 0x398
	UPortalWarsButtonWidget* JoinButton; // 0x3a0
	UTextBlock* JoinDisabledText; // 0x3a8
	UPortalWarsButtonWidget* SpectateButton; // 0x3b0
	UTextBlock* SpectateDisabledText; // 0x3b8
	UPortalWarsTextInputWidget* PasswordInput; // 0x3c0
	UPortalWarsServerEntryWidget* ServerEntry; // 0x3c8
};

struct UTextureRenderTarget : UTexture {
	float TargetGamma; // 0x178
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

struct UNiagaraDataInterfaceTexture : UNiagaraDataInterface {
	UTexture* Texture; // 0x38
};

struct ULandscapeMeshProxyComponent : UStaticMeshComponent {
	FGuid LandscapeGuid; // 0x4e0
	TArray<FIntPoint> ProxyComponentBases; // 0x4f0
	int8_t ProxyLOD; // 0x500
};

struct UInterpTrackVectorMaterialParam : UInterpTrackVectorBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UVectorFieldStatic : UVectorField {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
};

struct UPortalWarsHillIndicatorWidget : UPortalWarsIndicatorWidget {
	UWidget* Pointer; // 0x2b8
	UTextBlock* OnScreenNameText; // 0x2c0
	UTextBlock* OffScreenNameText; // 0x2c8
	UTexture2D* NeutralBackground; // 0x2d8
	UTexture2D* RedBackground; // 0x2e0
	UTexture2D* BlueBackground; // 0x2e8
};

struct UNavCollisionBase : UObject {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UPortalWarsHUDWidget : UUserWidget {
	UPortalWarsHealthWidget* Health; // 0x260
	UImage* LowHealthOverlay; // 0x268
	UOverlay* JetpackOverlay; // 0x270
	UCanvasPanel* JetpackCanvas; // 0x278
	UProgressBar* JetpackProgressBar; // 0x280
	UCanvasPanel* IndicatorPanel; // 0x288
	UPortalWarsIndicatorWidget* NameIndicatorWidgetClass; // 0x290
	UPortalWarsIndicatorWidget* PortalIndicatorWidgetClass; // 0x298
	UPortalWarsIndicatorWidget* PickupIndicatorZoneClass; // 0x2a0
	UPortalWarsPickupWidget* PickupWidget; // 0x2a8
	UOverlay* DamageIndicatorOverlay; // 0x2b0
	UPortalWarsDamageIndicatorWidget* DamageIndicatorWidgetClass; // 0x2b8
	UPortalWarsReticleWidget* Reticle; // 0x2c0
	UPortalWarsRadarWidget* Radar; // 0x2c8
	UPortalWarsRespawnWidget* RespawnTimer; // 0x2d0
	UPortalWarsDamageNumberEntryWidget* DamageNumberEntryWidgetClass; // 0x2d8
	int32_t MaxDamageNumberEntries; // 0x2e0
	float DamageNumberEntryDisplayTime; // 0x2e4
	UPanelWidget* DamageNumbersPanel; // 0x2e8
	UPanelWidget* KillStack; // 0x2f0
	UPortalWarsKillStackEntryWidget* KillStackEntryWidgetClass; // 0x2f8
	int32_t MaxKillStackEntries; // 0x300
	float KillStackEntryDisplayTime; // 0x304
	UPanelWidget* KillFeed; // 0x308
	UPortalWarsKillFeedEntryWidget* KillFeedEntryWidgetClass; // 0x310
	int32_t MaxKillFeedEntries; // 0x318
	float KillFeedEntryDisplayTime; // 0x31c
	UPortalWarsKilledByBannerWidget* KilledByBanner; // 0x320
	UPortalWarsLowAmmoIndicatorWidget* LowAmmoIndicator; // 0x328
	UTextBlock* SpectatingWhileDeadName; // 0x330
	UPortalWarsOutOfBoundsWidget* OutOfBounds; // 0x338
	UPortalWarsInventoryWidget* Inventory; // 0x340
	UPortalWarsMedalsWidget* Medals; // 0x348
	UTextBlock* SubtitleTextBlock; // 0x350
	float SubtitleDisplayTime; // 0x358
	UWidget* ScorePanel; // 0x368
	UWidget* WaitingAreaIndicator; // 0x370
};

struct USafeZoneSlot : UPanelSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct UNiagaraDataInterfaceArrayColor : UNiagaraDataInterfaceArray {
	TArray<FLinearColor> ColorData; // 0x50
};

struct UEnvQueryTest_Trace : UEnvQueryTest {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
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

struct UParticleModuleOrbitBase : UParticleModule {
	char bUseEmitterTime : 1; // 0x30
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

struct APostProcessVolume : AVolume {
	FPostProcessSettings Settings; // 0x260
	float Priority; // 0x7b0
	float BlendRadius; // 0x7b4
	float BlendWeight; // 0x7b8
	char bEnabled : 1; // 0x7bc
	char bUnbound : 1; // 0x7bc
};

struct UBTDecorator_HasReceivedKillRecently : UBTDecorator {
	float MaxTime; // 0x68
};

struct USubmixEffectMultibandCompressorPreset : USoundEffectSubmixPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
};

struct UNavRelevantComponent : UActorComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
};

struct UPortalWarsPlayButtonWidget : UPortalWarsButtonWidget {
	UTextBlock* ButtonText; // 0x3c8
};

struct UAkWwiseTree : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
};

struct UPortalWarsReplaysWidget : UPortalWarsMenuWidget {
	UPortalWarsReplayEntryWidget* ReplayEntryWidgetClass; // 0x340
	UPanelWidget* ReplayList; // 0x348
	UPortalWarsReplayEntryWidget* PreviewReplayEntry; // 0x350
	UPortalWarsButtonWidget* PlayButton; // 0x358
	UPortalWarsButtonWidget* DeleteButton; // 0x360
	UPortalWarsButtonWidget* RenameButton; // 0x368
	UPortalWarsButtonWidget* OpenFolderButton; // 0x370
	UPortalWarsRenameReplayDialogWidget* RenameReplayDialogWidgetClass; // 0x378
};

struct UAsyncActionLoadPrimaryAsset : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UAkLinuxInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
};

struct UOnlinePIESettings : UDeveloperSettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UInterpCurveEdSetup : UObject {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
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

struct UMaterialExpressionConstant3Vector : UMaterialExpression {
	FLinearColor Constant; // 0x40
};

struct UParticleModuleMeshRotationRateOverLife : UParticleModuleRotationRateBase {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct UPortalWarsRedeemableButtonWidget : UPortalWarsPurchaseButtonWidget {
	UImage* DisplayImage; // 0x440
	UTextBlock* SubtitleText; // 0x448
	int32_t RedeemableID; // 0x4f8
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

struct UPortalWarsPlaylistCrossplayDialogWidget : UPortalWarsDialogWidget {
	UPortalWarsButtonWidget* AcceptButton; // 0x390
	UTextBlock* MessageText; // 0x398
	FMulticastInlineDelegate OnAcceptSelected; // 0x3a0
	UPortalWarsPlaylistEntryWidget* PlaylistEntry; // 0x3b0
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UEditableTextBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct ULandscapeHeightfieldCollisionComponent : UPrimitiveComponent {
	TArray<ULandscapeLayerInfoObject*> ComponentLayerInfos; // 0x450
	int32_t SectionBaseX; // 0x460
	int32_t SectionBaseY; // 0x464
	int32_t CollisionSizeQuads; // 0x468
	float CollisionScale; // 0x46c
	int32_t SimpleCollisionSizeQuads; // 0x470
	TArray<char> CollisionQuadFlags; // 0x478
	FGuid HeightfieldGuid; // 0x488
	FBox CachedLocalBox; // 0x498
	LazyObjectProperty RenderComponent; // 0x4b4
	TArray<UPhysicalMaterial*> CookedPhysicalMaterials; // 0x4e0
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

struct UParticleModuleAccelerationOverLifetime : UParticleModuleAccelerationBase {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UPortalWarsContaminationHUDOverlayWidget : UPortalWarsRoundHUDOverlayWidget {
	UImage* NotificationIcon; // 0x278
	UTextBlock* NotificationText; // 0x280
	UWidgetAnimation* NotificationFadeAnimation; // 0x290
};

struct UARCandidateObject : UDataAsset {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct UMaterialExpressionSceneColor : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct APortalWarsDOMHUD : APortalWarsHUD {
	UPortalWarsIndicatorWidget* HillIndicatorWidgetClass; // 0x400
	UPortalWarsDOMHUDOverlayWidget* DOMHUDOverlayWidget; // 0x408
	UPortalWarsDOMHUDOverlayWidget* DOMHUDOverlayWidgetClass; // 0x410
};

struct UCheckBoxStyleAsset : UObject {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct UUserDefinedEnum : UEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UParticleModuleCollisionGPU : UParticleModuleCollisionBase {
	FRawDistributionFloat Resilience; // 0x30
	FRawDistributionFloat ResilienceScaleOverLife; // 0x60
	float Friction; // 0x90
	float RandomSpread; // 0x94
	float RandomDistribution; // 0x98
	float RadiusScale; // 0x9c
	float RadiusBias; // 0xa0
	EParticleCollisionResponse Response; // 0xa4
	EParticleCollisionMode CollisionMode; // 0xa5
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
};

struct UBlackboardComponent : UActorComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct USoundfieldSubmix : USoundSubmixWithParentBase {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
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

struct UParticleModuleLocation_Seeded : UParticleModuleLocation {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UScrollBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UNiagaraPrecompileContainer : UObject {
	TArray<UNiagaraScript*> Scripts; // 0x28
	UNiagaraSystem* System; // 0x38
};

struct UMovieSceneStringSection : UMovieSceneSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
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

struct UScrollBarWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UPlayer : UObject {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct UPortalWarsGamepadBindingRestoreDialogWidget : UPortalWarsDialogWidget {
	FMulticastInlineDelegate OnAcceptButtonClickedDelegate; // 0x390
	UPortalWarsTextCarouselWidget* ControllerPreset; // 0x3a0
	UPortalWarsButtonWidget* AcceptButton; // 0x3a8
};

struct APortalLauncher : ABaseGun {
	APortal* portalBPClass; // 0x2b8
	APortal* leftPortal; // 0x2c0
	APortal* rightPortal; // 0x2c8
	float portalLauncherRange; // 0x2d0
	float timeBetweenPortalShots; // 0x2d4
	float timeToDestroyPortalAfterDeath; // 0x2d8
	FVector trailFXOffset; // 0x2dc
	FAutoAimData MouseAndKeyboardAutoAimConfig; // 0x2e8
	FAutoAimData GamepadAutoAimConfig; // 0x318
	UPortalWarsAkComponent* AkPortalGun; // 0x388
	UAkAudioEvent* FirePortalEvent; // 0x390
	UAkAudioEvent* ClosePortalEvent; // 0x398
	UAkAudioEvent* SuccessfulPortalEvent; // 0x3a0
	UAkAudioEvent* FailPortalEvent; // 0x3a8
	UParticleSystem* TrailFX; // 0x3b0
	FName TrailTargetParam; // 0x3b8
	FName TrailColorParam; // 0x3c0
	FLinearColor LeftPortalEffectColor; // 0x3c8
	FLinearColor RightPortalEffectColor; // 0x3d8
	FLinearColor FriendlyPortalEffectColor; // 0x3e8
	FLinearColor EnemyPortalEffectColor; // 0x3f8
};

struct UMotoSynthPreset : UObject {
	FMotoSynthRuntimeSettings Settings; // 0x28
};

struct UJoinSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMovieSceneVectorSection : UMovieSceneSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xf0
	int32_t ChannelsUsed; // 0x370
};

struct UPortalWarsGameplaySettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsCheckBoxWidget* Blood; // 0x358
	UPortalWarsDropdownWidget* Killcam; // 0x360
	UPortalWarsDropdownWidget* Clamber; // 0x368
	UPortalWarsDropdownWidget* InputDevice; // 0x370
	UPortalWarsColorPickerWidget* EnemyColor; // 0x378
	UPortalWarsColorPickerWidget* EnemyOutlineColor; // 0x380
	UPortalWarsColorPickerWidget* AllyOutlineColor; // 0x388
	UPortalWarsColorPickerWidget* AllyColorThroughWalls; // 0x390
};

struct USoundNodeDelay : USoundNode {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
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

struct UInvalidationBox : UContentWidget {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
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

struct UPortalWarsBlockedPlayersWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* RefreshButton; // 0x340
	UPanelWidget* BlockedPlayersPanel; // 0x348
	UPortalWarsSocialPlayerEntry* PlayerEntryWidgetClass; // 0x350
	UPortalWarsPlayerActionsWidget* PlayerActionsWidgetClass; // 0x358
	UTextBlock* ErrorText; // 0x368
};

struct UMorphTarget : UObject {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct UDatasmithSpotLightComponentTemplate : UDatasmithObjectTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
};

struct UAIPerceptionComponent : UActorComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
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
	char sRGB : 1; // 0x85
	char bNoTiling : 1; // 0x85
	char VirtualTextureStreaming : 1; // 0x85
	char CompressionYCoCg : 1; // 0x85
	char bNotOfflineProcessed : 1; // 0x85
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x85
	TArray<UAssetUserData*> AssetUserData; // 0x88
};

struct UInterpTrackInstVisibility : UInterpTrackInst {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct UAudioAnalyzerNRT : UAudioAnalyzerAsset {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
};

struct UInGameAdManager : UPlatformInterfaceBase {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UAISense_Touch : UAISense {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct UInterpTrackInstSound : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UNamedInterfaces : UObject {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UPortalWarsTutorialStepsWidget : UUserWidget {
	TArray<UPWTutorialStepEntryWidget*> StepWidgets; // 0x288
	UPanelWidget* CurrentStepPanel; // 0x298
	UPanelWidget* CompletedStepPanel; // 0x2a0
	UWidget* CompletedIndicator; // 0x2a8
	UPWTutorialStepEntryWidget* StepEntryWidgetClass; // 0x2b0
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

struct UBookMark2D : UBookmarkBase {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct UUniformGridSlot : UPanelSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct UAkWindowsInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct ALevelSequenceMediaController : AActor {
	ALevelSequenceActor* Sequence; // 0x228
	UMediaComponent* MediaComponent; // 0x230
	float ServerStartTimeSeconds; // 0x238
};

struct UDatasmithSkyLightComponentTemplate : UDatasmithObjectTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
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

struct APartyBeaconHost : AOnlineBeaconHostObject {
	UPartyBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct APortalWarsLobbyPlayerStart : APlayerStart {
	int32_t SpawnOrder; // 0x250
	char TeamIndex; // 0x254
};

struct UObjectReferencer : UObject {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct UAISense_Hearing : UAISense {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct UEnvQueryTest_Dot : UEnvQueryTest {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct UParticleModuleLocationWorldOffset_Seeded : UParticleModuleLocationWorldOffset {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UPortalWarsGameUserSettings : UGameUserSettings {
	bool bHasRunAutoCalibration; // 0x120
	int32_t PortalQuality; // 0x124
	int32_t PortalFrameRate; // 0x128
	int32_t NVIDIAReflex; // 0x12c
	bool bShowLatencyMarkers; // 0x130
	bool bShowLatencyFlashIndicator; // 0x131
};

struct UBTTask_PlayAnimation : UBTTaskNode {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UTextureRenderTarget2DArray : UTextureRenderTarget {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	int32_t Slices; // 0x188
	FLinearColor ClearColor; // 0x18c
	EPixelFormat OverrideFormat; // 0x19c
	char bHDR : 1; // 0x19d
	char bForceLinearGamma : 1; // 0x19d
};

struct AExponentialHeightFog : AInfo {
	UExponentialHeightFogComponent* Component; // 0x220
	char bEnabled : 1; // 0x228
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

struct UPortalWarsItemShopEntry : UPortalWarsEntryWidget {
	UTextBlock* SubtitleText; // 0x430
	UImage* DisplayImage; // 0x438
	UImage* RarityIcon; // 0x440
	UImage* RarityBG; // 0x448
	UImage* RarityBorder; // 0x450
	UImage* RarityScrim; // 0x458
	TMap<ECustomizationRarity, UTexture2D*> RarityBackgrounds; // 0x460
	TMap<ECustomizationRarity, UTexture2D*> RarityScrims; // 0x4b0
	TMap<ECustomizationRarity, FLinearColor> RarityTitleColors; // 0x500
	TMap<ECustomizationRarity, FLinearColor> RarityBorderColors; // 0x550
	UWidgetSwitcher* OwnedSwitcher; // 0x5a0
	FLinearColor DefaultSubtitleColor; // 0x5b0
	FLinearColor HoveredSubtitleColor; // 0x5c0
	TMap<ECustomizationType, FMargin> ThumbnailPaddings; // 0x5d0
	TMap<ECustomizationType, float> RenderAngles; // 0x620
};

struct UEnvQueryTest_Pathfinding : UEnvQueryTest {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct AOnlineBeaconHostObject : AActor {
	FString BeaconTypeName; // 0x220
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x230
	TArray<AOnlineBeaconClient*> ClientActors; // 0x238
};

struct UGameplayTagsManager : UObject {
	TMap<FName, FGameplayTagSource> TagSources; // 0x160
	TArray<UDataTable*> GameplayTagTables; // 0x230
};

struct APortalWarsNavLink_Jump : ANavLinkProxy {
	bool shouldSprint; // 0x270
	float CooldownTime; // 0x274
};

struct UMovieSceneGeometryCacheTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UMaterialExpressionLandscapeLayerSample : UMaterialExpression {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct UMaterialExpressionRayTracingQualitySwitch : UMaterialExpression {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct UPortalWarsPriceEntryWidget : UUserWidget {
	UTextBlock* PriceText; // 0x260
	UWidget* Strikethrough; // 0x268
	UImage* PremiumImage; // 0x270
	UWidget* CurrencyIcon; // 0x278
	TMap<FString, UTexture2D*> PremiumImages; // 0x280
};

struct UEnvelopeFollowerListener : UActorComponent {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct UPhysicsConstraintTemplate : UObject {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1f0
	FConstraintProfileProperties DefaultProfile; // 0x200
};

struct UMaterialExpressionFloor : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct APortalWarsTakedownVIPPlayerState : APortalWarsTakedownPlayerState {
	char bIsVIP : 1; // 0xad0
};

struct UMagicLeapARPinSaveGame : USaveGame {
	FGuid PinnedID; // 0x28
	FTransform ComponentWorldTransform; // 0x40
	FTransform PinTransform; // 0x70
	bool bShouldPinActor; // 0xa0
};

struct USoundEffectSourcePresetChain : UObject {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct USourceEffectFoldbackDistortionPreset : USoundEffectSourcePreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct UMaterialExpressionNamedRerouteUsage : UMaterialExpressionNamedRerouteBase {
	UMaterialExpressionNamedRerouteDeclaration* Declaration; // 0x40
	FGuid DeclarationGuid; // 0x48
};

struct UPoseWatch : UObject {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct UMaterialExpressionSubtract : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UPortalWarsRaceLobbyWidget : UPortalWarsCustomLobbyWidget {
	UPortalWarsGlobalCarouselWidget* MapSelector; // 0x378
	UPortalWarsRaceLeaderboardWidget* RaceLeaderboard; // 0x380
	UPortalWarsButtonWidget* SwitchLeaderboardButton; // 0x388
	UPortalWarsButtonWidget* ToggleCrossPlayButton; // 0x390
};

struct UStaticMeshSocket : UObject {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct UPortalWarsSpinSliderWidget : UPortalWarsInputWidget {
	USpinBox* InputBox; // 0x368
	USlider* InputSlider; // 0x370
	UProgressBar* BackgroundFillBar; // 0x378
	float MinValue; // 0x380
	float MaxValue; // 0x384
	float ValueMultiplier; // 0x388
	float StepSize; // 0x38c
	int32_t MaxFractionalDigits; // 0x390
	bool bCommitValueOnScrub; // 0x394
	FLinearColor SliderDefaultColor; // 0x3a0
	FLinearColor SliderHoveredColor; // 0x3b0
	UTexture2D* SpinDefaultBackgroundImage; // 0x3c0
	UTexture2D* SpinHoveredBackgroundImage; // 0x3c8
};

struct UPortalWarsPlayerEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* PlayerNameText; // 0x420
	UWidget* NameRoot; // 0x448
	UImage* PlayerAvatar; // 0x450
	UTexture* CachedPlayerAvatar; // 0x458
	UWidget* VoiceIndicator; // 0x460
	UWidgetSwitcher* VoiceSwitcher; // 0x468
	UWidgetSwitcher* MuteSwitcher; // 0x470
	bool bShowVoiceIndicator; // 0x478
	float UpdateInterval; // 0x480
	UWidgetSwitcher* BackgroundSwitcher; // 0x488
	UTextBlock* PresenceText; // 0x490
	UWidget* RankRoot; // 0x4b0
	UImage* RankImage; // 0x4b8
	UPortalWarsProgressionIconWidget* StreakIcon; // 0x4e0
	UPortalWarsProgressionIconWidget* LevelIcon; // 0x508
	UCanvasPanel* IconsRoot; // 0x518
	bool bShowIcons; // 0x520
	bool bCompactIcons; // 0x521
	UWidgetAnimation* CompactIconsAnimation; // 0x528
	UWidgetAnimation* SocialIconsAnimation; // 0x530
	UPanelWidget* NameTagPanel; // 0x538
	UPortalWarsNameTagWidget* NameTagWidgetClass; // 0x540
	UImage* PlayerBanner; // 0x548
	bool bInitLocalPlayer; // 0x639
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

struct UMovieSceneGeometryCacheSection : UMovieSceneSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct UMaterialExpressionScalarParameter : UMaterialExpressionParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UMaterialExpressionSceneTexture : UMaterialExpression {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct UPortalWarsGlobals : UObject {
	TMap<ECustomizationType, FText> CustomizationTypeText; // 0x110
	TMap<ECustomizationType, FText> CustomizationCategoryText; // 0x160
	TMap<ECustomizationRarity, FText> CustomizationRarityText; // 0x1b0
	TMap<ECustomizationRarity, FLinearColor> CustomizationRarityColor; // 0x200
	TMap<ECustomizationRarity, UTexture2D*> CustomizationRarityIcons; // 0x250
	TArray<ECustomizationType> WeaponCustomizationTypes; // 0x480
	TMap<ECustomizationType, UDataTable*> CustomizationTables; // 0x490
	UDataTable* MasterSkinTable; // 0x4e0
	TMap<ECustomizationType, UDataTable*> CustomizationThumbnailTables; // 0x4e8
	UMaterialInterface* SprayDecalMaterial; // 0x538
	UDataTable* TextureSets; // 0x540
	UDataTable* Weapons; // 0x548
	UDataTable* Maps; // 0x550
	UDataTable* GameModes; // 0x558
	UDataTable* GameModeTypes; // 0x560
	UDataTable* Medals; // 0x568
	TMap<EChallengeType, UDataTable*> ChallengeTables; // 0x570
	UDataTable* CheckInRewards; // 0x5c0
	UDataTable* PlayStreakRewards; // 0x5c8
	UDataTable* PlayStreakIcons; // 0x5d0
	UDataTable* Progression; // 0x5d8
	UDataTable* ProgressionIcons; // 0x5e0
	UDataTable* BattlePass; // 0x5e8
	UDataTable* ReferralPass; // 0x5f0
	TMap<ERewardType, TSoftObjectPtr<UTexture2D>> RewardIcons; // 0x5f8
	UDataTable* Unlocks; // 0x648
	UDataTable* Ranks; // 0x650
	UDataTable* RankDivisions; // 0x658
	UDataTable* Playlists; // 0x660
	UDataTable* Regions; // 0x668
	UDataTable* MicroTxnPurchasables; // 0x670
	UDataTable* Redeemables; // 0x678
	UDataTable* Announcer; // 0x680
	UDataTable* BotProfiles; // 0x688
	UDataTable* CustomBotProfiles; // 0x690
	UDataTable* BannedWords; // 0x698
	UDataTable* NiceTexts; // 0x6a0
	UDataTable* WeaponReticles; // 0x6a8
	UDataTable* CustomReticles; // 0x6b0
	UTexture2D* DefaultAvatar; // 0x6b8
	TMap<FString, UTexture2D*> PlatformAvatars; // 0x6c0
	UDataTable* Tutorial; // 0x710
	UDataTable* XboxButtons; // 0x718
	UDataTable* PlayStationButtons; // 0x720
	UDataTable* MouseButtons; // 0x728
	UDataTable* Tips; // 0x730
	UDataTable* LockerTips; // 0x738
	UDataTable* WeaponPoses; // 0x740
	TArray<UObject*> AlwaysLoadedSoundBanks; // 0x748
};

struct UUserDefinedStruct : UScriptStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct UOodleNetworkTrainerCommandlet : UCommandlet {
	bool bCompressionTest; // 0x80
	int32_t HashTableSize; // 0x84
	int32_t DictionarySize; // 0x88
	int32_t DictionaryTrials; // 0x8c
	int32_t TrialRandomness; // 0x90
	int32_t TrialGenerations; // 0x94
	bool bNoTrials; // 0x98
};

struct UPortalWarsPostGamePlayerEntry : UPortalWarsUserWidget {
	UTextBlock* PlayerNameText; // 0x2a8
	UTextBlock* PlayerScoreText; // 0x2b0
	UTextBlock* PlayerKillsText; // 0x2b8
	UTextBlock* PlayerDeathsText; // 0x2c0
	UTextBlock* PlayerDamageDealtText; // 0x2c8
	UBorder* NameBorder; // 0x2d0
	FLinearColor AlphaTeamColor; // 0x2d8
	FLinearColor BravoTeamColor; // 0x2e8
	FLinearColor NoTeamColor; // 0x2f8
	UBorder* StatBorder; // 0x308
};

struct UPostProcessComponent : USceneComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x750
	float BlendRadius; // 0x754
	float BlendWeight; // 0x758
	char bEnabled : 1; // 0x75c
	char bUnbound : 1; // 0x75c
};

struct UPhysicsCollisionHandler : UObject {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct USoundNodeLooping : USoundNode {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct UAkAuxBus : UObject {
	UAkAudioBank* RequiredBank; // 0x28
};

struct UPortalWarsStatsWidget : UPortalWarsMenuWidget {
	UPortalWarsMenuWidget* OverviewWidget; // 0x338
	UPortalWarsMenuWidget* SocialWidget; // 0x340
	UPortalWarsMenuWidget* RankedWidget; // 0x348
};

struct UPortalWarsFriendsListSubWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* RefreshButton; // 0x340
	UPanelWidget* InGamePanel; // 0x348
	UPanelWidget* OnlinePanel; // 0x350
	UPanelWidget* OfflinePanel; // 0x358
	UWidget* OnlineRoot; // 0x360
	UPortalWarsSocialPlayerEntry* PlayerEntryWidgetClass; // 0x368
	UPortalWarsPlayerActionsWidget* PlayerActionsWidgetClass; // 0x370
	UTextBlock* ErrorText; // 0x378
	bool bPlatformFriendsList; // 0x380
};

struct UPortalWarsTutorialVideoWidget : UPortalWarsUserWidget {
	UMediaPlayer* TutorialMediaPlayer; // 0x2b8
	APortalWarsMediaSoundActor* TutorialMediaSoundActorClass; // 0x2c0
	AActor* TutorialMediaSoundActor; // 0x2c8
	FText SubtitleText; // 0x2d0
	UTextBlock* ToggleVideoText; // 0x2f8
	UTextBlock* Subtitles; // 0x300
};

struct UMovieSceneCompiledDataManager : UObject {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct UNiagaraDataInterfaceRenderTarget2DArray : UNiagaraDataInterfaceRWBase {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bInheritUserParameterSettings : 1; // 0xe5
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108
};

struct URadialIntMask : UFieldNodeInt {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct ULandscapeSettings : UDeveloperSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct UAnimCompress_RemoveEverySecondKey : UAnimCompress {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
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

struct UPortalWarsPrivacySettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsCheckBoxWidget* CrossPlay; // 0x358
	UPortalWarsCheckBoxWidget* AnonymousMode; // 0x360
	UPortalWarsCheckBoxWidget* HideNames; // 0x368
	UPortalWarsCheckBoxWidget* PartyChatOnly; // 0x370
};

struct UBTTaskNode : UBTNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct USoundNodeConcatenator : USoundNode {
	TArray<float> InputVolume; // 0x48
};

struct UNiagaraDataInterfaceLandscape : UNiagaraDataInterface {
	AActor* SourceLandscape; // 0x38
	ENDILandscape_SourceMode SourceMode; // 0x40
};

struct UMaterialExpressionFeatureLevelSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
};

struct UHapticFeedbackEffect_Curve : UHapticFeedbackEffect_Base {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UBTDecorator_WeaponCheck : UBTDecorator {
	AGun* WeaponClass; // 0x68
};

struct UMaterialExpressionComponentMask : UMaterialExpression {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UPortalWarsPickupWidget : UPortalWarsUserWidget {
	UWidget* Root; // 0x2a8
	UImage* PickupImage; // 0x2b0
	UTextBlock* PickupText; // 0x2b8
	URichTextBlock* ActionText; // 0x2c0
	UWidgetAnimation* FadeInAnimation; // 0x2c8
	UWidgetSwitcher* ConsoleSwitcher; // 0x2d0
	URichTextBlock* ConsoleActionText; // 0x2d8
	UImage* ConsoleActionImage; // 0x2e0
	UPortalWarsProgressRadialWidget* ProgressRadial; // 0x2e8
};

struct ANiagaraPerfBaselineActor : AActor {
	UNiagaraBaselineController* Controller; // 0x220
	UTextRenderComponent* Label; // 0x228
};

struct UEditableMesh : UObject {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
};

struct UFindTurnBasedMatchCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UPortalWarsPlayerCardWidget : UPortalWarsCareerProgressWidget {
	UTextBlock* AlloyText; // 0x360
	UTextBlock* CurrencyText; // 0x368
	UTextBlock* StreakText; // 0x370
	UWidget* StreakRepairIndicator; // 0x378
	UWidget* NotificationIndicator; // 0x380
	UPortalWarsButtonWidget* SettingsButton; // 0x388
	UPortalWarsButtonWidget* NotificationButton; // 0x390
	UButton* CurrencyButton; // 0x398
	UButton* LockerButton; // 0x3a0
	UButton* CareerButton; // 0x3a8
	UButton* PlayStreakButton; // 0x3b0
};

struct UPortalWarsIKAnimInstance : UAnimInstance {
	APortalWarsCharacter* Character; // 0x2b8
	FRotator IKRootRotation; // 0x2c0
	FVector IKRootTranslation; // 0x2cc
	FVector RootTranslation; // 0x2d8
	bool bIsMoving; // 0x2e4
	float MoveSpeed; // 0x2e8
	bool bIsFalling; // 0x2ec
};

struct ULightmassPortalComponent : USceneComponent {
	UBoxComponent* PreviewBox; // 0x1f8
};

struct UPortalWarsPausePlayersMenuWidget : UPortalWarsMenuWidget {
	UPortalWarsPlayerEntryWidget* PlayerEntryWidgetClass; // 0x338
	UPanelWidget* PlayersPanel; // 0x340
	UPortalWarsPlayerActionsWidget* PlayerActionsWidgetClass; // 0x348
};

struct ULevelSequenceDirector : UObject {
	ULevelSequencePlayer* Player; // 0x28
};

struct APortalWarsCTFGameState : APortalWarsGameState {
	AActor* AlphaFlag; // 0x7c8
	AActor* BravoFlag; // 0x7d0
	EFlagState AlphaFlagState; // 0x7d8
	EFlagState BravoFlagState; // 0x7d9
	float CapturedFlagRespawnTime; // 0x7dc
};

struct UNiagaraDataInterfaceExport : UNiagaraDataInterface {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
	int32_t GPUAllocationFixedSize; // 0x5c
	float GPUAllocationPerParticleSize; // 0x60
};

struct UImageSequenceProtocol_EXR : UImageSequenceProtocol {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct UMovieSceneEasingExternalCurve : UObject {
	UCurveFloat* Curve; // 0x30
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

struct UPortalWarsLimitedTimeOfferDialogWidget : UPortalWarsDialogWidget {
	UPortalWarsButtonWidget* ViewButton; // 0x390
	UPortalWarsItemShopSectionWidget* ItemShopSection; // 0x398
	UTextBlock* TitleText; // 0x3a0
	UTextBlock* ExpiresInText; // 0x3a8
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

struct UMaterialExpression : UObject {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
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

struct UCameraModifier_CameraShake : UCameraModifier {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UPortalWarsCheckBoxWidget : UPortalWarsInputWidget {
	UPortalWarsCheckBox* CheckBox; // 0x368
};

struct UMovieSceneParticleTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x80
};

struct USplineMeshComponent : UStaticMeshComponent {
	FSplineMeshParams SplineParams; // 0x4e8
	FVector SplineUpDir; // 0x540
	float SplineBoundaryMin; // 0x54c
	FGuid CachedMeshBodySetupGuid; // 0x550
	UBodySetup* BodySetup; // 0x560
	float SplineBoundaryMax; // 0x568
	char bAllowSplineEditingPerInstance : 1; // 0x56c
	char bSmoothInterpRollScale : 1; // 0x56c
	char bMeshDirty : 1; // 0x56c
	ESplineMeshAxis ForwardAxis; // 0x56d
	float VirtualTextureMainPassMaxDrawDistance; // 0x570
};

struct UParticleModuleRotationRateMultiplyLife : UParticleModuleRotationRateBase {
	FRawDistributionFloat LifeMultiplier; // 0x30
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

struct UAkCheckBox : UContentWidget {
	ECheckBoxState CheckedState; // 0x468
	FDelegate CheckedStateDelegate; // 0x46c
	FCheckBoxStyle WidgetStyle; // 0x480
	EHorizontalAlignment HorizontalAlignment; // 0xa00
	bool IsFocusable; // 0xa01
	FAkBoolPropertyToControl ThePropertyToControl; // 0xa08
	FAkWwiseItemToControl ItemToControl; // 0xa18
	FMulticastInlineDelegate AkOnCheckStateChanged; // 0xa58
	FMulticastInlineDelegate OnItemDropped; // 0xa68
	FMulticastInlineDelegate OnPropertyDropped; // 0xa78
};

struct UBTCompositeNode : UBTNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
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

struct UPWVoiceNotificationItem : UUserWidget {
	USizeBox* Root; // 0x260
	UTextBlock* PlayerNameText; // 0x268
};

struct UPortalWarsPartyEntryWidget : UPortalWarsPlayerEntryWidget {
	UPortalWarsPlayerEntryWidget* PlayerEntry; // 0x640
	UWidget* LeaderIndicator; // 0x648
	UWidgetSwitcher* EntrySwitcher; // 0x650
	FMulticastInlineDelegate OnInviteButtonClickedDelegate; // 0x658
	UButton* InviteButton; // 0x668
	UWidget* InviteRoot; // 0x670
};

struct USimpleConstructionScript : UObject {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UMovieScene3DConstraintTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x78
};

struct UGameViewportClient : UScriptViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct USourceEffectMidSideSpreaderPreset : USoundEffectSourcePreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
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

struct USoundNodeRandom : USoundNode {
	TArray<float> Weights; // 0x48
	TArray<bool> HasBeenUsed; // 0x58
	int32_t NumRandomUsed; // 0x68
	int32_t PreselectAtLevelLoad; // 0x6c
	char bShouldExcludeFromBranchCulling : 1; // 0x70
	char bSoundCueExcludedFromBranchCulling : 1; // 0x70
	char bRandomizeWithoutReplacement : 1; // 0x70
};

struct UPWTutorialHUDOverlayWidget : UUserWidget {
	UTextBlock* StageNameText; // 0x260
	UTextBlock* StageNumText; // 0x268
	UTextBlock* GrenadeText; // 0x270
	UPortalWarsTutorialBookmarkWidget* TutorialBookmark; // 0x278
	UPortalWarsTutorialStepsWidget* TutorialSteps; // 0x280
	UPortalWarsTutorialVideoWidget* TutorialVideo; // 0x288
	UWidgetAnimation* ExpandVideoAnimation; // 0x290
	UBackgroundBlur* VideoBackgroundBlur; // 0x298
	UPanelWidget* StepPopupPanel; // 0x2a0
	UPWTutorialStepEntryWidget* StepPopUpWidgetClass; // 0x2a8
	UWidgetAnimation* StepPopupAnimation; // 0x2b0
	UTextBlock* InputDeviceText; // 0x2c0
	UWidgetAnimation* ShowDeviceLockAnimation; // 0x2c8
	UWidgetAnimation* HideDeviceLockAnimation; // 0x2d0
	UPortalWarsTutorialVideoReminderWidget* TutorialVideoReminder; // 0x2d8
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

struct UGizmoComponentHitTarget : UObject {
	UPrimitiveComponent* Component; // 0x30
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

struct UMaterialExpressionArcsineFast : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionTangent : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UTextureRenderTargetCube : UTextureRenderTarget {
	int32_t SizeX; // 0x180
	FLinearColor ClearColor; // 0x184
	EPixelFormat OverrideFormat; // 0x194
	char bHDR : 1; // 0x195
	char bForceLinearGamma : 1; // 0x195
};

struct UBTDecorator_BlueprintBase : UBTDecorator {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct UChaosGameplayEventDispatcher : UChaosEventListenerComponent {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct USphereComponent : UShapeComponent {
	float SphereRadius; // 0x468
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

struct UAsyncActionChangePrimaryAssetBundles : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UPortalWarsCurrencyPurchaseDialog : UPortalWarsTxnDialogWidget {
	UPortalWarsPriceEntryWidget* PriceEntry; // 0x3c8
	UTextBlock* DescriptionText; // 0x3d0
	UWidget* BonusHeader; // 0x3d8
	UTextBlock* WarningText; // 0x3e0
	UPortalWarsTextInputWidget* CreatorCode; // 0x3e8
	UPortalWarsCurrencyStoreEntry* CurrencyEntry; // 0x3f0
};

struct UAIDataProvider_Random : UAIDataProvider_QueryParams {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct UEnvQueryOption : UObject {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct AOnlineBeaconHost : AOnlineBeacon {
	int32_t ListenPort; // 0x250
	TArray<AOnlineBeaconClient*> ClientActors; // 0x258
};

struct UButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FButtonStyle ButtonStyle; // 0x30
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

struct UMaterialExpressionShadowReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Shadow; // 0x54
};

struct UInterpTrackInstMove : UInterpTrackInst {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct UFieldSystemComponent : UPrimitiveComponent {
	UFieldSystem* FieldSystem; // 0x450
	bool bIsWorldField; // 0x458
	bool bIsChaosField; // 0x459
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x460
	FFieldObjectCommands ConstructionCommands; // 0x470
	FFieldObjectCommands BufferCommands; // 0x4a0
};

struct USoundNodeModulator : USoundNode {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
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

struct UPhysicsConstraintComponent : USceneComponent {
	AActor* ConstraintActor1; // 0x1f8
	FConstrainComponentPropName ComponentName1; // 0x200
	AActor* ConstraintActor2; // 0x208
	FConstrainComponentPropName ComponentName2; // 0x210
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x228
	FMulticastInlineDelegate OnConstraintBroken; // 0x230
	FConstraintInstance ConstraintInstance; // 0x240
};

struct UClickDragInputBehavior : UAnyButtonInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct UPortalWarsRewardPassEntryWidget : UPortalWarsRewardEntryWidget {
	UWidget* LockedRoot; // 0x728
	UWidget* CompletedRoot; // 0x760
	UTextBlock* LevelText; // 0x768
	UTextBlock* DisplayNameText; // 0x770
	UWidgetSwitcher* BackgroundSwitcher; // 0x780
	UWidgetAnimation* SelectedAnimation; // 0x788
};

struct UBrainComponent : UActorComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
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
	UPhysicsFieldComponent* PhysicsField; // 0x1f8
	TSet<UActorComponent*> ComponentsThatNeedPreEndOfFrameSync; // 0x200
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate; // 0x250
	TArray<UActorComponent*> ComponentsThatNeedEndOfFrameUpdate_OnGameThread; // 0x260
	UWorldComposition* WorldComposition; // 0x5e0
	FWorldPSCPool PSCPool; // 0x678
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

struct UMaterialExpressionConstant2Vector : UMaterialExpression {
	float R; // 0x40
	float G; // 0x44
};

struct USequenceCameraShakeCameraStandIn : UObject {
	float FieldOfView; // 0x30
	char bConstrainAspectRatio : 1; // 0x34
	float AspectRatio; // 0x38
	FPostProcessSettings PostProcessSettings; // 0x40
	float PostProcessBlendWeight; // 0x590
	FCameraFilmbackSettings Filmback; // 0x594
	FCameraLensSettings LensSettings; // 0x5a0
	FCameraFocusSettings FocusSettings; // 0x5b8
	float CurrentFocalLength; // 0x610
	float CurrentAperture; // 0x614
	float CurrentFocusDistance; // 0x618
};

struct UEnvQueryGenerator_PathingGrid : UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderBoolValue PathToItem; // 0x130
	UNavigationQueryFilter* NavigationFilter; // 0x168
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x170
};

struct UARPointComponent : UARComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
};

struct UBlendSpace1D : UBlendSpaceBase {
	bool bScaleAnimation; // 0x148
};

struct AGeometryCollectionDebugDrawActor : AActor {
	FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x220
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x228
	bool bDebugDrawWholeCollection; // 0x240
	bool bDebugDrawHierarchy; // 0x241
	bool bDebugDrawClustering; // 0x242
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x243
	bool bShowRigidBodyId; // 0x244
	bool bShowRigidBodyCollision; // 0x245
	bool bCollisionAtOrigin; // 0x246
	bool bShowRigidBodyTransform; // 0x247
	bool bShowRigidBodyInertia; // 0x248
	bool bShowRigidBodyVelocity; // 0x249
	bool bShowRigidBodyForce; // 0x24a
	bool bShowRigidBodyInfos; // 0x24b
	bool bShowTransformIndex; // 0x24c
	bool bShowTransform; // 0x24d
	bool bShowParent; // 0x24e
	bool bShowLevel; // 0x24f
	bool bShowConnectivityEdges; // 0x250
	bool bShowGeometryIndex; // 0x251
	bool bShowGeometryTransform; // 0x252
	bool bShowBoundingBox; // 0x253
	bool bShowFaces; // 0x254
	bool bShowFaceIndices; // 0x255
	bool bShowFaceNormals; // 0x256
	bool bShowSingleFace; // 0x257
	int32_t SingleFaceIndex; // 0x258
	bool bShowVertices; // 0x25c
	bool bShowVertexIndices; // 0x25d
	bool bShowVertexNormals; // 0x25e
	bool bUseActiveVisualization; // 0x25f
	float PointThickness; // 0x260
	float LineThickness; // 0x264
	bool bTextShadow; // 0x268
	float TextScale; // 0x26c
	float NormalScale; // 0x270
	float AxisScale; // 0x274
	float ArrowScale; // 0x278
	FColor RigidBodyIdColor; // 0x27c
	float RigidBodyTransformScale; // 0x280
	FColor RigidBodyCollisionColor; // 0x284
	FColor RigidBodyInertiaColor; // 0x288
	FColor RigidBodyVelocityColor; // 0x28c
	FColor RigidBodyForceColor; // 0x290
	FColor RigidBodyInfoColor; // 0x294
	FColor TransformIndexColor; // 0x298
	float TransformScale; // 0x29c
	FColor LevelColor; // 0x2a0
	FColor ParentColor; // 0x2a4
	float ConnectivityEdgeThickness; // 0x2a8
	FColor GeometryIndexColor; // 0x2ac
	float GeometryTransformScale; // 0x2b0
	FColor BoundingBoxColor; // 0x2b4
	FColor FaceColor; // 0x2b8
	FColor FaceIndexColor; // 0x2bc
	FColor FaceNormalColor; // 0x2c0
	FColor SingleFaceColor; // 0x2c4
	FColor VertexColor; // 0x2c8
	FColor VertexIndexColor; // 0x2cc
	FColor VertexNormalColor; // 0x2d0
	UBillboardComponent* SpriteComponent; // 0x2d8
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
	TArray<FString> PlatformCrossplayRestrictions; // 0x58
	TArray<FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; // 0x68
	bool bEnableRemovalRequests; // 0x78
	TArray<FPartyReservation> Reservations; // 0x80
};

struct UNiagaraDataInterfaceArrayInt32 : UNiagaraDataInterfaceArray {
	TArray<int32_t> IntData; // 0x50
};

struct UMaterialExpressionBreakMaterialAttributes : UMaterialExpression {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct AGameMode : AGameModeBase {
	FName MatchState; // 0x2c0
	char bDelayedStart : 1; // 0x2c8
	int32_t NumSpectators; // 0x2cc
	int32_t NumPlayers; // 0x2d0
	int32_t NumBots; // 0x2d4
	float MinRespawnDelay; // 0x2d8
	int32_t NumTravellingPlayers; // 0x2dc
	ULocalMessage* EngineMessageClass; // 0x2e0
	TArray<APlayerState*> InactivePlayerArray; // 0x2e8
	float InactivePlayerStateLifeSpan; // 0x2f8
	int32_t MaxInactivePlayers; // 0x2fc
	bool bHandleDedicatedServerReplays; // 0x300
};

struct UPortalWarsCountdownWidget : UUserWidget {
	UTextBlock* CountdownText; // 0x260
	UWidgetAnimation* CountdownAnimation; // 0x268
	UTextBlock* MapNameText; // 0x270
	UTextBlock* GameModeNameText; // 0x278
	UTextBlock* GameModeDescriptionText; // 0x280
	UTextBlock* ScoreText; // 0x288
	UTextBlock* MinutesText; // 0x290
	UTextBlock* SeparatorText; // 0x298
};

struct APortalWarsAIController : AAIController {
	UBlackboardComponent* BlackboardComp; // 0x3c0
	UBehaviorTreeComponent* BehaviorComp; // 0x3c8
	UAISenseConfig_Hearing* HearConfig; // 0x3d0
	float MinOffsetHeightPathFollowing; // 0x488
	float MaxOffsetHeightPathFollowing; // 0x48c
	float MaxOffsetLateralPathFollowing; // 0x490
};

struct UGraphNodeContextMenuContext : UObject {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct ACableActor : AActor {
	UCableComponent* CableComponent; // 0x220
};

struct UParticleModuleVelocityCone : UParticleModuleVelocityBase {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UPortalWarsGamepadBindingOverlayWidget : UPortalWarsDialogWidget {
	FMulticastInlineDelegate OnActionSelected; // 0x390
	UTextBlock* CurrentAction; // 0x3a0
	UPanelWidget* ActionPanel; // 0x3a8
	UImage* CurrentBinding; // 0x3b0
	UPortalWarsGamepadBindingCategoryWidget* CategoryClass; // 0x3b8
	UPortalWarsGamepadBindingActionWidget* ActionClass; // 0x3c0
	TArray<FGamepadBindingCategory> BindingCategories; // 0x3c8
};

struct ULevelSequenceAnimSequenceLink : UAssetUserData {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct UParticleModuleColor : UParticleModuleColorBase {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UPortalWarsGlobalCarouselWidget : UPortalWarsInputCarouselWidget {
	UImage* DisplayImage; // 0x3b8
};

struct URichTextBlockImageDecorator : URichTextBlockDecorator {
	UDataTable* ImageSet; // 0x28
};

struct UPortalWarsBPRedeemableButton : UPortalWarsRedeemableButtonWidget {
	bool bChangeBasedOnUser; // 0x500
	bool bOpenPurchaseDialogWhenClicked; // 0x501
	UPortalWarsBPPurchaseDialogWidget* PurchaseDialogWidgetClass; // 0x508
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

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UGizmoTransformChangeStateTarget : UObject {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct ACameraRig_Rail : AActor {
	float CurrentPositionOnRail; // 0x220
	bool bLockOrientationToRail; // 0x224
	USceneComponent* TransformComponent; // 0x228
	USplineComponent* RailSplineComponent; // 0x230
	USceneComponent* RailCameraMount; // 0x238
};

struct UParticleModuleAccelerationBase : UParticleModule {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UPortalWarsCopyButtonWidget : UPortalWarsButtonWidget {
	float TimeToDisplayCopiedText; // 0x3c8
};

struct UPortalWarsTakedownNotificationWidget : UUserWidget {
	UImage* TeamImage; // 0x260
	UHorizontalBox* RootHorizontalBox; // 0x268
	UTextBlock* NotificationText; // 0x270
	UTextBlock* TimeText; // 0x278
	UTextBlock* OneOnOneTimeText; // 0x280
	UWidgetSwitcher* TimeWidgetSwitcher; // 0x288
	UWidgetAnimation* FadeOutAnimation; // 0x290
	UTexture2D* BlueLastManStanding; // 0x298
	UTexture2D* RedLastManStanding; // 0x2a0
	UTexture2D* BothLastManStanding; // 0x2a8
};

struct AGameModeBase : AInfo {
	FString OptionsString; // 0x220
	AGameSession* GameSessionClass; // 0x230
	AGameStateBase* GameStateClass; // 0x238
	APlayerController* PlayerControllerClass; // 0x240
	APlayerState* PlayerStateClass; // 0x248
	AHUD* HUDClass; // 0x250
	APawn* DefaultPawnClass; // 0x258
	ASpectatorPawn* SpectatorClass; // 0x260
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x268
	AServerStatReplicator* ServerStatReplicatorClass; // 0x270
	AGameSession* GameSession; // 0x278
	AGameStateBase* GameState; // 0x280
	AServerStatReplicator* ServerStatReplicator; // 0x288
	FText DefaultPlayerName; // 0x290
	char bUseSeamlessTravel : 1; // 0x2a8
	char bStartPlayersAsSpectators : 1; // 0x2a8
	char bPauseable : 1; // 0x2a8
};

struct UHapticFeedbackEffect_Buffer : UHapticFeedbackEffect_Base {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct UBTService_DefaultFocus : UBTService_BlackboardBase {
	char FocusPriority; // 0x98
};

struct UMaterialExpressionThinTranslucentMaterialOutput : UMaterialExpressionCustomOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct UPortalWarsKOTHHillStatusWidget : UUserWidget {
	UImage* HillImage; // 0x260
	UTextBlock* TimeRemainingText; // 0x268
	UTextBlock* HillStatusText; // 0x270
	UHorizontalBox* RootHorizontalBox; // 0x278
	UTexture2D* ContestedHillTexture; // 0x280
	UTexture2D* ControlledHillTexture; // 0x288
	UTexture2D* RedControlledHillTexture; // 0x290
	FSlateColor OvertimeColor; // 0x298
};

struct UPortalWarsPostGameStatsWidget : UPortalWarsDialogWidget {
	UPanelWidget* PlayersPanel; // 0x390
	UPanelWidget* AlphaTeamPanel; // 0x398
	UPanelWidget* BravoTeamPanel; // 0x3a0
	UTextBlock* AlphaTeamNameText; // 0x3a8
	UTextBlock* BravoTeamNameText; // 0x3b0
	UTextBlock* AlphaTeamScoreText; // 0x3b8
	UTextBlock* BravoTeamScoreText; // 0x3c0
	UWidget* TeamRoot; // 0x3c8
	UWidget* FFARoot; // 0x3d0
	UPortalWarsPostGamePlayerEntry* PlayerEntryWidgetClass; // 0x3d8
};

struct UNiagaraDataInterfaceVector2DCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
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

struct APortalWarsPostGameState : APortalWarsLobbyGameState {
	bool bIsContinuousLobby; // 0x840
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

struct UParticleModuleVectorFieldScaleOverLife : UParticleModuleVectorFieldBase {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct UAudioCurveSourceComponent : UAudioComponent {
	FName CurveSourceBindingName; // 0x868
	float CurveSyncOffset; // 0x870
};

struct UEnvQueryGenerator_ProjectedPoints : UEnvQueryGenerator {
	FEnvTraceData ProjectionData; // 0x50
	FEnvTraceData ProjectionDataOverride; // 0x80
};

struct APrecomputedVisibilityOverrideVolume : AVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x258
	TArray<AActor*> OverrideInvisibleActors; // 0x268
	TArray<FName> OverrideInvisibleLevels; // 0x278
};

struct UARTrackedQRCode : UARTrackedImage {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
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

struct UARGeoAnchorComponent : UARComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct UBTDecorator_Probability : UBTDecorator {
	float SuccessChance; // 0x68
};

struct UDrawFrustumComponent : UPrimitiveComponent {
	FColor FrustumColor; // 0x450
	float FrustumAngle; // 0x454
	float FrustumAspectRatio; // 0x458
	float FrustumStartDist; // 0x45c
	float FrustumEndDist; // 0x460
	UTexture* Texture; // 0x468
};

struct UInterpTrackVisibility : UInterpTrack {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
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
	int32_t UvSetIndex; // 0xbc
	bool bRequireCurrentFrameData; // 0xc0
};

struct UMaterialExpressionCrossProduct : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct USkeletalMeshSocket : UObject {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct UMovieSceneEnumTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xa8
};

struct USteamNetConnection : UIpConnection {
	bool bIsPassthrough; // 0x1c48
};

struct UInterpTrackAkAudioRTPC : UInterpTrackFloatBase {
	FString Param; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0
};

struct UConstantCameraShakePattern : USimpleCameraShakePattern {
	FVector LocationOffset; // 0x38
	FRotator RotationOffset; // 0x44
};

struct UHighlightsConfigureAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UMaterialExpressionParticleSubUV : UMaterialExpressionTextureSample {
	char bBlend : 1; // 0x60
};

struct UAISense_Sight : UAISense {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct UPortalWarsPlaylistSelectWidget : UPortalWarsMenuWidget {
	UPortalWarsPlaylistEntryWidget* PlaylistEntryWidgetClass; // 0x338
	UPanelWidget* PlaylistPanel; // 0x340
	UPortalWarsPlaylistCrossplayDialogWidget* PlaylistCrossplayDialogWidgetClass; // 0x348
	UPortalWarsButtonWidget* PlayButton; // 0x350
	UWidget* SeasonRewards; // 0x358
	UTextBlock* NoteText; // 0x360
	UWidget* NoteRoot; // 0x368
};

struct ALevelSequenceActor : AActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230
	ULevelSequencePlayer* SequencePlayer; // 0x248
	FSoftObjectPath LevelSequence; // 0x250
	FLevelSequenceCameraSettings CameraSettings; // 0x268
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x270
	UMovieSceneBindingOverrides* BindingOverrides; // 0x278
	char bAutoPlay : 1; // 0x280
	char bOverrideInstanceData : 1; // 0x280
	char bReplicatePlayback : 1; // 0x280
	UObject* DefaultInstanceData; // 0x288
	ULevelSequenceBurnIn* BurnInInstance; // 0x290
	bool bShowBurnin; // 0x298
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

struct UBTDecorator : UBTAuxiliaryNode {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct ASpotLight : ALight {
	USpotLightComponent* SpotLightComponent; // 0x230
};

struct UAISystemBase : UObject {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct USynthComponentMonoWaveTable : USynthComponent {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
};

struct UMaterialExpressionRuntimeVirtualTextureOutput : UMaterialExpressionCustomOutput {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Specular; // 0x54
	FExpressionInput Roughness; // 0x68
	FExpressionInput Normal; // 0x7c
	FExpressionInput WorldHeight; // 0x90
	FExpressionInput Opacity; // 0xa4
	FExpressionInput mask; // 0xb8
};

struct APortalWarsCTFHUD : APortalWarsHUD {
	UPortalWarsFlagIndicatorWidget* AlphaTeamIndicator; // 0x400
	UPortalWarsFlagIndicatorWidget* BravoTeamIndicator; // 0x408
	UPortalWarsIndicatorWidget* FlagIndicatorWidgetClass; // 0x410
	UPortalWarsIndicatorWidget* FlagCaptureZoneWidgetClass; // 0x418
	UPortalWarsCTFHUDOverlayWidget* CTFHUDOverlayWidget; // 0x420
	UPortalWarsCTFHUDOverlayWidget* CTFHUDOverlayWidgetClass; // 0x428
};

struct UDatasmithLandscapeTemplate : UDatasmithObjectTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct UParticleSystem : UFXSystemAsset {
	float UpdateTime_FPS; // 0x30
	float UpdateTime_Delta; // 0x34
	float WarmupTime; // 0x38
	float WarmupTickRate; // 0x3c
	TArray<UParticleEmitter*> Emitters; // 0x40
	UParticleSystemComponent* PreviewComponent; // 0x50
	UInterpCurveEdSetup* CurveEdSetup; // 0x58
	float LODDistanceCheckTime; // 0x60
	float MacroUVRadius; // 0x64
	TArray<float> LODDistances; // 0x68
	TArray<FParticleSystemLOD> LODSettings; // 0x78
	FBox FixedRelativeBoundingBox; // 0x88
	float SecondsBeforeInactive; // 0xa4
	float Delay; // 0xa8
	float DelayLow; // 0xac
	char bOrientZAxisTowardCamera : 1; // 0xb0
	char bUseFixedRelativeBoundingBox : 1; // 0xb0
	char bShouldResetPeakCounts : 1; // 0xb0
	char bHasPhysics : 1; // 0xb0
	char bUseRealtimeThumbnail : 1; // 0xb0
	char ThumbnailImageOutOfDate : 1; // 0xb0
	char bUseDelayRange : 1; // 0xb1
	char bAllowManagedTicking : 1; // 0xb1
	char bAutoDeactivate : 1; // 0xb1
	char bRegenerateLODDuplicate : 1; // 0xb1
	EParticleSystemUpdateMode SystemUpdateMode; // 0xb2
	ParticleSystemLODMethod LODMethod; // 0xb3
	EParticleSystemInsignificanceReaction InsignificantReaction; // 0xb4
	EParticleSystemOcclusionBoundsMethod OcclusionBoundsMethod; // 0xb5
	EParticleSignificanceLevel MaxSignificanceLevel; // 0xb7
	uint32_t MinTimeBetweenTicks; // 0xb8
	float InsignificanceDelay; // 0xbc
	FVector MacroUVPosition; // 0xc0
	FBox CustomOcclusionBounds; // 0xcc
	TArray<FLODSoloTrack> SoloTracking; // 0xe8
	TArray<FNamedEmitterMaterial> NamedMaterialSlots; // 0xf8
};

struct AGrenadeLauncher : AProjectileGun {
	char CurrentGrenades; // 0x6e8
	char NumStartingGrenades; // 0x6e9
	char MaxGrenades; // 0x6ea
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

struct UPortalWarsXPUpdateEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* XPText; // 0x420
	UWidgetAnimation* FadeUpAnimation; // 0x428
	UAkAudioEvent* PopupEvent; // 0x450
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

struct UPortalWarsRedeemKeyDialogWidget : UPortalWarsTxnDialogWidget {
	UEditableTextBox* KeyInput; // 0x3c8
};

struct APortalWarsTakedownVIPGameState : APortalWarsTakedownGameState {
	APortalWarsPlayerState* SurvivingVIP; // 0x828
	TMap<int32_t, APortalWarsPlayerState*> VIPs; // 0x830
};

struct UPhysicsAsset : UObject {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	EPhysicsAssetSolverType SolverType; // 0x7c
	char bNotForDedicatedServer : 1; // 0x7d
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
};

struct UCameraShakeSourceComponent : USceneComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
};

struct UWidgetAnimation : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct UMonoWaveTableSynthPreset : UObject {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UGetGeoLocationAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UInterpTrackFloatMaterialParam : UInterpTrackFloatBase {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UPortalWarsPlayerActionsWidget : UPortalWarsMenuSelectWidget {
	UPortalWarsReportPlayerWidget* ReportMenu; // 0x3b0
	UPortalWarsButtonWidget* ReportButton; // 0x3b8
	UPortalWarsButtonWidget* ViewProfileButton; // 0x3c0
	float ResetInviteDelay; // 0x3c8
	UPortalWarsButtonWidget* PartyInviteButton; // 0x3e0
	UPortalWarsButtonWidget* GameInviteButton; // 0x3e8
	float ResetFriendDelay; // 0x3f0
	UPortalWarsButtonWidget* AddFriendButton; // 0x408
	UPortalWarsButtonWidget* RemoveFriendButton; // 0x410
	float ResetBlockDelay; // 0x418
	UPortalWarsButtonWidget* BlockButton; // 0x430
	UPortalWarsButtonWidget* UnblockButton; // 0x438
	UPortalWarsButtonWidget* MuteButton; // 0x440
	UPortalWarsButtonWidget* KickButton; // 0x448
	UPortalWarsPlayerEntryWidget* PlayerEntry; // 0x450
};

struct UMaterialExpressionTemporalSobol : UMaterialExpression {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct USimpleCameraShakePattern : UCameraShakePattern {
	float Duration; // 0x28
	float BlendInTime; // 0x2c
	float BlendOutTime; // 0x30
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
	FMulticastInlineDelegate OnPressed; // 0x3d8
	FMulticastInlineDelegate OnReleased; // 0x3e8
	FMulticastInlineDelegate OnHovered; // 0x3f8
	FMulticastInlineDelegate OnUnhovered; // 0x408
};

struct UWidgetBlueprintGeneratedClass : UBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
};

struct UBTTaskNode_FindNearbyPortalWall : UBTTaskNode {
	float NearPortalWallRadius; // 0x70
};

struct UBTTask_RotateToFaceBBEntry : UBTTask_BlackboardBase {
	float Precision; // 0x98
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

struct UPortalWarsNameTagWidget : UUserWidget {
	UTextBlock* NameTagText; // 0x260
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

struct UMaterialExpressionFontSample : UMaterialExpression {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UMovieSceneLevelVisibilitySection : UMovieSceneSection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UARTexture : UTexture {
	EARTextureType TextureType; // 0x178
	float Timestamp; // 0x17c
	FGuid ExternalTextureGuid; // 0x180
	FVector2D Size; // 0x190
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UInterpTrackInstToggle : UInterpTrackInst {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct UInterpTrackInstAnimControl : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UMaterialExpressionFontSampleParameter : UMaterialExpressionFontSample {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
};

struct UPortalWarsLootboxWidget : UPortalWarsInspectWidget {
	TMap<ECustomizationRarity, UAkAudioEvent*> RaritySounds; // 0x3e8
	UPortalWarsButtonWidget* OpenButton; // 0x438
	UWidget* OpenRoot; // 0x440
	UPortalWarsButtonWidget* CatchButton; // 0x448
	UWidget* CatchRoot; // 0x450
	UAkAudioEvent* LootboxSequenceStartEvent; // 0x458
	UAkAudioEvent* LootboxSequenceEndEvent; // 0x460
	UAkAudioEvent* LootboxSequenceStopEvent; // 0x468
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

struct URendererOverrideSettings : UDeveloperSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
};

struct UMaterialExpressionTransform : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct UMaterialExpressionLandscapeLayerCoords : UMaterialExpression {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UMovieSceneColorSection : UMovieSceneSection {
	FMovieSceneFloatChannel RedCurve; // 0xf0
	FMovieSceneFloatChannel GreenCurve; // 0x190
	FMovieSceneFloatChannel BlueCurve; // 0x230
	FMovieSceneFloatChannel AlphaCurve; // 0x2d0
};

struct AGameNetworkManager : AInfo {
	float BadPacketLossThreshold; // 0x220
	float SeverePacketLossThreshold; // 0x224
	int32_t BadPingThreshold; // 0x228
	int32_t SeverePingThreshold; // 0x22c
	int32_t AdjustedNetSpeed; // 0x230
	float LastNetSpeedUpdateTime; // 0x234
	int32_t TotalNetBandwidth; // 0x238
	int32_t MinDynamicBandwidth; // 0x23c
	int32_t MaxDynamicBandwidth; // 0x240
	char bIsStandbyCheckingEnabled : 1; // 0x244
	char bHasStandbyCheatTriggered : 1; // 0x244
	float StandbyRxCheatTime; // 0x248
	float StandbyTxCheatTime; // 0x24c
	float PercentMissingForRxStandby; // 0x250
	float PercentMissingForTxStandby; // 0x254
	float PercentForBadPing; // 0x258
	float JoinInProgressStandbyWaitTime; // 0x25c
	float MoveRepSize; // 0x260
	float MAXPOSITIONERRORSQUARED; // 0x264
	float MAXNEARZEROVELOCITYSQUARED; // 0x268
	float CLIENTADJUSTUPDATECOST; // 0x26c
	float MAXCLIENTUPDATEINTERVAL; // 0x270
	float MaxClientForcedUpdateDuration; // 0x274
	float ServerForcedUpdateHitchThreshold; // 0x278
	float ServerForcedUpdateHitchCooldown; // 0x27c
	float MaxMoveDeltaTime; // 0x280
	float MaxClientSmoothingDeltaTime; // 0x284
	float ClientNetSendMoveDeltaTime; // 0x288
	float ClientNetSendMoveDeltaTimeThrottled; // 0x28c
	float ClientNetSendMoveDeltaTimeStationary; // 0x290
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x294
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x298
	bool ClientAuthorativePosition; // 0x29c
	float ClientErrorUpdateRateLimit; // 0x2a0
	float ClientNetCamUpdateDeltaTime; // 0x2a4
	float ClientNetCamUpdatePositionLimit; // 0x2a8
	bool bMovementTimeDiscrepancyDetection; // 0x2ac
	bool bMovementTimeDiscrepancyResolution; // 0x2ad
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2b0
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2b4
	float MovementTimeDiscrepancyResolutionRate; // 0x2b8
	float MovementTimeDiscrepancyDriftAllowance; // 0x2bc
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2c0
	bool bUseDistanceBasedRelevancy; // 0x2c1
};

struct UPanelWidget : UWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UBTTask_GameplayTaskBase : UBTTaskNode {
	char bWaitForGameplayTask : 1; // 0x70
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

struct UMaterialExpressionVectorParameter : UMaterialExpressionParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UNiagaraDataInterfaceArrayFloat : UNiagaraDataInterfaceArray {
	TArray<float> FloatData; // 0x50
};

struct UDistributionFloat : UDistribution {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UMovieSceneTrackInstance : UObject {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct UAnimCompress : UAnimBoneCompressionCodec {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
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

struct UInitHighlights : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UClothLODDataCommon_Legacy : UObject {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct USourceEffectDynamicsProcessorPreset : USoundEffectSourcePreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct UAITask_MoveTo : UAITask {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UEnvQueryTest_Overlap : UEnvQueryTest {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct UAnimSequenceLevelSequenceLink : UAssetUserData {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct UPointLightComponent : ULocalLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x340
	float LightFalloffExponent; // 0x344
	float SourceRadius; // 0x348
	float SoftSourceRadius; // 0x34c
	float SourceLength; // 0x350
};

struct UOnlineEngineInterfaceImpl : UOnlineEngineInterface {
	TMap<FName, FName> MappedUniqueNetIdTypes; // 0x28
	TArray<FName> CompatibleUniqueNetIdTypes; // 0x78
	FName VoiceSubsystemNameOverride; // 0x88
};

struct UPortalWarsUserWidget : UUserWidget {
	EWidgetPlatformVisibility PlatformVisibility; // 0x28d
	bool bIsDuplicate; // 0x298
	bool bIsDeferred; // 0x299
	UPortalWarsUserWidget* DeferredWidgetBPClass; // 0x2a0
};

struct APortalWarsTakedownVIP : APortalWarsTakedown {
	TArray<TSoftClassPtr<UObject>> VIPDefaultInventoryClasses; // 0x6d8
	APortalWarsTakedownVIPGameState* TakedownVIPGameState; // 0x6e8
	int32_t VIPKillScore; // 0x6f0
};

struct USoundBase : UObject {
	USoundClass* SoundClassObject; // 0x30
	char bDebug : 1; // 0x38
	char bOverrideConcurrency : 1; // 0x38
	char bEnableBusSends : 1; // 0x38
	char bEnableBaseSubmix : 1; // 0x38
	char bEnableSubmixSends : 1; // 0x38
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
	USoundSubmixBase* SoundSubmixObject; // 0x120
	TArray<FSoundSubmixSendInfo> SoundSubmixSends; // 0x128
	USoundEffectSourcePresetChain* SourceEffectChain; // 0x138
	TArray<FSoundSourceBusSendInfo> BusSends; // 0x140
	TArray<FSoundSourceBusSendInfo> PreEffectBusSends; // 0x150
	TArray<UAssetUserData*> AssetUserData; // 0x160
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

struct UBoxReflectionCaptureComponent : UReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x270
	UBoxComponent* PreviewInfluenceBox; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct UPortalWarsButtonWidget : UPortalWarsUserWidget {
	FMulticastInlineDelegate OnClicked; // 0x2a8
	FMulticastInlineDelegate OnDoubleClicked; // 0x2b8
	FMulticastInlineDelegate OnHovered; // 0x2c8
	FMulticastInlineDelegate OnUnhovered; // 0x2d8
	FMulticastInlineDelegate OnEnabledStateChanged; // 0x2e8
	UPortalWarsButton* Button; // 0x2f8
	UPortalWarsButtonWidget* ButtonWidget; // 0x300
	bool bDebounce; // 0x308
	float DebounceTime; // 0x30c
	UAkAudioEvent* PressedEvent; // 0x310
	UAkAudioEvent* HoveredEvent; // 0x318
	UWidgetAnimation* HoverAnimation; // 0x320
	bool bTrackButtonEvents; // 0x328
	FString ButtonInternalName; // 0x330
	FText Title; // 0x340
	UTextBlock* TitleText; // 0x358
	FKey GamepadKey; // 0x360
	bool bBindToGamepadButton; // 0x378
	UTexture2D* GamepadKeyIcon; // 0x398
	UWidgetSwitcher* ConsoleSwitcher; // 0x3a0
	UWidget* NewIndicator; // 0x3a8
	UTextBlock* newText; // 0x3b0
};

struct UAISense_Blueprint : UAISense {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct APortalWarsNeutralCTFHUD : APortalWarsHUD {
	UPortalWarsFlagIndicatorWidget* TeamIndicator; // 0x400
	UPortalWarsIndicatorWidget* FlagIndicatorWidgetClass; // 0x408
	UPortalWarsIndicatorWidget* FlagCaptureZoneWidgetClass; // 0x410
	UPortalWarsCTFHUDOverlayWidget* CTFHUDOverlayWidget; // 0x418
	UPortalWarsCTFHUDOverlayWidget* CTFHUDOverlayWidgetClass; // 0x420
};

struct UToIntegerField : UFieldNodeInt {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct APortalWarsTeabagConfirmed : APortalWarsGameMode {
	APortalWarsTeabagZone* TeabagZoneClass; // 0x6a8
};

struct ULevelStreamingDynamic : ULevelStreaming {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct UPortalWarsVideoSettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsDropdownWidget* DisplayMode; // 0x358
	UPortalWarsDropdownWidget* Resolution; // 0x360
	UPortalWarsSpinSliderWidget* ResolutionScale; // 0x368
	UPortalWarsSpinSliderWidget* FOV; // 0x370
	UPortalWarsCheckBoxWidget* VSync; // 0x378
	UPortalWarsDropdownWidget* NVIDIAReflex; // 0x380
	UPortalWarsCheckBoxWidget* LatencyMarkers; // 0x388
	UPortalWarsCheckBoxWidget* LatencyFlash; // 0x390
	UPortalWarsDropdownWidget* ViewDistance; // 0x398
	UPortalWarsDropdownWidget* PostProcess; // 0x3a0
	UPortalWarsDropdownWidget* Shadows; // 0x3a8
	UPortalWarsDropdownWidget* Textures; // 0x3b0
	UPortalWarsDropdownWidget* Effects; // 0x3b8
	UPortalWarsDropdownWidget* AntiAliasing; // 0x3c0
	UPortalWarsDropdownWidget* PortalQuality; // 0x3c8
	UPortalWarsDropdownWidget* PortalFrameRate; // 0x3d0
	UPortalWarsSpinSliderWidget* FrameRateLimit; // 0x3d8
	UPortalWarsDropdownWidget* ColorblindMode; // 0x3e0
	UPortalWarsSpinSliderWidget* ColorblindModeIntensity; // 0x3e8
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

struct UPWTutorialStepEntryWidget : UPortalWarsUserWidget {
	UTextBlock* DescriptionText; // 0x2a8
	UPortalWarsInputDecoratorWidget* InputDecorator; // 0x2b0
	UWidgetSwitcher* CompletedSwitcher; // 0x2b8
};

struct UGeometryCache : UObject {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
	uint64_t Hash; // 0x68
};

struct UBTDecorator_DoesPathExist : UBTDecorator {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UTextureRenderTarget2D : UTextureRenderTarget {
	int32_t SizeX; // 0x180
	int32_t SizeY; // 0x184
	FLinearColor ClearColor; // 0x188
	TextureAddress AddressX; // 0x198
	TextureAddress AddressY; // 0x199
	char bForceLinearGamma : 1; // 0x19a
	char bHDR : 1; // 0x19a
	char bGPUSharedFlag : 1; // 0x19a
	ETextureRenderTargetFormat RenderTargetFormat; // 0x19b
	char bAutoGenerateMips : 1; // 0x19c
	TextureFilter MipsSamplerFilter; // 0x19d
	TextureAddress MipsAddressU; // 0x19e
	TextureAddress MipsAddressV; // 0x19f
	EPixelFormat OverrideFormat; // 0x1a0
};

struct UMovieSceneAkAudioEventSection : UMovieSceneSection {
	UAkAudioEvent* Event; // 0x128
	bool RetriggerEvent; // 0x130
	int32_t ScrubTailLengthMs; // 0x134
	bool StopAtSectionEnd; // 0x138
	FString EventName; // 0x140
	float MaxSourceDuration; // 0x170
	FString MaxDurationSourceID; // 0x178
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

struct UInteractiveGizmoManager : UObject {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
};

struct AStaticMeshActor : AActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x220
	bool bStaticMeshReplicateMovement; // 0x228
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x229
};

struct ASkyLight : AInfo {
	USkyLightComponent* LightComponent; // 0x220
	char bEnabled : 1; // 0x228
};

struct UParticleModuleVelocityOverLifetime : UParticleModuleVelocityBase {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct UParticleModuleEventReceiverBase : UParticleModuleEventBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct UTreeView : UListView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
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

struct UDefaultLevelSequenceInstanceData : UObject {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
};

struct UARTrackedImage : UARTrackedGeometry {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
};

struct UParticleModuleVectorFieldRotationRate : UParticleModuleVectorFieldBase {
	FVector RotationRate; // 0x30
};

struct APortalWarsOddballGameState : APortalWarsGameState {
	AActor* Oddball; // 0x7c8
	EBallState OddballState; // 0x7d0
};

struct UPortalWarsNameIndicatorWidget : UPortalWarsIndicatorWidget {
	UTextBlock* FriendlyPlayerNameText; // 0x2c0
	UTextBlock* EnemyPlayerNameText; // 0x2c8
	UWidget* BlueEnemyIndicator; // 0x2d0
	UWidget* RedEnemyIndicator; // 0x2d8
	UWidget* FriendlyDeathMarker; // 0x2e0
	UWidget* EnemyDeathMarker; // 0x2e8
	UWidgetSwitcher* NameSwitcher; // 0x2f0
};

struct UPortalWarsCurrencyStoreEntry : UPortalWarsEntryWidget {
	UTextBlock* CurrencyText; // 0x430
	UImage* DisplayImage; // 0x438
	int32_t PurchasableId; // 0x520
	FLinearColor DefaultSubtitleColor; // 0x524
	FLinearColor HoveredSubtitleColor; // 0x534
	bool bIsFeatured; // 0x544
};

struct UDatasmithActorTemplate : UDatasmithObjectTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct UParticleModuleLocationPrimitiveSphere_Seeded : UParticleModuleLocationPrimitiveSphere {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
};

struct UPortalWarsReplayPlayerWidget : UPortalWarsScoreboardPlayerWidget {
	UTexture2D* BlueSelectedBackgroundImage; // 0x360
	UTexture2D* RedSelectedBackgroundImage; // 0x368
	UProgressBar* HealthBar; // 0x370
	UTextBlock* PlayerNameText; // 0x378
	UButton* Button; // 0x380
};

struct UPortalWarsLeaderboardWidget : UPortalWarsUserWidget {
	UWidgetSwitcher* WidgetSwitcher; // 0x2b8
	UTextBlock* ErrorText; // 0x2c0
	UPortalWarsLeaderboardEntryWidget* LeaderboardEntryWidgetClass; // 0x2c8
	UPanelWidget* LeaderboardPanel; // 0x2d0
	ELeaderboardType LeaderboardType; // 0x2d9
	bool bUsedCachedLeaderboard; // 0x2f0
};

struct UMeshComponent : UPrimitiveComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x450
	char bEnableMaterialParameterCaching : 1; // 0x470
};

struct UCanvasPanelSlot : UPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UNiagaraDataInterfaceColorCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve RedCurve; // 0x70
	FRichCurve GreenCurve; // 0xf0
	FRichCurve BlueCurve; // 0x170
	FRichCurve AlphaCurve; // 0x1f0
};

struct UMaterialExpressionShadingPathSwitch : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct AControlPointMeshActor : AActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x220
};

struct USubmixEffectSubmixEQPreset : USoundEffectSubmixPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct AGeometryCollectionRenderLevelSetActor : AActor {
	UVolumeTexture* TargetVolumeTexture; // 0x220
	UMaterial* RayMarchMaterial; // 0x228
	float SurfaceTolerance; // 0x230
	float Isovalue; // 0x234
	bool Enabled; // 0x238
	bool RenderVolumeBoundingBox; // 0x239
};

struct UPortalWarsItemShopWidget : UPortalWarsMenuWidget {
	UPortalWarsItemShopSectionWidget* ItemShopSectionWidgetClass; // 0x338
	UPortalWarsItemShopSectionWidget* BattlePassSection; // 0x340
	UPortalWarsItemShopSectionWidget* BattlePassSectionWidgetClass; // 0x348
	UPortalWarsItemShopSectionWidget* CurrencySection; // 0x350
	UPortalWarsItemShopSectionWidget* CurrencySectionWidgetClass; // 0x358
	UPortalWarsNavBarWidget* ScrollNavBar; // 0x360
	UScrollBox* ItemsPanel; // 0x370
	UButton* PreviousButton; // 0x380
	UButton* NextButton; // 0x388
	UPortalWarsItemShopInspectWidget* InspectWidget; // 0x390
};

struct UAudioSettings : UDeveloperSettings {
	FSoftObjectPath DefaultSoundClassName; // 0x38
	FSoftObjectPath DefaultMediaSoundClassName; // 0x50
	FSoftObjectPath DefaultSoundConcurrencyName; // 0x68
	FSoftObjectPath DefaultBaseSoundMix; // 0x80
	FSoftObjectPath VoiPSoundClass; // 0x98
	FSoftObjectPath MasterSubmix; // 0xb0
	FSoftObjectPath BaseDefaultSubmix; // 0xc8
	FSoftObjectPath ReverbSubmix; // 0xe0
	FSoftObjectPath EQSubmix; // 0xf8
	EVoiceSampleRate VoiPSampleRate; // 0x110
	float DefaultReverbSendLevel; // 0x114
	int32_t MaximumConcurrentStreams; // 0x118
	float GlobalMinPitchScale; // 0x11c
	float GlobalMaxPitchScale; // 0x120
	TArray<FAudioQualitySettings> QualityLevels; // 0x128
	char bAllowPlayWhenSilent : 1; // 0x138
	char bDisableMasterEQ : 1; // 0x138
	char bAllowCenterChannel3DPanning : 1; // 0x138
	uint32_t NumStoppingSources; // 0x13c
	EPanningMethod PanningMethod; // 0x140
	EMonoChannelUpmixMethod MonoChannelUpmixMethod; // 0x141
	FString DialogueFilenameFormat; // 0x148
	TArray<FSoundDebugEntry> DebugSounds; // 0x158
	TArray<FDefaultAudioBusSettings> DefaultAudioBuses; // 0x168
};

struct UBehaviorTreeManager : UObject {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
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

struct UPortalWarsPostGameLobbyWidget : UPortalWarsLobbyWidget {
	UWidget* PrevGameRoot; // 0x2f8
	UTextBlock* MapNameText; // 0x300
	UTextBlock* ModeNameText; // 0x308
	UWidgetSwitcher* ScoreSwitcher; // 0x310
	UTextBlock* AlphaScoreText; // 0x318
	UTextBlock* BravoScoreText; // 0x320
	UTextBlock* WinnerNameText; // 0x328
	UTextBlock* WinnerScoreText; // 0x330
	UTextBlock* TimerText; // 0x338
	UWidget* TimerRoot; // 0x340
	UPortalWarsButtonWidget* RequeueButton; // 0x348
	UPortalWarsButtonWidget* ReadyButton; // 0x350
	UPortalWarsButtonWidget* ItemShopButton; // 0x358
	UTextBlock* ActionText; // 0x360
	UWidgetSwitcher* TimerSwitcher; // 0x368
};

struct UARObjectComponent : UARComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
};

struct UPortalWarsPostGameCardWidget : UUserWidget {
	UTextBlock* ValueText; // 0x260
	UTextBlock* TypeText; // 0x268
	FLinearColor DefaultTypeColor; // 0x270
	FLinearColor GoldTypeColor; // 0x280
	UTextBlock* LifetimeAvgText; // 0x290
	FLinearColor DefaultLifetimeAvgColor; // 0x298
	FLinearColor IncreaseLifetimeAvgColor; // 0x2a8
	FLinearColor GoldLifetimeAvgColor; // 0x2b8
	UImage* BackgroundImage; // 0x2c8
	UTexture2D* DefaultBackgroundImage; // 0x2d0
	UTexture2D* IncreaseBackgroundImage; // 0x2d8
	UTexture2D* GoldBackgroundImage; // 0x2e0
	UImage* MedalImage; // 0x2e8
	TMap<int32_t, UTexture2D*> MedalImages; // 0x2f0
	UImage* IncreaseIcon; // 0x340
	UTexture2D* DefaultIncreaseImage; // 0x348
	UTexture2D* GoldIncreaseImage; // 0x350
	FMulticastInlineDelegate OnFadeInAnimationCompleted; // 0x358
	FMulticastInlineDelegate OnSecondaryAnimationCompleted; // 0x368
	UWidgetAnimation* FadeInAnimation; // 0x378
	UWidgetAnimation* MedalAnimation; // 0x380
	UWidgetAnimation* IncreaseAnimation; // 0x388
	UAkAudioEvent* FadeInEvent; // 0x390
	UAkAudioEvent* IncreaseEvent; // 0x398
	TMap<int32_t, UAkAudioEvent*> MedalEvents; // 0x3a0
	UWidget* RootWidget; // 0x3f0
};

struct UAnimNotify_PlayParticleEffect : UAnimNotify {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UBTComposite_SimpleParallel : UBTCompositeNode {
	EBTParallelMode FinishMode; // 0x90
};

struct UFieldSystemMetaDataIteration : UFieldSystemMetaData {
	int32_t Iterations; // 0xb0
};

struct USlateVectorArtData : UObject {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct UMovieSceneSequencePlayer : UObject {
	FMulticastInlineDelegate OnPlay; // 0x418
	FMulticastInlineDelegate OnPlayReverse; // 0x428
	FMulticastInlineDelegate OnStop; // 0x438
	FMulticastInlineDelegate OnPause; // 0x448
	FMulticastInlineDelegate OnFinished; // 0x458
	EMovieScenePlayerStatus Status; // 0x468
	char bReversePlayback : 1; // 0x46c
	UMovieSceneSequence* Sequence; // 0x470
	FFrameNumber StartTime; // 0x478
	int32_t DurationFrames; // 0x47c
	float DurationSubFrames; // 0x480
	int32_t CurrentNumLoops; // 0x484
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x488
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x4a0
	FMovieSceneSequenceReplProperties NetSyncProps; // 0x5f0
	TScriptInterface<IMovieScenePlaybackClient> PlaybackClient; // 0x600
	UMovieSceneSequenceTickManager* TickManager; // 0x610
};

struct UNavModifierComponent : UNavRelevantComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct UDatasmithStaticMeshGLTFImportData : UDatasmithStaticMeshImportData {
	FString SourceMeshName; // 0x28
};

struct UMovieSceneByteTrack : UMovieScenePropertyTrack {
	UEnum* Enum; // 0xa8
};

struct UMovieSceneSpawnTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	FGuid ObjectGuid; // 0x88
};

struct UPortalWarsColorPickerWidget : UPortalWarsInputWidget {
	UPortalWarsSpinSliderWidget* RedSlider; // 0x368
	UPortalWarsSpinSliderWidget* GreenSlider; // 0x370
	UPortalWarsSpinSliderWidget* BlueSlider; // 0x378
	UWidget* SliderRoot; // 0x380
	UCheckBox* SliderToggle; // 0x388
};

struct UMaterialExpressionBlackBody : UMaterialExpression {
	FExpressionInput Temp; // 0x40
};

struct ADominationHill : AActor {
	EDOMHillState HillState; // 0x220
	UMaterialInstance* DefaultHillMaterial; // 0x228
	UMaterialInstance* BlueHillMaterial; // 0x230
	UMaterialInstance* RedHillMaterial; // 0x238
	UMaterialInstance* DefaultParticleMaterial; // 0x240
	UMaterialInstance* BlueParticleMaterial; // 0x248
	UMaterialInstance* RedParticleMaterial; // 0x250
	USceneComponent* reachableLocComponent; // 0x258
	FString HillName; // 0x260
	UPortalWarsDOMHillIndicator* Indicator; // 0x270
	float timeToCaptureHill; // 0x278
	float timeCapturingHill; // 0x27c
	TArray<int32_t> TeamCount; // 0x288
	bool bIsActive; // 0x2c0
	UStaticMeshComponent* Mesh; // 0x2c8
	UStaticMeshComponent* OverlapMesh; // 0x2d0
};

struct UPortalWarsHappyHourStatusWidget : UUserWidget {
	UTextBlock* HappyHourText; // 0x268
	UTextBlock* TimeRemainingText; // 0x270
	UWidgetSwitcher* StatusSwitcher; // 0x278
};

struct UTextRenderComponent : UPrimitiveComponent {
	FText Text; // 0x450
	UMaterialInterface* TextMaterial; // 0x468
	UFont* Font; // 0x470
	EHorizTextAligment HorizontalAlignment; // 0x478
	EVerticalTextAligment VerticalAlignment; // 0x479
	FColor TextRenderColor; // 0x47c
	float XScale; // 0x480
	float YScale; // 0x484
	float WorldSize; // 0x488
	float InvDefaultSize; // 0x48c
	float HorizSpacingAdjust; // 0x490
	float VertSpacingAdjust; // 0x494
	char bAlwaysRenderAsText : 1; // 0x498
};

struct ULevelActorContainer : UObject {
	TArray<AActor*> Actors; // 0x28
};

struct UAsyncTask_LoadXRDeviceVisComponent : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct UStaticMesh : UStreamableRenderAsset {
	FPerPlatformInt MinLOD; // 0x80
	float LpvBiasMultiplier; // 0x84
	TArray<FStaticMaterial> StaticMaterials; // 0x88
	float LightmapUVDensity; // 0x98
	int32_t LightMapResolution; // 0x9c
	int32_t LightMapCoordinateIndex; // 0xa0
	float DistanceFieldSelfShadowBias; // 0xa4
	UBodySetup* BodySetup; // 0xa8
	int32_t LODForCollision; // 0xb0
	char bGenerateMeshDistanceField : 1; // 0xb4
	char bStripComplexCollisionForConsole : 1; // 0xb4
	char bHasNavigationData : 1; // 0xb4
	char bSupportUniformlyDistributedSampling : 1; // 0xb4
	char bSupportPhysicalMaterialMasks : 1; // 0xb4
	char bSupportRayTracing : 1; // 0xb4
	char bIsBuiltAtRuntime : 1; // 0xb4
	char bAllowCPUAccess : 1; // 0xb5
	char bSupportGpuUniformlyDistributedSampling : 1; // 0xb5
	TArray<UStaticMeshSocket*> Sockets; // 0xd8
	FVector PositiveBoundsExtension; // 0xf8
	FVector NegativeBoundsExtension; // 0x104
	FBoxSphereBounds ExtendedBounds; // 0x110
	int32_t ElementToIgnoreForTexFactor; // 0x12c
	TArray<UAssetUserData*> AssetUserData; // 0x130
	UObject* EditableMesh; // 0x140
	UNavCollisionBase* NavCollision; // 0x148
};

struct AController : AActor {
	APlayerState* PlayerState; // 0x228
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x238
	FName StateName; // 0x248
	APawn* Pawn; // 0x250
	ACharacter* Character; // 0x260
	USceneComponent* TransformComponent; // 0x268
	FRotator ControlRotation; // 0x288
	char bAttachToPawn : 1; // 0x294
};

struct UPortalWarsPathFollowingComponent : UPathFollowingComponent {
	UCharacterMovementComponent* CharacterMoveComp; // 0x250
};

struct UPortalWarsPlayWidget : UPortalWarsMenuWidget {
	UPortalWarsMenuWidget* SelectionWidget; // 0x338
	UPortalWarsChallengePanelWidget* ChallengePanel; // 0x340
	UPortalWarsPartyWidget* PartyWidget; // 0x348
	UWidgetSwitcher* PlaySwitcher; // 0x350
	UPortalWarsButtonWidget* PlayButton; // 0x358
	UPortalWarsButtonWidget* CancelButton; // 0x360
	UPortalWarsButtonWidget* RewardCenterButton; // 0x368
	UPortalWarsGameInstance* GameInstanceRef; // 0x370
};

struct UPortalWarsRootHUDWidget : UPortalWarsUserWidget {
	UCanvasPanel* RootWidget; // 0x2a8
};

struct UPortalWarsScreenFadeWidget : UUserWidget {
	UWidgetAnimation* FadeInAnimation; // 0x260
	UWidgetAnimation* FadeOutAnimation; // 0x268
	UImage* FadeImage; // 0x270
};

struct AFlagCaptureZone : AActor {
	char TeamIndex; // 0x220
	UPortalWarsFlagZoneIndicator* Indicator; // 0x228
	UStaticMeshComponent* Mesh; // 0x230
	UStaticMeshComponent* OverlapMesh; // 0x238
	USceneComponent* FlagSpawnPoint; // 0x240
	AFlagItemPickup* FlagPickupClass; // 0x248
	APortalWarsCTFGameState* CTFGameState; // 0x250
	APortalWarsNeutralCTFGameState* NeutralCTFGameState; // 0x258
};

struct UBTDecorator_ConeCheck : UBTDecorator {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct UPortalWarsCustomScrollWidget : UPortalWarsUserWidget {
	TArray<FString> ChildWidgetIds; // 0x2b8
	TMap<FString, UWidget*> ChildWidgets; // 0x2c8
	UUserWidget* ChildWidgetClass; // 0x318
	float ScrollDuration; // 0x360
	float ScrollDurationDelta; // 0x364
	float MinScrollDuration; // 0x368
	bool bFadeLeftEdge; // 0x36c
	bool bFadeRightEdge; // 0x36d
	float EdgeOpacity; // 0x370
	float InnerEdgeOpacity; // 0x374
	bool bWrapAround; // 0x378
	EScrollCenterLocation ScrollCenterLocation; // 0x379
	int32_t DesiredNumVisible; // 0x37c
	UPanelWidget* ChildPanel; // 0x380
	EHorizontalAlignment ChildHorizontalAlignment; // 0x388
	EVerticalAlignment ChildVerticalAlignment; // 0x389
	UPortalWarsButton* PrevButton; // 0x390
	UPortalWarsButton* NextButton; // 0x398
	UWidgetSwitcher* ScrollSwitcher; // 0x3a0
	UScrollBox* ScrollBox; // 0x3a8
};

struct UMaterialExpressionSamplePhysicsVectorField : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
	EFieldVectorType FieldTarget; // 0x54
};

struct UAkMacInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
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

struct UMovieSceneParameterSection : UMovieSceneSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct UBTService : UBTAuxiliaryNode {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct UMaterialExpressionCollectionParameter : UMaterialExpression {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UParticleModuleMeshRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct USynthSamplePlayer : USynthComponent {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
};

struct UBlackboardKeyType_Class : UBlackboardKeyType {
	UObject* BaseClass; // 0x30
};

struct UBlackboardKeyType_NativeEnum : UBlackboardKeyType {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct USoundfieldEffectBase : UObject {
	USoundfieldEffectSettingsBase* Settings; // 0x28
};

struct UAnimSharingTransitionInstance : UAnimInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct UPortalWarsTeamNumericCarouselWidget : UPortalWarsInputWidget {
	UPortalWarsNumericCarouselWidget* GlobalCarousel; // 0x368
	UPortalWarsNumericCarouselWidget* AlphaCarousel; // 0x370
	UPortalWarsNumericCarouselWidget* BravoCarousel; // 0x378
	UPortalWarsCheckBox* TeamCheckbox; // 0x380
	int32_t Value; // 0x388
	int32_t MinValue; // 0x38c
	int32_t MaxValue; // 0x390
	int32_t StepSize; // 0x394
	bool bAllowWrap; // 0x398
	bool bDisplayAsTime; // 0x399
	FKey GamepadKey; // 0x3a0
	UImage* StandardIcon; // 0x3b8
	UImage* GamepadIcon; // 0x3c0
	UWidgetSwitcher* ConsoleSwitcher; // 0x3c8
	FLinearColor IconDefaultColor; // 0x3d0
	FLinearColor IconHoveredColor; // 0x3e0
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

struct UMovieSceneNiagaraTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UMovieSceneMaterialParameterCollectionTrack : UMovieSceneMaterialTrack {
	UMaterialParameterCollection* MPC; // 0x90
};

struct UBTTask_SpawnPortal : UBTTaskNode {
	float NearPortalWallRadius; // 0x70
	float XYRange; // 0x74
	float MinZRange; // 0x78
	float Timeout; // 0x7c
	float Delay; // 0x80
	bool bIsLeftPortal; // 0x84
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

struct USoundConcurrency : UObject {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct AARSharedWorldGameMode : AGameMode {
	int32_t BufferSizePerChunk; // 0x308
};

struct UInterpTrackFloatParticleParam : UInterpTrackFloatBase {
	FName ParamName; // 0x90
};

struct UPerlinNoiseCameraShakePattern : USimpleCameraShakePattern {
	float LocationAmplitudeMultiplier; // 0x38
	float LocationFrequencyMultiplier; // 0x3c
	FPerlinNoiseShaker X; // 0x40
	FPerlinNoiseShaker Y; // 0x48
	FPerlinNoiseShaker Z; // 0x50
	float RotationAmplitudeMultiplier; // 0x58
	float RotationFrequencyMultiplier; // 0x5c
	FPerlinNoiseShaker Pitch; // 0x60
	FPerlinNoiseShaker Yaw; // 0x68
	FPerlinNoiseShaker Roll; // 0x70
	FPerlinNoiseShaker FOV; // 0x78
};

struct UInteractiveToolsContext : UObject {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
};

struct UParticleModuleLocationDirect : UParticleModuleLocationBase {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct UMovieSceneSubSection : UMovieSceneSection {
	FMovieSceneSectionParameters Parameters; // 0xe8
	float StartOffset; // 0x10c
	float TimeScale; // 0x110
	float PrerollTime; // 0x114
	char NetworkMask; // 0x118
	UMovieSceneSequence* SubSequence; // 0x120
	LazyObjectProperty ActorToRecord; // 0x128
	FString TargetSequenceName; // 0x148
	FDirectoryPath TargetPathToRecordTo; // 0x158
};

struct UBTTask_SetFocus : UBTTask_BlackboardBase {
	bool shouldLookForward; // 0x98
};

struct AAkSpatialAudioVolume : AVolume {
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x258
	UAkLateReverbComponent* LateReverb; // 0x260
	UAkRoomComponent* Room; // 0x268
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
	FDatasmithImportBaseOptions BaseOptions; // 0x30
	FDatasmithReimportOptions ReimportOptions; // 0x44
	FString Filename; // 0x48
	FString FilePath; // 0x58
};

struct UPortalWarsMessageDialogWidget : UPortalWarsDialogWidget {
	UTextBlock* TitleText; // 0x390
	UTextBlock* MessageText; // 0x398
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
	UReplicationDriver* ReplicationDriver; // 0x6f8
};

struct UMaterialExpressionReflectionVectorWS : UMaterialExpression {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct UNiagaraDataInterfaceAudioOscilloscope : UNiagaraDataInterface {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct UPhysicalMaterialMask : UObject {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
};

struct UGizmoLocalFloatParameterSource : UGizmoBaseFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch : UEditableGameplayTagQueryExpression {
	FGameplayTagContainer Tags; // 0x28
};

struct UPortalWarsScrollBox : UScrollBox {
	bool bAllowGamepadRightStickScrolling; // 0x888
	float GamepadScrollSpeed; // 0x88c
};

struct UPortalWarsHealthWidget : UUserWidget {
	UTextBlock* HealthText; // 0x260
	UProgressBar* HealthBar; // 0x268
	USizeBox* HealthBarSizeBox; // 0x270
	UProgressBar* DamageHealthBar; // 0x278
	UWidget* DamageIndicator; // 0x280
};

struct UTimecodeProvider : UObject {
	float FrameDelay; // 0x28
};

struct UMovieSceneBindingOverrides : UObject {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UEnvQueryGenerator_Composite : UEnvQueryGenerator {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct UMaterialInterface : UObject {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct ACharacter : APawn {
	USkeletalMeshComponent* Mesh; // 0x280
	UCharacterMovementComponent* CharacterMovement; // 0x288
	UCapsuleComponent* CapsuleComponent; // 0x290
	FBasedMovementInfo BasedMovement; // 0x298
	FBasedMovementInfo ReplicatedBasedMovement; // 0x2c8
	float AnimRootMotionTranslationScale; // 0x2f8
	FVector BaseTranslationOffset; // 0x2fc
	FQuat BaseRotationOffset; // 0x310
	float ReplicatedServerLastTransformUpdateTimeStamp; // 0x320
	float ReplayLastTransformUpdateTimeStamp; // 0x324
	char ReplicatedMovementMode; // 0x328
	bool bInBaseReplication; // 0x329
	float CrouchedEyeHeight; // 0x32c
	char bIsCrouched : 1; // 0x330
	char bProxyIsJumpForceApplied : 1; // 0x330
	char bPressedJump : 1; // 0x330
	char bClientUpdating : 1; // 0x330
	char bClientWasFalling : 1; // 0x330
	char bClientResimulateRootMotion : 1; // 0x330
	char bClientResimulateRootMotionSources : 1; // 0x330
	char bSimGravityDisabled : 1; // 0x330
	char bClientCheckEncroachmentOnNetUpdate : 1; // 0x331
	char bServerMoveIgnoreRootMotion : 1; // 0x331
	char bWasJumping : 1; // 0x331
	float JumpKeyHoldTime; // 0x334
	float JumpForceTimeRemaining; // 0x338
	float ProxyJumpForceStartedTime; // 0x33c
	float JumpMaxHoldTime; // 0x340
	int32_t JumpMaxCount; // 0x344
	int32_t JumpCurrentCount; // 0x348
	int32_t JumpCurrentCountPreJump; // 0x34c
	FMulticastInlineDelegate OnReachedJumpApex; // 0x358
	FMulticastInlineDelegate MovementModeChangedDelegate; // 0x378
	FMulticastInlineDelegate OnCharacterMovementUpdated; // 0x388
	FRootMotionSourceGroup SavedRootMotion; // 0x398
	FRootMotionMovementParams ClientRootMotionParams; // 0x3d0
	TArray<FSimulatedRootMotionReplicatedMove> RootMotionRepMoves; // 0x410
	FRepRootMotionMontage RepRootMotion; // 0x420
};

struct UParticleModuleKillHeight : UParticleModuleKillBase {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct UPortalWarsPickupIndicatorWidget : UPortalWarsIndicatorWidget {
	UTextBlock* PickupNameText; // 0x2b8
};

struct UPortalWarsTakedownHUDOverlayWidget : UPortalWarsRoundHUDOverlayWidget {
	UPortalWarsTakedownNotificationWidget* TakedownNotification; // 0x278
};

struct UPortalWarsPortalIndicatorWidget : UPortalWarsIndicatorWidget {
	UWidget* Pointer; // 0x2b8
	UImage* OnScreenIndicatorImage; // 0x2c0
	UImage* OffScreenIndicatorImage; // 0x2c8
	UImage* Scrim; // 0x2d0
	UTexture2D* LeftPortalIndicatorImage; // 0x2d8
	UTexture2D* RightPortalIndicatorImage; // 0x2e0
	UTexture2D* LeftPortalScrimImage; // 0x2e8
	UTexture2D* RightPortalScrimImage; // 0x2f0
};

struct ULandscapeMeshCollisionComponent : ULandscapeHeightfieldCollisionComponent {
	FGuid MeshGuid; // 0x530
};

struct USubmixEffectReverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
};

struct ULeaderboardFlushCallbackProxy : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
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

struct AOddballItemPickup : APortalWarsGunPickup {
	float SphereRadius; // 0x2c4
	APortalWarsOddballGameState* OddballGameState; // 0x2c8
};

struct UInterpTrackToggle : UInterpTrack {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UAnimBoneCompressionSettings : UObject {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UInterpTrackInstVectorProp : UInterpTrackInstProperty {
	FVector ResetVector; // 0x58
};

struct UPortalWarsGGGunStatusWidget : UPortalWarsUserWidget {
	URichTextBlock* CurrentWeaponText; // 0x2a8
	UImage* NextWeaponImage; // 0x2b0
	USizeBox* IconSizeBox; // 0x2b8
	UHorizontalBox* NextWeaponHorizontalBox; // 0x2c0
	FLinearColor WeaponColor; // 0x2c8
	APortalWarsGG* DefaultGameMode; // 0x2d8
};

struct UMaterialExpressionDepthFade : UMaterialExpression {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct UMovieSceneEnumSection : UMovieSceneSection {
	FMovieSceneByteChannel EnumCurve; // 0xf0
};

struct URichTextBlock : UTextLayoutWidget {
	FText Text; // 0x128
	UDataTable* TextStyleSet; // 0x140
	UDataTable* DecoratedTextStyleSet; // 0x148
	TArray<URichTextBlockDecorator*> DecoratorClasses; // 0x150
	bool bOverrideDefaultStyle; // 0x160
	FTextBlockStyle DefaultTextStyleOverride; // 0x168
	float MinDesiredWidth; // 0x3d8
	ETextTransformPolicy TextTransformPolicy; // 0x3dc
	FTextBlockStyle DefaultTextStyle; // 0x3e0
	TArray<URichTextBlockDecorator*> InstanceDecorators; // 0x8c0
};

struct UNetAnalyticsAggregatorConfig : UObject {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UMaterialExpressionCustom : UMaterialExpression {
	FString Code; // 0x40
	ECustomMaterialOutputType OutputType; // 0x50
	FString Description; // 0x58
	TArray<FCustomInput> Inputs; // 0x68
	TArray<FCustomOutput> AdditionalOutputs; // 0x78
	TArray<FCustomDefine> AdditionalDefines; // 0x88
	TArray<FString> IncludeFilePaths; // 0x98
};

struct UPortalWarsLoginMenuWidget : UPortalWarsUserWidget {
	UTextBlock* ConnectText; // 0x2b8
	UTextBlock* ErrorText; // 0x2c0
	UTextBlock* ErrorTitleText; // 0x2c8
	UTextBlock* VersionText; // 0x2d0
	UPortalWarsButtonWidget* StartButton; // 0x2d8
	UPortalWarsButtonWidget* RetryButton; // 0x2e0
	UPortalWarsButtonWidget* QuitButton; // 0x2e8
	UWidgetSwitcher* RetrySwitcher; // 0x2f0
	UWidgetSwitcher* LoginSwitcher; // 0x308
};

struct UUniformInteger : UFieldNodeInt {
	int32_t Magnitude; // 0xb0
};

struct UMaterialExpressionHairColor : UMaterialExpression {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
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

struct UPortalWarsLobbySelectorButtonWidget : UPortalWarsEntryWidget {
	UImage* DisplayImage; // 0x428
	UWidgetSwitcher* SelectedSwitcher; // 0x430
	UWidgetAnimation* DisplayTextAnimation; // 0x438
	ELobbySelectorType Type; // 0x440
	UTexture2D* BackgroundImage; // 0x448
};

struct UPortalWarsScoreboardStatEntry : UPortalWarsUserWidget {
	UTextBlock* StatValueText; // 0x2a8
	UTextBlock* StatNameText; // 0x2b0
	TMap<int32_t, FLinearColor> MedalColors; // 0x2b8
	UImage* MedalImage; // 0x308
	USizeBox* MedalImageSizeBox; // 0x310
	TMap<int32_t, UTexture2D*> MedalImages; // 0x318
	UTexture2D* DefaultMedalImage; // 0x368
};

struct ARocketLauncher : AProjectileGun {
	FRocketStateSpecificMontages EquipAnims; // 0x6e0
	FRocketStateSpecificMontages FireAnims; // 0x700
	TArray<FWeaponAnimMontage> RocketMeleeEmptyAnims; // 0x720
	TArray<FWeaponAnimMontage> RocketMeleeFullAnims; // 0x730
	FRocketStateSpecificMontages ThrowGrenadeAnims; // 0x740
	FRocketStateSpecificMontages FirePortalAnims; // 0x760
	FRocketStateSpecificMontages SprintFirePortalAnims; // 0x780
	FRocketStateSpecificMontages ClosePortalAnims; // 0x7a0
	FRocketStateSpecificMontages SprintClosePortalAnims; // 0x7c0
	FRocketStateSpecificMontages InspectWeaponAnims; // 0x7e0
	FRocketStateSpecificMontages ReloadStartAnims; // 0x800
	FRocketStateSpecificMontages ReloadInsertAnims; // 0x820
	FRocketStateSpecificMontages ReloadStopAnims; // 0x840
	FWeaponAnimList EmptyAnimations; // 0x890
	FWeaponAnimList FullAnimations; // 0x8f0
};

struct UPortalWarsCharMovementComponent : UCharacterMovementComponent {
	APortalWarsCharacter* PWCharOwner; // 0xaf0
	FClamberInfo ClamberInfo; // 0xafc
};

struct UArrowComponent : UPrimitiveComponent {
	FColor ArrowColor; // 0x450
	float ArrowSize; // 0x454
	float ArrowLength; // 0x458
	float ScreenSize; // 0x45c
	char bIsScreenSizeScaled : 1; // 0x460
	char bTreatAsASprite : 1; // 0x460
};

struct UAkSlider : UWidget {
	float Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	FSliderStyle WidgetStyle; // 0x120
	EOrientation Orientation; // 0x460
	FLinearColor SliderBarColor; // 0x464
	FLinearColor SliderHandleColor; // 0x474
	bool IndentHandle; // 0x484
	bool locked; // 0x485
	float StepSize; // 0x488
	bool IsFocusable; // 0x48c
	FAkPropertyToControl ThePropertyToControl; // 0x490
	FAkWwiseItemToControl ItemToControl; // 0x4a0
	FMulticastInlineDelegate OnValueChanged; // 0x4e0
	FMulticastInlineDelegate OnItemDropped; // 0x4f0
	FMulticastInlineDelegate OnPropertyDropped; // 0x500
};

struct APortalWarsDomination : APortalWarsGameMode {
	int32_t HillTeamScore; // 0x6b8
	int32_t HillCaptureScore; // 0x6bc
	int32_t HillNeutralizeScore; // 0x6c0
};

struct UDatasmithCommonTessellationOptions : UDatasmithOptionsBase {
	FDatasmithTessellationOptions Options; // 0x28
};

struct UMaterialExpressionAntialiasedTextureMask : UMaterialExpressionTextureSampleParameter2D {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct UARPlaneGeometry : UARTrackedGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
};

struct UAsyncActionLoadPrimaryAssetClassList : UAsyncActionLoadPrimaryAssetBase {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UARFaceGeometry : UARTrackedGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct UParticleModuleEventGenerator : UParticleModuleEventBase {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct UBTService_StuckMonitor : UBTService {
	float MinStuckTime; // 0x70
	float StuckDistanceTolerance; // 0x74
};

struct ANavigationData : AActor {
	UPrimitiveComponent* RenderingComp; // 0x228
	FNavDataConfig NavDataConfig; // 0x230
	char bEnableDrawing : 1; // 0x2a8
	char bForceRebuildOnLoad : 1; // 0x2a8
	char bAutoDestroyWhenNoNavigation : 1; // 0x2a8
	char bCanBeMainNavData : 1; // 0x2a8
	char bCanSpawnOnRebuild : 1; // 0x2a8
	char bRebuildAtRuntime : 1; // 0x2a8
	ERuntimeGenerationType RuntimeGeneration; // 0x2ac
	float ObservedPathsTickInterval; // 0x2b0
	uint32_t DataVersion; // 0x2b4
	TArray<FSupportedAreaData> SupportedAreas; // 0x3c0
};

struct UTireType : UDataAsset {
	float FrictionScale; // 0x30
};

struct USourceEffectChorusPreset : USoundEffectSourcePreset {
	FSourceEffectChorusSettings Settings; // 0x108
};

struct UGameplayTagsDeveloperSettings : UDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct UParticleModuleLocationPrimitiveSphere : UParticleModuleLocationPrimitiveBase {
	FRawDistributionFloat StartRadius; // 0xb0
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

struct UUserDefinedImageCaptureProtocol : UUserDefinedCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UNiagaraDataInterfaceArrayFloat4 : UNiagaraDataInterfaceArray {
	TArray<FVector4> FloatData; // 0x50
};

struct UParticleModuleSizeMultiplyLife : UParticleModuleSizeBase {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct APortalWarsKOTHPlayerState : APortalWarsPlayerState {
	char bIsOnHill : 1; // 0xac8
};

struct UMaterialExpressionSphereMask : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct UStreamMediaSource : UBaseMediaSource {
	FString StreamUrl; // 0x88
};

struct UPortalWarsDamageType : UDamageType {
	UTexture2D* KillIcon; // 0x40
	UForceFeedbackEffect* HitForceFeedback; // 0x48
	UForceFeedbackEffect* KilledForceFeedback; // 0x50
	AGun* Weapon; // 0x58
};

struct APlayerCameraManager : AActor {
	APlayerController* PCOwner; // 0x220
	USceneComponent* TransformComponent; // 0x228
	float DefaultFOV; // 0x238
	float DefaultOrthoWidth; // 0x240
	float DefaultAspectRatio; // 0x248
	FCameraCacheEntry CameraCache; // 0x290
	FCameraCacheEntry LastFrameCameraCache; // 0x880
	FTViewTarget ViewTarget; // 0xe70
	FTViewTarget PendingViewTarget; // 0x1470
	FCameraCacheEntry CameraCachePrivate; // 0x1aa0
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x2090
	TArray<UCameraModifier*> ModifierList; // 0x2680
	TArray<UCameraModifier*> DefaultModifiers; // 0x2690
	float FreeCamDistance; // 0x26a0
	FVector FreeCamOffset; // 0x26a4
	FVector ViewTargetOffset; // 0x26b0
	FMulticastInlineDelegate OnAudioFadeChangeEvent; // 0x26c0
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x26e0
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x26f0
	UCameraAnimInst* AnimInstPool[0x8]; // 0x26f8
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x2738
	TArray<UCameraAnimInst*> ActiveAnims; // 0x2758
	TArray<UCameraAnimInst*> FreeAnims; // 0x2768
	ACameraActor* AnimCameraActor; // 0x2778
	char bIsOrthographic : 1; // 0x2780
	char bDefaultConstrainAspectRatio : 1; // 0x2780
	char bClientSimulatingViewTarget : 1; // 0x2780
	char bUseClientSideCameraUpdates : 1; // 0x2780
	char bGameCameraCutThisFrame : 1; // 0x2781
	float ViewPitchMin; // 0x2784
	float ViewPitchMax; // 0x2788
	float ViewYawMin; // 0x278c
	float ViewYawMax; // 0x2790
	float ViewRollMin; // 0x2794
	float ViewRollMax; // 0x2798
	float ServerUpdateCameraTimeout; // 0x27a0
};

struct UMaterialExpressionArctangent2 : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UMovieSceneBoolSection : UMovieSceneSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct USequenceCameraShakePattern : UCameraShakePattern {
	UCameraAnimationSequence* Sequence; // 0x28
	float PlayRate; // 0x30
	float Scale; // 0x34
	float BlendInTime; // 0x38
	float BlendOutTime; // 0x3c
	float RandomSegmentDuration; // 0x40
	bool bRandomSegment; // 0x44
	USequenceCameraShakeSequencePlayer* Player; // 0x48
	USequenceCameraShakeCameraStandIn* CameraStandIn; // 0x50
};

struct UBTDecorator_IsBBEntryOfClass : UBTDecorator_BlackboardBase {
	UObject* TestClass; // 0x90
};

struct UCloudStorageBase : UPlatformInterfaceBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct UPortalWarsInspectItemWidget : UUserWidget {
	UImage* PreviewImage; // 0x260
	UMaterialInterface* PreviewMaterialBase; // 0x268
	UPortalWarsPlayerEntryWidget* PlayerEntry; // 0x270
	UWidgetSwitcher* InspectSwitcher; // 0x278
	UWidgetAnimation* FadeInAnimation; // 0x280
	UWidgetAnimation* FadeOutAnimation; // 0x288
};

struct UVirtualTextureBuilder : UObject {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct APortalWarsGunPickup : APortalWarsPickup {
	AGun* WeaponClass; // 0x270
	char gunValue; // 0x278
	FText GunDisplayName; // 0x280
	UTexture2D* GunImage; // 0x298
	int32_t GunID; // 0x2a0
	int32_t TotalAmmo; // 0x2b0
	float ImpactThreshold; // 0x2b8
};

struct URaceBookmarkWidget : UUserWidget {
	UHorizontalBox* MarksHorizontalBox; // 0x260
	UTexture2D* CurrentMarkTexture; // 0x268
	UTexture2D* IncompleteMarkTexture; // 0x270
	UTexture2D* CompleteMarkTexture; // 0x278
};

struct UEditableGameplayTagQueryExpression_NoExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct APortalWarsRaceGate : AActor {
	UPortalWarsAkComponent* AkComp; // 0x220
	USceneComponent* RootScene; // 0x228
	UStaticMeshComponent* GateMesh; // 0x230
	USphereComponent* SphereCollision; // 0x238
	UParticleSystemComponent* ParticleSystem; // 0x240
	UMaterialInterface* CurrentGateMaterial; // 0x248
	UMaterialInterface* CurrentGateSecondMaterial; // 0x250
	UMaterialInterface* NextGateMaterial; // 0x258
	UMaterialInterface* NextGateSecondMaterial; // 0x260
	UAkAudioEvent* SuccessEvent; // 0x268
	UAkAudioEvent* PlayAmbientLoopEvent; // 0x270
	UAkAudioEvent* StopAmbientLoopEvent; // 0x278
	char Order; // 0x280
};

struct UParticleModuleLight_Seeded : UParticleModuleLight {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UDatasmithFBXSceneImportData : UDatasmithSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct UGameplayTask_WaitDelay : UGameplayTask {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct UMaterialExpressionLogarithm2 : UMaterialExpression {
	FExpressionInput X; // 0x40
};

struct UMaterialExpressionMultiply : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UNiagaraEffectType : UObject {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
	ENiagaraCullReaction CullReaction; // 0x2c
	UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
	UNiagaraBaselineController* PerformanceBaselineController; // 0x70
	FNiagaraPerfBaselineStats PerfBaselineStats; // 0x78
	FGuid PerfBaselineVersion; // 0x88
};

struct UStaticMeshComponent : UMeshComponent {
	int32_t ForcedLodModel; // 0x478
	int32_t PreviousLODLevel; // 0x47c
	int32_t MinLOD; // 0x480
	int32_t SubDivisionStepSize; // 0x484
	UStaticMesh* StaticMesh; // 0x488
	FColor WireframeColorOverride; // 0x490
	char bEvaluateWorldPositionOffset : 1; // 0x494
	char bOverrideWireframeColor : 1; // 0x494
	char bOverrideMinLod : 1; // 0x494
	char bOverrideNavigationExport : 1; // 0x494
	char bForceNavigationObstacle : 1; // 0x494
	char bDisallowMeshPaintPerInstance : 1; // 0x494
	char bIgnoreInstanceForTextureStreaming : 1; // 0x494
	char bOverrideLightMapRes : 1; // 0x494
	char bCastDistanceFieldIndirectShadow : 1; // 0x495
	char bOverrideDistanceFieldSelfShadowBias : 1; // 0x495
	char bUseSubDivisions : 1; // 0x495
	char bUseDefaultCollision : 1; // 0x495
	char bReverseCulling : 1; // 0x495
	int32_t OverriddenLightMapRes; // 0x498
	float DistanceFieldIndirectShadowMinVisibility; // 0x49c
	float DistanceFieldSelfShadowBias; // 0x4a0
	float StreamingDistanceMultiplier; // 0x4a4
	TArray<FStaticMeshComponentLODInfo> LODData; // 0x4a8
	TArray<FStreamingTextureBuildInfo> StreamingTextureData; // 0x4b8
	FLightmassPrimitiveSettings LightmassSettings; // 0x4c8
};

struct UPortalWarsDiscardSettingsDialog : UPortalWarsDialogWidget {
	UPortalWarsButtonWidget* AcceptButton; // 0x3a0
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

struct APlayerStart : ANavigationObjectBase {
	FName PlayerStartTag; // 0x248
};

struct UNiagaraSettings : UDeveloperSettings {
	FSoftObjectPath DefaultEffectType; // 0x38
	TArray<FText> QualityLevels; // 0x50
	TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x60
	ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
	ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xb4
	ENDISkelMesh_GpuMaxInfluences NDISkelMesh_GpuMaxInfluences; // 0xb8
	ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat; // 0xb9
	ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat; // 0xba
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xc0
};

struct UParticleModuleMeshRotationRate_Seeded : UParticleModuleMeshRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UPortalWarsDamageNumberEntryWidget : UUserWidget {
	UWidgetAnimation* FadeInAnimation; // 0x268
	UWidgetAnimation* FadeOutAnimation; // 0x270
	UTextBlock* DamageText; // 0x278
};

struct USourceEffectEnvelopeFollowerPreset : USoundEffectSourcePreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct UAssetMappingTable : UObject {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UParticleModuleVelocity_Seeded : UParticleModuleVelocity {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UNiagaraDataInterfaceCamera : UNiagaraDataInterface {
	int32_t PlayerControllerIndex; // 0x38
	bool bRequireCurrentFrameData; // 0x3c
};

struct UBTService_BlackboardBase : UBTService {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UHighlightsOpenGroupAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UPortalWarsPlaySelectionWidget : UPortalWarsMenuWidget {
	UPortalWarsMenuWidget* InspectWidget; // 0x338
	UPortalWarsPlaylistEntryWidget* QuickPlayEntry; // 0x340
	UPortalWarsPlaylistGameModeSelect* PlaylistGameModeSelectWidgetClass; // 0x348
	UPortalWarsPlaylistEntryWidget* FeaturedEntry; // 0x350
	UPortalWarsButtonWidget* RankedButton; // 0x358
	UPortalWarsPlaylistSelectWidget* PlaylistSelectWidgetClass; // 0x360
	UPortalWarsButtonWidget* CustomButton; // 0x368
	UPortalWarsCustomGameWidget* CustomMenuWidgetClass; // 0x370
	UPortalWarsButtonWidget* TrainingButton; // 0x378
	UPortalWarsTrainingWidget* TrainingMenuWidgetClass; // 0x380
	UPortalWarsButtonWidget* RaceButton; // 0x388
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

struct ABandwidthTestActor : AActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x220
};

struct UBTDecorator_WithinRange : UBTDecorator {
	FBlackboardKeySelector BlackboardKey; // 0x68
	float defaultRange; // 0x90
};

struct UAnimSharingStateInstance : UAnimInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct USubmixEffectDynamicsProcessorPreset : USoundEffectSubmixPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xf0
};

struct UAIPerceptionSystem : UAISubsystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct APWSpectatorPawn : ASpectatorPawn {
	float TimeToReachMaxAccel; // 0x2b8
	float ControllerMaxAccelMultiplier; // 0x2bc
	UPortalWarsAkComponent* AkComponent; // 0x2e0
};

struct UPortalWarsPlayStreakRewardWidget : UPortalWarsRewardEntryWidget {
	UPortalWarsProgressionIconWidget* StreakIcon; // 0x728
	UImage* SeparatorImage; // 0x730
	UImage* SeparatorImageComplete; // 0x738
	UImage* SeparatorImageMissed; // 0x740
	UWidget* RewardPanel; // 0x748
	UWidgetSwitcher* RewardBackgroundSwitcher; // 0x750
	UWidget* TodayPanel; // 0x758
};

struct UTemplateSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct UAnimCompress_RemoveTrivialKeys : UAnimCompress {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UBTService_ShootEnemy : UBTService {
	float defaultRange; // 0x70
	float MinDifficultyToMelee; // 0x74
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

struct UMovieScenePropertyTrack : UMovieSceneNameableTrack {
	UMovieSceneSection* SectionToKey; // 0x78
	FMovieScenePropertyBinding PropertyBinding; // 0x80
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UPortalWarsSettingsMenuWidget : UPortalWarsMenuWidget {
	TArray<UUserWidget*> Widgets; // 0x338
	TArray<UUserWidget*> ConsoleWidgets; // 0x348
};

struct UConsole : UObject {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UModelComponent : UPrimitiveComponent {
	UBodySetup* ModelBodySetup; // 0x468
};

struct UInterpTrackInstEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UMaterialExpressionBentNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UAISense_Prediction : UAISense {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct UBasicOverlays : UOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct UMaterialExpressionDistanceToNearestSurface : UMaterialExpression {
	FExpressionInput Position; // 0x40
};

struct UPortalWarsStreamStatusWidget : UPortalWarsUserWidget {
	UWidget* RootWidget; // 0x2a8
	UImage* StreamImage; // 0x2b0
	UPortalWarsButtonWidget* ActionButton; // 0x2b8
};

struct UTextBlockWidgetStyle : USlateWidgetStyleContainerBase {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct ARectLight : ALight {
	URectLightComponent* RectLightComponent; // 0x230
};

struct UTexture2DDynamic : UTexture {
	EPixelFormat Format; // 0x180
};

struct UPortalWarsPlaylistGameModeEntry : UPortalWarsEntryWidget {
	UTextBlock* DescriptionText; // 0x420
	UImage* DisplayImage; // 0x428
	UWidget* FeaturedIndicator; // 0x430
	UWidget* FeaturedScrim; // 0x438
	UTextBlock* NoteText; // 0x440
	UWidgetSwitcher* CheckBoxSwitcher; // 0x450
};

struct UAnimNotify_PlaySound : UAnimNotify {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
};

struct UParticleSystemComponent : UFXSystemComponent {
	UParticleSystem* Template; // 0x450
	TArray<UMaterialInterface*> EmitterMaterials; // 0x458
	TArray<USkeletalMeshComponent*> SkelMeshComponents; // 0x468
	char bResetOnDetach : 1; // 0x479
	char bUpdateOnDedicatedServer : 1; // 0x479
	char bAllowRecycling : 1; // 0x479
	char bAutoManageAttachment : 1; // 0x479
	char bAutoAttachWeldSimulatedBodies : 1; // 0x479
	char bWarmingUp : 1; // 0x47a
	char bOverrideLODMethod : 1; // 0x47a
	char bSkipUpdateDynamicDataDuringTick : 1; // 0x47a
	ParticleSystemLODMethod LODMethod; // 0x485
	EParticleSignificanceLevel RequiredSignificance; // 0x486
	TArray<FParticleSysParam> InstanceParameters; // 0x488
	FMulticastInlineDelegate OnParticleSpawn; // 0x498
	FMulticastInlineDelegate OnParticleBurst; // 0x4a8
	FMulticastInlineDelegate OnParticleDeath; // 0x4b8
	FMulticastInlineDelegate OnParticleCollide; // 0x4c8
	bool bOldPositionValid; // 0x4d8
	FVector OldPosition; // 0x4dc
	FVector PartSysVelocity; // 0x4e8
	float WarmupTime; // 0x4f4
	float WarmupTickRate; // 0x4f8
	float SecondsBeforeInactive; // 0x500
	float MaxTimeBeforeForceUpdateTransform; // 0x508
	TArray<UParticleSystemReplay*> ReplayClips; // 0x528
	float CustomTimeDilation; // 0x540
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x598
	FName AutoAttachSocketName; // 0x5a0
	EAttachmentRule AutoAttachLocationRule; // 0x5a8
	EAttachmentRule AutoAttachRotationRule; // 0x5a9
	EAttachmentRule AutoAttachScaleRule; // 0x5aa
	FMulticastInlineDelegate OnSystemFinished; // 0x5d8
};

struct APortalWarsKOTHHUD : APortalWarsHUD {
	UPortalWarsKOTHHillIndicator* HillIndicator; // 0x400
	UPortalWarsKOTHHillIndicator* NextHillIndicator; // 0x408
	UPortalWarsIndicatorWidget* HillIndicatorWidgetClass; // 0x410
	UPortalWarsKOTHHUDOverlayWidget* KOTHHUDOverlayWidget; // 0x418
	UPortalWarsKOTHHUDOverlayWidget* KOTHHUDOverlayWidgetClass; // 0x420
};

struct UNiagaraDataInterfaceArrayBool : UNiagaraDataInterfaceArray {
	TArray<bool> BoolData; // 0x50
};

struct UBTTask_BlueprintBase : UBTTaskNode {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct UEditableGameplayTagQuery : UObject {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UMaterialExpressionArctangent2Fast : UMaterialExpression {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UMaterialExpressionCeil : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct AMatineeActorCameraAnim : AMatineeActor {
	UCameraAnim* CameraAnim; // 0x2c8
};

struct UAkAudioEvent : UObject {
	UAkAudioBank* RequiredBank; // 0x28
	float MaxAttenuationRadius; // 0x30
	bool IsInfinite; // 0x34
	float MinimumDuration; // 0x38
	float MaximumDuration; // 0x3c
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

struct UGeometryCacheComponent : UMeshComponent {
	UGeometryCache* GeometryCache; // 0x478
	bool bRunning; // 0x480
	bool bLooping; // 0x481
	bool bExtrapolateFrames; // 0x482
	float StartTimeOffset; // 0x484
	float PlaybackSpeed; // 0x488
	float MotionVectorScale; // 0x48c
	int32_t NumTracks; // 0x490
	float ElapsedTime; // 0x494
	float Duration; // 0x4cc
	bool bManualTick; // 0x4d0
};

struct UAkItemProperties : UWidget {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct UPortalWarsEntryWidget : UPortalWarsButtonWidget {
	bool bIsSelected; // 0x3c0
	FMulticastInlineDelegate OnEntrySelected; // 0x3c8
	FMulticastInlineDelegate OnEntryDoubleClicked; // 0x3d8
	FMulticastInlineDelegate OnEntryHovered; // 0x3e8
	FMulticastInlineDelegate OnEntryUnhovered; // 0x3f8
	bool bSelectOnControllerHover; // 0x408
	UWidgetAnimation* FadeInAnimation; // 0x410
	UWidgetAnimation* FadeOutAnimation; // 0x418
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

struct UTexture2DArray : UTexture {
	TextureAddress AddressX; // 0x1d0
	TextureAddress AddressY; // 0x1d1
	TextureAddress AddressZ; // 0x1d2
};

struct UMovieSceneSequence : UMovieSceneSignedObject {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct UBTTask_RunBehavior : UBTTaskNode {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UMaterialShaderQualitySettings : UObject {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UGizmoLineHandleComponent : UGizmoBaseComponent {
	FVector Normal; // 0x470
	float HandleSize; // 0x47c
	float Thickness; // 0x480
	FVector Direction; // 0x484
	float Length; // 0x490
	bool bImageScale; // 0x494
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

struct UPortalWarsInventoryWidget : UPortalWarsUserWidget {
	UTextBlock* CurrentAmmoText; // 0x2a8
	UTextBlock* ReserveAmmoText; // 0x2b0
	UTextBlock* NumGrenadesText; // 0x2b8
	UWidget* SecondaryRoot; // 0x2c0
	UTextBlock* PrimaryWeaponNameText; // 0x2c8
	UTextBlock* SecondaryWeaponNameText; // 0x2d0
	UImage* PrimaryWeaponImage; // 0x2d8
	UImage* SecondaryWeaponImage; // 0x2e0
	USizeBox* PrimaryWeaponImageSizeBox; // 0x2e8
	USizeBox* SecondaryWeaponImageSizeBox; // 0x2f0
};

struct UPortalWarsChallengePanelWidget : UPortalWarsUserWidget {
	UPanelWidget* EntriesPanel; // 0x2a8
	UPortalWarsChallengeEntryWidget* ChallengeEntryWidgetClass; // 0x2b0
	UWidget* AlmostThereRoot; // 0x2b8
	UPanelWidget* AlmostTherePanel; // 0x2c0
	UTextBlock* ChallengesDisabledText; // 0x2c8
	UOverlay* ChallengesDisabledRoot; // 0x2d0
	UPortalWarsButtonWidget* ChallengesButton; // 0x2d8
	UTextBlock* TimeDescriptionText; // 0x2e8
};

struct UPortalWarsMainMenuWidget : UPortalWarsMenuWidget {
	UPortalWarsMenuWidget* PlayMenu; // 0x338
	UPortalWarsMenuWidget* BattlePassMenu; // 0x340
	UPortalWarsMenuWidget* ReferralPassMenu; // 0x348
	UPortalWarsMenuWidget* LockerMenu; // 0x350
	UPortalWarsMenuWidget* CareerMenu; // 0x358
	UPortalWarsMenuWidget* ItemShopMenu; // 0x360
	UPortalWarsMenuWidget* ChallengesMenu; // 0x368
	UPortalWarsMenuWidget* RewardCenterMenu; // 0x370
	UPortalWarsMenuWidget* SocialMenu; // 0x378
	UPortalWarsMenuWidget* LootboxMenu; // 0x380
	UPortalWarsDialogWidget* MenuSelectDialogWidgetClass; // 0x388
};

struct UARQRCodeComponent : UARComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
};

struct UUniformGridPanel : UPanelWidget {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UAnimationSharingSetup : UObject {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct UAISense_Team : UAISense {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct UAREnvironmentCaptureProbe : UARTrackedGeometry {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct UGameplayTask_SpawnActor : UGameplayTask {
	FMulticastInlineDelegate Success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct UAISubsystem : UObject {
	UAISystem* AISystem; // 0x30
};

struct UAnimNotifyState_TimedParticleEffect : UAnimNotifyState {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UPortalWarsGameInstance : UGameInstance {
	bool bMovieWillAutocompleteWhenLoadFinishes; // 0x1a9
	UPortalWarsLoadingScreenWidget* LoadingScreenWidget; // 0x1b0
	TSoftClassPtr<UObject> LoadingScreenWidgetClass; // 0x1b8
	FGameConfig GameSettings; // 0x1e0
};

struct ACineCameraActor : ACameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7a0
};

struct UBaseBrushTool : UMeshSurfacePointTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x188
	UBrushStampIndicator* BrushStampIndicator; // 0x1b0
};

struct UPortalWarsPlayStreakDialogWidget : UPortalWarsTxnDialogWidget {
	UTextBlock* CurrencyText; // 0x3c8
	UPortalWarsPlayStreakRewardWidget* PlayStreakReward; // 0x3d0
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

struct UPortalWarsLockerWidget : UPortalWarsMenuWidget {
	UPortalWarsLockerSubWidget* InspectWidget; // 0x338
};

struct ASceneCaptureCube : ASceneCapture {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x230
};

struct AAtmosphericFog : AInfo {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x220
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

struct USceneCaptureComponent2D : USceneCaptureComponent {
	ECameraProjectionMode ProjectionType; // 0x2c0
	float FOVAngle; // 0x2c4
	float OrthoWidth; // 0x2c8
	UTextureRenderTarget2D* TextureTarget; // 0x2d0
	ESceneCaptureCompositeMode CompositeMode; // 0x2d8
	FPostProcessSettings PostProcessSettings; // 0x2e0
	float PostProcessBlendWeight; // 0x830
	char bOverride_CustomNearClippingPlane : 1; // 0x834
	float CustomNearClippingPlane; // 0x838
	bool bUseCustomProjectionMatrix; // 0x83c
	FMatrix CustomProjectionMatrix; // 0x840
	bool bEnableClipPlane; // 0x880
	FVector ClipPlaneBase; // 0x884
	FVector ClipPlaneNormal; // 0x890
	char bCameraCutThisFrame : 1; // 0x89c
	char bConsiderUnrenderedOpaquePixelAsFullyTranslucent : 1; // 0x89c
	bool bDisableFlipCopyGLES; // 0x8a0
};

struct UPortalWarsRoundResultWidget : UUserWidget {
	UTextBlock* TitleText; // 0x260
	UImage* LeftStarImage; // 0x268
	UImage* RightStarImage; // 0x270
	UImage* TopBorderImage; // 0x278
	UImage* BottomBorderImage; // 0x280
	UWidgetAnimation* FadeInAnimation; // 0x2a0
};

struct APortalWarsLobbyGameState : APortalWarsBaseGameState {
	FMatchSummaryInfo PrevGameData; // 0x6e8
	AStaticMeshActor* TVScreen; // 0x838
};

struct UParticleModuleSizeScale : UParticleModuleSizeBase {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct UInputTouchDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UPortalWarsEmoteWheelWedgeWidget : UUserWidget {
	UImage* ActionIcon; // 0x260
	UTextBlock* ActionText; // 0x268
	EWedgeType WedgeType; // 0x270
	UTexture* WeaponInspectTexture; // 0x290
	float StartAngle; // 0x298
	float EndAngle; // 0x29c
	UImage* WedgeImage; // 0x2a0
	UTexture* InactiveTexture; // 0x2a8
	UTexture* ActiveTexture; // 0x2b0
};

struct UMaterialExpressionSine : UMaterialExpression {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UARLifeCycleComponent : USceneComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct UPWKillcamTransitionWidget : UUserWidget {
	UWidgetAnimation* FadeInAnimation; // 0x260
	UWidgetAnimation* FadeOutAnimation; // 0x268
};

struct UParticleModuleRotationRate_Seeded : UParticleModuleRotationRate {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UARTrackedObject : UARTrackedGeometry {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct ANeutralFlagItemPickup : AFlagItemPickup {
	UMaterialInstance* NeutralFlagMaterial; // 0x320
	APortalWarsNeutralCTFGameState* NeutralCTFGameState; // 0x328
};

struct UBoneMaskFilter : UObject {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UObjectLibrary : UObject {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct APortalWarsKOTHHill : AActor {
	int32_t HillTimeRemaining; // 0x220
	EKOTHHillState HillState; // 0x224
	bool bIsInitialHill; // 0x225
	int32_t Order; // 0x228
	UMaterialInstance* DefaultHillMaterial; // 0x230
	UMaterialInstance* BlueHillMaterial; // 0x238
	UMaterialInstance* RedHillMaterial; // 0x240
	UMaterialInstance* DefaultParticleMaterial; // 0x248
	UMaterialInstance* BlueParticleMaterial; // 0x250
	UMaterialInstance* RedParticleMaterial; // 0x258
	USceneComponent* reachableLocComponent; // 0x260
	bool bIsActive; // 0x268
	UStaticMeshComponent* Mesh; // 0x270
	UStaticMeshComponent* OverlapMesh; // 0x278
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

struct UCircularThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct UNiagaraEmitter : UObject {
	bool bLocalSpace; // 0x28
	bool bDeterminism; // 0x29
	int32_t RandomSeed; // 0x2c
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

struct UMovieSceneParticleParameterTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
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

struct UUserDefinedCaptureProtocol : UMovieSceneImageCaptureProtocolBase {
	UWorld* World; // 0x58
};

struct APortalWarsTakedownHUD : APortalWarsRoundHUD {
	UPortalWarsTakedownHUDOverlayWidget* TakedownHUDOverlayWidget; // 0x448
};

struct ARecastNavMesh : ANavigationData {
	char bDrawTriangleEdges : 1; // 0x428
	char bDrawPolyEdges : 1; // 0x428
	char bDrawFilledPolys : 1; // 0x428
	char bDrawNavMeshEdges : 1; // 0x428
	char bDrawTileBounds : 1; // 0x428
	char bDrawPathCollidingGeometry : 1; // 0x428
	char bDrawTileLabels : 1; // 0x428
	char bDrawPolygonLabels : 1; // 0x428
	char bDrawDefaultPolygonCost : 1; // 0x429
	char bDrawPolygonFlags : 1; // 0x429
	char bDrawLabelsOnPathNodes : 1; // 0x429
	char bDrawNavLinks : 1; // 0x429
	char bDrawFailedNavLinks : 1; // 0x429
	char bDrawClusters : 1; // 0x429
	char bDrawOctree : 1; // 0x429
	char bDrawOctreeDetails : 1; // 0x429
	char bDrawMarkedForbiddenPolys : 1; // 0x42a
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x42a
	float DrawOffset; // 0x42c
	char bFixedTilePoolSize : 1; // 0x430
	int32_t TilePoolSize; // 0x434
	float TileSizeUU; // 0x438
	float CellSize; // 0x43c
	float CellHeight; // 0x440
	float AgentRadius; // 0x444
	float AgentHeight; // 0x448
	float AgentMaxSlope; // 0x44c
	float AgentMaxStepHeight; // 0x450
	float MinRegionArea; // 0x454
	float MergeRegionSize; // 0x458
	float MaxSimplificationError; // 0x45c
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x460
	int32_t TileNumberHardLimit; // 0x464
	int32_t PolyRefTileBits; // 0x468
	int32_t PolyRefNavPolyBits; // 0x46c
	int32_t PolyRefSaltBits; // 0x470
	FVector NavMeshOriginOffset; // 0x474
	float DefaultDrawDistance; // 0x480
	float DefaultMaxSearchNodes; // 0x484
	float DefaultMaxHierarchicalSearchNodes; // 0x488
	ERecastPartitioning RegionPartitioning; // 0x48c
	ERecastPartitioning LayerPartitioning; // 0x48d
	int32_t RegionChunkSplits; // 0x490
	int32_t LayerChunkSplits; // 0x494
	char bSortNavigationAreasByCost : 1; // 0x498
	char bPerformVoxelFiltering : 1; // 0x498
	char bMarkLowHeightAreas : 1; // 0x498
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x498
	char bFilterLowSpanSequences : 1; // 0x498
	char bFilterLowSpanFromTileCache : 1; // 0x498
	char bDoFullyAsyncNavDataGathering : 1; // 0x498
	char bUseBetterOffsetsFromCorners : 1; // 0x498
	char bStoreEmptyTileLayers : 1; // 0x499
	char bUseVirtualFilters : 1; // 0x499
	char bAllowNavLinkAsPathEnd : 1; // 0x499
	char bUseVoxelCache : 1; // 0x499
	float TileSetUpdateInterval; // 0x49c
	float HeuristicScale; // 0x4a0
	float VerticalDeviationFromGroundCompensation; // 0x4a4
};

struct UPortalWarsGameSessionReconnectDialog : UPortalWarsDialogWidget {
	UPortalWarsButtonWidget* ReconnectButton; // 0x390
	UWidgetSwitcher* ReconnectSwitcher; // 0x398
};

struct ARadialForceActor : ARigidBodyBase {
	URadialForceComponent* ForceComponent; // 0x220
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

struct UInAppPurchaseQueryCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UNiagaraDataInterfacePlatformSet : UNiagaraDataInterface {
	FNiagaraPlatformSet Platforms; // 0x38
};

struct UBTDecorator_LOSToEnemy : UBTDecorator {
	float MaxDistance; // 0x68
	bool bUseWeaponFalloffRange; // 0x6c
};

struct UThrobber : UWidget {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct UAkDurationCallbackInfo : UAkEventCallbackInfo {
	float Duration; // 0x38
	float EstimatedDuration; // 0x3c
	int32_t AudioNodeID; // 0x40
	int32_t MediaID; // 0x44
	bool bStreaming; // 0x48
};

struct UGeometryCollection : UObject {
	bool EnableClustering; // 0x30
	int32_t ClusterGroupIndex; // 0x34
	int32_t MaxClusterLevel; // 0x38
	TArray<float> DamageThreshold; // 0x40
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x50
	TArray<FGeometryCollectionSource> GeometrySource; // 0x58
	TArray<UMaterialInterface*> Materials; // 0x68
	ECollisionTypeEnum CollisionType; // 0x78
	EImplicitTypeEnum ImplicitType; // 0x79
	int32_t MinLevelSetResolution; // 0x7c
	int32_t MaxLevelSetResolution; // 0x80
	int32_t MinClusterLevelSetResolution; // 0x84
	int32_t MaxClusterLevelSetResolution; // 0x88
	float CollisionObjectReductionPercentage; // 0x8c
	bool bMassAsDensity; // 0x90
	float Mass; // 0x94
	float MinimumMassClamp; // 0x98
	float CollisionParticlesFraction; // 0x9c
	int32_t MaximumCollisionParticles; // 0xa0
	TArray<FGeometryCollectionSizeSpecificData> SizeSpecificData; // 0xa8
	bool EnableRemovePiecesOnFracture; // 0xb8
	TArray<UMaterialInterface*> RemoveOnFractureMaterials; // 0xc0
	FGuid PersistentGuid; // 0xd0
	FGuid StateGuid; // 0xe0
	int32_t BoneSelectedMaterialIndex; // 0xf0
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

struct UMovieSceneHookSection : UMovieSceneSection {
	char bRequiresRangedHook : 1; // 0xf8
	char bRequiresTriggerHooks : 1; // 0xf8
};

struct UDialogueWave : UObject {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct ULogoutCallbackProxy : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UCurveFloat : UCurveBase {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct UPortalWarsPlaylistEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* DescriptionText; // 0x420
	UImage* DisplayImage; // 0x428
	UImage* IconImage; // 0x430
	UWidget* RankRoot; // 0x438
	UImage* RankImage; // 0x440
	UTextBlock* RankXPText; // 0x448
	UWidget* FeaturedIndicator; // 0x450
	UWidget* FeaturedScrim; // 0x458
	UTextBlock* NoteText; // 0x460
	UWidget* NoteRoot; // 0x468
	UWidget* XPBoostIndicator; // 0x470
	UTextBlock* XPBoostText; // 0x478
	UWidget* CrossplayIndicator; // 0x480
	EHorizontalAlignment HorizontalAlignment; // 0x488
	UWidgetSwitcher* ScrimSwitcher; // 0x490
	bool bIsPreviewOnly; // 0x498
	FString PlaylistInternalName; // 0x520
	UWidgetSwitcher* CheckBoxSwitcher; // 0x538
	bool bIsCheckbox; // 0x540
	UAkAudioEvent* OpenModeSelectEvent; // 0x548
};

struct UPlatformEventsComponent : UActorComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
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

struct UInputAxisKeyDelegateBinding : UInputDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct AFlagItemPickup : APortalWarsGunPickup {
	bool bAtInitialSpawn; // 0x2c0
	char TeamIndex; // 0x2c1
	UCapsuleComponent* CapsuleCollisionComp; // 0x2d0
	UMaterialInstance* FriendlyTeamFlagMaterial; // 0x2d8
	UMaterialInstance* EnemyTeamFlagMaterial; // 0x2e0
	UMaterialInstance* AlphaTeamFlagMaterial; // 0x2e8
	UMaterialInstance* BravoTeamFlagMaterial; // 0x2f0
	float CurrentTimeToReset; // 0x2f8
	APortalWarsCTFGameState* CTFGameState; // 0x308
	FVector BoxExtent; // 0x310
	float BoxZOffset; // 0x31c
};

struct UPortalWarsGamepadSettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsSpinSliderWidget* ControllerHorSens; // 0x358
	UPortalWarsSpinSliderWidget* ControllerVertSens; // 0x360
	UPortalWarsSpinSliderWidget* ControllerAccelSens; // 0x368
	UPortalWarsSpinSliderWidget* ControllerZoomMult; // 0x370
	UPortalWarsSpinSliderWidget* ControllerInnerDeadzone; // 0x378
	UPortalWarsSpinSliderWidget* ControllerOuterDeadzone; // 0x380
	UPortalWarsCheckBoxWidget* ControllerInvertLook; // 0x388
	UPortalWarsCheckBoxWidget* ControllerAutosprint; // 0x390
	UPortalWarsCheckBoxWidget* ControllerVibration; // 0x398
	UPortalWarsSpinSliderWidget* ControllerAimAssistStrength; // 0x3a0
};

struct UPortalWarsReferralPassWidget : UPortalWarsRewardPassWidget {
	URichTextBlock* NextRewardRichText; // 0x438
};

struct UNiagaraDataInterfaceVolumeTexture : UNiagaraDataInterface {
	UVolumeTexture* Texture; // 0x38
};

struct UWindDirectionalSourceComponent : USceneComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
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

struct UCullingField : UFieldNodeBase {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct UInterpTrackInstColorProp : UInterpTrackInstProperty {
	FColor ResetColor; // 0x58
};

struct UMaterialExpressionAdd : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
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

struct UPortalWarsSettingsSubWidget : UPortalWarsMenuWidget {
	UPortalWarsButtonWidget* ApplyButton; // 0x340
	UPortalWarsButtonWidget* RestoreButton; // 0x348
	UPortalWarsDiscardSettingsDialog* DiscardDialogClass; // 0x350
};

struct UParticleModuleEventReceiverKillParticles : UParticleModuleEventReceiverBase {
	char bStopSpawning : 1; // 0x40
};

struct UMaterialExpressionTransformPosition : UMaterialExpression {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UParticleModuleLocationEmitterDirect : UParticleModuleLocationBase {
	FName EmitterName; // 0x30
};

struct UPortalWarsMKBSettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsSpinSliderWidget* MouseHorSens; // 0x358
	UPortalWarsSpinSliderWidget* MouseVertSens; // 0x360
	UPortalWarsSpinSliderWidget* MouseZoomMult; // 0x368
	UPortalWarsCheckBoxWidget* MouseInvertLook; // 0x370
	UPortalWarsCheckBoxWidget* MouseAutosprint; // 0x378
	UPortalWarsCheckBoxWidget* MouseSmoothing; // 0x380
	UPortalWarsCheckBoxWidget* ToggleCrouch; // 0x388
	UPortalWarsCheckBoxWidget* ToggleSprint; // 0x390
	UPortalWarsCheckBoxWidget* ToggleZoom; // 0x398
};

struct UBorderSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct ACameraActor : AActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x220
	UCameraComponent* CameraComponent; // 0x228
	USceneComponent* SceneComponent; // 0x230
	char bConstrainAspectRatio : 1; // 0x240
	float AspectRatio; // 0x244
	float FOVAngle; // 0x248
	float PostProcessBlendWeight; // 0x24c
	FPostProcessSettings PostProcessSettings; // 0x250
};

struct UAkPS4InitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UPortalWarsTakedownVIPPlayerStatusWidget : UPortalWarsRoundPlayerStatusWidget {
	UImage* VIPImage; // 0x2a8
};

struct UParticleModuleOrientationAxisLock : UParticleModuleOrientationBase {
	EParticleAxisLock LockAxisFlags; // 0x30
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

struct UMovieSceneEventSection : UMovieSceneSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct UInterpTrackVectorBase : UInterpTrack {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UPortalWarsKOTHHillIndicator : UPortalWarsHillIndicatorWidget {
	UImage* OnScreenBackgroundImage; // 0x2f0
	UImage* OffScreenBackgroundImage; // 0x2f8
	UTextBlock* OnScreenTimeText; // 0x300
	UTextBlock* OffScreenTimeText; // 0x308
};

struct UPlaneReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x270
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
	UBoxComponent* PreviewCaptureBox; // 0x280
};

struct USkeletalBodySetup : UBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a0
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
};

struct UBuildPatchManifest : UObject {
	char ManifestFileVersion; // 0x28
	bool bIsFileData; // 0x29
	uint32_t AppID; // 0x2c
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

struct UPortalWarsClaimChallengeIndicatorWidget : UUserWidget {
	UTextBlock* ClaimText; // 0x260
};

struct ASceneCapture : AActor {
	UStaticMeshComponent* MeshComp; // 0x220
	USceneComponent* SceneComponent; // 0x228
};

struct UMovieSceneCameraShakeSourceShakeSection : UMovieSceneSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct UMaterial : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x88
	UPhysicalMaterialMask* PhysMaterialMask; // 0x90
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x98
	FScalarMaterialInput Metallic; // 0xd8
	FScalarMaterialInput Specular; // 0xec
	FScalarMaterialInput Anisotropy; // 0x100
	FVectorMaterialInput Normal; // 0x114
	FVectorMaterialInput Tangent; // 0x128
	FColorMaterialInput EmissiveColor; // 0x13c
	EMaterialDomain MaterialDomain; // 0x150
	EBlendMode BlendMode; // 0x151
	EDecalBlendMode DecalBlendMode; // 0x152
	EMaterialDecalResponse MaterialDecalResponse; // 0x153
	EMaterialShadingModel ShadingModel; // 0x154
	char bCastDynamicShadowAsMasked : 1; // 0x155
	FMaterialShadingModelField ShadingModels; // 0x156
	float OpacityMaskClipValue; // 0x158
	FVectorMaterialInput WorldPositionOffset; // 0x15c
	FScalarMaterialInput Refraction; // 0x170
	FMaterialAttributesInput MaterialAttributes; // 0x184
	FScalarMaterialInput PixelDepthOffset; // 0x19c
	FShadingModelMaterialInput ShadingModelFromMaterialExpression; // 0x1b0
	char bEnableSeparateTranslucency : 1; // 0x1c4
	char bEnableResponsiveAA : 1; // 0x1c4
	char bScreenSpaceReflections : 1; // 0x1c4
	char bContactShadows : 1; // 0x1c4
	char TwoSided : 1; // 0x1c4
	char DitheredLODTransition : 1; // 0x1c4
	char DitherOpacityMask : 1; // 0x1c4
	char bAllowNegativeEmissiveColor : 1; // 0x1c4
	ETranslucencyLightingMode TranslucencyLightingMode; // 0x1c5
	char bEnableMobileSeparateTranslucency : 1; // 0x1c6
	int32_t NumCustomizedUVs; // 0x1c8
	float TranslucencyDirectionalLightingIntensity; // 0x1cc
	float TranslucentShadowDensityScale; // 0x1d0
	float TranslucentSelfShadowDensityScale; // 0x1d4
	float TranslucentSelfShadowSecondDensityScale; // 0x1d8
	float TranslucentSelfShadowSecondOpacity; // 0x1dc
	float TranslucentBackscatteringExponent; // 0x1e0
	FLinearColor TranslucentMultipleScatteringExtinction; // 0x1e4
	float TranslucentShadowStartOffset; // 0x1f4
	char bDisableDepthTest : 1; // 0x1f8
	char bWriteOnlyAlpha : 1; // 0x1f8
	char bGenerateSphericalParticleNormals : 1; // 0x1f8
	char bTangentSpaceNormal : 1; // 0x1f8
	char bUseEmissiveForDynamicAreaLighting : 1; // 0x1f8
	char bBlockGI : 1; // 0x1f8
	char bUsedAsSpecialEngineMaterial : 1; // 0x1f8
	char bUsedWithSkeletalMesh : 1; // 0x1f8
	char bUsedWithEditorCompositing : 1; // 0x1f9
	char bUsedWithParticleSprites : 1; // 0x1f9
	char bUsedWithBeamTrails : 1; // 0x1f9
	char bUsedWithMeshParticles : 1; // 0x1f9
	char bUsedWithNiagaraSprites : 1; // 0x1f9
	char bUsedWithNiagaraRibbons : 1; // 0x1f9
	char bUsedWithNiagaraMeshParticles : 1; // 0x1f9
	char bUsedWithGeometryCache : 1; // 0x1f9
	char bUsedWithStaticLighting : 1; // 0x1fa
	char bUsedWithMorphTargets : 1; // 0x1fa
	char bUsedWithSplineMeshes : 1; // 0x1fa
	char bUsedWithInstancedStaticMeshes : 1; // 0x1fa
	char bUsedWithGeometryCollections : 1; // 0x1fa
	char bUsesDistortion : 1; // 0x1fa
	char bUsedWithClothing : 1; // 0x1fa
	char bUsedWithWater : 1; // 0x1fc
	char bUsedWithHairStrands : 1; // 0x1fc
	char bUsedWithLidarPointCloud : 1; // 0x1fc
	char bUsedWithVirtualHeightfieldMesh : 1; // 0x1fc
	char bUsedWithUI : 1; // 0x200
	char bAutomaticallySetUsageInEditor : 1; // 0x200
	char bFullyRough : 1; // 0x200
	char bUseFullPrecision : 1; // 0x200
	char bUseLightmapDirectionality : 1; // 0x200
	char bUseAlphaToCoverage : 1; // 0x200
	char bForwardRenderUsePreintegratedGFForSimpleIBL : 1; // 0x204
	char bUseHQForwardReflections : 1; // 0x208
	char bUsePlanarForwardReflections : 1; // 0x208
	char bNormalCurvatureToRoughness : 1; // 0x208
	EMaterialTessellationMode D3D11TessellationMode; // 0x209
	char bEnableCrackFreeDisplacement : 1; // 0x20a
	char bEnableAdaptiveTessellation : 1; // 0x20a
	char AllowTranslucentCustomDepthWrites : 1; // 0x20a
	char Wireframe : 1; // 0x20a
	EMaterialShadingRate ShadingRate; // 0x20b
	char bCanMaskedBeAssumedOpaque : 1; // 0x20c
	char bIsMasked : 1; // 0x20c
	char bIsPreviewMaterial : 1; // 0x20c
	char bIsFunctionPreviewMaterial : 1; // 0x20c
	char bUseMaterialAttributes : 1; // 0x20c
	char bCastRayTracedShadows : 1; // 0x20c
	char bUseTranslucencyVertexFog : 1; // 0x20c
	char bApplyCloudFogging : 1; // 0x20c
	char bIsSky : 1; // 0x20d
	char bComputeFogPerPixel : 1; // 0x20d
	char bOutputTranslucentVelocity : 1; // 0x20d
	char bAllowDevelopmentShaderCompile : 1; // 0x20d
	char bIsMaterialEditorStatsMaterial : 1; // 0x20d
	EBlendableLocation BlendableLocation; // 0x20e
	char BlendableOutputAlpha : 1; // 0x20f
	char bEnableStencilTest : 1; // 0x20f
	EMaterialStencilCompare StencilCompare; // 0x210
	char StencilRefValue; // 0x211
	ERefractionMode RefractionMode; // 0x212
	int32_t BlendablePriority; // 0x214
	char bIsBlendable : 1; // 0x218
	uint32_t UsageFlagWarnings; // 0x21c
	float RefractionDepthBias; // 0x220
	FGuid StateId; // 0x224
	float MaxDisplacement; // 0x234
	FMaterialCachedExpressionData CachedExpressionData; // 0x268
};

struct UPanelSlot : UVisual {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
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

struct UPortalWarsNotificationOverlayWidget : UPortalWarsUserWidget {
	UPortalWarsInviteEntryWidget* InviteEntryWidgetClass; // 0x2a8
	UPortalWarsFriendRequestEntry* RequestEntryWidgetClass; // 0x2b0
	UUserWidget* ChunkInstallWidgetClass; // 0x2b8
	UPanelWidget* MessagePanel; // 0x2c0
	UPanelWidget* NotificationPanel; // 0x2c8
};

struct UPortalWarsRankLeaderboardEntry : UPortalWarsLeaderboardEntryWidget {
	UTextBlock* RankXPText; // 0xbd8
};

struct UParticleModuleParameterDynamic_Seeded : UParticleModuleParameterDynamic {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct UAnnouncerInterface : UObject {
	UPortalWarsAkComponent* AkAnnouncer; // 0x50
};

struct UPortalWarsControlSettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsSettingsSubWidget* SettingsMenu; // 0x358
	UPortalWarsSettingsSubWidget* ControlsMenu; // 0x360
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

struct UCheckBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FCheckBoxStyle CheckBoxStyle; // 0x30
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

struct UAudioImpulseResponse : UObject {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct APainCausingVolume : APhysicsVolume {
	char bPainCausing : 1; // 0x268
	float DamagePerSec; // 0x26c
	UDamageType* DamageType; // 0x270
	float PainInterval; // 0x278
	char bEntryPain : 1; // 0x27c
	char BACKUP_bPainCausing : 1; // 0x27c
	AController* DamageInstigator; // 0x280
};

struct AAkReverbVolume : AVolume {
	char bEnabled : 1; // 0x258
	UAkAuxBus* AuxBus; // 0x260
	FString AuxBusName; // 0x268
	float SendLevel; // 0x278
	float FadeRate; // 0x27c
	float Priority; // 0x280
	UAkLateReverbComponent* LateReverbComponent; // 0x288
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

struct UInterpTrackParticleReplay : UInterpTrack {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct UPortalWarsModeSelectorWidget : UPortalWarsMenuWidget {
	UPortalWarsModeSelectorEntryWidget* SelectedWidget; // 0x340
	UPanelWidget* ItemsPanel; // 0x348
	UPortalWarsModeSelectorEntryWidget* ModeSelectorEntryClass; // 0x350
	UImage* ModeImage; // 0x358
	UTextBlock* ModeName; // 0x360
	UTextBlock* ModeDescription; // 0x368
	UPortalWarsButtonWidget* PresetOptionsButton; // 0x370
	UPortalWarsFileOptionsDialogWidget* PresetOptionsDialogClass; // 0x378
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

struct UEdGraphNode_Documentation : UEdGraphNode {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct UMaterialExpressionFunctionOutput : UMaterialExpression {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
};

struct UPortalWarsGameModeInfoWidget : UUserWidget {
	UTextBlock* DisplayNameText; // 0x260
	UTextBlock* DescriptionText; // 0x268
	UImage* DisplayImage; // 0x270
	UImage* IconImage; // 0x278
	UTextBlock* MaxPartySizeText; // 0x280
	UTextBlock* PlayersText; // 0x288
	UTextBlock* ScoreLimitText; // 0x290
};

struct USpacer : UWidget {
	FVector2D Size; // 0x108
};

struct UOnsetNRTSettings : UAudioSynesthesiaNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float Sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct UInteractiveTool : UObject {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
};

struct UActorChannel : UChannel {
	AActor* Actor; // 0x68
	TArray<UObject*> CreateSubObjects; // 0x158
};

struct UMovieSceneWidgetMaterialTrack : UMovieSceneMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x90
	FName TrackName; // 0xa0
};

struct ANeutralFlagItem : AFlagItem {
	APortalWarsNeutralCTFGameState* NeutralCTFGameState; // 0x6d8
};

struct ASceneCapture2D : ASceneCapture {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x230
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
	bool bAllowModifierKeys; // 0x6b8
	bool bAllowGamepadKeys; // 0x6b9
	TArray<FKey> EscapeKeys; // 0x6c0
	FMulticastInlineDelegate OnKeySelected; // 0x6d0
	FMulticastInlineDelegate OnIsSelectingKeyChanged; // 0x6e0
};

struct UMaterialExpressionGIReplace : UMaterialExpression {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UInAppPurchaseRestoreCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UAkComponent : USceneComponent {
	bool bUseSpatialAudio; // 0x1f8
	UAkAuxBus* EarlyReflectionAuxBus; // 0x200
	FString EarlyReflectionAuxBusName; // 0x208
	int32_t EarlyReflectionOrder; // 0x218
	float EarlyReflectionBusSendGain; // 0x21c
	float EarlyReflectionMaxPathLength; // 0x220
	ECollisionChannel OcclusionCollisionChannel; // 0x224
	char EnableSpotReflectors : 1; // 0x22c
	float roomReverbAuxBusGain; // 0x230
	int32_t diffractionMaxEdges; // 0x234
	int32_t diffractionMaxPaths; // 0x238
	float diffractionMaxPathLength; // 0x23c
	char DrawFirstOrderReflections : 1; // 0x240
	char DrawSecondOrderReflections : 1; // 0x240
	char DrawHigherOrderReflections : 1; // 0x240
	char DrawDiffraction : 1; // 0x240
	bool StopWhenOwnerDestroyed; // 0x244
	float AttenuationScalingFactor; // 0x248
	float OcclusionRefreshInterval; // 0x24c
	bool bUseReverbVolumes; // 0x250
	UAkAudioEvent* AkAudioEvent; // 0x258
	FString EventName; // 0x260
	char bAutoManageAttachment : 1; // 0x3e0
	EAttachmentRule AutoAttachLocationRule; // 0x3e1
	EAttachmentRule AutoAttachRotationRule; // 0x3e2
	EAttachmentRule AutoAttachScaleRule; // 0x3e3
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x3e4
	FName AutoAttachSocketName; // 0x3ec
};

struct UAmmoCounterWidgetComponent : UWidgetComponent {
	UPortalWarsAmmoCounterWidget* AmmoCounterWidget; // 0x5a0
	float TickInterval; // 0x5b0
};

struct UMaterialExpressionRound : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UBTTask_Wait : UBTTaskNode {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct UGameplayTagsList : UObject {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct UProceduralMeshComponent : UMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x480
	bool bUseAsyncCooking; // 0x481
	UBodySetup* ProcMeshBodySetup; // 0x488
	TArray<FProcMeshSection> ProcMeshSections; // 0x490
	TArray<FKConvexElem> CollisionConvexElems; // 0x4a0
	FBoxSphereBounds LocalBounds; // 0x4b0
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x4d0
};

struct UGizmoTransformProxyTransformSource : UGizmoBaseTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct UPortalWarsRankListEntryWidget : UUserWidget {
	UTextBlock* RankNameText; // 0x260
	UTextBlock* RankXPText; // 0x268
	UImage* RankIcon; // 0x270
};

struct ANavigationTestingActor : AActor {
	UCapsuleComponent* CapsuleComponent; // 0x230
	UNavigationInvokerComponent* InvokerComponent; // 0x238
	char bActAsNavigationInvoker : 1; // 0x240
	FNavAgentProperties NavAgentProps; // 0x248
	FVector QueryingExtent; // 0x278
	ANavigationData* MyNavData; // 0x288
	FVector ProjectedLocation; // 0x290
	char bProjectedLocationValid : 1; // 0x29c
	char bSearchStart : 1; // 0x29c
	float CostLimitFactor; // 0x2a0
	float MinimumCostLimit; // 0x2a4
	char bBacktracking : 1; // 0x2a8
	char bUseHierarchicalPathfinding : 1; // 0x2a8
	char bGatherDetailedInfo : 1; // 0x2a8
	char bDrawDistanceToWall : 1; // 0x2a8
	char bShowNodePool : 1; // 0x2a8
	char bShowBestPath : 1; // 0x2a8
	char bShowDiffWithPreviousStep : 1; // 0x2a8
	char bShouldBeVisibleInGame : 1; // 0x2a8
	ENavCostDisplay CostDisplayMode; // 0x2ac
	FVector2D TextCanvasOffset; // 0x2b0
	char bPathExist : 1; // 0x2b8
	char bPathIsPartial : 1; // 0x2b8
	char bPathSearchOutOfNodes : 1; // 0x2b8
	float PathfindingTime; // 0x2bc
	float PathCost; // 0x2c0
	int32_t PathfindingSteps; // 0x2c4
	ANavigationTestingActor* OtherActor; // 0x2c8
	UNavigationQueryFilter* FilterClass; // 0x2d0
	int32_t ShowStepIndex; // 0x2d8
	float OffsetFromCornersDistance; // 0x2dc
};

struct UPortalWarsGamepadSelectWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsTextCarouselWidget* GameplayPreset; // 0x358
	UWidgetSwitcher* ControllerSwitcher; // 0x360
	UPortalWarsControllerPresetWidget* XboxButtonLayout; // 0x368
	UPortalWarsControllerPresetWidget* PS4ButtonLayout; // 0x370
	UPortalWarsGamepadBindingMissingDialogWidget* BindingWarningDialogClass; // 0x378
	UPortalWarsGamepadBindingRestoreDialogWidget* BindingDefaultsDialogClass; // 0x380
	UPortalWarsGamepadBindingCustomizeButtonWidget* CustomizeButton; // 0x388
};

struct UComboButtonWidgetStyle : USlateWidgetStyleContainerBase {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct ULocalLightComponent : ULightComponent {
	ELightUnits IntensityUnits; // 0x328
	float Radius; // 0x32c
	float AttenuationRadius; // 0x330
	FLightmassPointLightSettings LightmassSettings; // 0x334
};

struct UPortalWarsEmoteWheelWidget : UPortalWarsUserWidget {
	UCanvasPanel* EmoteWheelRoot; // 0x2a8
	float SpinnerDistance; // 0x2b0
	float MinSelectDistance; // 0x2b4
	UPortalWarsEmoteWheelSpinnerWidget* EmoteWheelSpinner; // 0x2c0
	TArray<UPortalWarsEmoteWheelWedgeWidget*> Wedges; // 0x2c8
	UPortalWarsEmoteWheelWedgeWidget* SelectedWedge; // 0x2d8
	UPortalWarsEmoteWheelWedgeWidget* PrevSelectedWedge; // 0x2e0
	UAkAudioEvent* ClosedEvent; // 0x2e8
	UAkAudioEvent* HoveredEvent; // 0x2f0
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

struct UBoxFalloff : UFieldNodeFloat {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct UScrollBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
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

struct UInstancedStaticMeshComponent : UStaticMeshComponent {
	TArray<FInstancedStaticMeshInstanceData> PerInstanceSMData; // 0x4e0
	int32_t NumCustomDataFloats; // 0x4f0
	TArray<float> PerInstanceSMCustomData; // 0x4f8
	int32_t InstancingRandomSeed; // 0x508
	int32_t InstanceStartCullDistance; // 0x50c
	int32_t InstanceEndCullDistance; // 0x510
	TArray<int32_t> InstanceReorderTable; // 0x518
	int32_t NumPendingLightmaps; // 0x570
	TArray<FInstancedStaticMeshMappingInfo> CachedMappings; // 0x578
};

struct UPortalWarsUnlockNoteEntryWidget : UUserWidget {
	UTextBlock* NoteText; // 0x260
	UImage* BulletImage; // 0x268
	FSlateColor ImportantColor; // 0x270
};

struct UPortalWarsRenameReplayDialogWidget : UPortalWarsTxnDialogWidget {
	UPortalWarsTextInputWidget* NameInput; // 0x3d8
};

struct UAnimationAsset : UObject {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct APlayerController : AController {
	UPlayer* Player; // 0x298
	APawn* AcknowledgedPawn; // 0x2a0
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2a8
	AHUD* MyHUD; // 0x2b0
	APlayerCameraManager* PlayerCameraManager; // 0x2b8
	APlayerCameraManager* PlayerCameraManagerClass; // 0x2c0
	bool bAutoManageActiveCameraTarget; // 0x2c8
	FRotator TargetViewRotation; // 0x2cc
	float SmoothTargetViewRotationSpeed; // 0x2e4
	TArray<AActor*> HiddenActors; // 0x2f0
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x300
	float LastSpectatorStateSynchTime; // 0x314
	FVector LastSpectatorSyncLocation; // 0x318
	FRotator LastSpectatorSyncRotation; // 0x324
	int32_t ClientCap; // 0x330
	UCheatManager* CheatManager; // 0x338
	UCheatManager* CheatClass; // 0x340
	UPlayerInput* PlayerInput; // 0x348
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x350
	char bPlayerIsWaiting : 1; // 0x3d0
	char NetPlayerIndex; // 0x3d4
	UNetConnection* PendingSwapConnection; // 0x410
	UNetConnection* NetConnection; // 0x418
	float InputYawScale; // 0x42c
	float InputPitchScale; // 0x430
	float InputRollScale; // 0x434
	char bShowMouseCursor : 1; // 0x438
	char bEnableClickEvents : 1; // 0x438
	char bEnableTouchEvents : 1; // 0x438
	char bEnableMouseOverEvents : 1; // 0x438
	char bEnableTouchOverEvents : 1; // 0x438
	char bForceFeedbackEnabled : 1; // 0x438
	float ForceFeedbackScale; // 0x43c
	TArray<FKey> ClickEventKeys; // 0x440
	EMouseCursor DefaultMouseCursor; // 0x450
	EMouseCursor CurrentMouseCursor; // 0x451
	ECollisionChannel DefaultClickTraceChannel; // 0x452
	ECollisionChannel CurrentClickTraceChannel; // 0x453
	float HitResultTraceDistance; // 0x454
	uint16_t SeamlessTravelCount; // 0x458
	uint16_t LastCompletedSeamlessTravelCount; // 0x45a
	UInputComponent* InactiveStateInputComponent; // 0x4d0
	char bShouldPerformFullTickWhenPaused : 1; // 0x4d8
	UTouchInterface* CurrentTouchInterface; // 0x4f0
	ASpectatorPawn* SpectatorPawn; // 0x548
	bool bIsLocalPlayerController; // 0x554
	FVector SpawnLocation; // 0x558
};

struct AEMPExplosiveProjectile : AExplosiveProjectile {
	APortalWarsGrenadePickup* GrenadePickupClass; // 0x2e0
};

struct UPreviewMeshCollection : UDataAsset {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UPortalWarsRoundScoreboardEntryWidget : UUserWidget {
	UTextBlock* RoundNumText; // 0x260
	UImage* TopResultImage; // 0x268
	UImage* BottomResultImage; // 0x270
	UImage* SeparatorImage; // 0x278
	UTextBlock* CurrentRoundNumText; // 0x280
	UWidgetSwitcher* RoundWidgetSwitcher; // 0x288
	UImage* CurrentRoundBackgroundImage; // 0x290
	UTexture2D* RoundWinBlue; // 0x298
	UTexture2D* RoundWinRed; // 0x2a0
	UTexture2D* RoundLoss; // 0x2a8
	UTexture2D* RoundUnplayed; // 0x2b0
	UTexture2D* RoundCurrent; // 0x2b8
	float PaddingBetweenEntries; // 0x2c0
};

struct UParticleSystemReplay : UObject {
	int32_t ClipIDNumber; // 0x28
};

struct AShotgun : ALineTraceGun {
	int32_t numPelletsPerShell; // 0x768
	FWeaponAnimMontage ReloadStartAnim; // 0x770
	FWeaponAnimMontage ReloadInsertAnim; // 0x780
	FWeaponAnimMontage ReloadStopAnim; // 0x790
	TMap<APortalWarsCharacter*, FDamageEvents> characterHitsMap; // 0x7a8
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

struct UVariantSet : UObject {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
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

struct UClothPhysicalMeshDataNv_Legacy : UClothPhysicalMeshDataBase_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct UBTTask_UsePortal : UBTTaskNode {
	float Timeout; // 0x70
};

struct UDataTable : UObject {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
};

struct UConstantQNRT : UAudioSynesthesiaNRT {
	UConstantQNRTSettings* Settings; // 0x78
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles : UNiagaraEventReceiverEmitterAction {
	uint32_t NumParticles; // 0x28
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

struct UBookMark : UBookmarkBase {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct UPortalWarsDailyPlayStreakWidget : UPortalWarsMenuWidget {
	UPanelWidget* RewardPanel; // 0x338
	UPortalWarsPlayStreakRewardWidget* PlayStreakRewardWidgetClass; // 0x340
	UPortalWarsProgressionIconWidget* StreakIcon; // 0x348
	UTextBlock* PlayStreakBoostText; // 0x350
	UTextBlock* PlayStreakPromptText; // 0x358
	UTextBlock* RepairStreakText; // 0x360
	UWidgetSwitcher* ActionSwitcher; // 0x368
	UPortalWarsRedeemableButtonWidget* RepairButton; // 0x370
	UPortalWarsPlayStreakDialogWidget* PlayStreakDialogWidgetClass; // 0x378
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

struct UDeviceProfileManager : UObject {
	TArray<UObject*> Profiles; // 0x28
};

struct AInteractiveFoliageActor : AStaticMeshActor {
	UCapsuleComponent* CapsuleComponent; // 0x230
	FVector TouchingActorEntryPosition; // 0x238
	FVector FoliageVelocity; // 0x244
	FVector FoliageForce; // 0x250
	FVector FoliagePosition; // 0x25c
	float FoliageDamageImpulseScale; // 0x268
	float FoliageTouchImpulseScale; // 0x26c
	float FoliageStiffness; // 0x270
	float FoliageStiffnessQuadratic; // 0x274
	float FoliageDamping; // 0x278
	float MaxDamageImpulse; // 0x27c
	float MaxTouchImpulse; // 0x280
	float MaxForce; // 0x284
	float Mass; // 0x288
};

struct UPortalWarsRewardReceivedWidget : UPortalWarsDialogWidget {
	TArray<UPortalWarsRewardEntryWidget*> RewardEntries; // 0x390
	UPortalWarsRewardReceivedEntry* RewardEntryWidgetClass; // 0x3a0
	UPanelWidget* EntryPanel; // 0x3a8
	UPortalWarsButtonWidget* PremiumPurchaseButton; // 0x3b0
	UPortalWarsInspectWidget* InspectWidget; // 0x3b8
	UTextBlock* TitleText; // 0x3c8
};

struct UCompositeCameraShakePattern : UCameraShakePattern {
	TArray<UCameraShakePattern*> ChildPatterns; // 0x28
};

struct ULevelCapture : UMovieSceneCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
};

struct UInterpTrackAkAudioEvent : UInterpTrackVectorBase {
	TArray<FAkAudioEventTrackKey> Events; // 0x90
	char bContinueEventOnMatineeEnd : 1; // 0xa0
};

struct USubmixEffectStereoDelayPreset : USoundEffectSubmixPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
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

struct UPortalWarsRaceLeaderboardEntry : UPortalWarsLeaderboardEntryWidget {
	UTextBlock* TimeText; // 0xbd8
};

struct UDatasmithStaticMeshComponentTemplate : UDatasmithObjectTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct ULandscapeSplineSegment : UObject {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct USoundAttenuation : UObject {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct UNiagaraDataInterfaceVectorField : UNiagaraDataInterface {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct UMaterialExpressionTruncate : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UCollisionProfile : UDeveloperSettings {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UPortalWarsChunkInstallWidget : UPortalWarsUserWidget {
	UProgressBar* DownloadProgressBar; // 0x2b0
};

struct UEditableGameplayTagQueryExpression_AllExprMatch : UEditableGameplayTagQueryExpression {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UAkAndroidInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xc0
};

struct UDataAsset : UObject {
	UDataAsset* NativeClass; // 0x28
};

struct UPortalWarsDecimalCarouselWidget : UPortalWarsInputCarouselWidget {
	float Value; // 0x3a0
	float MinValue; // 0x3a4
	float MaxValue; // 0x3a8
	float StepSize; // 0x3ac
	USpinBox* SpinBox; // 0x3b0
};

struct UAkPS5InitializationSettings : UObject {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb8
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

struct UMaterialExpressionLandscapeVisibilityMask : UMaterialExpression {
	FGuid ExpressionGUID; // 0x40
};

struct UPortalWarsGameConfigWidget : UUserWidget {
	UTextBlock* MapNameText; // 0x260
	UTextBlock* ModeNameText; // 0x268
	UTextBlock* ScoreLimitText; // 0x270
	UTextBlock* MatchTimeText; // 0x278
	UTextBlock* MaxPlayersText; // 0x280
};

struct APortalWarsVIPPlayerState : APortalWarsPlayerState {
	FVIPInfo VIPInfo; // 0xac9
};

struct UPortalWarsFlagResetStatusWidget : UUserWidget {
	UProgressBar* FlagProgressBar; // 0x260
	UImage* OutlineImage; // 0x268
	UWidgetAnimation* RotateAnimation; // 0x270
	UTexture2D* BlueOutlineImage; // 0x278
	UTexture2D* RedOutlineImage; // 0x280
	UTexture2D* BlueFillImage; // 0x288
	UTexture2D* RedFillImage; // 0x290
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

struct UConnectionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct APortalWarsCrowd : AActor {
	UPortalWarsAkComponent* AkComp; // 0x220
	UAkAudioEvent* ReactionEvent; // 0x228
	UAkAudioEvent* DisappointedEvent; // 0x230
	UAkAudioEvent* LaughEvent; // 0x238
	UAkAudioEvent* BooEvent; // 0x240
	UAkAudioEvent* WinRoundEvent; // 0x248
	UAkAudioEvent* WinMatchEvent; // 0x250
	UAkAudioEvent* LoseRoundEvent; // 0x258
	TArray<UAkAudioEvent*> KillstreakEvents; // 0x260
	float DisappointmentThreshold; // 0x284
	float DefaultExcitementMultiplier; // 0x288
	float MatchPointMultiplier; // 0x28c
	float MultikillMultiplier; // 0x290
	float KillstreakDenominator; // 0x294
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

struct AGunImpactEffectManager : AActor {
	UParticleSystem* DefaultFX; // 0x220
	UParticleSystem* ConcreteFX; // 0x228
	UParticleSystem* DirtFX; // 0x230
	UParticleSystem* WaterFX; // 0x238
	UParticleSystem* SnowFX; // 0x240
	UParticleSystem* MetalFX; // 0x248
	UParticleSystem* WoodFX; // 0x250
	UParticleSystem* GlassFX; // 0x258
	UParticleSystem* GrassFX; // 0x260
	UParticleSystem* FleshFX; // 0x268
	UParticleSystem* BrickFX; // 0x270
	UParticleSystem* ClothFX; // 0x278
	UParticleSystem* RubberFX; // 0x280
	UParticleSystem* PlasticFX; // 0x288
	UParticleSystem* PortalWallFX; // 0x290
	FDecalData DefaultDecal; // 0x298
	UAkAudioEvent* BulletImpactEvent; // 0x2a8
};

struct UPortalWarsInviteManager : UObject {
	UPortalWarsDialogWidget* AcceptDialogWidgetClass; // 0xc0
};

struct UEndpointSubmix : USoundSubmixBase {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UInteractiveToolManager : UObject {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
};

struct UPortalWarsReferFriendWidget : UPortalWarsMenuWidget {
	UTextBlock* ReferralCodeText; // 0x338
	UTextBlock* ReferralScoreText; // 0x340
	URichTextBlock* NextReferralText; // 0x348
	UPortalWarsButtonWidget* ReferralPassButton; // 0x350
	UEditableTextBox* ReferralCodeInput; // 0x358
	UPortalWarsRewardEntryWidget* NextRewardPreview; // 0x360
	UPortalWarsButtonWidget* CopyButton; // 0x368
	UPortalWarsButtonWidget* ConfirmButton; // 0x370
	UTextBlock* CodeAcceptedText; // 0x378
	UWidgetSwitcher* ReferrerSwitcher; // 0x380
	UWidget* ReferrerRoot; // 0x388
	UWidget* ReferrerInputRoot; // 0x390
	URichTextBlock* NoteRichText; // 0x398
	UPortalWarsReferFriendDialog* SubmitDialogWidgetClass; // 0x3a0
};

struct UAnimationDataSourceRegistry : UObject {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct USoundCue : USoundBase {
	char bPrimeOnLoad : 1; // 0x170
	USoundNode* FirstNode; // 0x178
	float VolumeMultiplier; // 0x180
	float PitchMultiplier; // 0x184
	FSoundAttenuationSettings AttenuationOverrides; // 0x188
	float SubtitlePriority; // 0x528
	char bOverrideAttenuation : 1; // 0x530
	char bExcludeFromRandomNodeBranchCulling : 1; // 0x530
	int32_t CookedQualityIndex; // 0x534
	char bHasPlayWhenSilent : 1; // 0x538
};

struct UInterpTrackInstParticleReplay : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UParticleModuleLifetime_Seeded : UParticleModuleLifetime {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UPortalWarsChallengeEntryWidget : UPortalWarsRewardEntryWidget {
	UWidget* HoveredIndicator; // 0x728
	UTextBlock* ValueText; // 0x730
	UProgressBar* ChallengeProgressBar; // 0x738
	UImage* CompletedImage; // 0x740
	UPanelWidget* StarPanel; // 0x748
	UTexture2D* IncompleteStarTexture; // 0x750
	UTexture2D* CompleteStarTexture; // 0x758
	UWidgetSwitcher* ChallengeBackgroundSwitcher; // 0x760
	UPortalWarsButtonWidget* ActionButton; // 0x768
	UWidgetSwitcher* ActionSwitcher; // 0x770
	UWidgetAnimation* CompletedAnimation; // 0x778
	UAkAudioEvent* ChallengeCompleteEvent; // 0x780
	FMulticastInlineDelegate OnClaimButtonClickedDelegate; // 0x788
	FMulticastInlineDelegate OnViewButtonClickedDelegate; // 0x798
	FMulticastInlineDelegate OnInspectButtonClickedDelegate; // 0x7a8
	UWidget* InspectIndicator; // 0x7b8
	UWidget* PremiumRequiredRoot; // 0x7c0
	bool bIsFeatured; // 0x800
	UImage* FeaturedBackground; // 0x808
	TMap<EChallengeType, UTexture2D*> FeaturedBackgroundTextures; // 0x810
};

struct USoundNode : UObject {
	TArray<USoundNode*> ChildNodes; // 0x28
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

struct UDistributionFloatConstantCurve : UDistributionFloat {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UInterpTrackInstAkAudioEvent : UInterpTrackInst {
	float LastUpdatePosition; // 0x28
};

struct UBTTask_Wander : UBTTask_MoveTo {
	float WanderRadius; // 0xb0
	float WanderOffset; // 0xb4
	bool bShouldWanderForward; // 0xb8
	bool bKeepWandering; // 0xb9
	bool bCanSprint; // 0xba
	bool bUseBlackboardCenter; // 0xbb
	FBlackboardKeySelector BlackboardKeyActorWanderCenter; // 0xc0
};

struct UPortalWarsPostGameOverviewWidget : UPortalWarsDialogWidget {
	UPanelWidget* CardPanel; // 0x390
	UPortalWarsPostGameCardWidget* PostGameCardWidgetClass; // 0x398
	UPortalWarsXPUpdateWidget* XPUpdateWidget; // 0x3a0
	UPanelWidget* XpBoostPanel; // 0x3a8
	UPortalWarsXPUpdateEntryWidget* XpBoostEntryWidgetClass; // 0x3b0
};

struct UMovieSceneObjectPropertySection : UMovieSceneSection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct UInAppPurchaseCallbackProxy2 : UObject {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UPortalWarsVotingMenuWidget : UPortalWarsLobbyWidget {
	UPanelWidget* VotePanel; // 0x2f8
	UPortalWarsVoteEntryWidget* VoteEntryWidgetClass; // 0x300
	URichTextBlock* RemainingTimeText; // 0x308
	UTextBlock* StateDescriptionText; // 0x310
	UWidget* VoteRoot; // 0x318
	UWidget* GameRoot; // 0x320
	UWidgetSwitcher* VoteWidgetSwitcher; // 0x328
	UWidget* ModeRoot; // 0x330
	UTextBlock* ModeText; // 0x338
};

struct USoundGroups : UObject {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct UAkSettings : UObject {
	char MaxSimultaneousReverbVolumes; // 0x28
	FFilePath WwiseProjectPath; // 0x30
	FDirectoryPath WwiseSoundBankFolder; // 0x40
	bool bAutoConnectToWAAPI; // 0x50
	ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51
	bool bEnableMultiCoreRendering; // 0x52
	bool MigratedEnableMultiCoreRendering; // 0x53
	FDirectoryPath WwiseWindowsInstallationPath; // 0x58
	FFilePath WwiseMacInstallationPath; // 0x68
};

struct UGridPathFollowingComponent : UPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
};

struct UMaterialExpressionPerInstanceCustomData : UMaterialExpression {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
};

struct UPortalWarsXPUpdateWidget : UUserWidget {
	UTextBlock* PlayerNameText; // 0x280
	UImage* AvatarImage; // 0x288
	UPortalWarsProgressionIconWidget* ProgressionLevelIcon; // 0x290
	UProgressBar* ProgressionProgressBar; // 0x298
	UProgressBar* ProgressionTargetProgressBar; // 0x2a0
	UTextBlock* ProgressionLevelProgressText; // 0x2a8
	UTextBlock* ProgressionLevelTotalText; // 0x2b0
	UWidget* ProgressionProgressRoot; // 0x2b8
	UPortalWarsProgressionIconWidget* BattlePassLevelIcon; // 0x2c8
	UProgressBar* BattlePassProgressBar; // 0x2d0
	UProgressBar* BattlePassTargetProgressBar; // 0x2d8
	UTextBlock* BattlePassLevelProgressText; // 0x2e0
	UTextBlock* BattlePassLevelTotalText; // 0x2e8
	UWidget* BattlePassProgressRoot; // 0x2f0
	UPortalWarsXPUpdateEntryWidget* XPEntryWidgetClass; // 0x300
	UPanelWidget* AllocationPanel; // 0x308
	UTextBlock* TotalXPText; // 0x318
	UAkComponent* AkComp; // 0x388
	UAkAudioEvent* ExpSFXLoop; // 0x390
	UAkAudioEvent* ExpSFXStopLoop; // 0x398
	UAkAudioEvent* ExpLevelUpEvent; // 0x3a0
};

struct UPortalWarsProgressionIconWidget : UUserWidget {
	UImage* IconImage; // 0x260
	UTextBlock* NumberText; // 0x268
};

struct UChaosSolverSettings : UDeveloperSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance : UMaterialExpression {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
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

struct AScoreboardScoreComponent : AScoreboardComponent {
	char Index; // 0x288
};

struct UWindowTitleBarAreaSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
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

struct UAnimComposite : UAnimCompositeBase {
	FAnimTrack AnimationTrack; // 0xa8
};

struct UMovieSceneBuiltInEasingFunction : UObject {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UMaterialExpressionSign : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionArccosine : UMaterialExpression {
	FExpressionInput Input; // 0x40
};

struct ATextRenderActor : AActor {
	UTextRenderComponent* TextRender; // 0x220
};

struct UPortalWarsAudioSettingsWidget : UPortalWarsSettingsSubWidget {
	UPortalWarsSpinSliderWidget* Master; // 0x358
	UPortalWarsSpinSliderWidget* Gameplay; // 0x360
	UPortalWarsSpinSliderWidget* Music; // 0x368
	UPortalWarsSpinSliderWidget* Announcer; // 0x370
	UPortalWarsSpinSliderWidget* Ambiance; // 0x378
	UPortalWarsCheckBoxWidget* MuteWhileMinimized; // 0x380
	UWidgetSwitcher* VoiceSwitcher; // 0x388
	UPortalWarsSpinSliderWidget* VOIP; // 0x390
	UPortalWarsCheckBoxWidget* OpenMic; // 0x398
	UPortalWarsCheckBoxWidget* ProximityEnabled; // 0x3a0
	UPortalWarsDropdownWidget* VoiceChatInputDevice; // 0x3a8
	UPortalWarsDropdownWidget* VoiceChatOutputDevice; // 0x3b0
};

struct APortalWarsHUD : AHUD {
	UPortalWarsRootHUDWidget* RootWidget; // 0x310
	UPortalWarsRootHUDWidget* RootWidgetClass; // 0x318
	bool bIsCharacterAlive; // 0x320
	UPortalWarsHUDWidget* HUDWidget; // 0x328
	UPortalWarsHUDWidget* HUDWidgetClass; // 0x330
	UPortalWarsScoreboardWidget* ScoreboardWidget; // 0x338
	UPortalWarsScoreboardWidget* ScoreboardWidgetClass; // 0x340
	UPortalWarsEmoteWheelWidget* EmoteWheelWidget; // 0x348
	UPortalWarsEmoteWheelWidget* EmoteWheelWidgetClass; // 0x350
	bool AimingAtEnemy; // 0x359
	UPortalWarsChatWidget* ChatWidget; // 0x360
	UPortalWarsChatWidget* ChatWidgetClass; // 0x368
	UPortalWarsCountdownWidget* CountdownWidget; // 0x370
	UPortalWarsCountdownWidget* CountdownWidgetClass; // 0x378
	UPortalWarsMatchResultWidget* MatchResultWidget; // 0x380
	UPortalWarsMatchResultWidget* MatchResultWidgetClass; // 0x388
	UUserWidget* MatchCancelledWidget; // 0x390
	UUserWidget* MatchCancelledWidgetClass; // 0x398
	UAkAudioEvent* PreGameCountdownEvent; // 0x3a0
	UPortalWarsJoinInProgressWidget* JoinInProgressWidget; // 0x3b0
	UPortalWarsJoinInProgressWidget* JoinInProgressWidgetClass; // 0x3b8
	UPortalWarsKillcamWidget* KillcamWidget; // 0x3c0
	UPortalWarsKillcamWidget* KillcamWidgetClass; // 0x3c8
	UPWKillcamTransitionWidget* KillcamTransitionWidget; // 0x3d0
	UPWKillcamTransitionWidget* KillcamTransitionWidgetClass; // 0x3d8
	UPortalWarsScreenFadeWidget* ScreenFadeWidget; // 0x3e0
	UPortalWarsScreenFadeWidget* ScreenFadeWidgetClass; // 0x3e8
	UPWVoiceNotifications* VoiceNotificationWidget; // 0x3f0
	UPWVoiceNotifications* VoiceNotificationWidgetClass; // 0x3f8
};

struct UGeometryCacheCodecRaw : UGeometryCacheCodecBase {
	int32_t DummyProperty; // 0x38
};

struct UGameSessionSettings : UObject {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct UAkRoomComponent : USceneComponent {
	char bEnable : 1; // 0x1f8
	UAkRoomComponent* NextLowerPriorityComponent; // 0x200
	float Priority; // 0x208
	float WallOcclusion; // 0x20c
	UAkAudioEvent* RoomTone; // 0x210
};

struct UMovieSceneAkTrack : UMovieSceneTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	char bIsAMasterTrack : 1; // 0x88
};

struct UPortalWarsOddballIndicator : UPortalWarsIndicatorWidget {
	UWidget* Pointer; // 0x2b8
	UImage* OnScreenBackgroundImage; // 0x2c8
	UImage* OffScreenBackgroundImage; // 0x2d0
	UTexture2D* NeutralBackground; // 0x2d8
	UTexture2D* RedBackground; // 0x2e0
	UTexture2D* BlueBackground; // 0x2e8
};

struct UInputRouter : UObject {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
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
	bool bUseGeodesicDistance; // 0x58
	float ShapeTargetStiffness; // 0x5c
	float CollisionThickness; // 0x60
	float FrictionCoefficient; // 0x64
	bool bUseCCD; // 0x68
	bool bUseSelfCollisions; // 0x69
	float SelfCollisionThickness; // 0x6c
	bool bUseLegacyBackstop; // 0x70
	float DampingCoefficient; // 0x74
	bool bUsePointBasedWindModel; // 0x78
	float DragCoefficient; // 0x7c
	float LiftCoefficient; // 0x80
	bool bUseGravityOverride; // 0x84
	float GravityScale; // 0x88
	FVector Gravity; // 0x8c
	FChaosClothWeightedValue AnimDriveStiffness; // 0x98
	FChaosClothWeightedValue AnimDriveDamping; // 0xa0
	FVector LinearVelocityScale; // 0xa8
	float AngularVelocityScale; // 0xb4
	float FictitiousAngularScale; // 0xb8
	bool bUseTetrahedralConstraints; // 0xbc
	bool bUseThinShellVolumeConstraints; // 0xbd
	bool bUseContinuousCollisionDetection; // 0xbe
};

struct UInterpTrackInstFloatProp : UInterpTrackInstProperty {
	float ResetFloat; // 0x58
};

struct UPortalWarsScoreboardWidget : UUserWidget {
	UTextBlock* MapNameText; // 0x260
	UTextBlock* GameModeText; // 0x268
	UTextBlock* TimeRemainingText; // 0x270
	UImage* OvertimeIcon; // 0x280
	UPortalWarsUserWidget* OvertimeNotice; // 0x288
	FSlateColor OvertimeTextColor; // 0x290
	bool bClipTeamNames; // 0x2b8
	UTextBlock* LeftNameText; // 0x2c0
	UTextBlock* RightNameText; // 0x2c8
	UTextBlock* LeftScoreText; // 0x2d0
	UTextBlock* RightScoreText; // 0x2d8
	UWidget* ScoreRoot; // 0x2e0
	UWidget* TeamRoot; // 0x2e8
	UPanelWidget* LeftTeamPanel; // 0x2f0
	UPanelWidget* RightTeamPanel; // 0x2f8
	UWidget* FFARoot; // 0x300
	UPanelWidget* PlayersPanel; // 0x308
	UWidget* StatsRoot; // 0x310
	UPanelWidget* StatsPanel; // 0x318
	UPortalWarsScoreboardStatEntry* ScoreboardStatWidgetClass; // 0x320
	UWidget* ScoreboardRoot; // 0x328
	UPortalWarsScoreboardPlayerWidget* ScoreboardPlayerWidgetClass; // 0x330
};

struct UTexture2D : UTexture {
	int32_t LevelIndex; // 0x178
	int32_t FirstResourceMemMip; // 0x17c
	char bTemporarilyDisableStreaming : 1; // 0x180
	TextureAddress AddressX; // 0x181
	TextureAddress AddressY; // 0x182
	FIntPoint ImportedSize; // 0x184
};

struct UMaterialExpressionLightmassReplace : UMaterialExpression {
	FExpressionInput Realtime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct ULightPropagationVolumeBlendable : UObject {
	FLightPropagationVolumeSettings Settings; // 0x30
	float BlendWeight; // 0x70
};

struct UPortalWarsAnimInstanceV2 : UAnimInstance {
	float AOOverrideAlpha; // 0x2b8
	float AOAlpha; // 0x2bc
	float LeanAlpha; // 0x2c0
	float State_IsSprinting; // 0x2c4
	float BodyCorrectionAlpha; // 0x2c8
	float ArmsCorrectionAlpha; // 0x2cc
	float HandsCorrectionAlpha; // 0x2d0
	float UBA; // 0x2d4
	float UBA_LowerWeight; // 0x2d8
	float UBA_LowerAdd; // 0x2dc
	float UBA_UpperWeight; // 0x2e0
	float UBA_UpperAdd; // 0x2e4
	float UBA_RArmWeight; // 0x2e8
	float UBA_RArmAdd; // 0x2ec
	float UBA_LArmWeight; // 0x2f0
	float UBA_LArmAdd; // 0x2f4
	float LArmIKAlpha; // 0x2f8
	float RArmIKAlpha; // 0x2fc
	float LArm_Override; // 0x300
	float Stride; // 0x304
	float Stride_Upper; // 0x308
	float PlayRate; // 0x30c
	FVector2D LeanValue; // 0x310
	FVector2D LeaningValue_Falling_2; // 0x318
	FVector2D LeaningValue_Falling_3; // 0x320
	float LeanFallingAlpha; // 0x328
	float LandVelocity; // 0x358
	float LandPredictionAlpha; // 0x35c
	bool bLanded; // 0x360
	UAnimSequenceBase* BlendAnim; // 0x368
	APortalWarsCharacter* Character; // 0x378
	AGun* EquippedGun; // 0x380
	bool bHasWeapon; // 0x388
	EAnimationType AnimationType; // 0x398
	EWeaponType WeaponType; // 0x399
	TMap<int32_t, EWeaponType> WeaponMap; // 0x3a0
	float Yaw; // 0x3f0
	float YawLastTick; // 0x3f4
	float YawChangeOverFrame; // 0x3f8
	bool bIsMoving; // 0x3fc
	bool bIsSprinting; // 0x3fd
	bool bIsJumping; // 0x3fe
	bool bIsFalling; // 0x3ff
	bool bIsFallingAndNotJumping; // 0x400
	bool bIsCrouching; // 0x401
	bool bIsAccelerating; // 0x402
	bool bIsThrusting; // 0x403
	bool bShouldWeaponLean; // 0x404
	bool bIsAlive; // 0x405
	bool bLandAnimationAlmostFinished; // 0x406
	bool bGroundedToFallLoop; // 0x407
	bool bGroundedToJump; // 0x408
	bool bIsMovingAndAccelerating; // 0x409
	bool bLandToGrounded; // 0x40a
	bool bIdleToTIP; // 0x40b
	bool bTurnRToTIP; // 0x40c
	bool bTurnLToTIP; // 0x40d
	FVector Velocity; // 0x410
	FVector RelativeVelocity; // 0x41c
	float MoveSpeed; // 0x428
	float NormalizedMoveSpeed; // 0x42c
	float SpeedHorizontal; // 0x430
	float SpeedVertical; // 0x434
	float Direction; // 0x438
	float FiringCurveValue; // 0x43c
	float CrouchAmount; // 0x440
	float CrouchSpeed; // 0x444
	float TurnAngle; // 0x448
	bool bTurnRLoop; // 0x44c
	bool bTurnLLoop; // 0x44d
	bool bTIPToTurnL; // 0x44e
	bool bTIPToTurnR; // 0x44f
	float RootYawOffset; // 0x450
	FRotator RootYawOffsetRot; // 0x454
	FRotator RootYawOffsetRootRot; // 0x460
	UCurveFloat* RootYawSpeed; // 0x470
	UCurveVector* PlayRatesCurve; // 0x478
	UCurveFloat* LeanFallingCurve; // 0x480
	UCurveFloat* LandPredictionCurve; // 0x488
	float TrueDirection; // 0x490
	float TurnAmount; // 0x494
	float PreviousTurnAmount; // 0x498
	bool bCanTurn; // 0x49c
	FRotator AimRot2; // 0x4a0
	FRotator AimRot2Root; // 0x4ac
	float AimSweepTime; // 0x4bc
	FVector HeadScale; // 0x4c4
	float MovementModifier; // 0x4d0
	bool bIsPlayingEmote; // 0x4d4
	UAnimSequence* EmoteAnimSequence; // 0x4d8
	UBlendSpace1D* WalkBlendSpace; // 0x4e0
	UBlendSpace1D* LeanBlendSpace; // 0x4e8
	UAnimSequence* SprintAnim; // 0x4f0
	UAnimSequence* JumpStartAnim; // 0x4f8
	UAnimSequence* JumpLoopAnim; // 0x500
	UAnimSequence* JumpEndAnim; // 0x508
	float BatOpenPercent; // 0x510
	UPortalWarsAkComponent* AkFoot; // 0x518
};

struct UMaterialExpressionAppendVector : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UInterpTrackInstProperty : UInterpTrackInst {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct UCameraShakeBase : UObject {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	UCameraShakePattern* RootShakePattern; // 0x30
	APlayerCameraManager* CameraManager; // 0x38
};

struct UNetworkSettings : UDeveloperSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct UNiagaraDataInterfaceCurve : UNiagaraDataInterfaceCurveBase {
	FRichCurve Curve; // 0x70
};

struct ALevelStreamingVolume : AVolume {
	TArray<FName> StreamingLevelNames; // 0x258
	char bEditorPreVisOnly : 1; // 0x268
	char bDisabled : 1; // 0x268
	EStreamingVolumeUsage StreamingUsage; // 0x26c
};

struct UMaterialExpressionDistance : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UCurveVector : UCurveBase {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct UImgMediaSource : UBaseMediaSource {
	bool IsPathRelativeToProjectRoot; // 0x88
	FFrameRate FrameRateOverride; // 0x8c
	FString ProxyOverride; // 0x98
	FDirectoryPath SequencePath; // 0xa8
};

struct UAREnvironmentCaptureProbeTexture : UTextureCube {
	EARTextureType TextureType; // 0x1d0
	float Timestamp; // 0x1d4
	FGuid ExternalTextureGuid; // 0x1d8
	FVector2D Size; // 0x1e8
};

struct UInterpTrackDirector : UInterpTrack {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct ASpectatorBeaconHost : AOnlineBeaconHostObject {
	USpectatorBeaconState* State; // 0x248
	bool bLogoutOnSessionTimeout; // 0x2b0
	float SessionTimeoutSecs; // 0x2b4
	float TravelSessionTimeoutSecs; // 0x2b8
};

struct UGameplayTaskResource : UObject {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct UGeometryCollectionComponent : UMeshComponent {
	AChaosSolverActor* ChaosSolverActor; // 0x480
	UGeometryCollection* RestCollection; // 0x568
	TArray<AFieldSystemActor*> InitializationFields; // 0x570
	bool Simulating; // 0x580
	EObjectStateTypeEnum ObjectType; // 0x588
	bool EnableClustering; // 0x589
	int32_t ClusterGroupIndex; // 0x58c
	int32_t MaxClusterLevel; // 0x590
	TArray<float> DamageThreshold; // 0x598
	EClusterConnectionTypeEnum ClusterConnectionType; // 0x5a8
	int32_t CollisionGroup; // 0x5ac
	float CollisionSampleFraction; // 0x5b0
	float LinearEtherDrag; // 0x5b4
	float AngularEtherDrag; // 0x5b8
	UChaosPhysicalMaterial* PhysicalMaterial; // 0x5c0
	EInitialVelocityTypeEnum InitialVelocityType; // 0x5c8
	FVector InitialLinearVelocity; // 0x5cc
	FVector InitialAngularVelocity; // 0x5d8
	UPhysicalMaterial* PhysicalMaterialOverride; // 0x5e8
	FGeomComponentCacheParameters CacheParameters; // 0x5f0
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsStateChange; // 0x640
	FMulticastInlineDelegate NotifyGeometryCollectionPhysicsLoadingStateChange; // 0x650
	FMulticastInlineDelegate OnChaosBreakEvent; // 0x678
	float DesiredCacheTime; // 0x688
	bool CachePlayback; // 0x68c
	FMulticastInlineDelegate OnChaosPhysicsCollision; // 0x690
	bool bNotifyBreaks; // 0x6a0
	bool bNotifyCollisions; // 0x6a1
	bool bEnableReplication; // 0x6a2
	bool bEnableAbandonAfterLevel; // 0x6a3
	int32_t ReplicationAbandonClusterLevel; // 0x6a4
	FGeometryCollectionRepData RepData; // 0x6a8
	UBodySetup* DummyBodySetup; // 0x8d8
};

struct UPortalWarsRankUpdateWidget : UPortalWarsDialogWidget {
	UWidgetAnimation* RankUpAnimation; // 0x390
	UWidgetAnimation* RankDownAnimation; // 0x398
	UWidgetAnimation* RankSameAnimation; // 0x3a0
	UImage* PrevRankIcon; // 0x3a8
	UImage* NewRankIcon; // 0x3b0
	UTextBlock* RankNameText; // 0x3b8
	UTextBlock* RankXPText; // 0x3c0
	UWidgetSwitcher* IndicatorSwitcher; // 0x3c8
	UAkAudioEvent* RankUpEvent; // 0x430
	UAkAudioEvent* RankDownEvent; // 0x438
};

struct UDistributionVectorUniform : UDistributionVector {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct UMaterialExpressionTangentOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UChaosClothSharedSimConfig : UClothSharedConfigCommon {
	int32_t IterationCount; // 0x28
	int32_t SubdivisionCount; // 0x2c
	bool bUseLocalSpaceSimulation; // 0x30
	bool bUseXPBDConstraints; // 0x31
};

struct UHighlightsSetScreenshotAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct ULocalizedOverlays : UOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
};

struct UInterpTrackInstFloatMaterialParam : UInterpTrackInst {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
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

struct UIntegerSpinBox : UWidget {
	int32_t Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	FSpinBoxStyle WidgetStyle; // 0x120
	USlateWidgetStyleAsset* Style; // 0x408
	int32_t Delta; // 0x410
	int32_t SliderExponent; // 0x414
	FSlateFontInfo Font; // 0x418
	ETextJustify Justification; // 0x470
	float MinDesiredWidth; // 0x474
	bool ClearKeyboardFocusOnCommit; // 0x478
	bool SelectAllTextOnCommit; // 0x479
	FSlateColor ForegroundColor; // 0x480
	FMulticastInlineDelegate OnValueChanged; // 0x4a8
	FMulticastInlineDelegate OnValueCommitted; // 0x4b8
	FMulticastInlineDelegate OnBeginSliderMovement; // 0x4c8
	FMulticastInlineDelegate OnEndSliderMovement; // 0x4d8
	char bOverride_MinValue : 1; // 0x4e8
	char bOverride_MaxValue : 1; // 0x4e8
	char bOverride_MinSliderValue : 1; // 0x4e8
	char bOverride_MaxSliderValue : 1; // 0x4e8
	int32_t MinValue; // 0x4ec
	int32_t MaxValue; // 0x4f0
	int32_t MinSliderValue; // 0x4f4
	int32_t MaxSliderValue; // 0x4f8
};

struct UPortalWarsPartyInspectWidget : UPortalWarsMenuSelectWidget {
	UPortalWarsButtonWidget* MuteButton; // 0x3b0
	UPortalWarsButtonWidget* PromoteButton; // 0x3b8
	UPortalWarsButtonWidget* KickButton; // 0x3c0
	UPortalWarsButtonWidget* ViewProfileButton; // 0x3c8
	UPortalWarsPlayerEntryWidget* PlayerEntry; // 0x3d0
	UPortalWarsStatsEntryWidget* Stats; // 0x3d8
};

struct USphereReflectionCaptureComponent : UReflectionCaptureComponent {
	float InfluenceRadius; // 0x270
	float CaptureDistanceScale; // 0x274
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x278
};

struct USequenceCameraShakeSequencePlayer : UObject {
	UObject* BoundObjectOverride; // 0x488
	UMovieSceneSequence* Sequence; // 0x490
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x498
};

struct UEditableGeometryCollectionAdapter : UEditableMeshAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct UEnvQuery : UDataAsset {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct UNiagaraDataInterfaceGrid2DCollection : UNiagaraDataInterfaceGrid2D {
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
	char bOverrideFormat : 1; // 0x119
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170
};

struct APortalWarsLineUpCharacter : AActor {
	APortalWarsPlayerState* PlayerState; // 0x220
	FEndGamePlayerInfo PlayerInfo; // 0x228
	UAnimSequence* EmoteSequence; // 0x460
	UPortalWarsPlayerEntryWidget* PlayerEntryWidgetClass; // 0x480
	ECustomizationType CurrentWeaponType; // 0x4a0
	float MinWeaponPosePlayRate; // 0x4b0
	float MaxWeaponPosePlayRate; // 0x4b4
	USceneComponent* SceneRoot; // 0x4c0
	USkeletalMeshComponent* Suit; // 0x4c8
	USkeletalMeshComponent* Jetpack; // 0x4d0
	UStaticMeshComponent* PortalGun; // 0x4d8
	UWidgetComponent* Name; // 0x4e0
	UMaterialInstance* DefaultMaterial; // 0x4e8
	UStaticMeshComponent* Weapon; // 0x4f0
};

struct UMovieSceneComponentMaterialTrack : UMovieSceneMaterialTrack {
	int32_t MaterialIndex; // 0x90
};

struct UWrapBoxSlot : UPanelSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct APortalWarsTutorialHUD : APortalWarsHUD {
	UPWTutorialHUDOverlayWidget* TutorialHUDOverlayWidget; // 0x408
	UPWTutorialHUDOverlayWidget* TutorialHUDOverlayWidgetClass; // 0x410
	UPortalWarsIndicatorWidget* GoalIndicatorWidgetClass; // 0x418
};

struct UComboBox : UWidget {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
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

struct UAkIOSInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkAudioSession AudioSession; // 0x98
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa8
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xd0
};

struct APortalWarsEvolution : APortalWarsTakedown {
	TArray<AGun*> WeaponClasses; // 0x6d8
};

struct UTestMovieSceneSubTrack : UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UInterpTrackInstFloatParticleParam : UInterpTrackInst {
	float ResetFloat; // 0x28
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

struct ANiagaraPreviewGrid : AActor {
	UNiagaraSystem* System; // 0x220
	ENiagaraPreviewGridResetMode ResetMode; // 0x228
	UNiagaraPreviewAxis* PreviewAxisX; // 0x230
	UNiagaraPreviewAxis* PreviewAxisY; // 0x238
	ANiagaraPreviewBase* PreviewClass; // 0x240
	float SpacingX; // 0x248
	float SpacingY; // 0x24c
	int32_t NumX; // 0x250
	int32_t NumY; // 0x254
	TArray<UChildActorComponent*> PreviewComponents; // 0x258
};

struct UDatasmithSceneComponentTemplate : UDatasmithObjectTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
};

struct UPortalWarsMedalsWidget : UUserWidget {
	UPanelWidget* MedalsPanel; // 0x260
	UPortalWarsMedalEntryWidget* MedalEntryWidgetClass; // 0x268
	TArray<UPortalWarsMedalEntryWidget*> MedalQueue; // 0x270
};

struct UInterpFilter : UObject {
	FString Caption; // 0x28
};

struct UMaterialExpressionTextureCoordinate : UMaterialExpression {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct UParticleModuleSize_Seeded : UParticleModuleSize {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct UMovieSceneSubTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UTestMovieSceneTrack : UMovieSceneTrack {
	bool bHighPassFilter; // 0x80
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UMaterialExpressionLinearInterpolate : UMaterialExpression {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct USoundNodeDialoguePlayer : USoundNode {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct ULandscapeComponent : UPrimitiveComponent {
	int32_t SectionBaseX; // 0x450
	int32_t SectionBaseY; // 0x454
	int32_t ComponentSizeQuads; // 0x458
	int32_t SubsectionSizeQuads; // 0x45c
	int32_t NumSubsections; // 0x460
	UMaterialInterface* OverrideMaterial; // 0x468
	UMaterialInterface* OverrideHoleMaterial; // 0x470
	TArray<FLandscapeComponentMaterialOverride> OverrideMaterials; // 0x478
	TArray<UMaterialInstanceConstant*> MaterialInstances; // 0x488
	TArray<UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x498
	TArray<int8_t> LODIndexToMaterialIndex; // 0x4a8
	TArray<int8_t> MaterialIndexToDisabledTessellationMaterial; // 0x4b8
	UTexture2D* XYOffsetmapTexture; // 0x4c8
	FVector4 WeightmapScaleBias; // 0x4d0
	float WeightmapSubsectionOffset; // 0x4e0
	FVector4 HeightmapScaleBias; // 0x4f0
	FBox CachedLocalBox; // 0x500
	LazyObjectProperty CollisionComponent; // 0x51c
	UTexture2D* HeightmapTexture; // 0x538
	TArray<FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x540
	TArray<UTexture2D*> WeightmapTextures; // 0x550
	ULandscapeLODStreamingProxy* LODStreamingProxy; // 0x560
	FGuid MapBuildDataId; // 0x568
	TArray<FGuid> IrrelevantLights; // 0x578
	int32_t CollisionMipLevel; // 0x588
	int32_t SimpleCollisionMipLevel; // 0x58c
	float NegativeZBoundsExtension; // 0x590
	float PositiveZBoundsExtension; // 0x594
	float StaticLightingResolution; // 0x598
	int32_t ForcedLOD; // 0x59c
	int32_t LODBias; // 0x5a0
	FGuid StateId; // 0x5a4
	FGuid BakedTextureMaterialGuid; // 0x5b4
	UTexture2D* GIBakedBaseColorTexture; // 0x5c8
	char MobileBlendableLayerMask; // 0x5d0
	UMaterialInterface* MobileMaterialInterface; // 0x5d8
	TArray<UMaterialInterface*> MobileMaterialInterfaces; // 0x5e0
	TArray<UTexture2D*> MobileWeightmapTextures; // 0x5f0
};

struct UMaterialExpressionWorldPosition : UMaterialExpression {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UNiagaraDataInterfaceArrayFloat3 : UNiagaraDataInterfaceArray {
	TArray<FVector> FloatData; // 0x50
};

struct UGameplayTasksComponent : UActorComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UMaterialInstance : UMaterialInterface {
	UPhysicalMaterial* PhysMaterial; // 0x88
	UPhysicalMaterial* PhysicalMaterialMap[0x8]; // 0x90
	UMaterialInterface* Parent; // 0xd0
	char bHasStaticPermutationResource : 1; // 0xd8
	char bOverrideSubsurfaceProfile : 1; // 0xd8
	TArray<FScalarParameterValue> ScalarParameterValues; // 0xe0
	TArray<FVectorParameterValue> VectorParameterValues; // 0xf0
	TArray<FTextureParameterValue> TextureParameterValues; // 0x100
	TArray<FRuntimeVirtualTextureParameterValue> RuntimeVirtualTextureParameterValues; // 0x110
	TArray<FFontParameterValue> FontParameterValues; // 0x120
	FMaterialInstanceBasePropertyOverrides BasePropertyOverrides; // 0x130
	FStaticParameterSet StaticParameters; // 0x148
	FMaterialCachedParameters CachedLayerParameters; // 0x188
	TArray<UObject*> CachedReferencedTextures; // 0x328
};

struct UPortalWarsIntroVideoWidget : UPortalWarsDialogWidget {
	UMediaPlayer* MediaPlayer; // 0x390
	UMediaSource* MediaSource; // 0x398
};

struct UMovieSceneCameraShakeSourceShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct UMovieScenePrimitiveMaterialTrack : UMovieScenePropertyTrack {
	int32_t MaterialIndex; // 0xb0
};

struct UPortalWarsChallengeCompleteEntry : UPortalWarsChallengeEntryWidget {
	UAkComponent* AkComp; // 0x8a0
	UAkAudioEvent* ProgressSFXLoop; // 0x8a8
	UAkAudioEvent* ProgressSFXStopLoop; // 0x8b0
};

struct UPortalWarsProgressRadialWidget : UUserWidget {
	UImage* ProgressImage; // 0x260
	float LineHardness; // 0x268
	float LineWidth; // 0x26c
	float Radius; // 0x270
	float Percent; // 0x274
};

struct UEnvQueryGenerator_CurrentLocation : UEnvQueryGenerator {
	UEnvQueryContext* QueryContext; // 0x50
};

struct UEnvQueryGenerator_BlueprintBase : UEnvQueryGenerator {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct UARSaveWorldAsyncTaskBlueprintProxy : UARBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UNiagaraRendererProperties : UNiagaraMergeable {
	FNiagaraPlatformSet Platforms; // 0x28
	int32_t SortOrderHint; // 0x58
	ENiagaraRendererMotionVectorSetting MotionVectorSetting; // 0x5c
	bool bIsEnabled; // 0x60
	bool bMotionBlurEnabled; // 0x61
};

struct UMaterialExpressionShadingModel : UMaterialExpression {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct USoundNodeGroupControl : USoundNode {
	TArray<int32_t> GroupSizes; // 0x48
};

struct USceneCaptureComponentCube : USceneCaptureComponent {
	UTextureRenderTargetCube* TextureTarget; // 0x2c0
	bool bCaptureRotation; // 0x2c8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2d0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2d8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2e0
	float IPD; // 0x2e8
};

struct AActor : UObject {
	FActorTickFunction PrimaryActorTick; // 0x28
	char bNetTemporary : 1; // 0x58
	char bNetStartup : 1; // 0x58
	char bOnlyRelevantToOwner : 1; // 0x58
	char bAlwaysRelevant : 1; // 0x58
	char bReplicateMovement : 1; // 0x58
	char bHidden : 1; // 0x58
	char bTearOff : 1; // 0x58
	char bForceNetAddressable : 1; // 0x58
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
	float InitialLifeSpan; // 0x94
	float CustomTimeDilation; // 0x98
	FRepAttachment AttachmentReplication; // 0xa0
	AActor* Owner; // 0xe0
	FName NetDriverName; // 0xe8
	ENetRole Role; // 0xf0
	ENetDormancy NetDormancy; // 0xf1
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xf2
	EAutoReceiveInput AutoReceiveInput; // 0xf3
	int32_t InputPriority; // 0xf4
	UInputComponent* InputComponent; // 0xf8
	float NetCullDistanceSquared; // 0x100
	int32_t NetTag; // 0x104
	float NetUpdateFrequency; // 0x108
	float MinNetUpdateFrequency; // 0x10c
	float NetPriority; // 0x110
	APawn* Instigator; // 0x118
	TArray<AActor*> Children; // 0x120
	USceneComponent* RootComponent; // 0x130
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x138
	TArray<FName> Layers; // 0x150
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x160
	TArray<FName> Tags; // 0x170
	FMulticastSparseDelegate OnTakeAnyDamage; // 0x180
	FMulticastSparseDelegate OnTakePointDamage; // 0x181
	FMulticastSparseDelegate OnTakeRadialDamage; // 0x182
	FMulticastSparseDelegate OnActorBeginOverlap; // 0x183
	FMulticastSparseDelegate OnActorEndOverlap; // 0x184
	FMulticastSparseDelegate OnBeginCursorOver; // 0x185
	FMulticastSparseDelegate OnEndCursorOver; // 0x186
	FMulticastSparseDelegate OnClicked; // 0x187
	FMulticastSparseDelegate OnReleased; // 0x188
	FMulticastSparseDelegate OnInputTouchBegin; // 0x189
	FMulticastSparseDelegate OnInputTouchEnd; // 0x18a
	FMulticastSparseDelegate OnInputTouchEnter; // 0x18b
	FMulticastSparseDelegate OnInputTouchLeave; // 0x18c
	FMulticastSparseDelegate OnActorHit; // 0x18d
	FMulticastSparseDelegate OnDestroyed; // 0x18e
	FMulticastSparseDelegate OnEndPlay; // 0x18f
	TArray<UActorComponent*> InstanceComponents; // 0x1f0
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x200
};

struct UPortalWarsRaceLeaderboardWidget : UPortalWarsLeaderboardWidget {
	UTextBlock* TypeText; // 0x2f8
	UComboBoxString* TypeComboBox; // 0x300
	UTextBlock* MapNameText; // 0x308
};

struct UDistributionVectorUniformCurve : UDistributionVector {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct AOnlineBeaconClient : AOnlineBeacon {
	AOnlineBeaconHostObject* BeaconOwner; // 0x250
	UNetConnection* BeaconConnection; // 0x258
	EBeaconConnectionState ConnectionState; // 0x260
};

struct UMaterialExpressionClearCoatNormalCustomOutput : UMaterialExpressionCustomOutput {
	FExpressionInput Input; // 0x40
};

struct USpectatorPawnMovement : UFloatingPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct UMaterialParameterCollection : UObject {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct UPortalWarsNetworkInfoWidget : UUserWidget {
	UTextBlock* Ping; // 0x268
	UTextBlock* InBytes; // 0x270
	UTextBlock* InPackets; // 0x278
	UTextBlock* InPacketLoss; // 0x280
	UTextBlock* OutBytes; // 0x288
	UTextBlock* OutPackets; // 0x290
	UTextBlock* OutPacketLoss; // 0x298
	UHorizontalBox* NetInfoHorizontalBox; // 0x2a0
	UTextBlock* FPS; // 0x2a8
	UTextBlock* TotalLatency; // 0x2b0
	UTextBlock* GameLatency; // 0x2b8
	UTextBlock* RenderLatency; // 0x2c0
	UTextBlock* DriverLatency; // 0x2c8
	UTextBlock* OSRenderQueueLatency; // 0x2d0
	UTextBlock* GPURenderLatency; // 0x2d8
	UVerticalBox* LatencyInfoVerticalBox; // 0x2e0
};

struct UARImageComponent : UARComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UBTDecorator_TagCooldown : UBTDecorator {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct UFontImportOptions : UObject {
	FFontImportOptionsData Data; // 0x28
};

struct UMaterialExpressionDeriveNormalZ : UMaterialExpression {
	FExpressionInput InXY; // 0x40
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

struct UMaterialExpressionTextureSampleParameter : UMaterialExpressionTextureSample {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
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

struct AScoreboardNameComponent : AScoreboardComponent {
	char Index; // 0x288
};

struct ULevelSequenceProjectSettings : UDeveloperSettings {
	bool bDefaultLockEngineToDisplayRate; // 0x38
	FString DefaultDisplayRate; // 0x40
	FString DefaultTickResolution; // 0x50
	EUpdateClockSource DefaultClockSource; // 0x60
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

struct UDiscordRpc : UObject {
	bool IsConnected; // 0x28
	FMulticastInlineDelegate OnConnected; // 0x30
	FMulticastInlineDelegate OnDisconnected; // 0x40
	FMulticastInlineDelegate OnErrored; // 0x50
	FMulticastInlineDelegate OnJoin; // 0x60
	FMulticastInlineDelegate OnSpectate; // 0x70
	FMulticastInlineDelegate OnJoinRequest; // 0x80
	FDiscordRichPresence RichPresence; // 0x90
};

struct UMovieSceneEntitySystemLinker : UObject {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x238
};

struct UModularSynthComponent : USynthComponent {
	int32_t VoiceCount; // 0x6c0
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

struct AAudioVolume : AVolume {
	float Priority; // 0x258
	char bEnabled : 1; // 0x25c
	FReverbSettings Settings; // 0x260
	FInteriorSettings AmbientZoneSettings; // 0x280
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2a8
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2b8
};

struct UMovieSceneSignedObject : UObject {
	FGuid Signature; // 0x28
};

struct UNiagaraDataInterfaceArrayQuat : UNiagaraDataInterfaceArray {
	TArray<FQuat> QuatData; // 0x50
};

struct UGizmoLocalVec2ParameterSource : UGizmoBaseVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct UPortalWarsMenuCarouselWidget : UPortalWarsUserWidget {
	UPanelWidget* EntryPanel; // 0x2a8
	TArray<UPortalWarsEntryWidget*> CarouselEntries; // 0x2b8
	UWidget* IndicatorRoot; // 0x2c8
	UPanelWidget* IndicatorPanel; // 0x2d0
	UUserWidget* IndicatorWidgetClass; // 0x2d8
	FLinearColor DefaultIndicatorColor; // 0x2e0
	FLinearColor ActiveIndicatorColor; // 0x2f0
	float EntryDisplayTime; // 0x300
};

struct UMovieSceneCameraShakeTrack : UMovieSceneNameableTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct USubsurfaceProfile : UObject {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct UGameplayTagsSettings : UGameplayTagsList {
	bool ImportTagsFromConfig; // 0x48
	bool WarnOnInvalidTags; // 0x49
	bool ClearInvalidTags; // 0x4a
	bool FastReplication; // 0x4b
	FString InvalidTagCharacters; // 0x50
	TArray<FGameplayTagCategoryRemap> CategoryRemapping; // 0x60
	TArray<FSoftObjectPath> GameplayTagTableList; // 0x70
	TArray<FGameplayTagRedirect> GameplayTagRedirects; // 0x80
	TArray<FName> CommonlyReplicatedTags; // 0x90
	int32_t NumBitsForContainerSize; // 0xa0
	int32_t NetIndexFirstBitSegment; // 0xa4
	TArray<FRestrictedConfigInfo> RestrictedConfigFiles; // 0xa8
};

struct UInterpTrackInstFloatAnimBPParam : UInterpTrackInst {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct UPortalWarsWidgetSwitcher : UWidgetSwitcher {
	TArray<UUserWidget*> Widgets; // 0x148
};

struct AMagicLeapSharedWorldGameMode : AGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x308
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x318
	float PinSelectionConfidenceThreshold; // 0x328
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d0
};

struct UHorizontalBoxSlot : UPanelSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UPlatformInterfaceWebResponse : UObject {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct UNiagaraDataInterfaceGrid3DCollection : UNiagaraDataInterfaceGrid3D {
	int32_t NumAttributes; // 0x100
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x128
	char bOverrideFormat : 1; // 0x129
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

struct AWheeledVehicle : APawn {
	USkeletalMeshComponent* Mesh; // 0x280
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x288
};

struct UPortalWarsLockerEntryWidget : UPortalWarsEntryWidget {
	UTextBlock* DisplayNameText; // 0x438
	UImage* DisplayImage; // 0x440
	UWidgetSwitcher* ThumbnailSwitcher; // 0x448
	UBorder* NameTagBorder; // 0x450
	UImage* RarityIcon; // 0x458
	UWidget* EquippedIndicator; // 0x460
	UWidget* LockedRoot; // 0x468
	UWidgetSwitcher* BackgroundSwitcher; // 0x470
	UWidgetAnimation* SelectedAnimation; // 0x478
	UTextBlock* NumSkinsText; // 0x490
	UPortalWarsLockerSubWidget* ParentWidget; // 0x498
	UPanelWidget* DebugPanel; // 0x4a0
	UTextBlock* IdText; // 0x4a8
	UTextBlock* AvailabilityText; // 0x4b0
};

struct UCharacterMovementComponent : UPawnMovementComponent {
	ACharacter* CharacterOwner; // 0x148
	float GravityScale; // 0x150
	float MaxStepHeight; // 0x154
	float JumpZVelocity; // 0x158
	float JumpOffJumpZFactor; // 0x15c
	float WalkableFloorAngle; // 0x160
	float WalkableFloorZ; // 0x164
	EMovementMode MovementMode; // 0x168
	char CustomMovementMode; // 0x169
	ENetworkSmoothingMode NetworkSmoothingMode; // 0x16a
	float GroundFriction; // 0x16c
	float MaxWalkSpeed; // 0x18c
	float MaxWalkSpeedCrouched; // 0x190
	float MaxSwimSpeed; // 0x194
	float MaxFlySpeed; // 0x198
	float MaxCustomMovementSpeed; // 0x19c
	float MaxAcceleration; // 0x1a0
	float MinAnalogWalkSpeed; // 0x1a4
	float BrakingFrictionFactor; // 0x1a8
	float BrakingFriction; // 0x1ac
	float BrakingSubStepTime; // 0x1b0
	float BrakingDecelerationWalking; // 0x1b4
	float BrakingDecelerationFalling; // 0x1b8
	float BrakingDecelerationSwimming; // 0x1bc
	float BrakingDecelerationFlying; // 0x1c0
	float AirControl; // 0x1c4
	float AirControlBoostMultiplier; // 0x1c8
	float AirControlBoostVelocityThreshold; // 0x1cc
	float FallingLateralFriction; // 0x1d0
	float CrouchedHalfHeight; // 0x1d4
	float Buoyancy; // 0x1d8
	float PerchRadiusThreshold; // 0x1dc
	float PerchAdditionalHeight; // 0x1e0
	FRotator RotationRate; // 0x1e4
	char bUseSeparateBrakingFriction : 1; // 0x1f0
	char bApplyGravityWhileJumping : 1; // 0x1f0
	char bUseControllerDesiredRotation : 1; // 0x1f0
	char bOrientRotationToMovement : 1; // 0x1f0
	char bSweepWhileNavWalking : 1; // 0x1f0
	char bMovementInProgress : 1; // 0x1f0
	char bEnableScopedMovementUpdates : 1; // 0x1f0
	char bEnableServerDualMoveScopedMovementUpdates : 1; // 0x1f1
	char bForceMaxAccel : 1; // 0x1f1
	char bRunPhysicsWithNoController : 1; // 0x1f1
	char bForceNextFloorCheck : 1; // 0x1f1
	char bShrinkProxyCapsule : 1; // 0x1f1
	char bCanWalkOffLedges : 1; // 0x1f1
	char bCanWalkOffLedgesWhenCrouching : 1; // 0x1f1
	char bNetworkSkipProxyPredictionOnNetUpdate : 1; // 0x1f2
	char bNetworkAlwaysReplicateTransformUpdateTimestamp : 1; // 0x1f2
	char bDeferUpdateMoveComponent : 1; // 0x1f2
	char bEnablePhysicsInteraction : 1; // 0x1f2
	char bTouchForceScaledToMass : 1; // 0x1f2
	char bPushForceScaledToMass : 1; // 0x1f2
	char bPushForceUsingZOffset : 1; // 0x1f2
	char bScalePushForceToVelocity : 1; // 0x1f3
	USceneComponent* DeferredUpdatedMoveComponent; // 0x1f8
	float MaxOutOfWaterStepHeight; // 0x200
	float OutofWaterZ; // 0x204
	float Mass; // 0x208
	float StandingDownwardForceScale; // 0x20c
	float InitialPushForceFactor; // 0x210
	float PushForceFactor; // 0x214
	float PushForcePointZOffsetFactor; // 0x218
	float TouchForceFactor; // 0x21c
	float MinTouchForce; // 0x220
	float MaxTouchForce; // 0x224
	float RepulsionForce; // 0x228
	FVector Acceleration; // 0x22c
	FQuat LastUpdateRotation; // 0x240
	FVector LastUpdateLocation; // 0x250
	FVector LastUpdateVelocity; // 0x25c
	float ServerLastTransformUpdateTimeStamp; // 0x268
	float ServerLastClientGoodMoveAckTime; // 0x26c
	float ServerLastClientAdjustmentTime; // 0x270
	FVector PendingImpulseToApply; // 0x274
	FVector PendingForceToApply; // 0x280
	float AnalogInputModifier; // 0x28c
	float MaxSimulationTimeStep; // 0x29c
	int32_t MaxSimulationIterations; // 0x2a0
	int32_t MaxJumpApexAttemptsPerSimulation; // 0x2a4
	float MaxDepenetrationWithGeometry; // 0x2a8
	float MaxDepenetrationWithGeometryAsProxy; // 0x2ac
	float MaxDepenetrationWithPawn; // 0x2b0
	float MaxDepenetrationWithPawnAsProxy; // 0x2b4
	float NetworkSimulatedSmoothLocationTime; // 0x2b8
	float NetworkSimulatedSmoothRotationTime; // 0x2bc
	float ListenServerNetworkSimulatedSmoothLocationTime; // 0x2c0
	float ListenServerNetworkSimulatedSmoothRotationTime; // 0x2c4
	float NetProxyShrinkRadius; // 0x2c8
	float NetProxyShrinkHalfHeight; // 0x2cc
	float NetworkMaxSmoothUpdateDistance; // 0x2d0
	float NetworkNoSmoothUpdateDistance; // 0x2d4
	float NetworkMinTimeBetweenClientAckGoodMoves; // 0x2d8
	float NetworkMinTimeBetweenClientAdjustments; // 0x2dc
	float NetworkMinTimeBetweenClientAdjustmentsLargeCorrection; // 0x2e0
	float NetworkLargeClientCorrectionDistance; // 0x2e4
	float LedgeCheckThreshold; // 0x2e8
	float JumpOutOfWaterPitch; // 0x2ec
	FFindFloorResult CurrentFloor; // 0x2f0
	EMovementMode DefaultLandMovementMode; // 0x384
	EMovementMode DefaultWaterMovementMode; // 0x385
	EMovementMode GroundMovementMode; // 0x386
	char bMaintainHorizontalGroundVelocity : 1; // 0x387
	char bImpartBaseVelocityX : 1; // 0x387
	char bImpartBaseVelocityY : 1; // 0x387
	char bImpartBaseVelocityZ : 1; // 0x387
	char bImpartBaseAngularVelocity : 1; // 0x387
	char bJustTeleported : 1; // 0x387
	char bNetworkUpdateReceived : 1; // 0x387
	char bNetworkMovementModeChanged : 1; // 0x387
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x388
	char bServerAcceptClientAuthoritativePosition : 1; // 0x388
	char bNotifyApex : 1; // 0x388
	char bCheatFlying : 1; // 0x388
	char bWantsToCrouch : 1; // 0x388
	char bCrouchMaintainsBaseLocation : 1; // 0x388
	char bIgnoreBaseRotation : 1; // 0x388
	char bFastAttachedMove : 1; // 0x388
	char bAlwaysCheckFloor : 1; // 0x389
	char bUseFlatBaseForFloorChecks : 1; // 0x389
	char bPerformingJumpOff : 1; // 0x389
	char bWantsToLeaveNavWalking : 1; // 0x389
	char bUseRVOAvoidance : 1; // 0x389
	char bRequestedMoveUseAcceleration : 1; // 0x389
	char bWasSimulatingRootMotion : 1; // 0x389
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x38a
	char bHasRequestedVelocity : 1; // 0x38a
	char bRequestedMoveWithMaxSpeed : 1; // 0x38a
	char bWasAvoidanceUpdated : 1; // 0x38a
	char bProjectNavMeshWalking : 1; // 0x38a
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x38a
	float AvoidanceConsiderationRadius; // 0x39c
	FVector RequestedVelocity; // 0x3a0
	int32_t AvoidanceUID; // 0x3ac
	FNavAvoidanceMask AvoidanceGroup; // 0x3b0
	FNavAvoidanceMask GroupsToAvoid; // 0x3b4
	FNavAvoidanceMask GroupsToIgnore; // 0x3b8
	float AvoidanceWeight; // 0x3bc
	FVector PendingLaunchVelocity; // 0x3c0
	float NavMeshProjectionInterval; // 0x470
	float NavMeshProjectionTimer; // 0x474
	float NavMeshProjectionInterpSpeed; // 0x478
	float NavMeshProjectionHeightScaleUp; // 0x47c
	float NavMeshProjectionHeightScaleDown; // 0x480
	float NavWalkingFloorDistTolerance; // 0x484
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x488
	float MinTimeBetweenTimeStampResets; // 0x4d0
	FRootMotionSourceGroup CurrentRootMotion; // 0x980
	FRootMotionSourceGroup ServerCorrectionRootMotion; // 0x9b8
	FRootMotionMovementParams RootMotionParams; // 0xa80
	FVector AnimRootMotionVelocity; // 0xac0
};

struct UNiagaraDebugHUDSettings : UObject {
	FNiagaraDebugHUDSettingsData Data; // 0x48
};

struct UDatasmithPostProcessVolumeTemplate : UDatasmithObjectTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct UGeometryCacheCodecBase : UObject {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct UPortalWarsCheckInDialogWidget : UPortalWarsTxnDialogWidget {
	UTextBlock* CurrencyText; // 0x3c8
	UWidget* CurrencyRoot; // 0x3d0
	UTextBlock* ActionTitleText; // 0x3d8
	UPortalWarsCheckInRewardWidget* CheckInReward; // 0x3e0
};

struct UAISense_Damage : UAISense {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UAkMusicSyncCallbackInfo : UAkCallbackInfo {
	int32_t PlayingID; // 0x30
	FAkSegmentInfo SegmentInfo; // 0x34
	EAkCallbackType MusicSyncType; // 0x58
	FString UserCueName; // 0x60
};

struct UPortalWarsRewardReceivedEntry : UPortalWarsRewardEntryWidget {
	UTextBlock* RewardReceivedTypeText; // 0x730
	UWidget* LockedRoot; // 0x738
	UAkAudioEvent* RewardReceivedEvent; // 0x748
};

struct UDataDrivenCVarEngineSubsystem : UEngineSubsystem {
	FMulticastInlineDelegate OnDataDrivenCVarDelegate; // 0x30
};

struct UGeometryCacheTrackStreamable : UGeometryCacheTrack {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct UGizmoBaseComponent : UPrimitiveComponent {
	FLinearColor Color; // 0x450
	float HoverSizeMultiplier; // 0x460
	float PixelHitDistanceThreshold; // 0x464
};

struct UMagicLeapARPinContentBindings : USaveGame {
	TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28
};

struct UParticleModuleAccelerationDragScaleOverLife : UParticleModuleAccelerationBase {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct UPortalWarsKillcamHeaderWidget : UUserWidget {
	UWidgetAnimation* BlinkAnimation; // 0x260
	UTextBlock* TimerText; // 0x268
	UTextBlock* HeaderText; // 0x270
};

struct UHLODProxy : UObject {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
};

struct UActorSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
};

struct URandomVector : UFieldNodeVector {
	float Magnitude; // 0xb0
};

struct UTimeSynchronizationSource : UObject {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct ANavMeshBoundsVolume : AVolume {
	FNavAgentSelector SupportedAgents; // 0x258
};

struct UNiagaraComponentRendererProperties : UNiagaraRendererProperties {
	USceneComponent* ComponentType; // 0x88
	uint32_t ComponentCountLimit; // 0x90
	FNiagaraVariableAttributeBinding EnabledBinding; // 0x98
	FNiagaraVariableAttributeBinding RendererVisibilityTagBinding; // 0xf0
	bool bAssignComponentsOnParticleID; // 0x148
	bool bOnlyCreateComponentsOnParticleSpawn; // 0x149
	int32_t RendererVisibility; // 0x14c
	USceneComponent* TemplateComponent; // 0x150
	TArray<FNiagaraComponentPropertyBinding> PropertyBindings; // 0x158
};

struct UARTrackedPose : UARTrackedGeometry {
	FARPose3D TrackedPose; // 0xf8
};

struct UBTDecorator_IsAtLocation : UBTDecorator_BlackboardBase {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UMaterialExpressionSamplePhysicsIntegerField : UMaterialExpression {
	FExpressionInput WorldPosition; // 0x40
	EFieldIntegerType FieldTarget; // 0x54
};

struct ABaseGun : ACullableActor {
	FName MuzzleAttachPoint; // 0x22c
	UParticleSystem* MuzzleFX; // 0x238
	FVector Muzzle1pScale; // 0x240
	FVector Muzzle3pScale; // 0x24c
	UParticleSystemComponent* MuzzlePSC_1P; // 0x258
	UParticleSystemComponent* MuzzlePSC_3P; // 0x260
	char bLoopedMuzzleFX : 1; // 0x268
	APortalWarsCharacter* MyPawn; // 0x270
	USkeletalMeshComponent* Mesh1P; // 0x278
	UStaticMeshComponent* Mesh3P; // 0x280
	ECustomizationType SkinType; // 0x288
	float ColorIntensity3P; // 0x28c
	float ColorIntensity1P; // 0x290
	float LoudnessForBots; // 0x2b0
};

struct USoundClass : UObject {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa8
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb8
	USoundClass* ParentClass; // 0xc8
};

struct UMovieSceneObjectPropertyTrack : UMovieScenePropertyTrack {
	UObject* PropertyClass; // 0xb0
};

struct ULevelSequence : UMovieSceneSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
};

struct UBlackboardKeyType_String : UBlackboardKeyType {
	FString StringValue; // 0x30
};

struct UEnvQueryGenerator_Donut : UEnvQueryGenerator_ProjectedPoints {
	FAIDataProviderFloatValue InnerRadius; // 0xb8
	FAIDataProviderFloatValue OuterRadius; // 0xf0
	FAIDataProviderIntValue NumberOfRings; // 0x128
	FAIDataProviderIntValue PointsPerRing; // 0x160
	FEnvDirection ArcDirection; // 0x198
	FAIDataProviderFloatValue ArcAngle; // 0x1b8
	bool bUseSpiralPattern; // 0x1f0
	UEnvQueryContext* Center; // 0x1f8
	char bDefineArc : 1; // 0x200
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

struct UChildConnection : UNetConnection {
	UNetConnection* Parent; // 0x1ba8
};

struct UMaterialExpressionClamp : UMaterialExpression {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct UPortalWarsAmmoCounterWidget : UUserWidget {
	UTextBlock* AmmoText; // 0x260
	UProgressBar* ChargeProgressBar; // 0x268
};

struct APortalWarsEvolutionHUD : APortalWarsTakedownHUD {
	UPortalWarsEvolutionHUDOverlayWidget* EvolutionHUDOverlayWidget; // 0x450
};

struct UPortalWarsReplayHUDOverlayWidget : UPortalWarsUserWidget {
	UPanelWidget* LeftPlayerPanel; // 0x2a8
	UPanelWidget* RightPlayerPanel; // 0x2b0
	UPortalWarsScoreboardPlayerWidget* LeftPlayerWidgetClass; // 0x2b8
	UPortalWarsScoreboardPlayerWidget* RightPlayerWidgetClass; // 0x2c0
	UImage* TeamIndicator; // 0x2c8
	UWidget* CameraModeRoot; // 0x2d0
	UTextBlock* CameraModeText; // 0x2d8
	UPortalWarsButtonWidget* CameraModeButton; // 0x2e0
	UComboBoxString* CameraModeComboBox; // 0x2e8
	UWidget* PlayRateRoot; // 0x2f0
	UTextBlock* PlayRateText; // 0x2f8
	UPortalWarsButtonWidget* PlayRateIncreaseButton; // 0x300
	UPortalWarsButtonWidget* PlayRateDecreaseButton; // 0x308
	UComboBoxString* PlayRateComboBox; // 0x310
	UTextBlock* CurrentTimeText; // 0x318
	UTextBlock* TotalTimeText; // 0x320
	USlider* TimeSlider; // 0x330
	UProgressBar* TimeProgressBar; // 0x338
	UPortalWarsButtonWidget* PlayButton; // 0x340
	UPortalWarsButtonWidget* JumpBackButton; // 0x348
	UPortalWarsButtonWidget* JumpForwardButton; // 0x350
	UPortalWarsButtonWidget* PlayOneFrameButton; // 0x358
	UUserWidget* LoadingScreen; // 0x360
	UWidget* ReplayRoot; // 0x368
};

struct UMaterialExpressionSceneDepthWithoutWater : UMaterialExpression {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
};

struct USkinnedMeshComponent : UMeshComponent {
	USkeletalMesh* SkeletalMesh; // 0x480
	TWeakObjectPtr<USkinnedMeshComponent> MasterPoseComponent; // 0x488
	TArray<ESkinCacheUsage> SkinCacheUsage; // 0x490
	TArray<FVertexOffsetUsage> VertexOffsetUsage; // 0x4a0
	UPhysicsAsset* PhysicsAssetOverride; // 0x5a8
	int32_t ForcedLodModel; // 0x5b0
	int32_t MinLodModel; // 0x5b4
	float StreamingDistanceMultiplier; // 0x5c0
	TArray<FSkelMeshComponentLODInfo> LODInfo; // 0x5d0
	EVisibilityBasedAnimTickOption VisibilityBasedAnimTickOption; // 0x604
	char bOverrideMinLod : 1; // 0x606
	char bUseBoundsFromMasterPoseComponent : 1; // 0x606
	char bForceWireframe : 1; // 0x606
	char bDisplayBones : 1; // 0x606
	char bDisableMorphTarget : 1; // 0x606
	char bHideSkin : 1; // 0x607
	char bPerBoneMotionBlur : 1; // 0x607
	char bComponentUseFixedSkelBounds : 1; // 0x607
	char bConsiderAllBodiesForBounds : 1; // 0x607
	char bSyncAttachParentLOD : 1; // 0x607
	char bCanHighlightSelectedSections : 1; // 0x607
	char bRecentlyRendered : 1; // 0x607
	char bCastCapsuleDirectShadow : 1; // 0x607
	char bCastCapsuleIndirectShadow : 1; // 0x608
	char bCPUSkinning : 1; // 0x608
	char bEnableUpdateRateOptimizations : 1; // 0x608
	char bDisplayDebugUpdateRateOptimizations : 1; // 0x608
	char bRenderStatic : 1; // 0x608
	char bIgnoreMasterPoseComponentLOD : 1; // 0x608
	char bCachedLocalBoundsUpToDate : 1; // 0x609
	char bForceMeshObjectUpdate : 1; // 0x609
	float CapsuleIndirectShadowMinVisibility; // 0x60c
	FBoxSphereBounds CachedWorldSpaceBounds; // 0x620
	FMatrix CachedWorldToLocalTransform; // 0x640
};

struct UCreateSessionCallbackProxy : UOnlineBlueprintCallProxyBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UAssetManager : UObject {
	TArray<UObject*> ObjectReferenceList; // 0x2e0
	bool bIsGlobalAsyncScanEnvironment; // 0x2f0
	bool bShouldGuessTypeAndName; // 0x2f1
	bool bShouldUseSynchronousLoad; // 0x2f2
	bool bIsLoadingFromPakFiles; // 0x2f3
	bool bShouldAcquireMissingChunksOnLoad; // 0x2f4
	bool bOnlyCookProductionAssets; // 0x2f5
	bool bIsBulkScanning; // 0x2f6
	bool bIsPrimaryAssetDirectoryCurrent; // 0x2f7
	bool bIsManagementDatabaseCurrent; // 0x2f8
	bool bUpdateManagementDatabaseAfterScan; // 0x2f9
	bool bIncludeOnlyOnDiskAssets; // 0x2fa
	bool bHasCompletedInitialScan; // 0x2fb
	int32_t NumberOfSpawnedNotifications; // 0x2fc
};

struct UGameplayTask : UObject {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UPortalWarsInputWidget : UPortalWarsUserWidget {
	FText Title; // 0x2a8
	UTextBlock* TitleText; // 0x2c0
	FLinearColor TitleDefaultColor; // 0x2c8
	FLinearColor TitleHoveredColor; // 0x2d8
	UTextBlock* ValueText; // 0x2e8
	FLinearColor ValueDefaultColor; // 0x2f0
	FLinearColor ValueHoveredColor; // 0x300
	FMulticastInlineDelegate OnValueChangedDelegate; // 0x310
	UWidget* HoveredIndicator; // 0x320
	UImage* BackgroundImage; // 0x328
	UTexture2D* DefaultBackgroundImage; // 0x330
	UTexture2D* HoveredBackgroundImage; // 0x338
	UWidget* ValueRoot; // 0x340
	bool bAdminOnly; // 0x348
	bool bCustomOnly; // 0x349
	UAkAudioEvent* ValueChangedEvent; // 0x350
	UAkAudioEvent* HoveredEvent; // 0x358
};

struct UNavigationQueryFilter : UObject {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UNavigationSystemModuleConfig : UNavigationSystemConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UPortalWarsLockerSubWidget : UPortalWarsInspectWidget {
	UPortalWarsLockerEntryWidget* HorizontalItemEntryWidgetClass; // 0x3e8
	UPortalWarsLockerEntryWidget* VerticalItemEntryWidgetClass; // 0x3f0
	TMap<ECustomizationType, UPortalWarsLockerEntryWidget*> ItemEntryWidgetClassOverrides; // 0x3f8
	UPortalWarsLockerEntryWidget* ParentEntryWidgetClass; // 0x448
	UPortalWarsCustomScrollWidget* ParentPanel; // 0x450
	UPortalWarsCustomScrollWidget* ItemsPanel; // 0x458
	TSet<FCustomizationId> ParentCustomizations; // 0x460
	TSet<FCustomizationId> ItemCustomizations; // 0x4b0
	UTextBlock* ParentSubtitleText; // 0x500
	UPortalWarsChallengeEntryWidget* ChallengeEntry; // 0x508
	UWidget* ChallengeRoot; // 0x510
	UPortalWarsButtonWidget* ViewButton; // 0x518
	URichTextBlock* TipRichTextBlock; // 0x520
};

struct ADatasmithImportedSequencesActor : AActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x220
};

struct UClothingAssetCommon : UClothingAssetBase {
	UPhysicsAsset* PhysicsAsset; // 0x48
	TMap<FName, UClothConfigBase*> ClothConfigs; // 0x50
	TArray<FClothLODDataCommon> LODData; // 0xa0
	TArray<int32_t> LodMap; // 0xb0
	TArray<FName> UsedBoneNames; // 0xc0
	TArray<int32_t> UsedBoneIndices; // 0xd0
	int32_t ReferenceBoneIndex; // 0xe0
	UClothingAssetCustomData* CustomData; // 0xe8
};

struct UPawnAction_Move : UPawnAction {
	AActor* GoalActor; // 0x90
	FVector GoalLocation; // 0x98
	float AcceptableRadius; // 0xa4
	UNavigationQueryFilter* FilterClass; // 0xa8
	char bAllowStrafe : 1; // 0xb0
	char bFinishOnOverlap : 1; // 0xb0
	char bUsePathfinding : 1; // 0xb0
	char bAllowPartialPath : 1; // 0xb0
	char bProjectGoalToNavigation : 1; // 0xb0
	char bUpdatePathToGoal : 1; // 0xb0
	char bAbortChildActionOnPathChange : 1; // 0xb0
};

struct UBTTask_PushPawnAction : UBTTask_PawnActionBase {
	UPawnAction* Action; // 0x70
};

struct UPortalWarsBattlePassPanelWidget : UPortalWarsCareerProgressWidget {
	UTextBlock* RewardTitleText; // 0x360
	UPortalWarsRewardEntryWidget* RewardEntry; // 0x368
	UTextBlock* UnlockedText; // 0x370
	UPortalWarsButtonWidget* ViewBattlePassButton; // 0x378
};

struct UAkLuminInitializationSettings : UObject {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x98
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xc0
};

struct AMaterialInstanceActor : AActor {
	TArray<AActor*> TargetActors; // 0x220
};

struct UCurveLinearColorAtlas : UTexture2D {
	uint32_t TextureSize; // 0x1a0
	char bSquareResolution : 1; // 0x1a4
	uint32_t TextureHeight; // 0x1a8
	TArray<UCurveLinearColor*> GradientCurves; // 0x1b0
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

struct ASwitchActor : AActor {
	USceneComponent* SceneComponent; // 0x238
	int32_t LastSelectedOption; // 0x240
};

struct UPortalWarsCheckListWidget : UPortalWarsInputWidget {
	TArray<FText> DefaultOptions; // 0x368
	UPanelWidget* CheckBoxPanel; // 0x378
	UPortalWarsCheckBoxWidget* CheckBoxWidgetClass; // 0x380
};

struct UComboBoxWidgetStyle : USlateWidgetStyleContainerBase {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UEnvQueryTest_Project : UEnvQueryTest {
	FEnvTraceData ProjectionData; // 0x1f8
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

struct AWindDirectionalSource : AInfo {
	UWindDirectionalSourceComponent* Component; // 0x220
};

struct APortalWarsTutorialGoal : AActor {
	int32_t StageID; // 0x220
	int32_t GoalID; // 0x224
	bool bIsLastGoal; // 0x228
	bool bCompleteLinkedGoal; // 0x229
	bool bIsGlobal; // 0x22a
	EGoalType GoalType; // 0x22b
	USphereComponent* OverlapComp; // 0x230
	bool bHideEffects; // 0x23a
	USceneComponent* EffectRootComp; // 0x240
	UParticleSystemComponent* ParticleComp; // 0x248
	UStaticMeshComponent* RingMesh1; // 0x250
	UStaticMeshComponent* RingMesh2; // 0x258
	UStaticMeshComponent* RingMesh3; // 0x260
	UStaticMeshComponent* RingMesh4; // 0x268
	USpotLightComponent* SpotLightComp; // 0x270
	TArray<AStaticMeshActor*> Blocks; // 0x278
	UMaterialInstance* SuccessMaterialRings; // 0x288
	UMaterialInstance* SuccessMaterialBlocks; // 0x290
	UParticleSystem* SuccessParticleSystem; // 0x298
	FColor SuccessLightColor; // 0x2a0
	UMaterialInstance* DefaultMaterialBlocks; // 0x2a8
	UMaterialInstance* DefaultMaterialBlocksGlow; // 0x2b0
	UMaterialInstance* DefaultMaterialBlocksFloor; // 0x2b8
	UPortalWarsAkComponent* AkComp; // 0x2c0
	UAkAudioEvent* SuccessEvent; // 0x2c8
	UAkAudioEvent* StartAmbientLoopEvent; // 0x2d0
	UAkAudioEvent* StopAmbientLoopEvent; // 0x2d8
};

struct UPortalWarsRankListWidget : UUserWidget {
	UPortalWarsRankListEntryWidget* RankEntryWidget; // 0x260
	UVerticalBox* ItemsPanel; // 0x268
};

struct UHighlightsCloseGroupAsync : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UUdpMessagingSettings : UObject {
	bool EnabledByDefault; // 0x28
	bool EnableTransport; // 0x29
	bool bAutoRepair; // 0x2a
	float MaxSendRate; // 0x2c
	uint32_t AutoRepairAttemptLimit; // 0x30
	bool bStopServiceWhenAppDeactivates; // 0x34
	FString UnicastEndpoint; // 0x38
	FString MulticastEndpoint; // 0x48
	EUdpMessageFormat MessageFormat; // 0x58
	char MulticastTimeToLive; // 0x59
	TArray<FString> StaticEndpoints; // 0x60
	bool EnableTunnel; // 0x70
	FString TunnelUnicastEndpoint; // 0x78
	FString TunnelMulticastEndpoint; // 0x88
	TArray<FString> RemoteTunnelEndpoints; // 0x98
};

struct UPortalWarsPartyWidget : UPortalWarsUserWidget {
	UPortalWarsPartyEntryWidget* PartyEntryWidgetClass; // 0x2b8
	UPortalWarsPartyInspectWidget* PartyInspectWidgetClass; // 0x2c0
	UCanvasPanel* ItemsPanel; // 0x2c8
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

struct UAsyncActionHandleSaveGame : UBlueprintAsyncActionBase {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct AMainMenuPlayerController : APortalWarsBasePlayerController {
	UPortalWarsLoginMenuWidget* LoginMenuWidget; // 0x590
	UPortalWarsLoginMenuWidget* LoginMenuWidgetClass; // 0x598
	UPortalWarsMainMenuWidget* MainMenuWidget; // 0x5a0
	UPortalWarsMainMenuWidget* MainMenuWidgetClass; // 0x5a8
	UAkAudioEvent* MainMenuMusicEvent; // 0x5c8
	UAkAudioEvent* MainMenuMusicStopEvent; // 0x5d0
	AMainMenuGameState* GameStateRef; // 0x5d8
	UPortalWarsGameInstance* GameInstanceRef; // 0x5e0
	UPortalWarsLocalPlayer* LocalPlayerRef; // 0x5e8
	UPortalWarsIntroVideoWidget* IntroVideoWidget; // 0x5f0
	UPortalWarsIntroVideoWidget* IntroVideoWidgetClass; // 0x5f8
	UPortalWarsAutoSettingsWidget* AutoSettingsWidget; // 0x600
	UPortalWarsAutoSettingsWidget* AutoSettingsWidgetClass; // 0x608
};

struct UMovieScene3DTransformSection : UMovieSceneSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct UParticleModuleRotationRate : UParticleModuleRotationRateBase {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UParticleModuleColorScaleOverLife : UParticleModuleColorBase {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
};

struct UPortalWarsChatWidget : UPortalWarsUserWidget {
	UWidget* InputRoot; // 0x2a8
	UWidget* ChatRoot; // 0x2b0
	UTextBlock* ChatTypeText; // 0x2c0
	FLinearColor GeneralChatColor; // 0x2c8
	FLinearColor TeamChatColor; // 0x2d8
	UEditableText* ChatInputBox; // 0x2e8
	UScrollBox* ChatLogPanel; // 0x2f0
	UPortalWarsChatEntryWidget* ChatTextWidgetClass; // 0x2f8
	bool bCanCycleChannels; // 0x308
	float TimeToDisplay; // 0x30c
	int32_t NumMaxMessages; // 0x310
	int32_t MessageCharacterLimit; // 0x314
};

struct UGridSlot : UPanelSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
	int32_t Row; // 0x4c
	int32_t RowSpan; // 0x50
	int32_t Column; // 0x54
	int32_t ColumnSpan; // 0x58
	int32_t Layer; // 0x5c
	FVector2D Nudge; // 0x60
};

struct UMovieSceneCaptureProtocolBase : UObject {
	EMovieSceneCaptureProtocolState State; // 0x50
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
	EPlaneConstraintAxisSetting PlaneConstraintAxisSetting; // 0xeb
};

struct UNiagaraDataInterfaceParticleRead : UNiagaraDataInterfaceRWBase {
	FString EmitterName; // 0xd8
};

struct UPortalWarsInviteMenuWidget : UPortalWarsMenuWidget {
	UPortalWarsInviteEntryWidget* InviteEntryWidgetClass; // 0x338
	UPanelWidget* NotificationPanel; // 0x340
	UWidgetSwitcher* NotificationSwitcher; // 0x348
};

struct UBTTask_FinishWithResult : UBTTaskNode {
	EBTNodeResult Result; // 0x70
};

struct UHudSettings : UObject {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct UOnsetNRT : UAudioSynesthesiaNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct ADecalActor : AActor {
	UDecalComponent* Decal; // 0x220
};

struct UWidgetSwitcherSlot : UPanelSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UEnvQueryTest_PathfindingBatch : UEnvQueryTest_Pathfinding {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct UMovieScenePrimitiveMaterialSection : UMovieSceneSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct AFlagItem : ASpecialItem {
	char TeamIndex; // 0x6a1
	UMaterialInstance* FriendlyTeamFlagMaterial; // 0x6b0
	UMaterialInstance* EnemyTeamFlagMaterial; // 0x6b8
	UMaterialInstance* AlphaTeamFlagMaterial; // 0x6c0
	UMaterialInstance* BravoTeamFlagMaterial; // 0x6c8
	APortalWarsCTFGameState* CTFGameState; // 0x6d0
};

struct USafeZone : UContentWidget {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct USubmixEffectFlexiverbPreset : USoundEffectSubmixPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct ADefaultPawn : APawn {
	float BaseTurnRate; // 0x280
	float BaseLookUpRate; // 0x284
	UPawnMovementComponent* MovementComponent; // 0x288
	USphereComponent* CollisionComponent; // 0x290
	UStaticMeshComponent* MeshComponent; // 0x298
	char bAddDefaultMovementBindings : 1; // 0x2a0
};

