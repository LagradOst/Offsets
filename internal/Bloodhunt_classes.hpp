namespace off {
	constexpr auto GNames = 0x54c6cc0;
	constexpr auto GObjects = 0x54df468;
	constexpr auto GWorld = 0x5618fc0;
}
struct UMaterialExpressionMax {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UNiagaraSettings {
	FSoftObjectPath DefaultEffectType; // 0x38
	TArray<FText> QualityLevels; // 0x50
	TMap<FString, FText> ComponentRendererWarningsPerClass; // 0x60
	ETextureRenderTargetFormat DefaultRenderTargetFormat; // 0xb0
	ENiagaraGpuBufferFormat DefaultGridFormat; // 0xb1
	UNiagaraEffectType* DefaultEffectTypePtr; // 0xb8
};

struct UChaosClothConfig {
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

struct UTBP_ContextualHelp_TeammateRevive_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UAkMarkerCallbackInfo {
	int32_t Identifier; // 0x38
	int32_t Position; // 0x3c
	FString Label; // 0x40
};

struct USynthSamplePlayer {
	USoundWave* SoundWave; // 0x6c0
	FMulticastInlineDelegate OnSampleLoaded; // 0x6c8
	FMulticastInlineDelegate OnSamplePlaybackProgress; // 0x6d8
};

struct UNiagaraDataInterfaceRWBase {
	TSet<int32_t> OutputShaderStages; // 0x38
	TSet<int32_t> IterationShaderStages; // 0x88
};

struct ATigerScreenshotMapBuilder {
	ATigerPlayerController* PlayerController; // 0x228
	UCameraComponent* CameraComponent; // 0x230
};

struct UBaseBrushTool {
	UBrushBaseProperties* BrushProperties; // 0xc0
	bool bInBrushStroke; // 0xc8
	float WorldToLocalScale; // 0xcc
	FBrushStampData LastBrushStamp; // 0xd0
	TSoftClassPtr<UObject> PropertyClass; // 0x190
	UBrushStampIndicator* BrushStampIndicator; // 0x1b8
};

struct UARPlaneGeometry {
	EARPlaneOrientation Orientation; // 0xf8
	FVector Center; // 0xfc
	FVector Extent; // 0x108
	TArray<FVector> BoundaryPolygon; // 0x118
	UARPlaneGeometry* SubsumedBy; // 0x128
};

struct UMotionControllerComponent {
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

struct UTigerNearbySoundCueComponent {
	float DistanceToPlaySoundOnSquared; // 0xb0
	float DistanceToStopSoundOnSquared; // 0xb4
	UAkAudioEvent* PlayEvent; // 0xb8
	UAkAudioEvent* StopEvent; // 0xc0
	bool bDisableOcclusion; // 0xc8
	ATigerCharacter* CharacterOwner; // 0xd0
	UAkComponent* AkComponent; // 0xd8
};

struct UPhysicsSpringComponent {
	float SpringStiffness; // 0x1f8
	float SpringDamping; // 0x1fc
	float SpringLengthAtRest; // 0x200
	float SpringRadius; // 0x204
	ECollisionChannel SpringChannel; // 0x208
	bool bIgnoreSelf; // 0x209
	float SpringCompression; // 0x20c
};

struct UAnimNotify_PlayNiagaraEffect {
	UNiagaraSystem* Template; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	bool bAbsoluteScale; // 0x64
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct UEnvQueryGenerator_Donut {
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

struct UMaterialExpressionSkyAtmosphereLightDirection {
	int32_t LightIndex; // 0x40
};

struct ASceneCaptureCube {
	USceneCaptureComponentCube* CaptureComponentCube; // 0x238
};

struct UMaterialExpressionTangent {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UUserDefinedEnum {
	TMap<FName, FText> DisplayNameMap; // 0x60
};

struct UTigerTraversalStateAirDashConfig {
	bool bResetOnWallJump; // 0x50
	float JumpVerticalVelocity; // 0x54
	float PostJumpClimbInteractionDelay; // 0x58
	float JumpCoolDownTime; // 0x5c
	bool bPreventFallingSlide; // 0x60
	bool bResetAimGlideOnDoubleJump; // 0x61
};

struct UMovieSceneEventTrack {
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	EFireEventsAtPosition EventPosition; // 0x84
	TArray<UMovieSceneSection*> Sections; // 0x88
};

struct UAkCallbackInfo {
	UAkComponent* AkComponent; // 0x28
};

struct UGameUserSettings {
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

struct UParticleModuleLocationPrimitiveBase {
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

struct UTigerCharacterEyewearCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x148
};

struct UTigerAnimNotify_Discipline {
	ETigerDisciplinesEnum Discipline; // 0x38
	ETigerDisciplineEvent DisciplineEvent; // 0x39
};

struct UTigerUserInputBinding {
	FMulticastInlineDelegate OnPresetChanged; // 0x28
	FMulticastInlineDelegate OnSettingChangedFromPreset; // 0x38
	FMulticastInlineDelegate OnInputBindingsReset; // 0x48
	FMulticastInlineDelegate OnInputBindingChanged; // 0x58
	FMulticastInlineDelegate OnAxisInputBindingChanged; // 0x68
	FTigerInputBindings UserInputs; // 0xf8
	FTigerInputBindings DefaultInputs; // 0x138
	TArray<FInputActionKeyMapping> DebugMappings; // 0x178
	TArray<FInputAxisKeyMapping> DebugAxisMappings; // 0x188
	TArray<FInputActionKeyMapping> ConsoleShippingDebugMappings; // 0x198
	TArray<FInputAxisKeyMapping> ConsoleShippingDebugAxisMappings; // 0x1a8
	TArray<UTigerWeaponCycleStyle*> WeaponCycleStyles; // 0x1b8
	TArray<UTigerWeaponCycleStyle*> WeaponCycleStylesGamepad; // 0x1c8
	FString BoundConsoleCommand; // 0x1d8
	UCurveFloat* SensitivityCurve; // 0x1e8
	UCurveFloat* SensitivityCurveGamepad; // 0x1f0
	FTigerInputSettings InputSettings; // 0x1f8
	FTigerInputSettings DefaultInputSettings; // 0x23c
	UTigerCustomizableKeybindsDataAsset* CustomizableKeybindsDataAsset; // 0x280
	UTigerInputPresetDataAsset* InputPresetData; // 0x288
	FName UsedInputPreset; // 0x290
	FName NameOfCustomPreset; // 0x298
	UTigerWeaponCycleStyle* DefaultWeaponCycleStyle; // 0x2a0
	bool bIsSwitchingPreset; // 0x2a8
};

struct URadialVector {
	float Magnitude; // 0xb0
	FVector Position; // 0xb4
};

struct UTigerAIPlayerPickUpItemTask {
	float MaximumLootingDistance; // 0x98
};

struct UTigerFleshOfMarbleConfig {
	UTigerBuff* BuffType; // 0x160
	UAnimMontage* Montage; // 0x168
};

struct UChaosSolverSettings {
	FSoftClassPath DefaultChaosSolverActorClass; // 0x40
};

struct UTigerInWorldWidget {
	FVector WorldLocation; // 0x280
	FVector ComponentOffset; // 0x28c
	FVector2D ViewportPosition; // 0x298
	UTigerInWorldWidget* InnerWidget; // 0x2a0
	TWeakObjectPtr<USceneComponent> ComponentToFollow; // 0x2a8
	TArray<UWidget*> PlayerDistanceScalingWidgets; // 0x2b0
	bool bWasOnScreen; // 0x2c0
	bool bLimitRotationAngleToSides; // 0x2c1
	bool bSupportsHover; // 0x2c2
	bool bShowDistanceMarker; // 0x2c3
};

struct UTBP_UI_TransitionHeader_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* InAnimation; // 0x268
	UImage* BackgroundImage; // 0x270
	URichTextBlock* TextEffectWidget; // 0x278
	URichTextBlock* TextWidget; // 0x280
	FText Text; // 0x288
	float AnimationDelay; // 0x2a0
	float EffectSizeMultiplier; // 0x2a4
	bool bHasInitializedEffect; // 0x2a8
	ETigerHeaderType HeaderType; // 0x2a9
	FMulticastInlineDelegate OnInAnimationFinished; // 0x2b0
	ENUM_TextStyleColor StyleColor; // 0x2c0
	EHorizontalAlignment HorizontalAlignment; // 0x2c1
};

struct UTigerDisciplineScouts {
	UTigerFamiliarScoutPassive* Server_PassiveComponent; // 0xf0
	ATigerFamiliarScout* Server_SpawnedFamiliar; // 0xf8
	UTigerScoutsConfig* Config; // 0x100
};

struct UMaterialExpressionArctangent {
	FExpressionInput Input; // 0x40
};

struct UEnvQueryTest_GameplayTags {
	FGameplayTagQuery TagQueryToMatch; // 0x1f8
	bool bUpdatedToUseQuery; // 0x240
	EGameplayContainerMatchType TagsToMatch; // 0x241
	FGameplayTagContainer GameplayTags; // 0x248
};

struct UARPlaneComponent {
	FARPlaneUpdatePayload ReplicatedPayload; // 0x280
};

struct UAutomationTestSettings {
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

struct UAkPortalComponent {
	bool bDynamic; // 0x1f8
	AkAcousticPortalState InitialState; // 0x1f9
	float ObstructionRefreshInterval; // 0x1fc
	float ObstructionUpdateThresholdDistance2DSqrd; // 0x200
	float ObstructionDistantRefreshInterval; // 0x204
	ECollisionChannel ObstructionCollisionChannel; // 0x208
};

struct UGranularSynth {
	USoundWave* GranulatedSoundWave; // 0x6c0
};

struct UDecalComponent {
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

struct UMaterialExpressionCollectionParameter {
	UMaterialParameterCollection* Collection; // 0x40
	FName ParameterName; // 0x48
	FGuid ParameterId; // 0x50
};

struct UInterpTrackInstAkAudioRTPC {
	float LastUpdatePosition; // 0x28
};

struct UPreviewMeshCollection {
	USkeleton* Skeleton; // 0x38
	TArray<FPreviewMeshCollectionEntry> SkeletalMeshes; // 0x40
};

struct UMovieScenePropertyTrack {
	UMovieSceneSection* SectionToKey; // 0x78
	FMovieScenePropertyBinding PropertyBinding; // 0x80
	TArray<UMovieSceneSection*> Sections; // 0x98
};

struct UMovieScenePrimitiveMaterialSection {
	FMovieSceneObjectPathChannel MaterialChannel; // 0xe8
};

struct USoundfieldEffectBase {
	USoundfieldEffectSettingsBase* Settings; // 0x28
};

struct UBTTask_FinishWithResult {
	EBTNodeResult Result; // 0x70
};

struct UTigerAIPlayerMoveToTask {
	UTigerAIPlayerClimbIfPossibleTask* ClimbTask; // 0xb8
	UTigerAIPlayerSlideIfPossibleTask* SlideTask; // 0xc0
	UTigerAIPlayerWallGrindTask* WallGrindTask; // 0xc8
	float CheckStuckDelay; // 0xd0
	float CheckClimbTaskTransitionsDelay; // 0xd8
	float CheckSlideTaskTransitionsDelay; // 0xe0
	float JumpGapTransitionsDelay; // 0xe8
	ATigerLocalAIControllerBase* LocalAIController; // 0xf0
	ATigerPlayer* CurrentTigerPlayer; // 0xf8
};

struct ATigerClientInteractiveSpawner {
	TMap<uint32_t, FClientSpawnData> PendingCreationQueue; // 0x2d8
};

struct UARLifeCycleComponent {
	FMulticastInlineDelegate OnARActorSpawnedDelegate; // 0x1f8
	FMulticastInlineDelegate OnARActorToBeDestroyedDelegate; // 0x208
};

struct UTBP_BestialTrailPart_SplineMesh_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x580
	ATigerBestialTrailVisualizer* Visualizer; // 0x588
};

struct UABP_VMP_BRU_M_HAIR_07_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x760
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xba0
};

struct ATBP_ProjectionDash_TargetIndicator_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	UPointLightComponent* PointLight; // 0x230
	UStaticMeshComponent* StaticMesh; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
};

struct UTigerGameSingleton {
	TMap<UAnimSequence*, UAnimMontage*> GeneratedMontages; // 0x28
};

struct UTigerArchetypeSelectElysiumUI {
	TArray<FTigerPersistentPlayerCharacter> PlayerCharacters; // 0x3b0
	FTigerItemId AdditionalCharacterSlotItem; // 0x3c0
	char NumCharacterSlots; // 0x3c8
};

struct UMagicLeapARPinSaveGame {
	FGuid PinnedID; // 0x28
	FTransform ComponentWorldTransform; // 0x40
	FTransform PinTransform; // 0x70
	bool bShouldPinActor; // 0xa0
};

struct UMaterialExpressionLightmassReplace {
	FExpressionInput Realtime; // 0x40
	FExpressionInput Lightmass; // 0x54
};

struct UTigerItemDatabase {
	TMap<FName, FTigerItemDatabaseCategory> ItemsByCategory; // 0x28
};

struct AAkAcousticPortal {
	UAkPortalComponent* Portal; // 0x260
	AkAcousticPortalState InitialState; // 0x268
	bool bRequiresStateMigration; // 0x269
};

struct UStreamableRenderAsset {
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

struct UMaterialExpressionDDX {
	FExpressionInput Value; // 0x40
};

struct UMaterialExpressionBentNormalCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UEnvQueryTest_PathfindingBatch {
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x280
};

struct UGameplayTaskResource {
	int32_t ManualResourceID; // 0x28
	int8_t AutoResourceID; // 0x2c
	char bManuallySetID : 1; // 0x30
};

struct UPointLightComponent {
	char bUseInverseSquaredFalloff : 1; // 0x348
	float LightFalloffExponent; // 0x34c
	float SourceRadius; // 0x350
	float SoftSourceRadius; // 0x354
	float SourceLength; // 0x358
};

struct UPendingNetGame {
	UNetDriver* NetDriver; // 0x30
	UDemoNetDriver* DemoNetDriver; // 0x38
};

struct UMatineeCameraShake {
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

struct ATigerBuildingSystem {
	USceneComponent* Root; // 0x228
	USplineComponent* SplineLeft; // 0x230
	USplineComponent* SplineRight; // 0x238
	TArray<FTigerBuildingSystemTransformableCorner> PoseableCornerFrontComponents; // 0x240
	TArray<FTigerBuildingSystemTransformableCorner> PoseableCornerLeftComponents; // 0x250
	TArray<FTigerBuildingSystemTransformableCorner> PoseableCornerBackComponents; // 0x260
	TArray<FTigerBuildingSystemTransformableCorner> PoseableCornerRightComponents; // 0x270
	FTigerBuildingSystemWallPieceInstancingData WallPieceInstancingDatas; // 0x280
};

struct UGeometryCollectionDebugDrawComponent {
	AGeometryCollectionDebugDrawActor* GeometryCollectionDebugDrawActor; // 0xb0
	AGeometryCollectionRenderLevelSetActor* GeometryCollectionRenderLevelSetActor; // 0xb8
};

struct UTBP_ContextualHelp_Tutorial_Jump_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UInterpTrackInstDirector {
	AActor* OldViewTarget; // 0x28
};

struct UTigerMenuWidget {
	UTigerSharedMouseCursor* SharedMouseCursor; // 0x280
	bool bStopPlayerInteractionsOnOpen; // 0x288
	bool bShouldCloseOtherMenusOnOpen; // 0x28a
};

struct UTigerLinearColorSetAsset {
	TMap<FName, FLinearColor> ColorSets; // 0x30
	TMap<FName, float> ScalarParameters; // 0x80
};

struct UAnimBlueprint {
	USkeleton* TargetSkeleton; // 0xa8
	TArray<FAnimGroupInfo> Groups; // 0xb0
	bool bUseMultiThreadedAnimationUpdate; // 0xc0
	bool bWarnAboutBlueprintUsage; // 0xc1
};

struct UVirtualTexturePoolConfig {
	int32_t DefaultSizeInMegabyte; // 0x28
	TArray<FVirtualTextureSpacePoolConfig> Pools; // 0x30
};

struct ULandscapeInfo {
	LazyObjectProperty LandscapeActor; // 0x28
	FGuid LandscapeGuid; // 0x44
	int32_t ComponentSizeQuads; // 0x54
	int32_t SubsectionSizeQuads; // 0x58
	int32_t ComponentNumSubsections; // 0x5c
	FVector DrawScale; // 0x60
	TArray<ALandscapeStreamingProxy*> Proxies; // 0x110
};

struct UMaterialExpressionParticleSubUV {
	char bBlend : 1; // 0x60
};

struct UParticleModuleAccelerationConstant {
	FVector Acceleration; // 0x38
};

struct UNiagaraDataInterfaceAudioPlayer {
	USoundBase* SoundToPlay; // 0x38
	USoundAttenuation* Attenuation; // 0x40
	USoundConcurrency* Concurrency; // 0x48
	TArray<FName> ParameterNames; // 0x50
	bool bLimitPlaysPerTick; // 0x60
	int32_t MaxPlaysPerTick; // 0x64
	bool bStopWhenComponentIsDestroyed; // 0x68
};

struct UEnvQueryTest_Volume {
	UEnvQueryContext* VolumeContext; // 0x1f8
	AVolume* VolumeClass; // 0x200
	char bDoComplexVolumeTest : 1; // 0x208
};

struct UTigerCombatComponent {
	UTigerWeapon* DefaultUnarmedWeaponClass; // 0xb0
	UTigerItemAsset* DefaultMeleeItemAsset; // 0xb8
	UTigerItemAsset* DefaultRangedItemAsset; // 0xc0
	uint32_t DefaultRangedStartingAmmo; // 0xc8
	FMulticastInlineDelegate OnEnterCombat; // 0xd0
	FMulticastInlineDelegate OnLeaveCombat; // 0xe0
	UTigerWeapon* CurrentWeaponClass; // 0xf0
	UTigerMeleeWeapon* CurrentMeleeWeaponClass; // 0xf8
	UTigerWeapon* CurrentVisibleWeaponClass; // 0x100
	float OutOfCombatTime; // 0x108
	float EntityDetectionSphere; // 0x118
	char CombatState; // 0x124
};

struct UTBP_UI_Quest_Marker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCanvasPanel* IconCanvas; // 0x2c0
	UImage* QuestMarkerImage; // 0x2c8
};

struct UTigerSceneBackgroundUI {
	TSoftObjectPtr<UWorld> DefaultSubLevel; // 0x2b8
	UTigerSubLevelList* SubLevelList; // 0x2e8
	FName DefaultCameraTag; // 0x2f0
	FName SpawnLocationTag; // 0x2f8
	FViewTargetTransitionParams CameraTransitionParams; // 0x300
	TSoftObjectPtr<UTigerItemPreviewAsset> ItemPreviews; // 0x310
	FName ItemParentTag; // 0x338
	ATigerSingleChildActor* ItemParentActor; // 0x340
	TSoftClassPtr<UObject> CurrentPreviewItem; // 0x348
	TArray<ACineCameraActor*> CinematicCameras; // 0x370
	FMulticastInlineDelegate OnBackgroundShown; // 0x3a0
};

struct UTBP_ContextualHelp_Tutorial_ArchetypePower_Gamepad_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UMovieSceneFolder {
	FName FolderName; // 0x28
	TArray<UMovieSceneFolder*> ChildFolders; // 0x30
	TArray<UMovieSceneTrack*> ChildMasterTracks; // 0x40
	TArray<FString> ChildObjectBindingStrings; // 0x50
};

struct UMasterAudioSubmixCaptureProtocol {
	FString Filename; // 0x58
};

struct UTBP_Buff_KindredCharm_Player_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
};

struct UMaterialExpressionDivide {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UNiagaraDataInterfaceGrid3DCollection {
	int32_t NumAttributes; // 0x100
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0x108
	ENiagaraGpuBufferFormat BufferFormat; // 0x128
};

struct UBTDecorator_Cooldown {
	float CooldownTime; // 0x68
};

struct ATigerApartmentArchetype {
	USceneComponent* Root; // 0x228
	USceneComponent* Min; // 0x230
	USceneComponent* Max; // 0x238
	TArray<UMaterialInterface*> PossibleWallpapers; // 0x240
};

struct UTBP_UI_MenuButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* SmallButton_OnIdle; // 0x268
	UWidgetAnimation* SmallButton_OnReleased; // 0x270
	UWidgetAnimation* SmallButton_OnPressed; // 0x278
	UWidgetAnimation* SmallButton_OnClick; // 0x280
	UWidgetAnimation* SmallButton_OnHover; // 0x288
	UButton* Button; // 0x290
	UImage* ButtonBackground; // 0x298
	UTBP_UI_Box_C* ButtonSelectionBorder; // 0x2a0
	UNamedSlot* ContentOverride; // 0x2a8
	UImage* Image; // 0x2b0
	UImage* Image_686; // 0x2b8
	UCanvasPanel* ScalePanel; // 0x2c0
	UImage* SingleScalingButtonFill; // 0x2c8
	UImage* SmallButton_Base; // 0x2d0
	UImage* SmallButton_Border; // 0x2d8
	UImage* SmallButton_Dot_Bottom; // 0x2e0
	UImage* SmallButton_Dot_Top; // 0x2e8
	UImage* SmallButton_Ornament_Bottom; // 0x2f0
	UImage* SmallButton_Ornament_Top; // 0x2f8
	USizeBox* SmallButton_SizeBox; // 0x300
	UTigerStyledRichTextBlock* SmallButtonTextWidget; // 0x308
	UWidgetSwitcher* WidgetSwitcher_1; // 0x310
	FMulticastInlineDelegate OnClicked; // 0x318
	float BorderOpacity; // 0x328
	FText ButtonText; // 0x330
	float BorderOpacityTarget; // 0x348
	float BorderOpacitySpeed; // 0x34c
	FMulticastInlineDelegate OnHovered; // 0x350
	FMulticastInlineDelegate OnUnhovered; // 0x360
	FLinearColor PressedColor; // 0x370
	FLinearColor HoveredColor; // 0x380
	FLinearColor NormalColor; // 0x390
	FLinearColor BorderPressedColor; // 0x3a0
	FLinearColor BorderHoveredColor; // 0x3b0
	FLinearColor BorderNormalColor; // 0x3c0
	FDataTableRowHandle RichTextFont; // 0x3d0
	bool Hovered; // 0x3e0
	bool Pressed; // 0x3e1
};

struct UParticleModuleParameterDynamic {
	TArray<FEmitterDynamicParameter> DynamicParams; // 0x30
	int32_t UpdateFlags; // 0x40
	char bUsesVelocity : 1; // 0x44
};

struct UTigerNpcDialogueList {
	FString DialogueIdBase; // 0x30
	TMap<FString, FTigerNpcDialogue> DialogueLines; // 0x40
};

struct UPlayMontageCallbackProxy {
	FMulticastInlineDelegate OnCompleted; // 0x28
	FMulticastInlineDelegate OnBlendOut; // 0x38
	FMulticastInlineDelegate OnInterrupted; // 0x48
	FMulticastInlineDelegate OnNotifyBegin; // 0x58
	FMulticastInlineDelegate OnNotifyEnd; // 0x68
};

struct UBTTask_PushPawnAction {
	UPawnAction* Action; // 0x70
};

struct AMagicLeapARPinRenderer {
	bool bInfoActorsVisibilityOverride; // 0x228
	TMap<FGuid, AMagicLeapARPinInfoActorBase*> AllInfoActors; // 0x230
	AMagicLeapARPinInfoActorBase* ClassToSpawn; // 0x288
};

struct UTigerBuffSingleSwingInstance {
	ATigerPlayer* Player; // 0x88
};

struct UMovieSceneEnumSection {
	FMovieSceneByteChannel EnumCurve; // 0xe8
};

struct ATBP_Enraged_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x230
	UParticleSystemComponent* RegeneratingEmitter; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
	int32_t EnrageAkEventID; // 0x248
};

struct UAkAudioBank {
	bool AutoLoad; // 0x50
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x58
	TSet<TSoftObjectPtr<UAkAudioEvent>> LinkedAkEvents; // 0xa8
	UAkAssetPlatformData* CurrentLocalizedPlatformAssetData; // 0xf8
};

struct UNiagaraDataInterfaceArrayBool {
	TArray<bool> BoolData; // 0x50
};

struct UTigerEmoteWheelWidget {
	ATigerPlayer* Player; // 0x2a0
	UTigerEmoteControllerComponent* EmoteController; // 0x2a8
};

struct UTigerGameFlowStateMap {
	TMap<UTigerGameFlowState*, UTigerGameFlowState*> FlowStateMap; // 0x30
};

struct UTBP_EyewearCustomization_Master_C {
	TMap<ENUM_PiercingNames, bool> VisiblePiercingsFilter; // 0x170
};

struct ATigerAICAP {
	TArray<UTigerAICommandBase*> Commands; // 0x258
};

struct APlayerCameraManager {
	APlayerController* PCOwner; // 0x228
	USceneComponent* TransformComponent; // 0x230
	float DefaultFOV; // 0x240
	float DefaultOrthoWidth; // 0x248
	float DefaultAspectRatio; // 0x250
	FCameraCacheEntry CameraCache; // 0x2a0
	FCameraCacheEntry LastFrameCameraCache; // 0x890
	FTViewTarget ViewTarget; // 0xe80
	FTViewTarget PendingViewTarget; // 0x1480
	FCameraCacheEntry CameraCachePrivate; // 0x1ab0
	FCameraCacheEntry LastFrameCameraCachePrivate; // 0x20a0
	TArray<UCameraModifier*> ModifierList; // 0x2690
	TArray<UCameraModifier*> DefaultModifiers; // 0x26a0
	float FreeCamDistance; // 0x26b0
	FVector FreeCamOffset; // 0x26b4
	FVector ViewTargetOffset; // 0x26c0
	FMulticastInlineDelegate OnAudioFadeChangeEvent; // 0x26d0
	TArray<AEmitterCameraLensEffectBase*> CameraLensEffects; // 0x26f0
	UCameraModifier_CameraShake* CachedCameraShakeMod; // 0x2700
	UCameraAnimInst* AnimInstPool[0x8]; // 0x2708
	TArray<FPostProcessSettings> PostProcessBlendCache; // 0x2748
	TArray<UCameraAnimInst*> ActiveAnims; // 0x2768
	TArray<UCameraAnimInst*> FreeAnims; // 0x2778
	ACameraActor* AnimCameraActor; // 0x2788
	char bIsOrthographic : 1; // 0x2790
	char bDefaultConstrainAspectRatio : 1; // 0x2790
	char bClientSimulatingViewTarget : 1; // 0x2790
	char bUseClientSideCameraUpdates : 1; // 0x2790
	char bGameCameraCutThisFrame : 1; // 0x2791
	float ViewPitchMin; // 0x2794
	float ViewPitchMax; // 0x2798
	float ViewYawMin; // 0x279c
	float ViewYawMax; // 0x27a0
	float ViewRollMin; // 0x27a4
	float ViewRollMax; // 0x27a8
	float ServerUpdateCameraTimeout; // 0x27b0
};

struct UVirtualTextureBuilder {
	UVirtualTexture2D* Texture; // 0x28
	uint64_t BuildHash; // 0x30
};

struct UNiagaraDataInterfaceTexture {
	UTexture* Texture; // 0x38
};

struct UUniformGridPanel {
	FMargin SlotPadding; // 0x120
	float MinDesiredSlotWidth; // 0x130
	float MinDesiredSlotHeight; // 0x134
};

struct UDatasmithSpotLightComponentTemplate {
	float InnerConeAngle; // 0x30
	float OuterConeAngle; // 0x34
};

struct UAISenseConfig_Damage {
	UAISense_Damage* Implementation; // 0x48
};

struct UTigerJudgeCombatState {
	TArray<UTigerJudgeBaseAttackState*> AttackTypes; // 0x60
	TArray<UTigerJudgeBaseAttackState*> AvailableAttacks; // 0x70
	float TimeWithoutSeeingBloodhuntedPlayers; // 0x80
};

struct UParticleModuleLocationBoneSocket {
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

struct UParticleModuleMeshRotationRate {
	FRawDistributionVector StartRotationRate; // 0x30
};

struct UTigerBuffAnarchHuntingKnifeInstance {
	UTigerBuffAnarchHuntingKnife* HuntingKnifeBuff; // 0x88
	ATigerPlayer* Player; // 0x90
};

struct UGizmoLineHandleComponent {
	FVector Normal; // 0x470
	float HandleSize; // 0x47c
	float Thickness; // 0x480
	FVector Direction; // 0x484
	float Length; // 0x490
	bool bImageScale; // 0x494
};

struct UNavigationDataChunk {
	FName NavigationDataName; // 0x28
};

struct UMovieSceneLevelVisibilitySection {
	ELevelVisibility Visibility; // 0xf0
	TArray<FName> LevelNames; // 0xf8
};

struct UEndpointSubmix {
	FName EndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	UAudioEndpointSettingsBase* EndpointSettings; // 0x48
};

struct UMovieSceneSignedObject {
	FGuid Signature; // 0x28
};

struct UAnimNotifyState_TimedParticleEffect {
	UParticleSystem* PSTemplate; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UTigerCharacterIconCustomization {
	TSoftObjectPtr<UTexture2D> CharacterIcon; // 0x110
};

struct UTBP_Ping_Bark_Masquerade_C {
	FText DescriptionNotBloodhunted; // 0x128
	UAkAudioEvent* MasqueradeIntactVO; // 0x140
};

struct UMonoWaveTableSynthPreset {
	FString PresetName; // 0x28
	char bLockKeyframesToGridBool : 1; // 0x38
	int32_t LockKeyframesToGrid; // 0x3c
	int32_t WaveTableResolution; // 0x40
	TArray<FRuntimeFloatCurve> WaveTable; // 0x48
	char bNormalizeWaveTables : 1; // 0x58
};

struct UTigerVoipTalkerState {
	FMulticastInlineDelegate InputDeviceChanged; // 0x28
	FMulticastInlineDelegate OutputDeviceChanged; // 0x38
	TArray<FTalkingState> PlayerTalkingStates; // 0x90
};

struct UMaterialExpressionSine {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UInterpGroup {
	TArray<UInterpTrack*> InterpTracks; // 0x30
	FName GroupName; // 0x40
	FColor GroupColor; // 0x48
	char bCollapsed : 1; // 0x4c
	char bVisible : 1; // 0x4c
	char bIsFolder : 1; // 0x4c
	char bIsParented : 1; // 0x4c
	char bIsSelected : 1; // 0x4c
};

struct UIpConnection {
	float SocketErrorDisconnectDelay; // 0x1b40
};

struct UMaterialExpressionDeriveNormalZ {
	FExpressionInput InXY; // 0x40
};

struct UParticleModuleVelocityOverLifetime {
	FRawDistributionVector VelOverLife; // 0x38
	char Absolute : 1; // 0x80
};

struct ASkeletalMeshActor {
	char bShouldDoAnimNotifies : 1; // 0x230
	char bWakeOnLevelStart : 1; // 0x230
	USkeletalMeshComponent* SkeletalMeshComponent; // 0x238
	USkeletalMesh* ReplicatedMesh; // 0x240
	UPhysicsAsset* ReplicatedPhysAsset; // 0x248
	UMaterialInterface* ReplicatedMaterial0; // 0x250
	UMaterialInterface* ReplicatedMaterial1; // 0x258
};

struct UTigerBuffMeleeCharge {
	float TimeRunningBeforeBuffIsActive; // 0x248
	float MaxDeviationAllowedInDegrees; // 0x24c
	UTigerBuff* AttackBuff; // 0x250
};

struct UTigerCustomMontageListClanAndGender {
	FTigerPlayerMontageByClan MontagesByClan[0x2]; // 0x28
};

struct UARGetCandidateObjectAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UARFaceGeometry {
	FVector LookAtTarget; // 0xf8
	bool bIsTracked; // 0x104
	TMap<EARFaceBlendShape, float> BlendShapes; // 0x108
	FTransform LeftEyeTransform; // 0x190
	FTransform RightEyeTransform; // 0x1c0
};

struct UMaterialExpressionOneMinus {
	FExpressionInput Input; // 0x40
};

struct UABP_VMP_TOR_M_HAIR_04_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0xbc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3ec0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4300
};

struct UTigerClientRewardTrackSeasonalChallenges {
	FDateTime UnlockDate; // 0x48
	FDateTime LockDate; // 0x50
	TArray<FTigerChallengeInstanceID> ChallengeInstanceIDs; // 0x58
	TArray<FTigerItemId> RewardIdForSpecificChallenge; // 0x68
};

struct UNiagaraDataInterfaceAudioSubmix {
	USoundSubmix* Submix; // 0x38
};

struct UMovieSceneMediaSection {
	UMediaSource* MediaSource; // 0xe8
	bool bLooping; // 0xf0
	FFrameNumber StartFrameOffset; // 0xf4
	UMediaTexture* MediaTexture; // 0xf8
	UMediaSoundComponent* MediaSoundComponent; // 0x100
	bool bUseExternalMediaPlayer; // 0x108
	UMediaPlayer* ExternalMediaPlayer; // 0x110
};

struct UTigerDisciplineAnimTriggered {
	UTigerDisciplineAnimTriggeredConfig* AnimConfig; // 0x78
	UAnimMontage* LastPlayingMontage; // 0x90
	TMap<UAnimMontage*, float> TriggerTimes; // 0x98
};

struct UTigerCharacterCardBackgroundCustomization {
	TSoftObjectPtr<UTexture2D> CardBackground; // 0x110
};

struct UTigerBuffingConsumableAsset {
	UTigerBuff* BuffToApply; // 0x170
};

struct UABP_VMP_TOR_M_HAIR_06_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct USoundfieldSubmix {
	FName SoundfieldEncodingFormat; // 0x40
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x48
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x60
};

struct ATigerBuffPostProcess {
	USceneComponent* Root; // 0x228
	UPostProcessComponent* PostProcess; // 0x230
};

struct UTigerBloodResonanceAsset {
	FText ResonanceName; // 0x30
	FText InventoryLevel1Description; // 0x48
	FText InventoryLevel2Description; // 0x60
	FText InventoryLevel3Description; // 0x78
	FText FeedRewardLevel1Description; // 0x90
	FText FeedRewardLevel2Description; // 0xa8
	FText FeedRewardLevel3Description; // 0xc0
	FColor ResonanceColor; // 0xd8
	TSoftObjectPtr<UTexture2D> ResonanceLevel1; // 0xe0
	TSoftObjectPtr<UTexture2D> ResonanceLevel2; // 0x108
	TSoftObjectPtr<UTexture2D> ResonanceLevel3; // 0x130
	TSoftObjectPtr<UTexture2D> SlotLevel1; // 0x158
	TSoftObjectPtr<UTexture2D> SlotLevel2; // 0x180
	TSoftObjectPtr<UTexture2D> SlotLevel3; // 0x1a8
	TSoftObjectPtr<UMaterial> ResonanceVfx; // 0x1d0
};

struct UMovieSceneSkeletalAnimationTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
	bool bUseLegacySectionIndexBlend; // 0x90
	FMovieSceneSkeletalAnimRootMotionTrackParams RootMotionParams; // 0x98
	bool bBlendFirstChildOfRoot; // 0xc8
};

struct UMaterialExpressionLandscapeGrassOutput {
	TArray<FGrassInput> GrassTypes; // 0x40
};

struct UTigerPassiveColossalStrength {
	float UnarmedDamageMultiplier; // 0x118
};

struct UTigerBuffUnseenPresence {
	UTigerBuffUnseenPresenceInstance* BuffInstanceClass; // 0x248
	UAkAudioEvent* NearbySound; // 0x250
	float NearbySoundPlayDistanceSquared; // 0x258
};

struct UTBP_ContextualHelp_MasqueradeDiscipline_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UBoundsCopyComponent {
	TSoftObjectPtr<AActor> BoundsSourceActor; // 0xb0
	bool bUseCollidingComponentsForSourceBounds; // 0xd8
	bool bKeepOwnBoundsScale; // 0xd9
	bool bUseCollidingComponentsForOwnBounds; // 0xda
	FTransform PostTransform; // 0xe0
	bool bCopyXBounds; // 0x110
	bool bCopyYBounds; // 0x111
	bool bCopyZBounds; // 0x112
};

struct UABP_VMP_BRU_M_HAIR_13_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x710
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0xb50
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0xf90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x13d0
	FAnimNode_Root AnimGraphNode_Root; // 0x1810
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1840
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1c80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x20c0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2500
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2520
};

struct UCameraComponent {
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

struct UMaterialExpressionTemporalSobol {
	FExpressionInput Index; // 0x40
	FExpressionInput Seed; // 0x54
	uint32_t ConstIndex; // 0x68
	FVector2D ConstSeed; // 0x6c
};

struct UWidgetAnimationPlayCallbackProxy {
	FMulticastInlineDelegate Finished; // 0x28
};

struct UTigerMajestyBuff {
	float NPCDuration; // 0x248
};

struct USkyLightComponent {
	bool bRealTimeCapture; // 0x230
	ESkyLightSourceType SourceType; // 0x231
	UTextureCube* Cubemap; // 0x238
	float SourceCubemapAngle; // 0x240
	int32_t CubemapResolution; // 0x244
	float SkyDistanceThreshold; // 0x248
	bool bCaptureEmissiveOnly; // 0x24c
	bool bLowerHemisphereIsBlack; // 0x24d
	FLinearColor LowerHemisphereColor; // 0x250
	float OcclusionMaxDistance; // 0x260
	float Contrast; // 0x264
	float OcclusionExponent; // 0x268
	float MinOcclusion; // 0x26c
	FColor OcclusionTint; // 0x270
	char bCloudAmbientOcclusion : 1; // 0x274
	float CloudAmbientOcclusionStrength; // 0x278
	float CloudAmbientOcclusionExtent; // 0x27c
	float CloudAmbientOcclusionMapResolutionScale; // 0x280
	float CloudAmbientOcclusionApertureScale; // 0x284
	EOcclusionCombineMode OcclusionCombineMode; // 0x288
	UTextureCube* BlendDestinationCubemap; // 0x348
};

struct UTigerJudgeSwordComponent {
	UParticleSystem* CharacterHitEffect; // 0x4e0
	UAkAudioEvent* CharacterHitSound; // 0x4e8
};

struct USceneCaptureComponent {
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

struct UTigerChallengePlayGames {
	FTigerChallengeRequirementClan RequiredClanCondition; // 0xb0
	FTigerChallengeRequirementGameMode RequiredGameModeCondition; // 0xc0
};

struct UScrollBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMovieSceneParticleParameterTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UMaterialExpressionAdd {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UParticleModuleRotationRate {
	FRawDistributionFloat StartRotationRate; // 0x30
};

struct UTigerChallengeHitBullets {
	FTigerChallengeRequirementWeaponType RequiredWeaponConstraint; // 0xb0
};

struct UMRMeshComponent {
	UMaterialInterface* Material; // 0x460
	UMaterialInterface* WireframeMaterial; // 0x468
	bool bCreateMeshProxySections; // 0x470
	bool bUpdateNavMeshOnMeshUpdate; // 0x471
	bool bNeverCreateCollisionMesh; // 0x472
	UBodySetup* CachedBodySetup; // 0x478
	TArray<UBodySetup*> BodySetups; // 0x480
};

struct USourceEffectFoldbackDistortionPreset {
	FSourceEffectFoldbackDistortionSettings Settings; // 0x9c
};

struct UTigerBlindingBeautyConfig {
	UAnimMontage* Montage; // 0x160
	ATigerBlindingBeautyEffectActor* BlueprintActor; // 0x168
	float BlueprintActorLifetime; // 0x170
	UTigerBuff* BlindingDebuff; // 0x178
	UTigerBuff* CharmDebuffPlayer; // 0x180
	UTigerBuff* CharmDebuffNpc; // 0x188
	TArray<float> BlindDuration; // 0x190
	float CharmPlayerDuration; // 0x1a0
	float CharmNpcDuration; // 0x1a4
	float TriggerTime; // 0x1a8
	float ActiveTimeAfterTrigger; // 0x1ac
	float GuaranteedBlindRange; // 0x1b0
	float LookBlindRange; // 0x1b4
	float LookDotProductHitThreshold; // 0x1b8
	TArray<float> BlindDamage; // 0x1c0
	bool bShouldDamageCivilians; // 0x1d0
	bool bUseCameraAsLookDirection; // 0x1d1
};

struct USkeletalMeshSimulationComponent {
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

struct UInterpTrackAkAudioRTPC {
	FString Param; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueRTPCOnMatineeEnd : 1; // 0xa0
};

struct UTBP_UI_ArchetypeInfo_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UWidgetAnimation* ChangedClan; // 0x288
	UImage* FadeOutOverlay; // 0x290
	UWidgetSwitcher* LoadingSwitcher; // 0x298
	UTBP_ArchetypeSelect_PowersWithVideoPreviews_C* PowersWithVideoPreviews; // 0x2a0
	UMediaPlayer* Media Player; // 0x2a8
	UTigerPlayerClanData* ClanData; // 0x2b0
	UTigerPowerKit* ArchetypeData; // 0x2b8
	FMulticastInlineDelegate OnVideoStarted; // 0x2c0
	FMulticastInlineDelegate OnVideoEnded; // 0x2d0
};

struct UTBP_ContextualHelp_RangedWeapon_SwitchWeaponInputReminder_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct AController {
	APlayerState* PlayerState; // 0x230
	FMulticastInlineDelegate OnInstigatedAnyDamage; // 0x240
	FName StateName; // 0x250
	APawn* Pawn; // 0x258
	ACharacter* Character; // 0x268
	USceneComponent* TransformComponent; // 0x270
	FRotator ControlRotation; // 0x290
	char bAttachToPawn : 1; // 0x29c
};

struct UTigerCustomBlendSpace1DListClanAndGender {
	FTigerPlayerBlendSpace1DByClan BlendSpacesByClan[0x2]; // 0x28
};

struct UGizmoComponentWorldTransformSource {
	USceneComponent* Component; // 0x48
	bool bModifyComponentOnTransform; // 0x50
};

struct UTigerAnimNotifyState_CameraPresetOverride {
	UTigerCameraPreset* CameraPreset; // 0x30
};

struct UTigerAICommandComponent {
	ATigerAiPermanentCap* PermanentCap; // 0xf0
	ATigerNPC* Owner; // 0xf8
	UTigerAICommandBase* ActiveCommand; // 0x100
	UAnimMontage* LastPlayedCapMontage; // 0x108
	FTigerCommandQueue CommandQueue; // 0x110
	FName ContextBaseIdle; // 0x120
};

struct UMaterialExpressionCosine {
	FExpressionInput Input; // 0x40
	float Period; // 0x54
};

struct UNiagaraComponentSettings {
	TSet<FName> SuppressActivationList; // 0x28
	TSet<FName> ForceAutoPooolingList; // 0x78
	TSet<FNiagaraEmitterNameSettingsRef> SuppressEmitterList; // 0xc8
};

struct UBTDecorator_Blackboard {
	int32_t IntValue; // 0x90
	float FloatValue; // 0x94
	FString StringValue; // 0x98
	FString CachedDescription; // 0xa8
	char OperationType; // 0xb8
	EBTBlackboardRestart NotifyObserver; // 0xb9
};

struct UTigerHealingConsumableAsset {
	float HealAmount; // 0x170
};

struct UTigerEmoteControllerComponent {
	char SelectableEmoteCount; // 0xb0
	ATigerPlayerController* PlayerController; // 0xb8
};

struct UMovieSceneEntitySystemLinker {
	FMovieSceneEntitySystemGraph SystemGraph; // 0x238
};

struct UTigerSpawnMechanicBattleRoyaleMapSelection {
	TArray<FTigerDesiredSpawnLocation> DesiredSpawnLocations; // 0x50
};

struct ATigerSplatmap {
	UMaterialParameterCollection* SplatmapParameterCollection; // 0x228
	UTextureRenderTarget2D* SplatTextureRenderTarget; // 0x230
	UMaterial* SplatmapCellReadMaterial; // 0x238
	UMaterialInstanceDynamic* SplatmapCellReadMaterialInstance; // 0x240
	float BoundsSize; // 0x248
	UTigerSplatmapGenerationSettings* CurrentGenerationSettings; // 0x250
	TArray<TWeakObjectPtr<ATigerSplatmapCell>> SplatmapCells; // 0x258
	USceneComponent* Root; // 0x268
	AActor* CellOwner; // 0x270
	float TickInterval; // 0x278
	float MinRerenderDistance; // 0x27c
};

struct ATigerJudge {
	UTigerJudgeShieldComponent* JudgeShieldComponent; // 0x988
	UTigerJudgeSwordComponent* JudgeSwordComponent; // 0x990
	UTigerExperienceEvent* FeedEvent; // 0x998
	UTigerWorldMarkerComponent* WorldMarkerComponent; // 0x9a0
	UTigerJudgeBaseState* CurrentJudgeState; // 0x9a8
	ATigerPlayer* FeedingPlayer; // 0x9b8
	ATigerEntityJudgeHelicopter* HelicopterClass; // 0x9c0
	TWeakObjectPtr<ATigerEntityJudgeHelicopter> Helicopter; // 0x9c8
	FTigerJudgeRotationSettings CurrentRotationSettings; // 0x9d0
	ATigerPlayer* CurrentPrimaryTarget; // 0x9d8
	float DamageCauserCutoffDistanceSq; // 0x9e0
	FTigerTimedAnimationTriggerWrapper AnimationTriggerWrapper; // 0x9e8
	TArray<FTigerJudgePlayerDamage> PlayerDamageCollection; // 0xa00
};

struct UTigerAiCheckIsTargetDowned {
	bool bConditionInvertedOnTick; // 0x68
};

struct UTigerHolyIncenseWaveComponent {
	FMulticastInlineDelegate OnWaveStartMovement; // 0xb0
	FMulticastInlineDelegate OnWaveStopped; // 0xc0
	FMulticastInlineDelegate OnWaveRevealed; // 0xd0
	int32_t FallbackSeed; // 0xe0
	int32_t FallbackHavenSeed; // 0xe4
	bool bTestFallbackSeed; // 0xe8
	TArray<UDataTable*> WaveDataTables; // 0xf0
	UCurveFloat* WaveProgressSmoothingCurve; // 0x100
	int32_t NumAvoidancePoints; // 0x108
	bool bRetraceInnerAndOuterMapPaths; // 0x10c
	float MapGradientThickness; // 0x110
	float TickCollisionAndMapTextureInterval; // 0x114
	float CircumferenceKmForMinimumCollisionVertices; // 0x118
	float CircumferenceKmForMaximumCollisionVertices; // 0x11c
	int32_t MinimumCollisionVertices; // 0x120
	int32_t MaximumCollisionVertices; // 0x124
	bool bUseInteriorTriangulation; // 0x128
	bool bUseFallbackTriangulation; // 0x129
	UMaterialParameterCollection* RedGasParameterCollection; // 0x130
	int32_t MinimumSimulatedVertices; // 0x138
	int32_t MaximumSimulatedVertices; // 0x13c
	bool bRedistributeVertices; // 0x140
	bool bOutputWaveGeneration; // 0x141
	int32_t RepeatWaveGeneration; // 0x144
	TArray<FTigerWaveData> Waves; // 0x148
	FTigerHolyIncenseSettings Settings; // 0x158
	TArray<FTigerRevealedWave> RevealedWaves; // 0x160
	UMaterialInstanceDynamic* MaterialInstance; // 0x170
	ATigerHolyIncense* HolyIncense; // 0x178
	float AssaultStartTime; // 0x184
	float DefaultOverlapToleranceCm; // 0x1d0
	float OverlapToleranceFailureIncrementCm; // 0x1d4
	int32_t OverlapToleranceFailuresBeforeIncrement; // 0x1d8
	int32_t OverlapTestingPerformanceVertexCount; // 0x1dc
	float OverlapInterpStepDistanceCm; // 0x1e0
	float OverlapMaximumInterpSteps; // 0x1e4
};

struct UTBP_UI_TextButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* PressedAnimation; // 0x268
	UButton* Button; // 0x270
	UTigerStyledRichTextBlock* CustomText; // 0x278
	FMulticastInlineDelegate OnClicked; // 0x280
	FMulticastInlineDelegate OnHovered; // 0x290
	FMulticastInlineDelegate OnUnhovered; // 0x2a0
	FText Text; // 0x2b0
	FDataTableRowHandle TextNeutralStyle; // 0x2c8
	FDataTableRowHandle TextHoveredStyle; // 0x2d8
	bool IsPressed; // 0x2e8
	float TextNeutralOpacity; // 0x2ec
	float TextHoveredOpacity; // 0x2f0
	bool bIsHovered; // 0x2f4
};

struct UBlackboardKeyType_Object {
	UObject* BaseClass; // 0x30
};

struct UTigerActionBuffer {
	float BufferTimes[0x11]; // 0x28
	char MaxNumberOfBufferedActions; // 0x6c
	TArray<UTigerBufferedAction*> BufferedActions; // 0x70
	TArray<UTigerBufferedAction*> QueuedActions; // 0x80
	TWeakObjectPtr<ATigerPlayerController> Owner; // 0x90
};

struct UNiagaraDataInterfaceArrayFloat2 {
	TArray<FVector2D> FloatData; // 0x50
};

struct UTigerArtifactPickedupPrompt {
	UTigerArtifactAsset* ArtifactAsset; // 0x2a8
};

struct UUniformScalar {
	float Magnitude; // 0xb0
};

struct ATigerGrimoireCard {
	UStaticMeshComponent* Mesh; // 0x228
	UTexture* FrontTexture; // 0x230
	UTexture* BackfaceTextureDMNR; // 0x238
	bool bIsFloating; // 0x240
};

struct UGeometryCollectionComponent {
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

struct UTigerAnimNotify_CameraShake {
	UMatineeCameraShake* ShakeType; // 0x38
	float ShakeScale; // 0x40
};

struct UDatasmithMaterialInstanceTemplate {
	TSoftObjectPtr<UMaterialInterface> ParentMaterial; // 0x30
	TMap<FName, float> ScalarParameterValues; // 0x58
	TMap<FName, FLinearColor> VectorParameterValues; // 0xa8
	TMap<FName, TSoftObjectPtr<UTexture>> TextureParameterValues; // 0xf8
	FDatasmithStaticParameterSetTemplate StaticParameters; // 0x148
};

struct ULightMapVirtualTexture2D {
	TArray<int8_t> TypeToLayer; // 0x110
};

struct UImgMediaSettings {
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

struct UTigerAiIsHeightElevationBlockingVision {
	FBlackboardKeySelector TargetLocationKey; // 0x68
	FBlackboardKeySelector bCanSeeTargetKey; // 0x90
	float MaxVerticalAngleToTarget; // 0xb8
	float LargeEnoughHeightDifference; // 0xbc
};

struct UMovieSceneParameterSection {
	TArray<FBoolParameterNameAndCurve> BoolParameterNamesAndCurves; // 0xe8
	TArray<FScalarParameterNameAndCurve> ScalarParameterNamesAndCurves; // 0xf8
	TArray<FVector2DParameterNameAndCurves> Vector2DParameterNamesAndCurves; // 0x108
	TArray<FVectorParameterNameAndCurves> VectorParameterNamesAndCurves; // 0x118
	TArray<FColorParameterNameAndCurves> ColorParameterNamesAndCurves; // 0x128
	TArray<FTransformParameterNameAndCurves> TransformParameterNamesAndCurves; // 0x138
};

struct UTigerMontageList {
	TArray<UAnimMontage*> MontageList; // 0x28
};

struct UTigerIncitePainConfig {
	float DamageAmount; // 0x170
	float Radius; // 0x174
	float Reach; // 0x178
	bool bDebugDraw; // 0x17c
};

struct UTigerPlayerDataService {
	UTigerRequestUtility* TigerRequestUtility; // 0x50
};

struct UStereoLayerShapeCylinder {
	float Radius; // 0x28
	float OverlayArc; // 0x2c
	int32_t Height; // 0x30
};

struct AEmitterCameraLensEffectBase {
	UParticleSystem* PS_CameraEffect; // 0x278
	UParticleSystem* PS_CameraEffectNonExtremeContent; // 0x280
	APlayerCameraManager* BaseCamera; // 0x288
	FTransform RelativeTransform; // 0x290
	float BaseFOV; // 0x2c0
	char bAllowMultipleInstances : 1; // 0x2c4
	char bResetWhenRetriggered : 1; // 0x2c4
	TArray<AEmitterCameraLensEffectBase*> EmittersToTreatAsSame; // 0x2c8
	float DistFromCamera; // 0x2d8
};

struct UEditableGeometryCollectionAdapter {
	UGeometryCollection* GeometryCollection; // 0x28
	UGeometryCollection* OriginalGeometryCollection; // 0x30
	int32_t GeometryCollectionLODIndex; // 0x38
};

struct UDistributionVectorParameterBase {
	FName ParameterName; // 0x50
	FVector MinInput; // 0x58
	FVector MaxInput; // 0x64
	FVector MinOutput; // 0x70
	FVector MaxOutput; // 0x7c
	DistributionParamMode ParamModes[0x3]; // 0x88
};

struct UCableComponent {
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

struct UTBP_ContextualHelp_Consumable_LowHPReminder_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
	float LowHealthTriggerLimit; // 0xf8
};

struct UABP_VMP_NOS_M_HAIR_02_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2f8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x318
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x340
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0xbc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x1cc0
};

struct UTBP_ContextualHelp_Tutorial_SlideJump_Gamepad_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UMaterialExpressionRuntimeVirtualTextureSampleParameter {
	FName ParameterName; // 0x90
	FGuid ExpressionGUID; // 0x98
	FName Group; // 0xa8
};

struct UTigerCharacterPoseableMesh {
	USkeletalMesh* Mesh; // 0x28
	UTigerCharacterPoseableMeshAnimInstance* AnimClass; // 0x30
};

struct UTigerCrosshairWidget {
	ETargetInteraction PreviousInteraction; // 0x280
	UObject* PreviousInteractionObject; // 0x288
	TWeakObjectPtr<ATigerCharacter> PreviousInteractionCharacter; // 0x290
	UTigerInventoryComponent* Inventory; // 0x298
	UMaterialInstanceDynamic* ProgressBarMaterial; // 0x2a0
	UCanvasPanel* RootPanel; // 0x2a8
	ATigerPlayer* TigerPlayer; // 0x2b0
	UTigerWeaponCrosshairWidget* CurrentWeaponCrosshair; // 0x2b8
	TArray<UTigerWeaponCrosshairWidget*> PreviousWeaponCrosshairs; // 0x2c0
	float ProgressValue; // 0x2d0
	ETigerUIColor CurrentProgressBarColor; // 0x2d4
};

struct USlateSettings {
	bool bExplicitCanvasChildZOrder; // 0x28
};

struct USynth2DSlider {
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

struct UBehaviorTree {
	UBTCompositeNode* RootNode; // 0x30
	UBlackboardData* BlackboardAsset; // 0x38
	TArray<UBTDecorator*> RootDecorators; // 0x40
	TArray<FBTDecoratorLogic> RootDecoratorOps; // 0x50
};

struct UTigerSpawnMechanicRandomPlayerStart {
	ATigerGameMode* GameMode; // 0x28
	TArray<AActor*> AllPlayerStarts; // 0x30
	TArray<AActor*> UnusedPlayerStarts; // 0x40
};

struct UTigerAICommandAbandonCAP {
	float ChanceToAbandonCAP; // 0x40
	bool bShouldFindSpline; // 0x44
};

struct UTBP_UI_PromotionalPopup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x300
	UWidgetAnimation* FadeOut; // 0x308
	UTBP_UI_MenuButton_C* CloseButton; // 0x310
	UImage* CloseImage; // 0x318
	UButton* CornerCloseButton; // 0x320
	UTigerStyledRichTextBlock* DescriptionWidget; // 0x328
	UTBP_UI_MenuButton_C* GoToStoreButton; // 0x330
	UTigerStyledRichTextBlock* HeaderWidget; // 0x338
	UImage* Image_104; // 0x340
	UImage* PromoImageWidget; // 0x348
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x350
	UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x358
	UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x360
	FString EF_TextFormatting; // 0x368
	FString Bold_TextFormating; // 0x378
	FString UL_TextFormatting; // 0x388
	FString Subtitle_TextFormatting; // 0x398
	FString Subheader_TextFormatting; // 0x3a8
	FText BR_TextFormatting; // 0x3b8
};

struct UMaterialExpressionSphereMask {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Radius; // 0x68
	FExpressionInput Hardness; // 0x7c
	float AttenuationRadius; // 0x90
	float HardnessPercent; // 0x94
};

struct UPropertyValue {
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

struct UMaterialExpressionSmoothStep {
	FExpressionInput Min; // 0x40
	FExpressionInput Max; // 0x54
	FExpressionInput Value; // 0x68
	float ConstMin; // 0x7c
	float ConstMax; // 0x80
	float ConstValue; // 0x84
};

struct UNiagaraDataInterfaceArray {
	int32_t MaxElements; // 0x40
};

struct UARTrackableNotifyComponent {
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

struct UTigerDisciplineLaceratingThrow {
	UTigerLaceratingThrowConfig* Config; // 0xf0
};

struct UMovieSceneCameraShakeSourceTriggerTrack {
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UUniformVector {
	float Magnitude; // 0xb0
	FVector Direction; // 0xb4
};

struct UMaterialExpressionShaderStageSwitch {
	FExpressionInput PixelShader; // 0x40
	FExpressionInput VertexShader; // 0x54
};

struct UMovieSceneSequenceTickManager {
	TArray<AActor*> SequenceActors; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x38
};

struct UProceduralFoliageTile {
	UProceduralFoliageSpawner* FoliageSpawner; // 0x28
	TArray<FProceduralFoliageInstance> InstancesArray; // 0xd0
};

struct UTBP_UI_Scrollbox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UNamedSlot* ScrollBoxSlot; // 0x268
	bool bEnabled; // 0x270
	UScrollBox* ScrollBoxRef; // 0x278
	FMulticastInlineDelegate UserScrolledWithAnalogStick; // 0x280
	float ScrollOverTimeModifier; // 0x290
};

struct UMaterialExpressionParameter {
	FName ParameterName; // 0x40
	FGuid ExpressionGUID; // 0x48
};

struct UTigerAiBarkTask {
	FTigerNpcVoCategory BarkToPlay; // 0x70
};

struct UBTTask_WaitBlackboardTime {
	FBlackboardKeySelector BlackboardKey; // 0x78
};

struct ATigerMusicManager {
	UAudioComponent* AudioComponent; // 0x228
};

struct UBTDecorator_IsAtLocation {
	float AcceptableRadius; // 0x90
	FAIDataProviderFloatValue ParametrizedAcceptableRadius; // 0x98
	FAIDistanceType GeometricDistanceType; // 0xd0
	char bUseParametrizedRadius : 1; // 0xd4
	char bUseNavAgentGoalLocation : 1; // 0xd4
	char bPathFindingBasedTest : 1; // 0xd4
};

struct UTigerHitVerificationSettings {
	bool bEnableVerification; // 0x38
	float MaxEndPointDistance; // 0x3c
	float MaxStartingPointDistance; // 0x40
	float SkipSimulatePathDistanceSquared; // 0x44
	float MaxAngleDeviationFromPredictedPath; // 0x48
	float MaxDistanceFromProjectilePath; // 0x4c
	int32_t MinPathCountForLOSSubdivideCheck; // 0x50
	int32_t MinPathCountForComplexLOSCheck; // 0x54
	int32_t MaxComplexLOSChecks; // 0x58
};

struct UTcpMessagingSettings {
	bool EnableTransport; // 0x28
	FString ListenEndpoint; // 0x30
	TArray<FString> ConnectToEndpoints; // 0x40
	int32_t ConnectionRetryDelay; // 0x50
	bool bStopServiceWhenAppDeactivates; // 0x54
};

struct UMovieSceneByteTrack {
	UEnum* Enum; // 0xb0
};

struct UTBP_UI_Crosshair_SingleShort_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UParticleModuleAccelerationOverLifetime {
	FRawDistributionVector AccelOverLife; // 0x38
};

struct UTigerMapUi {
	FName GasOverlayWorldTimeSeconds; // 0x280
	FName GasOverlayWaveRevealTime; // 0x288
};

struct UTigerAIPetStoreValidMasterPos {
	FBlackboardKeySelector MasterPlayer; // 0x70
};

struct UPawnAction_Sequence {
	TArray<UPawnAction*> ActionSequence; // 0x98
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
	UPawnAction* RecentActionCopy; // 0xb0
};

struct UTigerNpcPropComponent {
	USkeletalMeshComponent* OwnerMeshComp; // 0xb0
	TArray<FTigerPropAttachment> AttachedProps; // 0xb8
	TArray<TScriptInterface<ITigerPropCompInterface>> FreeProps; // 0xc8
};

struct UMaterialExpressionConstant2Vector {
	float R; // 0x40
	float G; // 0x44
};

struct UTigerPingControllerComponent {
	FMulticastInlineDelegate OnPingUsedInTutorial; // 0xb0
	float MaxTraceLength; // 0xc0
	float WheelHoldTime; // 0xc4
	float DoublePressTimeout; // 0xc8
	float PingHeightOffset; // 0xcc
	float PingSpamPreventionTime; // 0xd0
	ATigerPlayerController* OwningController; // 0xd8
	UTigerPingCoordinator* PingCoordinator; // 0xe0
	UTigerInWorldIconController* WorldIconController; // 0xe8
	TArray<FTigerPingWrapper> ActivePings; // 0xf0
	TArray<FTigerPingWrapper> ReusablePings; // 0x100
	TArray<UTigerPingClientData*> UnresolvedActors; // 0x110
	UTigerPingSetupAsset* PingSetup; // 0x120
	TSoftObjectPtr<UTigerPingSetupAsset> SoftPingSetupPtr; // 0x128
	bool bEnablePingsInTutorial; // 0x239
	float HitItemSphereRadius; // 0x23c
	float VehicleHitForwardDot; // 0x240
};

struct UTigerPerformanceIndicatorSettings {
	bool bEnablePerformanceIndicators; // 0x38
	float WarmupTimer; // 0x3c
	float CooldownTimer; // 0x40
	float WarningFPS; // 0x44
	float SevereFPS; // 0x48
	float WarningServerFPS; // 0x4c
	float SevereServerFPS; // 0x50
	float WarningLatency; // 0x54
	float SevereLatency; // 0x58
	float WarningLatencyVariation; // 0x5c
	float SevereLatencyVariation; // 0x60
	float WarningPacketLoss; // 0x64
	float SeverePacketLoss; // 0x68
};

struct UProceduralFoliageSpawner {
	int32_t RandomSeed; // 0x28
	float TileSize; // 0x2c
	int32_t NumUniqueTiles; // 0x30
	float MinimumQuadTreeSize; // 0x34
	TArray<FFoliageTypeObject> FoliageTypes; // 0x40
};

struct UNiagaraLightRendererProperties {
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

struct UTigerAiBenchmarkDisciplineTask {
	ATigerLocalAIControllerBase* AIControllerBase; // 0x98
	ATigerPlayerController* TigerPlayerController; // 0xa0
	ATigerCharacter* AiTigerCharacter; // 0xa8
	ATigerPlayer* TigerPlayer; // 0xb0
	UTigerDisciplineComponent* DisciplineComponent; // 0xb8
	UTigerDisciplineBase* CurrentDisciplineBase; // 0xc0
};

struct UTigerDialogueCondition_DialogueRead {
	FString ListId; // 0x30
	FString DialogueId; // 0x40
};

struct ADecalActor {
	UDecalComponent* Decal; // 0x228
};

struct UParticleModuleBeamTarget {
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

struct UTimeSynchronizableMediaSource {
	bool bUseTimeSynchronization; // 0x88
	int32_t FrameDelay; // 0x8c
	double TimeDelay; // 0x90
};

struct UMovieSceneParticleSection {
	FMovieSceneParticleChannel ParticleKeys; // 0xe8
};

struct UParticleModuleEventReceiverSpawn {
	FRawDistributionFloat SpawnCount; // 0x40
	char bUseParticleTime : 1; // 0x70
	char bUsePSysLocation : 1; // 0x70
	char bInheritVelocity : 1; // 0x70
	FRawDistributionVector InheritVelocityScale; // 0x78
	TArray<UPhysicalMaterial*> PhysicalMaterials; // 0xc0
	char bBanPhysicalMaterials : 1; // 0xd0
};

struct ATigerAiBaseController {
	FVector SpawnPoint; // 0x330
	UTigerSightConfigAsset* SightConfigAsset; // 0x340
};

struct UNiagaraSystem {
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

struct UTigerAIBenchmarkFindPlayerTask {
	bool bUseHeightenedSensesSearchRadius; // 0x98
	float CustomSearchSphereRadius; // 0x9c
	bool bDrawSearchSphere; // 0xa0
	float MaxVerticalPositionOffset; // 0xa4
	float RaycastDistance; // 0xa8
	int32_t SearchLowLevelThreshold; // 0xac
	float SearchLowHealthPercentageThreshold; // 0xb0
};

struct UTigerAnimNotifyState_WallGrindFX {
	TArray<FName> SocketsToUse; // 0x30
};

struct UTigerBloodTrackPassiveConfig {
	ETigerBloodTrackPassiveCategory Category; // 0x118
	bool bCanBeMoved; // 0x119
};

struct UTigerLocalThrallData {
	UTigerBaseThrallData* BaseData; // 0x28
	FTigerPersistentThrallData PersistentData; // 0x30
};

struct UTigerRewardsPopup {
	int32_t ZValue; // 0x2a0
};

struct UInterpTrackVisibility {
	TArray<FVisibilityTrackKey> VisibilityTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UTigerSplatmapPaintingSettings {
	TWeakObjectPtr<UTexture2D> Stamp; // 0x28
	TArray<bool> Channels; // 0x30
	float Opacity; // 0x40
	float StampWorldSize; // 0x44
};

struct AAkSpatialAudioVolume {
	UAkSurfaceReflectorSetComponent* SurfaceReflectorSet; // 0x260
	UAkLateReverbComponent* LateReverb; // 0x268
	UAkRoomComponent* Room; // 0x270
	bool EnableSurfaceReflectorSets; // 0x278
};

struct UPostEventAtLocationAsync {
	FMulticastInlineDelegate Completed; // 0x30
};

struct UAppleImageUtilsBaseAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
	FAppleImageUtilsImageConversionResult ConversionResult; // 0x60
};

struct UAIPerceptionComponent {
	TArray<UAISenseConfig*> SensesConfig; // 0xb0
	UAISense* DominantSense; // 0xc0
	AAIController* AIOwner; // 0xd8
	FMulticastInlineDelegate OnPerceptionUpdated; // 0x160
	FMulticastInlineDelegate OnTargetPerceptionUpdated; // 0x170
	FMulticastInlineDelegate OnTargetPerceptionInfoUpdated; // 0x180
};

struct UTigerAiPlayerUseWeaponPower {
	ATigerLocalAIControllerBase* LocalAIController; // 0x80
	ATigerPlayerController* PlayerController; // 0x88
	UTigerDisciplineBase* WeaponAbility; // 0x90
};

struct USourceEffectFilterPreset {
	FSourceEffectFilterSettings Settings; // 0xb0
};

struct UAISense_Blueprint {
	UUserDefinedStruct* ListenerDataType; // 0x80
	TArray<UAIPerceptionComponent*> ListenerContainer; // 0x88
	TArray<UAISenseEvent*> UnprocessedEvents; // 0x98
};

struct UTigerAiPlayerDiablerizeTask {
	float MaximumDiablerizeDistance; // 0x98
};

struct UMaterialExpressionTextureSampleParameter {
	FName ParameterName; // 0x60
	FGuid ExpressionGUID; // 0x68
	FName Group; // 0x78
};

struct UTigerBuffShieldBase {
	float MaxShield; // 0x248
	float InitialShield; // 0x24c
};

struct UConsole {
	ULocalPlayer* ConsoleTargetPlayer; // 0x38
	UTexture2D* DefaultTexture_Black; // 0x40
	UTexture2D* DefaultTexture_White; // 0x48
	TArray<FString> HistoryBuffer; // 0x68
};

struct UTigerDisciplinePassion {
	UTigerPassionConfig* Config; // 0x78
};

struct UAnimNotify_PlayMontageNotifyWindow {
	FName NotifyName; // 0x30
};

struct UGridPanel {
	TArray<float> ColumnFill; // 0x120
	TArray<float> RowFill; // 0x130
};

struct UTigerThrallSystemSettings {
	TSoftObjectPtr<UDataTable> AbilitiesTable; // 0x38
	TSoftObjectPtr<UDataTable> BaseThrallsTable; // 0x60
	TSoftObjectPtr<UDataTable> StatModifiersTable; // 0x88
	TSoftObjectPtr<UDataTable> ThrallMissionsTable; // 0xb0
};

struct UMovieSceneMaterialParameterCollectionTrack {
	UMaterialParameterCollection* MPC; // 0x90
};

struct UTBP_UI_PingLocation_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d8
	UWidgetAnimation* Outline_Pulse_Anim; // 0x2e0
	UWidgetAnimation* OnLocPingAnim; // 0x2e8
	UImage* BG_Dot_Border; // 0x2f0
	UImage* BG_Dot_Dark; // 0x2f8
	UImage* DiamondBG; // 0x300
	UImage* DiamondBG_Animated; // 0x308
	UImage* DiamondBG_Animated_Pulse; // 0x310
};

struct UMaterialExpressionArccosineFast {
	FExpressionInput Input; // 0x40
};

struct UAIDataProvider_Random {
	float Min; // 0x40
	float Max; // 0x44
	char bInteger : 1; // 0x48
};

struct UTBP_HairColorCustomization_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x148
};

struct UImageSequenceProtocol_EXR {
	bool bCompressed; // 0xd8
	EHDRCaptureGamut CaptureGamut; // 0xd9
};

struct ATigerLootBoxSpawner {
	ATigerLootBox* LootBoxClass; // 0x268
	int32_t MinimumNumberOfItems; // 0x270
	int32_t MaximumNumberOfItems; // 0x274
	ETigerTelemetryItemSourceID TelemetryIDSource; // 0x27c
};

struct UParticleModuleColor {
	FRawDistributionVector StartColor; // 0x30
	FRawDistributionFloat StartAlpha; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UTigerThrallMapUI {
	FName SubLevelName; // 0x3b0
	FName SubLevelCamName; // 0x3b8
};

struct UPaperTerrainMaterial {
	TArray<FPaperTerrainMaterialRule> Rules; // 0x30
	UPaperSprite* InteriorFill; // 0x40
};

struct UTigerDisciplinesUi {
	UTigerDisciplineComponent* DisciplineComponent; // 0x280
	UTigerFeedingComponent* FeedingComponent; // 0x288
	UTigerDisciplineBase* DisciplineForSlot[0x3]; // 0x290
	ETigerDisciplinesEnum DisciplineTypeForSlot[0x3]; // 0x2a8
};

struct USkeleton {
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

struct UNiagaraDataInterfacePlatformSet {
	FNiagaraPlatformSet Platforms; // 0x38
};

struct USubmixEffectStereoDelayPreset {
	FSubmixEffectStereoDelaySettings Settings; // 0xb4
};

struct UTigerPowerKit {
	ETigerPowerKitType ArchetypeType; // 0x30
	FText DISPLAYNAME; // 0x38
	FText ArchetypeKeywordsText; // 0x50
	FText FormattedDescription; // 0x68
	FColor ArchetypeColor; // 0x80
	TSoftObjectPtr<UTexture2D> ArchetypeSelectTexture; // 0x88
	TSoftObjectPtr<UMaterial> ArchetypeHighlightMaterial; // 0xb0
	TSoftObjectPtr<UTexture2D> ArchetypeBackgroundTexture; // 0xd8
	TSoftObjectPtr<UTexture2D> ArchetypeIcon; // 0x100
	UMediaSource* ArchetypeSelectCinematic; // 0x128
	UTigerBloodTrackPreset* DefaultBloodTrack; // 0x130
	TArray<UTigerBloodTrackPassiveConfig*> BloodTrackPassives; // 0x138
	TArray<UTigerPassiveConfig*> Passives; // 0x148
	FTigerCharacterStatModification Stats; // 0x158
	ETigerDisciplinesEnum LeftDiscipline; // 0x1e8
	ETigerDisciplinesEnum RightDiscipline; // 0x1e9
	TSoftObjectPtr<UTigerCharacterPreset> DefaultCharacterPreset; // 0x1f0
	TSoftObjectPtr<UTigerCharacterPreset> FirstTimeCharacterPreset; // 0x218
	TSoftObjectPtr<UTigerCharacterPreset> BotOutfitPresets[0x2]; // 0x240
};

struct UAISense {
	float DefaultExpirationAge; // 0x28
	EAISenseNotifyType NotifyType; // 0x2c
	char bWantsNewPawnNotification : 1; // 0x30
	char bAutoRegisterAllPawnsAsSources : 1; // 0x30
	UAIPerceptionSystem* PerceptionSystemInstance; // 0x38
};

struct UCapsuleComponent {
	float CapsuleHalfHeight; // 0x468
	float CapsuleRadius; // 0x46c
};

struct UTigerAIPlayerFindClosestItemTask {
	float MaxVerticalPositionOffset; // 0x98
	float RaycastDistance; // 0x9c
	float SearchSphereRadius; // 0xa0
};

struct UTigerBuffInAirMomentumLoss {
	float MinimumHorizontalSpeed; // 0x248
	float TimeToDecelerate; // 0x24c
};

struct UTigerChallengeDrainNpc {
	bool bSpecificNPCType; // 0xb0
	ETigerNPCType TargetNPCType; // 0xb1
	ETigerBloodPotency MinimumPotency; // 0xb2
};

struct UTBP_UI_LoginScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UWidgetAnimation* FadeOut; // 0x298
	UWidgetAnimation* FadeIn; // 0x2a0
	UImage* BlackFade; // 0x2a8
	UTextBlock* ErrorMessage; // 0x2b0
	UTBP_UI_LicenseAgreement_Popup_C* ExportGateDeniedPopup; // 0x2b8
	UTBP_UI_LicenseAgreement_Popup_C* ExportGatePopup; // 0x2c0
	UTBP_UI_GetDevTicketSection_C* GetDevTicketSection; // 0x2c8
	UTBP_UI_LoginQueueSection_C* LoginQueueSection; // 0x2d0
	UTBP_UI_LoginSection_C* LoginSection; // 0x2d8
	UTBP_UI_RegistrationSection_C* RegistrationSection; // 0x2e0
	UWidgetSwitcher* SectionSwitcher; // 0x2e8
	UWidgetSwitcher* StatusSwitcher; // 0x2f0
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2f8
	UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x300
	UImage* Vein1; // 0x308
	UImage* Vein2; // 0x310
	UImage* Vein3; // 0x318
	UTBP_UI_VerificationSection_C* VerificationSection; // 0x320
	USizeBox* WorkThrobber; // 0x328
	FMulticastInlineDelegate LoginSucceeded; // 0x330
	FMulticastInlineDelegate OnValidVersionDispatch; // 0x340
	FMulticastInlineDelegate OnInvalidVersionDispatch; // 0x350
	FTigerLoginQueueToken LoginQueueToken; // 0x360
	FText AccountLicenseAgreementTitle; // 0x370
	FText AccountLicenseAgreementText; // 0x388
	bool EnableLicenseAgreement; // 0x3a0
	TMap<int32_t, int32_t> ThirdPartyErrorsBoxMapping; // 0x3a8
	TMap<int32_t, FText> ThirdPartyErrorCodes; // 0x3f8
	int32_t ErrorBoxIndex; // 0x448
	FText AccountExportGateTitle; // 0x450
	FText AccountExportGateText; // 0x468
	FString Subheader_TextFormatting; // 0x480
	FString Subtitle_TextFormatting; // 0x490
	FString UL_TextFormatting; // 0x4a0
	FString Bold_TextFormating; // 0x4b0
	FString EL_TextFormatting; // 0x4c0
};

struct AWorldSettings {
	int32_t VisibilityCellSize; // 0x230
	EVisibilityAggressiveness VisibilityAggressiveness; // 0x234
	char bPrecomputeVisibility : 1; // 0x235
	char bPlaceCellsOnlyAlongCameraTracks : 1; // 0x235
	char bEnableWorldBoundsChecks : 1; // 0x235
	char bEnableNavigationSystem : 1; // 0x235
	char bEnableAISystem : 1; // 0x235
	char bEnableWorldComposition : 1; // 0x235
	char bUseClientSideLevelStreamingVolumes : 1; // 0x235
	char bEnableWorldOriginRebasing : 1; // 0x235
	char bWorldGravitySet : 1; // 0x236
	char bGlobalGravitySet : 1; // 0x236
	char bMinimizeBSPSections : 1; // 0x236
	char bForceNoPrecomputedLighting : 1; // 0x236
	char bHighPriorityLoading : 1; // 0x236
	char bHighPriorityLoadingLocal : 1; // 0x236
	char bOverrideDefaultBroadphaseSettings : 1; // 0x236
	UNavigationSystemConfig* NavigationSystemConfig; // 0x238
	UNavigationSystemConfig* NavigationSystemConfigOverride; // 0x240
	float WorldToMeters; // 0x248
	float KillZ; // 0x24c
	UDamageType* KillZDamageType; // 0x250
	float WorldGravityZ; // 0x258
	float GlobalGravityZ; // 0x25c
	ADefaultPhysicsVolume* DefaultPhysicsVolumeClass; // 0x260
	UPhysicsCollisionHandler* PhysicsCollisionHandlerClass; // 0x268
	AGameModeBase* DefaultGameMode; // 0x270
	AGameNetworkManager* GameNetworkManagerClass; // 0x278
	int32_t PackedLightAndShadowMapTextureSize; // 0x280
	FVector DefaultColorScale; // 0x284
	float DefaultMaxDistanceFieldOcclusionDistance; // 0x290
	float GlobalDistanceFieldViewDistance; // 0x294
	float DynamicIndirectShadowsSelfShadowingIntensity; // 0x298
	FReverbSettings DefaultReverbSettings; // 0x2a0
	FInteriorSettings DefaultAmbientZoneSettings; // 0x2c0
	float MonoCullingDistance; // 0x2e4
	USoundMix* DefaultBaseSoundMix; // 0x2e8
	float TimeDilation; // 0x2f0
	float MatineeTimeDilation; // 0x2f4
	float DemoPlayTimeDilation; // 0x2f8
	float MinGlobalTimeDilation; // 0x2fc
	float MaxGlobalTimeDilation; // 0x300
	float MinUndilatedFrameTime; // 0x304
	float MaxUndilatedFrameTime; // 0x308
	FBroadphaseSettings BroadphaseSettings; // 0x30c
	APlayerState* Pauser; // 0x350
	TArray<FNetViewer> ReplicationViewers; // 0x358
	TArray<UAssetUserData*> AssetUserData; // 0x368
	APlayerState* PauserPlayerState; // 0x378
	int32_t MaxNumberOfBookmarks; // 0x380
	UBookmarkBase* DefaultBookmarkClass; // 0x388
	TArray<UBookmarkBase*> BookmarkArray; // 0x390
	UBookmarkBase* LastBookmarkClass; // 0x3a0
};

struct UTigerChallengeHeadshots {
	FTigerChallengeRequirementWeaponType RequiredWeaponConstraint; // 0xb0
};

struct UTigerMasqueradeStatusWidget {
	char PlayerVisibilityToNPC; // 0x340
	bool bIsHunted; // 0x341
};

struct UDistributionFloatUniform {
	float Min; // 0x38
	float Max; // 0x3c
};

struct USpinBox {
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

struct USizeBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UTigerBuffBlindingBeauty {
	float BlockJumpDuration; // 0x248
	float TurnRateCap; // 0x24c
};

struct UAISenseConfig_Sight {
	UAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	float CloseSightRadius; // 0x5c
	float CloseLoseSightRadius; // 0x60
	float ClosePeripheralVisionAngleDegrees; // 0x64
	float HeightDifference; // 0x68
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x6c
	float AutoSuccessRangeFromLastSeenLocation; // 0x70
	float PointOfViewBackwardOffset; // 0x74
	float NearClippingRadius; // 0x78
};

struct UBTDecorator_CompareBBEntries {
	EBlackBoardEntryComparison Operator; // 0x68
	FBlackboardKeySelector BlackboardKeyA; // 0x70
	FBlackboardKeySelector BlackboardKeyB; // 0x98
};

struct UVectorFieldComponent {
	UVectorField* VectorField; // 0x450
	float Intensity; // 0x458
	float Tightness; // 0x45c
	char bPreviewVectorField : 1; // 0x460
};

struct UTBP_ContextualHelp_Ammo_Magazine_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UMaterialExpressionStaticComponentMaskParameter {
	char DefaultR : 1; // 0x58
	char DefaultG : 1; // 0x58
	char DefaultB : 1; // 0x58
	char DefaultA : 1; // 0x58
};

struct UAISenseConfig_Hearing {
	UAISense_Hearing* Implementation; // 0x48
	float HearingRange; // 0x50
	float LoSHearingRange; // 0x54
	char bUseLoSHearing : 1; // 0x58
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x5c
};

struct USplineMeshComponent {
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

struct UTigerBrujahBaneRecklessnessLogic {
	UTigerBrujahBaneRecklessness* Config; // 0xc0
	ATigerPlayer* Player; // 0xc8
};

struct UTigerAIGetSuspectTargetService {
	FBlackboardKeySelector SuspectPosition; // 0x70
	FBlackboardKeySelector CurrentSuspectTarget; // 0x98
	bool bShowDebugFeatures; // 0xc0
};

struct UStaticMeshComponent {
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
	char bAutomaticallyCreateRenderState : 1; // 0x494
	char bIgnoreInstanceForTextureStreaming : 1; // 0x495
	char bOverrideLightMapRes : 1; // 0x495
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

struct ATigerAiSpawningCap {
	USceneComponent* SceneComp; // 0x258
	UChildActorComponent* NPCSpawner; // 0x260
	FName SpawningGroup; // 0x268
	FName SpawnedNpcMovementGroup; // 0x270
	FGuid SpawningSubGroupId; // 0x278
};

struct UTigerFlowerOfDeathConfig {
	bool ShowDebugCapsule; // 0x160
	float TargetRadius; // 0x164
	float OverrideDuration; // 0x168
	float Damage; // 0x16c
	UObject* EffectBlueprint; // 0x170
	UAnimMontage* AttackerAnimation; // 0x178
	USoundBase* ActivationSound; // 0x180
	UTigerBuff* SpeedBuff; // 0x188
};

struct UNavAreaMeta_SwitchByAgent {
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

struct UShMidasAdapter {
	FMulticastInlineDelegate OnMidasPremiumCurrencyPacksChanged; // 0x28
	UShMidasPaymentSettings* Settings; // 0x90
};

struct UTBP_UI_MasqueradeMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UWidgetAnimation* ScaleUp; // 0x2c0
	UImage* RadiusImage; // 0x2c8
	UTigerMasqueradeMarkerProxy* MasqueradeMarkerProxy; // 0x2d0
};

struct ULogoutCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UAISenseEvent_Damage {
	FAIDamageEvent Event; // 0x28
};

struct UInputRouter {
	bool bAutoInvalidateOnHover; // 0x28
	bool bAutoInvalidateOnCapture; // 0x29
	UInputBehaviorSet* ActiveInputBehaviors; // 0x38
};

struct UAkItemProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct UARComponent {
	FGuid NativeID; // 0x1f8
	bool bUseDefaultReplication; // 0x238
	UMaterialInterface* DefaultMeshMaterial; // 0x240
	UMaterialInterface* DefaultWireframeMeshMaterial; // 0x248
	UMRMeshComponent* MRMeshComponent; // 0x250
	UARTrackedGeometry* MyTrackedGeometry; // 0x258
};

struct UNavigationInvokerComponent {
	float TileGenerationRadius; // 0xb0
	float TileRemovalRadius; // 0xb4
};

struct UTigerGasOverlay {
	FSlateBrush WaveTextureBrush; // 0x108
	FSlateBrush TargetTextureBrush; // 0x190
	FSlateBrush WavePolyTextureBrush; // 0x218
	FSlateBrush TargetPolyTextureBrush; // 0x2a0
	ATigerPlayerController* PlayerController; // 0x328
};

struct UInterpTrackEvent {
	TArray<FEventTrackKey> EventTrack; // 0x70
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
	char bUseCustomEventName : 1; // 0x80
};

struct ULevelActorContainer {
	TArray<AActor*> Actors; // 0x28
};

struct UTBP_ContextualHelp_Tutorial_ClanPower_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UClickDragInputBehavior {
	bool bUpdateModifiersDuringDrag; // 0x120
};

struct ATigerModelViewerItem {
	UStaticMeshComponent* Mesh; // 0x228
	float DesiredScreenSize; // 0x230
	float CurrentScreenSize; // 0x234
};

struct UTireType {
	float FrictionScale; // 0x30
};

struct UPaperTileMapComponent {
	int32_t MapWidth; // 0x478
	int32_t MapHeight; // 0x47c
	int32_t TileWidth; // 0x480
	int32_t TileHeight; // 0x484
	UPaperTileSet* DefaultLayerTileSet; // 0x488
	UMaterialInterface* Material; // 0x490
	TArray<UPaperTileLayer*> TileLayers; // 0x498
	FLinearColor TileMapColor; // 0x4a8
	int32_t UseSingleLayerIndex; // 0x4b8
	bool bUseSingleLayer; // 0x4bc
	UPaperTileMap* TileMap; // 0x4c0
};

struct UTigerRichTextBlock {
	FText Text; // 0x128
	FDelegate TextDelegate; // 0x140
	FSlateFontInfo Font; // 0x150
	FLinearColor ColorAndOpacity; // 0x1a8
	TArray<UTigerRichTextBlockDecorator*> Decorators; // 0x1b8
};

struct UPaperTileLayer {
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

struct UMaterialExpressionFontSampleParameter {
	FName ParameterName; // 0x50
	FGuid ExpressionGUID; // 0x58
	FName Group; // 0x68
};

struct ATBP_VFX_GroundSlam_Impact_C {
	UParticleSystemComponent* Impact Particle; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
};

struct UTBP_UI_BaseRangedCrosshair_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCanvasPanel* CanvasParent; // 0x2c0
	UImage* ScopeVignetteImage; // 0x2c8
	TArray<UTBP_UI_Image_C*> Crosshairs; // 0x2d0
	FSlateBrush ScopeVignette; // 0x2e0
	bool bShouldShowScopeVignette; // 0x368
	TArray<UTBP_UI_Image_C*> ScalingCrosshairs; // 0x370
};

struct ATigerDynamicObject {
	FComponentReference MeshComponentRef; // 0x228
	float PlayerImpactMultiplier; // 0x250
};

struct UTBP_ContextualHelp_Diablerie_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UAchievementWriteCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UCheckBox {
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

struct ULocalizedOverlays {
	UBasicOverlays* DefaultOverlays; // 0x28
	TMap<FString, UBasicOverlays*> LocaleToOverlaysMap; // 0x30
};

struct ATigerLootBundleSpawner {
	bool bLooted; // 0x228
};

struct UTigerPassiveHideousConfig {
	float TimeUntilMasqueradeTicks; // 0x118
	float HideousReachDistance; // 0x11c
	UCurveFloat* ScaleCurve; // 0x120
};

struct UTigerCustomSequenceListGender {
	UAnimSequence* Sequences[0x2]; // 0x28
};

struct UAkSettingsPerUser {
	FDirectoryPath WwiseWindowsInstallationPath; // 0x28
	FFilePath WwiseMacInstallationPath; // 0x38
	bool EnableAutomaticAssetSynchronization; // 0x48
	FString WaapiIPAddress; // 0x50
	uint32_t WaapiPort; // 0x60
	bool bAutoConnectToWAAPI; // 0x64
	bool AutoSyncSelection; // 0x65
	bool SuppressWwiseProjectPathWarnings; // 0x66
	bool SoundDataGenerationSkipLanguage; // 0x67
};

struct ULoudnessNRT {
	ULoudnessNRTSettings* Settings; // 0x78
};

struct UGizmoAxisScaleParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x48
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0x58
	float ScaleMultiplier; // 0x68
	float Parameter; // 0x6c
	FGizmoFloatParameterChange LastChange; // 0x70
	FVector CurScaleAxis; // 0x78
	FVector CurScaleOrigin; // 0x84
	FTransform InitialTransform; // 0x90
};

struct UOnlinePIESettings {
	bool bOnlinePIEEnabled; // 0x38
	TArray<FPIELoginSettingsInternal> Logins; // 0x40
};

struct UTigerCustomizableKeybindsDataAsset {
	TMap<FName, FTigerCustomizableKeybindData> KeybindData; // 0x30
	TMap<FName, FTigerCustomizableAxisKeybindData> AxisKeybindData; // 0x80
};

struct UMovieSceneSubTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UMaterialExpressionWorldPosition {
	EWorldPositionIncludedOffsets WorldPositionShaderOffset; // 0x40
};

struct UInterpTrackFloatBase {
	FInterpCurveFloat FloatTrack; // 0x70
	float CurveTension; // 0x88
};

struct URichTextBlock {
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

struct UTBP_ContextualHelp_Tutorial_Aim_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UBillboardComponent {
	UTexture2D* Sprite; // 0x450
	char bIsScreenSizeScaled : 1; // 0x458
	float ScreenSize; // 0x45c
	float U; // 0x460
	float UL; // 0x464
	float V; // 0x468
	float VL; // 0x46c
};

struct UTigerInteractionControllerComponent {
	FMulticastInlineDelegate OnTargetInteractionChanged; // 0xb0
	float DiablerizeDotProductCutOff; // 0xc0
	float HeldInputInteractionTime; // 0xc4
	float InteractionLineTraceLength; // 0xc8
	float InteractionLineTraceThickness; // 0xcc
	bool AllowAutomaticPickUpBehindPlayer; // 0xd0
	float AutoPickUpCoolDown; // 0xd4
	FVector AutoPickUpBoxVolumeExtents; // 0xd8
	ATigerPlayerController* TigerPC; // 0xe8
	ATigerPlayer* TigerPlayerPawn; // 0xf0
	TWeakObjectPtr<ATigerCharacter> TargetCharacter; // 0x108
	TWeakObjectPtr<ATigerCharacter> TrainerTarget; // 0x110
	TWeakObjectPtr<ATigerItemWorldRepresentation> InteractionItem; // 0x118
	TWeakObjectPtr<ATigerItemWorldRepresentation> LastAutoPickupItem; // 0x120
	TWeakObjectPtr<ATigerInteractiveObject> TargetInteractiveObject; // 0x128
	ATigerBaseNPC* PotentialFeedingTarget; // 0x130
	TArray<FOverlapResult> TriggerVolumeOverlaps; // 0x148
	TArray<FHitResult> InteractionSweepResults; // 0x168
	TArray<FHitResult> InteractionTraceResults; // 0x188
	TArray<FOverlapResult> AutoPickUpInteractionOverlaps; // 0x1a8
	TWeakObjectPtr<ATigerBaseNPC> CachedVendor; // 0x1c8
};

struct UTigerAISenseConfig_Sight {
	UTigerAISense_Sight* Implementation; // 0x48
	float SightRadius; // 0x50
	float LoseSightRadius; // 0x54
	float PeripheralVisionAngleDegrees; // 0x58
	float CloseSightRadius; // 0x5c
	float CloseLoseSightRadius; // 0x60
	float ClosePeripheralVisionAngleDegrees; // 0x64
	float HeightDifference; // 0x68
	FAISenseAffiliationFilter DetectionByAffiliation; // 0x6c
	float AutoSuccessRangeFromLastSeenLocation; // 0x70
};

struct UAnimSequence {
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

struct UMaterialExpressionArcsineFast {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleVelocity {
	FRawDistributionVector StartVelocity; // 0x38
	FRawDistributionFloat StartVelocityRadial; // 0x80
};

struct UTigerWorldCompositionSettings {
	FDirectoryPath StreamedLevelDirectory; // 0x38
	ETigerWorldCompositionProxyMode ProxyGenerationMode; // 0x48
	int32_t ActorSortingCellSizeIncrementCount; // 0x4c
	float ActorSortingCellSizeIncrementAmount; // 0x50
	FMeshMergingSettings ProxyMeshMergeSettings; // 0x54
	bool bDoSecondProxyGenStage; // 0xf4
	FMeshProxySettings ProxySettings; // 0xf8
	FMeshBuildSettings LodBuildSettings; // 0x1a0
	TArray<FPerPlatformFloat> LodScreenSizes; // 0x1d0
	bool bEnableLodDitheringOnProxyMeshes; // 0x1e0
	float ProxySizeRequirement; // 0x1e4
	bool bForceLoadAllCellLevels; // 0x1e8
	bool bBlockOnLoad; // 0x1e9
	bool bEnablePreSpawnLoading; // 0x1ea
	bool bTriggerGarbageCollectionOnUnload; // 0x1eb
	TArray<TSoftClassPtr<UObject>> ProxyTypeBlacklistSoft; // 0x1f0
	TArray<TSoftClassPtr<UObject>> StreamingTypeBlacklistSoft; // 0x200
	TArray<TSoftClassPtr<UObject>> LevelClusterBlacklistSoft; // 0x210
	TSoftObjectPtr<UMaterialInterface> DebugVisualizationMaterialNotInFilter; // 0x220
};

struct UEndMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTBP_ContextualHelp_Consumable_Prevented_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
	FText ArmorContext; // 0xf8
	FText BloodBagContext; // 0x110
	FText DefaultContext; // 0x128
};

struct UTBP_MightyLeap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x158
};

struct UAsyncActionHandleSaveGame {
	FMulticastInlineDelegate Completed; // 0x30
	USaveGame* SaveGameObject; // 0x60
};

struct ACameraShakeSourceActor {
	UCameraShakeSourceComponent* CameraShakeSourceComponent; // 0x228
};

struct UNiagaraDataInterfaceLandscape {
	AActor* SourceLandscape; // 0x38
};

struct UTigerMapMarkerProxy {
	FMulticastInlineDelegate OnUpdated; // 0x28
	int32_t MarkerId; // 0x38
	UUserWidget* WidgetType; // 0x58
};

struct UTigerNpcAccuracyComponent {
	float TimeToReachMaxAccuracy; // 0xb0
	float TimeToReachMaxInaccuracy; // 0xb4
	float MaxAccuracyConeRadius; // 0xb8
	float MinAccuracyConeRadius; // 0xbc
	float AccuracyDistance; // 0xc0
	float MovingTargetAccuracyPenaltyPercentage; // 0xc4
	float MinSwooshByAccuracyConeRadius; // 0xc8
	float MaxSwooshByAccuracyConeRadius; // 0xcc
	float MinSwooshByAccuracyDistance; // 0xd0
	bool bShouldKeepAccuracyWhenSwitchingToTargetsAlly; // 0xd4
	bool bShouldDebugDraw; // 0xd5
	bool bShouldMissEveryBurst; // 0xd6
	ATigerNPC* Owner; // 0xe0
};

struct UTigerStaggerComponent {
	UAnimMontage* CurrentStaggerAnimation; // 0xb0
};

struct UMovieSceneFloatSection {
	FMovieSceneFloatChannel FloatCurve; // 0xf0
};

struct AFieldSystemActor {
	UFieldSystemComponent* FieldSystemComponent; // 0x228
};

struct UTBP_UI_Line_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Left; // 0x268
	UImage* Middle; // 0x270
	UImage* Right; // 0x278
	USizeBox* SizeContainer; // 0x280
	UTexture2D* LeftTexture; // 0x288
	UTexture2D* RightTexture; // 0x290
	UTexture2D* Texture; // 0x298
	FVector2D MarginPixels; // 0x2a0
	float OverrideMiddleWidth; // 0x2a8
	float OverrideMiddleHeight; // 0x2ac
	bool FlipRight; // 0x2b0
	bool FlipLeft; // 0x2b1
};

struct UTigerAiHasCurrentSquadOrder {
	ETigerNpcSquadOrder SquadOrderToCompare; // 0x68
};

struct UTBP_ContextualHelp_RedGas_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UInterpTrackInstFloatAnimBPParam {
	UAnimInstance* AnimScriptInstance; // 0x28
	float ResetFloat; // 0x30
};

struct ULandscapeMeshProxyComponent {
	FGuid LandscapeGuid; // 0x4e0
	TArray<FIntPoint> ProxyComponentBases; // 0x4f0
	int8_t ProxyLOD; // 0x500
};

struct ULevelSequencePlayer {
	FMulticastInlineDelegate OnCameraCut; // 0x680
};

struct UVectorField {
	FBox Bounds; // 0x28
	float Intensity; // 0x44
};

struct UTBP_WallClimbEffect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
};

struct UARFaceComponent {
	EARFaceTransformMixing TransformSetting; // 0x278
	bool bUpdateVertexNormal; // 0x279
	bool bFaceOutOfScreen; // 0x27a
	FARFaceUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionRuntimeVirtualTextureReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput VirtualTextureOutput; // 0x54
};

struct UTigerAIPlayerUseHealingItem {
	ATigerLocalAIControllerBase* LocalAIController; // 0x80
	ATigerPlayerController* PlayerController; // 0x88
};

struct UTBP_ContextualHelp_Consumable_Cancel_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UMovieSceneAkAudioRTPCSection {
	UAkRtpc* RTPC; // 0xe8
	FString Name; // 0xf0
	FRichCurve FloatCurve; // 0x100
	FMovieSceneFloatChannelSerializationHelper FloatChannelSerializationHelper; // 0x180
	FMovieSceneFloatChannel RTPCChannel; // 0x1b0
};

struct UTigerAiDisciplineTaskBase {
	ATigerLocalAIController* LocalAIController; // 0x98
	ATigerCharacter* AiTigerCharacter; // 0xa0
	UTigerDisciplineComponent* DisciplineComponent; // 0xa8
	UTigerDisciplineBase* CurrentDisciplineBase; // 0xb0
};

struct ATigerPlayerStart {
	char GameTypeSpawnFlags; // 0x258
};

struct ATigerGeneratedStaticMeshActor {
	UStaticMeshComponent* MeshComponent; // 0x228
};

struct UCurveVector {
	FRichCurve FloatCurves[0x3]; // 0x30
};

struct UMaterialExpressionHairColor {
	FExpressionInput Melanin; // 0x40
	FExpressionInput Redness; // 0x54
	FExpressionInput DyeColor; // 0x68
};

struct UPhysicalMaterialMask {
	int32_t UVChannelIndex; // 0x28
	TextureAddress AddressX; // 0x2c
	TextureAddress AddressY; // 0x2d
};

struct UTigerDisciplineFOTT {
	UTigerFOTTConfig* Config; // 0x78
	UParticleSystemComponent* PlayerChargeupParticles; // 0xb0
	UParticleSystemComponent* PlayerAttackParticles; // 0xb8
	UParticleSystemComponent* PlayerAttackEndParticles; // 0xc0
};

struct UTigerDsPresenceSubsystem {
	UTigerPresenceService* PresenceService; // 0x30
};

struct UMorphTarget {
	USkeletalMesh* BaseSkelMesh; // 0x28
};

struct ALevelSequenceMediaController {
	ALevelSequenceActor* Sequence; // 0x230
	UMediaComponent* MediaComponent; // 0x238
	float ServerStartTimeSeconds; // 0x240
};

struct UTBP_ContextualHelp_Discipline_Archetype_UnlockInputReminderPad_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UTigerMasqueradeConsequenceCompassMarkerSyncInstance {
	UTigerCompassMarkerWidget* CompassMarkerClass; // 0x58
	UTexture2D* CompassMarkerTexture; // 0x60
	UTigerCompassMarkerWidget* CompassMarker; // 0x68
};

struct UTigerBodyPartProjectileDamageModifiersAsset {
	TMap<FName, EBodyPart> BonesToBodyParts; // 0x30
};

struct UVehicleWheel {
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

struct UTigerBuffMeleeChargeAttackInstance {
	UTigerBuffMeleeChargeAttack* MeleeChargeAttackBuff; // 0x88
	ATigerPlayer* Player; // 0x90
	UParticleSystemComponent* ActiveAttackParticles; // 0x98
};

struct UParticleModuleVectorFieldGlobal {
	char bOverrideGlobalVectorFieldTightness : 1; // 0x30
	float GlobalVectorFieldScale; // 0x34
	float GlobalVectorFieldTightness; // 0x38
};

struct UTBP_PoseableMesh_Master_C {
	TMap<FName, ENUM_PiercingNames> BoneMappings; // 0x38
};

struct UTigerTooltipKeyPromptWidget {
	FMulticastInlineDelegate OnPromptPressed; // 0x280
	FMulticastInlineDelegate OnPromptHeld; // 0x290
	bool bHasHoldAction; // 0x2c0
};

struct UTigerVoipTencentBackendSettings {
	FString GMEAppId; // 0x38
	FString GMEAppKey; // 0x48
};

struct UTigerAiShouldReportNewThreatDecorator {
	FBlackboardKeySelector PlayerToReportKey; // 0x68
};

struct UReflectionCaptureComponent {
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

struct UTigerJudgeBaseAttackState {
	TArray<ATigerCharacter*> HitCharacters; // 0x60
	float Cooldown; // 0x70
	float AttackFailSafeDuration; // 0x74
	float AttackMinRange; // 0x78
	float AttackMaxRange; // 0x7c
	bool bUseAttackRangeHorizontally; // 0x80
	float MaxHeightDiff; // 0x84
	UTigerJudgeBaseState* PreviousState; // 0x88
	UTigerJudgeSwingData* SwingData; // 0x90
	bool bJudgeSwordActiveStatus; // 0x98
	bool bIsCheckingAttackCollisionData; // 0x99
	FVector SwordHitBox; // 0x9c
	UCurveFloat* SwordLengthCurve; // 0xa8
};

struct ATigerRejuvenatingVoiceEffectActor {
	ATigerPlayer* Player; // 0x228
	float HealAmount; // 0x230
};

struct UTBP_UI_CharacterCard_Info_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	UImage* BackgroundImage; // 0x290
	UBorder* CardBorder; // 0x298
	URetainerBox* CardShapeMask; // 0x2a0
	UImage* PlayerIcon; // 0x2a8
	UImage* PlayerIconBorder; // 0x2b0
	URetainerBox* PlayerIconBorderMask; // 0x2b8
	URetainerBox* PlayerIconMask; // 0x2c0
	UTigerStyledRichTextBlock* PlayerNameText; // 0x2c8
	UImage* SpeakerIcon; // 0x2d0
	UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x2d8
};

struct UMovieSceneComponentMaterialTrack {
	int32_t MaterialIndex; // 0x90
};

struct ASceneCapture2D {
	USceneCaptureComponent2D* CaptureComponent2D; // 0x238
};

struct UActorSequence {
	UMovieScene* MovieScene; // 0x60
	FActorSequenceObjectReferenceMap ObjectReferences; // 0x68
};

struct UTigerAnimNotifyState_DamageImmunity {
	TArray<UDamageType*> ImmunityTo; // 0x30
};

struct UInterpTrackInstFloatParticleParam {
	float ResetFloat; // 0x28
};

struct UMaterialExpressionStep {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
	float ConstY; // 0x68
	float ConstX; // 0x6c
};

struct UPostEventAsync {
	FMulticastInlineDelegate Completed; // 0x30
};

struct UStreamingSettings {
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

struct USimpleConstructionScript {
	TArray<USCS_Node*> RootNodes; // 0x28
	TArray<USCS_Node*> AllNodes; // 0x38
	USCS_Node* DefaultSceneRootNode; // 0x48
};

struct UEnvQueryGenerator_Composite {
	TArray<UEnvQueryGenerator*> Generators; // 0x50
	char bAllowDifferentItemTypes : 1; // 0x60
	char bHasMatchingItemType : 1; // 0x60
	UEnvQueryItemType* ForcedItemType; // 0x68
};

struct ATigerBuildingWallPreviewer {
	UTigerBuildingWallPreset* Preset; // 0x228
};

struct UTigerTutorialTrainerAsset {
	AAIController* Controller; // 0x30
	ATigerTutorialTrainer* NPC; // 0x38
	TArray<FTigerPreviewerData> VisualData; // 0x40
	UTigerWeapon* WeaponClass; // 0x50
	bool bShouldBeFriendlyWithPlayer; // 0x58
	bool bShouldReviveInsteadOfDiablerize; // 0x59
};

struct UTigerStunConfig {
	float StunTime; // 0x160
	float StunRadius; // 0x164
};

struct UGizmoWorldAxisSource {
	FVector Origin; // 0x30
	int32_t AxisIndex; // 0x3c
};

struct UMovieSceneMaterialTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UTigerCustomBlendSpaceListClan {
	UBlendSpace* BlendSpaces[0x4]; // 0x28
};

struct USkinnedMeshComponent {
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

struct UActorChannel {
	AActor* Actor; // 0x70
	TArray<UObject*> CreateSubObjects; // 0x160
};

struct USoundNodeGroupControl {
	TArray<int32_t> GroupSizes; // 0x48
};

struct USubsurfaceProfile {
	FSubsurfaceProfileStruct Settings; // 0x28
};

struct USlateAccessibleWidgetData {
	bool bCanChildrenBeAccessible; // 0x28
	ESlateAccessibleBehavior AccessibleBehavior; // 0x29
	ESlateAccessibleBehavior AccessibleSummaryBehavior; // 0x2a
	FText AccessibleText; // 0x30
	FDelegate AccessibleTextDelegate; // 0x48
	FText AccessibleSummaryText; // 0x58
	FDelegate AccessibleSummaryTextDelegate; // 0x70
};

struct UEnvQueryTest_Project {
	FEnvTraceData ProjectionData; // 0x1f8
};

struct UGeometryCache {
	TArray<UMaterialInterface*> Materials; // 0x30
	TArray<UGeometryCacheTrack*> Tracks; // 0x40
	int32_t StartFrame; // 0x60
	int32_t EndFrame; // 0x64
};

struct UTigerWorldCompositionCellComponent {
	UShapeComponent* ShapeComponent; // 0x1f8
	TArray<UTigerWorldCompositionCellComponent*> SubCellComponents; // 0x200
	ATigerWorldCompositionGrid* WorldGrid; // 0x210
	FName StreamLevelPath; // 0x218
};

struct UTBP_Ping_Civilian_C {
	UAkAudioEvent* civilianPingVO; // 0x128
	FText civilianPingText; // 0x130
	UTexture2D* civilianPingIcon; // 0x148
	UTigerBloodResonanceAsset* BloodAsset_Choleric; // 0x150
	UTigerBloodResonanceAsset* BloodAsset_Melancholic; // 0x158
	UTigerBloodResonanceAsset* BloodAsset_Phlegmatic; // 0x160
	UTigerBloodResonanceAsset* BloodAsset_Sanguine; // 0x168
};

struct UFont {
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

struct UAkXboxOneGDKInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXboxOneGDKApuHeapInitializationSettings ApuHeapSettings; // 0x88
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkXboxOneGDKAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UInputTouchDelegateBinding {
	TArray<FBlueprintInputTouchDelegateBinding> InputTouchDelegateBindings; // 0x28
};

struct UAkXboxOneInitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkXboxOneApuHeapInitializationSettings ApuHeapSettings; // 0x88
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkXboxOneAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UTigerAiIsInMovementRestrictionBoundsArea {
	ETigerNpcMovementRestrictionBoundsArea AreaToCompare; // 0x68
};

struct USoundNodeMixer {
	TArray<float> InputVolume; // 0x48
};

struct ATigerMatchGameMode {
	FMulticastInlineDelegate OnPlayerDeathEvent; // 0x4c8
	FMulticastInlineDelegate OnGameModeVariationsSetEvent; // 0x4d8
	UTigerSHPBCoordinator* SHPBCoordinator; // 0x520
	UTigerHeatmapCollector* HeatmapCollector; // 0x528
	TArray<FTigerReadyToPlayState> ReadyToPlayStates; // 0x530
	UTigerMatchStateComponent* MatchStateManager; // 0x578
	TArray<ATigerHaven*> AllHavens; // 0x580
	UTigerMatchGameModeReporter* MatchReporter; // 0x590
};

struct UCompositionGraphCaptureProtocol {
	FCompositionGraphCapturePasses IncludeRenderPasses; // 0x58
	bool bCaptureFramesInHDR; // 0x68
	int32_t HDRCompressionQuality; // 0x6c
	EHDRCaptureGamut CaptureGamut; // 0x70
	FSoftObjectPath PostProcessingMaterial; // 0x78
	bool bDisableScreenPercentage; // 0x90
	UMaterialInterface* PostProcessingMaterialPtr; // 0x98
};

struct UAkAndroidInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAndroidAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UAISense_Hearing {
	TArray<FAINoiseEvent> NoiseEvents; // 0x80
	float SpeedOfSoundSq; // 0x90
};

struct UBTDecorator_ConeCheck {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector ConeDirection; // 0x98
	FBlackboardKeySelector Observed; // 0xc0
};

struct ATigerBloodVeinBranch {
	FMulticastInlineDelegate OnReachedEndOfBloodVeinBranch; // 0x228
	UStaticMesh* VeinSplineMesh; // 0x238
	ATigerBloodVeinPawn* ControllingPawn; // 0x240
	USceneComponent* CurrentPlayerSpot; // 0x248
	float LandSoundEventTimeOffset; // 0x250
	float SplineMeshDistance; // 0x254
	float SplineScale; // 0x258
	TArray<USplineMeshComponent*> GeneratedSplineMeshes; // 0x260
	UTigerBloodVeinBranchMovementComponent* MovementComponent; // 0x270
};

struct UTigerEntityCheckpointActorSpawner {
	AActor* ActorToSpawn; // 0x1f8
};

struct UTBP_UI_PingMapTooltip_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* ShowTooltip; // 0x268
	UWidgetAnimation* FadeIn; // 0x270
	UCanvasPanel* OnScreen; // 0x278
	UTigerStyledRichTextBlock* OnScreenMeterText; // 0x280
	UTigerStyledRichTextBlock* OnScreenTextBlock; // 0x288
	USizeBox* ScreenTextSizeBox; // 0x290
	UCanvasPanel* TextContainer; // 0x298
	UTBP_UI_InputPromptCombined_C* ToolTip; // 0x2a0
};

struct UTigerCharacterMovementComponent {
	UTigerTraversalFiniteStateMachine* FiniteStateMachine; // 0xb00
	float MaxSprintSpeed; // 0xb20
	float SprintSpeedMultiplier; // 0xb24
	float ForwardAngleThreshold; // 0xb2c
	UTigerSprintConfig* SprintConfig; // 0xb38
	float MaxJumpHeight; // 0xb40
	bool bPreventFallingSlide; // 0xb44
	float DownedMaxSpeed; // 0xb48
	FMulticastInlineDelegate OnDodge; // 0xb50
	float WallClimbCombineThresholdSquared; // 0xb60
	UTigerImpendingCollisionCalculator* ImpendingCollisionCalculator; // 0xb68
	float TimeUntilCollision; // 0xb70
	float AngleToImpendingCollisionWithClimbableSurface; // 0xb74
	float CharacterAngleToImpendingCollisionWithClimbableSurface; // 0xb78
	bool bAboutToCollideWithClimbableSurface; // 0xb7c
	uint32_t ElysiumBlockedTraversalStates; // 0xb94
	bool bEnableRestrictedElysiumMobility; // 0xb98
	bool bIsInLedgeGrab; // 0xb99
	bool bContinueToUseClimbCameraDuringLedgeGrab; // 0xb9a
	bool bWasLastLandingHard; // 0xb9b
	FName RightHandBoneName; // 0xba4
	FName LeftHandBoneName; // 0xbac
	FName RightFootBoneName; // 0xbb4
	FName LeftFootBoneName; // 0xbbc
	float JumpCapsuleHeightReduction; // 0xbc4
	FTigerDeltaCorrectionData CurrentDeltaCorrectedAnimationData; // 0xc10
	bool bUseCustomCurvesExclusivelyForInclineSpeedModification; // 0xc50
	UCurveFloat* InclineMovementMultiplierCurve; // 0xc58
	UCurveFloat* DeclineMovementMultiplierCurve; // 0xc60
	UCurveFloat* BackwardsMovementMultiplierCurve; // 0xc68
	float BackwardsAngleThreshold; // 0xc70
	UTigerSprintConfig* SprintConfigClass; // 0xc88
	UCurveFloat* AimGlideProgressCurve; // 0xc90
	UCurveFloat* AimGlideDragOverVelocityCurve; // 0xc98
	UCurveFloat* AimGlideLateralDragCurve; // 0xca0
	UCurveFloat* AimGlideAirControlCurve; // 0xca8
	bool bResetAimGlideOnDoubleJump; // 0xcb0
	UAnimMontage* PendingPreMovementMontage; // 0xcb8
	FVector LastWallJumpedNormal; // 0xd00
};

struct UTigerAIWithinMovementBoundsServices {
	FBlackboardKeySelector TargetLocationKey; // 0x70
};

struct UMaterialExpressionTextureProperty {
	FExpressionInput TextureObject; // 0x40
	EMaterialExposedTextureProperty Property; // 0x54
};

struct UAnimNotify_AkEvent_C {
	FString Attach Name; // 0x38
	UAkAudioEvent* Event; // 0x48
	bool Follow; // 0x50
	FString EventName; // 0x58
};

struct UMovieSceneGeometryCacheSection {
	FMovieSceneGeometryCacheParams Params; // 0xe8
};

struct USoundClass {
	FSoundClassProperties Properties; // 0x28
	TArray<USoundClass*> ChildClasses; // 0xa8
	TArray<FPassiveSoundMixModifier> PassiveSoundMixModifiers; // 0xb8
	USoundClass* ParentClass; // 0xc8
};

struct UParticleModuleSize {
	FRawDistributionVector StartSize; // 0x30
};

struct UParticleModuleOrbitBase {
	char bUseEmitterTime : 1; // 0x30
};

struct URendererOverrideSettings {
	char bSupportAllShaderPermutations : 1; // 0x38
	char bForceRecomputeTangents : 1; // 0x38
};

struct UAnimCompress_RemoveLinearKeys {
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

struct UVectorFieldAnimated {
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

struct UTigerInputPresetDataAsset {
	TMap<FName, FTigerInputPresetData> InputPresets; // 0x30
};

struct UMaterialExpressionQualitySwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x4]; // 0x54
};

struct UTigerChallengeKillPlayers {
	FTigerChallengeRequirementWeaponType RequiredWeaponConstraint; // 0xb0
	bool bInOneGame; // 0xc8
};

struct UTigerGameInstance {
	UAkAudioEvent* MusicPlayAkEvent; // 0x1a8
	FMulticastInlineDelegate OnTitleScreenClosed; // 0x1b0
	FString JoinErrorString; // 0x1c0
	TSoftClassPtr<UObject> DisciplineConfigsClassPtr; // 0x1d0
	UObject* DisciplineConfigsClass; // 0x1f8
	TArray<UTigerPlayerClanData*> AvailablePlayerClans; // 0x200
	UTigerExpRequirements* SeasonExpRequirements; // 0x210
	UTigerExpRequirements* ArchetypeExpRequirements; // 0x218
	UTigerTitleListAsset* TitleList; // 0x220
	UTigerOnlineStatusMessages* OnlineStatusMessagesClass; // 0x228
	UTigerSaveGame* CurrentSaveGame; // 0x230
	UTigerPreloadedNiagaraSystems* PreloadedNiagaraSystems; // 0x238
	UTigerLoadingScreenUI* LoadingScreen; // 0x240
	TArray<UTigerCharacterPreset*> BotCharacterPresets; // 0x298
	bool bBotsIgnorePlayer; // 0x2a8
	bool bEnableBotsAsClients; // 0x2a9
	bool bOnlyBotsAliveEndsMatch; // 0x2aa
	bool bIsJoiningMatch; // 0x2ab
	bool bHasShownTitleScreen; // 0x2ac
	bool bIsRetryingTutorial; // 0x2ad
	FString BotAutoJoinServer; // 0x2b0
	int32_t LoadingScreenZValue; // 0x2c0
	UTigerGameModeLoadingScreens* GameModeLoadingScreens; // 0x2c8
	UDataTable* SoftCurrencies; // 0x2d0
	FMulticastInlineDelegate OnFindMatchFailed; // 0x2d8
	UTigerGeneralUserSettings* GeneralUserSettingsClass; // 0x2e8
	UTigerGeneralUserSettings* GeneralUserSettings; // 0x2f0
	UTigerQuestCollection* QuestCollection; // 0x2f8
	UTigerMasterChallengesConfigAsset* MasteryChallenges; // 0x300
	UTigerPartyService* PartyService; // 0x308
	UTigerPlayerDataService* PlayerDataService; // 0x310
	UTigerStoreService* StoreService; // 0x318
	UShMidasAdapter* MidasAdapter; // 0x320
	UTigerFetchPremiumCurrencyManager* FetchPremiumCurrencyManager; // 0x328
	TWeakObjectPtr<UTigerWidget> SoftwareCursor; // 0x330
	UTigerPartyManager* PartyManager; // 0x338
	UTigerAuthenticationManager* AuthenticationManager; // 0x340
	UTigerTelemetryEventHandler* TelemetryEventHandler; // 0x348
	ATigerStatisticsGatherer* StatisticsGatherer; // 0x350
	UTigerPushConnectionManager* PushConnectionManager; // 0x358
	UTigerPreloadedClasses* PreloadedClasses; // 0x448
	TMap<UTigerBloodTrackPassiveConfig*, FString> BloodTrackPassiveToEncodedId; // 0x450
	TMap<FString, UTigerBloodTrackPassiveConfig*> EncodedIdToBloodTrackPassive; // 0x4a0
	ETigerGroupingMode LastSelectedGroupingMode; // 0x4f0
	UDataTable* BotNameTable; // 0x4f8
	UTigerDsBackendAgent* DsBackendAgent; // 0x510
	USharkAccounts* AccountSystem; // 0x518
	TArray<UTigerAmmoAsset*> AmmoPickupItems; // 0x520
	FTigerSeasonConfig ClientSeasonConfig; // 0x530
};

struct UMaterialExpressionAppendVector {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UParticleModuleAccelerationDrag {
	UDistributionFloat* DragCoefficient; // 0x38
	FRawDistributionFloat DragCoefficientRaw; // 0x40
};

struct UAkAssetDataSwitchContainerData {
	TSoftObjectPtr<UAkGroupValue> GroupValue; // 0x28
	UAkGroupValue* DefaultGroupValue; // 0x50
	TArray<UAkMediaAsset*> MediaList; // 0x58
	TArray<UAkAssetDataSwitchContainerData*> Children; // 0x68
};

struct UBrushBuilder {
	FString BitmapFilename; // 0x28
	FString ToolTip; // 0x38
	char NotifyBadParams : 1; // 0x48
	TArray<FVector> Vertices; // 0x50
	TArray<FBuilderPoly> Polys; // 0x60
	FName Layer; // 0x70
	char MergeCoplanars : 1; // 0x78
};

struct UCompositeCurveTable {
	TArray<UCurveTable*> ParentTables; // 0xa0
	TArray<UCurveTable*> OldParentTables; // 0xb0
};

struct UTigerTraversalStateJumpConfig {
	int32_t MaxJumpIndexForDiminishingReturnsCurve; // 0x50
	float TimeToReduceDiminishingReturnsCount; // 0x54
	float JumpForgivenessDistance; // 0x58
	float InitialJumpZVelocity; // 0x5c
	float PostJumpClimbInteractionDelay; // 0x60
	float JumpCoolDownTime; // 0x64
	bool bCancelJumpOnHeadImpact; // 0x68
	UCurveFloat* DiminishingReturnsCurve; // 0x70
};

struct UCullingField {
	UFieldNodeBase* Culling; // 0xb0
	UFieldNodeBase* Field; // 0xb8
	EFieldCullingOperationType Operation; // 0xc0
};

struct UTigerUtilityPowerHSenseComponent {
	FMulticastInlineDelegate OnHeightenedSensesUsed; // 0xb0
	TArray<FTigerNPCMasqueradeStateMessage> NPCMasqueradeStates; // 0xc0
	TArray<AActor*> ActiveHeightenedSenseObjects; // 0xd0
	float HeightenedSensesDirectLosExtent; // 0xe0
	float HeightenedSensesIndirectLosExtent; // 0xe4
	float MaxFadeInTimer; // 0xe8
	float MaxFadeOutTimer; // 0xec
	float PulseDuration; // 0xf0
	float CooldownTimeAfterActivation; // 0xf4
	float MovementMultiplierWhenActive; // 0xf8
	float CurrentFadeInTimer; // 0xfc
	float CurrentFadeOutTimer; // 0x100
	float CooldownEndTime; // 0x104
	float PulseTimeLeft; // 0x108
	UAkAudioEvent* FailedUseAudioEvent; // 0x110
	int32_t CancellingActions; // 0x118
	bool ActivateHeightenedSensesStartupFinished; // 0x11c
	bool DeactivateHeightenedSensesStartupFinished; // 0x11d
	bool bShouldStopSprintingWhenActive; // 0x11e
	bool bShouldPulse; // 0x11f
	bool bIsHeightenedSensesActive; // 0x120
	TArray<FTigerDisableHSenseTarget> DisabledHeightenedSensesActors; // 0x128
};

struct UVolumetricCloudComponent {
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

struct UTigerTelemetryEventHandler {
	USharkTelemetry* SharkTelemetry; // 0x28
	UTigerGameInstance* GameInstance; // 0x30
};

struct UAutoDestroySubsystem {
	TArray<AActor*> ActorsToPoll; // 0x38
};

struct UTBP_LoadingToolTip_C {
	TArray<FTS_LoadingTip> LoadingTips; // 0x30
	int32_t SecondsBetweenLoadingTips; // 0x40
};

struct UMovieSceneEntitySystem {
	UMovieSceneEntitySystemLinker* Linker; // 0x28
};

struct ATigerHaven {
	FString OverrideFinalHavenIdentifier; // 0x228
	USplineComponent* HolyIncenseOuterSpline; // 0x238
	USplineComponent* HolyIncenseInnerSpline; // 0x240
	bool bUseInnerHolyIncenseSpline; // 0x248
};

struct UAnimNotify_PlayMontageNotify {
	FName NotifyName; // 0x38
};

struct UBTTask_RunEQSQuery {
	UEnvQuery* QueryTemplate; // 0x98
	TArray<FEnvNamedValue> QueryParams; // 0xa0
	TArray<FAIDynamicParam> QueryConfig; // 0xb0
	EEnvQueryRunMode RunMode; // 0xc0
	FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8
	bool bUseBBKey; // 0xf0
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8
};

struct ANavMeshBoundsVolume {
	FNavAgentSelector SupportedAgents; // 0x260
};

struct ATBP_ShockwaveWallTrail_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	UParticleSystemComponent* ParticleSystem trail; // 0x230
	USceneComponent* DefaultSceneRoot; // 0x238
};

struct UTigerPingWorldInstanceUI {
	UTigerPingClientData* PingData; // 0x2c8
};

struct UEnvQueryGenerator_ActorsOfClass {
	AActor* SearchedActorClass; // 0x50
	FAIDataProviderBoolValue GenerateOnlyActorsInRadius; // 0x58
	FAIDataProviderFloatValue SearchRadius; // 0x90
	UEnvQueryContext* SearchCenter; // 0xc8
};

struct UInterpTrackToggle {
	TArray<FToggleTrackKey> ToggleTrack; // 0x70
	char bActivateSystemEachUpdate : 1; // 0x80
	char bActivateWithJustAttachedFlag : 1; // 0x80
	char bFireEventsWhenForwards : 1; // 0x80
	char bFireEventsWhenBackwards : 1; // 0x80
	char bFireEventsWhenJumpingForwards : 1; // 0x80
};

struct UTBP_PiercingSetCustomization_Master_C {
	TMap<ENUM_PiercingNames, UStaticMesh*> Piercings; // 0x110
	TArray<UTBP_PoseableMesh_Master_C*> PoseablePiercings; // 0x160
};

struct UMaterialExpressionRayTracingQualitySwitch {
	FExpressionInput Normal; // 0x40
	FExpressionInput RayTraced; // 0x54
};

struct ATigerPropDummy {
	UTigerNpcPropComponent* PropComponent; // 0x4b8
	TArray<FTigerDummyPropAttachment> Attachments; // 0x4c0
};

struct UABP_VMP_BRU_M_HAIR_01_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xbc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct UTigerEnteringNewAreaPrompt {
	FText SubText; // 0x2a8
	UTexture2D* TextBackground; // 0x2c0
};

struct UUserDefinedCaptureProtocol {
	UWorld* World; // 0x58
};

struct UTigerDialogueCondition_Clan {
	ETigerDialogueClanRequirementSpecifier ClanEquality; // 0x30
	ETigerClan ClanRequirement; // 0x31
};

struct UTigerAIAwayFromSuspiciousService {
	FBox SearchFleeSpotBox; // 0x70
	FBlackboardKeySelector FleePoint; // 0x90
	FBlackboardKeySelector CurrentMasqueradeTarget; // 0xb8
	FBlackboardKeySelector WantsToReportPlayer; // 0xe0
	float KeepFleeingFromSpecificPlayerRadiusSquared; // 0x108
	float BoxCenterDistanceFromNPCPosition; // 0x10c
	uint32_t NumberOfTimesToRandomForAFleeSpot; // 0x110
	bool bShowDebugFeatures; // 0x114
	TWeakObjectPtr<ATigerPlayer> PlayerFleeingFrom; // 0x118
};

struct ATigerNpcMovementRestrictionBounds {
	USplineComponent* InnerSpline; // 0x228
	USplineComponent* OuterSpline; // 0x230
};

struct UAkAssetPlatformData {
	UAkAssetData* CurrentAssetData; // 0x28
};

struct UEnvQueryManager {
	TArray<FEnvQueryInstanceCache> InstanceCache; // 0xa8
	TArray<UEnvQueryContext*> LocalContexts; // 0xb8
	TArray<UEnvQueryInstanceBlueprintWrapper*> GCShieldedWrappers; // 0xc8
	float MaxAllowedTestingTime; // 0x12c
	bool bTestQueriesUsingBreadth; // 0x130
	int32_t QueryCountWarningThreshold; // 0x134
	double QueryCountWarningInterval; // 0x138
};

struct UTigerSharknetAgent {
	FString DsVersion; // 0x50
	float MaxRegisterRetryDelaySeconds; // 0x108
};

struct UTBP_UI_Gradient_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Gradient_image; // 0x268
	UMaterialInstanceDynamic* Gradient_Material_Instance; // 0x270
	bool Is Horizontal; // 0x278
	float GradientMultiplier; // 0x27c
	float GradientRotation; // 0x280
	UTexture2D* Horizontal_Gradient_Texture; // 0x288
	float Gradient Scale; // 0x290
};

struct UDataTable {
	UScriptStruct* RowStruct; // 0x28
	char bStripFromClientBuilds : 1; // 0x80
	char bIgnoreExtraFields : 1; // 0x80
	char bIgnoreMissingFields : 1; // 0x80
	FString ImportKeyField; // 0x88
};

struct UEndTurnCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTigerCharacterPoseableMeshAnimInstance {
	UTigerCharacterMeshManager* MeshManager; // 0x2b8
	TMap<FName, FTigerCharacterPoseableMeshBoneData> NameToDataLut; // 0x2c0
};

struct UTigerOnlineStatusMessages {
	FText DefaultMessage; // 0x28
	FText DefaultAccountMessage; // 0x40
	FText DefaultSystemMessage; // 0x58
	FText DefaultServerMessage; // 0x70
	TArray<FTigerOnlineStatusMessageEntry> Messages; // 0x88
	TMap<ETigerOnlineErrorCategory, FText> ErrorCategoryTitles; // 0x98
};

struct UGizmoConstantAxisSource {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
};

struct UAkTVOSInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkAudioSession AudioSession; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8
};

struct UTigerChallenge {
	FMulticastInlineDelegate OnValueChangedEvent; // 0x30
	FMulticastInlineDelegate OnChallengeCompletedEvent; // 0x40
	UWorld* World; // 0x50
	ATigerPlayerController* OwningPlayerController; // 0x58
	int32_t TargetValue; // 0x60
	int32_t PreSessionValue; // 0x64
	FText ChallengeDisplayName; // 0x68
	int32_t DefaultTargetValue; // 0x80
	FText Description; // 0x88
	uint64_t ChallengeTypeTelemetryID; // 0xa0
	bool bChallengeCompleteEventRaised; // 0xa8
};

struct ULightmappedSurfaceCollection {
	UModel* SourceModel; // 0x28
	TArray<int32_t> Surfaces; // 0x30
};

struct USpinBoxWidgetStyle {
	FSpinBoxStyle SpinBoxStyle; // 0x30
};

struct UTigerAnimNotify_SetCapContext {
	FName ContextName; // 0x38
};

struct UABP_VMP_TOR_M_HAIR_03_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2f0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x730
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0xb70
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xfb0
	FAnimNode_Root AnimGraphNode_Root; // 0x13f0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1420
};

struct UMovieSceneSequencePlayer {
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

struct UTigerBuffReposition {
	float NoiseNotifyEventRange; // 0x248
};

struct AGameStateBase {
	AGameModeBase* GameModeClass; // 0x228
	AGameModeBase* AuthorityGameMode; // 0x230
	ASpectatorPawn* SpectatorClass; // 0x238
	TArray<APlayerState*> PlayerArray; // 0x240
	bool bReplicatedHasBegunPlay; // 0x250
	float ReplicatedWorldTimeSeconds; // 0x254
	float ServerWorldTimeSecondsDelta; // 0x258
	float ServerWorldTimeSecondsUpdateFrequency; // 0x25c
};

struct ATigerSafeHavenVolume {
	ATigerHaven* AssignedHaven; // 0x260
};

struct UTigerBuffDOT {
	UDamageType* DamageType; // 0x248
	float DamagePerTick; // 0x250
	bool bPlayHitAnimation; // 0x254
	bool bSpawnBloodDecals; // 0x255
};

struct UMaterialExpressionCrossProduct {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UEditableMesh {
	TArray<UEditableMeshAdapter*> Adapters; // 0x3b8
	int32_t TextureCoordinateCount; // 0x3d0
	int32_t PendingCompactCounter; // 0x51c
	int32_t SubdivisionCount; // 0x520
};

struct UTigerOnlineError {
	FText Message; // 0x28
	FText Title; // 0x40
	FString ErrorCodeString; // 0x58
};

struct UParticleModuleColorOverLife {
	FRawDistributionVector ColorOverLife; // 0x30
	FRawDistributionFloat AlphaOverLife; // 0x78
	char bClampAlpha : 1; // 0xa8
};

struct UMaterialExpressionCustom {
	FString code; // 0x40
	ECustomMaterialOutputType OutputType; // 0x50
	FString Description; // 0x58
	TArray<FCustomInput> Inputs; // 0x68
	TArray<FCustomOutput> AdditionalOutputs; // 0x78
	TArray<FCustomDefine> AdditionalDefines; // 0x88
	TArray<FString> IncludeFilePaths; // 0x98
};

struct UTigerPhysicalInteractionAnimationAsset {
	FTigerPhysicalInteractionMontages FeedingDataByVampireGender[0x2]; // 0x30
};

struct UMaterialExpressionVirtualTextureFeatureSwitch {
	FExpressionInput No; // 0x40
	FExpressionInput Yes; // 0x54
};

struct UParticleModuleLocationPrimitiveCylinder_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UTigerAIBenchmarkDiablerizeTask {
	float MaximumDiablerizeDistance; // 0x98
};

struct USlider {
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

struct UARTrackedPose {
	FARPose3D TrackedPose; // 0xf8
};

struct UMediaTexture {
	TextureAddress AddressX; // 0xe8
	TextureAddress AddressY; // 0xe9
	bool AutoClear; // 0xea
	FLinearColor ClearColor; // 0xec
	bool EnableGenMips; // 0xfc
	char NumMips; // 0xfd
	bool NewStyleOutput; // 0xfe
	MediaTextureOutputFormat OutputFormat; // 0xff
	float CurrentAspectRatio; // 0x100
	MediaTextureOrientation CurrentOrientation; // 0x104
	UMediaPlayer* MediaPlayer; // 0x108
};

struct UGameViewportClient {
	UConsole* ViewportConsole; // 0x40
	TArray<FDebugDisplayProperty> DebugProperties; // 0x48
	int32_t MaxSplitscreenPlayers; // 0x68
	UWorld* World; // 0x78
	UGameInstance* GameInstance; // 0x80
};

struct UMaterialInstanceConstant {
	UPhysicalMaterialMask* PhysMaterialMask; // 0x360
};

struct UMaterialExpressionBreakMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x40
};

struct UTigerJoinSessionAsync {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailed; // 0x40
};

struct UWidget {
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

struct UTigerEquippedModModifierValues {
	UTigerMaxIntAggregator* ExtendedMagazineLevel; // 0x28
	UTigerFloatMultiplierAggregator* ReloadSpeed; // 0x30
	UTigerFloatMultiplierAggregator* RecoilMultiplier; // 0x38
	UTigerFloatMultiplierAggregator* SpreadMultiplier; // 0x40
	UTigerFloatMultiplierAggregator* SwapSpeedMultiplier; // 0x48
	UTigerFloatMultiplierAggregator* SpreadDecreaseMultiplier; // 0x50
	UTigerFloatMinAggregator* ModdedFOV; // 0x58
	UTigerFloatCurveMultiplierAggregator* AimedSpreadMultiplier; // 0x60
	UTigerBoolAnyAggregator* IsScoped; // 0x68
	UTigerBoolAnyAggregator* CanSwitchFireMode; // 0x70
	UTigerWeaponCrosshairWidget* CrossHairWidget; // 0x78
};

struct UParticleModuleAttractorLine {
	FVector EndPoint0; // 0x30
	FVector EndPoint1; // 0x3c
	FRawDistributionFloat Range; // 0x48
	FRawDistributionFloat Strength; // 0x78
};

struct UTigerPassiveComponent {
	ATigerPlayer* PlayerOwner; // 0xb0
	UTigerWidget* PassiveWidget; // 0xb8
};

struct UTigerPassiveArchetypeLogic {
	FTigerCharacterStatModification PowerLevelStatChanges; // 0xc0
};

struct UTBP_ContextualHelp_Tutorial_Climb_Gamepad_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UParticleModuleAttractorParticle {
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

struct UParticleModuleLocation {
	FRawDistributionVector StartLocation; // 0x30
	float DistributeOverNPoints; // 0x78
	float DistributeThreshold; // 0x7c
};

struct UVectorFieldStatic {
	int32_t SizeX; // 0x48
	int32_t SizeY; // 0x4c
	int32_t SizeZ; // 0x50
	bool bAllowCPUAccess; // 0x54
};

struct USynthComponentToneGenerator {
	float Frequency; // 0x6c0
	float Volume; // 0x6c4
};

struct UTigerWeaponAbilityHook {
	UTigerHookConfig* Config; // 0x78
};

struct UDatasmithLightComponentTemplate {
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

struct UMaterialExpressionScalarParameter {
	float DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x5c
	char PrimitiveDataIndex; // 0x5d
};

struct UTigerContextualHelp {
	float LifeTimeInSeconds; // 0x28
	FText HeaderText; // 0x30
	FText DescriptionText; // 0x48
	FName InputAction; // 0x60
	bool bShouldHideOnInput; // 0x68
	TSoftObjectPtr<UTexture2D> Icon; // 0x70
	int32_t MatchesPlayedLimit; // 0x98
	bool bWantsToShow; // 0x9c
	float CooldownInSeconds; // 0xa0
	ETigerContextualHelpType ContextualHelpType; // 0xa4
	ETigerContextualHelpShouldShowInGameMode ShouldShowInGameMode; // 0xa5
};

struct UCheatManager {
	ADebugCameraController* DebugCameraControllerRef; // 0x28
	ADebugCameraController* DebugCameraControllerClass; // 0x30
};

struct UWheeledVehicleMovementComponent4W {
	FVehicleEngineData EngineSetup; // 0x290
	FVehicleDifferential4WData DifferentialSetup; // 0x330
	float AckermannAccuracy; // 0x34c
	FVehicleTransmissionData TransmissionSetup; // 0x350
	FRuntimeFloatCurve SteeringCurve; // 0x380
};

struct UABP_PoseableMesh_C_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x348
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x358
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x378
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x480
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x588
};

struct UTBP_UnseenPresenceBuff_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
};

struct ABrush {
	EBrushType BrushType; // 0x228
	FColor BrushColor; // 0x22c
	int32_t PolyFlags; // 0x230
	char bColored : 1; // 0x234
	char bSolidWhenSelected : 1; // 0x234
	char bPlaceableFromClassBrowser : 1; // 0x234
	char bNotForClientOrServer : 1; // 0x234
	UModel* Brush; // 0x238
	UBrushComponent* BrushComponent; // 0x240
	char bInManipulation : 1; // 0x248
	TArray<FGeomSelection> SavedSelections; // 0x250
};

struct UBorderSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UFindTurnBasedMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTigerCharacterEyebrowCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct ATigerPlayer {
	char PlayerVisibilityToNPC; // 0x770
	ETigerTraversalState CurrentTraversalState; // 0x771
	FVector GunOffset; // 0x774
	UTigerSpringArmComponent* SpringArm; // 0x780
	UTigerInventoryComponent* InventoryComponent; // 0x788
	UTigerConsumablesComponent* ConsumablesComponent; // 0x790
	UTigerAudioVisualizationSpawnerComponent* AudioVisualizationComponent; // 0x798
	UShapeComponent* InteractionVolumeComponent; // 0x7b8
	UShapeComponent* TriggerVolumeComponent; // 0x7c0
	UPostProcessComponent* FullscreenPostProcessComponent; // 0x7c8
	UTigerDistrictComponent* DistrictComponent; // 0x7d0
	UTigerCrowdAgentComponent* CrowdAgentComponent; // 0x7d8
	UTigerBloodResonanceComponent* BloodResonanceComponent; // 0x7e0
	UTigerEmotePlayerComponent* EmotePlayerComponent; // 0x7e8
	UTigerUtilityPowerHSenseComponent* HSenseComponent; // 0x7f0
	UTigerUtilityPowerHSenseComponent* HSenseClass; // 0x7f8
	UTigerUtilityPowerBaseComponent* UtilityPowerComp; // 0x800
	UTigerDisciplineComponent* DisciplineComponent; // 0x808
	UTigerLevelComponent* LevelComponent; // 0x810
	UTigerCharCustomizationComponent* CharacterCustomizationComponent; // 0x818
	UTigerPlayerClanData* PlayerClan; // 0x828
	FMulticastInlineDelegate OnBloodTrackUpdatedEvent; // 0x830
	TArray<UTigerBloodTrackPassiveConfig*> BloodTrack; // 0x840
	TMap<ATigerProjectile*, int8_t> InitialProjectileReserveCount; // 0x850
	int8_t DefaultReservedProjectileCount; // 0x8a0
	float LastAirStartTime; // 0x8a4
	float LastAirEndTime; // 0x8a8
	FMulticastInlineDelegate OnGasDamageTaken; // 0x8b0
	FMulticastInlineDelegate OnSelfReviveBlockedByRedGas; // 0x8c0
	FMulticastInlineDelegate OnShieldBroken; // 0x8d0
	FMulticastInlineDelegate OnDiablerizeStateChanged; // 0x8f8
	FMulticastInlineDelegate OnReviveStateChanged; // 0x908
	FMulticastInlineDelegate OnPlayerEvent; // 0x918
	FMulticastInlineDelegate OnDamageDealt; // 0x928
	FMulticastInlineDelegate OnHealthChanged; // 0x938
	FMulticastInlineDelegate OnTraversalAction; // 0x948
	FMulticastInlineDelegate OnLifeStatusChanged; // 0x958
	FMulticastInlineDelegate OnUpdateArchetypePassiveActiveState; // 0x998
	FMulticastInlineDelegate OnBeginPlay; // 0x9a8
	FMulticastInlineDelegate OnGroupMemberDied; // 0x9b8
	bool bExposePlayersInHeightenedSense; // 0x9c8
	UTigerPhysicalInteraction* DiablerizeInteractionClass; // 0x9d0
	UTigerPhysicalInteraction* ReviveInteractionClass; // 0x9d8
	FName LoopSectionName; // 0x9e0
	FName EndSectionName; // 0x9e8
	FName InterruptedSectionName; // 0x9f0
	FMulticastInlineDelegate SavedLocationAdded; // 0x9f8
	FMulticastInlineDelegate OnKilledBy; // 0xa08
	float LeaveGameDestroyDelay; // 0xa18
	bool bControllerDisconnected; // 0xa1c
	bool bAllowCollisionWithPlayersInElysium; // 0xa1e
	UTigerPowerKit* PowerKit; // 0xa20
	float RecentDamageTaken; // 0xa28
	float RecentDamageDecayWaitDuration; // 0xa30
	float RecentDamageDecayInitialWaitDuration; // 0xa34
	float RecentDamageDecayRate; // 0xa38
	float InvulnerabilityDurationDowned; // 0xa44
	float InvulnerabilityDurationRegenerated; // 0xa48
	float InvulnerabilityDurationRevived; // 0xa4c
	float LocationHistorySaveDistanceSquared; // 0xa60
	float LocationHistoryDurationSeconds; // 0xa64
	bool bIsInvisibleByDodge; // 0xa68
	bool bIsRecoveringFromDodge; // 0xa69
	float ArmorDurability; // 0xa6c
	ETigerItemRarity ArmorRarity; // 0xa70
	USceneComponent* ProjectileSpawnRootRef; // 0xa78
	UCameraComponent* Camera; // 0xa80
	USkeletalMeshComponent* HolsteredWeaponMeshRef; // 0xa88
	USkeletalMeshComponent* SecondaryHolsteredWeaponMeshRef; // 0xa90
	FTigerCompressedRotation CompressedCameraRotation; // 0xa99
	TArray<FTigerNpcThatCanSeePlayerWrapper> NpcThatCanSeePlayerServer; // 0xaa8
	TArray<FTigerNpcThatCanSeePlayerWrapper_Client> NpcThatCanSeePlayerClient; // 0xab8
	TArray<FTigerNpcThatCanSeePlayerWrapper_Client> LastNpcsThatCantSeePlayerSent; // 0xac8
	float LastNpcThatCanSeePlayerSyncTime; // 0xae0
	UTigerPhysicalInteraction* PhysicalInteractionObject; // 0xae8
	TWeakObjectPtr<ATigerPlayer> OtherPhysicalInteractionPlayer; // 0xaf0
	TArray<UTigerPassiveComponent*> PassiveComponents; // 0xaf8
	TMap<UObject*, FTigerClanPassiveAndDefault> ClanPassivesMap; // 0xb08
	FTigerCharacterStatModification CombinedPassiveStatChanges; // 0xb58
	UMaterialInterface* InvisibilityMaterial; // 0xbe8
	UMaterialInstanceDynamic* InvisibilityMaterialInstance; // 0xbf0
	UTigerUIEnemyHealthBar* InWorldHealthBar; // 0xbf8
	float AirTimeRequiredForSuspiciousLanding; // 0xc00
	FVector GroundBelowDeathLocation; // 0xc04
	bool bWasDiablerized; // 0xc10
	FName DiablerizeAnimationName; // 0xc14
	FName GetDiablerizedAnimationName; // 0xc1c
	FName ReviveTeammateAnimationName; // 0xc24
	FName GettingRevivedAnimationName; // 0xc2c
	UParticleSystem* EnhancedReviveParticleEffect; // 0xc38
	UParticleSystemComponent* RegenerateComponent; // 0xc40
	FName RegenerateSpawnRateParam; // 0xc48
	float RegenerateRemainingDownTimeMultiplier; // 0xc50
	float EnhancedReviveParticleEffectLength; // 0xc54
	float TimeToGetInPositionForPhysicalInteraction; // 0xc5c
	float ReviveHealthPercentage; // 0xc60
	float ReviveHealth; // 0xc64
	bool bUsePercentReviveHealth; // 0xc68
	float PhysicalInteractionTimeLeft; // 0xc6c
	UAkAudioEvent* RevivedAudioEvent; // 0xc78
	FName RegeneratingDoneAnimationName; // 0xc80
	float DamageDurationForInterrupt; // 0xc88
	float InterruptDamageLimits[0x2]; // 0xc8c
	char EnabledInterruptDamageLimits; // 0xc94
	float DownedRangedDamageTakenMultiplier; // 0xc98
	float DownedMeleeDamageTakenMultiplier; // 0xc9c
	float DownedDisciplineDamageTakenMultiplier; // 0xca0
	float DownedRegenRatePerSecond; // 0xca4
	float DownedRegenRateReviveMultiplier; // 0xca8
	float DownedBaseHealth; // 0xcac
	float DownedRegenValue; // 0xcb0
	bool bDownedRegenShouldTickInsideHolyIncense; // 0xcb8
	bool bCanRegenerateInsideHolyIncense; // 0xcb9
	float EffectUpdateTimeAfterInsideHolyIncense; // 0xcbc
	float HardLandingSpeed; // 0xcc0
	int32_t OverlappingSuspiciousGuardVolumeCount; // 0xcc4
	int32_t OverlappingThreatGuardVolumeCount; // 0xcc8
	float IsInCloseQuartersCombatCooldownTime; // 0xd00
	float EnemyOutlineDistanceSquared; // 0xd04
	float EnemyOutlineCombatDistanceSquared; // 0xd08
	float ApproximateDownedHeightOffset; // 0xd0c
	UAkAudioEvent* FallStartedAudioEvent; // 0xd28
	UAkAudioEvent* FallEndedAudioEvent; // 0xd30
	UAkAudioEvent* HitEnemyAudioEvent; // 0xd38
	UAkAudioEvent* HitEnemyHeadAudioEvent; // 0xd40
	UAkAudioEvent* ExtraHealthHitAudioEvent; // 0xd48
	UAkAudioEvent* PickUpRangedWeaponAudioEvent; // 0xd50
	UAkAudioEvent* PickUpMeleeWeaponAudioEvent; // 0xd58
	UAkAudioEvent* PickUpAmmoAudioEvent; // 0xd60
	UAkAudioEvent* PickUpConsumableAudioEvent; // 0xd68
	UAkAudioEvent* PickUpCollectibleAudioEvent; // 0xd70
	UAkAudioEvent* PickupArmorAudioEvent; // 0xd78
	UAkAudioEvent* StartCrouchAudioEvent; // 0xd80
	UAkAudioEvent* EndCrouchAudioEvent; // 0xd88
	UAkAudioEvent* HalfHealthBreakAudioEvent; // 0xd90
	bool bOrientCharacterRotationToMovement; // 0xd98
	bool bRotateCharacterWithMeleeWeapon; // 0xd99
	UTigerPhysicalInteraction* PhysicalInteractionClass; // 0xda0
	TWeakObjectPtr<ATigerJudge> JudgeFeedTarget; // 0xda8
	float JudgeFeedTimeSeconds; // 0xdb0
	TArray<FName> RangedHitMontageNames; // 0xdb8
	FName TransitionParameterName; // 0xdc8
	UStaticMeshComponent* TempProp; // 0xdd0
	TSet<ATigerCharacter*> CharmedCharacters; // 0xdd8
	bool bIsDowned; // 0xe28
	bool bIsInGhostMode; // 0xe8c
	bool bIsScouted; // 0xec8
	bool bIsInAssaultedArea; // 0xec9
};

struct UAsyncActionLoadPrimaryAssetList {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UParticleModuleAccelerationBase {
	char bAlwaysInWorldSpace : 1; // 0x30
};

struct UMaterialExpressionIf {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput AGreaterThanB; // 0x68
	FExpressionInput AEqualsB; // 0x7c
	FExpressionInput ALessThanB; // 0x90
	float EqualsThreshold; // 0xa4
	float ConstB; // 0xa8
	float ConstAEqualsB; // 0xac
};

struct ANavModifierVolume {
	UNavArea* AreaClass; // 0x268
	bool bMaskFillCollisionUnderneathForNavmesh; // 0x270
};

struct UDistributionFloatConstantCurve {
	FInterpCurveFloat ConstantCurve; // 0x38
};

struct UTBP_UI_StyledComboBoxRow_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Button_1; // 0x268
	UTigerStyledRichTextBlock* TextBlock; // 0x270
	bool IsSelected; // 0x278
	UTBP_UI_StyledComboBox_C* ParentBox; // 0x280
};

struct UGameplayTasksComponent {
	char bIsNetDirty : 1; // 0xbc
	TArray<UGameplayTask*> SimulatedTasks; // 0xc0
	TArray<UGameplayTask*> TaskPriorityQueue; // 0xd0
	TArray<UGameplayTask*> TickingTasks; // 0xf0
	TArray<UGameplayTask*> KnownTasks; // 0x100
	FMulticastInlineDelegate OnClaimedResourcesChange; // 0x110
};

struct UDatasmithDeltaGenSceneImportData {
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

struct UAIPerceptionStimuliSourceComponent {
	char bAutoRegisterAsSource : 1; // 0xb0
	TArray<UAISense*> RegisterAsSourceForSenses; // 0xb8
};

struct UShAccountSettings {
	EShAccountChannel AccountChannel; // 0x38
	EShAccountChannel PlatformChannel; // 0x39
	bool LogEnabled; // 0x3a
	FString SandboxUrl; // 0x40
	FString ProductionUrl; // 0x50
};

struct UMovieSceneMediaTrack {
	TArray<UMovieSceneSection*> MediaSections; // 0x80
};

struct UBookMark2D {
	float Zoom2D; // 0x28
	FIntPoint Location; // 0x2c
};

struct UTBP_UI_PingInstance_Inner_C {
	float CONFIG_OffscreenIconOffset; // 0x2d0
};

struct UBTDecorator_Loop {
	int32_t NumLoops; // 0x68
	bool bInfiniteLoop; // 0x6c
	float InfiniteLoopTimeoutTime; // 0x70
};

struct UTigerConsumableWheelWidget {
	ATigerPlayer* Player; // 0x2a0
	UTigerConsumablesComponent* ConsumablesComponent; // 0x2a8
	UTigerInventoryComponent* InventoryComponent; // 0x2b0
	TArray<UTigerConsumableAsset*> DefaultSortOrder; // 0x2b8
	TMap<UTigerConsumableAsset*, int32_t> DefaultSortOrderMap; // 0x2c8
	TArray<UTigerConsumableAsset*> SortedMenuItems; // 0x318
};

struct USoundNodeRandom {
	TArray<float> Weights; // 0x48
	TArray<bool> HasBeenUsed; // 0x58
	int32_t NumRandomUsed; // 0x68
	int32_t PreselectAtLevelLoad; // 0x6c
	char bShouldExcludeFromBranchCulling : 1; // 0x70
	char bSoundCueExcludedFromBranchCulling : 1; // 0x70
	char bRandomizeWithoutReplacement : 1; // 0x70
};

struct UMaterialExpressionAntialiasedTextureMask {
	float Threshold; // 0x80
	ETextureColorChannel Channel; // 0x84
};

struct UMovieSceneEnumTrack {
	UEnum* Enum; // 0xb0
};

struct UMaterialExpressionBlendMaterialAttributes {
	FMaterialAttributesInput A; // 0x40
	FMaterialAttributesInput B; // 0x58
	FExpressionInput Alpha; // 0x70
	EMaterialAttributeBlend PixelAttributeBlendType; // 0x84
	EMaterialAttributeBlend VertexAttributeBlendType; // 0x85
};

struct UParticleModuleSourceMovement {
	FRawDistributionVector SourceMovementScale; // 0x30
};

struct UMovieSceneCameraShakeSourceShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct UTigerGrimoireDialogueWrapper {
	UTigerNpcDialogueList* DialogueList; // 0x28
	FString DialogueKey; // 0x30
};

struct UNiagaraDataInterface2DArrayTexture {
	UTexture2DArray* Texture; // 0x38
};

struct UMediaPlaylist {
	TArray<UMediaSource*> Items; // 0x28
};

struct UInterpTrackBoolProp {
	TArray<FBoolTrackKey> BoolTrack; // 0x70
	FName PropertyName; // 0x80
};

struct UWorldComposition {
	TArray<ULevelStreaming*> TilesStreaming; // 0x48
	double TilesStreamingTimeThreshold; // 0x58
	bool bLoadAllTilesDuringCinematic; // 0x60
	bool bRebaseOriginIn3DSpace; // 0x61
	float RebaseOriginDistance; // 0x64
};

struct UMaterialExpressionSpeedTree {
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

struct UHLODProxy {
	TArray<FHLODProxyMesh> ProxyMeshes; // 0x28
	TMap<UHLODProxyDesc*, FHLODProxyMesh> HLODActors; // 0x38
};

struct UReplicationGraphNode_AlwaysRelevant {
	UReplicationGraphNode* ChildNode; // 0x50
};

struct USubmixEffectConvolutionReverbPreset {
	UAudioImpulseResponse* ImpulseResponse; // 0x68
	FSubmixEffectConvolutionReverbSettings Settings; // 0x70
	ESubmixEffectConvolutionReverbBlockSize BlockSize; // 0x98
	bool bEnableHardwareAcceleration; // 0x99
};

struct UInputBehaviorSet {
	TArray<FBehaviorInfo> Behaviors; // 0x28
};

struct ATigerLootContainer {
	bool bDoorIsOpen; // 0x288
	UTigerBlueprintLootComponent* LootSpawnerComponent; // 0x290
};

struct UInterpTrackFloatParticleParam {
	FName ParamName; // 0x90
};

struct UMockDataMeshTrackerComponent {
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

struct UTextLayoutWidget {
	FShapedTextOptions ShapedTextOptions; // 0x108
	ETextJustify Justification; // 0x10b
	ETextWrappingPolicy WrappingPolicy; // 0x10c
	char AutoWrapText : 1; // 0x10d
	float WrapTextAt; // 0x110
	FMargin Margin; // 0x114
	float LineHeightPercentage; // 0x124
};

struct UTBP_WEP_Ability_Dash_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc8
};

struct USoundNodeDialoguePlayer {
	FDialogueWaveParameter DialogueWaveParameter; // 0x48
	char bLooping : 1; // 0x68
};

struct UDatasmithDecalComponentTemplate {
	int32_t SortOrder; // 0x30
	FVector DecalSize; // 0x34
	UMaterialInterface* Material; // 0x40
};

struct UAnimCompress_RemoveEverySecondKey {
	int32_t MinKeys; // 0x40
	char bStartAtSecondKey : 1; // 0x44
};

struct UNiagaraComponentPool {
	TMap<UNiagaraSystem*, FNCPool> WorldParticleSystemPools; // 0x28
};

struct UTigerPassiveKindredCharmConfig {
	ATigerKindredCharmEffectActor* EffectActor; // 0x118
	FName EffectSocketR; // 0x120
	FName EffectSocketL; // 0x128
	TArray<float> CharmCountCooldownSpeed; // 0x130
	int32_t MaxCharmedCharacterCount; // 0x140
	UTigerBuffKindredCharm* CharmBuff; // 0x148
	float PlayerPulseRange; // 0x150
	float PlayerPulseInterval; // 0x154
	float BuffDuration; // 0x158
	float NpcDamageBreakCharmRadius; // 0x15c
	float NpcDamageBreakCharmThreshold; // 0x160
	float NpcDamageBreakCharmImmunityTime; // 0x164
	float CharmedFeedingSpeedMultiplier; // 0x168
};

struct UParticleModuleSpawn {
	FRawDistributionFloat Rate; // 0x38
	FRawDistributionFloat RateScale; // 0x68
	EParticleBurstMethod ParticleBurstMethod; // 0x98
	TArray<FParticleBurst> BurstList; // 0xa0
	FRawDistributionFloat BurstScale; // 0xb0
	char bApplyGlobalSpawnRateScale : 1; // 0xe0
};

struct UPawnSensingComponent {
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

struct UTigerNPCCheatCommandsAsset {
	TMap<FName, UTigerNPCAsset*> Commands; // 0x30
};

struct UTigerDisciplineFrenzy {
	UTigerFrenzyConfig* Config; // 0x88
};

struct UTigerPassiveHideousLogic {
	UTigerPassiveHideousConfig* Config; // 0xc0
	TMap<ATigerBaseNPC*, FHideousTimingData> TimingData; // 0xc8
	ATigerPlayer* Player; // 0x118
};

struct ATBP_MovieSound_C {
	UMediaSoundComponent* MediaSound; // 0x228
	USceneComponent* DefaultSceneRoot; // 0x230
};

struct UDeviceProfile {
	FString DeviceType; // 0x38
	FString BaseProfileName; // 0x48
	UObject* Parent; // 0x58
	TArray<FString> CVars; // 0x88
};

struct AGameNetworkManager {
	float BadPacketLossThreshold; // 0x228
	float SeverePacketLossThreshold; // 0x22c
	int32_t BadPingThreshold; // 0x230
	int32_t SeverePingThreshold; // 0x234
	int32_t AdjustedNetSpeed; // 0x238
	float LastNetSpeedUpdateTime; // 0x23c
	int32_t TotalNetBandwidth; // 0x240
	int32_t MinDynamicBandwidth; // 0x244
	int32_t MaxDynamicBandwidth; // 0x248
	char bIsStandbyCheckingEnabled : 1; // 0x24c
	char bHasStandbyCheatTriggered : 1; // 0x24c
	float StandbyRxCheatTime; // 0x250
	float StandbyTxCheatTime; // 0x254
	float PercentMissingForRxStandby; // 0x258
	float PercentMissingForTxStandby; // 0x25c
	float PercentForBadPing; // 0x260
	float JoinInProgressStandbyWaitTime; // 0x264
	float MoveRepSize; // 0x268
	float MAXPOSITIONERRORSQUARED; // 0x26c
	float MAXNEARZEROVELOCITYSQUARED; // 0x270
	float CLIENTADJUSTUPDATECOST; // 0x274
	float MAXCLIENTUPDATEINTERVAL; // 0x278
	float MaxClientForcedUpdateDuration; // 0x27c
	float ServerForcedUpdateHitchThreshold; // 0x280
	float ServerForcedUpdateHitchCooldown; // 0x284
	float MaxMoveDeltaTime; // 0x288
	float MaxClientSmoothingDeltaTime; // 0x28c
	float ClientNetSendMoveDeltaTime; // 0x290
	float ClientNetSendMoveDeltaTimeThrottled; // 0x294
	float ClientNetSendMoveDeltaTimeStationary; // 0x298
	int32_t ClientNetSendMoveThrottleAtNetSpeed; // 0x29c
	int32_t ClientNetSendMoveThrottleOverPlayerCount; // 0x2a0
	bool ClientAuthorativePosition; // 0x2a4
	float ClientErrorUpdateRateLimit; // 0x2a8
	float ClientNetCamUpdateDeltaTime; // 0x2ac
	float ClientNetCamUpdatePositionLimit; // 0x2b0
	bool bMovementTimeDiscrepancyDetection; // 0x2b4
	bool bMovementTimeDiscrepancyResolution; // 0x2b5
	float MovementTimeDiscrepancyMaxTimeMargin; // 0x2b8
	float MovementTimeDiscrepancyMinTimeMargin; // 0x2bc
	float MovementTimeDiscrepancyResolutionRate; // 0x2c0
	float MovementTimeDiscrepancyDriftAllowance; // 0x2c4
	bool bMovementTimeDiscrepancyForceCorrectionsDuringResolution; // 0x2c8
	bool bUseDistanceBasedRelevancy; // 0x2c9
};

struct UTigerBuffStunBaton {
	float StunBonusDamage; // 0x248
	float ChargeGainedOnHit; // 0x24c
	float ChargeGainedPerUpdate; // 0x250
	float PassiveChargeRate; // 0x254
	bool bRegisterMultipleHitsOnChargeUp; // 0x258
	bool bRegisterMultipleHitsOnStun; // 0x259
	UTigerBuffInstance* TBPInstanceBuff; // 0x260
};

struct ADebugCameraController {
	char bShowSelectedInfo : 1; // 0x578
	char bIsFrozenRendering : 1; // 0x578
	char bIsOrbitingSelectedActor : 1; // 0x578
	char bOrbitPivotUseCenter : 1; // 0x578
	char bEnableBufferVisualization : 1; // 0x578
	char bEnableBufferVisualizationFullMode : 1; // 0x578
	char bIsBufferVisualizationInputSetup : 1; // 0x578
	char bLastDisplayEnabled : 1; // 0x578
	UDrawFrustumComponent* DrawFrustum; // 0x580
	AActor* SelectedActor; // 0x588
	UPrimitiveComponent* SelectedComponent; // 0x590
	FHitResult SelectedHitPoint; // 0x598
	APlayerController* OriginalControllerRef; // 0x628
	UPlayer* OriginalPlayer; // 0x630
	float SpeedScale; // 0x638
	float InitialMaxSpeed; // 0x63c
	float InitialAccel; // 0x640
	float InitialDecel; // 0x644
};

struct UTigerAIPlayerWallGrindTask {
	ATigerLocalAIController* LocalAIController; // 0x78
	ATigerPlayerController* PlayerController; // 0x80
	ATigerPlayer* CurrentPawn; // 0x88
	UTigerCharacterMovementComponent* PlayerMovementComponent; // 0x90
	UTigerTraversalWallGrindState* GrindState; // 0x98
};

struct UTigerMeleeWeapon {
	UCurveFloat* HorizontalFlinchCurve; // 0xa8
	UCurveFloat* VerticalFlinchCurve; // 0xb0
	float DamageMultiplier; // 0xb8
	float RootMotionAttacksStopDistance; // 0xbc
	float RootMotionAttacksStopDistanceAboveOrBelow; // 0xc0
	bool bIsUnarmedWeapon; // 0xc4
	UTigerMeleeAimAssistBehavior* AimAssistBehavior; // 0xc8
	float AimAssistPredictionTime; // 0xd0
	TArray<FTigerMeleeAttack> Attacks; // 0xd8
	FName HeavyAttackChargeUpMontageName; // 0xe8
	ETigerDisciplinesEnum WeaponAbility; // 0xf0
	UAkAudioEvent* HitAkEvent; // 0xf8
	UAkAudioEvent* HeavyHitAkEvent; // 0x100
	UParticleSystem* HitEffect; // 0x108
	AActor* HitEffectClass; // 0x110
	UForceFeedbackEffect* TargetHitForceFeedback; // 0x118
	UForceFeedbackEffect* AttackBlockedForceFeedback; // 0x120
	UForceFeedbackEffect* SuccesfullyBlockedForceFeedback; // 0x128
	FName BlockBlendSpaceName; // 0x130
	UAkAudioEvent* BlockStanceActivatedAkEvent; // 0x138
	float StartBlockingTransitionTime; // 0x140
	float BlockMovementMultiplier; // 0x144
	float BlockStunTime; // 0x148
	float DiminishingReturnBlockStunMultiplierReduction; // 0x14c
	UAkAudioEvent* BlockHitAkEvent; // 0x150
	UParticleSystem* BlockEffect; // 0x158
	FName BlockHitMontageName; // 0x160
	FName BlockKnockbackMontageName; // 0x168
	float BlockImpulseStrength; // 0x170
	float BlockMoveDistance; // 0x174
	float BlockMoveDuration; // 0x178
	float BlockMoveExitVelocityScale; // 0x17c
	float BlockAttackDamageMultiplier; // 0x180
	float BlockHeavyAttackDamageMultiplier; // 0x184
	UTigerMeleeWeaponTrailConfig* WeaponTrailConfigClass; // 0x188
	float MasqueradeNoiseEventRadius; // 0x190
	ETigerMeleeWeaponIdentifier MeleeWeaponIdentifier; // 0x194
};

struct UMaterialExpressionLandscapeLayerCoords {
	ETerrainCoordMappingType MappingType; // 0x40
	ELandscapeCustomizedCoordType CustomUVType; // 0x41
	float MappingScale; // 0x44
	float MappingRotation; // 0x48
	float MappingPanU; // 0x4c
	float MappingPanV; // 0x50
};

struct UNiagaraDataInterfaceVectorCurve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
};

struct ATigerElysiumHUD {
	UTigerDialogueInteractionScreen* DialogueInteractionWidget; // 0x3f8
	TSoftClassPtr<UObject> SoftPromotionalUiClass; // 0x400
	UTigerPromotionalUI* PromotionalUi; // 0x428
	TSoftClassPtr<UObject> SoftRewardsPopupClass; // 0x430
	UTigerRewardsPopup* RewardsPopup; // 0x458
	UTigerDialogueInteractionScreen* CurrentVendorUI; // 0x460
	TSoftClassPtr<UObject> DialogueInteractionCameraPreset; // 0x468
	UTigerWidget* ElysiumPlayerInfoUI; // 0x490
	UTigerWidget* InGameQueueIndicatorUI; // 0x498
	UTigerWidget* Watermark; // 0x4a0
	UTigerWidget* ProgressHUD; // 0x4a8
	UTigerInputMenuUI* SettingsMenuUi; // 0x4b0
	TArray<FAutoInitializedWidget> OpenMenuHiddenWidgets; // 0x4b8
	TArray<UTigerWidget*> OpenMenuWidgetIgnoreList; // 0x4c8
	TArray<TWeakObjectPtr<UTigerWidget>> HiddenTigerWidgets; // 0x4d8
	int32_t VendorUIZOrder; // 0x4e8
	FMulticastInlineDelegate OnPreloadingDone; // 0x4f0
	FMulticastInlineDelegate OnPromotionalPopupClosed; // 0x508
	TMap<FString, int32_t> TimeSpentPerMenu; // 0x530
};

struct UPlayerInput {
	TArray<FKeyBind> DebugExecBindings; // 0x120
	TArray<FName> InvertedAxis; // 0x160
};

struct UCheckGeoTrackingAvailabilityAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UTBP_UI_BasicMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Image_1; // 0x268
	UImage* Image_3; // 0x270
	UTextBlock* MenuHeader; // 0x278
	UNamedSlot* PutMenuContentHere; // 0x280
	UTBP_UI_Box_C* TBP_UI_Box; // 0x288
	UTBP_UI_Line_C* TBP_UI_Line; // 0x290
	FText MenuTitle; // 0x298
};

struct UTigerBrujahTraitMomentum {
	float MomentumActiveTimer; // 0x118
	float GroundSlamRadiusMultiplier; // 0x11c
	float MightyLeapVelocityMultiplier; // 0x120
	float FOTTKnockbackDistanceMultiplier; // 0x124
	float FOTTWallImpactDamageMultiplier; // 0x128
	UAkAudioEvent* MomentumStartedAudioEvent; // 0x130
};

struct UTigerActiveDisciplineConfig {
	int32_t MaxLevel; // 0xe8
	FText CooldownText; // 0xf0
	FText CooldownSuffix; // 0x108
	int32_t MaxCharges; // 0x120
	TArray<float> RechargeTimes; // 0x128
	TArray<float> CooldownTimes; // 0x138
	bool bShouldRotateTowardsCameraOnActivation; // 0x148
	bool bShouldRotateTowardsCameraOnRelease; // 0x149
	float MovementMultiplier; // 0x14c
	float GravityMultiplier; // 0x150
	float PrimaryAINoiseEventRange; // 0x154
	float SecondaryAINoiseEventRange; // 0x158
};

struct UVirtualTexture2D {
	FVirtualTextureBuildSettings Settings; // 0x110
	bool bContinuousUpdate; // 0x11c
	bool bSinglePhysicalSpace; // 0x11d
};

struct UTigerBuffArtifactFeedingBonus {
	float FeedBonusHealthMultiplier; // 0x248
};

struct USubmixEffectFilterPreset {
	FSubmixEffectFilterSettings Settings; // 0x9c
};

struct UTigerCameraBehavior {
	UTigerCameraPreset* CameraPreset; // 0x28
};

struct UTigerBuffClanReducesCooldown {
	float AbilityCooldownReduction; // 0x248
};

struct UTigerBuffPreventMasqueradeBreak {
	UAkAudioEvent* ArtifactBreakAudioEvent; // 0x248
};

struct UCameraModifier_CameraShake {
	TArray<FActiveCameraShakeInfo> ActiveShakes; // 0x48
	TMap<UCameraShakeBase*, FPooledCameraShakes> ExpiredPooledShakesMap; // 0x58
	float SplitScreenShakeScale; // 0xa8
};

struct UMovieSceneByteSection {
	FMovieSceneByteChannel ByteCurve; // 0xe8
};

struct UTigerPassionConfig {
	float ProjectileMinLengthScale; // 0x160
	float ProjectileMaxLengthScale; // 0x164
	float ProjectileMinWidthScale; // 0x168
	float ProjectileMaxWidthScale; // 0x16c
	float ProjectileMinHeightScale; // 0x170
	float ProjectileMaxHeightScale; // 0x174
	float ProjectileMinSpeed; // 0x178
	float ProjectileMaxSpeed; // 0x17c
	float ProjectileMinRange; // 0x180
	float ProjectileMaxRange; // 0x184
	float PanicMinDuration; // 0x188
	float PanicMaxDuration; // 0x18c
	float ApathyMinDuration; // 0x190
	float ApathyMaxDuration; // 0x194
	float ApathyStartSlowMultiplier; // 0x198
	float ApathyEndSlowMultiplier; // 0x19c
	float WrathMinDuration; // 0x1a0
	float WrathMaxDuration; // 0x1a4
	float WrathMinAdditionalDamageMultiplier; // 0x1a8
	float WrathMaxAdditionalDamageMultiplier; // 0x1ac
	UAnimMontage* ChooseEffectAnimation; // 0x1b0
	UAnimMontage* ChargeEffectAnimation; // 0x1b8
	UAnimMontage* ReleaseEffectAnimation; // 0x1c0
	TMap<ETigerPassionEffect, UTigerBuff*> EffectBuffs; // 0x1c8
	TMap<ETigerPassionEffect, UParticleSystem*> ProjectileParticles; // 0x218
	ATigerPassionProjectile* ProjectileActor; // 0x268
	float TimeBetweenEffectChange; // 0x270
	float ChooseEffectTimeOut; // 0x274
	float MaxChargeTime; // 0x278
	float UsageCooldown; // 0x27c
};

struct UAnimCompress {
	char bNeedsSkeleton : 1; // 0x38
	AnimationCompressionFormat TranslationCompressionFormat; // 0x3c
	AnimationCompressionFormat RotationCompressionFormat; // 0x3d
	AnimationCompressionFormat ScaleCompressionFormat; // 0x3e
};

struct UTigerEditorGameSettings {
	bool bMatchWaitsForMultipleGroupsInEditor; // 0x38
	bool bMatchWaitsForReadyStatesInEditor; // 0x39
	bool bEnableSpawnCountdownInEditor; // 0x3a
	bool bEnableNpcSpawningInEditor; // 0x3b
	bool bUseLocalVendorCategories; // 0x3c
	TSoftObjectPtr<UTigerSeasonConfigAsset> SeasonConfigOverride; // 0x40
	bool bShowGeneratedMeshActorsInOutliner; // 0x68
	bool bSimulateParticlesInEditor; // 0x69
	TSoftClassPtr<UObject> PreviewerClass; // 0x70
	FColor IndoorVolumeColor; // 0x98
};

struct USCS_Node {
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

struct UDynamicEntryBoxBase {
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

struct UNiagaraComponentRendererProperties {
	USceneComponent* ComponentType; // 0x80
	uint32_t ComponentCountLimit; // 0x88
	FNiagaraVariableAttributeBinding EnabledBinding; // 0x90
	bool bAssignComponentsOnParticleID; // 0xe8
	bool bOnlyCreateComponentsOnParticleSpawn; // 0xe9
	USceneComponent* TemplateComponent; // 0xf0
	TArray<FNiagaraComponentPropertyBinding> PropertyBindings; // 0xf8
};

struct UMaterialExpressionSceneTexture {
	FExpressionInput Coordinates; // 0x40
	ESceneTextureId SceneTextureId; // 0x54
	bool bFiltered; // 0x55
};

struct ULODSyncComponent {
	int32_t NumLODs; // 0xb0
	int32_t ForcedLOD; // 0xb4
	TArray<FComponentSync> ComponentsToSync; // 0xb8
	TMap<FName, FLODMappingData> CustomLODMapping; // 0xc8
	int32_t CurrentLOD; // 0x118
	int32_t CurrentNumLODs; // 0x11c
	TArray<UPrimitiveComponent*> DriveComponents; // 0x120
	TArray<UPrimitiveComponent*> SubComponents; // 0x130
};

struct UPlaneReflectionCaptureComponent {
	float InfluenceRadiusScale; // 0x280
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x288
	UBoxComponent* PreviewCaptureBox; // 0x290
};

struct UDebugCameraControllerSettings {
	TArray<FDebugCameraControllerSettingsViewModeIndex> CycleViewModes; // 0x38
};

struct UNiagaraEffectType {
	ENiagaraScalabilityUpdateFrequency UpdateFrequency; // 0x28
	ENiagaraCullReaction CullReaction; // 0x2c
	UNiagaraSignificanceHandler* SignificanceHandler; // 0x30
	TArray<FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings; // 0x38
	FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings; // 0x48
	FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings; // 0x58
};

struct UAkSettings {
	char MaxSimultaneousReverbVolumes; // 0x28
	FFilePath WwiseProjectPath; // 0x30
	FDirectoryPath WwiseSoundDataFolder; // 0x40
	bool bAutoConnectToWAAPI; // 0x50
	ECollisionChannel DefaultOcclusionCollisionChannel; // 0x51
	ECollisionChannel DefaultFitToGeometryCollisionChannel; // 0x52
	TMap<TSoftObjectPtr<UPhysicalMaterial>, FAkGeometrySurfacePropertiesToMap> AkGeometryMap; // 0x58
	float GlobalDecayAbsorption; // 0xa8
	TSoftObjectPtr<UAkAuxBus> DefaultReverbAuxBus; // 0xb0
	TMap<float, TSoftObjectPtr<UAkAuxBus>> EnvironmentDecayAuxBusMap; // 0xd8
	FString HFDampingName; // 0x128
	FString DecayEstimateName; // 0x138
	FString TimeToFirstReflectionName; // 0x148
	TSoftObjectPtr<UAkRtpc> HFDampingRTPC; // 0x158
	TSoftObjectPtr<UAkRtpc> DecayEstimateRTPC; // 0x180
	TSoftObjectPtr<UAkRtpc> TimeToFirstReflectionRTPC; // 0x1a8
	TMap<FGuid, FAkAcousticTextureParams> AcousticTextureParamsMap; // 0x1d0
	bool SplitSwitchContainerMedia; // 0x220
	bool SplitMediaPerFolder; // 0x221
	bool UseEventBasedPackaging; // 0x222
	bool EnableAutomaticAssetSynchronization; // 0x223
	FString CommandletCommitMessage; // 0x228
	TMap<FString, FString> UnrealCultureToWwiseCulture; // 0x238
	bool AskedToUseNewAssetManagement; // 0x288
	bool bEnableMultiCoreRendering; // 0x289
	bool MigratedEnableMultiCoreRendering; // 0x28a
	bool FixupRedirectorsDuringMigration; // 0x28b
	FDirectoryPath WwiseWindowsInstallationPath; // 0x290
	FFilePath WwiseMacInstallationPath; // 0x2a0
};

struct UBlackboardComponent {
	UBrainComponent* BrainComp; // 0xb0
	UBlackboardData* DefaultBlackboardAsset; // 0xb8
	UBlackboardData* BlackboardAsset; // 0xc0
	TArray<UBlackboardKeyType*> KeyInstances; // 0xe8
};

struct USoundNodeQualityLevel {
	int32_t CookedQualityLevelIndex; // 0x48
};

struct APaperTerrainActor {
	USceneComponent* DummyRoot; // 0x228
	UPaperTerrainSplineComponent* SplineComponent; // 0x230
	UPaperTerrainComponent* RenderComponent; // 0x238
};

struct UNiagaraDataInterfaceGrid2D {
	int32_t NumCellsX; // 0xd8
	int32_t NumCellsY; // 0xdc
	int32_t NumCellsMaxAxis; // 0xe0
	int32_t NumAttributes; // 0xe4
	bool SetGridFromMaxAxis; // 0xe8
	FVector2D WorldBBoxSize; // 0xec
};

struct UTigerBalconyVolumeDefaultValues {
	TArray<FTigerBuildingSystemBalconyVolumeDefaults> DefaultBalconyVolumeSets; // 0x30
};

struct UTBP_UI_TitleScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UWidgetAnimation* OutAnimation; // 0x288
	UWidgetAnimation* Loop_Text_Animation; // 0x290
	UWidgetAnimation* InAnimation; // 0x298
	UTigerStyledRichTextBlock* ActiveBuildText; // 0x2a0
	UScaleBox* BackgroundScaleBox; // 0x2a8
	UImage* BackgroundVideoWidget; // 0x2b0
	UImage* BlackScreen; // 0x2b8
	UTBP_UI_TitleError_C* ErrorSubscreen; // 0x2c0
	UImage* Image_547; // 0x2c8
	UTigerStyledRichTextBlock* Message; // 0x2d0
	UTigerStyledRichTextBlock* PressAnyKeyText; // 0x2d8
	UImage* Season_Logo; // 0x2e0
	UImage* Title_Logo; // 0x2e8
	UImage* Vein1; // 0x2f0
	UImage* Vein2; // 0x2f8
	UImage* Vein3; // 0x300
	UMediaPlayer* MediaPlayer; // 0x308
	FMulticastInlineDelegate OnLandingPageClosed; // 0x310
	bool Is Playing Out Animation; // 0x320
	FMulticastInlineDelegate OnLandingPageFadeOutStarted; // 0x328
};

struct UTigerGrimoireEntry {
	FText Name; // 0x30
	FText GameplayText; // 0x48
	FText Heading; // 0x60
	FText Description; // 0x78
	UTigerGrimoireDialogueWrapper* Dialogue; // 0x90
	FText Summary; // 0x98
	FText UnlockSummary; // 0xb0
	ETigerGrimoireEntryMediaDisplayMode MediaDisplayMode; // 0xc8
	TSoftObjectPtr<UTexture2D> Image; // 0xd0
	TSoftObjectPtr<UTexture2D> BackgroundImage; // 0xf8
	TSoftObjectPtr<UStaticMesh> Mesh; // 0x120
	UFileMediaSource* Video; // 0x148
	ETigerGrimoireEntryState DefaultState; // 0x150
	ETigerGrimoireContinuationMethod TextContinuationMethod; // 0x151
	UGrimoireCardMaterialPreset* GrimoireCardPreset; // 0x158
	FDataTableRowHandle CardQualityRow; // 0x160
	FDataTableRowHandle CardBorderRow; // 0x170
	TSoftObjectPtr<UTexture> FrontCardTexture; // 0x180
	float DefaultOrderValue; // 0x1a8
	float MeshScaleMultiplier; // 0x1ac
	FString EntryIdAsString; // 0x1b8
	bool bHideEntry; // 0x1c8
	UTigerGrimoireEntry* ParentEntry; // 0x1d0
};

struct AMagicLeapARPinInfoActor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	UStaticMeshComponent* Right; // 0x248
	UStaticMeshComponent* Forward; // 0x250
	UStaticMeshComponent* Up; // 0x258
	USphereComponent* ValidRadiusVisualizer; // 0x260
	USceneComponent* AxisRoot; // 0x268
	USceneComponent* VisualizerRoot; // 0x270
	UTextRenderComponent* TypeValue; // 0x278
	UTextRenderComponent* TransErrValue; // 0x280
	UTextRenderComponent* RotErrValue; // 0x288
	UTextRenderComponent* ConfidenceValue; // 0x290
	UTextRenderComponent* TransErrLabel; // 0x298
	UTextRenderComponent* RotErrLabel; // 0x2a0
	UTextRenderComponent* ConfidenceLabel; // 0x2a8
	UTextRenderComponent* PinIDValue; // 0x2b0
	USceneComponent* InfoRoot; // 0x2b8
	USceneComponent* Root; // 0x2c0
	float RotationSmoothSpeed; // 0x2c8
};

struct UMaterialExpressionDotProduct {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UTBP_UI_Menu_Button_Prompt_Footer_C {
	UNamedSlot* LeftBox_Prompts; // 0x260
	UNamedSlot* MidBox_Prompts; // 0x268
	UNamedSlot* RightBox_Prompts; // 0x270
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x278
};

struct USpotLightComponent {
	float InnerConeAngle; // 0x360
	float OuterConeAngle; // 0x364
};

struct UTigerWeaponCrosshairWidget {
	float WeaponSpread; // 0x280
	FVector PlayerMovementVelocity; // 0x284
	bool bIsAiming; // 0x290
	float PreviewWeaponSpread; // 0x294
	TArray<FTigerWeaponCrosshairSlot> CrosshairImages; // 0x298
	TArray<FTigerWeaponScalingCrosshairSlot> CrosshairScalingImages; // 0x2a8
};

struct UDistributionFloat {
	char bCanBeBaked : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UAkRoomComponent {
	char bEnable : 1; // 0x218
	bool bDynamic; // 0x21c
	float Priority; // 0x220
	float WallOcclusion; // 0x224
	float AuxSendLevel; // 0x228
	bool AutoPost; // 0x22c
	UAkAcousticTextureSetComponent* GeometryComponent; // 0x238
};

struct UTigerTeamViewUI {
	TArray<ATigerPlayerState*> OtherGroupMembers; // 0x280
	UTigerPreMatchPaperDollComponent* PreMatchPaperDollComp; // 0x290
	FString PreHighlightTag; // 0x298
	TArray<FName> GroupMemberPaperDollTags; // 0x2a8
};

struct AAudioVolume {
	float Priority; // 0x260
	char bEnabled : 1; // 0x264
	FReverbSettings Settings; // 0x268
	FInteriorSettings AmbientZoneSettings; // 0x288
	TArray<FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x2b0
	TArray<FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x2c0
};

struct ULeaderboardFlushCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UNetDriver {
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

struct UTigerIngameSubmenuWidget {
	FText MenuName; // 0x290
	UTigerIngameMenuWidget* MenuContainer; // 0x2a8
	bool InGameMenuEnabled; // 0x2b0
	ETigerNewNotificationMenuOptions NewNotificationMenuOption; // 0x2b1
};

struct UParticleModuleVectorFieldRotation {
	FVector MinInitialRotation; // 0x30
	FVector MaxInitialRotation; // 0x3c
};

struct UPhysicalAnimationComponent {
	float StrengthMultiplyer; // 0xb0
	USkeletalMeshComponent* SkeletalMeshComponent; // 0xb8
};

struct UTigerQueueForLogin {
	FMulticastInlineDelegate ReadyForLogin; // 0x30
	FMulticastInlineDelegate WaitTimeUpdated; // 0x40
	FMulticastInlineDelegate Error; // 0x50
	UTigerLoginQueueService* LoginQueueService; // 0x68
};

struct UGenlockedTimecodeProvider {
	bool bUseGenlockToCount; // 0x30
};

struct UTBP_UI_PingResponse_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* InAnimation; // 0x268
	UImage* WrapperImage; // 0x270
	FMulticastInlineDelegate OnAnimationDone; // 0x278
	bool bIsShown; // 0x288
};

struct UMovieSceneLevelVisibilityTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UMaterialExpressionRound {
	FExpressionInput Input; // 0x40
};

struct UShadowMapTexture2D {
	EShadowMapFlags ShadowmapFlags; // 0x110
};

struct USoundCue {
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

struct UTigerHighTierLootGroup {
	FLinearColor TextColor; // 0x28
};

struct UTigerNosferatuPassiveBestialLogic {
	TMap<int32_t, FTigerTrackedPlayerData> RevealedPlayers; // 0x158
	UTigerNosferatuPassiveBestialConfig* Config; // 0x1a8
};

struct UNetworkSettings {
	char bVerifyPeer : 1; // 0x38
	char bEnableMultiplayerWorldOriginRebasing : 1; // 0x38
	int32_t MaxRepArraySize; // 0x3c
	int32_t MaxRepArrayMemory; // 0x40
	TArray<FNetworkEmulationProfileDescription> NetworkEmulationProfiles; // 0x48
};

struct UVariantObjectBinding {
	FString CachedActorLabel; // 0x28
	FSoftObjectPath ObjectPtr; // 0x38
	LazyObjectProperty LazyObjectPtr; // 0x50
	TArray<UPropertyValue*> CapturedProperties; // 0x70
	TArray<FFunctionCaller> FunctionCallers; // 0x80
};

struct UABP_VMP_NOS_F_HAIR_01_Skeleton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_18; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_17; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0xba0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3ec0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x4300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x4740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4b80
};

struct USynthComponentMoto {
	UMotoSynthPreset* MotoSynthPreset; // 0x6c0
	float RPM; // 0x6c8
};

struct UBorder {
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

struct UPaperFlipbook {
	float FramesPerSecond; // 0x28
	TArray<FPaperFlipbookKeyFrame> KeyFrames; // 0x30
	UMaterialInterface* DefaultMaterial; // 0x40
	EFlipbookCollisionMode CollisionSource; // 0x48
};

struct UTigerCameraPreset {
	float FOV; // 0x28
	float SpringArmLength; // 0x2c
	FVector CameraOffset; // 0x30
	FVector TargetOffset; // 0x3c
	UCurveFloat* TransitionCurveIn; // 0x48
	UCurveFloat* TransitionCurveOutOverride; // 0x50
	UCurveFloat* RotatePawnTransition; // 0x58
	float SidewaysCameraMirrorTime; // 0x60
	FVector CameraLagSpeed; // 0x64
	FVector CameraLagMaxDistance; // 0x70
	float CameraRotationLagSpeed; // 0x7c
	float CameraSensitivityModifier; // 0x80
	bool bUseCameraSensitivtyModifierDuringFade; // 0x84
	UTigerCameraBehavior* CameraBehavior; // 0x88
	UMatineeCameraShake* CameraShakeBehaviour; // 0x90
	bool bShortenSpringArmWhenLookingUp; // 0x98
	float ViewPitchMax; // 0x9c
	float ArmLengthInterpSpeed; // 0xa0
};

struct UMovieSceneEventTriggerSection {
	FMovieSceneEventChannel EventChannel; // 0xf0
};

struct UAISense_Prediction {
	TArray<FAIPredictionEvent> RegisteredEvents; // 0x80
};

struct UTigerIngameMenuWidget {
	TArray<UTigerIngameSubmenuWidget*> SubmenuClasses; // 0x290
	TArray<UTigerIngameSubmenuWidget*> SubmenuWidgets; // 0x2a0
	int32_t ActiveMenuIndex; // 0x2b0
	UTigerIngameSubmenuWidget* SelectedMenu; // 0x2b8
	bool bShouldShowPlayerCurrency; // 0x2c0
};

struct UABP_VMP_BRU_M_HAIR_11_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_19; // 0x300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_18; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_17; // 0xb80
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xfc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x1860
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x20e0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2520
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x3ec0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x4300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x4740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x4b80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4fc0
};

struct UParticleModuleBeamNoise {
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

struct UParticleModuleRequired {
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
	EParticleResolutionMode RenderResolution; // 0xd1
	ESubUVBoundingVertexCount BoundingMode; // 0xd2
	char bDurationRecalcEachLoop : 1; // 0xd3
	FVector NormalsSphereCenter; // 0xd4
	float AlphaThreshold; // 0xe0
	int32_t EmitterLoops; // 0xe4
	UTexture2D* CutoutTexture; // 0xe8
	int32_t MaxDrawCount; // 0xf0
	float EmitterDurationLow; // 0xf4
	FVector NormalsCylinderDirection; // 0xf8
	TArray<FName> NamedMaterialOverrides; // 0x108
};

struct UMovieSceneCameraShakeSourceTriggerSection {
	FMovieSceneCameraShakeSourceTriggerChannel Channel; // 0xe8
};

struct UInvalidationBox {
	bool bCanCache; // 0x120
	bool CacheRelativeTransforms; // 0x121
};

struct UTigerAnimNotifyState_HideWeapon {
	ETigerTriggerUpdateWpnAppearance WeaponAppearanceUpdate; // 0x30
};

struct UTigerCharacterSkinToneCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
	FLinearColor LightColor; // 0x148
	float LightIntensity; // 0x158
};

struct UMediaPlayer {
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

struct ATigerKindredCharmEffectActor {
	float KindredCharmPercent; // 0x228
};

struct UTigerGrimoireCategory {
	FText Title; // 0x30
	FText Description; // 0x48
	UDataTable* Entries; // 0x60
	TArray<UTigerGrimoireCategory*> SubCategories; // 0x68
	UTigerGrimoireCategory* ParentCategory; // 0x78
	bool bHideCategory; // 0x80
	ETigerNewNotificationMenuOptions NewNotificationCategory; // 0x81
	TSoftObjectPtr<UTexture> BackfaceTextureDMNR; // 0x88
	float DefaultOrderValue; // 0xb0
};

struct UCompressedImageSequenceProtocol {
	int32_t CompressionQuality; // 0xd8
};

struct UInterpTrackInstVectorProp {
	FVector ResetVector; // 0x58
};

struct UTigerBuildingWallPreset {
	TArray<TSoftObjectPtr<UStaticMesh>> Meshes; // 0x28
};

struct ATigerLaceratingThrowProjectile {
	UTigerLaceratingThrowConfig* ConfigType; // 0x228
	FVector TargetLocation; // 0x230
	FTimerHandle ArrivalTimerHandle; // 0x240
	bool bIsMoving; // 0x248
	int32_t rank; // 0x24c
	bool bTargetIsOnWall; // 0x25c
};

struct USharkAccounts {
	UShAccountSettings* Settings; // 0x90
};

struct UABP_VMP_BRU_M_HAIR_12_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2f8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x320
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xbc0
};

struct UGeometryCacheCodecBase {
	TArray<int32_t> TopologyRanges; // 0x28
};

struct UTigerAiCalculateFiringLocationsScoreService {
	FBlackboardKeySelector TargetKey; // 0x70
	bool bDebugDrawLocations; // 0x98
	bool bDebugDrawSweepChecks; // 0x99
	bool bDebugDrawInvalidLocationReason; // 0x9a
};

struct UGameplayTask_WaitDelay {
	FMulticastInlineDelegate OnFinish; // 0x68
};

struct UARSaveWorldAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UTBP_UI_LoginSection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTBP_UI_Button_CTA_C* Button_CTA_SignIn; // 0x268
	UTBP_UI_AdvancedTextBox_C* EmailTextBoxLogin; // 0x270
	UTBP_UI_AdvancedTextBox_C* PasswordTextBoxLogin; // 0x278
	UTigerStyledRichTextBlock* SignInText; // 0x280
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x288
	UTBP_UI_Divider_C* TBP_UI_Divider_5; // 0x290
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_SignIn; // 0x298
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Login; // 0x2a0
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_LoginEmail; // 0x2a8
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_LoginPassword; // 0x2b0
	UTBP_UI_TextButton_C* TBP_UI_TextButton_CreateAnAccount; // 0x2b8
	UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x2c0
	UTBP_UI_TextButton_C* TBP_UI_TextButton_LostPassword; // 0x2c8
	FMulticastInlineDelegate CreateAccount; // 0x2d0
	FMulticastInlineDelegate SignIn; // 0x2e0
	FMulticastInlineDelegate ExitGame; // 0x2f0
	FMulticastInlineDelegate RecoverPassword; // 0x300
	bool bEmailEnteredCorrectly; // 0x310
	bool bPasswordEnteredCorrectly; // 0x311
	UTBP_UI_LoginScreen_C* LoginScreen; // 0x318
};

struct USubmixEffectDelayPreset {
	FSubmixEffectDelaySettings Settings; // 0x9c
	FSubmixEffectDelaySettings DynamicSettings; // 0xa8
};

struct USoundfieldEndpointSubmix {
	FName SoundfieldEndpointType; // 0x38
	UAudioEndpointSettingsBase* EndpointSettingsClass; // 0x40
	USoundfieldEndpointSettingsBase* EndpointSettings; // 0x48
	USoundfieldEncodingSettingsBase* EncodingSettingsClass; // 0x50
	USoundfieldEncodingSettingsBase* EncodingSettings; // 0x58
	TArray<USoundfieldEffectBase*> SoundfieldEffectChain; // 0x60
};

struct UPacketHandlerProfileConfig {
	TArray<FString> Components; // 0x28
};

struct UMagicLeapARPinSettings {
	float UpdateCheckFrequency; // 0x28
	FMagicLeapARPinState OnUpdatedEventTriggerDelta; // 0x2c
};

struct UScaleBoxSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UTigerNPCFacePoseMap {
	TArray<FTigerFacePoseData> HeadMeshsPoseAssets; // 0x28
};

struct UGameInstance {
	TArray<ULocalPlayer*> LocalPlayers; // 0x38
	UOnlineSession* OnlineSession; // 0x48
	TArray<UObject*> ReferencedObjects; // 0x50
	FMulticastInlineDelegate OnPawnControllerChangedDelegates; // 0x78
};

struct UTigerCollectibleSystemSettings {
	TSoftObjectPtr<UDataTable> CollectiblesTable; // 0x38
};

struct UTigerMeleeWeaponComponent {
	FMulticastInlineDelegate OnAttack; // 0xb0
	FMulticastInlineDelegate OnQuickAttack; // 0xc0
	FMulticastInlineDelegate OnAttackHit; // 0xd0
	FMulticastInlineDelegate OnSuccessfulBlock; // 0xf0
	FMulticastInlineDelegate OnHeavyAttackChargeBegin; // 0x100
	FMulticastInlineDelegate OnHeavyAttackChargeEnd; // 0x110
	float DebugDrawTime; // 0x120
	UTigerSwingCollisionData* SwingCollisionData; // 0x148
	FMulticastInlineDelegate OnHeavyAttackReachedMinimumCharge; // 0x150
	FMulticastInlineDelegate OnMeleeWeaponEquipped; // 0x160
	bool bHeavyAttackEnabled; // 0x170
	bool bBlockingEnabled; // 0x171
	bool bAttackingViaQuickAttackEnabled; // 0x172
	FTigerMeleeWeaponAttackIdentifier CurrentAttackIdentifier; // 0x173
	UDataTable* MeleeAttacksDatabase; // 0x180
	UTigerMeleeWeapon* EquippedWeaponType; // 0x188
	UTigerMeleeAimAssistBehavior* CurrentAimAssistBehavior; // 0x190
	float BlockCooldown; // 0x198
	float MaxBlockAttackAngle; // 0x19c
	float AttackQueueCooldown; // 0x1a0
	float AirAttackRequiredDistanceToGround; // 0x1a4
	float HitEffectRadiusOffset; // 0x1a8
	float HitEffectHeightOffset; // 0x1ac
	float RootMotionAnimationHeightThreshold; // 0x1b0
	UTigerBuff* BlockBuffOnAttacker; // 0x1b8
	float DiminishingReturnCooldown; // 0x1c0
	float DiminishingReturnMultiplierRegenerationRate; // 0x1c4
	bool bCanMoveDuringMeleeAttacks; // 0x200
	TArray<ATigerCharacter*> HitFeedbackTargets; // 0x210
	TArray<AActor*> HitCharactersOnCurrentSwing; // 0x288
	TArray<AActor*> HitWorldStaticsOnCurrentSwing; // 0x298
	UAnimMontage* CurrentSwingAnimation; // 0x2b0
	AActor* LockOnTarget; // 0x2b8
	float MaxLockOnDistance; // 0x2c0
};

struct ACameraActor {
	EAutoReceiveInput AutoActivateForPlayer; // 0x228
	UCameraComponent* CameraComponent; // 0x230
	USceneComponent* SceneComponent; // 0x238
	char bConstrainAspectRatio : 1; // 0x248
	float AspectRatio; // 0x24c
	float FOVAngle; // 0x250
	float PostProcessBlendWeight; // 0x254
	FPostProcessSettings PostProcessSettings; // 0x260
};

struct UGrimoireCardMaterialPreset {
	float Roughness; // 0x30
	float Damage; // 0x34
	float ExtraDamage; // 0x38
	float ExtraDamageOnEdges; // 0x3c
	FVector ExtraDamageMoveScale; // 0x40
	FVector BorderRoughnessSpecularity; // 0x4c
	float BorderAmount; // 0x58
	FColor BorderColor; // 0x5c
	float BorderRaisedAmount; // 0x60
	FVector BorderRoughnessSpecularityMetalic; // 0x64
	FVector DirtMaps; // 0x70
	FColor DirtColor; // 0x7c
	FVector DirtMoveXYScale; // 0x80
	float DirtHardness; // 0x8c
};

struct UNiagaraPreviewAxis_InterpParamInt32 {
	int32_t Min; // 0x38
	int32_t Max; // 0x3c
};

struct UAREnvironmentCaptureProbe {
	FVector Extent; // 0xf8
	UAREnvironmentCaptureProbeTexture* EnvironmentCaptureTexture; // 0x108
};

struct UTigerAnimNotifyState_OverrideCanInteractInDodge {
	UTigerMeleeWeapon* RequiredWeapon; // 0x30
};

struct URotatingMovementComponent {
	FRotator RotationRate; // 0xf0
	FVector PivotTranslation; // 0xfc
	char bRotationInLocalSpace : 1; // 0x108
};

struct UChaosGameplayEventDispatcher {
	TMap<UPrimitiveComponent*, FChaosHandlerSet> CollisionEventRegistrations; // 0x1c8
	TMap<UPrimitiveComponent*, FBreakEventCallbackWrapper> BreakEventRegistrations; // 0x218
};

struct UTBP_ContextualHelp_Tutorial_SwapWeapons_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct ATBP_Trap_Aim_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	USpotLightComponent* TrapLightTop; // 0x230
	UStaticMeshComponent* StaticMesh; // 0x238
	USceneComponent* DefaultSceneRoot; // 0x240
};

struct UTBP_RejuvenatingVoice_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x138
	float HealRadius; // 0x140
};

struct UTBP_UI_Crosshair_SingleLong_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UTigerAiSquadFormationService {
	FBlackboardKeySelector FormationLocationKey; // 0x70
	bool bDebugDraw; // 0x98
};

struct UPawnMovementComponent {
	APawn* PawnOwner; // 0x130
};

struct UParticleLODLevel {
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

struct UInterpTrackInstParticleReplay {
	float LastUpdatePosition; // 0x28
};

struct UTBP_UI_TailorStore_Marker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCanvasPanel* CanvasPanel_2; // 0x2c0
	UImage* JudgeMarkerImage; // 0x2c8
};

struct UFoliageType_Actor {
	AActor* ActorClass; // 0x3a8
	bool bShouldAttachToBaseComponent; // 0x3b0
};

struct UTBP_RangedWeapon_Shotgun_Master_C {
	FVector SpreadOfCurrentShot_1; // 0x204
	int32_t ShotIndex; // 0x210
};

struct UMaterialExpressionBlackBody {
	FExpressionInput Temp; // 0x40
};

struct UTBP_UI_AssaultCrosshair_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UInputKeySelector {
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

struct UARPin {
	UARTrackedGeometry* TrackedGeometry; // 0x28
	USceneComponent* PinnedComponent; // 0x30
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	FMulticastInlineDelegate OnARTrackingStateChanged; // 0xc0
	FMulticastInlineDelegate OnARTransformUpdated; // 0xd0
};

struct UParticleModuleCameraOffset {
	FRawDistributionFloat CameraOffset; // 0x30
	char bSpawnTimeOnly : 1; // 0x60
	EParticleCameraOffsetUpdateMethod UpdateMethod; // 0x64
};

struct UTigerAiReportNewThreatTask {
	FBlackboardKeySelector PlayerToReportKey; // 0x70
};

struct UAnimationSharingManager {
	TArray<USkeleton*> Skeletons; // 0x28
	TArray<UAnimSharingInstance*> PerSkeletonData; // 0x38
};

struct UTigerAiPlayerCombatService {
	TMap<ETigerWeaponType, FWeaponDistanceDesc> WeaponRanges; // 0x70
	ATigerLocalAIController* LocalAIController; // 0xc0
	AActor* CurrentLureTarget; // 0xc8
};

struct UTBP_FlowBoot_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x80
	UTBP_UI_FirstTimeArchetypeSelection_C* FirstTimeArchetypeSelectionUI; // 0x88
	bool bIsFirstBlackScreenLaunch; // 0x90
	UTBP_UI_TitleScreen_C* TitleScreenUI; // 0x98
	UObject* ElysiumRef; // 0xa0
	UTBP_UI_InvalidGameClient_C* InvalidClientUI; // 0xa8
	UTigerPsoCacheUI* PsoCacheUI; // 0xb0
};

struct UUdpMessagingSettings {
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

struct UProceduralMeshComponent {
	bool bUseComplexAsSimpleCollision; // 0x480
	bool bUseAsyncCooking; // 0x481
	UBodySetup* ProcMeshBodySetup; // 0x488
	TArray<FProcMeshSection> ProcMeshSections; // 0x490
	TArray<FKConvexElem> CollisionConvexElems; // 0x4a0
	FBoxSphereBounds LocalBounds; // 0x4b0
	TArray<UBodySetup*> AsyncBodySetupQueue; // 0x4d0
};

struct UTigerPersistentPlayerState {
	FMulticastInlineDelegate OnDailyChallengesInitializedEvent; // 0xd8
	FMulticastInlineDelegate OnRewardsLoaded; // 0xe8
	FMulticastInlineDelegate OnClientTransactionalPlayerDataChangedEvent; // 0xf8
	FMulticastInlineDelegate OnClientPlayerInventoryChanged; // 0x108
	FMulticastInlineDelegate OnSelectedCharacterChanged; // 0x118
	FMulticastInlineDelegate OnChallengeProgressUpdated; // 0x128
	FMulticastInlineDelegate OnSeasonLevelGained; // 0x180
	UTigerThrallSystem* PlayerThrallSystem; // 0x190
	UTigerCollectibleSystem* PlayerCollectibleSystem; // 0x198
	UObject* ServerCallbacks; // 0x1b0
	FSharkUserId SharkmobUserId; // 0x1d8
	FTigerPersistentPlayerID PersistentPlayerID; // 0x1e8
	EShAccountChannel AccountChannel; // 0x1f8
	TArray<FTigerPersistentPlayerCharacter> CachedPlayerCharacters; // 0x350
	TMap<FString, UTigerQuestline*> ActiveQuests; // 0x360
	TMap<FString, UTigerQuestline*> CompletedQuests; // 0x3b0
	TMap<FTigerChallengeTypeID, UTigerChallenge*> DailyChallenges; // 0x4b0
	TMap<FTigerChallengeInstanceID, UTigerChallenge*> SeasonalChallenges; // 0x500
	TMap<FTigerChallengeInstanceID, int32_t> PendingWeeklyChallengeUpdates; // 0x550
	TMap<FTigerChallengeInstanceID, UTigerChallenge*> MasteryChallenges; // 0x5a0
};

struct UMaterialExpressionFloor {
	FExpressionInput Input; // 0x40
};

struct UTBP_UI_RegistrationSection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTBP_UI_Button_CTA_C* Button_CTA_RegisterButton; // 0x268
	UVerticalBox* CountrySpecificExtras; // 0x270
	UTigerStyledRichTextBlock* DateofBirth_Text; // 0x278
	UTBP_UI_AdvancedTextBox_C* EmailBoxRegistration; // 0x280
	UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox1; // 0x288
	UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox2; // 0x290
	UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox3; // 0x298
	UTBP_UI_CheckboxWithClickabelText_C* KoreaCheckbox4; // 0x2a0
	UTBP_UI_AdvancedTextBox_C* PasswordBoxRegistration; // 0x2a8
	UTigerStyledRichTextBlock* Regitster_Text; // 0x2b0
	UTBP_UI_AdvancedTextBox_C* RepeatPasswordBoxRegistration; // 0x2b8
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2c0
	UTBP_UI_Divider_C* TBP_UI_Divider_6; // 0x2c8
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Email; // 0x2d0
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Registration; // 0x2d8
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Username; // 0x2e0
	UTBP_UI_CheckboxWithClickabelText_C* TBP_UI_Registration_Checkbox_Newsletter; // 0x2e8
	UTBP_UI_CheckboxWithClickabelText_C* TBP_UI_Registration_Checkbox_PrivacyPolicy; // 0x2f0
	UTBP_UI_CheckboxWithClickabelText_C* TBP_UI_Registration_Checkbox_TermsOfService; // 0x2f8
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Agreement; // 0x300
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Country; // 0x308
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Date; // 0x310
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_EmailRegistration; // 0x318
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_2; // 0x320
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_3; // 0x328
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_4; // 0x330
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_KoreaExtras_5; // 0x338
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_PasswordRegistration; // 0x340
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Register; // 0x348
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_UsernameRegistration; // 0x350
	UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Country; // 0x358
	UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Day; // 0x360
	UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Month; // 0x368
	UTBP_UI_StyledComboBox_C* TBP_UI_StyledComboBox_Year; // 0x370
	UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x378
	UTBP_UI_TextButton_C* TBP_UI_TextButton_SignIn; // 0x380
	UTBP_UI_TOS_PP_Popup_C* TBP_UI_TOS_PP_Popup; // 0x388
	UTBP_UI_AdvancedTextBox_C* UsernameBoxRegistration; // 0x390
	FMulticastInlineDelegate CreateAccount; // 0x398
	FMulticastInlineDelegate Back; // 0x3a8
	bool bYearSelected; // 0x3b8
	bool bMonthSelected; // 0x3b9
	bool bCountrySelected; // 0x3ba
	bool bDaySelected; // 0x3bb
	TArray<FText> Countries; // 0x3c0
	int32_t RegionId; // 0x3d0
	FText EmailUserChangeRevision; // 0x3d8
	FText UsernameUserChangeRevision; // 0x3f0
	bool bUsernameAvailable; // 0x408
	bool bEmailAvailable; // 0x409
	bool bPasswordEnteredCorrectly; // 0x40a
	bool bDateEnteredCorrectly; // 0x40b
	TMap<FString, bool> CachedEmailResponses; // 0x410
	TMap<FString, bool> CachedUsernameResponses; // 0x460
	UTBP_UI_LoginScreen_C* LoginScreen; // 0x4b0
	TMap<FString, int32_t> CountryDropDownKeyIndices; // 0x4b8
	int32_t CurrentKeyIndex; // 0x508
	FMulticastInlineDelegate ExitGame; // 0x510
	bool bTermsOfServiceAccepted; // 0x520
	bool bPrivacyPolicyAccepted; // 0x521
	bool bNewsletterAccepted; // 0x522
	bool bKoreaCheckbox1Accepted; // 0x523
	bool bKoreaCheckbox2Accepted; // 0x524
	bool bKoreaCheckbox3Accepted; // 0x525
	bool bKoreaCheckbox4Accepted; // 0x526
	FString Subheader_TextFormatting; // 0x528
	FString Subtitle_TextFormatting; // 0x538
	FString UL_TextFormatting; // 0x548
	FString Bold_TextFormating; // 0x558
	FString EL_TextFormatting; // 0x568
	FTimerHandle TimeoutTimerHandle; // 0x578
	bool bCountrySelectedKorea; // 0x580
	TMap<FString, int32_t> CachedUsernameResponsesProfanity; // 0x588
	FTimerHandle UsernameTimeoutTimerHandle; // 0x5d8
};

struct UTBP_UI_TransitionLinesImage_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* ImageWidget; // 0x268
	UTBP_UI_TransitionWidget_C* TransitionWidget; // 0x270
	FSlateBrush Brush; // 0x278
	float AnimationDelay; // 0x300
};

struct UARGeoAnchorComponent {
	FARGeoAnchorUpdatePayload ReplicatedPayload; // 0x280
};

struct UAREnvironmentCaptureProbeTexture {
	EARTextureType TextureType; // 0x140
	float Timestamp; // 0x144
	FGuid ExternalTextureGuid; // 0x148
	FVector2D Size; // 0x158
};

struct UImage {
	FSlateBrush Brush; // 0x108
	FDelegate BrushDelegate; // 0x190
	FLinearColor ColorAndOpacity; // 0x1a0
	FDelegate ColorAndOpacityDelegate; // 0x1b0
	bool bFlipForRightToLeftFlowDirection; // 0x1c0
	FDelegate OnMouseButtonDownEvent; // 0x1c4
};

struct UDatasmithStaticMeshComponentTemplate {
	UStaticMesh* StaticMesh; // 0x30
	TArray<UMaterialInterface*> OverrideMaterials; // 0x38
};

struct UBrushStampIndicator {
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

struct UBlackboardKeyType_NativeEnum {
	FString EnumName; // 0x30
	UEnum* EnumType; // 0x40
};

struct UTigerHorizontalArchetypeSelectorUI {
	UTigerGameInstance* TigerGameInstance; // 0x280
};

struct UTigerPoiMarkerProxy {
	FPointOfInterest PointOfInterest; // 0x68
};

struct UTigerBuffSharkInstance {
	UTigerBuffShark* SharkBuff; // 0x88
	ATigerPlayer* Player; // 0x90
};

struct UForceFeedbackAttenuation {
	FForceFeedbackAttenuationSettings Attenuation; // 0x28
};

struct UTigerBuffThornsInstance {
	UTigerBuffThorns* ThornsBuff; // 0x98
};

struct UTigerResourceBarUI {
	FMulticastInlineDelegate OnHealthChanged; // 0x280
	ATigerCharacter* TigerCharacterOwner; // 0x290
	TArray<UTigerResourceBarSegmentUI*> HealthBarSegments; // 0x298
	FLinearColor FilledColor; // 0x2a8
	FLinearColor EmptyColor; // 0x2b8
	FLinearColor LockedColor; // 0x2c8
	int32_t NumberOfSegments; // 0x2d8
	bool bShouldShowLostHealth; // 0x2dc
	float LostHealthDelay; // 0x2e0
	float LostHealthBarSpeed; // 0x2e4
	float LostHealthPercentage; // 0x2e8
	bool bShouldShowGainedResources; // 0x2ec
	float GainedResourceDelay; // 0x2f0
	float GainedResourceBarSpeed; // 0x2f4
	float GainedResourcePercentage; // 0x2f8
	float TheoreticalMaxResources; // 0x2fc
	float WidthBetweenSegments; // 0x300
};

struct UMaterialExpressionSaturate {
	FExpressionInput Input; // 0x40
};

struct UTigerWorldMarkerComponent {
	ATigerWorldMarker* WorldMarkerActorType; // 0xb0
	ATigerWorldMarker* WorldMarkerChild; // 0xb8
};

struct UTigerEntityCombatComponent {
	float TimeBeforeAttackingNewPlayer; // 0xb0
	float ClosestAllowedDistanceToBeSprinting; // 0xb4
	float SprintingCooldownDuration; // 0xb8
	float MaxLaserLength; // 0xbc
	float MaxAngleFromOriginalWeapon; // 0xc0
	float LaserInterpolateSpeed; // 0xc4
	float LaserInterpolateRuberbandSpeedMultiplier; // 0xc8
	FName MaterialScaleName; // 0xcc
	FName MaterialFadeLaserName; // 0xd4
	bool bHideLaserDuringReload; // 0xdc
	float NotInCombatFadedLaserLength; // 0xe0
	float ReloadingFadedLaserLength; // 0xe4
	ATigerNPC* NpcOwner; // 0xe8
	UStaticMeshComponent* LaserPointer; // 0x100
	UParticleSystemComponent* LaserPointerOriginGlowParticleSystem; // 0x108
};

struct UTBP_Headgear_Customization_Master_C {
	TMap<ENUM_PiercingNames, bool> VisiblePiercingsFilter; // 0x180
};

struct UTigerGrimoireLandingUi {
	TArray<UTigerGrimoireEntry*> CachedUnlockedEntries; // 0x290
	TArray<UTigerGrimoireEntry*> CachedReadEntries; // 0x2a0
	FTigerSuggestedArticlesData CachedSuggestedArticlesData; // 0x2b0
};

struct AAIController {
	char bStartAILogicOnPossess : 1; // 0x2d8
	char bStopAILogicOnUnposses : 1; // 0x2d8
	char bLOSflag : 1; // 0x2d8
	char bSkipExtraLOSChecks : 1; // 0x2d8
	char bAllowStrafe : 1; // 0x2d8
	char bWantsPlayerState : 1; // 0x2d8
	char bSetControlRotationFromPawnOrientation : 1; // 0x2d8
	UPathFollowingComponent* PathFollowingComponent; // 0x2e0
	UBrainComponent* BrainComponent; // 0x2e8
	UAIPerceptionComponent* PerceptionComponent; // 0x2f0
	UPawnActionsComponent* ActionsComp; // 0x2f8
	UBlackboardComponent* Blackboard; // 0x300
	UGameplayTasksComponent* CachedGameplayTasksComponent; // 0x308
	UNavigationQueryFilter* DefaultNavigationFilterClass; // 0x310
	FMulticastInlineDelegate ReceiveMoveCompleted; // 0x318
};

struct UTigerSpawnMechanicBattleRoyaleRandomStart {
	ATigerWorldMarker* TestSpawnPointsMapMarkerClass; // 0x50
	TArray<FVector2D> GroupSpawnLocations; // 0x58
	TMap<ATigerPlayerState*, FTigerGroupId> FakeGroupIds; // 0xb8
	UTigerGroupCoordinator* GroupCoordinator; // 0x108
	float MinimumDistanceBetweenGroups; // 0x110
	float DistanceBetweenGroupsFalloffLength; // 0x114
};

struct ATigerGrimoireUnlockPickup {
	UStaticMeshComponent* PickupMesh; // 0x280
	UTigerGrimoireEntry* EntryToUnlock; // 0x288
};

struct UMaterialExpressionConstant4Vector {
	FLinearColor Constant; // 0x40
};

struct ATigerAISplinePath {
	FTigerAISplinePathData PathData; // 0x228
};

struct UInterpTrackColorProp {
	FName PropertyName; // 0x90
};

struct UNamedInterfaces {
	TArray<FNamedInterface> NamedInterfaces; // 0x28
	TArray<FNamedInterfaceDef> NamedInterfaceDefs; // 0x38
};

struct UTigerDisciplineTankyCharge {
	TArray<AActor*> PreviouslyHitCharacters; // 0x78
	FVector TargetLocation; // 0x88
};

struct UTigerBuffHealthRegenBaseInstance {
	UTigerBuffHealthRegenBase* HealthRegenBuff; // 0x88
};

struct ATigerEmptyActorWithChild {
	UChildActorComponent* ChildActorComponent; // 0x228
};

struct UAnimComposite {
	FAnimTrack AnimationTrack; // 0xa8
};

struct UInterpTrackInstColorProp {
	FColor ResetColor; // 0x58
};

struct UTigerSHPBCoordinator {
	UTigerNPCAsset* SHPBNPCAsset; // 0xb0
	ATigerSHPBMarker* SHPBWorldMarker; // 0xb8
	FName WaypointKeyName; // 0xc0
	FName WaypointIndexKeyName; // 0xc8
	bool bIsEnabled; // 0xd0
	TArray<ATigerNPC*> ActiveSHPB; // 0xd8
	FTigerSHPBSettings Settings; // 0xe8
	ATigerNPCInstantSpawner* SHPBSpawner; // 0x108
	ATigerMatchGameMode* MatchGameMode; // 0x110
	ATigerMatchGameState* MatchGameState; // 0x118
};

struct UTBP_UI_TextBoxWrapper_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UEditableTextBox* EmailTextBox; // 0x268
	FMulticastInlineDelegate Focus Lost; // 0x270
	FMulticastInlineDelegate Focus Received; // 0x280
	bool PreviousFocus; // 0x290
	FMulticastInlineDelegate Text Settled; // 0x298
	FTimerHandle Text Settle Timer Handle; // 0x2a8
	float Text Settle Time; // 0x2b0
	FEditableTextBoxStyle Default Style; // 0x2b8
	FEditableTextBoxStyle Error Style; // 0xab0
	UEditableTextBox* NewVar_1; // 0x12a8
	FMulticastInlineDelegate Text Changed; // 0x12b0
};

struct ATigerWorldMarker {
	UUserWidget* MarkerClass; // 0x228
	bool bAutoCreateMapMarker; // 0x230
	bool bWaitForMapData; // 0x231
	UTigerMapMarkerProxy* MapMarkerProxy; // 0x238
	USceneComponent* MarkerRoot; // 0x240
};

struct UTBP_UI_CompassObject_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298
	UCanvasPanel* CompassMarker; // 0x2a0
	UImage* CompassMarkerImage; // 0x2a8
	UMaterialInstanceDynamic* CompassMarkerMaterial; // 0x2b0
};

struct UMovieSceneEventSection {
	FNameCurve Events; // 0xe8
	FMovieSceneEventSectionData EventData; // 0x160
};

struct UTigerTransitionWidget {
	float AnimationDelay; // 0x260
	float AnimationSpeed; // 0x264
	FMulticastInlineDelegate OnTransitionStarted; // 0x268
	FMulticastInlineDelegate OnTransitionFinished; // 0x278
	float Progress; // 0x288
	UMaterialInstanceDynamic* EffectMaterialInstance; // 0x290
};

struct UTigerFOTTConfig {
	bool bDebugHitboxVisualization; // 0x160
	bool bDebugWallhitAngle; // 0x161
	FVector HitBoxExtents; // 0x164
	FVector HitBoxOffset; // 0x170
	FText KnockbackDistanceText; // 0x180
	TArray<float> KnockbackDistanceTooltipValues; // 0x198
	FText KnockbackDistanceSuffix; // 0x1a8
	float KnockbackTime; // 0x1c0
	float TimeBeforeRagdollOnDeadNPCs; // 0x1c4
	float RagdollKnockbackForceMultiplier; // 0x1c8
	float KnockbackStunDuration; // 0x1cc
	float KnockbackAngle; // 0x1d0
	float MaxChargeDuration; // 0x1d4
	float AttackDuration; // 0x1d8
	float MaxWallStunAnglePitchDiff; // 0x1dc
	float MaxWallStunAngleYawDiff; // 0x1e0
	float MinimumChargeupTime; // 0x1e4
	float EndOfAttackPercentageSpeedKept; // 0x1e8
	float HitTargetsPercentageSpeedKept; // 0x1ec
	UTigerBuff* SelfbuffWhileCharging; // 0x1f0
	UTigerBuff* TargetKnockedIntoWallBuff; // 0x1f8
	UCurveFloat* TravelDistance; // 0x200
	TArray<UCurveFloat*> KnockbackDistance; // 0x208
	UCurveFloat* FistDamage; // 0x218
	UCurveFloat* TargetWallHitDamage; // 0x220
	UCurveFloat* TargetWallHitStun; // 0x228
	float WallEffectRadius; // 0x230
	float WallEffectStayTime; // 0x234
	float WallEffectFadeTime; // 0x238
	UTigerAnimationSetAsset* ChargeupBlendspaceAnimationSet; // 0x240
	UAnimMontage* TargetKnockbackAnimation; // 0x248
	UCurveFloat* KnockbackAnimationPlayrate; // 0x250
	UAnimMontage* ChargeupAnimation; // 0x258
	UAnimMontage* ChargeupAnimationAir; // 0x260
	float ChargeupAnimationSpeed; // 0x268
	FName FullyChargedSectionName; // 0x26c
	UAnimMontage* AttackerAnimation; // 0x278
	UAnimMontage* AttackerAnimationAir; // 0x280
	float AttackAnimationSpeed; // 0x288
	UAnimMontage* RecoverAnimation; // 0x290
	UAnimMontage* RecoverAnimationAir; // 0x298
	UAnimMontage* WallHitStunAnimation; // 0x2a0
	UAkAudioEvent* WallHitAudioEvent; // 0x2a8
};

struct UWidgetBlueprintGeneratedClass {
	UWidgetTree* WidgetTree; // 0x328
	char bClassRequiresNativeTick : 1; // 0x330
	TArray<FDelegateRuntimeBinding> Bindings; // 0x338
	TArray<UWidgetAnimation*> Animations; // 0x348
	TArray<FName> NamedSlots; // 0x358
};

struct UTigerItemCheatCommandsAsset {
	TMap<FString, UTigerItemAsset*> Commands; // 0x30
};

struct UNiagaraDataInterfaceArrayFloat {
	TArray<float> FloatData; // 0x50
};

struct UClothPhysicalMeshDataBase_Legacy {
	TArray<FVector> Vertices; // 0x28
	TArray<FVector> Normals; // 0x38
	TArray<uint32_t> Indices; // 0x48
	TArray<float> InverseMasses; // 0x58
	TArray<FClothVertBoneData> BoneData; // 0x68
	int32_t NumFixedVerts; // 0x78
	int32_t MaxBoneWeights; // 0x7c
	TArray<uint32_t> SelfCollisionIndices; // 0x80
};

struct UTBP_UI_PingIcon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d8
	UWidgetAnimation* OnPingAnim; // 0x2e0
	UImage* BG_Dot_Border; // 0x2e8
	UImage* BG_Dot_Dark; // 0x2f0
	UOverlay* Icon_Overlay; // 0x2f8
	UImage* IconWidget; // 0x300
	UImage* IconWidget_Animated; // 0x308
	FVector2D ImageSizeMultiplier; // 0x310
};

struct ATigerBuildingSystemWallStreamer {
	TArray<FTigerStreamableBuildingSides> StreamableBuildingParts; // 0x228
	TArray<UStaticMeshComponent*> ComponentsToCreateRenderstateOn; // 0x238
};

struct UTigerPlayerMasqueradeConsequenceHsRevealSyncInstance {
	bool bOnlyVisibleInHeightenedsSenses; // 0x58
	bool bAffectedPlayerIsWithinLocalHsArea; // 0x59
};

struct UBehaviorTreeManager {
	int32_t MaxDebuggerSteps; // 0x28
	TArray<FBehaviorTreeTemplateInfo> LoadedTemplates; // 0x30
	TArray<UBehaviorTreeComponent*> ActiveComponents; // 0x40
};

struct UParticleModuleLocation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UTigerTraversalBaseFiniteState {
	UTigerCharacterMovementComponent* TigerCharacterMovementComponent; // 0x28
	UTigerTraversalStateConfigBase* BaseConfig; // 0x30
	UTigerTraversalFiniteStateMachine* OwningStateMachine; // 0x38
};

struct UTigerUser {
	FString DISPLAYNAME; // 0x28
	FTigerPersistentPlayerID ID; // 0x38
};

struct UMapBuildDataRegistry {
	ELightingBuildQuality LevelLightingQuality; // 0x28
};

struct UTigerSwingCollisionData {
	TMap<FName, FTigerSwingCollisionInfo> SwingCollisionInfos; // 0x30
};

struct UBTService {
	float Interval; // 0x60
	float RandomDeviation; // 0x64
	char bCallTickOnSearchStart : 1; // 0x68
	char bRestartTimerOnEachActivation : 1; // 0x68
};

struct APlanarReflection {
	UPlanarReflectionComponent* PlanarReflectionComponent; // 0x238
	bool bShowPreviewPlane; // 0x240
};

struct UTigerBodyArmorAsset {
	int32_t Durability; // 0x128
	FTigerCharacterStatModification StatChanges; // 0x12c
};

struct UTigerNPCSpawningCoordinator {
	UTigerNPCAsset* JudgeNpcAsset; // 0xb0
	UDataTable* NpcSpawningGroupBudget; // 0xb8
	float JudgeSpawnTime; // 0xc0
	bool bShouldSpawnJudge; // 0xc4
};

struct UTigerPassiveAHuntForPleasure {
	float MinEffectDistance; // 0x118
	float MaxEffectDistance; // 0x11c
};

struct UInteractiveToolManager {
	UInteractiveTool* ActiveLeftTool; // 0x30
	UInteractiveTool* ActiveRightTool; // 0x38
	TMap<FString, UInteractiveToolBuilder*> ToolBuilders; // 0x90
};

struct UABP_VMP_BRU_F_HAIR_10_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xfe0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1420
};

struct UTigerProjectilePoolingSettings {
	bool bUsingProjectilePooling; // 0x38
};

struct UTigerSightConfigAsset {
	TMap<ETigerNPCType, FTigerSightConfigData> SightData; // 0x30
};

struct AAkReverbVolume {
	char bEnabled : 1; // 0x260
	UAkAuxBus* AuxBus; // 0x268
	FString AuxBusName; // 0x270
	float SendLevel; // 0x280
	float FadeRate; // 0x284
	float Priority; // 0x288
	UAkLateReverbComponent* LateReverbComponent; // 0x290
};

struct UTBP_UI_FullScreen_PopUp_Base_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOutAnimation; // 0x268
	UWidgetAnimation* InAnimation; // 0x270
	UTBP_UI_Box_C* InformationWidgetBorder; // 0x278
	UNamedSlot* InformationWidgetSlot; // 0x280
	UCanvasPanel* RootCanvas; // 0x288
	UTBP_UI_Text_C* TitleText; // 0x290
	FText Title; // 0x298
	FMulticastInlineDelegate OnClose; // 0x2b0
	FMulticastInlineDelegate OnFadeOutFinished; // 0x2c0
};

struct USourceEffectEnvelopeFollowerPreset {
	FSourceEffectEnvelopeFollowerSettings Settings; // 0x9c
};

struct USubUVAnimation {
	UTexture2D* SubUVTexture; // 0x28
	int32_t SubImages_Horizontal; // 0x30
	int32_t SubImages_Vertical; // 0x34
	ESubUVBoundingVertexCount BoundingMode; // 0x38
	EOpacitySourceMode OpacitySourceMode; // 0x39
	float AlphaThreshold; // 0x3c
};

struct UTigerMeleeWeaponTrailConfig {
	TArray<FScalarParameterValue> ScalarParameters; // 0x28
	TArray<FVectorParameterValue> VectorParameters; // 0x38
};

struct UParticleModuleLocationSkelVertSurface {
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

struct UShowLoginUICallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTigerSafeZoneSettings {
	FVector2D SafeZoneRelativeScreenSpaceDimensions; // 0x38
	float UIZoneAspectRatio; // 0x40
};

struct ULocalPlayer {
	UGameViewportClient* ViewportClient; // 0x70
	EAspectRatioAxisConstraint AspectRatioAxisConstraint; // 0x94
	APlayerController* PendingLevelPlayerControllerClass; // 0x98
	char bSentSplitJoin : 1; // 0xa0
	int32_t ControllerId; // 0xb8
};

struct UMovieSceneCapture {
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

struct UTigerCharacterCardShapeCustomization {
	TSoftObjectPtr<UTexture2D> CardShapeMask; // 0x110
};

struct USoundConcurrency {
	FSoundConcurrencySettings Concurrency; // 0x28
};

struct UComboBox {
	TArray<UObject*> Items; // 0x108
	FDelegate OnGenerateWidgetEvent; // 0x118
	bool bIsFocusable; // 0x128
};

struct UProjectileMovementComponent {
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

struct ATigerPlayerCameraManager {
	float MinSpringArmLengthWhenLookingUp; // 0x27c0
	float BaseTurnRate; // 0x27c4
	float BaseLookUpRate; // 0x27c8
	UTigerCameraPreset* CameraPresetsAdditive[0x4]; // 0x27d0
	UMatineeCameraShake* AdditiveCameraShakeInstances[0x4]; // 0x27f0
	UMatineeCameraShake* CurrentPresetShakeBehaviour; // 0x2810
	UTigerFullscreenFXManager* FullscreenFXManager; // 0x2818
	UCurveFloat* RecoilResetCurve; // 0x2820
	UCurveFloat* RecoilResetSpeedCurve; // 0x2828
	float TimeBeforeRecoilReset; // 0x2830
	UCurveFloat* VerticalRecoilCurve; // 0x2838
	UCurveFloat* HorizontalRecoilCurve; // 0x2840
	ATigerPlayer* TigerPlayer; // 0x2848
	ATigerBloodVeinPawn* BloodVeinPawn; // 0x2850
	ATigerPlayerController* TigerPlayerController; // 0x2858
	UCurveFloat* DefaultTransitionCurve; // 0x2868
	UTigerCameraPreset* CameraPresetOverride; // 0x2870
	UTigerCameraPreset* CameraPresetIndoorOverride; // 0x2878
	UTigerSpringArmComponent* CurrentSpringArm; // 0x2880
	UTigerCameraBehavior* CurrentCameraBehavior; // 0x2888
	UTigerCameraPreset* PreviousCameraPreset; // 0x2890
	TArray<UTigerCameraBehavior*> CachedCameraBehaviors; // 0x28d0
	TArray<UTigerAdditiveCameraBehavior*> AdditiveCameraBehaviors; // 0x28e0
};

struct UTestMovieSceneSequence {
	UMovieScene* MovieScene; // 0x60
};

struct ATigerBootGameMode {
	ESessionType SessionTraveledFrom; // 0x2c8
	UTigerGameFlowStateMap* GameFlowStateMap; // 0x2d0
	UTigerGameFlowStateMap* BotGameFlowStateMap; // 0x2d8
	UTigerPromotionalUI* PromotionalUiClass; // 0x2e0
	UTigerPromotionalUI* PromotionalUi; // 0x2e8
};

struct UTBP_ContextualHelp_Tutorial_ArchetypePower_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct ATigerRoofSystem {
	USceneComponent* Root; // 0x228
	float Width; // 0x230
	float Depth; // 0x234
};

struct UTigerDisciplineShackles {
	UTigerShacklesConfig* Config; // 0x80
	ADecalActor* ClientAimDecal; // 0x88
};

struct AProceduralFoliageBlockingVolume {
	AProceduralFoliageVolume* ProceduralFoliageVolume; // 0x260
};

struct UTigerFriendInvite {
	FString DISPLAYNAME; // 0x28
	FTigerPersistentPlayerID PlayerId; // 0x38
	FSharkUserId SharkmobUserId; // 0x48
	FString PlatformUserId; // 0x58
};

struct UGizmoConstantFrameAxisSource {
	FVector Origin; // 0x30
	FVector Direction; // 0x3c
	FVector TangentX; // 0x48
	FVector TangentY; // 0x54
};

struct UInterpTrackInstBoolProp {
	bool ResetBool; // 0x60
};

struct UAudioCurveSourceComponent {
	FName CurveSourceBindingName; // 0x868
	float CurveSyncOffset; // 0x870
};

struct ULightmassPrimitiveSettingsObject {
	FLightmassPrimitiveSettings LightmassSettings; // 0x28
};

struct UTigerExperienceEvent {
	int32_t BaseExperienceGain[0x2]; // 0x28
	UTexture2D* EventIcon; // 0x30
	FText Description; // 0x38
};

struct UAkIOSInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkAudioSession AudioSession; // 0x90
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0xa0
	FAkAdvancedInitializationSettings AdvancedSettings; // 0xc8
};

struct UInterpTrackInstVectorMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<FVector> ResetVectors; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackVectorMaterialParam* InstancedTrack; // 0x58
};

struct UParticleModuleLocationEmitterDirect {
	FName EmitterName; // 0x30
};

struct UNiagaraDataInterfaceGrid2DCollectionReader {
	FString EmitterName; // 0xf8
	FString DIName; // 0x108
};

struct UTigerDialogueCondition_MatchStats {
	ETigerSeasonMatchStatType StatType; // 0x30
	ETigerDialogueEqualitySpecifier StatEquality; // 0x31
	int32_t StatValue; // 0x34
};

struct UTigerCustomBlendSpace1DListClan {
	UBlendSpace1D* BlendSpaces[0x4]; // 0x28
};

struct UComboButtonWidgetStyle {
	FComboButtonStyle ComboButtonStyle; // 0x30
};

struct UNavLinkDefinition {
	TArray<FNavigationLink> Links; // 0x28
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x38
};

struct UTigerBuffInstance {
	FTigerBuffReplicatedInstanceData BuffReplicatedInstanceData; // 0x28
	TWeakObjectPtr<ATigerCharacter> OwnerCharacter; // 0x48
	UTigerBuff* Buff; // 0x50
	UParticleSystemComponent* ActiveBuffParticles; // 0x68
	UNiagaraComponent* ActiveNiagaraParticles; // 0x70
	TArray<UNiagaraComponent*> AdditionalActiveNiagaraParticles; // 0x78
};

struct UTBP_LoadingScreen_Simple_C {
	TSoftObjectPtr<UTBP_LoadingToolTip_C> Tooltips; // 0x78
	TSoftObjectPtr<UMaterialInterface> BackgroundMaterial; // 0xa0
};

struct ADatasmithImportedSequencesActor {
	TArray<ULevelSequence*> ImportedSequences; // 0x228
};

struct UTigerCustomSequenceListClanAndGender {
	FTigerPlayerSequenceByClan SequencesByClan[0x2]; // 0x28
};

struct UTigerAiTargetOutOfBounds {
	FBlackboardKeySelector IsTargetOutOfBoundsKey; // 0x68
	FBlackboardKeySelector HasPathToTargetKey; // 0x90
	FBlackboardKeySelector IsPathOutOfBoundsKey; // 0xb8
};

struct UTigerTeleportConfig {
	float TeleportDistance; // 0x160
};

struct UArrowComponent {
	FColor ArrowColor; // 0x450
	float ArrowSize; // 0x454
	float ArrowLength; // 0x458
	float ScreenSize; // 0x45c
	char bIsScreenSizeScaled : 1; // 0x460
	char bTreatAsASprite : 1; // 0x460
};

struct UVehicleAnimInstance {
	UWheeledVehicleMovementComponent* WheeledVehicleMovementComponent; // 0xa40
};

struct UTBP_ContextualHelp_Tutorial_HSense_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UBTDecorator_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x68
};

struct UDataAsset {
	UDataAsset* NativeClass; // 0x28
};

struct UTigerDisciplineBlindingBeauty {
	UTigerBlindingBeautyConfig* Config; // 0x78
	ATigerBlindingBeautyEffectActor* BlueprintActor; // 0x80
};

struct UTigerMasqueradeConsequenceTrailSyncInstance {
	bool bOnlyVisibleInHeightenedsSenses; // 0x58
	bool bAffectedPlayerIsWithinLocalHsArea; // 0x59
};

struct UPlatformGameInstance {
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

struct UEditableTextWidgetStyle {
	FEditableTextStyle EditableTextStyle; // 0x30
};

struct UTextBlockWidgetStyle {
	FTextBlockStyle TextBlockStyle; // 0x30
};

struct UINTLLoginCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UEditableGameplayTagQuery {
	FString UserDescription; // 0x28
	UEditableGameplayTagQueryExpression* RootExpression; // 0x48
	FGameplayTagQuery TagQueryExportText_Helper; // 0x50
};

struct UParticleModuleBeamModifier {
	BeamModifierType ModifierType; // 0x30
	FBeamModifierOptions PositionOptions; // 0x34
	FRawDistributionVector Position; // 0x38
	FBeamModifierOptions TangentOptions; // 0x80
	FRawDistributionVector Tangent; // 0x88
	char bAbsoluteTangent : 1; // 0xd0
	FBeamModifierOptions StrengthOptions; // 0xd4
	FRawDistributionFloat Strength; // 0xd8
};

struct UMaterialExpressionSkyAtmosphereLightIlluminance {
	int32_t LightIndex; // 0x40
	FExpressionInput WorldPosition; // 0x44
};

struct UMaterialExpressionArctangent2 {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct USoundMix {
	char bApplyEQ : 1; // 0x28
	float EQPriority; // 0x2c
	FAudioEQEffect EQSettings; // 0x30
	TArray<FSoundClassAdjuster> SoundClassEffects; // 0x70
	float InitialDelay; // 0x80
	float FadeInTime; // 0x84
	float Duration; // 0x88
	float FadeOutTime; // 0x8c
};

struct UReverbEffect {
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

struct UTigerCharacterBeardColorCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct UParticleModuleTrailSource {
	ETrail2SourceMethod SourceMethod; // 0x30
	FName SourceName; // 0x34
	FRawDistributionFloat SourceStrength; // 0x40
	char bLockSourceStength : 1; // 0x70
	int32_t SourceOffsetCount; // 0x74
	TArray<FVector> SourceOffsetDefaults; // 0x78
	EParticleSourceSelectionMethod SelectionMethod; // 0x88
	char bInheritRotation : 1; // 0x8c
};

struct UTextRenderComponent {
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

struct UInterpFilter {
	FString Caption; // 0x28
};

struct ASpectatorBeaconHost {
	USpectatorBeaconState* State; // 0x250
	bool bLogoutOnSessionTimeout; // 0x2b8
	float SessionTimeoutSecs; // 0x2bc
	float TravelSessionTimeoutSecs; // 0x2c0
};

struct UTigerPassiveEnragedConfig {
	UAnimMontage* ActivationMontage; // 0x118
	ATigerEnragedEffectActor* EffectActor; // 0x120
	float EffectActorDestructionDelay; // 0x128
	UTigerBuff* OnHitBuff; // 0x130
	float DisciplineDamageMultiplier; // 0x138
	float RegenSpeed; // 0x13c
	float RegenDelay; // 0x140
	float HealthPercentThreshold; // 0x144
	bool bUseBaseHealthPercent; // 0x148
	bool bDamageMultiplierOneTimeUse; // 0x149
};

struct ATigerStatisticsGatherer {
	TMap<FString, float> AnimationSequences; // 0x228
	float ProcessingCullDistance; // 0x278
	int32_t MaxComponentProcessingCountPerFrame; // 0x27c
	bool bVisualizeProcessedComponents; // 0x280
};

struct UTigerTraversalStateWallGrindConfig {
	FVector ColliderOffset; // 0x50
	float SphereColliderRadius; // 0x5c
	float WallGrindCancelInputHalfAngle; // 0x60
	float WallGrindCancelInputDelayTime; // 0x64
	float WallGrindVelocityRemapDeadZone; // 0x68
	float WallGrindMaxHorizontalSpeed; // 0x6c
	float WallGrindBufferDistance; // 0x70
	float WallGrindBufferAdjustmentSpeed; // 0x74
	float RequiredSuccessfulSimulationTime; // 0x78
	float MinRequiredAngleBetweenStartingNormalAndPathDir; // 0x7c
	float WallGrindPossibleStartAngleThreshold; // 0x80
	float WallGrindSimulationSharpAngleThreshold; // 0x84
	int8_t NumberofSimulationChecksPerSecond; // 0x88
	UCurveFloat* WallGrindFallVelocitySpeedUp; // 0x90
	UCurveFloat* WallGrindFallVelocitySlowDown; // 0x98
	UCurveFloat* WallGrindStartingHorizontalSpeedMultipler; // 0xa0
	bool bOnlyAdjustFallSpeedWhenFallingTooFast; // 0xa8
	bool bShouldBlockWallGrindingWhenHoldingCancelInput; // 0xa9
	bool bShouldClampHorizontalSpeed; // 0xaa
	bool bWallGrindShouldBufferDistanceToWall; // 0xab
	bool bValidateWallgrindByCheckingPathAverageToWall; // 0xac
	bool bDrawOutWallNormalsUsedInAWallGrind; // 0xad
};

struct UFoliageType {
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

struct UTigerPassiveConfig {
	FText Name; // 0x30
	FText Description; // 0x48
	UTexture2D* Icon; // 0x60
	UMediaSource* PreviewVideo; // 0x68
	UTigerWidget* CustomWidget; // 0x70
	UTigerPassiveComponent* LogicComponent; // 0x78
	FTigerCharacterStatModification PassiveStatChanges; // 0x80
	char PowerIncrease; // 0x110
};

struct UParticleModulePivotOffset {
	FVector2D PivotOffset; // 0x30
};

struct UTigerAIFleeFromThreatService {
	FBox SearchFleeSpotBox; // 0x70
	FBlackboardKeySelector FleePoint; // 0x90
	FBlackboardKeySelector ClosestThreatPosition; // 0xb8
	FBlackboardKeySelector CurrentMasqueradeTarget; // 0xe0
	float KeepFleeingFromSpecificPlayerRadiusSquared; // 0x108
	float BoxCenterDistanceFromNPCPosition; // 0x10c
	bool bShowDebugFeatures; // 0x110
	TWeakObjectPtr<ATigerPlayer> PlayerFleeingFrom; // 0x114
};

struct UABP_VMP_NOS_F_HAIR_02_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xbc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct UTigerAiFindFiringLocation {
	FBlackboardKeySelector TargetKey; // 0x70
	FBlackboardKeySelector FiringLocationKey; // 0x98
	FBlackboardKeySelector FiringLocationIndexKey; // 0xc0
	FBlackboardKeySelector bCanShootKey; // 0xe8
	float ClaimedLocationDuration; // 0x110
	bool bDebugDraw; // 0x114
};

struct UTigerStoreEntryWidget {
	FTigerMetaStoreEntry RepresentedStoreEntry; // 0x280
};

struct UAkInitBankAssetData {
	TArray<FAkPluginInfo> PluginInfos; // 0x78
};

struct UNiagaraDataInterfaceAudioSpectrum {
	int32_t Resolution; // 0x40
	float MinimumFrequency; // 0x44
	float MaximumFrequency; // 0x48
	float NoiseFloorDb; // 0x4c
};

struct UBTDecorator_TagCooldown {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
	bool bActivatesCooldown; // 0x75
};

struct UTigerFearValueAsset {
	TMap<ETigerAIMasqueradeState, float> FearValueThresholds; // 0x30
};

struct UEnvQuery {
	FName QueryName; // 0x30
	TArray<UEnvQueryOption*> Options; // 0x38
};

struct UTigerInteractiveNpcComponent {
	UTigerElysiumNpcNameplateWidget* OverheadWidget; // 0xb0
	UTigerNpcDialogueList* DialogueList; // 0xb8
	float DelayBetweenInteractions; // 0xc0
	UTigerDialogueManager* DialogueManager; // 0xc8
	FText NpcName; // 0xd0
	FText NpcTitle; // 0xe8
	UTexture2D* NpcIcon; // 0x100
	ETigerClan NpcClan; // 0x108
	TWeakObjectPtr<ACameraActor> ConnectedInteractionCamera; // 0x10c
};

struct UTigerPresenceSubsystem {
	FMulticastInlineDelegate OnPlayerPresenceChange; // 0x30
	FMulticastInlineDelegate OnPlayersPresenceChange; // 0x40
	UTigerPresenceService* PresenceService; // 0x50
	int32_t HeartbeatIntervalInSeconds; // 0x58
};

struct UGeometryCacheCodecRaw {
	int32_t DummyProperty; // 0x38
};

struct UTigerAIPlayerFindCivilianTask {
	bool bUseHeightenedSensesSearchRadius; // 0x98
	float CustomSearchSphereRadius; // 0x9c
	bool bDrawSearchSphere; // 0xa0
	float MaxVerticalPositionOffset; // 0xa4
	float RaycastDistance; // 0xa8
	int32_t SearchLowResonanceThreshold; // 0xac
	float SearchLowHealthPercentageThreshold; // 0xb0
};

struct UParticleModuleLifetime {
	FRawDistributionFloat LifeTime; // 0x30
};

struct USourceEffectEQPreset {
	FSourceEffectEQSettings Settings; // 0xa0
};

struct UTigerCharmConfig {
	float Damage; // 0x170
	float BondMaxDistance; // 0x174
	float BackgroundFindTargetInterval; // 0x178
	float BondPlayerDuration; // 0x17c
	float BondNPCDuration; // 0x180
	TArray<UTigerMajestyBuff*> CharmedBuff; // 0x188
	TArray<UTigerBondingBuff*> BondingBuff; // 0x198
	UTigerCharacterEffect* OnHitEffect; // 0x1a8
	UTigerBuff* ThornsBuff; // 0x1b0
	bool bShowDebugInfo; // 0x1b8
	float MaxDistance; // 0x1bc
	float MinDistance; // 0x1c0
	float PlayerTargetMultiplier; // 0x1c4
	UCurveFloat* AimAxisValueCurve; // 0x1c8
	UCurveFloat* DistanceFromUseValueCurve; // 0x1d0
};

struct ULoudnessNRTSettings {
	float AnalysisPeriod; // 0x28
	float MinimumFrequency; // 0x2c
	float MaximumFrequency; // 0x30
	ELoudnessNRTCurveTypeEnum CurveType; // 0x34
	float NoiseFloorDb; // 0x38
};

struct USoundNodeModulator {
	float PitchMin; // 0x48
	float PitchMax; // 0x4c
	float VolumeMin; // 0x50
	float VolumeMax; // 0x54
};

struct UTigerDashConfig {
	FVector HitBoxExtents; // 0x170
	FVector HitBoxOffset; // 0x17c
	float DashDistance; // 0x188
	float DashDuration; // 0x18c
	float Damage; // 0x190
	float DashExitVelocity; // 0x194
	float SurfaceStopThreshold; // 0x198
	UAnimMontage* RecoveryMontage; // 0x1a0
	UAnimMontage* RecoveryMontageInAir; // 0x1a8
	float RecoveryCancelledBlendOut; // 0x1b0
	float RecoveryCancelledBlendOutInAir; // 0x1b4
	UParticleSystem* DashPSTemplate; // 0x1b8
	UAnimMontage* AirDashMontage; // 0x1c0
	float PlayAirAnimAngleToSurfaceThreshold; // 0x1c8
};

struct UNavigationPath {
	FMulticastInlineDelegate PathUpdatedNotifier; // 0x28
	TArray<FVector> PathPoints; // 0x38
	ENavigationOptionFlag RecalculateOnInvalidation; // 0x48
};

struct UTBP_PingBase_C {
	FText PingCancelText; // 0xf0
	UAkAudioEvent* PingVoiceInterested; // 0x108
	UAkAudioEvent* PingVoiceNotInterested; // 0x110
	UAkAudioEvent* PingVoiceCancel; // 0x118
	bool bShouldDisplayCancelNotification; // 0x120
};

struct UBlueprintGeneratedClass {
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

struct UParticleModuleEventReceiverBase {
	EParticleEventType EventGeneratorType; // 0x30
	FName EventName; // 0x34
};

struct AMagicLeapSharedWorldGameMode {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x310
	FMulticastInlineDelegate OnNewLocalDataFromClients; // 0x320
	float PinSelectionConfidenceThreshold; // 0x330
	AMagicLeapSharedWorldPlayerController* ChosenOne; // 0x3d8
};

struct UMeshSimplificationSettings {
	FName MeshReductionModuleName; // 0x38
};

struct URuntimeVirtualTexture {
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

struct ATigerPlayerController {
	FMulticastInlineDelegate OnPersistentPlayerInitialisedEvent; // 0x578
	FMulticastInlineDelegate OnGhostModeSet; // 0x588
	FMulticastInlineDelegate OnBeginPlay; // 0x598
	FMulticastInlineDelegate OnPlayerStateCreated; // 0x5a8
	FMulticastInlineDelegate OnClientDownedEnemyPlayer; // 0x5b8
	FMulticastInlineDelegate OnCancelPsoCaching; // 0x5c8
	ATigerLocalAIController* LocalAIController; // 0x608
	ATigerLocalAIController* LocalAIControllerClass; // 0x610
	ATigerLocalAIControllerBase* GameplayBenchmarkController; // 0x618
	ATigerLocalAIControllerBase* GameplayBenchmarkControllerClass; // 0x620
	UTigerUserInputBinding* UserInputBindings; // 0x640
	FMulticastInlineDelegate OnUseGamepadChanged; // 0x648
	bool bSilentMusic; // 0x658
	int32_t RedGasAkEventID; // 0x65c
	int32_t CloseToRedGasAkEventID; // 0x660
	FMulticastInlineDelegate OnItemPickedUp; // 0x668
	FMulticastInlineDelegate OnInventoryToggle; // 0x678
	FMulticastInlineDelegate OnInitialLevelStreamingCompletedDelegate; // 0x688
	UTigerResurrectComponent* ResurrectComponent; // 0x698
	ATigerClientInteractiveSpawner* ClientSpawner; // 0x6a0
	FTigerPerformanceStates PerformanceStates; // 0x6a8
	ASpectatorPawn* SpectatingClass; // 0x708
	UTigerMapInfoDataAsset* MapInfoAsset; // 0x710
	UUserWidget* PlayerMapMarkerClass; // 0x718
	UTigerUserInputBinding* UserInputSettingsClass; // 0x720
	UUserWidget* RevealedItemMapMarkerWidgetClass; // 0x728
	UUserWidget* RevealedItemCompassObjectWidgetClass; // 0x730
	ATigerWorldMarker* QuestMapMarkerClass; // 0x738
	float ControlRotationSpeedStandingStill; // 0x740
	UCurveFloat* ControlRotationSpeedMovingCurve; // 0x748
	float ControlRotationSpeedMoving; // 0x750
	float MinControlRotationSpeedMoving; // 0x754
	float InstantControlRotationTimeThreshold; // 0x758
	float CycleWeaponsHolsterHoldTime; // 0x75c
	float SprintCancelTimeOnGamepad; // 0x760
	float SprintGamepadInputLimit; // 0x764
	float SprintGamepadInputAngle; // 0x768
	float RandomizedDamageScale; // 0x770
	float MouseScrollWeaponChangeCooldown; // 0x774
	float TigerStuckTriggerZ; // 0x77c
	float ClimbingInputZCutOff; // 0x780
	float MinimumUpwardClimbAngle; // 0x784
	float MaximumSidewaysClimbDeviation; // 0x788
	float ClimbingOverHangZCutOff; // 0x78c
	float ClimbingHalfAngleInputDifferenceAllowed; // 0x790
	bool bOnlyStartClimbIfLookingAtWall; // 0x794
	UAkAudioEvent* TargetDownedAudioEvent; // 0x798
	UAkAudioEvent* PlayerDownedAudioEvent; // 0x7a0
	UAkAudioEvent* GuidingAudioEvent; // 0x7a8
	float GuidingAudioCooldown; // 0x7b0
	UCurveFloat* AimAtEnemyGamepadRotationMultiplierCurve; // 0x7b8
	UCurveFloat* AimAtEnemyGamepadRotationMultiplierCurveAiming; // 0x7c0
	UCurveFloat* GamepadCameraYawStrengthCurve; // 0x7c8
	UCurveFloat* GamepadCameraPitchStrengthCurve; // 0x7d0
	UCurveFloat* GamepadRangedCameraYawStrengthCurve; // 0x7d8
	UCurveFloat* GamepadRangedCameraPitchStrengthCurve; // 0x7e0
	UCurveFloat* GamepadAimingCameraYawStrengthCurve; // 0x7e8
	UCurveFloat* GamepadAimingCameraPitchStrengthCurve; // 0x7f0
	UCurveFloat* GamepadCameraYawAccelerationCurve; // 0x7f8
	UCurveFloat* GamepadCameraPitchAccelerationCurve; // 0x800
	UCurveFloat* GamepadRangedCameraYawAccelerationCurve; // 0x808
	UCurveFloat* GamepadRangedCameraPitchAccelerationCurve; // 0x810
	UCurveFloat* GamepadAimingCameraYawAccelerationCurve; // 0x818
	UCurveFloat* GamepadAimingCameraPitchAccelerationCurve; // 0x820
	float DisciplineWeaponAbilityTriggerWindow; // 0x828
	float HeightenedSensesPadTriggerwindow; // 0x82c
	float ConsumableWheelTriggerWindow; // 0x830
	UForceFeedbackEffect* DamageTakenForceFeedback; // 0x838
	float DamageTakenForceFeedbackCooldown; // 0x840
	UForceFeedbackEffect* DeathForceFeedback; // 0x848
	UForceFeedbackEffect* DownedForceFeedback; // 0x850
	UForceFeedbackEffect* SoftLandingForceFeedback; // 0x858
	UForceFeedbackEffect* HeavyLandingForceFeedback; // 0x860
	ATigerSpectatorPawn* TigerSpectatorPawn; // 0x868
	float HeavyAttackTriggerTime; // 0x870
	float HeavyAttackTriggerTimeGamepad; // 0x874
	ETigerMusicAudioState MusicAudioState; // 0x878
	ETigerBlindedAudioState BlindedAudioState; // 0x879
	ETigerIndoorAudioState IndoorAudioState; // 0x87a
	ETigerMainMenuAudioState MainMenuAudioState; // 0x87b
	ETigerAmbienceAudioState AmbienceAudioState; // 0x87c
	ETigerCombatAudioState CombatAudioState; // 0x87d
	ETigerFeedingAudioState FeedingAudioState; // 0x87e
	float AssaultBorderMusicDistance; // 0x880
	float RedGasLastWaveAssaultBorderMusicDistance; // 0x884
	float RedGasLastStageAssaultBorderMusicDistance; // 0x888
	float AmbientMusicTimer; // 0x88c
	float NoAmbientMusicTimer; // 0x890
	float NoAmbienceMusicTimerInterval; // 0x894
	float AmbientMusicTimerInterval; // 0x898
	TWeakObjectPtr<ATigerPaperDoll> PaperDoll; // 0x89c
	UTigerInteractionControllerComponent* InteractionControllerComponent; // 0x8a8
	UTigerClientSeasonalRewardCollection* ClientSeasonalRewardCollection; // 0x8b0
	UTigerClientChallengesCollection* ClientChallengesCollection; // 0x8b8
	UTigerThrallSystem* ThrallComponent; // 0x8c0
	UTigerCollectibleSystem* CollectibleComponent; // 0x8c8
	UTigerQuestSystem* QuestComponent; // 0x8d0
	UTSSClientComponent* AntiCheatTssComponent; // 0x8d8
	ETigerMusicAudioState OverrideMusicAudioState; // 0x8e0
	UTigerActionBuffer* ActionBufferClass; // 0x8e8
	UTigerActionBuffer* ActionBuffer; // 0x8f0
	ATigerPlayer* TigerPlayerPawn; // 0x908
	ATigerBloodVeinPawn* TigerBloodVeinPawn; // 0x918
	UTigerMapGameData* MapGameData; // 0x928
	UTigerInWorldIconController* InWorldIconController; // 0x930
	UTigerPingControllerComponent* PingControllerComponent; // 0x938
	UTigerContextualHelpComponent* ContextualHelpComponent; // 0x940
	UTigerEmoteControllerComponent* EmoteControllerComponent; // 0x948
	UTigerChatComponent* ChatComponent; // 0x950
	UTigerMapMarkerProxy* PlayerMapMarkerProxy; // 0x9d8
	UInputComponent* GhostInputComponent; // 0x9e8
	UInputComponent* SpectateInputComponent; // 0x9f0
	UInputComponent* HUDInputComponent; // 0x9f8
	ATigerWorldCompositionGrid* StreamingGrid; // 0xa00
	ETigerWeaponSlot PreviouslyEquippedRangedSlot; // 0xa0a
	float MouseSidewaysSprintSafetyAngle; // 0xa4c
	float PitchSensitivityModifier; // 0xa50
	float YawSensitivityModifier; // 0xa54
	float PitchAccelerationDeadZone; // 0xa58
	float YawAccelerationDeadZone; // 0xa5c
	float PitchRangedAccelerationDeadZone; // 0xa60
	float YawRangedAccelerationDeadZone; // 0xa64
	bool bUndoAccelerationInDeadZone; // 0xa68
	TSoftObjectPtr<UTigerNPCCheatCommandsAsset> NPCCheatCommandsAsset; // 0xa70
	UTigerNPCCheatCommandsAsset* NPCCheatCommands; // 0xa98
	TSoftObjectPtr<UTigerItemCheatCommandsAsset> ItemCheatCommandsAsset; // 0xaa0
	UTigerItemCheatCommandsAsset* ItemCheatCommands; // 0xac8
	ATigerNPCInstantSpawner* NpcCheatSpawner; // 0xad0
	UTigerWheelWidget* CurrentWheelWidget; // 0xad8
	UTigerVendorComponent* ElysiumVendorComponent; // 0xae0
	bool bPawnRotatesWithCameraWhileIdle; // 0xb48
	bool bUseTurnInPlace; // 0xb49
	bool bPrintRightGamepadAxis; // 0xb4a
	FText KilledBloodHuntedPlayerText; // 0xb68
	float TimeUntilKeyIsHeld; // 0xb8c
	TArray<TWeakObjectPtr<ATigerSHPBMarker>> DiscoveredSHPBMarkers; // 0xba8
};

struct UButtonWidgetStyle {
	FButtonStyle ButtonStyle; // 0x30
};

struct UBasicOverlays {
	TArray<FOverlayItem> Overlays; // 0x28
};

struct UMaterialExpressionFmod {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UConnectionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTileView {
	float EntryHeight; // 0x368
	float EntryWidth; // 0x36c
	EListItemAlignment TileAlignment; // 0x370
	bool bWrapHorizontalNavigation; // 0x371
};

struct UAnimMontage {
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

struct UBlendSpace {
	EBlendSpaceAxis AxisToScaleAnimation; // 0x148
};

struct UTigerDisciplineConfigBase {
	UTexture2D* UIIcon; // 0x30
	FText DisciplineName; // 0x38
	FText DisciplineDescription; // 0x50
	bool bIsClanAbility; // 0x68
	bool bEnablesGroupMemberHealthBars; // 0x69
	ETigerAIPlayerAction ActivationActionReported; // 0x6a
	UTigerDisciplineBase* DisciplineClass; // 0x70
	ETigerActionAllowed AllowedActions[0xe]; // 0x78
	uint16_t ActionsThatShouldCancelDiscipline; // 0xb0
	bool bShouldAutomaticallyUseCameraPreset; // 0xb2
	UTigerCameraPreset* PreparationCameraPreset; // 0xb8
	UTigerCameraPreset* CameraPreset; // 0xc0
	UTigerCameraPreset* CameraPresetIndoor; // 0xc8
	UTigerWeaponCrosshairWidget* Crosshair; // 0xd0
	UMediaSource* PreviewVideo; // 0xd8
	uint64_t PersistentTelemetryID; // 0xe0
};

struct UTigerLevelComponent {
	FMulticastInlineDelegate OnLevelChangedEvent; // 0xb0
	char LevelCap; // 0xc0
	char CurrentLevel; // 0xc1
	int32_t CurrentExperience; // 0xc4
	TMap<ETigerPlayerEvent, UTigerExperienceEvent*> PlayerEventMappings; // 0xc8
	UCurveFloat* ExperienceCurve; // 0x118
	UCurveFloat* HealthMultiplierCurve; // 0x120
	UCurveFloat* DamageMultiplierCurve; // 0x128
	UCurveFloat* CooldownMultiplierCurve; // 0x130
	bool bShowAllLevelPopupNotifications; // 0x138
	FMulticastInlineDelegate OnExperienceAdded; // 0x140
	ATigerPlayer* Player; // 0x150
};

struct UPawnNoiseEmitterComponent {
	char bAIPerceptionSystemCompatibilityMode : 1; // 0xb0
	FVector LastRemoteNoisePosition; // 0xb4
	float NoiseLifetime; // 0xc0
	float LastRemoteNoiseVolume; // 0xc4
	float LastRemoteNoiseTime; // 0xc8
	float LastLocalNoiseVolume; // 0xcc
	float LastLocalNoiseTime; // 0xd0
};

struct UTigerTelemetryDataDefinitions {
	ETigerPowerKitType ArchetypeDefinitions; // 0x28
	ETigerClan ClanDefinitions; // 0x29
	ETigerTelemetryDamageCauser DamageSourceIdentifiers; // 0x2a
	ETigerTelemetryExpSource ExperienceSources; // 0x2b
	ETigerTelemetryDamageType DamageTypes; // 0x2c
	ETigerDisciplinesEnum Disciplines; // 0x2d
	ETigerTelemetryMatchmackingCancelReason MatchmakingCancelReasons; // 0x2e
	ETigerTelemetryCauseOfPingRemoval CauseOfPingRemoval; // 0x2f
	ETigerTelemetryDeviceType DeviceTypes; // 0x30
	ETigerTelemetryPlatformType PlatformTypes; // 0x31
	ETigerTelemetryMapIds MapIds; // 0x32
	ETigerTelemetryRankedMode RankedModes; // 0x33
	ETigerTelemetryGameplayMode GameplayModes; // 0x34
	ETigerTelemetryChallengeType ChallengeTypes; // 0x35
	ETigerTelemetryItemSourceID TelemetrySourceID; // 0x36
	ETigerTelemetryBattlepassType BattlepassTypes; // 0x37
	ETigerTelemetryHardCurrencyRecieveMethod HardCurrencyReceiveMethod; // 0x38
	ETigerTelemetryNetworkType NetworkTypes; // 0x39
	ETigerTelemetryNetworkIpType NetworkIPType; // 0x3a
	ETigerTelemetryAceRebirthType RebirthType; // 0x3b
	ETigerTelemetryMetaItemSourceType MetaItemSourceType; // 0x3c
	ETigerTelemetryAceDeathType DeathType; // 0x40
};

struct ATigerGameState {
	FMulticastInlineDelegate OnWeatherScenarioChangedEvent; // 0x278
	char bIsFakeMatchmakingDelayActive[0x2]; // 0x288
	FGuid MatchID; // 0x2a8
	TWeakObjectPtr<ATigerHolyIncense> HolyIncense; // 0x2b8
	float SynchronizedTime; // 0x2c4
	UTigerWeatherScenarioData* WeatherScenarioClass; // 0x2d8
	UTigerWeatherScenarioData* WeatherScenario; // 0x2e0
	FString ServerId; // 0x308
	ETigerServerScalabilityTarget CurrentScalabilityTarget; // 0x318
};

struct UTigerAiJudgeSmComponent {
	TArray<ATigerPlayer*> CurrentlyPerceivedPlayersBySight; // 0xb0
	TArray<ATigerPlayer*> BloodhuntedPlayersWithinCombatRadius; // 0xc0
	UTigerJudgeBaseState* StartingState; // 0xd0
	UTigerJudgeBaseState* DownedState; // 0xd8
	UTigerJudgeBaseState* FeedingState; // 0xe0
	UTigerJudgeBaseState* ActiveState; // 0xe8
	TMap<UTigerJudgeBaseState*, UTigerJudgeBaseState*> InstancedStates; // 0xf0
	float CombatRadiusSq; // 0x140
	bool bIsSeeingAnyBloodhuntedPlayer; // 0x144
};

struct UAkAudioEvent {
	TMap<FString, TSoftObjectPtr<UAkAssetPlatformData>> LocalizedPlatformAssetDataMap; // 0x50
	UAkAudioBank* RequiredBank; // 0xa0
	UAkAssetPlatformData* CurrentLocalizedPlatformData; // 0xb0
	float MaxAttenuationRadius; // 0xb8
	bool IsInfinite; // 0xbc
	float MinimumDuration; // 0xc0
	float MaximumDuration; // 0xc4
};

struct UShMidasPaymentSettings {
	FString IdcInfo; // 0x38
	FString OfferId; // 0x48
	FString ZoneId; // 0x58
	FString GoodsZoneId; // 0x68
	FString PaymentChannel; // 0x78
	FString ProvideType; // 0x88
	bool MidasLogEnabled; // 0x98
};

struct UABP_VMP_TOR_F_HAIR_03_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0xbc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3ec0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4300
};

struct UInteractiveGizmoManager {
	TArray<FActiveGizmo> ActiveGizmos; // 0x30
	TMap<FString, UInteractiveGizmoBuilder*> GizmoBuilders; // 0x58
};

struct UDatasmithImportOptions {
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

struct UAkLinuxInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct ATransformGizmoActor {
	UPrimitiveComponent* TranslateX; // 0x228
	UPrimitiveComponent* TranslateY; // 0x230
	UPrimitiveComponent* TranslateZ; // 0x238
	UPrimitiveComponent* TranslateYZ; // 0x240
	UPrimitiveComponent* TranslateXZ; // 0x248
	UPrimitiveComponent* TranslateXY; // 0x250
	UPrimitiveComponent* RotateX; // 0x258
	UPrimitiveComponent* RotateY; // 0x260
	UPrimitiveComponent* RotateZ; // 0x268
	UPrimitiveComponent* UniformScale; // 0x270
	UPrimitiveComponent* AxisScaleX; // 0x278
	UPrimitiveComponent* AxisScaleY; // 0x280
	UPrimitiveComponent* AxisScaleZ; // 0x288
	UPrimitiveComponent* PlaneScaleYZ; // 0x290
	UPrimitiveComponent* PlaneScaleXZ; // 0x298
	UPrimitiveComponent* PlaneScaleXY; // 0x2a0
};

struct UAkGeometryComponent {
	AkMeshType MeshType; // 0x210
	int32_t LOD; // 0x214
	float WeldingThreshold; // 0x218
	TMap<UMaterialInterface*, FAkGeometrySurfaceOverride> StaticMeshSurfaceOverride; // 0x220
	FAkGeometrySurfaceOverride CollisionMeshSurfaceOverride; // 0x270
	char bEnableDiffraction : 1; // 0x288
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x288
	AActor* AssociatedRoom; // 0x290
	FAkGeometryData GeometryData; // 0x2a8
	TMap<int32_t, float> SurfaceAreas; // 0x2f8
};

struct UMovieSceneIntegerSection {
	FMovieSceneIntegerChannel IntegerCurve; // 0xe8
};

struct UInterpTrackLinearColorProp {
	FName PropertyName; // 0x90
};

struct UNodeMappingContainer {
	TMap<FName, FNodeItem> SourceItems; // 0x28
	TMap<FName, FNodeItem> TargetItems; // 0x78
	TMap<FName, FName> SourceToTarget; // 0xc8
	TSoftObjectPtr<UObject> SourceAsset; // 0x118
	TSoftObjectPtr<UObject> TargetAsset; // 0x140
};

struct URendererSettings {
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
	FPerPlatformFloat ScreenSizeCullingDefaultSize; // 0x58
	char bTextureStreaming : 1; // 0x5c
	char bUseDXT5NormalMaps : 1; // 0x5c
	char bVirtualTextures : 1; // 0x5c
	char bVirtualTexturedLightmaps : 1; // 0x5c
	uint32_t VirtualTextureTileSize; // 0x60
	uint32_t VirtualTextureTileBorderSize; // 0x64
	uint32_t VirtualTextureFeedbackFactor; // 0x68
	char bVirtualTextureEnableCompressZlib : 1; // 0x6c
	char bVirtualTextureEnableCompressCrunch : 1; // 0x6c
	char bClearCoatEnableSecondNormal : 1; // 0x6c
	int32_t ReflectionCaptureResolution; // 0x70
	char bReflectionCaptureCompression : 1; // 0x74
	char ReflectionEnvironmentLightmapMixBasedOnRoughness : 1; // 0x74
	char bForwardShading : 1; // 0x74
	char bVertexFoggingForOpaque : 1; // 0x74
	char bAllowStaticLighting : 1; // 0x74
	char bAllowPrecomputedShadows : 1; // 0x74
	char bUseNormalMapsForStaticLighting : 1; // 0x74
	char bGenerateMeshDistanceFields : 1; // 0x74
	char bEightBitMeshDistanceFields : 1; // 0x75
	char bGenerateLandscapeGIData : 1; // 0x75
	char bCompressMeshDistanceFields : 1; // 0x75
	float TessellationAdaptivePixelsPerTriangle; // 0x78
	char bSeparateTranslucency : 1; // 0x7c
	ETranslucentSortPolicy TranslucentSortPolicy; // 0x80
	FVector TranslucentSortAxis; // 0x84
	ECustomDepthStencil CustomDepthStencil; // 0x90
	char bCustomDepthTaaJitter : 1; // 0x94
	EAlphaChannelMode bEnableAlphaChannelInPostProcessing; // 0x98
	char bDefaultFeatureBloom : 1; // 0x9c
	char bDefaultFeatureAmbientOcclusion : 1; // 0x9c
	char bDefaultFeatureAmbientOcclusionStaticFraction : 1; // 0x9c
	char bDefaultFeatureAutoExposure : 1; // 0x9c
	EAutoExposureMethodUI DefaultFeatureAutoExposure; // 0xa0
	float DefaultFeatureAutoExposureBias; // 0xa4
	char bExtendDefaultLuminanceRangeInAutoExposureSettings : 1; // 0xa8
	char bUsePreExposure : 1; // 0xa8
	char bEnablePreExposureOnlyInTheEditor : 1; // 0xa8
	char bDefaultFeatureMotionBlur : 1; // 0xa8
	char bDefaultFeatureLensFlare : 1; // 0xa8
	char bTemporalUpsampling : 1; // 0xa8
	char bSSGI : 1; // 0xa8
	EAntiAliasingMethod DefaultFeatureAntiAliasing; // 0xac
	ELightUnits DefaultLightUnits; // 0xad
	EDefaultBackBufferPixelFormat DefaultBackBufferPixelFormat; // 0xae
	char bRenderUnbuiltPreviewShadowsInGame : 1; // 0xb0
	char bStencilForLODDither : 1; // 0xb0
	EEarlyZPass EarlyZPass; // 0xb4
	char bEarlyZPassOnlyMaterialMasking : 1; // 0xb8
	char bDBuffer : 1; // 0xb8
	EClearSceneOptions ClearSceneMethod; // 0xbc
	char bBasePassOutputsVelocity : 1; // 0xc0
	char bVertexDeformationOutputsVelocity : 1; // 0xc0
	char bSelectiveBasePassOutputs : 1; // 0xc0
	char bDefaultParticleCutouts : 1; // 0xc0
	int32_t GPUSimulationTextureSizeX; // 0xc4
	int32_t GPUSimulationTextureSizeY; // 0xc8
	char bGlobalClipPlane : 1; // 0xcc
	EGBufferFormat GBufferFormat; // 0xd0
	char bUseGPUMorphTargets : 1; // 0xd4
	char bNvidiaAftermathEnabled : 1; // 0xd4
	char bMultiView : 1; // 0xd4
	char bMobilePostProcessing : 1; // 0xd4
	char bMobileMultiView : 1; // 0xd4
	char bMobileUseHWsRGBEncoding : 1; // 0xd4
	char bRoundRobinOcclusion : 1; // 0xd4
	char bODSCapture : 1; // 0xd4
	char bMeshStreaming : 1; // 0xd5
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

struct UMovieSceneBindingOverrides {
	TArray<FMovieSceneBindingOverrideData> BindingData; // 0x28
};

struct UPaperRuntimeSettings {
	bool bEnableSpriteAtlasGroups; // 0x28
	bool bEnableTerrainSplineEditing; // 0x29
	bool bResizeSpriteDataToMatchTextures; // 0x2a
};

struct UTigerCustomBlendSpaceListGender {
	UBlendSpace* BlendSpaces[0x2]; // 0x28
};

struct UTigerWidget {
	UTigerTooltipWidget* TigerTooltipWidget; // 0x268
	TArray<FTigerTooltipAction> TooltipActions; // 0x270
};

struct UTigerDsBackendAgent {
	FString DsAgentType; // 0x28
	float HeartbeatIntervalSeconds; // 0x38
};

struct UTigerGameFlowStateBoot {
	FMulticastInlineDelegate OnLaunchTutorial; // 0x40
	FMulticastInlineDelegate OnEnterElysiumFirstTime; // 0x50
	FMulticastInlineDelegate OnEnterElysium; // 0x60
	FMulticastInlineDelegate OnPreloadingDone; // 0x70
};

struct USlateWidgetStyleAsset {
	USlateWidgetStyleContainerBase* CustomStyle; // 0x28
};

struct UMaterialExpressionBumpOffset {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Height; // 0x54
	FExpressionInput HeightRatioInput; // 0x68
	float HeightRatio; // 0x7c
	float ReferencePlane; // 0x80
	uint32_t ConstCoordinate; // 0x84
};

struct UMediaComponent {
	UMediaTexture* MediaTexture; // 0xb0
	UMediaPlayer* MediaPlayer; // 0xb8
};

struct UTigerRevealItemConsumableAsset {
	float MaxDistanceToItem; // 0x170
};

struct UEditableTextBox {
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

struct UObjectLibrary {
	UObject* ObjectBaseClass; // 0x28
	bool bHasBlueprintClasses; // 0x30
	TArray<UObject*> Objects; // 0x38
	TArray<TWeakObjectPtr<UObject>> WeakObjects; // 0x48
	bool bUseWeakReferences; // 0x58
	bool bIsFullyLoaded; // 0x59
};

struct USourceEffectPhaserPreset {
	FSourceEffectPhaserSettings Settings; // 0xa0
};

struct ATigerMusicVolume {
	UTigerMusicAsset* MusicAsset; // 0x260
};

struct USoundSubmix {
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

struct UAnimSingleNodeInstance {
	UAnimationAsset* CurrentAsset; // 0x2b8
	FDelegate PostEvaluateAnimEvent; // 0x2c0
};

struct UMediaSoundComponent {
	EMediaSoundChannels Channels; // 0x6c0
	bool DynamicRateAdjustment; // 0x6c4
	float RateAdjustmentFactor; // 0x6c8
	FFloatRange RateAdjustmentRange; // 0x6cc
	UMediaPlayer* MediaPlayer; // 0x6e0
};

struct APrecomputedVisibilityOverrideVolume {
	TArray<AActor*> OverrideVisibleActors; // 0x260
	TArray<AActor*> OverrideInvisibleActors; // 0x270
	TArray<FName> OverrideInvisibleLevels; // 0x280
};

struct UListViewBase {
	UUserWidget* EntryWidgetClass; // 0x108
	float WheelScrollMultiplier; // 0x110
	bool bEnableScrollAnimation; // 0x114
	bool bEnableFixedLineOffset; // 0x115
	float FixedLineScrollOffset; // 0x118
	FMulticastInlineDelegate BP_OnEntryGenerated; // 0x120
	FMulticastInlineDelegate BP_OnEntryReleased; // 0x130
	FUserWidgetPool EntryWidgetPool; // 0x140
};

struct UTigerBloodResonanceComponent {
	FMulticastInlineDelegate OnBloodResonanceBlockedByCap; // 0xb0
	float BloodCapIncreasePerEvent[0x1d]; // 0xc0
	FTigerBloodResonanceBuffs BloodResonanceBuffs[0x4]; // 0x138
	int32_t StartingBloodCap; // 0x178
	int32_t BloodTypeCap; // 0x17c
	int32_t MaxBloodCap; // 0x180
	int32_t CurrentBloodCap; // 0x184
	FMulticastInlineDelegate OnBloodCapChanged; // 0x188
	FMulticastInlineDelegate OnBloodResonanceAdded; // 0x198
	TArray<ETigerBloodType> CurrentBloodResonance; // 0x1a8
	int32_t BloodResonanceLevels[0x4]; // 0x1b8
	int32_t OldBloodResonanceLevels[0x4]; // 0x1c8
	float CurrentBloodSlotsIncrease; // 0x1e8
};

struct UUserWidget {
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

struct UChannel {
	UNetConnection* Connection; // 0x28
};

struct ATigerAIController {
	FName LureTargetKeyName; // 0x3b0
	FName CurrentMasqueradeTargetKeyName; // 0x3b8
	FName TargetPositionKeyName; // 0x3c0
	FName MasqueradeBreachTargetKey; // 0x3c8
	FName BehaviorIsActiveKeyName; // 0x3d0
	FName SpawnPointKeyName; // 0x3d8
	FName ActiveCAPKeyName; // 0x3e0
	UBehaviorTree* LureBehaviorTree; // 0x3e8
	UBehaviorTree* BloodDrainedBehaviorTree; // 0x3f0
	UBehaviorTree* EmptyBehaviorTree; // 0x3f8
	UTigerFearValueAsset* FearValueAsset; // 0x400
	float OutOfCombatHealthRegenerationDelay; // 0x408
	float OutOfCombatHealthRegenerationTickInterval; // 0x40c
	float OutOfCombatTickHealthPercentage; // 0x410
	float TimeWhenEnteredBloodDrainedState; // 0x414
	float CheckForPlayerWeaponsInterval; // 0x418
	float CheckForPlayerWeaponsDeviation; // 0x41c
	float BaseThreatRadiusForEquippedRanged; // 0x420
	float BaseThreatRadiusForEquippedMelee; // 0x424
	float FearValue; // 0x428
	float MaxFearValue; // 0x42c
	float MinCrouchDistanceFromPlayer; // 0x430
	float ChanceToFleeWhenEnteringThreatenedState; // 0x434
	UTigerNpcMovementRestrictionBoundsData* MovementRestrictionBoundsData; // 0x468
	UTigerNpcMovementRestrictionBoundsData* TargetMovementRestrictionBoundsData; // 0x470
};

struct UCurveFloat {
	FRichCurve FloatCurve; // 0x30
	bool bIsEventCurve; // 0xb0
};

struct UTouchInterface {
	TArray<FTouchInputControl> Controls; // 0x28
	float ActiveOpacity; // 0x38
	float InactiveOpacity; // 0x3c
	float TimeUntilDeactive; // 0x40
	float TimeUntilReset; // 0x44
	float ActivationDelay; // 0x48
	bool bPreventRecenter; // 0x4c
	float StartupDelay; // 0x50
};

struct UParticleSystem {
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

struct UParticleModuleSizeMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x30
	char MultiplyX : 1; // 0x78
	char MultiplyY : 1; // 0x78
	char MultiplyZ : 1; // 0x78
};

struct UFontImportOptions {
	FFontImportOptionsData Data; // 0x28
};

struct UInterpTrackVectorProp {
	FName PropertyName; // 0x90
};

struct UTigerPreMatchPaperDollComponent {
	TMap<FName, ATigerPaperDoll*> PaperDollByTagNames; // 0xb0
	TMap<ATigerPaperDoll*, FTigerPaperDollHighlightComponents> PaperDollHighlightComponents; // 0x100
};

struct UPhysicsSettingsCore {
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

struct UABP_VMP_NOS_F_HAIR_04_TEMP_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x2d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x710
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xb50
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xb70
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0xb90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0xfd0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x1410
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1850
	FAnimNode_Root AnimGraphNode_Root; // 0x1c90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3a80
};

struct AHUD {
	APlayerController* PlayerOwner; // 0x228
	char bLostFocusPaused : 1; // 0x230
	char bShowHUD : 1; // 0x230
	char bShowDebugInfo : 1; // 0x230
	int32_t CurrentTargetIndex; // 0x234
	char bShowHitBoxDebugInfo : 1; // 0x238
	char bShowOverlays : 1; // 0x238
	char bEnableDebugTextShadow : 1; // 0x238
	TArray<AActor*> PostRenderedActors; // 0x240
	TArray<FName> DebugDisplay; // 0x258
	TArray<FName> ToggledDebugCategories; // 0x268
	UCanvas* Canvas; // 0x278
	UCanvas* DebugCanvas; // 0x280
	TArray<FDebugTextInfo> DebugTextList; // 0x288
	AActor* ShowDebugTargetDesiredClass; // 0x298
	AActor* ShowDebugTargetActor; // 0x2a0
};

struct UMaterialExpressionNormalize {
	FExpressionInput VectorInput; // 0x40
};

struct UMovieScene3DTransformSection {
	FMovieSceneTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x3]; // 0xf8
	FMovieSceneFloatChannel Rotation[0x3]; // 0x2d8
	FMovieSceneFloatChannel Scale[0x3]; // 0x4b8
	FMovieSceneFloatChannel ManualWeight; // 0x698
	bool bUseQuaternionInterpolation; // 0x738
};

struct UTigerConsumablesComponent {
	FMulticastInlineDelegate OnUseConsumableFinished; // 0xb0
	FMulticastInlineDelegate OnUseConsumableStarted; // 0xc0
	FMulticastInlineDelegate OnUseConsumableCancelled; // 0xd0
	FMulticastInlineDelegate OnUseConsumablePrevented; // 0xe0
	UAnimMontage* FallbackUseMontage; // 0xf0
	UTigerConsumableAsset* QuickUseConsumable; // 0xf8
	UTigerBuff* MovableBuffClass; // 0x100
	int32_t CancelConsumableUseOnTraversalAction; // 0x108
	ATigerPlayer* Player; // 0x110
	UAnimMontage* CurrentMontage; // 0x118
	UTigerConsumableAsset* CurrentConsumable; // 0x120
	UTigerConsumableAsset* QuickConsumables[0x6]; // 0x128
};

struct UTigerStyledRichTextBlock {
	FDataTableRowHandle TextStyleRow; // 0x678
};

struct ATigerSupplyDrop {
	UBoxComponent* BoxRoot; // 0x2f0
	FTransform FinalTransform; // 0x300
	UTigerItemLootTable* LootTable; // 0x330
	int32_t MinNumItems; // 0x338
	int32_t MaxNumItems; // 0x33c
	float MaxFallSpeed; // 0x340
};

struct UTBP_UI_Divider_Vertical_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Decoration; // 0x268
	UImage* Left_Line; // 0x270
	UImage* LeftArrow_2; // 0x278
	UImage* Line_2; // 0x280
	UOverlay* Line_Overlay; // 0x288
	UWidgetSwitcher* LineStyleIndex; // 0x290
	UImage* RightArrow_2; // 0x298
	UImage* RightLine; // 0x2a0
	USizeBox* SizeBox_Override; // 0x2a8
	float ArrowSize; // 0x2b0
	bool EnableMiddleDecoration; // 0x2b4
	UTexture2D* ArrowTexture; // 0x2b8
	float LineThickness; // 0x2c0
};

struct UTigerAIUpdateWaypoint {
	FBlackboardKeySelector Index; // 0x70
	FBlackboardKeySelector Waypoint; // 0x98
	FBlackboardKeySelector bWaypointDirectionIsForward; // 0xc0
	float Distance; // 0xe8
};

struct UTigerMasqueradeConsequenceSyncInstance {
	bool bShouldBeActiveForAffectedPlayer; // 0x28
	ATigerPlayerState* AffectedPlayerState; // 0x30
	ATigerPlayerController* LocalPlayerController; // 0x38
};

struct APostProcessVolume {
	FPostProcessSettings Settings; // 0x270
	float Priority; // 0x7c0
	float BlendRadius; // 0x7c4
	float BlendWeight; // 0x7c8
	char bEnabled : 1; // 0x7cc
	char bUnbound : 1; // 0x7cc
};

struct UTigerCharacterCustomizablePreviewThumbnailUI {
	ATigerThumbnailActor* ThumbnailActorType; // 0x280
	bool bIsRealtime; // 0x288
	UMaterialInterface* PostRenderMaterial; // 0x290
	ATigerThumbnailActor* ThumbnailActor; // 0x2d8
	float FOV; // 0x2e0
};

struct UPoseWatch {
	UEdGraphNode* Node; // 0x28
	FColor PoseWatchColour; // 0x30
};

struct ANavigationData {
	UPrimitiveComponent* RenderingComp; // 0x230
	FNavDataConfig NavDataConfig; // 0x238
	char bEnableDrawing : 1; // 0x2b8
	char bForceRebuildOnLoad : 1; // 0x2b8
	char bAutoDestroyWhenNoNavigation : 1; // 0x2b8
	char bCanBeMainNavData : 1; // 0x2b8
	char bCanSpawnOnRebuild : 1; // 0x2b8
	char bRebuildAtRuntime : 1; // 0x2b8
	ERuntimeGenerationType RuntimeGeneration; // 0x2bc
	float ObservedPathsTickInterval; // 0x2c0
	uint32_t DataVersion; // 0x2c4
	TArray<FSupportedAreaData> SupportedAreas; // 0x3d0
};

struct UMaterialExpressionVertexInterpolator {
	FExpressionInput Input; // 0x40
};

struct UTigerVoSubsystem {
	UAkAudioEvent* AudioEvent; // 0x30
	TArray<FTigerVoEvent> VoEvents; // 0xd8
};

struct ATigerWorldCompositionGrid {
	FMulticastInlineDelegate OnCellStartedLoadingEvent; // 0x228
	FMulticastInlineDelegate OnCellFinishedLoadingEvent; // 0x238
	FMulticastInlineDelegate OnCellStartedUnloadingEvent; // 0x248
	FMulticastInlineDelegate OnCellFinishedUnloadingEvent; // 0x258
	FMulticastInlineDelegate OnPrespawnStreamingFinishedEvent; // 0x268
	ETigerWorldCompositionGridLayout Layout; // 0x278
	FVector GridExtent; // 0x27c
	int32_t LevelDepth; // 0x288
	float CellTriggerSizeBias; // 0x28c
	TArray<TSoftObjectPtr<UWorld>> BlackListedLevels; // 0x290
	TArray<TSoftObjectPtr<UWorld>> AdditionalLevels; // 0x2a0
	TArray<TSoftObjectPtr<UWorld>> AlwaysLoadedLevels; // 0x2b0
	UTigerWorldCompositionCellComponent* RootCellComponent; // 0x2c0
	TArray<UTigerWorldCompositionCellComponent*> LoadingCells; // 0x2c8
	TArray<UTigerWorldCompositionCellComponent*> LoadedCells; // 0x2d8
	TArray<UTigerWorldCompositionCellComponent*> UnloadingCells; // 0x2e8
	TArray<FTigerRecentlyStreamedCellEntries> RecentlyLoadedCells; // 0x2f8
	TArray<FTigerRecentlyStreamedCellEntries> RecentlyUnloadedCells; // 0x308
	TArray<FTigerStreamingPlayer> StreamingPlayers; // 0x318
};

struct UMaterialExpressionSign {
	FExpressionInput Input; // 0x40
};

struct UTBP_UI_MatchMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UVerticalBox* LeaveContainer; // 0x298
	UTBP_UI_MenuButton_C* LeaveLeaveButton; // 0x2a0
	UTBP_UI_MenuButton_C* LeaveReturnButton; // 0x2a8
	UTBP_UI_MenuButton_C* LeaveSessionButton; // 0x2b0
	UTBP_UI_MenuButton_C* LeaveTutorialButton; // 0x2b8
	UVerticalBox* LeaveTutorialContainer; // 0x2c0
	UTBP_UI_MenuButton_C* LeaveTutorialLeaveButton; // 0x2c8
	UTBP_UI_MenuButton_C* LeaveTutorialReturnButton; // 0x2d0
	UVerticalBox* MenuContainer; // 0x2d8
	UVerticalBox* QuitContainer; // 0x2e0
	UTBP_UI_MenuButton_C* QuitGameButton; // 0x2e8
	UTBP_UI_MenuButton_C* QuitQuitButton; // 0x2f0
	UTBP_UI_MenuButton_C* QuitReturnButton; // 0x2f8
	UTBP_UI_MenuButton_C* ReturnButton; // 0x300
	UTBP_UI_MenuButton_C* SettingsButton; // 0x308
	UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x310
	UTigerStyledRichTextBlock* TigerStyledRichTextBlock; // 0x318
	UTigerStyledRichTextBlock* TigerStyledRichTextBlock_2; // 0x320
	UTigerStyledRichTextBlock* TigerStyledRichTextBlock_154; // 0x328
	UWidgetSwitcher* WidgetSwitcher_1; // 0x330
	bool ConfirmLeave; // 0x338
	bool ConfirmQuit; // 0x339
	int32_t WaitCount; // 0x33c
	bool bIsOpen; // 0x340
	bool bLeaveParty; // 0x341
};

struct UClothLODDataCommon_Legacy {
	UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData; // 0x28
	FClothPhysicalMeshData ClothPhysicalMeshData; // 0x30
	FClothCollisionData CollisionData; // 0x128
};

struct UTigerEarthshockConfig {
	FText EffectRadiusText; // 0x160
	FText EffectRadiusSuffix; // 0x178
	float SurfaceAngleThreshold; // 0x190
	float KnockupInitialVelocity; // 0x194
	float HitboxConeHalfAngleInDegrees; // 0x198
	float TerrainBlockTraceHeightGrace; // 0x19c
	float ConeDamageRadius; // 0x1a0
	float InnerHitSphereRadius; // 0x1a4
	float ConeForwardOffset; // 0x1a8
	float SphereTraceRadius; // 0x1ac
	float MaxRangeAngleDeviationThreshold; // 0x1b0
	float MinRangeAngleDeviationThreshold; // 0x1b4
	float MinimumRange; // 0x1b8
	float MaximumRange; // 0x1bc
	float MaximumHeight; // 0x1c0
	float DownTraceLength; // 0x1c4
	float InitialJumpApexHeight; // 0x1c8
	bool bUseSurfaceProjectedForward; // 0x1cc
	float AirAttackSpeed; // 0x1d0
	float MaxTargetEffectDistanceUp; // 0x1d4
	float MaxTargetEffectDistanceDown; // 0x1d8
	float StunTime; // 0x1dc
	UCurveFloat* TravelDistanceDamageMultiplierCurve; // 0x1e0
	float Damage; // 0x1e8
	float WallAngleLandingAnimationThreshold; // 0x1ec
	float StartLandingAnimationOffsetGround; // 0x1f0
	float StartLandingAnimationOffsetWall; // 0x1f4
	UAnimMontage* AirAttackAnimationJump; // 0x1f8
	UAnimMontage* AirAttackAnimationMidAir; // 0x200
	UAnimMontage* AirAttackAnimationLandGround; // 0x208
	UAnimMontage* AirAttackAnimationLandWall; // 0x210
	UAkAudioEvent* TakeOffAudioEvent; // 0x218
	UAkAudioEvent* LaunchAudioEvent; // 0x220
	UAkAudioEvent* HitGroundSound; // 0x228
	UAkAudioEvent* ImpactWarningSound; // 0x230
	float CameraShakeBoundaryHeight; // 0x238
	UMatineeCameraShake* CameraLowEffectShake; // 0x240
	UMatineeCameraShake* CameraHighEffectShake; // 0x248
	UMatineeCameraShake* CameraAirEffectShake; // 0x250
};

struct UEnvQueryTest_Pathfinding {
	EEnvTestPathfinding TestMode; // 0x1f8
	UEnvQueryContext* Context; // 0x200
	FAIDataProviderBoolValue PathFromContext; // 0x208
	FAIDataProviderBoolValue SkipUnreachable; // 0x240
	UNavigationQueryFilter* FilterClass; // 0x278
};

struct UAkInitBank {
	TArray<FString> AvailableAudioCultures; // 0x50
	FString DefaultLanguage; // 0x60
};

struct UUserDefinedStruct {
	EUserDefinedStructureStatus Status; // 0xc0
	FGuid Guid; // 0xc4
};

struct UTigerDisciplineSwiftStrike {
	UTigerSwiftStrikeConfig* Config; // 0x78
};

struct UParticleModuleCollision {
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

struct UMovieSceneMarginSection {
	FMovieSceneFloatChannel TopCurve; // 0xe8
	FMovieSceneFloatChannel LeftCurve; // 0x188
	FMovieSceneFloatChannel RightCurve; // 0x228
	FMovieSceneFloatChannel BottomCurve; // 0x2c8
};

struct UTigerSaveGame {
	FTigerPersistentCharacterID LastUsedCharacterId; // 0x28
};

struct UActorSequenceComponent {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0xb0
	UActorSequence* Sequence; // 0xc8
	UActorSequencePlayer* SequencePlayer; // 0xd0
};

struct UTigerUiNewNotificationHandler {
	FMulticastInlineDelegate OnNewItemStatus; // 0x30
	TMap<ETigerNewNotificationMenuOptions, UTigerUiNewNotificationNode*> NodeMap; // 0x40
};

struct UTigerGuardBreakConfig {
	float DashDistance; // 0x160
	float StartupTime; // 0x164
	float DashTime; // 0x168
	float StrikeDelay; // 0x16c
	float StrikeDuration; // 0x170
	float OnHitDamage; // 0x174
	float BlockedOnHitDamage; // 0x178
	UTigerBuff* OnHitDebuff; // 0x180
	FVector HitBoxSize; // 0x188
	bool DrawDebugInfo; // 0x194
};

struct UTigerPromotionalUI {
	bool bIsPreviewWidget; // 0x2a0
	int32_t ZValue; // 0x2a4
	TSoftObjectPtr<UTexture2D> FirstTimeWelcomeTexturePath; // 0x2a8
	FText FirstTimeWelcomeTitleText; // 0x2d0
	FText FirstTimeWelcomeDescriptionText; // 0x2e8
};

struct UTigerCustomMontageListGender {
	UAnimMontage* Montages[0x2]; // 0x28
};

struct UEnvQueryTest_Dot {
	FEnvDirection LineA; // 0x1f8
	FEnvDirection LineB; // 0x218
	EEnvTestDot TestMode; // 0x238
	bool bAbsoluteValue; // 0x239
};

struct UEditableGameplayTagQueryExpression_AnyExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UGameplayTagsList {
	FString ConfigFileName; // 0x28
	TArray<FGameplayTagTableRow> GameplayTagList; // 0x38
};

struct UMaterialExpressionCeil {
	FExpressionInput Input; // 0x40
};

struct UTigerCharacterEyeColorCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct UParticleModuleVelocityBase {
	char bInWorldSpace : 1; // 0x30
	char bApplyOwnerScale : 1; // 0x30
};

struct UTigerInventoryComponent {
	int32_t MaxItemsPerCategory; // 0xb0
	int32_t AmmoStackDistance; // 0xb4
	int32_t MaxConsumables; // 0xb8
	FSharkRandomDeviation DropItemLaunchSpeed; // 0xbc
	char SlotColumnCount; // 0xc4
	ATigerPlayer* Player; // 0x108
	UTigerItemAsset* UnarmedItemAsset; // 0x110
	FTigerInventoryWeapon Weapons[0x4]; // 0x118
	FTigerItemData Items[0xc]; // 0x138
	TArray<UTigerAmmoAsset*> AmmoPickupItems; // 0x1f8
	TArray<FTigerInventorySlotContent> Slots; // 0x208
	FTigerItemData Artifact; // 0x2b8
};

struct UTBP_UI_TransitionMenuButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Deselected; // 0x268
	UWidgetAnimation* Pressed; // 0x270
	UWidgetAnimation* Hover; // 0x278
	UWidgetAnimation* FadeIn; // 0x280
	UImage* BG_Solid; // 0x288
	UBorder* Border_Outline; // 0x290
	UButton* Button; // 0x298
	UTBP_UI_Box_C* ButtonSelectionBorder; // 0x2a0
	UImage* CloudWidget; // 0x2a8
	UNamedSlot* ContentOverride; // 0x2b0
	UImage* FadedBgWidget; // 0x2b8
	UImage* FlashOverlay; // 0x2c0
	UTBP_UI_TransitionWidget_C* InnerTransitionWidget; // 0x2c8
	FMulticastInlineDelegate OnClicked; // 0x2d0
	FMulticastInlineDelegate OnHovered; // 0x2e0
	FMulticastInlineDelegate OnUnhovered; // 0x2f0
	float AnimationDelay; // 0x300
	float BorderOpacityTarget; // 0x304
	float BorderOpacity; // 0x308
	float BorderOpacitySpeed; // 0x30c
	bool bBoldBorder; // 0x310
	EUMGSequencePlayMode LastPressedPlayMode; // 0x311
	bool IsSelectable; // 0x312
	UMaterialInstanceDynamic* BorderMaterial; // 0x318
	bool bShowHoverBorder; // 0x320
	FLinearColor BackgroundColor; // 0x324
	FLinearColor UnhoveredBorderColor; // 0x334
	FLinearColor HoveredBorderColor; // 0x344
	bool bEnableClouds; // 0x354
	float ContentFadeInDelay; // 0x358
	bool bIsSelected; // 0x35c
	bool bIsWaitingForFadeIn; // 0x35d
	FSlateColor CloudTintColor; // 0x360
};

struct ATBP_QuestMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
};

struct ATextRenderActor {
	UTextRenderComponent* TextRender; // 0x228
};

struct UReplicationGraphNode_TearOff_ForConnection {
	TArray<FTearOffActorInfo> TearOffActors; // 0x50
};

struct UTigerPlayerMasqueradeComponent {
	FMulticastInlineDelegate OnBloodHuntStateChanged; // 0xb0
	FMulticastInlineDelegate OnBloodHuntStateUpdated; // 0xc0
	TArray<UTigerMasqueradeConsequence*> PossibleMasqueradeConsequences; // 0xd0
	TArray<UTigerMasqueradeConsequenceSyncInstance*> SyncedMasqueradeConsequenceInstances; // 0xe0
	FMulticastInlineDelegate OnMasqueradeConsequenceInstancedAdded; // 0xf0
	FMulticastInlineDelegate OnMasqueradeConsequenceInstancedRemoved; // 0x100
	uint32_t ConsequenceBroadcastSlotCount; // 0x110
	TArray<UTigerMasqueradeConsequence*> ActiveConsequences; // 0x118
	TArray<FTigerConsequenceData> ReplicatedConsequences; // 0x128
};

struct UTBP_AnimMetaData_WeaponIK_C {
	ENUM_WeaponIKOverride LeftHandIK_Enum; // 0x28
	ENUM_WeaponIKOverride RightHandIK_Enum; // 0x29
};

struct UParticleModuleVectorFieldRotationRate {
	FVector RotationRate; // 0x30
};

struct USynthKnob {
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

struct UTBP_UI_Image_C {
	UImage* WrappedImage; // 0x280
};

struct UTigerDisciplineProjectionDash {
	FVector DashStartLocation; // 0xf0
	FVector DashEnterLocation; // 0xfc
	FVector DashExitLocation; // 0x108
	FVector DashEndLocation; // 0x114
	UTigerProjectionDashConfig* Config; // 0x120
	ATigerProjectionDashProjectile* SpawnedProjection; // 0x128
	AActor* TargetIndicator; // 0x148
};

struct UTigerBuffMeleeChargeInstance {
	UTigerBuffMeleeCharge* MeleeChargeBuff; // 0x88
	ATigerPlayer* Player; // 0x90
};

struct ULandscapeWeightmapUsage {
	ULandscapeComponent* ChannelUsage[0x4]; // 0x28
	FGuid LayerGuid; // 0x48
};

struct UUserDefinedImageCaptureProtocol {
	EDesiredImageFormat Format; // 0xd8
	bool bEnableCompression; // 0xd9
	int32_t CompressionQuality; // 0xdc
};

struct UAkWwiseTree {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
};

struct UTigerAICommandContextualAction {
	TArray<FTigerContextualAnimationWrapper> ContextualAnimations; // 0x40
	float WaitTimeBefore; // 0x50
	float WaitTimeBeforeRandomDeviation; // 0x54
	float WaitTimeAfter; // 0x58
	float WaitTimeAfterRandomDeviation; // 0x5c
};

struct USubmixEffectTapDelayPreset {
	FSubmixEffectTapDelaySettings Settings; // 0xa8
};

struct UMovieSceneCameraAnimTrack {
	TArray<UMovieSceneSection*> CameraAnimSections; // 0x80
};

struct UEnvQueryTest_Trace {
	FEnvTraceData TraceData; // 0x1f8
	FAIDataProviderBoolValue TraceFromContext; // 0x228
	FAIDataProviderFloatValue ItemHeightOffset; // 0x260
	FAIDataProviderFloatValue ContextHeightOffset; // 0x298
	UEnvQueryContext* Context; // 0x2d0
};

struct UInterpTrackLinearColorBase {
	FInterpCurveLinearColor LinearColorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UParticleModuleVelocityInheritParent {
	FRawDistributionVector Scale; // 0x38
};

struct UAtmosphericFogComponent {
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

struct UGameplayTagsManager {
	TArray<FGameplayTagSource> TagSources; // 0xc0
	TArray<UDataTable*> GameplayTagTables; // 0x1b0
};

struct UABP_PoseableMesh_D_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x348
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x358
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x378
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x480
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x588
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x690
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x798
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x8a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x9a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0xab0
};

struct ATigerNPCSpawningSpline {
	USplineComponent* Spline; // 0x260
	UTigerNPCAsset* NPCAsset; // 0x268
	FTigerAISplinePathData PathData; // 0x270
};

struct UBTTaskNode {
	TArray<UBTService*> Services; // 0x58
	char bIgnoreRestartSelf : 1; // 0x68
};

struct ATigerHook {
	USphereComponent* HookTrigger; // 0x228
	FVector HookLocation; // 0x230
	FVector TargetLocation; // 0x23c
	FVector StartLocation; // 0x248
	ETigerHookState HookState; // 0x254
	UTigerHookConfig* Config; // 0x258
	float CurrentThrowTime; // 0x260
	int32_t HookingBuffID; // 0x264
	ATigerCharacter* HitCharacter; // 0x268
	FVector PullBackStartAtLocation; // 0x270
	FVector PullBackStopAtLocation; // 0x27c
	float TimeUntilPulledBack; // 0x288
	float CurrentTimeLeftUntilPulledBack; // 0x28c
	float HitCharacterCameraRotateCurrentTime; // 0x290
	FRotator HitCharacterCameraRotationStart; // 0x294
	FRotator HitCharacterRotationStart; // 0x2a0
	FRotator HitCharacterCameraRotationEnd; // 0x2ac
	FVector OriginalVelocity; // 0x2b8
	float CharacterVelocityCutoffCurrentTime; // 0x2c4
	UAnimMontage* ThrowMontage; // 0x2c8
	UAnimMontage* ReelMontage; // 0x2d0
	FTimerHandle PreReelTimerHandle; // 0x2d8
};

struct UMaterialExpressionSetMaterialAttributes {
	TArray<FExpressionInput> Inputs; // 0x40
	TArray<FGuid> AttributeSetTypes; // 0x50
};

struct UEdGraphNode {
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

struct UAkComponent {
	bool bUseSpatialAudio; // 0x218
	ECollisionChannel OcclusionCollisionChannel; // 0x220
	char EnableSpotReflectors : 1; // 0x224
	float OuterRadius; // 0x228
	float InnerRadius; // 0x22c
	UAkAuxBus* EarlyReflectionAuxBus; // 0x230
	FString EarlyReflectionAuxBusName; // 0x238
	int32_t EarlyReflectionOrder; // 0x248
	float EarlyReflectionBusSendGain; // 0x24c
	float EarlyReflectionMaxPathLength; // 0x250
	float roomReverbAuxBusGain; // 0x254
	int32_t diffractionMaxEdges; // 0x258
	int32_t diffractionMaxPaths; // 0x25c
	float diffractionMaxPathLength; // 0x260
	char DrawFirstOrderReflections : 1; // 0x264
	char DrawSecondOrderReflections : 1; // 0x264
	char DrawHigherOrderReflections : 1; // 0x264
	char DrawDiffraction : 1; // 0x264
	bool StopWhenOwnerDestroyed; // 0x268
	float AttenuationScalingFactor; // 0x26c
	float OcclusionRefreshInterval; // 0x270
	bool bUseReverbVolumes; // 0x274
};

struct USkeletalMeshSocket {
	FName SocketName; // 0x28
	FName BoneName; // 0x30
	FVector RelativeLocation; // 0x38
	FRotator RelativeRotation; // 0x44
	FVector RelativeScale; // 0x50
	bool bForceAlwaysAnimated; // 0x5c
};

struct UABP_VMP_BRU_F_HAIR_02_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_19; // 0x300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_18; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_17; // 0xb80
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xfc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_16; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x1860
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x20e0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2520
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x3ec0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x4300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x4740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x4b80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x4fc0
};

struct UTBP_UI_PlayerMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
	UWidgetAnimation* CrossToRed; // 0x2b8
	UCanvasPanel* PlayerCross; // 0x2c0
	UImage* PlayerMarkerImage; // 0x2c8
	char GroupPlayerIndex; // 0x2d0
	UTigerPlayerMasqueradeComponent* PlayerMasqueradeComponent; // 0x2d8
	bool MasqueradeBreached; // 0x2e0
};

struct UNavMovementComponent {
	FNavAgentProperties NavAgentProps; // 0xf0
	float FixedPathBrakingDistance; // 0x120
	char bUpdateNavAgentWithOwnersCollision : 1; // 0x124
	char bUseAccelerationForPaths : 1; // 0x124
	char bUseFixedBrakingDistanceForPaths : 1; // 0x124
	FMovementProperties MovementState; // 0x125
	UObject* PathFollowingComp; // 0x128
};

struct UNiagaraDataInterfaceRenderTargetVolume {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTargetVolume*> ManagedRenderTargets; // 0x108
};

struct UCameraModifier {
	char bDebug : 1; // 0x28
	char bExclusive : 1; // 0x28
	char Priority; // 0x2c
	APlayerCameraManager* CameraOwner; // 0x30
	float AlphaInTime; // 0x38
	float AlphaOutTime; // 0x3c
	float Alpha; // 0x40
};

struct USplineComponent {
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

struct UNiagaraDataInterfaceArrayQuat {
	TArray<FQuat> QuatData; // 0x50
};

struct UNiagaraSimulationStageBase {
	UNiagaraScript* Script; // 0x28
	FName SimulationStageName; // 0x30
	char bEnabled : 1; // 0x38
};

struct UButton {
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

struct UTigerAiMoveToTask {
	bool bResetMoveTargetOnEnd; // 0xb0
};

struct UInteractiveToolPropertySet {
	UInteractiveToolPropertySet* CachedProperties; // 0x38
	bool bIsPropertySetEnabled; // 0x40
};

struct UNavLinkCustomComponent {
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

struct UGameplayTask {
	FName InstanceName; // 0x30
	ETaskResourceOverlapPolicy ResourceOverlapPolicy; // 0x3a
	UGameplayTask* ChildTask; // 0x60
};

struct UNiagaraDataInterfaceVolumeTexture {
	UVolumeTexture* Texture; // 0x38
};

struct USoundGroups {
	TArray<FSoundGroup> SoundGroupProfiles; // 0x28
};

struct ULandscapeLayerInfoObject {
	FName LayerName; // 0x28
	UPhysicalMaterial* PhysMaterial; // 0x30
	float Hardness; // 0x38
	FLinearColor LayerUsageDebugColor; // 0x3c
};

struct UWidgetAnimation {
	UMovieScene* MovieScene; // 0x60
	TArray<FWidgetAnimationBinding> AnimationBindings; // 0x68
	bool bLegacyFinishOnStop; // 0x78
	FString DisplayLabel; // 0x80
};

struct UDistributionFloatConstant {
	float Constant; // 0x38
};

struct USoundNodeEnveloper {
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

struct UEngineMessage {
	FString FailedPlaceMessage; // 0x28
	FString MaxedOutMessage; // 0x38
	FString EnteredMessage; // 0x48
	FString LeftMessage; // 0x58
	FString GlobalNameChange; // 0x68
	FString SpecEnteredMessage; // 0x78
	FString NewPlayerMessage; // 0x88
	FString NewSpecMessage; // 0x98
};

struct UVOIPTalker {
	FVoiceSettings Settings; // 0xb0
};

struct UWidgetNavigation {
	FWidgetNavigationData Up; // 0x28
	FWidgetNavigationData Down; // 0x4c
	FWidgetNavigationData Left; // 0x70
	FWidgetNavigationData Right; // 0x94
	FWidgetNavigationData Next; // 0xb8
	FWidgetNavigationData Previous; // 0xdc
};

struct UTigerItemPreviewInputComponent {
	float CameraSensitivityTurnMultiplier; // 0x138
	float CameraSensitivityTurnAtRateMultiplier; // 0x13c
	float CameraSensitivityVerticalMovementMultiplier; // 0x140
	ATigerBattlepassRewardPreview* ItemActor; // 0x148
};

struct UButtonStyleAsset {
	FButtonStyle ButtonStyle; // 0x28
};

struct UButtonSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UParticleSystemReplay {
	int32_t ClipIDNumber; // 0x28
};

struct UMovieSceneTrack {
	FMovieSceneTrackEvalOptions EvalOptions; // 0x50
	bool bIsEvalDisabled; // 0x55
	FGuid EvaluationFieldGuid; // 0x58
	FMovieSceneTrackEvaluationField EvaluationField; // 0x68
};

struct UTigerCustomBlendSpaceListClanAndGender {
	FTigerPlayerBlendSpaceByClan BlendSpacesByClan[0x2]; // 0x28
};

struct UTigerPassiveAdrenalineRushLogicComponent {
	UTigerPassiveAdrenalineRushConfig* PassiveConfig; // 0x158
};

struct UTigerAiMoveAsyncTask {
	float AcceptableRadiusSq; // 0x98
	float ObservedBlackboardValueToleranceSq; // 0x9c
};

struct UTigerAnimNotify_CameraAnimation {
	UCameraAnim* CameraAnimation; // 0x38
	float AnimationRate; // 0x40
};

struct UNiagaraRendererProperties {
	FNiagaraPlatformSet Platforms; // 0x28
	int32_t SortOrderHint; // 0x58
	ENiagaraParticleResolutionMode RenderResolution; // 0x5c
	bool bIsEnabled; // 0x5d
	bool bMotionBlurEnabled; // 0x5e
};

struct UParticleModuleColor_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct UAISense_Damage {
	TArray<FAIDamageEvent> RegisteredEvents; // 0x80
};

struct UTigerPassiveVentrueOneLogic {
	UTigerPassiveVentrueOneConfig* Config; // 0xc0
	ATigerPlayer* Player; // 0xc8
	USphereComponent* RadiusComponent; // 0xd0
	TArray<ATigerCharacter*> CharactersInShockwaveRange; // 0xd8
};

struct ATigerPrimogenNPC {
	FSoftObjectPath CharacterPresetPath; // 0xae8
};

struct UGizmoPlaneTranslationParameterSource {
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

struct UCanvasRenderTarget2D {
	FMulticastInlineDelegate OnCanvasRenderTargetUpdate; // 0x118
	TWeakObjectPtr<UWorld> World; // 0x128
	bool bShouldClearRenderTargetOnReceiveUpdate; // 0x130
};

struct UTBP_UI_MapPingMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCanvasPanel* RootCanvas; // 0x2c0
	UTBP_UI_PingInstanceBase_C* TBP_UI_PingInstanceBase; // 0x2c8
	UTigerPingWorldInstanceUI* PingWidget; // 0x2d0
	UTigerInWorldIconController* InWorldController; // 0x2d8
	bool bShouldDisplayCancelNotification; // 0x2e0
};

struct ULevelSequenceBurnInOptions {
	bool bUseBurnIn; // 0x28
	FSoftClassPath BurnInClass; // 0x30
	ULevelSequenceBurnInInitSettings* Settings; // 0x48
};

struct UTBP_UnseenPresenceBuffInstance_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x98
	float CurrentOpacity; // 0xa0
};

struct UInstancedStaticMeshComponent {
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

struct UTigerSubLevelList {
	TArray<FTigerSubLevelBackground> SubLevels; // 0x30
};

struct UTBP_FlowBoot_Bot_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x80
	TArray<UObject*> BackgroundSceneClasses; // 0x88
	UTBP_UI_FirstTimeArchetypeSelection_C* FirstTimeArchetypeSelectionUI; // 0x98
	UAkAudioEvent* StartupEvent; // 0xa0
	bool bIsFirstTime; // 0xa8
	UTBP_UI_TitleScreen_C* LandingPageUI; // 0xb0
	UObject* ElysiumRef; // 0xb8
	UTBP_UI_InvalidGameClient_C* InvalidClientUI; // 0xc0
};

struct ALight {
	ULightComponent* LightComponent; // 0x228
	char bEnabled : 1; // 0x230
};

struct UAvfMediaSettings {
	bool NativeAudioOut; // 0x28
};

struct UTigerMusicAsset {
	USoundCue* SoundCue; // 0x30
};

struct UNiagaraDataInterfaceArrayFloat3 {
	TArray<FVector> FloatData; // 0x50
};

struct UABP_Melee_Weapon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x2f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x400
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x420
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x528
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x550
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x570
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x620
	FAnimNode_Slot AnimGraphNode_Slot; // 0x778
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x7c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x7e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x810
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x838
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x990
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x9b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0xb10
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0xb60
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0xbb0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0xd08
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0xd58
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0xda8
	ETigerGender BodyType; // 0xf00
	bool IsSecondaryWeapon; // 0xf01
	bool IsPlayingAsFemaleBool; // 0xf02
	float IsPlayingAsFemaleFloat; // 0xf04
	FVector RootJointOffset; // 0xf08
	FVector LeftHandIKOffset; // 0xf14
	ENUM_MeleeWeaponCategories CurrentMeleeWeapon; // 0xf20
	TMap<ENUM_MeleeWeaponCategories, FVector> RootJointOffsetMap; // 0xf28
	TMap<ENUM_MeleeWeaponCategories, FVector> LeftHandOffsetMap; // 0xf78
	UABP_Player_C* Anim Instance; // 0xfc8
};

struct UNiagaraDataInterfaceSpline {
	AActor* Source; // 0x38
};

struct ATigerPlayerAppearanceCache {
	UTigerCharCustomizationComponent* CharacterCustomizationComponent; // 0x228
	UTigerCharacterMeshManager* MeshManager; // 0x230
	USkeletalMeshComponent* MeshComponents[0xb]; // 0x238
};

struct UNiagaraPreviewAxis_InterpParamVector {
	FVector Min; // 0x38
	FVector Max; // 0x44
};

struct USoundNodeAttenuation {
	USoundAttenuation* AttenuationSettings; // 0x48
	FSoundAttenuationSettings AttenuationOverrides; // 0x50
	char bOverrideAttenuation : 1; // 0x3f0
};

struct UWidgetInteractionComponent {
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

struct UMaterialExpressionDesaturation {
	FExpressionInput Input; // 0x40
	FExpressionInput Fraction; // 0x54
	FLinearColor LuminanceFactors; // 0x68
};

struct ADefaultPawn {
	float BaseTurnRate; // 0x288
	float BaseLookUpRate; // 0x28c
	UPawnMovementComponent* MovementComponent; // 0x290
	USphereComponent* CollisionComponent; // 0x298
	UStaticMeshComponent* MeshComponent; // 0x2a0
	char bAddDefaultMovementBindings : 1; // 0x2a8
};

struct UProgressBar {
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
};

struct UTigerAnimationSetCollection {
	UTigerAnimationSet* ResultSet; // 0x28
	TArray<UTigerAnimationSet*> AnimationSets; // 0x30
};

struct UTigerUtilityPowerBaseComponent {
	FText UtilityName; // 0xb0
	FText UtilityDescription; // 0xc8
	bool bUseClientBackgroundUpdate; // 0xe0
};

struct UGizmoScaledTransformSource {
	TScriptInterface<IGizmoTransformSource> ChildTransformSource; // 0x48
};

struct UNavModifierComponent {
	UNavArea* AreaClass; // 0xe0
	FVector FailsafeExtent; // 0xe8
	char bIncludeAgentHeight : 1; // 0xf4
};

struct UMaterial {
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

struct UTBP_ContextualHelp_Tutorial_EndEntity_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct AGeometryCollectionActor {
	UGeometryCollectionComponent* GeometryCollectionComponent; // 0x228
	UGeometryCollectionDebugDrawComponent* GeometryCollectionDebugDrawComponent; // 0x230
};

struct UInterpTrackInstSlomo {
	float OldTimeDilation; // 0x28
};

struct UMovieSceneObjectPropertyTrack {
	UObject* PropertyClass; // 0xb0
};

struct UTigerAnimNotify_SpawnMesh {
	UStaticMesh* MeshToSpawn; // 0x38
	FName SocketToSpawnFrom; // 0x40
	FVector Direction[0x2]; // 0x48
	float Speed[0x2]; // 0x60
	float RandomAngularImpulseStrength; // 0x68
	bool bShowInEditor; // 0x6c
};

struct UTigerOutlineComponent {
	ETigerOutlineMode CurrentMode; // 0xb0
	int32_t StencilValue; // 0xb4
	int32_t LocalPlayerStencilValue; // 0xb8
	FMulticastInlineDelegate OnOutlineModeRefreshed; // 0xc0
	TArray<UMeshComponent*> OutlineMeshes; // 0xd0
	uint16_t OutlinesToPauseWhenHidden; // 0xe0
	uint16_t OutlinesToPauseWhenBehindTrapGas; // 0xe2
};

struct UTigerRangedWeapon {
	FName WeaponName; // 0xa8
	ETigerWeaponType WeaponType; // 0xb0
	FName CharacterReloadAnimationName; // 0xb4
	TArray<FName> FireAnimations; // 0xc0
	float TimeAfterFireBeforePrimingIsAllowed; // 0xd0
	FName CharacterPrimingAnimation; // 0xd4
	UAnimMontage* WeaponPrimingAnimation; // 0xe0
	FName RecoilNoiseBlendspace; // 0xe8
	UAnimMontage* GunReload; // 0xf0
	UAnimMontage* GunFireAnimation; // 0xf8
	UCurveFloat* VerticalRecoilCurve; // 0x100
	UCurveFloat* HorizontalRecoilCurve; // 0x108
	UCurveFloat* VerticalRecoilMultiplierCurveOverRecoil; // 0x110
	UCurveFloat* HorizontalRecoilMultiplierCurveOverRecoil; // 0x118
	ATigerProjectile* ProjectileClass; // 0x120
	UAkAudioEvent* StartAimingSound; // 0x128
	UAkAudioEvent* StopAimingSound; // 0x130
	UAkAudioEvent* HitWallSound; // 0x138
	UAkAudioEvent* FireSound; // 0x140
	float LoopFireAfterFireRateMultiplier; // 0x148
	UAkAudioEvent* LowAmmoSound; // 0x150
	UAkAudioEvent* OutOfAmmoSound; // 0x158
	UAkAudioEvent* CoolDownAudioEvent; // 0x160
	int32_t AmountOfProjectilesFiredBeforeCooldown; // 0x168
	float LowAmmoThresholdPercent; // 0x16c
	UMatineeCameraShake* CameraShake; // 0x170
	UMatineeCameraShake* CameraShakeAimed; // 0x178
	UForceFeedbackEffect* FireForceFeedback; // 0x180
	int32_t ShotsPerTrail; // 0x188
	int32_t AimedFov; // 0x18c
	bool bShotsArePiercing; // 0x190
	ETigerWeaponAmmoType AmmoType; // 0x191
	UCurveFloat* DamageDropOffCurve; // 0x198
	UTigerCameraPreset* CameraPreset; // 0x1a0
	UTigerWeaponCrosshairWidget* CrosshairsByFireMode[0x3]; // 0x1a8
	UTigerWeaponCrosshairWidget* AimingCrossHair; // 0x1c0
	TArray<FName> SecondaryFireAnimations; // 0x1c8
	FName MuzzleSocket; // 0x1d8
	AActor* TracerActor; // 0x1e0
};

struct UTigerPassiveVoiceOfInspirationLogic {
	UTigerBuff* ActiveBuff; // 0x158
};

struct UNiagaraDataInterfaceFieldSystem {
	UBlueprint* BlueprintSource; // 0x38
	AActor* SourceActor; // 0x40
	FIntVector FieldDimensions; // 0x48
	FVector MinBounds; // 0x54
	FVector MaxBounds; // 0x60
};

struct UInterpTrackAkAudioEvent {
	TArray<FAkAudioEventTrackKey> Events; // 0x90
	char bContinueEventOnMatineeEnd : 1; // 0xa0
};

struct UParticleModuleSubUVMovie {
	char bUseEmitterTime : 1; // 0x70
	FRawDistributionFloat FrameRate; // 0x78
	int32_t StartingFrame; // 0xa8
};

struct UTigerElysiumNpcNameplateWidget {
	TWeakObjectPtr<UTigerInteractiveNpcComponent> InteractiveNpcComponent; // 0x280
};

struct UMovieSceneCameraShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
	UMatineeCameraShake* ShakeClass; // 0x108
	float PlayScale; // 0x110
	ECameraShakePlaySpace PlaySpace; // 0x114
	FRotator UserDefinedPlaySpace; // 0x118
};

struct UPostProcessComponent {
	FPostProcessSettings Settings; // 0x200
	float Priority; // 0x750
	float BlendRadius; // 0x754
	float BlendWeight; // 0x758
	char bEnabled : 1; // 0x75c
	char bUnbound : 1; // 0x75c
};

struct UTigerInputPrompt {
	FText PrefixText; // 0x280
	FText PostfixText; // 0x298
	bool bUseKey; // 0x2b0
	bool bUseAction; // 0x2b1
	FName InputAction; // 0x2b4
	FName InputAxis; // 0x2bc
	FKey InputKey; // 0x2c8
	bool bToggleVisibilityOnGamepadChanged; // 0x2e0
};

struct UAnimSharingTransitionInstance {
	TWeakObjectPtr<USkeletalMeshComponent> FromComponent; // 0x2b8
	TWeakObjectPtr<USkeletalMeshComponent> ToComponent; // 0x2c0
	float BlendTime; // 0x2c8
	bool bBlendBool; // 0x2cc
};

struct UTemplateSequence {
	UMovieScene* MovieScene; // 0x60
	TSoftClassPtr<UObject> BoundActorClass; // 0x68
	TSoftObjectPtr<AActor> BoundPreviewActor; // 0x90
	TMap<FGuid, FName> BoundActorComponents; // 0xb8
};

struct UEditableGameplayTagQueryExpression_NoExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UTigerCharacterTattooCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct ATigerStore {
	UTigerBlueprintLootLocationComponent* LootConfiguration; // 0x228
	bool bHasAlarmedTriggered; // 0x230
};

struct ATigerRatSpawnpoint {
	int32_t NumRatsToSpawn; // 0x228
};

struct UParticleModuleLocationPrimitiveSphere_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xe0
};

struct UParticleModuleLocationWorldOffset_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminder_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UMovieSceneVectorTrack {
	int32_t NumChannelsUsed; // 0xb0
};

struct UAnimSharingAdditiveInstance {
	TWeakObjectPtr<USkeletalMeshComponent> BaseComponent; // 0x2b8
	TWeakObjectPtr<UAnimSequence> AdditiveAnimation; // 0x2c0
	float Alpha; // 0x2c8
	bool bStateBool; // 0x2cc
};

struct UTigerAnimNotify_PlayCharEffect {
	UTigerCharacterEffect* Effect; // 0x38
	FName SocketToUse; // 0x40
};

struct UGizmoAxisTranslationParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Parameter; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurTranslationAxis; // 0xbc
	FVector CurTranslationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct UTigerRatSpawnpointActorSpawner {
	ATigerRat* ActorToSpawn; // 0x1f8
};

struct UGridSlot {
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

struct UTigerDisciplineParticleStrategy {
	FLinearColor StandardColorOverride; // 0x28
	FLinearColor EnemyColorOverride; // 0x38
	ETigerDisciplineParticleStrategyColorModes ColorOverrideMode; // 0x48
	FName ColorParameterName; // 0x4c
};

struct UABP_PoseableMesh_E_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x348
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x358
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x378
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x480
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x588
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x690
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x798
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x8a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x9a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0xab0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0xbb8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0xcc0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xdc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xed0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0xfd8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x10e0
};

struct ATBP_BulletProjectile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UMaterialInstanceDynamic* Decal_Concrete; // 0x2d8
	FVector StartPosition; // 0x2e0
	FSoftObjectPath NiagaraTrailPath; // 0x2f0
	FSoftObjectPath RemoteNiagaraTrailPath; // 0x308
	UNiagaraSystem* CachedTrailEffect; // 0x320
	FVector StartVelocity; // 0x328
	FVector LastTraceLocation; // 0x334
	int32_t TotalTraces; // 0x340
	FVector TraceEndLocation; // 0x344
	FLinearColor TraceColor; // 0x350
	float SmokeWidth; // 0x360
	float SmokeLifetime; // 0x364
	float SmokeVisibility; // 0x368
	float DotSize; // 0x36c
	float SmokeCurlAmount; // 0x370
	TMap<EPhysicalSurface, FName> SurfaceToAudioName; // 0x378
	float TraceLifetime; // 0x3c8
	float TraceWidth; // 0x3cc
	int32_t FlyByAkEventID; // 0x3d0
	bool HasSmokeTrail; // 0x3d4
	FName RangedWeaponToAudioSwitch; // 0x3d8
};

struct UTigerDisciplineRejuvenatingVoice {
	UTigerRejuvenatingVoiceConfig* Config; // 0xf0
};

struct UTexture2DArray {
	TextureAddress AddressX; // 0x140
	TextureAddress AddressY; // 0x141
	TextureAddress AddressZ; // 0x142
};

struct UMovieSceneCameraCutTrack {
	bool bCanBlend; // 0x78
	TArray<UMovieSceneSection*> Sections; // 0x80
};

struct UTigerAnimNotify_NiagaraEffect {
	FSoftObjectPath NiagaraPath; // 0x38
	UNiagaraSystem* CachedNiagaraEffect; // 0x50
	FName AttachPointName; // 0x58
	FVector EffectLocation; // 0x60
	FRotator EffectRotation; // 0x6c
	EAttachLocation AttachLocationRule; // 0x78
	bool bOnlySpawnOnLocalPlayer; // 0x79
};

struct UTBP_UI_Crosshair_Burst_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UABP_VMP_VEN_M_HAIR_06_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0xb80
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xfc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1860
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1ca0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x20e0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3640
};

struct UBrainComponent {
	UBlackboardComponent* BlackboardComp; // 0xb8
	AAIController* AIOwner; // 0xc0
};

struct UAndroidPermissionCallbackProxy {
	FMulticastInlineDelegate OnPermissionsGrantedDynamicDelegate; // 0x28
};

struct UTigerInventoryItemBase {
	FText UiName; // 0x30
	FText UIDescription; // 0x48
	FText TemporaryVs2CategoryName; // 0x60
	TSoftObjectPtr<UTexture2D> UITexture; // 0x78
	TSoftObjectPtr<UTexture2D> UiBackgroundTexture; // 0xa0
	FLinearColor TintColor; // 0xc8
	bool bForceToFrontWhenSorted; // 0xd8
	ETigerItemRarity Rarity; // 0xd9
	bool bIsAvailableForEveryone; // 0xda
	TArray<FTigerInventoryItemOwnerType> PossibleOwners; // 0xe0
	FString CameraTag; // 0xf0
	int32_t PersistentID; // 0x100
	uint64_t TelemetryID; // 0x108
};

struct UWheeledVehicleMovementComponent {
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

struct UTigerCharacterHairStyleCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
	FTigerLodSplitMesh SplitMesh; // 0x148
	UAnimInstance* Animation; // 0x1c0
	FName SocketAttachments[0x2]; // 0x1c8
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x1d8
};

struct UTigerCharCustomizationComponent {
	FMulticastInlineDelegate OnAppearanceChanged; // 0xb0
	UTigerCharacterMeshManager* MeshManager; // 0xd0
	UTigerClanCustomizationOptions* CustomizationOptions; // 0xd8
	TArray<FTigerCharacterCustomizationParameters> AdditionalParametersToApply; // 0xe0
	ETigerLodSplitMeshQuality MeshQuality; // 0x101
};

struct UToFloatField {
	UFieldNodeInt* IntField; // 0xb0
};

struct UTextureRenderTargetCube {
	int32_t SizeX; // 0xf0
	FLinearColor ClearColor; // 0xf4
	EPixelFormat OverrideFormat; // 0x104
	char bHDR : 1; // 0x105
	char bForceLinearGamma : 1; // 0x105
};

struct UParticleModuleTypeDataRibbon {
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

struct AAtmosphericFog {
	UAtmosphericFogComponent* AtmosphericFogComponent; // 0x228
};

struct UMaterialExpressionFrac {
	FExpressionInput Input; // 0x40
};

struct UBehaviorTreeComponent {
	TArray<UBTNode*> NodeInstances; // 0x128
	UBehaviorTree* DefaultBehaviorTreeAsset; // 0x278
};

struct UTigerJudgePatrollingState {
	FName IndexKeyName; // 0x60
	FName WaypointKeyName; // 0x68
	FName DirectionKeyName; // 0x70
};

struct UGeometryCacheTrack {
	float Duration; // 0x28
};

struct UTigerMasqueradeConsequenceMapMarkerSyncInstance {
	UUserWidget* MapMarkerClass; // 0x58
	UTigerMapMarkerProxy* MapMarkerProxy; // 0x60
};

struct UTBP_ContextualHelp_Consumable_InputReminderOnPickup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UTigerMasterChallengesConfigAsset {
	FTigerMasteryChallengesConfig Config; // 0x30
};

struct UTigerSessionSettings {
	bool bFindOnlyLocalSessions; // 0x38
	int32_t GroupSize; // 0x3c
	bool bEnableFakeMatchmakingDelayInElysium; // 0x40
	int32_t FakeMatchmakingDelayJoinWindowSeconds; // 0x44
	bool bEnableCloudSessions; // 0x48
};

struct UMovieSceneSpawnTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	FGuid ObjectGuid; // 0x88
};

struct UBaseMediaSource {
	FName PlayerName; // 0x80
};

struct ATigerResurrectAltar {
	ATigerPlayerController* ResurrectingPlayerController; // 0x288
	float RespawnDelay; // 0x290
	bool ShouldDisableAfterSingleUse; // 0x294
	ETigerResurrectHolyIncenseInteractionType HolyIncenseInteractionType; // 0x295
	float HolyIncensePositionCheckRate; // 0x298
	float AltarDestroyDelay; // 0x29c
	TArray<USceneComponent*> RespawnPoints; // 0x2a0
};

struct ADatasmithSceneActor {
	UDatasmithScene* Scene; // 0x228
	TMap<FName, TSoftObjectPtr<AActor>> RelatedActors; // 0x230
};

struct UFixedFrameRateCustomTimeStep {
	FFrameRate FixedFrameRate; // 0x28
};

struct UTigerAiMovementBudgetAsset {
	TMap<FName, FTigerAiMovementBudget> MovementBudgets; // 0x30
};

struct UTBP_UI_InputPromptCombined_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UButton* Button; // 0x288
	UWidgetSwitcher* InputSwitcher; // 0x290
	UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad; // 0x298
	UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard; // 0x2a0
	FText PrefixText; // 0x2a8
	FText PostfixText; // 0x2c0
	FName Action; // 0x2d8
	bool IsAxis; // 0x2e0
	FDataTableRowHandle FontInfo; // 0x2e8
	FMulticastInlineDelegate OnClicked; // 0x2f8
	FMulticastInlineDelegate OnHovered; // 0x308
	FMulticastInlineDelegate OnUnhovered; // 0x318
	bool IsClickable; // 0x328
};

struct UTigerKeyTextureMapping {
	TMap<FKey, UTexture2D*> KeyTextures; // 0x30
};

struct UTigerPingWheelWidget {
	TArray<FTigerPingWorldNetData> CurrentPingTypeItems; // 0x2a0
	UTigerPingClientData* CurrentPingResponseData; // 0x2b0
	UTigerPingControllerComponent* PingController; // 0x2b8
};

struct UParticleModuleVectorFieldScaleOverLife {
	UDistributionFloat* VectorFieldScaleOverLife; // 0x30
	FRawDistributionFloat VectorFieldScaleOverLifeRaw; // 0x38
};

struct USoundNode {
	TArray<USoundNode*> ChildNodes; // 0x28
};

struct UTBP_UI_InputPrompt_Gamepad_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UTigerStyledRichTextBlock* PostFixTextBlock; // 0x2f0
	UTigerStyledRichTextBlock* PrefixTextBlock; // 0x2f8
	UTBP_UI_XboxIcon_C* TBP_UI_XboxIcon; // 0x300
	FSlateFontInfo FontInfo; // 0x308
	FMargin CustomPadding; // 0x360
	FDataTableRowHandle Font; // 0x370
};

struct UAudioCaptureComponent {
	int32_t JitterLatencyFrames; // 0x6c0
};

struct URandomVector {
	float Magnitude; // 0xb0
};

struct USpacer {
	FVector2D Size; // 0x108
};

struct UAnimNotify_PlayParticleEffect {
	UParticleSystem* PSTemplate; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	FVector Scale; // 0x58
	char Attached : 1; // 0x80
	FName SocketName; // 0x84
};

struct AExponentialHeightFog {
	UExponentialHeightFogComponent* Component; // 0x228
	char bEnabled : 1; // 0x230
};

struct ATigerNPCPointSpawner {
	TArray<FTigerNPCSpawningPoint> SpawningPoints; // 0x260
	int32_t MaxNPCsToSpawn; // 0x270
	int32_t MinNPCsToSpawn; // 0x274
	int32_t MaxNPCsToSpawnGroup; // 0x278
	int32_t MinNPCsToSpawnGroup; // 0x27c
};

struct UFontFace {
	FString SourceFilename; // 0x30
	EFontHinting Hinting; // 0x40
	EFontLoadingPolicy LoadingPolicy; // 0x41
	EFontLayoutMethod LayoutMethod; // 0x42
};

struct UClothingAssetBase {
	FString ImportedFilePath; // 0x28
	FGuid AssetGuid; // 0x38
};

struct UMaterialExpressionSceneDepthWithoutWater {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FVector2D ConstInput; // 0x58
	float FallbackDepth; // 0x60
};

struct UBTService_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UARSessionConfig {
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
	EARSessionType SESSIONTYPE; // 0x3b
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

struct UMotoSynthPreset {
	FMotoSynthRuntimeSettings Settings; // 0x28
};

struct USkeletalMesh {
	USkeleton* Skeleton; // 0x80
	FBoxSphereBounds ImportedBounds; // 0x88
	FBoxSphereBounds ExtendedBounds; // 0xa4
	FVector PositiveBoundsExtension; // 0xc0
	FVector NegativeBoundsExtension; // 0xcc
	FPerPlatformFloat ScreenCullSize; // 0xd8
	TArray<FSkeletalMaterial> Materials; // 0xe0
	TArray<FBoneMirrorInfo> SkelMirrorTable; // 0xf0
	TArray<FSkeletalMeshLODInfo> LODInfo; // 0x100
	FPerPlatformInt MinLOD; // 0x160
	FPerPlatformBool DisableBelowMinLodStripping; // 0x164
	EAxis SkelMirrorAxis; // 0x165
	EAxis SkelMirrorFlipAxis; // 0x166
	char bUseFullPrecisionUVs : 1; // 0x167
	char bUseHighPrecisionTangentBasis : 1; // 0x167
	char bHasBeenSimplified : 1; // 0x167
	char bHasVertexColors : 1; // 0x167
	char bEnablePerPolyCollision : 1; // 0x167
	UBodySetup* BodySetup; // 0x168
	UPhysicsAsset* PhysicsAsset; // 0x170
	UPhysicsAsset* ShadowPhysicsAsset; // 0x178
	TArray<UNodeMappingContainer*> NodeMappingData; // 0x180
	TArray<UMorphTarget*> MorphTargets; // 0x190
	UAnimInstance* PostProcessAnimBlueprint; // 0x318
	TArray<UClothingAssetBase*> MeshClothingAssets; // 0x320
	FSkeletalMeshSamplingInfo SamplingInfo; // 0x330
	TArray<UAssetUserData*> AssetUserData; // 0x360
	TArray<USkeletalMeshSocket*> Sockets; // 0x370
	TArray<FSkinWeightProfileInfo> SkinWeightProfiles; // 0x390
};

struct UTBP_UI_EntityCheckpointMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UImage* EntityIconGlow; // 0x2c0
	UImage* EntityIconImage; // 0x2c8
};

struct UAISense_Sight {
	int32_t MaxTracesPerTick; // 0x148
	int32_t MinQueriesPerTimeSliceCheck; // 0x14c
	double MaxTimeSlicePerTick; // 0x150
	float HighImportanceQueryDistanceThreshold; // 0x158
	float MaxQueryImportance; // 0x160
	float SightLimitQueryImportance; // 0x164
};

struct UEnvQueryGenerator {
	FString OptionName; // 0x30
	UEnvQueryItemType* ItemType; // 0x40
	char bAutoSortTests : 1; // 0x48
};

struct UTigerGeneralUserSettings {
	UAkAudioEvent* EnableAtmosMixEvent; // 0x28
	UAkAudioEvent* EnableHeadphonesEvent; // 0x30
	FMulticastInlineDelegate OnQualityOptionChanged; // 0x38
	FMulticastInlineDelegate OnDisplaySettingsApplied; // 0x48
	FMulticastInlineDelegate OnGraphicsSettingsApplied; // 0x58
	FMulticastInlineDelegate OnLanguageTextSettingChanged; // 0x68
	FTigerStreamerModeSettings UserStreamerModeSettings; // 0x80
	FTigerStreamerModeSettings DefaultStreamerModeSettings; // 0x8c
	FTigerAudioSettings UserAudioSettings; // 0x98
	FTigerAudioSettings DefaultAudioSettings; // 0xe8
	FTigerLanguageSettings UserLanguageSettings; // 0x138
	FTigerLanguageSettings DefaultLanguageSettings; // 0x160
	FTigerGameplaySettings UserGameplaySettings; // 0x188
	FTigerGameplaySettings DefaultGameplaySettings; // 0x190
	TArray<FString> AvailableAudioLanguages; // 0x198
	TMap<FString, FString> LanguageDisplayName; // 0x1a8
	FTigerDisplaySettings TempDisplaySettings; // 0x208
	FTigerDisplaySettings UserDisplaySettings; // 0x230
	FTigerDisplaySettings DefaultDisplaySettings; // 0x258
	FTigerGraphicsSettings TempGraphicsSettings; // 0x2b8
	FTigerGraphicsSettings UserGraphicsSettings; // 0x304
	FTigerGraphicsSettings DefaultGraphicsSettings; // 0x350
	FTigerGraphicsSettingsPS5 TempGraphicsSettingsPS5; // 0x39c
	FTigerGraphicsSettingsPS5 UserGraphicsSettingsPS5; // 0x3ac
	FTigerGraphicsSettingsPS5 DefaultGraphicsSettingsPS5; // 0x3bc
};

struct UParticleModuleAcceleration {
	FRawDistributionVector Acceleration; // 0x38
	char bApplyOwnerScale : 1; // 0x80
};

struct UTigerPlayerBotSubsystemSettings {
	bool bUseSplitscreen; // 0x38
	float BotDifficulty; // 0x3c
	float JumpingSpamDifficultyThreshold; // 0x40
	float SlidingDifficultyThreshold; // 0x44
	float ClanPowerDifficultyThreshold; // 0x48
	float ArchetypePowerDifficultyThreshold; // 0x4c
	float BotCombatTransitionDelayMin; // 0x50
	float BotCombatTransitionDelayMax; // 0x54
	float BotAccuracyMin; // 0x58
	float BotAccuracyMax; // 0x5c
};

struct UTigerAnimationFilter {
	TArray<FName> BonesToFilter; // 0x30
	TArray<FName> BlendShapesToFilter; // 0x40
	USkeleton* Skeleton; // 0x50
	TArray<int32_t> CurveIdsToFilter; // 0x58
	TArray<bool> BoneIdsToFilter; // 0x68
};

struct UMaterialFunction {
	FString Description; // 0x40
	char bExposeToLibrary : 1; // 0x50
	char bPrefixParameterNames : 1; // 0x50
};

struct UTigerAIPlayerFeeding {
	float MaximumFeedingDistance; // 0x98
};

struct ATBP_BuffPostProcess_BlindingBeauty_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UCurveFloat* FlashCurve; // 0x270
};

struct UAsyncActionLoadPrimaryAssetClassList {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UDefaultCycleStyle_C {
	int32_t DirectionInt; // 0x48
	int32_t OutSlot; // 0x4c
	ATigerPlayerController* PlayerController; // 0x50
};

struct UTigerBuffFrenzy {
	float HPRegenPercentPerSecond; // 0x248
	UTigerWeapon* WeaponClassToEquip; // 0x250
};

struct UMaterialExpressionTextureCoordinate {
	int32_t CoordinateIndex; // 0x40
	float UTiling; // 0x44
	float VTiling; // 0x48
	char UnMirrorU : 1; // 0x4c
	char UnMirrorV : 1; // 0x4c
};

struct UInterpTrackAnimControl {
	FName SlotName; // 0x90
	TArray<FAnimControlTrackKey> AnimSeqs; // 0x98
	char bSkipAnimNotifiers : 1; // 0xa8
};

struct UBTTask_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	FIntervalCountdown TickInterval; // 0x80
	char bShowPropertyDetails : 1; // 0xa0
};

struct ATigerRat {
	FVector LocalHandOffset; // 0x288
	FRotator LocalHandRotation; // 0x294
	UAnimMontage* Montage; // 0x2a0
	TWeakObjectPtr<ATigerPlayerController> CurrentInteractingPlayerController; // 0x2a8
	float FeedTickTime; // 0x2b0
	float FeedHealthAmount; // 0x2b4
	float MoveSpeed; // 0x2b8
	float RotationSpeed; // 0x2bc
	float MaxWaitTime; // 0x2c0
	float MinWaitTime; // 0x2c4
	USkeletalMeshComponent* RatMesh; // 0x2c8
	bool bShouldMove; // 0x2d0
	UAkAudioEvent* PickUpSqueekEvent; // 0x2d8
	bool bIsEaten; // 0x308
};

struct UMaterialExpressionLandscapePhysicalMaterialOutput {
	TArray<FPhysicalMaterialInput> Inputs; // 0x40
};

struct UNetReplicationGraphConnection {
	UNetConnection* NetConnection; // 0x28
	AReplicationGraphDebugActor* DebugActor; // 0x170
	TArray<FLastLocationGatherInfo> LastGatherLocations; // 0x188
	TArray<UReplicationGraphNode*> ConnectionGraphNodes; // 0x1a0
	UReplicationGraphNode_TearOff_ForConnection* TearOffNode; // 0x1b0
};

struct UPawnAction_Wait {
	float TimeToWait; // 0x98
};

struct UTigerWheelInterfaceWidget {
	FMulticastInlineDelegate OnAlternateActionTriggered; // 0x280
	FMulticastInlineDelegate OnPrimaryActionTriggered; // 0x290
	bool bCursorCanBeOutside; // 0x2a0
	int32_t NumItems; // 0x2a4
	int32_t MinimumSupportedItems; // 0x2a8
	int32_t MaximumSupportedItems; // 0x2ac
	float MiddleRadius; // 0x2b0
	float OutsideRadius; // 0x2b4
	float GamepadDeadZone; // 0x2b8
	float DeselectionGraceTime; // 0x2bc
	int32_t HoveredIndex; // 0x2c4
};

struct ATigerVehicle {
	ATigerLootableVehicleDoorSpawner* LootableDoorSpawner; // 0x278
	ATigerLootContainer* LootContainer; // 0x280
};

struct UTBP_ContextualHelp_Tutorial_Ping_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UParticleModuleRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UMaterialExpressionShadowReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput shadow; // 0x54
};

struct UBlueprint {
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

struct UWorld {
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
	FWorldPSCPool PSCPool; // 0x698
};

struct UTigerPreloadedNiagaraSystems {
	FMulticastInlineDelegate OnLoadedAllAssetsEvent; // 0x30
	TArray<TSoftObjectPtr<UNiagaraSystem>> Systems; // 0x40
};

struct UTigerMatchStateComponent {
	ATigerMatchGameMode* MatchGameMode; // 0xb0
	ATigerMatchGameState* MatchGameState; // 0xb8
};

struct UMovieSceneVectorSection {
	FMovieSceneFloatChannel Curves[0x4]; // 0xe8
	int32_t ChannelsUsed; // 0x368
};

struct UMaterialExpressionTime {
	char bIgnorePause : 1; // 0x40
	char bOverride_Period : 1; // 0x40
	float Period; // 0x44
};

struct UMaterialExpressionPreviousFrameSwitch {
	FExpressionInput CurrentFrame; // 0x40
	FExpressionInput PreviousFrame; // 0x54
};

struct UTBP_UI_FirstTimeArchetypeSelection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x470
	UWidgetAnimation* HighlightElysiumButton; // 0x478
	UWidgetAnimation* OnVideoDone; // 0x480
	UWidgetAnimation* OnVideoShown; // 0x488
	UWidgetAnimation* FadeOutToCharacterCreate; // 0x490
	UWidgetAnimation* InAnimation; // 0x498
	UTBP_UI_ArchetypeDescription_C* ArchetypeDescription; // 0x4a0
	UTBP_UI_ArchetypeInfo_C* ArchetypeInfo; // 0x4a8
	UTBP_UI_ConfirmMenu_C* ConfirmQuitPopup; // 0x4b0
	UTBP_UI_InputMenuPrompt_C* ExitGameInputPrompt; // 0x4b8
	UTBP_UI_HorizontalArchetypeSelector_Default_C* HorizontalArchetypeSelector; // 0x4c0
	UTBP_UI_ConfirmMenu_C* JoinErrorMessage; // 0x4c8
	UTigerStyledRichTextBlock* PlAYCINEMATIC; // 0x4d0
	UTBP_UI_TransitionMenuButton_C* PlayCinematicButton; // 0x4d8
	UTBP_UI_InputMenuPrompt_C* PlayTutorialInputPrompt; // 0x4e0
	UImage* PlayVideoIcon; // 0x4e8
	UTBP_UI_InputPromptCombined_C* ShowCinematicKeyPrompt; // 0x4f0
	UTBP_UI_ElysiumButton_C* StartGameUIButton; // 0x4f8
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x500
	UTBP_UI_Menu_Button_Prompt_Footer_C* TBP_UI_Menu_Button_Prompt_Footer; // 0x508
	UTigerStyledRichTextBlock* Text; // 0x510
	UTigerSafeZoneWidget* TigerSafeZoneWidget_1; // 0x518
	FMulticastInlineDelegate EnterElysium; // 0x520
	FMulticastInlineDelegate LoadTutorial; // 0x530
	FText JoinElysiumErrorText; // 0x540
	UTBP_UI_MoviePlayer_C* MoviePlayerUI; // 0x558
	FName ShowCinematicActionName; // 0x560
	bool bIsPlayingPowerVideo; // 0x568
};

struct UPlatformInterfaceBase {
	TArray<FDelegateArray> AllDelegates; // 0x28
};

struct USizeBox {
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

struct UPlayer {
	APlayerController* PlayerController; // 0x30
	int32_t CurrentNetSpeed; // 0x38
	int32_t ConfiguredInternetSpeed; // 0x3c
	int32_t ConfiguredLanSpeed; // 0x40
};

struct UParticleModuleEventGenerator {
	TArray<FParticleEvent_GenerateInfo> Events; // 0x30
};

struct UGeneralProjectSettings {
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

struct AGeometryCacheActor {
	UGeometryCacheComponent* GeometryCacheComponent; // 0x228
};

struct UTigerDisciplineReposition {
	UTigerRepositionConfig* Config; // 0x78
};

struct UTigerThrallMissionMapMarkerData {
	FTigerThrallMissionMapMarker MissionMarker; // 0x30
};

struct ATigerInteractiveQuestItem {
	UStaticMeshComponent* QuestMesh; // 0x290
	UAkAudioEvent* QuestSoundEffect; // 0x298
	UTigerGrimoireEntry* GrimoireEntryToUnlock; // 0x2a0
	UParticleSystemComponent* QuestParticleSystem; // 0x2d8
};

struct UABP_VMP_TOR_M_HAIR_05_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x2d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x710
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0xb50
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xf90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0xfb0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x13f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1830
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x1850
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1c90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x20d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2510
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2950
	FAnimNode_Root AnimGraphNode_Root; // 0x2d90
};

struct UTBP_ContextualHelp_MasqueradeWeaponFired_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UAISense_Touch {
	TArray<FAITouchEvent> RegisteredEvents; // 0x80
};

struct UMaterialExpressionDistanceToNearestSurface {
	FExpressionInput Position; // 0x40
};

struct UAkFolder {
	FString UnrealFolderPath; // 0x40
	FString WwiseFolderPath; // 0x50
};

struct UInAppPurchaseRestoreCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UConstantQNRT {
	UConstantQNRTSettings* Settings; // 0x78
};

struct UEnvQueryNode {
	int32_t VerNum; // 0x28
};

struct UTigerHSensesTargetComponent {
	float HeartAnimTime; // 0xb0
	float HeartRate; // 0xb4
	float HeartRateTarget; // 0xb8
	float HeartRateNone; // 0xbc
	float HeartRateSuspicious; // 0xc0
	float HeartRateThreatened; // 0xc4
	float HeartRateVariance; // 0xc8
	float HeartRateChangeRate; // 0xcc
	UCurveFloat* HeartAnimRateCurve; // 0xd0
};

struct UTigerPingClientData {
	UTigerPingBase* PingClass; // 0x38
	ATigerPlayerState* OwningPlayerState; // 0x40
	FTigerPingContext Context; // 0x48
	FVector WorldLocation; // 0x64
	bool bIsLocalPlayerInterested; // 0x70
};

struct UMovieSceneCompiledData {
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

struct UTigerHighTierLootComponent {
	TSoftClassPtr<UObject> HighTierLootGroup; // 0xb0
};

struct UTigerFindSessionAsync {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailed; // 0x40
};

struct USoundSubmixBase {
	TArray<USoundSubmixBase*> ChildSubmixes; // 0x28
};

struct UDistributionFloatUniformCurve {
	FInterpCurveVector2D ConstantCurve; // 0x38
};

struct UComboBoxWidgetStyle {
	FComboBoxStyle ComboBoxStyle; // 0x30
};

struct UAkAssetDataSwitchContainer {
	TArray<UAkAssetDataSwitchContainerData*> SwitchContainers; // 0x78
	UAkGroupValue* DefaultGroupValue; // 0x88
};

struct UTigerTraversalStateWallHangConfig {
	float OffsetDistanceForFutureWallHangPosition; // 0x50
	bool bShouldBlockWallHangIfLikelyToSlideOff; // 0x54
	bool bShouldAllowPlayerToSlideoffHorizontallyDuringDeceleration; // 0x55
	UCurveFloat* VerticalVelocitySlowDownRate; // 0x58
	UCurveFloat* HorizontalVelocitySlowDownRate; // 0x60
};

struct UTigerFullscreenFXManager {
	ATigerPlayerController* Controller; // 0xb0
	UMaterial* TimedPostFXMaterial; // 0xc0
	UMaterialParameterCollection* TimedPostFXCollection; // 0xc8
	FName TimedPostFXCollectionName; // 0xd0
};

struct UTigerPushConnectionManager {
	UTigerGameInstance* GameInstance; // 0x28
};

struct UGizmoAxisIntervalParameterSource {
	TScriptInterface<IGizmoFloatParameterSource> FloatParameterSource; // 0x48
	float MinParameter; // 0x58
	float MaxParameter; // 0x5c
};

struct UBTDecorator_CheckGameplayTagsOnActor {
	FBlackboardKeySelector ActorToCheck; // 0x68
	EGameplayContainerMatchType TagsToMatch; // 0x90
	FGameplayTagContainer GameplayTags; // 0x98
	FString CachedDescription; // 0xb8
};

struct APlayerState {
	float Score; // 0x228
	int32_t PlayerId; // 0x22c
	char Ping; // 0x230
	char bShouldUpdateReplicatedPing : 1; // 0x232
	char bIsSpectator : 1; // 0x232
	char bOnlySpectator : 1; // 0x232
	char bIsABot : 1; // 0x232
	char bIsInactive : 1; // 0x232
	char bFromPreviousLevel : 1; // 0x232
	int32_t StartTime; // 0x234
	ULocalMessage* EngineMessageClass; // 0x238
	FString SavedNetworkAddress; // 0x248
	FUniqueNetIdRepl UniqueID; // 0x258
	APawn* PawnPrivate; // 0x288
	FString PlayerNamePrivate; // 0x308
};

struct UTigerBloodVeinBranchMovementComponent {
	ACharacter* PlayerPawn; // 0xc0
	ATigerGameState* GameState; // 0xc8
	TArray<FVector> MovementTargets; // 0xd0
	float StartSimulationTime; // 0xe0
	bool bHitGround; // 0xe4
	float SecondsPerStep; // 0xe8
	FTigerBloodVeinBranchMovementSettings PrimaryMovementSettings; // 0xec
	FTigerBloodVeinBranchMovementSettings SecondaryMovementSettings; // 0x110
	ATigerBloodVeinBranch* Branch; // 0x140
	ATigerHolyIncense* HolyIncense; // 0x148
};

struct ATBP_BuffPostProcess_ProjectionDash_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
	UMaterialInterface* Material; // 0x270
	FLinearColor Color; // 0x278
	FMulticastInlineDelegate Tick; // 0x288
};

struct UPlanePositionGizmo {
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

struct ATBP_BootGameMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2f0
	USceneComponent* DefaultSceneRoot; // 0x2f8
};

struct ULightmassPortalComponent {
	UBoxComponent* PreviewBox; // 0x1f8
};

struct UTigerAiPathToTargetService {
	FBlackboardKeySelector TargetLocationKey; // 0x70
	FBlackboardKeySelector SuitableEdgeLocationKey; // 0x98
	FBlackboardKeySelector IsTargetOutOfBoundsKey; // 0xc0
	FBlackboardKeySelector HasPathToTargetKey; // 0xe8
	FBlackboardKeySelector IsPathOutOfBoundsKey; // 0x110
	float OutOfBoundsDistance; // 0x138
	float HeightDifferenceOutOfBounds; // 0x13c
	bool bDebugDraw; // 0x140
};

struct UTigerTitleListAsset {
	TArray<FText> TitlesByLevel; // 0x30
};

struct USourceEffectChorusPreset {
	FSourceEffectChorusSettings Settings; // 0x108
};

struct AOnlineBeacon {
	float BeaconConnectionInitialTimeout; // 0x230
	float BeaconConnectionTimeout; // 0x234
	UNetDriver* NetDriver; // 0x238
};

struct UCommandlet {
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

struct UMaterialExpressionNoise {
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

struct UTBP_UI_ArchetypeSelect_Archetype_Default_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* OnSelect; // 0x268
	UWidgetAnimation* OnDisable; // 0x270
	UWidgetAnimation* OnHover; // 0x278
	UImage* ArchetypeBackground; // 0x280
	UImage* ArchetypeBeam; // 0x288
	UImage* ArchetypeGlow; // 0x290
	UImage* ArchetypeIcon; // 0x298
	UTigerStyledRichTextBlock* ArchetypeNameDefault_Text; // 0x2a0
	UTigerStyledRichTextBlock* ArchetypeNameSelected_Text; // 0x2a8
	UImage* Background; // 0x2b0
	UButton* CardButton; // 0x2b8
	UImage* DefaultBorder; // 0x2c0
	UImage* DisabledIcon; // 0x2c8
	UImage* HoverGlow; // 0x2d0
	UImage* SelectBorder; // 0x2d8
	UImage* SelectedGlow; // 0x2e0
	UImage* SelectedIcon; // 0x2e8
	UCanvasPanel* SelectionDoneDeco; // 0x2f0
	UTigerPowerKit* ArchetypeData; // 0x2f8
	FMulticastInlineDelegate OnSelected; // 0x300
	bool IsSelected; // 0x310
	bool IsDisabled; // 0x311
	bool IsHoverable; // 0x312
	bool NewVar_1; // 0x313
};

struct UTBP_ScoutingFamiliarPassive_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe8
	ATigerFamiliarScout* Scout; // 0xf0
	bool Replicated Passive Activated; // 0xf8
	float TimeStart; // 0xfc
	bool bParticleVisibility; // 0x100
};

struct UAnimStreamable {
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

struct UInterpTrack {
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

struct UNiagaraDataInterfaceRenderTarget2DArray {
	FIntVector Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe4
	char bOverrideFormat : 1; // 0xe5
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x108
};

struct UTigerAnimNotifyStateAttachMesh {
	UStaticMesh* MeshToSpawn; // 0x30
	FName SocketName; // 0x38
	bool bShowInEditor; // 0x40
	float PropTimeout; // 0x44
};

struct UTigerRangedModItemAsset {
	TArray<UTigerRangedWeaponModModifier*> ModEffects; // 0x128
	int32_t ModEquipPriority; // 0x138
	ERangedWeaponModType ModType; // 0x13c
};

struct UScrollBoxWidgetStyle {
	FScrollBoxStyle ScrollBoxStyle; // 0x30
};

struct UARImageComponent {
	FARImageUpdatePayload ReplicatedPayload; // 0x280
};

struct UGeometryCollectionCache {
	FRecordedTransformTrack RecordedData; // 0x28
	UGeometryCollection* SupportedCollection; // 0x38
	FGuid CompatibleCollectionState; // 0x40
};

struct UAkWinGDKInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkWinGDKAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UTigerMasqueradeConsequenceBloodHuntedSyncInstance {
	UUserWidget* MapMarkerClass; // 0x58
	UTigerCompassMarkerWidget* CompassMarkerClass; // 0x60
	UTexture2D* CompassMarkerTexture; // 0x68
	FBloodHuntMarker Marker; // 0x70
};

struct UTigerChallengeDealDamage {
	bool bNeedsToDamagePlayer; // 0xb0
	FTigerChallengeRequirementWeaponType RequiredWeaponConstraint; // 0xb8
};

struct UTigerWeaponAbilityAxeThrow {
	UTigerThrowingAxeConfig* Config; // 0xf0
	ATigerPlayer* Player; // 0xf8
};

struct UComponentDelegateBinding {
	TArray<FBlueprintComponentDelegateBinding> ComponentDelegateBindings; // 0x28
};

struct UAkGameObject {
	UAkAudioEvent* AkAudioEvent; // 0x1f8
	FString EventName; // 0x200
};

struct UTigerTypeAndRarityData {
	TMap<ETigerInventoryItemType, FText> ItemTypeNames; // 0x30
	TMap<ETigerInventoryItemType, FText> ShortItemTypeNames; // 0x80
	TMap<ETigerWeaponAmmoType, FText> AmmoTypeNames; // 0xd0
	TMap<ETigerWeaponType, FText> ShortWeaponTypeNames; // 0x120
	TMap<ETigerLootCategory, FText> LootCategoryNames; // 0x170
	TMap<ETigerItemRarity, FText> ItemRarityNames; // 0x1c0
	TMap<ETigerItemRarity, ETigerUIColor> ItemRarityColors; // 0x210
};

struct UMaterialExpressionMakeMaterialAttributes {
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

struct UFieldSystemComponent {
	UFieldSystem* FieldSystem; // 0x450
	TArray<TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x468
};

struct UTigerArchetypeLevelWidget {
	int32_t ArchetypeLevel; // 0x280
	TWeakObjectPtr<ATigerPlayer> RepresentedPlayer; // 0x284
};

struct UTigerBuffArtifactFeedingBonusInstance {
	UTigerBuffArtifactFeedingBonus* ArtifactFeedingBonusBuff; // 0x88
	ATigerPlayer* Player; // 0x90
};

struct UTigerAnimIKWindow {
	FName SocketName; // 0x30
	FName SocketToLineTraceFrom; // 0x38
	ETigerIKDirection IKSearchDirection; // 0x40
	FName TargetJoint; // 0x44
	float TargetJointVerticalOffsetAmount; // 0x4c
	float TargetJointHorizontalOffsetAmount; // 0x50
	float TargetJointDepthOffsetAmount; // 0x54
	float IKResultVerticalAdjustment; // 0x58
	float IKResultHorizontalAdjustment; // 0x5c
	float IKResultDepthAdjustment; // 0x60
	float IKResultAlpha; // 0x64
	bool bIKShouldRemainActiveWhenAnimationLoops; // 0x68
	float InOutBlendSpeed; // 0x6c
	bool bShouldBlendInAndOut; // 0x70
};

struct UTigerBuffFOTTKnockbackWallStun {
	float WallStunnedTimer; // 0x248
};

struct UMovieSceneCaptureProtocolBase {
	EMovieSceneCaptureProtocolState State; // 0x50
};

struct UBreakpoint {
	char bEnabled : 1; // 0x28
	UEdGraphNode* Node; // 0x30
	char bStepOnce : 1; // 0x38
	char bStepOnce_WasPreviouslyDisabled : 1; // 0x38
	char bStepOnce_RemoveAfterHit : 1; // 0x38
};

struct UExpandableArea {
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

struct UWidgetSwitcherSlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct ATigerBelowBalconyEntryTrigger {
	FName EnterBalconyFromBelowAnimName; // 0x260
};

struct UTBP_UI_TOS_PP_Popup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FulFixAnimation; // 0x268
	UWidgetAnimation* ShowAgreeButton; // 0x270
	UWidgetAnimation* ReadArrowFlash; // 0x278
	UTBP_UI_MenuButton_C* AgreeButton; // 0x280
	UTBP_UI_MenuButton_C* CloseButton; // 0x288
	UTBP_UI_MenuButton_C* CloseButton_2; // 0x290
	UTigerStyledRichTextBlock* DeniedText; // 0x298
	UTigerStyledRichTextBlock* DeniedTitleText; // 0x2a0
	UTBP_UI_MenuButton_C* DisagreeButton; // 0x2a8
	UTBP_UI_Popup_Base_C* DisagreePopup; // 0x2b0
	UImage* Image_144; // 0x2b8
	UTigerStyledRichTextBlock* License_Text_Newsletter; // 0x2c0
	UTigerStyledRichTextBlock* License_Text_PP; // 0x2c8
	UTigerStyledRichTextBlock* License_Text_Special1; // 0x2d0
	UTigerStyledRichTextBlock* License_Text_Special2; // 0x2d8
	UTigerStyledRichTextBlock* License_Text_Special3; // 0x2e0
	UTigerStyledRichTextBlock* License_Text_Special4; // 0x2e8
	UTigerStyledRichTextBlock* License_Text_TOS; // 0x2f0
	UOverlay* ReadArrowContainer; // 0x2f8
	UImage* ReadArrowShadow; // 0x300
	UScrollBox* ScrollBox_1; // 0x308
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x310
	UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x318
	UTBP_UI_Divider_C* TBP_UI_Divider_3; // 0x320
	UTBP_UI_Divider_C* TBP_UI_Divider_4; // 0x328
	UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x330
	UTBP_UI_Scrollbox_C* TBP_UI_Scrollbox; // 0x338
	UTigerStyledRichTextBlock* Title_Text_Newsletter; // 0x340
	UTigerStyledRichTextBlock* Title_Text_PP; // 0x348
	UTigerStyledRichTextBlock* Title_Text_Special1; // 0x350
	UTigerStyledRichTextBlock* Title_Text_Special2; // 0x358
	UTigerStyledRichTextBlock* Title_Text_Special3; // 0x360
	UTigerStyledRichTextBlock* Title_Text_Special4; // 0x368
	UTigerStyledRichTextBlock* Title_Text_TOS; // 0x370
	UWidgetSwitcher* WidgetSwitcher_License; // 0x378
	UWidgetSwitcher* WidgetSwitcher_Title; // 0x380
	FMulticastInlineDelegate OnDecisionMade; // 0x388
	FString Bold_TextFormating; // 0x398
	FString EL_TextFormatting; // 0x3a8
	FString UL_TextFormatting; // 0x3b8
	FString Subtitle_TextFormatting; // 0x3c8
	FString Subheader_TextFormatting; // 0x3d8
	bool Agreed; // 0x3e8
	bool ScrolledFinished; // 0x3e9
	bool bShouldForceToAccept; // 0x3ea
	UTBP_UI_CheckboxWithClickabelText_C* CurrentClickableCheckboxCallerRef; // 0x3f0
};

struct UTigerPingMarkerProxy {
	UTigerPingClientData* PingData; // 0x68
};

struct USoundSourceBus {
	ESourceBusChannels SourceBusChannels; // 0x370
	float SourceBusDuration; // 0x374
	UAudioBus* AudioBus; // 0x378
	char bAutoDeactivateWhenSilent : 1; // 0x380
};

struct UFoliageType_InstancedStaticMesh {
	UStaticMesh* Mesh; // 0x3a8
	TArray<UMaterialInterface*> OverrideMaterials; // 0x3b0
	UFoliageInstancedStaticMeshComponent* ComponentClass; // 0x3c0
};

struct UTigerAnimNotify_Melee {
	FName EventName; // 0x38
};

struct ALevelVariantSetsActor {
	FSoftObjectPath LevelVariantSets; // 0x228
};

struct UMaterialExpressionThinTranslucentMaterialOutput {
	FExpressionInput TransmittanceColor; // 0x40
};

struct UTigerExpRequirements {
	FTigerExpLevelRequirements ExpLevelRequirements; // 0x28
};

struct UTigerPlayerBeingLoggedInToServer {
	UTigerGroupCoordinator* GroupCoordinator; // 0x28
};

struct AWheeledVehicle {
	USkeletalMeshComponent* Mesh; // 0x288
	UWheeledVehicleMovementComponent* VehicleMovement; // 0x290
};

struct USoundAttenuation {
	FSoundAttenuationSettings Attenuation; // 0x28
};

struct UTigerBuffVanish {
	float TimeReductionPerMeterMoved; // 0x248
	float NoiseNotifyEventRange; // 0x24c
	UCurveFloat* MaterialTransitionIntoCurve; // 0x250
	UCurveFloat* MaterialTransitionOutFromCurve; // 0x258
	UParticleSystem* BlendOutParticles; // 0x260
};

struct UWidgetTree {
	UWidget* RootWidget; // 0x28
};

struct ATBP_Katana_Reflector_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	USceneComponent* Null; // 0x230
	USceneComponent* Scene; // 0x238
	UStaticMeshComponent* StaticMesh; // 0x240
	USceneComponent* Null3; // 0x248
	USceneComponent* Null2; // 0x250
	AActor* ReflectedProjectile; // 0x258
	float Start_time2; // 0x260
	UNiagaraComponent* niagaravar; // 0x268
};

struct UBlackboardData {
	UBlackboardData* Parent; // 0x30
	TArray<FBlackboardEntry> Keys; // 0x38
	char bHasSynchronizedKeys : 1; // 0x48
};

struct UTigerOnlineSettings {
	bool bResetPlayerDataInEditor; // 0x38
	FString OnlineServicesBaseUrlDev; // 0x40
	FString OnlineServicesBaseUrlUatRelease; // 0x50
	FString OnlineServicesBaseUrlUatMain; // 0x60
	FString OnlineServicesBaseUrlUatPs5; // 0x70
	FString OnlineServicesBaseUrlUatStaging; // 0x80
	FString OnlineServicesBaseUrlProd; // 0x90
	FString OnlineServicesBaseUrlLocal; // 0xa0
	FString OnlineServicesPushBaseUrlDev; // 0xb0
	FString OnlineServicesPushBaseUrlUatRelease; // 0xc0
	FString OnlineServicesPushBaseUrlUatMain; // 0xd0
	FString OnlineServicesPushBaseUrlUatPs5; // 0xe0
	FString OnlineServicesPushBaseUrlUatStaging; // 0xf0
	FString OnlineServicesPushBaseUrlProd; // 0x100
	FString OnlineServicesPushBaseUrlLocal; // 0x110
	FString CdnBaseUrlDev; // 0x120
	FString CdnBaseUrlUat; // 0x130
	FString CdnBaseUrlProd; // 0x140
	FString PlayerDataServiceUri; // 0x150
	FString SessionServiceUri; // 0x160
	FString PushServiceUri; // 0x170
	FString PartyServiceUri; // 0x180
	FString FriendServiceUri; // 0x190
	FString PresenceServiceUri; // 0x1a0
	FString LoginQueueServiceUri; // 0x1b0
	FString StoreServiceUri; // 0x1c0
};

struct UTigerTraversalJumpState {
	UTigerTraversalStateJumpConfig* JumpConfig; // 0x40
};

struct USkeletalMeshSimplificationSettings {
	FName SkeletalMeshReductionModuleName; // 0x38
};

struct USoundNodeLooping {
	int32_t LoopCount; // 0x48
	char bLoopIndefinitely : 1; // 0x4c
};

struct UViewport {
	FLinearColor BackgroundColor; // 0x120
};

struct UInterpTrackVectorBase {
	FInterpCurveVector VectorTrack; // 0x70
	float CurveTension; // 0x88
};

struct UChooseNextWaypoint {
	FBlackboardKeySelector Index; // 0x70
	FBlackboardKeySelector Waypoint; // 0x98
	FBlackboardKeySelector bWaypointDirectionIsForward; // 0xc0
};

struct UTigerThrallSystem {
	TArray<UTigerLocalThrallData*> PlayerThralls; // 0xc8
	TMap<int32_t, UTigerLocalThrallMissionData*> LocalActiveMissions; // 0xe0
};

struct UAxisPositionGizmo {
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

struct UInterpTrackInstSound {
	float LastUpdatePosition; // 0x28
	UAudioComponent* PlayAudioComp; // 0x30
};

struct UWidgetAnimationDelegateBinding {
	TArray<FBlueprintWidgetAnimationDelegateBinding> WidgetAnimationDelegateBindings; // 0x28
};

struct UTigerAICommandMoveTo {
	FTigerAIMoveToLocationData MoveToData; // 0x40
};

struct UParticleModuleParameterDynamic_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x48
};

struct UAkMediaAsset {
	uint32_t ID; // 0x28
	bool AutoLoad; // 0x2c
	TArray<UObject*> UserData; // 0x30
	UAkMediaAssetData* CurrentMediaAssetData; // 0x40
};

struct ANavLinkProxy {
	TArray<FNavigationLink> PointLinks; // 0x238
	TArray<FNavigationSegmentLink> SegmentLinks; // 0x248
	UNavLinkCustomComponent* SmartLinkComp; // 0x258
	bool bSmartLinkIsRelevant; // 0x260
	FMulticastInlineDelegate OnSmartLinkReached; // 0x268
};

struct UDatasmithSceneComponentTemplate {
	FTransform RelativeTransform; // 0x30
	EComponentMobility Mobility; // 0x60
	TSoftObjectPtr<USceneComponent> AttachParent; // 0x68
	bool bVisible; // 0x90
	TSet<FName> Tags; // 0x98
};

struct UTigerJumpConfig {
	bool bDebugJumpline; // 0x170
	bool bDebugBlockJump; // 0x171
	float JumpVelocity; // 0x174
	bool bAllowDoublejumpAfterDiscipline; // 0x178
	bool bShouldDelayJumpInAir; // 0x179
	UAnimMontage* LaunchMontage; // 0x180
	UAnimMontage* GroundAnticipationMontage; // 0x188
	float CameraPresetDuration; // 0x190
	UMaterial* JumpFullscreenPostFX; // 0x198
	UMaterialParameterCollection* JumpPostFXCollection; // 0x1a0
	FName JumpPostFXStrengthParameterName; // 0x1a8
	float JumpPostFXMaxStrength; // 0x1b0
	float JumpEffectsDuration; // 0x1b4
	float JumpEffectsLerpInTime; // 0x1b8
	float JumpEffectsLerpOutTime; // 0x1bc
	UAkAudioEvent* LeapStartedAudio; // 0x1c0
	FVector FeetObstacleOffset; // 0x1c8
	float ObstacleDistanceCheck; // 0x1d4
	float PartiallyBlockedJumpModifier; // 0x1d8
	float BackLeapPitch; // 0x1dc
	UCurveFloat* LeapPitchCurve; // 0x1e0
	bool bCanLeapBackward; // 0x1e8
	float AnimationBlendoutTime; // 0x1ec
};

struct UMaterialExpressionLandscapeLayerSample {
	FName ParameterName; // 0x40
	float PreviewWeight; // 0x48
	FGuid ExpressionGUID; // 0x4c
};

struct USourceEffectMidSideSpreaderPreset {
	FSourceEffectMidSideSpreaderSettings Settings; // 0x98
};

struct AGameMode {
	FName MatchState; // 0x2c8
	char bDelayedStart : 1; // 0x2d0
	int32_t NumSpectators; // 0x2d4
	int32_t NumPlayers; // 0x2d8
	int32_t NumBots; // 0x2dc
	float MinRespawnDelay; // 0x2e0
	int32_t NumTravellingPlayers; // 0x2e4
	ULocalMessage* EngineMessageClass; // 0x2e8
	TArray<APlayerState*> InactivePlayerArray; // 0x2f0
	float InactivePlayerStateLifeSpan; // 0x300
	int32_t MaxInactivePlayers; // 0x304
	bool bHandleDedicatedServerReplays; // 0x308
};

struct UTigerBaseThrallData {
	ETigerThrallId ThrallId; // 0x30
	FText ThrallName; // 0x38
	FText ThrallDescription; // 0x50
	FText ThrallHintText; // 0x68
	TArray<UTexture2D*> ThrallPortraits; // 0x80
	FText ThrallKeepsakeName; // 0x90
	UTexture2D* ThrallKeepsakePortrait; // 0xa8
	FTigerThrallStats StartingStats; // 0xb0
	UTigerGrimoireEntry* GrimoireEntry; // 0xc0
};

struct UTigerReplicationGraphNode_AlwaysRelevant_ForConnection {
	AActor* LastViewer; // 0x68
	AActor* LastViewTarget; // 0x70
};

struct UDefaultLevelSequenceInstanceData {
	AActor* TransformOriginActor; // 0x30
	FTransform TransformOrigin; // 0x40
};

struct UTigerDialogueCondition_SeasonLevel {
	int32_t RequiredSeasonLevel; // 0x30
	ETigerDialogueEqualitySpecifier SeasonEquality; // 0x34
};

struct UTigerResurrectComponent {
	int32_t TokenCount; // 0xb0
	ATigerPlayer* MyPawnToResurrect; // 0xc8
};

struct UMaterialExpressionChannelMaskParameter {
	EChannelMaskParameterColor MaskChannel; // 0x70
};

struct UTBP_ContextualHelp_Ping_TipsOnSpawn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UNiagaraDataInterfaceVectorField {
	UVectorField* Field; // 0x38
	bool bTileX; // 0x40
	bool bTileY; // 0x41
	bool bTileZ; // 0x42
};

struct UParticleModuleLocationPrimitiveTriangle {
	FRawDistributionVector StartOffset; // 0x30
	FRawDistributionFloat Height; // 0x78
	FRawDistributionFloat Angle; // 0xa8
	FRawDistributionFloat Thickness; // 0xd8
};

struct UTigerAIUpdateBloodDrainedService {
	float MaxTimeInBloodDrainedState; // 0x70
};

struct UTigerGroupCoordinator {
	TArray<UTigerPlayerGroup*> Groups; // 0xb8
};

struct ATigerSingleItemSpawner {
	ETigerTelemetryItemSourceID TelemetryIDSource; // 0x268
};

struct UTigerFirstTimeArchetypeSelectionUI {
	FMulticastInlineDelegate OnPreloadingDone; // 0x3b0
	FMulticastInlineDelegate OnSelectedArchetypeChanged; // 0x3c0
	FName CameraSocketName; // 0x3d0
	FName AnimationSequenceName; // 0x3d8
	UAkAudioEvent* CharacterSelectedAudioEvent; // 0x3e0
	UAkAudioEvent* CharacterHoveredAudioEvent; // 0x3e8
	UAkAudioEvent* EnterElysiumAudioEvent; // 0x3f0
	ETigerPowerKitType DefaultSelectedArchetype; // 0x3f8
	TSoftClassPtr<UObject> PaperDollClass; // 0x400
	ATigerPaperDoll* CachedPaperDollClass; // 0x428
	ATigerPaperDoll* PaperDoll; // 0x430
	int32_t SelectedAppearanceIndex; // 0x438
	ETigerPowerKitType SelectedArchetypeType; // 0x43c
	UTigerPlayerClanData* CurrentClanData; // 0x440
	TArray<FTigerCharacterAppearance> ArchetypeApperances; // 0x448
};

struct APhysicsThruster {
	UPhysicsThrusterComponent* ThrusterComponent; // 0x228
};

struct UMovieSceneBuiltInEasingFunction {
	EMovieSceneBuiltInEasing Type; // 0x30
};

struct UMaterialFunctionInstance {
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

struct UTigerAIReportSuspciousPlayer {
	FBlackboardKeySelector PoliceTarget; // 0x70
	FBlackboardKeySelector CurrentMasqueradeTarget; // 0x98
	FBlackboardKeySelector PlayerNeedsToBeReported; // 0xc0
};

struct UMovieSceneGeometryCollectionTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UAnimationSharingStateProcessor {
	TSoftObjectPtr<UEnum> AnimationStateEnum; // 0x28
};

struct UMaterialExpressionReflectionCapturePassSwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Reflection; // 0x54
};

struct UTigerAICoordinator {
	float SprintTimeUntilReport; // 0xb0
	float ClimbTimeUntilReport; // 0xb4
	float AirTimeUntilReport; // 0xb8
	float SuspicionStateTime; // 0xbc
	float ThreatStateTime; // 0xc0
	float SuspiciousStateEscapeRadiusSquared; // 0xc4
	float ThreatenedStateEscapeRadiusSquared; // 0xc8
	float MakeNearbyNPCsSuspiciousRadius; // 0xcc
	float FearValueDecreasePerSecond; // 0xd0
	float CrimeActionCooldownDistance; // 0xd4
	float CrimeActionMasqueradePointThreshold; // 0xdc
	float PatrollingHelicopterEventRadius; // 0xe0
	float PatrollingHelicopterLowestResponseHeight; // 0xe4
	float PatrollingHelicopterEventTimeOut; // 0xe8
	float PatrollingHelicopterTimeBetweenGunfireEventPositionUpdate; // 0xec
	float TimeInSmokeUntilRemoval; // 0xf0
	bool bUseMovementTickets; // 0xf4
	UTigerAiMovementBudgetAsset* MovementBudgetAsset; // 0xf8
	bool bPatrollingHelicotpersAreActive; // 0x100
	TArray<ATigerEntityPatrollingHelicopter*> EntityPatrollingHelicopters; // 0x198
	TArray<UTigerAiEntityPlatoon*> EntityPlatoons; // 0x228
	TArray<UTigerAiSquad*> Squads; // 0x238
	ATigerPlayerGrid* PlayerGrid; // 0x2e8
	TArray<FTigerPlayerActionProcessData> DelayedPlayerActionProcesses; // 0x3b8
};

struct APainCausingVolume {
	char bPainCausing : 1; // 0x270
	float DamagePerSec; // 0x274
	UDamageType* DamageType; // 0x278
	float PainInterval; // 0x280
	char bEntryPain : 1; // 0x284
	char BACKUP_bPainCausing : 1; // 0x284
	AController* DamageInstigator; // 0x288
};

struct UTigerItemAsset {
	UStaticMesh* StaticMesh; // 0x38
	ETigerInventoryItemType ItemType; // 0x40
	ETigerItemRarity ItemRarity; // 0x41
	FText Name; // 0x48
	FText ShortName; // 0x60
	int32_t MaxStackSize; // 0x78
	int32_t DropFromStackCount; // 0x7c
	FText Description; // 0x80
	UTigerItemAsset* LowerRarity; // 0x98
	int32_t SortWithinCategoryAscending; // 0xa0
	FText TooltipItemType; // 0xa8
	UTexture2D* UIIcon; // 0xc0
	UTexture2D* HUDIcon; // 0xc8
	UTigerWeapon* WeaponClass; // 0xd0
	UTigerBuff* ItemBuff; // 0xd8
	bool bShouldAutoPickUpItem; // 0xe0
	bool bTriggerBuffOnItemPickup; // 0xe1
	bool bRemoveBuffOnItemDropped; // 0xe2
	UAkAudioEvent* PingWantVoiceAudioEvent; // 0xe8
	UAkAudioEvent* PingHaveVoiceAudioEvent; // 0xf0
	UAkAudioEvent* PingHereVoiceAudioEvent; // 0xf8
	UAkAudioEvent* PickUpAudioEvent; // 0x100
	uint64_t PersistentTelemetryID; // 0x108
	UTigerGrimoireEntry* EntryToUnlock; // 0x110
	FString EntryId; // 0x118
};

struct UTBP_ANS_UseVDM_C {
	int32_t Type; // 0x30
	ETigerDetachMethod DetachMethod; // 0x34
};

struct UAITask_MoveTo {
	FMulticastInlineDelegate OnRequestFailed; // 0x70
	FMulticastInlineDelegate OnMoveFinished; // 0x80
	FAIMoveRequest MoveRequest; // 0x90
};

struct UABP_PoseableMesh_F_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x348
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x358
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x378
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x480
};

struct UParticleModuleRotation {
	FRawDistributionFloat StartRotation; // 0x30
};

struct UPhysicsHandleComponent {
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

struct UTestMovieSceneSubTrack {
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UTigerBuff {
	FTigerCharacterStatModification StatModification; // 0x30
	FTigerStatusEffect StatusEffect; // 0xc0
	float Duration; // 0xcc
	bool bDoesTick; // 0xd0
	float TimeBetweenTicks; // 0xd4
	FTigerNiagaraAttachment ActivatedNiagaraAttachment; // 0xd8
	FTigerNiagaraAttachment NiagaraAttachment; // 0x120
	TArray<FTigerNiagaraAttachment> AdditionalNiagaraAttachments; // 0x168
	FTigerNiagaraAttachment DeactivatedNiagaraAttachment; // 0x178
	bool bOnlySpawnBuffParticleOnLocalPlayer; // 0x1c0
	bool bAttachToMesh; // 0x1c1
	FName AttachPoint; // 0x1c4
	bool bBuffParticleTypeAbsoluteRotation; // 0x1cc
	UParticleSystem* BuffParticleType; // 0x1d0
	bool bOnlySpawnActivatedParticleOnLocalPlayer; // 0x1d8
	bool bAttachActivatedParticle; // 0x1d9
	bool bActivatedParticleTypeAbsoluteRotation; // 0x1da
	UParticleSystem* ActivatedParticleType; // 0x1e0
	bool bOnlySpawnDeactivatedParticleOnLocalPlayer; // 0x1e8
	bool bAttachDeactivatedParticle; // 0x1e9
	bool bDeactivatedParticleTypeAbsoluteRotation; // 0x1ea
	UParticleSystem* DeactivatedParticleType; // 0x1f0
	FName ActivationMontageName; // 0x1f8
	UAkAudioEvent* ActivatedSFX; // 0x200
	UAkAudioEvent* DeactivatedSFX; // 0x208
	bool bStacks; // 0x210
	bool bOnlyStackWithDifferentCasters; // 0x211
	int32_t MaxStacks; // 0x214
	bool bKeepAfterDeath; // 0x218
	int32_t RemoveBuffOnActions; // 0x21c
	bool bShowOnUI; // 0x220
	UTexture2D* StatusImage; // 0x228
	ETigerBuffStatusType StatusType; // 0x230
	ETigerBuffProgressType ProgressType; // 0x231
	ATigerBuffPostProcess* PostProcessEffect; // 0x238
	uint64_t PersistentTelemetryID; // 0x240
};

struct UTigerBuffFrenzyInstance {
	UTigerBuffFrenzy* FrenzyBuff; // 0x88
};

struct ATigerInteractiveGrimoireProp {
	UStaticMeshComponent* ItemMesh; // 0x280
	UTigerGrimoireEntry* EntryToUnlock; // 0x288
	UTigerIngameSubmenuWidget* GrimoireSubmenu; // 0x290
	char CustomStencilGroup; // 0x298
};

struct UGizmoTransformChangeStateTarget {
	TScriptInterface<IToolContextTransactionProvider> TransactionManager; // 0x50
};

struct UNavLinkComponent {
	TArray<FNavigationLink> Links; // 0x458
};

struct UTigerSignificanceSettings {
	FTigerSignificanceBudget Budgets[0x2]; // 0x38
};

struct UAssetManager {
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

struct AMagicLeapARPinInfoActorBase {
	FGuid PinId; // 0x228
	bool bVisibilityOverride; // 0x238
};

struct UTigerDistrictComponent {
	bool bIsInsideHolyIncense; // 0xc0
	bool bIsOutOfBounds; // 0xc1
	float DistanceToHolyIncense; // 0xc4
	FVector2D ClosestGasLocation; // 0xc8
	FVector2D ClosestGasNormal; // 0xd0
	float OutOfBoundsDamagePerTick; // 0xd8
	float OutOfBoundsDamageTickInterval; // 0xdc
	UCurveFloat* EffectStrengthScaling; // 0xe8
	bool bDebugEffectStrength; // 0xf0
	ATigerCharacter* TigerCharacter; // 0xf8
	ATigerLevelScriptActor* TigerLevelScriptActor; // 0x100
	FTimerHandle DamageTimerHandle; // 0x108
};

struct UARBasicLightEstimate {
	float AmbientIntensityLumens; // 0x28
	float AmbientColorTemperatureKelvin; // 0x2c
	FLinearColor AmbientColor; // 0x30
};

struct AGameSession {
	int32_t MaxSpectators; // 0x228
	int32_t MaxPlayers; // 0x22c
	int32_t MaxPartySize; // 0x230
	char MaxSplitscreensPerConnection; // 0x234
	bool bRequiresPushToTalk; // 0x235
	FName SessionName; // 0x238
};

struct ARadialForceActor {
	URadialForceComponent* ForceComponent; // 0x228
};

struct UTigerCharacterHeadConfiguration {
	FTigerLodSplitMesh SplitMesh; // 0x110
	TSoftObjectPtr<UPoseAsset> FacePostAsset; // 0x188
	TSoftObjectPtr<UAnimSequence> FacePoseSourceAnimation; // 0x1b0
	TArray<TSoftObjectPtr<UMaterialInterface>> BodySkinMaterials; // 0x1d8
	TArray<TSoftClassPtr<UObject>> SkinTones; // 0x1e8
	FName HeadgearMaleSocket; // 0x1f8
	FName HeadgearFemaleSocket; // 0x200
	FName HeadgearOffsetSocketName; // 0x208
	FName HeadgearOffsetLocator; // 0x210
	FTigerCharacterHeadHeadgearOffset HeadgearOffset; // 0x218
	FName EyewearSocket; // 0x230
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x238
};

struct UTigerMultiplayRegionCache {
	float RefreshRegionsIntervalSeconds; // 0x40
	float MaxWaitTimeSecondsAfterRegionDetermination; // 0x44
	FTigerRegionPingerSettings PingerSettings; // 0x48
	float MinimumMeasurementTime; // 0x98
	int32_t DesiredMeasuredRegions; // 0x9c
};

struct UTBP_AN_AttachProp_C {
	FName AttachIdentifier; // 0x38
};

struct APaperCharacter {
	UPaperFlipbookComponent* Sprite; // 0x4b8
};

struct UMovieSceneMediaPlayerPropertySection {
	UMediaSource* MediaSource; // 0xe8
	bool bLoop; // 0xf0
};

struct UInputAxisKeyDelegateBinding {
	TArray<FBlueprintInputAxisKeyDelegateBinding> InputAxisKeyDelegateBindings; // 0x28
};

struct UTigerQuestObjective {
	FText Description; // 0x28
	FText FlavourText; // 0x40
	UTigerChallenge* Objective; // 0x58
	bool bComplete; // 0x60
	TArray<UTigerQuestObjective*> FollowOnObjectives; // 0x68
	FGuid ID; // 0x78
	UTigerQuest* ParentQuest; // 0x88
	UTigerQuestObjective* ParentObjective; // 0x90
	ATigerPlayerController* OwningPlayerController; // 0x98
};

struct ATBP_StakeProjectile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e0
};

struct UStaticMeshSocket {
	FName SocketName; // 0x28
	FVector RelativeLocation; // 0x30
	FRotator RelativeRotation; // 0x3c
	FVector RelativeScale; // 0x48
	FString Tag; // 0x58
};

struct UControlPointMeshComponent {
	float VirtualTextureMainPassMaxDrawDistance; // 0x4e0
};

struct UInterpTrackInstToggle {
	ETrackToggleAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
	char bSavedActiveState : 1; // 0x30
};

struct AGeometryCollectionDebugDrawActor {
	FGeometryCollectionDebugDrawWarningMessage WarningMessage; // 0x228
	FGeometryCollectionDebugDrawActorSelectedRigidBody SelectedRigidBody; // 0x230
	bool bDebugDrawWholeCollection; // 0x248
	bool bDebugDrawHierarchy; // 0x249
	bool bDebugDrawClustering; // 0x24a
	EGeometryCollectionDebugDrawActorHideGeometry HideGeometry; // 0x24b
	bool bShowRigidBodyId; // 0x24c
	bool bShowRigidBodyCollision; // 0x24d
	bool bCollisionAtOrigin; // 0x24e
	bool bShowRigidBodyTransform; // 0x24f
	bool bShowRigidBodyInertia; // 0x250
	bool bShowRigidBodyVelocity; // 0x251
	bool bShowRigidBodyForce; // 0x252
	bool bShowRigidBodyInfos; // 0x253
	bool bShowTransformIndex; // 0x254
	bool bShowTransform; // 0x255
	bool bShowParent; // 0x256
	bool bShowLevel; // 0x257
	bool bShowConnectivityEdges; // 0x258
	bool bShowGeometryIndex; // 0x259
	bool bShowGeometryTransform; // 0x25a
	bool bShowBoundingBox; // 0x25b
	bool bShowFaces; // 0x25c
	bool bShowFaceIndices; // 0x25d
	bool bShowFaceNormals; // 0x25e
	bool bShowSingleFace; // 0x25f
	int32_t SingleFaceIndex; // 0x260
	bool bShowVertices; // 0x264
	bool bShowVertexIndices; // 0x265
	bool bShowVertexNormals; // 0x266
	bool bUseActiveVisualization; // 0x267
	float PointThickness; // 0x268
	float LineThickness; // 0x26c
	bool bTextShadow; // 0x270
	float TextScale; // 0x274
	float NormalScale; // 0x278
	float AxisScale; // 0x27c
	float ArrowScale; // 0x280
	FColor RigidBodyIdColor; // 0x284
	float RigidBodyTransformScale; // 0x288
	FColor RigidBodyCollisionColor; // 0x28c
	FColor RigidBodyInertiaColor; // 0x290
	FColor RigidBodyVelocityColor; // 0x294
	FColor RigidBodyForceColor; // 0x298
	FColor RigidBodyInfoColor; // 0x29c
	FColor TransformIndexColor; // 0x2a0
	float TransformScale; // 0x2a4
	FColor LevelColor; // 0x2a8
	FColor ParentColor; // 0x2ac
	float ConnectivityEdgeThickness; // 0x2b0
	FColor GeometryIndexColor; // 0x2b4
	float GeometryTransformScale; // 0x2b8
	FColor BoundingBoxColor; // 0x2bc
	FColor FaceColor; // 0x2c0
	FColor FaceIndexColor; // 0x2c4
	FColor FaceNormalColor; // 0x2c8
	FColor SingleFaceColor; // 0x2cc
	FColor VertexColor; // 0x2d0
	FColor VertexIndexColor; // 0x2d4
	FColor VertexNormalColor; // 0x2d8
	UBillboardComponent* SpriteComponent; // 0x2e0
};

struct UMovieSceneAkAudioEventSection {
	UAkAudioEvent* Event; // 0x128
	bool RetriggerEvent; // 0x130
	int32_t ScrubTailLengthMs; // 0x134
	bool StopAtSectionEnd; // 0x138
	FString EventName; // 0x140
	float MaxSourceDuration; // 0x170
	FString MaxDurationSourceID; // 0x178
};

struct UBoxComponent {
	FVector BoxExtent; // 0x468
	float LineThickness; // 0x474
};

struct ATigerBloodVein {
	FMulticastInlineDelegate OnEndOfVeinReached; // 0x228
	USplineComponent* Spline; // 0x238
	USceneComponent* CurrentPlayerSpot; // 0x240
	float EarliestDisconnectPoint; // 0x248
	float LatestDisconnectPoint; // 0x24c
	float VeinMovementSpeed; // 0x250
	bool bIsVeinActive; // 0x254
	ATigerHolyIncense* HolyIncense; // 0x258
	float StartSynchronizedTime; // 0x26c
};

struct UPaperTerrainComponent {
	UPaperTerrainMaterial* TerrainMaterial; // 0x450
	bool bClosedSpline; // 0x458
	bool bFilledSpline; // 0x459
	UPaperTerrainSplineComponent* AssociatedSpline; // 0x460
	int32_t RandomSeed; // 0x468
	float SegmentOverlapAmount; // 0x46c
	FLinearColor TerrainColor; // 0x470
	int32_t ReparamStepsPerSegment; // 0x480
	ESpriteCollisionMode SpriteCollisionDomain; // 0x484
	float CollisionThickness; // 0x488
	UBodySetup* CachedBodySetup; // 0x490
};

struct UTigerTraversalStateWallJumpConfig {
	FTigerWallJumpBlendBundle DefaultWallJumpBlendBundle; // 0x50
	FTigerWallJumpBlendBundle WallJumpBlendBundleFromClimb; // 0x60
	FVector WallJumpColliderOffset; // 0x70
	float PostJumpClimbInteractionDelay; // 0x7c
	float JumpCoolDownTime; // 0x80
	float WallJumpSphereColliderRadius; // 0x84
	float SecondaryWallSweepRadius; // 0x88
	float MaximumHorizontalJumpVelocity; // 0x8c
	float MinimumHorizontalJumpVelocity; // 0x90
	float WallJumpZVelocity; // 0x94
	float WallJumpInputDirectionCutOffAngle; // 0x98
	float MaxWallJumpStateDuration; // 0x9c
	float WallJumpDownwardWallNormalCutOffAngle; // 0xa0
	float WallJumpRequiredHalfAngleFromWallWhenHoldingForward; // 0xa4
	float WallJumpDeadzoneHalfAngle; // 0xa8
	float WallJumpMaxAllowedHalfAngleBeforeClamping; // 0xac
	bool bShouldCapNumberOfWallJumpsFromSimilarWalls; // 0xb0
	float ConsecutiveWallJumpNormalLikenessThreshold; // 0xb4
	float WallJumpDelayTime; // 0xb8
	float WallJumpDownwardSpeedGainInSeconds; // 0xbc
	float WallJumpSlideSpeedScale; // 0xc0
	float WallJumpMinimumWallSlideSpeed; // 0xc4
	float WallJumpMaximumWallSlideSpeed; // 0xc8
	float WallJumpForwardHalfAngleAnimationCutOff; // 0xcc
	ETigerWallJumpInputOption WallJumpInputOption; // 0xd0
	char MaximumNumberOfWallJumpsFromSimilarWall; // 0xd1
	char NumberOfWallJumpsToRestoreOnDoubleJump; // 0xd2
	bool bShouldApplyDownwardForceDuringWallJumpDelay; // 0xd3
	bool AdjustWallJumpSlideSpeedOnInputAngle; // 0xd4
	bool bShouldValidateDownwardAngleOfHitResult; // 0xd5
	UCurveFloat* WallJumpDelaySpeedCurve; // 0xd8
};

struct UARPointComponent {
	FARPointUpdatePayload ReplicatedPayload; // 0x278
};

struct UTigerDialogueCondition_Quest {
	ETigerDialogueQuestRequirementSpecifier Requirement; // 0x30
	FTigerQuestIdentifier questIdToCheck; // 0x38
};

struct UScrollBox {
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

struct USoundBase {
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

struct ATBP_BlindingBeauty_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UPostProcessComponent* PostProcess; // 0x240
	USphereComponent* Sphere; // 0x248
	USceneComponent* DefaultSceneRoot; // 0x250
	float UpdateAnticipationVisibility_NewTrack_0_F0F03A1D44C8206BF3C18B8D5DDCCB03; // 0x258
	ETimelineDirection UpdateAnticipationVisibility__Direction_F0F03A1D44C8206BF3C18B8D5DDCCB03; // 0x25c
	UTimelineComponent* UpdateAnticipationVisibility; // 0x260
	float Timeline_0_NewTrack_0_975FED8B458A734F1FB99DAE89CB25E3; // 0x268
	ETimelineDirection Timeline_0__Direction_975FED8B458A734F1FB99DAE89CB25E3; // 0x26c
	UTimelineComponent* Timeline_1; // 0x270
	float GlowCurve_NewTrack_0_50A9B99C47A6E2549D5E76977AAB52D1; // 0x278
	ETimelineDirection GlowCurve__Direction_50A9B99C47A6E2549D5E76977AAB52D1; // 0x27c
	UTimelineComponent* GlowCurve; // 0x280
	FVector AreaSize; // 0x288
	bool IsInDash; // 0x294
	UParticleSystemComponent* NewVar_1; // 0x298
	bool AnticipationPhase; // 0x2a0
};

struct UInterpTrackDirector {
	TArray<FDirectorTrackCut> CutTrack; // 0x70
	char bSimulateCameraCutsOnClients : 1; // 0x80
};

struct ASphereReflectionCapture {
	UDrawSphereComponent* DrawCaptureRadius; // 0x230
};

struct UTigerAnimMetaDataAsset {
	TMap<FName, UAnimMetaData*> AnimMetaData; // 0x30
};

struct UChildConnection {
	UNetConnection* Parent; // 0x1af0
};

struct UTBP_EyebrowColorCustomization_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x148
};

struct UABP_VMP_NOS_M_HAIR_03_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct UBoneMaskFilter {
	TArray<FInputBlendPose> BlendPoses; // 0x28
};

struct UNiagaraDataInterfaceGrid2DCollection {
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xf8
	ENiagaraGpuBufferFormat OverrideBufferFormat; // 0x118
	char bOverrideFormat : 1; // 0x119
	TMap<uint64_t, UTextureRenderTarget2DArray*> ManagedRenderTargets; // 0x170
};

struct UAudioComponent {
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

struct ARecastNavMesh {
	char bDrawTriangleEdges : 1; // 0x438
	char bDrawPolyEdges : 1; // 0x438
	char bDrawFilledPolys : 1; // 0x438
	char bDrawNavMeshEdges : 1; // 0x438
	char bDrawTileBounds : 1; // 0x438
	char bDrawPathCollidingGeometry : 1; // 0x438
	char bDrawTileLabels : 1; // 0x438
	char bDrawPolygonLabels : 1; // 0x438
	char bDrawDefaultPolygonCost : 1; // 0x439
	char bDrawLabelsOnPathNodes : 1; // 0x439
	char bDrawNavLinks : 1; // 0x439
	char bDrawFailedNavLinks : 1; // 0x439
	char bDrawClusters : 1; // 0x439
	char bDrawOctree : 1; // 0x439
	char bDrawOctreeDetails : 1; // 0x439
	char bDrawMarkedForbiddenPolys : 1; // 0x439
	char bDistinctlyDrawTilesBeingBuilt : 1; // 0x43a
	float DrawOffset; // 0x43c
	char bFixedTilePoolSize : 1; // 0x440
	int32_t TilePoolSize; // 0x444
	float TileSizeUU; // 0x448
	float CellSize; // 0x44c
	float CellHeight; // 0x450
	float AgentRadius; // 0x454
	float AgentHeight; // 0x458
	float AgentMaxSlope; // 0x45c
	float AgentMaxStepHeight; // 0x460
	float MinRegionArea; // 0x464
	float MergeRegionSize; // 0x468
	float MaxSimplificationError; // 0x46c
	int32_t MaxSimultaneousTileGenerationJobsCount; // 0x470
	int32_t TileNumberHardLimit; // 0x474
	int32_t PolyRefTileBits; // 0x478
	int32_t PolyRefNavPolyBits; // 0x47c
	int32_t PolyRefSaltBits; // 0x480
	FVector NavMeshOriginOffset; // 0x484
	float DefaultDrawDistance; // 0x490
	float DefaultMaxSearchNodes; // 0x494
	float DefaultMaxHierarchicalSearchNodes; // 0x498
	ERecastPartitioning RegionPartitioning; // 0x49c
	ERecastPartitioning LayerPartitioning; // 0x49d
	int32_t RegionChunkSplits; // 0x4a0
	int32_t LayerChunkSplits; // 0x4a4
	char bSortNavigationAreasByCost : 1; // 0x4a8
	char bPerformVoxelFiltering : 1; // 0x4a8
	char bMarkLowHeightAreas : 1; // 0x4a8
	char bUseExtraTopCellWhenMarkingAreas : 1; // 0x4a8
	char bFilterLowSpanSequences : 1; // 0x4a8
	char bFilterLowSpanFromTileCache : 1; // 0x4a8
	char bDoFullyAsyncNavDataGathering : 1; // 0x4a8
	char bUseBetterOffsetsFromCorners : 1; // 0x4a8
	char bStoreEmptyTileLayers : 1; // 0x4a9
	char bUseVirtualFilters : 1; // 0x4a9
	char bAllowNavLinkAsPathEnd : 1; // 0x4a9
	char bUseVoxelCache : 1; // 0x4a9
	float TileSetUpdateInterval; // 0x4ac
	float HeuristicScale; // 0x4b0
	float VerticalDeviationFromGroundCompensation; // 0x4b4
};

struct UTigerDisciplineTeleport {
	UTigerTeleportConfig* Config; // 0x78
};

struct UInterpCurveEdSetup {
	TArray<FCurveEdTab> Tabs; // 0x28
	int32_t ActiveTab; // 0x38
};

struct UMaterialExpressionSingleLayerWaterMaterialOutput {
	FExpressionInput ScatteringCoefficients; // 0x40
	FExpressionInput AbsorptionCoefficients; // 0x54
	FExpressionInput PhaseG; // 0x68
	FExpressionInput ColorScaleBehindWater; // 0x7c
};

struct USkeletalBodySetup {
	bool bSkipScaleFromAnimation; // 0x2a0
	TArray<FPhysicalAnimationProfile> PhysicalAnimationData; // 0x2a8
};

struct UParticleModuleRotationRateMultiplyLife {
	FRawDistributionFloat LifeMultiplier; // 0x30
};

struct UTexture2DDynamic {
	EPixelFormat Format; // 0xf0
};

struct UTigerChallengeDownPlayer {
	FTigerChallengeRequirementWeaponType RequiredWeaponConstraint; // 0xb0
};

struct UTigerAnimNotifyState_CancelReactionIfThreatened {
	ETigerAIAnimationMode StateToCancelFor; // 0x30
};

struct UBrushComponent {
	UModel* Brush; // 0x450
	UBodySetup* BrushBodySetup; // 0x458
};

struct UTigerHealingBuff {
	float FlatHealPerSecond; // 0x248
	float PercentageHealPerSecond; // 0x24c
	UTigerCharacterEffect* HealEffect; // 0x250
};

struct UMaterialExpressionMin {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct AOnlineBeaconClient {
	AOnlineBeaconHostObject* BeaconOwner; // 0x258
	UNetConnection* BeaconConnection; // 0x260
	EBeaconConnectionState ConnectionState; // 0x268
};

struct UTigerBuffVanishInstance {
	UTigerBuffVanish* VanishBuff; // 0x88
	ATigerPlayer* Player; // 0x90
};

struct USkyAtmosphereComponent {
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

struct ACharacter {
	USkeletalMeshComponent* Mesh; // 0x288
	UCharacterMovementComponent* CharacterMovement; // 0x290
	UCapsuleComponent* CapsuleComponent; // 0x298
	FBasedMovementInfo BasedMovement; // 0x2a0
	FBasedMovementInfo ReplicatedBasedMovement; // 0x2d0
	float AnimRootMotionTranslationScale; // 0x300
	FVector BaseTranslationOffset; // 0x304
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

struct UBTTask_RunBehaviorDynamic {
	FGameplayTag InjectionTag; // 0x70
	UBehaviorTree* DefaultBehaviorAsset; // 0x78
	UBehaviorTree* BehaviorAsset; // 0x80
};

struct UTigerDialogueCondition_MatchCount {
	int32_t RequiredMatches; // 0x30
	ETigerDialogueEqualitySpecifier MatchEquality; // 0x34
};

struct ATigerSharkDeathTriggerVolume {
	AActor* Shark; // 0x260
	FRotator SharkRotation; // 0x268
	FVector SharkSpawnLocationOffset; // 0x274
	float KillDelay; // 0x280
	TArray<ATigerCharacter*> SavedVictims; // 0x288
};

struct APawn {
	char bUseControllerRotationPitch : 1; // 0x230
	char bUseControllerRotationYaw : 1; // 0x230
	char bUseControllerRotationRoll : 1; // 0x230
	char bCanAffectNavigationGeneration : 1; // 0x230
	float BaseEyeHeight; // 0x234
	EAutoReceiveInput AutoPossessPlayer; // 0x238
	EAutoPossessAI AutoPossessAI; // 0x239
	char RemoteViewPitch; // 0x23a
	AController* AIControllerClass; // 0x240
	APlayerState* PlayerState; // 0x248
	AController* LastHitBy; // 0x258
	AController* Controller; // 0x260
	FVector ControlInputVector; // 0x26c
	FVector LastControlInputVector; // 0x278
};

struct UDragDropOperation {
	FString Tag; // 0x28
	UObject* Payload; // 0x38
	UWidget* DefaultDragVisual; // 0x40
	EDragPivot Pivot; // 0x48
	FVector2D Offset; // 0x4c
	FMulticastInlineDelegate OnDrop; // 0x58
	FMulticastInlineDelegate OnDragCancelled; // 0x68
	FMulticastInlineDelegate OnDragged; // 0x78
};

struct USharkRenderingSettings {
	int32_t CustomPrimitiveFloatDataNameMapping[0x3a]; // 0x38
	int32_t CustomPrimitiveVector2DataNameMapping[0x13]; // 0x120
	int32_t CustomPrimitiveVector3DataNameMapping[0x19]; // 0x16c
	int32_t CustomPrimitiveVector4DataNameMapping[0x9]; // 0x1d0
};

struct UARMeshComponent {
	FARMeshUpdatePayload ReplicatedPayload; // 0x280
};

struct UARTrackedGeometry {
	FGuid UniqueID; // 0x28
	FTransform LocalToTrackingTransform; // 0x40
	FTransform LocalToAlignedTrackingTransform; // 0x70
	EARTrackingState TrackingState; // 0xa0
	UMRMeshComponent* UnderlyingMesh; // 0xb0
	EARObjectClassification ObjectClassification; // 0xb8
	int32_t LastUpdateFrameNumber; // 0xd0
	FName DebugName; // 0xe0
};

struct UTBP_ProjectionDash_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x168
	float FullscreenFurthestFocusPoint; // 0x170
};

struct UIntervalGizmo {
	UGizmoTransformChangeStateTarget* StateTarget; // 0x38
	UTransformProxy* TransformProxy; // 0x50
	TArray<UPrimitiveComponent*> ActiveComponents; // 0x58
	TArray<UInteractiveGizmo*> ActiveGizmos; // 0x68
	UGizmoComponentAxisSource* AxisYSource; // 0x90
	UGizmoComponentAxisSource* AxisZSource; // 0x98
};

struct UTBP_UI_ArchetypeSelect_Clan_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UHorizontalBox* ArchetypeHorizontalBox; // 0x268
	UImage* ClanImageWidget; // 0x270
	UTextBlock* ClanNameWidget; // 0x278
	UTigerPlayerClanData* ClanData; // 0x280
	TArray<UUserWidget*> ArchetypeWidgets; // 0x288
};

struct USoundNodeSoundClass {
	USoundClass* SoundClassOverride; // 0x48
};

struct UTextureLODSettings {
	TArray<FTextureLODGroup> TextureLODGroups; // 0x28
};

struct APartyBeaconClient {
	FString DestSessionId; // 0x2e8
	FPartyReservation PendingReservation; // 0x2f8
	EClientRequestType RequestType; // 0x348
	bool bPendingReservationSent; // 0x349
	bool bCancelReservation; // 0x34a
};

struct APointLight {
	UPointLightComponent* PointLightComponent; // 0x238
};

struct UTigerBloodPotencyComponent {
	float BloodTypeWeights[0x4]; // 0xb0
	bool bEnableBloodTypeEffects; // 0xc0
	UTigerBloodPotencyVisualizationConfig* CurrentHeightenedSensesConfig; // 0xc8
	UTigerBloodPotencyVisualizationConfig* CurrentInWorldConfig; // 0xd0
	UTigerBloodPotencyVisualizationConfig* HeightenedSensesVisualConfiguration[0x4]; // 0xd8
	UTigerBloodPotencyVisualizationConfig* HeightenedSensesVisualConfigurationByBloodType[0x4]; // 0xf8
	UTigerBloodPotencyVisualizationConfig* InWorldVisualConfiguration[0x4]; // 0x118
	UTigerBloodPotencyVisualizationConfig* InWorldVisualConfigurationByBloodType[0x4]; // 0x138
	FName HeartMeshMaximumVisibilityDistanceName; // 0x158
	TArray<UMaterialInstance*> HsMeshPreviousMaterials; // 0x160
	TArray<UMaterialInstance*> HsMeshTargetMaterials; // 0x170
	TArray<UMaterialInstanceDynamic*> HsMeshCurrentMaterials; // 0x180
	USkeletalMeshComponent* HsSkeletalMeshComponent; // 0x190
	UParticleSystemComponent* HsParticleSystemComponent; // 0x198
	UNiagaraComponent* HsNiagaraComponent; // 0x1a0
	TArray<UMaterialInstance*> InWorldMeshPreviousMaterials; // 0x1a8
	TArray<UMaterialInstance*> InWorldMeshTargetMaterials; // 0x1b8
	TArray<UMaterialInstanceDynamic*> InWorldMeshCurrentMaterials; // 0x1c8
	USkeletalMeshComponent* InWorldSkeletalMeshComponent; // 0x1d8
	UParticleSystemComponent* InWorldParticleSystemComponent; // 0x1e0
	UNiagaraComponent* InWorldNiagaraComponent; // 0x1e8
	ATigerBaseNPC* NpcOwner; // 0x1f0
	float MaterialInterpolationDuration; // 0x208
};

struct ATigerInteractiveCollectible {
	UTigerCollectibleData* Collectible; // 0x290
	UStaticMeshComponent* CollectibleMesh; // 0x298
	UAkAudioEvent* CollectibleSoundEffect; // 0x2a0
	UParticleSystemComponent* CollectibleParticleSystem; // 0x2a8
};

struct UParticleModuleLight_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x120
};

struct UParticleModuleSpawnPerUnit {
	float UnitScalar; // 0x38
	float MovementTolerance; // 0x3c
	FRawDistributionFloat SpawnPerUnit; // 0x40
	float MaxFrameDistance; // 0x70
	char bIgnoreSpawnRateWhenMoving : 1; // 0x74
	char bIgnoreMovementAlongX : 1; // 0x74
	char bIgnoreMovementAlongY : 1; // 0x74
	char bIgnoreMovementAlongZ : 1; // 0x74
};

struct UConsoleSettings {
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

struct UExponentialHeightFogComponent {
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

struct UEnvQueryGenerator_PathingGrid {
	FAIDataProviderBoolValue PathToItem; // 0xf8
	UNavigationQueryFilter* NavigationFilter; // 0x130
	FAIDataProviderFloatValue ScanRangeMultiplier; // 0x138
};

struct UBTTask_RunBehavior {
	UBehaviorTree* BehaviorAsset; // 0x70
};

struct UTigerAICommandPlayerProximityWait {
	float SquaredPlayerProximityRadiusRequired; // 0x40
};

struct UMaterialExpressionRotateAboutAxis {
	FExpressionInput NormalizedRotationAxis; // 0x40
	FExpressionInput RotationAngle; // 0x54
	FExpressionInput PivotPoint; // 0x68
	FExpressionInput Position; // 0x7c
	float Period; // 0x90
};

struct UAIDataProvider_QueryParams {
	FName ParamName; // 0x28
	float FloatValue; // 0x30
	int32_t IntValue; // 0x34
	bool BoolValue; // 0x38
};

struct UPanelSlot {
	UPanelWidget* Parent; // 0x28
	UWidget* Content; // 0x30
};

struct UTigerDialogueInteractionScreen {
	float TransitionTime; // 0x290
	TWeakObjectPtr<ATigerBaseNPC> VendorNPC; // 0x294
	TWeakObjectPtr<UTigerAnimInstance> TargetAnimationInstance; // 0x29c
	TWeakObjectPtr<UTigerInteractiveNpcComponent> InteractiveNpcComponent; // 0x2a4
};

struct UTigerOutfitVendorUI {
	UTigerVendorComponent* VendorComponent; // 0x3b0
	UTigerVendorStoreCategory* CurrentCategory; // 0x3b8
};

struct UTigerBuffThorns {
	float HealInterval; // 0x258
	float HealPercentage; // 0x25c
	UTigerCharacterEffect* HealEffect; // 0x260
	UAkAudioEvent* DOTTriggerEvent; // 0x268
};

struct UTigerPassiveCollectorConfig {
	float CarryCapacityMultiplier; // 0x118
};

struct AARSharedWorldGameMode {
	int32_t BufferSizePerChunk; // 0x310
};

struct ACineCameraActor {
	FCameraLookatTrackingSettings LookatTrackingSettings; // 0x7b0
};

struct UMovieSceneGeometryCollectionSection {
	FMovieSceneGeometryCollectionParams Params; // 0xe8
};

struct UTBP_UI_JoinElysiumScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UTBP_UI_MenuButton_C* ExitButton; // 0x298
	UThrobber* LoadingThrobber; // 0x2a0
	UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x2a8
	UTBP_UI_MenuButton_C* TryAgainButton; // 0x2b0
	UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2b8
	TArray<FBlueprintSessionResult> FoundSessions; // 0x2c0
	ESlateVisibility ThrobberVisibility; // 0x2d0
	FText TitleText; // 0x2d8
	ESlateVisibility ButtonVisibility; // 0x2f0
	FMulticastInlineDelegate OnFailed; // 0x2f8
	FMulticastInlineDelegate OnSuccess; // 0x308
	FTigerBpFindSessionSelectedSession SelectedSession; // 0x318
};

struct UBTTask_GameplayTaskBase {
	char bWaitForGameplayTask : 1; // 0x70
};

struct UAISenseConfig {
	FColor DebugColor; // 0x28
	float MaxAge; // 0x2c
	char bStartsEnabled : 1; // 0x30
};

struct UTigerAiTryFindLocationAgainstElevatedTarget {
	FBlackboardKeySelector TargetLocationKey; // 0x70
	FBlackboardKeySelector SuggestedLocationKey; // 0x98
	float MaxStepbackDistance; // 0xc0
	float MinStepbackDistance; // 0xc4
	float DesiredMaxVerticalAngle; // 0xc8
};

struct UTBP_Buff_Syringe_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x258
};

struct USafeZone {
	bool PadLeft; // 0x120
	bool PadRight; // 0x121
	bool PadTop; // 0x122
	bool PadBottom; // 0x123
};

struct UUniformGridSlot {
	EHorizontalAlignment HorizontalAlignment; // 0x38
	EVerticalAlignment VerticalAlignment; // 0x39
	int32_t Row; // 0x3c
	int32_t Column; // 0x40
};

struct UMovieSceneCameraCutSection {
	bool bLockPreviousCamera; // 0xf0
	FGuid CameraGuid; // 0xf4
	FMovieSceneObjectBindingID CameraBindingID; // 0x104
	FTransform InitialCameraCutTransform; // 0x120
	bool bHasInitialCameraCutTransform; // 0x150
};

struct UWrapBox {
	FVector2D InnerSlotPadding; // 0x120
	float WrapWidth; // 0x128
	float WrapSize; // 0x12c
	bool bExplicitWrapWidth; // 0x130
	bool bExplicitWrapSize; // 0x131
	EOrientation Orientation; // 0x132
};

struct UTigerAnimNotify_Ragdoll {
	FName RagdollOnlyBelowBone; // 0x38
	bool bIncludeNamedBone; // 0x40
	float VelocityScale; // 0x44
};

struct UHapticFeedbackEffect_SoundWave {
	USoundWave* SoundWave; // 0x28
};

struct UUserInterfaceSettings {
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

struct UTigerNpcPropAsset {
	TArray<FName> TagsToAddToNpc; // 0x30
	UTigerAnimationSetAsset* PropAnimationSet; // 0x40
	TArray<FName> HeldPropAttachments; // 0x48
};

struct UTigerPlayerServerLoginProcess {
	TMap<FString, UTigerPlayerBeingLoggedInToServer*> playersBeingLoggedInToServerByUniqueLoginId; // 0x28
	UTigerGroupCoordinator* GroupCoordinator; // 0x78
};

struct UNiagaraDataInterfaceAudioOscilloscope {
	USoundSubmix* Submix; // 0x38
	int32_t Resolution; // 0x40
	float ScopeInMilliseconds; // 0x44
};

struct USequenceCameraShakeSequencePlayer {
	UObject* BoundObjectOverride; // 0x480
	UMovieSceneSequence* Sequence; // 0x488
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x490
};

struct UMovieSceneEventRepeaterSection {
	FMovieSceneEvent Event; // 0xf0
};

struct UTigerAuthenticationManager {
	bool bEnableSharkmobAccountLogin; // 0x68
	UTigerGameInstance* GameInstance; // 0x70
};

struct ACameraRig_Rail {
	float CurrentPositionOnRail; // 0x228
	bool bLockOrientationToRail; // 0x22c
	USceneComponent* TransformComponent; // 0x230
	USplineComponent* RailSplineComponent; // 0x238
	USceneComponent* RailCameraMount; // 0x240
};

struct UTBP_UI_Divider_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Decoration; // 0x268
	UImage* Left_Line; // 0x270
	UImage* LeftArrow_2; // 0x278
	UImage* Line_2; // 0x280
	UOverlay* Line_Overlay; // 0x288
	UWidgetSwitcher* LineStyleIndex; // 0x290
	UImage* RightArrow_2; // 0x298
	UImage* RightLine; // 0x2a0
	USizeBox* SizeBox_Override; // 0x2a8
	float ArrowSize; // 0x2b0
	bool EnableMiddleDecoration; // 0x2b4
	UTexture2D* ArrowTexture; // 0x2b8
	float LineThickness; // 0x2c0
	FSlateColor LineTint; // 0x2c8
};

struct UNiagaraPrecompileContainer {
	TArray<UNiagaraScript*> Scripts; // 0x28
	UNiagaraSystem* System; // 0x38
};

struct UGameNetworkManagerSettings {
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

struct UClothingAssetCommon {
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
	UClothingAssetCustomData* CustomData; // 0x110
	FClothConfig_Legacy ClothConfig; // 0x118
};

struct UDatasmithCineCameraComponentTemplate {
	FDatasmithCameraFilmbackSettingsTemplate FilmbackSettings; // 0x30
	FDatasmithCameraLensSettingsTemplate LensSettings; // 0x38
	FDatasmithCameraFocusSettingsTemplate FocusSettings; // 0x3c
	float CurrentFocalLength; // 0x44
	float CurrentAperture; // 0x48
	FDatasmithPostProcessSettingsTemplate PostProcessSettings; // 0x50
};

struct UGameEngine {
	float MaxDeltaTime; // 0xde0
	float ServerFlushLogInterval; // 0xde4
	UGameInstance* GameInstance; // 0xde8
};

struct UBTService_BlueprintBase {
	AAIController* AIOwner; // 0x70
	AActor* ActorOwner; // 0x78
	char bShowPropertyDetails : 1; // 0x90
	char bShowEventDetails : 1; // 0x90
};

struct UMaterialExpressionSphericalParticleOpacity {
	FExpressionInput Density; // 0x40
	float ConstantDensity; // 0x54
};

struct UOperatorField {
	float Magnitude; // 0xb0
	UFieldNodeBase* RightField; // 0xb8
	UFieldNodeBase* LeftField; // 0xc0
	EFieldOperationType Operation; // 0xc8
};

struct UTigerSplatmapGenerationSettings {
	float CellBounds; // 0x28
	FIntPoint CellCount; // 0x2c
	FIntPoint CellTextureDimensions; // 0x34
	FVector CenterLocation; // 0x3c
};

struct UMaterialExpressionArctangentFast {
	FExpressionInput Input; // 0x40
};

struct ANavigationObjectBase {
	UCapsuleComponent* CapsuleComponent; // 0x230
	UBillboardComponent* GoodSprite; // 0x238
	UBillboardComponent* BadSprite; // 0x240
	char bIsPIEPlayerStart : 1; // 0x248
};

struct ATeleportMarker_C {
	UStaticMeshComponent* StaticMesh1; // 0x238
};

struct UQuitMatchCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct URetainerBox {
	bool bRetainRender; // 0x120
	bool RenderOnInvalidation; // 0x121
	bool RenderOnPhase; // 0x122
	int32_t Phase; // 0x124
	int32_t PhaseCount; // 0x128
	UMaterialInterface* EffectMaterial; // 0x130
	FName TextureParameter; // 0x138
};

struct UAudioImpulseResponse {
	TArray<float> ImpulseResponse; // 0x28
	int32_t NumChannels; // 0x38
	int32_t SampleRate; // 0x3c
	float NormalizationVolumeDb; // 0x40
	bool bTrueStereo; // 0x44
	TArray<float> IRData; // 0x48
};

struct UTigerBloodTrackPassiveList {
	TArray<UTigerBloodTrackPassiveConfig*> PassivesAvailableToAll; // 0x30
};

struct UParticleModuleMeshRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x80
};

struct UUMGSequenceTickManager {
	TSet<TWeakObjectPtr<UUserWidget>> WeakUserWidgets; // 0x28
	UMovieSceneEntitySystemLinker* Linker; // 0x78
};

struct UTigerBlueprintLootLocationComponent {
	UTigerLootLocationConfiguration* Configuration; // 0xb0
	char GameTypeFilter; // 0xb8
};

struct UTBP_UI_VerificationSection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTBP_UI_Button_CTA_C* Button_CTA_SignInButton; // 0x268
	UTigerStyledRichTextBlock* CheckMailText; // 0x270
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x278
	UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x280
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber_Verification; // 0x288
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Code; // 0x290
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Verification; // 0x298
	UTBP_UI_TextButton_C* TBP_UI_TextButton_Back; // 0x2a0
	UTBP_UI_TextButton_C* TBP_UI_TextButton_NoEmail; // 0x2a8
	UTBP_UI_AdvancedTextBox_C* VerificationCodeBox; // 0x2b0
	UTigerStyledRichTextBlock* VerificationCodeToText; // 0x2b8
	FText DescriptionFormat; // 0x2c0
	FMulticastInlineDelegate RegisterAction; // 0x2d8
	FMulticastInlineDelegate BackAction; // 0x2e8
	UTBP_UI_LoginScreen_C* LoginScreen; // 0x2f8
};

struct UPawnActionsComponent {
	APawn* ControlledPawn; // 0xb0
	TArray<FPawnActionStack> ActionStacks; // 0xb8
	TArray<FPawnActionEvent> ActionEvents; // 0xc8
	UPawnAction* CurrentAction; // 0xd8
};

struct UTigerRepositionConfig {
	ATigerRepositionTracer* TracerActor; // 0x160
	UTigerBuffReposition* RewindBuff; // 0x168
	float RewindTimeSeconds; // 0x170
	float SampleRate; // 0x174
	float RewindSpeed; // 0x178
	float RewindPlaybackTimeMin; // 0x17c
	float RewindPlaybackTimeMax; // 0x180
};

struct ALandscapeProxy {
	ULandscapeSplinesComponent* SplineComponent; // 0x228
	FGuid LandscapeGuid; // 0x230
	FIntPoint LandscapeSectionOffset; // 0x240
	int32_t MaxLODLevel; // 0x248
	float LODDistanceFactor; // 0x24c
	ELandscapeLODFalloff LODFalloff; // 0x250
	float ComponentScreenSizeToUseSubSections; // 0x254
	float LOD0ScreenSize; // 0x258
	float LOD0DistributionSetting; // 0x25c
	float LODDistributionSetting; // 0x260
	float TessellationComponentScreenSize; // 0x264
	bool UseTessellationComponentScreenSizeFalloff; // 0x268
	float TessellationComponentScreenSizeFalloff; // 0x26c
	int32_t OccluderGeometryLOD; // 0x270
	int32_t StaticLightingLOD; // 0x274
	UPhysicalMaterial* DefaultPhysMaterial; // 0x278
	float StreamingDistanceMultiplier; // 0x280
	UMaterialInterface* LandscapeMaterial; // 0x288
	UMaterialInterface* LandscapeHoleMaterial; // 0x2b0
	TArray<FLandscapeProxyMaterialOverride> LandscapeMaterialsOverride; // 0x2b8
	bool bMeshHoles; // 0x2c8
	char MeshHolesMaxLod; // 0x2c9
	TArray<URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x2d0
	int32_t VirtualTextureNumLods; // 0x2e0
	int32_t VirtualTextureLodBias; // 0x2e4
	ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x2e8
	float NegativeZBoundsExtension; // 0x2ec
	float PositiveZBoundsExtension; // 0x2f0
	TArray<ULandscapeComponent*> LandscapeComponents; // 0x2f8
	TArray<ULandscapeHeightfieldCollisionComponent*> CollisionComponents; // 0x308
	TArray<UHierarchicalInstancedStaticMeshComponent*> FoliageComponents; // 0x318
	bool bHasLandscapeGrass; // 0x38c
	float StaticLightingResolution; // 0x390
	char CastShadow : 1; // 0x394
	char bCastDynamicShadow : 1; // 0x394
	char bCastStaticShadow : 1; // 0x394
	char bCastFarShadow : 1; // 0x398
	char bCastHiddenShadow : 1; // 0x39c
	char bCastShadowAsTwoSided : 1; // 0x3a0
	char bAffectDistanceFieldLighting : 1; // 0x3a4
	FLightingChannels LightingChannels; // 0x3a5
	char bUseMaterialPositionOffsetInStaticLighting : 1; // 0x3a8
	char bRenderCustomDepth : 1; // 0x3a8
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x3ac
	int32_t CustomDepthStencilValue; // 0x3b0
	float LDMaxDrawDistance; // 0x3b4
	FLightmassPrimitiveSettings LightmassSettings; // 0x3b8
	int32_t CollisionMipLevel; // 0x3d0
	int32_t SimpleCollisionMipLevel; // 0x3d4
	float CollisionThickness; // 0x3d8
	FBodyInstance BodyInstance; // 0x3e0
	char bGenerateOverlapEvents : 1; // 0x538
	char bBakeMaterialPositionOffsetIntoCollision : 1; // 0x538
	int32_t ComponentSizeQuads; // 0x53c
	int32_t SubsectionSizeQuads; // 0x540
	int32_t NumSubsections; // 0x544
	char bUsedForNavigation : 1; // 0x548
	char bFillCollisionUnderLandscapeForNavmesh : 1; // 0x548
	bool bUseDynamicMaterialInstance; // 0x54c
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x54d
	bool bUseLandscapeForCullingInvisibleHLODVertices; // 0x54e
	bool bHasLayersContent; // 0x54f
	TMap<UTexture2D*, ULandscapeWeightmapUsage*> WeightmapUsageMap; // 0x550
};

struct UTigerChallengeTypeDatabase {
	bool bFirstDailyChallengeIsPersistent; // 0x28
	TArray<UTigerChallengeCollection*> SeasonalChallengeCollections; // 0x30
	TArray<UTigerChallengeCollection*> DailyChallengeCollections; // 0x40
	TArray<UTigerChallengeCollection*> MasteryChallengeCollections; // 0x50
};

struct UTigerNosferatuPassiveBestialConfig {
	ATigerBestialTrailVisualizer* TrailVisualizationActor; // 0x118
	UTigerTrackedBuff* TrackedBuffType; // 0x120
	float RevealDistanceSquared; // 0x128
	float LoseDistanceSquared; // 0x12c
	TArray<float> RevealHealthThreshold; // 0x130
	float TrackingTimeSeconds; // 0x140
	bool bEnableTrackingFeedback; // 0x144
};

struct ULevel {
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
	char bFinishedLoading : 1; // 0x1f4
	AWorldSettings* WorldSettings; // 0x268
	TArray<UAssetUserData*> AssetUserData; // 0x278
	TArray<FReplicatedStaticActorDestructionInfo> DestroyedReplicatedStaticActors; // 0x298
};

struct UDistributionVectorConstantCurve {
	FInterpCurveVector ConstantCurve; // 0x38
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
};

struct AEmitter {
	UParticleSystemComponent* ParticleSystemComponent; // 0x228
	char bDestroyOnSystemFinish : 1; // 0x230
	char bPostUpdateTickGroup : 1; // 0x230
	char bCurrentlyActive : 1; // 0x230
	FMulticastInlineDelegate OnParticleSpawn; // 0x238
	FMulticastInlineDelegate OnParticleBurst; // 0x248
	FMulticastInlineDelegate OnParticleDeath; // 0x258
	FMulticastInlineDelegate OnParticleCollide; // 0x268
};

struct UEnvQueryGenerator_OnCircle {
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

struct ATigerBaseNPC {
	UTigerHSensesTargetComponent* HeightenedSensesTargetComponent; // 0x778
	UTigerNPCAsset* NPCAsset; // 0x780
	UTigerBloodPotencyComponent* BloodPotencyComponent; // 0x788
	UTigerNPCVisualAsset* VisualAsset; // 0x790
	UTigerNpcPropAsset* PropAsset; // 0x798
	UTigerMasqueradeActionResponse* MasqueradeActionResponse; // 0x7a0
	UTigerNPCFacePoseMap* HeadMeshsPoseAssetsClass; // 0x7a8
	ETigerNPCType NPCType; // 0x7b0
	UTigerInteractiveNpcComponent* InteractiveNpcComponent; // 0x7b8
	FTigerMeshCollection ReplicatedMeshCollection; // 0x7c0
	UObject* ReplicatedAnimationInstanceClass; // 0x8b0
	ATigerAISplinePath* ActiveSplinePath; // 0x8b8
	ATigerNPCSpawningBase* Spawner; // 0x8c0
	USkeletalMeshComponent* HeightenedSensesHeartMesh; // 0x8c8
	USkeletalMeshComponent* InWorldHeartMesh; // 0x8d0
	float LastTimeReactingToLocalPlayerAction; // 0x8d8
	int32_t LastPlayedVoEventId; // 0x8dc
	bool bHasSightOfLocalPlayer; // 0x8e0
	ETigerBloodType BloodType; // 0x8e8
	ETigerBloodPotency BloodPotency; // 0x8e9
	TArray<ATigerAISplinePath*> StoredSplines; // 0x8f0
	ATigerWorldCompositionGrid* StreamingGrid; // 0x900
};

struct UTigerChallengeTopPlayer {
	int32_t TopPlacementRequirement; // 0xb0
};

struct USphereReflectionCaptureComponent {
	float InfluenceRadius; // 0x280
	float CaptureDistanceScale; // 0x284
	UDrawSphereComponent* PreviewInfluenceRadius; // 0x288
};

struct UMaterialExpressionLogarithm10 {
	FExpressionInput X; // 0x40
};

struct USkeletalMeshComponent {
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
	EAnimationMode AnimationMode; // 0x8b8
	char bDisablePostProcessBlueprint : 1; // 0x8ba
	char bUpdateOverlapsOnAnimationFinalize : 1; // 0x8ba
	char bHasValidBodies : 1; // 0x8ba
	char bBlendPhysics : 1; // 0x8ba
	char bEnablePhysicsOnDedicatedServer : 1; // 0x8ba
	char bUpdateJointsFromAnimation : 1; // 0x8ba
	char bDisableClothSimulation : 1; // 0x8bb
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

struct UTBP_ArchetypeSelect_PowersWithVideoPreviews_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* VideoStopped; // 0x268
	UWidgetAnimation* VideoStarted; // 0x270
	UButton* CloseButton; // 0x278
	UImage* CloseButtonBG; // 0x280
	UImage* ClosebuttonCross; // 0x288
	UTBP_ArchetypeSelect_SkillsSummary_C* SkillSummary; // 0x290
	UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x298
	UOverlay* VideoCanvas; // 0x2a0
	UProgressBar* VideoPlaybackBar; // 0x2a8
	UImage* VideoWidget; // 0x2b0
	UMediaPlayer* MediaPlayer; // 0x2b8
	FMulticastInlineDelegate OnVideoStarted; // 0x2c0
	FMulticastInlineDelegate OnVideoEnded; // 0x2d0
	UMediaSource* Right Discipline Video Source; // 0x2e0
	UMediaSource* Left Discipline Video Source; // 0x2e8
	UMediaSource* Passive Video Source; // 0x2f0
};

struct UDatasmithFBXSceneImportData {
	bool bGenerateLightmapUVs; // 0x28
	FString TexturesDir; // 0x30
	char IntermediateSerialization; // 0x40
	bool bColorizeMaterials; // 0x41
};

struct UMaterialExpressionDynamicParameter {
	TArray<FString> ParamNames; // 0x40
	FLinearColor DefaultValue; // 0x50
	uint32_t ParameterIndex; // 0x60
};

struct UMaterialExpressionMaterialFunctionCall {
	UMaterialFunctionInterface* MaterialFunction; // 0x40
	FMaterialParameterInfo FunctionParameterInfo; // 0x48
};

struct ARectLight {
	URectLightComponent* RectLightComponent; // 0x238
};

struct UTigerAnimNotifyState_WeaponTrail {
	int32_t WeaponIndex; // 0x30
	UParticleSystem* PSTemplate; // 0x38
	FName FirstSocketName; // 0x40
	FName SecondSocketName; // 0x48
	ETrailWidthMode WidthScaleMode; // 0x50
	float WidthScale; // 0x54
};

struct UCurveLinearColorAtlas {
	uint32_t TextureSize; // 0x110
	TArray<UCurveLinearColor*> GradientCurves; // 0x118
};

struct UTigerAnimNotify_Footstep {
	bool bIsLeftFoot; // 0x38
	float FootstepDuration; // 0x3c
};

struct UAnimNotify_PlaySound {
	USoundBase* Sound; // 0x38
	float VolumeMultiplier; // 0x40
	float PitchMultiplier; // 0x44
	char bFollow : 1; // 0x48
	FName AttachName; // 0x4c
};

struct UTigerBuffPreventMasqueradeBreakInstance {
	UTigerBuffPreventMasqueradeBreak* PreventMasqueradeBreakBuff; // 0x88
	ATigerPlayer* Player; // 0x90
};

struct UTigerPassiveAdrenalineRushConfig {
	UTigerBuffAdrenalineRush* OnEnemyWithinRadiusBuff; // 0x118
	float RadiusInUnits; // 0x120
};

struct UMaterialExpressionSceneColor {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput OffsetFraction; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct UWidgetSwitcher {
	int32_t ActiveWidgetIndex; // 0x120
};

struct AMagicLeapSharedWorldGameState {
	FMagicLeapSharedWorldSharedData SharedWorldData; // 0x298
	FMagicLeapSharedWorldAlignmentTransforms AlignmentTransforms; // 0x2a8
	FMulticastInlineDelegate OnSharedWorldDataUpdated; // 0x2b8
	FMulticastInlineDelegate OnAlignmentTransformsUpdated; // 0x2c8
};

struct UAkEventCallbackInfo {
	int32_t PlayingID; // 0x30
	int32_t EventId; // 0x34
};

struct UMaterialFunctionInterface {
	FGuid StateId; // 0x28
	EMaterialFunctionUsage MaterialFunctionUsage; // 0x38
};

struct UDemoNetDriver {
	TMap<FString, FRollbackNetStartupActorInfo> RollbackNetStartupActors; // 0x840
	float CheckpointSaveMaxMSPerFrame; // 0x9ec
	TArray<FMulticastRecordOptions> MulticastRecordOptions; // 0xa10
	bool bIsLocalReplay; // 0xa20
	TArray<APlayerController*> SpectatorControllers; // 0xa28
};

struct USafeZoneSlot {
	bool bIsTitleSafe; // 0x38
	FMargin SafeAreaScale; // 0x3c
	EHorizontalAlignment HAlign; // 0x4c
	EVerticalAlignment VAlign; // 0x4d
	FMargin Padding; // 0x50
};

struct UTBP_ContextualHelp_Tutorial_SlideJump_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UBTCompositeNode {
	TArray<FBTCompositeChild> Children; // 0x58
	TArray<UBTService*> Services; // 0x68
	char bApplyDecoratorScope : 1; // 0x88
};

struct UTigerSceneRenderItemWidget {
	FMulticastInlineDelegate OnItemSpawned; // 0x280
	FVector ItemSpawnLocation; // 0x290
	TSoftClassPtr<UObject> DefaultItemClass; // 0x2a0
	UMaterialInterface* RenderTargetMaterial; // 0x2c8
	bool bOverrideItemRenderTarget; // 0x2d0
	AActor* SpawnedItem; // 0x2d8
};

struct UTigerDisciplineBase {
	ATigerCharacter* Owner; // 0x28
	UTigerDisciplineComponent* DisciplineComponent; // 0x30
	UTigerActiveDisciplineConfig* BaseConfig; // 0x38
	int32_t PowerLevel; // 0x58
	float AIUseDuration; // 0x64
	float AIMinCooldownDuration; // 0x68
	float AIMaxCooldownDuration; // 0x6c
};

struct UTigerJudgeBaseState {
	ATigerJudge* JudgePawn; // 0x28
	ATigerAiJudgeController* JudgeAiController; // 0x30
	UTigerAiJudgeSmComponent* JudgeStateMachineComp; // 0x38
	float MovementSpeed; // 0x40
	float TurnSpeed; // 0x44
	float StateEntryTime; // 0x48
	float JudgeDefaultRotationSpeed[0x4]; // 0x4c
};

struct UNiagaraDataInterfaceCamera {
	int32_t PlayerControllerIndex; // 0x38
	bool bRequireCurrentFrameData; // 0x3c
};

struct UTigerRadarChart {
	FSlateBrush GraphImage; // 0x108
	FColor FillColor; // 0x190
	int32_t Points; // 0x194
	float Radius; // 0x198
	float Tilt; // 0x19c
	FVector2D Offset; // 0x1a0
	int32_t ValueMaximum; // 0x1a8
	int32_t ValueMinimum; // 0x1ac
	TArray<int32_t> Values; // 0x1b0
};

struct USharkOnlineSettings {
	FString OnlineServicesEnv; // 0x38
	float MaximumRetryDelaySeconds; // 0x48
	FString AccountRecoverUriProd; // 0x50
	FString AccountRecoverUriUat; // 0x60
	FString AccountRecoverUriDev; // 0x70
	int32_t MinimumAccountCreationAge; // 0x80
	int32_t PartyMaintenancePollIntervalSeconds; // 0x84
};

struct UABP_VMP_TOR_F_HAIR_04_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2f0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x730
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0xb70
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xfb0
	FAnimNode_Root AnimGraphNode_Root; // 0x13f0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1420
};

struct UCollisionProfile {
	TArray<FCollisionResponseTemplate> Profiles; // 0x38
	TArray<FCustomChannelSetup> DefaultChannelResponses; // 0x48
	TArray<FCustomProfile> EditProfiles; // 0x58
	TArray<FRedirector> ProfileRedirects; // 0x68
	TArray<FRedirector> CollisionChannelRedirects; // 0x78
};

struct UBackgroundBlur {
	FMargin Padding; // 0x120
	EHorizontalAlignment HorizontalAlignment; // 0x130
	EVerticalAlignment VerticalAlignment; // 0x131
	bool bApplyAlphaToBlur; // 0x132
	float BlurStrength; // 0x134
	bool bOverrideAutoRadiusCalculation; // 0x138
	int32_t BlurRadius; // 0x13c
	FSlateBrush LowQualityFallbackBrush; // 0x140
};

struct UNiagaraDataInterfaceGrid3D {
	FIntVector NumCells; // 0xd8
	float CellSize; // 0xe4
	int32_t NumCellsMaxAxis; // 0xe8
	ESetResolutionMethod SetResolutionMethod; // 0xec
	FVector WorldBBoxSize; // 0xf0
};

struct UTigerSpawnMechanicBloodVein {
	ATigerBloodVein* StartBloodVein; // 0x28
};

struct UParticleModuleLight {
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

struct UParticleSystemComponent {
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

struct UTigerUiNewNotificationNode {
	UTigerUiNewNotificationNode* ParentNode; // 0x28
	TArray<UTigerUiNewNotificationNode*> ChildNodes; // 0x30
	UTigerUiNewNotificationHandler* NewNotificationHandler; // 0x40
	bool bHasNewEntry; // 0x48
	bool bIsDirty; // 0x49
	TArray<uint64_t> NewIds; // 0x50
	bool bShouldPersistBetweenSessions; // 0x60
};

struct ULandscapeSplineControlPoint {
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

struct UTigerCharacterHeadgearCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x148
	UTigerAnimationFilter* AnimationFilter; // 0x170
	bool bHideBeard; // 0x178
};

struct UGeometryCacheTrack_FlipbookAnimation {
	uint32_t NumMeshSamples; // 0x58
};

struct UListView {
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

struct UCameraShakeBase {
	bool bSingleInstance; // 0x28
	float ShakeScale; // 0x2c
	APlayerCameraManager* CameraManager; // 0x30
};

struct UNiagaraDataInterfaceExport {
	FNiagaraUserParameterBinding CallbackHandlerParameter; // 0x38
	ENDIExport_GPUAllocationMode GPUAllocationMode; // 0x58
	int32_t GPUAllocationFixedSize; // 0x5c
	float GPUAllocationPerParticleSize; // 0x60
};

struct UCompositeDataTable {
	TArray<UDataTable*> ParentTables; // 0xb0
	TArray<UDataTable*> OldParentTables; // 0xc0
};

struct UMaterialExpressionStaticBool {
	char Value : 1; // 0x40
};

struct UMaterialExpressionConstantBiasScale {
	FExpressionInput Input; // 0x40
	float Bias; // 0x54
	float Scale; // 0x58
};

struct UAkDurationCallbackInfo {
	float Duration; // 0x38
	float EstimatedDuration; // 0x3c
	int32_t AudioNodeID; // 0x40
	int32_t MediaID; // 0x44
	bool bStreaming; // 0x48
};

struct UBlendSpace1D {
	bool bScaleAnimation; // 0x148
};

struct UBrushBaseProperties {
	float BrushSize; // 0x60
	bool bSpecifyRadius; // 0x64
	float BrushRadius; // 0x68
	float BrushStrength; // 0x6c
	float BrushFalloffAmount; // 0x70
	bool bShowStrength; // 0x74
	bool bShowFalloff; // 0x75
};

struct UTBP_AnimMetaData_StartIsActive_C {
	ENUM_WeaponIKOverride LeftHandIK_Enum; // 0x28
	ENUM_WeaponIKOverride RightHandIK_Enum; // 0x29
};

struct UTigerCharacterHairColorCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct UEditableGameplayTagQueryExpression_AllExprMatch {
	TArray<UEditableGameplayTagQueryExpression*> Expressions; // 0x28
};

struct UBlendProfile {
	USkeleton* OwningSkeleton; // 0x30
	TArray<FBlendProfileBoneEntry> ProfileEntries; // 0x38
};

struct UAnimBlueprintGeneratedClass {
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

struct UDatasmithCommonTessellationOptions {
	FDatasmithTessellationOptions Options; // 0x28
};

struct UTBP_BeardCustomization_Master_C {
	UTBP_PoseableMesh_Master_C* PoseableMesh; // 0x148
};

struct UDatasmithAreaLightActorTemplate {
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

struct UMaterialExpressionDepthFade {
	FExpressionInput InOpacity; // 0x40
	FExpressionInput FadeDistance; // 0x54
	float OpacityDefault; // 0x68
	float FadeDistanceDefault; // 0x6c
};

struct UTBP_UI_Box_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Background; // 0x268
	UImage* Bottom; // 0x270
	UImage* BottomLeft; // 0x278
	UImage* BottomRight; // 0x280
	UNamedSlot* Content; // 0x288
	UCanvasPanel* ContentCanvas; // 0x290
	UImage* Left; // 0x298
	UImage* Right; // 0x2a0
	UImage* Top; // 0x2a8
	UImage* TopLeft; // 0x2b0
	UImage* TopRight; // 0x2b8
	UTexture2D* TopLeftTexture; // 0x2c0
	UTexture2D* TopRightTexture; // 0x2c8
	UTexture2D* TopTexture; // 0x2d0
	UTexture2D* LeftTexture; // 0x2d8
	UTexture2D* RightTexture; // 0x2e0
	UTexture2D* BottomLeftTexture; // 0x2e8
	UTexture2D* BottomRightTexture; // 0x2f0
	UTexture2D* BottomTexture; // 0x2f8
	FMargin MarginPixels; // 0x300
	FVector2D PaddingPercent; // 0x310
	FSlateBrush BackgroundBrush; // 0x318
	FVector2D OverrideSize; // 0x3a0
};

struct UAIPerceptionSystem {
	TArray<UAISense*> Senses; // 0x88
	float PerceptionAgingRate; // 0x98
};

struct UTigerWeapon {
	UMaterialInterface* RarityMaterial; // 0x30
	ETigerItemRarity Rarity; // 0x38
	USkeletalMesh* SkeletalMesh; // 0x40
	USkeletalMesh* OffhandSkeletalMesh; // 0x48
	UAnimInstance* AnimClass; // 0x50
	UTigerWeaponCrosshairWidget* Crosshair; // 0x58
	UTexture2D* HUDIcon; // 0x60
	UCurveFloat* RarityDamageMultiplierCurve; // 0x68
	FName WeaponUnequipAnimation; // 0x70
	FName WeaponEquipAnimation; // 0x78
	FName PrimaryAttachPoint; // 0x80
	FName SecondaryAttachPoint; // 0x88
	float FearValueMultiplier; // 0x90
	float FearDistanceMultiplier; // 0x94
	bool bIsDualWeapon; // 0x98
	uint64_t PersistentTelemetryID; // 0xa0
};

struct UTigerAIPlayerPickPriorityTask {
	float MaxVerticalPositionOffset; // 0x98
	float RaycastDistance; // 0x9c
};

struct UMicroTransactionBase {
	TArray<FPurchaseInfo> AvailableProducts; // 0x38
	FString LastError; // 0x48
	FString LastErrorSolution; // 0x58
};

struct UNavigationQueryFilter {
	TArray<FNavigationFilterArea> Areas; // 0x28
	FNavigationFilterFlags IncludeFlags; // 0x38
	FNavigationFilterFlags ExcludeFlags; // 0x3c
};

struct UScrollBar {
	FScrollBarStyle WidgetStyle; // 0x108
	USlateWidgetStyleAsset* Style; // 0x5d8
	bool bAlwaysShowScrollbar; // 0x5e0
	bool bAlwaysShowScrollbarTrack; // 0x5e1
	EOrientation Orientation; // 0x5e2
	FVector2D Thickness; // 0x5e4
	FMargin Padding; // 0x5ec
};

struct USourceEffectWaveShaperPreset {
	FSourceEffectWaveShaperSettings Settings; // 0x98
};

struct UABP_Eyewear_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x450
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x458
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x560
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x668
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x678
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x698
	FAnimNode_Root AnimGraphNode_Root; // 0x7a0
};

struct UTBP_ContextualHelp_Tutorial_ClanPower_Gamepad_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UARTrackedQRCode {
	FString QRCode; // 0x108
	int32_t Version; // 0x118
};

struct UPropertyBinding {
	TWeakObjectPtr<UObject> SourceObject; // 0x28
	FDynamicPropertyPath SourcePath; // 0x30
	FName DestinationProperty; // 0x58
};

struct UTigerJudgeShieldComponent {
	FVector DeflectEffectOffset; // 0xee0
	UParticleSystem* DeflectEffect; // 0xef0
	UAkAudioEvent* DeflectSound; // 0xef8
	float BlockingHalfAngle; // 0xf00
};

struct UAsyncTask_LoadXRDeviceVisComponent {
	FMulticastInlineDelegate OnModelLoaded; // 0x30
	FMulticastInlineDelegate OnLoadFailure; // 0x40
	UPrimitiveComponent* SpawnedComponent; // 0x58
};

struct UParticleModuleMeshRotationRateOverLife {
	FRawDistributionVector RotRate; // 0x30
	char bScaleRotRate : 1; // 0x78
};

struct UTigerVendorComponent {
	TArray<UTigerVendorStoreCategory*> DynamicCategories; // 0xb0
};

struct UMovieSceneCameraAnimSection {
	FMovieSceneCameraAnimSectionData AnimData; // 0xe8
	UCameraAnim* CameraAnim; // 0x108
	float PlayRate; // 0x110
	float PlayScale; // 0x114
	float BlendInTime; // 0x118
	float BlendOutTime; // 0x11c
	bool bLooping; // 0x120
};

struct UParticleModuleTypeDataMesh {
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

struct UNavArea {
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

struct UTBP_UI_GroupInvitation_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UTBP_UI_ConfirmMenu_C* TBP_UI_ConfirmMenu; // 0x288
	FTigerGroupInvitation Invite; // 0x290
	ATigerPlayerState* Inviter; // 0x2a0
	bool HasHandledInvite; // 0x2a8
};

struct UInterpData {
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

struct UAkAuxBus {
	UAkAudioBank* RequiredBank; // 0x50
};

struct UMaterialExpressionGetMaterialAttributes {
	FMaterialAttributesInput MaterialAttributes; // 0x40
	TArray<FGuid> AttributeGetTypes; // 0x58
};

struct UMaterialExpressionStaticBoolParameter {
	char DefaultValue : 1; // 0x58
};

struct UNiagaraDataInterfaceParticleRead {
	FString EmitterName; // 0xd8
};

struct UInAppPurchaseQueryCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UNiagaraPreviewAxis_InterpParamVector2D {
	FVector2D Min; // 0x38
	FVector2D Max; // 0x40
};

struct UBTNode {
	FString NodeName; // 0x30
	UBehaviorTree* TreeAsset; // 0x40
	UBTCompositeNode* ParentNode; // 0x48
};

struct UTigerFeedingComponent {
	bool bIsBloodDrained; // 0xb0
	bool bIsBeingFedOn; // 0xb1
	bool bDidAttackEndFeed; // 0xb2
	FMulticastInlineDelegate OnStoppedFeeding; // 0xb8
	FMulticastInlineDelegate OnFeedingDoneEvent; // 0xc8
	FMulticastInlineDelegate OnStartedFeedingApproach; // 0xd8
	FMulticastInlineDelegate OnStartedFeeding; // 0xe8
	FMulticastInlineDelegate OnFeedingApproachDone; // 0xf8
	float MaximumFeedingDistance; // 0x108
	int32_t MaxFeedingTicks; // 0x10c
	float FeedTickTime; // 0x110
	float PartRequiredForBloodDrainedState; // 0x114
	float FeedHealthAmount; // 0x118
	float TravelSpeed; // 0x11c
	int32_t FeedingTicksLeft; // 0x120
	int32_t CurrentFeedingTicksLeft; // 0x124
	TWeakObjectPtr<ATigerNPC> DesiredFeedingTarget; // 0x128
	TWeakObjectPtr<ATigerNPC> CurrentTarget; // 0x130
	UMatineeCameraShake* FeedingCameraShake; // 0x138
	UTigerFeedingAnimationAsset* FeedingAnimationAsset; // 0x140
	float FeedingCameraDecoupleDelay; // 0x148
	float ApproachUIProgress; // 0x14c
	float CapsuleDistanceCompensator; // 0x150
	bool bFeedingDebug; // 0x154
	UAnimMontage* FedOnApproachAnim; // 0x1d0
	UAnimMontage* FedOnFeedingAnim; // 0x1d8
	UAnimMontage* FedOnDecoupleAnim; // 0x1e0
	FTimerHandle DecoupleTimerCamera; // 0x1e8
};

struct UTigerGameGCClusterSubSystem {
	TArray<AActor*> CurrentActorsToProcess; // 0x38
};

struct UTigerNpcAnimInstance {
	ETigerAIAnimationMode AnimationMode; // 0x3b8
	ATigerPropDummy* PropDummyClass; // 0x3c0
	bool bIsReadyToFireWeapon; // 0x3c8
	float TimeAnimModeChanged; // 0x3cc
	bool bIsBurstFiring; // 0x3d0
	bool bIsBeingFedOn; // 0x3d1
	bool bCanSeeLocalPlayer; // 0x3d2
	bool bIsLookingAtLocalPlayer; // 0x3d3
	FVector AimDirection; // 0x3d4
	FVector StrafeDirection; // 0x3e0
	float LocalPlayerLookAtPitch; // 0x3ec
	float LocalPlayerLookAtYaw; // 0x3f0
	float LocalPlayerLookAtDistance; // 0x3f4
	float LocalPlayerLookAtActivationDistance; // 0x3f8
	float LocalPlayerLookAtDeactivationDistance; // 0x3fc
	FSharkRandomDeviation LocalPlayerLookAtDuration; // 0x400
	FSharkRandomDeviation LocalPlayerLookAtAgainCooldown; // 0x408
	float DeathDirection; // 0x410
	float ReactionCooldown; // 0x414
	float TurnCooldownTime; // 0x418
};

struct ANavigationTestingActor {
	UCapsuleComponent* CapsuleComponent; // 0x238
	UNavigationInvokerComponent* InvokerComponent; // 0x240
	char bActAsNavigationInvoker : 1; // 0x248
	FNavAgentProperties NavAgentProps; // 0x250
	FVector QueryingExtent; // 0x280
	ANavigationData* MyNavData; // 0x290
	FVector ProjectedLocation; // 0x298
	char bProjectedLocationValid : 1; // 0x2a4
	char bSearchStart : 1; // 0x2a4
	float CostLimitFactor; // 0x2a8
	float MinimumCostLimit; // 0x2ac
	char bBacktracking : 1; // 0x2b0
	char bUseHierarchicalPathfinding : 1; // 0x2b0
	char bGatherDetailedInfo : 1; // 0x2b0
	char bDrawDistanceToWall : 1; // 0x2b0
	char bShowNodePool : 1; // 0x2b0
	char bShowBestPath : 1; // 0x2b0
	char bShowDiffWithPreviousStep : 1; // 0x2b0
	char bShouldBeVisibleInGame : 1; // 0x2b0
	ENavCostDisplay CostDisplayMode; // 0x2b4
	FVector2D TextCanvasOffset; // 0x2b8
	char bPathExist : 1; // 0x2c0
	char bPathIsPartial : 1; // 0x2c0
	char bPathSearchOutOfNodes : 1; // 0x2c0
	float PathfindingTime; // 0x2c4
	float PathCost; // 0x2c8
	int32_t PathfindingSteps; // 0x2cc
	ANavigationTestingActor* OtherActor; // 0x2d0
	UNavigationQueryFilter* FilterClass; // 0x2d8
	int32_t ShowStepIndex; // 0x2e0
	float OffsetFromCornersDistance; // 0x2e4
};

struct ATigerElysiumPlayerState {
	FMulticastInlineDelegate OnIsInPartyChanged; // 0x568
	FMulticastInlineDelegate OnPartySizeChanged; // 0x578
	FMulticastInlineDelegate OnAppearanceChanged; // 0x588
	bool bIsInParty; // 0x598
	int8_t PartySize; // 0x599
	bool bIsReadyForMatchmaking; // 0x59a
	FMulticastInlineDelegate OnGroupReadyStateChanged; // 0x5a0
	FMulticastInlineDelegate OnLocalPlayerReadyStateChanged; // 0x5b0
	UTigerGrimoireEntry* TrainingVideoGrimoireEntry; // 0x5c0
};

struct USpringArmComponent {
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

struct UParticleModuleRotation_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UMaterialExpressionReflectionVectorWS {
	FExpressionInput CustomWorldNormal; // 0x40
	char bNormalizeCustomWorldNormal : 1; // 0x54
};

struct UTigerLootLocationConfiguration {
	TArray<FTigerLootLocationEntry> LocationEntries; // 0x30
};

struct UTigerThrallMenu {
	TArray<UTigerLocalThrallData*> ThrallSlots; // 0x3b0
	UTigerLocalThrallData* CurrentThrall; // 0x3c0
	ETigerThrallMenu ThrallMenuIndex; // 0x3c8
};

struct ANavSystemConfigOverride {
	UNavigationSystemConfig* NavigationSystemConfig; // 0x228
	ENavSystemOverridePolicy OverridePolicy; // 0x230
	char bLoadOnClient : 1; // 0x231
};

struct UTigerPlayerMeshManager {
	FTigerPlayerMeshMaterialData MaterialData[0xb]; // 0x1e0
	TArray<FTigerPlayerMeshMaterialData> StaticMeshMaterialData; // 0x290
	TArray<FTigerPlayerMeshMaterialData> PoseableMeshMaterialData; // 0x2a0
	UMaterialInterface* CurrentOverrideMaterial; // 0x2b0
};

struct UTBP_UI_MapMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b0
};

struct UTBP_Buff_Shield50_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
};

struct UTigerClientSeasonalRewardTier {
	TArray<FTigerItemId> FreeRewardIds; // 0x28
	TArray<FTigerItemId> PremiumRewardIds; // 0x38
};

struct UTigerMapMarkerOverlay {
	UTigerPlayerMarkerWidget* PlayerMarkerPtr; // 0x280
};

struct UTBP_UI_Cursor_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UImage* Cursor_Gamepad; // 0x288
	UImage* Cursor_Mouse; // 0x290
	float PreviousViewportScale; // 0x298
	FVector2D Starting_Size; // 0x29c
	bool HasBound; // 0x2a4
};

struct ATigerDoor {
	UStaticMeshComponent* DoorMesh; // 0x280
	ATigerPlayer* InteractingPlayer; // 0x288
};

struct UTigerPlayerClanData {
	FText DISPLAYNAME; // 0x30
	ETigerClan ClanType; // 0x48
	UTexture2D* IconTexture; // 0x50
	UTexture2D* LargeIconTexture; // 0x58
	TSoftClassPtr<UObject> CharacterCreationStartingOutfitPath[0x2]; // 0x60
	TArray<UTigerCharacterBodyTypeCustomization*> BodyTypeItems; // 0xb0
	TArray<UTigerPowerKit*> PowerKits; // 0xc0
	UTigerUtilityPowerBaseComponent* UtilityPower; // 0xd0
	UTexture2D* UtilityPowerIcon; // 0xd8
	USoundBase* StaggeredByAttackSound; // 0xe0
	UMatineeCameraShake* FallShakeLowDrop; // 0xe8
	UMatineeCameraShake* FallShakeHighDrop; // 0xf0
	UTigerAnimationSetAsset* ClanAnimationSet[0x2]; // 0xf8
	bool bBloodDropGlows; // 0x108
	float ClanSpecificDiablerizeOffsets[0x4]; // 0x10c
	TArray<UTigerAnimationSetAsset*> AdditionalAnimationSets; // 0x120
};

struct UMaterialExpressionVectorNoise {
	FExpressionInput Position; // 0x40
	EVectorNoiseFunction NoiseFunction; // 0x54
	int32_t Quality; // 0x58
	char bTiling : 1; // 0x5c
	uint32_t TileSize; // 0x60
};

struct UTigerAIPlayerClimbIfPossibleTask {
	ATigerLocalAIControllerBase* LocalAIController; // 0x70
	ATigerPlayerController* PlayerController; // 0x78
	ATigerPlayerCameraManager* PlayerCamera; // 0x80
	ATigerPlayer* CurrentPawn; // 0x88
	UTigerCharacterMovementComponent* PlayerMovementComponent; // 0x90
	UTigerTraversalClimbState* ClimbState; // 0x98
	UTigerTraversalStateClimbingConfig* ClimbConfig; // 0xa0
	float AngleFromForward; // 0xa8
};

struct UTigerBloodTrackPreset {
	FTigerBloodTrack BloodTrack; // 0x30
};

struct AInteractiveFoliageActor {
	UCapsuleComponent* CapsuleComponent; // 0x238
	FVector TouchingActorEntryPosition; // 0x240
	FVector FoliageVelocity; // 0x24c
	FVector FoliageForce; // 0x258
	FVector FoliagePosition; // 0x264
	float FoliageDamageImpulseScale; // 0x270
	float FoliageTouchImpulseScale; // 0x274
	float FoliageStiffness; // 0x278
	float FoliageStiffnessQuadratic; // 0x27c
	float FoliageDamping; // 0x280
	float MaxDamageImpulse; // 0x284
	float MaxTouchImpulse; // 0x288
	float MaxForce; // 0x28c
	float Mass; // 0x290
};

struct UEditableGameplayTagQueryExpression_NoTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct AChaosSolverActor {
	FChaosSolverConfiguration Properties; // 0x228
	float TimeStepMultiplier; // 0x290
	int32_t CollisionIterations; // 0x294
	int32_t PushOutIterations; // 0x298
	int32_t PushOutPairIterations; // 0x29c
	float ClusterConnectionFactor; // 0x2a0
	EClusterConnectionTypeEnum ClusterUnionConnectionType; // 0x2a4
	bool DoGenerateCollisionData; // 0x2a5
	FSolverCollisionFilterSettings CollisionFilterSettings; // 0x2a8
	bool DoGenerateBreakingData; // 0x2b8
	FSolverBreakingFilterSettings BreakingFilterSettings; // 0x2bc
	bool DoGenerateTrailingData; // 0x2cc
	FSolverTrailingFilterSettings TrailingFilterSettings; // 0x2d0
	float MassScale; // 0x2e0
	bool bGenerateContactGraph; // 0x2e4
	bool bHasFloor; // 0x2e5
	float FloorHeight; // 0x2e8
	FChaosDebugSubstepControl ChaosDebugSubstepControl; // 0x2ec
	UBillboardComponent* SpriteComponent; // 0x2f0
	UChaosGameplayEventDispatcher* GameplayEventDispatcherComponent; // 0x310
};

struct UMovieSceneColorSection {
	FMovieSceneFloatChannel RedCurve; // 0xe8
	FMovieSceneFloatChannel GreenCurve; // 0x188
	FMovieSceneFloatChannel BlueCurve; // 0x228
	FMovieSceneFloatChannel AlphaCurve; // 0x2c8
};

struct UToIntegerField {
	UFieldNodeFloat* FloatField; // 0xb0
};

struct UTBP_ContextualHelp_Feeding_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
	float LowHealthTriggerLimit; // 0xf8
	ATigerPlayer* TigerPlayer; // 0x100
};

struct UBTTask_BlackboardBase {
	FBlackboardKeySelector BlackboardKey; // 0x70
};

struct UHapticFeedbackEffect_Curve {
	FHapticFeedbackDetails_Curve HapticDetails; // 0x28
};

struct UTigerWeaponCycleStyle {
	int32_t WeaponSlotsToCycle; // 0x28
	FText UiName; // 0x30
};

struct ATigerProjectionDashProjectile {
	float MovementSpeed; // 0x228
	float Duration; // 0x22c
	FVector TargetPosition; // 0x230
	FVector StartingPosition; // 0x23c
	FVector LastValidPosition; // 0x254
	USphereComponent* SphereCollider; // 0x268
	UTigerBuff* ThornsBuff; // 0x270
};

struct UJoinSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UInterpTrackInstEvent {
	float LastUpdatePosition; // 0x28
};

struct UMaterialExpressionComponentMask {
	FExpressionInput Input; // 0x40
	char R : 1; // 0x54
	char G : 1; // 0x54
	char B : 1; // 0x54
	char A : 1; // 0x54
};

struct UMaterialExpressionTextureBase {
	UTexture* Texture; // 0x40
};

struct UPhysicsConstraintTemplate {
	FConstraintInstance DefaultInstance; // 0x28
	TArray<FPhysicsConstraintProfileHandle> ProfileHandles; // 0x1e8
	FConstraintProfileProperties DefaultProfile; // 0x1f8
};

struct UTBP_ContextualHelp_MeleeWeapon_Ability_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UTBP_ContextualHelp_Downed_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct USoundNodeDelay {
	float DelayMin; // 0x48
	float DelayMax; // 0x4c
};

struct UDistributionVectorConstant {
	FVector Constant; // 0x38
	char bLockAxes : 1; // 0x44
	EDistributionVectorLockFlags LockedAxes; // 0x48
};

struct UMaterialExpressionRotator {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	float CenterX; // 0x68
	float CenterY; // 0x6c
	float Speed; // 0x70
	uint32_t ConstCoordinate; // 0x74
};

struct UABP_VMP_BRU_M_HAIR_14_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3ec0
};

struct ATBP_SpectatorPawn_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x308
	USceneComponent* Listener Component; // 0x310
	UCameraComponent* Camera; // 0x318
};

struct UTigerLootDropComponent {
	int32_t DropChance; // 0xb0
	TArray<FTigerLootItemType> LootAssets; // 0xb8
	ETigerTelemetryItemSourceID TelemetryIDSource; // 0xc8
};

struct UProxyLODMeshSimplificationSettings {
	FName ProxyLODMeshReductionModuleName; // 0x38
};

struct UTigerWheelWidget {
	float LockCameraForGamepadAfterUseTime; // 0x290
	bool bShouldSetMouseLocation; // 0x294
	UTigerWheelInterfaceWidget* Interface; // 0x298
};

struct UMagicLeapARPinComponent {
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

struct ULevelSequenceAnimSequenceLink {
	TArray<FLevelSequenceAnimSequenceLinkItem> AnimSequenceLinks; // 0x28
};

struct UDistributionVector {
	char bCanBeBaked : 1; // 0x30
	char bIsDirty : 1; // 0x30
	char bBakedDataSuccesfully : 1; // 0x30
};

struct UTigerQuestline {
	FText Title; // 0x28
	TMap<FString, UTigerQuest*> Quests; // 0x40
};

struct ASceneCapture {
	UStaticMeshComponent* MeshComp; // 0x228
	USceneComponent* SceneComponent; // 0x230
};

struct UTigerPromptCollectionWidget {
	UTigerSimpleTextPrompt* MasqueradeBreachedPrompt; // 0x280
	UTigerSimpleTextPrompt* MasqueradeBreachedByNpcKillPrompt; // 0x288
	UTigerSimpleTextPrompt* MasqueradeBreachedByNpcFeedingPrompt; // 0x290
	UTigerSimpleTextPrompt* MasqueradeRestoredPrompt; // 0x298
	UTigerSimpleTextPrompt* IntroPrompt; // 0x2a0
	UTigerSimpleTextPrompt* FirstGasPrompt; // 0x2a8
	UTigerSimpleTextPrompt* SubsequentGasPrompt; // 0x2b0
	UTigerSimpleTextPrompt* GasStartedMovingPrompt; // 0x2b8
	UTigerSimpleTextPrompt* JudgeSpawnedPrompt; // 0x2c0
	UTigerSimpleTextPrompt* JudgeSlainPrompt; // 0x2c8
	UTigerSimpleTextPrompt* SupplyDropPrompt; // 0x2d0
	UTigerSimpleTextPrompt* SuperHighPotentNearbyPrompt; // 0x2d8
	UTigerSimpleTextPrompt* LevelUpPrompt; // 0x2e0
	UTigerSimpleTextPrompt* GameModeInteractionPrompt; // 0x2e8
	UTigerSimpleTextPrompt* EliminatedPlayerPrompt; // 0x2f0
	UTigerSimpleTextPrompt* DownedPlayerPrompt; // 0x2f8
	UTigerEnteringNewAreaPrompt* EnteringNewAreaPrompt; // 0x300
	UTigerSimpleTextPrompt* ArtifactPickedUpPrompt; // 0x308
	TArray<FTigerQueuedTextPrompt> TextPromptQueue; // 0x310
	TArray<FTigerQueuedTextPromptPriorityEntry> Prompts; // 0x320
};

struct UEnvQueryGenerator_ProjectedPoints {
	FEnvTraceData ProjectionData; // 0x50
};

struct USynthSound {
	USynthComponent* OwningSynthComponent; // 0x3c0
};

struct UMaterialExpressionMaterialProxyReplace {
	FExpressionInput Realtime; // 0x40
	FExpressionInput MaterialProxy; // 0x54
};

struct UTigerCustomSequenceListClan {
	UAnimSequence* Sequences[0x4]; // 0x28
};

struct ULightComponentBase {
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
	char bAffectStaticIndirectLighting : 1; // 0x215
	EShadowDetailMode ShadowDetailMode; // 0x218
	float DeepShadowLayerDistribution; // 0x21c
	float IndirectLightingIntensity; // 0x220
	float VolumetricScatteringIntensity; // 0x224
	int32_t SamplesPerPixel; // 0x228
};

struct UTigerBuffShacklesInstance {
	UTigerBuffShackles* ShacklesBuff; // 0x88
};

struct UTigerThrallMapData {
	UTexture2D* Map; // 0x30
};

struct UGizmoAxisRotationParameterSource {
	TScriptInterface<IGizmoAxisSource> AxisSource; // 0x90
	TScriptInterface<IGizmoTransformSource> TransformSource; // 0xa0
	float Angle; // 0xb0
	FGizmoFloatParameterChange LastChange; // 0xb4
	FVector CurRotationAxis; // 0xbc
	FVector CurRotationOrigin; // 0xc8
	FTransform InitialTransform; // 0xe0
};

struct UTBP_UI_TitleError_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UTigerStyledRichTextBlock* ErrorCodeBlock; // 0x298
	UTigerStyledRichTextBlock* MessageTextBlock; // 0x2a0
	UHorizontalBox* RetryDelayBox; // 0x2a8
	UTigerStyledRichTextBlock* RetryDelayDurationText; // 0x2b0
	UTBP_UI_MenuButton_C* TBP_UI_MenuButton_Exit; // 0x2b8
	UTBP_UI_MenuButton_C* TBP_UI_MenuButton_Retry; // 0x2c0
	UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x2c8
	UTigerStyledRichTextBlock* TitleTextBlock; // 0x2d0
	FMulticastInlineDelegate OnRetry; // 0x2d8
	FTimerHandle RetryDelayTimerHandle; // 0x2e8
};

struct UTigerClientRewardTrackDailyChallenges {
	TArray<FTigerChallengeTypeID> DailyChallengeIDs; // 0x48
	FTigerItemId DailyChallengeExpReward; // 0x58
	FTigerItemId PersistentDailyChallengeTokenReward; // 0x60
	bool bIsFirstChallengePersistent; // 0x68
};

struct UTBP_AnAcquiredTaste_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xc0
	int32_t Stacks; // 0xc8
};

struct ULandscapeComponent {
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

struct ASpotLight {
	USpotLightComponent* SpotLightComponent; // 0x238
};

struct UParticleModuleEventReceiverKillParticles {
	char bStopSpawning : 1; // 0x40
};

struct UAnimBoneCompressionSettings {
	TArray<UAnimBoneCompressionCodec*> Codecs; // 0x28
};

struct UABP_VMP_NOS_F_HAIR_03_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2e8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0x310
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x750
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0xb90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xfd0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1410
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1850
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1c90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x20d0
	FAnimNode_Root AnimGraphNode_Root; // 0x2510
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3640
};

struct UNiagaraDataInterfaceStaticMesh {
	ENDIStaticMesh_SourceMode SourceMode; // 0x38
	UStaticMesh* DefaultMesh; // 0x40
	AActor* Source; // 0x48
	UStaticMeshComponent* SourceComponent; // 0x50
	FNDIStaticMeshSectionFilter SectionFilter; // 0x58
	bool bUsePhysicsBodyVelocity; // 0x68
	TArray<FName> FilteredSockets; // 0x70
};

struct UTigerDisciplineStun {
	UTigerStunConfig* Config; // 0x78
};

struct UTigerPassiveNightstalkerConfig {
	float CrouchedTimeUntilUnseen; // 0x118
	float CrouchedTimePerAdditionalPowerLevel; // 0x11c
	TArray<UTigerBuffUnseenPresence*> InvisibilityBuff; // 0x120
	FTigerSightConfigProperties OverrideSightProperties; // 0x130
};

struct ATigerElysiumGameState {
	FTigerMetaStoreEntriesKeeper FlashStoreStoreEntries; // 0x380
	FTigerMetaStoreEntriesKeeper BattlepassStoreEntries; // 0x3d0
	FTigerMetaStoreEntriesKeeper RankSkipStoreEntries; // 0x410
	bool PartyMaintenanceMode; // 0x450
};

struct UMaterialExpressionLandscapeLayerBlend {
	TArray<FLayerBlendInput> Layers; // 0x40
	FGuid ExpressionGUID; // 0x50
};

struct UMovieSceneEasingExternalCurve {
	UCurveFloat* Curve; // 0x30
};

struct AEQSTestingPawn {
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

struct UMaterialParameterCollection {
	FGuid StateId; // 0x28
	TArray<FCollectionScalarParameter> ScalarParameters; // 0x38
	TArray<FCollectionVectorParameter> VectorParameters; // 0x48
};

struct UTigerCollectibleData {
	uint32_t CollectibleId; // 0x30
	FText CollectibleName; // 0x38
	FText CollectibleDescription; // 0x50
	int32_t TotalRequired; // 0x68
	UTigerGrimoireEntry* GrimoireEntryToUnlock; // 0x70
	UTigerCollectibleGrimoireEntrySet* GrimoireEntrySet; // 0x78
	TArray<FTigerItemId> RewardIds; // 0x80
};

struct UTigerDisciplineIncitePain {
	UTigerIncitePainConfig* Config; // 0xf0
};

struct USubmixEffectFlexiverbPreset {
	FSubmixEffectFlexiverbSettings Settings; // 0xa0
};

struct UTigerTraversalStateSlidingConfig {
	float SlideGravityMultiplier; // 0x50
	float SlideTerminalSpeed; // 0x54
	float BrakingDecelerationSliding; // 0x58
	float BrakingDecelerationSlidingStop; // 0x5c
	float RequiredVelocityForSlideStart; // 0x60
	float RequiredFallingVelocityForSlideStart; // 0x64
	float HorizontalSpeedForFallingSlide; // 0x68
	float ThresholdVelocityForSlideStop; // 0x6c
	float SlideVelocityBoostMultiplier; // 0x70
	float SlideFallingHorizontalBoostMultiplier; // 0x74
	float SlideFallingVerticalBoostMultiplier; // 0x78
	float SlideAirGraceTime; // 0x7c
	float SlideBoostDecayRecoverySpeed; // 0x80
	float SlideControllerRotationTime; // 0x84
	float SlidingWallCollisionCutOffHalfAngle; // 0x88
	float SlidingWallCollisionSweepRadius; // 0x8c
	float SlidingWallCollisionZecondaryCheckZOffset; // 0x90
	float SlideTimeBeforeJumpIsAllowed; // 0x94
	float TimeOfForcedSliding; // 0x98
	UCurveFloat* SlideBoostDecayCurve; // 0xa0
	UCurveFloat* SlideGravityCurve; // 0xa8
	UCurveFloat* HorizontalSpeedForFallingSlideCurve; // 0xb0
	UCurveFloat* DownwardsAngleDifferenceMultiplierCurve; // 0xb8
	UCurveFloat* DecelerationCurve; // 0xc0
	bool bUseSlideAlongSurfaceLogic; // 0xc8
	bool bPrintVariablesOnFallSlide; // 0xc9
};

struct UDatasmithLandscapeTemplate {
	UMaterialInterface* LandscapeMaterial; // 0x30
	int32_t StaticLightingLOD; // 0x38
};

struct USourceEffectPannerPreset {
	FSourceEffectPannerSettings Settings; // 0x98
};

struct UMovieSceneStringSection {
	FMovieSceneStringChannel StringCurve; // 0xe8
};

struct UTigerDisciplineDisplacement {
	UTigerWidget* TargetMarker; // 0xf0
	UTigerDisplacementConfig* Config; // 0xf8
	ATigerCharacter* ClientSidePotentialTarget; // 0x110
};

struct UThrobber {
	int32_t NumberOfPieces; // 0x108
	bool bAnimateHorizontally; // 0x10c
	bool bAnimateVertically; // 0x10d
	bool bAnimateOpacity; // 0x10e
	USlateBrushAsset* PieceImage; // 0x110
	FSlateBrush Image; // 0x118
};

struct APaperFlipbookActor {
	UPaperFlipbookComponent* RenderComponent; // 0x228
};

struct UTigerChallengeDiablerize {
	FTigerChallengeRequirementClan TargetRequiredClan; // 0xb0
};

struct UTigerConsumableAsset {
	UAnimMontage* Montage; // 0x128
	bool bCanBeUsedWhileMoving; // 0x130
	float UseTime; // 0x134
	int32_t MaxStack; // 0x138
	UAkAudioEvent* BeginUseAudioEvent; // 0x140
	UAkAudioEvent* UseSuccessfulAudioEvent; // 0x148
	UAkAudioEvent* UseFailedAudioEvent; // 0x150
	UTigerCharacterEffect* SuccessfulUseCharacterEffect; // 0x158
	ATigerBuffPostProcess* BeginUsePostProcess; // 0x160
	ATigerBuffPostProcess* SuccessfulBuffPostProcess; // 0x168
};

struct ATigerGuardVolume {
	bool bTriggerThreatState; // 0x228
	TArray<UShapeComponent*> Colliders; // 0x230
};

struct UTigerTraversalStateLowVaultConfig {
	FName LowVaultAnimationName; // 0x50
	FVector LowVaultLowerBodyVolumeExtent; // 0x58
	FVector LowVaultCheckOffset; // 0x64
	float LowVaultMaximumCameraAngleDifference; // 0x70
	float AnimationBlendoutStartDelay; // 0x74
	float LowVaultPositionVerticalOffset; // 0x78
	float HorizontalEndPositionOffset; // 0x7c
	bool bShouldAdjustLowVaultAnimationPlayRate; // 0x80
};

struct UGizmoBoxComponent {
	FVector Origin; // 0x470
	FQuat Rotation; // 0x480
	FVector Dimensions; // 0x490
	float LineThickness; // 0x49c
	bool bRemoveHiddenLines; // 0x4a0
	bool bEnableAxisFlip; // 0x4a1
};

struct UTBP_ContextualHelp_Tutorial_Climb_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct USlateVectorArtData {
	TArray<FSlateMeshVertex> VertexData; // 0x28
	TArray<uint32_t> IndexData; // 0x38
	UMaterialInterface* Material; // 0x48
	FVector2D ExtentMin; // 0x50
	FVector2D ExtentMax; // 0x58
};

struct UARObjectComponent {
	FARObjectUpdatePayload ReplicatedPayload; // 0x280
};

struct UMaterialExpressionTransform {
	FExpressionInput Input; // 0x40
	EMaterialVectorCoordTransformSource TransformSourceType; // 0x54
	EMaterialVectorCoordTransform TransformType; // 0x55
};

struct ATigerPassionProjectile {
	FVector TargetLocation; // 0x228
	FVector Velocity; // 0x234
	float ScaledSpeedValue; // 0x240
	float BuffDuration; // 0x244
	float BuffStrength; // 0x248
	float TimeUntilParticleFadeTiemout; // 0x24c
	FTimerHandle TimerHandle; // 0x250
	char Effect; // 0x258
	bool bIsMoving; // 0x259
	bool bTurnOnCollision; // 0x25a
	ATigerCharacter* TigerCharacterOwner; // 0x260
	UTigerDisciplinePassion* PassionDiscipline; // 0x268
	UTigerPassionConfig* ConfigType; // 0x270
	UBoxComponent* Box; // 0x278
	UParticleSystemComponent* ParticleComp; // 0x280
};

struct UARPoseComponent {
	FARPoseUpdatePayload ReplicatedPayload; // 0x280
};

struct UTigerGrimoireSeasonDatabase {
	TArray<UTigerGrimoireSeasonData*> Seasons; // 0x28
};

struct UTimelineTemplate {
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

struct UNiagaraDataInterfaceArrayFloat4 {
	TArray<FVector4> FloatData; // 0x50
};

struct UDatasmithGLTFSceneImportData {
	FString Generator; // 0x28
	float Version; // 0x38
	FString Author; // 0x40
	FString License; // 0x50
	FString Source; // 0x60
};

struct UInterpTrackFloatProp {
	FName PropertyName; // 0x90
};

struct UTigerCharacterPaperDollWidget {
	FTigerCharacterAppearance Apperance; // 0x2f0
	UTigerPlayerClanData* ClanData; // 0x370
	bool bUseSharedPaperDoll; // 0x378
};

struct UParticleModuleMeshMaterial {
	TArray<UMaterialInterface*> MeshMaterials; // 0x30
};

struct UTimecodeProvider {
	float FrameDelay; // 0x28
};

struct UNiagaraPreviewAxis_InterpParamLinearColor {
	FLinearColor Min; // 0x38
	FLinearColor Max; // 0x48
};

struct UTigerFrenzyConfig {
	float RoarRadius; // 0x160
	float RoarDamage; // 0x164
	float GroundedTime; // 0x168
	float ImmobilizeTime; // 0x16c
	float DelayBeforeRoarEffect; // 0x170
	UTigerBuff* FrenzyBuff; // 0x178
	UAnimMontage* RoarAnimation; // 0x180
	USoundBase* RoarSound; // 0x188
	USoundBase* BuffActiveSound; // 0x190
	UParticleSystem* RoarParticles; // 0x198
};

struct UTigerDisplacementConfig {
	bool bShowDebugInfo; // 0x170
	float AttackingRange; // 0x174
	float AttackingRadius; // 0x178
	float PlayerTargetMultiplier; // 0x17c
	float MeleeAreaMultiplier; // 0x180
	UCurveFloat* AimAxisValueCurve; // 0x188
	UCurveFloat* DistanceFromUseValueCurve; // 0x190
	float Damage; // 0x198
	float BackgroundFindTargetInterval; // 0x19c
	float PlayerToScoutedTargetDotProductCutoff; // 0x1a0
	USoundBase* ActivationSound; // 0x1a8
	UTigerBuffDOT* DOTToApply; // 0x1b0
	UTigerBuff* BuffToApplyOnCasterWhenTeleporting; // 0x1b8
	UTigerWidget* TargetMarkerWidgetClass; // 0x1c0
	UAnimMontage* AirMontage; // 0x1c8
	bool bInterruptClimbOnTarget; // 0x1d0
};

struct UDatasmithAssetUserData {
	TMap<FName, FString> MetaData; // 0x28
};

struct UNiagaraEmitter {
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

struct ATigerEnragedEffectActor {
	bool bIsActive; // 0x228
	bool bHasDamageBuff; // 0x229
	bool bIsRegenerating; // 0x22a
};

struct UABP_VMP_BRU_F_HAIR_08_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2f8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x320
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xbc0
};

struct UTBP_UI_KeyboardIcon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UImage* IconImage; // 0x288
	UTigerKeyTextureMapping* KeyTextureMapping; // 0x290
	bool MatchSize; // 0x298
};

struct UAsyncActionLoadPrimaryAsset {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UModularSynthComponent {
	int32_t VoiceCount; // 0x6c0
};

struct UEnvQueryTest_Distance {
	EEnvTestDistance TestMode; // 0x1f8
	UEnvQueryContext* DistanceTo; // 0x200
};

struct UTigerAISense_Masquerade {
	TArray<FTigerAIMasqueradeEvent> MasqueradeEvents; // 0x80
};

struct UMeshSelectionSet {
	TArray<int32_t> Vertices; // 0x40
	TArray<int32_t> Edges; // 0x50
	TArray<int32_t> Faces; // 0x60
	TArray<int32_t> Groups; // 0x70
};

struct ATBP_PlayerController_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xbe0
	UTBP_ChatComponent_C* TBP_ChatComponent; // 0xbe8
	UTBP_ContextualHelpComponent_C* TBP_ContextualHelpComponent; // 0xbf0
	UTBP_PingControllerComponent_C* TBP_PingControllerComponent; // 0xbf8
	UTBP_EmoteControllerComponent_C* TBP_EmoteControllerComponent; // 0xc00
	UTigerMenuWidget* ArchetypeHelpUI; // 0xc08
	UObject* ArchtypeHelpClass; // 0xc10
	float Axis X; // 0xc18
	float Axis Y; // 0xc1c
	float Axis Triggers; // 0xc20
};

struct UTBP_UI_AdvancedTextBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* MoveHint; // 0x268
	UTigerStyledRichTextBlock* HintText; // 0x270
	UImage* Image; // 0x278
	UTBP_UI_TextBoxWrapper_C* WrappedTextBox; // 0x280
	FText Hint Text; // 0x288
	bool Is Password; // 0x2a0
	FMulticastInlineDelegate On Text Settled; // 0x2a8
	FMulticastInlineDelegate On Text Changed; // 0x2b8
	int32_t CharCap; // 0x2c8
};

struct UBTService_RunEQS {
	FEQSParametrizedQueryExecutionRequest EQSRequest; // 0x98
};

struct UTigerResourceBarSegmentUI {
	UMaterialInstanceDynamic* SegmentMaterial; // 0x280
	float MinResource; // 0x288
	float MaxResource; // 0x28c
};

struct UABP_VMP_BRU_F_HAIR_01_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x710
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0xb50
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0xf90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x13d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1810
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1c50
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2090
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x24d0
	FAnimNode_Root AnimGraphNode_Root; // 0x24f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2520
};

struct UTBP_UI_PingInstanceBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2d0
	UWidgetAnimation* Fade_In_Pillar; // 0x2d8
	UWidgetAnimation* Pillar_Within_Range_Anim; // 0x2e0
	UWidgetAnimation* Offscreen_PulseAnim; // 0x2e8
	UWidgetAnimation* PingFade; // 0x2f0
	UWidgetAnimation* OffscreenAnimation; // 0x2f8
	UCanvasPanel* ContentCanvas; // 0x300
	UOverlay* ContentCanvas_Pulse; // 0x308
	UTBP_UI_PingMapTooltip_C* MapTooltip; // 0x310
	UImage* OffScreenDirectionIndicator; // 0x318
	UCanvasPanel* OffscreenParent; // 0x320
	UCanvasPanel* OnScreen; // 0x328
	UVerticalBox* Pillar_container; // 0x330
	UImage* Pillar_Head; // 0x338
	UImage* Pillar_Leg; // 0x340
	UImage* Ping_Image_Pulse; // 0x348
	UOverlay* Visual_Widget_Slot; // 0x350
	bool bIsOnScreen; // 0x358
	int32_t CONFIG_VisualMaxResponses; // 0x35c
	float CONFIG_StartRotationPercentage; // 0x360
	float CONFIG_ResponseOffset; // 0x364
	TArray<UTBP_UI_PingResponse_C*> PingResponseUIs; // 0x368
	bool bIsTooltipShowing; // 0x378
	bool CONFIG_bShowDistance; // 0x379
	UTigerPingWorldInstanceUI* VisualWidget; // 0x380
	FVector2D CONFIG_TooltipOffset; // 0x388
	bool bIsAiming; // 0x390
	FMulticastInlineDelegate PingEventDispatcher; // 0x398
	float PlayerDistance; // 0x3a8
	bool bPingIsFaded; // 0x3ac
};

struct UInterpTrackInstAnimControl {
	float LastUpdatePosition; // 0x28
};

struct UDatasmithStaticMeshTemplate {
	FDatasmithMeshSectionInfoMapTemplate SectionInfoMap; // 0x30
	int32_t LightMapCoordinateIndex; // 0x80
	int32_t LightMapResolution; // 0x84
	TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings; // 0x88
	TArray<FDatasmithStaticMaterialTemplate> StaticMaterials; // 0x98
};

struct UProgressWidgetStyle {
	FProgressBarStyle ProgressBarStyle; // 0x30
};

struct UARCandidateImage {
	UTexture2D* CandidateTexture; // 0x30
	FString FriendlyName; // 0x38
	float Width; // 0x48
	float Height; // 0x4c
	EARCandidateImageOrientation Orientation; // 0x50
};

struct ALODActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x228
	TMap<UMaterialInterface*, UInstancedStaticMeshComponent*> ImpostersStaticMeshComponents; // 0x230
	UHLODProxy* Proxy; // 0x280
	FName Key; // 0x288
	float LODDrawDistance; // 0x290
	int32_t LODLevel; // 0x294
	TArray<AActor*> SubActors; // 0x298
	char CachedNumHLODLevels; // 0x2a8
};

struct UTigerInventoryItemPack {
	FTigerItemId ItemId; // 0x118
};

struct UCameraAnimInst {
	UCameraAnim* CamAnim; // 0x28
	UInterpGroupInst* InterpGroupInst; // 0x30
	float PlayRate; // 0x50
	UInterpTrackMove* MoveTrack; // 0x68
	UInterpTrackInstMove* MoveInst; // 0x70
	ECameraShakePlaySpace PlaySpace; // 0x78
};

struct UTigerBuffAnarchHuntingKnifeStackInstance {
	ATigerPlayer* Player; // 0x88
};

struct UTigerTraversalFiniteStateMachine {
	UTigerCharacterMovementComponent* TigerCharacterMovement; // 0xb8
	UTigerTraversalBaseFiniteState* ActiveState; // 0xc0
	UTigerTraversalBaseFiniteState* TraversalList[0xf]; // 0xc8
	UTigerTraversalStateConfigBase* Configs[0xf]; // 0x140
	FMulticastInlineDelegate OnTraversalStateChanged; // 0x1b8
};

struct UTigerJudgeFedOnState {
	float FeedingOffset; // 0x60
	FName FeedingAnimationName; // 0x64
};

struct UTBP_GroupMemberMapMarkerWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UImage* PlayerImage; // 0x2c0
};

struct UPhysicsAsset {
	TArray<int32_t> BoundsBodies; // 0x30
	TArray<USkeletalBodySetup*> SkeletalBodySetups; // 0x40
	TArray<UPhysicsConstraintTemplate*> ConstraintSetup; // 0x50
	FSolverIterations SolverIterations; // 0x60
	char bNotForDedicatedServer : 1; // 0x7c
	UThumbnailInfo* ThumbnailInfo; // 0x120
	TArray<UBodySetup*> BodySetup; // 0x128
};

struct UTBP_UI_TutorialMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UTBP_UI_MenuButton_C* QuitButton; // 0x298
	UTBP_UI_MenuButton_C* ResumeButton; // 0x2a0
	UTBP_UI_MenuButton_C* ReturnButton; // 0x2a8
	UTBP_UI_BasicMenu_C* SelectionMenu; // 0x2b0
	UTBP_UI_ConfirmMenu_C* TBP_UI_ConfirmMenu; // 0x2b8
	UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_Quit; // 0x2c0
	UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_Resume; // 0x2c8
	UTBP_UI_InputPrompt_Gamepad_C* TBP_UI_InputPrompt_Gamepad_Return; // 0x2d0
	UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_Quit; // 0x2d8
	UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_Resume; // 0x2e0
	UTBP_UI_InputPrompt_Keyboard_C* TBP_UI_InputPrompt_Keyboard_Return; // 0x2e8
	UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2f0
	bool ConfirmLeave; // 0x2f8
	bool ConfirmQuit; // 0x2f9
	int32_t WaitCount; // 0x2fc
};

struct UPlatformMediaSource {
	UMediaSource* MediaSource; // 0x80
};

struct UTigerBlueprintLootComponent {
	UTigerItemLootTable* LootTable; // 0xb0
	TArray<AActor*> SpawnedItemActors; // 0xb8
};

struct UUMGSequencePlayer {
	UWidgetAnimation* Animation; // 0x410
	FMovieSceneRootEvaluationTemplateInstance RootTemplateInstance; // 0x420
};

struct UTBP_UI_Discipline_Scout_WorldMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	UWidgetAnimation* DownArrowFadeOut; // 0x328
	UWidgetAnimation* OffScreenState; // 0x330
	UWidgetAnimation* DetectedText_FadeOut; // 0x338
	UWidgetAnimation* DownArrow_Movement; // 0x340
	UWidgetAnimation* Composite_DetectedAnimationOut; // 0x348
	UWidgetAnimation* Composite_DetectedAnimationIn; // 0x350
	UWidgetAnimation* DefaultBat_OutAnimation; // 0x358
	UWidgetAnimation* DefaultBat_InAnimation; // 0x360
	UTBP_UI_TransitionHeader_C* AnimatedDetectedText; // 0x368
	UImage* BatDefaultImage; // 0x370
	UImage* BatDetectedImage; // 0x378
	UImage* DownArrowImage; // 0x380
	UCanvasPanel* RootCanvas; // 0x388
	bool bShouldDetectionWidgetsPlayHide; // 0x390
	FWidgetTransform OnScreenRootTransform; // 0x394
};

struct UTBP_ContextualHelp_Tutorial_Slide_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct USceneCaptureComponentCube {
	UTextureRenderTargetCube* TextureTarget; // 0x2b0
	bool bCaptureRotation; // 0x2b8
	UTextureRenderTargetCube* TextureTargetLeft; // 0x2c0
	UTextureRenderTargetCube* TextureTargetRight; // 0x2c8
	UTextureRenderTarget2D* TextureTargetODS; // 0x2d0
	float IPD; // 0x2d8
};

struct UParticleModuleSizeScale {
	FRawDistributionVector SizeScale; // 0x30
	char EnableX : 1; // 0x78
	char EnableY : 1; // 0x78
	char EnableZ : 1; // 0x78
};

struct UTigerSprintConfig {
	float MinimumForwardInput; // 0x28
	float SprintDelay; // 0x30
	UTigerCharacterMovementComponent* MoveComp; // 0x38
	float LedgeGrabReductionMultiplier; // 0x4c
	float MeleeAttackReductionMultiplier[0x8]; // 0x50
	float DisciplineUseReductionMultiplier[0x22]; // 0x70
	TArray<float> DodgeReductionMultiplier; // 0xf8
	float JumpReductionMultiplier; // 0x108
	float DoubleJumpReductionMultiplier; // 0x10c
	float SprintBuildUpDecayDuration; // 0x110
	float SprintBuildUpDecayDelay; // 0x114
	UCurveFloat* SprintBuildUpCurve; // 0x118
};

struct ATigerEntityCheckpointSupplyDropLocation {
	USceneComponent* SupplyRoot; // 0x228
};

struct URadialFalloff {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Radius; // 0xc0
	FVector Position; // 0xc4
	EFieldFalloffType Falloff; // 0xd0
};

struct UActorComponent {
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

struct UAnimationSettings {
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

struct UTigerHealingBuffInstance {
	UTigerHealingBuff* BuffConfig; // 0x88
};

struct UAISystem {
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

struct UTigerPhysicalInteraction {
	TWeakObjectPtr<ATigerPlayer> OtherPlayer; // 0x38
};

struct AIntervalGizmoActor {
	UGizmoLineHandleComponent* UpIntervalComponent; // 0x228
	UGizmoLineHandleComponent* DownIntervalComponent; // 0x230
	UGizmoLineHandleComponent* ForwardIntervalComponent; // 0x238
};

struct UAnimSequenceLevelSequenceLink {
	FGuid SkelTrackGuid; // 0x28
	FSoftObjectPath PathToLevelSequence; // 0x38
};

struct UTigerAIPetPreparePathContinuing {
	FBlackboardKeySelector MasterPlayer; // 0x70
};

struct UABP_VMP_BRU_F_HAIR_09_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2980
};

struct UMovieSceneParticleTrack {
	TArray<UMovieSceneSection*> ParticleSections; // 0x80
};

struct ATigerPlayerGrid {
	TArray<FTigerPlayerGridCell> Cells; // 0x228
	FVector2D GridSize; // 0x238
	int32_t GridRows; // 0x240
	int32_t GridColumns; // 0x244
	int32_t CellDirectNeighborsToCheck; // 0x248
	UBoxComponent* GridBoxComponent; // 0x250
	bool bShowGrid; // 0x258
};

struct URadialIntMask {
	float Radius; // 0xb0
	FVector Position; // 0xb4
	int32_t InteriorValue; // 0xc0
	int32_t ExteriorValue; // 0xc4
	ESetMaskConditionType SetMaskCondition; // 0xc8
};

struct UTBP_ContextualHelp_Tutorial_SwapWeapons_Gamepad_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UABP_VMP_VEN_M_HAIR_09_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x760
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xba0
};

struct UTigerNearCameraFadeMaterialDb {
	TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>> OriginalMaterialToFadingMaterialLut; // 0x30
	TMap<TSoftObjectPtr<UMaterialInterface>, TSoftObjectPtr<UMaterialInterface>> FadingMaterialToOriginalMaterialLut; // 0x80
};

struct UTBP_Buff_RejuvenatingVoice_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
};

struct UTigerAISenseConfig_Masquerade {
	UTigerAISense_Masquerade* Implementation; // 0x48
};

struct UTigerDisciplineMetaData {
	ETigerDisciplinesEnum DisicplineType; // 0x28
	bool bAllowRotationLerp; // 0x29
};

struct UInterpTrackInstFloatMaterialParam {
	TArray<UMaterialInstanceDynamic*> MaterialInstances; // 0x28
	TArray<float> ResetFloats; // 0x38
	TArray<FPrimitiveMaterialRef> PrimitiveMaterialRefs; // 0x48
	UInterpTrackFloatMaterialParam* InstancedTrack; // 0x58
};

struct UTigerAnimNotify_ParticleEffect {
	UParticleSystem* IndoorPSTemplate; // 0x90
	UParticleSystem* OutdoorPSTemplate; // 0x98
	ETigerPlayOnClients PlayOnClients; // 0xa0
	UTigerParticleStrategyChooseSystem* ChooseParticleSystemOverride; // 0xc0
	UTigerParticleStrategyPostSpawn* ParticlePostSpawnModification; // 0xc8
};

struct UTigerTraversalClimbState {
	UTigerTraversalStateClimbingConfig* ClimbingConfig; // 0x40
};

struct AReplicationGraphDebugActor {
	UReplicationGraph* ReplicationGraph; // 0x228
	UNetReplicationGraphConnection* ConnectionManager; // 0x230
};

struct UTigerSpawnPointSelectionUi {
	FVector2D CurrentCanvasSize; // 0x290
	int32_t PreGameStateEndTime; // 0x298
	ETigerPreMatchState CurrentPreMatchState; // 0x29c
	TArray<FTigerClientSpawnLocationInfo> CurrentSpawnSelectionInfo; // 0x2a0
	TMap<int32_t, UTigerWidget*> GroupSpawnLocationWidgets; // 0x2b0
	UWidget* CanvasSizeWidget; // 0x300
	bool bAllowOutOfBoundsSelection; // 0x31c
	TArray<UTigerWidget*> EnemySpawnLocationWidgets; // 0x320
};

struct UTestMovieSceneTrack {
	bool bHighPassFilter; // 0x80
	TArray<UMovieSceneSection*> SectionArray; // 0x88
};

struct UTigerAIThreateningTargetService {
	FBlackboardKeySelector ThreatPosition; // 0x70
	FBlackboardKeySelector CurrentThreatTarget; // 0x98
	FBlackboardKeySelector SuggestedNonObstructedPosition; // 0xc0
	FBlackboardKeySelector bIsAllowedToChaseKey; // 0xe8
	FBlackboardKeySelector bCanShoot; // 0x110
	bool bUseAttackPermissions; // 0x138
	bool bShowDebugFeatures; // 0x139
};

struct UReplicationGraph {
	UNetReplicationGraphConnection* ReplicationConnectionManagerClass; // 0x28
	UNetDriver* NetDriver; // 0x30
	TArray<UNetReplicationGraphConnection*> Connections; // 0x38
	TArray<UNetReplicationGraphConnection*> PendingConnections; // 0x48
	TArray<UReplicationGraphNode*> GlobalGraphNodes; // 0x98
	TArray<UReplicationGraphNode*> PrepareForReplicationNodes; // 0xa8
};

struct ATBP_ShockwaveWall_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	UParticleSystemComponent* PS_Vfx_ShockwavePunch; // 0x2c8
	float KnockbackPitchOffsetInDegrees; // 0x2d0
	float KnockbackForce; // 0x2d4
	bool bShouldDrawHitboxes; // 0x2d8
	int32_t ShockwaveWallAkEventID; // 0x2dc
	ATBP_ShockwaveWallTrail_C* TrailActor; // 0x2e0
	float ShockTrailParticleRate; // 0x2e8
	UCurveFloat* KnockbackCurve; // 0x2f0
	float ForceOnDynamicObjects; // 0x2f8
	float DistancePercentTravelled; // 0x2fc
	UCurveFloat* DamageCurve; // 0x300
	float Shockwave Damage; // 0x308
};

struct UTigerThrallMission {
	int32_t MissionId; // 0x30
	FName MissionName; // 0x34
	FTigerThrallMissionObjective MissionObjective; // 0x40
	UTigerThrallMissionMapMarkerData* MissionMarkers; // 0x78
	FThrallMissionRequirements MissionStatRequirements; // 0x80
	FTigerThrallMissionReward MissionRewards; // 0x98
	int32_t MissionLength; // 0xb0
};

struct UABP_VMP_BRU_F_HAIR_03_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xbc0
};

struct UPaperTileMap {
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

struct URuntimeVirtualTextureComponent {
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

struct UPaperSprite {
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

struct UTigerGroupMemberMarkerProxy {
	char PlayerIndex; // 0x68
};

struct AActor {
	FActorTickFunction PrimaryActorTick; // 0x28
	char bNetTemporary : 1; // 0x58
	char bNetStartup : 1; // 0x58
	char bOnlyRelevantToOwner : 1; // 0x58
	char bAlwaysRelevant : 1; // 0x58
	char bReplicateMovement : 1; // 0x58
	char bHidden : 1; // 0x58
	char bTearOff : 1; // 0x58
	char bExchangedRoles : 1; // 0x58
	char bNetLoadOnClient : 1; // 0x59
	char bNetUseOwnerRelevancy : 1; // 0x59
	char bRelevantForNetworkReplays : 1; // 0x59
	char bRelevantForLevelBounds : 1; // 0x59
	char bReplayRewindable : 1; // 0x59
	char bAllowTickBeforeBeginPlay : 1; // 0x59
	char bAutoDestroyWhenFinished : 1; // 0x59
	char bCanBeDamaged : 1; // 0x59
	char bBlockInput : 1; // 0x5a
	char bCollideWhenPlacing : 1; // 0x5a
	char bFindCameraComponentWhenViewTarget : 1; // 0x5a
	char bGenerateOverlapEventsDuringLevelStreaming : 1; // 0x5a
	char bIgnoresOriginShifting : 1; // 0x5a
	char bEnableAutoLODGeneration : 1; // 0x5a
	char bIsEditorOnlyActor : 1; // 0x5a
	char bActorSeamlessTraveled : 1; // 0x5a
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
	int32_t CachedStreamingPriority; // 0xe8
	FName NetDriverName; // 0xec
	ENetRole Role; // 0xf4
	ENetDormancy NetDormancy; // 0xf5
	ESpawnActorCollisionHandlingMethod SpawnCollisionHandlingMethod; // 0xf6
	EAutoReceiveInput AutoReceiveInput; // 0xf7
	int32_t InputPriority; // 0xf8
	UInputComponent* InputComponent; // 0x100
	float NetCullDistanceSquared; // 0x108
	int32_t NetTag; // 0x10c
	float NetUpdateFrequency; // 0x110
	float MinNetUpdateFrequency; // 0x114
	float NetPriority; // 0x118
	APawn* Instigator; // 0x120
	TArray<AActor*> Children; // 0x128
	USceneComponent* RootComponent; // 0x138
	TArray<AMatineeActor*> ControllingMatineeActors; // 0x140
	TArray<FName> Layers; // 0x158
	TWeakObjectPtr<UChildActorComponent> ParentComponent; // 0x16c
	TArray<FName> Tags; // 0x178
	FMulticastSparseDelegate OnTakeAnyDamage; // 0x188
	FMulticastSparseDelegate OnTakePointDamage; // 0x189
	FMulticastSparseDelegate OnTakeRadialDamage; // 0x18a
	FMulticastSparseDelegate OnActorBeginOverlap; // 0x18b
	FMulticastSparseDelegate OnActorEndOverlap; // 0x18c
	FMulticastSparseDelegate OnBeginCursorOver; // 0x18d
	FMulticastSparseDelegate OnEndCursorOver; // 0x18e
	FMulticastSparseDelegate OnClicked; // 0x18f
	FMulticastSparseDelegate OnReleased; // 0x190
	FMulticastSparseDelegate OnInputTouchBegin; // 0x191
	FMulticastSparseDelegate OnInputTouchEnd; // 0x192
	FMulticastSparseDelegate OnInputTouchEnter; // 0x193
	FMulticastSparseDelegate OnInputTouchLeave; // 0x194
	FMulticastSparseDelegate OnActorHit; // 0x195
	FMulticastSparseDelegate OnDestroyed; // 0x196
	FMulticastSparseDelegate OnEndPlay; // 0x197
	TArray<UActorComponent*> InstanceComponents; // 0x1f8
	TArray<UActorComponent*> BlueprintCreatedComponents; // 0x208
};

struct ATigerShockwaveWall {
	UBoxComponent* EffectBoxComponent; // 0x230
	FTigerShockwaveWallData ShockwaveData; // 0x238
	FVector TargetLocation; // 0x298
	TWeakObjectPtr<ATigerPlayer> TigerInstigator; // 0x2a4
	float CurrentLifetime; // 0x2ac
	int32_t PowerLevel; // 0x2b0
};

struct ALandscapeMeshProxyActor {
	ULandscapeMeshProxyComponent* LandscapeMeshProxyComponent; // 0x228
};

struct UTigerPlayerGroup {
	TArray<TWeakObjectPtr<ATigerPlayerState>> Members; // 0x58
	TArray<TWeakObjectPtr<ATigerPlayerState>> Invitations; // 0x78
	UTigerPingCoordinator* PingCoordinator; // 0x88
};

struct UFieldSystemMetaDataProcessingResolution {
	EFieldResolutionType ResolutionType; // 0xb0
};

struct USharkTelemetry {
	FSharkTelemetrySettings TelemetryApplicationSettings; // 0x28
	TArray<FSharkTelemtryEventData> BufferedEvents; // 0x90
	UGameInstance* GameInstance; // 0xf0
};

struct UTimelineComponent {
	FTimeline TheTimeline; // 0xb0
	char bIgnoreTimeDilation : 1; // 0x148
};

struct UInheritableComponentHandler {
	TArray<FComponentOverrideRecord> Records; // 0x28
	TArray<UActorComponent*> UnnecessaryComponents; // 0x38
};

struct UMaterialExpressionArccosine {
	FExpressionInput Input; // 0x40
};

struct USoundNodeParamCrossFade {
	FName ParamName; // 0x58
};

struct UTextureLightProfile {
	float Brightness; // 0x110
	float TextureMultiplier; // 0x114
};

struct UTigerOnlineSubsystemSettings {
	FString OnlineServicesEnv; // 0x38
	FString OnlineServicesBaseUrlDev; // 0x48
	FString OnlineServicesBaseUrlUatMain; // 0x58
	FString OnlineServicesBaseUrlUatRelease; // 0x68
	FString OnlineServicesBaseUrlUatPs5; // 0x78
	FString OnlineServicesBaseUrlUatStaging; // 0x88
	FString OnlineServicesBaseUrlProd; // 0x98
	FString OnlineServicesBaseUrlLocal; // 0xa8
	FString SessionServiceUri; // 0xb8
	int32_t MaxRequestRetries; // 0xc8
	int32_t MatchmakingTimeoutSeconds; // 0xcc
	FString DsVersion; // 0xd0
};

struct UAnimInstance {
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

struct UInterpTrackInstFloatProp {
	float ResetFloat; // 0x58
};

struct UDamageType {
	char bCausedByWorld : 1; // 0x28
	char bScaleMomentumByMass : 1; // 0x28
	char bRadialDamageVelChange : 1; // 0x28
	float DamageImpulse; // 0x2c
	float DestructibleImpulse; // 0x30
	float DestructibleDamageSpreadScale; // 0x34
	float DamageFalloff; // 0x38
};

struct UMovieScene3DAttachSection {
	FName AttachSocketName; // 0x118
	FName AttachComponentName; // 0x120
	EAttachmentRule AttachmentLocationRule; // 0x128
	EAttachmentRule AttachmentRotationRule; // 0x129
	EAttachmentRule AttachmentScaleRule; // 0x12a
	EDetachmentRule DetachmentLocationRule; // 0x12b
	EDetachmentRule DetachmentRotationRule; // 0x12c
	EDetachmentRule DetachmentScaleRule; // 0x12d
};

struct ATigerHolyIncense {
	FMulticastInlineDelegate OnAssaultFinished; // 0x228
	UTigerScriptedTexture* Texture; // 0x238
	UTigerGasOverlay* SlateGasOverlay; // 0x240
	UProceduralMeshComponent* ProceduralMesh; // 0x248
	UTigerHolyIncenseWaveComponent* WaveComponent; // 0x250
	USplineComponent* LevelBorder; // 0x258
	float WallMinHeight; // 0x260
	float WallMaxHeight; // 0x264
	UProceduralMeshComponent* PreviewMesh; // 0x270
	UMaterialInterface* GasMaterial; // 0x278
	UMaterialInstanceDynamic* MaterialInstance; // 0x280
	TArray<FVector2D> InitialVertices; // 0x288
	ATigerHaven* FinalHaven; // 0x298
	float NumVerticesPerKilometer; // 0x2a0
	ETigerGameType ValidForGameType; // 0x2a4
	float InitialArea; // 0x2a8
	float InitialCircumference; // 0x2ac
};

struct AAkAmbientSound {
	UAkAudioEvent* AkAudioEvent; // 0x228
	UAkComponent* AkComponent; // 0x230
	bool StopWhenOwnerIsDestroyed; // 0x238
	bool AutoPost; // 0x239
};

struct UNiagaraDataInterfaceSkeletalMesh {
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

struct UAnimCompress_RemoveTrivialKeys {
	float MaxPosDiff; // 0x40
	float MaxAngleDiff; // 0x44
	float MaxScaleDiff; // 0x48
};

struct UParticleModuleSubUV {
	USubUVAnimation* Animation; // 0x30
	FRawDistributionFloat SubImageIndex; // 0x38
	char bUseRealTime : 1; // 0x68
};

struct UTigerBuffShieldAdrenalineRush {
	float TimeBeforeDecay; // 0x250
	float DecayPerSecond; // 0x254
	float DamageToShieldScale; // 0x258
};

struct UTigerSeasonConfigAsset {
	FTigerSeasonConfig Config; // 0x30
};

struct UTBP_EarthShock_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x178
	UDecalComponent* Indicator; // 0x180
	float IndicatorOffset; // 0x188
	UAkComponent* AudioComponent; // 0x190
	int32_t AimingAkEventID; // 0x198
	UCurveFloat* LeapTimeCurve; // 0x1a0
	UStaticMeshComponent* IndicatorMesh; // 0x1a8
	ATBP_Vfx_GroundSlam_Marker_C* Indicator Actor; // 0x1b0
	bool Target Is Wall; // 0x1b8
	ATBP_VFX_GroundSlam_Impact_C* Impact VFX Actor; // 0x1c0
	FRotator Calculated Rotation; // 0x1c8
	FVector Calculated Position; // 0x1d4
	FVector Base Position; // 0x1e0
};

struct UTigerAiPlayerUseWeapon {
	ATigerLocalAIControllerBase* LocalAIController; // 0x80
	ATigerPlayerController* PlayerController; // 0x88
};

struct UGameplayTagsDeveloperSettings {
	FString DeveloperConfigName; // 0x38
	FName FavoriteTagSource; // 0x48
};

struct UBTTask_Wait {
	float WaitTime; // 0x70
	float RandomDeviation; // 0x74
};

struct UParticleModuleLocationEmitter {
	FName EmitterName; // 0x30
	ELocationEmitterSelectionMethod SelectionMethod; // 0x38
	char InheritSourceVelocity : 1; // 0x3c
	float InheritSourceVelocityScale; // 0x40
	char bInheritSourceRotation : 1; // 0x44
	float InheritSourceRotationScale; // 0x48
};

struct UTextureRenderTarget2D {
	int32_t SizeX; // 0xf0
	int32_t SizeY; // 0xf4
	FLinearColor ClearColor; // 0xf8
	TextureAddress AddressX; // 0x108
	TextureAddress AddressY; // 0x109
	char bForceLinearGamma : 1; // 0x10a
	char bHDR : 1; // 0x10a
	char bGPUSharedFlag : 1; // 0x10a
	ETextureRenderTargetFormat RenderTargetFormat; // 0x10b
	char bAutoGenerateMips : 1; // 0x10c
	TextureFilter MipsSamplerFilter; // 0x10d
	TextureAddress MipsAddressU; // 0x10e
	TextureAddress MipsAddressV; // 0x10f
	EPixelFormat OverrideFormat; // 0x110
};

struct UDialogueVoice {
	EGrammaticalGender Gender; // 0x28
	EGrammaticalNumber Plurality; // 0x29
	FGuid LocalizationGUID; // 0x2c
};

struct ATigerMasqueradeActionMarker {
	bool bOnlyVisibleInHeightenedSenses; // 0x230
};

struct UTigerSpawnMechanicBattleRoyaleBase {
	ATigerMatchGameMode* GameMode; // 0x28
	TArray<AActor*> AllPlayerStarts; // 0x30
	TArray<AActor*> UnusedPlayerStarts; // 0x40
};

struct UMaterialExpressionSobol {
	FExpressionInput Cell; // 0x40
	FExpressionInput Index; // 0x54
	FExpressionInput Seed; // 0x68
	uint32_t ConstIndex; // 0x7c
	FVector2D ConstSeed; // 0x80
};

struct USoundNodeWavePlayer {
	TSoftObjectPtr<USoundWave> SoundWaveAssetPtr; // 0x48
	USoundWave* SoundWave; // 0x70
	char bLooping : 1; // 0x80
};

struct UNiagaraScript {
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

struct UTigerWardrobeUI {
	UTigerVendorComponent* VendorComponent; // 0x3b0
	TArray<UTigerVendorStoreCategory*> InventoryCategories; // 0x3b8
	UTigerVendorStoreCategory* CurrentCategory; // 0x3c8
};

struct UABP_VMP_VEN_M_HAIR_05_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct UTigerGrimoireRichBlockDecorator {
	FSlateBrush SummaryBackground; // 0x28
	UTigerGrimoireUi* GrimoireUI; // 0xb0
	FButtonStyle ButtonStyle; // 0xb8
	FTextBlockStyle UnlockedEntryTextStyle; // 0x330
	FTextBlockStyle LockedEntryTextStyle; // 0x5a0
};

struct UAssetManagerSettings {
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

struct UMovieSceneWidgetMaterialTrack {
	TArray<FName> BrushPropertyNamePath; // 0x90
	FName TrackName; // 0xa0
};

struct UCameraShakeSourceComponent {
	ECameraShakeAttenuation Attenuation; // 0x1f8
	float InnerAttenuationRadius; // 0x1fc
	float OuterAttenuationRadius; // 0x200
	UCameraShakeBase* CameraShake; // 0x208
	bool bAutoStart; // 0x210
};

struct UAkAssetDataWithMedia {
	TArray<UAkMediaAsset*> MediaList; // 0x68
};

struct UPawnAction {
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

struct ATigerEntityPatrollingHelicopter {
	FTigerAISplinePathData PathData; // 0x2e0
	TArray<FVector> GeneratedCirclularPath; // 0x380
	TMap<ETigerPatrollingHelicopterSpotlightState, FColor> SpotlightColours; // 0x390
	FVector CurrentTrackingFlightTarget; // 0x3e0
	int32_t NumberOfPointsInCirclularPath; // 0x404
	int32_t CurrentSplineWaypointIndex; // 0x408
	int32_t CurrentTrackingIndex; // 0x40c
	float IdleRotationSpeed; // 0x414
	float HoverRotationSpeed; // 0x418
	float IdleFlightSpeed; // 0x41c
	float HoverFlightSpeed; // 0x420
	float LostPlayerStateNewSpotlightTargetRadius; // 0x424
	float MaxTimeToSearchForLostPlayer; // 0x428
	float CurrentTimeUntilReturnToPatrol; // 0x42c
	float MasqueradePointGainFromSpotlightPerSecond; // 0x430
	float SpaceBetweenMeshes; // 0x434
	float MovementDistanceThresholdSquared; // 0x438
	float BelowRoofHeightCutOffTime; // 0x43c
	float TimeCurrentTargetWasBelowRoofHeight; // 0x440
	float TargetedPlayerHoverCircleRadius; // 0x444
	float LostPlayerHoverCircleRadius; // 0x448
	float CircleGrowthRate; // 0x450
	float MaxTimeToFindGunFireEventCulprit; // 0x454
	float TimeToLoseInvisibleBloodhuntTarget; // 0x46c
	float DelayUntilPlayTargetSpottingSounds; // 0x470
	ETigerPatrollingHelicopterState CurrentState; // 0x474
	ETigerPatrollingHelicopterSpotlightState CurrentSpotlightState; // 0x475
	bool bHasReachedTarget; // 0x476
	bool bNeedToCalculateEntryVectorForTracking; // 0x477
	bool bWasLastTargetedPlayerBloodHunted; // 0x478
	bool bHasActiveTask; // 0x479
	bool bIsFiring; // 0x47a
	UTigerAICoordinator* AICoordinator; // 0x480
	USplineComponent* Spline; // 0x488
};

struct UTigerCharacterPreset {
	FTigerPreviewerData PreviewerData; // 0x28
	ETigerGender BodyType; // 0x2d8
};

struct UTigerDisciplineEarthshock {
	FEarthshockUseDataNetworked EarthshockUseData; // 0x78
	UTigerEarthshockConfig* EarthshockConfig; // 0xb0
};

struct UAmbisonicsEncodingSettings {
	int32_t AmbisonicsOrder; // 0x28
};

struct UMaterialExpressionSceneDepth {
	EMaterialSceneAttributeInputMode InputMode; // 0x40
	FExpressionInput Input; // 0x44
	FExpressionInput Coordinates; // 0x58
	FVector2D ConstInput; // 0x6c
};

struct ATigerGrimoireUnlockTriggerVolume {
	UTigerGrimoireEntry* EntryToUnlock; // 0x260
};

struct UTextureRenderTarget2DArray {
	int32_t SizeX; // 0xf0
	int32_t SizeY; // 0xf4
	int32_t Slices; // 0xf8
	FLinearColor ClearColor; // 0xfc
	EPixelFormat OverrideFormat; // 0x10c
	char bHDR : 1; // 0x10d
	char bForceLinearGamma : 1; // 0x10d
};

struct UMaterialExpressionTruncate {
	FExpressionInput Input; // 0x40
};

struct UMaterialExpressionTransformPosition {
	FExpressionInput Input; // 0x40
	EMaterialPositionTransformSource TransformSourceType; // 0x54
	EMaterialPositionTransformSource TransformType; // 0x55
};

struct UDistributionVectorUniform {
	FVector Max; // 0x38
	FVector Min; // 0x44
	char bLockAxes : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x55
	char bUseExtremes : 1; // 0x58
};

struct UVariant {
	TArray<FVariantDependency> Dependencies; // 0x28
	FText DisplayText; // 0x38
	TArray<UVariantObjectBinding*> ObjectBindings; // 0x68
	UTexture2D* Thumbnail; // 0x78
};

struct UTigerHealthBarUI {
	FMulticastInlineDelegate OnHealthChanged; // 0x260
	ATigerCharacter* TigerCharacterOwner; // 0x270
	UMaterialInstanceDynamic* HealthBarMaterial; // 0x278
	float LostHealthDelay; // 0x280
	float LostHealthBarSpeed; // 0x284
	float HealthAmountPerBar; // 0x288
	float WidthBetweenSegments; // 0x28c
	float LostHealthPercentage; // 0x290
	float DefaultHealthAmount; // 0x2a4
};

struct UParticleModuleKillHeight {
	FRawDistributionFloat Height; // 0x30
	char bAbsolute : 1; // 0x60
	char bFloor : 1; // 0x60
	char bApplyPSysScale : 1; // 0x60
};

struct UTBP_BeardColorCustomization_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x148
};

struct UMovieScene {
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

struct UTigerMasqueradeMarker {
	float MarkerRadius; // 0x2b0
};

struct UCheckBoxWidgetStyle {
	FCheckBoxStyle CheckBoxStyle; // 0x30
};

struct UTigerNPCVisualAsset {
	FName MainTag; // 0x30
	TArray<FName> AdditionalTags; // 0x38
	USkeletalMesh* SkeletalMesh; // 0x48
	TArray<USkeletalMesh*> HeadSkeletalMeshes; // 0x50
	TArray<USkeletalMesh*> HairSkeletalMeshes; // 0x60
	TArray<UTigerColorSetAsset*> ColorSetAssets; // 0x70
	TArray<UTigerLinearColorSetAsset*> HairColorSetAssets; // 0x80
	UMaterialInstance* DefaultMaterial; // 0x90
	bool bShowHeart; // 0x98
	ETigerGender Gender; // 0x99
	UAnimInstance* HairAnimationBlueprint; // 0xa0
	bool bUseCharacterPreset; // 0xa8
	TSoftObjectPtr<UTigerCharacterPreset> CharacterPreset; // 0xb0
	UAnimInstance* AnimationInstanceClass; // 0xd8
	ETigerCivilianEmotionalState EmotionalState; // 0xe0
	float ChanceForProp; // 0xe4
	TMap<UTigerNpcPropAsset*, float> PossibleNpcProps; // 0xe8
	float WalkSpeed; // 0x138
	float WalkTurnSpeed; // 0x13c
	float SprintSpeed; // 0x140
	float SprintTurnSpeed; // 0x144
	float StrafeSpeed; // 0x148
	float StrafeTurnSpeed; // 0x14c
};

struct UMaterialExpressionGIReplace {
	FExpressionInput Default; // 0x40
	FExpressionInput StaticIndirect; // 0x54
	FExpressionInput DynamicIndirect; // 0x68
};

struct UTigerVendorUI {
	TWeakObjectPtr<ATigerNPC> VendorNPC; // 0x290
	TWeakObjectPtr<UTigerInteractiveNpcComponent> InteractiveNpcComponent; // 0x298
	UTigerSharedVendorUI* SharedVendorUI; // 0x2a0
	bool bHideMouseCusorAtDescruction; // 0x2a8
	bool bUseTransitions; // 0x2aa
};

struct UTigerPingBase {
	int32_t MaxConcurrentPings; // 0x30
	bool bBecomesPermanentOnInterest; // 0x34
	bool bInstanceSupportsHover; // 0x35
	float LifeTimeInSeconds; // 0x38
	float MaxDistance; // 0x3c
	float MaxActorDistanceFromMarker; // 0x40
	UTigerPingWorldInstanceUI* WidgetClass; // 0x48
	TArray<UTigerPingBase*> ExclusiveWithPingClasses; // 0x50
	UTexture2D* Icon; // 0x60
	UTexture2D* InterestedResponseIcon; // 0x68
	UTexture2D* NotInterestedResponseIcon; // 0x70
	FText Name; // 0x78
	FText Description; // 0x90
	FText InterestedResponse; // 0xa8
	FText NotInterestedResponse; // 0xc0
	UAkAudioEvent* NotificationAudioEvent; // 0xd8
	UAkAudioEvent* VoiceAudioEvent; // 0xe0
	bool bCanBeInCluster; // 0xe8
};

struct UInterpTrackInstAkAudioEvent {
	float LastUpdatePosition; // 0x28
};

struct UNiagaraDataInterfaceVector2DCurve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
};

struct UTigerAnimInstance {
	ETigerEquippedWeaponType EquippedWeaponType; // 0x2b8
	bool bOwnerIsLocked; // 0x2b9
	UPoseAsset* FacePoseAsset; // 0x2c0
	UAnimSequence* FacePoseAnimation; // 0x2c8
	UBlendSpace* BlockStanceBlendSpace; // 0x2d0
	UTigerAnimationSetAsset* DefaultAnimationSet; // 0x328
	UTigerFaceCurvesAnimationMap* FaceCurvesAnimationMap; // 0x330
	TArray<FName> AvailableFaceCurves; // 0x338
	UTigerAnimationFilter* FacialAnimationFilter; // 0x348
	UTigerAnimationSetCollection* AnimationSetCollection; // 0x350
	UTigerAnimationSetCollection* PreviousAnimationSetCollection; // 0x358
	UAnimMontage* LatestFacialAnim; // 0x360
	FVector Velocity; // 0x368
	FVector PreviousVelocity; // 0x374
	float Speed; // 0x380
	float Direction; // 0x384
	float AimAnglePitch; // 0x388
	float AimAngleYaw; // 0x38c
	bool bIsDead; // 0x394
	bool bShooting; // 0x395
	bool bIsBlocking; // 0x396
	bool bIsMontagePlaying; // 0x397
	float MaxRootYawOffset; // 0x39c
	float MaxAimingRootYawOffset; // 0x3a0
	float RootYawOffset; // 0x3a4
	float SmoothCharacterYaw; // 0x3a8
	float CharacterYawLastTick; // 0x3ac
	float CharacterYawChangeOverFrame; // 0x3b0
	float CharacterDeltaYawSmooth; // 0x3b4
};

struct UTigerChallengeCollection {
	TArray<FTigerChallengeCollectionEntry> Challenges; // 0x30
};

struct UTigerTraversalWallGrindState {
	UTigerTraversalStateWallGrindConfig* WallGrindConfig; // 0x140
};

struct UDistributionVectorUniformCurve {
	FInterpCurveTwoVectors ConstantCurve; // 0x38
	char bLockAxes1 : 1; // 0x50
	char bLockAxes2 : 1; // 0x50
	EDistributionVectorLockFlags LockedAxes[0x2]; // 0x54
	EDistributionVectorMirrorFlags MirrorFlags[0x3]; // 0x56
	char bUseExtremes : 1; // 0x5c
};

struct APaperGroupedSpriteActor {
	UPaperGroupedSpriteComponent* RenderComponent; // 0x228
};

struct URichTextBlockImageDecorator {
	UDataTable* ImageSet; // 0x28
};

struct UExporter {
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

struct ATigerRoofSystemFreeTransformable {
	USceneComponent* Root; // 0x228
	USplineComponent* SplineComponent; // 0x230
	TArray<FTigerRoofSystemFreeTransformableCorner> Corners; // 0x238
};

struct UParticleModuleSizeScaleBySpeed {
	FVector2D SpeedScale; // 0x30
	FVector2D MaxScale; // 0x38
};

struct UTBP_UI_PsoCachingDX12_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a0
	UScaleBox* BackgroundScaleBox; // 0x2a8
	UImage* BackgroundVideoWidget; // 0x2b0
	UImage* Image_547; // 0x2b8
	UProgressBar* ProgressBar; // 0x2c0
	UTBP_UI_MenuButton_C* SkipButton; // 0x2c8
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2d0
	UImage* Vein1; // 0x2d8
	UImage* Vein2; // 0x2e0
	UImage* Vein3; // 0x2e8
};

struct UGeometryCacheComponent {
	UGeometryCache* GeometryCache; // 0x478
	bool bRunning; // 0x480
	bool bLooping; // 0x481
	float StartTimeOffset; // 0x484
	float PlayBackSpeed; // 0x488
	int32_t NumTracks; // 0x48c
	float ElapsedTime; // 0x490
	float Duration; // 0x4c4
	bool bManualTick; // 0x4c8
};

struct ULandscapeMaterialInstanceConstant {
	TArray<FLandscapeMaterialTextureStreamingInfo> TextureStreamingInfo; // 0x368
	char bIsLayerThumbnail : 1; // 0x378
	char bDisableTessellation : 1; // 0x378
	char bMobile : 1; // 0x378
	char bEditorToolUsage : 1; // 0x378
};

struct UAkHololensInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkHololensAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UTBP_UI_ConfirmMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UTBP_UI_InputMenuPrompt_C* ConfirmWidget; // 0x288
	UTBP_UI_InputMenuPrompt_C* DeclineWidget; // 0x290
	UTigerStyledRichTextBlock* InnerCountdownWidget; // 0x298
	UTigerStyledRichTextBlock* InnerTitleWidget; // 0x2a0
	UTBP_UI_FullScreen_PopUp_Base_C* PopUpWidget; // 0x2a8
	FMulticastInlineDelegate Confirm; // 0x2b0
	FMulticastInlineDelegate Decline; // 0x2c0
	FText AcceptText; // 0x2d0
	FText DeclineText; // 0x2e8
	UAkAudioEvent* ConfirmAudioEvent; // 0x300
	UAkAudioEvent* DeclineAudioEvent; // 0x308
	FText QuestionText; // 0x310
	bool bFadeOut; // 0x328
	FMulticastInlineDelegate CountdownFinished; // 0x330
	int32_t CountdownTime; // 0x340
	bool ContinueCountdown; // 0x344
};

struct UTigerDisciplineVanish {
	UTigerVanishConfig* Config; // 0x78
};

struct UAkMacInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct UBodySetup {
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

struct UNiagaraDataInterfaceColorCurve {
	FRichCurve RedCurve; // 0x70
	FRichCurve GreenCurve; // 0xf0
	FRichCurve BlueCurve; // 0x170
	FRichCurve AlphaCurve; // 0x1f0
};

struct ATigerProjectile {
	USphereComponent* CollisionComp; // 0x228
	UProjectileMovementComponent* ProjectileMovement; // 0x230
	UParticleSystemComponent* BulletTrail; // 0x238
	UStaticMeshComponent* ProjectileMesh; // 0x240
	UTigerRangedWeapon* RangedWeaponType; // 0x248
	EHitAudio HitAudioEnum; // 0x258
	bool bDoProjectileCollision; // 0x259
	bool bIsKilled; // 0x25a
	bool bWillBeReflected; // 0x25b
	bool bIsReflected; // 0x25c
	bool bWasHeadShot; // 0x25d
	bool bIsPooled; // 0x25e
	UTigerProjectilePool* HomeProjectilePool; // 0x260
	UNiagaraComponent* TraceNiagaraComponent; // 0x268
	TArray<FTigerRangedHitInfo> PiercedCharacters; // 0x2a0
	TArray<ATigerCharacter*> HitCharacters; // 0x2b0
};

struct ATigerSplatmapCell {
	UTexture2D* TextureResource; // 0x228
	UMaterialInterface* DrawMaterial; // 0x230
	float BoundsSize; // 0x238
};

struct UTigerTraversalLowVaultState {
	UAnimMontage* ActiveLowVaultMontage; // 0x48
};

struct UABP_SKM_VMP_BRU_F_HAIR_14_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xbc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct UParticleModuleTypeDataAnimTrail {
	char bDeadTrailsOnDeactivate : 1; // 0x30
	char bEnablePreviousTangentRecalculation : 1; // 0x30
	char bTangentRecalculationEveryFrame : 1; // 0x30
	float TilingDistance; // 0x34
	float DistanceTessellationStepSize; // 0x38
	float TangentTessellationStepSize; // 0x3c
	float WidthTessellationStepSize; // 0x40
};

struct UTigerNPCBehaviorAsset {
	ATigerBaseNPC* NPCBlueprint; // 0x30
	UTigerMasqueradeActionResponse* MasqueradeActionResponseClass; // 0x38
	UBehaviorTree* DefaultBehaviorTree; // 0x40
	TMap<ETigerAIMasqueradeState, UBehaviorTree*> BehaviorTrees; // 0x48
	TArray<UActorComponent*> AdditionalComponentClasses; // 0x98
	UTigerWeapon* WeaponClass; // 0xa8
	ETigerNPCType NPCType; // 0xb0
	ETigerAIAnimationMode AnimationMode; // 0xb1
	FTigerCharacterStatModification BaseStatModifications; // 0xb4
	FTigerCharacterStatModification BaseGroupStatModifications; // 0x144
	bool bUseGroupStats; // 0x1d4
	float OverrideBaseMaxHealth; // 0x1d8
};

struct UTigerBuildingWallStreamingSettings {
	int32_t WallsToStreamPerFrame; // 0x38
	bool bLoggingEnabled; // 0x3c
};

struct UPrimaryAssetLabel {
	FPrimaryAssetRules Rules; // 0x30
	char bLabelAssetsInMyDirectory : 1; // 0x3c
	char bIsRuntimeLabel : 1; // 0x3c
	TArray<TSoftObjectPtr<UObject>> ExplicitAssets; // 0x40
	TArray<TSoftClassPtr<UObject>> ExplicitBlueprints; // 0x50
	FCollectionReference AssetCollection; // 0x60
};

struct UMaterialExpressionShadingModel {
	EMaterialShadingModel ShadingModel; // 0x40
};

struct UTigerAnimNotify_Recklessness {
	bool bActivate; // 0x38
};

struct UTigerCharacterEmoteCustomization {
	UAnimMontage* EmoteMontage; // 0x110
	bool bStopsMovement; // 0x118
	float ThumbnailPoseTime; // 0x11c
};

struct UTigerMasqueradeActionResponse {
	float MinFearScaleDistance; // 0x28
	float MinFearScaleValue; // 0x2c
	float MinMasqueradeScaleDistance; // 0x30
	float MinMasqueradeScaleValue; // 0x34
	bool bIsDummy; // 0x38
};

struct UDistributionFloatParameterBase {
	FName ParameterName; // 0x40
	float MinInput; // 0x48
	float MaxInput; // 0x4c
	float MinOutput; // 0x50
	float MaxOutput; // 0x54
	DistributionParamMode ParamMode; // 0x58
};

struct UTigerThumbnailCameraComponent {
	FString CameraTag; // 0x1f8
};

struct UABP_Ranged_Weapon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x2f8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_18; // 0x3a8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_17; // 0x500
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x658
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x680
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16; // 0x6a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x800
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x828
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_15; // 0x930
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0xa88
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0xab0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0xbb8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0xbd8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0xbf8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_57; // 0xd00
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_56; // 0xd50
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_55; // 0xda0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_44; // 0xdf0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_43; // 0xe90
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0xf30
	FAnimNode_StateMachine AnimGraphNode_StateMachine_15; // 0xf60
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1010
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_54; // 0x1118
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_53; // 0x1168
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_42; // 0x11b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_52; // 0x1258
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_51; // 0x12a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_41; // 0x12f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_40; // 0x1398
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x1438
	FAnimNode_StateMachine AnimGraphNode_StateMachine_14; // 0x1468
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_39; // 0x1518
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0x15b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x1710
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_50; // 0x1738
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_49; // 0x1788
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_38; // 0x17d8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_48; // 0x1878
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_47; // 0x18c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_37; // 0x1918
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_36; // 0x19b8
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x1a58
	FAnimNode_StateMachine AnimGraphNode_StateMachine_13; // 0x1a88
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x1b38
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x1b80
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x1bc8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x1bf0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x1d48
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0x1d70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x1ec8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x1ef0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x2048
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_46; // 0x2070
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x20c0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_12; // 0x20f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x21a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x22f8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x2320
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_45; // 0x23e0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_44; // 0x2430
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_43; // 0x2480
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_42; // 0x24d0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_41; // 0x2520
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_35; // 0x2570
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_34; // 0x2610
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_33; // 0x26b0
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x2750
	FAnimNode_StateMachine AnimGraphNode_StateMachine_11; // 0x2780
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_40; // 0x2830
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_39; // 0x2880
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32; // 0x28d0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_38; // 0x2970
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_37; // 0x29c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_31; // 0x2a10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_30; // 0x2ab0
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x2b50
	FAnimNode_StateMachine AnimGraphNode_StateMachine_10; // 0x2b80
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_36; // 0x2c30
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_35; // 0x2c80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_29; // 0x2cd0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_34; // 0x2d70
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_33; // 0x2dc0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_28; // 0x2e10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x2eb0
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x2f50
	FAnimNode_StateMachine AnimGraphNode_StateMachine_9; // 0x2f80
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x3030
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x3188
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_32; // 0x31b0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_31; // 0x3200
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x3250
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_30; // 0x32f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x3340
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0x33e0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_29; // 0x3480
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x34d0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_8; // 0x3500
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x35b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x3708
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x3730
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x37d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x3818
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x3840
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x3900
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x3a58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x3aa0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x3ac8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_28; // 0x3af0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_27; // 0x3b40
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x3b90
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_26; // 0x3c30
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_25; // 0x3c80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x3cd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x3d70
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x3e10
	FAnimNode_StateMachine AnimGraphNode_StateMachine_7; // 0x3e40
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x3ef0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x4048
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_24; // 0x4070
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_23; // 0x40c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x4110
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_22; // 0x41b0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_21; // 0x4200
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x4250
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x42f0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x4390
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x43c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x4470
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x45c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_20; // 0x45f0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_19; // 0x4640
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x4690
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_18; // 0x4730
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_17; // 0x4780
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x47d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x4870
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x4910
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x4940
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x49f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x4b48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x4b70
	FAnimNode_Slot AnimGraphNode_Slot; // 0x4c10
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x4c58
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_16; // 0x4c80
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_15; // 0x4cd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x4d20
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_14; // 0x4dc0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_13; // 0x4e10
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x4e60
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x4f00
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x4fa0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x4fd0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x5080
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x51d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x5200
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x5228
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x5330
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x5350
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x5370
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_12; // 0x54c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_11; // 0x5518
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x5568
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_10; // 0x5608
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_9; // 0x5658
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x56a8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x5748
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x57e8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x5818
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x58c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x5a20
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_8; // 0x5a48
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7; // 0x5a98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x5ae8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6; // 0x5b88
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5; // 0x5bd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x5c28
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x5cc8
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x5d68
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x5d98
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0x5e48
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0x5e98
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x5ee8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x5f88
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x5fd8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x6028
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x60c8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x6168
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x6198
	ENUM_RangedWeaponCategories CurrentRangedWeapon; // 0x6248
	bool IsAimingWeapon; // 0x6249
	bool IsHipFiring; // 0x624a
	float FireWeaponBlendInTime; // 0x624c
	bool IsCrouching; // 0x6250
	bool HipOrAimFiring; // 0x6251
	FVector RootJointOffset; // 0x6254
	FVector LeftHandIKOffset; // 0x6260
	float IsPlayingAsFemaleFloat; // 0x626c
	bool IsMovingOnGround; // 0x6270
	TArray<ENUM_RangedWeaponCategories> ShouldOffsetLeftElbow; // 0x6278
	float ShouldUseLeftElbowOffsetAlpha; // 0x6288
	FVector LeftElbowOffset; // 0x628c
	bool WallJumpIsAvailable; // 0x6298
	TMap<ENUM_RangedWeaponCategories, FVector> RootJointOffsetMap; // 0x62a0
	TMap<ENUM_RangedWeaponCategories, FVector> LeftHandOffsetMap; // 0x62f0
	float WeaponScaleAlpha; // 0x6340
	FVector WeaponScaleVector; // 0x6344
	ETigerGender BodyType; // 0x6350
	TMap<ENUM_RangedWeaponCategories, float> WeaponScaleMap; // 0x6358
	bool IsPlayingAsFemaleBool; // 0x63a8
	bool IsSecondaryWeapon; // 0x63a9
	UABP_Player_C* Anim Instance; // 0x63b0
	float AimSweepFloat; // 0x63b8
	ATigerPlayer* Player; // 0x63c0
	bool Is in Reload; // 0x63c8
	FRotator MagazineRotationAmount; // 0x63cc
	bool RotatingMagazine; // 0x63d8
	float Alpha; // 0x63dc
	bool Is Sprinting; // 0x63e0
};

struct UTBP_RangedWeapon_Master_C {
	UTigerCameraPreset* CrouchingAimingCameraPreset; // 0x1e8
	FVector SpreadOfCurrentShot; // 0x1f0
	float Slowed Time; // 0x1fc
	ENUM_RangedWeaponCategories AnimRangedWeaponCategory; // 0x200
};

struct UStaticMesh {
	FPerPlatformInt MinLOD; // 0x80
	float LpvBiasMultiplier; // 0x84
	TArray<FStaticMaterial> StaticMaterials; // 0x88
	float LightmapUVDensity; // 0x98
	int32_t LightMapResolution; // 0x9c
	ELightmapType LightmapType; // 0xa0
	EDetailMode DetailMode; // 0xa1
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
	FPerPlatformFloat ScreenCullSize; // 0xc0
	char bSupportGpuUniformlyDistributedSampling : 1; // 0xc4
	TArray<UStaticMeshSocket*> Sockets; // 0xe8
	FVector PositiveBoundsExtension; // 0x108
	FVector NegativeBoundsExtension; // 0x114
	FBoxSphereBounds ExtendedBounds; // 0x120
	EActorStreamingPriorityTiers StreamingPriority; // 0x13c
	int32_t ElementToIgnoreForTexFactor; // 0x140
	TArray<UAssetUserData*> AssetUserData; // 0x148
	UObject* EditableMesh; // 0x158
	UNavCollisionBase* NavCollision; // 0x160
};

struct UNiagaraDataInterfaceCurve {
	FRichCurve Curve; // 0x70
};

struct UTigerPassiveUnbridledRageLogic {
	UTigerPassiveUnbridledRageConfig* Config; // 0xc0
	ATigerPlayer* Player; // 0xc8
};

struct UEnvQueryTest_Overlap {
	FEnvOverlapData OverlapData; // 0x1f8
};

struct UPartyBeaconState {
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

struct UABP_VMP_VEN_F_HAIR_01_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x760
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xba0
};

struct UIntSerialization {
	uint16_t UnsignedInt16Variable; // 0x28
	uint32_t UnsignedInt32Variable; // 0x2c
	uint64_t UnsignedInt64Variable; // 0x30
	int8_t SignedInt8Variable; // 0x38
	int16_t SignedInt16Variable; // 0x3a
	int64_t SignedInt64Variable; // 0x40
	char UnsignedInt8Variable; // 0x48
	int32_t SignedInt32Variable; // 0x4c
};

struct UTigerGroupStateComponent {
	FMulticastInlineDelegate OnGroupMembersChanged; // 0xb0
	FMulticastInlineDelegate OnPlayerIndexChanged; // 0xc0
	TArray<TWeakObjectPtr<ATigerPlayerState>> OtherGroupMembers; // 0xd0
	FMulticastInlineDelegate OnMarkedAsGroupMember; // 0xf8
	FMulticastInlineDelegate OnRemoveMarkedAsGroupMember; // 0x108
	UTigerCompassMarkerComponent* CompassComponent; // 0x118
	ATigerPlayerController* LocalPlayerController; // 0x120
	UTigerGroupMemberMarkerProxy* GroupMemberMapMarkerProxy; // 0x128
	char GroupMemberId; // 0x130
};

struct UABP_Player_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x500
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_47; // 0x508
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_10; // 0x660
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_36; // 0x698
	FAnimNode_Slot AnimGraphNode_Slot_37; // 0x760
	FAnimNode_Slot AnimGraphNode_Slot_36; // 0x7a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_69; // 0x7f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_46; // 0x8b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_117; // 0xa08
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_45; // 0xa30
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_116; // 0xb88
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_44; // 0xbb0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_115; // 0xd08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_114; // 0xd30
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_68; // 0xd58
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_113; // 0xe18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_88; // 0xe40
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_87; // 0xee0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_67; // 0xf80
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_43; // 0x1040
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_112; // 0x1198
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_111; // 0x11c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_110; // 0x11e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_109; // 0x1210
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_108; // 0x1238
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_107; // 0x1260
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_106; // 0x1288
	FAnimNode_Root AnimGraphNode_Root_11; // 0x12b0
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_8; // 0x12e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_181; // 0x13f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_56; // 0x1500
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_56; // 0x1520
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_180; // 0x1540
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_179; // 0x1648
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_178; // 0x1750
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_177; // 0x1858
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_176; // 0x1960
	FAnimNode_Root AnimGraphNode_Root_10; // 0x1a68
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_7; // 0x1a98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_42; // 0x1bb0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_86; // 0x1d08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_105; // 0x1da8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_104; // 0x1dd0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_41; // 0x1df8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_103; // 0x1f50
	FAnimNode_Slot AnimGraphNode_Slot_35; // 0x1f78
	FAnimNode_Slot AnimGraphNode_Slot_34; // 0x1fc0
	FAnimNode_Slot AnimGraphNode_Slot_33; // 0x2008
	FAnimNode_Root AnimGraphNode_Root_9; // 0x2050
	FAnimNode_Slot AnimGraphNode_Slot_32; // 0x2080
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_6; // 0x20c8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_40; // 0x21e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_102; // 0x2338
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_101; // 0x2360
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_39; // 0x2388
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_85; // 0x24e0
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_3; // 0x2580
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_84; // 0x2710
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_100; // 0x27b0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_34; // 0x27d8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_66; // 0x28a0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_99; // 0x2960
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_65; // 0x2988
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_98; // 0x2a48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_97; // 0x2a70
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_96; // 0x2a98
	FAnimNode_Root AnimGraphNode_Root_8; // 0x2ac0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_35; // 0x2af0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_155; // 0x2bb8
	FAnimNode_PoseBlendNode AnimGraphNode_PoseBlendNode; // 0x2c38
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_5; // 0x2cd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_154; // 0x2df0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_33; // 0x2e70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_153; // 0x2f38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_152; // 0x2fb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_151; // 0x3038
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_150; // 0x30b8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_32; // 0x3138
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_31; // 0x3200
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_30; // 0x32c8
	FAnimNode_Root AnimGraphNode_Root_7; // 0x3390
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_185; // 0x33c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_184; // 0x33e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_183; // 0x3410
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_182; // 0x3438
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_181; // 0x3460
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_180; // 0x3488
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_179; // 0x34b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_178; // 0x34d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_177; // 0x3500
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_176; // 0x3528
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_175; // 0x3550
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_174; // 0x3578
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_173; // 0x35a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_172; // 0x35c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_171; // 0x35f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_170; // 0x3618
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_149; // 0x3640
	FAnimNode_StateResult AnimGraphNode_StateResult_83; // 0x36c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_148; // 0x36f0
	FAnimNode_StateResult AnimGraphNode_StateResult_82; // 0x3770
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_147; // 0x37a0
	FAnimNode_StateResult AnimGraphNode_StateResult_81; // 0x3820
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_100; // 0x3850
	FAnimNode_StateResult AnimGraphNode_StateResult_80; // 0x3938
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_146; // 0x3968
	FAnimNode_StateResult AnimGraphNode_StateResult_79; // 0x39e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_145; // 0x3a18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_83; // 0x3a98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_144; // 0x3b38
	FAnimNode_StateResult AnimGraphNode_StateResult_78; // 0x3bb8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_55; // 0x3be8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_55; // 0x3c08
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_175; // 0x3c28
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_99; // 0x3d30
	FAnimNode_StateResult AnimGraphNode_StateResult_77; // 0x3e18
	FAnimNode_StateMachine AnimGraphNode_StateMachine_20; // 0x3e48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_143; // 0x3ef8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_82; // 0x3f78
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_43; // 0x4018
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_64; // 0x40b8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_38; // 0x4178
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_95; // 0x42d0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_94; // 0x42f8
	FAnimNode_Slot AnimGraphNode_Slot_31; // 0x4320
	FAnimNode_Root AnimGraphNode_Root_6; // 0x4368
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_4; // 0x4398
	FAnimNode_Slot AnimGraphNode_Slot_30; // 0x44b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_63; // 0x44f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_93; // 0x45b8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_81; // 0x45e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_37; // 0x4680
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_92; // 0x47d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_91; // 0x4800
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_29; // 0x4828
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_36; // 0x48f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_90; // 0x4a48
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_89; // 0x4a70
	FAnimNode_Root AnimGraphNode_Root_5; // 0x4a98
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_3; // 0x4ac8
	FAnimNode_Slot AnimGraphNode_Slot_29; // 0x4be0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_62; // 0x4c28
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_35; // 0x4ce8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_88; // 0x4e40
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_34; // 0x4e68
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_87; // 0x4fc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_86; // 0x4fe8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_85; // 0x5010
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_80; // 0x5038
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_61; // 0x50d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_84; // 0x5198
	FAnimNode_Root AnimGraphNode_Root_4; // 0x51c0
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose_2; // 0x51f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_33; // 0x5308
	FAnimNode_Slot AnimGraphNode_Slot_28; // 0x5460
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_60; // 0x54a8
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace_2; // 0x5568
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_59; // 0x56f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_79; // 0x57b8
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_14; // 0x5858
	FAnimNode_RotationOffsetBlendSpace AnimGraphNode_RotationOffsetBlendSpace; // 0x5908
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_78; // 0x5a98
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_32; // 0x5b38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_83; // 0x5c90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_82; // 0x5cb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_81; // 0x5ce0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_80; // 0x5d08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_169; // 0x5d30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_168; // 0x5d58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_167; // 0x5d80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_166; // 0x5da8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_165; // 0x5dd0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_142; // 0x5df8
	FAnimNode_StateResult AnimGraphNode_StateResult_76; // 0x5e78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_141; // 0x5ea8
	FAnimNode_StateResult AnimGraphNode_StateResult_75; // 0x5f28
	FAnimNode_StateResult AnimGraphNode_StateResult_74; // 0x5f58
	FAnimNode_StateMachine AnimGraphNode_StateMachine_19; // 0x5f88
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_14; // 0x6038
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_58; // 0x6108
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_79; // 0x61c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_57; // 0x61f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_78; // 0x62b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_56; // 0x62d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_77; // 0x6398
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_77; // 0x63c0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_55; // 0x6460
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_76; // 0x6520
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_76; // 0x6548
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_75; // 0x65e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_74; // 0x6610
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_73; // 0x6638
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_72; // 0x6660
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_71; // 0x6688
	FAnimNode_Root AnimGraphNode_Root_3; // 0x66b0
	FAnimNode_LinkedInputPose AnimGraphNode_LinkedInputPose; // 0x66e0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_31; // 0x67f8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_70; // 0x6950
	FAnimNode_Slot AnimGraphNode_Slot_27; // 0x6978
	FAnimNode_Slot AnimGraphNode_Slot_26; // 0x69c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_30; // 0x6a08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_75; // 0x6b60
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_54; // 0x6c00
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_29; // 0x6cc0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_28; // 0x6e18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_74; // 0x6f70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_73; // 0x7010
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_69; // 0x70b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_68; // 0x70d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_67; // 0x7100
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_66; // 0x7128
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_53; // 0x7150
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_72; // 0x7210
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_52; // 0x72b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_71; // 0x7370
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_13; // 0x7410
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_12; // 0x74e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_164; // 0x75b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_163; // 0x75d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_162; // 0x7600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_140; // 0x7628
	FAnimNode_StateResult AnimGraphNode_StateResult_73; // 0x76a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_139; // 0x76d8
	FAnimNode_StateResult AnimGraphNode_StateResult_72; // 0x7758
	FAnimNode_StateResult AnimGraphNode_StateResult_71; // 0x7788
	FAnimNode_StateMachine AnimGraphNode_StateMachine_18; // 0x77b8
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_11; // 0x7868
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_27; // 0x7938
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_65; // 0x7a90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_64; // 0x7ab8
	FAnimNode_Slot AnimGraphNode_Slot_25; // 0x7ae0
	FAnimNode_Slot AnimGraphNode_Slot_24; // 0x7b28
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_34; // 0x7b70
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_138; // 0x7c38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_137; // 0x7cb8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_63; // 0x7d38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_62; // 0x7d60
	FAnimNode_Slot AnimGraphNode_Slot_23; // 0x7d88
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_51; // 0x7dd0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_26; // 0x7e90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_61; // 0x7fe8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_70; // 0x8010
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_60; // 0x80b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_59; // 0x80d8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_58; // 0x8100
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_57; // 0x8128
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_28; // 0x8150
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_25; // 0x8218
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_56; // 0x8370
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_55; // 0x8398
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_54; // 0x83c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_53; // 0x83e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_24; // 0x8410
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_52; // 0x8568
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_51; // 0x8590
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_50; // 0x85b8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_9; // 0x8678
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_9; // 0x86c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_8; // 0x8700
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_10; // 0x8750
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_69; // 0x8820
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_7; // 0x88c0
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_8; // 0x8910
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_6; // 0x8948
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_50; // 0x8998
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_23; // 0x89c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_49; // 0x8b18
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_68; // 0x8b40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_48; // 0x8be0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_47; // 0x8c08
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_46; // 0x8c30
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_49; // 0x8c58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_67; // 0x8d18
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_48; // 0x8db8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_27; // 0x8e78
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_22; // 0x8f40
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_45; // 0x9098
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_44; // 0x90c0
	FAnimNode_Slot AnimGraphNode_Slot_22; // 0x90e8
	FAnimNode_Slot AnimGraphNode_Slot_21; // 0x9130
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_136; // 0x9178
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_135; // 0x91f8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_54; // 0x9278
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_54; // 0x9298
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_174; // 0x92b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_173; // 0x93c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_172; // 0x94c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_171; // 0x95d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_170; // 0x96d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_169; // 0x97e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_66; // 0x98e8
	FAnimNode_StateResult AnimGraphNode_StateResult_70; // 0x9988
	FAnimNode_StateMachine AnimGraphNode_StateMachine_17; // 0x99b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_43; // 0x9a68
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_21; // 0x9a90
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_98; // 0x9be8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_97; // 0x9cd0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_65; // 0x9db8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_96; // 0x9e58
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_95; // 0x9f40
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_64; // 0xa028
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_63; // 0xa0c8
	FAnimNode_StateResult AnimGraphNode_StateResult_69; // 0xa168
	FAnimNode_StateMachine AnimGraphNode_StateMachine_16; // 0xa198
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_9; // 0xa248
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_62; // 0xa318
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_134; // 0xa3b8
	FAnimNode_Root AnimGraphNode_Root_2; // 0xa438
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_53; // 0xa468
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_168; // 0xa488
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_167; // 0xa590
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_166; // 0xa698
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_53; // 0xa7a0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_18; // 0xa7c0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_17; // 0xa9a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_165; // 0xab80
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_164; // 0xac88
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_20; // 0xad90
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_61; // 0xaee8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_42; // 0xaf88
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_41; // 0xafb0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_161; // 0xafd8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_160; // 0xb000
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_159; // 0xb028
	FAnimNode_StateResult AnimGraphNode_StateResult_68; // 0xb050
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_94; // 0xb080
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_60; // 0xb168
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_93; // 0xb208
	FAnimNode_StateResult AnimGraphNode_StateResult_67; // 0xb2f0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_92; // 0xb320
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_91; // 0xb408
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_59; // 0xb4f0
	FAnimNode_StateResult AnimGraphNode_StateResult_66; // 0xb590
	FAnimNode_StateMachine AnimGraphNode_StateMachine_15; // 0xb5c0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_19; // 0xb670
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_40; // 0xb7c8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_39; // 0xb7f0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_18; // 0xb818
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_58; // 0xb970
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0xba10
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_8; // 0xbaa0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_158; // 0xbb50
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_157; // 0xbb78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_156; // 0xbba0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_155; // 0xbbc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_154; // 0xbbf0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_153; // 0xbc18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_152; // 0xbc40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_151; // 0xbc68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_150; // 0xbc90
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_149; // 0xbcb8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_148; // 0xbce0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_147; // 0xbd08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_146; // 0xbd30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_145; // 0xbd58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_144; // 0xbd80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_143; // 0xbda8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_142; // 0xbdd0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_141; // 0xbdf8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_140; // 0xbe20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_139; // 0xbe48
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_138; // 0xbe70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_137; // 0xbe98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_136; // 0xbec0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_135; // 0xbee8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_134; // 0xbf10
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_133; // 0xbf38
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_132; // 0xbf60
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_131; // 0xbf88
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_130; // 0xbfb0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_129; // 0xbfd8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_128; // 0xc000
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_127; // 0xc028
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_126; // 0xc050
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_125; // 0xc078
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_124; // 0xc0a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_123; // 0xc0c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_122; // 0xc0f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_121; // 0xc118
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_120; // 0xc140
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_119; // 0xc168
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_42; // 0xc190
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_163; // 0xc230
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_162; // 0xc338
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_161; // 0xc440
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_160; // 0xc548
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_159; // 0xc650
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_52; // 0xc758
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_52; // 0xc778
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_158; // 0xc798
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_118; // 0xc8a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_117; // 0xc8c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_116; // 0xc8f0
	FAnimNode_StateResult AnimGraphNode_StateResult_65; // 0xc918
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_133; // 0xc948
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_41; // 0xc9c8
	FAnimNode_StateResult AnimGraphNode_StateResult_64; // 0xca68
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_57; // 0xca98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_132; // 0xcb38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_131; // 0xcbb8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_56; // 0xcc38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_130; // 0xccd8
	FAnimNode_StateResult AnimGraphNode_StateResult_63; // 0xcd58
	FAnimNode_StateMachine AnimGraphNode_StateMachine_14; // 0xcd88
	FAnimNode_StateResult AnimGraphNode_StateResult_62; // 0xce38
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_129; // 0xce68
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_47; // 0xcee8
	FAnimNode_Slot AnimGraphNode_Slot_20; // 0xcfa8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_128; // 0xcff0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_26; // 0xd070
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_127; // 0xd138
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_55; // 0xd1b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_90; // 0xd258
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_89; // 0xd340
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_40; // 0xd428
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_46; // 0xd4c8
	FAnimNode_StateResult AnimGraphNode_StateResult_61; // 0xd588
	FAnimNode_StateMachine AnimGraphNode_StateMachine_13; // 0xd5b8
	FAnimNode_StateResult AnimGraphNode_StateResult_60; // 0xd668
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_115; // 0xd698
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_114; // 0xd6c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_113; // 0xd6e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_112; // 0xd710
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_111; // 0xd738
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_110; // 0xd760
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_109; // 0xd788
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_108; // 0xd7b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_107; // 0xd7d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_106; // 0xd800
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_105; // 0xd828
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_104; // 0xd850
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_103; // 0xd878
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_102; // 0xd8a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_101; // 0xd8c8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_100; // 0xd8f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_99; // 0xd918
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_98; // 0xd940
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_97; // 0xd968
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_96; // 0xd990
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_95; // 0xd9b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_94; // 0xd9e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_93; // 0xda08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_92; // 0xda30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_91; // 0xda58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_90; // 0xda80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_89; // 0xdaa8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_88; // 0xdad0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_87; // 0xdaf8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_86; // 0xdb20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_85; // 0xdb48
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_88; // 0xdb70
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_39; // 0xdc58
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_5; // 0xdcf8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_33; // 0xdd48
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_7; // 0xde10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_126; // 0xde48
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_157; // 0xdec8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_51; // 0xdfd0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_51; // 0xdff0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_156; // 0xe010
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_155; // 0xe118
	FAnimNode_StateResult AnimGraphNode_StateResult_59; // 0xe220
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_87; // 0xe250
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_38; // 0xe338
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_4; // 0xe3d8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_32; // 0xe428
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_6; // 0xe4f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_125; // 0xe528
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_154; // 0xe5a8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_50; // 0xe6b0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_50; // 0xe6d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_153; // 0xe6f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_152; // 0xe7f8
	FAnimNode_StateResult AnimGraphNode_StateResult_58; // 0xe900
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_86; // 0xe930
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_37; // 0xea18
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_3; // 0xeab8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_31; // 0xeb08
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_5; // 0xebd0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_151; // 0xec08
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_49; // 0xed10
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_49; // 0xed30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_150; // 0xed50
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_149; // 0xee58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_124; // 0xef60
	FAnimNode_StateResult AnimGraphNode_StateResult_57; // 0xefe0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_148; // 0xf010
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_147; // 0xf118
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_146; // 0xf220
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_145; // 0xf328
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_144; // 0xf430
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_143; // 0xf538
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_142; // 0xf640
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_16; // 0xf750
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_48; // 0xf930
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_48; // 0xf950
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_15; // 0xf970
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_123; // 0xfb50
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_36; // 0xfbd0
	FAnimNode_StateResult AnimGraphNode_StateResult_56; // 0xfc70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_141; // 0xfca0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_140; // 0xfda8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_139; // 0xfeb0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_138; // 0xffb8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_137; // 0x100c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_136; // 0x101c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_135; // 0x102d0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_14; // 0x103e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_47; // 0x105c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_47; // 0x105e0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_13; // 0x10600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_122; // 0x107e0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_35; // 0x10860
	FAnimNode_StateResult AnimGraphNode_StateResult_55; // 0x10900
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_134; // 0x10930
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_133; // 0x10a38
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_132; // 0x10b40
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_131; // 0x10c48
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_46; // 0x10d50
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_130; // 0x10d70
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_46; // 0x10e78
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_12; // 0x10ea0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_121; // 0x11080
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_34; // 0x11100
	FAnimNode_StateResult AnimGraphNode_StateResult_54; // 0x111a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_129; // 0x111d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_128; // 0x112d8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_45; // 0x113e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_127; // 0x11400
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_126; // 0x11508
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_125; // 0x11610
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_11; // 0x11720
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_45; // 0x11900
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_120; // 0x11920
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_33; // 0x119a0
	FAnimNode_StateResult AnimGraphNode_StateResult_53; // 0x11a40
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_124; // 0x11a70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_123; // 0x11b78
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_122; // 0x11c80
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_121; // 0x11d88
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_44; // 0x11e90
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_120; // 0x11eb0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_10; // 0x11fc0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_44; // 0x121a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_119; // 0x121c0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_32; // 0x12240
	FAnimNode_StateResult AnimGraphNode_StateResult_52; // 0x122e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_119; // 0x12310
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_118; // 0x12418
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_117; // 0x12520
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_116; // 0x12628
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_43; // 0x12730
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_115; // 0x12750
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_43; // 0x12858
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_9; // 0x12880
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_118; // 0x12a60
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_31; // 0x12ae0
	FAnimNode_StateResult AnimGraphNode_StateResult_51; // 0x12b80
	FAnimNode_StateResult AnimGraphNode_StateResult_50; // 0x12bb0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_84; // 0x12be0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_83; // 0x12c08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_82; // 0x12c30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_114; // 0x12c58
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_113; // 0x12d60
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_42; // 0x12e68
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_112; // 0x12e88
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_111; // 0x12f90
	FAnimNode_Slot AnimGraphNode_Slot_19; // 0x13098
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_110; // 0x130e0
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_13; // 0x131e8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_42; // 0x13298
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_54; // 0x132b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_117; // 0x13358
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_53; // 0x133d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_116; // 0x13478
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_52; // 0x134f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_115; // 0x13598
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_30; // 0x13618
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_114; // 0x136e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_85; // 0x13760
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_84; // 0x13848
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_83; // 0x13930
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_29; // 0x13a18
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_30; // 0x13ae0
	FAnimNode_StateResult AnimGraphNode_StateResult_49; // 0x13b80
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_12; // 0x13bb0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_109; // 0x13c60
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_108; // 0x13d68
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_41; // 0x13e70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_107; // 0x13e90
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_106; // 0x13f98
	FAnimNode_Slot AnimGraphNode_Slot_18; // 0x140a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_105; // 0x140e8
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_8; // 0x141f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_41; // 0x143d0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_51; // 0x143f0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_113; // 0x14490
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_50; // 0x14510
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_112; // 0x145b0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_49; // 0x14630
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_111; // 0x146d0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_28; // 0x14750
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_110; // 0x14818
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_82; // 0x14898
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_81; // 0x14980
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_80; // 0x14a68
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_27; // 0x14b50
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_29; // 0x14c18
	FAnimNode_StateResult AnimGraphNode_StateResult_48; // 0x14cb8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_12; // 0x14ce8
	FAnimNode_StateResult AnimGraphNode_StateResult_47; // 0x14d98
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_81; // 0x14dc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_80; // 0x14df0
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_11; // 0x14e18
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_40; // 0x14ec8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_104; // 0x14ee8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_103; // 0x14ff0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_102; // 0x150f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_101; // 0x15200
	FAnimNode_Slot AnimGraphNode_Slot_17; // 0x15308
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_100; // 0x15350
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_40; // 0x15458
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_7; // 0x15480
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_48; // 0x15660
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_109; // 0x15700
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_108; // 0x15780
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_47; // 0x15800
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_26; // 0x158a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_46; // 0x15968
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_25; // 0x15a08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_79; // 0x15ad0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_107; // 0x15bb8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_106; // 0x15c38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_78; // 0x15cb8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_77; // 0x15da0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_28; // 0x15e88
	FAnimNode_StateResult AnimGraphNode_StateResult_46; // 0x15f28
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_10; // 0x15f58
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_39; // 0x16008
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_99; // 0x16028
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_98; // 0x16130
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_97; // 0x16238
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_96; // 0x16340
	FAnimNode_Slot AnimGraphNode_Slot_16; // 0x16448
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_95; // 0x16490
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_39; // 0x16598
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_6; // 0x165c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_45; // 0x167a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_105; // 0x16840
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_104; // 0x168c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_44; // 0x16940
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_24; // 0x169e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_43; // 0x16aa8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_23; // 0x16b48
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_76; // 0x16c10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_103; // 0x16cf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_102; // 0x16d78
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_75; // 0x16df8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_74; // 0x16ee0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_27; // 0x16fc8
	FAnimNode_StateResult AnimGraphNode_StateResult_45; // 0x17068
	FAnimNode_StateMachine AnimGraphNode_StateMachine_11; // 0x17098
	FAnimNode_StateResult AnimGraphNode_StateResult_44; // 0x17148
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_79; // 0x17178
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_78; // 0x171a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_77; // 0x171c8
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator_2; // 0x171f0
	FAnimNode_SequenceEvaluator AnimGraphNode_SequenceEvaluator; // 0x17240
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_22; // 0x17290
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_4; // 0x17358
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_94; // 0x17390
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_38; // 0x17498
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_38; // 0x174b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_93; // 0x174d8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_92; // 0x175e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_101; // 0x176e8
	FAnimNode_StateResult AnimGraphNode_StateResult_43; // 0x17768
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_91; // 0x17798
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_90; // 0x178a0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_37; // 0x179a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_89; // 0x179c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_88; // 0x17ad0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_87; // 0x17bd8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_86; // 0x17ce0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_85; // 0x17de8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_100; // 0x17ef0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_42; // 0x17f70
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_41; // 0x18010
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_99; // 0x180b0
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_9; // 0x18130
	FAnimNode_Slot AnimGraphNode_Slot_15; // 0x181e0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_37; // 0x18228
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_5; // 0x18250
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_40; // 0x18430
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_21; // 0x184d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_98; // 0x18598
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_97; // 0x18618
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_73; // 0x18698
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_72; // 0x18780
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_71; // 0x18868
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_20; // 0x18950
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_26; // 0x18a18
	FAnimNode_StateResult AnimGraphNode_StateResult_42; // 0x18ab8
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_8; // 0x18ae8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_84; // 0x18b98
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_83; // 0x18ca0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_36; // 0x18da8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_82; // 0x18dc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_81; // 0x18ed0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_80; // 0x18fd8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_79; // 0x190e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_78; // 0x191e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_96; // 0x192f0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_39; // 0x19370
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_38; // 0x19410
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_95; // 0x194b0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_4; // 0x19530
	FAnimNode_Slot AnimGraphNode_Slot_14; // 0x19710
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_36; // 0x19758
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_3; // 0x19780
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_37; // 0x19960
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_19; // 0x19a00
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_94; // 0x19ac8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_93; // 0x19b48
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_70; // 0x19bc8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_69; // 0x19cb0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_68; // 0x19d98
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_18; // 0x19e80
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_25; // 0x19f48
	FAnimNode_StateResult AnimGraphNode_StateResult_41; // 0x19fe8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_10; // 0x1a018
	FAnimNode_StateResult AnimGraphNode_StateResult_40; // 0x1a0c8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_9; // 0x1a0f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_92; // 0x1a1a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_45; // 0x1a228
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_77; // 0x1a2e8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_76; // 0x1a3f0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_35; // 0x1a4f8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_35; // 0x1a518
	FAnimNode_StateResult AnimGraphNode_StateResult_39; // 0x1a538
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_24; // 0x1a568
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_75; // 0x1a608
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_74; // 0x1a710
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_73; // 0x1a818
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_72; // 0x1a920
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_71; // 0x1aa28
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_34; // 0x1ab30
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_34; // 0x1ab50
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_70; // 0x1ab70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_76; // 0x1ac78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_75; // 0x1aca0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_74; // 0x1acc8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_73; // 0x1acf0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_72; // 0x1ad18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_91; // 0x1ad40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_90; // 0x1adc0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_89; // 0x1ae40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_88; // 0x1aec0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_33; // 0x1af40
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_33; // 0x1af60
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_69; // 0x1af80
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_23; // 0x1b088
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum_2; // 0x1b128
	FAnimNode_StateResult AnimGraphNode_StateResult_38; // 0x1b1d8
	FAnimNode_StateResult AnimGraphNode_StateResult_37; // 0x1b208
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_67; // 0x1b238
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_44; // 0x1b320
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_25; // 0x1b3e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_66; // 0x1b4a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_65; // 0x1b590
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_43; // 0x1b678
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_64; // 0x1b738
	FAnimNode_StateResult AnimGraphNode_StateResult_36; // 0x1b820
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_71; // 0x1b850
	FAnimNode_StateMachine AnimGraphNode_StateMachine_8; // 0x1b878
	FAnimNode_StateResult AnimGraphNode_StateResult_35; // 0x1b928
	FAnimNode_Slot AnimGraphNode_Slot_13; // 0x1b958
	FAnimNode_Slot AnimGraphNode_Slot_12; // 0x1b9a0
	FAnimNode_Slot AnimGraphNode_Slot_11; // 0x1b9e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_70; // 0x1ba30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_68; // 0x1ba58
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_32; // 0x1bb60
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_32; // 0x1bb80
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_67; // 0x1bba0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_22; // 0x1bca8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_87; // 0x1bd48
	FAnimNode_StateResult AnimGraphNode_StateResult_34; // 0x1bdc8
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_7; // 0x1bdf8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_86; // 0x1bea8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_66; // 0x1bf28
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_31; // 0x1c030
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_31; // 0x1c050
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_65; // 0x1c070
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_3; // 0x1c178
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_42; // 0x1c268
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator_2; // 0x1c328
	FAnimNode_BlendSpaceEvaluator AnimGraphNode_BlendSpaceEvaluator; // 0x1c418
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_17; // 0x1c508
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_85; // 0x1c5d0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_16; // 0x1c650
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_21; // 0x1c718
	FAnimNode_StateResult AnimGraphNode_StateResult_33; // 0x1c7b8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_7; // 0x1c7e8
	FAnimNode_StateResult AnimGraphNode_StateResult_32; // 0x1c898
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_36; // 0x1c8c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_84; // 0x1c968
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_63; // 0x1c9e8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_62; // 0x1cad0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_61; // 0x1cbb8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_60; // 0x1cca0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_83; // 0x1cd88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_35; // 0x1ce08
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_34; // 0x1cea8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_33; // 0x1cf48
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_32; // 0x1cfe8
	FAnimNode_StateResult AnimGraphNode_StateResult_31; // 0x1d088
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_82; // 0x1d0b8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_41; // 0x1d138
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_81; // 0x1d1f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_80; // 0x1d278
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_59; // 0x1d2f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_58; // 0x1d3e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_30; // 0x1d4c8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_30; // 0x1d4e8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_64; // 0x1d508
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_20; // 0x1d610
	FAnimNode_BlendListByEnum AnimGraphNode_BlendListByEnum; // 0x1d6b0
	FAnimNode_StateResult AnimGraphNode_StateResult_30; // 0x1d760
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_69; // 0x1d790
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_68; // 0x1d7b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_79; // 0x1d7e0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_40; // 0x1d860
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_78; // 0x1d920
	FAnimNode_StateResult AnimGraphNode_StateResult_29; // 0x1d9a0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_67; // 0x1d9d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_66; // 0x1d9f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_65; // 0x1da20
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_64; // 0x1da48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_77; // 0x1da70
	FAnimNode_StateResult AnimGraphNode_StateResult_28; // 0x1daf0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_76; // 0x1db20
	FAnimNode_StateResult AnimGraphNode_StateResult_27; // 0x1dba0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_75; // 0x1dbd0
	FAnimNode_StateResult AnimGraphNode_StateResult_26; // 0x1dc50
	FAnimNode_StateMachine AnimGraphNode_StateMachine_6; // 0x1dc80
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_39; // 0x1dd30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_63; // 0x1ddf0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_62; // 0x1de18
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_61; // 0x1de40
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_60; // 0x1de68
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_59; // 0x1de90
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_58; // 0x1deb8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_57; // 0x1dee0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_56; // 0x1df08
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_55; // 0x1df30
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_54; // 0x1df58
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_53; // 0x1df80
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_52; // 0x1dfa8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_51; // 0x1dfd0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_50; // 0x1dff8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_49; // 0x1e020
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_48; // 0x1e048
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_47; // 0x1e070
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_46; // 0x1e098
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_45; // 0x1e0c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_44; // 0x1e0e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_43; // 0x1e110
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_42; // 0x1e138
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_41; // 0x1e160
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_40; // 0x1e188
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_39; // 0x1e1b0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_38; // 0x1e1d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_37; // 0x1e200
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_36; // 0x1e228
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_35; // 0x1e250
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_34; // 0x1e278
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_31; // 0x1e2a0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_57; // 0x1e340
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_74; // 0x1e428
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_38; // 0x1e4a8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_37; // 0x1e568
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_73; // 0x1e628
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_24; // 0x1e6a8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_23; // 0x1e770
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_72; // 0x1e838
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_71; // 0x1e8b8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_70; // 0x1e938
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_19; // 0x1e9b8
	FAnimNode_StateResult AnimGraphNode_StateResult_25; // 0x1ea58
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_36; // 0x1ea88
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_15; // 0x1eb48
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_14; // 0x1ec10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_69; // 0x1ecd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_68; // 0x1ed58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_67; // 0x1edd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_66; // 0x1ee58
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_3; // 0x1eed8
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive_2; // 0x1ef10
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_22; // 0x1ef48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_65; // 0x1f010
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_64; // 0x1f090
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_21; // 0x1f110
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_63; // 0x1f1d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_62; // 0x1f258
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_20; // 0x1f2d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_61; // 0x1f3a0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_35; // 0x1f420
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_60; // 0x1f4e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_59; // 0x1f560
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_58; // 0x1f5e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_29; // 0x1f660
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_29; // 0x1f680
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_63; // 0x1f6a0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_18; // 0x1f7a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_62; // 0x1f848
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_28; // 0x1f950
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_28; // 0x1f970
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_61; // 0x1f990
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_17; // 0x1fa98
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_13; // 0x1fb38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_56; // 0x1fc00
	FAnimNode_StateResult AnimGraphNode_StateResult_24; // 0x1fce8
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_6; // 0x1fd18
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_27; // 0x1fdc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_60; // 0x1fde8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_27; // 0x1fef0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_34; // 0x1ff10
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_26; // 0x1ffd0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_26; // 0x1fff0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_59; // 0x20010
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_25; // 0x20118
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_25; // 0x20138
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_58; // 0x20158
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_12; // 0x20260
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_55; // 0x20328
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_57; // 0x20410
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_56; // 0x20490
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_33; // 0x20510
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_55; // 0x205d0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_32; // 0x20650
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_54; // 0x20710
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_8; // 0x20790
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_31; // 0x20860
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_30; // 0x20920
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_7; // 0x209c0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_16; // 0x20a90
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_15; // 0x20b30
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_19; // 0x20bd0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_53; // 0x20c98
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_52; // 0x20d18
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_54; // 0x20d98
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_18; // 0x20e80
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_51; // 0x20f48
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_50; // 0x20fc8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_53; // 0x21048
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_11; // 0x21130
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_52; // 0x211f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_57; // 0x212e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_24; // 0x213e8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_24; // 0x21408
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_56; // 0x21428
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_55; // 0x21530
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_23; // 0x21638
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_23; // 0x21658
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_54; // 0x21678
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_53; // 0x21780
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_22; // 0x21888
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_22; // 0x218a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_52; // 0x218c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_51; // 0x219d0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_21; // 0x21ad8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_21; // 0x21af8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_50; // 0x21b18
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_17; // 0x21c20
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_16; // 0x21ce8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_51; // 0x21db0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_50; // 0x21e98
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_49; // 0x21f80
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_48; // 0x22068
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_49; // 0x22150
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_47; // 0x221d0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_6; // 0x222b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_46; // 0x22388
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_14; // 0x22470
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_29; // 0x22510
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_30; // 0x225b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_29; // 0x22670
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_48; // 0x22730
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_13; // 0x227b0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_5; // 0x22850
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_45; // 0x22920
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_44; // 0x22a08
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_49; // 0x22af0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_20; // 0x22bf8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_20; // 0x22c18
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_48; // 0x22c38
	FAnimNode_StateResult AnimGraphNode_StateResult_23; // 0x22d40
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_5; // 0x22d70
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_19; // 0x22e20
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_19; // 0x22e40
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_47; // 0x22e60
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_18; // 0x22f68
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_18; // 0x22f88
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_46; // 0x22fa8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_17; // 0x230b0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_17; // 0x230d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_45; // 0x230f0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_10; // 0x231f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_43; // 0x232c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_47; // 0x233a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_46; // 0x23428
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_28; // 0x234a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_45; // 0x23568
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_27; // 0x235e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_44; // 0x236a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_44; // 0x23728
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_16; // 0x23830
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_16; // 0x23850
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_43; // 0x23870
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_42; // 0x23978
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_15; // 0x23a80
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_15; // 0x23aa0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_41; // 0x23ac0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_40; // 0x23bc8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_14; // 0x23cd0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_14; // 0x23cf0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_39; // 0x23d10
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_38; // 0x23e18
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_13; // 0x23f20
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_13; // 0x23f40
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_37; // 0x23f60
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_15; // 0x24068
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_14; // 0x24130
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_42; // 0x241f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_41; // 0x242e0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_40; // 0x243c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_39; // 0x244b0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_12; // 0x24598
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_11; // 0x24638
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_13; // 0x246d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_43; // 0x247a0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_42; // 0x24820
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_38; // 0x248a0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_4; // 0x24988
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_26; // 0x24a58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_28; // 0x24b18
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_25; // 0x24bb8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_12; // 0x24c78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_41; // 0x24d40
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_40; // 0x24dc0
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_3; // 0x24e40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_37; // 0x24f10
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_9; // 0x24ff8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_36; // 0x250c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_39; // 0x251a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_35; // 0x25228
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive_2; // 0x25310
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_34; // 0x253e0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_10; // 0x254c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_27; // 0x25568
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_24; // 0x25608
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_23; // 0x256c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_38; // 0x25788
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_9; // 0x25808
	FAnimNode_ApplyMeshSpaceAdditive AnimGraphNode_ApplyMeshSpaceAdditive; // 0x258a8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_33; // 0x25978
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_32; // 0x25a60
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_36; // 0x25b48
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_12; // 0x25c50
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_12; // 0x25c70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_35; // 0x25c90
	FAnimNode_StateResult AnimGraphNode_StateResult_22; // 0x25d98
	FAnimNode_StateMachine AnimGraphNode_StateMachine_5; // 0x25dc8
	FAnimNode_StateResult AnimGraphNode_StateResult_21; // 0x25e78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_33; // 0x25ea8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_32; // 0x25ed0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_11; // 0x25ef8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_37; // 0x25fc0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_10; // 0x26040
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_36; // 0x26108
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_22; // 0x26188
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_35; // 0x26248
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_34; // 0x262c8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_21; // 0x26348
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_31; // 0x26408
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_30; // 0x26430
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_29; // 0x26458
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_28; // 0x26480
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_27; // 0x264a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_26; // 0x264d0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_25; // 0x264f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_24; // 0x26520
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_23; // 0x26548
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_22; // 0x26570
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_21; // 0x26598
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_20; // 0x265c0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_19; // 0x265e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_18; // 0x26610
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_17; // 0x26638
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_16; // 0x26660
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_15; // 0x26688
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_8; // 0x266b0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_31; // 0x26778
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_30; // 0x26860
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_26; // 0x26948
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_11; // 0x269e8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_11; // 0x26a08
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_34; // 0x26a28
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_33; // 0x26b30
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_32; // 0x26c38
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_8; // 0x26d40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_29; // 0x26de0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_28; // 0x26ec8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_25; // 0x26fb0
	FAnimNode_StateResult AnimGraphNode_StateResult_20; // 0x27050
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_33; // 0x27080
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_20; // 0x27100
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_27; // 0x271c0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_24; // 0x272a8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_9; // 0x27348
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_8; // 0x27410
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_32; // 0x274d8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_31; // 0x27558
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_30; // 0x275d8
	FAnimNode_StateResult AnimGraphNode_StateResult_19; // 0x27658
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_29; // 0x27688
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_19; // 0x27708
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_26; // 0x277c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_23; // 0x278b0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_7; // 0x27950
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_28; // 0x27a18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_27; // 0x27a98
	FAnimNode_StateResult AnimGraphNode_StateResult_18; // 0x27b18
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_26; // 0x27b48
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_18; // 0x27bc8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_25; // 0x27c88
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_22; // 0x27d70
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_6; // 0x27e10
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_25; // 0x27ed8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_24; // 0x27f58
	FAnimNode_StateResult AnimGraphNode_StateResult_17; // 0x27fd8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_23; // 0x28008
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_17; // 0x28088
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_24; // 0x28148
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_21; // 0x28230
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_5; // 0x282d0
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_4; // 0x28398
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_22; // 0x28460
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_21; // 0x284e0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_20; // 0x28560
	FAnimNode_StateResult AnimGraphNode_StateResult_16; // 0x285e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x28610
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_7; // 0x28638
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_23; // 0x28700
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_10; // 0x287e8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_10; // 0x28808
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_31; // 0x28828
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_30; // 0x28930
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_29; // 0x28a38
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_7; // 0x28b40
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_22; // 0x28be0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_21; // 0x28cc8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_20; // 0x28db0
	FAnimNode_StateResult AnimGraphNode_StateResult_15; // 0x28e50
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_6; // 0x28e80
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_20; // 0x28f48
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_9; // 0x29030
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_9; // 0x29050
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_28; // 0x29070
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_27; // 0x29178
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_26; // 0x29280
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_6; // 0x29388
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_19; // 0x29428
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_18; // 0x29510
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_19; // 0x295f8
	FAnimNode_StateResult AnimGraphNode_StateResult_14; // 0x29698
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_5; // 0x296c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_17; // 0x29790
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_8; // 0x29878
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_8; // 0x29898
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_25; // 0x298b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_24; // 0x299c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_23; // 0x29ac8
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_5; // 0x29bd0
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_16; // 0x29c70
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_15; // 0x29d58
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_18; // 0x29e40
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x29ee0
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_4; // 0x29f10
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_14; // 0x29fd8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_7; // 0x2a0c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_7; // 0x2a0e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_22; // 0x2a100
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_21; // 0x2a208
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_20; // 0x2a310
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_4; // 0x2a418
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_13; // 0x2a4b8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_12; // 0x2a5a0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_17; // 0x2a688
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x2a728
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_3; // 0x2a758
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_11; // 0x2a820
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x2a908
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0x2a928
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_19; // 0x2a948
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_18; // 0x2aa50
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0x2ab58
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_3; // 0x2ac60
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_10; // 0x2ad00
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_9; // 0x2ade8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_16; // 0x2aed0
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x2af70
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x2afa0
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x2afc8
	FAnimNode_StateMachine AnimGraphNode_StateMachine_4; // 0x2aff8
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x2b0a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x2b0d8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x2b100
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_19; // 0x2b128
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_16; // 0x2b1a8
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_3; // 0x2b268
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_18; // 0x2b330
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_17; // 0x2b3b0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_15; // 0x2b430
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x2b4f0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x2b518
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x2b540
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x2b568
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x2b590
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2b5b8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2b5e0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2b608
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2b630
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_8; // 0x2b658
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_7; // 0x2b740
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_15; // 0x2b828
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x2b8c8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_6; // 0x2b8f8
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_5; // 0x2b9e0
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_14; // 0x2bac8
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x2bb68
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_4; // 0x2bb98
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_3; // 0x2bc80
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_13; // 0x2bd68
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x2be08
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer_2; // 0x2be38
	FAnimNode_BlendSpacePlayer AnimGraphNode_BlendSpacePlayer; // 0x2bf20
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_12; // 0x2c008
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x2c0a8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x2c0d8
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x2c100
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x2c130
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x2c1e0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x2c210
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0x2c230
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend_2; // 0x2c338
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_16; // 0x2c400
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x2c480
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_4; // 0x2c4a0
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_3; // 0x2c550
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive_2; // 0x2c600
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x2c6c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x2c748
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_14; // 0x2c7c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_11; // 0x2c888
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_13; // 0x2c928
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_12; // 0x2c9e8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x2caa8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_10; // 0x2cb28
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x2cbc8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x2cc48
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_11; // 0x2ccc8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x2cd88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x2ce08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x2ce88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x2cf08
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x2cf88
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x2d008
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x2d038
	FAnimNode_Slot AnimGraphNode_Slot_10; // 0x2d0e8
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x2d130
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x2d160
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_9; // 0x2d210
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_10; // 0x2d2b0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2d370
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x2d3f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_38; // 0x2d470
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_9; // 0x2d498
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_17; // 0x2d558
	FAnimNode_Slot AnimGraphNode_Slot_9; // 0x2d6b0
	FAnimNode_Root AnimGraphNode_Root; // 0x2d6f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_8; // 0x2d728
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_37; // 0x2d7c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_7; // 0x2d7f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0x2d890
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_36; // 0x2d998
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone_2; // 0x2d9c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_35; // 0x2da60
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x2da88
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x2db90
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_34; // 0x2dc98
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x2dcc0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x2ddc8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x2ded0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_33; // 0x2def0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x2df18
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x2e020
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_16; // 0x2e040
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_15; // 0x2e198
	FAnimNode_TwoWayBlend AnimGraphNode_TwoWayBlend; // 0x2e2f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_32; // 0x2e3b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_31; // 0x2e3e0
	FAnimNode_Slot AnimGraphNode_Slot_8; // 0x2e408
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_14; // 0x2e450
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_30; // 0x2e5a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_29; // 0x2e5d0
	FAnimNode_RotateRootBone AnimGraphNode_RotateRootBone; // 0x2e5f8
	FAnimNode_Slot AnimGraphNode_Slot_7; // 0x2e698
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_8; // 0x2e6e0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0x2e7a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x2e980
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x2ea88
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x2eaa8
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x2eac8
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle_2; // 0x2eb10
	FTigerAnimNode_BlendByBoolWSettle TigerAnimGraphNode_BlendByBoolWSettle; // 0x2ebc0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_28; // 0x2ec70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x2ec98
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x2eda0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_13; // 0x2edc0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x2ef18
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x2ef38
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x2f040
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x2f148
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_27; // 0x2f250
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_12; // 0x2f278
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_26; // 0x2f3d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x2f3f8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_6; // 0x2f500
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x2f5a0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_11; // 0x2f5e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_25; // 0x2f740
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_24; // 0x2f768
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_7; // 0x2f790
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_10; // 0x2f850
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_5; // 0x2f9a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_23; // 0x2fa48
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0x2fa70
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x2fc50
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_6; // 0x2fd58
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x2fe18
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_5; // 0x2fe98
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_22; // 0x2ff58
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x2ff80
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x2ffc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x30088
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_9; // 0x30190
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_7; // 0x302e8
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x30398
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_4; // 0x303e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_21; // 0x30480
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_20; // 0x304a8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x304d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x30550
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x305d0
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0x30618
	FAnimNode_MakeDynamicAdditive AnimGraphNode_MakeDynamicAdditive; // 0x306d8
	FAnimNode_ApplyAdditive AnimGraphNode_ApplyAdditive; // 0x30710
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_8; // 0x307d8
	FAnimNode_Slot AnimGraphNode_Slot; // 0x30930
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_7; // 0x30978
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_19; // 0x30ad0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_18; // 0x30af8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_17; // 0x30b20
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x30b48
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_6; // 0x30c50
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_16; // 0x30da8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_15; // 0x30dd0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x30df8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x30e18
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_14; // 0x30e38
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_13; // 0x30e60
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x30e88
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0x30f28
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x31080
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_12; // 0x31140
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_11; // 0x31168
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x31190
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x31230
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_10; // 0x31388
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_9; // 0x313b0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_8; // 0x313d8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x31400
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x314c0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0x314e8
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_6; // 0x31510
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x315c0
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_5; // 0x315e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x31698
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x316c0
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_4; // 0x316e8
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x31798
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x318f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x31918
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x31940
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_3; // 0x319e0
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer_2; // 0x31a90
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x31b40
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x31c98
	FAnimNode_LinkedAnimLayer AnimGraphNode_LinkedAnimLayer; // 0x31df0
	float ChangedSetTime; // 0x31ea0
	bool RecentlyChangedSet; // 0x31ea4
	bool PoseInitialized; // 0x31ea5
	float DeltaTimeX; // 0x31ea8
	FRotator RotationLastTick; // 0x31eac
	float YawDelta; // 0x31eb8
	float CameraRollDelta; // 0x31ebc
	float CameraPitchDelta; // 0x31ec0
	float CameraYawDelta; // 0x31ec4
	float VelocityUpDown; // 0x31ec8
	float VelocityLeftRight; // 0x31ecc
	float VelocityFrontBack; // 0x31ed0
	bool bIsUsingRangedWeapon; // 0x31ed4
	bool bWasGettingDiablerized; // 0x31ed5
	FName FaceAnimSlotName_00; // 0x31ed8
	FName FaceAnimSlotName_01; // 0x31ee0
	FName FaceAnimSlotName_02; // 0x31ee8
	FName FaceAnimSlotName_03; // 0x31ef0
	bool IsMovingOnGround; // 0x31ef8
	bool IsAimingWeapon; // 0x31ef9
	FVector LeftHandWeaponTranslation; // 0x31efc
	FName LeftFootBoneName; // 0x31f08
	FName RightFootBoneName; // 0x31f10
	bool ShowTraces; // 0x31f18
	float TraceLengthAboveFoot; // 0x31f1c
	float TraceLengthBelowFoot; // 0x31f20
	FVector MinLimits_Standing; // 0x31f24
	FVector MaxLimits_Standing; // 0x31f30
	FVector MinLimits_Crouching; // 0x31f3c
	FVector MaxLimits_Crouching; // 0x31f48
	FVector RightFootOffsetTraTarget; // 0x31f54
	FRotator RightFootOffsetRotTarget; // 0x31f60
	FVector LeftFootOffsetTraTarget; // 0x31f6c
	FRotator LeftFootOffsetRotTarget; // 0x31f78
	FVector LeftFootOffsetsTra; // 0x31f84
	FRotator LeftFootOffsetsRot; // 0x31f90
	FVector RightFootOffsetsTra; // 0x31f9c
	float RotationOffsetInterpSpeed; // 0x31fa8
	float ZOffsetInterpSpeed; // 0x31fac
	bool IsStandingOnGround; // 0x31fb0
	FVector LeftElbowWeaponTranslation; // 0x31fb4
	FRotator LeftHandWeaponRotation; // 0x31fc0
	FVector RightHandWeaponTranslation; // 0x31fcc
	FVector RightElbowWeaponTranslation; // 0x31fd8
	FRotator RightHandWeaponRotation; // 0x31fe4
	bool IsInMeleeSwing; // 0x31ff0
	ENUM_RangedWeaponCategories CurrentRangedWeapon; // 0x31ff1
	ENUM_MeleeWeaponCategories CurrentMeleeWeapon; // 0x31ff2
	bool ShouldUseFootIk; // 0x31ff3
	bool bIsDedicatedServer; // 0x31ff4
	bool IsMale; // 0x31ff5
	bool HasMovementInput; // 0x31ff6
	ENUM_MovementMode MovementMode; // 0x31ff7
	ENUM_MovementMode PrevMovementMode; // 0x31ff8
	ENUM_JumpState JumpMode; // 0x31ff9
	ENUM_JumpState PrevJumpMode; // 0x31ffa
	float DirectionHor; // 0x31ffc
	float DirectionVer; // 0x32000
	bool IsFiringWeapon; // 0x32004
	bool bIsUsingMeleeWeapon; // 0x32005
	FVector PlayerDesiredMovementDirection; // 0x32008
	float SlideSurfacePitch; // 0x32014
	float FireReadyTimeStamp; // 0x32018
	float FireWeaponBlendInTime; // 0x3201c
	bool IsInElysium; // 0x32020
	FVector LastPlayerDesiredMovementDirection; // 0x32024
	float StrafeRotationOffset; // 0x32030
	bool IsStrafingBackwards; // 0x32034
	float StrafeForwardDirection; // 0x32038
	float StrafeForwardDirectionSmooth; // 0x3203c
	float StrafeBackwardsDirection; // 0x32040
	float StrafeBackwardsDirectionSmooth; // 0x32044
	bool ActivateNewStrafe; // 0x32048
	FVector CurrentPlayerIntendedVelocity; // 0x3204c
	FVector PlayerIntendedVelocityLean; // 0x32058
	FVector PlayerIntendedVelocityLeanSlow; // 0x32064
	bool ActivateVelocityLean; // 0x32070
	float ActivateVelocityLeanBlendFloat; // 0x32074
	float StrafeLeanRootRotSetting; // 0x32078
	FVector StrafeLeanRootRotCurrent; // 0x3207c
	float StrafeLeanRootTransSetting; // 0x32088
	FVector StrafeLeanRootTransCurrent; // 0x3208c
	float StrafeLeanSpineSetting; // 0x32098
	FRotator StrafeLeanSpineCurrent; // 0x3209c
	FRotator StrafeLeanHeadCounterCurrent; // 0x320a8
	bool LegCrossClearance; // 0x320b4
	float YawDeltaSmooth; // 0x320b8
	UBlendSpaceBase* LastPowerAimOffset; // 0x320c0
	float PowerAimOffsetAlpha; // 0x320c8
	bool bHasValidPowerAimOffset; // 0x320cc
	bool IsMoving; // 0x320cd
	bool IsHipFiring; // 0x320ce
	bool IsSimulatedProxy; // 0x320cf
	bool WasSliding; // 0x320d0
	FVector InAirLeaning; // 0x320d4
	float InAirLeaningHeightReverser; // 0x320e0
	float TimeSinceLastPlayerInput; // 0x320e4
	float SmoothSpeed; // 0x320e8
	bool HasValidRangedAimOffsets; // 0x320ec
	float LeftHandIK; // 0x320f0
	float SmoothSpeedSlow; // 0x320f4
	float RightHandIK; // 0x320f8
	TArray<ENUM_RangedWeaponCategories> Weapon - Dual; // 0x32100
	ENUM_WallSlideDirection CurrentWallSlideWallSide; // 0x32110
	float CharacterDeltaYawSmoothWallSlide; // 0x32114
	bool WallJumpWasAvailable; // 0x32118
	float SprintAngle; // 0x3211c
	float LookAtVertical; // 0x32120
	float LookAtHorizontal; // 0x32124
	float LookAtHorizontalSlow; // 0x32128
	bool LookAtInRange; // 0x3212c
	float LookAtHeadTiltAmount; // 0x32130
	float SprintAngleWide; // 0x32134
	float SptintAngleSlow; // 0x32138
	float CameraYawDeltaSlideSlow; // 0x3213c
	float SprintAngleWideSlow; // 0x32140
	FVector PlayerDesiredStartDirection; // 0x32144
	float PlayerDesiredStartDirectionWhole90; // 0x32150
	float PlayerDesiredStartDirectionDegrees; // 0x32154
	float PlayerDesiredStartDirectionRotOffsetDegree; // 0x32158
	FRotator PlayerDesiredStartDirectionRotOffset; // 0x3215c
	FVector PlayerDesiredStopDirection; // 0x32168
	bool ShouldLeaveStart; // 0x32174
	bool ShouldLeaveStop; // 0x32175
	bool ActivateStartStop; // 0x32176
	FVector WallSlideVelocity; // 0x32178
	float TimeSinceWallSlideStateEntered; // 0x32184
	float WallSlideDirectionAttatchInverser; // 0x32188
	TArray<ENUM_RangedWeaponCategories> IsDualHandRangedWeapon; // 0x32190
	bool ActivateTurnStarts; // 0x321a0
	float TurnStartAngle; // 0x321a4
	bool WasClimbing; // 0x321a8
	float TurnInPlaceAmount; // 0x321ac
	bool TriggerTurnInPlace; // 0x321b0
	bool CanEnterTurnInPlace; // 0x321b1
	bool ActivateRootTurnInPlace; // 0x321b2
	bool Rotate_L; // 0x321b3
	bool Rotate_R; // 0x321b4
	float ADSYawRotationDelta; // 0x321b8
	float ADSYawRotation; // 0x321bc
	float ADSYawRotationLastTick; // 0x321c0
	TArray<FVector> TurnInPlaceLookMovements; // 0x321c8
	float TurnInPlaceMaxDot; // 0x321d8
	TArray<ENUM_MeleeWeaponCategories> WPN Melee - Single; // 0x321e0
	TArray<ENUM_RangedWeaponCategories> WPN Range - Single; // 0x321f0
	bool IsFeeding; // 0x32200
	float TimeSprinting; // 0x32204
	bool IsBlinded; // 0x32208
	float isBlindedWeight; // 0x3220c
	float RotateInPlaceAlpha; // 0x32210
	float RotateInPlacePlayRate; // 0x32214
	FRotator CurrentCameraWorldRotation; // 0x32218
	FRotator StartCameraWorldRotation; // 0x32224
	bool ActivateSprintTransitions; // 0x32230
	float TimeMoving; // 0x32234
	ETigerClan CurrentPlayerClan; // 0x32238
	bool ShouldPlaySoftStop; // 0x32239
	TMap<EPhysicalSurface, FName> SurfaceToAudioName; // 0x32240
	UCurveFloat* WallGrind_Remap; // 0x32290
	float WallGrindAimOffset; // 0x32298
	float In Air Jump Lean; // 0x3229c
	bool ShouldUseLookAt; // 0x322a0
	bool StopCrouchState; // 0x322a1
	bool StartCrouchState; // 0x322a2
	TArray<ETigerClan> Player - Clan; // 0x322a8
	float TimeFalling; // 0x322b8
	bool RecentlyLeftWallSlide; // 0x322bc
	ENUM_WallSlideDirection LastWallSlideWallSide; // 0x322bd
	bool ActivateWallSlideDetatch; // 0x322be
	FVector LookAtWallSlide; // 0x322c0
	bool amInTurnStart; // 0x322cc
	float SprintAccelTimer; // 0x322d0
	float StrafeStepFrequencyMod; // 0x322d4
	ATigerPlayer* Player; // 0x322d8
	float RootBoneDeltaSmoother; // 0x322e0
	FRotator RightFootOffsetsRot; // 0x322e4
	FVector FootIKPelvisOffsetTra; // 0x322f0
	bool IsSoaringLeap; // 0x322fc
	FVector SoaringLeapLeaning_PelvisTrans; // 0x32300
	FRotator SoaringLeapLeaning_PelvisRot; // 0x3230c
	FRotator SoaringLeapLeaning_SpineRot; // 0x32318
	FRotator SoaringLeapLeaning_HeadRot; // 0x32324
	FRotator StrafeLeanSpineCurrentThird; // 0x32330
	bool IsAnyPowerActive; // 0x3233c
	float UpperbodyWeight; // 0x32340
	float RangedWpnCacheFalseBlendTime; // 0x32344
	bool RangedWpnCacheBlend; // 0x32348
	ENUM_SettleType SettleEventEnum_Aim; // 0x32349
	FRotator LookAtHeadRotator; // 0x3234c
	FRotator LookAtSpineRotator; // 0x32358
	float LookAtSpineOnOff; // 0x32364
	ENUM_SettleType SettleEventEnum_Crouch; // 0x32368
	float OverrideRightHand; // 0x3236c
	float OverrideLeftHand; // 0x32370
	float ModifiedStrafePlayrate; // 0x32374
	float WalkSpeed; // 0x32378
	float MinWalkSpeed; // 0x3237c
	float MaxWalkSpeed; // 0x32380
	float RunSpeed; // 0x32384
	float MinRunSpeed; // 0x32388
	float MaxRunSpeed; // 0x3238c
	float StrafeWalkRunBlend; // 0x32390
	float WalkStrafePlayrate; // 0x32394
	float RunStrafePlayrate; // 0x32398
	float StepLengthModWalk; // 0x3239c
	float StepLengthModWalkFwd; // 0x323a0
	float StepLengthModWalkBwd; // 0x323a4
	float StepLengthModRun; // 0x323a8
	float StepLengthModRunFwd; // 0x323ac
	float StepLengthModRunBwd; // 0x323b0
	bool ActivateNewStrafeScaler; // 0x323b4
	float ClimbAngle; // 0x323b8
	bool ShouldReturnToDownedIntro; // 0x323bc
	bool ActivateBackFlip; // 0x323bd
	float FallVerticalValue; // 0x323c0
	float TimeUntilCollision; // 0x323c4
	bool AboutToCollideWithClimbableSurface; // 0x323c8
	bool NewStartAnimationAllowed; // 0x323c9
	bool StartIsActive; // 0x323ca
	float StartIsActiveTime; // 0x323cc
	bool NewStopAnimationAllowed; // 0x323d0
	bool StopIsActive; // 0x323d1
	float StopIsActiveTime; // 0x323d4
	bool IsFalling; // 0x323d8
	FVector FootIKPelvisOffsetTraCrouchSlope; // 0x323dc
	bool FootIKPelvisOffsetTraCrouchSlopeActivate; // 0x323e8
	bool ActivateSlideSettles; // 0x323e9
	bool R; // 0x323ea
	float TimeSinceLastJump; // 0x323ec
	float StartAngle; // 0x323f0
	bool SprintTime; // 0x323f4
	float SlideAngle; // 0x323f8
	bool LookAtRightSide; // 0x323fc
	TArray<ENUM_RangedWeaponCategories> Weapon - Rifle; // 0x32400
	float Override Right Hand Null; // 0x32410
	float Override Left Hand Null; // 0x32414
	bool IsInLowVault; // 0x32418
	float ToClimbBlendTime; // 0x3241c
	bool AllowSprintToRun; // 0x32420
	FVector RightHandIK_Wall; // 0x32424
	ENUM_SettleType SettleEventEnum_HideWeapon; // 0x32430
	FVector LeftHandIK_Wall; // 0x32434
	float RightHand_WallIK_Dist; // 0x32440
	bool LeftHandIK_TraceSuccessful; // 0x32444
	bool RightHandIK_TraceSuccessful; // 0x32445
	float WallCollisionAngle; // 0x32448
	float LeftHand_WallIK_Dist; // 0x3244c
	FVector LeftHandIK_Wall_Soft; // 0x32450
	FVector RightHandIK_Wall_Soft; // 0x3245c
	FVector WallSlide_IK_Offset_RightHand; // 0x32468
	FVector WallSlide_IK_Offset_LeftHand; // 0x32474
	FRotator WallSlide_RotationOffset_RightHand; // 0x32480
	FRotator WallSlide_RotationOffset_LeftHand; // 0x3248c
	TArray<ENUM_MeleeWeaponCategories> WPN Melee - 2H; // 0x32498
	bool RecentlyChangedSetSingleFrameCheck; // 0x324a8
	FVector PelvisReloadOffset; // 0x324ac
	bool IsInReload; // 0x324b8
	float IsInReloadAlpha; // 0x324bc
	bool UseAlternativeGrip; // 0x324c0
	float WalkStrafeScaled; // 0x324c4
	float RunStrafeScaled; // 0x324c8
	TArray<ENUM_RangedWeaponCategories> OneHandedHipWeaponsMovingList; // 0x324d0
	float CameraRollDeltaSmooth; // 0x324e0
	float CameraPitchDeltaSmooth; // 0x324e4
	float CameraYawDeltaSmooth; // 0x324e8
	FRotator CurrentCameraWorldRotationLastTick; // 0x324ec
	bool SlidingReload; // 0x324f8
	bool (Fp)LowerBodyLayering; // 0x324f9
	bool (Fp)OneHandedHipWeaponsMoving; // 0x324fa
	bool (Fp)ShouldUseADDLocomotion; // 0x324fb
	float RecoilPushbackAmount; // 0x324fc
	bool IsInPrimingAnimation; // 0x32500
	TArray<ETigerDisciplinesEnum> RotateInPlacePowersArray; // 0x32508
	bool Has Input? (before setting var); // 0x32518
	float RecoilShakeAlphaTarget; // 0x3251c
	float RecoilKickAlpha; // 0x32520
	float AimSweepFloat; // 0x32524
	bool IsSecondMagazine; // 0x32528
	float DynamicADDReloadAlpha; // 0x3252c
	bool (Fp)OneHandedHipWeapons; // 0x32530
	TArray<ENUM_RangedWeaponCategories> OneHandedHipWeaponsList; // 0x32538
	TMap<ENUM_RangedWeaponCategories, float> RecoilShakeAlphaAddMap; // 0x32548
	TArray<ENUM_RangedWeaponCategories> RecoilShakeWeaponsMap; // 0x32598
	TMap<ENUM_RangedWeaponCategories, float> ADSRecoilKickAlpha; // 0x325a8
	bool ShouldUseAnimatedIK; // 0x325f8
	FRotator MagazineRotationAmount; // 0x325fc
	TArray<ENUM_RangedWeaponCategories> NewVar_2; // 0x32608
	TArray<ENUM_MeleeWeaponCategories> NewVar_4; // 0x32618
	bool ShouldMagazineMoveWhileShooting; // 0x32628
	FVector DistanceToWallCompensation; // 0x3262c
	float ProxyRotationCompensation; // 0x32638
	float WeaponArmPoseAlpha; // 0x3263c
};

struct UMaterialExpressionVolumetricAdvancedMaterialOutput {
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

struct USkeletalMeshLODSettings {
	FPerPlatformInt MinLOD; // 0x30
	FPerPlatformBool DisableBelowMinLodStripping; // 0x34
	bool bOverrideLODStreamingSettings; // 0x35
	FPerPlatformBool bSupportLODStreaming; // 0x36
	FPerPlatformInt MaxNumStreamedLODs; // 0x38
	FPerPlatformInt MaxNumOptionalLODs; // 0x3c
	TArray<FSkeletalMeshLODGroupSettings> LODGroups; // 0x40
};

struct UTigerAiPerfBenchUseWeapon {
	ATigerLocalAIControllerBase* LocalAIController; // 0x80
	ATigerPlayerController* PlayerController; // 0x88
};

struct UEditableText {
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

struct UMovieSceneNiagaraVectorParameterTrack {
	int32_t ChannelsUsed; // 0xb0
};

struct UTigerMapGameData {
	FMulticastInlineDelegate OnMapMarkerAdded; // 0x28
	FMulticastInlineDelegate OnMapMarkerRemoved; // 0x38
	TArray<UTigerMapMarkerProxy*> MapMarkerProxies; // 0x48
	UTigerMapInfoDataAsset* MapInfoAsset; // 0x58
};

struct ATigerAiSplinePathHub {
	TArray<FTigerAISplinePathConnection> SplineConnections; // 0x228
	float ConnectionRadius; // 0x238
};

struct USoundWave {
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

struct UApplicationLifecycleComponent {
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

struct UEnvelopeFollowerListener {
	FMulticastInlineDelegate OnEnvelopeFollowerUpdate; // 0xb0
};

struct UTigerClanCustomizationOptions {
	TArray<FTigerCharacterCustomizationOutfitData> Outfits; // 0x28
	TArray<FTigerCharacterCustomizationHeadData> Heads; // 0x38
	TArray<FTigerCharacterCustomizationItem> Hairs; // 0x48
	TArray<FTigerCharacterCustomizationItem> HairColors; // 0x58
	TArray<FTigerCharacterCustomizationItem> EyeColors; // 0x68
	TArray<FTigerCharacterCustomizationItem> Tattoos; // 0x78
	TArray<FTigerCharacterCustomizationItem> FacePaints; // 0x88
	TArray<FTigerCharacterCustomizationItem> PiercingSets; // 0x98
	TArray<FTigerCharacterCustomizationItem> Headgears; // 0xa8
	TArray<FTigerCharacterCustomizationItem> Eyewears; // 0xb8
	TArray<FTigerCharacterCustomizationItem> Eyebrows; // 0xc8
	TArray<FTigerCharacterCustomizationItem> EyebrowColors; // 0xd8
	TArray<FTigerCharacterCustomizationItem> Beards; // 0xe8
	TArray<FTigerCharacterCustomizationItem> BeardColors; // 0xf8
	TArray<FTigerCharacterCustomizationItem> CharacterIcons; // 0x108
	TArray<FTigerCharacterCustomizationItem> CharacterCardShapes; // 0x118
	TArray<FTigerCharacterCustomizationItem> CharacterCardTextures; // 0x128
	TArray<FTigerCharacterCustomizationItem> Emotes; // 0x138
	TMap<ETigerCustomizationType, FTigerCombinedItemCustomizations> CombinedItems; // 0x148
	int32_t PersistentIdTicker; // 0x198
	TMap<int32_t, TSoftClassPtr<UObject>> IdToItemLut; // 0x1a0
	TMap<TSoftClassPtr<UObject>, int32_t> ItemToIdLut; // 0x1f0
	TMap<int32_t, int32_t> IdToIndexLut; // 0x240
	FTigerCharacterCardData DefaultPlayerCard; // 0x290
};

struct ULandscapeHeightfieldCollisionComponent {
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

struct UABP_VMP_BRU_F_HAIR_07_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x2c8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2e8
	FAnimNode_Root AnimGraphNode_Root; // 0x308
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x340
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0xbc0
};

struct UOnlineSessionClient {
	bool bIsFromInvite; // 0x1d8
	bool bHandlingDisconnect; // 0x1d9
};

struct UTigerCharacterBodyTypeCustomization {
	TSoftObjectPtr<UTigerCharacterPreset> CharacterPreset; // 0x110
};

struct ACullDistanceVolume {
	TArray<FCullDistanceSizePair> CullDistances; // 0x260
	char bEnabled : 1; // 0x270
};

struct USubmixEffectSubmixEQPreset {
	FSubmixEffectSubmixEQSettings Settings; // 0xa0
};

struct UTigerJudgeSwingData {
	TMap<FName, FTigerJudgeSwingCollisionInfo> SwingCollisionInfos; // 0x30
};

struct UMaterialExpressionVectorParameter {
	FLinearColor DefaultValue; // 0x58
	bool bUseCustomPrimitiveData; // 0x68
	char PrimitiveDataIndex; // 0x69
};

struct UTigerAICanInvestigateDecorator {
	FBlackboardKeySelector CurrentSuspiciousTarget; // 0x68
};

struct ATigerLootSpawner {
	UTigerItemLootTable* LootTable; // 0x228
	char GameTypeFilter; // 0x230
	bool bShouldReceiveItemsFromLootLocation; // 0x231
	TArray<FTigerRandomizedLootResult> AssignedLoot; // 0x238
	USphereComponent* LootLocationCollider; // 0x248
	ATigerLootLocation* AssignedLootLocation; // 0x250
	TArray<ATigerItemWorldRepresentation*> SpawnedItems; // 0x258
};

struct UTigerUtilityPowerLureComponent {
	float TimeToLure; // 0xe8
	UAnimMontage* LureAnimation; // 0xf0
	USoundBase* LureWhistleSound; // 0xf8
	float ClientFeedbackUpdateTickInterval; // 0x100
};

struct UGameplayTagsSettings {
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

struct UNiagaraDataInterfaceRenderTarget2D {
	FIntPoint Size; // 0xd8
	ETextureRenderTargetFormat OverrideRenderTargetFormat; // 0xe0
	char bOverrideFormat : 1; // 0xe1
	FNiagaraUserParameterBinding RenderTargetUserParameter; // 0xe8
	TMap<uint64_t, UTextureRenderTarget2D*> ManagedRenderTargets; // 0x108
};

struct AStaticMeshActor {
	UStaticMeshComponent* StaticMeshComponent; // 0x228
	bool bStaticMeshReplicateMovement; // 0x230
	ENavDataGatheringMode NavigationGeometryGatheringMode; // 0x231
};

struct UGizmoTransformProxyTransformSource {
	UTransformProxy* Proxy; // 0x48
};

struct UMaterialExpressionLandscapeLayerWeight {
	FExpressionInput Base; // 0x40
	FExpressionInput Layer; // 0x54
	FName ParameterName; // 0x68
	float PreviewWeight; // 0x70
	FVector ConstBase; // 0x74
	FGuid ExpressionGUID; // 0x80
};

struct UNetAnalyticsAggregatorConfig {
	TArray<FNetAnalyticsDataConfig> NetAnalyticsData; // 0x28
};

struct UMovieSceneAudioSection {
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

struct UAudioBus {
	EAudioBusChannels AudioBusChannels; // 0x28
	bool bIsAutomatic; // 0x29
};

struct ATigerElysiumNpcBase {
	bool bAllowCollision; // 0x228
	UCapsuleComponent* CapsuleComponent; // 0x230
	USkeletalMeshComponent* BodyMesh; // 0x238
	USkeletalMeshComponent* HeadMesh; // 0x240
	USkeletalMeshComponent* HairMesh; // 0x248
	USkeletalMeshComponent* HoodieMesh; // 0x250
	FTigerElysiumNpcData NpcData; // 0x260
	UStaticMeshComponent* FirstPropSm; // 0x430
	USkeletalMeshComponent* FirstPropSk; // 0x438
	UChildActorComponent* FirstPropBp; // 0x440
	UStaticMeshComponent* SecondPropSm; // 0x448
	USkeletalMeshComponent* SecondPropSk; // 0x450
	UChildActorComponent* SecondPropBp; // 0x458
};

struct UTigerFriendSubsystem {
	TArray<UTigerFriend*> Friends; // 0x30
	TArray<UTigerFriendInvite*> Invites; // 0x40
	ETigerOnlineServiceStatus ServiceStatus; // 0x50
	UTigerPresenceSubsystem* PresenceSubsystem; // 0x130
	FString FriendSubsystemType; // 0x148
	UTigerFriendSubsystemImpl* Impl; // 0x158
};

struct UTigerShockwavePunchConfig {
	TArray<UAnimMontage*> PunchMontages; // 0x170
	TArray<ATigerShockwaveWall*> ShockwaveActorToSpawn; // 0x180
	FTigerShockwaveWallData ShockwaveWallData; // 0x190
};

struct UTBP_UI_MoviePlayer_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UImage* BlackBackground; // 0x288
	UImage* MovieTexture; // 0x290
	UMediaPlayer* AnimaticPlayer; // 0x298
	UFileMediaSource* MovieFile; // 0x2a0
	bool PlayImmediately; // 0x2a8
	FMulticastInlineDelegate OnClosed; // 0x2b0
	ATBP_MovieSound_C* SoundActor; // 0x2c0
	UMediaPlaylist* Playlist; // 0x2c8
	bool bCanSkipMovies; // 0x2d0
	TArray<FKey> CancelKeys; // 0x2d8
	TArray<FKey> WaitingForRelease; // 0x2e8
	bool WasMouseCursorShown; // 0x2f8
};

struct USpectatorBeaconState {
	FName SessionName; // 0x28
	int32_t NumConsumedReservations; // 0x30
	int32_t MaxReservations; // 0x34
	bool bRestrictCrossConsole; // 0x38
	TArray<FSpectatorReservation> Reservations; // 0x40
};

struct UParticleModuleOrientationAxisLock {
	EParticleAxisLock LockAxisFlags; // 0x30
};

struct UTssSDKSettings {
	uint32_t GameID; // 0x38
	FString AuthToken; // 0x40
};

struct UTigerMeleeCrosshairWidget {
	UTigerMeleeWeaponComponent* OwnerMelee; // 0x2b8
	UImage* CrosshairImage; // 0x2c0
};

struct ALevelScriptActor {
	char bInputEnabled : 1; // 0x228
};

struct UTigerEyewearAnimInstance {
	FTransform NoseTransform; // 0x3c0
	FTransform EarRightTransform; // 0x3f0
	FTransform EarLeftTransform; // 0x420
};

struct UMaterialExpressionComment {
	int32_t SizeX; // 0x40
	int32_t SizeY; // 0x44
	FString Text; // 0x48
	FLinearColor CommentColor; // 0x58
	int32_t FontSize; // 0x68
};

struct APhysicsConstraintActor {
	UPhysicsConstraintComponent* ConstraintComp; // 0x228
	AActor* ConstraintActor1; // 0x230
	AActor* ConstraintActor2; // 0x238
	char bDisableCollision : 1; // 0x240
};

struct UTigerConsumableInventoryItemBase {
	int32_t Count; // 0x110
};

struct UInAppPurchaseCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UTigerPiercingPhysicsAssetUserData {
	float Mass; // 0x28
	float ForceAmount; // 0x2c
	float AnglePitchLimit; // 0x30
	float AngleRollLimit; // 0x34
};

struct UStreamMediaSource {
	FString StreamUrl; // 0x88
};

struct UTigerWorldCompositionLevel {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct UTBP_UI_SmallErrorMessage_C {
	UImage* Background; // 0x260
	UImage* Border; // 0x268
	UImage* ErrorImage; // 0x270
	UTigerStyledRichTextBlock* ErrorText; // 0x278
};

struct UWindowTitleBarAreaSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UTigerFriend {
	FMulticastInlineDelegate OnOnlineStatusChanged; // 0x28
	FMulticastInlineDelegate OnLocationChanged; // 0x38
	FString DISPLAYNAME; // 0x48
	FTigerPersistentPlayerID PlayerId; // 0x58
	FSharkUserId SharkmobUserId; // 0x68
	FString PlatformUesrId; // 0x78
	FString Location; // 0x90
};

struct UInputActionDelegateBinding {
	TArray<FBlueprintInputActionDelegateBinding> InputActionDelegateBindings; // 0x28
};

struct USoundSubmixWithParentBase {
	USoundSubmixBase* ParentSubmix; // 0x38
};

struct UMaterialExpressionDepthOfFieldFunction {
	EDepthOfFieldFunctionValue FunctionValue; // 0x40
	FExpressionInput Depth; // 0x44
};

struct UTigerDisciplineConfigs {
	TMap<ETigerDisciplinesEnum, UTigerActiveDisciplineConfig*> Configs; // 0x28
};

struct UDeviceProfileManager {
	TArray<UObject*> Profiles; // 0x28
};

struct ATigerBloodVeinPawn {
	FMulticastInlineDelegate OnIsCoterieNavigatorChanged; // 0x288
	ATigerBloodVein* BloodVein; // 0x298
	bool bIsCoterieNavigator; // 0x2a0
	bool bWantsToLaunchSolo; // 0x2a1
	UStaticMeshComponent* StaticMesh; // 0x2a8
	UTigerSpringArmComponent* SpringArm; // 0x2b0
	UCameraComponent* Camera; // 0x2b8
	ETigerBloodVeinAlternateAction AlternateAction; // 0x2c0
	ATigerBloodVeinBranch* BranchClass; // 0x2d8
	float AlternateActionHoldTime; // 0x2e0
};

struct UTigerCustomMontageListClan {
	UAnimMontage* Montages[0x4]; // 0x28
};

struct ANiagaraActor {
	UNiagaraComponent* NiagaraComponent; // 0x228
	char bDestroyOnSystemFinish : 1; // 0x230
};

struct UTigerBuffFOTTKnockbackWallStunInstance {
	UTigerBuffFOTTKnockbackWallStun* FOTTKnockbackWallStun; // 0x88
	ATigerCharacter* Target; // 0x98
};

struct UTextPropertyTestObject {
	FText DefaultedText; // 0x28
	FText UndefaultedText; // 0x40
	FText TransientText; // 0x58
};

struct AAkSpotReflector {
	UAkAuxBus* EarlyReflectionAuxBus; // 0x228
	FString EarlyReflectionAuxBusName; // 0x230
	UAkAcousticTexture* AcousticTexture; // 0x240
	float DistanceScalingFactor; // 0x248
	float Level; // 0x24c
};

struct UInterpGroupInst {
	UInterpGroup* Group; // 0x28
	AActor* GroupActor; // 0x30
	TArray<UInterpTrackInst*> TrackInst; // 0x38
};

struct UPaperFlipbookComponent {
	UPaperFlipbook* SourceFlipbook; // 0x478
	UMaterialInterface* Material; // 0x480
	float PlayRate; // 0x488
	char bLooping : 1; // 0x48c
	char bReversePlayback : 1; // 0x48c
	char bPlaying : 1; // 0x48c
	float AccumulatedTime; // 0x490
	int32_t CachedFrameIndex; // 0x494
	FLinearColor SpriteColor; // 0x498
	UBodySetup* CachedBodySetup; // 0x4a8
	FMulticastInlineDelegate OnFinishedPlaying; // 0x4b0
};

struct UAnimSet {
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

struct UTBP_UI_XboxIcon_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UImage* IconImage; // 0x288
	UTigerKeyTextureMapping* KeyTextureMapping; // 0x290
	bool NewVar_1; // 0x298
};

struct UMovieSceneSlomoSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
};

struct UInputSettings {
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

struct UTigerNPCAsset {
	TArray<FTigerRandomVisualAsset> NormalizedVisualAssets; // 0x30
	UTigerNPCBehaviorAsset* BehaviorAsset; // 0x40
	UTigerGrimoireEntry* GrimoireEntry; // 0x48
};

struct UTBP_UI_LoginQueueSection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTBP_UI_Button_CTA_C* Button_CTA_Retry; // 0x268
	UTigerStyledRichTextBlock* EstimatedWaitTimeValue; // 0x270
	UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x278
	UTigerStyledRichTextBlock* TigerStyledRichTextBlock_91; // 0x280
	UVerticalBox* WaitingPanel; // 0x288
	FMulticastInlineDelegate ExitGame; // 0x290
	float EstimatedWaitTimeSeconds; // 0x2a0
	FTimerHandle UpdateWaitTimeTimerHandle; // 0x2a8
	FMulticastInlineDelegate Retry; // 0x2b0
	float EstimatedWaitTimeSetAtRealTimeSeconds; // 0x2c0
};

struct ATigerHUD {
	FMulticastInlineDelegate OnInGameMenuToggled; // 0x318
	FMulticastInlineDelegate OnMenuOpened; // 0x328
	UTigerIngameMenuWidget* IngameMenuUI; // 0x338
	UTigerGroupUIWidget* GroupStatus; // 0x340
	UTigerEmoteWheelWidget* EmoteWheel; // 0x348
	UTigerNotificationsUI* NotificationsUI; // 0x350
	UTigerContextualHelpUI* ContextualHelpUI; // 0x358
	ATigerPlayerController* TigerPlayerController; // 0x378
	UTigerCrosshairWidget* Crosshair; // 0x380
	TArray<FAutoInitializedWidget> AutoInitializedWidgets; // 0x388
	UTigerMenuWidget* CurrentlyOpenMenu; // 0x3a8
	TArray<UUserWidget*> HiddenWidgets; // 0x3c0
	TArray<TWeakObjectPtr<UWidgetComponent>> HiddenWidgetComponents; // 0x3d0
};

struct UMaterialExpressionShadingPathSwitch {
	FExpressionInput Default; // 0x40
	FExpressionInput Inputs[0x3]; // 0x54
};

struct UOverlaySlot {
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct UDatasmithSkyLightComponentTemplate {
	ESkyLightSourceType SourceType; // 0x30
	int32_t CubemapResolution; // 0x34
	UTextureCube* Cubemap; // 0x38
};

struct UAkAudioEventData {
	float MaxAttenuationRadius; // 0x90
	bool IsInfinite; // 0x94
	float MinimumDuration; // 0x98
	float MaximumDuration; // 0x9c
	TMap<FString, UAkAssetDataSwitchContainer*> LocalizedMedia; // 0xa0
	TSet<UAkAudioEvent*> PostedEvents; // 0xf0
	TSet<UAkAuxBus*> UserDefinedSends; // 0x140
	TSet<UAkTrigger*> PostedTriggers; // 0x190
	TSet<UAkGroupValue*> GroupValues; // 0x1e0
};

struct UMovieScene3DPathSection {
	FMovieSceneFloatChannel TimingCurve; // 0x110
	MovieScene3DPathSection_Axis FrontAxisEnum; // 0x1b0
	MovieScene3DPathSection_Axis UpAxisEnum; // 0x1b1
	char bFollow : 1; // 0x1b4
	char bReverse : 1; // 0x1b4
	char bForceUpright : 1; // 0x1b4
};

struct UAnimClassData {
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

struct UMaterialExpressionInverseLinearInterpolate {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Value; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstValue; // 0x84
	bool bClampResult; // 0x88
};

struct UTigerAIPlayerTravelBloodVeinTask {
	UCurveFloat* JumpProbabilityDistribution; // 0x98
	ETigerJumpDistribution JumpDistributionType; // 0xa8
};

struct UTigerClientRewardTrackChallenges {
	TArray<FTigerItemId> RewardIds; // 0x28
	int32_t RewardHighlightIndex; // 0x38
	UTigerPersistentPlayerState* PersistentPlayerState; // 0x40
};

struct UBlackboardKeyType_Enum {
	UEnum* EnumType; // 0x30
	FString EnumName; // 0x38
	char bIsEnumNameValid : 1; // 0x48
};

struct UTigerAnimNotifyState_LockOwner {
	bool bStopActiveMovement; // 0x30
};

struct ACameraRig_Crane {
	float CranePitch; // 0x228
	float CraneYaw; // 0x22c
	float CraneArmLength; // 0x230
	bool bLockMountPitch; // 0x234
	bool bLockMountYaw; // 0x235
	USceneComponent* TransformComponent; // 0x238
	USceneComponent* CraneYawControl; // 0x240
	USceneComponent* CranePitchControl; // 0x248
	USceneComponent* CraneCameraMount; // 0x250
};

struct UMaterialExpressionMultiply {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UTBP_UI_PointOfInterestMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UTextBlock* HighTierLoot_Text; // 0x2d0
	UInvalidationBox* IB_POI_Marker; // 0x2d8
	UImage* PoiIcon; // 0x2e0
	UTigerStyledRichTextBlock* PoiText; // 0x2e8
	UBorder* PoiTextBorder; // 0x2f0
};

struct UHierarchicalLODSetup {
	TArray<FHierarchicalSimplification> HierarchicalLODSetup; // 0x28
	TSoftObjectPtr<UMaterialInterface> OverrideBaseMaterial; // 0x38
};

struct UTigerGroupSettings {
	FTigerGroupSettingsData GroupSettingsData; // 0x38
};

struct UTBP_UI_StyledComboBox_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UWidgetAnimation* ExpandDropDown; // 0x288
	UBorder* ButtonBorder; // 0x290
	UTigerStyledRichTextBlock* ButtonTextBlock; // 0x298
	UBorder* DropDownBackground; // 0x2a0
	UBorder* DropDownBorder; // 0x2a8
	UButton* DropDownButton; // 0x2b0
	UImage* DropDownImage; // 0x2b8
	UVerticalBox* DropDownList; // 0x2c0
	UScrollBox* ScrollBox_1; // 0x2c8
	FMulticastInlineDelegate OnSelectionChanged; // 0x2d0
	FDataTableRowHandle TextStyle; // 0x2e0
	FText HintText; // 0x2f0
	float HintTextOpacity; // 0x308
	TArray<FText> Options; // 0x310
	int32_t CurrentlySelectedIndex; // 0x320
	bool Expanded; // 0x324
	FLinearColor DefaultBorderColor; // 0x328
	FLinearColor HoveredBorderColor; // 0x338
	FLinearColor ActiveBorderColor; // 0x348
	FLinearColor ErrorBorderColor; // 0x358
	FLinearColor BackgroundColor; // 0x368
	bool Hovered; // 0x378
	bool IsError; // 0x379
	float ScrollSpeedModifier; // 0x37c
};

struct UBTDecorator {
	char bInverseCondition : 1; // 0x60
	EBTFlowAbortMode FlowAbortMode; // 0x64
};

struct UAISubsystem {
	UAISystem* AISystem; // 0x30
};

struct UTigerDisciplineJump {
	UTigerJumpConfig* Config; // 0xf8
	UCapsuleComponent* CapsuleOverlapComponent; // 0x100
	TArray<AActor*> ActorsThatOverlapped; // 0x148
};

struct UTreeView {
	FDelegate BP_OnGetItemChildren; // 0x378
	FMulticastInlineDelegate BP_OnItemExpansionChanged; // 0x388
};

struct UNiagaraDataInterfaceArrayColor {
	TArray<FLinearColor> ColorData; // 0x50
};

struct UBTTask_MoveDirectlyToward {
	char bDisablePathUpdateOnGoalLocationChange : 1; // 0xb0
	char bProjectVectorGoalToNavigation : 1; // 0xb0
	char bUpdatedDeprecatedProperties : 1; // 0xb0
};

struct ATigerPaperDoll {
	UTigerCharacterMeshManager* MeshManager; // 0x228
	TWeakObjectPtr<ATigerPlayerState> TigerPlayerState; // 0x230
	UTigerNpcPropComponent* PropComponent; // 0x238
	USceneComponent* PlayerAttachment; // 0x240
	USkeletalMeshComponent* BodySkelMesh; // 0x248
	USkeletalMeshComponent* HeadSkelMesh; // 0x250
	USkeletalMeshComponent* HoodieSkelMesh; // 0x258
	USkeletalMeshComponent* HairSkelMesh; // 0x260
	USkeletalMeshComponent* HeadgearMesh; // 0x268
	USkeletalMeshComponent* EyewearMesh; // 0x270
	USkeletalMeshComponent* BeardSkelMesh; // 0x278
	USkeletalMeshComponent* BodyAdditionalMesh; // 0x280
	FTigerPreviewerData StartupAppearance; // 0x288
	bool bRegisterWithPlayerController; // 0x538
	UTigerCharCustomizationComponent* CharacterCustomization; // 0x540
	UTigerPlayerClanData* PlayerClan; // 0x548
	UCameraComponent* CameraComponent; // 0x550
	UAnimInstance* PlayerAnimInstanceClass; // 0x558
	USceneCaptureComponent2D* SceneCapture; // 0x560
	ATigerPlayerCameraManager* CameraManager; // 0x568
	bool bUseFreeCam; // 0x570
	float DefaultCameraLerpSpeed; // 0x574
	FVector CamerasOffset[0xb]; // 0x578
	FVector CameraTargetOffset; // 0x5fc
	FMulticastInlineDelegate OnStartupAppearanceApplied; // 0x608
};

struct UTBP_UI_InWorldProjectionDashBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	float DistanceToPlayer; // 0x328
	bool bIsFadingOut; // 0x32c
	bool bUpdateOnScreenOffset; // 0x32d
};

struct USpectatorPawnMovement {
	char bIgnoreTimeDilation : 1; // 0x150
};

struct AARSharedWorldGameState {
	TArray<char> PreviewImageData; // 0x298
	TArray<char> ARWorldData; // 0x2a8
	int32_t PreviewImageBytesTotal; // 0x2b8
	int32_t ARWorldBytesTotal; // 0x2bc
	int32_t PreviewImageBytesDelivered; // 0x2c0
	int32_t ARWorldBytesDelivered; // 0x2c4
};

struct UAkMusicSyncCallbackInfo {
	int32_t PlayingID; // 0x30
	FAkSegmentInfo SegmentInfo; // 0x34
	EAkCallbackType MusicSyncType; // 0x58
	FString UserCueName; // 0x60
};

struct UPoseAsset {
	FPoseDataContainer PoseContainer; // 0x80
	bool bAdditivePose; // 0x110
	int32_t BasePoseIndex; // 0x114
	FName RetargetSource; // 0x118
};

struct ATigerNpcCapSpawner {
	ATigerAiSpawningCap* OwningSpawningCap; // 0x260
};

struct ATigerSpotLight {
	UTigerSpotLightComponent* SpotLightComponent; // 0x238
};

struct USubmixEffectMultibandCompressorPreset {
	FSubmixEffectMultibandCompressorSettings Settings; // 0xb0
};

struct UMovieSceneGeometryCacheTrack {
	TArray<UMovieSceneSection*> AnimationSections; // 0x80
};

struct UDirectionalLightComponent {
	float ShadowCascadeBiasDistribution; // 0x330
	char bEnableLightShaftOcclusion : 1; // 0x334
	float OcclusionMaskDarkness; // 0x338
	float OcclusionDepthRange; // 0x33c
	FVector LightShaftOverrideDirection; // 0x340
	float WholeSceneDynamicShadowRadius; // 0x34c
	float DynamicShadowDistanceMovableLight; // 0x350
	float DynamicShadowDistanceStationaryLight; // 0x354
	int32_t DynamicShadowCascades; // 0x358
	float CascadeDistributionExponent; // 0x35c
	float CascadeTransitionFraction; // 0x360
	float ShadowDistanceFadeoutFraction; // 0x364
	char bUseInsetShadowsForMovableObjects : 1; // 0x368
	int32_t FarShadowCascadeCount; // 0x36c
	float FarShadowDistance; // 0x370
	float DistanceFieldShadowDistance; // 0x374
	float LightSourceAngle; // 0x378
	float LightSourceSoftAngle; // 0x37c
	float ShadowSourceAngleFactor; // 0x380
	float TraceDistance; // 0x384
	char bUsedAsAtmosphereSunLight : 1; // 0x388
	int32_t AtmosphereSunLightIndex; // 0x38c
	FLinearColor AtmosphereSunDiskColorScale; // 0x390
	char bPerPixelAtmosphereTransmittance : 1; // 0x3a0
	char bCastShadowsOnClouds : 1; // 0x3a0
	char bCastShadowsOnAtmosphere : 1; // 0x3a0
	char bCastCloudShadows : 1; // 0x3a0
	float CloudShadowStrength; // 0x3a4
	float CloudShadowOnAtmosphereStrength; // 0x3a8
	float CloudShadowOnSurfaceStrength; // 0x3ac
	float CloudShadowDepthBias; // 0x3b0
	float CloudShadowExtent; // 0x3b4
	float CloudShadowMapResolutionScale; // 0x3b8
	float CloudShadowRaySampleCountScale; // 0x3bc
	FLinearColor CloudScatteredLuminanceScale; // 0x3c0
	FLightmassDirectionalLightSettings LightmassSettings; // 0x3d0
	char bCastModulatedShadows : 1; // 0x3e0
	FColor ModulatedShadowColor; // 0x3e4
	float ShadowAmount; // 0x3e8
};

struct UMaterialExpressionHairAttributes {
	char bUseTangentSpace : 1; // 0x40
};

struct UTigerThrallMissionDetailsUi {
	FText MissionName; // 0x260
	FText MissionObjective; // 0x278
	FText MissionStatRequirements; // 0x290
	int32_t MissionRewardXp; // 0x2a8
	FText MissionRewardItems; // 0x2b0
	int32_t MissionTurnsLeft; // 0x2c8
};

struct AWindDirectionalSource {
	UWindDirectionalSourceComponent* Component; // 0x228
};

struct UDialogueWave {
	char bMature : 1; // 0x28
	char bOverride_SubtitleOverride : 1; // 0x28
	FString SpokenText; // 0x30
	FString SubtitleOverride; // 0x40
	TArray<FDialogueContextMapping> ContextMappings; // 0x50
	FGuid LocalizationGUID; // 0x60
};

struct UTBP_ContextualHelp_HSense_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
	float RetriggerTime; // 0xf8
	FTimerHandle DelayTimer; // 0x100
};

struct AArchVisCharacter {
	FString LookUpAxisName; // 0x4b8
	FString LookUpAtRateAxisName; // 0x4c8
	FString TurnAxisName; // 0x4d8
	FString TurnAtRateAxisName; // 0x4e8
	FString MoveForwardAxisName; // 0x4f8
	FString MoveRightAxisName; // 0x508
	float MouseSensitivityScale_Pitch; // 0x518
	float MouseSensitivityScale_Yaw; // 0x51c
};

struct UTigerAiShouldUseArchDiscipline {
	float ShockwavePunchMinimumTargetDistance; // 0x98
	float EarthshockUseWithoutJumpChance; // 0x9c
	float TrapsAndScoutsUseNearLootDistance; // 0xa0
	float ScoutsRedeployChance; // 0xa4
	float RejuvenatingVoiceLowHealthPercentage; // 0xa8
};

struct UNiagaraParameterCollectionInstance {
	UNiagaraParameterCollection* Collection; // 0x28
	TArray<FNiagaraVariable> OverridenParameters; // 0x30
	FNiagaraParameterStore ParameterStorage; // 0x40
};

struct UTigerGrimoireTree {
	TArray<UTigerGrimoireCategory*> Categories; // 0x28
};

struct UGarbageCollectionSettings {
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

struct UTBP_UI_ShotgunCrosshair_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UTigerEmotePlayerComponent {
	FTigerPlayingEmote PlayingEmote; // 0xb0
	ATigerPlayer* Player; // 0xc0
};

struct ALevelBounds {
	UBoxComponent* BoxComponent; // 0x228
	bool bAutoUpdateBounds; // 0x230
};

struct UGraphNodeContextMenuContext {
	UBlueprint* Blueprint; // 0x28
	UEdGraph* Graph; // 0x30
	UEdGraphNode* Node; // 0x38
	bool bIsDebugging; // 0x48
};

struct UMaterialExpressionRuntimeVirtualTextureOutput {
	FExpressionInput BaseColor; // 0x40
	FExpressionInput Specular; // 0x54
	FExpressionInput Roughness; // 0x68
	FExpressionInput Normal; // 0x7c
	FExpressionInput WorldHeight; // 0x90
	FExpressionInput Opacity; // 0xa4
	FExpressionInput Mask; // 0xb8
};

struct UGizmoComponentHitTarget {
	UPrimitiveComponent* Component; // 0x30
};

struct UTigerWeaponMetaData_C {
	bool ShouldUseWeaponAO; // 0x28
};

struct UTigerAmmoAsset {
	ETigerWeaponAmmoType AmmoType; // 0x128
	FSlateColor AmmoColor; // 0x130
};

struct UMovieSceneTrackInstance {
	UObject* AnimatedObject; // 0x28
	bool bIsMasterTrackInstance; // 0x30
	UMovieSceneEntitySystemLinker* Linker; // 0x38
	TArray<FMovieSceneTrackInstanceInput> Inputs; // 0x40
};

struct UNiagaraDataInterfaceVector4Curve {
	FRichCurve XCurve; // 0x70
	FRichCurve YCurve; // 0xf0
	FRichCurve ZCurve; // 0x170
	FRichCurve WCurve; // 0x1f0
};

struct UBlackboardKeyType_Class {
	UObject* BaseClass; // 0x30
};

struct UTigerSimpleTextPrompt {
	FText DisplayText; // 0x280
	float PromptLifetimeFailsafe; // 0x298
	bool bIsVisible; // 0x29c
};

struct UTigerArtifactAsset {
	ETigerArtifactAbility ArtifactAbility; // 0x128
};

struct UTBP_ContextualHelp_MasqueradeBroken_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UWmfMediaSettings {
	bool AllowNonStandardCodecs; // 0x28
	bool LowLatency; // 0x29
	bool NativeAudioOut; // 0x2a
	bool HardwareAcceleratedVideoDecoding; // 0x2b
};

struct ATigerMatchGameState {
	FMulticastInlineDelegate OnPreMatchStateChanged; // 0x320
	FMulticastInlineDelegate OnMatchStateChanged; // 0x330
	FMulticastInlineDelegate OnNumberOfPlayersAttachedToBloodVeinUpdated; // 0x340
	FMulticastInlineDelegate HighTierLootLocationsChanged; // 0x350
	float NextWaveRevealGameTime; // 0x360
	float MatchTimePassed; // 0x364
	float ReplicatedMatchTimePassed; // 0x368
	int32_t NumPlayersAlive; // 0x36c
	int32_t NumGroupsAlive; // 0x370
	int32_t GroupSize; // 0x374
	int32_t NumPlayersConnected; // 0x378
	int32_t RandomizedWeatherValue; // 0x37c
	FTigerPreMatchStateInfo PreMatchState; // 0x380
	ETigerMatchState TigerMatchState; // 0x388
	EMatchBalanceMode BalanceMode; // 0x389
	FTigerMatchSettingsVariationElectedConfig MatchSettingsVariationElectedConfig; // 0x38c
	ATigerWorldMarker* EntityCheckpointMarkerClass; // 0x3b8
	char NumberOfPawnsAttachedToBloodVein; // 0x3c0
	FMulticastInlineDelegate OnSpawnMechanicReceived; // 0x3c8
	FMulticastInlineDelegate OnGameModeVariationsReceived; // 0x3d8
	UTigerSpawnMechanic* SpawnMechanicClass; // 0x3e8
	TArray<TSoftClassPtr<UObject>> ActiveHighTierLootGroups; // 0x3f0
	FText JudgeSlainText; // 0x400
	ETigerMatchType MatchType; // 0x418
	TArray<FVector2D> EntityCheckpointLocations; // 0x420
	TArray<ATigerWorldMarker*> EntityCheckpointMarkers; // 0x430
	bool bGameModeVariationSet; // 0x454
};

struct UMoviePlayerSettings {
	bool bWaitForMoviesToComplete; // 0x28
	bool bMoviesAreSkippable; // 0x29
	TArray<FString> StartupMovies; // 0x30
};

struct AOnlineBeaconHost {
	int32_t ListenPort; // 0x258
	TArray<AOnlineBeaconClient*> ClientActors; // 0x260
};

struct UMaterialBillboardComponent {
	TArray<FMaterialSpriteElement> Elements; // 0x450
};

struct UMovieSceneSkeletalAnimationSection {
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

struct UGizmoComponentAxisSource {
	USceneComponent* Component; // 0x30
	int32_t AxisIndex; // 0x38
	bool bLocalAxes; // 0x3c
};

struct UTigerCharacterCardBase {
	TWeakObjectPtr<ATigerPlayerState> RepresentedPlayer; // 0x280
};

struct UTigerPropEffectsComponent {
	UParticleSystem* Particles; // 0x4e8
	FName AttachPoint; // 0x4f0
	UParticleSystemComponent* ParticlesSystemComponent; // 0x4f8
	bool bActivateEffectOnAttach; // 0x500
};

struct UInterpTrackInstVisibility {
	EVisibilityTrackAction Action; // 0x28
	float LastUpdatePosition; // 0x2c
};

struct AVolumetricLightmapDensityVolume {
	FInt32Interval AllowedMipLevelRange; // 0x260
};

struct UTigerMatchGameModeSettings {
	TSoftObjectPtr<UDataTable> RangedWeaponsDatatable; // 0x38
	TSoftObjectPtr<UTigerBloodTrackPassiveList> BloodTrackPassiveList; // 0x60
	float HighPotenceBloodTransferTime; // 0x88
	int32_t SpawnCountdownTime; // 0x8c
	int32_t MatchStartTimeOutSeconds; // 0x90
	int32_t PlayerConnectionTimeOutSeconds; // 0x94
	int32_t PlayerConnectionMinimumWaitTimeSeconds; // 0x98
	int32_t SecondsOfNetworkInactivityAllowedBeforeForcingReady; // 0x9c
	int32_t MinPlayersToStartMatch; // 0xa0
	bool bEnableSpawnCountdown; // 0xa4
	bool bEnableWinningCondition; // 0xa5
	bool bRespawnPlayerOnDeath; // 0xa6
	bool bReturnPlayersToElysiumOnFinish; // 0xa7
	bool bRebootServerOnFinish; // 0xa8
	bool bEnableAssaults; // 0xa9
	bool bEnableGroupFill; // 0xaa
	bool bLogTickRate; // 0xab
	bool bAutoSpectateOnDeath; // 0xac
	bool bAllowSpectateNonTeamMembersInGroupMode; // 0xad
	FTigerEntityCheckpointsSettings EntityCheckpointsSettings[0x2]; // 0xb0
	FTigerRatSpawnpointSettings RatSpawnpointSettings[0x2]; // 0xd0
	FTigerSHPBSettings SHPBSettings[0x2]; // 0xe0
	FTigerHavenCapturePointSettings CapturePointSettings[0x2]; // 0x118
	FTigerBattleRoyalePlayerSpawnSettings BattleRoyalePlayerSpawnSettings; // 0x158
	FTigerPreSpawnSettings PreSpawnSettings; // 0x160
	FTigerHighTierLootSettings HighTierLootSettings; // 0x188
	float DownedRegenDuration[0x2]; // 0x1b8
	int32_t AssistDamageTreshold; // 0x1c0
	float AssistDuration; // 0x1c4
	float EnvironmentalKillStealDuration; // 0x1c8
};

struct UTigerBuffStunBatonInstance {
	UTigerBuffStunBaton* StunBatonBuff; // 0x88
	ATigerPlayer* Player; // 0xa0
};

struct UGizmoUniformScaleParameterSource {
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

struct ULandscapeSettings {
	int32_t MaxNumberOfLayers; // 0x38
};

struct UBoxReflectionCaptureComponent {
	float BoxTransitionDistance; // 0x280
	UBoxComponent* PreviewInfluenceBox; // 0x288
	UBoxComponent* PreviewCaptureBox; // 0x290
};

struct UIpNetDriver {
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

struct UTigerShacklesConfig {
	UMaterialInterface* ShacklesAimingDecal; // 0x160
	float MaxRange; // 0x168
	float ShacklesAoeSize; // 0x16c
	float ExplosionDepth; // 0x170
	TArray<float> ExplosionDamage; // 0x178
	ATigerShacklesMine* ShackleMine; // 0x188
	float MineLifeTime; // 0x190
	float DelayBeforeShackleActivation; // 0x194
	FName CastAnimationName; // 0x198
};

struct UParticleModuleAttractorPointGravity {
	FVector Position; // 0x30
	float Radius; // 0x3c
	UDistributionFloat* Strength; // 0x40
	FRawDistributionFloat StrengthRaw; // 0x48
};

struct UMaterialExpressionStaticSwitch {
	char DefaultValue : 1; // 0x40
	FExpressionInput A; // 0x44
	FExpressionInput B; // 0x58
	FExpressionInput Value; // 0x6c
};

struct UCircularThrobber {
	int32_t NumberOfPieces; // 0x108
	float Period; // 0x10c
	float Radius; // 0x110
	USlateBrushAsset* PieceImage; // 0x118
	FSlateBrush Image; // 0x120
	bool bEnableRadius; // 0x1a8
};

struct UMovieSceneSubSection {
	FMovieSceneSectionParameters Parameters; // 0xe8
	float StartOffset; // 0x10c
	float TimeScale; // 0x110
	float PrerollTime; // 0x114
	UMovieSceneSequence* SubSequence; // 0x118
	LazyObjectProperty ActorToRecord; // 0x120
	FString TargetSequenceName; // 0x140
	FDirectoryPath TargetPathToRecordTo; // 0x150
};

struct UAnimSharingInstance {
	TArray<AActor*> RegisteredActors; // 0x28
	UAnimationSharingStateProcessor* StateProcessor; // 0x88
	TArray<UAnimSequence*> UsedAnimationSequences; // 0xc8
	UEnum* StateEnum; // 0xe8
	AActor* SharingActor; // 0xf0
};

struct AServerStatReplicator {
	bool bUpdateStatNet; // 0x228
	bool bOverwriteClientStats; // 0x229
	uint32_t Channels; // 0x22c
	uint32_t InRate; // 0x230
	uint32_t OutRate; // 0x234
	uint32_t MaxPacketOverhead; // 0x23c
	uint32_t InRateClientMax; // 0x240
	uint32_t InRateClientMin; // 0x244
	uint32_t InRateClientAvg; // 0x248
	uint32_t InPacketsClientMax; // 0x24c
	uint32_t InPacketsClientMin; // 0x250
	uint32_t InPacketsClientAvg; // 0x254
	uint32_t OutRateClientMax; // 0x258
	uint32_t OutRateClientMin; // 0x25c
	uint32_t OutRateClientAvg; // 0x260
	uint32_t OutPacketsClientMax; // 0x264
	uint32_t OutPacketsClientMin; // 0x268
	uint32_t OutPacketsClientAvg; // 0x26c
	uint32_t NetNumClients; // 0x270
	uint32_t InPackets; // 0x274
	uint32_t OutPackets; // 0x278
	uint32_t InBunches; // 0x27c
	uint32_t OutBunches; // 0x280
	uint32_t OutLoss; // 0x284
	uint32_t InLoss; // 0x288
	uint32_t VoiceBytesSent; // 0x28c
	uint32_t VoiceBytesRecv; // 0x290
	uint32_t VoicePacketsSent; // 0x294
	uint32_t VoicePacketsRecv; // 0x298
	uint32_t PercentInVoice; // 0x29c
	uint32_t PercentOutVoice; // 0x2a0
	uint32_t NumActorChannels; // 0x2a4
	uint32_t NumConsideredActors; // 0x2a8
	uint32_t PrioritizedActors; // 0x2ac
	uint32_t NumRelevantActors; // 0x2b0
	uint32_t NumRelevantDeletedActors; // 0x2b4
	uint32_t NumReplicatedActorAttempts; // 0x2b8
	uint32_t NumReplicatedActors; // 0x2bc
	uint32_t NumActors; // 0x2c0
	uint32_t NumNetActors; // 0x2c4
	uint32_t NumDormantActors; // 0x2c8
	uint32_t NumInitiallyDormantActors; // 0x2cc
	uint32_t NumNetGUIDsAckd; // 0x2d0
	uint32_t NumNetGUIDsPending; // 0x2d4
	uint32_t NumNetGUIDsUnAckd; // 0x2d8
	uint32_t ObjPathBytes; // 0x2dc
	uint32_t NetGUIDOutRate; // 0x2e0
	uint32_t NetGUIDInRate; // 0x2e4
	uint32_t NetSaturated; // 0x2e8
};

struct USynthComponent {
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

struct UTigerFaceCurvesAnimationMap {
	TMap<FName, UAnimSequence*> CurveAnimations; // 0x28
	TMap<FName, UAnimMontage*> FaceMontages; // 0x78
};

struct UInAppPurchaseQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UMaterialExpressionLandscapeVisibilityMask {
	FGuid ExpressionGUID; // 0x40
};

struct UVideoCaptureProtocol {
	bool bUseCompression; // 0x68
	float CompressionQuality; // 0x6c
};

struct UNavigationSystemV1 {
	ANavigationData* MainNavData; // 0x28
	ANavigationData* AbstractNavData; // 0x30
	FName DefaultAgentName; // 0x3c
	TSoftClassPtr<UObject> CrowdManagerClass; // 0x48
	char bAutoCreateNavigationData : 1; // 0x70
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x70
	char bAllowClientSideNavigation : 1; // 0x70
	char bShouldDiscardSubLevelNavData : 1; // 0x70
	char bTickWhilePaused : 1; // 0x70
	char bSupportRebuilding : 1; // 0x70
	char bInitialBuildingLocked : 1; // 0x70
	char bSkipAgentHeightCheckWhenPickingNavData : 1; // 0x71
	char bGenerateNavigationOnlyAroundNavigationInvokers : 1; // 0x71
	float ActiveTilesUpdateInterval; // 0x74
	ENavDataGatheringModeConfig DataGatheringMode; // 0x78
	float DirtyAreaWarningSizeThreshold; // 0x7c
	TArray<FNavDataConfig> SupportedAgents; // 0x80
	FNavAgentSelector SupportedAgentsMask; // 0x90
	TArray<ANavigationData*> NavDataSet; // 0x98
	TArray<ANavigationData*> NavDataRegistrationQueue; // 0xa8
	FMulticastInlineDelegate OnNavDataRegisteredEvent; // 0xc8
	FMulticastInlineDelegate OnNavigationGenerationFinishedDelegate; // 0xd8
	FNavigationSystemRunMode OperationMode; // 0x1c4
	float DirtyAreasUpdateFreq; // 0x1604
};

struct UTBP_UI_HorizontalFadeSlot_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UImage* Background; // 0x268
	UImage* LeftFade; // 0x270
	UNamedSlot* NamedSlot_1; // 0x278
	UImage* RightFade; // 0x280
	float LeftFadeWidth; // 0x288
	float RightFadeWidth; // 0x28c
};

struct UTigerLaceratingThrowConfig {
	ATigerLaceratingThrowProjectile* KnifeActor; // 0x170
	TArray<UTigerBuff*> BuffToApplyOnHit; // 0x178
	float ProjectileSpeed; // 0x188
	float DamageOnHit; // 0x18c
	float Reach; // 0x190
	FText SlowText; // 0x198
	FText SlowSuffix; // 0x1b0
};

struct UTBP_VanishBuff_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x268
};

struct UVRNotificationsComponent {
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

struct UMyPluginObject {
	FMyPluginStruct MyStruct; // 0x28
};

struct UPathFollowingComponent {
	UNavMovementComponent* MovementComp; // 0xe8
	ANavigationData* MyNavData; // 0xf8
};

struct ASplineMeshActor {
	USplineMeshComponent* SplineMeshComponent; // 0x228
};

struct UTigerBufferedAction {
	ATigerPlayerController* OwnerPlayerController; // 0x28
	UTigerActionBuffer* OwnerActionBuffer; // 0x30
};

struct APaperTileMapActor {
	UPaperTileMapComponent* RenderComponent; // 0x228
};

struct UMovieScene3DConstraintTrack {
	TArray<UMovieSceneSection*> ConstraintSections; // 0x78
};

struct UTigerGrimoireSeasonData {
	int32_t SeasonId; // 0x30
	FDateTime StartDate; // 0x38
	FDateTime EndDate; // 0x40
	TArray<UTigerGrimoireEntry*> Entries; // 0x48
};

struct UTigerTraversalLedgeGrabState {
	UTigerTraversalStateLedgeGrabConfig* LedgeGrabConfig; // 0x40
};

struct UHierarchicalInstancedStaticMeshComponent {
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

struct UTBP_ChatComponent_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xe8
	UUserWidget* ChatWindow; // 0xf0
	bool bPreventMessages; // 0xf8
	bool bIsSoloMatch; // 0xf9
};

struct UTigerSplatmapSettings {
	bool bRenderSplatmap; // 0x38
	TSoftObjectPtr<UTexture2D> DefaultStamp; // 0x40
	float TimeBetweenAutoExportInSeconds; // 0x68
	bool bUseCtrlToDraw; // 0x6c
	TSoftObjectPtr<UMaterialInterface> DrawMaterialMaster; // 0x70
	FName DrawMaterialTextureParamName; // 0x98
};

struct AProceduralFoliageVolume {
	UProceduralFoliageComponent* ProceduralComponent; // 0x260
};

struct UParticleModuleLocationPrimitiveCylinder {
	char RadialVelocity : 1; // 0xb0
	FRawDistributionFloat StartRadius; // 0xb8
	FRawDistributionFloat StartHeight; // 0xe8
	CylinderHeightAxis HeightAxis; // 0x118
};

struct UTigerAIPlayAnimationTask {
	UAnimMontage* AnimationToPlay; // 0x70
	FBlackboardKeySelector ContextualActionPointKey; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0xa0
};

struct UTigerDisciplineComponent {
	UTigerDisciplineConfigs* DisciplineConfigs; // 0xb0
	USoundBase* DisciplineFailSound; // 0xb8
	FMulticastInlineDelegate OnDisciplineUsedDelegate; // 0xc0
	FMulticastInlineDelegate OnActivatedDisciplineDelegate; // 0xd0
	FMulticastInlineDelegate OnDeactivatedDisciplineDelegate; // 0xe0
	FMulticastInlineDelegate OnDisciplineUnlocked; // 0xf0
	FTigerScouterCharacterData ScouterCharacterData; // 0x100
	UTigerBuffShackles* PrimaryShacklesBuff; // 0x130
	UTigerBuff* SecondaryShacklesBuff; // 0x138
	float WeaponRarityDamageMultipliers[0x5]; // 0x140
	ATigerPlayer* Player; // 0x158
	TMap<ETigerDisciplinesEnum, UTigerDisciplineBase*> Disciplines; // 0x1e8
};

struct UHapticFeedbackEffect_Buffer {
	TArray<char> Amplitudes; // 0x28
	int32_t SampleRate; // 0x38
};

struct UARTrackedImage {
	UARCandidateImage* DetectedImage; // 0xf8
	FVector2D EstimatedSize; // 0x100
};

struct UStereoLayerComponent {
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

struct UTigerPassiveEnragedLogic {
	UTigerPassiveEnragedConfig* Config; // 0xc0
	ATigerEnragedEffectActor* EffectActor; // 0xc8
};

struct UMovieSceneActorReferenceSection {
	FMovieSceneActorReferenceData ActorReferenceData; // 0xe8
	FIntegralCurve ActorGuidIndexCurve; // 0x198
	TArray<FString> ActorGuidStrings; // 0x218
};

struct UTBP_UI_LoadingScreen_Simple_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298
	UWidgetAnimation* MoveText; // 0x2a0
	UWidgetAnimation* FadeOutAnimation; // 0x2a8
	UWidgetAnimation* FadeInAnimation; // 0x2b0
	UImage* BackgroundWidget; // 0x2b8
	UTigerStyledRichTextBlock* DestinationText; // 0x2c0
	UImage* Image_119; // 0x2c8
	UTextBlock* LoadingScreenWarning; // 0x2d0
	UTextBlock* MovingTextAnim; // 0x2d8
	UCanvasPanel* RootLayout; // 0x2e0
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2e8
	UTBP_UI_Gradient_C* TBP_UI_Gradient; // 0x2f0
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2f8
	UTextBlock* TickMovingText; // 0x300
	UTigerSafeZoneWidget* TigerSafeZoneWidget_9; // 0x308
	UTigerStyledRichTextBlock* TipDescriptionText; // 0x310
	UTigerStyledRichTextBlock* TipTitleText; // 0x318
	int32_t PlayngId; // 0x320
	float DebugPingPongSign; // 0x324
	UTBP_LoadingToolTip_C* LoadingTipsAsset; // 0x328
	int32_t LastLoadingTipUpdatedTime; // 0x330
};

struct UInAppPurchaseRestoreCallbackProxy2 {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UAnimSequenceBase {
	TArray<FAnimNotifyEvent> Notifies; // 0x80
	float SequenceLength; // 0x90
	float RateScale; // 0x94
	FRawCurveTracks RawCurveData; // 0x98
};

struct UTBP_ContextualHelp_Tutorial_Feed_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UTigerMajestyConfig {
	UAnimMontage* Montage; // 0x160
	float ApplyEffectTime; // 0x168
	FText CharmDurationText; // 0x170
	FText CharmDurationSuffix; // 0x188
	TArray<UTigerMajestyBuff*> CharmedBuff; // 0x1a0
	bool bDoFacingCheckOnNPCs; // 0x1b0
	bool bIsEntityImmune; // 0x1b1
	bool bRequireLineOfSight; // 0x1b2
	float Radius; // 0x1b4
	float FacingAllowedYawDifference; // 0x1b8
	bool bDebugDraw; // 0x1bc
};

struct UMaterialExpressionSkyAtmosphereLightDiskLuminance {
	int32_t LightIndex; // 0x40
};

struct AVectorFieldVolume {
	UVectorFieldComponent* VectorFieldComponent; // 0x228
};

struct UDA_WeatherScenario_C {
	float WindStrength; // 0x38
	float WindSpeed; // 0x3c
	float RainRate; // 0x40
	float PuddlesAmount; // 0x44
	float PuddlesRingsIntensity; // 0x48
	float PuddlesWindTiling; // 0x4c
	float AIPerception; // 0x50
	float RainAudioMin; // 0x54
	float ThunderAudioMin; // 0x58
	float WindAudioMin; // 0x5c
	int32_t ExponensialHeightFog; // 0x60
	float RainAudioMax; // 0x64
	float ThunderAudioMax; // 0x68
	float WindAudioMax; // 0x6c
};

struct UTigerChallengeVisitLocation {
	TSoftObjectPtr<ATigerVisitLocationTriggerVolume> TriggerVolume; // 0xb0
};

struct UGameSessionSettings {
	int32_t MaxSpectators; // 0x28
	int32_t MaxPlayers; // 0x2c
	char bRequiresPushToTalk : 1; // 0x30
};

struct ATBP_BestialTrailVisualizer_DebugLines_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x240
	USceneComponent* DefaultSceneRoot; // 0x248
	FTigerPlayerSavedLocation PreviousPoint; // 0x250
	FTigerPlayerSavedLocation SecondLocation; // 0x260
	UTigerNosferatuPassiveBestialConfig* Config; // 0x270
	UTBP_BestialTrailPart_SplineMesh_C* Latest Part; // 0x278
	int32_t Number of Received Points; // 0x280
	UNiagaraComponent* NewVar_1; // 0x288
	FVector 3rdPos; // 0x290
	UNiagaraComponent* PreviousNiagaraBeam; // 0x2a0
	float PreviousSpawnTime; // 0x2a8
	float PreviousPointNumber; // 0x2ac
	FSoftObjectPath NiagaraPath; // 0x2b0
	UTBP_AnAcquiredTaste_C* Passive Component; // 0x2c8
};

struct UTigerFeedingAnimationAsset {
	FTigerFeedingDataByGender FeedingDataByClan[0x4]; // 0x30
};

struct UTBP_UI_TransitionWidget_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298
	UNamedSlot* Content; // 0x2a0
	UTBP_UI_TransitionRetainerBox_C* TransitionRetainerBox; // 0x2a8
};

struct UTigerSessionSeeker {
	FMulticastInlineDelegate OnSessionFound; // 0x28
	FMulticastInlineDelegate OnCouldNotFindSession; // 0x38
	FMulticastInlineDelegate OnJoiningSession; // 0x48
	FMulticastInlineDelegate OnCouldNotJoinSession; // 0x58
	UObject* WorldContextObject; // 0x68
	UTigerGameInstance* GameInstance; // 0x70
	ATigerPlayerController* PlayerController; // 0x78
	FTigerBpFindSessionSelectedSession SelectedSession; // 0x80
	ETigerSessionSearchStatus Status; // 0x190
};

struct UInterpTrackInstLinearColorProp {
	FLinearColor ResetColor; // 0x58
};

struct ATigerLootBox {
	ATigerItemWorldRepresentation* PickupItemClass; // 0x288
	UAkAudioEvent* StartInteractSound; // 0x290
	UAkAudioEvent* StopInteractSound; // 0x298
	ETigerItemRarity CurrentHighestRarity; // 0x2a0
	TArray<FTigerItemData> ItemList; // 0x2a8
	bool bWasSpawnedOnPlayerDeath; // 0x2b8
	bool bHasBeenPreviouslyOpened; // 0x2b9
	TWeakObjectPtr<ATigerPlayerController> CurrentInteractingPlayerController; // 0x2bc
	UBoxComponent* CancelInteractionVolume; // 0x2c8
	ETigerTelemetryItemSourceID TelemetrySourceID; // 0x2e8
};

struct USoundEffectSourcePresetChain {
	TArray<FSourceEffectChainEntry> Chain; // 0x28
	char bPlayEffectChainTails : 1; // 0x38
};

struct UTigerAIPlayerSlideIfPossibleTask {
	float MinimumSlideDistanceSqrd; // 0x70
	ATigerLocalAIController* LocalAIController; // 0x78
	ATigerPlayerController* PlayerController; // 0x80
	ATigerPlayer* CurrentPawn; // 0x88
	UTigerCharacterMovementComponent* PlayerMovementComponent; // 0x90
	UTigerTraversalSlideState* SlideState; // 0x98
};

struct ATigerEntityCheckpoint {
	ATigerBaseNPC* EntityLeader; // 0x288
	AActor* SupplyDropLocation; // 0x290
	UTigerSupplyDropConsumableAsset* SupplyDropConsumable; // 0x298
	UActorComponent* SupplyDropComponent; // 0x2a0
	bool bIsAcknowledged; // 0x2a8
};

struct UTigerNotificationsUI {
	float HolyIncenseImminentTime; // 0x280
};

struct UTigerRichTextBlockDecorator {
	bool bReveal; // 0x28
	int32_t RevealedIndex; // 0x2c
};

struct UMaterialExpressionConstant {
	float R; // 0x40
};

struct UTigerPassiveUnbridledRageConfig {
	float MinimumLoudnessMultiplier; // 0x118
	float MaximumLoudnessMultiplier; // 0x11c
};

struct UCloudStorageBase {
	TArray<FString> LocalCloudFiles; // 0x38
	char bSuppressDelegateCalls : 1; // 0x48
};

struct UInputAxisDelegateBinding {
	TArray<FBlueprintInputAxisDelegateBinding> InputAxisDelegateBindings; // 0x28
};

struct UMovieScene3DConstraintSection {
	FGuid ConstraintId; // 0xe8
	FMovieSceneObjectBindingID ConstraintBindingID; // 0xf8
};

struct UStaticPiercingPhysics {
	TArray<FStaticPhysicsPiercingData> SimulatedPhysicsStaticPiercings; // 0x28
};

struct UMaterialExpressionFresnel {
	FExpressionInput ExponentIn; // 0x40
	float Exponent; // 0x54
	FExpressionInput BaseReflectFractionIn; // 0x58
	float BaseReflectFraction; // 0x6c
	FExpressionInput Normal; // 0x70
};

struct UAkCheckBox {
	ECheckBoxState CheckedState; // 0x4b8
	FDelegate CheckedStateDelegate; // 0x4bc
	FCheckBoxStyle WidgetStyle; // 0x4d0
	EHorizontalAlignment HorizontalAlignment; // 0xa50
	bool IsFocusable; // 0xa51
	FAkBoolPropertyToControl ThePropertyToControl; // 0xa58
	FAkWwiseItemToControl ItemToControl; // 0xa68
	FMulticastInlineDelegate AkOnCheckStateChanged; // 0xaa8
	FMulticastInlineDelegate OnItemDropped; // 0xab8
	FMulticastInlineDelegate OnPropertyDropped; // 0xac8
};

struct UTigerContextualHelpComponent {
	ATigerPlayerController* TigerPlayerController; // 0xb0
	UTigerContextualHelpUI* ContextualHelpUI; // 0xb8
	TArray<FTigerCurrentContextualHelp> ActiveContextualHelps; // 0xc0
	TArray<UTigerContextualHelp*> ContextualHelpCandidates; // 0xd0
	TArray<TSoftClassPtr<UObject>> ContextualHelpTypes; // 0xe0
	float CooldownTime; // 0xf0
	float MinimumDisplayTime; // 0xf4
};

struct UTBP_UI_GroupInvitationList_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UWidgetSwitcher* InvitationQueue; // 0x298
	UTBP_TigerGameInstance_C* GameInstance; // 0x2a0
};

struct UAkSwitchInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithCommSelection CommunicationSettings; // 0x90
	FAkAdvancedInitializationSettingsWithMultiCoreRendering AdvancedSettings; // 0xb8
};

struct UNavigationSystemModuleConfig {
	char bStrictlyStatic : 1; // 0x50
	char bCreateOnClient : 1; // 0x50
	char bAutoSpawnMissingNavData : 1; // 0x50
	char bSpawnNavDataInNavBoundsLevel : 1; // 0x50
};

struct UGeometryCollection {
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

struct UTigerWeaponAbilityReflect {
	UTigerReflectConfig* Config; // 0x88
	ATigerPlayer* Player; // 0x90
	AActor* ReflectorActor; // 0x98
};

struct ATBP_PoisonProjectile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x3e0
};

struct ATemplateSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x230
	UTemplateSequencePlayer* SequencePlayer; // 0x248
	FSoftObjectPath TemplateSequence; // 0x250
	FTemplateSequenceBindingOverrideData BindingOverride; // 0x268
};

struct UTigerTraversalStateSlideJumpConfig {
	float JumpCoolDownTime; // 0x50
	float PostJumpClimbInteractionDelay; // 0x54
	float SlideHorizontalDirectionInfluenceThreshold; // 0x58
	float SlideJumpDecayRecoverySpeed; // 0x5c
	UCurveFloat* JumpZVelocityOverSlideSpeed; // 0x60
	UCurveFloat* SlideJumpHorizontalMultiplierOverVelocity; // 0x68
	UCurveFloat* SlideJumpDecayCurve; // 0x70
};

struct UShOnlineServerSettings {
	FString ServerSecretDev; // 0x38
	FString ServerSecretUat; // 0x48
	FString ServerSecretProd; // 0x58
	FString ServerSecretLocal; // 0x68
};

struct UTigerCustomMontageListMeleeWeapon {
	TMap<UTigerMeleeWeapon*, UAnimMontage*> Montages; // 0x28
};

struct UTBP_UI_Crosshair_AutoLong_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct USoundNodeDistanceCrossFade {
	TArray<FDistanceDatum> CrossFadeInput; // 0x48
};

struct USteamNetConnection {
	bool bIsPassthrough; // 0x1b90
};

struct USoundNodeOscillator {
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

struct UAkAssetBase {
	UAkAssetPlatformData* PlatformAssetData; // 0x40
};

struct UMaterialExpressionPower {
	FExpressionInput Base; // 0x40
	FExpressionInput Exponent; // 0x54
	float ConstExponent; // 0x68
};

struct UTigerClientRewardTrackMasteryChallenges {
	TArray<FTigerChallengeInstanceID> ChallengeInstanceIDs; // 0x48
	TArray<FTigerItemId> RewardIdForSpecificChallenge; // 0x58
};

struct UAvoidanceManager {
	float DefaultTimeToLive; // 0x30
	float LockTimeAfterAvoid; // 0x34
	float LockTimeAfterClean; // 0x38
	float DeltaTimeToPredict; // 0x3c
	float ArtificialRadiusExpansion; // 0x40
	float TestHeightDifference; // 0x44
	float HeightCheckMargin; // 0x48
};

struct UDatasmithCineCameraActorTemplate {
	FDatasmithCameraLookatTrackingSettingsTemplate LookatTrackingSettings; // 0x30
};

struct UTigerDeathScreen {
	TMap<ETigerKillerType, FText> KillerTypeNames; // 0x298
};

struct UTigerLocalThrallMissionData {
	FMulticastInlineDelegate OnMissionProgression; // 0x28
	FMulticastInlineDelegate OnMissionComplete; // 0x38
	UTigerThrallMission* BaseMissionData; // 0x48
	UTigerThrallSystem* ThrallSystem; // 0x50
	FTigerPersistentMissionData PersistentMissionData; // 0x58
};

struct UMovementComponent {
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

struct UEditableGameplayTagQueryExpression_AllTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct UTBP_UI_FindGameFailedMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x298
	UTBP_UI_MenuButton_C* TBP_UI_MenuButton; // 0x2a0
	UTBP_UI_MenuButton_C* TBP_UI_MenuButton_C_1; // 0x2a8
	UThrobber* Throbber_1; // 0x2b0
	UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2b8
	TArray<FBlueprintSessionResult> FoundSessions; // 0x2c0
	bool SessionFound?; // 0x2d0
	FBlueprintSessionResult AvailableSession; // 0x2d8
	bool SearchButtonEnabled?; // 0x3e0
	ESlateVisibility ThrobberVisibility; // 0x3e1
	ESlateVisibility ButtonVisibility; // 0x3e2
};

struct UTigerDialogueCondition_Outfit {
	ETigerDialogueOutfitRequirementSpecifier OutfitRequirement; // 0x30
	ETigerClan Clan; // 0x31
	ETigerGender Gender; // 0x32
	FString OutfitAssetName; // 0x38
};

struct ATigerActivatedObject {
	UStaticMeshComponent* BaseMesh; // 0x240
	UAkAudioEvent* ActivationAudioEvent; // 0x248
	bool bActivationAudioShouldPlay; // 0x250
	bool bTriggerOnlyOnPlayers; // 0x251
	bool bUseAudioActivationRadius; // 0x252
	float ActivationRadius; // 0x254
	float AudioFadeOutDuration; // 0x258
	TWeakObjectPtr<UShapeComponent> WeakCharacterTrigger; // 0x25c
};

struct UTigerPartyInvite {
	FTigerInviteId ID; // 0x28
	FTigerPersistentPlayerID HostId; // 0x38
	FString HostDisplayName; // 0x48
};

struct UParticleModuleVelocityCone {
	FRawDistributionFloat Angle; // 0x38
	FRawDistributionFloat Velocity; // 0x68
	FVector Direction; // 0x98
};

struct UTigerTraversalStateLedgeGrabConfig {
	FName LedgeGrabAnimationName; // 0x50
	FName FallbackLedgeGrabAnimationName; // 0x58
	FVector LedgeGrabUpperBodyVolumeExtent; // 0x60
	FVector LedgeGrabClearanceCheckExtent; // 0x6c
	FVector LedgeGrabUpperBodyVolumeCheckPosition; // 0x78
	float AnimationBlendoutStartDelay; // 0x84
	float LedgeGrabAnimationTriggerMaxDistance; // 0x88
	float MaximumLedgeWallHeight; // 0x8c
	float MaximumLedgeOverHangDepth; // 0x90
	float LedgeGrabUpperBodyVolumeForwardOffset; // 0x94
	float LedgeGrabMaximumCameraAngleDifference; // 0x98
	float LedgeGrabForwardSearchDepth; // 0x9c
	float LedgeGrabBackwardSearchDepth; // 0xa0
	float LedgeGrabPositionSweepRadius; // 0xa4
	float LedgeGrabPositionHorizontalEdgeOffset; // 0xa8
	float LedgeGrabPositionVerticalOffset; // 0xac
	float StartingRotationSpeedForBringingCharacterBackToCameraFacing; // 0xb0
	float RotationSpeedGainPerSecond; // 0xb4
	float MaxTimeToFixCharacterRotation; // 0xb8
	bool bShouldAdjustLedgeGrabAnimationPlayRate; // 0xbc
	bool bShouldUseExitLedgeGrabRotationInterpolation; // 0xbd
};

struct UTigerWeaponAnimInstance {
	bool bShowWeaponTrails; // 0x2b8
};

struct UARQRCodeComponent {
	FARQRCodeUpdatePayload ReplicatedPayload; // 0x280
};

struct ATigerItemCluster {
	ATigerItemWorldRepresentation* ItemActorClass; // 0x228
	FItemClusterArray Items; // 0x230
	TArray<ATigerItemWorldRepresentation*> ItemActors; // 0x350
};

struct UDatasmithPointLightComponentTemplate {
	ELightUnits IntensityUnits; // 0x30
	float SourceRadius; // 0x34
	float SourceLength; // 0x38
	float AttenuationRadius; // 0x3c
};

struct ARuntimeVirtualTextureVolume {
	URuntimeVirtualTextureComponent* VirtualTextureComponent; // 0x228
};

struct UBasicReplicationGraph {
	UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x498
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4a0
	TArray<FConnectionAlwaysRelevantNodePair> AlwaysRelevantForConnectionList; // 0x4a8
	TArray<AActor*> ActorsWithoutNetConnection; // 0x4b8
};

struct UTBP_ArchetypeSelect_SkillsSummary_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UButton* ArchetpeSkill_Button; // 0x288
	UTigerStyledRichTextBlock* ArchetypeName; // 0x290
	UImage* ArchetypeSkill_Arrow; // 0x298
	UImage* ArchetypeSkill_BG; // 0x2a0
	UImage* ArchetypeSkill_Icon; // 0x2a8
	UImage* ArchetypeSkill_Outline; // 0x2b0
	UTigerStyledRichTextBlock* ArchetypeTag; // 0x2b8
	UImage* MoveSkill_Arrow; // 0x2c0
	UImage* MoveSkill_BG; // 0x2c8
	UButton* MoveSkill_Button; // 0x2d0
	UImage* MoveSkill_Icon; // 0x2d8
	UImage* MoveSkill_Outline; // 0x2e0
	UImage* PassiveSkill_Arrow; // 0x2e8
	UImage* PassiveSkill_BG; // 0x2f0
	UButton* PassiveSkill_Button; // 0x2f8
	UImage* PassiveSkill_Icon; // 0x300
	UImage* PassiveSkill_Outline; // 0x308
	UImage* PlayVideoIcon; // 0x310
	UTigerStyledRichTextBlock* PowerDescription; // 0x318
	UTigerStyledRichTextBlock* PowerName; // 0x320
	UTigerStyledRichTextBlock* PowerType_Text; // 0x328
	UTBP_UI_InputPromptCombined_C* Prompt_ViewVideo; // 0x330
	UHorizontalBox* PromptBox; // 0x338
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x340
	UTBP_UI_MaskedCardBorder_C* TBP_UI_MaskedCardBorder_C_1; // 0x348
	UImage* TextBG; // 0x350
	UButton* VideoButton; // 0x358
	UTBP_DisciplineConfigs_C* ArchetypeCONFIG; // 0x360
	int32_t SelectedPower; // 0x368
	UTigerPowerKit* Selected Archetype; // 0x370
	TArray<UImage*> Skill Icons; // 0x378
	TArray<UImage*> Outlines; // 0x388
	FMulticastInlineDelegate Clicked_MoveSkill; // 0x398
	FMulticastInlineDelegate Clicked_PassiveSkill; // 0x3a8
	FMulticastInlineDelegate Clicked_ArchetypeSkill; // 0x3b8
	FMulticastInlineDelegate Hovered_MoveSkill; // 0x3c8
	FMulticastInlineDelegate Hovered_PassiveSkill; // 0x3d8
	FMulticastInlineDelegate Hovered_ArchetypeSkill; // 0x3e8
	FText Powers Header Text; // 0x3f8
	TArray<UImage*> Backgrounds; // 0x410
	TArray<UImage*> Arrows; // 0x420
};

struct AMaterialInstanceActor {
	TArray<AActor*> TargetActors; // 0x228
};

struct UTigerPassiveNightstalkerLogic {
	UTigerPassiveNightstalkerConfig* Config; // 0x158
};

struct UEngine {
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

struct UEnvQueryOption {
	UEnvQueryGenerator* Generator; // 0x28
	TArray<UEnvQueryTest*> Tests; // 0x30
};

struct ULevelCapture {
	bool bAutoStartCapture; // 0x220
	FGuid PrerequisiteActorId; // 0x22c
};

struct UWrapBoxSlot {
	FMargin Padding; // 0x38
	bool bFillEmptySpace; // 0x48
	float FillSpanWhenLessThan; // 0x4c
	EHorizontalAlignment HorizontalAlignment; // 0x50
	EVerticalAlignment VerticalAlignment; // 0x51
};

struct USourceEffectBitCrusherPreset {
	FSourceEffectBitCrusherSettings Settings; // 0xc0
};

struct UBTComposite_SimpleParallel {
	EBTParallelMode FinishMode; // 0x90
};

struct UBTTask_MakeNoise {
	float Loudnes; // 0x70
};

struct ATigerItemWorldRepresentation {
	UTigerCompassMarkerWidget* CompassMarker; // 0x230
	UTigerItemAsset* ItemType; // 0x240
	UDataTable* RangedWeaponsDatatable; // 0x248
	int32_t ItemCount; // 0x268
	UStaticMeshComponent* Mesh; // 0x270
	ATigerItemCluster* ItemCluster; // 0x278
	ATigerLootSpawner* LootSpawner; // 0x280
	uint32_t ItemClusterUID; // 0x288
	ETigerTelemetryItemSourceID ItemSourceID; // 0x28c
};

struct UEditableTextBoxWidgetStyle {
	FEditableTextBoxStyle EditableTextBoxStyle; // 0x30
};

struct UChaosPhysicalMaterial {
	float Friction; // 0x28
	float StaticFriction; // 0x2c
	float Restitution; // 0x30
	float LinearEtherDrag; // 0x34
	float AngularEtherDrag; // 0x38
	float SleepingLinearVelocityThreshold; // 0x3c
	float SleepingAngularVelocityThreshold; // 0x40
};

struct UTigerGrimoireUi {
	bool bNotificationIdsSetup; // 0x3b0
	ATigerModelViewerItem* GrimoireItem; // 0x3b8
	ATigerGrimoireCard* GrimoireCard; // 0x3c0
	AActor* ModelCam; // 0x3c8
	AActor* CloseModelCam; // 0x3d0
	FName ItemRotationNodeTag; // 0x3d8
	FName CloseViewerCamName; // 0x3e0
	FName ViewerCamName; // 0x3e8
	FName ExaminablePropsLevelName; // 0x3f0
	AActor* ItemRotationNode; // 0x3f8
	FName LightingSubLevelName; // 0x400
};

struct UTigerTrapsConfig {
	UAkAudioEvent* ThrowAudioEvent; // 0x170
	UAkAudioEvent* LandAudioEvent; // 0x178
	UAkAudioEvent* ArmingAudioEvent; // 0x180
	UAkAudioEvent* ExplosionAudioEvent; // 0x188
	UAkAudioEvent* FizzleAudioEvent; // 0x190
	UAkAudioEvent* StartGasAudioEvent; // 0x198
	UAkAudioEvent* StopGasAudioEvent; // 0x1a0
	UCurveFloat* PitchCurve; // 0x1a8
	UCurveFloat* EmissiveCurve; // 0x1b0
	float EmissiveCurveLoopTime; // 0x1b8
	FLinearColor AllyStatusColor; // 0x1bc
	FLinearColor EnemyStatusColor; // 0x1cc
	float MaxEmissiveBoost; // 0x1dc
	UMaterialInterface* DecalMaterial; // 0x1e0
	UAnimMontage* AimMontage; // 0x1e8
	FName AimTrapSpawnSocket; // 0x1f0
	AActor* AimTrapType; // 0x1f8
	ATigerTrap* TrapType; // 0x200
	TArray<UTigerBuff*> GasBuff; // 0x208
	TArray<int32_t> MaxTrapsActive; // 0x218
	FVector SpawnOffset; // 0x228
	float TerminalVelocity; // 0x234
	float GravitationalPull; // 0x238
	float AirFriction; // 0x23c
	float ThrowForce; // 0x240
	float ThrowMaxForce; // 0x244
	float ThrowPlayerVelocityForceScale; // 0x248
	float ThrowPitchOffset; // 0x24c
	float ThrowMinPitch; // 0x250
	float ThrowMaxPitch; // 0x254
	float LifeTime; // 0x258
	float TriggerDelay; // 0x25c
	float ReleaseDelay; // 0x260
	float DecalFadeDuration; // 0x264
	float ArmingDuration; // 0x268
	TArray<float> GasDuration; // 0x270
	TArray<float> TriggerRadius; // 0x280
	TArray<float> ExplosionRadius; // 0x290
	TArray<float> GasRadius; // 0x2a0
	float DecalTriggerRadiusScale; // 0x2b0
	TArray<float> AreaEffectScale; // 0x2b8
	TArray<float> ExplosionEffectScale; // 0x2c8
	TArray<float> GasEffectScale; // 0x2d8
	TArray<float> ExplosionDamage; // 0x2e8
	bool bHostileNpcTriggersTrap; // 0x2f8
	bool bAllyAreaVisible; // 0x2f9
	bool bAllyImmunityExplosion; // 0x2fa
	bool bAllyImmunityGas; // 0x2fb
	bool bClearGasBuffOnExit; // 0x2fc
	bool bDrawDebugSpheres; // 0x2fd
};

struct UTigerItemPreviewAsset {
	TArray<FTigerItemPreviewData> ItemPreviews; // 0x30
};

struct UTBP_UI_CheckboxWithClickabelText_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UButton* Checkbox_button; // 0x268
	UImage* CheckboxBorder_default_image; // 0x270
	UImage* CheckboxBorder_selected_image; // 0x278
	UImage* CheckboxCheck_image; // 0x280
	UImage* Image_135; // 0x288
	UTBP_UI_TextButton_C* TextButton; // 0x290
	UTigerStyledRichTextBlock* TextNormal; // 0x298
	FMulticastInlineDelegate OnChecked_true; // 0x2a0
	FText Text; // 0x2b0
	bool IsClickable; // 0x2c8
	FMulticastInlineDelegate OnChecked_false; // 0x2d0
	FMulticastInlineDelegate OnClickedText; // 0x2e0
	bool ShouldAutoWrapText; // 0x2f0
	float WrapTextAt; // 0x2f4
	bool bMustReadPopupBeforeAccepting; // 0x2f8
	FMulticastInlineDelegate OnClickedPopupRequirement; // 0x300
};

struct UScrollBarWidgetStyle {
	FScrollBarStyle ScrollBarStyle; // 0x30
};

struct UNavCollision {
	TArray<FNavCollisionCylinder> CylinderCollision; // 0x80
	TArray<FNavCollisionBox> BoxCollision; // 0x90
	UNavArea* AreaClass; // 0xa0
	char bGatherConvexGeometry : 1; // 0xa8
	char bCreateOnClient : 1; // 0xa8
};

struct UTBP_UI_Tutorial_IntroText_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FadeOutSimpleText; // 0x268
	UWidgetAnimation* FadeOutLoreText; // 0x270
	UWidgetAnimation* FadeInSimpleText; // 0x278
	UWidgetAnimation* FadeInLoreText; // 0x280
	UWidgetAnimation* FadeOutScreen; // 0x288
	UWidgetAnimation* FadeInScreen; // 0x290
	UImage* Background; // 0x298
	UCanvasPanel* IntroScreen; // 0x2a0
	UCanvasPanel* LoreBox; // 0x2a8
	UTigerStyledRichTextBlock* LoreParagraphText; // 0x2b0
	UTigerStyledRichTextBlock* LoreSubheaderText; // 0x2b8
	UTigerStyledRichTextBlock* LoreTitleText; // 0x2c0
	UCanvasPanel* SimpleBox; // 0x2c8
	UTigerStyledRichTextBlock* SimpleText; // 0x2d0
	bool FadeOutSimpleBox; // 0x2d8
	bool FadeOutLoreBox; // 0x2d9
	FMulticastInlineDelegate OnIntroComplete; // 0x2e0
};

struct UEnvQueryTest {
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

struct UUniformInteger {
	int32_t Magnitude; // 0xb0
};

struct UMaterialExpressionTextureSample {
	FExpressionInput Coordinates; // 0x48
};

struct UAnimNotifyState_Trail {
	UParticleSystem* PSTemplate; // 0x30
	FName FirstSocketName; // 0x38
	FName SecondSocketName; // 0x40
	ETrailWidthMode WidthScaleMode; // 0x48
	FName WidthScaleCurve; // 0x4c
	char bRecycleSpawnedSystems : 1; // 0x54
};

struct UCameraAnim {
	UInterpGroup* CameraInterpGroup; // 0x28
	float AnimLength; // 0x30
	FBox BoundingBox; // 0x34
	char bRelativeToInitialTransform : 1; // 0x50
	char bRelativeToInitialFOV : 1; // 0x50
	float BaseFOV; // 0x54
	FPostProcessSettings BasePostProcessSettings; // 0x60
	float BasePostProcessBlendWeight; // 0x5b0
};

struct AReflectionCapture {
	UReflectionCaptureComponent* CaptureComponent; // 0x228
};

struct UStereoLayerShapeEquirect {
	FBox2D LeftUVRect; // 0x28
	FBox2D RightUVRect; // 0x3c
	FVector2D LeftScale; // 0x50
	FVector2D RightScale; // 0x58
	FVector2D LeftBias; // 0x60
	FVector2D RightBias; // 0x68
};

struct UTigerFriendSubsystemSharknetImpl {
	UTigerFriendService* FriendService; // 0x38
};

struct UGizmoArrowComponent {
	FVector Direction; // 0x470
	float Gap; // 0x47c
	float Length; // 0x480
	float Thickness; // 0x484
};

struct UEnvQueryInstanceBlueprintWrapper {
	int32_t QueryID; // 0x30
	UEnvQueryItemType* ItemType; // 0x58
	int32_t OptionIndex; // 0x60
	FMulticastInlineDelegate OnQueryFinishedEvent; // 0x68
};

struct UABP_VMP_NOS_M_HAIR_04_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3ec0
};

struct UMaterialExpressionPanner {
	FExpressionInput Coordinate; // 0x40
	FExpressionInput Time; // 0x54
	FExpressionInput Speed; // 0x68
	float SpeedX; // 0x7c
	float SpeedY; // 0x80
	uint32_t ConstCoordinate; // 0x84
	bool bFractionalPart; // 0x88
};

struct UABP_Civilian_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x430
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_4; // 0x438
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_14; // 0x4f8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_13; // 0x520
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_15; // 0x548
	FAnimNode_StateResult AnimGraphNode_StateResult_13; // 0x5c8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_14; // 0x5f8
	FAnimNode_StateResult AnimGraphNode_StateResult_12; // 0x678
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_13; // 0x6a8
	FAnimNode_StateResult AnimGraphNode_StateResult_11; // 0x728
	FAnimNode_StateMachine AnimGraphNode_StateMachine_3; // 0x758
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_3; // 0x808
	FTigerFilteredLayeredBlend TigerAnimGraphNode_FilteredLayeredBlending; // 0x8a8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_7; // 0x970
	FAnimNode_Slot AnimGraphNode_Slot_6; // 0x998
	FTigerAnimNode_RandomPlayer TigerAnimGraphNode_RandomPlayer; // 0x9e0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_6; // 0xa78
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_5; // 0xaa0
	FAnimNode_Root AnimGraphNode_Root; // 0xbf8
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_3; // 0xc28
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK_2; // 0xcf0
	FAnimNode_TwoBoneIK AnimGraphNode_TwoBoneIK; // 0xed0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_6; // 0x10b0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_6; // 0x10d0
	FAnimNode_Slot AnimGraphNode_Slot_5; // 0x10f0
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_5; // 0x1138
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_4; // 0x1160
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool_2; // 0x12b8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_4; // 0x1358
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_12; // 0x1380
	FAnimNode_Slot AnimGraphNode_Slot_4; // 0x1400
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_3; // 0x1448
	FAnimNode_Slot AnimGraphNode_Slot_3; // 0x15a0
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose_2; // 0x15e8
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_3; // 0x1740
	FAnimNode_SaveCachedPose AnimGraphNode_SaveCachedPose; // 0x1768
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose_2; // 0x18c0
	FAnimNode_Slot AnimGraphNode_Slot_2; // 0x18e8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_12; // 0x1930
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_11; // 0x1958
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_10; // 0x1980
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_9; // 0x19a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_21; // 0x19d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_11; // 0x1ad8
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_5; // 0x1b58
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_5; // 0x1b78
	FAnimNode_StateResult AnimGraphNode_StateResult_10; // 0x1b98
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend_2; // 0x1bc8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_10; // 0x1c88
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_9; // 0x1d08
	FAnimNode_StateResult AnimGraphNode_StateResult_9; // 0x1d88
	FAnimNode_LayeredBoneBlend AnimGraphNode_LayeredBoneBlend; // 0x1db8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_8; // 0x1e78
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_7; // 0x1ef8
	FAnimNode_StateResult AnimGraphNode_StateResult_8; // 0x1f78
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_8; // 0x1fa8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_7; // 0x1fd0
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_6; // 0x1ff8
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_5; // 0x2020
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_4; // 0x2048
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_3; // 0x2070
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult_2; // 0x2098
	FAnimNode_TransitionResult AnimGraphNode_TransitionResult; // 0x20c0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_6; // 0x20e8
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_4; // 0x2168
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_4; // 0x2188
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_20; // 0x21a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_19; // 0x22b0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_18; // 0x23b8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0x24c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0x25c8
	FAnimNode_StateResult AnimGraphNode_StateResult_7; // 0x26d0
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_5; // 0x2700
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_3; // 0x2780
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_3; // 0x27a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0x27c0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0x28c8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0x29d0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0x2ad8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0x2be0
	FAnimNode_StateResult AnimGraphNode_StateResult_6; // 0x2ce8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_4; // 0x2d18
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace_2; // 0x2d98
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace_2; // 0x2db8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0x2dd8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0x2ee0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x2fe8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x30f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x31f8
	FAnimNode_StateResult AnimGraphNode_StateResult_5; // 0x3300
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x3330
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x3350
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x3370
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x3478
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x3580
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x3688
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x3790
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_3; // 0x3898
	FAnimNode_StateResult AnimGraphNode_StateResult_4; // 0x3918
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer_2; // 0x3948
	FAnimNode_StateResult AnimGraphNode_StateResult_3; // 0x39c8
	FAnimNode_BlendListByBool AnimGraphNode_BlendListByBool; // 0x39f8
	FAnimNode_SequencePlayer AnimGraphNode_SequencePlayer; // 0x3a98
	FAnimNode_PoseSnapshot AnimGraphNode_PoseSnapshot; // 0x3b18
	FAnimNode_Slot AnimGraphNode_Slot; // 0x3ba8
	FAnimNode_StateResult AnimGraphNode_StateResult_2; // 0x3bf0
	FAnimNode_StateMachine AnimGraphNode_StateMachine_2; // 0x3c20
	FAnimNode_StateResult AnimGraphNode_StateResult; // 0x3cd0
	FAnimNode_StateMachine AnimGraphNode_StateMachine; // 0x3d00
	FAnimNode_UseCachedPose AnimGraphNode_UseCachedPose; // 0x3db0
	bool bIsDedicatedServer; // 0x3dd8
	FVector LeftFootstepPosition; // 0x3ddc
	float LeftFootstepTime; // 0x3de8
	float RightFootstepTime; // 0x3dec
	FVector RightFootstepPosition; // 0x3df0
	FRotator CharacterRotation; // 0x3dfc
	float YawDelta; // 0x3e08
	float DeltaX; // 0x3e0c
	float YawDeltaSmooth; // 0x3e10
	bool IsBeingFeedOn; // 0x3e14
	bool IsRecovering; // 0x3e15
	bool FullyRecoverd; // 0x3e16
	bool InContextIdle; // 0x3e17
	FName CachedContextBasedIdle; // 0x3e18
	bool IsHoldingProp; // 0x3e20
	FName FaceAnimSlotName_00; // 0x3e24
	FName FaceAnimSlotName_01; // 0x3e2c
	FName FaceAnimSlotName_02; // 0x3e34
	FName FaceAnimSlotName_03; // 0x3e3c
	FRotator LookAtSpineRotator; // 0x3e44
	FRotator LookAtHeadRotator; // 0x3e50
	float LookAtVertical; // 0x3e5c
	float LookAtHorizontal; // 0x3e60
	float LookAtHorizontalSlow; // 0x3e64
	float AimYawDelta; // 0x3e68
	float Speed_Smooth; // 0x3e6c
	TArray<UAnimMontage*> React Montage; // 0x3e70
};

struct UTigerPlayerAnimInstance {
	UAnimMontage* CurrentDownedMontage; // 0x3b8
	FTigerHandIkWallTraceData HandIkTraceDataWhenWallHanging; // 0x3c0
	TArray<FTigerAnimMetaData> CurrentMontageMetaData; // 0x418
	TArray<UAnimMetaData*> CurrentAnimNodeMetaData; // 0x428
	TArray<UAnimMetaData*> CurrentMetaDataFromProxy; // 0x438
	UCurveFloat* CurrentTurnStartCurve; // 0x448
	bool bIsEmoting; // 0x450
	bool bIsJumping; // 0x451
	bool bIsCrouching; // 0x452
	bool bIsClimbing; // 0x453
	bool bIsFalling; // 0x454
	bool bIsSliding; // 0x455
	bool bIsSprinting; // 0x456
	bool bIsLedgeGrabbing; // 0x457
	bool bWasSprintingWhenStartingJump; // 0x458
	float SprintMultiplier; // 0x45c
	float ClimbPitch; // 0x460
	bool bWasLastLandingHard; // 0x464
	bool bMeleeSwingRecoveryHasDisabledRootMotion; // 0x465
	bool bIsOnGroundDuringAerialAttack; // 0x466
	float Acceleration; // 0x468
	float FloorHeightSensitivty; // 0x46c
	bool bIsProbablyTouchingFloor; // 0x474
	bool bHasVanishBuff; // 0x475
	bool bIsInCombat; // 0x476
	bool bIsDowned; // 0x477
	bool bIsInWallJump; // 0x478
	bool bWallJumpIsAvailable; // 0x479
	ETigerDisciplinesEnum ActiveMontageDisciplineType; // 0x47a
	bool bAllowRotationLerpDuringDisciplineMontage; // 0x47b
	int32_t CurrentJumpCount; // 0x47c
	FName DownedMontageNames[0x4]; // 0x480
	FName StaticEntryToDownedMontageName; // 0x4a0
	ESharkFourWayDirection AirDashDirection; // 0x4a8
	ESharkFourWayDirection WallJumpDirection; // 0x4a9
	ESharkFourWayDirection WallJumpAnticipationDirection; // 0x4aa
	float WallGrindRotationFromWallInDegrees; // 0x4ac
	float CameraRelativeWallJumpCosineAngle; // 0x4b0
	float WallJumpPlayerFacingYaw; // 0x4b4
	float AirDashAngleInDegrees; // 0x4b8
	ETigerWallJumpAnimationState WallJumpAnimationState; // 0x4bc
	bool bIsInTurnStart; // 0x4bd
	bool bTurnStartIsOnCooldown; // 0x4be
	bool bAdjustClimbSpeedByAnimation; // 0x4bf
	float SurfaceCompensationInterpSpeed; // 0x4c0
	float SurfaceCompensationPitch; // 0x4c4
	float SurfaceCompensationRoll; // 0x4c8
	int32_t CurrentLodLevel; // 0x4cc
};

struct UTigerCharacterOutfitConfiguration {
	FTigerLodSplitMesh SplitMesh; // 0x110
	TSoftObjectPtr<USkeletalMesh> AdditionalMesh; // 0x188
	TArray<FTigerCharacterOutfitHoodieVariation> HoodieVariations; // 0x1b0
	TMap<int32_t, TSoftObjectPtr<UMaterialInterface>> Materials; // 0x1c0
	FTigerCharacterHolsteredWeaponTransforms HolsteredWeaponsTransforms; // 0x210
	bool bHoodieUpOnThumbnail; // 0x270
	TSoftObjectPtr<USkeletalMesh> Mesh; // 0x278
};

struct UFindSessionsCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTigerMacroExperienceAsset {
	TMap<ETigerPlayerEvent, int32_t> EventMacroExperience; // 0x30
};

struct UTigerClientSeasonalRewardCollection {
	TArray<UTigerClientSeasonalRewardTier*> Tiers; // 0x28
	int32_t BattlePassPrice; // 0x38
};

struct AGameModeBase {
	FString OptionsString; // 0x228
	AGameSession* GameSessionClass; // 0x238
	AGameStateBase* GameStateClass; // 0x240
	APlayerController* PlayerControllerClass; // 0x248
	APlayerState* PlayerStateClass; // 0x250
	AHUD* HUDClass; // 0x258
	APawn* DefaultPawnClass; // 0x260
	ASpectatorPawn* SpectatorClass; // 0x268
	APlayerController* ReplaySpectatorPlayerControllerClass; // 0x270
	AServerStatReplicator* ServerStatReplicatorClass; // 0x278
	AGameSession* GameSession; // 0x280
	AGameStateBase* GameState; // 0x288
	AServerStatReplicator* ServerStatReplicator; // 0x290
	FText DefaultPlayerName; // 0x298
	char bUseSeamlessTravel : 1; // 0x2b0
	char bStartPlayersAsSpectators : 1; // 0x2b0
	char bPauseable : 1; // 0x2b0
};

struct UGeometryCacheTrackStreamable {
	UGeometryCacheCodecBase* Codec; // 0x58
	float StartSampleTime; // 0xc8
};

struct UTigerTraversalStateClimbingConfig {
	FName CameraClimbingSocketName; // 0x50
	FName ClimbingSpeedAnimationCurveName; // 0x58
	FName ClimbingBlendSpaceName; // 0x60
	FName ClimbStartBlendSpaceName; // 0x68
	float ClimbingCameraInterpSpeed; // 0x70
	float ClimbingCameraInterpDelay; // 0x74
	float ClimbablePrimaryAngleCheckOffset; // 0x78
	float ClimbableFeetCheckOffset; // 0x7c
	float ClimbableOffset; // 0x80
	float ClimbableExtraSearchDepth; // 0x84
	float StartingClimbDepth; // 0x88
	float ClimbHorizontalAdjustmentSpeed; // 0x8c
	float ClimbLowHorizontalAdjustmentSpeed; // 0x90
	float IndoorClimbRadiusScale; // 0x94
	float IndoorClimbVerticalOffset; // 0x98
	float IndoorClimbBackwardOffset; // 0x9c
	float IndoorClimbIndoorUpsideDownDeadzoneHalfAngle; // 0xa0
	float DistanceToCheckForClimbingOverhangs; // 0xa4
	float MaximumOverhangAdjustmentLength; // 0xa8
	float ClimbingOverHangCheckSweepRadius; // 0xac
	float MinimumOverHangLeadUpBufferPercentage; // 0xb0
	float ClimbingInputZCutOff; // 0xb4
	float MinimumUpwardClimbAngle; // 0xb8
	float MaximumSidewaysClimbDeviation; // 0xbc
	float ClimbingOverHangZCutOff; // 0xc0
	float StartClimbInAirAllowedAngleDifference; // 0xc4
	float StartClimbOnGroundAllowedAngleDifference; // 0xc8
	float StartClimbInAirAllowedAngleDifferenceGamepad; // 0xcc
	float StartClimbOnGroundAllowedAngleDifferenceGamepad; // 0xd0
	float ClimbCooldown; // 0xd4
	float IndoorClimbingCooldown; // 0xd8
	float VerticalClimbSpeed; // 0xdc
	float HorizontalClimbSpeed; // 0xe0
	float MaximumAllowedAngleDifferenceBetweenClimbTargets; // 0xe4
	bool bShouldReadClimbSpeedFromAnimationCurve; // 0xe8
	bool bResetIndoorClimbCooldownWhenOutside; // 0xe9
	bool bResetIndoorClimbCooldownOnLanding; // 0xea
	bool bShouldAvoidOverhangsDuringClimb; // 0xeb
	bool bOnlyStartClimbIfLookingAtWall; // 0xec
	bool bUseSocketForNonLinearCameraWhenClimbing; // 0xed
	bool bShouldInterpClimbingCamera; // 0xee
};

struct UTigerNearCameraFadeSettings {
	bool bEnableNearCameraFade; // 0x38
	TMap<FName, FName> CollisionProfileChangesWhenTogglingFade; // 0x40
	UTigerNearCameraFadeMaterialDb* MaterialDatabase; // 0x90
	float FadeLength; // 0x98
	TArray<FTigerNearCameraFadeMaterialMasterData> MasterMaterialDatas; // 0xa0
	FTigerNearCameraFadeDebugData DebugData; // 0xb0
};

struct UMaterialShaderQualitySettings {
	TMap<FName, UShaderPlatformQualitySettings*> ForwardSettingMap; // 0x28
};

struct UTigerMapInfoDataAsset {
	TArray<FTigerMapInfo> MapInfoList; // 0x30
	FTigerMapInfo DefaultMapInfo; // 0x40
	UUserWidget* PointOfInterestWidgetType; // 0xf8
};

struct UABP_VMP_TOR_F_HAIR_07_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0xb80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0xfc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x1400
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1840
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1860
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x20e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2520
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2540
};

struct UAkWindowsInitializationSettings {
	FAkCommonInitializationSettingsWithSampleRate CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x90
	FAkWindowsAdvancedInitializationSettings AdvancedSettings; // 0xb8
};

struct UTBP_UI_InputPrompt_Keyboard_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2e8
	UTigerStyledRichTextBlock* PostFixTextBlock; // 0x2f0
	UTigerStyledRichTextBlock* PrefixTextBlock; // 0x2f8
	UTBP_UI_KeyboardIcon_C* TBP_UI_KeyboardIcon; // 0x300
	bool bHasValidIcon; // 0x308
	FSlateFontInfo FontInfo; // 0x310
	FMargin CustomPadding; // 0x368
	FDataTableRowHandle Font; // 0x378
};

struct UPaperTileSet {
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

struct UMaterialExpressionFontSample {
	UFont* Font; // 0x40
	int32_t FontTexturePage; // 0x48
};

struct UTigerWeaponAbilityDash {
	UTigerDashConfig* AbilityConfig; // 0x78
	FVector CastDirection; // 0x80
	FVector CastLocation; // 0x8c
};

struct UTBP_Ping_LootVan_C {
	int32_t ContextArgument; // 0x124
	UAkAudioEvent* PoliceVanAudioEvent; // 0x128
	UAkAudioEvent* DeliveryVanAudioEvent; // 0x130
	UAkAudioEvent* AmbulanceAudioEvent; // 0x138
	FText VanName; // 0x140
	ENUM_TelemetryPingType VanPingEnum; // 0x158
};

struct UTigerAudioVisualizationSpawnerComponent {
	UParticleSystem* ParticleSystemToSpawn; // 0xb0
	int32_t MaxSimultaneousVisualizations; // 0xb8
	TArray<FTigerHeightenedSensesAudioVisualization> ActiveVisualizations; // 0xc0
};

struct UModularSynthPresetBank {
	TArray<FModularSynthPresetBankEntry> Presets; // 0x28
};

struct ATigerGameMode {
	FMulticastInlineDelegate OnRestartPlayer; // 0x2d8
	UTigerGroupCoordinator* GroupCoordinator; // 0x2e8
	UTigerMasqueradeCoordinator* MasqueradeCoordinator; // 0x2f8
	TSoftClassPtr<UObject> SpawnMechanicClass; // 0x370
	UTigerAICoordinator* AICoordinator; // 0x398
	UTigerNPCSpawningCoordinator* NPCSpawner; // 0x3a0
	ESessionType SessionTraveledFrom; // 0x3a8
	ETigerGameType GameType; // 0x3a9
	UTigerSpawnMechanic* SpawnMechanic; // 0x408
	UTigerSessionService* TigerSessionService; // 0x410
	ATigerItemCluster* ItemClusterClass; // 0x468
	float ServerLoadScalabilityUpdateFrequency; // 0x474
	float ServerLoadScalability30HzTarget; // 0x478
	float ServerLoadScalability20HzTarget; // 0x47c
	bool ServerLoadScalabilityEnabled; // 0x480
	UTigerPlayerServerLoginProcess* PlayerServerLoginProcess; // 0x4a0
	float NetworkProfileOnPlayerConnectionDuration; // 0x4c0
};

struct UShapeComponent {
	UBodySetup* ShapeBodySetup; // 0x450
	UNavAreaBase* AreaClass; // 0x458
	FColor ShapeColor; // 0x460
	char bDrawOnlyIfSelected : 1; // 0x464
	char bShouldCollideWhenPlacing : 1; // 0x464
	char bDynamicObstacle : 1; // 0x464
};

struct UTigerDialogueCondition_GrimoireEntry {
	UTigerGrimoireEntry* RequiredEntry; // 0x30
};

struct UABP_PoseableMesh_B_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x310
	FAnimNode_Root AnimGraphNode_Root; // 0x318
	FAnimNode_MeshSpaceRefPose AnimGraphNode_MeshRefPose; // 0x348
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x358
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_21; // 0x378
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_20; // 0x480
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_19; // 0x588
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_18; // 0x690
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_17; // 0x798
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_16; // 0x8a0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_15; // 0x9a8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_14; // 0xab0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_13; // 0xbb8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_12; // 0xcc0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_11; // 0xdc8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_10; // 0xed0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_9; // 0xfd8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_8; // 0x10e0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_7; // 0x11e8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_6; // 0x12f0
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_5; // 0x13f8
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_4; // 0x1500
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_3; // 0x1608
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone_2; // 0x1710
	FAnimNode_ModifyBone AnimGraphNode_ModifyBone; // 0x1818
};

struct USoundNodeModulatorContinuous {
	FModulatorContinuousParams PitchModulationParams; // 0x48
	FModulatorContinuousParams VolumeModulationParams; // 0x68
};

struct UBTTask_PlayAnimation {
	UAnimationAsset* AnimationToPlay; // 0x70
	char bLooping : 1; // 0x78
	char bNonBlocking : 1; // 0x78
	UBehaviorTreeComponent* MyOwnerComp; // 0x80
	USkeletalMeshComponent* CachedSkelMesh; // 0x88
};

struct UTimeSynchronizationSource {
	bool bUseForSynchronization; // 0x28
	int32_t FrameOffset; // 0x2c
};

struct UPrimitiveComponent {
	float MinDrawDistance; // 0x200
	float LDMaxDrawDistance; // 0x204
	float CachedMaxDrawDistance; // 0x208
	float ScreenCullSizeOverride; // 0x20c
	float CachedScreenCullSize; // 0x210
	ESceneDepthPriorityGroup DepthPriorityGroup; // 0x214
	ESceneDepthPriorityGroup ViewOwnerDepthPriorityGroup; // 0x215
	EIndirectLightingCacheQuality IndirectLightingCacheQuality; // 0x216
	EActorStreamingPriorityTiers StreamingPriorityOverride; // 0x21c
	ELightmapType LightmapType; // 0x21d
	char bUseMaxLODAsImposter : 1; // 0x21e
	char bBatchImpostersAsInstances : 1; // 0x21e
	char bNeverDistanceCull : 1; // 0x21e
	char bAlwaysCreatePhysicsState : 1; // 0x21e
	char bGenerateOverlapEvents : 1; // 0x21f
	char bMultiBodyOverlap : 1; // 0x21f
	char bTraceComplexOnMove : 1; // 0x21f
	char bReturnMaterialOnMove : 1; // 0x21f
	char bUseViewOwnerDepthPriorityGroup : 1; // 0x21f
	char bAllowCullDistanceVolume : 1; // 0x21f
	char bHasMotionBlurVelocityMeshes : 1; // 0x21f
	char bVisibleInReflectionCaptures : 1; // 0x21f
	char bVisibleInRealTimeSkyCaptures : 1; // 0x220
	char bVisibleInRayTracing : 1; // 0x220
	char bRenderInMainPass : 1; // 0x220
	char bRenderInDepthPass : 1; // 0x220
	char bReceivesDecals : 1; // 0x220
	char bOwnerNoSee : 1; // 0x220
	char bOnlyOwnerSee : 1; // 0x220
	char bTreatAsBackgroundForOcclusion : 1; // 0x220
	char bUseAsOccluder : 1; // 0x221
	char bOnlyRenderDepth : 1; // 0x221
	char bSelectable : 1; // 0x221
	char bForceMipStreaming : 1; // 0x221
	char bHasPerInstanceHitProxies : 1; // 0x221
	char CastShadow : 1; // 0x221
	char bAffectDynamicIndirectLighting : 1; // 0x221
	char bAffectDistanceFieldLighting : 1; // 0x221
	char bCastDynamicShadow : 1; // 0x222
	char bCastStaticShadow : 1; // 0x222
	char bCastVolumetricTranslucentShadow : 1; // 0x222
	char bCastContactShadow : 1; // 0x222
	char bSelfShadowOnly : 1; // 0x222
	char bCastFarShadow : 1; // 0x222
	char bCastInsetShadow : 1; // 0x222
	char bCastCinematicShadow : 1; // 0x222
	char bCastHiddenShadow : 1; // 0x223
	char bCastShadowAsTwoSided : 1; // 0x223
	char bLightAsIfStatic : 1; // 0x223
	char bLightAttachmentsAsGroup : 1; // 0x223
	char bExcludeFromLightAttachmentGroup : 1; // 0x223
	char bReceiveMobileCSMShadows : 1; // 0x223
	char bSingleSampleShadowFromStationaryLights : 1; // 0x223
	char bIgnoreRadialImpulse : 1; // 0x223
	char bIgnoreRadialForce : 1; // 0x224
	char bApplyImpulseOnDamage : 1; // 0x224
	char bReplicatePhysicsToAutonomousProxy : 1; // 0x224
	char bFillCollisionUnderneathForNavmesh : 1; // 0x224
	char AlwaysLoadOnClient : 1; // 0x224
	char AlwaysLoadOnServer : 1; // 0x224
	char bUseEditorCompositing : 1; // 0x224
	char bRenderCustomDepth : 1; // 0x224
	char bCullCustomDepth : 1; // 0x225
	EHasCustomNavigableGeometry bHasCustomNavigableGeometry; // 0x226
	EShadowDetailMode ShadowDetailMode; // 0x227
	ECanBeCharacterBase CanCharacterStepUpOn; // 0x229
	FLightingChannels LightingChannels; // 0x22a
	ERendererStencilMask CustomDepthStencilWriteMask; // 0x22b
	int32_t CustomDepthStencilValue; // 0x22c
	FCustomPrimitiveData CustomPrimitiveData; // 0x230
	FCustomPrimitiveData CustomPrimitiveDataInternal; // 0x240
	int32_t SortPriority; // 0x258
	int32_t VisibilityId; // 0x25c
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

struct UHorizontalBoxSlot {
	FMargin Padding; // 0x40
	FSlateChildSize Size; // 0x50
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct UTigerHeatmapCollector {
	TMap<ATigerCharacter*, FTigerCampingData> CampingData; // 0xe8
	FTimerHandle CharacterMovementTimerHandle; // 0x138
};

struct UCanvasPanelSlot {
	FAnchorData LayoutData; // 0x38
	bool bAutoSize; // 0x60
	int32_t ZOrder; // 0x64
};

struct UMovieSceneObjectPropertySection {
	FMovieSceneObjectPathChannel ObjectChannel; // 0xe8
};

struct APlayerController {
	UPlayer* Player; // 0x2a0
	APawn* AcknowledgedPawn; // 0x2a8
	UInterpTrackInstDirector* ControllingDirTrackInst; // 0x2b0
	AHUD* MyHUD; // 0x2b8
	APlayerCameraManager* PlayerCameraManager; // 0x2c0
	APlayerCameraManager* PlayerCameraManagerClass; // 0x2c8
	bool bAutoManageActiveCameraTarget; // 0x2d0
	FRotator TargetViewRotation; // 0x2d4
	float SmoothTargetViewRotationSpeed; // 0x2ec
	TArray<AActor*> HiddenActors; // 0x2f8
	TArray<TWeakObjectPtr<UPrimitiveComponent>> HiddenPrimitiveComponents; // 0x308
	float LastSpectatorStateSynchTime; // 0x31c
	FVector LastSpectatorSyncLocation; // 0x320
	FRotator LastSpectatorSyncRotation; // 0x32c
	int32_t ClientCap; // 0x338
	UCheatManager* CheatManager; // 0x340
	UCheatManager* CheatClass; // 0x348
	UPlayerInput* PlayerInput; // 0x350
	TArray<FActiveForceFeedbackEffect> ActiveForceFeedbackEffects; // 0x358
	char bPlayerIsWaiting : 1; // 0x3d8
	char NetPlayerIndex; // 0x3dc
	UNetConnection* PendingSwapConnection; // 0x418
	UNetConnection* NetConnection; // 0x420
	float InputYawScale; // 0x434
	float InputPitchScale; // 0x438
	float InputRollScale; // 0x43c
	char bShowMouseCursor : 1; // 0x440
	char bEnableClickEvents : 1; // 0x440
	char bEnableTouchEvents : 1; // 0x440
	char bEnableMouseOverEvents : 1; // 0x440
	char bEnableTouchOverEvents : 1; // 0x440
	char bForceFeedbackEnabled : 1; // 0x440
	float ForceFeedbackScale; // 0x444
	TArray<FKey> ClickEventKeys; // 0x448
	EMouseCursor DefaultMouseCursor; // 0x458
	EMouseCursor CurrentMouseCursor; // 0x459
	ECollisionChannel DefaultClickTraceChannel; // 0x45a
	ECollisionChannel CurrentClickTraceChannel; // 0x45b
	float HitResultTraceDistance; // 0x45c
	uint16_t SeamlessTravelCount; // 0x460
	uint16_t LastCompletedSeamlessTravelCount; // 0x462
	UInputComponent* InactiveStateInputComponent; // 0x4d8
	char bShouldPerformFullTickWhenPaused : 1; // 0x4e0
	UTouchInterface* CurrentTouchInterface; // 0x4f8
	ASpectatorPawn* SpectatorPawn; // 0x550
	bool bIsLocalPlayerController; // 0x55c
	FVector SpawnLocation; // 0x560
};

struct UBackgroundBlurSlot {
	FMargin Padding; // 0x38
	EHorizontalAlignment HorizontalAlignment; // 0x48
	EVerticalAlignment VerticalAlignment; // 0x49
};

struct UMovieSceneAkTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
	char bIsAMasterTrack : 1; // 0x88
};

struct UMovieSceneSequence {
	UMovieSceneCompiledData* CompiledData; // 0x50
	EMovieSceneCompletionMode DefaultCompletionMode; // 0x58
	bool bParentContextsAreSignificant; // 0x59
	bool bPlayableDirectly; // 0x5a
	EMovieSceneSequenceFlags SequenceFlags; // 0x5b
};

struct UParticleModuleVectorFieldScale {
	UDistributionFloat* VectorFieldScale; // 0x30
	FRawDistributionFloat VectorFieldScaleRaw; // 0x38
};

struct UTigerRangedWeaponComponent {
	FMulticastInlineDelegate OnShowCrosshairAmmoState; // 0xb0
	FMulticastInlineDelegate OnReloadStart; // 0xc0
	FMulticastInlineDelegate OnReloadFinished; // 0xd0
	FMulticastInlineDelegate OnReloadAborted; // 0xe0
	FMulticastInlineDelegate OnBurstCompleted; // 0xf0
	FMulticastInlineDelegate OnLowAmmo; // 0x100
	FMulticastInlineDelegate OnRangedWeaponEquipped; // 0x110
	FMulticastInlineDelegate OnAimChanged; // 0x120
	UTigerBodyPartProjectileDamageModifiersAsset* BodyPartDamageModifiersAsset; // 0x130
	ATigerPlayer* TigerPlayer; // 0x148
	UDataTable* RangedWeaponsDatatable; // 0x150
	UStaticMesh* ImpactHelperMesh; // 0x158
	UAkAudioEvent* GotHitEvent; // 0x160
	UAkAudioEvent* FireModeSwitchEvent; // 0x168
	UTigerRangedWeapon* EquippedWeaponType; // 0x170
	UAnimMontage* LastFireAnimationMontage; // 0x178
	FTimerHandle ReloadWeaponTimerHandle; // 0x1e0
	bool bIsFiring; // 0x1ea
	bool bWantsToFire; // 0x1eb
	bool bIsAiming; // 0x1ec
	UStaticMeshComponent* ImpactHelperMeshComp; // 0x210
	float CoolDownOutOfAmmoAudioEvent; // 0x244
	UTigerAICoordinator* AICoordinator; // 0x270
	TMap<ATigerProjectile*, UTigerProjectilePool*> ProjectilePoolMap; // 0x278
};

struct UMaterialExpressionTextureSampleParameterSubUV {
	char bBlend : 1; // 0x80
};

struct ULightPropagationVolumeBlendable {
	FLightPropagationVolumeSettings Settings; // 0x30
	float BlendWeight; // 0x70
};

struct USceneCaptureComponent2D {
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

struct UTigerQuest {
	FMulticastInlineDelegate OnProgressChangedEvent; // 0x28
	FMulticastInlineDelegate OnQuestCompletedEvent; // 0x38
	FMulticastInlineDelegate OnQuestObjectiveCompletedEvent; // 0x48
	FText QuestName; // 0x58
	FText QuestSubheading; // 0x70
	FText FlavourText; // 0x88
	TArray<UTigerQuestObjective*> Objectives; // 0xa0
	TArray<FTigerItemId> RewardIds; // 0xb0
	UTigerGrimoireEntry* GrimoireEntryToUnlock; // 0xc0
	bool bStartsNextQuest; // 0xc8
	FString NextQuestLineId; // 0xd0
	FString NextQuestId; // 0xe0
	bool bRemoveAfterLockDate; // 0xf0
	FDateTime LockDate; // 0xf8
	FTigerQuestIdentifier QuestLookupIdentifier; // 0x100
};

struct UTigerDisciplineTraps {
	UTigerTrapsConfig* Config; // 0xf0
	AActor* AimTrapActor; // 0xf8
	TArray<ATigerTrap*> CurrentTraps; // 0x100
	TArray<int32_t> FreeTrapIndices; // 0x110
};

struct UTigerItemLootTable {
	TArray<FTigerItemLootEntry> Items; // 0x30
	TArray<FTigerSubItemLootTable> SubLootTables; // 0x40
	TMap<FTigerLootTableKey, FTigerGeneratedLootTable> GeneratedSubsets; // 0x50
	FTigerGeneratedLootTable EntireLootTable; // 0xa0
	bool bIsLootBuilt; // 0xb9
};

struct UTigerUtilityPowerRoar {
	float DurationAIAreAffected; // 0xe8
	float ConeEffectLength; // 0xec
	float SphereEffectRadius; // 0xf0
	float ConeWidthAngle; // 0xf4
	float Cooldown; // 0xf8
	UAnimMontage* RoarStaggerAnimation; // 0x100
	UAnimMontage* RoarAnimation; // 0x108
	UAkAudioEvent* RoarSoundEvent; // 0x110
};

struct UGizmoRectangleComponent {
	FVector DirectionX; // 0x470
	FVector DirectionY; // 0x47c
	float OffsetX; // 0x488
	float OffsetY; // 0x48c
	float LengthX; // 0x490
	float LengthY; // 0x494
	float Thickness; // 0x498
	char SegmentFlags; // 0x49c
};

struct UAkAudioType {
	uint32_t ShortID; // 0x28
	TArray<UObject*> UserData; // 0x30
};

struct ASwitchActor {
	USceneComponent* SceneComponent; // 0x240
	int32_t LastSelectedOption; // 0x248
};

struct UTigerAnimNotify_PlayVoEvent {
	FTigerNpcVoCategory VoCategory; // 0x38
};

struct ATigerFamiliarScout {
	float MoveSpeed; // 0x22c
	float RecallMoveSpeed; // 0x230
	FVector TargetLocation; // 0x234
	FTimerHandle ArrivalTimerHandle; // 0x240
	bool bReturnToOwner; // 0x248
	FVector ManuallyScoutAtLocation; // 0x24c
	int32_t rank; // 0x258
	bool bIsMoving; // 0x27c
	FVector Velocity; // 0x280
	float ScoutTimeToReachTarget; // 0x28c
};

struct UCurveLinearColor {
	FRichCurve FloatCurves[0x4]; // 0x30
	float AdjustHue; // 0x230
	float AdjustSaturation; // 0x234
	float AdjustBrightness; // 0x238
	float AdjustBrightnessCurve; // 0x23c
	float AdjustVibrance; // 0x240
	float AdjustMinAlpha; // 0x244
	float AdjustMaxAlpha; // 0x248
};

struct UPawnAction_Repeat {
	UPawnAction* ActionToRepeat; // 0x98
	UPawnAction* RecentActionCopy; // 0xa0
	EPawnActionFailHandling ChildFailureHandlingMode; // 0xa8
};

struct UGameMapsSettings {
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

struct URestrictedGameplayTagsList {
	FString ConfigFileName; // 0x28
	TArray<FRestrictedGameplayTagTableRow> RestrictedGameplayTagList; // 0x38
};

struct UTBP_ContextualHelp_Tutorial_ShootEntity_Gamepad_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UGameplayTask_TimeLimitedExecution {
	FMulticastInlineDelegate OnFinished; // 0x68
	FMulticastInlineDelegate OnTimeExpired; // 0x78
};

struct UTigerRevivingStatusUI {
	FText RegeneratingStatusText; // 0x280
	FText DiablerizingStatusText; // 0x298
	FText BeingRevivedStatusText; // 0x2b0
	ETigerPhysicalInteraction PhysicalInteractionStatus; // 0x2c8
	bool bShouldUpdateTimer; // 0x2c9
	float TimeLeft; // 0x2cc
	float PercentageLeft; // 0x2d0
	bool ShowPrompt; // 0x2dc
};

struct UAnimNotifyState_TimedNiagaraEffect {
	UNiagaraSystem* Template; // 0x30
	FName SocketName; // 0x38
	FVector LocationOffset; // 0x40
	FRotator RotationOffset; // 0x4c
	bool bDestroyAtEnd; // 0x58
};

struct UTigerBuffRepositionInstance {
	UPrimitiveComponent* Root; // 0x88
};

struct UTigerDestroySessionAsync {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailed; // 0x40
};

struct UTigerMeleeAimAssistBehavior {
	float AimAssistMinRadius; // 0x28
	float AimAssistMaxRadius; // 0x2c
	float MaxTargetHeightDiff; // 0x30
	float DebugDrawTime; // 0x34
	bool bPredictCandidateLocationsBeforeEvaluation; // 0x38
	ATigerCharacter* TigerOwner; // 0x40
	UTigerMeleeWeapon* EquippedWeapon; // 0x48
	FVector TigerOwnerLocation; // 0x50
	TWeakObjectPtr<ATigerCharacter> FinalTargetCharacter; // 0x5c
	FTigerMeleeWeaponAttackIdentifier FinalAttackIdentifier; // 0x64
	float AimAssistMinRadiusSquared; // 0x68
	float AimAssistMaxRadiusSquared; // 0x6c
	float AimAssistTravelTime; // 0x70
};

struct UBTDecorator_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x68
	float CooldownDuration; // 0x70
	bool bAddToExistingDuration; // 0x74
};

struct UMaterialExpressionFunctionInput {
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

struct UTigerBuffHealthRegenBase {
	float HealthToHeal; // 0x248
};

struct UInterpTrackFade {
	char bPersistFade : 1; // 0x90
	char bFadeAudio : 1; // 0x90
	FLinearColor FadeColor; // 0x94
};

struct UMaterialExpressionPerInstanceCustomData {
	FExpressionInput DefaultValue; // 0x40
	float ConstDefaultValue; // 0x54
	uint32_t DataIndex; // 0x58
};

struct UTBP_PlayerSaveGame_C {
	FTS_PlayerInfo S_PlayerInfo; // 0x30
};

struct URectLightComponent {
	float SourceWidth; // 0x348
	float SourceHeight; // 0x34c
	float BarnDoorAngle; // 0x350
	float BarnDoorLength; // 0x354
	UTexture* SourceTexture; // 0x358
};

struct UTBP_UI_InputFormattedRichText_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	URichTextBlock* Text; // 0x288
	FText FormatedText; // 0x290
	FText TextStyle; // 0x2a8
	FName ActionBindingToEmbed; // 0x2c0
	FName ActionBindingGamepadOverride; // 0x2c8
	bool bHasAdditionalKeyboardInputRequirement; // 0x2d0
	FKey AdditionalKeyboardInputRequirements; // 0x2d8
	bool bHasAdditionalGamepadInputRequirement; // 0x2f0
	FKey AdditionalGamepadInputRequirements; // 0x2f8
	bool bHasMultipleBindings; // 0x310
	bool bShouldUpdateRuntime; // 0x311
	ETextJustify Justification; // 0x312
	bool UseTextStyle; // 0x313
	bool Override Image; // 0x314
	FName ImageToOverride; // 0x318
	FName GamepadImageToOverride; // 0x320
	FText StretchMode; // 0x328
	bool ValidIcon; // 0x340
	FText DefaultImageText; // 0x348
};

struct USingleClickInputBehavior {
	bool HitTestOnRelease; // 0xc0
};

struct UMaterialExpressionAbs {
	FExpressionInput Input; // 0x40
};

struct UParticleModuleAttractorPoint {
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

struct UTigerChallengeUseDiscipline {
	FTigerChallengeRequirementDisciplineSlot DisciplineSlotRequirement; // 0xb0
};

struct UMenuAnchor {
	UUserWidget* MenuClass; // 0x120
	FDelegate OnGetMenuContentEvent; // 0x128
	FDelegate OnGetUserMenuContentEvent; // 0x138
	EMenuPlacement Placement; // 0x148
	bool bFitInWindow; // 0x149
	bool ShouldDeferPaintingAfterWindowContent; // 0x14a
	bool UseApplicationMenuStack; // 0x14b
	FMulticastInlineDelegate OnMenuOpenChanged; // 0x150
};

struct UWindDirectionalSourceComponent {
	float Strength; // 0x1f8
	float Speed; // 0x1fc
	float MinGustAmount; // 0x200
	float MaxGustAmount; // 0x204
	float Radius; // 0x208
	char bPointWind : 1; // 0x20c
};

struct UPanelWidget {
	TArray<UPanelSlot*> Slots; // 0x108
};

struct UTBP_ContextualHelp_Discipline_Clan_UnlockInputReminderPad_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UTBP_UI_SmgCrosshair_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UTigerBuffAnarchHuntingKnife {
	UCurveFloat* EffectStrengthBasedOnDistance; // 0x248
	UCurveFloat* EffectStrengthBasedOnKills; // 0x250
	UCurveFloat* DamageBasedOnEnemiesKilled; // 0x258
	float MaxDistanceToCheckForEnemies; // 0x260
};

struct UTigerPsoCacheUI {
	FMulticastInlineDelegate OnCachingDone; // 0x280
	UTigerSharedMouseCursor* SharedMouseCursor; // 0x290
};

struct USystemTimeTimecodeProvider {
	FFrameRate FrameRate; // 0x30
	bool bGenerateFullFrame; // 0x38
	bool bUseHighPerformanceClock; // 0x39
};

struct UTBP_UI_HorizontalArchetypeSelector_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x288
	UHorizontalBox* RootHorizontalBox; // 0x290
	FMulticastInlineDelegate OnArchetypeSelected; // 0x298
	TMap<ETigerPowerKitType, TScriptInterface<II_ArchetypeSelectButton_C>> ArchetypeButtons; // 0x2a8
	bool UsePragueVisuals; // 0x2f8
};

struct UTransformGizmo {
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

struct UTBP_UI_AntiqueStore_Marker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCanvasPanel* CanvasPanel_2; // 0x2c0
	UImage* JudgeMarkerImage; // 0x2c8
};

struct UTigerScreenTransition {
	UCurveFloat* ScreenTransitionCurveIn; // 0x280
	UCurveFloat* ScreenTransitionCurveOut; // 0x288
	FMulticastInlineDelegate OnTransitionInFinished; // 0x290
	FMulticastInlineDelegate OnTransitionOutFinished; // 0x2a0
	EScreenTransitionState CurrentTransitionState; // 0x2b0
};

struct UTigerThrowingAxeConfig {
	UAnimMontage* StartAimingPoseMontage; // 0x170
	UAnimMontage* ReadyAxeMontage; // 0x178
	bool bDebugInfiniteAxes; // 0x180
	bool bDebugDrawPredictedProjectilePath; // 0x181
	FName CastAnimationName; // 0x184
	AActor* ThrowingAxeProjectile; // 0x190
	UTigerItemAsset* AxeItem; // 0x198
	FName AxeSpawnSocket; // 0x1a0
	float ForwardOffset; // 0x1a8
	FRotator AxeSpawnRotationOffset; // 0x1ac
	float ProjectileDamage; // 0x1b8
	float ProjectileStartSpeed; // 0x1bc
	float ProjectileMaxSpeed; // 0x1c0
	float ProjectileMassInKg; // 0x1c4
	FRotator ProjectileRotationPerSecond; // 0x1c8
	float ProjectileGravityScale; // 0x1d4
	float MovementMultiplierAimState; // 0x1d8
};

struct UMaterialExpressionLogarithm2 {
	FExpressionInput X; // 0x40
};

struct UTBP_ContextualHelpBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xb0
	int32_t ShowCountRemaining; // 0xb8
	FName Additional Input; // 0xbc
	TSoftObjectPtr<UTexture2D> Additional Icon; // 0xc8
};

struct UTigerAnimNotify_AddProps {
	ATigerPropDummy* PropDummyClass; // 0x38
	TArray<FName> PropsToSpawn; // 0x40
};

struct AMatineeActor {
	UInterpData* MatineeData; // 0x228
	FName MatineeControllerName; // 0x230
	float PlayRate; // 0x238
	char bPlayOnLevelLoad : 1; // 0x23c
	char bForceStartPos : 1; // 0x23c
	float ForceStartPosition; // 0x240
	char bLooping : 1; // 0x244
	char bRewindOnPlay : 1; // 0x244
	char bNoResetOnRewind : 1; // 0x244
	char bRewindIfAlreadyPlaying : 1; // 0x244
	char bDisableRadioFilter : 1; // 0x244
	char bClientSideOnly : 1; // 0x244
	char bSkipUpdateIfNotVisible : 1; // 0x244
	char bIsSkippable : 1; // 0x244
	int32_t PreferredSplitScreenNum; // 0x248
	char bDisableMovementInput : 1; // 0x24c
	char bDisableLookAtInput : 1; // 0x24c
	char bHidePlayer : 1; // 0x24c
	char bHideHud : 1; // 0x24c
	TArray<FInterpGroupActorInfo> GroupActorInfos; // 0x250
	char bShouldShowGore : 1; // 0x260
	TArray<UInterpGroupInst*> GroupInst; // 0x268
	TArray<FCameraCutInfo> CameraCuts; // 0x278
	char bIsPlaying : 1; // 0x288
	char bReversePlayback : 1; // 0x288
	char bPaused : 1; // 0x288
	char bPendingStop : 1; // 0x288
	float InterpPosition; // 0x28c
	char ReplicationForceIsPlaying; // 0x294
	FMulticastInlineDelegate OnPlay; // 0x298
	FMulticastInlineDelegate OnStop; // 0x2a8
	FMulticastInlineDelegate OnPause; // 0x2b8
};

struct UTigerBuffShackles {
	UTigerCharacterEffect* ActiveEffect; // 0x248
	FName ShacklesStaggerAnimationName; // 0x250
	float DamageToDeal; // 0x258
};

struct UBlendSpaceBase {
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

struct UMaterialExpressionDecalMipmapLevel {
	FExpressionInput TextureSize; // 0x40
	float ConstWidth; // 0x54
	float ConstHeight; // 0x58
};

struct UTigerSpectateCameraBehavior {
	float FollowCameraDelay; // 0x128
	float CameraFollowSpeedMultiplier; // 0x12c
	float ConstantAddedCameraFollowSpeed; // 0x130
	float NewFollowPointOffsetMultiplier; // 0x134
	ATigerSpectatorPawn* SpectatorPawn; // 0x138
};

struct UTigerPartyManager {
	FMulticastInlineDelegate OnInviteReceived; // 0x28
	FMulticastInlineDelegate OnInviteRemoved; // 0x38
	FMulticastInlineDelegate OnJoinedParty; // 0x48
	FMulticastInlineDelegate OnLeftParty; // 0x58
	FMulticastInlineDelegate OnMemberJoinedParty; // 0x68
	FMulticastInlineDelegate OnMemberLeftParty; // 0x78
	FMulticastInlineDelegate OnLeaderChanged; // 0x88
	FMulticastInlineDelegate OnInviteAccepted; // 0x98
	FMulticastInlineDelegate OnInviteDeclined; // 0xa8
	FMulticastInlineDelegate OnPartyUpdated; // 0xb8
	FMulticastInlineDelegate OnInviteFailed; // 0xc8
	FMulticastInlineDelegate OnAcceptInviteFailed; // 0xd8
	FMulticastInlineDelegate OnSessionAvailable; // 0xe8
	FMulticastInlineDelegate OnCreateGameSessionFailed; // 0xf8
	FMulticastInlineDelegate OnPartyMaxMemberSizeUpdated; // 0x108
	TWeakObjectPtr<UTigerGameInstance> GameInstance; // 0x128
	TArray<UTigerUser*> PartyMembers; // 0x130
	TArray<UTigerPartyInvite*> Invites; // 0x140
	float TravelTimeoutSeconds; // 0x150
	float MaxInviteAgeSeconds; // 0x154
	int32_t MaxInvites; // 0x158
	UTigerPartyService* PartyService; // 0x168
	TMap<FString, double> LatestInviteAttemptTimestamps; // 0x208
	float DefaultInviteCooldown; // 0x258
	float DeclinedInviteCooldown; // 0x25c
};

struct UAnimBoneCompressionCodec {
	FString Description; // 0x28
};

struct UTBP_Ping_Storefront_C {
	TMap<ENUM_TelemetryPingType, UAkAudioEvent*> AudioEvents; // 0x128
};

struct UTBP_UI_WinScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Victory_VFX; // 0x268
	UWidgetAnimation* Victory_FadeOut; // 0x270
	UWidgetAnimation* Victory_FadeIn; // 0x278
	UTigerRichTextBlock* AnarchsText; // 0x280
	UImage* Bottom_Curve_Left; // 0x288
	UImage* Bottom_Curve_Right; // 0x290
	UCanvasPanel* CanvasPanel_Win; // 0x298
	UImage* Dot_Left; // 0x2a0
	UImage* Dot_Left_GLOW; // 0x2a8
	UImage* Dot_Right; // 0x2b0
	UImage* Dot_Right_GLOW; // 0x2b8
	UImage* Flashbang_01; // 0x2c0
	UImage* Flashbang_02; // 0x2c8
	UImage* Inner_Arch_Left; // 0x2d0
	UImage* Inner_Arch_Right; // 0x2d8
	UImage* Left_StandardArrow; // 0x2e0
	UImage* Lower_Diamond; // 0x2e8
	UImage* Middle_LowerArrow; // 0x2f0
	UImage* Middle_StandardArrow; // 0x2f8
	UImage* Right_StandardArrow; // 0x300
	UImage* Side_Arrow_Left; // 0x308
	UImage* Side_Arrow_Right; // 0x310
	UTBP_UI_HorizontalFadeSlot_C* TBP_UI_HorizontalFadeSlot; // 0x318
	UImage* Top_Arch; // 0x320
	UImage* Top_Arrow; // 0x328
	UImage* Top_Curve_Left; // 0x330
	UImage* Top_Curve_Right; // 0x338
	UImage* Top_StandardArrow; // 0x340
	UTigerRichTextBlock* VictoryText; // 0x348
	UImage* Win_Flash_VFX; // 0x350
	UImage* Win_VFX; // 0x358
	float Timer; // 0x360
};

struct UObjectReferencer {
	TArray<UObject*> ReferencedObjects; // 0x28
};

struct ATigerAiJudgeController {
	UTigerAiJudgeSmComponent* JudgeStateMachineComp; // 0x3b0
	FTigerSightConfigProperties StandardSightProperties; // 0x3b8
	FTigerSightConfigProperties CombatSightProperties; // 0x3d4
};

struct ULandscapeMeshCollisionComponent {
	FGuid MeshGuid; // 0x530
};

struct UEdGraphNode_Documentation {
	FString Link; // 0x98
	FString Excerpt; // 0xa8
};

struct UVariantSet {
	FText DisplayText; // 0x28
	bool bExpanded; // 0x58
	TArray<UVariant*> Variants; // 0x60
	UTexture2D* Thumbnail; // 0x70
};

struct ULandscapeSplineSegment {
	FLandscapeSplineSegmentConnection Connections[0x2]; // 0x28
	FInterpCurveVector SplineInfo; // 0x58
	TArray<FLandscapeSplineInterpPoint> Points; // 0x70
	FBox Bounds; // 0x80
	TArray<USplineMeshComponent*> LocalMeshComponents; // 0xa0
};

struct ATigerSingleChildActor {
	AActor* ChildActor; // 0x228
};

struct ATigerSHPBMarker {
	ATigerNPC* FollowingNPC; // 0x248
	FVector NPCLocation; // 0x250
	TSet<TWeakObjectPtr<AActor>> PerceivedBy; // 0x260
};

struct ATigerSpectatorPawn {
	UTigerSpringArmComponent* SpringArm; // 0x2b0
	FMulticastInlineDelegate OnSpectateeChanged; // 0x2b8
	FMulticastInlineDelegate OnEnoughStreamingDoneToSpectate; // 0x2c8
	ATigerPlayerState* CurrentSpectatee; // 0x2d8
	TWeakObjectPtr<ATigerPlayer> CurrentSpectateePlayer; // 0x2e0
	bool bIsWaitingForStreaming; // 0x2e8
	float LastSpectateeSwitchTime; // 0x2ec
	float MaxLoadingScreenTime; // 0x2f0
};

struct UCanvas {
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

struct ATBP_ScoutingFamiliar_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2a8
	UParticleSystemComponent* BatProjectileUpgrade; // 0x2b0
	USphereComponent* ScanSphere; // 0x2b8
	USceneComponent* Scene; // 0x2c0
	UParticleSystemComponent* BatProjectile; // 0x2c8
	TArray<ATigerCharacter*> RevealedCharacters; // 0x2d0
	UAkAudioEvent* AKEvent_StartScanning; // 0x2e0
	UParticleSystemComponent* ScoutEchoLocationSphereEffect; // 0x2e8
	FVector ForwardVector; // 0x2f0
	UAkAudioEvent* AKEvent_StopScanning; // 0x300
	UParticleSystemComponent* ScoutBatEffect; // 0x308
	UParticleSystemComponent* Projectile Smoke Trail; // 0x310
	int32_t ScanEffectAkEventID; // 0x318
	FSoftObjectPath NiagaraParticlePath; // 0x320
	UNiagaraSystem* CachedEffect; // 0x338
	UNiagaraComponent* NiagaraBats; // 0x340
	UTBP_UI_Discipline_Scout_WorldMarker_C* WorldMarkerWidget; // 0x348
	ATigerPlayer* CachedPlayer; // 0x350
};

struct USignificanceManager {
	FSoftClassPath SignificanceManagerClassName; // 0x108
};

struct ATigerNPC {
	FMulticastInlineDelegate OnAnimationModeChanged; // 0x988
	UTigerAICommandComponent* AICommandComponent; // 0x998
	UTigerNpcAccuracyComponent* AccuracyComponent; // 0x9a0
	UTigerEntityCombatComponent* EntityCombatComponent; // 0x9a8
	UParticleSystemComponent* NpcAwarenessComponent; // 0x9b0
	TWeakObjectPtr<ATigerCharacter> CurrentTarget; // 0x9b8
	FVector_NetQuantize CurrentTargetLocation; // 0x9c0
	ATigerCharacter* TargetToShoot; // 0x9d0
	ETigerAIAnimationMode AnimationMode; // 0x9d8
	ETigerCivilianEmotionalState EmotionalState; // 0x9d9
	int32_t EmotionalStateRandomPot[0x6]; // 0x9dc
	UAnimMontage* LuredCancelAnim; // 0x9f8
	UTigerNpcPropComponent* NpcPropComponent; // 0xa00
	float BumpTimeInterval; // 0xa28
	float HighPotenceBloodChange; // 0xa2c
	float EarliestHighPotenceBloodTime; // 0xa30
	float LastHighPotenceBloodTime; // 0xa34
	float PreferedMinimumDistanceBetweenPotent; // 0xa38
	FVector_NetQuantize RagdollImpulse; // 0xa3c
	FTigerNpcReactionData ReactionData; // 0xa48
	float MaxYawAngleToShoot; // 0xa58
	float MinTargetIsInfrontDotAngle; // 0xa5c
	FSharkRandomDeviation DownedStateDuration; // 0xa60
	FName HeartRateParam; // 0xa68
	FName BloodAmountParam; // 0xa70
	FName HeartSocketName; // 0xa78
	FName HeartLocationParam; // 0xa80
	float HeartLocationUpdateTime; // 0xa88
	UDamageType* LastDamageSource; // 0xa90
};

struct UTigerPingSetupAsset {
	UUserWidget* MapMarkerClass; // 0x30
	UTigerPingWorldInstanceUI* WidgetClass; // 0x38
	TArray<UTigerPingBase*> WorldPingTypes; // 0x40
	UTigerPingBase* DoublePressPingClass; // 0x50
	UTigerPingBase* DistanceFallbackPingClass; // 0x58
	TArray<UTigerPingBase*> InGamePingTypes; // 0x60
	TArray<UTigerPingBase*> PingBarkTypes; // 0x70
	UTigerPingBase* PingBarkDowned; // 0x80
	UTigerPingBase* PingBarkFullHealth; // 0x88
	UTigerPingBase* PingBarkNeedHealing; // 0x90
	UTigerPingBase* PingBarkMasquerade; // 0x98
	UTigerPingBase* PingInventoryWantsMeleeWeapon; // 0xa0
	UTigerPingBase* PingInventoryWantsRangedWeapon; // 0xa8
	UTigerPingBase* PingInventoryWantsItem; // 0xb0
	UTigerPingBase* PingLocation; // 0xb8
	UTigerPingBase* PingEnemy; // 0xc0
	UTigerPingBase* ClosestActorOverrides; // 0xc8
};

struct ATigerAreaEffect {
	UParticleSystem* StartParticleType; // 0x228
	UParticleSystem* LoopedParticleType; // 0x230
	UParticleSystem* EndParticleType; // 0x238
	UDamageType* DamageType; // 0x240
	ETigerDamageCauser DamageCauserType; // 0x248
	FRuntimeFloatCurve TimeDamageModifierCurve; // 0x250
	FRuntimeFloatCurve RangeDamageModifierCurve; // 0x2d8
	FRuntimeFloatCurve TimeHealingModifierCurve; // 0x360
	FRuntimeFloatCurve RangeHealingModifierCurve; // 0x3e8
	float Range; // 0x470
	float InitialDamageAmount; // 0x474
	float DamageAmount; // 0x478
	float InitialHealAmount; // 0x47c
	float HealAmount; // 0x480
	float TickRate; // 0x484
	float Duration; // 0x488
	float Delay; // 0x48c
	bool bShouldAffectCivilians; // 0x490
	UParticleSystemComponent* LoopedParticleComponent; // 0x498
};

struct ATigerCharacter {
	UTigerCharacterMeshManager* MeshManager; // 0x4c0
	UTigerRangedWeaponComponent* RangedWeaponComponent; // 0x4c8
	UTigerMeleeWeaponComponent* MeleeWeaponComponent; // 0x4d0
	UTigerCombatComponent* CombatComponent; // 0x4d8
	UTigerFeedingComponent* FeedingComponent; // 0x4e0
	UTigerBuffComponent* BuffComponent; // 0x4e8
	UTigerOutlineComponent* OutlineComponent; // 0x4f0
	UAkComponent* AudioComponent; // 0x4f8
	UAkComponent* NonOccludedAudioComponent; // 0x500
	USceneComponent* AdditionalMeshes; // 0x508
	USkeletalMeshComponent* HeadMesh; // 0x510
	USkeletalMeshComponent* HoodieMesh; // 0x518
	USkeletalMeshComponent* HairMesh; // 0x520
	USkeletalMeshComponent* HeadgearMesh; // 0x528
	USkeletalMeshComponent* EyewearMesh; // 0x530
	USkeletalMeshComponent* BodyAdditionalMesh; // 0x538
	FMulticastInlineDelegate OnCharacterAction; // 0x558
	bool bIsRootMotionDisabled; // 0x568
	float BaseMaxHealth; // 0x56c
	USkeletalMeshComponent* ThirdPersonWeaponMeshRef; // 0x570
	USkeletalMeshComponent* SecondaryWeaponMeshRef; // 0x578
	USceneComponent* ProjectileSpawnRef; // 0x580
	USceneComponent* SecondaryProjectileSpawnRef; // 0x588
	FTigerReplicatedCharacterStats ReplicatedCharacterStats; // 0x590
	bool bBlueprintReferencesSetup; // 0x620
	bool bShouldRestrictOffensiveActionsInElysium; // 0x621
	FMulticastInlineDelegate OnCharacterDeath; // 0x628
	float CurrentHealth; // 0x668
	FMulticastInlineDelegate OnMaxShieldReplicated; // 0x670
	uint16_t MaxShield; // 0x680
	uint16_t CurrentShield; // 0x682
	float LowHealthThreshold; // 0x684
	float HitAnimationInterval; // 0x68c
	FVector HealthBarOffset; // 0x69c
	ETigerGender BodyType; // 0x6a8
	bool bIsKindred; // 0x6a9
	ETigerCharacterType CharacterType; // 0x6aa
	FName RangedHitAnimationListName; // 0x6ac
	FName MeleeHitAnimationListName; // 0x6b4
	UPhysicsAsset* HitboxPhysicsAsset; // 0x6c0
	UPhysicsAsset* RagdollPhysicsAsset; // 0x6c8
	FTimerHandle RagdollTimer; // 0x6e0
	UAnimMontage* TimedMontageLoop; // 0x6e8
	FTimerHandle TimedMontageLoopTimer; // 0x6f0
	TArray<TWeakObjectPtr<ATigerCharacter>> CharmedByCharacters; // 0x708
	bool bIsDodging; // 0x718
	float SmoothYawInterpSpeed; // 0x720
	UWidgetComponent* HealthBarComponent; // 0x728
	USkeletalMeshSocket* WidgetSocket; // 0x730
};

struct ATigerBestialTrailVisualizer {
	TArray<FTigerPlayerSavedLocation> LocationHistory; // 0x228
	ATigerGameState* GameState; // 0x238
};

struct AControlPointMeshActor {
	UControlPointMeshComponent* ControlPointMeshComponent; // 0x228
};

struct UAnimSharingStateInstance {
	UAnimSequence* AnimationToPlay; // 0x2b8
	float PermutationTimeOffset; // 0x2c0
	float PlayRate; // 0x2c4
	bool bStateBool; // 0x2c8
	UAnimSharingInstance* Instance; // 0x2d0
};

struct UMovieSceneCameraShakeTrack {
	TArray<UMovieSceneSection*> CameraShakeSections; // 0x80
};

struct UMaterialExpressionTangentOutput {
	FExpressionInput Input; // 0x40
};

struct ATigerThrowingAxe {
	bool bHasBeenReflected; // 0x244
};

struct UTireConfig {
	float FrictionScale; // 0x30
	TArray<FTireConfigMaterialFriction> TireFrictionScales; // 0x38
};

struct UTigerDisciplineMajesty {
	UTigerMajestyConfig* Config; // 0x78
};

struct ASkyAtmosphere {
	USkyAtmosphereComponent* SkyAtmosphereComponent; // 0x228
};

struct UParticleModuleSize_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct ATigerBuildingSystemDepricated {
	UHierarchicalInstancedStaticMeshComponent* Front_00; // 0x290
	UHierarchicalInstancedStaticMeshComponent* Front_01; // 0x298
	UHierarchicalInstancedStaticMeshComponent* Front_02; // 0x2a0
	UHierarchicalInstancedStaticMeshComponent* Front_03; // 0x2a8
	UHierarchicalInstancedStaticMeshComponent* Front_04; // 0x2b0
	UHierarchicalInstancedStaticMeshComponent* Front_05; // 0x2b8
	UHierarchicalInstancedStaticMeshComponent* Front_06; // 0x2c0
	UHierarchicalInstancedStaticMeshComponent* Front_07; // 0x2c8
	UHierarchicalInstancedStaticMeshComponent* Left_00; // 0x2d0
	UHierarchicalInstancedStaticMeshComponent* Left_01; // 0x2d8
	UHierarchicalInstancedStaticMeshComponent* Left_02; // 0x2e0
	UHierarchicalInstancedStaticMeshComponent* Left_03; // 0x2e8
	UHierarchicalInstancedStaticMeshComponent* Left_04; // 0x2f0
	UHierarchicalInstancedStaticMeshComponent* Left_05; // 0x2f8
	UHierarchicalInstancedStaticMeshComponent* Left_06; // 0x300
	UHierarchicalInstancedStaticMeshComponent* Left_07; // 0x308
	UHierarchicalInstancedStaticMeshComponent* Back_00; // 0x310
	UHierarchicalInstancedStaticMeshComponent* Back_01; // 0x318
	UHierarchicalInstancedStaticMeshComponent* Back_02; // 0x320
	UHierarchicalInstancedStaticMeshComponent* Back_03; // 0x328
	UHierarchicalInstancedStaticMeshComponent* Back_04; // 0x330
	UHierarchicalInstancedStaticMeshComponent* Back_05; // 0x338
	UHierarchicalInstancedStaticMeshComponent* Back_06; // 0x340
	UHierarchicalInstancedStaticMeshComponent* Back_07; // 0x348
	UHierarchicalInstancedStaticMeshComponent* Right_00; // 0x350
	UHierarchicalInstancedStaticMeshComponent* Right_01; // 0x358
	UHierarchicalInstancedStaticMeshComponent* Right_02; // 0x360
	UHierarchicalInstancedStaticMeshComponent* Right_03; // 0x368
	UHierarchicalInstancedStaticMeshComponent* Right_04; // 0x370
	UHierarchicalInstancedStaticMeshComponent* Right_05; // 0x378
	UHierarchicalInstancedStaticMeshComponent* Right_06; // 0x380
	UHierarchicalInstancedStaticMeshComponent* Right_07; // 0x388
	UStaticMeshComponent* CornerFL_00; // 0x390
	UStaticMeshComponent* CornerFL_01; // 0x398
	UStaticMeshComponent* CornerFL_02; // 0x3a0
	UStaticMeshComponent* CornerFL_03; // 0x3a8
	UStaticMeshComponent* CornerFL_04; // 0x3b0
	UStaticMeshComponent* CornerFL_05; // 0x3b8
	UStaticMeshComponent* CornerFL_06; // 0x3c0
	UStaticMeshComponent* CornerFL_07; // 0x3c8
	UStaticMeshComponent* CornerLB_00; // 0x3d0
	UStaticMeshComponent* CornerLB_01; // 0x3d8
	UStaticMeshComponent* CornerLB_02; // 0x3e0
	UStaticMeshComponent* CornerLB_03; // 0x3e8
	UStaticMeshComponent* CornerLB_04; // 0x3f0
	UStaticMeshComponent* CornerLB_05; // 0x3f8
	UStaticMeshComponent* CornerLB_06; // 0x400
	UStaticMeshComponent* CornerLB_07; // 0x408
	UStaticMeshComponent* CornerBR_00; // 0x410
	UStaticMeshComponent* CornerBR_01; // 0x418
	UStaticMeshComponent* CornerBR_02; // 0x420
	UStaticMeshComponent* CornerBR_03; // 0x428
	UStaticMeshComponent* CornerBR_04; // 0x430
	UStaticMeshComponent* CornerBR_05; // 0x438
	UStaticMeshComponent* CornerBR_06; // 0x440
	UStaticMeshComponent* CornerBR_07; // 0x448
	UStaticMeshComponent* CornerRF_00; // 0x450
	UStaticMeshComponent* CornerRF_01; // 0x458
	UStaticMeshComponent* CornerRF_02; // 0x460
	UStaticMeshComponent* CornerRF_03; // 0x468
	UStaticMeshComponent* CornerRF_04; // 0x470
	UStaticMeshComponent* CornerRF_05; // 0x478
	UStaticMeshComponent* CornerRF_06; // 0x480
	UStaticMeshComponent* CornerRF_07; // 0x488
};

struct UTigerQuestCollection {
	TMap<FString, UTigerQuestline*> questLines; // 0x30
};

struct UTigerWeatherScenarioData {
	FName DebugName; // 0x30
};

struct UStaticMeshSimulationComponent {
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

struct UMaterialExpressionClearCoatNormalCustomOutput {
	FExpressionInput Input; // 0x40
};

struct UTigerAiCheckCanDiablerize {
	bool bConditionInvertedOnTick; // 0x68
};

struct UArchVisCharMovementComponent {
	FRotator RotationalAcceleration; // 0xb00
	FRotator RotationalDeceleration; // 0xb0c
	FRotator MaxRotationalVelocity; // 0xb18
	float MinPitch; // 0xb24
	float MaxPitch; // 0xb28
	float WalkingFriction; // 0xb2c
	float WalkingSpeed; // 0xb30
	float WalkingAcceleration; // 0xb34
};

struct UTigerUIColorSet {
	FLinearColor ColorArray[0x24]; // 0x30
};

struct UTBP_UI_InWorldIconBase_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c8
	UWidgetAnimation* OffscreenAnimation; // 0x2d0
	UCanvasPanel* ContentCanvas; // 0x2d8
	UImage* OffScreenDirectionIndicator; // 0x2e0
	UCanvasPanel* OffscreenDirectionParent; // 0x2e8
	UTextBlock* OffScreenMeterText; // 0x2f0
	UCanvasPanel* OnScreen; // 0x2f8
	float CONFIG_OffscreenIconOffset; // 0x300
	FTS_InWorldIconDistanceScaling CONFIG_DistanceScaling; // 0x304
};

struct ULandscapeSplinesComponent {
	TArray<ULandscapeSplineControlPoint*> ControlPoints; // 0x450
	TArray<ULandscapeSplineSegment*> Segments; // 0x460
	TArray<UMeshComponent*> CookedForeignMeshComponents; // 0x470
};

struct UImgMediaSource {
	FFrameRate FrameRateOverride; // 0x88
	FString ProxyOverride; // 0x90
	FDirectoryPath SequencePath; // 0xa0
};

struct UParticleModuleCollisionGPU {
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

struct UParticleModuleSpawnBase {
	char bProcessSpawnRate : 1; // 0x30
	char bProcessBurstList : 1; // 0x30
};

struct UMaterialExpressionSpriteTextureSampler {
	bool bSampleAdditionalTextures; // 0x80
	int32_t AdditionalSlotIndex; // 0x84
	FText SlotDisplayName; // 0x88
};

struct USoundNodeWaveParam {
	FName WaveParameterName; // 0x48
};

struct UEnvQueryGenerator_CurrentLocation {
	UEnvQueryContext* QueryContext; // 0x50
};

struct UTigerBrujahBaneRecklessness {
	float DamageTakenMultiplier; // 0x118
	float AutoDeactivateTimer; // 0x11c
};

struct UChaosDestructionListener {
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

struct UTigerSpringArmComponent {
	float HideCharacterBelowLength; // 0x2c0
	float SpringArmShortenSpeed; // 0x2c4
	float SpringArmLengthenSpeed; // 0x2c8
	float StepUpOffsetLerpSpeed; // 0x2cc
	TArray<TWeakObjectPtr<UStaticMeshComponent>> CurrentNearObjectFadeToggledObjects; // 0x340
};

struct UAkMediaAssetData {
	bool IsStreamed; // 0x28
	bool UseDeviceMemory; // 0x29
};

struct UMaterialExpressionSubtract {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	float ConstA; // 0x68
	float ConstB; // 0x6c
};

struct UParticleModuleBeamSource {
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

struct UTigerSupplyDropConsumableAsset {
	AActor* SupplyDropFlare; // 0x170
	AActor* SupplyDropHelicopterActor; // 0x178
	float DistanceFromPlayer; // 0x180
	float Height; // 0x184
};

struct UTigerPaperDollAnimInstance {
	FName DefaultSequenceName; // 0x3b8
};

struct UTigerCharacterMeshManager {
	TArray<FTigerStaticMeshData> StaticMeshes; // 0xb0
	TArray<FTigerPoseableMeshData> PoseableMeshes; // 0xc0
	FTigerCharacterMeshData Mesh[0xb]; // 0xd0
	UStaticPiercingPhysics* StaticPiercingPhysics; // 0x1d8
};

struct ABandwidthTestActor {
	FBandwidthTestGenerator BandwidthGenerator; // 0x228
};

struct AGameState {
	FName MatchState; // 0x278
	FName PreviousMatchState; // 0x280
	int32_t ElapsedTime; // 0x288
};

struct AMatineeActorCameraAnim {
	UCameraAnim* CameraAnim; // 0x2d0
};

struct UTigerDisciplineGuardBreak {
	UTigerGuardBreakConfig* Config; // 0x78
};

struct UTigerPassiveKindredCharmLogic {
	UTigerPassiveKindredCharmConfig* Config; // 0xc0
	ATigerPlayer* Player; // 0xc8
	ATigerKindredCharmEffectActor* EffectActorR; // 0xd0
	ATigerKindredCharmEffectActor* EffectActorL; // 0xd8
};

struct UTigerProjectionDashConfig {
	UAnimMontage* DownedMontage; // 0x170
	UAnimMontage* DashStartMontage; // 0x178
	UAnimMontage* DashEnterMontage; // 0x180
	UAnimMontage* DashExitMontage; // 0x188
	UTexture2D* DashIcon; // 0x190
	UTigerBuff* DashBuff; // 0x198
	UTigerBuff* ThornsBuff; // 0x1a0
	ATigerProjectionDashProjectile* ProjectionActor; // 0x1a8
	AActor* TargetIndicatorActor; // 0x1b0
	FVector TargetingRayStartOffset; // 0x1b8
	float DelayBeforeDashIsPossible; // 0x1c4
	float DashSpeed; // 0x1c8
	float DashExitVelocityScale; // 0x1cc
	float DashEnterDuration; // 0x1d0
	float DashExitDuration; // 0x1d4
	float ProjectionMaxDistance; // 0x1d8
	float ProjectionAutoDespawnDistance; // 0x1dc
	float ProjectionSpeed; // 0x1e0
	float ProjectionStoppedLifetime; // 0x1e4
	float TargetIndicatorLerpSpeed; // 0x1e8
	bool bDashMoveToExit; // 0x1ec
	ETigerProjectionDashCooldownStart CooldownStart; // 0x1ed
};

struct ULevelStreamingDynamic {
	char bInitiallyLoaded : 1; // 0x148
	char bInitiallyVisible : 1; // 0x148
};

struct AVolumetricCloud {
	UVolumetricCloudComponent* VolumetricCloudComponent; // 0x228
};

struct ACableActor {
	UCableComponent* CableComponent; // 0x228
};

struct UFieldSystemMetaDataIteration {
	int32_t Iterations; // 0xb0
};

struct UTigerCharacterFacePaintCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct UMovieSceneNiagaraParameterTrack {
	FNiagaraVariable Parameter; // 0x88
};

struct UTBP_WallJumpEffect_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x28
};

struct UPlaneFalloff {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	float Distance; // 0xc0
	FVector Position; // 0xc4
	FVector Normal; // 0xd0
	EFieldFalloffType Falloff; // 0xdc
};

struct UMaterialExpressionArctangent2Fast {
	FExpressionInput Y; // 0x40
	FExpressionInput X; // 0x54
};

struct UFileMediaSource {
	FString FilePath; // 0x88
	bool PrecacheFile; // 0x98
};

struct ATigerAISpawner {
	UTigerNPCAsset* NPCAsset; // 0x260
};

struct UTigerSocialUI {
	UTigerSocialSubscreenUI* CurrentSubscreen; // 0x3b0
};

struct UBlackboardKeyType_String {
	FString StringValue; // 0x30
};

struct UTBP_UI_PharmacyStore_Marker1_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UCanvasPanel* CanvasPanel_2; // 0x2c0
	UImage* JudgeMarkerImage; // 0x2c8
};

struct UABP_VMP_NOS_M_HAIR_06_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x780
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xbc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1000
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1440
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1880
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct UMaterialExpressionViewProperty {
	EMaterialExposedViewProperty Property; // 0x40
};

struct USubmixEffectDynamicsProcessorPreset {
	FSubmixEffectDynamicsProcessorSettings Settings; // 0xe0
};

struct ULocalLightComponent {
	ELightUnits IntensityUnits; // 0x330
	float Radius; // 0x334
	float AttenuationRadius; // 0x338
	FLightmassPointLightSettings LightmassSettings; // 0x33c
};

struct UTigerCharacterBeardCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct UPhysicsCollisionHandler {
	float ImpactThreshold; // 0x28
	float ImpactReFireDelay; // 0x2c
	USoundBase* DefaultImpactSound; // 0x30
	float LastImpactSoundTime; // 0x38
};

struct UTBP_ContextualHelp_Discipline_Archetype_UnlockInputReminder_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UTBP_UI_MaskedCardBorder_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x150
	float InitialCornerRadius; // 0x158
	float InitialBorderWidth; // 0x15c
	FLinearColor InitialBorderColor; // 0x160
	UTexture2D* InitialWeatheringTexture; // 0x170
	float InitialWeatheringOpacity; // 0x178
	float InitialWeatheringWidth; // 0x17c
	float InitialWeatheringFadeWidth; // 0x180
	float InitialWeatheringScale; // 0x184
	FVector2D InitialWeatheringOffset; // 0x188
	bool bRandomizeInitialWeatheringOffset; // 0x190
};

struct UAnimationAsset {
	USkeleton* Skeleton; // 0x38
	TArray<UAnimMetaData*> MetaData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UAISenseEvent_Hearing {
	FAINoiseEvent Event; // 0x28
};

struct UMagicLeapARPinContentBindings {
	TMap<FGuid, FMagicLeapARPinObjectIdList> AllContentBindings; // 0x28
};

struct UMaterialExpressionArcsine {
	FExpressionInput Input; // 0x40
};

struct UTBP_UI_Text_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	UTextBlock* TextWidget; // 0x288
	FText Text; // 0x290
	int32_t Size; // 0x2a8
};

struct UABP_VMP_VEN_F_HAIR_13_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3200
};

struct UBlueprintCore {
	UObject* SkeletonGeneratedClass; // 0x28
	UObject* GeneratedClass; // 0x30
	bool bLegacyNeedToPurgeSkelRefs; // 0x38
	FGuid BlueprintGuid; // 0x3c
};

struct ASpectatorBeaconClient {
	FString DestSessionId; // 0x2e8
	FSpectatorReservation PendingReservation; // 0x2f8
	ESpectatorClientRequestType RequestType; // 0x370
	bool bPendingReservationSent; // 0x371
	bool bCancelReservation; // 0x372
};

struct UForceFeedbackEffect {
	TArray<FForceFeedbackChannelDetails> ChannelDetails; // 0x28
	float Duration; // 0x38
};

struct UTigerAiSetCrouchedTask {
	bool bShouldCrouch; // 0x70
};

struct UTBP_UI_Crosshair_AutoShort_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UInterpTrackParticleReplay {
	TArray<FParticleReplayTrackKey> TrackKeys; // 0x70
};

struct UTigerArchetypeSelectPragueUI {
	int32_t GroupSize; // 0x290
	int32_t PreGameStateEndTime; // 0x294
	FString PreHighlightTag; // 0x298
	float TimeLeftUntilStateChange; // 0x2a8
	ETigerArchetypeSelectUiState UiState; // 0x2ac
	TArray<FTigerPersistentPlayerCharacter> PlayerCharacters; // 0x2b0
	ETigerPowerKitType SelectedArchetypeType; // 0x2c0
	UTigerPreMatchPaperDollComponent* PreMatchPaperDollComp; // 0x2c8
};

struct ATigerPlayerState {
	bool bGhostModeOnInit; // 0x328
	bool bIsGroupLeader; // 0x329
	UTigerGroupStateComponent* GroupStateComponent; // 0x330
	UTigerPlayerMasqueradeComponent* PlayerMasqueradeComponent; // 0x338
	bool bIsGroupFull; // 0x340
	UTigerPersistentPlayerState* PersistentPlayerState; // 0x348
	FMulticastInlineDelegate OnGroupChangedDelegate; // 0x350
	FMulticastInlineDelegate OnGroupFullnessChangedDelegate; // 0x360
	FMulticastInlineDelegate OnNameChangedDelegate; // 0x370
	FMulticastInlineDelegate OnApperanceChanged; // 0x380
	FMulticastInlineDelegate OnPlayerCardLoaded; // 0x390
	ETigerPowerKitType ArchetypeType; // 0x3a0
	ETigerGroupingMode GROUPINGMODE; // 0x3a1
	FMulticastInlineDelegate OnPawnChanged; // 0x3a8
	FMulticastInlineDelegate OnArchetypeChanged; // 0x3b8
	FMulticastInlineDelegate OnSeasonLevelChanged; // 0x3c8
	UTigerCollectibleProgressCache* CollectibleProgressCache; // 0x3d8
	FTigerGroupId GroupID; // 0x3e0
	int32_t CurrentSpectatorCount; // 0x3f0
	int32_t CurrentSeasonLevel; // 0x3f4
	FTigerCharacterAppearance CharacterAppearance; // 0x3f8
	bool bHasLoadedAppearance; // 0x478
	FTigerPersistentPlayerCardData PlayerCardData; // 0x47c
	bool bHasLoadedPlayerCard; // 0x4a8
	TWeakObjectPtr<APawn> OwningPawn; // 0x52c
	ATigerPlayerAppearanceCache* AppearanceCache; // 0x538
	AActor* Killer; // 0x540
	bool bIsVoipInputDeviceEnabled; // 0x555
};

struct UTigerUISettings {
	FDataTableRowHandle DefaultTextStyle; // 0x38
	TSoftObjectPtr<UDataTable> DefaultTextStyleSet; // 0x48
};

struct UInAppPurchaseCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct ULocationServicesImpl {
	FMulticastInlineDelegate OnLocationChanged; // 0x28
};

struct UTigerAiIsMovingOutOfBounds {
	FBlackboardKeySelector TargetPositionKey; // 0x68
	float OutOfBoundsDistance; // 0x90
};

struct UTigerAiShouldUseDisciplineBase {
	float LowHealthPercentage; // 0x68
	ATigerLocalAIController* LocalAIController; // 0x70
	ATigerPlayerController* LocalAiPlayerController; // 0x78
	ATigerPlayer* AiTigerPlayer; // 0x80
	UTigerDisciplineComponent* DisciplineComponent; // 0x88
	ATigerCharacter* AiTigerCharacter; // 0x90
};

struct UTigerDisciplineCharm {
	UTigerCharmConfig* Config; // 0x108
};

struct UTigerBuffFOTTChargeupInstance {
	UTigerBuffFOTTChargeup* FOTTChargeupBuff; // 0x88
};

struct UShaderPlatformQualitySettings {
	FMaterialQualityOverrides QualityOverrides[0x4]; // 0x28
};

struct USourceEffectStereoDelayPreset {
	FSourceEffectStereoDelaySettings Settings; // 0xb4
};

struct UEnvQueryGenerator_SimpleGrid {
	FAIDataProviderFloatValue GridSize; // 0x80
	FAIDataProviderFloatValue SpaceBetween; // 0xb8
	UEnvQueryContext* GenerateAround; // 0xf0
};

struct UPhysicsConstraintComponent {
	AActor* ConstraintActor1; // 0x1f8
	FConstrainComponentPropName ComponentName1; // 0x200
	AActor* ConstraintActor2; // 0x208
	FConstrainComponentPropName ComponentName2; // 0x210
	UPhysicsConstraintTemplate* ConstraintSetup; // 0x228
	FMulticastInlineDelegate OnConstraintBroken; // 0x230
	FConstraintInstance ConstraintInstance; // 0x240
};

struct UTigerJudgeAnimInstance {
	UTigerJudgeBaseState* CurrentJudgeState; // 0x3b8
	UTigerJudgeBaseState* OldJudgeState; // 0x3c0
};

struct UTigerSharedVendorUI {
	FMulticastInlineDelegate OnShortcutHeaderClicked; // 0x280
	FMulticastInlineDelegate OnMainHeaderClicked; // 0x290
	TWeakObjectPtr<ATigerPaperDoll> VendorPaperDoll; // 0x2a0
	ATigerPaperDoll* PaperDollClass; // 0x2a8
	FText VendorName; // 0x2b8
	FText VendorPurpose; // 0x2d0
};

struct UMaterialExpressionClamp {
	FExpressionInput Input; // 0x40
	FExpressionInput Min; // 0x54
	FExpressionInput Max; // 0x68
	EClampMode ClampMode; // 0x7c
	float MinDefault; // 0x80
	float MaxDefault; // 0x84
};

struct UTigerPingCoordinator {
	TArray<FTigerPingCoordinatorEntry> ActivePings; // 0x28
	TArray<UTigerPingControllerComponent*> GroupMemberPingControllers; // 0x38
};

struct UAkGroupValue {
	TArray<TSoftObjectPtr<UAkMediaAsset>> MediaDependencies; // 0x40
	uint32_t GroupShortID; // 0x50
};

struct UTigerChallengeQuestItemPickup {
	TSoftObjectPtr<ATigerInteractiveQuestItem> QuestItem; // 0xb0
};

struct UGetGeoLocationAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x50
	FMulticastInlineDelegate OnFailed; // 0x60
};

struct UAsyncTaskDownloadImage {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFail; // 0x40
};

struct UBoxFalloff {
	float Magnitude; // 0xb0
	float MinRange; // 0xb4
	float MaxRange; // 0xb8
	float Default; // 0xbc
	FTransform Transform; // 0xc0
	EFieldFalloffType Falloff; // 0xf0
};

struct UTigerAIPlayerFindNewPointTask {
	float NavigablePointRadius; // 0x98
	float MaxCenterDistance; // 0x9c
};

struct UMovieSceneBoolSection {
	bool DefaultValue; // 0xe8
	FMovieSceneBoolChannel BoolCurve; // 0xf0
};

struct UAnimCompress_PerTrackCompression {
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

struct UARCandidateObject {
	TArray<char> CandidateObjectData; // 0x30
	FString FriendlyName; // 0x40
	FBox BoundingBox; // 0x50
};

struct UTigerBuffClanReducesCooldownInstance {
	UTigerBuffClanReducesCooldown* ClanReduceCooldownBuff; // 0x88
	ATigerPlayer* Player; // 0x90
};

struct UGizmoPlaneScaleParameterSource {
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

struct UTBP_UI_Black_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x298
	UWidgetAnimation* FadeInThrobber; // 0x2a0
	UWidgetAnimation* FadeOutAnim; // 0x2a8
	UTBP_UI_Loading_Throbber_C* TBP_UI_Loading_Throbber; // 0x2b0
	int32_t ThrobberVisibilityReferenceTime; // 0x2b8
};

struct ALandscapeStreamingProxy {
	LazyObjectProperty LandscapeActor; // 0x5a0
};

struct UTigerGameModeLoadingScreens {
	TMap<TSoftClassPtr<UObject>, UTigerLoadingScreenAsset*> LoadingScreenAssets; // 0x30
};

struct UClothConfigNv {
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

struct UOnlineEngineInterfaceImpl {
	FName VoiceSubsystemNameOverride; // 0x28
};

struct APartyBeaconHost {
	UPartyBeaconState* State; // 0x250
	bool bLogoutOnSessionTimeout; // 0x2b8
	float SessionTimeoutSecs; // 0x2bc
	float TravelSessionTimeoutSecs; // 0x2c0
};

struct UTBP_UI_Discipline_ProjectionDash_WorldMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	UWidgetAnimation* OffScreenState; // 0x328
	UWidgetAnimation* DownArrow_FadeOut; // 0x330
	UWidgetAnimation* FadeOutAnimation; // 0x338
	UWidgetAnimation* FadeInAnimation; // 0x340
	UWidgetAnimation* DownArrow_Movement; // 0x348
	UTextBlock* DistanceText; // 0x350
	UImage* DownArrowImage; // 0x358
	UImage* IconWidget; // 0x360
	UCanvasPanel* RootCanvas; // 0x368
	UTigerDisciplineProjectionDash* ProjectionDashDiscipline; // 0x370
	FWidgetTransform OnScreenRootTransform; // 0x378
};

struct UTigerAIPetFindEndOfMastersPath {
	FBlackboardKeySelector MasterPlayer; // 0x70
};

struct UTigerInWorldIconController {
	UCanvasPanel* RootCanvas; // 0xb0
	TArray<UTigerInWorldWidget*> Widgets; // 0xb8
	UTigerInWorldWidget* ExplicitFocusWidget; // 0xc8
	float MaxFocusDistanceFromCrosshair; // 0xd8
	FBox2D ScreenMargins; // 0xdc
};

struct ATBP_VFX_BloodDecal_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	UStaticMeshComponent* StaticMesh; // 0x230
	USceneComponent* DefaultSceneRoot; // 0x238
	float FadeInTimeline_AlphaScaleTrack_588AF71A4B6DB400A9724382318A5E98; // 0x240
	ETimelineDirection FadeInTimeline__Direction_588AF71A4B6DB400A9724382318A5E98; // 0x244
	UTimelineComponent* FadeInTimeline; // 0x248
	float FadeOutTimeline_AlphaScaleTrack_FADD48494D9CA4FF7946218963114C70; // 0x250
	ETimelineDirection FadeOutTimeline__Direction_FADD48494D9CA4FF7946218963114C70; // 0x254
	UTimelineComponent* FadeOutTimeline; // 0x258
};

struct UARTrackedObject {
	UARCandidateObject* DetectedObject; // 0xf8
};

struct UMaterialExpressionDDY {
	FExpressionInput Value; // 0x40
};

struct USphereComponent {
	float SphereRadius; // 0x468
};

struct UMovieSceneTrackInstanceSystem {
	UMovieSceneTrackInstanceInstantiator* Instantiator; // 0x40
};

struct USlateBrushAsset {
	FSlateBrush Brush; // 0x28
};

struct UAISystemBase {
	FSoftClassPath AISystemClassName; // 0x28
	FName AISystemModuleName; // 0x40
	bool bInstantiateAISystemOnClient; // 0x50
};

struct UNiagaraPreviewAxis_InterpParamFloat {
	float Min; // 0x38
	float Max; // 0x3c
};

struct UReplicationGraphNode_GridCell {
	UReplicationGraphNode* DynamicNode; // 0x140
	UReplicationGraphNode_DormancyNode* DormancyNode; // 0x148
};

struct UDatasmithPostProcessVolumeTemplate {
	FDatasmithPostProcessSettingsTemplate Settings; // 0x30
	char bEnabled : 1; // 0x70
	char bUnbound : 1; // 0x70
};

struct UParticleModuleAccelerationDragScaleOverLife {
	UDistributionFloat* DragScale; // 0x38
	FRawDistributionFloat DragScaleRaw; // 0x40
};

struct UMovieSceneCinematicShotSection {
	FString ShotDisplayName; // 0x160
	FText DISPLAYNAME; // 0x170
};

struct UTigerAiCanCrouch {
	float MinCrouchDistanceBuffer; // 0x68
};

struct ATigerAICAPBase {
	TArray<ATigerNPC*> NPCUsingCAP; // 0x228
	TArray<UShapeComponent*> Colliders; // 0x238
	float Cooldown; // 0x248
	int32_t NumberOfSlots; // 0x24c
	bool bShouldAdjustTransform; // 0x250
	bool bAllowExternalProps; // 0x251
};

struct UNetConnection {
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

struct UTigerAnimNotifyState_AbortAnimationOnInput {
	float BlendOutTime; // 0x30
	bool bShouldAbortOnMovement; // 0x34
	bool bShouldAbortOnHeldBlock; // 0x35
};

struct UTigerBattlepassItem {
	int32_t SeasonId; // 0x110
};

struct UAkWwiseTreeSelector {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnItemDragged; // 0x118
};

struct UTigerTraversalStateDownedConfig {
	float DownedMaxSpeed; // 0x50
};

struct UTigerChatComponent {
	FSharkTokenBucket ClientMessageTokenBucket; // 0xb0
	FSharkTokenBucket ServerMessageTokenBucket; // 0xbc
	bool bIsChatBanned; // 0xc8
};

struct UMovieSceneAudioTrack {
	TArray<UMovieSceneSection*> AudioSections; // 0x80
};

struct UMovieSceneColorTrack {
	bool bIsSlateColor; // 0xb0
};

struct UMaterialExpressionConstant3Vector {
	FLinearColor Constant; // 0x40
};

struct USourceEffectRingModulationPreset {
	FSourceEffectRingModulationSettings Settings; // 0xb0
};

struct UParticleModule {
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

struct UTigerFetchPremiumCurrencyManager {
	UShMidasAdapter* MidasAdapter; // 0x28
	UTigerStoreService* StoreService; // 0x30
	TWeakObjectPtr<UTigerGameInstance> GameInstance; // 0x38
};

struct UBTService_DefaultFocus {
	char FocusPriority; // 0x98
};

struct ATigerAiPermanentCap {
	TArray<UTigerAICommandBase*> Commands; // 0x290
	ETigerCivilianEmotionalState EmotionalState; // 0x2a0
	FName CapContextBase; // 0x2a4
	int32_t CapContextStartingIndex; // 0x2ac
	UTigerNPCAsset* NpcAssetToSpawn; // 0x2b0
	int32_t LoopingStartIndex; // 0x2b8
	TWeakObjectPtr<ATigerNPC> PermanentNpc; // 0x2bc
};

struct AARSkyLight {
	UAREnvironmentCaptureProbe* CaptureProbe; // 0x238
};

struct ATigerTutorialTrainer {
	FMulticastInlineDelegate OnReviveEnded; // 0x790
	FMulticastInlineDelegate OnTutorialTrainerDowned; // 0x7a0
	FMulticastInlineDelegate OnTutorialTrainerDiablerized; // 0x7b0
	FTutorialTrainerDiablerizeData DiablerizeData; // 0x7c0
	FTutorialTrainerReviveData ReviveData; // 0x7e0
	float HealthOnEnteringDownedState; // 0x7f8
	float DiablerizeOffsetDistance; // 0x7fc
	float MaxDownedTime; // 0x800
	float RemainingDownedTime; // 0x804
	bool bShouldBeFriendlyWithPlayer; // 0x808
	bool bCanBeDiablerized; // 0x809
	bool bWantsToShoot; // 0x80a
	bool bIsDowned; // 0x80b
	bool bIsInvulnerableWhenDowned; // 0x80c
	ATigerCharacter* CurrentlyAimedAtCharacter; // 0x810
	UTigerNPCVisualAsset* VisualAsset; // 0x818
	UTigerNPCFacePoseMap* HeadMeshsPoseAssetsClass; // 0x820
	UTigerPhysicalInteractionAnimationAsset* DiablerizeAnimationSetAsset; // 0x828
	float TimeInEnterState; // 0x830
	float TimeInDrainState; // 0x834
	float TimeInLeaveState; // 0x838
	FName DownedMontageNames[0x4]; // 0x83c
	FName StaticEntryToDownedMontageName; // 0x85c
	FName InterruptSectionName; // 0x864
	FName EndSectionName; // 0x86c
	FName DodgeOnGroundBlendSpaceName; // 0x874
	FName DodgeInAirBlendSpaceName; // 0x87c
	FName DiablerizeAnimationName; // 0x884
	FName GetDiablerizedAnimationName; // 0x88c
	FName ExitDownedStateAnimationName; // 0x894
	UAnimMontage* CurrentTrainerDiablerizeMontage; // 0x8a8
	UAnimMontage* CurrentPlayerDiablerizeMontage; // 0x8b0
};

struct ATBP_ProjectionDashProjectile_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x280
	USceneComponent* IconRoot; // 0x288
	UParticleSystemComponent* Trail; // 0x290
	float Size; // 0x298
	bool Archetype; // 0x29c
	int32_t ProjectionDashSirenAkEventID; // 0x2a0
	int32_t ProjectionDashLoopAkEventID; // 0x2a4
};

struct UMeshComponent {
	TArray<UMaterialInterface*> OverrideMaterials; // 0x450
	char bEnableMaterialParameterCaching : 1; // 0x470
};

struct UPlanarReflectionComponent {
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

struct UPhysicsThrusterComponent {
	float ThrustStrength; // 0x1f8
};

struct UChildActorComponent {
	AActor* ChildActorClass; // 0x1f8
	AActor* ChildActor; // 0x200
	AActor* ChildActorTemplate; // 0x208
};

struct UTigerTraversalSlideState {
	UTigerTraversalStateSlidingConfig* Slidingconfig; // 0x78
};

struct UTigerAiRequestOutOfBoundsPursuitSquad {
	FBlackboardKeySelector TargetPlayer; // 0x70
	float NearbySquadDistance; // 0x98
};

struct UCreateSessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UEnvQueryGenerator_BlueprintBase {
	FText GeneratorsActionDescription; // 0x50
	UEnvQueryContext* Context; // 0x68
	UEnvQueryItemType* GeneratedItemType; // 0x70
};

struct UTBP_UI_Crosshair_Empty_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct USubmixEffectReverbPreset {
	FSubmixEffectReverbSettings Settings; // 0xd0
};

struct UNiagaraRibbonRendererProperties {
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

struct ATBP_Vfx_GroundSlam_Marker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x228
	UStaticMeshComponent* Marker; // 0x230
	USceneComponent* DefaultSceneRoot; // 0x238
};

struct UNiagaraDataInterfaceCurlNoise {
	uint32_t Seed; // 0x38
};

struct USoundNodeConcatenator {
	TArray<float> InputVolume; // 0x48
};

struct UAkSurfaceReflectorSetComponent {
	char bEnableSurfaceReflectors : 1; // 0x210
	TArray<FAkPoly> AcousticPolys; // 0x218
	char bEnableDiffraction : 1; // 0x228
	char bEnableDiffractionOnBoundaryEdges : 1; // 0x228
	AActor* AssociatedRoom; // 0x230
};

struct UTextureRenderTarget {
	float TargetGamma; // 0xe8
};

struct UParticleModuleKillBox {
	FRawDistributionVector LowerLeftCorner; // 0x30
	FRawDistributionVector UpperRightCorner; // 0x78
	char bAbsolute : 1; // 0xc0
	char bKillInside : 1; // 0xc0
	char bAxisAlignedAndFixedSize : 1; // 0xc0
};

struct UGizmoCircleComponent {
	FVector Normal; // 0x470
	float Radius; // 0x47c
	float Thickness; // 0x480
	int32_t NumSides; // 0x484
	bool bViewAligned; // 0x488
	bool bOnlyAllowFrontFacingHits; // 0x489
};

struct ATigerSidewalkSpline {
	TArray<UPrimitiveComponent*> OrderedComponentsToMerge; // 0x240
};

struct UInteractiveToolsContext {
	UInputRouter* InputRouter; // 0x58
	UInteractiveToolManager* ToolManager; // 0x60
	UInteractiveGizmoManager* GizmoManager; // 0x68
	TSoftClassPtr<UObject> ToolManagerClass; // 0x70
};

struct USceneComponent {
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

struct UTigerAiEntityMovementModeService {
	FBlackboardKeySelector TargetLocationKey; // 0x70
	FBlackboardKeySelector bCanShootKey; // 0x98
	float StartSprintDistanceBuffer; // 0xc0
};

struct UTigerAnimationSetAsset {
	UTigerAnimationSet* Set; // 0x30
};

struct UTigerColorSetAsset {
	TMap<FName, FColor> ColorSets; // 0x30
	TMap<FName, float> ScalarParameters; // 0x80
};

struct ATigerLootableVehicleDoorSpawner {
	ATigerVehicle* VehicleBody; // 0x280
};

struct UInputKeyDelegateBinding {
	TArray<FBlueprintInputKeyDelegateBinding> InputKeyDelegateBindings; // 0x28
};

struct UAkPS4InitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88
	FAkPS4AdvancedInitializationSettings AdvancedSettings; // 0xb0
};

struct UMaterialExpressionDistance {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
};

struct UScaleBox {
	EStretch Stretch; // 0x120
	EStretchDirection StretchDirection; // 0x121
	float UserSpecifiedScale; // 0x124
	bool IgnoreInheritedScale; // 0x128
};

struct UTigerBattlepassUI {
	int32_t MaxPageItems; // 0x3b0
	TArray<int32_t> PageSizes; // 0x3b8
	int32_t CurrentPageIndex; // 0x3c8
	TArray<UTigerClientSeasonalRewardTier*> RewardTiers; // 0x3d0
};

struct UMaterialInterface {
	USubsurfaceProfile* SubsurfaceProfile; // 0x38
	FLightmassMaterialInterfaceSettings LightmassSettings; // 0x50
	TArray<FMaterialTextureInfo> TextureStreamingData; // 0x60
	TArray<UAssetUserData*> AssetUserData; // 0x70
};

struct UARTexture {
	EARTextureType TextureType; // 0xe8
	float Timestamp; // 0xec
	FGuid ExternalTextureGuid; // 0xf0
	FVector2D Size; // 0x100
};

struct ASkyLight {
	USkyLightComponent* LightComponent; // 0x228
	char bEnabled : 1; // 0x230
};

struct UDynamicEntryBox {
	UUserWidget* EntryWidgetClass; // 0x1d8
};

struct UMovieScene2DTransformSection {
	FMovieScene2DTransformMask TransformMask; // 0xf0
	FMovieSceneFloatChannel Translation[0x2]; // 0xf8
	FMovieSceneFloatChannel Rotation; // 0x238
	FMovieSceneFloatChannel Scale[0x2]; // 0x2d8
	FMovieSceneFloatChannel Shear[0x2]; // 0x418
};

struct UInterpGroupCamera {
	UCameraAnim* CameraAnimInst; // 0x50
	float CompressTolerance; // 0x58
};

struct UMaterialExpressionSkyAtmosphereAerialPerspective {
	FExpressionInput WorldPosition; // 0x40
};

struct UTigerAiShouldReloadDecorator {
	bool bBaseUponFullAmmoPercentage; // 0x68
	float ReloadAmmoPercentage; // 0x6c
};

struct UWindowTitleBarArea {
	bool bWindowButtonsEnabled; // 0x120
	bool bDoubleClickTogglesFullscreen; // 0x121
};

struct UNiagaraDataInterfaceCurveBase {
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

struct UTigerChallengeReachLevel {
	int32_t LevelToReach; // 0xb0
};

struct UTigerOnlineStatusSubsystem {
	UTigerOnlineStatusMessages* OnlineStatusMessages; // 0x40
};

struct UTBP_UI_BloodHuntMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2b8
	UWidgetAnimation* PulseAnim_Beat; // 0x2c0
	UWidgetAnimation* PulseAnim; // 0x2c8
	UWidgetAnimation* BloodDot; // 0x2d0
	UImage* BloodHuntImage; // 0x2d8
	UImage* Image_57; // 0x2e0
	UImage* Pulse; // 0x2e8
};

struct UVerticalBoxSlot {
	FSlateChildSize Size; // 0x38
	FMargin Padding; // 0x40
	EHorizontalAlignment HorizontalAlignment; // 0x58
	EVerticalAlignment VerticalAlignment; // 0x59
};

struct ATigerBattlepassRewardPreview {
	UTigerInventoryItemBase* PreviewItem; // 0x228
	bool bIsZoomEnabled; // 0x230
	TArray<FName> CameraTags; // 0x238
	TArray<FTigerItemPreviewCamera> Cameras; // 0x248
	FViewTargetTransitionParams CameraTransitionParams; // 0x258
	float CameraRadius; // 0x268
	float CameraMoveSpeed; // 0x26c
};

struct UMaterialExpressionFunctionOutput {
	FName OutputName; // 0x40
	FString Description; // 0x48
	int32_t SortPriority; // 0x58
	FExpressionInput A; // 0x5c
	char bLastPreviewed : 1; // 0x70
	FGuid ID; // 0x74
};

struct UParticleModuleRotationOverLifetime {
	FRawDistributionFloat RotationOverLife; // 0x30
	char Scale : 1; // 0x60
};

struct UMaterialExpressionCurveAtlasRowParameter {
	UCurveLinearColor* Curve; // 0x60
	UCurveLinearColorAtlas* Atlas; // 0x68
	FExpressionInput InputTime; // 0x70
};

struct UComboBoxString {
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

struct UABP_VMP_BRU_F_HAIR_04_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_15; // 0x300
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_14; // 0x760
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_13; // 0xba0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_12; // 0xfe0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_11; // 0x1420
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x1860
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2100
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x2540
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x2980
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x2dc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x3200
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x3640
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x3a80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x3ec0
};

struct USourceEffectSimpleDelayPreset {
	FSourceEffectSimpleDelaySettings Settings; // 0xa8
};

struct UBTDecorator_KeepInCone {
	float ConeHalfAngle; // 0x68
	FBlackboardKeySelector ConeOrigin; // 0x70
	FBlackboardKeySelector Observed; // 0x98
	char bUseSelfAsOrigin : 1; // 0xc0
	char bUseSelfAsObserved : 1; // 0xc0
};

struct UTigerCapturePointProgressUI {
	FText YouCapturingStatusText; // 0x280
	FText EnemyCapturingStatusText; // 0x298
	FText ContestedStatusText; // 0x2b0
	ETigerCapturePointStatus CaptureStatus; // 0x2c8
	float PercentageLeft; // 0x2cc
};

struct ADatasmithAreaLightActor {
	EDatasmithAreaLightActorType LightType; // 0x228
	EDatasmithAreaLightActorShape LightShape; // 0x229
	FVector2D Dimensions; // 0x22c
	float Intensity; // 0x234
	ELightUnits IntensityUnits; // 0x238
	FLinearColor Color; // 0x23c
	float Temperature; // 0x24c
	UTextureLightProfile* IESTexture; // 0x250
	bool bUseIESBrightness; // 0x258
	float IESBrightnessScale; // 0x25c
	FRotator Rotation; // 0x260
	float SourceRadius; // 0x26c
	float SourceLength; // 0x270
	float AttenuationRadius; // 0x274
	float SpotlightInnerAngle; // 0x278
	float SpotlightOuterAngle; // 0x27c
};

struct UTigerDodgeBuffInstance {
	UTigerDodgeBuff* BuffClassDefaultObject; // 0x88
};

struct UTigerGameSettings {
	FSoftObjectPath QuestCollection; // 0x38
	bool bEnableNpcSpawning; // 0x50
	float NpcLocationCorrectionInterval; // 0x54
	float ItemClusterSize; // 0x58
	float ItemClusterExtraReplicationRange; // 0x5c
	int32_t BuildingSystemVersion; // 0x60
	int32_t RoofSystemVersion; // 0x64
	int32_t RoofSystemFreeTransformableVersion; // 0x68
	FVector SideVolumeExtents; // 0x6c
	float BelowSideMargin; // 0x78
	float BelowDepthMargin; // 0x7c
	float BelowVolumeHeight; // 0x80
	float ShallowBalconyDepth; // 0x84
	bool bEnableApartments; // 0x88
	ATigerBuildingWallPreviewer* BuildingWallPreviewerClass; // 0x90
	bool bEnableStatisticsGathering; // 0x98
	bool bEnableLandingPage; // 0x99
	bool bEnableIntro; // 0x9a
	FSoftObjectPath TutorialLevel; // 0xa0
	FSoftObjectPath TransferFromMatchLevel; // 0xb8
	TSoftClassPtr<UObject> CustomizationOptions; // 0xd0
	TSoftClassPtr<UObject> ItemsDatabase; // 0xf8
	TSoftClassPtr<UObject> GrimoireTree; // 0x120
	TSoftClassPtr<UObject> GrimoireSeasonDatabase; // 0x148
	TSoftObjectPtr<UTigerGrimoireEntry> TrainingVideoGrimoireEntry; // 0x170
	TSoftClassPtr<UObject> ChallengeDatabase; // 0x198
	FSoftObjectPath MasteryChallenges; // 0x1c0
	FString PromotionalPopupConfigUrl; // 0x1d8
	TSoftObjectPtr<UMaterial> AssetStatusDoNotUseMaterial; // 0x1e8
	bool bLogNetworkMovementFlagsOnServer; // 0x210
	FRotator SavedPlayerRotation; // 0x214
	FVector SavedPlayerLocation; // 0x220
};

struct UTigerTankyChargeConfig {
	UAnimMontage* Montage; // 0x160
	float DashDistance; // 0x168
	float DashDuration; // 0x16c
	float DashExitVelocity; // 0x170
	FVector DashHitboxExtents; // 0x174
	float EndHitRadius; // 0x180
	float HitDamage; // 0x184
	float KnockbackForce; // 0x188
};

struct UTigerPostMatchScreenUI {
	FMulticastInlineDelegate OnReadyToTravel; // 0x298
};

struct UCineCameraComponent {
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

struct UTigerCustomBlendSpace1DListGender {
	UBlendSpace1D* BlendSpaces[0x2]; // 0x28
};

struct UTBP_UI_JoinPartyElysiumScreen_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UTBP_UI_MenuButton_C* ExitButton; // 0x298
	UThrobber* LoadingThrobber; // 0x2a0
	UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x2a8
	UTBP_UI_MenuButton_C* TryAgainButton; // 0x2b0
	UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2b8
	TArray<FBlueprintSessionResult> FoundSessions; // 0x2c0
	ESlateVisibility ThrobberVisibility; // 0x2d0
	FText TitleText; // 0x2d8
	ESlateVisibility ButtonVisibility; // 0x2f0
	FMulticastInlineDelegate OnFailed; // 0x2f8
	FMulticastInlineDelegate OnSuccess; // 0x308
};

struct UTBP_ContextualHelp_Shield_Break_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UNavigationSystemConfig {
	FSoftClassPath NavigationSystemClass; // 0x28
	FNavAgentSelector SupportedAgentsMask; // 0x40
	FName DefaultAgentName; // 0x44
	char bIsOverriden : 1; // 0x4c
};

struct UDatasmithActorTemplate {
	TSet<FName> Layers; // 0x30
	TSet<FName> Tags; // 0x80
};

struct UTBP_TigerGameInstance_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x798
	UTBP_UI_JoinElysiumScreen_C* JoinElysiumScreenWB; // 0x7a0
	UTBP_UI_LobbyMenu_C* LobbyMenuWB; // 0x7a8
	UTBP_UI_HostMenu_C* HostMenuWB; // 0x7b0
	UTBP_UI_FindGameFailedMenu_C* FindGameFailedMenuWB; // 0x7b8
	int32_t MaxPlayers; // 0x7c0
	FText ServerName; // 0x7c8
	UTBP_UI_MatchMenu_C* MatchMenuWB; // 0x7e0
	FString PlayerSettingsSave; // 0x7e8
	bool bMainMenuIsOpen; // 0x7f8
	UTBP_UI_JoinGameMenu_C* JoinGameMenuWB; // 0x800
	UTBP_UI_GroupInvitationList_C* InvitationListWB; // 0x808
	UTBP_UI_WinScreen_C* WinScreenWB; // 0x810
	UTBP_UI_ServerSelection_C* ServerSelectionMenuWB; // 0x818
	FMulticastInlineDelegate OnLoadingScreenFullyOpaque; // 0x820
	FMulticastInlineDelegate OnJoinGameCountdownBegin; // 0x830
	UTBP_UI_TutorialMenu_C* TutorialMenuWB; // 0x840
	UTBP_UI_JoinPartyElysiumScreen_C* JoinPartyElysiumScreenWB; // 0x848
	TSoftObjectPtr<UObject> ErrorStringTable; // 0x850
	FString TraveledFrom; // 0x878
	FTigerBpFindSessionSelectedSession SelectedSession; // 0x888
	UAkAudioEvent* MenuMusicEvent; // 0x998
	UTBP_UI_Tutorial_IntroText_C* TutorialIntroWB; // 0x9a0
	FMulticastInlineDelegate OnTitleScreenFadeOutStarted; // 0x9a8
};

struct UABP_VMP_TOR_F_HAIR_02_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x2d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0x710
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0xb50
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0xf90
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xfb0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0xfd0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1410
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1850
	FAnimNode_Root AnimGraphNode_Root; // 0x1c90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x1cc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2100
};

struct ATigerLootLocation {
	UTigerLootLocationConfiguration* Configuration; // 0x260
	FText EnteringAreaMainText; // 0x268
	FText EnteringAreaSubText; // 0x280
	UTexture2D* EnteringAreaTextBackground; // 0x298
	TArray<ATigerLootSpawner*> OverlappingLootSpawners; // 0x2a0
	TArray<ATigerLootSpawner*> AlwaysOverlappingLootSpawner; // 0x2b0
	char GameTypeFilter; // 0x2c0
	float EnteringPromptCooldown; // 0x2cc
};

struct UTigerScreenshotMapGenerationSettings {
	float Width; // 0x38
	int32_t Resolution; // 0x3c
	FVector2D Start; // 0x40
	FVector2D End; // 0x48
	float Height; // 0x50
	FTigerPostProcessSettingsSetup PostProcessSetup; // 0x58
};

struct UDirectionalStyle_C {
	ETigerWeaponSlot OutWeaponSlot; // 0x48
};

struct UTigerReplicationGraph {
	UReplicationGraphNode_GridSpatialization2D* GridNode; // 0x498
	UTigerReplicationGraphNode_GridSpatialization2D_PlayerSpawned* PlayerSpawnedGridNode; // 0x4a0
	UReplicationGraphNode_ActorList* AlwaysRelevantNode; // 0x4a8
	UTigerReplicationGraphNode_OwnerRelevant* OwnerRelevantNode; // 0x4b0
};

struct UBTTask_RotateToFaceBBEntry {
	float Precision; // 0x98
};

struct UTigerBuffMeleeChargeAttack {
	UParticleSystem* AttackParticleEffect; // 0x248
};

struct UMaterialExpressionLinearInterpolate {
	FExpressionInput A; // 0x40
	FExpressionInput B; // 0x54
	FExpressionInput Alpha; // 0x68
	float ConstA; // 0x7c
	float ConstB; // 0x80
	float ConstAlpha; // 0x84
};

struct UEdGraph {
	UEdGraphSchema* Schema; // 0x28
	TArray<UEdGraphNode*> Nodes; // 0x30
	char bEditable : 1; // 0x40
	char bAllowDeletion : 1; // 0x40
	char bAllowRenaming : 1; // 0x40
};

struct UAIAsyncTaskBlueprintProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFail; // 0x38
};

struct UTigerDialogueCondition {
	bool bFalseCondition; // 0x28
};

struct ATigerNPCSpawningBase {
	ATigerAISplinePath* AISplinePath; // 0x228
	FName SpawningGroup; // 0x230
	int32_t SpawnAmount; // 0x238
	FGuid SpawningSubGroupId; // 0x23c
	float Prio; // 0x24c
	bool bShouldBeManuallyActivated; // 0x250
	FName MovementGroup; // 0x254
};

struct UTBP_UI_GetDevTicketSection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTBP_UI_Button_CTA_C* Button_CTA_SignInButton; // 0x268
	UTigerStyledRichTextBlock* DevelopmentLogInText; // 0x270
	UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x278
	UTBP_UI_SmallErrorMessage_C* TBP_UI_SmallErrorMessage_Development; // 0x280
	UTBP_UI_TextButton_C* TBP_UI_TextButton_ExitGame; // 0x288
	FMulticastInlineDelegate SignIn; // 0x290
	FMulticastInlineDelegate ExitGame; // 0x2a0
};

struct UParticleModuleColorScaleOverLife {
	FRawDistributionVector ColorScaleOverLife; // 0x30
	FRawDistributionFloat AlphaScaleOverLife; // 0x78
	char bEmitterTime : 1; // 0xa8
};

struct UMovieSceneNiagaraTrack {
	TArray<UMovieSceneSection*> Sections; // 0x78
};

struct UTigerMasqueradeConsequenceMapAreaMarkerSyncInstance {
	UTigerMasqueradeMarker* AreaMarkerClass; // 0x58
	float AreaRadius; // 0x60
	UTigerMasqueradeMarkerProxy* MapMarkerProxy; // 0x68
};

struct ATigerLocalAIControllerBase {
	UBehaviorTree* BehaviorTree; // 0x330
	UTigerInteractionControllerComponent* InteractionControllerComponent; // 0x338
	float LowShieldThreshold; // 0x340
	ATigerPlayerController* LocalPlayerController; // 0x348
	float SightRange; // 0x350
	float LoseSightModifier; // 0x354
	float VisionAngleDegrees; // 0x358
	float AimOffsetAmount; // 0x35c
	float AimAccuracy; // 0x360
	float MinimumAcceptableDamageMultiplier; // 0x364
	ATigerPlayerCameraManager* TigerPlayerCameraManager; // 0x368
	UBehaviorTreeComponent* BehaviorComp; // 0x370
	UAIPerceptionComponent* AIPerceptionComp; // 0x378
	UBlackboardComponent* BlackboardComp; // 0x380
	UMovementComponent* playerMovComp; // 0x388
	UPathFollowingComponent* PathFollowingComp; // 0x390
	APawn* LocalPawn; // 0x398
	ATigerPlayer* PlayerPawn; // 0x3a0
	TMap<AActor*, float> TemporaryIgnoredTargets; // 0x3d0
	ATigerCharacter* FocusCharacter; // 0x430
	float LowHealthThreshold; // 0x45c
	float BotDifficulty; // 0x474
};

struct ATigerThrallTable {
	UTigerThrallMapUI* TigerThrallMapUI; // 0x280
	bool bIsThrallMapUIOpened; // 0x288
	UCameraComponent* Camera; // 0x290
	float TimeToTransition; // 0x298
	float CameraExponent; // 0x29c
	UStaticMeshComponent* TableMesh; // 0x2a0
	ATigerPlayer* InteractingPlayer; // 0x2a8
};

struct USynthComponentMonoWaveTable {
	FMulticastInlineDelegate OnTableAltered; // 0x6c0
	FMulticastInlineDelegate OnNumTablesChanged; // 0x6d0
	UMonoWaveTableSynthPreset* CurrentPreset; // 0x6e0
};

struct UMaterialExpressionSquareRoot {
	FExpressionInput Input; // 0x40
};

struct UABP_VMP_TOR_F_HAIR_05_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_10; // 0x2d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x710
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0xb50
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0xf90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0xfb0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0x13f0
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1830
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x1850
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1c90
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x20d0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x2510
	FAnimNode_Root AnimGraphNode_Root; // 0x2950
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2980
};

struct USequenceCameraShakeCameraStandIn {
	float FieldOfView; // 0x30
};

struct UMovieScenePrimitiveMaterialTrack {
	int32_t MaterialIndex; // 0xb0
};

struct UParticleModuleVelocity_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0xb0
};

struct ATigerBloodVeinTooltipLocation {
	float MaximumDistance; // 0x228
	bool bIsVisible; // 0x22c
};

struct UMediaTimeStampInfo {
	FTimespan Time; // 0x28
	int64_t SequenceIndex; // 0x30
};

struct UTigerCollectibleSystem {
	UTigerExperienceEvent* CollectiblePickupExpEvent; // 0xb0
	UTigerItemAsset* GenericCollectibleItemAsset; // 0xb8
};

struct UTigerCompassMarkerWidget {
	FVector MarkerWorldLocation; // 0x280
	UTexture2D* MarkerTexture; // 0x290
};

struct UTigerHUDSettings {
	ETigerDamageNumberAmount DamageNumberAmountSetting; // 0x38
};

struct UTBP_UI_InvalidGameClient_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UButton* DeveloperButton; // 0x298
	UTBP_UI_ConfirmMenu_C* TBP_UI_ConfirmMenu; // 0x2a0
	FMulticastInlineDelegate OnExited; // 0x2a8
	FMulticastInlineDelegate OnIgnored_Dispatch; // 0x2b8
};

struct UNiagaraComponent {
	UNiagaraSystem* Asset; // 0x450
	ENiagaraTickBehavior TickBehavior; // 0x458
	FNiagaraUserRedirectionParameterStore OverrideParameters; // 0x460
	char bForceSolo : 1; // 0x528
	char bEnableGpuComputeDebug : 1; // 0x528
	char bAutoDestroy : 1; // 0x554
	char bRenderingEnabled : 1; // 0x554
	char bAutoManageAttachment : 1; // 0x554
	char bAutoAttachWeldSimulatedBodies : 1; // 0x554
	float MaxTimeBeforeForceUpdateTransform; // 0x558
	TArray<FNiagaraMaterialOverride> EmitterMaterials; // 0x560
	FMulticastInlineDelegate OnSystemFinished; // 0x578
	TWeakObjectPtr<USceneComponent> AutoAttachParent; // 0x588
	FName AutoAttachSocketName; // 0x590
	EAttachmentRule AutoAttachLocationRule; // 0x598
	EAttachmentRule AutoAttachRotationRule; // 0x599
	EAttachmentRule AutoAttachScaleRule; // 0x59a
};

struct APhysicsVolume {
	float TerminalVelocity; // 0x260
	int32_t Priority; // 0x264
	float FluidFriction; // 0x268
	char bWaterVolume : 1; // 0x26c
	char bPhysicsOnContact : 1; // 0x26c
};

struct UAssetExportTask {
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

struct UTexture2D {
	int32_t LevelIndex; // 0xe8
	int32_t FirstResourceMemMip; // 0xec
	char bTemporarilyDisableStreaming : 1; // 0xf0
	TextureAddress AddressX; // 0xf1
	TextureAddress AddressY; // 0xf2
	FIntPoint ImportedSize; // 0xf4
};

struct UBTTask_MoveTo {
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

struct UBTDecorator_TimeLimit {
	float TimeLimit; // 0x68
};

struct UPawnAction_Move {
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

struct UTigerCharacterCombinedItemConfiguration {
	TSoftClassPtr<UObject> CombinedItemClassType; // 0x110
	TArray<FTigerInventoryCombinedItemValue> Items; // 0x138
};

struct UTigerSwiftStrikeConfig {
	float DashDistance; // 0x160
	float StartupTime; // 0x164
	float DashTime; // 0x168
	float DashDamage; // 0x16c
	FVector2D DashHitBoxSize; // 0x170
	float StrikeDelay; // 0x178
	float StrikeDuration; // 0x17c
	float StrikeDamage; // 0x180
	UTigerBuff* StrikeDebuff; // 0x188
	FVector StrikeHitBoxSize; // 0x190
	bool DrawDebugInfo; // 0x19c
};

struct UTigerMasqueradeConsequenceActionWorldMaker {
	ATigerMasqueradeActionMarker* MarkerClass; // 0x60
};

struct UTigerRenderingSettings {
	int32_t MaxSpotLightShadowCasters; // 0x38
	TSoftObjectPtr<UMaterialInterface> LastLodMaterialMaster; // 0x40
	TArray<FName> LastLodExtractionParameters; // 0x68
	TArray<TSoftObjectPtr<UMaterialInterface>> MaterialsToExclude; // 0x78
};

struct UClothPhysicalMeshDataNv_Legacy {
	TArray<float> MaxDistances; // 0xe0
	TArray<float> BackstopDistances; // 0xf0
	TArray<float> BackstopRadiuses; // 0x100
	TArray<float> AnimDriveMultipliers; // 0x110
};

struct UTBP_ContextualHelp_Tutorial_Slide_Gamepad_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UTBP_ContextualHelp_Tutorial_PassivePower_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct AAmbientSound {
	UAudioComponent* AudioComponent; // 0x228
};

struct UFloatingPawnMovement {
	float MaxSpeed; // 0x138
	float Acceleration; // 0x13c
	float Deceleration; // 0x140
	float TurningBoost; // 0x144
	char bPositionCorrected : 1; // 0x148
};

struct UPaperGroupedSpriteComponent {
	TArray<UMaterialInterface*> InstanceMaterials; // 0x478
	TArray<FSpriteInstanceData> PerInstanceSpriteData; // 0x488
};

struct ULightComponent {
	float Temperature; // 0x230
	float MaxDrawDistance; // 0x234
	float MaxDistanceFadeRange; // 0x238
	char bUseTemperature : 1; // 0x23c
	int32_t ShadowMapChannel; // 0x240
	float MinRoughness; // 0x248
	float SpecularScale; // 0x24c
	float ShadowResolutionScale; // 0x250
	float ShadowBias; // 0x254
	float ShadowSlopeBias; // 0x258
	float ShadowSharpen; // 0x25c
	float ContactShadowLength; // 0x260
	char ContactShadowLengthInWS : 1; // 0x264
	char InverseSquaredFalloff : 1; // 0x264
	char CastTranslucentShadows : 1; // 0x264
	char bCastShadowsFromCinematicObjectsOnly : 1; // 0x264
	char bAffectDynamicIndirectLighting : 1; // 0x264
	char bForceCachedShadowsForMovablePrimitives : 1; // 0x264
	FLightingChannels LightingChannels; // 0x268
	UMaterialInterface* LightFunctionMaterial; // 0x270
	FVector LightFunctionScale; // 0x278
	UTextureLightProfile* IESTexture; // 0x288
	char bUseIESBrightness : 1; // 0x290
	float IESBrightnessScale; // 0x294
	float LightFunctionFadeDistance; // 0x298
	float DisabledBrightness; // 0x29c
	char bEnableLightShaftBloom : 1; // 0x2a0
	float BloomScale; // 0x2a4
	float BloomThreshold; // 0x2a8
	float BloomMaxBrightness; // 0x2ac
	FColor BloomTint; // 0x2b0
	bool bUseRayTracedDistanceFieldShadows; // 0x2b4
	float RayStartOffsetDepthScale; // 0x2b8
};

struct UParticleModuleLocationDirect {
	FRawDistributionVector Location; // 0x30
	FRawDistributionVector LocationOffset; // 0x78
	FRawDistributionVector ScaleFactor; // 0xc0
	FRawDistributionVector Direction; // 0x108
};

struct UNiagaraEventReceiverEmitterAction_SpawnParticles {
	uint32_t NumParticles; // 0x28
};

struct UTigerDisciplineAnimTriggeredConfig {
	UAnimMontage* Montage; // 0x160
	ETigerDisciplinesEnum DisciplineType; // 0x168
	float ActiveTimeAfterTrigger; // 0x16c
};

struct UInterpTrackInstProperty {
	TFieldPath<FProperty> InterpProperty; // 0x28
	UObject* PropertyOuterObjectInst; // 0x48
};

struct UParticleModuleLifetime_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x60
};

struct UParticleModuleLocationPrimitiveSphere {
	FRawDistributionFloat StartRadius; // 0xb0
};

struct UTigerDistrictData {
	UTexture2D* MapTexture; // 0x30
	FDistrictDataAnchor FirstAnchor; // 0x38
	FDistrictDataAnchor SecondAnchor; // 0x48
	bool bSpawnHighPotenceBlood; // 0x58
	bool bSpawnSuperHighPotenceBlood; // 0x59
};

struct UTBP_UI_ServerSelection_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UTBP_UI_MenuButton_C* CancelButton; // 0x298
	UTBP_UI_MenuButton_C* ContinueButton; // 0x2a0
	UComboBoxString* ServerComboBox; // 0x2a8
	UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x2b0
	FTigerBpFindSessionResultList Sessions; // 0x2b8
	FMulticastInlineDelegate OnServerSelected; // 0x2e0
	FMulticastInlineDelegate OnCancel; // 0x2f0
};

struct UMovieSceneSection {
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

struct UBTTask_SetTagCooldown {
	FGameplayTag CooldownTag; // 0x70
	bool bAddToExistingDuration; // 0x78
	float CooldownDuration; // 0x7c
};

struct UInGameAdManager {
	char bShouldPauseWhileAdOpen : 1; // 0x38
	TArray<FDelegate> ClickedBannerDelegates; // 0x40
	TArray<FDelegate> ClosedAdDelegates; // 0x50
};

struct UConstantQNRTSettings {
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

struct ATBP_Trap_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x328
	USpotLightComponent* TrapLightBottom; // 0x330
	USceneComponent* IconLocation; // 0x338
	USceneComponent* IconRoot; // 0x340
	USpotLightComponent* TrapLightTop; // 0x348
	UMaterialInstanceDynamic* Dyn material; // 0x350
	UCurveFloat* Curve; // 0x358
	UTigerTrapsConfig* TrapConfig; // 0x360
	UTigerInWorldWidget* InWorldWidget; // 0x368
};

struct UTigerAnimNotifyState_TimedIndoorOutDoorParticleEffect {
	UParticleSystem* IndoorPSTemplate; // 0x30
	UParticleSystem* OutdoorPSTemplate; // 0x38
	ETigerPlayOnClients PlayOnClients; // 0x40
	FName SocketName; // 0x44
	FVector LocationOffset; // 0x4c
	FRotator RotationOffset; // 0x58
	bool bDestroyAtEnd; // 0x64
	UTigerParticleStrategyChooseSystem* ChooseParticleSystemOverride; // 0x68
	UTigerParticleStrategyPostSpawn* ParticlePostSpawnModification; // 0x70
};

struct UMovieSceneCameraShakeSourceShakeSection {
	FMovieSceneCameraShakeSectionData ShakeData; // 0xe8
};

struct UTigerAiPlayerMainStateService {
	ATigerLocalAIController* LocalAIController; // 0x78
	ATigerPlayer* AiPlayer; // 0x80
	ATigerCharacter* TargetCharacter; // 0x88
	UTigerInventoryComponent* LocalAiInventory; // 0x90
	ATigerCharacter* CharacterFromWhichFleeing; // 0x98
	float FleeAttackDistance; // 0xd0
};

struct ATigerBlindingBeautyEffectActor {
	ATigerPlayer* Player; // 0x228
	float TriggerTime; // 0x230
};

struct UGridPathFollowingComponent {
	UNavLocalGridManager* GridManager; // 0x250
};

struct UParticleModuleMeshRotationRate_Seeded {
	FParticleRandomSeedInfo RandomSeedInfo; // 0x78
};

struct URig {
	TArray<FTransformBase> TransformBases; // 0x30
	TArray<FNode> Nodes; // 0x40
};

struct UTigerLoadingScreenAsset {
	TSoftObjectPtr<UAkAudioEvent> StartAudioEvent; // 0x28
	TSoftClassPtr<UObject> LoadingScreenWidget; // 0x50
};

struct UMaterialExpressionReroute {
	FExpressionInput Input; // 0x40
};

struct UTigerTitleErrorUI {
	UTigerOnlineError* OnlineError; // 0x280
	bool bIsOpen; // 0x288
};

struct UTigerVendorStoreCategory {
	TArray<FTigerVendorStoreCategoryItem> CachedItems; // 0x28
	TArray<FTigerPersistentItemDefinition> ItemDefinitions; // 0x38
};

struct UHudSettings {
	char bShowHUD : 1; // 0x28
	TArray<FName> DebugDisplay; // 0x30
};

struct UParticleModuleTypeDataBeam2 {
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

struct ULayer {
	FName LayerName; // 0x28
	char bIsVisible : 1; // 0x30
	TArray<FLayerActorStats> ActorStats; // 0x38
};

struct UNiagaraDataInterfaceChaosDestruction {
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

struct UTBP_ContextualHelp_Tutorial_Inventory_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UTigerAnimationSet {
	TArray<UTigerAnimationSetAsset*> ParentSets; // 0x28
	TMap<FName, UAnimSequence*> Sequences; // 0x38
	TMap<FName, UAnimMontage*> Montages; // 0x88
	TMap<FName, UTigerMontageList*> MontageLists; // 0xd8
	TMap<FName, UBlendSpace*> BlendSpaces; // 0x128
	TMap<FName, UBlendSpace1D*> BlendSpaces1D; // 0x178
	TMap<FName, UTigerRandomSequenceList*> RandomSequenceLists; // 0x1c8
	TMap<FName, UTigerCustomSequenceList*> CustomSequences; // 0x218
	TMap<FName, UTigerCustomMontageList*> CustomMontages; // 0x268
	TMap<FName, UTigerCustomBlendSpaceList*> CustomBlendSpaces; // 0x2b8
	TMap<FName, UTigerCustomBlendSpace1DList*> CustomBlendSpaces1D; // 0x308
	int32_t Priority; // 0x358
};

struct UTexture {
	FGuid LightingGuid; // 0x68
	int32_t LODBias; // 0x78
	TextureCompressionSettings CompressionSettings; // 0x7c
	TextureFilter Filter; // 0x7d
	ETextureMipLoadOptions MipLoadOptions; // 0x7e
	TextureGroup LODGroup; // 0x7f
	FPerPlatformFloat Downscale; // 0x80
	ETextureDownscaleOptions DownscaleOptions; // 0x84
	char SRGB : 1; // 0x85
	char bDistanceField : 1; // 0x85
	char bMultiChannelDistanceField : 1; // 0x85
	int32_t DistanceFieldTargetResolution; // 0x88
	float DistanceFieldScanRadius; // 0x8c
	char bNoTiling : 1; // 0x90
	char VirtualTextureStreaming : 1; // 0x90
	char CompressionYCoCg : 1; // 0x90
	char bNotOfflineProcessed : 1; // 0x90
	char bAsyncResourceReleaseHasBeenStarted : 1; // 0x90
	TArray<UAssetUserData*> AssetUserData; // 0x98
};

struct UTBP_UI_InputMenuPrompt_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad; // 0x268
	UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard; // 0x270
	UTBP_UI_TransitionMenuButton_C* TransitionMenuButton; // 0x278
	FText PrefixText; // 0x280
	FText PostfixTest; // 0x298
	FName InputAction; // 0x2b0
	bool bListenForInput; // 0x2b8
	FMulticastInlineDelegate OnInputPressed; // 0x2c0
};

struct UAkItemBoolProperties {
	FMulticastInlineDelegate OnSelectionChanged; // 0x108
	FMulticastInlineDelegate OnPropertyDragged; // 0x118
};

struct UPlatformEventsComponent {
	FMulticastInlineDelegate PlatformChangedToLaptopModeDelegate; // 0xb0
	FMulticastInlineDelegate PlatformChangedToTabletModeDelegate; // 0xc0
};

struct UAkPS5InitializationSettings {
	FAkCommonInitializationSettings CommonSettings; // 0x28
	FAkCommunicationSettingsWithSystemInitialization CommunicationSettings; // 0x88
	FAkPS5AdvancedInitializationSettings AdvancedSettings; // 0xb0
};

struct UDatasmithVREDSceneImportData {
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

struct UParticleModuleMeshRotation {
	FRawDistributionVector StartRotation; // 0x30
	char bInheritParent : 1; // 0x78
};

struct UTigerCharacterEyebrowColorCustomization {
	FTigerCharacterCustomizationParameters AdditionalParameters; // 0x110
};

struct ATigerShacklesMine {
	UTigerBuff* ThornsBuff; // 0x228
	UTigerBuff* ShacklesBuff; // 0x230
	USceneComponent* Root; // 0x238
	USceneComponent* IndicatorAnchor; // 0x240
};

struct UTigerLoadingScreenUI {
	FMulticastInlineDelegate OnFadeInCompleteEvent; // 0x260
	FMulticastInlineDelegate OnFadeOutCompleteEvent; // 0x270
	float FadeInTime; // 0x280
	UTigerLoadingScreenAsset* LoadingScreenAsset; // 0x288
	int32_t AkPlayingId; // 0x290
};

struct UGizmoBaseComponent {
	FLinearColor Color; // 0x450
	float HoverSizeMultiplier; // 0x460
	float PixelHitDistanceThreshold; // 0x464
};

struct USoundNodeBranch {
	FName BoolParameterName; // 0x48
};

struct UAREnvironmentProbeComponent {
	FAREnvironmentProbeUpdatePayload ReplicatedPayload; // 0x280
};

struct UTigerAiCanUseWeaponPowerDecorator {
	bool bConditionInvertedOnTick; // 0x68
};

struct URadialForceComponent {
	float Radius; // 0x1f8
	ERadialImpulseFalloff Falloff; // 0x1fc
	float ImpulseStrength; // 0x200
	char bImpulseVelChange : 1; // 0x204
	char bIgnoreOwningActor : 1; // 0x204
	float ForceStrength; // 0x208
	float DestructibleDamage; // 0x20c
	TArray<EObjectTypeQuery> ObjectTypesToAffect; // 0x210
};

struct UNiagaraSimulationStageGeneric {
	ENiagaraIterationSource IterationSource; // 0x40
	int32_t Iterations; // 0x44
	char bSpawnOnly : 1; // 0x48
	char bDisablePartialParticleUpdate : 1; // 0x48
	FNiagaraVariableDataInterfaceBinding DataInterface; // 0x50
};

struct UTigerBrujahTraitMomentumLogic {
	UTigerBrujahTraitMomentum* Config; // 0xc0
	ATigerPlayer* Player; // 0xc8
};

struct UAkLateReverbComponent {
	char bEnable : 1; // 0x1f8
	float SendLevel; // 0x1fc
	float FadeRate; // 0x200
	float Priority; // 0x204
	bool AutoAssignAuxBus; // 0x208
	UAkAuxBus* AuxBus; // 0x210
	FString AuxBusName; // 0x218
	UAkAuxBus* AuxBusManual; // 0x230
};

struct APlayerStart {
	FName PlayerStartTag; // 0x250
};

struct UTigerWorldCompositionHexGridCellComponent {
	float HexCellRadius; // 0x230
};

struct UTBP_UI_Button_CTA_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* OnClick; // 0x268
	UWidgetAnimation* OnHover; // 0x270
	UImage* Arrow_Left; // 0x278
	UImage* Arrow_Right; // 0x280
	UImage* Base; // 0x288
	UImage* Base_Click; // 0x290
	UImage* Border; // 0x298
	UImage* Corner_Left; // 0x2a0
	UImage* Corner_Right; // 0x2a8
	UImage* Dot_Bottom; // 0x2b0
	UImage* Dot_Left; // 0x2b8
	UImage* Dot_Right; // 0x2c0
	UImage* Dot_Top; // 0x2c8
	UImage* Horn_Bottom; // 0x2d0
	UImage* Horn_Top; // 0x2d8
	UImage* Ornament_Bottom; // 0x2e0
	UImage* Ornament_Left; // 0x2e8
	UImage* Ornament_Right; // 0x2f0
	UImage* Ornament_Top; // 0x2f8
	UTBP_UI_TransitionMenuButton_C* StartGameUIButton; // 0x300
	UTigerStyledRichTextBlock* Text; // 0x308
	FMulticastInlineDelegate OnClicked; // 0x310
	FMulticastInlineDelegate OnHovered; // 0x320
	FText ButtonText; // 0x330
	FDataTableRowHandle TextStyle; // 0x348
	bool EnableSmoke; // 0x358
};

struct ULevelSequenceDirector {
	ULevelSequencePlayer* Player; // 0x28
};

struct UNavigationGraphNodeComponent {
	FNavGraphNode Node; // 0x1f8
	UNavigationGraphNodeComponent* NextNodeComponent; // 0x210
	UNavigationGraphNodeComponent* PrevNodeComponent; // 0x218
};

struct UTBP_ContextualHelp_DownedRedGas_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UFXSystemAsset {
	uint32_t MaxPoolSize; // 0x28
	uint32_t PoolPrimeSize; // 0x2c
};

struct UTigerAIFireAtActorTask {
	FBlackboardKeySelector TargetToShootActorKey; // 0x98
	FBlackboardKeySelector CanShootKey; // 0xc0
};

struct ULandscapeGrassType {
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

struct UTigerCollectibleItemAsset {
	UTigerCollectibleData* Collectible; // 0x128
};

struct UMotoSynthSource {
	bool bConvertTo8Bit; // 0x28
	float DownSampleFactor; // 0x2c
	FRuntimeFloatCurve RPMCurve; // 0x30
	TArray<float> SourceData; // 0xb8
	TArray<int16_t> SourceDataPCM; // 0xc8
	int32_t SourceSampleRate; // 0xd8
	TArray<FGrainTableEntry> GrainTable; // 0xe0
};

struct UPhysicsSettings {
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

struct UInterpTrackFloatAnimBPParam {
	UObject* AnimBlueprintClass; // 0x90
	UAnimInstance* AnimClass; // 0x98
	FName ParamName; // 0xa0
};

struct USharkPlatformSettings {
	ESharkPlatformType PlatformType; // 0x38
};

struct UTigerScriptedTexture {
	UTextureRenderTarget2D* ScriptedTexture; // 0x280
};

struct USourceEffectDynamicsProcessorPreset {
	FSourceEffectDynamicsProcessorSettings Settings; // 0xb8
};

struct UMaterialExpressionDistanceFieldGradient {
	FExpressionInput Position; // 0x40
};

struct UTigerDialogueCondition_FinishedCertainGame {
	ETigerGroupingMode ModeFinished; // 0x30
};

struct UTigerVoSettings {
	TSoftObjectPtr<UAkAudioEvent> AudioEvent; // 0x38
	TMap<FName, FTigerVoCategoryData> CategoryData; // 0x60
};

struct USharkRoundRobinSettings {
	bool bEnabled; // 0x38
	TArray<FSharkRoundRobinClassSettings> GroupSettings; // 0x40
};

struct UInterpTrackSound {
	TArray<FSoundTrackKey> Sounds; // 0x90
	char bPlayOnReverse : 1; // 0xa0
	char bContinueSoundOnMatineeEnd : 1; // 0xa0
	char bSuppressSubtitles : 1; // 0xa0
	char bTreatAsDialogue : 1; // 0xa0
	char bAttach : 1; // 0xa0
};

struct UTBP_UI_ElysiumButton_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* HoverAnimation; // 0x268
	UWidgetAnimation* LoopingAnimation; // 0x270
	UWidgetAnimation* InAnimation; // 0x278
	UImage* ArrowDown; // 0x280
	UImage* ArrowUp; // 0x288
	UImage* Border; // 0x290
	UImage* Darken_Hover; // 0x298
	UImage* DiamondLeft; // 0x2a0
	UImage* DiamondRight; // 0x2a8
	UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad; // 0x2b0
	UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard; // 0x2b8
	UCanvasPanel* SmokeClipBox; // 0x2c0
	UTBP_UI_TransitionMenuButton_C* StartGameUIButton; // 0x2c8
	FMulticastInlineDelegate OnClicked; // 0x2d0
	FMulticastInlineDelegate OnHovered; // 0x2e0
};

struct ALightmassPortal {
	ULightmassPortalComponent* PortalComponent; // 0x228
};

struct UTBP_ContextualHelp_RangedWeapon_FireMode_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UMovieSceneCompiledDataManager {
	TMap<int32_t, FMovieSceneSequenceHierarchy> Hierarchies; // 0xd8
	TMap<int32_t, FMovieSceneEvaluationTemplate> TrackTemplates; // 0x128
	TMap<int32_t, FMovieSceneEvaluationField> TrackTemplateFields; // 0x178
	TMap<int32_t, FMovieSceneEntityComponentField> EntityComponentFields; // 0x1c8
};

struct ATigerRebuildableActor {
	USceneComponent* Root; // 0x228
	TArray<USceneComponent*> BuildCreatedComponents; // 0x230
};

struct UTigerCompassMarkerComponent {
	UTigerCompassMarkerWidget* CompassMarkerWidget; // 0xb0
	UTexture2D* MarkerTexture; // 0xb8
	bool bShouldShowByDefault; // 0xc0
};

struct UTigerWeatherSettings {
	TMap<FName, UTigerWeatherScenarioData*> WeatherScenarioAliases; // 0x38
	TMap<UTigerWeatherScenarioData*, float> WeatherScenarioProbabilityRatios; // 0x88
};

struct UCheckBoxStyleAsset {
	FCheckBoxStyle CheckBoxStyle; // 0x28
};

struct UAudioSettings {
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

struct UTBP_Buff_BlindingBeauty_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x250
};

struct UTextureRenderTargetVolume {
	int32_t SizeX; // 0xf0
	int32_t SizeY; // 0xf4
	int32_t SizeZ; // 0xf8
	FLinearColor ClearColor; // 0xfc
	EPixelFormat OverrideFormat; // 0x10c
	char bHDR : 1; // 0x10d
	char bForceLinearGamma : 1; // 0x10d
};

struct UTigerClientChallengesCollection {
	TArray<UTigerClientRewardTrackSeasonalChallenges*> WeeklyChallenges; // 0x28
	UTigerClientRewardTrackDailyChallenges* DailyChallenges; // 0x38
	TArray<UTigerClientRewardTrackMasteryChallenges*> MasteryChallenges; // 0x40
};

struct UInterpTrackInstMove {
	FVector ResetLocation; // 0x28
	FRotator ResetRotation; // 0x34
};

struct UTBP_UI_LicenseAgreement_Popup_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* FulFixAnimation; // 0x268
	UWidgetAnimation* ShowAgreeButton; // 0x270
	UWidgetAnimation* ReadArrowFlash; // 0x278
	UTBP_UI_MenuButton_C* AgreeButton; // 0x280
	UTBP_UI_MenuButton_C* CancelButton; // 0x288
	UImage* Image_144; // 0x290
	UTigerStyledRichTextBlock* License_Text; // 0x298
	UOverlay* ReadArrowContainer; // 0x2a0
	UImage* ReadArrowShadow; // 0x2a8
	UScrollBox* ScrollBox_1; // 0x2b0
	UTBP_UI_Divider_C* TBP_UI_Divider; // 0x2b8
	UTBP_UI_Divider_C* TBP_UI_Divider_2; // 0x2c0
	UTBP_UI_Popup_Base_C* TBP_UI_Popup_Base; // 0x2c8
	UTBP_UI_Scrollbox_C* TBP_UI_Scrollbox; // 0x2d0
	UTigerStyledRichTextBlock* Title_Text; // 0x2d8
	FMulticastInlineDelegate OnDecisionMade; // 0x2e0
	bool Agreed; // 0x2f0
	bool ScrolledFinished; // 0x2f1
	FString Subtitle_TextFormatting; // 0x2f8
	FString Subheader_TextFormatting; // 0x308
	FString UL_TextFormatting; // 0x318
	FString Bold_TextFormating; // 0x328
	FString EL_TextFormatting; // 0x338
};

struct ALevelStreamingVolume {
	TArray<FName> StreamingLevelNames; // 0x260
	char bEditorPreVisOnly : 1; // 0x270
	char bDisabled : 1; // 0x270
	EStreamingVolumeUsage StreamingUsage; // 0x274
};

struct UMovieScenePropertySystem {
	UMovieScenePropertyInstantiatorSystem* InstantiatorSystem; // 0x40
};

struct UInterpToMovementComponent {
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

struct UBTDecorator_IsBBEntryOfClass {
	UObject* TestClass; // 0x90
};

struct ATigerInteractiveObject {
	bool bHasInteractionTrigger; // 0x228
	bool bHasEnterVolumeTrigger; // 0x229
	bool bHasShootingTrigger; // 0x22a
	FText InteractionText; // 0x230
	UBoxComponent* InteractionVolume; // 0x248
	UBoxComponent* EnterVolume; // 0x250
	UBoxComponent* ShootingVolume; // 0x258
	float InteractionTime; // 0x260
	bool bIsInteractibleFromBehind; // 0x264
	USceneComponent* SceneRoot; // 0x268
	EInteractiveObjectState InteractionState; // 0x278
	float CurrentInteractionTimeLeft; // 0x27c
};

struct UARTextureCameraDepth {
	EARDepthQuality DepthQuality; // 0x108
	EARDepthAccuracy DepthAccuracy; // 0x109
	bool bIsTemporallySmoothed; // 0x10a
};

struct ALevelSequenceActor {
	FMovieSceneSequencePlaybackSettings PlaybackSettings; // 0x238
	ULevelSequencePlayer* SequencePlayer; // 0x250
	FSoftObjectPath LevelSequence; // 0x258
	FLevelSequenceCameraSettings CameraSettings; // 0x270
	ULevelSequenceBurnInOptions* BurnInOptions; // 0x278
	UMovieSceneBindingOverrides* BindingOverrides; // 0x280
	char bAutoPlay : 1; // 0x288
	char bOverrideInstanceData : 1; // 0x288
	char bReplicatePlayback : 1; // 0x288
	UObject* DefaultInstanceData; // 0x290
	ULevelSequenceBurnIn* BurnInInstance; // 0x298
	bool bShowBurnin; // 0x2a0
};

struct UMultiLineEditableText {
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

struct UDatasmithStaticMeshIFCImportData {
	FString SourceGlobalId; // 0x28
};

struct UNiagaraPreviewAxis_InterpParamVector4 {
	FVector4 Min; // 0x40
	FVector4 Max; // 0x50
};

struct UOnsetNRT {
	UOnsetNRTSettings* Settings; // 0x78
};

struct UTigerAiShouldUseClanDiscipline {
	float SoaringLeapRayClearance; // 0x98
	float VanishCombatUseChance; // 0x9c
	float ProjectionDashUseDistance; // 0xa0
};

struct UTigerPassiveMomentumLogicComponent {
	float CoolDownReduction; // 0xc0
	float PassiveCoolDown; // 0xc4
	ATigerPlayer* Player; // 0xc8
	float EndTime; // 0xd0
	bool bIsInCooldown; // 0xd4
};

struct UTBP_HeadConfiguration_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	TMap<ENUM_PiercingNames, FTigerCharacterHeadPiercingSocket> PiercingOffsets; // 0x268
	TMap<ENUM_PiercingNames, FName> PiercingNameMappings; // 0x2b8
	FTigerCharacterHeadEyewearOffset EyewearOffset_Nose; // 0x308
	FTigerCharacterHeadEyewearOffset EyewearOffset_EarLeft; // 0x320
	FTigerCharacterHeadEyewearOffset EyewearOffset_EarRight; // 0x338
};

struct UTigerRichTextBlockIconDecorator {
	bool bUsingGamePad; // 0x28
	ATigerPlayerController* PlayerControllerRef; // 0x30
	UDataTable* IconImages; // 0x40
	UTigerKeyTextureMapping* KeyTextureMapping; // 0x48
};

struct UNiagaraMeshRendererProperties {
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

struct UBookMark {
	FVector Location; // 0x28
	FRotator Rotation; // 0x34
	TArray<FString> HiddenLevels; // 0x40
};

struct UParticleModuleMeshRotationRateMultiplyLife {
	FRawDistributionVector LifeMultiplier; // 0x30
};

struct UNavRelevantComponent {
	char bAttachToOwnersRoot : 1; // 0xd4
	UObject* CachedNavParent; // 0xd8
};

struct UTBP_ANS_HeavyAttackRange_C {
	TArray<UParticleSystemComponent*> ChargingParticles; // 0x30
};

struct ULevelStreaming {
	TSoftObjectPtr<UWorld> WorldAsset; // 0x28
	FName PackageNameToLoad; // 0x50
	TArray<FName> LODPackageNames; // 0x58
	FTransform LevelTransform; // 0x80
	int32_t LevelLODIndex; // 0xb4
	int32_t StreamingPriority; // 0xb8
	char bShouldBeVisible : 1; // 0xbe
	char bShouldBeLoaded : 1; // 0xbe
	char bLocked : 1; // 0xbe
	char bIsStatic : 1; // 0xbf
	char bShouldBlockOnLoad : 1; // 0xbf
	char bShouldBlockOnUnload : 1; // 0xbf
	char bDisableDistanceStreaming : 1; // 0xbf
	char bDrawOnLevelStatusMap : 1; // 0xbf
	FLinearColor LevelColor; // 0xc0
	TArray<ALevelStreamingVolume*> EditorStreamingVolumes; // 0xd0
	float MinTimeBetweenVolumeUnloadRequests; // 0xe0
	FMulticastInlineDelegate OnLevelLoaded; // 0xe8
	FMulticastInlineDelegate OnLevelUnloaded; // 0xf8
	FMulticastInlineDelegate OnLevelShown; // 0x108
	FMulticastInlineDelegate OnLevelHidden; // 0x118
	ULevel* LoadedLevel; // 0x128
	ULevel* PendingUnloadLevel; // 0x130
};

struct UMaterialExpressionMaterialAttributeLayers {
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

struct ATigerHavenCapturePoint {
	FText PointActivatedText; // 0x228
	float HavenMarkerHeightOffset; // 0x240
	ATigerHaven* AssignedHaven; // 0x248
	bool bRevealedEveryone; // 0x2cc
};

struct UGizmoLocalFloatParameterSource {
	float Value; // 0x48
	FGizmoFloatParameterChange LastChange; // 0x4c
};

struct UTigerAimingCameraBehavior {
	float MaxWorldDistanceForFindingTarget; // 0x140
	float AimAssistStrengthMultiplier; // 0x144
	float PassiveAimAssistStrength; // 0x148
	float YawRotationMultiplier; // 0x14c
	float PitchRotationMultiplier; // 0x150
	float MaximumFollowDegrees; // 0x154
	float AimAssistTargetLeadAmount; // 0x158
	float AimAssistStrengthByVelocityMultiplier; // 0x15c
};

struct ATigerEntityHelicopter {
	UAkAudioEvent* PreparingToFireSound; // 0x228
	UAkAudioEvent* TargetEnteredSpotlightSound; // 0x230
	UAkAudioEvent* TargetLeftSpotlightSound; // 0x238
	ATigerProjectile* ProjectileClass; // 0x240
	UTigerRangedWeapon* WeaponType; // 0x248
	UTigerRangedWeapon* Weapon; // 0x250
	UDataTable* RangedWeaponsDatatable; // 0x258
	TWeakObjectPtr<ATigerPlayer> TargetedPlayer; // 0x268
	USceneComponent* LineOfSightStart; // 0x270
	FVector_NetQuantize10 SpotlightEndTarget; // 0x284
	USceneComponent* SceneRoot; // 0x290
	UChildActorComponent* HelicopterChildActor; // 0x298
	float SpotlightMovementSpeed; // 0x2a0
	float TargetSpottedDelayBeforeFiring; // 0x2b8
};

struct UParticleEmitter {
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

struct UAsyncActionChangePrimaryAssetBundles {
	FMulticastInlineDelegate Completed; // 0x78
};

struct ATBP_TigerPlayerCameraManager_C {
	float HighSpeedCameraTreshold; // 0x2900
	float MinMoveSpeedForMeleeCamera; // 0x2904
};

struct USoundNodeSwitch {
	FName IntParameterName; // 0x48
};

struct UTigerChallengeBreakMasquerade {
	bool bOncePerMatch; // 0xb0
};

struct UMovieSceneNiagaraSystemSpawnSection {
	ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior; // 0xe8
	ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior; // 0xec
	ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior; // 0xf0
	ENiagaraAgeUpdateMode AgeUpdateMode; // 0xf4
};

struct UTBP_Buff_KindredCharm_Npc_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x248
};

struct UAudioAnalyzerNRT {
	USoundWave* Sound; // 0x28
	float DurationInSeconds; // 0x30
};

struct ATigerTrap {
	FMulticastInlineDelegate OnTriggered; // 0x230
	USceneComponent* Root; // 0x240
	UStaticMeshComponent* TrapMesh; // 0x248
	UBoxComponent* ShootingVolume; // 0x250
	USphereComponent* TriggerVolume; // 0x258
	USphereComponent* ExplosionVolume; // 0x260
	USphereComponent* GasVolume; // 0x268
	UParticleSystemComponent* ArmedParticle; // 0x270
	UParticleSystemComponent* AreaParticle; // 0x278
	UParticleSystemComponent* ExplosionParticle; // 0x280
	UParticleSystemComponent* GasParticle; // 0x288
	UTigerTrapsConfig* Config; // 0x290
	UTigerTrapsConfig* RawConfig; // 0x298
	UTigerBuff* GasBuff; // 0x2a0
	UDecalComponent* Decal; // 0x2a8
	FTigerPersistentPlayerID OwnerPersistentId; // 0x2b0
	int32_t PowerLevel; // 0x2cc
	bool bIsPlaced; // 0x2d0
	bool bIsArmed; // 0x2d1
	bool bTriggered; // 0x2d3
	FVector ForwardDirection; // 0x2e8
	FVector Velocity; // 0x2f4
	UMaterialInstanceDynamic* TrapMaterialInstance; // 0x318
};

struct UEdGraphPin_Deprecated {
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

struct ATigerEntityJudgeHelicopter {
	ATigerJudge* Judge; // 0x2e0
	float DesiredForwardOffsetFromJudge; // 0x2f0
	float DesiredHeight; // 0x2f4
	float MaxSpeed; // 0x2f8
	float MaxTargetDistance2DFromJudge; // 0x2fc
	float MinimumTargetHeight; // 0x300
	float MinimumHeightOverJudge; // 0x304
	float LoseTargetTime; // 0x308
	FTimerHandle KillSelfHandle; // 0x310
	ETigerJudgeHelicopterSpotlightState CurrentSpotlightState; // 0x318
};

struct ATigerTutorialNpcSpawner {
	UTigerTutorialTrainerAsset* DataAsset; // 0x228
};

struct UInterpTrackFloatMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UNiagaraPreviewAxis_InterpParamBase {
	FName Param; // 0x28
	int32_t Count; // 0x30
};

struct UTBP_UI_ArchetypeDescription_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* HideDetailsAnim; // 0x268
	UWidgetAnimation* ShowDetailsAnim; // 0x270
	UTigerStyledRichTextBlock* ArchetypeDescriptionWidget; // 0x278
	UTigerStyledRichTextBlock* ArchetypeHeader; // 0x280
	UTigerStyledRichTextBlock* ArchetypeKeywordsWidget; // 0x288
	UTigerStyledRichTextBlock* ClanHeader; // 0x290
	UTigerPlayerClanData* ClanData; // 0x298
	UTigerPowerKit* ArchetypeData; // 0x2a0
	bool bHideDetails; // 0x2a8
};

struct AGeometryCollectionRenderLevelSetActor {
	UVolumeTexture* TargetVolumeTexture; // 0x228
	UMaterial* RayMarchMaterial; // 0x230
	float SurfaceTolerance; // 0x238
	float Isovalue; // 0x23c
	bool Enabled; // 0x240
	bool RenderVolumeBoundingBox; // 0x241
};

struct UTigerVanishConfig {
	TArray<UTigerBuff*> VanishBuff; // 0x160
	FText MovementSpeedText; // 0x170
	FText MovementSpeedSuffix; // 0x188
};

struct UTigerDisciplineShockwavePunch {
	UTigerShockwavePunchConfig* DisciplineConfig; // 0x110
	UAnimMontage* PickedMontage; // 0x118
};

struct ATigerDamageTriggerVolume {
	float DamagePerSecond; // 0x260
	bool bOnlyDamageKindred; // 0x264
	bool bDoNotDamageDowned; // 0x265
	float DamageRate; // 0x268
	bool bEnableDamage; // 0x26c
	TArray<FDamageTriggerOverlapData> OverlappingCharacters; // 0x270
};

struct UTigerAnimNotifyState_EnableWeaponHitbox {
	UCurveFloat* pitchOffsetCurve; // 0x40
	int32_t WeaponIndex; // 0x48
};

struct UTigerNotificationsUIStacker {
	TArray<FDisplayedItemWidget> ShownItemWidgets; // 0x280
	int32_t MaxDisplayedItems; // 0x290
	float ItemMargin; // 0x294
	float ItemDisplayTime; // 0x298
	float ItemMoveTime; // 0x29c
	float ItemFadeOffsetX; // 0x2a0
	TArray<UUserWidget*> WaitingItems; // 0x2a8
	UUserWidget* ItemWidgetFadingIn; // 0x2b8
	UUserWidget* ItemWidgetFadingOut; // 0x2c0
	UCanvasPanel* ItemCanvasWidget; // 0x2c8
};

struct UTigerBuffComponent {
	FMulticastInlineDelegate OnBuffAdded; // 0xb0
	FMulticastInlineDelegate OnBuffRemoved; // 0xc0
	FMulticastInlineDelegate OnBuffRefreshed; // 0xd0
	FMulticastInlineDelegate OnClientBuffIdUpdated; // 0xe0
	bool bDrawDebugString; // 0xf0
	TArray<UTigerBuffInstance*> BuffInstances; // 0xf8
	TArray<UTigerBuffInstance*> NonVerifiedBuffInstances; // 0x108
	TArray<FTigerDeferredBuffInstantiation> DeferredBuffs; // 0x118
};

struct UMaterialExpression {
	UMaterial* Material; // 0x28
	UMaterialFunction* Function; // 0x30
	char bIsParameterExpression : 1; // 0x38
};

struct ATBP_LocalAI_Controller_C {
	UAIPerceptionComponent* AIPerception; // 0x560
};

struct UWidgetComponent {
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

struct UInteractiveGizmo {
	UInputBehaviorSet* InputBehaviors; // 0x30
};

struct UNoiseField {
	float MinRange; // 0xb0
	float MaxRange; // 0xb4
	FTransform Transform; // 0xc0
};

struct UTigerAIEntityReactPlayersService {
	FBlackboardKeySelector SuspiciousTarget; // 0x70
	float ThresholdDistanceSquared; // 0x98
};

struct UReplicationGraphNode_AlwaysRelevant_ForConnection {
	TArray<FAlwaysRelevantActorInfo> PastRelevantActors; // 0x110
};

struct UMaterialExpressionAtmosphericFogColor {
	FExpressionInput WorldPosition; // 0x40
};

struct UInterpTrackVectorMaterialParam {
	TArray<UMaterialInterface*> TargetMaterials; // 0x90
	FName ParamName; // 0xa0
};

struct UMovieSceneFadeSection {
	FMovieSceneFloatChannel FloatCurve; // 0xe8
	FLinearColor FadeColor; // 0x188
	char bFadeAudio : 1; // 0x198
};

struct UTigerAsyncChooseNextWaypoint {
	FBlackboardKeySelector Index; // 0x70
	FBlackboardKeySelector Waypoint; // 0x98
	FBlackboardKeySelector bWaypointDirectionIsForward; // 0xc0
};

struct USoundNodeDoppler {
	float DopplerIntensity; // 0x48
	bool bUseSmoothing; // 0x4c
	float SmoothingInterpSpeed; // 0x50
};

struct UAISense_Team {
	TArray<FAITeamStimulusEvent> RegisteredEvents; // 0x80
};

struct UNavCollisionBase {
	char bIsDynamicObstacle : 1; // 0x28
};

struct UAkAssetData {
	uint32_t CachedHash; // 0x28
};

struct UMaterialInstance {
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

struct UChaosClothSharedSimConfig {
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

struct ATBP_BuildingWallPresetTester_C {
	USceneComponent* DefaultSceneRoot; // 0x230
	int32_t SegmentsHorizontal; // 0x238
	int32_t SegmentsVertical; // 0x23c
};

struct UTBP_UI_HostMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UButton* BackButton; // 0x298
	UButton* LaunchButton; // 0x2a0
	UEditableTextBox* UserServerName; // 0x2a8
	UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2b0
	FText ServerNameText; // 0x2b8
	bool LaunchIsEnabled?; // 0x2d0
};

struct UForceFeedbackComponent {
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

struct UOnsetNRTSettings {
	bool bDownmixToMono; // 0x28
	float GranularityInSeconds; // 0x2c
	float Sensitivity; // 0x30
	float MinimumFrequency; // 0x34
	float MaximumFrequency; // 0x38
};

struct UCrowdFollowingComponent {
	FVector CrowdAgentMoveDirection; // 0x268
};

struct ATBP_BuffPostProcess_Master_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x238
	UCurveFloat* VisibilityCurve; // 0x240
	float CurrentDuration; // 0x248
	float TotalDuration; // 0x24c
	float CurrentHideDuration; // 0x250
	float TotalHideDuration; // 0x254
	int32_t CurrentlyShownID; // 0x258
	float AdditionalDuration; // 0x25c
	bool UseHideDuration; // 0x260
};

struct UTBP_UI_Discipline_Trap_WorldMarker_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x320
	UWidgetAnimation* OffScreenState; // 0x328
	UWidgetAnimation* DownArrow_FadeOut; // 0x330
	UWidgetAnimation* DetectedText_FadeOut; // 0x338
	UWidgetAnimation* DownArrow_Movement; // 0x340
	UWidgetAnimation* Composite_DetectedAnimationOut; // 0x348
	UWidgetAnimation* Composite_DetectedAnimationIn; // 0x350
	UWidgetAnimation* DefaultBat_OutAnimation; // 0x358
	UWidgetAnimation* DefaultBat_InAnimation; // 0x360
	UTBP_UI_TransitionHeader_C* AnimatedDetectedText; // 0x368
	UImage* DownArrowImage; // 0x370
	UCanvasPanel* RootCanvas; // 0x378
	UImage* TrapDefaultImage; // 0x380
	UImage* TrapDetectedImage; // 0x388
	bool bShouldDetectionWidgetsPlayHide; // 0x390
	FWidgetTransform OnScreenRootTransform; // 0x394
};

struct UTigerCollectibleGrimoireEntrySet {
	TArray<UTigerGrimoireEntry*> Set; // 0x30
};

struct UTigerMasqueradeMarkerProxy {
	bool bIsMarkingFriendlyOrLocalPlayer; // 0x68
	float MarkerRadius; // 0x6c
};

struct UFoliageInstancedStaticMeshComponent {
	FMulticastInlineDelegate OnInstanceTakePointDamage; // 0x678
	FMulticastInlineDelegate OnInstanceTakeRadialDamage; // 0x688
	FGuid GenerationGuid; // 0x698
};

struct UTigerRandomSequenceList {
	TArray<FRandomPlayerSequenceEntry> RandomSequenceList; // 0x28
};

struct ULeaderboardQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x28
	FMulticastInlineDelegate OnFailure; // 0x38
};

struct UBodySetupCore {
	FName BoneName; // 0x28
	EPhysicsType PhysicsType; // 0x30
	ECollisionTraceFlag CollisionTraceFlag; // 0x31
	EBodyCollisionResponse CollisionReponse; // 0x32
};

struct UBuildPatchManifest {
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

struct UAnimationSharingSetup {
	TArray<FPerSkeletonAnimationSharingSetup> SkeletonSetups; // 0x28
	FAnimationSharingScalability ScalabilitySettings; // 0x38
};

struct ULevelVariantSets {
	UObject* DirectorClass; // 0x28
	TArray<UVariantSet*> VariantSets; // 0x30
};

struct UEnvQueryGenerator_Cone {
	FAIDataProviderFloatValue AlignedPointsDistance; // 0x80
	FAIDataProviderFloatValue ConeDegrees; // 0xb8
	FAIDataProviderFloatValue AngleStep; // 0xf0
	FAIDataProviderFloatValue Range; // 0x128
	UEnvQueryContext* CenterActor; // 0x160
	char bIncludeContextLocation : 1; // 0x168
};

struct UTigerFamiliarScoutPassive {
	TArray<ATigerCharacter*> OverlappingCharacters; // 0xb0
	UParticleSystemComponent* OrbitingParticles; // 0xc0
	USphereComponent* ScanSphere; // 0xc8
	ATigerPlayer* Player; // 0xd0
	UTigerScoutsConfig* Config; // 0xd8
	bool bIsPassiveActivated; // 0xe0
	bool bPlayerIsVisible; // 0xe1
};

struct UTBP_UI_LobbyMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UButton* HostButton; // 0x298
	UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_LeaveGroup; // 0x2a0
	UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_PlayerList; // 0x2a8
	UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Quit; // 0x2b0
	UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_Resume; // 0x2b8
	UTBP_UI_InputPrompt_Gamepad_C* InputPrompt_Gamepad_SelectCharacter; // 0x2c0
	UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_LeaveGroup; // 0x2c8
	UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_PlayerList; // 0x2d0
	UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Quit; // 0x2d8
	UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_Resume; // 0x2e0
	UTBP_UI_InputPrompt_Keyboard_C* InputPrompt_Keyboard_SelectCharacter; // 0x2e8
	UTBP_UI_MenuButton_C* LeaveGroupButton; // 0x2f0
	UTBP_UI_MenuButton_C* PlayerListButton; // 0x2f8
	UTBP_UI_ConfirmMenu_C* QuitConfirmation; // 0x300
	UTBP_UI_MenuButton_C* QuitGameButton; // 0x308
	UTBP_UI_MenuButton_C* ResumeButton; // 0x310
	UTBP_UI_MenuButton_C* SelectCharacterButton; // 0x318
	UTBP_UI_BasicMenu_C* TBP_UI_BasicMenu; // 0x320
	UTBP_TigerGameInstance_C* GameInstanceRef; // 0x328
};

struct UMultiLineEditableTextBox {
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

struct ATriggerBase {
	UShapeComponent* CollisionComponent; // 0x228
};

struct UNiagaraSpriteRendererProperties {
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

struct UTigerBuffDOTInstance {
	UTigerBuffDOT* BuffDOT; // 0x88
};

struct UInteractiveTool {
	UInputBehaviorSet* InputBehaviors; // 0x48
	TArray<UObject*> ToolPropertyObjects; // 0x50
};

struct UTBP_ContextualHelp_Ammo_Reserves_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0xf0
};

struct UDrawFrustumComponent {
	FColor FrustumColor; // 0x450
	float FrustumAngle; // 0x454
	float FrustumAspectRatio; // 0x458
	float FrustumStartDist; // 0x45c
	float FrustumEndDist; // 0x460
	UTexture* Texture; // 0x468
};

struct UInterpTrackMoveAxis {
	EInterpMoveAxis MoveAxis; // 0x90
	FInterpLookupTrack LookupTrack; // 0x98
};

struct UModelComponent {
	UBodySetup* ModelBodySetup; // 0x468
};

struct AOnlineBeaconHostObject {
	FString BeaconTypeName; // 0x228
	AOnlineBeaconClient* ClientBeaconActorClass; // 0x238
	TArray<AOnlineBeaconClient*> ClientActors; // 0x240
};

struct UPhysicalMaterial {
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

struct UParticleModuleTypeDataGpu {
	FGPUSpriteEmitterInfo EmitterInfo; // 0x30
	FGPUSpriteResourceData ResourceData; // 0x2b0
	float CameraMotionBlurAmount; // 0x410
	char bClearExistingParticlesOnInit : 1; // 0x414
};

struct ATigerAIGroupCAP {
	TArray<FTigerAiGroupCapSlot> CapSlots; // 0x290
};

struct UABP_VMP_TOR_M_HAIR_01_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x2c0
	FAnimNode_Root AnimGraphNode_Root; // 0x2c8
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_9; // 0x300
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_8; // 0x740
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_7; // 0xb80
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_6; // 0xfc0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_5; // 0x1400
	FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace; // 0x1840
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_4; // 0x1860
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_3; // 0x1ca0
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics_2; // 0x20e0
	FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace; // 0x2520
	FAnimNode_AnimDynamics AnimGraphNode_AnimDynamics; // 0x2540
};

struct UTigerAiShouldRequestOutOfBoundsPursuitSquad {
	FBlackboardKeySelector CurrentTargetKey; // 0x68
	float MaxDistanceFromCurrentSquad; // 0x90
};

struct UAkSlider {
	float Value; // 0x108
	FDelegate ValueDelegate; // 0x10c
	FSliderStyle WidgetStyle; // 0x120
	EOrientation Orientation; // 0x460
	FLinearColor SliderBarColor; // 0x464
	FLinearColor SliderHandleColor; // 0x474
	bool IndentHandle; // 0x484
	bool Locked; // 0x485
	float StepSize; // 0x488
	bool IsFocusable; // 0x48c
	FAkPropertyToControl ThePropertyToControl; // 0x490
	FAkWwiseItemToControl ItemToControl; // 0x4a0
	FMulticastInlineDelegate OnValueChanged; // 0x4e0
	FMulticastInlineDelegate OnItemDropped; // 0x4f0
	FMulticastInlineDelegate OnPropertyDropped; // 0x500
};

struct UEditableGameplayTagQueryExpression_AnyTagsMatch {
	FGameplayTagContainer Tags; // 0x28
};

struct UNiagaraParameterCollection {
	FName Namespace; // 0x28
	TArray<FNiagaraVariable> Parameters; // 0x30
	UMaterialParameterCollection* SourceMaterialCollection; // 0x40
	UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48
	FGuid CompileId; // 0x50
};

struct ATigerTutorialGameMode {
	FMulticastInlineDelegate OnTutorialStart; // 0x4c8
	FMulticastInlineDelegate OnTutorialBeat01Complete; // 0x4d8
	FMulticastInlineDelegate OnTutorialBeat02Complete; // 0x4e8
	FMulticastInlineDelegate OnTutorialBeat03Complete; // 0x4f8
	bool bHasTutorialStarted; // 0x508
	FTigerPreviewerData PlayerAppearance; // 0x510
	UTigerPowerKit* TutorialPlayerArchetype; // 0x7c0
	UTigerBloodTrackPreset* TutorialBloodTrackPreset; // 0x7c8
	UAkAudioEvent* CurrentDialogueEvent; // 0x7d0
	ATigerItemWorldRepresentation* Beat03Consumable; // 0x7d8
};

struct UMaterialParameterCollectionInstance {
	UMaterialParameterCollection* Collection; // 0x30
};

struct UTigerAIThreateningTargetEntityService {
	FBlackboardKeySelector MasqueradeBreachTargetKey; // 0x148
};

struct ULevelSequence {
	UMovieScene* MovieScene; // 0x68
	FLevelSequenceObjectReferenceMap ObjectReferences; // 0x70
	FLevelSequenceBindingReferences BindingReferences; // 0xc0
	TMap<FString, FLevelSequenceObject> PossessedObjects; // 0x160
	UObject* DirectorClass; // 0x1b0
	TArray<UAssetUserData*> AssetUserData; // 0x1b8
};

struct UAISenseConfig_Blueprint {
	UAISense_Blueprint* Implementation; // 0x48
};

struct UTBP_UI_JoinGameMenu_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x290
	UWidgetAnimation* CountdownAnimation; // 0x298
	UButton* BackButton; // 0x2a0
	URichTextBlock* Countdown; // 0x2a8
	UThrobber* LoadingThrobber; // 0x2b0
	UBorder* PopupRoot; // 0x2b8
	UCanvasPanel* RootWidget; // 0x2c0
	UTextBlock* TextBlock_1; // 0x2c8
	UButton* TryAgainButton; // 0x2d0
	UTBP_TigerGameInstance_C* GameInstanceRef; // 0x2d8
	ESlateVisibility ThrobberVisibility; // 0x2e0
	FText TitleText; // 0x2e8
	ESlateVisibility ButtonVisibility; // 0x300
	int32_t CountdownValueLeft; // 0x304
	FTigerBpFindSessionSelectedSession SessionToJoin; // 0x308
	bool bIsFadingOut; // 0x418
	FString SessionURL; // 0x420
	bool bJoinThroughUrl; // 0x430
	ESessionType SESSIONTYPE; // 0x431
};

struct UMaterialExpressionFeatureLevelSwitch {
	FExpressionInput Default; // 0x40
};

struct UTigerDisciplineFlowerOfDeath {
	UTigerFlowerOfDeathConfig* Config; // 0x78
};

struct UBTDecorator_BlueprintBase {
	AAIController* AIOwner; // 0x68
	AActor* ActorOwner; // 0x70
	TArray<FName> ObservedKeyNames; // 0x78
	char bShowPropertyDetails : 1; // 0x98
	char bCheckConditionOnlyBlackBoardChanges : 1; // 0x98
	char bIsObservingBB : 1; // 0x98
};

struct ATigerThumbnailActor {
	USceneComponent* Root; // 0x228
	USceneComponent* ViewOrientation; // 0x230
	int32_t IconWidth; // 0x238
	int32_t IconHeight; // 0x23c
	bool bIsRealtime; // 0x240
	float FOV; // 0x244
	TSoftObjectPtr<UTextureCube> Cubemap; // 0x248
	float CubemapIntensity; // 0x270
	bool bShouldGenerateImage; // 0x274
	TArray<FSoftClassPath> ItemPaths; // 0x278
};

struct UBTDecorator_DoesPathExist {
	FBlackboardKeySelector BlackboardKeyA; // 0x68
	FBlackboardKeySelector BlackboardKeyB; // 0x90
	char bUseSelf : 1; // 0xb8
	EPathExistanceQueryType PathQueryType; // 0xbc
	UNavigationQueryFilter* FilterClass; // 0xc0
};

struct UTBP_UI_Loading_Throbber_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x260
	UWidgetAnimation* Loop; // 0x268
	UImage* Loading_Throbber_Image_Bot; // 0x270
	UImage* Loading_Throbber_Image_Mid; // 0x278
	UImage* Loading_Throbber_Image_Top; // 0x280
};

struct UMaterialExpressionLandscapeLayerSwitch {
	FExpressionInput LayerUsed; // 0x40
	FExpressionInput LayerNotUsed; // 0x54
	FName ParameterName; // 0x68
	char PreviewUsed : 1; // 0x70
	FGuid ExpressionGUID; // 0x74
};

struct UEditableStaticMeshAdapter {
	UStaticMesh* StaticMesh; // 0x28
	UStaticMesh* OriginalStaticMesh; // 0x30
	int32_t StaticMeshLODIndex; // 0x38
};

struct UTBP_UI_Popup_Base_C {
	UWidgetAnimation* CloseAnimation; // 0x260
	UWidgetAnimation* OpenAnimation; // 0x268
	UTBP_UI_HorizontalFadeSlot_C* Backdrop; // 0x270
	UTBP_UI_HorizontalFadeSlot_C* Background; // 0x278
	UOverlay* Background_conatiner; // 0x280
	UTBP_UI_HorizontalFadeSlot_C* BorderBot; // 0x288
	UTBP_UI_HorizontalFadeSlot_C* BorderTop; // 0x290
	UNamedSlot* Content; // 0x298
};

struct UTigerTraversalStateConfigBase {
	bool bStateIsDisabled; // 0x28
	TArray<ETigerTraversalState> PossibleOutTransitions; // 0x30
	UTigerTraversalBaseFiniteState* TraversalState; // 0x40
	float TimeOutSeconds; // 0x48
	ETigerTraversalState TimeOutInto; // 0x4c
	bool bJumpCooldownAllowedToTick; // 0x4d
	bool bJumpDiminishingReturnsCountdownCanTick; // 0x4e
};

struct UNiagaraDataInterfaceNeighborGrid3D {
	uint32_t MaxNeighborsPerCell; // 0x100
};

struct UCharacterMovementComponent {
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
	EMovementMode DefaultLandMovementMode; // 0x388
	EMovementMode DefaultWaterMovementMode; // 0x389
	EMovementMode GroundMovementMode; // 0x38a
	char bMaintainHorizontalGroundVelocity : 1; // 0x38b
	char bImpartBaseVelocityX : 1; // 0x38b
	char bImpartBaseVelocityY : 1; // 0x38b
	char bImpartBaseVelocityZ : 1; // 0x38b
	char bImpartBaseAngularVelocity : 1; // 0x38b
	char bJustTeleported : 1; // 0x38b
	char bNetworkUpdateReceived : 1; // 0x38b
	char bNetworkMovementModeChanged : 1; // 0x38b
	char bIgnoreClientMovementErrorChecksAndCorrection : 1; // 0x38c
	char bServerAcceptClientAuthoritativePosition : 1; // 0x38c
	char bNotifyApex : 1; // 0x38c
	char bCheatFlying : 1; // 0x38c
	char bWantsToCrouch : 1; // 0x38c
	char bCrouchMaintainsBaseLocation : 1; // 0x38c
	char bIgnoreBaseRotation : 1; // 0x38c
	char bFastAttachedMove : 1; // 0x38c
	char bAlwaysCheckFloor : 1; // 0x38d
	char bUseFlatBaseForFloorChecks : 1; // 0x38d
	char bPerformingJumpOff : 1; // 0x38d
	char bWantsToLeaveNavWalking : 1; // 0x38d
	char bUseRVOAvoidance : 1; // 0x38d
	char bRequestedMoveUseAcceleration : 1; // 0x38d
	char bWasSimulatingRootMotion : 1; // 0x38d
	char bAllowPhysicsRotationDuringAnimRootMotion : 1; // 0x38e
	char bHasRequestedVelocity : 1; // 0x38e
	char bRequestedMoveWithMaxSpeed : 1; // 0x38e
	char bWasAvoidanceUpdated : 1; // 0x38e
	char bProjectNavMeshWalking : 1; // 0x38e
	char bProjectNavMeshOnBothWorldChannels : 1; // 0x38e
	float AvoidanceConsiderationRadius; // 0x3a0
	FVector RequestedVelocity; // 0x3a4
	int32_t AvoidanceUID; // 0x3b0
	FNavAvoidanceMask AvoidanceGroup; // 0x3b4
	FNavAvoidanceMask GroupsToAvoid; // 0x3b8
	FNavAvoidanceMask GroupsToIgnore; // 0x3bc
	float AvoidanceWeight; // 0x3c0
	FVector PendingLaunchVelocity; // 0x3c4
	float NavMeshProjectionInterval; // 0x474
	float NavMeshProjectionTimer; // 0x478
	float NavMeshProjectionInterpSpeed; // 0x47c
	float NavMeshProjectionHeightScaleUp; // 0x480
	float NavMeshProjectionHeightScaleDown; // 0x484
	float NavWalkingFloorDistTolerance; // 0x488
	FCharacterMovementComponentPostPhysicsTickFunction PostPhysicsTickFunction; // 0x490
	float MinTimeBetweenTimeStampResets; // 0x4d8
	FRootMotionSourceGroup CurrentRootMotion; // 0x988
	FRootMotionSourceGroup ServerCorrectionRootMotion; // 0x9c0
	FRootMotionMovementParams RootMotionParams; // 0xa90
	FVector AnimRootMotionVelocity; // 0xad0
};

struct UReplicationGraphNode {
	TArray<UReplicationGraphNode*> AllChildNodes; // 0x28
};

struct UDestroySessionCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UAnimCurveCompressionSettings {
	UAnimCurveCompressionCodec* Codec; // 0x28
};

struct UBTTask_PlaySound {
	USoundCue* SoundToPlay; // 0x70
};

struct UCrowdManager {
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

struct UAsyncActionLoadPrimaryAssetClass {
	FMulticastInlineDelegate Completed; // 0x78
};

struct UTigerBloodPotencyVisualizationConfig {
	TArray<UMaterialInstance*> HeartMeshMaterialTarget; // 0x30
	TSoftObjectPtr<UNiagaraSystem> NiagaraPath; // 0x40
	UParticleSystem* ParticleSystem; // 0x68
	FName ParticleSystemAttachmentSocket; // 0x70
	bool bParticleSystemAbsoluteRotation; // 0x78
};

struct USequenceCameraShake {
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

struct UTigerScoutsConfig {
	ATigerFamiliarScout* ScoutActor; // 0x170
	UTigerFamiliarScoutPassive* PassiveClass; // 0x178
	float RevealDuration; // 0x180
	float PassiveScanRadius; // 0x184
	float ActiveScanRadius; // 0x188
	float ScoutDespawnDistance; // 0x18c
	float ScoutLifetime; // 0x190
	float Reach; // 0x194
	float ScoutingMaxDistanceFromOwner; // 0x198
	float TargetLocationNormalOffset; // 0x19c
	UAnimMontage* AirMontage; // 0x1a0
	UAkAudioEvent* RevealedCharacterAudioEvent; // 0x1a8
	FName BoneToSpawnFrom; // 0x1b0
	bool bShouldAlwaysStartFromPlayer; // 0x1b8
};

struct ATigerLocalAIController {
	float FleeMaxDistanceSquared; // 0x498
	float FacingConeHalfAngle; // 0x49c
	float MinimumAcceptableHeadshotDamageMultiplier; // 0x4a0
	float HeadshotChance; // 0x4a4
	TArray<UTigerBuff*> BuffsOnSelfToIgnoreTargetsList; // 0x4a8
	TArray<UTigerBuff*> BuffsOnTargetsToIgnoreList; // 0x4b8
	ATigerPlayerState* TigerPlayerState; // 0x4d0
};

struct UTigerStaticMeshUserData {
	ETigerStaticMeshType StaticMeshType; // 0x28
	bool bIsClimbable; // 0x29
	bool bIsWallJumpable; // 0x2a
	bool bFadeWhenNearToCamera; // 0x2b
	bool bForceHorizontalVelocityOnFallingImpact; // 0x2c
};

struct UTigerAiGiveOrderToSquad {
	ETigerNpcSquadOrder OrderToGive; // 0x70
};

struct UGameplayTask_SpawnActor {
	FMulticastInlineDelegate Success; // 0x68
	FMulticastInlineDelegate DidNotSpawn; // 0x78
	AActor* ClassToSpawn; // 0xa0
};

struct APaperSpriteActor {
	UPaperSpriteComponent* RenderComponent; // 0x228
};

struct UTigerHookConfig {
	float MaxThrowDistance; // 0x160
	float StopPullDistance; // 0x164
	float TimeUntilReachMaxThrowDistance; // 0x168
	float TimeUntilReturn; // 0x16c
	float FastReelTime; // 0x170
	float RotateTime; // 0x174
	float TimeBeforeReel; // 0x178
	float TimeUntilCutoffVelocity; // 0x17c
	float TimeLeftWhenToAllowHookingPlayerActions; // 0x180
	float HookDamage; // 0x184
	float StunDurationPostHook; // 0x188
	ATigerHook* HookType; // 0x190
	UTigerHookedBuff* HookedBuffType; // 0x198
	UTigerHookingBuff* HookingBuffType; // 0x1a0
	UAnimMontage* ThrowAnimation; // 0x1a8
	UAnimMontage* ReelAnimation; // 0x1b0
	UAnimMontage* AirThrowAnimation; // 0x1b8
	UAnimMontage* AirReelAnimation; // 0x1c0
	UAnimMontage* HookedReactionAnimation; // 0x1c8
	UAnimMontage* HookedReelAnimation; // 0x1d0
	UAnimMontage* HookedPostReelAnimation; // 0x1d8
	bool bUseForcedMove; // 0x1e0
};

struct UGizmoLocalVec2ParameterSource {
	FVector2D Value; // 0x48
	FGizmoVec2ParameterChange LastChange; // 0x50
};

struct ULevelSequenceBurnIn {
	FLevelSequencePlayerSnapshot FrameInformation; // 0x260
	ALevelSequenceActor* LevelSequenceActor; // 0x318
};

struct UAITask {
	AAIController* OwnerController; // 0x68
};

struct UParticleModuleOrbit {
	EOrbitChainMode ChainMode; // 0x38
	FRawDistributionVector OffsetAmount; // 0x40
	FOrbitOptions OffsetOptions; // 0x88
	FRawDistributionVector RotationAmount; // 0x90
	FOrbitOptions RotationOptions; // 0xd8
	FRawDistributionVector RotationRateAmount; // 0xe0
	FOrbitOptions RotationRateOptions; // 0x128
};

struct UTigerDodgeBuff {
	UCurveFloat* MaxSpeedCurve; // 0x248
};

struct UAxisAngleGizmo {
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

struct UTextBlock {
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

struct UDatasmithStaticMeshGLTFImportData {
	FString SourceMeshName; // 0x28
};

struct UTigerMasqueradeConsequence {
	UTigerMasqueradeConsequenceSyncInstance* SyncInstanceClass; // 0x28
	TArray<ETigerAIPlayerAction> ActionsThatCanActivateConsequence; // 0x30
	ATigerPlayer* PlayerOwner; // 0x40
	FName ConsequenceName; // 0x48
	float Duration; // 0x50
	bool bShouldRefresh; // 0x54
};

struct UTBP_ContextualHelp_Tutorial_ShootEntity_C {
	float RetriggerTime; // 0xf0
	FTimerHandle DelayTimer; // 0xf8
};

struct UAnimationDataSourceRegistry {
	TMap<FName, TWeakObjectPtr<UObject>> DataSources; // 0x28
};

struct UTigerEngineSettings {
	bool bVerifyGc; // 0x38
	bool bCreateGameInstanceGcCluster; // 0x39
	float AcousticPortalAutoCloseDistance; // 0x3c
};

struct UTransformProxy {
	bool bRotatePerObject; // 0x70
	bool bSetPivotMode; // 0x71
	FTransform SharedTransform; // 0x90
	FTransform InitialSharedTransform; // 0xc0
};

struct UParticleModuleVectorFieldLocal {
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

struct UMaterialExpressionMapARPassthroughCameraUV {
	FExpressionInput Coordinates; // 0x40
};

struct ATigerMatchHUD {
	UTigerPromptCollectionWidget* PromptCollection; // 0x3f8
	ATigerMusicManager* MusicManager; // 0x400
	UTigerCompassUI* CompassUI; // 0x408
	UTigerMasqueradeStatusWidget* MasqueradeStatus; // 0x410
	UTigerWidget* ChallengeList; // 0x418
	UTigerWidget* BloodResonanceUi; // 0x420
	UTigerRevivingStatusUI* RevivingStatusUI; // 0x428
	UTigerConsumableWheelWidget* ConsumableWheel; // 0x430
	UTigerWidget* ClimbPrompt; // 0x438
	UTigerWidget* LevelOverlay; // 0x440
	UTigerWidget* YouAreDownedPrompt; // 0x448
	UTigerWidget* Minimap; // 0x450
	UTigerWidget* StatusMessage; // 0x458
	UTigerWidget* InputTray; // 0x460
	FMulticastInlineDelegate OnDropItemAction; // 0x468
	UTigerDisciplinesUi* Disciplines; // 0x478
	UTigerCapturePointProgressUI* CapturePointProgressUI; // 0x480
	UTigerWeaponAmmoWidget* WeaponAmmo; // 0x488
	UTigerPingWheelWidget* PingWheelWidget; // 0x490
	UTigerWidget* Watermark; // 0x498
	UTigerSpawnPointSelectionUi* SpawnSelectionUi; // 0x4a0
	UTigerArchetypeSelectPragueUI* ArchetypeSelectUi; // 0x4a8
	UTigerWidget* PreMatchMapWidget; // 0x4b0
	UTigerDeathScreen* DeathScreenClass; // 0x4b8
	UTigerDeathScreen* DeathScreen; // 0x4c0
	UTigerInventoryUI* InventoryUi; // 0x4c8
	UTigerMapSubMenu* MapUi; // 0x4d0
	UTigerInputMenuUI* SettingsMenuUi; // 0x4d8
	UTigerWidget* PerformanceIndicatorUi; // 0x4e0
	UTigerWidget* HealthBar; // 0x4e8
	TArray<TSoftClassPtr<UObject>> PreMatchUiClasses; // 0x4f0
	TArray<UTigerWidget*> PreMatchWidgets; // 0x510
	UTigerPreMatchPaperDollComponent* PreMatchPaperDollComponent; // 0x520
};

struct UTigerAICommandBase {
	ATigerAIController* Owner; // 0x28
	AActor* WorldReferenceActor; // 0x30
	float FailSafeMaxTime; // 0x38
};

struct UTigerReflectConfig {
	ETigerReflectBehaviour ReflectBehaviors[0x5]; // 0x160
	float DamageLetThroughModifier; // 0x168
	float ReflectSpread; // 0x16c
	float MaxDuration; // 0x170
	AActor* BulletReflector; // 0x178
	float ReflectorRadius; // 0x180
	float ReflectorHalfHeight; // 0x184
	float ReflectorCoverageRange; // 0x188
	float PoseSwapDelay; // 0x18c
	TArray<FName> ReflectMontageNames; // 0x190
	FName ReflectEndMontageName; // 0x1a0
	bool bDrawReflectedBulletLines; // 0x1a8
};

struct UTigerTooltipWidget {
	UTigerWidget* OwningWidget; // 0x280
};

struct UTigerMapMarkerWidget {
	bool bShouldUseCustomZOrder; // 0x280
	int32_t CustomZOrder; // 0x284
	int32_t MarkerId; // 0x288
	bool bIsOnMinimap; // 0x28c
	TWeakObjectPtr<UTigerMapMarkerProxy> MapMarkerProxy; // 0x290
	bool bStartHidden; // 0x2a0
	float CurrentOpacity; // 0x2a4
	float FadeSpeed; // 0x2a8
};

struct UTBP_UI_ShotgunCrosshair_2_C {
	FPointerToUberGraphFrame UberGraphFrame; // 0x380
};

struct UMaterialExpressionRuntimeVirtualTextureSample {
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

struct UTigerMapIncenseLine {
	FName LineLengthParam; // 0x260
};

struct UInterpTrackMove {
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

struct UTigerPhysicalInteractionDiablerize {
	float DiablerizeTime; // 0x40
	bool bInstantInterrupt; // 0x44
	UTigerPhysicalInteractionAnimationAsset* DiablerizeAnimationAsset; // 0x48
};

struct ANiagaraPreviewGrid {
	UNiagaraSystem* System; // 0x228
	ENiagaraPreviewGridResetMode ResetMode; // 0x230
	UNiagaraPreviewAxis* PreviewAxisX; // 0x238
	UNiagaraPreviewAxis* PreviewAxisY; // 0x240
	ANiagaraPreviewBase* PreviewClass; // 0x248
	float SpacingX; // 0x250
	float SpacingY; // 0x254
	int32_t NumX; // 0x258
	int32_t NumY; // 0x25c
	TArray<UChildActorComponent*> PreviewComponents; // 0x260
};

struct UNiagaraDataInterfaceArrayInt32 {
	TArray<int32_t> IntData; // 0x50
};

struct UTigerAiPlayerAtWpRangeDecorator {
	bool bConditionInvertedOnTick; // 0x68
};

struct UTigerAiSetMovementMode {
	ETigerAIAnimationMode MovementMode; // 0x70
};

struct UPaperSpriteComponent {
	UPaperSprite* SourceSprite; // 0x478
	UMaterialInterface* MaterialOverride; // 0x480
	FLinearColor SpriteColor; // 0x488
};

struct UAssetMappingTable {
	TArray<FAssetMapping> MappedAssets; // 0x28
};

struct UAchievementQueryCallbackProxy {
	FMulticastInlineDelegate OnSuccess; // 0x30
	FMulticastInlineDelegate OnFailure; // 0x40
};

struct UTigerPassiveVentrueOneConfig {
	UTigerBuff* BuffTypeToApply; // 0x118
	float ShockwaveRadius; // 0x120
	float ShockwaveDamage; // 0x124
	float CooldownReductionPerPointOfDamage; // 0x128
	bool UsePercentReduction; // 0x12c
	bool TriggerOnSelfHarm; // 0x12d
};

struct UProceduralFoliageComponent {
	UProceduralFoliageSpawner* FoliageSpawner; // 0xb0
	float TileOverlap; // 0xb8
	AVolume* SpawningVolume; // 0xc0
	FGuid ProceduralGuid; // 0xc8
};

struct UPlatformInterfaceWebResponse {
	FString OriginalURL; // 0x28
	int32_t ResponseCode; // 0x38
	int32_t Tag; // 0x3c
	FString StringResponse; // 0x40
	TArray<char> BinaryResponse; // 0x50
};

struct UInputComponent {
	TArray<FCachedKeyToActionInfo> CachedKeyToActionInfo; // 0x120
};

struct UTigerRejuvenatingVoiceConfig {
	UAnimMontage* DownedMontage; // 0x170
	UAnimMontage* DownedCancelMontage; // 0x178
	UAnimMontage* DownedInterruptMontage; // 0x180
	UAnimMontage* CancelMontage; // 0x188
	UAnimMontage* InterruptMontage; // 0x190
	UTigerBuff* HealingBuff; // 0x198
	float ReceivedDamageThreshold; // 0x1a0
	float CasterHealRange; // 0x1a4
	float ProjectionHealRange; // 0x1a8
	float ProjectionHealMultiplier; // 0x1ac
	float FirstHealMultiplier; // 0x1b0
	float SelfHealFlat; // 0x1b4
	float SelfHealPercent; // 0x1b8
	float TeamHealFlat; // 0x1bc
	float TeamHealPercent; // 0x1c0
	float HealTickRate; // 0x1c4
	bool bOnlyHealRecentDamage; // 0x1c8
	bool bRecentDamageVisibleForGroup; // 0x1c9
	bool bShouldGlideWhenActive; // 0x1ca
};
